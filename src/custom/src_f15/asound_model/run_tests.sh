#!/usr/bin/env bash
set -euo pipefail
cd "$(dirname "$0")"
cc=${CC:-cc}
"$cc" -std=c89 -Wall -Wextra -Werror -pedantic asound_model.c test_asound_model.c -o /tmp/asound_model_tests
/tmp/asound_model_tests
