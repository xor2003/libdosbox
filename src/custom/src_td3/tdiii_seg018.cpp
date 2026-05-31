/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool _group9(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group9:
    _begin:
sub_27031:
	// 43703 
#undef arg_2
#define arg_2 6
	// 43706 arg_2           = word ptr  6 ;~ 18A5:0001
ret_18a5_1:
	// 7574 
cs=0x18a5;eip=0x000001; 	X(PUSH(bp));	// 43708 push    bp ;~ 18A5:0001
cs=0x18a5;eip=0x000002; 	T(MOV(bp, sp));	// 43709 mov     bp, sp ;~ 18A5:0002
cs=0x18a5;eip=0x000004; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_2))));	// 43710 mov     cx, [bp+arg_2] ;~ 18A5:0004
cs=0x18a5;eip=0x000007; 	T(bx = offset(dseg,byte_2bec8));	// 43711 lea     bx, byte_2BEC8 ;~ 18A5:0007
cs=0x18a5;eip=0x00000b; 	T(ADD(bx, word_37b84));	// 43712 add     bx, word_37B84 ;~ 18A5:000B
cs=0x18a5;eip=0x00000f; __disp=*(dw*)(raddr(cs,bx));
	R(JMP(__dispatch_call));	// 43713 jmp     word ptr cs:[bx] ;~ 18A5:000F
seg018_proc:
	// 43718 
loc_27042:
	// 7575 
cs=0x18a5;eip=0x000012; 	X(MOV(byte_37b82, cl));	// 43719 mov     byte_37B82, cl ;~ 18A5:0012
cs=0x18a5;eip=0x000016; 	R(JMP(loc_270b0));	// 43720 jmp     short loc_270B0 ;~ 18A5:0016
loc_27048:
	// 7576 
cs=0x18a5;eip=0x000018; 	T(bx = offset(dseg,unk_37bec));	// 43724 lea     bx, unk_37BEC ;~ 18A5:0018
cs=0x18a5;eip=0x00001c; 	T(XOR(ch, ch));	// 43725 xor     ch, ch ;~ 18A5:001C
cs=0x18a5;eip=0x00001e; 	X(MOV(byte_37b82, cl));	// 43726 mov     byte_37B82, cl ;~ 18A5:001E
cs=0x18a5;eip=0x000022; 	T(ADD(bx, cx));	// 43727 add     bx, cx ;~ 18A5:0022
cs=0x18a5;eip=0x000024; 	T(MOV(cl, *(raddr(ds,bx))));	// 43728 mov     cl, [bx] ;~ 18A5:0024
cs=0x18a5;eip=0x000026; 	T(AND(cl, 3));	// 43729 and     cl, 3 ;~ 18A5:0026
cs=0x18a5;eip=0x000029; 	R(JMP(loc_270b0));	// 43730 jmp     short loc_270B0 ;~ 18A5:0029
loc_2705b:
	// 7577 
cs=0x18a5;eip=0x00002b; 	T(bx = offset(dseg,unk_37bec));	// 43734 lea     bx, unk_37BEC ;~ 18A5:002B
cs=0x18a5;eip=0x00002f; 	T(XOR(ch, ch));	// 43735 xor     ch, ch ;~ 18A5:002F
cs=0x18a5;eip=0x000031; 	X(MOV(byte_37b82, cl));	// 43736 mov     byte_37B82, cl ;~ 18A5:0031
cs=0x18a5;eip=0x000035; 	T(ADD(bx, cx));	// 43737 add     bx, cx ;~ 18A5:0035
cs=0x18a5;eip=0x000037; 	T(MOV(cl, *(raddr(ds,bx))));	// 43738 mov     cl, [bx] ;~ 18A5:0037
cs=0x18a5;eip=0x000039; 	T(AND(cl, 0x0F));	// 43739 and     cl, 0Fh ;~ 18A5:0039
cs=0x18a5;eip=0x00003c; 	R(JMP(loc_270b0));	// 43740 jmp     short loc_270B0 ;~ 18A5:003C
loc_2706e:
	// 7578 
cs=0x18a5;eip=0x00003e; 	T(bx = offset(dseg,unk_37bec));	// 43744 lea     bx, unk_37BEC ;~ 18A5:003E
cs=0x18a5;eip=0x000042; 	T(XOR(ch, ch));	// 43745 xor     ch, ch ;~ 18A5:0042
cs=0x18a5;eip=0x000044; 	X(MOV(byte_37b82, cl));	// 43746 mov     byte_37B82, cl ;~ 18A5:0044
cs=0x18a5;eip=0x000048; 	T(ADD(bx, cx));	// 43747 add     bx, cx ;~ 18A5:0048
cs=0x18a5;eip=0x00004a; 	T(MOV(cl, *(raddr(ds,bx))));	// 43748 mov     cl, [bx] ;~ 18A5:004A
cs=0x18a5;eip=0x00004c; 	T(AND(cl, 1));	// 43749 and     cl, 1 ;~ 18A5:004C
cs=0x18a5;eip=0x00004f; 	R(JMP(loc_270b0));	// 43750 jmp     short loc_270B0 ;~ 18A5:004F
loc_27081:
	// 7579 
