/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool sub_2bd7c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_2bd7c:
    _begin:
#undef arg_0
#define arg_0 6
	// 56077 arg_0           = dword ptr  6 ;~ 1D79:000C
ret_1d79_c:
	// 8507 
cs=0x1d79;eip=0x00000c; 	X(PUSH(bp));	// 56079 push    bp ;~ 1D79:000C
cs=0x1d79;eip=0x00000d; 	T(MOV(bp, sp));	// 56080 mov     bp, sp ;~ 1D79:000D
cs=0x1d79;eip=0x00000f; 	X(PUSH(es));	// 56081 push    es ;~ 1D79:000F
cs=0x1d79;eip=0x000010; 	T(LES(ax, *(dd*)(raddr(ss,bp+arg_0))));	// 56082 les     ax, [bp+arg_0] ;~ 1D79:0010
cs=0x1d79;eip=0x000013; 	T(MOV(ah, 0x49));	// 56083 mov     ah, 49h ;~ 1D79:0013
cs=0x1d79;eip=0x000015; 	R(_INT(0x21));	// 56084 int     21h             ; DOS - 2+ - FREE MEMORY ;~ 1D79:0015
cs=0x1d79;eip=0x000017; 	R(JC(loc_2bd8b));	// 56086 jb      short loc_2BD8B ;~ 1D79:0017
cs=0x1d79;eip=0x000019; 	T(SUB(ax, ax));	// 56087 sub     ax, ax ;~ 1D79:0019
loc_2bd8b:
	// 8508 
cs=0x1d79;eip=0x00001b; 	X(POP(es));	// 56090 pop     es ;~ 1D79:001B
cs=0x1d79;eip=0x00001c; 	X(POP(bp));	// 56091 pop     bp ;~ 1D79:001C
cs=0x1d79;eip=0x00001d; 	R(RETF(0));	// 56092 retf ;~ 1D79:001D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_2bd8b: 	goto loc_2bd8b;
        case m2c::ksub_2bd7c: 	goto sub_2bd7c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

