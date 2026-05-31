#ifndef INIT_H
#define INIT_H

#include <stdio.h>
#include <string.h>

#include "asm.h"


#include "cpu.h"
#include "mem.h"




/* Stack cleanup for ret i16 (not typical in C) */
/*
static inline void RET(unsigned short val) {
	reg_sp += val;
}*/

static inline char* init_getCharname(RealPt p) {
    return (char*)MemBase + Real2Phys(p) + 16;
}

static inline char* getString(RealPt p) {
        return (char*)MemBase + Real2Phys(p);
}

static inline Bit8u* Real2Host(RealPt p) {
        return MemBase + Real2Phys(p);
}


/**
 * struct_copy() - wrapper for struct assignments
 * @dst:	destination
 * @src:	source
 * @len:	length
 *
 * This is only a marker for copying structs.
 */
static inline void struct_copy(Bit8u *dst, Bit8u *src, int len)
{

	if (len < 0) {
		m2c::log_error("ERROR: %s copy negative amount of bytes\n", __func__);
		return;
	}

	memcpy(dst, src, len);
}


extern unsigned short datseg;
extern Bit8u *p_datseg;
extern Bitu reloc_game;
extern Bitu reloc_gen;

static inline Bit8u ds_readb(unsigned short offs) {
	return host_readb(p_datseg + offs);
}
static inline Bit16u ds_readw(unsigned short offs) {
	return host_readw(p_datseg + offs);
}
static inline Bit32u ds_readd(unsigned short offs) {
	return host_readd(p_datseg + offs);
}

static inline Bit8s ds_readbs(unsigned short offs) {
	return (Bit8s)host_readb(p_datseg + offs);
}
static inline Bit16s ds_readws(unsigned short offs) {
	return (Bit16s)host_readw(p_datseg + offs);
}
static inline Bit32s ds_readds(unsigned short offs) {
	return (Bit32s)host_readd(p_datseg + offs);
}

static inline Bit8s ds_writebs(unsigned short offs, Bit8s val) {
	host_writeb(p_datseg + offs, val);
	return val;
}
static inline Bit8u ds_writeb(unsigned short offs, Bit8u val) {
	host_writeb(p_datseg + offs, val);
	return val;
}
static inline Bit16u ds_writew(unsigned short offs, Bit16u val) {
	host_writew(p_datseg + offs, val);
	return val;
}
static inline Bit16s ds_writews(unsigned short offs, Bit16s val) {
	host_writew(p_datseg + offs, val);
	return val;
}
static inline Bit32u ds_writed(unsigned short offs, Bit32u val) {
	host_writed(p_datseg + offs, val);
	return val;
}


namespace G105de {
void BE_cleanup();
}

int init_callf(unsigned selector, unsigned offs);

void init_entrypoint(Bit16u relocate);
//void init_status_init();
void init_status_exit();
void init_status_enable();
void init_status_disable();
void init_status_update(unsigned char*, unsigned short);

//void init_timer_enable();
void init_timer_disable();
#endif
