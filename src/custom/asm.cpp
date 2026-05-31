#include "asm.h"

namespace m2c {
uint8_t mem_readb(void *addr)
{
	return *static_cast<uint8_t *>(addr);
}

uint16_t mem_readw(void *addr)
{
	return *static_cast<uint16_t *>(addr);
}

uint32_t mem_readd(void *addr)
{
	return *static_cast<uint32_t *>(addr);
}

void mem_writeb(void *addr, uint8_t val)
{
	*static_cast<uint8_t *>(addr) = val;
}

void mem_writew(void *addr, uint16_t val)
{
	*static_cast<uint16_t *>(addr) = val;
}

void mem_writed(void *addr, uint32_t val)
{
	*static_cast<uint32_t *>(addr) = val;
}

void *raddr_(dw ss, dd esp)
{
	(void)ss;
	(void)esp;
	static dw dummy = 0;
	return &dummy;
}
} // namespace m2c
