/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool sub_26fcb(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_26fcb:
    _begin:
cs=0x189e;eip=0x00000b; 	X(PUSH(si));	// 43587 push    si ;~ 189E:000B
ret_189e_c:
	// 7567 
cs=0x189e;eip=0x00000c; 	X(PUSH(di));	// 43588 push    di ;~ 189E:000C
cs=0x189e;eip=0x00000d; 	T(CMP(word_38018, 0));	// 43589 cmp     word_38018, 0 ;~ 189E:000D
cs=0x189e;eip=0x000012; 	R(JNZ(loc_26ff1));	// 43590 jnz     short loc_26FF1 ;~ 189E:0012
cs=0x189e;eip=0x000014; 	X(PUSH(ds));	// 43591 push    ds ;~ 189E:0014
cs=0x189e;eip=0x000015; 	T(MOV(ah, 9));	// 43592 mov     ah, 9 ;~ 189E:0015
cs=0x189e;eip=0x000017; 	X(PUSH(cs));	// 43593 push    cs ;~ 189E:0017
cs=0x189e;eip=0x000018; 	X(POP(ds));	// 43594 pop     ds ;~ 189E:0018
cs=0x189e;eip=0x000019; 	T(dx = 54);	// 43596 lea     dx, ds:54 ;~ 189E:0019
cs=0x189e;eip=0x00001d; 	R(_INT(0x21));	// 43597 int     21h             ; DOS - PRINT STRING ;~ 189E:001D
cs=0x189e;eip=0x00001f; 	X(POP(ds));	// 43599 pop     ds ;~ 189E:001F
cs=0x189e;eip=0x000020; 	T(MOV(ah, 3));	// 43601 mov     ah, 3 ;~ 189E:0020
cs=0x189e;eip=0x000022; 	T(MOV(bh, byte_37b8a));	// 43602 mov     bh, byte_37B8A ;~ 189E:0022
cs=0x189e;eip=0x000026; 	R(_INT(0x10));	// 43603 int     10h             ; - VIDEO - READ CURSOR POSITION ;~ 189E:0026
cs=0x189e;eip=0x000028; 	T(OR(dx, dx));	// 43606 or      dx, dx ;~ 189E:0028
cs=0x189e;eip=0x00002a; 	R(JZ(loc_26ff1));	// 43607 jz      short loc_26FF1 ;~ 189E:002A
cs=0x189e;eip=0x00002c; 	R(CALLF(sub_29373,0));	// 43608 call    far ptr sub_29373 ;~ 189E:002C
loc_26ff1:
	// 7568 
cs=0x189e;eip=0x000031; 	T(XOR(ax, ax));	// 43612 xor     ax, ax ;~ 189E:0031
cs=0x189e;eip=0x000033; 	X(POP(di));	// 43613 pop     di ;~ 189E:0033
cs=0x189e;eip=0x000034; 	X(POP(si));	// 43614 pop     si ;~ 189E:0034
cs=0x189e;eip=0x000035; 	R(RETF(0));	// 43615 retf ;~ 189E:0035

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_26ff1: 	goto loc_26ff1;
        case m2c::kret_189e_c: 	goto ret_189e_c;
        case m2c::ksub_26fcb: 	goto sub_26fcb;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

