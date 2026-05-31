/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool _group20(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group20:
    _begin:
file_load_shape2d_nofatal2:
	// 87642 
#undef arg_0
#define arg_0 6
	// 87644 arg_0           = word ptr  6 ;~ 2B83:0004
ret_2b83_4:
	// 10392 
cs=0x2b83;eip=0x000004; 	X(PUSH(bp));	// 87646 push    bp ;~ 2B83:0004
cs=0x2b83;eip=0x000005; 	T(MOV(bp, sp));	// 87647 mov     bp, sp ;~ 2B83:0005
cs=0x2b83;eip=0x000007; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 87648 push    [bp+arg_0] ;~ 2B83:0007
cs=0x2b83;eip=0x00000a; 	R(CALLF(file_load_shape2d_nofatal,0));	// 87649 call    file_load_shape2d_nofatal_thunk ;~ 2B83:000A
cs=0x2b83;eip=0x00000f; 	T(ADD(sp, 2));	// 87650 add     sp, 2 ;~ 2B83:000F
cs=0x2b83;eip=0x000012; 	X(POP(bp));	// 87651 pop     bp ;~ 2B83:0012
cs=0x2b83;eip=0x000013; 	R(RETF(0));	// 87652 retf ;~ 2B83:0013
file_combine_and_find:
	// 87661 
#undef var_50
#define var_50 -0x50
	// 87664 var_50          = byte ptr -50h ;~ 2B83:0014
#undef arg_0
#define arg_0 6
	// 87665 arg_0           = dword ptr  6 ;~ 2B83:0014
#undef arg_4
#define arg_4 0x0A
	// 87666 arg_4           = dword ptr  0Ah ;~ 2B83:0014
ret_2b83_14:
	// 10393 
cs=0x2b83;eip=0x000014; 	X(PUSH(bp));	// 87668 push    bp ;~ 2B83:0014
cs=0x2b83;eip=0x000015; 	T(MOV(bp, sp));	// 87669 mov     bp, sp ;~ 2B83:0015
cs=0x2b83;eip=0x000017; 	T(SUB(sp, 0x50));	// 87670 sub     sp, 50h ;~ 2B83:0017
cs=0x2b83;eip=0x00001a; 	T(ax = bp+var_50);	// 87671 lea     ax, [bp+var_50] ;~ 2B83:001A
cs=0x2b83;eip=0x00001d; 	X(PUSH(ax));	// 87672 push    ax              ; char * ;~ 2B83:001D
cs=0x2b83;eip=0x00001e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_4)))));	// 87673 push    word ptr [bp+arg_4] ; int ;~ 2B83:001E
cs=0x2b83;eip=0x000021; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 87674 push    word ptr [bp+arg_0+2] ;~ 2B83:0021
cs=0x2b83;eip=0x000024; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 87675 push    word ptr [bp+arg_0] ; char * ;~ 2B83:0024
cs=0x2b83;eip=0x000027; 	R(CALLF(file_build_path,0));	// 87676 call    file_build_path ;~ 2B83:0027
cs=0x2b83;eip=0x00002c; 	T(ADD(sp, 8));	// 87677 add     sp, 8 ;~ 2B83:002C
cs=0x2b83;eip=0x00002f; 	T(ax = bp+var_50);	// 87678 lea     ax, [bp+var_50] ;~ 2B83:002F
cs=0x2b83;eip=0x000032; 	X(PUSH(ax));	// 87679 push    ax ;~ 2B83:0032
cs=0x2b83;eip=0x000033; 	R(CALLF(file_find,0));	// 87680 call    file_find ;~ 2B83:0033
cs=0x2b83;eip=0x000038; 	T(MOV(sp, bp));	// 87681 mov     sp, bp ;~ 2B83:0038
cs=0x2b83;eip=0x00003a; 	X(POP(bp));	// 87682 pop     bp ;~ 2B83:003A
cs=0x2b83;eip=0x00003b; 	R(RETF(0));	// 87683 retf ;~ 2B83:003B
file_find_next_alt:
	// 87690 
cs=0x2b83;eip=0x00003c; 	R(CALLF(file_find_next,0));	// 87692 call    file_find_next ;~ 2B83:003C
ret_2b83_41:
	// 10394 
cs=0x2b83;eip=0x000041; 	R(RETF(0));	// 87693 retf ;~ 2B83:0041
nullsub_1:
	// 87700 
cs=0x2b83;eip=0x000042; 	R(RETF(0));	// 87702 retf ;~ 2B83:0042
nullsub_2:
	// 87711 
cs=0x2b83;eip=0x000044; 	R(RETF(0));	// 87713 retf ;~ 2B83:0044
init_main:
	// 87723 
#undef var_1e
#define var_1e -0x1E
	// 87725 var_1E          = word ptr -1Eh ;~ 2B83:0046
#undef var_1c
#define var_1c -0x1C
	// 87726 var_1C          = word ptr -1Ch ;~ 2B83:0046
#undef var_1a
#define var_1a -0x1A
	// 87727 var_1A          = word ptr -1Ah ;~ 2B83:0046
#undef var_18
#define var_18 -0x18
	// 87728 var_18          = word ptr -18h ;~ 2B83:0046
#undef var_12
#define var_12 -0x12
	// 87729 var_12          = byte ptr -12h ;~ 2B83:0046
#undef var_10
#define var_10 -0x10
	// 87730 var_10          = word ptr -10h ;~ 2B83:0046
#undef var_e
#define var_e -0x0E
	// 87731 var_E           = byte ptr -0Eh ;~ 2B83:0046
#undef var_c
#define var_c -0x0C
	// 87732 var_C           = word ptr -0Ch ;~ 2B83:0046
#undef var_a
#define var_a -0x0A
	// 87733 var_A           = word ptr -0Ah ;~ 2B83:0046
#undef var_8
#define var_8 -8
	// 87734 var_8           = word ptr -8 ;~ 2B83:0046
#undef var_6
#define var_6 -6
	// 87735 var_6           = word ptr -6 ;~ 2B83:0046
#undef var_4
#define var_4 -4
	// 87736 var_4           = word ptr -4 ;~ 2B83:0046
#undef var_2
#define var_2 -2
	// 87737 var_2           = byte ptr -2 ;~ 2B83:0046
#undef arg_0
#define arg_0 6
	// 87738 arg_0           = word ptr  6 ;~ 2B83:0046
#undef arg_2
#define arg_2 8
	// 87739 arg_2           = word ptr  8 ;~ 2B83:0046
ret_2b83_46:
	// 10395 
