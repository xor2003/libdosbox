#!/usr/bin/env bash
set -euo pipefail

usage() {
	cat <<'USAGE'
Usage:
  scripts/memdump-workflow.sh snap [--fix-relocs] [--dir <dosbox-working-dir>] [<label>]
  scripts/memdump-workflow.sh compare <dump_a> <dump_b> [offset_a offset_b]
  scripts/memdump-workflow.sh -h | --help

Examples:
  scripts/memdump-workflow.sh snap --dir /home/xor/games/f15 pre_eat
  scripts/memdump-workflow.sh compare f15_before.1 f15_after.1
USAGE
}

script_dir="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
raw_name="#NONAME#.1"

cmd="${1:-}"
if [[ -z "$cmd" || "$cmd" == "-h" || "$cmd" == "--help" ]]; then
	usage
	exit 0
fi

cmd="${1}"
shift

case "$cmd" in
	snap|snapshot)
		fix_relocs="0"
		dir="$(pwd)"
		label=""

		while [[ $# -gt 0 ]]; do
			case "$1" in
				--fix-relocs)
					fix_relocs="1"
					shift
					;;
				--dir)
					[[ $# -lt 2 ]] && { echo "Missing value for --dir" >&2; exit 1; }
					dir="$2"
					shift 2
					;;
				-*)
					echo "Unknown option: $1" >&2
					usage
					exit 1
					;;
				*)
					if [[ -z "$label" ]]; then
						label="$1"
					else
						echo "Only one label is supported." >&2
						exit 1
					fi
					shift
					;;
			esac
		done

		raw_dump="$dir/$raw_name"
		if [[ ! -f "$raw_dump" ]]; then
			echo "No \"$raw_dump\" found." >&2
			echo "Press Ctrl+F2 in DOSBox, then rerun this command." >&2
			exit 1
		fi

		ts="$(date +%Y%m%d-%H%M%S)"
		out_dir="$dir/.memdump"
		mkdir -p "$out_dir"
		if [[ -z "$label" ]]; then
			label="$ts"
		fi
		out="$out_dir/$label.1"

		cp "$raw_dump" "$out"
		echo "Saved snapshot: $out"

		if [[ "$fix_relocs" == "1" ]]; then
			python3 "$script_dir/check_fix_relocs.py" "$out"
			echo "Applied check_fix_relocs.py to: $out"
		fi
		;;

	compare|diff)
		if [[ $# -lt 2 || $# -gt 4 ]]; then
			echo "compare mode requires <dump_a> <dump_b> [offset_a offset_b]" >&2
			usage
			exit 1
		fi

		a="$1"
		b="$2"
		off_a="${3:-0}"
		off_b="${4:-0}"
		python3 "$script_dir/fc.py" "$a" "$b" "$off_a" "$off_b"
		;;

	*)
		echo "Unknown command: $cmd" >&2
		usage
		exit 1
		;;
esac
