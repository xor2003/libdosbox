#!/usr/bin/env bash
set -euo pipefail
cd "$(dirname "$0")"
cc=${CC:-cc}
cflags=${CFLAGS:--std=c99 -Wall -Wextra -Werror -pedantic -O2}
$cc $cflags asound_model.c asound_demo.c -o /tmp/asound_model_demo
/tmp/asound_model_demo "$@"
