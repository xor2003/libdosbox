#!/usr/bin/env bash
set -euo pipefail

KVD="/home/xor/kvikdos/kvikdos"
MSC_BIN="/home/xor/inertia_player/dos_compilers/Microsoft C v5.1/bin"
MASM5_BIN="/home/xor/inertia_player/dos_compilers/Microsoft MASM v5/BIN"
MASM611_BIN="/home/xor/inertia_player/examples/Tornado/MASM611/BIN"
INCLUDE_DIR="/home/xor/inertia_player/dos_compilers/Microsoft C v5.1/INCLUDE"
ROOT="$(cd "$(dirname "$0")" && pwd)"
REF_EXE="${REF_EXE:-/home/xor/games/F15/ASOUND.EXE}"
REF_FEXE="${REF_FEXE:-/home/xor/games/F15/F.EXE}"
PHASE="${1:-sample0}"

case "${PHASE}" in
  setup) PHASE_DEF=0 ;;
  sample0) PHASE_DEF=1 ;;
  sample1) PHASE_DEF=2 ;;
  sample2) PHASE_DEF=3 ;;
  timer) PHASE_DEF=4 ;;
  noise) PHASE_DEF=5 ;;
  *)
    echo "usage: $0 [setup|sample0|sample1|sample2|timer|noise]" >&2
    exit 2
    ;;
esac

if [[ ! -f "${REF_EXE}" ]]; then
  echo "missing reference ASOUND.EXE: ${REF_EXE}" >&2
  exit 1
fi
if [[ ! -f "${REF_FEXE}" ]]; then
  echo "missing reference F.EXE: ${REF_FEXE}" >&2
  exit 1
fi

WD="/tmp/A15R_${PHASE}"
mkdir -p "${WD}"
rm -f "${WD}"/*.C "${WD}"/*.H "${WD}"/*.ASM "${WD}"/*.EXE "${WD}"/*.OBJ "${WD}"/*.MAP "${WD}"/*.LST "${WD}"/*.INC

python3 - "${REF_FEXE}" "${WD}/SMPDAT.INC" <<'PY'
from pathlib import Path
import struct
import sys

src = Path(sys.argv[1])
dst = Path(sys.argv[2])
image = src.read_bytes()
header = struct.unpack_from("<H", image, 8)[0] * 16
base = header + 0x17c5 * 16
size = 0x7d9e
chunk = image[base:base + size]
if len(chunk) != size:
    raise SystemExit(f"short extract: expected {size}, got {len(chunk)}")
with dst.open("w", encoding="ascii") as f:
    for i in range(0, len(chunk), 16):
        row = ", ".join("0%02Xh" % b for b in chunk[i:i + 16])
        f.write("    db " + row + "\n")
print(f"extracted {size} bytes from seg 17C5 of {src}")
PY

python3 "${ROOT}/make_refbytes_asm.py" --ref "${REF_EXE}" --out "${WD}/REFB.ASM"
python3 "${ROOT}/patch_refbytes_exports.py" --asm "${WD}/REFB.ASM"
cp -f "${ROOT}/refh51t.c" "${WD}/REFH51T.C"
cp -f "${ROOT}/refsmp.asm" "${WD}/REFSMP.ASM"
cp -f "/home/xor/inertia_player/libdosbox/src/custom/src_f15/asound_model/ashst51.asm" "${WD}/ASHST.ASM"

"${KVD}" --mount="c:${MASM611_BIN}/" \
  C:\\ML.EXE /c /FlZ:\\tmp\\$(basename "${WD}")\\REFB.LST /FoZ:\\tmp\\$(basename "${WD}")\\REFB.OBJ Z:\\tmp\\$(basename "${WD}")\\REFB.ASM
"${KVD}" --mount="b:${MSC_BIN}/" \
  --mount="c:${WD}/" \
  --mount="f:${INCLUDE_DIR}/" \
  B:\CL.EXE /c /Zl /Gs /W3 /G2 /AS /DREF_PHASE=${PHASE_DEF} /FoC:\REFH51T.OBJ /I F:\ C:\REFH51T.C
"${KVD}" --mount="b:${MASM5_BIN}/" \
  --mount="c:${WD}/" \
  B:\MASM.EXE C:\REFSMP.ASM,C:\REFSMP.OBJ,C:\REFSMP.LST,NUL\;
"${KVD}" --mount="b:${MASM5_BIN}/" \
  --mount="c:${WD}/" \
  B:\MASM.EXE C:\ASHST.ASM,C:\ASHST.OBJ,C:\ASHST.LST,NUL\;

"${KVD}" --mount="b:${MASM5_BIN}/" --mount="c:${WD}/" B:\LINK.EXE <<'EOF'
C:\ASHST.OBJ+C:\REFH51T.OBJ+C:\REFSMP.OBJ+C:\REFB.OBJ
C:\REFH51T.EXE
C:\REFH51T.MAP
;
EOF

echo "phase=${PHASE} define=${PHASE_DEF} ref=${REF_EXE}"
"${KVD}" --mount="c:${WD}/" C:\REFH51T.EXE