cs=0x18a5;eip=0x000051; 	T(bx = offset(dseg,unk_37bec));	// 43754 lea     bx, unk_37BEC ;~ 18A5:0051
cs=0x18a5;eip=0x000055; 	T(XOR(ch, ch));	// 43755 xor     ch, ch ;~ 18A5:0055
cs=0x18a5;eip=0x000057; 	X(MOV(byte_37b82, cl));	// 43756 mov     byte_37B82, cl ;~ 18A5:0057
cs=0x18a5;eip=0x00005b; 	T(ADD(bx, cx));	// 43757 add     bx, cx ;~ 18A5:005B
cs=0x18a5;eip=0x00005d; 	T(MOV(cl, *(raddr(ds,bx))));	// 43758 mov     cl, [bx] ;~ 18A5:005D
cs=0x18a5;eip=0x00005f; 	T(AND(cl, 0x0F));	// 43759 and     cl, 0Fh ;~ 18A5:005F
cs=0x18a5;eip=0x000062; 	X(PUSH(ax));	// 43760 push    ax ;~ 18A5:0062
cs=0x18a5;eip=0x000063; 	T(MOV(al, 0));	// 43761 mov     al, 0 ;~ 18A5:0063
cs=0x18a5;eip=0x000065; 	T(MOV(ah, cl));	// 43762 mov     ah, cl ;~ 18A5:0065
cs=0x18a5;eip=0x000067; 	X(PUSH(dx));	// 43763 push    dx ;~ 18A5:0067
cs=0x18a5;eip=0x000068; 	T(MOV(dx, 0x3CE));	// 43764 mov     dx, 3CEh ;~ 18A5:0068
cs=0x18a5;eip=0x00006b; 	R(OUT(dx, ax));	// 43765 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 18A5:006B
cs=0x18a5;eip=0x00006c; 	X(POP(dx));	// 43768 pop     dx ;~ 18A5:006C
cs=0x18a5;eip=0x00006d; 	X(POP(ax));	// 43769 pop     ax ;~ 18A5:006D
cs=0x18a5;eip=0x00006e; 	X(PUSH(ax));	// 43770 push    ax ;~ 18A5:006E
cs=0x18a5;eip=0x00006f; 	T(MOV(al, 2));	// 43771 mov     al, 2 ;~ 18A5:006F
cs=0x18a5;eip=0x000071; 	T(MOV(ah, cl));	// 43772 mov     ah, cl ;~ 18A5:0071
cs=0x18a5;eip=0x000073; 	X(PUSH(dx));	// 43773 push    dx ;~ 18A5:0073
cs=0x18a5;eip=0x000074; 	T(MOV(dx, 0x3CE));	// 43774 mov     dx, 3CEh ;~ 18A5:0074
cs=0x18a5;eip=0x000077; 	R(OUT(dx, ax));	// 43775 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 18A5:0077
cs=0x18a5;eip=0x000078; 	X(POP(dx));	// 43778 pop     dx ;~ 18A5:0078
cs=0x18a5;eip=0x000079; 	X(POP(ax));	// 43779 pop     ax ;~ 18A5:0079
cs=0x18a5;eip=0x00007a; 	R(JMP(loc_270b0));	// 43780 jmp     short loc_270B0 ;~ 18A5:007A
loc_270ac:
	// 7580 
cs=0x18a5;eip=0x00007c; 	X(MOV(byte_37b82, cl));	// 43784 mov     byte_37B82, cl ;~ 18A5:007C
loc_270b0:
	// 7581 
cs=0x18a5;eip=0x000080; 	X(MOV(byte_37b81, cl));	// 43788 mov     byte_37B81, cl ;~ 18A5:0080
cs=0x18a5;eip=0x000084; 	T(XOR(ax, ax));	// 43789 xor     ax, ax ;~ 18A5:0084
cs=0x18a5;eip=0x000086; 	X(POP(bp));	// 43790 pop     bp ;~ 18A5:0086
cs=0x18a5;eip=0x000087; 	R(RETF(0));	// 43791 retf ;~ 18A5:0087

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_27048: 	goto loc_27048;
        case m2c::kloc_2705b: 	goto loc_2705b;
        case m2c::kloc_2706e: 	goto loc_2706e;
        case m2c::kloc_27081: 	goto loc_27081;
        case m2c::kloc_270ac: 	goto loc_270ac;
        case m2c::kloc_270b0: 	goto loc_270b0;
        case m2c::kret_18a5_1: 	goto ret_18a5_1;
        case m2c::kseg018_proc: 	goto seg018_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

