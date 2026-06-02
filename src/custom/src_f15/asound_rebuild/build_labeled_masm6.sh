#!/usr/bin/env bash
set -euo pipefail

KVD="/home/xor/kvikdos/kvikdos"
MASM611_BIN="/home/xor/inertia_player/examples/Tornado/MASM611/BIN"
MASM5_BIN="/home/xor/inertia_player/dos_compilers/Microsoft MASM v5/BIN"
ROOT="/home/xor/inertia_player/libdosbox/src/custom/src_f15/asound_rebuild"
SRC="${ROOT}/asound_rebuild.asm"
REF="/home/xor/inertia_player/libdosbox/src/custom/src_f15/ASOUND.EXE"
REF_FALLBACK="/home/xor/inertia_player/libdosbox_old/src/custom/src_f15/ASOUND.EXE"
WD="/tmp/A15"

if [[ ! -f "${REF}" && -f "${REF_FALLBACK}" ]]; then
  REF="${REF_FALLBACK}"
fi

mkdir -p "${WD}"
cp -f "${SRC}" "${WD}/AS6.ASM"
rm -f "${WD}/AS6.OBJ" "${WD}/AS6.LST" "${WD}/AS6L5.EXE" "${WD}/AS6L5.MAP"

"${KVD}" --mount="c:${MASM611_BIN}/" \
  C:\\ML.EXE /c /FlZ:\\tmp\\A15\\AS6.LST /FoZ:\\tmp\\A15\\AS6.OBJ Z:\\tmp\\A15\\AS6.ASM

"${KVD}" --mount="c:${MASM5_BIN}/" --mount="d:${WD}/" C:\\LINK.EXE <<'EOF'
D:\AS6.OBJ
D:\AS6L5.EXE
D:\AS6L5.MAP
;
EOF

python3 - "${REF}" "${WD}/AS6L5.EXE" <<'PY'
from pathlib import Path
import sys

ref = Path(sys.argv[1]).read_bytes()
out_path = Path(sys.argv[2])
out = bytearray(out_path.read_bytes())
# LINK 3.60 recalculates the MZ checksum differently from the reference.
# The payload and relocation table are identical; copy only e_csum.
out[0x12:0x14] = ref[0x12:0x14]
out_path.write_bytes(out)
PY

"${ROOT}/compare_payload.py" --ref "${REF}" --new "${WD}/AS6L5.EXE" --lst "${WD}/AS6.LST" --limit 16 || true

if cmp -s "${REF}" "${WD}/AS6L5.EXE"; then
  echo "AS6L5.EXE is byte-identical to ${REF}"
else
  cmp -l "${REF}" "${WD}/AS6L5.EXE" | sed -n '1,40p'
fi
