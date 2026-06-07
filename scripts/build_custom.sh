#!/usr/bin/env bash

# SPDX-License-Identifier: GPL-3.0-or-later

set -euo pipefail

SCRIPT_NAME=$(basename "$0")
SCRIPT_DIR=$(cd "$(dirname "$0")" && pwd)
REPO_ROOT=$(cd "$SCRIPT_DIR/.." && pwd)

print_usage() {
cat <<EOF_USAGE
Usage:
  ${SCRIPT_NAME} [PROFILE] [BUILD_DIR] [CMAKE_OPTIONS...]
  ${SCRIPT_NAME} [PROFILE] [-- CMAKE_OPTIONS...]

Positional arguments:
  PROFILE     Profile name under src/custom/ (default: instrument)
             Matches src/custom/src_<PROFILE>
             Use 'instrument' for memory dump/runtime info without converted-game dispatch.
             e.g. instrument, f15, goody

  BUILD_DIR   Optional CMake build directory (default: build/custom-<PROFILE>)

  CMAKE_OPTIONS
             Any additional CMake arguments passed to the configure step.
             Add -- before options only if you want to omit BUILD_DIR.

Examples:
  ${SCRIPT_NAME}
  ${SCRIPT_NAME} goody
  ${SCRIPT_NAME} goody build/goody
  ${SCRIPT_NAME} goody -- -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_COMPILER=clang++
EOF_USAGE
}

if [[ "${1:-}" == "-h" || "${1:-}" == "--help" ]]; then
	print_usage
	exit 0
fi

PROFILE="${1:-instrument}"
BUILD_DIR="build/custom-${PROFILE}"
CMAKE_EXTRA=()

if (( $# >= 2 )); then
	if [[ "$2" == --* ]]; then
		CMAKE_EXTRA=("${@:2}")
	else
		BUILD_DIR="$2"
		if (( $# >= 3 )); then
			CMAKE_EXTRA=("${@:3}")
		fi
	fi
fi

DEFAULT_IIR_DIR=""
if [[ -f "$REPO_ROOT/build_iir_install/lib/cmake/iir/iirConfig.cmake" ]]; then
	DEFAULT_IIR_DIR="$REPO_ROOT/build_iir_install/lib/cmake/iir"
elif [[ -f "$REPO_ROOT/build_iir_install_prefix/iirConfig.cmake" ]]; then
	DEFAULT_IIR_DIR="$REPO_ROOT/build_iir_install_prefix"
elif [[ -f "$REPO_ROOT/build_iir/iirConfig.cmake" ]]; then
	DEFAULT_IIR_DIR="$REPO_ROOT/build_iir"
fi

if [[ -n "$DEFAULT_IIR_DIR" ]]; then
	CMAKE_EXTRA=(-Diir_DIR="$DEFAULT_IIR_DIR" "${CMAKE_EXTRA[@]}")
fi

if [[ -f "$REPO_ROOT/build_sdl2_net_install/lib/cmake/SDL2_net/SDL2_netConfig.cmake" ]]; then
	CMAKE_EXTRA=(-DSDL2_net_DIR="$REPO_ROOT/build_sdl2_net_install/lib/cmake/SDL2_net" "${CMAKE_EXTRA[@]}")
fi
if [[ -f "$REPO_ROOT/build_opusfile_install/lib/cmake/OpusFile/OpusFileConfig.cmake" ]]; then
	CMAKE_EXTRA=(-DOpusFile_DIR="$REPO_ROOT/build_opusfile_install/lib/cmake/OpusFile" "${CMAKE_EXTRA[@]}")
fi

DEFAULT_CMAKE_PREFIX_PATH=()
for dep_prefix in \
	build_iir_install \
	build_iir_install_prefix \
	build_opusfile_install \
	build_sdl2_net_install \
	build_fluidsynth_install \
	build_mt32emu_install \
	build_iir
do
	full_path="$REPO_ROOT/$dep_prefix"
	if [[ -d "$full_path" ]]; then
		DEFAULT_CMAKE_PREFIX_PATH+=("$full_path")
	fi
done
if [[ -n "${CMAKE_PREFIX_PATH-}" ]]; then
	DEFAULT_CMAKE_PREFIX_PATH+=("$CMAKE_PREFIX_PATH")
fi
if (( ${#DEFAULT_CMAKE_PREFIX_PATH[@]} > 0 )); then
	joined_prefix=""
	for p in "${DEFAULT_CMAKE_PREFIX_PATH[@]}"; do
		if [[ -n "$joined_prefix" ]]; then
			joined_prefix+=";"
		fi
		joined_prefix+="$p"
	done
	CMAKE_EXTRA=(-DCMAKE_PREFIX_PATH="$joined_prefix" "${CMAKE_EXTRA[@]}")
fi

if (( ${#CMAKE_EXTRA[@]} > 0 )) && [[ "${CMAKE_EXTRA[0]}" == "--" ]]; then
	CMAKE_EXTRA=("${CMAKE_EXTRA[@]:1}")
fi

if [[ -z "$PROFILE" ]]; then
	echo "Error: empty PROFILE is not allowed."
	print_usage
	exit 1
fi

if [[ "$PROFILE" != "instrument" ]]; then
	PROFILE_DIR="${REPO_ROOT}/src/custom/src_${PROFILE}"
	if [[ ! -d "$PROFILE_DIR" && -d "${REPO_ROOT}/src/custom/${PROFILE}" ]]; then
		PROFILE_DIR="${REPO_ROOT}/src/custom/${PROFILE}"
	fi
else
	PROFILE_DIR=""
fi

if [[ "$PROFILE" != "instrument" && ! -d "$PROFILE_DIR" ]]; then
	mapfile -t PROFILES < <(find "${REPO_ROOT}/src/custom" -maxdepth 1 -type d -name 'src_*' -printf '%f\n' | sed 's/^src_//' | sort)
	PROFILES=("instrument" "${PROFILES[@]}")
	if (( ${#PROFILES[@]} == 0 )); then
		echo "No custom profiles found under src/custom/src_*."
	else
		echo "Available profiles: ${PROFILES[*]}"
	fi
	echo "Error: profile '${PROFILE}' does not map to an existing directory."
	echo "Hint: use ${SCRIPT_NAME} <profile> where profile exists as src/custom/src_<profile>."
	exit 1
fi

if [[ "$BUILD_DIR" == /* ]]; then
	BUILD_DIR_PATH="$BUILD_DIR"
else
	BUILD_DIR_PATH="$REPO_ROOT/$BUILD_DIR"
fi

mkdir -p "$BUILD_DIR_PATH"

cd "$REPO_ROOT"

echo "Configuring CMake profile '${PROFILE}' into '${BUILD_DIR_PATH}'."
cmake -S . -B "$BUILD_DIR_PATH" -DDOSBOX_CUSTOM_PROFILE="$PROFILE" "${CMAKE_EXTRA[@]}"

echo "Building."
cmake --build "$BUILD_DIR_PATH" -j"$(nproc 2> /dev/null || echo 2)"

echo "Done."
