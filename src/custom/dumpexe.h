
#ifndef __DUMPEXE_H__
#define __DUMPEXE_H__
#include "mapper.h"

#include <cstdint>

namespace m2c {

void dumpexe_start_hook(const char *name,
                        uint16_t loadseg,
                        uint16_t load_cs = 0,
                        uint16_t load_ip = 0,
                        uint16_t load_ss = 0,
                        uint16_t load_sp = 0);
void dumpexe_note_exec_request(const char *name,
                               uint8_t mode,
                               uint16_t caller_cs,
                               uint16_t caller_ip,
                               uint16_t parent_psp);

void DumpExe1(bool pressed);
void DumpMemorySnapshot(bool pressed);
} // namespace m2c

#endif
