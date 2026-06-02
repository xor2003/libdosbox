# ASOUND rebuild notes

This directory contains two ASOUND rebuild paths:

- `asound_rebuild.asm`: labeled/disassembled source extracted from the F.EXE listing, with selected fields adjusted toward standalone overlay-on-disk initial state.
- `asound_refbytes.asm`: generated two-segment MASM source from the standalone `ASOUND.EXE`. This is the byte-exact disk-overlay rebuild oracle.

## Byte-exact oracle

Run:

```bash
bash src/custom/src_f15/asound_rebuild/build_refbytes.sh
```

The script:

1. Reads the standalone reference `ASOUND.EXE`.
2. Generates `asound_refbytes.asm` with `seg11a3` and `seg127c`.
3. Preserves all MZ relocation entries with `dw seg ...`.
4. Builds with MASM 6.11 `ML.EXE` and MASM 5 `LINK.EXE` through `kvikdos`.
5. Copies the reference MZ checksum word after linking.

Expected result:

```text
REFB.EXE is byte-identical to .../ASOUND.EXE
```

## Labeled source status

Run:

```bash
bash src/custom/src_f15/asound_rebuild/build_labeled_masm6.sh
```

Expected result:

```text
ref_payload=8876 new_payload=8876 extra=0
common_diffs=0 ranges=0
AS6L5.EXE is byte-identical to .../ASOUND.EXE
```

The MASM 5 compatibility path is still available:

```bash
bash src/custom/src_f15/asound_rebuild/build_short.sh
src/custom/src_f15/asound_rebuild/compare_payload.py \
  --ref /home/xor/inertia_player/libdosbox_old/src/custom/src_f15/ASOUND.EXE \
  --new /tmp/A15/A5.EXE \
  --lst /tmp/A15/A5.LST
```

The original F.EXE-derived source was copied to:

```text
asound_rebuild.before_bytefix.asm
```

Important distinction:

- `F.EXE` is a dump, so some non-zero values in the original extracted listing may be valid initialized/runtime state.
- Standalone `ASOUND.EXE` is the overlay image on disk, so some of those same fields are zero or padding before the overlay is loaded/initialized.

The labeled source has been adjusted for standalone ASOUND-on-disk initialization:

- `seg11a3:01EE..023B` now matches standalone ASOUND padding and initial bytes.
- Standalone-zero buffers in `seg11a3:0B9A..0C14` and `seg11a3:0C28..0D8F` are represented as labeled zero-filled blocks.
- Code-segment data words at `seg127c:0009`, `seg127c:000B`, `seg127c:004D`, and `seg127c:004F` now match standalone ASOUND.
- The initial byte-pair table at `seg11a3:001C` is represented as words because the disk bytes are word-sized metadata/offsets.
- Selected MASM encodings are forced with `db`/`dw` where MASM 6.11 would otherwise choose shorter or sign-extended forms that do not match the original compiler output.
- The non-overlay tail after the final `adlib_update_all_streams` terminator byte is excluded; standalone ASOUND ends at that `db 0`.

### Sound stream runtime states

`adlib_start_stream` initializes 20-byte stream state records passed in `BX`. The labeled source now defines these as `SoundStreamState`:

- `stream_voice0_state`
- `stream_voice1_state`
- `stream_voice2_state`
- `stream_voice3_state`
- `stream_voice4_state`
- `stream_voice5_state`

Observed initializer in `adlib_start_stream`:

- `BX`: target `SoundStreamState`
- `CX`: stored at record offset `+0Ah` as `sss_stream_ptr`
- `AX`: stored at record offset `+12h` as `sss_end_callback`
- offset `+00h` is set to `1`
- offset `+09h` is set to `0FFh`
- offsets `+01h`, `+02h`, `+06h`, `+0Ch`, `+0Eh`, and `+10h` are cleared

Current field names:

