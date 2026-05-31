/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool sub_26ec4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_26ec4:
    _begin:
#undef arg_0
#define arg_0 6
	// 43336 arg_0           = word ptr  6 ;~ 188E:0004
#undef arg_2
#define arg_2 8
	// 43337 arg_2           = word ptr  8 ;~ 188E:0004
#undef arg_4
#define arg_4 0x0A
	// 43338 arg_4           = word ptr  0Ah ;~ 188E:0004
#undef arg_6
#define arg_6 0x0C
	// 43339 arg_6           = word ptr  0Ch ;~ 188E:0004
ret_188e_4:
	// 7560 
cs=0x188e;eip=0x000004; 	X(PUSH(bp));	// 43341 push    bp ;~ 188E:0004
cs=0x188e;eip=0x000005; 	T(MOV(bp, sp));	// 43342 mov     bp, sp ;~ 188E:0005
cs=0x188e;eip=0x000007; 	X(PUSH(si));	// 43343 push    si ;~ 188E:0007
cs=0x188e;eip=0x000008; 	X(PUSH(di));	// 43344 push    di ;~ 188E:0008
cs=0x188e;eip=0x000009; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 43345 mov     ax, [bp+arg_0] ;~ 188E:0009
cs=0x188e;eip=0x00000c; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 43346 mov     dx, [bp+arg_2] ;~ 188E:000C
cs=0x188e;eip=0x00000f; 	T(MOV(cl, byte_37b8f));	// 43347 mov     cl, byte_37B8F ;~ 188E:000F
cs=0x188e;eip=0x000013; 	T(SHL(ax, cl));	// 43348 shl     ax, cl ;~ 188E:0013
cs=0x188e;eip=0x000015; 	T(SHL(dx, cl));	// 43349 shl     dx, cl ;~ 188E:0015
cs=0x188e;eip=0x000017; 	T(MOV(cx, ax));	// 43350 mov     cx, ax ;~ 188E:0017
cs=0x188e;eip=0x000019; 	T(MOV(ax, 7));	// 43351 mov     ax, 7 ;~ 188E:0019
cs=0x188e;eip=0x00001c; 	R(_INT(0x33));	// 43352 int     33h             ; - MS MOUSE - DEFINE HORIZONTAL CURSOR RANGE ;~ 188E:001C
cs=0x188e;eip=0x00001e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 43354 mov     ax, [bp+arg_4] ;~ 188E:001E
cs=0x188e;eip=0x000021; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 43355 mov     dx, [bp+arg_6] ;~ 188E:0021
cs=0x188e;eip=0x000024; 	T(MOV(cl, byte_37b90));	// 43356 mov     cl, byte_37B90 ;~ 188E:0024
cs=0x188e;eip=0x000028; 	T(SHL(ax, cl));	// 43357 shl     ax, cl ;~ 188E:0028
cs=0x188e;eip=0x00002a; 	T(SHL(dx, cl));	// 43358 shl     dx, cl ;~ 188E:002A
cs=0x188e;eip=0x00002c; 	T(MOV(cx, ax));	// 43359 mov     cx, ax ;~ 188E:002C
cs=0x188e;eip=0x00002e; 	T(MOV(ax, 8));	// 43360 mov     ax, 8 ;~ 188E:002E
cs=0x188e;eip=0x000031; 	R(_INT(0x33));	// 43361 int     33h             ; - MS MOUSE - DEFINE VERTICAL CURSOR RANGE ;~ 188E:0031
cs=0x188e;eip=0x000033; 	T(XOR(ax, ax));	// 43363 xor     ax, ax ;~ 188E:0033
cs=0x188e;eip=0x000035; 	X(POP(di));	// 43364 pop     di ;~ 188E:0035
cs=0x188e;eip=0x000036; 	X(POP(si));	// 43365 pop     si ;~ 188E:0036
cs=0x188e;eip=0x000037; 	X(POP(bp));	// 43366 pop     bp ;~ 188E:0037
cs=0x188e;eip=0x000038; 	R(RETF(0));	// 43367 retf ;~ 188E:0038

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_188e_4: 	goto ret_188e_4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

