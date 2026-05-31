/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool locate_many_resources(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    locate_many_resources:
    _begin:
#undef arg_0
#define arg_0 6
	// 79725 arg_0           = word ptr  6 ;~ 281D:0002
#undef arg_2
#define arg_2 8
	// 79726 arg_2           = word ptr  8 ;~ 281D:0002
#undef arg_4
#define arg_4 0x0A
	// 79727 arg_4           = word ptr  0Ah ;~ 281D:0002
#undef arg_6
#define arg_6 0x0C
	// 79728 arg_6           = word ptr  0Ch ;~ 281D:0002
cs=0x281d;eip=0x000002; 	X(PUSH(bp));	// 79730 push    bp ;~ 281D:0002
cs=0x281d;eip=0x000003; 	T(MOV(bp, sp));	// 79731 mov     bp, sp ;~ 281D:0003
cs=0x281d;eip=0x000005; 	J(JMP(loc_367d9));	// 79732 jmp     short loc_367D9 ;~ 281D:0005
loc_367b8:
	// 9443 
cs=0x281d;eip=0x000008; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 79737 push    [bp+arg_4] ;~ 281D:0008
cs=0x281d;eip=0x00000b; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 79738 push    [bp+arg_2] ;~ 281D:000B
cs=0x281d;eip=0x00000e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 79739 push    [bp+arg_0] ;~ 281D:000E
cs=0x281d;eip=0x000011; 	J(CALLF(locate_shape_fatal,0));	// 79740 call    locate_shape_fatal ;~ 281D:0011
cs=0x281d;eip=0x000016; 	T(ADD(sp, 6));	// 79741 add     sp, 6 ;~ 281D:0016
cs=0x281d;eip=0x000019; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 79742 mov     bx, [bp+arg_6] ;~ 281D:0019
cs=0x281d;eip=0x00001c; 	X(ADD(*(dw*)(raddr(ss,bp+arg_6)), 4));	// 79743 add     [bp+arg_6], 4 ;~ 281D:001C
cs=0x281d;eip=0x000020; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 79744 mov     [bx], ax ;~ 281D:0020
cs=0x281d;eip=0x000022; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 79745 mov     [bx+2], dx ;~ 281D:0022
cs=0x281d;eip=0x000025; 	X(ADD(*(dw*)(raddr(ss,bp+arg_4)), 4));	// 79746 add     [bp+arg_4], 4 ;~ 281D:0025
loc_367d9:
	// 9444 
cs=0x281d;eip=0x000029; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 79749 mov     bx, [bp+arg_4] ;~ 281D:0029
cs=0x281d;eip=0x00002c; 	T(CMP(*(raddr(ds,bx)), 0));	// 79750 cmp     byte ptr [bx], 0 ;~ 281D:002C
cs=0x281d;eip=0x00002f; 	J(JNZ(loc_367b8));	// 79751 jnz     short loc_367B8 ;~ 281D:002F
cs=0x281d;eip=0x000031; 	X(POP(bp));	// 79752 pop     bp ;~ 281D:0031
cs=0x281d;eip=0x000032; 	J(RETF(0));	// 79753 retf ;~ 281D:0032

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_367b8: 	goto loc_367b8;
        case m2c::kloc_367d9: 	goto loc_367d9;
        case m2c::klocate_many_resources: 	goto locate_many_resources;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool nopsub_367e4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    nopsub_367e4:
    _begin:
#undef var_2
#define var_2 -2
	// 79765 var_2           = word ptr -2 ;~ 281D:0034
#undef arg_0
#define arg_0 6
	// 79766 arg_0           = word ptr  6 ;~ 281D:0034
#undef arg_2
#define arg_2 8
	// 79767 arg_2           = word ptr  8 ;~ 281D:0034
#undef arg_4
#define arg_4 0x0A
	// 79768 arg_4           = word ptr  0Ah ;~ 281D:0034
#undef arg_6
#define arg_6 0x0C
	// 79769 arg_6           = word ptr  0Ch ;~ 281D:0034
cs=0x281d;eip=0x000034; 	X(PUSH(bp));	// 79771 push    bp ;~ 281D:0034
cs=0x281d;eip=0x000035; 	T(MOV(bp, sp));	// 79772 mov     bp, sp ;~ 281D:0035
cs=0x281d;eip=0x000037; 	T(SUB(sp, 2));	// 79773 sub     sp, 2 ;~ 281D:0037
cs=0x281d;eip=0x00003a; 	X(PUSH(si));	// 79774 push    si ;~ 281D:003A
cs=0x281d;eip=0x00003b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 79775 mov     [bp+var_2], 0 ;~ 281D:003B
cs=0x281d;eip=0x000040; 	J(JMP(loc_36819));	// 79776 jmp     short loc_36819 ;~ 281D:0040
loc_367f2:
	// 9445 
cs=0x281d;eip=0x000042; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 79780 push    [bp+arg_4] ;~ 281D:0042
cs=0x281d;eip=0x000045; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 79781 push    [bp+arg_2] ;~ 281D:0045
cs=0x281d;eip=0x000048; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 79782 push    [bp+arg_0] ;~ 281D:0048
cs=0x281d;eip=0x00004b; 	J(CALLF(locate_shape_nofatal,0));	// 79783 call    locate_shape_nofatal ;~ 281D:004B
cs=0x281d;eip=0x000050; 	T(ADD(sp, 6));	// 79784 add     sp, 6 ;~ 281D:0050
cs=0x281d;eip=0x000053; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 79785 mov     bx, [bp+var_2] ;~ 281D:0053
cs=0x281d;eip=0x000056; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 79786 inc     [bp+var_2] ;~ 281D:0056
cs=0x281d;eip=0x000059; 	T(SHL(bx, 1));	// 79787 shl     bx, 1 ;~ 281D:0059
cs=0x281d;eip=0x00005b; 	T(SHL(bx, 1));	// 79788 shl     bx, 1 ;~ 281D:005B
cs=0x281d;eip=0x00005d; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_6))));	// 79789 mov     si, [bp+arg_6] ;~ 281D:005D
cs=0x281d;eip=0x000060; 	X(MOV(*(dw*)(raddr(ds,bx+si)), ax));	// 79790 mov     [bx+si], ax ;~ 281D:0060
cs=0x281d;eip=0x000062; 	X(MOV(*(dw*)(raddr(ds,bx+si+2)), dx));	// 79791 mov     [bx+si+2], dx ;~ 281D:0062
cs=0x281d;eip=0x000065; 	X(ADD(*(dw*)(raddr(ss,bp+arg_4)), 4));	// 79792 add     [bp+arg_4], 4 ;~ 281D:0065
loc_36819:
	// 9446 
