#ifndef __M2C_INT8__STUBS_H__
#define __M2C_INT8__STUBS_H__

/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */
#include <algorithm>
#include <iterator>

#include "../asm.h"

//namespace int8_ {


extern db (& dummy1)[6688];
extern db (& _text)[16];
extern db (& dummy2)[84];
extern char (& byte_10164)[1];
namespace m2c{
static const dd kbegin = 0x1001;
static const dd kmainproc = 0x1002;
static const dd k_main = 0x1920100;
static const dd k_int8 = 0x192012b;
static const dd kloc_10154 = 0x1920144;
static const dd k_group1 = 0x1920100;
void   Initializer();
}
bool mainproc(m2c::_offsets, struct m2c::_STATE*);
bool _group1(m2c::_offsets, struct m2c::_STATE*);
bool _main(m2c::_offsets, struct m2c::_STATE*);
bool _int8_(m2c::_offsets, struct m2c::_STATE*);
bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);

//};

//} // End of namespace

#endif
