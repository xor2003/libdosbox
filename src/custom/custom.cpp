#include "dosbox.h"

#include "json.hpp"

#include "circular_buffer.h"

#include "setup.h"
#include "regs.h"
#include "../../include/custom.h"
#include "custom_hooks.h"
#include "utils.h"
#include "dumpexe.h"

#include "asm.h"

#include <stdio.h>
#include <unistd.h>
#include <array>
#include <limits>
#include <sstream>
#include <cctype>

#ifndef DOSBOX_CUSTOM_ENABLE_GAME_DISPATCH
#define DOSBOX_CUSTOM_ENABLE_GAME_DISPATCH 1
#endif

// -- configuration start

// Enable/disable instruction tracing to the circular buffer.
bool trace_instructions = false;
// Enable/disable instruction tracing to stdout (can be slow).
bool trace_instructions_to_stdout = false;
// Enable/disable instruction comparison between emulated and translated code.
bool compare_mode = false;

// Enable/disable handling of complex self-modified code (can be slow).
bool complex_self_modifications = false;
// Enable/disable collection of run-time information like code addresses and
// segment values.
bool collect_rt_info = true;
// Enable/disable collection of memory access information (slower).
#if DOSBOX_CUSTOM_ENABLE_GAME_DISPATCH
bool collect_rt_info_vars = true;
#else
bool collect_rt_info_vars = false;
#endif

namespace m2c {
extern bool abi_collection_mode;
}

// -- configuration end

namespace {
bool &abi_collection_mode = m2c::abi_collection_mode;

enum class RuntimeProfile : uint8_t {
	Analysis = 0,
	Tracing = 1,
	Compare = 2,
	CollectOnly = 3,
};

struct RuntimeProfileStrategy {
	virtual ~RuntimeProfileStrategy() = default;
	virtual RuntimeProfile id() const = 0;
	virtual const char *name() const = 0;
	virtual void apply() const = 0;
};

struct AnalysisProfile final : RuntimeProfileStrategy {
	RuntimeProfile id() const override { return RuntimeProfile::Analysis; }
	const char *name() const override { return "analysis"; }
	void apply() const override
	{
		compare_mode = false;
		trace_instructions = false;
		trace_instructions_to_stdout = false;
		complex_self_modifications = false;
		collect_rt_info = true;
		collect_rt_info_vars = true;
	}
};

struct TracingProfile final : RuntimeProfileStrategy {
	RuntimeProfile id() const override { return RuntimeProfile::Tracing; }
	const char *name() const override { return "tracing"; }
	void apply() const override
	{
		compare_mode = false;
		trace_instructions = true;
		trace_instructions_to_stdout = false;
		complex_self_modifications = false;
		collect_rt_info = true;
		collect_rt_info_vars = true;
	}
};

struct CompareProfile final : RuntimeProfileStrategy {
	RuntimeProfile id() const override { return RuntimeProfile::Compare; }
	const char *name() const override { return "compare"; }
	void apply() const override
	{
		compare_mode = true;
		trace_instructions = false;
		trace_instructions_to_stdout = false;
		complex_self_modifications = false;
		collect_rt_info = true;
		collect_rt_info_vars = true;
	}
};

struct CollectOnlyProfile final : RuntimeProfileStrategy {
	RuntimeProfile id() const override { return RuntimeProfile::CollectOnly; }
	const char *name() const override { return "collect_only"; }
	void apply() const override
	{
		compare_mode = false;
		trace_instructions = false;
		trace_instructions_to_stdout = false;
		complex_self_modifications = false;
		collect_rt_info = true;
		collect_rt_info_vars = false;
	}
};

AnalysisProfile k_analysis_profile;
TracingProfile k_tracing_profile;
CompareProfile k_compare_profile;
CollectOnlyProfile k_collect_only_profile;

const RuntimeProfileStrategy *g_active_profile = &k_analysis_profile;

void print_runtime_modes()
{
	printf("custom status: profile=%s compare=%d trace=%d trace_stdout=%d collect_rt=%d collect_vars=%d complex_selfmod=%d abi=%d\n",
	       g_active_profile->name(), compare_mode ? 1 : 0,
	       trace_instructions ? 1 : 0,
	       trace_instructions_to_stdout ? 1 : 0,
	       collect_rt_info ? 1 : 0, collect_rt_info_vars ? 1 : 0,
	       complex_self_modifications ? 1 : 0,
	       abi_collection_mode ? 1 : 0);
}

const RuntimeProfileStrategy *profile_by_id(RuntimeProfile p)
{
	switch (p) {
	case RuntimeProfile::Analysis: return &k_analysis_profile;
	case RuntimeProfile::Tracing: return &k_tracing_profile;
	case RuntimeProfile::Compare: return &k_compare_profile;
	case RuntimeProfile::CollectOnly: return &k_collect_only_profile;
	}
	return &k_analysis_profile;
}

void set_runtime_profile(RuntimeProfile p)
{
	g_active_profile = profile_by_id(p);
	g_active_profile->apply();
	printf("custom profile: %s\n", g_active_profile->name());
	print_runtime_modes();
}

void cycle_runtime_profile(bool pressed)
{
	if (!pressed)
		return;
	const auto current = static_cast<uint8_t>(g_active_profile->id());
	const auto next = static_cast<RuntimeProfile>((current + 1U) % 4U);
	set_runtime_profile(next);
}

void profile_analysis(bool pressed)
{
	if (pressed)
		set_runtime_profile(RuntimeProfile::Analysis);
}

void profile_tracing(bool pressed)
{
	if (pressed)
		set_runtime_profile(RuntimeProfile::Tracing);
}

void profile_compare(bool pressed)
{
	if (pressed)
		set_runtime_profile(RuntimeProfile::Compare);
}

void toggle_compare_mode(bool pressed)
{
	if (!pressed)
		return;
	compare_mode = !compare_mode;
	printf("custom option: compare_mode=%d\n", compare_mode ? 1 : 0);
	print_runtime_modes();
}

void toggle_trace_mode(bool pressed)
{
	if (!pressed)
		return;
	trace_instructions = !trace_instructions;
	printf("custom option: trace_instructions=%d\n",
	       trace_instructions ? 1 : 0);
	print_runtime_modes();
}

void toggle_trace_stdout_mode(bool pressed)
{
	if (!pressed)
		return;
	trace_instructions_to_stdout = !trace_instructions_to_stdout;
	printf("custom option: trace_instructions_to_stdout=%d\n",
	       trace_instructions_to_stdout ? 1 : 0);
	print_runtime_modes();
}

void toggle_collect_rt_info_mode(bool pressed)
{
	if (!pressed)
		return;
	collect_rt_info = !collect_rt_info;
	printf("custom option: collect_rt_info=%d\n", collect_rt_info ? 1 : 0);
	print_runtime_modes();
}

void toggle_collect_rt_info_vars_mode(bool pressed)
{
	if (!pressed)
		return;
	collect_rt_info_vars = !collect_rt_info_vars;
	printf("custom option: collect_rt_info_vars=%d\n",
	       collect_rt_info_vars ? 1 : 0);
	print_runtime_modes();
}

void toggle_complex_self_modifications_mode(bool pressed)
{
	if (!pressed)
		return;
	complex_self_modifications = !complex_self_modifications;
	printf("custom option: complex_self_modifications=%d\n",
	       complex_self_modifications ? 1 : 0);
	print_runtime_modes();
}

void toggle_abi_collection_mode(bool pressed)
{
	if (!pressed)
		return;
	abi_collection_mode = !abi_collection_mode;
	printf("custom option: abi_collection_mode=%d\n",
	       abi_collection_mode ? 1 : 0);
	print_runtime_modes();
}

void print_runtime_modes_hotkey(bool pressed)
{
	if (!pressed)
		return;
	print_runtime_modes();
}
} // namespace

// Function to disassemble x86 instructions (defined in DOSBox).
extern Bitu DasmI386(char *buffer, PhysPt pc, Bitu cur_ip, bool bit32);

// masm2c related functions and variables.
namespace m2c {
extern size_t debug;
extern void load_drivers();
void abi_record_call_boundary(dd callee_linear,
                              const CPU_Regs &before_regs,
                              const Segments &before_segs,
                              const CPU_Regs &after_regs,
                              const Segments &after_segs,
                              dw stack_cleanup_bytes);
} // namespace m2c

// Size of the memory region to compare for instruction tracing.
static const size_t COMPARE_SIZE = 0xf0000;

// Global variable to track the last executed instruction pointer.
uint32_t last_ip = 0xffff;

// Function pointer to the DOSBox CPU loop.
extern Bitu Normal_Loop(void);

// Counter for the number of custom runs.
int custom_runs = 0;

// Variable to store the old CPU cycle count.
Bitu old_cycles;
// Stack to store return points for function calls.
std::stack<uint32_t> return_point;

// Flags to control deferred custom calls and execution context.
volatile bool defered_custom_call = false;
bool from_callf = false;
volatile bool from_interpreter = false;

// Flags to control jump comparison and single-stepping.
volatile bool compare_jump = false;
volatile bool doing_single_step = false;

// Counters for initialization runs.
static int init_runs = 0;
static int init = 0;

#if DOSBOX_CUSTOM_ENABLE_GAME_DISPATCH
// Function to initialize the entry point for translated code.
void init_entrypoint(uint16_t relocate);

// Function to dispatch calls to translated functions.
extern bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE *_state);
#endif

// Function to print the backtrace (platform-specific).
#ifndef _WIN32
extern void print_backtrace(uintptr_t pc);
#endif

// masm2c related functions and classes.
namespace m2c {
#if DOSBOX_CUSTOM_ENABLE_GAME_DISPATCH
// Function to initialize masm2c.
extern void Initializer();
#endif
// Class to manage shadow memory for run-time information.
ShadowMemory shadow_memory;

} // namespace m2c

void masm2c_exit(unsigned char exit)
{
	(void)exit;
	init++;
	printf("masm2c_exit Exiting\n");
	// m2c::stackDump();  // Debug stack dump (disabled)
}

