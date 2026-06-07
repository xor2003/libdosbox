#!/usr/bin/env bash
set -euo pipefail

KVD="/home/xor/kvikdos/kvikdos"
MSC_BIN="/home/xor/inertia_player/dos_compilers/Microsoft C v5.1/bin"
MASM_BIN="/home/xor/inertia_player/dos_compilers/Microsoft MASM v5/BIN"
INCLUDE_DIR="/home/xor/inertia_player/dos_compilers/Microsoft C v5.1/INCLUDE"
ROOT="$(cd "$(dirname "$0")" && pwd)"
REF_EXE="${REF_EXE:-/home/xor/games/F15/F.EXE}"
PHASE="${1:-noise}"

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

WD="/tmp/AS15TS_${PHASE}"

if [[ ! -f "${REF_EXE}" ]]; then
  echo "missing reference F.EXE: ${REF_EXE}" >&2
  exit 1
fi

mkdir -p "${WD}"
rm -f "${WD}"/*.C "${WD}"/*.H "${WD}"/*.ASM "${WD}"/*.EXE "${WD}"/*.OBJ "${WD}"/*.MAP "${WD}"/*.LST
rm -f "${WD}/ASDRV.TRC"

python3 - "${REF_EXE}" "${WD}/SMPDAT.INC" <<'PY'
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

cp -f "${ROOT}/asound_model.c" "${WD}/AM1.C"
cp -f "${ROOT}/asound_model.h" "${WD}/AM1.H"
cp -f "${ROOT}/asopl.c" "${WD}/AOPL.C"
cp -f "${ROOT}/asopl.h" "${WD}/AOPL.H"
cp -f "${ROOT}/asopl_inst.inc" "${WD}/AOPL_I.INC"
cp -f "${ROOT}/asdrv51.c" "${WD}/AD1.C"
cp -f "${ROOT}/asdrv51.asm" "${WD}/ASDRV.ASM"
cp -f "${ROOT}/ash51t.c" "${WD}/ASH51T.C"
cp -f "${ROOT}/ashst51.asm" "${WD}/ASHST.ASM"
cp -f "${ROOT}/ashsmp.asm" "${WD}/ASHSMP.ASM"

sed -i -e 's/asound_model.h/AM1.H/g' "${WD}/AM1.C" "${WD}/AD1.C"
sed -i \
  -e 's/"asound_model.h"/"AM1.H"/g' \
  -e 's/"asopl.h"/"AOPL.H"/g' \
  -e 's/"asopl_inst.inc"/"AOPL_I.INC"/g' \
  "${WD}/AOPL.C" "${WD}/AD1.C" "${WD}/AOPL.H"

cp -f "${WD}/AM1.H" "${WD}/AM.H"
cp -f "${WD}/AM1.C" "${WD}/AM.C"
cp -f "${WD}/AD1.C" "${WD}/AD.C"

"${KVD}" --mount="b:${MSC_BIN}/" \
  --mount="c:${WD}/" \
  --mount="f:${INCLUDE_DIR}/" \
  B:\CL.EXE /c /Zl /Gs /W3 /G2 /AS /FoC:\AM.OBJ /I F:\ C:\AM.C
"${KVD}" --mount="b:${MSC_BIN}/" \
  --mount="c:${WD}/" \
  --mount="f:${INCLUDE_DIR}/" \
  B:\CL.EXE /c /Zl /Gs /W3 /G2 /AS /FoC:\AOPL.OBJ /I F:\ C:\AOPL.C
"${KVD}" --mount="b:${MSC_BIN}/" \
  --mount="c:${WD}/" \
  --mount="f:${INCLUDE_DIR}/" \
  B:\CL.EXE /c /Zl /Gs /W3 /G2 /AS /DASDRV_SAMPLE_LIMIT=12787 /FoC:\AD.OBJ /I F:\ C:\AD.C
"${KVD}" --mount="b:${MSC_BIN}/" \
  --mount="c:${WD}/" \
  --mount="f:${INCLUDE_DIR}/" \
  B:\CL.EXE /c /Zl /Gs /W3 /G2 /AS /DASH_PHASE=${PHASE_DEF} /FoC:\ASH51T.OBJ /I F:\ C:\ASH51T.C
"${KVD}" --mount="b:${MASM_BIN}/" \
  --mount="c:${WD}/" \
  B:\MASM.EXE C:\ASDRV.ASM,C:\ASDRV.OBJ,C:\ASDRV.LST,NUL\;
"${KVD}" --mount="b:${MASM_BIN}/" \
  --mount="c:${WD}/" \
  B:\MASM.EXE C:\ASHSMP.ASM,C:\ASHSMP.OBJ,C:\ASHSMP.LST,NUL\;
"${KVD}" --mount="b:${MASM_BIN}/" \
  --mount="c:${WD}/" \
  B:\MASM.EXE C:\ASHST.ASM,C:\ASHST.OBJ,C:\ASHST.LST,NUL\;

"${KVD}" --mount="b:${MSC_BIN}/" --mount="c:${WD}/" B:\LINK.EXE <<'EOF'
C:\ASHST.OBJ+C:\ASH51T.OBJ+C:\ASHSMP.OBJ+C:\ASDRV.OBJ+C:\AM.OBJ+C:\AOPL.OBJ+C:\AD.OBJ
C:\ASH51T.EXE
C:\ASH51T.MAP
;
EOF

echo "phase=${PHASE} define=${PHASE_DEF}"
"${KVD}" --mount="c:${WD}/" C:\ASH51T.EXE
