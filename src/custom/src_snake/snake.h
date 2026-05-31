#ifndef __M2C_SNAKE_STUBS_H__
#define __M2C_SNAKE_STUBS_H__

/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

#include "../asm.h"



extern db& default_seg;
extern db& data;
extern char (& msg)[28];
extern db& instructions;
extern char (& dummyb_1a3d)[41];
extern char (& dummyb_1a66)[24];
extern char (& dummyb_1a7e)[26];
extern char (& athanksforplayi)[37];
extern char (& gameovermsg)[28];
extern char (& scoremsg)[8];
extern char (& head)[1];
extern db& dummyb_1ae2;
extern db& dummyb_1ae3;
extern char (& body)[1];
extern db (& dummyb_1ae5)[32];
extern db& dummyb_1b05;
extern db& dummyb_1b06;
extern db& dummyb_1b07;
extern db& dummyb_1b08;
extern db& dummyb_1b09;
extern db& dummyb_1b0a;
extern db& dummyb_1b0b;
extern db& dummyb_1b0c;
extern db& dummyb_1b0d;
extern db& dummyb_1b0e;
extern db& dummyb_1b0f;
extern db& dummyb_1b10;
extern db& dummyb_1b11;
extern db& dummyb_1b12;
extern db& dummyb_1b13;
extern db& segmentcount;
extern db& fruitactive;
extern db& fruitx;
extern db& fruity;
extern db& gameover;
extern db& quit;
extern db& delaytime;
extern db& dummyb_1b1b;
extern db& dummyb_1b1c;
extern db& dummyb_1b1d;
extern db& dummyb_1b1e;
extern db& dummyb_1b1f;
extern db& seg001;
namespace m2c{
void   Initializer();
static const dd kbegin = 0x1001;
static const dd kmainproc = 0x1002;
static const dd kmain = 0x1b20000;
static const dd kloc_1012d = 0x1b2002d;
static const dd kloc_10156 = 0x1b20056;
static const dd kloc_1016f = 0x1b2006f;
static const dd kloc_10188 = 0x1b20088;
static const dd kdelay = 0x1b20092;
static const dd kloc_10198 = 0x1b20098;
static const dd kfruitgeneration = 0x1b200a3;
static const dd kloc_101ab = 0x1b200ab;
static const dd kloc_101ec = 0x1b200ec;
static const dd klocret_10221 = 0x1b20121;
static const dd kdispdigit = 0x1b20122;
static const dd kdispnum = 0x1b2012a;
static const dd kloc_1023e = 0x1b2013e;
static const dd ksetcursorpos = 0x1b20141;
static const dd kdraw = 0x1b2014a;
static const dd kloc_10268 = 0x1b20168;
static const dd kloc_10279 = 0x1b20179;
static const dd kreadchar = 0x1b2018c;
static const dd kloc_10295 = 0x1b20195;
static const dd kkeyboardfunctions = 0x1b2019c;
static const dd kloc_102b6 = 0x1b201b6;
static const dd kloc_102c8 = 0x1b201c8;
static const dd kloc_102da = 0x1b201da;
static const dd kloc_102eb = 0x1b201eb;
static const dd kloc_102f1 = 0x1b201f1;
static const dd kshiftsnake = 0x1b201f6;
static const dd kloc_10305 = 0x1b20205;
static const dd kloc_10317 = 0x1b20217;
static const dd kloc_1032a = 0x1b2022a;
static const dd kloc_10334 = 0x1b20234;
static const dd kloc_1033c = 0x1b2023c;
static const dd kloc_1033e = 0x1b2023e;
static const dd kloc_1036c = 0x1b2026c;
static const dd kloc_10371 = 0x1b20271;
static const dd kprintbox = 0x1b2029f;
static const dd kloc_103a8 = 0x1b202a8;
static const dd kloc_103b2 = 0x1b202b2;
static const dd kloc_103bc = 0x1b202bc;
static const dd kloc_103c6 = 0x1b202c6;
static const dd kwritecharat = 0x1b202ce;
static const dd kreadcharat = 0x1b202f9;
static const dd kwritestringat = 0x1b20324;
static const dd kloc_1044a = 0x1b2034a;
static const dd kloc_10458 = 0x1b20358;
}
bool delay(m2c::_offsets, struct m2c::_STATE*);
bool dispdigit(m2c::_offsets, struct m2c::_STATE*);
bool dispnum(m2c::_offsets, struct m2c::_STATE*);
bool draw(m2c::_offsets, struct m2c::_STATE*);
bool fruitgeneration(m2c::_offsets, struct m2c::_STATE*);
bool keyboardfunctions(m2c::_offsets, struct m2c::_STATE*);
bool asmmain(m2c::_offsets, struct m2c::_STATE*);
bool mainproc(m2c::_offsets, struct m2c::_STATE*);
bool printbox(m2c::_offsets, struct m2c::_STATE*);
bool readchar(m2c::_offsets, struct m2c::_STATE*);
bool readcharat(m2c::_offsets, struct m2c::_STATE*);
bool setcursorpos(m2c::_offsets, struct m2c::_STATE*);
bool shiftsnake(m2c::_offsets, struct m2c::_STATE*);
bool writecharat(m2c::_offsets, struct m2c::_STATE*);
bool writestringat(m2c::_offsets, struct m2c::_STATE*);

bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);


#endif