// Is the game running?
/**
        init_get_fname - copies the filename from src to dst
        @src:	pathname to a file
        @dst:	string where the filename shoukld be stored
*/
void init_get_fname(char *executable_name_out, char *source_path)
{ // Clearer variable names for readability
	char *current_position = executable_name_out; // Store starting point of
	                                              // output buffer
	const char *filename_start = nullptr; // Initialize pointer to track
	                                      // file name start
	const char *character = (const char *)source_path; // Iterate through
	                                                   // source path

	while (*character != '\0') { // Loop until end of source path is reached
		if (*character == '\\') { // Identify directory character ('\')
			filename_start = character + 1; // Mark the start of the
			                                // escaped section
		}
		character++;
	}

	if (filename_start == nullptr) { // If no escape sequence found, use the
		                         // entire source path
		filename_start = (char *)source_path;
	}

	while ((*current_position++ = static_cast<char>(tolower(
	                static_cast<unsigned char>(*(filename_start++))))) != '\0')
		; // Copy characters from filename section to output, converting
		  // to lowercase
	*current_position = '\0'; // Null-terminate the resulting executable name

	m2c::exename = executable_name_out; // Update global variable with the
	                                    // processed name
}

namespace m2c {

// Flag to defer IRQs.
bool defered_irqs = false;
// Name of the executable being run.
std::string exename;
// Runtime EXE load segment selected by DOSBox.
dw runtime_loadseg = 0;
// Function to print collected traces.
static void print_traces();
static uint32_t compute_runtime_image_size_bytes();

namespace {
constexpr dd k_default_image_start = 0x1920;
constexpr dd k_default_image_end   = 0xa0000;
constexpr size_t k_ptr_candidate_cache_size = 4096;
constexpr size_t k_access_sample_limit = 8;

struct PtrCandidate {
	bool valid = false;
	dd source_addr = 0;
	dd producer_csip = 0;
	dw value = 0;
	dw seg_context = 0;
	uint32_t flags = 0;
	size_t size = 0;
};

std::array<PtrCandidate, k_ptr_candidate_cache_size> ptr_candidate_cache;

static inline dd current_csip()
{
	X86_REGREF
	if (cs >= 0x192 && cs < 0xa000)
		return (cs << 4) + eip;
	return 0;
}

static inline uint32_t gcd32(uint32_t a, uint32_t b)
{
	while (b != 0) {
		const uint32_t t = a % b;
		a = b;
		b = t;
	}
	return a;
}

static inline uint32_t size_to_mask(size_t size)
{
	if (size == 0 || size > 31)
		return 0;
	return 1u << static_cast<uint32_t>(size);
}

static uint32_t cached_runtime_image_size_bytes()
{
	static dw cached_loadseg = 0;
	static uint32_t cached_size = 0;
	if (cached_loadseg != runtime_loadseg || cached_size == 0) {
		cached_loadseg = runtime_loadseg;
		cached_size = compute_runtime_image_size_bytes();
	}
	return cached_size;
}

static inline bool in_runtime_image(dd linear)
{
	const uint32_t image_size = cached_runtime_image_size_bytes();
	if (runtime_loadseg != 0 && image_size != 0) {
		const dd start = static_cast<dd>(runtime_loadseg) << 4;
		return linear >= start && linear < start + image_size;
	}
	return linear >= k_default_image_start && linear < k_default_image_end;
}

static bool looks_like_zstring(dd linear)
{
	if (!in_runtime_image(linear))
		return false;
	const db *mem = reinterpret_cast<const db *>(&m2c::m);
	size_t printable = 0;
	for (size_t i = 0; i < 64; ++i) {
		const dd pos = linear + static_cast<dd>(i);
		if (!in_runtime_image(pos))
			return false;
		const db ch = mem[pos];
		if (ch == 0)
			return printable >= 4;
		if (ch < 0x20 || ch >= 0x7f)
			return false;
		++printable;
	}
	return false;
}

static std::vector<std::string> value_class_names(uint32_t mask)
{
	std::vector<std::string> names;
	if (mask & RtValueDataOffset)
		names.emplace_back("data_offset");
	if (mask & RtValueCodeOffset)
		names.emplace_back("code_offset");
	if (mask & RtValueString)
		names.emplace_back("string");
	if (mask & RtValueSegment)
		names.emplace_back("segment");
	if (mask & RtValueFarPointer)
		names.emplace_back("far_pointer");
	if (names.empty())
		names.emplace_back("unknown");
	return names;
}

static uint32_t classify_runtime_value(uint64_t value,
                                       size_t size,
                                       std::vector<std::pair<dd, uint32_t>> &targets)
{
	X86_REGREF
	uint32_t mask = RtValueUnknown;
	if (size >= 2) {
		const dw off = static_cast<dw>(value & 0xffffu);
		const dd ds_target = (static_cast<dd>(ds) << 4) + off;
		if (in_runtime_image(ds_target)) {
			uint32_t cls = RtValueDataOffset;
			if (looks_like_zstring(ds_target))
				cls |= RtValueString;
			mask |= cls;
			targets.emplace_back(ds_target, cls);
		}
		const dd cs_target = (static_cast<dd>(cs) << 4) + off;
		if (in_runtime_image(cs_target)) {
			mask |= RtValueCodeOffset;
			targets.emplace_back(cs_target, RtValueCodeOffset);
		}
		if (in_runtime_image(static_cast<dd>(off) << 4))
			mask |= RtValueSegment;
	}
	if (size >= 4) {
		const dw off = static_cast<dw>(value & 0xffffu);
		const dw seg = static_cast<dw>((value >> 16u) & 0xffffu);
		const dd far_target = (static_cast<dd>(seg) << 4) + off;
		if (in_runtime_image(far_target)) {
			uint32_t cls = RtValueFarPointer;
			if (looks_like_zstring(far_target))
				cls |= RtValueString;
			mask |= cls;
			targets.emplace_back(far_target, cls);
		}
	}
	return mask;
}

static inline uint64_t pointer_evidence_key(dd source_addr, dd target_addr)
{
	return (static_cast<uint64_t>(source_addr) << 32u) | target_addr;
}

static inline uint64_t access_site_key(dd csip, size_t size, bool is_write)
{
	return (static_cast<uint64_t>(csip) << 8u) |
	       (static_cast<uint64_t>(size & 0x7fu) << 1u) |
	       (is_write ? 1u : 0u);
}

static void remember_pointer_candidate(dd source_addr,
                                       dd producer_csip,
                                       uint64_t value,
                                       size_t size,
                                       uint32_t flags)
{
	if (size < 2 || (flags & (RtValueDataOffset | RtValueCodeOffset | RtValueFarPointer)) == 0)
		return;
	X86_REGREF
	const dw off = static_cast<dw>(value & 0xffffu);
	PtrCandidate &candidate = ptr_candidate_cache[off & (k_ptr_candidate_cache_size - 1)];
	candidate.valid = true;
	candidate.source_addr = source_addr;
	candidate.producer_csip = producer_csip;
	candidate.value = off;
	candidate.seg_context = ds;
	candidate.flags = flags;
	candidate.size = size;
}
} // namespace

struct AbiSummary {
	uint32_t calls = 0;
	uint32_t changed_mask = 0;
	uint32_t preserved_mask = 0xFFFF;
	uint32_t ret_mask = 0;
	uint32_t stack_cleanup_bytes = 0;
};

static std::unordered_map<dd, AbiSummary> abi_summary;

static uint32_t compute_runtime_image_size_bytes()
{
	const dw psp_seg = dos.psp();
	if (!psp_seg || runtime_loadseg < (psp_seg + 0x10)) {
		return 0;
	}
	const dw psp_mem_end_seg = *(dw *)(((db *)&m2c::m) + psp_seg * 0x10 + 2);
	if (psp_mem_end_seg <= runtime_loadseg) {
		return 0;
	}
	const uint32_t size = static_cast<uint32_t>(psp_mem_end_seg - runtime_loadseg) * 0x10u;
	return size;
}

static inline uint32_t regs_changed_mask(const CPU_Regs &before,
                                         const CPU_Regs &after)
{
	uint32_t mask = 0;
	for (int i = 0; i < 8; ++i) {
		if (before.regs[i].dword[0] != after.regs[i].dword[0]) {
			mask |= (1u << i);
		}
	}
	return mask;
}

static std::vector<std::string> mask_to_reg_names(uint32_t mask)
{
	static const char *k_names[8] = {"AX", "CX", "DX", "BX",
	                                  "SP", "BP", "SI", "DI"};
	std::vector<std::string> out;
	for (int i = 0; i < 8; ++i) {
		if (mask & (1u << i)) {
			out.emplace_back(k_names[i]);
		}
	}
	return out;
}

void abi_record_call_boundary(dd callee_linear,
                              const CPU_Regs &before_regs,
                              const Segments &before_segs,
                              const CPU_Regs &after_regs,
                              const Segments &after_segs,
                              dw stack_cleanup_bytes)
{
	(void)before_segs;
	(void)after_segs;
	if (!abi_collection_mode || callee_linear == 0)
		return;

	AbiSummary &s = abi_summary[callee_linear];
	++s.calls;
	const uint32_t changed = regs_changed_mask(before_regs, after_regs);
	s.changed_mask |= changed;
	s.preserved_mask &= ~changed;
	// Heuristic return regs in 16-bit style.
	s.ret_mask |= changed & ((1u << 0) | (1u << 2)); // AX,DX
	s.stack_cleanup_bytes = stack_cleanup_bytes;
}

// Function to dump the stack and shadow memory.
void stackDumpZ()
{
	printf("Executing at exit\n");
	m2c::shadow_memory.dump();
	stackDump(0);
}

} // namespace m2c

// Loguru fatal error handler.
void loguru_fatal(const loguru::Message &message)
{
	(void)message;
	m2c::stackDumpZ();
}