cs=0x2b83;eip=0x000046; 	X(PUSH(bp));	// 87741 push    bp ;~ 2B83:0046
cs=0x2b83;eip=0x000047; 	T(MOV(bp, sp));	// 87742 mov     bp, sp ;~ 2B83:0047
cs=0x2b83;eip=0x000049; 	T(SUB(sp, 0x1E));	// 87743 sub     sp, 1Eh ;~ 2B83:0049
cs=0x2b83;eip=0x00004c; 	X(PUSH(di));	// 87744 push    di ;~ 2B83:004C
cs=0x2b83;eip=0x00004d; 	X(PUSH(si));	// 87745 push    si ;~ 2B83:004D
cs=0x2b83;eip=0x00004e; 	R(CALLF(kb_init_interrupt,0));	// 87746 call    kb_init_interrupt ;~ 2B83:004E
cs=0x2b83;eip=0x000053; 	R(CALLF(kb_shift_checking2,0));	// 87747 call    kb_shift_checking2 ;~ 2B83:0053
cs=0x2b83;eip=0x000058; 	R(CALLF(kb_call_readchar_callback,0));	// 87748 call    kb_call_readchar_callback ;~ 2B83:0058
cs=0x2b83;eip=0x00005d; 	T(MOV(ax, m2c::kdo_mrl_textres));	// 87749 mov     ax, offset do_mrl_textres ;~ 2B83:005D
cs=0x2b83;eip=0x000060; 	T(MOV(dx, seg_offset(seg008)));	// 87750 mov     dx, seg seg008 ;~ 2B83:0060
cs=0x2b83;eip=0x000063; 	X(PUSH(dx));	// 87751 push    dx ;~ 2B83:0063
cs=0x2b83;eip=0x000064; 	X(PUSH(ax));	// 87752 push    ax ;~ 2B83:0064
cs=0x2b83;eip=0x000065; 	T(MOV(ax, 7));	// 87753 mov     ax, 7 ;~ 2B83:0065
cs=0x2b83;eip=0x000068; 	X(PUSH(ax));	// 87754 push    ax ;~ 2B83:0068
cs=0x2b83;eip=0x000069; 	R(CALLF(kb_reg_callback,0));	// 87755 call    kb_reg_callback ;~ 2B83:0069
cs=0x2b83;eip=0x00006e; 	T(ADD(sp, 6));	// 87756 add     sp, 6 ;~ 2B83:006E
cs=0x2b83;eip=0x000071; 	T(MOV(ax, m2c::kdo_joy_restext));	// 87757 mov     ax, offset do_joy_restext ;~ 2B83:0071
cs=0x2b83;eip=0x000074; 	T(MOV(dx, seg_offset(seg008)));	// 87758 mov     dx, seg seg008 ;~ 2B83:0074
cs=0x2b83;eip=0x000077; 	X(PUSH(dx));	// 87759 push    dx ;~ 2B83:0077
cs=0x2b83;eip=0x000078; 	X(PUSH(ax));	// 87760 push    ax ;~ 2B83:0078
cs=0x2b83;eip=0x000079; 	T(MOV(ax, 0x0A));	// 87761 mov     ax, 0Ah ;~ 2B83:0079
cs=0x2b83;eip=0x00007c; 	X(PUSH(ax));	// 87762 push    ax ;~ 2B83:007C
cs=0x2b83;eip=0x00007d; 	R(CALLF(kb_reg_callback,0));	// 87763 call    kb_reg_callback ;~ 2B83:007D
cs=0x2b83;eip=0x000082; 	T(ADD(sp, 6));	// 87764 add     sp, 6 ;~ 2B83:0082
cs=0x2b83;eip=0x000085; 	T(MOV(ax, m2c::kdo_key_restext));	// 87765 mov     ax, offset do_key_restext ;~ 2B83:0085
cs=0x2b83;eip=0x000088; 	T(MOV(dx, seg_offset(seg008)));	// 87766 mov     dx, seg seg008 ;~ 2B83:0088
cs=0x2b83;eip=0x00008b; 	X(PUSH(dx));	// 87767 push    dx ;~ 2B83:008B
cs=0x2b83;eip=0x00008c; 	X(PUSH(ax));	// 87768 push    ax ;~ 2B83:008C
cs=0x2b83;eip=0x00008d; 	T(MOV(ax, 0x0B));	// 87769 mov     ax, 0Bh ;~ 2B83:008D
cs=0x2b83;eip=0x000090; 	X(PUSH(ax));	// 87770 push    ax ;~ 2B83:0090
cs=0x2b83;eip=0x000091; 	R(CALLF(kb_reg_callback,0));	// 87771 call    kb_reg_callback ;~ 2B83:0091
cs=0x2b83;eip=0x000096; 	T(ADD(sp, 6));	// 87772 add     sp, 6 ;~ 2B83:0096
cs=0x2b83;eip=0x000099; 	T(MOV(ax, m2c::kdo_mof_restext));	// 87773 mov     ax, offset do_mof_restext ;~ 2B83:0099
cs=0x2b83;eip=0x00009c; 	T(MOV(dx, seg_offset(seg008)));	// 87774 mov     dx, seg seg008 ;~ 2B83:009C
cs=0x2b83;eip=0x00009f; 	X(PUSH(dx));	// 87775 push    dx ;~ 2B83:009F
cs=0x2b83;eip=0x0000a0; 	X(PUSH(ax));	// 87776 push    ax ;~ 2B83:00A0
cs=0x2b83;eip=0x0000a1; 	T(MOV(ax, 0x3200));	// 87777 mov     ax, 3200h ;~ 2B83:00A1
cs=0x2b83;eip=0x0000a4; 	X(PUSH(ax));	// 87778 push    ax ;~ 2B83:00A4
cs=0x2b83;eip=0x0000a5; 	R(CALLF(kb_reg_callback,0));	// 87779 call    kb_reg_callback ;~ 2B83:00A5
cs=0x2b83;eip=0x0000aa; 	T(ADD(sp, 6));	// 87780 add     sp, 6 ;~ 2B83:00AA
cs=0x2b83;eip=0x0000ad; 	T(MOV(ax, m2c::kdo_pau_restext));	// 87781 mov     ax, offset do_pau_restext ;~ 2B83:00AD
cs=0x2b83;eip=0x0000b0; 	T(MOV(dx, seg_offset(seg008)));	// 87782 mov     dx, seg seg008 ;~ 2B83:00B0
cs=0x2b83;eip=0x0000b3; 	X(PUSH(dx));	// 87783 push    dx ;~ 2B83:00B3
cs=0x2b83;eip=0x0000b4; 	X(PUSH(ax));	// 87784 push    ax ;~ 2B83:00B4
cs=0x2b83;eip=0x0000b5; 	T(MOV(ax, 0x10));	// 87785 mov     ax, 10h ;~ 2B83:00B5
cs=0x2b83;eip=0x0000b8; 	X(PUSH(ax));	// 87786 push    ax ;~ 2B83:00B8
cs=0x2b83;eip=0x0000b9; 	R(CALLF(kb_reg_callback,0));	// 87787 call    kb_reg_callback ;~ 2B83:00B9
cs=0x2b83;eip=0x0000be; 	T(ADD(sp, 6));	// 87788 add     sp, 6 ;~ 2B83:00BE
cs=0x2b83;eip=0x0000c1; 	T(MOV(ax, m2c::kdo_pau_restext));	// 87789 mov     ax, offset do_pau_restext ;~ 2B83:00C1
cs=0x2b83;eip=0x0000c4; 	T(MOV(dx, seg_offset(seg008)));	// 87790 mov     dx, seg seg008 ;~ 2B83:00C4
cs=0x2b83;eip=0x0000c7; 	X(PUSH(dx));	// 87791 push    dx ;~ 2B83:00C7
cs=0x2b83;eip=0x0000c8; 	X(PUSH(ax));	// 87792 push    ax ;~ 2B83:00C8
cs=0x2b83;eip=0x0000c9; 	T(MOV(ax, 0x70));	// 87793 mov     ax, 70h ; 'p' ;~ 2B83:00C9
cs=0x2b83;eip=0x0000cc; 	X(PUSH(ax));	// 87794 push    ax ;~ 2B83:00CC
cs=0x2b83;eip=0x0000cd; 	R(CALLF(kb_reg_callback,0));	// 87795 call    kb_reg_callback ;~ 2B83:00CD
cs=0x2b83;eip=0x0000d2; 	T(ADD(sp, 6));	// 87796 add     sp, 6 ;~ 2B83:00D2
cs=0x2b83;eip=0x0000d5; 	T(MOV(ax, m2c::kdo_dos_restext));	// 87797 mov     ax, offset do_dos_restext ;~ 2B83:00D5
cs=0x2b83;eip=0x0000d8; 	T(MOV(dx, seg_offset(seg008)));	// 87798 mov     dx, seg seg008 ;~ 2B83:00D8
cs=0x2b83;eip=0x0000db; 	X(PUSH(dx));	// 87799 push    dx ;~ 2B83:00DB
cs=0x2b83;eip=0x0000dc; 	X(PUSH(ax));	// 87800 push    ax ;~ 2B83:00DC
cs=0x2b83;eip=0x0000dd; 	T(MOV(ax, 0x11));	// 87801 mov     ax, 11h ;~ 2B83:00DD
cs=0x2b83;eip=0x0000e0; 	X(PUSH(ax));	// 87802 push    ax ;~ 2B83:00E0
cs=0x2b83;eip=0x0000e1; 	R(CALLF(kb_reg_callback,0));	// 87803 call    kb_reg_callback ;~ 2B83:00E1
cs=0x2b83;eip=0x0000e6; 	T(ADD(sp, 6));	// 87804 add     sp, 6 ;~ 2B83:00E6
cs=0x2b83;eip=0x0000e9; 	T(MOV(ax, m2c::kdo_sonsof_restext));	// 87805 mov     ax, offset do_sonsof_restext ;~ 2B83:00E9
cs=0x2b83;eip=0x0000ec; 	T(MOV(dx, seg_offset(seg008)));	// 87806 mov     dx, seg seg008 ;~ 2B83:00EC
cs=0x2b83;eip=0x0000ef; 	X(PUSH(dx));	// 87807 push    dx ;~ 2B83:00EF
cs=0x2b83;eip=0x0000f0; 	X(PUSH(ax));	// 87808 push    ax ;~ 2B83:00F0
cs=0x2b83;eip=0x0000f1; 	T(MOV(ax, 0x13));	// 87809 mov     ax, 13h ;~ 2B83:00F1
cs=0x2b83;eip=0x0000f4; 	X(PUSH(ax));	// 87810 push    ax ;~ 2B83:00F4
cs=0x2b83;eip=0x0000f5; 	R(CALLF(kb_reg_callback,0));	// 87811 call    kb_reg_callback ;~ 2B83:00F5
cs=0x2b83;eip=0x0000fa; 	T(ADD(sp, 6));	// 87812 add     sp, 6 ;~ 2B83:00FA
cs=0x2b83;eip=0x0000fd; 	T(MOV(ax, m2c::kdo_dos_restext));	// 87813 mov     ax, offset do_dos_restext ;~ 2B83:00FD
cs=0x2b83;eip=0x000100; 	T(MOV(dx, seg_offset(seg008)));	// 87814 mov     dx, seg seg008 ;~ 2B83:0100
cs=0x2b83;eip=0x000103; 	X(PUSH(dx));	// 87815 push    dx ;~ 2B83:0103
cs=0x2b83;eip=0x000104; 	X(PUSH(ax));	// 87816 push    ax ;~ 2B83:0104
cs=0x2b83;eip=0x000105; 	T(MOV(ax, 0x18));	// 87817 mov     ax, 18h ;~ 2B83:0105
cs=0x2b83;eip=0x000108; 	X(PUSH(ax));	// 87818 push    ax ;~ 2B83:0108
cs=0x2b83;eip=0x000109; 	R(CALLF(kb_reg_callback,0));	// 87819 call    kb_reg_callback ;~ 2B83:0109
cs=0x2b83;eip=0x00010e; 	T(ADD(sp, 6));	// 87820 add     sp, 6 ;~ 2B83:010E
cs=0x2b83;eip=0x000111; 	X(MOV(video_flag1_is1, 1));	// 87821 mov     video_flag1_is1, 1 ;~ 2B83:0111
cs=0x2b83;eip=0x000117; 	X(MOV(video_flag2_is1, 1));	// 87822 mov     video_flag2_is1, 1 ;~ 2B83:0117
cs=0x2b83;eip=0x00011d; 	X(MOV(video_flag3_isffff, 0x0FFFF));	// 87823 mov     video_flag3_isFFFF, 0FFFFh ;~ 2B83:011D
cs=0x2b83;eip=0x000123; 	X(MOV(video_flag4_is1, 1));	// 87824 mov     video_flag4_is1, 1 ;~ 2B83:0123
cs=0x2b83;eip=0x000129; 	R(CALLF(mmgr_alloc_a000,0));	// 87825 call    mmgr_alloc_a000 ;~ 2B83:0129
cs=0x2b83;eip=0x00012e; 	X(MOV(video_flag5_is0, 0));	// 87826 mov     video_flag5_is0, 0 ;~ 2B83:012E
cs=0x2b83;eip=0x000133; 	X(MOV(video_flag6_is1, 1));	// 87827 mov     video_flag6_is1, 1 ;~ 2B83:0133
cs=0x2b83;eip=0x000138; 	X(MOV(textresprefix, 'e'));	// 87828 mov     textresprefix, 'e' ;~ 2B83:0138
cs=0x2b83;eip=0x00013d; 	X(MOV(*(raddr(ss,bp+var_12)), 0));	// 87829 mov     [bp+var_12], 0 ;~ 2B83:013D
cs=0x2b83;eip=0x000141; 	X(MOV(*(raddr(ss,bp+var_e)), 0));	// 87830 mov     [bp+var_E], 0 ;~ 2B83:0141
cs=0x2b83;eip=0x000145; 	X(MOV(*(raddr(ss,bp+var_2)), 0));	// 87831 mov     [bp+var_2], 0 ;~ 2B83:0145
cs=0x2b83;eip=0x000149; 	T(MOV(si, 1));	// 87832 mov     si, 1 ;~ 2B83:0149
cs=0x2b83;eip=0x00014c; 	R(JMP(loc_39f63));	// 87833 jmp     short loc_39F63 ;~ 2B83:014C
loc_39f5e:
	// 10396 
cs=0x2b83;eip=0x00014e; 	X(MOV(*(raddr(ss,bp+var_12)), 1));	// 87837 mov     [bp+var_12], 1 ;~ 2B83:014E
loc_39f62:
	// 10397 
cs=0x2b83;eip=0x000152; 	T(INC(si));	// 87841 inc     si ;~ 2B83:0152
loc_39f63:
	// 10398 
cs=0x2b83;eip=0x000153; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), si));	// 87844 cmp     [bp+arg_0], si ;~ 2B83:0153
cs=0x2b83;eip=0x000156; 	R(JG(loc_39f6b));	// 87845 jg      short loc_39F6B ;~ 2B83:0156
cs=0x2b83;eip=0x000158; 	R(JMP(loc_3a07a));	// 87846 jmp     loc_3A07A ;~ 2B83:0158
loc_39f6b:
	// 10399 
cs=0x2b83;eip=0x00015b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 87850 mov     bx, [bp+arg_2] ;~ 2B83:015B
cs=0x2b83;eip=0x00015e; 	T(MOV(ax, si));	// 87851 mov     ax, si ;~ 2B83:015E
cs=0x2b83;eip=0x000160; 	T(SHL(ax, 1));	// 87852 shl     ax, 1 ;~ 2B83:0160
cs=0x2b83;eip=0x000162; 	T(ADD(bx, ax));	// 87853 add     bx, ax ;~ 2B83:0162
cs=0x2b83;eip=0x000164; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 87854 mov     ax, [bx] ;~ 2B83:0164
cs=0x2b83;eip=0x000166; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 87855 mov     [bp+var_1E], ax ;~ 2B83:0166
cs=0x2b83;eip=0x000169; 	T(MOV(bx, ax));	// 87856 mov     bx, ax ;~ 2B83:0169
cs=0x2b83;eip=0x00016b; 	T(CMP(*(raddr(ds,bx)), 0x2F));	// 87857 cmp     byte ptr [bx], 2Fh ; '/' ;~ 2B83:016B
cs=0x2b83;eip=0x00016e; 	R(JNZ(loc_39f62));	// 87858 jnz     short loc_39F62 ;~ 2B83:016E
cs=0x2b83;eip=0x000170; 	T(MOV(al, *(raddr(ds,bx+1))));	// 87859 mov     al, [bx+1] ;~ 2B83:0170
cs=0x2b83;eip=0x000173; 	T(CBW);	// 87860 cbw ;~ 2B83:0173
cs=0x2b83;eip=0x000174; 	T(CMP(ax, 0x68));	// 87861 cmp     ax, 68h ; 'h' ;~ 2B83:0174
cs=0x2b83;eip=0x000177; 	R(JZ(loc_39f5e));	// 87862 jz      short loc_39F5E ;~ 2B83:0177
cs=0x2b83;eip=0x000179; 	T(CMP(ax, 0x6E));	// 87863 cmp     ax, 6Eh ; 'n' ;~ 2B83:0179
cs=0x2b83;eip=0x00017c; 	R(JNZ(loc_39f91));	// 87864 jnz     short loc_39F91 ;~ 2B83:017C
cs=0x2b83;eip=0x00017e; 	R(JMP(loc_3a046));	// 87865 jmp     loc_3A046 ;~ 2B83:017E
loc_39f91:
	// 10400 
