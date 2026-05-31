/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool _group15(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group15:
    _begin:
sub_27768:
	// 44742 
#undef arg_2
#define arg_2 6
	// 44745 arg_2           = word ptr  6 ;~ 1918:0008
#undef arg_4
#define arg_4 8
	// 44746 arg_4           = word ptr  8 ;~ 1918:0008
ret_1918_8:
	// 7638 
cs=0x1918;eip=0x000008; 	X(PUSH(bp));	// 44748 push    bp ;~ 1918:0008
cs=0x1918;eip=0x000009; 	T(MOV(bp, sp));	// 44749 mov     bp, sp ;~ 1918:0009
cs=0x1918;eip=0x00000b; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 44750 mov     dx, [bp+arg_2] ;~ 1918:000B
cs=0x1918;eip=0x00000e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 44751 mov     ax, [bp+arg_4] ;~ 1918:000E
cs=0x1918;eip=0x000011; 	T(MOV(cl, 0x0FF));	// 44752 mov     cl, 0FFh ;~ 1918:0011
cs=0x1918;eip=0x000013; 	T(bx = offset(dseg,unk_2bf11));	// 44753 lea     bx, unk_2BF11 ;~ 1918:0013
cs=0x1918;eip=0x000017; 	T(ADD(bx, word_37b84));	// 44754 add     bx, word_37B84 ;~ 1918:0017
cs=0x1918;eip=0x00001b; __disp=*(dw*)(raddr(cs,bx));
	R(JMP(__dispatch_call));	// 44755 jmp     word ptr cs:[bx] ;~ 1918:001B
seg025_proc:
	// 44760 
loc_2777e:
	// 7639 
cs=0x1918;eip=0x00001e; 	T(MOV(bx, dx));	// 44761 mov     bx, dx ;~ 1918:001E
cs=0x1918;eip=0x000020; 	T(SHR(ax, 1));	// 44762 shr     ax, 1 ;~ 1918:0020
cs=0x1918;eip=0x000022; 	T(MOV(dx, 0x28));	// 44763 mov     dx, 28h ; '(' ;~ 1918:0022
cs=0x1918;eip=0x000025; 	T(MUL1_2(dx));	// 44764 mul     dx ;~ 1918:0025
cs=0x1918;eip=0x000027; 	T(SHR(bx, 1));	// 44765 shr     bx, 1 ;~ 1918:0027
cs=0x1918;eip=0x000029; 	T(SHR(bx, 1));	// 44766 shr     bx, 1 ;~ 1918:0029
cs=0x1918;eip=0x00002b; 	T(SHR(bx, 1));	// 44767 shr     bx, 1 ;~ 1918:002B
cs=0x1918;eip=0x00002d; 	T(ADD(bx, ax));	// 44768 add     bx, ax ;~ 1918:002D
cs=0x1918;eip=0x00002f; 	R(JMP(loc_277ed));	// 44769 jmp     short loc_277ED ;~ 1918:002F
loc_27791:
	// 7640 
cs=0x1918;eip=0x000031; 	T(MOV(bx, dx));	// 44773 mov     bx, dx ;~ 1918:0031
cs=0x1918;eip=0x000033; 	T(SHR(ax, 1));	// 44774 shr     ax, 1 ;~ 1918:0033
cs=0x1918;eip=0x000035; 	T(SHR(ax, 1));	// 44775 shr     ax, 1 ;~ 1918:0035
cs=0x1918;eip=0x000037; 	T(MOV(dx, 0x50));	// 44776 mov     dx, 50h ; 'P' ;~ 1918:0037
cs=0x1918;eip=0x00003a; 	T(MUL1_2(dx));	// 44777 mul     dx ;~ 1918:003A
cs=0x1918;eip=0x00003c; 	T(SHR(bx, 1));	// 44778 shr     bx, 1 ;~ 1918:003C
cs=0x1918;eip=0x00003e; 	T(SHR(bx, 1));	// 44779 shr     bx, 1 ;~ 1918:003E
cs=0x1918;eip=0x000040; 	T(ADD(bx, ax));	// 44780 add     bx, ax ;~ 1918:0040
cs=0x1918;eip=0x000042; 	R(JMP(loc_277ed));	// 44781 jmp     short loc_277ED ;~ 1918:0042
loc_277a4:
	// 7641 
cs=0x1918;eip=0x000044; 	T(MOV(bx, ax));	// 44785 mov     bx, ax ;~ 1918:0044
cs=0x1918;eip=0x000046; 	T(SHR(ax, 1));	// 44786 shr     ax, 1 ;~ 1918:0046
cs=0x1918;eip=0x000048; 	T(ADD(ax, bx));	// 44787 add     ax, bx ;~ 1918:0048
cs=0x1918;eip=0x00004a; 	T(SHL(dx, 1));	// 44788 shl     dx, 1 ;~ 1918:004A
loc_277ac:
	// 7642 
cs=0x1918;eip=0x00004c; 	T(MOV(bx, dx));	// 44791 mov     bx, dx ;~ 1918:004C
cs=0x1918;eip=0x00004e; 	T(SHR(ax, 1));	// 44792 shr     ax, 1 ;~ 1918:004E
cs=0x1918;eip=0x000050; 	T(SHR(ax, 1));	// 44793 shr     ax, 1 ;~ 1918:0050
cs=0x1918;eip=0x000052; 	T(MOV(dx, 0x2D));	// 44794 mov     dx, 2Dh ; '-' ;~ 1918:0052
cs=0x1918;eip=0x000055; 	T(MUL1_2(dx));	// 44795 mul     dx ;~ 1918:0055
cs=0x1918;eip=0x000057; 	T(SHR(bx, 1));	// 44796 shr     bx, 1 ;~ 1918:0057
cs=0x1918;eip=0x000059; 	T(SHR(bx, 1));	// 44797 shr     bx, 1 ;~ 1918:0059
cs=0x1918;eip=0x00005b; 	T(SHR(bx, 1));	// 44798 shr     bx, 1 ;~ 1918:005B
cs=0x1918;eip=0x00005d; 	T(ADD(bx, ax));	// 44799 add     bx, ax ;~ 1918:005D
cs=0x1918;eip=0x00005f; 	R(JMP(loc_277ed));	// 44800 jmp     short loc_277ED ;~ 1918:005F
loc_277c1:
	// 7643 
cs=0x1918;eip=0x000061; 	T(MOV(bx, dx));	// 44804 mov     bx, dx ;~ 1918:0061
cs=0x1918;eip=0x000063; 	T(MOV(cx, dx));	// 44805 mov     cx, dx ;~ 1918:0063
cs=0x1918;eip=0x000065; 	T(AND(cl, 7));	// 44806 and     cl, 7 ;~ 1918:0065
cs=0x1918;eip=0x000068; 	X(MUL1_2(word_38018));	// 44807 mul     word_38018 ;~ 1918:0068
cs=0x1918;eip=0x00006c; 	T(SHR(bx, 1));	// 44808 shr     bx, 1 ;~ 1918:006C
cs=0x1918;eip=0x00006e; 	T(SHR(bx, 1));	// 44809 shr     bx, 1 ;~ 1918:006E
cs=0x1918;eip=0x000070; 	T(SHR(bx, 1));	// 44810 shr     bx, 1 ;~ 1918:0070
cs=0x1918;eip=0x000072; 	T(ADD(bx, ax));	// 44811 add     bx, ax ;~ 1918:0072
cs=0x1918;eip=0x000074; 	T(MOV(al, byte_37b8a));	// 44812 mov     al, byte_37B8A ;~ 1918:0074
cs=0x1918;eip=0x000077; 	T(CBW);	// 44813 cbw ;~ 1918:0077
cs=0x1918;eip=0x000078; 	X(MUL1_2(word_37fec));	// 44814 mul     word_37FEC ;~ 1918:0078
cs=0x1918;eip=0x00007c; 	T(ADD(bx, ax));	// 44815 add     bx, ax ;~ 1918:007C
cs=0x1918;eip=0x00007e; 	R(JMP(loc_277ed));	// 44816 jmp     short loc_277ED ;~ 1918:007E
ret_1918_80:
	// 7644 
cs=0x1918;eip=0x000080; 	T(MOV(bx, dx));	// 44818 mov     bx, dx ;~ 1918:0080
cs=0x1918;eip=0x000082; 	T(MOV(dx, 0x50));	// 44819 mov     dx, 50h ; 'P' ;~ 1918:0082
cs=0x1918;eip=0x000085; 	T(MUL1_2(dx));	// 44820 mul     dx ;~ 1918:0085
cs=0x1918;eip=0x000087; 	T(SHR(bx, 1));	// 44821 shr     bx, 1 ;~ 1918:0087
cs=0x1918;eip=0x000089; 	T(SHR(bx, 1));	// 44822 shr     bx, 1 ;~ 1918:0089
cs=0x1918;eip=0x00008b; 	T(ADD(bx, ax));	// 44823 add     bx, ax ;~ 1918:008B
loc_277ed:
	// 7645 
cs=0x1918;eip=0x00008d; 	T(XOR(ax, ax));	// 44827 xor     ax, ax ;~ 1918:008D
cs=0x1918;eip=0x00008f; 	T(MOV(es, ax));	// 44828 mov     es, ax ;~ 1918:008F
cs=0x1918;eip=0x000091; 	X(MOV(*(dw*)(raddr(es,0x44E)), bx));	// 44830 mov     es:44Eh, bx ;~ 1918:0091
cs=0x1918;eip=0x000096; 	T(MOV(dx, *(dw*)(raddr(es,0x463))));	// 44831 mov     dx, es:463h ;~ 1918:0096
cs=0x1918;eip=0x00009b; 	T(ADD(dl, 6));	// 44832 add     dl, 6 ;~ 1918:009B
loc_277fe:
	// 7646 
cs=0x1918;eip=0x00009e; 	R(IN(al, dx));	// 44835 in      al, dx ;~ 1918:009E
cs=0x1918;eip=0x00009f; 	T(TEST(al, 8));	// 44836 test    al, 8 ;~ 1918:009F
cs=0x1918;eip=0x0000a1; 	R(JZ(loc_277fe));	// 44837 jz      short loc_277FE ;~ 1918:00A1
loc_27803:
	// 7647 
cs=0x1918;eip=0x0000a3; 	R(IN(al, dx));	// 44840 in      al, dx ;~ 1918:00A3
cs=0x1918;eip=0x0000a4; 	T(TEST(al, 8));	// 44841 test    al, 8 ;~ 1918:00A4
cs=0x1918;eip=0x0000a6; 	R(JNZ(loc_27803));	// 44842 jnz     short loc_27803 ;~ 1918:00A6
cs=0x1918;eip=0x0000a8; 	T(CLI);	// 44843 cli ;~ 1918:00A8
cs=0x1918;eip=0x0000a9; 	T(SUB(dl, 6));	// 44844 sub     dl, 6 ;~ 1918:00A9
cs=0x1918;eip=0x0000ac; 	T(MOV(ah, bh));	// 44845 mov     ah, bh ;~ 1918:00AC
cs=0x1918;eip=0x0000ae; 	T(MOV(al, 0x0C));	// 44846 mov     al, 0Ch ;~ 1918:00AE
cs=0x1918;eip=0x0000b0; 	R(OUT(dx, ax));	// 44847 out     dx, ax ;~ 1918:00B0
cs=0x1918;eip=0x0000b1; 	T(MOV(ah, bl));	// 44848 mov     ah, bl ;~ 1918:00B1
cs=0x1918;eip=0x0000b3; 	T(INC(al));	// 44849 inc     al ;~ 1918:00B3
cs=0x1918;eip=0x0000b5; 	R(OUT(dx, ax));	// 44850 out     dx, ax ;~ 1918:00B5
cs=0x1918;eip=0x0000b6; 	T(STI);	// 44851 sti ;~ 1918:00B6
cs=0x1918;eip=0x0000b7; 	T(OR(cl, cl));	// 44852 or      cl, cl ;~ 1918:00B7
cs=0x1918;eip=0x0000b9; 	R(JL(loc_2782d));	// 44853 jl      short loc_2782D ;~ 1918:00B9
cs=0x1918;eip=0x0000bb; 	T(ADD(dl, 6));	// 44854 add     dl, 6 ;~ 1918:00BB
loc_2781e:
	// 7648 
cs=0x1918;eip=0x0000be; 	R(IN(al, dx));	// 44857 in      al, dx ;~ 1918:00BE
cs=0x1918;eip=0x0000bf; 	T(TEST(al, 8));	// 44858 test    al, 8 ;~ 1918:00BF
cs=0x1918;eip=0x0000c1; 	R(JZ(loc_2781e));	// 44859 jz      short loc_2781E ;~ 1918:00C1
cs=0x1918;eip=0x0000c3; 	T(CLI);	// 44860 cli ;~ 1918:00C3
cs=0x1918;eip=0x0000c4; 	T(MOV(dl, 0x0C0));	// 44861 mov     dl, 0C0h ; 'À' ;~ 1918:00C4
cs=0x1918;eip=0x0000c6; 	T(MOV(al, 0x33));	// 44862 mov     al, 33h ; '3' ;~ 1918:00C6
cs=0x1918;eip=0x0000c8; 	R(OUT(dx, al));	// 44863 out     dx, al ;~ 1918:00C8
cs=0x1918;eip=0x0000c9; 	T(MOV(al, cl));	// 44864 mov     al, cl ;~ 1918:00C9
cs=0x1918;eip=0x0000cb; 	R(OUT(dx, al));	// 44865 out     dx, al ;~ 1918:00CB
cs=0x1918;eip=0x0000cc; 	T(STI);	// 44866 sti ;~ 1918:00CC
loc_2782d:
	// 7649 
cs=0x1918;eip=0x0000cd; 	T(XOR(ax, ax));	// 44870 xor     ax, ax ;~ 1918:00CD
cs=0x1918;eip=0x0000cf; 	X(POP(bp));	// 44871 pop     bp ;~ 1918:00CF
cs=0x1918;eip=0x0000d0; 	R(RETF(0));	// 44872 retf ;~ 1918:00D0

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_2777e: 	goto loc_2777e;
        case m2c::kloc_27791: 	goto loc_27791;
        case m2c::kloc_277a4: 	goto loc_277a4;
        case m2c::kloc_277ac: 	goto loc_277ac;
        case m2c::kloc_277c1: 	goto loc_277c1;
        case m2c::kloc_277ed: 	goto loc_277ed;
        case m2c::kloc_277fe: 	goto loc_277fe;
        case m2c::kloc_27803: 	goto loc_27803;
        case m2c::kloc_2781e: 	goto loc_2781e;
        case m2c::kloc_2782d: 	goto loc_2782d;
        case m2c::kret_1918_80: 	goto ret_1918_80;
        case m2c::ksub_27768: 	goto sub_27768;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

