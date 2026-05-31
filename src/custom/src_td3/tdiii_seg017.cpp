/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool sub_26ffb(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_26ffb:
    _begin:
#undef arg_0
#define arg_0 6
	// 43636 arg_0           = word ptr  6 ;~ 18A1:000B
ret_18a1_b:
	// 7569 
cs=0x18a1;eip=0x00000b; 	X(PUSH(bp));	// 43638 push    bp ;~ 18A1:000B
cs=0x18a1;eip=0x00000c; 	T(MOV(bp, sp));	// 43639 mov     bp, sp ;~ 18A1:000C
cs=0x18a1;eip=0x00000e; 	X(PUSH(si));	// 43640 push    si ;~ 18A1:000E
cs=0x18a1;eip=0x00000f; 	X(PUSH(di));	// 43641 push    di ;~ 18A1:000F
cs=0x18a1;eip=0x000010; 	T(XOR(ah, ah));	// 43642 xor     ah, ah ;~ 18A1:0010
cs=0x18a1;eip=0x000012; 	R(_INT(0x1A));	// 43643 int     1Ah             ; CLOCK - GET TIME OF DAY ;~ 18A1:0012
cs=0x18a1;eip=0x000014; 	T(MOV(bx, dx));	// 43648 mov     bx, dx ;~ 18A1:0014
cs=0x18a1;eip=0x000016; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_0))));	// 43649 mov     cx, [bp+arg_0] ;~ 18A1:0016
cs=0x18a1;eip=0x000019; 	T(OR(cx, cx));	// 43650 or      cx, cx ;~ 18A1:0019
cs=0x18a1;eip=0x00001b; 	R(JLE(loc_2702b));	// 43651 jle     short loc_2702B ;~ 18A1:001B
loc_2700d:
	// 7570 
cs=0x18a1;eip=0x00001d; 	X(PUSH(cx));	// 43654 push    cx ;~ 18A1:001D
cs=0x18a1;eip=0x00001e; 	X(PUSH(bx));	// 43655 push    bx ;~ 18A1:001E
cs=0x18a1;eip=0x00001f; 	T(XOR(ah, ah));	// 43656 xor     ah, ah ;~ 18A1:001F
cs=0x18a1;eip=0x000021; 	R(_INT(0x1A));	// 43657 int     1Ah             ; CLOCK - GET TIME OF DAY ;~ 18A1:0021
cs=0x18a1;eip=0x000023; 	X(POP(bx));	// 43662 pop     bx ;~ 18A1:0023
cs=0x18a1;eip=0x000024; 	T(CMP(bx, dx));	// 43663 cmp     bx, dx ;~ 18A1:0024
cs=0x18a1;eip=0x000026; 	R(JG(loc_2701c));	// 43664 jg      short loc_2701C ;~ 18A1:0026
cs=0x18a1;eip=0x000028; 	T(SUB(dx, bx));	// 43665 sub     dx, bx ;~ 18A1:0028
cs=0x18a1;eip=0x00002a; 	R(JMP(loc_27026));	// 43666 jmp     short loc_27026 ;~ 18A1:002A
loc_2701c:
	// 7571 
cs=0x18a1;eip=0x00002c; 	T(MOV(ax, 0x0FFFF));	// 43670 mov     ax, 0FFFFh ;~ 18A1:002C
cs=0x18a1;eip=0x00002f; 	T(SUB(ax, bx));	// 43671 sub     ax, bx ;~ 18A1:002F
cs=0x18a1;eip=0x000031; 	T(ADD(ax, dx));	// 43672 add     ax, dx ;~ 18A1:0031
cs=0x18a1;eip=0x000033; 	T(INC(ax));	// 43673 inc     ax ;~ 18A1:0033
cs=0x18a1;eip=0x000034; 	T(MOV(dx, ax));	// 43674 mov     dx, ax ;~ 18A1:0034
loc_27026:
	// 7572 
cs=0x18a1;eip=0x000036; 	X(POP(cx));	// 43677 pop     cx ;~ 18A1:0036
cs=0x18a1;eip=0x000037; 	T(CMP(dx, cx));	// 43678 cmp     dx, cx ;~ 18A1:0037
cs=0x18a1;eip=0x000039; 	R(JL(loc_2700d));	// 43679 jl      short loc_2700D ;~ 18A1:0039
loc_2702b:
	// 7573 
cs=0x18a1;eip=0x00003b; 	T(XOR(ax, ax));	// 43682 xor     ax, ax ;~ 18A1:003B
cs=0x18a1;eip=0x00003d; 	X(POP(di));	// 43683 pop     di ;~ 18A1:003D
cs=0x18a1;eip=0x00003e; 	X(POP(si));	// 43684 pop     si ;~ 18A1:003E
cs=0x18a1;eip=0x00003f; 	X(POP(bp));	// 43685 pop     bp ;~ 18A1:003F
cs=0x18a1;eip=0x000040; 	R(RETF(0));	// 43686 retf ;~ 18A1:0040

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_2700d: 	goto loc_2700d;
        case m2c::kloc_2701c: 	goto loc_2701c;
        case m2c::kloc_27026: 	goto loc_27026;
        case m2c::kloc_2702b: 	goto loc_2702b;
        case m2c::ksub_26ffb: 	goto sub_26ffb;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