cs=0x2b83;eip=0x000181; 	T(CMP(ax, 0x73));	// 87869 cmp     ax, 73h ; 's' ;~ 2B83:0181
cs=0x2b83;eip=0x000184; 	R(JNZ(loc_39f62));	// 87870 jnz     short loc_39F62 ;~ 2B83:0184
cs=0x2b83;eip=0x000186; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 87871 mov     bx, [bp+arg_2] ;~ 2B83:0186
cs=0x2b83;eip=0x000189; 	T(MOV(ax, si));	// 87872 mov     ax, si ;~ 2B83:0189
cs=0x2b83;eip=0x00018b; 	T(SHL(ax, 1));	// 87873 shl     ax, 1 ;~ 2B83:018B
cs=0x2b83;eip=0x00018d; 	T(ADD(bx, ax));	// 87874 add     bx, ax ;~ 2B83:018D
cs=0x2b83;eip=0x00018f; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 87875 mov     ax, [bx] ;~ 2B83:018F
cs=0x2b83;eip=0x000191; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 87876 mov     [bp+var_1E], ax ;~ 2B83:0191
cs=0x2b83;eip=0x000194; 	T(MOV(bx, ax));	// 87877 mov     bx, ax ;~ 2B83:0194
cs=0x2b83;eip=0x000196; 	T(MOV(al, *(raddr(ds,bx+2))));	// 87878 mov     al, [bx+2] ;~ 2B83:0196
cs=0x2b83;eip=0x000199; 	T(CBW);	// 87879 cbw ;~ 2B83:0199
cs=0x2b83;eip=0x00019a; 	T(MOV(bx, ax));	// 87880 mov     bx, ax ;~ 2B83:019A
cs=0x2b83;eip=0x00019c; 	T(TEST(*((g_ascii_props)+bx), 1));	// 87881 test    g_ascii_props[bx], 1 ;~ 2B83:019C
cs=0x2b83;eip=0x0001a1; 	R(JZ(loc_39fc8));	// 87882 jz      short loc_39FC8 ;~ 2B83:01A1
cs=0x2b83;eip=0x0001a3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 87883 mov     bx, [bp+arg_2] ;~ 2B83:01A3
cs=0x2b83;eip=0x0001a6; 	T(MOV(ax, si));	// 87884 mov     ax, si ;~ 2B83:01A6
cs=0x2b83;eip=0x0001a8; 	T(SHL(ax, 1));	// 87885 shl     ax, 1 ;~ 2B83:01A8
cs=0x2b83;eip=0x0001aa; 	T(ADD(bx, ax));	// 87886 add     bx, ax ;~ 2B83:01AA
cs=0x2b83;eip=0x0001ac; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 87887 mov     bx, [bx] ;~ 2B83:01AC
cs=0x2b83;eip=0x0001ae; 	T(MOV(al, *(raddr(ds,bx+2))));	// 87888 mov     al, [bx+2] ;~ 2B83:01AE
cs=0x2b83;eip=0x0001b1; 	T(CBW);	// 87889 cbw ;~ 2B83:01B1
cs=0x2b83;eip=0x0001b2; 	T(ADD(ax, 0x20));	// 87890 add     ax, 20h ; ' ' ;~ 2B83:01B2
cs=0x2b83;eip=0x0001b5; 	R(JMP(loc_39fd7));	// 87891 jmp     short loc_39FD7 ;~ 2B83:01B5
loc_39fc8:
	// 10401 
cs=0x2b83;eip=0x0001b8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 87896 mov     bx, [bp+arg_2] ;~ 2B83:01B8
cs=0x2b83;eip=0x0001bb; 	T(MOV(ax, si));	// 87897 mov     ax, si ;~ 2B83:01BB
cs=0x2b83;eip=0x0001bd; 	T(SHL(ax, 1));	// 87898 shl     ax, 1 ;~ 2B83:01BD
cs=0x2b83;eip=0x0001bf; 	T(ADD(bx, ax));	// 87899 add     bx, ax ;~ 2B83:01BF
cs=0x2b83;eip=0x0001c1; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 87900 mov     bx, [bx] ;~ 2B83:01C1
cs=0x2b83;eip=0x0001c3; 	T(MOV(al, *(raddr(ds,bx+2))));	// 87901 mov     al, [bx+2] ;~ 2B83:01C3
cs=0x2b83;eip=0x0001c6; 	T(CBW);	// 87902 cbw ;~ 2B83:01C6
loc_39fd7:
	// 10402 
cs=0x2b83;eip=0x0001c7; 	T(CMP(ax, 0x73));	// 87905 cmp     ax, 73h ; 's' ;~ 2B83:01C7
cs=0x2b83;eip=0x0001ca; 	R(JNZ(loc_3a022));	// 87906 jnz     short loc_3A022 ;~ 2B83:01CA
cs=0x2b83;eip=0x0001cc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_1e))));	// 87907 mov     bx, [bp+var_1E] ;~ 2B83:01CC
cs=0x2b83;eip=0x0001cf; 	T(MOV(al, *(raddr(ds,bx+3))));	// 87908 mov     al, [bx+3] ;~ 2B83:01CF
cs=0x2b83;eip=0x0001d2; 	T(CBW);	// 87909 cbw ;~ 2B83:01D2
cs=0x2b83;eip=0x0001d3; 	T(MOV(bx, ax));	// 87910 mov     bx, ax ;~ 2B83:01D3
cs=0x2b83;eip=0x0001d5; 	T(TEST(*((g_ascii_props)+bx), 1));	// 87911 test    g_ascii_props[bx], 1 ;~ 2B83:01D5
cs=0x2b83;eip=0x0001da; 	R(JZ(loc_3a000));	// 87912 jz      short loc_3A000 ;~ 2B83:01DA
cs=0x2b83;eip=0x0001dc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 87913 mov     bx, [bp+arg_2] ;~ 2B83:01DC
cs=0x2b83;eip=0x0001df; 	T(MOV(ax, si));	// 87914 mov     ax, si ;~ 2B83:01DF
cs=0x2b83;eip=0x0001e1; 	T(SHL(ax, 1));	// 87915 shl     ax, 1 ;~ 2B83:01E1
cs=0x2b83;eip=0x0001e3; 	T(ADD(bx, ax));	// 87916 add     bx, ax ;~ 2B83:01E3
cs=0x2b83;eip=0x0001e5; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 87917 mov     bx, [bx] ;~ 2B83:01E5
cs=0x2b83;eip=0x0001e7; 	T(MOV(al, *(raddr(ds,bx+3))));	// 87918 mov     al, [bx+3] ;~ 2B83:01E7
cs=0x2b83;eip=0x0001ea; 	T(CBW);	// 87919 cbw ;~ 2B83:01EA
cs=0x2b83;eip=0x0001eb; 	T(ADD(ax, 0x20));	// 87920 add     ax, 20h ; ' ' ;~ 2B83:01EB
cs=0x2b83;eip=0x0001ee; 	R(JMP(loc_3a00f));	// 87921 jmp     short loc_3A00F ;~ 2B83:01EE
loc_3a000:
	// 10403 
cs=0x2b83;eip=0x0001f0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 87925 mov     bx, [bp+arg_2] ;~ 2B83:01F0
cs=0x2b83;eip=0x0001f3; 	T(MOV(ax, si));	// 87926 mov     ax, si ;~ 2B83:01F3
cs=0x2b83;eip=0x0001f5; 	T(SHL(ax, 1));	// 87927 shl     ax, 1 ;~ 2B83:01F5
cs=0x2b83;eip=0x0001f7; 	T(ADD(bx, ax));	// 87928 add     bx, ax ;~ 2B83:01F7
cs=0x2b83;eip=0x0001f9; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 87929 mov     bx, [bx] ;~ 2B83:01F9
cs=0x2b83;eip=0x0001fb; 	T(MOV(al, *(raddr(ds,bx+3))));	// 87930 mov     al, [bx+3] ;~ 2B83:01FB
cs=0x2b83;eip=0x0001fe; 	T(CBW);	// 87931 cbw ;~ 2B83:01FE
loc_3a00f:
	// 10404 
cs=0x2b83;eip=0x0001ff; 	T(CMP(ax, 0x62));	// 87934 cmp     ax, 62h ; 'b' ;~ 2B83:01FF
cs=0x2b83;eip=0x000202; 	R(JNZ(loc_3a022));	// 87935 jnz     short loc_3A022 ;~ 2B83:0202
cs=0x2b83;eip=0x000204; 	X(MOV(*(audiodriverstring), 0x61));	// 87936 mov     audiodriverstring, 61h ; 'a' ;~ 2B83:0204
cs=0x2b83;eip=0x000209; 	X(MOV(*((audiodriverstring)+1), 0x64));	// 87937 mov     audiodriverstring+1, 64h ; 'd' ;~ 2B83:0209
cs=0x2b83;eip=0x00020e; 	R(JMP(loc_39f62));	// 87938 jmp     loc_39F62 ;~ 2B83:020E
loc_3a022:
	// 10405 
cs=0x2b83;eip=0x000212; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 87944 mov     ax, [bp+arg_2] ;~ 2B83:0212
cs=0x2b83;eip=0x000215; 	T(MOV(cx, si));	// 87945 mov     cx, si ;~ 2B83:0215
cs=0x2b83;eip=0x000217; 	T(SHL(cx, 1));	// 87946 shl     cx, 1 ;~ 2B83:0217
cs=0x2b83;eip=0x000219; 	T(ADD(ax, cx));	// 87947 add     ax, cx ;~ 2B83:0219
cs=0x2b83;eip=0x00021b; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 87948 mov     [bp+var_1E], ax ;~ 2B83:021B
cs=0x2b83;eip=0x00021e; 	T(MOV(bx, ax));	// 87949 mov     bx, ax ;~ 2B83:021E
cs=0x2b83;eip=0x000220; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 87950 mov     bx, [bx] ;~ 2B83:0220
cs=0x2b83;eip=0x000222; 	T(MOV(al, *(raddr(ds,bx+2))));	// 87951 mov     al, [bx+2] ;~ 2B83:0222
cs=0x2b83;eip=0x000225; 	X(MOV(*(audiodriverstring), al));	// 87952 mov     audiodriverstring, al ;~ 2B83:0225
cs=0x2b83;eip=0x000228; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_1e))));	// 87953 mov     bx, [bp+var_1E] ;~ 2B83:0228
cs=0x2b83;eip=0x00022b; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 87954 mov     bx, [bx] ;~ 2B83:022B
cs=0x2b83;eip=0x00022d; 	T(MOV(al, *(raddr(ds,bx+3))));	// 87955 mov     al, [bx+3] ;~ 2B83:022D
cs=0x2b83;eip=0x000230; 	X(MOV(*((audiodriverstring)+1), al));	// 87956 mov     audiodriverstring+1, al ;~ 2B83:0230
cs=0x2b83;eip=0x000233; 	R(JMP(loc_39f62));	// 87957 jmp     loc_39F62 ;~ 2B83:0233
loc_3a046:
	// 10406 
cs=0x2b83;eip=0x000236; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 87961 mov     bx, [bp+arg_2] ;~ 2B83:0236
cs=0x2b83;eip=0x000239; 	T(MOV(ax, si));	// 87962 mov     ax, si ;~ 2B83:0239
cs=0x2b83;eip=0x00023b; 	T(SHL(ax, 1));	// 87963 shl     ax, 1 ;~ 2B83:023B
cs=0x2b83;eip=0x00023d; 	T(ADD(bx, ax));	// 87964 add     bx, ax ;~ 2B83:023D
cs=0x2b83;eip=0x00023f; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 87965 mov     bx, [bx] ;~ 2B83:023F
cs=0x2b83;eip=0x000241; 	T(CMP(*(raddr(ds,bx+2)), 0x73));	// 87966 cmp     byte ptr [bx+2], 73h ; 's' ;~ 2B83:0241
cs=0x2b83;eip=0x000245; 	R(JNZ(loc_3a05e));	// 87967 jnz     short loc_3A05E ;~ 2B83:0245
cs=0x2b83;eip=0x000247; 	X(MOV(*(raddr(ss,bp+var_e)), 1));	// 87968 mov     [bp+var_E], 1 ;~ 2B83:0247
cs=0x2b83;eip=0x00024b; 	R(JMP(loc_39f62));	// 87969 jmp     loc_39F62 ;~ 2B83:024B
loc_3a05e:
	// 10407 
cs=0x2b83;eip=0x00024e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 87973 mov     bx, [bp+arg_2] ;~ 2B83:024E
cs=0x2b83;eip=0x000251; 	T(MOV(ax, si));	// 87974 mov     ax, si ;~ 2B83:0251
cs=0x2b83;eip=0x000253; 	T(SHL(ax, 1));	// 87975 shl     ax, 1 ;~ 2B83:0253
cs=0x2b83;eip=0x000255; 	T(ADD(bx, ax));	// 87976 add     bx, ax ;~ 2B83:0255
cs=0x2b83;eip=0x000257; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 87977 mov     bx, [bx] ;~ 2B83:0257
cs=0x2b83;eip=0x000259; 	T(CMP(*(raddr(ds,bx+2)), 0x64));	// 87978 cmp     byte ptr [bx+2], 64h ; 'd' ;~ 2B83:0259
cs=0x2b83;eip=0x00025d; 	R(JZ(loc_3a072));	// 87979 jz      short loc_3A072 ;~ 2B83:025D
cs=0x2b83;eip=0x00025f; 	R(JMP(loc_39f62));	// 87980 jmp     loc_39F62 ;~ 2B83:025F
loc_3a072:
	// 10408 
cs=0x2b83;eip=0x000262; 	X(MOV(*(raddr(ss,bp+var_2)), 1));	// 87984 mov     [bp+var_2], 1 ;~ 2B83:0262
cs=0x2b83;eip=0x000266; 	R(JMP(loc_39f62));	// 87985 jmp     loc_39F62 ;~ 2B83:0266
loc_3a07a:
	// 10409 
cs=0x2b83;eip=0x00026a; 	R(CALLF(video_set_mode_13h,0));	// 87990 call    video_set_mode_13h ;~ 2B83:026A
cs=0x2b83;eip=0x00026f; 	T(CMP(*(raddr(ss,bp+var_12)), 0));	// 87991 cmp     [bp+var_12], 0 ;~ 2B83:026F
cs=0x2b83;eip=0x000273; 	R(JZ(loc_3a08a));	// 87992 jz      short loc_3A08A ;~ 2B83:0273
cs=0x2b83;eip=0x000275; 	R(CALLF(video_set_mode4,0));	// 87993 call    video_set_mode4 ;~ 2B83:0275
loc_3a08a:
	// 10410 
