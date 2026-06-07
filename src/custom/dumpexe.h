
#ifndef __DUMPEXE_H__
#define __DUMPEXE_H__
#include "mapper.h"

#include <cstdint>

namespace m2c {

void dumpexe_start_hook(uint16_t loadseg,
                        uint16_t load_cs = 0,
                        uint16_t load_ip = 0,
                        uint16_t load_ss = 0,
                        uint16_t load_sp = 0);

void DumpExe1(bool pressed);
void DumpMemorySnapshot(bool pressed);
} // namespace m2c

#endif
