# F-15 ASOUND Driver

This directory contains a working replacement for the F-15 Strike Eagle II
AdLib/OPL overlay driver `ASOUND.EXE`.

Current status:

- The generated `ASOUND.EXE` has been tested in the game and plays through the
  original game loader.
- This is the DOS-overlay compatibility implementation. It is intentionally
  conservative and validated against the original binary.
- It is not the desired final architecture for a modern compiler or SDL audio
  backend. Use it as the proven behavior bridge.

## Build

The supported driver build uses Microsoft C 5.1 for the C sources and MASM 5
for the small assembly wrappers required by the ASOUND overlay ABI. The wrapper
assembly replaces Watcom-only `#pragma aux` behavior such as I/O helpers,
`cli`/`sti`, and far `retf` entrypoints.

Prerequisites:

- `kvikdos`, or another path-compatible DOS runner invoked through `KVD`.
- Microsoft C 5.1, with `CL.EXE`, `LINK.EXE`, and `INCLUDE/DOS.H`.
- Microsoft MASM 5, with `MASM.EXE` and `LINK.EXE`.
- Host tools: `bash`, `python3`, and `sed`.

Configure tool paths for your machine:

```bash
export KVD=/path/to/kvikdos
export MSC_ROOT="/path/to/Microsoft C v5.1"
export MASM5_BIN="/path/to/Microsoft MASM v5/BIN"
```

If your C compiler tree is not laid out as `bin/` and `INCLUDE/` under
`MSC_ROOT`, set these directly instead:

```bash
export MSC_BIN="/path/to/Microsoft C v5.1/bin"
export MSC_INCLUDE="/path/to/Microsoft C v5.1/INCLUDE"
```

The script has local defaults for this workstation, but portable/repeatable
builds should set the variables above explicitly.

Build:

```bash
cd path/to/libdosbox/src/custom/src_f15/asound_rebuild
./build_msc51_driver.sh
```

Override the temporary build directory with `ASOUND_MSC51_BUILD_DIR=/path`.

Build outputs are kept outside the source tree. By default:

```text
/tmp/ASOUND_MSC51/ASOUND.EXE
/tmp/ASOUND_MSC51/ASOUND.MAP
/tmp/ASOUND_MSC51/ASWHDR.LST
/tmp/ASOUND_MSC51/ASWWRAP.LST
```

The built overlay driver is:

```text
/tmp/ASOUND_MSC51/ASOUND.EXE
```

The build script intentionally uses short DOS-side names in the temporary
directory, compiles with `/AS /G2 /Zl /Gs /Zp1 /DMSC51_BUILD`, assembles the
MASM overlay wrappers, links with Microsoft LINK, then patches the ASOUND
overlay header so `image_size`, `code_seg`, and the slot entry offsets match
the loader contract.

`build_watcom_replacement.sh` remains as the legacy Watcom ABI-validation
target; it is not the MS C 5.1 driver build.

## Validate

Prerequisites:

- `DOSUNIT=/path/to/dosunit.py`, unless `dosunit.py` is on `PATH`.
- `ORIGINAL_ASOUND=/path/to/original/ASOUND.EX`. This must be an independent
  original ASOUND oracle, not the rebuilt file copied into a game directory for
  testing. In some trees the preserved original is named `ASOUND.EX`, while
  `ASOUND.EXE` is the replacement copied in for a live game test.
- Optional KVM smoke: writable `/dev/kvm` and
  `DOSUNIT_KVIKDOS_C=/path/to/kvikdos.c`.

Run the full focused validation from this directory:

```bash
cd path/to/libdosbox/src/custom/src_f15/asound_rebuild
DOSUNIT=/path/to/dosunit.py \
ORIGINAL_ASOUND=/path/to/original/ASOUND.EX \
./compare_watcom_replacement_dosunit.sh
```

Expected important results:

```text
ssa_abi_gate: passed 11, failed 0, refused 0
kvm_abi: passed 10/10
```

Validated game artifact, under `ASOUND_DOSUNIT_OUT`:

```text
/tmp/asound_watcom_dosunit/try_with_game/ASOUND.EXE
```

Validation artifacts, under `ASOUND_DOSUNIT_OUT`:

