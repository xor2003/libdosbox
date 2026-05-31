/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool _group8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group8:
    _begin:
sub_26e57:
	// 43222 
cs=0x1887;eip=0x000007; 	T(MOV(ax, word_37bc8));	// 43224 mov     ax, word_37BC8 ;~ 1887:0007
ret_1887_a:
	// 7552 
cs=0x1887;eip=0x00000a; 	R(RETF(0));	// 43225 retf ;~ 1887:000A
sub_26e5b:
	// 43232 
cs=0x1887;eip=0x00000b; 	T(MOV(al, byte_37b89));	// 43233 mov     al, byte_37B89 ;~ 1887:000B
ret_1887_e:
	// 7553 
cs=0x1887;eip=0x00000e; 	T(OR(al, al));	// 43234 or      al, al ;~ 1887:000E
cs=0x1887;eip=0x000010; 	R(JL(loc_26e64));	// 43235 jl      short loc_26E64 ;~ 1887:0010
cs=0x1887;eip=0x000012; 	T(CBW);	// 43236 cbw ;~ 1887:0012
cs=0x1887;eip=0x000013; 	R(RETF(0));	// 43237 retf ;~ 1887:0013
loc_26e64:
	// 7554 
cs=0x1887;eip=0x000014; 	X(PUSH(si));	// 43241 push    si ;~ 1887:0014
cs=0x1887;eip=0x000015; 	X(PUSH(di));	// 43242 push    di ;~ 1887:0015
cs=0x1887;eip=0x000016; 	T(MOV(ah, 0x0F));	// 43243 mov     ah, 0Fh ;~ 1887:0016
cs=0x1887;eip=0x000018; 	R(_INT(0x10));	// 43244 int     10h             ; - VIDEO - GET CURRENT VIDEO MODE ;~ 1887:0018
cs=0x1887;eip=0x00001a; 	T(CBW);	// 43248 cbw ;~ 1887:001A
cs=0x1887;eip=0x00001b; 	X(POP(di));	// 43249 pop     di ;~ 1887:001B
cs=0x1887;eip=0x00001c; 	X(POP(si));	// 43250 pop     si ;~ 1887:001C
cs=0x1887;eip=0x00001d; 	R(RETF(0));	// 43251 retf ;~ 1887:001D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_26e64: 	goto loc_26e64;
        case m2c::kret_1887_a: 	goto ret_1887_a;
        case m2c::kret_1887_e: 	goto ret_1887_e;
        case m2c::ksub_26e57: 	goto sub_26e57;
        case m2c::ksub_26e5b: 	goto sub_26e5b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

