/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool _group13(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group13:
    _begin:
locate_many_resources:
	// 79739 
#undef arg_0
#define arg_0 6
	// 79742 arg_0           = word ptr  6 ;~ 281D:0002
#undef arg_2
#define arg_2 8
	// 79743 arg_2           = word ptr  8 ;~ 281D:0002
#undef arg_4
#define arg_4 0x0A
	// 79744 arg_4           = word ptr  0Ah ;~ 281D:0002
#undef arg_6
#define arg_6 0x0C
	// 79745 arg_6           = word ptr  0Ch ;~ 281D:0002
ret_281d_2:
	// 9939 
cs=0x281d;eip=0x000002; 	X(PUSH(bp));	// 79747 push    bp ;~ 281D:0002
cs=0x281d;eip=0x000003; 	T(MOV(bp, sp));	// 79748 mov     bp, sp ;~ 281D:0003
cs=0x281d;eip=0x000005; 	R(JMP(loc_367d9));	// 79749 jmp     short loc_367D9 ;~ 281D:0005
loc_367b8:
	// 9940 
cs=0x281d;eip=0x000008; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 79754 push    [bp+arg_4] ;~ 281D:0008
cs=0x281d;eip=0x00000b; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 79755 push    [bp+arg_2] ;~ 281D:000B
cs=0x281d;eip=0x00000e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 79756 push    [bp+arg_0] ;~ 281D:000E
cs=0x281d;eip=0x000011; 	R(CALLF(locate_shape_fatal,0));	// 79757 call    locate_shape_fatal ;~ 281D:0011
cs=0x281d;eip=0x000016; 	T(ADD(sp, 6));	// 79758 add     sp, 6 ;~ 281D:0016
cs=0x281d;eip=0x000019; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 79759 mov     bx, [bp+arg_6] ;~ 281D:0019
cs=0x281d;eip=0x00001c; 	X(ADD(*(dw*)(raddr(ss,bp+arg_6)), 4));	// 79760 add     [bp+arg_6], 4 ;~ 281D:001C
cs=0x281d;eip=0x000020; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 79761 mov     [bx], ax ;~ 281D:0020
cs=0x281d;eip=0x000022; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 79762 mov     [bx+2], dx ;~ 281D:0022
cs=0x281d;eip=0x000025; 	X(ADD(*(dw*)(raddr(ss,bp+arg_4)), 4));	// 79763 add     [bp+arg_4], 4 ;~ 281D:0025
loc_367d9:
	// 9941 
cs=0x281d;eip=0x000029; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 79766 mov     bx, [bp+arg_4] ;~ 281D:0029
cs=0x281d;eip=0x00002c; 	T(CMP(*(raddr(ds,bx)), 0));	// 79767 cmp     byte ptr [bx], 0 ;~ 281D:002C
cs=0x281d;eip=0x00002f; 	R(JNZ(loc_367b8));	// 79768 jnz     short loc_367B8 ;~ 281D:002F
cs=0x281d;eip=0x000031; 	X(POP(bp));	// 79769 pop     bp ;~ 281D:0031
cs=0x281d;eip=0x000032; 	R(RETF(0));	// 79770 retf ;~ 281D:0032
nopsub_367e4:
	// 79780 
#undef var_2
#define var_2 -2
	// 79782 var_2           = word ptr -2 ;~ 281D:0034
#undef arg_0
#define arg_0 6
	// 79783 arg_0           = word ptr  6 ;~ 281D:0034
#undef arg_2
#define arg_2 8
	// 79784 arg_2           = word ptr  8 ;~ 281D:0034
#undef arg_4
#define arg_4 0x0A
	// 79785 arg_4           = word ptr  0Ah ;~ 281D:0034
#undef arg_6
#define arg_6 0x0C
	// 79786 arg_6           = word ptr  0Ch ;~ 281D:0034
ret_281d_34:
	// 9942 
cs=0x281d;eip=0x000034; 	X(PUSH(bp));	// 79788 push    bp ;~ 281D:0034
cs=0x281d;eip=0x000035; 	T(MOV(bp, sp));	// 79789 mov     bp, sp ;~ 281D:0035
cs=0x281d;eip=0x000037; 	T(SUB(sp, 2));	// 79790 sub     sp, 2 ;~ 281D:0037
cs=0x281d;eip=0x00003a; 	X(PUSH(si));	// 79791 push    si ;~ 281D:003A
cs=0x281d;eip=0x00003b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 79792 mov     [bp+var_2], 0 ;~ 281D:003B
cs=0x281d;eip=0x000040; 	R(JMP(loc_36819));	// 79793 jmp     short loc_36819 ;~ 281D:0040
loc_367f2:
	// 9943 
cs=0x281d;eip=0x000042; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 79797 push    [bp+arg_4] ;~ 281D:0042
cs=0x281d;eip=0x000045; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 79798 push    [bp+arg_2] ;~ 281D:0045
cs=0x281d;eip=0x000048; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 79799 push    [bp+arg_0] ;~ 281D:0048
cs=0x281d;eip=0x00004b; 	R(CALLF(locate_shape_nofatal,0));	// 79800 call    locate_shape_nofatal ;~ 281D:004B
cs=0x281d;eip=0x000050; 	T(ADD(sp, 6));	// 79801 add     sp, 6 ;~ 281D:0050
cs=0x281d;eip=0x000053; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 79802 mov     bx, [bp+var_2] ;~ 281D:0053
cs=0x281d;eip=0x000056; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 79803 inc     [bp+var_2] ;~ 281D:0056
cs=0x281d;eip=0x000059; 	T(SHL(bx, 1));	// 79804 shl     bx, 1 ;~ 281D:0059
cs=0x281d;eip=0x00005b; 	T(SHL(bx, 1));	// 79805 shl     bx, 1 ;~ 281D:005B
cs=0x281d;eip=0x00005d; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_6))));	// 79806 mov     si, [bp+arg_6] ;~ 281D:005D
cs=0x281d;eip=0x000060; 	X(MOV(*(dw*)(raddr(ds,bx+si)), ax));	// 79807 mov     [bx+si], ax ;~ 281D:0060
cs=0x281d;eip=0x000062; 	X(MOV(*(dw*)(raddr(ds,bx+si+2)), dx));	// 79808 mov     [bx+si+2], dx ;~ 281D:0062
cs=0x281d;eip=0x000065; 	X(ADD(*(dw*)(raddr(ss,bp+arg_4)), 4));	// 79809 add     [bp+arg_4], 4 ;~ 281D:0065
loc_36819:
	// 9944 