cs=0x2b83;eip=0x00027a; 	R(CALLF(timer_setup_interrupt,0));	// 87996 call    timer_setup_interrupt ;~ 2B83:027A
cs=0x2b83;eip=0x00027f; 	R(CALLF(sprite_copy_2_to_1_clear,0));	// 87997 call    sprite_copy_2_to_1_clear ;~ 2B83:027F
cs=0x2b83;eip=0x000284; 	T(MOV(ax, 0x0C8));	// 87998 mov     ax, 0C8h ; 'È' ;~ 2B83:0284
cs=0x2b83;eip=0x000287; 	X(PUSH(ax));	// 87999 push    ax ;~ 2B83:0287
cs=0x2b83;eip=0x000288; 	T(MOV(ax, 0x140));	// 88000 mov     ax, 140h ;~ 2B83:0288
cs=0x2b83;eip=0x00028b; 	X(PUSH(ax));	// 88001 push    ax ;~ 2B83:028B
cs=0x2b83;eip=0x00028c; 	R(CALLF(mouse_init,0));	// 88002 call    mouse_init ;~ 2B83:028C
cs=0x2b83;eip=0x000291; 	T(ADD(sp, 4));	// 88003 add     sp, 4 ;~ 2B83:0291
cs=0x2b83;eip=0x000294; 	T(SUB(ax, ax));	// 88004 sub     ax, ax ;~ 2B83:0294
cs=0x2b83;eip=0x000296; 	X(PUSH(ax));	// 88005 push    ax              ; int ;~ 2B83:0296
cs=0x2b83;eip=0x000297; 	X(PUSH(ax));	// 88006 push    ax ;~ 2B83:0297
cs=0x2b83;eip=0x000298; 	T(MOV(ax, offset(dseg,audiodriverstring)));	// 88007 mov     ax, offset audiodriverstring ;~ 2B83:0298
cs=0x2b83;eip=0x00029b; 	X(PUSH(ax));	// 88008 push    ax              ; char * ;~ 2B83:029B
cs=0x2b83;eip=0x00029c; 	R(CALLF(audio_load_driver,0));	// 88009 call    audio_load_driver ;~ 2B83:029C
cs=0x2b83;eip=0x0002a1; 	T(ADD(sp, 6));	// 88010 add     sp, 6 ;~ 2B83:02A1
cs=0x2b83;eip=0x0002a4; 	T(OR(ax, ax));	// 88011 or      ax, ax ;~ 2B83:02A4
cs=0x2b83;eip=0x0002a6; 	R(JZ(loc_3a0c9));	// 88012 jz      short loc_3A0C9 ;~ 2B83:02A6
cs=0x2b83;eip=0x0002a8; 	R(CALLF(audio_stop_unk,0));	// 88013 call    audio_stop_unk ;~ 2B83:02A8
cs=0x2b83;eip=0x0002ad; 	T(MOV(ax, 1));	// 88014 mov     ax, 1 ;~ 2B83:02AD
cs=0x2b83;eip=0x0002b0; 	X(PUSH(ax));	// 88015 push    ax ;~ 2B83:02B0
cs=0x2b83;eip=0x0002b1; 	R(CALLF(libsub_quit_to_dos_alt,0));	// 88016 call    far ptr libsub_quit_to_dos_alt ;~ 2B83:02B1
cs=0x2b83;eip=0x0002b6; 	T(ADD(sp, 2));	// 88018 add     sp, 2 ;~ 2B83:02B6
loc_3a0c9:
	// 10411 
cs=0x2b83;eip=0x0002b9; 	T(CMP(*(raddr(ss,bp+var_e)), 0));	// 88021 cmp     [bp+var_E], 0 ;~ 2B83:02B9
cs=0x2b83;eip=0x0002bd; 	R(JZ(loc_3a0d9));	// 88022 jz      short loc_3A0D9 ;~ 2B83:02BD
cs=0x2b83;eip=0x0002bf; 	R(CALLF(audio_toggle_flag2,0));	// 88023 call    audio_toggle_flag2 ;~ 2B83:02BF
cs=0x2b83;eip=0x0002c4; 	R(CALLF(audio_toggle_flag6,0));	// 88024 call    audio_toggle_flag6 ;~ 2B83:02C4
loc_3a0d9:
	// 10412 
cs=0x2b83;eip=0x0002c9; 	T(MOV(ax, m2c::kdo_dea_textres));	// 88027 mov     ax, offset do_dea_textres ;~ 2B83:02C9
cs=0x2b83;eip=0x0002cc; 	T(MOV(dx, seg_offset(seg008)));	// 88028 mov     dx, seg seg008 ;~ 2B83:02CC
cs=0x2b83;eip=0x0002cf; 	X(PUSH(dx));	// 88029 push    dx ;~ 2B83:02CF
cs=0x2b83;eip=0x0002d0; 	X(PUSH(ax));	// 88030 push    ax ;~ 2B83:02D0
cs=0x2b83;eip=0x0002d1; 	R(CALLF(set_criterr_handler,0));	// 88031 call    set_criterr_handler ;~ 2B83:02D1
cs=0x2b83;eip=0x0002d6; 	T(ADD(sp, 4));	// 88032 add     sp, 4 ;~ 2B83:02D6
cs=0x2b83;eip=0x0002d9; 	X(PUSH(cs));	// 88033 push    cs ;~ 2B83:02D9
cs=0x2b83;eip=0x0002da; 	R(CALL(load_palandcursor,0));	// 88034 call    near ptr load_palandcursor ;~ 2B83:02DA
cs=0x2b83;eip=0x0002dd; 	R(CALLF(sprite_copy_2_to_1,0));	// 88035 call    sprite_copy_2_to_1 ;~ 2B83:02DD
cs=0x2b83;eip=0x0002e2; 	T(MOV(ax, 120));	// 88036 mov     ax, 120 ;~ 2B83:02E2
cs=0x2b83;eip=0x0002e5; 	X(PUSH(ax));	// 88037 push    ax ;~ 2B83:02E5
cs=0x2b83;eip=0x0002e6; 	T(SUB(ax, ax));	// 88038 sub     ax, ax ;~ 2B83:02E6
cs=0x2b83;eip=0x0002e8; 	X(PUSH(ax));	// 88039 push    ax ;~ 2B83:02E8
cs=0x2b83;eip=0x0002e9; 	T(MOV(ax, 320));	// 88040 mov     ax, 320 ;~ 2B83:02E9
cs=0x2b83;eip=0x0002ec; 	X(PUSH(ax));	// 88041 push    ax ;~ 2B83:02EC
cs=0x2b83;eip=0x0002ed; 	T(SUB(ax, ax));	// 88042 sub     ax, ax ;~ 2B83:02ED
cs=0x2b83;eip=0x0002ef; 	X(PUSH(ax));	// 88043 push    ax ;~ 2B83:02EF
cs=0x2b83;eip=0x0002f0; 	R(CALLF(sprite_set_1_size,0));	// 88044 call    sprite_set_1_size ;~ 2B83:02F0
cs=0x2b83;eip=0x0002f5; 	T(ADD(sp, 8));	// 88045 add     sp, 8 ;~ 2B83:02F5
cs=0x2b83;eip=0x0002f8; 	R(CALLF(timer_get_delta_alt,0));	// 88046 call    timer_get_delta_alt ;~ 2B83:02F8
cs=0x2b83;eip=0x0002fd; 	T(SUB(si, si));	// 88047 sub     si, si ;~ 2B83:02FD
loc_3a10f:
	// 10413 
cs=0x2b83;eip=0x0002ff; 	T(SUB(ax, ax));	// 88050 sub     ax, ax ;~ 2B83:02FF
cs=0x2b83;eip=0x000301; 	X(PUSH(ax));	// 88051 push    ax ;~ 2B83:0301
cs=0x2b83;eip=0x000302; 	R(CALLF(sprite_clear_1_color,0));	// 88052 call    sprite_clear_1_color ;~ 2B83:0302
cs=0x2b83;eip=0x000307; 	T(ADD(sp, 2));	// 88053 add     sp, 2 ;~ 2B83:0307
cs=0x2b83;eip=0x00030a; 	T(INC(si));	// 88054 inc     si ;~ 2B83:030A
cs=0x2b83;eip=0x00030b; 	T(CMP(si, 0x0F));	// 88055 cmp     si, 0Fh ;~ 2B83:030B
cs=0x2b83;eip=0x00030e; 	R(JL(loc_3a10f));	// 88056 jl      short loc_3A10F ;~ 2B83:030E
cs=0x2b83;eip=0x000310; 	R(CALLF(timer_get_delta_alt,0));	// 88057 call    timer_get_delta_alt ;~ 2B83:0310
cs=0x2b83;eip=0x000315; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 88058 mov     [bp+var_C], ax ;~ 2B83:0315
cs=0x2b83;eip=0x000318; 	T(MOV(ax, 60));	// 88059 mov     ax, 60 ;~ 2B83:0318
cs=0x2b83;eip=0x00031b; 	X(PUSH(ax));	// 88060 push    ax ;~ 2B83:031B
cs=0x2b83;eip=0x00031c; 	T(SUB(ax, ax));	// 88061 sub     ax, ax ;~ 2B83:031C
cs=0x2b83;eip=0x00031e; 	X(PUSH(ax));	// 88062 push    ax ;~ 2B83:031E
cs=0x2b83;eip=0x00031f; 	T(MOV(ax, 320));	// 88063 mov     ax, 320 ;~ 2B83:031F
cs=0x2b83;eip=0x000322; 	X(PUSH(ax));	// 88064 push    ax ;~ 2B83:0322
cs=0x2b83;eip=0x000323; 	T(SUB(ax, ax));	// 88065 sub     ax, ax ;~ 2B83:0323
cs=0x2b83;eip=0x000325; 	X(PUSH(ax));	// 88066 push    ax ;~ 2B83:0325
cs=0x2b83;eip=0x000326; 	R(CALLF(sprite_set_1_size,0));	// 88067 call    sprite_set_1_size ;~ 2B83:0326
cs=0x2b83;eip=0x00032b; 	T(ADD(sp, 8));	// 88068 add     sp, 8 ;~ 2B83:032B
cs=0x2b83;eip=0x00032e; 	T(SUB(si, si));	// 88069 sub     si, si ;~ 2B83:032E
loc_3a140:
	// 10414 
cs=0x2b83;eip=0x000330; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0));	// 88072 mov     [bp+var_A], 0 ;~ 2B83:0330
cs=0x2b83;eip=0x000335; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 88073 mov     [bp+var_8], 0 ;~ 2B83:0335
cs=0x2b83;eip=0x00033a; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0));	// 88074 mov     [bp+var_6], 0 ;~ 2B83:033A
cs=0x2b83;eip=0x00033f; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 88075 mov     [bp+var_4], 0 ;~ 2B83:033F
cs=0x2b83;eip=0x000344; 	T(SUB(di, di));	// 88076 sub     di, di ;~ 2B83:0344
loc_3a156:
	// 10415 
cs=0x2b83;eip=0x000346; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), di));	// 88079 mov     [bp+var_1A], di ;~ 2B83:0346
cs=0x2b83;eip=0x000349; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), di));	// 88080 mov     [bp+var_18], di ;~ 2B83:0349
cs=0x2b83;eip=0x00034c; 	T(ax = bp+var_a);	// 88081 lea     ax, [bp+var_A] ;~ 2B83:034C
cs=0x2b83;eip=0x00034f; 	X(PUSH(ax));	// 88082 push    ax ;~ 2B83:034F
cs=0x2b83;eip=0x000350; 	T(ax = bp+var_1a);	// 88083 lea     ax, [bp+var_1A] ;~ 2B83:0350
cs=0x2b83;eip=0x000353; 	X(PUSH(ax));	// 88084 push    ax ;~ 2B83:0353
cs=0x2b83;eip=0x000354; 	R(CALLF(rect_adjust_from_point,0));	// 88085 call    rect_adjust_from_point ;~ 2B83:0354
cs=0x2b83;eip=0x000359; 	T(ADD(sp, 4));	// 88086 add     sp, 4 ;~ 2B83:0359
cs=0x2b83;eip=0x00035c; 	T(INC(di));	// 88087 inc     di ;~ 2B83:035C
cs=0x2b83;eip=0x00035d; 	T(CMP(di, 0x190));	// 88088 cmp     di, 190h ;~ 2B83:035D
cs=0x2b83;eip=0x000361; 	R(JL(loc_3a156));	// 88089 jl      short loc_3A156 ;~ 2B83:0361
cs=0x2b83;eip=0x000363; 	T(SUB(ax, ax));	// 88090 sub     ax, ax ;~ 2B83:0363
cs=0x2b83;eip=0x000365; 	X(PUSH(ax));	// 88091 push    ax ;~ 2B83:0365
cs=0x2b83;eip=0x000366; 	R(CALLF(sprite_clear_1_color,0));	// 88092 call    sprite_clear_1_color ;~ 2B83:0366
cs=0x2b83;eip=0x00036b; 	T(ADD(sp, 2));	// 88093 add     sp, 2 ;~ 2B83:036B
cs=0x2b83;eip=0x00036e; 	T(INC(si));	// 88094 inc     si ;~ 2B83:036E
cs=0x2b83;eip=0x00036f; 	T(CMP(si, 0x0F));	// 88095 cmp     si, 0Fh ;~ 2B83:036F
cs=0x2b83;eip=0x000372; 	R(JL(loc_3a140));	// 88096 jl      short loc_3A140 ;~ 2B83:0372
cs=0x2b83;eip=0x000374; 	R(CALLF(timer_get_delta_alt,0));	// 88097 call    timer_get_delta_alt ;~ 2B83:0374
cs=0x2b83;eip=0x000379; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 88098 mov     [bp+var_10], ax ;~ 2B83:0379
cs=0x2b83;eip=0x00037c; 	T(SUB(si, si));	// 88099 sub     si, si ;~ 2B83:037C
cs=0x2b83;eip=0x00037e; 	R(JMP(loc_3a1ab));	// 88100 jmp     short loc_3A1AB ;~ 2B83:037E
loc_3a190:
	// 10416 