// Custom initialization function for DOSBox programs.
void custom_init_prog(char *name, uint16_t relocate, uint16_t init_cs, uint16_t init_ip)
{
	/**
	 * Program Initialization Hook
	 *
	 * Sets up the runtime analysis environment:
	 * 1. Registers fatal error handler
	 * 2. Initializes masm2c translation
	 * 3. Starts shadow memory tracking
	 */
	static bool registered = false;
	if (!registered) {
		loguru::set_fatal_handler(loguru_fatal);
		atexit(m2c::stackDumpZ); // Register exit handler for final report
		registered = true;
	}

#if DOSBOX_CUSTOM_ENABLE_GAME_DISPATCH
	// Initialize masm2c and check if it's the target binary.
	if (masm2c_init(name, relocate, init_cs, init_ip)) {
		printf("It is target binary. Rise binary enter flags\n");
		custom_runs++;
		init_runs++;
	}
#else
	(void)name;
	(void)relocate;
	(void)init_cs;
	(void)init_ip;
#endif
}

// Custom exit function for DOSBox programs.
void custom_exit_prog(uint8_t exitcode)
{
	// Dump shadow memory (final analysis report)
	m2c::shadow_memory.dump();

	// Check if it was a target binary.
	if (!custom_runs) {
		printf("It wasn't a target binary. Ignoring\n");
		return;
	}

	custom_runs--;
	// Perform deinitialization if needed.
	if (init_runs) {
		printf("Doing deinit\n");
#if DOSBOX_CUSTOM_ENABLE_GAME_DISPATCH
		masm2c_exit(exitcode);
		exit(0);
#else
		(void)exitcode;
#endif

		init_runs--;
	}
}

// Custom call function for handling translated function calls.
int custom_callf(Bitu CS, Bitu IP)
{
	/**
	 * Custom CALLF Handler
	 *
	 * Intercepts function calls to:
	 * 1. Track call depth via shadow stack
	 * 2. Enable runtime analysis
	 * 3. Dispatch to translated functions
	 */
	// Check if it's a target binary and if initialization is complete.
	if (!custom_runs)
		return 0;

	// Check if the call is from a valid code segment.
	if (init_runs) {
#if DOSBOX_CUSTOM_ENABLE_GAME_DISPATCH
		if (CS >= 0xa000 || (CS == 0 && cs == 0xf000))
			return 0;

		// Dispatch the call to the translated function.
		m2c::_STATE _state;
		_state.call_source = 3;
		const CPU_Regs abi_before_regs = cpu_regs;
		const Segments abi_before_segs = Segs;
		const dw abi_old_sp = cpu_regs.regs[REGI_SP].word[W_INDEX];
		const int ret = __dispatch_call((CS << 16) + IP, &_state);
		m2c::abi_record_call_boundary((CS << 4) + IP, abi_before_regs,
		                              abi_before_segs, cpu_regs, Segs,
		                              static_cast<dw>(cpu_regs.regs[REGI_SP].word[W_INDEX] - abi_old_sp));
		return ret;
#else
		(void)CS;
		(void)IP;
		return 0;
#endif
	}

	return 0;
}

// Custom exit function for DOSBox sections.
static void custom_exit(Section *sec)
{
	(void)sec;
	custom_exit_prog(0); // Cleanup on section exit
}

// Custom initialization function for DOSBox sections.
void custom_init(Section *sec)
{
	/**
	 * Custom Initialization
	 *
	 * Sets up:
	 * 1. Exit handler
	 * 2. Debugging hotkeys
	 */
	// Add the custom exit function.
	sec->AddDestroyFunction(&custom_exit);

	// Print library information.
	fprintf(stderr, "Masm2c/DOSBOX lib, build date %s\n", __DATE__);

	// Unused variable.
	X86_REGREF
	m2c::_STATE *_state = 0;

	// Register dump hotkey
	MAPPER_AddHandler(m2c::DumpMemorySnapshot, SDL_SCANCODE_F2, PRIMARY_MOD,
	                  "memdump", "Memory snapshot (Ctrl+F2)");
	MAPPER_AddHandler(m2c::DumpExe1, SDL_SCANCODE_F2, PRIMARY_MOD | MMOD2,
	                  "memdump_raw", "Memory snapshot raw (Ctrl+Alt+F2)");
	MAPPER_AddHandler(cycle_runtime_profile, SDL_SCANCODE_F3, PRIMARY_MOD,
	                  "custprof", "Custom profile");
	MAPPER_AddHandler(profile_analysis, SDL_SCANCODE_F4, PRIMARY_MOD,
	                  "custanal", "Custom analysis");
	MAPPER_AddHandler(profile_tracing, SDL_SCANCODE_F5, PRIMARY_MOD,
	                  "custtrace", "Custom tracing");
	MAPPER_AddHandler(profile_compare, SDL_SCANCODE_F6, PRIMARY_MOD,
	                  "custcmp", "Custom compare");
	MAPPER_AddHandler(toggle_compare_mode, SDL_SCANCODE_1, PRIMARY_MOD,
	                  "custcmp_t", "Toggle compare");
	MAPPER_AddHandler(toggle_trace_mode, SDL_SCANCODE_2, PRIMARY_MOD,
	                  "custtr_t", "Toggle trace");
	MAPPER_AddHandler(toggle_trace_stdout_mode, SDL_SCANCODE_3, PRIMARY_MOD,
	                  "custto_t", "Toggle trace stdout");
	MAPPER_AddHandler(toggle_collect_rt_info_mode, SDL_SCANCODE_4,
	                  PRIMARY_MOD, "custri_t", "Toggle collect rt");
	MAPPER_AddHandler(toggle_collect_rt_info_vars_mode, SDL_SCANCODE_5,
	                  PRIMARY_MOD, "custrv_t", "Toggle collect vars");
	MAPPER_AddHandler(toggle_complex_self_modifications_mode,
	                  SDL_SCANCODE_6, PRIMARY_MOD, "custsm_t",
	                  "Toggle complex selfmod");
	MAPPER_AddHandler(toggle_abi_collection_mode, SDL_SCANCODE_7,
	                  PRIMARY_MOD, "custabi_t", "Toggle ABI collect");
	MAPPER_AddHandler(print_runtime_modes_hotkey, SDL_SCANCODE_0,
	                  PRIMARY_MOD, "custstat", "Custom status");
#if DOSBOX_CUSTOM_ENABLE_GAME_DISPATCH
	set_runtime_profile(RuntimeProfile::Analysis);
#else
	set_runtime_profile(RuntimeProfile::CollectOnly);
#endif
	// MAPPER_AddHandler(DumpExe2, SDL_SCANCODE_F3, PRIMARY_MOD, "dumpexe1",
	//                   "Dumpexe1");
}

// Custom initialization function for the entry point.
void custom_init_entrypoint(char *name, uint16_t loadseg)
{
	(void)name;
	/**
	 * Entry Point Initialization
	 *
	 * Called when a program starts execution to:
	 * 1. Setup translation entry point
	 * 2. Initialize shadow stack
	 * 3. Start instruction tracing
	 */
	X86_REGREF
	m2c::dumpexe_start_hook(loadseg, cs, ip, ss, sp); // Start execution hook
	m2c::runtime_loadseg = loadseg;

	// Check if it's a target binary and if initialization is complete.
	if (!custom_runs)
		return;

	// Reset last_ip.
	last_ip = 0xffff;

	// Initialize the entry point for translated code.
	if (init_runs) {
#if DOSBOX_CUSTOM_ENABLE_GAME_DISPATCH
		init_entrypoint(loadseg);
#else
		(void)loadseg;
#endif
	}
}

