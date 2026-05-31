/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool toupper_(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    toupper_:
    _begin:
#undef arg_0
#define arg_0 6
	// 81082 arg_0           = word ptr  6 ;~ 28AD:000A
ret_28ad_a:
	// 9998 
cs=0x28ad;eip=0x00000a; 	X(PUSH(bp));	// 81084 push    bp ;~ 28AD:000A
cs=0x28ad;eip=0x00000b; 	T(MOV(bp, sp));	// 81085 mov     bp, sp ;~ 28AD:000B
cs=0x28ad;eip=0x00000d; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x61));	// 81086 cmp     [bp+arg_0], 61h ; 'a' ;~ 28AD:000D
cs=0x28ad;eip=0x000011; 	R(JL(loc_370cd));	// 81087 jl      short loc_370CD ;~ 28AD:0011
cs=0x28ad;eip=0x000013; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x7A));	// 81088 cmp     [bp+arg_0], 7Ah ; 'z' ;~ 28AD:0013
cs=0x28ad;eip=0x000017; 	R(JG(loc_370cd));	// 81089 jg      short loc_370CD ;~ 28AD:0017
cs=0x28ad;eip=0x000019; 	X(SUB(*(dw*)(raddr(ss,bp+arg_0)), 0x20));	// 81090 sub     [bp+arg_0], 20h ; ' ' ;~ 28AD:0019
loc_370cd:
	// 9999 
cs=0x28ad;eip=0x00001d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 81094 mov     ax, [bp+arg_0] ;~ 28AD:001D
cs=0x28ad;eip=0x000020; 	X(POP(bp));	// 81095 pop     bp ;~ 28AD:0020
cs=0x28ad;eip=0x000021; 	R(RETF(0));	// 81096 retf ;~ 28AD:0021

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return true;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_370cd: 	goto loc_370cd;
        case m2c::ktoupper_: 	goto toupper_;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

