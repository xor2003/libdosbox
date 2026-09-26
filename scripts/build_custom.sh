#!/usr/bin/env bash

# SPDX-License-Identifier: GPL-3.0-or-later

set -euo pipefail

SCRIPT_NAME=$(basename "$0")
SCRIPT_DIR=$(cd "$(dirname "$0")" && pwd)
REPO_ROOT=$(cd "$SCRIPT_DIR/.." && pwd)

print_usage() {
cat <<EOF_USAGE
Usage:
  ${SCRIPT_NAME} [--no-custom] [--run DOS_PATH] [--run-timeout SEC] [--trace-exec] [PROFILE] [BUILD_DIR] [CMAKE_OPTIONS...]
  ${SCRIPT_NAME} [--no-custom] [--run DOS_PATH] [--run-timeout SEC] [--trace-exec] [PROFILE] [-- CMAKE_OPTIONS...]

Positional arguments:
  PROFILE     Profile name under src/custom/ (default: instrument)
             Matches src/custom/src_<PROFILE>
             Use 'instrument' for memory dump/runtime info without converted-game dispatch.
             e.g. instrument, f15, goody

  BUILD_DIR   Optional CMake build directory (default:
             build/custom-<PROFILE> or build/custom-no-custom when disabled)

  CMAKE_OPTIONS
             Any additional CMake arguments passed to the configure step.
             Add -- before options only if you want to omit BUILD_DIR.

Options:
  --no-custom Disable custom instrumentation and build upstream-compatible DOSBox.
              GAME profiles are ignored in this mode.
  --run PATH   Run the built dosbox against a DOS program after the build finishes.
              If PATH is a file like /path/F15.COM, the script mounts its directory
              and runs the basename command, here 'F15'.
  --run-timeout SEC
              Kill the launched dosbox after SEC seconds (default: 5).
  --trace-exec Enable extra EXEC tracing via DOSBOX_TRACE_EXEC=1 for --run.
  -h, --help  Show this help text.

Examples:
  ${SCRIPT_NAME}
  ${SCRIPT_NAME} goody
  ${SCRIPT_NAME} --no-custom
  ${SCRIPT_NAME} --no-custom --run /home/xor/games/f15/F15.COM
  ${SCRIPT_NAME} --no-custom build/no_custom -DCMAKE_BUILD_TYPE=Release
  ${SCRIPT_NAME} goody -- -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_COMPILER=clang++
EOF_USAGE
}

if [[ "${1:-}" == "-h" || "${1:-}" == "--help" ]]; then
	print_usage
	exit 0
fi

DOSBOX_CUSTOM=ON
PROFILE="instrument"
BUILD_DIR=""
RUN_PATH=""
RUN_TIMEOUT=5
TRACE_EXEC=OFF
CMAKE_EXTRA=()
POSITIONAL_ARGS=()

while (( $# > 0 )); do
	arg="$1"
	shift
	case "$arg" in
		--no-custom)
			DOSBOX_CUSTOM=OFF
			;;
		--run)
			if (( $# == 0 )); then
				echo "Error: --run requires a path argument."
				exit 1
			fi
			RUN_PATH="$1"
			shift
			;;
		--run-timeout)
			if (( $# == 0 )); then
				echo "Error: --run-timeout requires a seconds argument."
				exit 1
			fi
			RUN_TIMEOUT="$1"
			shift
			;;
		--trace-exec)
			TRACE_EXEC=ON
			;;
		--)
			CMAKE_EXTRA+=("$@")
			break
			;;
		--help|-h)
			print_usage
			exit 0
			;;
		--*)
			CMAKE_EXTRA+=("$arg")
			;;
		*)
			POSITIONAL_ARGS+=("$arg")
			;;
	esac
done

if (( ${#POSITIONAL_ARGS[@]} >= 1 )); then
	PROFILE="${POSITIONAL_ARGS[0]}"
fi
if (( ${#POSITIONAL_ARGS[@]} >= 2 )); then
	BUILD_DIR="${POSITIONAL_ARGS[1]}"
fi
if (( ${#POSITIONAL_ARGS[@]} >= 3 )); then
	CMAKE_EXTRA+=("${POSITIONAL_ARGS[@]:2}")
fi

if [[ -z "$BUILD_DIR" ]]; then
	if [[ "$DOSBOX_CUSTOM" == "OFF" ]]; then
		BUILD_DIR="build/custom-no-custom"
	else
		BUILD_DIR="build/custom-${PROFILE}"
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

if [[ "$DOSBOX_CUSTOM" != "OFF" && "$PROFILE" != "instrument" ]]; then
	PROFILE_DIR="${REPO_ROOT}/src/custom/src_${PROFILE}"
	if [[ ! -d "$PROFILE_DIR" && -d "${REPO_ROOT}/src/custom/${PROFILE}" ]]; then
		PROFILE_DIR="${REPO_ROOT}/src/custom/${PROFILE}"
	fi
else
	PROFILE_DIR=""
fi

if [[ "$DOSBOX_CUSTOM" != "OFF" && "$PROFILE" != "instrument" && ! -d "$PROFILE_DIR" ]]; then
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

if [[ "$DOSBOX_CUSTOM" == "OFF" ]]; then
	echo "Configuring CMake without custom runtime into '${BUILD_DIR_PATH}'."
	CUSTOM_CMAKE_ARGS=(-DDOSBOX_CUSTOM=OFF)
else
	echo "Configuring CMake profile '${PROFILE}' into '${BUILD_DIR_PATH}'."
	CUSTOM_CMAKE_ARGS=(-DDOSBOX_CUSTOM=ON -DDOSBOX_CUSTOM_PROFILE="$PROFILE")
fi

cmake -S . -B "$BUILD_DIR_PATH" "${CUSTOM_CMAKE_ARGS[@]}" "${CMAKE_EXTRA[@]}"

echo "Building."
cmake --build "$BUILD_DIR_PATH" -j"$(nproc 2> /dev/null || echo 2)"

if [[ -n "$RUN_PATH" ]]; then
	DOSBOX_BIN="$BUILD_DIR_PATH/dosbox"
	if [[ ! -x "$DOSBOX_BIN" ]]; then
		echo "Error: built executable not found: $DOSBOX_BIN"
		exit 1
	fi

	if [[ ! -e "$RUN_PATH" ]]; then
		echo "Error: run target not found: $RUN_PATH"
		exit 1
	fi

	if [[ -d "$RUN_PATH" ]]; then
		RUN_DIR="$RUN_PATH"
		RUN_CMD=""
	else
		RUN_DIR=$(cd "$(dirname "$RUN_PATH")" && pwd)
		RUN_BASE=$(basename "$RUN_PATH")
		RUN_CMD="${RUN_BASE%.*}"
	fi

	echo "Running ${DOSBOX_BIN} against '${RUN_PATH}' (timeout ${RUN_TIMEOUT}s)."
	RUN_ARGS=("./dosbox" "$RUN_DIR")
	if [[ -n "$RUN_CMD" ]]; then
		RUN_ARGS+=("-c" "$RUN_CMD")
	fi

	if [[ "$TRACE_EXEC" == "ON" ]]; then
		(
			cd "$BUILD_DIR_PATH"
			env DOSBOX_TRACE_EXEC=1 timeout "${RUN_TIMEOUT}s" "${RUN_ARGS[@]}"
		) || true
	else
		(
			cd "$BUILD_DIR_PATH"
			timeout "${RUN_TIMEOUT}s" "${RUN_ARGS[@]}"
		) || true
	fi
fi

echo "Done."