cs=0x2b83;eip=0x000380; 	T(INC(di));	// 88104 inc     di ;~ 2B83:0380
loc_3a191:
	// 10417 
cs=0x2b83;eip=0x000381; 	T(CMP(di, 0x0FF));	// 88107 cmp     di, 0FFh ;~ 2B83:0381
cs=0x2b83;eip=0x000385; 	R(JGE(loc_3a1aa));	// 88108 jge     short loc_3A1AA ;~ 2B83:0385
cs=0x2b83;eip=0x000387; 	T(ax = bp+var_a);	// 88109 lea     ax, [bp+var_A] ;~ 2B83:0387
cs=0x2b83;eip=0x00038a; 	X(PUSH(ax));	// 88110 push    ax ;~ 2B83:038A
cs=0x2b83;eip=0x00038b; 	T(ax = bp+var_1a);	// 88111 lea     ax, [bp+var_1A] ;~ 2B83:038B
cs=0x2b83;eip=0x00038e; 	X(PUSH(ax));	// 88112 push    ax ;~ 2B83:038E
cs=0x2b83;eip=0x00038f; 	R(CALLF(rect_adjust_from_point,0));	// 88113 call    rect_adjust_from_point ;~ 2B83:038F
cs=0x2b83;eip=0x000394; 	T(ADD(sp, 4));	// 88114 add     sp, 4 ;~ 2B83:0394
cs=0x2b83;eip=0x000397; 	R(JMP(loc_3a190));	// 88115 jmp     short loc_3A190 ;~ 2B83:0397
loc_3a1aa:
	// 10418 
cs=0x2b83;eip=0x00039a; 	T(INC(si));	// 88120 inc     si ;~ 2B83:039A
loc_3a1ab:
	// 10419 
cs=0x2b83;eip=0x00039b; 	T(CMP(si, 0x92));	// 88123 cmp     si, 92h ; '’' ;~ 2B83:039B
cs=0x2b83;eip=0x00039f; 	R(JGE(loc_3a1b6));	// 88124 jge     short loc_3A1B6 ;~ 2B83:039F
cs=0x2b83;eip=0x0003a1; 	T(SUB(di, di));	// 88125 sub     di, di ;~ 2B83:03A1
cs=0x2b83;eip=0x0003a3; 	R(JMP(loc_3a191));	// 88126 jmp     short loc_3A191 ;~ 2B83:03A3
loc_3a1b6:
	// 10420 
cs=0x2b83;eip=0x0003a6; 	R(CALLF(timer_get_delta_alt,0));	// 88131 call    timer_get_delta_alt ;~ 2B83:03A6
cs=0x2b83;eip=0x0003ab; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), ax));	// 88132 mov     [bp+var_1C], ax ;~ 2B83:03AB
cs=0x2b83;eip=0x0003ae; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 88133 mov     ax, [bp+var_C] ;~ 2B83:03AE
cs=0x2b83;eip=0x0003b1; 	T(CMP(*(dw*)(raddr(ss,bp+var_10)), ax));	// 88134 cmp     [bp+var_10], ax ;~ 2B83:03B1
cs=0x2b83;eip=0x0003b4; 	R(JLE(loc_3a1ce));	// 88135 jle     short loc_3A1CE ;~ 2B83:03B4
cs=0x2b83;eip=0x0003b6; 	X(MOV(timertestflag, 0));	// 88136 mov     timertestflag, 0 ;~ 2B83:03B6
cs=0x2b83;eip=0x0003bc; 	R(JMP(loc_3a1d4));	// 88137 jmp     short loc_3A1D4 ;~ 2B83:03BC
loc_3a1ce:
	// 10421 
cs=0x2b83;eip=0x0003be; 	X(MOV(timertestflag, 1));	// 88141 mov     timertestflag, 1 ;~ 2B83:03BE
loc_3a1d4:
	// 10422 
cs=0x2b83;eip=0x0003c4; 	T(CMP(*(dw*)(raddr(ss,bp+var_1c)), 0x4B));	// 88144 cmp     [bp+var_1C], 4Bh ; 'K' ;~ 2B83:03C4
cs=0x2b83;eip=0x0003c8; 	R(JGE(loc_3a1e2));	// 88145 jge     short loc_3A1E2 ;~ 2B83:03C8
cs=0x2b83;eip=0x0003ca; 	X(MOV(framespersec2, 0x14));	// 88146 mov     framespersec2, 14h ;~ 2B83:03CA
cs=0x2b83;eip=0x0003d0; 	R(JMP(loc_3a1e8));	// 88147 jmp     short loc_3A1E8 ;~ 2B83:03D0
loc_3a1e2:
	// 10423 
cs=0x2b83;eip=0x0003d2; 	X(MOV(framespersec2, 0x0A));	// 88151 mov     framespersec2, 0Ah ;~ 2B83:03D2
loc_3a1e8:
	// 10424 
cs=0x2b83;eip=0x0003d8; 	T(CMP(*(dw*)(raddr(ss,bp+var_1c)), 0x23));	// 88154 cmp     [bp+var_1C], 23h ; '#' ;~ 2B83:03D8
cs=0x2b83;eip=0x0003dc; 	R(JGE(loc_3a1f6));	// 88155 jge     short loc_3A1F6 ;~ 2B83:03DC
cs=0x2b83;eip=0x0003de; 	X(MOV(timertestflag2, 0));	// 88156 mov     timertestflag2, 0 ;~ 2B83:03DE
cs=0x2b83;eip=0x0003e3; 	R(JMP(loc_3a22b));	// 88157 jmp     short loc_3A22B ;~ 2B83:03E3
loc_3a1f6:
	// 10425 
cs=0x2b83;eip=0x0003e6; 	T(CMP(*(dw*)(raddr(ss,bp+var_1c)), 0x37));	// 88162 cmp     [bp+var_1C], 37h ; '7' ;~ 2B83:03E6
cs=0x2b83;eip=0x0003ea; 	R(JGE(loc_3a204));	// 88163 jge     short loc_3A204 ;~ 2B83:03EA
cs=0x2b83;eip=0x0003ec; 	X(MOV(timertestflag2, 1));	// 88164 mov     timertestflag2, 1 ;~ 2B83:03EC
cs=0x2b83;eip=0x0003f1; 	R(JMP(loc_3a22b));	// 88165 jmp     short loc_3A22B ;~ 2B83:03F1
loc_3a204:
	// 10426 
cs=0x2b83;eip=0x0003f4; 	T(CMP(*(dw*)(raddr(ss,bp+var_1c)), 0x4B));	// 88170 cmp     [bp+var_1C], 4Bh ; 'K' ;~ 2B83:03F4
cs=0x2b83;eip=0x0003f8; 	R(JGE(loc_3a212));	// 88171 jge     short loc_3A212 ;~ 2B83:03F8
cs=0x2b83;eip=0x0003fa; 	X(MOV(timertestflag2, 2));	// 88172 mov     timertestflag2, 2 ;~ 2B83:03FA
cs=0x2b83;eip=0x0003ff; 	R(JMP(loc_3a22b));	// 88173 jmp     short loc_3A22B ;~ 2B83:03FF
loc_3a212:
	// 10427 
cs=0x2b83;eip=0x000402; 	T(CMP(*(dw*)(raddr(ss,bp+var_1c)), 0x64));	// 88178 cmp     [bp+var_1C], 64h ; 'd' ;~ 2B83:0402
cs=0x2b83;eip=0x000406; 	R(JL(loc_3a21f));	// 88179 jl      short loc_3A21F ;~ 2B83:0406
cs=0x2b83;eip=0x000408; 	T(CMP(timertestflag, 0));	// 88180 cmp     timertestflag, 0 ;~ 2B83:0408
cs=0x2b83;eip=0x00040d; 	R(JNZ(loc_3a226));	// 88181 jnz     short loc_3A226 ;~ 2B83:040D
loc_3a21f:
	// 10428 
cs=0x2b83;eip=0x00040f; 	X(MOV(timertestflag2, 3));	// 88184 mov     timertestflag2, 3 ;~ 2B83:040F
cs=0x2b83;eip=0x000414; 	R(JMP(loc_3a22b));	// 88185 jmp     short loc_3A22B ;~ 2B83:0414
loc_3a226:
	// 10429 
cs=0x2b83;eip=0x000416; 	X(MOV(timertestflag2, 4));	// 88189 mov     timertestflag2, 4 ;~ 2B83:0416
loc_3a22b:
	// 10430 
cs=0x2b83;eip=0x00041b; 	T(MOV(ax, framespersec2));	// 88193 mov     ax, framespersec2 ;~ 2B83:041B
cs=0x2b83;eip=0x00041e; 	X(MOV(framespersec, ax));	// 88194 mov     framespersec, ax ;~ 2B83:041E
cs=0x2b83;eip=0x000421; 	T(MOV(ax, timertestflag));	// 88195 mov     ax, timertestflag ;~ 2B83:0421
cs=0x2b83;eip=0x000424; 	X(MOV(timertestflag_copy, ax));	// 88196 mov     timertestflag_copy, ax ;~ 2B83:0424
cs=0x2b83;eip=0x000427; 	X(PUSH(cs));	// 88197 push    cs ;~ 2B83:0427
cs=0x2b83;eip=0x000428; 	R(CALL(random_wait,0));	// 88198 call    near ptr random_wait ;~ 2B83:0428
cs=0x2b83;eip=0x00042b; 	T(SUB(ax, ax));	// 88199 sub     ax, ax ;~ 2B83:042B
cs=0x2b83;eip=0x00042d; 	X(PUSH(ax));	// 88200 push    ax ;~ 2B83:042D
cs=0x2b83;eip=0x00042e; 	X(PUSH(material_patlist2_ptr));	// 88201 push    material_patlist2_ptr ;~ 2B83:042E
cs=0x2b83;eip=0x000432; 	X(PUSH(material_patlist_ptr));	// 88202 push    material_patlist_ptr ;~ 2B83:0432
cs=0x2b83;eip=0x000436; 	X(PUSH(material_clrlist2_ptr));	// 88203 push    material_clrlist2_ptr ;~ 2B83:0436
cs=0x2b83;eip=0x00043a; 	X(PUSH(material_clrlist_ptr));	// 88204 push    material_clrlist_ptr ;~ 2B83:043A
cs=0x2b83;eip=0x00043e; 	R(CALLF(copy_material_list_pointers,0));	// 88205 call    copy_material_list_pointers ;~ 2B83:043E
cs=0x2b83;eip=0x000443; 	T(ADD(sp, 0x0A));	// 88206 add     sp, 0Ah ;~ 2B83:0443
cs=0x2b83;eip=0x000446; 	X(POP(si));	// 88207 pop     si ;~ 2B83:0446
cs=0x2b83;eip=0x000447; 	X(POP(di));	// 88208 pop     di ;~ 2B83:0447
cs=0x2b83;eip=0x000448; 	T(MOV(sp, bp));	// 88209 mov     sp, bp ;~ 2B83:0448
cs=0x2b83;eip=0x00044a; 	X(POP(bp));	// 88210 pop     bp ;~ 2B83:044A
cs=0x2b83;eip=0x00044b; 	R(RETF(0));	// 88211 retf ;~ 2B83:044B
random_wait:
	// 88219 
cs=0x2b83;eip=0x00044c; 	X(PUSH(bp));	// 88221 push    bp ;~ 2B83:044C
ret_2b83_44d:
	// 10431 
