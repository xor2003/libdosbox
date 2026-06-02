#!/usr/bin/env python3
"""Generate a byte-exact two-segment MASM source from standalone ASOUND.EXE."""

from __future__ import annotations

import argparse
import struct
from pathlib import Path


def byte_expr(byte: int) -> str:
    return f"0{byte:02X}h" if byte >= 0xA0 else f"{byte:02X}h"


def parse_mz(path: Path) -> tuple[bytes, int, list[tuple[int, int]]]:
    image = path.read_bytes()
    if image[:2] != b"MZ":
        raise ValueError(f"{path} is not an MZ executable")
    e_crlc = struct.unpack_from("<H", image, 6)[0]
    e_cparhdr = struct.unpack_from("<H", image, 8)[0]
    e_lfarlc = struct.unpack_from("<H", image, 0x18)[0]
    header_size = e_cparhdr * 16
    relocs = [struct.unpack_from("<HH", image, e_lfarlc + i * 4) for i in range(e_crlc)]
    return image[header_size:], header_size, relocs


def emit_bytes(out: list[str], payload: bytes, start: int, end: int, indent: str = "                ") -> None:
    offset = start
    while offset < end:
        chunk = payload[offset : min(offset + 16, end)]
        values = ", ".join(byte_expr(byte) for byte in chunk)
        out.append(f"{indent}db {values}")
        offset += len(chunk)


def emit_segment(
    out: list[str],
    name: str,
    klass: str,
    payload: bytes,
    base: int,
    size: int,
    relocs: dict[int, str],
) -> None:
    out.append(f"{name}         segment para public '{klass}' use16")
    out.append(f"                assume cs:{name}")
    offset = 0
    while offset < size:
        absolute = base + offset
        target = relocs.get(absolute)
        if target is None:
            next_reloc = min((r - base for r in relocs if base + offset < r < base + size), default=size)
            emit_bytes(out, payload[base : base + size], offset, next_reloc)
            offset = next_reloc
            continue
        out.append(f"                dw seg {target}")
        offset += 2
    out.append(f"{name}         ends")
    out.append("")


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--ref", type=Path, required=True, help="standalone ASOUND.EXE")
    parser.add_argument("--out", type=Path, required=True, help="output MASM source")
    parser.add_argument("--data-paras", type=lambda value: int(value, 0), default=None)
    args = parser.parse_args()

    payload, _header_size, mz_relocs = parse_mz(args.ref)
    reloc_offsets = {segment * 16 + offset for offset, segment in mz_relocs}

    code_para = args.data_paras
    if code_para is None:
        code_para = min(segment for _offset, segment in mz_relocs if segment)
    data_size = code_para * 16
    if data_size <= 0 or data_size >= len(payload):
        raise ValueError(f"invalid inferred data segment size: 0x{data_size:X}")

    relocs: dict[int, str] = {}
    for absolute in sorted(reloc_offsets):
        value = struct.unpack_from("<H", payload, absolute)[0]
        relocs[absolute] = "seg127c" if value == code_para else "seg11a3"

    out: list[str] = [
        ".386",
        "OPTION NOSCOPED",
        "",
        "; Generated from standalone ASOUND.EXE.",
        "; This file is the byte-exact rebuild oracle; keep the disassembled source separately.",
        "",
    ]
    emit_segment(out, "seg11a3", "DATA", payload, 0, data_size, relocs)
    emit_segment(out, "seg127c", "CODE", payload, data_size, len(payload) - data_size, relocs)
    out.append("end")
    args.out.write_text("\n".join(out) + "\n")

    print(f"payload=0x{len(payload):X} data=0x{data_size:X} code=0x{len(payload) - data_size:X}")
    print(f"relocs={len(relocs)} out={args.out}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
