# ASOUND host model

This directory contains a small C model of selected ASOUND behavior. It is not a replacement driver yet; it is a deterministic test harness for the data structures and bytecode semantics decoded in `../asound_rebuild/asound_rebuild.asm`.

The model now exposes **compatibility entry points** for the original ASOUND/F14 ABI:

- `sound_driver_*` functions with the same argument shapes as the reconstructed ASM entrytable.
- `audio_slot_64..audio_slot_6d` and `audio_jump_64..audio_jump_6d` aliases.

Compatibility is signature-level only in this phase: the modern C model keeps deterministic stream/event logic and does not emit direct OPL I/O traffic.

## Callback API

`asound_driver_tick_and_dispatch()` is available for modern C host integration. It:

- ticks the driver into a caller-provided event buffer,
- returns the number of events emitted,
- and optionally forwards each event to a callback.

```c
void callback(void* user, AsoundEventType type, AsoundU8 voice,
              AsoundU16 a, AsoundU16 b);

AsoundEvent events[32];
size_t event_count = 0;
asound_driver_tick_and_dispatch(&driver, events, 32, &event_count,
                               callback, NULL);
```

## Goals

- Keep `../asound_rebuild/asound_rebuild.asm` as the byte-identical oracle.
- Model ASOUND behavior as portable C before replacing audio output in the modern port.
- Log semantic events instead of producing audio directly.
- Keep the core close to C89 so it can later be ported to older DOS compilers if needed.

## Current Coverage

- `SoundStreamState`, matching the 20-byte runtime stream state in ASOUND.
- `SampleRange`, matching the `sample_variant_ranges` table.
- `asound_stream_pitch_slide_1222e`, matching the short bytecode stream formerly labeled `unk_1222E`.
- Named C arrays for the currently decoded short dispatch streams.
- `AsoundDriver`, with six stream states and byte-offset dispatch matching the understood entries in ASOUND's `audio_sound_dispatch_table`.
- Basic bytecode commands: `F8`, `F9`, `FA`, `FB`, `FC`, `FD`, `FE`, `FF`, plus event/tick pairs and `00,00` termination.
- Event log output for instrument, volume, pitch delta, key-off gap, key-on, key-off, stream end, and sample ranges.

The two random dispatch entries at byte offsets `00h` and `02h` are now modeled as seed-indexed random stream selectors.

## Runtime Driver Wrapper

`asound_runtime.[ch]` adds a compact API intended for modern host integration:

- initialize/reset/shutdown an `AsoundRuntime`
- dispatch sound offsets through `asound_runtime_dispatch_sound()`
- tick and retrieve event batches
- dispatch events to an output callback for backends
- query sample variant ranges for sample-player integration

```c
AsoundRuntime runtime;
AsoundEvent events[32];
size_t event_count = 0;

asound_runtime_init(&runtime, 0x7d9d, callback, NULL);
asound_runtime_dispatch_sound(&runtime, 0x0au);
asound_runtime_tick_and_dispatch(&runtime, events, 32, &event_count);
```

## Run Tests

```bash
src/custom/src_f15/asound_model/run_tests.sh
```

The test binaries are built in `/tmp/asound_model_tests` (default compiler) and `/tmp/asound_model_tests_clang` (if `clang` exists), and are independent from the main DOSBox test suite.

For a quick modern-C smoke test that prints semantic events from the model:

```bash
src/custom/src_f15/asound_model/run_demo.sh <setup> <dispatch_offset> <ticks>
```

Example:

```bash
src/custom/src_f15/asound_model/run_demo.sh 0x7d9d 0x0a 24
```

## Next Steps

- Add all ASOUND bytecode streams as named data.
- Decode and model the random dispatch entries at offsets `00h` and `02h`.
- Compare model event logs against DOSBox runtime traces of OPL writes and sound-driver calls.
- Split backend events into OPL writes, sample playback ranges, and high-level music/sound events.
- Only after trace parity, decide whether to produce an MS C 5.1 build of this model.