cs=0x2b83;eip=0x00044d; 	T(MOV(bp, sp));	// 88222 mov     bp, sp ;~ 2B83:044D
cs=0x2b83;eip=0x00044f; 	T(SUB(sp, 4));	// 88223 sub     sp, 4 ;~ 2B83:044F
cs=0x2b83;eip=0x000452; 	X(PUSH(di));	// 88224 push    di ;~ 2B83:0452
cs=0x2b83;eip=0x000453; 	X(PUSH(si));	// 88225 push    si ;~ 2B83:0453
cs=0x2b83;eip=0x000454; 	R(CALLF(video_get_status,0));	// 88226 call    video_get_status ;~ 2B83:0454
cs=0x2b83;eip=0x000459; 	T(MOV(si, ax));	// 88227 mov     si, ax ;~ 2B83:0459
cs=0x2b83;eip=0x00045b; 	T(SUB(di, di));	// 88228 sub     di, di ;~ 2B83:045B
cs=0x2b83;eip=0x00045d; 	R(JMP(loc_3a277));	// 88229 jmp     short loc_3A277 ;~ 2B83:045D
loc_3a270:
	// 10432 
cs=0x2b83;eip=0x000460; 	T(CMP(di, 12000));	// 88234 cmp     di, 12000 ;~ 2B83:0460
cs=0x2b83;eip=0x000464; 	R(JGE(loc_3a280));	// 88235 jge     short loc_3A280 ;~ 2B83:0464
cs=0x2b83;eip=0x000466; 	T(INC(di));	// 88236 inc     di ;~ 2B83:0466
loc_3a277:
	// 10433 
cs=0x2b83;eip=0x000467; 	R(CALLF(video_get_status,0));	// 88239 call    video_get_status ;~ 2B83:0467
cs=0x2b83;eip=0x00046c; 	T(CMP(ax, si));	// 88240 cmp     ax, si ;~ 2B83:046C
cs=0x2b83;eip=0x00046e; 	R(JZ(loc_3a270));	// 88241 jz      short loc_3A270 ;~ 2B83:046E
loc_3a280:
	// 10434 
cs=0x2b83;eip=0x000470; 	T(CMP(di, 1024));	// 88244 cmp     di, 1024 ;~ 2B83:0470
cs=0x2b83;eip=0x000474; 	R(JNZ(loc_3a29a));	// 88245 jnz     short loc_3A29A ;~ 2B83:0474
cs=0x2b83;eip=0x000476; 	T(MOV(bx, 0x46C));	// 88246 mov     bx, 46Ch ;~ 2B83:0476
cs=0x2b83;eip=0x000479; 	T(MOV(al, *(raddr(ds,bx))));	// 88247 mov     al, [bx] ;~ 2B83:0479
cs=0x2b83;eip=0x00047b; 	T(CBW);	// 88248 cbw ;~ 2B83:047B
cs=0x2b83;eip=0x00047c; 	T(MOV(di, ax));	// 88249 mov     di, ax ;~ 2B83:047C
cs=0x2b83;eip=0x00047e; 	R(JMP(loc_3a29a));	// 88250 jmp     short loc_3A29A ;~ 2B83:047E
loc_3a290:
	// 10435 
cs=0x2b83;eip=0x000480; 	R(CALLF(_rand,0));	// 88254 call    _rand ;~ 2B83:0480
cs=0x2b83;eip=0x000485; 	R(CALLF(get_kevinrandom,0));	// 88255 call    get_kevinrandom ;~ 2B83:0485
loc_3a29a:
	// 10436 
cs=0x2b83;eip=0x00048a; 	T(MOV(ax, di));	// 88259 mov     ax, di ;~ 2B83:048A
cs=0x2b83;eip=0x00048c; 	T(DEC(di));	// 88260 dec     di ;~ 2B83:048C
cs=0x2b83;eip=0x00048d; 	T(OR(ax, ax));	// 88261 or      ax, ax ;~ 2B83:048D
cs=0x2b83;eip=0x00048f; 	R(JNZ(loc_3a290));	// 88262 jnz     short loc_3A290 ;~ 2B83:048F
cs=0x2b83;eip=0x000491; 	T(AND(di, 0x0FF));	// 88263 and     di, 0FFh ;~ 2B83:0491
cs=0x2b83;eip=0x000495; 	R(JMP(loc_3a2b2));	// 88264 jmp     short loc_3A2B2 ;~ 2B83:0495
loc_3a2a8:
	// 10437 
cs=0x2b83;eip=0x000498; 	R(CALLF(get_kevinrandom,0));	// 88269 call    get_kevinrandom ;~ 2B83:0498
cs=0x2b83;eip=0x00049d; 	R(CALLF(_rand,0));	// 88270 call    _rand ;~ 2B83:049D
loc_3a2b2:
	// 10438 
cs=0x2b83;eip=0x0004a2; 	T(MOV(ax, di));	// 88273 mov     ax, di ;~ 2B83:04A2
cs=0x2b83;eip=0x0004a4; 	T(DEC(di));	// 88274 dec     di ;~ 2B83:04A4
cs=0x2b83;eip=0x0004a5; 	T(OR(ax, ax));	// 88275 or      ax, ax ;~ 2B83:04A5
cs=0x2b83;eip=0x0004a7; 	R(JNZ(loc_3a2a8));	// 88276 jnz     short loc_3A2A8 ;~ 2B83:04A7
cs=0x2b83;eip=0x0004a9; 	X(POP(si));	// 88277 pop     si ;~ 2B83:04A9
cs=0x2b83;eip=0x0004aa; 	X(POP(di));	// 88278 pop     di ;~ 2B83:04AA
cs=0x2b83;eip=0x0004ab; 	T(MOV(sp, bp));	// 88279 mov     sp, bp ;~ 2B83:04AB
cs=0x2b83;eip=0x0004ad; 	X(POP(bp));	// 88280 pop     bp ;~ 2B83:04AD
cs=0x2b83;eip=0x0004ae; 	R(RETF(0));	// 88281 retf ;~ 2B83:04AE
load_palandcursor:
	// 88291 
#undef var_312
#define var_312 -0x312
	// 88293 var_312         = word ptr -312h ;~ 2B83:04B0
#undef var_310
#define var_310 -0x310
	// 88294 var_310         = dword ptr -310h ;~ 2B83:04B0
#undef var_30c
#define var_30c -0x30C
	// 88295 var_30C         = word ptr -30Ch ;~ 2B83:04B0
#undef var_30a
#define var_30a -0x30A
	// 88296 var_30A         = word ptr -30Ah ;~ 2B83:04B0
#undef var_308
#define var_308 -0x308
	// 88297 var_308         = word ptr -308h ;~ 2B83:04B0
#undef var_306
#define var_306 -0x306
	// 88298 var_306         = word ptr -306h ;~ 2B83:04B0
#undef var_304
#define var_304 -0x304
	// 88299 var_304         = dword ptr -304h ;~ 2B83:04B0
#undef var_300
#define var_300 -0x300
	// 88300 var_300         = byte ptr -300h ;~ 2B83:04B0
ret_2b83_4b0:
	// 10439 
cs=0x2b83;eip=0x0004b0; 	X(PUSH(bp));	// 88302 push    bp ;~ 2B83:04B0
cs=0x2b83;eip=0x0004b1; 	T(MOV(bp, sp));	// 88303 mov     bp, sp ;~ 2B83:04B1
cs=0x2b83;eip=0x0004b3; 	T(SUB(sp, 0x312));	// 88304 sub     sp, 312h ;~ 2B83:04B3
cs=0x2b83;eip=0x0004b7; 	X(PUSH(si));	// 88305 push    si ;~ 2B83:04B7
cs=0x2b83;eip=0x0004b8; 	T(MOV(ax, offset(dseg,asdmain)));	// 88306 mov     ax, offset aSdmain ; "sdmain" ;~ 2B83:04B8
cs=0x2b83;eip=0x0004bb; 	X(PUSH(ax));	// 88307 push    ax ;~ 2B83:04BB
cs=0x2b83;eip=0x0004bc; 	R(CALLF(file_load_shape2d_fatal,0));	// 88308 call    file_load_shape2d_fatal_thunk ;~ 2B83:04BC
cs=0x2b83;eip=0x0004c1; 	T(ADD(sp, 2));	// 88309 add     sp, 2 ;~ 2B83:04C1
cs=0x2b83;eip=0x0004c4; 	X(MOV(*(dw*)(raddr(ss,bp+var_30c)), ax));	// 88310 mov     [bp+var_30C], ax ;~ 2B83:04C4
cs=0x2b83;eip=0x0004c8; 	X(MOV(*(dw*)(raddr(ss,bp+var_30a)), dx));	// 88311 mov     [bp+var_30A], dx ;~ 2B83:04C8
cs=0x2b83;eip=0x0004cc; 	T(MOV(ax, offset(dseg,apal)));	// 88312 mov     ax, offset aPal ; "!pal" ;~ 2B83:04CC
cs=0x2b83;eip=0x0004cf; 	X(PUSH(ax));	// 88313 push    ax ;~ 2B83:04CF
cs=0x2b83;eip=0x0004d0; 	X(PUSH(dx));	// 88314 push    dx ;~ 2B83:04D0
cs=0x2b83;eip=0x0004d1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_30c))));	// 88315 push    [bp+var_30C] ;~ 2B83:04D1
cs=0x2b83;eip=0x0004d5; 	R(CALLF(locate_shape_fatal,0));	// 88316 call    locate_shape_fatal ;~ 2B83:04D5
cs=0x2b83;eip=0x0004da; 	T(ADD(sp, 6));	// 88317 add     sp, 6 ;~ 2B83:04DA
cs=0x2b83;eip=0x0004dd; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_304))), ax));	// 88318 mov     word ptr [bp+var_304], ax ;~ 2B83:04DD
cs=0x2b83;eip=0x0004e1; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_304+2))), dx));	// 88319 mov     word ptr [bp+var_304+2], dx ;~ 2B83:04E1
cs=0x2b83;eip=0x0004e5; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_304))), 0x10));	// 88320 add     word ptr [bp+var_304], 10h ;~ 2B83:04E5
cs=0x2b83;eip=0x0004ea; 	X(MOV(*(dw*)(raddr(ss,bp+var_308)), 0));	// 88321 mov     [bp+var_308], 0 ;~ 2B83:04EA
loc_3a300:
	// 10440 
