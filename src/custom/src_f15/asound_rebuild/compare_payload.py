#!/usr/bin/env python3
"""Compare rebuilt ASOUND payload bytes and map differences to MASM listing lines."""

from __future__ import annotations

import argparse
import re
from bisect import bisect_right
from pathlib import Path


LISTING_RE = re.compile(r"^\s*([0-9A-Fa-f]{4})\s+(.*)$")


def clean_line(line: str) -> str:
    return "".join(ch for ch in line.rstrip() if ch == "\t" or ch >= " ")


def parse_listing(path: Path) -> dict[str, dict[int, str]]:
    by_segment: dict[str, dict[int, str]] = {"seg11a3": {}, "seg127c": {}}
    segment = "seg11a3"
    for raw in path.read_text(errors="replace").splitlines():
        line = clean_line(raw)
        if "seg11a3" in line and " segment " in line:
            segment = "seg11a3"
        elif "seg127c" in line and " segment " in line:
            segment = "seg127c"
        match = LISTING_RE.match(line)
        if not match:
            continue
        offset = int(match.group(1), 16)
        by_segment[segment].setdefault(offset, line.strip())
    return by_segment


def nearest_listing_line(by_offset: dict[int, str], offset: int) -> tuple[int | None, str]:
    offsets = sorted(by_offset)
    pos = bisect_right(offsets, offset)
    if pos == 0:
        return None, "<no listing line>"
    nearest = offsets[pos - 1]
    return nearest, by_offset[nearest]


def ranges(diffs: list[int]) -> list[tuple[int, int]]:
    if not diffs:
        return []
    out: list[tuple[int, int]] = []
    start = prev = diffs[0]
    for offset in diffs[1:]:
        if offset == prev + 1:
            prev = offset
            continue
        out.append((start, prev))
        start = prev = offset
    out.append((start, prev))
    return out


def hexdump(data: bytes, start: int, end: int) -> str:
    return " ".join(f"{byte:02X}" for byte in data[start:end])


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--ref", required=True, type=Path, help="reference ASOUND.EXE")
    parser.add_argument("--new", required=True, type=Path, help="rebuilt ASOUND.EXE")
    parser.add_argument("--lst", required=True, type=Path, help="MASM listing for rebuilt object")
    parser.add_argument("--header", default="0x200", help="MZ header size to skip")
    parser.add_argument("--data-size", default="0x0d90", help="seg11a3 payload size")
    parser.add_argument("--limit", default=32, type=int, help="number of mismatch ranges to print")
    args = parser.parse_args()

    header = int(args.header, 0)
    data_size = int(args.data_size, 0)
    ref = args.ref.read_bytes()[header:]
    new = args.new.read_bytes()[header:]
    listing = parse_listing(args.lst)

    common = min(len(ref), len(new))
    diff_offsets = [i for i in range(common) if ref[i] != new[i]]

    print(f"ref_payload={len(ref)} new_payload={len(new)} extra={len(new) - len(ref)}")
    print(f"common_diffs={len(diff_offsets)} ranges={len(ranges(diff_offsets))}")

    for start, end in ranges(diff_offsets)[: args.limit]:
        context_start = max(0, start - 8)
        context_end = min(common, end + 9)
        segment = "seg11a3" if start < data_size else "seg127c"
        segment_offset = start if segment == "seg11a3" else start - data_size
        lst_offset, line = nearest_listing_line(listing[segment], segment_offset)
        lst_desc = "<none>" if lst_offset is None else f"{lst_offset:04X}"
        print()
        print(
            f"diff {start:04X}-{end:04X} len={end - start + 1} "
            f"{segment}:{segment_offset:04X} nearest_lst={lst_desc}"
        )
        print(f"  ref {context_start:04X}: {hexdump(ref, context_start, context_end)}")
        print(f"  new {context_start:04X}: {hexdump(new, context_start, context_end)}")
        print(f"  lst: {line}")

    if len(new) != len(ref):
        longer = new if len(new) > len(ref) else ref
        name = "new" if len(new) > len(ref) else "ref"
        start = common
        end = min(len(longer), common + 64)
        print()
        print(f"{name}_tail {start:04X}: {hexdump(longer, start, end)}")

    return 1 if diff_offsets or len(new) != len(ref) else 0


if __name__ == "__main__":
    raise SystemExit(main())
