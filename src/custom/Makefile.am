AM_CPPFLAGS = -I$(top_srcdir)/include -Wall -pedantic -DDOSBOX -mno-ms-bitfields -Wno-multichar -Wno-address-of-packed-member -I/include/ncurses  -I. -L.  -ggdb3 -lSDL -Wno-unused-variable -Wno-strict-aliasing -I./src/ -DM2CDEBUG=1

SUBDIRS = src

noinst_LIBRARIES = libcustom.a
libcustom_a_SOURCES = custom.cpp custom_hooks.h asm.h asm_16.h asm_32.h segfault.cpp
