#include <fstream>
#include <algorithm>
#include <cstring>

#include "../../include/custom.h"
#include "asm.h"
#include "dos_inc.h"
#include "dumpexe.h"

namespace m2c {

#ifdef _MSC_VER
#pragma pack(1)
#endif
struct ExeInfoRecType {
	dw cs_;
	dw ip_;
	dw ss_;
	dw sp_;
	dw psp;
	dd size;
	char name[14];
} GCC_ATTRIBUTE(packed);
#ifdef _MSC_VER
#pragma pack()
#endif

ExeInfoRecType exeInfo;

dw loadseg_;

void dumpexe_start_hook(dw loadseg)
{
	X86_REGREF m2c::exeInfo.cs_ = cs;
	m2c::exeInfo.ip_ = ip;
	m2c::exeInfo.ss_ = ss;
	m2c::exeInfo.sp_ = sp;

	m2c::exeInfo.psp = dos.psp();
	printf("PSP: %x loadseg: %x\n", m2c::exeInfo.psp, loadseg);
	loadseg_ = loadseg;
}

void DumpExe1(bool pressed)
{
	if (!pressed)
		return;

	const size_t max_name_len = sizeof(m2c::exeInfo.name) - 2;
	const size_t safe_name_len = std::min(exename.size(), max_name_len);
	m2c::exeInfo.name[0] = static_cast<char>(safe_name_len);
	X86_REGREF
	memcpy(m2c::exeInfo.name + 1, exename.c_str(), safe_name_len);
	m2c::exeInfo.name[safe_name_len + 1] = '\0';

	const char *code_start = reinterpret_cast<const char *>(
	        ((db *)&m2c::m) + (loadseg_ * 0x10));
	printf("Code start: %x\n", (loadseg_ * 0x10));

	// Calculate the size based on psp
	dw var = *(dw *)(((db *)&m2c::m) + exeInfo.psp * 0x10 + 2);
	int size = static_cast<uint32_t>(var - (exeInfo.psp + 0x10)) * 0x10;
	printf("Size from PSP: %d\n", size);
	// Calculate the size based on the stack segment
	dw stack_seg = std::max(exeInfo.ss_, ss);
	printf("Max stack_seg: %x\n", stack_seg);
	if (stack_seg < exeInfo.psp + 0x10) {
		printf("The stack segment is invalid (less than PSP + 10h).");
	} else {
		int stack_seg_size = (stack_seg - (exeInfo.psp + 0x10)) * 0x10;
		printf("Size from stack_seg_size: %d\n", stack_seg_size);
		size = std::max(size, stack_seg_size);
		printf("max size: %d\n", size);
	}
	size = std::min(0xa0000 - (exeInfo.psp + 0x10) * 0x10, (int)size);
	printf("Resulting size: %d\n", size);
	exeInfo.size = size;

	std::ofstream OutFile; // Output file stream
	OutFile.open("#NONAME#.1", std::ios::binary | std::ios::out);
	if (!OutFile.is_open()) {
		printf("Can't make file !\n");
		return;
	}

	const uint16_t DumpID = 'D' + ('E' * 0x100);
	OutFile.write(reinterpret_cast<const char *>(&DumpID), sizeof(DumpID));
	OutFile.write(reinterpret_cast<const char *>(&m2c::exeInfo),
	              sizeof(ExeInfoRecType));
	OutFile.write(code_start, size);
	OutFile.close();
	printf("Written #NONAME#.1\n");
}

} // namespace m2c