cs=0x281d;eip=0x000069; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 79812 mov     bx, [bp+arg_4] ;~ 281D:0069
cs=0x281d;eip=0x00006c; 	T(CMP(*(raddr(ds,bx)), 0));	// 79813 cmp     byte ptr [bx], 0 ;~ 281D:006C
cs=0x281d;eip=0x00006f; 	R(JNZ(loc_367f2));	// 79814 jnz     short loc_367F2 ;~ 281D:006F
cs=0x281d;eip=0x000071; 	X(POP(si));	// 79815 pop     si ;~ 281D:0071
cs=0x281d;eip=0x000072; 	T(MOV(sp, bp));	// 79816 mov     sp, bp ;~ 281D:0072
cs=0x281d;eip=0x000074; 	X(POP(bp));	// 79817 pop     bp ;~ 281D:0074
cs=0x281d;eip=0x000075; 	R(RETF(0));	// 79818 retf ;~ 281D:0075
nopsub_36826:
	// 79826 
#undef var_2
#define var_2 -2
	// 79828 var_2           = word ptr -2 ;~ 281D:0076
#undef arg_0
#define arg_0 6
	// 79829 arg_0           = word ptr  6 ;~ 281D:0076
#undef arg_2
#define arg_2 8
	// 79830 arg_2           = word ptr  8 ;~ 281D:0076
#undef arg_4
#define arg_4 0x0A
	// 79831 arg_4           = word ptr  0Ah ;~ 281D:0076
#undef arg_6
#define arg_6 0x0C
	// 79832 arg_6           = word ptr  0Ch ;~ 281D:0076
ret_281d_76:
	// 9945 
cs=0x281d;eip=0x000076; 	X(PUSH(bp));	// 79834 push    bp ;~ 281D:0076
cs=0x281d;eip=0x000077; 	T(MOV(bp, sp));	// 79835 mov     bp, sp ;~ 281D:0077
cs=0x281d;eip=0x000079; 	T(SUB(sp, 2));	// 79836 sub     sp, 2 ;~ 281D:0079
cs=0x281d;eip=0x00007c; 	X(PUSH(si));	// 79837 push    si ;~ 281D:007C
cs=0x281d;eip=0x00007d; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 79838 mov     [bp+var_2], 0 ;~ 281D:007D
cs=0x281d;eip=0x000082; 	R(JMP(loc_3685b));	// 79839 jmp     short loc_3685B ;~ 281D:0082
loc_36834:
	// 9946 
