#!/usr/bin/env bash
set -euo pipefail

KVD="/home/xor/kvikdos/kvikdos"
MSC_BIN="/home/xor/inertia_player/dos_compilers/Microsoft C v5.1/bin"
LIB_DIR="/home/xor/inertia_player/dos_compilers/Microsoft C v5.1/lib"
INCLUDE_DIR="/home/xor/inertia_player/dos_compilers/Microsoft C v5.1/INCLUDE"
ROOT="$(cd "$(dirname "$0")" && pwd)"
WD="/tmp/AS15MS"

mkdir -p "${WD}"
rm -f "${WD}"/*.C "${WD}"/*.H "${WD}"/*.EXE "${WD}"/*.OBJ "${WD}"/*.MAP

cp -f "${ROOT}/asound_model.c" "${WD}/AM1.C"
cp -f "${ROOT}/asound_model.h" "${WD}/AM1.H"
cp -f "${ROOT}/asound_runtime.c" "${WD}/AR1.C"
cp -f "${ROOT}/asound_runtime.h" "${WD}/AR1.H"
cp -f "${ROOT}/asound_runtime_msc_demo.c" "${WD}/MD1.C"

sed -i -e 's/asound_model.h/AM1.H/g' "${WD}/AM1.C" "${WD}/AR1.C" "${WD}/AR1.H"
sed -i -e 's/asound_runtime.h/AR1.H/g' "${WD}/MD1.C" "${WD}/AR1.C"

cp -f "${WD}/AM1.H" "${WD}/AM.H"
cp -f "${WD}/AR1.H" "${WD}/AR.H"
cp -f "${WD}/AM1.C" "${WD}/AM.C"
cp -f "${WD}/AR1.C" "${WD}/AR.C"
cp -f "${WD}/MD1.C" "${WD}/MD.C"

"${KVD}" --mount="c:${MSC_BIN}/" \
  --mount="d:${WD}/" \
  --mount="f:${INCLUDE_DIR}/" \
  --mount="g:${LIB_DIR}/" \
  C:\CL.EXE /c /W3 /G2 /AS /FoD:\AM.OBJ /I F:\ D:\AM.C
"${KVD}" --mount="c:${MSC_BIN}/" \
  --mount="d:${WD}/" \
  --mount="f:${INCLUDE_DIR}/" \
  --mount="g:${LIB_DIR}/" \
  C:\CL.EXE /c /W3 /G2 /AS /FoD:\AR.OBJ /I F:\ D:\AR.C
"${KVD}" --mount="c:${MSC_BIN}/" \
  --mount="d:${WD}/" \
  --mount="f:${INCLUDE_DIR}/" \
  --mount="g:${LIB_DIR}/" \
  C:\CL.EXE /c /W3 /G2 /AS /FoD:\MD.OBJ /I F:\ D:\MD.C

"${KVD}" --mount="c:${MSC_BIN}/" \
  --mount="d:${WD}/" \
  --mount="g:${LIB_DIR}/" \
  C:\LINK.EXE D:\AM.OBJ+D:\AR.OBJ+D:\MD.OBJ,D:\ASDRV.EXE,D:\ASDRV.MAP,G:\SLIBCE.LIB

cp -f "${WD}/ASDRV.EXE" "${ROOT}/asound_msc51.exe"

ls -la "${WD}" | sed -n '1,120p'
echo "wrote: ${ROOT}/asound_msc51.exe"
