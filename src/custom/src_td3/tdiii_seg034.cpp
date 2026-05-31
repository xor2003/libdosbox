/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool _group23(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group23:
    _begin:
sub_292e5:
	// 48687 
#undef arg_0
#define arg_0 6
	// 48689 arg_0           = word ptr  6 ;~ 1AD0:0005
#undef arg_2
#define arg_2 8
	// 48690 arg_2           = word ptr  8 ;~ 1AD0:0005
#undef arg_4
#define arg_4 0x0A
	// 48691 arg_4           = word ptr  0Ah ;~ 1AD0:0005
#undef arg_6
#define arg_6 0x0C
	// 48692 arg_6           = word ptr  0Ch ;~ 1AD0:0005
ret_1ad0_5:
	// 7868 
cs=0x1ad0;eip=0x000005; 	X(PUSH(bp));	// 48694 push    bp ;~ 1AD0:0005
cs=0x1ad0;eip=0x000006; 	T(MOV(bp, sp));	// 48695 mov     bp, sp ;~ 1AD0:0006
cs=0x1ad0;eip=0x000008; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 48696 mov     ax, [bp+arg_0] ;~ 1AD0:0008
cs=0x1ad0;eip=0x00000b; 	T(CMP(ax, word_37b91));	// 48697 cmp     ax, word_37B91 ;~ 1AD0:000B
cs=0x1ad0;eip=0x00000f; 	R(JG(loc_2933f));	// 48698 jg      short loc_2933F ;~ 1AD0:000F
cs=0x1ad0;eip=0x000011; 	T(CMP(ax, word_37b93));	// 48699 cmp     ax, word_37B93 ;~ 1AD0:0011
cs=0x1ad0;eip=0x000015; 	R(JGE(loc_292fa));	// 48700 jge     short loc_292FA ;~ 1AD0:0015
cs=0x1ad0;eip=0x000017; 	T(MOV(ax, word_37b93));	// 48701 mov     ax, word_37B93 ;~ 1AD0:0017
loc_292fa:
	// 7869 
cs=0x1ad0;eip=0x00001a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 48704 mov     bx, [bp+arg_2] ;~ 1AD0:001A
cs=0x1ad0;eip=0x00001d; 	T(CMP(bx, word_37b93));	// 48705 cmp     bx, word_37B93 ;~ 1AD0:001D
cs=0x1ad0;eip=0x000021; 	R(JL(loc_2933f));	// 48706 jl      short loc_2933F ;~ 1AD0:0021
cs=0x1ad0;eip=0x000023; 	T(CMP(bx, word_37b91));	// 48707 cmp     bx, word_37B91 ;~ 1AD0:0023
cs=0x1ad0;eip=0x000027; 	R(JLE(loc_2930d));	// 48708 jle     short loc_2930D ;~ 1AD0:0027
cs=0x1ad0;eip=0x000029; 	T(MOV(bx, word_37b91));	// 48709 mov     bx, word_37B91 ;~ 1AD0:0029
loc_2930d:
	// 7870 
cs=0x1ad0;eip=0x00002d; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_4))));	// 48712 mov     cx, [bp+arg_4] ;~ 1AD0:002D
cs=0x1ad0;eip=0x000030; 	T(CMP(cx, word_37b95));	// 48713 cmp     cx, word_37B95 ;~ 1AD0:0030
cs=0x1ad0;eip=0x000034; 	R(JG(loc_2933f));	// 48714 jg      short loc_2933F ;~ 1AD0:0034
cs=0x1ad0;eip=0x000036; 	T(CMP(cx, word_37b97));	// 48715 cmp     cx, word_37B97 ;~ 1AD0:0036
cs=0x1ad0;eip=0x00003a; 	R(JGE(loc_29320));	// 48716 jge     short loc_29320 ;~ 1AD0:003A
cs=0x1ad0;eip=0x00003c; 	T(MOV(cx, word_37b97));	// 48717 mov     cx, word_37B97 ;~ 1AD0:003C
loc_29320:
	// 7871 
cs=0x1ad0;eip=0x000040; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 48720 mov     dx, [bp+arg_6] ;~ 1AD0:0040
cs=0x1ad0;eip=0x000043; 	T(CMP(dx, word_37b97));	// 48721 cmp     dx, word_37B97 ;~ 1AD0:0043
cs=0x1ad0;eip=0x000047; 	R(JL(loc_2933f));	// 48722 jl      short loc_2933F ;~ 1AD0:0047
cs=0x1ad0;eip=0x000049; 	T(CMP(dx, word_37b95));	// 48723 cmp     dx, word_37B95 ;~ 1AD0:0049
cs=0x1ad0;eip=0x00004d; 	R(JLE(loc_29333));	// 48724 jle     short loc_29333 ;~ 1AD0:004D
cs=0x1ad0;eip=0x00004f; 	T(MOV(dx, word_37b95));	// 48725 mov     dx, word_37B95 ;~ 1AD0:004F
loc_29333:
	// 7872 
