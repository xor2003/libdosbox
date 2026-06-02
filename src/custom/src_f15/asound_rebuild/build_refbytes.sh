#!/usr/bin/env bash
set -euo pipefail

KVD="/home/xor/kvikdos/kvikdos"
MASM611_BIN="/home/xor/inertia_player/examples/Tornado/MASM611/BIN"
MASM5_BIN="/home/xor/inertia_player/dos_compilers/Microsoft MASM v5/BIN"
ROOT="/home/xor/inertia_player/libdosbox/src/custom/src_f15/asound_rebuild"
REF="/home/xor/inertia_player/libdosbox/src/custom/src_f15/ASOUND.EXE"
REF_FALLBACK="/home/xor/inertia_player/libdosbox-0.5x/src/custom/src_f15/ASOUND.EXE"
WD="/tmp/A15"
ASM="${ROOT}/asound_refbytes.asm"

if [[ ! -f "${REF}" && -f "${REF_FALLBACK}" ]]; then
  REF="${REF_FALLBACK}"
fi

mkdir -p "${WD}"
python3 "${ROOT}/make_refbytes_asm.py" --ref "${REF}" --out "${ASM}"
cp -f "${ASM}" "${WD}/REFB.ASM"

rm -f "${WD}/REFB.OBJ" "${WD}/REFB.LST" "${WD}/REFB.EXE" "${WD}/REFB.MAP"

"${KVD}" --mount="c:${MASM611_BIN}/" \
  C:\\ML.EXE /c /FlZ:\\tmp\\A15\\REFB.LST /FoZ:\\tmp\\A15\\REFB.OBJ Z:\\tmp\\A15\\REFB.ASM

"${KVD}" --mount="c:${MASM5_BIN}/" --mount="d:${WD}/" C:\\LINK.EXE <<'EOF'
D:\REFB.OBJ
D:\REFB.EXE
D:\REFB.MAP
;
EOF

python3 - "${REF}" "${WD}/REFB.EXE" <<'PY'
from pathlib import Path
import sys

ref = Path(sys.argv[1]).read_bytes()
out_path = Path(sys.argv[2])
out = bytearray(out_path.read_bytes())
# LINK 3.60 recalculates the MZ checksum differently from the reference.
# The payload and relocation table are already identical; copy only e_csum.
out[0x12:0x14] = ref[0x12:0x14]
out_path.write_bytes(out)
PY

if cmp -s "${REF}" "${WD}/REFB.EXE"; then
  echo "REFB.EXE is byte-identical to ${REF}"
else
  cmp -l "${REF}" "${WD}/REFB.EXE" | sed -n '1,40p'
fi
ls -la "${WD}/REFB."*
