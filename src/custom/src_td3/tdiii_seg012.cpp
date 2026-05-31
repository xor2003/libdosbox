/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool sub_26ef9(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_26ef9:
    _begin:
#undef arg_0
#define arg_0 6
	// 43387 arg_0           = word ptr  6 ;~ 1891:0009
#undef arg_2
#define arg_2 8
	// 43388 arg_2           = word ptr  8 ;~ 1891:0009
ret_1891_9:
	// 7561 
cs=0x1891;eip=0x000009; 	X(PUSH(bp));	// 43390 push    bp ;~ 1891:0009
cs=0x1891;eip=0x00000a; 	T(MOV(bp, sp));	// 43391 mov     bp, sp ;~ 1891:000A
cs=0x1891;eip=0x00000c; 	X(PUSH(si));	// 43392 push    si ;~ 1891:000C
cs=0x1891;eip=0x00000d; 	X(PUSH(di));	// 43393 push    di ;~ 1891:000D
cs=0x1891;eip=0x00000e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 43394 mov     ax, [bp+arg_0] ;~ 1891:000E
cs=0x1891;eip=0x000011; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 43395 mov     dx, [bp+arg_2] ;~ 1891:0011
cs=0x1891;eip=0x000014; 	T(MOV(cl, byte_37b8f));	// 43396 mov     cl, byte_37B8F ;~ 1891:0014
cs=0x1891;eip=0x000018; 	T(SHL(ax, cl));	// 43397 shl     ax, cl ;~ 1891:0018
cs=0x1891;eip=0x00001a; 	T(MOV(cl, byte_37b90));	// 43398 mov     cl, byte_37B90 ;~ 1891:001A
cs=0x1891;eip=0x00001e; 	T(SHL(dx, cl));	// 43399 shl     dx, cl ;~ 1891:001E
cs=0x1891;eip=0x000020; 	T(MOV(cx, ax));	// 43400 mov     cx, ax ;~ 1891:0020
cs=0x1891;eip=0x000022; 	T(MOV(ax, 4));	// 43401 mov     ax, 4 ;~ 1891:0022
cs=0x1891;eip=0x000025; 	R(_INT(0x33));	// 43402 int     33h             ; - MS MOUSE - POSITION MOUSE CURSOR ;~ 1891:0025
cs=0x1891;eip=0x000027; 	T(XOR(ax, ax));	// 43404 xor     ax, ax ;~ 1891:0027
cs=0x1891;eip=0x000029; 	X(POP(di));	// 43405 pop     di ;~ 1891:0029
cs=0x1891;eip=0x00002a; 	X(POP(si));	// 43406 pop     si ;~ 1891:002A
cs=0x1891;eip=0x00002b; 	X(POP(bp));	// 43407 pop     bp ;~ 1891:002B
cs=0x1891;eip=0x00002c; 	R(RETF(0));	// 43408 retf ;~ 1891:002C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_1891_9: 	goto ret_1891_9;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