// masm2c namespace.
namespace m2c {

// Debug level.
#ifdef M2CDEBUG
size_t debug = M2CDEBUG;
#else
size_t debug = 0;
#endif

// Instruction counter.
size_t counter = 0;
// Shadow stack for tracking function calls.
ShadowStack shadow_stack;

// Memory buffers for instruction trace comparison.
db om[COMPARE_SIZE];
db rm[COMPARE_SIZE];
// Old instruction pointer.
dd oldip;
// Old segment registers.
Segments oldSegs;
// Old CPU registers.
CPU_Regs oldcpu_regs;
// Flags from the DOSBox interpreter.
Bitu dbx_result_flags;
// Segment registers from the DOSBox interpreter.
Segments dbx_result_segs;
// CPU registers from the DOSBox interpreter.
CPU_Regs dbx_result_regs;
// Array to track already checked instructions.
bool already_checked[COMPARE_SIZE] = {0};

// Memory buffer for tracking self-modified code.
db lm[COMPARE_SIZE];

// Indentation level for debug output.
db _indent = 0;
// Current instruction string for debug output.
const char *_str = "";

// Function to get a string of spaces for indentation.
const char *log_spaces(int n)
{
	static const char s[] = "                                                                                          ";
	return n <= 84 ? s + (84 - n) : "";
}

// Function to fix segment register values.
bool fix_segs()
{
	for (size_t i = 0; i < 7; i++) {
		Segs.phys[i] = Segs.val[i] << 4;
	}
	return true;
}

// Function to execute pending IRQs.
void execute_irqs()
{
	// Reference the CPU registers.
	X86_REGREF
	//    log_debug ("CPU_CycleLeft %d\n", CPU_CycleLeft);

	// Flag to prevent reentrancy.
	static volatile bool already_in_hw_int = false;

	// Check if interrupts are enabled and not already in an interrupt handler.
	if (!already_in_hw_int && GET_IF()) {
		already_in_hw_int = true;
		{
#if M2CDEBUG
//              log_debug ("Start hw int\n");
#endif
			// Fix segment registers and execute DOSBox idle callbacks.
			fix_segs();
			bool oldCPU_CycleAutoAdjust = CPU_CycleAutoAdjust;
			CPU_CycleAutoAdjust = true; // So the CPU_Cycles won't
			                            // be set to 0
			CALLBACK_Idle();
			CPU_CycleAutoAdjust = oldCPU_CycleAutoAdjust;
#if M2CDEBUG
//              log_debug ("Stop hw int\n");
#endif
		}
		already_in_hw_int = false;
	} else if (!GET_IF() && fix_segs() && !PIC_RunQueue()) // Can only call
	                                                       // PIC_RunQueue()
	                                                       // separatelly if
	                                                       // IF=0
	{ // So no IRQ interrupts will be started
		GFX_Events();
		if (ticksRemain > 0) {
			TIMER_AddTick();
			ticksRemain--;
		} else {
			increaseticks();
		}
	}
}

// Function to run hardware interrupts.
void run_hw_interrupts()
{
	// Collect segment register information if enabled.
	if (collect_rt_info)
		shadow_memory.collect_segs();
	//    X86_REGREF
	// printf("CPU_Cycles %d\n", CPU_Cycles);
	// Decrement CPU cycles if there are any left.
	if (!defered_irqs && CPU_Cycles > 0) {
		CPU_Cycles--;
	}

	// Execute pending IRQs if needed.
	if (defered_irqs || CPU_Cycles == 0) {
		defered_irqs = false;
		//    log_debug ("CPU_CycleLeft %d\n", CPU_CycleLeft);
		execute_irqs();
	}
}

// Function to perform a single-step execution using the DOSBox interpreter.
void dbx_single_step()
{
	// Fix segment registers.
	m2c::fix_segs();

	// Check for specific instructions and handle them separately.
	if (*raddr(Segs.val[1], cpu_regs.ip.word[0]) == 0xcd) // int x
	{
		// Execute int x instruction.
		log_debug("Inside single step cur cs:ip %x:%x executing int %x\n",
		          Segs.val[1], cpu_regs.ip.word[0],
		          *raddr(Segs.val[1], cpu_regs.ip.word[0] + 1));
		++cpu_regs.ip.word[0];
		_INT(*raddr(Segs.val[1], cpu_regs.ip.word[0]++));
		log_debug("Finished single step cur cs:ip %x:%x\n", Segs.val[1],
		          cpu_regs.ip.word[0]);
		return;
	} else if (*raddr(Segs.val[1], cpu_regs.ip.word[0]) == 0xcc) // int3
	{
		// Execute int 3 instruction.
		log_debug("Inside single step cur cs:ip %x:%x executing int 3\n",
		          Segs.val[1], cpu_regs.ip.word[0]);
		++cpu_regs.ip.word[0];
		_INT(3);
		log_debug("Finished single step cur cs:ip %x:%x\n", Segs.val[1],
		          cpu_regs.ip.word[0]);
		return;
	}

	// Reference the CPU registers.
	X86_REGREF

	// Store the old CPU cycle count and instruction pointer.
	old_cycles = CPU_Cycles;
	dd oldeip = (Segs.val[1] << 16) + cpu_regs.ip.word[0];
	dd neweip;

	// Variable to store the return code from CPU_Core_Normal_Run().

	// Set the single-stepping flag and disable the shadow stack.
	doing_single_step = true;
	shadow_stack.disable();

	// Execute a single instruction using the DOSBox interpreter.
	try {
		// printf("~~s1 %x:%x\n",Segs.val[1],cpu_regs.ip.word[0]);
		do {
			CPU_Cycles = 1;
			(void)CPU_Core_Normal_Run();
			neweip = (Segs.val[1] << 16) + cpu_regs.ip.word[0];
		} while (neweip == oldeip); // Handle REP* instructions.
	} catch (...) {
		// Handle exceptions during interpretation.
		printf("~~!exception catched %x:%x\n", Segs.val[1],
		       cpu_regs.ip.word[0]);
		log_error("~~!exception catched %x:%x\n", Segs.val[1],
		          cpu_regs.ip.word[0]);
		shadow_stack.enable();
		doing_single_step = false;
		CPU_Cycles = old_cycles;

		compare_jump = false;
		throw;
	}

	// Re-enable the shadow stack and reset the single-stepping flag.
	shadow_stack.enable();
	doing_single_step = false;
	CPU_Cycles = old_cycles;
	// printf("~~s2 %x:%x\n",Segs.val[1],cpu_regs.ip.word[0]);
	// // log_debug ("CPU_Cycles=%d CPU_CycleLeft=%d\n", CPU_Cycles,
	// CPU_CycleLeft);
}

// Function to copy memory and perform comparison in debug mode.
void mycopy(db *d, db *s, size_t size, const char *name)
{
#if M2CDEBUG
	// Compare memory contents and print debug information if they differ.
	int res = memcmp(d, s, size);
	if (res) {
		printf("non-equal %s addr=%zx size=%zu", name,
		       (size_t)(d - ((db *)&m2c::m)), size);
		void *p = memmem(((db *)&m2c::m) + 0x1920, COMPARE_SIZE, s, size);
		if (size > 3 && p) {
			printf(" found at %zx", (size_t)(((db *)p) - d));
		}
		printf("\nm2c ");
		hexDump(s, size);
		printf("memory ");
		hexDump(d, size);
	}
#else
	//      printf("Init %zx %zd\n", d - ((db*)&m), size);
	// Copy memory contents in non-debug mode.
	memcpy(d, s, size);
	//    memset (((db *) & types) + (d - ((db *) & m)), 0xff, size);
#endif
}

// Function to dump the stack and shadow memory.
void stackDump(_STATE *_state)
{
	(void)_state;
	// Ensure the function is called only once.
	static bool already = false;
	if (already)
		return;
	already = true;

	// Print collected traces, backtrace, and shadow stack.
	m2c::print_traces();
#ifndef _WIN32
	print_backtrace(0);
#endif
	shadow_stack.print(0);
}

// Function to log dosbox register values
void log_regs_dbx_direct(size_t counter_,
                         const char *file,
                         int line,
                         db indent,
                         const char *instr,
                         const CPU_Regs &r,
                         const Segments &s)
{
	/*
	enum SegNames { es=0,cs=1,ss=2,ds=3,fs=4,gs=5};
	struct Segments {
	        uint16_t val[8];
	};
	union GenReg32 {
	        uint32_t dword[1];
	};
	struct CPU_Regs {
	        GenReg32 regs[8],ip;
	        Bitu flags;
	        REGI_AX=0, REGI_CX=1, REGI_DX=2, REGI_BX=3,
	        REGI_SP=4, REGI_BP=5, REGI_SI=6, REGI_DI=7
	};
	#define reg_32(reg) (cpu_regs.regs[(reg)].dword[DW_INDEX])
	};*/
	//   if (trace_instructions)
	printf("%8zx %s:%06d %04X:%04X %s%s%s AX:%04X BX:%04X CX:%04X DX:%04X SI:%04X DI:%04X BP:%04X SP:%04X DS:%04X ES:%04X FS:%04X GS:%04X SS:%04X CF:%x ZF:%x SF:%x OF:%x AF:%x PF:%x IF:%x\n",
	       counter_, file, line, s.val[1], r.ip.dword[0], log_spaces(indent),
	       instr, log_spaces(84 - indent - strlen(instr)),
	       r.regs[0].dword[0], r.regs[3].dword[0], r.regs[1].dword[0],
	       r.regs[2].dword[0], r.regs[6].dword[0], r.regs[7].dword[0],
	       r.regs[5].dword[0], r.regs[4].dword[0], s.val[3], s.val[0],
	       s.val[4], s.val[5], s.val[2], (r.flags & FLAG_CF) != 0,
	       (r.flags & FLAG_ZF) != 0, (r.flags & FLAG_SF) != 0,
	       (r.flags & FLAG_OF) != 0, (r.flags & FLAG_AF) != 0,
	       (r.flags & FLAG_PF) != 0, (r.flags & FLAG_IF) != 0);
}

// Structure to store CPU state information for tracing.
struct CPU_State {
	/*
	                   CPU_State(size_t counter,
	                   const char *file,
	                   int line,
	                   db indent,
	                   const char* instr,
	                   CPU_Regs regs,
	                   Segments segs):
	                   counter(counter),
	                   file(file),
	                   line(line),
	                   indent(indent),
	                   instr(instr),
	                   regs(regs),
	                   segs(segs)
	                   {}*/
	size_t counter;
	const char *file;
	int line;
	db indent;
	std::string instr;
	CPU_Regs regs;
	Segments segs;
};

// Circular buffer to store CPU state traces.
CircularBuffer<CPU_State> trace_store(50000);

// Function to print collected CPU state traces.
static void print_traces()
{
	while (!trace_store.empty()) {
		CPU_State &cs = trace_store.front();
		log_regs_dbx_direct(cs.counter, cs.file, cs.line, cs.indent,
		                    cs.instr.c_str(), cs.regs, cs.segs);
		trace_store.pop_front();
	}
}

// Function to log register values and other debug information.
void log_regs_dbx(const char *file,
                  int line,
                  const char *instr,
                  const CPU_Regs &r,
                  const Segments &s)
{
	// Increment instruction counter.
	++counter;

	// Store CPU state information in the trace buffer if enabled.
	if (trace_instructions) {
		if (!trace_instructions_to_stdout) {
			CPU_State cs = {counter, file, line, _indent,
			                instr,   r,    s};
			trace_store.push_back(cs);
		} else {
			log_regs_dbx_direct(counter, file, line, _indent, instr,
			                    r, s);
		}
	}
}

// Function to get the size of an instruction in bytes.
size_t inst_size(dw cs, dd eip)
{
	char dline[120];
	return DasmI386(dline, (cs << 4) + eip, eip, false);
}

// Function to get the size of an instruction in bytes from a memory buffer.
size_t inst_size(db *b)
{
	size_t instr_size = 0;
	db op1 = *b;
	// printf("op1 %x\n", op1);

	// Handle instruction prefixes.
	switch (op1) {
	case 0x26:
	case 0x2E:
	case 0x36:
	case 0x3E:
	case 0x64:
	case 0x65:
	case 0x66:
	case 0x67:
	case 0xF0:
	case 0xF2:
	case 0xF3: {
		++b;
		++instr_size;
		op1 = *b;
		// printf("op1 %x\n", op1);
	}
	}

	// Determine instruction size based on opcode.
	if (op1 >= 0x70 && op1 <= 0x7f) // j
		instr_size += 2;
	else if (op1 == 0x9a) // callf
		instr_size += 5;
	else if (op1 == 0xc2) // retn n
		instr_size += 3;
	else if (op1 == 0xc3) // retn
		instr_size += 1;
	else if (op1 == 0xca) // retf n
		instr_size += 3;
	else if (op1 == 0xcb) // retf
		instr_size += 1;
	else if (op1 == 0xcf) // iret
		instr_size += 1;
	else if (op1 >= 0xe0 && op1 <= 0xe3) // loop
		instr_size += 2;
	else if (op1 == 0xe8 || op1 == 0xe9) // jmp
		instr_size += 3;
	else if (op1 == 0xea) // jmpf
		instr_size += 5;
	else if (op1 == 0xeb) // jmpf
		instr_size += 2;
	else if (op1 == 0xff) // jmpf
	{
		db op2 = *(b + 1);
		// printf("op2 %x\n", op2);
		if (op2 >= 0x10 && op2 <= 0x2f) // call/jmp
			instr_size += 4;
		else if (op2 >= 0x50 && op2 <= 0x6f) // call/jmp
			instr_size += 3;
		else if (op2 >= 0x90 && op2 <= 0xAf) // call/jmp
			instr_size += 4;
		else if (op2 >= 0xd0 && op2 <= 0xef) // call/jmp
			instr_size += 2;
	} else if (op1 == 0x0f) // j
	{
		db op2 = *(b + 1);
		if (op2 >= 0x80 && op2 <= 0x8f) // call/jmp r/m16
			instr_size += 4;
	}
	log_debug("instr size %x\n", instr_size);

	// Handle unknown instruction size.
	if (instr_size == 0) {
		X86_REGREF
		printf("Could not identify instruction size %x:%x %x\n", cs,
		       eip, op1);
		exit(1);
	}

	return instr_size;
}

// Function to process self-modifying instructions.
void process_self_mod(dw seg, dd ip, size_t size)
{
	/**
	 * Self-Modifying Code Handler
	 *
	 * Detects and logs code modifications at runtime
	 * - Compares old vs new instructions
	 * - Records modification in shadow memory
	 */
	// Print debug information about the self-modified instruction.
	printf("~self-modified instruction at %x:%x\n", seg, ip);
	::print_instruction_direct(seg, ip);
	cmpHexDump(m2c::lm + (seg << 4) + ip, (db *)&m2c::m + (seg << 4) + ip, size);

	// Collect run-time information about the self-modification.
	if (collect_rt_info) {
		memcpy(raddr(0xc000, 0xf000), m2c::lm + (seg << 4) + ip, size);
		char ins_old[120];
		DasmI386(ins_old, 0xcf000, 0xf000, false);
		char ins_new[120];
		DasmI386(ins_new, (seg << 4) + ip, ip, false);
		size_t equal_bytes = countEqual(m2c::lm + (seg << 4) + ip,
		                                (db *)&m2c::m + (seg << 4) + ip,
		                                size);
		shadow_memory.collect_selfmod(seg, ip, equal_bytes, size,
		                              ins_old, ins_new);
	}
}

// Buffer to store the name of the current jump instruction.
char jump_name[100] = "";

// Function to handle the start of a jump instruction.
bool Jstart(const char *file, int line, const char *instr)
{
	// End the previous jump comparison if needed.
	if (compare_jump)
		Jend();

	// Run hardware interrupts.
	run_hw_interrupts();

	// Log register values and debug information.
	log_regs_dbx(file, line, instr, cpu_regs, Segs);

	// Return early if instruction comparison is disabled.
	if (!compare_mode)
		return true;

	// Store the old instruction pointer.
	oldip = cpu_regs.ip.word[0];

	// Get the current instruction pointer and segment.
	dd ip1 = cpu_regs.ip.word[0];
	dw seg = Segs.val[1];

	// Check if the instruction should be compared.
	bool compare(compare_mode && !already_checked[(seg << 4) + ip1]);

	// Store the old CPU state.
	oldSegs = Segs;
	oldcpu_regs = cpu_regs;

	// Perform comparison if enabled.
	if (compare) {
		memcpy(om, &m, COMPARE_SIZE);
		snprintf(jump_name, sizeof(jump_name), "%s", instr);
		compare_jump = true;
	}

	// Execute a single step using the DOSBox interpreter.
	dbx_single_step();

	// Mark the instruction as checked.
	already_checked[(seg << 4) + ip1] = true;

	// Get the size of the instruction.
	size_t instr_size = inst_size(seg, ip1);

	// Check for self-modifying code.
	if (memcmp(m2c::lm + (seg << 4) + ip1,
	           ((db *)&m2c::m) + (seg << 4) + ip1, instr_size) != 0) {
		process_self_mod(seg, ip1, instr_size);
		compare_jump = false;
	} else {
		// Store the result from the DOSBox interpreter.
		dbx_result_segs = Segs;
		dbx_result_regs = cpu_regs;
		if (compare)
			memcpy(rm, &m, COMPARE_SIZE);
	}

	// Restore the old CPU state.
	Segs = oldSegs;
	cpu_regs = oldcpu_regs;

	// Restore memory if comparison was enabled.
	if (compare)
		memcpy(&m, om, COMPARE_SIZE);

	// Advance the instruction pointer for call instructions.
	cpu_regs.ip.word[0] += instr_size;

	return true;
}

// Function to handle the end of a jump instruction.
void Jend()
{
	// Return early if instruction comparison is disabled or not in a jump
	// comparison.
	if (!compare_mode || !compare_jump)
		return;

	// Get the current instruction string.
	const char *instr = jump_name;

	// Reset the jump comparison flag.
	compare_jump = false;

	// Fix segment registers.
	fix_segs();

	// Backup and mask CPU flags.
	Bitu bckpflags = cpu_regs.flags;
	dbx_result_regs.flags &= FLAG_CF | FLAG_SF | FLAG_ZF | FLAG_OF;
	cpu_regs.flags &= FLAG_CF | FLAG_SF | FLAG_ZF | FLAG_OF;
	//    cpu_regs.ip = dbx_result_regs.ip;

	// Compare CPU state and memory contents with the DOSBox interpreter
	// results.
	if (memcmp(&cpu_regs, &dbx_result_regs, sizeof(CPU_Regs)) != 0 ||
	    memcmp(&Segs, &dbx_result_segs, sizeof(Segments)) != 0 ||
	    memcmp(&m, rm, COMPARE_SIZE) != 0) {
		// Dump stack and print error information if there are differences.
		stackDump();
		trace_instructions = true;
		bool regs_ch = memcmp(&cpu_regs, &dbx_result_regs, sizeof(CPU_Regs));
		bool segs_ch = memcmp(&Segs, &dbx_result_segs, sizeof(Segments));
		bool mem_ch = memcmp(&m, rm, COMPARE_SIZE);
		printf("/j-------------Error-during-jump-or-call-result-was-different-to-dosbox-interpreter-------------\\\n");
		printf("\nbefore instr ");
		log_regs_dbx_direct(0, "", 0, 0, instr, oldcpu_regs, oldSegs);
		//        cpu_regs.ip.word[0] = oldip;
		printf("dbx disas: ");
		::print_instruction_direct(oldSegs.val[1], oldip);
		hexDump(raddr(oldSegs.val[1], oldip), 8);

		printf("\n~m2c result ");
		log_regs_dbx_direct(0, "", 0, 0, instr, cpu_regs, Segs);

		if (regs_ch) {
			printf("reg ");
			hexDump(&cpu_regs, sizeof(CPU_Regs));
		}
		if (segs_ch) {
			printf("seg ");
			hexDump(&Segs, sizeof(Segments));
		}

		Segs = dbx_result_segs;
		cpu_regs = dbx_result_regs;

		printf("\n~dbx res state ");
		log_regs_dbx_direct(0, "", 0, 0, instr, dbx_result_regs,
		                    dbx_result_segs);
		if (regs_ch) {
			printf("reg ");
			hexDump(&cpu_regs, sizeof(CPU_Regs));
		}
		if (segs_ch) {
			printf("seg ");
			hexDump(&Segs, sizeof(Segments));
		}
		if (mem_ch) {
			printf("~memory diff m2c/dbx\n");
			cmpHexDump(&m, rm, COMPARE_SIZE);
		}
		printf("\\j-----------------------------Error-----------------------------------------/\n");
		exit(1);
	}

	// Restore CPU flags.
	cpu_regs.flags = bckpflags;
}

// Function to handle the start of a simple instruction.
bool Sstart(const char *file, int line, const char *instr)
{
	// End the previous jump comparison if needed.
	if (compare_jump)
		Jend();

	// Run hardware interrupts.
	run_hw_interrupts();

	// Log register values and debug information.
	log_regs_dbx(file, line, instr, cpu_regs, Segs);

	// Return early if instruction comparison is disabled.
	if (!compare_mode)
		return true;

	// Store the old instruction pointer.
	oldip = cpu_regs.ip.word[0];

	// Get the current instruction pointer and segment.
	dd ip1 = cpu_regs.ip.word[0];
	dw seg = Segs.val[1];

	// Check if the instruction should be compared.
	bool compare(compare_mode && !already_checked[(seg << 4) + ip1]);

	// Execute a single step using the DOSBox interpreter.
	dbx_single_step();

	// Return early if comparison is disabled
	if (!compare) {
		if (CPU_Cycles > 0)
			--CPU_Cycles;
		if (!complex_self_modifications)
			return false;
	}

	// Mark the instruction as checked.
	already_checked[(seg << 4) + ip1] = true;

	// Get the new instruction pointer and calculate instruction size.
	dd ip2 = cpu_regs.ip.word[0];
	size_t instr_size = ip2 - ip1;
	// printf("~ %x %x\n",ip1,ip2);

	// Check for self-modifying code.
	if (memcmp(m2c::lm + (seg << 4) + ip1,
	           ((db *)&m2c::m) + (seg << 4) + ip1, instr_size) != 0) {
		process_self_mod(seg, ip1, instr_size);
		return false;
	}

	return false;
}

// Function to handle the start of an instruction that only modifies flags.
bool Tstart(const char *file, int line, const char *instr)
{
	// End the previous jump comparison if needed.
	if (compare_jump)
		Jend();

	// Run hardware interrupts.
	run_hw_interrupts();

	// Log register values and debug information.
	log_regs_dbx(file, line, instr, cpu_regs, Segs);

	// Return early if instruction comparison is disabled.
	if (!compare_mode)
		return true;

	// Store the old instruction pointer.
	oldip = cpu_regs.ip.word[0];

	// Get the current instruction pointer and segment.
	dd ip1 = cpu_regs.ip.word[0];
	dw seg = Segs.val[1];

	// Check if the instruction should be compared.
	bool compare(compare_mode && !already_checked[(seg << 4) + ip1]);

	// Store the old CPU state if comparison is enabled.
	if (compare) {
		oldSegs = Segs;
		oldcpu_regs = cpu_regs;
	}

	// Execute a single step using the DOSBox interpreter.
	dbx_single_step();

	// Return early if comparison is disabled
	if (!compare) {
		if (CPU_Cycles > 0)
			--CPU_Cycles;
		if (!complex_self_modifications)
			return false;
	}

	// Mark the instruction as checked.
	already_checked[(seg << 4) + ip1] = true;

	// Get the new instruction pointer and calculate instruction size.
	dd ip2 = cpu_regs.ip.word[0];
	size_t instr_size = ip2 - ip1;

	// Check for self-modifying code.
	if (memcmp(m2c::lm + (seg << 4) + ip1,
	           ((db *)&m2c::m) + (seg << 4) + ip1, instr_size) != 0) {
		process_self_mod(seg, ip1, instr_size);
		return false;
	} else {
		// Store the result from the DOSBox interpreter if comparison is
		// enabled.
		if (compare) {
			dbx_result_flags = cpu_regs.flags;
			cpu_regs.flags &= FLAG_CF | FLAG_SF | FLAG_ZF | FLAG_OF;
			dbx_result_segs = Segs;
			dbx_result_regs = cpu_regs;
			Segs = oldSegs;
			cpu_regs = oldcpu_regs;
			return true;
		}
	}

	return false;
}

// Function to handle the end of an instruction that only modifies flags.
void Tend(const char *file, int line, const char *instr)
{
	// Return early if instruction comparison is disabled.
	if (!compare_mode)
		return;

	// Fix segment registers.
	fix_segs();

	// Mask CPU flags and set the instruction pointer.
	cpu_regs.flags &= FLAG_CF | FLAG_SF | FLAG_ZF | FLAG_OF;
	cpu_regs.ip = dbx_result_regs.ip;

	// Compare CPU state and segment registers with the DOSBox interpreter
	// results.
	if (memcmp(&cpu_regs, &dbx_result_regs, sizeof(CPU_Regs)) != 0 ||
	    memcmp(&Segs, &dbx_result_segs, sizeof(Segments)) != 0) {
		// Dump stack and print error information if there are differences.
		stackDump();
		trace_instructions = true;
		bool regs_ch = memcmp(&cpu_regs, &dbx_result_regs, sizeof(CPU_Regs));
		bool segs_ch = memcmp(&Segs, &dbx_result_segs, sizeof(Segments));
		printf("/t-----------------Error-results-of-instruction-was-different-within-regs-if-compare-with-dosbox-interpreter------\\\n");
		printf("\nbefore instr ");
		log_regs_dbx_direct(0, "", line, 0, instr, oldcpu_regs, oldSegs);
		//        cpu_regs.ip.word[0] = oldip;
		printf("dbx disas: ");
		::print_instruction_direct(oldSegs.val[1], oldip);
		hexDump(raddr(oldSegs.val[1], oldip), 8);

		printf("\n~m2c result ");
		log_regs_dbx_direct(0, file, line, 0, instr, cpu_regs, Segs);

		if (regs_ch) {
			printf("reg ");
			hexDump(&cpu_regs, sizeof(CPU_Regs));
		}
		if (segs_ch) {
			printf("seg ");
			hexDump(&Segs, sizeof(Segments));
		}

		Segs = dbx_result_segs;
		cpu_regs = dbx_result_regs;

		printf("\n~dbx res state ");
		log_regs_dbx_direct(0, file, line, 0, instr, dbx_result_regs,
		                    dbx_result_segs);
		if (regs_ch) {
			printf("reg ");
			hexDump(&cpu_regs, sizeof(CPU_Regs));
		}
		if (segs_ch) {
			printf("seg ");
			hexDump(&Segs, sizeof(Segments));
		}
		printf("\\t-----------------------------Error-----------------------------------------/\n");
		exit(1);
	}

	// Restore CPU flags.
	cpu_regs.flags = dbx_result_flags;
}

// Function to handle the start of an instruction that may modify memory or
// registers.
bool Xstart(const char *file, int line, const char *instr)
{
	// End the previous jump comparison if needed.
	if (compare_jump)
		Jend();

	// Run hardware interrupts.
	run_hw_interrupts();

	// Log register values and debug information.
	log_regs_dbx(file, line, instr, cpu_regs, Segs);

	// Return early if instruction comparison is disabled.
	if (!compare_mode)
		return true;

	// Store the old instruction pointer.
	oldip = cpu_regs.ip.word[0];

	// Get the current instruction pointer and segment.
	dd ip1 = cpu_regs.ip.word[0];
	dw seg = Segs.val[1];

	// Check if the instruction should be compared.
	bool already = !already_checked[(seg << 4) + ip1];
	bool compare(compare_mode && !already);

	// Store the old CPU state and memory contents if comparison is enabled.
	if (compare) {
		oldSegs = Segs;
		oldcpu_regs = cpu_regs;
		memcpy(om, &m, COMPARE_SIZE);
	}

	if (already)
		shadow_stack.forceenable(); // So if instruction was already
		                            // compare then make .push/.pop
		                            // execute anyway
	dbx_single_step();
	if (already)
		shadow_stack.forcedisable();

	// Return early if comparison is disabled
	if (!compare) {
		if (CPU_Cycles > 0)
			--CPU_Cycles;
		if (!complex_self_modifications)
			return false;
	}

	// Mark the instruction as checked.
	already_checked[(seg << 4) + ip1] = true;

	// Get the new instruction pointer and calculate instruction size.
	dd ip2 = cpu_regs.ip.word[0];
	size_t instr_size = ip2 - ip1;

	// Check for self-modifying code.
	if (memcmp(m2c::lm + (seg << 4) + ip1,
	           ((db *)&m2c::m) + (seg << 4) + ip1, instr_size) != 0) {
		process_self_mod(seg, ip1, instr_size);
		return false;
	} else {
		// Store the result from the DOSBox interpreter if comparison is
		// enabled.
		if (compare) {
			dbx_result_flags = cpu_regs.flags;
			cpu_regs.flags &= FLAG_CF | FLAG_SF | FLAG_ZF | FLAG_OF;
			dbx_result_segs = Segs;
			dbx_result_regs = cpu_regs;
			memcpy(rm, &m, COMPARE_SIZE);

			Segs = oldSegs;
			cpu_regs = oldcpu_regs;
			memcpy(&m, om, COMPARE_SIZE);
			return true;
		}
	}

	return false;
}

// Function to handle the end of an instruction that may modify memory or
// registers.
void Xend(const char *file, int line, const char *instr)
{
	// Return early if instruction comparison is disabled.
	if (!compare_mode)
		return;

	// Fix segment registers.
	fix_segs();

	// Mask CPU flags and set the instruction pointer.
	cpu_regs.flags &= FLAG_CF | FLAG_SF | FLAG_ZF | FLAG_OF;
	cpu_regs.ip = dbx_result_regs.ip;

	// Compare CPU state, segment registers, and memory contents with the
	// DOSBox interpreter results.
	if (memcmp(&cpu_regs, &dbx_result_regs, sizeof(CPU_Regs)) != 0 ||
	    memcmp(&Segs, &dbx_result_segs, sizeof(Segments)) != 0 ||
	    memcmp(&m, rm, COMPARE_SIZE) != 0) {
		// Dump stack and print error information if there are differences.
		stackDump();
		trace_instructions = true;
		bool regs_ch = memcmp(&cpu_regs, &dbx_result_regs, sizeof(CPU_Regs));
		bool segs_ch = memcmp(&Segs, &dbx_result_segs, sizeof(Segments));
		bool mem_ch = memcmp(&m, rm, COMPARE_SIZE);
		printf("/x------Error-results-of-instruction-was-different-within-regs--or-memory-if-compare-with-dosbox-interpreter------\\\n");
		printf("\nbefore instr ");
		log_regs_dbx_direct(0, "", line, 0, instr, oldcpu_regs, oldSegs);
		//        cpu_regs.ip.word[0] = oldip;
		printf("dbx disas: ");
		::print_instruction_direct(oldSegs.val[1], oldip);
		hexDump(raddr(oldSegs.val[1], oldip), 8);

		printf("\n~m2c res state ");
		log_regs_dbx_direct(0, file, line, 0, instr, cpu_regs, Segs);
		if (regs_ch) {
			printf("reg ");
			hexDump(&cpu_regs, sizeof(CPU_Regs));
		}
		if (segs_ch) {
			printf("seg ");
			hexDump(&Segs, sizeof(Segments));
		}

		Segs = dbx_result_segs;
		cpu_regs = dbx_result_regs;
		printf("\n~dbx res state ");
		log_regs_dbx_direct(0, file, line, 0, instr, dbx_result_regs,
		                    dbx_result_segs);
		if (regs_ch) {
			printf("reg ");
			hexDump(&cpu_regs, sizeof(CPU_Regs));
		}
		if (segs_ch) {
			printf("seg ");
			hexDump(&Segs, sizeof(Segments));
		}
		if (mem_ch) {
			printf("~memory diff m2c/dbx\n");
			cmpHexDump(&m, rm, COMPARE_SIZE);
		}
		printf("\\x-----------------------------Error-----------------------------------------/\n");
		exit(1);
	}

	// Restore CPU flags.
	cpu_regs.flags = dbx_result_flags;
}

// Function to interpret an unknown callf instruction.
void interpret_unknown_callf(dw newcs, dd newip, db source)
{
	(void)source;
	// Reference the CPU registers.
	X86_REGREF

	// Handle recursive calls from the interpreter.
	if (cs == newcs && newip == eip) {
		printf("Called from interpreter. return1");
		return; // Most probably a call of interpreter int from interpreter
	}

	// Set the code segment and instruction pointer.
	cs = newcs;
	eip = newip;

	// Handle calls from the interpreter.
	if (from_interpreter) {
		from_interpreter = false;
		printf("Called from interpreter. return2");
		return;
	}

	// Reset the jump comparison flag.
	compare_jump = false;

	// Store the old stack pointer, fix segment registers, and push the
	// return point onto the stack.
	dw oldsp = sp;
	fix_segs();
	return_point.push(*(dd *)raddr(ss, sp));
	/*
	if (debug > 0)
	    printf ("Enter interp current cs=%x ip=%x sp=%x ret_point:%x
	retp.size()=%d\n", cs, ip, sp, return_point.top (), return_point.size
	());
	*/
	// Execute instructions until the return point is reached.
	do {
		//  log_debug("start\n");
		Normal_Loop();
		//  log_debug("stop\n");
	} while (return_point.top() != static_cast<uint32_t>((cs << 16) + ip));

	// Handle mismatched return points.
	if (return_point.top() != static_cast<uint32_t>((cs << 16) + ip)) {
		log_error("Error cs:ip != return_point %x\n", return_point.top());
	}
	/*
	if (debug > 0)
	    printf ("Exit interp cs=%x ip=%x sp=%x\n", cs, ip, sp);
	*/
	// Handle stack pointer inconsistencies.
	if (oldsp + 4 != sp && cs != 0xf000) {
		log_error("Error it should consume 4 bytes from stack\n");
		// callf to bios consumes 0 bytes
		// stackDump ();
		//        exit (1);
	}

	// Pop the return point from the stack.
	return_point.pop();
}

// Function to log debug information with register values.
int log_debug(const char *format, ...)
{
	int result;
	va_list args;

	va_start(args, format);
	char str[256];
	result = vsprintf(str, format, args);
	//        result = vprintf(format, args);
	log_regs_dbx("", 0, str, cpu_regs, Segs);
	va_end(args);

	return result;
}

using json = nlohmann::json;
void ShadowMemory::collect_segs()
{
	/**
	 * Segment Register Collector
	 *
	 * Tracks segment register usage for each instruction
	 * - Builds code execution profile
	 */
	// Reference the CPU registers.
	X86_REGREF

	// Collect segment register values for code addresses within a specific
	// range.
	if (cs >= 0x192 && cs < 0xa000) {
		dd target = (cs << 4) + eip;
		if (m_code.find(target) == m_code.end())
			m_code[target] = std::make_shared<Code>();
		Code &c(*static_cast<Code *>(m_code.find(target)->second.get()));
		++c.exec_count;
		c.m_segs[(size_t)Byte::SegNames::cs].insert(cs);
		c.m_segs[(size_t)Byte::SegNames::es].insert(es);
		c.m_segs[(size_t)Byte::SegNames::ss].insert(ss);
		c.m_segs[(size_t)Byte::SegNames::ds].insert(ds);
		if (fs)
			c.m_segs[(size_t)Byte::SegNames::fs].insert(fs);
		if (gs)
			c.m_segs[(size_t)Byte::SegNames::gs].insert(gs);
	}
}

// Function to collect information about self-modifying instructions.
void ShadowMemory::collect_selfmod(dw seg,
                                   dd ip,
                                   size_t modsize,
                                   size_t size,
                                   const char *insold,
                                   const char *insnew)
{
	// Collect information about self-modifications within a specific code
	// segment range.
	if (seg >= 0x192 && seg < 0xa000) {
		dd target = (seg << 4) + ip;
		if (m_code.find(target) == m_code.end()) {
			m_code[target] = std::make_shared<Code>();
		}
		Code &c(*static_cast<Code *>(m_code.find(target)->second.get()));
		c.m_selfmodified = true;
		c.size = size;
		c.m_modsize = modsize;
		c.m_selfvariants.insert(insold);
		c.m_selfvariants.insert(insnew);
	}
}