- `+00 sss_ticks_left`: current event delay; zero means inactive or ready to read the next bytecode event.
- `+01 sss_pitch_delta`: per-tick pitch delta set by bytecode opcode `FA`.
- `+02 sss_volume_fade_step`: periodic volume fade step set by opcode `F8`.
- `+03 sss_note`: current event/note byte.
- `+04 sss_instrument`: instrument number set by opcode `FC`; only the low byte appears to be used.
- `+06 sss_keyoff_gap_ticks`: number of ticks before event end to key off, set by opcode `FB`.
- `+07 sss_keyoff_ticks_left`: countdown to automatic key-off for the current note.
- `+08 sss_volume_fade_ticks_left`: countdown to next volume fade update.
- `+09 sss_volume_fade_period`: reload period for volume fade updates, set by opcode `F8`.
- `+0A sss_stream_ptr`: base pointer to the bytecode stream.
- `+0C sss_stream_pos`: current byte offset into `sss_stream_ptr`.
- `+0E sss_loop_pos`: loop marker offset set by opcode `FE`.
- `+10 sss_loop_count`: repeat counter used by opcode `FF`.
- `+12 sss_end_callback`: optional callback invoked by opcode `FD`.

The F.EXE dump contains non-zero bytes in these records, probably initialized runtime state. Standalone ASOUND stores the same records zeroed in the overlay image.

### AdLib bytecode streams

The data that started at old label `unk_122BC` is not a fixed-size struct. It is a group of variable-length bytecode streams interpreted by `adlib_interpret_stream` through `SoundStreamState.sss_stream_ptr`.

Detected stream groups:

- `sound_stream_pitch_slide_1222e`: one short stream, not a struct. It loads instrument `08h`, volume `2Ch`, key-off gap `08h`, pitch delta `11h`, plays event/note `44h` for `14h` ticks, clears pitch delta, then terminates.
- `adlib_intro_voice0` .. `adlib_intro_voice5`: loaded by `adlib_start_intro` into the six runtime records.
- `adlib_release_voice0` .. `adlib_release_voice5`: loaded by `adlib_start_intro_release` into the same records.
- `adlib_copyright`: string split out after `adlib_release_voice5`.

Inferred bytecode format:

- Bytes below `F8h` are event pairs: byte 0 is the event/note/control value, byte 1 is the tick count.
- `00,00` terminates a stream.
- `F8 xx yy` updates record bytes `+09h` and `+02h`.
- `F9 xx` updates record byte `+05h` and calls `opl_set_voice_volume`.
- `FA xx` updates record byte `+01h`.
- `FB xx` updates record byte `+06h`.
- `FC xx` updates record word/byte state at `+04h` and calls `opl_load_instrument`.
- `FD` ends the stream or calls the callback stored in record `+12h`.
- `FE` marks loop position in record `+0Eh`.
- `FF xx` repeats from the `FE` loop mark using repeat count `xx`.

### Overlay entry table

The table after the two segment relocation words starts at `seg11a3:001C` and is stored as words.

```text
0064, 22AC, 0000, 000A, 0797, 07CC, 07DA, 0810,
0878, 0885, 085D, 082A, 0850, 07F3
```

The first four words are overlay metadata:

- `0064`: first overlay slot number. This matches the F14 sound driver range starting at slot `0x64`.
- `22AC`: driver payload/image size in bytes, excluding the MZ header. It equals the `ref_payload=8876` (`0x22AC`) value reported by `compare_payload.py`.
- `0000`: reserved/unused metadata word in this overlay image.
- `000A`: exported slot count, followed by ten direct entry offsets.

The remaining ten words are direct offsets into `seg127c`; no shift is needed. They match the generated F.EXE labels in `f.exe_seg127c.cpp` and `f.exe.h`:

The newer F14 source tree names the same overlay ABI in `slot.asm` and `slot.h` as sound slots `audio_slot_64..audio_slot_6d` / C wrappers `audio_jump_64..audio_jump_6d`.

ASOUND is only one implementation of this generic sound-driver ABI. The exported entry labels therefore use generic `sound_driver_*` names, while the F14 `audio_slot_*` names are kept as same-address ABI aliases:

- `0797`: `sound_driver_setup` / `audio_slot_64` / `audio_jump_64(int16, int16)` / `kseg127c_797_proc`
- `07CC`: `sound_driver_shutdown` / `audio_slot_65` / `audio_jump_65(void)` / `kseg127c_7cc_proc`
- `07DA`: `sound_driver_dispatch_sound` / `audio_slot_66` / `audio_jump_66()` / `kret_41e_7da`
- `0810`: `sound_driver_play_intro` / `audio_slot_67` / `audio_jump_67()` / `kret_41e_810`; F14 comments this as possible intro music.
- `0878`: `sound_driver_enable_drone` / `audio_slot_68` / `audio_jump_68()` / `kret_41e_878`
- `0885`: `sound_driver_disable_drone` / `audio_slot_69` / `audio_jump_69()` / `kret_41e_885`
- `085D`: `sound_driver_set_drone_pitch` / `audio_slot_6a` / `audio_jump_6a()` / `kret_41e_85d`
- `082A`: `sound_driver_timer_tick` / `audio_slot_6b` / `audio_jump_6b()` / `kret_41e_82a`; F14 calls this from `increaseTimerCounters`.
- `0850`: `sound_driver_noise_tick` / `audio_slot_6c` / `audio_jump_6c()` / `kret_41e_850`; F14 calls this from the timer IRQ path.
- `07F3`: `sound_driver_play_sample` / `audio_slot_6d` / `audio_jump_6d()` / `kret_41e_7f3`

These are exported entry points only. Internal routines called by those entries, such as `sample_set_variant_count`, `adlib_reset_state`, `opl_clear_regs`, `adlib_service_tick`, and `adlib_update_noise_pitch`, are not necessarily listed in the overlay table.

The main sound dispatch table used by `sound_driver_dispatch_sound` / `audio_slot_66` is labeled `audio_sound_dispatch_table`. ASOUND compares `BX` with `22h` and calls `word ptr cs:[BX+5E4h]`, so the safest interpretation is that callers pass a byte offset, likely `sound_id * 2`. The newer F14 headers define sound names in `SOUNDS.H` and `GSOUNDS.H`, but those names should only be attached where this ASOUND source or call-site evidence proves the mapping.

### Function naming

External ABI names:

- `sound_driver_*`: generic exported sound-driver entry names used by ASOUND, ISOUND, NSOUND, and other driver implementations.
- `audio_slot_64..audio_slot_6d`: F14 overlay-slot aliases from `slot.asm`.
- `audio_jump_64..audio_jump_6d`: C-side wrapper names from `slot.h`.

Names copied from the newer F14 source where the ABI matches:

- `audio_slot_64..audio_slot_6d`: exported overlay slots from `slot.asm`.
- `audio_jump_64..audio_jump_6d`: C-side wrappers from `slot.h`.
- `audio_slot_6b`: called by F14 `increaseTimerCounters`.
- `audio_slot_6c`: called by the F14 timer IRQ path.

Names inferred from ASOUND behavior:

- `adlib_probe_init`: probes the AdLib status bits and initializes timer/delay state.
- `adlib_reset_state`: clears runtime stream state and silences selected OPL channels.
- `opl_clear_regs`, `opl_shadow_write`, `opl_write_port`: OPL register clearing, shadow writes, and immediate port writes.
- `adlib_start_stream`: initializes one `SoundStreamState`.
- `adlib_start_intro`, `adlib_start_intro_release`, `adlib_play_intro_until_key`: intro-music stream setup/play/release sequence.
- `adlib_service_tick`: timer-facing sequencer update, including the temporary stack switch used while updating all streams.
- `adlib_update_noise_pitch`: updates pitch modulation/noise state for active channels.
- `adlib_interpret_stream`, `adlib_update_all_streams`: bytecode interpreter and six-record update loop.
- `opl_load_instrument`, `opl_key_on_voice`, `opl_key_off_voice`, `opl_set_voice_note`, `opl_set_voice_volume`: OPL voice/instrument control.
- `sample_dispatch_table`, `sample_prepare_timer`, `sample_stream_to_opl_volume`, `sample_restore_timer`: the separate sample/playback path used by `audio_slot_6d`.

The `audio_sound_dispatch_table` targets are deliberately named as `snd_disp_*` stream starters rather than `N_*` sound enums. The first target is a random stream starter, not an obvious `N_AllOff`, so `SOUNDS.H` / `GSOUNDS.H` are useful hints but not source of truth for that table yet.

Use `compare_payload.py` to map each mismatch back to the MASM listing before changing the labeled source.