```text
/tmp/asound_watcom_dosunit/asound_watcom.abi.json
/tmp/asound_watcom_dosunit/asound_watcom.abi.md
/tmp/asound_watcom_dosunit/asound_watcom.abi_gate.json
/tmp/asound_watcom_dosunit/asound_watcom.ssa_abi.results.json
/tmp/asound_watcom_dosunit/asound_watcom.ssa_abi.report.md
/tmp/asound_watcom_dosunit/asound_watcom.static_validation_package.json
/tmp/asound_watcom_dosunit/asound_watcom.abi_compare.json
```

Notes:

- The source directory should not receive generated `.obj`, `.lst`, `.map`, or
  `.exe` files. Those belong in `ASOUND_MSC51_BUILD_DIR` for the MS C build or
  `ASOUND_WATCOM_BUILD_DIR` for the legacy Watcom validation target.
- Validation rejects `ORIGINAL_ASOUND` if it is byte-identical to the rebuilt
  Watcom output. That usually means the game directory already contains the
  replacement driver, so it is not an independent oracle.
- Full block-level SSA is still diagnostic. The real gate is the ABI-level
  SSA/Z3 comparison plus the KVM ABI smoke.
- Some SSA ABI observables are intentionally narrowed for Watcom C prologue and
  call-boundary shapes. The KVM ABI smoke checks the complete function-boundary
  stack/register/memory effects.
- Set `ASOUND_RUN_KVM_SMOKE=0` to force static-only validation.

## Source Layout

Compatibility wrapper and overlay layout:

- `asound_watcom_header.asm`: first loaded data/header segment. Owns the marker
  `F15 II AdLib 3-14-91`, overlay metadata, exported function table, fixed data
  offsets, and OPL shadow region.
- `asound_watcom_entry.c`: Watcom C implementation of the exported ASOUND slots
  and `sample_set_variant_count`. It uses `__far __loadds` and `#pragma aux`
  only for the ABI boundary; the wrapper behavior is C.
- `asound_watcom_replacement.[ch]`: C declaration and typed view of the
  assembly-owned overlay data.

Behavior implementation:

- `asound_watcom_driver.c`: stream and sample dispatch handlers called by the
  C entry wrappers.
- `asound_watcom_helpers.c`: AdLib/OPL helpers, bytecode interpreter, intro
  handling, timer-facing service logic, sample playback, and minimal Watcom
  aux I/O snippets.

Oracles and references:

- `asound_rebuild.asm`: labeled/disassembled source extracted from the F.EXE
  listing and adjusted toward standalone ASOUND overlay state.
- `asound_refbytes.asm`: byte-exact standalone ASOUND rebuild oracle.
- `../asound_model_wip/`: portable host-side model and tests. This is the best
  starting point for a clean modern rewrite.

## Runtime Behavior

Implemented behavior:

- Sound dispatch starts decoded bytecode streams.
- Timer ticks interpret stream bytecode.
- OPL register shadow starts at data offset `0x0c32`.
- OPL writes flush to ports `0x388/0x389`.
- Instrument, volume, note, fnum, drone, noise, and key-on/off state are modeled.
- Intro playback starts imported intro/release streams and waits for the game
  timer service to advance them. Do not reintroduce a tight self-advance loop;
  that makes music play too fast in game.
- Sample entrypoints stream original sample ranges through the sample-to-OPL
  volume table. This is not normal PCM playback; it drives OPL register `0x43`.

Known compatibility caveats:

- AdLib probe/calibration is simplified for DOSBox-style execution.
- Sample playback blocks on the same timer countdown contract as the original
  driver.
- The C code still reflects 16-bit DOS constraints. Modern code should not keep
  this global segmented-memory shape.

## SDL / Modern Migration

Goal: keep this working overlay as the oracle-backed compatibility target, then
rewrite the behavior as a portable driver with a backend interface.

Recommended modern layers:

1. Portable ASOUND core
   - stream state
   - dispatch tables
   - bytecode interpreter
   - sample-range selection
   - drone/noise state

2. OPL backend
   - register shadow
   - instrument loading
   - voice/note/fnum/volume writes
   - OPL register events

3. Platform backend
   - timer/tick pacing
   - keyboard/input query
   - sample-memory access
   - hardware/emulator write target

Use SDL for audio device ownership, callback/threading, timing integration, and
possibly event queues. SDL is not itself an OPL synthesizer. The SDL path still
needs an OPL emulator/backend, for example the existing DOSBox OPL code or
another OPL emulator.

The modern API should pass an explicit context/backend object instead of reading
DOS globals:

