/*
 *  Copyright (C) 2024-2024  The DOSBox Staging Team
 *  Copyright (C) 2002-2021  The DOSBox Team
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */
#include "dosbox.h"

// Needed for std::isnan in simde
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>

#include "callback.h"
#include "cpu.h"
#include "fpu.h"
#include "inout.h"
#include "lazyflags.h"
#include "mem.h"
#include "mmx.h"
#include "paging.h"
#include "pic.h"
#include "tracy.h"

#include "simde/x86/mmx.h"

#if C_DEBUG
#include "debug.h"
#endif

#if DOSBOX_CUSTOM
#include "custom.h"
#include "paging.h"
#endif

#if (!C_CORE_INLINE)
#define LoadMb(off) mem_readb(off)
#define LoadMw(off) mem_readw(off)
#define LoadMd(off) mem_readd(off)
#define LoadMq(off) mem_readq(off)
#define SaveMb(off,val)	mem_writeb(off,val)
#define SaveMw(off,val)	mem_writew(off,val)
#define SaveMd(off,val)	mem_writed(off,val)
#define SaveMq(off,val) mem_writeq(off,val)
#else 
#include "paging.h"
#define LoadMb(off) mem_readb_inline(off)
#define LoadMw(off) mem_readw_inline(off)
#define LoadMd(off) mem_readd_inline(off)
#define LoadMq(off) mem_readq_inline(off)
#define SaveMb(off,val)	mem_writeb_inline(off,val)
#define SaveMw(off,val)	mem_writew_inline(off,val)
#define SaveMd(off,val)	mem_writed_inline(off,val)
#define SaveMq(off,val) mem_writeq_inline(off,val)
#endif

/* Run-time memory access collection is already hooked inside the
 * mem_read*_inline/mem_write*_inline helpers (see paging.h), so the
 * LoadM and SaveM macros need no extra wrapping here. */

extern Bitu cycle_count;

#if C_FPU
#define CPU_FPU	1						//Enable FPU escape instructions
#endif

#define CPU_PIC_CHECK 1
#define CPU_TRAP_CHECK 1

#define CPU_TRAP_DECODER	CPU_Core_Normal_Trap_Run

#define OPCODE_NONE			0x000
#define OPCODE_0F			0x100
#define OPCODE_SIZE			0x200

#define PREFIX_ADDR			0x1
#define PREFIX_REP			0x2

#define TEST_PREFIX_ADDR	(core.prefixes & PREFIX_ADDR)
#define TEST_PREFIX_REP		(core.prefixes & PREFIX_REP)

#define DO_PREFIX_SEG(_SEG)					\
	BaseDS=SegBase(_SEG);					\
	BaseSS=SegBase(_SEG);					\
	core.base_val_ds=_SEG;					\
	goto restart_opcode;

#define DO_PREFIX_ADDR()								\
	core.prefixes=(core.prefixes & ~PREFIX_ADDR) |		\
	(cpu.code.big ^ PREFIX_ADDR);						\
	core.ea_table=&EATable[(core.prefixes&1) * 256];	\
	goto restart_opcode;

#define DO_PREFIX_REP(_ZERO)				\
	core.prefixes|=PREFIX_REP;				\
	core.rep_zero=_ZERO;					\
	goto restart_opcode;

typedef PhysPt (*GetEAHandler)(void);

static const uint32_t AddrMaskTable[2]={0x0000ffff,0xffffffff};

static struct {
	Bitu opcode_index;
	PhysPt cseip;
	PhysPt base_ds,base_ss;
	SegNames base_val_ds;
	bool rep_zero;
	Bitu prefixes;
	GetEAHandler * ea_table;
} core;

namespace {
struct InstructionTraceState {
	bool configured = false;
	bool active = false;
	bool reached_limit = false;
	std::string target_exec = {};
	std::string output_path = {};
	FILE *file = nullptr;
	uint64_t limit = 0;
	uint64_t count = 0;
};

InstructionTraceState instruction_trace = {};

std::string uppercase_copy(const char *value)
{
	if (!value)
		return {};
	std::string result(value);
	std::transform(result.begin(), result.end(), result.begin(), [](unsigned char c) {
		return static_cast<char>(std::toupper(c));
	});
	return result;
}

void configure_instruction_trace()
{
	if (instruction_trace.configured)
		return;

	instruction_trace.configured = true;

	const auto *target = std::getenv("DOSBOX_TRACE_INSN_EXEC");
	if (!target || !*target)
		return;

	instruction_trace.target_exec = uppercase_copy(target);

	const auto *output = std::getenv("DOSBOX_TRACE_INSN_FILE");
	if (output && *output)
		instruction_trace.output_path = output;

	if (const auto *limit = std::getenv("DOSBOX_TRACE_INSN_LIMIT"); limit && *limit) {
		instruction_trace.limit = std::strtoull(limit, nullptr, 10);
	}
}

void log_current_instruction()
{
	if (!instruction_trace.active || instruction_trace.reached_limit)
		return;

	if (instruction_trace.limit && instruction_trace.count >= instruction_trace.limit) {
		instruction_trace.reached_limit = true;
		if (instruction_trace.file)
			std::fflush(instruction_trace.file);
		return;
	}

	auto *out = instruction_trace.file ? instruction_trace.file : stderr;
	const auto ip = static_cast<uint32_t>(reg_eip);
	const auto linear = core.cseip;
	uint8_t bytes[6] = {};
	for (size_t i = 0; i < 6; ++i)
		bytes[i] = LoadMb(linear + i);

	std::fprintf(out,
	             "%llu %04x:%04x %02x %02x %02x %02x %02x %02x AX=%04x BX=%04x CX=%04x DX=%04x SI=%04x DI=%04x BP=%04x SP=%04x DS=%04x ES=%04x SS=%04x FL=%04x\n",
	             static_cast<unsigned long long>(instruction_trace.count),
	             SegValue(cs), static_cast<unsigned>(ip & 0xffff),
	             bytes[0], bytes[1], bytes[2], bytes[3], bytes[4], bytes[5],
	             reg_ax, reg_bx, reg_cx, reg_dx, reg_si, reg_di, reg_bp, reg_sp,
	             SegValue(ds), SegValue(es), SegValue(ss), reg_flags);

	++instruction_trace.count;
	if ((instruction_trace.count % 1024u) == 0)
		std::fflush(out);
}
} // namespace