	// Function to collect information about cross-segment jumps.
	void ShadowMemory::collect_cross_jumps(dw newcs, dd newip, FlowKind kind)
	{
		// Reference the CPU registers.
		X86_REGREF

		// Collect jump targets within a specific code segment range.
		if (newcs >= 0x192 && newcs < 0xa000) {
			const dd src = (cs << 4) + eip;
			const dd dst = (newcs << 4) + newip;
			m_jumps.insert(dst);
			if (cs >= 0x192 && cs < 0xa000) {
				if (m_code.find(src) == m_code.end()) {
					m_code[src] = std::make_shared<Code>();
				}
				Code &c(*static_cast<Code *>(m_code.find(src)->second.get()));
				++c.edge_to_count[dst];
				c.edge_to_kind_mask[dst] |= (1u << static_cast<uint8_t>(kind));
			}
		}
		PtrCandidate &candidate = ptr_candidate_cache[newip & (k_ptr_candidate_cache_size - 1)];
		if (candidate.valid && candidate.value == static_cast<dw>(newip)) {
			const dd use = (cs >= 0x192 && cs < 0xa000) ? ((cs << 4) + eip) : 0;
			record_pointer_use(candidate.source_addr,
			                   (static_cast<dd>(newcs) << 4) + newip,
			                   candidate.producer_csip, use, candidate.value,
			                   candidate.size, RtValueCodeOffset);
		}
	}

