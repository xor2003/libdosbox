#!/usr/bin/env bash
set -euo pipefail

# Short-path rebuild flow for labeled ASOUND source using MASM 5 + kvikdos
# Uses strict 8.3 names in /tmp/A15 to avoid path-name issues.

KVD="/home/xor/kvikdos/kvikdos"
ROOT="/home/xor/inertia_player/libdosbox/src/custom/src_f15/asound_rebuild"
MASM5_BIN="/home/xor/inertia_player/dos_compilers/Microsoft MASM v5/BIN"
ML="${MASM5_BIN}/MASM.EXE"
LNK="${MASM5_BIN}/LINK.EXE"
MZDIFF="/home/xor/tmp/f15se2-re/mzretools/debug/mzdiff"
SRC="/home/xor/inertia_player/libdosbox/src/custom/src_f15/asound_rebuild/asound_rebuild.asm"
REF="/home/xor/inertia_player/libdosbox/src/custom/src_f15/ASOUND.EXE"
REF_FALLBACK="/home/xor/inertia_player/libdosbox-0.5x/src/custom/src_f15/ASOUND.EXE"
WD="/tmp/A15"

mkdir -p "${WD}"
cp -f "${SRC}" "${WD}/ASOUND.ASM"

if [[ ! -f "${REF}" && -f "${REF_FALLBACK}" ]]; then
  REF="${REF_FALLBACK}"
fi

echo "[1/3] Assemble (short path + 8.3 names)"
(
  cd "${WD}"
  # MASM 5 syntax variant
  python3 - <<'PY'
from pathlib import Path
p = Path("/tmp/A15/ASOUND.ASM")
t = p.read_text(errors="ignore")
t = t.replace(".386\n", "")
t = t.replace("OPTION NOSCOPED\n", "")
t = t.replace("segment para public 'DATA' use16", "segment word public 'DATA'")
t = t.replace("segment para public 'CODE' use16", "segment word public 'CODE'")
t = t.replace(" use16", "")
p.write_text(t)
PY
  "${KVD}" --mount="c:${MASM5_BIN}/" --mount="d:/tmp/A15/" \
    C:\\MASM.EXE D:\\ASOUND.ASM,D:\\A5.OBJ,D:\\A5.LST,NUL\;
)

echo "[2/3] Link (short path + 8.3 names)"
(
  # LINK 3.60 is interactive; terminate Libraries prompt with ';'
  # to avoid fatal L1102 unexpected end-of-file.
  "${KVD}" --mount="c:${MASM5_BIN}/" --mount="d:/tmp/A15/" C:\\LINK.EXE <<'EOF'
D:\A5.OBJ
D:\A5.EXE
D:\A5.MAP
;
EOF
)

python3 - "${REF}" "${WD}/A5.EXE" <<'PY'
from pathlib import Path
import sys

ref = Path(sys.argv[1]).read_bytes()
new_path = Path(sys.argv[2])
out = bytearray(new_path.read_bytes())
out[0x12:0x14] = ref[0x12:0x14]
new_path.write_bytes(out)
PY

echo "[3/3] Compare with reference using mzdiff"
if [[ -f "${REF}" ]]; then
  "${MZDIFF}" "${WD}/A5.EXE" "${REF}" || true
  python3 "${ROOT}/compare_payload.py" --ref "${REF}" --new "${WD}/A5.EXE" --lst "${WD}/A5.LST" --limit 16 || true
  if cmp -s "${WD}/A5.EXE" "${REF}"; then
    echo "A5.EXE is byte-identical to ${REF}"
  else
    cmp -l "${REF}" "${WD}/A5.EXE" | sed -n '1,40p' || true
  fi
else
  echo "Reference ASOUND.EXE not found, skipping mzdiff"
fi

cp -f "${WD}/A5.EXE" "${WD}/ASOUND.EXE"
cp -f "${WD}/A5.OBJ" "${WD}/ASOUND.OBJ"
cp -f "${WD}/A5.LST" "${WD}/ASOUND_REBUILD.LST"
echo "Wrote: ${WD}/ASOUND.EXE"

echo
ls -la "${WD}" | sed -n '1,120p'