cs=0x1ad0;eip=0x000053; 	X(PUSH(dx));	// 48728 push    dx ;~ 1AD0:0053
cs=0x1ad0;eip=0x000054; 	X(PUSH(cx));	// 48729 push    cx ;~ 1AD0:0054
cs=0x1ad0;eip=0x000055; 	X(PUSH(bx));	// 48730 push    bx ;~ 1AD0:0055
cs=0x1ad0;eip=0x000056; 	X(PUSH(ax));	// 48731 push    ax ;~ 1AD0:0056
cs=0x1ad0;eip=0x000057; 	R(CALLF(sub_2785b,0));	// 48732 call    far ptr sub_2785B ;~ 1AD0:0057
cs=0x1ad0;eip=0x00005c; 	T(ADD(sp, 8));	// 48733 add     sp, 8 ;~ 1AD0:005C
loc_2933f:
	// 7873 
cs=0x1ad0;eip=0x00005f; 	T(XOR(ax, ax));	// 48737 xor     ax, ax ;~ 1AD0:005F
cs=0x1ad0;eip=0x000061; 	X(POP(bp));	// 48738 pop     bp ;~ 1AD0:0061
cs=0x1ad0;eip=0x000062; 	R(RETF(0));	// 48739 retf ;~ 1AD0:0062
seg034_proc:
	// 48743 
cs=0x1ad0;eip=0x000063; 	T(XOR(ax, ax));	// 48743 xor     ax, ax ;~ 1AD0:0063
ret_1ad0_65:
	// 7874 
cs=0x1ad0;eip=0x000065; 	T(MOV(es, ax));	// 48744 mov     es, ax ;~ 1AD0:0065
cs=0x1ad0;eip=0x000067; 	X(PUSH(di));	// 48746 push    di ;~ 1AD0:0067
cs=0x1ad0;eip=0x000068; 	X(PUSH(si));	// 48747 push    si ;~ 1AD0:0068
cs=0x1ad0;eip=0x000069; 	T(MOV(ah, 0x12));	// 48748 mov     ah, 12h ;~ 1AD0:0069
cs=0x1ad0;eip=0x00006b; 	T(MOV(bl, 0x10));	// 48749 mov     bl, 10h ;~ 1AD0:006B
cs=0x1ad0;eip=0x00006d; 	R(_INT(0x10));	// 48750 int     10h             ; - VIDEO - ALTERNATE FUNCTION SELECT (PS, EGA, VGA, MCGA) - GET EGA INFO ;~ 1AD0:006D
cs=0x1ad0;eip=0x00006f; 	X(POP(si));	// 48752 pop     si ;~ 1AD0:006F
cs=0x1ad0;eip=0x000070; 	X(POP(di));	// 48753 pop     di ;~ 1AD0:0070
cs=0x1ad0;eip=0x000071; 	T(CMP(bl, 0x10));	// 48754 cmp     bl, 10h ;~ 1AD0:0071
cs=0x1ad0;eip=0x000074; 	R(JZ(loc_29370));	// 48755 jz      short loc_29370 ;~ 1AD0:0074
cs=0x1ad0;eip=0x000076; 	T(MOV(al, *(raddr(es,0x487))));	// 48756 mov     al, es:487h ;~ 1AD0:0076
cs=0x1ad0;eip=0x00007a; 	T(TEST(al, 8));	// 48757 test    al, 8 ;~ 1AD0:007A
cs=0x1ad0;eip=0x00007c; 	R(JNZ(loc_29370));	// 48758 jnz     short loc_29370 ;~ 1AD0:007C
cs=0x1ad0;eip=0x00007e; 	T(TEST(al, 2));	// 48759 test    al, 2 ;~ 1AD0:007E
cs=0x1ad0;eip=0x000080; 	R(JNZ(loc_29370));	// 48760 jnz     short loc_29370 ;~ 1AD0:0080
cs=0x1ad0;eip=0x000082; 	T(AND(cl, 0x0F));	// 48761 and     cl, 0Fh ;~ 1AD0:0082
cs=0x1ad0;eip=0x000085; 	T(CMP(cl, 9));	// 48762 cmp     cl, 9 ;~ 1AD0:0085
cs=0x1ad0;eip=0x000088; 	R(JNZ(loc_29370));	// 48763 jnz     short loc_29370 ;~ 1AD0:0088
cs=0x1ad0;eip=0x00008a; 	T(MOV(al, bl));	// 48764 mov     al, bl ;~ 1AD0:008A
cs=0x1ad0;eip=0x00008c; 	T(INC(al));	// 48765 inc     al ;~ 1AD0:008C
cs=0x1ad0;eip=0x00008e; 	T(CBW);	// 48766 cbw ;~ 1AD0:008E
cs=0x1ad0;eip=0x00008f; 	R(RETF(0));	// 48767 retf ;~ 1AD0:008F
loc_29370:
	// 7875 
cs=0x1ad0;eip=0x000090; 	T(XOR(ax, ax));	// 48772 xor     ax, ax ;~ 1AD0:0090
cs=0x1ad0;eip=0x000092; 	R(RETF(0));	// 48773 retf ;~ 1AD0:0092

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_292fa: 	goto loc_292fa;
        case m2c::kloc_2930d: 	goto loc_2930d;
        case m2c::kloc_29320: 	goto loc_29320;
        case m2c::kloc_29333: 	goto loc_29333;
        case m2c::kloc_2933f: 	goto loc_2933f;
        case m2c::kloc_29370: 	goto loc_29370;
        case m2c::kret_1ad0_5: 	goto ret_1ad0_5;
        case m2c::kret_1ad0_65: 	goto ret_1ad0_65;
        case m2c::kseg034_proc: 	goto seg034_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