	void ShadowMemory::record_pointer_use(dd source_addr,
	                                      dd target_addr,
	                                      dd producer_csip,
	                                      dd use_csip,
	                                      uint64_t value,
	                                      size_t size,
	                                      uint32_t flags)
	{
		if (source_addr == 0 || target_addr == 0)
			return;
		PtrEvidence &e = m_pointer_evidence[pointer_evidence_key(source_addr, target_addr)];
		e.source_addr = source_addr;
		e.target_addr = target_addr;
		e.producer_csip = producer_csip;
		e.use_csip = use_csip;
		e.value = value;
		e.size = size;
		e.flags |= flags;
		if (e.count < std::numeric_limits<size_t>::max())
			++e.count;
	}

	void ShadowMemory::update_access_site(dd csip,
	                                      dd addr,
	                                      size_t size,
	                                      bool is_write,
	                                      uint64_t value,
	                                      bool has_value,
	                                      uint32_t value_class_mask)
	{
		if (csip == 0)
			return;
		AccessSite &site = m_access_sites[access_site_key(csip, size, is_write)];
		site.csip = csip;
		site.min_addr = std::min(site.min_addr, addr);
		site.max_addr = std::max(site.max_addr, addr);
		site.size_mask |= size_to_mask(size);
		site.rw_mask |= is_write ? 2u : 1u;
		site.value_class_mask |= value_class_mask;
		if (site.count != 0 && site.last_addr != addr) {
			const uint32_t delta = site.last_addr > addr ? site.last_addr - addr : addr - site.last_addr;
			site.gcd_delta = site.gcd_delta == 0 ? delta : gcd32(site.gcd_delta, delta);
		}
		site.last_addr = addr;
		if (site.seen_addrs.insert(addr).second)
			++site.distinct_count;
		if (has_value && site.samples.size() < k_access_sample_limit) {
			AccessSample sample;
			sample.addr = addr;
			sample.value = value;
			sample.value_class_mask = value_class_mask;
			site.samples.push_back(sample);
		}
		if (site.count < std::numeric_limits<size_t>::max())
			++site.count;
	}

