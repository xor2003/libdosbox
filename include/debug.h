/*
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

#ifndef DOSBOX_DEBUG_H
#define DOSBOX_DEBUG_H

#include "dosbox.h"
#include "mem.h"

#if C_DEBUG
void DEBUG_DrawScreen();
bool DEBUG_Breakpoint();
bool DEBUG_IntBreakpoint(uint8_t intNum);
void DEBUG_Enable(bool pressed);
void DEBUG_CheckExecuteBreakpoint(uint16_t seg, uint32_t off);
bool DEBUG_ExitLoop(void);
void DEBUG_RefreshPage(int scroll);
Bitu DEBUG_EnableDebugger();

extern Bitu cycle_count;
extern Bitu debugCallback;
extern bool exitLoop;
extern bool skipFirstInstruction;

// Breakpoint services shared with the GDB stub glue (gdb_server.cpp);
// thin wrappers over the debugger's internal CBreakpoint machinery, so
// the stub never touches the breakpoint list directly.
//
// "Patchless" breakpoints are detected purely by comparing cs:eip in
// the interpreter CPU cores - they never modify guest memory, so they
// also work in ROM. The gdb stub only creates patchless (and
// interrupt) breakpoints, which lets it remove its own breakpoints on
// disconnect without touching the ones the user set in the built-in
// debugger.
void DEBUG_BpArmAll();
void DEBUG_BpDisarmAll();
void DEBUG_BpArmAllExcept(PhysPt addr);
// Insert a permanent software breakpoint at a physical address; it is
// armed immediately and installing it twice is a no-op.
bool DEBUG_BpAddPatchless(PhysPt addr);
// Remove the permanent physical breakpoint at addr.
bool DEBUG_BpRemovePhys(PhysPt addr);
// Insert a one-shot physical breakpoint (still disarmed; arm with
// DEBUG_BpArmAllExcept as usual).
void DEBUG_BpAddOnceAt(uint16_t seg, uint32_t off, bool patchless);
// Interrupt breakpoint; ah/al use BPINT_ALL (0x100) as wildcard.
bool DEBUG_BpAddIntBp(uint8_t nr, uint16_t ah, uint16_t al);
// Remove every breakpoint the gdb stub owns (all patchless breakpoints
// and interrupt breakpoints marked by the stub).
void DEBUG_BpRemoveGdbOwned();
// INT3-patch transparency: if an active patched breakpoint covers addr
// the guest byte hidden under 0xCC is read/written instead of the
// patch byte. Both return false when no patched breakpoint covers addr.
bool DEBUG_BpReadPatchedByte(PhysPt addr, uint8_t& val);
bool DEBUG_BpWritePatchedByte(PhysPt addr, uint8_t val);

// True while the built-in curses debugger UI is in control; the GDB
// stub uses it to refuse client connections that would fight the UI.
bool DEBUG_IsInteractiveDebuggerActive();

#if C_GDBSERVER
// GDB remote serial protocol stub. All protocol handling and the glue
// to the emulated machine lives in gdb_server.cpp; debug.cpp only
// calls the two entry points below.

// Called when the machine halts (breakpoint hit or pause key) while a
// client may be connected. Returns true when the stub claimed the halt;
// send_stop_now selects whether the stop reply goes out immediately or
// is deferred to the pause loop.
bool DEBUG_GdbOnHalt(bool send_stop_now);
// Monitor 'breakexec': called when a program was just started; arms a
// one-shot breakpoint at its entry point when armed.
void DEBUG_GdbOnExec(uint16_t seg, uint32_t off);

// Start/stop the listening server (called from DEBUG_Init/DEBUG_ShutDown)
void DEBUG_GdbInit(int port);
void DEBUG_GdbShutdown();

// Poll the stub while the machine is running normally. Returns true when
// execution has been halted by the debugger (the loop handler has been
// switched to DEBUG_GdbLoop).
bool DEBUG_GdbRunningPoll();

// Loop handler active while the CPU is halted by the GDB stub; services
// host events and gdb packets, executes 'step'/'continue' requests.
Bitu DEBUG_GdbLoop();

// True while halted by the GDB stub (vs. the built-in curses debugger)
bool DEBUG_GdbIsPaused();
#endif // C_GDBSERVER
#else  // Empty debugging replacements
#endif // C_DEBUG

#if C_DEBUG && C_HEAVY_DEBUG
bool DEBUG_HeavyIsBreakpoint();
void DEBUG_HeavyWriteLogInstruction();
template <typename T>
void DEBUG_UpdateMemoryReadBreakpoints(const PhysPt addr);
#else  // Empty heavy debugging replacements
template <typename T>
constexpr void DEBUG_UpdateMemoryReadBreakpoints(const PhysPt)
{ /* no-op */
}
#endif // C_DEBUG && C_HEAVY_DEBUG

#endif // DOSBOX_DEBUG_H
