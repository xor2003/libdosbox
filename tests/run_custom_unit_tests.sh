#!/usr/bin/env bash
set -euo pipefail

ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
BUILD_DIR="${ROOT_DIR}/tests/custom/build-standalone"

cmake -S "${ROOT_DIR}/tests/custom" -B "${BUILD_DIR}"
cmake --build "${BUILD_DIR}" -j

"${BUILD_DIR}/custom_unit_tests"
"${BUILD_DIR}/custom_state_header_tests"
"${BUILD_DIR}/custom_header_contract_tests"
"${BUILD_DIR}/shadowstack_impl_tests"
