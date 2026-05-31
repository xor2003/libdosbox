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
	// 62335 arg_0           = word ptr  6 ;~ 2042:0008
cs=0x2042;eip=0x000008; 	X(PUSH(bp));	// 62337 push    bp ;~ 2042:0008
cs=0x2042;eip=0x000009; 	T(MOV(bp, sp));	// 62338 mov     bp, sp ;~ 2042:0009
cs=0x2042;eip=0x00000b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 62339 mov     bx, [bp+arg_0] ;~ 2042:000B
cs=0x2042;eip=0x00000e; 	X(PUSH(*(dw*)(raddr(ds,bx+4))));	// 62340 push    word ptr [bx+4] ;~ 2042:000E
cs=0x2042;eip=0x000011; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 62341 push    word ptr [bx+2] ;~ 2042:0011
cs=0x2042;eip=0x000014; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 62342 push    word ptr [bx] ;~ 2042:0014
cs=0x2042;eip=0x000016; 	J(CALLF(polarradius2d,0));	// 62343 call    polarRadius2D ;~ 2042:0016
cs=0x2042;eip=0x00001b; 	T(ADD(sp, 4));	// 62344 add     sp, 4 ;~ 2042:001B
cs=0x2042;eip=0x00001e; 	X(PUSH(ax));	// 62345 push    ax ;~ 2042:001E
cs=0x2042;eip=0x00001f; 	J(CALLF(polarradius2d,0));	// 62346 call    polarRadius2D ;~ 2042:001F
cs=0x2042;eip=0x000024; 	T(ADD(sp, 4));	// 62347 add     sp, 4 ;~ 2042:0024
cs=0x2042;eip=0x000027; 	X(POP(bp));	// 62348 pop     bp ;~ 2042:0027
cs=0x2042;eip=0x000028; 	J(RETF(0));	// 62349 retf ;~ 2042:0028

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kpolarradius3d: 	goto polarradius3d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