```c
typedef struct AsoundBackend {
    void (*opl_write)(void* user, unsigned reg, unsigned value);
    int  (*key_available)(void* user);
    void (*wait_sample_timer_edge)(void* user);
    unsigned (*sample_byte)(void* user, unsigned segment, unsigned offset);
    void* user;
} AsoundBackend;
```

For a DOS compatibility backend:

- `opl_write` maps to `out 388h/389h`.
- `key_available` maps to BIOS keyboard query.
- `wait_sample_timer_edge` maps to PIT polling.
- `sample_byte` maps to far sample memory.

For an SDL backend:

- `opl_write` should enqueue or immediately apply OPL register writes to an OPL
  emulator that feeds the SDL audio callback.
- Timer service should be driven by the game/emulation tick, not directly by the
  SDL audio callback unless the queue is lock-free and deterministic.
- Sample playback must preserve the original sample-to-OPL-register behavior
  before any attempt to reinterpret it as PCM.

Keep MT-32/Roland separate. `RSOUND.EXE` is a different driver path and should
become an `mt32_backend`, not a variant of the AdLib backend.

## Reusing `../asound_model_wip`

Yes, use the model directory to make the modern driver clean.

Useful files:

- `asound_model.[ch]`: cleaner stream state, bytecode command handling, dispatch
  offsets, sample range selection, and deterministic event tests.
- `asopl.[ch]`: cleaner OPL state model, register shadow, instrument loading,
  voice/note/fnum/volume logic, drone/noise helpers.
- `asdrv51.c`: DOS/AdLib glue reference, especially `sample_to_opl`, sample
  playback flow, timer coupling, and backend boundary ideas.
- `asopl_inst.inc`: instrument data; already reused by the Watcom helper.
- `test_asound_model.c`, `test_asopl.c`, `run_tests.sh`: portable regression
  coverage for the cleaned core.

Suggested migration order:

1. Keep the working Watcom overlay unchanged as a binary-validated reference.
2. Extract a portable core API from `asound_model.[ch]`.
3. Move OPL behavior toward `asopl.[ch]`, but keep observable output as OPL
   register writes/events.
4. Add an explicit backend/context interface.
5. Compare OPL write traces from the working overlay against the modern core.
6. Add an SDL backend that consumes the same OPL write stream.

## Agent Notes

Important rules for future agents:

- Do not make byte-diff improvements by breaking control flow. Runtime behavior
  and dosunit validation win.
- Do not put generated Watcom artifacts in this source directory. They belong in
  `ASOUND_WATCOM_BUILD_DIR`.
- If music plays too fast, check `adlib_play_intro_until_key`; it must wait for
  timer-service progress, not call `adlib_service_tick()` in a tight loop.
- If changing exported slot wrappers, rerun
  `./compare_watcom_replacement_dosunit.sh` and require `ssa_abi_gate` 11/11.
- If changing helper behavior, use KVM smoke and, where possible, add trace
  comparisons against OPL writes.
- The original overlay table entries are byte offsets into the code segment.
  Do not guess sound enum names from newer headers unless call-site or table
  evidence proves them.
- `sample_variant_ranges` records are stored as `(end,start)`, not
  `(start,end)`.
- Sample ranges are not ASOUND-local offsets; setup stores the external sample
  segment in `word_11C97`.

Key offsets:

```text
0x0000  marker/header in loaded payload
0x001c  overlay metadata/export table
0x0267  word_11C97, external sample segment
0x026d  sample_variant_ranges
0x027b  sample_variant_max_index
0x027c  word_11CAC, sample delay countdown
0x027e  word_11CAE, drone pitch
0x0286  byte_11CB6, drone enabled
0x0b9c  six SoundStreamState records
0x0c32  OPL register shadow
0x0d32  OPL voice special records
```

## Byte-Exact ASM Oracle

The byte-exact rebuild path is separate from the Watcom C replacement.

```bash
./build_refbytes.sh
```

Expected:

```text
REFB.EXE is byte-identical to .../ASOUND.EXE
```

The labeled MASM source path:

```bash
./build_labeled_masm6.sh
```

Expected:

```text
AS6L5.EXE is byte-identical to .../ASOUND.EXE
```

Use these ASM oracles when investigating original layout, stream data, or
metadata. Do not use them as a reason to make the C replacement byte-shaped
unless that improves validated behavior.
