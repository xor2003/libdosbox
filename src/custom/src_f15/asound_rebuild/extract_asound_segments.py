#!/usr/bin/env python3
"""
Extract seg11a3 + seg127c from F.EXE.lst into a standalone MASM asm file.

This preserves the IDA-style assembly text with labels/instructions/data so it
can be iterated on for rebuilding ASOUND.EXE.
"""

from pathlib import Path
import re


ROOT = Path(__file__).resolve().parent
LST = ROOT.parent / "F.EXE.lst"
OUT = ROOT / "asound_rebuild.asm"


def main() -> int:
    lines = LST.read_text(errors="ignore").splitlines()

    keep = False
    out = []
    start_marker = "seg11a3:0000 seg11a3         segment"
    stop_marker = "seg13d6:0000 seg13d6         segment"

    for line in lines:
        if line.startswith(start_marker):
            keep = True
        if not keep:
            continue
        if line.startswith(stop_marker):
            break

        # Convert "segXXXX:YYYY <text>" -> "<text>"
        m = re.match(r"^(seg[0-9a-f]{4}:[0-9A-Fa-f]{4})\s?(.*)$", line)
        if m:
            rest = m.group(2).rstrip()
            out.append(rest)
        else:
            out.append(line.rstrip())

    # Drop some analysis-only comments that are invalid for MASM.
    filtered = [l for l in out if "sp-analysis failed" not in l]

    OUT.write_text("\n".join(filtered) + "\n\nend\n")
    print(f"Wrote: {OUT}")
    print(f"Lines: {len(filtered)}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())

