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
	// 80396 var_80          = byte ptr -80h ;~ 285D:000E
#undef arg_0
#define arg_0 6
	// 80397 arg_0           = word ptr  6 ;~ 285D:000E
#undef arg_2
#define arg_2 8
	// 80398 arg_2           = word ptr  8 ;~ 285D:000E
ret_285d_e:
	// 9969 
cs=0x285d;eip=0x00000e; 	X(PUSH(bp));	// 80400 push    bp ;~ 285D:000E
cs=0x285d;eip=0x00000f; 	T(MOV(bp, sp));	// 80401 mov     bp, sp ;~ 285D:000F
cs=0x285d;eip=0x000011; 	T(SUB(sp, 0x80));	// 80402 sub     sp, 80h ;~ 285D:0011
cs=0x285d;eip=0x000015; 	T(ax = bp+var_80);	// 80403 lea     ax, [bp+var_80] ;~ 285D:0015
cs=0x285d;eip=0x000018; 	X(PUSH(ax));	// 80404 push    ax ;~ 285D:0018
cs=0x285d;eip=0x000019; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 80405 push    [bp+arg_0] ;~ 285D:0019
cs=0x285d;eip=0x00001c; 	R(CALLF(prerender_sphere_helper2,0));	// 80406 call    preRender_sphere_helper2 ;~ 285D:001C
cs=0x285d;eip=0x000021; 	T(ADD(sp, 4));	// 80407 add     sp, 4 ;~ 285D:0021
cs=0x285d;eip=0x000024; 	T(ax = bp+var_80);	// 80408 lea     ax, [bp+var_80] ;~ 285D:0024
cs=0x285d;eip=0x000027; 	X(PUSH(ax));	// 80409 push    ax ;~ 285D:0027
cs=0x285d;eip=0x000028; 	T(MOV(ax, 0x20));	// 80410 mov     ax, 20h ; ' ' ;~ 285D:0028
cs=0x285d;eip=0x00002b; 	X(PUSH(ax));	// 80411 push    ax ;~ 285D:002B
cs=0x285d;eip=0x00002c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 80412 push    [bp+arg_2] ;~ 285D:002C
cs=0x285d;eip=0x00002f; 	R(CALLF(prerender_default_alt,0));	// 80413 call    preRender_default_alt ;~ 285D:002F
cs=0x285d;eip=0x000034; 	T(MOV(sp, bp));	// 80414 mov     sp, bp ;~ 285D:0034
cs=0x285d;eip=0x000036; 	X(POP(bp));	// 80415 pop     bp ;~ 285D:0036
cs=0x285d;eip=0x000037; 	R(RETF(0));	// 80416 retf ;~ 285D:0037

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return true;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kret_285d_e: 	goto ret_285d_e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

