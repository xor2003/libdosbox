#!/usr/bin/env bash
set -euo pipefail

ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "${ROOT_DIR}"

if ! command -v clang-format >/dev/null 2>&1; then
	echo "clang-format not found"
	exit 1
fi

if ! command -v clang-tidy >/dev/null 2>&1; then
	echo "clang-tidy not found"
	exit 1
fi

if [[ ! -f "builddir/compile_commands.json" ]]; then
	echo "builddir/compile_commands.json not found"
	echo "Run: meson setup builddir"
	exit 1
fi

mapfile -t custom_files < <(
	find src/custom -maxdepth 1 -type f \( \
		-name '*.h' -o -name '*.hpp' -o -name '*.c' -o -name '*.cc' -o -name '*.cpp' \
	\) | sort
)

if [[ ${#custom_files[@]} -eq 0 ]]; then
	echo "No src/custom top-level files found"
	exit 0
fi

echo "[custom-lint] Checking clang-format (top-level src/custom only)"
clang-format --dry-run --Werror "${custom_files[@]}"

mapfile -t custom_cpp_files < <(
	find src/custom -maxdepth 1 -type f -name '*.cpp' | sort
)

if [[ ${#custom_cpp_files[@]} -eq 0 ]]; then
	echo "No src/custom top-level .cpp files found for clang-tidy"
	exit 0
fi

echo "[custom-lint] Running clang-tidy (top-level src/custom .cpp only)"
for f in "${custom_cpp_files[@]}"; do
	echo "  - ${f}"
	clang-tidy -p builddir "${f}" --quiet -- \
		-I"${ROOT_DIR}/include" \
		-I"${ROOT_DIR}/src" \
		-I"${ROOT_DIR}/src/custom" \
		-DDOSBOX_CUSTOM -DM2CDEBUG=1 -D_SHADOW_STACK -std=c++17
done