cs=0x2b83;eip=0x0004f0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_308))));	// 88324 mov     bx, [bp+var_308] ;~ 2B83:04F0
cs=0x2b83;eip=0x0004f4; 	T(LES(si, *(dd*)(raddr(ss,bp+var_304))));	// 88325 les     si, [bp+var_304] ;~ 2B83:04F4
cs=0x2b83;eip=0x0004f8; 	T(MOV(al, *(raddr(es,bx+si))));	// 88326 mov     al, es:[bx+si] ;~ 2B83:04F8
cs=0x2b83;eip=0x0004fb; 	T(MOV(si, bx));	// 88327 mov     si, bx ;~ 2B83:04FB
cs=0x2b83;eip=0x0004fd; 	X(MOV(*(raddr(ss,bp+si+var_300)), al));	// 88328 mov     [bp+si+var_300], al ;~ 2B83:04FD
cs=0x2b83;eip=0x000501; 	X(INC(*(dw*)(raddr(ss,bp+var_308))));	// 88329 inc     [bp+var_308] ;~ 2B83:0501
cs=0x2b83;eip=0x000505; 	T(CMP(*(dw*)(raddr(ss,bp+var_308)), 0x300));	// 88330 cmp     [bp+var_308], 300h ;~ 2B83:0505
cs=0x2b83;eip=0x00050b; 	R(JL(loc_3a300));	// 88331 jl      short loc_3A300 ;~ 2B83:050B
cs=0x2b83;eip=0x00050d; 	T(ax = bp+var_300);	// 88332 lea     ax, [bp+var_300] ;~ 2B83:050D
cs=0x2b83;eip=0x000511; 	X(PUSH(ax));	// 88333 push    ax ;~ 2B83:0511
cs=0x2b83;eip=0x000512; 	T(MOV(ax, 0x100));	// 88334 mov     ax, 100h ;~ 2B83:0512
cs=0x2b83;eip=0x000515; 	X(PUSH(ax));	// 88335 push    ax ;~ 2B83:0515
cs=0x2b83;eip=0x000516; 	T(SUB(ax, ax));	// 88336 sub     ax, ax ;~ 2B83:0516
cs=0x2b83;eip=0x000518; 	X(PUSH(ax));	// 88337 push    ax ;~ 2B83:0518
cs=0x2b83;eip=0x000519; 	R(CALLF(video_set_palette,0));	// 88338 call    video_set_palette ;~ 2B83:0519
cs=0x2b83;eip=0x00051e; 	T(ADD(sp, 6));	// 88339 add     sp, 6 ;~ 2B83:051E
cs=0x2b83;eip=0x000521; 	T(MOV(ax, offset(dseg,asmou)));	// 88340 mov     ax, offset aSmou ; "smou" ;~ 2B83:0521
cs=0x2b83;eip=0x000524; 	X(PUSH(ax));	// 88341 push    ax ;~ 2B83:0524
cs=0x2b83;eip=0x000525; 	X(PUSH(*(dw*)(raddr(ss,bp+var_30a))));	// 88342 push    [bp+var_30A] ;~ 2B83:0525
cs=0x2b83;eip=0x000529; 	X(PUSH(*(dw*)(raddr(ss,bp+var_30c))));	// 88343 push    [bp+var_30C] ;~ 2B83:0529
cs=0x2b83;eip=0x00052d; 	R(CALLF(locate_shape_fatal,0));	// 88344 call    locate_shape_fatal ;~ 2B83:052D
cs=0x2b83;eip=0x000532; 	T(ADD(sp, 6));	// 88345 add     sp, 6 ;~ 2B83:0532
cs=0x2b83;eip=0x000535; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_310))), ax));	// 88346 mov     word ptr [bp+var_310], ax ;~ 2B83:0535
cs=0x2b83;eip=0x000539; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_310+2))), dx));	// 88347 mov     word ptr [bp+var_310+2], dx ;~ 2B83:0539
cs=0x2b83;eip=0x00053d; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_310))));	// 88348 les     bx, [bp+var_310] ;~ 2B83:053D
cs=0x2b83;eip=0x000541; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 88349 mov     ax, es:[bx] ;~ 2B83:0541
cs=0x2b83;eip=0x000544; 	X(IMUL1_2(video_flag2_is1));	// 88350 imul    video_flag2_is1 ;~ 2B83:0544
cs=0x2b83;eip=0x000548; 	X(MOV(*(dw*)(raddr(ss,bp+var_312)), ax));	// 88351 mov     [bp+var_312], ax ;~ 2B83:0548
cs=0x2b83;eip=0x00054c; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 88352 mov     ax, es:[bx+2] ;~ 2B83:054C
cs=0x2b83;eip=0x000550; 	X(MOV(*(dw*)(raddr(ss,bp+var_306)), ax));	// 88353 mov     [bp+var_306], ax ;~ 2B83:0550
cs=0x2b83;eip=0x000554; 	X(PUSH(*(dw*)(raddr(ss,bp+var_30a))));	// 88354 push    [bp+var_30A] ;~ 2B83:0554
cs=0x2b83;eip=0x000558; 	X(PUSH(*(dw*)(raddr(ss,bp+var_30c))));	// 88355 push    [bp+var_30C] ;~ 2B83:0558
cs=0x2b83;eip=0x00055c; 	R(CALLF(mmgr_free,0));	// 88356 call    mmgr_free ;~ 2B83:055C
cs=0x2b83;eip=0x000561; 	T(ADD(sp, 4));	// 88357 add     sp, 4 ;~ 2B83:0561
cs=0x2b83;eip=0x000564; 	T(MOV(ax, 0x0F));	// 88358 mov     ax, 0Fh ;~ 2B83:0564
cs=0x2b83;eip=0x000567; 	X(PUSH(ax));	// 88359 push    ax ;~ 2B83:0567
cs=0x2b83;eip=0x000568; 	X(PUSH(*(dw*)(raddr(ss,bp+var_306))));	// 88360 push    [bp+var_306] ;~ 2B83:0568
cs=0x2b83;eip=0x00056c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_312))));	// 88361 push    [bp+var_312] ;~ 2B83:056C
cs=0x2b83;eip=0x000570; 	R(CALLF(sprite_make_wnd,0));	// 88362 call    sprite_make_wnd ;~ 2B83:0570
cs=0x2b83;eip=0x000575; 	T(ADD(sp, 6));	// 88363 add     sp, 6 ;~ 2B83:0575
cs=0x2b83;eip=0x000578; 	X(MOV(*(dw*)(((db*)&smouspriteptr)), ax));	// 88364 mov     word ptr smouspriteptr, ax ;~ 2B83:0578
cs=0x2b83;eip=0x00057b; 	X(MOV(*(dw*)(((db*)&smouspriteptr)+2), dx));	// 88365 mov     word ptr smouspriteptr+2, dx ;~ 2B83:057B
cs=0x2b83;eip=0x00057f; 	T(MOV(ax, 0x0F));	// 88366 mov     ax, 0Fh ;~ 2B83:057F
cs=0x2b83;eip=0x000582; 	X(PUSH(ax));	// 88367 push    ax ;~ 2B83:0582
cs=0x2b83;eip=0x000583; 	X(PUSH(*(dw*)(raddr(ss,bp+var_306))));	// 88368 push    [bp+var_306] ;~ 2B83:0583
cs=0x2b83;eip=0x000587; 	X(PUSH(*(dw*)(raddr(ss,bp+var_312))));	// 88369 push    [bp+var_312] ;~ 2B83:0587
cs=0x2b83;eip=0x00058b; 	R(CALLF(sprite_make_wnd,0));	// 88370 call    sprite_make_wnd ;~ 2B83:058B
cs=0x2b83;eip=0x000590; 	T(ADD(sp, 6));	// 88371 add     sp, 6 ;~ 2B83:0590
cs=0x2b83;eip=0x000593; 	X(MOV(*(dw*)(((db*)&mmouspriteptr)), ax));	// 88372 mov     word ptr mmouspriteptr, ax ;~ 2B83:0593
cs=0x2b83;eip=0x000596; 	X(MOV(*(dw*)(((db*)&mmouspriteptr)+2), dx));	// 88373 mov     word ptr mmouspriteptr+2, dx ;~ 2B83:0596
cs=0x2b83;eip=0x00059a; 	T(MOV(ax, 0x0F));	// 88374 mov     ax, 0Fh ;~ 2B83:059A
cs=0x2b83;eip=0x00059d; 	X(PUSH(ax));	// 88375 push    ax ;~ 2B83:059D
cs=0x2b83;eip=0x00059e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_306))));	// 88376 push    [bp+var_306] ;~ 2B83:059E
cs=0x2b83;eip=0x0005a2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_312))));	// 88377 mov     ax, [bp+var_312] ;~ 2B83:05A2
cs=0x2b83;eip=0x0005a6; 	T(ADD(ax, video_flag2_is1));	// 88378 add     ax, video_flag2_is1 ;~ 2B83:05A6
cs=0x2b83;eip=0x0005aa; 	X(PUSH(ax));	// 88379 push    ax ;~ 2B83:05AA
cs=0x2b83;eip=0x0005ab; 	R(CALLF(sprite_make_wnd,0));	// 88380 call    sprite_make_wnd ;~ 2B83:05AB
cs=0x2b83;eip=0x0005b0; 	T(ADD(sp, 6));	// 88381 add     sp, 6 ;~ 2B83:05B0
cs=0x2b83;eip=0x0005b3; 	X(MOV(*(dw*)(((db*)&mouseunkspriteptr)), ax));	// 88382 mov     word ptr mouseunkspriteptr, ax ;~ 2B83:05B3
cs=0x2b83;eip=0x0005b6; 	X(MOV(*(dw*)(((db*)&mouseunkspriteptr)+2), dx));	// 88383 mov     word ptr mouseunkspriteptr+2, dx ;~ 2B83:05B6
cs=0x2b83;eip=0x0005ba; 	T(MOV(ax, offset(dseg,asdmain_0)));	// 88384 mov     ax, offset aSdmain_0 ; "sdmain" ;~ 2B83:05BA
cs=0x2b83;eip=0x0005bd; 	X(PUSH(ax));	// 88385 push    ax ;~ 2B83:05BD
cs=0x2b83;eip=0x0005be; 	R(CALLF(file_load_shape2d_fatal,0));	// 88386 call    file_load_shape2d_fatal_thunk ;~ 2B83:05BE
cs=0x2b83;eip=0x0005c3; 	T(ADD(sp, 2));	// 88387 add     sp, 2 ;~ 2B83:05C3
cs=0x2b83;eip=0x0005c6; 	X(MOV(*(dw*)(raddr(ss,bp+var_30c)), ax));	// 88388 mov     [bp+var_30C], ax ;~ 2B83:05C6
cs=0x2b83;eip=0x0005ca; 	X(MOV(*(dw*)(raddr(ss,bp+var_30a)), dx));	// 88389 mov     [bp+var_30A], dx ;~ 2B83:05CA
cs=0x2b83;eip=0x0005ce; 	X(PUSH(*(dw*)(((db*)&smouspriteptr)+2)));	// 88390 push    word ptr smouspriteptr+2 ;~ 2B83:05CE
cs=0x2b83;eip=0x0005d2; 	X(PUSH(*(dw*)(((db*)&smouspriteptr))));	// 88391 push    word ptr smouspriteptr ;~ 2B83:05D2
cs=0x2b83;eip=0x0005d6; 	R(CALLF(sprite_set_1_from_argptr,0));	// 88392 call    sprite_set_1_from_argptr ;~ 2B83:05D6
cs=0x2b83;eip=0x0005db; 	T(ADD(sp, 4));	// 88393 add     sp, 4 ;~ 2B83:05DB
cs=0x2b83;eip=0x0005de; 	T(SUB(ax, ax));	// 88394 sub     ax, ax ;~ 2B83:05DE
cs=0x2b83;eip=0x0005e0; 	X(PUSH(ax));	// 88395 push    ax ;~ 2B83:05E0
cs=0x2b83;eip=0x0005e1; 	X(PUSH(ax));	// 88396 push    ax ;~ 2B83:05E1
cs=0x2b83;eip=0x0005e2; 	T(MOV(ax, offset(dseg,asmou_0)));	// 88397 mov     ax, offset aSmou_0 ; "smou" ;~ 2B83:05E2
cs=0x2b83;eip=0x0005e5; 	X(PUSH(ax));	// 88398 push    ax ;~ 2B83:05E5
cs=0x2b83;eip=0x0005e6; 	X(PUSH(*(dw*)(raddr(ss,bp+var_30a))));	// 88399 push    [bp+var_30A] ;~ 2B83:05E6
cs=0x2b83;eip=0x0005ea; 	X(PUSH(*(dw*)(raddr(ss,bp+var_30c))));	// 88400 push    [bp+var_30C] ;~ 2B83:05EA
cs=0x2b83;eip=0x0005ee; 	R(CALLF(locate_shape_fatal,0));	// 88401 call    locate_shape_fatal ;~ 2B83:05EE
cs=0x2b83;eip=0x0005f3; 	T(ADD(sp, 6));	// 88402 add     sp, 6 ;~ 2B83:05F3
cs=0x2b83;eip=0x0005f6; 	X(PUSH(dx));	// 88403 push    dx ;~ 2B83:05F6
cs=0x2b83;eip=0x0005f7; 	X(PUSH(ax));	// 88404 push    ax ;~ 2B83:05F7
cs=0x2b83;eip=0x0005f8; 	R(CALLF(sprite_shape_to_1,0));	// 88405 call    sprite_shape_to_1 ;~ 2B83:05F8
cs=0x2b83;eip=0x0005fd; 	T(ADD(sp, 8));	// 88406 add     sp, 8 ;~ 2B83:05FD
cs=0x2b83;eip=0x000600; 	X(PUSH(*(dw*)(((db*)&mmouspriteptr)+2)));	// 88407 push    word ptr mmouspriteptr+2 ;~ 2B83:0600
cs=0x2b83;eip=0x000604; 	X(PUSH(*(dw*)(((db*)&mmouspriteptr))));	// 88408 push    word ptr mmouspriteptr ;~ 2B83:0604
cs=0x2b83;eip=0x000608; 	R(CALLF(sprite_set_1_from_argptr,0));	// 88409 call    sprite_set_1_from_argptr ;~ 2B83:0608
cs=0x2b83;eip=0x00060d; 	T(ADD(sp, 4));	// 88410 add     sp, 4 ;~ 2B83:060D
cs=0x2b83;eip=0x000610; 	T(SUB(ax, ax));	// 88411 sub     ax, ax ;~ 2B83:0610
cs=0x2b83;eip=0x000612; 	X(PUSH(ax));	// 88412 push    ax ;~ 2B83:0612
cs=0x2b83;eip=0x000613; 	X(PUSH(ax));	// 88413 push    ax ;~ 2B83:0613
cs=0x2b83;eip=0x000614; 	T(MOV(ax, offset(dseg,ammou)));	// 88414 mov     ax, offset aMmou ; "mmou" ;~ 2B83:0614
cs=0x2b83;eip=0x000617; 	X(PUSH(ax));	// 88415 push    ax ;~ 2B83:0617
cs=0x2b83;eip=0x000618; 	X(PUSH(*(dw*)(raddr(ss,bp+var_30a))));	// 88416 push    [bp+var_30A] ;~ 2B83:0618
cs=0x2b83;eip=0x00061c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_30c))));	// 88417 push    [bp+var_30C] ;~ 2B83:061C
cs=0x2b83;eip=0x000620; 	R(CALLF(locate_shape_fatal,0));	// 88418 call    locate_shape_fatal ;~ 2B83:0620
cs=0x2b83;eip=0x000625; 	T(ADD(sp, 6));	// 88419 add     sp, 6 ;~ 2B83:0625
cs=0x2b83;eip=0x000628; 	X(PUSH(dx));	// 88420 push    dx ;~ 2B83:0628
cs=0x2b83;eip=0x000629; 	X(PUSH(ax));	// 88421 push    ax ;~ 2B83:0629
cs=0x2b83;eip=0x00062a; 	R(CALLF(sprite_shape_to_1,0));	// 88422 call    sprite_shape_to_1 ;~ 2B83:062A
cs=0x2b83;eip=0x00062f; 	T(ADD(sp, 8));	// 88423 add     sp, 8 ;~ 2B83:062F
cs=0x2b83;eip=0x000632; 	X(PUSH(*(dw*)(raddr(ss,bp+var_30a))));	// 88424 push    [bp+var_30A] ;~ 2B83:0632
cs=0x2b83;eip=0x000636; 	X(PUSH(*(dw*)(raddr(ss,bp+var_30c))));	// 88425 push    [bp+var_30C] ;~ 2B83:0636
cs=0x2b83;eip=0x00063a; 	R(CALLF(mmgr_free,0));	// 88426 call    mmgr_free ;~ 2B83:063A
cs=0x2b83;eip=0x00063f; 	T(ADD(sp, 4));	// 88427 add     sp, 4 ;~ 2B83:063F
cs=0x2b83;eip=0x000642; 	R(CALLF(sprite_copy_2_to_1_2,0));	// 88428 call    sprite_copy_2_to_1_2 ;~ 2B83:0642
cs=0x2b83;eip=0x000647; 	X(POP(si));	// 88429 pop     si ;~ 2B83:0647
cs=0x2b83;eip=0x000648; 	T(MOV(sp, bp));	// 88430 mov     sp, bp ;~ 2B83:0648
cs=0x2b83;eip=0x00064a; 	X(POP(bp));	// 88431 pop     bp ;~ 2B83:064A
cs=0x2b83;eip=0x00064b; 	R(RETF(0));	// 88432 retf ;~ 2B83:064B
get_0:
	// 88439 
