/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void sub_106cc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_106cc:
    _begin:
#undef arg_0
#define arg_0 6
	// 1423 arg_0           = word ptr  6 ;~ 020E:000C
#undef arg_2
#define arg_2 8
	// 1424 arg_2           = word ptr  8 ;~ 020E:000C
cs=0x20e;eip=0x00000c; 	X(PUSH(bp));	// 1426 push    bp ;~ 020E:000C
cs=0x20e;eip=0x00000d; 	T(MOV(bp, sp));	// 1427 mov     bp, sp ;~ 020E:000D
cs=0x20e;eip=0x00000f; 	T(SUB(sp, 0x56));	// 1428 sub     sp, 56h ;~ 020E:000F
cs=0x20e;eip=0x000012; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 1429 push    [bp+arg_2] ;~ 020E:0012
cs=0x20e;eip=0x000015; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 1430 push    [bp+arg_0] ;~ 020E:0015
cs=0x20e;eip=0x000018; 	R(CALLF(sub_106e4,0));	// 1431 call    sub_106E4 ;~ 020E:0018
cs=0x20e;eip=0x00001d; 	T(ADD(sp, 4));	// 1432 add     sp, 4 ;~ 020E:001D
cs=0x20e;eip=0x000020; 	T(MOV(sp, bp));	// 1433 mov     sp, bp ;~ 020E:0020
cs=0x20e;eip=0x000022; 	X(POP(bp));	// 1434 pop     bp ;~ 020E:0022
cs=0x20e;eip=0x000023; 	R(RETF(0));	// 1435 retf ;~ 020E:0023

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::ksub_106cc: 	goto sub_106cc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, _source);m2c::stackDump(_state); abort();
    };
}