cs=0x281d;eip=0x000084; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 79843 push    [bp+arg_4] ;~ 281D:0084
cs=0x281d;eip=0x000087; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 79844 push    [bp+arg_2] ;~ 281D:0087
cs=0x281d;eip=0x00008a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 79845 push    [bp+arg_0] ;~ 281D:008A
cs=0x281d;eip=0x00008d; 	R(CALLF(locate_sound_fatal,0));	// 79846 call    locate_sound_fatal ;~ 281D:008D
cs=0x281d;eip=0x000092; 	T(ADD(sp, 6));	// 79847 add     sp, 6 ;~ 281D:0092
cs=0x281d;eip=0x000095; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 79848 mov     bx, [bp+var_2] ;~ 281D:0095
cs=0x281d;eip=0x000098; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 79849 inc     [bp+var_2] ;~ 281D:0098
cs=0x281d;eip=0x00009b; 	T(SHL(bx, 1));	// 79850 shl     bx, 1 ;~ 281D:009B
cs=0x281d;eip=0x00009d; 	T(SHL(bx, 1));	// 79851 shl     bx, 1 ;~ 281D:009D
cs=0x281d;eip=0x00009f; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_6))));	// 79852 mov     si, [bp+arg_6] ;~ 281D:009F
cs=0x281d;eip=0x0000a2; 	X(MOV(*(dw*)(raddr(ds,bx+si)), ax));	// 79853 mov     [bx+si], ax ;~ 281D:00A2
cs=0x281d;eip=0x0000a4; 	X(MOV(*(dw*)(raddr(ds,bx+si+2)), dx));	// 79854 mov     [bx+si+2], dx ;~ 281D:00A4
cs=0x281d;eip=0x0000a7; 	X(ADD(*(dw*)(raddr(ss,bp+arg_4)), 4));	// 79855 add     [bp+arg_4], 4 ;~ 281D:00A7
loc_3685b:
	// 9947 
cs=0x281d;eip=0x0000ab; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 79858 mov     bx, [bp+arg_4] ;~ 281D:00AB
cs=0x281d;eip=0x0000ae; 	T(CMP(*(raddr(ds,bx)), 0));	// 79859 cmp     byte ptr [bx], 0 ;~ 281D:00AE
cs=0x281d;eip=0x0000b1; 	R(JNZ(loc_36834));	// 79860 jnz     short loc_36834 ;~ 281D:00B1
cs=0x281d;eip=0x0000b3; 	X(POP(si));	// 79861 pop     si ;~ 281D:00B3
cs=0x281d;eip=0x0000b4; 	T(MOV(sp, bp));	// 79862 mov     sp, bp ;~ 281D:00B4
cs=0x281d;eip=0x0000b6; 	X(POP(bp));	// 79863 pop     bp ;~ 281D:00B6
cs=0x281d;eip=0x0000b7; 	R(RETF(0));	// 79864 retf ;~ 281D:00B7
nopsub_36868:
	// 79872 
#undef var_2
#define var_2 -2
	// 79874 var_2           = word ptr -2 ;~ 281D:00B8
#undef arg_0
#define arg_0 6
	// 79875 arg_0           = word ptr  6 ;~ 281D:00B8
#undef arg_2
#define arg_2 8
	// 79876 arg_2           = word ptr  8 ;~ 281D:00B8
#undef arg_4
#define arg_4 0x0A
	// 79877 arg_4           = word ptr  0Ah ;~ 281D:00B8
#undef arg_6
#define arg_6 0x0C
	// 79878 arg_6           = word ptr  0Ch ;~ 281D:00B8
ret_281d_b8:
	// 9948 
