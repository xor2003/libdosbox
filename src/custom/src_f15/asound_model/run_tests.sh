#!/usr/bin/env bash
set -euo pipefail
cd "$(dirname "$0")"
cc=${CC:-cc}
cflags="${CFLAGS:--std=c89 -Wall -Wextra -Werror -pedantic -O2}"
eval "$cc" $cflags asound_model.c test_asound_model.c -o /tmp/asound_model_tests
/tmp/asound_model_tests

eval "$cc" $cflags asound_model.c asound_runtime.c test_asound_runtime.c -o /tmp/asound_runtime_tests
/tmp/asound_runtime_tests

if command -v clang >/dev/null 2>&1; then
  clang -std=c11 -Wall -Wextra -pedantic -Wno-dollar-in-identifier-extension asound_model.c test_asound_model.c -o /tmp/asound_model_tests_clang
  /tmp/asound_model_tests_clang
fi
