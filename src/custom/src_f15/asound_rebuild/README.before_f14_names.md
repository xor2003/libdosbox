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
- The non-overlay tail after the final `sub_13C8C` terminator byte is excluded; standalone ASOUND ends at that `db 0`.

### AdLib runtime records

`sub_12B70` initializes 20-byte records passed in `BX`. The labeled source now defines these as `AdlibRuntimeRecord`:

- `byte_125CC`
- `byte_125E0`
- `byte_125F4`
- `unk_12608`
- `byte_1261C`
- `unk_12630`

Observed initializer in `sub_12B70`:

- `BX`: target `AdlibRuntimeRecord`
- `CX`: stored at record offset `+0Ah` as `arr_data_ptr`
- `AX`: stored at record offset `+12h` as `arr_arg_12`
- offset `+00h` is set to `1`
- offset `+09h` is set to `0FFh`
- offsets `+01h`, `+02h`, `+06h`, `+0Ch`, `+0Eh`, and `+10h` are cleared

The F.EXE dump contains non-zero bytes in these records, probably initialized runtime state. Standalone ASOUND stores the same records zeroed in the overlay image.

### AdLib bytecode streams

The data that started at old label `unk_122BC` is not a fixed-size struct. It is a group of variable-length bytecode streams interpreted by `sub_1389E` through `AdlibRuntimeRecord.arr_data_ptr`.

Detected stream groups:

- `adlib_intro_voice0` .. `adlib_intro_voice5`: loaded by `sub_12BA8` into the six runtime records.
- `adlib_release_voice0` .. `adlib_release_voice5`: loaded by `sub_12BEC` into the same records.
- `adlib_copyright`: string split out after `adlib_release_voice5`.

Inferred bytecode format:

- Bytes below `F8h` are event pairs: byte 0 is the event/note/control value, byte 1 is the tick count.
- `00,00` terminates a stream.
- `F8 xx yy` updates record bytes `+09h` and `+02h`.
- `F9 xx` updates record byte `+05h` and calls `sub_1307E`.
- `FA xx` updates record byte `+01h`.
- `FB xx` updates record byte `+06h`.
- `FC xx` updates record word/byte state at `+04h` and calls `sub_13788`.
- `FD` ends the stream or calls the callback stored in record `+12h`.
- `FE` marks loop position in record `+0Eh`.
- `FF xx` repeats from the `FE` loop mark using repeat count `xx`.

### Overlay entry table

The table after the two segment relocation words starts at `seg11a3:001C` and is stored as words.

```text
0064, 22AC, 0000, 000A, 0797, 07CC, 07DA, 0810,
0878, 0885, 085D, 082A, 0850, 07F3
```

The first four words are overlay metadata. The remaining ten words are direct offsets into `seg127c`; no shift is needed. They match the generated F.EXE labels in `f.exe_seg127c.cpp` and `f.exe.h`:

- `0797`: `asound_entry_0797` / `kseg127c_797_proc`
- `07CC`: `asound_entry_07CC` / `kseg127c_7cc_proc`
- `07DA`: `asound_entry_07DA` / `kret_41e_7da`
- `0810`: `asound_entry_0810` / `kret_41e_810`
- `0878`: `asound_entry_0878` / `kret_41e_878`
- `0885`: `asound_entry_0885` / `kret_41e_885`
- `085D`: `asound_entry_085D` / `kret_41e_85d`
- `082A`: `asound_entry_082A` / `kret_41e_82a`
- `0850`: `asound_entry_0850` / `kret_41e_850`
- `07F3`: `asound_entry_07F3` / `kret_41e_7f3`

These are exported entry points only. Internal routines called by those entries, such as `sub_12F75`, `sub_1298E`, `sub_12A16`, `sub_12A70`, and `sub_12B08`, are not necessarily listed in the overlay table.

Use `compare_payload.py` to map each mismatch back to the MASM listing before changing the labeled source.
