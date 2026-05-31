/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool sub_274b0(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_274b0:
    _begin:
#undef var_40
#define var_40 -0x40
	// 45778 var_40          = byte ptr -40h ;~ 18ED:0000
#undef var_22
#define var_22 -0x22
	// 45779 var_22          = byte ptr -22h ;~ 18ED:0000
#undef var_4
#define var_4 -4
	// 45780 var_4           = word ptr -4 ;~ 18ED:0000
#undef var_2
#define var_2 -2
	// 45781 var_2           = word ptr -2 ;~ 18ED:0000
#undef arg_0
#define arg_0 6
	// 45782 arg_0           = word ptr  6 ;~ 18ED:0000
#undef arg_2
#define arg_2 8
	// 45783 arg_2           = word ptr  8 ;~ 18ED:0000
#undef arg_4
#define arg_4 0x0A
	// 45784 arg_4           = word ptr  0Ah ;~ 18ED:0000
#undef arg_6
#define arg_6 0x0C
	// 45785 arg_6           = word ptr  0Ch ;~ 18ED:0000
cs=0x18ed;eip=0x000000; 	X(PUSH(bp));	// 45787 push    bp ;~ 18ED:0000
cs=0x18ed;eip=0x000001; 	T(MOV(bp, sp));	// 45788 mov     bp, sp ;~ 18ED:0001
cs=0x18ed;eip=0x000003; 	T(SUB(sp, 0x40));	// 45789 sub     sp, 40h ;~ 18ED:0003
cs=0x18ed;eip=0x000006; 	X(PUSH(di));	// 45790 push    di ;~ 18ED:0006
cs=0x18ed;eip=0x000007; 	X(PUSH(si));	// 45791 push    si ;~ 18ED:0007
cs=0x18ed;eip=0x000008; 	T(MOV(ax, video_flag1_is1));	// 45792 mov     ax, video_flag1_is1 ;~ 18ED:0008
cs=0x18ed;eip=0x00000b; 	X(IMUL1_2(video_flag4_is1));	// 45793 imul    video_flag4_is1 ;~ 18ED:000B
cs=0x18ed;eip=0x00000f; 	T(CWD);	// 45794 cwd ;~ 18ED:000F
cs=0x18ed;eip=0x000010; 	X(PUSH(dx));	// 45795 push    dx ;~ 18ED:0010
cs=0x18ed;eip=0x000011; 	X(PUSH(ax));	// 45796 push    ax ;~ 18ED:0011
cs=0x18ed;eip=0x000012; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 45797 mov     ax, [bp+arg_6] ;~ 18ED:0012
cs=0x18ed;eip=0x000015; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 45798 sub     ax, [bp+arg_4] ;~ 18ED:0015
cs=0x18ed;eip=0x000018; 	T(CWD);	// 45799 cwd ;~ 18ED:0018
cs=0x18ed;eip=0x000019; 	X(PUSH(dx));	// 45800 push    dx ;~ 18ED:0019
cs=0x18ed;eip=0x00001a; 	X(PUSH(ax));	// 45801 push    ax ;~ 18ED:001A
cs=0x18ed;eip=0x00001b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 45802 mov     ax, [bp+arg_2] ;~ 18ED:001B
cs=0x18ed;eip=0x00001e; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 45803 sub     ax, [bp+arg_0] ;~ 18ED:001E
cs=0x18ed;eip=0x000021; 	T(CWD);	// 45804 cwd ;~ 18ED:0021
cs=0x18ed;eip=0x000022; 	X(PUSH(dx));	// 45805 push    dx ;~ 18ED:0022
cs=0x18ed;eip=0x000023; 	X(PUSH(ax));	// 45806 push    ax ;~ 18ED:0023
cs=0x18ed;eip=0x000024; 	J(CALLF(__aflmul,0));	// 45807 call    __aFlmul ;~ 18ED:0024
cs=0x18ed;eip=0x000029; 	X(PUSH(dx));	// 45808 push    dx ;~ 18ED:0029
cs=0x18ed;eip=0x00002a; 	X(PUSH(ax));	// 45809 push    ax ;~ 18ED:002A
cs=0x18ed;eip=0x00002b; 	J(CALLF(__afldiv,0));	// 45810 call    __aFldiv ;~ 18ED:002B
cs=0x18ed;eip=0x000030; 	T(ADD(ax, 0x12));	// 45811 add     ax, 12h ;~ 18ED:0030
cs=0x18ed;eip=0x000033; 	T(ADC(dx, 0));	// 45812 adc     dx, 0 ;~ 18ED:0033
cs=0x18ed;eip=0x000036; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 45813 mov     [bp+var_4], ax ;~ 18ED:0036
cs=0x18ed;eip=0x000039; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 45814 mov     [bp+var_2], dx ;~ 18ED:0039
cs=0x18ed;eip=0x00003c; 	J(CALLF(mmgr_get_res_ofs_diff_scaled,0));	// 45815 call    mmgr_get_res_ofs_diff_scaled ;~ 18ED:003C
cs=0x18ed;eip=0x000041; 	T(CMP(dx, *(dw*)(raddr(ss,bp+var_2))));	// 45816 cmp     dx, [bp+var_2] ;~ 18ED:0041
cs=0x18ed;eip=0x000044; 	J(JG(loc_27506));	// 45817 jg      short loc_27506 ;~ 18ED:0044
cs=0x18ed;eip=0x000046; 	J(JL(loc_274fd));	// 45818 jl      short loc_274FD ;~ 18ED:0046
cs=0x18ed;eip=0x000048; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_4))));	// 45819 cmp     ax, [bp+var_4] ;~ 18ED:0048
cs=0x18ed;eip=0x00004b; 	J(JA(loc_27506));	// 45820 ja      short loc_27506 ;~ 18ED:004B
loc_274fd:
	// 7403 
cs=0x18ed;eip=0x00004d; 	T(SUB(ax, ax));	// 45823 sub     ax, ax ;~ 18ED:004D
cs=0x18ed;eip=0x00004f; 	X(POP(si));	// 45824 pop     si ;~ 18ED:004F
cs=0x18ed;eip=0x000050; 	X(POP(di));	// 45825 pop     di ;~ 18ED:0050
cs=0x18ed;eip=0x000051; 	T(MOV(sp, bp));	// 45826 mov     sp, bp ;~ 18ED:0051
cs=0x18ed;eip=0x000053; 	X(POP(bp));	// 45827 pop     bp ;~ 18ED:0053
cs=0x18ed;eip=0x000054; 	J(RETF(0));	// 45828 retf ;~ 18ED:0054
loc_27506:
	// 7404 
cs=0x18ed;eip=0x000056; 	X(PUSH(cs));	// 45834 push    cs ;~ 18ED:0056
cs=0x18ed;eip=0x000057; 	J(CALL(mouse_draw_opaque_check,0));	// 45835 call    near ptr mouse_draw_opaque_check ;~ 18ED:0057
cs=0x18ed;eip=0x00005a; 	T(MOV(ax, 0x0F));	// 45836 mov     ax, 0Fh ;~ 18ED:005A
cs=0x18ed;eip=0x00005d; 	X(PUSH(ax));	// 45837 push    ax ;~ 18ED:005D
cs=0x18ed;eip=0x00005e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 45838 mov     ax, [bp+arg_6] ;~ 18ED:005E
cs=0x18ed;eip=0x000061; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 45839 sub     ax, [bp+arg_4] ;~ 18ED:0061
cs=0x18ed;eip=0x000064; 	X(PUSH(ax));	// 45840 push    ax ;~ 18ED:0064
cs=0x18ed;eip=0x000065; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 45841 mov     ax, [bp+arg_2] ;~ 18ED:0065
cs=0x18ed;eip=0x000068; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 45842 sub     ax, [bp+arg_0] ;~ 18ED:0068
cs=0x18ed;eip=0x00006b; 	X(PUSH(ax));	// 45843 push    ax ;~ 18ED:006B
cs=0x18ed;eip=0x00006c; 	J(CALLF(sprite_make_wnd,0));	// 45844 call    sprite_make_wnd ;~ 18ED:006C
cs=0x18ed;eip=0x000071; 	T(ADD(sp, 6));	// 45845 add     sp, 6 ;~ 18ED:0071
cs=0x18ed;eip=0x000074; 	T(MOV(bl, byte_3b8fc));	// 45846 mov     bl, byte_3B8FC ;~ 18ED:0074
cs=0x18ed;eip=0x000078; 	T(SUB(bh, bh));	// 45847 sub     bh, bh ;~ 18ED:0078
cs=0x18ed;eip=0x00007a; 	T(SHL(bx, 1));	// 45848 shl     bx, 1 ;~ 18ED:007A
cs=0x18ed;eip=0x00007c; 	T(SHL(bx, 1));	// 45849 shl     bx, 1 ;~ 18ED:007C
cs=0x18ed;eip=0x00007e; 	X(MOV(*(dw*)(((db*)sprite_ptrs)+bx), ax));	// 45850 mov     word ptr sprite_ptrs[bx], ax ;~ 18ED:007E
cs=0x18ed;eip=0x000082; 	X(MOV(*(dw*)((((db*)sprite_ptrs)+2)+bx), dx));	// 45851 mov     word ptr (sprite_ptrs+2)[bx], dx ;~ 18ED:0082
cs=0x18ed;eip=0x000086; 	T(MOV(al, byte_3b8fc));	// 45852 mov     al, byte_3B8FC ;~ 18ED:0086
cs=0x18ed;eip=0x000089; 	T(SUB(ah, ah));	// 45853 sub     ah, ah ;~ 18ED:0089
cs=0x18ed;eip=0x00008b; 	T(MOV(si, ax));	// 45854 mov     si, ax ;~ 18ED:008B
cs=0x18ed;eip=0x00008d; 	T(SHL(si, 1));	// 45855 shl     si, 1 ;~ 18ED:008D
cs=0x18ed;eip=0x00008f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 45856 mov     ax, [bp+arg_0] ;~ 18ED:008F
cs=0x18ed;eip=0x000092; 	X(MOV(*(dw*)(((db*)&word_4646a)+si), ax));	// 45857 mov     word_4646A[si], ax ;~ 18ED:0092
cs=0x18ed;eip=0x000096; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 45858 mov     ax, [bp+arg_4] ;~ 18ED:0096
cs=0x18ed;eip=0x000099; 	X(MOV(*(dw*)(((db*)&word_46486)+si), ax));	// 45859 mov     word_46486[si], ax ;~ 18ED:0099
cs=0x18ed;eip=0x00009d; 	T(ax = bp+var_40);	// 45860 lea     ax, [bp+var_40] ;~ 18ED:009D
cs=0x18ed;eip=0x0000a0; 	X(PUSH(ax));	// 45861 push    ax ;~ 18ED:00A0
cs=0x18ed;eip=0x0000a1; 	J(CALLF(sprite_copy_both_to_arg,0));	// 45862 call    sprite_copy_both_to_arg ;~ 18ED:00A1
cs=0x18ed;eip=0x0000a6; 	T(ADD(sp, 2));	// 45863 add     sp, 2 ;~ 18ED:00A6
cs=0x18ed;eip=0x0000a9; 	T(MOV(al, 0x3C));	// 45864 mov     al, 3Ch ; '<' ;~ 18ED:00A9
cs=0x18ed;eip=0x0000ab; 	X(MUL1_1(byte_3b8fc));	// 45865 mul     byte_3B8FC ;~ 18ED:00AB
cs=0x18ed;eip=0x0000af; 	T(MOV(bx, ax));	// 45866 mov     bx, ax ;~ 18ED:00AF
cs=0x18ed;eip=0x0000b1; 	T(LES(di, trackdata12));	// 45867 les     di, trackdata12 ;~ 18ED:00B1
cs=0x18ed;eip=0x0000b5; 	X(PUSH(si));	// 45868 push    si ;~ 18ED:00B5
cs=0x18ed;eip=0x0000b6; 	T(di = bx+di);	// 45869 lea     di, [bx+di] ;~ 18ED:00B6
cs=0x18ed;eip=0x0000b8; 	T(si = bp+var_40);	// 45870 lea     si, [bp+var_40] ;~ 18ED:00B8
cs=0x18ed;eip=0x0000bb; 	T(MOV(cx, 0x0F));	// 45871 mov     cx, 0Fh ;~ 18ED:00BB
	// 45872 repne movsw ;~ 18ED:00BE
cs=0x18ed;eip=0x0000be; 	X(	REPNE MOVSW);	// 45872 repne movsw ;~ 18ED:00BE
cs=0x18ed;eip=0x0000c0; 	X(POP(si));	// 45873 pop     si ;~ 18ED:00C0
cs=0x18ed;eip=0x0000c1; 	T(MOV(al, byte_3b8fc));	// 45874 mov     al, byte_3B8FC ;~ 18ED:00C1
cs=0x18ed;eip=0x0000c4; 	T(SUB(ah, ah));	// 45875 sub     ah, ah ;~ 18ED:00C4
cs=0x18ed;eip=0x0000c6; 	T(SHL(ax, 1));	// 45876 shl     ax, 1 ;~ 18ED:00C6
cs=0x18ed;eip=0x0000c8; 	T(MOV(cx, 0x1E));	// 45877 mov     cx, 1Eh ;~ 18ED:00C8
cs=0x18ed;eip=0x0000cb; 	T(MUL1_2(cx));	// 45878 mul     cx ;~ 18ED:00CB
cs=0x18ed;eip=0x0000cd; 	T(MOV(di, ax));	// 45879 mov     di, ax ;~ 18ED:00CD
cs=0x18ed;eip=0x0000cf; 	T(LES(bx, trackdata12));	// 45880 les     bx, trackdata12 ;~ 18ED:00CF
cs=0x18ed;eip=0x0000d3; 	X(PUSH(si));	// 45881 push    si ;~ 18ED:00D3
cs=0x18ed;eip=0x0000d4; 	T(di = bx+di+0x1E);	// 45882 lea     di, [bx+di+1Eh] ;~ 18ED:00D4
cs=0x18ed;eip=0x0000d7; 	T(si = bp+var_22);	// 45883 lea     si, [bp+var_22] ;~ 18ED:00D7
cs=0x18ed;eip=0x0000da; 	T(MOV(cx, 0x0F));	// 45884 mov     cx, 0Fh ;~ 18ED:00DA
	// 45885 repne movsw ;~ 18ED:00DD
cs=0x18ed;eip=0x0000dd; 	X(	REPNE MOVSW);	// 45885 repne movsw ;~ 18ED:00DD
cs=0x18ed;eip=0x0000df; 	X(POP(si));	// 45886 pop     si ;~ 18ED:00DF
cs=0x18ed;eip=0x0000e0; 	J(CALLF(sprite_copy_2_to_1,0));	// 45887 call    sprite_copy_2_to_1 ;~ 18ED:00E0
cs=0x18ed;eip=0x0000e5; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 45888 push    [bp+arg_4] ;~ 18ED:00E5
cs=0x18ed;eip=0x0000e8; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 45889 push    [bp+arg_0] ;~ 18ED:00E8
cs=0x18ed;eip=0x0000eb; 	T(MOV(bl, byte_3b8fc));	// 45890 mov     bl, byte_3B8FC ;~ 18ED:00EB
cs=0x18ed;eip=0x0000ef; 	T(SUB(bh, bh));	// 45891 sub     bh, bh ;~ 18ED:00EF
cs=0x18ed;eip=0x0000f1; 	T(SHL(bx, 1));	// 45892 shl     bx, 1 ;~ 18ED:00F1
cs=0x18ed;eip=0x0000f3; 	T(SHL(bx, 1));	// 45893 shl     bx, 1 ;~ 18ED:00F3
cs=0x18ed;eip=0x0000f5; 	T(LES(bx, *(dd*)(((db*)sprite_ptrs)+bx)));	// 45894 les     bx, sprite_ptrs[bx] ;~ 18ED:00F5
cs=0x18ed;eip=0x0000f9; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 45895 push    word ptr es:[bx+2] ;~ 18ED:00F9
cs=0x18ed;eip=0x0000fd; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 45896 push    word ptr es:[bx] ;~ 18ED:00FD
cs=0x18ed;eip=0x000100; 	J(CALLF(sprite_clear_shape_alt,0));	// 45897 call    sprite_clear_shape_alt ;~ 18ED:0100
cs=0x18ed;eip=0x000105; 	T(ADD(sp, 8));	// 45898 add     sp, 8 ;~ 18ED:0105
cs=0x18ed;eip=0x000108; 	X(INC(byte_3b8fc));	// 45899 inc     byte_3B8FC ;~ 18ED:0108
cs=0x18ed;eip=0x00010c; 	T(MOV(ax, 1));	// 45900 mov     ax, 1 ;~ 18ED:010C
cs=0x18ed;eip=0x00010f; 	X(POP(si));	// 45901 pop     si ;~ 18ED:010F
cs=0x18ed;eip=0x000110; 	X(POP(di));	// 45902 pop     di ;~ 18ED:0110
cs=0x18ed;eip=0x000111; 	T(MOV(sp, bp));	// 45903 mov     sp, bp ;~ 18ED:0111
cs=0x18ed;eip=0x000113; 	X(POP(bp));	// 45904 pop     bp ;~ 18ED:0113
cs=0x18ed;eip=0x000114; 	J(RETF(0));	// 45905 retf ;~ 18ED:0114

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_274fd: 	goto loc_274fd;
        case m2c::kloc_27506: 	goto loc_27506;
        case m2c::ksub_274b0: 	goto sub_274b0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_275c6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_275c6:
    _begin:
#undef var_3c
#define var_3c -0x3C
	// 45918 var_3C          = byte ptr -3Ch ;~ 18ED:0116
#undef var_1e
#define var_1e -0x1E
	// 45919 var_1E          = byte ptr -1Eh ;~ 18ED:0116
cs=0x18ed;eip=0x000116; 	X(PUSH(bp));	// 45921 push    bp ;~ 18ED:0116
cs=0x18ed;eip=0x000117; 	T(MOV(bp, sp));	// 45922 mov     bp, sp ;~ 18ED:0117
cs=0x18ed;eip=0x000119; 	T(SUB(sp, 0x3C));	// 45923 sub     sp, 3Ch ;~ 18ED:0119
cs=0x18ed;eip=0x00011c; 	X(PUSH(di));	// 45924 push    di ;~ 18ED:011C
cs=0x18ed;eip=0x00011d; 	X(PUSH(si));	// 45925 push    si ;~ 18ED:011D
cs=0x18ed;eip=0x00011e; 	T(CMP(byte_3b8fc, 0));	// 45926 cmp     byte_3B8FC, 0 ;~ 18ED:011E
cs=0x18ed;eip=0x000123; 	J(JNZ(loc_275d8));	// 45927 jnz     short loc_275D8 ;~ 18ED:0123
cs=0x18ed;eip=0x000125; 	J(JMP(loc_27680));	// 45928 jmp     loc_27680 ;~ 18ED:0125
loc_275d8:
	// 7405 
cs=0x18ed;eip=0x000128; 	X(DEC(byte_3b8fc));	// 45932 dec     byte_3B8FC ;~ 18ED:0128
cs=0x18ed;eip=0x00012c; 	X(PUSH(cs));	// 45933 push    cs ;~ 18ED:012C
cs=0x18ed;eip=0x00012d; 	J(CALL(mouse_draw_opaque_check,0));	// 45934 call    near ptr mouse_draw_opaque_check ;~ 18ED:012D
cs=0x18ed;eip=0x000130; 	T(MOV(al, byte_3b8fc));	// 45935 mov     al, byte_3B8FC ;~ 18ED:0130
cs=0x18ed;eip=0x000133; 	T(SUB(ah, ah));	// 45936 sub     ah, ah ;~ 18ED:0133
cs=0x18ed;eip=0x000135; 	T(MOV(si, ax));	// 45937 mov     si, ax ;~ 18ED:0135
cs=0x18ed;eip=0x000137; 	T(MOV(di, si));	// 45938 mov     di, si ;~ 18ED:0137
cs=0x18ed;eip=0x000139; 	T(SHL(di, 1));	// 45939 shl     di, 1 ;~ 18ED:0139
cs=0x18ed;eip=0x00013b; 	X(PUSH(*(dw*)(((db*)&word_46486)+di)));	// 45940 push    word_46486[di] ;~ 18ED:013B
cs=0x18ed;eip=0x00013f; 	X(PUSH(*(dw*)(((db*)&word_4646a)+di)));	// 45941 push    word_4646A[di] ;~ 18ED:013F
cs=0x18ed;eip=0x000143; 	T(MOV(bx, si));	// 45942 mov     bx, si ;~ 18ED:0143
cs=0x18ed;eip=0x000145; 	T(SHL(bx, 1));	// 45943 shl     bx, 1 ;~ 18ED:0145
cs=0x18ed;eip=0x000147; 	T(SHL(bx, 1));	// 45944 shl     bx, 1 ;~ 18ED:0147
cs=0x18ed;eip=0x000149; 	T(LES(bx, *(dd*)(((db*)sprite_ptrs)+bx)));	// 45945 les     bx, sprite_ptrs[bx] ;~ 18ED:0149
cs=0x18ed;eip=0x00014d; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 45946 push    word ptr es:[bx+2] ;~ 18ED:014D
cs=0x18ed;eip=0x000151; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 45947 push    word ptr es:[bx] ;~ 18ED:0151
cs=0x18ed;eip=0x000154; 	J(CALLF(sprite_shape_to_1,0));	// 45948 call    sprite_shape_to_1 ;~ 18ED:0154
cs=0x18ed;eip=0x000159; 	T(ADD(sp, 8));	// 45949 add     sp, 8 ;~ 18ED:0159
cs=0x18ed;eip=0x00015c; 	T(MOV(al, 0x3C));	// 45950 mov     al, 3Ch ; '<' ;~ 18ED:015C
cs=0x18ed;eip=0x00015e; 	X(MUL1_1(byte_3b8fc));	// 45951 mul     byte_3B8FC ;~ 18ED:015E
cs=0x18ed;eip=0x000162; 	T(ADD(ax, *(dw*)(((db*)&trackdata12))));	// 45952 add     ax, word ptr trackdata12 ;~ 18ED:0162
cs=0x18ed;eip=0x000166; 	T(MOV(dx, *(dw*)(((db*)&trackdata12)+2)));	// 45953 mov     dx, word ptr trackdata12+2 ;~ 18ED:0166
cs=0x18ed;eip=0x00016a; 	X(PUSH(si));	// 45954 push    si ;~ 18ED:016A
cs=0x18ed;eip=0x00016b; 	X(PUSH(di));	// 45955 push    di ;~ 18ED:016B
cs=0x18ed;eip=0x00016c; 	T(di = bp+var_3c);	// 45956 lea     di, [bp+var_3C] ;~ 18ED:016C
cs=0x18ed;eip=0x00016f; 	T(MOV(si, ax));	// 45957 mov     si, ax ;~ 18ED:016F
cs=0x18ed;eip=0x000171; 	X(PUSH(ss));	// 45958 push    ss ;~ 18ED:0171
cs=0x18ed;eip=0x000172; 	X(POP(es));	// 45959 pop     es ;~ 18ED:0172
cs=0x18ed;eip=0x000173; 	X(PUSH(ds));	// 45960 push    ds ;~ 18ED:0173
cs=0x18ed;eip=0x000174; 	T(MOV(ds, dx));	// 45961 mov     ds, dx ;~ 18ED:0174
cs=0x18ed;eip=0x000176; 	T(MOV(cx, 0x0F));	// 45962 mov     cx, 0Fh ;~ 18ED:0176
	// 45963 repne movsw ;~ 18ED:0179
cs=0x18ed;eip=0x000179; 	X(	REPNE MOVSW);	// 45963 repne movsw ;~ 18ED:0179
cs=0x18ed;eip=0x00017b; 	X(POP(ds));	// 45964 pop     ds ;~ 18ED:017B
cs=0x18ed;eip=0x00017c; 	X(POP(di));	// 45965 pop     di ;~ 18ED:017C
cs=0x18ed;eip=0x00017d; 	X(POP(si));	// 45966 pop     si ;~ 18ED:017D
cs=0x18ed;eip=0x00017e; 	T(MOV(al, byte_3b8fc));	// 45967 mov     al, byte_3B8FC ;~ 18ED:017E
cs=0x18ed;eip=0x000181; 	T(SUB(ah, ah));	// 45968 sub     ah, ah ;~ 18ED:0181
cs=0x18ed;eip=0x000183; 	T(SHL(ax, 1));	// 45969 shl     ax, 1 ;~ 18ED:0183
cs=0x18ed;eip=0x000185; 	T(MOV(cx, 0x1E));	// 45970 mov     cx, 1Eh ;~ 18ED:0185
cs=0x18ed;eip=0x000188; 	T(MUL1_2(cx));	// 45971 mul     cx ;~ 18ED:0188
cs=0x18ed;eip=0x00018a; 	T(ADD(ax, *(dw*)(((db*)&trackdata12))));	// 45972 add     ax, word ptr trackdata12 ;~ 18ED:018A
cs=0x18ed;eip=0x00018e; 	T(MOV(dx, *(dw*)(((db*)&trackdata12)+2)));	// 45973 mov     dx, word ptr trackdata12+2 ;~ 18ED:018E
cs=0x18ed;eip=0x000192; 	T(ADD(ax, cx));	// 45974 add     ax, cx ;~ 18ED:0192
cs=0x18ed;eip=0x000194; 	X(PUSH(si));	// 45975 push    si ;~ 18ED:0194
cs=0x18ed;eip=0x000195; 	X(PUSH(di));	// 45976 push    di ;~ 18ED:0195
cs=0x18ed;eip=0x000196; 	T(di = bp+var_1e);	// 45977 lea     di, [bp+var_1E] ;~ 18ED:0196
cs=0x18ed;eip=0x000199; 	T(MOV(si, ax));	// 45978 mov     si, ax ;~ 18ED:0199
cs=0x18ed;eip=0x00019b; 	X(PUSH(ds));	// 45979 push    ds ;~ 18ED:019B
cs=0x18ed;eip=0x00019c; 	T(MOV(ds, dx));	// 45980 mov     ds, dx ;~ 18ED:019C
cs=0x18ed;eip=0x00019e; 	T(MOV(cx, 0x0F));	// 45981 mov     cx, 0Fh ;~ 18ED:019E
	// 45982 repne movsw ;~ 18ED:01A1
cs=0x18ed;eip=0x0001a1; 	X(	REPNE MOVSW);	// 45982 repne movsw ;~ 18ED:01A1
cs=0x18ed;eip=0x0001a3; 	X(POP(ds));	// 45983 pop     ds ;~ 18ED:01A3
cs=0x18ed;eip=0x0001a4; 	X(POP(di));	// 45984 pop     di ;~ 18ED:01A4
cs=0x18ed;eip=0x0001a5; 	X(POP(si));	// 45985 pop     si ;~ 18ED:01A5
cs=0x18ed;eip=0x0001a6; 	T(ax = bp+var_3c);	// 45986 lea     ax, [bp+var_3C] ;~ 18ED:01A6
cs=0x18ed;eip=0x0001a9; 	X(PUSH(ax));	// 45987 push    ax ;~ 18ED:01A9
cs=0x18ed;eip=0x0001aa; 	J(CALLF(sprite_copy_arg_to_both,0));	// 45988 call    sprite_copy_arg_to_both ;~ 18ED:01AA
cs=0x18ed;eip=0x0001af; 	T(ADD(sp, 2));	// 45989 add     sp, 2 ;~ 18ED:01AF
cs=0x18ed;eip=0x0001b2; 	T(MOV(bl, byte_3b8fc));	// 45990 mov     bl, byte_3B8FC ;~ 18ED:01B2
cs=0x18ed;eip=0x0001b6; 	T(SUB(bh, bh));	// 45991 sub     bh, bh ;~ 18ED:01B6
cs=0x18ed;eip=0x0001b8; 	T(SHL(bx, 1));	// 45992 shl     bx, 1 ;~ 18ED:01B8
cs=0x18ed;eip=0x0001ba; 	T(SHL(bx, 1));	// 45993 shl     bx, 1 ;~ 18ED:01BA
cs=0x18ed;eip=0x0001bc; 	X(PUSH(*(dw*)((((db*)sprite_ptrs)+2)+bx)));	// 45994 push    word ptr (sprite_ptrs+2)[bx] ;~ 18ED:01BC
cs=0x18ed;eip=0x0001c0; 	X(PUSH(*(dw*)(((db*)sprite_ptrs)+bx)));	// 45995 push    word ptr sprite_ptrs[bx] ;~ 18ED:01C0
cs=0x18ed;eip=0x0001c4; 	J(CALLF(sprite_free_wnd,0));	// 45996 call    sprite_free_wnd ;~ 18ED:01C4
cs=0x18ed;eip=0x0001c9; 	T(ADD(sp, 4));	// 45997 add     sp, 4 ;~ 18ED:01C9
cs=0x18ed;eip=0x0001cc; 	X(PUSH(cs));	// 45998 push    cs ;~ 18ED:01CC
cs=0x18ed;eip=0x0001cd; 	J(CALL(mouse_draw_transparent_check,0));	// 45999 call    near ptr mouse_draw_transparent_check ;~ 18ED:01CD
loc_27680:
	// 7406 
cs=0x18ed;eip=0x0001d0; 	X(POP(si));	// 46002 pop     si ;~ 18ED:01D0
cs=0x18ed;eip=0x0001d1; 	X(POP(di));	// 46003 pop     di ;~ 18ED:01D1
cs=0x18ed;eip=0x0001d2; 	T(MOV(sp, bp));	// 46004 mov     sp, bp ;~ 18ED:01D2
cs=0x18ed;eip=0x0001d4; 	X(POP(bp));	// 46005 pop     bp ;~ 18ED:01D4
cs=0x18ed;eip=0x0001d5; 	J(RETF(0));	// 46006 retf ;~ 18ED:01D5

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_275d8: 	goto loc_275d8;
        case m2c::kloc_27680: 	goto loc_27680;
        case m2c::ksub_275c6: 	goto sub_275c6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool show_dialog(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    show_dialog:
    _begin:
#undef var_1d8
#define var_1d8 -0x1D8
	// 46017 var_1D8         = byte ptr -1D8h ;~ 18ED:01D6
#undef var_1d6
#define var_1d6 -0x1D6
	// 46018 var_1D6         = word ptr -1D6h ;~ 18ED:01D6
#undef var_1d4
#define var_1d4 -0x1D4
	// 46019 var_1D4         = byte ptr -1D4h ;~ 18ED:01D6
#undef var_1d2
#define var_1d2 -0x1D2
	// 46020 var_1D2         = word ptr -1D2h ;~ 18ED:01D6
#undef var_1d0
#define var_1d0 -0x1D0
	// 46021 var_1D0         = dword ptr -1D0h ;~ 18ED:01D6
#undef var_1cc
#define var_1cc -0x1CC
	// 46022 var_1CC         = word ptr -1CCh ;~ 18ED:01D6
#undef var_1ca
#define var_1ca -0x1CA
	// 46023 var_1CA         = byte ptr -1CAh ;~ 18ED:01D6
#undef var_1c8
#define var_1c8 -0x1C8
	// 46024 var_1C8         = word ptr -1C8h ;~ 18ED:01D6
#undef var_1c6
#define var_1c6 -0x1C6
	// 46025 var_1C6         = word ptr -1C6h ;~ 18ED:01D6
#undef var_1c4
#define var_1c4 -0x1C4
	// 46026 var_1C4         = byte ptr -1C4h ;~ 18ED:01D6
#undef var_1c2
#define var_1c2 -0x1C2
	// 46027 var_1C2         = word ptr -1C2h ;~ 18ED:01D6
#undef var_1c0
#define var_1c0 -0x1C0
	// 46028 var_1C0         = byte ptr -1C0h ;~ 18ED:01D6
#undef var_1be
#define var_1be -0x1BE
	// 46029 var_1BE         = byte ptr -1BEh ;~ 18ED:01D6
#undef var_196
#define var_196 -0x196
	// 46030 var_196         = word ptr -196h ;~ 18ED:01D6
#undef var_194
#define var_194 -0x194
	// 46031 var_194         = word ptr -194h ;~ 18ED:01D6
#undef var_192
#define var_192 -0x192
	// 46032 var_192         = byte ptr -192h ;~ 18ED:01D6
#undef var_142
#define var_142 -0x142
	// 46033 var_142         = word ptr -142h ;~ 18ED:01D6
#undef var_140
#define var_140 -0x140
	// 46034 var_140         = byte ptr -140h ;~ 18ED:01D6
#undef var_13e
#define var_13e -0x13E
	// 46035 var_13E         = dword ptr -13Eh ;~ 18ED:01D6
#undef var_13a
#define var_13a -0x13A
	// 46036 var_13A         = dword ptr -13Ah ;~ 18ED:01D6
#undef var_ee
#define var_ee -0x0EE
	// 46037 var_EE          = byte ptr -0EEh ;~ 18ED:01D6
#undef var_c6
#define var_c6 -0x0C6
	// 46038 var_C6          = byte ptr -0C6h ;~ 18ED:01D6
#undef var_9e
#define var_9e -0x9E
	// 46039 var_9E          = byte ptr -9Eh ;~ 18ED:01D6
#undef var_9c
#define var_9c -0x9C
	// 46040 var_9C          = word ptr -9Ch ;~ 18ED:01D6
#undef var_9a
#define var_9a -0x9A
	// 46041 var_9A          = word ptr -9Ah ;~ 18ED:01D6
#undef var_98
#define var_98 -0x98
	// 46042 var_98          = byte ptr -98h ;~ 18ED:01D6
#undef var_84
#define var_84 -0x84
	// 46043 var_84          = byte ptr -84h ;~ 18ED:01D6
#undef var_82
#define var_82 -0x82
	// 46044 var_82          = word ptr -82h ;~ 18ED:01D6
#undef var_80
#define var_80 -0x80
	// 46045 var_80          = byte ptr -80h ;~ 18ED:01D6
#undef var_30
#define var_30 -0x30
	// 46046 var_30          = word ptr -30h ;~ 18ED:01D6
#undef var_2e
#define var_2e -0x2E
	// 46047 var_2E          = word ptr -2Eh ;~ 18ED:01D6
#undef var_2c
#define var_2c -0x2C
	// 46048 var_2C          = word ptr -2Ch ;~ 18ED:01D6
#undef var_2a
#define var_2a -0x2A
	// 46049 var_2A          = word ptr -2Ah ;~ 18ED:01D6
#undef var_28
#define var_28 -0x28
	// 46050 var_28          = word ptr -28h ;~ 18ED:01D6
#undef var_26
#define var_26 -0x26
	// 46051 var_26          = word ptr -26h ;~ 18ED:01D6
#undef var_24
#define var_24 -0x24
	// 46052 var_24          = word ptr -24h ;~ 18ED:01D6
#undef arg_0
#define arg_0 6
	// 46053 arg_0           = word ptr  6 ;~ 18ED:01D6
#undef arg_2
#define arg_2 8
	// 46054 arg_2           = word ptr  8 ;~ 18ED:01D6
#undef arg_4
#define arg_4 0x0A
	// 46055 arg_4           = word ptr  0Ah ;~ 18ED:01D6
#undef arg_6
#define arg_6 0x0C
	// 46056 arg_6           = word ptr  0Ch ;~ 18ED:01D6
#undef arg_8
#define arg_8 0x0E
	// 46057 arg_8           = word ptr  0Eh ;~ 18ED:01D6
#undef arg_a
#define arg_a 0x10
	// 46058 arg_A           = word ptr  10h ;~ 18ED:01D6
#undef arg_c
#define arg_c 0x12
	// 46059 arg_C           = word ptr  12h ;~ 18ED:01D6
#undef arg_e
#define arg_e 0x14
	// 46060 arg_E           = word ptr  14h ;~ 18ED:01D6
#undef arg_10
#define arg_10 0x16
	// 46061 arg_10          = byte ptr  16h ;~ 18ED:01D6
cs=0x18ed;eip=0x0001d6; 	X(PUSH(bp));	// 46063 push    bp ;~ 18ED:01D6
cs=0x18ed;eip=0x0001d7; 	T(MOV(bp, sp));	// 46064 mov     bp, sp ;~ 18ED:01D7
cs=0x18ed;eip=0x0001d9; 	T(SUB(sp, 0x1D8));	// 46065 sub     sp, 1D8h ;~ 18ED:01D9
cs=0x18ed;eip=0x0001dd; 	X(PUSH(di));	// 46066 push    di ;~ 18ED:01DD
cs=0x18ed;eip=0x0001de; 	X(PUSH(si));	// 46067 push    si ;~ 18ED:01DE
cs=0x18ed;eip=0x0001df; 	T(MOV(ax, fontdef_unk_0e));	// 46068 mov     ax, fontdef_unk_0E ;~ 18ED:01DF
cs=0x18ed;eip=0x0001e2; 	T(ADD(ax, 2));	// 46069 add     ax, 2 ;~ 18ED:01E2
cs=0x18ed;eip=0x0001e5; 	X(MOV(*(dw*)(raddr(ss,bp+var_1d6)), ax));	// 46070 mov     [bp+var_1D6], ax ;~ 18ED:01E5
cs=0x18ed;eip=0x0001e9; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c6)), 0));	// 46071 mov     [bp+var_1C6], 0 ;~ 18ED:01E9
cs=0x18ed;eip=0x0001ef; 	X(MOV(*(dw*)(raddr(ss,bp+var_194)), 0x20));	// 46072 mov     [bp+var_194], 20h ; ' ' ;~ 18ED:01EF
cs=0x18ed;eip=0x0001f5; 	X(PUSH(cs));	// 46073 push    cs ;~ 18ED:01F5
cs=0x18ed;eip=0x0001f6; 	J(CALL(mouse_draw_opaque_check,0));	// 46074 call    near ptr mouse_draw_opaque_check ;~ 18ED:01F6
cs=0x18ed;eip=0x0001f9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 46075 mov     ax, [bp+arg_4] ;~ 18ED:01F9
cs=0x18ed;eip=0x0001fc; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 46076 mov     dx, [bp+arg_6] ;~ 18ED:01FC
cs=0x18ed;eip=0x0001ff; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_1d0))), ax));	// 46077 mov     word ptr [bp+var_1D0], ax ;~ 18ED:01FF
cs=0x18ed;eip=0x000203; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_1d0+2))), dx));	// 46078 mov     word ptr [bp+var_1D0+2], dx ;~ 18ED:0203
cs=0x18ed;eip=0x000207; 	X(MOV(*(dw*)(raddr(ss,bp+var_82)), 0));	// 46079 mov     [bp+var_82], 0 ;~ 18ED:0207
cs=0x18ed;eip=0x00020d; 	J(JMP(loc_2775a));	// 46080 jmp     loc_2775A ;~ 18ED:020D
loc_276c0:
	// 7407 
cs=0x18ed;eip=0x000210; 	T(CMP(*(raddr(ss,bp+var_1d8)), 0x5D));	// 46084 cmp     [bp+var_1D8], 5Dh ; ']' ;~ 18ED:0210
cs=0x18ed;eip=0x000215; 	J(JNZ(loc_27702));	// 46085 jnz     short loc_27702 ;~ 18ED:0215
cs=0x18ed;eip=0x000217; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_82))));	// 46086 mov     si, [bp+var_82] ;~ 18ED:0217
cs=0x18ed;eip=0x00021b; 	X(MOV(*(raddr(ss,bp+si+var_80)), 0));	// 46087 mov     [bp+si+var_80], 0 ;~ 18ED:021B
cs=0x18ed;eip=0x00021f; 	T(ax = bp+var_80);	// 46088 lea     ax, [bp+var_80] ;~ 18ED:021F
cs=0x18ed;eip=0x000222; 	X(PUSH(ax));	// 46089 push    ax ;~ 18ED:0222
cs=0x18ed;eip=0x000223; 	J(CALLF(font_op2,0));	// 46090 call    font_op2 ;~ 18ED:0223
cs=0x18ed;eip=0x000228; 	T(ADD(sp, 2));	// 46091 add     sp, 2 ;~ 18ED:0228
cs=0x18ed;eip=0x00022b; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c2)), ax));	// 46092 mov     [bp+var_1C2], ax ;~ 18ED:022B
cs=0x18ed;eip=0x00022f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_194))));	// 46093 mov     ax, [bp+var_194] ;~ 18ED:022F
cs=0x18ed;eip=0x000233; 	T(CMP(*(dw*)(raddr(ss,bp+var_1c2)), ax));	// 46094 cmp     [bp+var_1C2], ax ;~ 18ED:0233
cs=0x18ed;eip=0x000237; 	J(JLE(loc_276f1));	// 46095 jle     short loc_276F1 ;~ 18ED:0237
cs=0x18ed;eip=0x000239; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c2))));	// 46096 mov     ax, [bp+var_1C2] ;~ 18ED:0239
cs=0x18ed;eip=0x00023d; 	X(MOV(*(dw*)(raddr(ss,bp+var_194)), ax));	// 46097 mov     [bp+var_194], ax ;~ 18ED:023D
loc_276f1:
	// 7408 
cs=0x18ed;eip=0x000241; 	X(MOV(*(dw*)(raddr(ss,bp+var_82)), 0));	// 46100 mov     [bp+var_82], 0 ;~ 18ED:0241
cs=0x18ed;eip=0x000247; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1d6))));	// 46101 mov     ax, [bp+var_1D6] ;~ 18ED:0247
cs=0x18ed;eip=0x00024b; 	X(ADD(*(dw*)(raddr(ss,bp+var_1c6)), ax));	// 46102 add     [bp+var_1C6], ax ;~ 18ED:024B
cs=0x18ed;eip=0x00024f; 	J(JMP(loc_27756));	// 46103 jmp     short loc_27756 ;~ 18ED:024F
loc_27702:
	// 7409 
cs=0x18ed;eip=0x000252; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_1d0))));	// 46108 les     bx, [bp+var_1D0] ;~ 18ED:0252
cs=0x18ed;eip=0x000256; 	T(CMP(*(raddr(es,bx)), 0x7D));	// 46109 cmp     byte ptr es:[bx], 7Dh ; '}' ;~ 18ED:0256
cs=0x18ed;eip=0x00025a; 	J(JNZ(loc_27744));	// 46110 jnz     short loc_27744 ;~ 18ED:025A
cs=0x18ed;eip=0x00025c; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_82))));	// 46111 mov     si, [bp+var_82] ;~ 18ED:025C
cs=0x18ed;eip=0x000260; 	X(MOV(*(raddr(ss,bp+si+var_80)), 0));	// 46112 mov     [bp+si+var_80], 0 ;~ 18ED:0260
cs=0x18ed;eip=0x000264; 	T(ax = bp+var_80);	// 46113 lea     ax, [bp+var_80] ;~ 18ED:0264
cs=0x18ed;eip=0x000267; 	X(PUSH(ax));	// 46114 push    ax ;~ 18ED:0267
cs=0x18ed;eip=0x000268; 	J(CALLF(font_op2,0));	// 46115 call    font_op2 ;~ 18ED:0268
cs=0x18ed;eip=0x00026d; 	T(ADD(sp, 2));	// 46116 add     sp, 2 ;~ 18ED:026D
cs=0x18ed;eip=0x000270; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c2)), ax));	// 46117 mov     [bp+var_1C2], ax ;~ 18ED:0270
cs=0x18ed;eip=0x000274; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_194))));	// 46118 mov     ax, [bp+var_194] ;~ 18ED:0274
cs=0x18ed;eip=0x000278; 	T(CMP(*(dw*)(raddr(ss,bp+var_1c2)), ax));	// 46119 cmp     [bp+var_1C2], ax ;~ 18ED:0278
cs=0x18ed;eip=0x00027c; 	J(JLE(loc_27736));	// 46120 jle     short loc_27736 ;~ 18ED:027C
cs=0x18ed;eip=0x00027e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c2))));	// 46121 mov     ax, [bp+var_1C2] ;~ 18ED:027E
cs=0x18ed;eip=0x000282; 	X(MOV(*(dw*)(raddr(ss,bp+var_194)), ax));	// 46122 mov     [bp+var_194], ax ;~ 18ED:0282
loc_27736:
	// 7410 
cs=0x18ed;eip=0x000286; 	X(MOV(*(dw*)(raddr(ss,bp+var_82)), 0));	// 46125 mov     [bp+var_82], 0 ;~ 18ED:0286
cs=0x18ed;eip=0x00028c; 	X(ADD(*(dw*)(raddr(ss,bp+var_1c6)), 4));	// 46126 add     [bp+var_1C6], 4 ;~ 18ED:028C
cs=0x18ed;eip=0x000291; 	J(JMP(loc_27756));	// 46127 jmp     short loc_27756 ;~ 18ED:0291
loc_27744:
	// 7411 
cs=0x18ed;eip=0x000294; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_1d0))));	// 46132 les     bx, [bp+var_1D0] ;~ 18ED:0294
cs=0x18ed;eip=0x000298; 	T(MOV(al, *(raddr(es,bx))));	// 46133 mov     al, es:[bx] ;~ 18ED:0298
cs=0x18ed;eip=0x00029b; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_82))));	// 46134 mov     si, [bp+var_82] ;~ 18ED:029B
cs=0x18ed;eip=0x00029f; 	X(INC(*(dw*)(raddr(ss,bp+var_82))));	// 46135 inc     [bp+var_82] ;~ 18ED:029F
cs=0x18ed;eip=0x0002a3; 	X(MOV(*(raddr(ss,bp+si+var_80)), al));	// 46136 mov     [bp+si+var_80], al ;~ 18ED:02A3
loc_27756:
	// 7412 
cs=0x18ed;eip=0x0002a6; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_1d0)))));	// 46140 inc     word ptr [bp+var_1D0] ;~ 18ED:02A6
loc_2775a:
	// 7413 
cs=0x18ed;eip=0x0002aa; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_1d0))));	// 46143 les     bx, [bp+var_1D0] ;~ 18ED:02AA
cs=0x18ed;eip=0x0002ae; 	T(MOV(al, *(raddr(es,bx))));	// 46144 mov     al, es:[bx] ;~ 18ED:02AE
cs=0x18ed;eip=0x0002b1; 	X(MOV(*(raddr(ss,bp+var_1d8)), al));	// 46145 mov     [bp+var_1D8], al ;~ 18ED:02B1
cs=0x18ed;eip=0x0002b5; 	T(OR(al, al));	// 46146 or      al, al ;~ 18ED:02B5
cs=0x18ed;eip=0x0002b7; 	J(JZ(loc_2776c));	// 46147 jz      short loc_2776C ;~ 18ED:02B7
cs=0x18ed;eip=0x0002b9; 	J(JMP(loc_276c0));	// 46148 jmp     loc_276C0 ;~ 18ED:02B9
loc_2776c:
	// 7414 
cs=0x18ed;eip=0x0002bc; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_194))));	// 46152 mov     ax, [bp+var_194] ;~ 18ED:02BC
cs=0x18ed;eip=0x0002c0; 	T(ADD(ax, 0x18));	// 46153 add     ax, 18h ;~ 18ED:02C0
cs=0x18ed;eip=0x0002c3; 	T(AND(al, 0x0F8));	// 46154 and     al, 0F8h ;~ 18ED:02C3
cs=0x18ed;eip=0x0002c5; 	X(MOV(*(dw*)(raddr(ss,bp+var_194)), ax));	// 46155 mov     [bp+var_194], ax ;~ 18ED:02C5
cs=0x18ed;eip=0x0002c9; 	T(CMP(*(dw*)(raddr(ss,bp+arg_8)), 0x0FFFF));	// 46156 cmp     [bp+arg_8], 0FFFFh ;~ 18ED:02C9
cs=0x18ed;eip=0x0002cd; 	J(JNZ(loc_27790));	// 46157 jnz     short loc_27790 ;~ 18ED:02CD
cs=0x18ed;eip=0x0002cf; 	T(MOV(ax, 0x140));	// 46158 mov     ax, 140h ;~ 18ED:02CF
cs=0x18ed;eip=0x0002d2; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_194))));	// 46159 sub     ax, [bp+var_194] ;~ 18ED:02D2
cs=0x18ed;eip=0x0002d6; 	T(CWD);	// 46160 cwd ;~ 18ED:02D6
cs=0x18ed;eip=0x0002d7; 	T(SUB(ax, dx));	// 46161 sub     ax, dx ;~ 18ED:02D7
cs=0x18ed;eip=0x0002d9; 	T(SAR(ax, 1));	// 46162 sar     ax, 1 ;~ 18ED:02D9
cs=0x18ed;eip=0x0002db; 	T(AND(al, 0x0F8));	// 46163 and     al, 0F8h ;~ 18ED:02DB
cs=0x18ed;eip=0x0002dd; 	X(MOV(*(dw*)(raddr(ss,bp+arg_8)), ax));	// 46164 mov     [bp+arg_8], ax ;~ 18ED:02DD
loc_27790:
	// 7415 
cs=0x18ed;eip=0x0002e0; 	T(CMP(*(dw*)(raddr(ss,bp+arg_a)), 0x0FFFF));	// 46167 cmp     [bp+arg_A], 0FFFFh ;~ 18ED:02E0
cs=0x18ed;eip=0x0002e4; 	J(JNZ(loc_277a5));	// 46168 jnz     short loc_277A5 ;~ 18ED:02E4
cs=0x18ed;eip=0x0002e6; 	T(MOV(ax, 0x0C8));	// 46169 mov     ax, 0C8h ; 'È' ;~ 18ED:02E6
cs=0x18ed;eip=0x0002e9; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_1c6))));	// 46170 sub     ax, [bp+var_1C6] ;~ 18ED:02E9
cs=0x18ed;eip=0x0002ed; 	T(CWD);	// 46171 cwd ;~ 18ED:02ED
cs=0x18ed;eip=0x0002ee; 	T(SUB(ax, dx));	// 46172 sub     ax, dx ;~ 18ED:02EE
cs=0x18ed;eip=0x0002f0; 	T(SAR(ax, 1));	// 46173 sar     ax, 1 ;~ 18ED:02F0
cs=0x18ed;eip=0x0002f2; 	X(MOV(*(dw*)(raddr(ss,bp+arg_a)), ax));	// 46174 mov     [bp+arg_A], ax ;~ 18ED:02F2
loc_277a5:
	// 7416 
cs=0x18ed;eip=0x0002f5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 46177 mov     ax, [bp+arg_8] ;~ 18ED:02F5
cs=0x18ed;eip=0x0002f8; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), ax));	// 46178 mov     [bp+var_30], ax ;~ 18ED:02F8
cs=0x18ed;eip=0x0002fb; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_194))));	// 46179 add     ax, [bp+var_194] ;~ 18ED:02FB
cs=0x18ed;eip=0x0002ff; 	X(MOV(*(dw*)(raddr(ss,bp+var_2e)), ax));	// 46180 mov     [bp+var_2E], ax ;~ 18ED:02FF
cs=0x18ed;eip=0x000302; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 46181 mov     ax, [bp+arg_A] ;~ 18ED:0302
cs=0x18ed;eip=0x000305; 	T(SUB(ax, 8));	// 46182 sub     ax, 8 ;~ 18ED:0305
cs=0x18ed;eip=0x000308; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 46183 mov     [bp+var_2C], ax ;~ 18ED:0308
cs=0x18ed;eip=0x00030b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 46184 mov     ax, [bp+arg_A] ;~ 18ED:030B
cs=0x18ed;eip=0x00030e; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1c6))));	// 46185 add     ax, [bp+var_1C6] ;~ 18ED:030E
cs=0x18ed;eip=0x000312; 	T(ADD(ax, 8));	// 46186 add     ax, 8 ;~ 18ED:0312
cs=0x18ed;eip=0x000315; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a)), ax));	// 46187 mov     [bp+var_2A], ax ;~ 18ED:0315
cs=0x18ed;eip=0x000318; 	X(ADD(*(dw*)(raddr(ss,bp+arg_8)), 8));	// 46188 add     [bp+arg_8], 8 ;~ 18ED:0318
cs=0x18ed;eip=0x00031c; 	X(SUB(*(dw*)(raddr(ss,bp+var_194)), 0x10));	// 46189 sub     [bp+var_194], 10h ;~ 18ED:031C
cs=0x18ed;eip=0x000321; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 46190 cmp     [bp+arg_2], 0 ;~ 18ED:0321
cs=0x18ed;eip=0x000325; 	J(JZ(loc_277f6));	// 46191 jz      short loc_277F6 ;~ 18ED:0325
cs=0x18ed;eip=0x000327; 	X(PUSH(ax));	// 46192 push    ax ;~ 18ED:0327
cs=0x18ed;eip=0x000328; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2c))));	// 46193 push    [bp+var_2C] ;~ 18ED:0328
cs=0x18ed;eip=0x00032b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2e))));	// 46194 push    [bp+var_2E] ;~ 18ED:032B
cs=0x18ed;eip=0x00032e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_30))));	// 46195 push    [bp+var_30] ;~ 18ED:032E
cs=0x18ed;eip=0x000331; 	X(PUSH(cs));	// 46196 push    cs ;~ 18ED:0331
cs=0x18ed;eip=0x000332; 	J(CALL(sub_274b0,0));	// 46197 call    near ptr sub_274B0 ;~ 18ED:0332
cs=0x18ed;eip=0x000335; 	T(ADD(sp, 8));	// 46198 add     sp, 8 ;~ 18ED:0335
cs=0x18ed;eip=0x000338; 	T(OR(al, al));	// 46199 or      al, al ;~ 18ED:0338
cs=0x18ed;eip=0x00033a; 	J(JNZ(loc_277f6));	// 46200 jnz     short loc_277F6 ;~ 18ED:033A
cs=0x18ed;eip=0x00033c; 	T(MOV(ax, 0x0FFFF));	// 46201 mov     ax, 0FFFFh ;~ 18ED:033C
cs=0x18ed;eip=0x00033f; 	X(POP(si));	// 46202 pop     si ;~ 18ED:033F
cs=0x18ed;eip=0x000340; 	X(POP(di));	// 46203 pop     di ;~ 18ED:0340
cs=0x18ed;eip=0x000341; 	T(MOV(sp, bp));	// 46204 mov     sp, bp ;~ 18ED:0341
cs=0x18ed;eip=0x000343; 	X(POP(bp));	// 46205 pop     bp ;~ 18ED:0343
cs=0x18ed;eip=0x000344; 	J(RETF(0));	// 46206 retf ;~ 18ED:0344
loc_277f6:
	// 7417 
cs=0x18ed;eip=0x000346; 	J(CALLF(sprite_copy_2_to_1,0));	// 46212 call    sprite_copy_2_to_1 ;~ 18ED:0346
cs=0x18ed;eip=0x00034b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2a))));	// 46213 push    [bp+var_2A] ;~ 18ED:034B
cs=0x18ed;eip=0x00034e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2c))));	// 46214 push    [bp+var_2C] ;~ 18ED:034E
cs=0x18ed;eip=0x000351; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2e))));	// 46215 push    [bp+var_2E] ;~ 18ED:0351
cs=0x18ed;eip=0x000354; 	X(PUSH(*(dw*)(raddr(ss,bp+var_30))));	// 46216 push    [bp+var_30] ;~ 18ED:0354
cs=0x18ed;eip=0x000357; 	J(CALLF(sprite_set_1_size,0));	// 46217 call    sprite_set_1_size ;~ 18ED:0357
cs=0x18ed;eip=0x00035c; 	T(ADD(sp, 8));	// 46218 add     sp, 8 ;~ 18ED:035C
cs=0x18ed;eip=0x00035f; 	T(SUB(ax, ax));	// 46219 sub     ax, ax ;~ 18ED:035F
cs=0x18ed;eip=0x000361; 	X(PUSH(ax));	// 46220 push    ax ;~ 18ED:0361
cs=0x18ed;eip=0x000362; 	J(CALLF(sprite_clear_1_color,0));	// 46221 call    sprite_clear_1_color ;~ 18ED:0362
cs=0x18ed;eip=0x000367; 	T(ADD(sp, 2));	// 46222 add     sp, 2 ;~ 18ED:0367
cs=0x18ed;eip=0x00036a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 46223 push    [bp+arg_C] ;~ 18ED:036A
cs=0x18ed;eip=0x00036d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 46224 mov     ax, [bp+arg_A] ;~ 18ED:036D
cs=0x18ed;eip=0x000370; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1c6))));	// 46225 add     ax, [bp+var_1C6] ;~ 18ED:0370
cs=0x18ed;eip=0x000374; 	T(ADD(ax, 4));	// 46226 add     ax, 4 ;~ 18ED:0374
cs=0x18ed;eip=0x000377; 	X(PUSH(ax));	// 46227 push    ax ;~ 18ED:0377
cs=0x18ed;eip=0x000378; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 46228 mov     ax, [bp+arg_8] ;~ 18ED:0378
cs=0x18ed;eip=0x00037b; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_194))));	// 46229 add     ax, [bp+var_194] ;~ 18ED:037B
cs=0x18ed;eip=0x00037f; 	T(ADD(ax, 4));	// 46230 add     ax, 4 ;~ 18ED:037F
cs=0x18ed;eip=0x000382; 	X(PUSH(ax));	// 46231 push    ax ;~ 18ED:0382
cs=0x18ed;eip=0x000383; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 46232 mov     ax, [bp+arg_A] ;~ 18ED:0383
cs=0x18ed;eip=0x000386; 	T(SUB(ax, 4));	// 46233 sub     ax, 4 ;~ 18ED:0386
cs=0x18ed;eip=0x000389; 	X(PUSH(ax));	// 46234 push    ax ;~ 18ED:0389
cs=0x18ed;eip=0x00038a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 46235 mov     ax, [bp+arg_8] ;~ 18ED:038A
cs=0x18ed;eip=0x00038d; 	T(SUB(ax, 4));	// 46236 sub     ax, 4 ;~ 18ED:038D
cs=0x18ed;eip=0x000390; 	X(PUSH(ax));	// 46237 push    ax ;~ 18ED:0390
cs=0x18ed;eip=0x000391; 	J(CALLF(sprite_1_unk4,0));	// 46238 call    sprite_1_unk4 ;~ 18ED:0391
cs=0x18ed;eip=0x000396; 	T(ADD(sp, 0x0A));	// 46239 add     sp, 0Ah ;~ 18ED:0396
cs=0x18ed;eip=0x000399; 	T(SUB(ax, ax));	// 46240 sub     ax, ax ;~ 18ED:0399
cs=0x18ed;eip=0x00039b; 	X(PUSH(ax));	// 46241 push    ax ;~ 18ED:039B
cs=0x18ed;eip=0x00039c; 	X(PUSH(dialog_fnt_colour));	// 46242 push    dialog_fnt_colour ;~ 18ED:039C
cs=0x18ed;eip=0x0003a0; 	J(CALLF(font_set_unk,0));	// 46243 call    font_set_unk ;~ 18ED:03A0
cs=0x18ed;eip=0x0003a5; 	T(ADD(sp, 4));	// 46244 add     sp, 4 ;~ 18ED:03A5
cs=0x18ed;eip=0x0003a8; 	X(MOV(word_3eb90, 0));	// 46245 mov     word_3EB90, 0 ;~ 18ED:03A8
cs=0x18ed;eip=0x0003ae; 	T(SUB(ax, ax));	// 46246 sub     ax, ax ;~ 18ED:03AE
cs=0x18ed;eip=0x0003b0; 	X(PUSH(ax));	// 46247 push    ax ;~ 18ED:03B0
cs=0x18ed;eip=0x0003b1; 	X(PUSH(dialog_fnt_colour));	// 46248 push    dialog_fnt_colour ;~ 18ED:03B1
cs=0x18ed;eip=0x0003b5; 	J(CALLF(font_set_unk,0));	// 46249 call    font_set_unk ;~ 18ED:03B5
cs=0x18ed;eip=0x0003ba; 	T(ADD(sp, 4));	// 46250 add     sp, 4 ;~ 18ED:03BA
cs=0x18ed;eip=0x0003bd; 	X(MOV(*(dw*)(raddr(ss,bp+var_82)), 0));	// 46251 mov     [bp+var_82], 0 ;~ 18ED:03BD
cs=0x18ed;eip=0x0003c3; 	X(MOV(*(raddr(ss,bp+var_9e)), 0));	// 46252 mov     [bp+var_9E], 0 ;~ 18ED:03C3
cs=0x18ed;eip=0x0003c8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 46253 mov     ax, [bp+arg_4] ;~ 18ED:03C8
cs=0x18ed;eip=0x0003cb; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 46254 mov     dx, [bp+arg_6] ;~ 18ED:03CB
cs=0x18ed;eip=0x0003ce; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_1d0))), ax));	// 46255 mov     word ptr [bp+var_1D0], ax ;~ 18ED:03CE
cs=0x18ed;eip=0x0003d2; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_1d0+2))), dx));	// 46256 mov     word ptr [bp+var_1D0+2], dx ;~ 18ED:03D2
cs=0x18ed;eip=0x0003d6; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c6)), 1));	// 46257 mov     [bp+var_1C6], 1 ;~ 18ED:03D6
cs=0x18ed;eip=0x0003dc; 	J(JMP(loc_2798e));	// 46258 jmp     loc_2798E ;~ 18ED:03DC
loc_27890:
	// 7418 
cs=0x18ed;eip=0x0003e0; 	T(CMP(*(raddr(ss,bp+var_1d8)), 0x5B));	// 46263 cmp     [bp+var_1D8], 5Bh ; '[' ;~ 18ED:03E0
cs=0x18ed;eip=0x0003e5; 	J(JNZ(loc_2789a));	// 46264 jnz     short loc_2789A ;~ 18ED:03E5
cs=0x18ed;eip=0x0003e7; 	J(JMP(loc_279a0));	// 46265 jmp     loc_279A0 ;~ 18ED:03E7
loc_2789a:
	// 7419 
cs=0x18ed;eip=0x0003ea; 	T(CMP(*(raddr(ss,bp+var_1d8)), 0x5D));	// 46269 cmp     [bp+var_1D8], 5Dh ; ']' ;~ 18ED:03EA
cs=0x18ed;eip=0x0003ef; 	J(JNZ(loc_278e2));	// 46270 jnz     short loc_278E2 ;~ 18ED:03EF
cs=0x18ed;eip=0x0003f1; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_82))));	// 46271 mov     si, [bp+var_82] ;~ 18ED:03F1
cs=0x18ed;eip=0x0003f5; 	X(MOV(*(raddr(ss,bp+si+var_80)), 0));	// 46272 mov     [bp+si+var_80], 0 ;~ 18ED:03F5
cs=0x18ed;eip=0x0003f9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 46273 mov     ax, [bp+arg_A] ;~ 18ED:03F9
cs=0x18ed;eip=0x0003fc; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1c6))));	// 46274 add     ax, [bp+var_1C6] ;~ 18ED:03FC
cs=0x18ed;eip=0x000400; 	X(PUSH(ax));	// 46275 push    ax ;~ 18ED:0400
cs=0x18ed;eip=0x000401; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 46276 push    [bp+arg_8] ;~ 18ED:0401
cs=0x18ed;eip=0x000404; 	T(ax = bp+var_80);	// 46277 lea     ax, [bp+var_80] ;~ 18ED:0404
cs=0x18ed;eip=0x000407; 	X(PUSH(ax));	// 46278 push    ax ;~ 18ED:0407
cs=0x18ed;eip=0x000408; 	J(CALLF(sub_345bc,0));	// 46279 call    sub_345BC ;~ 18ED:0408
cs=0x18ed;eip=0x00040d; 	T(ADD(sp, 6));	// 46280 add     sp, 6 ;~ 18ED:040D
cs=0x18ed;eip=0x000410; 	X(MOV(*(dw*)(raddr(ss,bp+var_82)), 0));	// 46281 mov     [bp+var_82], 0 ;~ 18ED:0410
cs=0x18ed;eip=0x000416; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1d6))));	// 46282 mov     ax, [bp+var_1D6] ;~ 18ED:0416
cs=0x18ed;eip=0x00041a; 	X(ADD(*(dw*)(raddr(ss,bp+var_1c6)), ax));	// 46283 add     [bp+var_1C6], ax ;~ 18ED:041A
loc_278ce:
	// 7420 
cs=0x18ed;eip=0x00041e; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_1d0)))));	// 46286 mov     ax, word ptr [bp+var_1D0] ;~ 18ED:041E
cs=0x18ed;eip=0x000422; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_1d0+2)))));	// 46287 mov     dx, word ptr [bp+var_1D0+2] ;~ 18ED:0422
cs=0x18ed;eip=0x000426; 	X(MOV(*(dw*)(raddr(ss,bp+var_9c)), ax));	// 46288 mov     [bp+var_9C], ax ;~ 18ED:0426
cs=0x18ed;eip=0x00042a; 	X(MOV(*(dw*)(raddr(ss,bp+var_9a)), dx));	// 46289 mov     [bp+var_9A], dx ;~ 18ED:042A
cs=0x18ed;eip=0x00042e; 	J(JMP(loc_2798a));	// 46290 jmp     loc_2798A ;~ 18ED:042E
loc_278e2:
	// 7421 
cs=0x18ed;eip=0x000432; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_1d0))));	// 46295 les     bx, [bp+var_1D0] ;~ 18ED:0432
cs=0x18ed;eip=0x000436; 	T(CMP(*(raddr(es,bx)), 0x7D));	// 46296 cmp     byte ptr es:[bx], 7Dh ; '}' ;~ 18ED:0436
cs=0x18ed;eip=0x00043a; 	J(JNZ(loc_27918));	// 46297 jnz     short loc_27918 ;~ 18ED:043A
cs=0x18ed;eip=0x00043c; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_82))));	// 46298 mov     si, [bp+var_82] ;~ 18ED:043C
cs=0x18ed;eip=0x000440; 	X(MOV(*(raddr(ss,bp+si+var_80)), 0));	// 46299 mov     [bp+si+var_80], 0 ;~ 18ED:0440
cs=0x18ed;eip=0x000444; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 46300 mov     ax, [bp+arg_A] ;~ 18ED:0444
cs=0x18ed;eip=0x000447; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1c6))));	// 46301 add     ax, [bp+var_1C6] ;~ 18ED:0447
cs=0x18ed;eip=0x00044b; 	X(PUSH(ax));	// 46302 push    ax ;~ 18ED:044B
cs=0x18ed;eip=0x00044c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 46303 push    [bp+arg_8] ;~ 18ED:044C
cs=0x18ed;eip=0x00044f; 	T(ax = bp+var_80);	// 46304 lea     ax, [bp+var_80] ;~ 18ED:044F
cs=0x18ed;eip=0x000452; 	X(PUSH(ax));	// 46305 push    ax ;~ 18ED:0452
cs=0x18ed;eip=0x000453; 	J(CALLF(sub_345bc,0));	// 46306 call    sub_345BC ;~ 18ED:0453
cs=0x18ed;eip=0x000458; 	T(ADD(sp, 6));	// 46307 add     sp, 6 ;~ 18ED:0458
cs=0x18ed;eip=0x00045b; 	X(MOV(*(dw*)(raddr(ss,bp+var_82)), 0));	// 46308 mov     [bp+var_82], 0 ;~ 18ED:045B
cs=0x18ed;eip=0x000461; 	X(ADD(*(dw*)(raddr(ss,bp+var_1c6)), 4));	// 46309 add     [bp+var_1C6], 4 ;~ 18ED:0461
cs=0x18ed;eip=0x000466; 	J(JMP(loc_278ce));	// 46310 jmp     short loc_278CE ;~ 18ED:0466
loc_27918:
	// 7422 
cs=0x18ed;eip=0x000468; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_1d0))));	// 46314 les     bx, [bp+var_1D0] ;~ 18ED:0468
cs=0x18ed;eip=0x00046c; 	T(CMP(*(raddr(es,bx)), 0x40));	// 46315 cmp     byte ptr es:[bx], 40h ; '@' ;~ 18ED:046C
cs=0x18ed;eip=0x000470; 	J(JNZ(loc_27978));	// 46316 jnz     short loc_27978 ;~ 18ED:0470
cs=0x18ed;eip=0x000472; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 3));	// 46317 cmp     [bp+arg_0], 3 ;~ 18ED:0472
cs=0x18ed;eip=0x000476; 	J(JNZ(loc_2796a));	// 46318 jnz     short loc_2796A ;~ 18ED:0476
cs=0x18ed;eip=0x000478; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_82))));	// 46319 mov     si, [bp+var_82] ;~ 18ED:0478
cs=0x18ed;eip=0x00047c; 	X(MOV(*(raddr(ss,bp+si+var_80)), 0));	// 46320 mov     [bp+si+var_80], 0 ;~ 18ED:047C
cs=0x18ed;eip=0x000480; 	T(ax = bp+var_80);	// 46321 lea     ax, [bp+var_80] ;~ 18ED:0480
cs=0x18ed;eip=0x000483; 	X(PUSH(ax));	// 46322 push    ax ;~ 18ED:0483
cs=0x18ed;eip=0x000484; 	J(CALLF(font_op2,0));	// 46323 call    font_op2 ;~ 18ED:0484
cs=0x18ed;eip=0x000489; 	T(ADD(sp, 2));	// 46324 add     sp, 2 ;~ 18ED:0489
cs=0x18ed;eip=0x00048c; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 46325 add     ax, [bp+arg_8] ;~ 18ED:048C
cs=0x18ed;eip=0x00048f; 	T(MOV(cx, ax));	// 46326 mov     cx, ax ;~ 18ED:048F
cs=0x18ed;eip=0x000491; 	T(MOV(al, *(raddr(ss,bp+var_9e))));	// 46327 mov     al, [bp+var_9E] ;~ 18ED:0491
cs=0x18ed;eip=0x000495; 	T(CBW);	// 46328 cbw ;~ 18ED:0495
cs=0x18ed;eip=0x000496; 	T(MOV(bx, ax));	// 46329 mov     bx, ax ;~ 18ED:0496
cs=0x18ed;eip=0x000498; 	T(SHL(bx, 1));	// 46330 shl     bx, 1 ;~ 18ED:0498
cs=0x18ed;eip=0x00049a; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_e))));	// 46331 mov     si, [bp+arg_E] ;~ 18ED:049A
cs=0x18ed;eip=0x00049d; 	X(MOV(*(dw*)(raddr(ds,bx+si)), cx));	// 46332 mov     [bx+si], cx ;~ 18ED:049D
cs=0x18ed;eip=0x00049f; 	T(MOV(al, *(raddr(ss,bp+var_9e))));	// 46333 mov     al, [bp+var_9E] ;~ 18ED:049F
cs=0x18ed;eip=0x0004a3; 	T(CBW);	// 46334 cbw ;~ 18ED:04A3
cs=0x18ed;eip=0x0004a4; 	T(MOV(si, ax));	// 46335 mov     si, ax ;~ 18ED:04A4
cs=0x18ed;eip=0x0004a6; 	T(SHL(si, 1));	// 46336 shl     si, 1 ;~ 18ED:04A6
cs=0x18ed;eip=0x0004a8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_e))));	// 46337 mov     bx, [bp+arg_E] ;~ 18ED:04A8
cs=0x18ed;eip=0x0004ab; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 46338 mov     ax, [bp+arg_A] ;~ 18ED:04AB
cs=0x18ed;eip=0x0004ae; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1c6))));	// 46339 add     ax, [bp+var_1C6] ;~ 18ED:04AE
cs=0x18ed;eip=0x0004b2; 	X(MOV(*(dw*)(raddr(ds,bx+si+2)), ax));	// 46340 mov     [bx+si+2], ax ;~ 18ED:04B2
cs=0x18ed;eip=0x0004b5; 	X(ADD(*(raddr(ss,bp+var_9e)), 2));	// 46341 add     [bp+var_9E], 2 ;~ 18ED:04B5
loc_2796a:
	// 7423 
cs=0x18ed;eip=0x0004ba; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_82))));	// 46344 mov     si, [bp+var_82] ;~ 18ED:04BA
cs=0x18ed;eip=0x0004be; 	X(INC(*(dw*)(raddr(ss,bp+var_82))));	// 46345 inc     [bp+var_82] ;~ 18ED:04BE
cs=0x18ed;eip=0x0004c2; 	X(MOV(*(raddr(ss,bp+si+var_80)), 0x20));	// 46346 mov     [bp+si+var_80], 20h ; ' ' ;~ 18ED:04C2
cs=0x18ed;eip=0x0004c6; 	J(JMP(loc_2798a));	// 46347 jmp     short loc_2798A ;~ 18ED:04C6
loc_27978:
	// 7424 
cs=0x18ed;eip=0x0004c8; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_1d0))));	// 46351 les     bx, [bp+var_1D0] ;~ 18ED:04C8
cs=0x18ed;eip=0x0004cc; 	T(MOV(al, *(raddr(es,bx))));	// 46352 mov     al, es:[bx] ;~ 18ED:04CC
cs=0x18ed;eip=0x0004cf; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_82))));	// 46353 mov     si, [bp+var_82] ;~ 18ED:04CF
cs=0x18ed;eip=0x0004d3; 	X(INC(*(dw*)(raddr(ss,bp+var_82))));	// 46354 inc     [bp+var_82] ;~ 18ED:04D3
cs=0x18ed;eip=0x0004d7; 	X(MOV(*(raddr(ss,bp+si+var_80)), al));	// 46355 mov     [bp+si+var_80], al ;~ 18ED:04D7
loc_2798a:
	// 7425 
cs=0x18ed;eip=0x0004da; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_1d0)))));	// 46359 inc     word ptr [bp+var_1D0] ;~ 18ED:04DA
loc_2798e:
	// 7426 
cs=0x18ed;eip=0x0004de; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_1d0))));	// 46362 les     bx, [bp+var_1D0] ;~ 18ED:04DE
cs=0x18ed;eip=0x0004e2; 	T(MOV(al, *(raddr(es,bx))));	// 46363 mov     al, es:[bx] ;~ 18ED:04E2
cs=0x18ed;eip=0x0004e5; 	X(MOV(*(raddr(ss,bp+var_1d8)), al));	// 46364 mov     [bp+var_1D8], al ;~ 18ED:04E5
cs=0x18ed;eip=0x0004e9; 	T(OR(al, al));	// 46365 or      al, al ;~ 18ED:04E9
cs=0x18ed;eip=0x0004eb; 	J(JZ(loc_279a0));	// 46366 jz      short loc_279A0 ;~ 18ED:04EB
cs=0x18ed;eip=0x0004ed; 	J(JMP(loc_27890));	// 46367 jmp     loc_27890 ;~ 18ED:04ED
loc_279a0:
	// 7427 
cs=0x18ed;eip=0x0004f0; 	X(MOV(*(raddr(ss,bp+var_140)), 0));	// 46372 mov     [bp+var_140], 0 ;~ 18ED:04F0
cs=0x18ed;eip=0x0004f5; 	J(JMP(loc_27b08));	// 46373 jmp     loc_27B08 ;~ 18ED:04F5
loc_279a8:
	// 7428 
cs=0x18ed;eip=0x0004f8; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_1d0)))));	// 46377 inc     word ptr [bp+var_1D0] ;~ 18ED:04F8
cs=0x18ed;eip=0x0004fc; 	T(MOV(al, *(raddr(ss,bp+var_140))));	// 46378 mov     al, [bp+var_140] ;~ 18ED:04FC
cs=0x18ed;eip=0x000500; 	T(CBW);	// 46379 cbw ;~ 18ED:0500
cs=0x18ed;eip=0x000501; 	T(MOV(si, ax));	// 46380 mov     si, ax ;~ 18ED:0501
cs=0x18ed;eip=0x000503; 	T(MOV(bx, si));	// 46381 mov     bx, si ;~ 18ED:0503
cs=0x18ed;eip=0x000505; 	T(SHL(bx, 1));	// 46382 shl     bx, 1 ;~ 18ED:0505
cs=0x18ed;eip=0x000507; 	T(SHL(bx, 1));	// 46383 shl     bx, 1 ;~ 18ED:0507
cs=0x18ed;eip=0x000509; 	T(ADD(bx, bp));	// 46384 add     bx, bp ;~ 18ED:0509
cs=0x18ed;eip=0x00050b; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_1d0)))));	// 46385 mov     ax, word ptr [bp+var_1D0] ;~ 18ED:050B
cs=0x18ed;eip=0x00050f; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_1d0+2)))));	// 46386 mov     dx, word ptr [bp+var_1D0+2] ;~ 18ED:050F
cs=0x18ed;eip=0x000513; 	X(MOV(*(dw*)(raddr(ds,bx-0x13E)), ax));	// 46387 mov     [bx-13Eh], ax ;~ 18ED:0513
cs=0x18ed;eip=0x000517; 	X(MOV(*(dw*)(raddr(ds,bx-0x13C)), dx));	// 46388 mov     [bx-13Ch], dx ;~ 18ED:0517
cs=0x18ed;eip=0x00051b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_82))));	// 46389 mov     bx, [bp+var_82] ;~ 18ED:051B
cs=0x18ed;eip=0x00051f; 	T(ADD(bx, bp));	// 46390 add     bx, bp ;~ 18ED:051F
cs=0x18ed;eip=0x000521; 	X(MOV(*(raddr(ds,bx-0x80)), 0));	// 46391 mov     byte ptr [bx-80h], 0 ;~ 18ED:0521
cs=0x18ed;eip=0x000525; 	T(ax = bp+var_80);	// 46392 lea     ax, [bp+var_80] ;~ 18ED:0525
cs=0x18ed;eip=0x000528; 	X(PUSH(ax));	// 46393 push    ax ;~ 18ED:0528
cs=0x18ed;eip=0x000529; 	J(CALLF(font_op2,0));	// 46394 call    font_op2 ;~ 18ED:0529
cs=0x18ed;eip=0x00052e; 	T(ADD(sp, 2));	// 46395 add     sp, 2 ;~ 18ED:052E
cs=0x18ed;eip=0x000531; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 46396 add     ax, [bp+arg_8] ;~ 18ED:0531
cs=0x18ed;eip=0x000534; 	T(MOV(bx, si));	// 46397 mov     bx, si ;~ 18ED:0534
cs=0x18ed;eip=0x000536; 	T(SHL(bx, 1));	// 46398 shl     bx, 1 ;~ 18ED:0536
cs=0x18ed;eip=0x000538; 	T(ADD(bx, bp));	// 46399 add     bx, bp ;~ 18ED:0538
cs=0x18ed;eip=0x00053a; 	X(MOV(*(dw*)(raddr(ds,bx-0x28)), ax));	// 46400 mov     [bx-28h], ax ;~ 18ED:053A
cs=0x18ed;eip=0x00053d; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_a))));	// 46401 mov     si, [bp+arg_A] ;~ 18ED:053D
cs=0x18ed;eip=0x000540; 	T(ADD(si, *(dw*)(raddr(ss,bp+var_1c6))));	// 46402 add     si, [bp+var_1C6] ;~ 18ED:0540
cs=0x18ed;eip=0x000544; 	T(MOV(al, *(raddr(ss,bp+var_140))));	// 46403 mov     al, [bp+var_140] ;~ 18ED:0544
cs=0x18ed;eip=0x000548; 	T(CBW);	// 46404 cbw ;~ 18ED:0548
cs=0x18ed;eip=0x000549; 	T(MOV(di, ax));	// 46405 mov     di, ax ;~ 18ED:0549
cs=0x18ed;eip=0x00054b; 	T(SHL(di, 1));	// 46406 shl     di, 1 ;~ 18ED:054B
cs=0x18ed;eip=0x00054d; 	T(ADD(di, bp));	// 46407 add     di, bp ;~ 18ED:054D
cs=0x18ed;eip=0x00054f; 	X(MOV(*(dw*)(raddr(ds,di-0x1BE)), si));	// 46408 mov     [di-1BEh], si ;~ 18ED:054F
cs=0x18ed;eip=0x000553; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1d6))));	// 46409 mov     ax, [bp+var_1D6] ;~ 18ED:0553
cs=0x18ed;eip=0x000557; 	T(ADD(ax, si));	// 46410 add     ax, si ;~ 18ED:0557
cs=0x18ed;eip=0x000559; 	X(MOV(*(dw*)(raddr(ds,di-0x0EE)), ax));	// 46411 mov     [di-0EEh], ax ;~ 18ED:0559
cs=0x18ed;eip=0x00055d; 	X(MOV(*(raddr(ss,bp+var_1ca)), 0));	// 46412 mov     [bp+var_1CA], 0 ;~ 18ED:055D
cs=0x18ed;eip=0x000562; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_82))));	// 46413 mov     bx, [bp+var_82] ;~ 18ED:0562
cs=0x18ed;eip=0x000566; 	X(INC(*(dw*)(raddr(ss,bp+var_82))));	// 46414 inc     [bp+var_82] ;~ 18ED:0566
cs=0x18ed;eip=0x00056a; 	T(ADD(bx, bp));	// 46415 add     bx, bp ;~ 18ED:056A
cs=0x18ed;eip=0x00056c; 	X(MOV(*(raddr(ds,bx-0x80)), 0x20));	// 46416 mov     byte ptr [bx-80h], 20h ; ' ' ;~ 18ED:056C
cs=0x18ed;eip=0x000570; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c2)), 0));	// 46417 mov     [bp+var_1C2], 0 ;~ 18ED:0570
cs=0x18ed;eip=0x000576; 	J(JMP(loc_27aae));	// 46418 jmp     loc_27AAE ;~ 18ED:0576
loc_27a2a:
	// 7429 
cs=0x18ed;eip=0x00057a; 	T(CMP(*(raddr(ss,bp+var_1d8)), 0x5B));	// 46423 cmp     [bp+var_1D8], 5Bh ; '[' ;~ 18ED:057A
cs=0x18ed;eip=0x00057f; 	J(JNZ(loc_27a34));	// 46424 jnz     short loc_27A34 ;~ 18ED:057F
cs=0x18ed;eip=0x000581; 	J(JMP(loc_27ac0));	// 46425 jmp     loc_27AC0 ;~ 18ED:0581
loc_27a34:
	// 7430 
cs=0x18ed;eip=0x000584; 	T(CMP(*(raddr(ss,bp+var_1d8)), 0x5D));	// 46429 cmp     [bp+var_1D8], 5Dh ; ']' ;~ 18ED:0584
cs=0x18ed;eip=0x000589; 	J(JNZ(loc_27a64));	// 46430 jnz     short loc_27A64 ;~ 18ED:0589
cs=0x18ed;eip=0x00058b; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_82))));	// 46431 mov     si, [bp+var_82] ;~ 18ED:058B
cs=0x18ed;eip=0x00058f; 	X(MOV(*(raddr(ss,bp+si+var_80)), 0));	// 46432 mov     [bp+si+var_80], 0 ;~ 18ED:058F
cs=0x18ed;eip=0x000593; 	T(ax = bp+var_80);	// 46433 lea     ax, [bp+var_80] ;~ 18ED:0593
cs=0x18ed;eip=0x000596; 	X(PUSH(ax));	// 46434 push    ax ;~ 18ED:0596
cs=0x18ed;eip=0x000597; 	J(CALLF(font_op2,0));	// 46435 call    font_op2 ;~ 18ED:0597
cs=0x18ed;eip=0x00059c; 	T(ADD(sp, 2));	// 46436 add     sp, 2 ;~ 18ED:059C
cs=0x18ed;eip=0x00059f; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c2)), ax));	// 46437 mov     [bp+var_1C2], ax ;~ 18ED:059F
cs=0x18ed;eip=0x0005a3; 	X(MOV(*(dw*)(raddr(ss,bp+var_82)), 0));	// 46438 mov     [bp+var_82], 0 ;~ 18ED:05A3
cs=0x18ed;eip=0x0005a9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1d6))));	// 46439 mov     ax, [bp+var_1D6] ;~ 18ED:05A9
cs=0x18ed;eip=0x0005ad; 	X(ADD(*(dw*)(raddr(ss,bp+var_1c6)), ax));	// 46440 add     [bp+var_1C6], ax ;~ 18ED:05AD
cs=0x18ed;eip=0x0005b1; 	J(JMP(loc_27aaa));	// 46441 jmp     short loc_27AAA ;~ 18ED:05B1
loc_27a64:
	// 7431 
cs=0x18ed;eip=0x0005b4; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_1d0))));	// 46446 les     bx, [bp+var_1D0] ;~ 18ED:05B4
cs=0x18ed;eip=0x0005b8; 	T(CMP(*(raddr(es,bx)), 0x7D));	// 46447 cmp     byte ptr es:[bx], 7Dh ; '}' ;~ 18ED:05B8
cs=0x18ed;eip=0x0005bc; 	J(JNZ(loc_27a94));	// 46448 jnz     short loc_27A94 ;~ 18ED:05BC
cs=0x18ed;eip=0x0005be; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_82))));	// 46449 mov     si, [bp+var_82] ;~ 18ED:05BE
cs=0x18ed;eip=0x0005c2; 	X(MOV(*(raddr(ss,bp+si+var_80)), 0));	// 46450 mov     [bp+si+var_80], 0 ;~ 18ED:05C2
cs=0x18ed;eip=0x0005c6; 	T(ax = bp+var_80);	// 46451 lea     ax, [bp+var_80] ;~ 18ED:05C6
cs=0x18ed;eip=0x0005c9; 	X(PUSH(ax));	// 46452 push    ax ;~ 18ED:05C9
cs=0x18ed;eip=0x0005ca; 	J(CALLF(font_op2,0));	// 46453 call    font_op2 ;~ 18ED:05CA
cs=0x18ed;eip=0x0005cf; 	T(ADD(sp, 2));	// 46454 add     sp, 2 ;~ 18ED:05CF
cs=0x18ed;eip=0x0005d2; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c2)), ax));	// 46455 mov     [bp+var_1C2], ax ;~ 18ED:05D2
cs=0x18ed;eip=0x0005d6; 	X(MOV(*(dw*)(raddr(ss,bp+var_82)), 0));	// 46456 mov     [bp+var_82], 0 ;~ 18ED:05D6
cs=0x18ed;eip=0x0005dc; 	X(ADD(*(dw*)(raddr(ss,bp+var_1c6)), 3));	// 46457 add     [bp+var_1C6], 3 ;~ 18ED:05DC
cs=0x18ed;eip=0x0005e1; 	J(JMP(loc_27aaa));	// 46458 jmp     short loc_27AAA ;~ 18ED:05E1
loc_27a94:
	// 7432 
cs=0x18ed;eip=0x0005e4; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_1d0))));	// 46463 les     bx, [bp+var_1D0] ;~ 18ED:05E4
cs=0x18ed;eip=0x0005e8; 	T(MOV(al, *(raddr(es,bx))));	// 46464 mov     al, es:[bx] ;~ 18ED:05E8
cs=0x18ed;eip=0x0005eb; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_82))));	// 46465 mov     si, [bp+var_82] ;~ 18ED:05EB
cs=0x18ed;eip=0x0005ef; 	X(INC(*(dw*)(raddr(ss,bp+var_82))));	// 46466 inc     [bp+var_82] ;~ 18ED:05EF
cs=0x18ed;eip=0x0005f3; 	X(MOV(*(raddr(ss,bp+si+var_80)), al));	// 46467 mov     [bp+si+var_80], al ;~ 18ED:05F3
cs=0x18ed;eip=0x0005f6; 	X(INC(*(raddr(ss,bp+var_1ca))));	// 46468 inc     [bp+var_1CA] ;~ 18ED:05F6
loc_27aaa:
	// 7433 
cs=0x18ed;eip=0x0005fa; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_1d0)))));	// 46472 inc     word ptr [bp+var_1D0] ;~ 18ED:05FA
loc_27aae:
	// 7434 
cs=0x18ed;eip=0x0005fe; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_1d0))));	// 46475 les     bx, [bp+var_1D0] ;~ 18ED:05FE
cs=0x18ed;eip=0x000602; 	T(MOV(al, *(raddr(es,bx))));	// 46476 mov     al, es:[bx] ;~ 18ED:0602
cs=0x18ed;eip=0x000605; 	X(MOV(*(raddr(ss,bp+var_1d8)), al));	// 46477 mov     [bp+var_1D8], al ;~ 18ED:0605
cs=0x18ed;eip=0x000609; 	T(OR(al, al));	// 46478 or      al, al ;~ 18ED:0609
cs=0x18ed;eip=0x00060b; 	J(JZ(loc_27ac0));	// 46479 jz      short loc_27AC0 ;~ 18ED:060B
cs=0x18ed;eip=0x00060d; 	J(JMP(loc_27a2a));	// 46480 jmp     loc_27A2A ;~ 18ED:060D
loc_27ac0:
	// 7435 
cs=0x18ed;eip=0x000610; 	T(MOV(al, *(raddr(ss,bp+var_140))));	// 46485 mov     al, [bp+var_140] ;~ 18ED:0610
cs=0x18ed;eip=0x000614; 	T(CBW);	// 46486 cbw ;~ 18ED:0614
cs=0x18ed;eip=0x000615; 	T(MOV(si, ax));	// 46487 mov     si, ax ;~ 18ED:0615
cs=0x18ed;eip=0x000617; 	T(MOV(al, *(raddr(ss,bp+var_1ca))));	// 46488 mov     al, [bp+var_1CA] ;~ 18ED:0617
cs=0x18ed;eip=0x00061b; 	X(MOV(*(raddr(ss,bp+si+var_98)), al));	// 46489 mov     [bp+si+var_98], al ;~ 18ED:061B
cs=0x18ed;eip=0x00061f; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_82))));	// 46490 mov     si, [bp+var_82] ;~ 18ED:061F
cs=0x18ed;eip=0x000623; 	X(MOV(*(raddr(ss,bp+si+var_80)), 0));	// 46491 mov     [bp+si+var_80], 0 ;~ 18ED:0623
cs=0x18ed;eip=0x000627; 	T(CMP(*(dw*)(raddr(ss,bp+var_1c2)), 0));	// 46492 cmp     [bp+var_1C2], 0 ;~ 18ED:0627
cs=0x18ed;eip=0x00062c; 	J(JNZ(loc_27aee));	// 46493 jnz     short loc_27AEE ;~ 18ED:062C
cs=0x18ed;eip=0x00062e; 	T(ax = bp+var_80);	// 46494 lea     ax, [bp+var_80] ;~ 18ED:062E
cs=0x18ed;eip=0x000631; 	X(PUSH(ax));	// 46495 push    ax ;~ 18ED:0631
cs=0x18ed;eip=0x000632; 	J(CALLF(font_op2,0));	// 46496 call    font_op2 ;~ 18ED:0632
cs=0x18ed;eip=0x000637; 	T(ADD(sp, 2));	// 46497 add     sp, 2 ;~ 18ED:0637
cs=0x18ed;eip=0x00063a; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c2)), ax));	// 46498 mov     [bp+var_1C2], ax ;~ 18ED:063A
loc_27aee:
	// 7436 
cs=0x18ed;eip=0x00063e; 	T(MOV(al, *(raddr(ss,bp+var_140))));	// 46501 mov     al, [bp+var_140] ;~ 18ED:063E
cs=0x18ed;eip=0x000642; 	T(CBW);	// 46502 cbw ;~ 18ED:0642
cs=0x18ed;eip=0x000643; 	T(MOV(si, ax));	// 46503 mov     si, ax ;~ 18ED:0643
cs=0x18ed;eip=0x000645; 	T(SHL(si, 1));	// 46504 shl     si, 1 ;~ 18ED:0645
cs=0x18ed;eip=0x000647; 	T(ADD(si, bp));	// 46505 add     si, bp ;~ 18ED:0647
cs=0x18ed;eip=0x000649; 	T(MOV(ax, *(dw*)(raddr(ds,si-0x28))));	// 46506 mov     ax, [si-28h] ;~ 18ED:0649
cs=0x18ed;eip=0x00064c; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1c2))));	// 46507 add     ax, [bp+var_1C2] ;~ 18ED:064C
cs=0x18ed;eip=0x000650; 	X(MOV(*(dw*)(raddr(ds,si-0x0C6)), ax));	// 46508 mov     [si-0C6h], ax ;~ 18ED:0650
cs=0x18ed;eip=0x000654; 	X(INC(*(raddr(ss,bp+var_140))));	// 46509 inc     [bp+var_140] ;~ 18ED:0654
loc_27b08:
	// 7437 
cs=0x18ed;eip=0x000658; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_1d0))));	// 46512 les     bx, [bp+var_1D0] ;~ 18ED:0658
cs=0x18ed;eip=0x00065c; 	T(CMP(*(raddr(es,bx)), 0x5B));	// 46513 cmp     byte ptr es:[bx], 5Bh ; '[' ;~ 18ED:065C
cs=0x18ed;eip=0x000660; 	J(JNZ(loc_27b15));	// 46514 jnz     short loc_27B15 ;~ 18ED:0660
cs=0x18ed;eip=0x000662; 	J(JMP(loc_279a8));	// 46515 jmp     loc_279A8 ;~ 18ED:0662
loc_27b15:
	// 7438 
cs=0x18ed;eip=0x000665; 	T(CMP(*(raddr(ss,bp+var_140)), 2));	// 46519 cmp     [bp+var_140], 2 ;~ 18ED:0665
cs=0x18ed;eip=0x00066a; 	J(JLE(loc_27b56));	// 46520 jle     short loc_27B56 ;~ 18ED:066A
cs=0x18ed;eip=0x00066c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_26))));	// 46521 mov     ax, [bp+var_26] ;~ 18ED:066C
cs=0x18ed;eip=0x00066f; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), ax));	// 46522 cmp     [bp+var_28], ax ;~ 18ED:066F
cs=0x18ed;eip=0x000672; 	J(JNZ(loc_27b56));	// 46523 jnz     short loc_27B56 ;~ 18ED:0672
cs=0x18ed;eip=0x000674; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_24))));	// 46524 mov     ax, [bp+var_24] ;~ 18ED:0674
cs=0x18ed;eip=0x000677; 	T(CMP(*(dw*)(raddr(ss,bp+var_26)), ax));	// 46525 cmp     [bp+var_26], ax ;~ 18ED:0677
cs=0x18ed;eip=0x00067a; 	J(JNZ(loc_27b56));	// 46526 jnz     short loc_27B56 ;~ 18ED:067A
cs=0x18ed;eip=0x00067c; 	X(MOV(*(dw*)(raddr(ss,bp+var_196)), 0));	// 46527 mov     [bp+var_196], 0 ;~ 18ED:067C
cs=0x18ed;eip=0x000682; 	J(JMP(loc_27b4b));	// 46528 jmp     short loc_27B4B ;~ 18ED:0682
loc_27b34:
	// 7439 
cs=0x18ed;eip=0x000684; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_196))));	// 46532 mov     si, [bp+var_196] ;~ 18ED:0684
cs=0x18ed;eip=0x000688; 	T(SHL(si, 1));	// 46533 shl     si, 1 ;~ 18ED:0688
cs=0x18ed;eip=0x00068a; 	T(ADD(si, bp));	// 46534 add     si, bp ;~ 18ED:068A
cs=0x18ed;eip=0x00068c; 	T(MOV(ax, *(dw*)(raddr(ds,si-0x28))));	// 46535 mov     ax, [si-28h] ;~ 18ED:068C
cs=0x18ed;eip=0x00068f; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_194))));	// 46536 add     ax, [bp+var_194] ;~ 18ED:068F
cs=0x18ed;eip=0x000693; 	X(MOV(*(dw*)(raddr(ds,si-0x0C6)), ax));	// 46537 mov     [si-0C6h], ax ;~ 18ED:0693
cs=0x18ed;eip=0x000697; 	X(INC(*(dw*)(raddr(ss,bp+var_196))));	// 46538 inc     [bp+var_196] ;~ 18ED:0697
loc_27b4b:
	// 7440 
cs=0x18ed;eip=0x00069b; 	T(MOV(al, *(raddr(ss,bp+var_140))));	// 46541 mov     al, [bp+var_140] ;~ 18ED:069B
cs=0x18ed;eip=0x00069f; 	T(CBW);	// 46542 cbw ;~ 18ED:069F
cs=0x18ed;eip=0x0006a0; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_196))));	// 46543 cmp     ax, [bp+var_196] ;~ 18ED:06A0
cs=0x18ed;eip=0x0006a4; 	J(JG(loc_27b34));	// 46544 jg      short loc_27B34 ;~ 18ED:06A4
loc_27b56:
	// 7441 
cs=0x18ed;eip=0x0006a6; 	X(PUSH(cs));	// 46548 push    cs ;~ 18ED:06A6
cs=0x18ed;eip=0x0006a7; 	J(CALL(mouse_draw_transparent_check,0));	// 46549 call    near ptr mouse_draw_transparent_check ;~ 18ED:06A7
cs=0x18ed;eip=0x0006aa; 	X(MOV(*(raddr(ss,bp+var_1d4)), 1));	// 46550 mov     [bp+var_1D4], 1 ;~ 18ED:06AA
cs=0x18ed;eip=0x0006af; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 46551 mov     ax, [bp+arg_0] ;~ 18ED:06AF
cs=0x18ed;eip=0x0006b2; 	T(OR(ax, ax));	// 46552 or      ax, ax ;~ 18ED:06B2
cs=0x18ed;eip=0x0006b4; 	J(JZ(loc_27bbc));	// 46553 jz      short loc_27BBC ;~ 18ED:06B4
cs=0x18ed;eip=0x0006b6; 	T(CMP(ax, 1));	// 46554 cmp     ax, 1 ;~ 18ED:06B6
cs=0x18ed;eip=0x0006b9; 	J(JZ(loc_27b98));	// 46555 jz      short loc_27B98 ;~ 18ED:06B9
cs=0x18ed;eip=0x0006bb; 	T(CMP(ax, 2));	// 46556 cmp     ax, 2 ;~ 18ED:06BB
cs=0x18ed;eip=0x0006be; 	J(JZ(loc_27bd4));	// 46557 jz      short loc_27BD4 ;~ 18ED:06BE
cs=0x18ed;eip=0x0006c0; 	T(CMP(ax, 3));	// 46558 cmp     ax, 3 ;~ 18ED:06C0
cs=0x18ed;eip=0x0006c3; 	J(JZ(loc_27bc4));	// 46559 jz      short loc_27BC4 ;~ 18ED:06C3
cs=0x18ed;eip=0x0006c5; 	T(CMP(ax, 4));	// 46560 cmp     ax, 4 ;~ 18ED:06C5
cs=0x18ed;eip=0x0006c8; 	J(JNZ(loc_27b88));	// 46561 jnz     short loc_27B88 ;~ 18ED:06C8
cs=0x18ed;eip=0x0006ca; 	T(MOV(ax, 8));	// 46562 mov     ax, 8 ;~ 18ED:06CA
cs=0x18ed;eip=0x0006cd; 	T(CWD);	// 46563 cwd ;~ 18ED:06CD
cs=0x18ed;eip=0x0006ce; 	X(PUSH(dx));	// 46564 push    dx ;~ 18ED:06CE
cs=0x18ed;eip=0x0006cf; 	X(PUSH(ax));	// 46565 push    ax ;~ 18ED:06CF
cs=0x18ed;eip=0x0006d0; 	J(CALLF(sub_2eb1e,0));	// 46566 call    sub_2EB1E ;~ 18ED:06D0
cs=0x18ed;eip=0x0006d5; 	T(ADD(sp, 4));	// 46567 add     sp, 4 ;~ 18ED:06D5
loc_27b88:
	// 7442 
cs=0x18ed;eip=0x0006d8; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 46571 cmp     [bp+arg_2], 0 ;~ 18ED:06D8
cs=0x18ed;eip=0x0006dc; 	J(JZ(loc_27b92));	// 46572 jz      short loc_27B92 ;~ 18ED:06DC
cs=0x18ed;eip=0x0006de; 	X(PUSH(cs));	// 46573 push    cs ;~ 18ED:06DE
cs=0x18ed;eip=0x0006df; 	J(CALL(sub_275c6,0));	// 46574 call    near ptr sub_275C6 ;~ 18ED:06DF
loc_27b92:
	// 7443 
cs=0x18ed;eip=0x0006e2; 	T(MOV(al, *(raddr(ss,bp+var_1d4))));	// 46577 mov     al, [bp+var_1D4] ;~ 18ED:06E2
cs=0x18ed;eip=0x0006e6; 	J(JMP(loc_27bcd));	// 46578 jmp     short loc_27BCD ;~ 18ED:06E6
loc_27b98:
	// 7444 
cs=0x18ed;eip=0x0006e8; 	X(PUSH(cs));	// 46583 push    cs ;~ 18ED:06E8
cs=0x18ed;eip=0x0006e9; 	J(CALL(timer_get_delta_alt,0));	// 46584 call    near ptr timer_get_delta_alt ;~ 18ED:06E9
cs=0x18ed;eip=0x0006ec; 	X(PUSH(ax));	// 46585 push    ax ;~ 18ED:06EC
cs=0x18ed;eip=0x0006ed; 	X(PUSH(cs));	// 46586 push    cs ;~ 18ED:06ED
cs=0x18ed;eip=0x0006ee; 	J(CALL(input_checking,0));	// 46587 call    near ptr input_checking ;~ 18ED:06EE
cs=0x18ed;eip=0x0006f1; 	T(ADD(sp, 2));	// 46588 add     sp, 2 ;~ 18ED:06F1
cs=0x18ed;eip=0x0006f4; 	X(MOV(*(dw*)(raddr(ss,bp+var_142)), ax));	// 46589 mov     [bp+var_142], ax ;~ 18ED:06F4
cs=0x18ed;eip=0x0006f8; 	T(OR(ax, ax));	// 46590 or      ax, ax ;~ 18ED:06F8
cs=0x18ed;eip=0x0006fa; 	J(JZ(loc_27b98));	// 46591 jz      short loc_27B98 ;~ 18ED:06FA
cs=0x18ed;eip=0x0006fc; 	T(CMP(ax, 0x1B));	// 46592 cmp     ax, 1Bh ;~ 18ED:06FC
cs=0x18ed;eip=0x0006ff; 	J(JNZ(loc_27bb6));	// 46593 jnz     short loc_27BB6 ;~ 18ED:06FF
cs=0x18ed;eip=0x000701; 	X(MOV(*(raddr(ss,bp+var_1d4)), 0));	// 46594 mov     [bp+var_1D4], 0 ;~ 18ED:0701
loc_27bb6:
	// 7445 
cs=0x18ed;eip=0x000706; 	X(PUSH(cs));	// 46597 push    cs ;~ 18ED:0706
cs=0x18ed;eip=0x000707; 	J(CALL(check_input,0));	// 46598 call    near ptr check_input ;~ 18ED:0707
cs=0x18ed;eip=0x00070a; 	J(JMP(loc_27b88));	// 46599 jmp     short loc_27B88 ;~ 18ED:070A
loc_27bbc:
	// 7446 
cs=0x18ed;eip=0x00070c; 	T(SUB(ax, ax));	// 46603 sub     ax, ax ;~ 18ED:070C
cs=0x18ed;eip=0x00070e; 	X(POP(si));	// 46604 pop     si ;~ 18ED:070E
cs=0x18ed;eip=0x00070f; 	X(POP(di));	// 46605 pop     di ;~ 18ED:070F
cs=0x18ed;eip=0x000710; 	T(MOV(sp, bp));	// 46606 mov     sp, bp ;~ 18ED:0710
cs=0x18ed;eip=0x000712; 	X(POP(bp));	// 46607 pop     bp ;~ 18ED:0712
cs=0x18ed;eip=0x000713; 	J(RETF(0));	// 46608 retf ;~ 18ED:0713
loc_27bc4:
	// 7447 
cs=0x18ed;eip=0x000714; 	T(MOV(al, *(raddr(ss,bp+var_9e))));	// 46612 mov     al, [bp+var_9E] ;~ 18ED:0714
cs=0x18ed;eip=0x000718; 	T(CBW);	// 46613 cbw ;~ 18ED:0718
cs=0x18ed;eip=0x000719; 	T(MOV(cl, 2));	// 46614 mov     cl, 2 ;~ 18ED:0719
cs=0x18ed;eip=0x00071b; 	T(IDIV1(cl));	// 46615 idiv    cl ;~ 18ED:071B
loc_27bcd:
	// 7448 
cs=0x18ed;eip=0x00071d; 	T(CBW);	// 46618 cbw ;~ 18ED:071D
cs=0x18ed;eip=0x00071e; 	X(POP(si));	// 46619 pop     si ;~ 18ED:071E
cs=0x18ed;eip=0x00071f; 	X(POP(di));	// 46620 pop     di ;~ 18ED:071F
cs=0x18ed;eip=0x000720; 	T(MOV(sp, bp));	// 46621 mov     sp, bp ;~ 18ED:0720
cs=0x18ed;eip=0x000722; 	X(POP(bp));	// 46622 pop     bp ;~ 18ED:0722
cs=0x18ed;eip=0x000723; 	J(RETF(0));	// 46623 retf ;~ 18ED:0723
loc_27bd4:
	// 7449 
cs=0x18ed;eip=0x000724; 	T(MOV(al, *(raddr(ss,bp+arg_10))));	// 46627 mov     al, [bp+arg_10] ;~ 18ED:0724
cs=0x18ed;eip=0x000727; 	X(MOV(*(raddr(ss,bp+var_1d4)), al));	// 46628 mov     [bp+var_1D4], al ;~ 18ED:0727
cs=0x18ed;eip=0x00072b; 	X(MOV(*(raddr(ss,bp+var_1c0)), 0x0FF));	// 46629 mov     [bp+var_1C0], 0FFh ;~ 18ED:072B
cs=0x18ed;eip=0x000730; 	X(PUSH(cs));	// 46630 push    cs ;~ 18ED:0730
cs=0x18ed;eip=0x000731; 	J(CALL(timer_get_delta_alt,0));	// 46631 call    near ptr timer_get_delta_alt ;~ 18ED:0731
cs=0x18ed;eip=0x000734; 	X(PUSH(cs));	// 46632 push    cs ;~ 18ED:0734
cs=0x18ed;eip=0x000735; 	J(CALL(mouse_draw_opaque_check,0));	// 46633 call    near ptr mouse_draw_opaque_check ;~ 18ED:0735
cs=0x18ed;eip=0x000738; 	T(CMP(*(raddr(ss,bp+var_140)), 2));	// 46634 cmp     [bp+var_140], 2 ;~ 18ED:0738
cs=0x18ed;eip=0x00073d; 	J(JNZ(loc_27c68));	// 46635 jnz     short loc_27C68 ;~ 18ED:073D
cs=0x18ed;eip=0x00073f; 	X(MOV(*(dw*)(raddr(ss,bp+var_196)), 0));	// 46636 mov     [bp+var_196], 0 ;~ 18ED:073F
loc_27bf5:
	// 7450 
cs=0x18ed;eip=0x000745; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_196))));	// 46639 mov     bx, [bp+var_196] ;~ 18ED:0745
cs=0x18ed;eip=0x000749; 	T(LES(si, *(dd*)(raddr(ss,bp+var_13e))));	// 46640 les     si, [bp+var_13E] ;~ 18ED:0749
cs=0x18ed;eip=0x00074d; 	T(MOV(al, *(raddr(es,bx+si))));	// 46641 mov     al, es:[bx+si] ;~ 18ED:074D
cs=0x18ed;eip=0x000750; 	T(SUB(ah, ah));	// 46642 sub     ah, ah ;~ 18ED:0750
cs=0x18ed;eip=0x000752; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c8)), ax));	// 46643 mov     [bp+var_1C8], ax ;~ 18ED:0752
cs=0x18ed;eip=0x000756; 	X(INC(*(dw*)(raddr(ss,bp+var_196))));	// 46644 inc     [bp+var_196] ;~ 18ED:0756
cs=0x18ed;eip=0x00075a; 	T(CMP(ax, 0x20));	// 46645 cmp     ax, 20h ; ' ' ;~ 18ED:075A
cs=0x18ed;eip=0x00075d; 	J(JZ(loc_27bf5));	// 46646 jz      short loc_27BF5 ;~ 18ED:075D
cs=0x18ed;eip=0x00075f; 	T(MOV(bx, ax));	// 46647 mov     bx, ax ;~ 18ED:075F
cs=0x18ed;eip=0x000761; 	T(TEST(*((g_ascii_props)+bx), 1));	// 46648 test    g_ascii_props[bx], 1 ;~ 18ED:0761
cs=0x18ed;eip=0x000766; 	J(JZ(loc_27c2c));	// 46649 jz      short loc_27C2C ;~ 18ED:0766
cs=0x18ed;eip=0x000768; 	T(TEST(*((g_ascii_props)+bx), 1));	// 46650 test    g_ascii_props[bx], 1 ;~ 18ED:0768
cs=0x18ed;eip=0x00076d; 	J(JZ(loc_27c26));	// 46651 jz      short loc_27C26 ;~ 18ED:076D
cs=0x18ed;eip=0x00076f; 	T(ADD(ax, 0x20));	// 46652 add     ax, 20h ; ' ' ;~ 18ED:076F
cs=0x18ed;eip=0x000772; 	J(JMP(loc_27c28));	// 46653 jmp     short loc_27C28 ;~ 18ED:0772
loc_27c26:
	// 7451 
cs=0x18ed;eip=0x000776; 	T(MOV(ax, bx));	// 46659 mov     ax, bx ;~ 18ED:0776
loc_27c28:
	// 7452 
cs=0x18ed;eip=0x000778; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c8)), ax));	// 46662 mov     [bp+var_1C8], ax ;~ 18ED:0778
loc_27c2c:
	// 7453 
cs=0x18ed;eip=0x00077c; 	X(MOV(*(dw*)(raddr(ss,bp+var_196)), 0));	// 46665 mov     [bp+var_196], 0 ;~ 18ED:077C
loc_27c32:
	// 7454 
cs=0x18ed;eip=0x000782; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_196))));	// 46668 mov     bx, [bp+var_196] ;~ 18ED:0782
cs=0x18ed;eip=0x000786; 	T(LES(si, *(dd*)(raddr(ss,bp+var_13a))));	// 46669 les     si, [bp+var_13A] ;~ 18ED:0786
cs=0x18ed;eip=0x00078a; 	T(MOV(al, *(raddr(es,bx+si))));	// 46670 mov     al, es:[bx+si] ;~ 18ED:078A
cs=0x18ed;eip=0x00078d; 	T(SUB(ah, ah));	// 46671 sub     ah, ah ;~ 18ED:078D
cs=0x18ed;eip=0x00078f; 	X(MOV(*(dw*)(raddr(ss,bp+var_1cc)), ax));	// 46672 mov     [bp+var_1CC], ax ;~ 18ED:078F
cs=0x18ed;eip=0x000793; 	X(INC(*(dw*)(raddr(ss,bp+var_196))));	// 46673 inc     [bp+var_196] ;~ 18ED:0793
cs=0x18ed;eip=0x000797; 	T(CMP(ax, 0x20));	// 46674 cmp     ax, 20h ; ' ' ;~ 18ED:0797
cs=0x18ed;eip=0x00079a; 	J(JZ(loc_27c32));	// 46675 jz      short loc_27C32 ;~ 18ED:079A
cs=0x18ed;eip=0x00079c; 	T(MOV(bx, ax));	// 46676 mov     bx, ax ;~ 18ED:079C
cs=0x18ed;eip=0x00079e; 	T(TEST(*((g_ascii_props)+bx), 1));	// 46677 test    g_ascii_props[bx], 1 ;~ 18ED:079E
cs=0x18ed;eip=0x0007a3; 	J(JZ(loc_27c68));	// 46678 jz      short loc_27C68 ;~ 18ED:07A3
cs=0x18ed;eip=0x0007a5; 	T(TEST(*((g_ascii_props)+bx), 1));	// 46679 test    g_ascii_props[bx], 1 ;~ 18ED:07A5
cs=0x18ed;eip=0x0007aa; 	J(JZ(loc_27c62));	// 46680 jz      short loc_27C62 ;~ 18ED:07AA
cs=0x18ed;eip=0x0007ac; 	T(ADD(ax, 0x20));	// 46681 add     ax, 20h ; ' ' ;~ 18ED:07AC
cs=0x18ed;eip=0x0007af; 	J(JMP(loc_27c64));	// 46682 jmp     short loc_27C64 ;~ 18ED:07AF
loc_27c62:
	// 7455 
cs=0x18ed;eip=0x0007b2; 	T(MOV(ax, bx));	// 46687 mov     ax, bx ;~ 18ED:07B2
loc_27c64:
	// 7456 
cs=0x18ed;eip=0x0007b4; 	X(MOV(*(dw*)(raddr(ss,bp+var_1cc)), ax));	// 46690 mov     [bp+var_1CC], ax ;~ 18ED:07B4
loc_27c68:
	// 7457 
cs=0x18ed;eip=0x0007b8; 	X(MOV(*(raddr(ss,bp+var_84)), 1));	// 46694 mov     [bp+var_84], 1 ;~ 18ED:07B8
loc_27c6d:
	// 7458 
cs=0x18ed;eip=0x0007bd; 	T(CMP(*(raddr(ss,bp+var_84)), 0));	// 46698 cmp     [bp+var_84], 0 ;~ 18ED:07BD
cs=0x18ed;eip=0x0007c2; 	J(JNZ(loc_27c77));	// 46699 jnz     short loc_27C77 ;~ 18ED:07C2
cs=0x18ed;eip=0x0007c4; 	J(JMP(loc_27b88));	// 46700 jmp     loc_27B88 ;~ 18ED:07C4
loc_27c77:
	// 7459 
cs=0x18ed;eip=0x0007c7; 	T(MOV(al, *(raddr(ss,bp+var_1c0))));	// 46704 mov     al, [bp+var_1C0] ;~ 18ED:07C7
cs=0x18ed;eip=0x0007cb; 	T(CMP(*(raddr(ss,bp+var_1d4)), al));	// 46705 cmp     [bp+var_1D4], al ;~ 18ED:07CB
cs=0x18ed;eip=0x0007cf; 	J(JNZ(loc_27c84));	// 46706 jnz     short loc_27C84 ;~ 18ED:07CF
cs=0x18ed;eip=0x0007d1; 	J(JMP(loc_27d6d));	// 46707 jmp     loc_27D6D ;~ 18ED:07D1
loc_27c84:
	// 7460 
cs=0x18ed;eip=0x0007d4; 	X(PUSH(cs));	// 46711 push    cs ;~ 18ED:07D4
cs=0x18ed;eip=0x0007d5; 	J(CALL(mouse_draw_opaque_check,0));	// 46712 call    near ptr mouse_draw_opaque_check ;~ 18ED:07D5
cs=0x18ed;eip=0x0007d8; 	X(MOV(*(dw*)(raddr(ss,bp+var_196)), 0));	// 46713 mov     [bp+var_196], 0 ;~ 18ED:07D8
cs=0x18ed;eip=0x0007de; 	J(JMP(loc_27d25));	// 46714 jmp     loc_27D25 ;~ 18ED:07DE
loc_27c92:
	// 7461 
cs=0x18ed;eip=0x0007e2; 	T(MOV(al, *(raddr(ss,bp+var_1d4))));	// 46720 mov     al, [bp+var_1D4] ;~ 18ED:07E2
cs=0x18ed;eip=0x0007e6; 	T(CBW);	// 46721 cbw ;~ 18ED:07E6
cs=0x18ed;eip=0x0007e7; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_196))));	// 46722 cmp     ax, [bp+var_196] ;~ 18ED:07E7
cs=0x18ed;eip=0x0007eb; 	J(JNZ(loc_27ca8));	// 46723 jnz     short loc_27CA8 ;~ 18ED:07EB
cs=0x18ed;eip=0x0007ed; 	X(PUSH(dialog_fnt_colour));	// 46724 push    dialog_fnt_colour ;~ 18ED:07ED
cs=0x18ed;eip=0x0007f1; 	X(PUSH(word_3eb90));	// 46725 push    word_3EB90 ;~ 18ED:07F1
cs=0x18ed;eip=0x0007f5; 	J(JMP(loc_27cb0));	// 46726 jmp     short loc_27CB0 ;~ 18ED:07F5
loc_27ca8:
	// 7462 
cs=0x18ed;eip=0x0007f8; 	X(PUSH(word_3eb90));	// 46731 push    word_3EB90 ;~ 18ED:07F8
cs=0x18ed;eip=0x0007fc; 	X(PUSH(dialog_fnt_colour));	// 46732 push    dialog_fnt_colour ;~ 18ED:07FC
loc_27cb0:
	// 7463 
cs=0x18ed;eip=0x000800; 	J(CALLF(font_set_unk,0));	// 46736 call    font_set_unk ;~ 18ED:0800
cs=0x18ed;eip=0x000805; 	T(ADD(sp, 4));	// 46737 add     sp, 4 ;~ 18ED:0805
cs=0x18ed;eip=0x000808; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_196))));	// 46738 mov     si, [bp+var_196] ;~ 18ED:0808
cs=0x18ed;eip=0x00080c; 	T(SHL(si, 1));	// 46739 shl     si, 1 ;~ 18ED:080C
cs=0x18ed;eip=0x00080e; 	T(SHL(si, 1));	// 46740 shl     si, 1 ;~ 18ED:080E
cs=0x18ed;eip=0x000810; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+si+var_13e)))));	// 46741 mov     ax, word ptr [bp+si+var_13E] ;~ 18ED:0810
cs=0x18ed;eip=0x000814; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+si+var_13e +2)))));	// 46742 mov     dx, word ptr [bp+si+var_13E+2] ;~ 18ED:0814
cs=0x18ed;eip=0x000818; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_1d0))), ax));	// 46743 mov     word ptr [bp+var_1D0], ax ;~ 18ED:0818
cs=0x18ed;eip=0x00081c; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_1d0+2))), dx));	// 46744 mov     word ptr [bp+var_1D0+2], dx ;~ 18ED:081C
cs=0x18ed;eip=0x000820; 	X(MOV(*(dw*)(raddr(ss,bp+var_82)), 0));	// 46745 mov     [bp+var_82], 0 ;~ 18ED:0820
cs=0x18ed;eip=0x000826; 	J(JMP(loc_27ced));	// 46746 jmp     short loc_27CED ;~ 18ED:0826
loc_27cd8:
	// 7464 
cs=0x18ed;eip=0x000828; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_82))));	// 46750 mov     bx, [bp+var_82] ;~ 18ED:0828
cs=0x18ed;eip=0x00082c; 	T(LES(si, *(dd*)(raddr(ss,bp+var_1d0))));	// 46751 les     si, [bp+var_1D0] ;~ 18ED:082C
cs=0x18ed;eip=0x000830; 	T(MOV(al, *(raddr(es,bx+si))));	// 46752 mov     al, es:[bx+si] ;~ 18ED:0830
cs=0x18ed;eip=0x000833; 	T(MOV(si, bx));	// 46753 mov     si, bx ;~ 18ED:0833
cs=0x18ed;eip=0x000835; 	X(MOV(*(raddr(ss,bp+si+var_192)), al));	// 46754 mov     [bp+si+var_192], al ;~ 18ED:0835
cs=0x18ed;eip=0x000839; 	X(INC(*(dw*)(raddr(ss,bp+var_82))));	// 46755 inc     [bp+var_82] ;~ 18ED:0839
loc_27ced:
	// 7465 
cs=0x18ed;eip=0x00083d; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_196))));	// 46758 mov     si, [bp+var_196] ;~ 18ED:083D
cs=0x18ed;eip=0x000841; 	T(MOV(al, *(raddr(ss,bp+si+var_98))));	// 46759 mov     al, [bp+si+var_98] ;~ 18ED:0841
cs=0x18ed;eip=0x000845; 	T(CBW);	// 46760 cbw ;~ 18ED:0845
cs=0x18ed;eip=0x000846; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_82))));	// 46761 cmp     ax, [bp+var_82] ;~ 18ED:0846
cs=0x18ed;eip=0x00084a; 	J(JG(loc_27cd8));	// 46762 jg      short loc_27CD8 ;~ 18ED:084A
cs=0x18ed;eip=0x00084c; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_82))));	// 46763 mov     di, [bp+var_82] ;~ 18ED:084C
cs=0x18ed;eip=0x000850; 	X(MOV(*(raddr(ss,bp+di+var_192)), 0));	// 46764 mov     [bp+di+var_192], 0 ;~ 18ED:0850
cs=0x18ed;eip=0x000855; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_196))));	// 46765 mov     si, [bp+var_196] ;~ 18ED:0855
cs=0x18ed;eip=0x000859; 	T(SHL(si, 1));	// 46766 shl     si, 1 ;~ 18ED:0859
cs=0x18ed;eip=0x00085b; 	T(ADD(si, bp));	// 46767 add     si, bp ;~ 18ED:085B
cs=0x18ed;eip=0x00085d; 	X(PUSH(*(dw*)(raddr(ds,si-0x1BE))));	// 46768 push    word ptr [si-1BEh] ;~ 18ED:085D
cs=0x18ed;eip=0x000861; 	X(PUSH(*(dw*)(raddr(ds,si-0x28))));	// 46769 push    word ptr [si-28h] ;~ 18ED:0861
cs=0x18ed;eip=0x000864; 	T(ax = bp+var_192);	// 46770 lea     ax, [bp+var_192] ;~ 18ED:0864
cs=0x18ed;eip=0x000868; 	X(PUSH(ax));	// 46771 push    ax ;~ 18ED:0868
cs=0x18ed;eip=0x000869; 	J(CALLF(sub_345bc,0));	// 46772 call    sub_345BC ;~ 18ED:0869
cs=0x18ed;eip=0x00086e; 	T(ADD(sp, 6));	// 46773 add     sp, 6 ;~ 18ED:086E
cs=0x18ed;eip=0x000871; 	X(INC(*(dw*)(raddr(ss,bp+var_196))));	// 46774 inc     [bp+var_196] ;~ 18ED:0871
loc_27d25:
	// 7466 
cs=0x18ed;eip=0x000875; 	T(MOV(al, *(raddr(ss,bp+var_140))));	// 46777 mov     al, [bp+var_140] ;~ 18ED:0875
cs=0x18ed;eip=0x000879; 	T(CBW);	// 46778 cbw ;~ 18ED:0879
cs=0x18ed;eip=0x00087a; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_196))));	// 46779 cmp     ax, [bp+var_196] ;~ 18ED:087A
cs=0x18ed;eip=0x00087e; 	J(JLE(loc_27d56));	// 46780 jle     short loc_27D56 ;~ 18ED:087E
cs=0x18ed;eip=0x000880; 	T(CMP(*(dw*)(raddr(ss,bp+arg_e)), 0));	// 46781 cmp     [bp+arg_E], 0 ;~ 18ED:0880
cs=0x18ed;eip=0x000884; 	J(JNZ(loc_27d39));	// 46782 jnz     short loc_27D39 ;~ 18ED:0884
cs=0x18ed;eip=0x000886; 	J(JMP(loc_27c92));	// 46783 jmp     loc_27C92 ;~ 18ED:0886
loc_27d39:
	// 7467 
cs=0x18ed;eip=0x000889; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_196))));	// 46787 mov     bx, [bp+var_196] ;~ 18ED:0889
cs=0x18ed;eip=0x00088d; 	T(SHL(bx, 1));	// 46788 shl     bx, 1 ;~ 18ED:088D
cs=0x18ed;eip=0x00088f; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_e))));	// 46789 mov     si, [bp+arg_E] ;~ 18ED:088F
cs=0x18ed;eip=0x000892; 	T(CMP(*(dw*)(raddr(ds,bx+si)), 0));	// 46790 cmp     word ptr [bx+si], 0 ;~ 18ED:0892
cs=0x18ed;eip=0x000895; 	J(JNZ(loc_27d4a));	// 46791 jnz     short loc_27D4A ;~ 18ED:0895
cs=0x18ed;eip=0x000897; 	J(JMP(loc_27c92));	// 46792 jmp     loc_27C92 ;~ 18ED:0897
loc_27d4a:
	// 7468 
cs=0x18ed;eip=0x00089a; 	X(PUSH(word_3eb90));	// 46796 push    word_3EB90 ;~ 18ED:089A
cs=0x18ed;eip=0x00089e; 	X(PUSH(performgraphcolor));	// 46797 push    performGraphColor ;~ 18ED:089E
cs=0x18ed;eip=0x0008a2; 	J(JMP(loc_27cb0));	// 46798 jmp     loc_27CB0 ;~ 18ED:08A2
loc_27d56:
	// 7469 
cs=0x18ed;eip=0x0008a6; 	X(PUSH(cs));	// 46803 push    cs ;~ 18ED:08A6
cs=0x18ed;eip=0x0008a7; 	J(CALL(mouse_draw_transparent_check,0));	// 46804 call    near ptr mouse_draw_transparent_check ;~ 18ED:08A7
cs=0x18ed;eip=0x0008aa; 	T(CMP(*(raddr(ss,bp+var_1c0)), 0x0FF));	// 46805 cmp     [bp+var_1C0], 0FFh ;~ 18ED:08AA
cs=0x18ed;eip=0x0008af; 	J(JNZ(loc_27d65));	// 46806 jnz     short loc_27D65 ;~ 18ED:08AF
cs=0x18ed;eip=0x0008b1; 	X(PUSH(cs));	// 46807 push    cs ;~ 18ED:08B1
cs=0x18ed;eip=0x0008b2; 	J(CALL(check_input,0));	// 46808 call    near ptr check_input ;~ 18ED:08B2
loc_27d65:
	// 7470 
cs=0x18ed;eip=0x0008b5; 	T(MOV(al, *(raddr(ss,bp+var_1d4))));	// 46811 mov     al, [bp+var_1D4] ;~ 18ED:08B5
cs=0x18ed;eip=0x0008b9; 	X(MOV(*(raddr(ss,bp+var_1c0)), al));	// 46812 mov     [bp+var_1C0], al ;~ 18ED:08B9
loc_27d6d:
	// 7471 
cs=0x18ed;eip=0x0008bd; 	X(PUSH(cs));	// 46815 push    cs ;~ 18ED:08BD
cs=0x18ed;eip=0x0008be; 	J(CALL(timer_get_delta_alt,0));	// 46816 call    near ptr timer_get_delta_alt ;~ 18ED:08BE
cs=0x18ed;eip=0x0008c1; 	X(PUSH(ax));	// 46817 push    ax ;~ 18ED:08C1
cs=0x18ed;eip=0x0008c2; 	X(PUSH(cs));	// 46818 push    cs ;~ 18ED:08C2
cs=0x18ed;eip=0x0008c3; 	J(CALL(input_checking,0));	// 46819 call    near ptr input_checking ;~ 18ED:08C3
cs=0x18ed;eip=0x0008c6; 	T(ADD(sp, 2));	// 46820 add     sp, 2 ;~ 18ED:08C6
cs=0x18ed;eip=0x0008c9; 	X(MOV(*(dw*)(raddr(ss,bp+var_142)), ax));	// 46821 mov     [bp+var_142], ax ;~ 18ED:08C9
cs=0x18ed;eip=0x0008cd; 	T(ax = bp+var_ee);	// 46822 lea     ax, [bp+var_EE] ;~ 18ED:08CD
cs=0x18ed;eip=0x0008d1; 	X(PUSH(ax));	// 46823 push    ax ;~ 18ED:08D1
cs=0x18ed;eip=0x0008d2; 	T(ax = bp+var_1be);	// 46824 lea     ax, [bp+var_1BE] ;~ 18ED:08D2
cs=0x18ed;eip=0x0008d6; 	X(PUSH(ax));	// 46825 push    ax ;~ 18ED:08D6
cs=0x18ed;eip=0x0008d7; 	T(ax = bp+var_c6);	// 46826 lea     ax, [bp+var_C6] ;~ 18ED:08D7
cs=0x18ed;eip=0x0008db; 	X(PUSH(ax));	// 46827 push    ax ;~ 18ED:08DB
cs=0x18ed;eip=0x0008dc; 	T(ax = bp+var_28);	// 46828 lea     ax, [bp+var_28] ;~ 18ED:08DC
cs=0x18ed;eip=0x0008df; 	X(PUSH(ax));	// 46829 push    ax ;~ 18ED:08DF
cs=0x18ed;eip=0x0008e0; 	T(MOV(al, *(raddr(ss,bp+var_140))));	// 46830 mov     al, [bp+var_140] ;~ 18ED:08E0
cs=0x18ed;eip=0x0008e4; 	T(CBW);	// 46831 cbw ;~ 18ED:08E4
cs=0x18ed;eip=0x0008e5; 	X(PUSH(ax));	// 46832 push    ax ;~ 18ED:08E5
cs=0x18ed;eip=0x0008e6; 	X(PUSH(cs));	// 46833 push    cs ;~ 18ED:08E6
cs=0x18ed;eip=0x0008e7; 	J(CALL(mouse_multi_hittest,0));	// 46834 call    near ptr mouse_multi_hittest ;~ 18ED:08E7
cs=0x18ed;eip=0x0008ea; 	T(ADD(sp, 0x0A));	// 46835 add     sp, 0Ah ;~ 18ED:08EA
cs=0x18ed;eip=0x0008ed; 	X(MOV(*(raddr(ss,bp+var_1c4)), al));	// 46836 mov     [bp+var_1C4], al ;~ 18ED:08ED
cs=0x18ed;eip=0x0008f1; 	T(CMP(al, 0x0FF));	// 46837 cmp     al, 0FFh ;~ 18ED:08F1
cs=0x18ed;eip=0x0008f3; 	J(JZ(loc_27dbc));	// 46838 jz      short loc_27DBC ;~ 18ED:08F3
cs=0x18ed;eip=0x0008f5; 	T(CMP(*(dw*)(raddr(ss,bp+arg_e)), 0));	// 46839 cmp     [bp+arg_E], 0 ;~ 18ED:08F5
cs=0x18ed;eip=0x0008f9; 	J(JZ(loc_27db8));	// 46840 jz      short loc_27DB8 ;~ 18ED:08F9
cs=0x18ed;eip=0x0008fb; 	T(CBW);	// 46841 cbw ;~ 18ED:08FB
cs=0x18ed;eip=0x0008fc; 	T(MOV(bx, ax));	// 46842 mov     bx, ax ;~ 18ED:08FC
cs=0x18ed;eip=0x0008fe; 	T(SHL(bx, 1));	// 46843 shl     bx, 1 ;~ 18ED:08FE
cs=0x18ed;eip=0x000900; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_e))));	// 46844 mov     si, [bp+arg_E] ;~ 18ED:0900
cs=0x18ed;eip=0x000903; 	T(CMP(*(dw*)(raddr(ds,bx+si)), 0));	// 46845 cmp     word ptr [bx+si], 0 ;~ 18ED:0903
cs=0x18ed;eip=0x000906; 	J(JNZ(loc_27dbc));	// 46846 jnz     short loc_27DBC ;~ 18ED:0906
loc_27db8:
	// 7472 
cs=0x18ed;eip=0x000908; 	X(MOV(*(raddr(ss,bp+var_1d4)), al));	// 46849 mov     [bp+var_1D4], al ;~ 18ED:0908
loc_27dbc:
	// 7473 
cs=0x18ed;eip=0x00090c; 	T(CMP(*(raddr(ss,bp+var_140)), 2));	// 46853 cmp     [bp+var_140], 2 ;~ 18ED:090C
cs=0x18ed;eip=0x000911; 	J(JNZ(loc_27e15));	// 46854 jnz     short loc_27E15 ;~ 18ED:0911
cs=0x18ed;eip=0x000913; 	T(CMP(*(dw*)(raddr(ss,bp+var_142)), 0));	// 46855 cmp     [bp+var_142], 0 ;~ 18ED:0913
cs=0x18ed;eip=0x000918; 	J(JZ(loc_27e15));	// 46856 jz      short loc_27E15 ;~ 18ED:0918
cs=0x18ed;eip=0x00091a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_142))));	// 46857 mov     ax, [bp+var_142] ;~ 18ED:091A
cs=0x18ed;eip=0x00091e; 	X(MOV(*(dw*)(raddr(ss,bp+var_1d2)), ax));	// 46858 mov     [bp+var_1D2], ax ;~ 18ED:091E
cs=0x18ed;eip=0x000922; 	T(MOV(bx, ax));	// 46859 mov     bx, ax ;~ 18ED:0922
cs=0x18ed;eip=0x000924; 	T(TEST(*((g_ascii_props)+bx), 1));	// 46860 test    g_ascii_props[bx], 1 ;~ 18ED:0924
cs=0x18ed;eip=0x000929; 	J(JZ(loc_27dee));	// 46861 jz      short loc_27DEE ;~ 18ED:0929
cs=0x18ed;eip=0x00092b; 	T(TEST(*((g_ascii_props)+bx), 1));	// 46862 test    g_ascii_props[bx], 1 ;~ 18ED:092B
cs=0x18ed;eip=0x000930; 	J(JZ(loc_27de8));	// 46863 jz      short loc_27DE8 ;~ 18ED:0930
cs=0x18ed;eip=0x000932; 	T(ADD(ax, 0x20));	// 46864 add     ax, 20h ; ' ' ;~ 18ED:0932
cs=0x18ed;eip=0x000935; 	J(JMP(loc_27dea));	// 46865 jmp     short loc_27DEA ;~ 18ED:0935
loc_27de8:
	// 7474 
cs=0x18ed;eip=0x000938; 	T(MOV(ax, bx));	// 46870 mov     ax, bx ;~ 18ED:0938
loc_27dea:
	// 7475 
cs=0x18ed;eip=0x00093a; 	X(MOV(*(dw*)(raddr(ss,bp+var_1d2)), ax));	// 46873 mov     [bp+var_1D2], ax ;~ 18ED:093A
loc_27dee:
	// 7476 
cs=0x18ed;eip=0x00093e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1d2))));	// 46876 mov     ax, [bp+var_1D2] ;~ 18ED:093E
cs=0x18ed;eip=0x000942; 	T(CMP(*(dw*)(raddr(ss,bp+var_1c8)), ax));	// 46877 cmp     [bp+var_1C8], ax ;~ 18ED:0942
cs=0x18ed;eip=0x000946; 	J(JNZ(loc_27e00));	// 46878 jnz     short loc_27E00 ;~ 18ED:0946
cs=0x18ed;eip=0x000948; 	X(MOV(*(raddr(ss,bp+var_1d4)), 0));	// 46879 mov     [bp+var_1D4], 0 ;~ 18ED:0948
cs=0x18ed;eip=0x00094d; 	J(JMP(loc_27e0f));	// 46880 jmp     short loc_27E0F ;~ 18ED:094D
loc_27e00:
	// 7477 
cs=0x18ed;eip=0x000950; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1d2))));	// 46885 mov     ax, [bp+var_1D2] ;~ 18ED:0950
cs=0x18ed;eip=0x000954; 	T(CMP(*(dw*)(raddr(ss,bp+var_1cc)), ax));	// 46886 cmp     [bp+var_1CC], ax ;~ 18ED:0954
cs=0x18ed;eip=0x000958; 	J(JNZ(loc_27e15));	// 46887 jnz     short loc_27E15 ;~ 18ED:0958
cs=0x18ed;eip=0x00095a; 	X(MOV(*(raddr(ss,bp+var_1d4)), 1));	// 46888 mov     [bp+var_1D4], 1 ;~ 18ED:095A
loc_27e0f:
	// 7478 
cs=0x18ed;eip=0x00095f; 	X(MOV(*(dw*)(raddr(ss,bp+var_142)), 0x0D));	// 46891 mov     [bp+var_142], 0Dh ;~ 18ED:095F
loc_27e15:
	// 7479 
cs=0x18ed;eip=0x000965; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_142))));	// 46895 mov     ax, [bp+var_142] ;~ 18ED:0965
cs=0x18ed;eip=0x000969; 	T(CMP(ax, 0x20));	// 46896 cmp     ax, 20h ; ' ' ;~ 18ED:0969
cs=0x18ed;eip=0x00096c; 	J(JNZ(loc_27e21));	// 46897 jnz     short loc_27E21 ;~ 18ED:096C
cs=0x18ed;eip=0x00096e; 	J(JMP(loc_27ea9));	// 46898 jmp     loc_27EA9 ;~ 18ED:096E
loc_27e21:
	// 7480 
cs=0x18ed;eip=0x000971; 	J(JBE(loc_27e26));	// 46902 jbe     short loc_27E26 ;~ 18ED:0971
cs=0x18ed;eip=0x000973; 	J(JMP(loc_27eb6));	// 46903 jmp     loc_27EB6 ;~ 18ED:0973
loc_27e26:
	// 7481 
cs=0x18ed;eip=0x000976; 	T(CMP(ax, 0x0D));	// 46907 cmp     ax, 0Dh ;~ 18ED:0976
cs=0x18ed;eip=0x000979; 	J(JZ(loc_27ea9));	// 46908 jz      short loc_27EA9 ;~ 18ED:0979
cs=0x18ed;eip=0x00097b; 	T(CMP(ax, 0x1B));	// 46909 cmp     ax, 1Bh ;~ 18ED:097B
cs=0x18ed;eip=0x00097e; 	J(JZ(loc_27ea4));	// 46910 jz      short loc_27EA4 ;~ 18ED:097E
cs=0x18ed;eip=0x000980; 	J(JMP(loc_27c6d));	// 46911 jmp     loc_27C6D ;~ 18ED:0980
loc_27e34:
	// 7482 
cs=0x18ed;eip=0x000984; 	T(CMP(*(raddr(ss,bp+var_1d4)), 0));	// 46917 cmp     [bp+var_1D4], 0 ;~ 18ED:0984
cs=0x18ed;eip=0x000989; 	J(JZ(loc_27e42));	// 46918 jz      short loc_27E42 ;~ 18ED:0989
cs=0x18ed;eip=0x00098b; 	X(DEC(*(raddr(ss,bp+var_1d4))));	// 46919 dec     [bp+var_1D4] ;~ 18ED:098B
cs=0x18ed;eip=0x00098f; 	J(JMP(loc_27e4c));	// 46920 jmp     short loc_27E4C ;~ 18ED:098F
loc_27e42:
	// 7483 
cs=0x18ed;eip=0x000992; 	T(MOV(al, *(raddr(ss,bp+var_140))));	// 46925 mov     al, [bp+var_140] ;~ 18ED:0992
cs=0x18ed;eip=0x000996; 	T(DEC(al));	// 46926 dec     al ;~ 18ED:0996
cs=0x18ed;eip=0x000998; 	X(MOV(*(raddr(ss,bp+var_1d4)), al));	// 46927 mov     [bp+var_1D4], al ;~ 18ED:0998
loc_27e4c:
	// 7484 
cs=0x18ed;eip=0x00099c; 	T(CMP(*(dw*)(raddr(ss,bp+arg_e)), 0));	// 46930 cmp     [bp+arg_E], 0 ;~ 18ED:099C
cs=0x18ed;eip=0x0009a0; 	J(JNZ(loc_27e55));	// 46931 jnz     short loc_27E55 ;~ 18ED:09A0
cs=0x18ed;eip=0x0009a2; 	J(JMP(loc_27c6d));	// 46932 jmp     loc_27C6D ;~ 18ED:09A2
loc_27e55:
	// 7485 
cs=0x18ed;eip=0x0009a5; 	T(MOV(al, *(raddr(ss,bp+var_1d4))));	// 46936 mov     al, [bp+var_1D4] ;~ 18ED:09A5
cs=0x18ed;eip=0x0009a9; 	T(CBW);	// 46937 cbw ;~ 18ED:09A9
cs=0x18ed;eip=0x0009aa; 	T(MOV(bx, ax));	// 46938 mov     bx, ax ;~ 18ED:09AA
cs=0x18ed;eip=0x0009ac; 	T(SHL(bx, 1));	// 46939 shl     bx, 1 ;~ 18ED:09AC
cs=0x18ed;eip=0x0009ae; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_e))));	// 46940 mov     si, [bp+arg_E] ;~ 18ED:09AE
cs=0x18ed;eip=0x0009b1; 	T(CMP(*(dw*)(raddr(ds,bx+si)), 0));	// 46941 cmp     word ptr [bx+si], 0 ;~ 18ED:09B1
cs=0x18ed;eip=0x0009b4; 	J(JNZ(loc_27e34));	// 46942 jnz     short loc_27E34 ;~ 18ED:09B4
cs=0x18ed;eip=0x0009b6; 	J(JMP(loc_27c6d));	// 46943 jmp     loc_27C6D ;~ 18ED:09B6
loc_27e6a:
	// 7486 
cs=0x18ed;eip=0x0009ba; 	T(MOV(al, *(raddr(ss,bp+var_1d4))));	// 46949 mov     al, [bp+var_1D4] ;~ 18ED:09BA
cs=0x18ed;eip=0x0009be; 	T(CBW);	// 46950 cbw ;~ 18ED:09BE
cs=0x18ed;eip=0x0009bf; 	T(INC(ax));	// 46951 inc     ax ;~ 18ED:09BF
cs=0x18ed;eip=0x0009c0; 	T(MOV(cx, ax));	// 46952 mov     cx, ax ;~ 18ED:09C0
cs=0x18ed;eip=0x0009c2; 	T(MOV(al, *(raddr(ss,bp+var_140))));	// 46953 mov     al, [bp+var_140] ;~ 18ED:09C2
cs=0x18ed;eip=0x0009c6; 	T(CBW);	// 46954 cbw ;~ 18ED:09C6
cs=0x18ed;eip=0x0009c7; 	T(CMP(cx, ax));	// 46955 cmp     cx, ax ;~ 18ED:09C7
cs=0x18ed;eip=0x0009c9; 	J(JGE(loc_27e82));	// 46956 jge     short loc_27E82 ;~ 18ED:09C9
cs=0x18ed;eip=0x0009cb; 	X(INC(*(raddr(ss,bp+var_1d4))));	// 46957 inc     [bp+var_1D4] ;~ 18ED:09CB
cs=0x18ed;eip=0x0009cf; 	J(JMP(loc_27e87));	// 46958 jmp     short loc_27E87 ;~ 18ED:09CF
loc_27e82:
	// 7487 
cs=0x18ed;eip=0x0009d2; 	X(MOV(*(raddr(ss,bp+var_1d4)), 0));	// 46963 mov     [bp+var_1D4], 0 ;~ 18ED:09D2
loc_27e87:
	// 7488 
cs=0x18ed;eip=0x0009d7; 	T(CMP(*(dw*)(raddr(ss,bp+arg_e)), 0));	// 46966 cmp     [bp+arg_E], 0 ;~ 18ED:09D7
cs=0x18ed;eip=0x0009db; 	J(JNZ(loc_27e90));	// 46967 jnz     short loc_27E90 ;~ 18ED:09DB
cs=0x18ed;eip=0x0009dd; 	J(JMP(loc_27c6d));	// 46968 jmp     loc_27C6D ;~ 18ED:09DD
loc_27e90:
	// 7489 
cs=0x18ed;eip=0x0009e0; 	T(MOV(al, *(raddr(ss,bp+var_1d4))));	// 46972 mov     al, [bp+var_1D4] ;~ 18ED:09E0
cs=0x18ed;eip=0x0009e4; 	T(CBW);	// 46973 cbw ;~ 18ED:09E4
cs=0x18ed;eip=0x0009e5; 	T(MOV(bx, ax));	// 46974 mov     bx, ax ;~ 18ED:09E5
cs=0x18ed;eip=0x0009e7; 	T(SHL(bx, 1));	// 46975 shl     bx, 1 ;~ 18ED:09E7
cs=0x18ed;eip=0x0009e9; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_e))));	// 46976 mov     si, [bp+arg_E] ;~ 18ED:09E9
cs=0x18ed;eip=0x0009ec; 	T(CMP(*(dw*)(raddr(ds,bx+si)), 0));	// 46977 cmp     word ptr [bx+si], 0 ;~ 18ED:09EC
cs=0x18ed;eip=0x0009ef; 	J(JNZ(loc_27e6a));	// 46978 jnz     short loc_27E6A ;~ 18ED:09EF
cs=0x18ed;eip=0x0009f1; 	J(JMP(loc_27c6d));	// 46979 jmp     loc_27C6D ;~ 18ED:09F1
loc_27ea4:
	// 7490 
cs=0x18ed;eip=0x0009f4; 	X(MOV(*(raddr(ss,bp+var_1d4)), 0x0FF));	// 46983 mov     [bp+var_1D4], 0FFh ;~ 18ED:09F4
loc_27ea9:
	// 7491 
cs=0x18ed;eip=0x0009f9; 	X(MOV(*(raddr(ss,bp+var_84)), 0));	// 46987 mov     [bp+var_84], 0 ;~ 18ED:09F9
cs=0x18ed;eip=0x0009fe; 	X(PUSH(cs));	// 46988 push    cs ;~ 18ED:09FE
cs=0x18ed;eip=0x0009ff; 	J(CALL(check_input,0));	// 46989 call    near ptr check_input ;~ 18ED:09FF
cs=0x18ed;eip=0x000a02; 	J(JMP(loc_27c6d));	// 46990 jmp     loc_27C6D ;~ 18ED:0A02
loc_27eb6:
	// 7492 
cs=0x18ed;eip=0x000a06; 	T(CMP(ax, 0x4800));	// 46995 cmp     ax, 4800h ;~ 18ED:0A06
cs=0x18ed;eip=0x000a09; 	J(JNZ(loc_27ebe));	// 46996 jnz     short loc_27EBE ;~ 18ED:0A09
cs=0x18ed;eip=0x000a0b; 	J(JMP(loc_27e34));	// 46997 jmp     loc_27E34 ;~ 18ED:0A0B
loc_27ebe:
	// 7493 
cs=0x18ed;eip=0x000a0e; 	T(CMP(ax, 0x4B00));	// 47001 cmp     ax, 4B00h ;~ 18ED:0A0E
cs=0x18ed;eip=0x000a11; 	J(JNZ(loc_27ec6));	// 47002 jnz     short loc_27EC6 ;~ 18ED:0A11
cs=0x18ed;eip=0x000a13; 	J(JMP(loc_27e34));	// 47003 jmp     loc_27E34 ;~ 18ED:0A13
loc_27ec6:
	// 7494 
cs=0x18ed;eip=0x000a16; 	T(CMP(ax, 0x4D00));	// 47007 cmp     ax, 4D00h ;~ 18ED:0A16
cs=0x18ed;eip=0x000a19; 	J(JZ(loc_27e6a));	// 47008 jz      short loc_27E6A ;~ 18ED:0A19
cs=0x18ed;eip=0x000a1b; 	T(CMP(ax, 0x5000));	// 47009 cmp     ax, 5000h ;~ 18ED:0A1B
cs=0x18ed;eip=0x000a1e; 	J(JZ(loc_27e6a));	// 47010 jz      short loc_27E6A ;~ 18ED:0A1E
cs=0x18ed;eip=0x000a20; 	J(JMP(loc_27c6d));	// 47011 jmp     loc_27C6D ;~ 18ED:0A20

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_276c0: 	goto loc_276c0;
        case m2c::kloc_276f1: 	goto loc_276f1;
        case m2c::kloc_27702: 	goto loc_27702;
        case m2c::kloc_27736: 	goto loc_27736;
        case m2c::kloc_27744: 	goto loc_27744;
        case m2c::kloc_27756: 	goto loc_27756;
        case m2c::kloc_2775a: 	goto loc_2775a;
        case m2c::kloc_2776c: 	goto loc_2776c;
        case m2c::kloc_27790: 	goto loc_27790;
        case m2c::kloc_277a5: 	goto loc_277a5;
        case m2c::kloc_277f6: 	goto loc_277f6;
        case m2c::kloc_27890: 	goto loc_27890;
        case m2c::kloc_2789a: 	goto loc_2789a;
        case m2c::kloc_278ce: 	goto loc_278ce;
        case m2c::kloc_278e2: 	goto loc_278e2;
        case m2c::kloc_27918: 	goto loc_27918;
        case m2c::kloc_2796a: 	goto loc_2796a;
        case m2c::kloc_27978: 	goto loc_27978;
        case m2c::kloc_2798a: 	goto loc_2798a;
        case m2c::kloc_2798e: 	goto loc_2798e;
        case m2c::kloc_279a0: 	goto loc_279a0;
        case m2c::kloc_279a8: 	goto loc_279a8;
        case m2c::kloc_27a2a: 	goto loc_27a2a;
        case m2c::kloc_27a34: 	goto loc_27a34;
        case m2c::kloc_27a64: 	goto loc_27a64;
        case m2c::kloc_27a94: 	goto loc_27a94;
        case m2c::kloc_27aaa: 	goto loc_27aaa;
        case m2c::kloc_27aae: 	goto loc_27aae;
        case m2c::kloc_27ac0: 	goto loc_27ac0;
        case m2c::kloc_27aee: 	goto loc_27aee;
        case m2c::kloc_27b08: 	goto loc_27b08;
        case m2c::kloc_27b15: 	goto loc_27b15;
        case m2c::kloc_27b34: 	goto loc_27b34;
        case m2c::kloc_27b4b: 	goto loc_27b4b;
        case m2c::kloc_27b56: 	goto loc_27b56;
        case m2c::kloc_27b88: 	goto loc_27b88;
        case m2c::kloc_27b92: 	goto loc_27b92;
        case m2c::kloc_27b98: 	goto loc_27b98;
        case m2c::kloc_27bb6: 	goto loc_27bb6;
        case m2c::kloc_27bbc: 	goto loc_27bbc;
        case m2c::kloc_27bc4: 	goto loc_27bc4;
        case m2c::kloc_27bcd: 	goto loc_27bcd;
        case m2c::kloc_27bd4: 	goto loc_27bd4;
        case m2c::kloc_27bf5: 	goto loc_27bf5;
        case m2c::kloc_27c26: 	goto loc_27c26;
        case m2c::kloc_27c28: 	goto loc_27c28;
        case m2c::kloc_27c2c: 	goto loc_27c2c;
        case m2c::kloc_27c32: 	goto loc_27c32;
        case m2c::kloc_27c62: 	goto loc_27c62;
        case m2c::kloc_27c64: 	goto loc_27c64;
        case m2c::kloc_27c68: 	goto loc_27c68;
        case m2c::kloc_27c6d: 	goto loc_27c6d;
        case m2c::kloc_27c77: 	goto loc_27c77;
        case m2c::kloc_27c84: 	goto loc_27c84;
        case m2c::kloc_27c92: 	goto loc_27c92;
        case m2c::kloc_27ca8: 	goto loc_27ca8;
        case m2c::kloc_27cb0: 	goto loc_27cb0;
        case m2c::kloc_27cd8: 	goto loc_27cd8;
        case m2c::kloc_27ced: 	goto loc_27ced;
        case m2c::kloc_27d25: 	goto loc_27d25;
        case m2c::kloc_27d39: 	goto loc_27d39;
        case m2c::kloc_27d4a: 	goto loc_27d4a;
        case m2c::kloc_27d56: 	goto loc_27d56;
        case m2c::kloc_27d65: 	goto loc_27d65;
        case m2c::kloc_27d6d: 	goto loc_27d6d;
        case m2c::kloc_27db8: 	goto loc_27db8;
        case m2c::kloc_27dbc: 	goto loc_27dbc;
        case m2c::kloc_27de8: 	goto loc_27de8;
        case m2c::kloc_27dea: 	goto loc_27dea;
        case m2c::kloc_27dee: 	goto loc_27dee;
        case m2c::kloc_27e00: 	goto loc_27e00;
        case m2c::kloc_27e0f: 	goto loc_27e0f;
        case m2c::kloc_27e15: 	goto loc_27e15;
        case m2c::kloc_27e21: 	goto loc_27e21;
        case m2c::kloc_27e26: 	goto loc_27e26;
        case m2c::kloc_27e34: 	goto loc_27e34;
        case m2c::kloc_27e42: 	goto loc_27e42;
        case m2c::kloc_27e4c: 	goto loc_27e4c;
        case m2c::kloc_27e55: 	goto loc_27e55;
        case m2c::kloc_27e6a: 	goto loc_27e6a;
        case m2c::kloc_27e82: 	goto loc_27e82;
        case m2c::kloc_27e87: 	goto loc_27e87;
        case m2c::kloc_27e90: 	goto loc_27e90;
        case m2c::kloc_27ea4: 	goto loc_27ea4;
        case m2c::kloc_27ea9: 	goto loc_27ea9;
        case m2c::kloc_27eb6: 	goto loc_27eb6;
        case m2c::kloc_27ebe: 	goto loc_27ebe;
        case m2c::kloc_27ec6: 	goto loc_27ec6;
        case m2c::kshow_dialog: 	goto show_dialog;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool do_fileselect_dialog(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    do_fileselect_dialog:
    _begin:
#undef var_71c
#define var_71c -0x71C
	// 47025 var_71C         = word ptr -71Ch ;~ 18ED:0A24
#undef var_71a
#define var_71a -0x71A
	// 47026 var_71A         = word ptr -71Ah ;~ 18ED:0A24
#undef var_718
#define var_718 -0x718
	// 47027 var_718         = byte ptr -718h ;~ 18ED:0A24
#undef var_716
#define var_716 -0x716
	// 47028 var_716         = byte ptr -716h ;~ 18ED:0A24
#undef var_714
#define var_714 -0x714
	// 47029 var_714         = byte ptr -714h ;~ 18ED:0A24
#undef var_712
#define var_712 -0x712
	// 47030 var_712         = word ptr -712h ;~ 18ED:0A24
#undef var_710
#define var_710 -0x710
	// 47031 var_710         = word ptr -710h ;~ 18ED:0A24
#undef var_70e
#define var_70e -0x70E
	// 47032 var_70E         = dword ptr -70Eh ;~ 18ED:0A24
#undef var_70a
#define var_70a -0x70A
	// 47033 var_70A         = word ptr -70Ah ;~ 18ED:0A24
#undef var_708
#define var_708 -0x708
	// 47034 var_708         = word ptr -708h ;~ 18ED:0A24
#undef var_6ea
#define var_6ea -0x6EA
	// 47035 var_6EA         = byte ptr -6EAh ;~ 18ED:0A24
#undef var_6e8
#define var_6e8 -0x6E8
	// 47036 var_6E8         = word ptr -6E8h ;~ 18ED:0A24
#undef var_6e6
#define var_6e6 -0x6E6
	// 47037 var_6E6         = word ptr -6E6h ;~ 18ED:0A24
#undef var_6e4
#define var_6e4 -0x6E4
	// 47038 var_6E4         = byte ptr -6E4h ;~ 18ED:0A24
#undef var_6e2
#define var_6e2 -0x6E2
	// 47039 var_6E2         = byte ptr -6E2h ;~ 18ED:0A24
#undef var_6e0
#define var_6e0 -0x6E0
	// 47040 var_6E0         = word ptr -6E0h ;~ 18ED:0A24
#undef var_6d0
#define var_6d0 -0x6D0
	// 47041 var_6D0         = word ptr -6D0h ;~ 18ED:0A24
#undef var_6cc
#define var_6cc -0x6CC
	// 47042 var_6CC         = word ptr -6CCh ;~ 18ED:0A24
#undef var_6ca
#define var_6ca -0x6CA
	// 47043 var_6CA         = word ptr -6CAh ;~ 18ED:0A24
#undef var_6c8
#define var_6c8 -0x6C8
	// 47044 var_6C8         = byte ptr -6C8h ;~ 18ED:0A24
#undef var_6b4
#define var_6b4 -0x6B4
	// 47045 var_6B4         = byte ptr -6B4h ;~ 18ED:0A24
#undef var_6a0
#define var_6a0 -0x6A0
	// 47046 var_6A0         = byte ptr -6A0h ;~ 18ED:0A24
#undef var_69c
#define var_69c -0x69C
	// 47047 var_69C         = byte ptr -69Ch ;~ 18ED:0A24
#undef var_69a
#define var_69a -0x69A
	// 47048 var_69A         = byte ptr -69Ah ;~ 18ED:0A24
#undef var_698
#define var_698 -0x698
	// 47049 var_698         = dword ptr -698h ;~ 18ED:0A24
#undef var_18
#define var_18 -0x18
	// 47050 var_18          = byte ptr -18h ;~ 18ED:0A24
#undef var_16
#define var_16 -0x16
	// 47051 var_16          = byte ptr -16h ;~ 18ED:0A24
#undef var_2
#define var_2 -2
	// 47052 var_2           = byte ptr -2 ;~ 18ED:0A24
#undef arg_0
#define arg_0 6
	// 47053 arg_0           = dword ptr  6 ;~ 18ED:0A24
#undef arg_4
#define arg_4 0x0A
	// 47054 arg_4           = dword ptr  0Ah ;~ 18ED:0A24
#undef arg_8
#define arg_8 0x0E
	// 47055 arg_8           = word ptr  0Eh ;~ 18ED:0A24
cs=0x18ed;eip=0x000a24; 	X(PUSH(bp));	// 47057 push    bp ;~ 18ED:0A24
cs=0x18ed;eip=0x000a25; 	T(MOV(bp, sp));	// 47058 mov     bp, sp ;~ 18ED:0A25
cs=0x18ed;eip=0x000a27; 	T(SUB(sp, 0x71C));	// 47059 sub     sp, 71Ch ;~ 18ED:0A27
cs=0x18ed;eip=0x000a2b; 	X(PUSH(di));	// 47060 push    di ;~ 18ED:0A2B
cs=0x18ed;eip=0x000a2c; 	X(PUSH(si));	// 47061 push    si ;~ 18ED:0A2C
cs=0x18ed;eip=0x000a2d; 	T(SUB(ax, ax));	// 47062 sub     ax, ax ;~ 18ED:0A2D
cs=0x18ed;eip=0x000a2f; 	X(PUSH(ax));	// 47063 push    ax ;~ 18ED:0A2F
cs=0x18ed;eip=0x000a30; 	T(ax = bp+var_712);	// 47064 lea     ax, [bp+var_712] ;~ 18ED:0A30
cs=0x18ed;eip=0x000a34; 	X(PUSH(ax));	// 47065 push    ax ;~ 18ED:0A34
cs=0x18ed;eip=0x000a35; 	X(PUSH(dialogarg2));	// 47066 push    dialogarg2 ;~ 18ED:0A35
cs=0x18ed;eip=0x000a39; 	T(MOV(ax, 0x0FFFF));	// 47067 mov     ax, 0FFFFh ;~ 18ED:0A39
cs=0x18ed;eip=0x000a3c; 	X(PUSH(ax));	// 47068 push    ax ;~ 18ED:0A3C
cs=0x18ed;eip=0x000a3d; 	X(PUSH(ax));	// 47069 push    ax ;~ 18ED:0A3D
cs=0x18ed;eip=0x000a3e; 	T(MOV(ax, offset(dseg,aloa)));	// 47070 mov     ax, offset aLoa ; "loa" ;~ 18ED:0A3E
cs=0x18ed;eip=0x000a41; 	X(PUSH(ax));	// 47071 push    ax ;~ 18ED:0A41
cs=0x18ed;eip=0x000a42; 	X(PUSH(word_44cee));	// 47072 push    word_44CEE ;~ 18ED:0A42
cs=0x18ed;eip=0x000a46; 	X(PUSH(mainresptr));	// 47073 push    mainresptr ;~ 18ED:0A46
cs=0x18ed;eip=0x000a4a; 	X(PUSH(cs));	// 47074 push    cs ;~ 18ED:0A4A
cs=0x18ed;eip=0x000a4b; 	J(CALL(locate_text_res,0));	// 47075 call    near ptr locate_text_res ;~ 18ED:0A4B
cs=0x18ed;eip=0x000a4e; 	T(ADD(sp, 6));	// 47076 add     sp, 6 ;~ 18ED:0A4E
cs=0x18ed;eip=0x000a51; 	X(PUSH(dx));	// 47077 push    dx ;~ 18ED:0A51
cs=0x18ed;eip=0x000a52; 	X(PUSH(ax));	// 47078 push    ax ;~ 18ED:0A52
cs=0x18ed;eip=0x000a53; 	T(MOV(ax, 1));	// 47079 mov     ax, 1 ;~ 18ED:0A53
cs=0x18ed;eip=0x000a56; 	X(PUSH(ax));	// 47080 push    ax ;~ 18ED:0A56
cs=0x18ed;eip=0x000a57; 	T(MOV(ax, 3));	// 47081 mov     ax, 3 ;~ 18ED:0A57
cs=0x18ed;eip=0x000a5a; 	X(PUSH(ax));	// 47082 push    ax ;~ 18ED:0A5A
cs=0x18ed;eip=0x000a5b; 	X(PUSH(cs));	// 47083 push    cs ;~ 18ED:0A5B
cs=0x18ed;eip=0x000a5c; 	J(CALL(show_dialog,0));	// 47084 call    near ptr show_dialog ;~ 18ED:0A5C
cs=0x18ed;eip=0x000a5f; 	T(ADD(sp, 0x12));	// 47085 add     sp, 12h ;~ 18ED:0A5F
cs=0x18ed;eip=0x000a62; 	T(OR(ax, ax));	// 47086 or      ax, ax ;~ 18ED:0A62
cs=0x18ed;eip=0x000a64; 	J(JGE(loc_27f1e));	// 47087 jge     short loc_27F1E ;~ 18ED:0A64
cs=0x18ed;eip=0x000a66; 	T(SUB(ax, ax));	// 47088 sub     ax, ax ;~ 18ED:0A66
cs=0x18ed;eip=0x000a68; 	X(POP(si));	// 47089 pop     si ;~ 18ED:0A68
cs=0x18ed;eip=0x000a69; 	X(POP(di));	// 47090 pop     di ;~ 18ED:0A69
cs=0x18ed;eip=0x000a6a; 	T(MOV(sp, bp));	// 47091 mov     sp, bp ;~ 18ED:0A6A
cs=0x18ed;eip=0x000a6c; 	X(POP(bp));	// 47092 pop     bp ;~ 18ED:0A6C
cs=0x18ed;eip=0x000a6d; 	J(RETF(0));	// 47093 retf ;~ 18ED:0A6D
loc_27f1e:
	// 7495 
cs=0x18ed;eip=0x000a6e; 	T(MOV(al, g_is_busy));	// 47097 mov     al, g_is_busy ;~ 18ED:0A6E
cs=0x18ed;eip=0x000a71; 	X(MOV(*(raddr(ss,bp+var_18)), al));	// 47098 mov     [bp+var_18], al ;~ 18ED:0A71
cs=0x18ed;eip=0x000a74; 	X(MOV(g_is_busy, 1));	// 47099 mov     g_is_busy, 1 ;~ 18ED:0A74
cs=0x18ed;eip=0x000a79; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_708))));	// 47100 mov     ax, [bp+var_708] ;~ 18ED:0A79
cs=0x18ed;eip=0x000a7d; 	T(ADD(ax, 4));	// 47101 add     ax, 4 ;~ 18ED:0A7D
cs=0x18ed;eip=0x000a80; 	X(MOV(*(dw*)(raddr(ss,bp+var_71c)), ax));	// 47102 mov     [bp+var_71C], ax ;~ 18ED:0A80
cs=0x18ed;eip=0x000a84; 	X(PUSH(dialogarg2));	// 47103 push    dialogarg2 ;~ 18ED:0A84
cs=0x18ed;eip=0x000a88; 	X(PUSH(ax));	// 47104 push    ax ;~ 18ED:0A88
cs=0x18ed;eip=0x000a89; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_70a))));	// 47105 mov     ax, [bp+var_70A] ;~ 18ED:0A89
cs=0x18ed;eip=0x000a8d; 	T(ADD(ax, 0x0AB));	// 47106 add     ax, 0ABh ; '«' ;~ 18ED:0A8D
cs=0x18ed;eip=0x000a90; 	X(PUSH(ax));	// 47107 push    ax ;~ 18ED:0A90
cs=0x18ed;eip=0x000a91; 	X(PUSH(*(dw*)(raddr(ss,bp+var_71c))));	// 47108 push    [bp+var_71C] ;~ 18ED:0A91
cs=0x18ed;eip=0x000a95; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_70a))));	// 47109 mov     ax, [bp+var_70A] ;~ 18ED:0A95
cs=0x18ed;eip=0x000a99; 	T(SUB(ax, 4));	// 47110 sub     ax, 4 ;~ 18ED:0A99
cs=0x18ed;eip=0x000a9c; 	X(PUSH(ax));	// 47111 push    ax ;~ 18ED:0A9C
cs=0x18ed;eip=0x000a9d; 	J(CALLF(prerender_line,0));	// 47112 call    preRender_line ;~ 18ED:0A9D
cs=0x18ed;eip=0x000aa2; 	T(ADD(sp, 0x0A));	// 47113 add     sp, 0Ah ;~ 18ED:0AA2
cs=0x18ed;eip=0x000aa5; 	X(PUSH(word_3eb90));	// 47114 push    word_3EB90 ;~ 18ED:0AA5
cs=0x18ed;eip=0x000aa9; 	X(PUSH(dialog_fnt_colour));	// 47115 push    dialog_fnt_colour ;~ 18ED:0AA9
cs=0x18ed;eip=0x000aad; 	J(CALLF(font_set_unk,0));	// 47116 call    font_set_unk ;~ 18ED:0AAD
cs=0x18ed;eip=0x000ab2; 	T(ADD(sp, 4));	// 47117 add     sp, 4 ;~ 18ED:0AB2
cs=0x18ed;eip=0x000ab5; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 47118 push    [bp+arg_8] ;~ 18ED:0AB5
cs=0x18ed;eip=0x000ab8; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_4+2)))));	// 47119 push    word ptr [bp+arg_4+2] ;~ 18ED:0AB8
cs=0x18ed;eip=0x000abb; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 47120 mov     ax, offset resID_byte1 ;~ 18ED:0ABB
cs=0x18ed;eip=0x000abe; 	X(PUSH(ax));	// 47121 push    ax ;~ 18ED:0ABE
cs=0x18ed;eip=0x000abf; 	X(PUSH(cs));	// 47122 push    cs ;~ 18ED:0ABF
cs=0x18ed;eip=0x000ac0; 	J(CALL(copy_string,0));	// 47123 call    near ptr copy_string ;~ 18ED:0AC0
cs=0x18ed;eip=0x000ac3; 	T(ADD(sp, 6));	// 47124 add     sp, 6 ;~ 18ED:0AC3
cs=0x18ed;eip=0x000ac6; 	X(PUSH(*(dw*)(raddr(ss,bp+var_710))));	// 47125 push    [bp+var_710] ;~ 18ED:0AC6
cs=0x18ed;eip=0x000aca; 	X(PUSH(*(dw*)(raddr(ss,bp+var_712))));	// 47126 push    [bp+var_712] ;~ 18ED:0ACA
cs=0x18ed;eip=0x000ace; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 47127 mov     ax, offset resID_byte1 ;~ 18ED:0ACE
cs=0x18ed;eip=0x000ad1; 	X(PUSH(ax));	// 47128 push    ax ;~ 18ED:0AD1
cs=0x18ed;eip=0x000ad2; 	J(CALLF(sub_345bc,0));	// 47129 call    sub_345BC ;~ 18ED:0AD2
cs=0x18ed;eip=0x000ad7; 	T(ADD(sp, 6));	// 47130 add     sp, 6 ;~ 18ED:0AD7
cs=0x18ed;eip=0x000ada; 	T(MOV(di, *(dw*)((dw*)(raddr(ss,bp+var_70e)))));	// 47131 mov     di, word ptr [bp+var_70E] ;~ 18ED:0ADA
cs=0x18ed;eip=0x000ade; 	T(ax = di+0x0A2);	// 47132 lea     ax, [di+0A2h] ;~ 18ED:0ADE
cs=0x18ed;eip=0x000ae2; 	X(MOV(*(dw*)(raddr(ss,bp+var_6e6)), ax));	// 47133 mov     [bp+var_6E6], ax ;~ 18ED:0AE2
cs=0x18ed;eip=0x000ae6; 	X(MOV(*(raddr(ss,bp+var_6ea)), 0));	// 47134 mov     [bp+var_6EA], 0 ;~ 18ED:0AE6
cs=0x18ed;eip=0x000aeb; 	J(JMP(loc_27fdd));	// 47135 jmp     short loc_27FDD ;~ 18ED:0AEB
loc_27f9e:
	// 7496 
cs=0x18ed;eip=0x000aee; 	T(MOV(al, *(raddr(ss,bp+var_6ea))));	// 47140 mov     al, [bp+var_6EA] ;~ 18ED:0AEE
cs=0x18ed;eip=0x000af2; 	T(CBW);	// 47141 cbw ;~ 18ED:0AF2
cs=0x18ed;eip=0x000af3; 	X(MOV(*(dw*)(raddr(ss,bp+var_71c)), ax));	// 47142 mov     [bp+var_71C], ax ;~ 18ED:0AF3
cs=0x18ed;eip=0x000af7; 	T(MOV(bx, ax));	// 47143 mov     bx, ax ;~ 18ED:0AF7
cs=0x18ed;eip=0x000af9; 	T(SHL(bx, 1));	// 47144 shl     bx, 1 ;~ 18ED:0AF9
cs=0x18ed;eip=0x000afb; 	T(SHL(bx, 1));	// 47145 shl     bx, 1 ;~ 18ED:0AFB
cs=0x18ed;eip=0x000afd; 	T(ADD(bx, bp));	// 47146 add     bx, bp ;~ 18ED:0AFD
cs=0x18ed;eip=0x000aff; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x70C))));	// 47147 mov     ax, [bx-70Ch] ;~ 18ED:0AFF
cs=0x18ed;eip=0x000b03; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_71c))));	// 47148 mov     bx, [bp+var_71C] ;~ 18ED:0B03
cs=0x18ed;eip=0x000b07; 	T(SHL(bx, 1));	// 47149 shl     bx, 1 ;~ 18ED:0B07
cs=0x18ed;eip=0x000b09; 	T(ADD(bx, bp));	// 47150 add     bx, bp ;~ 18ED:0B09
loc_27fbb:
	// 7497 
cs=0x18ed;eip=0x000b0b; 	X(MOV(*(dw*)(raddr(ds,bx-0x6E2)), ax));	// 47153 mov     [bx-6E2h], ax ;~ 18ED:0B0B
cs=0x18ed;eip=0x000b0f; 	T(MOV(al, *(raddr(ss,bp+var_6ea))));	// 47154 mov     al, [bp+var_6EA] ;~ 18ED:0B0F
cs=0x18ed;eip=0x000b13; 	T(CBW);	// 47155 cbw ;~ 18ED:0B13
cs=0x18ed;eip=0x000b14; 	T(SHL(ax, 1));	// 47156 shl     ax, 1 ;~ 18ED:0B14
cs=0x18ed;eip=0x000b16; 	T(ADD(ax, bp));	// 47157 add     ax, bp ;~ 18ED:0B16
cs=0x18ed;eip=0x000b18; 	X(MOV(*(dw*)(raddr(ss,bp+var_71c)), ax));	// 47158 mov     [bp+var_71C], ax ;~ 18ED:0B18
cs=0x18ed;eip=0x000b1c; 	T(MOV(bx, ax));	// 47159 mov     bx, ax ;~ 18ED:0B1C
cs=0x18ed;eip=0x000b1e; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x6E2))));	// 47160 mov     ax, [bx-6E2h] ;~ 18ED:0B1E
cs=0x18ed;eip=0x000b22; 	T(ADD(ax, 0x0A));	// 47161 add     ax, 0Ah ;~ 18ED:0B22
cs=0x18ed;eip=0x000b25; 	X(MOV(*(dw*)(raddr(ds,bx-0x6C8)), ax));	// 47162 mov     [bx-6C8h], ax ;~ 18ED:0B25
cs=0x18ed;eip=0x000b29; 	X(INC(*(raddr(ss,bp+var_6ea))));	// 47163 inc     [bp+var_6EA] ;~ 18ED:0B29
loc_27fdd:
	// 7498 
cs=0x18ed;eip=0x000b2d; 	T(CMP(*(raddr(ss,bp+var_6ea)), 0x0A));	// 47166 cmp     [bp+var_6EA], 0Ah ;~ 18ED:0B2D
cs=0x18ed;eip=0x000b32; 	J(JGE(loc_28016));	// 47167 jge     short loc_28016 ;~ 18ED:0B32
cs=0x18ed;eip=0x000b34; 	T(MOV(al, *(raddr(ss,bp+var_6ea))));	// 47168 mov     al, [bp+var_6EA] ;~ 18ED:0B34
cs=0x18ed;eip=0x000b38; 	T(CBW);	// 47169 cbw ;~ 18ED:0B38
cs=0x18ed;eip=0x000b39; 	T(SHL(ax, 1));	// 47170 shl     ax, 1 ;~ 18ED:0B39
cs=0x18ed;eip=0x000b3b; 	T(ADD(ax, bp));	// 47171 add     ax, bp ;~ 18ED:0B3B
cs=0x18ed;eip=0x000b3d; 	X(MOV(*(dw*)(raddr(ss,bp+var_71c)), ax));	// 47172 mov     [bp+var_71C], ax ;~ 18ED:0B3D
cs=0x18ed;eip=0x000b41; 	T(MOV(bx, ax));	// 47173 mov     bx, ax ;~ 18ED:0B41
cs=0x18ed;eip=0x000b43; 	X(MOV(*(dw*)(raddr(ds,bx-0x16)), di));	// 47174 mov     [bx-16h], di ;~ 18ED:0B43
cs=0x18ed;eip=0x000b46; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_71c))));	// 47175 mov     bx, [bp+var_71C] ;~ 18ED:0B46
cs=0x18ed;eip=0x000b4a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6e6))));	// 47176 mov     ax, [bp+var_6E6] ;~ 18ED:0B4A
cs=0x18ed;eip=0x000b4e; 	X(MOV(*(dw*)(raddr(ds,bx-0x6B4)), ax));	// 47177 mov     [bx-6B4h], ax ;~ 18ED:0B4E
cs=0x18ed;eip=0x000b52; 	T(CMP(*(raddr(ss,bp+var_6ea)), 9));	// 47178 cmp     [bp+var_6EA], 9 ;~ 18ED:0B52
cs=0x18ed;eip=0x000b57; 	J(JNZ(loc_27f9e));	// 47179 jnz     short loc_27F9E ;~ 18ED:0B57
cs=0x18ed;eip=0x000b59; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_71c))));	// 47180 mov     bx, [bp+var_71C] ;~ 18ED:0B59
cs=0x18ed;eip=0x000b5d; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x6E4))));	// 47181 mov     ax, [bx-6E4h] ;~ 18ED:0B5D
cs=0x18ed;eip=0x000b61; 	T(ADD(ax, 0x0A));	// 47182 add     ax, 0Ah ;~ 18ED:0B61
cs=0x18ed;eip=0x000b64; 	J(JMP(loc_27fbb));	// 47183 jmp     short loc_27FBB ;~ 18ED:0B64
loc_28016:
	// 7499 
cs=0x18ed;eip=0x000b66; 	X(PUSH(word_3eb90));	// 47187 push    word_3EB90 ;~ 18ED:0B66
cs=0x18ed;eip=0x000b6a; 	X(PUSH(dialog_fnt_colour));	// 47188 push    dialog_fnt_colour ;~ 18ED:0B6A
cs=0x18ed;eip=0x000b6e; 	J(CALLF(font_set_unk,0));	// 47189 call    font_set_unk ;~ 18ED:0B6E
cs=0x18ed;eip=0x000b73; 	T(ADD(sp, 4));	// 47190 add     sp, 4 ;~ 18ED:0B73
cs=0x18ed;eip=0x000b76; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_70e +2)))));	// 47191 push    word ptr [bp+var_70E+2] ;~ 18ED:0B76
cs=0x18ed;eip=0x000b7a; 	X(PUSH(di));	// 47192 push    di ;~ 18ED:0B7A
cs=0x18ed;eip=0x000b7b; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 47193 push    word ptr [bp+arg_0] ;~ 18ED:0B7B
cs=0x18ed;eip=0x000b7e; 	J(CALLF(sub_345bc,0));	// 47194 call    sub_345BC ;~ 18ED:0B7E
cs=0x18ed;eip=0x000b83; 	T(ADD(sp, 6));	// 47195 add     sp, 6 ;~ 18ED:0B83
loc_28036:
	// 7500 
cs=0x18ed;eip=0x000b86; 	X(PUSH(cs));	// 47198 push    cs ;~ 18ED:0B86
cs=0x18ed;eip=0x000b87; 	J(CALL(mouse_draw_transparent_check,0));	// 47199 call    near ptr mouse_draw_transparent_check ;~ 18ED:0B87
cs=0x18ed;eip=0x000b8a; 	X(MOV(*(raddr(ss,bp+var_714)), 0));	// 47200 mov     [bp+var_714], 0 ;~ 18ED:0B8A
cs=0x18ed;eip=0x000b8f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_4)))));	// 47201 push    word ptr [bp+arg_4] ; int ;~ 18ED:0B8F
cs=0x18ed;eip=0x000b92; 	T(MOV(ax, offset(dseg,asc_3eb96)));	// 47202 mov     ax, offset asc_3EB96 ; "*" ;~ 18ED:0B92
cs=0x18ed;eip=0x000b95; 	X(PUSH(ax));	// 47203 push    ax ;~ 18ED:0B95
cs=0x18ed;eip=0x000b96; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 47204 push    word ptr [bp+arg_0] ; char * ;~ 18ED:0B96
cs=0x18ed;eip=0x000b99; 	J(CALLF(file_combine_and_find,0));	// 47205 call    file_combine_and_find ;~ 18ED:0B99
cs=0x18ed;eip=0x000b9e; 	T(ADD(sp, 6));	// 47206 add     sp, 6 ;~ 18ED:0B9E
cs=0x18ed;eip=0x000ba1; 	X(MOV(*(dw*)(raddr(ss,bp+var_6e8)), ax));	// 47207 mov     [bp+var_6E8], ax ;~ 18ED:0BA1
cs=0x18ed;eip=0x000ba5; 	T(OR(ax, ax));	// 47208 or      ax, ax ;~ 18ED:0BA5
cs=0x18ed;eip=0x000ba7; 	J(JNZ(loc_28094));	// 47209 jnz     short loc_28094 ;~ 18ED:0BA7
cs=0x18ed;eip=0x000ba9; 	J(CALLF(nullsub_1,0));	// 47210 call    nullsub_1 ;~ 18ED:0BA9
loc_2805e:
	// 7501 
cs=0x18ed;eip=0x000bae; 	X(PUSH(word_3eb90));	// 47213 push    word_3EB90 ;~ 18ED:0BAE
cs=0x18ed;eip=0x000bb2; 	X(PUSH(dialog_fnt_colour));	// 47214 push    dialog_fnt_colour ;~ 18ED:0BB2
cs=0x18ed;eip=0x000bb6; 	J(CALLF(font_set_unk,0));	// 47215 call    font_set_unk ;~ 18ED:0BB6
cs=0x18ed;eip=0x000bbb; 	T(ADD(sp, 4));	// 47216 add     sp, 4 ;~ 18ED:0BBB
cs=0x18ed;eip=0x000bbe; 	T(MOV(ax, offset(dseg,terraincenterpos)+0x22));	// 47217 mov     ax, (offset terraincenterpos+22h) ;~ 18ED:0BBE
cs=0x18ed;eip=0x000bc1; 	T(CWD);	// 47218 cwd ;~ 18ED:0BC1
cs=0x18ed;eip=0x000bc2; 	X(PUSH(dx));	// 47219 push    dx              ; int ;~ 18ED:0BC2
cs=0x18ed;eip=0x000bc3; 	X(PUSH(ax));	// 47220 push    ax              ; int ;~ 18ED:0BC3
cs=0x18ed;eip=0x000bc4; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_70e +2)))));	// 47221 push    word ptr [bp+var_70E+2] ; int ;~ 18ED:0BC4
cs=0x18ed;eip=0x000bc8; 	X(PUSH(di));	// 47222 push    di              ; int ;~ 18ED:0BC8
cs=0x18ed;eip=0x000bc9; 	T(MOV(ax, 0x12));	// 47223 mov     ax, 12h ;~ 18ED:0BC9
cs=0x18ed;eip=0x000bcc; 	X(PUSH(ax));	// 47224 push    ax ;~ 18ED:0BCC
cs=0x18ed;eip=0x000bcd; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 47225 push    word ptr [bp+arg_0] ; char * ;~ 18ED:0BCD
cs=0x18ed;eip=0x000bd0; 	X(PUSH(cs));	// 47226 push    cs ;~ 18ED:0BD0
cs=0x18ed;eip=0x000bd1; 	J(CALL(call_read_line,0));	// 47227 call    near ptr call_read_line ;~ 18ED:0BD1
cs=0x18ed;eip=0x000bd4; 	T(ADD(sp, 0x0C));	// 47228 add     sp, 0Ch ;~ 18ED:0BD4
cs=0x18ed;eip=0x000bd7; 	T(CMP(ax, 0x1B));	// 47229 cmp     ax, 1Bh ;~ 18ED:0BD7
cs=0x18ed;eip=0x000bda; 	J(JNZ(loc_28036));	// 47230 jnz     short loc_28036 ;~ 18ED:0BDA
loc_2808c:
	// 7502 
cs=0x18ed;eip=0x000bdc; 	X(MOV(*(raddr(ss,bp+var_6a0)), 0));	// 47233 mov     [bp+var_6A0], 0 ;~ 18ED:0BDC
cs=0x18ed;eip=0x000be1; 	J(JMP(loc_285ac));	// 47234 jmp     loc_285AC ;~ 18ED:0BE1
loc_28094:
	// 7503 
cs=0x18ed;eip=0x000be4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6e8))));	// 47238 push    [bp+var_6E8]    ; char * ;~ 18ED:0BE4
cs=0x18ed;eip=0x000be8; 	T(ax = bp+var_698);	// 47239 lea     ax, [bp+var_698] ;~ 18ED:0BE8
cs=0x18ed;eip=0x000bec; 	X(PUSH(ax));	// 47240 push    ax              ; int ;~ 18ED:0BEC
cs=0x18ed;eip=0x000bed; 	X(PUSH(cs));	// 47241 push    cs ;~ 18ED:0BED
cs=0x18ed;eip=0x000bee; 	J(CALL(parse_filepath_separators,0));	// 47242 call    near ptr parse_filepath_separators ;~ 18ED:0BEE
cs=0x18ed;eip=0x000bf1; 	T(ADD(sp, 4));	// 47243 add     sp, 4 ;~ 18ED:0BF1
cs=0x18ed;eip=0x000bf4; 	X(INC(*(raddr(ss,bp+var_714))));	// 47244 inc     [bp+var_714] ;~ 18ED:0BF4
loc_280a8:
	// 7504 
cs=0x18ed;eip=0x000bf8; 	J(CALLF(file_find_next_alt,0));	// 47247 call    file_find_next_alt ;~ 18ED:0BF8
cs=0x18ed;eip=0x000bfd; 	X(MOV(*(dw*)(raddr(ss,bp+var_6e8)), ax));	// 47248 mov     [bp+var_6E8], ax ;~ 18ED:0BFD
cs=0x18ed;eip=0x000c01; 	T(OR(ax, ax));	// 47249 or      ax, ax ;~ 18ED:0C01
cs=0x18ed;eip=0x000c03; 	J(JZ(loc_280e2));	// 47250 jz      short loc_280E2 ;~ 18ED:0C03
cs=0x18ed;eip=0x000c05; 	X(PUSH(ax));	// 47251 push    ax              ; char * ;~ 18ED:0C05
cs=0x18ed;eip=0x000c06; 	T(MOV(al, *(raddr(ss,bp+var_714))));	// 47252 mov     al, [bp+var_714] ;~ 18ED:0C06
cs=0x18ed;eip=0x000c0a; 	T(CBW);	// 47253 cbw ;~ 18ED:0C0A
cs=0x18ed;eip=0x000c0b; 	T(MOV(cx, ax));	// 47254 mov     cx, ax ;~ 18ED:0C0B
cs=0x18ed;eip=0x000c0d; 	T(SHL(ax, 1));	// 47255 shl     ax, 1 ;~ 18ED:0C0D
cs=0x18ed;eip=0x000c0f; 	T(ADD(ax, cx));	// 47256 add     ax, cx ;~ 18ED:0C0F
cs=0x18ed;eip=0x000c11; 	T(SHL(ax, 1));	// 47257 shl     ax, 1 ;~ 18ED:0C11
cs=0x18ed;eip=0x000c13; 	T(SHL(ax, 1));	// 47258 shl     ax, 1 ;~ 18ED:0C13
cs=0x18ed;eip=0x000c15; 	T(ADD(ax, cx));	// 47259 add     ax, cx ;~ 18ED:0C15
cs=0x18ed;eip=0x000c17; 	T(ADD(ax, bp));	// 47260 add     ax, bp ;~ 18ED:0C17
cs=0x18ed;eip=0x000c19; 	T(SUB(ax, 0x698));	// 47261 sub     ax, 698h ;~ 18ED:0C19
cs=0x18ed;eip=0x000c1c; 	X(PUSH(ax));	// 47262 push    ax              ; int ;~ 18ED:0C1C
cs=0x18ed;eip=0x000c1d; 	X(PUSH(cs));	// 47263 push    cs ;~ 18ED:0C1D
cs=0x18ed;eip=0x000c1e; 	J(CALL(parse_filepath_separators,0));	// 47264 call    near ptr parse_filepath_separators ;~ 18ED:0C1E
cs=0x18ed;eip=0x000c21; 	T(ADD(sp, 4));	// 47265 add     sp, 4 ;~ 18ED:0C21
cs=0x18ed;eip=0x000c24; 	X(INC(*(raddr(ss,bp+var_714))));	// 47266 inc     [bp+var_714] ;~ 18ED:0C24
cs=0x18ed;eip=0x000c28; 	T(MOV(al, *(raddr(ss,bp+var_714))));	// 47267 mov     al, [bp+var_714] ;~ 18ED:0C28
cs=0x18ed;eip=0x000c2c; 	T(CBW);	// 47268 cbw ;~ 18ED:0C2C
cs=0x18ed;eip=0x000c2d; 	T(CMP(ax, 0x80));	// 47269 cmp     ax, 80h ; '€' ;~ 18ED:0C2D
cs=0x18ed;eip=0x000c30; 	J(JNZ(loc_280a8));	// 47270 jnz     short loc_280A8 ;~ 18ED:0C30
loc_280e2:
	// 7505 
cs=0x18ed;eip=0x000c32; 	J(CALLF(nullsub_1,0));	// 47273 call    nullsub_1 ;~ 18ED:0C32
cs=0x18ed;eip=0x000c37; 	T(CMP(*(raddr(ss,bp+var_714)), 1));	// 47274 cmp     [bp+var_714], 1 ;~ 18ED:0C37
cs=0x18ed;eip=0x000c3c; 	J(JG(loc_280f1));	// 47275 jg      short loc_280F1 ;~ 18ED:0C3C
cs=0x18ed;eip=0x000c3e; 	J(JMP(loc_281cc));	// 47276 jmp     loc_281CC ;~ 18ED:0C3E
loc_280f1:
	// 7506 
cs=0x18ed;eip=0x000c41; 	T(SUB(si, si));	// 47280 sub     si, si ;~ 18ED:0C41
cs=0x18ed;eip=0x000c43; 	J(JMP(loc_281b7));	// 47281 jmp     loc_281B7 ;~ 18ED:0C43
loc_280f6:
	// 7507 
cs=0x18ed;eip=0x000c46; 	X(INC(*(dw*)(raddr(ss,bp+var_6ca))));	// 47286 inc     [bp+var_6CA] ;~ 18ED:0C46
loc_280fa:
	// 7508 
cs=0x18ed;eip=0x000c4a; 	T(MOV(al, *(raddr(ss,bp+var_714))));	// 47289 mov     al, [bp+var_714] ;~ 18ED:0C4A
cs=0x18ed;eip=0x000c4e; 	T(CBW);	// 47290 cbw ;~ 18ED:0C4E
cs=0x18ed;eip=0x000c4f; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_6ca))));	// 47291 cmp     ax, [bp+var_6CA] ;~ 18ED:0C4F
cs=0x18ed;eip=0x000c53; 	J(JA(loc_28108));	// 47292 ja      short loc_28108 ;~ 18ED:0C53
cs=0x18ed;eip=0x000c55; 	J(JMP(loc_281b6));	// 47293 jmp     loc_281B6 ;~ 18ED:0C55
loc_28108:
	// 7509 
cs=0x18ed;eip=0x000c58; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6ca))));	// 47297 mov     ax, [bp+var_6CA] ;~ 18ED:0C58
cs=0x18ed;eip=0x000c5c; 	T(MOV(cx, ax));	// 47298 mov     cx, ax ;~ 18ED:0C5C
cs=0x18ed;eip=0x000c5e; 	T(SHL(ax, 1));	// 47299 shl     ax, 1 ;~ 18ED:0C5E
cs=0x18ed;eip=0x000c60; 	T(ADD(ax, cx));	// 47300 add     ax, cx ;~ 18ED:0C60
cs=0x18ed;eip=0x000c62; 	T(SHL(ax, 1));	// 47301 shl     ax, 1 ;~ 18ED:0C62
cs=0x18ed;eip=0x000c64; 	T(SHL(ax, 1));	// 47302 shl     ax, 1 ;~ 18ED:0C64
cs=0x18ed;eip=0x000c66; 	T(ADD(ax, cx));	// 47303 add     ax, cx ;~ 18ED:0C66
cs=0x18ed;eip=0x000c68; 	T(ADD(ax, bp));	// 47304 add     ax, bp ;~ 18ED:0C68
cs=0x18ed;eip=0x000c6a; 	T(SUB(ax, 0x698));	// 47305 sub     ax, 698h ;~ 18ED:0C6A
cs=0x18ed;eip=0x000c6d; 	X(PUSH(ax));	// 47306 push    ax ;~ 18ED:0C6D
cs=0x18ed;eip=0x000c6e; 	T(MOV(ax, si));	// 47307 mov     ax, si ;~ 18ED:0C6E
cs=0x18ed;eip=0x000c70; 	T(MOV(cx, ax));	// 47308 mov     cx, ax ;~ 18ED:0C70
cs=0x18ed;eip=0x000c72; 	T(SHL(ax, 1));	// 47309 shl     ax, 1 ;~ 18ED:0C72
cs=0x18ed;eip=0x000c74; 	T(ADD(ax, cx));	// 47310 add     ax, cx ;~ 18ED:0C74
cs=0x18ed;eip=0x000c76; 	T(SHL(ax, 1));	// 47311 shl     ax, 1 ;~ 18ED:0C76
cs=0x18ed;eip=0x000c78; 	T(SHL(ax, 1));	// 47312 shl     ax, 1 ;~ 18ED:0C78
cs=0x18ed;eip=0x000c7a; 	T(ADD(ax, cx));	// 47313 add     ax, cx ;~ 18ED:0C7A
cs=0x18ed;eip=0x000c7c; 	T(ADD(ax, bp));	// 47314 add     ax, bp ;~ 18ED:0C7C
cs=0x18ed;eip=0x000c7e; 	T(SUB(ax, 0x698));	// 47315 sub     ax, 698h ;~ 18ED:0C7E
cs=0x18ed;eip=0x000c81; 	X(PUSH(ax));	// 47316 push    ax              ; char * ;~ 18ED:0C81
cs=0x18ed;eip=0x000c82; 	J(CALLF(_strcmp,0));	// 47317 call    _strcmp ;~ 18ED:0C82
cs=0x18ed;eip=0x000c87; 	T(ADD(sp, 4));	// 47318 add     sp, 4 ;~ 18ED:0C87
cs=0x18ed;eip=0x000c8a; 	T(OR(ax, ax));	// 47319 or      ax, ax ;~ 18ED:0C8A
cs=0x18ed;eip=0x000c8c; 	J(JLE(loc_280f6));	// 47320 jle     short loc_280F6 ;~ 18ED:0C8C
cs=0x18ed;eip=0x000c8e; 	T(MOV(ax, si));	// 47321 mov     ax, si ;~ 18ED:0C8E
cs=0x18ed;eip=0x000c90; 	T(MOV(cx, ax));	// 47322 mov     cx, ax ;~ 18ED:0C90
cs=0x18ed;eip=0x000c92; 	T(SHL(ax, 1));	// 47323 shl     ax, 1 ;~ 18ED:0C92
cs=0x18ed;eip=0x000c94; 	T(ADD(ax, cx));	// 47324 add     ax, cx ;~ 18ED:0C94
cs=0x18ed;eip=0x000c96; 	T(SHL(ax, 1));	// 47325 shl     ax, 1 ;~ 18ED:0C96
cs=0x18ed;eip=0x000c98; 	T(SHL(ax, 1));	// 47326 shl     ax, 1 ;~ 18ED:0C98
cs=0x18ed;eip=0x000c9a; 	T(ADD(ax, cx));	// 47327 add     ax, cx ;~ 18ED:0C9A
cs=0x18ed;eip=0x000c9c; 	T(ADD(ax, bp));	// 47328 add     ax, bp ;~ 18ED:0C9C
cs=0x18ed;eip=0x000c9e; 	T(SUB(ax, 0x698));	// 47329 sub     ax, 698h ;~ 18ED:0C9E
cs=0x18ed;eip=0x000ca1; 	X(PUSH(ax));	// 47330 push    ax ;~ 18ED:0CA1
cs=0x18ed;eip=0x000ca2; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 47331 mov     ax, offset resID_byte1 ;~ 18ED:0CA2
cs=0x18ed;eip=0x000ca5; 	X(PUSH(ax));	// 47332 push    ax              ; char * ;~ 18ED:0CA5
cs=0x18ed;eip=0x000ca6; 	J(CALLF(_strcpy,0));	// 47333 call    _strcpy ;~ 18ED:0CA6
cs=0x18ed;eip=0x000cab; 	T(ADD(sp, 4));	// 47334 add     sp, 4 ;~ 18ED:0CAB
cs=0x18ed;eip=0x000cae; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6ca))));	// 47335 mov     ax, [bp+var_6CA] ;~ 18ED:0CAE
cs=0x18ed;eip=0x000cb2; 	T(MOV(cx, ax));	// 47336 mov     cx, ax ;~ 18ED:0CB2
cs=0x18ed;eip=0x000cb4; 	T(SHL(ax, 1));	// 47337 shl     ax, 1 ;~ 18ED:0CB4
cs=0x18ed;eip=0x000cb6; 	T(ADD(ax, cx));	// 47338 add     ax, cx ;~ 18ED:0CB6
cs=0x18ed;eip=0x000cb8; 	T(SHL(ax, 1));	// 47339 shl     ax, 1 ;~ 18ED:0CB8
cs=0x18ed;eip=0x000cba; 	T(SHL(ax, 1));	// 47340 shl     ax, 1 ;~ 18ED:0CBA
cs=0x18ed;eip=0x000cbc; 	T(ADD(ax, cx));	// 47341 add     ax, cx ;~ 18ED:0CBC
cs=0x18ed;eip=0x000cbe; 	T(ADD(ax, bp));	// 47342 add     ax, bp ;~ 18ED:0CBE
cs=0x18ed;eip=0x000cc0; 	T(SUB(ax, 0x698));	// 47343 sub     ax, 698h ;~ 18ED:0CC0
cs=0x18ed;eip=0x000cc3; 	X(PUSH(ax));	// 47344 push    ax ;~ 18ED:0CC3
cs=0x18ed;eip=0x000cc4; 	T(MOV(ax, si));	// 47345 mov     ax, si ;~ 18ED:0CC4
cs=0x18ed;eip=0x000cc6; 	T(MOV(cx, ax));	// 47346 mov     cx, ax ;~ 18ED:0CC6
cs=0x18ed;eip=0x000cc8; 	T(SHL(ax, 1));	// 47347 shl     ax, 1 ;~ 18ED:0CC8
cs=0x18ed;eip=0x000cca; 	T(ADD(ax, cx));	// 47348 add     ax, cx ;~ 18ED:0CCA
cs=0x18ed;eip=0x000ccc; 	T(SHL(ax, 1));	// 47349 shl     ax, 1 ;~ 18ED:0CCC
cs=0x18ed;eip=0x000cce; 	T(SHL(ax, 1));	// 47350 shl     ax, 1 ;~ 18ED:0CCE
cs=0x18ed;eip=0x000cd0; 	T(ADD(ax, cx));	// 47351 add     ax, cx ;~ 18ED:0CD0
cs=0x18ed;eip=0x000cd2; 	T(ADD(ax, bp));	// 47352 add     ax, bp ;~ 18ED:0CD2
cs=0x18ed;eip=0x000cd4; 	T(SUB(ax, 0x698));	// 47353 sub     ax, 698h ;~ 18ED:0CD4
cs=0x18ed;eip=0x000cd7; 	X(PUSH(ax));	// 47354 push    ax              ; char * ;~ 18ED:0CD7
cs=0x18ed;eip=0x000cd8; 	J(CALLF(_strcpy,0));	// 47355 call    _strcpy ;~ 18ED:0CD8
cs=0x18ed;eip=0x000cdd; 	T(ADD(sp, 4));	// 47356 add     sp, 4 ;~ 18ED:0CDD
cs=0x18ed;eip=0x000ce0; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 47357 mov     ax, offset resID_byte1 ;~ 18ED:0CE0
cs=0x18ed;eip=0x000ce3; 	X(PUSH(ax));	// 47358 push    ax ;~ 18ED:0CE3
cs=0x18ed;eip=0x000ce4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6ca))));	// 47359 mov     ax, [bp+var_6CA] ;~ 18ED:0CE4
cs=0x18ed;eip=0x000ce8; 	T(MOV(cx, ax));	// 47360 mov     cx, ax ;~ 18ED:0CE8
cs=0x18ed;eip=0x000cea; 	T(SHL(ax, 1));	// 47361 shl     ax, 1 ;~ 18ED:0CEA
cs=0x18ed;eip=0x000cec; 	T(ADD(ax, cx));	// 47362 add     ax, cx ;~ 18ED:0CEC
cs=0x18ed;eip=0x000cee; 	T(SHL(ax, 1));	// 47363 shl     ax, 1 ;~ 18ED:0CEE
cs=0x18ed;eip=0x000cf0; 	T(SHL(ax, 1));	// 47364 shl     ax, 1 ;~ 18ED:0CF0
cs=0x18ed;eip=0x000cf2; 	T(ADD(ax, cx));	// 47365 add     ax, cx ;~ 18ED:0CF2
cs=0x18ed;eip=0x000cf4; 	T(ADD(ax, bp));	// 47366 add     ax, bp ;~ 18ED:0CF4
cs=0x18ed;eip=0x000cf6; 	T(SUB(ax, 0x698));	// 47367 sub     ax, 698h ;~ 18ED:0CF6
cs=0x18ed;eip=0x000cf9; 	X(PUSH(ax));	// 47368 push    ax              ; char * ;~ 18ED:0CF9
cs=0x18ed;eip=0x000cfa; 	J(CALLF(_strcpy,0));	// 47369 call    _strcpy ;~ 18ED:0CFA
cs=0x18ed;eip=0x000cff; 	T(ADD(sp, 4));	// 47370 add     sp, 4 ;~ 18ED:0CFF
cs=0x18ed;eip=0x000d02; 	J(JMP(loc_280f6));	// 47371 jmp     loc_280F6 ;~ 18ED:0D02
loc_281b6:
	// 7510 
cs=0x18ed;eip=0x000d06; 	T(INC(si));	// 47376 inc     si ;~ 18ED:0D06
loc_281b7:
	// 7511 
cs=0x18ed;eip=0x000d07; 	T(MOV(al, *(raddr(ss,bp+var_714))));	// 47379 mov     al, [bp+var_714] ;~ 18ED:0D07
cs=0x18ed;eip=0x000d0b; 	T(CBW);	// 47380 cbw ;~ 18ED:0D0B
cs=0x18ed;eip=0x000d0c; 	T(DEC(ax));	// 47381 dec     ax ;~ 18ED:0D0C
cs=0x18ed;eip=0x000d0d; 	T(CMP(ax, si));	// 47382 cmp     ax, si ;~ 18ED:0D0D
cs=0x18ed;eip=0x000d0f; 	J(JBE(loc_281cc));	// 47383 jbe     short loc_281CC ;~ 18ED:0D0F
cs=0x18ed;eip=0x000d11; 	T(ax = si+1);	// 47384 lea     ax, [si+1] ;~ 18ED:0D11
cs=0x18ed;eip=0x000d14; 	X(MOV(*(dw*)(raddr(ss,bp+var_6ca)), ax));	// 47385 mov     [bp+var_6CA], ax ;~ 18ED:0D14
cs=0x18ed;eip=0x000d18; 	J(JMP(loc_280fa));	// 47386 jmp     loc_280FA ;~ 18ED:0D18
loc_281cc:
	// 7512 
cs=0x18ed;eip=0x000d1c; 	T(CMP(*(raddr(ss,bp+var_714)), 7));	// 47392 cmp     [bp+var_714], 7 ;~ 18ED:0D1C
cs=0x18ed;eip=0x000d21; 	J(JLE(loc_2824d));	// 47393 jle     short loc_2824D ;~ 18ED:0D21
cs=0x18ed;eip=0x000d23; 	T(MOV(ax, offset(dseg,alsu)));	// 47394 mov     ax, offset aLsu ; "lsu" ;~ 18ED:0D23
cs=0x18ed;eip=0x000d26; 	X(PUSH(ax));	// 47395 push    ax ;~ 18ED:0D26
cs=0x18ed;eip=0x000d27; 	X(PUSH(word_44cee));	// 47396 push    word_44CEE ;~ 18ED:0D27
cs=0x18ed;eip=0x000d2b; 	X(PUSH(mainresptr));	// 47397 push    mainresptr ;~ 18ED:0D2B
cs=0x18ed;eip=0x000d2f; 	X(PUSH(cs));	// 47398 push    cs ;~ 18ED:0D2F
cs=0x18ed;eip=0x000d30; 	J(CALL(locate_text_res,0));	// 47399 call    near ptr locate_text_res ;~ 18ED:0D30
cs=0x18ed;eip=0x000d33; 	T(ADD(sp, 6));	// 47400 add     sp, 6 ;~ 18ED:0D33
cs=0x18ed;eip=0x000d36; 	X(PUSH(dx));	// 47401 push    dx ;~ 18ED:0D36
cs=0x18ed;eip=0x000d37; 	X(PUSH(ax));	// 47402 push    ax ;~ 18ED:0D37
cs=0x18ed;eip=0x000d38; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 47403 mov     ax, offset resID_byte1 ;~ 18ED:0D38
cs=0x18ed;eip=0x000d3b; 	X(PUSH(ax));	// 47404 push    ax ;~ 18ED:0D3B
cs=0x18ed;eip=0x000d3c; 	X(PUSH(cs));	// 47405 push    cs ;~ 18ED:0D3C
cs=0x18ed;eip=0x000d3d; 	J(CALL(copy_string,0));	// 47406 call    near ptr copy_string ;~ 18ED:0D3D
cs=0x18ed;eip=0x000d40; 	T(ADD(sp, 6));	// 47407 add     sp, 6 ;~ 18ED:0D40
cs=0x18ed;eip=0x000d43; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6e0))));	// 47408 push    [bp+var_6E0] ;~ 18ED:0D43
cs=0x18ed;eip=0x000d47; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 47409 mov     ax, offset resID_byte1 ;~ 18ED:0D47
cs=0x18ed;eip=0x000d4a; 	X(PUSH(ax));	// 47410 push    ax ;~ 18ED:0D4A
cs=0x18ed;eip=0x000d4b; 	X(PUSH(cs));	// 47411 push    cs ;~ 18ED:0D4B
cs=0x18ed;eip=0x000d4c; 	J(CALL(font_op2_alt,0));	// 47412 call    near ptr font_op2_alt ;~ 18ED:0D4C
cs=0x18ed;eip=0x000d4f; 	T(ADD(sp, 2));	// 47413 add     sp, 2 ;~ 18ED:0D4F
cs=0x18ed;eip=0x000d52; 	X(PUSH(ax));	// 47414 push    ax ;~ 18ED:0D52
cs=0x18ed;eip=0x000d53; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 47415 mov     ax, offset resID_byte1 ;~ 18ED:0D53
cs=0x18ed;eip=0x000d56; 	X(PUSH(ax));	// 47416 push    ax ;~ 18ED:0D56
cs=0x18ed;eip=0x000d57; 	J(CALLF(sub_345bc,0));	// 47417 call    sub_345BC ;~ 18ED:0D57
cs=0x18ed;eip=0x000d5c; 	T(ADD(sp, 6));	// 47418 add     sp, 6 ;~ 18ED:0D5C
cs=0x18ed;eip=0x000d5f; 	T(MOV(ax, offset(dseg,alsd)));	// 47419 mov     ax, offset aLsd ; "lsd" ;~ 18ED:0D5F
cs=0x18ed;eip=0x000d62; 	X(PUSH(ax));	// 47420 push    ax ;~ 18ED:0D62
cs=0x18ed;eip=0x000d63; 	X(PUSH(word_44cee));	// 47421 push    word_44CEE ;~ 18ED:0D63
cs=0x18ed;eip=0x000d67; 	X(PUSH(mainresptr));	// 47422 push    mainresptr ;~ 18ED:0D67
cs=0x18ed;eip=0x000d6b; 	X(PUSH(cs));	// 47423 push    cs ;~ 18ED:0D6B
cs=0x18ed;eip=0x000d6c; 	J(CALL(locate_text_res,0));	// 47424 call    near ptr locate_text_res ;~ 18ED:0D6C
cs=0x18ed;eip=0x000d6f; 	T(ADD(sp, 6));	// 47425 add     sp, 6 ;~ 18ED:0D6F
cs=0x18ed;eip=0x000d72; 	X(PUSH(dx));	// 47426 push    dx ;~ 18ED:0D72
cs=0x18ed;eip=0x000d73; 	X(PUSH(ax));	// 47427 push    ax ;~ 18ED:0D73
cs=0x18ed;eip=0x000d74; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 47428 mov     ax, offset resID_byte1 ;~ 18ED:0D74
cs=0x18ed;eip=0x000d77; 	X(PUSH(ax));	// 47429 push    ax ;~ 18ED:0D77
cs=0x18ed;eip=0x000d78; 	X(PUSH(cs));	// 47430 push    cs ;~ 18ED:0D78
cs=0x18ed;eip=0x000d79; 	J(CALL(copy_string,0));	// 47431 call    near ptr copy_string ;~ 18ED:0D79
cs=0x18ed;eip=0x000d7c; 	T(ADD(sp, 6));	// 47432 add     sp, 6 ;~ 18ED:0D7C
cs=0x18ed;eip=0x000d7f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6d0))));	// 47433 mov     ax, [bp+var_6D0] ;~ 18ED:0D7F
cs=0x18ed;eip=0x000d83; 	T(DEC(ax));	// 47434 dec     ax ;~ 18ED:0D83
cs=0x18ed;eip=0x000d84; 	X(PUSH(ax));	// 47435 push    ax ;~ 18ED:0D84
cs=0x18ed;eip=0x000d85; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 47436 mov     ax, offset resID_byte1 ;~ 18ED:0D85
cs=0x18ed;eip=0x000d88; 	X(PUSH(ax));	// 47437 push    ax ;~ 18ED:0D88
cs=0x18ed;eip=0x000d89; 	X(PUSH(cs));	// 47438 push    cs ;~ 18ED:0D89
cs=0x18ed;eip=0x000d8a; 	J(CALL(font_op2_alt,0));	// 47439 call    near ptr font_op2_alt ;~ 18ED:0D8A
cs=0x18ed;eip=0x000d8d; 	T(ADD(sp, 2));	// 47440 add     sp, 2 ;~ 18ED:0D8D
cs=0x18ed;eip=0x000d90; 	X(PUSH(ax));	// 47441 push    ax ;~ 18ED:0D90
cs=0x18ed;eip=0x000d91; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 47442 mov     ax, offset resID_byte1 ;~ 18ED:0D91
cs=0x18ed;eip=0x000d94; 	X(PUSH(ax));	// 47443 push    ax ;~ 18ED:0D94
cs=0x18ed;eip=0x000d95; 	J(CALLF(sub_345bc,0));	// 47444 call    sub_345BC ;~ 18ED:0D95
cs=0x18ed;eip=0x000d9a; 	T(ADD(sp, 6));	// 47445 add     sp, 6 ;~ 18ED:0D9A
loc_2824d:
	// 7513 
cs=0x18ed;eip=0x000d9d; 	X(MOV(*(raddr(ss,bp+var_716)), 0));	// 47448 mov     [bp+var_716], 0 ;~ 18ED:0D9D
cs=0x18ed;eip=0x000da2; 	X(MOV(*(raddr(ss,bp+var_69a)), 0));	// 47449 mov     [bp+var_69A], 0 ;~ 18ED:0DA2
cs=0x18ed;eip=0x000da7; 	X(MOV(*(raddr(ss,bp+var_6e4)), 0x0FF));	// 47450 mov     [bp+var_6E4], 0FFh ;~ 18ED:0DA7
cs=0x18ed;eip=0x000dac; 	X(MOV(*(raddr(ss,bp+var_718)), 0x0FF));	// 47451 mov     [bp+var_718], 0FFh ;~ 18ED:0DAC
cs=0x18ed;eip=0x000db1; 	X(PUSH(cs));	// 47452 push    cs ;~ 18ED:0DB1
cs=0x18ed;eip=0x000db2; 	J(CALL(timer_get_delta_alt,0));	// 47453 call    near ptr timer_get_delta_alt ;~ 18ED:0DB2
cs=0x18ed;eip=0x000db5; 	X(MOV(*(raddr(ss,bp+var_2)), 0));	// 47454 mov     [bp+var_2], 0 ;~ 18ED:0DB5
loc_28269:
	// 7514 
cs=0x18ed;eip=0x000db9; 	T(MOV(al, *(raddr(ss,bp+var_6e4))));	// 47457 mov     al, [bp+var_6E4] ;~ 18ED:0DB9
cs=0x18ed;eip=0x000dbd; 	T(CMP(*(raddr(ss,bp+var_716)), al));	// 47458 cmp     [bp+var_716], al ;~ 18ED:0DBD
cs=0x18ed;eip=0x000dc1; 	J(JNZ(loc_28280));	// 47459 jnz     short loc_28280 ;~ 18ED:0DC1
cs=0x18ed;eip=0x000dc3; 	T(MOV(al, *(raddr(ss,bp+var_718))));	// 47460 mov     al, [bp+var_718] ;~ 18ED:0DC3
cs=0x18ed;eip=0x000dc7; 	T(CMP(*(raddr(ss,bp+var_69a)), al));	// 47461 cmp     [bp+var_69A], al ;~ 18ED:0DC7
cs=0x18ed;eip=0x000dcb; 	J(JNZ(loc_28280));	// 47462 jnz     short loc_28280 ;~ 18ED:0DCB
cs=0x18ed;eip=0x000dcd; 	J(JMP(loc_28370));	// 47463 jmp     loc_28370 ;~ 18ED:0DCD
loc_28280:
	// 7515 
cs=0x18ed;eip=0x000dd0; 	T(MOV(al, *(raddr(ss,bp+var_716))));	// 47468 mov     al, [bp+var_716] ;~ 18ED:0DD0
cs=0x18ed;eip=0x000dd4; 	X(MOV(*(raddr(ss,bp+var_6e4)), al));	// 47469 mov     [bp+var_6E4], al ;~ 18ED:0DD4
cs=0x18ed;eip=0x000dd8; 	T(MOV(al, *(raddr(ss,bp+var_69a))));	// 47470 mov     al, [bp+var_69A] ;~ 18ED:0DD8
cs=0x18ed;eip=0x000ddc; 	X(MOV(*(raddr(ss,bp+var_718)), al));	// 47471 mov     [bp+var_718], al ;~ 18ED:0DDC
cs=0x18ed;eip=0x000de0; 	X(PUSH(cs));	// 47472 push    cs ;~ 18ED:0DE0
cs=0x18ed;eip=0x000de1; 	J(CALL(mouse_draw_opaque_check,0));	// 47473 call    near ptr mouse_draw_opaque_check ;~ 18ED:0DE1
cs=0x18ed;eip=0x000de4; 	T(SUB(si, si));	// 47474 sub     si, si ;~ 18ED:0DE4
cs=0x18ed;eip=0x000de6; 	J(JMP(loc_28346));	// 47475 jmp     loc_28346 ;~ 18ED:0DE6
loc_2829a:
	// 7516 
cs=0x18ed;eip=0x000dea; 	X(PUSH(word_3eb90));	// 47480 push    word_3EB90 ;~ 18ED:0DEA
cs=0x18ed;eip=0x000dee; 	X(PUSH(dialog_fnt_colour));	// 47481 push    dialog_fnt_colour ;~ 18ED:0DEE
loc_282a2:
	// 7517 
cs=0x18ed;eip=0x000df2; 	J(CALLF(font_set_unk,0));	// 47484 call    font_set_unk ;~ 18ED:0DF2
cs=0x18ed;eip=0x000df7; 	T(ADD(sp, 4));	// 47485 add     sp, 4 ;~ 18ED:0DF7
cs=0x18ed;eip=0x000dfa; 	T(MOV(al, *(raddr(ss,bp+var_69a))));	// 47486 mov     al, [bp+var_69A] ;~ 18ED:0DFA
cs=0x18ed;eip=0x000dfe; 	T(CBW);	// 47487 cbw ;~ 18ED:0DFE
cs=0x18ed;eip=0x000dff; 	T(ADD(ax, si));	// 47488 add     ax, si ;~ 18ED:0DFF
cs=0x18ed;eip=0x000e01; 	X(MOV(*(dw*)(raddr(ss,bp+var_71c)), ax));	// 47489 mov     [bp+var_71C], ax ;~ 18ED:0E01
cs=0x18ed;eip=0x000e05; 	T(MOV(al, *(raddr(ss,bp+var_714))));	// 47490 mov     al, [bp+var_714] ;~ 18ED:0E05
cs=0x18ed;eip=0x000e09; 	T(CBW);	// 47491 cbw ;~ 18ED:0E09
cs=0x18ed;eip=0x000e0a; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_71c))));	// 47492 cmp     ax, [bp+var_71C] ;~ 18ED:0E0A
cs=0x18ed;eip=0x000e0e; 	J(JBE(loc_282f2));	// 47493 jbe     short loc_282F2 ;~ 18ED:0E0E
cs=0x18ed;eip=0x000e10; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_71c))));	// 47494 mov     ax, [bp+var_71C] ;~ 18ED:0E10
cs=0x18ed;eip=0x000e14; 	T(MOV(cx, ax));	// 47495 mov     cx, ax ;~ 18ED:0E14
cs=0x18ed;eip=0x000e16; 	T(SHL(ax, 1));	// 47496 shl     ax, 1 ;~ 18ED:0E16
cs=0x18ed;eip=0x000e18; 	T(ADD(ax, cx));	// 47497 add     ax, cx ;~ 18ED:0E18
cs=0x18ed;eip=0x000e1a; 	T(SHL(ax, 1));	// 47498 shl     ax, 1 ;~ 18ED:0E1A
cs=0x18ed;eip=0x000e1c; 	T(SHL(ax, 1));	// 47499 shl     ax, 1 ;~ 18ED:0E1C
cs=0x18ed;eip=0x000e1e; 	T(ADD(ax, cx));	// 47500 add     ax, cx ;~ 18ED:0E1E
cs=0x18ed;eip=0x000e20; 	T(ADD(ax, bp));	// 47501 add     ax, bp ;~ 18ED:0E20
cs=0x18ed;eip=0x000e22; 	T(SUB(ax, 0x698));	// 47502 sub     ax, 698h ;~ 18ED:0E22
cs=0x18ed;eip=0x000e25; 	X(PUSH(ax));	// 47503 push    ax ;~ 18ED:0E25
cs=0x18ed;eip=0x000e26; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 47504 mov     ax, offset resID_byte1 ;~ 18ED:0E26
cs=0x18ed;eip=0x000e29; 	X(PUSH(ax));	// 47505 push    ax              ; char * ;~ 18ED:0E29
cs=0x18ed;eip=0x000e2a; 	J(CALLF(_strcpy,0));	// 47506 call    _strcpy ;~ 18ED:0E2A
cs=0x18ed;eip=0x000e2f; 	T(ADD(sp, 4));	// 47507 add     sp, 4 ;~ 18ED:0E2F
cs=0x18ed;eip=0x000e32; 	T(MOV(bx, si));	// 47508 mov     bx, si ;~ 18ED:0E32
cs=0x18ed;eip=0x000e34; 	T(SHL(bx, 1));	// 47509 shl     bx, 1 ;~ 18ED:0E34
cs=0x18ed;eip=0x000e36; 	T(ADD(bx, bp));	// 47510 add     bx, bp ;~ 18ED:0E36
cs=0x18ed;eip=0x000e38; 	X(PUSH(*(dw*)(raddr(ds,bx-0x6DE))));	// 47511 push    word ptr [bx-6DEh] ;~ 18ED:0E38
cs=0x18ed;eip=0x000e3c; 	X(PUSH(di));	// 47512 push    di ;~ 18ED:0E3C
cs=0x18ed;eip=0x000e3d; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 47513 mov     ax, offset resID_byte1 ;~ 18ED:0E3D
cs=0x18ed;eip=0x000e40; 	J(JMP(loc_28300));	// 47514 jmp     short loc_28300 ;~ 18ED:0E40
loc_282f2:
	// 7518 
cs=0x18ed;eip=0x000e42; 	T(MOV(bx, si));	// 47518 mov     bx, si ;~ 18ED:0E42
cs=0x18ed;eip=0x000e44; 	T(SHL(bx, 1));	// 47519 shl     bx, 1 ;~ 18ED:0E44
cs=0x18ed;eip=0x000e46; 	T(ADD(bx, bp));	// 47520 add     bx, bp ;~ 18ED:0E46
cs=0x18ed;eip=0x000e48; 	X(PUSH(*(dw*)(raddr(ds,bx-0x6DE))));	// 47521 push    word ptr [bx-6DEh] ;~ 18ED:0E48
cs=0x18ed;eip=0x000e4c; 	X(PUSH(di));	// 47522 push    di ;~ 18ED:0E4C
cs=0x18ed;eip=0x000e4d; 	T(MOV(ax, offset(dseg,asc_3eba0)));	// 47523 mov     ax, offset asc_3EBA0 ; "        " ;~ 18ED:0E4D
loc_28300:
	// 7519 
cs=0x18ed;eip=0x000e50; 	X(PUSH(ax));	// 47526 push    ax ;~ 18ED:0E50
cs=0x18ed;eip=0x000e51; 	J(CALLF(sub_345bc,0));	// 47527 call    sub_345BC ;~ 18ED:0E51
cs=0x18ed;eip=0x000e56; 	T(ADD(sp, 6));	// 47528 add     sp, 6 ;~ 18ED:0E56
cs=0x18ed;eip=0x000e59; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 47529 mov     ax, offset resID_byte1 ;~ 18ED:0E59
cs=0x18ed;eip=0x000e5c; 	X(PUSH(ax));	// 47530 push    ax ;~ 18ED:0E5C
cs=0x18ed;eip=0x000e5d; 	J(CALLF(font_op2,0));	// 47531 call    font_op2 ;~ 18ED:0E5D
cs=0x18ed;eip=0x000e62; 	T(ADD(sp, 2));	// 47532 add     sp, 2 ;~ 18ED:0E62
cs=0x18ed;eip=0x000e65; 	X(MOV(*(dw*)(raddr(ss,bp+var_71a)), ax));	// 47533 mov     [bp+var_71A], ax ;~ 18ED:0E65
cs=0x18ed;eip=0x000e69; 	X(PUSH(word_3eb90));	// 47534 push    word_3EB90 ;~ 18ED:0E69
cs=0x18ed;eip=0x000e6d; 	T(MOV(ax, 8));	// 47535 mov     ax, 8 ;~ 18ED:0E6D
cs=0x18ed;eip=0x000e70; 	X(PUSH(ax));	// 47536 push    ax ;~ 18ED:0E70
cs=0x18ed;eip=0x000e71; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6e6))));	// 47537 mov     ax, [bp+var_6E6] ;~ 18ED:0E71
cs=0x18ed;eip=0x000e75; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_71a))));	// 47538 sub     ax, [bp+var_71A] ;~ 18ED:0E75
cs=0x18ed;eip=0x000e79; 	T(SUB(ax, di));	// 47539 sub     ax, di ;~ 18ED:0E79
cs=0x18ed;eip=0x000e7b; 	X(PUSH(ax));	// 47540 push    ax ;~ 18ED:0E7B
cs=0x18ed;eip=0x000e7c; 	T(MOV(bx, si));	// 47541 mov     bx, si ;~ 18ED:0E7C
cs=0x18ed;eip=0x000e7e; 	T(SHL(bx, 1));	// 47542 shl     bx, 1 ;~ 18ED:0E7E
cs=0x18ed;eip=0x000e80; 	T(ADD(bx, bp));	// 47543 add     bx, bp ;~ 18ED:0E80
cs=0x18ed;eip=0x000e82; 	X(PUSH(*(dw*)(raddr(ds,bx-0x6DE))));	// 47544 push    word ptr [bx-6DEh] ;~ 18ED:0E82
cs=0x18ed;eip=0x000e86; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_71a))));	// 47545 mov     ax, [bp+var_71A] ;~ 18ED:0E86
cs=0x18ed;eip=0x000e8a; 	T(ADD(ax, di));	// 47546 add     ax, di ;~ 18ED:0E8A
cs=0x18ed;eip=0x000e8c; 	X(PUSH(ax));	// 47547 push    ax ;~ 18ED:0E8C
cs=0x18ed;eip=0x000e8d; 	J(CALLF(sprite_1_unk,0));	// 47548 call    sprite_1_unk ;~ 18ED:0E8D
cs=0x18ed;eip=0x000e92; 	T(ADD(sp, 0x0A));	// 47549 add     sp, 0Ah ;~ 18ED:0E92
cs=0x18ed;eip=0x000e95; 	T(INC(si));	// 47550 inc     si ;~ 18ED:0E95
loc_28346:
	// 7520 
cs=0x18ed;eip=0x000e96; 	T(CMP(si, 7));	// 47553 cmp     si, 7 ;~ 18ED:0E96
cs=0x18ed;eip=0x000e99; 	J(JNC(loc_2836c));	// 47554 jnb     short loc_2836C ;~ 18ED:0E99
cs=0x18ed;eip=0x000e9b; 	T(MOV(al, *(raddr(ss,bp+var_69a))));	// 47555 mov     al, [bp+var_69A] ;~ 18ED:0E9B
cs=0x18ed;eip=0x000e9f; 	T(CBW);	// 47556 cbw ;~ 18ED:0E9F
cs=0x18ed;eip=0x000ea0; 	T(ADD(ax, si));	// 47557 add     ax, si ;~ 18ED:0EA0
cs=0x18ed;eip=0x000ea2; 	T(MOV(cx, ax));	// 47558 mov     cx, ax ;~ 18ED:0EA2
cs=0x18ed;eip=0x000ea4; 	T(MOV(al, *(raddr(ss,bp+var_716))));	// 47559 mov     al, [bp+var_716] ;~ 18ED:0EA4
cs=0x18ed;eip=0x000ea8; 	T(CBW);	// 47560 cbw ;~ 18ED:0EA8
cs=0x18ed;eip=0x000ea9; 	T(CMP(cx, ax));	// 47561 cmp     cx, ax ;~ 18ED:0EA9
cs=0x18ed;eip=0x000eab; 	J(JZ(loc_28360));	// 47562 jz      short loc_28360 ;~ 18ED:0EAB
cs=0x18ed;eip=0x000ead; 	J(JMP(loc_2829a));	// 47563 jmp     loc_2829A ;~ 18ED:0EAD
loc_28360:
	// 7521 
cs=0x18ed;eip=0x000eb0; 	X(PUSH(dialog_fnt_colour));	// 47567 push    dialog_fnt_colour ;~ 18ED:0EB0
cs=0x18ed;eip=0x000eb4; 	X(PUSH(word_3eb90));	// 47568 push    word_3EB90 ;~ 18ED:0EB4
cs=0x18ed;eip=0x000eb8; 	J(JMP(loc_282a2));	// 47569 jmp     loc_282A2 ;~ 18ED:0EB8
loc_2836c:
	// 7522 
cs=0x18ed;eip=0x000ebc; 	X(PUSH(cs));	// 47574 push    cs ;~ 18ED:0EBC
cs=0x18ed;eip=0x000ebd; 	J(CALL(mouse_draw_transparent_check,0));	// 47575 call    near ptr mouse_draw_transparent_check ;~ 18ED:0EBD
loc_28370:
	// 7523 
cs=0x18ed;eip=0x000ec0; 	X(PUSH(cs));	// 47578 push    cs ;~ 18ED:0EC0
cs=0x18ed;eip=0x000ec1; 	J(CALL(timer_get_delta_alt,0));	// 47579 call    near ptr timer_get_delta_alt ;~ 18ED:0EC1
cs=0x18ed;eip=0x000ec4; 	X(PUSH(ax));	// 47580 push    ax ;~ 18ED:0EC4
cs=0x18ed;eip=0x000ec5; 	X(PUSH(cs));	// 47581 push    cs ;~ 18ED:0EC5
cs=0x18ed;eip=0x000ec6; 	J(CALL(input_checking,0));	// 47582 call    near ptr input_checking ;~ 18ED:0EC6
cs=0x18ed;eip=0x000ec9; 	T(ADD(sp, 2));	// 47583 add     sp, 2 ;~ 18ED:0EC9
cs=0x18ed;eip=0x000ecc; 	X(MOV(*(dw*)(raddr(ss,bp+var_6cc)), ax));	// 47584 mov     [bp+var_6CC], ax ;~ 18ED:0ECC
cs=0x18ed;eip=0x000ed0; 	T(ax = bp+var_6c8);	// 47585 lea     ax, [bp+var_6C8] ;~ 18ED:0ED0
cs=0x18ed;eip=0x000ed4; 	X(PUSH(ax));	// 47586 push    ax ;~ 18ED:0ED4
cs=0x18ed;eip=0x000ed5; 	T(ax = bp+var_6e2);	// 47587 lea     ax, [bp+var_6E2] ;~ 18ED:0ED5
cs=0x18ed;eip=0x000ed9; 	X(PUSH(ax));	// 47588 push    ax ;~ 18ED:0ED9
cs=0x18ed;eip=0x000eda; 	T(ax = bp+var_6b4);	// 47589 lea     ax, [bp+var_6B4] ;~ 18ED:0EDA
cs=0x18ed;eip=0x000ede; 	X(PUSH(ax));	// 47590 push    ax ;~ 18ED:0EDE
cs=0x18ed;eip=0x000edf; 	T(ax = bp+var_16);	// 47591 lea     ax, [bp+var_16] ;~ 18ED:0EDF
cs=0x18ed;eip=0x000ee2; 	X(PUSH(ax));	// 47592 push    ax ;~ 18ED:0EE2
cs=0x18ed;eip=0x000ee3; 	T(MOV(ax, 0x0A));	// 47593 mov     ax, 0Ah ;~ 18ED:0EE3
cs=0x18ed;eip=0x000ee6; 	X(PUSH(ax));	// 47594 push    ax ;~ 18ED:0EE6
cs=0x18ed;eip=0x000ee7; 	X(PUSH(cs));	// 47595 push    cs ;~ 18ED:0EE7
cs=0x18ed;eip=0x000ee8; 	J(CALL(mouse_multi_hittest,0));	// 47596 call    near ptr mouse_multi_hittest ;~ 18ED:0EE8
cs=0x18ed;eip=0x000eeb; 	T(ADD(sp, 0x0A));	// 47597 add     sp, 0Ah ;~ 18ED:0EEB
cs=0x18ed;eip=0x000eee; 	X(MOV(*(raddr(ss,bp+var_6ea)), al));	// 47598 mov     [bp+var_6EA], al ;~ 18ED:0EEE
cs=0x18ed;eip=0x000ef2; 	T(CMP(al, 0x0FF));	// 47599 cmp     al, 0FFh ;~ 18ED:0EF2
cs=0x18ed;eip=0x000ef4; 	J(JNZ(loc_283a9));	// 47600 jnz     short loc_283A9 ;~ 18ED:0EF4
cs=0x18ed;eip=0x000ef6; 	J(JMP(loc_28452));	// 47601 jmp     loc_28452 ;~ 18ED:0EF6
loc_283a9:
	// 7524 
cs=0x18ed;eip=0x000ef9; 	T(OR(al, al));	// 47605 or      al, al ;~ 18ED:0EF9
cs=0x18ed;eip=0x000efb; 	J(JNZ(loc_283ca));	// 47606 jnz     short loc_283CA ;~ 18ED:0EFB
cs=0x18ed;eip=0x000efd; 	T(TEST(*(db*)(((db*)&mouse_butstate)), 3));	// 47607 test    byte ptr mouse_butstate, 3 ;~ 18ED:0EFD
cs=0x18ed;eip=0x000f02; 	J(JNZ(loc_283b7));	// 47608 jnz     short loc_283B7 ;~ 18ED:0F02
cs=0x18ed;eip=0x000f04; 	J(JMP(loc_28452));	// 47609 jmp     loc_28452 ;~ 18ED:0F04
loc_283b7:
	// 7525 
cs=0x18ed;eip=0x000f07; 	X(MOV(*(raddr(ss,bp+var_716)), 0));	// 47613 mov     [bp+var_716], 0 ;~ 18ED:0F07
cs=0x18ed;eip=0x000f0c; 	X(MOV(*(raddr(ss,bp+var_69a)), 0x0FF));	// 47614 mov     [bp+var_69A], 0FFh ;~ 18ED:0F0C
loc_283c1:
	// 7526 
cs=0x18ed;eip=0x000f11; 	X(MOV(*(dw*)(raddr(ss,bp+var_6cc)), 0));	// 47618 mov     [bp+var_6CC], 0 ;~ 18ED:0F11
cs=0x18ed;eip=0x000f17; 	J(JMP(loc_28452));	// 47619 jmp     loc_28452 ;~ 18ED:0F17
loc_283ca:
	// 7527 
cs=0x18ed;eip=0x000f1a; 	T(CMP(*(raddr(ss,bp+var_6ea)), 1));	// 47623 cmp     [bp+var_6EA], 1 ;~ 18ED:0F1A
cs=0x18ed;eip=0x000f1f; 	J(JNZ(loc_28402));	// 47624 jnz     short loc_28402 ;~ 18ED:0F1F
cs=0x18ed;eip=0x000f21; 	T(TEST(*(db*)(((db*)&mouse_butstate)), 3));	// 47625 test    byte ptr mouse_butstate, 3 ;~ 18ED:0F21
cs=0x18ed;eip=0x000f26; 	J(JZ(loc_28452));	// 47626 jz      short loc_28452 ;~ 18ED:0F26
cs=0x18ed;eip=0x000f28; 	T(MOV(al, *(raddr(ss,bp+var_69a))));	// 47627 mov     al, [bp+var_69A] ;~ 18ED:0F28
cs=0x18ed;eip=0x000f2c; 	T(CBW);	// 47628 cbw ;~ 18ED:0F2C
cs=0x18ed;eip=0x000f2d; 	T(MOV(cx, ax));	// 47629 mov     cx, ax ;~ 18ED:0F2D
cs=0x18ed;eip=0x000f2f; 	T(MOV(al, *(raddr(ss,bp+var_716))));	// 47630 mov     al, [bp+var_716] ;~ 18ED:0F2F
cs=0x18ed;eip=0x000f33; 	T(CBW);	// 47631 cbw ;~ 18ED:0F33
cs=0x18ed;eip=0x000f34; 	T(ADD(ax, cx));	// 47632 add     ax, cx ;~ 18ED:0F34
cs=0x18ed;eip=0x000f36; 	J(JZ(loc_283ec));	// 47633 jz      short loc_283EC ;~ 18ED:0F36
cs=0x18ed;eip=0x000f38; 	X(DEC(*(raddr(ss,bp+var_716))));	// 47634 dec     [bp+var_716] ;~ 18ED:0F38
loc_283ec:
	// 7528 
cs=0x18ed;eip=0x000f3c; 	T(MOV(al, *(raddr(ss,bp+var_69a))));	// 47637 mov     al, [bp+var_69A] ;~ 18ED:0F3C
cs=0x18ed;eip=0x000f40; 	T(CMP(*(raddr(ss,bp+var_716)), al));	// 47638 cmp     [bp+var_716], al ;~ 18ED:0F40
cs=0x18ed;eip=0x000f44; 	J(JGE(loc_283c1));	// 47639 jge     short loc_283C1 ;~ 18ED:0F44
cs=0x18ed;eip=0x000f46; 	T(MOV(al, *(raddr(ss,bp+var_716))));	// 47640 mov     al, [bp+var_716] ;~ 18ED:0F46
cs=0x18ed;eip=0x000f4a; 	X(MOV(*(raddr(ss,bp+var_69a)), al));	// 47641 mov     [bp+var_69A], al ;~ 18ED:0F4A
cs=0x18ed;eip=0x000f4e; 	J(JMP(loc_283c1));	// 47642 jmp     short loc_283C1 ;~ 18ED:0F4E
loc_28402:
	// 7529 
cs=0x18ed;eip=0x000f52; 	T(CMP(*(raddr(ss,bp+var_6ea)), 9));	// 47648 cmp     [bp+var_6EA], 9 ;~ 18ED:0F52
cs=0x18ed;eip=0x000f57; 	J(JNZ(loc_28428));	// 47649 jnz     short loc_28428 ;~ 18ED:0F57
cs=0x18ed;eip=0x000f59; 	T(TEST(*(db*)(((db*)&mouse_butstate)), 3));	// 47650 test    byte ptr mouse_butstate, 3 ;~ 18ED:0F59
cs=0x18ed;eip=0x000f5e; 	J(JZ(loc_28452));	// 47651 jz      short loc_28452 ;~ 18ED:0F5E
cs=0x18ed;eip=0x000f60; 	T(MOV(al, *(raddr(ss,bp+var_714))));	// 47652 mov     al, [bp+var_714] ;~ 18ED:0F60
cs=0x18ed;eip=0x000f64; 	T(CBW);	// 47653 cbw ;~ 18ED:0F64
cs=0x18ed;eip=0x000f65; 	T(DEC(ax));	// 47654 dec     ax ;~ 18ED:0F65
cs=0x18ed;eip=0x000f66; 	T(MOV(cx, ax));	// 47655 mov     cx, ax ;~ 18ED:0F66
cs=0x18ed;eip=0x000f68; 	T(MOV(al, *(raddr(ss,bp+var_716))));	// 47656 mov     al, [bp+var_716] ;~ 18ED:0F68
cs=0x18ed;eip=0x000f6c; 	T(CBW);	// 47657 cbw ;~ 18ED:0F6C
cs=0x18ed;eip=0x000f6d; 	T(CMP(cx, ax));	// 47658 cmp     cx, ax ;~ 18ED:0F6D
cs=0x18ed;eip=0x000f6f; 	J(JZ(loc_283c1));	// 47659 jz      short loc_283C1 ;~ 18ED:0F6F
cs=0x18ed;eip=0x000f71; 	X(INC(*(raddr(ss,bp+var_716))));	// 47660 inc     [bp+var_716] ;~ 18ED:0F71
cs=0x18ed;eip=0x000f75; 	J(JMP(loc_283c1));	// 47661 jmp     short loc_283C1 ;~ 18ED:0F75
loc_28428:
	// 7530 
cs=0x18ed;eip=0x000f78; 	T(MOV(al, *(raddr(ss,bp+var_6ea))));	// 47666 mov     al, [bp+var_6EA] ;~ 18ED:0F78
cs=0x18ed;eip=0x000f7c; 	T(CBW);	// 47667 cbw ;~ 18ED:0F7C
cs=0x18ed;eip=0x000f7d; 	T(MOV(cx, ax));	// 47668 mov     cx, ax ;~ 18ED:0F7D
cs=0x18ed;eip=0x000f7f; 	T(MOV(al, *(raddr(ss,bp+var_69a))));	// 47669 mov     al, [bp+var_69A] ;~ 18ED:0F7F
cs=0x18ed;eip=0x000f83; 	T(CBW);	// 47670 cbw ;~ 18ED:0F83
cs=0x18ed;eip=0x000f84; 	T(ADD(ax, cx));	// 47671 add     ax, cx ;~ 18ED:0F84
cs=0x18ed;eip=0x000f86; 	T(SUB(ax, 2));	// 47672 sub     ax, 2 ;~ 18ED:0F86
cs=0x18ed;eip=0x000f89; 	T(MOV(cx, ax));	// 47673 mov     cx, ax ;~ 18ED:0F89
cs=0x18ed;eip=0x000f8b; 	T(MOV(al, *(raddr(ss,bp+var_714))));	// 47674 mov     al, [bp+var_714] ;~ 18ED:0F8B
cs=0x18ed;eip=0x000f8f; 	T(CBW);	// 47675 cbw ;~ 18ED:0F8F
cs=0x18ed;eip=0x000f90; 	T(CMP(cx, ax));	// 47676 cmp     cx, ax ;~ 18ED:0F90
cs=0x18ed;eip=0x000f92; 	J(JGE(loc_28452));	// 47677 jge     short loc_28452 ;~ 18ED:0F92
cs=0x18ed;eip=0x000f94; 	T(MOV(al, *(raddr(ss,bp+var_69a))));	// 47678 mov     al, [bp+var_69A] ;~ 18ED:0F94
cs=0x18ed;eip=0x000f98; 	T(ADD(al, *(raddr(ss,bp+var_6ea))));	// 47679 add     al, [bp+var_6EA] ;~ 18ED:0F98
cs=0x18ed;eip=0x000f9c; 	T(SUB(al, 2));	// 47680 sub     al, 2 ;~ 18ED:0F9C
cs=0x18ed;eip=0x000f9e; 	X(MOV(*(raddr(ss,bp+var_716)), al));	// 47681 mov     [bp+var_716], al ;~ 18ED:0F9E
loc_28452:
	// 7531 
cs=0x18ed;eip=0x000fa2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6cc))));	// 47685 mov     ax, [bp+var_6CC] ;~ 18ED:0FA2
cs=0x18ed;eip=0x000fa6; 	T(CMP(ax, 0x0D));	// 47686 cmp     ax, 0Dh ;~ 18ED:0FA6
cs=0x18ed;eip=0x000fa9; 	J(JZ(loc_284ce));	// 47687 jz      short loc_284CE ;~ 18ED:0FA9
cs=0x18ed;eip=0x000fab; 	T(CMP(ax, 0x1B));	// 47688 cmp     ax, 1Bh ;~ 18ED:0FAB
cs=0x18ed;eip=0x000fae; 	J(JZ(loc_284d4));	// 47689 jz      short loc_284D4 ;~ 18ED:0FAE
cs=0x18ed;eip=0x000fb0; 	T(CMP(ax, 0x20));	// 47690 cmp     ax, 20h ; ' ' ;~ 18ED:0FB0
cs=0x18ed;eip=0x000fb3; 	J(JZ(loc_284ce));	// 47691 jz      short loc_284CE ;~ 18ED:0FB3
cs=0x18ed;eip=0x000fb5; 	T(CMP(ax, 0x4800));	// 47692 cmp     ax, 4800h ;~ 18ED:0FB5
cs=0x18ed;eip=0x000fb8; 	J(JZ(loc_28492));	// 47693 jz      short loc_28492 ;~ 18ED:0FB8
cs=0x18ed;eip=0x000fba; 	T(CMP(ax, 0x5000));	// 47694 cmp     ax, 5000h ;~ 18ED:0FBA
cs=0x18ed;eip=0x000fbd; 	J(JZ(loc_284b6));	// 47695 jz      short loc_284B6 ;~ 18ED:0FBD
cs=0x18ed;eip=0x000fbf; 	T(MOV(bx, ax));	// 47696 mov     bx, ax ;~ 18ED:0FBF
cs=0x18ed;eip=0x000fc1; 	T(TEST(*((g_ascii_props)+bx), 1));	// 47697 test    g_ascii_props[bx], 1 ;~ 18ED:0FC1
cs=0x18ed;eip=0x000fc6; 	J(JNZ(loc_2847f));	// 47698 jnz     short loc_2847F ;~ 18ED:0FC6
cs=0x18ed;eip=0x000fc8; 	T(TEST(*((g_ascii_props)+bx), 2));	// 47699 test    g_ascii_props[bx], 2 ;~ 18ED:0FC8
cs=0x18ed;eip=0x000fcd; 	J(JZ(loc_28496));	// 47700 jz      short loc_28496 ;~ 18ED:0FCD
loc_2847f:
	// 7532 
cs=0x18ed;eip=0x000fcf; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_6cc))));	// 47703 mov     bx, [bp+var_6CC] ;~ 18ED:0FCF
cs=0x18ed;eip=0x000fd3; 	T(TEST(*((g_ascii_props)+bx), 1));	// 47704 test    g_ascii_props[bx], 1 ;~ 18ED:0FD3
cs=0x18ed;eip=0x000fd8; 	J(JZ(loc_284da));	// 47705 jz      short loc_284DA ;~ 18ED:0FD8
cs=0x18ed;eip=0x000fda; 	T(MOV(al, *(db*)(raddr(ss,bp+var_6cc))));	// 47706 mov     al, byte ptr [bp+var_6CC] ;~ 18ED:0FDA
cs=0x18ed;eip=0x000fde; 	T(ADD(al, 0x20));	// 47707 add     al, 20h ; ' ' ;~ 18ED:0FDE
cs=0x18ed;eip=0x000fe0; 	J(JMP(loc_284de));	// 47708 jmp     short loc_284DE ;~ 18ED:0FE0
loc_28492:
	// 7533 
cs=0x18ed;eip=0x000fe2; 	X(DEC(*(raddr(ss,bp+var_716))));	// 47712 dec     [bp+var_716] ;~ 18ED:0FE2
loc_28496:
	// 7534 
cs=0x18ed;eip=0x000fe6; 	T(MOV(al, *(raddr(ss,bp+var_69a))));	// 47716 mov     al, [bp+var_69A] ;~ 18ED:0FE6
cs=0x18ed;eip=0x000fea; 	T(CMP(*(raddr(ss,bp+var_716)), al));	// 47717 cmp     [bp+var_716], al ;~ 18ED:0FEA
cs=0x18ed;eip=0x000fee; 	J(JGE(loc_284a8));	// 47718 jge     short loc_284A8 ;~ 18ED:0FEE
cs=0x18ed;eip=0x000ff0; 	T(MOV(al, *(raddr(ss,bp+var_716))));	// 47719 mov     al, [bp+var_716] ;~ 18ED:0FF0
cs=0x18ed;eip=0x000ff4; 	X(MOV(*(raddr(ss,bp+var_69a)), al));	// 47720 mov     [bp+var_69A], al ;~ 18ED:0FF4
loc_284a8:
	// 7535 
cs=0x18ed;eip=0x000ff8; 	T(CMP(*(raddr(ss,bp+var_69a)), 0));	// 47723 cmp     [bp+var_69A], 0 ;~ 18ED:0FF8
cs=0x18ed;eip=0x000ffd; 	J(JL(loc_284b2));	// 47724 jl      short loc_284B2 ;~ 18ED:0FFD
cs=0x18ed;eip=0x000fff; 	J(JMP(loc_28564));	// 47725 jmp     loc_28564 ;~ 18ED:0FFF
loc_284b2:
	// 7536 
cs=0x18ed;eip=0x001002; 	J(JMP(loc_2805e));	// 47729 jmp     loc_2805E ;~ 18ED:1002
loc_284b6:
	// 7537 
cs=0x18ed;eip=0x001006; 	T(MOV(al, *(raddr(ss,bp+var_714))));	// 47734 mov     al, [bp+var_714] ;~ 18ED:1006
cs=0x18ed;eip=0x00100a; 	T(CBW);	// 47735 cbw ;~ 18ED:100A
cs=0x18ed;eip=0x00100b; 	T(DEC(ax));	// 47736 dec     ax ;~ 18ED:100B
cs=0x18ed;eip=0x00100c; 	T(MOV(cx, ax));	// 47737 mov     cx, ax ;~ 18ED:100C
cs=0x18ed;eip=0x00100e; 	T(MOV(al, *(raddr(ss,bp+var_716))));	// 47738 mov     al, [bp+var_716] ;~ 18ED:100E
cs=0x18ed;eip=0x001012; 	T(CBW);	// 47739 cbw ;~ 18ED:1012
cs=0x18ed;eip=0x001013; 	T(CMP(cx, ax));	// 47740 cmp     cx, ax ;~ 18ED:1013
cs=0x18ed;eip=0x001015; 	J(JZ(loc_28496));	// 47741 jz      short loc_28496 ;~ 18ED:1015
cs=0x18ed;eip=0x001017; 	X(INC(*(raddr(ss,bp+var_716))));	// 47742 inc     [bp+var_716] ;~ 18ED:1017
cs=0x18ed;eip=0x00101b; 	J(JMP(loc_28496));	// 47743 jmp     short loc_28496 ;~ 18ED:101B
loc_284ce:
	// 7538 
cs=0x18ed;eip=0x00101e; 	X(MOV(*(raddr(ss,bp+var_2)), 1));	// 47749 mov     [bp+var_2], 1 ;~ 18ED:101E
cs=0x18ed;eip=0x001022; 	J(JMP(loc_28496));	// 47750 jmp     short loc_28496 ;~ 18ED:1022
loc_284d4:
	// 7539 
cs=0x18ed;eip=0x001024; 	X(MOV(*(raddr(ss,bp+var_2)), 0x0FF));	// 47754 mov     [bp+var_2], 0FFh ;~ 18ED:1024
cs=0x18ed;eip=0x001028; 	J(JMP(loc_28496));	// 47755 jmp     short loc_28496 ;~ 18ED:1028
loc_284da:
	// 7540 
cs=0x18ed;eip=0x00102a; 	T(MOV(al, *(db*)(raddr(ss,bp+var_6cc))));	// 47759 mov     al, byte ptr [bp+var_6CC] ;~ 18ED:102A
loc_284de:
	// 7541 
cs=0x18ed;eip=0x00102e; 	X(MOV(*(raddr(ss,bp+var_69c)), al));	// 47762 mov     [bp+var_69C], al ;~ 18ED:102E
cs=0x18ed;eip=0x001032; 	X(MOV(*(raddr(ss,bp+var_6ea)), 0));	// 47763 mov     [bp+var_6EA], 0 ;~ 18ED:1032
cs=0x18ed;eip=0x001037; 	J(JMP(loc_28516));	// 47764 jmp     short loc_28516 ;~ 18ED:1037
loc_284ea:
	// 7542 
cs=0x18ed;eip=0x00103a; 	T(MOV(al, *(raddr(ss,bp+var_6ea))));	// 47769 mov     al, [bp+var_6EA] ;~ 18ED:103A
cs=0x18ed;eip=0x00103e; 	T(CBW);	// 47770 cbw ;~ 18ED:103E
cs=0x18ed;eip=0x00103f; 	T(MOV(bx, ax));	// 47771 mov     bx, ax ;~ 18ED:103F
cs=0x18ed;eip=0x001041; 	T(SHL(bx, 1));	// 47772 shl     bx, 1 ;~ 18ED:1041
cs=0x18ed;eip=0x001043; 	T(ADD(bx, ax));	// 47773 add     bx, ax ;~ 18ED:1043
cs=0x18ed;eip=0x001045; 	T(SHL(bx, 1));	// 47774 shl     bx, 1 ;~ 18ED:1045
cs=0x18ed;eip=0x001047; 	T(SHL(bx, 1));	// 47775 shl     bx, 1 ;~ 18ED:1047
cs=0x18ed;eip=0x001049; 	T(ADD(bx, ax));	// 47776 add     bx, ax ;~ 18ED:1049
cs=0x18ed;eip=0x00104b; 	T(ADD(bx, bp));	// 47777 add     bx, bp ;~ 18ED:104B
cs=0x18ed;eip=0x00104d; 	T(MOV(al, *(raddr(ds,bx-0x698))));	// 47778 mov     al, [bx-698h] ;~ 18ED:104D
loc_28501:
	// 7543 
cs=0x18ed;eip=0x001051; 	T(CMP(al, *(raddr(ss,bp+var_69c))));	// 47781 cmp     al, [bp+var_69C] ;~ 18ED:1051
cs=0x18ed;eip=0x001055; 	J(JNZ(loc_28512));	// 47782 jnz     short loc_28512 ;~ 18ED:1055
cs=0x18ed;eip=0x001057; 	T(MOV(al, *(raddr(ss,bp+var_6ea))));	// 47783 mov     al, [bp+var_6EA] ;~ 18ED:1057
cs=0x18ed;eip=0x00105b; 	X(MOV(*(raddr(ss,bp+var_716)), al));	// 47784 mov     [bp+var_716], al ;~ 18ED:105B
cs=0x18ed;eip=0x00105f; 	J(JMP(loc_28496));	// 47785 jmp     short loc_28496 ;~ 18ED:105F
loc_28512:
	// 7544 
cs=0x18ed;eip=0x001062; 	X(INC(*(raddr(ss,bp+var_6ea))));	// 47790 inc     [bp+var_6EA] ;~ 18ED:1062
loc_28516:
	// 7545 
cs=0x18ed;eip=0x001066; 	T(MOV(al, *(raddr(ss,bp+var_714))));	// 47793 mov     al, [bp+var_714] ;~ 18ED:1066
cs=0x18ed;eip=0x00106a; 	T(CMP(*(raddr(ss,bp+var_6ea)), al));	// 47794 cmp     [bp+var_6EA], al ;~ 18ED:106A
cs=0x18ed;eip=0x00106e; 	J(JL(loc_28523));	// 47795 jl      short loc_28523 ;~ 18ED:106E
cs=0x18ed;eip=0x001070; 	J(JMP(loc_28496));	// 47796 jmp     loc_28496 ;~ 18ED:1070
loc_28523:
	// 7546 
cs=0x18ed;eip=0x001073; 	T(MOV(al, *(raddr(ss,bp+var_6ea))));	// 47800 mov     al, [bp+var_6EA] ;~ 18ED:1073
cs=0x18ed;eip=0x001077; 	T(CBW);	// 47801 cbw ;~ 18ED:1077
cs=0x18ed;eip=0x001078; 	T(MOV(bx, ax));	// 47802 mov     bx, ax ;~ 18ED:1078
cs=0x18ed;eip=0x00107a; 	T(SHL(bx, 1));	// 47803 shl     bx, 1 ;~ 18ED:107A
cs=0x18ed;eip=0x00107c; 	T(ADD(bx, ax));	// 47804 add     bx, ax ;~ 18ED:107C
cs=0x18ed;eip=0x00107e; 	T(SHL(bx, 1));	// 47805 shl     bx, 1 ;~ 18ED:107E
cs=0x18ed;eip=0x001080; 	T(SHL(bx, 1));	// 47806 shl     bx, 1 ;~ 18ED:1080
cs=0x18ed;eip=0x001082; 	T(ADD(bx, ax));	// 47807 add     bx, ax ;~ 18ED:1082
cs=0x18ed;eip=0x001084; 	T(ADD(bx, bp));	// 47808 add     bx, bp ;~ 18ED:1084
cs=0x18ed;eip=0x001086; 	T(MOV(al, *(raddr(ds,bx-0x698))));	// 47809 mov     al, [bx-698h] ;~ 18ED:1086
cs=0x18ed;eip=0x00108a; 	T(CBW);	// 47810 cbw ;~ 18ED:108A
cs=0x18ed;eip=0x00108b; 	T(MOV(bx, ax));	// 47811 mov     bx, ax ;~ 18ED:108B
cs=0x18ed;eip=0x00108d; 	T(TEST(*((g_ascii_props)+bx), 1));	// 47812 test    g_ascii_props[bx], 1 ;~ 18ED:108D
cs=0x18ed;eip=0x001092; 	J(JZ(loc_284ea));	// 47813 jz      short loc_284EA ;~ 18ED:1092
cs=0x18ed;eip=0x001094; 	T(MOV(al, *(raddr(ss,bp+var_6ea))));	// 47814 mov     al, [bp+var_6EA] ;~ 18ED:1094
cs=0x18ed;eip=0x001098; 	T(CBW);	// 47815 cbw ;~ 18ED:1098
cs=0x18ed;eip=0x001099; 	T(MOV(bx, ax));	// 47816 mov     bx, ax ;~ 18ED:1099
cs=0x18ed;eip=0x00109b; 	T(SHL(bx, 1));	// 47817 shl     bx, 1 ;~ 18ED:109B
cs=0x18ed;eip=0x00109d; 	T(ADD(bx, ax));	// 47818 add     bx, ax ;~ 18ED:109D
cs=0x18ed;eip=0x00109f; 	T(SHL(bx, 1));	// 47819 shl     bx, 1 ;~ 18ED:109F
cs=0x18ed;eip=0x0010a1; 	T(SHL(bx, 1));	// 47820 shl     bx, 1 ;~ 18ED:10A1
cs=0x18ed;eip=0x0010a3; 	T(ADD(bx, ax));	// 47821 add     bx, ax ;~ 18ED:10A3
cs=0x18ed;eip=0x0010a5; 	T(ADD(bx, bp));	// 47822 add     bx, bp ;~ 18ED:10A5
cs=0x18ed;eip=0x0010a7; 	T(MOV(al, *(raddr(ds,bx-0x698))));	// 47823 mov     al, [bx-698h] ;~ 18ED:10A7
cs=0x18ed;eip=0x0010ab; 	T(ADD(al, 0x20));	// 47824 add     al, 20h ; ' ' ;~ 18ED:10AB
cs=0x18ed;eip=0x0010ad; 	J(JMP(loc_28501));	// 47825 jmp     short loc_28501 ;~ 18ED:10AD
loc_28560:
	// 7547 
cs=0x18ed;eip=0x0010b0; 	X(INC(*(raddr(ss,bp+var_69a))));	// 47830 inc     [bp+var_69A] ;~ 18ED:10B0
loc_28564:
	// 7548 
cs=0x18ed;eip=0x0010b4; 	T(MOV(al, *(raddr(ss,bp+var_69a))));	// 47833 mov     al, [bp+var_69A] ;~ 18ED:10B4
cs=0x18ed;eip=0x0010b8; 	T(CBW);	// 47834 cbw ;~ 18ED:10B8
cs=0x18ed;eip=0x0010b9; 	T(ADD(ax, 6));	// 47835 add     ax, 6 ;~ 18ED:10B9
cs=0x18ed;eip=0x0010bc; 	T(MOV(cx, ax));	// 47836 mov     cx, ax ;~ 18ED:10BC
cs=0x18ed;eip=0x0010be; 	T(MOV(al, *(raddr(ss,bp+var_716))));	// 47837 mov     al, [bp+var_716] ;~ 18ED:10BE
cs=0x18ed;eip=0x0010c2; 	T(CBW);	// 47838 cbw ;~ 18ED:10C2
cs=0x18ed;eip=0x0010c3; 	T(CMP(cx, ax));	// 47839 cmp     cx, ax ;~ 18ED:10C3
cs=0x18ed;eip=0x0010c5; 	J(JL(loc_28560));	// 47840 jl      short loc_28560 ;~ 18ED:10C5
cs=0x18ed;eip=0x0010c7; 	T(CMP(*(raddr(ss,bp+var_2)), 0));	// 47841 cmp     [bp+var_2], 0 ;~ 18ED:10C7
cs=0x18ed;eip=0x0010cb; 	J(JNZ(loc_28580));	// 47842 jnz     short loc_28580 ;~ 18ED:10CB
cs=0x18ed;eip=0x0010cd; 	J(JMP(loc_28269));	// 47843 jmp     loc_28269 ;~ 18ED:10CD
loc_28580:
	// 7549 
cs=0x18ed;eip=0x0010d0; 	T(CMP(*(raddr(ss,bp+var_2)), 0x0FF));	// 47847 cmp     [bp+var_2], 0FFh ;~ 18ED:10D0
cs=0x18ed;eip=0x0010d4; 	J(JNZ(loc_28589));	// 47848 jnz     short loc_28589 ;~ 18ED:10D4
cs=0x18ed;eip=0x0010d6; 	J(JMP(loc_2808c));	// 47849 jmp     loc_2808C ;~ 18ED:10D6
loc_28589:
	// 7550 
cs=0x18ed;eip=0x0010d9; 	T(CBW);	// 47853 cbw ;~ 18ED:10D9
cs=0x18ed;eip=0x0010da; 	T(MOV(cx, ax));	// 47854 mov     cx, ax ;~ 18ED:10DA
cs=0x18ed;eip=0x0010dc; 	T(SHL(ax, 1));	// 47855 shl     ax, 1 ;~ 18ED:10DC
cs=0x18ed;eip=0x0010de; 	T(ADD(ax, cx));	// 47856 add     ax, cx ;~ 18ED:10DE
cs=0x18ed;eip=0x0010e0; 	T(SHL(ax, 1));	// 47857 shl     ax, 1 ;~ 18ED:10E0
cs=0x18ed;eip=0x0010e2; 	T(SHL(ax, 1));	// 47858 shl     ax, 1 ;~ 18ED:10E2
cs=0x18ed;eip=0x0010e4; 	T(ADD(ax, cx));	// 47859 add     ax, cx ;~ 18ED:10E4
cs=0x18ed;eip=0x0010e6; 	T(ADD(ax, bp));	// 47860 add     ax, bp ;~ 18ED:10E6
cs=0x18ed;eip=0x0010e8; 	T(SUB(ax, 0x698));	// 47861 sub     ax, 698h ;~ 18ED:10E8
cs=0x18ed;eip=0x0010eb; 	X(PUSH(ax));	// 47862 push    ax ;~ 18ED:10EB
cs=0x18ed;eip=0x0010ec; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 47863 push    word ptr [bp+arg_0+2] ; char * ;~ 18ED:10EC
cs=0x18ed;eip=0x0010ef; 	J(CALLF(_strcpy,0));	// 47864 call    _strcpy ;~ 18ED:10EF
cs=0x18ed;eip=0x0010f4; 	T(ADD(sp, 4));	// 47865 add     sp, 4 ;~ 18ED:10F4
cs=0x18ed;eip=0x0010f7; 	X(MOV(*(raddr(ss,bp+var_6a0)), 1));	// 47866 mov     [bp+var_6A0], 1 ;~ 18ED:10F7
loc_285ac:
	// 7551 
cs=0x18ed;eip=0x0010fc; 	X(PUSH(cs));	// 47869 push    cs ;~ 18ED:10FC
cs=0x18ed;eip=0x0010fd; 	J(CALL(sub_275c6,0));	// 47870 call    near ptr sub_275C6 ;~ 18ED:10FD
cs=0x18ed;eip=0x001100; 	T(MOV(al, *(raddr(ss,bp+var_18))));	// 47871 mov     al, [bp+var_18] ;~ 18ED:1100
cs=0x18ed;eip=0x001103; 	X(MOV(g_is_busy, al));	// 47872 mov     g_is_busy, al ;~ 18ED:1103
cs=0x18ed;eip=0x001106; 	T(MOV(al, *(raddr(ss,bp+var_6a0))));	// 47873 mov     al, [bp+var_6A0] ;~ 18ED:1106
cs=0x18ed;eip=0x00110a; 	T(CBW);	// 47874 cbw ;~ 18ED:110A
cs=0x18ed;eip=0x00110b; 	X(POP(si));	// 47875 pop     si ;~ 18ED:110B
cs=0x18ed;eip=0x00110c; 	X(POP(di));	// 47876 pop     di ;~ 18ED:110C
cs=0x18ed;eip=0x00110d; 	T(MOV(sp, bp));	// 47877 mov     sp, bp ;~ 18ED:110D
cs=0x18ed;eip=0x00110f; 	X(POP(bp));	// 47878 pop     bp ;~ 18ED:110F
cs=0x18ed;eip=0x001110; 	J(RETF(0));	// 47879 retf ;~ 18ED:1110

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kdo_fileselect_dialog: 	goto do_fileselect_dialog;
        case m2c::kloc_27f1e: 	goto loc_27f1e;
        case m2c::kloc_27f9e: 	goto loc_27f9e;
        case m2c::kloc_27fbb: 	goto loc_27fbb;
        case m2c::kloc_27fdd: 	goto loc_27fdd;
        case m2c::kloc_28016: 	goto loc_28016;
        case m2c::kloc_28036: 	goto loc_28036;
        case m2c::kloc_2805e: 	goto loc_2805e;
        case m2c::kloc_2808c: 	goto loc_2808c;
        case m2c::kloc_28094: 	goto loc_28094;
        case m2c::kloc_280a8: 	goto loc_280a8;
        case m2c::kloc_280e2: 	goto loc_280e2;
        case m2c::kloc_280f1: 	goto loc_280f1;
        case m2c::kloc_280f6: 	goto loc_280f6;
        case m2c::kloc_280fa: 	goto loc_280fa;
        case m2c::kloc_28108: 	goto loc_28108;
        case m2c::kloc_281b6: 	goto loc_281b6;
        case m2c::kloc_281b7: 	goto loc_281b7;
        case m2c::kloc_281cc: 	goto loc_281cc;
        case m2c::kloc_2824d: 	goto loc_2824d;
        case m2c::kloc_28269: 	goto loc_28269;
        case m2c::kloc_28280: 	goto loc_28280;
        case m2c::kloc_2829a: 	goto loc_2829a;
        case m2c::kloc_282a2: 	goto loc_282a2;
        case m2c::kloc_282f2: 	goto loc_282f2;
        case m2c::kloc_28300: 	goto loc_28300;
        case m2c::kloc_28346: 	goto loc_28346;
        case m2c::kloc_28360: 	goto loc_28360;
        case m2c::kloc_2836c: 	goto loc_2836c;
        case m2c::kloc_28370: 	goto loc_28370;
        case m2c::kloc_283a9: 	goto loc_283a9;
        case m2c::kloc_283b7: 	goto loc_283b7;
        case m2c::kloc_283c1: 	goto loc_283c1;
        case m2c::kloc_283ca: 	goto loc_283ca;
        case m2c::kloc_283ec: 	goto loc_283ec;
        case m2c::kloc_28402: 	goto loc_28402;
        case m2c::kloc_28428: 	goto loc_28428;
        case m2c::kloc_28452: 	goto loc_28452;
        case m2c::kloc_2847f: 	goto loc_2847f;
        case m2c::kloc_28492: 	goto loc_28492;
        case m2c::kloc_28496: 	goto loc_28496;
        case m2c::kloc_284a8: 	goto loc_284a8;
        case m2c::kloc_284b2: 	goto loc_284b2;
        case m2c::kloc_284b6: 	goto loc_284b6;
        case m2c::kloc_284ce: 	goto loc_284ce;
        case m2c::kloc_284d4: 	goto loc_284d4;
        case m2c::kloc_284da: 	goto loc_284da;
        case m2c::kloc_284de: 	goto loc_284de;
        case m2c::kloc_284ea: 	goto loc_284ea;
        case m2c::kloc_28501: 	goto loc_28501;
        case m2c::kloc_28512: 	goto loc_28512;
        case m2c::kloc_28516: 	goto loc_28516;
        case m2c::kloc_28523: 	goto loc_28523;
        case m2c::kloc_28560: 	goto loc_28560;
        case m2c::kloc_28564: 	goto loc_28564;
        case m2c::kloc_28580: 	goto loc_28580;
        case m2c::kloc_28589: 	goto loc_28589;
        case m2c::kloc_285ac: 	goto loc_285ac;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool file_build_path(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    file_build_path:
    _begin:
#undef var_2
#define var_2 -2
	// 47893 var_2           = byte ptr -2 ;~ 18ED:1112
#undef arg_0
#define arg_0 6
	// 47894 arg_0           = dword ptr  6 ;~ 18ED:1112
#undef arg_4
#define arg_4 0x0A
	// 47895 arg_4           = word ptr  0Ah ;~ 18ED:1112
#undef arg_6
#define arg_6 0x0C
	// 47896 arg_6           = dword ptr  0Ch ;~ 18ED:1112
cs=0x18ed;eip=0x001112; 	X(PUSH(bp));	// 47898 push    bp ;~ 18ED:1112
cs=0x18ed;eip=0x001113; 	T(MOV(bp, sp));	// 47899 mov     bp, sp ;~ 18ED:1113
cs=0x18ed;eip=0x001115; 	T(SUB(sp, 4));	// 47900 sub     sp, 4 ;~ 18ED:1115
cs=0x18ed;eip=0x001118; 	X(PUSH(si));	// 47901 push    si              ; char * ;~ 18ED:1118
cs=0x18ed;eip=0x001119; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+arg_0))), 0));	// 47902 cmp     word ptr [bp+arg_0], 0 ;~ 18ED:1119
cs=0x18ed;eip=0x00111d; 	J(JZ(loc_285ec));	// 47903 jz      short loc_285EC ;~ 18ED:111D
cs=0x18ed;eip=0x00111f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 47904 push    word ptr [bp+arg_0] ;~ 18ED:111F
cs=0x18ed;eip=0x001122; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_6)))));	// 47905 push    word ptr [bp+arg_6] ; char * ;~ 18ED:1122
cs=0x18ed;eip=0x001125; 	J(CALLF(_strcpy,0));	// 47906 call    _strcpy ;~ 18ED:1125
cs=0x18ed;eip=0x00112a; 	T(ADD(sp, 4));	// 47907 add     sp, 4 ;~ 18ED:112A
cs=0x18ed;eip=0x00112d; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 47908 push    word ptr [bp+arg_0] ; char * ;~ 18ED:112D
cs=0x18ed;eip=0x001130; 	J(CALLF(_strlen,0));	// 47909 call    _strlen ;~ 18ED:1130
cs=0x18ed;eip=0x001135; 	T(ADD(sp, 2));	// 47910 add     sp, 2 ;~ 18ED:1135
cs=0x18ed;eip=0x001138; 	T(MOV(si, ax));	// 47911 mov     si, ax ;~ 18ED:1138
cs=0x18ed;eip=0x00113a; 	J(JMP(loc_285f4));	// 47912 jmp     short loc_285F4 ;~ 18ED:113A
loc_285ec:
	// 7552 
cs=0x18ed;eip=0x00113c; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_6)))));	// 47916 mov     bx, word ptr [bp+arg_6] ;~ 18ED:113C
cs=0x18ed;eip=0x00113f; 	X(MOV(*(raddr(ds,bx)), 0));	// 47917 mov     byte ptr [bx], 0 ;~ 18ED:113F
cs=0x18ed;eip=0x001142; 	T(SUB(si, si));	// 47918 sub     si, si ;~ 18ED:1142
loc_285f4:
	// 7553 
cs=0x18ed;eip=0x001144; 	T(OR(si, si));	// 47921 or      si, si ;~ 18ED:1144
cs=0x18ed;eip=0x001146; 	J(JZ(loc_28618));	// 47922 jz      short loc_28618 ;~ 18ED:1146
cs=0x18ed;eip=0x001148; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 47923 mov     bx, word ptr [bp+arg_0] ;~ 18ED:1148
cs=0x18ed;eip=0x00114b; 	T(MOV(al, *(raddr(ds,bx+si-1))));	// 47924 mov     al, [bx+si-1] ;~ 18ED:114B
cs=0x18ed;eip=0x00114e; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 47925 mov     [bp+var_2], al ;~ 18ED:114E
cs=0x18ed;eip=0x001151; 	T(CMP(al, ':'));	// 47926 cmp     al, ':' ;~ 18ED:1151
cs=0x18ed;eip=0x001153; 	J(JZ(loc_28618));	// 47927 jz      short loc_28618 ;~ 18ED:1153
cs=0x18ed;eip=0x001155; 	T(CMP(al, '\\'));	// 47928 cmp     al, '\' ;~ 18ED:1155
cs=0x18ed;eip=0x001157; 	J(JZ(loc_28618));	// 47929 jz      short loc_28618 ;~ 18ED:1157
cs=0x18ed;eip=0x001159; 	T(MOV(ax, offset(dseg,asc_3eba9)));	// 47930 mov     ax, offset asc_3EBA9 ; "\\" ;~ 18ED:1159
cs=0x18ed;eip=0x00115c; 	X(PUSH(ax));	// 47931 push    ax ;~ 18ED:115C
cs=0x18ed;eip=0x00115d; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_6)))));	// 47932 push    word ptr [bp+arg_6] ; char * ;~ 18ED:115D
cs=0x18ed;eip=0x001160; 	J(CALLF(_strcat,0));	// 47933 call    _strcat ;~ 18ED:1160
cs=0x18ed;eip=0x001165; 	T(ADD(sp, 4));	// 47934 add     sp, 4 ;~ 18ED:1165
loc_28618:
	// 7554 
cs=0x18ed;eip=0x001168; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 47938 push    word ptr [bp+arg_0+2] ;~ 18ED:1168
cs=0x18ed;eip=0x00116b; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_6)))));	// 47939 push    word ptr [bp+arg_6] ; char * ;~ 18ED:116B
cs=0x18ed;eip=0x00116e; 	J(CALLF(_strcat,0));	// 47940 call    _strcat ;~ 18ED:116E
cs=0x18ed;eip=0x001173; 	T(ADD(sp, 4));	// 47941 add     sp, 4 ;~ 18ED:1173
cs=0x18ed;eip=0x001176; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 47942 push    [bp+arg_4] ;~ 18ED:1176
cs=0x18ed;eip=0x001179; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_6)))));	// 47943 push    word ptr [bp+arg_6] ; char * ;~ 18ED:1179
cs=0x18ed;eip=0x00117c; 	J(CALLF(_strcat,0));	// 47944 call    _strcat ;~ 18ED:117C
cs=0x18ed;eip=0x001181; 	T(ADD(sp, 4));	// 47945 add     sp, 4 ;~ 18ED:1181
cs=0x18ed;eip=0x001184; 	X(POP(si));	// 47946 pop     si ;~ 18ED:1184
cs=0x18ed;eip=0x001185; 	T(MOV(sp, bp));	// 47947 mov     sp, bp ;~ 18ED:1185
cs=0x18ed;eip=0x001187; 	X(POP(bp));	// 47948 pop     bp ;~ 18ED:1187
cs=0x18ed;eip=0x001188; 	J(RETF(0));	// 47949 retf ;~ 18ED:1188

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kfile_build_path: 	goto file_build_path;
        case m2c::kloc_285ec: 	goto loc_285ec;
        case m2c::kloc_285f4: 	goto loc_285f4;
        case m2c::kloc_28618: 	goto loc_28618;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool do_savefile_dialog(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    do_savefile_dialog:
    _begin:
#undef var_12
#define var_12 -0x12
	// 47963 var_12          = word ptr -12h ;~ 18ED:118A
#undef var_10
#define var_10 -0x10
	// 47964 var_10          = word ptr -10h ;~ 18ED:118A
#undef var_e
#define var_e -0x0E
	// 47965 var_E           = dword ptr -0Eh ;~ 18ED:118A
#undef var_a
#define var_a -0x0A
	// 47966 var_A           = dword ptr -0Ah ;~ 18ED:118A
#undef var_4
#define var_4 -4
	// 47967 var_4           = byte ptr -4 ;~ 18ED:118A
#undef arg_0
#define arg_0 6
	// 47968 arg_0           = dword ptr  6 ;~ 18ED:118A
#undef arg_4
#define arg_4 0x0A
	// 47969 arg_4           = word ptr  0Ah ;~ 18ED:118A
#undef arg_6
#define arg_6 0x0C
	// 47970 arg_6           = word ptr  0Ch ;~ 18ED:118A
cs=0x18ed;eip=0x00118a; 	X(PUSH(bp));	// 47972 push    bp ;~ 18ED:118A
cs=0x18ed;eip=0x00118b; 	T(MOV(bp, sp));	// 47973 mov     bp, sp ;~ 18ED:118B
cs=0x18ed;eip=0x00118d; 	T(SUB(sp, 0x12));	// 47974 sub     sp, 12h ;~ 18ED:118D
cs=0x18ed;eip=0x001190; 	X(PUSH(di));	// 47975 push    di ;~ 18ED:1190
cs=0x18ed;eip=0x001191; 	X(PUSH(si));	// 47976 push    si ;~ 18ED:1191
cs=0x18ed;eip=0x001192; 	T(SUB(ax, ax));	// 47977 sub     ax, ax ;~ 18ED:1192
cs=0x18ed;eip=0x001194; 	X(PUSH(ax));	// 47978 push    ax ;~ 18ED:1194
cs=0x18ed;eip=0x001195; 	T(ax = bp+var_12);	// 47979 lea     ax, [bp+var_12] ;~ 18ED:1195
cs=0x18ed;eip=0x001198; 	X(PUSH(ax));	// 47980 push    ax ;~ 18ED:1198
cs=0x18ed;eip=0x001199; 	X(PUSH(dialogarg2));	// 47981 push    dialogarg2 ;~ 18ED:1199
cs=0x18ed;eip=0x00119d; 	T(MOV(ax, 0x0FFFF));	// 47982 mov     ax, 0FFFFh ;~ 18ED:119D
cs=0x18ed;eip=0x0011a0; 	X(PUSH(ax));	// 47983 push    ax ;~ 18ED:11A0
cs=0x18ed;eip=0x0011a1; 	X(PUSH(ax));	// 47984 push    ax ;~ 18ED:11A1
cs=0x18ed;eip=0x0011a2; 	T(MOV(ax, offset(dseg,asav)));	// 47985 mov     ax, offset aSav ; "sav" ;~ 18ED:11A2
cs=0x18ed;eip=0x0011a5; 	X(PUSH(ax));	// 47986 push    ax ;~ 18ED:11A5
cs=0x18ed;eip=0x0011a6; 	X(PUSH(word_44cee));	// 47987 push    word_44CEE ;~ 18ED:11A6
cs=0x18ed;eip=0x0011aa; 	X(PUSH(mainresptr));	// 47988 push    mainresptr ;~ 18ED:11AA
cs=0x18ed;eip=0x0011ae; 	X(PUSH(cs));	// 47989 push    cs ;~ 18ED:11AE
cs=0x18ed;eip=0x0011af; 	J(CALL(locate_text_res,0));	// 47990 call    near ptr locate_text_res ;~ 18ED:11AF
cs=0x18ed;eip=0x0011b2; 	T(ADD(sp, 6));	// 47991 add     sp, 6 ;~ 18ED:11B2
cs=0x18ed;eip=0x0011b5; 	X(PUSH(dx));	// 47992 push    dx ;~ 18ED:11B5
cs=0x18ed;eip=0x0011b6; 	X(PUSH(ax));	// 47993 push    ax ;~ 18ED:11B6
cs=0x18ed;eip=0x0011b7; 	T(MOV(ax, 1));	// 47994 mov     ax, 1 ;~ 18ED:11B7
cs=0x18ed;eip=0x0011ba; 	X(PUSH(ax));	// 47995 push    ax ;~ 18ED:11BA
cs=0x18ed;eip=0x0011bb; 	T(MOV(ax, 3));	// 47996 mov     ax, 3 ;~ 18ED:11BB
cs=0x18ed;eip=0x0011be; 	X(PUSH(ax));	// 47997 push    ax ;~ 18ED:11BE
cs=0x18ed;eip=0x0011bf; 	X(PUSH(cs));	// 47998 push    cs ;~ 18ED:11BF
cs=0x18ed;eip=0x0011c0; 	J(CALL(show_dialog,0));	// 47999 call    near ptr show_dialog ;~ 18ED:11C0
cs=0x18ed;eip=0x0011c3; 	T(ADD(sp, 0x12));	// 48000 add     sp, 12h ;~ 18ED:11C3
cs=0x18ed;eip=0x0011c6; 	T(OR(ax, ax));	// 48001 or      ax, ax ;~ 18ED:11C6
cs=0x18ed;eip=0x0011c8; 	J(JGE(loc_28682));	// 48002 jge     short loc_28682 ;~ 18ED:11C8
cs=0x18ed;eip=0x0011ca; 	T(SUB(ax, ax));	// 48003 sub     ax, ax ;~ 18ED:11CA
cs=0x18ed;eip=0x0011cc; 	X(POP(si));	// 48004 pop     si ;~ 18ED:11CC
cs=0x18ed;eip=0x0011cd; 	X(POP(di));	// 48005 pop     di ;~ 18ED:11CD
cs=0x18ed;eip=0x0011ce; 	T(MOV(sp, bp));	// 48006 mov     sp, bp ;~ 18ED:11CE
cs=0x18ed;eip=0x0011d0; 	X(POP(bp));	// 48007 pop     bp ;~ 18ED:11D0
cs=0x18ed;eip=0x0011d1; 	J(RETF(0));	// 48008 retf ;~ 18ED:11D1
loc_28682:
	// 7555 
cs=0x18ed;eip=0x0011d2; 	X(MOV(*(raddr(ss,bp+var_4)), 0));	// 48012 mov     [bp+var_4], 0 ;~ 18ED:11D2
cs=0x18ed;eip=0x0011d6; 	X(PUSH(word_3eb90));	// 48013 push    word_3EB90 ;~ 18ED:11D6
cs=0x18ed;eip=0x0011da; 	X(PUSH(dialog_fnt_colour));	// 48014 push    dialog_fnt_colour ;~ 18ED:11DA
cs=0x18ed;eip=0x0011de; 	J(CALLF(font_set_unk,0));	// 48015 call    font_set_unk ;~ 18ED:11DE
cs=0x18ed;eip=0x0011e3; 	T(ADD(sp, 4));	// 48016 add     sp, 4 ;~ 18ED:11E3
cs=0x18ed;eip=0x0011e6; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 48017 push    [bp+arg_6] ;~ 18ED:11E6
cs=0x18ed;eip=0x0011e9; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 48018 push    [bp+arg_4] ;~ 18ED:11E9
cs=0x18ed;eip=0x0011ec; 	T(MOV(ax, 0x0AC74));	// 48019 mov     ax, 0AC74h ;~ 18ED:11EC
cs=0x18ed;eip=0x0011ef; 	X(PUSH(ax));	// 48020 push    ax ;~ 18ED:11EF
cs=0x18ed;eip=0x0011f0; 	X(PUSH(cs));	// 48021 push    cs ;~ 18ED:11F0
cs=0x18ed;eip=0x0011f1; 	J(CALL(copy_string,0));	// 48022 call    near ptr copy_string ;~ 18ED:11F1
cs=0x18ed;eip=0x0011f4; 	T(ADD(sp, 6));	// 48023 add     sp, 6 ;~ 18ED:11F4
cs=0x18ed;eip=0x0011f7; 	X(PUSH(*(dw*)(raddr(ss,bp+var_10))));	// 48024 push    [bp+var_10] ;~ 18ED:11F7
cs=0x18ed;eip=0x0011fa; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 48025 push    [bp+var_12] ;~ 18ED:11FA
cs=0x18ed;eip=0x0011fd; 	T(MOV(ax, 0x0AC74));	// 48026 mov     ax, 0AC74h ;~ 18ED:11FD
cs=0x18ed;eip=0x001200; 	X(PUSH(ax));	// 48027 push    ax ;~ 18ED:1200
cs=0x18ed;eip=0x001201; 	J(CALLF(sub_345bc,0));	// 48028 call    sub_345BC ;~ 18ED:1201
cs=0x18ed;eip=0x001206; 	T(ADD(sp, 6));	// 48029 add     sp, 6 ;~ 18ED:1206
cs=0x18ed;eip=0x001209; 	X(PUSH(word_3eb90));	// 48030 push    word_3EB90 ;~ 18ED:1209
cs=0x18ed;eip=0x00120d; 	X(PUSH(dialog_fnt_colour));	// 48031 push    dialog_fnt_colour ;~ 18ED:120D
cs=0x18ed;eip=0x001211; 	J(CALLF(font_set_unk,0));	// 48032 call    font_set_unk ;~ 18ED:1211
cs=0x18ed;eip=0x001216; 	T(ADD(sp, 4));	// 48033 add     sp, 4 ;~ 18ED:1216
cs=0x18ed;eip=0x001219; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_e +2)))));	// 48034 push    word ptr [bp+var_E+2] ;~ 18ED:1219
cs=0x18ed;eip=0x00121c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_e)))));	// 48035 push    word ptr [bp+var_E] ;~ 18ED:121C
cs=0x18ed;eip=0x00121f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 48036 push    word ptr [bp+arg_0] ;~ 18ED:121F
cs=0x18ed;eip=0x001222; 	J(CALLF(sub_345bc,0));	// 48037 call    sub_345BC ;~ 18ED:1222
cs=0x18ed;eip=0x001227; 	T(ADD(sp, 6));	// 48038 add     sp, 6 ;~ 18ED:1227
cs=0x18ed;eip=0x00122a; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_a+2)))));	// 48039 push    word ptr [bp+var_A+2] ;~ 18ED:122A
cs=0x18ed;eip=0x00122d; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_a)))));	// 48040 push    word ptr [bp+var_A] ;~ 18ED:122D
cs=0x18ed;eip=0x001230; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 48041 push    word ptr [bp+arg_0+2] ;~ 18ED:1230
cs=0x18ed;eip=0x001233; 	J(CALLF(sub_345bc,0));	// 48042 call    sub_345BC ;~ 18ED:1233
cs=0x18ed;eip=0x001238; 	T(ADD(sp, 6));	// 48043 add     sp, 6 ;~ 18ED:1238
cs=0x18ed;eip=0x00123b; 	X(PUSH(cs));	// 48044 push    cs ;~ 18ED:123B
cs=0x18ed;eip=0x00123c; 	J(CALL(mouse_draw_transparent_check,0));	// 48045 call    near ptr mouse_draw_transparent_check ;~ 18ED:123C
cs=0x18ed;eip=0x00123f; 	J(JMP(loc_2872f));	// 48046 jmp     short loc_2872F ;~ 18ED:123F
loc_286f2:
	// 7556 
cs=0x18ed;eip=0x001242; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 48051 mov     bx, word ptr [bp+arg_0+2] ;~ 18ED:1242
cs=0x18ed;eip=0x001245; 	T(CMP(*(raddr(ds,bx+di)), 0x20));	// 48052 cmp     byte ptr [bx+di], 20h ; ' ' ;~ 18ED:1245
cs=0x18ed;eip=0x001248; 	J(JNZ(loc_286fd));	// 48053 jnz     short loc_286FD ;~ 18ED:1248
cs=0x18ed;eip=0x00124a; 	X(MOV(*(raddr(ds,bx+di)), 0x5F));	// 48054 mov     byte ptr [bx+di], 5Fh ; '_' ;~ 18ED:124A
loc_286fd:
	// 7557 
cs=0x18ed;eip=0x00124d; 	T(INC(di));	// 48057 inc     di ;~ 18ED:124D
loc_286fe:
	// 7558 
cs=0x18ed;eip=0x00124e; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 48060 mov     bx, word ptr [bp+arg_0+2] ;~ 18ED:124E
cs=0x18ed;eip=0x001251; 	T(CMP(*(raddr(ds,bx+di)), 0));	// 48061 cmp     byte ptr [bx+di], 0 ;~ 18ED:1251
cs=0x18ed;eip=0x001254; 	J(JNZ(loc_286f2));	// 48062 jnz     short loc_286F2 ;~ 18ED:1254
cs=0x18ed;eip=0x001256; 	T(CMP(si, 0x1B));	// 48063 cmp     si, 1Bh ;~ 18ED:1256
cs=0x18ed;eip=0x001259; 	J(JZ(loc_28754));	// 48064 jz      short loc_28754 ;~ 18ED:1259
cs=0x18ed;eip=0x00125b; 	T(CMP(si, 0x0D));	// 48065 cmp     si, 0Dh ;~ 18ED:125B
cs=0x18ed;eip=0x00125e; 	J(JZ(loc_28750));	// 48066 jz      short loc_28750 ;~ 18ED:125E
cs=0x18ed;eip=0x001260; 	T(MOV(ax, 0x7530));	// 48067 mov     ax, 7530h ;~ 18ED:1260
cs=0x18ed;eip=0x001263; 	T(CWD);	// 48068 cwd ;~ 18ED:1263
cs=0x18ed;eip=0x001264; 	X(PUSH(dx));	// 48069 push    dx              ; int ;~ 18ED:1264
cs=0x18ed;eip=0x001265; 	X(PUSH(ax));	// 48070 push    ax              ; int ;~ 18ED:1265
cs=0x18ed;eip=0x001266; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_e +2)))));	// 48071 push    word ptr [bp+var_E+2] ; int ;~ 18ED:1266
cs=0x18ed;eip=0x001269; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_e)))));	// 48072 push    word ptr [bp+var_E] ; int ;~ 18ED:1269
cs=0x18ed;eip=0x00126c; 	T(MOV(ax, 0x12));	// 48073 mov     ax, 12h ;~ 18ED:126C
cs=0x18ed;eip=0x00126f; 	X(PUSH(ax));	// 48074 push    ax ;~ 18ED:126F
cs=0x18ed;eip=0x001270; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 48075 push    word ptr [bp+arg_0] ; char * ;~ 18ED:1270
cs=0x18ed;eip=0x001273; 	X(PUSH(cs));	// 48076 push    cs ;~ 18ED:1273
cs=0x18ed;eip=0x001274; 	J(CALL(call_read_line,0));	// 48077 call    near ptr call_read_line ;~ 18ED:1274
cs=0x18ed;eip=0x001277; 	T(ADD(sp, 0x0C));	// 48078 add     sp, 0Ch ;~ 18ED:1277
cs=0x18ed;eip=0x00127a; 	T(CMP(ax, 0x1B));	// 48079 cmp     ax, 1Bh ;~ 18ED:127A
cs=0x18ed;eip=0x00127d; 	J(JZ(loc_28754));	// 48080 jz      short loc_28754 ;~ 18ED:127D
loc_2872f:
	// 7559 
cs=0x18ed;eip=0x00127f; 	T(MOV(ax, 0x7530));	// 48083 mov     ax, 7530h ;~ 18ED:127F
cs=0x18ed;eip=0x001282; 	T(CWD);	// 48084 cwd ;~ 18ED:1282
cs=0x18ed;eip=0x001283; 	X(PUSH(dx));	// 48085 push    dx              ; int ;~ 18ED:1283
cs=0x18ed;eip=0x001284; 	X(PUSH(ax));	// 48086 push    ax              ; int ;~ 18ED:1284
cs=0x18ed;eip=0x001285; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_a+2)))));	// 48087 push    word ptr [bp+var_A+2] ; int ;~ 18ED:1285
cs=0x18ed;eip=0x001288; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_a)))));	// 48088 push    word ptr [bp+var_A] ; int ;~ 18ED:1288
cs=0x18ed;eip=0x00128b; 	T(MOV(ax, 8));	// 48089 mov     ax, 8 ;~ 18ED:128B
cs=0x18ed;eip=0x00128e; 	X(PUSH(ax));	// 48090 push    ax ;~ 18ED:128E
cs=0x18ed;eip=0x00128f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 48091 push    word ptr [bp+arg_0+2] ; char * ;~ 18ED:128F
cs=0x18ed;eip=0x001292; 	X(PUSH(cs));	// 48092 push    cs ;~ 18ED:1292
cs=0x18ed;eip=0x001293; 	J(CALL(call_read_line,0));	// 48093 call    near ptr call_read_line ;~ 18ED:1293
cs=0x18ed;eip=0x001296; 	T(ADD(sp, 0x0C));	// 48094 add     sp, 0Ch ;~ 18ED:1296
cs=0x18ed;eip=0x001299; 	T(MOV(si, ax));	// 48095 mov     si, ax ;~ 18ED:1299
cs=0x18ed;eip=0x00129b; 	T(SUB(di, di));	// 48096 sub     di, di ;~ 18ED:129B
cs=0x18ed;eip=0x00129d; 	J(JMP(loc_286fe));	// 48097 jmp     short loc_286FE ;~ 18ED:129D
loc_28750:
	// 7560 
cs=0x18ed;eip=0x0012a0; 	X(MOV(*(raddr(ss,bp+var_4)), 1));	// 48102 mov     [bp+var_4], 1 ;~ 18ED:12A0
loc_28754:
	// 7561 
cs=0x18ed;eip=0x0012a4; 	X(PUSH(cs));	// 48106 push    cs ;~ 18ED:12A4
cs=0x18ed;eip=0x0012a5; 	J(CALL(sub_275c6,0));	// 48107 call    near ptr sub_275C6 ;~ 18ED:12A5
cs=0x18ed;eip=0x0012a8; 	T(MOV(al, *(raddr(ss,bp+var_4))));	// 48108 mov     al, [bp+var_4] ;~ 18ED:12A8
cs=0x18ed;eip=0x0012ab; 	T(CBW);	// 48109 cbw ;~ 18ED:12AB
cs=0x18ed;eip=0x0012ac; 	X(POP(si));	// 48110 pop     si ;~ 18ED:12AC
cs=0x18ed;eip=0x0012ad; 	X(POP(di));	// 48111 pop     di ;~ 18ED:12AD
cs=0x18ed;eip=0x0012ae; 	T(MOV(sp, bp));	// 48112 mov     sp, bp ;~ 18ED:12AE
cs=0x18ed;eip=0x0012b0; 	X(POP(bp));	// 48113 pop     bp ;~ 18ED:12B0
cs=0x18ed;eip=0x0012b1; 	J(RETF(0));	// 48114 retf ;~ 18ED:12B1

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kdo_savefile_dialog: 	goto do_savefile_dialog;
        case m2c::kloc_28682: 	goto loc_28682;
        case m2c::kloc_286f2: 	goto loc_286f2;
        case m2c::kloc_286fd: 	goto loc_286fd;
        case m2c::kloc_286fe: 	goto loc_286fe;
        case m2c::kloc_2872f: 	goto loc_2872f;
        case m2c::kloc_28750: 	goto loc_28750;
        case m2c::kloc_28754: 	goto loc_28754;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool parse_filepath_separators(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    parse_filepath_separators:
    _begin:
#undef var_6
#define var_6 -6
	// 48126 var_6           = word ptr -6 ;~ 18ED:12B2
#undef var_4
#define var_4 -4
	// 48127 var_4           = word ptr -4 ;~ 18ED:12B2
#undef var_2
#define var_2 -2
	// 48128 var_2           = byte ptr -2 ;~ 18ED:12B2
#undef arg_0
#define arg_0 6
	// 48129 arg_0           = word ptr  6 ;~ 18ED:12B2
#undef arg_2
#define arg_2 8
	// 48130 arg_2           = dword ptr  8 ;~ 18ED:12B2
cs=0x18ed;eip=0x0012b2; 	X(PUSH(bp));	// 48132 push    bp ;~ 18ED:12B2
cs=0x18ed;eip=0x0012b3; 	T(MOV(bp, sp));	// 48133 mov     bp, sp ;~ 18ED:12B3
cs=0x18ed;eip=0x0012b5; 	T(SUB(sp, 6));	// 48134 sub     sp, 6 ;~ 18ED:12B5
cs=0x18ed;eip=0x0012b8; 	X(PUSH(si));	// 48135 push    si ;~ 18ED:12B8
cs=0x18ed;eip=0x0012b9; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 48136 push    word ptr [bp+arg_2] ; char * ;~ 18ED:12B9
cs=0x18ed;eip=0x0012bc; 	J(CALLF(_strlen,0));	// 48137 call    _strlen ;~ 18ED:12BC
cs=0x18ed;eip=0x0012c1; 	T(ADD(sp, 2));	// 48138 add     sp, 2 ;~ 18ED:12C1
cs=0x18ed;eip=0x0012c4; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 48139 mov     [bp+var_4], ax ;~ 18ED:12C4
loc_28777:
	// 7562 
cs=0x18ed;eip=0x0012c7; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_4))));	// 48142 mov     si, [bp+var_4] ;~ 18ED:12C7
cs=0x18ed;eip=0x0012ca; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 48143 mov     bx, word ptr [bp+arg_2] ;~ 18ED:12CA
cs=0x18ed;eip=0x0012cd; 	T(MOV(al, *(raddr(ds,bx+si-1))));	// 48144 mov     al, [bx+si-1] ;~ 18ED:12CD
cs=0x18ed;eip=0x0012d0; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 48145 mov     [bp+var_2], al ;~ 18ED:12D0
cs=0x18ed;eip=0x0012d3; 	T(CMP(al, 0x5C));	// 48146 cmp     al, 5Ch ; '\' ;~ 18ED:12D3
cs=0x18ed;eip=0x0012d5; 	J(JZ(loc_28790));	// 48147 jz      short loc_28790 ;~ 18ED:12D5
cs=0x18ed;eip=0x0012d7; 	T(CMP(al, 0x3A));	// 48148 cmp     al, 3Ah ; ':' ;~ 18ED:12D7
cs=0x18ed;eip=0x0012d9; 	J(JZ(loc_28790));	// 48149 jz      short loc_28790 ;~ 18ED:12D9
cs=0x18ed;eip=0x0012db; 	X(DEC(*(dw*)(raddr(ss,bp+var_4))));	// 48150 dec     [bp+var_4] ;~ 18ED:12DB
cs=0x18ed;eip=0x0012de; 	J(JNZ(loc_28777));	// 48151 jnz     short loc_28777 ;~ 18ED:12DE
loc_28790:
	// 7563 
cs=0x18ed;eip=0x0012e0; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0));	// 48155 mov     [bp+var_6], 0 ;~ 18ED:12E0
loc_28795:
	// 7564 
cs=0x18ed;eip=0x0012e5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 48158 mov     bx, [bp+var_4] ;~ 18ED:12E5
cs=0x18ed;eip=0x0012e8; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 48159 inc     [bp+var_4] ;~ 18ED:12E8
cs=0x18ed;eip=0x0012eb; 	T(MOV(si, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 48160 mov     si, word ptr [bp+arg_2] ;~ 18ED:12EB
cs=0x18ed;eip=0x0012ee; 	T(MOV(al, *(raddr(ds,bx+si))));	// 48161 mov     al, [bx+si] ;~ 18ED:12EE
cs=0x18ed;eip=0x0012f0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_6))));	// 48162 mov     bx, [bp+var_6] ;~ 18ED:12F0
cs=0x18ed;eip=0x0012f3; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 48163 mov     si, [bp+arg_0] ;~ 18ED:12F3
cs=0x18ed;eip=0x0012f6; 	X(MOV(*(raddr(ds,bx+si)), al));	// 48164 mov     [bx+si], al ;~ 18ED:12F6
cs=0x18ed;eip=0x0012f8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_6))));	// 48165 mov     bx, [bp+var_6] ;~ 18ED:12F8
cs=0x18ed;eip=0x0012fb; 	X(INC(*(dw*)(raddr(ss,bp+var_6))));	// 48166 inc     [bp+var_6] ;~ 18ED:12FB
cs=0x18ed;eip=0x0012fe; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 48167 mov     si, [bp+arg_0] ;~ 18ED:12FE
cs=0x18ed;eip=0x001301; 	T(CMP(*(raddr(ds,bx+si)), 0x2E));	// 48168 cmp     byte ptr [bx+si], 2Eh ; '.' ;~ 18ED:1301
cs=0x18ed;eip=0x001304; 	J(JNZ(loc_28795));	// 48169 jnz     short loc_28795 ;~ 18ED:1304
cs=0x18ed;eip=0x001306; 	X(DEC(*(dw*)(raddr(ss,bp+var_6))));	// 48170 dec     [bp+var_6] ;~ 18ED:1306
cs=0x18ed;eip=0x001309; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_6))));	// 48171 mov     bx, [bp+var_6] ;~ 18ED:1309
cs=0x18ed;eip=0x00130c; 	X(MOV(*(raddr(ds,bx+si)), 0));	// 48172 mov     byte ptr [bx+si], 0 ;~ 18ED:130C
cs=0x18ed;eip=0x00130f; 	X(POP(si));	// 48173 pop     si ;~ 18ED:130F
cs=0x18ed;eip=0x001310; 	T(MOV(sp, bp));	// 48174 mov     sp, bp ;~ 18ED:1310
cs=0x18ed;eip=0x001312; 	X(POP(bp));	// 48175 pop     bp ;~ 18ED:1312
cs=0x18ed;eip=0x001313; 	J(RETF(0));	// 48176 retf ;~ 18ED:1313

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_28777: 	goto loc_28777;
        case m2c::kloc_28790: 	goto loc_28790;
        case m2c::kloc_28795: 	goto loc_28795;
        case m2c::kparse_filepath_separators: 	goto parse_filepath_separators;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool input_checking(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    input_checking:
    _begin:
#undef arg_0
#define arg_0 6
	// 48187 arg_0           = word ptr  6 ;~ 18ED:1314
cs=0x18ed;eip=0x001314; 	X(PUSH(bp));	// 48189 push    bp ;~ 18ED:1314
cs=0x18ed;eip=0x001315; 	T(MOV(bp, sp));	// 48190 mov     bp, sp ;~ 18ED:1315
cs=0x18ed;eip=0x001317; 	T(SUB(sp, 4));	// 48191 sub     sp, 4 ;~ 18ED:1317
cs=0x18ed;eip=0x00131a; 	X(PUSH(di));	// 48192 push    di ;~ 18ED:131A
cs=0x18ed;eip=0x00131b; 	X(PUSH(si));	// 48193 push    si ;~ 18ED:131B
cs=0x18ed;eip=0x00131c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 48194 mov     ax, [bp+arg_0] ;~ 18ED:131C
cs=0x18ed;eip=0x00131f; 	X(ADD(input_framecount, ax));	// 48195 add     input_framecount, ax ;~ 18ED:131F
cs=0x18ed;eip=0x001323; 	T(CMP(input_framecount, 0x4E20));	// 48196 cmp     input_framecount, 4E20h ; 20000 ;~ 18ED:1323
cs=0x18ed;eip=0x001329; 	J(JLE(loc_287ed));	// 48197 jle     short loc_287ED ;~ 18ED:1329
cs=0x18ed;eip=0x00132b; 	X(SUB(input_framecount, 0x2710));	// 48198 sub     input_framecount, 2710h ; 10000 ;~ 18ED:132B
cs=0x18ed;eip=0x001331; 	X(SUB(input_framecount2, 0x2710));	// 48199 sub     input_framecount2, 2710h ;~ 18ED:1331
cs=0x18ed;eip=0x001337; 	X(SUB(input_framecount3, 0x2710));	// 48200 sub     input_framecount3, 2710h ;~ 18ED:1337
loc_287ed:
	// 7565 
cs=0x18ed;eip=0x00133d; 	J(CALLF(kb_get_char,0));	// 48203 call    kb_get_char ;~ 18ED:133D
cs=0x18ed;eip=0x001342; 	T(MOV(si, ax));	// 48204 mov     si, ax ;~ 18ED:1342
cs=0x18ed;eip=0x001344; 	T(OR(si, si));	// 48205 or      si, si ;~ 18ED:1344
cs=0x18ed;eip=0x001346; 	J(JZ(loc_287fd));	// 48206 jz      short loc_287FD ;~ 18ED:1346
cs=0x18ed;eip=0x001348; 	X(MOV(kbormouse, 0));	// 48207 mov     kbormouse, 0 ;~ 18ED:1348
loc_287fd:
	// 7566 
cs=0x18ed;eip=0x00134d; 	J(CALLF(get_joy_flags,0));	// 48210 call    get_joy_flags ;~ 18ED:134D
cs=0x18ed;eip=0x001352; 	T(MOV(di, ax));	// 48211 mov     di, ax ;~ 18ED:1352
cs=0x18ed;eip=0x001354; 	J(CALLF(get_kb_or_joy_flags,0));	// 48212 call    get_kb_or_joy_flags ;~ 18ED:1354
cs=0x18ed;eip=0x001359; 	X(MOV(kbjoyflags, ax));	// 48213 mov     kbjoyflags, ax ;~ 18ED:1359
cs=0x18ed;eip=0x00135c; 	T(CMP(joyflags, di));	// 48214 cmp     joyflags, di ;~ 18ED:135C
cs=0x18ed;eip=0x001360; 	J(JNZ(loc_28815));	// 48215 jnz     short loc_28815 ;~ 18ED:1360
cs=0x18ed;eip=0x001362; 	J(JMP(loc_28896));	// 48216 jmp     loc_28896 ;~ 18ED:1362
loc_28815:
	// 7567 
cs=0x18ed;eip=0x001365; 	T(MOV(ax, joyflags));	// 48220 mov     ax, joyflags ;~ 18ED:1365
cs=0x18ed;eip=0x001368; 	T(XOR(ax, di));	// 48221 xor     ax, di ;~ 18ED:1368
cs=0x18ed;eip=0x00136a; 	T(AND(ax, di));	// 48222 and     ax, di          ; find changed flags from last? ;~ 18ED:136A
cs=0x18ed;eip=0x00136c; 	X(MOV(newjoyflags, ax));	// 48223 mov     newjoyflags, ax ;~ 18ED:136C
cs=0x18ed;eip=0x00136f; 	X(MOV(joyflags, di));	// 48224 mov     joyflags, di ;~ 18ED:136F
loc_28823:
	// 7568 
cs=0x18ed;eip=0x001373; 	T(TEST(*(db*)(((db*)&newjoyflags)), 0x20));	// 48227 test    byte ptr newjoyflags, 20h ;~ 18ED:1373
cs=0x18ed;eip=0x001378; 	J(JZ(loc_28834));	// 48228 jz      short loc_28834 ;~ 18ED:1378
cs=0x18ed;eip=0x00137a; 	X(MOV(joyinputcode, 0x0D));	// 48229 mov     joyinputcode, 0Dh ;~ 18ED:137A
cs=0x18ed;eip=0x001380; 	J(JMP(loc_28881));	// 48230 jmp     short loc_28881 ;~ 18ED:1380
loc_28834:
	// 7569 
cs=0x18ed;eip=0x001384; 	T(TEST(*(db*)(((db*)&newjoyflags)), 0x10));	// 48236 test    byte ptr newjoyflags, 10h ;~ 18ED:1384
cs=0x18ed;eip=0x001389; 	J(JZ(loc_28844));	// 48237 jz      short loc_28844 ;~ 18ED:1389
cs=0x18ed;eip=0x00138b; 	X(MOV(joyinputcode, 0x20));	// 48238 mov     joyinputcode, 20h ; ' ' ;~ 18ED:138B
cs=0x18ed;eip=0x001391; 	J(JMP(loc_28881));	// 48239 jmp     short loc_28881 ;~ 18ED:1391
loc_28844:
	// 7570 
cs=0x18ed;eip=0x001394; 	T(TEST(*(db*)(((db*)&newjoyflags)), 1));	// 48244 test    byte ptr newjoyflags, 1 ;~ 18ED:1394
cs=0x18ed;eip=0x001399; 	J(JZ(loc_28854));	// 48245 jz      short loc_28854 ;~ 18ED:1399
cs=0x18ed;eip=0x00139b; 	X(MOV(joyinputcode, 0x4800));	// 48246 mov     joyinputcode, 4800h ;~ 18ED:139B
cs=0x18ed;eip=0x0013a1; 	J(JMP(loc_28881));	// 48247 jmp     short loc_28881 ;~ 18ED:13A1
loc_28854:
	// 7571 
cs=0x18ed;eip=0x0013a4; 	T(TEST(*(db*)(((db*)&newjoyflags)), 2));	// 48252 test    byte ptr newjoyflags, 2 ;~ 18ED:13A4
cs=0x18ed;eip=0x0013a9; 	J(JZ(loc_28864));	// 48253 jz      short loc_28864 ;~ 18ED:13A9
cs=0x18ed;eip=0x0013ab; 	X(MOV(joyinputcode, 0x5000));	// 48254 mov     joyinputcode, 5000h ;~ 18ED:13AB
cs=0x18ed;eip=0x0013b1; 	J(JMP(loc_28881));	// 48255 jmp     short loc_28881 ;~ 18ED:13B1
loc_28864:
	// 7572 
cs=0x18ed;eip=0x0013b4; 	T(TEST(*(db*)(((db*)&newjoyflags)), 8));	// 48260 test    byte ptr newjoyflags, 8 ;~ 18ED:13B4
cs=0x18ed;eip=0x0013b9; 	J(JZ(loc_28874));	// 48261 jz      short loc_28874 ;~ 18ED:13B9
cs=0x18ed;eip=0x0013bb; 	X(MOV(joyinputcode, 0x4B00));	// 48262 mov     joyinputcode, 4B00h ;~ 18ED:13BB
cs=0x18ed;eip=0x0013c1; 	J(JMP(loc_28881));	// 48263 jmp     short loc_28881 ;~ 18ED:13C1
loc_28874:
	// 7573 
cs=0x18ed;eip=0x0013c4; 	T(TEST(*(db*)(((db*)&newjoyflags)), 4));	// 48268 test    byte ptr newjoyflags, 4 ;~ 18ED:13C4
cs=0x18ed;eip=0x0013c9; 	J(JZ(loc_28881));	// 48269 jz      short loc_28881 ;~ 18ED:13C9
cs=0x18ed;eip=0x0013cb; 	X(MOV(joyinputcode, 0x4D00));	// 48270 mov     joyinputcode, 4D00h ;~ 18ED:13CB
loc_28881:
	// 7574 
cs=0x18ed;eip=0x0013d1; 	T(CMP(joyinputcode, 0));	// 48274 cmp     joyinputcode, 0 ;~ 18ED:13D1
cs=0x18ed;eip=0x0013d6; 	J(JZ(loc_288a9));	// 48275 jz      short loc_288A9 ;~ 18ED:13D6
cs=0x18ed;eip=0x0013d8; 	T(MOV(ax, input_framecount));	// 48276 mov     ax, input_framecount ;~ 18ED:13D8
cs=0x18ed;eip=0x0013db; 	X(MOV(input_framecount3, ax));	// 48277 mov     input_framecount3, ax ;~ 18ED:13DB
cs=0x18ed;eip=0x0013de; 	X(MOV(kbormouse, 0));	// 48278 mov     kbormouse, 0 ;~ 18ED:13DE
cs=0x18ed;eip=0x0013e3; 	J(JMP(loc_288a9));	// 48279 jmp     short loc_288A9 ;~ 18ED:13E3
loc_28896:
	// 7575 
cs=0x18ed;eip=0x0013e6; 	T(OR(di, di));	// 48284 or      di, di ;~ 18ED:13E6
cs=0x18ed;eip=0x0013e8; 	J(JZ(loc_288a9));	// 48285 jz      short loc_288A9 ;~ 18ED:13E8
cs=0x18ed;eip=0x0013ea; 	T(MOV(ax, input_framecount3));	// 48286 mov     ax, input_framecount3 ;~ 18ED:13EA
cs=0x18ed;eip=0x0013ed; 	T(ADD(ax, 0x14));	// 48287 add     ax, 14h ;~ 18ED:13ED
cs=0x18ed;eip=0x0013f0; 	T(CMP(ax, input_framecount));	// 48288 cmp     ax, input_framecount ;~ 18ED:13F0
cs=0x18ed;eip=0x0013f4; 	J(JGE(loc_288a9));	// 48289 jge     short loc_288A9 ;~ 18ED:13F4
cs=0x18ed;eip=0x0013f6; 	J(JMP(loc_28823));	// 48290 jmp     loc_28823 ;~ 18ED:13F6
loc_288a9:
	// 7576 
cs=0x18ed;eip=0x0013f9; 	T(MOV(ax, offset(dseg,mouse_ypos)));	// 48295 mov     ax, offset mouse_ypos ;~ 18ED:13F9
cs=0x18ed;eip=0x0013fc; 	X(PUSH(ax));	// 48296 push    ax ;~ 18ED:13FC
cs=0x18ed;eip=0x0013fd; 	T(MOV(ax, offset(dseg,mouse_xpos)));	// 48297 mov     ax, offset mouse_xpos ;~ 18ED:13FD
cs=0x18ed;eip=0x001400; 	X(PUSH(ax));	// 48298 push    ax ;~ 18ED:1400
cs=0x18ed;eip=0x001401; 	T(MOV(ax, offset(dseg,mouse_butstate)));	// 48299 mov     ax, offset mouse_butstate ;~ 18ED:1401
cs=0x18ed;eip=0x001404; 	X(PUSH(ax));	// 48300 push    ax ;~ 18ED:1404
cs=0x18ed;eip=0x001405; 	J(CALLF(mouse_get_state,0));	// 48301 call    mouse_get_state ;~ 18ED:1405
cs=0x18ed;eip=0x00140a; 	T(ADD(sp, 6));	// 48302 add     sp, 6 ;~ 18ED:140A
cs=0x18ed;eip=0x00140d; 	T(MOV(ax, mouse_xpos));	// 48303 mov     ax, mouse_xpos ;~ 18ED:140D
cs=0x18ed;eip=0x001410; 	T(CMP(mouse_oldx, ax));	// 48304 cmp     mouse_oldx, ax ;~ 18ED:1410
cs=0x18ed;eip=0x001414; 	J(JNZ(loc_288d8));	// 48305 jnz     short loc_288D8 ;~ 18ED:1414
cs=0x18ed;eip=0x001416; 	T(MOV(ax, mouse_ypos));	// 48306 mov     ax, mouse_ypos ;~ 18ED:1416
cs=0x18ed;eip=0x001419; 	T(CMP(mouse_oldy, ax));	// 48307 cmp     mouse_oldy, ax ;~ 18ED:1419
cs=0x18ed;eip=0x00141d; 	J(JNZ(loc_288d8));	// 48308 jnz     short loc_288D8 ;~ 18ED:141D
cs=0x18ed;eip=0x00141f; 	T(MOV(ax, mouse_butstate));	// 48309 mov     ax, mouse_butstate ;~ 18ED:141F
cs=0x18ed;eip=0x001422; 	T(CMP(mouse_oldbut, ax));	// 48310 cmp     mouse_oldbut, ax ;~ 18ED:1422
cs=0x18ed;eip=0x001426; 	J(JZ(loc_28908));	// 48311 jz      short loc_28908 ;~ 18ED:1426
loc_288d8:
	// 7577 
cs=0x18ed;eip=0x001428; 	T(MOV(ax, mouse_xpos));	// 48315 mov     ax, mouse_xpos ;~ 18ED:1428
cs=0x18ed;eip=0x00142b; 	X(MOV(mouse_oldx, ax));	// 48316 mov     mouse_oldx, ax ;~ 18ED:142B
cs=0x18ed;eip=0x00142e; 	T(MOV(ax, mouse_ypos));	// 48317 mov     ax, mouse_ypos ;~ 18ED:142E
cs=0x18ed;eip=0x001431; 	X(MOV(mouse_oldy, ax));	// 48318 mov     mouse_oldy, ax ;~ 18ED:1431
cs=0x18ed;eip=0x001434; 	X(MOV(kbormouse, 1));	// 48319 mov     kbormouse, 1 ;~ 18ED:1434
cs=0x18ed;eip=0x001439; 	X(MOV(input_framecounter, 0));	// 48320 mov     input_framecounter, 0 ;~ 18ED:1439
cs=0x18ed;eip=0x00143f; 	T(CMP(byte_3b8f7, 0));	// 48321 cmp     byte_3B8F7, 0 ;~ 18ED:143F
cs=0x18ed;eip=0x001444; 	J(JZ(loc_28934));	// 48322 jz      short loc_28934 ;~ 18ED:1444
cs=0x18ed;eip=0x001446; 	T(CMP(mouse_isdirty, 0));	// 48323 cmp     mouse_isdirty, 0 ;~ 18ED:1446
cs=0x18ed;eip=0x00144b; 	J(JZ(loc_28901));	// 48324 jz      short loc_28901 ;~ 18ED:144B
cs=0x18ed;eip=0x00144d; 	X(PUSH(cs));	// 48325 push    cs ;~ 18ED:144D
cs=0x18ed;eip=0x00144e; 	J(CALL(mouse_draw_opaque,0));	// 48326 call    near ptr mouse_draw_opaque ;~ 18ED:144E
loc_28901:
	// 7578 
cs=0x18ed;eip=0x001451; 	X(PUSH(cs));	// 48329 push    cs ;~ 18ED:1451
cs=0x18ed;eip=0x001452; 	J(CALL(mouse_draw_transparent,0));	// 48330 call    near ptr mouse_draw_transparent ;~ 18ED:1452
cs=0x18ed;eip=0x001455; 	J(JMP(loc_28934));	// 48331 jmp     short loc_28934 ;~ 18ED:1455
loc_28908:
	// 7579 
cs=0x18ed;eip=0x001458; 	T(CMP(kbormouse, 0));	// 48336 cmp     kbormouse, 0 ;~ 18ED:1458
cs=0x18ed;eip=0x00145d; 	J(JZ(loc_28934));	// 48337 jz      short loc_28934 ;~ 18ED:145D
cs=0x18ed;eip=0x00145f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 48338 mov     ax, [bp+arg_0] ;~ 18ED:145F
cs=0x18ed;eip=0x001462; 	X(ADD(input_framecounter, ax));	// 48339 add     input_framecounter, ax ;~ 18ED:1462
cs=0x18ed;eip=0x001466; 	T(CMP(input_framecounter, 0x1F4));	// 48340 cmp     input_framecounter, 1F4h ;~ 18ED:1466
cs=0x18ed;eip=0x00146c; 	J(JLE(loc_28934));	// 48341 jle     short loc_28934 ;~ 18ED:146C
cs=0x18ed;eip=0x00146e; 	X(MOV(input_framecounter, 0));	// 48342 mov     input_framecounter, 0 ;~ 18ED:146E
cs=0x18ed;eip=0x001474; 	X(MOV(kbormouse, 0));	// 48343 mov     kbormouse, 0 ;~ 18ED:1474
cs=0x18ed;eip=0x001479; 	T(CMP(mouse_isdirty, 0));	// 48344 cmp     mouse_isdirty, 0 ;~ 18ED:1479
cs=0x18ed;eip=0x00147e; 	J(JZ(loc_28934));	// 48345 jz      short loc_28934 ;~ 18ED:147E
cs=0x18ed;eip=0x001480; 	X(PUSH(cs));	// 48346 push    cs ;~ 18ED:1480
cs=0x18ed;eip=0x001481; 	J(CALL(mouse_draw_opaque,0));	// 48347 call    near ptr mouse_draw_opaque ;~ 18ED:1481
loc_28934:
	// 7580 
cs=0x18ed;eip=0x001484; 	T(CMP(kbormouse, 0));	// 48351 cmp     kbormouse, 0 ;~ 18ED:1484
cs=0x18ed;eip=0x001489; 	J(JZ(_try_ret_joyinput));	// 48352 jz      short _try_ret_joyinput ;~ 18ED:1489
cs=0x18ed;eip=0x00148b; 	T(MOV(ax, mouse_oldbut));	// 48353 mov     ax, mouse_oldbut ;~ 18ED:148B
cs=0x18ed;eip=0x00148e; 	T(CMP(mouse_butstate, ax));	// 48354 cmp     mouse_butstate, ax ;~ 18ED:148E
cs=0x18ed;eip=0x001492; 	J(JZ(loc_2897c));	// 48355 jz      short loc_2897C ;~ 18ED:1492
cs=0x18ed;eip=0x001494; 	T(MOV(ax, mouse_butstate));	// 48356 mov     ax, mouse_butstate ;~ 18ED:1494
cs=0x18ed;eip=0x001497; 	X(MOV(mouse_oldbut, ax));	// 48357 mov     mouse_oldbut, ax ;~ 18ED:1497
loc_2894a:
	// 7581 
cs=0x18ed;eip=0x00149a; 	T(TEST(*(db*)(((db*)&mouse_butstate)), 1));	// 48360 test    byte ptr mouse_butstate, 1 ;~ 18ED:149A
cs=0x18ed;eip=0x00149f; 	J(JZ(loc_2895a));	// 48361 jz      short loc_2895A ;~ 18ED:149F
cs=0x18ed;eip=0x0014a1; 	X(MOV(mousebutinputcode, 0x20));	// 48362 mov     mousebutinputcode, 20h ; ' ' ;~ 18ED:14A1
cs=0x18ed;eip=0x0014a7; 	J(JMP(loc_28967));	// 48363 jmp     short loc_28967 ;~ 18ED:14A7
loc_2895a:
	// 7582 
cs=0x18ed;eip=0x0014aa; 	T(TEST(*(db*)(((db*)&mouse_butstate)), 2));	// 48368 test    byte ptr mouse_butstate, 2 ;~ 18ED:14AA
cs=0x18ed;eip=0x0014af; 	J(JZ(loc_28967));	// 48369 jz      short loc_28967 ;~ 18ED:14AF
cs=0x18ed;eip=0x0014b1; 	X(MOV(mousebutinputcode, 0x0D));	// 48370 mov     mousebutinputcode, 0Dh ;~ 18ED:14B1
loc_28967:
	// 7583 
cs=0x18ed;eip=0x0014b7; 	T(CMP(mousebutinputcode, 0));	// 48374 cmp     mousebutinputcode, 0 ;~ 18ED:14B7
cs=0x18ed;eip=0x0014bc; 	J(JZ(loc_28974));	// 48375 jz      short loc_28974 ;~ 18ED:14BC
cs=0x18ed;eip=0x0014be; 	T(MOV(ax, input_framecount));	// 48376 mov     ax, input_framecount ;~ 18ED:14BE
cs=0x18ed;eip=0x0014c1; 	X(MOV(input_framecount2, ax));	// 48377 mov     input_framecount2, ax ;~ 18ED:14C1
loc_28974:
	// 7584 
cs=0x18ed;eip=0x0014c4; 	X(MOV(input_framecounter, 0));	// 48380 mov     input_framecounter, 0 ;~ 18ED:14C4
cs=0x18ed;eip=0x0014ca; 	J(JMP(_try_ret_mousebut01));	// 48381 jmp     short _try_ret_mousebut01 ;~ 18ED:14CA
loc_2897c:
	// 7585 
cs=0x18ed;eip=0x0014cc; 	T(CMP(mouse_butstate, 0));	// 48385 cmp     mouse_butstate, 0 ;~ 18ED:14CC
cs=0x18ed;eip=0x0014d1; 	J(JZ(_try_ret_mousebut01));	// 48386 jz      short _try_ret_mousebut01 ;~ 18ED:14D1
cs=0x18ed;eip=0x0014d3; 	T(MOV(ax, input_framecount2));	// 48387 mov     ax, input_framecount2 ;~ 18ED:14D3
cs=0x18ed;eip=0x0014d6; 	T(ADD(ax, 0x14));	// 48388 add     ax, 14h ;~ 18ED:14D6
cs=0x18ed;eip=0x0014d9; 	T(CMP(ax, input_framecount));	// 48389 cmp     ax, input_framecount ;~ 18ED:14D9
cs=0x18ed;eip=0x0014dd; 	J(JL(loc_2894a));	// 48390 jl      short loc_2894A ;~ 18ED:14DD
_try_ret_mousebut01:
	// 7586 
cs=0x18ed;eip=0x0014df; 	T(CMP(mouse_butstate, 0));	// 48394 cmp     mouse_butstate, 0 ;~ 18ED:14DF
cs=0x18ed;eip=0x0014e4; 	J(JZ(_try_ret_joyinput));	// 48395 jz      short _try_ret_joyinput ;~ 18ED:14E4
cs=0x18ed;eip=0x0014e6; 	T(TEST(*(db*)(((db*)&mouse_butstate)), 1));	// 48396 test    byte ptr mouse_butstate, 1 ;~ 18ED:14E6
cs=0x18ed;eip=0x0014eb; 	J(JZ(_try_ret_mousebut2));	// 48397 jz      short _try_ret_mousebut2 ;~ 18ED:14EB
cs=0x18ed;eip=0x0014ed; 	X(OR(*(db*)(((db*)&kbjoyflags)), 0x20));	// 48398 or      byte ptr kbjoyflags, 20h ;~ 18ED:14ED
cs=0x18ed;eip=0x0014f2; 	J(JMP(_try_ret_joyinput));	// 48399 jmp     short _try_ret_joyinput ;~ 18ED:14F2
_try_ret_mousebut2:
	// 7587 
cs=0x18ed;eip=0x0014f4; 	T(TEST(*(db*)(((db*)&mouse_butstate)), 2));	// 48403 test    byte ptr mouse_butstate, 2 ;~ 18ED:14F4
cs=0x18ed;eip=0x0014f9; 	J(JZ(_try_ret_joyinput));	// 48404 jz      short _try_ret_joyinput ;~ 18ED:14F9
cs=0x18ed;eip=0x0014fb; 	X(OR(*(db*)(((db*)&kbjoyflags)), 0x10));	// 48405 or      byte ptr kbjoyflags, 10h ;~ 18ED:14FB
_try_ret_joyinput:
	// 7588 
cs=0x18ed;eip=0x001500; 	T(OR(si, si));	// 48409 or      si, si ;~ 18ED:1500
cs=0x18ed;eip=0x001502; 	J(JNZ(loc_289d9));	// 48410 jnz     short loc_289D9 ;~ 18ED:1502
cs=0x18ed;eip=0x001504; 	T(CMP(joyinputcode, 0));	// 48411 cmp     joyinputcode, 0 ;~ 18ED:1504
cs=0x18ed;eip=0x001509; 	J(JZ(_try_ret_mousebutinput));	// 48412 jz      short _try_ret_mousebutinput ;~ 18ED:1509
cs=0x18ed;eip=0x00150b; 	T(MOV(si, joyinputcode));	// 48413 mov     si, joyinputcode ;~ 18ED:150B
cs=0x18ed;eip=0x00150f; 	X(MOV(joyinputcode, 0));	// 48414 mov     joyinputcode, 0 ;~ 18ED:150F
cs=0x18ed;eip=0x001515; 	J(JMP(loc_289d9));	// 48415 jmp     short loc_289D9 ;~ 18ED:1515
_try_ret_mousebutinput:
	// 7589 
cs=0x18ed;eip=0x001518; 	T(CMP(mousebutinputcode, 0));	// 48420 cmp     mousebutinputcode, 0 ;~ 18ED:1518
cs=0x18ed;eip=0x00151d; 	J(JZ(loc_289d9));	// 48421 jz      short loc_289D9 ;~ 18ED:151D
cs=0x18ed;eip=0x00151f; 	T(MOV(si, mousebutinputcode));	// 48422 mov     si, mousebutinputcode ;~ 18ED:151F
cs=0x18ed;eip=0x001523; 	X(MOV(mousebutinputcode, 0));	// 48423 mov     mousebutinputcode, 0 ;~ 18ED:1523
loc_289d9:
	// 7590 
cs=0x18ed;eip=0x001529; 	T(MOV(ax, si));	// 48427 mov     ax, si ;~ 18ED:1529
cs=0x18ed;eip=0x00152b; 	X(POP(si));	// 48428 pop     si ;~ 18ED:152B
cs=0x18ed;eip=0x00152c; 	X(POP(di));	// 48429 pop     di ;~ 18ED:152C
cs=0x18ed;eip=0x00152d; 	T(MOV(sp, bp));	// 48430 mov     sp, bp ;~ 18ED:152D
cs=0x18ed;eip=0x00152f; 	X(POP(bp));	// 48431 pop     bp ;~ 18ED:152F
cs=0x18ed;eip=0x001530; 	J(RETF(0));	// 48432 retf ;~ 18ED:1530

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_try_ret_joyinput: 	goto _try_ret_joyinput;
        case m2c::k_try_ret_mousebut01: 	goto _try_ret_mousebut01;
        case m2c::k_try_ret_mousebut2: 	goto _try_ret_mousebut2;
        case m2c::k_try_ret_mousebutinput: 	goto _try_ret_mousebutinput;
        case m2c::kinput_checking: 	goto input_checking;
        case m2c::kloc_287ed: 	goto loc_287ed;
        case m2c::kloc_287fd: 	goto loc_287fd;
        case m2c::kloc_28815: 	goto loc_28815;
        case m2c::kloc_28823: 	goto loc_28823;
        case m2c::kloc_28834: 	goto loc_28834;
        case m2c::kloc_28844: 	goto loc_28844;
        case m2c::kloc_28854: 	goto loc_28854;
        case m2c::kloc_28864: 	goto loc_28864;
        case m2c::kloc_28874: 	goto loc_28874;
        case m2c::kloc_28881: 	goto loc_28881;
        case m2c::kloc_28896: 	goto loc_28896;
        case m2c::kloc_288a9: 	goto loc_288a9;
        case m2c::kloc_288d8: 	goto loc_288d8;
        case m2c::kloc_28901: 	goto loc_28901;
        case m2c::kloc_28908: 	goto loc_28908;
        case m2c::kloc_28934: 	goto loc_28934;
        case m2c::kloc_2894a: 	goto loc_2894a;
        case m2c::kloc_2895a: 	goto loc_2895a;
        case m2c::kloc_28967: 	goto loc_28967;
        case m2c::kloc_28974: 	goto loc_28974;
        case m2c::kloc_2897c: 	goto loc_2897c;
        case m2c::kloc_289d9: 	goto loc_289d9;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool input_do_checking(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    input_do_checking:
    _begin:
#undef arg_0
#define arg_0 6
	// 48445 arg_0           = word ptr  6 ;~ 18ED:1532
cs=0x18ed;eip=0x001532; 	X(PUSH(bp));	// 48447 push    bp ;~ 18ED:1532
cs=0x18ed;eip=0x001533; 	T(MOV(bp, sp));	// 48448 mov     bp, sp ;~ 18ED:1533
cs=0x18ed;eip=0x001535; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 48449 push    [bp+arg_0] ;~ 18ED:1535
cs=0x18ed;eip=0x001538; 	X(PUSH(cs));	// 48450 push    cs ;~ 18ED:1538
cs=0x18ed;eip=0x001539; 	J(CALL(input_checking,0));	// 48451 call    near ptr input_checking ;~ 18ED:1539
cs=0x18ed;eip=0x00153c; 	T(ADD(sp, 2));	// 48452 add     sp, 2 ;~ 18ED:153C
cs=0x18ed;eip=0x00153f; 	X(POP(bp));	// 48453 pop     bp ;~ 18ED:153F
cs=0x18ed;eip=0x001540; 	J(RETF(0));	// 48454 retf ;~ 18ED:1540

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kinput_do_checking: 	goto input_do_checking;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool file_load_resfile(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    file_load_resfile:
    _begin:
#undef var_54
#define var_54 -0x54
	// 48467 var_54          = byte ptr -54h ;~ 18ED:1542
#undef var_4
#define var_4 -4
	// 48468 var_4           = word ptr -4 ;~ 18ED:1542
#undef var_2
#define var_2 -2
	// 48469 var_2           = word ptr -2 ;~ 18ED:1542
#undef arg_0
#define arg_0 6
	// 48470 arg_0           = word ptr  6 ;~ 18ED:1542
cs=0x18ed;eip=0x001542; 	X(PUSH(bp));	// 48472 push    bp ;~ 18ED:1542
cs=0x18ed;eip=0x001543; 	T(MOV(bp, sp));	// 48473 mov     bp, sp ;~ 18ED:1543
cs=0x18ed;eip=0x001545; 	T(SUB(sp, 0x54));	// 48474 sub     sp, 54h ;~ 18ED:1545
loc_289f8:
	// 7591 
cs=0x18ed;eip=0x001548; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 48477 push    [bp+arg_0] ;~ 18ED:1548
cs=0x18ed;eip=0x00154b; 	T(ax = bp+var_54);	// 48478 lea     ax, [bp+var_54] ;~ 18ED:154B
cs=0x18ed;eip=0x00154e; 	X(PUSH(ax));	// 48479 push    ax              ; char * ;~ 18ED:154E
cs=0x18ed;eip=0x00154f; 	J(CALLF(_strcpy,0));	// 48480 call    _strcpy ;~ 18ED:154F
cs=0x18ed;eip=0x001554; 	T(ADD(sp, 4));	// 48481 add     sp, 4 ;~ 18ED:1554
cs=0x18ed;eip=0x001557; 	T(MOV(ax, offset(dseg,a_res)));	// 48482 mov     ax, offset a_res ; ".res" ;~ 18ED:1557
cs=0x18ed;eip=0x00155a; 	X(PUSH(ax));	// 48483 push    ax ;~ 18ED:155A
cs=0x18ed;eip=0x00155b; 	T(ax = bp+var_54);	// 48484 lea     ax, [bp+var_54] ;~ 18ED:155B
cs=0x18ed;eip=0x00155e; 	X(PUSH(ax));	// 48485 push    ax              ; char * ;~ 18ED:155E
cs=0x18ed;eip=0x00155f; 	J(CALLF(_strcat,0));	// 48486 call    _strcat ;~ 18ED:155F
cs=0x18ed;eip=0x001564; 	T(ADD(sp, 4));	// 48487 add     sp, 4 ;~ 18ED:1564
cs=0x18ed;eip=0x001567; 	T(ax = bp+var_54);	// 48488 lea     ax, [bp+var_54] ;~ 18ED:1567
cs=0x18ed;eip=0x00156a; 	X(PUSH(ax));	// 48489 push    ax              ; char * ;~ 18ED:156A
cs=0x18ed;eip=0x00156b; 	T(MOV(ax, 1));	// 48490 mov     ax, 1 ;~ 18ED:156B
cs=0x18ed;eip=0x00156e; 	X(PUSH(ax));	// 48491 push    ax              ; int ;~ 18ED:156E
cs=0x18ed;eip=0x00156f; 	X(PUSH(cs));	// 48492 push    cs ;~ 18ED:156F
cs=0x18ed;eip=0x001570; 	J(CALL(file_load_resource,0));	// 48493 call    near ptr file_load_resource ;~ 18ED:1570
cs=0x18ed;eip=0x001573; 	T(ADD(sp, 4));	// 48494 add     sp, 4 ;~ 18ED:1573
cs=0x18ed;eip=0x001576; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 48495 mov     [bp+var_4], ax ;~ 18ED:1576
cs=0x18ed;eip=0x001579; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 48496 mov     [bp+var_2], dx ;~ 18ED:1579
cs=0x18ed;eip=0x00157c; 	T(OR(ax, dx));	// 48497 or      ax, dx ;~ 18ED:157C
cs=0x18ed;eip=0x00157e; 	J(JNZ(loc_28a6e));	// 48498 jnz     short loc_28A6E ;~ 18ED:157E
cs=0x18ed;eip=0x001580; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 48499 push    [bp+arg_0] ;~ 18ED:1580
cs=0x18ed;eip=0x001583; 	T(ax = bp+var_54);	// 48500 lea     ax, [bp+var_54] ;~ 18ED:1583
cs=0x18ed;eip=0x001586; 	X(PUSH(ax));	// 48501 push    ax              ; char * ;~ 18ED:1586
cs=0x18ed;eip=0x001587; 	J(CALLF(_strcpy,0));	// 48502 call    _strcpy ;~ 18ED:1587
cs=0x18ed;eip=0x00158c; 	T(ADD(sp, 4));	// 48503 add     sp, 4 ;~ 18ED:158C
cs=0x18ed;eip=0x00158f; 	T(MOV(ax, offset(dseg,a_pre)));	// 48504 mov     ax, offset a_pre ; ".pre" ;~ 18ED:158F
cs=0x18ed;eip=0x001592; 	X(PUSH(ax));	// 48505 push    ax ;~ 18ED:1592
cs=0x18ed;eip=0x001593; 	T(ax = bp+var_54);	// 48506 lea     ax, [bp+var_54] ;~ 18ED:1593
cs=0x18ed;eip=0x001596; 	X(PUSH(ax));	// 48507 push    ax              ; char * ;~ 18ED:1596
cs=0x18ed;eip=0x001597; 	J(CALLF(_strcat,0));	// 48508 call    _strcat ;~ 18ED:1597
cs=0x18ed;eip=0x00159c; 	T(ADD(sp, 4));	// 48509 add     sp, 4 ;~ 18ED:159C
cs=0x18ed;eip=0x00159f; 	T(ax = bp+var_54);	// 48510 lea     ax, [bp+var_54] ;~ 18ED:159F
cs=0x18ed;eip=0x0015a2; 	X(PUSH(ax));	// 48511 push    ax              ; char * ;~ 18ED:15A2
cs=0x18ed;eip=0x0015a3; 	T(MOV(ax, 7));	// 48512 mov     ax, 7 ;~ 18ED:15A3
cs=0x18ed;eip=0x0015a6; 	X(PUSH(ax));	// 48513 push    ax              ; int ;~ 18ED:15A6
cs=0x18ed;eip=0x0015a7; 	X(PUSH(cs));	// 48514 push    cs ;~ 18ED:15A7
cs=0x18ed;eip=0x0015a8; 	J(CALL(file_load_resource,0));	// 48515 call    near ptr file_load_resource ;~ 18ED:15A8
cs=0x18ed;eip=0x0015ab; 	T(ADD(sp, 4));	// 48516 add     sp, 4 ;~ 18ED:15AB
cs=0x18ed;eip=0x0015ae; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 48517 mov     [bp+var_4], ax ;~ 18ED:15AE
cs=0x18ed;eip=0x0015b1; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 48518 mov     [bp+var_2], dx ;~ 18ED:15B1
cs=0x18ed;eip=0x0015b4; 	T(OR(ax, dx));	// 48519 or      ax, dx ;~ 18ED:15B4
cs=0x18ed;eip=0x0015b6; 	J(JNZ(loc_28a6e));	// 48520 jnz     short loc_28A6E ;~ 18ED:15B6
cs=0x18ed;eip=0x0015b8; 	X(PUSH(cs));	// 48521 push    cs ;~ 18ED:15B8
cs=0x18ed;eip=0x0015b9; 	J(CALL(do_dea_textres,0));	// 48522 call    near ptr do_dea_textres ;~ 18ED:15B9
cs=0x18ed;eip=0x0015bc; 	J(JMP(loc_289f8));	// 48523 jmp     short loc_289F8 ;~ 18ED:15BC
loc_28a6e:
	// 7592 
cs=0x18ed;eip=0x0015be; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 48528 mov     ax, [bp+var_4] ;~ 18ED:15BE
cs=0x18ed;eip=0x0015c1; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 48529 mov     dx, [bp+var_2] ;~ 18ED:15C1
cs=0x18ed;eip=0x0015c4; 	T(MOV(sp, bp));	// 48530 mov     sp, bp ;~ 18ED:15C4
cs=0x18ed;eip=0x0015c6; 	X(POP(bp));	// 48531 pop     bp ;~ 18ED:15C6
cs=0x18ed;eip=0x0015c7; 	J(RETF(0));	// 48532 retf ;~ 18ED:15C7

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kfile_load_resfile: 	goto file_load_resfile;
        case m2c::kloc_289f8: 	goto loc_289f8;
        case m2c::kloc_28a6e: 	goto loc_28a6e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool unload_resource(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    unload_resource:
    _begin:
#undef arg_0
#define arg_0 6
	// 48543 arg_0           = word ptr  6 ;~ 18ED:15C8
#undef arg_2
#define arg_2 8
	// 48544 arg_2           = word ptr  8 ;~ 18ED:15C8
cs=0x18ed;eip=0x0015c8; 	X(PUSH(bp));	// 48546 push    bp ;~ 18ED:15C8
cs=0x18ed;eip=0x0015c9; 	T(MOV(bp, sp));	// 48547 mov     bp, sp ;~ 18ED:15C9
cs=0x18ed;eip=0x0015cb; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 48548 push    [bp+arg_2] ;~ 18ED:15CB
cs=0x18ed;eip=0x0015ce; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 48549 push    [bp+arg_0] ;~ 18ED:15CE
cs=0x18ed;eip=0x0015d1; 	J(CALLF(mmgr_free,0));	// 48550 call    mmgr_free ;~ 18ED:15D1
cs=0x18ed;eip=0x0015d6; 	T(ADD(sp, 4));	// 48551 add     sp, 4 ;~ 18ED:15D6
cs=0x18ed;eip=0x0015d9; 	X(POP(bp));	// 48552 pop     bp ;~ 18ED:15D9
cs=0x18ed;eip=0x0015da; 	J(RETF(0));	// 48553 retf ;~ 18ED:15DA

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kunload_resource: 	goto unload_resource;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool locate_shape_alt(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    locate_shape_alt:
    _begin:
#undef arg_0
#define arg_0 6
	// 48566 arg_0           = word ptr  6 ;~ 18ED:15DC
#undef arg_2
#define arg_2 8
	// 48567 arg_2           = word ptr  8 ;~ 18ED:15DC
#undef arg_4
#define arg_4 0x0A
	// 48568 arg_4           = word ptr  0Ah ;~ 18ED:15DC
cs=0x18ed;eip=0x0015dc; 	X(PUSH(bp));	// 48570 push    bp ;~ 18ED:15DC
cs=0x18ed;eip=0x0015dd; 	T(MOV(bp, sp));	// 48571 mov     bp, sp ;~ 18ED:15DD
cs=0x18ed;eip=0x0015df; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 48572 push    [bp+arg_4] ;~ 18ED:15DF
cs=0x18ed;eip=0x0015e2; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 48573 push    [bp+arg_2] ;~ 18ED:15E2
cs=0x18ed;eip=0x0015e5; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 48574 push    [bp+arg_0] ;~ 18ED:15E5
cs=0x18ed;eip=0x0015e8; 	J(CALLF(locate_shape_fatal,0));	// 48575 call    locate_shape_fatal ;~ 18ED:15E8
cs=0x18ed;eip=0x0015ed; 	T(ADD(sp, 6));	// 48576 add     sp, 6 ;~ 18ED:15ED
cs=0x18ed;eip=0x0015f0; 	X(POP(bp));	// 48577 pop     bp ;~ 18ED:15F0
cs=0x18ed;eip=0x0015f1; 	J(RETF(0));	// 48578 retf ;~ 18ED:15F1

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::klocate_shape_alt: 	goto locate_shape_alt;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool locate_text_res(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    locate_text_res:
    _begin:
#undef var_4
#define var_4 -4
	// 48589 var_4           = byte ptr -4 ;~ 18ED:15F2
#undef var_3
#define var_3 -3
	// 48590 var_3           = byte ptr -3 ;~ 18ED:15F2
#undef var_2
#define var_2 -2
	// 48591 var_2           = byte ptr -2 ;~ 18ED:15F2
#undef var_1
#define var_1 -1
	// 48592 var_1           = byte ptr -1 ;~ 18ED:15F2
#undef arg_0
#define arg_0 6
	// 48593 arg_0           = word ptr  6 ;~ 18ED:15F2
#undef arg_2
#define arg_2 8
	// 48594 arg_2           = word ptr  8 ;~ 18ED:15F2
#undef arg_4
#define arg_4 0x0A
	// 48595 arg_4           = word ptr  0Ah ;~ 18ED:15F2
cs=0x18ed;eip=0x0015f2; 	X(PUSH(bp));	// 48597 push    bp ;~ 18ED:15F2
cs=0x18ed;eip=0x0015f3; 	T(MOV(bp, sp));	// 48598 mov     bp, sp ;~ 18ED:15F3
cs=0x18ed;eip=0x0015f5; 	T(SUB(sp, 4));	// 48599 sub     sp, 4 ;~ 18ED:15F5
cs=0x18ed;eip=0x0015f8; 	T(MOV(al, textresprefix));	// 48600 mov     al, textresprefix ;~ 18ED:15F8
cs=0x18ed;eip=0x0015fb; 	X(MOV(*(raddr(ss,bp+var_4)), al));	// 48601 mov     [bp+var_4], al ;~ 18ED:15FB
cs=0x18ed;eip=0x0015fe; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 48602 mov     bx, [bp+arg_4] ;~ 18ED:15FE
cs=0x18ed;eip=0x001601; 	T(MOV(al, *(raddr(ds,bx))));	// 48603 mov     al, [bx] ;~ 18ED:1601
cs=0x18ed;eip=0x001603; 	X(MOV(*(raddr(ss,bp+var_3)), al));	// 48604 mov     [bp+var_3], al ;~ 18ED:1603
cs=0x18ed;eip=0x001606; 	T(MOV(al, *(raddr(ds,bx+1))));	// 48605 mov     al, [bx+1] ;~ 18ED:1606
cs=0x18ed;eip=0x001609; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 48606 mov     [bp+var_2], al ;~ 18ED:1609
cs=0x18ed;eip=0x00160c; 	T(MOV(al, *(raddr(ds,bx+2))));	// 48607 mov     al, [bx+2] ;~ 18ED:160C
cs=0x18ed;eip=0x00160f; 	X(MOV(*(raddr(ss,bp+var_1)), al));	// 48608 mov     [bp+var_1], al ;~ 18ED:160F
cs=0x18ed;eip=0x001612; 	T(ax = bp+var_4);	// 48609 lea     ax, [bp+var_4] ;~ 18ED:1612
cs=0x18ed;eip=0x001615; 	X(PUSH(ax));	// 48610 push    ax ;~ 18ED:1615
cs=0x18ed;eip=0x001616; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 48611 push    [bp+arg_2] ;~ 18ED:1616
cs=0x18ed;eip=0x001619; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 48612 push    [bp+arg_0] ;~ 18ED:1619
cs=0x18ed;eip=0x00161c; 	J(CALLF(locate_shape_fatal,0));	// 48613 call    locate_shape_fatal ;~ 18ED:161C
cs=0x18ed;eip=0x001621; 	T(MOV(sp, bp));	// 48614 mov     sp, bp ;~ 18ED:1621
cs=0x18ed;eip=0x001623; 	X(POP(bp));	// 48615 pop     bp ;~ 18ED:1623
cs=0x18ed;eip=0x001624; 	J(RETF(0));	// 48616 retf ;~ 18ED:1624

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::klocate_text_res: 	goto locate_text_res;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool copy_string(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    copy_string:
    _begin:
#undef var_4
#define var_4 -4
	// 48629 var_4           = dword ptr -4 ;~ 18ED:1626
#undef arg_0
#define arg_0 6
	// 48630 arg_0           = word ptr  6 ;~ 18ED:1626
#undef arg_2
#define arg_2 8
	// 48631 arg_2           = word ptr  8 ;~ 18ED:1626
#undef arg_4
#define arg_4 0x0A
	// 48632 arg_4           = word ptr  0Ah ;~ 18ED:1626
cs=0x18ed;eip=0x001626; 	X(PUSH(bp));	// 48634 push    bp ;~ 18ED:1626
cs=0x18ed;eip=0x001627; 	T(MOV(bp, sp));	// 48635 mov     bp, sp ;~ 18ED:1627
cs=0x18ed;eip=0x001629; 	T(SUB(sp, 4));	// 48636 sub     sp, 4 ;~ 18ED:1629
cs=0x18ed;eip=0x00162c; 	X(PUSH(si));	// 48637 push    si ;~ 18ED:162C
cs=0x18ed;eip=0x00162d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 48638 mov     ax, [bp+arg_2] ;~ 18ED:162D
cs=0x18ed;eip=0x001630; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_4))));	// 48639 mov     dx, [bp+arg_4] ;~ 18ED:1630
cs=0x18ed;eip=0x001633; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 48640 mov     word ptr [bp+var_4], ax ;~ 18ED:1633
cs=0x18ed;eip=0x001636; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 48641 mov     word ptr [bp+var_4+2], dx ;~ 18ED:1636
loc_28ae9:
	// 7593 
cs=0x18ed;eip=0x001639; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 48644 mov     bx, [bp+arg_0] ;~ 18ED:1639
cs=0x18ed;eip=0x00163c; 	T(LES(si, *(dd*)(raddr(ss,bp+var_4))));	// 48645 les     si, [bp+var_4] ;~ 18ED:163C
cs=0x18ed;eip=0x00163f; 	T(MOV(al, *(raddr(es,si))));	// 48646 mov     al, es:[si] ;~ 18ED:163F
cs=0x18ed;eip=0x001642; 	X(MOV(*(raddr(ds,bx)), al));	// 48647 mov     [bx], al ;~ 18ED:1642
cs=0x18ed;eip=0x001644; 	X(INC(*(dw*)(raddr(ss,bp+arg_0))));	// 48648 inc     [bp+arg_0] ;~ 18ED:1644
cs=0x18ed;eip=0x001647; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 48649 inc     word ptr [bp+var_4] ;~ 18ED:1647
cs=0x18ed;eip=0x00164a; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 48650 les     bx, [bp+var_4] ;~ 18ED:164A
cs=0x18ed;eip=0x00164d; 	T(CMP(*(raddr(es,bx)), 0));	// 48651 cmp     byte ptr es:[bx], 0 ;~ 18ED:164D
cs=0x18ed;eip=0x001651; 	J(JNZ(loc_28ae9));	// 48652 jnz     short loc_28AE9 ;~ 18ED:1651
cs=0x18ed;eip=0x001653; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 48653 mov     bx, [bp+arg_0] ;~ 18ED:1653
cs=0x18ed;eip=0x001656; 	X(MOV(*(raddr(ds,bx)), 0));	// 48654 mov     byte ptr [bx], 0 ;~ 18ED:1656
cs=0x18ed;eip=0x001659; 	X(POP(si));	// 48655 pop     si ;~ 18ED:1659
cs=0x18ed;eip=0x00165a; 	T(MOV(sp, bp));	// 48656 mov     sp, bp ;~ 18ED:165A
cs=0x18ed;eip=0x00165c; 	X(POP(bp));	// 48657 pop     bp ;~ 18ED:165C
cs=0x18ed;eip=0x00165d; 	J(RETF(0));	// 48658 retf ;~ 18ED:165D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kcopy_string: 	goto copy_string;
        case m2c::kloc_28ae9: 	goto loc_28ae9;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool mouse_track_op(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mouse_track_op:
    _begin:
#undef var_16
#define var_16 -0x16
	// 48669 var_16          = word ptr -16h ;~ 18ED:165E
#undef var_14
#define var_14 -0x14
	// 48670 var_14          = word ptr -14h ;~ 18ED:165E
#undef var_12
#define var_12 -0x12
	// 48671 var_12          = word ptr -12h ;~ 18ED:165E
#undef var_e
#define var_e -0x0E
	// 48672 var_E           = word ptr -0Eh ;~ 18ED:165E
#undef var_c
#define var_c -0x0C
	// 48673 var_C           = word ptr -0Ch ;~ 18ED:165E
#undef var_a
#define var_a -0x0A
	// 48674 var_A           = word ptr -0Ah ;~ 18ED:165E
#undef var_6
#define var_6 -6
	// 48675 var_6           = word ptr -6 ;~ 18ED:165E
#undef var_4
#define var_4 -4
	// 48676 var_4           = word ptr -4 ;~ 18ED:165E
#undef var_2
#define var_2 -2
	// 48677 var_2           = word ptr -2 ;~ 18ED:165E
#undef arg_0
#define arg_0 6
	// 48678 arg_0           = word ptr  6 ;~ 18ED:165E
#undef arg_2
#define arg_2 8
	// 48679 arg_2           = word ptr  8 ;~ 18ED:165E
#undef arg_4
#define arg_4 0x0A
	// 48680 arg_4           = word ptr  0Ah ;~ 18ED:165E
#undef arg_6
#define arg_6 0x0C
	// 48681 arg_6           = word ptr  0Ch ;~ 18ED:165E
#undef arg_8
#define arg_8 0x0E
	// 48682 arg_8           = word ptr  0Eh ;~ 18ED:165E
#undef arg_a
#define arg_a 0x10
	// 48683 arg_A           = word ptr  10h ;~ 18ED:165E
#undef arg_c
#define arg_c 0x12
	// 48684 arg_C           = word ptr  12h ;~ 18ED:165E
#undef arg_e
#define arg_e 0x14
	// 48685 arg_E           = word ptr  14h ;~ 18ED:165E
cs=0x18ed;eip=0x00165e; 	X(PUSH(bp));	// 48687 push    bp ;~ 18ED:165E
cs=0x18ed;eip=0x00165f; 	T(MOV(bp, sp));	// 48688 mov     bp, sp ;~ 18ED:165F
cs=0x18ed;eip=0x001661; 	T(SUB(sp, 0x16));	// 48689 sub     sp, 16h ;~ 18ED:1661
cs=0x18ed;eip=0x001664; 	X(PUSH(di));	// 48690 push    di ;~ 18ED:1664
cs=0x18ed;eip=0x001665; 	X(PUSH(si));	// 48691 push    si ;~ 18ED:1665
cs=0x18ed;eip=0x001666; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 48692 mov     ax, [bp+arg_8] ;~ 18ED:1666
cs=0x18ed;eip=0x001669; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), ax));	// 48693 cmp     [bp+arg_4], ax ;~ 18ED:1669
cs=0x18ed;eip=0x00166c; 	J(JLE(loc_28b28));	// 48694 jle     short loc_28B28 ;~ 18ED:166C
cs=0x18ed;eip=0x00166e; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0));	// 48695 mov     [bp+var_A], 0 ;~ 18ED:166E
cs=0x18ed;eip=0x001673; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 48696 mov     ax, [bp+arg_4] ;~ 18ED:1673
cs=0x18ed;eip=0x001676; 	J(JMP(loc_28b30));	// 48697 jmp     short loc_28B30 ;~ 18ED:1676
loc_28b28:
	// 7594 
cs=0x18ed;eip=0x001678; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 1));	// 48701 mov     [bp+var_A], 1 ;~ 18ED:1678
cs=0x18ed;eip=0x00167d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 48702 mov     ax, [bp+arg_8] ;~ 18ED:167D
loc_28b30:
	// 7595 
cs=0x18ed;eip=0x001680; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 48705 mov     [bp+var_6], ax ;~ 18ED:1680
cs=0x18ed;eip=0x001683; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_e))));	// 48706 mov     ax, [bp+arg_E] ;~ 18ED:1683
cs=0x18ed;eip=0x001686; 	T(SHL(ax, 1));	// 48707 shl     ax, 1 ;~ 18ED:1686
cs=0x18ed;eip=0x001688; 	T(SHL(ax, 1));	// 48708 shl     ax, 1 ;~ 18ED:1688
cs=0x18ed;eip=0x00168a; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 48709 mov     [bp+var_14], ax ;~ 18ED:168A
cs=0x18ed;eip=0x00168d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 48710 mov     ax, [bp+var_6] ;~ 18ED:168D
cs=0x18ed;eip=0x001690; 	T(DEC(ax));	// 48711 dec     ax ;~ 18ED:1690
cs=0x18ed;eip=0x001691; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 48712 mov     [bp+var_16], ax ;~ 18ED:1691
cs=0x18ed;eip=0x001694; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_a))));	// 48713 imul    [bp+arg_A] ;~ 18ED:1694
cs=0x18ed;eip=0x001697; 	T(SHL(ax, 1));	// 48714 shl     ax, 1 ;~ 18ED:1697
cs=0x18ed;eip=0x001699; 	T(SHL(ax, 1));	// 48715 shl     ax, 1 ;~ 18ED:1699
cs=0x18ed;eip=0x00169b; 	T(CWD);	// 48716 cwd ;~ 18ED:169B
cs=0x18ed;eip=0x00169c; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_14))));	// 48717 mov     cx, [bp+var_14] ;~ 18ED:169C
cs=0x18ed;eip=0x00169f; 	T(IDIV2(cx));	// 48718 idiv    cx ;~ 18ED:169F
cs=0x18ed;eip=0x0016a1; 	T(MOV(si, ax));	// 48719 mov     si, ax ;~ 18ED:16A1
cs=0x18ed;eip=0x0016a3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 48720 mov     ax, [bp+arg_A] ;~ 18ED:16A3
cs=0x18ed;eip=0x0016a6; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_c))));	// 48721 add     ax, [bp+arg_C] ;~ 18ED:16A6
cs=0x18ed;eip=0x0016a9; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_16))));	// 48722 imul    [bp+var_16] ;~ 18ED:16A9
cs=0x18ed;eip=0x0016ac; 	T(SHL(ax, 1));	// 48723 shl     ax, 1 ;~ 18ED:16AC
cs=0x18ed;eip=0x0016ae; 	T(SHL(ax, 1));	// 48724 shl     ax, 1 ;~ 18ED:16AE
cs=0x18ed;eip=0x0016b0; 	T(CWD);	// 48725 cwd ;~ 18ED:16B0
cs=0x18ed;eip=0x0016b1; 	T(IDIV2(cx));	// 48726 idiv    cx ;~ 18ED:16B1
cs=0x18ed;eip=0x0016b3; 	T(MOV(di, ax));	// 48727 mov     di, ax ;~ 18ED:16B3
cs=0x18ed;eip=0x0016b5; 	T(SUB(ax, si));	// 48728 sub     ax, si ;~ 18ED:16B5
cs=0x18ed;eip=0x0016b7; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 48729 mov     [bp+var_12], ax ;~ 18ED:16B7
cs=0x18ed;eip=0x0016ba; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 48730 mov     ax, [bp+arg_0] ;~ 18ED:16BA
cs=0x18ed;eip=0x0016bd; 	T(OR(ax, ax));	// 48731 or      ax, ax ;~ 18ED:16BD
cs=0x18ed;eip=0x0016bf; 	J(JZ(loc_28b78));	// 48732 jz      short loc_28B78 ;~ 18ED:16BF
cs=0x18ed;eip=0x0016c1; 	T(CMP(ax, 1));	// 48733 cmp     ax, 1 ;~ 18ED:16C1
cs=0x18ed;eip=0x0016c4; 	J(JZ(loc_28bce));	// 48734 jz      short loc_28BCE ;~ 18ED:16C4
cs=0x18ed;eip=0x0016c6; 	J(JMP(loc_28bc5));	// 48735 jmp     short loc_28BC5 ;~ 18ED:16C6
loc_28b78:
	// 7596 
cs=0x18ed;eip=0x0016c8; 	T(SUB(ax, ax));	// 48739 sub     ax, ax ;~ 18ED:16C8
cs=0x18ed;eip=0x0016ca; 	X(PUSH(ax));	// 48740 push    ax ;~ 18ED:16CA
cs=0x18ed;eip=0x0016cb; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 48741 push    [bp+arg_8] ;~ 18ED:16CB
cs=0x18ed;eip=0x0016ce; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 48742 push    [bp+arg_4] ;~ 18ED:16CE
cs=0x18ed;eip=0x0016d1; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 48743 push    [bp+arg_6] ;~ 18ED:16D1
cs=0x18ed;eip=0x0016d4; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 48744 push    [bp+arg_2] ;~ 18ED:16D4
cs=0x18ed;eip=0x0016d7; 	J(CALLF(sprite_1_unk,0));	// 48745 call    sprite_1_unk ;~ 18ED:16D7
cs=0x18ed;eip=0x0016dc; 	T(ADD(sp, 0x0A));	// 48746 add     sp, 0Ah ;~ 18ED:16DC
cs=0x18ed;eip=0x0016df; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0));	// 48747 cmp     [bp+var_A], 0 ;~ 18ED:16DF
cs=0x18ed;eip=0x0016e3; 	J(JNZ(loc_28baa));	// 48748 jnz     short loc_28BAA ;~ 18ED:16E3
cs=0x18ed;eip=0x0016e5; 	X(PUSH(dialog_fnt_colour));	// 48749 push    dialog_fnt_colour ;~ 18ED:16E5
cs=0x18ed;eip=0x0016e9; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 48750 push    [bp+arg_8] ;~ 18ED:16E9
cs=0x18ed;eip=0x0016ec; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 48751 push    [bp+var_12] ;~ 18ED:16EC
cs=0x18ed;eip=0x0016ef; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 48752 push    [bp+arg_6] ;~ 18ED:16EF
cs=0x18ed;eip=0x0016f2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 48753 mov     ax, [bp+arg_2] ;~ 18ED:16F2
cs=0x18ed;eip=0x0016f5; 	T(ADD(ax, si));	// 48754 add     ax, si ;~ 18ED:16F5
cs=0x18ed;eip=0x0016f7; 	X(PUSH(ax));	// 48755 push    ax ;~ 18ED:16F7
cs=0x18ed;eip=0x0016f8; 	J(JMP(loc_28bbd));	// 48756 jmp     short loc_28BBD ;~ 18ED:16F8
loc_28baa:
	// 7597 
cs=0x18ed;eip=0x0016fa; 	X(PUSH(dialog_fnt_colour));	// 48760 push    dialog_fnt_colour ;~ 18ED:16FA
cs=0x18ed;eip=0x0016fe; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 48761 push    [bp+var_12] ;~ 18ED:16FE
cs=0x18ed;eip=0x001701; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 48762 push    [bp+arg_4] ;~ 18ED:1701
cs=0x18ed;eip=0x001704; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 48763 mov     ax, [bp+arg_6] ;~ 18ED:1704
cs=0x18ed;eip=0x001707; 	T(ADD(ax, si));	// 48764 add     ax, si ;~ 18ED:1707
cs=0x18ed;eip=0x001709; 	X(PUSH(ax));	// 48765 push    ax ;~ 18ED:1709
cs=0x18ed;eip=0x00170a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 48766 push    [bp+arg_2] ;~ 18ED:170A
loc_28bbd:
	// 7598 
cs=0x18ed;eip=0x00170d; 	J(CALLF(sprite_1_unk,0));	// 48769 call    sprite_1_unk ;~ 18ED:170D
cs=0x18ed;eip=0x001712; 	T(ADD(sp, 0x0A));	// 48770 add     sp, 0Ah ;~ 18ED:1712
loc_28bc5:
	// 7599 
cs=0x18ed;eip=0x001715; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 48774 mov     ax, [bp+arg_A] ;~ 18ED:1715
cs=0x18ed;eip=0x001718; 	X(POP(si));	// 48775 pop     si ;~ 18ED:1718
cs=0x18ed;eip=0x001719; 	X(POP(di));	// 48776 pop     di ;~ 18ED:1719
cs=0x18ed;eip=0x00171a; 	T(MOV(sp, bp));	// 48777 mov     sp, bp ;~ 18ED:171A
cs=0x18ed;eip=0x00171c; 	X(POP(bp));	// 48778 pop     bp ;~ 18ED:171C
cs=0x18ed;eip=0x00171d; 	J(RETF(0));	// 48779 retf ;~ 18ED:171D
loc_28bce:
	// 7600 
cs=0x18ed;eip=0x00171e; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0));	// 48783 cmp     [bp+var_A], 0 ;~ 18ED:171E
cs=0x18ed;eip=0x001722; 	J(JNZ(loc_28bdc));	// 48784 jnz     short loc_28BDC ;~ 18ED:1722
cs=0x18ed;eip=0x001724; 	T(MOV(ax, mouse_xpos));	// 48785 mov     ax, mouse_xpos ;~ 18ED:1724
cs=0x18ed;eip=0x001727; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 48786 sub     ax, [bp+arg_2] ;~ 18ED:1727
cs=0x18ed;eip=0x00172a; 	J(JMP(loc_28be2));	// 48787 jmp     short loc_28BE2 ;~ 18ED:172A
loc_28bdc:
	// 7601 
cs=0x18ed;eip=0x00172c; 	T(MOV(ax, mouse_ypos));	// 48791 mov     ax, mouse_ypos ;~ 18ED:172C
cs=0x18ed;eip=0x00172f; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 48792 sub     ax, [bp+arg_6] ;~ 18ED:172F
loc_28be2:
	// 7602 
cs=0x18ed;eip=0x001732; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 48795 mov     [bp+var_4], ax ;~ 18ED:1732
cs=0x18ed;eip=0x001735; 	T(CMP(ax, si));	// 48796 cmp     ax, si ;~ 18ED:1735
cs=0x18ed;eip=0x001737; 	J(JL(loc_28bed));	// 48797 jl      short loc_28BED ;~ 18ED:1737
cs=0x18ed;eip=0x001739; 	T(CMP(ax, di));	// 48798 cmp     ax, di ;~ 18ED:1739
cs=0x18ed;eip=0x00173b; 	J(JLE(loc_28c26));	// 48799 jle     short loc_28C26 ;~ 18ED:173B
loc_28bed:
	// 7603 
cs=0x18ed;eip=0x00173d; 	X(PUSH(cs));	// 48803 push    cs ;~ 18ED:173D
cs=0x18ed;eip=0x00173e; 	J(CALL(timer_get_delta_alt,0));	// 48804 call    near ptr timer_get_delta_alt ;~ 18ED:173E
cs=0x18ed;eip=0x001741; 	X(PUSH(ax));	// 48805 push    ax ;~ 18ED:1741
cs=0x18ed;eip=0x001742; 	X(PUSH(cs));	// 48806 push    cs ;~ 18ED:1742
cs=0x18ed;eip=0x001743; 	J(CALL(input_checking,0));	// 48807 call    near ptr input_checking ;~ 18ED:1743
cs=0x18ed;eip=0x001746; 	T(ADD(sp, 2));	// 48808 add     sp, 2 ;~ 18ED:1746
cs=0x18ed;eip=0x001749; 	T(TEST(*(db*)(((db*)&mouse_butstate)), 3));	// 48809 test    byte ptr mouse_butstate, 3 ;~ 18ED:1749
cs=0x18ed;eip=0x00174e; 	J(JNZ(loc_28bed));	// 48810 jnz     short loc_28BED ;~ 18ED:174E
cs=0x18ed;eip=0x001750; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), si));	// 48811 cmp     [bp+var_4], si ;~ 18ED:1750
cs=0x18ed;eip=0x001753; 	J(JGE(loc_28c14));	// 48812 jge     short loc_28C14 ;~ 18ED:1753
cs=0x18ed;eip=0x001755; 	T(CMP(*(dw*)(raddr(ss,bp+arg_a)), 0));	// 48813 cmp     [bp+arg_A], 0 ;~ 18ED:1755
cs=0x18ed;eip=0x001759; 	J(JNZ(loc_28c0e));	// 48814 jnz     short loc_28C0E ;~ 18ED:1759
cs=0x18ed;eip=0x00175b; 	J(JMP(loc_28cec));	// 48815 jmp     loc_28CEC ;~ 18ED:175B
loc_28c0e:
	// 7604 
cs=0x18ed;eip=0x00175e; 	X(DEC(*(dw*)(raddr(ss,bp+arg_a))));	// 48819 dec     [bp+arg_A] ;~ 18ED:175E
cs=0x18ed;eip=0x001761; 	J(JMP(loc_28cec));	// 48820 jmp     loc_28CEC ;~ 18ED:1761
loc_28c14:
	// 7605 
cs=0x18ed;eip=0x001764; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_e))));	// 48824 mov     ax, [bp+arg_E] ;~ 18ED:1764
cs=0x18ed;eip=0x001767; 	T(DEC(ax));	// 48825 dec     ax ;~ 18ED:1767
cs=0x18ed;eip=0x001768; 	T(CMP(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 48826 cmp     ax, [bp+arg_A] ;~ 18ED:1768
cs=0x18ed;eip=0x00176b; 	J(JG(loc_28c20));	// 48827 jg      short loc_28C20 ;~ 18ED:176B
cs=0x18ed;eip=0x00176d; 	J(JMP(loc_28cec));	// 48828 jmp     loc_28CEC ;~ 18ED:176D
loc_28c20:
	// 7606 
cs=0x18ed;eip=0x001770; 	X(INC(*(dw*)(raddr(ss,bp+arg_a))));	// 48832 inc     [bp+arg_A] ;~ 18ED:1770
cs=0x18ed;eip=0x001773; 	J(JMP(loc_28cec));	// 48833 jmp     loc_28CEC ;~ 18ED:1773
loc_28c26:
	// 7607 
cs=0x18ed;eip=0x001776; 	X(MOV(*(dw*)(raddr(ss,bp+arg_a)), 0x0FFFF));	// 48837 mov     [bp+arg_A], 0FFFFh ;~ 18ED:1776
cs=0x18ed;eip=0x00177b; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), si));	// 48838 mov     [bp+var_C], si ;~ 18ED:177B
loc_28c2e:
	// 7608 
cs=0x18ed;eip=0x00177e; 	X(PUSH(cs));	// 48841 push    cs ;~ 18ED:177E
cs=0x18ed;eip=0x00177f; 	J(CALL(timer_get_delta_alt,0));	// 48842 call    near ptr timer_get_delta_alt ;~ 18ED:177F
cs=0x18ed;eip=0x001782; 	X(PUSH(ax));	// 48843 push    ax ;~ 18ED:1782
cs=0x18ed;eip=0x001783; 	X(PUSH(cs));	// 48844 push    cs ;~ 18ED:1783
cs=0x18ed;eip=0x001784; 	J(CALL(input_checking,0));	// 48845 call    near ptr input_checking ;~ 18ED:1784
cs=0x18ed;eip=0x001787; 	T(ADD(sp, 2));	// 48846 add     sp, 2 ;~ 18ED:1787
cs=0x18ed;eip=0x00178a; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0));	// 48847 cmp     [bp+var_A], 0 ;~ 18ED:178A
cs=0x18ed;eip=0x00178e; 	J(JNZ(loc_28c48));	// 48848 jnz     short loc_28C48 ;~ 18ED:178E
cs=0x18ed;eip=0x001790; 	T(MOV(ax, mouse_xpos));	// 48849 mov     ax, mouse_xpos ;~ 18ED:1790
cs=0x18ed;eip=0x001793; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 48850 sub     ax, [bp+arg_2] ;~ 18ED:1793
cs=0x18ed;eip=0x001796; 	J(JMP(loc_28c4e));	// 48851 jmp     short loc_28C4E ;~ 18ED:1796
loc_28c48:
	// 7609 
cs=0x18ed;eip=0x001798; 	T(MOV(ax, mouse_ypos));	// 48855 mov     ax, mouse_ypos ;~ 18ED:1798
cs=0x18ed;eip=0x00179b; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 48856 sub     ax, [bp+arg_6] ;~ 18ED:179B
loc_28c4e:
	// 7610 
cs=0x18ed;eip=0x00179e; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 48859 mov     [bp+var_E], ax ;~ 18ED:179E
cs=0x18ed;eip=0x0017a1; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_4))));	// 48860 sub     ax, [bp+var_4] ;~ 18ED:17A1
cs=0x18ed;eip=0x0017a4; 	T(ADD(ax, si));	// 48861 add     ax, si ;~ 18ED:17A4
cs=0x18ed;eip=0x0017a6; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 48862 mov     [bp+var_2], ax ;~ 18ED:17A6
cs=0x18ed;eip=0x0017a9; 	T(OR(ax, ax));	// 48863 or      ax, ax ;~ 18ED:17A9
cs=0x18ed;eip=0x0017ab; 	J(JGE(loc_28c64));	// 48864 jge     short loc_28C64 ;~ 18ED:17AB
cs=0x18ed;eip=0x0017ad; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 48865 mov     [bp+var_2], 0 ;~ 18ED:17AD
cs=0x18ed;eip=0x0017b2; 	J(JMP(loc_28c7c));	// 48866 jmp     short loc_28C7C ;~ 18ED:17B2
loc_28c64:
	// 7611 
cs=0x18ed;eip=0x0017b4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 48870 mov     ax, [bp+var_2] ;~ 18ED:17B4
cs=0x18ed;eip=0x0017b7; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_12))));	// 48871 add     ax, [bp+var_12] ;~ 18ED:17B7
cs=0x18ed;eip=0x0017ba; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_6))));	// 48872 mov     cx, [bp+var_6] ;~ 18ED:17BA
cs=0x18ed;eip=0x0017bd; 	T(DEC(cx));	// 48873 dec     cx ;~ 18ED:17BD
cs=0x18ed;eip=0x0017be; 	T(CMP(ax, cx));	// 48874 cmp     ax, cx ;~ 18ED:17BE
cs=0x18ed;eip=0x0017c0; 	J(JLE(loc_28c7c));	// 48875 jle     short loc_28C7C ;~ 18ED:17C0
cs=0x18ed;eip=0x0017c2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 48876 mov     ax, [bp+var_6] ;~ 18ED:17C2
cs=0x18ed;eip=0x0017c5; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_12))));	// 48877 sub     ax, [bp+var_12] ;~ 18ED:17C5
cs=0x18ed;eip=0x0017c8; 	T(DEC(ax));	// 48878 dec     ax ;~ 18ED:17C8
cs=0x18ed;eip=0x0017c9; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 48879 mov     [bp+var_2], ax ;~ 18ED:17C9
loc_28c7c:
	// 7612 
cs=0x18ed;eip=0x0017cc; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 48883 mov     ax, [bp+var_C] ;~ 18ED:17CC
cs=0x18ed;eip=0x0017cf; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), ax));	// 48884 cmp     [bp+var_2], ax ;~ 18ED:17CF
cs=0x18ed;eip=0x0017d2; 	J(JZ(loc_28ce2));	// 48885 jz      short loc_28CE2 ;~ 18ED:17D2
cs=0x18ed;eip=0x0017d4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 48886 mov     ax, [bp+var_2] ;~ 18ED:17D4
cs=0x18ed;eip=0x0017d7; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 48887 mov     [bp+var_C], ax ;~ 18ED:17D7
cs=0x18ed;eip=0x0017da; 	X(PUSH(cs));	// 48888 push    cs ;~ 18ED:17DA
cs=0x18ed;eip=0x0017db; 	J(CALL(mouse_draw_opaque_check,0));	// 48889 call    near ptr mouse_draw_opaque_check ;~ 18ED:17DB
cs=0x18ed;eip=0x0017de; 	T(SUB(ax, ax));	// 48890 sub     ax, ax ;~ 18ED:17DE
cs=0x18ed;eip=0x0017e0; 	X(PUSH(ax));	// 48891 push    ax ;~ 18ED:17E0
cs=0x18ed;eip=0x0017e1; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 48892 push    [bp+arg_8] ;~ 18ED:17E1
cs=0x18ed;eip=0x0017e4; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 48893 push    [bp+arg_4] ;~ 18ED:17E4
cs=0x18ed;eip=0x0017e7; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 48894 push    [bp+arg_6] ;~ 18ED:17E7
cs=0x18ed;eip=0x0017ea; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 48895 push    [bp+arg_2] ;~ 18ED:17EA
cs=0x18ed;eip=0x0017ed; 	J(CALLF(sprite_1_unk,0));	// 48896 call    sprite_1_unk ;~ 18ED:17ED
cs=0x18ed;eip=0x0017f2; 	T(ADD(sp, 0x0A));	// 48897 add     sp, 0Ah ;~ 18ED:17F2
cs=0x18ed;eip=0x0017f5; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0));	// 48898 cmp     [bp+var_A], 0 ;~ 18ED:17F5
cs=0x18ed;eip=0x0017f9; 	J(JNZ(loc_28cc2));	// 48899 jnz     short loc_28CC2 ;~ 18ED:17F9
cs=0x18ed;eip=0x0017fb; 	X(PUSH(dialog_fnt_colour));	// 48900 push    dialog_fnt_colour ;~ 18ED:17FB
cs=0x18ed;eip=0x0017ff; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 48901 push    [bp+arg_8] ;~ 18ED:17FF
cs=0x18ed;eip=0x001802; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 48902 push    [bp+var_12] ;~ 18ED:1802
cs=0x18ed;eip=0x001805; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 48903 push    [bp+arg_6] ;~ 18ED:1805
cs=0x18ed;eip=0x001808; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 48904 mov     ax, [bp+arg_2] ;~ 18ED:1808
cs=0x18ed;eip=0x00180b; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_2))));	// 48905 add     ax, [bp+var_2] ;~ 18ED:180B
cs=0x18ed;eip=0x00180e; 	X(PUSH(ax));	// 48906 push    ax ;~ 18ED:180E
cs=0x18ed;eip=0x00180f; 	J(JMP(loc_28cd6));	// 48907 jmp     short loc_28CD6 ;~ 18ED:180F
loc_28cc2:
	// 7613 
cs=0x18ed;eip=0x001812; 	X(PUSH(dialog_fnt_colour));	// 48912 push    dialog_fnt_colour ;~ 18ED:1812
cs=0x18ed;eip=0x001816; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 48913 push    [bp+var_12] ;~ 18ED:1816
cs=0x18ed;eip=0x001819; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 48914 push    [bp+arg_4] ;~ 18ED:1819
cs=0x18ed;eip=0x00181c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 48915 mov     ax, [bp+arg_6] ;~ 18ED:181C
cs=0x18ed;eip=0x00181f; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_2))));	// 48916 add     ax, [bp+var_2] ;~ 18ED:181F
cs=0x18ed;eip=0x001822; 	X(PUSH(ax));	// 48917 push    ax ;~ 18ED:1822
cs=0x18ed;eip=0x001823; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 48918 push    [bp+arg_2] ;~ 18ED:1823
loc_28cd6:
	// 7614 
cs=0x18ed;eip=0x001826; 	J(CALLF(sprite_1_unk,0));	// 48921 call    sprite_1_unk ;~ 18ED:1826
cs=0x18ed;eip=0x00182b; 	T(ADD(sp, 0x0A));	// 48922 add     sp, 0Ah ;~ 18ED:182B
cs=0x18ed;eip=0x00182e; 	X(PUSH(cs));	// 48923 push    cs ;~ 18ED:182E
cs=0x18ed;eip=0x00182f; 	J(CALL(mouse_draw_transparent_check,0));	// 48924 call    near ptr mouse_draw_transparent_check ;~ 18ED:182F
loc_28ce2:
	// 7615 
cs=0x18ed;eip=0x001832; 	T(TEST(*(db*)(((db*)&mouse_butstate)), 3));	// 48927 test    byte ptr mouse_butstate, 3 ;~ 18ED:1832
cs=0x18ed;eip=0x001837; 	J(JZ(loc_28cec));	// 48928 jz      short loc_28CEC ;~ 18ED:1837
cs=0x18ed;eip=0x001839; 	J(JMP(loc_28c2e));	// 48929 jmp     loc_28C2E ;~ 18ED:1839
loc_28cec:
	// 7616 
cs=0x18ed;eip=0x00183c; 	T(CMP(*(dw*)(raddr(ss,bp+arg_a)), 0x0FFFF));	// 48934 cmp     [bp+arg_A], 0FFFFh ;~ 18ED:183C
cs=0x18ed;eip=0x001840; 	J(JNZ(loc_28d0e));	// 48935 jnz     short loc_28D0E ;~ 18ED:1840
cs=0x18ed;eip=0x001842; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 48936 mov     ax, [bp+var_6] ;~ 18ED:1842
cs=0x18ed;eip=0x001845; 	T(CWD);	// 48937 cwd ;~ 18ED:1845
cs=0x18ed;eip=0x001846; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_e))));	// 48938 mov     cx, [bp+arg_E] ;~ 18ED:1846
cs=0x18ed;eip=0x001849; 	T(IDIV2(cx));	// 48939 idiv    cx ;~ 18ED:1849
cs=0x18ed;eip=0x00184b; 	T(CWD);	// 48940 cwd ;~ 18ED:184B
cs=0x18ed;eip=0x00184c; 	T(SUB(ax, dx));	// 48941 sub     ax, dx ;~ 18ED:184C
cs=0x18ed;eip=0x00184e; 	T(SAR(ax, 1));	// 48942 sar     ax, 1 ;~ 18ED:184E
cs=0x18ed;eip=0x001850; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_2))));	// 48943 add     ax, [bp+var_2] ;~ 18ED:1850
cs=0x18ed;eip=0x001853; 	T(IMUL1_2(cx));	// 48944 imul    cx ;~ 18ED:1853
cs=0x18ed;eip=0x001855; 	T(CWD);	// 48945 cwd ;~ 18ED:1855
cs=0x18ed;eip=0x001856; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_6))));	// 48946 mov     cx, [bp+var_6] ;~ 18ED:1856
cs=0x18ed;eip=0x001859; 	T(IDIV2(cx));	// 48947 idiv    cx ;~ 18ED:1859
cs=0x18ed;eip=0x00185b; 	X(MOV(*(dw*)(raddr(ss,bp+arg_a)), ax));	// 48948 mov     [bp+arg_A], ax ;~ 18ED:185B
loc_28d0e:
	// 7617 
cs=0x18ed;eip=0x00185e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_e))));	// 48951 mov     ax, [bp+arg_E] ;~ 18ED:185E
cs=0x18ed;eip=0x001861; 	T(SHL(ax, 1));	// 48952 shl     ax, 1 ;~ 18ED:1861
cs=0x18ed;eip=0x001863; 	T(SHL(ax, 1));	// 48953 shl     ax, 1 ;~ 18ED:1863
cs=0x18ed;eip=0x001865; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 48954 mov     [bp+var_16], ax ;~ 18ED:1865
cs=0x18ed;eip=0x001868; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 48955 mov     ax, [bp+var_6] ;~ 18ED:1868
cs=0x18ed;eip=0x00186b; 	T(DEC(ax));	// 48956 dec     ax ;~ 18ED:186B
cs=0x18ed;eip=0x00186c; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 48957 mov     [bp+var_14], ax ;~ 18ED:186C
cs=0x18ed;eip=0x00186f; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_a))));	// 48958 imul    [bp+arg_A] ;~ 18ED:186F
cs=0x18ed;eip=0x001872; 	T(SHL(ax, 1));	// 48959 shl     ax, 1 ;~ 18ED:1872
cs=0x18ed;eip=0x001874; 	T(SHL(ax, 1));	// 48960 shl     ax, 1 ;~ 18ED:1874
cs=0x18ed;eip=0x001876; 	T(CWD);	// 48961 cwd ;~ 18ED:1876
cs=0x18ed;eip=0x001877; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_16))));	// 48962 mov     cx, [bp+var_16] ;~ 18ED:1877
cs=0x18ed;eip=0x00187a; 	T(IDIV2(cx));	// 48963 idiv    cx ;~ 18ED:187A
cs=0x18ed;eip=0x00187c; 	T(MOV(si, ax));	// 48964 mov     si, ax ;~ 18ED:187C
cs=0x18ed;eip=0x00187e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 48965 mov     ax, [bp+arg_A] ;~ 18ED:187E
cs=0x18ed;eip=0x001881; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_c))));	// 48966 add     ax, [bp+arg_C] ;~ 18ED:1881
cs=0x18ed;eip=0x001884; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_14))));	// 48967 imul    [bp+var_14] ;~ 18ED:1884
cs=0x18ed;eip=0x001887; 	T(SHL(ax, 1));	// 48968 shl     ax, 1 ;~ 18ED:1887
cs=0x18ed;eip=0x001889; 	T(SHL(ax, 1));	// 48969 shl     ax, 1 ;~ 18ED:1889
cs=0x18ed;eip=0x00188b; 	T(CWD);	// 48970 cwd ;~ 18ED:188B
cs=0x18ed;eip=0x00188c; 	T(IDIV2(cx));	// 48971 idiv    cx ;~ 18ED:188C
cs=0x18ed;eip=0x00188e; 	T(MOV(di, ax));	// 48972 mov     di, ax ;~ 18ED:188E
cs=0x18ed;eip=0x001890; 	T(SUB(ax, si));	// 48973 sub     ax, si ;~ 18ED:1890
cs=0x18ed;eip=0x001892; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 48974 mov     [bp+var_12], ax ;~ 18ED:1892
cs=0x18ed;eip=0x001895; 	X(PUSH(cs));	// 48975 push    cs ;~ 18ED:1895
cs=0x18ed;eip=0x001896; 	J(CALL(mouse_draw_opaque_check,0));	// 48976 call    near ptr mouse_draw_opaque_check ;~ 18ED:1896
cs=0x18ed;eip=0x001899; 	T(SUB(ax, ax));	// 48977 sub     ax, ax ;~ 18ED:1899
cs=0x18ed;eip=0x00189b; 	X(PUSH(ax));	// 48978 push    ax ;~ 18ED:189B
cs=0x18ed;eip=0x00189c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 48979 push    [bp+arg_8] ;~ 18ED:189C
cs=0x18ed;eip=0x00189f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 48980 push    [bp+arg_4] ;~ 18ED:189F
cs=0x18ed;eip=0x0018a2; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 48981 push    [bp+arg_6] ;~ 18ED:18A2
cs=0x18ed;eip=0x0018a5; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 48982 push    [bp+arg_2] ;~ 18ED:18A5
cs=0x18ed;eip=0x0018a8; 	J(CALLF(sprite_1_unk,0));	// 48983 call    sprite_1_unk ;~ 18ED:18A8
cs=0x18ed;eip=0x0018ad; 	T(ADD(sp, 0x0A));	// 48984 add     sp, 0Ah ;~ 18ED:18AD
cs=0x18ed;eip=0x0018b0; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0));	// 48985 cmp     [bp+var_A], 0 ;~ 18ED:18B0
cs=0x18ed;eip=0x0018b4; 	J(JNZ(loc_28d7c));	// 48986 jnz     short loc_28D7C ;~ 18ED:18B4
cs=0x18ed;eip=0x0018b6; 	X(PUSH(dialog_fnt_colour));	// 48987 push    dialog_fnt_colour ;~ 18ED:18B6
cs=0x18ed;eip=0x0018ba; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 48988 push    [bp+arg_8] ;~ 18ED:18BA
cs=0x18ed;eip=0x0018bd; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 48989 push    [bp+var_12] ;~ 18ED:18BD
cs=0x18ed;eip=0x0018c0; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 48990 push    [bp+arg_6] ;~ 18ED:18C0
cs=0x18ed;eip=0x0018c3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 48991 mov     ax, [bp+arg_2] ;~ 18ED:18C3
cs=0x18ed;eip=0x0018c6; 	T(ADD(ax, si));	// 48992 add     ax, si ;~ 18ED:18C6
cs=0x18ed;eip=0x0018c8; 	X(PUSH(ax));	// 48993 push    ax ;~ 18ED:18C8
cs=0x18ed;eip=0x0018c9; 	J(JMP(loc_28d8f));	// 48994 jmp     short loc_28D8F ;~ 18ED:18C9
loc_28d7c:
	// 7618 
cs=0x18ed;eip=0x0018cc; 	X(PUSH(dialog_fnt_colour));	// 48999 push    dialog_fnt_colour ;~ 18ED:18CC
cs=0x18ed;eip=0x0018d0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 49000 push    [bp+var_12] ;~ 18ED:18D0
cs=0x18ed;eip=0x0018d3; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 49001 push    [bp+arg_4] ;~ 18ED:18D3
cs=0x18ed;eip=0x0018d6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 49002 mov     ax, [bp+arg_6] ;~ 18ED:18D6
cs=0x18ed;eip=0x0018d9; 	T(ADD(ax, si));	// 49003 add     ax, si ;~ 18ED:18D9
cs=0x18ed;eip=0x0018db; 	X(PUSH(ax));	// 49004 push    ax ;~ 18ED:18DB
cs=0x18ed;eip=0x0018dc; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 49005 push    [bp+arg_2] ;~ 18ED:18DC
loc_28d8f:
	// 7619 
cs=0x18ed;eip=0x0018df; 	J(CALLF(sprite_1_unk,0));	// 49008 call    sprite_1_unk ;~ 18ED:18DF
cs=0x18ed;eip=0x0018e4; 	T(ADD(sp, 0x0A));	// 49009 add     sp, 0Ah ;~ 18ED:18E4
cs=0x18ed;eip=0x0018e7; 	X(PUSH(cs));	// 49010 push    cs ;~ 18ED:18E7
cs=0x18ed;eip=0x0018e8; 	J(CALL(mouse_draw_transparent_check,0));	// 49011 call    near ptr mouse_draw_transparent_check ;~ 18ED:18E8
cs=0x18ed;eip=0x0018eb; 	J(JMP(loc_28bc5));	// 49012 jmp     loc_28BC5 ;~ 18ED:18EB

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_28b28: 	goto loc_28b28;
        case m2c::kloc_28b30: 	goto loc_28b30;
        case m2c::kloc_28b78: 	goto loc_28b78;
        case m2c::kloc_28baa: 	goto loc_28baa;
        case m2c::kloc_28bbd: 	goto loc_28bbd;
        case m2c::kloc_28bc5: 	goto loc_28bc5;
        case m2c::kloc_28bce: 	goto loc_28bce;
        case m2c::kloc_28bdc: 	goto loc_28bdc;
        case m2c::kloc_28be2: 	goto loc_28be2;
        case m2c::kloc_28bed: 	goto loc_28bed;
        case m2c::kloc_28c0e: 	goto loc_28c0e;
        case m2c::kloc_28c14: 	goto loc_28c14;
        case m2c::kloc_28c20: 	goto loc_28c20;
        case m2c::kloc_28c26: 	goto loc_28c26;
        case m2c::kloc_28c2e: 	goto loc_28c2e;
        case m2c::kloc_28c48: 	goto loc_28c48;
        case m2c::kloc_28c4e: 	goto loc_28c4e;
        case m2c::kloc_28c64: 	goto loc_28c64;
        case m2c::kloc_28c7c: 	goto loc_28c7c;
        case m2c::kloc_28cc2: 	goto loc_28cc2;
        case m2c::kloc_28cd6: 	goto loc_28cd6;
        case m2c::kloc_28ce2: 	goto loc_28ce2;
        case m2c::kloc_28cec: 	goto loc_28cec;
        case m2c::kloc_28d0e: 	goto loc_28d0e;
        case m2c::kloc_28d7c: 	goto loc_28d7c;
        case m2c::kloc_28d8f: 	goto loc_28d8f;
        case m2c::kmouse_track_op: 	goto mouse_track_op;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool mouse_draw_transparent_check(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mouse_draw_transparent_check:
    _begin:
cs=0x18ed;eip=0x0018ee; 	X(MOV(byte_3b8f7, 1));	// 49021 mov     byte_3B8F7, 1 ;~ 18ED:18EE
cs=0x18ed;eip=0x0018f3; 	T(CMP(kbormouse, 0));	// 49022 cmp     kbormouse, 0 ;~ 18ED:18F3
cs=0x18ed;eip=0x0018f8; 	J(JZ(locret_28db5));	// 49023 jz      short locret_28DB5 ;~ 18ED:18F8
cs=0x18ed;eip=0x0018fa; 	T(CMP(mouse_isdirty, 0));	// 49024 cmp     mouse_isdirty, 0 ;~ 18ED:18FA
cs=0x18ed;eip=0x0018ff; 	J(JNZ(locret_28db5));	// 49025 jnz     short locret_28DB5 ;~ 18ED:18FF
cs=0x18ed;eip=0x001901; 	X(PUSH(cs));	// 49026 push    cs ;~ 18ED:1901
cs=0x18ed;eip=0x001902; 	J(CALL(mouse_draw_transparent,0));	// 49027 call    near ptr mouse_draw_transparent ;~ 18ED:1902
locret_28db5:
	// 7620 
cs=0x18ed;eip=0x001905; 	J(RETF(0));	// 49031 retf ;~ 18ED:1905

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::klocret_28db5: 	goto locret_28db5;
        case m2c::kmouse_draw_transparent_check: 	goto mouse_draw_transparent_check;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool mouse_draw_opaque_check(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mouse_draw_opaque_check:
    _begin:
cs=0x18ed;eip=0x001906; 	X(MOV(byte_3b8f7, 0));	// 49040 mov     byte_3B8F7, 0 ;~ 18ED:1906
cs=0x18ed;eip=0x00190b; 	T(CMP(mouse_isdirty, 0));	// 49041 cmp     mouse_isdirty, 0 ;~ 18ED:190B
cs=0x18ed;eip=0x001910; 	J(JZ(locret_28dc6));	// 49042 jz      short locret_28DC6 ;~ 18ED:1910
cs=0x18ed;eip=0x001912; 	X(PUSH(cs));	// 49043 push    cs ;~ 18ED:1912
cs=0x18ed;eip=0x001913; 	J(CALL(mouse_draw_opaque,0));	// 49044 call    near ptr mouse_draw_opaque ;~ 18ED:1913
locret_28dc6:
	// 7621 
cs=0x18ed;eip=0x001916; 	J(RETF(0));	// 49047 retf ;~ 18ED:1916

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::klocret_28dc6: 	goto locret_28dc6;
        case m2c::kmouse_draw_opaque_check: 	goto mouse_draw_opaque_check;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool mouse_draw_opaque(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mouse_draw_opaque:
    _begin:
#undef var_3c
#define var_3c -0x3C
	// 49060 var_3C          = byte ptr -3Ch ;~ 18ED:1918
cs=0x18ed;eip=0x001918; 	X(PUSH(bp));	// 49062 push    bp ;~ 18ED:1918
cs=0x18ed;eip=0x001919; 	T(MOV(bp, sp));	// 49063 mov     bp, sp ;~ 18ED:1919
cs=0x18ed;eip=0x00191b; 	T(SUB(sp, 0x3C));	// 49064 sub     sp, 3Ch ;~ 18ED:191B
cs=0x18ed;eip=0x00191e; 	T(ax = bp+var_3c);	// 49065 lea     ax, [bp+var_3C] ;~ 18ED:191E
cs=0x18ed;eip=0x001921; 	X(PUSH(ax));	// 49066 push    ax ;~ 18ED:1921
cs=0x18ed;eip=0x001922; 	J(CALLF(sprite_copy_both_to_arg,0));	// 49067 call    sprite_copy_both_to_arg ;~ 18ED:1922
cs=0x18ed;eip=0x001927; 	T(ADD(sp, 2));	// 49068 add     sp, 2 ;~ 18ED:1927
cs=0x18ed;eip=0x00192a; 	J(CALLF(sprite_copy_2_to_1,0));	// 49069 call    sprite_copy_2_to_1 ;~ 18ED:192A
cs=0x18ed;eip=0x00192f; 	T(LES(bx, mouseunkspriteptr));	// 49070 les     bx, mouseunkspriteptr ;~ 18ED:192F
cs=0x18ed;eip=0x001933; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 49071 push    word ptr es:[bx+2] ;~ 18ED:1933
cs=0x18ed;eip=0x001937; 	X(PUSH(*(dw*)(raddr(es,bx+0))));	// 49072 push    word ptr es:[bx+0] ;~ 18ED:1937
cs=0x18ed;eip=0x00193a; 	J(CALLF(sprite_putimage,0));	// 49073 call    sprite_putimage ;~ 18ED:193A
cs=0x18ed;eip=0x00193f; 	T(ADD(sp, 4));	// 49074 add     sp, 4 ;~ 18ED:193F
cs=0x18ed;eip=0x001942; 	T(ax = bp+var_3c);	// 49075 lea     ax, [bp+var_3C] ;~ 18ED:1942
cs=0x18ed;eip=0x001945; 	X(PUSH(ax));	// 49076 push    ax ;~ 18ED:1945
cs=0x18ed;eip=0x001946; 	J(CALLF(sprite_copy_arg_to_both,0));	// 49077 call    sprite_copy_arg_to_both ;~ 18ED:1946
cs=0x18ed;eip=0x00194b; 	X(MOV(mouse_isdirty, 0));	// 49078 mov     mouse_isdirty, 0 ;~ 18ED:194B
cs=0x18ed;eip=0x001950; 	T(MOV(sp, bp));	// 49079 mov     sp, bp ;~ 18ED:1950
cs=0x18ed;eip=0x001952; 	X(POP(bp));	// 49080 pop     bp ;~ 18ED:1952
cs=0x18ed;eip=0x001953; 	J(RETF(0));	// 49081 retf ;~ 18ED:1953

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kmouse_draw_opaque: 	goto mouse_draw_opaque;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool mouse_draw_transparent(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mouse_draw_transparent:
    _begin:
#undef var_3c
#define var_3c -0x3C
	// 49092 var_3C          = byte ptr -3Ch ;~ 18ED:1954
cs=0x18ed;eip=0x001954; 	X(PUSH(bp));	// 49094 push    bp ;~ 18ED:1954
cs=0x18ed;eip=0x001955; 	T(MOV(bp, sp));	// 49095 mov     bp, sp ;~ 18ED:1955
cs=0x18ed;eip=0x001957; 	T(SUB(sp, 0x3E));	// 49096 sub     sp, 3Eh ;~ 18ED:1957
cs=0x18ed;eip=0x00195a; 	X(PUSH(si));	// 49097 push    si ;~ 18ED:195A
cs=0x18ed;eip=0x00195b; 	T(MOV(si, mouse_xpos));	// 49098 mov     si, mouse_xpos ;~ 18ED:195B
cs=0x18ed;eip=0x00195f; 	T(MOV(ax, si));	// 49099 mov     ax, si ;~ 18ED:195F
cs=0x18ed;eip=0x001961; 	T(CWD);	// 49100 cwd ;~ 18ED:1961
cs=0x18ed;eip=0x001962; 	T(MOV(cx, video_flag2_is1));	// 49101 mov     cx, video_flag2_is1 ;~ 18ED:1962
cs=0x18ed;eip=0x001966; 	T(IDIV2(cx));	// 49102 idiv    cx ;~ 18ED:1966
cs=0x18ed;eip=0x001968; 	T(SUB(si, dx));	// 49103 sub     si, dx ;~ 18ED:1968
cs=0x18ed;eip=0x00196a; 	T(ax = bp+var_3c);	// 49104 lea     ax, [bp+var_3C] ;~ 18ED:196A
cs=0x18ed;eip=0x00196d; 	X(PUSH(ax));	// 49105 push    ax ;~ 18ED:196D
cs=0x18ed;eip=0x00196e; 	J(CALLF(sprite_copy_both_to_arg,0));	// 49106 call    sprite_copy_both_to_arg ;~ 18ED:196E
cs=0x18ed;eip=0x001973; 	T(ADD(sp, 2));	// 49107 add     sp, 2 ;~ 18ED:1973
cs=0x18ed;eip=0x001976; 	J(CALLF(sprite_copy_2_to_1,0));	// 49108 call    sprite_copy_2_to_1 ;~ 18ED:1976
cs=0x18ed;eip=0x00197b; 	X(PUSH(mouse_ypos));	// 49109 push    mouse_ypos ;~ 18ED:197B
cs=0x18ed;eip=0x00197f; 	X(PUSH(si));	// 49110 push    si ;~ 18ED:197F
cs=0x18ed;eip=0x001980; 	T(LES(bx, mouseunkspriteptr));	// 49111 les     bx, mouseunkspriteptr ;~ 18ED:1980
cs=0x18ed;eip=0x001984; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 49112 push    word ptr es:[bx+2] ;~ 18ED:1984
cs=0x18ed;eip=0x001988; 	X(PUSH(*(dw*)(raddr(es,bx+0))));	// 49113 push    word ptr es:[bx+0] ;~ 18ED:1988
cs=0x18ed;eip=0x00198b; 	J(CALLF(sprite_clear_shape_alt,0));	// 49114 call    sprite_clear_shape_alt ;~ 18ED:198B
cs=0x18ed;eip=0x001990; 	T(ADD(sp, 8));	// 49115 add     sp, 8 ;~ 18ED:1990
cs=0x18ed;eip=0x001993; 	X(PUSH(mouse_ypos));	// 49116 push    mouse_ypos ;~ 18ED:1993
cs=0x18ed;eip=0x001997; 	X(PUSH(mouse_xpos));	// 49117 push    mouse_xpos ;~ 18ED:1997
cs=0x18ed;eip=0x00199b; 	T(LES(bx, mmouspriteptr));	// 49118 les     bx, mmouspriteptr ;~ 18ED:199B
cs=0x18ed;eip=0x00199f; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 49119 push    word ptr es:[bx+2] ;~ 18ED:199F
cs=0x18ed;eip=0x0019a3; 	X(PUSH(*(dw*)(raddr(es,bx+0))));	// 49120 push    word ptr es:[bx+0] ;~ 18ED:19A3
cs=0x18ed;eip=0x0019a6; 	J(CALLF(sprite_putimage_and,0));	// 49121 call    sprite_putimage_and ;~ 18ED:19A6
cs=0x18ed;eip=0x0019ab; 	T(ADD(sp, 8));	// 49122 add     sp, 8 ;~ 18ED:19AB
cs=0x18ed;eip=0x0019ae; 	X(PUSH(mouse_ypos));	// 49123 push    mouse_ypos ;~ 18ED:19AE
cs=0x18ed;eip=0x0019b2; 	X(PUSH(mouse_xpos));	// 49124 push    mouse_xpos ;~ 18ED:19B2
cs=0x18ed;eip=0x0019b6; 	T(LES(bx, smouspriteptr));	// 49125 les     bx, smouspriteptr ;~ 18ED:19B6
cs=0x18ed;eip=0x0019ba; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 49126 push    word ptr es:[bx+2] ;~ 18ED:19BA
cs=0x18ed;eip=0x0019be; 	X(PUSH(*(dw*)(raddr(es,bx+0))));	// 49127 push    word ptr es:[bx+0] ;~ 18ED:19BE
cs=0x18ed;eip=0x0019c1; 	J(CALLF(sprite_putimage_or,0));	// 49128 call    sprite_putimage_or ;~ 18ED:19C1
cs=0x18ed;eip=0x0019c6; 	T(ADD(sp, 8));	// 49129 add     sp, 8 ;~ 18ED:19C6
cs=0x18ed;eip=0x0019c9; 	T(ax = bp+var_3c);	// 49130 lea     ax, [bp+var_3C] ;~ 18ED:19C9
cs=0x18ed;eip=0x0019cc; 	X(PUSH(ax));	// 49131 push    ax ;~ 18ED:19CC
cs=0x18ed;eip=0x0019cd; 	J(CALLF(sprite_copy_arg_to_both,0));	// 49132 call    sprite_copy_arg_to_both ;~ 18ED:19CD
cs=0x18ed;eip=0x0019d2; 	T(ADD(sp, 2));	// 49133 add     sp, 2 ;~ 18ED:19D2
cs=0x18ed;eip=0x0019d5; 	X(MOV(mouse_isdirty, 1));	// 49134 mov     mouse_isdirty, 1 ;~ 18ED:19D5
cs=0x18ed;eip=0x0019da; 	X(POP(si));	// 49135 pop     si ;~ 18ED:19DA
cs=0x18ed;eip=0x0019db; 	T(MOV(sp, bp));	// 49136 mov     sp, bp ;~ 18ED:19DB
cs=0x18ed;eip=0x0019dd; 	X(POP(bp));	// 49137 pop     bp ;~ 18ED:19DD
cs=0x18ed;eip=0x0019de; 	J(RETF(0));	// 49138 retf ;~ 18ED:19DE

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kmouse_draw_transparent: 	goto mouse_draw_transparent;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool mouse_multi_hittest(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mouse_multi_hittest:
    _begin:
#undef arg_0
#define arg_0 6
	// 49151 arg_0           = word ptr  6 ;~ 18ED:19E0
#undef arg_2
#define arg_2 8
	// 49152 arg_2           = word ptr  8 ;~ 18ED:19E0
#undef arg_4
#define arg_4 0x0A
	// 49153 arg_4           = word ptr  0Ah ;~ 18ED:19E0
#undef arg_6
#define arg_6 0x0C
	// 49154 arg_6           = word ptr  0Ch ;~ 18ED:19E0
#undef arg_8
#define arg_8 0x0E
	// 49155 arg_8           = word ptr  0Eh ;~ 18ED:19E0
cs=0x18ed;eip=0x0019e0; 	X(PUSH(bp));	// 49157 push    bp ;~ 18ED:19E0
cs=0x18ed;eip=0x0019e1; 	T(MOV(bp, sp));	// 49158 mov     bp, sp ;~ 18ED:19E1
cs=0x18ed;eip=0x0019e3; 	T(SUB(sp, 2));	// 49159 sub     sp, 2 ;~ 18ED:19E3
cs=0x18ed;eip=0x0019e6; 	X(PUSH(di));	// 49160 push    di ;~ 18ED:19E6
cs=0x18ed;eip=0x0019e7; 	X(PUSH(si));	// 49161 push    si ;~ 18ED:19E7
cs=0x18ed;eip=0x0019e8; 	T(CMP(kbormouse, 0));	// 49162 cmp     kbormouse, 0 ;~ 18ED:19E8
cs=0x18ed;eip=0x0019ed; 	J(JZ(loc_28eda));	// 49163 jz      short loc_28EDA ;~ 18ED:19ED
cs=0x18ed;eip=0x0019ef; 	T(SUB(si, si));	// 49164 sub     si, si ;~ 18ED:19EF
cs=0x18ed;eip=0x0019f1; 	J(JMP(loc_28ea5));	// 49165 jmp     short loc_28EA5 ;~ 18ED:19F1
loc_28ea4:
	// 7622 
cs=0x18ed;eip=0x0019f4; 	T(INC(si));	// 49171 inc     si ;~ 18ED:19F4
loc_28ea5:
	// 7623 
cs=0x18ed;eip=0x0019f5; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), si));	// 49174 cmp     [bp+arg_0], si ;~ 18ED:19F5
cs=0x18ed;eip=0x0019f8; 	J(JLE(loc_28eda));	// 49175 jle     short loc_28EDA ;~ 18ED:19F8
cs=0x18ed;eip=0x0019fa; 	T(MOV(di, si));	// 49176 mov     di, si ;~ 18ED:19FA
cs=0x18ed;eip=0x0019fc; 	T(SHL(di, 1));	// 49177 shl     di, 1 ;~ 18ED:19FC
cs=0x18ed;eip=0x0019fe; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 49178 mov     bx, [bp+arg_2] ;~ 18ED:19FE
cs=0x18ed;eip=0x001a01; 	T(MOV(ax, mouse_xpos));	// 49179 mov     ax, mouse_xpos ;~ 18ED:1A01
cs=0x18ed;eip=0x001a04; 	T(CMP(*(dw*)(raddr(ds,bx+di)), ax));	// 49180 cmp     [bx+di], ax ;~ 18ED:1A04
cs=0x18ed;eip=0x001a06; 	J(JG(loc_28ea4));	// 49181 jg      short loc_28EA4 ;~ 18ED:1A06
cs=0x18ed;eip=0x001a08; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 49182 mov     bx, [bp+arg_4] ;~ 18ED:1A08
cs=0x18ed;eip=0x001a0b; 	T(CMP(*(dw*)(raddr(ds,bx+di)), ax));	// 49183 cmp     [bx+di], ax ;~ 18ED:1A0B
cs=0x18ed;eip=0x001a0d; 	J(JL(loc_28ea4));	// 49184 jl      short loc_28EA4 ;~ 18ED:1A0D
cs=0x18ed;eip=0x001a0f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 49185 mov     bx, [bp+arg_6] ;~ 18ED:1A0F
cs=0x18ed;eip=0x001a12; 	T(MOV(ax, mouse_ypos));	// 49186 mov     ax, mouse_ypos ;~ 18ED:1A12
cs=0x18ed;eip=0x001a15; 	T(CMP(*(dw*)(raddr(ds,bx+di)), ax));	// 49187 cmp     [bx+di], ax ;~ 18ED:1A15
cs=0x18ed;eip=0x001a17; 	J(JG(loc_28ea4));	// 49188 jg      short loc_28EA4 ;~ 18ED:1A17
cs=0x18ed;eip=0x001a19; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_8))));	// 49189 mov     bx, [bp+arg_8] ;~ 18ED:1A19
cs=0x18ed;eip=0x001a1c; 	T(CMP(*(dw*)(raddr(ds,bx+di)), ax));	// 49190 cmp     [bx+di], ax ;~ 18ED:1A1C
cs=0x18ed;eip=0x001a1e; 	J(JL(loc_28ea4));	// 49191 jl      short loc_28EA4 ;~ 18ED:1A1E
cs=0x18ed;eip=0x001a20; 	T(MOV(ax, si));	// 49192 mov     ax, si ;~ 18ED:1A20
cs=0x18ed;eip=0x001a22; 	T(CBW);	// 49193 cbw ;~ 18ED:1A22
cs=0x18ed;eip=0x001a23; 	X(POP(si));	// 49194 pop     si ;~ 18ED:1A23
cs=0x18ed;eip=0x001a24; 	X(POP(di));	// 49195 pop     di ;~ 18ED:1A24
cs=0x18ed;eip=0x001a25; 	T(MOV(sp, bp));	// 49196 mov     sp, bp ;~ 18ED:1A25
cs=0x18ed;eip=0x001a27; 	X(POP(bp));	// 49197 pop     bp ;~ 18ED:1A27
cs=0x18ed;eip=0x001a28; 	J(RETF(0));	// 49198 retf ;~ 18ED:1A28
loc_28eda:
	// 7624 
cs=0x18ed;eip=0x001a2a; 	T(MOV(ax, 0x0FFFF));	// 49204 mov     ax, 0FFFFh ;~ 18ED:1A2A
cs=0x18ed;eip=0x001a2d; 	X(POP(si));	// 49205 pop     si ;~ 18ED:1A2D
cs=0x18ed;eip=0x001a2e; 	X(POP(di));	// 49206 pop     di ;~ 18ED:1A2E
cs=0x18ed;eip=0x001a2f; 	T(MOV(sp, bp));	// 49207 mov     sp, bp ;~ 18ED:1A2F
cs=0x18ed;eip=0x001a31; 	X(POP(bp));	// 49208 pop     bp ;~ 18ED:1A31
cs=0x18ed;eip=0x001a32; 	J(RETF(0));	// 49209 retf ;~ 18ED:1A32

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_28ea4: 	goto loc_28ea4;
        case m2c::kloc_28ea5: 	goto loc_28ea5;
        case m2c::kloc_28eda: 	goto loc_28eda;
        case m2c::kmouse_multi_hittest: 	goto mouse_multi_hittest;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool check_input(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    check_input:
    _begin:
#undef var_2
#define var_2 -2
	// 49222 var_2           = byte ptr -2 ;~ 18ED:1A34
cs=0x18ed;eip=0x001a34; 	X(PUSH(bp));	// 49224 push    bp ;~ 18ED:1A34
cs=0x18ed;eip=0x001a35; 	T(MOV(bp, sp));	// 49225 mov     bp, sp ;~ 18ED:1A35
cs=0x18ed;eip=0x001a37; 	T(SUB(sp, 2));	// 49226 sub     sp, 2 ;~ 18ED:1A37
loc_28eea:
	// 7625 
cs=0x18ed;eip=0x001a3a; 	J(CALLF(get_kb_or_joy_flags,0));	// 49229 call    get_kb_or_joy_flags ;~ 18ED:1A3A
cs=0x18ed;eip=0x001a3f; 	T(TEST(al, 0x30));	// 49230 test    al, 30h ;~ 18ED:1A3F
cs=0x18ed;eip=0x001a41; 	J(JZ(loc_28efa));	// 49231 jz      short loc_28EFA ;~ 18ED:1A41
loc_28ef3:
	// 7626 
cs=0x18ed;eip=0x001a43; 	X(MOV(*(raddr(ss,bp+var_2)), 1));	// 49235 mov     [bp+var_2], 1 ;~ 18ED:1A43
cs=0x18ed;eip=0x001a47; 	J(JMP(loc_28f1c));	// 49236 jmp     short loc_28F1C ;~ 18ED:1A47
loc_28efa:
	// 7627 
cs=0x18ed;eip=0x001a4a; 	X(PUSH(cs));	// 49241 push    cs ;~ 18ED:1A4A
cs=0x18ed;eip=0x001a4b; 	J(CALL(timer_get_delta_alt,0));	// 49242 call    near ptr timer_get_delta_alt ;~ 18ED:1A4B
cs=0x18ed;eip=0x001a4e; 	X(PUSH(ax));	// 49243 push    ax ;~ 18ED:1A4E
cs=0x18ed;eip=0x001a4f; 	X(PUSH(cs));	// 49244 push    cs ;~ 18ED:1A4F
cs=0x18ed;eip=0x001a50; 	J(CALL(input_checking,0));	// 49245 call    near ptr input_checking ;~ 18ED:1A50
cs=0x18ed;eip=0x001a53; 	T(ADD(sp, 2));	// 49246 add     sp, 2 ;~ 18ED:1A53
cs=0x18ed;eip=0x001a56; 	T(OR(ax, ax));	// 49247 or      ax, ax ;~ 18ED:1A56
cs=0x18ed;eip=0x001a58; 	J(JNZ(loc_28ef3));	// 49248 jnz     short loc_28EF3 ;~ 18ED:1A58
cs=0x18ed;eip=0x001a5a; 	T(CMP(kbormouse, 0));	// 49249 cmp     kbormouse, 0 ;~ 18ED:1A5A
cs=0x18ed;eip=0x001a5f; 	J(JZ(loc_28f18));	// 49250 jz      short loc_28F18 ;~ 18ED:1A5F
cs=0x18ed;eip=0x001a61; 	T(TEST(*(db*)(((db*)&mouse_butstate)), 3));	// 49251 test    byte ptr mouse_butstate, 3 ;~ 18ED:1A61
cs=0x18ed;eip=0x001a66; 	J(JNZ(loc_28ef3));	// 49252 jnz     short loc_28EF3 ;~ 18ED:1A66
loc_28f18:
	// 7628 
cs=0x18ed;eip=0x001a68; 	X(MOV(*(raddr(ss,bp+var_2)), 0));	// 49255 mov     [bp+var_2], 0 ;~ 18ED:1A68
loc_28f1c:
	// 7629 
cs=0x18ed;eip=0x001a6c; 	T(CMP(*(raddr(ss,bp+var_2)), 0));	// 49258 cmp     [bp+var_2], 0 ;~ 18ED:1A6C
cs=0x18ed;eip=0x001a70; 	J(JNZ(loc_28eea));	// 49259 jnz     short loc_28EEA ;~ 18ED:1A70
cs=0x18ed;eip=0x001a72; 	T(MOV(sp, bp));	// 49260 mov     sp, bp ;~ 18ED:1A72
cs=0x18ed;eip=0x001a74; 	X(POP(bp));	// 49261 pop     bp ;~ 18ED:1A74
cs=0x18ed;eip=0x001a75; 	J(RETF(0));	// 49262 retf ;~ 18ED:1A75

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kcheck_input: 	goto check_input;
        case m2c::kloc_28eea: 	goto loc_28eea;
        case m2c::kloc_28ef3: 	goto loc_28ef3;
        case m2c::kloc_28efa: 	goto loc_28efa;
        case m2c::kloc_28f18: 	goto loc_28f18;
        case m2c::kloc_28f1c: 	goto loc_28f1c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool nopsub_28f26(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    nopsub_28f26:
    _begin:
cs=0x18ed;eip=0x001a76; 	X(PUSH(cs));	// 49270 push    cs ;~ 18ED:1A76
cs=0x18ed;eip=0x001a77; 	J(CALL(timer_get_delta_alt,0));	// 49271 call    near ptr timer_get_delta_alt ;~ 18ED:1A77
cs=0x18ed;eip=0x001a7a; 	X(PUSH(ax));	// 49272 push    ax ;~ 18ED:1A7A
cs=0x18ed;eip=0x001a7b; 	X(PUSH(cs));	// 49273 push    cs ;~ 18ED:1A7B
cs=0x18ed;eip=0x001a7c; 	J(CALL(input_checking,0));	// 49274 call    near ptr input_checking ;~ 18ED:1A7C
cs=0x18ed;eip=0x001a7f; 	T(ADD(sp, 2));	// 49275 add     sp, 2 ;~ 18ED:1A7F
cs=0x18ed;eip=0x001a82; 	T(OR(ax, ax));	// 49276 or      ax, ax ;~ 18ED:1A82
cs=0x18ed;eip=0x001a84; 	J(JZ(nopsub_28f26));	// 49277 jz      short near ptr nopsub_28F26 ;~ 18ED:1A84
cs=0x18ed;eip=0x001a86; 	X(PUSH(cs));	// 49278 push    cs ;~ 18ED:1A86
cs=0x18ed;eip=0x001a87; 	J(CALL(check_input,0));	// 49279 call    near ptr check_input ;~ 18ED:1A87
cs=0x18ed;eip=0x001a8a; 	J(RETF(0));	// 49280 retf ;~ 18ED:1A8A

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::knopsub_28f26: 	goto nopsub_28f26;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sprite_copy_2_to_1_2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sprite_copy_2_to_1_2:
    _begin:
cs=0x18ed;eip=0x001a8c; 	T(MOV(ax, offset(seg012,sprite2)));	// 49291 mov     ax, offset sprite2 ;~ 18ED:1A8C
cs=0x18ed;eip=0x001a8f; 	T(MOV(dx, seg_offset(seg012)));	// 49292 mov     dx, seg seg012 ;~ 18ED:1A8F
cs=0x18ed;eip=0x001a92; 	X(PUSH(dx));	// 49293 push    dx ;~ 18ED:1A92
cs=0x18ed;eip=0x001a93; 	X(PUSH(ax));	// 49294 push    ax ;~ 18ED:1A93
cs=0x18ed;eip=0x001a94; 	J(CALLF(sprite_set_1_from_argptr,0));	// 49295 call    sprite_set_1_from_argptr ;~ 18ED:1A94
cs=0x18ed;eip=0x001a99; 	T(ADD(sp, 4));	// 49296 add     sp, 4 ;~ 18ED:1A99
cs=0x18ed;eip=0x001a9c; 	J(RETF(0));	// 49297 retf ;~ 18ED:1A9C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksprite_copy_2_to_1_2: 	goto sprite_copy_2_to_1_2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sprite_copy_2_to_1_clear(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sprite_copy_2_to_1_clear:
    _begin:
cs=0x18ed;eip=0x001a9e; 	T(MOV(ax, offset(seg012,sprite2)));	// 49308 mov     ax, offset sprite2 ;~ 18ED:1A9E
cs=0x18ed;eip=0x001aa1; 	T(MOV(dx, seg_offset(seg012)));	// 49309 mov     dx, seg seg012 ;~ 18ED:1AA1
cs=0x18ed;eip=0x001aa4; 	X(PUSH(dx));	// 49310 push    dx ;~ 18ED:1AA4
cs=0x18ed;eip=0x001aa5; 	X(PUSH(ax));	// 49311 push    ax ;~ 18ED:1AA5
cs=0x18ed;eip=0x001aa6; 	J(CALLF(sprite_set_1_from_argptr,0));	// 49312 call    sprite_set_1_from_argptr ;~ 18ED:1AA6
cs=0x18ed;eip=0x001aab; 	T(ADD(sp, 4));	// 49313 add     sp, 4 ;~ 18ED:1AAB
cs=0x18ed;eip=0x001aae; 	T(SUB(ax, ax));	// 49314 sub     ax, ax ;~ 18ED:1AAE
cs=0x18ed;eip=0x001ab0; 	X(PUSH(ax));	// 49315 push    ax ;~ 18ED:1AB0
cs=0x18ed;eip=0x001ab1; 	J(CALLF(sprite_clear_1_color,0));	// 49316 call    sprite_clear_1_color ;~ 18ED:1AB1
cs=0x18ed;eip=0x001ab6; 	T(ADD(sp, 2));	// 49317 add     sp, 2 ;~ 18ED:1AB6
cs=0x18ed;eip=0x001ab9; 	J(RETF(0));	// 49318 retf ;~ 18ED:1AB9

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksprite_copy_2_to_1_clear: 	goto sprite_copy_2_to_1_clear;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sprite_copy_wnd_to_1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sprite_copy_wnd_to_1:
    _begin:
cs=0x18ed;eip=0x001aba; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 49327 push    word ptr wndsprite+2 ;~ 18ED:1ABA
cs=0x18ed;eip=0x001abe; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 49328 push    word ptr wndsprite ;~ 18ED:1ABE
cs=0x18ed;eip=0x001ac2; 	J(CALLF(sprite_set_1_from_argptr,0));	// 49329 call    sprite_set_1_from_argptr ;~ 18ED:1AC2
cs=0x18ed;eip=0x001ac7; 	T(ADD(sp, 4));	// 49330 add     sp, 4 ;~ 18ED:1AC7
cs=0x18ed;eip=0x001aca; 	J(RETF(0));	// 49331 retf ;~ 18ED:1ACA

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksprite_copy_wnd_to_1: 	goto sprite_copy_wnd_to_1;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sprite_copy_wnd_to_1_clear(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sprite_copy_wnd_to_1_clear:
    _begin:
cs=0x18ed;eip=0x001acc; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 49342 push    word ptr wndsprite+2 ;~ 18ED:1ACC
cs=0x18ed;eip=0x001ad0; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 49343 push    word ptr wndsprite ;~ 18ED:1AD0
cs=0x18ed;eip=0x001ad4; 	J(CALLF(sprite_set_1_from_argptr,0));	// 49344 call    sprite_set_1_from_argptr ;~ 18ED:1AD4
cs=0x18ed;eip=0x001ad9; 	T(ADD(sp, 4));	// 49345 add     sp, 4 ;~ 18ED:1AD9
cs=0x18ed;eip=0x001adc; 	T(SUB(ax, ax));	// 49346 sub     ax, ax ;~ 18ED:1ADC
cs=0x18ed;eip=0x001ade; 	X(PUSH(ax));	// 49347 push    ax ;~ 18ED:1ADE
cs=0x18ed;eip=0x001adf; 	J(CALLF(sprite_clear_1_color,0));	// 49348 call    sprite_clear_1_color ;~ 18ED:1ADF
cs=0x18ed;eip=0x001ae4; 	T(ADD(sp, 2));	// 49349 add     sp, 2 ;~ 18ED:1AE4
cs=0x18ed;eip=0x001ae7; 	J(RETF(0));	// 49350 retf ;~ 18ED:1AE7

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksprite_copy_wnd_to_1_clear: 	goto sprite_copy_wnd_to_1_clear;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool intro_draw_text(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    intro_draw_text:
    _begin:
#undef arg_0
#define arg_0 6
	// 49361 arg_0           = word ptr  6 ;~ 18ED:1AE8
#undef arg_2
#define arg_2 8
	// 49362 arg_2           = word ptr  8 ;~ 18ED:1AE8
#undef arg_4
#define arg_4 0x0A
	// 49363 arg_4           = word ptr  0Ah ;~ 18ED:1AE8
#undef arg_6
#define arg_6 0x0C
	// 49364 arg_6           = word ptr  0Ch ;~ 18ED:1AE8
#undef arg_8
#define arg_8 0x0E
	// 49365 arg_8           = word ptr  0Eh ;~ 18ED:1AE8
cs=0x18ed;eip=0x001ae8; 	X(PUSH(bp));	// 49367 push    bp ;~ 18ED:1AE8
cs=0x18ed;eip=0x001ae9; 	T(MOV(bp, sp));	// 49368 mov     bp, sp ;~ 18ED:1AE9
cs=0x18ed;eip=0x001aeb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 49369 mov     ax, [bp+arg_4] ;~ 18ED:1AEB
cs=0x18ed;eip=0x001aee; 	X(MOV(word_4224c, ax));	// 49370 mov     word_4224C, ax ;~ 18ED:1AEE
cs=0x18ed;eip=0x001af1; 	T(ADD(ax, fontdef_unk_0e));	// 49371 add     ax, fontdef_unk_0E ;~ 18ED:1AF1
cs=0x18ed;eip=0x001af5; 	T(INC(ax));	// 49372 inc     ax ;~ 18ED:1AF5
cs=0x18ed;eip=0x001af6; 	X(MOV(word_4224e, ax));	// 49373 mov     word_4224E, ax ;~ 18ED:1AF6
cs=0x18ed;eip=0x001af9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 49374 mov     ax, [bp+arg_2] ;~ 18ED:1AF9
cs=0x18ed;eip=0x001afc; 	X(MOV(word_42248, ax));	// 49375 mov     word_42248, ax ;~ 18ED:1AFC
cs=0x18ed;eip=0x001aff; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 49376 push    [bp+arg_0] ;~ 18ED:1AFF
cs=0x18ed;eip=0x001b02; 	J(CALLF(font_op2,0));	// 49377 call    font_op2 ;~ 18ED:1B02
cs=0x18ed;eip=0x001b07; 	T(ADD(sp, 2));	// 49378 add     sp, 2 ;~ 18ED:1B07
cs=0x18ed;eip=0x001b0a; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 49379 add     ax, [bp+arg_2] ;~ 18ED:1B0A
cs=0x18ed;eip=0x001b0d; 	T(INC(ax));	// 49380 inc     ax ;~ 18ED:1B0D
cs=0x18ed;eip=0x001b0e; 	X(MOV(word_4224a, ax));	// 49381 mov     word_4224A, ax ;~ 18ED:1B0E
cs=0x18ed;eip=0x001b11; 	T(SUB(ax, ax));	// 49382 sub     ax, ax ;~ 18ED:1B11
cs=0x18ed;eip=0x001b13; 	X(PUSH(ax));	// 49383 push    ax ;~ 18ED:1B13
cs=0x18ed;eip=0x001b14; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 49384 push    [bp+arg_8] ;~ 18ED:1B14
cs=0x18ed;eip=0x001b17; 	J(CALLF(font_set_unk,0));	// 49385 call    font_set_unk ;~ 18ED:1B17
cs=0x18ed;eip=0x001b1c; 	T(ADD(sp, 4));	// 49386 add     sp, 4 ;~ 18ED:1B1C
cs=0x18ed;eip=0x001b1f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 49387 mov     ax, [bp+arg_4] ;~ 18ED:1B1F
cs=0x18ed;eip=0x001b22; 	T(INC(ax));	// 49388 inc     ax ;~ 18ED:1B22
cs=0x18ed;eip=0x001b23; 	X(PUSH(ax));	// 49389 push    ax ;~ 18ED:1B23
cs=0x18ed;eip=0x001b24; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 49390 mov     ax, [bp+arg_2] ;~ 18ED:1B24
cs=0x18ed;eip=0x001b27; 	T(INC(ax));	// 49391 inc     ax ;~ 18ED:1B27
cs=0x18ed;eip=0x001b28; 	X(PUSH(ax));	// 49392 push    ax ;~ 18ED:1B28
cs=0x18ed;eip=0x001b29; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 49393 push    [bp+arg_0] ;~ 18ED:1B29
cs=0x18ed;eip=0x001b2c; 	J(CALLF(font_draw_text,0));	// 49394 call    font_draw_text ;~ 18ED:1B2C
cs=0x18ed;eip=0x001b31; 	T(ADD(sp, 6));	// 49395 add     sp, 6 ;~ 18ED:1B31
cs=0x18ed;eip=0x001b34; 	T(SUB(ax, ax));	// 49396 sub     ax, ax ;~ 18ED:1B34
cs=0x18ed;eip=0x001b36; 	X(PUSH(ax));	// 49397 push    ax ;~ 18ED:1B36
cs=0x18ed;eip=0x001b37; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 49398 push    [bp+arg_6] ;~ 18ED:1B37
cs=0x18ed;eip=0x001b3a; 	J(CALLF(font_set_unk,0));	// 49399 call    font_set_unk ;~ 18ED:1B3A
cs=0x18ed;eip=0x001b3f; 	T(ADD(sp, 4));	// 49400 add     sp, 4 ;~ 18ED:1B3F
cs=0x18ed;eip=0x001b42; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 49401 push    [bp+arg_4] ;~ 18ED:1B42
cs=0x18ed;eip=0x001b45; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 49402 push    [bp+arg_2] ;~ 18ED:1B45
cs=0x18ed;eip=0x001b48; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 49403 push    [bp+arg_0] ;~ 18ED:1B48
cs=0x18ed;eip=0x001b4b; 	J(CALLF(font_draw_text,0));	// 49404 call    font_draw_text ;~ 18ED:1B4B
cs=0x18ed;eip=0x001b50; 	T(ADD(sp, 6));	// 49405 add     sp, 6 ;~ 18ED:1B50
cs=0x18ed;eip=0x001b53; 	T(MOV(ax, offset(dseg,word_42248)));	// 49406 mov     ax, offset word_42248 ;~ 18ED:1B53
cs=0x18ed;eip=0x001b56; 	X(POP(bp));	// 49407 pop     bp ;~ 18ED:1B56
cs=0x18ed;eip=0x001b57; 	J(RETF(0));	// 49408 retf ;~ 18ED:1B57

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kintro_draw_text: 	goto intro_draw_text;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool hiscore_draw_text(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    hiscore_draw_text:
    _begin:
#undef arg_0
#define arg_0 6
	// 49419 arg_0           = word ptr  6 ;~ 18ED:1B58
#undef arg_2
#define arg_2 8
	// 49420 arg_2           = word ptr  8 ;~ 18ED:1B58
#undef arg_4
#define arg_4 0x0A
	// 49421 arg_4           = word ptr  0Ah ;~ 18ED:1B58
#undef arg_6
#define arg_6 0x0C
	// 49422 arg_6           = word ptr  0Ch ;~ 18ED:1B58
#undef arg_8
#define arg_8 0x0E
	// 49423 arg_8           = word ptr  0Eh ;~ 18ED:1B58
cs=0x18ed;eip=0x001b58; 	X(PUSH(bp));	// 49425 push    bp ;~ 18ED:1B58
cs=0x18ed;eip=0x001b59; 	T(MOV(bp, sp));	// 49426 mov     bp, sp ;~ 18ED:1B59
cs=0x18ed;eip=0x001b5b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 49427 mov     ax, [bp+arg_4] ;~ 18ED:1B5B
cs=0x18ed;eip=0x001b5e; 	T(DEC(ax));	// 49428 dec     ax ;~ 18ED:1B5E
cs=0x18ed;eip=0x001b5f; 	X(MOV(word_42254, ax));	// 49429 mov     word_42254, ax ;~ 18ED:1B5F
cs=0x18ed;eip=0x001b62; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 49430 mov     ax, [bp+arg_4] ;~ 18ED:1B62
cs=0x18ed;eip=0x001b65; 	T(ADD(ax, fontdef_unk_0e));	// 49431 add     ax, fontdef_unk_0E ;~ 18ED:1B65
cs=0x18ed;eip=0x001b69; 	T(INC(ax));	// 49432 inc     ax ;~ 18ED:1B69
cs=0x18ed;eip=0x001b6a; 	X(MOV(word_42256, ax));	// 49433 mov     word_42256, ax ;~ 18ED:1B6A
cs=0x18ed;eip=0x001b6d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 49434 mov     ax, [bp+arg_2] ;~ 18ED:1B6D
cs=0x18ed;eip=0x001b70; 	T(DEC(ax));	// 49435 dec     ax ;~ 18ED:1B70
cs=0x18ed;eip=0x001b71; 	X(MOV(word_42250, ax));	// 49436 mov     word_42250, ax ;~ 18ED:1B71
cs=0x18ed;eip=0x001b74; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 49437 push    [bp+arg_0] ;~ 18ED:1B74
cs=0x18ed;eip=0x001b77; 	J(CALLF(font_op2,0));	// 49438 call    font_op2 ;~ 18ED:1B77
cs=0x18ed;eip=0x001b7c; 	T(ADD(sp, 2));	// 49439 add     sp, 2 ;~ 18ED:1B7C
cs=0x18ed;eip=0x001b7f; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 49440 add     ax, [bp+arg_2] ;~ 18ED:1B7F
cs=0x18ed;eip=0x001b82; 	T(INC(ax));	// 49441 inc     ax ;~ 18ED:1B82
cs=0x18ed;eip=0x001b83; 	X(MOV(word_42252, ax));	// 49442 mov     word_42252, ax ;~ 18ED:1B83
cs=0x18ed;eip=0x001b86; 	T(SUB(ax, ax));	// 49443 sub     ax, ax ;~ 18ED:1B86
cs=0x18ed;eip=0x001b88; 	X(PUSH(ax));	// 49444 push    ax ;~ 18ED:1B88
cs=0x18ed;eip=0x001b89; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 49445 push    [bp+arg_8] ;~ 18ED:1B89
cs=0x18ed;eip=0x001b8c; 	J(CALLF(font_set_unk,0));	// 49446 call    font_set_unk ;~ 18ED:1B8C
cs=0x18ed;eip=0x001b91; 	T(ADD(sp, 4));	// 49447 add     sp, 4 ;~ 18ED:1B91
cs=0x18ed;eip=0x001b94; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 49448 mov     ax, [bp+arg_4] ;~ 18ED:1B94
cs=0x18ed;eip=0x001b97; 	T(INC(ax));	// 49449 inc     ax ;~ 18ED:1B97
cs=0x18ed;eip=0x001b98; 	X(PUSH(ax));	// 49450 push    ax ;~ 18ED:1B98
cs=0x18ed;eip=0x001b99; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 49451 mov     ax, [bp+arg_2] ;~ 18ED:1B99
cs=0x18ed;eip=0x001b9c; 	T(INC(ax));	// 49452 inc     ax ;~ 18ED:1B9C
cs=0x18ed;eip=0x001b9d; 	X(PUSH(ax));	// 49453 push    ax ;~ 18ED:1B9D
cs=0x18ed;eip=0x001b9e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 49454 push    [bp+arg_0] ;~ 18ED:1B9E
cs=0x18ed;eip=0x001ba1; 	J(CALLF(font_draw_text,0));	// 49455 call    font_draw_text ;~ 18ED:1BA1
cs=0x18ed;eip=0x001ba6; 	T(ADD(sp, 6));	// 49456 add     sp, 6 ;~ 18ED:1BA6
cs=0x18ed;eip=0x001ba9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 49457 mov     ax, [bp+arg_4] ;~ 18ED:1BA9
cs=0x18ed;eip=0x001bac; 	T(INC(ax));	// 49458 inc     ax ;~ 18ED:1BAC
cs=0x18ed;eip=0x001bad; 	X(PUSH(ax));	// 49459 push    ax ;~ 18ED:1BAD
cs=0x18ed;eip=0x001bae; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 49460 mov     ax, [bp+arg_2] ;~ 18ED:1BAE
cs=0x18ed;eip=0x001bb1; 	T(DEC(ax));	// 49461 dec     ax ;~ 18ED:1BB1
cs=0x18ed;eip=0x001bb2; 	X(PUSH(ax));	// 49462 push    ax ;~ 18ED:1BB2
cs=0x18ed;eip=0x001bb3; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 49463 push    [bp+arg_0] ;~ 18ED:1BB3
cs=0x18ed;eip=0x001bb6; 	J(CALLF(font_draw_text,0));	// 49464 call    font_draw_text ;~ 18ED:1BB6
cs=0x18ed;eip=0x001bbb; 	T(ADD(sp, 6));	// 49465 add     sp, 6 ;~ 18ED:1BBB
cs=0x18ed;eip=0x001bbe; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 49466 mov     ax, [bp+arg_4] ;~ 18ED:1BBE
cs=0x18ed;eip=0x001bc1; 	T(DEC(ax));	// 49467 dec     ax ;~ 18ED:1BC1
cs=0x18ed;eip=0x001bc2; 	X(PUSH(ax));	// 49468 push    ax ;~ 18ED:1BC2
cs=0x18ed;eip=0x001bc3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 49469 mov     ax, [bp+arg_2] ;~ 18ED:1BC3
cs=0x18ed;eip=0x001bc6; 	T(INC(ax));	// 49470 inc     ax ;~ 18ED:1BC6
cs=0x18ed;eip=0x001bc7; 	X(PUSH(ax));	// 49471 push    ax ;~ 18ED:1BC7
cs=0x18ed;eip=0x001bc8; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 49472 push    [bp+arg_0] ;~ 18ED:1BC8
cs=0x18ed;eip=0x001bcb; 	J(CALLF(font_draw_text,0));	// 49473 call    font_draw_text ;~ 18ED:1BCB
cs=0x18ed;eip=0x001bd0; 	T(ADD(sp, 6));	// 49474 add     sp, 6 ;~ 18ED:1BD0
cs=0x18ed;eip=0x001bd3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 49475 mov     ax, [bp+arg_4] ;~ 18ED:1BD3
cs=0x18ed;eip=0x001bd6; 	T(DEC(ax));	// 49476 dec     ax ;~ 18ED:1BD6
cs=0x18ed;eip=0x001bd7; 	X(PUSH(ax));	// 49477 push    ax ;~ 18ED:1BD7
cs=0x18ed;eip=0x001bd8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 49478 mov     ax, [bp+arg_2] ;~ 18ED:1BD8
cs=0x18ed;eip=0x001bdb; 	T(DEC(ax));	// 49479 dec     ax ;~ 18ED:1BDB
cs=0x18ed;eip=0x001bdc; 	X(PUSH(ax));	// 49480 push    ax ;~ 18ED:1BDC
cs=0x18ed;eip=0x001bdd; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 49481 push    [bp+arg_0] ;~ 18ED:1BDD
cs=0x18ed;eip=0x001be0; 	J(CALLF(font_draw_text,0));	// 49482 call    font_draw_text ;~ 18ED:1BE0
cs=0x18ed;eip=0x001be5; 	T(ADD(sp, 6));	// 49483 add     sp, 6 ;~ 18ED:1BE5
cs=0x18ed;eip=0x001be8; 	T(SUB(ax, ax));	// 49484 sub     ax, ax ;~ 18ED:1BE8
cs=0x18ed;eip=0x001bea; 	X(PUSH(ax));	// 49485 push    ax ;~ 18ED:1BEA
cs=0x18ed;eip=0x001beb; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 49486 push    [bp+arg_6] ;~ 18ED:1BEB
cs=0x18ed;eip=0x001bee; 	J(CALLF(font_set_unk,0));	// 49487 call    font_set_unk ;~ 18ED:1BEE
cs=0x18ed;eip=0x001bf3; 	T(ADD(sp, 4));	// 49488 add     sp, 4 ;~ 18ED:1BF3
cs=0x18ed;eip=0x001bf6; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 49489 push    [bp+arg_4] ;~ 18ED:1BF6
cs=0x18ed;eip=0x001bf9; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 49490 push    [bp+arg_2] ;~ 18ED:1BF9
cs=0x18ed;eip=0x001bfc; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 49491 push    [bp+arg_0] ;~ 18ED:1BFC
cs=0x18ed;eip=0x001bff; 	J(CALLF(font_draw_text,0));	// 49492 call    font_draw_text ;~ 18ED:1BFF
cs=0x18ed;eip=0x001c04; 	T(ADD(sp, 6));	// 49493 add     sp, 6 ;~ 18ED:1C04
cs=0x18ed;eip=0x001c07; 	T(MOV(ax, offset(dseg,word_42250)));	// 49494 mov     ax, offset word_42250 ;~ 18ED:1C07
cs=0x18ed;eip=0x001c0a; 	X(POP(bp));	// 49495 pop     bp ;~ 18ED:1C0A
cs=0x18ed;eip=0x001c0b; 	J(RETF(0));	// 49496 retf ;~ 18ED:1C0B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::khiscore_draw_text: 	goto hiscore_draw_text;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool call_read_line(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    call_read_line:
    _begin:
#undef var_4
#define var_4 -4
	// 49508 var_4           = word ptr -4 ;~ 18ED:1C0C
#undef var_2
#define var_2 -2
	// 49509 var_2           = word ptr -2 ;~ 18ED:1C0C
#undef arg_0
#define arg_0 6
	// 49510 arg_0           = dword ptr  6 ;~ 18ED:1C0C
#undef arg_4
#define arg_4 0x0A
	// 49511 arg_4           = word ptr  0Ah ;~ 18ED:1C0C
#undef arg_6
#define arg_6 0x0C
	// 49512 arg_6           = dword ptr  0Ch ;~ 18ED:1C0C
#undef arg_a
#define arg_a 0x10
	// 49513 arg_A           = dword ptr  10h ;~ 18ED:1C0C
cs=0x18ed;eip=0x001c0c; 	X(PUSH(bp));	// 49515 push    bp              ; int ;~ 18ED:1C0C
cs=0x18ed;eip=0x001c0d; 	T(MOV(bp, sp));	// 49516 mov     bp, sp ;~ 18ED:1C0D
cs=0x18ed;eip=0x001c0f; 	T(SUB(sp, 4));	// 49517 sub     sp, 4 ;~ 18ED:1C0F
cs=0x18ed;eip=0x001c12; 	X(PUSH(si));	// 49518 push    si ;~ 18ED:1C12
cs=0x18ed;eip=0x001c13; 	X(PUSH(cs));	// 49519 push    cs ;~ 18ED:1C13
cs=0x18ed;eip=0x001c14; 	J(CALL(mouse_draw_opaque_check,0));	// 49520 call    near ptr mouse_draw_opaque_check ;~ 18ED:1C14
cs=0x18ed;eip=0x001c17; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_a)))));	// 49521 push    word ptr [bp+arg_A] ; int ;~ 18ED:1C17
cs=0x18ed;eip=0x001c1a; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_6+2)))));	// 49522 push    word ptr [bp+arg_6+2] ; int ;~ 18ED:1C1A
cs=0x18ed;eip=0x001c1d; 	T(MOV(ax, 2));	// 49523 mov     ax, 2 ;~ 18ED:1C1D
cs=0x18ed;eip=0x001c20; 	T(MOV(dx, seg_offset(seg018)));	// 49524 mov     dx, seg seg018 ;~ 18ED:1C20
cs=0x18ed;eip=0x001c23; 	X(PUSH(dx));	// 49525 push    dx              ; int ;~ 18ED:1C23
cs=0x18ed;eip=0x001c24; 	X(PUSH(ax));	// 49526 push    ax              ; __int32 ;~ 18ED:1C24
cs=0x18ed;eip=0x001c25; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_6)))));	// 49527 push    word ptr [bp+arg_6] ; int ;~ 18ED:1C25
cs=0x18ed;eip=0x001c28; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 49528 push    [bp+arg_4]      ; int ;~ 18ED:1C28
cs=0x18ed;eip=0x001c2b; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 49529 mov     ax, word ptr [bp+arg_0+2] ;~ 18ED:1C2B
cs=0x18ed;eip=0x001c2e; 	T(MOV(cx, ax));	// 49530 mov     cx, ax ;~ 18ED:1C2E
cs=0x18ed;eip=0x001c30; 	T(SHL(ax, 1));	// 49531 shl     ax, 1 ;~ 18ED:1C30
cs=0x18ed;eip=0x001c32; 	T(SHL(ax, 1));	// 49532 shl     ax, 1 ;~ 18ED:1C32
cs=0x18ed;eip=0x001c34; 	T(SHL(ax, 1));	// 49533 shl     ax, 1 ;~ 18ED:1C34
cs=0x18ed;eip=0x001c36; 	T(ADD(ax, cx));	// 49534 add     ax, cx ;~ 18ED:1C36
cs=0x18ed;eip=0x001c38; 	T(ADD(ax, 9));	// 49535 add     ax, 9 ;~ 18ED:1C38
cs=0x18ed;eip=0x001c3b; 	X(PUSH(ax));	// 49536 push    ax              ; int ;~ 18ED:1C3B
cs=0x18ed;eip=0x001c3c; 	X(PUSH(cx));	// 49537 push    cx              ; int ;~ 18ED:1C3C
cs=0x18ed;eip=0x001c3d; 	T(SUB(ax, ax));	// 49538 sub     ax, ax ;~ 18ED:1C3D
cs=0x18ed;eip=0x001c3f; 	X(PUSH(ax));	// 49539 push    ax              ; char * ;~ 18ED:1C3F
cs=0x18ed;eip=0x001c40; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 49540 push    word ptr [bp+arg_0] ; char * ;~ 18ED:1C40
cs=0x18ed;eip=0x001c43; 	T(MOV(ax, 2));	// 49541 mov     ax, 2 ;~ 18ED:1C43
cs=0x18ed;eip=0x001c46; 	X(PUSH(ax));	// 49542 push    ax              ; char ;~ 18ED:1C46
cs=0x18ed;eip=0x001c47; 	J(CALLF(read_line,0));	// 49543 call    read_line ;~ 18ED:1C47
cs=0x18ed;eip=0x001c4c; 	T(ADD(sp, 0x16));	// 49544 add     sp, 16h ;~ 18ED:1C4C
cs=0x18ed;eip=0x001c4f; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 49545 mov     [bp+var_4], ax ;~ 18ED:1C4F
cs=0x18ed;eip=0x001c52; 	X(PUSH(cs));	// 49546 push    cs ;~ 18ED:1C52
cs=0x18ed;eip=0x001c53; 	J(CALL(mouse_draw_transparent_check,0));	// 49547 call    near ptr mouse_draw_transparent_check ;~ 18ED:1C53
cs=0x18ed;eip=0x001c56; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 49548 push    word ptr [bp+arg_0] ; char * ;~ 18ED:1C56
cs=0x18ed;eip=0x001c59; 	J(CALLF(_strlen,0));	// 49549 call    _strlen ;~ 18ED:1C59
cs=0x18ed;eip=0x001c5e; 	T(ADD(sp, 2));	// 49550 add     sp, 2 ;~ 18ED:1C5E
cs=0x18ed;eip=0x001c61; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+arg_0+2))), ax));	// 49551 mov     word ptr [bp+arg_0+2], ax ;~ 18ED:1C61
cs=0x18ed;eip=0x001c64; 	T(DEC(ax));	// 49552 dec     ax ;~ 18ED:1C64
cs=0x18ed;eip=0x001c65; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 49553 mov     [bp+var_2], ax ;~ 18ED:1C65
cs=0x18ed;eip=0x001c68; 	J(JMP(loc_2911d));	// 49554 jmp     short loc_2911D ;~ 18ED:1C68
loc_2911a:
	// 7630 
cs=0x18ed;eip=0x001c6a; 	X(DEC(*(dw*)(raddr(ss,bp+var_2))));	// 49558 dec     [bp+var_2] ;~ 18ED:1C6A
loc_2911d:
	// 7631 
cs=0x18ed;eip=0x001c6d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 49561 mov     bx, [bp+var_2] ;~ 18ED:1C6D
cs=0x18ed;eip=0x001c70; 	T(MOV(si, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 49562 mov     si, word ptr [bp+arg_0] ;~ 18ED:1C70
cs=0x18ed;eip=0x001c73; 	T(CMP(*(raddr(ds,bx+si)), 0x20));	// 49563 cmp     byte ptr [bx+si], 20h ; ' ' ;~ 18ED:1C73
cs=0x18ed;eip=0x001c76; 	J(JZ(loc_2911a));	// 49564 jz      short loc_2911A ;~ 18ED:1C76
cs=0x18ed;eip=0x001c78; 	T(MOV(si, bx));	// 49565 mov     si, bx ;~ 18ED:1C78
cs=0x18ed;eip=0x001c7a; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 49566 mov     bx, word ptr [bp+arg_0] ;~ 18ED:1C7A
cs=0x18ed;eip=0x001c7d; 	X(MOV(*(raddr(ds,bx+si+1)), 0));	// 49567 mov     byte ptr [bx+si+1], 0 ;~ 18ED:1C7D
cs=0x18ed;eip=0x001c81; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 49568 mov     ax, [bp+var_4] ;~ 18ED:1C81
cs=0x18ed;eip=0x001c84; 	X(POP(si));	// 49569 pop     si ;~ 18ED:1C84
cs=0x18ed;eip=0x001c85; 	T(MOV(sp, bp));	// 49570 mov     sp, bp ;~ 18ED:1C85
cs=0x18ed;eip=0x001c87; 	X(POP(bp));	// 49571 pop     bp ;~ 18ED:1C87
cs=0x18ed;eip=0x001c88; 	J(RETF(0));	// 49572 retf ;~ 18ED:1C88

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kcall_read_line: 	goto call_read_line;
        case m2c::kloc_2911a: 	goto loc_2911a;
        case m2c::kloc_2911d: 	goto loc_2911d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool input_repeat_check(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    input_repeat_check:
    _begin:
#undef var_4
#define var_4 -4
	// 49585 var_4           = word ptr -4 ;~ 18ED:1C8A
#undef arg_0
#define arg_0 6
	// 49586 arg_0           = word ptr  6 ;~ 18ED:1C8A
cs=0x18ed;eip=0x001c8a; 	X(PUSH(bp));	// 49588 push    bp ;~ 18ED:1C8A
cs=0x18ed;eip=0x001c8b; 	T(MOV(bp, sp));	// 49589 mov     bp, sp ;~ 18ED:1C8B
cs=0x18ed;eip=0x001c8d; 	T(SUB(sp, 6));	// 49590 sub     sp, 6 ;~ 18ED:1C8D
cs=0x18ed;eip=0x001c90; 	X(PUSH(di));	// 49591 push    di ;~ 18ED:1C90
cs=0x18ed;eip=0x001c91; 	X(PUSH(si));	// 49592 push    si ;~ 18ED:1C91
cs=0x18ed;eip=0x001c92; 	T(SUB(di, di));	// 49593 sub     di, di ;~ 18ED:1C92
cs=0x18ed;eip=0x001c94; 	X(PUSH(cs));	// 49594 push    cs ;~ 18ED:1C94
cs=0x18ed;eip=0x001c95; 	J(CALL(timer_get_delta_alt,0));	// 49595 call    near ptr timer_get_delta_alt ;~ 18ED:1C95
cs=0x18ed;eip=0x001c98; 	J(JMP(loc_29161));	// 49596 jmp     short loc_29161 ;~ 18ED:1C98
loc_2914a:
	// 7632 
cs=0x18ed;eip=0x001c9a; 	X(PUSH(cs));	// 49600 push    cs ;~ 18ED:1C9A
cs=0x18ed;eip=0x001c9b; 	J(CALL(timer_get_delta_alt,0));	// 49601 call    near ptr timer_get_delta_alt ;~ 18ED:1C9B
cs=0x18ed;eip=0x001c9e; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 49602 mov     [bp+var_4], ax ;~ 18ED:1C9E
cs=0x18ed;eip=0x001ca1; 	T(ADD(di, ax));	// 49603 add     di, ax ;~ 18ED:1CA1
cs=0x18ed;eip=0x001ca3; 	X(PUSH(ax));	// 49604 push    ax ;~ 18ED:1CA3
cs=0x18ed;eip=0x001ca4; 	X(PUSH(cs));	// 49605 push    cs ;~ 18ED:1CA4
cs=0x18ed;eip=0x001ca5; 	J(CALL(input_do_checking,0));	// 49606 call    near ptr input_do_checking ;~ 18ED:1CA5
cs=0x18ed;eip=0x001ca8; 	T(ADD(sp, 2));	// 49607 add     sp, 2 ;~ 18ED:1CA8
cs=0x18ed;eip=0x001cab; 	T(MOV(si, ax));	// 49608 mov     si, ax ;~ 18ED:1CAB
cs=0x18ed;eip=0x001cad; 	T(OR(si, si));	// 49609 or      si, si ;~ 18ED:1CAD
cs=0x18ed;eip=0x001caf; 	J(JNZ(loc_29168));	// 49610 jnz     short loc_29168 ;~ 18ED:1CAF
loc_29161:
	// 7633 
cs=0x18ed;eip=0x001cb1; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), di));	// 49613 cmp     [bp+arg_0], di ;~ 18ED:1CB1
cs=0x18ed;eip=0x001cb4; 	J(JG(loc_2914a));	// 49614 jg      short loc_2914A ;~ 18ED:1CB4
cs=0x18ed;eip=0x001cb6; 	T(SUB(ax, ax));	// 49615 sub     ax, ax ;~ 18ED:1CB6
loc_29168:
	// 7634 
cs=0x18ed;eip=0x001cb8; 	X(POP(si));	// 49618 pop     si ;~ 18ED:1CB8
cs=0x18ed;eip=0x001cb9; 	X(POP(di));	// 49619 pop     di ;~ 18ED:1CB9
cs=0x18ed;eip=0x001cba; 	T(MOV(sp, bp));	// 49620 mov     sp, bp ;~ 18ED:1CBA
cs=0x18ed;eip=0x001cbc; 	X(POP(bp));	// 49621 pop     bp ;~ 18ED:1CBC
cs=0x18ed;eip=0x001cbd; 	J(RETF(0));	// 49622 retf ;~ 18ED:1CBD

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kinput_repeat_check: 	goto input_repeat_check;
        case m2c::kloc_2914a: 	goto loc_2914a;
        case m2c::kloc_29161: 	goto loc_29161;
        case m2c::kloc_29168: 	goto loc_29168;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool draw_lines_unk(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    draw_lines_unk:
    _begin:
#undef var_14
#define var_14 -0x14
	// 49633 var_14          = word ptr -14h ;~ 18ED:1CBE
#undef var_12
#define var_12 -0x12
	// 49634 var_12          = word ptr -12h ;~ 18ED:1CBE
#undef var_10
#define var_10 -0x10
	// 49635 var_10          = word ptr -10h ;~ 18ED:1CBE
#undef var_e
#define var_e -0x0E
	// 49636 var_E           = word ptr -0Eh ;~ 18ED:1CBE
#undef var_c
#define var_c -0x0C
	// 49637 var_C           = word ptr -0Ch ;~ 18ED:1CBE
#undef var_a
#define var_a -0x0A
	// 49638 var_A           = word ptr -0Ah ;~ 18ED:1CBE
#undef var_8
#define var_8 -8
	// 49639 var_8           = word ptr -8 ;~ 18ED:1CBE
#undef var_6
#define var_6 -6
	// 49640 var_6           = word ptr -6 ;~ 18ED:1CBE
#undef arg_0
#define arg_0 6
	// 49641 arg_0           = word ptr  6 ;~ 18ED:1CBE
#undef arg_2
#define arg_2 8
	// 49642 arg_2           = word ptr  8 ;~ 18ED:1CBE
#undef arg_4
#define arg_4 0x0A
	// 49643 arg_4           = word ptr  0Ah ;~ 18ED:1CBE
#undef arg_6
#define arg_6 0x0C
	// 49644 arg_6           = word ptr  0Ch ;~ 18ED:1CBE
#undef arg_8
#define arg_8 0x0E
	// 49645 arg_8           = word ptr  0Eh ;~ 18ED:1CBE
#undef arg_a
#define arg_a 0x10
	// 49646 arg_A           = word ptr  10h ;~ 18ED:1CBE
#undef arg_c
#define arg_c 0x12
	// 49647 arg_C           = word ptr  12h ;~ 18ED:1CBE
cs=0x18ed;eip=0x001cbe; 	X(PUSH(bp));	// 49649 push    bp ;~ 18ED:1CBE
cs=0x18ed;eip=0x001cbf; 	T(MOV(bp, sp));	// 49650 mov     bp, sp ;~ 18ED:1CBF
cs=0x18ed;eip=0x001cc1; 	T(SUB(sp, 0x14));	// 49651 sub     sp, 14h ;~ 18ED:1CC1
cs=0x18ed;eip=0x001cc4; 	X(PUSH(di));	// 49652 push    di ;~ 18ED:1CC4
cs=0x18ed;eip=0x001cc5; 	X(PUSH(si));	// 49653 push    si ;~ 18ED:1CC5
cs=0x18ed;eip=0x001cc6; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 49654 mov     si, [bp+arg_0] ;~ 18ED:1CC6
cs=0x18ed;eip=0x001cc9; 	T(ADD(si, *(dw*)(raddr(ss,bp+arg_4))));	// 49655 add     si, [bp+arg_4] ;~ 18ED:1CC9
cs=0x18ed;eip=0x001ccc; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_2))));	// 49656 mov     di, [bp+arg_2] ;~ 18ED:1CCC
cs=0x18ed;eip=0x001ccf; 	T(ADD(di, *(dw*)(raddr(ss,bp+arg_6))));	// 49657 add     di, [bp+arg_6] ;~ 18ED:1CCF
cs=0x18ed;eip=0x001cd2; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 49658 push    [bp+arg_8] ;~ 18ED:1CD2
cs=0x18ed;eip=0x001cd5; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 49659 push    [bp+arg_2] ;~ 18ED:1CD5
cs=0x18ed;eip=0x001cd8; 	X(PUSH(si));	// 49660 push    si ;~ 18ED:1CD8
cs=0x18ed;eip=0x001cd9; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 49661 push    [bp+arg_2] ;~ 18ED:1CD9
cs=0x18ed;eip=0x001cdc; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 49662 push    [bp+arg_0] ;~ 18ED:1CDC
cs=0x18ed;eip=0x001cdf; 	J(CALLF(prerender_line,0));	// 49663 call    preRender_line ;~ 18ED:1CDF
cs=0x18ed;eip=0x001ce4; 	T(ADD(sp, 0x0A));	// 49664 add     sp, 0Ah ;~ 18ED:1CE4
cs=0x18ed;eip=0x001ce7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 49665 mov     ax, [bp+arg_2] ;~ 18ED:1CE7
cs=0x18ed;eip=0x001cea; 	T(INC(ax));	// 49666 inc     ax ;~ 18ED:1CEA
cs=0x18ed;eip=0x001ceb; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 49667 mov     [bp+var_6], ax ;~ 18ED:1CEB
cs=0x18ed;eip=0x001cee; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 49668 push    [bp+arg_8] ;~ 18ED:1CEE
cs=0x18ed;eip=0x001cf1; 	X(PUSH(ax));	// 49669 push    ax ;~ 18ED:1CF1
cs=0x18ed;eip=0x001cf2; 	T(ax = si-1);	// 49670 lea     ax, [si-1] ;~ 18ED:1CF2
cs=0x18ed;eip=0x001cf5; 	X(PUSH(ax));	// 49671 push    ax ;~ 18ED:1CF5
cs=0x18ed;eip=0x001cf6; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 49672 push    [bp+var_6] ;~ 18ED:1CF6
cs=0x18ed;eip=0x001cf9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 49673 mov     ax, [bp+arg_0] ;~ 18ED:1CF9
cs=0x18ed;eip=0x001cfc; 	T(INC(ax));	// 49674 inc     ax ;~ 18ED:1CFC
cs=0x18ed;eip=0x001cfd; 	X(PUSH(ax));	// 49675 push    ax ;~ 18ED:1CFD
cs=0x18ed;eip=0x001cfe; 	J(CALLF(prerender_line,0));	// 49676 call    preRender_line ;~ 18ED:1CFE
cs=0x18ed;eip=0x001d03; 	T(ADD(sp, 0x0A));	// 49677 add     sp, 0Ah ;~ 18ED:1D03
cs=0x18ed;eip=0x001d06; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 49678 mov     ax, [bp+arg_2] ;~ 18ED:1D06
cs=0x18ed;eip=0x001d09; 	T(ADD(ax, 2));	// 49679 add     ax, 2 ;~ 18ED:1D09
cs=0x18ed;eip=0x001d0c; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 49680 mov     [bp+var_8], ax ;~ 18ED:1D0C
cs=0x18ed;eip=0x001d0f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 49681 push    [bp+arg_A] ;~ 18ED:1D0F
cs=0x18ed;eip=0x001d12; 	X(PUSH(ax));	// 49682 push    ax ;~ 18ED:1D12
cs=0x18ed;eip=0x001d13; 	T(ax = si-2);	// 49683 lea     ax, [si-2] ;~ 18ED:1D13
cs=0x18ed;eip=0x001d16; 	X(PUSH(ax));	// 49684 push    ax ;~ 18ED:1D16
cs=0x18ed;eip=0x001d17; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 49685 push    [bp+var_8] ;~ 18ED:1D17
cs=0x18ed;eip=0x001d1a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 49686 mov     ax, [bp+arg_0] ;~ 18ED:1D1A
cs=0x18ed;eip=0x001d1d; 	T(ADD(ax, 2));	// 49687 add     ax, 2 ;~ 18ED:1D1D
cs=0x18ed;eip=0x001d20; 	X(PUSH(ax));	// 49688 push    ax ;~ 18ED:1D20
cs=0x18ed;eip=0x001d21; 	J(CALLF(prerender_line,0));	// 49689 call    preRender_line ;~ 18ED:1D21
cs=0x18ed;eip=0x001d26; 	T(ADD(sp, 0x0A));	// 49690 add     sp, 0Ah ;~ 18ED:1D26
cs=0x18ed;eip=0x001d29; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 49691 push    [bp+arg_8] ;~ 18ED:1D29
cs=0x18ed;eip=0x001d2c; 	X(PUSH(di));	// 49692 push    di ;~ 18ED:1D2C
cs=0x18ed;eip=0x001d2d; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 49693 push    [bp+arg_0] ;~ 18ED:1D2D
cs=0x18ed;eip=0x001d30; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 49694 push    [bp+arg_2] ;~ 18ED:1D30
cs=0x18ed;eip=0x001d33; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 49695 push    [bp+arg_0] ;~ 18ED:1D33
cs=0x18ed;eip=0x001d36; 	J(CALLF(prerender_line,0));	// 49696 call    preRender_line ;~ 18ED:1D36
cs=0x18ed;eip=0x001d3b; 	T(ADD(sp, 0x0A));	// 49697 add     sp, 0Ah ;~ 18ED:1D3B
cs=0x18ed;eip=0x001d3e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 49698 mov     ax, [bp+arg_0] ;~ 18ED:1D3E
cs=0x18ed;eip=0x001d41; 	T(INC(ax));	// 49699 inc     ax ;~ 18ED:1D41
cs=0x18ed;eip=0x001d42; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 49700 mov     [bp+var_A], ax ;~ 18ED:1D42
cs=0x18ed;eip=0x001d45; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 49701 push    [bp+arg_8] ;~ 18ED:1D45
cs=0x18ed;eip=0x001d48; 	T(ax = di-1);	// 49702 lea     ax, [di-1] ;~ 18ED:1D48
cs=0x18ed;eip=0x001d4b; 	X(PUSH(ax));	// 49703 push    ax ;~ 18ED:1D4B
cs=0x18ed;eip=0x001d4c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 49704 push    [bp+var_A] ;~ 18ED:1D4C
cs=0x18ed;eip=0x001d4f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 49705 mov     ax, [bp+arg_2] ;~ 18ED:1D4F
cs=0x18ed;eip=0x001d52; 	T(INC(ax));	// 49706 inc     ax ;~ 18ED:1D52
cs=0x18ed;eip=0x001d53; 	X(PUSH(ax));	// 49707 push    ax ;~ 18ED:1D53
cs=0x18ed;eip=0x001d54; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 49708 push    [bp+var_A] ;~ 18ED:1D54
cs=0x18ed;eip=0x001d57; 	J(CALLF(prerender_line,0));	// 49709 call    preRender_line ;~ 18ED:1D57
cs=0x18ed;eip=0x001d5c; 	T(ADD(sp, 0x0A));	// 49710 add     sp, 0Ah ;~ 18ED:1D5C
cs=0x18ed;eip=0x001d5f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 49711 mov     ax, [bp+arg_0] ;~ 18ED:1D5F
cs=0x18ed;eip=0x001d62; 	T(ADD(ax, 2));	// 49712 add     ax, 2 ;~ 18ED:1D62
cs=0x18ed;eip=0x001d65; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 49713 mov     [bp+var_C], ax ;~ 18ED:1D65
cs=0x18ed;eip=0x001d68; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 49714 push    [bp+arg_A] ;~ 18ED:1D68
cs=0x18ed;eip=0x001d6b; 	T(ax = di-2);	// 49715 lea     ax, [di-2] ;~ 18ED:1D6B
cs=0x18ed;eip=0x001d6e; 	X(PUSH(ax));	// 49716 push    ax ;~ 18ED:1D6E
cs=0x18ed;eip=0x001d6f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 49717 push    [bp+var_C] ;~ 18ED:1D6F
cs=0x18ed;eip=0x001d72; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 49718 mov     ax, [bp+arg_2] ;~ 18ED:1D72
cs=0x18ed;eip=0x001d75; 	T(ADD(ax, 2));	// 49719 add     ax, 2 ;~ 18ED:1D75
cs=0x18ed;eip=0x001d78; 	X(PUSH(ax));	// 49720 push    ax ;~ 18ED:1D78
cs=0x18ed;eip=0x001d79; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 49721 push    [bp+var_C] ;~ 18ED:1D79
cs=0x18ed;eip=0x001d7c; 	J(CALLF(prerender_line,0));	// 49722 call    preRender_line ;~ 18ED:1D7C
cs=0x18ed;eip=0x001d81; 	T(ADD(sp, 0x0A));	// 49723 add     sp, 0Ah ;~ 18ED:1D81
cs=0x18ed;eip=0x001d84; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 49724 push    [bp+arg_C] ;~ 18ED:1D84
cs=0x18ed;eip=0x001d87; 	X(PUSH(di));	// 49725 push    di ;~ 18ED:1D87
cs=0x18ed;eip=0x001d88; 	X(PUSH(si));	// 49726 push    si ;~ 18ED:1D88
cs=0x18ed;eip=0x001d89; 	X(PUSH(di));	// 49727 push    di ;~ 18ED:1D89
cs=0x18ed;eip=0x001d8a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 49728 push    [bp+arg_0] ;~ 18ED:1D8A
cs=0x18ed;eip=0x001d8d; 	J(CALLF(prerender_line,0));	// 49729 call    preRender_line ;~ 18ED:1D8D
cs=0x18ed;eip=0x001d92; 	T(ADD(sp, 0x0A));	// 49730 add     sp, 0Ah ;~ 18ED:1D92
cs=0x18ed;eip=0x001d95; 	T(ax = di-1);	// 49731 lea     ax, [di-1] ;~ 18ED:1D95
cs=0x18ed;eip=0x001d98; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 49732 mov     [bp+var_E], ax ;~ 18ED:1D98
cs=0x18ed;eip=0x001d9b; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 49733 push    [bp+arg_C] ;~ 18ED:1D9B
cs=0x18ed;eip=0x001d9e; 	X(PUSH(ax));	// 49734 push    ax ;~ 18ED:1D9E
cs=0x18ed;eip=0x001d9f; 	T(ax = si-1);	// 49735 lea     ax, [si-1] ;~ 18ED:1D9F
cs=0x18ed;eip=0x001da2; 	X(PUSH(ax));	// 49736 push    ax ;~ 18ED:1DA2
cs=0x18ed;eip=0x001da3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_e))));	// 49737 push    [bp+var_E] ;~ 18ED:1DA3
cs=0x18ed;eip=0x001da6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 49738 mov     ax, [bp+arg_0] ;~ 18ED:1DA6
cs=0x18ed;eip=0x001da9; 	T(INC(ax));	// 49739 inc     ax ;~ 18ED:1DA9
cs=0x18ed;eip=0x001daa; 	X(PUSH(ax));	// 49740 push    ax ;~ 18ED:1DAA
cs=0x18ed;eip=0x001dab; 	J(CALLF(prerender_line,0));	// 49741 call    preRender_line ;~ 18ED:1DAB
cs=0x18ed;eip=0x001db0; 	T(ADD(sp, 0x0A));	// 49742 add     sp, 0Ah ;~ 18ED:1DB0
cs=0x18ed;eip=0x001db3; 	T(ax = di-2);	// 49743 lea     ax, [di-2] ;~ 18ED:1DB3
cs=0x18ed;eip=0x001db6; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 49744 mov     [bp+var_10], ax ;~ 18ED:1DB6
cs=0x18ed;eip=0x001db9; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 49745 push    [bp+arg_A] ;~ 18ED:1DB9
cs=0x18ed;eip=0x001dbc; 	X(PUSH(ax));	// 49746 push    ax ;~ 18ED:1DBC
cs=0x18ed;eip=0x001dbd; 	T(ax = si-2);	// 49747 lea     ax, [si-2] ;~ 18ED:1DBD
cs=0x18ed;eip=0x001dc0; 	X(PUSH(ax));	// 49748 push    ax ;~ 18ED:1DC0
cs=0x18ed;eip=0x001dc1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_10))));	// 49749 push    [bp+var_10] ;~ 18ED:1DC1
cs=0x18ed;eip=0x001dc4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 49750 mov     ax, [bp+arg_0] ;~ 18ED:1DC4
cs=0x18ed;eip=0x001dc7; 	T(ADD(ax, 2));	// 49751 add     ax, 2 ;~ 18ED:1DC7
cs=0x18ed;eip=0x001dca; 	X(PUSH(ax));	// 49752 push    ax ;~ 18ED:1DCA
cs=0x18ed;eip=0x001dcb; 	J(CALLF(prerender_line,0));	// 49753 call    preRender_line ;~ 18ED:1DCB
cs=0x18ed;eip=0x001dd0; 	T(ADD(sp, 0x0A));	// 49754 add     sp, 0Ah ;~ 18ED:1DD0
cs=0x18ed;eip=0x001dd3; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 49755 push    [bp+arg_C] ;~ 18ED:1DD3
cs=0x18ed;eip=0x001dd6; 	X(PUSH(di));	// 49756 push    di ;~ 18ED:1DD6
cs=0x18ed;eip=0x001dd7; 	X(PUSH(si));	// 49757 push    si ;~ 18ED:1DD7
cs=0x18ed;eip=0x001dd8; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 49758 push    [bp+arg_2] ;~ 18ED:1DD8
cs=0x18ed;eip=0x001ddb; 	X(PUSH(si));	// 49759 push    si ;~ 18ED:1DDB
cs=0x18ed;eip=0x001ddc; 	J(CALLF(prerender_line,0));	// 49760 call    preRender_line ;~ 18ED:1DDC
cs=0x18ed;eip=0x001de1; 	T(ADD(sp, 0x0A));	// 49761 add     sp, 0Ah ;~ 18ED:1DE1
cs=0x18ed;eip=0x001de4; 	T(ax = si-1);	// 49762 lea     ax, [si-1] ;~ 18ED:1DE4
cs=0x18ed;eip=0x001de7; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 49763 mov     [bp+var_12], ax ;~ 18ED:1DE7
cs=0x18ed;eip=0x001dea; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 49764 push    [bp+arg_C] ;~ 18ED:1DEA
cs=0x18ed;eip=0x001ded; 	T(ax = di-1);	// 49765 lea     ax, [di-1] ;~ 18ED:1DED
cs=0x18ed;eip=0x001df0; 	X(PUSH(ax));	// 49766 push    ax ;~ 18ED:1DF0
cs=0x18ed;eip=0x001df1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 49767 push    [bp+var_12] ;~ 18ED:1DF1
cs=0x18ed;eip=0x001df4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 49768 mov     ax, [bp+arg_2] ;~ 18ED:1DF4
cs=0x18ed;eip=0x001df7; 	T(INC(ax));	// 49769 inc     ax ;~ 18ED:1DF7
cs=0x18ed;eip=0x001df8; 	X(PUSH(ax));	// 49770 push    ax ;~ 18ED:1DF8
cs=0x18ed;eip=0x001df9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 49771 push    [bp+var_12] ;~ 18ED:1DF9
cs=0x18ed;eip=0x001dfc; 	J(CALLF(prerender_line,0));	// 49772 call    preRender_line ;~ 18ED:1DFC
cs=0x18ed;eip=0x001e01; 	T(ADD(sp, 0x0A));	// 49773 add     sp, 0Ah ;~ 18ED:1E01
cs=0x18ed;eip=0x001e04; 	T(ax = si-2);	// 49774 lea     ax, [si-2] ;~ 18ED:1E04
cs=0x18ed;eip=0x001e07; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 49775 mov     [bp+var_14], ax ;~ 18ED:1E07
cs=0x18ed;eip=0x001e0a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 49776 push    [bp+arg_A] ;~ 18ED:1E0A
cs=0x18ed;eip=0x001e0d; 	T(ax = di-2);	// 49777 lea     ax, [di-2] ;~ 18ED:1E0D
cs=0x18ed;eip=0x001e10; 	X(PUSH(ax));	// 49778 push    ax ;~ 18ED:1E10
cs=0x18ed;eip=0x001e11; 	X(PUSH(*(dw*)(raddr(ss,bp+var_14))));	// 49779 push    [bp+var_14] ;~ 18ED:1E11
cs=0x18ed;eip=0x001e14; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 49780 mov     ax, [bp+arg_2] ;~ 18ED:1E14
cs=0x18ed;eip=0x001e17; 	T(ADD(ax, 2));	// 49781 add     ax, 2 ;~ 18ED:1E17
cs=0x18ed;eip=0x001e1a; 	X(PUSH(ax));	// 49782 push    ax ;~ 18ED:1E1A
cs=0x18ed;eip=0x001e1b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_14))));	// 49783 push    [bp+var_14] ;~ 18ED:1E1B
cs=0x18ed;eip=0x001e1e; 	J(CALLF(prerender_line,0));	// 49784 call    preRender_line ;~ 18ED:1E1E
cs=0x18ed;eip=0x001e23; 	T(ADD(sp, 0x0A));	// 49785 add     sp, 0Ah ;~ 18ED:1E23
cs=0x18ed;eip=0x001e26; 	X(POP(si));	// 49786 pop     si ;~ 18ED:1E26
cs=0x18ed;eip=0x001e27; 	X(POP(di));	// 49787 pop     di ;~ 18ED:1E27
cs=0x18ed;eip=0x001e28; 	T(MOV(sp, bp));	// 49788 mov     sp, bp ;~ 18ED:1E28
cs=0x18ed;eip=0x001e2a; 	X(POP(bp));	// 49789 pop     bp ;~ 18ED:1E2A
cs=0x18ed;eip=0x001e2b; 	J(RETF(0));	// 49790 retf ;~ 18ED:1E2B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kdraw_lines_unk: 	goto draw_lines_unk;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool draw_button(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    draw_button:
    _begin:
#undef var_72
#define var_72 -0x72
	// 49801 var_72          = word ptr -72h ;~ 18ED:1E2C
#undef var_70
#define var_70 -0x70
	// 49802 var_70          = word ptr -70h ;~ 18ED:1E2C
#undef var_6e
#define var_6e -0x6E
	// 49803 var_6E          = word ptr -6Eh ;~ 18ED:1E2C
#undef var_6c
#define var_6c -0x6C
	// 49804 var_6C          = word ptr -6Ch ;~ 18ED:1E2C
#undef var_6a
#define var_6a -0x6A
	// 49805 var_6A          = word ptr -6Ah ;~ 18ED:1E2C
#undef var_68
#define var_68 -0x68
	// 49806 var_68          = word ptr -68h ;~ 18ED:1E2C
#undef var_66
#define var_66 -0x66
	// 49807 var_66          = word ptr -66h ;~ 18ED:1E2C
#undef var_64
#define var_64 -0x64
	// 49808 var_64          = word ptr -64h ;~ 18ED:1E2C
#undef var_62
#define var_62 -0x62
	// 49809 var_62          = word ptr -62h ;~ 18ED:1E2C
#undef var_60
#define var_60 -0x60
	// 49810 var_60          = word ptr -60h ;~ 18ED:1E2C
#undef var_5c
#define var_5c -0x5C
	// 49811 var_5C          = word ptr -5Ch ;~ 18ED:1E2C
#undef var_5a
#define var_5a -0x5A
	// 49812 var_5A          = byte ptr -5Ah ;~ 18ED:1E2C
#undef var_8
#define var_8 -8
	// 49813 var_8           = word ptr -8 ;~ 18ED:1E2C
#undef var_6
#define var_6 -6
	// 49814 var_6           = word ptr -6 ;~ 18ED:1E2C
#undef var_4
#define var_4 -4
	// 49815 var_4           = byte ptr -4 ;~ 18ED:1E2C
#undef var_2
#define var_2 -2
	// 49816 var_2           = word ptr -2 ;~ 18ED:1E2C
#undef arg_0
#define arg_0 6
	// 49817 arg_0           = word ptr  6 ;~ 18ED:1E2C
#undef arg_2
#define arg_2 8
	// 49818 arg_2           = word ptr  8 ;~ 18ED:1E2C
#undef arg_4
#define arg_4 0x0A
	// 49819 arg_4           = word ptr  0Ah ;~ 18ED:1E2C
#undef arg_6
#define arg_6 0x0C
	// 49820 arg_6           = word ptr  0Ch ;~ 18ED:1E2C
#undef arg_8
#define arg_8 0x0E
	// 49821 arg_8           = word ptr  0Eh ;~ 18ED:1E2C
#undef arg_a
#define arg_a 0x10
	// 49822 arg_A           = word ptr  10h ;~ 18ED:1E2C
#undef arg_c
#define arg_c 0x12
	// 49823 arg_C           = word ptr  12h ;~ 18ED:1E2C
#undef arg_e
#define arg_e 0x14
	// 49824 arg_E           = word ptr  14h ;~ 18ED:1E2C
#undef arg_10
#define arg_10 0x16
	// 49825 arg_10          = word ptr  16h ;~ 18ED:1E2C
#undef arg_12
#define arg_12 0x18
	// 49826 arg_12          = word ptr  18h ;~ 18ED:1E2C
cs=0x18ed;eip=0x001e2c; 	X(PUSH(bp));	// 49828 push    bp ;~ 18ED:1E2C
cs=0x18ed;eip=0x001e2d; 	T(MOV(bp, sp));	// 49829 mov     bp, sp ;~ 18ED:1E2D
cs=0x18ed;eip=0x001e2f; 	T(SUB(sp, 0x72));	// 49830 sub     sp, 72h ;~ 18ED:1E2F
cs=0x18ed;eip=0x001e32; 	X(PUSH(di));	// 49831 push    di ;~ 18ED:1E32
cs=0x18ed;eip=0x001e33; 	X(PUSH(si));	// 49832 push    si ;~ 18ED:1E33
cs=0x18ed;eip=0x001e34; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 49833 mov     si, [bp+arg_4] ;~ 18ED:1E34
cs=0x18ed;eip=0x001e37; 	T(ADD(si, *(dw*)(raddr(ss,bp+arg_8))));	// 49834 add     si, [bp+arg_8] ;~ 18ED:1E37
cs=0x18ed;eip=0x001e3a; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_6))));	// 49835 mov     di, [bp+arg_6] ;~ 18ED:1E3A
cs=0x18ed;eip=0x001e3d; 	T(ADD(di, *(dw*)(raddr(ss,bp+arg_a))));	// 49836 add     di, [bp+arg_A] ;~ 18ED:1E3D
cs=0x18ed;eip=0x001e40; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_10))));	// 49837 push    [bp+arg_10] ;~ 18ED:1E40
cs=0x18ed;eip=0x001e43; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 49838 push    [bp+arg_A] ;~ 18ED:1E43
cs=0x18ed;eip=0x001e46; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 49839 push    [bp+arg_8] ;~ 18ED:1E46
cs=0x18ed;eip=0x001e49; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 49840 push    [bp+arg_6] ;~ 18ED:1E49
cs=0x18ed;eip=0x001e4c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 49841 push    [bp+arg_4] ;~ 18ED:1E4C
cs=0x18ed;eip=0x001e4f; 	J(CALLF(sprite_1_unk,0));	// 49842 call    sprite_1_unk ;~ 18ED:1E4F
cs=0x18ed;eip=0x001e54; 	T(ADD(sp, 0x0A));	// 49843 add     sp, 0Ah ;~ 18ED:1E54
cs=0x18ed;eip=0x001e57; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 49844 push    [bp+arg_C] ;~ 18ED:1E57
cs=0x18ed;eip=0x001e5a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 49845 push    [bp+arg_6] ;~ 18ED:1E5A
cs=0x18ed;eip=0x001e5d; 	X(PUSH(si));	// 49846 push    si ;~ 18ED:1E5D
cs=0x18ed;eip=0x001e5e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 49847 push    [bp+arg_6] ;~ 18ED:1E5E
cs=0x18ed;eip=0x001e61; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 49848 push    [bp+arg_4] ;~ 18ED:1E61
cs=0x18ed;eip=0x001e64; 	J(CALLF(prerender_line,0));	// 49849 call    preRender_line ;~ 18ED:1E64
cs=0x18ed;eip=0x001e69; 	T(ADD(sp, 0x0A));	// 49850 add     sp, 0Ah ;~ 18ED:1E69
cs=0x18ed;eip=0x001e6c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 49851 mov     ax, [bp+arg_6] ;~ 18ED:1E6C
cs=0x18ed;eip=0x001e6f; 	T(INC(ax));	// 49852 inc     ax ;~ 18ED:1E6F
cs=0x18ed;eip=0x001e70; 	X(MOV(*(dw*)(raddr(ss,bp+var_64)), ax));	// 49853 mov     [bp+var_64], ax ;~ 18ED:1E70
cs=0x18ed;eip=0x001e73; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 49854 push    [bp+arg_C] ;~ 18ED:1E73
cs=0x18ed;eip=0x001e76; 	X(PUSH(ax));	// 49855 push    ax ;~ 18ED:1E76
cs=0x18ed;eip=0x001e77; 	T(ax = si-1);	// 49856 lea     ax, [si-1] ;~ 18ED:1E77
cs=0x18ed;eip=0x001e7a; 	X(PUSH(ax));	// 49857 push    ax ;~ 18ED:1E7A
cs=0x18ed;eip=0x001e7b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_64))));	// 49858 push    [bp+var_64] ;~ 18ED:1E7B
cs=0x18ed;eip=0x001e7e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 49859 mov     ax, [bp+arg_4] ;~ 18ED:1E7E
cs=0x18ed;eip=0x001e81; 	T(INC(ax));	// 49860 inc     ax ;~ 18ED:1E81
cs=0x18ed;eip=0x001e82; 	X(PUSH(ax));	// 49861 push    ax ;~ 18ED:1E82
cs=0x18ed;eip=0x001e83; 	J(CALLF(prerender_line,0));	// 49862 call    preRender_line ;~ 18ED:1E83
cs=0x18ed;eip=0x001e88; 	T(ADD(sp, 0x0A));	// 49863 add     sp, 0Ah ;~ 18ED:1E88
cs=0x18ed;eip=0x001e8b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 49864 mov     ax, [bp+arg_6] ;~ 18ED:1E8B
cs=0x18ed;eip=0x001e8e; 	T(ADD(ax, 2));	// 49865 add     ax, 2 ;~ 18ED:1E8E
cs=0x18ed;eip=0x001e91; 	X(MOV(*(dw*)(raddr(ss,bp+var_66)), ax));	// 49866 mov     [bp+var_66], ax ;~ 18ED:1E91
cs=0x18ed;eip=0x001e94; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 49867 push    [bp+arg_C] ;~ 18ED:1E94
cs=0x18ed;eip=0x001e97; 	X(PUSH(ax));	// 49868 push    ax ;~ 18ED:1E97
cs=0x18ed;eip=0x001e98; 	T(ax = si-2);	// 49869 lea     ax, [si-2] ;~ 18ED:1E98
cs=0x18ed;eip=0x001e9b; 	X(PUSH(ax));	// 49870 push    ax ;~ 18ED:1E9B
cs=0x18ed;eip=0x001e9c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_66))));	// 49871 push    [bp+var_66] ;~ 18ED:1E9C
cs=0x18ed;eip=0x001e9f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 49872 mov     ax, [bp+arg_4] ;~ 18ED:1E9F
cs=0x18ed;eip=0x001ea2; 	T(ADD(ax, 2));	// 49873 add     ax, 2 ;~ 18ED:1EA2
cs=0x18ed;eip=0x001ea5; 	X(PUSH(ax));	// 49874 push    ax ;~ 18ED:1EA5
cs=0x18ed;eip=0x001ea6; 	J(CALLF(prerender_line,0));	// 49875 call    preRender_line ;~ 18ED:1EA6
cs=0x18ed;eip=0x001eab; 	T(ADD(sp, 0x0A));	// 49876 add     sp, 0Ah ;~ 18ED:1EAB
cs=0x18ed;eip=0x001eae; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 49877 push    [bp+arg_C] ;~ 18ED:1EAE
cs=0x18ed;eip=0x001eb1; 	X(PUSH(di));	// 49878 push    di ;~ 18ED:1EB1
cs=0x18ed;eip=0x001eb2; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 49879 push    [bp+arg_4] ;~ 18ED:1EB2
cs=0x18ed;eip=0x001eb5; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 49880 push    [bp+arg_6] ;~ 18ED:1EB5
cs=0x18ed;eip=0x001eb8; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 49881 push    [bp+arg_4] ;~ 18ED:1EB8
cs=0x18ed;eip=0x001ebb; 	J(CALLF(prerender_line,0));	// 49882 call    preRender_line ;~ 18ED:1EBB
cs=0x18ed;eip=0x001ec0; 	T(ADD(sp, 0x0A));	// 49883 add     sp, 0Ah ;~ 18ED:1EC0
cs=0x18ed;eip=0x001ec3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 49884 mov     ax, [bp+arg_4] ;~ 18ED:1EC3
cs=0x18ed;eip=0x001ec6; 	T(INC(ax));	// 49885 inc     ax ;~ 18ED:1EC6
cs=0x18ed;eip=0x001ec7; 	X(MOV(*(dw*)(raddr(ss,bp+var_68)), ax));	// 49886 mov     [bp+var_68], ax ;~ 18ED:1EC7
cs=0x18ed;eip=0x001eca; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 49887 push    [bp+arg_C] ;~ 18ED:1ECA
cs=0x18ed;eip=0x001ecd; 	T(ax = di-1);	// 49888 lea     ax, [di-1] ;~ 18ED:1ECD
cs=0x18ed;eip=0x001ed0; 	X(PUSH(ax));	// 49889 push    ax ;~ 18ED:1ED0
cs=0x18ed;eip=0x001ed1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_68))));	// 49890 push    [bp+var_68] ;~ 18ED:1ED1
cs=0x18ed;eip=0x001ed4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 49891 mov     ax, [bp+arg_6] ;~ 18ED:1ED4
cs=0x18ed;eip=0x001ed7; 	T(INC(ax));	// 49892 inc     ax ;~ 18ED:1ED7
cs=0x18ed;eip=0x001ed8; 	X(PUSH(ax));	// 49893 push    ax ;~ 18ED:1ED8
cs=0x18ed;eip=0x001ed9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_68))));	// 49894 push    [bp+var_68] ;~ 18ED:1ED9
cs=0x18ed;eip=0x001edc; 	J(CALLF(prerender_line,0));	// 49895 call    preRender_line ;~ 18ED:1EDC
cs=0x18ed;eip=0x001ee1; 	T(ADD(sp, 0x0A));	// 49896 add     sp, 0Ah ;~ 18ED:1EE1
cs=0x18ed;eip=0x001ee4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 49897 mov     ax, [bp+arg_4] ;~ 18ED:1EE4
cs=0x18ed;eip=0x001ee7; 	T(ADD(ax, 2));	// 49898 add     ax, 2 ;~ 18ED:1EE7
cs=0x18ed;eip=0x001eea; 	X(MOV(*(dw*)(raddr(ss,bp+var_6a)), ax));	// 49899 mov     [bp+var_6A], ax ;~ 18ED:1EEA
cs=0x18ed;eip=0x001eed; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 49900 push    [bp+arg_C] ;~ 18ED:1EED
cs=0x18ed;eip=0x001ef0; 	T(ax = di-2);	// 49901 lea     ax, [di-2] ;~ 18ED:1EF0
cs=0x18ed;eip=0x001ef3; 	X(PUSH(ax));	// 49902 push    ax ;~ 18ED:1EF3
cs=0x18ed;eip=0x001ef4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6a))));	// 49903 push    [bp+var_6A] ;~ 18ED:1EF4
cs=0x18ed;eip=0x001ef7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 49904 mov     ax, [bp+arg_6] ;~ 18ED:1EF7
cs=0x18ed;eip=0x001efa; 	T(ADD(ax, 2));	// 49905 add     ax, 2 ;~ 18ED:1EFA
cs=0x18ed;eip=0x001efd; 	X(PUSH(ax));	// 49906 push    ax ;~ 18ED:1EFD
cs=0x18ed;eip=0x001efe; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6a))));	// 49907 push    [bp+var_6A] ;~ 18ED:1EFE
cs=0x18ed;eip=0x001f01; 	J(CALLF(prerender_line,0));	// 49908 call    preRender_line ;~ 18ED:1F01
cs=0x18ed;eip=0x001f06; 	T(ADD(sp, 0x0A));	// 49909 add     sp, 0Ah ;~ 18ED:1F06
cs=0x18ed;eip=0x001f09; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_e))));	// 49910 push    [bp+arg_E] ;~ 18ED:1F09
cs=0x18ed;eip=0x001f0c; 	X(PUSH(di));	// 49911 push    di ;~ 18ED:1F0C
cs=0x18ed;eip=0x001f0d; 	X(PUSH(si));	// 49912 push    si ;~ 18ED:1F0D
cs=0x18ed;eip=0x001f0e; 	X(PUSH(di));	// 49913 push    di ;~ 18ED:1F0E
cs=0x18ed;eip=0x001f0f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 49914 push    [bp+arg_4] ;~ 18ED:1F0F
cs=0x18ed;eip=0x001f12; 	J(CALLF(prerender_line,0));	// 49915 call    preRender_line ;~ 18ED:1F12
cs=0x18ed;eip=0x001f17; 	T(ADD(sp, 0x0A));	// 49916 add     sp, 0Ah ;~ 18ED:1F17
cs=0x18ed;eip=0x001f1a; 	T(ax = di-1);	// 49917 lea     ax, [di-1] ;~ 18ED:1F1A
cs=0x18ed;eip=0x001f1d; 	X(MOV(*(dw*)(raddr(ss,bp+var_6c)), ax));	// 49918 mov     [bp+var_6C], ax ;~ 18ED:1F1D
cs=0x18ed;eip=0x001f20; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_e))));	// 49919 push    [bp+arg_E] ;~ 18ED:1F20
cs=0x18ed;eip=0x001f23; 	X(PUSH(ax));	// 49920 push    ax ;~ 18ED:1F23
cs=0x18ed;eip=0x001f24; 	T(ax = si-1);	// 49921 lea     ax, [si-1] ;~ 18ED:1F24
cs=0x18ed;eip=0x001f27; 	X(PUSH(ax));	// 49922 push    ax ;~ 18ED:1F27
cs=0x18ed;eip=0x001f28; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6c))));	// 49923 push    [bp+var_6C] ;~ 18ED:1F28
cs=0x18ed;eip=0x001f2b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 49924 mov     ax, [bp+arg_4] ;~ 18ED:1F2B
cs=0x18ed;eip=0x001f2e; 	T(INC(ax));	// 49925 inc     ax ;~ 18ED:1F2E
cs=0x18ed;eip=0x001f2f; 	X(PUSH(ax));	// 49926 push    ax ;~ 18ED:1F2F
cs=0x18ed;eip=0x001f30; 	J(CALLF(prerender_line,0));	// 49927 call    preRender_line ;~ 18ED:1F30
cs=0x18ed;eip=0x001f35; 	T(ADD(sp, 0x0A));	// 49928 add     sp, 0Ah ;~ 18ED:1F35
cs=0x18ed;eip=0x001f38; 	T(ax = di-2);	// 49929 lea     ax, [di-2] ;~ 18ED:1F38
cs=0x18ed;eip=0x001f3b; 	X(MOV(*(dw*)(raddr(ss,bp+var_6e)), ax));	// 49930 mov     [bp+var_6E], ax ;~ 18ED:1F3B
cs=0x18ed;eip=0x001f3e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_e))));	// 49931 push    [bp+arg_E] ;~ 18ED:1F3E
cs=0x18ed;eip=0x001f41; 	X(PUSH(ax));	// 49932 push    ax ;~ 18ED:1F41
cs=0x18ed;eip=0x001f42; 	T(ax = si-2);	// 49933 lea     ax, [si-2] ;~ 18ED:1F42
cs=0x18ed;eip=0x001f45; 	X(PUSH(ax));	// 49934 push    ax ;~ 18ED:1F45
cs=0x18ed;eip=0x001f46; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6e))));	// 49935 push    [bp+var_6E] ;~ 18ED:1F46
cs=0x18ed;eip=0x001f49; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 49936 mov     ax, [bp+arg_4] ;~ 18ED:1F49
cs=0x18ed;eip=0x001f4c; 	T(ADD(ax, 2));	// 49937 add     ax, 2 ;~ 18ED:1F4C
cs=0x18ed;eip=0x001f4f; 	X(PUSH(ax));	// 49938 push    ax ;~ 18ED:1F4F
cs=0x18ed;eip=0x001f50; 	J(CALLF(prerender_line,0));	// 49939 call    preRender_line ;~ 18ED:1F50
cs=0x18ed;eip=0x001f55; 	T(ADD(sp, 0x0A));	// 49940 add     sp, 0Ah ;~ 18ED:1F55
cs=0x18ed;eip=0x001f58; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_e))));	// 49941 push    [bp+arg_E] ;~ 18ED:1F58
cs=0x18ed;eip=0x001f5b; 	X(PUSH(di));	// 49942 push    di ;~ 18ED:1F5B
cs=0x18ed;eip=0x001f5c; 	X(PUSH(si));	// 49943 push    si ;~ 18ED:1F5C
cs=0x18ed;eip=0x001f5d; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 49944 push    [bp+arg_6] ;~ 18ED:1F5D
cs=0x18ed;eip=0x001f60; 	X(PUSH(si));	// 49945 push    si ;~ 18ED:1F60
cs=0x18ed;eip=0x001f61; 	J(CALLF(prerender_line,0));	// 49946 call    preRender_line ;~ 18ED:1F61
cs=0x18ed;eip=0x001f66; 	T(ADD(sp, 0x0A));	// 49947 add     sp, 0Ah ;~ 18ED:1F66
cs=0x18ed;eip=0x001f69; 	T(ax = si-1);	// 49948 lea     ax, [si-1] ;~ 18ED:1F69
cs=0x18ed;eip=0x001f6c; 	X(MOV(*(dw*)(raddr(ss,bp+var_70)), ax));	// 49949 mov     [bp+var_70], ax ;~ 18ED:1F6C
cs=0x18ed;eip=0x001f6f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_e))));	// 49950 push    [bp+arg_E] ;~ 18ED:1F6F
cs=0x18ed;eip=0x001f72; 	T(ax = di-1);	// 49951 lea     ax, [di-1] ;~ 18ED:1F72
cs=0x18ed;eip=0x001f75; 	X(PUSH(ax));	// 49952 push    ax ;~ 18ED:1F75
cs=0x18ed;eip=0x001f76; 	X(PUSH(*(dw*)(raddr(ss,bp+var_70))));	// 49953 push    [bp+var_70] ;~ 18ED:1F76
cs=0x18ed;eip=0x001f79; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 49954 mov     ax, [bp+arg_6] ;~ 18ED:1F79
cs=0x18ed;eip=0x001f7c; 	T(INC(ax));	// 49955 inc     ax ;~ 18ED:1F7C
cs=0x18ed;eip=0x001f7d; 	X(PUSH(ax));	// 49956 push    ax ;~ 18ED:1F7D
cs=0x18ed;eip=0x001f7e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_70))));	// 49957 push    [bp+var_70] ;~ 18ED:1F7E
cs=0x18ed;eip=0x001f81; 	J(CALLF(prerender_line,0));	// 49958 call    preRender_line ;~ 18ED:1F81
cs=0x18ed;eip=0x001f86; 	T(ADD(sp, 0x0A));	// 49959 add     sp, 0Ah ;~ 18ED:1F86
cs=0x18ed;eip=0x001f89; 	T(ax = si-2);	// 49960 lea     ax, [si-2] ;~ 18ED:1F89
cs=0x18ed;eip=0x001f8c; 	X(MOV(*(dw*)(raddr(ss,bp+var_72)), ax));	// 49961 mov     [bp+var_72], ax ;~ 18ED:1F8C
cs=0x18ed;eip=0x001f8f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_e))));	// 49962 push    [bp+arg_E] ;~ 18ED:1F8F
cs=0x18ed;eip=0x001f92; 	T(ax = di-2);	// 49963 lea     ax, [di-2] ;~ 18ED:1F92
cs=0x18ed;eip=0x001f95; 	X(PUSH(ax));	// 49964 push    ax ;~ 18ED:1F95
cs=0x18ed;eip=0x001f96; 	X(PUSH(*(dw*)(raddr(ss,bp+var_72))));	// 49965 push    [bp+var_72] ;~ 18ED:1F96
cs=0x18ed;eip=0x001f99; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 49966 mov     ax, [bp+arg_6] ;~ 18ED:1F99
cs=0x18ed;eip=0x001f9c; 	T(ADD(ax, 2));	// 49967 add     ax, 2 ;~ 18ED:1F9C
cs=0x18ed;eip=0x001f9f; 	X(PUSH(ax));	// 49968 push    ax ;~ 18ED:1F9F
cs=0x18ed;eip=0x001fa0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_72))));	// 49969 push    [bp+var_72] ;~ 18ED:1FA0
cs=0x18ed;eip=0x001fa3; 	J(CALLF(prerender_line,0));	// 49970 call    preRender_line ;~ 18ED:1FA3
cs=0x18ed;eip=0x001fa8; 	T(ADD(sp, 0x0A));	// 49971 add     sp, 0Ah ;~ 18ED:1FA8
cs=0x18ed;eip=0x001fab; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 49972 mov     ax, [bp+arg_0] ;~ 18ED:1FAB
cs=0x18ed;eip=0x001fae; 	T(OR(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 49973 or      ax, [bp+arg_2] ;~ 18ED:1FAE
cs=0x18ed;eip=0x001fb1; 	J(JNZ(loc_29466));	// 49974 jnz     short loc_29466 ;~ 18ED:1FB1
cs=0x18ed;eip=0x001fb3; 	J(JMP(loc_29554));	// 49975 jmp     loc_29554 ;~ 18ED:1FB3
loc_29466:
	// 7635 
cs=0x18ed;eip=0x001fb6; 	T(SUB(ax, ax));	// 49979 sub     ax, ax ;~ 18ED:1FB6
cs=0x18ed;eip=0x001fb8; 	X(PUSH(ax));	// 49980 push    ax ;~ 18ED:1FB8
cs=0x18ed;eip=0x001fb9; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_12))));	// 49981 push    [bp+arg_12] ;~ 18ED:1FB9
cs=0x18ed;eip=0x001fbc; 	J(CALLF(font_set_unk,0));	// 49982 call    font_set_unk ;~ 18ED:1FBC
cs=0x18ed;eip=0x001fc1; 	T(ADD(sp, 4));	// 49983 add     sp, 4 ;~ 18ED:1FC1
cs=0x18ed;eip=0x001fc4; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 49984 push    [bp+arg_2] ;~ 18ED:1FC4
cs=0x18ed;eip=0x001fc7; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 49985 push    [bp+arg_0] ;~ 18ED:1FC7
cs=0x18ed;eip=0x001fca; 	T(MOV(ax, 0x0AC74));	// 49986 mov     ax, 0AC74h ;~ 18ED:1FCA
cs=0x18ed;eip=0x001fcd; 	X(PUSH(ax));	// 49987 push    ax ;~ 18ED:1FCD
cs=0x18ed;eip=0x001fce; 	X(PUSH(cs));	// 49988 push    cs ;~ 18ED:1FCE
cs=0x18ed;eip=0x001fcf; 	J(CALL(copy_string,0));	// 49989 call    near ptr copy_string ;~ 18ED:1FCF
cs=0x18ed;eip=0x001fd2; 	T(ADD(sp, 6));	// 49990 add     sp, 6 ;~ 18ED:1FD2
cs=0x18ed;eip=0x001fd5; 	X(MOV(*(dw*)(raddr(ss,bp+var_5c)), 1));	// 49991 mov     [bp+var_5C], 1 ;~ 18ED:1FD5
cs=0x18ed;eip=0x001fda; 	T(MOV(ax, 0x0AC74));	// 49992 mov     ax, 0AC74h ;~ 18ED:1FDA
cs=0x18ed;eip=0x001fdd; 	X(PUSH(ax));	// 49993 push    ax              ; char * ;~ 18ED:1FDD
cs=0x18ed;eip=0x001fde; 	J(CALLF(_strlen,0));	// 49994 call    _strlen ;~ 18ED:1FDE
cs=0x18ed;eip=0x001fe3; 	T(ADD(sp, 2));	// 49995 add     sp, 2 ;~ 18ED:1FE3
cs=0x18ed;eip=0x001fe6; 	X(MOV(*(dw*)(raddr(ss,bp+var_62)), ax));	// 49996 mov     [bp+var_62], ax ;~ 18ED:1FE6
cs=0x18ed;eip=0x001fe9; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 49997 mov     [bp+var_8], 0 ;~ 18ED:1FE9
cs=0x18ed;eip=0x001fee; 	J(JMP(loc_294b0));	// 49998 jmp     short loc_294B0 ;~ 18ED:1FEE
loc_294a0:
	// 7636 
cs=0x18ed;eip=0x001ff0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 50002 mov     bx, [bp+var_8] ;~ 18ED:1FF0
cs=0x18ed;eip=0x001ff3; 	T(CMP(*((&resid_byte1)+bx), 0x5D));	// 50003 cmp     resID_byte1[bx], 5Dh ; ']' ;~ 18ED:1FF3
cs=0x18ed;eip=0x001ff8; 	J(JNZ(loc_294ad));	// 50004 jnz     short loc_294AD ;~ 18ED:1FF8
cs=0x18ed;eip=0x001ffa; 	X(INC(*(dw*)(raddr(ss,bp+var_5c))));	// 50005 inc     [bp+var_5C] ;~ 18ED:1FFA
loc_294ad:
	// 7637 
cs=0x18ed;eip=0x001ffd; 	X(INC(*(dw*)(raddr(ss,bp+var_8))));	// 50008 inc     [bp+var_8] ;~ 18ED:1FFD
loc_294b0:
	// 7638 
cs=0x18ed;eip=0x002000; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_62))));	// 50011 mov     ax, [bp+var_62] ;~ 18ED:2000
cs=0x18ed;eip=0x002003; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), ax));	// 50012 cmp     [bp+var_8], ax ;~ 18ED:2003
cs=0x18ed;eip=0x002006; 	J(JL(loc_294a0));	// 50013 jl      short loc_294A0 ;~ 18ED:2006
cs=0x18ed;eip=0x002008; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 50014 mov     [bp+var_2], 0 ;~ 18ED:2008
cs=0x18ed;eip=0x00200d; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0));	// 50015 mov     [bp+var_6], 0 ;~ 18ED:200D
cs=0x18ed;eip=0x002012; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 50016 mov     ax, [bp+arg_A] ;~ 18ED:2012
cs=0x18ed;eip=0x002015; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_5c))));	// 50017 mov     dx, [bp+var_5C] ;~ 18ED:2015
cs=0x18ed;eip=0x002018; 	T(MOV(cl, 3));	// 50018 mov     cl, 3 ;~ 18ED:2018
cs=0x18ed;eip=0x00201a; 	T(SHL(dx, cl));	// 50019 shl     dx, cl ;~ 18ED:201A
cs=0x18ed;eip=0x00201c; 	T(SUB(ax, dx));	// 50020 sub     ax, dx ;~ 18ED:201C
cs=0x18ed;eip=0x00201e; 	T(CWD);	// 50021 cwd ;~ 18ED:201E
cs=0x18ed;eip=0x00201f; 	T(SUB(ax, dx));	// 50022 sub     ax, dx ;~ 18ED:201F
cs=0x18ed;eip=0x002021; 	T(SAR(ax, 1));	// 50023 sar     ax, 1 ;~ 18ED:2021
cs=0x18ed;eip=0x002023; 	T(INC(ax));	// 50024 inc     ax ;~ 18ED:2023
cs=0x18ed;eip=0x002024; 	X(MOV(*(dw*)(raddr(ss,bp+var_60)), ax));	// 50025 mov     [bp+var_60], ax ;~ 18ED:2024
cs=0x18ed;eip=0x002027; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 50026 mov     [bp+var_8], 0 ;~ 18ED:2027
cs=0x18ed;eip=0x00202c; 	J(JMP(loc_294ef));	// 50027 jmp     short loc_294EF ;~ 18ED:202C
loc_294de:
	// 7639 
cs=0x18ed;eip=0x00202e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 50031 mov     bx, [bp+var_2] ;~ 18ED:202E
cs=0x18ed;eip=0x002031; 	T(ADD(bx, bp));	// 50032 add     bx, bp ;~ 18ED:2031
cs=0x18ed;eip=0x002033; 	T(MOV(al, *(raddr(ss,bp+var_4))));	// 50033 mov     al, [bp+var_4] ;~ 18ED:2033
cs=0x18ed;eip=0x002036; 	X(MOV(*(raddr(ds,bx-0x5A)), al));	// 50034 mov     [bx-5Ah], al ;~ 18ED:2036
cs=0x18ed;eip=0x002039; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 50035 inc     [bp+var_2] ;~ 18ED:2039
loc_294ec:
	// 7640 
cs=0x18ed;eip=0x00203c; 	X(INC(*(dw*)(raddr(ss,bp+var_8))));	// 50038 inc     [bp+var_8] ;~ 18ED:203C
loc_294ef:
	// 7641 
cs=0x18ed;eip=0x00203f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_62))));	// 50041 mov     ax, [bp+var_62] ;~ 18ED:203F
cs=0x18ed;eip=0x002042; 	T(INC(ax));	// 50042 inc     ax ;~ 18ED:2042
cs=0x18ed;eip=0x002043; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_8))));	// 50043 cmp     ax, [bp+var_8] ;~ 18ED:2043
cs=0x18ed;eip=0x002046; 	J(JLE(loc_29554));	// 50044 jle     short loc_29554 ;~ 18ED:2046
cs=0x18ed;eip=0x002048; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 50045 mov     bx, [bp+var_8] ;~ 18ED:2048
cs=0x18ed;eip=0x00204b; 	T(MOV(al, *((&resid_byte1)+bx)));	// 50046 mov     al, resID_byte1[bx] ;~ 18ED:204B
cs=0x18ed;eip=0x00204f; 	X(MOV(*(raddr(ss,bp+var_4)), al));	// 50047 mov     [bp+var_4], al ;~ 18ED:204F
cs=0x18ed;eip=0x002052; 	T(CMP(al, 0x5D));	// 50048 cmp     al, 5Dh ; ']' ;~ 18ED:2052
cs=0x18ed;eip=0x002054; 	J(JZ(loc_2950a));	// 50049 jz      short loc_2950A ;~ 18ED:2054
cs=0x18ed;eip=0x002056; 	T(OR(al, al));	// 50050 or      al, al ;~ 18ED:2056
cs=0x18ed;eip=0x002058; 	J(JNZ(loc_294de));	// 50051 jnz     short loc_294DE ;~ 18ED:2058
loc_2950a:
	// 7642 
cs=0x18ed;eip=0x00205a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 50054 mov     bx, [bp+var_2] ;~ 18ED:205A
cs=0x18ed;eip=0x00205d; 	T(ADD(bx, bp));	// 50055 add     bx, bp ;~ 18ED:205D
cs=0x18ed;eip=0x00205f; 	X(MOV(*(raddr(ds,bx-0x5A)), 0));	// 50056 mov     byte ptr [bx-5Ah], 0 ;~ 18ED:205F
cs=0x18ed;eip=0x002063; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 50057 mov     ax, [bp+var_6] ;~ 18ED:2063
cs=0x18ed;eip=0x002066; 	T(MOV(cl, 3));	// 50058 mov     cl, 3 ;~ 18ED:2066
cs=0x18ed;eip=0x002068; 	T(SHL(ax, cl));	// 50059 shl     ax, cl ;~ 18ED:2068
cs=0x18ed;eip=0x00206a; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 50060 add     ax, [bp+arg_6] ;~ 18ED:206A
cs=0x18ed;eip=0x00206d; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_60))));	// 50061 add     ax, [bp+var_60] ;~ 18ED:206D
cs=0x18ed;eip=0x002070; 	X(PUSH(ax));	// 50062 push    ax ;~ 18ED:2070
cs=0x18ed;eip=0x002071; 	T(ax = bp+var_5a);	// 50063 lea     ax, [bp+var_5A] ;~ 18ED:2071
cs=0x18ed;eip=0x002074; 	X(PUSH(ax));	// 50064 push    ax ;~ 18ED:2074
cs=0x18ed;eip=0x002075; 	J(CALLF(font_op2,0));	// 50065 call    font_op2 ;~ 18ED:2075
cs=0x18ed;eip=0x00207a; 	T(ADD(sp, 2));	// 50066 add     sp, 2 ;~ 18ED:207A
cs=0x18ed;eip=0x00207d; 	T(MOV(cx, ax));	// 50067 mov     cx, ax ;~ 18ED:207D
cs=0x18ed;eip=0x00207f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 50068 mov     ax, [bp+arg_8] ;~ 18ED:207F
cs=0x18ed;eip=0x002082; 	T(SUB(ax, cx));	// 50069 sub     ax, cx ;~ 18ED:2082
cs=0x18ed;eip=0x002084; 	T(CWD);	// 50070 cwd ;~ 18ED:2084
cs=0x18ed;eip=0x002085; 	T(SUB(ax, dx));	// 50071 sub     ax, dx ;~ 18ED:2085
cs=0x18ed;eip=0x002087; 	T(SAR(ax, 1));	// 50072 sar     ax, 1 ;~ 18ED:2087
cs=0x18ed;eip=0x002089; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 50073 add     ax, [bp+arg_4] ;~ 18ED:2089
cs=0x18ed;eip=0x00208c; 	X(PUSH(ax));	// 50074 push    ax ;~ 18ED:208C
cs=0x18ed;eip=0x00208d; 	T(ax = bp+var_5a);	// 50075 lea     ax, [bp+var_5A] ;~ 18ED:208D
cs=0x18ed;eip=0x002090; 	X(PUSH(ax));	// 50076 push    ax ;~ 18ED:2090
cs=0x18ed;eip=0x002091; 	J(CALLF(font_draw_text,0));	// 50077 call    font_draw_text  ; when nop instead of this call = no text on buttons ;~ 18ED:2091
cs=0x18ed;eip=0x002096; 	T(ADD(sp, 6));	// 50078 add     sp, 6 ;~ 18ED:2096
cs=0x18ed;eip=0x002099; 	X(INC(*(dw*)(raddr(ss,bp+var_6))));	// 50079 inc     [bp+var_6] ;~ 18ED:2099
cs=0x18ed;eip=0x00209c; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 50080 mov     [bp+var_2], 0 ;~ 18ED:209C
cs=0x18ed;eip=0x0020a1; 	J(JMP(loc_294ec));	// 50081 jmp     short loc_294EC ;~ 18ED:20A1
loc_29554:
	// 7643 
cs=0x18ed;eip=0x0020a4; 	X(POP(si));	// 50087 pop     si ;~ 18ED:20A4
cs=0x18ed;eip=0x0020a5; 	X(POP(di));	// 50088 pop     di ;~ 18ED:20A5
cs=0x18ed;eip=0x0020a6; 	T(MOV(sp, bp));	// 50089 mov     sp, bp ;~ 18ED:20A6
cs=0x18ed;eip=0x0020a8; 	X(POP(bp));	// 50090 pop     bp ;~ 18ED:20A8
cs=0x18ed;eip=0x0020a9; 	J(RETF(0));	// 50091 retf ;~ 18ED:20A9

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kdraw_button: 	goto draw_button;
        case m2c::kloc_29466: 	goto loc_29466;
        case m2c::kloc_294a0: 	goto loc_294a0;
        case m2c::kloc_294ad: 	goto loc_294ad;
        case m2c::kloc_294b0: 	goto loc_294b0;
        case m2c::kloc_294de: 	goto loc_294de;
        case m2c::kloc_294ec: 	goto loc_294ec;
        case m2c::kloc_294ef: 	goto loc_294ef;
        case m2c::kloc_2950a: 	goto loc_2950a;
        case m2c::kloc_29554: 	goto loc_29554;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool shape3d_init_shape(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    shape3d_init_shape:
    _begin:
#undef arg_0
#define arg_0 6
	// 50102 arg_0           = dword ptr  6 ;~ 18ED:20AA
#undef arg_4
#define arg_4 0x0A
	// 50103 arg_4           = word ptr  0Ah ;~ 18ED:20AA
cs=0x18ed;eip=0x0020aa; 	X(PUSH(bp));	// 50105 push    bp ;~ 18ED:20AA
cs=0x18ed;eip=0x0020ab; 	T(MOV(bp, sp));	// 50106 mov     bp, sp ;~ 18ED:20AB
cs=0x18ed;eip=0x0020ad; 	X(PUSH(si));	// 50107 push    si ;~ 18ED:20AD
cs=0x18ed;eip=0x0020ae; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 50108 mov     bx, [bp+arg_4] ;~ 18ED:20AE
cs=0x18ed;eip=0x0020b1; 	T(LES(si, *(dd*)(raddr(ss,bp+arg_0))));	// 50109 les     si, [bp+arg_0] ;~ 18ED:20B1
cs=0x18ed;eip=0x0020b4; 	T(MOV(al, *(raddr(es,si+0))));	// 50110 mov     al, es:[si+0] ;~ 18ED:20B4
cs=0x18ed;eip=0x0020b7; 	T(SUB(ah, ah));	// 50111 sub     ah, ah ;~ 18ED:20B7
cs=0x18ed;eip=0x0020b9; 	X(MOV(*(dw*)(raddr(ds,bx+0)), ax));	// 50112 mov     [bx+0], ax ;~ 18ED:20B9
cs=0x18ed;eip=0x0020bb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 50113 mov     bx, [bp+arg_4] ;~ 18ED:20BB
cs=0x18ed;eip=0x0020be; 	T(LES(si, *(dd*)(raddr(ss,bp+arg_0))));	// 50114 les     si, [bp+arg_0] ;~ 18ED:20BE
cs=0x18ed;eip=0x0020c1; 	T(MOV(al, *(raddr(es,si+1))));	// 50115 mov     al, es:[si+1] ;~ 18ED:20C1
cs=0x18ed;eip=0x0020c5; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 50116 mov     [bx+6], ax ;~ 18ED:20C5
cs=0x18ed;eip=0x0020c8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 50117 mov     bx, [bp+arg_4] ;~ 18ED:20C8
cs=0x18ed;eip=0x0020cb; 	T(LES(si, *(dd*)(raddr(ss,bp+arg_0))));	// 50118 les     si, [bp+arg_0] ;~ 18ED:20CB
cs=0x18ed;eip=0x0020ce; 	T(MOV(al, *(raddr(es,si+2))));	// 50119 mov     al, es:[si+2] ;~ 18ED:20CE
cs=0x18ed;eip=0x0020d2; 	X(MOV(*(raddr(ds,bx+8)), al));	// 50120 mov     [bx+8], al ;~ 18ED:20D2
cs=0x18ed;eip=0x0020d5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 50121 mov     bx, [bp+arg_4] ;~ 18ED:20D5
cs=0x18ed;eip=0x0020d8; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 50122 mov     ax, word ptr [bp+arg_0] ;~ 18ED:20D8
cs=0x18ed;eip=0x0020db; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 50123 mov     dx, word ptr [bp+arg_0+2] ;~ 18ED:20DB
cs=0x18ed;eip=0x0020de; 	T(ADD(ax, 4));	// 50124 add     ax, 4 ;~ 18ED:20DE
cs=0x18ed;eip=0x0020e1; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 50125 mov     [bx+2], ax ;~ 18ED:20E1
cs=0x18ed;eip=0x0020e4; 	X(MOV(*(dw*)(raddr(ds,bx+4)), dx));	// 50126 mov     [bx+4], dx ;~ 18ED:20E4
cs=0x18ed;eip=0x0020e7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 50127 mov     bx, [bp+arg_4] ;~ 18ED:20E7
cs=0x18ed;eip=0x0020ea; 	T(MOV(si, bx));	// 50128 mov     si, bx ;~ 18ED:20EA
cs=0x18ed;eip=0x0020ec; 	T(MOV(ax, *(dw*)(raddr(ds,si+0))));	// 50129 mov     ax, [si+0] ;~ 18ED:20EC
cs=0x18ed;eip=0x0020ee; 	T(MOV(cx, ax));	// 50130 mov     cx, ax ;~ 18ED:20EE
cs=0x18ed;eip=0x0020f0; 	T(SHL(ax, 1));	// 50131 shl     ax, 1 ;~ 18ED:20F0
cs=0x18ed;eip=0x0020f2; 	T(ADD(ax, cx));	// 50132 add     ax, cx ;~ 18ED:20F2
cs=0x18ed;eip=0x0020f4; 	T(SHL(ax, 1));	// 50133 shl     ax, 1 ;~ 18ED:20F4
cs=0x18ed;eip=0x0020f6; 	T(ADD(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 50134 add     ax, word ptr [bp+arg_0] ;~ 18ED:20F6
cs=0x18ed;eip=0x0020f9; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 50135 mov     dx, word ptr [bp+arg_0+2] ;~ 18ED:20F9
cs=0x18ed;eip=0x0020fc; 	T(ADD(ax, 4));	// 50136 add     ax, 4 ;~ 18ED:20FC
cs=0x18ed;eip=0x0020ff; 	X(MOV(*(dw*)(raddr(ds,bx+0x0E)), ax));	// 50137 mov     [bx+0Eh], ax ;~ 18ED:20FF
cs=0x18ed;eip=0x002102; 	X(MOV(*(dw*)(raddr(ds,bx+0x10)), dx));	// 50138 mov     [bx+10h], dx ;~ 18ED:2102
cs=0x18ed;eip=0x002105; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 50139 mov     bx, [bp+arg_4] ;~ 18ED:2105
cs=0x18ed;eip=0x002108; 	T(MOV(si, bx));	// 50140 mov     si, bx ;~ 18ED:2108
cs=0x18ed;eip=0x00210a; 	T(MOV(ax, *(dw*)(raddr(ds,si+6))));	// 50141 mov     ax, [si+6] ;~ 18ED:210A
cs=0x18ed;eip=0x00210d; 	T(SHL(ax, 1));	// 50142 shl     ax, 1 ;~ 18ED:210D
cs=0x18ed;eip=0x00210f; 	T(SHL(ax, 1));	// 50143 shl     ax, 1 ;~ 18ED:210F
cs=0x18ed;eip=0x002111; 	T(MOV(cx, *(dw*)(raddr(ds,si+0))));	// 50144 mov     cx, [si+0] ;~ 18ED:2111
cs=0x18ed;eip=0x002113; 	T(MOV(dx, cx));	// 50145 mov     dx, cx ;~ 18ED:2113
cs=0x18ed;eip=0x002115; 	T(SHL(cx, 1));	// 50146 shl     cx, 1 ;~ 18ED:2115
cs=0x18ed;eip=0x002117; 	T(ADD(cx, dx));	// 50147 add     cx, dx ;~ 18ED:2117
cs=0x18ed;eip=0x002119; 	T(SHL(cx, 1));	// 50148 shl     cx, 1 ;~ 18ED:2119
cs=0x18ed;eip=0x00211b; 	T(ADD(ax, cx));	// 50149 add     ax, cx ;~ 18ED:211B
cs=0x18ed;eip=0x00211d; 	T(ADD(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 50150 add     ax, word ptr [bp+arg_0] ;~ 18ED:211D
cs=0x18ed;eip=0x002120; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 50151 mov     dx, word ptr [bp+arg_0+2] ;~ 18ED:2120
cs=0x18ed;eip=0x002123; 	T(ADD(ax, 4));	// 50152 add     ax, 4 ;~ 18ED:2123
cs=0x18ed;eip=0x002126; 	X(MOV(*(dw*)(raddr(ds,bx+0x12)), ax));	// 50153 mov     [bx+12h], ax ;~ 18ED:2126
cs=0x18ed;eip=0x002129; 	X(MOV(*(dw*)(raddr(ds,bx+0x14)), dx));	// 50154 mov     [bx+14h], dx ;~ 18ED:2129
cs=0x18ed;eip=0x00212c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 50155 mov     bx, [bp+arg_4] ;~ 18ED:212C
cs=0x18ed;eip=0x00212f; 	T(MOV(si, bx));	// 50156 mov     si, bx ;~ 18ED:212F
cs=0x18ed;eip=0x002131; 	T(MOV(ax, *(dw*)(raddr(ds,si+6))));	// 50157 mov     ax, [si+6] ;~ 18ED:2131
cs=0x18ed;eip=0x002134; 	T(MOV(cl, 3));	// 50158 mov     cl, 3 ;~ 18ED:2134
cs=0x18ed;eip=0x002136; 	T(SHL(ax, cl));	// 50159 shl     ax, cl ;~ 18ED:2136
cs=0x18ed;eip=0x002138; 	T(MOV(cx, *(dw*)(raddr(ds,si+0))));	// 50160 mov     cx, [si+0] ;~ 18ED:2138
cs=0x18ed;eip=0x00213a; 	T(MOV(dx, cx));	// 50161 mov     dx, cx ;~ 18ED:213A
cs=0x18ed;eip=0x00213c; 	T(SHL(cx, 1));	// 50162 shl     cx, 1 ;~ 18ED:213C
cs=0x18ed;eip=0x00213e; 	T(ADD(cx, dx));	// 50163 add     cx, dx ;~ 18ED:213E
cs=0x18ed;eip=0x002140; 	T(SHL(cx, 1));	// 50164 shl     cx, 1 ;~ 18ED:2140
cs=0x18ed;eip=0x002142; 	T(ADD(ax, cx));	// 50165 add     ax, cx ;~ 18ED:2142
cs=0x18ed;eip=0x002144; 	T(ADD(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 50166 add     ax, word ptr [bp+arg_0] ;~ 18ED:2144
cs=0x18ed;eip=0x002147; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 50167 mov     dx, word ptr [bp+arg_0+2] ;~ 18ED:2147
cs=0x18ed;eip=0x00214a; 	T(ADD(ax, 4));	// 50168 add     ax, 4 ;~ 18ED:214A
cs=0x18ed;eip=0x00214d; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), ax));	// 50169 mov     [bx+0Ah], ax ;~ 18ED:214D
cs=0x18ed;eip=0x002150; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), dx));	// 50170 mov     [bx+0Ch], dx ;~ 18ED:2150
cs=0x18ed;eip=0x002153; 	X(POP(si));	// 50171 pop     si ;~ 18ED:2153
cs=0x18ed;eip=0x002154; 	X(POP(bp));	// 50172 pop     bp ;~ 18ED:2154
cs=0x18ed;eip=0x002155; 	J(RETF(0));	// 50173 retf ;~ 18ED:2155

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kshape3d_init_shape: 	goto shape3d_init_shape;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool font_op2_alt(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    font_op2_alt:
    _begin:
#undef arg_0
#define arg_0 6
	// 50184 arg_0           = word ptr  6 ;~ 18ED:2156
cs=0x18ed;eip=0x002156; 	X(PUSH(bp));	// 50186 push    bp ;~ 18ED:2156
cs=0x18ed;eip=0x002157; 	T(MOV(bp, sp));	// 50187 mov     bp, sp ;~ 18ED:2157
cs=0x18ed;eip=0x002159; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 50188 push    [bp+arg_0] ;~ 18ED:2159
cs=0x18ed;eip=0x00215c; 	J(CALLF(font_op2,0));	// 50189 call    font_op2 ;~ 18ED:215C
cs=0x18ed;eip=0x002161; 	T(ADD(sp, 2));	// 50190 add     sp, 2 ;~ 18ED:2161
cs=0x18ed;eip=0x002164; 	T(SUB(ax, 0x140));	// 50191 sub     ax, 140h ;~ 18ED:2164
cs=0x18ed;eip=0x002167; 	T(NEG(ax));	// 50192 neg     ax ;~ 18ED:2167
cs=0x18ed;eip=0x002169; 	T(CWD);	// 50193 cwd ;~ 18ED:2169
cs=0x18ed;eip=0x00216a; 	T(SUB(ax, dx));	// 50194 sub     ax, dx ;~ 18ED:216A
cs=0x18ed;eip=0x00216c; 	T(SAR(ax, 1));	// 50195 sar     ax, 1 ;~ 18ED:216C
cs=0x18ed;eip=0x00216e; 	X(POP(bp));	// 50196 pop     bp ;~ 18ED:216E
cs=0x18ed;eip=0x00216f; 	J(RETF(0));	// 50197 retf ;~ 18ED:216F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kfont_op2_alt: 	goto font_op2_alt;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sprite_blit_to_video(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sprite_blit_to_video:
    _begin:
#undef arg_0
#define arg_0 6
	// 50208 arg_0           = dword ptr  6 ;~ 18ED:2170
#undef arg_4
#define arg_4 0x0A
	// 50209 arg_4           = word ptr  0Ah ;~ 18ED:2170
cs=0x18ed;eip=0x002170; 	X(PUSH(bp));	// 50211 push    bp ;~ 18ED:2170
cs=0x18ed;eip=0x002171; 	T(MOV(bp, sp));	// 50212 mov     bp, sp ;~ 18ED:2171
cs=0x18ed;eip=0x002173; 	T(SUB(sp, 4));	// 50213 sub     sp, 4 ;~ 18ED:2173
cs=0x18ed;eip=0x002176; 	X(PUSH(di));	// 50214 push    di ;~ 18ED:2176
cs=0x18ed;eip=0x002177; 	X(PUSH(si));	// 50215 push    si ;~ 18ED:2177
cs=0x18ed;eip=0x002178; 	X(PUSH(cs));	// 50216 push    cs ;~ 18ED:2178
cs=0x18ed;eip=0x002179; 	J(CALL(sprite_copy_2_to_1_2,0));	// 50217 call    near ptr sprite_copy_2_to_1_2 ;~ 18ED:2179
cs=0x18ed;eip=0x00217c; 	X(PUSH(cs));	// 50218 push    cs ;~ 18ED:217C
cs=0x18ed;eip=0x00217d; 	J(CALL(mouse_draw_opaque_check,0));	// 50219 call    near ptr mouse_draw_opaque_check ;~ 18ED:217D
cs=0x18ed;eip=0x002180; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0x0FFFE));	// 50220 cmp     [bp+arg_4], 0FFFEh ;~ 18ED:2180
cs=0x18ed;eip=0x002184; 	J(JNZ(loc_29654));	// 50221 jnz     short loc_29654 ;~ 18ED:2184
cs=0x18ed;eip=0x002186; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 50222 les     bx, [bp+arg_0] ;~ 18ED:2186
cs=0x18ed;eip=0x002189; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 50223 push    word ptr es:[bx+2] ;~ 18ED:2189
cs=0x18ed;eip=0x00218d; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 50224 push    word ptr es:[bx] ;~ 18ED:218D
cs=0x18ed;eip=0x002190; 	J(CALLF(sprite_putimage,0));	// 50225 call    sprite_putimage ;~ 18ED:2190
cs=0x18ed;eip=0x002195; 	T(ADD(sp, 4));	// 50226 add     sp, 4 ;~ 18ED:2195
loc_29648:
	// 7644 
cs=0x18ed;eip=0x002198; 	X(PUSH(cs));	// 50229 push    cs ;~ 18ED:2198
cs=0x18ed;eip=0x002199; 	J(CALL(mouse_draw_transparent_check,0));	// 50230 call    near ptr mouse_draw_transparent_check ;~ 18ED:2199
cs=0x18ed;eip=0x00219c; 	T(SUB(ax, ax));	// 50231 sub     ax, ax ;~ 18ED:219C
cs=0x18ed;eip=0x00219e; 	X(POP(si));	// 50232 pop     si ;~ 18ED:219E
cs=0x18ed;eip=0x00219f; 	X(POP(di));	// 50233 pop     di ;~ 18ED:219F
cs=0x18ed;eip=0x0021a0; 	T(MOV(sp, bp));	// 50234 mov     sp, bp ;~ 18ED:21A0
cs=0x18ed;eip=0x0021a2; 	X(POP(bp));	// 50235 pop     bp ;~ 18ED:21A2
cs=0x18ed;eip=0x0021a3; 	J(RETF(0));	// 50236 retf ;~ 18ED:21A3
loc_29654:
	// 7645 
cs=0x18ed;eip=0x0021a4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 50240 mov     ax, [bp+arg_4] ;~ 18ED:21A4
cs=0x18ed;eip=0x0021a7; 	T(SUB(si, si));	// 50241 sub     si, si ;~ 18ED:21A7
cs=0x18ed;eip=0x0021a9; 	J(JMP(loc_29670));	// 50242 jmp     short loc_29670 ;~ 18ED:21A9
loc_2965c:
	// 7646 
cs=0x18ed;eip=0x0021ac; 	X(PUSH(si));	// 50247 push    si ;~ 18ED:21AC
cs=0x18ed;eip=0x0021ad; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 50248 les     bx, [bp+arg_0] ;~ 18ED:21AD
cs=0x18ed;eip=0x0021b0; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 50249 push    word ptr es:[bx+2] ;~ 18ED:21B0
cs=0x18ed;eip=0x0021b4; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 50250 push    word ptr es:[bx] ;~ 18ED:21B4
cs=0x18ed;eip=0x0021b7; 	J(CALLF(sprite_1_unk3,0));	// 50251 call    sprite_1_unk3 ;~ 18ED:21B7
cs=0x18ed;eip=0x0021bc; 	T(ADD(sp, 6));	// 50252 add     sp, 6 ;~ 18ED:21BC
cs=0x18ed;eip=0x0021bf; 	T(INC(si));	// 50253 inc     si ;~ 18ED:21BF
loc_29670:
	// 7647 
cs=0x18ed;eip=0x0021c0; 	T(CMP(si, 4));	// 50256 cmp     si, 4 ;~ 18ED:21C0
cs=0x18ed;eip=0x0021c3; 	J(JGE(loc_29648));	// 50257 jge     short loc_29648 ;~ 18ED:21C3
cs=0x18ed;eip=0x0021c5; 	X(PUSH(cs));	// 50258 push    cs ;~ 18ED:21C5
cs=0x18ed;eip=0x0021c6; 	J(CALL(timer_get_delta_alt,0));	// 50259 call    near ptr timer_get_delta_alt ;~ 18ED:21C6
cs=0x18ed;eip=0x0021c9; 	X(PUSH(ax));	// 50260 push    ax ;~ 18ED:21C9
cs=0x18ed;eip=0x0021ca; 	X(PUSH(cs));	// 50261 push    cs ;~ 18ED:21CA
cs=0x18ed;eip=0x0021cb; 	J(CALL(input_do_checking,0));	// 50262 call    near ptr input_do_checking ;~ 18ED:21CB
cs=0x18ed;eip=0x0021ce; 	T(ADD(sp, 2));	// 50263 add     sp, 2 ;~ 18ED:21CE
cs=0x18ed;eip=0x0021d1; 	T(MOV(di, ax));	// 50264 mov     di, ax ;~ 18ED:21D1
cs=0x18ed;eip=0x0021d3; 	T(OR(di, di));	// 50265 or      di, di ;~ 18ED:21D3
cs=0x18ed;eip=0x0021d5; 	J(JZ(loc_2965c));	// 50266 jz      short loc_2965C ;~ 18ED:21D5
cs=0x18ed;eip=0x0021d7; 	X(PUSH(cs));	// 50267 push    cs ;~ 18ED:21D7
cs=0x18ed;eip=0x0021d8; 	J(CALL(sprite_copy_2_to_1_2,0));	// 50268 call    near ptr sprite_copy_2_to_1_2 ;~ 18ED:21D8
cs=0x18ed;eip=0x0021db; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 50269 les     bx, [bp+arg_0] ;~ 18ED:21DB
cs=0x18ed;eip=0x0021de; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 50270 push    word ptr es:[bx+2] ;~ 18ED:21DE
cs=0x18ed;eip=0x0021e2; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 50271 push    word ptr es:[bx] ;~ 18ED:21E2
cs=0x18ed;eip=0x0021e5; 	J(CALLF(sprite_putimage,0));	// 50272 call    sprite_putimage ;~ 18ED:21E5
cs=0x18ed;eip=0x0021ea; 	T(ADD(sp, 4));	// 50273 add     sp, 4 ;~ 18ED:21EA
cs=0x18ed;eip=0x0021ed; 	X(PUSH(cs));	// 50274 push    cs ;~ 18ED:21ED
cs=0x18ed;eip=0x0021ee; 	J(CALL(mouse_draw_transparent_check,0));	// 50275 call    near ptr mouse_draw_transparent_check ;~ 18ED:21EE
cs=0x18ed;eip=0x0021f1; 	T(MOV(ax, di));	// 50276 mov     ax, di ;~ 18ED:21F1
cs=0x18ed;eip=0x0021f3; 	X(POP(si));	// 50277 pop     si ;~ 18ED:21F3
cs=0x18ed;eip=0x0021f4; 	X(POP(di));	// 50278 pop     di ;~ 18ED:21F4
cs=0x18ed;eip=0x0021f5; 	T(MOV(sp, bp));	// 50279 mov     sp, bp ;~ 18ED:21F5
cs=0x18ed;eip=0x0021f7; 	X(POP(bp));	// 50280 pop     bp ;~ 18ED:21F7
cs=0x18ed;eip=0x0021f8; 	J(RETF(0));	// 50281 retf ;~ 18ED:21F8

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_29648: 	goto loc_29648;
        case m2c::kloc_29654: 	goto loc_29654;
        case m2c::kloc_2965c: 	goto loc_2965c;
        case m2c::kloc_29670: 	goto loc_29670;
        case m2c::ksprite_blit_to_video: 	goto sprite_blit_to_video;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool show_waiting(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    show_waiting:
    _begin:
cs=0x18ed;eip=0x0021fa; 	T(SUB(ax, ax));	// 50292 sub     ax, ax ;~ 18ED:21FA
cs=0x18ed;eip=0x0021fc; 	X(PUSH(ax));	// 50293 push    ax ;~ 18ED:21FC
cs=0x18ed;eip=0x0021fd; 	X(PUSH(ax));	// 50294 push    ax ;~ 18ED:21FD
cs=0x18ed;eip=0x0021fe; 	X(PUSH(dialogarg2));	// 50295 push    dialogarg2 ;~ 18ED:21FE
cs=0x18ed;eip=0x002202; 	X(PUSH(waitflag));	// 50296 push    waitflag ;~ 18ED:2202
cs=0x18ed;eip=0x002206; 	T(MOV(ax, 0x0FFFF));	// 50297 mov     ax, 0FFFFh ;~ 18ED:2206
cs=0x18ed;eip=0x002209; 	X(PUSH(ax));	// 50298 push    ax ;~ 18ED:2209
cs=0x18ed;eip=0x00220a; 	T(MOV(ax, offset(dseg,awai)));	// 50299 mov     ax, offset aWai ; "wai" ;~ 18ED:220A
cs=0x18ed;eip=0x00220d; 	X(PUSH(ax));	// 50300 push    ax ;~ 18ED:220D
cs=0x18ed;eip=0x00220e; 	X(PUSH(word_44cee));	// 50301 push    word_44CEE ;~ 18ED:220E
cs=0x18ed;eip=0x002212; 	X(PUSH(mainresptr));	// 50302 push    mainresptr ;~ 18ED:2212
cs=0x18ed;eip=0x002216; 	X(PUSH(cs));	// 50303 push    cs ;~ 18ED:2216
cs=0x18ed;eip=0x002217; 	J(CALL(locate_text_res,0));	// 50304 call    near ptr locate_text_res ;~ 18ED:2217
cs=0x18ed;eip=0x00221a; 	T(ADD(sp, 6));	// 50305 add     sp, 6 ;~ 18ED:221A
cs=0x18ed;eip=0x00221d; 	X(PUSH(dx));	// 50306 push    dx ;~ 18ED:221D
cs=0x18ed;eip=0x00221e; 	X(PUSH(ax));	// 50307 push    ax ;~ 18ED:221E
cs=0x18ed;eip=0x00221f; 	T(SUB(ax, ax));	// 50308 sub     ax, ax ;~ 18ED:221F
cs=0x18ed;eip=0x002221; 	X(PUSH(ax));	// 50309 push    ax ;~ 18ED:2221
cs=0x18ed;eip=0x002222; 	X(PUSH(ax));	// 50310 push    ax ;~ 18ED:2222
cs=0x18ed;eip=0x002223; 	X(PUSH(cs));	// 50311 push    cs ;~ 18ED:2223
cs=0x18ed;eip=0x002224; 	J(CALL(show_dialog,0));	// 50312 call    near ptr show_dialog ;~ 18ED:2224
cs=0x18ed;eip=0x002227; 	T(ADD(sp, 0x12));	// 50313 add     sp, 12h ;~ 18ED:2227
cs=0x18ed;eip=0x00222a; 	X(PUSH(cs));	// 50314 push    cs ;~ 18ED:222A
cs=0x18ed;eip=0x00222b; 	J(CALL(mouse_draw_opaque_check,0));	// 50315 call    near ptr mouse_draw_opaque_check ;~ 18ED:222B
cs=0x18ed;eip=0x00222e; 	J(RETF(0));	// 50316 retf ;~ 18ED:222E

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kshow_waiting: 	goto show_waiting;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool print_int_as_string_maybe(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    print_int_as_string_maybe:
    _begin:
#undef arg_0
#define arg_0 6
	// 50330 arg_0           = word ptr  6 ;~ 18ED:2230
#undef arg_2
#define arg_2 8
	// 50331 arg_2           = dword ptr  8 ;~ 18ED:2230
#undef arg_6
#define arg_6 0x0C
	// 50332 arg_6           = word ptr  0Ch ;~ 18ED:2230
cs=0x18ed;eip=0x002230; 	X(PUSH(bp));	// 50334 push    bp ;~ 18ED:2230
cs=0x18ed;eip=0x002231; 	T(MOV(bp, sp));	// 50335 mov     bp, sp ;~ 18ED:2231
cs=0x18ed;eip=0x002233; 	T(SUB(sp, 4));	// 50336 sub     sp, 4 ;~ 18ED:2233
cs=0x18ed;eip=0x002236; 	X(PUSH(di));	// 50337 push    di              ; int ;~ 18ED:2236
cs=0x18ed;eip=0x002237; 	X(PUSH(si));	// 50338 push    si ;~ 18ED:2237
cs=0x18ed;eip=0x002238; 	T(MOV(ax, 0x0A));	// 50339 mov     ax, 0Ah ;~ 18ED:2238
cs=0x18ed;eip=0x00223b; 	X(PUSH(ax));	// 50340 push    ax              ; char * ;~ 18ED:223B
cs=0x18ed;eip=0x00223c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 50341 push    [bp+arg_0]      ; char * ;~ 18ED:223C
cs=0x18ed;eip=0x00223f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 50342 push    word ptr [bp+arg_2] ; int ;~ 18ED:223F
cs=0x18ed;eip=0x002242; 	J(CALLF(_itoa,0));	// 50343 call    _itoa ;~ 18ED:2242
cs=0x18ed;eip=0x002247; 	T(ADD(sp, 6));	// 50344 add     sp, 6 ;~ 18ED:2247
cs=0x18ed;eip=0x00224a; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), 0));	// 50345 cmp     [bp+arg_6], 0 ;~ 18ED:224A
cs=0x18ed;eip=0x00224e; 	J(JZ(loc_2974d));	// 50346 jz      short loc_2974D ;~ 18ED:224E
cs=0x18ed;eip=0x002250; 	T(SUB(si, si));	// 50347 sub     si, si ;~ 18ED:2250
cs=0x18ed;eip=0x002252; 	J(JMP(loc_29705));	// 50348 jmp     short loc_29705 ;~ 18ED:2252
loc_29704:
	// 7648 
cs=0x18ed;eip=0x002254; 	T(INC(si));	// 50352 inc     si ;~ 18ED:2254
loc_29705:
	// 7649 
cs=0x18ed;eip=0x002255; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 50355 mov     bx, [bp+arg_0] ;~ 18ED:2255
cs=0x18ed;eip=0x002258; 	T(CMP(*(raddr(ds,bx+si)), 0));	// 50356 cmp     byte ptr [bx+si], 0 ;~ 18ED:2258
cs=0x18ed;eip=0x00225b; 	J(JNZ(loc_29704));	// 50357 jnz     short loc_29704 ;~ 18ED:225B
cs=0x18ed;eip=0x00225d; 	J(JMP(loc_29748));	// 50358 jmp     short loc_29748 ;~ 18ED:225D
loc_29710:
	// 7650 
cs=0x18ed;eip=0x002260; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), si));	// 50363 cmp     [bp+arg_6], si ;~ 18ED:2260
cs=0x18ed;eip=0x002263; 	J(JGE(loc_2972a));	// 50364 jge     short loc_2972A ;~ 18ED:2263
cs=0x18ed;eip=0x002265; 	T(SUB(di, di));	// 50365 sub     di, di ;~ 18ED:2265
cs=0x18ed;eip=0x002267; 	J(JMP(loc_29723));	// 50366 jmp     short loc_29723 ;~ 18ED:2267
loc_2971a:
	// 7651 
cs=0x18ed;eip=0x00226a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 50371 mov     bx, [bp+arg_0] ;~ 18ED:226A
cs=0x18ed;eip=0x00226d; 	T(MOV(al, *(raddr(ds,bx+di+1))));	// 50372 mov     al, [bx+di+1] ;~ 18ED:226D
cs=0x18ed;eip=0x002270; 	X(MOV(*(raddr(ds,bx+di)), al));	// 50373 mov     [bx+di], al ;~ 18ED:2270
cs=0x18ed;eip=0x002272; 	T(INC(di));	// 50374 inc     di ;~ 18ED:2272
loc_29723:
	// 7652 
cs=0x18ed;eip=0x002273; 	T(CMP(di, si));	// 50377 cmp     di, si ;~ 18ED:2273
cs=0x18ed;eip=0x002275; 	J(JL(loc_2971a));	// 50378 jl      short loc_2971A ;~ 18ED:2275
cs=0x18ed;eip=0x002277; 	T(DEC(si));	// 50379 dec     si ;~ 18ED:2277
cs=0x18ed;eip=0x002278; 	J(JMP(loc_29748));	// 50380 jmp     short loc_29748 ;~ 18ED:2278
loc_2972a:
	// 7653 
cs=0x18ed;eip=0x00227a; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), si));	// 50384 cmp     [bp+arg_6], si ;~ 18ED:227A
cs=0x18ed;eip=0x00227d; 	J(JLE(loc_29748));	// 50385 jle     short loc_29748 ;~ 18ED:227D
cs=0x18ed;eip=0x00227f; 	T(MOV(di, si));	// 50386 mov     di, si ;~ 18ED:227F
cs=0x18ed;eip=0x002281; 	J(JMP(loc_2973d));	// 50387 jmp     short loc_2973D ;~ 18ED:2281
loc_29734:
	// 7654 
cs=0x18ed;eip=0x002284; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 50392 mov     bx, [bp+arg_0] ;~ 18ED:2284
cs=0x18ed;eip=0x002287; 	T(MOV(al, *(raddr(ds,bx+di))));	// 50393 mov     al, [bx+di] ;~ 18ED:2287
cs=0x18ed;eip=0x002289; 	X(MOV(*(raddr(ds,bx+di+1)), al));	// 50394 mov     [bx+di+1], al ;~ 18ED:2289
cs=0x18ed;eip=0x00228c; 	T(DEC(di));	// 50395 dec     di ;~ 18ED:228C
loc_2973d:
	// 7655 
cs=0x18ed;eip=0x00228d; 	T(OR(di, di));	// 50398 or      di, di ;~ 18ED:228D
cs=0x18ed;eip=0x00228f; 	J(JGE(loc_29734));	// 50399 jge     short loc_29734 ;~ 18ED:228F
cs=0x18ed;eip=0x002291; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 50400 mov     bx, [bp+arg_0] ;~ 18ED:2291
cs=0x18ed;eip=0x002294; 	X(MOV(*(raddr(ds,bx)), 0x20));	// 50401 mov     byte ptr [bx], 20h ; ' ' ;~ 18ED:2294
cs=0x18ed;eip=0x002297; 	T(INC(si));	// 50402 inc     si ;~ 18ED:2297
loc_29748:
	// 7656 
cs=0x18ed;eip=0x002298; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), si));	// 50406 cmp     [bp+arg_6], si ;~ 18ED:2298
cs=0x18ed;eip=0x00229b; 	J(JNZ(loc_29710));	// 50407 jnz     short loc_29710 ;~ 18ED:229B
loc_2974d:
	// 7657 
cs=0x18ed;eip=0x00229d; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+arg_2+2))), 0));	// 50410 cmp     word ptr [bp+arg_2+2], 0 ;~ 18ED:229D
cs=0x18ed;eip=0x0022a1; 	J(JZ(loc_2976b));	// 50411 jz      short loc_2976B ;~ 18ED:22A1
cs=0x18ed;eip=0x0022a3; 	T(SUB(si, si));	// 50412 sub     si, si ;~ 18ED:22A3
cs=0x18ed;eip=0x0022a5; 	J(JMP(loc_29763));	// 50413 jmp     short loc_29763 ;~ 18ED:22A5
loc_29758:
	// 7658 
cs=0x18ed;eip=0x0022a8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 50418 mov     bx, [bp+arg_0] ;~ 18ED:22A8
cs=0x18ed;eip=0x0022ab; 	T(MOV(ax, si));	// 50419 mov     ax, si ;~ 18ED:22AB
cs=0x18ed;eip=0x0022ad; 	T(INC(si));	// 50420 inc     si ;~ 18ED:22AD
cs=0x18ed;eip=0x0022ae; 	T(ADD(bx, ax));	// 50421 add     bx, ax ;~ 18ED:22AE
cs=0x18ed;eip=0x0022b0; 	X(MOV(*(raddr(ds,bx)), 0x30));	// 50422 mov     byte ptr [bx], 30h ; '0' ;~ 18ED:22B0
loc_29763:
	// 7659 
cs=0x18ed;eip=0x0022b3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 50425 mov     bx, [bp+arg_0] ;~ 18ED:22B3
cs=0x18ed;eip=0x0022b6; 	T(CMP(*(raddr(ds,bx+si)), 0x20));	// 50426 cmp     byte ptr [bx+si], 20h ; ' ' ;~ 18ED:22B6
cs=0x18ed;eip=0x0022b9; 	J(JZ(loc_29758));	// 50427 jz      short loc_29758 ;~ 18ED:22B9
loc_2976b:
	// 7660 
cs=0x18ed;eip=0x0022bb; 	X(POP(si));	// 50430 pop     si ;~ 18ED:22BB
cs=0x18ed;eip=0x0022bc; 	X(POP(di));	// 50431 pop     di ;~ 18ED:22BC
cs=0x18ed;eip=0x0022bd; 	T(MOV(sp, bp));	// 50432 mov     sp, bp ;~ 18ED:22BD
cs=0x18ed;eip=0x0022bf; 	X(POP(bp));	// 50433 pop     bp ;~ 18ED:22BF
cs=0x18ed;eip=0x0022c0; 	J(RETF(0));	// 50434 retf ;~ 18ED:22C0

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_29704: 	goto loc_29704;
        case m2c::kloc_29705: 	goto loc_29705;
        case m2c::kloc_29710: 	goto loc_29710;
        case m2c::kloc_2971a: 	goto loc_2971a;
        case m2c::kloc_29723: 	goto loc_29723;
        case m2c::kloc_2972a: 	goto loc_2972a;
        case m2c::kloc_29734: 	goto loc_29734;
        case m2c::kloc_2973d: 	goto loc_2973d;
        case m2c::kloc_29748: 	goto loc_29748;
        case m2c::kloc_2974d: 	goto loc_2974d;
        case m2c::kloc_29758: 	goto loc_29758;
        case m2c::kloc_29763: 	goto loc_29763;
        case m2c::kloc_2976b: 	goto loc_2976b;
        case m2c::kprint_int_as_string_maybe: 	goto print_int_as_string_maybe;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_29772(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_29772:
    _begin:
cs=0x18ed;eip=0x0022c2; 	X(MOV(word_45d1c, 0));	// 50445 mov     word_45D1C, 0 ;~ 18ED:22C2
cs=0x18ed;eip=0x0022c8; 	X(MOV(word_45d06, 0));	// 50446 mov     word_45D06, 0 ;~ 18ED:22C8
cs=0x18ed;eip=0x0022ce; 	X(MOV(idle_counter, 0));	// 50447 mov     idle_counter, 0 ;~ 18ED:22CE
cs=0x18ed;eip=0x0022d4; 	J(RETF(0));	// 50448 retf ;~ 18ED:22D4

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_29772: 	goto sub_29772;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool mouse_timer_sprite_unk(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mouse_timer_sprite_unk:
    _begin:
#undef var_6
#define var_6 -6
	// 50461 var_6           = word ptr -6 ;~ 18ED:22D6
#undef arg_0
#define arg_0 6
	// 50462 arg_0           = word ptr  6 ;~ 18ED:22D6
#undef arg_2
#define arg_2 8
	// 50463 arg_2           = word ptr  8 ;~ 18ED:22D6
#undef arg_4
#define arg_4 0x0A
	// 50464 arg_4           = word ptr  0Ah ;~ 18ED:22D6
#undef arg_6
#define arg_6 0x0C
	// 50465 arg_6           = word ptr  0Ch ;~ 18ED:22D6
#undef arg_8
#define arg_8 0x0E
	// 50466 arg_8           = word ptr  0Eh ;~ 18ED:22D6
#undef arg_a
#define arg_a 0x10
	// 50467 arg_A           = word ptr  10h ;~ 18ED:22D6
#undef arg_c
#define arg_c 0x12
	// 50468 arg_C           = word ptr  12h ;~ 18ED:22D6
cs=0x18ed;eip=0x0022d6; 	X(PUSH(bp));	// 50470 push    bp ;~ 18ED:22D6
cs=0x18ed;eip=0x0022d7; 	T(MOV(bp, sp));	// 50471 mov     bp, sp ;~ 18ED:22D7
cs=0x18ed;eip=0x0022d9; 	T(SUB(sp, 6));	// 50472 sub     sp, 6 ;~ 18ED:22D9
cs=0x18ed;eip=0x0022dc; 	X(PUSH(di));	// 50473 push    di ;~ 18ED:22DC
cs=0x18ed;eip=0x0022dd; 	X(PUSH(si));	// 50474 push    si ;~ 18ED:22DD
cs=0x18ed;eip=0x0022de; 	X(PUSH(cs));	// 50475 push    cs ;~ 18ED:22DE
cs=0x18ed;eip=0x0022df; 	J(CALL(timer_get_delta_alt,0));	// 50476 call    near ptr timer_get_delta_alt ;~ 18ED:22DF
cs=0x18ed;eip=0x0022e2; 	T(MOV(si, ax));	// 50477 mov     si, ax ;~ 18ED:22E2
cs=0x18ed;eip=0x0022e4; 	X(ADD(word_45d1c, si));	// 50478 add     word_45D1C, si ;~ 18ED:22E4
cs=0x18ed;eip=0x0022e8; 	J(JMP(loc_2979f));	// 50479 jmp     short loc_2979F ;~ 18ED:22E8
loc_2979a:
	// 7661 
cs=0x18ed;eip=0x0022ea; 	X(SUB(word_45d1c, 0x3C));	// 50483 sub     word_45D1C, 3Ch ; '<' ;~ 18ED:22EA
loc_2979f:
	// 7662 
cs=0x18ed;eip=0x0022ef; 	T(CMP(word_45d1c, 0x3C));	// 50486 cmp     word_45D1C, 3Ch ; '<' ;~ 18ED:22EF
cs=0x18ed;eip=0x0022f4; 	J(JG(loc_2979a));	// 50487 jg      short loc_2979A ;~ 18ED:22F4
cs=0x18ed;eip=0x0022f6; 	T(CMP(word_45d1c, 0x1E));	// 50488 cmp     word_45D1C, 1Eh ;~ 18ED:22F6
cs=0x18ed;eip=0x0022fb; 	J(JLE(loc_297b2));	// 50489 jle     short loc_297B2 ;~ 18ED:22FB
cs=0x18ed;eip=0x0022fd; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_a))));	// 50490 mov     di, [bp+arg_A] ;~ 18ED:22FD
cs=0x18ed;eip=0x002300; 	J(JMP(loc_297b5));	// 50491 jmp     short loc_297B5 ;~ 18ED:2300
loc_297b2:
	// 7663 
cs=0x18ed;eip=0x002302; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_c))));	// 50495 mov     di, [bp+arg_C] ;~ 18ED:2302
loc_297b5:
	// 7664 
cs=0x18ed;eip=0x002305; 	T(CMP(word_45d06, di));	// 50498 cmp     word_45D06, di ;~ 18ED:2305
cs=0x18ed;eip=0x002309; 	J(JZ(loc_297f4));	// 50499 jz      short loc_297F4 ;~ 18ED:2309
cs=0x18ed;eip=0x00230b; 	X(MOV(word_45d06, di));	// 50500 mov     word_45D06, di ;~ 18ED:230B
cs=0x18ed;eip=0x00230f; 	X(PUSH(cs));	// 50501 push    cs ;~ 18ED:230F
cs=0x18ed;eip=0x002310; 	J(CALL(mouse_draw_opaque_check,0));	// 50502 call    near ptr mouse_draw_opaque_check ;~ 18ED:2310
cs=0x18ed;eip=0x002313; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 50503 mov     ax, [bp+arg_0] ;~ 18ED:2313
cs=0x18ed;eip=0x002316; 	T(SHL(ax, 1));	// 50504 shl     ax, 1 ;~ 18ED:2316
cs=0x18ed;eip=0x002318; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 50505 mov     [bp+var_6], ax ;~ 18ED:2318
cs=0x18ed;eip=0x00231b; 	X(PUSH(di));	// 50506 push    di ;~ 18ED:231B
cs=0x18ed;eip=0x00231c; 	T(MOV(bx, ax));	// 50507 mov     bx, ax ;~ 18ED:231C
cs=0x18ed;eip=0x00231e; 	T(ADD(bx, *(dw*)(raddr(ss,bp+arg_8))));	// 50508 add     bx, [bp+arg_8] ;~ 18ED:231E
cs=0x18ed;eip=0x002321; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 50509 push    word ptr [bx] ;~ 18ED:2321
cs=0x18ed;eip=0x002323; 	T(MOV(bx, ax));	// 50510 mov     bx, ax ;~ 18ED:2323
cs=0x18ed;eip=0x002325; 	T(ADD(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 50511 add     bx, [bp+arg_4] ;~ 18ED:2325
cs=0x18ed;eip=0x002328; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 50512 push    word ptr [bx] ;~ 18ED:2328
cs=0x18ed;eip=0x00232a; 	T(MOV(bx, ax));	// 50513 mov     bx, ax ;~ 18ED:232A
cs=0x18ed;eip=0x00232c; 	T(ADD(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 50514 add     bx, [bp+arg_6] ;~ 18ED:232C
cs=0x18ed;eip=0x00232f; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 50515 push    word ptr [bx] ;~ 18ED:232F
cs=0x18ed;eip=0x002331; 	T(MOV(bx, ax));	// 50516 mov     bx, ax ;~ 18ED:2331
cs=0x18ed;eip=0x002333; 	T(ADD(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 50517 add     bx, [bp+arg_2] ;~ 18ED:2333
cs=0x18ed;eip=0x002336; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 50518 push    word ptr [bx] ;~ 18ED:2336
cs=0x18ed;eip=0x002338; 	J(CALLF(sprite_1_unk4,0));	// 50519 call    sprite_1_unk4 ;~ 18ED:2338
cs=0x18ed;eip=0x00233d; 	T(ADD(sp, 0x0A));	// 50520 add     sp, 0Ah ;~ 18ED:233D
cs=0x18ed;eip=0x002340; 	X(PUSH(cs));	// 50521 push    cs ;~ 18ED:2340
cs=0x18ed;eip=0x002341; 	J(CALL(mouse_draw_transparent_check,0));	// 50522 call    near ptr mouse_draw_transparent_check ;~ 18ED:2341
loc_297f4:
	// 7665 
cs=0x18ed;eip=0x002344; 	T(MOV(ax, si));	// 50525 mov     ax, si ;~ 18ED:2344
cs=0x18ed;eip=0x002346; 	X(POP(si));	// 50526 pop     si ;~ 18ED:2346
cs=0x18ed;eip=0x002347; 	X(POP(di));	// 50527 pop     di ;~ 18ED:2347
cs=0x18ed;eip=0x002348; 	T(MOV(sp, bp));	// 50528 mov     sp, bp ;~ 18ED:2348
cs=0x18ed;eip=0x00234a; 	X(POP(bp));	// 50529 pop     bp ;~ 18ED:234A
cs=0x18ed;eip=0x00234b; 	J(RETF(0));	// 50530 retf ;~ 18ED:234B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_2979a: 	goto loc_2979a;
        case m2c::kloc_2979f: 	goto loc_2979f;
        case m2c::kloc_297b2: 	goto loc_297b2;
        case m2c::kloc_297b5: 	goto loc_297b5;
        case m2c::kloc_297f4: 	goto loc_297f4;
        case m2c::kmouse_timer_sprite_unk: 	goto mouse_timer_sprite_unk;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool file_load_audiores(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    file_load_audiores:
    _begin:
#undef var_4
#define var_4 -4
	// 50542 var_4           = word ptr -4 ;~ 18ED:234C
#undef var_2
#define var_2 -2
	// 50543 var_2           = word ptr -2 ;~ 18ED:234C
#undef arg_0
#define arg_0 6
	// 50544 arg_0           = word ptr  6 ;~ 18ED:234C
#undef arg_2
#define arg_2 8
	// 50545 arg_2           = word ptr  8 ;~ 18ED:234C
#undef arg_4
#define arg_4 0x0A
	// 50546 arg_4           = word ptr  0Ah ;~ 18ED:234C
cs=0x18ed;eip=0x00234c; 	X(PUSH(bp));	// 50548 push    bp ;~ 18ED:234C
cs=0x18ed;eip=0x00234d; 	T(MOV(bp, sp));	// 50549 mov     bp, sp ;~ 18ED:234D
cs=0x18ed;eip=0x00234f; 	T(SUB(sp, 4));	// 50550 sub     sp, 4 ;~ 18ED:234F
cs=0x18ed;eip=0x002352; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 50551 push    [bp+arg_2]      ; char * ;~ 18ED:2352
cs=0x18ed;eip=0x002355; 	T(MOV(ax, 5));	// 50552 mov     ax, 5 ;~ 18ED:2355
cs=0x18ed;eip=0x002358; 	X(PUSH(ax));	// 50553 push    ax              ; int ;~ 18ED:2358
cs=0x18ed;eip=0x002359; 	X(PUSH(cs));	// 50554 push    cs ;~ 18ED:2359
cs=0x18ed;eip=0x00235a; 	J(CALL(file_load_resource,0));	// 50555 call    near ptr file_load_resource ;~ 18ED:235A
cs=0x18ed;eip=0x00235d; 	T(ADD(sp, 4));	// 50556 add     sp, 4 ;~ 18ED:235D
cs=0x18ed;eip=0x002360; 	X(MOV(voicefileptr, ax));	// 50557 mov     voicefileptr, ax ;~ 18ED:2360
cs=0x18ed;eip=0x002363; 	X(MOV(word_44a7e, dx));	// 50558 mov     word_44A7E, dx ;~ 18ED:2363
cs=0x18ed;eip=0x002367; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 50559 push    [bp+arg_0]      ; char * ;~ 18ED:2367
cs=0x18ed;eip=0x00236a; 	T(MOV(ax, 4));	// 50560 mov     ax, 4 ;~ 18ED:236A
cs=0x18ed;eip=0x00236d; 	X(PUSH(ax));	// 50561 push    ax              ; int ;~ 18ED:236D
cs=0x18ed;eip=0x00236e; 	X(PUSH(cs));	// 50562 push    cs ;~ 18ED:236E
cs=0x18ed;eip=0x00236f; 	J(CALL(file_load_resource,0));	// 50563 call    near ptr file_load_resource ;~ 18ED:236F
cs=0x18ed;eip=0x002372; 	T(ADD(sp, 4));	// 50564 add     sp, 4 ;~ 18ED:2372
cs=0x18ed;eip=0x002375; 	X(MOV(songfileptr, ax));	// 50565 mov     songfileptr, ax ;~ 18ED:2375
cs=0x18ed;eip=0x002378; 	X(MOV(word_44362, dx));	// 50566 mov     word_44362, dx ;~ 18ED:2378
cs=0x18ed;eip=0x00237c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 50567 push    [bp+arg_4]      ; arg_4 is a string, e.g "TITL" ;~ 18ED:237C
cs=0x18ed;eip=0x00237f; 	X(PUSH(word_44a7e));	// 50568 push    word_44A7E ;~ 18ED:237F
cs=0x18ed;eip=0x002383; 	X(PUSH(voicefileptr));	// 50569 push    voicefileptr ;~ 18ED:2383
cs=0x18ed;eip=0x002387; 	X(PUSH(dx));	// 50570 push    dx ;~ 18ED:2387
cs=0x18ed;eip=0x002388; 	X(PUSH(ax));	// 50571 push    ax ;~ 18ED:2388
cs=0x18ed;eip=0x002389; 	J(CALLF(init_audio_resources,0));	// 50572 call    init_audio_resources ;~ 18ED:2389
cs=0x18ed;eip=0x00238e; 	T(ADD(sp, 0x0A));	// 50573 add     sp, 0Ah ;~ 18ED:238E
cs=0x18ed;eip=0x002391; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 50574 mov     [bp+var_4], ax ;~ 18ED:2391
cs=0x18ed;eip=0x002394; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 50575 mov     [bp+var_2], dx ;~ 18ED:2394
cs=0x18ed;eip=0x002397; 	X(PUSH(dx));	// 50576 push    dx ;~ 18ED:2397
cs=0x18ed;eip=0x002398; 	X(PUSH(ax));	// 50577 push    ax ;~ 18ED:2398
cs=0x18ed;eip=0x002399; 	J(CALLF(load_audio_finalize,0));	// 50578 call    load_audio_finalize ;~ 18ED:2399
cs=0x18ed;eip=0x00239e; 	X(MOV(is_audioloaded, 1));	// 50579 mov     is_audioloaded, 1 ;~ 18ED:239E
cs=0x18ed;eip=0x0023a3; 	T(MOV(sp, bp));	// 50580 mov     sp, bp ;~ 18ED:23A3
cs=0x18ed;eip=0x0023a5; 	X(POP(bp));	// 50581 pop     bp ;~ 18ED:23A5
cs=0x18ed;eip=0x0023a6; 	J(RETF(0));	// 50582 retf ;~ 18ED:23A6

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kfile_load_audiores: 	goto file_load_audiores;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool audio_unload(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    audio_unload:
    _begin:
cs=0x18ed;eip=0x0023a8; 	T(MOV(ax, 2));	// 50593 mov     ax, 2 ;~ 18ED:23A8
cs=0x18ed;eip=0x0023ab; 	X(PUSH(ax));	// 50594 push    ax ;~ 18ED:23AB
cs=0x18ed;eip=0x0023ac; 	J(CALLF(audio_driver_func3f,0));	// 50595 call    audio_driver_func3F ;~ 18ED:23AC
cs=0x18ed;eip=0x0023b1; 	T(ADD(sp, 2));	// 50596 add     sp, 2 ;~ 18ED:23B1
cs=0x18ed;eip=0x0023b4; 	X(PUSH(word_44362));	// 50597 push    word_44362 ;~ 18ED:23B4
cs=0x18ed;eip=0x0023b8; 	X(PUSH(songfileptr));	// 50598 push    songfileptr ;~ 18ED:23B8
cs=0x18ed;eip=0x0023bc; 	J(CALLF(mmgr_free,0));	// 50599 call    mmgr_free ;~ 18ED:23BC
cs=0x18ed;eip=0x0023c1; 	T(ADD(sp, 4));	// 50600 add     sp, 4 ;~ 18ED:23C1
cs=0x18ed;eip=0x0023c4; 	X(PUSH(word_44a7e));	// 50601 push    word_44A7E ;~ 18ED:23C4
cs=0x18ed;eip=0x0023c8; 	X(PUSH(voicefileptr));	// 50602 push    voicefileptr ;~ 18ED:23C8
cs=0x18ed;eip=0x0023cc; 	J(CALLF(mmgr_free,0));	// 50603 call    mmgr_free ;~ 18ED:23CC
cs=0x18ed;eip=0x0023d1; 	T(ADD(sp, 4));	// 50604 add     sp, 4 ;~ 18ED:23D1
cs=0x18ed;eip=0x0023d4; 	X(MOV(is_audioloaded, 0));	// 50605 mov     is_audioloaded, 0 ;~ 18ED:23D4
cs=0x18ed;eip=0x0023d9; 	J(RETF(0));	// 50606 retf ;~ 18ED:23D9

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kaudio_unload: 	goto audio_unload;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool font_set_fontdef2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    font_set_fontdef2:
    _begin:
#undef arg_0
#define arg_0 6
	// 50617 arg_0           = dword ptr  6 ;~ 18ED:23DA
cs=0x18ed;eip=0x0023da; 	X(PUSH(bp));	// 50619 push    bp ;~ 18ED:23DA
cs=0x18ed;eip=0x0023db; 	T(MOV(bp, sp));	// 50620 mov     bp, sp ;~ 18ED:23DB
cs=0x18ed;eip=0x0023dd; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 50621 push    word ptr [bp+arg_0+2] ;~ 18ED:23DD
cs=0x18ed;eip=0x0023e0; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 50622 push    word ptr [bp+arg_0] ;~ 18ED:23E0
cs=0x18ed;eip=0x0023e3; 	J(CALLF(set_fontdefseg,0));	// 50623 call    set_fontdefseg ;~ 18ED:23E3
cs=0x18ed;eip=0x0023e8; 	T(ADD(sp, 4));	// 50624 add     sp, 4 ;~ 18ED:23E8
cs=0x18ed;eip=0x0023eb; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 50625 les     bx, [bp+arg_0] ;~ 18ED:23EB
cs=0x18ed;eip=0x0023ee; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E))));	// 50626 mov     ax, es:[bx+0Eh] ;~ 18ED:23EE
cs=0x18ed;eip=0x0023f2; 	X(MOV(fontdef_unk_0e, ax));	// 50627 mov     fontdef_unk_0E, ax ;~ 18ED:23F2
cs=0x18ed;eip=0x0023f5; 	X(POP(bp));	// 50628 pop     bp ;~ 18ED:23F5
cs=0x18ed;eip=0x0023f6; 	J(RETF(0));	// 50629 retf ;~ 18ED:23F6

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kfont_set_fontdef2: 	goto font_set_fontdef2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool font_set_fontdef(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    font_set_fontdef:
    _begin:
cs=0x18ed;eip=0x0023f8; 	X(PUSH(word_454c8));	// 50640 push    word_454C8 ;~ 18ED:23F8
cs=0x18ed;eip=0x0023fc; 	X(PUSH(fontdefptr));	// 50641 push    fontdefptr ;~ 18ED:23FC
cs=0x18ed;eip=0x002400; 	X(PUSH(cs));	// 50642 push    cs ;~ 18ED:2400
cs=0x18ed;eip=0x002401; 	J(CALL(font_set_fontdef2,0));	// 50643 call    near ptr font_set_fontdef2 ;~ 18ED:2401
cs=0x18ed;eip=0x002404; 	T(ADD(sp, 4));	// 50644 add     sp, 4 ;~ 18ED:2404
cs=0x18ed;eip=0x002407; 	J(RETF(0));	// 50645 retf ;~ 18ED:2407

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kfont_set_fontdef: 	goto font_set_fontdef;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool format_frame_as_string(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    format_frame_as_string:
    _begin:
#undef var_16
#define var_16 -0x16
	// 50657 var_16          = word ptr -16h ;~ 18ED:2408
#undef var_12
#define var_12 -0x12
	// 50658 var_12          = byte ptr -12h ;~ 18ED:2408
#undef arg_0
#define arg_0 6
	// 50659 arg_0           = dword ptr  6 ;~ 18ED:2408
#undef arg_4
#define arg_4 0x0A
	// 50660 arg_4           = word ptr  0Ah ;~ 18ED:2408
cs=0x18ed;eip=0x002408; 	X(PUSH(bp));	// 50662 push    bp ;~ 18ED:2408
cs=0x18ed;eip=0x002409; 	T(MOV(bp, sp));	// 50663 mov     bp, sp ;~ 18ED:2409
cs=0x18ed;eip=0x00240b; 	T(SUB(sp, 0x18));	// 50664 sub     sp, 18h ;~ 18ED:240B
cs=0x18ed;eip=0x00240e; 	X(PUSH(di));	// 50665 push    di ;~ 18ED:240E
cs=0x18ed;eip=0x00240f; 	X(PUSH(si));	// 50666 push    si              ; char * ;~ 18ED:240F
cs=0x18ed;eip=0x002410; 	T(MOV(ax, 0x3C));	// 50667 mov     ax, 3Ch ; '<' ;~ 18ED:2410
cs=0x18ed;eip=0x002413; 	X(IMUL1_2(framespersec));	// 50668 imul    framespersec ;~ 18ED:2413
cs=0x18ed;eip=0x002417; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 50669 mov     [bp+var_16], ax ;~ 18ED:2417
cs=0x18ed;eip=0x00241a; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 50670 mov     ax, word ptr [bp+arg_0+2] ;~ 18ED:241A
cs=0x18ed;eip=0x00241d; 	T(SUB(dx, dx));	// 50671 sub     dx, dx ;~ 18ED:241D
cs=0x18ed;eip=0x00241f; 	X(DIV2(*(dw*)(raddr(ss,bp+var_16))));	// 50672 div     [bp+var_16] ;~ 18ED:241F
cs=0x18ed;eip=0x002422; 	T(MOV(si, ax));	// 50673 mov     si, ax ;~ 18ED:2422
cs=0x18ed;eip=0x002424; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_16))));	// 50674 mov     ax, [bp+var_16] ;~ 18ED:2424
cs=0x18ed;eip=0x002427; 	T(IMUL1_2(si));	// 50675 imul    si ;~ 18ED:2427
cs=0x18ed;eip=0x002429; 	X(SUB(*(dw*)((dw*)(raddr(ss,bp+arg_0+2))), ax));	// 50676 sub     word ptr [bp+arg_0+2], ax ;~ 18ED:2429
cs=0x18ed;eip=0x00242c; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 50677 mov     ax, word ptr [bp+arg_0+2] ;~ 18ED:242C
cs=0x18ed;eip=0x00242f; 	T(SUB(dx, dx));	// 50678 sub     dx, dx ;~ 18ED:242F
cs=0x18ed;eip=0x002431; 	X(DIV2(framespersec));	// 50679 div     framespersec ;~ 18ED:2431
cs=0x18ed;eip=0x002435; 	T(MOV(di, ax));	// 50680 mov     di, ax ;~ 18ED:2435
cs=0x18ed;eip=0x002437; 	T(MOV(ax, framespersec));	// 50681 mov     ax, framespersec ;~ 18ED:2437
cs=0x18ed;eip=0x00243a; 	T(IMUL1_2(di));	// 50682 imul    di ;~ 18ED:243A
cs=0x18ed;eip=0x00243c; 	X(SUB(*(dw*)((dw*)(raddr(ss,bp+arg_0+2))), ax));	// 50683 sub     word ptr [bp+arg_0+2], ax ;~ 18ED:243C
cs=0x18ed;eip=0x00243f; 	T(MOV(ax, 2));	// 50684 mov     ax, 2 ;~ 18ED:243F
cs=0x18ed;eip=0x002442; 	X(PUSH(ax));	// 50685 push    ax              ; int ;~ 18ED:2442
cs=0x18ed;eip=0x002443; 	T(SUB(ax, ax));	// 50686 sub     ax, ax ;~ 18ED:2443
cs=0x18ed;eip=0x002445; 	X(PUSH(ax));	// 50687 push    ax              ; int ;~ 18ED:2445
cs=0x18ed;eip=0x002446; 	X(PUSH(si));	// 50688 push    si ;~ 18ED:2446
cs=0x18ed;eip=0x002447; 	T(ax = bp+var_12);	// 50689 lea     ax, [bp+var_12] ;~ 18ED:2447
cs=0x18ed;eip=0x00244a; 	X(PUSH(ax));	// 50690 push    ax              ; char * ;~ 18ED:244A
cs=0x18ed;eip=0x00244b; 	X(PUSH(cs));	// 50691 push    cs ;~ 18ED:244B
cs=0x18ed;eip=0x00244c; 	J(CALL(print_int_as_string_maybe,0));	// 50692 call    near ptr print_int_as_string_maybe ;~ 18ED:244C
cs=0x18ed;eip=0x00244f; 	T(ADD(sp, 8));	// 50693 add     sp, 8 ;~ 18ED:244F
cs=0x18ed;eip=0x002452; 	T(ax = bp+var_12);	// 50694 lea     ax, [bp+var_12] ;~ 18ED:2452
cs=0x18ed;eip=0x002455; 	X(PUSH(ax));	// 50695 push    ax ;~ 18ED:2455
cs=0x18ed;eip=0x002456; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 50696 push    word ptr [bp+arg_0] ; char * ;~ 18ED:2456
cs=0x18ed;eip=0x002459; 	J(CALLF(_strcpy,0));	// 50697 call    _strcpy ;~ 18ED:2459
cs=0x18ed;eip=0x00245e; 	T(ADD(sp, 4));	// 50698 add     sp, 4 ;~ 18ED:245E
cs=0x18ed;eip=0x002461; 	T(MOV(ax, offset(dseg,asc_3ebd4)));	// 50699 mov     ax, offset asc_3EBD4 ; ":" ;~ 18ED:2461
cs=0x18ed;eip=0x002464; 	X(PUSH(ax));	// 50700 push    ax ;~ 18ED:2464
cs=0x18ed;eip=0x002465; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 50701 push    word ptr [bp+arg_0] ; char * ;~ 18ED:2465
cs=0x18ed;eip=0x002468; 	J(CALLF(_strcat,0));	// 50702 call    _strcat ;~ 18ED:2468
cs=0x18ed;eip=0x00246d; 	T(ADD(sp, 4));	// 50703 add     sp, 4 ;~ 18ED:246D
cs=0x18ed;eip=0x002470; 	T(MOV(ax, 2));	// 50704 mov     ax, 2 ;~ 18ED:2470
cs=0x18ed;eip=0x002473; 	X(PUSH(ax));	// 50705 push    ax              ; int ;~ 18ED:2473
cs=0x18ed;eip=0x002474; 	T(MOV(ax, 1));	// 50706 mov     ax, 1 ;~ 18ED:2474
cs=0x18ed;eip=0x002477; 	X(PUSH(ax));	// 50707 push    ax              ; int ;~ 18ED:2477
cs=0x18ed;eip=0x002478; 	X(PUSH(di));	// 50708 push    di ;~ 18ED:2478
cs=0x18ed;eip=0x002479; 	T(ax = bp+var_12);	// 50709 lea     ax, [bp+var_12] ;~ 18ED:2479
cs=0x18ed;eip=0x00247c; 	X(PUSH(ax));	// 50710 push    ax              ; char * ;~ 18ED:247C
cs=0x18ed;eip=0x00247d; 	X(PUSH(cs));	// 50711 push    cs ;~ 18ED:247D
cs=0x18ed;eip=0x00247e; 	J(CALL(print_int_as_string_maybe,0));	// 50712 call    near ptr print_int_as_string_maybe ;~ 18ED:247E
cs=0x18ed;eip=0x002481; 	T(ADD(sp, 8));	// 50713 add     sp, 8 ;~ 18ED:2481
cs=0x18ed;eip=0x002484; 	T(ax = bp+var_12);	// 50714 lea     ax, [bp+var_12] ;~ 18ED:2484
cs=0x18ed;eip=0x002487; 	X(PUSH(ax));	// 50715 push    ax ;~ 18ED:2487
cs=0x18ed;eip=0x002488; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 50716 push    word ptr [bp+arg_0] ; char * ;~ 18ED:2488
cs=0x18ed;eip=0x00248b; 	J(CALLF(_strcat,0));	// 50717 call    _strcat ;~ 18ED:248B
cs=0x18ed;eip=0x002490; 	T(ADD(sp, 4));	// 50718 add     sp, 4 ;~ 18ED:2490
cs=0x18ed;eip=0x002493; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0));	// 50719 cmp     [bp+arg_4], 0 ;~ 18ED:2493
cs=0x18ed;eip=0x002497; 	J(JZ(loc_29988));	// 50720 jz      short loc_29988 ;~ 18ED:2497
cs=0x18ed;eip=0x002499; 	T(MOV(ax, offset(dseg,a_)));	// 50721 mov     ax, offset a_   ; "." ;~ 18ED:2499
cs=0x18ed;eip=0x00249c; 	X(PUSH(ax));	// 50722 push    ax ;~ 18ED:249C
cs=0x18ed;eip=0x00249d; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 50723 push    word ptr [bp+arg_0] ; char * ;~ 18ED:249D
cs=0x18ed;eip=0x0024a0; 	J(CALLF(_strcat,0));	// 50724 call    _strcat ;~ 18ED:24A0
cs=0x18ed;eip=0x0024a5; 	T(ADD(sp, 4));	// 50725 add     sp, 4 ;~ 18ED:24A5
cs=0x18ed;eip=0x0024a8; 	T(MOV(ax, 2));	// 50726 mov     ax, 2 ;~ 18ED:24A8
cs=0x18ed;eip=0x0024ab; 	X(PUSH(ax));	// 50727 push    ax              ; int ;~ 18ED:24AB
cs=0x18ed;eip=0x0024ac; 	T(MOV(ax, 1));	// 50728 mov     ax, 1 ;~ 18ED:24AC
cs=0x18ed;eip=0x0024af; 	X(PUSH(ax));	// 50729 push    ax              ; int ;~ 18ED:24AF
cs=0x18ed;eip=0x0024b0; 	T(MOV(ax, 0x64));	// 50730 mov     ax, 64h ; 'd' ;~ 18ED:24B0
cs=0x18ed;eip=0x0024b3; 	T(CWD);	// 50731 cwd ;~ 18ED:24B3
cs=0x18ed;eip=0x0024b4; 	T(MOV(cx, framespersec));	// 50732 mov     cx, framespersec ;~ 18ED:24B4
cs=0x18ed;eip=0x0024b8; 	T(IDIV2(cx));	// 50733 idiv    cx ;~ 18ED:24B8
cs=0x18ed;eip=0x0024ba; 	X(MUL1_2(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 50734 mul     word ptr [bp+arg_0+2] ;~ 18ED:24BA
cs=0x18ed;eip=0x0024bd; 	X(PUSH(ax));	// 50735 push    ax ;~ 18ED:24BD
cs=0x18ed;eip=0x0024be; 	T(ax = bp+var_12);	// 50736 lea     ax, [bp+var_12] ;~ 18ED:24BE
cs=0x18ed;eip=0x0024c1; 	X(PUSH(ax));	// 50737 push    ax              ; char * ;~ 18ED:24C1
cs=0x18ed;eip=0x0024c2; 	X(PUSH(cs));	// 50738 push    cs ;~ 18ED:24C2
cs=0x18ed;eip=0x0024c3; 	J(CALL(print_int_as_string_maybe,0));	// 50739 call    near ptr print_int_as_string_maybe ;~ 18ED:24C3
cs=0x18ed;eip=0x0024c6; 	T(ADD(sp, 8));	// 50740 add     sp, 8 ;~ 18ED:24C6
cs=0x18ed;eip=0x0024c9; 	T(ax = bp+var_12);	// 50741 lea     ax, [bp+var_12] ;~ 18ED:24C9
cs=0x18ed;eip=0x0024cc; 	X(PUSH(ax));	// 50742 push    ax ;~ 18ED:24CC
cs=0x18ed;eip=0x0024cd; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 50743 push    word ptr [bp+arg_0] ; char * ;~ 18ED:24CD
cs=0x18ed;eip=0x0024d0; 	J(CALLF(_strcat,0));	// 50744 call    _strcat ;~ 18ED:24D0
cs=0x18ed;eip=0x0024d5; 	T(ADD(sp, 4));	// 50745 add     sp, 4 ;~ 18ED:24D5
loc_29988:
	// 7666 
cs=0x18ed;eip=0x0024d8; 	X(POP(si));	// 50748 pop     si ;~ 18ED:24D8
cs=0x18ed;eip=0x0024d9; 	X(POP(di));	// 50749 pop     di ;~ 18ED:24D9
cs=0x18ed;eip=0x0024da; 	T(MOV(sp, bp));	// 50750 mov     sp, bp ;~ 18ED:24DA
cs=0x18ed;eip=0x0024dc; 	X(POP(bp));	// 50751 pop     bp ;~ 18ED:24DC
cs=0x18ed;eip=0x0024dd; 	J(RETF(0));	// 50752 retf ;~ 18ED:24DD

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kformat_frame_as_string: 	goto format_frame_as_string;
        case m2c::kloc_29988: 	goto loc_29988;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool get_super_random(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    get_super_random:
    _begin:
#undef var_4
#define var_4 -4
	// 50763 var_4           = word ptr -4 ;~ 18ED:24DE
cs=0x18ed;eip=0x0024de; 	X(PUSH(bp));	// 50765 push    bp ;~ 18ED:24DE
cs=0x18ed;eip=0x0024df; 	T(MOV(bp, sp));	// 50766 mov     bp, sp ;~ 18ED:24DF
cs=0x18ed;eip=0x0024e1; 	T(SUB(sp, 4));	// 50767 sub     sp, 4 ;~ 18ED:24E1
cs=0x18ed;eip=0x0024e4; 	X(PUSH(di));	// 50768 push    di ;~ 18ED:24E4
cs=0x18ed;eip=0x0024e5; 	X(PUSH(si));	// 50769 push    si ;~ 18ED:24E5
cs=0x18ed;eip=0x0024e6; 	J(CALLF(_rand,0));	// 50770 call    _rand ;~ 18ED:24E6
cs=0x18ed;eip=0x0024eb; 	T(MOV(di, ax));	// 50771 mov     di, ax ;~ 18ED:24EB
cs=0x18ed;eip=0x0024ed; 	J(CALLF(get_kevinrandom,0));	// 50772 call    get_kevinrandom ;~ 18ED:24ED
cs=0x18ed;eip=0x0024f2; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 50773 mov     [bp+var_4], ax ;~ 18ED:24F2
cs=0x18ed;eip=0x0024f5; 	J(CALLF(timer_get_counter,0));	// 50774 call    timer_get_counter ;~ 18ED:24F5
cs=0x18ed;eip=0x0024fa; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_4))));	// 50775 add     ax, [bp+var_4] ;~ 18ED:24FA
cs=0x18ed;eip=0x0024fd; 	T(ADD(ax, di));	// 50776 add     ax, di ;~ 18ED:24FD
cs=0x18ed;eip=0x0024ff; 	T(ADD(ax, gstate_frame));	// 50777 add     ax, gState_frame ;~ 18ED:24FF
cs=0x18ed;eip=0x002503; 	T(MOV(si, ax));	// 50778 mov     si, ax ;~ 18ED:2503
cs=0x18ed;eip=0x002505; 	T(OR(si, si));	// 50779 or      si, si ;~ 18ED:2505
cs=0x18ed;eip=0x002507; 	J(JGE(loc_299c2));	// 50780 jge     short loc_299C2 ;~ 18ED:2507
cs=0x18ed;eip=0x002509; 	T(NEG(ax));	// 50781 neg     ax ;~ 18ED:2509
cs=0x18ed;eip=0x00250b; 	X(POP(si));	// 50782 pop     si ;~ 18ED:250B
cs=0x18ed;eip=0x00250c; 	X(POP(di));	// 50783 pop     di ;~ 18ED:250C
cs=0x18ed;eip=0x00250d; 	T(MOV(sp, bp));	// 50784 mov     sp, bp ;~ 18ED:250D
cs=0x18ed;eip=0x00250f; 	X(POP(bp));	// 50785 pop     bp ;~ 18ED:250F
cs=0x18ed;eip=0x002510; 	J(RETF(0));	// 50786 retf ;~ 18ED:2510
loc_299c2:
	// 7667 
cs=0x18ed;eip=0x002512; 	T(MOV(ax, si));	// 50791 mov     ax, si ;~ 18ED:2512
cs=0x18ed;eip=0x002514; 	X(POP(si));	// 50792 pop     si ;~ 18ED:2514
cs=0x18ed;eip=0x002515; 	X(POP(di));	// 50793 pop     di ;~ 18ED:2515
cs=0x18ed;eip=0x002516; 	T(MOV(sp, bp));	// 50794 mov     sp, bp ;~ 18ED:2516
cs=0x18ed;eip=0x002518; 	X(POP(bp));	// 50795 pop     bp ;~ 18ED:2518
cs=0x18ed;eip=0x002519; 	J(RETF(0));	// 50796 retf ;~ 18ED:2519

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kget_super_random: 	goto get_super_random;
        case m2c::kloc_299c2: 	goto loc_299c2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool file_load_resource(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    file_load_resource:
    _begin:
#undef var_4
#define var_4 -4
	// 50808 var_4           = word ptr -4 ;~ 18ED:251A
#undef var_2
#define var_2 -2
	// 50809 var_2           = word ptr -2 ;~ 18ED:251A
#undef arg_0
#define arg_0 6
	// 50810 arg_0           = word ptr  6 ;~ 18ED:251A
#undef arg_2
#define arg_2 8
	// 50811 arg_2           = dword ptr  8 ;~ 18ED:251A
cs=0x18ed;eip=0x00251a; 	X(PUSH(bp));	// 50813 push    bp ;~ 18ED:251A
cs=0x18ed;eip=0x00251b; 	T(MOV(bp, sp));	// 50814 mov     bp, sp ;~ 18ED:251B
cs=0x18ed;eip=0x00251d; 	T(SUB(sp, 4));	// 50815 sub     sp, 4 ;~ 18ED:251D
loc_299d0:
	// 7668 
cs=0x18ed;eip=0x002520; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 50818 mov     ax, [bp+arg_0] ;~ 18ED:2520
cs=0x18ed;eip=0x002523; 	T(CMP(ax, 8));	// 50819 cmp     ax, 8           ; switch 9 cases ;~ 18ED:2523
cs=0x18ed;eip=0x002526; 	J(JBE(loc_299db));	// 50820 jbe     short loc_299DB ;~ 18ED:2526
cs=0x18ed;eip=0x002528; 	J(JMP(def_299de));	// 50821 jmp     def_299DE       ; jumptable 000299DE default case ;~ 18ED:2528
loc_299db:
	// 7669 
cs=0x18ed;eip=0x00252b; 	T(ADD(ax, ax));	// 50825 add     ax, ax ;~ 18ED:252B
cs=0x18ed;eip=0x00252d; 	T(XCHG(ax, bx));	// 50826 xchg    ax, bx ;~ 18ED:252D
	cs=seg_offset(seg008);
cs=0x18ed;eip=0x00252e; __disp=*(dw*)(((db*)&jpt_299de)+bx);
	J(return __dispatch_call(__disp, _state););	// 50827 jmp     cs:jpt_299DE[bx] ; switch jump ;~ 18ED:252E
loc_299e4:
	// 7670 
cs=0x18ed;eip=0x002534; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 50833 push    word ptr [bp+arg_2] ; jumptable 000299DE case 0 ;~ 18ED:2534
cs=0x18ed;eip=0x002537; 	J(CALLF(file_load_binary_nofatal,0));	// 50834 call    file_load_binary_nofatal ;~ 18ED:2537
loc_299ec:
	// 7671 
cs=0x18ed;eip=0x00253c; 	T(ADD(sp, 2));	// 50838 add     sp, 2 ;~ 18ED:253C
cs=0x18ed;eip=0x00253f; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 50839 mov     [bp+var_4], ax ;~ 18ED:253F
cs=0x18ed;eip=0x002542; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 50840 mov     [bp+var_2], dx ;~ 18ED:2542
cs=0x18ed;eip=0x002545; 	J(JMP(def_299de));	// 50841 jmp     short def_299DE ; jumptable 000299DE default case ;~ 18ED:2545
loc_299f8:
	// 7672 
cs=0x18ed;eip=0x002548; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 50847 push    word ptr [bp+arg_2] ; jumptable 000299DE case 1 ;~ 18ED:2548
cs=0x18ed;eip=0x00254b; 	J(CALLF(file_load_binary_nofatal,0));	// 50848 call    file_load_binary_nofatal ;~ 18ED:254B
loc_29a00:
	// 7673 
cs=0x18ed;eip=0x002550; 	T(ADD(sp, 2));	// 50851 add     sp, 2 ;~ 18ED:2550
cs=0x18ed;eip=0x002553; 	T(MOV(sp, bp));	// 50852 mov     sp, bp ;~ 18ED:2553
cs=0x18ed;eip=0x002555; 	X(POP(bp));	// 50853 pop     bp ;~ 18ED:2555
cs=0x18ed;eip=0x002556; 	J(RETF(0));	// 50854 retf ;~ 18ED:2556
loc_29a08:
	// 7674 
cs=0x18ed;eip=0x002558; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 50860 push    word ptr [bp+arg_2] ; jumptable 000299DE case 7 ;~ 18ED:2558
cs=0x18ed;eip=0x00255b; 	J(CALLF(file_decomp_nofatal,0));	// 50861 call    file_decomp_nofatal ;~ 18ED:255B
cs=0x18ed;eip=0x002560; 	J(JMP(loc_29a00));	// 50862 jmp     short loc_29A00 ;~ 18ED:2560
loc_29a12:
	// 7675 
cs=0x18ed;eip=0x002562; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 50867 push    word ptr [bp+arg_2] ; jumptable 000299DE case 2 ;~ 18ED:2562
cs=0x18ed;eip=0x002565; 	J(CALLF(file_load_shape2d_nofatal_thunk,0));	// 50868 call    file_load_shape2d_nofatal_thunk ;~ 18ED:2565
cs=0x18ed;eip=0x00256a; 	J(JMP(loc_299ec));	// 50869 jmp     short loc_299EC ;~ 18ED:256A
loc_29a1c:
	// 7676 
cs=0x18ed;eip=0x00256c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 50874 push    word ptr [bp+arg_2] ; jumptable 000299DE case 3 ;~ 18ED:256C
cs=0x18ed;eip=0x00256f; 	J(CALLF(file_load_shape2d_res_nofatal_thunk,0));	// 50875 call    file_load_shape2d_res_nofatal_thunk ;~ 18ED:256F
cs=0x18ed;eip=0x002574; 	J(JMP(loc_299ec));	// 50876 jmp     short loc_299EC ;~ 18ED:2574
loc_29a26:
	// 7677 
cs=0x18ed;eip=0x002576; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 50881 push    word ptr [bp+arg_2] ; char * ;~ 18ED:2576
cs=0x18ed;eip=0x002579; 	J(CALLF(load_song_file,0));	// 50882 call    load_song_file ;~ 18ED:2579
cs=0x18ed;eip=0x00257e; 	J(JMP(loc_299ec));	// 50883 jmp     short loc_299EC ;~ 18ED:257E
loc_29a30:
	// 7678 
cs=0x18ed;eip=0x002580; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 50888 push    word ptr [bp+arg_2] ; char * ;~ 18ED:2580
cs=0x18ed;eip=0x002583; 	J(CALLF(load_voice_file,0));	// 50889 call    load_voice_file ;~ 18ED:2583
cs=0x18ed;eip=0x002588; 	J(JMP(loc_299ec));	// 50890 jmp     short loc_299EC ;~ 18ED:2588
loc_29a3a:
	// 7679 
cs=0x18ed;eip=0x00258a; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 50895 push    word ptr [bp+arg_2] ; char * ;~ 18ED:258A
cs=0x18ed;eip=0x00258d; 	J(CALLF(load_sfx_file,0));	// 50896 call    load_sfx_file ;~ 18ED:258D
cs=0x18ed;eip=0x002592; 	J(JMP(loc_299ec));	// 50897 jmp     short loc_299EC ;~ 18ED:2592
loc_29a44:
	// 7680 
cs=0x18ed;eip=0x002594; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 50902 push    word ptr [bp+arg_2] ; jumptable 000299DE case 8 ;~ 18ED:2594
cs=0x18ed;eip=0x002597; 	J(CALLF(file_load_shape2d_nofatal2,0));	// 50903 call    file_load_shape2d_nofatal2 ;~ 18ED:2597
cs=0x18ed;eip=0x00259c; 	J(JMP(loc_299ec));	// 50904 jmp     short loc_299EC ;~ 18ED:259C
def_299de:
	// 7681 
cs=0x18ed;eip=0x0025b0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 50919 mov     ax, [bp+var_4]  ; jumptable 000299DE default case ;~ 18ED:25B0
cs=0x18ed;eip=0x0025b3; 	T(OR(ax, *(dw*)(raddr(ss,bp+var_2))));	// 50920 or      ax, [bp+var_2] ;~ 18ED:25B3
cs=0x18ed;eip=0x0025b6; 	J(JZ(loc_29a72));	// 50921 jz      short loc_29A72 ;~ 18ED:25B6
cs=0x18ed;eip=0x0025b8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 50922 mov     ax, [bp+var_4] ;~ 18ED:25B8
cs=0x18ed;eip=0x0025bb; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 50923 mov     dx, [bp+var_2] ;~ 18ED:25BB
cs=0x18ed;eip=0x0025be; 	T(MOV(sp, bp));	// 50924 mov     sp, bp ;~ 18ED:25BE
cs=0x18ed;eip=0x0025c0; 	X(POP(bp));	// 50925 pop     bp ;~ 18ED:25C0
cs=0x18ed;eip=0x0025c1; 	J(RETF(0));	// 50926 retf ;~ 18ED:25C1
loc_29a72:
	// 7682 
cs=0x18ed;eip=0x0025c2; 	X(PUSH(cs));	// 50930 push    cs ;~ 18ED:25C2
cs=0x18ed;eip=0x0025c3; 	J(CALL(do_dea_textres,0));	// 50931 call    near ptr do_dea_textres ;~ 18ED:25C3
cs=0x18ed;eip=0x0025c6; 	T(CMP(ax, 2));	// 50932 cmp     ax, 2 ;~ 18ED:25C6
cs=0x18ed;eip=0x0025c9; 	J(JZ(loc_29a7e));	// 50933 jz      short loc_29A7E ;~ 18ED:25C9
cs=0x18ed;eip=0x0025cb; 	J(JMP(loc_299d0));	// 50934 jmp     loc_299D0 ;~ 18ED:25CB
loc_29a7e:
	// 7683 
cs=0x18ed;eip=0x0025ce; 	T(SUB(ax, ax));	// 50938 sub     ax, ax ;~ 18ED:25CE
cs=0x18ed;eip=0x0025d0; 	T(CWD);	// 50939 cwd ;~ 18ED:25D0
cs=0x18ed;eip=0x0025d1; 	T(MOV(sp, bp));	// 50940 mov     sp, bp ;~ 18ED:25D1
cs=0x18ed;eip=0x0025d3; 	X(POP(bp));	// 50941 pop     bp ;~ 18ED:25D3
cs=0x18ed;eip=0x0025d4; 	J(RETF(0));	// 50942 retf ;~ 18ED:25D4

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kdef_299de: 	goto def_299de;
        case m2c::kfile_load_resource: 	goto file_load_resource;
        case m2c::kloc_299d0: 	goto loc_299d0;
        case m2c::kloc_299db: 	goto loc_299db;
        case m2c::kloc_299e4: 	goto loc_299e4;
        case m2c::kloc_299ec: 	goto loc_299ec;
        case m2c::kloc_299f8: 	goto loc_299f8;
        case m2c::kloc_29a00: 	goto loc_29a00;
        case m2c::kloc_29a08: 	goto loc_29a08;
        case m2c::kloc_29a12: 	goto loc_29a12;
        case m2c::kloc_29a1c: 	goto loc_29a1c;
        case m2c::kloc_29a26: 	goto loc_29a26;
        case m2c::kloc_29a30: 	goto loc_29a30;
        case m2c::kloc_29a3a: 	goto loc_29a3a;
        case m2c::kloc_29a44: 	goto loc_29a44;
        case m2c::kloc_29a72: 	goto loc_29a72;
        case m2c::kloc_29a7e: 	goto loc_29a7e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_29a86(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_29a86:
    _begin:
#undef var_4
#define var_4 -4
	// 50954 var_4           = word ptr -4 ;~ 18ED:25D6
#undef var_2
#define var_2 -2
	// 50955 var_2           = word ptr -2 ;~ 18ED:25D6
#undef arg_0
#define arg_0 6
	// 50956 arg_0           = word ptr  6 ;~ 18ED:25D6
#undef arg_2
#define arg_2 8
	// 50957 arg_2           = word ptr  8 ;~ 18ED:25D6
#undef arg_4
#define arg_4 0x0A
	// 50958 arg_4           = word ptr  0Ah ;~ 18ED:25D6
#undef arg_6
#define arg_6 0x0C
	// 50959 arg_6           = word ptr  0Ch ;~ 18ED:25D6
cs=0x18ed;eip=0x0025d6; 	X(PUSH(bp));	// 50961 push    bp ;~ 18ED:25D6
cs=0x18ed;eip=0x0025d7; 	T(MOV(bp, sp));	// 50962 mov     bp, sp ;~ 18ED:25D7
cs=0x18ed;eip=0x0025d9; 	T(SUB(sp, 4));	// 50963 sub     sp, 4 ;~ 18ED:25D9
loc_29a8c:
	// 7684 
cs=0x18ed;eip=0x0025dc; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 50966 mov     ax, [bp+arg_0] ;~ 18ED:25DC
cs=0x18ed;eip=0x0025df; 	T(CMP(ax, 9));	// 50967 cmp     ax, 9 ;~ 18ED:25DF
cs=0x18ed;eip=0x0025e2; 	J(JZ(loc_29a9c));	// 50968 jz      short loc_29A9C ;~ 18ED:25E2
cs=0x18ed;eip=0x0025e4; 	T(CMP(ax, 0x0A));	// 50969 cmp     ax, 0Ah ;~ 18ED:25E4
cs=0x18ed;eip=0x0025e7; 	J(JZ(loc_29ac6));	// 50970 jz      short loc_29AC6 ;~ 18ED:25E7
cs=0x18ed;eip=0x0025e9; 	J(JMP(loc_29ab3));	// 50971 jmp     short loc_29AB3 ;~ 18ED:25E9
loc_29a9c:
	// 7685 
cs=0x18ed;eip=0x0025ec; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 50976 push    [bp+arg_6] ;~ 18ED:25EC
cs=0x18ed;eip=0x0025ef; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 50977 push    [bp+arg_4] ;~ 18ED:25EF
cs=0x18ed;eip=0x0025f2; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 50978 push    [bp+arg_2] ;~ 18ED:25F2
cs=0x18ed;eip=0x0025f5; 	J(CALLF(file_read_nofatal,0));	// 50979 call    file_read_nofatal ;~ 18ED:25F5
cs=0x18ed;eip=0x0025fa; 	T(ADD(sp, 6));	// 50980 add     sp, 6 ;~ 18ED:25FA
cs=0x18ed;eip=0x0025fd; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 50981 mov     [bp+var_4], ax ;~ 18ED:25FD
cs=0x18ed;eip=0x002600; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 50982 mov     [bp+var_2], dx ;~ 18ED:2600
loc_29ab3:
	// 7686 
cs=0x18ed;eip=0x002603; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 50985 mov     ax, [bp+var_4] ;~ 18ED:2603
cs=0x18ed;eip=0x002606; 	T(OR(ax, *(dw*)(raddr(ss,bp+var_2))));	// 50986 or      ax, [bp+var_2] ;~ 18ED:2606
cs=0x18ed;eip=0x002609; 	J(JZ(loc_29adc));	// 50987 jz      short loc_29ADC ;~ 18ED:2609
cs=0x18ed;eip=0x00260b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 50988 mov     ax, [bp+var_4] ;~ 18ED:260B
cs=0x18ed;eip=0x00260e; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 50989 mov     dx, [bp+var_2] ;~ 18ED:260E
cs=0x18ed;eip=0x002611; 	T(MOV(sp, bp));	// 50990 mov     sp, bp ;~ 18ED:2611
cs=0x18ed;eip=0x002613; 	X(POP(bp));	// 50991 pop     bp ;~ 18ED:2613
cs=0x18ed;eip=0x002614; 	J(RETF(0));	// 50992 retf ;~ 18ED:2614
loc_29ac6:
	// 7687 
cs=0x18ed;eip=0x002616; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 50997 push    [bp+arg_6] ;~ 18ED:2616
cs=0x18ed;eip=0x002619; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 50998 push    [bp+arg_4] ;~ 18ED:2619
cs=0x18ed;eip=0x00261c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 50999 push    [bp+arg_2] ;~ 18ED:261C
cs=0x18ed;eip=0x00261f; 	J(CALLF(file_read_nofatal,0));	// 51000 call    file_read_nofatal ;~ 18ED:261F
cs=0x18ed;eip=0x002624; 	T(ADD(sp, 6));	// 51001 add     sp, 6 ;~ 18ED:2624
cs=0x18ed;eip=0x002627; 	T(MOV(sp, bp));	// 51002 mov     sp, bp ;~ 18ED:2627
cs=0x18ed;eip=0x002629; 	X(POP(bp));	// 51003 pop     bp ;~ 18ED:2629
cs=0x18ed;eip=0x00262a; 	J(RETF(0));	// 51004 retf ;~ 18ED:262A
loc_29adc:
	// 7688 
cs=0x18ed;eip=0x00262c; 	X(PUSH(cs));	// 51009 push    cs ;~ 18ED:262C
cs=0x18ed;eip=0x00262d; 	J(CALL(do_dea_textres,0));	// 51010 call    near ptr do_dea_textres ;~ 18ED:262D
cs=0x18ed;eip=0x002630; 	T(CMP(ax, 2));	// 51011 cmp     ax, 2 ;~ 18ED:2630
cs=0x18ed;eip=0x002633; 	J(JNZ(loc_29a8c));	// 51012 jnz     short loc_29A8C ;~ 18ED:2633
cs=0x18ed;eip=0x002635; 	T(SUB(ax, ax));	// 51013 sub     ax, ax ;~ 18ED:2635
cs=0x18ed;eip=0x002637; 	T(CWD);	// 51014 cwd ;~ 18ED:2637
cs=0x18ed;eip=0x002638; 	T(MOV(sp, bp));	// 51015 mov     sp, bp ;~ 18ED:2638
cs=0x18ed;eip=0x00263a; 	X(POP(bp));	// 51016 pop     bp ;~ 18ED:263A
cs=0x18ed;eip=0x00263b; 	J(RETF(0));	// 51017 retf ;~ 18ED:263B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_29a8c: 	goto loc_29a8c;
        case m2c::kloc_29a9c: 	goto loc_29a9c;
        case m2c::kloc_29ab3: 	goto loc_29ab3;
        case m2c::kloc_29ac6: 	goto loc_29ac6;
        case m2c::kloc_29adc: 	goto loc_29adc;
        case m2c::ksub_29a86: 	goto sub_29a86;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool input_push_status(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    input_push_status:
    _begin:
cs=0x18ed;eip=0x00263c; 	X(PUSH(si));	// 51026 push    si ;~ 18ED:263C
cs=0x18ed;eip=0x00263d; 	T(MOV(al, byte_3ebd8));	// 51027 mov     al, byte_3EBD8 ;~ 18ED:263D
cs=0x18ed;eip=0x002640; 	T(CBW);	// 51028 cbw ;~ 18ED:2640
cs=0x18ed;eip=0x002641; 	T(MOV(si, ax));	// 51029 mov     si, ax ;~ 18ED:2641
cs=0x18ed;eip=0x002643; 	T(MOV(al, byte_3b8f7));	// 51030 mov     al, byte_3B8F7 ;~ 18ED:2643
cs=0x18ed;eip=0x002646; 	X(MOV(*((&byte_45d0c)+si), al));	// 51031 mov     byte_45D0C[si], al ;~ 18ED:2646
cs=0x18ed;eip=0x00264a; 	T(MOV(al, kbormouse));	// 51032 mov     al, kbormouse ;~ 18ED:264A
cs=0x18ed;eip=0x00264d; 	X(MOV(*((&byte_45d14)+si), al));	// 51033 mov     byte_45D14[si], al ;~ 18ED:264D
cs=0x18ed;eip=0x002651; 	X(INC(byte_3ebd8));	// 51034 inc     byte_3EBD8 ;~ 18ED:2651
cs=0x18ed;eip=0x002655; 	X(POP(si));	// 51035 pop     si ;~ 18ED:2655
cs=0x18ed;eip=0x002656; 	J(RETF(0));	// 51036 retf ;~ 18ED:2656

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kinput_push_status: 	goto input_push_status;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool input_pop_status(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    input_pop_status:
    _begin:
cs=0x18ed;eip=0x002658; 	X(PUSH(si));	// 51047 push    si ;~ 18ED:2658
cs=0x18ed;eip=0x002659; 	T(CMP(byte_3ebd8, 0));	// 51048 cmp     byte_3EBD8, 0 ;~ 18ED:2659
cs=0x18ed;eip=0x00265e; 	J(JZ(loc_29b30));	// 51049 jz      short loc_29B30 ;~ 18ED:265E
cs=0x18ed;eip=0x002660; 	X(DEC(byte_3ebd8));	// 51050 dec     byte_3EBD8 ;~ 18ED:2660
cs=0x18ed;eip=0x002664; 	T(MOV(al, byte_3ebd8));	// 51051 mov     al, byte_3EBD8 ;~ 18ED:2664
cs=0x18ed;eip=0x002667; 	T(CBW);	// 51052 cbw ;~ 18ED:2667
cs=0x18ed;eip=0x002668; 	T(MOV(si, ax));	// 51053 mov     si, ax ;~ 18ED:2668
cs=0x18ed;eip=0x00266a; 	T(MOV(al, *((&byte_45d0c)+si)));	// 51054 mov     al, byte_45D0C[si] ;~ 18ED:266A
cs=0x18ed;eip=0x00266e; 	X(MOV(byte_3b8f7, al));	// 51055 mov     byte_3B8F7, al ;~ 18ED:266E
cs=0x18ed;eip=0x002671; 	T(MOV(al, *((&byte_45d14)+si)));	// 51056 mov     al, byte_45D14[si] ;~ 18ED:2671
cs=0x18ed;eip=0x002675; 	X(MOV(kbormouse, al));	// 51057 mov     kbormouse, al ;~ 18ED:2675
cs=0x18ed;eip=0x002678; 	T(OR(al, al));	// 51058 or      al, al ;~ 18ED:2678
cs=0x18ed;eip=0x00267a; 	J(JNZ(loc_29b30));	// 51059 jnz     short loc_29B30 ;~ 18ED:267A
cs=0x18ed;eip=0x00267c; 	X(PUSH(cs));	// 51060 push    cs ;~ 18ED:267C
cs=0x18ed;eip=0x00267d; 	J(CALL(mouse_draw_opaque_check,0));	// 51061 call    near ptr mouse_draw_opaque_check ;~ 18ED:267D
loc_29b30:
	// 7689 
cs=0x18ed;eip=0x002680; 	X(POP(si));	// 51065 pop     si ;~ 18ED:2680
cs=0x18ed;eip=0x002681; 	J(RETF(0));	// 51066 retf ;~ 18ED:2681

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kinput_pop_status: 	goto input_pop_status;
        case m2c::kloc_29b30: 	goto loc_29b30;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group4:
    _begin:
do_joy_restext:
	// 51074 
#undef var_56
#define var_56 -0x56
	// 51077 var_56          = word ptr -56h ;~ 18ED:2682
#undef var_54
#define var_54 -0x54
	// 51078 var_54          = word ptr -54h ;~ 18ED:2682
#undef var_52
#define var_52 -0x52
	// 51079 var_52          = word ptr -52h ;~ 18ED:2682
#undef var_50
#define var_50 -0x50
	// 51080 var_50          = word ptr -50h ;~ 18ED:2682
#undef var_4e
#define var_4e -0x4E
	// 51081 var_4E          = word ptr -4Eh ;~ 18ED:2682
#undef var_4c
#define var_4c -0x4C
	// 51082 var_4C          = word ptr -4Ch ;~ 18ED:2682
#undef var_4a
#define var_4a -0x4A
	// 51083 var_4A          = word ptr -4Ah ;~ 18ED:2682
#undef var_48
#define var_48 -0x48
	// 51084 var_48          = word ptr -48h ;~ 18ED:2682
#undef var_46
#define var_46 -0x46
	// 51085 var_46          = word ptr -46h ;~ 18ED:2682
#undef var_44
#define var_44 -0x44
	// 51086 var_44          = word ptr -44h ;~ 18ED:2682
#undef var_42
#define var_42 -0x42
	// 51087 var_42          = word ptr -42h ;~ 18ED:2682
#undef var_40
#define var_40 -0x40
	// 51088 var_40          = word ptr -40h ;~ 18ED:2682
#undef var_3e
#define var_3e -0x3E
	// 51089 var_3E          = word ptr -3Eh ;~ 18ED:2682
#undef var_3c
#define var_3c -0x3C
	// 51090 var_3C          = word ptr -3Ch ;~ 18ED:2682
#undef var_3a
#define var_3a -0x3A
	// 51091 var_3A          = word ptr -3Ah ;~ 18ED:2682
#undef var_38
#define var_38 -0x38
	// 51092 var_38          = word ptr -38h ;~ 18ED:2682
#undef var_36
#define var_36 -0x36
	// 51093 var_36          = word ptr -36h ;~ 18ED:2682
#undef var_34
#define var_34 -0x34
	// 51094 var_34          = word ptr -34h ;~ 18ED:2682
#undef var_32
#define var_32 -0x32
	// 51095 var_32          = word ptr -32h ;~ 18ED:2682
#undef var_30
#define var_30 -0x30
	// 51096 var_30          = word ptr -30h ;~ 18ED:2682
#undef var_2e
#define var_2e -0x2E
	// 51097 var_2E          = word ptr -2Eh ;~ 18ED:2682
#undef var_2c
#define var_2c -0x2C
	// 51098 var_2C          = word ptr -2Ch ;~ 18ED:2682
#undef var_2a
#define var_2a -0x2A
	// 51099 var_2A          = word ptr -2Ah ;~ 18ED:2682
#undef var_28
#define var_28 -0x28
	// 51100 var_28          = word ptr -28h ;~ 18ED:2682
#undef var_26
#define var_26 -0x26
	// 51101 var_26          = word ptr -26h ;~ 18ED:2682
#undef var_24
#define var_24 -0x24
	// 51102 var_24          = word ptr -24h ;~ 18ED:2682
#undef var_22
#define var_22 -0x22
	// 51103 var_22          = word ptr -22h ;~ 18ED:2682
#undef var_1c
#define var_1c -0x1C
	// 51104 var_1C          = word ptr -1Ch ;~ 18ED:2682
#undef var_18
#define var_18 -0x18
	// 51105 var_18          = word ptr -18h ;~ 18ED:2682
#undef var_14
#define var_14 -0x14
	// 51106 var_14          = word ptr -14h ;~ 18ED:2682
#undef var_12
#define var_12 -0x12
	// 51107 var_12          = word ptr -12h ;~ 18ED:2682
#undef var_c
#define var_c -0x0C
	// 51108 var_C           = word ptr -0Ch ;~ 18ED:2682
#undef var_a
#define var_a -0x0A
	// 51109 var_A           = byte ptr -0Ah ;~ 18ED:2682
cs=0x18ed;eip=0x002682; 	X(PUSH(bp));	// 51111 push    bp ;~ 18ED:2682
cs=0x18ed;eip=0x002683; 	T(MOV(bp, sp));	// 51112 mov     bp, sp ;~ 18ED:2683
cs=0x18ed;eip=0x002685; 	T(SUB(sp, 0x56));	// 51113 sub     sp, 56h ;~ 18ED:2685
cs=0x18ed;eip=0x002688; 	X(PUSH(di));	// 51114 push    di ;~ 18ED:2688
cs=0x18ed;eip=0x002689; 	X(PUSH(si));	// 51115 push    si ;~ 18ED:2689
cs=0x18ed;eip=0x00268a; 	X(PUSH(cs));	// 51116 push    cs ;~ 18ED:268A
cs=0x18ed;eip=0x00268b; 	J(CALL(input_push_status,0));	// 51117 call    near ptr input_push_status ;~ 18ED:268B
cs=0x18ed;eip=0x00268e; 	X(MOV(word_3f88e, 1));	// 51118 mov     word_3F88E, 1 ;~ 18ED:268E
cs=0x18ed;eip=0x002694; 	J(CALLF(audio_unk,0));	// 51119 call    audio_unk ;~ 18ED:2694
cs=0x18ed;eip=0x002699; 	T(SUB(ax, ax));	// 51120 sub     ax, ax ;~ 18ED:2699
cs=0x18ed;eip=0x00269b; 	X(PUSH(ax));	// 51121 push    ax ;~ 18ED:269B
cs=0x18ed;eip=0x00269c; 	T(ax = bp+var_2e);	// 51122 lea     ax, [bp+var_2E] ;~ 18ED:269C
cs=0x18ed;eip=0x00269f; 	X(PUSH(ax));	// 51123 push    ax ;~ 18ED:269F
cs=0x18ed;eip=0x0026a0; 	X(PUSH(dialogarg2));	// 51124 push    dialogarg2 ;~ 18ED:26A0
cs=0x18ed;eip=0x0026a4; 	T(MOV(ax, 0x0FFFF));	// 51125 mov     ax, 0FFFFh ;~ 18ED:26A4
cs=0x18ed;eip=0x0026a7; 	X(PUSH(ax));	// 51126 push    ax ;~ 18ED:26A7
cs=0x18ed;eip=0x0026a8; 	X(PUSH(ax));	// 51127 push    ax ;~ 18ED:26A8
cs=0x18ed;eip=0x0026a9; 	T(MOV(ax, offset(dseg,ajoy)));	// 51128 mov     ax, offset aJoy ; "joy" ;~ 18ED:26A9
cs=0x18ed;eip=0x0026ac; 	X(PUSH(ax));	// 51129 push    ax ;~ 18ED:26AC
cs=0x18ed;eip=0x0026ad; 	X(PUSH(word_44cee));	// 51130 push    word_44CEE ;~ 18ED:26AD
cs=0x18ed;eip=0x0026b1; 	X(PUSH(mainresptr));	// 51131 push    mainresptr ;~ 18ED:26B1
cs=0x18ed;eip=0x0026b5; 	X(PUSH(cs));	// 51132 push    cs ;~ 18ED:26B5
cs=0x18ed;eip=0x0026b6; 	J(CALL(locate_text_res,0));	// 51133 call    near ptr locate_text_res ;~ 18ED:26B6
cs=0x18ed;eip=0x0026b9; 	T(ADD(sp, 6));	// 51134 add     sp, 6 ;~ 18ED:26B9
cs=0x18ed;eip=0x0026bc; 	X(PUSH(dx));	// 51135 push    dx ;~ 18ED:26BC
cs=0x18ed;eip=0x0026bd; 	X(PUSH(ax));	// 51136 push    ax ;~ 18ED:26BD
cs=0x18ed;eip=0x0026be; 	T(MOV(ax, 1));	// 51137 mov     ax, 1 ;~ 18ED:26BE
cs=0x18ed;eip=0x0026c1; 	X(PUSH(ax));	// 51138 push    ax ;~ 18ED:26C1
cs=0x18ed;eip=0x0026c2; 	T(MOV(ax, 3));	// 51139 mov     ax, 3 ;~ 18ED:26C2
cs=0x18ed;eip=0x0026c5; 	X(PUSH(ax));	// 51140 push    ax ;~ 18ED:26C5
cs=0x18ed;eip=0x0026c6; 	X(PUSH(cs));	// 51141 push    cs ;~ 18ED:26C6
cs=0x18ed;eip=0x0026c7; 	J(CALL(show_dialog,0));	// 51142 call    near ptr show_dialog ;~ 18ED:26C7
cs=0x18ed;eip=0x0026ca; 	T(ADD(sp, 0x12));	// 51143 add     sp, 12h ;~ 18ED:26CA
cs=0x18ed;eip=0x0026cd; 	T(OR(ax, ax));	// 51144 or      ax, ax ;~ 18ED:26CD
cs=0x18ed;eip=0x0026cf; 	J(JG(loc_29b84));	// 51145 jg      short loc_29B84 ;~ 18ED:26CF
cs=0x18ed;eip=0x0026d1; 	J(JMP(loc_29d76));	// 51146 jmp     loc_29D76 ;~ 18ED:26D1
loc_29b84:
	// 7690 
cs=0x18ed;eip=0x0026d4; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 0));	// 51150 mov     [bp+var_C], 0 ;~ 18ED:26D4
loc_29b89:
	// 7691 
cs=0x18ed;eip=0x0026d9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_c))));	// 51153 mov     bx, [bp+var_C] ;~ 18ED:26D9
cs=0x18ed;eip=0x0026dc; 	T(ADD(bx, bp));	// 51154 add     bx, bp ;~ 18ED:26DC
cs=0x18ed;eip=0x0026de; 	X(MOV(*(raddr(ds,bx-0x0A)), 0));	// 51155 mov     byte ptr [bx-0Ah], 0 ;~ 18ED:26DE
cs=0x18ed;eip=0x0026e2; 	X(INC(*(dw*)(raddr(ss,bp+var_c))));	// 51156 inc     [bp+var_C] ;~ 18ED:26E2
cs=0x18ed;eip=0x0026e5; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), 9));	// 51157 cmp     [bp+var_C], 9 ;~ 18ED:26E5
cs=0x18ed;eip=0x0026e9; 	J(JL(loc_29b89));	// 51158 jl      short loc_29B89 ;~ 18ED:26E9
cs=0x18ed;eip=0x0026eb; 	X(MOV(byte_3fe00, 1));	// 51159 mov     byte_3FE00, 1 ;~ 18ED:26EB
cs=0x18ed;eip=0x0026f0; 	X(PUSH(cs));	// 51160 push    cs ;~ 18ED:26F0
cs=0x18ed;eip=0x0026f1; 	J(CALL(mouse_draw_opaque_check,0));	// 51161 call    near ptr mouse_draw_opaque_check ;~ 18ED:26F1
cs=0x18ed;eip=0x0026f4; 	X(PUSH(dialogarg2));	// 51162 push    dialogarg2 ;~ 18ED:26F4
cs=0x18ed;eip=0x0026f8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 51163 mov     ax, [bp+var_14] ;~ 18ED:26F8
cs=0x18ed;eip=0x0026fb; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_28))));	// 51164 sub     ax, [bp+var_28] ;~ 18ED:26FB
cs=0x18ed;eip=0x0026fe; 	T(SUB(ax, 8));	// 51165 sub     ax, 8 ;~ 18ED:26FE
cs=0x18ed;eip=0x002701; 	X(PUSH(ax));	// 51166 push    ax ;~ 18ED:2701
cs=0x18ed;eip=0x002702; 	T(MOV(ax, 1));	// 51167 mov     ax, 1 ;~ 18ED:2702
cs=0x18ed;eip=0x002705; 	X(PUSH(ax));	// 51168 push    ax ;~ 18ED:2705
cs=0x18ed;eip=0x002706; 	X(PUSH(*(dw*)(raddr(ss,bp+var_28))));	// 51169 push    [bp+var_28] ;~ 18ED:2706
cs=0x18ed;eip=0x002709; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2a))));	// 51170 mov     ax, [bp+var_2A] ;~ 18ED:2709
cs=0x18ed;eip=0x00270c; 	T(SUB(ax, 4));	// 51171 sub     ax, 4 ;~ 18ED:270C
cs=0x18ed;eip=0x00270f; 	X(PUSH(ax));	// 51172 push    ax ;~ 18ED:270F
cs=0x18ed;eip=0x002710; 	J(CALLF(sprite_1_unk,0));	// 51173 call    sprite_1_unk ;~ 18ED:2710
cs=0x18ed;eip=0x002715; 	T(ADD(sp, 0x0A));	// 51174 add     sp, 0Ah ;~ 18ED:2715
cs=0x18ed;eip=0x002718; 	X(PUSH(dialogarg2));	// 51175 push    dialogarg2 ;~ 18ED:2718
cs=0x18ed;eip=0x00271c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 51176 mov     ax, [bp+var_14] ;~ 18ED:271C
cs=0x18ed;eip=0x00271f; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_28))));	// 51177 sub     ax, [bp+var_28] ;~ 18ED:271F
cs=0x18ed;eip=0x002722; 	T(SUB(ax, 8));	// 51178 sub     ax, 8 ;~ 18ED:2722
cs=0x18ed;eip=0x002725; 	X(PUSH(ax));	// 51179 push    ax ;~ 18ED:2725
cs=0x18ed;eip=0x002726; 	T(MOV(ax, 1));	// 51180 mov     ax, 1 ;~ 18ED:2726
cs=0x18ed;eip=0x002729; 	X(PUSH(ax));	// 51181 push    ax ;~ 18ED:2729
cs=0x18ed;eip=0x00272a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_24))));	// 51182 push    [bp+var_24] ;~ 18ED:272A
cs=0x18ed;eip=0x00272d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_26))));	// 51183 mov     ax, [bp+var_26] ;~ 18ED:272D
cs=0x18ed;eip=0x002730; 	T(SUB(ax, 4));	// 51184 sub     ax, 4 ;~ 18ED:2730
cs=0x18ed;eip=0x002733; 	X(PUSH(ax));	// 51185 push    ax ;~ 18ED:2733
cs=0x18ed;eip=0x002734; 	J(CALLF(sprite_1_unk,0));	// 51186 call    sprite_1_unk ;~ 18ED:2734
cs=0x18ed;eip=0x002739; 	T(ADD(sp, 0x0A));	// 51187 add     sp, 0Ah ;~ 18ED:2739
cs=0x18ed;eip=0x00273c; 	X(PUSH(dialogarg2));	// 51188 push    dialogarg2 ;~ 18ED:273C
cs=0x18ed;eip=0x002740; 	T(MOV(ax, 1));	// 51189 mov     ax, 1 ;~ 18ED:2740
cs=0x18ed;eip=0x002743; 	X(PUSH(ax));	// 51190 push    ax ;~ 18ED:2743
cs=0x18ed;eip=0x002744; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_22))));	// 51191 mov     ax, [bp+var_22] ;~ 18ED:2744
cs=0x18ed;eip=0x002747; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_2e))));	// 51192 sub     ax, [bp+var_2E] ;~ 18ED:2747
cs=0x18ed;eip=0x00274a; 	X(PUSH(ax));	// 51193 push    ax ;~ 18ED:274A
cs=0x18ed;eip=0x00274b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 51194 mov     ax, [bp+var_1C] ;~ 18ED:274B
cs=0x18ed;eip=0x00274e; 	T(SUB(ax, 4));	// 51195 sub     ax, 4 ;~ 18ED:274E
cs=0x18ed;eip=0x002751; 	X(PUSH(ax));	// 51196 push    ax ;~ 18ED:2751
cs=0x18ed;eip=0x002752; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2e))));	// 51197 push    [bp+var_2E] ;~ 18ED:2752
cs=0x18ed;eip=0x002755; 	J(CALLF(sprite_1_unk,0));	// 51198 call    sprite_1_unk ;~ 18ED:2755
cs=0x18ed;eip=0x00275a; 	T(ADD(sp, 0x0A));	// 51199 add     sp, 0Ah ;~ 18ED:275A
cs=0x18ed;eip=0x00275d; 	X(PUSH(dialogarg2));	// 51200 push    dialogarg2 ;~ 18ED:275D
cs=0x18ed;eip=0x002761; 	T(MOV(ax, 1));	// 51201 mov     ax, 1 ;~ 18ED:2761
cs=0x18ed;eip=0x002764; 	X(PUSH(ax));	// 51202 push    ax ;~ 18ED:2764
cs=0x18ed;eip=0x002765; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_22))));	// 51203 mov     ax, [bp+var_22] ;~ 18ED:2765
cs=0x18ed;eip=0x002768; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_2e))));	// 51204 sub     ax, [bp+var_2E] ;~ 18ED:2768
cs=0x18ed;eip=0x00276b; 	X(PUSH(ax));	// 51205 push    ax ;~ 18ED:276B
cs=0x18ed;eip=0x00276c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 51206 mov     ax, [bp+var_18] ;~ 18ED:276C
cs=0x18ed;eip=0x00276f; 	T(SUB(ax, 4));	// 51207 sub     ax, 4 ;~ 18ED:276F
cs=0x18ed;eip=0x002772; 	X(PUSH(ax));	// 51208 push    ax ;~ 18ED:2772
cs=0x18ed;eip=0x002773; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2e))));	// 51209 push    [bp+var_2E] ;~ 18ED:2773
cs=0x18ed;eip=0x002776; 	J(CALLF(sprite_1_unk,0));	// 51210 call    sprite_1_unk ;~ 18ED:2776
cs=0x18ed;eip=0x00277b; 	T(ADD(sp, 0x0A));	// 51211 add     sp, 0Ah ;~ 18ED:277B
cs=0x18ed;eip=0x00277e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2a))));	// 51212 mov     ax, [bp+var_2A] ;~ 18ED:277E
cs=0x18ed;eip=0x002781; 	X(MOV(*(dw*)(raddr(ss,bp+var_40)), ax));	// 51213 mov     [bp+var_40], ax ;~ 18ED:2781
cs=0x18ed;eip=0x002784; 	X(MOV(*(dw*)(raddr(ss,bp+var_3e)), ax));	// 51214 mov     [bp+var_3E], ax ;~ 18ED:2784
cs=0x18ed;eip=0x002787; 	X(MOV(*(dw*)(raddr(ss,bp+var_36)), ax));	// 51215 mov     [bp+var_36], ax ;~ 18ED:2787
cs=0x18ed;eip=0x00278a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_26))));	// 51216 mov     ax, [bp+var_26] ;~ 18ED:278A
cs=0x18ed;eip=0x00278d; 	X(MOV(*(dw*)(raddr(ss,bp+var_3c)), ax));	// 51217 mov     [bp+var_3C], ax ;~ 18ED:278D
cs=0x18ed;eip=0x002790; 	X(MOV(*(dw*)(raddr(ss,bp+var_3a)), ax));	// 51218 mov     [bp+var_3A], ax ;~ 18ED:2790
cs=0x18ed;eip=0x002793; 	X(MOV(*(dw*)(raddr(ss,bp+var_38)), ax));	// 51219 mov     [bp+var_38], ax ;~ 18ED:2793
cs=0x18ed;eip=0x002796; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2e))));	// 51220 mov     ax, [bp+var_2E] ;~ 18ED:2796
cs=0x18ed;eip=0x002799; 	X(MOV(*(dw*)(raddr(ss,bp+var_34)), ax));	// 51221 mov     [bp+var_34], ax ;~ 18ED:2799
cs=0x18ed;eip=0x00279c; 	X(MOV(*(dw*)(raddr(ss,bp+var_32)), ax));	// 51222 mov     [bp+var_32], ax ;~ 18ED:279C
cs=0x18ed;eip=0x00279f; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), ax));	// 51223 mov     [bp+var_30], ax ;~ 18ED:279F
cs=0x18ed;eip=0x0027a2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 51224 mov     ax, [bp+var_1C] ;~ 18ED:27A2
cs=0x18ed;eip=0x0027a5; 	X(MOV(*(dw*)(raddr(ss,bp+var_54)), ax));	// 51225 mov     [bp+var_54], ax ;~ 18ED:27A5
cs=0x18ed;eip=0x0027a8; 	X(MOV(*(dw*)(raddr(ss,bp+var_4e)), ax));	// 51226 mov     [bp+var_4E], ax ;~ 18ED:27A8
cs=0x18ed;eip=0x0027ab; 	X(MOV(*(dw*)(raddr(ss,bp+var_46)), ax));	// 51227 mov     [bp+var_46], ax ;~ 18ED:27AB
cs=0x18ed;eip=0x0027ae; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 51228 mov     ax, [bp+var_28] ;~ 18ED:27AE
cs=0x18ed;eip=0x0027b1; 	X(MOV(*(dw*)(raddr(ss,bp+var_52)), ax));	// 51229 mov     [bp+var_52], ax ;~ 18ED:27B1
cs=0x18ed;eip=0x0027b4; 	X(MOV(*(dw*)(raddr(ss,bp+var_50)), ax));	// 51230 mov     [bp+var_50], ax ;~ 18ED:27B4
cs=0x18ed;eip=0x0027b7; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), ax));	// 51231 mov     [bp+var_44], ax ;~ 18ED:27B7
cs=0x18ed;eip=0x0027ba; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 51232 mov     ax, [bp+var_18] ;~ 18ED:27BA
cs=0x18ed;eip=0x0027bd; 	X(MOV(*(dw*)(raddr(ss,bp+var_4c)), ax));	// 51233 mov     [bp+var_4C], ax ;~ 18ED:27BD
cs=0x18ed;eip=0x0027c0; 	X(MOV(*(dw*)(raddr(ss,bp+var_4a)), ax));	// 51234 mov     [bp+var_4A], ax ;~ 18ED:27C0
cs=0x18ed;eip=0x0027c3; 	X(MOV(*(dw*)(raddr(ss,bp+var_48)), ax));	// 51235 mov     [bp+var_48], ax ;~ 18ED:27C3
cs=0x18ed;eip=0x0027c6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2a))));	// 51236 mov     ax, [bp+var_2A] ;~ 18ED:27C6
cs=0x18ed;eip=0x0027c9; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_2e))));	// 51237 sub     ax, [bp+var_2E] ;~ 18ED:27C9
cs=0x18ed;eip=0x0027cc; 	T(SUB(ax, 8));	// 51238 sub     ax, 8 ;~ 18ED:27CC
cs=0x18ed;eip=0x0027cf; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 51239 mov     [bp+var_12], ax ;~ 18ED:27CF
cs=0x18ed;eip=0x0027d2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 51240 mov     ax, [bp+var_1C] ;~ 18ED:27D2
cs=0x18ed;eip=0x0027d5; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 51241 sub     ax, [bp+var_2C] ;~ 18ED:27D5
cs=0x18ed;eip=0x0027d8; 	T(SUB(ax, 8));	// 51242 sub     ax, 8 ;~ 18ED:27D8
cs=0x18ed;eip=0x0027db; 	X(MOV(*(dw*)(raddr(ss,bp+var_42)), ax));	// 51243 mov     [bp+var_42], ax ;~ 18ED:27DB
cs=0x18ed;eip=0x0027de; 	T(MOV(si, 0x0FFFF));	// 51244 mov     si, 0FFFFh ;~ 18ED:27DE
cs=0x18ed;eip=0x0027e1; 	J(CALLF(sub_307b4,0));	// 51245 call    sub_307B4 ;~ 18ED:27E1
loc_29c96:
	// 7692 
cs=0x18ed;eip=0x0027e6; 	J(CALLF(kb_read_char,0));	// 51249 call    kb_read_char ;~ 18ED:27E6
cs=0x18ed;eip=0x0027eb; 	T(OR(ax, ax));	// 51250 or      ax, ax ;~ 18ED:27EB
cs=0x18ed;eip=0x0027ed; 	J(JZ(loc_29ca8));	// 51251 jz      short loc_29CA8 ;~ 18ED:27ED
loc_29c9f:
	// 7693 
cs=0x18ed;eip=0x0027ef; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 0));	// 51254 mov     [bp+var_C], 0 ;~ 18ED:27EF
cs=0x18ed;eip=0x0027f4; 	J(JMP(loc_29d25));	// 51255 jmp     short loc_29D25 ;~ 18ED:27F4
loc_29ca8:
	// 7694 
cs=0x18ed;eip=0x0027f8; 	J(CALLF(get_joy_flags,0));	// 51261 call    get_joy_flags ;~ 18ED:27F8
cs=0x18ed;eip=0x0027fd; 	T(MOV(di, ax));	// 51262 mov     di, ax ;~ 18ED:27FD
cs=0x18ed;eip=0x0027ff; 	T(TEST(di, 0x30));	// 51263 test    di, 30h ;~ 18ED:27FF
cs=0x18ed;eip=0x002803; 	J(JNZ(loc_29c9f));	// 51264 jnz     short loc_29C9F ;~ 18ED:2803
cs=0x18ed;eip=0x002805; 	X(PUSH(di));	// 51265 push    di ;~ 18ED:2805
cs=0x18ed;eip=0x002806; 	J(CALLF(sub_307d2,0));	// 51266 call    sub_307D2 ;~ 18ED:2806
cs=0x18ed;eip=0x00280b; 	T(ADD(sp, 2));	// 51267 add     sp, 2 ;~ 18ED:280B
cs=0x18ed;eip=0x00280e; 	T(MOV(di, ax));	// 51268 mov     di, ax ;~ 18ED:280E
cs=0x18ed;eip=0x002810; 	T(CMP(di, si));	// 51269 cmp     di, si ;~ 18ED:2810
cs=0x18ed;eip=0x002812; 	J(JZ(loc_29c96));	// 51270 jz      short loc_29C96 ;~ 18ED:2812
cs=0x18ed;eip=0x002814; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 0));	// 51271 mov     [bp+var_C], 0 ;~ 18ED:2814
loc_29cc9:
	// 7695 
cs=0x18ed;eip=0x002819; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 51274 mov     ax, [bp+var_C] ;~ 18ED:2819
cs=0x18ed;eip=0x00281c; 	T(SHL(ax, 1));	// 51275 shl     ax, 1 ;~ 18ED:281C
cs=0x18ed;eip=0x00281e; 	T(ADD(ax, bp));	// 51276 add     ax, bp ;~ 18ED:281E
cs=0x18ed;eip=0x002820; 	X(MOV(*(dw*)(raddr(ss,bp+var_56)), ax));	// 51277 mov     [bp+var_56], ax ;~ 18ED:2820
cs=0x18ed;eip=0x002823; 	X(PUSH(word_3eb90));	// 51278 push    word_3EB90 ;~ 18ED:2823
cs=0x18ed;eip=0x002827; 	X(PUSH(*(dw*)(raddr(ss,bp+var_42))));	// 51279 push    [bp+var_42] ;~ 18ED:2827
cs=0x18ed;eip=0x00282a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 51280 push    [bp+var_12] ;~ 18ED:282A
cs=0x18ed;eip=0x00282d; 	T(MOV(bx, ax));	// 51281 mov     bx, ax ;~ 18ED:282D
cs=0x18ed;eip=0x00282f; 	X(PUSH(*(dw*)(raddr(ds,bx-0x54))));	// 51282 push    word ptr [bx-54h] ;~ 18ED:282F
cs=0x18ed;eip=0x002832; 	X(PUSH(*(dw*)(raddr(ds,bx-0x40))));	// 51283 push    word ptr [bx-40h] ;~ 18ED:2832
cs=0x18ed;eip=0x002835; 	J(CALLF(sprite_1_unk,0));	// 51284 call    sprite_1_unk ;~ 18ED:2835
cs=0x18ed;eip=0x00283a; 	T(ADD(sp, 0x0A));	// 51285 add     sp, 0Ah ;~ 18ED:283A
cs=0x18ed;eip=0x00283d; 	X(INC(*(dw*)(raddr(ss,bp+var_c))));	// 51286 inc     [bp+var_C] ;~ 18ED:283D
cs=0x18ed;eip=0x002840; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), 9));	// 51287 cmp     [bp+var_C], 9 ;~ 18ED:2840
cs=0x18ed;eip=0x002844; 	J(JL(loc_29cc9));	// 51288 jl      short loc_29CC9 ;~ 18ED:2844
cs=0x18ed;eip=0x002846; 	T(MOV(ax, di));	// 51289 mov     ax, di ;~ 18ED:2846
cs=0x18ed;eip=0x002848; 	T(SHL(ax, 1));	// 51290 shl     ax, 1 ;~ 18ED:2848
cs=0x18ed;eip=0x00284a; 	T(ADD(ax, bp));	// 51291 add     ax, bp ;~ 18ED:284A
cs=0x18ed;eip=0x00284c; 	X(MOV(*(dw*)(raddr(ss,bp+var_56)), ax));	// 51292 mov     [bp+var_56], ax ;~ 18ED:284C
cs=0x18ed;eip=0x00284f; 	X(PUSH(dialog_fnt_colour));	// 51293 push    dialog_fnt_colour ;~ 18ED:284F
cs=0x18ed;eip=0x002853; 	X(PUSH(*(dw*)(raddr(ss,bp+var_42))));	// 51294 push    [bp+var_42] ;~ 18ED:2853
cs=0x18ed;eip=0x002856; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 51295 push    [bp+var_12] ;~ 18ED:2856
cs=0x18ed;eip=0x002859; 	T(MOV(bx, ax));	// 51296 mov     bx, ax ;~ 18ED:2859
cs=0x18ed;eip=0x00285b; 	X(PUSH(*(dw*)(raddr(ds,bx-0x54))));	// 51297 push    word ptr [bx-54h] ;~ 18ED:285B
cs=0x18ed;eip=0x00285e; 	X(PUSH(*(dw*)(raddr(ds,bx-0x40))));	// 51298 push    word ptr [bx-40h] ;~ 18ED:285E
cs=0x18ed;eip=0x002861; 	J(CALLF(sprite_1_unk,0));	// 51299 call    sprite_1_unk ;~ 18ED:2861
cs=0x18ed;eip=0x002866; 	T(ADD(sp, 0x0A));	// 51300 add     sp, 0Ah ;~ 18ED:2866
cs=0x18ed;eip=0x002869; 	T(MOV(si, di));	// 51301 mov     si, di ;~ 18ED:2869
cs=0x18ed;eip=0x00286b; 	X(MOV(*(raddr(ss,bp+di+var_a)), 1));	// 51302 mov     [bp+di+var_A], 1 ;~ 18ED:286B
cs=0x18ed;eip=0x00286f; 	J(JMP(loc_29c96));	// 51303 jmp     loc_29C96 ;~ 18ED:286F
loc_29d22:
	// 7696 
cs=0x18ed;eip=0x002872; 	X(INC(*(dw*)(raddr(ss,bp+var_c))));	// 51307 inc     [bp+var_C] ;~ 18ED:2872
loc_29d25:
	// 7697 
cs=0x18ed;eip=0x002875; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), 9));	// 51310 cmp     [bp+var_C], 9 ;~ 18ED:2875
cs=0x18ed;eip=0x002879; 	J(JGE(loc_29d3a));	// 51311 jge     short loc_29D3A ;~ 18ED:2879
cs=0x18ed;eip=0x00287b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_c))));	// 51312 mov     bx, [bp+var_C] ;~ 18ED:287B
cs=0x18ed;eip=0x00287e; 	T(ADD(bx, bp));	// 51313 add     bx, bp ;~ 18ED:287E
cs=0x18ed;eip=0x002880; 	T(MOV(al, *(raddr(ds,bx-0x0A))));	// 51314 mov     al, [bx-0Ah] ;~ 18ED:2880
cs=0x18ed;eip=0x002883; 	X(AND(byte_3fe00, al));	// 51315 and     byte_3FE00, al ;~ 18ED:2883
cs=0x18ed;eip=0x002887; 	J(JMP(loc_29d22));	// 51316 jmp     short loc_29D22 ;~ 18ED:2887
loc_29d3a:
	// 7698 
cs=0x18ed;eip=0x00288a; 	X(PUSH(cs));	// 51321 push    cs ;~ 18ED:288A
cs=0x18ed;eip=0x00288b; 	J(CALL(sub_275c6,0));	// 51322 call    near ptr sub_275C6 ;~ 18ED:288B
cs=0x18ed;eip=0x00288e; 	T(CMP(byte_3fe00, 0));	// 51323 cmp     byte_3FE00, 0 ;~ 18ED:288E
cs=0x18ed;eip=0x002893; 	J(JNZ(loc_29d7b));	// 51324 jnz     short loc_29D7B ;~ 18ED:2893
cs=0x18ed;eip=0x002895; 	T(SUB(ax, ax));	// 51325 sub     ax, ax ;~ 18ED:2895
cs=0x18ed;eip=0x002897; 	X(PUSH(ax));	// 51326 push    ax ;~ 18ED:2897
cs=0x18ed;eip=0x002898; 	X(PUSH(ax));	// 51327 push    ax ;~ 18ED:2898
cs=0x18ed;eip=0x002899; 	X(PUSH(dialogarg2));	// 51328 push    dialogarg2 ;~ 18ED:2899
cs=0x18ed;eip=0x00289d; 	T(MOV(ax, 0x0FFFF));	// 51329 mov     ax, 0FFFFh ;~ 18ED:289D
cs=0x18ed;eip=0x0028a0; 	X(PUSH(ax));	// 51330 push    ax ;~ 18ED:28A0
cs=0x18ed;eip=0x0028a1; 	X(PUSH(ax));	// 51331 push    ax ;~ 18ED:28A1
cs=0x18ed;eip=0x0028a2; 	T(MOV(ax, offset(dseg,ajox)));	// 51332 mov     ax, offset aJox ; "jox" ;~ 18ED:28A2
cs=0x18ed;eip=0x0028a5; 	X(PUSH(ax));	// 51333 push    ax ;~ 18ED:28A5
cs=0x18ed;eip=0x0028a6; 	X(PUSH(word_44cee));	// 51334 push    word_44CEE ;~ 18ED:28A6
cs=0x18ed;eip=0x0028aa; 	X(PUSH(mainresptr));	// 51335 push    mainresptr ;~ 18ED:28AA
cs=0x18ed;eip=0x0028ae; 	X(PUSH(cs));	// 51336 push    cs ;~ 18ED:28AE
cs=0x18ed;eip=0x0028af; 	J(CALL(locate_text_res,0));	// 51337 call    near ptr locate_text_res ;~ 18ED:28AF
cs=0x18ed;eip=0x0028b2; 	T(ADD(sp, 6));	// 51338 add     sp, 6 ;~ 18ED:28B2
cs=0x18ed;eip=0x0028b5; 	X(PUSH(dx));	// 51339 push    dx ;~ 18ED:28B5
cs=0x18ed;eip=0x0028b6; 	X(PUSH(ax));	// 51340 push    ax ;~ 18ED:28B6
cs=0x18ed;eip=0x0028b7; 	T(MOV(ax, 1));	// 51341 mov     ax, 1 ;~ 18ED:28B7
cs=0x18ed;eip=0x0028ba; 	X(PUSH(ax));	// 51342 push    ax ;~ 18ED:28BA
cs=0x18ed;eip=0x0028bb; 	X(PUSH(ax));	// 51343 push    ax ;~ 18ED:28BB
cs=0x18ed;eip=0x0028bc; 	X(PUSH(cs));	// 51344 push    cs ;~ 18ED:28BC
cs=0x18ed;eip=0x0028bd; 	J(CALL(show_dialog,0));	// 51345 call    near ptr show_dialog ;~ 18ED:28BD
cs=0x18ed;eip=0x0028c0; 	T(ADD(sp, 0x12));	// 51346 add     sp, 12h ;~ 18ED:28C0
cs=0x18ed;eip=0x0028c3; 	J(JMP(loc_29d7b));	// 51347 jmp     short loc_29D7B ;~ 18ED:28C3
loc_29d76:
	// 7699 
cs=0x18ed;eip=0x0028c6; 	X(MOV(byte_3fe00, 0));	// 51352 mov     byte_3FE00, 0 ;~ 18ED:28C6
loc_29d7b:
	// 7700 
cs=0x18ed;eip=0x0028cb; 	J(CALLF(kb_check,0));	// 51356 call    kb_check ;~ 18ED:28CB
cs=0x18ed;eip=0x0028d0; 	X(MOV(byte_3b8f2, 0));	// 51357 mov     byte_3B8F2, 0 ;~ 18ED:28D0
cs=0x18ed;eip=0x0028d5; 	J(CALLF(sub_372f4,0));	// 51358 call    sub_372F4 ;~ 18ED:28D5
cs=0x18ed;eip=0x0028da; 	X(MOV(word_3f88e, 0));	// 51359 mov     word_3F88E, 0 ;~ 18ED:28DA
cs=0x18ed;eip=0x0028e0; 	X(PUSH(cs));	// 51360 push    cs ;~ 18ED:28E0
cs=0x18ed;eip=0x0028e1; 	J(CALL(input_pop_status,0));	// 51361 call    near ptr input_pop_status ;~ 18ED:28E1
cs=0x18ed;eip=0x0028e4; 	X(POP(si));	// 51362 pop     si ;~ 18ED:28E4
cs=0x18ed;eip=0x0028e5; 	X(POP(di));	// 51363 pop     di ;~ 18ED:28E5
cs=0x18ed;eip=0x0028e6; 	T(MOV(sp, bp));	// 51364 mov     sp, bp ;~ 18ED:28E6
cs=0x18ed;eip=0x0028e8; 	X(POP(bp));	// 51365 pop     bp ;~ 18ED:28E8
cs=0x18ed;eip=0x0028e9; 	J(RETF(0));	// 51366 retf ;~ 18ED:28E9
do_key_restext:
	// 51373 
cs=0x18ed;eip=0x0028ea; 	X(PUSH(cs));	// 51375 push    cs ;~ 18ED:28EA
cs=0x18ed;eip=0x0028eb; 	J(CALL(input_push_status,0));	// 51376 call    near ptr input_push_status ;~ 18ED:28EB
cs=0x18ed;eip=0x0028ee; 	X(MOV(word_3f88e, 1));	// 51377 mov     word_3F88E, 1 ;~ 18ED:28EE
cs=0x18ed;eip=0x0028f4; 	J(CALLF(audio_unk,0));	// 51378 call    audio_unk ;~ 18ED:28F4
cs=0x18ed;eip=0x0028f9; 	T(SUB(ax, ax));	// 51379 sub     ax, ax ;~ 18ED:28F9
cs=0x18ed;eip=0x0028fb; 	X(PUSH(ax));	// 51380 push    ax ;~ 18ED:28FB
cs=0x18ed;eip=0x0028fc; 	X(PUSH(ax));	// 51381 push    ax ;~ 18ED:28FC
cs=0x18ed;eip=0x0028fd; 	X(PUSH(dialogarg2));	// 51382 push    dialogarg2 ;~ 18ED:28FD
cs=0x18ed;eip=0x002901; 	T(MOV(ax, 0x0FFFF));	// 51383 mov     ax, 0FFFFh ;~ 18ED:2901
cs=0x18ed;eip=0x002904; 	X(PUSH(ax));	// 51384 push    ax ;~ 18ED:2904
cs=0x18ed;eip=0x002905; 	X(PUSH(ax));	// 51385 push    ax ;~ 18ED:2905
cs=0x18ed;eip=0x002906; 	T(MOV(ax, offset(dseg,akey)));	// 51386 mov     ax, offset aKey ; "key" ;~ 18ED:2906
cs=0x18ed;eip=0x002909; 	X(PUSH(ax));	// 51387 push    ax ;~ 18ED:2909
cs=0x18ed;eip=0x00290a; 	X(PUSH(word_44cee));	// 51388 push    word_44CEE ;~ 18ED:290A
cs=0x18ed;eip=0x00290e; 	X(PUSH(mainresptr));	// 51389 push    mainresptr ;~ 18ED:290E
cs=0x18ed;eip=0x002912; 	X(PUSH(cs));	// 51390 push    cs ;~ 18ED:2912
cs=0x18ed;eip=0x002913; 	J(CALL(locate_text_res,0));	// 51391 call    near ptr locate_text_res ;~ 18ED:2913
cs=0x18ed;eip=0x002916; 	T(ADD(sp, 6));	// 51392 add     sp, 6 ;~ 18ED:2916
cs=0x18ed;eip=0x002919; 	X(PUSH(dx));	// 51393 push    dx ;~ 18ED:2919
cs=0x18ed;eip=0x00291a; 	X(PUSH(ax));	// 51394 push    ax ;~ 18ED:291A
cs=0x18ed;eip=0x00291b; 	T(MOV(ax, 1));	// 51395 mov     ax, 1 ;~ 18ED:291B
cs=0x18ed;eip=0x00291e; 	X(PUSH(ax));	// 51396 push    ax ;~ 18ED:291E
cs=0x18ed;eip=0x00291f; 	T(MOV(ax, 4));	// 51397 mov     ax, 4 ;~ 18ED:291F
cs=0x18ed;eip=0x002922; 	X(PUSH(ax));	// 51398 push    ax ;~ 18ED:2922
cs=0x18ed;eip=0x002923; 	X(PUSH(cs));	// 51399 push    cs ;~ 18ED:2923
cs=0x18ed;eip=0x002924; 	J(CALL(show_dialog,0));	// 51400 call    near ptr show_dialog ;~ 18ED:2924
cs=0x18ed;eip=0x002927; 	T(ADD(sp, 0x12));	// 51401 add     sp, 12h ;~ 18ED:2927
cs=0x18ed;eip=0x00292a; 	X(MOV(byte_3fe00, 0));	// 51402 mov     byte_3FE00, 0 ;~ 18ED:292A
cs=0x18ed;eip=0x00292f; 	X(MOV(byte_3b8f2, 0));	// 51403 mov     byte_3B8F2, 0 ;~ 18ED:292F
cs=0x18ed;eip=0x002934; 	X(MOV(word_3f88e, 0));	// 51404 mov     word_3F88E, 0 ;~ 18ED:2934
cs=0x18ed;eip=0x00293a; 	J(CALLF(sub_372f4,0));	// 51405 call    sub_372F4 ;~ 18ED:293A
cs=0x18ed;eip=0x00293f; 	X(PUSH(cs));	// 51406 push    cs ;~ 18ED:293F
cs=0x18ed;eip=0x002940; 	J(CALL(input_pop_status,0));	// 51407 call    near ptr input_pop_status ;~ 18ED:2940
cs=0x18ed;eip=0x002943; 	J(RETF(0));	// 51408 retf ;~ 18ED:2943
do_pau_restext:
	// 51458 
cs=0x18ed;eip=0x00299a; 	X(PUSH(cs));	// 51460 push    cs ;~ 18ED:299A
cs=0x18ed;eip=0x00299b; 	J(CALL(input_push_status,0));	// 51461 call    near ptr input_push_status ;~ 18ED:299B
cs=0x18ed;eip=0x00299e; 	X(MOV(word_3f88e, 1));	// 51462 mov     word_3F88E, 1 ;~ 18ED:299E
cs=0x18ed;eip=0x0029a4; 	J(CALLF(audio_unk,0));	// 51463 call    audio_unk ;~ 18ED:29A4
cs=0x18ed;eip=0x0029a9; 	T(SUB(ax, ax));	// 51464 sub     ax, ax ;~ 18ED:29A9
cs=0x18ed;eip=0x0029ab; 	X(PUSH(ax));	// 51465 push    ax ;~ 18ED:29AB
cs=0x18ed;eip=0x0029ac; 	X(PUSH(ax));	// 51466 push    ax ;~ 18ED:29AC
cs=0x18ed;eip=0x0029ad; 	X(PUSH(dialogarg2));	// 51467 push    dialogarg2 ;~ 18ED:29AD
cs=0x18ed;eip=0x0029b1; 	T(MOV(ax, 0x0FFFF));	// 51468 mov     ax, 0FFFFh ;~ 18ED:29B1
cs=0x18ed;eip=0x0029b4; 	X(PUSH(ax));	// 51469 push    ax ;~ 18ED:29B4
cs=0x18ed;eip=0x0029b5; 	X(PUSH(ax));	// 51470 push    ax ;~ 18ED:29B5
cs=0x18ed;eip=0x0029b6; 	T(MOV(ax, offset(dseg,apau)));	// 51471 mov     ax, offset aPau ; "pau" ;~ 18ED:29B6
cs=0x18ed;eip=0x0029b9; 	X(PUSH(ax));	// 51472 push    ax ;~ 18ED:29B9
cs=0x18ed;eip=0x0029ba; 	X(PUSH(word_44cee));	// 51473 push    word_44CEE ;~ 18ED:29BA
cs=0x18ed;eip=0x0029be; 	X(PUSH(mainresptr));	// 51474 push    mainresptr ;~ 18ED:29BE
cs=0x18ed;eip=0x0029c2; 	X(PUSH(cs));	// 51475 push    cs ;~ 18ED:29C2
cs=0x18ed;eip=0x0029c3; 	J(CALL(locate_text_res,0));	// 51476 call    near ptr locate_text_res ;~ 18ED:29C3
cs=0x18ed;eip=0x0029c6; 	T(ADD(sp, 6));	// 51477 add     sp, 6 ;~ 18ED:29C6
cs=0x18ed;eip=0x0029c9; 	X(PUSH(dx));	// 51478 push    dx ;~ 18ED:29C9
cs=0x18ed;eip=0x0029ca; 	X(PUSH(ax));	// 51479 push    ax ;~ 18ED:29CA
cs=0x18ed;eip=0x0029cb; 	T(MOV(ax, 1));	// 51480 mov     ax, 1 ;~ 18ED:29CB
cs=0x18ed;eip=0x0029ce; 	X(PUSH(ax));	// 51481 push    ax ;~ 18ED:29CE
cs=0x18ed;eip=0x0029cf; 	X(PUSH(ax));	// 51482 push    ax ;~ 18ED:29CF
cs=0x18ed;eip=0x0029d0; 	X(PUSH(cs));	// 51483 push    cs ;~ 18ED:29D0
cs=0x18ed;eip=0x0029d1; 	J(CALL(show_dialog,0));	// 51484 call    near ptr show_dialog ;~ 18ED:29D1
cs=0x18ed;eip=0x0029d4; 	T(ADD(sp, 0x12));	// 51485 add     sp, 12h ;~ 18ED:29D4
cs=0x18ed;eip=0x0029d7; 	X(MOV(word_3f88e, 0));	// 51486 mov     word_3F88E, 0 ;~ 18ED:29D7
cs=0x18ed;eip=0x0029dd; 	J(CALLF(sub_372f4,0));	// 51487 call    sub_372F4 ;~ 18ED:29DD
cs=0x18ed;eip=0x0029e2; 	X(PUSH(cs));	// 51488 push    cs ;~ 18ED:29E2
cs=0x18ed;eip=0x0029e3; 	J(CALL(input_pop_status,0));	// 51489 call    near ptr input_pop_status ;~ 18ED:29E3
cs=0x18ed;eip=0x0029e6; 	J(RETF(0));	// 51490 retf ;~ 18ED:29E6
do_mof_restext:
	// 51499 
cs=0x18ed;eip=0x0029e8; 	X(PUSH(cs));	// 51501 push    cs ;~ 18ED:29E8
cs=0x18ed;eip=0x0029e9; 	J(CALL(input_push_status,0));	// 51502 call    near ptr input_push_status ;~ 18ED:29E9
cs=0x18ed;eip=0x0029ec; 	X(MOV(word_3f88e, 1));	// 51503 mov     word_3F88E, 1 ;~ 18ED:29EC
cs=0x18ed;eip=0x0029f2; 	J(CALLF(audio_toggle_flag2,0));	// 51504 call    audio_toggle_flag2 ;~ 18ED:29F2
cs=0x18ed;eip=0x0029f7; 	T(OR(ax, ax));	// 51505 or      ax, ax ;~ 18ED:29F7
cs=0x18ed;eip=0x0029f9; 	J(JZ(loc_29ebe));	// 51506 jz      short loc_29EBE ;~ 18ED:29F9
cs=0x18ed;eip=0x0029fb; 	T(SUB(ax, ax));	// 51507 sub     ax, ax ;~ 18ED:29FB
cs=0x18ed;eip=0x0029fd; 	X(PUSH(ax));	// 51508 push    ax ;~ 18ED:29FD
cs=0x18ed;eip=0x0029fe; 	X(PUSH(ax));	// 51509 push    ax ;~ 18ED:29FE
cs=0x18ed;eip=0x0029ff; 	X(PUSH(dialogarg2));	// 51510 push    dialogarg2 ;~ 18ED:29FF
cs=0x18ed;eip=0x002a03; 	T(MOV(ax, 0x0FFFF));	// 51511 mov     ax, 0FFFFh ;~ 18ED:2A03
cs=0x18ed;eip=0x002a06; 	X(PUSH(ax));	// 51512 push    ax ;~ 18ED:2A06
cs=0x18ed;eip=0x002a07; 	X(PUSH(ax));	// 51513 push    ax ;~ 18ED:2A07
cs=0x18ed;eip=0x002a08; 	T(MOV(ax, offset(dseg,amon)));	// 51514 mov     ax, offset aMon ; "mon" ;~ 18ED:2A08
cs=0x18ed;eip=0x002a0b; 	J(JMP(loc_29ece));	// 51515 jmp     short loc_29ECE ;~ 18ED:2A0B
loc_29ebe:
	// 7701 
cs=0x18ed;eip=0x002a0e; 	T(SUB(ax, ax));	// 51520 sub     ax, ax ;~ 18ED:2A0E
cs=0x18ed;eip=0x002a10; 	X(PUSH(ax));	// 51521 push    ax ;~ 18ED:2A10
cs=0x18ed;eip=0x002a11; 	X(PUSH(ax));	// 51522 push    ax ;~ 18ED:2A11
cs=0x18ed;eip=0x002a12; 	X(PUSH(dialogarg2));	// 51523 push    dialogarg2 ;~ 18ED:2A12
cs=0x18ed;eip=0x002a16; 	T(MOV(ax, 0x0FFFF));	// 51524 mov     ax, 0FFFFh ;~ 18ED:2A16
cs=0x18ed;eip=0x002a19; 	X(PUSH(ax));	// 51525 push    ax ;~ 18ED:2A19
cs=0x18ed;eip=0x002a1a; 	X(PUSH(ax));	// 51526 push    ax ;~ 18ED:2A1A
cs=0x18ed;eip=0x002a1b; 	T(MOV(ax, offset(dseg,amof)));	// 51527 mov     ax, offset aMof ; "mof" ;~ 18ED:2A1B
loc_29ece:
	// 7702 
cs=0x18ed;eip=0x002a1e; 	X(PUSH(ax));	// 51530 push    ax ;~ 18ED:2A1E
cs=0x18ed;eip=0x002a1f; 	X(PUSH(word_44cee));	// 51531 push    word_44CEE ;~ 18ED:2A1F
cs=0x18ed;eip=0x002a23; 	X(PUSH(mainresptr));	// 51532 push    mainresptr ;~ 18ED:2A23
cs=0x18ed;eip=0x002a27; 	X(PUSH(cs));	// 51533 push    cs ;~ 18ED:2A27
cs=0x18ed;eip=0x002a28; 	J(CALL(locate_text_res,0));	// 51534 call    near ptr locate_text_res ;~ 18ED:2A28
cs=0x18ed;eip=0x002a2b; 	T(ADD(sp, 6));	// 51535 add     sp, 6 ;~ 18ED:2A2B
cs=0x18ed;eip=0x002a2e; 	X(PUSH(dx));	// 51536 push    dx ;~ 18ED:2A2E
cs=0x18ed;eip=0x002a2f; 	X(PUSH(ax));	// 51537 push    ax ;~ 18ED:2A2F
cs=0x18ed;eip=0x002a30; 	T(MOV(ax, 1));	// 51538 mov     ax, 1 ;~ 18ED:2A30
cs=0x18ed;eip=0x002a33; 	X(PUSH(ax));	// 51539 push    ax ;~ 18ED:2A33
cs=0x18ed;eip=0x002a34; 	T(MOV(ax, 4));	// 51540 mov     ax, 4 ;~ 18ED:2A34
cs=0x18ed;eip=0x002a37; 	X(PUSH(ax));	// 51541 push    ax ;~ 18ED:2A37
cs=0x18ed;eip=0x002a38; 	X(PUSH(cs));	// 51542 push    cs ;~ 18ED:2A38
cs=0x18ed;eip=0x002a39; 	J(CALL(show_dialog,0));	// 51543 call    near ptr show_dialog ;~ 18ED:2A39
cs=0x18ed;eip=0x002a3c; 	T(ADD(sp, 0x12));	// 51544 add     sp, 12h ;~ 18ED:2A3C
cs=0x18ed;eip=0x002a3f; 	X(MOV(word_3f88e, 0));	// 51545 mov     word_3F88E, 0 ;~ 18ED:2A3F
cs=0x18ed;eip=0x002a45; 	X(PUSH(cs));	// 51546 push    cs ;~ 18ED:2A45
cs=0x18ed;eip=0x002a46; 	J(CALL(input_pop_status,0));	// 51547 call    near ptr input_pop_status ;~ 18ED:2A46
cs=0x18ed;eip=0x002a49; 	J(RETF(0));	// 51548 retf ;~ 18ED:2A49
do_sonsof_restext:
	// 51555 
cs=0x18ed;eip=0x002a4a; 	X(PUSH(cs));	// 51557 push    cs ;~ 18ED:2A4A
cs=0x18ed;eip=0x002a4b; 	J(CALL(input_push_status,0));	// 51558 call    near ptr input_push_status ;~ 18ED:2A4B
cs=0x18ed;eip=0x002a4e; 	X(MOV(word_3f88e, 1));	// 51559 mov     word_3F88E, 1 ;~ 18ED:2A4E
cs=0x18ed;eip=0x002a54; 	J(CALLF(audio_toggle_flag6,0));	// 51560 call    audio_toggle_flag6 ;~ 18ED:2A54
cs=0x18ed;eip=0x002a59; 	T(OR(ax, ax));	// 51561 or      ax, ax ;~ 18ED:2A59
cs=0x18ed;eip=0x002a5b; 	J(JZ(loc_29f20));	// 51562 jz      short loc_29F20 ;~ 18ED:2A5B
cs=0x18ed;eip=0x002a5d; 	T(SUB(ax, ax));	// 51563 sub     ax, ax ;~ 18ED:2A5D
cs=0x18ed;eip=0x002a5f; 	X(PUSH(ax));	// 51564 push    ax ;~ 18ED:2A5F
cs=0x18ed;eip=0x002a60; 	X(PUSH(ax));	// 51565 push    ax ;~ 18ED:2A60
cs=0x18ed;eip=0x002a61; 	X(PUSH(dialogarg2));	// 51566 push    dialogarg2 ;~ 18ED:2A61
cs=0x18ed;eip=0x002a65; 	T(MOV(ax, 0x0FFFF));	// 51567 mov     ax, 0FFFFh ;~ 18ED:2A65
cs=0x18ed;eip=0x002a68; 	X(PUSH(ax));	// 51568 push    ax ;~ 18ED:2A68
cs=0x18ed;eip=0x002a69; 	X(PUSH(ax));	// 51569 push    ax ;~ 18ED:2A69
cs=0x18ed;eip=0x002a6a; 	T(MOV(ax, offset(dseg,ason)));	// 51570 mov     ax, offset aSon ; "son" ;~ 18ED:2A6A
cs=0x18ed;eip=0x002a6d; 	J(JMP(loc_29f30));	// 51571 jmp     short loc_29F30 ;~ 18ED:2A6D
loc_29f20:
	// 7703 
cs=0x18ed;eip=0x002a70; 	T(SUB(ax, ax));	// 51576 sub     ax, ax ;~ 18ED:2A70
cs=0x18ed;eip=0x002a72; 	X(PUSH(ax));	// 51577 push    ax ;~ 18ED:2A72
cs=0x18ed;eip=0x002a73; 	X(PUSH(ax));	// 51578 push    ax ;~ 18ED:2A73
cs=0x18ed;eip=0x002a74; 	X(PUSH(dialogarg2));	// 51579 push    dialogarg2 ;~ 18ED:2A74
cs=0x18ed;eip=0x002a78; 	T(MOV(ax, 0x0FFFF));	// 51580 mov     ax, 0FFFFh ;~ 18ED:2A78
cs=0x18ed;eip=0x002a7b; 	X(PUSH(ax));	// 51581 push    ax ;~ 18ED:2A7B
cs=0x18ed;eip=0x002a7c; 	X(PUSH(ax));	// 51582 push    ax ;~ 18ED:2A7C
cs=0x18ed;eip=0x002a7d; 	T(MOV(ax, offset(dseg,asof)));	// 51583 mov     ax, offset aSof ; "sof" ;~ 18ED:2A7D
loc_29f30:
	// 7704 
cs=0x18ed;eip=0x002a80; 	X(PUSH(ax));	// 51586 push    ax ;~ 18ED:2A80
cs=0x18ed;eip=0x002a81; 	X(PUSH(word_44cee));	// 51587 push    word_44CEE ;~ 18ED:2A81
cs=0x18ed;eip=0x002a85; 	X(PUSH(mainresptr));	// 51588 push    mainresptr ;~ 18ED:2A85
cs=0x18ed;eip=0x002a89; 	X(PUSH(cs));	// 51589 push    cs ;~ 18ED:2A89
cs=0x18ed;eip=0x002a8a; 	J(CALL(locate_text_res,0));	// 51590 call    near ptr locate_text_res ;~ 18ED:2A8A
cs=0x18ed;eip=0x002a8d; 	T(ADD(sp, 6));	// 51591 add     sp, 6 ;~ 18ED:2A8D
cs=0x18ed;eip=0x002a90; 	X(PUSH(dx));	// 51592 push    dx ;~ 18ED:2A90
cs=0x18ed;eip=0x002a91; 	X(PUSH(ax));	// 51593 push    ax ;~ 18ED:2A91
cs=0x18ed;eip=0x002a92; 	T(MOV(ax, 1));	// 51594 mov     ax, 1 ;~ 18ED:2A92
cs=0x18ed;eip=0x002a95; 	X(PUSH(ax));	// 51595 push    ax ;~ 18ED:2A95
cs=0x18ed;eip=0x002a96; 	T(MOV(ax, 4));	// 51596 mov     ax, 4 ;~ 18ED:2A96
cs=0x18ed;eip=0x002a99; 	X(PUSH(ax));	// 51597 push    ax ;~ 18ED:2A99
cs=0x18ed;eip=0x002a9a; 	X(PUSH(cs));	// 51598 push    cs ;~ 18ED:2A9A
cs=0x18ed;eip=0x002a9b; 	J(CALL(show_dialog,0));	// 51599 call    near ptr show_dialog ;~ 18ED:2A9B
cs=0x18ed;eip=0x002a9e; 	T(ADD(sp, 0x12));	// 51600 add     sp, 12h ;~ 18ED:2A9E
cs=0x18ed;eip=0x002aa1; 	X(MOV(word_3f88e, 0));	// 51601 mov     word_3F88E, 0 ;~ 18ED:2AA1
cs=0x18ed;eip=0x002aa7; 	X(PUSH(cs));	// 51602 push    cs ;~ 18ED:2AA7
cs=0x18ed;eip=0x002aa8; 	J(CALL(input_pop_status,0));	// 51603 call    near ptr input_pop_status ;~ 18ED:2AA8
cs=0x18ed;eip=0x002aab; 	J(RETF(0));	// 51604 retf ;~ 18ED:2AAB
do_dos_restext:
	// 51611 
cs=0x18ed;eip=0x002aac; 	X(PUSH(cs));	// 51613 push    cs ;~ 18ED:2AAC
cs=0x18ed;eip=0x002aad; 	J(CALL(input_push_status,0));	// 51614 call    near ptr input_push_status ;~ 18ED:2AAD
cs=0x18ed;eip=0x002ab0; 	X(MOV(word_3f88e, 1));	// 51615 mov     word_3F88E, 1 ;~ 18ED:2AB0
cs=0x18ed;eip=0x002ab6; 	J(CALLF(audio_unk,0));	// 51616 call    audio_unk ;~ 18ED:2AB6
cs=0x18ed;eip=0x002abb; 	T(SUB(ax, ax));	// 51617 sub     ax, ax ;~ 18ED:2ABB
cs=0x18ed;eip=0x002abd; 	X(PUSH(ax));	// 51618 push    ax ;~ 18ED:2ABD
cs=0x18ed;eip=0x002abe; 	X(PUSH(ax));	// 51619 push    ax ;~ 18ED:2ABE
cs=0x18ed;eip=0x002abf; 	X(PUSH(dialogarg2));	// 51620 push    dialogarg2 ;~ 18ED:2ABF
cs=0x18ed;eip=0x002ac3; 	T(MOV(ax, 0x0FFFF));	// 51621 mov     ax, 0FFFFh ;~ 18ED:2AC3
cs=0x18ed;eip=0x002ac6; 	X(PUSH(ax));	// 51622 push    ax ;~ 18ED:2AC6
cs=0x18ed;eip=0x002ac7; 	X(PUSH(ax));	// 51623 push    ax ;~ 18ED:2AC7
cs=0x18ed;eip=0x002ac8; 	T(MOV(ax, offset(dseg,ados_0)));	// 51624 mov     ax, offset aDos_0 ; "dos" ;~ 18ED:2AC8
cs=0x18ed;eip=0x002acb; 	X(PUSH(ax));	// 51625 push    ax ;~ 18ED:2ACB
cs=0x18ed;eip=0x002acc; 	X(PUSH(word_44cee));	// 51626 push    word_44CEE ;~ 18ED:2ACC
cs=0x18ed;eip=0x002ad0; 	X(PUSH(mainresptr));	// 51627 push    mainresptr ;~ 18ED:2AD0
cs=0x18ed;eip=0x002ad4; 	X(PUSH(cs));	// 51628 push    cs ;~ 18ED:2AD4
cs=0x18ed;eip=0x002ad5; 	J(CALL(locate_text_res,0));	// 51629 call    near ptr locate_text_res ;~ 18ED:2AD5
cs=0x18ed;eip=0x002ad8; 	T(ADD(sp, 6));	// 51630 add     sp, 6 ;~ 18ED:2AD8
cs=0x18ed;eip=0x002adb; 	X(PUSH(dx));	// 51631 push    dx ;~ 18ED:2ADB
cs=0x18ed;eip=0x002adc; 	X(PUSH(ax));	// 51632 push    ax ;~ 18ED:2ADC
cs=0x18ed;eip=0x002add; 	T(MOV(ax, 1));	// 51633 mov     ax, 1 ;~ 18ED:2ADD
cs=0x18ed;eip=0x002ae0; 	X(PUSH(ax));	// 51634 push    ax ;~ 18ED:2AE0
cs=0x18ed;eip=0x002ae1; 	T(MOV(ax, 2));	// 51635 mov     ax, 2 ;~ 18ED:2AE1
cs=0x18ed;eip=0x002ae4; 	X(PUSH(ax));	// 51636 push    ax ;~ 18ED:2AE4
cs=0x18ed;eip=0x002ae5; 	X(PUSH(cs));	// 51637 push    cs ;~ 18ED:2AE5
cs=0x18ed;eip=0x002ae6; 	J(CALL(show_dialog,0));	// 51638 call    near ptr show_dialog ;~ 18ED:2AE6
cs=0x18ed;eip=0x002ae9; 	T(ADD(sp, 0x12));	// 51639 add     sp, 12h ;~ 18ED:2AE9
cs=0x18ed;eip=0x002aec; 	T(CMP(ax, 1));	// 51640 cmp     ax, 1 ;~ 18ED:2AEC
cs=0x18ed;eip=0x002aef; 	J(JNZ(loc_29fa6));	// 51641 jnz     short loc_29FA6 ;~ 18ED:2AEF
cs=0x18ed;eip=0x002af1; 	J(CALLF(call_exitlist2,0));	// 51642 call    far ptr call_exitlist2 ;~ 18ED:2AF1
loc_29fa6:
	// 7705 
cs=0x18ed;eip=0x002af6; 	X(MOV(word_3f88e, 0));	// 51646 mov     word_3F88E, 0 ;~ 18ED:2AF6
cs=0x18ed;eip=0x002afc; 	J(CALLF(sub_372f4,0));	// 51647 call    sub_372F4 ;~ 18ED:2AFC
cs=0x18ed;eip=0x002b01; 	X(PUSH(cs));	// 51648 push    cs ;~ 18ED:2B01
cs=0x18ed;eip=0x002b02; 	J(CALL(input_pop_status,0));	// 51649 call    near ptr input_pop_status ;~ 18ED:2B02
cs=0x18ed;eip=0x002b05; 	J(RETF(0));	// 51650 retf ;~ 18ED:2B05
do_mrl_textres:
	// 51658 
#undef var_212
#define var_212 -0x212
	// 51662 var_212         = word ptr -212h ;~ 18ED:2B06
#undef var_20c
#define var_20c -0x20C
	// 51663 var_20C         = byte ptr -20Ch ;~ 18ED:2B06
#undef var_205
#define var_205 -0x205
	// 51664 var_205         = byte ptr -205h ;~ 18ED:2B06
#undef var_204
#define var_204 -0x204
	// 51665 var_204         = byte ptr -204h ;~ 18ED:2B06
#undef var_202
#define var_202 -0x202
	// 51666 var_202         = byte ptr -202h ;~ 18ED:2B06
#undef var_201
#define var_201 -0x201
	// 51667 var_201         = byte ptr -201h ;~ 18ED:2B06
#undef var_2
#define var_2 -2
	// 51668 var_2           = byte ptr -2 ;~ 18ED:2B06
cs=0x18ed;eip=0x002b06; 	X(PUSH(bp));	// 51670 push    bp ;~ 18ED:2B06
cs=0x18ed;eip=0x002b07; 	T(MOV(bp, sp));	// 51671 mov     bp, sp ;~ 18ED:2B07
cs=0x18ed;eip=0x002b09; 	T(SUB(sp, 0x212));	// 51672 sub     sp, 212h ;~ 18ED:2B09
cs=0x18ed;eip=0x002b0d; 	X(PUSH(di));	// 51673 push    di ;~ 18ED:2B0D
cs=0x18ed;eip=0x002b0e; 	X(PUSH(si));	// 51674 push    si ;~ 18ED:2B0E
cs=0x18ed;eip=0x002b0f; 	X(PUSH(cs));	// 51675 push    cs ;~ 18ED:2B0F
cs=0x18ed;eip=0x002b10; 	J(CALL(input_push_status,0));	// 51676 call    near ptr input_push_status ;~ 18ED:2B10
cs=0x18ed;eip=0x002b13; 	X(MOV(word_3f88e, 1));	// 51677 mov     word_3F88E, 1 ;~ 18ED:2B13
cs=0x18ed;eip=0x002b19; 	J(CALLF(audio_unk,0));	// 51678 call    audio_unk ;~ 18ED:2B19
cs=0x18ed;eip=0x002b1e; 	T(MOV(ax, framespersec2));	// 51679 mov     ax, framespersec2 ;~ 18ED:2B1E
cs=0x18ed;eip=0x002b21; 	X(MOV(*(dw*)(raddr(ss,bp+var_212)), ax));	// 51680 mov     [bp+var_212], ax ;~ 18ED:2B21
cs=0x18ed;eip=0x002b25; 	X(MOV(*(raddr(ss,bp+var_2)), 0));	// 51681 mov     [bp+var_2], 0 ;~ 18ED:2B25
loc_29fd9:
	// 7706 
cs=0x18ed;eip=0x002b29; 	T(MOV(ax, offset(dseg,amrl)));	// 51685 mov     ax, offset aMrl ; "mrl" ;~ 18ED:2B29
cs=0x18ed;eip=0x002b2c; 	X(PUSH(ax));	// 51686 push    ax ;~ 18ED:2B2C
cs=0x18ed;eip=0x002b2d; 	X(PUSH(word_44cee));	// 51687 push    word_44CEE ;~ 18ED:2B2D
cs=0x18ed;eip=0x002b31; 	X(PUSH(mainresptr));	// 51688 push    mainresptr ;~ 18ED:2B31
cs=0x18ed;eip=0x002b35; 	X(PUSH(cs));	// 51689 push    cs ;~ 18ED:2B35
cs=0x18ed;eip=0x002b36; 	J(CALL(locate_text_res,0));	// 51690 call    near ptr locate_text_res ;~ 18ED:2B36
cs=0x18ed;eip=0x002b39; 	T(ADD(sp, 6));	// 51691 add     sp, 6 ;~ 18ED:2B39
cs=0x18ed;eip=0x002b3c; 	X(PUSH(dx));	// 51692 push    dx ;~ 18ED:2B3C
cs=0x18ed;eip=0x002b3d; 	X(PUSH(ax));	// 51693 push    ax ;~ 18ED:2B3D
cs=0x18ed;eip=0x002b3e; 	T(ax = bp+var_202);	// 51694 lea     ax, [bp+var_202] ;~ 18ED:2B3E
cs=0x18ed;eip=0x002b42; 	X(PUSH(ax));	// 51695 push    ax ;~ 18ED:2B42
cs=0x18ed;eip=0x002b43; 	X(PUSH(cs));	// 51696 push    cs ;~ 18ED:2B43
cs=0x18ed;eip=0x002b44; 	J(CALL(copy_string,0));	// 51697 call    near ptr copy_string ;~ 18ED:2B44
cs=0x18ed;eip=0x002b47; 	T(ADD(sp, 6));	// 51698 add     sp, 6 ;~ 18ED:2B47
cs=0x18ed;eip=0x002b4a; 	T(SUB(si, si));	// 51699 sub     si, si ;~ 18ED:2B4A
loc_29ffc:
	// 7707 
cs=0x18ed;eip=0x002b4c; 	X(MOV(*(raddr(ss,bp+si+var_20c)), 0));	// 51702 mov     [bp+si+var_20C], 0 ;~ 18ED:2B4C
cs=0x18ed;eip=0x002b51; 	T(INC(si));	// 51703 inc     si ;~ 18ED:2B51
cs=0x18ed;eip=0x002b52; 	T(CMP(si, 9));	// 51704 cmp     si, 9 ;~ 18ED:2B52
cs=0x18ed;eip=0x002b55; 	J(JL(loc_29ffc));	// 51705 jl      short loc_29FFC ;~ 18ED:2B55
cs=0x18ed;eip=0x002b57; 	T(MOV(bl, timertestflag2));	// 51706 mov     bl, timertestflag2 ;~ 18ED:2B57
cs=0x18ed;eip=0x002b5b; 	T(SUB(bh, bh));	// 51707 sub     bh, bh ;~ 18ED:2B5B
cs=0x18ed;eip=0x002b5d; 	T(ADD(bx, bp));	// 51708 add     bx, bp ;~ 18ED:2B5D
cs=0x18ed;eip=0x002b5f; 	X(MOV(*(raddr(ds,bx-0x20C)), 1));	// 51709 mov     byte ptr [bx-20Ch], 1 ;~ 18ED:2B5F
cs=0x18ed;eip=0x002b64; 	T(MOV(bx, timertestflag));	// 51710 mov     bx, timertestflag ;~ 18ED:2B64
cs=0x18ed;eip=0x002b68; 	T(ADD(bx, bp));	// 51711 add     bx, bp ;~ 18ED:2B68
cs=0x18ed;eip=0x002b6a; 	X(MOV(*(raddr(ds,bx-0x207)), 1));	// 51712 mov     byte ptr [bx-207h], 1 ;~ 18ED:2B6A
cs=0x18ed;eip=0x002b6f; 	T(CMP(framespersec2, 0x0A));	// 51713 cmp     framespersec2, 0Ah ;~ 18ED:2B6F
cs=0x18ed;eip=0x002b74; 	J(JNZ(loc_2a02e));	// 51714 jnz     short loc_2A02E ;~ 18ED:2B74
cs=0x18ed;eip=0x002b76; 	X(MOV(*(raddr(ss,bp+var_205)), 1));	// 51715 mov     [bp+var_205], 1 ;~ 18ED:2B76
cs=0x18ed;eip=0x002b7b; 	J(JMP(loc_2a033));	// 51716 jmp     short loc_2A033 ;~ 18ED:2B7B
loc_2a02e:
	// 7708 
cs=0x18ed;eip=0x002b7e; 	X(MOV(*(raddr(ss,bp+var_204)), 1));	// 51721 mov     [bp+var_204], 1 ;~ 18ED:2B7E
loc_2a033:
	// 7709 
cs=0x18ed;eip=0x002b83; 	T(SUB(di, di));	// 51724 sub     di, di ;~ 18ED:2B83
cs=0x18ed;eip=0x002b85; 	T(SUB(si, si));	// 51725 sub     si, si ;~ 18ED:2B85
cs=0x18ed;eip=0x002b87; 	J(JMP(loc_2a050));	// 51726 jmp     short loc_2A050 ;~ 18ED:2B87
loc_2a03a:
	// 7710 
cs=0x18ed;eip=0x002b8a; 	T(INC(di));	// 51731 inc     di ;~ 18ED:2B8A
loc_2a03b:
	// 7711 
cs=0x18ed;eip=0x002b8b; 	T(CMP(*(raddr(ss,bp+di+var_202)), 0x5B));	// 51734 cmp     [bp+di+var_202], 5Bh ; '[' ;~ 18ED:2B8B
cs=0x18ed;eip=0x002b90; 	J(JNZ(loc_2a03a));	// 51735 jnz     short loc_2A03A ;~ 18ED:2B90
cs=0x18ed;eip=0x002b92; 	T(CMP(*(raddr(ss,bp+si+var_20c)), 0));	// 51736 cmp     [bp+si+var_20C], 0 ;~ 18ED:2B92
cs=0x18ed;eip=0x002b97; 	J(JZ(loc_2a04e));	// 51737 jz      short loc_2A04E ;~ 18ED:2B97
cs=0x18ed;eip=0x002b99; 	X(MOV(*(raddr(ss,bp+di+var_201)), 0x2A));	// 51738 mov     [bp+di+var_201], 2Ah ; '*' ;~ 18ED:2B99
loc_2a04e:
	// 7712 
cs=0x18ed;eip=0x002b9e; 	T(INC(di));	// 51741 inc     di ;~ 18ED:2B9E
cs=0x18ed;eip=0x002b9f; 	T(INC(si));	// 51742 inc     si ;~ 18ED:2B9F
loc_2a050:
	// 7713 
cs=0x18ed;eip=0x002ba0; 	T(CMP(si, 9));	// 51745 cmp     si, 9 ;~ 18ED:2BA0
cs=0x18ed;eip=0x002ba3; 	J(JL(loc_2a03b));	// 51746 jl      short loc_2A03B ;~ 18ED:2BA3
cs=0x18ed;eip=0x002ba5; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 51747 mov     al, [bp+var_2] ;~ 18ED:2BA5
cs=0x18ed;eip=0x002ba8; 	T(CBW);	// 51748 cbw ;~ 18ED:2BA8
cs=0x18ed;eip=0x002ba9; 	X(PUSH(ax));	// 51749 push    ax ;~ 18ED:2BA9
cs=0x18ed;eip=0x002baa; 	T(SUB(ax, ax));	// 51750 sub     ax, ax ;~ 18ED:2BAA
cs=0x18ed;eip=0x002bac; 	X(PUSH(ax));	// 51751 push    ax ;~ 18ED:2BAC
cs=0x18ed;eip=0x002bad; 	X(PUSH(performgraphcolor));	// 51752 push    performGraphColor ;~ 18ED:2BAD
cs=0x18ed;eip=0x002bb1; 	T(MOV(ax, 0x0FFFF));	// 51753 mov     ax, 0FFFFh ;~ 18ED:2BB1
cs=0x18ed;eip=0x002bb4; 	X(PUSH(ax));	// 51754 push    ax ;~ 18ED:2BB4
cs=0x18ed;eip=0x002bb5; 	X(PUSH(ax));	// 51755 push    ax ;~ 18ED:2BB5
cs=0x18ed;eip=0x002bb6; 	T(ax = bp+var_202);	// 51756 lea     ax, [bp+var_202] ;~ 18ED:2BB6
cs=0x18ed;eip=0x002bba; 	X(PUSH(ss));	// 51757 push    ss ;~ 18ED:2BBA
cs=0x18ed;eip=0x002bbb; 	X(PUSH(ax));	// 51758 push    ax ;~ 18ED:2BBB
cs=0x18ed;eip=0x002bbc; 	T(MOV(ax, 1));	// 51759 mov     ax, 1 ;~ 18ED:2BBC
cs=0x18ed;eip=0x002bbf; 	X(PUSH(ax));	// 51760 push    ax ;~ 18ED:2BBF
cs=0x18ed;eip=0x002bc0; 	T(MOV(ax, 2));	// 51761 mov     ax, 2 ;~ 18ED:2BC0
cs=0x18ed;eip=0x002bc3; 	X(PUSH(ax));	// 51762 push    ax ;~ 18ED:2BC3
cs=0x18ed;eip=0x002bc4; 	X(PUSH(cs));	// 51763 push    cs ;~ 18ED:2BC4
cs=0x18ed;eip=0x002bc5; 	J(CALL(show_dialog,0));	// 51764 call    near ptr show_dialog ;~ 18ED:2BC5
cs=0x18ed;eip=0x002bc8; 	T(ADD(sp, 0x12));	// 51765 add     sp, 12h ;~ 18ED:2BC8
cs=0x18ed;eip=0x002bcb; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 51766 mov     [bp+var_2], al ;~ 18ED:2BCB
cs=0x18ed;eip=0x002bce; 	T(CBW);	// 51767 cbw ;~ 18ED:2BCE
cs=0x18ed;eip=0x002bcf; 	T(CMP(ax, 0x0FFFF));	// 51768 cmp     ax, 0FFFFh ;~ 18ED:2BCF
cs=0x18ed;eip=0x002bd2; 	J(JZ(loc_2a0cc));	// 51769 jz      short loc_2A0CC ;~ 18ED:2BD2
cs=0x18ed;eip=0x002bd4; 	T(CMP(ax, 5));	// 51770 cmp     ax, 5 ;~ 18ED:2BD4
cs=0x18ed;eip=0x002bd7; 	J(JZ(loc_2a0a4));	// 51771 jz      short loc_2A0A4 ;~ 18ED:2BD7
cs=0x18ed;eip=0x002bd9; 	T(CMP(ax, 6));	// 51772 cmp     ax, 6 ;~ 18ED:2BD9
cs=0x18ed;eip=0x002bdc; 	J(JZ(loc_2a0ae));	// 51773 jz      short loc_2A0AE ;~ 18ED:2BDC
cs=0x18ed;eip=0x002bde; 	T(CMP(ax, 7));	// 51774 cmp     ax, 7 ;~ 18ED:2BDE
cs=0x18ed;eip=0x002be1; 	J(JZ(loc_2a0b8));	// 51775 jz      short loc_2A0B8 ;~ 18ED:2BE1
cs=0x18ed;eip=0x002be3; 	T(CMP(ax, 8));	// 51776 cmp     ax, 8 ;~ 18ED:2BE3
cs=0x18ed;eip=0x002be6; 	J(JZ(loc_2a0c2));	// 51777 jz      short loc_2A0C2 ;~ 18ED:2BE6
cs=0x18ed;eip=0x002be8; 	T(CMP(ax, 9));	// 51778 cmp     ax, 9 ;~ 18ED:2BE8
cs=0x18ed;eip=0x002beb; 	J(JZ(loc_2a0cc));	// 51779 jz      short loc_2A0CC ;~ 18ED:2BEB
cs=0x18ed;eip=0x002bed; 	X(MOV(timertestflag2, al));	// 51780 mov     timertestflag2, al ;~ 18ED:2BED
cs=0x18ed;eip=0x002bf0; 	J(JMP(loc_29fd9));	// 51781 jmp     loc_29FD9 ;~ 18ED:2BF0
loc_2a0a4:
	// 7714 
cs=0x18ed;eip=0x002bf4; 	X(MOV(timertestflag, 0));	// 51786 mov     timertestflag, 0 ;~ 18ED:2BF4
cs=0x18ed;eip=0x002bfa; 	J(JMP(loc_29fd9));	// 51787 jmp     loc_29FD9 ;~ 18ED:2BFA
loc_2a0ae:
	// 7715 
cs=0x18ed;eip=0x002bfe; 	X(MOV(timertestflag, 1));	// 51792 mov     timertestflag, 1 ;~ 18ED:2BFE
cs=0x18ed;eip=0x002c04; 	J(JMP(loc_29fd9));	// 51793 jmp     loc_29FD9 ;~ 18ED:2C04
loc_2a0b8:
	// 7716 
cs=0x18ed;eip=0x002c08; 	X(MOV(framespersec2, 0x0A));	// 51798 mov     framespersec2, 0Ah ;~ 18ED:2C08
cs=0x18ed;eip=0x002c0e; 	J(JMP(loc_29fd9));	// 51799 jmp     loc_29FD9 ;~ 18ED:2C0E
loc_2a0c2:
	// 7717 
cs=0x18ed;eip=0x002c12; 	X(MOV(framespersec2, 0x14));	// 51804 mov     framespersec2, 14h ;~ 18ED:2C12
cs=0x18ed;eip=0x002c18; 	J(JMP(loc_29fd9));	// 51805 jmp     loc_29FD9 ;~ 18ED:2C18
loc_2a0cc:
	// 7718 
cs=0x18ed;eip=0x002c1c; 	T(MOV(ax, framespersec2));	// 51811 mov     ax, framespersec2 ;~ 18ED:2C1C
cs=0x18ed;eip=0x002c1f; 	T(CMP(*(dw*)(raddr(ss,bp+var_212)), ax));	// 51812 cmp     [bp+var_212], ax ;~ 18ED:2C1F
cs=0x18ed;eip=0x002c23; 	J(JZ(loc_2a103));	// 51813 jz      short loc_2A103 ;~ 18ED:2C23
cs=0x18ed;eip=0x002c25; 	T(SUB(ax, ax));	// 51814 sub     ax, ax ;~ 18ED:2C25
cs=0x18ed;eip=0x002c27; 	X(PUSH(ax));	// 51815 push    ax ;~ 18ED:2C27
cs=0x18ed;eip=0x002c28; 	X(PUSH(ax));	// 51816 push    ax ;~ 18ED:2C28
cs=0x18ed;eip=0x002c29; 	X(PUSH(dialogarg2));	// 51817 push    dialogarg2 ;~ 18ED:2C29
cs=0x18ed;eip=0x002c2d; 	T(MOV(ax, 0x0FFFF));	// 51818 mov     ax, 0FFFFh ;~ 18ED:2C2D
cs=0x18ed;eip=0x002c30; 	X(PUSH(ax));	// 51819 push    ax ;~ 18ED:2C30
cs=0x18ed;eip=0x002c31; 	X(PUSH(ax));	// 51820 push    ax ;~ 18ED:2C31
cs=0x18ed;eip=0x002c32; 	T(MOV(ax, offset(dseg,amrs)));	// 51821 mov     ax, offset aMrs ; "mrs" ;~ 18ED:2C32
cs=0x18ed;eip=0x002c35; 	X(PUSH(ax));	// 51822 push    ax ;~ 18ED:2C35
cs=0x18ed;eip=0x002c36; 	X(PUSH(word_44cee));	// 51823 push    word_44CEE ;~ 18ED:2C36
cs=0x18ed;eip=0x002c3a; 	X(PUSH(mainresptr));	// 51824 push    mainresptr ;~ 18ED:2C3A
cs=0x18ed;eip=0x002c3e; 	X(PUSH(cs));	// 51825 push    cs ;~ 18ED:2C3E
cs=0x18ed;eip=0x002c3f; 	J(CALL(locate_text_res,0));	// 51826 call    near ptr locate_text_res ;~ 18ED:2C3F
cs=0x18ed;eip=0x002c42; 	T(ADD(sp, 6));	// 51827 add     sp, 6 ;~ 18ED:2C42
cs=0x18ed;eip=0x002c45; 	X(PUSH(dx));	// 51828 push    dx ;~ 18ED:2C45
cs=0x18ed;eip=0x002c46; 	X(PUSH(ax));	// 51829 push    ax ;~ 18ED:2C46
cs=0x18ed;eip=0x002c47; 	T(MOV(ax, 1));	// 51830 mov     ax, 1 ;~ 18ED:2C47
cs=0x18ed;eip=0x002c4a; 	X(PUSH(ax));	// 51831 push    ax ;~ 18ED:2C4A
cs=0x18ed;eip=0x002c4b; 	X(PUSH(ax));	// 51832 push    ax ;~ 18ED:2C4B
cs=0x18ed;eip=0x002c4c; 	X(PUSH(cs));	// 51833 push    cs ;~ 18ED:2C4C
cs=0x18ed;eip=0x002c4d; 	J(CALL(show_dialog,0));	// 51834 call    near ptr show_dialog ;~ 18ED:2C4D
cs=0x18ed;eip=0x002c50; 	T(ADD(sp, 0x12));	// 51835 add     sp, 12h ;~ 18ED:2C50
loc_2a103:
	// 7719 
cs=0x18ed;eip=0x002c53; 	X(MOV(word_3f88e, 0));	// 51838 mov     word_3F88E, 0 ;~ 18ED:2C53
cs=0x18ed;eip=0x002c59; 	J(CALLF(sub_372f4,0));	// 51839 call    sub_372F4 ;~ 18ED:2C59
cs=0x18ed;eip=0x002c5e; 	X(PUSH(cs));	// 51840 push    cs ;~ 18ED:2C5E
cs=0x18ed;eip=0x002c5f; 	J(CALL(input_pop_status,0));	// 51841 call    near ptr input_pop_status ;~ 18ED:2C5F
cs=0x18ed;eip=0x002c62; 	X(POP(si));	// 51842 pop     si ;~ 18ED:2C62
cs=0x18ed;eip=0x002c63; 	X(POP(di));	// 51843 pop     di ;~ 18ED:2C63
cs=0x18ed;eip=0x002c64; 	T(MOV(sp, bp));	// 51844 mov     sp, bp ;~ 18ED:2C64
cs=0x18ed;eip=0x002c66; 	X(POP(bp));	// 51845 pop     bp ;~ 18ED:2C66
cs=0x18ed;eip=0x002c67; 	J(RETF(0));	// 51846 retf ;~ 18ED:2C67
do_dea_textres:
	// 51854 
#undef var_2
#define var_2 -2
	// 51857 var_2           = word ptr -2 ;~ 18ED:2C68
cs=0x18ed;eip=0x002c68; 	X(PUSH(bp));	// 51859 push    bp ;~ 18ED:2C68
cs=0x18ed;eip=0x002c69; 	T(MOV(bp, sp));	// 51860 mov     bp, sp ;~ 18ED:2C69
cs=0x18ed;eip=0x002c6b; 	T(SUB(sp, 2));	// 51861 sub     sp, 2 ;~ 18ED:2C6B
cs=0x18ed;eip=0x002c6e; 	X(PUSH(cs));	// 51862 push    cs ;~ 18ED:2C6E
cs=0x18ed;eip=0x002c6f; 	J(CALL(input_push_status,0));	// 51863 call    near ptr input_push_status ;~ 18ED:2C6F
cs=0x18ed;eip=0x002c72; 	T(CMP(g_is_busy, 0));	// 51864 cmp     g_is_busy, 0 ;~ 18ED:2C72
cs=0x18ed;eip=0x002c77; 	J(JZ(loc_2a168));	// 51865 jz      short loc_2A168 ;~ 18ED:2C77
cs=0x18ed;eip=0x002c79; 	T(SUB(ax, ax));	// 51866 sub     ax, ax ;~ 18ED:2C79
cs=0x18ed;eip=0x002c7b; 	X(PUSH(ax));	// 51867 push    ax ;~ 18ED:2C7B
cs=0x18ed;eip=0x002c7c; 	X(PUSH(ax));	// 51868 push    ax ;~ 18ED:2C7C
cs=0x18ed;eip=0x002c7d; 	X(PUSH(dialogarg2));	// 51869 push    dialogarg2 ;~ 18ED:2C7D
cs=0x18ed;eip=0x002c81; 	T(MOV(ax, 0x0FFFF));	// 51870 mov     ax, 0FFFFh ;~ 18ED:2C81
cs=0x18ed;eip=0x002c84; 	X(PUSH(ax));	// 51871 push    ax ;~ 18ED:2C84
cs=0x18ed;eip=0x002c85; 	X(PUSH(ax));	// 51872 push    ax ;~ 18ED:2C85
cs=0x18ed;eip=0x002c86; 	T(MOV(ax, offset(dseg,adea)));	// 51873 mov     ax, offset aDea ; "dea" ;~ 18ED:2C86
cs=0x18ed;eip=0x002c89; 	X(PUSH(ax));	// 51874 push    ax ;~ 18ED:2C89
cs=0x18ed;eip=0x002c8a; 	X(PUSH(word_44cee));	// 51875 push    word_44CEE ;~ 18ED:2C8A
cs=0x18ed;eip=0x002c8e; 	X(PUSH(mainresptr));	// 51876 push    mainresptr ;~ 18ED:2C8E
cs=0x18ed;eip=0x002c92; 	X(PUSH(cs));	// 51877 push    cs ;~ 18ED:2C92
cs=0x18ed;eip=0x002c93; 	J(CALL(locate_text_res,0));	// 51878 call    near ptr locate_text_res ;~ 18ED:2C93
cs=0x18ed;eip=0x002c96; 	T(ADD(sp, 6));	// 51879 add     sp, 6 ;~ 18ED:2C96
cs=0x18ed;eip=0x002c99; 	X(PUSH(dx));	// 51880 push    dx ;~ 18ED:2C99
cs=0x18ed;eip=0x002c9a; 	X(PUSH(ax));	// 51881 push    ax ;~ 18ED:2C9A
cs=0x18ed;eip=0x002c9b; 	T(MOV(ax, 1));	// 51882 mov     ax, 1 ;~ 18ED:2C9B
cs=0x18ed;eip=0x002c9e; 	X(PUSH(ax));	// 51883 push    ax ;~ 18ED:2C9E
cs=0x18ed;eip=0x002c9f; 	T(MOV(ax, 2));	// 51884 mov     ax, 2 ;~ 18ED:2C9F
cs=0x18ed;eip=0x002ca2; 	X(PUSH(ax));	// 51885 push    ax ;~ 18ED:2CA2
cs=0x18ed;eip=0x002ca3; 	X(PUSH(cs));	// 51886 push    cs ;~ 18ED:2CA3
cs=0x18ed;eip=0x002ca4; 	J(CALL(show_dialog,0));	// 51887 call    near ptr show_dialog ;~ 18ED:2CA4
cs=0x18ed;eip=0x002ca7; 	T(ADD(sp, 0x12));	// 51888 add     sp, 12h ;~ 18ED:2CA7
cs=0x18ed;eip=0x002caa; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 51889 mov     [bp+var_2], ax ;~ 18ED:2CAA
cs=0x18ed;eip=0x002cad; 	T(OR(ax, ax));	// 51890 or      ax, ax ;~ 18ED:2CAD
cs=0x18ed;eip=0x002caf; 	J(JZ(loc_2a196));	// 51891 jz      short loc_2A196 ;~ 18ED:2CAF
cs=0x18ed;eip=0x002cb1; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 51892 mov     [bp+var_2], 0 ;~ 18ED:2CB1
cs=0x18ed;eip=0x002cb6; 	J(JMP(loc_2a19b));	// 51893 jmp     short loc_2A19B ;~ 18ED:2CB6
loc_2a168:
	// 7720 
cs=0x18ed;eip=0x002cb8; 	T(SUB(ax, ax));	// 51897 sub     ax, ax ;~ 18ED:2CB8
cs=0x18ed;eip=0x002cba; 	X(PUSH(ax));	// 51898 push    ax ;~ 18ED:2CBA
cs=0x18ed;eip=0x002cbb; 	X(PUSH(ax));	// 51899 push    ax ;~ 18ED:2CBB
cs=0x18ed;eip=0x002cbc; 	X(PUSH(dialogarg2));	// 51900 push    dialogarg2 ;~ 18ED:2CBC
cs=0x18ed;eip=0x002cc0; 	T(MOV(ax, 0x0FFFF));	// 51901 mov     ax, 0FFFFh ;~ 18ED:2CC0
cs=0x18ed;eip=0x002cc3; 	X(PUSH(ax));	// 51902 push    ax ;~ 18ED:2CC3
cs=0x18ed;eip=0x002cc4; 	X(PUSH(ax));	// 51903 push    ax ;~ 18ED:2CC4
cs=0x18ed;eip=0x002cc5; 	T(MOV(ax, offset(dseg,ader)));	// 51904 mov     ax, offset aDer ; "der" ;~ 18ED:2CC5
cs=0x18ed;eip=0x002cc8; 	X(PUSH(ax));	// 51905 push    ax ;~ 18ED:2CC8
cs=0x18ed;eip=0x002cc9; 	X(PUSH(word_44cee));	// 51906 push    word_44CEE ;~ 18ED:2CC9
cs=0x18ed;eip=0x002ccd; 	X(PUSH(mainresptr));	// 51907 push    mainresptr ;~ 18ED:2CCD
cs=0x18ed;eip=0x002cd1; 	X(PUSH(cs));	// 51908 push    cs ;~ 18ED:2CD1
cs=0x18ed;eip=0x002cd2; 	J(CALL(locate_text_res,0));	// 51909 call    near ptr locate_text_res ;~ 18ED:2CD2
cs=0x18ed;eip=0x002cd5; 	T(ADD(sp, 6));	// 51910 add     sp, 6 ;~ 18ED:2CD5
cs=0x18ed;eip=0x002cd8; 	X(PUSH(dx));	// 51911 push    dx ;~ 18ED:2CD8
cs=0x18ed;eip=0x002cd9; 	X(PUSH(ax));	// 51912 push    ax ;~ 18ED:2CD9
cs=0x18ed;eip=0x002cda; 	T(MOV(ax, 1));	// 51913 mov     ax, 1 ;~ 18ED:2CDA
cs=0x18ed;eip=0x002cdd; 	X(PUSH(ax));	// 51914 push    ax ;~ 18ED:2CDD
cs=0x18ed;eip=0x002cde; 	X(PUSH(ax));	// 51915 push    ax ;~ 18ED:2CDE
cs=0x18ed;eip=0x002cdf; 	X(PUSH(cs));	// 51916 push    cs ;~ 18ED:2CDF
cs=0x18ed;eip=0x002ce0; 	J(CALL(show_dialog,0));	// 51917 call    near ptr show_dialog ;~ 18ED:2CE0
cs=0x18ed;eip=0x002ce3; 	T(ADD(sp, 0x12));	// 51918 add     sp, 12h ;~ 18ED:2CE3
loc_2a196:
	// 7721 
cs=0x18ed;eip=0x002ce6; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 1));	// 51921 mov     [bp+var_2], 1 ;~ 18ED:2CE6
loc_2a19b:
	// 7722 
cs=0x18ed;eip=0x002ceb; 	X(PUSH(cs));	// 51924 push    cs ;~ 18ED:2CEB
cs=0x18ed;eip=0x002cec; 	J(CALL(input_pop_status,0));	// 51925 call    near ptr input_pop_status ;~ 18ED:2CEC
cs=0x18ed;eip=0x002cef; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 51926 mov     ax, [bp+var_2] ;~ 18ED:2CEF
cs=0x18ed;eip=0x002cf2; 	T(MOV(sp, bp));	// 51927 mov     sp, bp ;~ 18ED:2CF2
cs=0x18ed;eip=0x002cf4; 	X(POP(bp));	// 51928 pop     bp ;~ 18ED:2CF4
cs=0x18ed;eip=0x002cf5; 	J(RETF(0));	// 51929 retf ;~ 18ED:2CF5

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kdo_dea_textres: 	goto do_dea_textres;
        case m2c::kdo_dos_restext: 	goto do_dos_restext;
        case m2c::kdo_joy_restext: 	goto do_joy_restext;
        case m2c::kdo_key_restext: 	goto do_key_restext;
        case m2c::kdo_mof_restext: 	goto do_mof_restext;
        case m2c::kdo_mrl_textres: 	goto do_mrl_textres;
        case m2c::kdo_pau_restext: 	goto do_pau_restext;
        case m2c::kdo_sonsof_restext: 	goto do_sonsof_restext;
        case m2c::kloc_29b84: 	goto loc_29b84;
        case m2c::kloc_29b89: 	goto loc_29b89;
        case m2c::kloc_29c96: 	goto loc_29c96;
        case m2c::kloc_29c9f: 	goto loc_29c9f;
        case m2c::kloc_29ca8: 	goto loc_29ca8;
        case m2c::kloc_29cc9: 	goto loc_29cc9;
        case m2c::kloc_29d22: 	goto loc_29d22;
        case m2c::kloc_29d25: 	goto loc_29d25;
        case m2c::kloc_29d3a: 	goto loc_29d3a;
        case m2c::kloc_29d76: 	goto loc_29d76;
        case m2c::kloc_29d7b: 	goto loc_29d7b;
        case m2c::kloc_29ebe: 	goto loc_29ebe;
        case m2c::kloc_29ece: 	goto loc_29ece;
        case m2c::kloc_29f20: 	goto loc_29f20;
        case m2c::kloc_29f30: 	goto loc_29f30;
        case m2c::kloc_29fa6: 	goto loc_29fa6;
        case m2c::kloc_29fd9: 	goto loc_29fd9;
        case m2c::kloc_29ffc: 	goto loc_29ffc;
        case m2c::kloc_2a02e: 	goto loc_2a02e;
        case m2c::kloc_2a033: 	goto loc_2a033;
        case m2c::kloc_2a03a: 	goto loc_2a03a;
        case m2c::kloc_2a03b: 	goto loc_2a03b;
        case m2c::kloc_2a04e: 	goto loc_2a04e;
        case m2c::kloc_2a050: 	goto loc_2a050;
        case m2c::kloc_2a0a4: 	goto loc_2a0a4;
        case m2c::kloc_2a0ae: 	goto loc_2a0ae;
        case m2c::kloc_2a0b8: 	goto loc_2a0b8;
        case m2c::kloc_2a0c2: 	goto loc_2a0c2;
        case m2c::kloc_2a0cc: 	goto loc_2a0cc;
        case m2c::kloc_2a103: 	goto loc_2a103;
        case m2c::kloc_2a168: 	goto loc_2a168;
        case m2c::kloc_2a196: 	goto loc_2a196;
        case m2c::kloc_2a19b: 	goto loc_2a19b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool do_mou_restext(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    do_mou_restext:
    _begin:
cs=0x18ed;eip=0x002944; 	X(PUSH(cs));	// 51417 push    cs ;~ 18ED:2944
cs=0x18ed;eip=0x002945; 	J(CALL(input_push_status,0));	// 51418 call    near ptr input_push_status ;~ 18ED:2945
cs=0x18ed;eip=0x002948; 	X(MOV(word_3f88e, 1));	// 51419 mov     word_3F88E, 1 ;~ 18ED:2948
cs=0x18ed;eip=0x00294e; 	J(CALLF(audio_unk,0));	// 51420 call    audio_unk ;~ 18ED:294E
cs=0x18ed;eip=0x002953; 	X(MOV(byte_3b8f2, 1));	// 51421 mov     byte_3B8F2, 1 ;~ 18ED:2953
cs=0x18ed;eip=0x002958; 	T(SUB(ax, ax));	// 51422 sub     ax, ax ;~ 18ED:2958
cs=0x18ed;eip=0x00295a; 	X(PUSH(ax));	// 51423 push    ax ;~ 18ED:295A
cs=0x18ed;eip=0x00295b; 	X(PUSH(ax));	// 51424 push    ax ;~ 18ED:295B
cs=0x18ed;eip=0x00295c; 	X(PUSH(dialogarg2));	// 51425 push    dialogarg2 ;~ 18ED:295C
cs=0x18ed;eip=0x002960; 	T(MOV(ax, 0x0FFFF));	// 51426 mov     ax, 0FFFFh ;~ 18ED:2960
cs=0x18ed;eip=0x002963; 	X(PUSH(ax));	// 51427 push    ax ;~ 18ED:2963
cs=0x18ed;eip=0x002964; 	X(PUSH(ax));	// 51428 push    ax ;~ 18ED:2964
cs=0x18ed;eip=0x002965; 	T(MOV(ax, offset(dseg,amou)));	// 51429 mov     ax, offset aMou ; "mou" ;~ 18ED:2965
cs=0x18ed;eip=0x002968; 	X(PUSH(ax));	// 51430 push    ax ;~ 18ED:2968
cs=0x18ed;eip=0x002969; 	X(PUSH(word_44cee));	// 51431 push    word_44CEE ;~ 18ED:2969
cs=0x18ed;eip=0x00296d; 	X(PUSH(mainresptr));	// 51432 push    mainresptr ;~ 18ED:296D
cs=0x18ed;eip=0x002971; 	X(PUSH(cs));	// 51433 push    cs ;~ 18ED:2971
cs=0x18ed;eip=0x002972; 	J(CALL(locate_text_res,0));	// 51434 call    near ptr locate_text_res ;~ 18ED:2972
cs=0x18ed;eip=0x002975; 	T(ADD(sp, 6));	// 51435 add     sp, 6 ;~ 18ED:2975
cs=0x18ed;eip=0x002978; 	X(PUSH(dx));	// 51436 push    dx ;~ 18ED:2978
cs=0x18ed;eip=0x002979; 	X(PUSH(ax));	// 51437 push    ax ;~ 18ED:2979
cs=0x18ed;eip=0x00297a; 	T(MOV(ax, 1));	// 51438 mov     ax, 1 ;~ 18ED:297A
cs=0x18ed;eip=0x00297d; 	X(PUSH(ax));	// 51439 push    ax ;~ 18ED:297D
cs=0x18ed;eip=0x00297e; 	T(MOV(ax, 4));	// 51440 mov     ax, 4 ;~ 18ED:297E
cs=0x18ed;eip=0x002981; 	X(PUSH(ax));	// 51441 push    ax ;~ 18ED:2981
cs=0x18ed;eip=0x002982; 	X(PUSH(cs));	// 51442 push    cs ;~ 18ED:2982
cs=0x18ed;eip=0x002983; 	J(CALL(show_dialog,0));	// 51443 call    near ptr show_dialog ;~ 18ED:2983
cs=0x18ed;eip=0x002986; 	T(ADD(sp, 0x12));	// 51444 add     sp, 12h ;~ 18ED:2986
cs=0x18ed;eip=0x002989; 	X(MOV(word_3f88e, 0));	// 51445 mov     word_3F88E, 0 ;~ 18ED:2989
cs=0x18ed;eip=0x00298f; 	J(CALLF(sub_372f4,0));	// 51446 call    sub_372F4 ;~ 18ED:298F
cs=0x18ed;eip=0x002994; 	X(PUSH(cs));	// 51447 push    cs ;~ 18ED:2994
cs=0x18ed;eip=0x002995; 	J(CALL(input_pop_status,0));	// 51448 call    near ptr input_pop_status ;~ 18ED:2995
cs=0x18ed;eip=0x002998; 	J(RETF(0));	// 51449 retf ;~ 18ED:2998

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kdo_mou_restext: 	goto do_mou_restext;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool ensure_file_exists(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    ensure_file_exists:
    _begin:
#undef arg_0
#define arg_0 6
	// 51940 arg_0           = word ptr  6 ;~ 18ED:2CF6
cs=0x18ed;eip=0x002cf6; 	X(PUSH(bp));	// 51942 push    bp ;~ 18ED:2CF6
cs=0x18ed;eip=0x002cf7; 	T(MOV(bp, sp));	// 51943 mov     bp, sp ;~ 18ED:2CF7
cs=0x18ed;eip=0x002cf9; 	J(JMP(loc_2a1e8));	// 51944 jmp     short loc_2A1E8 ;~ 18ED:2CF9
loc_2a1ac:
	// 7723 
cs=0x18ed;eip=0x002cfc; 	T(SUB(ax, ax));	// 51949 sub     ax, ax ;~ 18ED:2CFC
cs=0x18ed;eip=0x002cfe; 	X(PUSH(ax));	// 51950 push    ax ;~ 18ED:2CFE
cs=0x18ed;eip=0x002cff; 	X(PUSH(ax));	// 51951 push    ax ;~ 18ED:2CFF
cs=0x18ed;eip=0x002d00; 	X(PUSH(dialogarg2));	// 51952 push    dialogarg2 ;~ 18ED:2D00
cs=0x18ed;eip=0x002d04; 	T(MOV(ax, 0x0FFFF));	// 51953 mov     ax, 0FFFFh ;~ 18ED:2D04
cs=0x18ed;eip=0x002d07; 	X(PUSH(ax));	// 51954 push    ax ;~ 18ED:2D07
cs=0x18ed;eip=0x002d08; 	X(PUSH(ax));	// 51955 push    ax ;~ 18ED:2D08
cs=0x18ed;eip=0x002d09; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 51956 mov     bx, [bp+arg_0] ;~ 18ED:2D09
cs=0x18ed;eip=0x002d0c; 	T(SHL(bx, 1));	// 51957 shl     bx, 1 ;~ 18ED:2D0C
cs=0x18ed;eip=0x002d0e; 	X(PUSH(*(dw*)(((aopp1_)+5)+bx)));	// 51958 push    word ptr (aOpp1_+5)[bx] ; "Insert Disk A/B .. etc presskey" ;~ 18ED:2D0E
cs=0x18ed;eip=0x002d12; 	X(PUSH(word_44cee));	// 51959 push    word_44CEE ;~ 18ED:2D12
cs=0x18ed;eip=0x002d16; 	X(PUSH(mainresptr));	// 51960 push    mainresptr ;~ 18ED:2D16
cs=0x18ed;eip=0x002d1a; 	X(PUSH(cs));	// 51961 push    cs ;~ 18ED:2D1A
cs=0x18ed;eip=0x002d1b; 	J(CALL(locate_text_res,0));	// 51962 call    near ptr locate_text_res ;~ 18ED:2D1B
cs=0x18ed;eip=0x002d1e; 	T(ADD(sp, 6));	// 51963 add     sp, 6 ;~ 18ED:2D1E
cs=0x18ed;eip=0x002d21; 	X(PUSH(dx));	// 51964 push    dx ;~ 18ED:2D21
cs=0x18ed;eip=0x002d22; 	X(PUSH(ax));	// 51965 push    ax ;~ 18ED:2D22
cs=0x18ed;eip=0x002d23; 	T(MOV(ax, 1));	// 51966 mov     ax, 1 ;~ 18ED:2D23
cs=0x18ed;eip=0x002d26; 	X(PUSH(ax));	// 51967 push    ax ;~ 18ED:2D26
cs=0x18ed;eip=0x002d27; 	X(PUSH(ax));	// 51968 push    ax ;~ 18ED:2D27
cs=0x18ed;eip=0x002d28; 	X(PUSH(cs));	// 51969 push    cs ;~ 18ED:2D28
cs=0x18ed;eip=0x002d29; 	J(CALL(show_dialog,0));	// 51970 call    near ptr show_dialog ;~ 18ED:2D29
cs=0x18ed;eip=0x002d2c; 	T(ADD(sp, 0x12));	// 51971 add     sp, 12h ;~ 18ED:2D2C
cs=0x18ed;eip=0x002d2f; 	X(PUSH(cs));	// 51972 push    cs ;~ 18ED:2D2F
cs=0x18ed;eip=0x002d30; 	J(CALL(mouse_draw_opaque_check,0));	// 51973 call    near ptr mouse_draw_opaque_check ;~ 18ED:2D30
cs=0x18ed;eip=0x002d33; 	X(MOV(kbormouse, 0));	// 51974 mov     kbormouse, 0 ;~ 18ED:2D33
loc_2a1e8:
	// 7724 
cs=0x18ed;eip=0x002d38; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 51977 mov     bx, [bp+arg_0] ;~ 18ED:2D38
cs=0x18ed;eip=0x002d3b; 	T(SHL(bx, 1));	// 51978 shl     bx, 1 ;~ 18ED:2D3B
cs=0x18ed;eip=0x002d3d; 	X(PUSH(*(dw*)(((db*)&findfilenames)+bx)));	// 51979 push    findfilenames[bx] ;~ 18ED:2D3D
cs=0x18ed;eip=0x002d41; 	J(CALLF(file_find,0));	// 51980 call    file_find ;~ 18ED:2D41
cs=0x18ed;eip=0x002d46; 	T(ADD(sp, 2));	// 51981 add     sp, 2 ;~ 18ED:2D46
cs=0x18ed;eip=0x002d49; 	T(OR(ax, ax));	// 51982 or      ax, ax ;~ 18ED:2D49
cs=0x18ed;eip=0x002d4b; 	J(JZ(loc_2a1ac));	// 51983 jz      short loc_2A1AC ;~ 18ED:2D4B
cs=0x18ed;eip=0x002d4d; 	X(POP(bp));	// 51984 pop     bp ;~ 18ED:2D4D
cs=0x18ed;eip=0x002d4e; 	J(RETF(0));	// 51985 retf ;~ 18ED:2D4E

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kensure_file_exists: 	goto ensure_file_exists;
        case m2c::kloc_2a1ac: 	goto loc_2a1ac;
        case m2c::kloc_2a1e8: 	goto loc_2a1e8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool do_mer_restext(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    do_mer_restext:
    _begin:
cs=0x18ed;eip=0x002d50; 	T(SUB(ax, ax));	// 51995 sub     ax, ax ;~ 18ED:2D50
cs=0x18ed;eip=0x002d52; 	X(PUSH(ax));	// 51996 push    ax ;~ 18ED:2D52
cs=0x18ed;eip=0x002d53; 	X(PUSH(ax));	// 51997 push    ax ;~ 18ED:2D53
cs=0x18ed;eip=0x002d54; 	X(PUSH(dialogarg2));	// 51998 push    dialogarg2 ;~ 18ED:2D54
cs=0x18ed;eip=0x002d58; 	T(MOV(ax, 0x0FFFF));	// 51999 mov     ax, 0FFFFh ;~ 18ED:2D58
cs=0x18ed;eip=0x002d5b; 	X(PUSH(ax));	// 52000 push    ax ;~ 18ED:2D5B
cs=0x18ed;eip=0x002d5c; 	X(PUSH(ax));	// 52001 push    ax ;~ 18ED:2D5C
cs=0x18ed;eip=0x002d5d; 	T(MOV(ax, offset(dseg,amer)));	// 52002 mov     ax, offset aMer ; "mer" ;~ 18ED:2D5D
cs=0x18ed;eip=0x002d60; 	X(PUSH(ax));	// 52003 push    ax ;~ 18ED:2D60
cs=0x18ed;eip=0x002d61; 	X(PUSH(word_44cee));	// 52004 push    word_44CEE ;~ 18ED:2D61
cs=0x18ed;eip=0x002d65; 	X(PUSH(mainresptr));	// 52005 push    mainresptr ;~ 18ED:2D65
cs=0x18ed;eip=0x002d69; 	X(PUSH(cs));	// 52006 push    cs ;~ 18ED:2D69
cs=0x18ed;eip=0x002d6a; 	J(CALL(locate_text_res,0));	// 52007 call    near ptr locate_text_res ;~ 18ED:2D6A
cs=0x18ed;eip=0x002d6d; 	T(ADD(sp, 6));	// 52008 add     sp, 6 ;~ 18ED:2D6D
cs=0x18ed;eip=0x002d70; 	X(PUSH(dx));	// 52009 push    dx ;~ 18ED:2D70
cs=0x18ed;eip=0x002d71; 	X(PUSH(ax));	// 52010 push    ax ;~ 18ED:2D71
cs=0x18ed;eip=0x002d72; 	T(MOV(ax, 1));	// 52011 mov     ax, 1 ;~ 18ED:2D72
cs=0x18ed;eip=0x002d75; 	X(PUSH(ax));	// 52012 push    ax ;~ 18ED:2D75
cs=0x18ed;eip=0x002d76; 	X(PUSH(ax));	// 52013 push    ax ;~ 18ED:2D76
cs=0x18ed;eip=0x002d77; 	X(PUSH(cs));	// 52014 push    cs ;~ 18ED:2D77
cs=0x18ed;eip=0x002d78; 	J(CALL(show_dialog,0));	// 52015 call    near ptr show_dialog ;~ 18ED:2D78
cs=0x18ed;eip=0x002d7b; 	T(ADD(sp, 0x12));	// 52016 add     sp, 12h ;~ 18ED:2D7B
cs=0x18ed;eip=0x002d7e; 	J(RETF(0));	// 52017 retf ;~ 18ED:2D7E

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kdo_mer_restext: 	goto do_mer_restext;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool timer_get_delta_alt(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    timer_get_delta_alt:
    _begin:
cs=0x18ed;eip=0x002d80; 	J(CALLF(timer_get_delta,0));	// 52028 call    timer_get_delta ;~ 18ED:2D80
cs=0x18ed;eip=0x002d85; 	J(RETF(0));	// 52029 retf ;~ 18ED:2D85

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ktimer_get_delta_alt: 	goto timer_get_delta_alt;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool file_load_3dres(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    file_load_3dres:
    _begin:
#undef var_54
#define var_54 -0x54
	// 52040 var_54          = byte ptr -54h ;~ 18ED:2D86
#undef var_4
#define var_4 -4
	// 52041 var_4           = word ptr -4 ;~ 18ED:2D86
#undef var_2
#define var_2 -2
	// 52042 var_2           = word ptr -2 ;~ 18ED:2D86
#undef arg_0
#define arg_0 6
	// 52043 arg_0           = word ptr  6 ;~ 18ED:2D86
cs=0x18ed;eip=0x002d86; 	X(PUSH(bp));	// 52045 push    bp ;~ 18ED:2D86
cs=0x18ed;eip=0x002d87; 	T(MOV(bp, sp));	// 52046 mov     bp, sp ;~ 18ED:2D87
cs=0x18ed;eip=0x002d89; 	T(SUB(sp, 0x54));	// 52047 sub     sp, 54h ;~ 18ED:2D89
loc_2a23c:
	// 7725 
cs=0x18ed;eip=0x002d8c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 52050 push    [bp+arg_0] ;~ 18ED:2D8C
cs=0x18ed;eip=0x002d8f; 	T(ax = bp+var_54);	// 52051 lea     ax, [bp+var_54] ;~ 18ED:2D8F
cs=0x18ed;eip=0x002d92; 	X(PUSH(ax));	// 52052 push    ax              ; char * ;~ 18ED:2D92
cs=0x18ed;eip=0x002d93; 	J(CALLF(_strcpy,0));	// 52053 call    _strcpy ;~ 18ED:2D93
cs=0x18ed;eip=0x002d98; 	T(ADD(sp, 4));	// 52054 add     sp, 4 ;~ 18ED:2D98
cs=0x18ed;eip=0x002d9b; 	T(MOV(ax, offset(dseg,a_p3s)));	// 52055 mov     ax, offset a_p3s ; ".p3s" ;~ 18ED:2D9B
cs=0x18ed;eip=0x002d9e; 	X(PUSH(ax));	// 52056 push    ax ;~ 18ED:2D9E
cs=0x18ed;eip=0x002d9f; 	T(ax = bp+var_54);	// 52057 lea     ax, [bp+var_54] ;~ 18ED:2D9F
cs=0x18ed;eip=0x002da2; 	X(PUSH(ax));	// 52058 push    ax              ; char * ;~ 18ED:2DA2
cs=0x18ed;eip=0x002da3; 	J(CALLF(_strcat,0));	// 52059 call    _strcat ;~ 18ED:2DA3
cs=0x18ed;eip=0x002da8; 	T(ADD(sp, 4));	// 52060 add     sp, 4 ;~ 18ED:2DA8
cs=0x18ed;eip=0x002dab; 	T(ax = bp+var_54);	// 52061 lea     ax, [bp+var_54] ;~ 18ED:2DAB
cs=0x18ed;eip=0x002dae; 	X(PUSH(ax));	// 52062 push    ax              ; char * ;~ 18ED:2DAE
cs=0x18ed;eip=0x002daf; 	T(MOV(ax, 7));	// 52063 mov     ax, 7 ;~ 18ED:2DAF
cs=0x18ed;eip=0x002db2; 	X(PUSH(ax));	// 52064 push    ax              ; int ;~ 18ED:2DB2
cs=0x18ed;eip=0x002db3; 	X(PUSH(cs));	// 52065 push    cs ;~ 18ED:2DB3
cs=0x18ed;eip=0x002db4; 	J(CALL(file_load_resource,0));	// 52066 call    near ptr file_load_resource ;~ 18ED:2DB4
cs=0x18ed;eip=0x002db7; 	T(ADD(sp, 4));	// 52067 add     sp, 4 ;~ 18ED:2DB7
cs=0x18ed;eip=0x002dba; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 52068 mov     [bp+var_4], ax ;~ 18ED:2DBA
cs=0x18ed;eip=0x002dbd; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 52069 mov     [bp+var_2], dx ;~ 18ED:2DBD
cs=0x18ed;eip=0x002dc0; 	T(OR(ax, dx));	// 52070 or      ax, dx ;~ 18ED:2DC0
cs=0x18ed;eip=0x002dc2; 	J(JNZ(loc_2a2b2));	// 52071 jnz     short loc_2A2B2 ;~ 18ED:2DC2
cs=0x18ed;eip=0x002dc4; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 52072 push    [bp+arg_0] ;~ 18ED:2DC4
cs=0x18ed;eip=0x002dc7; 	T(ax = bp+var_54);	// 52073 lea     ax, [bp+var_54] ;~ 18ED:2DC7
cs=0x18ed;eip=0x002dca; 	X(PUSH(ax));	// 52074 push    ax              ; char * ;~ 18ED:2DCA
cs=0x18ed;eip=0x002dcb; 	J(CALLF(_strcpy,0));	// 52075 call    _strcpy ;~ 18ED:2DCB
cs=0x18ed;eip=0x002dd0; 	T(ADD(sp, 4));	// 52076 add     sp, 4 ;~ 18ED:2DD0
cs=0x18ed;eip=0x002dd3; 	T(MOV(ax, offset(dseg,a_3sh)));	// 52077 mov     ax, offset a_3sh ; ".3sh" ;~ 18ED:2DD3
cs=0x18ed;eip=0x002dd6; 	X(PUSH(ax));	// 52078 push    ax ;~ 18ED:2DD6
cs=0x18ed;eip=0x002dd7; 	T(ax = bp+var_54);	// 52079 lea     ax, [bp+var_54] ;~ 18ED:2DD7
cs=0x18ed;eip=0x002dda; 	X(PUSH(ax));	// 52080 push    ax              ; char * ;~ 18ED:2DDA
cs=0x18ed;eip=0x002ddb; 	J(CALLF(_strcat,0));	// 52081 call    _strcat ;~ 18ED:2DDB
cs=0x18ed;eip=0x002de0; 	T(ADD(sp, 4));	// 52082 add     sp, 4 ;~ 18ED:2DE0
cs=0x18ed;eip=0x002de3; 	T(ax = bp+var_54);	// 52083 lea     ax, [bp+var_54] ;~ 18ED:2DE3
cs=0x18ed;eip=0x002de6; 	X(PUSH(ax));	// 52084 push    ax              ; char * ;~ 18ED:2DE6
cs=0x18ed;eip=0x002de7; 	T(MOV(ax, 1));	// 52085 mov     ax, 1 ;~ 18ED:2DE7
cs=0x18ed;eip=0x002dea; 	X(PUSH(ax));	// 52086 push    ax              ; int ;~ 18ED:2DEA
cs=0x18ed;eip=0x002deb; 	X(PUSH(cs));	// 52087 push    cs ;~ 18ED:2DEB
cs=0x18ed;eip=0x002dec; 	J(CALL(file_load_resource,0));	// 52088 call    near ptr file_load_resource ;~ 18ED:2DEC
cs=0x18ed;eip=0x002def; 	T(ADD(sp, 4));	// 52089 add     sp, 4 ;~ 18ED:2DEF
cs=0x18ed;eip=0x002df2; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 52090 mov     [bp+var_4], ax ;~ 18ED:2DF2
cs=0x18ed;eip=0x002df5; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 52091 mov     [bp+var_2], dx ;~ 18ED:2DF5
cs=0x18ed;eip=0x002df8; 	T(OR(ax, dx));	// 52092 or      ax, dx ;~ 18ED:2DF8
cs=0x18ed;eip=0x002dfa; 	J(JNZ(loc_2a2b2));	// 52093 jnz     short loc_2A2B2 ;~ 18ED:2DFA
cs=0x18ed;eip=0x002dfc; 	X(PUSH(cs));	// 52094 push    cs ;~ 18ED:2DFC
cs=0x18ed;eip=0x002dfd; 	J(CALL(do_dea_textres,0));	// 52095 call    near ptr do_dea_textres ;~ 18ED:2DFD
cs=0x18ed;eip=0x002e00; 	J(JMP(loc_2a23c));	// 52096 jmp     short loc_2A23C ;~ 18ED:2E00
loc_2a2b2:
	// 7726 
cs=0x18ed;eip=0x002e02; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 52101 mov     ax, [bp+var_4] ;~ 18ED:2E02
cs=0x18ed;eip=0x002e05; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 52102 mov     dx, [bp+var_2] ;~ 18ED:2E05
cs=0x18ed;eip=0x002e08; 	T(MOV(sp, bp));	// 52103 mov     sp, bp ;~ 18ED:2E08
cs=0x18ed;eip=0x002e0a; 	X(POP(bp));	// 52104 pop     bp ;~ 18ED:2E0A
cs=0x18ed;eip=0x002e0b; 	J(RETF(0));	// 52105 retf ;~ 18ED:2E0B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kfile_load_3dres: 	goto file_load_3dres;
        case m2c::kloc_2a23c: 	goto loc_2a23c;
        case m2c::kloc_2a2b2: 	goto loc_2a2b2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

