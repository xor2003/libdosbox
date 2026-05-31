cmake_minimum_required(VERSION 3.10)
project(custom_unit_tests)

get_filename_component(PROJECT_ROOT "${CMAKE_CURRENT_LIST_DIR}/../.." ABSOLUTE)

# Keep a standalone, dependency-light test binary for src/custom (excluding
# src/custom/* subdirs). This target is intentionally separate from the main
# test suite.
add_executable(custom_unit_tests
    custom_unit_tests.cpp
)

target_include_directories(custom_unit_tests PRIVATE
    ${PROJECT_ROOT}/src/custom
    ${PROJECT_ROOT}/src
    ${PROJECT_ROOT}/include
)

add_test(
    NAME custom_unit_tests
    COMMAND custom_unit_tests
)

add_executable(custom_state_header_tests
    custom_state_header_tests.cpp
)

target_include_directories(custom_state_header_tests PRIVATE
    ${PROJECT_ROOT}/src/custom
    ${PROJECT_ROOT}/src
    ${PROJECT_ROOT}/include
)

add_test(
    NAME custom_state_header_tests
    COMMAND custom_state_header_tests
)

add_executable(custom_header_contract_tests
    custom_header_contract_tests.cpp
)

target_include_directories(custom_header_contract_tests PRIVATE
    ${PROJECT_ROOT}/src/custom
    ${PROJECT_ROOT}/src
    ${PROJECT_ROOT}/include
)

add_test(
    NAME custom_header_contract_tests
    COMMAND custom_header_contract_tests
)

add_executable(shadowstack_impl_tests
    shadowstack_impl_tests.cpp
)

target_include_directories(shadowstack_impl_tests PRIVATE
    ${PROJECT_ROOT}/src/custom
    ${PROJECT_ROOT}/src
    ${PROJECT_ROOT}/include
)

add_test(
    NAME shadowstack_impl_tests
    COMMAND shadowstack_impl_tests
)