	// Function to collect information about data accesses.
	void ShadowMemory::collect_data(dd b, size_t size, bool is_write, uint64_t value, bool has_value)
	{
		// Reference the CPU registers.
		X86_REGREF

		// Collect data access information within a specific memory range.
		dd target = b;
		const dd csip = current_csip();
		std::vector<std::pair<dd, uint32_t>> value_targets;
		uint32_t value_class_mask = RtValueUnknown;
		if (has_value && (size == 2 || size == 4 || size == 8))
			value_class_mask = classify_runtime_value(value, size, value_targets);

		PtrCandidate &candidate = ptr_candidate_cache[(target & 0xffffu) & (k_ptr_candidate_cache_size - 1)];
		if (candidate.valid && candidate.value == static_cast<dw>(target & 0xffffu)) {
			const dd expected = (static_cast<dd>(candidate.seg_context) << 4) + candidate.value;
			if (expected == target) {
				record_pointer_use(candidate.source_addr, target,
				                   candidate.producer_csip, csip,
				                   candidate.value, candidate.size,
				                   RtValueDataOffset);
			}
		}

		update_access_site(csip, target, size, is_write, value, has_value,
		                   value_class_mask);

		if (target >= 0x1920 && target < 0xa0000) {
			if (m_data.find(target) == m_data.end())
				m_data[target] = std::make_shared<Data>();
			Data &d(*static_cast<Data *>(m_data.find(target)->second.get()));
			d.sizes.insert(size);
			d.value_class_mask |= value_class_mask;
			for (const auto &[value_target, cls] : value_targets) {
				++d.value_target_count[value_target];
				d.value_target_class_mask[value_target] |= cls;
			}
			if (is_write) {
				d.write_sizes.insert(size);
				++d.write_count;
			} else {
				d.read_sizes.insert(size);
				++d.read_count;
			}
			if (!is_write && has_value && (value_class_mask & (RtValueDataOffset | RtValueCodeOffset | RtValueFarPointer)) != 0)
				remember_pointer_candidate(target, csip, value, size, value_class_mask);
		}

		// Collect data access information for code addresses within a specific
		// range.
		if (cs >= 0x192 && cs < 0xa000) {
			dd csip = (cs << 4) + eip;
			if (m_code.find(csip) == m_code.end())
				m_code[csip] = std::make_shared<Code>();
			Code &c(*static_cast<Code *>(m_code.find(csip)->second.get()));
			c.m_video = isaddrbelongtovga(b);
			c.accessingdata.insert(target);
		}
	}

