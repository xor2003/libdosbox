add_library(zmbv STATIC zmbv.cpp)

pkg_check_modules(ZLIB_NG QUIET IMPORTED_TARGET zlib-ng)
pkg_check_modules(ZLIB QUIET IMPORTED_TARGET zlib)

if (NOT ZLIB_NG_FOUND AND NOT ZLIB_FOUND)
	message(FATAL_ERROR "No zlib implementation found. Install zlib-ng or zlib development package.")
endif()

target_include_directories(zmbv PUBLIC ..)
if (ZLIB_NG_FOUND)
	target_compile_definitions(zmbv PRIVATE C_SYSTEM_ZLIB_NG=1)
	target_link_libraries(zmbv PRIVATE PkgConfig::ZLIB_NG)
else()
	target_link_libraries(zmbv PRIVATE PkgConfig::ZLIB)
endif()