cs=0x281d;eip=0x000069; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 79795 mov     bx, [bp+arg_4] ;~ 281D:0069
cs=0x281d;eip=0x00006c; 	T(CMP(*(raddr(ds,bx)), 0));	// 79796 cmp     byte ptr [bx], 0 ;~ 281D:006C
cs=0x281d;eip=0x00006f; 	J(JNZ(loc_367f2));	// 79797 jnz     short loc_367F2 ;~ 281D:006F
cs=0x281d;eip=0x000071; 	X(POP(si));	// 79798 pop     si ;~ 281D:0071
cs=0x281d;eip=0x000072; 	T(MOV(sp, bp));	// 79799 mov     sp, bp ;~ 281D:0072
cs=0x281d;eip=0x000074; 	X(POP(bp));	// 79800 pop     bp ;~ 281D:0074
cs=0x281d;eip=0x000075; 	J(RETF(0));	// 79801 retf ;~ 281D:0075

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_367f2: 	goto loc_367f2;
        case m2c::kloc_36819: 	goto loc_36819;
        case m2c::knopsub_367e4: 	goto nopsub_367e4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool nopsub_36826(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    nopsub_36826:
    _begin:
#undef var_2
#define var_2 -2
	// 79811 var_2           = word ptr -2 ;~ 281D:0076
#undef arg_0
#define arg_0 6
	// 79812 arg_0           = word ptr  6 ;~ 281D:0076
#undef arg_2
#define arg_2 8
	// 79813 arg_2           = word ptr  8 ;~ 281D:0076
#undef arg_4
#define arg_4 0x0A
	// 79814 arg_4           = word ptr  0Ah ;~ 281D:0076
#undef arg_6
#define arg_6 0x0C
	// 79815 arg_6           = word ptr  0Ch ;~ 281D:0076
cs=0x281d;eip=0x000076; 	X(PUSH(bp));	// 79817 push    bp ;~ 281D:0076
cs=0x281d;eip=0x000077; 	T(MOV(bp, sp));	// 79818 mov     bp, sp ;~ 281D:0077
cs=0x281d;eip=0x000079; 	T(SUB(sp, 2));	// 79819 sub     sp, 2 ;~ 281D:0079
cs=0x281d;eip=0x00007c; 	X(PUSH(si));	// 79820 push    si ;~ 281D:007C
cs=0x281d;eip=0x00007d; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 79821 mov     [bp+var_2], 0 ;~ 281D:007D
cs=0x281d;eip=0x000082; 	J(JMP(loc_3685b));	// 79822 jmp     short loc_3685B ;~ 281D:0082
loc_36834:
	// 9447 
cs=0x281d;eip=0x000084; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 79826 push    [bp+arg_4] ;~ 281D:0084
cs=0x281d;eip=0x000087; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 79827 push    [bp+arg_2] ;~ 281D:0087
cs=0x281d;eip=0x00008a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 79828 push    [bp+arg_0] ;~ 281D:008A
cs=0x281d;eip=0x00008d; 	J(CALLF(locate_sound_fatal,0));	// 79829 call    locate_sound_fatal ;~ 281D:008D
cs=0x281d;eip=0x000092; 	T(ADD(sp, 6));	// 79830 add     sp, 6 ;~ 281D:0092
cs=0x281d;eip=0x000095; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 79831 mov     bx, [bp+var_2] ;~ 281D:0095
cs=0x281d;eip=0x000098; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 79832 inc     [bp+var_2] ;~ 281D:0098
cs=0x281d;eip=0x00009b; 	T(SHL(bx, 1));	// 79833 shl     bx, 1 ;~ 281D:009B
cs=0x281d;eip=0x00009d; 	T(SHL(bx, 1));	// 79834 shl     bx, 1 ;~ 281D:009D
cs=0x281d;eip=0x00009f; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_6))));	// 79835 mov     si, [bp+arg_6] ;~ 281D:009F
cs=0x281d;eip=0x0000a2; 	X(MOV(*(dw*)(raddr(ds,bx+si)), ax));	// 79836 mov     [bx+si], ax ;~ 281D:00A2
cs=0x281d;eip=0x0000a4; 	X(MOV(*(dw*)(raddr(ds,bx+si+2)), dx));	// 79837 mov     [bx+si+2], dx ;~ 281D:00A4
cs=0x281d;eip=0x0000a7; 	X(ADD(*(dw*)(raddr(ss,bp+arg_4)), 4));	// 79838 add     [bp+arg_4], 4 ;~ 281D:00A7
loc_3685b:
	// 9448 
