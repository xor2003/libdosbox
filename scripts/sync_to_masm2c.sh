#!/usr/bin/env bash

# SPDX-License-Identifier: GPL-3.0-or-later

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
REPO_ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"

print_usage() {
	cat <<EOF
Usage:
  ${0##*/} [PROFILE] [TARGET_DIR]

PROFILE     Profile directory under src/custom/src_<PROFILE> or src/custom/<PROFILE>
            (default: f15)
TARGET_DIR  Destination root for synchronized files (default: /home/xor/masm2c)
EOF
}

if [[ "${1:-}" == "-h" || "${1:-}" == "--help" ]]; then
	print_usage
	exit 0
fi

PROFILE="${1:-f15}"
TARGET_DIR="${2:-/home/xor/masm2c}"

PROFILE_DIR="${REPO_ROOT}/src/custom/src_${PROFILE}"
if [[ ! -d "$PROFILE_DIR" && -d "${REPO_ROOT}/src/custom/${PROFILE}" ]]; then
	PROFILE_DIR="${REPO_ROOT}/src/custom/${PROFILE}"
fi

if [[ ! -d "$PROFILE_DIR" ]]; then
	echo "Profile not found: $PROFILE" >&2
	exit 1
fi

mkdir -p "$TARGET_DIR"
PROFILE_TARGET="$TARGET_DIR/$PROFILE"
mkdir -p "$PROFILE_TARGET"

while IFS= read -r -d '' src_path; do
	rel="${src_path#${PROFILE_DIR}/}"
	dst_path="$PROFILE_TARGET/$rel"
	mkdir -p "$(dirname "$dst_path")"
	cp "$src_path" "$dst_path"
done < <(find "$PROFILE_DIR" -type f \( -name '*.asm' -o -name '*.com' -o -name '*.seg' \) -print0)

for helper in check_fix_relocs.py eatmem.asm eatmem.com fc.py trace_stack_simplifier.py; do
	if [[ -f "$SCRIPT_DIR/$helper" ]]; then
		cp "$SCRIPT_DIR/$helper" "$TARGET_DIR/$helper"
	fi
done

echo "Synced profile '$PROFILE' to '$PROFILE_TARGET'"