cs=0x281d;eip=0x0000b8; 	X(PUSH(bp));	// 79880 push    bp ;~ 281D:00B8
cs=0x281d;eip=0x0000b9; 	T(MOV(bp, sp));	// 79881 mov     bp, sp ;~ 281D:00B9
cs=0x281d;eip=0x0000bb; 	T(SUB(sp, 2));	// 79882 sub     sp, 2 ;~ 281D:00BB
cs=0x281d;eip=0x0000be; 	X(PUSH(si));	// 79883 push    si ;~ 281D:00BE
cs=0x281d;eip=0x0000bf; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 79884 mov     [bp+var_2], 0 ;~ 281D:00BF
cs=0x281d;eip=0x0000c4; 	R(JMP(loc_3689d));	// 79885 jmp     short loc_3689D ;~ 281D:00C4
loc_36876:
	// 9949 
cs=0x281d;eip=0x0000c6; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 79889 push    [bp+arg_4] ;~ 281D:00C6
cs=0x281d;eip=0x0000c9; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 79890 push    [bp+arg_2] ;~ 281D:00C9
cs=0x281d;eip=0x0000cc; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 79891 push    [bp+arg_0] ;~ 281D:00CC
cs=0x281d;eip=0x0000cf; 	R(CALLF(locate_shape_nofatal,0));	// 79892 call    locate_shape_nofatal ;~ 281D:00CF
cs=0x281d;eip=0x0000d4; 	T(ADD(sp, 6));	// 79893 add     sp, 6 ;~ 281D:00D4
cs=0x281d;eip=0x0000d7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 79894 mov     bx, [bp+var_2] ;~ 281D:00D7
cs=0x281d;eip=0x0000da; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 79895 inc     [bp+var_2] ;~ 281D:00DA
cs=0x281d;eip=0x0000dd; 	T(SHL(bx, 1));	// 79896 shl     bx, 1 ;~ 281D:00DD
cs=0x281d;eip=0x0000df; 	T(SHL(bx, 1));	// 79897 shl     bx, 1 ;~ 281D:00DF
cs=0x281d;eip=0x0000e1; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_6))));	// 79898 mov     si, [bp+arg_6] ;~ 281D:00E1
cs=0x281d;eip=0x0000e4; 	X(MOV(*(dw*)(raddr(ds,bx+si)), ax));	// 79899 mov     [bx+si], ax ;~ 281D:00E4
cs=0x281d;eip=0x0000e6; 	X(MOV(*(dw*)(raddr(ds,bx+si+2)), dx));	// 79900 mov     [bx+si+2], dx ;~ 281D:00E6
cs=0x281d;eip=0x0000e9; 	X(ADD(*(dw*)(raddr(ss,bp+arg_4)), 4));	// 79901 add     [bp+arg_4], 4 ;~ 281D:00E9
loc_3689d:
	// 9950 
cs=0x281d;eip=0x0000ed; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 79904 mov     bx, [bp+arg_4] ;~ 281D:00ED
cs=0x281d;eip=0x0000f0; 	T(CMP(*(raddr(ds,bx)), 0));	// 79905 cmp     byte ptr [bx], 0 ;~ 281D:00F0
cs=0x281d;eip=0x0000f3; 	R(JNZ(loc_36876));	// 79906 jnz     short loc_36876 ;~ 281D:00F3
cs=0x281d;eip=0x0000f5; 	X(POP(si));	// 79907 pop     si ;~ 281D:00F5
cs=0x281d;eip=0x0000f6; 	T(MOV(sp, bp));	// 79908 mov     sp, bp ;~ 281D:00F6
cs=0x281d;eip=0x0000f8; 	X(POP(bp));	// 79909 pop     bp ;~ 281D:00F8
cs=0x281d;eip=0x0000f9; 	R(RETF(0));	// 79910 retf ;~ 281D:00F9

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return true;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_367b8: 	goto loc_367b8;
        case m2c::kloc_367d9: 	goto loc_367d9;
        case m2c::kloc_367f2: 	goto loc_367f2;
        case m2c::kloc_36819: 	goto loc_36819;
        case m2c::kloc_36834: 	goto loc_36834;
        case m2c::kloc_3685b: 	goto loc_3685b;
        case m2c::kloc_36876: 	goto loc_36876;
        case m2c::kloc_3689d: 	goto loc_3689d;
        case m2c::klocate_many_resources: 	goto locate_many_resources;
        case m2c::knopsub_367e4: 	goto nopsub_367e4;
        case m2c::kret_281d_76: 	goto ret_281d_76;
        case m2c::kret_281d_b8: 	goto ret_281d_b8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

