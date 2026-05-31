#ifndef MEMMGR_H
#define MEMMGR_H

#include <stdint.h>
#include <stddef.h> // For size_t

// Memory management interface for custom DOSBox module
// This provides basic memory management functionality needed by asm.h

// Resolved Bits conflict by using existing type from types.h

// Basic memory management functions
void *memmgr_alloc(size_t size);
void memmgr_free(void *ptr);
void *memmgr_realloc(void *ptr, size_t size);

// Memory access functions
uint8_t memmgr_read_byte(uint32_t addr);
uint16_t memmgr_read_word(uint32_t addr);
uint32_t memmgr_read_dword(uint32_t addr);

void memmgr_write_byte(uint32_t addr, uint8_t value);
void memmgr_write_word(uint32_t addr, uint16_t value);
void memmgr_write_dword(uint32_t addr, uint32_t value);

// Memory initialization
void memmgr_init(void);
void memmgr_cleanup(void);

#endif // MEMMGR_H