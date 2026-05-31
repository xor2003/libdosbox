/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool _group9(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group9:
    _begin:
sub_274b0:
	// 45793 
#undef var_40
#define var_40 -0x40
	// 45795 var_40          = byte ptr -40h ;~ 18ED:0000
#undef var_22
#define var_22 -0x22
	// 45796 var_22          = byte ptr -22h ;~ 18ED:0000
#undef var_4
#define var_4 -4
	// 45797 var_4           = word ptr -4 ;~ 18ED:0000
#undef var_2
#define var_2 -2
	// 45798 var_2           = word ptr -2 ;~ 18ED:0000
#undef arg_0
#define arg_0 6
	// 45799 arg_0           = word ptr  6 ;~ 18ED:0000
#undef arg_2
#define arg_2 8
	// 45800 arg_2           = word ptr  8 ;~ 18ED:0000
#undef arg_4
#define arg_4 0x0A
	// 45801 arg_4           = word ptr  0Ah ;~ 18ED:0000
#undef arg_6
#define arg_6 0x0C
	// 45802 arg_6           = word ptr  0Ch ;~ 18ED:0000
ret_18ed_0:
	// 7541 
cs=0x18ed;eip=0x000000; 	X(PUSH(bp));	// 45804 push    bp ;~ 18ED:0000
cs=0x18ed;eip=0x000001; 	T(MOV(bp, sp));	// 45805 mov     bp, sp ;~ 18ED:0001
cs=0x18ed;eip=0x000003; 	T(SUB(sp, 0x40));	// 45806 sub     sp, 40h ;~ 18ED:0003
cs=0x18ed;eip=0x000006; 	X(PUSH(di));	// 45807 push    di ;~ 18ED:0006
cs=0x18ed;eip=0x000007; 	X(PUSH(si));	// 45808 push    si ;~ 18ED:0007
cs=0x18ed;eip=0x000008; 	T(MOV(ax, video_flag1_is1));	// 45809 mov     ax, video_flag1_is1 ;~ 18ED:0008
cs=0x18ed;eip=0x00000b; 	X(IMUL1_2(video_flag4_is1));	// 45810 imul    video_flag4_is1 ;~ 18ED:000B
cs=0x18ed;eip=0x00000f; 	T(CWD);	// 45811 cwd ;~ 18ED:000F
cs=0x18ed;eip=0x000010; 	X(PUSH(dx));	// 45812 push    dx ;~ 18ED:0010
cs=0x18ed;eip=0x000011; 	X(PUSH(ax));	// 45813 push    ax ;~ 18ED:0011
cs=0x18ed;eip=0x000012; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 45814 mov     ax, [bp+arg_6] ;~ 18ED:0012
cs=0x18ed;eip=0x000015; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 45815 sub     ax, [bp+arg_4] ;~ 18ED:0015
cs=0x18ed;eip=0x000018; 	T(CWD);	// 45816 cwd ;~ 18ED:0018
cs=0x18ed;eip=0x000019; 	X(PUSH(dx));	// 45817 push    dx ;~ 18ED:0019
cs=0x18ed;eip=0x00001a; 	X(PUSH(ax));	// 45818 push    ax ;~ 18ED:001A
cs=0x18ed;eip=0x00001b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 45819 mov     ax, [bp+arg_2] ;~ 18ED:001B
cs=0x18ed;eip=0x00001e; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 45820 sub     ax, [bp+arg_0] ;~ 18ED:001E
cs=0x18ed;eip=0x000021; 	T(CWD);	// 45821 cwd ;~ 18ED:0021
cs=0x18ed;eip=0x000022; 	X(PUSH(dx));	// 45822 push    dx ;~ 18ED:0022
cs=0x18ed;eip=0x000023; 	X(PUSH(ax));	// 45823 push    ax ;~ 18ED:0023
cs=0x18ed;eip=0x000024; 	R(CALLF(__aflmul,0));	// 45824 call    __aFlmul ;~ 18ED:0024
cs=0x18ed;eip=0x000029; 	X(PUSH(dx));	// 45825 push    dx ;~ 18ED:0029
cs=0x18ed;eip=0x00002a; 	X(PUSH(ax));	// 45826 push    ax ;~ 18ED:002A
cs=0x18ed;eip=0x00002b; 	R(CALLF(__afldiv,0));	// 45827 call    __aFldiv ;~ 18ED:002B
cs=0x18ed;eip=0x000030; 	T(ADD(ax, 0x12));	// 45828 add     ax, 12h ;~ 18ED:0030
cs=0x18ed;eip=0x000033; 	T(ADC(dx, 0));	// 45829 adc     dx, 0 ;~ 18ED:0033
cs=0x18ed;eip=0x000036; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 45830 mov     [bp+var_4], ax ;~ 18ED:0036
cs=0x18ed;eip=0x000039; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 45831 mov     [bp+var_2], dx ;~ 18ED:0039
cs=0x18ed;eip=0x00003c; 	R(CALLF(mmgr_get_res_ofs_diff_scaled,0));	// 45832 call    mmgr_get_res_ofs_diff_scaled ;~ 18ED:003C
cs=0x18ed;eip=0x000041; 	T(CMP(dx, *(dw*)(raddr(ss,bp+var_2))));	// 45833 cmp     dx, [bp+var_2] ;~ 18ED:0041
cs=0x18ed;eip=0x000044; 	R(JG(loc_27506));	// 45834 jg      short loc_27506 ;~ 18ED:0044
cs=0x18ed;eip=0x000046; 	R(JL(loc_274fd));	// 45835 jl      short loc_274FD ;~ 18ED:0046
cs=0x18ed;eip=0x000048; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_4))));	// 45836 cmp     ax, [bp+var_4] ;~ 18ED:0048
cs=0x18ed;eip=0x00004b; 	R(JA(loc_27506));	// 45837 ja      short loc_27506 ;~ 18ED:004B
loc_274fd:
	// 7542 
cs=0x18ed;eip=0x00004d; 	T(SUB(ax, ax));	// 45840 sub     ax, ax ;~ 18ED:004D
cs=0x18ed;eip=0x00004f; 	X(POP(si));	// 45841 pop     si ;~ 18ED:004F
cs=0x18ed;eip=0x000050; 	X(POP(di));	// 45842 pop     di ;~ 18ED:0050
cs=0x18ed;eip=0x000051; 	T(MOV(sp, bp));	// 45843 mov     sp, bp ;~ 18ED:0051
cs=0x18ed;eip=0x000053; 	X(POP(bp));	// 45844 pop     bp ;~ 18ED:0053
cs=0x18ed;eip=0x000054; 	R(RETF(0));	// 45845 retf ;~ 18ED:0054
loc_27506:
	// 7543 
cs=0x18ed;eip=0x000056; 	X(PUSH(cs));	// 45851 push    cs ;~ 18ED:0056
cs=0x18ed;eip=0x000057; 	R(CALL(mouse_draw_opaque_check,0));	// 45852 call    near ptr mouse_draw_opaque_check ;~ 18ED:0057
cs=0x18ed;eip=0x00005a; 	T(MOV(ax, 0x0F));	// 45853 mov     ax, 0Fh ;~ 18ED:005A
cs=0x18ed;eip=0x00005d; 	X(PUSH(ax));	// 45854 push    ax ;~ 18ED:005D
cs=0x18ed;eip=0x00005e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 45855 mov     ax, [bp+arg_6] ;~ 18ED:005E
cs=0x18ed;eip=0x000061; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 45856 sub     ax, [bp+arg_4] ;~ 18ED:0061
cs=0x18ed;eip=0x000064; 	X(PUSH(ax));	// 45857 push    ax ;~ 18ED:0064
cs=0x18ed;eip=0x000065; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 45858 mov     ax, [bp+arg_2] ;~ 18ED:0065
cs=0x18ed;eip=0x000068; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 45859 sub     ax, [bp+arg_0] ;~ 18ED:0068
cs=0x18ed;eip=0x00006b; 	X(PUSH(ax));	// 45860 push    ax ;~ 18ED:006B
cs=0x18ed;eip=0x00006c; 	R(CALLF(sprite_make_wnd,0));	// 45861 call    sprite_make_wnd ;~ 18ED:006C
cs=0x18ed;eip=0x000071; 	T(ADD(sp, 6));	// 45862 add     sp, 6 ;~ 18ED:0071
cs=0x18ed;eip=0x000074; 	T(MOV(bl, byte_3b8fc));	// 45863 mov     bl, byte_3B8FC ;~ 18ED:0074
cs=0x18ed;eip=0x000078; 	T(SUB(bh, bh));	// 45864 sub     bh, bh ;~ 18ED:0078
cs=0x18ed;eip=0x00007a; 	T(SHL(bx, 1));	// 45865 shl     bx, 1 ;~ 18ED:007A
cs=0x18ed;eip=0x00007c; 	T(SHL(bx, 1));	// 45866 shl     bx, 1 ;~ 18ED:007C
cs=0x18ed;eip=0x00007e; 	X(MOV(*(dw*)(((db*)sprite_ptrs)+bx), ax));	// 45867 mov     word ptr sprite_ptrs[bx], ax ;~ 18ED:007E
cs=0x18ed;eip=0x000082; 	X(MOV(*(dw*)((((db*)sprite_ptrs)+2)+bx), dx));	// 45868 mov     word ptr (sprite_ptrs+2)[bx], dx ;~ 18ED:0082
cs=0x18ed;eip=0x000086; 	T(MOV(al, byte_3b8fc));	// 45869 mov     al, byte_3B8FC ;~ 18ED:0086
cs=0x18ed;eip=0x000089; 	T(SUB(ah, ah));	// 45870 sub     ah, ah ;~ 18ED:0089
cs=0x18ed;eip=0x00008b; 	T(MOV(si, ax));	// 45871 mov     si, ax ;~ 18ED:008B
cs=0x18ed;eip=0x00008d; 	T(SHL(si, 1));	// 45872 shl     si, 1 ;~ 18ED:008D
cs=0x18ed;eip=0x00008f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 45873 mov     ax, [bp+arg_0] ;~ 18ED:008F
cs=0x18ed;eip=0x000092; 	X(MOV(*(dw*)(((db*)&word_4646a)+si), ax));	// 45874 mov     word_4646A[si], ax ;~ 18ED:0092
cs=0x18ed;eip=0x000096; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 45875 mov     ax, [bp+arg_4] ;~ 18ED:0096
cs=0x18ed;eip=0x000099; 	X(MOV(*(dw*)(((db*)&word_46486)+si), ax));	// 45876 mov     word_46486[si], ax ;~ 18ED:0099
cs=0x18ed;eip=0x00009d; 	T(ax = bp+var_40);	// 45877 lea     ax, [bp+var_40] ;~ 18ED:009D
cs=0x18ed;eip=0x0000a0; 	X(PUSH(ax));	// 45878 push    ax ;~ 18ED:00A0
cs=0x18ed;eip=0x0000a1; 	R(CALLF(sprite_copy_both_to_arg,0));	// 45879 call    sprite_copy_both_to_arg ;~ 18ED:00A1
cs=0x18ed;eip=0x0000a6; 	T(ADD(sp, 2));	// 45880 add     sp, 2 ;~ 18ED:00A6
cs=0x18ed;eip=0x0000a9; 	T(MOV(al, 0x3C));	// 45881 mov     al, 3Ch ; '<' ;~ 18ED:00A9
cs=0x18ed;eip=0x0000ab; 	X(MUL1_1(byte_3b8fc));	// 45882 mul     byte_3B8FC ;~ 18ED:00AB
cs=0x18ed;eip=0x0000af; 	T(MOV(bx, ax));	// 45883 mov     bx, ax ;~ 18ED:00AF
cs=0x18ed;eip=0x0000b1; 	T(LES(di, trackdata12));	// 45884 les     di, trackdata12 ;~ 18ED:00B1
cs=0x18ed;eip=0x0000b5; 	X(PUSH(si));	// 45885 push    si ;~ 18ED:00B5
cs=0x18ed;eip=0x0000b6; 	T(di = bx+di);	// 45886 lea     di, [bx+di] ;~ 18ED:00B6
cs=0x18ed;eip=0x0000b8; 	T(si = bp+var_40);	// 45887 lea     si, [bp+var_40] ;~ 18ED:00B8
cs=0x18ed;eip=0x0000bb; 	T(MOV(cx, 0x0F));	// 45888 mov     cx, 0Fh ;~ 18ED:00BB
	// 45889 repne movsw ;~ 18ED:00BE
cs=0x18ed;eip=0x0000be; 	X(	REPNE MOVSW);	// 45889 repne movsw ;~ 18ED:00BE
cs=0x18ed;eip=0x0000c0; 	X(POP(si));	// 45890 pop     si ;~ 18ED:00C0
cs=0x18ed;eip=0x0000c1; 	T(MOV(al, byte_3b8fc));	// 45891 mov     al, byte_3B8FC ;~ 18ED:00C1
cs=0x18ed;eip=0x0000c4; 	T(SUB(ah, ah));	// 45892 sub     ah, ah ;~ 18ED:00C4
cs=0x18ed;eip=0x0000c6; 	T(SHL(ax, 1));	// 45893 shl     ax, 1 ;~ 18ED:00C6
cs=0x18ed;eip=0x0000c8; 	T(MOV(cx, 0x1E));	// 45894 mov     cx, 1Eh ;~ 18ED:00C8
cs=0x18ed;eip=0x0000cb; 	T(MUL1_2(cx));	// 45895 mul     cx ;~ 18ED:00CB
cs=0x18ed;eip=0x0000cd; 	T(MOV(di, ax));	// 45896 mov     di, ax ;~ 18ED:00CD
cs=0x18ed;eip=0x0000cf; 	T(LES(bx, trackdata12));	// 45897 les     bx, trackdata12 ;~ 18ED:00CF
cs=0x18ed;eip=0x0000d3; 	X(PUSH(si));	// 45898 push    si ;~ 18ED:00D3
cs=0x18ed;eip=0x0000d4; 	T(di = bx+di+0x1E);	// 45899 lea     di, [bx+di+1Eh] ;~ 18ED:00D4
cs=0x18ed;eip=0x0000d7; 	T(si = bp+var_22);	// 45900 lea     si, [bp+var_22] ;~ 18ED:00D7
cs=0x18ed;eip=0x0000da; 	T(MOV(cx, 0x0F));	// 45901 mov     cx, 0Fh ;~ 18ED:00DA
	// 45902 repne movsw ;~ 18ED:00DD
cs=0x18ed;eip=0x0000dd; 	X(	REPNE MOVSW);	// 45902 repne movsw ;~ 18ED:00DD
cs=0x18ed;eip=0x0000df; 	X(POP(si));	// 45903 pop     si ;~ 18ED:00DF
cs=0x18ed;eip=0x0000e0; 	R(CALLF(sprite_copy_2_to_1,0));	// 45904 call    sprite_copy_2_to_1 ;~ 18ED:00E0
cs=0x18ed;eip=0x0000e5; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 45905 push    [bp+arg_4] ;~ 18ED:00E5
cs=0x18ed;eip=0x0000e8; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 45906 push    [bp+arg_0] ;~ 18ED:00E8
cs=0x18ed;eip=0x0000eb; 	T(MOV(bl, byte_3b8fc));	// 45907 mov     bl, byte_3B8FC ;~ 18ED:00EB
cs=0x18ed;eip=0x0000ef; 	T(SUB(bh, bh));	// 45908 sub     bh, bh ;~ 18ED:00EF
cs=0x18ed;eip=0x0000f1; 	T(SHL(bx, 1));	// 45909 shl     bx, 1 ;~ 18ED:00F1
cs=0x18ed;eip=0x0000f3; 	T(SHL(bx, 1));	// 45910 shl     bx, 1 ;~ 18ED:00F3
cs=0x18ed;eip=0x0000f5; 	T(LES(bx, *(dd*)(((db*)sprite_ptrs)+bx)));	// 45911 les     bx, sprite_ptrs[bx] ;~ 18ED:00F5
cs=0x18ed;eip=0x0000f9; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 45912 push    word ptr es:[bx+2] ;~ 18ED:00F9
cs=0x18ed;eip=0x0000fd; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 45913 push    word ptr es:[bx] ;~ 18ED:00FD
cs=0x18ed;eip=0x000100; 	R(CALLF(sprite_clear_shape_alt,0));	// 45914 call    sprite_clear_shape_alt ;~ 18ED:0100
cs=0x18ed;eip=0x000105; 	T(ADD(sp, 8));	// 45915 add     sp, 8 ;~ 18ED:0105
cs=0x18ed;eip=0x000108; 	X(INC(byte_3b8fc));	// 45916 inc     byte_3B8FC ;~ 18ED:0108
cs=0x18ed;eip=0x00010c; 	T(MOV(ax, 1));	// 45917 mov     ax, 1 ;~ 18ED:010C
cs=0x18ed;eip=0x00010f; 	X(POP(si));	// 45918 pop     si ;~ 18ED:010F
cs=0x18ed;eip=0x000110; 	X(POP(di));	// 45919 pop     di ;~ 18ED:0110
cs=0x18ed;eip=0x000111; 	T(MOV(sp, bp));	// 45920 mov     sp, bp ;~ 18ED:0111
cs=0x18ed;eip=0x000113; 	X(POP(bp));	// 45921 pop     bp ;~ 18ED:0113
cs=0x18ed;eip=0x000114; 	R(RETF(0));	// 45922 retf ;~ 18ED:0114
sub_275c6:
	// 45932 
#undef var_3c
#define var_3c -0x3C
	// 45935 var_3C          = byte ptr -3Ch ;~ 18ED:0116
#undef var_1e
#define var_1e -0x1E
	// 45936 var_1E          = byte ptr -1Eh ;~ 18ED:0116
ret_18ed_116:
	// 7544 
cs=0x18ed;eip=0x000116; 	X(PUSH(bp));	// 45938 push    bp ;~ 18ED:0116
cs=0x18ed;eip=0x000117; 	T(MOV(bp, sp));	// 45939 mov     bp, sp ;~ 18ED:0117
cs=0x18ed;eip=0x000119; 	T(SUB(sp, 0x3C));	// 45940 sub     sp, 3Ch ;~ 18ED:0119
cs=0x18ed;eip=0x00011c; 	X(PUSH(di));	// 45941 push    di ;~ 18ED:011C
cs=0x18ed;eip=0x00011d; 	X(PUSH(si));	// 45942 push    si ;~ 18ED:011D
cs=0x18ed;eip=0x00011e; 	T(CMP(byte_3b8fc, 0));	// 45943 cmp     byte_3B8FC, 0 ;~ 18ED:011E
cs=0x18ed;eip=0x000123; 	R(JNZ(loc_275d8));	// 45944 jnz     short loc_275D8 ;~ 18ED:0123
cs=0x18ed;eip=0x000125; 	R(JMP(loc_27680));	// 45945 jmp     loc_27680 ;~ 18ED:0125
loc_275d8:
	// 7545 
cs=0x18ed;eip=0x000128; 	X(DEC(byte_3b8fc));	// 45949 dec     byte_3B8FC ;~ 18ED:0128
cs=0x18ed;eip=0x00012c; 	X(PUSH(cs));	// 45950 push    cs ;~ 18ED:012C
cs=0x18ed;eip=0x00012d; 	R(CALL(mouse_draw_opaque_check,0));	// 45951 call    near ptr mouse_draw_opaque_check ;~ 18ED:012D
cs=0x18ed;eip=0x000130; 	T(MOV(al, byte_3b8fc));	// 45952 mov     al, byte_3B8FC ;~ 18ED:0130
cs=0x18ed;eip=0x000133; 	T(SUB(ah, ah));	// 45953 sub     ah, ah ;~ 18ED:0133
cs=0x18ed;eip=0x000135; 	T(MOV(si, ax));	// 45954 mov     si, ax ;~ 18ED:0135
cs=0x18ed;eip=0x000137; 	T(MOV(di, si));	// 45955 mov     di, si ;~ 18ED:0137
cs=0x18ed;eip=0x000139; 	T(SHL(di, 1));	// 45956 shl     di, 1 ;~ 18ED:0139
cs=0x18ed;eip=0x00013b; 	X(PUSH(*(dw*)(((db*)&word_46486)+di)));	// 45957 push    word_46486[di] ;~ 18ED:013B
cs=0x18ed;eip=0x00013f; 	X(PUSH(*(dw*)(((db*)&word_4646a)+di)));	// 45958 push    word_4646A[di] ;~ 18ED:013F
cs=0x18ed;eip=0x000143; 	T(MOV(bx, si));	// 45959 mov     bx, si ;~ 18ED:0143
cs=0x18ed;eip=0x000145; 	T(SHL(bx, 1));	// 45960 shl     bx, 1 ;~ 18ED:0145
cs=0x18ed;eip=0x000147; 	T(SHL(bx, 1));	// 45961 shl     bx, 1 ;~ 18ED:0147
cs=0x18ed;eip=0x000149; 	T(LES(bx, *(dd*)(((db*)sprite_ptrs)+bx)));	// 45962 les     bx, sprite_ptrs[bx] ;~ 18ED:0149
cs=0x18ed;eip=0x00014d; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 45963 push    word ptr es:[bx+2] ;~ 18ED:014D
cs=0x18ed;eip=0x000151; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 45964 push    word ptr es:[bx] ;~ 18ED:0151
cs=0x18ed;eip=0x000154; 	R(CALLF(sprite_shape_to_1,0));	// 45965 call    sprite_shape_to_1 ;~ 18ED:0154
cs=0x18ed;eip=0x000159; 	T(ADD(sp, 8));	// 45966 add     sp, 8 ;~ 18ED:0159
cs=0x18ed;eip=0x00015c; 	T(MOV(al, 0x3C));	// 45967 mov     al, 3Ch ; '<' ;~ 18ED:015C
cs=0x18ed;eip=0x00015e; 	X(MUL1_1(byte_3b8fc));	// 45968 mul     byte_3B8FC ;~ 18ED:015E
cs=0x18ed;eip=0x000162; 	T(ADD(ax, *(dw*)(((db*)&trackdata12))));	// 45969 add     ax, word ptr trackdata12 ;~ 18ED:0162
cs=0x18ed;eip=0x000166; 	T(MOV(dx, *(dw*)(((db*)&trackdata12)+2)));	// 45970 mov     dx, word ptr trackdata12+2 ;~ 18ED:0166
cs=0x18ed;eip=0x00016a; 	X(PUSH(si));	// 45971 push    si ;~ 18ED:016A
cs=0x18ed;eip=0x00016b; 	X(PUSH(di));	// 45972 push    di ;~ 18ED:016B
cs=0x18ed;eip=0x00016c; 	T(di = bp+var_3c);	// 45973 lea     di, [bp+var_3C] ;~ 18ED:016C
cs=0x18ed;eip=0x00016f; 	T(MOV(si, ax));	// 45974 mov     si, ax ;~ 18ED:016F
cs=0x18ed;eip=0x000171; 	X(PUSH(ss));	// 45975 push    ss ;~ 18ED:0171
cs=0x18ed;eip=0x000172; 	X(POP(es));	// 45976 pop     es ;~ 18ED:0172
cs=0x18ed;eip=0x000173; 	X(PUSH(ds));	// 45977 push    ds ;~ 18ED:0173
cs=0x18ed;eip=0x000174; 	T(MOV(ds, dx));	// 45978 mov     ds, dx ;~ 18ED:0174
cs=0x18ed;eip=0x000176; 	T(MOV(cx, 0x0F));	// 45979 mov     cx, 0Fh ;~ 18ED:0176
	// 45980 repne movsw ;~ 18ED:0179
cs=0x18ed;eip=0x000179; 	X(	REPNE MOVSW);	// 45980 repne movsw ;~ 18ED:0179
cs=0x18ed;eip=0x00017b; 	X(POP(ds));	// 45981 pop     ds ;~ 18ED:017B
cs=0x18ed;eip=0x00017c; 	X(POP(di));	// 45982 pop     di ;~ 18ED:017C
cs=0x18ed;eip=0x00017d; 	X(POP(si));	// 45983 pop     si ;~ 18ED:017D
cs=0x18ed;eip=0x00017e; 	T(MOV(al, byte_3b8fc));	// 45984 mov     al, byte_3B8FC ;~ 18ED:017E
cs=0x18ed;eip=0x000181; 	T(SUB(ah, ah));	// 45985 sub     ah, ah ;~ 18ED:0181
cs=0x18ed;eip=0x000183; 	T(SHL(ax, 1));	// 45986 shl     ax, 1 ;~ 18ED:0183
cs=0x18ed;eip=0x000185; 	T(MOV(cx, 0x1E));	// 45987 mov     cx, 1Eh ;~ 18ED:0185
cs=0x18ed;eip=0x000188; 	T(MUL1_2(cx));	// 45988 mul     cx ;~ 18ED:0188
cs=0x18ed;eip=0x00018a; 	T(ADD(ax, *(dw*)(((db*)&trackdata12))));	// 45989 add     ax, word ptr trackdata12 ;~ 18ED:018A
cs=0x18ed;eip=0x00018e; 	T(MOV(dx, *(dw*)(((db*)&trackdata12)+2)));	// 45990 mov     dx, word ptr trackdata12+2 ;~ 18ED:018E
cs=0x18ed;eip=0x000192; 	T(ADD(ax, cx));	// 45991 add     ax, cx ;~ 18ED:0192
cs=0x18ed;eip=0x000194; 	X(PUSH(si));	// 45992 push    si ;~ 18ED:0194
cs=0x18ed;eip=0x000195; 	X(PUSH(di));	// 45993 push    di ;~ 18ED:0195
cs=0x18ed;eip=0x000196; 	T(di = bp+var_1e);	// 45994 lea     di, [bp+var_1E] ;~ 18ED:0196
cs=0x18ed;eip=0x000199; 	T(MOV(si, ax));	// 45995 mov     si, ax ;~ 18ED:0199
cs=0x18ed;eip=0x00019b; 	X(PUSH(ds));	// 45996 push    ds ;~ 18ED:019B
cs=0x18ed;eip=0x00019c; 	T(MOV(ds, dx));	// 45997 mov     ds, dx ;~ 18ED:019C
cs=0x18ed;eip=0x00019e; 	T(MOV(cx, 0x0F));	// 45998 mov     cx, 0Fh ;~ 18ED:019E
	// 45999 repne movsw ;~ 18ED:01A1
cs=0x18ed;eip=0x0001a1; 	X(	REPNE MOVSW);	// 45999 repne movsw ;~ 18ED:01A1
cs=0x18ed;eip=0x0001a3; 	X(POP(ds));	// 46000 pop     ds ;~ 18ED:01A3
cs=0x18ed;eip=0x0001a4; 	X(POP(di));	// 46001 pop     di ;~ 18ED:01A4
cs=0x18ed;eip=0x0001a5; 	X(POP(si));	// 46002 pop     si ;~ 18ED:01A5
cs=0x18ed;eip=0x0001a6; 	T(ax = bp+var_3c);	// 46003 lea     ax, [bp+var_3C] ;~ 18ED:01A6
cs=0x18ed;eip=0x0001a9; 	X(PUSH(ax));	// 46004 push    ax ;~ 18ED:01A9
cs=0x18ed;eip=0x0001aa; 	R(CALLF(sprite_copy_arg_to_both,0));	// 46005 call    sprite_copy_arg_to_both ;~ 18ED:01AA
cs=0x18ed;eip=0x0001af; 	T(ADD(sp, 2));	// 46006 add     sp, 2 ;~ 18ED:01AF
cs=0x18ed;eip=0x0001b2; 	T(MOV(bl, byte_3b8fc));	// 46007 mov     bl, byte_3B8FC ;~ 18ED:01B2
cs=0x18ed;eip=0x0001b6; 	T(SUB(bh, bh));	// 46008 sub     bh, bh ;~ 18ED:01B6
cs=0x18ed;eip=0x0001b8; 	T(SHL(bx, 1));	// 46009 shl     bx, 1 ;~ 18ED:01B8
cs=0x18ed;eip=0x0001ba; 	T(SHL(bx, 1));	// 46010 shl     bx, 1 ;~ 18ED:01BA
cs=0x18ed;eip=0x0001bc; 	X(PUSH(*(dw*)((((db*)sprite_ptrs)+2)+bx)));	// 46011 push    word ptr (sprite_ptrs+2)[bx] ;~ 18ED:01BC
cs=0x18ed;eip=0x0001c0; 	X(PUSH(*(dw*)(((db*)sprite_ptrs)+bx)));	// 46012 push    word ptr sprite_ptrs[bx] ;~ 18ED:01C0
cs=0x18ed;eip=0x0001c4; 	R(CALLF(sprite_free_wnd,0));	// 46013 call    sprite_free_wnd ;~ 18ED:01C4
cs=0x18ed;eip=0x0001c9; 	T(ADD(sp, 4));	// 46014 add     sp, 4 ;~ 18ED:01C9
cs=0x18ed;eip=0x0001cc; 	X(PUSH(cs));	// 46015 push    cs ;~ 18ED:01CC
cs=0x18ed;eip=0x0001cd; 	R(CALL(mouse_draw_transparent_check,0));	// 46016 call    near ptr mouse_draw_transparent_check ;~ 18ED:01CD
loc_27680:
	// 7546 
cs=0x18ed;eip=0x0001d0; 	X(POP(si));	// 46019 pop     si ;~ 18ED:01D0
cs=0x18ed;eip=0x0001d1; 	X(POP(di));	// 46020 pop     di ;~ 18ED:01D1
cs=0x18ed;eip=0x0001d2; 	T(MOV(sp, bp));	// 46021 mov     sp, bp ;~ 18ED:01D2
cs=0x18ed;eip=0x0001d4; 	X(POP(bp));	// 46022 pop     bp ;~ 18ED:01D4
cs=0x18ed;eip=0x0001d5; 	R(RETF(0));	// 46023 retf ;~ 18ED:01D5
show_dialog:
	// 46031 
#undef var_1d8
#define var_1d8 -0x1D8
	// 46034 var_1D8         = byte ptr -1D8h ;~ 18ED:01D6
#undef var_1d6
#define var_1d6 -0x1D6
	// 46035 var_1D6         = word ptr -1D6h ;~ 18ED:01D6
#undef var_1d4
#define var_1d4 -0x1D4
	// 46036 var_1D4         = byte ptr -1D4h ;~ 18ED:01D6
#undef var_1d2
#define var_1d2 -0x1D2
	// 46037 var_1D2         = word ptr -1D2h ;~ 18ED:01D6
#undef var_1d0
#define var_1d0 -0x1D0
	// 46038 var_1D0         = dword ptr -1D0h ;~ 18ED:01D6
#undef var_1cc
#define var_1cc -0x1CC
	// 46039 var_1CC         = word ptr -1CCh ;~ 18ED:01D6
#undef var_1ca
#define var_1ca -0x1CA
	// 46040 var_1CA         = byte ptr -1CAh ;~ 18ED:01D6
#undef var_1c8
#define var_1c8 -0x1C8
	// 46041 var_1C8         = word ptr -1C8h ;~ 18ED:01D6
#undef var_1c6
#define var_1c6 -0x1C6
	// 46042 var_1C6         = word ptr -1C6h ;~ 18ED:01D6
#undef var_1c4
#define var_1c4 -0x1C4
	// 46043 var_1C4         = byte ptr -1C4h ;~ 18ED:01D6
#undef var_1c2
#define var_1c2 -0x1C2
	// 46044 var_1C2         = word ptr -1C2h ;~ 18ED:01D6
#undef var_1c0
#define var_1c0 -0x1C0
	// 46045 var_1C0         = byte ptr -1C0h ;~ 18ED:01D6
#undef var_1be
#define var_1be -0x1BE
	// 46046 var_1BE         = byte ptr -1BEh ;~ 18ED:01D6
#undef var_196
#define var_196 -0x196
	// 46047 var_196         = word ptr -196h ;~ 18ED:01D6
#undef var_194
#define var_194 -0x194
	// 46048 var_194         = word ptr -194h ;~ 18ED:01D6
#undef var_192
#define var_192 -0x192
	// 46049 var_192         = byte ptr -192h ;~ 18ED:01D6
#undef var_142
#define var_142 -0x142
	// 46050 var_142         = word ptr -142h ;~ 18ED:01D6
#undef var_140
#define var_140 -0x140
	// 46051 var_140         = byte ptr -140h ;~ 18ED:01D6
#undef var_13e
#define var_13e -0x13E
	// 46052 var_13E         = dword ptr -13Eh ;~ 18ED:01D6
#undef var_13a
#define var_13a -0x13A
	// 46053 var_13A         = dword ptr -13Ah ;~ 18ED:01D6
#undef var_ee
#define var_ee -0x0EE
	// 46054 var_EE          = byte ptr -0EEh ;~ 18ED:01D6
#undef var_c6
#define var_c6 -0x0C6
	// 46055 var_C6          = byte ptr -0C6h ;~ 18ED:01D6
#undef var_9e
#define var_9e -0x9E
	// 46056 var_9E          = byte ptr -9Eh ;~ 18ED:01D6
#undef var_9c
#define var_9c -0x9C
	// 46057 var_9C          = word ptr -9Ch ;~ 18ED:01D6
#undef var_9a
#define var_9a -0x9A
	// 46058 var_9A          = word ptr -9Ah ;~ 18ED:01D6
#undef var_98
#define var_98 -0x98
	// 46059 var_98          = byte ptr -98h ;~ 18ED:01D6
#undef var_84
#define var_84 -0x84
	// 46060 var_84          = byte ptr -84h ;~ 18ED:01D6
#undef var_82
#define var_82 -0x82
	// 46061 var_82          = word ptr -82h ;~ 18ED:01D6
#undef var_80
#define var_80 -0x80
	// 46062 var_80          = byte ptr -80h ;~ 18ED:01D6
#undef var_30
#define var_30 -0x30
	// 46063 var_30          = word ptr -30h ;~ 18ED:01D6
#undef var_2e
#define var_2e -0x2E
	// 46064 var_2E          = word ptr -2Eh ;~ 18ED:01D6
#undef var_2c
#define var_2c -0x2C
	// 46065 var_2C          = word ptr -2Ch ;~ 18ED:01D6
#undef var_2a
#define var_2a -0x2A
	// 46066 var_2A          = word ptr -2Ah ;~ 18ED:01D6
#undef var_28
#define var_28 -0x28
	// 46067 var_28          = word ptr -28h ;~ 18ED:01D6
#undef var_26
#define var_26 -0x26
	// 46068 var_26          = word ptr -26h ;~ 18ED:01D6
#undef var_24
#define var_24 -0x24
	// 46069 var_24          = word ptr -24h ;~ 18ED:01D6
#undef arg_0
#define arg_0 6
	// 46070 arg_0           = word ptr  6 ;~ 18ED:01D6
#undef arg_2
#define arg_2 8
	// 46071 arg_2           = word ptr  8 ;~ 18ED:01D6
#undef arg_4
#define arg_4 0x0A
	// 46072 arg_4           = word ptr  0Ah ;~ 18ED:01D6
#undef arg_6
#define arg_6 0x0C
	// 46073 arg_6           = word ptr  0Ch ;~ 18ED:01D6
#undef arg_8
#define arg_8 0x0E
	// 46074 arg_8           = word ptr  0Eh ;~ 18ED:01D6
#undef arg_a
#define arg_a 0x10
	// 46075 arg_A           = word ptr  10h ;~ 18ED:01D6
#undef arg_c
#define arg_c 0x12
	// 46076 arg_C           = word ptr  12h ;~ 18ED:01D6
#undef arg_e
#define arg_e 0x14
	// 46077 arg_E           = word ptr  14h ;~ 18ED:01D6
#undef arg_10
#define arg_10 0x16
	// 46078 arg_10          = byte ptr  16h ;~ 18ED:01D6
ret_18ed_1d6:
	// 7547 
cs=0x18ed;eip=0x0001d6; 	X(PUSH(bp));	// 46080 push    bp ;~ 18ED:01D6
cs=0x18ed;eip=0x0001d7; 	T(MOV(bp, sp));	// 46081 mov     bp, sp ;~ 18ED:01D7
cs=0x18ed;eip=0x0001d9; 	T(SUB(sp, 0x1D8));	// 46082 sub     sp, 1D8h ;~ 18ED:01D9
cs=0x18ed;eip=0x0001dd; 	X(PUSH(di));	// 46083 push    di ;~ 18ED:01DD
cs=0x18ed;eip=0x0001de; 	X(PUSH(si));	// 46084 push    si ;~ 18ED:01DE
cs=0x18ed;eip=0x0001df; 	T(MOV(ax, fontdef_unk_0e));	// 46085 mov     ax, fontdef_unk_0E ;~ 18ED:01DF
cs=0x18ed;eip=0x0001e2; 	T(ADD(ax, 2));	// 46086 add     ax, 2 ;~ 18ED:01E2
cs=0x18ed;eip=0x0001e5; 	X(MOV(*(dw*)(raddr(ss,bp+var_1d6)), ax));	// 46087 mov     [bp+var_1D6], ax ;~ 18ED:01E5
cs=0x18ed;eip=0x0001e9; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c6)), 0));	// 46088 mov     [bp+var_1C6], 0 ;~ 18ED:01E9
cs=0x18ed;eip=0x0001ef; 	X(MOV(*(dw*)(raddr(ss,bp+var_194)), 0x20));	// 46089 mov     [bp+var_194], 20h ; ' ' ;~ 18ED:01EF
cs=0x18ed;eip=0x0001f5; 	X(PUSH(cs));	// 46090 push    cs ;~ 18ED:01F5
cs=0x18ed;eip=0x0001f6; 	R(CALL(mouse_draw_opaque_check,0));	// 46091 call    near ptr mouse_draw_opaque_check ;~ 18ED:01F6
cs=0x18ed;eip=0x0001f9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 46092 mov     ax, [bp+arg_4] ;~ 18ED:01F9
cs=0x18ed;eip=0x0001fc; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 46093 mov     dx, [bp+arg_6] ;~ 18ED:01FC
cs=0x18ed;eip=0x0001ff; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_1d0))), ax));	// 46094 mov     word ptr [bp+var_1D0], ax ;~ 18ED:01FF
cs=0x18ed;eip=0x000203; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_1d0+2))), dx));	// 46095 mov     word ptr [bp+var_1D0+2], dx ;~ 18ED:0203
cs=0x18ed;eip=0x000207; 	X(MOV(*(dw*)(raddr(ss,bp+var_82)), 0));	// 46096 mov     [bp+var_82], 0 ;~ 18ED:0207
cs=0x18ed;eip=0x00020d; 	R(JMP(loc_2775a));	// 46097 jmp     loc_2775A ;~ 18ED:020D
loc_276c0:
	// 7548 
cs=0x18ed;eip=0x000210; 	T(CMP(*(raddr(ss,bp+var_1d8)), 0x5D));	// 46101 cmp     [bp+var_1D8], 5Dh ; ']' ;~ 18ED:0210
cs=0x18ed;eip=0x000215; 	R(JNZ(loc_27702));	// 46102 jnz     short loc_27702 ;~ 18ED:0215
cs=0x18ed;eip=0x000217; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_82))));	// 46103 mov     si, [bp+var_82] ;~ 18ED:0217
cs=0x18ed;eip=0x00021b; 	X(MOV(*(raddr(ss,bp+si+var_80)), 0));	// 46104 mov     [bp+si+var_80], 0 ;~ 18ED:021B
cs=0x18ed;eip=0x00021f; 	T(ax = bp+var_80);	// 46105 lea     ax, [bp+var_80] ;~ 18ED:021F
cs=0x18ed;eip=0x000222; 	X(PUSH(ax));	// 46106 push    ax ;~ 18ED:0222
cs=0x18ed;eip=0x000223; 	R(CALLF(font_op2,0));	// 46107 call    font_op2 ;~ 18ED:0223
cs=0x18ed;eip=0x000228; 	T(ADD(sp, 2));	// 46108 add     sp, 2 ;~ 18ED:0228
cs=0x18ed;eip=0x00022b; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c2)), ax));	// 46109 mov     [bp+var_1C2], ax ;~ 18ED:022B
cs=0x18ed;eip=0x00022f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_194))));	// 46110 mov     ax, [bp+var_194] ;~ 18ED:022F
cs=0x18ed;eip=0x000233; 	T(CMP(*(dw*)(raddr(ss,bp+var_1c2)), ax));	// 46111 cmp     [bp+var_1C2], ax ;~ 18ED:0233
cs=0x18ed;eip=0x000237; 	R(JLE(loc_276f1));	// 46112 jle     short loc_276F1 ;~ 18ED:0237
cs=0x18ed;eip=0x000239; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c2))));	// 46113 mov     ax, [bp+var_1C2] ;~ 18ED:0239
cs=0x18ed;eip=0x00023d; 	X(MOV(*(dw*)(raddr(ss,bp+var_194)), ax));	// 46114 mov     [bp+var_194], ax ;~ 18ED:023D
loc_276f1:
	// 7549 
cs=0x18ed;eip=0x000241; 	X(MOV(*(dw*)(raddr(ss,bp+var_82)), 0));	// 46117 mov     [bp+var_82], 0 ;~ 18ED:0241
cs=0x18ed;eip=0x000247; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1d6))));	// 46118 mov     ax, [bp+var_1D6] ;~ 18ED:0247
cs=0x18ed;eip=0x00024b; 	X(ADD(*(dw*)(raddr(ss,bp+var_1c6)), ax));	// 46119 add     [bp+var_1C6], ax ;~ 18ED:024B
cs=0x18ed;eip=0x00024f; 	R(JMP(loc_27756));	// 46120 jmp     short loc_27756 ;~ 18ED:024F
loc_27702:
	// 7550 
cs=0x18ed;eip=0x000252; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_1d0))));	// 46125 les     bx, [bp+var_1D0] ;~ 18ED:0252
cs=0x18ed;eip=0x000256; 	T(CMP(*(raddr(es,bx)), 0x7D));	// 46126 cmp     byte ptr es:[bx], 7Dh ; '}' ;~ 18ED:0256
cs=0x18ed;eip=0x00025a; 	R(JNZ(loc_27744));	// 46127 jnz     short loc_27744 ;~ 18ED:025A
cs=0x18ed;eip=0x00025c; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_82))));	// 46128 mov     si, [bp+var_82] ;~ 18ED:025C
cs=0x18ed;eip=0x000260; 	X(MOV(*(raddr(ss,bp+si+var_80)), 0));	// 46129 mov     [bp+si+var_80], 0 ;~ 18ED:0260
cs=0x18ed;eip=0x000264; 	T(ax = bp+var_80);	// 46130 lea     ax, [bp+var_80] ;~ 18ED:0264
cs=0x18ed;eip=0x000267; 	X(PUSH(ax));	// 46131 push    ax ;~ 18ED:0267
cs=0x18ed;eip=0x000268; 	R(CALLF(font_op2,0));	// 46132 call    font_op2 ;~ 18ED:0268
cs=0x18ed;eip=0x00026d; 	T(ADD(sp, 2));	// 46133 add     sp, 2 ;~ 18ED:026D
cs=0x18ed;eip=0x000270; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c2)), ax));	// 46134 mov     [bp+var_1C2], ax ;~ 18ED:0270
cs=0x18ed;eip=0x000274; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_194))));	// 46135 mov     ax, [bp+var_194] ;~ 18ED:0274
cs=0x18ed;eip=0x000278; 	T(CMP(*(dw*)(raddr(ss,bp+var_1c2)), ax));	// 46136 cmp     [bp+var_1C2], ax ;~ 18ED:0278
cs=0x18ed;eip=0x00027c; 	R(JLE(loc_27736));	// 46137 jle     short loc_27736 ;~ 18ED:027C
cs=0x18ed;eip=0x00027e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c2))));	// 46138 mov     ax, [bp+var_1C2] ;~ 18ED:027E
cs=0x18ed;eip=0x000282; 	X(MOV(*(dw*)(raddr(ss,bp+var_194)), ax));	// 46139 mov     [bp+var_194], ax ;~ 18ED:0282
loc_27736:
	// 7551 
cs=0x18ed;eip=0x000286; 	X(MOV(*(dw*)(raddr(ss,bp+var_82)), 0));	// 46142 mov     [bp+var_82], 0 ;~ 18ED:0286
cs=0x18ed;eip=0x00028c; 	X(ADD(*(dw*)(raddr(ss,bp+var_1c6)), 4));	// 46143 add     [bp+var_1C6], 4 ;~ 18ED:028C
cs=0x18ed;eip=0x000291; 	R(JMP(loc_27756));	// 46144 jmp     short loc_27756 ;~ 18ED:0291
loc_27744:
	// 7552 
cs=0x18ed;eip=0x000294; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_1d0))));	// 46149 les     bx, [bp+var_1D0] ;~ 18ED:0294
cs=0x18ed;eip=0x000298; 	T(MOV(al, *(raddr(es,bx))));	// 46150 mov     al, es:[bx] ;~ 18ED:0298
cs=0x18ed;eip=0x00029b; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_82))));	// 46151 mov     si, [bp+var_82] ;~ 18ED:029B
cs=0x18ed;eip=0x00029f; 	X(INC(*(dw*)(raddr(ss,bp+var_82))));	// 46152 inc     [bp+var_82] ;~ 18ED:029F
cs=0x18ed;eip=0x0002a3; 	X(MOV(*(raddr(ss,bp+si+var_80)), al));	// 46153 mov     [bp+si+var_80], al ;~ 18ED:02A3
loc_27756:
	// 7553 
cs=0x18ed;eip=0x0002a6; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_1d0)))));	// 46157 inc     word ptr [bp+var_1D0] ;~ 18ED:02A6
loc_2775a:
	// 7554 
cs=0x18ed;eip=0x0002aa; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_1d0))));	// 46160 les     bx, [bp+var_1D0] ;~ 18ED:02AA
cs=0x18ed;eip=0x0002ae; 	T(MOV(al, *(raddr(es,bx))));	// 46161 mov     al, es:[bx] ;~ 18ED:02AE
cs=0x18ed;eip=0x0002b1; 	X(MOV(*(raddr(ss,bp+var_1d8)), al));	// 46162 mov     [bp+var_1D8], al ;~ 18ED:02B1
cs=0x18ed;eip=0x0002b5; 	T(OR(al, al));	// 46163 or      al, al ;~ 18ED:02B5
cs=0x18ed;eip=0x0002b7; 	R(JZ(loc_2776c));	// 46164 jz      short loc_2776C ;~ 18ED:02B7
cs=0x18ed;eip=0x0002b9; 	R(JMP(loc_276c0));	// 46165 jmp     loc_276C0 ;~ 18ED:02B9
loc_2776c:
	// 7555 
cs=0x18ed;eip=0x0002bc; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_194))));	// 46169 mov     ax, [bp+var_194] ;~ 18ED:02BC
cs=0x18ed;eip=0x0002c0; 	T(ADD(ax, 0x18));	// 46170 add     ax, 18h ;~ 18ED:02C0
cs=0x18ed;eip=0x0002c3; 	T(AND(al, 0x0F8));	// 46171 and     al, 0F8h ;~ 18ED:02C3
cs=0x18ed;eip=0x0002c5; 	X(MOV(*(dw*)(raddr(ss,bp+var_194)), ax));	// 46172 mov     [bp+var_194], ax ;~ 18ED:02C5
cs=0x18ed;eip=0x0002c9; 	T(CMP(*(dw*)(raddr(ss,bp+arg_8)), 0x0FFFF));	// 46173 cmp     [bp+arg_8], 0FFFFh ;~ 18ED:02C9
cs=0x18ed;eip=0x0002cd; 	R(JNZ(loc_27790));	// 46174 jnz     short loc_27790 ;~ 18ED:02CD
cs=0x18ed;eip=0x0002cf; 	T(MOV(ax, 0x140));	// 46175 mov     ax, 140h ;~ 18ED:02CF
cs=0x18ed;eip=0x0002d2; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_194))));	// 46176 sub     ax, [bp+var_194] ;~ 18ED:02D2
cs=0x18ed;eip=0x0002d6; 	T(CWD);	// 46177 cwd ;~ 18ED:02D6
cs=0x18ed;eip=0x0002d7; 	T(SUB(ax, dx));	// 46178 sub     ax, dx ;~ 18ED:02D7
cs=0x18ed;eip=0x0002d9; 	T(SAR(ax, 1));	// 46179 sar     ax, 1 ;~ 18ED:02D9
cs=0x18ed;eip=0x0002db; 	T(AND(al, 0x0F8));	// 46180 and     al, 0F8h ;~ 18ED:02DB
cs=0x18ed;eip=0x0002dd; 	X(MOV(*(dw*)(raddr(ss,bp+arg_8)), ax));	// 46181 mov     [bp+arg_8], ax ;~ 18ED:02DD
loc_27790:
	// 7556 
cs=0x18ed;eip=0x0002e0; 	T(CMP(*(dw*)(raddr(ss,bp+arg_a)), 0x0FFFF));	// 46184 cmp     [bp+arg_A], 0FFFFh ;~ 18ED:02E0
cs=0x18ed;eip=0x0002e4; 	R(JNZ(loc_277a5));	// 46185 jnz     short loc_277A5 ;~ 18ED:02E4
cs=0x18ed;eip=0x0002e6; 	T(MOV(ax, 0x0C8));	// 46186 mov     ax, 0C8h ; 'È' ;~ 18ED:02E6
cs=0x18ed;eip=0x0002e9; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_1c6))));	// 46187 sub     ax, [bp+var_1C6] ;~ 18ED:02E9
cs=0x18ed;eip=0x0002ed; 	T(CWD);	// 46188 cwd ;~ 18ED:02ED
cs=0x18ed;eip=0x0002ee; 	T(SUB(ax, dx));	// 46189 sub     ax, dx ;~ 18ED:02EE
cs=0x18ed;eip=0x0002f0; 	T(SAR(ax, 1));	// 46190 sar     ax, 1 ;~ 18ED:02F0
cs=0x18ed;eip=0x0002f2; 	X(MOV(*(dw*)(raddr(ss,bp+arg_a)), ax));	// 46191 mov     [bp+arg_A], ax ;~ 18ED:02F2
loc_277a5:
	// 7557 
cs=0x18ed;eip=0x0002f5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 46194 mov     ax, [bp+arg_8] ;~ 18ED:02F5
cs=0x18ed;eip=0x0002f8; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), ax));	// 46195 mov     [bp+var_30], ax ;~ 18ED:02F8
cs=0x18ed;eip=0x0002fb; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_194))));	// 46196 add     ax, [bp+var_194] ;~ 18ED:02FB
cs=0x18ed;eip=0x0002ff; 	X(MOV(*(dw*)(raddr(ss,bp+var_2e)), ax));	// 46197 mov     [bp+var_2E], ax ;~ 18ED:02FF
cs=0x18ed;eip=0x000302; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 46198 mov     ax, [bp+arg_A] ;~ 18ED:0302
cs=0x18ed;eip=0x000305; 	T(SUB(ax, 8));	// 46199 sub     ax, 8 ;~ 18ED:0305
cs=0x18ed;eip=0x000308; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 46200 mov     [bp+var_2C], ax ;~ 18ED:0308
cs=0x18ed;eip=0x00030b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 46201 mov     ax, [bp+arg_A] ;~ 18ED:030B
cs=0x18ed;eip=0x00030e; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1c6))));	// 46202 add     ax, [bp+var_1C6] ;~ 18ED:030E
cs=0x18ed;eip=0x000312; 	T(ADD(ax, 8));	// 46203 add     ax, 8 ;~ 18ED:0312
cs=0x18ed;eip=0x000315; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a)), ax));	// 46204 mov     [bp+var_2A], ax ;~ 18ED:0315
cs=0x18ed;eip=0x000318; 	X(ADD(*(dw*)(raddr(ss,bp+arg_8)), 8));	// 46205 add     [bp+arg_8], 8 ;~ 18ED:0318
cs=0x18ed;eip=0x00031c; 	X(SUB(*(dw*)(raddr(ss,bp+var_194)), 0x10));	// 46206 sub     [bp+var_194], 10h ;~ 18ED:031C
cs=0x18ed;eip=0x000321; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 46207 cmp     [bp+arg_2], 0 ;~ 18ED:0321
cs=0x18ed;eip=0x000325; 	R(JZ(loc_277f6));	// 46208 jz      short loc_277F6 ;~ 18ED:0325
cs=0x18ed;eip=0x000327; 	X(PUSH(ax));	// 46209 push    ax ;~ 18ED:0327
cs=0x18ed;eip=0x000328; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2c))));	// 46210 push    [bp+var_2C] ;~ 18ED:0328
cs=0x18ed;eip=0x00032b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2e))));	// 46211 push    [bp+var_2E] ;~ 18ED:032B
cs=0x18ed;eip=0x00032e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_30))));	// 46212 push    [bp+var_30] ;~ 18ED:032E
cs=0x18ed;eip=0x000331; 	X(PUSH(cs));	// 46213 push    cs ;~ 18ED:0331
cs=0x18ed;eip=0x000332; 	R(CALL(sub_274b0,0));	// 46214 call    near ptr sub_274B0 ;~ 18ED:0332
cs=0x18ed;eip=0x000335; 	T(ADD(sp, 8));	// 46215 add     sp, 8 ;~ 18ED:0335
cs=0x18ed;eip=0x000338; 	T(OR(al, al));	// 46216 or      al, al ;~ 18ED:0338
cs=0x18ed;eip=0x00033a; 	R(JNZ(loc_277f6));	// 46217 jnz     short loc_277F6 ;~ 18ED:033A
cs=0x18ed;eip=0x00033c; 	T(MOV(ax, 0x0FFFF));	// 46218 mov     ax, 0FFFFh ;~ 18ED:033C
cs=0x18ed;eip=0x00033f; 	X(POP(si));	// 46219 pop     si ;~ 18ED:033F
cs=0x18ed;eip=0x000340; 	X(POP(di));	// 46220 pop     di ;~ 18ED:0340
cs=0x18ed;eip=0x000341; 	T(MOV(sp, bp));	// 46221 mov     sp, bp ;~ 18ED:0341
cs=0x18ed;eip=0x000343; 	X(POP(bp));	// 46222 pop     bp ;~ 18ED:0343
cs=0x18ed;eip=0x000344; 	R(RETF(0));	// 46223 retf ;~ 18ED:0344
loc_277f6:
	// 7558 
cs=0x18ed;eip=0x000346; 	R(CALLF(sprite_copy_2_to_1,0));	// 46229 call    sprite_copy_2_to_1 ;~ 18ED:0346
cs=0x18ed;eip=0x00034b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2a))));	// 46230 push    [bp+var_2A] ;~ 18ED:034B
cs=0x18ed;eip=0x00034e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2c))));	// 46231 push    [bp+var_2C] ;~ 18ED:034E
cs=0x18ed;eip=0x000351; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2e))));	// 46232 push    [bp+var_2E] ;~ 18ED:0351
cs=0x18ed;eip=0x000354; 	X(PUSH(*(dw*)(raddr(ss,bp+var_30))));	// 46233 push    [bp+var_30] ;~ 18ED:0354
cs=0x18ed;eip=0x000357; 	R(CALLF(sprite_set_1_size,0));	// 46234 call    sprite_set_1_size ;~ 18ED:0357
cs=0x18ed;eip=0x00035c; 	T(ADD(sp, 8));	// 46235 add     sp, 8 ;~ 18ED:035C
cs=0x18ed;eip=0x00035f; 	T(SUB(ax, ax));	// 46236 sub     ax, ax ;~ 18ED:035F
cs=0x18ed;eip=0x000361; 	X(PUSH(ax));	// 46237 push    ax ;~ 18ED:0361
cs=0x18ed;eip=0x000362; 	R(CALLF(sprite_clear_1_color,0));	// 46238 call    sprite_clear_1_color ;~ 18ED:0362
cs=0x18ed;eip=0x000367; 	T(ADD(sp, 2));	// 46239 add     sp, 2 ;~ 18ED:0367
cs=0x18ed;eip=0x00036a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 46240 push    [bp+arg_C] ;~ 18ED:036A
cs=0x18ed;eip=0x00036d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 46241 mov     ax, [bp+arg_A] ;~ 18ED:036D
cs=0x18ed;eip=0x000370; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1c6))));	// 46242 add     ax, [bp+var_1C6] ;~ 18ED:0370
cs=0x18ed;eip=0x000374; 	T(ADD(ax, 4));	// 46243 add     ax, 4 ;~ 18ED:0374
cs=0x18ed;eip=0x000377; 	X(PUSH(ax));	// 46244 push    ax ;~ 18ED:0377
cs=0x18ed;eip=0x000378; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 46245 mov     ax, [bp+arg_8] ;~ 18ED:0378
cs=0x18ed;eip=0x00037b; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_194))));	// 46246 add     ax, [bp+var_194] ;~ 18ED:037B
cs=0x18ed;eip=0x00037f; 	T(ADD(ax, 4));	// 46247 add     ax, 4 ;~ 18ED:037F
cs=0x18ed;eip=0x000382; 	X(PUSH(ax));	// 46248 push    ax ;~ 18ED:0382
cs=0x18ed;eip=0x000383; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 46249 mov     ax, [bp+arg_A] ;~ 18ED:0383
cs=0x18ed;eip=0x000386; 	T(SUB(ax, 4));	// 46250 sub     ax, 4 ;~ 18ED:0386
cs=0x18ed;eip=0x000389; 	X(PUSH(ax));	// 46251 push    ax ;~ 18ED:0389
cs=0x18ed;eip=0x00038a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 46252 mov     ax, [bp+arg_8] ;~ 18ED:038A
cs=0x18ed;eip=0x00038d; 	T(SUB(ax, 4));	// 46253 sub     ax, 4 ;~ 18ED:038D
cs=0x18ed;eip=0x000390; 	X(PUSH(ax));	// 46254 push    ax ;~ 18ED:0390
cs=0x18ed;eip=0x000391; 	R(CALLF(sprite_1_unk4,0));	// 46255 call    sprite_1_unk4 ;~ 18ED:0391
cs=0x18ed;eip=0x000396; 	T(ADD(sp, 0x0A));	// 46256 add     sp, 0Ah ;~ 18ED:0396
cs=0x18ed;eip=0x000399; 	T(SUB(ax, ax));	// 46257 sub     ax, ax ;~ 18ED:0399
cs=0x18ed;eip=0x00039b; 	X(PUSH(ax));	// 46258 push    ax ;~ 18ED:039B
cs=0x18ed;eip=0x00039c; 	X(PUSH(dialog_fnt_colour));	// 46259 push    dialog_fnt_colour ;~ 18ED:039C
cs=0x18ed;eip=0x0003a0; 	R(CALLF(font_set_unk,0));	// 46260 call    font_set_unk ;~ 18ED:03A0
cs=0x18ed;eip=0x0003a5; 	T(ADD(sp, 4));	// 46261 add     sp, 4 ;~ 18ED:03A5
cs=0x18ed;eip=0x0003a8; 	X(MOV(word_3eb90, 0));	// 46262 mov     word_3EB90, 0 ;~ 18ED:03A8
cs=0x18ed;eip=0x0003ae; 	T(SUB(ax, ax));	// 46263 sub     ax, ax ;~ 18ED:03AE
cs=0x18ed;eip=0x0003b0; 	X(PUSH(ax));	// 46264 push    ax ;~ 18ED:03B0
cs=0x18ed;eip=0x0003b1; 	X(PUSH(dialog_fnt_colour));	// 46265 push    dialog_fnt_colour ;~ 18ED:03B1
cs=0x18ed;eip=0x0003b5; 	R(CALLF(font_set_unk,0));	// 46266 call    font_set_unk ;~ 18ED:03B5
cs=0x18ed;eip=0x0003ba; 	T(ADD(sp, 4));	// 46267 add     sp, 4 ;~ 18ED:03BA
cs=0x18ed;eip=0x0003bd; 	X(MOV(*(dw*)(raddr(ss,bp+var_82)), 0));	// 46268 mov     [bp+var_82], 0 ;~ 18ED:03BD
cs=0x18ed;eip=0x0003c3; 	X(MOV(*(raddr(ss,bp+var_9e)), 0));	// 46269 mov     [bp+var_9E], 0 ;~ 18ED:03C3
cs=0x18ed;eip=0x0003c8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 46270 mov     ax, [bp+arg_4] ;~ 18ED:03C8
cs=0x18ed;eip=0x0003cb; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 46271 mov     dx, [bp+arg_6] ;~ 18ED:03CB
cs=0x18ed;eip=0x0003ce; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_1d0))), ax));	// 46272 mov     word ptr [bp+var_1D0], ax ;~ 18ED:03CE
cs=0x18ed;eip=0x0003d2; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_1d0+2))), dx));	// 46273 mov     word ptr [bp+var_1D0+2], dx ;~ 18ED:03D2
cs=0x18ed;eip=0x0003d6; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c6)), 1));	// 46274 mov     [bp+var_1C6], 1 ;~ 18ED:03D6
cs=0x18ed;eip=0x0003dc; 	R(JMP(loc_2798e));	// 46275 jmp     loc_2798E ;~ 18ED:03DC
loc_27890:
	// 7559 
cs=0x18ed;eip=0x0003e0; 	T(CMP(*(raddr(ss,bp+var_1d8)), 0x5B));	// 46280 cmp     [bp+var_1D8], 5Bh ; '[' ;~ 18ED:03E0
cs=0x18ed;eip=0x0003e5; 	R(JNZ(loc_2789a));	// 46281 jnz     short loc_2789A ;~ 18ED:03E5
cs=0x18ed;eip=0x0003e7; 	R(JMP(loc_279a0));	// 46282 jmp     loc_279A0 ;~ 18ED:03E7
loc_2789a:
	// 7560 
cs=0x18ed;eip=0x0003ea; 	T(CMP(*(raddr(ss,bp+var_1d8)), 0x5D));	// 46286 cmp     [bp+var_1D8], 5Dh ; ']' ;~ 18ED:03EA
cs=0x18ed;eip=0x0003ef; 	R(JNZ(loc_278e2));	// 46287 jnz     short loc_278E2 ;~ 18ED:03EF
cs=0x18ed;eip=0x0003f1; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_82))));	// 46288 mov     si, [bp+var_82] ;~ 18ED:03F1
cs=0x18ed;eip=0x0003f5; 	X(MOV(*(raddr(ss,bp+si+var_80)), 0));	// 46289 mov     [bp+si+var_80], 0 ;~ 18ED:03F5
cs=0x18ed;eip=0x0003f9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 46290 mov     ax, [bp+arg_A] ;~ 18ED:03F9
cs=0x18ed;eip=0x0003fc; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1c6))));	// 46291 add     ax, [bp+var_1C6] ;~ 18ED:03FC
cs=0x18ed;eip=0x000400; 	X(PUSH(ax));	// 46292 push    ax ;~ 18ED:0400
cs=0x18ed;eip=0x000401; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 46293 push    [bp+arg_8] ;~ 18ED:0401
cs=0x18ed;eip=0x000404; 	T(ax = bp+var_80);	// 46294 lea     ax, [bp+var_80] ;~ 18ED:0404
cs=0x18ed;eip=0x000407; 	X(PUSH(ax));	// 46295 push    ax ;~ 18ED:0407
cs=0x18ed;eip=0x000408; 	R(CALLF(sub_345bc,0));	// 46296 call    sub_345BC ;~ 18ED:0408
cs=0x18ed;eip=0x00040d; 	T(ADD(sp, 6));	// 46297 add     sp, 6 ;~ 18ED:040D
cs=0x18ed;eip=0x000410; 	X(MOV(*(dw*)(raddr(ss,bp+var_82)), 0));	// 46298 mov     [bp+var_82], 0 ;~ 18ED:0410
cs=0x18ed;eip=0x000416; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1d6))));	// 46299 mov     ax, [bp+var_1D6] ;~ 18ED:0416
cs=0x18ed;eip=0x00041a; 	X(ADD(*(dw*)(raddr(ss,bp+var_1c6)), ax));	// 46300 add     [bp+var_1C6], ax ;~ 18ED:041A
loc_278ce:
	// 7561 
cs=0x18ed;eip=0x00041e; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_1d0)))));	// 46303 mov     ax, word ptr [bp+var_1D0] ;~ 18ED:041E
cs=0x18ed;eip=0x000422; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_1d0+2)))));	// 46304 mov     dx, word ptr [bp+var_1D0+2] ;~ 18ED:0422
cs=0x18ed;eip=0x000426; 	X(MOV(*(dw*)(raddr(ss,bp+var_9c)), ax));	// 46305 mov     [bp+var_9C], ax ;~ 18ED:0426
cs=0x18ed;eip=0x00042a; 	X(MOV(*(dw*)(raddr(ss,bp+var_9a)), dx));	// 46306 mov     [bp+var_9A], dx ;~ 18ED:042A
cs=0x18ed;eip=0x00042e; 	R(JMP(loc_2798a));	// 46307 jmp     loc_2798A ;~ 18ED:042E
loc_278e2:
	// 7562 
cs=0x18ed;eip=0x000432; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_1d0))));	// 46312 les     bx, [bp+var_1D0] ;~ 18ED:0432
cs=0x18ed;eip=0x000436; 	T(CMP(*(raddr(es,bx)), 0x7D));	// 46313 cmp     byte ptr es:[bx], 7Dh ; '}' ;~ 18ED:0436
cs=0x18ed;eip=0x00043a; 	R(JNZ(loc_27918));	// 46314 jnz     short loc_27918 ;~ 18ED:043A
cs=0x18ed;eip=0x00043c; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_82))));	// 46315 mov     si, [bp+var_82] ;~ 18ED:043C
cs=0x18ed;eip=0x000440; 	X(MOV(*(raddr(ss,bp+si+var_80)), 0));	// 46316 mov     [bp+si+var_80], 0 ;~ 18ED:0440
cs=0x18ed;eip=0x000444; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 46317 mov     ax, [bp+arg_A] ;~ 18ED:0444
cs=0x18ed;eip=0x000447; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1c6))));	// 46318 add     ax, [bp+var_1C6] ;~ 18ED:0447
cs=0x18ed;eip=0x00044b; 	X(PUSH(ax));	// 46319 push    ax ;~ 18ED:044B
cs=0x18ed;eip=0x00044c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 46320 push    [bp+arg_8] ;~ 18ED:044C
cs=0x18ed;eip=0x00044f; 	T(ax = bp+var_80);	// 46321 lea     ax, [bp+var_80] ;~ 18ED:044F
cs=0x18ed;eip=0x000452; 	X(PUSH(ax));	// 46322 push    ax ;~ 18ED:0452
cs=0x18ed;eip=0x000453; 	R(CALLF(sub_345bc,0));	// 46323 call    sub_345BC ;~ 18ED:0453
cs=0x18ed;eip=0x000458; 	T(ADD(sp, 6));	// 46324 add     sp, 6 ;~ 18ED:0458
cs=0x18ed;eip=0x00045b; 	X(MOV(*(dw*)(raddr(ss,bp+var_82)), 0));	// 46325 mov     [bp+var_82], 0 ;~ 18ED:045B
cs=0x18ed;eip=0x000461; 	X(ADD(*(dw*)(raddr(ss,bp+var_1c6)), 4));	// 46326 add     [bp+var_1C6], 4 ;~ 18ED:0461
cs=0x18ed;eip=0x000466; 	R(JMP(loc_278ce));	// 46327 jmp     short loc_278CE ;~ 18ED:0466
loc_27918:
	// 7563 
cs=0x18ed;eip=0x000468; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_1d0))));	// 46331 les     bx, [bp+var_1D0] ;~ 18ED:0468
cs=0x18ed;eip=0x00046c; 	T(CMP(*(raddr(es,bx)), 0x40));	// 46332 cmp     byte ptr es:[bx], 40h ; '@' ;~ 18ED:046C
cs=0x18ed;eip=0x000470; 	R(JNZ(loc_27978));	// 46333 jnz     short loc_27978 ;~ 18ED:0470
cs=0x18ed;eip=0x000472; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 3));	// 46334 cmp     [bp+arg_0], 3 ;~ 18ED:0472
cs=0x18ed;eip=0x000476; 	R(JNZ(loc_2796a));	// 46335 jnz     short loc_2796A ;~ 18ED:0476
cs=0x18ed;eip=0x000478; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_82))));	// 46336 mov     si, [bp+var_82] ;~ 18ED:0478
cs=0x18ed;eip=0x00047c; 	X(MOV(*(raddr(ss,bp+si+var_80)), 0));	// 46337 mov     [bp+si+var_80], 0 ;~ 18ED:047C
cs=0x18ed;eip=0x000480; 	T(ax = bp+var_80);	// 46338 lea     ax, [bp+var_80] ;~ 18ED:0480
cs=0x18ed;eip=0x000483; 	X(PUSH(ax));	// 46339 push    ax ;~ 18ED:0483
cs=0x18ed;eip=0x000484; 	R(CALLF(font_op2,0));	// 46340 call    font_op2 ;~ 18ED:0484
cs=0x18ed;eip=0x000489; 	T(ADD(sp, 2));	// 46341 add     sp, 2 ;~ 18ED:0489
cs=0x18ed;eip=0x00048c; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 46342 add     ax, [bp+arg_8] ;~ 18ED:048C
cs=0x18ed;eip=0x00048f; 	T(MOV(cx, ax));	// 46343 mov     cx, ax ;~ 18ED:048F
cs=0x18ed;eip=0x000491; 	T(MOV(al, *(raddr(ss,bp+var_9e))));	// 46344 mov     al, [bp+var_9E] ;~ 18ED:0491
cs=0x18ed;eip=0x000495; 	T(CBW);	// 46345 cbw ;~ 18ED:0495
cs=0x18ed;eip=0x000496; 	T(MOV(bx, ax));	// 46346 mov     bx, ax ;~ 18ED:0496
cs=0x18ed;eip=0x000498; 	T(SHL(bx, 1));	// 46347 shl     bx, 1 ;~ 18ED:0498
cs=0x18ed;eip=0x00049a; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_e))));	// 46348 mov     si, [bp+arg_E] ;~ 18ED:049A
cs=0x18ed;eip=0x00049d; 	X(MOV(*(dw*)(raddr(ds,bx+si)), cx));	// 46349 mov     [bx+si], cx ;~ 18ED:049D
cs=0x18ed;eip=0x00049f; 	T(MOV(al, *(raddr(ss,bp+var_9e))));	// 46350 mov     al, [bp+var_9E] ;~ 18ED:049F
cs=0x18ed;eip=0x0004a3; 	T(CBW);	// 46351 cbw ;~ 18ED:04A3
cs=0x18ed;eip=0x0004a4; 	T(MOV(si, ax));	// 46352 mov     si, ax ;~ 18ED:04A4
cs=0x18ed;eip=0x0004a6; 	T(SHL(si, 1));	// 46353 shl     si, 1 ;~ 18ED:04A6
cs=0x18ed;eip=0x0004a8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_e))));	// 46354 mov     bx, [bp+arg_E] ;~ 18ED:04A8
cs=0x18ed;eip=0x0004ab; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 46355 mov     ax, [bp+arg_A] ;~ 18ED:04AB
cs=0x18ed;eip=0x0004ae; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1c6))));	// 46356 add     ax, [bp+var_1C6] ;~ 18ED:04AE
cs=0x18ed;eip=0x0004b2; 	X(MOV(*(dw*)(raddr(ds,bx+si+2)), ax));	// 46357 mov     [bx+si+2], ax ;~ 18ED:04B2
cs=0x18ed;eip=0x0004b5; 	X(ADD(*(raddr(ss,bp+var_9e)), 2));	// 46358 add     [bp+var_9E], 2 ;~ 18ED:04B5
loc_2796a:
	// 7564 
cs=0x18ed;eip=0x0004ba; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_82))));	// 46361 mov     si, [bp+var_82] ;~ 18ED:04BA
cs=0x18ed;eip=0x0004be; 	X(INC(*(dw*)(raddr(ss,bp+var_82))));	// 46362 inc     [bp+var_82] ;~ 18ED:04BE
cs=0x18ed;eip=0x0004c2; 	X(MOV(*(raddr(ss,bp+si+var_80)), 0x20));	// 46363 mov     [bp+si+var_80], 20h ; ' ' ;~ 18ED:04C2
cs=0x18ed;eip=0x0004c6; 	R(JMP(loc_2798a));	// 46364 jmp     short loc_2798A ;~ 18ED:04C6
loc_27978:
	// 7565 
cs=0x18ed;eip=0x0004c8; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_1d0))));	// 46368 les     bx, [bp+var_1D0] ;~ 18ED:04C8
cs=0x18ed;eip=0x0004cc; 	T(MOV(al, *(raddr(es,bx))));	// 46369 mov     al, es:[bx] ;~ 18ED:04CC
cs=0x18ed;eip=0x0004cf; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_82))));	// 46370 mov     si, [bp+var_82] ;~ 18ED:04CF
cs=0x18ed;eip=0x0004d3; 	X(INC(*(dw*)(raddr(ss,bp+var_82))));	// 46371 inc     [bp+var_82] ;~ 18ED:04D3
cs=0x18ed;eip=0x0004d7; 	X(MOV(*(raddr(ss,bp+si+var_80)), al));	// 46372 mov     [bp+si+var_80], al ;~ 18ED:04D7
loc_2798a:
	// 7566 
cs=0x18ed;eip=0x0004da; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_1d0)))));	// 46376 inc     word ptr [bp+var_1D0] ;~ 18ED:04DA
loc_2798e:
	// 7567 
cs=0x18ed;eip=0x0004de; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_1d0))));	// 46379 les     bx, [bp+var_1D0] ;~ 18ED:04DE
cs=0x18ed;eip=0x0004e2; 	T(MOV(al, *(raddr(es,bx))));	// 46380 mov     al, es:[bx] ;~ 18ED:04E2
cs=0x18ed;eip=0x0004e5; 	X(MOV(*(raddr(ss,bp+var_1d8)), al));	// 46381 mov     [bp+var_1D8], al ;~ 18ED:04E5
cs=0x18ed;eip=0x0004e9; 	T(OR(al, al));	// 46382 or      al, al ;~ 18ED:04E9
cs=0x18ed;eip=0x0004eb; 	R(JZ(loc_279a0));	// 46383 jz      short loc_279A0 ;~ 18ED:04EB
cs=0x18ed;eip=0x0004ed; 	R(JMP(loc_27890));	// 46384 jmp     loc_27890 ;~ 18ED:04ED
loc_279a0:
	// 7568 
cs=0x18ed;eip=0x0004f0; 	X(MOV(*(raddr(ss,bp+var_140)), 0));	// 46389 mov     [bp+var_140], 0 ;~ 18ED:04F0
cs=0x18ed;eip=0x0004f5; 	R(JMP(loc_27b08));	// 46390 jmp     loc_27B08 ;~ 18ED:04F5
loc_279a8:
	// 7569 
cs=0x18ed;eip=0x0004f8; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_1d0)))));	// 46394 inc     word ptr [bp+var_1D0] ;~ 18ED:04F8
cs=0x18ed;eip=0x0004fc; 	T(MOV(al, *(raddr(ss,bp+var_140))));	// 46395 mov     al, [bp+var_140] ;~ 18ED:04FC
cs=0x18ed;eip=0x000500; 	T(CBW);	// 46396 cbw ;~ 18ED:0500
cs=0x18ed;eip=0x000501; 	T(MOV(si, ax));	// 46397 mov     si, ax ;~ 18ED:0501
cs=0x18ed;eip=0x000503; 	T(MOV(bx, si));	// 46398 mov     bx, si ;~ 18ED:0503
cs=0x18ed;eip=0x000505; 	T(SHL(bx, 1));	// 46399 shl     bx, 1 ;~ 18ED:0505
cs=0x18ed;eip=0x000507; 	T(SHL(bx, 1));	// 46400 shl     bx, 1 ;~ 18ED:0507
cs=0x18ed;eip=0x000509; 	T(ADD(bx, bp));	// 46401 add     bx, bp ;~ 18ED:0509
cs=0x18ed;eip=0x00050b; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_1d0)))));	// 46402 mov     ax, word ptr [bp+var_1D0] ;~ 18ED:050B
cs=0x18ed;eip=0x00050f; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_1d0+2)))));	// 46403 mov     dx, word ptr [bp+var_1D0+2] ;~ 18ED:050F
cs=0x18ed;eip=0x000513; 	X(MOV(*(dw*)(raddr(ds,bx-0x13E)), ax));	// 46404 mov     [bx-13Eh], ax ;~ 18ED:0513
cs=0x18ed;eip=0x000517; 	X(MOV(*(dw*)(raddr(ds,bx-0x13C)), dx));	// 46405 mov     [bx-13Ch], dx ;~ 18ED:0517
cs=0x18ed;eip=0x00051b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_82))));	// 46406 mov     bx, [bp+var_82] ;~ 18ED:051B
cs=0x18ed;eip=0x00051f; 	T(ADD(bx, bp));	// 46407 add     bx, bp ;~ 18ED:051F
cs=0x18ed;eip=0x000521; 	X(MOV(*(raddr(ds,bx-0x80)), 0));	// 46408 mov     byte ptr [bx-80h], 0 ;~ 18ED:0521
cs=0x18ed;eip=0x000525; 	T(ax = bp+var_80);	// 46409 lea     ax, [bp+var_80] ;~ 18ED:0525
cs=0x18ed;eip=0x000528; 	X(PUSH(ax));	// 46410 push    ax ;~ 18ED:0528
cs=0x18ed;eip=0x000529; 	R(CALLF(font_op2,0));	// 46411 call    font_op2 ;~ 18ED:0529
cs=0x18ed;eip=0x00052e; 	T(ADD(sp, 2));	// 46412 add     sp, 2 ;~ 18ED:052E
cs=0x18ed;eip=0x000531; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 46413 add     ax, [bp+arg_8] ;~ 18ED:0531
cs=0x18ed;eip=0x000534; 	T(MOV(bx, si));	// 46414 mov     bx, si ;~ 18ED:0534
cs=0x18ed;eip=0x000536; 	T(SHL(bx, 1));	// 46415 shl     bx, 1 ;~ 18ED:0536
cs=0x18ed;eip=0x000538; 	T(ADD(bx, bp));	// 46416 add     bx, bp ;~ 18ED:0538
cs=0x18ed;eip=0x00053a; 	X(MOV(*(dw*)(raddr(ds,bx-0x28)), ax));	// 46417 mov     [bx-28h], ax ;~ 18ED:053A
cs=0x18ed;eip=0x00053d; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_a))));	// 46418 mov     si, [bp+arg_A] ;~ 18ED:053D
cs=0x18ed;eip=0x000540; 	T(ADD(si, *(dw*)(raddr(ss,bp+var_1c6))));	// 46419 add     si, [bp+var_1C6] ;~ 18ED:0540
cs=0x18ed;eip=0x000544; 	T(MOV(al, *(raddr(ss,bp+var_140))));	// 46420 mov     al, [bp+var_140] ;~ 18ED:0544
cs=0x18ed;eip=0x000548; 	T(CBW);	// 46421 cbw ;~ 18ED:0548
cs=0x18ed;eip=0x000549; 	T(MOV(di, ax));	// 46422 mov     di, ax ;~ 18ED:0549
cs=0x18ed;eip=0x00054b; 	T(SHL(di, 1));	// 46423 shl     di, 1 ;~ 18ED:054B
cs=0x18ed;eip=0x00054d; 	T(ADD(di, bp));	// 46424 add     di, bp ;~ 18ED:054D
cs=0x18ed;eip=0x00054f; 	X(MOV(*(dw*)(raddr(ds,di-0x1BE)), si));	// 46425 mov     [di-1BEh], si ;~ 18ED:054F
cs=0x18ed;eip=0x000553; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1d6))));	// 46426 mov     ax, [bp+var_1D6] ;~ 18ED:0553
cs=0x18ed;eip=0x000557; 	T(ADD(ax, si));	// 46427 add     ax, si ;~ 18ED:0557
cs=0x18ed;eip=0x000559; 	X(MOV(*(dw*)(raddr(ds,di-0x0EE)), ax));	// 46428 mov     [di-0EEh], ax ;~ 18ED:0559
cs=0x18ed;eip=0x00055d; 	X(MOV(*(raddr(ss,bp+var_1ca)), 0));	// 46429 mov     [bp+var_1CA], 0 ;~ 18ED:055D
cs=0x18ed;eip=0x000562; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_82))));	// 46430 mov     bx, [bp+var_82] ;~ 18ED:0562
cs=0x18ed;eip=0x000566; 	X(INC(*(dw*)(raddr(ss,bp+var_82))));	// 46431 inc     [bp+var_82] ;~ 18ED:0566
cs=0x18ed;eip=0x00056a; 	T(ADD(bx, bp));	// 46432 add     bx, bp ;~ 18ED:056A
cs=0x18ed;eip=0x00056c; 	X(MOV(*(raddr(ds,bx-0x80)), 0x20));	// 46433 mov     byte ptr [bx-80h], 20h ; ' ' ;~ 18ED:056C
cs=0x18ed;eip=0x000570; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c2)), 0));	// 46434 mov     [bp+var_1C2], 0 ;~ 18ED:0570
cs=0x18ed;eip=0x000576; 	R(JMP(loc_27aae));	// 46435 jmp     loc_27AAE ;~ 18ED:0576
loc_27a2a:
	// 7570 
cs=0x18ed;eip=0x00057a; 	T(CMP(*(raddr(ss,bp+var_1d8)), 0x5B));	// 46440 cmp     [bp+var_1D8], 5Bh ; '[' ;~ 18ED:057A
cs=0x18ed;eip=0x00057f; 	R(JNZ(loc_27a34));	// 46441 jnz     short loc_27A34 ;~ 18ED:057F
cs=0x18ed;eip=0x000581; 	R(JMP(loc_27ac0));	// 46442 jmp     loc_27AC0 ;~ 18ED:0581
loc_27a34:
	// 7571 
cs=0x18ed;eip=0x000584; 	T(CMP(*(raddr(ss,bp+var_1d8)), 0x5D));	// 46446 cmp     [bp+var_1D8], 5Dh ; ']' ;~ 18ED:0584
cs=0x18ed;eip=0x000589; 	R(JNZ(loc_27a64));	// 46447 jnz     short loc_27A64 ;~ 18ED:0589
cs=0x18ed;eip=0x00058b; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_82))));	// 46448 mov     si, [bp+var_82] ;~ 18ED:058B
cs=0x18ed;eip=0x00058f; 	X(MOV(*(raddr(ss,bp+si+var_80)), 0));	// 46449 mov     [bp+si+var_80], 0 ;~ 18ED:058F
cs=0x18ed;eip=0x000593; 	T(ax = bp+var_80);	// 46450 lea     ax, [bp+var_80] ;~ 18ED:0593
cs=0x18ed;eip=0x000596; 	X(PUSH(ax));	// 46451 push    ax ;~ 18ED:0596
cs=0x18ed;eip=0x000597; 	R(CALLF(font_op2,0));	// 46452 call    font_op2 ;~ 18ED:0597
cs=0x18ed;eip=0x00059c; 	T(ADD(sp, 2));	// 46453 add     sp, 2 ;~ 18ED:059C
cs=0x18ed;eip=0x00059f; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c2)), ax));	// 46454 mov     [bp+var_1C2], ax ;~ 18ED:059F
cs=0x18ed;eip=0x0005a3; 	X(MOV(*(dw*)(raddr(ss,bp+var_82)), 0));	// 46455 mov     [bp+var_82], 0 ;~ 18ED:05A3
cs=0x18ed;eip=0x0005a9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1d6))));	// 46456 mov     ax, [bp+var_1D6] ;~ 18ED:05A9
cs=0x18ed;eip=0x0005ad; 	X(ADD(*(dw*)(raddr(ss,bp+var_1c6)), ax));	// 46457 add     [bp+var_1C6], ax ;~ 18ED:05AD
cs=0x18ed;eip=0x0005b1; 	R(JMP(loc_27aaa));	// 46458 jmp     short loc_27AAA ;~ 18ED:05B1
loc_27a64:
	// 7572 
cs=0x18ed;eip=0x0005b4; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_1d0))));	// 46463 les     bx, [bp+var_1D0] ;~ 18ED:05B4
cs=0x18ed;eip=0x0005b8; 	T(CMP(*(raddr(es,bx)), 0x7D));	// 46464 cmp     byte ptr es:[bx], 7Dh ; '}' ;~ 18ED:05B8
cs=0x18ed;eip=0x0005bc; 	R(JNZ(loc_27a94));	// 46465 jnz     short loc_27A94 ;~ 18ED:05BC
cs=0x18ed;eip=0x0005be; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_82))));	// 46466 mov     si, [bp+var_82] ;~ 18ED:05BE
cs=0x18ed;eip=0x0005c2; 	X(MOV(*(raddr(ss,bp+si+var_80)), 0));	// 46467 mov     [bp+si+var_80], 0 ;~ 18ED:05C2
cs=0x18ed;eip=0x0005c6; 	T(ax = bp+var_80);	// 46468 lea     ax, [bp+var_80] ;~ 18ED:05C6
cs=0x18ed;eip=0x0005c9; 	X(PUSH(ax));	// 46469 push    ax ;~ 18ED:05C9
cs=0x18ed;eip=0x0005ca; 	R(CALLF(font_op2,0));	// 46470 call    font_op2 ;~ 18ED:05CA
cs=0x18ed;eip=0x0005cf; 	T(ADD(sp, 2));	// 46471 add     sp, 2 ;~ 18ED:05CF
cs=0x18ed;eip=0x0005d2; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c2)), ax));	// 46472 mov     [bp+var_1C2], ax ;~ 18ED:05D2
cs=0x18ed;eip=0x0005d6; 	X(MOV(*(dw*)(raddr(ss,bp+var_82)), 0));	// 46473 mov     [bp+var_82], 0 ;~ 18ED:05D6
cs=0x18ed;eip=0x0005dc; 	X(ADD(*(dw*)(raddr(ss,bp+var_1c6)), 3));	// 46474 add     [bp+var_1C6], 3 ;~ 18ED:05DC
cs=0x18ed;eip=0x0005e1; 	R(JMP(loc_27aaa));	// 46475 jmp     short loc_27AAA ;~ 18ED:05E1
loc_27a94:
	// 7573 
cs=0x18ed;eip=0x0005e4; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_1d0))));	// 46480 les     bx, [bp+var_1D0] ;~ 18ED:05E4
cs=0x18ed;eip=0x0005e8; 	T(MOV(al, *(raddr(es,bx))));	// 46481 mov     al, es:[bx] ;~ 18ED:05E8
cs=0x18ed;eip=0x0005eb; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_82))));	// 46482 mov     si, [bp+var_82] ;~ 18ED:05EB
cs=0x18ed;eip=0x0005ef; 	X(INC(*(dw*)(raddr(ss,bp+var_82))));	// 46483 inc     [bp+var_82] ;~ 18ED:05EF
cs=0x18ed;eip=0x0005f3; 	X(MOV(*(raddr(ss,bp+si+var_80)), al));	// 46484 mov     [bp+si+var_80], al ;~ 18ED:05F3
cs=0x18ed;eip=0x0005f6; 	X(INC(*(raddr(ss,bp+var_1ca))));	// 46485 inc     [bp+var_1CA] ;~ 18ED:05F6
loc_27aaa:
	// 7574 
cs=0x18ed;eip=0x0005fa; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_1d0)))));	// 46489 inc     word ptr [bp+var_1D0] ;~ 18ED:05FA
loc_27aae:
	// 7575 
cs=0x18ed;eip=0x0005fe; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_1d0))));	// 46492 les     bx, [bp+var_1D0] ;~ 18ED:05FE
cs=0x18ed;eip=0x000602; 	T(MOV(al, *(raddr(es,bx))));	// 46493 mov     al, es:[bx] ;~ 18ED:0602
cs=0x18ed;eip=0x000605; 	X(MOV(*(raddr(ss,bp+var_1d8)), al));	// 46494 mov     [bp+var_1D8], al ;~ 18ED:0605
cs=0x18ed;eip=0x000609; 	T(OR(al, al));	// 46495 or      al, al ;~ 18ED:0609
cs=0x18ed;eip=0x00060b; 	R(JZ(loc_27ac0));	// 46496 jz      short loc_27AC0 ;~ 18ED:060B
cs=0x18ed;eip=0x00060d; 	R(JMP(loc_27a2a));	// 46497 jmp     loc_27A2A ;~ 18ED:060D
loc_27ac0:
	// 7576 
cs=0x18ed;eip=0x000610; 	T(MOV(al, *(raddr(ss,bp+var_140))));	// 46502 mov     al, [bp+var_140] ;~ 18ED:0610
cs=0x18ed;eip=0x000614; 	T(CBW);	// 46503 cbw ;~ 18ED:0614
cs=0x18ed;eip=0x000615; 	T(MOV(si, ax));	// 46504 mov     si, ax ;~ 18ED:0615
cs=0x18ed;eip=0x000617; 	T(MOV(al, *(raddr(ss,bp+var_1ca))));	// 46505 mov     al, [bp+var_1CA] ;~ 18ED:0617
cs=0x18ed;eip=0x00061b; 	X(MOV(*(raddr(ss,bp+si+var_98)), al));	// 46506 mov     [bp+si+var_98], al ;~ 18ED:061B
cs=0x18ed;eip=0x00061f; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_82))));	// 46507 mov     si, [bp+var_82] ;~ 18ED:061F
cs=0x18ed;eip=0x000623; 	X(MOV(*(raddr(ss,bp+si+var_80)), 0));	// 46508 mov     [bp+si+var_80], 0 ;~ 18ED:0623
cs=0x18ed;eip=0x000627; 	T(CMP(*(dw*)(raddr(ss,bp+var_1c2)), 0));	// 46509 cmp     [bp+var_1C2], 0 ;~ 18ED:0627
cs=0x18ed;eip=0x00062c; 	R(JNZ(loc_27aee));	// 46510 jnz     short loc_27AEE ;~ 18ED:062C
cs=0x18ed;eip=0x00062e; 	T(ax = bp+var_80);	// 46511 lea     ax, [bp+var_80] ;~ 18ED:062E
cs=0x18ed;eip=0x000631; 	X(PUSH(ax));	// 46512 push    ax ;~ 18ED:0631
cs=0x18ed;eip=0x000632; 	R(CALLF(font_op2,0));	// 46513 call    font_op2 ;~ 18ED:0632
cs=0x18ed;eip=0x000637; 	T(ADD(sp, 2));	// 46514 add     sp, 2 ;~ 18ED:0637
cs=0x18ed;eip=0x00063a; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c2)), ax));	// 46515 mov     [bp+var_1C2], ax ;~ 18ED:063A
loc_27aee:
	// 7577 
cs=0x18ed;eip=0x00063e; 	T(MOV(al, *(raddr(ss,bp+var_140))));	// 46518 mov     al, [bp+var_140] ;~ 18ED:063E
cs=0x18ed;eip=0x000642; 	T(CBW);	// 46519 cbw ;~ 18ED:0642
cs=0x18ed;eip=0x000643; 	T(MOV(si, ax));	// 46520 mov     si, ax ;~ 18ED:0643
cs=0x18ed;eip=0x000645; 	T(SHL(si, 1));	// 46521 shl     si, 1 ;~ 18ED:0645
cs=0x18ed;eip=0x000647; 	T(ADD(si, bp));	// 46522 add     si, bp ;~ 18ED:0647
cs=0x18ed;eip=0x000649; 	T(MOV(ax, *(dw*)(raddr(ds,si-0x28))));	// 46523 mov     ax, [si-28h] ;~ 18ED:0649
cs=0x18ed;eip=0x00064c; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1c2))));	// 46524 add     ax, [bp+var_1C2] ;~ 18ED:064C
cs=0x18ed;eip=0x000650; 	X(MOV(*(dw*)(raddr(ds,si-0x0C6)), ax));	// 46525 mov     [si-0C6h], ax ;~ 18ED:0650
cs=0x18ed;eip=0x000654; 	X(INC(*(raddr(ss,bp+var_140))));	// 46526 inc     [bp+var_140] ;~ 18ED:0654
loc_27b08:
	// 7578 
cs=0x18ed;eip=0x000658; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_1d0))));	// 46529 les     bx, [bp+var_1D0] ;~ 18ED:0658
cs=0x18ed;eip=0x00065c; 	T(CMP(*(raddr(es,bx)), 0x5B));	// 46530 cmp     byte ptr es:[bx], 5Bh ; '[' ;~ 18ED:065C
cs=0x18ed;eip=0x000660; 	R(JNZ(loc_27b15));	// 46531 jnz     short loc_27B15 ;~ 18ED:0660
cs=0x18ed;eip=0x000662; 	R(JMP(loc_279a8));	// 46532 jmp     loc_279A8 ;~ 18ED:0662
loc_27b15:
	// 7579 
cs=0x18ed;eip=0x000665; 	T(CMP(*(raddr(ss,bp+var_140)), 2));	// 46536 cmp     [bp+var_140], 2 ;~ 18ED:0665
cs=0x18ed;eip=0x00066a; 	R(JLE(loc_27b56));	// 46537 jle     short loc_27B56 ;~ 18ED:066A
cs=0x18ed;eip=0x00066c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_26))));	// 46538 mov     ax, [bp+var_26] ;~ 18ED:066C
cs=0x18ed;eip=0x00066f; 	T(CMP(*(dw*)(raddr(ss,bp+var_28)), ax));	// 46539 cmp     [bp+var_28], ax ;~ 18ED:066F
cs=0x18ed;eip=0x000672; 	R(JNZ(loc_27b56));	// 46540 jnz     short loc_27B56 ;~ 18ED:0672
cs=0x18ed;eip=0x000674; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_24))));	// 46541 mov     ax, [bp+var_24] ;~ 18ED:0674
cs=0x18ed;eip=0x000677; 	T(CMP(*(dw*)(raddr(ss,bp+var_26)), ax));	// 46542 cmp     [bp+var_26], ax ;~ 18ED:0677
cs=0x18ed;eip=0x00067a; 	R(JNZ(loc_27b56));	// 46543 jnz     short loc_27B56 ;~ 18ED:067A
cs=0x18ed;eip=0x00067c; 	X(MOV(*(dw*)(raddr(ss,bp+var_196)), 0));	// 46544 mov     [bp+var_196], 0 ;~ 18ED:067C
cs=0x18ed;eip=0x000682; 	R(JMP(loc_27b4b));	// 46545 jmp     short loc_27B4B ;~ 18ED:0682
loc_27b34:
	// 7580 
cs=0x18ed;eip=0x000684; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_196))));	// 46549 mov     si, [bp+var_196] ;~ 18ED:0684
cs=0x18ed;eip=0x000688; 	T(SHL(si, 1));	// 46550 shl     si, 1 ;~ 18ED:0688
cs=0x18ed;eip=0x00068a; 	T(ADD(si, bp));	// 46551 add     si, bp ;~ 18ED:068A
cs=0x18ed;eip=0x00068c; 	T(MOV(ax, *(dw*)(raddr(ds,si-0x28))));	// 46552 mov     ax, [si-28h] ;~ 18ED:068C
cs=0x18ed;eip=0x00068f; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_194))));	// 46553 add     ax, [bp+var_194] ;~ 18ED:068F
cs=0x18ed;eip=0x000693; 	X(MOV(*(dw*)(raddr(ds,si-0x0C6)), ax));	// 46554 mov     [si-0C6h], ax ;~ 18ED:0693
cs=0x18ed;eip=0x000697; 	X(INC(*(dw*)(raddr(ss,bp+var_196))));	// 46555 inc     [bp+var_196] ;~ 18ED:0697
loc_27b4b:
	// 7581 
cs=0x18ed;eip=0x00069b; 	T(MOV(al, *(raddr(ss,bp+var_140))));	// 46558 mov     al, [bp+var_140] ;~ 18ED:069B
cs=0x18ed;eip=0x00069f; 	T(CBW);	// 46559 cbw ;~ 18ED:069F
cs=0x18ed;eip=0x0006a0; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_196))));	// 46560 cmp     ax, [bp+var_196] ;~ 18ED:06A0
cs=0x18ed;eip=0x0006a4; 	R(JG(loc_27b34));	// 46561 jg      short loc_27B34 ;~ 18ED:06A4
loc_27b56:
	// 7582 
cs=0x18ed;eip=0x0006a6; 	X(PUSH(cs));	// 46565 push    cs ;~ 18ED:06A6
cs=0x18ed;eip=0x0006a7; 	R(CALL(mouse_draw_transparent_check,0));	// 46566 call    near ptr mouse_draw_transparent_check ;~ 18ED:06A7
cs=0x18ed;eip=0x0006aa; 	X(MOV(*(raddr(ss,bp+var_1d4)), 1));	// 46567 mov     [bp+var_1D4], 1 ;~ 18ED:06AA
cs=0x18ed;eip=0x0006af; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 46568 mov     ax, [bp+arg_0] ;~ 18ED:06AF
cs=0x18ed;eip=0x0006b2; 	T(OR(ax, ax));	// 46569 or      ax, ax ;~ 18ED:06B2
cs=0x18ed;eip=0x0006b4; 	R(JZ(loc_27bbc));	// 46570 jz      short loc_27BBC ;~ 18ED:06B4
cs=0x18ed;eip=0x0006b6; 	T(CMP(ax, 1));	// 46571 cmp     ax, 1 ;~ 18ED:06B6
cs=0x18ed;eip=0x0006b9; 	R(JZ(loc_27b98));	// 46572 jz      short loc_27B98 ;~ 18ED:06B9
cs=0x18ed;eip=0x0006bb; 	T(CMP(ax, 2));	// 46573 cmp     ax, 2 ;~ 18ED:06BB
cs=0x18ed;eip=0x0006be; 	R(JZ(loc_27bd4));	// 46574 jz      short loc_27BD4 ;~ 18ED:06BE
cs=0x18ed;eip=0x0006c0; 	T(CMP(ax, 3));	// 46575 cmp     ax, 3 ;~ 18ED:06C0
cs=0x18ed;eip=0x0006c3; 	R(JZ(loc_27bc4));	// 46576 jz      short loc_27BC4 ;~ 18ED:06C3
cs=0x18ed;eip=0x0006c5; 	T(CMP(ax, 4));	// 46577 cmp     ax, 4 ;~ 18ED:06C5
cs=0x18ed;eip=0x0006c8; 	R(JNZ(loc_27b88));	// 46578 jnz     short loc_27B88 ;~ 18ED:06C8
cs=0x18ed;eip=0x0006ca; 	T(MOV(ax, 8));	// 46579 mov     ax, 8 ;~ 18ED:06CA
cs=0x18ed;eip=0x0006cd; 	T(CWD);	// 46580 cwd ;~ 18ED:06CD
cs=0x18ed;eip=0x0006ce; 	X(PUSH(dx));	// 46581 push    dx ;~ 18ED:06CE
cs=0x18ed;eip=0x0006cf; 	X(PUSH(ax));	// 46582 push    ax ;~ 18ED:06CF
cs=0x18ed;eip=0x0006d0; 	R(CALLF(sub_2eb1e,0));	// 46583 call    sub_2EB1E ;~ 18ED:06D0
cs=0x18ed;eip=0x0006d5; 	T(ADD(sp, 4));	// 46584 add     sp, 4 ;~ 18ED:06D5
loc_27b88:
	// 7583 
cs=0x18ed;eip=0x0006d8; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 46588 cmp     [bp+arg_2], 0 ;~ 18ED:06D8
cs=0x18ed;eip=0x0006dc; 	R(JZ(loc_27b92));	// 46589 jz      short loc_27B92 ;~ 18ED:06DC
cs=0x18ed;eip=0x0006de; 	X(PUSH(cs));	// 46590 push    cs ;~ 18ED:06DE
cs=0x18ed;eip=0x0006df; 	R(CALL(sub_275c6,0));	// 46591 call    near ptr sub_275C6 ;~ 18ED:06DF
loc_27b92:
	// 7584 
cs=0x18ed;eip=0x0006e2; 	T(MOV(al, *(raddr(ss,bp+var_1d4))));	// 46594 mov     al, [bp+var_1D4] ;~ 18ED:06E2
cs=0x18ed;eip=0x0006e6; 	R(JMP(loc_27bcd));	// 46595 jmp     short loc_27BCD ;~ 18ED:06E6
loc_27b98:
	// 7585 
cs=0x18ed;eip=0x0006e8; 	X(PUSH(cs));	// 46600 push    cs ;~ 18ED:06E8
cs=0x18ed;eip=0x0006e9; 	R(CALL(timer_get_delta_alt,0));	// 46601 call    near ptr timer_get_delta_alt ;~ 18ED:06E9
cs=0x18ed;eip=0x0006ec; 	X(PUSH(ax));	// 46602 push    ax ;~ 18ED:06EC
cs=0x18ed;eip=0x0006ed; 	X(PUSH(cs));	// 46603 push    cs ;~ 18ED:06ED
cs=0x18ed;eip=0x0006ee; 	R(CALL(input_checking,0));	// 46604 call    near ptr input_checking ;~ 18ED:06EE
cs=0x18ed;eip=0x0006f1; 	T(ADD(sp, 2));	// 46605 add     sp, 2 ;~ 18ED:06F1
cs=0x18ed;eip=0x0006f4; 	X(MOV(*(dw*)(raddr(ss,bp+var_142)), ax));	// 46606 mov     [bp+var_142], ax ;~ 18ED:06F4
cs=0x18ed;eip=0x0006f8; 	T(OR(ax, ax));	// 46607 or      ax, ax ;~ 18ED:06F8
cs=0x18ed;eip=0x0006fa; 	R(JZ(loc_27b98));	// 46608 jz      short loc_27B98 ;~ 18ED:06FA
cs=0x18ed;eip=0x0006fc; 	T(CMP(ax, 0x1B));	// 46609 cmp     ax, 1Bh ;~ 18ED:06FC
cs=0x18ed;eip=0x0006ff; 	R(JNZ(loc_27bb6));	// 46610 jnz     short loc_27BB6 ;~ 18ED:06FF
cs=0x18ed;eip=0x000701; 	X(MOV(*(raddr(ss,bp+var_1d4)), 0));	// 46611 mov     [bp+var_1D4], 0 ;~ 18ED:0701
loc_27bb6:
	// 7586 
cs=0x18ed;eip=0x000706; 	X(PUSH(cs));	// 46614 push    cs ;~ 18ED:0706
cs=0x18ed;eip=0x000707; 	R(CALL(check_input,0));	// 46615 call    near ptr check_input ;~ 18ED:0707
cs=0x18ed;eip=0x00070a; 	R(JMP(loc_27b88));	// 46616 jmp     short loc_27B88 ;~ 18ED:070A
loc_27bbc:
	// 7587 
cs=0x18ed;eip=0x00070c; 	T(SUB(ax, ax));	// 46620 sub     ax, ax ;~ 18ED:070C
cs=0x18ed;eip=0x00070e; 	X(POP(si));	// 46621 pop     si ;~ 18ED:070E
cs=0x18ed;eip=0x00070f; 	X(POP(di));	// 46622 pop     di ;~ 18ED:070F
cs=0x18ed;eip=0x000710; 	T(MOV(sp, bp));	// 46623 mov     sp, bp ;~ 18ED:0710
cs=0x18ed;eip=0x000712; 	X(POP(bp));	// 46624 pop     bp ;~ 18ED:0712
cs=0x18ed;eip=0x000713; 	R(RETF(0));	// 46625 retf ;~ 18ED:0713
loc_27bc4:
	// 7588 
cs=0x18ed;eip=0x000714; 	T(MOV(al, *(raddr(ss,bp+var_9e))));	// 46629 mov     al, [bp+var_9E] ;~ 18ED:0714
cs=0x18ed;eip=0x000718; 	T(CBW);	// 46630 cbw ;~ 18ED:0718
cs=0x18ed;eip=0x000719; 	T(MOV(cl, 2));	// 46631 mov     cl, 2 ;~ 18ED:0719
cs=0x18ed;eip=0x00071b; 	T(IDIV1(cl));	// 46632 idiv    cl ;~ 18ED:071B
loc_27bcd:
	// 7589 
cs=0x18ed;eip=0x00071d; 	T(CBW);	// 46635 cbw ;~ 18ED:071D
cs=0x18ed;eip=0x00071e; 	X(POP(si));	// 46636 pop     si ;~ 18ED:071E
cs=0x18ed;eip=0x00071f; 	X(POP(di));	// 46637 pop     di ;~ 18ED:071F
cs=0x18ed;eip=0x000720; 	T(MOV(sp, bp));	// 46638 mov     sp, bp ;~ 18ED:0720
cs=0x18ed;eip=0x000722; 	X(POP(bp));	// 46639 pop     bp ;~ 18ED:0722
cs=0x18ed;eip=0x000723; 	R(RETF(0));	// 46640 retf ;~ 18ED:0723
loc_27bd4:
	// 7590 
cs=0x18ed;eip=0x000724; 	T(MOV(al, *(raddr(ss,bp+arg_10))));	// 46644 mov     al, [bp+arg_10] ;~ 18ED:0724
cs=0x18ed;eip=0x000727; 	X(MOV(*(raddr(ss,bp+var_1d4)), al));	// 46645 mov     [bp+var_1D4], al ;~ 18ED:0727
cs=0x18ed;eip=0x00072b; 	X(MOV(*(raddr(ss,bp+var_1c0)), 0x0FF));	// 46646 mov     [bp+var_1C0], 0FFh ;~ 18ED:072B
cs=0x18ed;eip=0x000730; 	X(PUSH(cs));	// 46647 push    cs ;~ 18ED:0730
cs=0x18ed;eip=0x000731; 	R(CALL(timer_get_delta_alt,0));	// 46648 call    near ptr timer_get_delta_alt ;~ 18ED:0731
cs=0x18ed;eip=0x000734; 	X(PUSH(cs));	// 46649 push    cs ;~ 18ED:0734
cs=0x18ed;eip=0x000735; 	R(CALL(mouse_draw_opaque_check,0));	// 46650 call    near ptr mouse_draw_opaque_check ;~ 18ED:0735
cs=0x18ed;eip=0x000738; 	T(CMP(*(raddr(ss,bp+var_140)), 2));	// 46651 cmp     [bp+var_140], 2 ;~ 18ED:0738
cs=0x18ed;eip=0x00073d; 	R(JNZ(loc_27c68));	// 46652 jnz     short loc_27C68 ;~ 18ED:073D
cs=0x18ed;eip=0x00073f; 	X(MOV(*(dw*)(raddr(ss,bp+var_196)), 0));	// 46653 mov     [bp+var_196], 0 ;~ 18ED:073F
loc_27bf5:
	// 7591 
cs=0x18ed;eip=0x000745; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_196))));	// 46656 mov     bx, [bp+var_196] ;~ 18ED:0745
cs=0x18ed;eip=0x000749; 	T(LES(si, *(dd*)(raddr(ss,bp+var_13e))));	// 46657 les     si, [bp+var_13E] ;~ 18ED:0749
cs=0x18ed;eip=0x00074d; 	T(MOV(al, *(raddr(es,bx+si))));	// 46658 mov     al, es:[bx+si] ;~ 18ED:074D
cs=0x18ed;eip=0x000750; 	T(SUB(ah, ah));	// 46659 sub     ah, ah ;~ 18ED:0750
cs=0x18ed;eip=0x000752; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c8)), ax));	// 46660 mov     [bp+var_1C8], ax ;~ 18ED:0752
cs=0x18ed;eip=0x000756; 	X(INC(*(dw*)(raddr(ss,bp+var_196))));	// 46661 inc     [bp+var_196] ;~ 18ED:0756
cs=0x18ed;eip=0x00075a; 	T(CMP(ax, 0x20));	// 46662 cmp     ax, 20h ; ' ' ;~ 18ED:075A
cs=0x18ed;eip=0x00075d; 	R(JZ(loc_27bf5));	// 46663 jz      short loc_27BF5 ;~ 18ED:075D
cs=0x18ed;eip=0x00075f; 	T(MOV(bx, ax));	// 46664 mov     bx, ax ;~ 18ED:075F
cs=0x18ed;eip=0x000761; 	T(TEST(*((g_ascii_props)+bx), 1));	// 46665 test    g_ascii_props[bx], 1 ;~ 18ED:0761
cs=0x18ed;eip=0x000766; 	R(JZ(loc_27c2c));	// 46666 jz      short loc_27C2C ;~ 18ED:0766
cs=0x18ed;eip=0x000768; 	T(TEST(*((g_ascii_props)+bx), 1));	// 46667 test    g_ascii_props[bx], 1 ;~ 18ED:0768
cs=0x18ed;eip=0x00076d; 	R(JZ(loc_27c26));	// 46668 jz      short loc_27C26 ;~ 18ED:076D
cs=0x18ed;eip=0x00076f; 	T(ADD(ax, 0x20));	// 46669 add     ax, 20h ; ' ' ;~ 18ED:076F
cs=0x18ed;eip=0x000772; 	R(JMP(loc_27c28));	// 46670 jmp     short loc_27C28 ;~ 18ED:0772
loc_27c26:
	// 7592 
cs=0x18ed;eip=0x000776; 	T(MOV(ax, bx));	// 46676 mov     ax, bx ;~ 18ED:0776
loc_27c28:
	// 7593 
cs=0x18ed;eip=0x000778; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c8)), ax));	// 46679 mov     [bp+var_1C8], ax ;~ 18ED:0778
loc_27c2c:
	// 7594 
cs=0x18ed;eip=0x00077c; 	X(MOV(*(dw*)(raddr(ss,bp+var_196)), 0));	// 46682 mov     [bp+var_196], 0 ;~ 18ED:077C
loc_27c32:
	// 7595 
cs=0x18ed;eip=0x000782; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_196))));	// 46685 mov     bx, [bp+var_196] ;~ 18ED:0782
cs=0x18ed;eip=0x000786; 	T(LES(si, *(dd*)(raddr(ss,bp+var_13a))));	// 46686 les     si, [bp+var_13A] ;~ 18ED:0786
cs=0x18ed;eip=0x00078a; 	T(MOV(al, *(raddr(es,bx+si))));	// 46687 mov     al, es:[bx+si] ;~ 18ED:078A
cs=0x18ed;eip=0x00078d; 	T(SUB(ah, ah));	// 46688 sub     ah, ah ;~ 18ED:078D
cs=0x18ed;eip=0x00078f; 	X(MOV(*(dw*)(raddr(ss,bp+var_1cc)), ax));	// 46689 mov     [bp+var_1CC], ax ;~ 18ED:078F
cs=0x18ed;eip=0x000793; 	X(INC(*(dw*)(raddr(ss,bp+var_196))));	// 46690 inc     [bp+var_196] ;~ 18ED:0793
cs=0x18ed;eip=0x000797; 	T(CMP(ax, 0x20));	// 46691 cmp     ax, 20h ; ' ' ;~ 18ED:0797
cs=0x18ed;eip=0x00079a; 	R(JZ(loc_27c32));	// 46692 jz      short loc_27C32 ;~ 18ED:079A
cs=0x18ed;eip=0x00079c; 	T(MOV(bx, ax));	// 46693 mov     bx, ax ;~ 18ED:079C
cs=0x18ed;eip=0x00079e; 	T(TEST(*((g_ascii_props)+bx), 1));	// 46694 test    g_ascii_props[bx], 1 ;~ 18ED:079E
cs=0x18ed;eip=0x0007a3; 	R(JZ(loc_27c68));	// 46695 jz      short loc_27C68 ;~ 18ED:07A3
cs=0x18ed;eip=0x0007a5; 	T(TEST(*((g_ascii_props)+bx), 1));	// 46696 test    g_ascii_props[bx], 1 ;~ 18ED:07A5
cs=0x18ed;eip=0x0007aa; 	R(JZ(loc_27c62));	// 46697 jz      short loc_27C62 ;~ 18ED:07AA
cs=0x18ed;eip=0x0007ac; 	T(ADD(ax, 0x20));	// 46698 add     ax, 20h ; ' ' ;~ 18ED:07AC
cs=0x18ed;eip=0x0007af; 	R(JMP(loc_27c64));	// 46699 jmp     short loc_27C64 ;~ 18ED:07AF
loc_27c62:
	// 7596 
cs=0x18ed;eip=0x0007b2; 	T(MOV(ax, bx));	// 46704 mov     ax, bx ;~ 18ED:07B2
loc_27c64:
	// 7597 
cs=0x18ed;eip=0x0007b4; 	X(MOV(*(dw*)(raddr(ss,bp+var_1cc)), ax));	// 46707 mov     [bp+var_1CC], ax ;~ 18ED:07B4
loc_27c68:
	// 7598 
cs=0x18ed;eip=0x0007b8; 	X(MOV(*(raddr(ss,bp+var_84)), 1));	// 46711 mov     [bp+var_84], 1 ;~ 18ED:07B8
loc_27c6d:
	// 7599 
cs=0x18ed;eip=0x0007bd; 	T(CMP(*(raddr(ss,bp+var_84)), 0));	// 46715 cmp     [bp+var_84], 0 ;~ 18ED:07BD
cs=0x18ed;eip=0x0007c2; 	R(JNZ(loc_27c77));	// 46716 jnz     short loc_27C77 ;~ 18ED:07C2
cs=0x18ed;eip=0x0007c4; 	R(JMP(loc_27b88));	// 46717 jmp     loc_27B88 ;~ 18ED:07C4
loc_27c77:
	// 7600 
cs=0x18ed;eip=0x0007c7; 	T(MOV(al, *(raddr(ss,bp+var_1c0))));	// 46721 mov     al, [bp+var_1C0] ;~ 18ED:07C7
cs=0x18ed;eip=0x0007cb; 	T(CMP(*(raddr(ss,bp+var_1d4)), al));	// 46722 cmp     [bp+var_1D4], al ;~ 18ED:07CB
cs=0x18ed;eip=0x0007cf; 	R(JNZ(loc_27c84));	// 46723 jnz     short loc_27C84 ;~ 18ED:07CF
cs=0x18ed;eip=0x0007d1; 	R(JMP(loc_27d6d));	// 46724 jmp     loc_27D6D ;~ 18ED:07D1
loc_27c84:
	// 7601 
cs=0x18ed;eip=0x0007d4; 	X(PUSH(cs));	// 46728 push    cs ;~ 18ED:07D4
cs=0x18ed;eip=0x0007d5; 	R(CALL(mouse_draw_opaque_check,0));	// 46729 call    near ptr mouse_draw_opaque_check ;~ 18ED:07D5
cs=0x18ed;eip=0x0007d8; 	X(MOV(*(dw*)(raddr(ss,bp+var_196)), 0));	// 46730 mov     [bp+var_196], 0 ;~ 18ED:07D8
cs=0x18ed;eip=0x0007de; 	R(JMP(loc_27d25));	// 46731 jmp     loc_27D25 ;~ 18ED:07DE
loc_27c92:
	// 7602 
cs=0x18ed;eip=0x0007e2; 	T(MOV(al, *(raddr(ss,bp+var_1d4))));	// 46737 mov     al, [bp+var_1D4] ;~ 18ED:07E2
cs=0x18ed;eip=0x0007e6; 	T(CBW);	// 46738 cbw ;~ 18ED:07E6
cs=0x18ed;eip=0x0007e7; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_196))));	// 46739 cmp     ax, [bp+var_196] ;~ 18ED:07E7
cs=0x18ed;eip=0x0007eb; 	R(JNZ(loc_27ca8));	// 46740 jnz     short loc_27CA8 ;~ 18ED:07EB
cs=0x18ed;eip=0x0007ed; 	X(PUSH(dialog_fnt_colour));	// 46741 push    dialog_fnt_colour ;~ 18ED:07ED
cs=0x18ed;eip=0x0007f1; 	X(PUSH(word_3eb90));	// 46742 push    word_3EB90 ;~ 18ED:07F1
cs=0x18ed;eip=0x0007f5; 	R(JMP(loc_27cb0));	// 46743 jmp     short loc_27CB0 ;~ 18ED:07F5
loc_27ca8:
	// 7603 
cs=0x18ed;eip=0x0007f8; 	X(PUSH(word_3eb90));	// 46748 push    word_3EB90 ;~ 18ED:07F8
cs=0x18ed;eip=0x0007fc; 	X(PUSH(dialog_fnt_colour));	// 46749 push    dialog_fnt_colour ;~ 18ED:07FC
loc_27cb0:
	// 7604 
cs=0x18ed;eip=0x000800; 	R(CALLF(font_set_unk,0));	// 46753 call    font_set_unk ;~ 18ED:0800
cs=0x18ed;eip=0x000805; 	T(ADD(sp, 4));	// 46754 add     sp, 4 ;~ 18ED:0805
cs=0x18ed;eip=0x000808; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_196))));	// 46755 mov     si, [bp+var_196] ;~ 18ED:0808
cs=0x18ed;eip=0x00080c; 	T(SHL(si, 1));	// 46756 shl     si, 1 ;~ 18ED:080C
cs=0x18ed;eip=0x00080e; 	T(SHL(si, 1));	// 46757 shl     si, 1 ;~ 18ED:080E
cs=0x18ed;eip=0x000810; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+si+var_13e)))));	// 46758 mov     ax, word ptr [bp+si+var_13E] ;~ 18ED:0810
cs=0x18ed;eip=0x000814; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+si+var_13e +2)))));	// 46759 mov     dx, word ptr [bp+si+var_13E+2] ;~ 18ED:0814
cs=0x18ed;eip=0x000818; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_1d0))), ax));	// 46760 mov     word ptr [bp+var_1D0], ax ;~ 18ED:0818
cs=0x18ed;eip=0x00081c; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_1d0+2))), dx));	// 46761 mov     word ptr [bp+var_1D0+2], dx ;~ 18ED:081C
cs=0x18ed;eip=0x000820; 	X(MOV(*(dw*)(raddr(ss,bp+var_82)), 0));	// 46762 mov     [bp+var_82], 0 ;~ 18ED:0820
cs=0x18ed;eip=0x000826; 	R(JMP(loc_27ced));	// 46763 jmp     short loc_27CED ;~ 18ED:0826
loc_27cd8:
	// 7605 
cs=0x18ed;eip=0x000828; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_82))));	// 46767 mov     bx, [bp+var_82] ;~ 18ED:0828
cs=0x18ed;eip=0x00082c; 	T(LES(si, *(dd*)(raddr(ss,bp+var_1d0))));	// 46768 les     si, [bp+var_1D0] ;~ 18ED:082C
cs=0x18ed;eip=0x000830; 	T(MOV(al, *(raddr(es,bx+si))));	// 46769 mov     al, es:[bx+si] ;~ 18ED:0830
cs=0x18ed;eip=0x000833; 	T(MOV(si, bx));	// 46770 mov     si, bx ;~ 18ED:0833
cs=0x18ed;eip=0x000835; 	X(MOV(*(raddr(ss,bp+si+var_192)), al));	// 46771 mov     [bp+si+var_192], al ;~ 18ED:0835
cs=0x18ed;eip=0x000839; 	X(INC(*(dw*)(raddr(ss,bp+var_82))));	// 46772 inc     [bp+var_82] ;~ 18ED:0839
loc_27ced:
	// 7606 
cs=0x18ed;eip=0x00083d; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_196))));	// 46775 mov     si, [bp+var_196] ;~ 18ED:083D
cs=0x18ed;eip=0x000841; 	T(MOV(al, *(raddr(ss,bp+si+var_98))));	// 46776 mov     al, [bp+si+var_98] ;~ 18ED:0841
cs=0x18ed;eip=0x000845; 	T(CBW);	// 46777 cbw ;~ 18ED:0845
cs=0x18ed;eip=0x000846; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_82))));	// 46778 cmp     ax, [bp+var_82] ;~ 18ED:0846
cs=0x18ed;eip=0x00084a; 	R(JG(loc_27cd8));	// 46779 jg      short loc_27CD8 ;~ 18ED:084A
cs=0x18ed;eip=0x00084c; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_82))));	// 46780 mov     di, [bp+var_82] ;~ 18ED:084C
cs=0x18ed;eip=0x000850; 	X(MOV(*(raddr(ss,bp+di+var_192)), 0));	// 46781 mov     [bp+di+var_192], 0 ;~ 18ED:0850
cs=0x18ed;eip=0x000855; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_196))));	// 46782 mov     si, [bp+var_196] ;~ 18ED:0855
cs=0x18ed;eip=0x000859; 	T(SHL(si, 1));	// 46783 shl     si, 1 ;~ 18ED:0859
cs=0x18ed;eip=0x00085b; 	T(ADD(si, bp));	// 46784 add     si, bp ;~ 18ED:085B
cs=0x18ed;eip=0x00085d; 	X(PUSH(*(dw*)(raddr(ds,si-0x1BE))));	// 46785 push    word ptr [si-1BEh] ;~ 18ED:085D
cs=0x18ed;eip=0x000861; 	X(PUSH(*(dw*)(raddr(ds,si-0x28))));	// 46786 push    word ptr [si-28h] ;~ 18ED:0861
cs=0x18ed;eip=0x000864; 	T(ax = bp+var_192);	// 46787 lea     ax, [bp+var_192] ;~ 18ED:0864
cs=0x18ed;eip=0x000868; 	X(PUSH(ax));	// 46788 push    ax ;~ 18ED:0868
cs=0x18ed;eip=0x000869; 	R(CALLF(sub_345bc,0));	// 46789 call    sub_345BC ;~ 18ED:0869
cs=0x18ed;eip=0x00086e; 	T(ADD(sp, 6));	// 46790 add     sp, 6 ;~ 18ED:086E
cs=0x18ed;eip=0x000871; 	X(INC(*(dw*)(raddr(ss,bp+var_196))));	// 46791 inc     [bp+var_196] ;~ 18ED:0871
loc_27d25:
	// 7607 
cs=0x18ed;eip=0x000875; 	T(MOV(al, *(raddr(ss,bp+var_140))));	// 46794 mov     al, [bp+var_140] ;~ 18ED:0875
cs=0x18ed;eip=0x000879; 	T(CBW);	// 46795 cbw ;~ 18ED:0879
cs=0x18ed;eip=0x00087a; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_196))));	// 46796 cmp     ax, [bp+var_196] ;~ 18ED:087A
cs=0x18ed;eip=0x00087e; 	R(JLE(loc_27d56));	// 46797 jle     short loc_27D56 ;~ 18ED:087E
cs=0x18ed;eip=0x000880; 	T(CMP(*(dw*)(raddr(ss,bp+arg_e)), 0));	// 46798 cmp     [bp+arg_E], 0 ;~ 18ED:0880
cs=0x18ed;eip=0x000884; 	R(JNZ(loc_27d39));	// 46799 jnz     short loc_27D39 ;~ 18ED:0884
cs=0x18ed;eip=0x000886; 	R(JMP(loc_27c92));	// 46800 jmp     loc_27C92 ;~ 18ED:0886
loc_27d39:
	// 7608 
cs=0x18ed;eip=0x000889; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_196))));	// 46804 mov     bx, [bp+var_196] ;~ 18ED:0889
cs=0x18ed;eip=0x00088d; 	T(SHL(bx, 1));	// 46805 shl     bx, 1 ;~ 18ED:088D
cs=0x18ed;eip=0x00088f; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_e))));	// 46806 mov     si, [bp+arg_E] ;~ 18ED:088F
cs=0x18ed;eip=0x000892; 	T(CMP(*(dw*)(raddr(ds,bx+si)), 0));	// 46807 cmp     word ptr [bx+si], 0 ;~ 18ED:0892
cs=0x18ed;eip=0x000895; 	R(JNZ(loc_27d4a));	// 46808 jnz     short loc_27D4A ;~ 18ED:0895
cs=0x18ed;eip=0x000897; 	R(JMP(loc_27c92));	// 46809 jmp     loc_27C92 ;~ 18ED:0897
loc_27d4a:
	// 7609 
cs=0x18ed;eip=0x00089a; 	X(PUSH(word_3eb90));	// 46813 push    word_3EB90 ;~ 18ED:089A
cs=0x18ed;eip=0x00089e; 	X(PUSH(performgraphcolor));	// 46814 push    performGraphColor ;~ 18ED:089E
cs=0x18ed;eip=0x0008a2; 	R(JMP(loc_27cb0));	// 46815 jmp     loc_27CB0 ;~ 18ED:08A2
loc_27d56:
	// 7610 
cs=0x18ed;eip=0x0008a6; 	X(PUSH(cs));	// 46820 push    cs ;~ 18ED:08A6
cs=0x18ed;eip=0x0008a7; 	R(CALL(mouse_draw_transparent_check,0));	// 46821 call    near ptr mouse_draw_transparent_check ;~ 18ED:08A7
cs=0x18ed;eip=0x0008aa; 	T(CMP(*(raddr(ss,bp+var_1c0)), 0x0FF));	// 46822 cmp     [bp+var_1C0], 0FFh ;~ 18ED:08AA
cs=0x18ed;eip=0x0008af; 	R(JNZ(loc_27d65));	// 46823 jnz     short loc_27D65 ;~ 18ED:08AF
cs=0x18ed;eip=0x0008b1; 	X(PUSH(cs));	// 46824 push    cs ;~ 18ED:08B1
cs=0x18ed;eip=0x0008b2; 	R(CALL(check_input,0));	// 46825 call    near ptr check_input ;~ 18ED:08B2
loc_27d65:
	// 7611 
cs=0x18ed;eip=0x0008b5; 	T(MOV(al, *(raddr(ss,bp+var_1d4))));	// 46828 mov     al, [bp+var_1D4] ;~ 18ED:08B5
cs=0x18ed;eip=0x0008b9; 	X(MOV(*(raddr(ss,bp+var_1c0)), al));	// 46829 mov     [bp+var_1C0], al ;~ 18ED:08B9
loc_27d6d:
	// 7612 
cs=0x18ed;eip=0x0008bd; 	X(PUSH(cs));	// 46832 push    cs ;~ 18ED:08BD
cs=0x18ed;eip=0x0008be; 	R(CALL(timer_get_delta_alt,0));	// 46833 call    near ptr timer_get_delta_alt ;~ 18ED:08BE
cs=0x18ed;eip=0x0008c1; 	X(PUSH(ax));	// 46834 push    ax ;~ 18ED:08C1
cs=0x18ed;eip=0x0008c2; 	X(PUSH(cs));	// 46835 push    cs ;~ 18ED:08C2
cs=0x18ed;eip=0x0008c3; 	R(CALL(input_checking,0));	// 46836 call    near ptr input_checking ;~ 18ED:08C3
cs=0x18ed;eip=0x0008c6; 	T(ADD(sp, 2));	// 46837 add     sp, 2 ;~ 18ED:08C6
cs=0x18ed;eip=0x0008c9; 	X(MOV(*(dw*)(raddr(ss,bp+var_142)), ax));	// 46838 mov     [bp+var_142], ax ;~ 18ED:08C9
cs=0x18ed;eip=0x0008cd; 	T(ax = bp+var_ee);	// 46839 lea     ax, [bp+var_EE] ;~ 18ED:08CD
cs=0x18ed;eip=0x0008d1; 	X(PUSH(ax));	// 46840 push    ax ;~ 18ED:08D1
cs=0x18ed;eip=0x0008d2; 	T(ax = bp+var_1be);	// 46841 lea     ax, [bp+var_1BE] ;~ 18ED:08D2
cs=0x18ed;eip=0x0008d6; 	X(PUSH(ax));	// 46842 push    ax ;~ 18ED:08D6
cs=0x18ed;eip=0x0008d7; 	T(ax = bp+var_c6);	// 46843 lea     ax, [bp+var_C6] ;~ 18ED:08D7
cs=0x18ed;eip=0x0008db; 	X(PUSH(ax));	// 46844 push    ax ;~ 18ED:08DB
cs=0x18ed;eip=0x0008dc; 	T(ax = bp+var_28);	// 46845 lea     ax, [bp+var_28] ;~ 18ED:08DC
cs=0x18ed;eip=0x0008df; 	X(PUSH(ax));	// 46846 push    ax ;~ 18ED:08DF
cs=0x18ed;eip=0x0008e0; 	T(MOV(al, *(raddr(ss,bp+var_140))));	// 46847 mov     al, [bp+var_140] ;~ 18ED:08E0
cs=0x18ed;eip=0x0008e4; 	T(CBW);	// 46848 cbw ;~ 18ED:08E4
cs=0x18ed;eip=0x0008e5; 	X(PUSH(ax));	// 46849 push    ax ;~ 18ED:08E5
cs=0x18ed;eip=0x0008e6; 	X(PUSH(cs));	// 46850 push    cs ;~ 18ED:08E6
cs=0x18ed;eip=0x0008e7; 	R(CALL(mouse_multi_hittest,0));	// 46851 call    near ptr mouse_multi_hittest ;~ 18ED:08E7
cs=0x18ed;eip=0x0008ea; 	T(ADD(sp, 0x0A));	// 46852 add     sp, 0Ah ;~ 18ED:08EA
cs=0x18ed;eip=0x0008ed; 	X(MOV(*(raddr(ss,bp+var_1c4)), al));	// 46853 mov     [bp+var_1C4], al ;~ 18ED:08ED
cs=0x18ed;eip=0x0008f1; 	T(CMP(al, 0x0FF));	// 46854 cmp     al, 0FFh ;~ 18ED:08F1
cs=0x18ed;eip=0x0008f3; 	R(JZ(loc_27dbc));	// 46855 jz      short loc_27DBC ;~ 18ED:08F3
cs=0x18ed;eip=0x0008f5; 	T(CMP(*(dw*)(raddr(ss,bp+arg_e)), 0));	// 46856 cmp     [bp+arg_E], 0 ;~ 18ED:08F5
cs=0x18ed;eip=0x0008f9; 	R(JZ(loc_27db8));	// 46857 jz      short loc_27DB8 ;~ 18ED:08F9
cs=0x18ed;eip=0x0008fb; 	T(CBW);	// 46858 cbw ;~ 18ED:08FB
cs=0x18ed;eip=0x0008fc; 	T(MOV(bx, ax));	// 46859 mov     bx, ax ;~ 18ED:08FC
cs=0x18ed;eip=0x0008fe; 	T(SHL(bx, 1));	// 46860 shl     bx, 1 ;~ 18ED:08FE
cs=0x18ed;eip=0x000900; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_e))));	// 46861 mov     si, [bp+arg_E] ;~ 18ED:0900
cs=0x18ed;eip=0x000903; 	T(CMP(*(dw*)(raddr(ds,bx+si)), 0));	// 46862 cmp     word ptr [bx+si], 0 ;~ 18ED:0903
cs=0x18ed;eip=0x000906; 	R(JNZ(loc_27dbc));	// 46863 jnz     short loc_27DBC ;~ 18ED:0906
loc_27db8:
	// 7613 
cs=0x18ed;eip=0x000908; 	X(MOV(*(raddr(ss,bp+var_1d4)), al));	// 46866 mov     [bp+var_1D4], al ;~ 18ED:0908
loc_27dbc:
	// 7614 
cs=0x18ed;eip=0x00090c; 	T(CMP(*(raddr(ss,bp+var_140)), 2));	// 46870 cmp     [bp+var_140], 2 ;~ 18ED:090C
cs=0x18ed;eip=0x000911; 	R(JNZ(loc_27e15));	// 46871 jnz     short loc_27E15 ;~ 18ED:0911
cs=0x18ed;eip=0x000913; 	T(CMP(*(dw*)(raddr(ss,bp+var_142)), 0));	// 46872 cmp     [bp+var_142], 0 ;~ 18ED:0913
cs=0x18ed;eip=0x000918; 	R(JZ(loc_27e15));	// 46873 jz      short loc_27E15 ;~ 18ED:0918
cs=0x18ed;eip=0x00091a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_142))));	// 46874 mov     ax, [bp+var_142] ;~ 18ED:091A
cs=0x18ed;eip=0x00091e; 	X(MOV(*(dw*)(raddr(ss,bp+var_1d2)), ax));	// 46875 mov     [bp+var_1D2], ax ;~ 18ED:091E
cs=0x18ed;eip=0x000922; 	T(MOV(bx, ax));	// 46876 mov     bx, ax ;~ 18ED:0922
cs=0x18ed;eip=0x000924; 	T(TEST(*((g_ascii_props)+bx), 1));	// 46877 test    g_ascii_props[bx], 1 ;~ 18ED:0924
cs=0x18ed;eip=0x000929; 	R(JZ(loc_27dee));	// 46878 jz      short loc_27DEE ;~ 18ED:0929
cs=0x18ed;eip=0x00092b; 	T(TEST(*((g_ascii_props)+bx), 1));	// 46879 test    g_ascii_props[bx], 1 ;~ 18ED:092B
cs=0x18ed;eip=0x000930; 	R(JZ(loc_27de8));	// 46880 jz      short loc_27DE8 ;~ 18ED:0930
cs=0x18ed;eip=0x000932; 	T(ADD(ax, 0x20));	// 46881 add     ax, 20h ; ' ' ;~ 18ED:0932
cs=0x18ed;eip=0x000935; 	R(JMP(loc_27dea));	// 46882 jmp     short loc_27DEA ;~ 18ED:0935
loc_27de8:
	// 7615 
cs=0x18ed;eip=0x000938; 	T(MOV(ax, bx));	// 46887 mov     ax, bx ;~ 18ED:0938
loc_27dea:
	// 7616 
cs=0x18ed;eip=0x00093a; 	X(MOV(*(dw*)(raddr(ss,bp+var_1d2)), ax));	// 46890 mov     [bp+var_1D2], ax ;~ 18ED:093A
loc_27dee:
	// 7617 
cs=0x18ed;eip=0x00093e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1d2))));	// 46893 mov     ax, [bp+var_1D2] ;~ 18ED:093E
cs=0x18ed;eip=0x000942; 	T(CMP(*(dw*)(raddr(ss,bp+var_1c8)), ax));	// 46894 cmp     [bp+var_1C8], ax ;~ 18ED:0942
cs=0x18ed;eip=0x000946; 	R(JNZ(loc_27e00));	// 46895 jnz     short loc_27E00 ;~ 18ED:0946
cs=0x18ed;eip=0x000948; 	X(MOV(*(raddr(ss,bp+var_1d4)), 0));	// 46896 mov     [bp+var_1D4], 0 ;~ 18ED:0948
cs=0x18ed;eip=0x00094d; 	R(JMP(loc_27e0f));	// 46897 jmp     short loc_27E0F ;~ 18ED:094D
loc_27e00:
	// 7618 
cs=0x18ed;eip=0x000950; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1d2))));	// 46902 mov     ax, [bp+var_1D2] ;~ 18ED:0950
cs=0x18ed;eip=0x000954; 	T(CMP(*(dw*)(raddr(ss,bp+var_1cc)), ax));	// 46903 cmp     [bp+var_1CC], ax ;~ 18ED:0954
cs=0x18ed;eip=0x000958; 	R(JNZ(loc_27e15));	// 46904 jnz     short loc_27E15 ;~ 18ED:0958
cs=0x18ed;eip=0x00095a; 	X(MOV(*(raddr(ss,bp+var_1d4)), 1));	// 46905 mov     [bp+var_1D4], 1 ;~ 18ED:095A
loc_27e0f:
	// 7619 
cs=0x18ed;eip=0x00095f; 	X(MOV(*(dw*)(raddr(ss,bp+var_142)), 0x0D));	// 46908 mov     [bp+var_142], 0Dh ;~ 18ED:095F
loc_27e15:
	// 7620 
cs=0x18ed;eip=0x000965; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_142))));	// 46912 mov     ax, [bp+var_142] ;~ 18ED:0965
cs=0x18ed;eip=0x000969; 	T(CMP(ax, 0x20));	// 46913 cmp     ax, 20h ; ' ' ;~ 18ED:0969
cs=0x18ed;eip=0x00096c; 	R(JNZ(loc_27e21));	// 46914 jnz     short loc_27E21 ;~ 18ED:096C
cs=0x18ed;eip=0x00096e; 	R(JMP(loc_27ea9));	// 46915 jmp     loc_27EA9 ;~ 18ED:096E
loc_27e21:
	// 7621 
cs=0x18ed;eip=0x000971; 	R(JBE(loc_27e26));	// 46919 jbe     short loc_27E26 ;~ 18ED:0971
cs=0x18ed;eip=0x000973; 	R(JMP(loc_27eb6));	// 46920 jmp     loc_27EB6 ;~ 18ED:0973
loc_27e26:
	// 7622 
cs=0x18ed;eip=0x000976; 	T(CMP(ax, 0x0D));	// 46924 cmp     ax, 0Dh ;~ 18ED:0976
cs=0x18ed;eip=0x000979; 	R(JZ(loc_27ea9));	// 46925 jz      short loc_27EA9 ;~ 18ED:0979
cs=0x18ed;eip=0x00097b; 	T(CMP(ax, 0x1B));	// 46926 cmp     ax, 1Bh ;~ 18ED:097B
cs=0x18ed;eip=0x00097e; 	R(JZ(loc_27ea4));	// 46927 jz      short loc_27EA4 ;~ 18ED:097E
cs=0x18ed;eip=0x000980; 	R(JMP(loc_27c6d));	// 46928 jmp     loc_27C6D ;~ 18ED:0980
loc_27e34:
	// 7623 
cs=0x18ed;eip=0x000984; 	T(CMP(*(raddr(ss,bp+var_1d4)), 0));	// 46934 cmp     [bp+var_1D4], 0 ;~ 18ED:0984
cs=0x18ed;eip=0x000989; 	R(JZ(loc_27e42));	// 46935 jz      short loc_27E42 ;~ 18ED:0989
cs=0x18ed;eip=0x00098b; 	X(DEC(*(raddr(ss,bp+var_1d4))));	// 46936 dec     [bp+var_1D4] ;~ 18ED:098B
cs=0x18ed;eip=0x00098f; 	R(JMP(loc_27e4c));	// 46937 jmp     short loc_27E4C ;~ 18ED:098F
loc_27e42:
	// 7624 
cs=0x18ed;eip=0x000992; 	T(MOV(al, *(raddr(ss,bp+var_140))));	// 46942 mov     al, [bp+var_140] ;~ 18ED:0992
cs=0x18ed;eip=0x000996; 	T(DEC(al));	// 46943 dec     al ;~ 18ED:0996
cs=0x18ed;eip=0x000998; 	X(MOV(*(raddr(ss,bp+var_1d4)), al));	// 46944 mov     [bp+var_1D4], al ;~ 18ED:0998
loc_27e4c:
	// 7625 
cs=0x18ed;eip=0x00099c; 	T(CMP(*(dw*)(raddr(ss,bp+arg_e)), 0));	// 46947 cmp     [bp+arg_E], 0 ;~ 18ED:099C
cs=0x18ed;eip=0x0009a0; 	R(JNZ(loc_27e55));	// 46948 jnz     short loc_27E55 ;~ 18ED:09A0
cs=0x18ed;eip=0x0009a2; 	R(JMP(loc_27c6d));	// 46949 jmp     loc_27C6D ;~ 18ED:09A2
loc_27e55:
	// 7626 
cs=0x18ed;eip=0x0009a5; 	T(MOV(al, *(raddr(ss,bp+var_1d4))));	// 46953 mov     al, [bp+var_1D4] ;~ 18ED:09A5
cs=0x18ed;eip=0x0009a9; 	T(CBW);	// 46954 cbw ;~ 18ED:09A9
cs=0x18ed;eip=0x0009aa; 	T(MOV(bx, ax));	// 46955 mov     bx, ax ;~ 18ED:09AA
cs=0x18ed;eip=0x0009ac; 	T(SHL(bx, 1));	// 46956 shl     bx, 1 ;~ 18ED:09AC
cs=0x18ed;eip=0x0009ae; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_e))));	// 46957 mov     si, [bp+arg_E] ;~ 18ED:09AE
cs=0x18ed;eip=0x0009b1; 	T(CMP(*(dw*)(raddr(ds,bx+si)), 0));	// 46958 cmp     word ptr [bx+si], 0 ;~ 18ED:09B1
cs=0x18ed;eip=0x0009b4; 	R(JNZ(loc_27e34));	// 46959 jnz     short loc_27E34 ;~ 18ED:09B4
cs=0x18ed;eip=0x0009b6; 	R(JMP(loc_27c6d));	// 46960 jmp     loc_27C6D ;~ 18ED:09B6
loc_27e6a:
	// 7627 
cs=0x18ed;eip=0x0009ba; 	T(MOV(al, *(raddr(ss,bp+var_1d4))));	// 46966 mov     al, [bp+var_1D4] ;~ 18ED:09BA
cs=0x18ed;eip=0x0009be; 	T(CBW);	// 46967 cbw ;~ 18ED:09BE
cs=0x18ed;eip=0x0009bf; 	T(INC(ax));	// 46968 inc     ax ;~ 18ED:09BF
cs=0x18ed;eip=0x0009c0; 	T(MOV(cx, ax));	// 46969 mov     cx, ax ;~ 18ED:09C0
cs=0x18ed;eip=0x0009c2; 	T(MOV(al, *(raddr(ss,bp+var_140))));	// 46970 mov     al, [bp+var_140] ;~ 18ED:09C2
cs=0x18ed;eip=0x0009c6; 	T(CBW);	// 46971 cbw ;~ 18ED:09C6
cs=0x18ed;eip=0x0009c7; 	T(CMP(cx, ax));	// 46972 cmp     cx, ax ;~ 18ED:09C7
cs=0x18ed;eip=0x0009c9; 	R(JGE(loc_27e82));	// 46973 jge     short loc_27E82 ;~ 18ED:09C9
cs=0x18ed;eip=0x0009cb; 	X(INC(*(raddr(ss,bp+var_1d4))));	// 46974 inc     [bp+var_1D4] ;~ 18ED:09CB
cs=0x18ed;eip=0x0009cf; 	R(JMP(loc_27e87));	// 46975 jmp     short loc_27E87 ;~ 18ED:09CF
loc_27e82:
	// 7628 
cs=0x18ed;eip=0x0009d2; 	X(MOV(*(raddr(ss,bp+var_1d4)), 0));	// 46980 mov     [bp+var_1D4], 0 ;~ 18ED:09D2
loc_27e87:
	// 7629 
cs=0x18ed;eip=0x0009d7; 	T(CMP(*(dw*)(raddr(ss,bp+arg_e)), 0));	// 46983 cmp     [bp+arg_E], 0 ;~ 18ED:09D7
cs=0x18ed;eip=0x0009db; 	R(JNZ(loc_27e90));	// 46984 jnz     short loc_27E90 ;~ 18ED:09DB
cs=0x18ed;eip=0x0009dd; 	R(JMP(loc_27c6d));	// 46985 jmp     loc_27C6D ;~ 18ED:09DD
loc_27e90:
	// 7630 
cs=0x18ed;eip=0x0009e0; 	T(MOV(al, *(raddr(ss,bp+var_1d4))));	// 46989 mov     al, [bp+var_1D4] ;~ 18ED:09E0
cs=0x18ed;eip=0x0009e4; 	T(CBW);	// 46990 cbw ;~ 18ED:09E4
cs=0x18ed;eip=0x0009e5; 	T(MOV(bx, ax));	// 46991 mov     bx, ax ;~ 18ED:09E5
cs=0x18ed;eip=0x0009e7; 	T(SHL(bx, 1));	// 46992 shl     bx, 1 ;~ 18ED:09E7
cs=0x18ed;eip=0x0009e9; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_e))));	// 46993 mov     si, [bp+arg_E] ;~ 18ED:09E9
cs=0x18ed;eip=0x0009ec; 	T(CMP(*(dw*)(raddr(ds,bx+si)), 0));	// 46994 cmp     word ptr [bx+si], 0 ;~ 18ED:09EC
cs=0x18ed;eip=0x0009ef; 	R(JNZ(loc_27e6a));	// 46995 jnz     short loc_27E6A ;~ 18ED:09EF
cs=0x18ed;eip=0x0009f1; 	R(JMP(loc_27c6d));	// 46996 jmp     loc_27C6D ;~ 18ED:09F1
loc_27ea4:
	// 7631 
cs=0x18ed;eip=0x0009f4; 	X(MOV(*(raddr(ss,bp+var_1d4)), 0x0FF));	// 47000 mov     [bp+var_1D4], 0FFh ;~ 18ED:09F4
loc_27ea9:
	// 7632 
cs=0x18ed;eip=0x0009f9; 	X(MOV(*(raddr(ss,bp+var_84)), 0));	// 47004 mov     [bp+var_84], 0 ;~ 18ED:09F9
cs=0x18ed;eip=0x0009fe; 	X(PUSH(cs));	// 47005 push    cs ;~ 18ED:09FE
cs=0x18ed;eip=0x0009ff; 	R(CALL(check_input,0));	// 47006 call    near ptr check_input ;~ 18ED:09FF
cs=0x18ed;eip=0x000a02; 	R(JMP(loc_27c6d));	// 47007 jmp     loc_27C6D ;~ 18ED:0A02
loc_27eb6:
	// 7633 
cs=0x18ed;eip=0x000a06; 	T(CMP(ax, 0x4800));	// 47012 cmp     ax, 4800h ;~ 18ED:0A06
cs=0x18ed;eip=0x000a09; 	R(JNZ(loc_27ebe));	// 47013 jnz     short loc_27EBE ;~ 18ED:0A09
cs=0x18ed;eip=0x000a0b; 	R(JMP(loc_27e34));	// 47014 jmp     loc_27E34 ;~ 18ED:0A0B
loc_27ebe:
	// 7634 
cs=0x18ed;eip=0x000a0e; 	T(CMP(ax, 0x4B00));	// 47018 cmp     ax, 4B00h ;~ 18ED:0A0E
cs=0x18ed;eip=0x000a11; 	R(JNZ(loc_27ec6));	// 47019 jnz     short loc_27EC6 ;~ 18ED:0A11
cs=0x18ed;eip=0x000a13; 	R(JMP(loc_27e34));	// 47020 jmp     loc_27E34 ;~ 18ED:0A13
loc_27ec6:
	// 7635 
cs=0x18ed;eip=0x000a16; 	T(CMP(ax, 0x4D00));	// 47024 cmp     ax, 4D00h ;~ 18ED:0A16
cs=0x18ed;eip=0x000a19; 	R(JZ(loc_27e6a));	// 47025 jz      short loc_27E6A ;~ 18ED:0A19
cs=0x18ed;eip=0x000a1b; 	T(CMP(ax, 0x5000));	// 47026 cmp     ax, 5000h ;~ 18ED:0A1B
cs=0x18ed;eip=0x000a1e; 	R(JZ(loc_27e6a));	// 47027 jz      short loc_27E6A ;~ 18ED:0A1E
cs=0x18ed;eip=0x000a20; 	R(JMP(loc_27c6d));	// 47028 jmp     loc_27C6D ;~ 18ED:0A20
do_fileselect_dialog:
	// 47039 
#undef var_71c
#define var_71c -0x71C
	// 47042 var_71C         = word ptr -71Ch ;~ 18ED:0A24
#undef var_71a
#define var_71a -0x71A
	// 47043 var_71A         = word ptr -71Ah ;~ 18ED:0A24
#undef var_718
#define var_718 -0x718
	// 47044 var_718         = byte ptr -718h ;~ 18ED:0A24
#undef var_716
#define var_716 -0x716
	// 47045 var_716         = byte ptr -716h ;~ 18ED:0A24
#undef var_714
#define var_714 -0x714
	// 47046 var_714         = byte ptr -714h ;~ 18ED:0A24
#undef var_712
#define var_712 -0x712
	// 47047 var_712         = word ptr -712h ;~ 18ED:0A24
#undef var_710
#define var_710 -0x710
	// 47048 var_710         = word ptr -710h ;~ 18ED:0A24
#undef var_70e
#define var_70e -0x70E
	// 47049 var_70E         = dword ptr -70Eh ;~ 18ED:0A24
#undef var_70a
#define var_70a -0x70A
	// 47050 var_70A         = word ptr -70Ah ;~ 18ED:0A24
#undef var_708
#define var_708 -0x708
	// 47051 var_708         = word ptr -708h ;~ 18ED:0A24
#undef var_6ea
#define var_6ea -0x6EA
	// 47052 var_6EA         = byte ptr -6EAh ;~ 18ED:0A24
#undef var_6e8
#define var_6e8 -0x6E8
	// 47053 var_6E8         = word ptr -6E8h ;~ 18ED:0A24
#undef var_6e6
#define var_6e6 -0x6E6
	// 47054 var_6E6         = word ptr -6E6h ;~ 18ED:0A24
#undef var_6e4
#define var_6e4 -0x6E4
	// 47055 var_6E4         = byte ptr -6E4h ;~ 18ED:0A24
#undef var_6e2
#define var_6e2 -0x6E2
	// 47056 var_6E2         = byte ptr -6E2h ;~ 18ED:0A24
#undef var_6e0
#define var_6e0 -0x6E0
	// 47057 var_6E0         = word ptr -6E0h ;~ 18ED:0A24
#undef var_6d0
#define var_6d0 -0x6D0
	// 47058 var_6D0         = word ptr -6D0h ;~ 18ED:0A24
#undef var_6cc
#define var_6cc -0x6CC
	// 47059 var_6CC         = word ptr -6CCh ;~ 18ED:0A24
#undef var_6ca
#define var_6ca -0x6CA
	// 47060 var_6CA         = word ptr -6CAh ;~ 18ED:0A24
#undef var_6c8
#define var_6c8 -0x6C8
	// 47061 var_6C8         = byte ptr -6C8h ;~ 18ED:0A24
#undef var_6b4
#define var_6b4 -0x6B4
	// 47062 var_6B4         = byte ptr -6B4h ;~ 18ED:0A24
#undef var_6a0
#define var_6a0 -0x6A0
	// 47063 var_6A0         = byte ptr -6A0h ;~ 18ED:0A24
#undef var_69c
#define var_69c -0x69C
	// 47064 var_69C         = byte ptr -69Ch ;~ 18ED:0A24
#undef var_69a
#define var_69a -0x69A
	// 47065 var_69A         = byte ptr -69Ah ;~ 18ED:0A24
#undef var_698
#define var_698 -0x698
	// 47066 var_698         = dword ptr -698h ;~ 18ED:0A24
#undef var_18
#define var_18 -0x18
	// 47067 var_18          = byte ptr -18h ;~ 18ED:0A24
#undef var_16
#define var_16 -0x16
	// 47068 var_16          = byte ptr -16h ;~ 18ED:0A24
#undef var_2
#define var_2 -2
	// 47069 var_2           = byte ptr -2 ;~ 18ED:0A24
#undef arg_0
#define arg_0 6
	// 47070 arg_0           = dword ptr  6 ;~ 18ED:0A24
#undef arg_4
#define arg_4 0x0A
	// 47071 arg_4           = dword ptr  0Ah ;~ 18ED:0A24
#undef arg_8
#define arg_8 0x0E
	// 47072 arg_8           = word ptr  0Eh ;~ 18ED:0A24
ret_18ed_a24:
	// 7636 
cs=0x18ed;eip=0x000a24; 	X(PUSH(bp));	// 47074 push    bp ;~ 18ED:0A24
cs=0x18ed;eip=0x000a25; 	T(MOV(bp, sp));	// 47075 mov     bp, sp ;~ 18ED:0A25
cs=0x18ed;eip=0x000a27; 	T(SUB(sp, 0x71C));	// 47076 sub     sp, 71Ch ;~ 18ED:0A27
cs=0x18ed;eip=0x000a2b; 	X(PUSH(di));	// 47077 push    di ;~ 18ED:0A2B
cs=0x18ed;eip=0x000a2c; 	X(PUSH(si));	// 47078 push    si ;~ 18ED:0A2C
cs=0x18ed;eip=0x000a2d; 	T(SUB(ax, ax));	// 47079 sub     ax, ax ;~ 18ED:0A2D
cs=0x18ed;eip=0x000a2f; 	X(PUSH(ax));	// 47080 push    ax ;~ 18ED:0A2F
cs=0x18ed;eip=0x000a30; 	T(ax = bp+var_712);	// 47081 lea     ax, [bp+var_712] ;~ 18ED:0A30
cs=0x18ed;eip=0x000a34; 	X(PUSH(ax));	// 47082 push    ax ;~ 18ED:0A34
cs=0x18ed;eip=0x000a35; 	X(PUSH(dialogarg2));	// 47083 push    dialogarg2 ;~ 18ED:0A35
cs=0x18ed;eip=0x000a39; 	T(MOV(ax, 0x0FFFF));	// 47084 mov     ax, 0FFFFh ;~ 18ED:0A39
cs=0x18ed;eip=0x000a3c; 	X(PUSH(ax));	// 47085 push    ax ;~ 18ED:0A3C
cs=0x18ed;eip=0x000a3d; 	X(PUSH(ax));	// 47086 push    ax ;~ 18ED:0A3D
cs=0x18ed;eip=0x000a3e; 	T(MOV(ax, offset(dseg,aloa)));	// 47087 mov     ax, offset aLoa ; "loa" ;~ 18ED:0A3E
cs=0x18ed;eip=0x000a41; 	X(PUSH(ax));	// 47088 push    ax ;~ 18ED:0A41
cs=0x18ed;eip=0x000a42; 	X(PUSH(word_44cee));	// 47089 push    word_44CEE ;~ 18ED:0A42
cs=0x18ed;eip=0x000a46; 	X(PUSH(mainresptr));	// 47090 push    mainresptr ;~ 18ED:0A46
cs=0x18ed;eip=0x000a4a; 	X(PUSH(cs));	// 47091 push    cs ;~ 18ED:0A4A
cs=0x18ed;eip=0x000a4b; 	R(CALL(locate_text_res,0));	// 47092 call    near ptr locate_text_res ;~ 18ED:0A4B
cs=0x18ed;eip=0x000a4e; 	T(ADD(sp, 6));	// 47093 add     sp, 6 ;~ 18ED:0A4E
cs=0x18ed;eip=0x000a51; 	X(PUSH(dx));	// 47094 push    dx ;~ 18ED:0A51
cs=0x18ed;eip=0x000a52; 	X(PUSH(ax));	// 47095 push    ax ;~ 18ED:0A52
cs=0x18ed;eip=0x000a53; 	T(MOV(ax, 1));	// 47096 mov     ax, 1 ;~ 18ED:0A53
cs=0x18ed;eip=0x000a56; 	X(PUSH(ax));	// 47097 push    ax ;~ 18ED:0A56
cs=0x18ed;eip=0x000a57; 	T(MOV(ax, 3));	// 47098 mov     ax, 3 ;~ 18ED:0A57
cs=0x18ed;eip=0x000a5a; 	X(PUSH(ax));	// 47099 push    ax ;~ 18ED:0A5A
cs=0x18ed;eip=0x000a5b; 	X(PUSH(cs));	// 47100 push    cs ;~ 18ED:0A5B
cs=0x18ed;eip=0x000a5c; 	R(CALL(show_dialog,0));	// 47101 call    near ptr show_dialog ;~ 18ED:0A5C
cs=0x18ed;eip=0x000a5f; 	T(ADD(sp, 0x12));	// 47102 add     sp, 12h ;~ 18ED:0A5F
cs=0x18ed;eip=0x000a62; 	T(OR(ax, ax));	// 47103 or      ax, ax ;~ 18ED:0A62
cs=0x18ed;eip=0x000a64; 	R(JGE(loc_27f1e));	// 47104 jge     short loc_27F1E ;~ 18ED:0A64
cs=0x18ed;eip=0x000a66; 	T(SUB(ax, ax));	// 47105 sub     ax, ax ;~ 18ED:0A66
cs=0x18ed;eip=0x000a68; 	X(POP(si));	// 47106 pop     si ;~ 18ED:0A68
cs=0x18ed;eip=0x000a69; 	X(POP(di));	// 47107 pop     di ;~ 18ED:0A69
cs=0x18ed;eip=0x000a6a; 	T(MOV(sp, bp));	// 47108 mov     sp, bp ;~ 18ED:0A6A
cs=0x18ed;eip=0x000a6c; 	X(POP(bp));	// 47109 pop     bp ;~ 18ED:0A6C
cs=0x18ed;eip=0x000a6d; 	R(RETF(0));	// 47110 retf ;~ 18ED:0A6D
loc_27f1e:
	// 7637 
cs=0x18ed;eip=0x000a6e; 	T(MOV(al, g_is_busy));	// 47114 mov     al, g_is_busy ;~ 18ED:0A6E
cs=0x18ed;eip=0x000a71; 	X(MOV(*(raddr(ss,bp+var_18)), al));	// 47115 mov     [bp+var_18], al ;~ 18ED:0A71
cs=0x18ed;eip=0x000a74; 	X(MOV(g_is_busy, 1));	// 47116 mov     g_is_busy, 1 ;~ 18ED:0A74
cs=0x18ed;eip=0x000a79; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_708))));	// 47117 mov     ax, [bp+var_708] ;~ 18ED:0A79
cs=0x18ed;eip=0x000a7d; 	T(ADD(ax, 4));	// 47118 add     ax, 4 ;~ 18ED:0A7D
cs=0x18ed;eip=0x000a80; 	X(MOV(*(dw*)(raddr(ss,bp+var_71c)), ax));	// 47119 mov     [bp+var_71C], ax ;~ 18ED:0A80
cs=0x18ed;eip=0x000a84; 	X(PUSH(dialogarg2));	// 47120 push    dialogarg2 ;~ 18ED:0A84
cs=0x18ed;eip=0x000a88; 	X(PUSH(ax));	// 47121 push    ax ;~ 18ED:0A88
cs=0x18ed;eip=0x000a89; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_70a))));	// 47122 mov     ax, [bp+var_70A] ;~ 18ED:0A89
cs=0x18ed;eip=0x000a8d; 	T(ADD(ax, 0x0AB));	// 47123 add     ax, 0ABh ; '«' ;~ 18ED:0A8D
cs=0x18ed;eip=0x000a90; 	X(PUSH(ax));	// 47124 push    ax ;~ 18ED:0A90
cs=0x18ed;eip=0x000a91; 	X(PUSH(*(dw*)(raddr(ss,bp+var_71c))));	// 47125 push    [bp+var_71C] ;~ 18ED:0A91
cs=0x18ed;eip=0x000a95; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_70a))));	// 47126 mov     ax, [bp+var_70A] ;~ 18ED:0A95
cs=0x18ed;eip=0x000a99; 	T(SUB(ax, 4));	// 47127 sub     ax, 4 ;~ 18ED:0A99
cs=0x18ed;eip=0x000a9c; 	X(PUSH(ax));	// 47128 push    ax ;~ 18ED:0A9C
cs=0x18ed;eip=0x000a9d; 	R(CALLF(prerender_line,0));	// 47129 call    preRender_line ;~ 18ED:0A9D
cs=0x18ed;eip=0x000aa2; 	T(ADD(sp, 0x0A));	// 47130 add     sp, 0Ah ;~ 18ED:0AA2
cs=0x18ed;eip=0x000aa5; 	X(PUSH(word_3eb90));	// 47131 push    word_3EB90 ;~ 18ED:0AA5
cs=0x18ed;eip=0x000aa9; 	X(PUSH(dialog_fnt_colour));	// 47132 push    dialog_fnt_colour ;~ 18ED:0AA9
cs=0x18ed;eip=0x000aad; 	R(CALLF(font_set_unk,0));	// 47133 call    font_set_unk ;~ 18ED:0AAD
cs=0x18ed;eip=0x000ab2; 	T(ADD(sp, 4));	// 47134 add     sp, 4 ;~ 18ED:0AB2
cs=0x18ed;eip=0x000ab5; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 47135 push    [bp+arg_8] ;~ 18ED:0AB5
cs=0x18ed;eip=0x000ab8; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_4+2)))));	// 47136 push    word ptr [bp+arg_4+2] ;~ 18ED:0AB8
cs=0x18ed;eip=0x000abb; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 47137 mov     ax, offset resID_byte1 ;~ 18ED:0ABB
cs=0x18ed;eip=0x000abe; 	X(PUSH(ax));	// 47138 push    ax ;~ 18ED:0ABE
cs=0x18ed;eip=0x000abf; 	X(PUSH(cs));	// 47139 push    cs ;~ 18ED:0ABF
cs=0x18ed;eip=0x000ac0; 	R(CALL(copy_string,0));	// 47140 call    near ptr copy_string ;~ 18ED:0AC0
cs=0x18ed;eip=0x000ac3; 	T(ADD(sp, 6));	// 47141 add     sp, 6 ;~ 18ED:0AC3
cs=0x18ed;eip=0x000ac6; 	X(PUSH(*(dw*)(raddr(ss,bp+var_710))));	// 47142 push    [bp+var_710] ;~ 18ED:0AC6
cs=0x18ed;eip=0x000aca; 	X(PUSH(*(dw*)(raddr(ss,bp+var_712))));	// 47143 push    [bp+var_712] ;~ 18ED:0ACA
cs=0x18ed;eip=0x000ace; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 47144 mov     ax, offset resID_byte1 ;~ 18ED:0ACE
cs=0x18ed;eip=0x000ad1; 	X(PUSH(ax));	// 47145 push    ax ;~ 18ED:0AD1
cs=0x18ed;eip=0x000ad2; 	R(CALLF(sub_345bc,0));	// 47146 call    sub_345BC ;~ 18ED:0AD2
cs=0x18ed;eip=0x000ad7; 	T(ADD(sp, 6));	// 47147 add     sp, 6 ;~ 18ED:0AD7
cs=0x18ed;eip=0x000ada; 	T(MOV(di, *(dw*)((dw*)(raddr(ss,bp+var_70e)))));	// 47148 mov     di, word ptr [bp+var_70E] ;~ 18ED:0ADA
cs=0x18ed;eip=0x000ade; 	T(ax = di+0x0A2);	// 47149 lea     ax, [di+0A2h] ;~ 18ED:0ADE
cs=0x18ed;eip=0x000ae2; 	X(MOV(*(dw*)(raddr(ss,bp+var_6e6)), ax));	// 47150 mov     [bp+var_6E6], ax ;~ 18ED:0AE2
cs=0x18ed;eip=0x000ae6; 	X(MOV(*(raddr(ss,bp+var_6ea)), 0));	// 47151 mov     [bp+var_6EA], 0 ;~ 18ED:0AE6
cs=0x18ed;eip=0x000aeb; 	R(JMP(loc_27fdd));	// 47152 jmp     short loc_27FDD ;~ 18ED:0AEB
loc_27f9e:
	// 7638 
cs=0x18ed;eip=0x000aee; 	T(MOV(al, *(raddr(ss,bp+var_6ea))));	// 47157 mov     al, [bp+var_6EA] ;~ 18ED:0AEE
cs=0x18ed;eip=0x000af2; 	T(CBW);	// 47158 cbw ;~ 18ED:0AF2
cs=0x18ed;eip=0x000af3; 	X(MOV(*(dw*)(raddr(ss,bp+var_71c)), ax));	// 47159 mov     [bp+var_71C], ax ;~ 18ED:0AF3
cs=0x18ed;eip=0x000af7; 	T(MOV(bx, ax));	// 47160 mov     bx, ax ;~ 18ED:0AF7
cs=0x18ed;eip=0x000af9; 	T(SHL(bx, 1));	// 47161 shl     bx, 1 ;~ 18ED:0AF9
cs=0x18ed;eip=0x000afb; 	T(SHL(bx, 1));	// 47162 shl     bx, 1 ;~ 18ED:0AFB
cs=0x18ed;eip=0x000afd; 	T(ADD(bx, bp));	// 47163 add     bx, bp ;~ 18ED:0AFD
cs=0x18ed;eip=0x000aff; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x70C))));	// 47164 mov     ax, [bx-70Ch] ;~ 18ED:0AFF
cs=0x18ed;eip=0x000b03; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_71c))));	// 47165 mov     bx, [bp+var_71C] ;~ 18ED:0B03
cs=0x18ed;eip=0x000b07; 	T(SHL(bx, 1));	// 47166 shl     bx, 1 ;~ 18ED:0B07
cs=0x18ed;eip=0x000b09; 	T(ADD(bx, bp));	// 47167 add     bx, bp ;~ 18ED:0B09
loc_27fbb:
	// 7639 
cs=0x18ed;eip=0x000b0b; 	X(MOV(*(dw*)(raddr(ds,bx-0x6E2)), ax));	// 47170 mov     [bx-6E2h], ax ;~ 18ED:0B0B
cs=0x18ed;eip=0x000b0f; 	T(MOV(al, *(raddr(ss,bp+var_6ea))));	// 47171 mov     al, [bp+var_6EA] ;~ 18ED:0B0F
cs=0x18ed;eip=0x000b13; 	T(CBW);	// 47172 cbw ;~ 18ED:0B13
cs=0x18ed;eip=0x000b14; 	T(SHL(ax, 1));	// 47173 shl     ax, 1 ;~ 18ED:0B14
cs=0x18ed;eip=0x000b16; 	T(ADD(ax, bp));	// 47174 add     ax, bp ;~ 18ED:0B16
cs=0x18ed;eip=0x000b18; 	X(MOV(*(dw*)(raddr(ss,bp+var_71c)), ax));	// 47175 mov     [bp+var_71C], ax ;~ 18ED:0B18
cs=0x18ed;eip=0x000b1c; 	T(MOV(bx, ax));	// 47176 mov     bx, ax ;~ 18ED:0B1C
cs=0x18ed;eip=0x000b1e; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x6E2))));	// 47177 mov     ax, [bx-6E2h] ;~ 18ED:0B1E
cs=0x18ed;eip=0x000b22; 	T(ADD(ax, 0x0A));	// 47178 add     ax, 0Ah ;~ 18ED:0B22
cs=0x18ed;eip=0x000b25; 	X(MOV(*(dw*)(raddr(ds,bx-0x6C8)), ax));	// 47179 mov     [bx-6C8h], ax ;~ 18ED:0B25
cs=0x18ed;eip=0x000b29; 	X(INC(*(raddr(ss,bp+var_6ea))));	// 47180 inc     [bp+var_6EA] ;~ 18ED:0B29
loc_27fdd:
	// 7640 
cs=0x18ed;eip=0x000b2d; 	T(CMP(*(raddr(ss,bp+var_6ea)), 0x0A));	// 47183 cmp     [bp+var_6EA], 0Ah ;~ 18ED:0B2D
cs=0x18ed;eip=0x000b32; 	R(JGE(loc_28016));	// 47184 jge     short loc_28016 ;~ 18ED:0B32
cs=0x18ed;eip=0x000b34; 	T(MOV(al, *(raddr(ss,bp+var_6ea))));	// 47185 mov     al, [bp+var_6EA] ;~ 18ED:0B34
cs=0x18ed;eip=0x000b38; 	T(CBW);	// 47186 cbw ;~ 18ED:0B38
cs=0x18ed;eip=0x000b39; 	T(SHL(ax, 1));	// 47187 shl     ax, 1 ;~ 18ED:0B39
cs=0x18ed;eip=0x000b3b; 	T(ADD(ax, bp));	// 47188 add     ax, bp ;~ 18ED:0B3B
cs=0x18ed;eip=0x000b3d; 	X(MOV(*(dw*)(raddr(ss,bp+var_71c)), ax));	// 47189 mov     [bp+var_71C], ax ;~ 18ED:0B3D
cs=0x18ed;eip=0x000b41; 	T(MOV(bx, ax));	// 47190 mov     bx, ax ;~ 18ED:0B41
cs=0x18ed;eip=0x000b43; 	X(MOV(*(dw*)(raddr(ds,bx-0x16)), di));	// 47191 mov     [bx-16h], di ;~ 18ED:0B43
cs=0x18ed;eip=0x000b46; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_71c))));	// 47192 mov     bx, [bp+var_71C] ;~ 18ED:0B46
cs=0x18ed;eip=0x000b4a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6e6))));	// 47193 mov     ax, [bp+var_6E6] ;~ 18ED:0B4A
cs=0x18ed;eip=0x000b4e; 	X(MOV(*(dw*)(raddr(ds,bx-0x6B4)), ax));	// 47194 mov     [bx-6B4h], ax ;~ 18ED:0B4E
cs=0x18ed;eip=0x000b52; 	T(CMP(*(raddr(ss,bp+var_6ea)), 9));	// 47195 cmp     [bp+var_6EA], 9 ;~ 18ED:0B52
cs=0x18ed;eip=0x000b57; 	R(JNZ(loc_27f9e));	// 47196 jnz     short loc_27F9E ;~ 18ED:0B57
cs=0x18ed;eip=0x000b59; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_71c))));	// 47197 mov     bx, [bp+var_71C] ;~ 18ED:0B59
cs=0x18ed;eip=0x000b5d; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x6E4))));	// 47198 mov     ax, [bx-6E4h] ;~ 18ED:0B5D
cs=0x18ed;eip=0x000b61; 	T(ADD(ax, 0x0A));	// 47199 add     ax, 0Ah ;~ 18ED:0B61
cs=0x18ed;eip=0x000b64; 	R(JMP(loc_27fbb));	// 47200 jmp     short loc_27FBB ;~ 18ED:0B64
loc_28016:
	// 7641 
cs=0x18ed;eip=0x000b66; 	X(PUSH(word_3eb90));	// 47204 push    word_3EB90 ;~ 18ED:0B66
cs=0x18ed;eip=0x000b6a; 	X(PUSH(dialog_fnt_colour));	// 47205 push    dialog_fnt_colour ;~ 18ED:0B6A
cs=0x18ed;eip=0x000b6e; 	R(CALLF(font_set_unk,0));	// 47206 call    font_set_unk ;~ 18ED:0B6E
cs=0x18ed;eip=0x000b73; 	T(ADD(sp, 4));	// 47207 add     sp, 4 ;~ 18ED:0B73
cs=0x18ed;eip=0x000b76; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_70e +2)))));	// 47208 push    word ptr [bp+var_70E+2] ;~ 18ED:0B76
cs=0x18ed;eip=0x000b7a; 	X(PUSH(di));	// 47209 push    di ;~ 18ED:0B7A
cs=0x18ed;eip=0x000b7b; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 47210 push    word ptr [bp+arg_0] ;~ 18ED:0B7B
cs=0x18ed;eip=0x000b7e; 	R(CALLF(sub_345bc,0));	// 47211 call    sub_345BC ;~ 18ED:0B7E
cs=0x18ed;eip=0x000b83; 	T(ADD(sp, 6));	// 47212 add     sp, 6 ;~ 18ED:0B83
loc_28036:
	// 7642 
cs=0x18ed;eip=0x000b86; 	X(PUSH(cs));	// 47215 push    cs ;~ 18ED:0B86
cs=0x18ed;eip=0x000b87; 	R(CALL(mouse_draw_transparent_check,0));	// 47216 call    near ptr mouse_draw_transparent_check ;~ 18ED:0B87
cs=0x18ed;eip=0x000b8a; 	X(MOV(*(raddr(ss,bp+var_714)), 0));	// 47217 mov     [bp+var_714], 0 ;~ 18ED:0B8A
cs=0x18ed;eip=0x000b8f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_4)))));	// 47218 push    word ptr [bp+arg_4] ; int ;~ 18ED:0B8F
cs=0x18ed;eip=0x000b92; 	T(MOV(ax, offset(dseg,asc_3eb96)));	// 47219 mov     ax, offset asc_3EB96 ; "*" ;~ 18ED:0B92
cs=0x18ed;eip=0x000b95; 	X(PUSH(ax));	// 47220 push    ax ;~ 18ED:0B95
cs=0x18ed;eip=0x000b96; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 47221 push    word ptr [bp+arg_0] ; char * ;~ 18ED:0B96
cs=0x18ed;eip=0x000b99; 	R(CALLF(file_combine_and_find,0));	// 47222 call    file_combine_and_find ;~ 18ED:0B99
cs=0x18ed;eip=0x000b9e; 	T(ADD(sp, 6));	// 47223 add     sp, 6 ;~ 18ED:0B9E
cs=0x18ed;eip=0x000ba1; 	X(MOV(*(dw*)(raddr(ss,bp+var_6e8)), ax));	// 47224 mov     [bp+var_6E8], ax ;~ 18ED:0BA1
cs=0x18ed;eip=0x000ba5; 	T(OR(ax, ax));	// 47225 or      ax, ax ;~ 18ED:0BA5
cs=0x18ed;eip=0x000ba7; 	R(JNZ(loc_28094));	// 47226 jnz     short loc_28094 ;~ 18ED:0BA7
cs=0x18ed;eip=0x000ba9; 	R(CALLF(nullsub_1,0));	// 47227 call    nullsub_1 ;~ 18ED:0BA9
loc_2805e:
	// 7643 
cs=0x18ed;eip=0x000bae; 	X(PUSH(word_3eb90));	// 47230 push    word_3EB90 ;~ 18ED:0BAE
cs=0x18ed;eip=0x000bb2; 	X(PUSH(dialog_fnt_colour));	// 47231 push    dialog_fnt_colour ;~ 18ED:0BB2
cs=0x18ed;eip=0x000bb6; 	R(CALLF(font_set_unk,0));	// 47232 call    font_set_unk ;~ 18ED:0BB6
cs=0x18ed;eip=0x000bbb; 	T(ADD(sp, 4));	// 47233 add     sp, 4 ;~ 18ED:0BBB
cs=0x18ed;eip=0x000bbe; 	T(MOV(ax, offset(dseg,terraincenterpos)+0x22));	// 47234 mov     ax, (offset terraincenterpos+22h) ;~ 18ED:0BBE
cs=0x18ed;eip=0x000bc1; 	T(CWD);	// 47235 cwd ;~ 18ED:0BC1
cs=0x18ed;eip=0x000bc2; 	X(PUSH(dx));	// 47236 push    dx              ; int ;~ 18ED:0BC2
cs=0x18ed;eip=0x000bc3; 	X(PUSH(ax));	// 47237 push    ax              ; int ;~ 18ED:0BC3
cs=0x18ed;eip=0x000bc4; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_70e +2)))));	// 47238 push    word ptr [bp+var_70E+2] ; int ;~ 18ED:0BC4
cs=0x18ed;eip=0x000bc8; 	X(PUSH(di));	// 47239 push    di              ; int ;~ 18ED:0BC8
cs=0x18ed;eip=0x000bc9; 	T(MOV(ax, 0x12));	// 47240 mov     ax, 12h ;~ 18ED:0BC9
cs=0x18ed;eip=0x000bcc; 	X(PUSH(ax));	// 47241 push    ax ;~ 18ED:0BCC
cs=0x18ed;eip=0x000bcd; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 47242 push    word ptr [bp+arg_0] ; char * ;~ 18ED:0BCD
cs=0x18ed;eip=0x000bd0; 	X(PUSH(cs));	// 47243 push    cs ;~ 18ED:0BD0
cs=0x18ed;eip=0x000bd1; 	R(CALL(call_read_line,0));	// 47244 call    near ptr call_read_line ;~ 18ED:0BD1
cs=0x18ed;eip=0x000bd4; 	T(ADD(sp, 0x0C));	// 47245 add     sp, 0Ch ;~ 18ED:0BD4
cs=0x18ed;eip=0x000bd7; 	T(CMP(ax, 0x1B));	// 47246 cmp     ax, 1Bh ;~ 18ED:0BD7
cs=0x18ed;eip=0x000bda; 	R(JNZ(loc_28036));	// 47247 jnz     short loc_28036 ;~ 18ED:0BDA
loc_2808c:
	// 7644 
cs=0x18ed;eip=0x000bdc; 	X(MOV(*(raddr(ss,bp+var_6a0)), 0));	// 47250 mov     [bp+var_6A0], 0 ;~ 18ED:0BDC
cs=0x18ed;eip=0x000be1; 	R(JMP(loc_285ac));	// 47251 jmp     loc_285AC ;~ 18ED:0BE1
loc_28094:
	// 7645 
cs=0x18ed;eip=0x000be4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6e8))));	// 47255 push    [bp+var_6E8]    ; char * ;~ 18ED:0BE4
cs=0x18ed;eip=0x000be8; 	T(ax = bp+var_698);	// 47256 lea     ax, [bp+var_698] ;~ 18ED:0BE8
cs=0x18ed;eip=0x000bec; 	X(PUSH(ax));	// 47257 push    ax              ; int ;~ 18ED:0BEC
cs=0x18ed;eip=0x000bed; 	X(PUSH(cs));	// 47258 push    cs ;~ 18ED:0BED
cs=0x18ed;eip=0x000bee; 	R(CALL(parse_filepath_separators,0));	// 47259 call    near ptr parse_filepath_separators ;~ 18ED:0BEE
cs=0x18ed;eip=0x000bf1; 	T(ADD(sp, 4));	// 47260 add     sp, 4 ;~ 18ED:0BF1
cs=0x18ed;eip=0x000bf4; 	X(INC(*(raddr(ss,bp+var_714))));	// 47261 inc     [bp+var_714] ;~ 18ED:0BF4
loc_280a8:
	// 7646 
cs=0x18ed;eip=0x000bf8; 	R(CALLF(file_find_next_alt,0));	// 47264 call    file_find_next_alt ;~ 18ED:0BF8
cs=0x18ed;eip=0x000bfd; 	X(MOV(*(dw*)(raddr(ss,bp+var_6e8)), ax));	// 47265 mov     [bp+var_6E8], ax ;~ 18ED:0BFD
cs=0x18ed;eip=0x000c01; 	T(OR(ax, ax));	// 47266 or      ax, ax ;~ 18ED:0C01
cs=0x18ed;eip=0x000c03; 	R(JZ(loc_280e2));	// 47267 jz      short loc_280E2 ;~ 18ED:0C03
cs=0x18ed;eip=0x000c05; 	X(PUSH(ax));	// 47268 push    ax              ; char * ;~ 18ED:0C05
cs=0x18ed;eip=0x000c06; 	T(MOV(al, *(raddr(ss,bp+var_714))));	// 47269 mov     al, [bp+var_714] ;~ 18ED:0C06
cs=0x18ed;eip=0x000c0a; 	T(CBW);	// 47270 cbw ;~ 18ED:0C0A
cs=0x18ed;eip=0x000c0b; 	T(MOV(cx, ax));	// 47271 mov     cx, ax ;~ 18ED:0C0B
cs=0x18ed;eip=0x000c0d; 	T(SHL(ax, 1));	// 47272 shl     ax, 1 ;~ 18ED:0C0D
cs=0x18ed;eip=0x000c0f; 	T(ADD(ax, cx));	// 47273 add     ax, cx ;~ 18ED:0C0F
cs=0x18ed;eip=0x000c11; 	T(SHL(ax, 1));	// 47274 shl     ax, 1 ;~ 18ED:0C11
cs=0x18ed;eip=0x000c13; 	T(SHL(ax, 1));	// 47275 shl     ax, 1 ;~ 18ED:0C13
cs=0x18ed;eip=0x000c15; 	T(ADD(ax, cx));	// 47276 add     ax, cx ;~ 18ED:0C15
cs=0x18ed;eip=0x000c17; 	T(ADD(ax, bp));	// 47277 add     ax, bp ;~ 18ED:0C17
cs=0x18ed;eip=0x000c19; 	T(SUB(ax, 0x698));	// 47278 sub     ax, 698h ;~ 18ED:0C19
cs=0x18ed;eip=0x000c1c; 	X(PUSH(ax));	// 47279 push    ax              ; int ;~ 18ED:0C1C
cs=0x18ed;eip=0x000c1d; 	X(PUSH(cs));	// 47280 push    cs ;~ 18ED:0C1D
cs=0x18ed;eip=0x000c1e; 	R(CALL(parse_filepath_separators,0));	// 47281 call    near ptr parse_filepath_separators ;~ 18ED:0C1E
cs=0x18ed;eip=0x000c21; 	T(ADD(sp, 4));	// 47282 add     sp, 4 ;~ 18ED:0C21
cs=0x18ed;eip=0x000c24; 	X(INC(*(raddr(ss,bp+var_714))));	// 47283 inc     [bp+var_714] ;~ 18ED:0C24
cs=0x18ed;eip=0x000c28; 	T(MOV(al, *(raddr(ss,bp+var_714))));	// 47284 mov     al, [bp+var_714] ;~ 18ED:0C28
cs=0x18ed;eip=0x000c2c; 	T(CBW);	// 47285 cbw ;~ 18ED:0C2C
cs=0x18ed;eip=0x000c2d; 	T(CMP(ax, 0x80));	// 47286 cmp     ax, 80h ; '€' ;~ 18ED:0C2D
cs=0x18ed;eip=0x000c30; 	R(JNZ(loc_280a8));	// 47287 jnz     short loc_280A8 ;~ 18ED:0C30
loc_280e2:
	// 7647 
cs=0x18ed;eip=0x000c32; 	R(CALLF(nullsub_1,0));	// 47290 call    nullsub_1 ;~ 18ED:0C32
cs=0x18ed;eip=0x000c37; 	T(CMP(*(raddr(ss,bp+var_714)), 1));	// 47291 cmp     [bp+var_714], 1 ;~ 18ED:0C37
cs=0x18ed;eip=0x000c3c; 	R(JG(loc_280f1));	// 47292 jg      short loc_280F1 ;~ 18ED:0C3C
cs=0x18ed;eip=0x000c3e; 	R(JMP(loc_281cc));	// 47293 jmp     loc_281CC ;~ 18ED:0C3E
loc_280f1:
	// 7648 
cs=0x18ed;eip=0x000c41; 	T(SUB(si, si));	// 47297 sub     si, si ;~ 18ED:0C41
cs=0x18ed;eip=0x000c43; 	R(JMP(loc_281b7));	// 47298 jmp     loc_281B7 ;~ 18ED:0C43
loc_280f6:
	// 7649 
cs=0x18ed;eip=0x000c46; 	X(INC(*(dw*)(raddr(ss,bp+var_6ca))));	// 47303 inc     [bp+var_6CA] ;~ 18ED:0C46
loc_280fa:
	// 7650 
cs=0x18ed;eip=0x000c4a; 	T(MOV(al, *(raddr(ss,bp+var_714))));	// 47306 mov     al, [bp+var_714] ;~ 18ED:0C4A
cs=0x18ed;eip=0x000c4e; 	T(CBW);	// 47307 cbw ;~ 18ED:0C4E
cs=0x18ed;eip=0x000c4f; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_6ca))));	// 47308 cmp     ax, [bp+var_6CA] ;~ 18ED:0C4F
cs=0x18ed;eip=0x000c53; 	R(JA(loc_28108));	// 47309 ja      short loc_28108 ;~ 18ED:0C53
cs=0x18ed;eip=0x000c55; 	R(JMP(loc_281b6));	// 47310 jmp     loc_281B6 ;~ 18ED:0C55
loc_28108:
	// 7651 
cs=0x18ed;eip=0x000c58; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6ca))));	// 47314 mov     ax, [bp+var_6CA] ;~ 18ED:0C58
cs=0x18ed;eip=0x000c5c; 	T(MOV(cx, ax));	// 47315 mov     cx, ax ;~ 18ED:0C5C
cs=0x18ed;eip=0x000c5e; 	T(SHL(ax, 1));	// 47316 shl     ax, 1 ;~ 18ED:0C5E
cs=0x18ed;eip=0x000c60; 	T(ADD(ax, cx));	// 47317 add     ax, cx ;~ 18ED:0C60
cs=0x18ed;eip=0x000c62; 	T(SHL(ax, 1));	// 47318 shl     ax, 1 ;~ 18ED:0C62
cs=0x18ed;eip=0x000c64; 	T(SHL(ax, 1));	// 47319 shl     ax, 1 ;~ 18ED:0C64
cs=0x18ed;eip=0x000c66; 	T(ADD(ax, cx));	// 47320 add     ax, cx ;~ 18ED:0C66
cs=0x18ed;eip=0x000c68; 	T(ADD(ax, bp));	// 47321 add     ax, bp ;~ 18ED:0C68
cs=0x18ed;eip=0x000c6a; 	T(SUB(ax, 0x698));	// 47322 sub     ax, 698h ;~ 18ED:0C6A
cs=0x18ed;eip=0x000c6d; 	X(PUSH(ax));	// 47323 push    ax ;~ 18ED:0C6D
cs=0x18ed;eip=0x000c6e; 	T(MOV(ax, si));	// 47324 mov     ax, si ;~ 18ED:0C6E
cs=0x18ed;eip=0x000c70; 	T(MOV(cx, ax));	// 47325 mov     cx, ax ;~ 18ED:0C70
cs=0x18ed;eip=0x000c72; 	T(SHL(ax, 1));	// 47326 shl     ax, 1 ;~ 18ED:0C72
cs=0x18ed;eip=0x000c74; 	T(ADD(ax, cx));	// 47327 add     ax, cx ;~ 18ED:0C74
cs=0x18ed;eip=0x000c76; 	T(SHL(ax, 1));	// 47328 shl     ax, 1 ;~ 18ED:0C76
cs=0x18ed;eip=0x000c78; 	T(SHL(ax, 1));	// 47329 shl     ax, 1 ;~ 18ED:0C78
cs=0x18ed;eip=0x000c7a; 	T(ADD(ax, cx));	// 47330 add     ax, cx ;~ 18ED:0C7A
cs=0x18ed;eip=0x000c7c; 	T(ADD(ax, bp));	// 47331 add     ax, bp ;~ 18ED:0C7C
cs=0x18ed;eip=0x000c7e; 	T(SUB(ax, 0x698));	// 47332 sub     ax, 698h ;~ 18ED:0C7E
cs=0x18ed;eip=0x000c81; 	X(PUSH(ax));	// 47333 push    ax              ; char * ;~ 18ED:0C81
cs=0x18ed;eip=0x000c82; 	R(CALLF(_strcmp,0));	// 47334 call    _strcmp ;~ 18ED:0C82
cs=0x18ed;eip=0x000c87; 	T(ADD(sp, 4));	// 47335 add     sp, 4 ;~ 18ED:0C87
cs=0x18ed;eip=0x000c8a; 	T(OR(ax, ax));	// 47336 or      ax, ax ;~ 18ED:0C8A
cs=0x18ed;eip=0x000c8c; 	R(JLE(loc_280f6));	// 47337 jle     short loc_280F6 ;~ 18ED:0C8C
cs=0x18ed;eip=0x000c8e; 	T(MOV(ax, si));	// 47338 mov     ax, si ;~ 18ED:0C8E
cs=0x18ed;eip=0x000c90; 	T(MOV(cx, ax));	// 47339 mov     cx, ax ;~ 18ED:0C90
cs=0x18ed;eip=0x000c92; 	T(SHL(ax, 1));	// 47340 shl     ax, 1 ;~ 18ED:0C92
cs=0x18ed;eip=0x000c94; 	T(ADD(ax, cx));	// 47341 add     ax, cx ;~ 18ED:0C94
cs=0x18ed;eip=0x000c96; 	T(SHL(ax, 1));	// 47342 shl     ax, 1 ;~ 18ED:0C96
cs=0x18ed;eip=0x000c98; 	T(SHL(ax, 1));	// 47343 shl     ax, 1 ;~ 18ED:0C98
cs=0x18ed;eip=0x000c9a; 	T(ADD(ax, cx));	// 47344 add     ax, cx ;~ 18ED:0C9A
cs=0x18ed;eip=0x000c9c; 	T(ADD(ax, bp));	// 47345 add     ax, bp ;~ 18ED:0C9C
cs=0x18ed;eip=0x000c9e; 	T(SUB(ax, 0x698));	// 47346 sub     ax, 698h ;~ 18ED:0C9E
cs=0x18ed;eip=0x000ca1; 	X(PUSH(ax));	// 47347 push    ax ;~ 18ED:0CA1
cs=0x18ed;eip=0x000ca2; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 47348 mov     ax, offset resID_byte1 ;~ 18ED:0CA2
cs=0x18ed;eip=0x000ca5; 	X(PUSH(ax));	// 47349 push    ax              ; char * ;~ 18ED:0CA5
cs=0x18ed;eip=0x000ca6; 	R(CALLF(_strcpy,0));	// 47350 call    _strcpy ;~ 18ED:0CA6
cs=0x18ed;eip=0x000cab; 	T(ADD(sp, 4));	// 47351 add     sp, 4 ;~ 18ED:0CAB
cs=0x18ed;eip=0x000cae; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6ca))));	// 47352 mov     ax, [bp+var_6CA] ;~ 18ED:0CAE
cs=0x18ed;eip=0x000cb2; 	T(MOV(cx, ax));	// 47353 mov     cx, ax ;~ 18ED:0CB2
cs=0x18ed;eip=0x000cb4; 	T(SHL(ax, 1));	// 47354 shl     ax, 1 ;~ 18ED:0CB4
cs=0x18ed;eip=0x000cb6; 	T(ADD(ax, cx));	// 47355 add     ax, cx ;~ 18ED:0CB6
cs=0x18ed;eip=0x000cb8; 	T(SHL(ax, 1));	// 47356 shl     ax, 1 ;~ 18ED:0CB8
cs=0x18ed;eip=0x000cba; 	T(SHL(ax, 1));	// 47357 shl     ax, 1 ;~ 18ED:0CBA
cs=0x18ed;eip=0x000cbc; 	T(ADD(ax, cx));	// 47358 add     ax, cx ;~ 18ED:0CBC
cs=0x18ed;eip=0x000cbe; 	T(ADD(ax, bp));	// 47359 add     ax, bp ;~ 18ED:0CBE
cs=0x18ed;eip=0x000cc0; 	T(SUB(ax, 0x698));	// 47360 sub     ax, 698h ;~ 18ED:0CC0
cs=0x18ed;eip=0x000cc3; 	X(PUSH(ax));	// 47361 push    ax ;~ 18ED:0CC3
cs=0x18ed;eip=0x000cc4; 	T(MOV(ax, si));	// 47362 mov     ax, si ;~ 18ED:0CC4
cs=0x18ed;eip=0x000cc6; 	T(MOV(cx, ax));	// 47363 mov     cx, ax ;~ 18ED:0CC6
cs=0x18ed;eip=0x000cc8; 	T(SHL(ax, 1));	// 47364 shl     ax, 1 ;~ 18ED:0CC8
cs=0x18ed;eip=0x000cca; 	T(ADD(ax, cx));	// 47365 add     ax, cx ;~ 18ED:0CCA
cs=0x18ed;eip=0x000ccc; 	T(SHL(ax, 1));	// 47366 shl     ax, 1 ;~ 18ED:0CCC
cs=0x18ed;eip=0x000cce; 	T(SHL(ax, 1));	// 47367 shl     ax, 1 ;~ 18ED:0CCE
cs=0x18ed;eip=0x000cd0; 	T(ADD(ax, cx));	// 47368 add     ax, cx ;~ 18ED:0CD0
cs=0x18ed;eip=0x000cd2; 	T(ADD(ax, bp));	// 47369 add     ax, bp ;~ 18ED:0CD2
cs=0x18ed;eip=0x000cd4; 	T(SUB(ax, 0x698));	// 47370 sub     ax, 698h ;~ 18ED:0CD4
cs=0x18ed;eip=0x000cd7; 	X(PUSH(ax));	// 47371 push    ax              ; char * ;~ 18ED:0CD7
cs=0x18ed;eip=0x000cd8; 	R(CALLF(_strcpy,0));	// 47372 call    _strcpy ;~ 18ED:0CD8
cs=0x18ed;eip=0x000cdd; 	T(ADD(sp, 4));	// 47373 add     sp, 4 ;~ 18ED:0CDD
cs=0x18ed;eip=0x000ce0; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 47374 mov     ax, offset resID_byte1 ;~ 18ED:0CE0
cs=0x18ed;eip=0x000ce3; 	X(PUSH(ax));	// 47375 push    ax ;~ 18ED:0CE3
cs=0x18ed;eip=0x000ce4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6ca))));	// 47376 mov     ax, [bp+var_6CA] ;~ 18ED:0CE4
cs=0x18ed;eip=0x000ce8; 	T(MOV(cx, ax));	// 47377 mov     cx, ax ;~ 18ED:0CE8
cs=0x18ed;eip=0x000cea; 	T(SHL(ax, 1));	// 47378 shl     ax, 1 ;~ 18ED:0CEA
cs=0x18ed;eip=0x000cec; 	T(ADD(ax, cx));	// 47379 add     ax, cx ;~ 18ED:0CEC
cs=0x18ed;eip=0x000cee; 	T(SHL(ax, 1));	// 47380 shl     ax, 1 ;~ 18ED:0CEE
cs=0x18ed;eip=0x000cf0; 	T(SHL(ax, 1));	// 47381 shl     ax, 1 ;~ 18ED:0CF0
cs=0x18ed;eip=0x000cf2; 	T(ADD(ax, cx));	// 47382 add     ax, cx ;~ 18ED:0CF2
cs=0x18ed;eip=0x000cf4; 	T(ADD(ax, bp));	// 47383 add     ax, bp ;~ 18ED:0CF4
cs=0x18ed;eip=0x000cf6; 	T(SUB(ax, 0x698));	// 47384 sub     ax, 698h ;~ 18ED:0CF6
cs=0x18ed;eip=0x000cf9; 	X(PUSH(ax));	// 47385 push    ax              ; char * ;~ 18ED:0CF9
cs=0x18ed;eip=0x000cfa; 	R(CALLF(_strcpy,0));	// 47386 call    _strcpy ;~ 18ED:0CFA
cs=0x18ed;eip=0x000cff; 	T(ADD(sp, 4));	// 47387 add     sp, 4 ;~ 18ED:0CFF
cs=0x18ed;eip=0x000d02; 	R(JMP(loc_280f6));	// 47388 jmp     loc_280F6 ;~ 18ED:0D02
loc_281b6:
	// 7652 
cs=0x18ed;eip=0x000d06; 	T(INC(si));	// 47393 inc     si ;~ 18ED:0D06
loc_281b7:
	// 7653 
cs=0x18ed;eip=0x000d07; 	T(MOV(al, *(raddr(ss,bp+var_714))));	// 47396 mov     al, [bp+var_714] ;~ 18ED:0D07
cs=0x18ed;eip=0x000d0b; 	T(CBW);	// 47397 cbw ;~ 18ED:0D0B
cs=0x18ed;eip=0x000d0c; 	T(DEC(ax));	// 47398 dec     ax ;~ 18ED:0D0C
cs=0x18ed;eip=0x000d0d; 	T(CMP(ax, si));	// 47399 cmp     ax, si ;~ 18ED:0D0D
cs=0x18ed;eip=0x000d0f; 	R(JBE(loc_281cc));	// 47400 jbe     short loc_281CC ;~ 18ED:0D0F
cs=0x18ed;eip=0x000d11; 	T(ax = si+1);	// 47401 lea     ax, [si+1] ;~ 18ED:0D11
cs=0x18ed;eip=0x000d14; 	X(MOV(*(dw*)(raddr(ss,bp+var_6ca)), ax));	// 47402 mov     [bp+var_6CA], ax ;~ 18ED:0D14
cs=0x18ed;eip=0x000d18; 	R(JMP(loc_280fa));	// 47403 jmp     loc_280FA ;~ 18ED:0D18
loc_281cc:
	// 7654 
cs=0x18ed;eip=0x000d1c; 	T(CMP(*(raddr(ss,bp+var_714)), 7));	// 47409 cmp     [bp+var_714], 7 ;~ 18ED:0D1C
cs=0x18ed;eip=0x000d21; 	R(JLE(loc_2824d));	// 47410 jle     short loc_2824D ;~ 18ED:0D21
cs=0x18ed;eip=0x000d23; 	T(MOV(ax, offset(dseg,alsu)));	// 47411 mov     ax, offset aLsu ; "lsu" ;~ 18ED:0D23
cs=0x18ed;eip=0x000d26; 	X(PUSH(ax));	// 47412 push    ax ;~ 18ED:0D26
cs=0x18ed;eip=0x000d27; 	X(PUSH(word_44cee));	// 47413 push    word_44CEE ;~ 18ED:0D27
cs=0x18ed;eip=0x000d2b; 	X(PUSH(mainresptr));	// 47414 push    mainresptr ;~ 18ED:0D2B
cs=0x18ed;eip=0x000d2f; 	X(PUSH(cs));	// 47415 push    cs ;~ 18ED:0D2F
cs=0x18ed;eip=0x000d30; 	R(CALL(locate_text_res,0));	// 47416 call    near ptr locate_text_res ;~ 18ED:0D30
cs=0x18ed;eip=0x000d33; 	T(ADD(sp, 6));	// 47417 add     sp, 6 ;~ 18ED:0D33
cs=0x18ed;eip=0x000d36; 	X(PUSH(dx));	// 47418 push    dx ;~ 18ED:0D36
cs=0x18ed;eip=0x000d37; 	X(PUSH(ax));	// 47419 push    ax ;~ 18ED:0D37
cs=0x18ed;eip=0x000d38; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 47420 mov     ax, offset resID_byte1 ;~ 18ED:0D38
cs=0x18ed;eip=0x000d3b; 	X(PUSH(ax));	// 47421 push    ax ;~ 18ED:0D3B
cs=0x18ed;eip=0x000d3c; 	X(PUSH(cs));	// 47422 push    cs ;~ 18ED:0D3C
cs=0x18ed;eip=0x000d3d; 	R(CALL(copy_string,0));	// 47423 call    near ptr copy_string ;~ 18ED:0D3D
cs=0x18ed;eip=0x000d40; 	T(ADD(sp, 6));	// 47424 add     sp, 6 ;~ 18ED:0D40
cs=0x18ed;eip=0x000d43; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6e0))));	// 47425 push    [bp+var_6E0] ;~ 18ED:0D43
cs=0x18ed;eip=0x000d47; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 47426 mov     ax, offset resID_byte1 ;~ 18ED:0D47
cs=0x18ed;eip=0x000d4a; 	X(PUSH(ax));	// 47427 push    ax ;~ 18ED:0D4A
cs=0x18ed;eip=0x000d4b; 	X(PUSH(cs));	// 47428 push    cs ;~ 18ED:0D4B
cs=0x18ed;eip=0x000d4c; 	R(CALL(font_op2_alt,0));	// 47429 call    near ptr font_op2_alt ;~ 18ED:0D4C
cs=0x18ed;eip=0x000d4f; 	T(ADD(sp, 2));	// 47430 add     sp, 2 ;~ 18ED:0D4F
cs=0x18ed;eip=0x000d52; 	X(PUSH(ax));	// 47431 push    ax ;~ 18ED:0D52
cs=0x18ed;eip=0x000d53; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 47432 mov     ax, offset resID_byte1 ;~ 18ED:0D53
cs=0x18ed;eip=0x000d56; 	X(PUSH(ax));	// 47433 push    ax ;~ 18ED:0D56
cs=0x18ed;eip=0x000d57; 	R(CALLF(sub_345bc,0));	// 47434 call    sub_345BC ;~ 18ED:0D57
cs=0x18ed;eip=0x000d5c; 	T(ADD(sp, 6));	// 47435 add     sp, 6 ;~ 18ED:0D5C
cs=0x18ed;eip=0x000d5f; 	T(MOV(ax, offset(dseg,alsd)));	// 47436 mov     ax, offset aLsd ; "lsd" ;~ 18ED:0D5F
cs=0x18ed;eip=0x000d62; 	X(PUSH(ax));	// 47437 push    ax ;~ 18ED:0D62
cs=0x18ed;eip=0x000d63; 	X(PUSH(word_44cee));	// 47438 push    word_44CEE ;~ 18ED:0D63
cs=0x18ed;eip=0x000d67; 	X(PUSH(mainresptr));	// 47439 push    mainresptr ;~ 18ED:0D67
cs=0x18ed;eip=0x000d6b; 	X(PUSH(cs));	// 47440 push    cs ;~ 18ED:0D6B
cs=0x18ed;eip=0x000d6c; 	R(CALL(locate_text_res,0));	// 47441 call    near ptr locate_text_res ;~ 18ED:0D6C
cs=0x18ed;eip=0x000d6f; 	T(ADD(sp, 6));	// 47442 add     sp, 6 ;~ 18ED:0D6F
cs=0x18ed;eip=0x000d72; 	X(PUSH(dx));	// 47443 push    dx ;~ 18ED:0D72
cs=0x18ed;eip=0x000d73; 	X(PUSH(ax));	// 47444 push    ax ;~ 18ED:0D73
cs=0x18ed;eip=0x000d74; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 47445 mov     ax, offset resID_byte1 ;~ 18ED:0D74
cs=0x18ed;eip=0x000d77; 	X(PUSH(ax));	// 47446 push    ax ;~ 18ED:0D77
cs=0x18ed;eip=0x000d78; 	X(PUSH(cs));	// 47447 push    cs ;~ 18ED:0D78
cs=0x18ed;eip=0x000d79; 	R(CALL(copy_string,0));	// 47448 call    near ptr copy_string ;~ 18ED:0D79
cs=0x18ed;eip=0x000d7c; 	T(ADD(sp, 6));	// 47449 add     sp, 6 ;~ 18ED:0D7C
cs=0x18ed;eip=0x000d7f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6d0))));	// 47450 mov     ax, [bp+var_6D0] ;~ 18ED:0D7F
cs=0x18ed;eip=0x000d83; 	T(DEC(ax));	// 47451 dec     ax ;~ 18ED:0D83
cs=0x18ed;eip=0x000d84; 	X(PUSH(ax));	// 47452 push    ax ;~ 18ED:0D84
cs=0x18ed;eip=0x000d85; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 47453 mov     ax, offset resID_byte1 ;~ 18ED:0D85
cs=0x18ed;eip=0x000d88; 	X(PUSH(ax));	// 47454 push    ax ;~ 18ED:0D88
cs=0x18ed;eip=0x000d89; 	X(PUSH(cs));	// 47455 push    cs ;~ 18ED:0D89
cs=0x18ed;eip=0x000d8a; 	R(CALL(font_op2_alt,0));	// 47456 call    near ptr font_op2_alt ;~ 18ED:0D8A
cs=0x18ed;eip=0x000d8d; 	T(ADD(sp, 2));	// 47457 add     sp, 2 ;~ 18ED:0D8D
cs=0x18ed;eip=0x000d90; 	X(PUSH(ax));	// 47458 push    ax ;~ 18ED:0D90
cs=0x18ed;eip=0x000d91; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 47459 mov     ax, offset resID_byte1 ;~ 18ED:0D91
cs=0x18ed;eip=0x000d94; 	X(PUSH(ax));	// 47460 push    ax ;~ 18ED:0D94
cs=0x18ed;eip=0x000d95; 	R(CALLF(sub_345bc,0));	// 47461 call    sub_345BC ;~ 18ED:0D95
cs=0x18ed;eip=0x000d9a; 	T(ADD(sp, 6));	// 47462 add     sp, 6 ;~ 18ED:0D9A
loc_2824d:
	// 7655 
cs=0x18ed;eip=0x000d9d; 	X(MOV(*(raddr(ss,bp+var_716)), 0));	// 47465 mov     [bp+var_716], 0 ;~ 18ED:0D9D
cs=0x18ed;eip=0x000da2; 	X(MOV(*(raddr(ss,bp+var_69a)), 0));	// 47466 mov     [bp+var_69A], 0 ;~ 18ED:0DA2
cs=0x18ed;eip=0x000da7; 	X(MOV(*(raddr(ss,bp+var_6e4)), 0x0FF));	// 47467 mov     [bp+var_6E4], 0FFh ;~ 18ED:0DA7
cs=0x18ed;eip=0x000dac; 	X(MOV(*(raddr(ss,bp+var_718)), 0x0FF));	// 47468 mov     [bp+var_718], 0FFh ;~ 18ED:0DAC
cs=0x18ed;eip=0x000db1; 	X(PUSH(cs));	// 47469 push    cs ;~ 18ED:0DB1
cs=0x18ed;eip=0x000db2; 	R(CALL(timer_get_delta_alt,0));	// 47470 call    near ptr timer_get_delta_alt ;~ 18ED:0DB2
cs=0x18ed;eip=0x000db5; 	X(MOV(*(raddr(ss,bp+var_2)), 0));	// 47471 mov     [bp+var_2], 0 ;~ 18ED:0DB5
loc_28269:
	// 7656 
cs=0x18ed;eip=0x000db9; 	T(MOV(al, *(raddr(ss,bp+var_6e4))));	// 47474 mov     al, [bp+var_6E4] ;~ 18ED:0DB9
cs=0x18ed;eip=0x000dbd; 	T(CMP(*(raddr(ss,bp+var_716)), al));	// 47475 cmp     [bp+var_716], al ;~ 18ED:0DBD
cs=0x18ed;eip=0x000dc1; 	R(JNZ(loc_28280));	// 47476 jnz     short loc_28280 ;~ 18ED:0DC1
cs=0x18ed;eip=0x000dc3; 	T(MOV(al, *(raddr(ss,bp+var_718))));	// 47477 mov     al, [bp+var_718] ;~ 18ED:0DC3
cs=0x18ed;eip=0x000dc7; 	T(CMP(*(raddr(ss,bp+var_69a)), al));	// 47478 cmp     [bp+var_69A], al ;~ 18ED:0DC7
cs=0x18ed;eip=0x000dcb; 	R(JNZ(loc_28280));	// 47479 jnz     short loc_28280 ;~ 18ED:0DCB
cs=0x18ed;eip=0x000dcd; 	R(JMP(loc_28370));	// 47480 jmp     loc_28370 ;~ 18ED:0DCD
loc_28280:
	// 7657 
cs=0x18ed;eip=0x000dd0; 	T(MOV(al, *(raddr(ss,bp+var_716))));	// 47485 mov     al, [bp+var_716] ;~ 18ED:0DD0
cs=0x18ed;eip=0x000dd4; 	X(MOV(*(raddr(ss,bp+var_6e4)), al));	// 47486 mov     [bp+var_6E4], al ;~ 18ED:0DD4
cs=0x18ed;eip=0x000dd8; 	T(MOV(al, *(raddr(ss,bp+var_69a))));	// 47487 mov     al, [bp+var_69A] ;~ 18ED:0DD8
cs=0x18ed;eip=0x000ddc; 	X(MOV(*(raddr(ss,bp+var_718)), al));	// 47488 mov     [bp+var_718], al ;~ 18ED:0DDC
cs=0x18ed;eip=0x000de0; 	X(PUSH(cs));	// 47489 push    cs ;~ 18ED:0DE0
cs=0x18ed;eip=0x000de1; 	R(CALL(mouse_draw_opaque_check,0));	// 47490 call    near ptr mouse_draw_opaque_check ;~ 18ED:0DE1
cs=0x18ed;eip=0x000de4; 	T(SUB(si, si));	// 47491 sub     si, si ;~ 18ED:0DE4
cs=0x18ed;eip=0x000de6; 	R(JMP(loc_28346));	// 47492 jmp     loc_28346 ;~ 18ED:0DE6
loc_2829a:
	// 7658 
cs=0x18ed;eip=0x000dea; 	X(PUSH(word_3eb90));	// 47497 push    word_3EB90 ;~ 18ED:0DEA
cs=0x18ed;eip=0x000dee; 	X(PUSH(dialog_fnt_colour));	// 47498 push    dialog_fnt_colour ;~ 18ED:0DEE
loc_282a2:
	// 7659 
cs=0x18ed;eip=0x000df2; 	R(CALLF(font_set_unk,0));	// 47501 call    font_set_unk ;~ 18ED:0DF2
cs=0x18ed;eip=0x000df7; 	T(ADD(sp, 4));	// 47502 add     sp, 4 ;~ 18ED:0DF7
cs=0x18ed;eip=0x000dfa; 	T(MOV(al, *(raddr(ss,bp+var_69a))));	// 47503 mov     al, [bp+var_69A] ;~ 18ED:0DFA
cs=0x18ed;eip=0x000dfe; 	T(CBW);	// 47504 cbw ;~ 18ED:0DFE
cs=0x18ed;eip=0x000dff; 	T(ADD(ax, si));	// 47505 add     ax, si ;~ 18ED:0DFF
cs=0x18ed;eip=0x000e01; 	X(MOV(*(dw*)(raddr(ss,bp+var_71c)), ax));	// 47506 mov     [bp+var_71C], ax ;~ 18ED:0E01
cs=0x18ed;eip=0x000e05; 	T(MOV(al, *(raddr(ss,bp+var_714))));	// 47507 mov     al, [bp+var_714] ;~ 18ED:0E05
cs=0x18ed;eip=0x000e09; 	T(CBW);	// 47508 cbw ;~ 18ED:0E09
cs=0x18ed;eip=0x000e0a; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_71c))));	// 47509 cmp     ax, [bp+var_71C] ;~ 18ED:0E0A
cs=0x18ed;eip=0x000e0e; 	R(JBE(loc_282f2));	// 47510 jbe     short loc_282F2 ;~ 18ED:0E0E
cs=0x18ed;eip=0x000e10; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_71c))));	// 47511 mov     ax, [bp+var_71C] ;~ 18ED:0E10
cs=0x18ed;eip=0x000e14; 	T(MOV(cx, ax));	// 47512 mov     cx, ax ;~ 18ED:0E14
cs=0x18ed;eip=0x000e16; 	T(SHL(ax, 1));	// 47513 shl     ax, 1 ;~ 18ED:0E16
cs=0x18ed;eip=0x000e18; 	T(ADD(ax, cx));	// 47514 add     ax, cx ;~ 18ED:0E18
cs=0x18ed;eip=0x000e1a; 	T(SHL(ax, 1));	// 47515 shl     ax, 1 ;~ 18ED:0E1A
cs=0x18ed;eip=0x000e1c; 	T(SHL(ax, 1));	// 47516 shl     ax, 1 ;~ 18ED:0E1C
cs=0x18ed;eip=0x000e1e; 	T(ADD(ax, cx));	// 47517 add     ax, cx ;~ 18ED:0E1E
cs=0x18ed;eip=0x000e20; 	T(ADD(ax, bp));	// 47518 add     ax, bp ;~ 18ED:0E20
cs=0x18ed;eip=0x000e22; 	T(SUB(ax, 0x698));	// 47519 sub     ax, 698h ;~ 18ED:0E22
cs=0x18ed;eip=0x000e25; 	X(PUSH(ax));	// 47520 push    ax ;~ 18ED:0E25
cs=0x18ed;eip=0x000e26; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 47521 mov     ax, offset resID_byte1 ;~ 18ED:0E26
cs=0x18ed;eip=0x000e29; 	X(PUSH(ax));	// 47522 push    ax              ; char * ;~ 18ED:0E29
cs=0x18ed;eip=0x000e2a; 	R(CALLF(_strcpy,0));	// 47523 call    _strcpy ;~ 18ED:0E2A
cs=0x18ed;eip=0x000e2f; 	T(ADD(sp, 4));	// 47524 add     sp, 4 ;~ 18ED:0E2F
cs=0x18ed;eip=0x000e32; 	T(MOV(bx, si));	// 47525 mov     bx, si ;~ 18ED:0E32
cs=0x18ed;eip=0x000e34; 	T(SHL(bx, 1));	// 47526 shl     bx, 1 ;~ 18ED:0E34
cs=0x18ed;eip=0x000e36; 	T(ADD(bx, bp));	// 47527 add     bx, bp ;~ 18ED:0E36
cs=0x18ed;eip=0x000e38; 	X(PUSH(*(dw*)(raddr(ds,bx-0x6DE))));	// 47528 push    word ptr [bx-6DEh] ;~ 18ED:0E38
cs=0x18ed;eip=0x000e3c; 	X(PUSH(di));	// 47529 push    di ;~ 18ED:0E3C
cs=0x18ed;eip=0x000e3d; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 47530 mov     ax, offset resID_byte1 ;~ 18ED:0E3D
cs=0x18ed;eip=0x000e40; 	R(JMP(loc_28300));	// 47531 jmp     short loc_28300 ;~ 18ED:0E40
loc_282f2:
	// 7660 
cs=0x18ed;eip=0x000e42; 	T(MOV(bx, si));	// 47535 mov     bx, si ;~ 18ED:0E42
cs=0x18ed;eip=0x000e44; 	T(SHL(bx, 1));	// 47536 shl     bx, 1 ;~ 18ED:0E44
cs=0x18ed;eip=0x000e46; 	T(ADD(bx, bp));	// 47537 add     bx, bp ;~ 18ED:0E46
cs=0x18ed;eip=0x000e48; 	X(PUSH(*(dw*)(raddr(ds,bx-0x6DE))));	// 47538 push    word ptr [bx-6DEh] ;~ 18ED:0E48
cs=0x18ed;eip=0x000e4c; 	X(PUSH(di));	// 47539 push    di ;~ 18ED:0E4C
cs=0x18ed;eip=0x000e4d; 	T(MOV(ax, offset(dseg,asc_3eba0)));	// 47540 mov     ax, offset asc_3EBA0 ; "        " ;~ 18ED:0E4D
loc_28300:
	// 7661 
cs=0x18ed;eip=0x000e50; 	X(PUSH(ax));	// 47543 push    ax ;~ 18ED:0E50
cs=0x18ed;eip=0x000e51; 	R(CALLF(sub_345bc,0));	// 47544 call    sub_345BC ;~ 18ED:0E51
cs=0x18ed;eip=0x000e56; 	T(ADD(sp, 6));	// 47545 add     sp, 6 ;~ 18ED:0E56
cs=0x18ed;eip=0x000e59; 	T(MOV(ax, offset(dseg,resid_byte1)));	// 47546 mov     ax, offset resID_byte1 ;~ 18ED:0E59
cs=0x18ed;eip=0x000e5c; 	X(PUSH(ax));	// 47547 push    ax ;~ 18ED:0E5C
cs=0x18ed;eip=0x000e5d; 	R(CALLF(font_op2,0));	// 47548 call    font_op2 ;~ 18ED:0E5D
cs=0x18ed;eip=0x000e62; 	T(ADD(sp, 2));	// 47549 add     sp, 2 ;~ 18ED:0E62
cs=0x18ed;eip=0x000e65; 	X(MOV(*(dw*)(raddr(ss,bp+var_71a)), ax));	// 47550 mov     [bp+var_71A], ax ;~ 18ED:0E65
cs=0x18ed;eip=0x000e69; 	X(PUSH(word_3eb90));	// 47551 push    word_3EB90 ;~ 18ED:0E69
cs=0x18ed;eip=0x000e6d; 	T(MOV(ax, 8));	// 47552 mov     ax, 8 ;~ 18ED:0E6D
cs=0x18ed;eip=0x000e70; 	X(PUSH(ax));	// 47553 push    ax ;~ 18ED:0E70
cs=0x18ed;eip=0x000e71; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6e6))));	// 47554 mov     ax, [bp+var_6E6] ;~ 18ED:0E71
cs=0x18ed;eip=0x000e75; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_71a))));	// 47555 sub     ax, [bp+var_71A] ;~ 18ED:0E75
cs=0x18ed;eip=0x000e79; 	T(SUB(ax, di));	// 47556 sub     ax, di ;~ 18ED:0E79
cs=0x18ed;eip=0x000e7b; 	X(PUSH(ax));	// 47557 push    ax ;~ 18ED:0E7B
cs=0x18ed;eip=0x000e7c; 	T(MOV(bx, si));	// 47558 mov     bx, si ;~ 18ED:0E7C
cs=0x18ed;eip=0x000e7e; 	T(SHL(bx, 1));	// 47559 shl     bx, 1 ;~ 18ED:0E7E
cs=0x18ed;eip=0x000e80; 	T(ADD(bx, bp));	// 47560 add     bx, bp ;~ 18ED:0E80
cs=0x18ed;eip=0x000e82; 	X(PUSH(*(dw*)(raddr(ds,bx-0x6DE))));	// 47561 push    word ptr [bx-6DEh] ;~ 18ED:0E82
cs=0x18ed;eip=0x000e86; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_71a))));	// 47562 mov     ax, [bp+var_71A] ;~ 18ED:0E86
cs=0x18ed;eip=0x000e8a; 	T(ADD(ax, di));	// 47563 add     ax, di ;~ 18ED:0E8A
cs=0x18ed;eip=0x000e8c; 	X(PUSH(ax));	// 47564 push    ax ;~ 18ED:0E8C
cs=0x18ed;eip=0x000e8d; 	R(CALLF(sprite_1_unk,0));	// 47565 call    sprite_1_unk ;~ 18ED:0E8D
cs=0x18ed;eip=0x000e92; 	T(ADD(sp, 0x0A));	// 47566 add     sp, 0Ah ;~ 18ED:0E92
cs=0x18ed;eip=0x000e95; 	T(INC(si));	// 47567 inc     si ;~ 18ED:0E95
loc_28346:
	// 7662 
cs=0x18ed;eip=0x000e96; 	T(CMP(si, 7));	// 47570 cmp     si, 7 ;~ 18ED:0E96
cs=0x18ed;eip=0x000e99; 	R(JNC(loc_2836c));	// 47571 jnb     short loc_2836C ;~ 18ED:0E99
cs=0x18ed;eip=0x000e9b; 	T(MOV(al, *(raddr(ss,bp+var_69a))));	// 47572 mov     al, [bp+var_69A] ;~ 18ED:0E9B
cs=0x18ed;eip=0x000e9f; 	T(CBW);	// 47573 cbw ;~ 18ED:0E9F
cs=0x18ed;eip=0x000ea0; 	T(ADD(ax, si));	// 47574 add     ax, si ;~ 18ED:0EA0
cs=0x18ed;eip=0x000ea2; 	T(MOV(cx, ax));	// 47575 mov     cx, ax ;~ 18ED:0EA2
cs=0x18ed;eip=0x000ea4; 	T(MOV(al, *(raddr(ss,bp+var_716))));	// 47576 mov     al, [bp+var_716] ;~ 18ED:0EA4
cs=0x18ed;eip=0x000ea8; 	T(CBW);	// 47577 cbw ;~ 18ED:0EA8
cs=0x18ed;eip=0x000ea9; 	T(CMP(cx, ax));	// 47578 cmp     cx, ax ;~ 18ED:0EA9
cs=0x18ed;eip=0x000eab; 	R(JZ(loc_28360));	// 47579 jz      short loc_28360 ;~ 18ED:0EAB
cs=0x18ed;eip=0x000ead; 	R(JMP(loc_2829a));	// 47580 jmp     loc_2829A ;~ 18ED:0EAD
loc_28360:
	// 7663 
cs=0x18ed;eip=0x000eb0; 	X(PUSH(dialog_fnt_colour));	// 47584 push    dialog_fnt_colour ;~ 18ED:0EB0
cs=0x18ed;eip=0x000eb4; 	X(PUSH(word_3eb90));	// 47585 push    word_3EB90 ;~ 18ED:0EB4
cs=0x18ed;eip=0x000eb8; 	R(JMP(loc_282a2));	// 47586 jmp     loc_282A2 ;~ 18ED:0EB8
loc_2836c:
	// 7664 
cs=0x18ed;eip=0x000ebc; 	X(PUSH(cs));	// 47591 push    cs ;~ 18ED:0EBC
cs=0x18ed;eip=0x000ebd; 	R(CALL(mouse_draw_transparent_check,0));	// 47592 call    near ptr mouse_draw_transparent_check ;~ 18ED:0EBD
loc_28370:
	// 7665 
cs=0x18ed;eip=0x000ec0; 	X(PUSH(cs));	// 47595 push    cs ;~ 18ED:0EC0
cs=0x18ed;eip=0x000ec1; 	R(CALL(timer_get_delta_alt,0));	// 47596 call    near ptr timer_get_delta_alt ;~ 18ED:0EC1
cs=0x18ed;eip=0x000ec4; 	X(PUSH(ax));	// 47597 push    ax ;~ 18ED:0EC4
cs=0x18ed;eip=0x000ec5; 	X(PUSH(cs));	// 47598 push    cs ;~ 18ED:0EC5
cs=0x18ed;eip=0x000ec6; 	R(CALL(input_checking,0));	// 47599 call    near ptr input_checking ;~ 18ED:0EC6
cs=0x18ed;eip=0x000ec9; 	T(ADD(sp, 2));	// 47600 add     sp, 2 ;~ 18ED:0EC9
cs=0x18ed;eip=0x000ecc; 	X(MOV(*(dw*)(raddr(ss,bp+var_6cc)), ax));	// 47601 mov     [bp+var_6CC], ax ;~ 18ED:0ECC
cs=0x18ed;eip=0x000ed0; 	T(ax = bp+var_6c8);	// 47602 lea     ax, [bp+var_6C8] ;~ 18ED:0ED0
cs=0x18ed;eip=0x000ed4; 	X(PUSH(ax));	// 47603 push    ax ;~ 18ED:0ED4
cs=0x18ed;eip=0x000ed5; 	T(ax = bp+var_6e2);	// 47604 lea     ax, [bp+var_6E2] ;~ 18ED:0ED5
cs=0x18ed;eip=0x000ed9; 	X(PUSH(ax));	// 47605 push    ax ;~ 18ED:0ED9
cs=0x18ed;eip=0x000eda; 	T(ax = bp+var_6b4);	// 47606 lea     ax, [bp+var_6B4] ;~ 18ED:0EDA
cs=0x18ed;eip=0x000ede; 	X(PUSH(ax));	// 47607 push    ax ;~ 18ED:0EDE
cs=0x18ed;eip=0x000edf; 	T(ax = bp+var_16);	// 47608 lea     ax, [bp+var_16] ;~ 18ED:0EDF
cs=0x18ed;eip=0x000ee2; 	X(PUSH(ax));	// 47609 push    ax ;~ 18ED:0EE2
cs=0x18ed;eip=0x000ee3; 	T(MOV(ax, 0x0A));	// 47610 mov     ax, 0Ah ;~ 18ED:0EE3
cs=0x18ed;eip=0x000ee6; 	X(PUSH(ax));	// 47611 push    ax ;~ 18ED:0EE6
cs=0x18ed;eip=0x000ee7; 	X(PUSH(cs));	// 47612 push    cs ;~ 18ED:0EE7
cs=0x18ed;eip=0x000ee8; 	R(CALL(mouse_multi_hittest,0));	// 47613 call    near ptr mouse_multi_hittest ;~ 18ED:0EE8
cs=0x18ed;eip=0x000eeb; 	T(ADD(sp, 0x0A));	// 47614 add     sp, 0Ah ;~ 18ED:0EEB
cs=0x18ed;eip=0x000eee; 	X(MOV(*(raddr(ss,bp+var_6ea)), al));	// 47615 mov     [bp+var_6EA], al ;~ 18ED:0EEE
cs=0x18ed;eip=0x000ef2; 	T(CMP(al, 0x0FF));	// 47616 cmp     al, 0FFh ;~ 18ED:0EF2
cs=0x18ed;eip=0x000ef4; 	R(JNZ(loc_283a9));	// 47617 jnz     short loc_283A9 ;~ 18ED:0EF4
cs=0x18ed;eip=0x000ef6; 	R(JMP(loc_28452));	// 47618 jmp     loc_28452 ;~ 18ED:0EF6
loc_283a9:
	// 7666 
cs=0x18ed;eip=0x000ef9; 	T(OR(al, al));	// 47622 or      al, al ;~ 18ED:0EF9
cs=0x18ed;eip=0x000efb; 	R(JNZ(loc_283ca));	// 47623 jnz     short loc_283CA ;~ 18ED:0EFB
cs=0x18ed;eip=0x000efd; 	T(TEST(*(db*)(((db*)&mouse_butstate)), 3));	// 47624 test    byte ptr mouse_butstate, 3 ;~ 18ED:0EFD
cs=0x18ed;eip=0x000f02; 	R(JNZ(loc_283b7));	// 47625 jnz     short loc_283B7 ;~ 18ED:0F02
cs=0x18ed;eip=0x000f04; 	R(JMP(loc_28452));	// 47626 jmp     loc_28452 ;~ 18ED:0F04
loc_283b7:
	// 7667 
cs=0x18ed;eip=0x000f07; 	X(MOV(*(raddr(ss,bp+var_716)), 0));	// 47630 mov     [bp+var_716], 0 ;~ 18ED:0F07
cs=0x18ed;eip=0x000f0c; 	X(MOV(*(raddr(ss,bp+var_69a)), 0x0FF));	// 47631 mov     [bp+var_69A], 0FFh ;~ 18ED:0F0C
loc_283c1:
	// 7668 
cs=0x18ed;eip=0x000f11; 	X(MOV(*(dw*)(raddr(ss,bp+var_6cc)), 0));	// 47635 mov     [bp+var_6CC], 0 ;~ 18ED:0F11
cs=0x18ed;eip=0x000f17; 	R(JMP(loc_28452));	// 47636 jmp     loc_28452 ;~ 18ED:0F17
loc_283ca:
	// 7669 
cs=0x18ed;eip=0x000f1a; 	T(CMP(*(raddr(ss,bp+var_6ea)), 1));	// 47640 cmp     [bp+var_6EA], 1 ;~ 18ED:0F1A
cs=0x18ed;eip=0x000f1f; 	R(JNZ(loc_28402));	// 47641 jnz     short loc_28402 ;~ 18ED:0F1F
cs=0x18ed;eip=0x000f21; 	T(TEST(*(db*)(((db*)&mouse_butstate)), 3));	// 47642 test    byte ptr mouse_butstate, 3 ;~ 18ED:0F21
cs=0x18ed;eip=0x000f26; 	R(JZ(loc_28452));	// 47643 jz      short loc_28452 ;~ 18ED:0F26
cs=0x18ed;eip=0x000f28; 	T(MOV(al, *(raddr(ss,bp+var_69a))));	// 47644 mov     al, [bp+var_69A] ;~ 18ED:0F28
cs=0x18ed;eip=0x000f2c; 	T(CBW);	// 47645 cbw ;~ 18ED:0F2C
cs=0x18ed;eip=0x000f2d; 	T(MOV(cx, ax));	// 47646 mov     cx, ax ;~ 18ED:0F2D
cs=0x18ed;eip=0x000f2f; 	T(MOV(al, *(raddr(ss,bp+var_716))));	// 47647 mov     al, [bp+var_716] ;~ 18ED:0F2F
cs=0x18ed;eip=0x000f33; 	T(CBW);	// 47648 cbw ;~ 18ED:0F33
cs=0x18ed;eip=0x000f34; 	T(ADD(ax, cx));	// 47649 add     ax, cx ;~ 18ED:0F34
cs=0x18ed;eip=0x000f36; 	R(JZ(loc_283ec));	// 47650 jz      short loc_283EC ;~ 18ED:0F36
cs=0x18ed;eip=0x000f38; 	X(DEC(*(raddr(ss,bp+var_716))));	// 47651 dec     [bp+var_716] ;~ 18ED:0F38
loc_283ec:
	// 7670 
cs=0x18ed;eip=0x000f3c; 	T(MOV(al, *(raddr(ss,bp+var_69a))));	// 47654 mov     al, [bp+var_69A] ;~ 18ED:0F3C
cs=0x18ed;eip=0x000f40; 	T(CMP(*(raddr(ss,bp+var_716)), al));	// 47655 cmp     [bp+var_716], al ;~ 18ED:0F40
cs=0x18ed;eip=0x000f44; 	R(JGE(loc_283c1));	// 47656 jge     short loc_283C1 ;~ 18ED:0F44
cs=0x18ed;eip=0x000f46; 	T(MOV(al, *(raddr(ss,bp+var_716))));	// 47657 mov     al, [bp+var_716] ;~ 18ED:0F46
cs=0x18ed;eip=0x000f4a; 	X(MOV(*(raddr(ss,bp+var_69a)), al));	// 47658 mov     [bp+var_69A], al ;~ 18ED:0F4A
cs=0x18ed;eip=0x000f4e; 	R(JMP(loc_283c1));	// 47659 jmp     short loc_283C1 ;~ 18ED:0F4E
loc_28402:
	// 7671 
cs=0x18ed;eip=0x000f52; 	T(CMP(*(raddr(ss,bp+var_6ea)), 9));	// 47665 cmp     [bp+var_6EA], 9 ;~ 18ED:0F52
cs=0x18ed;eip=0x000f57; 	R(JNZ(loc_28428));	// 47666 jnz     short loc_28428 ;~ 18ED:0F57
cs=0x18ed;eip=0x000f59; 	T(TEST(*(db*)(((db*)&mouse_butstate)), 3));	// 47667 test    byte ptr mouse_butstate, 3 ;~ 18ED:0F59
cs=0x18ed;eip=0x000f5e; 	R(JZ(loc_28452));	// 47668 jz      short loc_28452 ;~ 18ED:0F5E
cs=0x18ed;eip=0x000f60; 	T(MOV(al, *(raddr(ss,bp+var_714))));	// 47669 mov     al, [bp+var_714] ;~ 18ED:0F60
cs=0x18ed;eip=0x000f64; 	T(CBW);	// 47670 cbw ;~ 18ED:0F64
cs=0x18ed;eip=0x000f65; 	T(DEC(ax));	// 47671 dec     ax ;~ 18ED:0F65
cs=0x18ed;eip=0x000f66; 	T(MOV(cx, ax));	// 47672 mov     cx, ax ;~ 18ED:0F66
cs=0x18ed;eip=0x000f68; 	T(MOV(al, *(raddr(ss,bp+var_716))));	// 47673 mov     al, [bp+var_716] ;~ 18ED:0F68
cs=0x18ed;eip=0x000f6c; 	T(CBW);	// 47674 cbw ;~ 18ED:0F6C
cs=0x18ed;eip=0x000f6d; 	T(CMP(cx, ax));	// 47675 cmp     cx, ax ;~ 18ED:0F6D
cs=0x18ed;eip=0x000f6f; 	R(JZ(loc_283c1));	// 47676 jz      short loc_283C1 ;~ 18ED:0F6F
cs=0x18ed;eip=0x000f71; 	X(INC(*(raddr(ss,bp+var_716))));	// 47677 inc     [bp+var_716] ;~ 18ED:0F71
cs=0x18ed;eip=0x000f75; 	R(JMP(loc_283c1));	// 47678 jmp     short loc_283C1 ;~ 18ED:0F75
loc_28428:
	// 7672 
cs=0x18ed;eip=0x000f78; 	T(MOV(al, *(raddr(ss,bp+var_6ea))));	// 47683 mov     al, [bp+var_6EA] ;~ 18ED:0F78
cs=0x18ed;eip=0x000f7c; 	T(CBW);	// 47684 cbw ;~ 18ED:0F7C
cs=0x18ed;eip=0x000f7d; 	T(MOV(cx, ax));	// 47685 mov     cx, ax ;~ 18ED:0F7D
cs=0x18ed;eip=0x000f7f; 	T(MOV(al, *(raddr(ss,bp+var_69a))));	// 47686 mov     al, [bp+var_69A] ;~ 18ED:0F7F
cs=0x18ed;eip=0x000f83; 	T(CBW);	// 47687 cbw ;~ 18ED:0F83
cs=0x18ed;eip=0x000f84; 	T(ADD(ax, cx));	// 47688 add     ax, cx ;~ 18ED:0F84
cs=0x18ed;eip=0x000f86; 	T(SUB(ax, 2));	// 47689 sub     ax, 2 ;~ 18ED:0F86
cs=0x18ed;eip=0x000f89; 	T(MOV(cx, ax));	// 47690 mov     cx, ax ;~ 18ED:0F89
cs=0x18ed;eip=0x000f8b; 	T(MOV(al, *(raddr(ss,bp+var_714))));	// 47691 mov     al, [bp+var_714] ;~ 18ED:0F8B
cs=0x18ed;eip=0x000f8f; 	T(CBW);	// 47692 cbw ;~ 18ED:0F8F
cs=0x18ed;eip=0x000f90; 	T(CMP(cx, ax));	// 47693 cmp     cx, ax ;~ 18ED:0F90
cs=0x18ed;eip=0x000f92; 	R(JGE(loc_28452));	// 47694 jge     short loc_28452 ;~ 18ED:0F92
cs=0x18ed;eip=0x000f94; 	T(MOV(al, *(raddr(ss,bp+var_69a))));	// 47695 mov     al, [bp+var_69A] ;~ 18ED:0F94
cs=0x18ed;eip=0x000f98; 	T(ADD(al, *(raddr(ss,bp+var_6ea))));	// 47696 add     al, [bp+var_6EA] ;~ 18ED:0F98
cs=0x18ed;eip=0x000f9c; 	T(SUB(al, 2));	// 47697 sub     al, 2 ;~ 18ED:0F9C
cs=0x18ed;eip=0x000f9e; 	X(MOV(*(raddr(ss,bp+var_716)), al));	// 47698 mov     [bp+var_716], al ;~ 18ED:0F9E
loc_28452:
	// 7673 
cs=0x18ed;eip=0x000fa2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6cc))));	// 47702 mov     ax, [bp+var_6CC] ;~ 18ED:0FA2
cs=0x18ed;eip=0x000fa6; 	T(CMP(ax, 0x0D));	// 47703 cmp     ax, 0Dh ;~ 18ED:0FA6
cs=0x18ed;eip=0x000fa9; 	R(JZ(loc_284ce));	// 47704 jz      short loc_284CE ;~ 18ED:0FA9
cs=0x18ed;eip=0x000fab; 	T(CMP(ax, 0x1B));	// 47705 cmp     ax, 1Bh ;~ 18ED:0FAB
cs=0x18ed;eip=0x000fae; 	R(JZ(loc_284d4));	// 47706 jz      short loc_284D4 ;~ 18ED:0FAE
cs=0x18ed;eip=0x000fb0; 	T(CMP(ax, 0x20));	// 47707 cmp     ax, 20h ; ' ' ;~ 18ED:0FB0
cs=0x18ed;eip=0x000fb3; 	R(JZ(loc_284ce));	// 47708 jz      short loc_284CE ;~ 18ED:0FB3
cs=0x18ed;eip=0x000fb5; 	T(CMP(ax, 0x4800));	// 47709 cmp     ax, 4800h ;~ 18ED:0FB5
cs=0x18ed;eip=0x000fb8; 	R(JZ(loc_28492));	// 47710 jz      short loc_28492 ;~ 18ED:0FB8
cs=0x18ed;eip=0x000fba; 	T(CMP(ax, 0x5000));	// 47711 cmp     ax, 5000h ;~ 18ED:0FBA
cs=0x18ed;eip=0x000fbd; 	R(JZ(loc_284b6));	// 47712 jz      short loc_284B6 ;~ 18ED:0FBD
cs=0x18ed;eip=0x000fbf; 	T(MOV(bx, ax));	// 47713 mov     bx, ax ;~ 18ED:0FBF
cs=0x18ed;eip=0x000fc1; 	T(TEST(*((g_ascii_props)+bx), 1));	// 47714 test    g_ascii_props[bx], 1 ;~ 18ED:0FC1
cs=0x18ed;eip=0x000fc6; 	R(JNZ(loc_2847f));	// 47715 jnz     short loc_2847F ;~ 18ED:0FC6
cs=0x18ed;eip=0x000fc8; 	T(TEST(*((g_ascii_props)+bx), 2));	// 47716 test    g_ascii_props[bx], 2 ;~ 18ED:0FC8
cs=0x18ed;eip=0x000fcd; 	R(JZ(loc_28496));	// 47717 jz      short loc_28496 ;~ 18ED:0FCD
loc_2847f:
	// 7674 
cs=0x18ed;eip=0x000fcf; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_6cc))));	// 47720 mov     bx, [bp+var_6CC] ;~ 18ED:0FCF
cs=0x18ed;eip=0x000fd3; 	T(TEST(*((g_ascii_props)+bx), 1));	// 47721 test    g_ascii_props[bx], 1 ;~ 18ED:0FD3
cs=0x18ed;eip=0x000fd8; 	R(JZ(loc_284da));	// 47722 jz      short loc_284DA ;~ 18ED:0FD8
cs=0x18ed;eip=0x000fda; 	T(MOV(al, *(db*)(raddr(ss,bp+var_6cc))));	// 47723 mov     al, byte ptr [bp+var_6CC] ;~ 18ED:0FDA
cs=0x18ed;eip=0x000fde; 	T(ADD(al, 0x20));	// 47724 add     al, 20h ; ' ' ;~ 18ED:0FDE
cs=0x18ed;eip=0x000fe0; 	R(JMP(loc_284de));	// 47725 jmp     short loc_284DE ;~ 18ED:0FE0
loc_28492:
	// 7675 
cs=0x18ed;eip=0x000fe2; 	X(DEC(*(raddr(ss,bp+var_716))));	// 47729 dec     [bp+var_716] ;~ 18ED:0FE2
loc_28496:
	// 7676 
cs=0x18ed;eip=0x000fe6; 	T(MOV(al, *(raddr(ss,bp+var_69a))));	// 47733 mov     al, [bp+var_69A] ;~ 18ED:0FE6
cs=0x18ed;eip=0x000fea; 	T(CMP(*(raddr(ss,bp+var_716)), al));	// 47734 cmp     [bp+var_716], al ;~ 18ED:0FEA
cs=0x18ed;eip=0x000fee; 	R(JGE(loc_284a8));	// 47735 jge     short loc_284A8 ;~ 18ED:0FEE
cs=0x18ed;eip=0x000ff0; 	T(MOV(al, *(raddr(ss,bp+var_716))));	// 47736 mov     al, [bp+var_716] ;~ 18ED:0FF0
cs=0x18ed;eip=0x000ff4; 	X(MOV(*(raddr(ss,bp+var_69a)), al));	// 47737 mov     [bp+var_69A], al ;~ 18ED:0FF4
loc_284a8:
	// 7677 
cs=0x18ed;eip=0x000ff8; 	T(CMP(*(raddr(ss,bp+var_69a)), 0));	// 47740 cmp     [bp+var_69A], 0 ;~ 18ED:0FF8
cs=0x18ed;eip=0x000ffd; 	R(JL(loc_284b2));	// 47741 jl      short loc_284B2 ;~ 18ED:0FFD
cs=0x18ed;eip=0x000fff; 	R(JMP(loc_28564));	// 47742 jmp     loc_28564 ;~ 18ED:0FFF
loc_284b2:
	// 7678 
cs=0x18ed;eip=0x001002; 	R(JMP(loc_2805e));	// 47746 jmp     loc_2805E ;~ 18ED:1002
loc_284b6:
	// 7679 
cs=0x18ed;eip=0x001006; 	T(MOV(al, *(raddr(ss,bp+var_714))));	// 47751 mov     al, [bp+var_714] ;~ 18ED:1006
cs=0x18ed;eip=0x00100a; 	T(CBW);	// 47752 cbw ;~ 18ED:100A
cs=0x18ed;eip=0x00100b; 	T(DEC(ax));	// 47753 dec     ax ;~ 18ED:100B
cs=0x18ed;eip=0x00100c; 	T(MOV(cx, ax));	// 47754 mov     cx, ax ;~ 18ED:100C
cs=0x18ed;eip=0x00100e; 	T(MOV(al, *(raddr(ss,bp+var_716))));	// 47755 mov     al, [bp+var_716] ;~ 18ED:100E
cs=0x18ed;eip=0x001012; 	T(CBW);	// 47756 cbw ;~ 18ED:1012
cs=0x18ed;eip=0x001013; 	T(CMP(cx, ax));	// 47757 cmp     cx, ax ;~ 18ED:1013
cs=0x18ed;eip=0x001015; 	R(JZ(loc_28496));	// 47758 jz      short loc_28496 ;~ 18ED:1015
cs=0x18ed;eip=0x001017; 	X(INC(*(raddr(ss,bp+var_716))));	// 47759 inc     [bp+var_716] ;~ 18ED:1017
cs=0x18ed;eip=0x00101b; 	R(JMP(loc_28496));	// 47760 jmp     short loc_28496 ;~ 18ED:101B
loc_284ce:
	// 7680 
cs=0x18ed;eip=0x00101e; 	X(MOV(*(raddr(ss,bp+var_2)), 1));	// 47766 mov     [bp+var_2], 1 ;~ 18ED:101E
cs=0x18ed;eip=0x001022; 	R(JMP(loc_28496));	// 47767 jmp     short loc_28496 ;~ 18ED:1022
loc_284d4:
	// 7681 
cs=0x18ed;eip=0x001024; 	X(MOV(*(raddr(ss,bp+var_2)), 0x0FF));	// 47771 mov     [bp+var_2], 0FFh ;~ 18ED:1024
cs=0x18ed;eip=0x001028; 	R(JMP(loc_28496));	// 47772 jmp     short loc_28496 ;~ 18ED:1028
loc_284da:
	// 7682 
cs=0x18ed;eip=0x00102a; 	T(MOV(al, *(db*)(raddr(ss,bp+var_6cc))));	// 47776 mov     al, byte ptr [bp+var_6CC] ;~ 18ED:102A
loc_284de:
	// 7683 
cs=0x18ed;eip=0x00102e; 	X(MOV(*(raddr(ss,bp+var_69c)), al));	// 47779 mov     [bp+var_69C], al ;~ 18ED:102E
cs=0x18ed;eip=0x001032; 	X(MOV(*(raddr(ss,bp+var_6ea)), 0));	// 47780 mov     [bp+var_6EA], 0 ;~ 18ED:1032
cs=0x18ed;eip=0x001037; 	R(JMP(loc_28516));	// 47781 jmp     short loc_28516 ;~ 18ED:1037
loc_284ea:
	// 7684 
cs=0x18ed;eip=0x00103a; 	T(MOV(al, *(raddr(ss,bp+var_6ea))));	// 47786 mov     al, [bp+var_6EA] ;~ 18ED:103A
cs=0x18ed;eip=0x00103e; 	T(CBW);	// 47787 cbw ;~ 18ED:103E
cs=0x18ed;eip=0x00103f; 	T(MOV(bx, ax));	// 47788 mov     bx, ax ;~ 18ED:103F
cs=0x18ed;eip=0x001041; 	T(SHL(bx, 1));	// 47789 shl     bx, 1 ;~ 18ED:1041
cs=0x18ed;eip=0x001043; 	T(ADD(bx, ax));	// 47790 add     bx, ax ;~ 18ED:1043
cs=0x18ed;eip=0x001045; 	T(SHL(bx, 1));	// 47791 shl     bx, 1 ;~ 18ED:1045
cs=0x18ed;eip=0x001047; 	T(SHL(bx, 1));	// 47792 shl     bx, 1 ;~ 18ED:1047
cs=0x18ed;eip=0x001049; 	T(ADD(bx, ax));	// 47793 add     bx, ax ;~ 18ED:1049
cs=0x18ed;eip=0x00104b; 	T(ADD(bx, bp));	// 47794 add     bx, bp ;~ 18ED:104B
cs=0x18ed;eip=0x00104d; 	T(MOV(al, *(raddr(ds,bx-0x698))));	// 47795 mov     al, [bx-698h] ;~ 18ED:104D
loc_28501:
	// 7685 
cs=0x18ed;eip=0x001051; 	T(CMP(al, *(raddr(ss,bp+var_69c))));	// 47798 cmp     al, [bp+var_69C] ;~ 18ED:1051
cs=0x18ed;eip=0x001055; 	R(JNZ(loc_28512));	// 47799 jnz     short loc_28512 ;~ 18ED:1055
cs=0x18ed;eip=0x001057; 	T(MOV(al, *(raddr(ss,bp+var_6ea))));	// 47800 mov     al, [bp+var_6EA] ;~ 18ED:1057
cs=0x18ed;eip=0x00105b; 	X(MOV(*(raddr(ss,bp+var_716)), al));	// 47801 mov     [bp+var_716], al ;~ 18ED:105B
cs=0x18ed;eip=0x00105f; 	R(JMP(loc_28496));	// 47802 jmp     short loc_28496 ;~ 18ED:105F
loc_28512:
	// 7686 
cs=0x18ed;eip=0x001062; 	X(INC(*(raddr(ss,bp+var_6ea))));	// 47807 inc     [bp+var_6EA] ;~ 18ED:1062
loc_28516:
	// 7687 
cs=0x18ed;eip=0x001066; 	T(MOV(al, *(raddr(ss,bp+var_714))));	// 47810 mov     al, [bp+var_714] ;~ 18ED:1066
cs=0x18ed;eip=0x00106a; 	T(CMP(*(raddr(ss,bp+var_6ea)), al));	// 47811 cmp     [bp+var_6EA], al ;~ 18ED:106A
cs=0x18ed;eip=0x00106e; 	R(JL(loc_28523));	// 47812 jl      short loc_28523 ;~ 18ED:106E
cs=0x18ed;eip=0x001070; 	R(JMP(loc_28496));	// 47813 jmp     loc_28496 ;~ 18ED:1070
loc_28523:
	// 7688 
cs=0x18ed;eip=0x001073; 	T(MOV(al, *(raddr(ss,bp+var_6ea))));	// 47817 mov     al, [bp+var_6EA] ;~ 18ED:1073
cs=0x18ed;eip=0x001077; 	T(CBW);	// 47818 cbw ;~ 18ED:1077
cs=0x18ed;eip=0x001078; 	T(MOV(bx, ax));	// 47819 mov     bx, ax ;~ 18ED:1078
cs=0x18ed;eip=0x00107a; 	T(SHL(bx, 1));	// 47820 shl     bx, 1 ;~ 18ED:107A
cs=0x18ed;eip=0x00107c; 	T(ADD(bx, ax));	// 47821 add     bx, ax ;~ 18ED:107C
cs=0x18ed;eip=0x00107e; 	T(SHL(bx, 1));	// 47822 shl     bx, 1 ;~ 18ED:107E
cs=0x18ed;eip=0x001080; 	T(SHL(bx, 1));	// 47823 shl     bx, 1 ;~ 18ED:1080
cs=0x18ed;eip=0x001082; 	T(ADD(bx, ax));	// 47824 add     bx, ax ;~ 18ED:1082
cs=0x18ed;eip=0x001084; 	T(ADD(bx, bp));	// 47825 add     bx, bp ;~ 18ED:1084
cs=0x18ed;eip=0x001086; 	T(MOV(al, *(raddr(ds,bx-0x698))));	// 47826 mov     al, [bx-698h] ;~ 18ED:1086
cs=0x18ed;eip=0x00108a; 	T(CBW);	// 47827 cbw ;~ 18ED:108A
cs=0x18ed;eip=0x00108b; 	T(MOV(bx, ax));	// 47828 mov     bx, ax ;~ 18ED:108B
cs=0x18ed;eip=0x00108d; 	T(TEST(*((g_ascii_props)+bx), 1));	// 47829 test    g_ascii_props[bx], 1 ;~ 18ED:108D
cs=0x18ed;eip=0x001092; 	R(JZ(loc_284ea));	// 47830 jz      short loc_284EA ;~ 18ED:1092
cs=0x18ed;eip=0x001094; 	T(MOV(al, *(raddr(ss,bp+var_6ea))));	// 47831 mov     al, [bp+var_6EA] ;~ 18ED:1094
cs=0x18ed;eip=0x001098; 	T(CBW);	// 47832 cbw ;~ 18ED:1098
cs=0x18ed;eip=0x001099; 	T(MOV(bx, ax));	// 47833 mov     bx, ax ;~ 18ED:1099
cs=0x18ed;eip=0x00109b; 	T(SHL(bx, 1));	// 47834 shl     bx, 1 ;~ 18ED:109B
cs=0x18ed;eip=0x00109d; 	T(ADD(bx, ax));	// 47835 add     bx, ax ;~ 18ED:109D
cs=0x18ed;eip=0x00109f; 	T(SHL(bx, 1));	// 47836 shl     bx, 1 ;~ 18ED:109F
cs=0x18ed;eip=0x0010a1; 	T(SHL(bx, 1));	// 47837 shl     bx, 1 ;~ 18ED:10A1
cs=0x18ed;eip=0x0010a3; 	T(ADD(bx, ax));	// 47838 add     bx, ax ;~ 18ED:10A3
cs=0x18ed;eip=0x0010a5; 	T(ADD(bx, bp));	// 47839 add     bx, bp ;~ 18ED:10A5
cs=0x18ed;eip=0x0010a7; 	T(MOV(al, *(raddr(ds,bx-0x698))));	// 47840 mov     al, [bx-698h] ;~ 18ED:10A7
cs=0x18ed;eip=0x0010ab; 	T(ADD(al, 0x20));	// 47841 add     al, 20h ; ' ' ;~ 18ED:10AB
cs=0x18ed;eip=0x0010ad; 	R(JMP(loc_28501));	// 47842 jmp     short loc_28501 ;~ 18ED:10AD
loc_28560:
	// 7689 
cs=0x18ed;eip=0x0010b0; 	X(INC(*(raddr(ss,bp+var_69a))));	// 47847 inc     [bp+var_69A] ;~ 18ED:10B0
loc_28564:
	// 7690 
cs=0x18ed;eip=0x0010b4; 	T(MOV(al, *(raddr(ss,bp+var_69a))));	// 47850 mov     al, [bp+var_69A] ;~ 18ED:10B4
cs=0x18ed;eip=0x0010b8; 	T(CBW);	// 47851 cbw ;~ 18ED:10B8
cs=0x18ed;eip=0x0010b9; 	T(ADD(ax, 6));	// 47852 add     ax, 6 ;~ 18ED:10B9
cs=0x18ed;eip=0x0010bc; 	T(MOV(cx, ax));	// 47853 mov     cx, ax ;~ 18ED:10BC
cs=0x18ed;eip=0x0010be; 	T(MOV(al, *(raddr(ss,bp+var_716))));	// 47854 mov     al, [bp+var_716] ;~ 18ED:10BE
cs=0x18ed;eip=0x0010c2; 	T(CBW);	// 47855 cbw ;~ 18ED:10C2
cs=0x18ed;eip=0x0010c3; 	T(CMP(cx, ax));	// 47856 cmp     cx, ax ;~ 18ED:10C3
cs=0x18ed;eip=0x0010c5; 	R(JL(loc_28560));	// 47857 jl      short loc_28560 ;~ 18ED:10C5
cs=0x18ed;eip=0x0010c7; 	T(CMP(*(raddr(ss,bp+var_2)), 0));	// 47858 cmp     [bp+var_2], 0 ;~ 18ED:10C7
cs=0x18ed;eip=0x0010cb; 	R(JNZ(loc_28580));	// 47859 jnz     short loc_28580 ;~ 18ED:10CB
cs=0x18ed;eip=0x0010cd; 	R(JMP(loc_28269));	// 47860 jmp     loc_28269 ;~ 18ED:10CD
loc_28580:
	// 7691 
cs=0x18ed;eip=0x0010d0; 	T(CMP(*(raddr(ss,bp+var_2)), 0x0FF));	// 47864 cmp     [bp+var_2], 0FFh ;~ 18ED:10D0
cs=0x18ed;eip=0x0010d4; 	R(JNZ(loc_28589));	// 47865 jnz     short loc_28589 ;~ 18ED:10D4
cs=0x18ed;eip=0x0010d6; 	R(JMP(loc_2808c));	// 47866 jmp     loc_2808C ;~ 18ED:10D6
loc_28589:
	// 7692 
cs=0x18ed;eip=0x0010d9; 	T(CBW);	// 47870 cbw ;~ 18ED:10D9
cs=0x18ed;eip=0x0010da; 	T(MOV(cx, ax));	// 47871 mov     cx, ax ;~ 18ED:10DA
cs=0x18ed;eip=0x0010dc; 	T(SHL(ax, 1));	// 47872 shl     ax, 1 ;~ 18ED:10DC
cs=0x18ed;eip=0x0010de; 	T(ADD(ax, cx));	// 47873 add     ax, cx ;~ 18ED:10DE
cs=0x18ed;eip=0x0010e0; 	T(SHL(ax, 1));	// 47874 shl     ax, 1 ;~ 18ED:10E0
cs=0x18ed;eip=0x0010e2; 	T(SHL(ax, 1));	// 47875 shl     ax, 1 ;~ 18ED:10E2
cs=0x18ed;eip=0x0010e4; 	T(ADD(ax, cx));	// 47876 add     ax, cx ;~ 18ED:10E4
cs=0x18ed;eip=0x0010e6; 	T(ADD(ax, bp));	// 47877 add     ax, bp ;~ 18ED:10E6
cs=0x18ed;eip=0x0010e8; 	T(SUB(ax, 0x698));	// 47878 sub     ax, 698h ;~ 18ED:10E8
cs=0x18ed;eip=0x0010eb; 	X(PUSH(ax));	// 47879 push    ax ;~ 18ED:10EB
cs=0x18ed;eip=0x0010ec; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 47880 push    word ptr [bp+arg_0+2] ; char * ;~ 18ED:10EC
cs=0x18ed;eip=0x0010ef; 	R(CALLF(_strcpy,0));	// 47881 call    _strcpy ;~ 18ED:10EF
cs=0x18ed;eip=0x0010f4; 	T(ADD(sp, 4));	// 47882 add     sp, 4 ;~ 18ED:10F4
cs=0x18ed;eip=0x0010f7; 	X(MOV(*(raddr(ss,bp+var_6a0)), 1));	// 47883 mov     [bp+var_6A0], 1 ;~ 18ED:10F7
loc_285ac:
	// 7693 
cs=0x18ed;eip=0x0010fc; 	X(PUSH(cs));	// 47886 push    cs ;~ 18ED:10FC
cs=0x18ed;eip=0x0010fd; 	R(CALL(sub_275c6,0));	// 47887 call    near ptr sub_275C6 ;~ 18ED:10FD
cs=0x18ed;eip=0x001100; 	T(MOV(al, *(raddr(ss,bp+var_18))));	// 47888 mov     al, [bp+var_18] ;~ 18ED:1100
cs=0x18ed;eip=0x001103; 	X(MOV(g_is_busy, al));	// 47889 mov     g_is_busy, al ;~ 18ED:1103
cs=0x18ed;eip=0x001106; 	T(MOV(al, *(raddr(ss,bp+var_6a0))));	// 47890 mov     al, [bp+var_6A0] ;~ 18ED:1106
cs=0x18ed;eip=0x00110a; 	T(CBW);	// 47891 cbw ;~ 18ED:110A
cs=0x18ed;eip=0x00110b; 	X(POP(si));	// 47892 pop     si ;~ 18ED:110B
cs=0x18ed;eip=0x00110c; 	X(POP(di));	// 47893 pop     di ;~ 18ED:110C
cs=0x18ed;eip=0x00110d; 	T(MOV(sp, bp));	// 47894 mov     sp, bp ;~ 18ED:110D
cs=0x18ed;eip=0x00110f; 	X(POP(bp));	// 47895 pop     bp ;~ 18ED:110F
cs=0x18ed;eip=0x001110; 	R(RETF(0));	// 47896 retf ;~ 18ED:1110
file_build_path:
	// 47907 
#undef var_2
#define var_2 -2
	// 47910 var_2           = byte ptr -2 ;~ 18ED:1112
#undef arg_0
#define arg_0 6
	// 47911 arg_0           = dword ptr  6 ;~ 18ED:1112
#undef arg_4
#define arg_4 0x0A
	// 47912 arg_4           = word ptr  0Ah ;~ 18ED:1112
#undef arg_6
#define arg_6 0x0C
	// 47913 arg_6           = dword ptr  0Ch ;~ 18ED:1112
ret_18ed_1112:
	// 7694 
cs=0x18ed;eip=0x001112; 	X(PUSH(bp));	// 47915 push    bp ;~ 18ED:1112
cs=0x18ed;eip=0x001113; 	T(MOV(bp, sp));	// 47916 mov     bp, sp ;~ 18ED:1113
cs=0x18ed;eip=0x001115; 	T(SUB(sp, 4));	// 47917 sub     sp, 4 ;~ 18ED:1115
cs=0x18ed;eip=0x001118; 	X(PUSH(si));	// 47918 push    si              ; char * ;~ 18ED:1118
cs=0x18ed;eip=0x001119; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+arg_0))), 0));	// 47919 cmp     word ptr [bp+arg_0], 0 ;~ 18ED:1119
cs=0x18ed;eip=0x00111d; 	R(JZ(loc_285ec));	// 47920 jz      short loc_285EC ;~ 18ED:111D
cs=0x18ed;eip=0x00111f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 47921 push    word ptr [bp+arg_0] ;~ 18ED:111F
cs=0x18ed;eip=0x001122; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_6)))));	// 47922 push    word ptr [bp+arg_6] ; char * ;~ 18ED:1122
cs=0x18ed;eip=0x001125; 	R(CALLF(_strcpy,0));	// 47923 call    _strcpy ;~ 18ED:1125
cs=0x18ed;eip=0x00112a; 	T(ADD(sp, 4));	// 47924 add     sp, 4 ;~ 18ED:112A
cs=0x18ed;eip=0x00112d; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 47925 push    word ptr [bp+arg_0] ; char * ;~ 18ED:112D
cs=0x18ed;eip=0x001130; 	R(CALLF(_strlen,0));	// 47926 call    _strlen ;~ 18ED:1130
cs=0x18ed;eip=0x001135; 	T(ADD(sp, 2));	// 47927 add     sp, 2 ;~ 18ED:1135
cs=0x18ed;eip=0x001138; 	T(MOV(si, ax));	// 47928 mov     si, ax ;~ 18ED:1138
cs=0x18ed;eip=0x00113a; 	R(JMP(loc_285f4));	// 47929 jmp     short loc_285F4 ;~ 18ED:113A
loc_285ec:
	// 7695 
cs=0x18ed;eip=0x00113c; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_6)))));	// 47933 mov     bx, word ptr [bp+arg_6] ;~ 18ED:113C
cs=0x18ed;eip=0x00113f; 	X(MOV(*(raddr(ds,bx)), 0));	// 47934 mov     byte ptr [bx], 0 ;~ 18ED:113F
cs=0x18ed;eip=0x001142; 	T(SUB(si, si));	// 47935 sub     si, si ;~ 18ED:1142
loc_285f4:
	// 7696 
cs=0x18ed;eip=0x001144; 	T(OR(si, si));	// 47938 or      si, si ;~ 18ED:1144
cs=0x18ed;eip=0x001146; 	R(JZ(loc_28618));	// 47939 jz      short loc_28618 ;~ 18ED:1146
cs=0x18ed;eip=0x001148; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 47940 mov     bx, word ptr [bp+arg_0] ;~ 18ED:1148
cs=0x18ed;eip=0x00114b; 	T(MOV(al, *(raddr(ds,bx+si-1))));	// 47941 mov     al, [bx+si-1] ;~ 18ED:114B
cs=0x18ed;eip=0x00114e; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 47942 mov     [bp+var_2], al ;~ 18ED:114E
cs=0x18ed;eip=0x001151; 	T(CMP(al, ':'));	// 47943 cmp     al, ':' ;~ 18ED:1151
cs=0x18ed;eip=0x001153; 	R(JZ(loc_28618));	// 47944 jz      short loc_28618 ;~ 18ED:1153
cs=0x18ed;eip=0x001155; 	T(CMP(al, '\\'));	// 47945 cmp     al, '\' ;~ 18ED:1155
cs=0x18ed;eip=0x001157; 	R(JZ(loc_28618));	// 47946 jz      short loc_28618 ;~ 18ED:1157
cs=0x18ed;eip=0x001159; 	T(MOV(ax, offset(dseg,asc_3eba9)));	// 47947 mov     ax, offset asc_3EBA9 ; "\\" ;~ 18ED:1159
cs=0x18ed;eip=0x00115c; 	X(PUSH(ax));	// 47948 push    ax ;~ 18ED:115C
cs=0x18ed;eip=0x00115d; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_6)))));	// 47949 push    word ptr [bp+arg_6] ; char * ;~ 18ED:115D
cs=0x18ed;eip=0x001160; 	R(CALLF(_strcat,0));	// 47950 call    _strcat ;~ 18ED:1160
cs=0x18ed;eip=0x001165; 	T(ADD(sp, 4));	// 47951 add     sp, 4 ;~ 18ED:1165
loc_28618:
	// 7697 
cs=0x18ed;eip=0x001168; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 47955 push    word ptr [bp+arg_0+2] ;~ 18ED:1168
cs=0x18ed;eip=0x00116b; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_6)))));	// 47956 push    word ptr [bp+arg_6] ; char * ;~ 18ED:116B
cs=0x18ed;eip=0x00116e; 	R(CALLF(_strcat,0));	// 47957 call    _strcat ;~ 18ED:116E
cs=0x18ed;eip=0x001173; 	T(ADD(sp, 4));	// 47958 add     sp, 4 ;~ 18ED:1173
cs=0x18ed;eip=0x001176; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 47959 push    [bp+arg_4] ;~ 18ED:1176
cs=0x18ed;eip=0x001179; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_6)))));	// 47960 push    word ptr [bp+arg_6] ; char * ;~ 18ED:1179
cs=0x18ed;eip=0x00117c; 	R(CALLF(_strcat,0));	// 47961 call    _strcat ;~ 18ED:117C
cs=0x18ed;eip=0x001181; 	T(ADD(sp, 4));	// 47962 add     sp, 4 ;~ 18ED:1181
cs=0x18ed;eip=0x001184; 	X(POP(si));	// 47963 pop     si ;~ 18ED:1184
cs=0x18ed;eip=0x001185; 	T(MOV(sp, bp));	// 47964 mov     sp, bp ;~ 18ED:1185
cs=0x18ed;eip=0x001187; 	X(POP(bp));	// 47965 pop     bp ;~ 18ED:1187
cs=0x18ed;eip=0x001188; 	R(RETF(0));	// 47966 retf ;~ 18ED:1188
do_savefile_dialog:
	// 47977 
#undef var_12
#define var_12 -0x12
	// 47980 var_12          = word ptr -12h ;~ 18ED:118A
#undef var_10
#define var_10 -0x10
	// 47981 var_10          = word ptr -10h ;~ 18ED:118A
#undef var_e
#define var_e -0x0E
	// 47982 var_E           = dword ptr -0Eh ;~ 18ED:118A
#undef var_a
#define var_a -0x0A
	// 47983 var_A           = dword ptr -0Ah ;~ 18ED:118A
#undef var_4
#define var_4 -4
	// 47984 var_4           = byte ptr -4 ;~ 18ED:118A
#undef arg_0
#define arg_0 6
	// 47985 arg_0           = dword ptr  6 ;~ 18ED:118A
#undef arg_4
#define arg_4 0x0A
	// 47986 arg_4           = word ptr  0Ah ;~ 18ED:118A
#undef arg_6
#define arg_6 0x0C
	// 47987 arg_6           = word ptr  0Ch ;~ 18ED:118A
ret_18ed_118a:
	// 7698 
cs=0x18ed;eip=0x00118a; 	X(PUSH(bp));	// 47989 push    bp ;~ 18ED:118A
cs=0x18ed;eip=0x00118b; 	T(MOV(bp, sp));	// 47990 mov     bp, sp ;~ 18ED:118B
cs=0x18ed;eip=0x00118d; 	T(SUB(sp, 0x12));	// 47991 sub     sp, 12h ;~ 18ED:118D
cs=0x18ed;eip=0x001190; 	X(PUSH(di));	// 47992 push    di ;~ 18ED:1190
cs=0x18ed;eip=0x001191; 	X(PUSH(si));	// 47993 push    si ;~ 18ED:1191
cs=0x18ed;eip=0x001192; 	T(SUB(ax, ax));	// 47994 sub     ax, ax ;~ 18ED:1192
cs=0x18ed;eip=0x001194; 	X(PUSH(ax));	// 47995 push    ax ;~ 18ED:1194
cs=0x18ed;eip=0x001195; 	T(ax = bp+var_12);	// 47996 lea     ax, [bp+var_12] ;~ 18ED:1195
cs=0x18ed;eip=0x001198; 	X(PUSH(ax));	// 47997 push    ax ;~ 18ED:1198
cs=0x18ed;eip=0x001199; 	X(PUSH(dialogarg2));	// 47998 push    dialogarg2 ;~ 18ED:1199
cs=0x18ed;eip=0x00119d; 	T(MOV(ax, 0x0FFFF));	// 47999 mov     ax, 0FFFFh ;~ 18ED:119D
cs=0x18ed;eip=0x0011a0; 	X(PUSH(ax));	// 48000 push    ax ;~ 18ED:11A0
cs=0x18ed;eip=0x0011a1; 	X(PUSH(ax));	// 48001 push    ax ;~ 18ED:11A1
cs=0x18ed;eip=0x0011a2; 	T(MOV(ax, offset(dseg,asav)));	// 48002 mov     ax, offset aSav ; "sav" ;~ 18ED:11A2
cs=0x18ed;eip=0x0011a5; 	X(PUSH(ax));	// 48003 push    ax ;~ 18ED:11A5
cs=0x18ed;eip=0x0011a6; 	X(PUSH(word_44cee));	// 48004 push    word_44CEE ;~ 18ED:11A6
cs=0x18ed;eip=0x0011aa; 	X(PUSH(mainresptr));	// 48005 push    mainresptr ;~ 18ED:11AA
cs=0x18ed;eip=0x0011ae; 	X(PUSH(cs));	// 48006 push    cs ;~ 18ED:11AE
cs=0x18ed;eip=0x0011af; 	R(CALL(locate_text_res,0));	// 48007 call    near ptr locate_text_res ;~ 18ED:11AF
cs=0x18ed;eip=0x0011b2; 	T(ADD(sp, 6));	// 48008 add     sp, 6 ;~ 18ED:11B2
cs=0x18ed;eip=0x0011b5; 	X(PUSH(dx));	// 48009 push    dx ;~ 18ED:11B5
cs=0x18ed;eip=0x0011b6; 	X(PUSH(ax));	// 48010 push    ax ;~ 18ED:11B6
cs=0x18ed;eip=0x0011b7; 	T(MOV(ax, 1));	// 48011 mov     ax, 1 ;~ 18ED:11B7
cs=0x18ed;eip=0x0011ba; 	X(PUSH(ax));	// 48012 push    ax ;~ 18ED:11BA
cs=0x18ed;eip=0x0011bb; 	T(MOV(ax, 3));	// 48013 mov     ax, 3 ;~ 18ED:11BB
cs=0x18ed;eip=0x0011be; 	X(PUSH(ax));	// 48014 push    ax ;~ 18ED:11BE
cs=0x18ed;eip=0x0011bf; 	X(PUSH(cs));	// 48015 push    cs ;~ 18ED:11BF
cs=0x18ed;eip=0x0011c0; 	R(CALL(show_dialog,0));	// 48016 call    near ptr show_dialog ;~ 18ED:11C0
cs=0x18ed;eip=0x0011c3; 	T(ADD(sp, 0x12));	// 48017 add     sp, 12h ;~ 18ED:11C3
cs=0x18ed;eip=0x0011c6; 	T(OR(ax, ax));	// 48018 or      ax, ax ;~ 18ED:11C6
cs=0x18ed;eip=0x0011c8; 	R(JGE(loc_28682));	// 48019 jge     short loc_28682 ;~ 18ED:11C8
cs=0x18ed;eip=0x0011ca; 	T(SUB(ax, ax));	// 48020 sub     ax, ax ;~ 18ED:11CA
cs=0x18ed;eip=0x0011cc; 	X(POP(si));	// 48021 pop     si ;~ 18ED:11CC
cs=0x18ed;eip=0x0011cd; 	X(POP(di));	// 48022 pop     di ;~ 18ED:11CD
cs=0x18ed;eip=0x0011ce; 	T(MOV(sp, bp));	// 48023 mov     sp, bp ;~ 18ED:11CE
cs=0x18ed;eip=0x0011d0; 	X(POP(bp));	// 48024 pop     bp ;~ 18ED:11D0
cs=0x18ed;eip=0x0011d1; 	R(RETF(0));	// 48025 retf ;~ 18ED:11D1
loc_28682:
	// 7699 
cs=0x18ed;eip=0x0011d2; 	X(MOV(*(raddr(ss,bp+var_4)), 0));	// 48029 mov     [bp+var_4], 0 ;~ 18ED:11D2
cs=0x18ed;eip=0x0011d6; 	X(PUSH(word_3eb90));	// 48030 push    word_3EB90 ;~ 18ED:11D6
cs=0x18ed;eip=0x0011da; 	X(PUSH(dialog_fnt_colour));	// 48031 push    dialog_fnt_colour ;~ 18ED:11DA
cs=0x18ed;eip=0x0011de; 	R(CALLF(font_set_unk,0));	// 48032 call    font_set_unk ;~ 18ED:11DE
cs=0x18ed;eip=0x0011e3; 	T(ADD(sp, 4));	// 48033 add     sp, 4 ;~ 18ED:11E3
cs=0x18ed;eip=0x0011e6; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 48034 push    [bp+arg_6] ;~ 18ED:11E6
cs=0x18ed;eip=0x0011e9; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 48035 push    [bp+arg_4] ;~ 18ED:11E9
cs=0x18ed;eip=0x0011ec; 	T(MOV(ax, 0x0AC74));	// 48036 mov     ax, 0AC74h ;~ 18ED:11EC
cs=0x18ed;eip=0x0011ef; 	X(PUSH(ax));	// 48037 push    ax ;~ 18ED:11EF
cs=0x18ed;eip=0x0011f0; 	X(PUSH(cs));	// 48038 push    cs ;~ 18ED:11F0
cs=0x18ed;eip=0x0011f1; 	R(CALL(copy_string,0));	// 48039 call    near ptr copy_string ;~ 18ED:11F1
cs=0x18ed;eip=0x0011f4; 	T(ADD(sp, 6));	// 48040 add     sp, 6 ;~ 18ED:11F4
cs=0x18ed;eip=0x0011f7; 	X(PUSH(*(dw*)(raddr(ss,bp+var_10))));	// 48041 push    [bp+var_10] ;~ 18ED:11F7
cs=0x18ed;eip=0x0011fa; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 48042 push    [bp+var_12] ;~ 18ED:11FA
cs=0x18ed;eip=0x0011fd; 	T(MOV(ax, 0x0AC74));	// 48043 mov     ax, 0AC74h ;~ 18ED:11FD
cs=0x18ed;eip=0x001200; 	X(PUSH(ax));	// 48044 push    ax ;~ 18ED:1200
cs=0x18ed;eip=0x001201; 	R(CALLF(sub_345bc,0));	// 48045 call    sub_345BC ;~ 18ED:1201
cs=0x18ed;eip=0x001206; 	T(ADD(sp, 6));	// 48046 add     sp, 6 ;~ 18ED:1206
cs=0x18ed;eip=0x001209; 	X(PUSH(word_3eb90));	// 48047 push    word_3EB90 ;~ 18ED:1209
cs=0x18ed;eip=0x00120d; 	X(PUSH(dialog_fnt_colour));	// 48048 push    dialog_fnt_colour ;~ 18ED:120D
cs=0x18ed;eip=0x001211; 	R(CALLF(font_set_unk,0));	// 48049 call    font_set_unk ;~ 18ED:1211
cs=0x18ed;eip=0x001216; 	T(ADD(sp, 4));	// 48050 add     sp, 4 ;~ 18ED:1216
cs=0x18ed;eip=0x001219; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_e +2)))));	// 48051 push    word ptr [bp+var_E+2] ;~ 18ED:1219
cs=0x18ed;eip=0x00121c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_e)))));	// 48052 push    word ptr [bp+var_E] ;~ 18ED:121C
cs=0x18ed;eip=0x00121f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 48053 push    word ptr [bp+arg_0] ;~ 18ED:121F
cs=0x18ed;eip=0x001222; 	R(CALLF(sub_345bc,0));	// 48054 call    sub_345BC ;~ 18ED:1222
cs=0x18ed;eip=0x001227; 	T(ADD(sp, 6));	// 48055 add     sp, 6 ;~ 18ED:1227
cs=0x18ed;eip=0x00122a; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_a+2)))));	// 48056 push    word ptr [bp+var_A+2] ;~ 18ED:122A
cs=0x18ed;eip=0x00122d; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_a)))));	// 48057 push    word ptr [bp+var_A] ;~ 18ED:122D
cs=0x18ed;eip=0x001230; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 48058 push    word ptr [bp+arg_0+2] ;~ 18ED:1230
cs=0x18ed;eip=0x001233; 	R(CALLF(sub_345bc,0));	// 48059 call    sub_345BC ;~ 18ED:1233
cs=0x18ed;eip=0x001238; 	T(ADD(sp, 6));	// 48060 add     sp, 6 ;~ 18ED:1238
cs=0x18ed;eip=0x00123b; 	X(PUSH(cs));	// 48061 push    cs ;~ 18ED:123B
cs=0x18ed;eip=0x00123c; 	R(CALL(mouse_draw_transparent_check,0));	// 48062 call    near ptr mouse_draw_transparent_check ;~ 18ED:123C
cs=0x18ed;eip=0x00123f; 	R(JMP(loc_2872f));	// 48063 jmp     short loc_2872F ;~ 18ED:123F
loc_286f2:
	// 7700 
cs=0x18ed;eip=0x001242; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 48068 mov     bx, word ptr [bp+arg_0+2] ;~ 18ED:1242
cs=0x18ed;eip=0x001245; 	T(CMP(*(raddr(ds,bx+di)), 0x20));	// 48069 cmp     byte ptr [bx+di], 20h ; ' ' ;~ 18ED:1245
cs=0x18ed;eip=0x001248; 	R(JNZ(loc_286fd));	// 48070 jnz     short loc_286FD ;~ 18ED:1248
cs=0x18ed;eip=0x00124a; 	X(MOV(*(raddr(ds,bx+di)), 0x5F));	// 48071 mov     byte ptr [bx+di], 5Fh ; '_' ;~ 18ED:124A
loc_286fd:
	// 7701 
cs=0x18ed;eip=0x00124d; 	T(INC(di));	// 48074 inc     di ;~ 18ED:124D
loc_286fe:
	// 7702 
cs=0x18ed;eip=0x00124e; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 48077 mov     bx, word ptr [bp+arg_0+2] ;~ 18ED:124E
cs=0x18ed;eip=0x001251; 	T(CMP(*(raddr(ds,bx+di)), 0));	// 48078 cmp     byte ptr [bx+di], 0 ;~ 18ED:1251
cs=0x18ed;eip=0x001254; 	R(JNZ(loc_286f2));	// 48079 jnz     short loc_286F2 ;~ 18ED:1254
cs=0x18ed;eip=0x001256; 	T(CMP(si, 0x1B));	// 48080 cmp     si, 1Bh ;~ 18ED:1256
cs=0x18ed;eip=0x001259; 	R(JZ(loc_28754));	// 48081 jz      short loc_28754 ;~ 18ED:1259
cs=0x18ed;eip=0x00125b; 	T(CMP(si, 0x0D));	// 48082 cmp     si, 0Dh ;~ 18ED:125B
cs=0x18ed;eip=0x00125e; 	R(JZ(loc_28750));	// 48083 jz      short loc_28750 ;~ 18ED:125E
cs=0x18ed;eip=0x001260; 	T(MOV(ax, 0x7530));	// 48084 mov     ax, 7530h ;~ 18ED:1260
cs=0x18ed;eip=0x001263; 	T(CWD);	// 48085 cwd ;~ 18ED:1263
cs=0x18ed;eip=0x001264; 	X(PUSH(dx));	// 48086 push    dx              ; int ;~ 18ED:1264
cs=0x18ed;eip=0x001265; 	X(PUSH(ax));	// 48087 push    ax              ; int ;~ 18ED:1265
cs=0x18ed;eip=0x001266; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_e +2)))));	// 48088 push    word ptr [bp+var_E+2] ; int ;~ 18ED:1266
cs=0x18ed;eip=0x001269; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_e)))));	// 48089 push    word ptr [bp+var_E] ; int ;~ 18ED:1269
cs=0x18ed;eip=0x00126c; 	T(MOV(ax, 0x12));	// 48090 mov     ax, 12h ;~ 18ED:126C
cs=0x18ed;eip=0x00126f; 	X(PUSH(ax));	// 48091 push    ax ;~ 18ED:126F
cs=0x18ed;eip=0x001270; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 48092 push    word ptr [bp+arg_0] ; char * ;~ 18ED:1270
cs=0x18ed;eip=0x001273; 	X(PUSH(cs));	// 48093 push    cs ;~ 18ED:1273
cs=0x18ed;eip=0x001274; 	R(CALL(call_read_line,0));	// 48094 call    near ptr call_read_line ;~ 18ED:1274
cs=0x18ed;eip=0x001277; 	T(ADD(sp, 0x0C));	// 48095 add     sp, 0Ch ;~ 18ED:1277
cs=0x18ed;eip=0x00127a; 	T(CMP(ax, 0x1B));	// 48096 cmp     ax, 1Bh ;~ 18ED:127A
cs=0x18ed;eip=0x00127d; 	R(JZ(loc_28754));	// 48097 jz      short loc_28754 ;~ 18ED:127D
loc_2872f:
	// 7703 
cs=0x18ed;eip=0x00127f; 	T(MOV(ax, 0x7530));	// 48100 mov     ax, 7530h ;~ 18ED:127F
cs=0x18ed;eip=0x001282; 	T(CWD);	// 48101 cwd ;~ 18ED:1282
cs=0x18ed;eip=0x001283; 	X(PUSH(dx));	// 48102 push    dx              ; int ;~ 18ED:1283
cs=0x18ed;eip=0x001284; 	X(PUSH(ax));	// 48103 push    ax              ; int ;~ 18ED:1284
cs=0x18ed;eip=0x001285; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_a+2)))));	// 48104 push    word ptr [bp+var_A+2] ; int ;~ 18ED:1285
cs=0x18ed;eip=0x001288; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_a)))));	// 48105 push    word ptr [bp+var_A] ; int ;~ 18ED:1288
cs=0x18ed;eip=0x00128b; 	T(MOV(ax, 8));	// 48106 mov     ax, 8 ;~ 18ED:128B
cs=0x18ed;eip=0x00128e; 	X(PUSH(ax));	// 48107 push    ax ;~ 18ED:128E
cs=0x18ed;eip=0x00128f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 48108 push    word ptr [bp+arg_0+2] ; char * ;~ 18ED:128F
cs=0x18ed;eip=0x001292; 	X(PUSH(cs));	// 48109 push    cs ;~ 18ED:1292
cs=0x18ed;eip=0x001293; 	R(CALL(call_read_line,0));	// 48110 call    near ptr call_read_line ;~ 18ED:1293
cs=0x18ed;eip=0x001296; 	T(ADD(sp, 0x0C));	// 48111 add     sp, 0Ch ;~ 18ED:1296
cs=0x18ed;eip=0x001299; 	T(MOV(si, ax));	// 48112 mov     si, ax ;~ 18ED:1299
cs=0x18ed;eip=0x00129b; 	T(SUB(di, di));	// 48113 sub     di, di ;~ 18ED:129B
cs=0x18ed;eip=0x00129d; 	R(JMP(loc_286fe));	// 48114 jmp     short loc_286FE ;~ 18ED:129D
loc_28750:
	// 7704 
cs=0x18ed;eip=0x0012a0; 	X(MOV(*(raddr(ss,bp+var_4)), 1));	// 48119 mov     [bp+var_4], 1 ;~ 18ED:12A0
loc_28754:
	// 7705 
cs=0x18ed;eip=0x0012a4; 	X(PUSH(cs));	// 48123 push    cs ;~ 18ED:12A4
cs=0x18ed;eip=0x0012a5; 	R(CALL(sub_275c6,0));	// 48124 call    near ptr sub_275C6 ;~ 18ED:12A5
cs=0x18ed;eip=0x0012a8; 	T(MOV(al, *(raddr(ss,bp+var_4))));	// 48125 mov     al, [bp+var_4] ;~ 18ED:12A8
cs=0x18ed;eip=0x0012ab; 	T(CBW);	// 48126 cbw ;~ 18ED:12AB
cs=0x18ed;eip=0x0012ac; 	X(POP(si));	// 48127 pop     si ;~ 18ED:12AC
cs=0x18ed;eip=0x0012ad; 	X(POP(di));	// 48128 pop     di ;~ 18ED:12AD
cs=0x18ed;eip=0x0012ae; 	T(MOV(sp, bp));	// 48129 mov     sp, bp ;~ 18ED:12AE
cs=0x18ed;eip=0x0012b0; 	X(POP(bp));	// 48130 pop     bp ;~ 18ED:12B0
cs=0x18ed;eip=0x0012b1; 	R(RETF(0));	// 48131 retf ;~ 18ED:12B1
parse_filepath_separators:
	// 48140 
#undef var_6
#define var_6 -6
	// 48143 var_6           = word ptr -6 ;~ 18ED:12B2
#undef var_4
#define var_4 -4
	// 48144 var_4           = word ptr -4 ;~ 18ED:12B2
#undef var_2
#define var_2 -2
	// 48145 var_2           = byte ptr -2 ;~ 18ED:12B2
#undef arg_0
#define arg_0 6
	// 48146 arg_0           = word ptr  6 ;~ 18ED:12B2
#undef arg_2
#define arg_2 8
	// 48147 arg_2           = dword ptr  8 ;~ 18ED:12B2
ret_18ed_12b2:
	// 7706 
cs=0x18ed;eip=0x0012b2; 	X(PUSH(bp));	// 48149 push    bp ;~ 18ED:12B2
cs=0x18ed;eip=0x0012b3; 	T(MOV(bp, sp));	// 48150 mov     bp, sp ;~ 18ED:12B3
cs=0x18ed;eip=0x0012b5; 	T(SUB(sp, 6));	// 48151 sub     sp, 6 ;~ 18ED:12B5
cs=0x18ed;eip=0x0012b8; 	X(PUSH(si));	// 48152 push    si ;~ 18ED:12B8
cs=0x18ed;eip=0x0012b9; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 48153 push    word ptr [bp+arg_2] ; char * ;~ 18ED:12B9
cs=0x18ed;eip=0x0012bc; 	R(CALLF(_strlen,0));	// 48154 call    _strlen ;~ 18ED:12BC
cs=0x18ed;eip=0x0012c1; 	T(ADD(sp, 2));	// 48155 add     sp, 2 ;~ 18ED:12C1
cs=0x18ed;eip=0x0012c4; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 48156 mov     [bp+var_4], ax ;~ 18ED:12C4
loc_28777:
	// 7707 
cs=0x18ed;eip=0x0012c7; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_4))));	// 48159 mov     si, [bp+var_4] ;~ 18ED:12C7
cs=0x18ed;eip=0x0012ca; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 48160 mov     bx, word ptr [bp+arg_2] ;~ 18ED:12CA
cs=0x18ed;eip=0x0012cd; 	T(MOV(al, *(raddr(ds,bx+si-1))));	// 48161 mov     al, [bx+si-1] ;~ 18ED:12CD
cs=0x18ed;eip=0x0012d0; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 48162 mov     [bp+var_2], al ;~ 18ED:12D0
cs=0x18ed;eip=0x0012d3; 	T(CMP(al, 0x5C));	// 48163 cmp     al, 5Ch ; '\' ;~ 18ED:12D3
cs=0x18ed;eip=0x0012d5; 	R(JZ(loc_28790));	// 48164 jz      short loc_28790 ;~ 18ED:12D5
cs=0x18ed;eip=0x0012d7; 	T(CMP(al, 0x3A));	// 48165 cmp     al, 3Ah ; ':' ;~ 18ED:12D7
cs=0x18ed;eip=0x0012d9; 	R(JZ(loc_28790));	// 48166 jz      short loc_28790 ;~ 18ED:12D9
cs=0x18ed;eip=0x0012db; 	X(DEC(*(dw*)(raddr(ss,bp+var_4))));	// 48167 dec     [bp+var_4] ;~ 18ED:12DB
cs=0x18ed;eip=0x0012de; 	R(JNZ(loc_28777));	// 48168 jnz     short loc_28777 ;~ 18ED:12DE
loc_28790:
	// 7708 
cs=0x18ed;eip=0x0012e0; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0));	// 48172 mov     [bp+var_6], 0 ;~ 18ED:12E0
loc_28795:
	// 7709 
cs=0x18ed;eip=0x0012e5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 48175 mov     bx, [bp+var_4] ;~ 18ED:12E5
cs=0x18ed;eip=0x0012e8; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 48176 inc     [bp+var_4] ;~ 18ED:12E8
cs=0x18ed;eip=0x0012eb; 	T(MOV(si, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 48177 mov     si, word ptr [bp+arg_2] ;~ 18ED:12EB
cs=0x18ed;eip=0x0012ee; 	T(MOV(al, *(raddr(ds,bx+si))));	// 48178 mov     al, [bx+si] ;~ 18ED:12EE
cs=0x18ed;eip=0x0012f0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_6))));	// 48179 mov     bx, [bp+var_6] ;~ 18ED:12F0
cs=0x18ed;eip=0x0012f3; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 48180 mov     si, [bp+arg_0] ;~ 18ED:12F3
cs=0x18ed;eip=0x0012f6; 	X(MOV(*(raddr(ds,bx+si)), al));	// 48181 mov     [bx+si], al ;~ 18ED:12F6
cs=0x18ed;eip=0x0012f8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_6))));	// 48182 mov     bx, [bp+var_6] ;~ 18ED:12F8
cs=0x18ed;eip=0x0012fb; 	X(INC(*(dw*)(raddr(ss,bp+var_6))));	// 48183 inc     [bp+var_6] ;~ 18ED:12FB
cs=0x18ed;eip=0x0012fe; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 48184 mov     si, [bp+arg_0] ;~ 18ED:12FE
cs=0x18ed;eip=0x001301; 	T(CMP(*(raddr(ds,bx+si)), 0x2E));	// 48185 cmp     byte ptr [bx+si], 2Eh ; '.' ;~ 18ED:1301
cs=0x18ed;eip=0x001304; 	R(JNZ(loc_28795));	// 48186 jnz     short loc_28795 ;~ 18ED:1304
cs=0x18ed;eip=0x001306; 	X(DEC(*(dw*)(raddr(ss,bp+var_6))));	// 48187 dec     [bp+var_6] ;~ 18ED:1306
cs=0x18ed;eip=0x001309; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_6))));	// 48188 mov     bx, [bp+var_6] ;~ 18ED:1309
cs=0x18ed;eip=0x00130c; 	X(MOV(*(raddr(ds,bx+si)), 0));	// 48189 mov     byte ptr [bx+si], 0 ;~ 18ED:130C
cs=0x18ed;eip=0x00130f; 	X(POP(si));	// 48190 pop     si ;~ 18ED:130F
cs=0x18ed;eip=0x001310; 	T(MOV(sp, bp));	// 48191 mov     sp, bp ;~ 18ED:1310
cs=0x18ed;eip=0x001312; 	X(POP(bp));	// 48192 pop     bp ;~ 18ED:1312
cs=0x18ed;eip=0x001313; 	R(RETF(0));	// 48193 retf ;~ 18ED:1313
input_checking:
	// 48201 
#undef arg_0
#define arg_0 6
	// 48204 arg_0           = word ptr  6 ;~ 18ED:1314
ret_18ed_1314:
	// 7710 
cs=0x18ed;eip=0x001314; 	X(PUSH(bp));	// 48206 push    bp ;~ 18ED:1314
cs=0x18ed;eip=0x001315; 	T(MOV(bp, sp));	// 48207 mov     bp, sp ;~ 18ED:1315
cs=0x18ed;eip=0x001317; 	T(SUB(sp, 4));	// 48208 sub     sp, 4 ;~ 18ED:1317
cs=0x18ed;eip=0x00131a; 	X(PUSH(di));	// 48209 push    di ;~ 18ED:131A
cs=0x18ed;eip=0x00131b; 	X(PUSH(si));	// 48210 push    si ;~ 18ED:131B
cs=0x18ed;eip=0x00131c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 48211 mov     ax, [bp+arg_0] ;~ 18ED:131C
cs=0x18ed;eip=0x00131f; 	X(ADD(input_framecount, ax));	// 48212 add     input_framecount, ax ;~ 18ED:131F
cs=0x18ed;eip=0x001323; 	T(CMP(input_framecount, 0x4E20));	// 48213 cmp     input_framecount, 4E20h ; 20000 ;~ 18ED:1323
cs=0x18ed;eip=0x001329; 	R(JLE(loc_287ed));	// 48214 jle     short loc_287ED ;~ 18ED:1329
cs=0x18ed;eip=0x00132b; 	X(SUB(input_framecount, 0x2710));	// 48215 sub     input_framecount, 2710h ; 10000 ;~ 18ED:132B
cs=0x18ed;eip=0x001331; 	X(SUB(input_framecount2, 0x2710));	// 48216 sub     input_framecount2, 2710h ;~ 18ED:1331
cs=0x18ed;eip=0x001337; 	X(SUB(input_framecount3, 0x2710));	// 48217 sub     input_framecount3, 2710h ;~ 18ED:1337
loc_287ed:
	// 7711 
cs=0x18ed;eip=0x00133d; 	R(CALLF(kb_get_char,0));	// 48220 call    kb_get_char ;~ 18ED:133D
cs=0x18ed;eip=0x001342; 	T(MOV(si, ax));	// 48221 mov     si, ax ;~ 18ED:1342
cs=0x18ed;eip=0x001344; 	T(OR(si, si));	// 48222 or      si, si ;~ 18ED:1344
cs=0x18ed;eip=0x001346; 	R(JZ(loc_287fd));	// 48223 jz      short loc_287FD ;~ 18ED:1346
cs=0x18ed;eip=0x001348; 	X(MOV(kbormouse, 0));	// 48224 mov     kbormouse, 0 ;~ 18ED:1348
loc_287fd:
	// 7712 
cs=0x18ed;eip=0x00134d; 	R(CALLF(get_joy_flags,0));	// 48227 call    get_joy_flags ;~ 18ED:134D
cs=0x18ed;eip=0x001352; 	T(MOV(di, ax));	// 48228 mov     di, ax ;~ 18ED:1352
cs=0x18ed;eip=0x001354; 	R(CALLF(get_kb_or_joy_flags,0));	// 48229 call    get_kb_or_joy_flags ;~ 18ED:1354
cs=0x18ed;eip=0x001359; 	X(MOV(kbjoyflags, ax));	// 48230 mov     kbjoyflags, ax ;~ 18ED:1359
cs=0x18ed;eip=0x00135c; 	T(CMP(joyflags, di));	// 48231 cmp     joyflags, di ;~ 18ED:135C
cs=0x18ed;eip=0x001360; 	R(JNZ(loc_28815));	// 48232 jnz     short loc_28815 ;~ 18ED:1360
cs=0x18ed;eip=0x001362; 	R(JMP(loc_28896));	// 48233 jmp     loc_28896 ;~ 18ED:1362
loc_28815:
	// 7713 
cs=0x18ed;eip=0x001365; 	T(MOV(ax, joyflags));	// 48237 mov     ax, joyflags ;~ 18ED:1365
cs=0x18ed;eip=0x001368; 	T(XOR(ax, di));	// 48238 xor     ax, di ;~ 18ED:1368
cs=0x18ed;eip=0x00136a; 	T(AND(ax, di));	// 48239 and     ax, di          ; find changed flags from last? ;~ 18ED:136A
cs=0x18ed;eip=0x00136c; 	X(MOV(newjoyflags, ax));	// 48240 mov     newjoyflags, ax ;~ 18ED:136C
cs=0x18ed;eip=0x00136f; 	X(MOV(joyflags, di));	// 48241 mov     joyflags, di ;~ 18ED:136F
loc_28823:
	// 7714 
cs=0x18ed;eip=0x001373; 	T(TEST(*(db*)(((db*)&newjoyflags)), 0x20));	// 48244 test    byte ptr newjoyflags, 20h ;~ 18ED:1373
cs=0x18ed;eip=0x001378; 	R(JZ(loc_28834));	// 48245 jz      short loc_28834 ;~ 18ED:1378
cs=0x18ed;eip=0x00137a; 	X(MOV(joyinputcode, 0x0D));	// 48246 mov     joyinputcode, 0Dh ;~ 18ED:137A
cs=0x18ed;eip=0x001380; 	R(JMP(loc_28881));	// 48247 jmp     short loc_28881 ;~ 18ED:1380
loc_28834:
	// 7715 
cs=0x18ed;eip=0x001384; 	T(TEST(*(db*)(((db*)&newjoyflags)), 0x10));	// 48253 test    byte ptr newjoyflags, 10h ;~ 18ED:1384
cs=0x18ed;eip=0x001389; 	R(JZ(loc_28844));	// 48254 jz      short loc_28844 ;~ 18ED:1389
cs=0x18ed;eip=0x00138b; 	X(MOV(joyinputcode, 0x20));	// 48255 mov     joyinputcode, 20h ; ' ' ;~ 18ED:138B
cs=0x18ed;eip=0x001391; 	R(JMP(loc_28881));	// 48256 jmp     short loc_28881 ;~ 18ED:1391
loc_28844:
	// 7716 
cs=0x18ed;eip=0x001394; 	T(TEST(*(db*)(((db*)&newjoyflags)), 1));	// 48261 test    byte ptr newjoyflags, 1 ;~ 18ED:1394
cs=0x18ed;eip=0x001399; 	R(JZ(loc_28854));	// 48262 jz      short loc_28854 ;~ 18ED:1399
cs=0x18ed;eip=0x00139b; 	X(MOV(joyinputcode, 0x4800));	// 48263 mov     joyinputcode, 4800h ;~ 18ED:139B
cs=0x18ed;eip=0x0013a1; 	R(JMP(loc_28881));	// 48264 jmp     short loc_28881 ;~ 18ED:13A1
loc_28854:
	// 7717 
cs=0x18ed;eip=0x0013a4; 	T(TEST(*(db*)(((db*)&newjoyflags)), 2));	// 48269 test    byte ptr newjoyflags, 2 ;~ 18ED:13A4
cs=0x18ed;eip=0x0013a9; 	R(JZ(loc_28864));	// 48270 jz      short loc_28864 ;~ 18ED:13A9
cs=0x18ed;eip=0x0013ab; 	X(MOV(joyinputcode, 0x5000));	// 48271 mov     joyinputcode, 5000h ;~ 18ED:13AB
cs=0x18ed;eip=0x0013b1; 	R(JMP(loc_28881));	// 48272 jmp     short loc_28881 ;~ 18ED:13B1
loc_28864:
	// 7718 
cs=0x18ed;eip=0x0013b4; 	T(TEST(*(db*)(((db*)&newjoyflags)), 8));	// 48277 test    byte ptr newjoyflags, 8 ;~ 18ED:13B4
cs=0x18ed;eip=0x0013b9; 	R(JZ(loc_28874));	// 48278 jz      short loc_28874 ;~ 18ED:13B9
cs=0x18ed;eip=0x0013bb; 	X(MOV(joyinputcode, 0x4B00));	// 48279 mov     joyinputcode, 4B00h ;~ 18ED:13BB
cs=0x18ed;eip=0x0013c1; 	R(JMP(loc_28881));	// 48280 jmp     short loc_28881 ;~ 18ED:13C1
loc_28874:
	// 7719 
cs=0x18ed;eip=0x0013c4; 	T(TEST(*(db*)(((db*)&newjoyflags)), 4));	// 48285 test    byte ptr newjoyflags, 4 ;~ 18ED:13C4
cs=0x18ed;eip=0x0013c9; 	R(JZ(loc_28881));	// 48286 jz      short loc_28881 ;~ 18ED:13C9
cs=0x18ed;eip=0x0013cb; 	X(MOV(joyinputcode, 0x4D00));	// 48287 mov     joyinputcode, 4D00h ;~ 18ED:13CB
loc_28881:
	// 7720 
cs=0x18ed;eip=0x0013d1; 	T(CMP(joyinputcode, 0));	// 48291 cmp     joyinputcode, 0 ;~ 18ED:13D1
cs=0x18ed;eip=0x0013d6; 	R(JZ(loc_288a9));	// 48292 jz      short loc_288A9 ;~ 18ED:13D6
cs=0x18ed;eip=0x0013d8; 	T(MOV(ax, input_framecount));	// 48293 mov     ax, input_framecount ;~ 18ED:13D8
cs=0x18ed;eip=0x0013db; 	X(MOV(input_framecount3, ax));	// 48294 mov     input_framecount3, ax ;~ 18ED:13DB
cs=0x18ed;eip=0x0013de; 	X(MOV(kbormouse, 0));	// 48295 mov     kbormouse, 0 ;~ 18ED:13DE
cs=0x18ed;eip=0x0013e3; 	R(JMP(loc_288a9));	// 48296 jmp     short loc_288A9 ;~ 18ED:13E3
loc_28896:
	// 7721 
cs=0x18ed;eip=0x0013e6; 	T(OR(di, di));	// 48301 or      di, di ;~ 18ED:13E6
cs=0x18ed;eip=0x0013e8; 	R(JZ(loc_288a9));	// 48302 jz      short loc_288A9 ;~ 18ED:13E8
cs=0x18ed;eip=0x0013ea; 	T(MOV(ax, input_framecount3));	// 48303 mov     ax, input_framecount3 ;~ 18ED:13EA
cs=0x18ed;eip=0x0013ed; 	T(ADD(ax, 0x14));	// 48304 add     ax, 14h ;~ 18ED:13ED
cs=0x18ed;eip=0x0013f0; 	T(CMP(ax, input_framecount));	// 48305 cmp     ax, input_framecount ;~ 18ED:13F0
cs=0x18ed;eip=0x0013f4; 	R(JGE(loc_288a9));	// 48306 jge     short loc_288A9 ;~ 18ED:13F4
cs=0x18ed;eip=0x0013f6; 	R(JMP(loc_28823));	// 48307 jmp     loc_28823 ;~ 18ED:13F6
loc_288a9:
	// 7722 
cs=0x18ed;eip=0x0013f9; 	T(MOV(ax, offset(dseg,mouse_ypos)));	// 48312 mov     ax, offset mouse_ypos ;~ 18ED:13F9
cs=0x18ed;eip=0x0013fc; 	X(PUSH(ax));	// 48313 push    ax ;~ 18ED:13FC
cs=0x18ed;eip=0x0013fd; 	T(MOV(ax, offset(dseg,mouse_xpos)));	// 48314 mov     ax, offset mouse_xpos ;~ 18ED:13FD
cs=0x18ed;eip=0x001400; 	X(PUSH(ax));	// 48315 push    ax ;~ 18ED:1400
cs=0x18ed;eip=0x001401; 	T(MOV(ax, offset(dseg,mouse_butstate)));	// 48316 mov     ax, offset mouse_butstate ;~ 18ED:1401
cs=0x18ed;eip=0x001404; 	X(PUSH(ax));	// 48317 push    ax ;~ 18ED:1404
cs=0x18ed;eip=0x001405; 	R(CALLF(mouse_get_state,0));	// 48318 call    mouse_get_state ;~ 18ED:1405
cs=0x18ed;eip=0x00140a; 	T(ADD(sp, 6));	// 48319 add     sp, 6 ;~ 18ED:140A
cs=0x18ed;eip=0x00140d; 	T(MOV(ax, mouse_xpos));	// 48320 mov     ax, mouse_xpos ;~ 18ED:140D
cs=0x18ed;eip=0x001410; 	T(CMP(mouse_oldx, ax));	// 48321 cmp     mouse_oldx, ax ;~ 18ED:1410
cs=0x18ed;eip=0x001414; 	R(JNZ(loc_288d8));	// 48322 jnz     short loc_288D8 ;~ 18ED:1414
cs=0x18ed;eip=0x001416; 	T(MOV(ax, mouse_ypos));	// 48323 mov     ax, mouse_ypos ;~ 18ED:1416
cs=0x18ed;eip=0x001419; 	T(CMP(mouse_oldy, ax));	// 48324 cmp     mouse_oldy, ax ;~ 18ED:1419
cs=0x18ed;eip=0x00141d; 	R(JNZ(loc_288d8));	// 48325 jnz     short loc_288D8 ;~ 18ED:141D
cs=0x18ed;eip=0x00141f; 	T(MOV(ax, mouse_butstate));	// 48326 mov     ax, mouse_butstate ;~ 18ED:141F
cs=0x18ed;eip=0x001422; 	T(CMP(mouse_oldbut, ax));	// 48327 cmp     mouse_oldbut, ax ;~ 18ED:1422
cs=0x18ed;eip=0x001426; 	R(JZ(loc_28908));	// 48328 jz      short loc_28908 ;~ 18ED:1426
loc_288d8:
	// 7723 
cs=0x18ed;eip=0x001428; 	T(MOV(ax, mouse_xpos));	// 48332 mov     ax, mouse_xpos ;~ 18ED:1428
cs=0x18ed;eip=0x00142b; 	X(MOV(mouse_oldx, ax));	// 48333 mov     mouse_oldx, ax ;~ 18ED:142B
cs=0x18ed;eip=0x00142e; 	T(MOV(ax, mouse_ypos));	// 48334 mov     ax, mouse_ypos ;~ 18ED:142E
cs=0x18ed;eip=0x001431; 	X(MOV(mouse_oldy, ax));	// 48335 mov     mouse_oldy, ax ;~ 18ED:1431
cs=0x18ed;eip=0x001434; 	X(MOV(kbormouse, 1));	// 48336 mov     kbormouse, 1 ;~ 18ED:1434
cs=0x18ed;eip=0x001439; 	X(MOV(input_framecounter, 0));	// 48337 mov     input_framecounter, 0 ;~ 18ED:1439
cs=0x18ed;eip=0x00143f; 	T(CMP(byte_3b8f7, 0));	// 48338 cmp     byte_3B8F7, 0 ;~ 18ED:143F
cs=0x18ed;eip=0x001444; 	R(JZ(loc_28934));	// 48339 jz      short loc_28934 ;~ 18ED:1444
cs=0x18ed;eip=0x001446; 	T(CMP(mouse_isdirty, 0));	// 48340 cmp     mouse_isdirty, 0 ;~ 18ED:1446
cs=0x18ed;eip=0x00144b; 	R(JZ(loc_28901));	// 48341 jz      short loc_28901 ;~ 18ED:144B
cs=0x18ed;eip=0x00144d; 	X(PUSH(cs));	// 48342 push    cs ;~ 18ED:144D
cs=0x18ed;eip=0x00144e; 	R(CALL(mouse_draw_opaque,0));	// 48343 call    near ptr mouse_draw_opaque ;~ 18ED:144E
loc_28901:
	// 7724 
cs=0x18ed;eip=0x001451; 	X(PUSH(cs));	// 48346 push    cs ;~ 18ED:1451
cs=0x18ed;eip=0x001452; 	R(CALL(mouse_draw_transparent,0));	// 48347 call    near ptr mouse_draw_transparent ;~ 18ED:1452
cs=0x18ed;eip=0x001455; 	R(JMP(loc_28934));	// 48348 jmp     short loc_28934 ;~ 18ED:1455
loc_28908:
	// 7725 
cs=0x18ed;eip=0x001458; 	T(CMP(kbormouse, 0));	// 48353 cmp     kbormouse, 0 ;~ 18ED:1458
cs=0x18ed;eip=0x00145d; 	R(JZ(loc_28934));	// 48354 jz      short loc_28934 ;~ 18ED:145D
cs=0x18ed;eip=0x00145f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 48355 mov     ax, [bp+arg_0] ;~ 18ED:145F
cs=0x18ed;eip=0x001462; 	X(ADD(input_framecounter, ax));	// 48356 add     input_framecounter, ax ;~ 18ED:1462
cs=0x18ed;eip=0x001466; 	T(CMP(input_framecounter, 0x1F4));	// 48357 cmp     input_framecounter, 1F4h ;~ 18ED:1466
cs=0x18ed;eip=0x00146c; 	R(JLE(loc_28934));	// 48358 jle     short loc_28934 ;~ 18ED:146C
cs=0x18ed;eip=0x00146e; 	X(MOV(input_framecounter, 0));	// 48359 mov     input_framecounter, 0 ;~ 18ED:146E
cs=0x18ed;eip=0x001474; 	X(MOV(kbormouse, 0));	// 48360 mov     kbormouse, 0 ;~ 18ED:1474
cs=0x18ed;eip=0x001479; 	T(CMP(mouse_isdirty, 0));	// 48361 cmp     mouse_isdirty, 0 ;~ 18ED:1479
cs=0x18ed;eip=0x00147e; 	R(JZ(loc_28934));	// 48362 jz      short loc_28934 ;~ 18ED:147E
cs=0x18ed;eip=0x001480; 	X(PUSH(cs));	// 48363 push    cs ;~ 18ED:1480
cs=0x18ed;eip=0x001481; 	R(CALL(mouse_draw_opaque,0));	// 48364 call    near ptr mouse_draw_opaque ;~ 18ED:1481
loc_28934:
	// 7726 
cs=0x18ed;eip=0x001484; 	T(CMP(kbormouse, 0));	// 48368 cmp     kbormouse, 0 ;~ 18ED:1484
cs=0x18ed;eip=0x001489; 	R(JZ(_try_ret_joyinput));	// 48369 jz      short _try_ret_joyinput ;~ 18ED:1489
cs=0x18ed;eip=0x00148b; 	T(MOV(ax, mouse_oldbut));	// 48370 mov     ax, mouse_oldbut ;~ 18ED:148B
cs=0x18ed;eip=0x00148e; 	T(CMP(mouse_butstate, ax));	// 48371 cmp     mouse_butstate, ax ;~ 18ED:148E
cs=0x18ed;eip=0x001492; 	R(JZ(loc_2897c));	// 48372 jz      short loc_2897C ;~ 18ED:1492
cs=0x18ed;eip=0x001494; 	T(MOV(ax, mouse_butstate));	// 48373 mov     ax, mouse_butstate ;~ 18ED:1494
cs=0x18ed;eip=0x001497; 	X(MOV(mouse_oldbut, ax));	// 48374 mov     mouse_oldbut, ax ;~ 18ED:1497
loc_2894a:
	// 7727 
cs=0x18ed;eip=0x00149a; 	T(TEST(*(db*)(((db*)&mouse_butstate)), 1));	// 48377 test    byte ptr mouse_butstate, 1 ;~ 18ED:149A
cs=0x18ed;eip=0x00149f; 	R(JZ(loc_2895a));	// 48378 jz      short loc_2895A ;~ 18ED:149F
cs=0x18ed;eip=0x0014a1; 	X(MOV(mousebutinputcode, 0x20));	// 48379 mov     mousebutinputcode, 20h ; ' ' ;~ 18ED:14A1
cs=0x18ed;eip=0x0014a7; 	R(JMP(loc_28967));	// 48380 jmp     short loc_28967 ;~ 18ED:14A7
loc_2895a:
	// 7728 
cs=0x18ed;eip=0x0014aa; 	T(TEST(*(db*)(((db*)&mouse_butstate)), 2));	// 48385 test    byte ptr mouse_butstate, 2 ;~ 18ED:14AA
cs=0x18ed;eip=0x0014af; 	R(JZ(loc_28967));	// 48386 jz      short loc_28967 ;~ 18ED:14AF
cs=0x18ed;eip=0x0014b1; 	X(MOV(mousebutinputcode, 0x0D));	// 48387 mov     mousebutinputcode, 0Dh ;~ 18ED:14B1
loc_28967:
	// 7729 
cs=0x18ed;eip=0x0014b7; 	T(CMP(mousebutinputcode, 0));	// 48391 cmp     mousebutinputcode, 0 ;~ 18ED:14B7
cs=0x18ed;eip=0x0014bc; 	R(JZ(loc_28974));	// 48392 jz      short loc_28974 ;~ 18ED:14BC
cs=0x18ed;eip=0x0014be; 	T(MOV(ax, input_framecount));	// 48393 mov     ax, input_framecount ;~ 18ED:14BE
cs=0x18ed;eip=0x0014c1; 	X(MOV(input_framecount2, ax));	// 48394 mov     input_framecount2, ax ;~ 18ED:14C1
loc_28974:
	// 7730 
cs=0x18ed;eip=0x0014c4; 	X(MOV(input_framecounter, 0));	// 48397 mov     input_framecounter, 0 ;~ 18ED:14C4
cs=0x18ed;eip=0x0014ca; 	R(JMP(_try_ret_mousebut01));	// 48398 jmp     short _try_ret_mousebut01 ;~ 18ED:14CA
loc_2897c:
	// 7731 
cs=0x18ed;eip=0x0014cc; 	T(CMP(mouse_butstate, 0));	// 48402 cmp     mouse_butstate, 0 ;~ 18ED:14CC
cs=0x18ed;eip=0x0014d1; 	R(JZ(_try_ret_mousebut01));	// 48403 jz      short _try_ret_mousebut01 ;~ 18ED:14D1
cs=0x18ed;eip=0x0014d3; 	T(MOV(ax, input_framecount2));	// 48404 mov     ax, input_framecount2 ;~ 18ED:14D3
cs=0x18ed;eip=0x0014d6; 	T(ADD(ax, 0x14));	// 48405 add     ax, 14h ;~ 18ED:14D6
cs=0x18ed;eip=0x0014d9; 	T(CMP(ax, input_framecount));	// 48406 cmp     ax, input_framecount ;~ 18ED:14D9
cs=0x18ed;eip=0x0014dd; 	R(JL(loc_2894a));	// 48407 jl      short loc_2894A ;~ 18ED:14DD
_try_ret_mousebut01:
	// 7732 
cs=0x18ed;eip=0x0014df; 	T(CMP(mouse_butstate, 0));	// 48411 cmp     mouse_butstate, 0 ;~ 18ED:14DF
cs=0x18ed;eip=0x0014e4; 	R(JZ(_try_ret_joyinput));	// 48412 jz      short _try_ret_joyinput ;~ 18ED:14E4
cs=0x18ed;eip=0x0014e6; 	T(TEST(*(db*)(((db*)&mouse_butstate)), 1));	// 48413 test    byte ptr mouse_butstate, 1 ;~ 18ED:14E6
cs=0x18ed;eip=0x0014eb; 	R(JZ(_try_ret_mousebut2));	// 48414 jz      short _try_ret_mousebut2 ;~ 18ED:14EB
cs=0x18ed;eip=0x0014ed; 	X(OR(*(db*)(((db*)&kbjoyflags)), 0x20));	// 48415 or      byte ptr kbjoyflags, 20h ;~ 18ED:14ED
cs=0x18ed;eip=0x0014f2; 	R(JMP(_try_ret_joyinput));	// 48416 jmp     short _try_ret_joyinput ;~ 18ED:14F2
_try_ret_mousebut2:
	// 7733 
cs=0x18ed;eip=0x0014f4; 	T(TEST(*(db*)(((db*)&mouse_butstate)), 2));	// 48420 test    byte ptr mouse_butstate, 2 ;~ 18ED:14F4
cs=0x18ed;eip=0x0014f9; 	R(JZ(_try_ret_joyinput));	// 48421 jz      short _try_ret_joyinput ;~ 18ED:14F9
cs=0x18ed;eip=0x0014fb; 	X(OR(*(db*)(((db*)&kbjoyflags)), 0x10));	// 48422 or      byte ptr kbjoyflags, 10h ;~ 18ED:14FB
_try_ret_joyinput:
	// 7734 
cs=0x18ed;eip=0x001500; 	T(OR(si, si));	// 48426 or      si, si ;~ 18ED:1500
cs=0x18ed;eip=0x001502; 	R(JNZ(loc_289d9));	// 48427 jnz     short loc_289D9 ;~ 18ED:1502
cs=0x18ed;eip=0x001504; 	T(CMP(joyinputcode, 0));	// 48428 cmp     joyinputcode, 0 ;~ 18ED:1504
cs=0x18ed;eip=0x001509; 	R(JZ(_try_ret_mousebutinput));	// 48429 jz      short _try_ret_mousebutinput ;~ 18ED:1509
cs=0x18ed;eip=0x00150b; 	T(MOV(si, joyinputcode));	// 48430 mov     si, joyinputcode ;~ 18ED:150B
cs=0x18ed;eip=0x00150f; 	X(MOV(joyinputcode, 0));	// 48431 mov     joyinputcode, 0 ;~ 18ED:150F
cs=0x18ed;eip=0x001515; 	R(JMP(loc_289d9));	// 48432 jmp     short loc_289D9 ;~ 18ED:1515
_try_ret_mousebutinput:
	// 7735 
cs=0x18ed;eip=0x001518; 	T(CMP(mousebutinputcode, 0));	// 48437 cmp     mousebutinputcode, 0 ;~ 18ED:1518
cs=0x18ed;eip=0x00151d; 	R(JZ(loc_289d9));	// 48438 jz      short loc_289D9 ;~ 18ED:151D
cs=0x18ed;eip=0x00151f; 	T(MOV(si, mousebutinputcode));	// 48439 mov     si, mousebutinputcode ;~ 18ED:151F
cs=0x18ed;eip=0x001523; 	X(MOV(mousebutinputcode, 0));	// 48440 mov     mousebutinputcode, 0 ;~ 18ED:1523
loc_289d9:
	// 7736 
cs=0x18ed;eip=0x001529; 	T(MOV(ax, si));	// 48444 mov     ax, si ;~ 18ED:1529
cs=0x18ed;eip=0x00152b; 	X(POP(si));	// 48445 pop     si ;~ 18ED:152B
cs=0x18ed;eip=0x00152c; 	X(POP(di));	// 48446 pop     di ;~ 18ED:152C
cs=0x18ed;eip=0x00152d; 	T(MOV(sp, bp));	// 48447 mov     sp, bp ;~ 18ED:152D
cs=0x18ed;eip=0x00152f; 	X(POP(bp));	// 48448 pop     bp ;~ 18ED:152F
cs=0x18ed;eip=0x001530; 	R(RETF(0));	// 48449 retf ;~ 18ED:1530
input_do_checking:
	// 48459 
#undef arg_0
#define arg_0 6
	// 48462 arg_0           = word ptr  6 ;~ 18ED:1532
ret_18ed_1532:
	// 7737 
cs=0x18ed;eip=0x001532; 	X(PUSH(bp));	// 48464 push    bp ;~ 18ED:1532
cs=0x18ed;eip=0x001533; 	T(MOV(bp, sp));	// 48465 mov     bp, sp ;~ 18ED:1533
cs=0x18ed;eip=0x001535; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 48466 push    [bp+arg_0] ;~ 18ED:1535
cs=0x18ed;eip=0x001538; 	X(PUSH(cs));	// 48467 push    cs ;~ 18ED:1538
cs=0x18ed;eip=0x001539; 	R(CALL(input_checking,0));	// 48468 call    near ptr input_checking ;~ 18ED:1539
cs=0x18ed;eip=0x00153c; 	T(ADD(sp, 2));	// 48469 add     sp, 2 ;~ 18ED:153C
cs=0x18ed;eip=0x00153f; 	X(POP(bp));	// 48470 pop     bp ;~ 18ED:153F
cs=0x18ed;eip=0x001540; 	R(RETF(0));	// 48471 retf ;~ 18ED:1540
file_load_resfile:
	// 48481 
#undef var_54
#define var_54 -0x54
	// 48484 var_54          = byte ptr -54h ;~ 18ED:1542
#undef var_4
#define var_4 -4
	// 48485 var_4           = word ptr -4 ;~ 18ED:1542
#undef var_2
#define var_2 -2
	// 48486 var_2           = word ptr -2 ;~ 18ED:1542
#undef arg_0
#define arg_0 6
	// 48487 arg_0           = word ptr  6 ;~ 18ED:1542
ret_18ed_1542:
	// 7738 
cs=0x18ed;eip=0x001542; 	X(PUSH(bp));	// 48489 push    bp ;~ 18ED:1542
cs=0x18ed;eip=0x001543; 	T(MOV(bp, sp));	// 48490 mov     bp, sp ;~ 18ED:1543
cs=0x18ed;eip=0x001545; 	T(SUB(sp, 0x54));	// 48491 sub     sp, 54h ;~ 18ED:1545
loc_289f8:
	// 7739 
cs=0x18ed;eip=0x001548; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 48494 push    [bp+arg_0] ;~ 18ED:1548
cs=0x18ed;eip=0x00154b; 	T(ax = bp+var_54);	// 48495 lea     ax, [bp+var_54] ;~ 18ED:154B
cs=0x18ed;eip=0x00154e; 	X(PUSH(ax));	// 48496 push    ax              ; char * ;~ 18ED:154E
cs=0x18ed;eip=0x00154f; 	R(CALLF(_strcpy,0));	// 48497 call    _strcpy ;~ 18ED:154F
cs=0x18ed;eip=0x001554; 	T(ADD(sp, 4));	// 48498 add     sp, 4 ;~ 18ED:1554
cs=0x18ed;eip=0x001557; 	T(MOV(ax, offset(dseg,a_res)));	// 48499 mov     ax, offset a_res ; ".res" ;~ 18ED:1557
cs=0x18ed;eip=0x00155a; 	X(PUSH(ax));	// 48500 push    ax ;~ 18ED:155A
cs=0x18ed;eip=0x00155b; 	T(ax = bp+var_54);	// 48501 lea     ax, [bp+var_54] ;~ 18ED:155B
cs=0x18ed;eip=0x00155e; 	X(PUSH(ax));	// 48502 push    ax              ; char * ;~ 18ED:155E
cs=0x18ed;eip=0x00155f; 	R(CALLF(_strcat,0));	// 48503 call    _strcat ;~ 18ED:155F
cs=0x18ed;eip=0x001564; 	T(ADD(sp, 4));	// 48504 add     sp, 4 ;~ 18ED:1564
cs=0x18ed;eip=0x001567; 	T(ax = bp+var_54);	// 48505 lea     ax, [bp+var_54] ;~ 18ED:1567
cs=0x18ed;eip=0x00156a; 	X(PUSH(ax));	// 48506 push    ax              ; char * ;~ 18ED:156A
cs=0x18ed;eip=0x00156b; 	T(MOV(ax, 1));	// 48507 mov     ax, 1 ;~ 18ED:156B
cs=0x18ed;eip=0x00156e; 	X(PUSH(ax));	// 48508 push    ax              ; int ;~ 18ED:156E
cs=0x18ed;eip=0x00156f; 	X(PUSH(cs));	// 48509 push    cs ;~ 18ED:156F
cs=0x18ed;eip=0x001570; 	R(CALL(file_load_resource,0));	// 48510 call    near ptr file_load_resource ;~ 18ED:1570
cs=0x18ed;eip=0x001573; 	T(ADD(sp, 4));	// 48511 add     sp, 4 ;~ 18ED:1573
cs=0x18ed;eip=0x001576; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 48512 mov     [bp+var_4], ax ;~ 18ED:1576
cs=0x18ed;eip=0x001579; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 48513 mov     [bp+var_2], dx ;~ 18ED:1579
cs=0x18ed;eip=0x00157c; 	T(OR(ax, dx));	// 48514 or      ax, dx ;~ 18ED:157C
cs=0x18ed;eip=0x00157e; 	R(JNZ(loc_28a6e));	// 48515 jnz     short loc_28A6E ;~ 18ED:157E
cs=0x18ed;eip=0x001580; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 48516 push    [bp+arg_0] ;~ 18ED:1580
cs=0x18ed;eip=0x001583; 	T(ax = bp+var_54);	// 48517 lea     ax, [bp+var_54] ;~ 18ED:1583
cs=0x18ed;eip=0x001586; 	X(PUSH(ax));	// 48518 push    ax              ; char * ;~ 18ED:1586
cs=0x18ed;eip=0x001587; 	R(CALLF(_strcpy,0));	// 48519 call    _strcpy ;~ 18ED:1587
cs=0x18ed;eip=0x00158c; 	T(ADD(sp, 4));	// 48520 add     sp, 4 ;~ 18ED:158C
cs=0x18ed;eip=0x00158f; 	T(MOV(ax, offset(dseg,a_pre)));	// 48521 mov     ax, offset a_pre ; ".pre" ;~ 18ED:158F
cs=0x18ed;eip=0x001592; 	X(PUSH(ax));	// 48522 push    ax ;~ 18ED:1592
cs=0x18ed;eip=0x001593; 	T(ax = bp+var_54);	// 48523 lea     ax, [bp+var_54] ;~ 18ED:1593
cs=0x18ed;eip=0x001596; 	X(PUSH(ax));	// 48524 push    ax              ; char * ;~ 18ED:1596
cs=0x18ed;eip=0x001597; 	R(CALLF(_strcat,0));	// 48525 call    _strcat ;~ 18ED:1597
cs=0x18ed;eip=0x00159c; 	T(ADD(sp, 4));	// 48526 add     sp, 4 ;~ 18ED:159C
cs=0x18ed;eip=0x00159f; 	T(ax = bp+var_54);	// 48527 lea     ax, [bp+var_54] ;~ 18ED:159F
cs=0x18ed;eip=0x0015a2; 	X(PUSH(ax));	// 48528 push    ax              ; char * ;~ 18ED:15A2
cs=0x18ed;eip=0x0015a3; 	T(MOV(ax, 7));	// 48529 mov     ax, 7 ;~ 18ED:15A3
cs=0x18ed;eip=0x0015a6; 	X(PUSH(ax));	// 48530 push    ax              ; int ;~ 18ED:15A6
cs=0x18ed;eip=0x0015a7; 	X(PUSH(cs));	// 48531 push    cs ;~ 18ED:15A7
cs=0x18ed;eip=0x0015a8; 	R(CALL(file_load_resource,0));	// 48532 call    near ptr file_load_resource ;~ 18ED:15A8
cs=0x18ed;eip=0x0015ab; 	T(ADD(sp, 4));	// 48533 add     sp, 4 ;~ 18ED:15AB
cs=0x18ed;eip=0x0015ae; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 48534 mov     [bp+var_4], ax ;~ 18ED:15AE
cs=0x18ed;eip=0x0015b1; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 48535 mov     [bp+var_2], dx ;~ 18ED:15B1
cs=0x18ed;eip=0x0015b4; 	T(OR(ax, dx));	// 48536 or      ax, dx ;~ 18ED:15B4
cs=0x18ed;eip=0x0015b6; 	R(JNZ(loc_28a6e));	// 48537 jnz     short loc_28A6E ;~ 18ED:15B6
cs=0x18ed;eip=0x0015b8; 	X(PUSH(cs));	// 48538 push    cs ;~ 18ED:15B8
cs=0x18ed;eip=0x0015b9; 	R(CALL(do_dea_textres,0));	// 48539 call    near ptr do_dea_textres ;~ 18ED:15B9
cs=0x18ed;eip=0x0015bc; 	R(JMP(loc_289f8));	// 48540 jmp     short loc_289F8 ;~ 18ED:15BC
loc_28a6e:
	// 7740 
cs=0x18ed;eip=0x0015be; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 48545 mov     ax, [bp+var_4] ;~ 18ED:15BE
cs=0x18ed;eip=0x0015c1; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 48546 mov     dx, [bp+var_2] ;~ 18ED:15C1
cs=0x18ed;eip=0x0015c4; 	T(MOV(sp, bp));	// 48547 mov     sp, bp ;~ 18ED:15C4
cs=0x18ed;eip=0x0015c6; 	X(POP(bp));	// 48548 pop     bp ;~ 18ED:15C6
cs=0x18ed;eip=0x0015c7; 	R(RETF(0));	// 48549 retf ;~ 18ED:15C7
unload_resource:
	// 48557 
#undef arg_0
#define arg_0 6
	// 48560 arg_0           = word ptr  6 ;~ 18ED:15C8
#undef arg_2
#define arg_2 8
	// 48561 arg_2           = word ptr  8 ;~ 18ED:15C8
ret_18ed_15c8:
	// 7741 
cs=0x18ed;eip=0x0015c8; 	X(PUSH(bp));	// 48563 push    bp ;~ 18ED:15C8
cs=0x18ed;eip=0x0015c9; 	T(MOV(bp, sp));	// 48564 mov     bp, sp ;~ 18ED:15C9
cs=0x18ed;eip=0x0015cb; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 48565 push    [bp+arg_2] ;~ 18ED:15CB
cs=0x18ed;eip=0x0015ce; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 48566 push    [bp+arg_0] ;~ 18ED:15CE
cs=0x18ed;eip=0x0015d1; 	R(CALLF(mmgr_free,0));	// 48567 call    mmgr_free ;~ 18ED:15D1
cs=0x18ed;eip=0x0015d6; 	T(ADD(sp, 4));	// 48568 add     sp, 4 ;~ 18ED:15D6
cs=0x18ed;eip=0x0015d9; 	X(POP(bp));	// 48569 pop     bp ;~ 18ED:15D9
cs=0x18ed;eip=0x0015da; 	R(RETF(0));	// 48570 retf ;~ 18ED:15DA
locate_shape_alt:
	// 48580 
#undef arg_0
#define arg_0 6
	// 48583 arg_0           = word ptr  6 ;~ 18ED:15DC
#undef arg_2
#define arg_2 8
	// 48584 arg_2           = word ptr  8 ;~ 18ED:15DC
#undef arg_4
#define arg_4 0x0A
	// 48585 arg_4           = word ptr  0Ah ;~ 18ED:15DC
ret_18ed_15dc:
	// 7742 
cs=0x18ed;eip=0x0015dc; 	X(PUSH(bp));	// 48587 push    bp ;~ 18ED:15DC
cs=0x18ed;eip=0x0015dd; 	T(MOV(bp, sp));	// 48588 mov     bp, sp ;~ 18ED:15DD
cs=0x18ed;eip=0x0015df; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 48589 push    [bp+arg_4] ;~ 18ED:15DF
cs=0x18ed;eip=0x0015e2; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 48590 push    [bp+arg_2] ;~ 18ED:15E2
cs=0x18ed;eip=0x0015e5; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 48591 push    [bp+arg_0] ;~ 18ED:15E5
cs=0x18ed;eip=0x0015e8; 	R(CALLF(locate_shape_fatal,0));	// 48592 call    locate_shape_fatal ;~ 18ED:15E8
cs=0x18ed;eip=0x0015ed; 	T(ADD(sp, 6));	// 48593 add     sp, 6 ;~ 18ED:15ED
cs=0x18ed;eip=0x0015f0; 	X(POP(bp));	// 48594 pop     bp ;~ 18ED:15F0
cs=0x18ed;eip=0x0015f1; 	R(RETF(0));	// 48595 retf ;~ 18ED:15F1
locate_text_res:
	// 48603 
#undef var_4
#define var_4 -4
	// 48606 var_4           = byte ptr -4 ;~ 18ED:15F2
#undef var_3
#define var_3 -3
	// 48607 var_3           = byte ptr -3 ;~ 18ED:15F2
#undef var_2
#define var_2 -2
	// 48608 var_2           = byte ptr -2 ;~ 18ED:15F2
#undef var_1
#define var_1 -1
	// 48609 var_1           = byte ptr -1 ;~ 18ED:15F2
#undef arg_0
#define arg_0 6
	// 48610 arg_0           = word ptr  6 ;~ 18ED:15F2
#undef arg_2
#define arg_2 8
	// 48611 arg_2           = word ptr  8 ;~ 18ED:15F2
#undef arg_4
#define arg_4 0x0A
	// 48612 arg_4           = word ptr  0Ah ;~ 18ED:15F2
ret_18ed_15f2:
	// 7743 
cs=0x18ed;eip=0x0015f2; 	X(PUSH(bp));	// 48614 push    bp ;~ 18ED:15F2
cs=0x18ed;eip=0x0015f3; 	T(MOV(bp, sp));	// 48615 mov     bp, sp ;~ 18ED:15F3
cs=0x18ed;eip=0x0015f5; 	T(SUB(sp, 4));	// 48616 sub     sp, 4 ;~ 18ED:15F5
cs=0x18ed;eip=0x0015f8; 	T(MOV(al, textresprefix));	// 48617 mov     al, textresprefix ;~ 18ED:15F8
cs=0x18ed;eip=0x0015fb; 	X(MOV(*(raddr(ss,bp+var_4)), al));	// 48618 mov     [bp+var_4], al ;~ 18ED:15FB
cs=0x18ed;eip=0x0015fe; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 48619 mov     bx, [bp+arg_4] ;~ 18ED:15FE
cs=0x18ed;eip=0x001601; 	T(MOV(al, *(raddr(ds,bx))));	// 48620 mov     al, [bx] ;~ 18ED:1601
cs=0x18ed;eip=0x001603; 	X(MOV(*(raddr(ss,bp+var_3)), al));	// 48621 mov     [bp+var_3], al ;~ 18ED:1603
cs=0x18ed;eip=0x001606; 	T(MOV(al, *(raddr(ds,bx+1))));	// 48622 mov     al, [bx+1] ;~ 18ED:1606
cs=0x18ed;eip=0x001609; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 48623 mov     [bp+var_2], al ;~ 18ED:1609
cs=0x18ed;eip=0x00160c; 	T(MOV(al, *(raddr(ds,bx+2))));	// 48624 mov     al, [bx+2] ;~ 18ED:160C
cs=0x18ed;eip=0x00160f; 	X(MOV(*(raddr(ss,bp+var_1)), al));	// 48625 mov     [bp+var_1], al ;~ 18ED:160F
cs=0x18ed;eip=0x001612; 	T(ax = bp+var_4);	// 48626 lea     ax, [bp+var_4] ;~ 18ED:1612
cs=0x18ed;eip=0x001615; 	X(PUSH(ax));	// 48627 push    ax ;~ 18ED:1615
cs=0x18ed;eip=0x001616; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 48628 push    [bp+arg_2] ;~ 18ED:1616
cs=0x18ed;eip=0x001619; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 48629 push    [bp+arg_0] ;~ 18ED:1619
cs=0x18ed;eip=0x00161c; 	R(CALLF(locate_shape_fatal,0));	// 48630 call    locate_shape_fatal ;~ 18ED:161C
cs=0x18ed;eip=0x001621; 	T(MOV(sp, bp));	// 48631 mov     sp, bp ;~ 18ED:1621
cs=0x18ed;eip=0x001623; 	X(POP(bp));	// 48632 pop     bp ;~ 18ED:1623
cs=0x18ed;eip=0x001624; 	R(RETF(0));	// 48633 retf ;~ 18ED:1624
copy_string:
	// 48643 
#undef var_4
#define var_4 -4
	// 48646 var_4           = dword ptr -4 ;~ 18ED:1626
#undef arg_0
#define arg_0 6
	// 48647 arg_0           = word ptr  6 ;~ 18ED:1626
#undef arg_2
#define arg_2 8
	// 48648 arg_2           = word ptr  8 ;~ 18ED:1626
#undef arg_4
#define arg_4 0x0A
	// 48649 arg_4           = word ptr  0Ah ;~ 18ED:1626
ret_18ed_1626:
	// 7744 
cs=0x18ed;eip=0x001626; 	X(PUSH(bp));	// 48651 push    bp ;~ 18ED:1626
cs=0x18ed;eip=0x001627; 	T(MOV(bp, sp));	// 48652 mov     bp, sp ;~ 18ED:1627
cs=0x18ed;eip=0x001629; 	T(SUB(sp, 4));	// 48653 sub     sp, 4 ;~ 18ED:1629
cs=0x18ed;eip=0x00162c; 	X(PUSH(si));	// 48654 push    si ;~ 18ED:162C
cs=0x18ed;eip=0x00162d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 48655 mov     ax, [bp+arg_2] ;~ 18ED:162D
cs=0x18ed;eip=0x001630; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_4))));	// 48656 mov     dx, [bp+arg_4] ;~ 18ED:1630
cs=0x18ed;eip=0x001633; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 48657 mov     word ptr [bp+var_4], ax ;~ 18ED:1633
cs=0x18ed;eip=0x001636; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 48658 mov     word ptr [bp+var_4+2], dx ;~ 18ED:1636
loc_28ae9:
	// 7745 
cs=0x18ed;eip=0x001639; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 48661 mov     bx, [bp+arg_0] ;~ 18ED:1639
cs=0x18ed;eip=0x00163c; 	T(LES(si, *(dd*)(raddr(ss,bp+var_4))));	// 48662 les     si, [bp+var_4] ;~ 18ED:163C
cs=0x18ed;eip=0x00163f; 	T(MOV(al, *(raddr(es,si))));	// 48663 mov     al, es:[si] ;~ 18ED:163F
cs=0x18ed;eip=0x001642; 	X(MOV(*(raddr(ds,bx)), al));	// 48664 mov     [bx], al ;~ 18ED:1642
cs=0x18ed;eip=0x001644; 	X(INC(*(dw*)(raddr(ss,bp+arg_0))));	// 48665 inc     [bp+arg_0] ;~ 18ED:1644
cs=0x18ed;eip=0x001647; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 48666 inc     word ptr [bp+var_4] ;~ 18ED:1647
cs=0x18ed;eip=0x00164a; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 48667 les     bx, [bp+var_4] ;~ 18ED:164A
cs=0x18ed;eip=0x00164d; 	T(CMP(*(raddr(es,bx)), 0));	// 48668 cmp     byte ptr es:[bx], 0 ;~ 18ED:164D
cs=0x18ed;eip=0x001651; 	R(JNZ(loc_28ae9));	// 48669 jnz     short loc_28AE9 ;~ 18ED:1651
cs=0x18ed;eip=0x001653; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 48670 mov     bx, [bp+arg_0] ;~ 18ED:1653
cs=0x18ed;eip=0x001656; 	X(MOV(*(raddr(ds,bx)), 0));	// 48671 mov     byte ptr [bx], 0 ;~ 18ED:1656
cs=0x18ed;eip=0x001659; 	X(POP(si));	// 48672 pop     si ;~ 18ED:1659
cs=0x18ed;eip=0x00165a; 	T(MOV(sp, bp));	// 48673 mov     sp, bp ;~ 18ED:165A
cs=0x18ed;eip=0x00165c; 	X(POP(bp));	// 48674 pop     bp ;~ 18ED:165C
cs=0x18ed;eip=0x00165d; 	R(RETF(0));	// 48675 retf ;~ 18ED:165D
mouse_track_op:
	// 48683 
#undef var_16
#define var_16 -0x16
	// 48686 var_16          = word ptr -16h ;~ 18ED:165E
#undef var_14
#define var_14 -0x14
	// 48687 var_14          = word ptr -14h ;~ 18ED:165E
#undef var_12
#define var_12 -0x12
	// 48688 var_12          = word ptr -12h ;~ 18ED:165E
#undef var_e
#define var_e -0x0E
	// 48689 var_E           = word ptr -0Eh ;~ 18ED:165E
#undef var_c
#define var_c -0x0C
	// 48690 var_C           = word ptr -0Ch ;~ 18ED:165E
#undef var_a
#define var_a -0x0A
	// 48691 var_A           = word ptr -0Ah ;~ 18ED:165E
#undef var_6
#define var_6 -6
	// 48692 var_6           = word ptr -6 ;~ 18ED:165E
#undef var_4
#define var_4 -4
	// 48693 var_4           = word ptr -4 ;~ 18ED:165E
#undef var_2
#define var_2 -2
	// 48694 var_2           = word ptr -2 ;~ 18ED:165E
#undef arg_0
#define arg_0 6
	// 48695 arg_0           = word ptr  6 ;~ 18ED:165E
#undef arg_2
#define arg_2 8
	// 48696 arg_2           = word ptr  8 ;~ 18ED:165E
#undef arg_4
#define arg_4 0x0A
	// 48697 arg_4           = word ptr  0Ah ;~ 18ED:165E
#undef arg_6
#define arg_6 0x0C
	// 48698 arg_6           = word ptr  0Ch ;~ 18ED:165E
#undef arg_8
#define arg_8 0x0E
	// 48699 arg_8           = word ptr  0Eh ;~ 18ED:165E
#undef arg_a
#define arg_a 0x10
	// 48700 arg_A           = word ptr  10h ;~ 18ED:165E
#undef arg_c
#define arg_c 0x12
	// 48701 arg_C           = word ptr  12h ;~ 18ED:165E
#undef arg_e
#define arg_e 0x14
	// 48702 arg_E           = word ptr  14h ;~ 18ED:165E
ret_18ed_165e:
	// 7746 
cs=0x18ed;eip=0x00165e; 	X(PUSH(bp));	// 48704 push    bp ;~ 18ED:165E
cs=0x18ed;eip=0x00165f; 	T(MOV(bp, sp));	// 48705 mov     bp, sp ;~ 18ED:165F
cs=0x18ed;eip=0x001661; 	T(SUB(sp, 0x16));	// 48706 sub     sp, 16h ;~ 18ED:1661
cs=0x18ed;eip=0x001664; 	X(PUSH(di));	// 48707 push    di ;~ 18ED:1664
cs=0x18ed;eip=0x001665; 	X(PUSH(si));	// 48708 push    si ;~ 18ED:1665
cs=0x18ed;eip=0x001666; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 48709 mov     ax, [bp+arg_8] ;~ 18ED:1666
cs=0x18ed;eip=0x001669; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), ax));	// 48710 cmp     [bp+arg_4], ax ;~ 18ED:1669
cs=0x18ed;eip=0x00166c; 	R(JLE(loc_28b28));	// 48711 jle     short loc_28B28 ;~ 18ED:166C
cs=0x18ed;eip=0x00166e; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0));	// 48712 mov     [bp+var_A], 0 ;~ 18ED:166E
cs=0x18ed;eip=0x001673; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 48713 mov     ax, [bp+arg_4] ;~ 18ED:1673
cs=0x18ed;eip=0x001676; 	R(JMP(loc_28b30));	// 48714 jmp     short loc_28B30 ;~ 18ED:1676
loc_28b28:
	// 7747 
cs=0x18ed;eip=0x001678; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 1));	// 48718 mov     [bp+var_A], 1 ;~ 18ED:1678
cs=0x18ed;eip=0x00167d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 48719 mov     ax, [bp+arg_8] ;~ 18ED:167D
loc_28b30:
	// 7748 
cs=0x18ed;eip=0x001680; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 48722 mov     [bp+var_6], ax ;~ 18ED:1680
cs=0x18ed;eip=0x001683; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_e))));	// 48723 mov     ax, [bp+arg_E] ;~ 18ED:1683
cs=0x18ed;eip=0x001686; 	T(SHL(ax, 1));	// 48724 shl     ax, 1 ;~ 18ED:1686
cs=0x18ed;eip=0x001688; 	T(SHL(ax, 1));	// 48725 shl     ax, 1 ;~ 18ED:1688
cs=0x18ed;eip=0x00168a; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 48726 mov     [bp+var_14], ax ;~ 18ED:168A
cs=0x18ed;eip=0x00168d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 48727 mov     ax, [bp+var_6] ;~ 18ED:168D
cs=0x18ed;eip=0x001690; 	T(DEC(ax));	// 48728 dec     ax ;~ 18ED:1690
cs=0x18ed;eip=0x001691; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 48729 mov     [bp+var_16], ax ;~ 18ED:1691
cs=0x18ed;eip=0x001694; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_a))));	// 48730 imul    [bp+arg_A] ;~ 18ED:1694
cs=0x18ed;eip=0x001697; 	T(SHL(ax, 1));	// 48731 shl     ax, 1 ;~ 18ED:1697
cs=0x18ed;eip=0x001699; 	T(SHL(ax, 1));	// 48732 shl     ax, 1 ;~ 18ED:1699
cs=0x18ed;eip=0x00169b; 	T(CWD);	// 48733 cwd ;~ 18ED:169B
cs=0x18ed;eip=0x00169c; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_14))));	// 48734 mov     cx, [bp+var_14] ;~ 18ED:169C
cs=0x18ed;eip=0x00169f; 	T(IDIV2(cx));	// 48735 idiv    cx ;~ 18ED:169F
cs=0x18ed;eip=0x0016a1; 	T(MOV(si, ax));	// 48736 mov     si, ax ;~ 18ED:16A1
cs=0x18ed;eip=0x0016a3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 48737 mov     ax, [bp+arg_A] ;~ 18ED:16A3
cs=0x18ed;eip=0x0016a6; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_c))));	// 48738 add     ax, [bp+arg_C] ;~ 18ED:16A6
cs=0x18ed;eip=0x0016a9; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_16))));	// 48739 imul    [bp+var_16] ;~ 18ED:16A9
cs=0x18ed;eip=0x0016ac; 	T(SHL(ax, 1));	// 48740 shl     ax, 1 ;~ 18ED:16AC
cs=0x18ed;eip=0x0016ae; 	T(SHL(ax, 1));	// 48741 shl     ax, 1 ;~ 18ED:16AE
cs=0x18ed;eip=0x0016b0; 	T(CWD);	// 48742 cwd ;~ 18ED:16B0
cs=0x18ed;eip=0x0016b1; 	T(IDIV2(cx));	// 48743 idiv    cx ;~ 18ED:16B1
cs=0x18ed;eip=0x0016b3; 	T(MOV(di, ax));	// 48744 mov     di, ax ;~ 18ED:16B3
cs=0x18ed;eip=0x0016b5; 	T(SUB(ax, si));	// 48745 sub     ax, si ;~ 18ED:16B5
cs=0x18ed;eip=0x0016b7; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 48746 mov     [bp+var_12], ax ;~ 18ED:16B7
cs=0x18ed;eip=0x0016ba; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 48747 mov     ax, [bp+arg_0] ;~ 18ED:16BA
cs=0x18ed;eip=0x0016bd; 	T(OR(ax, ax));	// 48748 or      ax, ax ;~ 18ED:16BD
cs=0x18ed;eip=0x0016bf; 	R(JZ(loc_28b78));	// 48749 jz      short loc_28B78 ;~ 18ED:16BF
cs=0x18ed;eip=0x0016c1; 	T(CMP(ax, 1));	// 48750 cmp     ax, 1 ;~ 18ED:16C1
cs=0x18ed;eip=0x0016c4; 	R(JZ(loc_28bce));	// 48751 jz      short loc_28BCE ;~ 18ED:16C4
cs=0x18ed;eip=0x0016c6; 	R(JMP(loc_28bc5));	// 48752 jmp     short loc_28BC5 ;~ 18ED:16C6
loc_28b78:
	// 7749 
cs=0x18ed;eip=0x0016c8; 	T(SUB(ax, ax));	// 48756 sub     ax, ax ;~ 18ED:16C8
cs=0x18ed;eip=0x0016ca; 	X(PUSH(ax));	// 48757 push    ax ;~ 18ED:16CA
cs=0x18ed;eip=0x0016cb; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 48758 push    [bp+arg_8] ;~ 18ED:16CB
cs=0x18ed;eip=0x0016ce; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 48759 push    [bp+arg_4] ;~ 18ED:16CE
cs=0x18ed;eip=0x0016d1; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 48760 push    [bp+arg_6] ;~ 18ED:16D1
cs=0x18ed;eip=0x0016d4; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 48761 push    [bp+arg_2] ;~ 18ED:16D4
cs=0x18ed;eip=0x0016d7; 	R(CALLF(sprite_1_unk,0));	// 48762 call    sprite_1_unk ;~ 18ED:16D7
cs=0x18ed;eip=0x0016dc; 	T(ADD(sp, 0x0A));	// 48763 add     sp, 0Ah ;~ 18ED:16DC
cs=0x18ed;eip=0x0016df; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0));	// 48764 cmp     [bp+var_A], 0 ;~ 18ED:16DF
cs=0x18ed;eip=0x0016e3; 	R(JNZ(loc_28baa));	// 48765 jnz     short loc_28BAA ;~ 18ED:16E3
cs=0x18ed;eip=0x0016e5; 	X(PUSH(dialog_fnt_colour));	// 48766 push    dialog_fnt_colour ;~ 18ED:16E5
cs=0x18ed;eip=0x0016e9; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 48767 push    [bp+arg_8] ;~ 18ED:16E9
cs=0x18ed;eip=0x0016ec; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 48768 push    [bp+var_12] ;~ 18ED:16EC
cs=0x18ed;eip=0x0016ef; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 48769 push    [bp+arg_6] ;~ 18ED:16EF
cs=0x18ed;eip=0x0016f2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 48770 mov     ax, [bp+arg_2] ;~ 18ED:16F2
cs=0x18ed;eip=0x0016f5; 	T(ADD(ax, si));	// 48771 add     ax, si ;~ 18ED:16F5
cs=0x18ed;eip=0x0016f7; 	X(PUSH(ax));	// 48772 push    ax ;~ 18ED:16F7
cs=0x18ed;eip=0x0016f8; 	R(JMP(loc_28bbd));	// 48773 jmp     short loc_28BBD ;~ 18ED:16F8
loc_28baa:
	// 7750 
cs=0x18ed;eip=0x0016fa; 	X(PUSH(dialog_fnt_colour));	// 48777 push    dialog_fnt_colour ;~ 18ED:16FA
cs=0x18ed;eip=0x0016fe; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 48778 push    [bp+var_12] ;~ 18ED:16FE
cs=0x18ed;eip=0x001701; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 48779 push    [bp+arg_4] ;~ 18ED:1701
cs=0x18ed;eip=0x001704; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 48780 mov     ax, [bp+arg_6] ;~ 18ED:1704
cs=0x18ed;eip=0x001707; 	T(ADD(ax, si));	// 48781 add     ax, si ;~ 18ED:1707
cs=0x18ed;eip=0x001709; 	X(PUSH(ax));	// 48782 push    ax ;~ 18ED:1709
cs=0x18ed;eip=0x00170a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 48783 push    [bp+arg_2] ;~ 18ED:170A
loc_28bbd:
	// 7751 
cs=0x18ed;eip=0x00170d; 	R(CALLF(sprite_1_unk,0));	// 48786 call    sprite_1_unk ;~ 18ED:170D
cs=0x18ed;eip=0x001712; 	T(ADD(sp, 0x0A));	// 48787 add     sp, 0Ah ;~ 18ED:1712
loc_28bc5:
	// 7752 
cs=0x18ed;eip=0x001715; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 48791 mov     ax, [bp+arg_A] ;~ 18ED:1715
cs=0x18ed;eip=0x001718; 	X(POP(si));	// 48792 pop     si ;~ 18ED:1718
cs=0x18ed;eip=0x001719; 	X(POP(di));	// 48793 pop     di ;~ 18ED:1719
cs=0x18ed;eip=0x00171a; 	T(MOV(sp, bp));	// 48794 mov     sp, bp ;~ 18ED:171A
cs=0x18ed;eip=0x00171c; 	X(POP(bp));	// 48795 pop     bp ;~ 18ED:171C
cs=0x18ed;eip=0x00171d; 	R(RETF(0));	// 48796 retf ;~ 18ED:171D
loc_28bce:
	// 7753 
cs=0x18ed;eip=0x00171e; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0));	// 48800 cmp     [bp+var_A], 0 ;~ 18ED:171E
cs=0x18ed;eip=0x001722; 	R(JNZ(loc_28bdc));	// 48801 jnz     short loc_28BDC ;~ 18ED:1722
cs=0x18ed;eip=0x001724; 	T(MOV(ax, mouse_xpos));	// 48802 mov     ax, mouse_xpos ;~ 18ED:1724
cs=0x18ed;eip=0x001727; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 48803 sub     ax, [bp+arg_2] ;~ 18ED:1727
cs=0x18ed;eip=0x00172a; 	R(JMP(loc_28be2));	// 48804 jmp     short loc_28BE2 ;~ 18ED:172A
loc_28bdc:
	// 7754 
cs=0x18ed;eip=0x00172c; 	T(MOV(ax, mouse_ypos));	// 48808 mov     ax, mouse_ypos ;~ 18ED:172C
cs=0x18ed;eip=0x00172f; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 48809 sub     ax, [bp+arg_6] ;~ 18ED:172F
loc_28be2:
	// 7755 
cs=0x18ed;eip=0x001732; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 48812 mov     [bp+var_4], ax ;~ 18ED:1732
cs=0x18ed;eip=0x001735; 	T(CMP(ax, si));	// 48813 cmp     ax, si ;~ 18ED:1735
cs=0x18ed;eip=0x001737; 	R(JL(loc_28bed));	// 48814 jl      short loc_28BED ;~ 18ED:1737
cs=0x18ed;eip=0x001739; 	T(CMP(ax, di));	// 48815 cmp     ax, di ;~ 18ED:1739
cs=0x18ed;eip=0x00173b; 	R(JLE(loc_28c26));	// 48816 jle     short loc_28C26 ;~ 18ED:173B
loc_28bed:
	// 7756 
cs=0x18ed;eip=0x00173d; 	X(PUSH(cs));	// 48820 push    cs ;~ 18ED:173D
cs=0x18ed;eip=0x00173e; 	R(CALL(timer_get_delta_alt,0));	// 48821 call    near ptr timer_get_delta_alt ;~ 18ED:173E
cs=0x18ed;eip=0x001741; 	X(PUSH(ax));	// 48822 push    ax ;~ 18ED:1741
cs=0x18ed;eip=0x001742; 	X(PUSH(cs));	// 48823 push    cs ;~ 18ED:1742
cs=0x18ed;eip=0x001743; 	R(CALL(input_checking,0));	// 48824 call    near ptr input_checking ;~ 18ED:1743
cs=0x18ed;eip=0x001746; 	T(ADD(sp, 2));	// 48825 add     sp, 2 ;~ 18ED:1746
cs=0x18ed;eip=0x001749; 	T(TEST(*(db*)(((db*)&mouse_butstate)), 3));	// 48826 test    byte ptr mouse_butstate, 3 ;~ 18ED:1749
cs=0x18ed;eip=0x00174e; 	R(JNZ(loc_28bed));	// 48827 jnz     short loc_28BED ;~ 18ED:174E
cs=0x18ed;eip=0x001750; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), si));	// 48828 cmp     [bp+var_4], si ;~ 18ED:1750
cs=0x18ed;eip=0x001753; 	R(JGE(loc_28c14));	// 48829 jge     short loc_28C14 ;~ 18ED:1753
cs=0x18ed;eip=0x001755; 	T(CMP(*(dw*)(raddr(ss,bp+arg_a)), 0));	// 48830 cmp     [bp+arg_A], 0 ;~ 18ED:1755
cs=0x18ed;eip=0x001759; 	R(JNZ(loc_28c0e));	// 48831 jnz     short loc_28C0E ;~ 18ED:1759
cs=0x18ed;eip=0x00175b; 	R(JMP(loc_28cec));	// 48832 jmp     loc_28CEC ;~ 18ED:175B
loc_28c0e:
	// 7757 
cs=0x18ed;eip=0x00175e; 	X(DEC(*(dw*)(raddr(ss,bp+arg_a))));	// 48836 dec     [bp+arg_A] ;~ 18ED:175E
cs=0x18ed;eip=0x001761; 	R(JMP(loc_28cec));	// 48837 jmp     loc_28CEC ;~ 18ED:1761
loc_28c14:
	// 7758 
cs=0x18ed;eip=0x001764; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_e))));	// 48841 mov     ax, [bp+arg_E] ;~ 18ED:1764
cs=0x18ed;eip=0x001767; 	T(DEC(ax));	// 48842 dec     ax ;~ 18ED:1767
cs=0x18ed;eip=0x001768; 	T(CMP(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 48843 cmp     ax, [bp+arg_A] ;~ 18ED:1768
cs=0x18ed;eip=0x00176b; 	R(JG(loc_28c20));	// 48844 jg      short loc_28C20 ;~ 18ED:176B
cs=0x18ed;eip=0x00176d; 	R(JMP(loc_28cec));	// 48845 jmp     loc_28CEC ;~ 18ED:176D
loc_28c20:
	// 7759 
cs=0x18ed;eip=0x001770; 	X(INC(*(dw*)(raddr(ss,bp+arg_a))));	// 48849 inc     [bp+arg_A] ;~ 18ED:1770
cs=0x18ed;eip=0x001773; 	R(JMP(loc_28cec));	// 48850 jmp     loc_28CEC ;~ 18ED:1773
loc_28c26:
	// 7760 
cs=0x18ed;eip=0x001776; 	X(MOV(*(dw*)(raddr(ss,bp+arg_a)), 0x0FFFF));	// 48854 mov     [bp+arg_A], 0FFFFh ;~ 18ED:1776
cs=0x18ed;eip=0x00177b; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), si));	// 48855 mov     [bp+var_C], si ;~ 18ED:177B
loc_28c2e:
	// 7761 
cs=0x18ed;eip=0x00177e; 	X(PUSH(cs));	// 48858 push    cs ;~ 18ED:177E
cs=0x18ed;eip=0x00177f; 	R(CALL(timer_get_delta_alt,0));	// 48859 call    near ptr timer_get_delta_alt ;~ 18ED:177F
cs=0x18ed;eip=0x001782; 	X(PUSH(ax));	// 48860 push    ax ;~ 18ED:1782
cs=0x18ed;eip=0x001783; 	X(PUSH(cs));	// 48861 push    cs ;~ 18ED:1783
cs=0x18ed;eip=0x001784; 	R(CALL(input_checking,0));	// 48862 call    near ptr input_checking ;~ 18ED:1784
cs=0x18ed;eip=0x001787; 	T(ADD(sp, 2));	// 48863 add     sp, 2 ;~ 18ED:1787
cs=0x18ed;eip=0x00178a; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0));	// 48864 cmp     [bp+var_A], 0 ;~ 18ED:178A
cs=0x18ed;eip=0x00178e; 	R(JNZ(loc_28c48));	// 48865 jnz     short loc_28C48 ;~ 18ED:178E
cs=0x18ed;eip=0x001790; 	T(MOV(ax, mouse_xpos));	// 48866 mov     ax, mouse_xpos ;~ 18ED:1790
cs=0x18ed;eip=0x001793; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 48867 sub     ax, [bp+arg_2] ;~ 18ED:1793
cs=0x18ed;eip=0x001796; 	R(JMP(loc_28c4e));	// 48868 jmp     short loc_28C4E ;~ 18ED:1796
loc_28c48:
	// 7762 
cs=0x18ed;eip=0x001798; 	T(MOV(ax, mouse_ypos));	// 48872 mov     ax, mouse_ypos ;~ 18ED:1798
cs=0x18ed;eip=0x00179b; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 48873 sub     ax, [bp+arg_6] ;~ 18ED:179B
loc_28c4e:
	// 7763 
cs=0x18ed;eip=0x00179e; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 48876 mov     [bp+var_E], ax ;~ 18ED:179E
cs=0x18ed;eip=0x0017a1; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_4))));	// 48877 sub     ax, [bp+var_4] ;~ 18ED:17A1
cs=0x18ed;eip=0x0017a4; 	T(ADD(ax, si));	// 48878 add     ax, si ;~ 18ED:17A4
cs=0x18ed;eip=0x0017a6; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 48879 mov     [bp+var_2], ax ;~ 18ED:17A6
cs=0x18ed;eip=0x0017a9; 	T(OR(ax, ax));	// 48880 or      ax, ax ;~ 18ED:17A9
cs=0x18ed;eip=0x0017ab; 	R(JGE(loc_28c64));	// 48881 jge     short loc_28C64 ;~ 18ED:17AB
cs=0x18ed;eip=0x0017ad; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 48882 mov     [bp+var_2], 0 ;~ 18ED:17AD
cs=0x18ed;eip=0x0017b2; 	R(JMP(loc_28c7c));	// 48883 jmp     short loc_28C7C ;~ 18ED:17B2
loc_28c64:
	// 7764 
cs=0x18ed;eip=0x0017b4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 48887 mov     ax, [bp+var_2] ;~ 18ED:17B4
cs=0x18ed;eip=0x0017b7; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_12))));	// 48888 add     ax, [bp+var_12] ;~ 18ED:17B7
cs=0x18ed;eip=0x0017ba; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_6))));	// 48889 mov     cx, [bp+var_6] ;~ 18ED:17BA
cs=0x18ed;eip=0x0017bd; 	T(DEC(cx));	// 48890 dec     cx ;~ 18ED:17BD
cs=0x18ed;eip=0x0017be; 	T(CMP(ax, cx));	// 48891 cmp     ax, cx ;~ 18ED:17BE
cs=0x18ed;eip=0x0017c0; 	R(JLE(loc_28c7c));	// 48892 jle     short loc_28C7C ;~ 18ED:17C0
cs=0x18ed;eip=0x0017c2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 48893 mov     ax, [bp+var_6] ;~ 18ED:17C2
cs=0x18ed;eip=0x0017c5; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_12))));	// 48894 sub     ax, [bp+var_12] ;~ 18ED:17C5
cs=0x18ed;eip=0x0017c8; 	T(DEC(ax));	// 48895 dec     ax ;~ 18ED:17C8
cs=0x18ed;eip=0x0017c9; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 48896 mov     [bp+var_2], ax ;~ 18ED:17C9
loc_28c7c:
	// 7765 
cs=0x18ed;eip=0x0017cc; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 48900 mov     ax, [bp+var_C] ;~ 18ED:17CC
cs=0x18ed;eip=0x0017cf; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), ax));	// 48901 cmp     [bp+var_2], ax ;~ 18ED:17CF
cs=0x18ed;eip=0x0017d2; 	R(JZ(loc_28ce2));	// 48902 jz      short loc_28CE2 ;~ 18ED:17D2
cs=0x18ed;eip=0x0017d4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 48903 mov     ax, [bp+var_2] ;~ 18ED:17D4
cs=0x18ed;eip=0x0017d7; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 48904 mov     [bp+var_C], ax ;~ 18ED:17D7
cs=0x18ed;eip=0x0017da; 	X(PUSH(cs));	// 48905 push    cs ;~ 18ED:17DA
cs=0x18ed;eip=0x0017db; 	R(CALL(mouse_draw_opaque_check,0));	// 48906 call    near ptr mouse_draw_opaque_check ;~ 18ED:17DB
cs=0x18ed;eip=0x0017de; 	T(SUB(ax, ax));	// 48907 sub     ax, ax ;~ 18ED:17DE
cs=0x18ed;eip=0x0017e0; 	X(PUSH(ax));	// 48908 push    ax ;~ 18ED:17E0
cs=0x18ed;eip=0x0017e1; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 48909 push    [bp+arg_8] ;~ 18ED:17E1
cs=0x18ed;eip=0x0017e4; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 48910 push    [bp+arg_4] ;~ 18ED:17E4
cs=0x18ed;eip=0x0017e7; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 48911 push    [bp+arg_6] ;~ 18ED:17E7
cs=0x18ed;eip=0x0017ea; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 48912 push    [bp+arg_2] ;~ 18ED:17EA
cs=0x18ed;eip=0x0017ed; 	R(CALLF(sprite_1_unk,0));	// 48913 call    sprite_1_unk ;~ 18ED:17ED
cs=0x18ed;eip=0x0017f2; 	T(ADD(sp, 0x0A));	// 48914 add     sp, 0Ah ;~ 18ED:17F2
cs=0x18ed;eip=0x0017f5; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0));	// 48915 cmp     [bp+var_A], 0 ;~ 18ED:17F5
cs=0x18ed;eip=0x0017f9; 	R(JNZ(loc_28cc2));	// 48916 jnz     short loc_28CC2 ;~ 18ED:17F9
cs=0x18ed;eip=0x0017fb; 	X(PUSH(dialog_fnt_colour));	// 48917 push    dialog_fnt_colour ;~ 18ED:17FB
cs=0x18ed;eip=0x0017ff; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 48918 push    [bp+arg_8] ;~ 18ED:17FF
cs=0x18ed;eip=0x001802; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 48919 push    [bp+var_12] ;~ 18ED:1802
cs=0x18ed;eip=0x001805; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 48920 push    [bp+arg_6] ;~ 18ED:1805
cs=0x18ed;eip=0x001808; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 48921 mov     ax, [bp+arg_2] ;~ 18ED:1808
cs=0x18ed;eip=0x00180b; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_2))));	// 48922 add     ax, [bp+var_2] ;~ 18ED:180B
cs=0x18ed;eip=0x00180e; 	X(PUSH(ax));	// 48923 push    ax ;~ 18ED:180E
cs=0x18ed;eip=0x00180f; 	R(JMP(loc_28cd6));	// 48924 jmp     short loc_28CD6 ;~ 18ED:180F
loc_28cc2:
	// 7766 
cs=0x18ed;eip=0x001812; 	X(PUSH(dialog_fnt_colour));	// 48929 push    dialog_fnt_colour ;~ 18ED:1812
cs=0x18ed;eip=0x001816; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 48930 push    [bp+var_12] ;~ 18ED:1816
cs=0x18ed;eip=0x001819; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 48931 push    [bp+arg_4] ;~ 18ED:1819
cs=0x18ed;eip=0x00181c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 48932 mov     ax, [bp+arg_6] ;~ 18ED:181C
cs=0x18ed;eip=0x00181f; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_2))));	// 48933 add     ax, [bp+var_2] ;~ 18ED:181F
cs=0x18ed;eip=0x001822; 	X(PUSH(ax));	// 48934 push    ax ;~ 18ED:1822
cs=0x18ed;eip=0x001823; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 48935 push    [bp+arg_2] ;~ 18ED:1823
loc_28cd6:
	// 7767 
cs=0x18ed;eip=0x001826; 	R(CALLF(sprite_1_unk,0));	// 48938 call    sprite_1_unk ;~ 18ED:1826
cs=0x18ed;eip=0x00182b; 	T(ADD(sp, 0x0A));	// 48939 add     sp, 0Ah ;~ 18ED:182B
cs=0x18ed;eip=0x00182e; 	X(PUSH(cs));	// 48940 push    cs ;~ 18ED:182E
cs=0x18ed;eip=0x00182f; 	R(CALL(mouse_draw_transparent_check,0));	// 48941 call    near ptr mouse_draw_transparent_check ;~ 18ED:182F
loc_28ce2:
	// 7768 
cs=0x18ed;eip=0x001832; 	T(TEST(*(db*)(((db*)&mouse_butstate)), 3));	// 48944 test    byte ptr mouse_butstate, 3 ;~ 18ED:1832
cs=0x18ed;eip=0x001837; 	R(JZ(loc_28cec));	// 48945 jz      short loc_28CEC ;~ 18ED:1837
cs=0x18ed;eip=0x001839; 	R(JMP(loc_28c2e));	// 48946 jmp     loc_28C2E ;~ 18ED:1839
loc_28cec:
	// 7769 
cs=0x18ed;eip=0x00183c; 	T(CMP(*(dw*)(raddr(ss,bp+arg_a)), 0x0FFFF));	// 48951 cmp     [bp+arg_A], 0FFFFh ;~ 18ED:183C
cs=0x18ed;eip=0x001840; 	R(JNZ(loc_28d0e));	// 48952 jnz     short loc_28D0E ;~ 18ED:1840
cs=0x18ed;eip=0x001842; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 48953 mov     ax, [bp+var_6] ;~ 18ED:1842
cs=0x18ed;eip=0x001845; 	T(CWD);	// 48954 cwd ;~ 18ED:1845
cs=0x18ed;eip=0x001846; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_e))));	// 48955 mov     cx, [bp+arg_E] ;~ 18ED:1846
cs=0x18ed;eip=0x001849; 	T(IDIV2(cx));	// 48956 idiv    cx ;~ 18ED:1849
cs=0x18ed;eip=0x00184b; 	T(CWD);	// 48957 cwd ;~ 18ED:184B
cs=0x18ed;eip=0x00184c; 	T(SUB(ax, dx));	// 48958 sub     ax, dx ;~ 18ED:184C
cs=0x18ed;eip=0x00184e; 	T(SAR(ax, 1));	// 48959 sar     ax, 1 ;~ 18ED:184E
cs=0x18ed;eip=0x001850; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_2))));	// 48960 add     ax, [bp+var_2] ;~ 18ED:1850
cs=0x18ed;eip=0x001853; 	T(IMUL1_2(cx));	// 48961 imul    cx ;~ 18ED:1853
cs=0x18ed;eip=0x001855; 	T(CWD);	// 48962 cwd ;~ 18ED:1855
cs=0x18ed;eip=0x001856; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_6))));	// 48963 mov     cx, [bp+var_6] ;~ 18ED:1856
cs=0x18ed;eip=0x001859; 	T(IDIV2(cx));	// 48964 idiv    cx ;~ 18ED:1859
cs=0x18ed;eip=0x00185b; 	X(MOV(*(dw*)(raddr(ss,bp+arg_a)), ax));	// 48965 mov     [bp+arg_A], ax ;~ 18ED:185B
loc_28d0e:
	// 7770 
cs=0x18ed;eip=0x00185e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_e))));	// 48968 mov     ax, [bp+arg_E] ;~ 18ED:185E
cs=0x18ed;eip=0x001861; 	T(SHL(ax, 1));	// 48969 shl     ax, 1 ;~ 18ED:1861
cs=0x18ed;eip=0x001863; 	T(SHL(ax, 1));	// 48970 shl     ax, 1 ;~ 18ED:1863
cs=0x18ed;eip=0x001865; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 48971 mov     [bp+var_16], ax ;~ 18ED:1865
cs=0x18ed;eip=0x001868; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 48972 mov     ax, [bp+var_6] ;~ 18ED:1868
cs=0x18ed;eip=0x00186b; 	T(DEC(ax));	// 48973 dec     ax ;~ 18ED:186B
cs=0x18ed;eip=0x00186c; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 48974 mov     [bp+var_14], ax ;~ 18ED:186C
cs=0x18ed;eip=0x00186f; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_a))));	// 48975 imul    [bp+arg_A] ;~ 18ED:186F
cs=0x18ed;eip=0x001872; 	T(SHL(ax, 1));	// 48976 shl     ax, 1 ;~ 18ED:1872
cs=0x18ed;eip=0x001874; 	T(SHL(ax, 1));	// 48977 shl     ax, 1 ;~ 18ED:1874
cs=0x18ed;eip=0x001876; 	T(CWD);	// 48978 cwd ;~ 18ED:1876
cs=0x18ed;eip=0x001877; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_16))));	// 48979 mov     cx, [bp+var_16] ;~ 18ED:1877
cs=0x18ed;eip=0x00187a; 	T(IDIV2(cx));	// 48980 idiv    cx ;~ 18ED:187A
cs=0x18ed;eip=0x00187c; 	T(MOV(si, ax));	// 48981 mov     si, ax ;~ 18ED:187C
cs=0x18ed;eip=0x00187e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 48982 mov     ax, [bp+arg_A] ;~ 18ED:187E
cs=0x18ed;eip=0x001881; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_c))));	// 48983 add     ax, [bp+arg_C] ;~ 18ED:1881
cs=0x18ed;eip=0x001884; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_14))));	// 48984 imul    [bp+var_14] ;~ 18ED:1884
cs=0x18ed;eip=0x001887; 	T(SHL(ax, 1));	// 48985 shl     ax, 1 ;~ 18ED:1887
cs=0x18ed;eip=0x001889; 	T(SHL(ax, 1));	// 48986 shl     ax, 1 ;~ 18ED:1889
cs=0x18ed;eip=0x00188b; 	T(CWD);	// 48987 cwd ;~ 18ED:188B
cs=0x18ed;eip=0x00188c; 	T(IDIV2(cx));	// 48988 idiv    cx ;~ 18ED:188C
cs=0x18ed;eip=0x00188e; 	T(MOV(di, ax));	// 48989 mov     di, ax ;~ 18ED:188E
cs=0x18ed;eip=0x001890; 	T(SUB(ax, si));	// 48990 sub     ax, si ;~ 18ED:1890
cs=0x18ed;eip=0x001892; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 48991 mov     [bp+var_12], ax ;~ 18ED:1892
cs=0x18ed;eip=0x001895; 	X(PUSH(cs));	// 48992 push    cs ;~ 18ED:1895
cs=0x18ed;eip=0x001896; 	R(CALL(mouse_draw_opaque_check,0));	// 48993 call    near ptr mouse_draw_opaque_check ;~ 18ED:1896
cs=0x18ed;eip=0x001899; 	T(SUB(ax, ax));	// 48994 sub     ax, ax ;~ 18ED:1899
cs=0x18ed;eip=0x00189b; 	X(PUSH(ax));	// 48995 push    ax ;~ 18ED:189B
cs=0x18ed;eip=0x00189c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 48996 push    [bp+arg_8] ;~ 18ED:189C
cs=0x18ed;eip=0x00189f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 48997 push    [bp+arg_4] ;~ 18ED:189F
cs=0x18ed;eip=0x0018a2; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 48998 push    [bp+arg_6] ;~ 18ED:18A2
cs=0x18ed;eip=0x0018a5; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 48999 push    [bp+arg_2] ;~ 18ED:18A5
cs=0x18ed;eip=0x0018a8; 	R(CALLF(sprite_1_unk,0));	// 49000 call    sprite_1_unk ;~ 18ED:18A8
cs=0x18ed;eip=0x0018ad; 	T(ADD(sp, 0x0A));	// 49001 add     sp, 0Ah ;~ 18ED:18AD
cs=0x18ed;eip=0x0018b0; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0));	// 49002 cmp     [bp+var_A], 0 ;~ 18ED:18B0
cs=0x18ed;eip=0x0018b4; 	R(JNZ(loc_28d7c));	// 49003 jnz     short loc_28D7C ;~ 18ED:18B4
cs=0x18ed;eip=0x0018b6; 	X(PUSH(dialog_fnt_colour));	// 49004 push    dialog_fnt_colour ;~ 18ED:18B6
cs=0x18ed;eip=0x0018ba; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 49005 push    [bp+arg_8] ;~ 18ED:18BA
cs=0x18ed;eip=0x0018bd; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 49006 push    [bp+var_12] ;~ 18ED:18BD
cs=0x18ed;eip=0x0018c0; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 49007 push    [bp+arg_6] ;~ 18ED:18C0
cs=0x18ed;eip=0x0018c3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 49008 mov     ax, [bp+arg_2] ;~ 18ED:18C3
cs=0x18ed;eip=0x0018c6; 	T(ADD(ax, si));	// 49009 add     ax, si ;~ 18ED:18C6
cs=0x18ed;eip=0x0018c8; 	X(PUSH(ax));	// 49010 push    ax ;~ 18ED:18C8
cs=0x18ed;eip=0x0018c9; 	R(JMP(loc_28d8f));	// 49011 jmp     short loc_28D8F ;~ 18ED:18C9
loc_28d7c:
	// 7771 
cs=0x18ed;eip=0x0018cc; 	X(PUSH(dialog_fnt_colour));	// 49016 push    dialog_fnt_colour ;~ 18ED:18CC
cs=0x18ed;eip=0x0018d0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 49017 push    [bp+var_12] ;~ 18ED:18D0
cs=0x18ed;eip=0x0018d3; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 49018 push    [bp+arg_4] ;~ 18ED:18D3
cs=0x18ed;eip=0x0018d6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 49019 mov     ax, [bp+arg_6] ;~ 18ED:18D6
cs=0x18ed;eip=0x0018d9; 	T(ADD(ax, si));	// 49020 add     ax, si ;~ 18ED:18D9
cs=0x18ed;eip=0x0018db; 	X(PUSH(ax));	// 49021 push    ax ;~ 18ED:18DB
cs=0x18ed;eip=0x0018dc; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 49022 push    [bp+arg_2] ;~ 18ED:18DC
loc_28d8f:
	// 7772 
cs=0x18ed;eip=0x0018df; 	R(CALLF(sprite_1_unk,0));	// 49025 call    sprite_1_unk ;~ 18ED:18DF
cs=0x18ed;eip=0x0018e4; 	T(ADD(sp, 0x0A));	// 49026 add     sp, 0Ah ;~ 18ED:18E4
cs=0x18ed;eip=0x0018e7; 	X(PUSH(cs));	// 49027 push    cs ;~ 18ED:18E7
cs=0x18ed;eip=0x0018e8; 	R(CALL(mouse_draw_transparent_check,0));	// 49028 call    near ptr mouse_draw_transparent_check ;~ 18ED:18E8
cs=0x18ed;eip=0x0018eb; 	R(JMP(loc_28bc5));	// 49029 jmp     loc_28BC5 ;~ 18ED:18EB
mouse_draw_transparent_check:
	// 49036 
cs=0x18ed;eip=0x0018ee; 	X(MOV(byte_3b8f7, 1));	// 49038 mov     byte_3B8F7, 1 ;~ 18ED:18EE
ret_18ed_18f3:
	// 7773 
cs=0x18ed;eip=0x0018f3; 	T(CMP(kbormouse, 0));	// 49039 cmp     kbormouse, 0 ;~ 18ED:18F3
cs=0x18ed;eip=0x0018f8; 	R(JZ(locret_28db5));	// 49040 jz      short locret_28DB5 ;~ 18ED:18F8
cs=0x18ed;eip=0x0018fa; 	T(CMP(mouse_isdirty, 0));	// 49041 cmp     mouse_isdirty, 0 ;~ 18ED:18FA
cs=0x18ed;eip=0x0018ff; 	R(JNZ(locret_28db5));	// 49042 jnz     short locret_28DB5 ;~ 18ED:18FF
cs=0x18ed;eip=0x001901; 	X(PUSH(cs));	// 49043 push    cs ;~ 18ED:1901
cs=0x18ed;eip=0x001902; 	R(CALL(mouse_draw_transparent,0));	// 49044 call    near ptr mouse_draw_transparent ;~ 18ED:1902
locret_28db5:
	// 7774 
cs=0x18ed;eip=0x001905; 	R(RETF(0));	// 49048 retf ;~ 18ED:1905
mouse_draw_opaque_check:
	// 49055 
cs=0x18ed;eip=0x001906; 	X(MOV(byte_3b8f7, 0));	// 49057 mov     byte_3B8F7, 0 ;~ 18ED:1906
ret_18ed_190b:
	// 7775 
cs=0x18ed;eip=0x00190b; 	T(CMP(mouse_isdirty, 0));	// 49058 cmp     mouse_isdirty, 0 ;~ 18ED:190B
cs=0x18ed;eip=0x001910; 	R(JZ(locret_28dc6));	// 49059 jz      short locret_28DC6 ;~ 18ED:1910
cs=0x18ed;eip=0x001912; 	X(PUSH(cs));	// 49060 push    cs ;~ 18ED:1912
cs=0x18ed;eip=0x001913; 	R(CALL(mouse_draw_opaque,0));	// 49061 call    near ptr mouse_draw_opaque ;~ 18ED:1913
locret_28dc6:
	// 7776 
cs=0x18ed;eip=0x001916; 	R(RETF(0));	// 49064 retf ;~ 18ED:1916
mouse_draw_opaque:
	// 49074 
#undef var_3c
#define var_3c -0x3C
	// 49077 var_3C          = byte ptr -3Ch ;~ 18ED:1918
ret_18ed_1918:
	// 7777 
cs=0x18ed;eip=0x001918; 	X(PUSH(bp));	// 49079 push    bp ;~ 18ED:1918
cs=0x18ed;eip=0x001919; 	T(MOV(bp, sp));	// 49080 mov     bp, sp ;~ 18ED:1919
cs=0x18ed;eip=0x00191b; 	T(SUB(sp, 0x3C));	// 49081 sub     sp, 3Ch ;~ 18ED:191B
cs=0x18ed;eip=0x00191e; 	T(ax = bp+var_3c);	// 49082 lea     ax, [bp+var_3C] ;~ 18ED:191E
cs=0x18ed;eip=0x001921; 	X(PUSH(ax));	// 49083 push    ax ;~ 18ED:1921
cs=0x18ed;eip=0x001922; 	R(CALLF(sprite_copy_both_to_arg,0));	// 49084 call    sprite_copy_both_to_arg ;~ 18ED:1922
cs=0x18ed;eip=0x001927; 	T(ADD(sp, 2));	// 49085 add     sp, 2 ;~ 18ED:1927
cs=0x18ed;eip=0x00192a; 	R(CALLF(sprite_copy_2_to_1,0));	// 49086 call    sprite_copy_2_to_1 ;~ 18ED:192A
cs=0x18ed;eip=0x00192f; 	T(LES(bx, mouseunkspriteptr));	// 49087 les     bx, mouseunkspriteptr ;~ 18ED:192F
cs=0x18ed;eip=0x001933; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 49088 push    word ptr es:[bx+2] ;~ 18ED:1933
cs=0x18ed;eip=0x001937; 	X(PUSH(*(dw*)(raddr(es,bx+0))));	// 49089 push    word ptr es:[bx+0] ;~ 18ED:1937
cs=0x18ed;eip=0x00193a; 	R(CALLF(sprite_putimage,0));	// 49090 call    sprite_putimage ;~ 18ED:193A
cs=0x18ed;eip=0x00193f; 	T(ADD(sp, 4));	// 49091 add     sp, 4 ;~ 18ED:193F
cs=0x18ed;eip=0x001942; 	T(ax = bp+var_3c);	// 49092 lea     ax, [bp+var_3C] ;~ 18ED:1942
cs=0x18ed;eip=0x001945; 	X(PUSH(ax));	// 49093 push    ax ;~ 18ED:1945
cs=0x18ed;eip=0x001946; 	R(CALLF(sprite_copy_arg_to_both,0));	// 49094 call    sprite_copy_arg_to_both ;~ 18ED:1946
cs=0x18ed;eip=0x00194b; 	X(MOV(mouse_isdirty, 0));	// 49095 mov     mouse_isdirty, 0 ;~ 18ED:194B
cs=0x18ed;eip=0x001950; 	T(MOV(sp, bp));	// 49096 mov     sp, bp ;~ 18ED:1950
cs=0x18ed;eip=0x001952; 	X(POP(bp));	// 49097 pop     bp ;~ 18ED:1952
cs=0x18ed;eip=0x001953; 	R(RETF(0));	// 49098 retf ;~ 18ED:1953
mouse_draw_transparent:
	// 49106 
#undef var_3c
#define var_3c -0x3C
	// 49109 var_3C          = byte ptr -3Ch ;~ 18ED:1954
ret_18ed_1954:
	// 7778 
cs=0x18ed;eip=0x001954; 	X(PUSH(bp));	// 49111 push    bp ;~ 18ED:1954
cs=0x18ed;eip=0x001955; 	T(MOV(bp, sp));	// 49112 mov     bp, sp ;~ 18ED:1955
cs=0x18ed;eip=0x001957; 	T(SUB(sp, 0x3E));	// 49113 sub     sp, 3Eh ;~ 18ED:1957
cs=0x18ed;eip=0x00195a; 	X(PUSH(si));	// 49114 push    si ;~ 18ED:195A
cs=0x18ed;eip=0x00195b; 	T(MOV(si, mouse_xpos));	// 49115 mov     si, mouse_xpos ;~ 18ED:195B
cs=0x18ed;eip=0x00195f; 	T(MOV(ax, si));	// 49116 mov     ax, si ;~ 18ED:195F
cs=0x18ed;eip=0x001961; 	T(CWD);	// 49117 cwd ;~ 18ED:1961
cs=0x18ed;eip=0x001962; 	T(MOV(cx, video_flag2_is1));	// 49118 mov     cx, video_flag2_is1 ;~ 18ED:1962
cs=0x18ed;eip=0x001966; 	T(IDIV2(cx));	// 49119 idiv    cx ;~ 18ED:1966
cs=0x18ed;eip=0x001968; 	T(SUB(si, dx));	// 49120 sub     si, dx ;~ 18ED:1968
cs=0x18ed;eip=0x00196a; 	T(ax = bp+var_3c);	// 49121 lea     ax, [bp+var_3C] ;~ 18ED:196A
cs=0x18ed;eip=0x00196d; 	X(PUSH(ax));	// 49122 push    ax ;~ 18ED:196D
cs=0x18ed;eip=0x00196e; 	R(CALLF(sprite_copy_both_to_arg,0));	// 49123 call    sprite_copy_both_to_arg ;~ 18ED:196E
cs=0x18ed;eip=0x001973; 	T(ADD(sp, 2));	// 49124 add     sp, 2 ;~ 18ED:1973
cs=0x18ed;eip=0x001976; 	R(CALLF(sprite_copy_2_to_1,0));	// 49125 call    sprite_copy_2_to_1 ;~ 18ED:1976
cs=0x18ed;eip=0x00197b; 	X(PUSH(mouse_ypos));	// 49126 push    mouse_ypos ;~ 18ED:197B
cs=0x18ed;eip=0x00197f; 	X(PUSH(si));	// 49127 push    si ;~ 18ED:197F
cs=0x18ed;eip=0x001980; 	T(LES(bx, mouseunkspriteptr));	// 49128 les     bx, mouseunkspriteptr ;~ 18ED:1980
cs=0x18ed;eip=0x001984; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 49129 push    word ptr es:[bx+2] ;~ 18ED:1984
cs=0x18ed;eip=0x001988; 	X(PUSH(*(dw*)(raddr(es,bx+0))));	// 49130 push    word ptr es:[bx+0] ;~ 18ED:1988
cs=0x18ed;eip=0x00198b; 	R(CALLF(sprite_clear_shape_alt,0));	// 49131 call    sprite_clear_shape_alt ;~ 18ED:198B
cs=0x18ed;eip=0x001990; 	T(ADD(sp, 8));	// 49132 add     sp, 8 ;~ 18ED:1990
cs=0x18ed;eip=0x001993; 	X(PUSH(mouse_ypos));	// 49133 push    mouse_ypos ;~ 18ED:1993
cs=0x18ed;eip=0x001997; 	X(PUSH(mouse_xpos));	// 49134 push    mouse_xpos ;~ 18ED:1997
cs=0x18ed;eip=0x00199b; 	T(LES(bx, mmouspriteptr));	// 49135 les     bx, mmouspriteptr ;~ 18ED:199B
cs=0x18ed;eip=0x00199f; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 49136 push    word ptr es:[bx+2] ;~ 18ED:199F
cs=0x18ed;eip=0x0019a3; 	X(PUSH(*(dw*)(raddr(es,bx+0))));	// 49137 push    word ptr es:[bx+0] ;~ 18ED:19A3
cs=0x18ed;eip=0x0019a6; 	R(CALLF(sprite_putimage_and,0));	// 49138 call    sprite_putimage_and ;~ 18ED:19A6
cs=0x18ed;eip=0x0019ab; 	T(ADD(sp, 8));	// 49139 add     sp, 8 ;~ 18ED:19AB
cs=0x18ed;eip=0x0019ae; 	X(PUSH(mouse_ypos));	// 49140 push    mouse_ypos ;~ 18ED:19AE
cs=0x18ed;eip=0x0019b2; 	X(PUSH(mouse_xpos));	// 49141 push    mouse_xpos ;~ 18ED:19B2
cs=0x18ed;eip=0x0019b6; 	T(LES(bx, smouspriteptr));	// 49142 les     bx, smouspriteptr ;~ 18ED:19B6
cs=0x18ed;eip=0x0019ba; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 49143 push    word ptr es:[bx+2] ;~ 18ED:19BA
cs=0x18ed;eip=0x0019be; 	X(PUSH(*(dw*)(raddr(es,bx+0))));	// 49144 push    word ptr es:[bx+0] ;~ 18ED:19BE
cs=0x18ed;eip=0x0019c1; 	R(CALLF(sprite_putimage_or,0));	// 49145 call    sprite_putimage_or ;~ 18ED:19C1
cs=0x18ed;eip=0x0019c6; 	T(ADD(sp, 8));	// 49146 add     sp, 8 ;~ 18ED:19C6
cs=0x18ed;eip=0x0019c9; 	T(ax = bp+var_3c);	// 49147 lea     ax, [bp+var_3C] ;~ 18ED:19C9
cs=0x18ed;eip=0x0019cc; 	X(PUSH(ax));	// 49148 push    ax ;~ 18ED:19CC
cs=0x18ed;eip=0x0019cd; 	R(CALLF(sprite_copy_arg_to_both,0));	// 49149 call    sprite_copy_arg_to_both ;~ 18ED:19CD
cs=0x18ed;eip=0x0019d2; 	T(ADD(sp, 2));	// 49150 add     sp, 2 ;~ 18ED:19D2
cs=0x18ed;eip=0x0019d5; 	X(MOV(mouse_isdirty, 1));	// 49151 mov     mouse_isdirty, 1 ;~ 18ED:19D5
cs=0x18ed;eip=0x0019da; 	X(POP(si));	// 49152 pop     si ;~ 18ED:19DA
cs=0x18ed;eip=0x0019db; 	T(MOV(sp, bp));	// 49153 mov     sp, bp ;~ 18ED:19DB
cs=0x18ed;eip=0x0019dd; 	X(POP(bp));	// 49154 pop     bp ;~ 18ED:19DD
cs=0x18ed;eip=0x0019de; 	R(RETF(0));	// 49155 retf ;~ 18ED:19DE
mouse_multi_hittest:
	// 49165 
#undef arg_0
#define arg_0 6
	// 49168 arg_0           = word ptr  6 ;~ 18ED:19E0
#undef arg_2
#define arg_2 8
	// 49169 arg_2           = word ptr  8 ;~ 18ED:19E0
#undef arg_4
#define arg_4 0x0A
	// 49170 arg_4           = word ptr  0Ah ;~ 18ED:19E0
#undef arg_6
#define arg_6 0x0C
	// 49171 arg_6           = word ptr  0Ch ;~ 18ED:19E0
#undef arg_8
#define arg_8 0x0E
	// 49172 arg_8           = word ptr  0Eh ;~ 18ED:19E0
ret_18ed_19e0:
	// 7779 
cs=0x18ed;eip=0x0019e0; 	X(PUSH(bp));	// 49174 push    bp ;~ 18ED:19E0
cs=0x18ed;eip=0x0019e1; 	T(MOV(bp, sp));	// 49175 mov     bp, sp ;~ 18ED:19E1
cs=0x18ed;eip=0x0019e3; 	T(SUB(sp, 2));	// 49176 sub     sp, 2 ;~ 18ED:19E3
cs=0x18ed;eip=0x0019e6; 	X(PUSH(di));	// 49177 push    di ;~ 18ED:19E6
cs=0x18ed;eip=0x0019e7; 	X(PUSH(si));	// 49178 push    si ;~ 18ED:19E7
cs=0x18ed;eip=0x0019e8; 	T(CMP(kbormouse, 0));	// 49179 cmp     kbormouse, 0 ;~ 18ED:19E8
cs=0x18ed;eip=0x0019ed; 	R(JZ(loc_28eda));	// 49180 jz      short loc_28EDA ;~ 18ED:19ED
cs=0x18ed;eip=0x0019ef; 	T(SUB(si, si));	// 49181 sub     si, si ;~ 18ED:19EF
cs=0x18ed;eip=0x0019f1; 	R(JMP(loc_28ea5));	// 49182 jmp     short loc_28EA5 ;~ 18ED:19F1
loc_28ea4:
	// 7780 
cs=0x18ed;eip=0x0019f4; 	T(INC(si));	// 49188 inc     si ;~ 18ED:19F4
loc_28ea5:
	// 7781 
cs=0x18ed;eip=0x0019f5; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), si));	// 49191 cmp     [bp+arg_0], si ;~ 18ED:19F5
cs=0x18ed;eip=0x0019f8; 	R(JLE(loc_28eda));	// 49192 jle     short loc_28EDA ;~ 18ED:19F8
cs=0x18ed;eip=0x0019fa; 	T(MOV(di, si));	// 49193 mov     di, si ;~ 18ED:19FA
cs=0x18ed;eip=0x0019fc; 	T(SHL(di, 1));	// 49194 shl     di, 1 ;~ 18ED:19FC
cs=0x18ed;eip=0x0019fe; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 49195 mov     bx, [bp+arg_2] ;~ 18ED:19FE
cs=0x18ed;eip=0x001a01; 	T(MOV(ax, mouse_xpos));	// 49196 mov     ax, mouse_xpos ;~ 18ED:1A01
cs=0x18ed;eip=0x001a04; 	T(CMP(*(dw*)(raddr(ds,bx+di)), ax));	// 49197 cmp     [bx+di], ax ;~ 18ED:1A04
cs=0x18ed;eip=0x001a06; 	R(JG(loc_28ea4));	// 49198 jg      short loc_28EA4 ;~ 18ED:1A06
cs=0x18ed;eip=0x001a08; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 49199 mov     bx, [bp+arg_4] ;~ 18ED:1A08
cs=0x18ed;eip=0x001a0b; 	T(CMP(*(dw*)(raddr(ds,bx+di)), ax));	// 49200 cmp     [bx+di], ax ;~ 18ED:1A0B
cs=0x18ed;eip=0x001a0d; 	R(JL(loc_28ea4));	// 49201 jl      short loc_28EA4 ;~ 18ED:1A0D
cs=0x18ed;eip=0x001a0f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 49202 mov     bx, [bp+arg_6] ;~ 18ED:1A0F
cs=0x18ed;eip=0x001a12; 	T(MOV(ax, mouse_ypos));	// 49203 mov     ax, mouse_ypos ;~ 18ED:1A12
cs=0x18ed;eip=0x001a15; 	T(CMP(*(dw*)(raddr(ds,bx+di)), ax));	// 49204 cmp     [bx+di], ax ;~ 18ED:1A15
cs=0x18ed;eip=0x001a17; 	R(JG(loc_28ea4));	// 49205 jg      short loc_28EA4 ;~ 18ED:1A17
cs=0x18ed;eip=0x001a19; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_8))));	// 49206 mov     bx, [bp+arg_8] ;~ 18ED:1A19
cs=0x18ed;eip=0x001a1c; 	T(CMP(*(dw*)(raddr(ds,bx+di)), ax));	// 49207 cmp     [bx+di], ax ;~ 18ED:1A1C
cs=0x18ed;eip=0x001a1e; 	R(JL(loc_28ea4));	// 49208 jl      short loc_28EA4 ;~ 18ED:1A1E
cs=0x18ed;eip=0x001a20; 	T(MOV(ax, si));	// 49209 mov     ax, si ;~ 18ED:1A20
cs=0x18ed;eip=0x001a22; 	T(CBW);	// 49210 cbw ;~ 18ED:1A22
cs=0x18ed;eip=0x001a23; 	X(POP(si));	// 49211 pop     si ;~ 18ED:1A23
cs=0x18ed;eip=0x001a24; 	X(POP(di));	// 49212 pop     di ;~ 18ED:1A24
cs=0x18ed;eip=0x001a25; 	T(MOV(sp, bp));	// 49213 mov     sp, bp ;~ 18ED:1A25
cs=0x18ed;eip=0x001a27; 	X(POP(bp));	// 49214 pop     bp ;~ 18ED:1A27
cs=0x18ed;eip=0x001a28; 	R(RETF(0));	// 49215 retf ;~ 18ED:1A28
loc_28eda:
	// 7782 
cs=0x18ed;eip=0x001a2a; 	T(MOV(ax, 0x0FFFF));	// 49221 mov     ax, 0FFFFh ;~ 18ED:1A2A
cs=0x18ed;eip=0x001a2d; 	X(POP(si));	// 49222 pop     si ;~ 18ED:1A2D
cs=0x18ed;eip=0x001a2e; 	X(POP(di));	// 49223 pop     di ;~ 18ED:1A2E
cs=0x18ed;eip=0x001a2f; 	T(MOV(sp, bp));	// 49224 mov     sp, bp ;~ 18ED:1A2F
cs=0x18ed;eip=0x001a31; 	X(POP(bp));	// 49225 pop     bp ;~ 18ED:1A31
cs=0x18ed;eip=0x001a32; 	R(RETF(0));	// 49226 retf ;~ 18ED:1A32
check_input:
	// 49236 
#undef var_2
#define var_2 -2
	// 49239 var_2           = byte ptr -2 ;~ 18ED:1A34
ret_18ed_1a34:
	// 7783 
cs=0x18ed;eip=0x001a34; 	X(PUSH(bp));	// 49241 push    bp ;~ 18ED:1A34
cs=0x18ed;eip=0x001a35; 	T(MOV(bp, sp));	// 49242 mov     bp, sp ;~ 18ED:1A35
cs=0x18ed;eip=0x001a37; 	T(SUB(sp, 2));	// 49243 sub     sp, 2 ;~ 18ED:1A37
loc_28eea:
	// 7784 
cs=0x18ed;eip=0x001a3a; 	R(CALLF(get_kb_or_joy_flags,0));	// 49246 call    get_kb_or_joy_flags ;~ 18ED:1A3A
cs=0x18ed;eip=0x001a3f; 	T(TEST(al, 0x30));	// 49247 test    al, 30h ;~ 18ED:1A3F
cs=0x18ed;eip=0x001a41; 	R(JZ(loc_28efa));	// 49248 jz      short loc_28EFA ;~ 18ED:1A41
loc_28ef3:
	// 7785 
cs=0x18ed;eip=0x001a43; 	X(MOV(*(raddr(ss,bp+var_2)), 1));	// 49252 mov     [bp+var_2], 1 ;~ 18ED:1A43
cs=0x18ed;eip=0x001a47; 	R(JMP(loc_28f1c));	// 49253 jmp     short loc_28F1C ;~ 18ED:1A47
loc_28efa:
	// 7786 
cs=0x18ed;eip=0x001a4a; 	X(PUSH(cs));	// 49258 push    cs ;~ 18ED:1A4A
cs=0x18ed;eip=0x001a4b; 	R(CALL(timer_get_delta_alt,0));	// 49259 call    near ptr timer_get_delta_alt ;~ 18ED:1A4B
cs=0x18ed;eip=0x001a4e; 	X(PUSH(ax));	// 49260 push    ax ;~ 18ED:1A4E
cs=0x18ed;eip=0x001a4f; 	X(PUSH(cs));	// 49261 push    cs ;~ 18ED:1A4F
cs=0x18ed;eip=0x001a50; 	R(CALL(input_checking,0));	// 49262 call    near ptr input_checking ;~ 18ED:1A50
cs=0x18ed;eip=0x001a53; 	T(ADD(sp, 2));	// 49263 add     sp, 2 ;~ 18ED:1A53
cs=0x18ed;eip=0x001a56; 	T(OR(ax, ax));	// 49264 or      ax, ax ;~ 18ED:1A56
cs=0x18ed;eip=0x001a58; 	R(JNZ(loc_28ef3));	// 49265 jnz     short loc_28EF3 ;~ 18ED:1A58
cs=0x18ed;eip=0x001a5a; 	T(CMP(kbormouse, 0));	// 49266 cmp     kbormouse, 0 ;~ 18ED:1A5A
cs=0x18ed;eip=0x001a5f; 	R(JZ(loc_28f18));	// 49267 jz      short loc_28F18 ;~ 18ED:1A5F
cs=0x18ed;eip=0x001a61; 	T(TEST(*(db*)(((db*)&mouse_butstate)), 3));	// 49268 test    byte ptr mouse_butstate, 3 ;~ 18ED:1A61
cs=0x18ed;eip=0x001a66; 	R(JNZ(loc_28ef3));	// 49269 jnz     short loc_28EF3 ;~ 18ED:1A66
loc_28f18:
	// 7787 
cs=0x18ed;eip=0x001a68; 	X(MOV(*(raddr(ss,bp+var_2)), 0));	// 49272 mov     [bp+var_2], 0 ;~ 18ED:1A68
loc_28f1c:
	// 7788 
cs=0x18ed;eip=0x001a6c; 	T(CMP(*(raddr(ss,bp+var_2)), 0));	// 49275 cmp     [bp+var_2], 0 ;~ 18ED:1A6C
cs=0x18ed;eip=0x001a70; 	R(JNZ(loc_28eea));	// 49276 jnz     short loc_28EEA ;~ 18ED:1A70
cs=0x18ed;eip=0x001a72; 	T(MOV(sp, bp));	// 49277 mov     sp, bp ;~ 18ED:1A72
cs=0x18ed;eip=0x001a74; 	X(POP(bp));	// 49278 pop     bp ;~ 18ED:1A74
cs=0x18ed;eip=0x001a75; 	R(RETF(0));	// 49279 retf ;~ 18ED:1A75
nopsub_28f26:
	// 49286 
cs=0x18ed;eip=0x001a76; 	X(PUSH(cs));	// 49287 push    cs ;~ 18ED:1A76
ret_18ed_1a77:
	// 7789 
cs=0x18ed;eip=0x001a77; 	R(CALL(timer_get_delta_alt,0));	// 49288 call    near ptr timer_get_delta_alt ;~ 18ED:1A77
cs=0x18ed;eip=0x001a7a; 	X(PUSH(ax));	// 49289 push    ax ;~ 18ED:1A7A
cs=0x18ed;eip=0x001a7b; 	X(PUSH(cs));	// 49290 push    cs ;~ 18ED:1A7B
cs=0x18ed;eip=0x001a7c; 	R(CALL(input_checking,0));	// 49291 call    near ptr input_checking ;~ 18ED:1A7C
cs=0x18ed;eip=0x001a7f; 	T(ADD(sp, 2));	// 49292 add     sp, 2 ;~ 18ED:1A7F
cs=0x18ed;eip=0x001a82; 	T(OR(ax, ax));	// 49293 or      ax, ax ;~ 18ED:1A82
cs=0x18ed;eip=0x001a84; 	R(JZ(nopsub_28f26));	// 49294 jz      short near ptr nopsub_28F26 ;~ 18ED:1A84
cs=0x18ed;eip=0x001a86; 	X(PUSH(cs));	// 49295 push    cs ;~ 18ED:1A86
cs=0x18ed;eip=0x001a87; 	R(CALL(check_input,0));	// 49296 call    near ptr check_input ;~ 18ED:1A87
cs=0x18ed;eip=0x001a8a; 	R(RETF(0));	// 49297 retf ;~ 18ED:1A8A
sprite_copy_2_to_1_2:
	// 49306 
cs=0x18ed;eip=0x001a8c; 	T(MOV(ax, offset(seg012,sprite2)));	// 49308 mov     ax, offset sprite2 ;~ 18ED:1A8C
ret_18ed_1a8f:
	// 7790 
cs=0x18ed;eip=0x001a8f; 	T(MOV(dx, seg_offset(seg012)));	// 49309 mov     dx, seg seg012 ;~ 18ED:1A8F
cs=0x18ed;eip=0x001a92; 	X(PUSH(dx));	// 49310 push    dx ;~ 18ED:1A92
cs=0x18ed;eip=0x001a93; 	X(PUSH(ax));	// 49311 push    ax ;~ 18ED:1A93
cs=0x18ed;eip=0x001a94; 	R(CALLF(sprite_set_1_from_argptr,0));	// 49312 call    sprite_set_1_from_argptr ;~ 18ED:1A94
cs=0x18ed;eip=0x001a99; 	T(ADD(sp, 4));	// 49313 add     sp, 4 ;~ 18ED:1A99
cs=0x18ed;eip=0x001a9c; 	R(RETF(0));	// 49314 retf ;~ 18ED:1A9C
sprite_copy_2_to_1_clear:
	// 49323 
cs=0x18ed;eip=0x001a9e; 	T(MOV(ax, offset(seg012,sprite2)));	// 49325 mov     ax, offset sprite2 ;~ 18ED:1A9E
ret_18ed_1aa1:
	// 7791 
cs=0x18ed;eip=0x001aa1; 	T(MOV(dx, seg_offset(seg012)));	// 49326 mov     dx, seg seg012 ;~ 18ED:1AA1
cs=0x18ed;eip=0x001aa4; 	X(PUSH(dx));	// 49327 push    dx ;~ 18ED:1AA4
cs=0x18ed;eip=0x001aa5; 	X(PUSH(ax));	// 49328 push    ax ;~ 18ED:1AA5
cs=0x18ed;eip=0x001aa6; 	R(CALLF(sprite_set_1_from_argptr,0));	// 49329 call    sprite_set_1_from_argptr ;~ 18ED:1AA6
cs=0x18ed;eip=0x001aab; 	T(ADD(sp, 4));	// 49330 add     sp, 4 ;~ 18ED:1AAB
cs=0x18ed;eip=0x001aae; 	T(SUB(ax, ax));	// 49331 sub     ax, ax ;~ 18ED:1AAE
cs=0x18ed;eip=0x001ab0; 	X(PUSH(ax));	// 49332 push    ax ;~ 18ED:1AB0
cs=0x18ed;eip=0x001ab1; 	R(CALLF(sprite_clear_1_color,0));	// 49333 call    sprite_clear_1_color ;~ 18ED:1AB1
cs=0x18ed;eip=0x001ab6; 	T(ADD(sp, 2));	// 49334 add     sp, 2 ;~ 18ED:1AB6
cs=0x18ed;eip=0x001ab9; 	R(RETF(0));	// 49335 retf ;~ 18ED:1AB9
sprite_copy_wnd_to_1:
	// 49342 
cs=0x18ed;eip=0x001aba; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 49344 push    word ptr wndsprite+2 ;~ 18ED:1ABA
ret_18ed_1abe:
	// 7792 
cs=0x18ed;eip=0x001abe; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 49345 push    word ptr wndsprite ;~ 18ED:1ABE
cs=0x18ed;eip=0x001ac2; 	R(CALLF(sprite_set_1_from_argptr,0));	// 49346 call    sprite_set_1_from_argptr ;~ 18ED:1AC2
cs=0x18ed;eip=0x001ac7; 	T(ADD(sp, 4));	// 49347 add     sp, 4 ;~ 18ED:1AC7
cs=0x18ed;eip=0x001aca; 	R(RETF(0));	// 49348 retf ;~ 18ED:1ACA
sprite_copy_wnd_to_1_clear:
	// 49357 
cs=0x18ed;eip=0x001acc; 	X(PUSH(*(dw*)(((db*)&wndsprite)+2)));	// 49359 push    word ptr wndsprite+2 ;~ 18ED:1ACC
ret_18ed_1ad0:
	// 7793 
cs=0x18ed;eip=0x001ad0; 	X(PUSH(*(dw*)(((db*)&wndsprite))));	// 49360 push    word ptr wndsprite ;~ 18ED:1AD0
cs=0x18ed;eip=0x001ad4; 	R(CALLF(sprite_set_1_from_argptr,0));	// 49361 call    sprite_set_1_from_argptr ;~ 18ED:1AD4
cs=0x18ed;eip=0x001ad9; 	T(ADD(sp, 4));	// 49362 add     sp, 4 ;~ 18ED:1AD9
cs=0x18ed;eip=0x001adc; 	T(SUB(ax, ax));	// 49363 sub     ax, ax ;~ 18ED:1ADC
cs=0x18ed;eip=0x001ade; 	X(PUSH(ax));	// 49364 push    ax ;~ 18ED:1ADE
cs=0x18ed;eip=0x001adf; 	R(CALLF(sprite_clear_1_color,0));	// 49365 call    sprite_clear_1_color ;~ 18ED:1ADF
cs=0x18ed;eip=0x001ae4; 	T(ADD(sp, 2));	// 49366 add     sp, 2 ;~ 18ED:1AE4
cs=0x18ed;eip=0x001ae7; 	R(RETF(0));	// 49367 retf ;~ 18ED:1AE7
intro_draw_text:
	// 49375 
#undef arg_0
#define arg_0 6
	// 49378 arg_0           = word ptr  6 ;~ 18ED:1AE8
#undef arg_2
#define arg_2 8
	// 49379 arg_2           = word ptr  8 ;~ 18ED:1AE8
#undef arg_4
#define arg_4 0x0A
	// 49380 arg_4           = word ptr  0Ah ;~ 18ED:1AE8
#undef arg_6
#define arg_6 0x0C
	// 49381 arg_6           = word ptr  0Ch ;~ 18ED:1AE8
#undef arg_8
#define arg_8 0x0E
	// 49382 arg_8           = word ptr  0Eh ;~ 18ED:1AE8
ret_18ed_1ae8:
	// 7794 
cs=0x18ed;eip=0x001ae8; 	X(PUSH(bp));	// 49384 push    bp ;~ 18ED:1AE8
cs=0x18ed;eip=0x001ae9; 	T(MOV(bp, sp));	// 49385 mov     bp, sp ;~ 18ED:1AE9
cs=0x18ed;eip=0x001aeb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 49386 mov     ax, [bp+arg_4] ;~ 18ED:1AEB
cs=0x18ed;eip=0x001aee; 	X(MOV(word_4224c, ax));	// 49387 mov     word_4224C, ax ;~ 18ED:1AEE
cs=0x18ed;eip=0x001af1; 	T(ADD(ax, fontdef_unk_0e));	// 49388 add     ax, fontdef_unk_0E ;~ 18ED:1AF1
cs=0x18ed;eip=0x001af5; 	T(INC(ax));	// 49389 inc     ax ;~ 18ED:1AF5
cs=0x18ed;eip=0x001af6; 	X(MOV(word_4224e, ax));	// 49390 mov     word_4224E, ax ;~ 18ED:1AF6
cs=0x18ed;eip=0x001af9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 49391 mov     ax, [bp+arg_2] ;~ 18ED:1AF9
cs=0x18ed;eip=0x001afc; 	X(MOV(word_42248, ax));	// 49392 mov     word_42248, ax ;~ 18ED:1AFC
cs=0x18ed;eip=0x001aff; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 49393 push    [bp+arg_0] ;~ 18ED:1AFF
cs=0x18ed;eip=0x001b02; 	R(CALLF(font_op2,0));	// 49394 call    font_op2 ;~ 18ED:1B02
cs=0x18ed;eip=0x001b07; 	T(ADD(sp, 2));	// 49395 add     sp, 2 ;~ 18ED:1B07
cs=0x18ed;eip=0x001b0a; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 49396 add     ax, [bp+arg_2] ;~ 18ED:1B0A
cs=0x18ed;eip=0x001b0d; 	T(INC(ax));	// 49397 inc     ax ;~ 18ED:1B0D
cs=0x18ed;eip=0x001b0e; 	X(MOV(word_4224a, ax));	// 49398 mov     word_4224A, ax ;~ 18ED:1B0E
cs=0x18ed;eip=0x001b11; 	T(SUB(ax, ax));	// 49399 sub     ax, ax ;~ 18ED:1B11
cs=0x18ed;eip=0x001b13; 	X(PUSH(ax));	// 49400 push    ax ;~ 18ED:1B13
cs=0x18ed;eip=0x001b14; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 49401 push    [bp+arg_8] ;~ 18ED:1B14
cs=0x18ed;eip=0x001b17; 	R(CALLF(font_set_unk,0));	// 49402 call    font_set_unk ;~ 18ED:1B17
cs=0x18ed;eip=0x001b1c; 	T(ADD(sp, 4));	// 49403 add     sp, 4 ;~ 18ED:1B1C
cs=0x18ed;eip=0x001b1f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 49404 mov     ax, [bp+arg_4] ;~ 18ED:1B1F
cs=0x18ed;eip=0x001b22; 	T(INC(ax));	// 49405 inc     ax ;~ 18ED:1B22
cs=0x18ed;eip=0x001b23; 	X(PUSH(ax));	// 49406 push    ax ;~ 18ED:1B23
cs=0x18ed;eip=0x001b24; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 49407 mov     ax, [bp+arg_2] ;~ 18ED:1B24
cs=0x18ed;eip=0x001b27; 	T(INC(ax));	// 49408 inc     ax ;~ 18ED:1B27
cs=0x18ed;eip=0x001b28; 	X(PUSH(ax));	// 49409 push    ax ;~ 18ED:1B28
cs=0x18ed;eip=0x001b29; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 49410 push    [bp+arg_0] ;~ 18ED:1B29
cs=0x18ed;eip=0x001b2c; 	R(CALLF(font_draw_text,0));	// 49411 call    font_draw_text ;~ 18ED:1B2C
cs=0x18ed;eip=0x001b31; 	T(ADD(sp, 6));	// 49412 add     sp, 6 ;~ 18ED:1B31
cs=0x18ed;eip=0x001b34; 	T(SUB(ax, ax));	// 49413 sub     ax, ax ;~ 18ED:1B34
cs=0x18ed;eip=0x001b36; 	X(PUSH(ax));	// 49414 push    ax ;~ 18ED:1B36
cs=0x18ed;eip=0x001b37; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 49415 push    [bp+arg_6] ;~ 18ED:1B37
cs=0x18ed;eip=0x001b3a; 	R(CALLF(font_set_unk,0));	// 49416 call    font_set_unk ;~ 18ED:1B3A
cs=0x18ed;eip=0x001b3f; 	T(ADD(sp, 4));	// 49417 add     sp, 4 ;~ 18ED:1B3F
cs=0x18ed;eip=0x001b42; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 49418 push    [bp+arg_4] ;~ 18ED:1B42
cs=0x18ed;eip=0x001b45; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 49419 push    [bp+arg_2] ;~ 18ED:1B45
cs=0x18ed;eip=0x001b48; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 49420 push    [bp+arg_0] ;~ 18ED:1B48
cs=0x18ed;eip=0x001b4b; 	R(CALLF(font_draw_text,0));	// 49421 call    font_draw_text ;~ 18ED:1B4B
cs=0x18ed;eip=0x001b50; 	T(ADD(sp, 6));	// 49422 add     sp, 6 ;~ 18ED:1B50
cs=0x18ed;eip=0x001b53; 	T(MOV(ax, offset(dseg,word_42248)));	// 49423 mov     ax, offset word_42248 ;~ 18ED:1B53
cs=0x18ed;eip=0x001b56; 	X(POP(bp));	// 49424 pop     bp ;~ 18ED:1B56
cs=0x18ed;eip=0x001b57; 	R(RETF(0));	// 49425 retf ;~ 18ED:1B57
hiscore_draw_text:
	// 49433 
#undef arg_0
#define arg_0 6
	// 49436 arg_0           = word ptr  6 ;~ 18ED:1B58
#undef arg_2
#define arg_2 8
	// 49437 arg_2           = word ptr  8 ;~ 18ED:1B58
#undef arg_4
#define arg_4 0x0A
	// 49438 arg_4           = word ptr  0Ah ;~ 18ED:1B58
#undef arg_6
#define arg_6 0x0C
	// 49439 arg_6           = word ptr  0Ch ;~ 18ED:1B58
#undef arg_8
#define arg_8 0x0E
	// 49440 arg_8           = word ptr  0Eh ;~ 18ED:1B58
ret_18ed_1b58:
	// 7795 
cs=0x18ed;eip=0x001b58; 	X(PUSH(bp));	// 49442 push    bp ;~ 18ED:1B58
cs=0x18ed;eip=0x001b59; 	T(MOV(bp, sp));	// 49443 mov     bp, sp ;~ 18ED:1B59
cs=0x18ed;eip=0x001b5b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 49444 mov     ax, [bp+arg_4] ;~ 18ED:1B5B
cs=0x18ed;eip=0x001b5e; 	T(DEC(ax));	// 49445 dec     ax ;~ 18ED:1B5E
cs=0x18ed;eip=0x001b5f; 	X(MOV(word_42254, ax));	// 49446 mov     word_42254, ax ;~ 18ED:1B5F
cs=0x18ed;eip=0x001b62; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 49447 mov     ax, [bp+arg_4] ;~ 18ED:1B62
cs=0x18ed;eip=0x001b65; 	T(ADD(ax, fontdef_unk_0e));	// 49448 add     ax, fontdef_unk_0E ;~ 18ED:1B65
cs=0x18ed;eip=0x001b69; 	T(INC(ax));	// 49449 inc     ax ;~ 18ED:1B69
cs=0x18ed;eip=0x001b6a; 	X(MOV(word_42256, ax));	// 49450 mov     word_42256, ax ;~ 18ED:1B6A
cs=0x18ed;eip=0x001b6d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 49451 mov     ax, [bp+arg_2] ;~ 18ED:1B6D
cs=0x18ed;eip=0x001b70; 	T(DEC(ax));	// 49452 dec     ax ;~ 18ED:1B70
cs=0x18ed;eip=0x001b71; 	X(MOV(word_42250, ax));	// 49453 mov     word_42250, ax ;~ 18ED:1B71
cs=0x18ed;eip=0x001b74; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 49454 push    [bp+arg_0] ;~ 18ED:1B74
cs=0x18ed;eip=0x001b77; 	R(CALLF(font_op2,0));	// 49455 call    font_op2 ;~ 18ED:1B77
cs=0x18ed;eip=0x001b7c; 	T(ADD(sp, 2));	// 49456 add     sp, 2 ;~ 18ED:1B7C
cs=0x18ed;eip=0x001b7f; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 49457 add     ax, [bp+arg_2] ;~ 18ED:1B7F
cs=0x18ed;eip=0x001b82; 	T(INC(ax));	// 49458 inc     ax ;~ 18ED:1B82
cs=0x18ed;eip=0x001b83; 	X(MOV(word_42252, ax));	// 49459 mov     word_42252, ax ;~ 18ED:1B83
cs=0x18ed;eip=0x001b86; 	T(SUB(ax, ax));	// 49460 sub     ax, ax ;~ 18ED:1B86
cs=0x18ed;eip=0x001b88; 	X(PUSH(ax));	// 49461 push    ax ;~ 18ED:1B88
cs=0x18ed;eip=0x001b89; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 49462 push    [bp+arg_8] ;~ 18ED:1B89
cs=0x18ed;eip=0x001b8c; 	R(CALLF(font_set_unk,0));	// 49463 call    font_set_unk ;~ 18ED:1B8C
cs=0x18ed;eip=0x001b91; 	T(ADD(sp, 4));	// 49464 add     sp, 4 ;~ 18ED:1B91
cs=0x18ed;eip=0x001b94; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 49465 mov     ax, [bp+arg_4] ;~ 18ED:1B94
cs=0x18ed;eip=0x001b97; 	T(INC(ax));	// 49466 inc     ax ;~ 18ED:1B97
cs=0x18ed;eip=0x001b98; 	X(PUSH(ax));	// 49467 push    ax ;~ 18ED:1B98
cs=0x18ed;eip=0x001b99; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 49468 mov     ax, [bp+arg_2] ;~ 18ED:1B99
cs=0x18ed;eip=0x001b9c; 	T(INC(ax));	// 49469 inc     ax ;~ 18ED:1B9C
cs=0x18ed;eip=0x001b9d; 	X(PUSH(ax));	// 49470 push    ax ;~ 18ED:1B9D
cs=0x18ed;eip=0x001b9e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 49471 push    [bp+arg_0] ;~ 18ED:1B9E
cs=0x18ed;eip=0x001ba1; 	R(CALLF(font_draw_text,0));	// 49472 call    font_draw_text ;~ 18ED:1BA1
cs=0x18ed;eip=0x001ba6; 	T(ADD(sp, 6));	// 49473 add     sp, 6 ;~ 18ED:1BA6
cs=0x18ed;eip=0x001ba9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 49474 mov     ax, [bp+arg_4] ;~ 18ED:1BA9
cs=0x18ed;eip=0x001bac; 	T(INC(ax));	// 49475 inc     ax ;~ 18ED:1BAC
cs=0x18ed;eip=0x001bad; 	X(PUSH(ax));	// 49476 push    ax ;~ 18ED:1BAD
cs=0x18ed;eip=0x001bae; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 49477 mov     ax, [bp+arg_2] ;~ 18ED:1BAE
cs=0x18ed;eip=0x001bb1; 	T(DEC(ax));	// 49478 dec     ax ;~ 18ED:1BB1
cs=0x18ed;eip=0x001bb2; 	X(PUSH(ax));	// 49479 push    ax ;~ 18ED:1BB2
cs=0x18ed;eip=0x001bb3; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 49480 push    [bp+arg_0] ;~ 18ED:1BB3
cs=0x18ed;eip=0x001bb6; 	R(CALLF(font_draw_text,0));	// 49481 call    font_draw_text ;~ 18ED:1BB6
cs=0x18ed;eip=0x001bbb; 	T(ADD(sp, 6));	// 49482 add     sp, 6 ;~ 18ED:1BBB
cs=0x18ed;eip=0x001bbe; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 49483 mov     ax, [bp+arg_4] ;~ 18ED:1BBE
cs=0x18ed;eip=0x001bc1; 	T(DEC(ax));	// 49484 dec     ax ;~ 18ED:1BC1
cs=0x18ed;eip=0x001bc2; 	X(PUSH(ax));	// 49485 push    ax ;~ 18ED:1BC2
cs=0x18ed;eip=0x001bc3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 49486 mov     ax, [bp+arg_2] ;~ 18ED:1BC3
cs=0x18ed;eip=0x001bc6; 	T(INC(ax));	// 49487 inc     ax ;~ 18ED:1BC6
cs=0x18ed;eip=0x001bc7; 	X(PUSH(ax));	// 49488 push    ax ;~ 18ED:1BC7
cs=0x18ed;eip=0x001bc8; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 49489 push    [bp+arg_0] ;~ 18ED:1BC8
cs=0x18ed;eip=0x001bcb; 	R(CALLF(font_draw_text,0));	// 49490 call    font_draw_text ;~ 18ED:1BCB
cs=0x18ed;eip=0x001bd0; 	T(ADD(sp, 6));	// 49491 add     sp, 6 ;~ 18ED:1BD0
cs=0x18ed;eip=0x001bd3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 49492 mov     ax, [bp+arg_4] ;~ 18ED:1BD3
cs=0x18ed;eip=0x001bd6; 	T(DEC(ax));	// 49493 dec     ax ;~ 18ED:1BD6
cs=0x18ed;eip=0x001bd7; 	X(PUSH(ax));	// 49494 push    ax ;~ 18ED:1BD7
cs=0x18ed;eip=0x001bd8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 49495 mov     ax, [bp+arg_2] ;~ 18ED:1BD8
cs=0x18ed;eip=0x001bdb; 	T(DEC(ax));	// 49496 dec     ax ;~ 18ED:1BDB
cs=0x18ed;eip=0x001bdc; 	X(PUSH(ax));	// 49497 push    ax ;~ 18ED:1BDC
cs=0x18ed;eip=0x001bdd; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 49498 push    [bp+arg_0] ;~ 18ED:1BDD
cs=0x18ed;eip=0x001be0; 	R(CALLF(font_draw_text,0));	// 49499 call    font_draw_text ;~ 18ED:1BE0
cs=0x18ed;eip=0x001be5; 	T(ADD(sp, 6));	// 49500 add     sp, 6 ;~ 18ED:1BE5
cs=0x18ed;eip=0x001be8; 	T(SUB(ax, ax));	// 49501 sub     ax, ax ;~ 18ED:1BE8
cs=0x18ed;eip=0x001bea; 	X(PUSH(ax));	// 49502 push    ax ;~ 18ED:1BEA
cs=0x18ed;eip=0x001beb; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 49503 push    [bp+arg_6] ;~ 18ED:1BEB
cs=0x18ed;eip=0x001bee; 	R(CALLF(font_set_unk,0));	// 49504 call    font_set_unk ;~ 18ED:1BEE
cs=0x18ed;eip=0x001bf3; 	T(ADD(sp, 4));	// 49505 add     sp, 4 ;~ 18ED:1BF3
cs=0x18ed;eip=0x001bf6; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 49506 push    [bp+arg_4] ;~ 18ED:1BF6
cs=0x18ed;eip=0x001bf9; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 49507 push    [bp+arg_2] ;~ 18ED:1BF9
cs=0x18ed;eip=0x001bfc; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 49508 push    [bp+arg_0] ;~ 18ED:1BFC
cs=0x18ed;eip=0x001bff; 	R(CALLF(font_draw_text,0));	// 49509 call    font_draw_text ;~ 18ED:1BFF
cs=0x18ed;eip=0x001c04; 	T(ADD(sp, 6));	// 49510 add     sp, 6 ;~ 18ED:1C04
cs=0x18ed;eip=0x001c07; 	T(MOV(ax, offset(dseg,word_42250)));	// 49511 mov     ax, offset word_42250 ;~ 18ED:1C07
cs=0x18ed;eip=0x001c0a; 	X(POP(bp));	// 49512 pop     bp ;~ 18ED:1C0A
cs=0x18ed;eip=0x001c0b; 	R(RETF(0));	// 49513 retf ;~ 18ED:1C0B
call_read_line:
	// 49522 
#undef var_4
#define var_4 -4
	// 49525 var_4           = word ptr -4 ;~ 18ED:1C0C
#undef var_2
#define var_2 -2
	// 49526 var_2           = word ptr -2 ;~ 18ED:1C0C
#undef arg_0
#define arg_0 6
	// 49527 arg_0           = dword ptr  6 ;~ 18ED:1C0C
#undef arg_4
#define arg_4 0x0A
	// 49528 arg_4           = word ptr  0Ah ;~ 18ED:1C0C
#undef arg_6
#define arg_6 0x0C
	// 49529 arg_6           = dword ptr  0Ch ;~ 18ED:1C0C
#undef arg_a
#define arg_a 0x10
	// 49530 arg_A           = dword ptr  10h ;~ 18ED:1C0C
ret_18ed_1c0c:
	// 7796 
cs=0x18ed;eip=0x001c0c; 	X(PUSH(bp));	// 49532 push    bp              ; int ;~ 18ED:1C0C
cs=0x18ed;eip=0x001c0d; 	T(MOV(bp, sp));	// 49533 mov     bp, sp ;~ 18ED:1C0D
cs=0x18ed;eip=0x001c0f; 	T(SUB(sp, 4));	// 49534 sub     sp, 4 ;~ 18ED:1C0F
cs=0x18ed;eip=0x001c12; 	X(PUSH(si));	// 49535 push    si ;~ 18ED:1C12
cs=0x18ed;eip=0x001c13; 	X(PUSH(cs));	// 49536 push    cs ;~ 18ED:1C13
cs=0x18ed;eip=0x001c14; 	R(CALL(mouse_draw_opaque_check,0));	// 49537 call    near ptr mouse_draw_opaque_check ;~ 18ED:1C14
cs=0x18ed;eip=0x001c17; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_a)))));	// 49538 push    word ptr [bp+arg_A] ; int ;~ 18ED:1C17
cs=0x18ed;eip=0x001c1a; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_6+2)))));	// 49539 push    word ptr [bp+arg_6+2] ; int ;~ 18ED:1C1A
cs=0x18ed;eip=0x001c1d; 	T(MOV(ax, 2));	// 49540 mov     ax, 2 ;~ 18ED:1C1D
cs=0x18ed;eip=0x001c20; 	T(MOV(dx, seg_offset(seg018)));	// 49541 mov     dx, seg seg018 ;~ 18ED:1C20
cs=0x18ed;eip=0x001c23; 	X(PUSH(dx));	// 49542 push    dx              ; int ;~ 18ED:1C23
cs=0x18ed;eip=0x001c24; 	X(PUSH(ax));	// 49543 push    ax              ; __int32 ;~ 18ED:1C24
cs=0x18ed;eip=0x001c25; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_6)))));	// 49544 push    word ptr [bp+arg_6] ; int ;~ 18ED:1C25
cs=0x18ed;eip=0x001c28; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 49545 push    [bp+arg_4]      ; int ;~ 18ED:1C28
cs=0x18ed;eip=0x001c2b; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 49546 mov     ax, word ptr [bp+arg_0+2] ;~ 18ED:1C2B
cs=0x18ed;eip=0x001c2e; 	T(MOV(cx, ax));	// 49547 mov     cx, ax ;~ 18ED:1C2E
cs=0x18ed;eip=0x001c30; 	T(SHL(ax, 1));	// 49548 shl     ax, 1 ;~ 18ED:1C30
cs=0x18ed;eip=0x001c32; 	T(SHL(ax, 1));	// 49549 shl     ax, 1 ;~ 18ED:1C32
cs=0x18ed;eip=0x001c34; 	T(SHL(ax, 1));	// 49550 shl     ax, 1 ;~ 18ED:1C34
cs=0x18ed;eip=0x001c36; 	T(ADD(ax, cx));	// 49551 add     ax, cx ;~ 18ED:1C36
cs=0x18ed;eip=0x001c38; 	T(ADD(ax, 9));	// 49552 add     ax, 9 ;~ 18ED:1C38
cs=0x18ed;eip=0x001c3b; 	X(PUSH(ax));	// 49553 push    ax              ; int ;~ 18ED:1C3B
cs=0x18ed;eip=0x001c3c; 	X(PUSH(cx));	// 49554 push    cx              ; int ;~ 18ED:1C3C
cs=0x18ed;eip=0x001c3d; 	T(SUB(ax, ax));	// 49555 sub     ax, ax ;~ 18ED:1C3D
cs=0x18ed;eip=0x001c3f; 	X(PUSH(ax));	// 49556 push    ax              ; char * ;~ 18ED:1C3F
cs=0x18ed;eip=0x001c40; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 49557 push    word ptr [bp+arg_0] ; char * ;~ 18ED:1C40
cs=0x18ed;eip=0x001c43; 	T(MOV(ax, 2));	// 49558 mov     ax, 2 ;~ 18ED:1C43
cs=0x18ed;eip=0x001c46; 	X(PUSH(ax));	// 49559 push    ax              ; char ;~ 18ED:1C46
cs=0x18ed;eip=0x001c47; 	R(CALLF(read_line,0));	// 49560 call    read_line ;~ 18ED:1C47
cs=0x18ed;eip=0x001c4c; 	T(ADD(sp, 0x16));	// 49561 add     sp, 16h ;~ 18ED:1C4C
cs=0x18ed;eip=0x001c4f; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 49562 mov     [bp+var_4], ax ;~ 18ED:1C4F
cs=0x18ed;eip=0x001c52; 	X(PUSH(cs));	// 49563 push    cs ;~ 18ED:1C52
cs=0x18ed;eip=0x001c53; 	R(CALL(mouse_draw_transparent_check,0));	// 49564 call    near ptr mouse_draw_transparent_check ;~ 18ED:1C53
cs=0x18ed;eip=0x001c56; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 49565 push    word ptr [bp+arg_0] ; char * ;~ 18ED:1C56
cs=0x18ed;eip=0x001c59; 	R(CALLF(_strlen,0));	// 49566 call    _strlen ;~ 18ED:1C59
cs=0x18ed;eip=0x001c5e; 	T(ADD(sp, 2));	// 49567 add     sp, 2 ;~ 18ED:1C5E
cs=0x18ed;eip=0x001c61; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+arg_0+2))), ax));	// 49568 mov     word ptr [bp+arg_0+2], ax ;~ 18ED:1C61
cs=0x18ed;eip=0x001c64; 	T(DEC(ax));	// 49569 dec     ax ;~ 18ED:1C64
cs=0x18ed;eip=0x001c65; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 49570 mov     [bp+var_2], ax ;~ 18ED:1C65
cs=0x18ed;eip=0x001c68; 	R(JMP(loc_2911d));	// 49571 jmp     short loc_2911D ;~ 18ED:1C68
loc_2911a:
	// 7797 
cs=0x18ed;eip=0x001c6a; 	X(DEC(*(dw*)(raddr(ss,bp+var_2))));	// 49575 dec     [bp+var_2] ;~ 18ED:1C6A
loc_2911d:
	// 7798 
cs=0x18ed;eip=0x001c6d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 49578 mov     bx, [bp+var_2] ;~ 18ED:1C6D
cs=0x18ed;eip=0x001c70; 	T(MOV(si, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 49579 mov     si, word ptr [bp+arg_0] ;~ 18ED:1C70
cs=0x18ed;eip=0x001c73; 	T(CMP(*(raddr(ds,bx+si)), 0x20));	// 49580 cmp     byte ptr [bx+si], 20h ; ' ' ;~ 18ED:1C73
cs=0x18ed;eip=0x001c76; 	R(JZ(loc_2911a));	// 49581 jz      short loc_2911A ;~ 18ED:1C76
cs=0x18ed;eip=0x001c78; 	T(MOV(si, bx));	// 49582 mov     si, bx ;~ 18ED:1C78
cs=0x18ed;eip=0x001c7a; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 49583 mov     bx, word ptr [bp+arg_0] ;~ 18ED:1C7A
cs=0x18ed;eip=0x001c7d; 	X(MOV(*(raddr(ds,bx+si+1)), 0));	// 49584 mov     byte ptr [bx+si+1], 0 ;~ 18ED:1C7D
cs=0x18ed;eip=0x001c81; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 49585 mov     ax, [bp+var_4] ;~ 18ED:1C81
cs=0x18ed;eip=0x001c84; 	X(POP(si));	// 49586 pop     si ;~ 18ED:1C84
cs=0x18ed;eip=0x001c85; 	T(MOV(sp, bp));	// 49587 mov     sp, bp ;~ 18ED:1C85
cs=0x18ed;eip=0x001c87; 	X(POP(bp));	// 49588 pop     bp ;~ 18ED:1C87
cs=0x18ed;eip=0x001c88; 	R(RETF(0));	// 49589 retf ;~ 18ED:1C88
input_repeat_check:
	// 49599 
#undef var_4
#define var_4 -4
	// 49602 var_4           = word ptr -4 ;~ 18ED:1C8A
#undef arg_0
#define arg_0 6
	// 49603 arg_0           = word ptr  6 ;~ 18ED:1C8A
ret_18ed_1c8a:
	// 7799 
cs=0x18ed;eip=0x001c8a; 	X(PUSH(bp));	// 49605 push    bp ;~ 18ED:1C8A
cs=0x18ed;eip=0x001c8b; 	T(MOV(bp, sp));	// 49606 mov     bp, sp ;~ 18ED:1C8B
cs=0x18ed;eip=0x001c8d; 	T(SUB(sp, 6));	// 49607 sub     sp, 6 ;~ 18ED:1C8D
cs=0x18ed;eip=0x001c90; 	X(PUSH(di));	// 49608 push    di ;~ 18ED:1C90
cs=0x18ed;eip=0x001c91; 	X(PUSH(si));	// 49609 push    si ;~ 18ED:1C91
cs=0x18ed;eip=0x001c92; 	T(SUB(di, di));	// 49610 sub     di, di ;~ 18ED:1C92
cs=0x18ed;eip=0x001c94; 	X(PUSH(cs));	// 49611 push    cs ;~ 18ED:1C94
cs=0x18ed;eip=0x001c95; 	R(CALL(timer_get_delta_alt,0));	// 49612 call    near ptr timer_get_delta_alt ;~ 18ED:1C95
cs=0x18ed;eip=0x001c98; 	R(JMP(loc_29161));	// 49613 jmp     short loc_29161 ;~ 18ED:1C98
loc_2914a:
	// 7800 
cs=0x18ed;eip=0x001c9a; 	X(PUSH(cs));	// 49617 push    cs ;~ 18ED:1C9A
cs=0x18ed;eip=0x001c9b; 	R(CALL(timer_get_delta_alt,0));	// 49618 call    near ptr timer_get_delta_alt ;~ 18ED:1C9B
cs=0x18ed;eip=0x001c9e; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 49619 mov     [bp+var_4], ax ;~ 18ED:1C9E
cs=0x18ed;eip=0x001ca1; 	T(ADD(di, ax));	// 49620 add     di, ax ;~ 18ED:1CA1
cs=0x18ed;eip=0x001ca3; 	X(PUSH(ax));	// 49621 push    ax ;~ 18ED:1CA3
cs=0x18ed;eip=0x001ca4; 	X(PUSH(cs));	// 49622 push    cs ;~ 18ED:1CA4
cs=0x18ed;eip=0x001ca5; 	R(CALL(input_do_checking,0));	// 49623 call    near ptr input_do_checking ;~ 18ED:1CA5
cs=0x18ed;eip=0x001ca8; 	T(ADD(sp, 2));	// 49624 add     sp, 2 ;~ 18ED:1CA8
cs=0x18ed;eip=0x001cab; 	T(MOV(si, ax));	// 49625 mov     si, ax ;~ 18ED:1CAB
cs=0x18ed;eip=0x001cad; 	T(OR(si, si));	// 49626 or      si, si ;~ 18ED:1CAD
cs=0x18ed;eip=0x001caf; 	R(JNZ(loc_29168));	// 49627 jnz     short loc_29168 ;~ 18ED:1CAF
loc_29161:
	// 7801 
cs=0x18ed;eip=0x001cb1; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), di));	// 49630 cmp     [bp+arg_0], di ;~ 18ED:1CB1
cs=0x18ed;eip=0x001cb4; 	R(JG(loc_2914a));	// 49631 jg      short loc_2914A ;~ 18ED:1CB4
cs=0x18ed;eip=0x001cb6; 	T(SUB(ax, ax));	// 49632 sub     ax, ax ;~ 18ED:1CB6
loc_29168:
	// 7802 
cs=0x18ed;eip=0x001cb8; 	X(POP(si));	// 49635 pop     si ;~ 18ED:1CB8
cs=0x18ed;eip=0x001cb9; 	X(POP(di));	// 49636 pop     di ;~ 18ED:1CB9
cs=0x18ed;eip=0x001cba; 	T(MOV(sp, bp));	// 49637 mov     sp, bp ;~ 18ED:1CBA
cs=0x18ed;eip=0x001cbc; 	X(POP(bp));	// 49638 pop     bp ;~ 18ED:1CBC
cs=0x18ed;eip=0x001cbd; 	R(RETF(0));	// 49639 retf ;~ 18ED:1CBD
draw_lines_unk:
	// 49647 
#undef var_14
#define var_14 -0x14
	// 49650 var_14          = word ptr -14h ;~ 18ED:1CBE
#undef var_12
#define var_12 -0x12
	// 49651 var_12          = word ptr -12h ;~ 18ED:1CBE
#undef var_10
#define var_10 -0x10
	// 49652 var_10          = word ptr -10h ;~ 18ED:1CBE
#undef var_e
#define var_e -0x0E
	// 49653 var_E           = word ptr -0Eh ;~ 18ED:1CBE
#undef var_c
#define var_c -0x0C
	// 49654 var_C           = word ptr -0Ch ;~ 18ED:1CBE
#undef var_a
#define var_a -0x0A
	// 49655 var_A           = word ptr -0Ah ;~ 18ED:1CBE
#undef var_8
#define var_8 -8
	// 49656 var_8           = word ptr -8 ;~ 18ED:1CBE
#undef var_6
#define var_6 -6
	// 49657 var_6           = word ptr -6 ;~ 18ED:1CBE
#undef arg_0
#define arg_0 6
	// 49658 arg_0           = word ptr  6 ;~ 18ED:1CBE
#undef arg_2
#define arg_2 8
	// 49659 arg_2           = word ptr  8 ;~ 18ED:1CBE
#undef arg_4
#define arg_4 0x0A
	// 49660 arg_4           = word ptr  0Ah ;~ 18ED:1CBE
#undef arg_6
#define arg_6 0x0C
	// 49661 arg_6           = word ptr  0Ch ;~ 18ED:1CBE
#undef arg_8
#define arg_8 0x0E
	// 49662 arg_8           = word ptr  0Eh ;~ 18ED:1CBE
#undef arg_a
#define arg_a 0x10
	// 49663 arg_A           = word ptr  10h ;~ 18ED:1CBE
#undef arg_c
#define arg_c 0x12
	// 49664 arg_C           = word ptr  12h ;~ 18ED:1CBE
ret_18ed_1cbe:
	// 7803 
cs=0x18ed;eip=0x001cbe; 	X(PUSH(bp));	// 49666 push    bp ;~ 18ED:1CBE
cs=0x18ed;eip=0x001cbf; 	T(MOV(bp, sp));	// 49667 mov     bp, sp ;~ 18ED:1CBF
cs=0x18ed;eip=0x001cc1; 	T(SUB(sp, 0x14));	// 49668 sub     sp, 14h ;~ 18ED:1CC1
cs=0x18ed;eip=0x001cc4; 	X(PUSH(di));	// 49669 push    di ;~ 18ED:1CC4
cs=0x18ed;eip=0x001cc5; 	X(PUSH(si));	// 49670 push    si ;~ 18ED:1CC5
cs=0x18ed;eip=0x001cc6; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 49671 mov     si, [bp+arg_0] ;~ 18ED:1CC6
cs=0x18ed;eip=0x001cc9; 	T(ADD(si, *(dw*)(raddr(ss,bp+arg_4))));	// 49672 add     si, [bp+arg_4] ;~ 18ED:1CC9
cs=0x18ed;eip=0x001ccc; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_2))));	// 49673 mov     di, [bp+arg_2] ;~ 18ED:1CCC
cs=0x18ed;eip=0x001ccf; 	T(ADD(di, *(dw*)(raddr(ss,bp+arg_6))));	// 49674 add     di, [bp+arg_6] ;~ 18ED:1CCF
cs=0x18ed;eip=0x001cd2; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 49675 push    [bp+arg_8] ;~ 18ED:1CD2
cs=0x18ed;eip=0x001cd5; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 49676 push    [bp+arg_2] ;~ 18ED:1CD5
cs=0x18ed;eip=0x001cd8; 	X(PUSH(si));	// 49677 push    si ;~ 18ED:1CD8
cs=0x18ed;eip=0x001cd9; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 49678 push    [bp+arg_2] ;~ 18ED:1CD9
cs=0x18ed;eip=0x001cdc; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 49679 push    [bp+arg_0] ;~ 18ED:1CDC
cs=0x18ed;eip=0x001cdf; 	R(CALLF(prerender_line,0));	// 49680 call    preRender_line ;~ 18ED:1CDF
cs=0x18ed;eip=0x001ce4; 	T(ADD(sp, 0x0A));	// 49681 add     sp, 0Ah ;~ 18ED:1CE4
cs=0x18ed;eip=0x001ce7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 49682 mov     ax, [bp+arg_2] ;~ 18ED:1CE7
cs=0x18ed;eip=0x001cea; 	T(INC(ax));	// 49683 inc     ax ;~ 18ED:1CEA
cs=0x18ed;eip=0x001ceb; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 49684 mov     [bp+var_6], ax ;~ 18ED:1CEB
cs=0x18ed;eip=0x001cee; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 49685 push    [bp+arg_8] ;~ 18ED:1CEE
cs=0x18ed;eip=0x001cf1; 	X(PUSH(ax));	// 49686 push    ax ;~ 18ED:1CF1
cs=0x18ed;eip=0x001cf2; 	T(ax = si-1);	// 49687 lea     ax, [si-1] ;~ 18ED:1CF2
cs=0x18ed;eip=0x001cf5; 	X(PUSH(ax));	// 49688 push    ax ;~ 18ED:1CF5
cs=0x18ed;eip=0x001cf6; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 49689 push    [bp+var_6] ;~ 18ED:1CF6
cs=0x18ed;eip=0x001cf9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 49690 mov     ax, [bp+arg_0] ;~ 18ED:1CF9
cs=0x18ed;eip=0x001cfc; 	T(INC(ax));	// 49691 inc     ax ;~ 18ED:1CFC
cs=0x18ed;eip=0x001cfd; 	X(PUSH(ax));	// 49692 push    ax ;~ 18ED:1CFD
cs=0x18ed;eip=0x001cfe; 	R(CALLF(prerender_line,0));	// 49693 call    preRender_line ;~ 18ED:1CFE
cs=0x18ed;eip=0x001d03; 	T(ADD(sp, 0x0A));	// 49694 add     sp, 0Ah ;~ 18ED:1D03
cs=0x18ed;eip=0x001d06; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 49695 mov     ax, [bp+arg_2] ;~ 18ED:1D06
cs=0x18ed;eip=0x001d09; 	T(ADD(ax, 2));	// 49696 add     ax, 2 ;~ 18ED:1D09
cs=0x18ed;eip=0x001d0c; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 49697 mov     [bp+var_8], ax ;~ 18ED:1D0C
cs=0x18ed;eip=0x001d0f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 49698 push    [bp+arg_A] ;~ 18ED:1D0F
cs=0x18ed;eip=0x001d12; 	X(PUSH(ax));	// 49699 push    ax ;~ 18ED:1D12
cs=0x18ed;eip=0x001d13; 	T(ax = si-2);	// 49700 lea     ax, [si-2] ;~ 18ED:1D13
cs=0x18ed;eip=0x001d16; 	X(PUSH(ax));	// 49701 push    ax ;~ 18ED:1D16
cs=0x18ed;eip=0x001d17; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 49702 push    [bp+var_8] ;~ 18ED:1D17
cs=0x18ed;eip=0x001d1a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 49703 mov     ax, [bp+arg_0] ;~ 18ED:1D1A
cs=0x18ed;eip=0x001d1d; 	T(ADD(ax, 2));	// 49704 add     ax, 2 ;~ 18ED:1D1D
cs=0x18ed;eip=0x001d20; 	X(PUSH(ax));	// 49705 push    ax ;~ 18ED:1D20
cs=0x18ed;eip=0x001d21; 	R(CALLF(prerender_line,0));	// 49706 call    preRender_line ;~ 18ED:1D21
cs=0x18ed;eip=0x001d26; 	T(ADD(sp, 0x0A));	// 49707 add     sp, 0Ah ;~ 18ED:1D26
cs=0x18ed;eip=0x001d29; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 49708 push    [bp+arg_8] ;~ 18ED:1D29
cs=0x18ed;eip=0x001d2c; 	X(PUSH(di));	// 49709 push    di ;~ 18ED:1D2C
cs=0x18ed;eip=0x001d2d; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 49710 push    [bp+arg_0] ;~ 18ED:1D2D
cs=0x18ed;eip=0x001d30; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 49711 push    [bp+arg_2] ;~ 18ED:1D30
cs=0x18ed;eip=0x001d33; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 49712 push    [bp+arg_0] ;~ 18ED:1D33
cs=0x18ed;eip=0x001d36; 	R(CALLF(prerender_line,0));	// 49713 call    preRender_line ;~ 18ED:1D36
cs=0x18ed;eip=0x001d3b; 	T(ADD(sp, 0x0A));	// 49714 add     sp, 0Ah ;~ 18ED:1D3B
cs=0x18ed;eip=0x001d3e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 49715 mov     ax, [bp+arg_0] ;~ 18ED:1D3E
cs=0x18ed;eip=0x001d41; 	T(INC(ax));	// 49716 inc     ax ;~ 18ED:1D41
cs=0x18ed;eip=0x001d42; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 49717 mov     [bp+var_A], ax ;~ 18ED:1D42
cs=0x18ed;eip=0x001d45; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 49718 push    [bp+arg_8] ;~ 18ED:1D45
cs=0x18ed;eip=0x001d48; 	T(ax = di-1);	// 49719 lea     ax, [di-1] ;~ 18ED:1D48
cs=0x18ed;eip=0x001d4b; 	X(PUSH(ax));	// 49720 push    ax ;~ 18ED:1D4B
cs=0x18ed;eip=0x001d4c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 49721 push    [bp+var_A] ;~ 18ED:1D4C
cs=0x18ed;eip=0x001d4f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 49722 mov     ax, [bp+arg_2] ;~ 18ED:1D4F
cs=0x18ed;eip=0x001d52; 	T(INC(ax));	// 49723 inc     ax ;~ 18ED:1D52
cs=0x18ed;eip=0x001d53; 	X(PUSH(ax));	// 49724 push    ax ;~ 18ED:1D53
cs=0x18ed;eip=0x001d54; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 49725 push    [bp+var_A] ;~ 18ED:1D54
cs=0x18ed;eip=0x001d57; 	R(CALLF(prerender_line,0));	// 49726 call    preRender_line ;~ 18ED:1D57
cs=0x18ed;eip=0x001d5c; 	T(ADD(sp, 0x0A));	// 49727 add     sp, 0Ah ;~ 18ED:1D5C
cs=0x18ed;eip=0x001d5f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 49728 mov     ax, [bp+arg_0] ;~ 18ED:1D5F
cs=0x18ed;eip=0x001d62; 	T(ADD(ax, 2));	// 49729 add     ax, 2 ;~ 18ED:1D62
cs=0x18ed;eip=0x001d65; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 49730 mov     [bp+var_C], ax ;~ 18ED:1D65
cs=0x18ed;eip=0x001d68; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 49731 push    [bp+arg_A] ;~ 18ED:1D68
cs=0x18ed;eip=0x001d6b; 	T(ax = di-2);	// 49732 lea     ax, [di-2] ;~ 18ED:1D6B
cs=0x18ed;eip=0x001d6e; 	X(PUSH(ax));	// 49733 push    ax ;~ 18ED:1D6E
cs=0x18ed;eip=0x001d6f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 49734 push    [bp+var_C] ;~ 18ED:1D6F
cs=0x18ed;eip=0x001d72; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 49735 mov     ax, [bp+arg_2] ;~ 18ED:1D72
cs=0x18ed;eip=0x001d75; 	T(ADD(ax, 2));	// 49736 add     ax, 2 ;~ 18ED:1D75
cs=0x18ed;eip=0x001d78; 	X(PUSH(ax));	// 49737 push    ax ;~ 18ED:1D78
cs=0x18ed;eip=0x001d79; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 49738 push    [bp+var_C] ;~ 18ED:1D79
cs=0x18ed;eip=0x001d7c; 	R(CALLF(prerender_line,0));	// 49739 call    preRender_line ;~ 18ED:1D7C
cs=0x18ed;eip=0x001d81; 	T(ADD(sp, 0x0A));	// 49740 add     sp, 0Ah ;~ 18ED:1D81
cs=0x18ed;eip=0x001d84; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 49741 push    [bp+arg_C] ;~ 18ED:1D84
cs=0x18ed;eip=0x001d87; 	X(PUSH(di));	// 49742 push    di ;~ 18ED:1D87
cs=0x18ed;eip=0x001d88; 	X(PUSH(si));	// 49743 push    si ;~ 18ED:1D88
cs=0x18ed;eip=0x001d89; 	X(PUSH(di));	// 49744 push    di ;~ 18ED:1D89
cs=0x18ed;eip=0x001d8a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 49745 push    [bp+arg_0] ;~ 18ED:1D8A
cs=0x18ed;eip=0x001d8d; 	R(CALLF(prerender_line,0));	// 49746 call    preRender_line ;~ 18ED:1D8D
cs=0x18ed;eip=0x001d92; 	T(ADD(sp, 0x0A));	// 49747 add     sp, 0Ah ;~ 18ED:1D92
cs=0x18ed;eip=0x001d95; 	T(ax = di-1);	// 49748 lea     ax, [di-1] ;~ 18ED:1D95
cs=0x18ed;eip=0x001d98; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 49749 mov     [bp+var_E], ax ;~ 18ED:1D98
cs=0x18ed;eip=0x001d9b; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 49750 push    [bp+arg_C] ;~ 18ED:1D9B
cs=0x18ed;eip=0x001d9e; 	X(PUSH(ax));	// 49751 push    ax ;~ 18ED:1D9E
cs=0x18ed;eip=0x001d9f; 	T(ax = si-1);	// 49752 lea     ax, [si-1] ;~ 18ED:1D9F
cs=0x18ed;eip=0x001da2; 	X(PUSH(ax));	// 49753 push    ax ;~ 18ED:1DA2
cs=0x18ed;eip=0x001da3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_e))));	// 49754 push    [bp+var_E] ;~ 18ED:1DA3
cs=0x18ed;eip=0x001da6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 49755 mov     ax, [bp+arg_0] ;~ 18ED:1DA6
cs=0x18ed;eip=0x001da9; 	T(INC(ax));	// 49756 inc     ax ;~ 18ED:1DA9
cs=0x18ed;eip=0x001daa; 	X(PUSH(ax));	// 49757 push    ax ;~ 18ED:1DAA
cs=0x18ed;eip=0x001dab; 	R(CALLF(prerender_line,0));	// 49758 call    preRender_line ;~ 18ED:1DAB
cs=0x18ed;eip=0x001db0; 	T(ADD(sp, 0x0A));	// 49759 add     sp, 0Ah ;~ 18ED:1DB0
cs=0x18ed;eip=0x001db3; 	T(ax = di-2);	// 49760 lea     ax, [di-2] ;~ 18ED:1DB3
cs=0x18ed;eip=0x001db6; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 49761 mov     [bp+var_10], ax ;~ 18ED:1DB6
cs=0x18ed;eip=0x001db9; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 49762 push    [bp+arg_A] ;~ 18ED:1DB9
cs=0x18ed;eip=0x001dbc; 	X(PUSH(ax));	// 49763 push    ax ;~ 18ED:1DBC
cs=0x18ed;eip=0x001dbd; 	T(ax = si-2);	// 49764 lea     ax, [si-2] ;~ 18ED:1DBD
cs=0x18ed;eip=0x001dc0; 	X(PUSH(ax));	// 49765 push    ax ;~ 18ED:1DC0
cs=0x18ed;eip=0x001dc1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_10))));	// 49766 push    [bp+var_10] ;~ 18ED:1DC1
cs=0x18ed;eip=0x001dc4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 49767 mov     ax, [bp+arg_0] ;~ 18ED:1DC4
cs=0x18ed;eip=0x001dc7; 	T(ADD(ax, 2));	// 49768 add     ax, 2 ;~ 18ED:1DC7
cs=0x18ed;eip=0x001dca; 	X(PUSH(ax));	// 49769 push    ax ;~ 18ED:1DCA
cs=0x18ed;eip=0x001dcb; 	R(CALLF(prerender_line,0));	// 49770 call    preRender_line ;~ 18ED:1DCB
cs=0x18ed;eip=0x001dd0; 	T(ADD(sp, 0x0A));	// 49771 add     sp, 0Ah ;~ 18ED:1DD0
cs=0x18ed;eip=0x001dd3; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 49772 push    [bp+arg_C] ;~ 18ED:1DD3
cs=0x18ed;eip=0x001dd6; 	X(PUSH(di));	// 49773 push    di ;~ 18ED:1DD6
cs=0x18ed;eip=0x001dd7; 	X(PUSH(si));	// 49774 push    si ;~ 18ED:1DD7
cs=0x18ed;eip=0x001dd8; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 49775 push    [bp+arg_2] ;~ 18ED:1DD8
cs=0x18ed;eip=0x001ddb; 	X(PUSH(si));	// 49776 push    si ;~ 18ED:1DDB
cs=0x18ed;eip=0x001ddc; 	R(CALLF(prerender_line,0));	// 49777 call    preRender_line ;~ 18ED:1DDC
cs=0x18ed;eip=0x001de1; 	T(ADD(sp, 0x0A));	// 49778 add     sp, 0Ah ;~ 18ED:1DE1
cs=0x18ed;eip=0x001de4; 	T(ax = si-1);	// 49779 lea     ax, [si-1] ;~ 18ED:1DE4
cs=0x18ed;eip=0x001de7; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 49780 mov     [bp+var_12], ax ;~ 18ED:1DE7
cs=0x18ed;eip=0x001dea; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 49781 push    [bp+arg_C] ;~ 18ED:1DEA
cs=0x18ed;eip=0x001ded; 	T(ax = di-1);	// 49782 lea     ax, [di-1] ;~ 18ED:1DED
cs=0x18ed;eip=0x001df0; 	X(PUSH(ax));	// 49783 push    ax ;~ 18ED:1DF0
cs=0x18ed;eip=0x001df1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 49784 push    [bp+var_12] ;~ 18ED:1DF1
cs=0x18ed;eip=0x001df4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 49785 mov     ax, [bp+arg_2] ;~ 18ED:1DF4
cs=0x18ed;eip=0x001df7; 	T(INC(ax));	// 49786 inc     ax ;~ 18ED:1DF7
cs=0x18ed;eip=0x001df8; 	X(PUSH(ax));	// 49787 push    ax ;~ 18ED:1DF8
cs=0x18ed;eip=0x001df9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 49788 push    [bp+var_12] ;~ 18ED:1DF9
cs=0x18ed;eip=0x001dfc; 	R(CALLF(prerender_line,0));	// 49789 call    preRender_line ;~ 18ED:1DFC
cs=0x18ed;eip=0x001e01; 	T(ADD(sp, 0x0A));	// 49790 add     sp, 0Ah ;~ 18ED:1E01
cs=0x18ed;eip=0x001e04; 	T(ax = si-2);	// 49791 lea     ax, [si-2] ;~ 18ED:1E04
cs=0x18ed;eip=0x001e07; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 49792 mov     [bp+var_14], ax ;~ 18ED:1E07
cs=0x18ed;eip=0x001e0a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 49793 push    [bp+arg_A] ;~ 18ED:1E0A
cs=0x18ed;eip=0x001e0d; 	T(ax = di-2);	// 49794 lea     ax, [di-2] ;~ 18ED:1E0D
cs=0x18ed;eip=0x001e10; 	X(PUSH(ax));	// 49795 push    ax ;~ 18ED:1E10
cs=0x18ed;eip=0x001e11; 	X(PUSH(*(dw*)(raddr(ss,bp+var_14))));	// 49796 push    [bp+var_14] ;~ 18ED:1E11
cs=0x18ed;eip=0x001e14; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 49797 mov     ax, [bp+arg_2] ;~ 18ED:1E14
cs=0x18ed;eip=0x001e17; 	T(ADD(ax, 2));	// 49798 add     ax, 2 ;~ 18ED:1E17
cs=0x18ed;eip=0x001e1a; 	X(PUSH(ax));	// 49799 push    ax ;~ 18ED:1E1A
cs=0x18ed;eip=0x001e1b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_14))));	// 49800 push    [bp+var_14] ;~ 18ED:1E1B
cs=0x18ed;eip=0x001e1e; 	R(CALLF(prerender_line,0));	// 49801 call    preRender_line ;~ 18ED:1E1E
cs=0x18ed;eip=0x001e23; 	T(ADD(sp, 0x0A));	// 49802 add     sp, 0Ah ;~ 18ED:1E23
cs=0x18ed;eip=0x001e26; 	X(POP(si));	// 49803 pop     si ;~ 18ED:1E26
cs=0x18ed;eip=0x001e27; 	X(POP(di));	// 49804 pop     di ;~ 18ED:1E27
cs=0x18ed;eip=0x001e28; 	T(MOV(sp, bp));	// 49805 mov     sp, bp ;~ 18ED:1E28
cs=0x18ed;eip=0x001e2a; 	X(POP(bp));	// 49806 pop     bp ;~ 18ED:1E2A
cs=0x18ed;eip=0x001e2b; 	R(RETF(0));	// 49807 retf ;~ 18ED:1E2B
draw_button:
	// 49815 
#undef var_72
#define var_72 -0x72
	// 49818 var_72          = word ptr -72h ;~ 18ED:1E2C
#undef var_70
#define var_70 -0x70
	// 49819 var_70          = word ptr -70h ;~ 18ED:1E2C
#undef var_6e
#define var_6e -0x6E
	// 49820 var_6E          = word ptr -6Eh ;~ 18ED:1E2C
#undef var_6c
#define var_6c -0x6C
	// 49821 var_6C          = word ptr -6Ch ;~ 18ED:1E2C
#undef var_6a
#define var_6a -0x6A
	// 49822 var_6A          = word ptr -6Ah ;~ 18ED:1E2C
#undef var_68
#define var_68 -0x68
	// 49823 var_68          = word ptr -68h ;~ 18ED:1E2C
#undef var_66
#define var_66 -0x66
	// 49824 var_66          = word ptr -66h ;~ 18ED:1E2C
#undef var_64
#define var_64 -0x64
	// 49825 var_64          = word ptr -64h ;~ 18ED:1E2C
#undef var_62
#define var_62 -0x62
	// 49826 var_62          = word ptr -62h ;~ 18ED:1E2C
#undef var_60
#define var_60 -0x60
	// 49827 var_60          = word ptr -60h ;~ 18ED:1E2C
#undef var_5c
#define var_5c -0x5C
	// 49828 var_5C          = word ptr -5Ch ;~ 18ED:1E2C
#undef var_5a
#define var_5a -0x5A
	// 49829 var_5A          = byte ptr -5Ah ;~ 18ED:1E2C
#undef var_8
#define var_8 -8
	// 49830 var_8           = word ptr -8 ;~ 18ED:1E2C
#undef var_6
#define var_6 -6
	// 49831 var_6           = word ptr -6 ;~ 18ED:1E2C
#undef var_4
#define var_4 -4
	// 49832 var_4           = byte ptr -4 ;~ 18ED:1E2C
#undef var_2
#define var_2 -2
	// 49833 var_2           = word ptr -2 ;~ 18ED:1E2C
#undef arg_0
#define arg_0 6
	// 49834 arg_0           = word ptr  6 ;~ 18ED:1E2C
#undef arg_2
#define arg_2 8
	// 49835 arg_2           = word ptr  8 ;~ 18ED:1E2C
#undef arg_4
#define arg_4 0x0A
	// 49836 arg_4           = word ptr  0Ah ;~ 18ED:1E2C
#undef arg_6
#define arg_6 0x0C
	// 49837 arg_6           = word ptr  0Ch ;~ 18ED:1E2C
#undef arg_8
#define arg_8 0x0E
	// 49838 arg_8           = word ptr  0Eh ;~ 18ED:1E2C
#undef arg_a
#define arg_a 0x10
	// 49839 arg_A           = word ptr  10h ;~ 18ED:1E2C
#undef arg_c
#define arg_c 0x12
	// 49840 arg_C           = word ptr  12h ;~ 18ED:1E2C
#undef arg_e
#define arg_e 0x14
	// 49841 arg_E           = word ptr  14h ;~ 18ED:1E2C
#undef arg_10
#define arg_10 0x16
	// 49842 arg_10          = word ptr  16h ;~ 18ED:1E2C
#undef arg_12
#define arg_12 0x18
	// 49843 arg_12          = word ptr  18h ;~ 18ED:1E2C
ret_18ed_1e2c:
	// 7804 
cs=0x18ed;eip=0x001e2c; 	X(PUSH(bp));	// 49845 push    bp ;~ 18ED:1E2C
cs=0x18ed;eip=0x001e2d; 	T(MOV(bp, sp));	// 49846 mov     bp, sp ;~ 18ED:1E2D
cs=0x18ed;eip=0x001e2f; 	T(SUB(sp, 0x72));	// 49847 sub     sp, 72h ;~ 18ED:1E2F
cs=0x18ed;eip=0x001e32; 	X(PUSH(di));	// 49848 push    di ;~ 18ED:1E32
cs=0x18ed;eip=0x001e33; 	X(PUSH(si));	// 49849 push    si ;~ 18ED:1E33
cs=0x18ed;eip=0x001e34; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 49850 mov     si, [bp+arg_4] ;~ 18ED:1E34
cs=0x18ed;eip=0x001e37; 	T(ADD(si, *(dw*)(raddr(ss,bp+arg_8))));	// 49851 add     si, [bp+arg_8] ;~ 18ED:1E37
cs=0x18ed;eip=0x001e3a; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_6))));	// 49852 mov     di, [bp+arg_6] ;~ 18ED:1E3A
cs=0x18ed;eip=0x001e3d; 	T(ADD(di, *(dw*)(raddr(ss,bp+arg_a))));	// 49853 add     di, [bp+arg_A] ;~ 18ED:1E3D
cs=0x18ed;eip=0x001e40; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_10))));	// 49854 push    [bp+arg_10] ;~ 18ED:1E40
cs=0x18ed;eip=0x001e43; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 49855 push    [bp+arg_A] ;~ 18ED:1E43
cs=0x18ed;eip=0x001e46; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 49856 push    [bp+arg_8] ;~ 18ED:1E46
cs=0x18ed;eip=0x001e49; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 49857 push    [bp+arg_6] ;~ 18ED:1E49
cs=0x18ed;eip=0x001e4c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 49858 push    [bp+arg_4] ;~ 18ED:1E4C
cs=0x18ed;eip=0x001e4f; 	R(CALLF(sprite_1_unk,0));	// 49859 call    sprite_1_unk ;~ 18ED:1E4F
cs=0x18ed;eip=0x001e54; 	T(ADD(sp, 0x0A));	// 49860 add     sp, 0Ah ;~ 18ED:1E54
cs=0x18ed;eip=0x001e57; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 49861 push    [bp+arg_C] ;~ 18ED:1E57
cs=0x18ed;eip=0x001e5a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 49862 push    [bp+arg_6] ;~ 18ED:1E5A
cs=0x18ed;eip=0x001e5d; 	X(PUSH(si));	// 49863 push    si ;~ 18ED:1E5D
cs=0x18ed;eip=0x001e5e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 49864 push    [bp+arg_6] ;~ 18ED:1E5E
cs=0x18ed;eip=0x001e61; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 49865 push    [bp+arg_4] ;~ 18ED:1E61
cs=0x18ed;eip=0x001e64; 	R(CALLF(prerender_line,0));	// 49866 call    preRender_line ;~ 18ED:1E64
cs=0x18ed;eip=0x001e69; 	T(ADD(sp, 0x0A));	// 49867 add     sp, 0Ah ;~ 18ED:1E69
cs=0x18ed;eip=0x001e6c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 49868 mov     ax, [bp+arg_6] ;~ 18ED:1E6C
cs=0x18ed;eip=0x001e6f; 	T(INC(ax));	// 49869 inc     ax ;~ 18ED:1E6F
cs=0x18ed;eip=0x001e70; 	X(MOV(*(dw*)(raddr(ss,bp+var_64)), ax));	// 49870 mov     [bp+var_64], ax ;~ 18ED:1E70
cs=0x18ed;eip=0x001e73; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 49871 push    [bp+arg_C] ;~ 18ED:1E73
cs=0x18ed;eip=0x001e76; 	X(PUSH(ax));	// 49872 push    ax ;~ 18ED:1E76
cs=0x18ed;eip=0x001e77; 	T(ax = si-1);	// 49873 lea     ax, [si-1] ;~ 18ED:1E77
cs=0x18ed;eip=0x001e7a; 	X(PUSH(ax));	// 49874 push    ax ;~ 18ED:1E7A
cs=0x18ed;eip=0x001e7b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_64))));	// 49875 push    [bp+var_64] ;~ 18ED:1E7B
cs=0x18ed;eip=0x001e7e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 49876 mov     ax, [bp+arg_4] ;~ 18ED:1E7E
cs=0x18ed;eip=0x001e81; 	T(INC(ax));	// 49877 inc     ax ;~ 18ED:1E81
cs=0x18ed;eip=0x001e82; 	X(PUSH(ax));	// 49878 push    ax ;~ 18ED:1E82
cs=0x18ed;eip=0x001e83; 	R(CALLF(prerender_line,0));	// 49879 call    preRender_line ;~ 18ED:1E83
cs=0x18ed;eip=0x001e88; 	T(ADD(sp, 0x0A));	// 49880 add     sp, 0Ah ;~ 18ED:1E88
cs=0x18ed;eip=0x001e8b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 49881 mov     ax, [bp+arg_6] ;~ 18ED:1E8B
cs=0x18ed;eip=0x001e8e; 	T(ADD(ax, 2));	// 49882 add     ax, 2 ;~ 18ED:1E8E
cs=0x18ed;eip=0x001e91; 	X(MOV(*(dw*)(raddr(ss,bp+var_66)), ax));	// 49883 mov     [bp+var_66], ax ;~ 18ED:1E91
cs=0x18ed;eip=0x001e94; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 49884 push    [bp+arg_C] ;~ 18ED:1E94
cs=0x18ed;eip=0x001e97; 	X(PUSH(ax));	// 49885 push    ax ;~ 18ED:1E97
cs=0x18ed;eip=0x001e98; 	T(ax = si-2);	// 49886 lea     ax, [si-2] ;~ 18ED:1E98
cs=0x18ed;eip=0x001e9b; 	X(PUSH(ax));	// 49887 push    ax ;~ 18ED:1E9B
cs=0x18ed;eip=0x001e9c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_66))));	// 49888 push    [bp+var_66] ;~ 18ED:1E9C
cs=0x18ed;eip=0x001e9f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 49889 mov     ax, [bp+arg_4] ;~ 18ED:1E9F
cs=0x18ed;eip=0x001ea2; 	T(ADD(ax, 2));	// 49890 add     ax, 2 ;~ 18ED:1EA2
cs=0x18ed;eip=0x001ea5; 	X(PUSH(ax));	// 49891 push    ax ;~ 18ED:1EA5
cs=0x18ed;eip=0x001ea6; 	R(CALLF(prerender_line,0));	// 49892 call    preRender_line ;~ 18ED:1EA6
cs=0x18ed;eip=0x001eab; 	T(ADD(sp, 0x0A));	// 49893 add     sp, 0Ah ;~ 18ED:1EAB
cs=0x18ed;eip=0x001eae; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 49894 push    [bp+arg_C] ;~ 18ED:1EAE
cs=0x18ed;eip=0x001eb1; 	X(PUSH(di));	// 49895 push    di ;~ 18ED:1EB1
cs=0x18ed;eip=0x001eb2; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 49896 push    [bp+arg_4] ;~ 18ED:1EB2
cs=0x18ed;eip=0x001eb5; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 49897 push    [bp+arg_6] ;~ 18ED:1EB5
cs=0x18ed;eip=0x001eb8; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 49898 push    [bp+arg_4] ;~ 18ED:1EB8
cs=0x18ed;eip=0x001ebb; 	R(CALLF(prerender_line,0));	// 49899 call    preRender_line ;~ 18ED:1EBB
cs=0x18ed;eip=0x001ec0; 	T(ADD(sp, 0x0A));	// 49900 add     sp, 0Ah ;~ 18ED:1EC0
cs=0x18ed;eip=0x001ec3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 49901 mov     ax, [bp+arg_4] ;~ 18ED:1EC3
cs=0x18ed;eip=0x001ec6; 	T(INC(ax));	// 49902 inc     ax ;~ 18ED:1EC6
cs=0x18ed;eip=0x001ec7; 	X(MOV(*(dw*)(raddr(ss,bp+var_68)), ax));	// 49903 mov     [bp+var_68], ax ;~ 18ED:1EC7
cs=0x18ed;eip=0x001eca; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 49904 push    [bp+arg_C] ;~ 18ED:1ECA
cs=0x18ed;eip=0x001ecd; 	T(ax = di-1);	// 49905 lea     ax, [di-1] ;~ 18ED:1ECD
cs=0x18ed;eip=0x001ed0; 	X(PUSH(ax));	// 49906 push    ax ;~ 18ED:1ED0
cs=0x18ed;eip=0x001ed1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_68))));	// 49907 push    [bp+var_68] ;~ 18ED:1ED1
cs=0x18ed;eip=0x001ed4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 49908 mov     ax, [bp+arg_6] ;~ 18ED:1ED4
cs=0x18ed;eip=0x001ed7; 	T(INC(ax));	// 49909 inc     ax ;~ 18ED:1ED7
cs=0x18ed;eip=0x001ed8; 	X(PUSH(ax));	// 49910 push    ax ;~ 18ED:1ED8
cs=0x18ed;eip=0x001ed9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_68))));	// 49911 push    [bp+var_68] ;~ 18ED:1ED9
cs=0x18ed;eip=0x001edc; 	R(CALLF(prerender_line,0));	// 49912 call    preRender_line ;~ 18ED:1EDC
cs=0x18ed;eip=0x001ee1; 	T(ADD(sp, 0x0A));	// 49913 add     sp, 0Ah ;~ 18ED:1EE1
cs=0x18ed;eip=0x001ee4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 49914 mov     ax, [bp+arg_4] ;~ 18ED:1EE4
cs=0x18ed;eip=0x001ee7; 	T(ADD(ax, 2));	// 49915 add     ax, 2 ;~ 18ED:1EE7
cs=0x18ed;eip=0x001eea; 	X(MOV(*(dw*)(raddr(ss,bp+var_6a)), ax));	// 49916 mov     [bp+var_6A], ax ;~ 18ED:1EEA
cs=0x18ed;eip=0x001eed; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 49917 push    [bp+arg_C] ;~ 18ED:1EED
cs=0x18ed;eip=0x001ef0; 	T(ax = di-2);	// 49918 lea     ax, [di-2] ;~ 18ED:1EF0
cs=0x18ed;eip=0x001ef3; 	X(PUSH(ax));	// 49919 push    ax ;~ 18ED:1EF3
cs=0x18ed;eip=0x001ef4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6a))));	// 49920 push    [bp+var_6A] ;~ 18ED:1EF4
cs=0x18ed;eip=0x001ef7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 49921 mov     ax, [bp+arg_6] ;~ 18ED:1EF7
cs=0x18ed;eip=0x001efa; 	T(ADD(ax, 2));	// 49922 add     ax, 2 ;~ 18ED:1EFA
cs=0x18ed;eip=0x001efd; 	X(PUSH(ax));	// 49923 push    ax ;~ 18ED:1EFD
cs=0x18ed;eip=0x001efe; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6a))));	// 49924 push    [bp+var_6A] ;~ 18ED:1EFE
cs=0x18ed;eip=0x001f01; 	R(CALLF(prerender_line,0));	// 49925 call    preRender_line ;~ 18ED:1F01
cs=0x18ed;eip=0x001f06; 	T(ADD(sp, 0x0A));	// 49926 add     sp, 0Ah ;~ 18ED:1F06
cs=0x18ed;eip=0x001f09; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_e))));	// 49927 push    [bp+arg_E] ;~ 18ED:1F09
cs=0x18ed;eip=0x001f0c; 	X(PUSH(di));	// 49928 push    di ;~ 18ED:1F0C
cs=0x18ed;eip=0x001f0d; 	X(PUSH(si));	// 49929 push    si ;~ 18ED:1F0D
cs=0x18ed;eip=0x001f0e; 	X(PUSH(di));	// 49930 push    di ;~ 18ED:1F0E
cs=0x18ed;eip=0x001f0f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 49931 push    [bp+arg_4] ;~ 18ED:1F0F
cs=0x18ed;eip=0x001f12; 	R(CALLF(prerender_line,0));	// 49932 call    preRender_line ;~ 18ED:1F12
cs=0x18ed;eip=0x001f17; 	T(ADD(sp, 0x0A));	// 49933 add     sp, 0Ah ;~ 18ED:1F17
cs=0x18ed;eip=0x001f1a; 	T(ax = di-1);	// 49934 lea     ax, [di-1] ;~ 18ED:1F1A
cs=0x18ed;eip=0x001f1d; 	X(MOV(*(dw*)(raddr(ss,bp+var_6c)), ax));	// 49935 mov     [bp+var_6C], ax ;~ 18ED:1F1D
cs=0x18ed;eip=0x001f20; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_e))));	// 49936 push    [bp+arg_E] ;~ 18ED:1F20
cs=0x18ed;eip=0x001f23; 	X(PUSH(ax));	// 49937 push    ax ;~ 18ED:1F23
cs=0x18ed;eip=0x001f24; 	T(ax = si-1);	// 49938 lea     ax, [si-1] ;~ 18ED:1F24
cs=0x18ed;eip=0x001f27; 	X(PUSH(ax));	// 49939 push    ax ;~ 18ED:1F27
cs=0x18ed;eip=0x001f28; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6c))));	// 49940 push    [bp+var_6C] ;~ 18ED:1F28
cs=0x18ed;eip=0x001f2b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 49941 mov     ax, [bp+arg_4] ;~ 18ED:1F2B
cs=0x18ed;eip=0x001f2e; 	T(INC(ax));	// 49942 inc     ax ;~ 18ED:1F2E
cs=0x18ed;eip=0x001f2f; 	X(PUSH(ax));	// 49943 push    ax ;~ 18ED:1F2F
cs=0x18ed;eip=0x001f30; 	R(CALLF(prerender_line,0));	// 49944 call    preRender_line ;~ 18ED:1F30
cs=0x18ed;eip=0x001f35; 	T(ADD(sp, 0x0A));	// 49945 add     sp, 0Ah ;~ 18ED:1F35
cs=0x18ed;eip=0x001f38; 	T(ax = di-2);	// 49946 lea     ax, [di-2] ;~ 18ED:1F38
cs=0x18ed;eip=0x001f3b; 	X(MOV(*(dw*)(raddr(ss,bp+var_6e)), ax));	// 49947 mov     [bp+var_6E], ax ;~ 18ED:1F3B
cs=0x18ed;eip=0x001f3e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_e))));	// 49948 push    [bp+arg_E] ;~ 18ED:1F3E
cs=0x18ed;eip=0x001f41; 	X(PUSH(ax));	// 49949 push    ax ;~ 18ED:1F41
cs=0x18ed;eip=0x001f42; 	T(ax = si-2);	// 49950 lea     ax, [si-2] ;~ 18ED:1F42
cs=0x18ed;eip=0x001f45; 	X(PUSH(ax));	// 49951 push    ax ;~ 18ED:1F45
cs=0x18ed;eip=0x001f46; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6e))));	// 49952 push    [bp+var_6E] ;~ 18ED:1F46
cs=0x18ed;eip=0x001f49; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 49953 mov     ax, [bp+arg_4] ;~ 18ED:1F49
cs=0x18ed;eip=0x001f4c; 	T(ADD(ax, 2));	// 49954 add     ax, 2 ;~ 18ED:1F4C
cs=0x18ed;eip=0x001f4f; 	X(PUSH(ax));	// 49955 push    ax ;~ 18ED:1F4F
cs=0x18ed;eip=0x001f50; 	R(CALLF(prerender_line,0));	// 49956 call    preRender_line ;~ 18ED:1F50
cs=0x18ed;eip=0x001f55; 	T(ADD(sp, 0x0A));	// 49957 add     sp, 0Ah ;~ 18ED:1F55
cs=0x18ed;eip=0x001f58; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_e))));	// 49958 push    [bp+arg_E] ;~ 18ED:1F58
cs=0x18ed;eip=0x001f5b; 	X(PUSH(di));	// 49959 push    di ;~ 18ED:1F5B
cs=0x18ed;eip=0x001f5c; 	X(PUSH(si));	// 49960 push    si ;~ 18ED:1F5C
cs=0x18ed;eip=0x001f5d; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 49961 push    [bp+arg_6] ;~ 18ED:1F5D
cs=0x18ed;eip=0x001f60; 	X(PUSH(si));	// 49962 push    si ;~ 18ED:1F60
cs=0x18ed;eip=0x001f61; 	R(CALLF(prerender_line,0));	// 49963 call    preRender_line ;~ 18ED:1F61
cs=0x18ed;eip=0x001f66; 	T(ADD(sp, 0x0A));	// 49964 add     sp, 0Ah ;~ 18ED:1F66
cs=0x18ed;eip=0x001f69; 	T(ax = si-1);	// 49965 lea     ax, [si-1] ;~ 18ED:1F69
cs=0x18ed;eip=0x001f6c; 	X(MOV(*(dw*)(raddr(ss,bp+var_70)), ax));	// 49966 mov     [bp+var_70], ax ;~ 18ED:1F6C
cs=0x18ed;eip=0x001f6f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_e))));	// 49967 push    [bp+arg_E] ;~ 18ED:1F6F
cs=0x18ed;eip=0x001f72; 	T(ax = di-1);	// 49968 lea     ax, [di-1] ;~ 18ED:1F72
cs=0x18ed;eip=0x001f75; 	X(PUSH(ax));	// 49969 push    ax ;~ 18ED:1F75
cs=0x18ed;eip=0x001f76; 	X(PUSH(*(dw*)(raddr(ss,bp+var_70))));	// 49970 push    [bp+var_70] ;~ 18ED:1F76
cs=0x18ed;eip=0x001f79; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 49971 mov     ax, [bp+arg_6] ;~ 18ED:1F79
cs=0x18ed;eip=0x001f7c; 	T(INC(ax));	// 49972 inc     ax ;~ 18ED:1F7C
cs=0x18ed;eip=0x001f7d; 	X(PUSH(ax));	// 49973 push    ax ;~ 18ED:1F7D
cs=0x18ed;eip=0x001f7e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_70))));	// 49974 push    [bp+var_70] ;~ 18ED:1F7E
cs=0x18ed;eip=0x001f81; 	R(CALLF(prerender_line,0));	// 49975 call    preRender_line ;~ 18ED:1F81
cs=0x18ed;eip=0x001f86; 	T(ADD(sp, 0x0A));	// 49976 add     sp, 0Ah ;~ 18ED:1F86
cs=0x18ed;eip=0x001f89; 	T(ax = si-2);	// 49977 lea     ax, [si-2] ;~ 18ED:1F89
cs=0x18ed;eip=0x001f8c; 	X(MOV(*(dw*)(raddr(ss,bp+var_72)), ax));	// 49978 mov     [bp+var_72], ax ;~ 18ED:1F8C
cs=0x18ed;eip=0x001f8f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_e))));	// 49979 push    [bp+arg_E] ;~ 18ED:1F8F
cs=0x18ed;eip=0x001f92; 	T(ax = di-2);	// 49980 lea     ax, [di-2] ;~ 18ED:1F92
cs=0x18ed;eip=0x001f95; 	X(PUSH(ax));	// 49981 push    ax ;~ 18ED:1F95
cs=0x18ed;eip=0x001f96; 	X(PUSH(*(dw*)(raddr(ss,bp+var_72))));	// 49982 push    [bp+var_72] ;~ 18ED:1F96
cs=0x18ed;eip=0x001f99; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 49983 mov     ax, [bp+arg_6] ;~ 18ED:1F99
cs=0x18ed;eip=0x001f9c; 	T(ADD(ax, 2));	// 49984 add     ax, 2 ;~ 18ED:1F9C
cs=0x18ed;eip=0x001f9f; 	X(PUSH(ax));	// 49985 push    ax ;~ 18ED:1F9F
cs=0x18ed;eip=0x001fa0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_72))));	// 49986 push    [bp+var_72] ;~ 18ED:1FA0
cs=0x18ed;eip=0x001fa3; 	R(CALLF(prerender_line,0));	// 49987 call    preRender_line ;~ 18ED:1FA3
cs=0x18ed;eip=0x001fa8; 	T(ADD(sp, 0x0A));	// 49988 add     sp, 0Ah ;~ 18ED:1FA8
cs=0x18ed;eip=0x001fab; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 49989 mov     ax, [bp+arg_0] ;~ 18ED:1FAB
cs=0x18ed;eip=0x001fae; 	T(OR(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 49990 or      ax, [bp+arg_2] ;~ 18ED:1FAE
cs=0x18ed;eip=0x001fb1; 	R(JNZ(loc_29466));	// 49991 jnz     short loc_29466 ;~ 18ED:1FB1
cs=0x18ed;eip=0x001fb3; 	R(JMP(loc_29554));	// 49992 jmp     loc_29554 ;~ 18ED:1FB3
loc_29466:
	// 7805 
cs=0x18ed;eip=0x001fb6; 	T(SUB(ax, ax));	// 49996 sub     ax, ax ;~ 18ED:1FB6
cs=0x18ed;eip=0x001fb8; 	X(PUSH(ax));	// 49997 push    ax ;~ 18ED:1FB8
cs=0x18ed;eip=0x001fb9; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_12))));	// 49998 push    [bp+arg_12] ;~ 18ED:1FB9
cs=0x18ed;eip=0x001fbc; 	R(CALLF(font_set_unk,0));	// 49999 call    font_set_unk ;~ 18ED:1FBC
cs=0x18ed;eip=0x001fc1; 	T(ADD(sp, 4));	// 50000 add     sp, 4 ;~ 18ED:1FC1
cs=0x18ed;eip=0x001fc4; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 50001 push    [bp+arg_2] ;~ 18ED:1FC4
cs=0x18ed;eip=0x001fc7; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 50002 push    [bp+arg_0] ;~ 18ED:1FC7
cs=0x18ed;eip=0x001fca; 	T(MOV(ax, 0x0AC74));	// 50003 mov     ax, 0AC74h ;~ 18ED:1FCA
cs=0x18ed;eip=0x001fcd; 	X(PUSH(ax));	// 50004 push    ax ;~ 18ED:1FCD
cs=0x18ed;eip=0x001fce; 	X(PUSH(cs));	// 50005 push    cs ;~ 18ED:1FCE
cs=0x18ed;eip=0x001fcf; 	R(CALL(copy_string,0));	// 50006 call    near ptr copy_string ;~ 18ED:1FCF
cs=0x18ed;eip=0x001fd2; 	T(ADD(sp, 6));	// 50007 add     sp, 6 ;~ 18ED:1FD2
cs=0x18ed;eip=0x001fd5; 	X(MOV(*(dw*)(raddr(ss,bp+var_5c)), 1));	// 50008 mov     [bp+var_5C], 1 ;~ 18ED:1FD5
cs=0x18ed;eip=0x001fda; 	T(MOV(ax, 0x0AC74));	// 50009 mov     ax, 0AC74h ;~ 18ED:1FDA
cs=0x18ed;eip=0x001fdd; 	X(PUSH(ax));	// 50010 push    ax              ; char * ;~ 18ED:1FDD
cs=0x18ed;eip=0x001fde; 	R(CALLF(_strlen,0));	// 50011 call    _strlen ;~ 18ED:1FDE
cs=0x18ed;eip=0x001fe3; 	T(ADD(sp, 2));	// 50012 add     sp, 2 ;~ 18ED:1FE3
cs=0x18ed;eip=0x001fe6; 	X(MOV(*(dw*)(raddr(ss,bp+var_62)), ax));	// 50013 mov     [bp+var_62], ax ;~ 18ED:1FE6
cs=0x18ed;eip=0x001fe9; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 50014 mov     [bp+var_8], 0 ;~ 18ED:1FE9
cs=0x18ed;eip=0x001fee; 	R(JMP(loc_294b0));	// 50015 jmp     short loc_294B0 ;~ 18ED:1FEE
loc_294a0:
	// 7806 
cs=0x18ed;eip=0x001ff0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 50019 mov     bx, [bp+var_8] ;~ 18ED:1FF0
cs=0x18ed;eip=0x001ff3; 	T(CMP(*((&resid_byte1)+bx), 0x5D));	// 50020 cmp     resID_byte1[bx], 5Dh ; ']' ;~ 18ED:1FF3
cs=0x18ed;eip=0x001ff8; 	R(JNZ(loc_294ad));	// 50021 jnz     short loc_294AD ;~ 18ED:1FF8
cs=0x18ed;eip=0x001ffa; 	X(INC(*(dw*)(raddr(ss,bp+var_5c))));	// 50022 inc     [bp+var_5C] ;~ 18ED:1FFA
loc_294ad:
	// 7807 
cs=0x18ed;eip=0x001ffd; 	X(INC(*(dw*)(raddr(ss,bp+var_8))));	// 50025 inc     [bp+var_8] ;~ 18ED:1FFD
loc_294b0:
	// 7808 
cs=0x18ed;eip=0x002000; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_62))));	// 50028 mov     ax, [bp+var_62] ;~ 18ED:2000
cs=0x18ed;eip=0x002003; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), ax));	// 50029 cmp     [bp+var_8], ax ;~ 18ED:2003
cs=0x18ed;eip=0x002006; 	R(JL(loc_294a0));	// 50030 jl      short loc_294A0 ;~ 18ED:2006
cs=0x18ed;eip=0x002008; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 50031 mov     [bp+var_2], 0 ;~ 18ED:2008
cs=0x18ed;eip=0x00200d; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0));	// 50032 mov     [bp+var_6], 0 ;~ 18ED:200D
cs=0x18ed;eip=0x002012; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 50033 mov     ax, [bp+arg_A] ;~ 18ED:2012
cs=0x18ed;eip=0x002015; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_5c))));	// 50034 mov     dx, [bp+var_5C] ;~ 18ED:2015
cs=0x18ed;eip=0x002018; 	T(MOV(cl, 3));	// 50035 mov     cl, 3 ;~ 18ED:2018
cs=0x18ed;eip=0x00201a; 	T(SHL(dx, cl));	// 50036 shl     dx, cl ;~ 18ED:201A
cs=0x18ed;eip=0x00201c; 	T(SUB(ax, dx));	// 50037 sub     ax, dx ;~ 18ED:201C
cs=0x18ed;eip=0x00201e; 	T(CWD);	// 50038 cwd ;~ 18ED:201E
cs=0x18ed;eip=0x00201f; 	T(SUB(ax, dx));	// 50039 sub     ax, dx ;~ 18ED:201F
cs=0x18ed;eip=0x002021; 	T(SAR(ax, 1));	// 50040 sar     ax, 1 ;~ 18ED:2021
cs=0x18ed;eip=0x002023; 	T(INC(ax));	// 50041 inc     ax ;~ 18ED:2023
cs=0x18ed;eip=0x002024; 	X(MOV(*(dw*)(raddr(ss,bp+var_60)), ax));	// 50042 mov     [bp+var_60], ax ;~ 18ED:2024
cs=0x18ed;eip=0x002027; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 50043 mov     [bp+var_8], 0 ;~ 18ED:2027
cs=0x18ed;eip=0x00202c; 	R(JMP(loc_294ef));	// 50044 jmp     short loc_294EF ;~ 18ED:202C
loc_294de:
	// 7809 
cs=0x18ed;eip=0x00202e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 50048 mov     bx, [bp+var_2] ;~ 18ED:202E
cs=0x18ed;eip=0x002031; 	T(ADD(bx, bp));	// 50049 add     bx, bp ;~ 18ED:2031
cs=0x18ed;eip=0x002033; 	T(MOV(al, *(raddr(ss,bp+var_4))));	// 50050 mov     al, [bp+var_4] ;~ 18ED:2033
cs=0x18ed;eip=0x002036; 	X(MOV(*(raddr(ds,bx-0x5A)), al));	// 50051 mov     [bx-5Ah], al ;~ 18ED:2036
cs=0x18ed;eip=0x002039; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 50052 inc     [bp+var_2] ;~ 18ED:2039
loc_294ec:
	// 7810 
cs=0x18ed;eip=0x00203c; 	X(INC(*(dw*)(raddr(ss,bp+var_8))));	// 50055 inc     [bp+var_8] ;~ 18ED:203C
loc_294ef:
	// 7811 
cs=0x18ed;eip=0x00203f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_62))));	// 50058 mov     ax, [bp+var_62] ;~ 18ED:203F
cs=0x18ed;eip=0x002042; 	T(INC(ax));	// 50059 inc     ax ;~ 18ED:2042
cs=0x18ed;eip=0x002043; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_8))));	// 50060 cmp     ax, [bp+var_8] ;~ 18ED:2043
cs=0x18ed;eip=0x002046; 	R(JLE(loc_29554));	// 50061 jle     short loc_29554 ;~ 18ED:2046
cs=0x18ed;eip=0x002048; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 50062 mov     bx, [bp+var_8] ;~ 18ED:2048
cs=0x18ed;eip=0x00204b; 	T(MOV(al, *((&resid_byte1)+bx)));	// 50063 mov     al, resID_byte1[bx] ;~ 18ED:204B
cs=0x18ed;eip=0x00204f; 	X(MOV(*(raddr(ss,bp+var_4)), al));	// 50064 mov     [bp+var_4], al ;~ 18ED:204F
cs=0x18ed;eip=0x002052; 	T(CMP(al, 0x5D));	// 50065 cmp     al, 5Dh ; ']' ;~ 18ED:2052
cs=0x18ed;eip=0x002054; 	R(JZ(loc_2950a));	// 50066 jz      short loc_2950A ;~ 18ED:2054
cs=0x18ed;eip=0x002056; 	T(OR(al, al));	// 50067 or      al, al ;~ 18ED:2056
cs=0x18ed;eip=0x002058; 	R(JNZ(loc_294de));	// 50068 jnz     short loc_294DE ;~ 18ED:2058
loc_2950a:
	// 7812 
cs=0x18ed;eip=0x00205a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 50071 mov     bx, [bp+var_2] ;~ 18ED:205A
cs=0x18ed;eip=0x00205d; 	T(ADD(bx, bp));	// 50072 add     bx, bp ;~ 18ED:205D
cs=0x18ed;eip=0x00205f; 	X(MOV(*(raddr(ds,bx-0x5A)), 0));	// 50073 mov     byte ptr [bx-5Ah], 0 ;~ 18ED:205F
cs=0x18ed;eip=0x002063; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 50074 mov     ax, [bp+var_6] ;~ 18ED:2063
cs=0x18ed;eip=0x002066; 	T(MOV(cl, 3));	// 50075 mov     cl, 3 ;~ 18ED:2066
cs=0x18ed;eip=0x002068; 	T(SHL(ax, cl));	// 50076 shl     ax, cl ;~ 18ED:2068
cs=0x18ed;eip=0x00206a; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 50077 add     ax, [bp+arg_6] ;~ 18ED:206A
cs=0x18ed;eip=0x00206d; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_60))));	// 50078 add     ax, [bp+var_60] ;~ 18ED:206D
cs=0x18ed;eip=0x002070; 	X(PUSH(ax));	// 50079 push    ax ;~ 18ED:2070
cs=0x18ed;eip=0x002071; 	T(ax = bp+var_5a);	// 50080 lea     ax, [bp+var_5A] ;~ 18ED:2071
cs=0x18ed;eip=0x002074; 	X(PUSH(ax));	// 50081 push    ax ;~ 18ED:2074
cs=0x18ed;eip=0x002075; 	R(CALLF(font_op2,0));	// 50082 call    font_op2 ;~ 18ED:2075
cs=0x18ed;eip=0x00207a; 	T(ADD(sp, 2));	// 50083 add     sp, 2 ;~ 18ED:207A
cs=0x18ed;eip=0x00207d; 	T(MOV(cx, ax));	// 50084 mov     cx, ax ;~ 18ED:207D
cs=0x18ed;eip=0x00207f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 50085 mov     ax, [bp+arg_8] ;~ 18ED:207F
cs=0x18ed;eip=0x002082; 	T(SUB(ax, cx));	// 50086 sub     ax, cx ;~ 18ED:2082
cs=0x18ed;eip=0x002084; 	T(CWD);	// 50087 cwd ;~ 18ED:2084
cs=0x18ed;eip=0x002085; 	T(SUB(ax, dx));	// 50088 sub     ax, dx ;~ 18ED:2085
cs=0x18ed;eip=0x002087; 	T(SAR(ax, 1));	// 50089 sar     ax, 1 ;~ 18ED:2087
cs=0x18ed;eip=0x002089; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 50090 add     ax, [bp+arg_4] ;~ 18ED:2089
cs=0x18ed;eip=0x00208c; 	X(PUSH(ax));	// 50091 push    ax ;~ 18ED:208C
cs=0x18ed;eip=0x00208d; 	T(ax = bp+var_5a);	// 50092 lea     ax, [bp+var_5A] ;~ 18ED:208D
cs=0x18ed;eip=0x002090; 	X(PUSH(ax));	// 50093 push    ax ;~ 18ED:2090
cs=0x18ed;eip=0x002091; 	R(CALLF(font_draw_text,0));	// 50094 call    font_draw_text  ; when nop instead of this call = no text on buttons ;~ 18ED:2091
cs=0x18ed;eip=0x002096; 	T(ADD(sp, 6));	// 50095 add     sp, 6 ;~ 18ED:2096
cs=0x18ed;eip=0x002099; 	X(INC(*(dw*)(raddr(ss,bp+var_6))));	// 50096 inc     [bp+var_6] ;~ 18ED:2099
cs=0x18ed;eip=0x00209c; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 50097 mov     [bp+var_2], 0 ;~ 18ED:209C
cs=0x18ed;eip=0x0020a1; 	R(JMP(loc_294ec));	// 50098 jmp     short loc_294EC ;~ 18ED:20A1
loc_29554:
	// 7813 
cs=0x18ed;eip=0x0020a4; 	X(POP(si));	// 50104 pop     si ;~ 18ED:20A4
cs=0x18ed;eip=0x0020a5; 	X(POP(di));	// 50105 pop     di ;~ 18ED:20A5
cs=0x18ed;eip=0x0020a6; 	T(MOV(sp, bp));	// 50106 mov     sp, bp ;~ 18ED:20A6
cs=0x18ed;eip=0x0020a8; 	X(POP(bp));	// 50107 pop     bp ;~ 18ED:20A8
cs=0x18ed;eip=0x0020a9; 	R(RETF(0));	// 50108 retf ;~ 18ED:20A9
shape3d_init_shape:
	// 50116 
#undef arg_0
#define arg_0 6
	// 50119 arg_0           = dword ptr  6 ;~ 18ED:20AA
#undef arg_4
#define arg_4 0x0A
	// 50120 arg_4           = word ptr  0Ah ;~ 18ED:20AA
ret_18ed_20aa:
	// 7814 
cs=0x18ed;eip=0x0020aa; 	X(PUSH(bp));	// 50122 push    bp ;~ 18ED:20AA
cs=0x18ed;eip=0x0020ab; 	T(MOV(bp, sp));	// 50123 mov     bp, sp ;~ 18ED:20AB
cs=0x18ed;eip=0x0020ad; 	X(PUSH(si));	// 50124 push    si ;~ 18ED:20AD
cs=0x18ed;eip=0x0020ae; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 50125 mov     bx, [bp+arg_4] ;~ 18ED:20AE
cs=0x18ed;eip=0x0020b1; 	T(LES(si, *(dd*)(raddr(ss,bp+arg_0))));	// 50126 les     si, [bp+arg_0] ;~ 18ED:20B1
cs=0x18ed;eip=0x0020b4; 	T(MOV(al, *(raddr(es,si+0))));	// 50127 mov     al, es:[si+0] ;~ 18ED:20B4
cs=0x18ed;eip=0x0020b7; 	T(SUB(ah, ah));	// 50128 sub     ah, ah ;~ 18ED:20B7
cs=0x18ed;eip=0x0020b9; 	X(MOV(*(dw*)(raddr(ds,bx+0)), ax));	// 50129 mov     [bx+0], ax ;~ 18ED:20B9
cs=0x18ed;eip=0x0020bb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 50130 mov     bx, [bp+arg_4] ;~ 18ED:20BB
cs=0x18ed;eip=0x0020be; 	T(LES(si, *(dd*)(raddr(ss,bp+arg_0))));	// 50131 les     si, [bp+arg_0] ;~ 18ED:20BE
cs=0x18ed;eip=0x0020c1; 	T(MOV(al, *(raddr(es,si+1))));	// 50132 mov     al, es:[si+1] ;~ 18ED:20C1
cs=0x18ed;eip=0x0020c5; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 50133 mov     [bx+6], ax ;~ 18ED:20C5
cs=0x18ed;eip=0x0020c8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 50134 mov     bx, [bp+arg_4] ;~ 18ED:20C8
cs=0x18ed;eip=0x0020cb; 	T(LES(si, *(dd*)(raddr(ss,bp+arg_0))));	// 50135 les     si, [bp+arg_0] ;~ 18ED:20CB
cs=0x18ed;eip=0x0020ce; 	T(MOV(al, *(raddr(es,si+2))));	// 50136 mov     al, es:[si+2] ;~ 18ED:20CE
cs=0x18ed;eip=0x0020d2; 	X(MOV(*(raddr(ds,bx+8)), al));	// 50137 mov     [bx+8], al ;~ 18ED:20D2
cs=0x18ed;eip=0x0020d5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 50138 mov     bx, [bp+arg_4] ;~ 18ED:20D5
cs=0x18ed;eip=0x0020d8; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 50139 mov     ax, word ptr [bp+arg_0] ;~ 18ED:20D8
cs=0x18ed;eip=0x0020db; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 50140 mov     dx, word ptr [bp+arg_0+2] ;~ 18ED:20DB
cs=0x18ed;eip=0x0020de; 	T(ADD(ax, 4));	// 50141 add     ax, 4 ;~ 18ED:20DE
cs=0x18ed;eip=0x0020e1; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 50142 mov     [bx+2], ax ;~ 18ED:20E1
cs=0x18ed;eip=0x0020e4; 	X(MOV(*(dw*)(raddr(ds,bx+4)), dx));	// 50143 mov     [bx+4], dx ;~ 18ED:20E4
cs=0x18ed;eip=0x0020e7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 50144 mov     bx, [bp+arg_4] ;~ 18ED:20E7
cs=0x18ed;eip=0x0020ea; 	T(MOV(si, bx));	// 50145 mov     si, bx ;~ 18ED:20EA
cs=0x18ed;eip=0x0020ec; 	T(MOV(ax, *(dw*)(raddr(ds,si+0))));	// 50146 mov     ax, [si+0] ;~ 18ED:20EC
cs=0x18ed;eip=0x0020ee; 	T(MOV(cx, ax));	// 50147 mov     cx, ax ;~ 18ED:20EE
cs=0x18ed;eip=0x0020f0; 	T(SHL(ax, 1));	// 50148 shl     ax, 1 ;~ 18ED:20F0
cs=0x18ed;eip=0x0020f2; 	T(ADD(ax, cx));	// 50149 add     ax, cx ;~ 18ED:20F2
cs=0x18ed;eip=0x0020f4; 	T(SHL(ax, 1));	// 50150 shl     ax, 1 ;~ 18ED:20F4
cs=0x18ed;eip=0x0020f6; 	T(ADD(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 50151 add     ax, word ptr [bp+arg_0] ;~ 18ED:20F6
cs=0x18ed;eip=0x0020f9; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 50152 mov     dx, word ptr [bp+arg_0+2] ;~ 18ED:20F9
cs=0x18ed;eip=0x0020fc; 	T(ADD(ax, 4));	// 50153 add     ax, 4 ;~ 18ED:20FC
cs=0x18ed;eip=0x0020ff; 	X(MOV(*(dw*)(raddr(ds,bx+0x0E)), ax));	// 50154 mov     [bx+0Eh], ax ;~ 18ED:20FF
cs=0x18ed;eip=0x002102; 	X(MOV(*(dw*)(raddr(ds,bx+0x10)), dx));	// 50155 mov     [bx+10h], dx ;~ 18ED:2102
cs=0x18ed;eip=0x002105; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 50156 mov     bx, [bp+arg_4] ;~ 18ED:2105
cs=0x18ed;eip=0x002108; 	T(MOV(si, bx));	// 50157 mov     si, bx ;~ 18ED:2108
cs=0x18ed;eip=0x00210a; 	T(MOV(ax, *(dw*)(raddr(ds,si+6))));	// 50158 mov     ax, [si+6] ;~ 18ED:210A
cs=0x18ed;eip=0x00210d; 	T(SHL(ax, 1));	// 50159 shl     ax, 1 ;~ 18ED:210D
cs=0x18ed;eip=0x00210f; 	T(SHL(ax, 1));	// 50160 shl     ax, 1 ;~ 18ED:210F
cs=0x18ed;eip=0x002111; 	T(MOV(cx, *(dw*)(raddr(ds,si+0))));	// 50161 mov     cx, [si+0] ;~ 18ED:2111
cs=0x18ed;eip=0x002113; 	T(MOV(dx, cx));	// 50162 mov     dx, cx ;~ 18ED:2113
cs=0x18ed;eip=0x002115; 	T(SHL(cx, 1));	// 50163 shl     cx, 1 ;~ 18ED:2115
cs=0x18ed;eip=0x002117; 	T(ADD(cx, dx));	// 50164 add     cx, dx ;~ 18ED:2117
cs=0x18ed;eip=0x002119; 	T(SHL(cx, 1));	// 50165 shl     cx, 1 ;~ 18ED:2119
cs=0x18ed;eip=0x00211b; 	T(ADD(ax, cx));	// 50166 add     ax, cx ;~ 18ED:211B
cs=0x18ed;eip=0x00211d; 	T(ADD(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 50167 add     ax, word ptr [bp+arg_0] ;~ 18ED:211D
cs=0x18ed;eip=0x002120; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 50168 mov     dx, word ptr [bp+arg_0+2] ;~ 18ED:2120
cs=0x18ed;eip=0x002123; 	T(ADD(ax, 4));	// 50169 add     ax, 4 ;~ 18ED:2123
cs=0x18ed;eip=0x002126; 	X(MOV(*(dw*)(raddr(ds,bx+0x12)), ax));	// 50170 mov     [bx+12h], ax ;~ 18ED:2126
cs=0x18ed;eip=0x002129; 	X(MOV(*(dw*)(raddr(ds,bx+0x14)), dx));	// 50171 mov     [bx+14h], dx ;~ 18ED:2129
cs=0x18ed;eip=0x00212c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 50172 mov     bx, [bp+arg_4] ;~ 18ED:212C
cs=0x18ed;eip=0x00212f; 	T(MOV(si, bx));	// 50173 mov     si, bx ;~ 18ED:212F
cs=0x18ed;eip=0x002131; 	T(MOV(ax, *(dw*)(raddr(ds,si+6))));	// 50174 mov     ax, [si+6] ;~ 18ED:2131
cs=0x18ed;eip=0x002134; 	T(MOV(cl, 3));	// 50175 mov     cl, 3 ;~ 18ED:2134
cs=0x18ed;eip=0x002136; 	T(SHL(ax, cl));	// 50176 shl     ax, cl ;~ 18ED:2136
cs=0x18ed;eip=0x002138; 	T(MOV(cx, *(dw*)(raddr(ds,si+0))));	// 50177 mov     cx, [si+0] ;~ 18ED:2138
cs=0x18ed;eip=0x00213a; 	T(MOV(dx, cx));	// 50178 mov     dx, cx ;~ 18ED:213A
cs=0x18ed;eip=0x00213c; 	T(SHL(cx, 1));	// 50179 shl     cx, 1 ;~ 18ED:213C
cs=0x18ed;eip=0x00213e; 	T(ADD(cx, dx));	// 50180 add     cx, dx ;~ 18ED:213E
cs=0x18ed;eip=0x002140; 	T(SHL(cx, 1));	// 50181 shl     cx, 1 ;~ 18ED:2140
cs=0x18ed;eip=0x002142; 	T(ADD(ax, cx));	// 50182 add     ax, cx ;~ 18ED:2142
cs=0x18ed;eip=0x002144; 	T(ADD(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 50183 add     ax, word ptr [bp+arg_0] ;~ 18ED:2144
cs=0x18ed;eip=0x002147; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 50184 mov     dx, word ptr [bp+arg_0+2] ;~ 18ED:2147
cs=0x18ed;eip=0x00214a; 	T(ADD(ax, 4));	// 50185 add     ax, 4 ;~ 18ED:214A
cs=0x18ed;eip=0x00214d; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), ax));	// 50186 mov     [bx+0Ah], ax ;~ 18ED:214D
cs=0x18ed;eip=0x002150; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), dx));	// 50187 mov     [bx+0Ch], dx ;~ 18ED:2150
cs=0x18ed;eip=0x002153; 	X(POP(si));	// 50188 pop     si ;~ 18ED:2153
cs=0x18ed;eip=0x002154; 	X(POP(bp));	// 50189 pop     bp ;~ 18ED:2154
cs=0x18ed;eip=0x002155; 	R(RETF(0));	// 50190 retf ;~ 18ED:2155
font_op2_alt:
	// 50198 
#undef arg_0
#define arg_0 6
	// 50201 arg_0           = word ptr  6 ;~ 18ED:2156
ret_18ed_2156:
	// 7815 
cs=0x18ed;eip=0x002156; 	X(PUSH(bp));	// 50203 push    bp ;~ 18ED:2156
cs=0x18ed;eip=0x002157; 	T(MOV(bp, sp));	// 50204 mov     bp, sp ;~ 18ED:2157
cs=0x18ed;eip=0x002159; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 50205 push    [bp+arg_0] ;~ 18ED:2159
cs=0x18ed;eip=0x00215c; 	R(CALLF(font_op2,0));	// 50206 call    font_op2 ;~ 18ED:215C
cs=0x18ed;eip=0x002161; 	T(ADD(sp, 2));	// 50207 add     sp, 2 ;~ 18ED:2161
cs=0x18ed;eip=0x002164; 	T(SUB(ax, 0x140));	// 50208 sub     ax, 140h ;~ 18ED:2164
cs=0x18ed;eip=0x002167; 	T(NEG(ax));	// 50209 neg     ax ;~ 18ED:2167
cs=0x18ed;eip=0x002169; 	T(CWD);	// 50210 cwd ;~ 18ED:2169
cs=0x18ed;eip=0x00216a; 	T(SUB(ax, dx));	// 50211 sub     ax, dx ;~ 18ED:216A
cs=0x18ed;eip=0x00216c; 	T(SAR(ax, 1));	// 50212 sar     ax, 1 ;~ 18ED:216C
cs=0x18ed;eip=0x00216e; 	X(POP(bp));	// 50213 pop     bp ;~ 18ED:216E
cs=0x18ed;eip=0x00216f; 	R(RETF(0));	// 50214 retf ;~ 18ED:216F
sprite_blit_to_video:
	// 50222 
#undef arg_0
#define arg_0 6
	// 50225 arg_0           = dword ptr  6 ;~ 18ED:2170
#undef arg_4
#define arg_4 0x0A
	// 50226 arg_4           = word ptr  0Ah ;~ 18ED:2170
ret_18ed_2170:
	// 7816 
cs=0x18ed;eip=0x002170; 	X(PUSH(bp));	// 50228 push    bp ;~ 18ED:2170
cs=0x18ed;eip=0x002171; 	T(MOV(bp, sp));	// 50229 mov     bp, sp ;~ 18ED:2171
cs=0x18ed;eip=0x002173; 	T(SUB(sp, 4));	// 50230 sub     sp, 4 ;~ 18ED:2173
cs=0x18ed;eip=0x002176; 	X(PUSH(di));	// 50231 push    di ;~ 18ED:2176
cs=0x18ed;eip=0x002177; 	X(PUSH(si));	// 50232 push    si ;~ 18ED:2177
cs=0x18ed;eip=0x002178; 	X(PUSH(cs));	// 50233 push    cs ;~ 18ED:2178
cs=0x18ed;eip=0x002179; 	R(CALL(sprite_copy_2_to_1_2,0));	// 50234 call    near ptr sprite_copy_2_to_1_2 ;~ 18ED:2179
cs=0x18ed;eip=0x00217c; 	X(PUSH(cs));	// 50235 push    cs ;~ 18ED:217C
cs=0x18ed;eip=0x00217d; 	R(CALL(mouse_draw_opaque_check,0));	// 50236 call    near ptr mouse_draw_opaque_check ;~ 18ED:217D
cs=0x18ed;eip=0x002180; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0x0FFFE));	// 50237 cmp     [bp+arg_4], 0FFFEh ;~ 18ED:2180
cs=0x18ed;eip=0x002184; 	R(JNZ(loc_29654));	// 50238 jnz     short loc_29654 ;~ 18ED:2184
cs=0x18ed;eip=0x002186; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 50239 les     bx, [bp+arg_0] ;~ 18ED:2186
cs=0x18ed;eip=0x002189; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 50240 push    word ptr es:[bx+2] ;~ 18ED:2189
cs=0x18ed;eip=0x00218d; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 50241 push    word ptr es:[bx] ;~ 18ED:218D
cs=0x18ed;eip=0x002190; 	R(CALLF(sprite_putimage,0));	// 50242 call    sprite_putimage ;~ 18ED:2190
cs=0x18ed;eip=0x002195; 	T(ADD(sp, 4));	// 50243 add     sp, 4 ;~ 18ED:2195
loc_29648:
	// 7817 
cs=0x18ed;eip=0x002198; 	X(PUSH(cs));	// 50246 push    cs ;~ 18ED:2198
cs=0x18ed;eip=0x002199; 	R(CALL(mouse_draw_transparent_check,0));	// 50247 call    near ptr mouse_draw_transparent_check ;~ 18ED:2199
cs=0x18ed;eip=0x00219c; 	T(SUB(ax, ax));	// 50248 sub     ax, ax ;~ 18ED:219C
cs=0x18ed;eip=0x00219e; 	X(POP(si));	// 50249 pop     si ;~ 18ED:219E
cs=0x18ed;eip=0x00219f; 	X(POP(di));	// 50250 pop     di ;~ 18ED:219F
cs=0x18ed;eip=0x0021a0; 	T(MOV(sp, bp));	// 50251 mov     sp, bp ;~ 18ED:21A0
cs=0x18ed;eip=0x0021a2; 	X(POP(bp));	// 50252 pop     bp ;~ 18ED:21A2
cs=0x18ed;eip=0x0021a3; 	R(RETF(0));	// 50253 retf ;~ 18ED:21A3
loc_29654:
	// 7818 
cs=0x18ed;eip=0x0021a4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 50257 mov     ax, [bp+arg_4] ;~ 18ED:21A4
cs=0x18ed;eip=0x0021a7; 	T(SUB(si, si));	// 50258 sub     si, si ;~ 18ED:21A7
cs=0x18ed;eip=0x0021a9; 	R(JMP(loc_29670));	// 50259 jmp     short loc_29670 ;~ 18ED:21A9
loc_2965c:
	// 7819 
cs=0x18ed;eip=0x0021ac; 	X(PUSH(si));	// 50264 push    si ;~ 18ED:21AC
cs=0x18ed;eip=0x0021ad; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 50265 les     bx, [bp+arg_0] ;~ 18ED:21AD
cs=0x18ed;eip=0x0021b0; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 50266 push    word ptr es:[bx+2] ;~ 18ED:21B0
cs=0x18ed;eip=0x0021b4; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 50267 push    word ptr es:[bx] ;~ 18ED:21B4
cs=0x18ed;eip=0x0021b7; 	R(CALLF(sprite_1_unk3,0));	// 50268 call    sprite_1_unk3 ;~ 18ED:21B7
cs=0x18ed;eip=0x0021bc; 	T(ADD(sp, 6));	// 50269 add     sp, 6 ;~ 18ED:21BC
cs=0x18ed;eip=0x0021bf; 	T(INC(si));	// 50270 inc     si ;~ 18ED:21BF
loc_29670:
	// 7820 
cs=0x18ed;eip=0x0021c0; 	T(CMP(si, 4));	// 50273 cmp     si, 4 ;~ 18ED:21C0
cs=0x18ed;eip=0x0021c3; 	R(JGE(loc_29648));	// 50274 jge     short loc_29648 ;~ 18ED:21C3
cs=0x18ed;eip=0x0021c5; 	X(PUSH(cs));	// 50275 push    cs ;~ 18ED:21C5
cs=0x18ed;eip=0x0021c6; 	R(CALL(timer_get_delta_alt,0));	// 50276 call    near ptr timer_get_delta_alt ;~ 18ED:21C6
cs=0x18ed;eip=0x0021c9; 	X(PUSH(ax));	// 50277 push    ax ;~ 18ED:21C9
cs=0x18ed;eip=0x0021ca; 	X(PUSH(cs));	// 50278 push    cs ;~ 18ED:21CA
cs=0x18ed;eip=0x0021cb; 	R(CALL(input_do_checking,0));	// 50279 call    near ptr input_do_checking ;~ 18ED:21CB
cs=0x18ed;eip=0x0021ce; 	T(ADD(sp, 2));	// 50280 add     sp, 2 ;~ 18ED:21CE
cs=0x18ed;eip=0x0021d1; 	T(MOV(di, ax));	// 50281 mov     di, ax ;~ 18ED:21D1
cs=0x18ed;eip=0x0021d3; 	T(OR(di, di));	// 50282 or      di, di ;~ 18ED:21D3
cs=0x18ed;eip=0x0021d5; 	R(JZ(loc_2965c));	// 50283 jz      short loc_2965C ;~ 18ED:21D5
cs=0x18ed;eip=0x0021d7; 	X(PUSH(cs));	// 50284 push    cs ;~ 18ED:21D7
cs=0x18ed;eip=0x0021d8; 	R(CALL(sprite_copy_2_to_1_2,0));	// 50285 call    near ptr sprite_copy_2_to_1_2 ;~ 18ED:21D8
cs=0x18ed;eip=0x0021db; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 50286 les     bx, [bp+arg_0] ;~ 18ED:21DB
cs=0x18ed;eip=0x0021de; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 50287 push    word ptr es:[bx+2] ;~ 18ED:21DE
cs=0x18ed;eip=0x0021e2; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 50288 push    word ptr es:[bx] ;~ 18ED:21E2
cs=0x18ed;eip=0x0021e5; 	R(CALLF(sprite_putimage,0));	// 50289 call    sprite_putimage ;~ 18ED:21E5
cs=0x18ed;eip=0x0021ea; 	T(ADD(sp, 4));	// 50290 add     sp, 4 ;~ 18ED:21EA
cs=0x18ed;eip=0x0021ed; 	X(PUSH(cs));	// 50291 push    cs ;~ 18ED:21ED
cs=0x18ed;eip=0x0021ee; 	R(CALL(mouse_draw_transparent_check,0));	// 50292 call    near ptr mouse_draw_transparent_check ;~ 18ED:21EE
cs=0x18ed;eip=0x0021f1; 	T(MOV(ax, di));	// 50293 mov     ax, di ;~ 18ED:21F1
cs=0x18ed;eip=0x0021f3; 	X(POP(si));	// 50294 pop     si ;~ 18ED:21F3
cs=0x18ed;eip=0x0021f4; 	X(POP(di));	// 50295 pop     di ;~ 18ED:21F4
cs=0x18ed;eip=0x0021f5; 	T(MOV(sp, bp));	// 50296 mov     sp, bp ;~ 18ED:21F5
cs=0x18ed;eip=0x0021f7; 	X(POP(bp));	// 50297 pop     bp ;~ 18ED:21F7
cs=0x18ed;eip=0x0021f8; 	R(RETF(0));	// 50298 retf ;~ 18ED:21F8
show_waiting:
	// 50307 
cs=0x18ed;eip=0x0021fa; 	T(SUB(ax, ax));	// 50309 sub     ax, ax ;~ 18ED:21FA
ret_18ed_21fc:
	// 7821 
cs=0x18ed;eip=0x0021fc; 	X(PUSH(ax));	// 50310 push    ax ;~ 18ED:21FC
cs=0x18ed;eip=0x0021fd; 	X(PUSH(ax));	// 50311 push    ax ;~ 18ED:21FD
cs=0x18ed;eip=0x0021fe; 	X(PUSH(dialogarg2));	// 50312 push    dialogarg2 ;~ 18ED:21FE
cs=0x18ed;eip=0x002202; 	X(PUSH(waitflag));	// 50313 push    waitflag ;~ 18ED:2202
cs=0x18ed;eip=0x002206; 	T(MOV(ax, 0x0FFFF));	// 50314 mov     ax, 0FFFFh ;~ 18ED:2206
cs=0x18ed;eip=0x002209; 	X(PUSH(ax));	// 50315 push    ax ;~ 18ED:2209
cs=0x18ed;eip=0x00220a; 	T(MOV(ax, offset(dseg,awai)));	// 50316 mov     ax, offset aWai ; "wai" ;~ 18ED:220A
cs=0x18ed;eip=0x00220d; 	X(PUSH(ax));	// 50317 push    ax ;~ 18ED:220D
cs=0x18ed;eip=0x00220e; 	X(PUSH(word_44cee));	// 50318 push    word_44CEE ;~ 18ED:220E
cs=0x18ed;eip=0x002212; 	X(PUSH(mainresptr));	// 50319 push    mainresptr ;~ 18ED:2212
cs=0x18ed;eip=0x002216; 	X(PUSH(cs));	// 50320 push    cs ;~ 18ED:2216
cs=0x18ed;eip=0x002217; 	R(CALL(locate_text_res,0));	// 50321 call    near ptr locate_text_res ;~ 18ED:2217
cs=0x18ed;eip=0x00221a; 	T(ADD(sp, 6));	// 50322 add     sp, 6 ;~ 18ED:221A
cs=0x18ed;eip=0x00221d; 	X(PUSH(dx));	// 50323 push    dx ;~ 18ED:221D
cs=0x18ed;eip=0x00221e; 	X(PUSH(ax));	// 50324 push    ax ;~ 18ED:221E
cs=0x18ed;eip=0x00221f; 	T(SUB(ax, ax));	// 50325 sub     ax, ax ;~ 18ED:221F
cs=0x18ed;eip=0x002221; 	X(PUSH(ax));	// 50326 push    ax ;~ 18ED:2221
cs=0x18ed;eip=0x002222; 	X(PUSH(ax));	// 50327 push    ax ;~ 18ED:2222
cs=0x18ed;eip=0x002223; 	X(PUSH(cs));	// 50328 push    cs ;~ 18ED:2223
cs=0x18ed;eip=0x002224; 	R(CALL(show_dialog,0));	// 50329 call    near ptr show_dialog ;~ 18ED:2224
cs=0x18ed;eip=0x002227; 	T(ADD(sp, 0x12));	// 50330 add     sp, 12h ;~ 18ED:2227
cs=0x18ed;eip=0x00222a; 	X(PUSH(cs));	// 50331 push    cs ;~ 18ED:222A
cs=0x18ed;eip=0x00222b; 	R(CALL(mouse_draw_opaque_check,0));	// 50332 call    near ptr mouse_draw_opaque_check ;~ 18ED:222B
cs=0x18ed;eip=0x00222e; 	R(RETF(0));	// 50333 retf ;~ 18ED:222E
print_int_as_string_maybe:
	// 50344 
#undef arg_0
#define arg_0 6
	// 50347 arg_0           = word ptr  6 ;~ 18ED:2230
#undef arg_2
#define arg_2 8
	// 50348 arg_2           = dword ptr  8 ;~ 18ED:2230
#undef arg_6
#define arg_6 0x0C
	// 50349 arg_6           = word ptr  0Ch ;~ 18ED:2230
ret_18ed_2230:
	// 7822 
cs=0x18ed;eip=0x002230; 	X(PUSH(bp));	// 50351 push    bp ;~ 18ED:2230
cs=0x18ed;eip=0x002231; 	T(MOV(bp, sp));	// 50352 mov     bp, sp ;~ 18ED:2231
cs=0x18ed;eip=0x002233; 	T(SUB(sp, 4));	// 50353 sub     sp, 4 ;~ 18ED:2233
cs=0x18ed;eip=0x002236; 	X(PUSH(di));	// 50354 push    di              ; int ;~ 18ED:2236
cs=0x18ed;eip=0x002237; 	X(PUSH(si));	// 50355 push    si ;~ 18ED:2237
cs=0x18ed;eip=0x002238; 	T(MOV(ax, 0x0A));	// 50356 mov     ax, 0Ah ;~ 18ED:2238
cs=0x18ed;eip=0x00223b; 	X(PUSH(ax));	// 50357 push    ax              ; char * ;~ 18ED:223B
cs=0x18ed;eip=0x00223c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 50358 push    [bp+arg_0]      ; char * ;~ 18ED:223C
cs=0x18ed;eip=0x00223f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 50359 push    word ptr [bp+arg_2] ; int ;~ 18ED:223F
cs=0x18ed;eip=0x002242; 	R(CALLF(_itoa_,0));	// 50360 call    _itoa_ ;~ 18ED:2242
cs=0x18ed;eip=0x002247; 	T(ADD(sp, 6));	// 50361 add     sp, 6 ;~ 18ED:2247
cs=0x18ed;eip=0x00224a; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), 0));	// 50362 cmp     [bp+arg_6], 0 ;~ 18ED:224A
cs=0x18ed;eip=0x00224e; 	R(JZ(loc_2974d));	// 50363 jz      short loc_2974D ;~ 18ED:224E
cs=0x18ed;eip=0x002250; 	T(SUB(si, si));	// 50364 sub     si, si ;~ 18ED:2250
cs=0x18ed;eip=0x002252; 	R(JMP(loc_29705));	// 50365 jmp     short loc_29705 ;~ 18ED:2252
loc_29704:
	// 7823 
cs=0x18ed;eip=0x002254; 	T(INC(si));	// 50369 inc     si ;~ 18ED:2254
loc_29705:
	// 7824 
cs=0x18ed;eip=0x002255; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 50372 mov     bx, [bp+arg_0] ;~ 18ED:2255
cs=0x18ed;eip=0x002258; 	T(CMP(*(raddr(ds,bx+si)), 0));	// 50373 cmp     byte ptr [bx+si], 0 ;~ 18ED:2258
cs=0x18ed;eip=0x00225b; 	R(JNZ(loc_29704));	// 50374 jnz     short loc_29704 ;~ 18ED:225B
cs=0x18ed;eip=0x00225d; 	R(JMP(loc_29748));	// 50375 jmp     short loc_29748 ;~ 18ED:225D
loc_29710:
	// 7825 
cs=0x18ed;eip=0x002260; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), si));	// 50380 cmp     [bp+arg_6], si ;~ 18ED:2260
cs=0x18ed;eip=0x002263; 	R(JGE(loc_2972a));	// 50381 jge     short loc_2972A ;~ 18ED:2263
cs=0x18ed;eip=0x002265; 	T(SUB(di, di));	// 50382 sub     di, di ;~ 18ED:2265
cs=0x18ed;eip=0x002267; 	R(JMP(loc_29723));	// 50383 jmp     short loc_29723 ;~ 18ED:2267
loc_2971a:
	// 7826 
cs=0x18ed;eip=0x00226a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 50388 mov     bx, [bp+arg_0] ;~ 18ED:226A
cs=0x18ed;eip=0x00226d; 	T(MOV(al, *(raddr(ds,bx+di+1))));	// 50389 mov     al, [bx+di+1] ;~ 18ED:226D
cs=0x18ed;eip=0x002270; 	X(MOV(*(raddr(ds,bx+di)), al));	// 50390 mov     [bx+di], al ;~ 18ED:2270
cs=0x18ed;eip=0x002272; 	T(INC(di));	// 50391 inc     di ;~ 18ED:2272
loc_29723:
	// 7827 
cs=0x18ed;eip=0x002273; 	T(CMP(di, si));	// 50394 cmp     di, si ;~ 18ED:2273
cs=0x18ed;eip=0x002275; 	R(JL(loc_2971a));	// 50395 jl      short loc_2971A ;~ 18ED:2275
cs=0x18ed;eip=0x002277; 	T(DEC(si));	// 50396 dec     si ;~ 18ED:2277
cs=0x18ed;eip=0x002278; 	R(JMP(loc_29748));	// 50397 jmp     short loc_29748 ;~ 18ED:2278
loc_2972a:
	// 7828 
cs=0x18ed;eip=0x00227a; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), si));	// 50401 cmp     [bp+arg_6], si ;~ 18ED:227A
cs=0x18ed;eip=0x00227d; 	R(JLE(loc_29748));	// 50402 jle     short loc_29748 ;~ 18ED:227D
cs=0x18ed;eip=0x00227f; 	T(MOV(di, si));	// 50403 mov     di, si ;~ 18ED:227F
cs=0x18ed;eip=0x002281; 	R(JMP(loc_2973d));	// 50404 jmp     short loc_2973D ;~ 18ED:2281
loc_29734:
	// 7829 
cs=0x18ed;eip=0x002284; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 50409 mov     bx, [bp+arg_0] ;~ 18ED:2284
cs=0x18ed;eip=0x002287; 	T(MOV(al, *(raddr(ds,bx+di))));	// 50410 mov     al, [bx+di] ;~ 18ED:2287
cs=0x18ed;eip=0x002289; 	X(MOV(*(raddr(ds,bx+di+1)), al));	// 50411 mov     [bx+di+1], al ;~ 18ED:2289
cs=0x18ed;eip=0x00228c; 	T(DEC(di));	// 50412 dec     di ;~ 18ED:228C
loc_2973d:
	// 7830 
cs=0x18ed;eip=0x00228d; 	T(OR(di, di));	// 50415 or      di, di ;~ 18ED:228D
cs=0x18ed;eip=0x00228f; 	R(JGE(loc_29734));	// 50416 jge     short loc_29734 ;~ 18ED:228F
cs=0x18ed;eip=0x002291; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 50417 mov     bx, [bp+arg_0] ;~ 18ED:2291
cs=0x18ed;eip=0x002294; 	X(MOV(*(raddr(ds,bx)), 0x20));	// 50418 mov     byte ptr [bx], 20h ; ' ' ;~ 18ED:2294
cs=0x18ed;eip=0x002297; 	T(INC(si));	// 50419 inc     si ;~ 18ED:2297
loc_29748:
	// 7831 
cs=0x18ed;eip=0x002298; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), si));	// 50423 cmp     [bp+arg_6], si ;~ 18ED:2298
cs=0x18ed;eip=0x00229b; 	R(JNZ(loc_29710));	// 50424 jnz     short loc_29710 ;~ 18ED:229B
loc_2974d:
	// 7832 
cs=0x18ed;eip=0x00229d; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+arg_2+2))), 0));	// 50427 cmp     word ptr [bp+arg_2+2], 0 ;~ 18ED:229D
cs=0x18ed;eip=0x0022a1; 	R(JZ(loc_2976b));	// 50428 jz      short loc_2976B ;~ 18ED:22A1
cs=0x18ed;eip=0x0022a3; 	T(SUB(si, si));	// 50429 sub     si, si ;~ 18ED:22A3
cs=0x18ed;eip=0x0022a5; 	R(JMP(loc_29763));	// 50430 jmp     short loc_29763 ;~ 18ED:22A5
loc_29758:
	// 7833 
cs=0x18ed;eip=0x0022a8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 50435 mov     bx, [bp+arg_0] ;~ 18ED:22A8
cs=0x18ed;eip=0x0022ab; 	T(MOV(ax, si));	// 50436 mov     ax, si ;~ 18ED:22AB
cs=0x18ed;eip=0x0022ad; 	T(INC(si));	// 50437 inc     si ;~ 18ED:22AD
cs=0x18ed;eip=0x0022ae; 	T(ADD(bx, ax));	// 50438 add     bx, ax ;~ 18ED:22AE
cs=0x18ed;eip=0x0022b0; 	X(MOV(*(raddr(ds,bx)), 0x30));	// 50439 mov     byte ptr [bx], 30h ; '0' ;~ 18ED:22B0
loc_29763:
	// 7834 
cs=0x18ed;eip=0x0022b3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 50442 mov     bx, [bp+arg_0] ;~ 18ED:22B3
cs=0x18ed;eip=0x0022b6; 	T(CMP(*(raddr(ds,bx+si)), 0x20));	// 50443 cmp     byte ptr [bx+si], 20h ; ' ' ;~ 18ED:22B6
cs=0x18ed;eip=0x0022b9; 	R(JZ(loc_29758));	// 50444 jz      short loc_29758 ;~ 18ED:22B9
loc_2976b:
	// 7835 
cs=0x18ed;eip=0x0022bb; 	X(POP(si));	// 50447 pop     si ;~ 18ED:22BB
cs=0x18ed;eip=0x0022bc; 	X(POP(di));	// 50448 pop     di ;~ 18ED:22BC
cs=0x18ed;eip=0x0022bd; 	T(MOV(sp, bp));	// 50449 mov     sp, bp ;~ 18ED:22BD
cs=0x18ed;eip=0x0022bf; 	X(POP(bp));	// 50450 pop     bp ;~ 18ED:22BF
cs=0x18ed;eip=0x0022c0; 	R(RETF(0));	// 50451 retf ;~ 18ED:22C0
sub_29772:
	// 50460 
cs=0x18ed;eip=0x0022c2; 	X(MOV(word_45d1c, 0));	// 50462 mov     word_45D1C, 0 ;~ 18ED:22C2
ret_18ed_22c8:
	// 7836 
cs=0x18ed;eip=0x0022c8; 	X(MOV(word_45d06, 0));	// 50463 mov     word_45D06, 0 ;~ 18ED:22C8
cs=0x18ed;eip=0x0022ce; 	X(MOV(idle_counter, 0));	// 50464 mov     idle_counter, 0 ;~ 18ED:22CE
cs=0x18ed;eip=0x0022d4; 	R(RETF(0));	// 50465 retf ;~ 18ED:22D4
mouse_timer_sprite_unk:
	// 50475 
#undef var_6
#define var_6 -6
	// 50478 var_6           = word ptr -6 ;~ 18ED:22D6
#undef arg_0
#define arg_0 6
	// 50479 arg_0           = word ptr  6 ;~ 18ED:22D6
#undef arg_2
#define arg_2 8
	// 50480 arg_2           = word ptr  8 ;~ 18ED:22D6
#undef arg_4
#define arg_4 0x0A
	// 50481 arg_4           = word ptr  0Ah ;~ 18ED:22D6
#undef arg_6
#define arg_6 0x0C
	// 50482 arg_6           = word ptr  0Ch ;~ 18ED:22D6
#undef arg_8
#define arg_8 0x0E
	// 50483 arg_8           = word ptr  0Eh ;~ 18ED:22D6
#undef arg_a
#define arg_a 0x10
	// 50484 arg_A           = word ptr  10h ;~ 18ED:22D6
#undef arg_c
#define arg_c 0x12
	// 50485 arg_C           = word ptr  12h ;~ 18ED:22D6
ret_18ed_22d6:
	// 7837 
cs=0x18ed;eip=0x0022d6; 	X(PUSH(bp));	// 50487 push    bp ;~ 18ED:22D6
cs=0x18ed;eip=0x0022d7; 	T(MOV(bp, sp));	// 50488 mov     bp, sp ;~ 18ED:22D7
cs=0x18ed;eip=0x0022d9; 	T(SUB(sp, 6));	// 50489 sub     sp, 6 ;~ 18ED:22D9
cs=0x18ed;eip=0x0022dc; 	X(PUSH(di));	// 50490 push    di ;~ 18ED:22DC
cs=0x18ed;eip=0x0022dd; 	X(PUSH(si));	// 50491 push    si ;~ 18ED:22DD
cs=0x18ed;eip=0x0022de; 	X(PUSH(cs));	// 50492 push    cs ;~ 18ED:22DE
cs=0x18ed;eip=0x0022df; 	R(CALL(timer_get_delta_alt,0));	// 50493 call    near ptr timer_get_delta_alt ;~ 18ED:22DF
cs=0x18ed;eip=0x0022e2; 	T(MOV(si, ax));	// 50494 mov     si, ax ;~ 18ED:22E2
cs=0x18ed;eip=0x0022e4; 	X(ADD(word_45d1c, si));	// 50495 add     word_45D1C, si ;~ 18ED:22E4
cs=0x18ed;eip=0x0022e8; 	R(JMP(loc_2979f));	// 50496 jmp     short loc_2979F ;~ 18ED:22E8
loc_2979a:
	// 7838 
cs=0x18ed;eip=0x0022ea; 	X(SUB(word_45d1c, 0x3C));	// 50500 sub     word_45D1C, 3Ch ; '<' ;~ 18ED:22EA
loc_2979f:
	// 7839 
cs=0x18ed;eip=0x0022ef; 	T(CMP(word_45d1c, 0x3C));	// 50503 cmp     word_45D1C, 3Ch ; '<' ;~ 18ED:22EF
cs=0x18ed;eip=0x0022f4; 	R(JG(loc_2979a));	// 50504 jg      short loc_2979A ;~ 18ED:22F4
cs=0x18ed;eip=0x0022f6; 	T(CMP(word_45d1c, 0x1E));	// 50505 cmp     word_45D1C, 1Eh ;~ 18ED:22F6
cs=0x18ed;eip=0x0022fb; 	R(JLE(loc_297b2));	// 50506 jle     short loc_297B2 ;~ 18ED:22FB
cs=0x18ed;eip=0x0022fd; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_a))));	// 50507 mov     di, [bp+arg_A] ;~ 18ED:22FD
cs=0x18ed;eip=0x002300; 	R(JMP(loc_297b5));	// 50508 jmp     short loc_297B5 ;~ 18ED:2300
loc_297b2:
	// 7840 
cs=0x18ed;eip=0x002302; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_c))));	// 50512 mov     di, [bp+arg_C] ;~ 18ED:2302
loc_297b5:
	// 7841 
cs=0x18ed;eip=0x002305; 	T(CMP(word_45d06, di));	// 50515 cmp     word_45D06, di ;~ 18ED:2305
cs=0x18ed;eip=0x002309; 	R(JZ(loc_297f4));	// 50516 jz      short loc_297F4 ;~ 18ED:2309
cs=0x18ed;eip=0x00230b; 	X(MOV(word_45d06, di));	// 50517 mov     word_45D06, di ;~ 18ED:230B
cs=0x18ed;eip=0x00230f; 	X(PUSH(cs));	// 50518 push    cs ;~ 18ED:230F
cs=0x18ed;eip=0x002310; 	R(CALL(mouse_draw_opaque_check,0));	// 50519 call    near ptr mouse_draw_opaque_check ;~ 18ED:2310
cs=0x18ed;eip=0x002313; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 50520 mov     ax, [bp+arg_0] ;~ 18ED:2313
cs=0x18ed;eip=0x002316; 	T(SHL(ax, 1));	// 50521 shl     ax, 1 ;~ 18ED:2316
cs=0x18ed;eip=0x002318; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 50522 mov     [bp+var_6], ax ;~ 18ED:2318
cs=0x18ed;eip=0x00231b; 	X(PUSH(di));	// 50523 push    di ;~ 18ED:231B
cs=0x18ed;eip=0x00231c; 	T(MOV(bx, ax));	// 50524 mov     bx, ax ;~ 18ED:231C
cs=0x18ed;eip=0x00231e; 	T(ADD(bx, *(dw*)(raddr(ss,bp+arg_8))));	// 50525 add     bx, [bp+arg_8] ;~ 18ED:231E
cs=0x18ed;eip=0x002321; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 50526 push    word ptr [bx] ;~ 18ED:2321
cs=0x18ed;eip=0x002323; 	T(MOV(bx, ax));	// 50527 mov     bx, ax ;~ 18ED:2323
cs=0x18ed;eip=0x002325; 	T(ADD(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 50528 add     bx, [bp+arg_4] ;~ 18ED:2325
cs=0x18ed;eip=0x002328; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 50529 push    word ptr [bx] ;~ 18ED:2328
cs=0x18ed;eip=0x00232a; 	T(MOV(bx, ax));	// 50530 mov     bx, ax ;~ 18ED:232A
cs=0x18ed;eip=0x00232c; 	T(ADD(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 50531 add     bx, [bp+arg_6] ;~ 18ED:232C
cs=0x18ed;eip=0x00232f; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 50532 push    word ptr [bx] ;~ 18ED:232F
cs=0x18ed;eip=0x002331; 	T(MOV(bx, ax));	// 50533 mov     bx, ax ;~ 18ED:2331
cs=0x18ed;eip=0x002333; 	T(ADD(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 50534 add     bx, [bp+arg_2] ;~ 18ED:2333
cs=0x18ed;eip=0x002336; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 50535 push    word ptr [bx] ;~ 18ED:2336
cs=0x18ed;eip=0x002338; 	R(CALLF(sprite_1_unk4,0));	// 50536 call    sprite_1_unk4 ;~ 18ED:2338
cs=0x18ed;eip=0x00233d; 	T(ADD(sp, 0x0A));	// 50537 add     sp, 0Ah ;~ 18ED:233D
cs=0x18ed;eip=0x002340; 	X(PUSH(cs));	// 50538 push    cs ;~ 18ED:2340
cs=0x18ed;eip=0x002341; 	R(CALL(mouse_draw_transparent_check,0));	// 50539 call    near ptr mouse_draw_transparent_check ;~ 18ED:2341
loc_297f4:
	// 7842 
cs=0x18ed;eip=0x002344; 	T(MOV(ax, si));	// 50542 mov     ax, si ;~ 18ED:2344
cs=0x18ed;eip=0x002346; 	X(POP(si));	// 50543 pop     si ;~ 18ED:2346
cs=0x18ed;eip=0x002347; 	X(POP(di));	// 50544 pop     di ;~ 18ED:2347
cs=0x18ed;eip=0x002348; 	T(MOV(sp, bp));	// 50545 mov     sp, bp ;~ 18ED:2348
cs=0x18ed;eip=0x00234a; 	X(POP(bp));	// 50546 pop     bp ;~ 18ED:234A
cs=0x18ed;eip=0x00234b; 	R(RETF(0));	// 50547 retf ;~ 18ED:234B
file_load_audiores:
	// 50556 
#undef var_4
#define var_4 -4
	// 50559 var_4           = word ptr -4 ;~ 18ED:234C
#undef var_2
#define var_2 -2
	// 50560 var_2           = word ptr -2 ;~ 18ED:234C
#undef arg_0
#define arg_0 6
	// 50561 arg_0           = word ptr  6 ;~ 18ED:234C
#undef arg_2
#define arg_2 8
	// 50562 arg_2           = word ptr  8 ;~ 18ED:234C
#undef arg_4
#define arg_4 0x0A
	// 50563 arg_4           = word ptr  0Ah ;~ 18ED:234C
ret_18ed_234c:
	// 7843 
cs=0x18ed;eip=0x00234c; 	X(PUSH(bp));	// 50565 push    bp ;~ 18ED:234C
cs=0x18ed;eip=0x00234d; 	T(MOV(bp, sp));	// 50566 mov     bp, sp ;~ 18ED:234D
cs=0x18ed;eip=0x00234f; 	T(SUB(sp, 4));	// 50567 sub     sp, 4 ;~ 18ED:234F
cs=0x18ed;eip=0x002352; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 50568 push    [bp+arg_2]      ; char * ;~ 18ED:2352
cs=0x18ed;eip=0x002355; 	T(MOV(ax, 5));	// 50569 mov     ax, 5 ;~ 18ED:2355
cs=0x18ed;eip=0x002358; 	X(PUSH(ax));	// 50570 push    ax              ; int ;~ 18ED:2358
cs=0x18ed;eip=0x002359; 	X(PUSH(cs));	// 50571 push    cs ;~ 18ED:2359
cs=0x18ed;eip=0x00235a; 	R(CALL(file_load_resource,0));	// 50572 call    near ptr file_load_resource ;~ 18ED:235A
cs=0x18ed;eip=0x00235d; 	T(ADD(sp, 4));	// 50573 add     sp, 4 ;~ 18ED:235D
cs=0x18ed;eip=0x002360; 	X(MOV(voicefileptr, ax));	// 50574 mov     voicefileptr, ax ;~ 18ED:2360
cs=0x18ed;eip=0x002363; 	X(MOV(word_44a7e, dx));	// 50575 mov     word_44A7E, dx ;~ 18ED:2363
cs=0x18ed;eip=0x002367; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 50576 push    [bp+arg_0]      ; char * ;~ 18ED:2367
cs=0x18ed;eip=0x00236a; 	T(MOV(ax, 4));	// 50577 mov     ax, 4 ;~ 18ED:236A
cs=0x18ed;eip=0x00236d; 	X(PUSH(ax));	// 50578 push    ax              ; int ;~ 18ED:236D
cs=0x18ed;eip=0x00236e; 	X(PUSH(cs));	// 50579 push    cs ;~ 18ED:236E
cs=0x18ed;eip=0x00236f; 	R(CALL(file_load_resource,0));	// 50580 call    near ptr file_load_resource ;~ 18ED:236F
cs=0x18ed;eip=0x002372; 	T(ADD(sp, 4));	// 50581 add     sp, 4 ;~ 18ED:2372
cs=0x18ed;eip=0x002375; 	X(MOV(songfileptr, ax));	// 50582 mov     songfileptr, ax ;~ 18ED:2375
cs=0x18ed;eip=0x002378; 	X(MOV(word_44362, dx));	// 50583 mov     word_44362, dx ;~ 18ED:2378
cs=0x18ed;eip=0x00237c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 50584 push    [bp+arg_4]      ; arg_4 is a string, e.g "TITL" ;~ 18ED:237C
cs=0x18ed;eip=0x00237f; 	X(PUSH(word_44a7e));	// 50585 push    word_44A7E ;~ 18ED:237F
cs=0x18ed;eip=0x002383; 	X(PUSH(voicefileptr));	// 50586 push    voicefileptr ;~ 18ED:2383
cs=0x18ed;eip=0x002387; 	X(PUSH(dx));	// 50587 push    dx ;~ 18ED:2387
cs=0x18ed;eip=0x002388; 	X(PUSH(ax));	// 50588 push    ax ;~ 18ED:2388
cs=0x18ed;eip=0x002389; 	R(CALLF(init_audio_resources,0));	// 50589 call    init_audio_resources ;~ 18ED:2389
cs=0x18ed;eip=0x00238e; 	T(ADD(sp, 0x0A));	// 50590 add     sp, 0Ah ;~ 18ED:238E
cs=0x18ed;eip=0x002391; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 50591 mov     [bp+var_4], ax ;~ 18ED:2391
cs=0x18ed;eip=0x002394; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 50592 mov     [bp+var_2], dx ;~ 18ED:2394
cs=0x18ed;eip=0x002397; 	X(PUSH(dx));	// 50593 push    dx ;~ 18ED:2397
cs=0x18ed;eip=0x002398; 	X(PUSH(ax));	// 50594 push    ax ;~ 18ED:2398
cs=0x18ed;eip=0x002399; 	R(CALLF(load_audio_finalize,0));	// 50595 call    load_audio_finalize ;~ 18ED:2399
cs=0x18ed;eip=0x00239e; 	X(MOV(is_audioloaded, 1));	// 50596 mov     is_audioloaded, 1 ;~ 18ED:239E
cs=0x18ed;eip=0x0023a3; 	T(MOV(sp, bp));	// 50597 mov     sp, bp ;~ 18ED:23A3
cs=0x18ed;eip=0x0023a5; 	X(POP(bp));	// 50598 pop     bp ;~ 18ED:23A5
cs=0x18ed;eip=0x0023a6; 	R(RETF(0));	// 50599 retf ;~ 18ED:23A6
audio_unload:
	// 50608 
cs=0x18ed;eip=0x0023a8; 	T(MOV(ax, 2));	// 50610 mov     ax, 2 ;~ 18ED:23A8
ret_18ed_23ab:
	// 7844 
cs=0x18ed;eip=0x0023ab; 	X(PUSH(ax));	// 50611 push    ax ;~ 18ED:23AB
cs=0x18ed;eip=0x0023ac; 	R(CALLF(audio_driver_func3f,0));	// 50612 call    audio_driver_func3F ;~ 18ED:23AC
cs=0x18ed;eip=0x0023b1; 	T(ADD(sp, 2));	// 50613 add     sp, 2 ;~ 18ED:23B1
cs=0x18ed;eip=0x0023b4; 	X(PUSH(word_44362));	// 50614 push    word_44362 ;~ 18ED:23B4
cs=0x18ed;eip=0x0023b8; 	X(PUSH(songfileptr));	// 50615 push    songfileptr ;~ 18ED:23B8
cs=0x18ed;eip=0x0023bc; 	R(CALLF(mmgr_free,0));	// 50616 call    mmgr_free ;~ 18ED:23BC
cs=0x18ed;eip=0x0023c1; 	T(ADD(sp, 4));	// 50617 add     sp, 4 ;~ 18ED:23C1
cs=0x18ed;eip=0x0023c4; 	X(PUSH(word_44a7e));	// 50618 push    word_44A7E ;~ 18ED:23C4
cs=0x18ed;eip=0x0023c8; 	X(PUSH(voicefileptr));	// 50619 push    voicefileptr ;~ 18ED:23C8
cs=0x18ed;eip=0x0023cc; 	R(CALLF(mmgr_free,0));	// 50620 call    mmgr_free ;~ 18ED:23CC
cs=0x18ed;eip=0x0023d1; 	T(ADD(sp, 4));	// 50621 add     sp, 4 ;~ 18ED:23D1
cs=0x18ed;eip=0x0023d4; 	X(MOV(is_audioloaded, 0));	// 50622 mov     is_audioloaded, 0 ;~ 18ED:23D4
cs=0x18ed;eip=0x0023d9; 	R(RETF(0));	// 50623 retf ;~ 18ED:23D9
font_set_fontdef2:
	// 50631 
#undef arg_0
#define arg_0 6
	// 50634 arg_0           = dword ptr  6 ;~ 18ED:23DA
ret_18ed_23da:
	// 7845 
cs=0x18ed;eip=0x0023da; 	X(PUSH(bp));	// 50636 push    bp ;~ 18ED:23DA
cs=0x18ed;eip=0x0023db; 	T(MOV(bp, sp));	// 50637 mov     bp, sp ;~ 18ED:23DB
cs=0x18ed;eip=0x0023dd; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 50638 push    word ptr [bp+arg_0+2] ;~ 18ED:23DD
cs=0x18ed;eip=0x0023e0; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 50639 push    word ptr [bp+arg_0] ;~ 18ED:23E0
cs=0x18ed;eip=0x0023e3; 	R(CALLF(set_fontdefseg,0));	// 50640 call    set_fontdefseg ;~ 18ED:23E3
cs=0x18ed;eip=0x0023e8; 	T(ADD(sp, 4));	// 50641 add     sp, 4 ;~ 18ED:23E8
cs=0x18ed;eip=0x0023eb; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 50642 les     bx, [bp+arg_0] ;~ 18ED:23EB
cs=0x18ed;eip=0x0023ee; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E))));	// 50643 mov     ax, es:[bx+0Eh] ;~ 18ED:23EE
cs=0x18ed;eip=0x0023f2; 	X(MOV(fontdef_unk_0e, ax));	// 50644 mov     fontdef_unk_0E, ax ;~ 18ED:23F2
cs=0x18ed;eip=0x0023f5; 	X(POP(bp));	// 50645 pop     bp ;~ 18ED:23F5
cs=0x18ed;eip=0x0023f6; 	R(RETF(0));	// 50646 retf ;~ 18ED:23F6
font_set_fontdef:
	// 50655 
cs=0x18ed;eip=0x0023f8; 	X(PUSH(word_454c8));	// 50657 push    word_454C8 ;~ 18ED:23F8
ret_18ed_23fc:
	// 7846 
cs=0x18ed;eip=0x0023fc; 	X(PUSH(fontdefptr));	// 50658 push    fontdefptr ;~ 18ED:23FC
cs=0x18ed;eip=0x002400; 	X(PUSH(cs));	// 50659 push    cs ;~ 18ED:2400
cs=0x18ed;eip=0x002401; 	R(CALL(font_set_fontdef2,0));	// 50660 call    near ptr font_set_fontdef2 ;~ 18ED:2401
cs=0x18ed;eip=0x002404; 	T(ADD(sp, 4));	// 50661 add     sp, 4 ;~ 18ED:2404
cs=0x18ed;eip=0x002407; 	R(RETF(0));	// 50662 retf ;~ 18ED:2407
format_frame_as_string:
	// 50671 
#undef var_16
#define var_16 -0x16
	// 50674 var_16          = word ptr -16h ;~ 18ED:2408
#undef var_12
#define var_12 -0x12
	// 50675 var_12          = byte ptr -12h ;~ 18ED:2408
#undef arg_0
#define arg_0 6
	// 50676 arg_0           = dword ptr  6 ;~ 18ED:2408
#undef arg_4
#define arg_4 0x0A
	// 50677 arg_4           = word ptr  0Ah ;~ 18ED:2408
ret_18ed_2408:
	// 7847 
cs=0x18ed;eip=0x002408; 	X(PUSH(bp));	// 50679 push    bp ;~ 18ED:2408
cs=0x18ed;eip=0x002409; 	T(MOV(bp, sp));	// 50680 mov     bp, sp ;~ 18ED:2409
cs=0x18ed;eip=0x00240b; 	T(SUB(sp, 0x18));	// 50681 sub     sp, 18h ;~ 18ED:240B
cs=0x18ed;eip=0x00240e; 	X(PUSH(di));	// 50682 push    di ;~ 18ED:240E
cs=0x18ed;eip=0x00240f; 	X(PUSH(si));	// 50683 push    si              ; char * ;~ 18ED:240F
cs=0x18ed;eip=0x002410; 	T(MOV(ax, 0x3C));	// 50684 mov     ax, 3Ch ; '<' ;~ 18ED:2410
cs=0x18ed;eip=0x002413; 	X(IMUL1_2(framespersec));	// 50685 imul    framespersec ;~ 18ED:2413
cs=0x18ed;eip=0x002417; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 50686 mov     [bp+var_16], ax ;~ 18ED:2417
cs=0x18ed;eip=0x00241a; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 50687 mov     ax, word ptr [bp+arg_0+2] ;~ 18ED:241A
cs=0x18ed;eip=0x00241d; 	T(SUB(dx, dx));	// 50688 sub     dx, dx ;~ 18ED:241D
cs=0x18ed;eip=0x00241f; 	X(DIV2(*(dw*)(raddr(ss,bp+var_16))));	// 50689 div     [bp+var_16] ;~ 18ED:241F
cs=0x18ed;eip=0x002422; 	T(MOV(si, ax));	// 50690 mov     si, ax ;~ 18ED:2422
cs=0x18ed;eip=0x002424; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_16))));	// 50691 mov     ax, [bp+var_16] ;~ 18ED:2424
cs=0x18ed;eip=0x002427; 	T(IMUL1_2(si));	// 50692 imul    si ;~ 18ED:2427
cs=0x18ed;eip=0x002429; 	X(SUB(*(dw*)((dw*)(raddr(ss,bp+arg_0+2))), ax));	// 50693 sub     word ptr [bp+arg_0+2], ax ;~ 18ED:2429
cs=0x18ed;eip=0x00242c; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 50694 mov     ax, word ptr [bp+arg_0+2] ;~ 18ED:242C
cs=0x18ed;eip=0x00242f; 	T(SUB(dx, dx));	// 50695 sub     dx, dx ;~ 18ED:242F
cs=0x18ed;eip=0x002431; 	X(DIV2(framespersec));	// 50696 div     framespersec ;~ 18ED:2431
cs=0x18ed;eip=0x002435; 	T(MOV(di, ax));	// 50697 mov     di, ax ;~ 18ED:2435
cs=0x18ed;eip=0x002437; 	T(MOV(ax, framespersec));	// 50698 mov     ax, framespersec ;~ 18ED:2437
cs=0x18ed;eip=0x00243a; 	T(IMUL1_2(di));	// 50699 imul    di ;~ 18ED:243A
cs=0x18ed;eip=0x00243c; 	X(SUB(*(dw*)((dw*)(raddr(ss,bp+arg_0+2))), ax));	// 50700 sub     word ptr [bp+arg_0+2], ax ;~ 18ED:243C
cs=0x18ed;eip=0x00243f; 	T(MOV(ax, 2));	// 50701 mov     ax, 2 ;~ 18ED:243F
cs=0x18ed;eip=0x002442; 	X(PUSH(ax));	// 50702 push    ax              ; int ;~ 18ED:2442
cs=0x18ed;eip=0x002443; 	T(SUB(ax, ax));	// 50703 sub     ax, ax ;~ 18ED:2443
cs=0x18ed;eip=0x002445; 	X(PUSH(ax));	// 50704 push    ax              ; int ;~ 18ED:2445
cs=0x18ed;eip=0x002446; 	X(PUSH(si));	// 50705 push    si ;~ 18ED:2446
cs=0x18ed;eip=0x002447; 	T(ax = bp+var_12);	// 50706 lea     ax, [bp+var_12] ;~ 18ED:2447
cs=0x18ed;eip=0x00244a; 	X(PUSH(ax));	// 50707 push    ax              ; char * ;~ 18ED:244A
cs=0x18ed;eip=0x00244b; 	X(PUSH(cs));	// 50708 push    cs ;~ 18ED:244B
cs=0x18ed;eip=0x00244c; 	R(CALL(print_int_as_string_maybe,0));	// 50709 call    near ptr print_int_as_string_maybe ;~ 18ED:244C
cs=0x18ed;eip=0x00244f; 	T(ADD(sp, 8));	// 50710 add     sp, 8 ;~ 18ED:244F
cs=0x18ed;eip=0x002452; 	T(ax = bp+var_12);	// 50711 lea     ax, [bp+var_12] ;~ 18ED:2452
cs=0x18ed;eip=0x002455; 	X(PUSH(ax));	// 50712 push    ax ;~ 18ED:2455
cs=0x18ed;eip=0x002456; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 50713 push    word ptr [bp+arg_0] ; char * ;~ 18ED:2456
cs=0x18ed;eip=0x002459; 	R(CALLF(_strcpy,0));	// 50714 call    _strcpy ;~ 18ED:2459
cs=0x18ed;eip=0x00245e; 	T(ADD(sp, 4));	// 50715 add     sp, 4 ;~ 18ED:245E
cs=0x18ed;eip=0x002461; 	T(MOV(ax, offset(dseg,asc_3ebd4)));	// 50716 mov     ax, offset asc_3EBD4 ; ":" ;~ 18ED:2461
cs=0x18ed;eip=0x002464; 	X(PUSH(ax));	// 50717 push    ax ;~ 18ED:2464
cs=0x18ed;eip=0x002465; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 50718 push    word ptr [bp+arg_0] ; char * ;~ 18ED:2465
cs=0x18ed;eip=0x002468; 	R(CALLF(_strcat,0));	// 50719 call    _strcat ;~ 18ED:2468
cs=0x18ed;eip=0x00246d; 	T(ADD(sp, 4));	// 50720 add     sp, 4 ;~ 18ED:246D
cs=0x18ed;eip=0x002470; 	T(MOV(ax, 2));	// 50721 mov     ax, 2 ;~ 18ED:2470
cs=0x18ed;eip=0x002473; 	X(PUSH(ax));	// 50722 push    ax              ; int ;~ 18ED:2473
cs=0x18ed;eip=0x002474; 	T(MOV(ax, 1));	// 50723 mov     ax, 1 ;~ 18ED:2474
cs=0x18ed;eip=0x002477; 	X(PUSH(ax));	// 50724 push    ax              ; int ;~ 18ED:2477
cs=0x18ed;eip=0x002478; 	X(PUSH(di));	// 50725 push    di ;~ 18ED:2478
cs=0x18ed;eip=0x002479; 	T(ax = bp+var_12);	// 50726 lea     ax, [bp+var_12] ;~ 18ED:2479
cs=0x18ed;eip=0x00247c; 	X(PUSH(ax));	// 50727 push    ax              ; char * ;~ 18ED:247C
cs=0x18ed;eip=0x00247d; 	X(PUSH(cs));	// 50728 push    cs ;~ 18ED:247D
cs=0x18ed;eip=0x00247e; 	R(CALL(print_int_as_string_maybe,0));	// 50729 call    near ptr print_int_as_string_maybe ;~ 18ED:247E
cs=0x18ed;eip=0x002481; 	T(ADD(sp, 8));	// 50730 add     sp, 8 ;~ 18ED:2481
cs=0x18ed;eip=0x002484; 	T(ax = bp+var_12);	// 50731 lea     ax, [bp+var_12] ;~ 18ED:2484
cs=0x18ed;eip=0x002487; 	X(PUSH(ax));	// 50732 push    ax ;~ 18ED:2487
cs=0x18ed;eip=0x002488; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 50733 push    word ptr [bp+arg_0] ; char * ;~ 18ED:2488
cs=0x18ed;eip=0x00248b; 	R(CALLF(_strcat,0));	// 50734 call    _strcat ;~ 18ED:248B
cs=0x18ed;eip=0x002490; 	T(ADD(sp, 4));	// 50735 add     sp, 4 ;~ 18ED:2490
cs=0x18ed;eip=0x002493; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0));	// 50736 cmp     [bp+arg_4], 0 ;~ 18ED:2493
cs=0x18ed;eip=0x002497; 	R(JZ(loc_29988));	// 50737 jz      short loc_29988 ;~ 18ED:2497
cs=0x18ed;eip=0x002499; 	T(MOV(ax, offset(dseg,a_)));	// 50738 mov     ax, offset a_   ; "." ;~ 18ED:2499
cs=0x18ed;eip=0x00249c; 	X(PUSH(ax));	// 50739 push    ax ;~ 18ED:249C
cs=0x18ed;eip=0x00249d; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 50740 push    word ptr [bp+arg_0] ; char * ;~ 18ED:249D
cs=0x18ed;eip=0x0024a0; 	R(CALLF(_strcat,0));	// 50741 call    _strcat ;~ 18ED:24A0
cs=0x18ed;eip=0x0024a5; 	T(ADD(sp, 4));	// 50742 add     sp, 4 ;~ 18ED:24A5
cs=0x18ed;eip=0x0024a8; 	T(MOV(ax, 2));	// 50743 mov     ax, 2 ;~ 18ED:24A8
cs=0x18ed;eip=0x0024ab; 	X(PUSH(ax));	// 50744 push    ax              ; int ;~ 18ED:24AB
cs=0x18ed;eip=0x0024ac; 	T(MOV(ax, 1));	// 50745 mov     ax, 1 ;~ 18ED:24AC
cs=0x18ed;eip=0x0024af; 	X(PUSH(ax));	// 50746 push    ax              ; int ;~ 18ED:24AF
cs=0x18ed;eip=0x0024b0; 	T(MOV(ax, 0x64));	// 50747 mov     ax, 64h ; 'd' ;~ 18ED:24B0
cs=0x18ed;eip=0x0024b3; 	T(CWD);	// 50748 cwd ;~ 18ED:24B3
cs=0x18ed;eip=0x0024b4; 	T(MOV(cx, framespersec));	// 50749 mov     cx, framespersec ;~ 18ED:24B4
cs=0x18ed;eip=0x0024b8; 	T(IDIV2(cx));	// 50750 idiv    cx ;~ 18ED:24B8
cs=0x18ed;eip=0x0024ba; 	X(MUL1_2(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 50751 mul     word ptr [bp+arg_0+2] ;~ 18ED:24BA
cs=0x18ed;eip=0x0024bd; 	X(PUSH(ax));	// 50752 push    ax ;~ 18ED:24BD
cs=0x18ed;eip=0x0024be; 	T(ax = bp+var_12);	// 50753 lea     ax, [bp+var_12] ;~ 18ED:24BE
cs=0x18ed;eip=0x0024c1; 	X(PUSH(ax));	// 50754 push    ax              ; char * ;~ 18ED:24C1
cs=0x18ed;eip=0x0024c2; 	X(PUSH(cs));	// 50755 push    cs ;~ 18ED:24C2
cs=0x18ed;eip=0x0024c3; 	R(CALL(print_int_as_string_maybe,0));	// 50756 call    near ptr print_int_as_string_maybe ;~ 18ED:24C3
cs=0x18ed;eip=0x0024c6; 	T(ADD(sp, 8));	// 50757 add     sp, 8 ;~ 18ED:24C6
cs=0x18ed;eip=0x0024c9; 	T(ax = bp+var_12);	// 50758 lea     ax, [bp+var_12] ;~ 18ED:24C9
cs=0x18ed;eip=0x0024cc; 	X(PUSH(ax));	// 50759 push    ax ;~ 18ED:24CC
cs=0x18ed;eip=0x0024cd; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 50760 push    word ptr [bp+arg_0] ; char * ;~ 18ED:24CD
cs=0x18ed;eip=0x0024d0; 	R(CALLF(_strcat,0));	// 50761 call    _strcat ;~ 18ED:24D0
cs=0x18ed;eip=0x0024d5; 	T(ADD(sp, 4));	// 50762 add     sp, 4 ;~ 18ED:24D5
loc_29988:
	// 7848 
cs=0x18ed;eip=0x0024d8; 	X(POP(si));	// 50765 pop     si ;~ 18ED:24D8
cs=0x18ed;eip=0x0024d9; 	X(POP(di));	// 50766 pop     di ;~ 18ED:24D9
cs=0x18ed;eip=0x0024da; 	T(MOV(sp, bp));	// 50767 mov     sp, bp ;~ 18ED:24DA
cs=0x18ed;eip=0x0024dc; 	X(POP(bp));	// 50768 pop     bp ;~ 18ED:24DC
cs=0x18ed;eip=0x0024dd; 	R(RETF(0));	// 50769 retf ;~ 18ED:24DD
get_super_random:
	// 50777 
#undef var_4
#define var_4 -4
	// 50780 var_4           = word ptr -4 ;~ 18ED:24DE
ret_18ed_24de:
	// 7849 
cs=0x18ed;eip=0x0024de; 	X(PUSH(bp));	// 50782 push    bp ;~ 18ED:24DE
cs=0x18ed;eip=0x0024df; 	T(MOV(bp, sp));	// 50783 mov     bp, sp ;~ 18ED:24DF
cs=0x18ed;eip=0x0024e1; 	T(SUB(sp, 4));	// 50784 sub     sp, 4 ;~ 18ED:24E1
cs=0x18ed;eip=0x0024e4; 	X(PUSH(di));	// 50785 push    di ;~ 18ED:24E4
cs=0x18ed;eip=0x0024e5; 	X(PUSH(si));	// 50786 push    si ;~ 18ED:24E5
cs=0x18ed;eip=0x0024e6; 	R(CALLF(_rand,0));	// 50787 call    _rand ;~ 18ED:24E6
cs=0x18ed;eip=0x0024eb; 	T(MOV(di, ax));	// 50788 mov     di, ax ;~ 18ED:24EB
cs=0x18ed;eip=0x0024ed; 	R(CALLF(get_kevinrandom,0));	// 50789 call    get_kevinrandom ;~ 18ED:24ED
cs=0x18ed;eip=0x0024f2; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 50790 mov     [bp+var_4], ax ;~ 18ED:24F2
cs=0x18ed;eip=0x0024f5; 	R(CALLF(timer_get_counter,0));	// 50791 call    timer_get_counter ;~ 18ED:24F5
cs=0x18ed;eip=0x0024fa; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_4))));	// 50792 add     ax, [bp+var_4] ;~ 18ED:24FA
cs=0x18ed;eip=0x0024fd; 	T(ADD(ax, di));	// 50793 add     ax, di ;~ 18ED:24FD
cs=0x18ed;eip=0x0024ff; 	T(ADD(ax, gstate_frame));	// 50794 add     ax, gState_frame ;~ 18ED:24FF
cs=0x18ed;eip=0x002503; 	T(MOV(si, ax));	// 50795 mov     si, ax ;~ 18ED:2503
cs=0x18ed;eip=0x002505; 	T(OR(si, si));	// 50796 or      si, si ;~ 18ED:2505
cs=0x18ed;eip=0x002507; 	R(JGE(loc_299c2));	// 50797 jge     short loc_299C2 ;~ 18ED:2507
cs=0x18ed;eip=0x002509; 	T(NEG(ax));	// 50798 neg     ax ;~ 18ED:2509
cs=0x18ed;eip=0x00250b; 	X(POP(si));	// 50799 pop     si ;~ 18ED:250B
cs=0x18ed;eip=0x00250c; 	X(POP(di));	// 50800 pop     di ;~ 18ED:250C
cs=0x18ed;eip=0x00250d; 	T(MOV(sp, bp));	// 50801 mov     sp, bp ;~ 18ED:250D
cs=0x18ed;eip=0x00250f; 	X(POP(bp));	// 50802 pop     bp ;~ 18ED:250F
cs=0x18ed;eip=0x002510; 	R(RETF(0));	// 50803 retf ;~ 18ED:2510
loc_299c2:
	// 7850 
cs=0x18ed;eip=0x002512; 	T(MOV(ax, si));	// 50808 mov     ax, si ;~ 18ED:2512
cs=0x18ed;eip=0x002514; 	X(POP(si));	// 50809 pop     si ;~ 18ED:2514
cs=0x18ed;eip=0x002515; 	X(POP(di));	// 50810 pop     di ;~ 18ED:2515
cs=0x18ed;eip=0x002516; 	T(MOV(sp, bp));	// 50811 mov     sp, bp ;~ 18ED:2516
cs=0x18ed;eip=0x002518; 	X(POP(bp));	// 50812 pop     bp ;~ 18ED:2518
cs=0x18ed;eip=0x002519; 	R(RETF(0));	// 50813 retf ;~ 18ED:2519
file_load_resource:
	// 50822 
#undef var_4
#define var_4 -4
	// 50825 var_4           = word ptr -4 ;~ 18ED:251A
#undef var_2
#define var_2 -2
	// 50826 var_2           = word ptr -2 ;~ 18ED:251A
#undef arg_0
#define arg_0 6
	// 50827 arg_0           = word ptr  6 ;~ 18ED:251A
#undef arg_2
#define arg_2 8
	// 50828 arg_2           = dword ptr  8 ;~ 18ED:251A
ret_18ed_251a:
	// 7851 
cs=0x18ed;eip=0x00251a; 	X(PUSH(bp));	// 50830 push    bp ;~ 18ED:251A
cs=0x18ed;eip=0x00251b; 	T(MOV(bp, sp));	// 50831 mov     bp, sp ;~ 18ED:251B
cs=0x18ed;eip=0x00251d; 	T(SUB(sp, 4));	// 50832 sub     sp, 4 ;~ 18ED:251D
loc_299d0:
	// 7852 
cs=0x18ed;eip=0x002520; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 50835 mov     ax, [bp+arg_0] ;~ 18ED:2520
cs=0x18ed;eip=0x002523; 	T(CMP(ax, 8));	// 50836 cmp     ax, 8           ; switch 9 cases ;~ 18ED:2523
cs=0x18ed;eip=0x002526; 	R(JBE(loc_299db));	// 50837 jbe     short loc_299DB ;~ 18ED:2526
cs=0x18ed;eip=0x002528; 	R(JMP(def_299de));	// 50838 jmp     def_299DE       ; jumptable 000299DE default case ;~ 18ED:2528
loc_299db:
	// 7853 
cs=0x18ed;eip=0x00252b; 	T(ADD(ax, ax));	// 50842 add     ax, ax ;~ 18ED:252B
cs=0x18ed;eip=0x00252d; 	T(XCHG(ax, bx));	// 50843 xchg    ax, bx ;~ 18ED:252D
	cs=seg_offset(seg008);
cs=0x18ed;eip=0x00252e; __disp=*(dw*)(((db*)&jpt_299de)+bx);
	R(JMP(__dispatch_call));	// 50844 jmp     cs:jpt_299DE[bx] ; switch jump ;~ 18ED:252E
loc_299e4:
	// 7854 
cs=0x18ed;eip=0x002534; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 50850 push    word ptr [bp+arg_2] ; jumptable 000299DE case 0 ;~ 18ED:2534
cs=0x18ed;eip=0x002537; 	R(CALLF(file_load_binary_nofatal,0));	// 50851 call    file_load_binary_nofatal ;~ 18ED:2537
loc_299ec:
	// 7855 
cs=0x18ed;eip=0x00253c; 	T(ADD(sp, 2));	// 50855 add     sp, 2 ;~ 18ED:253C
cs=0x18ed;eip=0x00253f; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 50856 mov     [bp+var_4], ax ;~ 18ED:253F
cs=0x18ed;eip=0x002542; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 50857 mov     [bp+var_2], dx ;~ 18ED:2542
cs=0x18ed;eip=0x002545; 	R(JMP(def_299de));	// 50858 jmp     short def_299DE ; jumptable 000299DE default case ;~ 18ED:2545
loc_299f8:
	// 7856 
cs=0x18ed;eip=0x002548; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 50864 push    word ptr [bp+arg_2] ; jumptable 000299DE case 1 ;~ 18ED:2548
cs=0x18ed;eip=0x00254b; 	R(CALLF(file_load_binary_nofatal,0));	// 50865 call    file_load_binary_nofatal ;~ 18ED:254B
loc_29a00:
	// 7857 
cs=0x18ed;eip=0x002550; 	T(ADD(sp, 2));	// 50868 add     sp, 2 ;~ 18ED:2550
cs=0x18ed;eip=0x002553; 	T(MOV(sp, bp));	// 50869 mov     sp, bp ;~ 18ED:2553
cs=0x18ed;eip=0x002555; 	X(POP(bp));	// 50870 pop     bp ;~ 18ED:2555
cs=0x18ed;eip=0x002556; 	R(RETF(0));	// 50871 retf ;~ 18ED:2556
loc_29a08:
	// 7858 
cs=0x18ed;eip=0x002558; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 50877 push    word ptr [bp+arg_2] ; jumptable 000299DE case 7 ;~ 18ED:2558
cs=0x18ed;eip=0x00255b; 	R(CALLF(file_decomp_nofatal,0));	// 50878 call    file_decomp_nofatal ;~ 18ED:255B
cs=0x18ed;eip=0x002560; 	R(JMP(loc_29a00));	// 50879 jmp     short loc_29A00 ;~ 18ED:2560
loc_29a12:
	// 7859 
cs=0x18ed;eip=0x002562; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 50884 push    word ptr [bp+arg_2] ; jumptable 000299DE case 2 ;~ 18ED:2562
cs=0x18ed;eip=0x002565; 	R(CALLF(file_load_shape2d_nofatal,0));	// 50885 call    file_load_shape2d_nofatal_thunk ;~ 18ED:2565
cs=0x18ed;eip=0x00256a; 	R(JMP(loc_299ec));	// 50886 jmp     short loc_299EC ;~ 18ED:256A
loc_29a1c:
	// 7860 
cs=0x18ed;eip=0x00256c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 50891 push    word ptr [bp+arg_2] ; jumptable 000299DE case 3 ;~ 18ED:256C
cs=0x18ed;eip=0x00256f; 	R(CALLF(file_load_shape2d_res_nofatal,0));	// 50892 call    file_load_shape2d_res_nofatal_thunk ;~ 18ED:256F
cs=0x18ed;eip=0x002574; 	R(JMP(loc_299ec));	// 50893 jmp     short loc_299EC ;~ 18ED:2574
loc_29a26:
	// 7861 
cs=0x18ed;eip=0x002576; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 50898 push    word ptr [bp+arg_2] ; char * ;~ 18ED:2576
cs=0x18ed;eip=0x002579; 	R(CALLF(load_song_file,0));	// 50899 call    load_song_file ;~ 18ED:2579
cs=0x18ed;eip=0x00257e; 	R(JMP(loc_299ec));	// 50900 jmp     short loc_299EC ;~ 18ED:257E
loc_29a30:
	// 7862 
cs=0x18ed;eip=0x002580; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 50905 push    word ptr [bp+arg_2] ; char * ;~ 18ED:2580
cs=0x18ed;eip=0x002583; 	R(CALLF(load_voice_file,0));	// 50906 call    load_voice_file ;~ 18ED:2583
cs=0x18ed;eip=0x002588; 	R(JMP(loc_299ec));	// 50907 jmp     short loc_299EC ;~ 18ED:2588
loc_29a3a:
	// 7863 
cs=0x18ed;eip=0x00258a; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 50912 push    word ptr [bp+arg_2] ; char * ;~ 18ED:258A
cs=0x18ed;eip=0x00258d; 	R(CALLF(load_sfx_file,0));	// 50913 call    load_sfx_file ;~ 18ED:258D
cs=0x18ed;eip=0x002592; 	R(JMP(loc_299ec));	// 50914 jmp     short loc_299EC ;~ 18ED:2592
loc_29a44:
	// 7864 
cs=0x18ed;eip=0x002594; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 50919 push    word ptr [bp+arg_2] ; jumptable 000299DE case 8 ;~ 18ED:2594
cs=0x18ed;eip=0x002597; 	R(CALLF(file_load_shape2d_nofatal2,0));	// 50920 call    file_load_shape2d_nofatal2 ;~ 18ED:2597
cs=0x18ed;eip=0x00259c; 	R(JMP(loc_299ec));	// 50921 jmp     short loc_299EC ;~ 18ED:259C
def_299de:
	// 7865 
cs=0x18ed;eip=0x0025b0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 50936 mov     ax, [bp+var_4]  ; jumptable 000299DE default case ;~ 18ED:25B0
cs=0x18ed;eip=0x0025b3; 	T(OR(ax, *(dw*)(raddr(ss,bp+var_2))));	// 50937 or      ax, [bp+var_2] ;~ 18ED:25B3
cs=0x18ed;eip=0x0025b6; 	R(JZ(loc_29a72));	// 50938 jz      short loc_29A72 ;~ 18ED:25B6
cs=0x18ed;eip=0x0025b8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 50939 mov     ax, [bp+var_4] ;~ 18ED:25B8
cs=0x18ed;eip=0x0025bb; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 50940 mov     dx, [bp+var_2] ;~ 18ED:25BB
cs=0x18ed;eip=0x0025be; 	T(MOV(sp, bp));	// 50941 mov     sp, bp ;~ 18ED:25BE
cs=0x18ed;eip=0x0025c0; 	X(POP(bp));	// 50942 pop     bp ;~ 18ED:25C0
cs=0x18ed;eip=0x0025c1; 	R(RETF(0));	// 50943 retf ;~ 18ED:25C1
loc_29a72:
	// 7866 
cs=0x18ed;eip=0x0025c2; 	X(PUSH(cs));	// 50947 push    cs ;~ 18ED:25C2
cs=0x18ed;eip=0x0025c3; 	R(CALL(do_dea_textres,0));	// 50948 call    near ptr do_dea_textres ;~ 18ED:25C3
cs=0x18ed;eip=0x0025c6; 	T(CMP(ax, 2));	// 50949 cmp     ax, 2 ;~ 18ED:25C6
cs=0x18ed;eip=0x0025c9; 	R(JZ(loc_29a7e));	// 50950 jz      short loc_29A7E ;~ 18ED:25C9
cs=0x18ed;eip=0x0025cb; 	R(JMP(loc_299d0));	// 50951 jmp     loc_299D0 ;~ 18ED:25CB
loc_29a7e:
	// 7867 
cs=0x18ed;eip=0x0025ce; 	T(SUB(ax, ax));	// 50955 sub     ax, ax ;~ 18ED:25CE
cs=0x18ed;eip=0x0025d0; 	T(CWD);	// 50956 cwd ;~ 18ED:25D0
cs=0x18ed;eip=0x0025d1; 	T(MOV(sp, bp));	// 50957 mov     sp, bp ;~ 18ED:25D1
cs=0x18ed;eip=0x0025d3; 	X(POP(bp));	// 50958 pop     bp ;~ 18ED:25D3
cs=0x18ed;eip=0x0025d4; 	R(RETF(0));	// 50959 retf ;~ 18ED:25D4
sub_29a86:
	// 50969 
#undef var_4
#define var_4 -4
	// 50971 var_4           = word ptr -4 ;~ 18ED:25D6
#undef var_2
#define var_2 -2
	// 50972 var_2           = word ptr -2 ;~ 18ED:25D6
#undef arg_0
#define arg_0 6
	// 50973 arg_0           = word ptr  6 ;~ 18ED:25D6
#undef arg_2
#define arg_2 8
	// 50974 arg_2           = word ptr  8 ;~ 18ED:25D6
#undef arg_4
#define arg_4 0x0A
	// 50975 arg_4           = word ptr  0Ah ;~ 18ED:25D6
#undef arg_6
#define arg_6 0x0C
	// 50976 arg_6           = word ptr  0Ch ;~ 18ED:25D6
ret_18ed_25d6:
	// 7868 
cs=0x18ed;eip=0x0025d6; 	X(PUSH(bp));	// 50978 push    bp ;~ 18ED:25D6
cs=0x18ed;eip=0x0025d7; 	T(MOV(bp, sp));	// 50979 mov     bp, sp ;~ 18ED:25D7
cs=0x18ed;eip=0x0025d9; 	T(SUB(sp, 4));	// 50980 sub     sp, 4 ;~ 18ED:25D9
loc_29a8c:
	// 7869 
cs=0x18ed;eip=0x0025dc; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 50983 mov     ax, [bp+arg_0] ;~ 18ED:25DC
cs=0x18ed;eip=0x0025df; 	T(CMP(ax, 9));	// 50984 cmp     ax, 9 ;~ 18ED:25DF
cs=0x18ed;eip=0x0025e2; 	R(JZ(loc_29a9c));	// 50985 jz      short loc_29A9C ;~ 18ED:25E2
cs=0x18ed;eip=0x0025e4; 	T(CMP(ax, 0x0A));	// 50986 cmp     ax, 0Ah ;~ 18ED:25E4
cs=0x18ed;eip=0x0025e7; 	R(JZ(loc_29ac6));	// 50987 jz      short loc_29AC6 ;~ 18ED:25E7
cs=0x18ed;eip=0x0025e9; 	R(JMP(loc_29ab3));	// 50988 jmp     short loc_29AB3 ;~ 18ED:25E9
loc_29a9c:
	// 7870 
cs=0x18ed;eip=0x0025ec; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 50993 push    [bp+arg_6] ;~ 18ED:25EC
cs=0x18ed;eip=0x0025ef; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 50994 push    [bp+arg_4] ;~ 18ED:25EF
cs=0x18ed;eip=0x0025f2; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 50995 push    [bp+arg_2] ;~ 18ED:25F2
cs=0x18ed;eip=0x0025f5; 	R(CALLF(file_read_nofatal,0));	// 50996 call    file_read_nofatal ;~ 18ED:25F5
cs=0x18ed;eip=0x0025fa; 	T(ADD(sp, 6));	// 50997 add     sp, 6 ;~ 18ED:25FA
cs=0x18ed;eip=0x0025fd; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 50998 mov     [bp+var_4], ax ;~ 18ED:25FD
cs=0x18ed;eip=0x002600; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 50999 mov     [bp+var_2], dx ;~ 18ED:2600
loc_29ab3:
	// 7871 
cs=0x18ed;eip=0x002603; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 51002 mov     ax, [bp+var_4] ;~ 18ED:2603
cs=0x18ed;eip=0x002606; 	T(OR(ax, *(dw*)(raddr(ss,bp+var_2))));	// 51003 or      ax, [bp+var_2] ;~ 18ED:2606
cs=0x18ed;eip=0x002609; 	R(JZ(loc_29adc));	// 51004 jz      short loc_29ADC ;~ 18ED:2609
cs=0x18ed;eip=0x00260b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 51005 mov     ax, [bp+var_4] ;~ 18ED:260B
cs=0x18ed;eip=0x00260e; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 51006 mov     dx, [bp+var_2] ;~ 18ED:260E
cs=0x18ed;eip=0x002611; 	T(MOV(sp, bp));	// 51007 mov     sp, bp ;~ 18ED:2611
cs=0x18ed;eip=0x002613; 	X(POP(bp));	// 51008 pop     bp ;~ 18ED:2613
cs=0x18ed;eip=0x002614; 	R(RETF(0));	// 51009 retf ;~ 18ED:2614
loc_29ac6:
	// 7872 
cs=0x18ed;eip=0x002616; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 51014 push    [bp+arg_6] ;~ 18ED:2616
cs=0x18ed;eip=0x002619; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 51015 push    [bp+arg_4] ;~ 18ED:2619
cs=0x18ed;eip=0x00261c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 51016 push    [bp+arg_2] ;~ 18ED:261C
cs=0x18ed;eip=0x00261f; 	R(CALLF(file_read_nofatal,0));	// 51017 call    file_read_nofatal ;~ 18ED:261F
cs=0x18ed;eip=0x002624; 	T(ADD(sp, 6));	// 51018 add     sp, 6 ;~ 18ED:2624
cs=0x18ed;eip=0x002627; 	T(MOV(sp, bp));	// 51019 mov     sp, bp ;~ 18ED:2627
cs=0x18ed;eip=0x002629; 	X(POP(bp));	// 51020 pop     bp ;~ 18ED:2629
cs=0x18ed;eip=0x00262a; 	R(RETF(0));	// 51021 retf ;~ 18ED:262A
loc_29adc:
	// 7873 
cs=0x18ed;eip=0x00262c; 	X(PUSH(cs));	// 51026 push    cs ;~ 18ED:262C
cs=0x18ed;eip=0x00262d; 	R(CALL(do_dea_textres,0));	// 51027 call    near ptr do_dea_textres ;~ 18ED:262D
cs=0x18ed;eip=0x002630; 	T(CMP(ax, 2));	// 51028 cmp     ax, 2 ;~ 18ED:2630
cs=0x18ed;eip=0x002633; 	R(JNZ(loc_29a8c));	// 51029 jnz     short loc_29A8C ;~ 18ED:2633
cs=0x18ed;eip=0x002635; 	T(SUB(ax, ax));	// 51030 sub     ax, ax ;~ 18ED:2635
cs=0x18ed;eip=0x002637; 	T(CWD);	// 51031 cwd ;~ 18ED:2637
cs=0x18ed;eip=0x002638; 	T(MOV(sp, bp));	// 51032 mov     sp, bp ;~ 18ED:2638
cs=0x18ed;eip=0x00263a; 	X(POP(bp));	// 51033 pop     bp ;~ 18ED:263A
cs=0x18ed;eip=0x00263b; 	R(RETF(0));	// 51034 retf ;~ 18ED:263B
input_push_status:
	// 51041 
cs=0x18ed;eip=0x00263c; 	X(PUSH(si));	// 51043 push    si ;~ 18ED:263C
ret_18ed_263d:
	// 7874 
cs=0x18ed;eip=0x00263d; 	T(MOV(al, byte_3ebd8));	// 51044 mov     al, byte_3EBD8 ;~ 18ED:263D
cs=0x18ed;eip=0x002640; 	T(CBW);	// 51045 cbw ;~ 18ED:2640
cs=0x18ed;eip=0x002641; 	T(MOV(si, ax));	// 51046 mov     si, ax ;~ 18ED:2641
cs=0x18ed;eip=0x002643; 	T(MOV(al, byte_3b8f7));	// 51047 mov     al, byte_3B8F7 ;~ 18ED:2643
cs=0x18ed;eip=0x002646; 	X(MOV(*((&byte_45d0c)+si), al));	// 51048 mov     byte_45D0C[si], al ;~ 18ED:2646
cs=0x18ed;eip=0x00264a; 	T(MOV(al, kbormouse));	// 51049 mov     al, kbormouse ;~ 18ED:264A
cs=0x18ed;eip=0x00264d; 	X(MOV(*((&byte_45d14)+si), al));	// 51050 mov     byte_45D14[si], al ;~ 18ED:264D
cs=0x18ed;eip=0x002651; 	X(INC(byte_3ebd8));	// 51051 inc     byte_3EBD8 ;~ 18ED:2651
cs=0x18ed;eip=0x002655; 	X(POP(si));	// 51052 pop     si ;~ 18ED:2655
cs=0x18ed;eip=0x002656; 	R(RETF(0));	// 51053 retf ;~ 18ED:2656
input_pop_status:
	// 51062 
cs=0x18ed;eip=0x002658; 	X(PUSH(si));	// 51064 push    si ;~ 18ED:2658
ret_18ed_2659:
	// 7875 
cs=0x18ed;eip=0x002659; 	T(CMP(byte_3ebd8, 0));	// 51065 cmp     byte_3EBD8, 0 ;~ 18ED:2659
cs=0x18ed;eip=0x00265e; 	R(JZ(loc_29b30));	// 51066 jz      short loc_29B30 ;~ 18ED:265E
cs=0x18ed;eip=0x002660; 	X(DEC(byte_3ebd8));	// 51067 dec     byte_3EBD8 ;~ 18ED:2660
cs=0x18ed;eip=0x002664; 	T(MOV(al, byte_3ebd8));	// 51068 mov     al, byte_3EBD8 ;~ 18ED:2664
cs=0x18ed;eip=0x002667; 	T(CBW);	// 51069 cbw ;~ 18ED:2667
cs=0x18ed;eip=0x002668; 	T(MOV(si, ax));	// 51070 mov     si, ax ;~ 18ED:2668
cs=0x18ed;eip=0x00266a; 	T(MOV(al, *((&byte_45d0c)+si)));	// 51071 mov     al, byte_45D0C[si] ;~ 18ED:266A
cs=0x18ed;eip=0x00266e; 	X(MOV(byte_3b8f7, al));	// 51072 mov     byte_3B8F7, al ;~ 18ED:266E
cs=0x18ed;eip=0x002671; 	T(MOV(al, *((&byte_45d14)+si)));	// 51073 mov     al, byte_45D14[si] ;~ 18ED:2671
cs=0x18ed;eip=0x002675; 	X(MOV(kbormouse, al));	// 51074 mov     kbormouse, al ;~ 18ED:2675
cs=0x18ed;eip=0x002678; 	T(OR(al, al));	// 51075 or      al, al ;~ 18ED:2678
cs=0x18ed;eip=0x00267a; 	R(JNZ(loc_29b30));	// 51076 jnz     short loc_29B30 ;~ 18ED:267A
cs=0x18ed;eip=0x00267c; 	X(PUSH(cs));	// 51077 push    cs ;~ 18ED:267C
cs=0x18ed;eip=0x00267d; 	R(CALL(mouse_draw_opaque_check,0));	// 51078 call    near ptr mouse_draw_opaque_check ;~ 18ED:267D
loc_29b30:
	// 7876 
cs=0x18ed;eip=0x002680; 	X(POP(si));	// 51082 pop     si ;~ 18ED:2680
cs=0x18ed;eip=0x002681; 	R(RETF(0));	// 51083 retf ;~ 18ED:2681
do_joy_restext:
	// 51091 
#undef var_56
#define var_56 -0x56
	// 51094 var_56          = word ptr -56h ;~ 18ED:2682
#undef var_54
#define var_54 -0x54
	// 51095 var_54          = word ptr -54h ;~ 18ED:2682
#undef var_52
#define var_52 -0x52
	// 51096 var_52          = word ptr -52h ;~ 18ED:2682
#undef var_50
#define var_50 -0x50
	// 51097 var_50          = word ptr -50h ;~ 18ED:2682
#undef var_4e
#define var_4e -0x4E
	// 51098 var_4E          = word ptr -4Eh ;~ 18ED:2682
#undef var_4c
#define var_4c -0x4C
	// 51099 var_4C          = word ptr -4Ch ;~ 18ED:2682
#undef var_4a
#define var_4a -0x4A
	// 51100 var_4A          = word ptr -4Ah ;~ 18ED:2682
#undef var_48
#define var_48 -0x48
	// 51101 var_48          = word ptr -48h ;~ 18ED:2682
#undef var_46
#define var_46 -0x46
	// 51102 var_46          = word ptr -46h ;~ 18ED:2682
#undef var_44
#define var_44 -0x44
	// 51103 var_44          = word ptr -44h ;~ 18ED:2682
#undef var_42
#define var_42 -0x42
	// 51104 var_42          = word ptr -42h ;~ 18ED:2682
#undef var_40
#define var_40 -0x40
	// 51105 var_40          = word ptr -40h ;~ 18ED:2682
#undef var_3e
#define var_3e -0x3E
	// 51106 var_3E          = word ptr -3Eh ;~ 18ED:2682
#undef var_3c
#define var_3c -0x3C
	// 51107 var_3C          = word ptr -3Ch ;~ 18ED:2682
#undef var_3a
#define var_3a -0x3A
	// 51108 var_3A          = word ptr -3Ah ;~ 18ED:2682
#undef var_38
#define var_38 -0x38
	// 51109 var_38          = word ptr -38h ;~ 18ED:2682
#undef var_36
#define var_36 -0x36
	// 51110 var_36          = word ptr -36h ;~ 18ED:2682
#undef var_34
#define var_34 -0x34
	// 51111 var_34          = word ptr -34h ;~ 18ED:2682
#undef var_32
#define var_32 -0x32
	// 51112 var_32          = word ptr -32h ;~ 18ED:2682
#undef var_30
#define var_30 -0x30
	// 51113 var_30          = word ptr -30h ;~ 18ED:2682
#undef var_2e
#define var_2e -0x2E
	// 51114 var_2E          = word ptr -2Eh ;~ 18ED:2682
#undef var_2c
#define var_2c -0x2C
	// 51115 var_2C          = word ptr -2Ch ;~ 18ED:2682
#undef var_2a
#define var_2a -0x2A
	// 51116 var_2A          = word ptr -2Ah ;~ 18ED:2682
#undef var_28
#define var_28 -0x28
	// 51117 var_28          = word ptr -28h ;~ 18ED:2682
#undef var_26
#define var_26 -0x26
	// 51118 var_26          = word ptr -26h ;~ 18ED:2682
#undef var_24
#define var_24 -0x24
	// 51119 var_24          = word ptr -24h ;~ 18ED:2682
#undef var_22
#define var_22 -0x22
	// 51120 var_22          = word ptr -22h ;~ 18ED:2682
#undef var_1c
#define var_1c -0x1C
	// 51121 var_1C          = word ptr -1Ch ;~ 18ED:2682
#undef var_18
#define var_18 -0x18
	// 51122 var_18          = word ptr -18h ;~ 18ED:2682
#undef var_14
#define var_14 -0x14
	// 51123 var_14          = word ptr -14h ;~ 18ED:2682
#undef var_12
#define var_12 -0x12
	// 51124 var_12          = word ptr -12h ;~ 18ED:2682
#undef var_c
#define var_c -0x0C
	// 51125 var_C           = word ptr -0Ch ;~ 18ED:2682
#undef var_a
#define var_a -0x0A
	// 51126 var_A           = byte ptr -0Ah ;~ 18ED:2682
ret_18ed_2682:
	// 7877 
cs=0x18ed;eip=0x002682; 	X(PUSH(bp));	// 51128 push    bp ;~ 18ED:2682
cs=0x18ed;eip=0x002683; 	T(MOV(bp, sp));	// 51129 mov     bp, sp ;~ 18ED:2683
cs=0x18ed;eip=0x002685; 	T(SUB(sp, 0x56));	// 51130 sub     sp, 56h ;~ 18ED:2685
cs=0x18ed;eip=0x002688; 	X(PUSH(di));	// 51131 push    di ;~ 18ED:2688
cs=0x18ed;eip=0x002689; 	X(PUSH(si));	// 51132 push    si ;~ 18ED:2689
cs=0x18ed;eip=0x00268a; 	X(PUSH(cs));	// 51133 push    cs ;~ 18ED:268A
cs=0x18ed;eip=0x00268b; 	R(CALL(input_push_status,0));	// 51134 call    near ptr input_push_status ;~ 18ED:268B
cs=0x18ed;eip=0x00268e; 	X(MOV(word_3f88e, 1));	// 51135 mov     word_3F88E, 1 ;~ 18ED:268E
cs=0x18ed;eip=0x002694; 	R(CALLF(audio_unk,0));	// 51136 call    audio_unk ;~ 18ED:2694
cs=0x18ed;eip=0x002699; 	T(SUB(ax, ax));	// 51137 sub     ax, ax ;~ 18ED:2699
cs=0x18ed;eip=0x00269b; 	X(PUSH(ax));	// 51138 push    ax ;~ 18ED:269B
cs=0x18ed;eip=0x00269c; 	T(ax = bp+var_2e);	// 51139 lea     ax, [bp+var_2E] ;~ 18ED:269C
cs=0x18ed;eip=0x00269f; 	X(PUSH(ax));	// 51140 push    ax ;~ 18ED:269F
cs=0x18ed;eip=0x0026a0; 	X(PUSH(dialogarg2));	// 51141 push    dialogarg2 ;~ 18ED:26A0
cs=0x18ed;eip=0x0026a4; 	T(MOV(ax, 0x0FFFF));	// 51142 mov     ax, 0FFFFh ;~ 18ED:26A4
cs=0x18ed;eip=0x0026a7; 	X(PUSH(ax));	// 51143 push    ax ;~ 18ED:26A7
cs=0x18ed;eip=0x0026a8; 	X(PUSH(ax));	// 51144 push    ax ;~ 18ED:26A8
cs=0x18ed;eip=0x0026a9; 	T(MOV(ax, offset(dseg,ajoy)));	// 51145 mov     ax, offset aJoy ; "joy" ;~ 18ED:26A9
cs=0x18ed;eip=0x0026ac; 	X(PUSH(ax));	// 51146 push    ax ;~ 18ED:26AC
cs=0x18ed;eip=0x0026ad; 	X(PUSH(word_44cee));	// 51147 push    word_44CEE ;~ 18ED:26AD
cs=0x18ed;eip=0x0026b1; 	X(PUSH(mainresptr));	// 51148 push    mainresptr ;~ 18ED:26B1
cs=0x18ed;eip=0x0026b5; 	X(PUSH(cs));	// 51149 push    cs ;~ 18ED:26B5
cs=0x18ed;eip=0x0026b6; 	R(CALL(locate_text_res,0));	// 51150 call    near ptr locate_text_res ;~ 18ED:26B6
cs=0x18ed;eip=0x0026b9; 	T(ADD(sp, 6));	// 51151 add     sp, 6 ;~ 18ED:26B9
cs=0x18ed;eip=0x0026bc; 	X(PUSH(dx));	// 51152 push    dx ;~ 18ED:26BC
cs=0x18ed;eip=0x0026bd; 	X(PUSH(ax));	// 51153 push    ax ;~ 18ED:26BD
cs=0x18ed;eip=0x0026be; 	T(MOV(ax, 1));	// 51154 mov     ax, 1 ;~ 18ED:26BE
cs=0x18ed;eip=0x0026c1; 	X(PUSH(ax));	// 51155 push    ax ;~ 18ED:26C1
cs=0x18ed;eip=0x0026c2; 	T(MOV(ax, 3));	// 51156 mov     ax, 3 ;~ 18ED:26C2
cs=0x18ed;eip=0x0026c5; 	X(PUSH(ax));	// 51157 push    ax ;~ 18ED:26C5
cs=0x18ed;eip=0x0026c6; 	X(PUSH(cs));	// 51158 push    cs ;~ 18ED:26C6
cs=0x18ed;eip=0x0026c7; 	R(CALL(show_dialog,0));	// 51159 call    near ptr show_dialog ;~ 18ED:26C7
cs=0x18ed;eip=0x0026ca; 	T(ADD(sp, 0x12));	// 51160 add     sp, 12h ;~ 18ED:26CA
cs=0x18ed;eip=0x0026cd; 	T(OR(ax, ax));	// 51161 or      ax, ax ;~ 18ED:26CD
cs=0x18ed;eip=0x0026cf; 	R(JG(loc_29b84));	// 51162 jg      short loc_29B84 ;~ 18ED:26CF
cs=0x18ed;eip=0x0026d1; 	R(JMP(loc_29d76));	// 51163 jmp     loc_29D76 ;~ 18ED:26D1
loc_29b84:
	// 7878 
cs=0x18ed;eip=0x0026d4; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 0));	// 51167 mov     [bp+var_C], 0 ;~ 18ED:26D4
loc_29b89:
	// 7879 
cs=0x18ed;eip=0x0026d9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_c))));	// 51170 mov     bx, [bp+var_C] ;~ 18ED:26D9
cs=0x18ed;eip=0x0026dc; 	T(ADD(bx, bp));	// 51171 add     bx, bp ;~ 18ED:26DC
cs=0x18ed;eip=0x0026de; 	X(MOV(*(raddr(ds,bx-0x0A)), 0));	// 51172 mov     byte ptr [bx-0Ah], 0 ;~ 18ED:26DE
cs=0x18ed;eip=0x0026e2; 	X(INC(*(dw*)(raddr(ss,bp+var_c))));	// 51173 inc     [bp+var_C] ;~ 18ED:26E2
cs=0x18ed;eip=0x0026e5; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), 9));	// 51174 cmp     [bp+var_C], 9 ;~ 18ED:26E5
cs=0x18ed;eip=0x0026e9; 	R(JL(loc_29b89));	// 51175 jl      short loc_29B89 ;~ 18ED:26E9
cs=0x18ed;eip=0x0026eb; 	X(MOV(byte_3fe00, 1));	// 51176 mov     byte_3FE00, 1 ;~ 18ED:26EB
cs=0x18ed;eip=0x0026f0; 	X(PUSH(cs));	// 51177 push    cs ;~ 18ED:26F0
cs=0x18ed;eip=0x0026f1; 	R(CALL(mouse_draw_opaque_check,0));	// 51178 call    near ptr mouse_draw_opaque_check ;~ 18ED:26F1
cs=0x18ed;eip=0x0026f4; 	X(PUSH(dialogarg2));	// 51179 push    dialogarg2 ;~ 18ED:26F4
cs=0x18ed;eip=0x0026f8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 51180 mov     ax, [bp+var_14] ;~ 18ED:26F8
cs=0x18ed;eip=0x0026fb; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_28))));	// 51181 sub     ax, [bp+var_28] ;~ 18ED:26FB
cs=0x18ed;eip=0x0026fe; 	T(SUB(ax, 8));	// 51182 sub     ax, 8 ;~ 18ED:26FE
cs=0x18ed;eip=0x002701; 	X(PUSH(ax));	// 51183 push    ax ;~ 18ED:2701
cs=0x18ed;eip=0x002702; 	T(MOV(ax, 1));	// 51184 mov     ax, 1 ;~ 18ED:2702
cs=0x18ed;eip=0x002705; 	X(PUSH(ax));	// 51185 push    ax ;~ 18ED:2705
cs=0x18ed;eip=0x002706; 	X(PUSH(*(dw*)(raddr(ss,bp+var_28))));	// 51186 push    [bp+var_28] ;~ 18ED:2706
cs=0x18ed;eip=0x002709; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2a))));	// 51187 mov     ax, [bp+var_2A] ;~ 18ED:2709
cs=0x18ed;eip=0x00270c; 	T(SUB(ax, 4));	// 51188 sub     ax, 4 ;~ 18ED:270C
cs=0x18ed;eip=0x00270f; 	X(PUSH(ax));	// 51189 push    ax ;~ 18ED:270F
cs=0x18ed;eip=0x002710; 	R(CALLF(sprite_1_unk,0));	// 51190 call    sprite_1_unk ;~ 18ED:2710
cs=0x18ed;eip=0x002715; 	T(ADD(sp, 0x0A));	// 51191 add     sp, 0Ah ;~ 18ED:2715
cs=0x18ed;eip=0x002718; 	X(PUSH(dialogarg2));	// 51192 push    dialogarg2 ;~ 18ED:2718
cs=0x18ed;eip=0x00271c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 51193 mov     ax, [bp+var_14] ;~ 18ED:271C
cs=0x18ed;eip=0x00271f; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_28))));	// 51194 sub     ax, [bp+var_28] ;~ 18ED:271F
cs=0x18ed;eip=0x002722; 	T(SUB(ax, 8));	// 51195 sub     ax, 8 ;~ 18ED:2722
cs=0x18ed;eip=0x002725; 	X(PUSH(ax));	// 51196 push    ax ;~ 18ED:2725
cs=0x18ed;eip=0x002726; 	T(MOV(ax, 1));	// 51197 mov     ax, 1 ;~ 18ED:2726
cs=0x18ed;eip=0x002729; 	X(PUSH(ax));	// 51198 push    ax ;~ 18ED:2729
cs=0x18ed;eip=0x00272a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_24))));	// 51199 push    [bp+var_24] ;~ 18ED:272A
cs=0x18ed;eip=0x00272d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_26))));	// 51200 mov     ax, [bp+var_26] ;~ 18ED:272D
cs=0x18ed;eip=0x002730; 	T(SUB(ax, 4));	// 51201 sub     ax, 4 ;~ 18ED:2730
cs=0x18ed;eip=0x002733; 	X(PUSH(ax));	// 51202 push    ax ;~ 18ED:2733
cs=0x18ed;eip=0x002734; 	R(CALLF(sprite_1_unk,0));	// 51203 call    sprite_1_unk ;~ 18ED:2734
cs=0x18ed;eip=0x002739; 	T(ADD(sp, 0x0A));	// 51204 add     sp, 0Ah ;~ 18ED:2739
cs=0x18ed;eip=0x00273c; 	X(PUSH(dialogarg2));	// 51205 push    dialogarg2 ;~ 18ED:273C
cs=0x18ed;eip=0x002740; 	T(MOV(ax, 1));	// 51206 mov     ax, 1 ;~ 18ED:2740
cs=0x18ed;eip=0x002743; 	X(PUSH(ax));	// 51207 push    ax ;~ 18ED:2743
cs=0x18ed;eip=0x002744; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_22))));	// 51208 mov     ax, [bp+var_22] ;~ 18ED:2744
cs=0x18ed;eip=0x002747; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_2e))));	// 51209 sub     ax, [bp+var_2E] ;~ 18ED:2747
cs=0x18ed;eip=0x00274a; 	X(PUSH(ax));	// 51210 push    ax ;~ 18ED:274A
cs=0x18ed;eip=0x00274b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 51211 mov     ax, [bp+var_1C] ;~ 18ED:274B
cs=0x18ed;eip=0x00274e; 	T(SUB(ax, 4));	// 51212 sub     ax, 4 ;~ 18ED:274E
cs=0x18ed;eip=0x002751; 	X(PUSH(ax));	// 51213 push    ax ;~ 18ED:2751
cs=0x18ed;eip=0x002752; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2e))));	// 51214 push    [bp+var_2E] ;~ 18ED:2752
cs=0x18ed;eip=0x002755; 	R(CALLF(sprite_1_unk,0));	// 51215 call    sprite_1_unk ;~ 18ED:2755
cs=0x18ed;eip=0x00275a; 	T(ADD(sp, 0x0A));	// 51216 add     sp, 0Ah ;~ 18ED:275A
cs=0x18ed;eip=0x00275d; 	X(PUSH(dialogarg2));	// 51217 push    dialogarg2 ;~ 18ED:275D
cs=0x18ed;eip=0x002761; 	T(MOV(ax, 1));	// 51218 mov     ax, 1 ;~ 18ED:2761
cs=0x18ed;eip=0x002764; 	X(PUSH(ax));	// 51219 push    ax ;~ 18ED:2764
cs=0x18ed;eip=0x002765; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_22))));	// 51220 mov     ax, [bp+var_22] ;~ 18ED:2765
cs=0x18ed;eip=0x002768; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_2e))));	// 51221 sub     ax, [bp+var_2E] ;~ 18ED:2768
cs=0x18ed;eip=0x00276b; 	X(PUSH(ax));	// 51222 push    ax ;~ 18ED:276B
cs=0x18ed;eip=0x00276c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 51223 mov     ax, [bp+var_18] ;~ 18ED:276C
cs=0x18ed;eip=0x00276f; 	T(SUB(ax, 4));	// 51224 sub     ax, 4 ;~ 18ED:276F
cs=0x18ed;eip=0x002772; 	X(PUSH(ax));	// 51225 push    ax ;~ 18ED:2772
cs=0x18ed;eip=0x002773; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2e))));	// 51226 push    [bp+var_2E] ;~ 18ED:2773
cs=0x18ed;eip=0x002776; 	R(CALLF(sprite_1_unk,0));	// 51227 call    sprite_1_unk ;~ 18ED:2776
cs=0x18ed;eip=0x00277b; 	T(ADD(sp, 0x0A));	// 51228 add     sp, 0Ah ;~ 18ED:277B
cs=0x18ed;eip=0x00277e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2a))));	// 51229 mov     ax, [bp+var_2A] ;~ 18ED:277E
cs=0x18ed;eip=0x002781; 	X(MOV(*(dw*)(raddr(ss,bp+var_40)), ax));	// 51230 mov     [bp+var_40], ax ;~ 18ED:2781
cs=0x18ed;eip=0x002784; 	X(MOV(*(dw*)(raddr(ss,bp+var_3e)), ax));	// 51231 mov     [bp+var_3E], ax ;~ 18ED:2784
cs=0x18ed;eip=0x002787; 	X(MOV(*(dw*)(raddr(ss,bp+var_36)), ax));	// 51232 mov     [bp+var_36], ax ;~ 18ED:2787
cs=0x18ed;eip=0x00278a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_26))));	// 51233 mov     ax, [bp+var_26] ;~ 18ED:278A
cs=0x18ed;eip=0x00278d; 	X(MOV(*(dw*)(raddr(ss,bp+var_3c)), ax));	// 51234 mov     [bp+var_3C], ax ;~ 18ED:278D
cs=0x18ed;eip=0x002790; 	X(MOV(*(dw*)(raddr(ss,bp+var_3a)), ax));	// 51235 mov     [bp+var_3A], ax ;~ 18ED:2790
cs=0x18ed;eip=0x002793; 	X(MOV(*(dw*)(raddr(ss,bp+var_38)), ax));	// 51236 mov     [bp+var_38], ax ;~ 18ED:2793
cs=0x18ed;eip=0x002796; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2e))));	// 51237 mov     ax, [bp+var_2E] ;~ 18ED:2796
cs=0x18ed;eip=0x002799; 	X(MOV(*(dw*)(raddr(ss,bp+var_34)), ax));	// 51238 mov     [bp+var_34], ax ;~ 18ED:2799
cs=0x18ed;eip=0x00279c; 	X(MOV(*(dw*)(raddr(ss,bp+var_32)), ax));	// 51239 mov     [bp+var_32], ax ;~ 18ED:279C
cs=0x18ed;eip=0x00279f; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), ax));	// 51240 mov     [bp+var_30], ax ;~ 18ED:279F
cs=0x18ed;eip=0x0027a2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 51241 mov     ax, [bp+var_1C] ;~ 18ED:27A2
cs=0x18ed;eip=0x0027a5; 	X(MOV(*(dw*)(raddr(ss,bp+var_54)), ax));	// 51242 mov     [bp+var_54], ax ;~ 18ED:27A5
cs=0x18ed;eip=0x0027a8; 	X(MOV(*(dw*)(raddr(ss,bp+var_4e)), ax));	// 51243 mov     [bp+var_4E], ax ;~ 18ED:27A8
cs=0x18ed;eip=0x0027ab; 	X(MOV(*(dw*)(raddr(ss,bp+var_46)), ax));	// 51244 mov     [bp+var_46], ax ;~ 18ED:27AB
cs=0x18ed;eip=0x0027ae; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 51245 mov     ax, [bp+var_28] ;~ 18ED:27AE
cs=0x18ed;eip=0x0027b1; 	X(MOV(*(dw*)(raddr(ss,bp+var_52)), ax));	// 51246 mov     [bp+var_52], ax ;~ 18ED:27B1
cs=0x18ed;eip=0x0027b4; 	X(MOV(*(dw*)(raddr(ss,bp+var_50)), ax));	// 51247 mov     [bp+var_50], ax ;~ 18ED:27B4
cs=0x18ed;eip=0x0027b7; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), ax));	// 51248 mov     [bp+var_44], ax ;~ 18ED:27B7
cs=0x18ed;eip=0x0027ba; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 51249 mov     ax, [bp+var_18] ;~ 18ED:27BA
cs=0x18ed;eip=0x0027bd; 	X(MOV(*(dw*)(raddr(ss,bp+var_4c)), ax));	// 51250 mov     [bp+var_4C], ax ;~ 18ED:27BD
cs=0x18ed;eip=0x0027c0; 	X(MOV(*(dw*)(raddr(ss,bp+var_4a)), ax));	// 51251 mov     [bp+var_4A], ax ;~ 18ED:27C0
cs=0x18ed;eip=0x0027c3; 	X(MOV(*(dw*)(raddr(ss,bp+var_48)), ax));	// 51252 mov     [bp+var_48], ax ;~ 18ED:27C3
cs=0x18ed;eip=0x0027c6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2a))));	// 51253 mov     ax, [bp+var_2A] ;~ 18ED:27C6
cs=0x18ed;eip=0x0027c9; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_2e))));	// 51254 sub     ax, [bp+var_2E] ;~ 18ED:27C9
cs=0x18ed;eip=0x0027cc; 	T(SUB(ax, 8));	// 51255 sub     ax, 8 ;~ 18ED:27CC
cs=0x18ed;eip=0x0027cf; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 51256 mov     [bp+var_12], ax ;~ 18ED:27CF
cs=0x18ed;eip=0x0027d2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 51257 mov     ax, [bp+var_1C] ;~ 18ED:27D2
cs=0x18ed;eip=0x0027d5; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 51258 sub     ax, [bp+var_2C] ;~ 18ED:27D5
cs=0x18ed;eip=0x0027d8; 	T(SUB(ax, 8));	// 51259 sub     ax, 8 ;~ 18ED:27D8
cs=0x18ed;eip=0x0027db; 	X(MOV(*(dw*)(raddr(ss,bp+var_42)), ax));	// 51260 mov     [bp+var_42], ax ;~ 18ED:27DB
cs=0x18ed;eip=0x0027de; 	T(MOV(si, 0x0FFFF));	// 51261 mov     si, 0FFFFh ;~ 18ED:27DE
cs=0x18ed;eip=0x0027e1; 	R(CALLF(sub_307b4,0));	// 51262 call    sub_307B4 ;~ 18ED:27E1
loc_29c96:
	// 7880 
cs=0x18ed;eip=0x0027e6; 	R(CALLF(kb_read_char,0));	// 51266 call    kb_read_char ;~ 18ED:27E6
cs=0x18ed;eip=0x0027eb; 	T(OR(ax, ax));	// 51267 or      ax, ax ;~ 18ED:27EB
cs=0x18ed;eip=0x0027ed; 	R(JZ(loc_29ca8));	// 51268 jz      short loc_29CA8 ;~ 18ED:27ED
loc_29c9f:
	// 7881 
cs=0x18ed;eip=0x0027ef; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 0));	// 51271 mov     [bp+var_C], 0 ;~ 18ED:27EF
cs=0x18ed;eip=0x0027f4; 	R(JMP(loc_29d25));	// 51272 jmp     short loc_29D25 ;~ 18ED:27F4
loc_29ca8:
	// 7882 
cs=0x18ed;eip=0x0027f8; 	R(CALLF(get_joy_flags,0));	// 51278 call    get_joy_flags ;~ 18ED:27F8
cs=0x18ed;eip=0x0027fd; 	T(MOV(di, ax));	// 51279 mov     di, ax ;~ 18ED:27FD
cs=0x18ed;eip=0x0027ff; 	T(TEST(di, 0x30));	// 51280 test    di, 30h ;~ 18ED:27FF
cs=0x18ed;eip=0x002803; 	R(JNZ(loc_29c9f));	// 51281 jnz     short loc_29C9F ;~ 18ED:2803
cs=0x18ed;eip=0x002805; 	X(PUSH(di));	// 51282 push    di ;~ 18ED:2805
cs=0x18ed;eip=0x002806; 	R(CALLF(sub_307d2,0));	// 51283 call    sub_307D2 ;~ 18ED:2806
cs=0x18ed;eip=0x00280b; 	T(ADD(sp, 2));	// 51284 add     sp, 2 ;~ 18ED:280B
cs=0x18ed;eip=0x00280e; 	T(MOV(di, ax));	// 51285 mov     di, ax ;~ 18ED:280E
cs=0x18ed;eip=0x002810; 	T(CMP(di, si));	// 51286 cmp     di, si ;~ 18ED:2810
cs=0x18ed;eip=0x002812; 	R(JZ(loc_29c96));	// 51287 jz      short loc_29C96 ;~ 18ED:2812
cs=0x18ed;eip=0x002814; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 0));	// 51288 mov     [bp+var_C], 0 ;~ 18ED:2814
loc_29cc9:
	// 7883 
cs=0x18ed;eip=0x002819; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 51291 mov     ax, [bp+var_C] ;~ 18ED:2819
cs=0x18ed;eip=0x00281c; 	T(SHL(ax, 1));	// 51292 shl     ax, 1 ;~ 18ED:281C
cs=0x18ed;eip=0x00281e; 	T(ADD(ax, bp));	// 51293 add     ax, bp ;~ 18ED:281E
cs=0x18ed;eip=0x002820; 	X(MOV(*(dw*)(raddr(ss,bp+var_56)), ax));	// 51294 mov     [bp+var_56], ax ;~ 18ED:2820
cs=0x18ed;eip=0x002823; 	X(PUSH(word_3eb90));	// 51295 push    word_3EB90 ;~ 18ED:2823
cs=0x18ed;eip=0x002827; 	X(PUSH(*(dw*)(raddr(ss,bp+var_42))));	// 51296 push    [bp+var_42] ;~ 18ED:2827
cs=0x18ed;eip=0x00282a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 51297 push    [bp+var_12] ;~ 18ED:282A
cs=0x18ed;eip=0x00282d; 	T(MOV(bx, ax));	// 51298 mov     bx, ax ;~ 18ED:282D
cs=0x18ed;eip=0x00282f; 	X(PUSH(*(dw*)(raddr(ds,bx-0x54))));	// 51299 push    word ptr [bx-54h] ;~ 18ED:282F
cs=0x18ed;eip=0x002832; 	X(PUSH(*(dw*)(raddr(ds,bx-0x40))));	// 51300 push    word ptr [bx-40h] ;~ 18ED:2832
cs=0x18ed;eip=0x002835; 	R(CALLF(sprite_1_unk,0));	// 51301 call    sprite_1_unk ;~ 18ED:2835
cs=0x18ed;eip=0x00283a; 	T(ADD(sp, 0x0A));	// 51302 add     sp, 0Ah ;~ 18ED:283A
cs=0x18ed;eip=0x00283d; 	X(INC(*(dw*)(raddr(ss,bp+var_c))));	// 51303 inc     [bp+var_C] ;~ 18ED:283D
cs=0x18ed;eip=0x002840; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), 9));	// 51304 cmp     [bp+var_C], 9 ;~ 18ED:2840
cs=0x18ed;eip=0x002844; 	R(JL(loc_29cc9));	// 51305 jl      short loc_29CC9 ;~ 18ED:2844
cs=0x18ed;eip=0x002846; 	T(MOV(ax, di));	// 51306 mov     ax, di ;~ 18ED:2846
cs=0x18ed;eip=0x002848; 	T(SHL(ax, 1));	// 51307 shl     ax, 1 ;~ 18ED:2848
cs=0x18ed;eip=0x00284a; 	T(ADD(ax, bp));	// 51308 add     ax, bp ;~ 18ED:284A
cs=0x18ed;eip=0x00284c; 	X(MOV(*(dw*)(raddr(ss,bp+var_56)), ax));	// 51309 mov     [bp+var_56], ax ;~ 18ED:284C
cs=0x18ed;eip=0x00284f; 	X(PUSH(dialog_fnt_colour));	// 51310 push    dialog_fnt_colour ;~ 18ED:284F
cs=0x18ed;eip=0x002853; 	X(PUSH(*(dw*)(raddr(ss,bp+var_42))));	// 51311 push    [bp+var_42] ;~ 18ED:2853
cs=0x18ed;eip=0x002856; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 51312 push    [bp+var_12] ;~ 18ED:2856
cs=0x18ed;eip=0x002859; 	T(MOV(bx, ax));	// 51313 mov     bx, ax ;~ 18ED:2859
cs=0x18ed;eip=0x00285b; 	X(PUSH(*(dw*)(raddr(ds,bx-0x54))));	// 51314 push    word ptr [bx-54h] ;~ 18ED:285B
cs=0x18ed;eip=0x00285e; 	X(PUSH(*(dw*)(raddr(ds,bx-0x40))));	// 51315 push    word ptr [bx-40h] ;~ 18ED:285E
cs=0x18ed;eip=0x002861; 	R(CALLF(sprite_1_unk,0));	// 51316 call    sprite_1_unk ;~ 18ED:2861
cs=0x18ed;eip=0x002866; 	T(ADD(sp, 0x0A));	// 51317 add     sp, 0Ah ;~ 18ED:2866
cs=0x18ed;eip=0x002869; 	T(MOV(si, di));	// 51318 mov     si, di ;~ 18ED:2869
cs=0x18ed;eip=0x00286b; 	X(MOV(*(raddr(ss,bp+di+var_a)), 1));	// 51319 mov     [bp+di+var_A], 1 ;~ 18ED:286B
cs=0x18ed;eip=0x00286f; 	R(JMP(loc_29c96));	// 51320 jmp     loc_29C96 ;~ 18ED:286F
loc_29d22:
	// 7884 
cs=0x18ed;eip=0x002872; 	X(INC(*(dw*)(raddr(ss,bp+var_c))));	// 51324 inc     [bp+var_C] ;~ 18ED:2872
loc_29d25:
	// 7885 
cs=0x18ed;eip=0x002875; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), 9));	// 51327 cmp     [bp+var_C], 9 ;~ 18ED:2875
cs=0x18ed;eip=0x002879; 	R(JGE(loc_29d3a));	// 51328 jge     short loc_29D3A ;~ 18ED:2879
cs=0x18ed;eip=0x00287b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_c))));	// 51329 mov     bx, [bp+var_C] ;~ 18ED:287B
cs=0x18ed;eip=0x00287e; 	T(ADD(bx, bp));	// 51330 add     bx, bp ;~ 18ED:287E
cs=0x18ed;eip=0x002880; 	T(MOV(al, *(raddr(ds,bx-0x0A))));	// 51331 mov     al, [bx-0Ah] ;~ 18ED:2880
cs=0x18ed;eip=0x002883; 	X(AND(byte_3fe00, al));	// 51332 and     byte_3FE00, al ;~ 18ED:2883
cs=0x18ed;eip=0x002887; 	R(JMP(loc_29d22));	// 51333 jmp     short loc_29D22 ;~ 18ED:2887
loc_29d3a:
	// 7886 
cs=0x18ed;eip=0x00288a; 	X(PUSH(cs));	// 51338 push    cs ;~ 18ED:288A
cs=0x18ed;eip=0x00288b; 	R(CALL(sub_275c6,0));	// 51339 call    near ptr sub_275C6 ;~ 18ED:288B
cs=0x18ed;eip=0x00288e; 	T(CMP(byte_3fe00, 0));	// 51340 cmp     byte_3FE00, 0 ;~ 18ED:288E
cs=0x18ed;eip=0x002893; 	R(JNZ(loc_29d7b));	// 51341 jnz     short loc_29D7B ;~ 18ED:2893
cs=0x18ed;eip=0x002895; 	T(SUB(ax, ax));	// 51342 sub     ax, ax ;~ 18ED:2895
cs=0x18ed;eip=0x002897; 	X(PUSH(ax));	// 51343 push    ax ;~ 18ED:2897
cs=0x18ed;eip=0x002898; 	X(PUSH(ax));	// 51344 push    ax ;~ 18ED:2898
cs=0x18ed;eip=0x002899; 	X(PUSH(dialogarg2));	// 51345 push    dialogarg2 ;~ 18ED:2899
cs=0x18ed;eip=0x00289d; 	T(MOV(ax, 0x0FFFF));	// 51346 mov     ax, 0FFFFh ;~ 18ED:289D
cs=0x18ed;eip=0x0028a0; 	X(PUSH(ax));	// 51347 push    ax ;~ 18ED:28A0
cs=0x18ed;eip=0x0028a1; 	X(PUSH(ax));	// 51348 push    ax ;~ 18ED:28A1
cs=0x18ed;eip=0x0028a2; 	T(MOV(ax, offset(dseg,ajox)));	// 51349 mov     ax, offset aJox ; "jox" ;~ 18ED:28A2
cs=0x18ed;eip=0x0028a5; 	X(PUSH(ax));	// 51350 push    ax ;~ 18ED:28A5
cs=0x18ed;eip=0x0028a6; 	X(PUSH(word_44cee));	// 51351 push    word_44CEE ;~ 18ED:28A6
cs=0x18ed;eip=0x0028aa; 	X(PUSH(mainresptr));	// 51352 push    mainresptr ;~ 18ED:28AA
cs=0x18ed;eip=0x0028ae; 	X(PUSH(cs));	// 51353 push    cs ;~ 18ED:28AE
cs=0x18ed;eip=0x0028af; 	R(CALL(locate_text_res,0));	// 51354 call    near ptr locate_text_res ;~ 18ED:28AF
cs=0x18ed;eip=0x0028b2; 	T(ADD(sp, 6));	// 51355 add     sp, 6 ;~ 18ED:28B2
cs=0x18ed;eip=0x0028b5; 	X(PUSH(dx));	// 51356 push    dx ;~ 18ED:28B5
cs=0x18ed;eip=0x0028b6; 	X(PUSH(ax));	// 51357 push    ax ;~ 18ED:28B6
cs=0x18ed;eip=0x0028b7; 	T(MOV(ax, 1));	// 51358 mov     ax, 1 ;~ 18ED:28B7
cs=0x18ed;eip=0x0028ba; 	X(PUSH(ax));	// 51359 push    ax ;~ 18ED:28BA
cs=0x18ed;eip=0x0028bb; 	X(PUSH(ax));	// 51360 push    ax ;~ 18ED:28BB
cs=0x18ed;eip=0x0028bc; 	X(PUSH(cs));	// 51361 push    cs ;~ 18ED:28BC
cs=0x18ed;eip=0x0028bd; 	R(CALL(show_dialog,0));	// 51362 call    near ptr show_dialog ;~ 18ED:28BD
cs=0x18ed;eip=0x0028c0; 	T(ADD(sp, 0x12));	// 51363 add     sp, 12h ;~ 18ED:28C0
cs=0x18ed;eip=0x0028c3; 	R(JMP(loc_29d7b));	// 51364 jmp     short loc_29D7B ;~ 18ED:28C3
loc_29d76:
	// 7887 
cs=0x18ed;eip=0x0028c6; 	X(MOV(byte_3fe00, 0));	// 51369 mov     byte_3FE00, 0 ;~ 18ED:28C6
loc_29d7b:
	// 7888 
cs=0x18ed;eip=0x0028cb; 	R(CALLF(kb_check,0));	// 51373 call    kb_check ;~ 18ED:28CB
cs=0x18ed;eip=0x0028d0; 	X(MOV(byte_3b8f2, 0));	// 51374 mov     byte_3B8F2, 0 ;~ 18ED:28D0
cs=0x18ed;eip=0x0028d5; 	R(CALLF(sub_372f4,0));	// 51375 call    sub_372F4 ;~ 18ED:28D5
cs=0x18ed;eip=0x0028da; 	X(MOV(word_3f88e, 0));	// 51376 mov     word_3F88E, 0 ;~ 18ED:28DA
cs=0x18ed;eip=0x0028e0; 	X(PUSH(cs));	// 51377 push    cs ;~ 18ED:28E0
cs=0x18ed;eip=0x0028e1; 	R(CALL(input_pop_status,0));	// 51378 call    near ptr input_pop_status ;~ 18ED:28E1
cs=0x18ed;eip=0x0028e4; 	X(POP(si));	// 51379 pop     si ;~ 18ED:28E4
cs=0x18ed;eip=0x0028e5; 	X(POP(di));	// 51380 pop     di ;~ 18ED:28E5
cs=0x18ed;eip=0x0028e6; 	T(MOV(sp, bp));	// 51381 mov     sp, bp ;~ 18ED:28E6
cs=0x18ed;eip=0x0028e8; 	X(POP(bp));	// 51382 pop     bp ;~ 18ED:28E8
cs=0x18ed;eip=0x0028e9; 	R(RETF(0));	// 51383 retf ;~ 18ED:28E9
do_key_restext:
	// 51390 
cs=0x18ed;eip=0x0028ea; 	X(PUSH(cs));	// 51392 push    cs ;~ 18ED:28EA
ret_18ed_28eb:
	// 7889 
cs=0x18ed;eip=0x0028eb; 	R(CALL(input_push_status,0));	// 51393 call    near ptr input_push_status ;~ 18ED:28EB
cs=0x18ed;eip=0x0028ee; 	X(MOV(word_3f88e, 1));	// 51394 mov     word_3F88E, 1 ;~ 18ED:28EE
cs=0x18ed;eip=0x0028f4; 	R(CALLF(audio_unk,0));	// 51395 call    audio_unk ;~ 18ED:28F4
cs=0x18ed;eip=0x0028f9; 	T(SUB(ax, ax));	// 51396 sub     ax, ax ;~ 18ED:28F9
cs=0x18ed;eip=0x0028fb; 	X(PUSH(ax));	// 51397 push    ax ;~ 18ED:28FB
cs=0x18ed;eip=0x0028fc; 	X(PUSH(ax));	// 51398 push    ax ;~ 18ED:28FC
cs=0x18ed;eip=0x0028fd; 	X(PUSH(dialogarg2));	// 51399 push    dialogarg2 ;~ 18ED:28FD
cs=0x18ed;eip=0x002901; 	T(MOV(ax, 0x0FFFF));	// 51400 mov     ax, 0FFFFh ;~ 18ED:2901
cs=0x18ed;eip=0x002904; 	X(PUSH(ax));	// 51401 push    ax ;~ 18ED:2904
cs=0x18ed;eip=0x002905; 	X(PUSH(ax));	// 51402 push    ax ;~ 18ED:2905
cs=0x18ed;eip=0x002906; 	T(MOV(ax, offset(dseg,akey)));	// 51403 mov     ax, offset aKey ; "key" ;~ 18ED:2906
cs=0x18ed;eip=0x002909; 	X(PUSH(ax));	// 51404 push    ax ;~ 18ED:2909
cs=0x18ed;eip=0x00290a; 	X(PUSH(word_44cee));	// 51405 push    word_44CEE ;~ 18ED:290A
cs=0x18ed;eip=0x00290e; 	X(PUSH(mainresptr));	// 51406 push    mainresptr ;~ 18ED:290E
cs=0x18ed;eip=0x002912; 	X(PUSH(cs));	// 51407 push    cs ;~ 18ED:2912
cs=0x18ed;eip=0x002913; 	R(CALL(locate_text_res,0));	// 51408 call    near ptr locate_text_res ;~ 18ED:2913
cs=0x18ed;eip=0x002916; 	T(ADD(sp, 6));	// 51409 add     sp, 6 ;~ 18ED:2916
cs=0x18ed;eip=0x002919; 	X(PUSH(dx));	// 51410 push    dx ;~ 18ED:2919
cs=0x18ed;eip=0x00291a; 	X(PUSH(ax));	// 51411 push    ax ;~ 18ED:291A
cs=0x18ed;eip=0x00291b; 	T(MOV(ax, 1));	// 51412 mov     ax, 1 ;~ 18ED:291B
cs=0x18ed;eip=0x00291e; 	X(PUSH(ax));	// 51413 push    ax ;~ 18ED:291E
cs=0x18ed;eip=0x00291f; 	T(MOV(ax, 4));	// 51414 mov     ax, 4 ;~ 18ED:291F
cs=0x18ed;eip=0x002922; 	X(PUSH(ax));	// 51415 push    ax ;~ 18ED:2922
cs=0x18ed;eip=0x002923; 	X(PUSH(cs));	// 51416 push    cs ;~ 18ED:2923
cs=0x18ed;eip=0x002924; 	R(CALL(show_dialog,0));	// 51417 call    near ptr show_dialog ;~ 18ED:2924
cs=0x18ed;eip=0x002927; 	T(ADD(sp, 0x12));	// 51418 add     sp, 12h ;~ 18ED:2927
cs=0x18ed;eip=0x00292a; 	X(MOV(byte_3fe00, 0));	// 51419 mov     byte_3FE00, 0 ;~ 18ED:292A
cs=0x18ed;eip=0x00292f; 	X(MOV(byte_3b8f2, 0));	// 51420 mov     byte_3B8F2, 0 ;~ 18ED:292F
cs=0x18ed;eip=0x002934; 	X(MOV(word_3f88e, 0));	// 51421 mov     word_3F88E, 0 ;~ 18ED:2934
cs=0x18ed;eip=0x00293a; 	R(CALLF(sub_372f4,0));	// 51422 call    sub_372F4 ;~ 18ED:293A
cs=0x18ed;eip=0x00293f; 	X(PUSH(cs));	// 51423 push    cs ;~ 18ED:293F
cs=0x18ed;eip=0x002940; 	R(CALL(input_pop_status,0));	// 51424 call    near ptr input_pop_status ;~ 18ED:2940
cs=0x18ed;eip=0x002943; 	R(RETF(0));	// 51425 retf ;~ 18ED:2943
do_mou_restext:
	// 51432 
cs=0x18ed;eip=0x002944; 	X(PUSH(cs));	// 51434 push    cs ;~ 18ED:2944
ret_18ed_2945:
	// 7890 
cs=0x18ed;eip=0x002945; 	R(CALL(input_push_status,0));	// 51435 call    near ptr input_push_status ;~ 18ED:2945
cs=0x18ed;eip=0x002948; 	X(MOV(word_3f88e, 1));	// 51436 mov     word_3F88E, 1 ;~ 18ED:2948
cs=0x18ed;eip=0x00294e; 	R(CALLF(audio_unk,0));	// 51437 call    audio_unk ;~ 18ED:294E
cs=0x18ed;eip=0x002953; 	X(MOV(byte_3b8f2, 1));	// 51438 mov     byte_3B8F2, 1 ;~ 18ED:2953
cs=0x18ed;eip=0x002958; 	T(SUB(ax, ax));	// 51439 sub     ax, ax ;~ 18ED:2958
cs=0x18ed;eip=0x00295a; 	X(PUSH(ax));	// 51440 push    ax ;~ 18ED:295A
cs=0x18ed;eip=0x00295b; 	X(PUSH(ax));	// 51441 push    ax ;~ 18ED:295B
cs=0x18ed;eip=0x00295c; 	X(PUSH(dialogarg2));	// 51442 push    dialogarg2 ;~ 18ED:295C
cs=0x18ed;eip=0x002960; 	T(MOV(ax, 0x0FFFF));	// 51443 mov     ax, 0FFFFh ;~ 18ED:2960
cs=0x18ed;eip=0x002963; 	X(PUSH(ax));	// 51444 push    ax ;~ 18ED:2963
cs=0x18ed;eip=0x002964; 	X(PUSH(ax));	// 51445 push    ax ;~ 18ED:2964
cs=0x18ed;eip=0x002965; 	T(MOV(ax, offset(dseg,amou)));	// 51446 mov     ax, offset aMou ; "mou" ;~ 18ED:2965
cs=0x18ed;eip=0x002968; 	X(PUSH(ax));	// 51447 push    ax ;~ 18ED:2968
cs=0x18ed;eip=0x002969; 	X(PUSH(word_44cee));	// 51448 push    word_44CEE ;~ 18ED:2969
cs=0x18ed;eip=0x00296d; 	X(PUSH(mainresptr));	// 51449 push    mainresptr ;~ 18ED:296D
cs=0x18ed;eip=0x002971; 	X(PUSH(cs));	// 51450 push    cs ;~ 18ED:2971
cs=0x18ed;eip=0x002972; 	R(CALL(locate_text_res,0));	// 51451 call    near ptr locate_text_res ;~ 18ED:2972
cs=0x18ed;eip=0x002975; 	T(ADD(sp, 6));	// 51452 add     sp, 6 ;~ 18ED:2975
cs=0x18ed;eip=0x002978; 	X(PUSH(dx));	// 51453 push    dx ;~ 18ED:2978
cs=0x18ed;eip=0x002979; 	X(PUSH(ax));	// 51454 push    ax ;~ 18ED:2979
cs=0x18ed;eip=0x00297a; 	T(MOV(ax, 1));	// 51455 mov     ax, 1 ;~ 18ED:297A
cs=0x18ed;eip=0x00297d; 	X(PUSH(ax));	// 51456 push    ax ;~ 18ED:297D
cs=0x18ed;eip=0x00297e; 	T(MOV(ax, 4));	// 51457 mov     ax, 4 ;~ 18ED:297E
cs=0x18ed;eip=0x002981; 	X(PUSH(ax));	// 51458 push    ax ;~ 18ED:2981
cs=0x18ed;eip=0x002982; 	X(PUSH(cs));	// 51459 push    cs ;~ 18ED:2982
cs=0x18ed;eip=0x002983; 	R(CALL(show_dialog,0));	// 51460 call    near ptr show_dialog ;~ 18ED:2983
cs=0x18ed;eip=0x002986; 	T(ADD(sp, 0x12));	// 51461 add     sp, 12h ;~ 18ED:2986
cs=0x18ed;eip=0x002989; 	X(MOV(word_3f88e, 0));	// 51462 mov     word_3F88E, 0 ;~ 18ED:2989
cs=0x18ed;eip=0x00298f; 	R(CALLF(sub_372f4,0));	// 51463 call    sub_372F4 ;~ 18ED:298F
cs=0x18ed;eip=0x002994; 	X(PUSH(cs));	// 51464 push    cs ;~ 18ED:2994
cs=0x18ed;eip=0x002995; 	R(CALL(input_pop_status,0));	// 51465 call    near ptr input_pop_status ;~ 18ED:2995
cs=0x18ed;eip=0x002998; 	R(RETF(0));	// 51466 retf ;~ 18ED:2998
do_pau_restext:
	// 51475 
cs=0x18ed;eip=0x00299a; 	X(PUSH(cs));	// 51477 push    cs ;~ 18ED:299A
ret_18ed_299b:
	// 7891 
cs=0x18ed;eip=0x00299b; 	R(CALL(input_push_status,0));	// 51478 call    near ptr input_push_status ;~ 18ED:299B
cs=0x18ed;eip=0x00299e; 	X(MOV(word_3f88e, 1));	// 51479 mov     word_3F88E, 1 ;~ 18ED:299E
cs=0x18ed;eip=0x0029a4; 	R(CALLF(audio_unk,0));	// 51480 call    audio_unk ;~ 18ED:29A4
cs=0x18ed;eip=0x0029a9; 	T(SUB(ax, ax));	// 51481 sub     ax, ax ;~ 18ED:29A9
cs=0x18ed;eip=0x0029ab; 	X(PUSH(ax));	// 51482 push    ax ;~ 18ED:29AB
cs=0x18ed;eip=0x0029ac; 	X(PUSH(ax));	// 51483 push    ax ;~ 18ED:29AC
cs=0x18ed;eip=0x0029ad; 	X(PUSH(dialogarg2));	// 51484 push    dialogarg2 ;~ 18ED:29AD
cs=0x18ed;eip=0x0029b1; 	T(MOV(ax, 0x0FFFF));	// 51485 mov     ax, 0FFFFh ;~ 18ED:29B1
cs=0x18ed;eip=0x0029b4; 	X(PUSH(ax));	// 51486 push    ax ;~ 18ED:29B4
cs=0x18ed;eip=0x0029b5; 	X(PUSH(ax));	// 51487 push    ax ;~ 18ED:29B5
cs=0x18ed;eip=0x0029b6; 	T(MOV(ax, offset(dseg,apau)));	// 51488 mov     ax, offset aPau ; "pau" ;~ 18ED:29B6
cs=0x18ed;eip=0x0029b9; 	X(PUSH(ax));	// 51489 push    ax ;~ 18ED:29B9
cs=0x18ed;eip=0x0029ba; 	X(PUSH(word_44cee));	// 51490 push    word_44CEE ;~ 18ED:29BA
cs=0x18ed;eip=0x0029be; 	X(PUSH(mainresptr));	// 51491 push    mainresptr ;~ 18ED:29BE
cs=0x18ed;eip=0x0029c2; 	X(PUSH(cs));	// 51492 push    cs ;~ 18ED:29C2
cs=0x18ed;eip=0x0029c3; 	R(CALL(locate_text_res,0));	// 51493 call    near ptr locate_text_res ;~ 18ED:29C3
cs=0x18ed;eip=0x0029c6; 	T(ADD(sp, 6));	// 51494 add     sp, 6 ;~ 18ED:29C6
cs=0x18ed;eip=0x0029c9; 	X(PUSH(dx));	// 51495 push    dx ;~ 18ED:29C9
cs=0x18ed;eip=0x0029ca; 	X(PUSH(ax));	// 51496 push    ax ;~ 18ED:29CA
cs=0x18ed;eip=0x0029cb; 	T(MOV(ax, 1));	// 51497 mov     ax, 1 ;~ 18ED:29CB
cs=0x18ed;eip=0x0029ce; 	X(PUSH(ax));	// 51498 push    ax ;~ 18ED:29CE
cs=0x18ed;eip=0x0029cf; 	X(PUSH(ax));	// 51499 push    ax ;~ 18ED:29CF
cs=0x18ed;eip=0x0029d0; 	X(PUSH(cs));	// 51500 push    cs ;~ 18ED:29D0
cs=0x18ed;eip=0x0029d1; 	R(CALL(show_dialog,0));	// 51501 call    near ptr show_dialog ;~ 18ED:29D1
cs=0x18ed;eip=0x0029d4; 	T(ADD(sp, 0x12));	// 51502 add     sp, 12h ;~ 18ED:29D4
cs=0x18ed;eip=0x0029d7; 	X(MOV(word_3f88e, 0));	// 51503 mov     word_3F88E, 0 ;~ 18ED:29D7
cs=0x18ed;eip=0x0029dd; 	R(CALLF(sub_372f4,0));	// 51504 call    sub_372F4 ;~ 18ED:29DD
cs=0x18ed;eip=0x0029e2; 	X(PUSH(cs));	// 51505 push    cs ;~ 18ED:29E2
cs=0x18ed;eip=0x0029e3; 	R(CALL(input_pop_status,0));	// 51506 call    near ptr input_pop_status ;~ 18ED:29E3
cs=0x18ed;eip=0x0029e6; 	R(RETF(0));	// 51507 retf ;~ 18ED:29E6
do_mof_restext:
	// 51516 
cs=0x18ed;eip=0x0029e8; 	X(PUSH(cs));	// 51518 push    cs ;~ 18ED:29E8
ret_18ed_29e9:
	// 7892 
cs=0x18ed;eip=0x0029e9; 	R(CALL(input_push_status,0));	// 51519 call    near ptr input_push_status ;~ 18ED:29E9
cs=0x18ed;eip=0x0029ec; 	X(MOV(word_3f88e, 1));	// 51520 mov     word_3F88E, 1 ;~ 18ED:29EC
cs=0x18ed;eip=0x0029f2; 	R(CALLF(audio_toggle_flag2,0));	// 51521 call    audio_toggle_flag2 ;~ 18ED:29F2
cs=0x18ed;eip=0x0029f7; 	T(OR(ax, ax));	// 51522 or      ax, ax ;~ 18ED:29F7
cs=0x18ed;eip=0x0029f9; 	R(JZ(loc_29ebe));	// 51523 jz      short loc_29EBE ;~ 18ED:29F9
cs=0x18ed;eip=0x0029fb; 	T(SUB(ax, ax));	// 51524 sub     ax, ax ;~ 18ED:29FB
cs=0x18ed;eip=0x0029fd; 	X(PUSH(ax));	// 51525 push    ax ;~ 18ED:29FD
cs=0x18ed;eip=0x0029fe; 	X(PUSH(ax));	// 51526 push    ax ;~ 18ED:29FE
cs=0x18ed;eip=0x0029ff; 	X(PUSH(dialogarg2));	// 51527 push    dialogarg2 ;~ 18ED:29FF
cs=0x18ed;eip=0x002a03; 	T(MOV(ax, 0x0FFFF));	// 51528 mov     ax, 0FFFFh ;~ 18ED:2A03
cs=0x18ed;eip=0x002a06; 	X(PUSH(ax));	// 51529 push    ax ;~ 18ED:2A06
cs=0x18ed;eip=0x002a07; 	X(PUSH(ax));	// 51530 push    ax ;~ 18ED:2A07
cs=0x18ed;eip=0x002a08; 	T(MOV(ax, offset(dseg,amon)));	// 51531 mov     ax, offset aMon ; "mon" ;~ 18ED:2A08
cs=0x18ed;eip=0x002a0b; 	R(JMP(loc_29ece));	// 51532 jmp     short loc_29ECE ;~ 18ED:2A0B
loc_29ebe:
	// 7893 
cs=0x18ed;eip=0x002a0e; 	T(SUB(ax, ax));	// 51537 sub     ax, ax ;~ 18ED:2A0E
cs=0x18ed;eip=0x002a10; 	X(PUSH(ax));	// 51538 push    ax ;~ 18ED:2A10
cs=0x18ed;eip=0x002a11; 	X(PUSH(ax));	// 51539 push    ax ;~ 18ED:2A11
cs=0x18ed;eip=0x002a12; 	X(PUSH(dialogarg2));	// 51540 push    dialogarg2 ;~ 18ED:2A12
cs=0x18ed;eip=0x002a16; 	T(MOV(ax, 0x0FFFF));	// 51541 mov     ax, 0FFFFh ;~ 18ED:2A16
cs=0x18ed;eip=0x002a19; 	X(PUSH(ax));	// 51542 push    ax ;~ 18ED:2A19
cs=0x18ed;eip=0x002a1a; 	X(PUSH(ax));	// 51543 push    ax ;~ 18ED:2A1A
cs=0x18ed;eip=0x002a1b; 	T(MOV(ax, offset(dseg,amof)));	// 51544 mov     ax, offset aMof ; "mof" ;~ 18ED:2A1B
loc_29ece:
	// 7894 
cs=0x18ed;eip=0x002a1e; 	X(PUSH(ax));	// 51547 push    ax ;~ 18ED:2A1E
cs=0x18ed;eip=0x002a1f; 	X(PUSH(word_44cee));	// 51548 push    word_44CEE ;~ 18ED:2A1F
cs=0x18ed;eip=0x002a23; 	X(PUSH(mainresptr));	// 51549 push    mainresptr ;~ 18ED:2A23
cs=0x18ed;eip=0x002a27; 	X(PUSH(cs));	// 51550 push    cs ;~ 18ED:2A27
cs=0x18ed;eip=0x002a28; 	R(CALL(locate_text_res,0));	// 51551 call    near ptr locate_text_res ;~ 18ED:2A28
cs=0x18ed;eip=0x002a2b; 	T(ADD(sp, 6));	// 51552 add     sp, 6 ;~ 18ED:2A2B
cs=0x18ed;eip=0x002a2e; 	X(PUSH(dx));	// 51553 push    dx ;~ 18ED:2A2E
cs=0x18ed;eip=0x002a2f; 	X(PUSH(ax));	// 51554 push    ax ;~ 18ED:2A2F
cs=0x18ed;eip=0x002a30; 	T(MOV(ax, 1));	// 51555 mov     ax, 1 ;~ 18ED:2A30
cs=0x18ed;eip=0x002a33; 	X(PUSH(ax));	// 51556 push    ax ;~ 18ED:2A33
cs=0x18ed;eip=0x002a34; 	T(MOV(ax, 4));	// 51557 mov     ax, 4 ;~ 18ED:2A34
cs=0x18ed;eip=0x002a37; 	X(PUSH(ax));	// 51558 push    ax ;~ 18ED:2A37
cs=0x18ed;eip=0x002a38; 	X(PUSH(cs));	// 51559 push    cs ;~ 18ED:2A38
cs=0x18ed;eip=0x002a39; 	R(CALL(show_dialog,0));	// 51560 call    near ptr show_dialog ;~ 18ED:2A39
cs=0x18ed;eip=0x002a3c; 	T(ADD(sp, 0x12));	// 51561 add     sp, 12h ;~ 18ED:2A3C
cs=0x18ed;eip=0x002a3f; 	X(MOV(word_3f88e, 0));	// 51562 mov     word_3F88E, 0 ;~ 18ED:2A3F
cs=0x18ed;eip=0x002a45; 	X(PUSH(cs));	// 51563 push    cs ;~ 18ED:2A45
cs=0x18ed;eip=0x002a46; 	R(CALL(input_pop_status,0));	// 51564 call    near ptr input_pop_status ;~ 18ED:2A46
cs=0x18ed;eip=0x002a49; 	R(RETF(0));	// 51565 retf ;~ 18ED:2A49
do_sonsof_restext:
	// 51572 
cs=0x18ed;eip=0x002a4a; 	X(PUSH(cs));	// 51574 push    cs ;~ 18ED:2A4A
ret_18ed_2a4b:
	// 7895 
cs=0x18ed;eip=0x002a4b; 	R(CALL(input_push_status,0));	// 51575 call    near ptr input_push_status ;~ 18ED:2A4B
cs=0x18ed;eip=0x002a4e; 	X(MOV(word_3f88e, 1));	// 51576 mov     word_3F88E, 1 ;~ 18ED:2A4E
cs=0x18ed;eip=0x002a54; 	R(CALLF(audio_toggle_flag6,0));	// 51577 call    audio_toggle_flag6 ;~ 18ED:2A54
cs=0x18ed;eip=0x002a59; 	T(OR(ax, ax));	// 51578 or      ax, ax ;~ 18ED:2A59
cs=0x18ed;eip=0x002a5b; 	R(JZ(loc_29f20));	// 51579 jz      short loc_29F20 ;~ 18ED:2A5B
cs=0x18ed;eip=0x002a5d; 	T(SUB(ax, ax));	// 51580 sub     ax, ax ;~ 18ED:2A5D
cs=0x18ed;eip=0x002a5f; 	X(PUSH(ax));	// 51581 push    ax ;~ 18ED:2A5F
cs=0x18ed;eip=0x002a60; 	X(PUSH(ax));	// 51582 push    ax ;~ 18ED:2A60
cs=0x18ed;eip=0x002a61; 	X(PUSH(dialogarg2));	// 51583 push    dialogarg2 ;~ 18ED:2A61
cs=0x18ed;eip=0x002a65; 	T(MOV(ax, 0x0FFFF));	// 51584 mov     ax, 0FFFFh ;~ 18ED:2A65
cs=0x18ed;eip=0x002a68; 	X(PUSH(ax));	// 51585 push    ax ;~ 18ED:2A68
cs=0x18ed;eip=0x002a69; 	X(PUSH(ax));	// 51586 push    ax ;~ 18ED:2A69
cs=0x18ed;eip=0x002a6a; 	T(MOV(ax, offset(dseg,ason)));	// 51587 mov     ax, offset aSon ; "son" ;~ 18ED:2A6A
cs=0x18ed;eip=0x002a6d; 	R(JMP(loc_29f30));	// 51588 jmp     short loc_29F30 ;~ 18ED:2A6D
loc_29f20:
	// 7896 
cs=0x18ed;eip=0x002a70; 	T(SUB(ax, ax));	// 51593 sub     ax, ax ;~ 18ED:2A70
cs=0x18ed;eip=0x002a72; 	X(PUSH(ax));	// 51594 push    ax ;~ 18ED:2A72
cs=0x18ed;eip=0x002a73; 	X(PUSH(ax));	// 51595 push    ax ;~ 18ED:2A73
cs=0x18ed;eip=0x002a74; 	X(PUSH(dialogarg2));	// 51596 push    dialogarg2 ;~ 18ED:2A74
cs=0x18ed;eip=0x002a78; 	T(MOV(ax, 0x0FFFF));	// 51597 mov     ax, 0FFFFh ;~ 18ED:2A78
cs=0x18ed;eip=0x002a7b; 	X(PUSH(ax));	// 51598 push    ax ;~ 18ED:2A7B
cs=0x18ed;eip=0x002a7c; 	X(PUSH(ax));	// 51599 push    ax ;~ 18ED:2A7C
cs=0x18ed;eip=0x002a7d; 	T(MOV(ax, offset(dseg,asof)));	// 51600 mov     ax, offset aSof ; "sof" ;~ 18ED:2A7D
loc_29f30:
	// 7897 
cs=0x18ed;eip=0x002a80; 	X(PUSH(ax));	// 51603 push    ax ;~ 18ED:2A80
cs=0x18ed;eip=0x002a81; 	X(PUSH(word_44cee));	// 51604 push    word_44CEE ;~ 18ED:2A81
cs=0x18ed;eip=0x002a85; 	X(PUSH(mainresptr));	// 51605 push    mainresptr ;~ 18ED:2A85
cs=0x18ed;eip=0x002a89; 	X(PUSH(cs));	// 51606 push    cs ;~ 18ED:2A89
cs=0x18ed;eip=0x002a8a; 	R(CALL(locate_text_res,0));	// 51607 call    near ptr locate_text_res ;~ 18ED:2A8A
cs=0x18ed;eip=0x002a8d; 	T(ADD(sp, 6));	// 51608 add     sp, 6 ;~ 18ED:2A8D
cs=0x18ed;eip=0x002a90; 	X(PUSH(dx));	// 51609 push    dx ;~ 18ED:2A90
cs=0x18ed;eip=0x002a91; 	X(PUSH(ax));	// 51610 push    ax ;~ 18ED:2A91
cs=0x18ed;eip=0x002a92; 	T(MOV(ax, 1));	// 51611 mov     ax, 1 ;~ 18ED:2A92
cs=0x18ed;eip=0x002a95; 	X(PUSH(ax));	// 51612 push    ax ;~ 18ED:2A95
cs=0x18ed;eip=0x002a96; 	T(MOV(ax, 4));	// 51613 mov     ax, 4 ;~ 18ED:2A96
cs=0x18ed;eip=0x002a99; 	X(PUSH(ax));	// 51614 push    ax ;~ 18ED:2A99
cs=0x18ed;eip=0x002a9a; 	X(PUSH(cs));	// 51615 push    cs ;~ 18ED:2A9A
cs=0x18ed;eip=0x002a9b; 	R(CALL(show_dialog,0));	// 51616 call    near ptr show_dialog ;~ 18ED:2A9B
cs=0x18ed;eip=0x002a9e; 	T(ADD(sp, 0x12));	// 51617 add     sp, 12h ;~ 18ED:2A9E
cs=0x18ed;eip=0x002aa1; 	X(MOV(word_3f88e, 0));	// 51618 mov     word_3F88E, 0 ;~ 18ED:2AA1
cs=0x18ed;eip=0x002aa7; 	X(PUSH(cs));	// 51619 push    cs ;~ 18ED:2AA7
cs=0x18ed;eip=0x002aa8; 	R(CALL(input_pop_status,0));	// 51620 call    near ptr input_pop_status ;~ 18ED:2AA8
cs=0x18ed;eip=0x002aab; 	R(RETF(0));	// 51621 retf ;~ 18ED:2AAB
do_dos_restext:
	// 51628 
cs=0x18ed;eip=0x002aac; 	X(PUSH(cs));	// 51630 push    cs ;~ 18ED:2AAC
ret_18ed_2aad:
	// 7898 
cs=0x18ed;eip=0x002aad; 	R(CALL(input_push_status,0));	// 51631 call    near ptr input_push_status ;~ 18ED:2AAD
cs=0x18ed;eip=0x002ab0; 	X(MOV(word_3f88e, 1));	// 51632 mov     word_3F88E, 1 ;~ 18ED:2AB0
cs=0x18ed;eip=0x002ab6; 	R(CALLF(audio_unk,0));	// 51633 call    audio_unk ;~ 18ED:2AB6
cs=0x18ed;eip=0x002abb; 	T(SUB(ax, ax));	// 51634 sub     ax, ax ;~ 18ED:2ABB
cs=0x18ed;eip=0x002abd; 	X(PUSH(ax));	// 51635 push    ax ;~ 18ED:2ABD
cs=0x18ed;eip=0x002abe; 	X(PUSH(ax));	// 51636 push    ax ;~ 18ED:2ABE
cs=0x18ed;eip=0x002abf; 	X(PUSH(dialogarg2));	// 51637 push    dialogarg2 ;~ 18ED:2ABF
cs=0x18ed;eip=0x002ac3; 	T(MOV(ax, 0x0FFFF));	// 51638 mov     ax, 0FFFFh ;~ 18ED:2AC3
cs=0x18ed;eip=0x002ac6; 	X(PUSH(ax));	// 51639 push    ax ;~ 18ED:2AC6
cs=0x18ed;eip=0x002ac7; 	X(PUSH(ax));	// 51640 push    ax ;~ 18ED:2AC7
cs=0x18ed;eip=0x002ac8; 	T(MOV(ax, offset(dseg,ados_0)));	// 51641 mov     ax, offset aDos_0 ; "dos" ;~ 18ED:2AC8
cs=0x18ed;eip=0x002acb; 	X(PUSH(ax));	// 51642 push    ax ;~ 18ED:2ACB
cs=0x18ed;eip=0x002acc; 	X(PUSH(word_44cee));	// 51643 push    word_44CEE ;~ 18ED:2ACC
cs=0x18ed;eip=0x002ad0; 	X(PUSH(mainresptr));	// 51644 push    mainresptr ;~ 18ED:2AD0
cs=0x18ed;eip=0x002ad4; 	X(PUSH(cs));	// 51645 push    cs ;~ 18ED:2AD4
cs=0x18ed;eip=0x002ad5; 	R(CALL(locate_text_res,0));	// 51646 call    near ptr locate_text_res ;~ 18ED:2AD5
cs=0x18ed;eip=0x002ad8; 	T(ADD(sp, 6));	// 51647 add     sp, 6 ;~ 18ED:2AD8
cs=0x18ed;eip=0x002adb; 	X(PUSH(dx));	// 51648 push    dx ;~ 18ED:2ADB
cs=0x18ed;eip=0x002adc; 	X(PUSH(ax));	// 51649 push    ax ;~ 18ED:2ADC
cs=0x18ed;eip=0x002add; 	T(MOV(ax, 1));	// 51650 mov     ax, 1 ;~ 18ED:2ADD
cs=0x18ed;eip=0x002ae0; 	X(PUSH(ax));	// 51651 push    ax ;~ 18ED:2AE0
cs=0x18ed;eip=0x002ae1; 	T(MOV(ax, 2));	// 51652 mov     ax, 2 ;~ 18ED:2AE1
cs=0x18ed;eip=0x002ae4; 	X(PUSH(ax));	// 51653 push    ax ;~ 18ED:2AE4
cs=0x18ed;eip=0x002ae5; 	X(PUSH(cs));	// 51654 push    cs ;~ 18ED:2AE5
cs=0x18ed;eip=0x002ae6; 	R(CALL(show_dialog,0));	// 51655 call    near ptr show_dialog ;~ 18ED:2AE6
cs=0x18ed;eip=0x002ae9; 	T(ADD(sp, 0x12));	// 51656 add     sp, 12h ;~ 18ED:2AE9
cs=0x18ed;eip=0x002aec; 	T(CMP(ax, 1));	// 51657 cmp     ax, 1 ;~ 18ED:2AEC
cs=0x18ed;eip=0x002aef; 	R(JNZ(loc_29fa6));	// 51658 jnz     short loc_29FA6 ;~ 18ED:2AEF
cs=0x18ed;eip=0x002af1; 	R(CALLF(call_exitlist2,0));	// 51659 call    far ptr call_exitlist2 ;~ 18ED:2AF1
loc_29fa6:
	// 7899 
cs=0x18ed;eip=0x002af6; 	X(MOV(word_3f88e, 0));	// 51663 mov     word_3F88E, 0 ;~ 18ED:2AF6
cs=0x18ed;eip=0x002afc; 	R(CALLF(sub_372f4,0));	// 51664 call    sub_372F4 ;~ 18ED:2AFC
cs=0x18ed;eip=0x002b01; 	X(PUSH(cs));	// 51665 push    cs ;~ 18ED:2B01
cs=0x18ed;eip=0x002b02; 	R(CALL(input_pop_status,0));	// 51666 call    near ptr input_pop_status ;~ 18ED:2B02
cs=0x18ed;eip=0x002b05; 	R(RETF(0));	// 51667 retf ;~ 18ED:2B05
do_mrl_textres:
	// 51675 
#undef var_212
#define var_212 -0x212
	// 51679 var_212         = word ptr -212h ;~ 18ED:2B06
#undef var_20c
#define var_20c -0x20C
	// 51680 var_20C         = byte ptr -20Ch ;~ 18ED:2B06
#undef var_205
#define var_205 -0x205
	// 51681 var_205         = byte ptr -205h ;~ 18ED:2B06
#undef var_204
#define var_204 -0x204
	// 51682 var_204         = byte ptr -204h ;~ 18ED:2B06
#undef var_202
#define var_202 -0x202
	// 51683 var_202         = byte ptr -202h ;~ 18ED:2B06
#undef var_201
#define var_201 -0x201
	// 51684 var_201         = byte ptr -201h ;~ 18ED:2B06
#undef var_2
#define var_2 -2
	// 51685 var_2           = byte ptr -2 ;~ 18ED:2B06
ret_18ed_2b06:
	// 7900 
cs=0x18ed;eip=0x002b06; 	X(PUSH(bp));	// 51687 push    bp ;~ 18ED:2B06
cs=0x18ed;eip=0x002b07; 	T(MOV(bp, sp));	// 51688 mov     bp, sp ;~ 18ED:2B07
cs=0x18ed;eip=0x002b09; 	T(SUB(sp, 0x212));	// 51689 sub     sp, 212h ;~ 18ED:2B09
cs=0x18ed;eip=0x002b0d; 	X(PUSH(di));	// 51690 push    di ;~ 18ED:2B0D
cs=0x18ed;eip=0x002b0e; 	X(PUSH(si));	// 51691 push    si ;~ 18ED:2B0E
cs=0x18ed;eip=0x002b0f; 	X(PUSH(cs));	// 51692 push    cs ;~ 18ED:2B0F
cs=0x18ed;eip=0x002b10; 	R(CALL(input_push_status,0));	// 51693 call    near ptr input_push_status ;~ 18ED:2B10
cs=0x18ed;eip=0x002b13; 	X(MOV(word_3f88e, 1));	// 51694 mov     word_3F88E, 1 ;~ 18ED:2B13
cs=0x18ed;eip=0x002b19; 	R(CALLF(audio_unk,0));	// 51695 call    audio_unk ;~ 18ED:2B19
cs=0x18ed;eip=0x002b1e; 	T(MOV(ax, framespersec2));	// 51696 mov     ax, framespersec2 ;~ 18ED:2B1E
cs=0x18ed;eip=0x002b21; 	X(MOV(*(dw*)(raddr(ss,bp+var_212)), ax));	// 51697 mov     [bp+var_212], ax ;~ 18ED:2B21
cs=0x18ed;eip=0x002b25; 	X(MOV(*(raddr(ss,bp+var_2)), 0));	// 51698 mov     [bp+var_2], 0 ;~ 18ED:2B25
loc_29fd9:
	// 7901 
cs=0x18ed;eip=0x002b29; 	T(MOV(ax, offset(dseg,amrl)));	// 51702 mov     ax, offset aMrl ; "mrl" ;~ 18ED:2B29
cs=0x18ed;eip=0x002b2c; 	X(PUSH(ax));	// 51703 push    ax ;~ 18ED:2B2C
cs=0x18ed;eip=0x002b2d; 	X(PUSH(word_44cee));	// 51704 push    word_44CEE ;~ 18ED:2B2D
cs=0x18ed;eip=0x002b31; 	X(PUSH(mainresptr));	// 51705 push    mainresptr ;~ 18ED:2B31
cs=0x18ed;eip=0x002b35; 	X(PUSH(cs));	// 51706 push    cs ;~ 18ED:2B35
cs=0x18ed;eip=0x002b36; 	R(CALL(locate_text_res,0));	// 51707 call    near ptr locate_text_res ;~ 18ED:2B36
cs=0x18ed;eip=0x002b39; 	T(ADD(sp, 6));	// 51708 add     sp, 6 ;~ 18ED:2B39
cs=0x18ed;eip=0x002b3c; 	X(PUSH(dx));	// 51709 push    dx ;~ 18ED:2B3C
cs=0x18ed;eip=0x002b3d; 	X(PUSH(ax));	// 51710 push    ax ;~ 18ED:2B3D
cs=0x18ed;eip=0x002b3e; 	T(ax = bp+var_202);	// 51711 lea     ax, [bp+var_202] ;~ 18ED:2B3E
cs=0x18ed;eip=0x002b42; 	X(PUSH(ax));	// 51712 push    ax ;~ 18ED:2B42
cs=0x18ed;eip=0x002b43; 	X(PUSH(cs));	// 51713 push    cs ;~ 18ED:2B43
cs=0x18ed;eip=0x002b44; 	R(CALL(copy_string,0));	// 51714 call    near ptr copy_string ;~ 18ED:2B44
cs=0x18ed;eip=0x002b47; 	T(ADD(sp, 6));	// 51715 add     sp, 6 ;~ 18ED:2B47
cs=0x18ed;eip=0x002b4a; 	T(SUB(si, si));	// 51716 sub     si, si ;~ 18ED:2B4A
loc_29ffc:
	// 7902 
cs=0x18ed;eip=0x002b4c; 	X(MOV(*(raddr(ss,bp+si+var_20c)), 0));	// 51719 mov     [bp+si+var_20C], 0 ;~ 18ED:2B4C
cs=0x18ed;eip=0x002b51; 	T(INC(si));	// 51720 inc     si ;~ 18ED:2B51
cs=0x18ed;eip=0x002b52; 	T(CMP(si, 9));	// 51721 cmp     si, 9 ;~ 18ED:2B52
cs=0x18ed;eip=0x002b55; 	R(JL(loc_29ffc));	// 51722 jl      short loc_29FFC ;~ 18ED:2B55
cs=0x18ed;eip=0x002b57; 	T(MOV(bl, timertestflag2));	// 51723 mov     bl, timertestflag2 ;~ 18ED:2B57
cs=0x18ed;eip=0x002b5b; 	T(SUB(bh, bh));	// 51724 sub     bh, bh ;~ 18ED:2B5B
cs=0x18ed;eip=0x002b5d; 	T(ADD(bx, bp));	// 51725 add     bx, bp ;~ 18ED:2B5D
cs=0x18ed;eip=0x002b5f; 	X(MOV(*(raddr(ds,bx-0x20C)), 1));	// 51726 mov     byte ptr [bx-20Ch], 1 ;~ 18ED:2B5F
cs=0x18ed;eip=0x002b64; 	T(MOV(bx, timertestflag));	// 51727 mov     bx, timertestflag ;~ 18ED:2B64
cs=0x18ed;eip=0x002b68; 	T(ADD(bx, bp));	// 51728 add     bx, bp ;~ 18ED:2B68
cs=0x18ed;eip=0x002b6a; 	X(MOV(*(raddr(ds,bx-0x207)), 1));	// 51729 mov     byte ptr [bx-207h], 1 ;~ 18ED:2B6A
cs=0x18ed;eip=0x002b6f; 	T(CMP(framespersec2, 0x0A));	// 51730 cmp     framespersec2, 0Ah ;~ 18ED:2B6F
cs=0x18ed;eip=0x002b74; 	R(JNZ(loc_2a02e));	// 51731 jnz     short loc_2A02E ;~ 18ED:2B74
cs=0x18ed;eip=0x002b76; 	X(MOV(*(raddr(ss,bp+var_205)), 1));	// 51732 mov     [bp+var_205], 1 ;~ 18ED:2B76
cs=0x18ed;eip=0x002b7b; 	R(JMP(loc_2a033));	// 51733 jmp     short loc_2A033 ;~ 18ED:2B7B
loc_2a02e:
	// 7903 
cs=0x18ed;eip=0x002b7e; 	X(MOV(*(raddr(ss,bp+var_204)), 1));	// 51738 mov     [bp+var_204], 1 ;~ 18ED:2B7E
loc_2a033:
	// 7904 
cs=0x18ed;eip=0x002b83; 	T(SUB(di, di));	// 51741 sub     di, di ;~ 18ED:2B83
cs=0x18ed;eip=0x002b85; 	T(SUB(si, si));	// 51742 sub     si, si ;~ 18ED:2B85
cs=0x18ed;eip=0x002b87; 	R(JMP(loc_2a050));	// 51743 jmp     short loc_2A050 ;~ 18ED:2B87
loc_2a03a:
	// 7905 
cs=0x18ed;eip=0x002b8a; 	T(INC(di));	// 51748 inc     di ;~ 18ED:2B8A
loc_2a03b:
	// 7906 
cs=0x18ed;eip=0x002b8b; 	T(CMP(*(raddr(ss,bp+di+var_202)), 0x5B));	// 51751 cmp     [bp+di+var_202], 5Bh ; '[' ;~ 18ED:2B8B
cs=0x18ed;eip=0x002b90; 	R(JNZ(loc_2a03a));	// 51752 jnz     short loc_2A03A ;~ 18ED:2B90
cs=0x18ed;eip=0x002b92; 	T(CMP(*(raddr(ss,bp+si+var_20c)), 0));	// 51753 cmp     [bp+si+var_20C], 0 ;~ 18ED:2B92
cs=0x18ed;eip=0x002b97; 	R(JZ(loc_2a04e));	// 51754 jz      short loc_2A04E ;~ 18ED:2B97
cs=0x18ed;eip=0x002b99; 	X(MOV(*(raddr(ss,bp+di+var_201)), 0x2A));	// 51755 mov     [bp+di+var_201], 2Ah ; '*' ;~ 18ED:2B99
loc_2a04e:
	// 7907 
cs=0x18ed;eip=0x002b9e; 	T(INC(di));	// 51758 inc     di ;~ 18ED:2B9E
cs=0x18ed;eip=0x002b9f; 	T(INC(si));	// 51759 inc     si ;~ 18ED:2B9F
loc_2a050:
	// 7908 
cs=0x18ed;eip=0x002ba0; 	T(CMP(si, 9));	// 51762 cmp     si, 9 ;~ 18ED:2BA0
cs=0x18ed;eip=0x002ba3; 	R(JL(loc_2a03b));	// 51763 jl      short loc_2A03B ;~ 18ED:2BA3
cs=0x18ed;eip=0x002ba5; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 51764 mov     al, [bp+var_2] ;~ 18ED:2BA5
cs=0x18ed;eip=0x002ba8; 	T(CBW);	// 51765 cbw ;~ 18ED:2BA8
cs=0x18ed;eip=0x002ba9; 	X(PUSH(ax));	// 51766 push    ax ;~ 18ED:2BA9
cs=0x18ed;eip=0x002baa; 	T(SUB(ax, ax));	// 51767 sub     ax, ax ;~ 18ED:2BAA
cs=0x18ed;eip=0x002bac; 	X(PUSH(ax));	// 51768 push    ax ;~ 18ED:2BAC
cs=0x18ed;eip=0x002bad; 	X(PUSH(performgraphcolor));	// 51769 push    performGraphColor ;~ 18ED:2BAD
cs=0x18ed;eip=0x002bb1; 	T(MOV(ax, 0x0FFFF));	// 51770 mov     ax, 0FFFFh ;~ 18ED:2BB1
cs=0x18ed;eip=0x002bb4; 	X(PUSH(ax));	// 51771 push    ax ;~ 18ED:2BB4
cs=0x18ed;eip=0x002bb5; 	X(PUSH(ax));	// 51772 push    ax ;~ 18ED:2BB5
cs=0x18ed;eip=0x002bb6; 	T(ax = bp+var_202);	// 51773 lea     ax, [bp+var_202] ;~ 18ED:2BB6
cs=0x18ed;eip=0x002bba; 	X(PUSH(ss));	// 51774 push    ss ;~ 18ED:2BBA
cs=0x18ed;eip=0x002bbb; 	X(PUSH(ax));	// 51775 push    ax ;~ 18ED:2BBB
cs=0x18ed;eip=0x002bbc; 	T(MOV(ax, 1));	// 51776 mov     ax, 1 ;~ 18ED:2BBC
cs=0x18ed;eip=0x002bbf; 	X(PUSH(ax));	// 51777 push    ax ;~ 18ED:2BBF
cs=0x18ed;eip=0x002bc0; 	T(MOV(ax, 2));	// 51778 mov     ax, 2 ;~ 18ED:2BC0
cs=0x18ed;eip=0x002bc3; 	X(PUSH(ax));	// 51779 push    ax ;~ 18ED:2BC3
cs=0x18ed;eip=0x002bc4; 	X(PUSH(cs));	// 51780 push    cs ;~ 18ED:2BC4
cs=0x18ed;eip=0x002bc5; 	R(CALL(show_dialog,0));	// 51781 call    near ptr show_dialog ;~ 18ED:2BC5
cs=0x18ed;eip=0x002bc8; 	T(ADD(sp, 0x12));	// 51782 add     sp, 12h ;~ 18ED:2BC8
cs=0x18ed;eip=0x002bcb; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 51783 mov     [bp+var_2], al ;~ 18ED:2BCB
cs=0x18ed;eip=0x002bce; 	T(CBW);	// 51784 cbw ;~ 18ED:2BCE
cs=0x18ed;eip=0x002bcf; 	T(CMP(ax, 0x0FFFF));	// 51785 cmp     ax, 0FFFFh ;~ 18ED:2BCF
cs=0x18ed;eip=0x002bd2; 	R(JZ(loc_2a0cc));	// 51786 jz      short loc_2A0CC ;~ 18ED:2BD2
cs=0x18ed;eip=0x002bd4; 	T(CMP(ax, 5));	// 51787 cmp     ax, 5 ;~ 18ED:2BD4
cs=0x18ed;eip=0x002bd7; 	R(JZ(loc_2a0a4));	// 51788 jz      short loc_2A0A4 ;~ 18ED:2BD7
cs=0x18ed;eip=0x002bd9; 	T(CMP(ax, 6));	// 51789 cmp     ax, 6 ;~ 18ED:2BD9
cs=0x18ed;eip=0x002bdc; 	R(JZ(loc_2a0ae));	// 51790 jz      short loc_2A0AE ;~ 18ED:2BDC
cs=0x18ed;eip=0x002bde; 	T(CMP(ax, 7));	// 51791 cmp     ax, 7 ;~ 18ED:2BDE
cs=0x18ed;eip=0x002be1; 	R(JZ(loc_2a0b8));	// 51792 jz      short loc_2A0B8 ;~ 18ED:2BE1
cs=0x18ed;eip=0x002be3; 	T(CMP(ax, 8));	// 51793 cmp     ax, 8 ;~ 18ED:2BE3
cs=0x18ed;eip=0x002be6; 	R(JZ(loc_2a0c2));	// 51794 jz      short loc_2A0C2 ;~ 18ED:2BE6
cs=0x18ed;eip=0x002be8; 	T(CMP(ax, 9));	// 51795 cmp     ax, 9 ;~ 18ED:2BE8
cs=0x18ed;eip=0x002beb; 	R(JZ(loc_2a0cc));	// 51796 jz      short loc_2A0CC ;~ 18ED:2BEB
cs=0x18ed;eip=0x002bed; 	X(MOV(timertestflag2, al));	// 51797 mov     timertestflag2, al ;~ 18ED:2BED
cs=0x18ed;eip=0x002bf0; 	R(JMP(loc_29fd9));	// 51798 jmp     loc_29FD9 ;~ 18ED:2BF0
loc_2a0a4:
	// 7909 
cs=0x18ed;eip=0x002bf4; 	X(MOV(timertestflag, 0));	// 51803 mov     timertestflag, 0 ;~ 18ED:2BF4
cs=0x18ed;eip=0x002bfa; 	R(JMP(loc_29fd9));	// 51804 jmp     loc_29FD9 ;~ 18ED:2BFA
loc_2a0ae:
	// 7910 
cs=0x18ed;eip=0x002bfe; 	X(MOV(timertestflag, 1));	// 51809 mov     timertestflag, 1 ;~ 18ED:2BFE
cs=0x18ed;eip=0x002c04; 	R(JMP(loc_29fd9));	// 51810 jmp     loc_29FD9 ;~ 18ED:2C04
loc_2a0b8:
	// 7911 
cs=0x18ed;eip=0x002c08; 	X(MOV(framespersec2, 0x0A));	// 51815 mov     framespersec2, 0Ah ;~ 18ED:2C08
cs=0x18ed;eip=0x002c0e; 	R(JMP(loc_29fd9));	// 51816 jmp     loc_29FD9 ;~ 18ED:2C0E
loc_2a0c2:
	// 7912 
cs=0x18ed;eip=0x002c12; 	X(MOV(framespersec2, 0x14));	// 51821 mov     framespersec2, 14h ;~ 18ED:2C12
cs=0x18ed;eip=0x002c18; 	R(JMP(loc_29fd9));	// 51822 jmp     loc_29FD9 ;~ 18ED:2C18
loc_2a0cc:
	// 7913 
cs=0x18ed;eip=0x002c1c; 	T(MOV(ax, framespersec2));	// 51828 mov     ax, framespersec2 ;~ 18ED:2C1C
cs=0x18ed;eip=0x002c1f; 	T(CMP(*(dw*)(raddr(ss,bp+var_212)), ax));	// 51829 cmp     [bp+var_212], ax ;~ 18ED:2C1F
cs=0x18ed;eip=0x002c23; 	R(JZ(loc_2a103));	// 51830 jz      short loc_2A103 ;~ 18ED:2C23
cs=0x18ed;eip=0x002c25; 	T(SUB(ax, ax));	// 51831 sub     ax, ax ;~ 18ED:2C25
cs=0x18ed;eip=0x002c27; 	X(PUSH(ax));	// 51832 push    ax ;~ 18ED:2C27
cs=0x18ed;eip=0x002c28; 	X(PUSH(ax));	// 51833 push    ax ;~ 18ED:2C28
cs=0x18ed;eip=0x002c29; 	X(PUSH(dialogarg2));	// 51834 push    dialogarg2 ;~ 18ED:2C29
cs=0x18ed;eip=0x002c2d; 	T(MOV(ax, 0x0FFFF));	// 51835 mov     ax, 0FFFFh ;~ 18ED:2C2D
cs=0x18ed;eip=0x002c30; 	X(PUSH(ax));	// 51836 push    ax ;~ 18ED:2C30
cs=0x18ed;eip=0x002c31; 	X(PUSH(ax));	// 51837 push    ax ;~ 18ED:2C31
cs=0x18ed;eip=0x002c32; 	T(MOV(ax, offset(dseg,amrs)));	// 51838 mov     ax, offset aMrs ; "mrs" ;~ 18ED:2C32
cs=0x18ed;eip=0x002c35; 	X(PUSH(ax));	// 51839 push    ax ;~ 18ED:2C35
cs=0x18ed;eip=0x002c36; 	X(PUSH(word_44cee));	// 51840 push    word_44CEE ;~ 18ED:2C36
cs=0x18ed;eip=0x002c3a; 	X(PUSH(mainresptr));	// 51841 push    mainresptr ;~ 18ED:2C3A
cs=0x18ed;eip=0x002c3e; 	X(PUSH(cs));	// 51842 push    cs ;~ 18ED:2C3E
cs=0x18ed;eip=0x002c3f; 	R(CALL(locate_text_res,0));	// 51843 call    near ptr locate_text_res ;~ 18ED:2C3F
cs=0x18ed;eip=0x002c42; 	T(ADD(sp, 6));	// 51844 add     sp, 6 ;~ 18ED:2C42
cs=0x18ed;eip=0x002c45; 	X(PUSH(dx));	// 51845 push    dx ;~ 18ED:2C45
cs=0x18ed;eip=0x002c46; 	X(PUSH(ax));	// 51846 push    ax ;~ 18ED:2C46
cs=0x18ed;eip=0x002c47; 	T(MOV(ax, 1));	// 51847 mov     ax, 1 ;~ 18ED:2C47
cs=0x18ed;eip=0x002c4a; 	X(PUSH(ax));	// 51848 push    ax ;~ 18ED:2C4A
cs=0x18ed;eip=0x002c4b; 	X(PUSH(ax));	// 51849 push    ax ;~ 18ED:2C4B
cs=0x18ed;eip=0x002c4c; 	X(PUSH(cs));	// 51850 push    cs ;~ 18ED:2C4C
cs=0x18ed;eip=0x002c4d; 	R(CALL(show_dialog,0));	// 51851 call    near ptr show_dialog ;~ 18ED:2C4D
cs=0x18ed;eip=0x002c50; 	T(ADD(sp, 0x12));	// 51852 add     sp, 12h ;~ 18ED:2C50
loc_2a103:
	// 7914 
cs=0x18ed;eip=0x002c53; 	X(MOV(word_3f88e, 0));	// 51855 mov     word_3F88E, 0 ;~ 18ED:2C53
cs=0x18ed;eip=0x002c59; 	R(CALLF(sub_372f4,0));	// 51856 call    sub_372F4 ;~ 18ED:2C59
cs=0x18ed;eip=0x002c5e; 	X(PUSH(cs));	// 51857 push    cs ;~ 18ED:2C5E
cs=0x18ed;eip=0x002c5f; 	R(CALL(input_pop_status,0));	// 51858 call    near ptr input_pop_status ;~ 18ED:2C5F
cs=0x18ed;eip=0x002c62; 	X(POP(si));	// 51859 pop     si ;~ 18ED:2C62
cs=0x18ed;eip=0x002c63; 	X(POP(di));	// 51860 pop     di ;~ 18ED:2C63
cs=0x18ed;eip=0x002c64; 	T(MOV(sp, bp));	// 51861 mov     sp, bp ;~ 18ED:2C64
cs=0x18ed;eip=0x002c66; 	X(POP(bp));	// 51862 pop     bp ;~ 18ED:2C66
cs=0x18ed;eip=0x002c67; 	R(RETF(0));	// 51863 retf ;~ 18ED:2C67
do_dea_textres:
	// 51871 
#undef var_2
#define var_2 -2
	// 51874 var_2           = word ptr -2 ;~ 18ED:2C68
ret_18ed_2c68:
	// 7915 
cs=0x18ed;eip=0x002c68; 	X(PUSH(bp));	// 51876 push    bp ;~ 18ED:2C68
cs=0x18ed;eip=0x002c69; 	T(MOV(bp, sp));	// 51877 mov     bp, sp ;~ 18ED:2C69
cs=0x18ed;eip=0x002c6b; 	T(SUB(sp, 2));	// 51878 sub     sp, 2 ;~ 18ED:2C6B
cs=0x18ed;eip=0x002c6e; 	X(PUSH(cs));	// 51879 push    cs ;~ 18ED:2C6E
cs=0x18ed;eip=0x002c6f; 	R(CALL(input_push_status,0));	// 51880 call    near ptr input_push_status ;~ 18ED:2C6F
cs=0x18ed;eip=0x002c72; 	T(CMP(g_is_busy, 0));	// 51881 cmp     g_is_busy, 0 ;~ 18ED:2C72
cs=0x18ed;eip=0x002c77; 	R(JZ(loc_2a168));	// 51882 jz      short loc_2A168 ;~ 18ED:2C77
cs=0x18ed;eip=0x002c79; 	T(SUB(ax, ax));	// 51883 sub     ax, ax ;~ 18ED:2C79
cs=0x18ed;eip=0x002c7b; 	X(PUSH(ax));	// 51884 push    ax ;~ 18ED:2C7B
cs=0x18ed;eip=0x002c7c; 	X(PUSH(ax));	// 51885 push    ax ;~ 18ED:2C7C
cs=0x18ed;eip=0x002c7d; 	X(PUSH(dialogarg2));	// 51886 push    dialogarg2 ;~ 18ED:2C7D
cs=0x18ed;eip=0x002c81; 	T(MOV(ax, 0x0FFFF));	// 51887 mov     ax, 0FFFFh ;~ 18ED:2C81
cs=0x18ed;eip=0x002c84; 	X(PUSH(ax));	// 51888 push    ax ;~ 18ED:2C84
cs=0x18ed;eip=0x002c85; 	X(PUSH(ax));	// 51889 push    ax ;~ 18ED:2C85
cs=0x18ed;eip=0x002c86; 	T(MOV(ax, offset(dseg,adea)));	// 51890 mov     ax, offset aDea ; "dea" ;~ 18ED:2C86
cs=0x18ed;eip=0x002c89; 	X(PUSH(ax));	// 51891 push    ax ;~ 18ED:2C89
cs=0x18ed;eip=0x002c8a; 	X(PUSH(word_44cee));	// 51892 push    word_44CEE ;~ 18ED:2C8A
cs=0x18ed;eip=0x002c8e; 	X(PUSH(mainresptr));	// 51893 push    mainresptr ;~ 18ED:2C8E
cs=0x18ed;eip=0x002c92; 	X(PUSH(cs));	// 51894 push    cs ;~ 18ED:2C92
cs=0x18ed;eip=0x002c93; 	R(CALL(locate_text_res,0));	// 51895 call    near ptr locate_text_res ;~ 18ED:2C93
cs=0x18ed;eip=0x002c96; 	T(ADD(sp, 6));	// 51896 add     sp, 6 ;~ 18ED:2C96
cs=0x18ed;eip=0x002c99; 	X(PUSH(dx));	// 51897 push    dx ;~ 18ED:2C99
cs=0x18ed;eip=0x002c9a; 	X(PUSH(ax));	// 51898 push    ax ;~ 18ED:2C9A
cs=0x18ed;eip=0x002c9b; 	T(MOV(ax, 1));	// 51899 mov     ax, 1 ;~ 18ED:2C9B
cs=0x18ed;eip=0x002c9e; 	X(PUSH(ax));	// 51900 push    ax ;~ 18ED:2C9E
cs=0x18ed;eip=0x002c9f; 	T(MOV(ax, 2));	// 51901 mov     ax, 2 ;~ 18ED:2C9F
cs=0x18ed;eip=0x002ca2; 	X(PUSH(ax));	// 51902 push    ax ;~ 18ED:2CA2
cs=0x18ed;eip=0x002ca3; 	X(PUSH(cs));	// 51903 push    cs ;~ 18ED:2CA3
cs=0x18ed;eip=0x002ca4; 	R(CALL(show_dialog,0));	// 51904 call    near ptr show_dialog ;~ 18ED:2CA4
cs=0x18ed;eip=0x002ca7; 	T(ADD(sp, 0x12));	// 51905 add     sp, 12h ;~ 18ED:2CA7
cs=0x18ed;eip=0x002caa; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 51906 mov     [bp+var_2], ax ;~ 18ED:2CAA
cs=0x18ed;eip=0x002cad; 	T(OR(ax, ax));	// 51907 or      ax, ax ;~ 18ED:2CAD
cs=0x18ed;eip=0x002caf; 	R(JZ(loc_2a196));	// 51908 jz      short loc_2A196 ;~ 18ED:2CAF
cs=0x18ed;eip=0x002cb1; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 51909 mov     [bp+var_2], 0 ;~ 18ED:2CB1
cs=0x18ed;eip=0x002cb6; 	R(JMP(loc_2a19b));	// 51910 jmp     short loc_2A19B ;~ 18ED:2CB6
loc_2a168:
	// 7916 
cs=0x18ed;eip=0x002cb8; 	T(SUB(ax, ax));	// 51914 sub     ax, ax ;~ 18ED:2CB8
cs=0x18ed;eip=0x002cba; 	X(PUSH(ax));	// 51915 push    ax ;~ 18ED:2CBA
cs=0x18ed;eip=0x002cbb; 	X(PUSH(ax));	// 51916 push    ax ;~ 18ED:2CBB
cs=0x18ed;eip=0x002cbc; 	X(PUSH(dialogarg2));	// 51917 push    dialogarg2 ;~ 18ED:2CBC
cs=0x18ed;eip=0x002cc0; 	T(MOV(ax, 0x0FFFF));	// 51918 mov     ax, 0FFFFh ;~ 18ED:2CC0
cs=0x18ed;eip=0x002cc3; 	X(PUSH(ax));	// 51919 push    ax ;~ 18ED:2CC3
cs=0x18ed;eip=0x002cc4; 	X(PUSH(ax));	// 51920 push    ax ;~ 18ED:2CC4
cs=0x18ed;eip=0x002cc5; 	T(MOV(ax, offset(dseg,ader)));	// 51921 mov     ax, offset aDer ; "der" ;~ 18ED:2CC5
cs=0x18ed;eip=0x002cc8; 	X(PUSH(ax));	// 51922 push    ax ;~ 18ED:2CC8
cs=0x18ed;eip=0x002cc9; 	X(PUSH(word_44cee));	// 51923 push    word_44CEE ;~ 18ED:2CC9
cs=0x18ed;eip=0x002ccd; 	X(PUSH(mainresptr));	// 51924 push    mainresptr ;~ 18ED:2CCD
cs=0x18ed;eip=0x002cd1; 	X(PUSH(cs));	// 51925 push    cs ;~ 18ED:2CD1
cs=0x18ed;eip=0x002cd2; 	R(CALL(locate_text_res,0));	// 51926 call    near ptr locate_text_res ;~ 18ED:2CD2
cs=0x18ed;eip=0x002cd5; 	T(ADD(sp, 6));	// 51927 add     sp, 6 ;~ 18ED:2CD5
cs=0x18ed;eip=0x002cd8; 	X(PUSH(dx));	// 51928 push    dx ;~ 18ED:2CD8
cs=0x18ed;eip=0x002cd9; 	X(PUSH(ax));	// 51929 push    ax ;~ 18ED:2CD9
cs=0x18ed;eip=0x002cda; 	T(MOV(ax, 1));	// 51930 mov     ax, 1 ;~ 18ED:2CDA
cs=0x18ed;eip=0x002cdd; 	X(PUSH(ax));	// 51931 push    ax ;~ 18ED:2CDD
cs=0x18ed;eip=0x002cde; 	X(PUSH(ax));	// 51932 push    ax ;~ 18ED:2CDE
cs=0x18ed;eip=0x002cdf; 	X(PUSH(cs));	// 51933 push    cs ;~ 18ED:2CDF
cs=0x18ed;eip=0x002ce0; 	R(CALL(show_dialog,0));	// 51934 call    near ptr show_dialog ;~ 18ED:2CE0
cs=0x18ed;eip=0x002ce3; 	T(ADD(sp, 0x12));	// 51935 add     sp, 12h ;~ 18ED:2CE3
loc_2a196:
	// 7917 
cs=0x18ed;eip=0x002ce6; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 1));	// 51938 mov     [bp+var_2], 1 ;~ 18ED:2CE6
loc_2a19b:
	// 7918 
cs=0x18ed;eip=0x002ceb; 	X(PUSH(cs));	// 51941 push    cs ;~ 18ED:2CEB
cs=0x18ed;eip=0x002cec; 	R(CALL(input_pop_status,0));	// 51942 call    near ptr input_pop_status ;~ 18ED:2CEC
cs=0x18ed;eip=0x002cef; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 51943 mov     ax, [bp+var_2] ;~ 18ED:2CEF
cs=0x18ed;eip=0x002cf2; 	T(MOV(sp, bp));	// 51944 mov     sp, bp ;~ 18ED:2CF2
cs=0x18ed;eip=0x002cf4; 	X(POP(bp));	// 51945 pop     bp ;~ 18ED:2CF4
cs=0x18ed;eip=0x002cf5; 	R(RETF(0));	// 51946 retf ;~ 18ED:2CF5
ensure_file_exists:
	// 51954 
#undef arg_0
#define arg_0 6
	// 51957 arg_0           = word ptr  6 ;~ 18ED:2CF6
ret_18ed_2cf6:
	// 7919 
cs=0x18ed;eip=0x002cf6; 	X(PUSH(bp));	// 51959 push    bp ;~ 18ED:2CF6
cs=0x18ed;eip=0x002cf7; 	T(MOV(bp, sp));	// 51960 mov     bp, sp ;~ 18ED:2CF7
cs=0x18ed;eip=0x002cf9; 	R(JMP(loc_2a1e8));	// 51961 jmp     short loc_2A1E8 ;~ 18ED:2CF9
loc_2a1ac:
	// 7920 
cs=0x18ed;eip=0x002cfc; 	T(SUB(ax, ax));	// 51966 sub     ax, ax ;~ 18ED:2CFC
cs=0x18ed;eip=0x002cfe; 	X(PUSH(ax));	// 51967 push    ax ;~ 18ED:2CFE
cs=0x18ed;eip=0x002cff; 	X(PUSH(ax));	// 51968 push    ax ;~ 18ED:2CFF
cs=0x18ed;eip=0x002d00; 	X(PUSH(dialogarg2));	// 51969 push    dialogarg2 ;~ 18ED:2D00
cs=0x18ed;eip=0x002d04; 	T(MOV(ax, 0x0FFFF));	// 51970 mov     ax, 0FFFFh ;~ 18ED:2D04
cs=0x18ed;eip=0x002d07; 	X(PUSH(ax));	// 51971 push    ax ;~ 18ED:2D07
cs=0x18ed;eip=0x002d08; 	X(PUSH(ax));	// 51972 push    ax ;~ 18ED:2D08
cs=0x18ed;eip=0x002d09; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 51973 mov     bx, [bp+arg_0] ;~ 18ED:2D09
cs=0x18ed;eip=0x002d0c; 	T(SHL(bx, 1));	// 51974 shl     bx, 1 ;~ 18ED:2D0C
cs=0x18ed;eip=0x002d0e; 	X(PUSH(*(dw*)(((aopp1_)+5)+bx)));	// 51975 push    word ptr (aOpp1_+5)[bx] ; "Insert Disk A/B .. etc presskey" ;~ 18ED:2D0E
cs=0x18ed;eip=0x002d12; 	X(PUSH(word_44cee));	// 51976 push    word_44CEE ;~ 18ED:2D12
cs=0x18ed;eip=0x002d16; 	X(PUSH(mainresptr));	// 51977 push    mainresptr ;~ 18ED:2D16
cs=0x18ed;eip=0x002d1a; 	X(PUSH(cs));	// 51978 push    cs ;~ 18ED:2D1A
cs=0x18ed;eip=0x002d1b; 	R(CALL(locate_text_res,0));	// 51979 call    near ptr locate_text_res ;~ 18ED:2D1B
cs=0x18ed;eip=0x002d1e; 	T(ADD(sp, 6));	// 51980 add     sp, 6 ;~ 18ED:2D1E
cs=0x18ed;eip=0x002d21; 	X(PUSH(dx));	// 51981 push    dx ;~ 18ED:2D21
cs=0x18ed;eip=0x002d22; 	X(PUSH(ax));	// 51982 push    ax ;~ 18ED:2D22
cs=0x18ed;eip=0x002d23; 	T(MOV(ax, 1));	// 51983 mov     ax, 1 ;~ 18ED:2D23
cs=0x18ed;eip=0x002d26; 	X(PUSH(ax));	// 51984 push    ax ;~ 18ED:2D26
cs=0x18ed;eip=0x002d27; 	X(PUSH(ax));	// 51985 push    ax ;~ 18ED:2D27
cs=0x18ed;eip=0x002d28; 	X(PUSH(cs));	// 51986 push    cs ;~ 18ED:2D28
cs=0x18ed;eip=0x002d29; 	R(CALL(show_dialog,0));	// 51987 call    near ptr show_dialog ;~ 18ED:2D29
cs=0x18ed;eip=0x002d2c; 	T(ADD(sp, 0x12));	// 51988 add     sp, 12h ;~ 18ED:2D2C
cs=0x18ed;eip=0x002d2f; 	X(PUSH(cs));	// 51989 push    cs ;~ 18ED:2D2F
cs=0x18ed;eip=0x002d30; 	R(CALL(mouse_draw_opaque_check,0));	// 51990 call    near ptr mouse_draw_opaque_check ;~ 18ED:2D30
cs=0x18ed;eip=0x002d33; 	X(MOV(kbormouse, 0));	// 51991 mov     kbormouse, 0 ;~ 18ED:2D33
loc_2a1e8:
	// 7921 
cs=0x18ed;eip=0x002d38; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 51994 mov     bx, [bp+arg_0] ;~ 18ED:2D38
cs=0x18ed;eip=0x002d3b; 	T(SHL(bx, 1));	// 51995 shl     bx, 1 ;~ 18ED:2D3B
cs=0x18ed;eip=0x002d3d; 	X(PUSH(*(dw*)(((db*)&findfilenames)+bx)));	// 51996 push    findfilenames[bx] ;~ 18ED:2D3D
cs=0x18ed;eip=0x002d41; 	R(CALLF(file_find,0));	// 51997 call    file_find ;~ 18ED:2D41
cs=0x18ed;eip=0x002d46; 	T(ADD(sp, 2));	// 51998 add     sp, 2 ;~ 18ED:2D46
cs=0x18ed;eip=0x002d49; 	T(OR(ax, ax));	// 51999 or      ax, ax ;~ 18ED:2D49
cs=0x18ed;eip=0x002d4b; 	R(JZ(loc_2a1ac));	// 52000 jz      short loc_2A1AC ;~ 18ED:2D4B
cs=0x18ed;eip=0x002d4d; 	X(POP(bp));	// 52001 pop     bp ;~ 18ED:2D4D
cs=0x18ed;eip=0x002d4e; 	R(RETF(0));	// 52002 retf ;~ 18ED:2D4E
do_mer_restext:
	// 52011 
cs=0x18ed;eip=0x002d50; 	T(SUB(ax, ax));	// 52012 sub     ax, ax ;~ 18ED:2D50
ret_18ed_2d52:
	// 7922 
cs=0x18ed;eip=0x002d52; 	X(PUSH(ax));	// 52013 push    ax ;~ 18ED:2D52
cs=0x18ed;eip=0x002d53; 	X(PUSH(ax));	// 52014 push    ax ;~ 18ED:2D53
cs=0x18ed;eip=0x002d54; 	X(PUSH(dialogarg2));	// 52015 push    dialogarg2 ;~ 18ED:2D54
cs=0x18ed;eip=0x002d58; 	T(MOV(ax, 0x0FFFF));	// 52016 mov     ax, 0FFFFh ;~ 18ED:2D58
cs=0x18ed;eip=0x002d5b; 	X(PUSH(ax));	// 52017 push    ax ;~ 18ED:2D5B
cs=0x18ed;eip=0x002d5c; 	X(PUSH(ax));	// 52018 push    ax ;~ 18ED:2D5C
cs=0x18ed;eip=0x002d5d; 	T(MOV(ax, offset(dseg,amer)));	// 52019 mov     ax, offset aMer ; "mer" ;~ 18ED:2D5D
cs=0x18ed;eip=0x002d60; 	X(PUSH(ax));	// 52020 push    ax ;~ 18ED:2D60
cs=0x18ed;eip=0x002d61; 	X(PUSH(word_44cee));	// 52021 push    word_44CEE ;~ 18ED:2D61
cs=0x18ed;eip=0x002d65; 	X(PUSH(mainresptr));	// 52022 push    mainresptr ;~ 18ED:2D65
cs=0x18ed;eip=0x002d69; 	X(PUSH(cs));	// 52023 push    cs ;~ 18ED:2D69
cs=0x18ed;eip=0x002d6a; 	R(CALL(locate_text_res,0));	// 52024 call    near ptr locate_text_res ;~ 18ED:2D6A
cs=0x18ed;eip=0x002d6d; 	T(ADD(sp, 6));	// 52025 add     sp, 6 ;~ 18ED:2D6D
cs=0x18ed;eip=0x002d70; 	X(PUSH(dx));	// 52026 push    dx ;~ 18ED:2D70
cs=0x18ed;eip=0x002d71; 	X(PUSH(ax));	// 52027 push    ax ;~ 18ED:2D71
cs=0x18ed;eip=0x002d72; 	T(MOV(ax, 1));	// 52028 mov     ax, 1 ;~ 18ED:2D72
cs=0x18ed;eip=0x002d75; 	X(PUSH(ax));	// 52029 push    ax ;~ 18ED:2D75
cs=0x18ed;eip=0x002d76; 	X(PUSH(ax));	// 52030 push    ax ;~ 18ED:2D76
cs=0x18ed;eip=0x002d77; 	X(PUSH(cs));	// 52031 push    cs ;~ 18ED:2D77
cs=0x18ed;eip=0x002d78; 	R(CALL(show_dialog,0));	// 52032 call    near ptr show_dialog ;~ 18ED:2D78
cs=0x18ed;eip=0x002d7b; 	T(ADD(sp, 0x12));	// 52033 add     sp, 12h ;~ 18ED:2D7B
cs=0x18ed;eip=0x002d7e; 	R(RETF(0));	// 52034 retf ;~ 18ED:2D7E
timer_get_delta_alt:
	// 52043 
cs=0x18ed;eip=0x002d80; 	R(CALLF(timer_get_delta,0));	// 52045 call    timer_get_delta ;~ 18ED:2D80
ret_18ed_2d85:
	// 7923 
cs=0x18ed;eip=0x002d85; 	R(RETF(0));	// 52046 retf ;~ 18ED:2D85
file_load_3dres:
	// 52054 
#undef var_54
#define var_54 -0x54
	// 52057 var_54          = byte ptr -54h ;~ 18ED:2D86
#undef var_4
#define var_4 -4
	// 52058 var_4           = word ptr -4 ;~ 18ED:2D86
#undef var_2
#define var_2 -2
	// 52059 var_2           = word ptr -2 ;~ 18ED:2D86
#undef arg_0
#define arg_0 6
	// 52060 arg_0           = word ptr  6 ;~ 18ED:2D86
ret_18ed_2d86:
	// 7924 
cs=0x18ed;eip=0x002d86; 	X(PUSH(bp));	// 52062 push    bp ;~ 18ED:2D86
cs=0x18ed;eip=0x002d87; 	T(MOV(bp, sp));	// 52063 mov     bp, sp ;~ 18ED:2D87
cs=0x18ed;eip=0x002d89; 	T(SUB(sp, 0x54));	// 52064 sub     sp, 54h ;~ 18ED:2D89
loc_2a23c:
	// 7925 
cs=0x18ed;eip=0x002d8c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 52067 push    [bp+arg_0] ;~ 18ED:2D8C
cs=0x18ed;eip=0x002d8f; 	T(ax = bp+var_54);	// 52068 lea     ax, [bp+var_54] ;~ 18ED:2D8F
cs=0x18ed;eip=0x002d92; 	X(PUSH(ax));	// 52069 push    ax              ; char * ;~ 18ED:2D92
cs=0x18ed;eip=0x002d93; 	R(CALLF(_strcpy,0));	// 52070 call    _strcpy ;~ 18ED:2D93
cs=0x18ed;eip=0x002d98; 	T(ADD(sp, 4));	// 52071 add     sp, 4 ;~ 18ED:2D98
cs=0x18ed;eip=0x002d9b; 	T(MOV(ax, offset(dseg,a_p3s)));	// 52072 mov     ax, offset a_p3s ; ".p3s" ;~ 18ED:2D9B
cs=0x18ed;eip=0x002d9e; 	X(PUSH(ax));	// 52073 push    ax ;~ 18ED:2D9E
cs=0x18ed;eip=0x002d9f; 	T(ax = bp+var_54);	// 52074 lea     ax, [bp+var_54] ;~ 18ED:2D9F
cs=0x18ed;eip=0x002da2; 	X(PUSH(ax));	// 52075 push    ax              ; char * ;~ 18ED:2DA2
cs=0x18ed;eip=0x002da3; 	R(CALLF(_strcat,0));	// 52076 call    _strcat ;~ 18ED:2DA3
cs=0x18ed;eip=0x002da8; 	T(ADD(sp, 4));	// 52077 add     sp, 4 ;~ 18ED:2DA8
cs=0x18ed;eip=0x002dab; 	T(ax = bp+var_54);	// 52078 lea     ax, [bp+var_54] ;~ 18ED:2DAB
cs=0x18ed;eip=0x002dae; 	X(PUSH(ax));	// 52079 push    ax              ; char * ;~ 18ED:2DAE
cs=0x18ed;eip=0x002daf; 	T(MOV(ax, 7));	// 52080 mov     ax, 7 ;~ 18ED:2DAF
cs=0x18ed;eip=0x002db2; 	X(PUSH(ax));	// 52081 push    ax              ; int ;~ 18ED:2DB2
cs=0x18ed;eip=0x002db3; 	X(PUSH(cs));	// 52082 push    cs ;~ 18ED:2DB3
cs=0x18ed;eip=0x002db4; 	R(CALL(file_load_resource,0));	// 52083 call    near ptr file_load_resource ;~ 18ED:2DB4
cs=0x18ed;eip=0x002db7; 	T(ADD(sp, 4));	// 52084 add     sp, 4 ;~ 18ED:2DB7
cs=0x18ed;eip=0x002dba; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 52085 mov     [bp+var_4], ax ;~ 18ED:2DBA
cs=0x18ed;eip=0x002dbd; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 52086 mov     [bp+var_2], dx ;~ 18ED:2DBD
cs=0x18ed;eip=0x002dc0; 	T(OR(ax, dx));	// 52087 or      ax, dx ;~ 18ED:2DC0
cs=0x18ed;eip=0x002dc2; 	R(JNZ(loc_2a2b2));	// 52088 jnz     short loc_2A2B2 ;~ 18ED:2DC2
cs=0x18ed;eip=0x002dc4; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 52089 push    [bp+arg_0] ;~ 18ED:2DC4
cs=0x18ed;eip=0x002dc7; 	T(ax = bp+var_54);	// 52090 lea     ax, [bp+var_54] ;~ 18ED:2DC7
cs=0x18ed;eip=0x002dca; 	X(PUSH(ax));	// 52091 push    ax              ; char * ;~ 18ED:2DCA
cs=0x18ed;eip=0x002dcb; 	R(CALLF(_strcpy,0));	// 52092 call    _strcpy ;~ 18ED:2DCB
cs=0x18ed;eip=0x002dd0; 	T(ADD(sp, 4));	// 52093 add     sp, 4 ;~ 18ED:2DD0
cs=0x18ed;eip=0x002dd3; 	T(MOV(ax, offset(dseg,a_3sh)));	// 52094 mov     ax, offset a_3sh ; ".3sh" ;~ 18ED:2DD3
cs=0x18ed;eip=0x002dd6; 	X(PUSH(ax));	// 52095 push    ax ;~ 18ED:2DD6
cs=0x18ed;eip=0x002dd7; 	T(ax = bp+var_54);	// 52096 lea     ax, [bp+var_54] ;~ 18ED:2DD7
cs=0x18ed;eip=0x002dda; 	X(PUSH(ax));	// 52097 push    ax              ; char * ;~ 18ED:2DDA
cs=0x18ed;eip=0x002ddb; 	R(CALLF(_strcat,0));	// 52098 call    _strcat ;~ 18ED:2DDB
cs=0x18ed;eip=0x002de0; 	T(ADD(sp, 4));	// 52099 add     sp, 4 ;~ 18ED:2DE0
cs=0x18ed;eip=0x002de3; 	T(ax = bp+var_54);	// 52100 lea     ax, [bp+var_54] ;~ 18ED:2DE3
cs=0x18ed;eip=0x002de6; 	X(PUSH(ax));	// 52101 push    ax              ; char * ;~ 18ED:2DE6
cs=0x18ed;eip=0x002de7; 	T(MOV(ax, 1));	// 52102 mov     ax, 1 ;~ 18ED:2DE7
cs=0x18ed;eip=0x002dea; 	X(PUSH(ax));	// 52103 push    ax              ; int ;~ 18ED:2DEA
cs=0x18ed;eip=0x002deb; 	X(PUSH(cs));	// 52104 push    cs ;~ 18ED:2DEB
cs=0x18ed;eip=0x002dec; 	R(CALL(file_load_resource,0));	// 52105 call    near ptr file_load_resource ;~ 18ED:2DEC
cs=0x18ed;eip=0x002def; 	T(ADD(sp, 4));	// 52106 add     sp, 4 ;~ 18ED:2DEF
cs=0x18ed;eip=0x002df2; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 52107 mov     [bp+var_4], ax ;~ 18ED:2DF2
cs=0x18ed;eip=0x002df5; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 52108 mov     [bp+var_2], dx ;~ 18ED:2DF5
cs=0x18ed;eip=0x002df8; 	T(OR(ax, dx));	// 52109 or      ax, dx ;~ 18ED:2DF8
cs=0x18ed;eip=0x002dfa; 	R(JNZ(loc_2a2b2));	// 52110 jnz     short loc_2A2B2 ;~ 18ED:2DFA
cs=0x18ed;eip=0x002dfc; 	X(PUSH(cs));	// 52111 push    cs ;~ 18ED:2DFC
cs=0x18ed;eip=0x002dfd; 	R(CALL(do_dea_textres,0));	// 52112 call    near ptr do_dea_textres ;~ 18ED:2DFD
cs=0x18ed;eip=0x002e00; 	R(JMP(loc_2a23c));	// 52113 jmp     short loc_2A23C ;~ 18ED:2E00
loc_2a2b2:
	// 7926 
cs=0x18ed;eip=0x002e02; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 52118 mov     ax, [bp+var_4] ;~ 18ED:2E02
cs=0x18ed;eip=0x002e05; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 52119 mov     dx, [bp+var_2] ;~ 18ED:2E05
cs=0x18ed;eip=0x002e08; 	T(MOV(sp, bp));	// 52120 mov     sp, bp ;~ 18ED:2E08
cs=0x18ed;eip=0x002e0a; 	X(POP(bp));	// 52121 pop     bp ;~ 18ED:2E0A
cs=0x18ed;eip=0x002e0b; 	R(RETF(0));	// 52122 retf ;~ 18ED:2E0B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return true;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::k_try_ret_joyinput: 	goto _try_ret_joyinput;
        case m2c::k_try_ret_mousebut01: 	goto _try_ret_mousebut01;
        case m2c::k_try_ret_mousebut2: 	goto _try_ret_mousebut2;
        case m2c::k_try_ret_mousebutinput: 	goto _try_ret_mousebutinput;
        case m2c::kaudio_unload: 	goto audio_unload;
        case m2c::kcall_read_line: 	goto call_read_line;
        case m2c::kcheck_input: 	goto check_input;
        case m2c::kcopy_string: 	goto copy_string;
        case m2c::kdef_299de: 	goto def_299de;
        case m2c::kdo_dea_textres: 	goto do_dea_textres;
        case m2c::kdo_dos_restext: 	goto do_dos_restext;
        case m2c::kdo_fileselect_dialog: 	goto do_fileselect_dialog;
        case m2c::kdo_key_restext: 	goto do_key_restext;
        case m2c::kdo_mer_restext: 	goto do_mer_restext;
        case m2c::kdo_mof_restext: 	goto do_mof_restext;
        case m2c::kdo_mou_restext: 	goto do_mou_restext;
        case m2c::kdo_mrl_textres: 	goto do_mrl_textres;
        case m2c::kdo_pau_restext: 	goto do_pau_restext;
        case m2c::kdo_sonsof_restext: 	goto do_sonsof_restext;
        case m2c::kfile_load_3dres: 	goto file_load_3dres;
        case m2c::kfile_load_resource: 	goto file_load_resource;
        case m2c::kfont_op2_alt: 	goto font_op2_alt;
        case m2c::kfont_set_fontdef: 	goto font_set_fontdef;
        case m2c::kformat_frame_as_string: 	goto format_frame_as_string;
        case m2c::kget_super_random: 	goto get_super_random;
        case m2c::khiscore_draw_text: 	goto hiscore_draw_text;
        case m2c::kinput_checking: 	goto input_checking;
        case m2c::kinput_do_checking: 	goto input_do_checking;
        case m2c::kinput_pop_status: 	goto input_pop_status;
        case m2c::kinput_push_status: 	goto input_push_status;
        case m2c::kinput_repeat_check: 	goto input_repeat_check;
        case m2c::kloc_274fd: 	goto loc_274fd;
        case m2c::kloc_27506: 	goto loc_27506;
        case m2c::kloc_275d8: 	goto loc_275d8;
        case m2c::kloc_27680: 	goto loc_27680;
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
        case m2c::kloc_285ec: 	goto loc_285ec;
        case m2c::kloc_285f4: 	goto loc_285f4;
        case m2c::kloc_28618: 	goto loc_28618;
        case m2c::kloc_28682: 	goto loc_28682;
        case m2c::kloc_286f2: 	goto loc_286f2;
        case m2c::kloc_286fd: 	goto loc_286fd;
        case m2c::kloc_286fe: 	goto loc_286fe;
        case m2c::kloc_2872f: 	goto loc_2872f;
        case m2c::kloc_28750: 	goto loc_28750;
        case m2c::kloc_28754: 	goto loc_28754;
        case m2c::kloc_28777: 	goto loc_28777;
        case m2c::kloc_28790: 	goto loc_28790;
        case m2c::kloc_28795: 	goto loc_28795;
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
        case m2c::kloc_289f8: 	goto loc_289f8;
        case m2c::kloc_28a6e: 	goto loc_28a6e;
        case m2c::kloc_28ae9: 	goto loc_28ae9;
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
        case m2c::kloc_28ea4: 	goto loc_28ea4;
        case m2c::kloc_28ea5: 	goto loc_28ea5;
        case m2c::kloc_28eda: 	goto loc_28eda;
        case m2c::kloc_28eea: 	goto loc_28eea;
        case m2c::kloc_28ef3: 	goto loc_28ef3;
        case m2c::kloc_28efa: 	goto loc_28efa;
        case m2c::kloc_28f18: 	goto loc_28f18;
        case m2c::kloc_28f1c: 	goto loc_28f1c;
        case m2c::kloc_2911a: 	goto loc_2911a;
        case m2c::kloc_2911d: 	goto loc_2911d;
        case m2c::kloc_2914a: 	goto loc_2914a;
        case m2c::kloc_29161: 	goto loc_29161;
        case m2c::kloc_29168: 	goto loc_29168;
        case m2c::kloc_29466: 	goto loc_29466;
        case m2c::kloc_294a0: 	goto loc_294a0;
        case m2c::kloc_294ad: 	goto loc_294ad;
        case m2c::kloc_294b0: 	goto loc_294b0;
        case m2c::kloc_294de: 	goto loc_294de;
        case m2c::kloc_294ec: 	goto loc_294ec;
        case m2c::kloc_294ef: 	goto loc_294ef;
        case m2c::kloc_2950a: 	goto loc_2950a;
        case m2c::kloc_29554: 	goto loc_29554;
        case m2c::kloc_29648: 	goto loc_29648;
        case m2c::kloc_29654: 	goto loc_29654;
        case m2c::kloc_2965c: 	goto loc_2965c;
        case m2c::kloc_29670: 	goto loc_29670;
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
        case m2c::kloc_2979a: 	goto loc_2979a;
        case m2c::kloc_2979f: 	goto loc_2979f;
        case m2c::kloc_297b2: 	goto loc_297b2;
        case m2c::kloc_297b5: 	goto loc_297b5;
        case m2c::kloc_297f4: 	goto loc_297f4;
        case m2c::kloc_29988: 	goto loc_29988;
        case m2c::kloc_299c2: 	goto loc_299c2;
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
        case m2c::kloc_29a8c: 	goto loc_29a8c;
        case m2c::kloc_29a9c: 	goto loc_29a9c;
        case m2c::kloc_29ab3: 	goto loc_29ab3;
        case m2c::kloc_29ac6: 	goto loc_29ac6;
        case m2c::kloc_29adc: 	goto loc_29adc;
        case m2c::kloc_29b30: 	goto loc_29b30;
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
        case m2c::kloc_2a1ac: 	goto loc_2a1ac;
        case m2c::kloc_2a1e8: 	goto loc_2a1e8;
        case m2c::kloc_2a23c: 	goto loc_2a23c;
        case m2c::kloc_2a2b2: 	goto loc_2a2b2;
        case m2c::klocate_shape_alt: 	goto locate_shape_alt;
        case m2c::klocate_text_res: 	goto locate_text_res;
        case m2c::klocret_28db5: 	goto locret_28db5;
        case m2c::klocret_28dc6: 	goto locret_28dc6;
        case m2c::kmouse_draw_opaque_check: 	goto mouse_draw_opaque_check;
        case m2c::kmouse_draw_transparent_check: 	goto mouse_draw_transparent_check;
        case m2c::kmouse_multi_hittest: 	goto mouse_multi_hittest;
        case m2c::knopsub_28f26: 	goto nopsub_28f26;
        case m2c::kparse_filepath_separators: 	goto parse_filepath_separators;
        case m2c::kprint_int_as_string_maybe: 	goto print_int_as_string_maybe;
        case m2c::kret_18ed_0: 	goto ret_18ed_0;
        case m2c::kret_18ed_1112: 	goto ret_18ed_1112;
        case m2c::kret_18ed_118a: 	goto ret_18ed_118a;
        case m2c::kret_18ed_1542: 	goto ret_18ed_1542;
        case m2c::kret_18ed_165e: 	goto ret_18ed_165e;
        case m2c::kret_18ed_18f3: 	goto ret_18ed_18f3;
        case m2c::kret_18ed_190b: 	goto ret_18ed_190b;
        case m2c::kret_18ed_1918: 	goto ret_18ed_1918;
        case m2c::kret_18ed_1954: 	goto ret_18ed_1954;
        case m2c::kret_18ed_1a77: 	goto ret_18ed_1a77;
        case m2c::kret_18ed_1a8f: 	goto ret_18ed_1a8f;
        case m2c::kret_18ed_1aa1: 	goto ret_18ed_1aa1;
        case m2c::kret_18ed_1abe: 	goto ret_18ed_1abe;
        case m2c::kret_18ed_1ad0: 	goto ret_18ed_1ad0;
        case m2c::kret_18ed_1ae8: 	goto ret_18ed_1ae8;
        case m2c::kret_18ed_1cbe: 	goto ret_18ed_1cbe;
        case m2c::kret_18ed_1e2c: 	goto ret_18ed_1e2c;
        case m2c::kret_18ed_21fc: 	goto ret_18ed_21fc;
        case m2c::kret_18ed_22c8: 	goto ret_18ed_22c8;
        case m2c::kret_18ed_22d6: 	goto ret_18ed_22d6;
        case m2c::kret_18ed_234c: 	goto ret_18ed_234c;
        case m2c::kret_18ed_23ab: 	goto ret_18ed_23ab;
        case m2c::kret_18ed_23da: 	goto ret_18ed_23da;
        case m2c::kret_18ed_23fc: 	goto ret_18ed_23fc;
        case m2c::kret_18ed_25d6: 	goto ret_18ed_25d6;
        case m2c::kret_18ed_263d: 	goto ret_18ed_263d;
        case m2c::kret_18ed_2659: 	goto ret_18ed_2659;
        case m2c::kret_18ed_2682: 	goto ret_18ed_2682;
        case m2c::kret_18ed_28eb: 	goto ret_18ed_28eb;
        case m2c::kret_18ed_2945: 	goto ret_18ed_2945;
        case m2c::kret_18ed_299b: 	goto ret_18ed_299b;
        case m2c::kret_18ed_29e9: 	goto ret_18ed_29e9;
        case m2c::kret_18ed_2a4b: 	goto ret_18ed_2a4b;
        case m2c::kret_18ed_2aad: 	goto ret_18ed_2aad;
        case m2c::kret_18ed_2cf6: 	goto ret_18ed_2cf6;
        case m2c::kret_18ed_2d52: 	goto ret_18ed_2d52;
        case m2c::kret_18ed_2d85: 	goto ret_18ed_2d85;
        case m2c::kshape3d_init_shape: 	goto shape3d_init_shape;
        case m2c::kshow_dialog: 	goto show_dialog;
        case m2c::kshow_waiting: 	goto show_waiting;
        case m2c::ksprite_blit_to_video: 	goto sprite_blit_to_video;
        case m2c::ksprite_copy_2_to_1_2: 	goto sprite_copy_2_to_1_2;
        case m2c::ksprite_copy_2_to_1_clear: 	goto sprite_copy_2_to_1_clear;
        case m2c::ksprite_copy_wnd_to_1: 	goto sprite_copy_wnd_to_1;
        case m2c::ksprite_copy_wnd_to_1_clear: 	goto sprite_copy_wnd_to_1_clear;
        case m2c::ksub_275c6: 	goto sub_275c6;
        case m2c::ksub_29772: 	goto sub_29772;
        case m2c::ktimer_get_delta_alt: 	goto timer_get_delta_alt;
        case m2c::kunload_resource: 	goto unload_resource;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

