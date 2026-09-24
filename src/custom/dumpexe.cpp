#include <fstream>
#include <array>
#include <algorithm>
#include <chrono>
#include <cstring>
#include <cstdarg>
#include <cstdio>
#include <ctime>
#include <memory>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#include "../../include/custom.h"
#include "asm.h"
#include "dos_inc.h"
#include "dumpexe.h"

namespace {
void dump_log(const char *format, ...)
{
	using namespace std::chrono;
	const auto now = system_clock::now();
	const auto time = system_clock::to_time_t(now);
	const auto ms = duration_cast<milliseconds>(now.time_since_epoch()) % 1000;

	std::tm tm_buf = {};
	localtime_r(&time, &tm_buf);

	char timestamp[32] = {};
	std::strftime(timestamp, sizeof(timestamp), "%F %T", &tm_buf);

	std::fprintf(stderr, "%s.%03lld | DUMPEXE: ",
	             timestamp, static_cast<long long>(ms.count()));

	va_list args;
	va_start(args, format);
	std::vfprintf(stderr, format, args);
	va_end(args);

	std::fputc('\n', stderr);
	std::fflush(stderr);
}

std::string make_dump_suffix()
{
	using namespace std::chrono;
	const auto now = system_clock::now();
	const auto time = system_clock::to_time_t(now);
	const auto ms = duration_cast<milliseconds>(now.time_since_epoch()) % 1000;

	std::tm tm_buf = {};
	localtime_r(&time, &tm_buf);

	char stamp[48] = {};
	std::snprintf(stamp,
	              sizeof(stamp),
	              "%04d%02d%02d-%02d%02d%02d-%03lld",
	              tm_buf.tm_year + 1900,
	              tm_buf.tm_mon + 1,
	              tm_buf.tm_mday,
	              tm_buf.tm_hour,
	              tm_buf.tm_min,
	              tm_buf.tm_sec,
	              static_cast<long long>(ms.count()));
	return stamp;
}

std::string sanitize_dump_basename(const std::string &name)
{
	if (name.empty())
		return "NONAME";

	std::string out;
	out.reserve(name.size());
	for (const unsigned char ch : name) {
		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ||
		    (ch >= '0' && ch <= '9') || ch == '_' || ch == '-' || ch == '.') {
			out.push_back(static_cast<char>(ch));
		} else {
			out.push_back('_');
		}
	}
	return out.empty() ? "NONAME" : out;
}

std::string trimmed_mcb_name(const uint16_t psp)
{
	if (psp == 0)
		return {};

	char raw_name[9] = {};
	DOS_MCB mcb(psp - 1);
	mcb.GetFileName(raw_name);
	raw_name[8] = '\0';

	std::string name(raw_name);
	while (!name.empty() && name.back() == ' ')
		name.pop_back();
	return name;
}

uint16_t resolve_active_psp()
{
	const uint16_t current_psp = dos.psp();
	if (current_psp >= 1 && current_psp < 0xa000)
		return current_psp;

	return 0;
}
}

