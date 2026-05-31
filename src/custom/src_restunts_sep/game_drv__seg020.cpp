/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool prerender_sphere_helper(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    prerender_sphere_helper:
    _begin:
#undef var_80
#define var_80 -0x80
	// 80379 var_80          = byte ptr -80h ;~ 285D:000E
#undef arg_0
#define arg_0 6
	// 80380 arg_0           = word ptr  6 ;~ 285D:000E
#undef arg_2
#define arg_2 8
	// 80381 arg_2           = word ptr  8 ;~ 285D:000E
cs=0x285d;eip=0x00000e; 	X(PUSH(bp));	// 80383 push    bp ;~ 285D:000E
cs=0x285d;eip=0x00000f; 	T(MOV(bp, sp));	// 80384 mov     bp, sp ;~ 285D:000F
cs=0x285d;eip=0x000011; 	T(SUB(sp, 0x80));	// 80385 sub     sp, 80h ;~ 285D:0011
cs=0x285d;eip=0x000015; 	T(ax = bp+var_80);	// 80386 lea     ax, [bp+var_80] ;~ 285D:0015
cs=0x285d;eip=0x000018; 	X(PUSH(ax));	// 80387 push    ax ;~ 285D:0018
cs=0x285d;eip=0x000019; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 80388 push    [bp+arg_0] ;~ 285D:0019
cs=0x285d;eip=0x00001c; 	J(CALLF(prerender_sphere_helper2,0));	// 80389 call    preRender_sphere_helper2 ;~ 285D:001C
cs=0x285d;eip=0x000021; 	T(ADD(sp, 4));	// 80390 add     sp, 4 ;~ 285D:0021
cs=0x285d;eip=0x000024; 	T(ax = bp+var_80);	// 80391 lea     ax, [bp+var_80] ;~ 285D:0024
cs=0x285d;eip=0x000027; 	X(PUSH(ax));	// 80392 push    ax ;~ 285D:0027
cs=0x285d;eip=0x000028; 	T(MOV(ax, 0x20));	// 80393 mov     ax, 20h ; ' ' ;~ 285D:0028
cs=0x285d;eip=0x00002b; 	X(PUSH(ax));	// 80394 push    ax ;~ 285D:002B
cs=0x285d;eip=0x00002c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 80395 push    [bp+arg_2] ;~ 285D:002C
cs=0x285d;eip=0x00002f; 	J(CALLF(prerender_default_alt,0));	// 80396 call    preRender_default_alt ;~ 285D:002F
cs=0x285d;eip=0x000034; 	T(MOV(sp, bp));	// 80397 mov     sp, bp ;~ 285D:0034
cs=0x285d;eip=0x000036; 	X(POP(bp));	// 80398 pop     bp ;~ 285D:0036
cs=0x285d;eip=0x000037; 	J(RETF(0));	// 80399 retf ;~ 285D:0037

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kprerender_sphere_helper: 	goto prerender_sphere_helper;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

