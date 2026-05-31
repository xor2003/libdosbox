#ifndef __asm_32_h__
#define __asm_32_h__

static inline db *raddr_(dw segment, dd offset)
{
	return reinterpret_cast<db *>(offset);
}

typedef dd MWORDSIZE;
#define offset(segment, name) ((size_t)(db *)&name)

#define MOVSS(a) \
	{ \
		void *dest; \
		void *src; \
		src = realAddress(esi, ds); \
		dest = realAddress(edi, es); \
		memmove(dest, src, a); \
		edi += (GET_DF() == 0) ? a : -a; \
		esi += (GET_DF() == 0) ? a : -a; \
	}
#define STOS(a, b) \
	{ \
		memcpy(realAddress(edi, es), ((db *)&eax) + b, a); \
		edi += (GET_DF() == 0) ? a : -a; \
	}

#define REP \
	ecx++; \
	while (--ecx != 0)
#define REPE \
	AFFECT_ZFifz(0); \
	ecx++; \
	while (--ecx != 0 && GET_ZF())
#define REPNE \
	AFFECT_ZFifz(1); \
	ecx++; \
	while (--ecx != 0 && !GET_ZF())
#define XLAT \
	{ \
		al = *m2c::raddr_(ds, ebx + al); \
	}
#define CMPSB \
	{ \
		db *src = realAddress(esi, ds); \
		db *dest = realAddress(edi, es); \
		CMP(*src, *dest); \
		edi += (GET_DF() == 0) ? 1 : -1; \
		esi += (GET_DF() == 0) ? 1 : -1; \
	}
#define CMPSW \
	{ \
		dw *src = (dw *)realAddress(esi, ds); \
		dw *dest = (dw *)realAddress(edi, es); \
		CMP(*src, *dest); \
		edi += (GET_DF() == 0) ? 2 : -2; \
		esi += (GET_DF() == 0) ? 2 : -2; \
	}

//  printf("~%08X_",*(dd*)realAddress(esi,ds)); printf("%08X~",*(dd*)realAddress(edi,es)); \

#define CMPSD \
	{ \
		dd *src = (dd *)realAddress(esi, ds); \
		dd *dest = (dd *)realAddress(edi, es); \
		CMP(*src, *dest); \
		edi += (GET_DF() == 0) ? 4 : -4; \
		esi += (GET_DF() == 0) ? 4 : -4; \
	}

// printf("~%02X",al);printf("%02X~",*realAddress(edi,es));

#define SCASB \
	{ \
		CMP(al, *(db *)realAddress(edi, es)); \
		edi += (GET_DF() == 0) ? 1 : -1; \
	}
#define SCASW \
	{ \
		CMP(ax, *(dw *)realAddress(edi, es)); \
		edi += (GET_DF() == 0) ? 2 : -2; \
	}
#define SCASD \
	{ \
		CMP(eax, *(dd *)realAddress(edi, es)); \
		edi += (GET_DF() == 0) ? 4 : -4; \
	}

#define LODS(addr, destreg, s) \
	{ \
		memcpy(((db *)&eax), &(addr), s); \
		; \
		destreg += (GET_DF() == 0) ? s : -s; \
	}
#define LODSS(a, b) \
	{ \
		memcpy(((db *)&eax) + b, realAddress(esi, ds), a); \
		esi += (GET_DF() == 0) ? a : -a; \
	}

#ifdef MSB_FIRST
#define STOSB STOS(1, 3)
#define STOSW STOS(2, 2)
#else

#define MOVSB \
	{ \
		mem_writeb((db *)m2c::raddr_(es, edi) - (db *)&m2c::m, \
		           mem_readb(realAddress(esi, ds) - (db *)&m2c::m)); \
		esi += (GET_DF() == 0) ? 1 : -1; \
		edi += (GET_DF() == 0) ? 1 : -1; \
	}
#define MOVSW \
	{ \
		mem_writew((db *)m2c::raddr_(es, edi) - (db *)&m2c::m, \
		           mem_readw(realAddress(esi, ds) - (db *)&m2c::m)); \
		esi += (GET_DF() == 0) ? 2 : -2; \
		edi += (GET_DF() == 0) ? 2 : -2; \
	}
#define MOVSD \
	{ \
		mem_writed((db *)m2c::raddr_(es, edi) - (db *)&m2c::m, \
		           mem_readd(realAddress(esi, ds) - (db *)&m2c::m)); \
		esi += (GET_DF() == 0) ? 4 : -4; \
		edi += (GET_DF() == 0) ? 4 : -4; \
	}

#define STOSB \
	{ \
		mem_writeb((db *)m2c::raddr_(es, edi) - (db *)&m2c::m, al); \
		edi += (GET_DF() == 0) ? 1 : -1; \
	}
#define STOSW \
	{ \
		mem_writew((db *)m2c::raddr_(es, edi) - (db *)&m2c::m, ax); \
		edi += (GET_DF() == 0) ? 2 : -2; \
	}
#define STOSD \
	{ \
		mem_writed((db *)m2c::raddr_(es, edi) - (db *)&m2c::m, eax); \
		edi += (GET_DF() == 0) ? 4 : -4; \
	}

#endif

#define INSB \
	{ \
		db averytemporary3 = asm2C_IN(dx); \
		*realAddress(edi, es) = averytemporary3; \
		edi += (GET_DF() == 0) ? 1 : -1; \
	}
#define INSW \
	{ \
		dw averytemporary3 = asm2C_INW(dx); \
		*realAddress(edi, es) = averytemporary3; \
		edi += (GET_DF() == 0) ? 2 : -2; \
	}

#define LOOP(label) \
	DEC(ecx); \
	JNZ(label)
#define LOOPE(label) \
	--ecx; \
	if (ecx != 0 && GET_ZF()) \
	GOTOLABEL(label) // TODO
#define LOOPNE(label) \
	--ecx; \
	if (ecx != 0 && !GET_ZF()) \
	GOTOLABEL(label) // TODO

#define LEAVE \
	{ \
		MOV(esp, ebp); \
		POP(ebp); \
	}

#endif