#define GETIP		(core.cseip-SegBase(cs))
#define SAVEIP		reg_eip=GETIP;
#define LOADIP		core.cseip=(SegBase(cs)+reg_eip);

#define SegBase(c)	SegPhys(c)
#define BaseDS		core.base_ds
#define BaseSS		core.base_ss

static inline uint8_t Fetchb() {
	uint8_t temp=LoadMb(core.cseip);
	core.cseip+=1;
	return temp;
}

static inline uint16_t Fetchw() {
	uint16_t temp=LoadMw(core.cseip);
	core.cseip+=2;
	return temp;
}
static inline uint32_t Fetchd() {
	uint32_t temp=LoadMd(core.cseip);
	core.cseip+=4;
	return temp;
}

#define Push_16 CPU_Push16
#define Push_32 CPU_Push32
#define Pop_16 CPU_Pop16
#define Pop_32 CPU_Pop32

#include "instructions.h"
#include "core_normal/support.h"
#include "core_normal/string.h"


#define EALookupTable (core.ea_table)

Bits CPU_Core_Normal_Run() noexcept
{
	ZoneScoped;
	while (CPU_Cycles-->0) {
		LOADIP;
#if DOSBOX_CUSTOM
		if (collect_rt_info) {
			m2c::rt_insn_linear =
				(Segs.val[cs] << 4) + reg_eip;
			m2c::shadow_memory.collect_segs();
		}
#endif
		core.opcode_index=cpu.code.big*0x200;
		core.prefixes=cpu.code.big;
		core.ea_table=&EATable[cpu.code.big*256];
		BaseDS=SegBase(ds);
		BaseSS=SegBase(ss);
		core.base_val_ds=ds;
#if C_DEBUG
#if C_HEAVY_DEBUG
		if (DEBUG_HeavyIsBreakpoint()) {
			FillFlags();
			return debugCallback;
		};
#else
		// Address-compare breakpoints: no INT3 patching is needed here,
		// so breakpoints work on ROM and never alter guest memory.
		if (DEBUG_Breakpoint()) {
			FillFlags();
			return debugCallback;
		}
#endif
		cycle_count++;
#endif
restart_opcode:
		log_current_instruction();
		switch (core.opcode_index+Fetchb()) {
		#include "core_normal/prefix_none.h"
		#include "core_normal/prefix_0f.h"
		#include "core_normal/prefix_66.h"
		#include "core_normal/prefix_66_0f.h"
		default:
		illegal_opcode:
#if C_DEBUG	
			{
				Bitu len=(GETIP-reg_eip);
				LOADIP;
				if (len>16) len=16;
				char tempcode[16*2+1];char * writecode=tempcode;
				for (;len>0;len--) {
					sprintf(writecode,"%02X",mem_readb(core.cseip++));
					writecode+=2;
				}
				LOG(LOG_CPU,LOG_NORMAL)("Illegal/Unhandled opcode %s",tempcode);
			}
#endif
			CPU_Exception(6,0);
			continue;
		}
		SAVEIP;
	}
	FillFlags();
	return CBRET_NONE;
decode_end:
	SAVEIP;
	FillFlags();
	return CBRET_NONE;
}

Bits CPU_Core_Normal_Trap_Run() noexcept
{
	Bits oldCycles = CPU_Cycles;
	CPU_Cycles = 1;
	cpu.trap_skip = false;

	Bits ret=CPU_Core_Normal_Run();
	if (!cpu.trap_skip) CPU_DebugException(DBINT_STEP,reg_eip);
	CPU_Cycles = oldCycles-1;
	cpudecoder = &CPU_Core_Normal_Run;

	return ret;
}

void CPU_Core_Normal_Init(void) {

}

void CPU_TraceInstructionsOnExec(const char *name)
{
	configure_instruction_trace();

	if (instruction_trace.target_exec.empty() || !name || !*name)
		return;

	const auto exec_name = uppercase_copy(name);
	if (exec_name != instruction_trace.target_exec)
		return;

	if (!instruction_trace.file && !instruction_trace.output_path.empty()) {
		instruction_trace.file = std::fopen(instruction_trace.output_path.c_str(), "w");
	}

	instruction_trace.active = true;
	instruction_trace.reached_limit = false;
	instruction_trace.count = 0;

	auto *out = instruction_trace.file ? instruction_trace.file : stderr;
	std::fprintf(out, "# trace start %s\n", name);
	std::fflush(out);
}
