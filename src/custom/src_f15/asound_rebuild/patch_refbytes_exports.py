#!/usr/bin/env python3
"""Inject exported entry labels into byte-exact REFB.ASM output."""

from __future__ import annotations

import argparse
import re
from pathlib import Path


ENTRY_LABELS = [
    (0x0797, "audio_slot_64", "_audio_slot_64"),
    (0x07CC, "audio_slot_65", "_audio_slot_65"),
    (0x07DA, "audio_slot_66", "_audio_slot_66"),
    (0x0810, "audio_slot_67", "_audio_slot_67"),
    (0x082A, "audio_slot_6b", "_audio_slot_6b"),
    (0x0850, "audio_slot_6c", "_audio_slot_6c"),
    (0x085D, "audio_slot_6a", "_audio_slot_6a"),
    (0x0878, "audio_slot_68", "_audio_slot_68"),
    (0x0885, "audio_slot_69", "_audio_slot_69"),
    (0x07F3, "audio_slot_6d", "_audio_slot_6d"),
]


def parse_data(line: str) -> tuple[str, list[str]] | None:
    stripped = line.strip()
    if not stripped:
        return None
    if stripped.startswith(";"):
        return None
    match = re.match(r"^(db|dw)\s+(.+)$", stripped, re.IGNORECASE)
    if not match:
        return None
    kind, values = match.groups()
    items = [item.strip() for item in values.split(",") if item.strip()]
    return kind.lower(), items


def emit_values(kind: str, items: list[str]) -> str:
    return f"                {kind} " + ", ".join(items)


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--asm", type=Path, required=True)
    args = parser.parse_args()

    lines = args.asm.read_text(encoding="ascii").splitlines()
    pending = {offset: labels for offset, *labels in ENTRY_LABELS}
    wanted_offsets = sorted(pending)

    out: list[str] = []
    in_code = False
    code_offset = 0
    publics_added = False

    for line in lines:
        if line.startswith("seg127c         segment"):
            out.append(line)
            in_code = True
            code_offset = 0
            continue
        if not in_code:
            out.append(line)
            continue
        if not publics_added and "assume cs:seg127c" in line:
            out.append(line)
            out.append("                public audio_slot_64, audio_slot_65, audio_slot_66, audio_slot_67")
            out.append("                public audio_slot_68, audio_slot_69, audio_slot_6a, audio_slot_6b")
            out.append("                public audio_slot_6c, audio_slot_6d")
            out.append("                public _audio_slot_64, _audio_slot_65, _audio_slot_66, _audio_slot_67")
            out.append("                public _audio_slot_68, _audio_slot_69, _audio_slot_6a, _audio_slot_6b")
            out.append("                public _audio_slot_6c, _audio_slot_6d")
            publics_added = True
            continue
        parsed = parse_data(line)
        if not parsed:
            out.append(line)
            if line.startswith("seg127c         ends"):
                in_code = False
            continue
        kind, items = parsed
        width = 1 if kind == "db" else 2
        next_offset = code_offset + len(items) * width
        if not wanted_offsets or wanted_offsets[0] < code_offset or wanted_offsets[0] > next_offset:
            out.append(line)
            code_offset = next_offset
            continue
        local_items = items[:]
        local_offset = code_offset
        while wanted_offsets and code_offset <= wanted_offsets[0] <= next_offset:
            target = wanted_offsets[0]
            delta = target - local_offset
            if delta < 0 or delta % width:
                raise SystemExit(f"target 0x{target:04X} does not align to {kind}")
            split_index = delta // width
            if split_index > len(local_items):
                break
            if split_index:
                out.append(emit_values(kind, local_items[:split_index]))
            for label in pending[target]:
                out.append(f"{label}:")
            local_items = local_items[split_index:]
            local_offset = target
            wanted_offsets.pop(0)
            if not local_items:
                break
            if target == next_offset:
                break
        if local_items:
            out.append(emit_values(kind, local_items))
        code_offset = next_offset

    if wanted_offsets:
        missing = ", ".join(f"0x{offset:04X}" for offset in wanted_offsets)
        raise SystemExit(f"failed to place labels at {missing}")

    args.asm.write_text("\n".join(out) + "\n", encoding="ascii")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