	void rt_collect_memory_read(dd address, uint8_t size, uint64_t value)
	{
		if (!collect_rt_info || !collect_rt_info_vars)
			return;
		shadow_memory.collect_data(address, size, false, value, true);
	}

	void rt_collect_memory_write(dd address, uint8_t size, uint64_t value)
	{
		if (!collect_rt_info || !collect_rt_info_vars)
			return;
		shadow_memory.collect_data(address, size, true, value, true);
	}

// Function to dump the collected run-time information to a JSON file.
void ShadowMemory::dump()
{
	if (!collect_rt_info || m_code.empty())
		return;

	// Mark data addresses accessed multiple times as arrays.
	for (auto &[key, value] : m_code) {
		const Byte *b = value.get();
		const Code *c = static_cast<const Code *>(b);
		if (c->accessingdata.size() > 1) {
			for (auto &i : c->accessingdata) {
				try {
					m_data.at(i)->m_array = true;
				} catch (...) {
				}
			}
		}
	}

	// Serialize the run-time information to JSON.
	json j;
	j = *this;
	std::string s = j.dump();

	// Write the JSON data to a file.
	std::string json_file_name = exename + ".json";
	printf("Dumping run-time info into %s\n", json_file_name.c_str());
	FILE *f = fopen(json_file_name.c_str(), "w");
	fwrite(s.c_str(), s.size(), 1, f);
	fclose(f);
	printf("Saved json\n");

		m_data.clear();
		m_code.clear();
		m_pointer_evidence.clear();
		m_access_sites.clear();
		m_jumps.clear();
		abi_summary.clear();
	//       printf("%s\n",j.dump(3).c_str());
}

	// Function to convert an integer to a hexadecimal string.
	template <typename T>
	std::string int_to_hex(T i)
	{
		std::stringstream stream;
		stream << "0x"
		       //         << std::setfill ('0') << std::setw(sizeof(T)*2)
		       << std::hex << i;
		return stream.str();
	}

	// JSON serialization function for the Code structure.
	void to_json(nlohmann::json &nlohmann_json_j, const Code &c)
	{
		nlohmann_json_j["es"] = c.m_segs[(size_t)Byte::SegNames::es];
		nlohmann_json_j["cs"] = c.m_segs[(size_t)Byte::SegNames::cs];
	nlohmann_json_j["ss"] = c.m_segs[(size_t)Byte::SegNames::ss];
	nlohmann_json_j["ds"] = c.m_segs[(size_t)Byte::SegNames::ds];
	nlohmann_json_j["fs"] = c.m_segs[(size_t)Byte::SegNames::fs];
	//        if (!c.m_segs[(size_t)Byte::SegNames::gs].empty())
	nlohmann_json_j["gs"] = c.m_segs[(size_t)Byte::SegNames::gs];

	//        if (c.m_video)
	nlohmann_json_j["Video"] = c.m_video;
	//        if (c.m_selfmodified)
	nlohmann_json_j["Self"] = c.m_selfmodified;
	nlohmann_json_j["SelfVar"] = c.m_selfvariants;
	//        if (c.size)
	nlohmann_json_j["Size"] = c.size;
	//        if (c.m_modsize)
	nlohmann_json_j["Modsize"] = c.m_modsize;
	//        nlohmann_json_j["Accdat"] = c.accessingdata;
	nlohmann_json_j["ExecCount"] = c.exec_count;
	nlohmann_json_j["Accdat"] = c.accessingdata;
	nlohmann_json_j["Edges"] = c.edge_to_count;
	nlohmann_json_j["EdgeKinds"] = c.edge_to_kind_mask;
	}

	// JSON serialization function for the Data structure.
	void to_json(nlohmann::json &nlohmann_json_j, const Data &nlohmann_json_t)
	{
		nlohmann_json_j["Sizes"] = nlohmann_json_t.sizes;
		nlohmann_json_j["ReadSizes"] = nlohmann_json_t.read_sizes;
		nlohmann_json_j["WriteSizes"] = nlohmann_json_t.write_sizes;
		nlohmann_json_j["ReadCount"] = nlohmann_json_t.read_count;
		nlohmann_json_j["WriteCount"] = nlohmann_json_t.write_count;
		nlohmann_json_j["ValueClassMask"] = nlohmann_json_t.value_class_mask;
		nlohmann_json_j["ValueClasses"] = value_class_names(nlohmann_json_t.value_class_mask);
		nlohmann_json_j["ValueTargets"] = nlohmann_json_t.value_target_count;
		nlohmann_json_j["ValueTargetClasses"] = nlohmann_json_t.value_target_class_mask;
		//	if (nlohmann_json_t.m_array)
		nlohmann_json_j["Array"] = nlohmann_json_t.m_array;
	}

	void to_json(nlohmann::json &nlohmann_json_j, const PtrEvidence &e)
	{
		nlohmann_json_j["SourceAddr"] = int_to_hex(e.source_addr);
		nlohmann_json_j["TargetAddr"] = int_to_hex(e.target_addr);
		nlohmann_json_j["ProducerCsip"] = int_to_hex(e.producer_csip);
		nlohmann_json_j["UseCsip"] = int_to_hex(e.use_csip);
		nlohmann_json_j["Count"] = e.count;
		nlohmann_json_j["Flags"] = e.flags;
		nlohmann_json_j["Classes"] = value_class_names(e.flags);
		nlohmann_json_j["Size"] = e.size;
		nlohmann_json_j["Value"] = e.value;
	}

	void to_json(nlohmann::json &nlohmann_json_j, const AccessSample &s)
	{
		nlohmann_json_j["Addr"] = int_to_hex(s.addr);
		nlohmann_json_j["Value"] = s.value;
		nlohmann_json_j["ValueClassMask"] = s.value_class_mask;
		nlohmann_json_j["ValueClasses"] = value_class_names(s.value_class_mask);
	}

	void to_json(nlohmann::json &nlohmann_json_j, const AccessSite &s)
	{
		nlohmann_json_j["Csip"] = int_to_hex(s.csip);
		nlohmann_json_j["MinAddr"] = int_to_hex(s.min_addr);
		nlohmann_json_j["MaxAddr"] = int_to_hex(s.max_addr);
		nlohmann_json_j["GcdDelta"] = s.gcd_delta;
		nlohmann_json_j["Count"] = s.count;
		nlohmann_json_j["DistinctCount"] = s.distinct_count;
		nlohmann_json_j["SizeMask"] = s.size_mask;
		nlohmann_json_j["RwMask"] = s.rw_mask;
		nlohmann_json_j["ValueClassMask"] = s.value_class_mask;
		nlohmann_json_j["ValueClasses"] = value_class_names(s.value_class_mask);
		nlohmann_json_j["Samples"] = s.samples;
	}

	// JSON serialization function for the ShadowMemory class.
	void to_json(nlohmann::json &nlohmann_json_j, const ShadowMemory &nlohmann_json_t)
	{
		for (auto &[key, value] : nlohmann_json_t.m_code) {
			const Byte *b = value.get();
			const Code *c = static_cast<const Code *>(b);
			nlohmann_json_j["Code"][int_to_hex(key)] = *c;
		}
		for (auto &[key, value] : nlohmann_json_t.m_data) {
			const Byte *b = value.get();
			const Data *d = static_cast<const Data *>(b);
			nlohmann_json_j["Data"][int_to_hex(key)] = *d;
		}
		for (const auto &[key, value] : nlohmann_json_t.m_pointer_evidence) {
			nlohmann_json_j["PointerEvidence"][int_to_hex(key)] = value;
		}
		for (const auto &[key, value] : nlohmann_json_t.m_access_sites) {
			nlohmann_json_j["AccessSites"][int_to_hex(key)] = value;
		}
		nlohmann_json_j["Jumps"] = nlohmann_json_t.m_jumps;
	nlohmann_json_j["Meta"]["DosboxLoadSeg"] = runtime_loadseg;
	nlohmann_json_j["Meta"]["ImageSizeBytes"] = compute_runtime_image_size_bytes();
	for (const auto &[addr, s] : abi_summary) {
		nlohmann::json abi_j;
		abi_j["Calls"] = s.calls;
		abi_j["InRegs"] = mask_to_reg_names(s.changed_mask | s.preserved_mask);
		abi_j["OutRegs"] = mask_to_reg_names(s.ret_mask);
		abi_j["Clobbers"] = mask_to_reg_names(s.changed_mask);
		abi_j["Preserved"] = mask_to_reg_names(s.preserved_mask);
		abi_j["RetRegs"] = mask_to_reg_names(s.ret_mask);
		abi_j["StackCleanup"] = s.stack_cleanup_bytes;
		abi_j["CallConv"] = (s.stack_cleanup_bytes != 0) ? "stdcall?" : "cdecl?";
		abi_j["Confidence"] = (s.calls >= 3) ? "medium" : "low";
		nlohmann_json_j["Abi"][int_to_hex(addr)] = abi_j;
	}
}

} // namespace m2c

// Function to initialize the entry point for translated code.
void init_entrypoint(uint16_t relocate)
{
	(void)relocate;
#if DOSBOX_CUSTOM_ENABLE_GAME_DISPATCH
	// Reference the CPU registers.
	X86_REGREF

	// Print debug information.
	printf("Starting m2c\n");
	printf("\n\nCS:IP 0x%x:0x%x\tMemBase: %p\n", cs, eip, (void *)MemBase);

	//   memset(((db*)&m2c::m)+0x1920+0x100,0,0xfef0);
	// Initialize masm2c.
	m2c::Initializer();

	// Load masm2c drivers.
	m2c::load_drivers();

	// Backup memory after program loading.
	memcpy(m2c::lm, &m2c::m, COMPARE_SIZE);
	/*
	FILE* file_to_write = 0;
	if((file_to_write = fopen("goody.com", "wb")) != 0){

	fwrite(((db*)&m2c::m)+0x1920+0x100, 0xff00, 1, file_to_write);
	fclose(file_to_write);
}
*/

	// Create a new masm2c state and call the entry point.
	m2c::_STATE _state;
	(*m2c::_ENTRY_POINT_)(0, &_state);
#endif
}