cs=0x2b83;eip=0x00064c; 	T(SUB(ax, ax));	// 88441 sub     ax, ax ;~ 2B83:064C
ret_2b83_64e:
	// 10441 
cs=0x2b83;eip=0x00064e; 	R(RETF(0));	// 88442 retf ;~ 2B83:064E
mmgr_alloc_resbytes:
	// 88452 
#undef arg_0
#define arg_0 6
	// 88455 arg_0           = word ptr  6 ;~ 2B83:0650
#undef arg_2
#define arg_2 8
	// 88456 arg_2           = word ptr  8 ;~ 2B83:0650
#undef arg_4
#define arg_4 0x0A
	// 88457 arg_4           = word ptr  0Ah ;~ 2B83:0650
ret_2b83_650:
	// 10442 
cs=0x2b83;eip=0x000650; 	X(PUSH(bp));	// 88459 push    bp ;~ 2B83:0650
cs=0x2b83;eip=0x000651; 	T(MOV(bp, sp));	// 88460 mov     bp, sp ;~ 2B83:0651
cs=0x2b83;eip=0x000653; 	T(MOV(ax, 0x10));	// 88461 mov     ax, 10h ;~ 2B83:0653
cs=0x2b83;eip=0x000656; 	T(CWD);	// 88462 cwd ;~ 2B83:0656
cs=0x2b83;eip=0x000657; 	X(PUSH(dx));	// 88463 push    dx ;~ 2B83:0657
cs=0x2b83;eip=0x000658; 	X(PUSH(ax));	// 88464 push    ax ;~ 2B83:0658
cs=0x2b83;eip=0x000659; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 88465 push    [bp+arg_4] ;~ 2B83:0659
cs=0x2b83;eip=0x00065c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 88466 push    [bp+arg_2] ;~ 2B83:065C
cs=0x2b83;eip=0x00065f; 	R(CALLF(__afldiv,0));	// 88467 call    __aFldiv ;~ 2B83:065F
cs=0x2b83;eip=0x000664; 	T(INC(ax));	// 88468 inc     ax ;~ 2B83:0664
cs=0x2b83;eip=0x000665; 	X(PUSH(ax));	// 88469 push    ax ;~ 2B83:0665
cs=0x2b83;eip=0x000666; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 88470 push    [bp+arg_0] ;~ 2B83:0666
cs=0x2b83;eip=0x000669; 	R(CALLF(mmgr_alloc_pages,0));	// 88471 call    mmgr_alloc_pages ;~ 2B83:0669
cs=0x2b83;eip=0x00066e; 	T(ADD(sp, 4));	// 88472 add     sp, 4 ;~ 2B83:066E
cs=0x2b83;eip=0x000671; 	X(POP(bp));	// 88473 pop     bp ;~ 2B83:0671
cs=0x2b83;eip=0x000672; 	R(RETF(0));	// 88474 retf ;~ 2B83:0672
mmgr_get_res_ofs_diff_scaled:
	// 88483 
cs=0x2b83;eip=0x000674; 	R(CALLF(mmgr_get_ofs_diff,0));	// 88485 call    mmgr_get_ofs_diff ;~ 2B83:0674
ret_2b83_679:
	// 10443 
cs=0x2b83;eip=0x000679; 	T(SUB(dx, dx));	// 88486 sub     dx, dx ;~ 2B83:0679
cs=0x2b83;eip=0x00067b; 	T(MOV(cl, 4));	// 88487 mov     cl, 4 ;~ 2B83:067B
loc_3a48d:
	// 10444 
cs=0x2b83;eip=0x00067d; 	T(SHL(ax, 1));	// 88490 shl     ax, 1 ;~ 2B83:067D
cs=0x2b83;eip=0x00067f; 	T(RCL(dx, 1));	// 88491 rcl     dx, 1 ;~ 2B83:067F
cs=0x2b83;eip=0x000681; 	T(DEC(cl));	// 88492 dec     cl ;~ 2B83:0681
cs=0x2b83;eip=0x000683; 	R(JNZ(loc_3a48d));	// 88493 jnz     short loc_3A48D ;~ 2B83:0683
cs=0x2b83;eip=0x000685; 	R(RETF(0));	// 88494 retf ;~ 2B83:0685
mmgr_get_chunk_size_bytes:
	// 88502 
#undef arg_0
#define arg_0 6
	// 88504 arg_0           = word ptr  6 ;~ 2B83:0686
#undef arg_2
#define arg_2 8
	// 88505 arg_2           = word ptr  8 ;~ 2B83:0686
ret_2b83_686:
	// 10445 
cs=0x2b83;eip=0x000686; 	X(PUSH(bp));	// 88507 push    bp ;~ 2B83:0686
cs=0x2b83;eip=0x000687; 	T(MOV(bp, sp));	// 88508 mov     bp, sp ;~ 2B83:0687
cs=0x2b83;eip=0x000689; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 88509 push    [bp+arg_2] ;~ 2B83:0689
cs=0x2b83;eip=0x00068c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 88510 push    [bp+arg_0] ;~ 2B83:068C
cs=0x2b83;eip=0x00068f; 	R(CALLF(mmgr_get_chunk_size,0));	// 88511 call    mmgr_get_chunk_size ;~ 2B83:068F
cs=0x2b83;eip=0x000694; 	T(ADD(sp, 4));	// 88512 add     sp, 4 ;~ 2B83:0694
cs=0x2b83;eip=0x000697; 	T(SUB(dx, dx));	// 88513 sub     dx, dx ;~ 2B83:0697
cs=0x2b83;eip=0x000699; 	T(MOV(cl, 4));	// 88514 mov     cl, 4 ;~ 2B83:0699
loc_3a4ab:
	// 10446 
cs=0x2b83;eip=0x00069b; 	T(SHL(ax, 1));	// 88517 shl     ax, 1 ;~ 2B83:069B
cs=0x2b83;eip=0x00069d; 	T(RCL(dx, 1));	// 88518 rcl     dx, 1 ;~ 2B83:069D
cs=0x2b83;eip=0x00069f; 	T(DEC(cl));	// 88519 dec     cl ;~ 2B83:069F
cs=0x2b83;eip=0x0006a1; 	R(JNZ(loc_3a4ab));	// 88520 jnz     short loc_3A4AB ;~ 2B83:06A1
cs=0x2b83;eip=0x0006a3; 	X(POP(bp));	// 88521 pop     bp ;~ 2B83:06A3
cs=0x2b83;eip=0x0006a4; 	R(RETF(0));	// 88522 retf ;~ 2B83:06A4

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return true;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kfile_find_next_alt: 	goto file_find_next_alt;
        case m2c::kget_0: 	goto get_0;
        case m2c::kinit_main: 	goto init_main;
        case m2c::kloc_39f5e: 	goto loc_39f5e;
        case m2c::kloc_39f62: 	goto loc_39f62;
        case m2c::kloc_39f63: 	goto loc_39f63;
        case m2c::kloc_39f6b: 	goto loc_39f6b;
        case m2c::kloc_39f91: 	goto loc_39f91;
        case m2c::kloc_39fc8: 	goto loc_39fc8;
        case m2c::kloc_39fd7: 	goto loc_39fd7;
        case m2c::kloc_3a000: 	goto loc_3a000;
        case m2c::kloc_3a00f: 	goto loc_3a00f;
        case m2c::kloc_3a022: 	goto loc_3a022;
        case m2c::kloc_3a046: 	goto loc_3a046;
        case m2c::kloc_3a05e: 	goto loc_3a05e;
        case m2c::kloc_3a072: 	goto loc_3a072;
        case m2c::kloc_3a07a: 	goto loc_3a07a;
        case m2c::kloc_3a08a: 	goto loc_3a08a;
        case m2c::kloc_3a0c9: 	goto loc_3a0c9;
        case m2c::kloc_3a0d9: 	goto loc_3a0d9;
        case m2c::kloc_3a10f: 	goto loc_3a10f;
        case m2c::kloc_3a140: 	goto loc_3a140;
        case m2c::kloc_3a156: 	goto loc_3a156;
        case m2c::kloc_3a190: 	goto loc_3a190;
        case m2c::kloc_3a191: 	goto loc_3a191;
        case m2c::kloc_3a1aa: 	goto loc_3a1aa;
        case m2c::kloc_3a1ab: 	goto loc_3a1ab;
        case m2c::kloc_3a1b6: 	goto loc_3a1b6;
        case m2c::kloc_3a1ce: 	goto loc_3a1ce;
        case m2c::kloc_3a1d4: 	goto loc_3a1d4;
        case m2c::kloc_3a1e2: 	goto loc_3a1e2;
        case m2c::kloc_3a1e8: 	goto loc_3a1e8;
        case m2c::kloc_3a1f6: 	goto loc_3a1f6;
        case m2c::kloc_3a204: 	goto loc_3a204;
        case m2c::kloc_3a212: 	goto loc_3a212;
        case m2c::kloc_3a21f: 	goto loc_3a21f;
        case m2c::kloc_3a226: 	goto loc_3a226;
        case m2c::kloc_3a22b: 	goto loc_3a22b;
        case m2c::kloc_3a270: 	goto loc_3a270;
        case m2c::kloc_3a277: 	goto loc_3a277;
        case m2c::kloc_3a280: 	goto loc_3a280;
        case m2c::kloc_3a290: 	goto loc_3a290;
        case m2c::kloc_3a29a: 	goto loc_3a29a;
        case m2c::kloc_3a2a8: 	goto loc_3a2a8;
        case m2c::kloc_3a2b2: 	goto loc_3a2b2;
        case m2c::kloc_3a300: 	goto loc_3a300;
        case m2c::kloc_3a48d: 	goto loc_3a48d;
        case m2c::kloc_3a4ab: 	goto loc_3a4ab;
        case m2c::kmmgr_get_res_ofs_diff_scaled: 	goto mmgr_get_res_ofs_diff_scaled;
        case m2c::knullsub_1: 	goto nullsub_1;
        case m2c::knullsub_2: 	goto nullsub_2;
        case m2c::krandom_wait: 	goto random_wait;
        case m2c::kret_2b83_14: 	goto ret_2b83_14;
        case m2c::kret_2b83_4: 	goto ret_2b83_4;
        case m2c::kret_2b83_41: 	goto ret_2b83_41;
        case m2c::kret_2b83_44d: 	goto ret_2b83_44d;
        case m2c::kret_2b83_4b0: 	goto ret_2b83_4b0;
        case m2c::kret_2b83_64e: 	goto ret_2b83_64e;
        case m2c::kret_2b83_650: 	goto ret_2b83_650;
        case m2c::kret_2b83_679: 	goto ret_2b83_679;
        case m2c::kret_2b83_686: 	goto ret_2b83_686;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

