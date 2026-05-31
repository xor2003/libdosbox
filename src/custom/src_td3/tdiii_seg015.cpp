/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool sub_26fb8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_26fb8:
    _begin:
#undef arg_0
#define arg_0 6
	// 43558 arg_0           = word ptr  6 ;~ 189D:0008
#undef arg_2
#define arg_2 8
	// 43559 arg_2           = word ptr  8 ;~ 189D:0008
ret_189d_8:
	// 7566 
cs=0x189d;eip=0x000008; 	X(PUSH(bp));	// 43561 push    bp ;~ 189D:0008
cs=0x189d;eip=0x000009; 	T(MOV(bp, sp));	// 43562 mov     bp, sp ;~ 189D:0009
cs=0x189d;eip=0x00000b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 43563 mov     ax, [bp+arg_0] ;~ 189D:000B
cs=0x189d;eip=0x00000e; 	X(MOV(word_37b8b, ax));	// 43564 mov     word_37B8B, ax ;~ 189D:000E
cs=0x189d;eip=0x000011; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 43565 mov     ax, [bp+arg_2] ;~ 189D:0011
cs=0x189d;eip=0x000014; 	X(MOV(word_37b8d, ax));	// 43566 mov     word_37B8D, ax ;~ 189D:0014
cs=0x189d;eip=0x000017; 	T(XOR(ax, ax));	// 43567 xor     ax, ax ;~ 189D:0017
cs=0x189d;eip=0x000019; 	X(POP(bp));	// 43568 pop     bp ;~ 189D:0019
cs=0x189d;eip=0x00001a; 	R(RETF(0));	// 43569 retf ;~ 189D:001A

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::ksub_26fb8: 	goto sub_26fb8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

