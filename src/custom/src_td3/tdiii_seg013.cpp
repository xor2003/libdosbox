/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool sub_26f1d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_26f1d:
    _begin:
#undef arg_0
#define arg_0 6
	// 43427 arg_0           = word ptr  6 ;~ 1893:000D
#undef arg_2
#define arg_2 8
	// 43428 arg_2           = word ptr  8 ;~ 1893:000D
#undef arg_4
#define arg_4 0x0A
	// 43429 arg_4           = word ptr  0Ah ;~ 1893:000D
ret_1893_d:
	// 7562 
cs=0x1893;eip=0x00000d; 	X(PUSH(bp));	// 43431 push    bp ;~ 1893:000D
cs=0x1893;eip=0x00000e; 	T(MOV(bp, sp));	// 43432 mov     bp, sp ;~ 1893:000E
cs=0x1893;eip=0x000010; 	X(PUSH(si));	// 43433 push    si ;~ 1893:0010
cs=0x1893;eip=0x000011; 	X(PUSH(di));	// 43434 push    di ;~ 1893:0011
cs=0x1893;eip=0x000012; 	T(MOV(ax, 3));	// 43435 mov     ax, 3 ;~ 1893:0012
cs=0x1893;eip=0x000015; 	R(_INT(0x33));	// 43436 int     33h             ; - MS MOUSE - RETURN POSITION AND BUTTON STATUS ;~ 1893:0015
cs=0x1893;eip=0x000017; 	T(MOV(ax, cx));	// 43438 mov     ax, cx ;~ 1893:0017
cs=0x1893;eip=0x000019; 	T(MOV(cl, byte_37b8f));	// 43439 mov     cl, byte_37B8F ;~ 1893:0019
cs=0x1893;eip=0x00001d; 	T(SHR(ax, cl));	// 43440 shr     ax, cl ;~ 1893:001D
cs=0x1893;eip=0x00001f; 	T(MOV(cl, byte_37b90));	// 43441 mov     cl, byte_37B90 ;~ 1893:001F
cs=0x1893;eip=0x000023; 	T(SHR(dx, cl));	// 43442 shr     dx, cl ;~ 1893:0023
cs=0x1893;eip=0x000025; 	T(CMP(word_38018, 0));	// 43443 cmp     word_38018, 0 ;~ 1893:0025
cs=0x1893;eip=0x00002a; 	R(JZ(loc_26f43));	// 43444 jz      short loc_26F43 ;~ 1893:002A
cs=0x1893;eip=0x00002c; 	T(CMP(ax, word_3809c));	// 43445 cmp     ax, word_3809C ;~ 1893:002C
cs=0x1893;eip=0x000030; 	R(JL(loc_26f43));	// 43446 jl      short loc_26F43 ;~ 1893:0030
cs=0x1893;eip=0x000032; 	T(DEC(ax));	// 43447 dec     ax ;~ 1893:0032
loc_26f43:
	// 7563 
cs=0x1893;eip=0x000033; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 43451 mov     di, [bp+arg_0] ;~ 1893:0033
cs=0x1893;eip=0x000036; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 43452 mov     [di], ax ;~ 1893:0036
cs=0x1893;eip=0x000038; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_2))));	// 43453 mov     di, [bp+arg_2] ;~ 1893:0038
cs=0x1893;eip=0x00003b; 	X(MOV(*(dw*)(raddr(ds,di)), dx));	// 43454 mov     [di], dx ;~ 1893:003B
cs=0x1893;eip=0x00003d; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_4))));	// 43455 mov     di, [bp+arg_4] ;~ 1893:003D
cs=0x1893;eip=0x000040; 	X(MOV(*(dw*)(raddr(ds,di)), bx));	// 43456 mov     [di], bx ;~ 1893:0040
cs=0x1893;eip=0x000042; 	T(XOR(ax, ax));	// 43457 xor     ax, ax ;~ 1893:0042
cs=0x1893;eip=0x000044; 	X(POP(di));	// 43458 pop     di ;~ 1893:0044
cs=0x1893;eip=0x000045; 	X(POP(si));	// 43459 pop     si ;~ 1893:0045
cs=0x1893;eip=0x000046; 	X(POP(bp));	// 43460 pop     bp ;~ 1893:0046
cs=0x1893;eip=0x000047; 	R(RETF(0));	// 43461 retf ;~ 1893:0047

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_26f43: 	goto loc_26f43;
        case m2c::ksub_26f1d: 	goto sub_26f1d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

