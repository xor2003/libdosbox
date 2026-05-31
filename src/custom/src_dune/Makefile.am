AM_CPPFLAGS = -I$(top_srcdir)/include -Wall -DDOSBOX -I../ -mno-ms-bitfields -Wno-multichar -Wno-address-of-packed-member -I/include/ncurses  -I. -L.  -ggdb3 -lSDL -std=c++11 -Wno-unused-variable -Wno-unused-but-set-variable -Wno-strict-aliasing -Wno-narrowing -Wno-unused-function -Wno-comment -fpermissive -finline-limit=50 -ftime-report -DM2CDEBUG # -v -Q

SUBDIRS = 

noinst_LIBRARIES = libsrc.a
libsrc_a_SOURCES = _data.cpp  _data.h init.cpp init.h  dnprgdrv.cpp dnprgdrv.h dnprgdrv_default_seg.cpp dnprgdrv_seg000.cpp dnprgdrv_seg002.cpp dnprgdrv_seg003.cpp dnprgdrv_seg004.cpp

#EXTRA_DIST = schick.h