namespace m2c {
extern std::string output_dir;

namespace {
std::string output_path_for(const std::string &file_name)
{
	if (output_dir.empty() || output_dir == ".")
		return file_name;
	return output_dir + "/" + file_name;
}

struct ExecStartInfo {
	bool valid = false;
	std::string name = {};
	dw psp = 0;
	dw loadseg = 0;
	dw cs = 0;
	dw ip = 0;
	dw ss = 0;
	dw sp = 0;
};

struct ExecRequestInfo {
	std::string name = {};
	uint8_t mode = 0;
	uint16_t caller_cs = 0;
	uint16_t caller_ip = 0;
	uint16_t parent_psp = 0;
};

ExecStartInfo first_exec_info = {};
ExecStartInfo last_exec_info = {};
std::vector<ExecRequestInfo> exec_requests = {};

std::string json_escape(const std::string &in)
{
	std::string out;
	out.reserve(in.size() + 8);
	for (const unsigned char ch : in) {
		switch (ch) {
		case '\\': out += "\\\\"; break;
		case '"': out += "\\\""; break;
		case '\n': out += "\\n"; break;
		case '\r': out += "\\r"; break;
		case '\t': out += "\\t"; break;
		default:
			if (ch >= 0x20) {
				out.push_back(static_cast<char>(ch));
			}
			break;
		}
	}
	return out;
}
} // namespace

#ifdef _MSC_VER
#pragma pack(1)
#endif
struct ExeInfoRecType {
	dw cs_;
	dw ip_;
	dw ss_;
	dw sp_;
	dw psp;
	dw loadseg;
	dd size;
	char name[14];
} GCC_ATTRIBUTE(packed);
#ifdef _MSC_VER
#pragma pack()
#endif

ExeInfoRecType exeInfo;

dw loadseg_;

void dumpexe_start_hook(const char *name,
                        dw loadseg,
                        dw load_cs,
                        dw load_ip,
                        dw load_ss,
                        dw load_sp)
{
    const std::string exec_name = name ? name : "";
    m2c::exeInfo.cs_ = load_cs;
    m2c::exeInfo.ip_ = load_ip;
    m2c::exeInfo.ss_ = load_ss;
    m2c::exeInfo.sp_ = load_sp;
    m2c::exeInfo.psp = dos.psp();
    m2c::exeInfo.loadseg = loadseg;
    last_exec_info = {
            true,
            exec_name,
            dos.psp(),
            loadseg,
            load_cs,
            load_ip,
            load_ss,
            load_sp,
    };
    if (!first_exec_info.valid) {
        first_exec_info = last_exec_info;
    }
    dump_log("start hook: psp=%04x loadseg=%04x cs:ip=%04x:%04x ss:sp=%04x:%04x",
             m2c::exeInfo.psp, loadseg, load_cs, load_ip, load_ss, load_sp);
    loadseg_ = loadseg;
}

void dumpexe_note_exec_request(const char *name,
                               uint8_t mode,
                               uint16_t caller_cs,
                               uint16_t caller_ip,
                               uint16_t parent_psp)
{
	exec_requests.push_back({name ? name : "", mode, caller_cs, caller_ip, parent_psp});
	dump_log("exec request: mode=%02x caller=%04x:%04x psp=%04x name=%s",
	         mode, caller_cs, caller_ip, parent_psp, name ? name : "");
}

void DumpExe1(bool pressed)
{
	if (!pressed)
		return;

	const uint16_t owner_psp = resolve_active_psp();
	const std::string live_name = !exename.empty() ? exename : trimmed_mcb_name(owner_psp);
	const size_t max_name_len = sizeof(m2c::exeInfo.name) - 2;
	const size_t safe_name_len = std::min(live_name.size(), max_name_len);
	std::memset(exeInfo.name, 0, sizeof(exeInfo.name));
	exeInfo.name[0] = static_cast<char>(safe_name_len);
	if (safe_name_len > 0)
		std::memcpy(m2c::exeInfo.name + 1, live_name.c_str(), safe_name_len);
	exeInfo.name[safe_name_len + 1] = '\0';

	exeInfo.psp = owner_psp;
	exeInfo.loadseg = loadseg_;

	if (!owner_psp) {
		dump_log("No active PSP. Refusing dump.");
		return;
	}

	const uint32_t dump_base_linear = static_cast<uint32_t>(owner_psp) * 0x10u;
	dump_log("Dump base: psp=%04x linear=%x loadseg=%04x init cs:ip=%04x:%04x init ss:sp=%04x:%04x live cs:ip=%04x:%04x name=%s",
	         owner_psp, dump_base_linear, loadseg_, exeInfo.cs_, exeInfo.ip_,
	         exeInfo.ss_, exeInfo.sp_, SegValue(cs), reg_ip,
	         live_name.empty() ? "NONAME" : live_name.c_str());

	uint16_t mcb_seg = owner_psp - 1;
	uint16_t last_end_seg = owner_psp;
	size_t owned_blocks = 0;

	while (mcb_seg < 0xa000) {
		DOS_MCB mcb(mcb_seg);
		if (mcb.GetPSPSeg() != owner_psp) {
			break;
		}

		const uint16_t block_start_seg = mcb_seg + 1;
		const uint16_t block_end_seg = static_cast<uint16_t>(block_start_seg + mcb.GetSize());
		last_end_seg = block_end_seg;
		++owned_blocks;

		dump_log("Owned MCB[%zu]: mcb=%04x type=%02x block=%04x..%04x paras=%04x",
		         owned_blocks - 1, mcb_seg, mcb.GetType(), block_start_seg,
		         block_end_seg, mcb.GetSize());

		if (mcb.GetType() == 'Z') {
			break;
		}

		mcb_seg = block_end_seg;
	}

	uint32_t size = 0;
	if (last_end_seg > owner_psp) {
		size = static_cast<uint32_t>(last_end_seg - owner_psp) * 0x10u;
	}
	const uint32_t video_base_linear = 0xA0000u;
	if (dump_base_linear < video_base_linear) {
		const uint32_t max_size = video_base_linear - dump_base_linear;
		if (size > max_size) {
			dump_log("Clamping dump at VGA base: requested=%u clamped=%u",
			         size, max_size);
			size = max_size;
		}
	} else {
		size = 0;
	}

	dump_log("Resulting dump: start=%04x end=%04x blocks=%zu size=%u",
	         owner_psp, last_end_seg, owned_blocks, size);
	if (owned_blocks == 0 || size == 0) {
		dump_log("No owned memory range for PSP %04x. Refusing dump.", owner_psp);
		return;
	}
	exeInfo.size = size;
	std::vector<char> dump_bytes(size);
	MEM_BlockRead(dump_base_linear, dump_bytes.data(), size);

	std::ofstream OutFile; // Output file stream
	const std::string dump_file_name = output_path_for(
	        sanitize_dump_basename(live_name) + "." + make_dump_suffix() + ".1");
	OutFile.open(dump_file_name, std::ios::binary | std::ios::out);
	if (!OutFile.is_open()) {
		dump_log("Can't make file %s", dump_file_name.c_str());
		return;
	}

	const uint16_t DumpID = 'D' + ('E' * 0x100);
	OutFile.write(reinterpret_cast<const char *>(&DumpID), sizeof(DumpID));
	OutFile.write(reinterpret_cast<const char *>(&exeInfo),
	              sizeof(ExeInfoRecType));
	OutFile.write(dump_bytes.data(), size);
	OutFile.close();
	dump_log("Written %s", dump_file_name.c_str());

	const std::string meta_file_name = dump_file_name + ".meta.json";
	std::ofstream meta_file(meta_file_name, std::ios::binary | std::ios::out);
	if (meta_file.is_open()) {
		meta_file << "{\n";
		meta_file << "  \"dump_file\": \"" << json_escape(dump_file_name) << "\",\n";
		meta_file << "  \"dump_name\": \"" << json_escape(live_name) << "\",\n";
		meta_file << "  \"dump_psp\": " << owner_psp << ",\n";
		meta_file << "  \"dump_loadseg\": " << loadseg_ << ",\n";
		meta_file << "  \"dump_runtime_cs\": " << SegValue(cs) << ",\n";
		meta_file << "  \"dump_runtime_ip\": " << reg_ip << ",\n";
		meta_file << "  \"dump_runtime_ss\": " << SegValue(ss) << ",\n";
		meta_file << "  \"dump_runtime_sp\": " << reg_sp << ",\n";
		meta_file << "  \"first_exec\": ";
		if (first_exec_info.valid) {
			meta_file << "{"
			          << "\"name\":\"" << json_escape(first_exec_info.name) << "\","
			          << "\"psp\":" << first_exec_info.psp << ","
			          << "\"loadseg\":" << first_exec_info.loadseg << ","
			          << "\"cs\":" << first_exec_info.cs << ","
			          << "\"ip\":" << first_exec_info.ip << ","
			          << "\"ss\":" << first_exec_info.ss << ","
			          << "\"sp\":" << first_exec_info.sp << "}";
		} else {
			meta_file << "null";
		}
		meta_file << ",\n";
		meta_file << "  \"last_exec\": ";
		if (last_exec_info.valid) {
			meta_file << "{"
			          << "\"name\":\"" << json_escape(last_exec_info.name) << "\","
			          << "\"psp\":" << last_exec_info.psp << ","
			          << "\"loadseg\":" << last_exec_info.loadseg << ","
			          << "\"cs\":" << last_exec_info.cs << ","
			          << "\"ip\":" << last_exec_info.ip << ","
			          << "\"ss\":" << last_exec_info.ss << ","
			          << "\"sp\":" << last_exec_info.sp << "}";
		} else {
			meta_file << "null";
		}
		meta_file << ",\n";
		meta_file << "  \"exec_requests\": [\n";
		for (size_t i = 0; i < exec_requests.size(); ++i) {
			const auto &req = exec_requests[i];
			meta_file << "    {"
			          << "\"name\":\"" << json_escape(req.name) << "\","
			          << "\"mode\":" << static_cast<unsigned>(req.mode) << ","
			          << "\"caller_cs\":" << req.caller_cs << ","
			          << "\"caller_ip\":" << req.caller_ip << ","
			          << "\"parent_psp\":" << req.parent_psp << "}";
			if (i + 1 != exec_requests.size())
				meta_file << ",";
			meta_file << "\n";
		}
		meta_file << "  ]\n";
		meta_file << "}\n";
		meta_file.close();
		dump_log("Written %s", meta_file_name.c_str());
	}
}

void DumpMemorySnapshot(bool pressed)
{
	if (!pressed)
		return;
	DumpExe1(true);
	dump_log("Memory snapshot requested");
}

} // namespace m2c
