#include "dosbox.h"

#include "asm.h"

#include "callback.h"
#include "cpu.h"
#include "mem.h"
#include "pic.h"
#if C_DEBUG
#include "debug.h"
#endif
#include "video.h"

#include "inout.h"

#include <cstdio>

#if !C_DEBUG
Bitu DasmI386(char *buffer, PhysPt pc, Bitu cur_ip, bool bit32)
{
	(void)cur_ip;
	(void)bit32;
	const uint8_t opcode = mem_readb(pc);
	std::snprintf(buffer, 120, "db %02x", static_cast<unsigned>(opcode));
	return 1u;
}
#endif

Bitu DasmI386(char *buffer, PhysPt pc, Bitu cur_ip, bool bit32);

Bitu Normal_Loop()
{
	Bits ret;

	while (true) {
		if (PIC_RunQueue()) {
			ret = (*cpudecoder)();
			if (ret < 0) {
				return 1;
			}
			if (ret > 0) {
				if (ret >= CB_MAX) {
					return 0;
				}
				Bitu result = (*CallBack_Handlers[ret])();
				if (result) {
					return result;
				}
			}
#if C_DEBUG
			if (DEBUG_ExitLoop()) {
				return 0;
			}
#endif
		} else {
			if (!GFX_Events()) {
				return 0;
			}
			TIMER_AddTick();
		}
	}
}

int ticksRemain = 0;

void increaseticks()
{
	ticksRemain = 5;
}

void print_instruction(uint16_t newcs, uint32_t newip)
{
	char dline[120];
	DasmI386(dline, (newcs << 4) + newip, newip, false);
	m2c::log_regs_dbx("", -1, dline, cpu_regs, Segs);
}

void print_instruction_direct(uint16_t newcs, uint32_t newip)
{
	char dline[120];
	DasmI386(dline, (newcs << 4) + newip, newip, false);
	puts(dline);
	puts("");
}

namespace m2c {
bool abi_collection_mode = false;

#if !DOSBOX_CUSTOM_ENABLE_GAME_DISPATCH
struct Memory {
	db data[16 * 1024 * 1024] = {};
};

Memory m;
#endif

#if defined(__GNUC__)
__attribute__((weak))
#endif
void load_drivers()
{
}
} // namespace m2c

#if !DOSBOX_CUSTOM_ENABLE_GAME_DISPATCH
bool __dispatch_call(m2c::_offsets, m2c::_STATE *)
{
	return false;
}
#endif
