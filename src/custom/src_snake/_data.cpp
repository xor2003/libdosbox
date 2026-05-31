#include "_data.h"
namespace m2c{

struct Memory m;

struct Memory types;

db(& stack)[STACK_SIZE]=m.stack;
db(& heap)[HEAP_SIZE]=m.heap;
}
db& default_seg=*((db*)&m2c::m+0x0);
db& data=*((db*)&m2c::m+0x1a20);
char (& msg)[28] = m2c::m.msg;
db& instructions = m2c::m.instructions;
char (& dummyb_1a3d)[41] = m2c::m.dummyb_1a3d;
char (& dummyb_1a66)[24] = m2c::m.dummyb_1a66;
char (& dummyb_1a7e)[26] = m2c::m.dummyb_1a7e;
char (& athanksforplayi)[37] = m2c::m.athanksforplayi;
char (& gameovermsg)[28] = m2c::m.gameovermsg;
char (& scoremsg)[8] = m2c::m.scoremsg;
char (& head)[1] = m2c::m.head;
db& dummyb_1ae2 = m2c::m.dummyb_1ae2;
db& dummyb_1ae3 = m2c::m.dummyb_1ae3;
char (& body)[1] = m2c::m.body;
db (& dummyb_1ae5)[32] = m2c::m.dummyb_1ae5;
db& dummyb_1b05 = m2c::m.dummyb_1b05;
db& dummyb_1b06 = m2c::m.dummyb_1b06;
db& dummyb_1b07 = m2c::m.dummyb_1b07;
db& dummyb_1b08 = m2c::m.dummyb_1b08;
db& dummyb_1b09 = m2c::m.dummyb_1b09;
db& dummyb_1b0a = m2c::m.dummyb_1b0a;
db& dummyb_1b0b = m2c::m.dummyb_1b0b;
db& dummyb_1b0c = m2c::m.dummyb_1b0c;
db& dummyb_1b0d = m2c::m.dummyb_1b0d;
db& dummyb_1b0e = m2c::m.dummyb_1b0e;
db& dummyb_1b0f = m2c::m.dummyb_1b0f;
db& dummyb_1b10 = m2c::m.dummyb_1b10;
db& dummyb_1b11 = m2c::m.dummyb_1b11;
db& dummyb_1b12 = m2c::m.dummyb_1b12;
db& dummyb_1b13 = m2c::m.dummyb_1b13;
db& segmentcount = m2c::m.segmentcount;
db& fruitactive = m2c::m.fruitactive;
db& fruitx = m2c::m.fruitx;
db& fruity = m2c::m.fruity;
db& gameover = m2c::m.gameover;
db& quit = m2c::m.quit;
db& delaytime = m2c::m.delaytime;
db& dummyb_1b1b = m2c::m.dummyb_1b1b;
db& dummyb_1b1c = m2c::m.dummyb_1b1c;
db& dummyb_1b1d = m2c::m.dummyb_1b1d;
db& dummyb_1b1e = m2c::m.dummyb_1b1e;
db& dummyb_1b1f = m2c::m.dummyb_1b1f;
db& seg001=*((db*)&m2c::m+0x1b20);

        
