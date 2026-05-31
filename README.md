[![Linux builds](https://github.com/xor2003/libdosbox/actions/workflows/linux.yml/badge.svg)](https://github.com/xor2003/libdosbox/actions/workflows/linux.yml)
[![Windows builds](https://github.com/xor2003/libdosbox/actions/workflows/windows.yml/badge.svg)](https://github.com/xor2003/libdosbox/actions/workflows/windows.yml)

LibDosBox

A reverse engineering toolkit that enables the precise conversion of 16-bit DOS binary code into working C++ code. 
It is a fork of the DOSBox-staging emulator, but game code is executed by real CPU, and DOS interrupts and hardware are emulated by DOSBox. 

You just play the game and the code is checked at run-time for wrong translation.

Libdosbox is a library that executes each instruction twice:
1. First, it emulates the instruction using the dosbox interpreter.
2. Second, it emulates the instruction using a fake-asm C++ function that emulates this instruction (native code). 
3. Libdosbox compares the changes made by both (to registers, flags, memory) at the instruction level.
This helps identify where IDA failed to disassemble.

The toolkit helps to create working fake-assembler C++ code with real variables.

(If you want real C code you will have to rewrite by hand or convert:
for example:

masm2c -> angr based decomplier
Full decompilation is WIP: TODO create x86-16 lifter using Gymrat)

clang++ -> LLVM IR -> Rellic -> C++
or

clang++ -> LLVM IR -> Iril -> MSIL -> dotPeak -> C#/Vala -> C++
or 

TODO: Find a tool for automatic unit-test generation.

Video demo of working translated game code (it takes about week to translate):

[![Test drive 3](http://img.youtube.com/vi/MzK9RVgeWGM/0.jpg)](http://www.youtube.com/watch?v=MzK9RVgeWGM "Test drive 3")

[![Cryo Dune](http://img.youtube.com/vi/f-HArAmtXTc/0.jpg)](http://www.youtube.com/watch?v=f-HArAmtXTc "Cryo Dune")

How the converted instrumented debug execution works:
1. Data segments are checked before program starts: it compares what dosbox loaded .exe from disk and what data was translated into .cpp/.h files.
2. The hardware emulation is provided by Dosbox
3. !Each translated instruction results are checked with the instruction what dosbox interprets! This ensures that all results, including registers, memory, and flags, are equal to the emulation
So if IDA for example was incorrectly pick a wrong segment or wrongly converted data or masm2c converter do some mistake we will see it immediately!

To translate game code:
1. Load the game .exe into IDA Pro.
2. Do "View" -> "Unhide all".
3. Generate .map file: File -> Produce file -> Create MAP file (with all checkpoints enabled)
4. Build libdosbox (see BUILD.md) with collect_rt_info_vars = true and collect_rt_info = true (see custom.cpp)
5. Play the game. Exit and make sure non-empty .json file was generated
6. Use json2idc.py script to convert .json and .map file into .idc
7. Load generated .idc file (It will automatically mark code and data and rename some variables)
8. File -> Produce file -> Create INC file
9. File -> Produce file -> Create LST file
10. Convert .lst using masm2c into many .cpp (if IDA used MASM reverved words rename it in IDA and repeat: takes ~1 hour)
11. Put .cpp into /src/custom/src and game binary/data to build/
12. Prepare meson.build and init.cpp inside /src/custom/src/ (see on other project /src/custom/src_*) 
13. Build (with compare_instructions = true) and execute "dosbox game.exe"

The toolkit is currently limited to real mode 16-bit DOS software only. 

The conversion process involves converting IDA-generated .lst files 
to ensure that data and code addresses remain the same for translated code and data. 
So translated program behave we same way as when executed under Dosbox.

Once the program is working as expected, hardware emulation can be replaced with custom emulation, and some game functions can be rewritten using some decompiler if you want

You can download IDA 5.0 free from here:
https://www.scummvm.org/news/20180331/
https://github.com/Info-security/binary-auditing-training/raw/master/idafree50.exe

15bed40e1fd1c8d095b1d7d9f47fef18  /tmp/idafree50.exe

## DOSBox Hook Map (for upstream rebases or raw DOSBox ports)

This section documents all libdosbox integration hooks into DOSBox core code.
Use it to reapply hooks after syncing with upstream `dosbox-staging`, or when porting onto a clean DOSBox tree.

### Upstream baseline (found with git)

- Fork-point (merge-base of this branch vs `upstream/main`):  
  `83e3fa2c034a81aa5547007d74936bd3bed8a6c2`  
  Date: `2021-12-11 17:56:43 +0000`  
  Subject: `Improve BIOS FDD motor timeout counter, most notably for earlier PCs. Fixes a Chinese variant of Space Harrier.`
- First core hook commit in this fork:  
  `4efd2ddf0b1dc36996c40422794576d70ab60f49` (`libdosbox patch`, 2022-03-18)

### Hook inventory (core integration points)

1. Build/system hooks
- [`meson.build:44`](/home/xor/inertia_player/libdosbox/meson.build:44)  
  Adds compile flags: `-DDOSBOX_CUSTOM`, `-DM2CDEBUG=1`, `-D_SHADOW_STACK` and debug-oriented flags.
- [`meson.build:402`](/home/xor/inertia_player/libdosbox/meson.build:402), [`meson.build:403`](/home/xor/inertia_player/libdosbox/meson.build:403)  
  Adds `src/custom` and `src/custom/src` to build.

2. Public hook interface
- [`include/custom.h:159`](/home/xor/inertia_player/libdosbox/include/custom.h:159)  
  `#if DOSBOX_CUSTOM` guard and prototypes:
  `custom_init`, `custom_init_prog`, `custom_exit_prog`, `custom_callf`.
- This header is included by core files and provides the main extension contract.

3. CPU call interception (far calls)
- [`src/cpu/cpu.cpp:1121`](/home/xor/inertia_player/libdosbox/src/cpu/cpu.cpp:1121)  
  In `CPU_CALL`, sets `from_interpreter=true`, calls `custom_callf(selector, offset)`, and if handled, skips original CALL by advancing `IP`.

4. Shadow stack hooks at CPU push/pop
- [`src/cpu/cpu.cpp:142`](/home/xor/inertia_player/libdosbox/src/cpu/cpu.cpp:142), [`src/cpu/cpu.cpp:151`](/home/xor/inertia_player/libdosbox/src/cpu/cpu.cpp:151), [`src/cpu/cpu.cpp:157`](/home/xor/inertia_player/libdosbox/src/cpu/cpu.cpp:157), [`src/cpu/cpu.cpp:166`](/home/xor/inertia_player/libdosbox/src/cpu/cpu.cpp:166)  
  Under `#ifdef SHADOW_STACK`, pushes/pops are mirrored to `m2c::shadow_stack`.

5. Normal interpreter loop hooks
- [`src/dosbox.cpp:157`](/home/xor/inertia_player/libdosbox/src/dosbox.cpp:157)  
  Handles deferred custom calls (`defered_custom_call`) by dispatching `custom_callf` and preserving `shadow_stack` skip counters.
- [`src/dosbox.cpp:155`](/home/xor/inertia_player/libdosbox/src/dosbox.cpp:155), [`src/dosbox.cpp:170`](/home/xor/inertia_player/libdosbox/src/dosbox.cpp:170)  
  `compare_jump` checkpoints via `m2c::Jend()`.

6. DOS program load hook
- [`src/dos/dos_execute.cpp:440`](/home/xor/inertia_player/libdosbox/src/dos/dos_execute.cpp:440)  
  Calls `custom_init_prog(name, loadseg, init_cs, init_ip)` immediately after EXE load context is prepared.

7. Runtime tracing/data collection hooks
- [`src/cpu/core_normal.cpp:171`](/home/xor/inertia_player/libdosbox/src/cpu/core_normal.cpp:171)  
  Compare-mode execution sanity check.
- [`src/cpu/core_normal.cpp:192`](/home/xor/inertia_player/libdosbox/src/cpu/core_normal.cpp:192)  
  Per-instruction `shadow_memory.collect_segs()`.
- [`src/cpu/core_normal/prefix_none.h:1127`](/home/xor/inertia_player/libdosbox/src/cpu/core_normal/prefix_none.h:1127), [`src/cpu/core_normal/prefix_none.h:1137`](/home/xor/inertia_player/libdosbox/src/cpu/core_normal/prefix_none.h:1137), [`src/cpu/core_normal/prefix_none.h:1151`](/home/xor/inertia_player/libdosbox/src/cpu/core_normal/prefix_none.h:1151), [`src/cpu/core_normal/prefix_none.h:1160`](/home/xor/inertia_player/libdosbox/src/cpu/core_normal/prefix_none.h:1160)  
  Collects call/jump cross-targets.
- [`include/paging.h:265`](/home/xor/inertia_player/libdosbox/include/paging.h:265) (and all read/write variants through line 374)  
  Collects memory access metadata via `shadow_memory.collect_data(...)` when `collect_rt_info_vars` is enabled.

8. DOSBox startup registration hook
- [`src/dosbox.cpp:999`](/home/xor/inertia_player/libdosbox/src/dosbox.cpp:999)  
  Registers `custom_init` section init hook under `#if DOSBOX_CUSTOM`.

### Reapply procedure after updating from upstream

1. Sync upstream and create a port branch.
- `git fetch upstream`
- `git checkout -b reapply-libdosbox-hooks upstream/main`

2. Recreate hook API and custom module tree first.
- Re-add `include/custom.h`.
- Re-add `src/custom/**` (including `src/custom/src/**` and its `meson.build`).

3. Reapply the core hook hunks in this order (to reduce conflicts).
- `meson.build` (`DOSBOX_CUSTOM` flags + `subdir('src/custom')`).
- `src/dosbox.cpp` (`custom_init` registration + deferred call handling in loop).
- `src/dos/dos_execute.cpp` (`custom_init_prog(...)` call).
- `src/cpu/cpu.cpp` (`CPU_CALL` interception + SHADOW_STACK push/pop hooks).
- `src/cpu/core_normal.cpp` and `src/cpu/core_normal/prefix_none.h` (trace/jump collectors).
- `include/paging.h` (memory access collectors).

4. Build-time validation.
- Ensure compile defines include: `DOSBOX_CUSTOM`, `M2CDEBUG`, and `SHADOW_STACK`.
- Build and verify `custom_init`, `custom_callf`, `custom_init_prog` link correctly.

5. Runtime smoke test.
- Start a small DOS EXE and verify:
  - `custom_init_prog` is hit once at load.
  - `custom_callf` is entered for far calls.
  - no crash in `Normal_Loop` deferred-call path.

### Fast git commands for extracting hook deltas

- Show edits around key hooks:
  - `git blame -L 1116,1136 src/cpu/cpu.cpp`
  - `git blame -L 150,171 src/dosbox.cpp`
  - `git blame -L 430,445 src/dos/dos_execute.cpp`
  - `git blame -L 262,375 include/paging.h`
- Build a focused patch bundle:
  - `git diff upstream/main -- meson.build include/custom.h src/dosbox.cpp src/dos/dos_execute.cpp src/cpu/cpu.cpp src/cpu/core_normal.cpp src/cpu/core_normal/prefix_none.h include/paging.h src/custom > libdosbox-hooks.patch`
