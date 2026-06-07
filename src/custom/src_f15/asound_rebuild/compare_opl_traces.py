#!/usr/bin/env python3
"""Compare kvikdos OPL trace files emitted as 4-byte records."""

from __future__ import annotations

import argparse
from pathlib import Path


def load_records(path: Path, outs_only: bool) -> list[tuple[str, int, int]]:
    data = path.read_bytes()
    if len(data) % 4:
        raise SystemExit(f"{path}: trace size {len(data)} is not divisible by 4")
    records: list[tuple[str, int, int]] = []
    for index in range(0, len(data), 4):
        direction = chr(data[index])
        port = data[index + 1] | (data[index + 2] << 8)
        value = data[index + 3]
        if outs_only and direction != "O":
            continue
        records.append((direction, port, value))
    return records


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("left", type=Path)
    parser.add_argument("right", type=Path)
    parser.add_argument("--outs-only", action="store_true")
    parser.add_argument("--limit", type=int, default=16)
    args = parser.parse_args()

    left = load_records(args.left, args.outs_only)
    right = load_records(args.right, args.outs_only)

    prefix = 0
    while prefix < len(left) and prefix < len(right) and left[prefix] == right[prefix]:
        prefix += 1

    print(f"left_records={len(left)} right_records={len(right)} common_prefix={prefix}")
    if prefix == len(left) == len(right):
        print("traces are identical")
        return 0

    start = prefix
    end = min(max(len(left), len(right)), start + args.limit)
    for index in range(start, end):
        lrec = left[index] if index < len(left) else None
        rrec = right[index] if index < len(right) else None
        print(f"{index:04d} left={lrec} right={rrec}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
