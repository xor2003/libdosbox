//
// Created by xor on 2.10.24..
//

#ifndef LIBDOSBOX_UTILS_H
#define LIBDOSBOX_UTILS_H

#include "asm.h"

// void hexDump(void *addr, int len);
size_t countEqual(const db *addr1, const db *addr2, int len);
#if _WIN32
void *memmem(const void *haystack,
             size_t haystack_len,
             const void *const needle,
             const size_t needle_len);
#endif

namespace m2c {
void cmpHexDump(void *addr1, void *addr2, int len);
}

#endif // LIBDOSBOX_UTILS_H
