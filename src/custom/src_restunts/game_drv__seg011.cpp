/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool polarradius3d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    polarradius3d:
    _begin:
#undef arg_0
#define arg_0 6
	// 62352 arg_0           = word ptr  6 ;~ 2042:0008
ret_2042_8:
	// 8691 
cs=0x2042;eip=0x000008; 	X(PUSH(bp));	// 62354 push    bp ;~ 2042:0008
cs=0x2042;eip=0x000009; 	T(MOV(bp, sp));	// 62355 mov     bp, sp ;~ 2042:0009
cs=0x2042;eip=0x00000b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 62356 mov     bx, [bp+arg_0] ;~ 2042:000B
cs=0x2042;eip=0x00000e; 	X(PUSH(*(dw*)(raddr(ds,bx+4))));	// 62357 push    word ptr [bx+4] ;~ 2042:000E
cs=0x2042;eip=0x000011; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 62358 push    word ptr [bx+2] ;~ 2042:0011
cs=0x2042;eip=0x000014; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 62359 push    word ptr [bx] ;~ 2042:0014
cs=0x2042;eip=0x000016; 	R(CALLF(polarradius2d,0));	// 62360 call    polarRadius2D ;~ 2042:0016
cs=0x2042;eip=0x00001b; 	T(ADD(sp, 4));	// 62361 add     sp, 4 ;~ 2042:001B
cs=0x2042;eip=0x00001e; 	X(PUSH(ax));	// 62362 push    ax ;~ 2042:001E
cs=0x2042;eip=0x00001f; 	R(CALLF(polarradius2d,0));	// 62363 call    polarRadius2D ;~ 2042:001F
cs=0x2042;eip=0x000024; 	T(ADD(sp, 4));	// 62364 add     sp, 4 ;~ 2042:0024
cs=0x2042;eip=0x000027; 	X(POP(bp));	// 62365 pop     bp ;~ 2042:0027
cs=0x2042;eip=0x000028; 	R(RETF(0));	// 62366 retf ;~ 2042:0028

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return true;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_2042_8: 	goto ret_2042_8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

