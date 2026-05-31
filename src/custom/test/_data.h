
#ifndef ___DATA_H__
#define ___DATA_H__
#include "../asm.h"


#pragma pack(push, 1)
namespace m2c{
struct Memory{
db dummy1[0x1920];
db _text[16];
db dummy3[0x100];
db dummy2[84];
char byte_10164[1];
db filll[1024*1024*16];

                        db stack[STACK_SIZE];
                        db heap[HEAP_SIZE];
                };
}
#pragma pack(pop)

#endif
