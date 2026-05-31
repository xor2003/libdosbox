#ifndef STATE_H
#define STATE_H

#include <cstdint>

namespace m2c {
struct _STATE {
	uint32_t eax;
	uint32_t ebx;
	uint32_t ecx;
	uint32_t edx;
	uint32_t esi;
	uint32_t edi;
	uint32_t esp;
	uint32_t ebp;
	uint32_t eip;

	uint16_t cs;
	uint16_t ds;
	uint16_t es;
	uint16_t fs;
	uint16_t gs;
	uint16_t ss;

	bool CF;
	bool PF;
	bool AF;
	bool ZF;
	bool SF;
	bool DF;
	bool OF;
	bool IF;
};
} // namespace m2c

#endif // STATE_H