
#ifndef ___DATA_H__
#define ___DATA_H__
#include "../asm.h"


#pragma pack(push, 1)
namespace m2c{
struct Memory{
db dummyb_0[6688];
char msg[28]; // 01a2:0000
db instructions; // 01a2:001c
char dummyb_1a3d[41]; // 01a2:001c
char dummyb_1a66[24]; // 01a2:001c
char dummyb_1a7e[26]; // 01a2:001c
char athanksforplayi[37]; // 01a2:0078
char gameovermsg[28]; // 01a2:009d
char scoremsg[8]; // 01a2:00b9
char head[1]; // 01a2:00c1
db dummyb_1ae2; // 01a2:00c2
db dummyb_1ae3; // 01a2:00c3
char body[1]; // 01a2:00c4
db dummyb_1ae5[32]; // 01a2:00c5
db dummyb_1b05;
db dummyb_1b06;
db dummyb_1b07;
db dummyb_1b08;
db dummyb_1b09;
db dummyb_1b0a;
db dummyb_1b0b;
db dummyb_1b0c;
db dummyb_1b0d;
db dummyb_1b0e;
db dummyb_1b0f;
db dummyb_1b10;
db dummyb_1b11;
db dummyb_1b12;
db dummyb_1b13;
db segmentcount; // 01a2:00f4
db fruitactive; // 01a2:00f5
db fruitx; // 01a2:00f6
db fruity; // 01a2:00f7
db gameover; // 01a2:00f8
db quit; // 01a2:00f9
db delaytime; // 01a2:00fa
db dummyb_1b1b;
db dummyb_1b1c;
db dummyb_1b1d;
db dummyb_1b1e;
db dummyb_1b1f;

#ifdef DOSBOX_CUSTOM
    db filll[1024*1024*16];
#endif
                        db stack[STACK_SIZE];
                        db heap[HEAP_SIZE];
                };
}
#pragma pack(pop)

#endif