cs=0x281d;eip=0x0000ab; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 79841 mov     bx, [bp+arg_4] ;~ 281D:00AB
cs=0x281d;eip=0x0000ae; 	T(CMP(*(raddr(ds,bx)), 0));	// 79842 cmp     byte ptr [bx], 0 ;~ 281D:00AE
cs=0x281d;eip=0x0000b1; 	J(JNZ(loc_36834));	// 79843 jnz     short loc_36834 ;~ 281D:00B1
cs=0x281d;eip=0x0000b3; 	X(POP(si));	// 79844 pop     si ;~ 281D:00B3
cs=0x281d;eip=0x0000b4; 	T(MOV(sp, bp));	// 79845 mov     sp, bp ;~ 281D:00B4
cs=0x281d;eip=0x0000b6; 	X(POP(bp));	// 79846 pop     bp ;~ 281D:00B6
cs=0x281d;eip=0x0000b7; 	J(RETF(0));	// 79847 retf ;~ 281D:00B7

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_36834: 	goto loc_36834;
        case m2c::kloc_3685b: 	goto loc_3685b;
        case m2c::knopsub_36826: 	goto nopsub_36826;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool nopsub_36868(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    nopsub_36868:
    _begin:
#undef var_2
#define var_2 -2
	// 79857 var_2           = word ptr -2 ;~ 281D:00B8
#undef arg_0
#define arg_0 6
	// 79858 arg_0           = word ptr  6 ;~ 281D:00B8
#undef arg_2
#define arg_2 8
	// 79859 arg_2           = word ptr  8 ;~ 281D:00B8
#undef arg_4
#define arg_4 0x0A
	// 79860 arg_4           = word ptr  0Ah ;~ 281D:00B8
#undef arg_6
#define arg_6 0x0C
	// 79861 arg_6           = word ptr  0Ch ;~ 281D:00B8
cs=0x281d;eip=0x0000b8; 	X(PUSH(bp));	// 79863 push    bp ;~ 281D:00B8
cs=0x281d;eip=0x0000b9; 	T(MOV(bp, sp));	// 79864 mov     bp, sp ;~ 281D:00B9
cs=0x281d;eip=0x0000bb; 	T(SUB(sp, 2));	// 79865 sub     sp, 2 ;~ 281D:00BB
cs=0x281d;eip=0x0000be; 	X(PUSH(si));	// 79866 push    si ;~ 281D:00BE
cs=0x281d;eip=0x0000bf; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 79867 mov     [bp+var_2], 0 ;~ 281D:00BF
cs=0x281d;eip=0x0000c4; 	J(JMP(loc_3689d));	// 79868 jmp     short loc_3689D ;~ 281D:00C4
loc_36876:
	// 9449 
cs=0x281d;eip=0x0000c6; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 79872 push    [bp+arg_4] ;~ 281D:00C6
cs=0x281d;eip=0x0000c9; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 79873 push    [bp+arg_2] ;~ 281D:00C9
cs=0x281d;eip=0x0000cc; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 79874 push    [bp+arg_0] ;~ 281D:00CC
cs=0x281d;eip=0x0000cf; 	J(CALLF(locate_shape_nofatal,0));	// 79875 call    locate_shape_nofatal ;~ 281D:00CF
cs=0x281d;eip=0x0000d4; 	T(ADD(sp, 6));	// 79876 add     sp, 6 ;~ 281D:00D4
cs=0x281d;eip=0x0000d7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 79877 mov     bx, [bp+var_2] ;~ 281D:00D7
cs=0x281d;eip=0x0000da; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 79878 inc     [bp+var_2] ;~ 281D:00DA
cs=0x281d;eip=0x0000dd; 	T(SHL(bx, 1));	// 79879 shl     bx, 1 ;~ 281D:00DD
cs=0x281d;eip=0x0000df; 	T(SHL(bx, 1));	// 79880 shl     bx, 1 ;~ 281D:00DF
cs=0x281d;eip=0x0000e1; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_6))));	// 79881 mov     si, [bp+arg_6] ;~ 281D:00E1
cs=0x281d;eip=0x0000e4; 	X(MOV(*(dw*)(raddr(ds,bx+si)), ax));	// 79882 mov     [bx+si], ax ;~ 281D:00E4
cs=0x281d;eip=0x0000e6; 	X(MOV(*(dw*)(raddr(ds,bx+si+2)), dx));	// 79883 mov     [bx+si+2], dx ;~ 281D:00E6
cs=0x281d;eip=0x0000e9; 	X(ADD(*(dw*)(raddr(ss,bp+arg_4)), 4));	// 79884 add     [bp+arg_4], 4 ;~ 281D:00E9
loc_3689d:
	// 9450 
cs=0x281d;eip=0x0000ed; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 79887 mov     bx, [bp+arg_4] ;~ 281D:00ED
cs=0x281d;eip=0x0000f0; 	T(CMP(*(raddr(ds,bx)), 0));	// 79888 cmp     byte ptr [bx], 0 ;~ 281D:00F0
cs=0x281d;eip=0x0000f3; 	J(JNZ(loc_36876));	// 79889 jnz     short loc_36876 ;~ 281D:00F3
cs=0x281d;eip=0x0000f5; 	X(POP(si));	// 79890 pop     si ;~ 281D:00F5
cs=0x281d;eip=0x0000f6; 	T(MOV(sp, bp));	// 79891 mov     sp, bp ;~ 281D:00F6
cs=0x281d;eip=0x0000f8; 	X(POP(bp));	// 79892 pop     bp ;~ 281D:00F8
cs=0x281d;eip=0x0000f9; 	J(RETF(0));	// 79893 retf ;~ 281D:00F9

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_36876: 	goto loc_36876;
        case m2c::kloc_3689d: 	goto loc_3689d;
        case m2c::knopsub_36868: 	goto nopsub_36868;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

