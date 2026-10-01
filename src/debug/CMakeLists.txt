add_library(libdebug STATIC
		debug.cpp
		debug_disasm.cpp
		debug_gui.cpp
)

if (OPT_GDBSERVER)
	target_sources(libdebug PRIVATE gdb_server.cpp)
endif()

target_link_libraries(libdebug PRIVATE libpdcurses $<IF:$<TARGET_EXISTS:SDL2::SDL2>,SDL2::SDL2,SDL2::SDL2-static>)

# Winsock for the GDB server sockets
if (DOSBOX_PLATFORM_WINDOWS)
	target_link_libraries(libdebug PRIVATE ws2_32)
endif()
