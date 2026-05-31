/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool file_load_shape2d_nofatal2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    file_load_shape2d_nofatal2:
    _begin:
#undef arg_0
#define arg_0 6
	// 87627 arg_0           = word ptr  6 ;~ 2B83:0004
cs=0x2b83;eip=0x000004; 	X(PUSH(bp));	// 87629 push    bp ;~ 2B83:0004
cs=0x2b83;eip=0x000005; 	T(MOV(bp, sp));	// 87630 mov     bp, sp ;~ 2B83:0005
cs=0x2b83;eip=0x000007; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 87631 push    [bp+arg_0] ;~ 2B83:0007
cs=0x2b83;eip=0x00000a; 	J(CALLF(file_load_shape2d_nofatal_thunk,0));	// 87632 call    file_load_shape2d_nofatal_thunk ;~ 2B83:000A
cs=0x2b83;eip=0x00000f; 	T(ADD(sp, 2));	// 87633 add     sp, 2 ;~ 2B83:000F
cs=0x2b83;eip=0x000012; 	X(POP(bp));	// 87634 pop     bp ;~ 2B83:0012
cs=0x2b83;eip=0x000013; 	J(RETF(0));	// 87635 retf ;~ 2B83:0013

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kfile_load_shape2d_nofatal2: 	goto file_load_shape2d_nofatal2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool file_combine_and_find(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    file_combine_and_find:
    _begin:
#undef var_50
#define var_50 -0x50
	// 87647 var_50          = byte ptr -50h ;~ 2B83:0014
#undef arg_0
#define arg_0 6
	// 87648 arg_0           = dword ptr  6 ;~ 2B83:0014
#undef arg_4
#define arg_4 0x0A
	// 87649 arg_4           = dword ptr  0Ah ;~ 2B83:0014
cs=0x2b83;eip=0x000014; 	X(PUSH(bp));	// 87651 push    bp ;~ 2B83:0014
cs=0x2b83;eip=0x000015; 	T(MOV(bp, sp));	// 87652 mov     bp, sp ;~ 2B83:0015
cs=0x2b83;eip=0x000017; 	T(SUB(sp, 0x50));	// 87653 sub     sp, 50h ;~ 2B83:0017
cs=0x2b83;eip=0x00001a; 	T(ax = bp+var_50);	// 87654 lea     ax, [bp+var_50] ;~ 2B83:001A
cs=0x2b83;eip=0x00001d; 	X(PUSH(ax));	// 87655 push    ax              ; char * ;~ 2B83:001D
cs=0x2b83;eip=0x00001e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_4)))));	// 87656 push    word ptr [bp+arg_4] ; int ;~ 2B83:001E
cs=0x2b83;eip=0x000021; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 87657 push    word ptr [bp+arg_0+2] ;~ 2B83:0021
cs=0x2b83;eip=0x000024; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 87658 push    word ptr [bp+arg_0] ; char * ;~ 2B83:0024
cs=0x2b83;eip=0x000027; 	J(CALLF(file_build_path,0));	// 87659 call    file_build_path ;~ 2B83:0027
cs=0x2b83;eip=0x00002c; 	T(ADD(sp, 8));	// 87660 add     sp, 8 ;~ 2B83:002C
cs=0x2b83;eip=0x00002f; 	T(ax = bp+var_50);	// 87661 lea     ax, [bp+var_50] ;~ 2B83:002F
cs=0x2b83;eip=0x000032; 	X(PUSH(ax));	// 87662 push    ax ;~ 2B83:0032
cs=0x2b83;eip=0x000033; 	J(CALLF(file_find,0));	// 87663 call    file_find ;~ 2B83:0033
cs=0x2b83;eip=0x000038; 	T(MOV(sp, bp));	// 87664 mov     sp, bp ;~ 2B83:0038
cs=0x2b83;eip=0x00003a; 	X(POP(bp));	// 87665 pop     bp ;~ 2B83:003A
cs=0x2b83;eip=0x00003b; 	J(RETF(0));	// 87666 retf ;~ 2B83:003B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kfile_combine_and_find: 	goto file_combine_and_find;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool file_find_next_alt(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    file_find_next_alt:
    _begin:
cs=0x2b83;eip=0x00003c; 	J(CALLF(file_find_next,0));	// 87675 call    file_find_next ;~ 2B83:003C
cs=0x2b83;eip=0x000041; 	J(RETF(0));	// 87676 retf ;~ 2B83:0041

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kfile_find_next_alt: 	goto file_find_next_alt;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool nullsub_1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    nullsub_1:
    _begin:
cs=0x2b83;eip=0x000042; 	J(RETF(0));	// 87685 retf ;~ 2B83:0042

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::knullsub_1: 	goto nullsub_1;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool nullsub_2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    nullsub_2:
    _begin:
cs=0x2b83;eip=0x000044; 	J(RETF(0));	// 87696 retf ;~ 2B83:0044

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::knullsub_2: 	goto nullsub_2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool init_main(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    init_main:
    _begin:
#undef var_1e
#define var_1e -0x1E
	// 87708 var_1E          = word ptr -1Eh ;~ 2B83:0046
#undef var_1c
#define var_1c -0x1C
	// 87709 var_1C          = word ptr -1Ch ;~ 2B83:0046
#undef var_1a
#define var_1a -0x1A
	// 87710 var_1A          = word ptr -1Ah ;~ 2B83:0046
#undef var_18
#define var_18 -0x18
	// 87711 var_18          = word ptr -18h ;~ 2B83:0046
#undef var_12
#define var_12 -0x12
	// 87712 var_12          = byte ptr -12h ;~ 2B83:0046
#undef var_10
#define var_10 -0x10
	// 87713 var_10          = word ptr -10h ;~ 2B83:0046
#undef var_e
#define var_e -0x0E
	// 87714 var_E           = byte ptr -0Eh ;~ 2B83:0046
#undef var_c
#define var_c -0x0C
	// 87715 var_C           = word ptr -0Ch ;~ 2B83:0046
#undef var_a
#define var_a -0x0A
	// 87716 var_A           = word ptr -0Ah ;~ 2B83:0046
#undef var_8
#define var_8 -8
	// 87717 var_8           = word ptr -8 ;~ 2B83:0046
#undef var_6
#define var_6 -6
	// 87718 var_6           = word ptr -6 ;~ 2B83:0046
#undef var_4
#define var_4 -4
	// 87719 var_4           = word ptr -4 ;~ 2B83:0046
#undef var_2
#define var_2 -2
	// 87720 var_2           = byte ptr -2 ;~ 2B83:0046
#undef arg_0
#define arg_0 6
	// 87721 arg_0           = word ptr  6 ;~ 2B83:0046
#undef arg_2
#define arg_2 8
	// 87722 arg_2           = word ptr  8 ;~ 2B83:0046
cs=0x2b83;eip=0x000046; 	X(PUSH(bp));	// 87724 push    bp ;~ 2B83:0046
cs=0x2b83;eip=0x000047; 	T(MOV(bp, sp));	// 87725 mov     bp, sp ;~ 2B83:0047
cs=0x2b83;eip=0x000049; 	T(SUB(sp, 0x1E));	// 87726 sub     sp, 1Eh ;~ 2B83:0049
cs=0x2b83;eip=0x00004c; 	X(PUSH(di));	// 87727 push    di ;~ 2B83:004C
cs=0x2b83;eip=0x00004d; 	X(PUSH(si));	// 87728 push    si ;~ 2B83:004D
cs=0x2b83;eip=0x00004e; 	J(CALLF(kb_init_interrupt,0));	// 87729 call    kb_init_interrupt ;~ 2B83:004E
cs=0x2b83;eip=0x000053; 	J(CALLF(kb_shift_checking2,0));	// 87730 call    kb_shift_checking2 ;~ 2B83:0053
cs=0x2b83;eip=0x000058; 	J(CALLF(kb_call_readchar_callback,0));	// 87731 call    kb_call_readchar_callback ;~ 2B83:0058
cs=0x2b83;eip=0x00005d; 	T(MOV(ax, m2c::kdo_mrl_textres));	// 87732 mov     ax, offset do_mrl_textres ;~ 2B83:005D
cs=0x2b83;eip=0x000060; 	T(MOV(dx, seg_offset(seg008)));	// 87733 mov     dx, seg seg008 ;~ 2B83:0060
cs=0x2b83;eip=0x000063; 	X(PUSH(dx));	// 87734 push    dx ;~ 2B83:0063
cs=0x2b83;eip=0x000064; 	X(PUSH(ax));	// 87735 push    ax ;~ 2B83:0064
cs=0x2b83;eip=0x000065; 	T(MOV(ax, 7));	// 87736 mov     ax, 7 ;~ 2B83:0065
cs=0x2b83;eip=0x000068; 	X(PUSH(ax));	// 87737 push    ax ;~ 2B83:0068
cs=0x2b83;eip=0x000069; 	J(CALLF(kb_reg_callback,0));	// 87738 call    kb_reg_callback ;~ 2B83:0069
cs=0x2b83;eip=0x00006e; 	T(ADD(sp, 6));	// 87739 add     sp, 6 ;~ 2B83:006E
cs=0x2b83;eip=0x000071; 	T(MOV(ax, m2c::kdo_joy_restext));	// 87740 mov     ax, offset do_joy_restext ;~ 2B83:0071
cs=0x2b83;eip=0x000074; 	T(MOV(dx, seg_offset(seg008)));	// 87741 mov     dx, seg seg008 ;~ 2B83:0074
cs=0x2b83;eip=0x000077; 	X(PUSH(dx));	// 87742 push    dx ;~ 2B83:0077
cs=0x2b83;eip=0x000078; 	X(PUSH(ax));	// 87743 push    ax ;~ 2B83:0078
cs=0x2b83;eip=0x000079; 	T(MOV(ax, 0x0A));	// 87744 mov     ax, 0Ah ;~ 2B83:0079
cs=0x2b83;eip=0x00007c; 	X(PUSH(ax));	// 87745 push    ax ;~ 2B83:007C
cs=0x2b83;eip=0x00007d; 	J(CALLF(kb_reg_callback,0));	// 87746 call    kb_reg_callback ;~ 2B83:007D
cs=0x2b83;eip=0x000082; 	T(ADD(sp, 6));	// 87747 add     sp, 6 ;~ 2B83:0082
cs=0x2b83;eip=0x000085; 	T(MOV(ax, m2c::kdo_key_restext));	// 87748 mov     ax, offset do_key_restext ;~ 2B83:0085
cs=0x2b83;eip=0x000088; 	T(MOV(dx, seg_offset(seg008)));	// 87749 mov     dx, seg seg008 ;~ 2B83:0088
cs=0x2b83;eip=0x00008b; 	X(PUSH(dx));	// 87750 push    dx ;~ 2B83:008B
cs=0x2b83;eip=0x00008c; 	X(PUSH(ax));	// 87751 push    ax ;~ 2B83:008C
cs=0x2b83;eip=0x00008d; 	T(MOV(ax, 0x0B));	// 87752 mov     ax, 0Bh ;~ 2B83:008D
cs=0x2b83;eip=0x000090; 	X(PUSH(ax));	// 87753 push    ax ;~ 2B83:0090
cs=0x2b83;eip=0x000091; 	J(CALLF(kb_reg_callback,0));	// 87754 call    kb_reg_callback ;~ 2B83:0091
cs=0x2b83;eip=0x000096; 	T(ADD(sp, 6));	// 87755 add     sp, 6 ;~ 2B83:0096
cs=0x2b83;eip=0x000099; 	T(MOV(ax, m2c::kdo_mof_restext));	// 87756 mov     ax, offset do_mof_restext ;~ 2B83:0099
cs=0x2b83;eip=0x00009c; 	T(MOV(dx, seg_offset(seg008)));	// 87757 mov     dx, seg seg008 ;~ 2B83:009C
cs=0x2b83;eip=0x00009f; 	X(PUSH(dx));	// 87758 push    dx ;~ 2B83:009F
cs=0x2b83;eip=0x0000a0; 	X(PUSH(ax));	// 87759 push    ax ;~ 2B83:00A0
cs=0x2b83;eip=0x0000a1; 	T(MOV(ax, 0x3200));	// 87760 mov     ax, 3200h ;~ 2B83:00A1
cs=0x2b83;eip=0x0000a4; 	X(PUSH(ax));	// 87761 push    ax ;~ 2B83:00A4
cs=0x2b83;eip=0x0000a5; 	J(CALLF(kb_reg_callback,0));	// 87762 call    kb_reg_callback ;~ 2B83:00A5
cs=0x2b83;eip=0x0000aa; 	T(ADD(sp, 6));	// 87763 add     sp, 6 ;~ 2B83:00AA
cs=0x2b83;eip=0x0000ad; 	T(MOV(ax, m2c::kdo_pau_restext));	// 87764 mov     ax, offset do_pau_restext ;~ 2B83:00AD
cs=0x2b83;eip=0x0000b0; 	T(MOV(dx, seg_offset(seg008)));	// 87765 mov     dx, seg seg008 ;~ 2B83:00B0
cs=0x2b83;eip=0x0000b3; 	X(PUSH(dx));	// 87766 push    dx ;~ 2B83:00B3
cs=0x2b83;eip=0x0000b4; 	X(PUSH(ax));	// 87767 push    ax ;~ 2B83:00B4
cs=0x2b83;eip=0x0000b5; 	T(MOV(ax, 0x10));	// 87768 mov     ax, 10h ;~ 2B83:00B5
cs=0x2b83;eip=0x0000b8; 	X(PUSH(ax));	// 87769 push    ax ;~ 2B83:00B8
cs=0x2b83;eip=0x0000b9; 	J(CALLF(kb_reg_callback,0));	// 87770 call    kb_reg_callback ;~ 2B83:00B9
cs=0x2b83;eip=0x0000be; 	T(ADD(sp, 6));	// 87771 add     sp, 6 ;~ 2B83:00BE
cs=0x2b83;eip=0x0000c1; 	T(MOV(ax, m2c::kdo_pau_restext));	// 87772 mov     ax, offset do_pau_restext ;~ 2B83:00C1
cs=0x2b83;eip=0x0000c4; 	T(MOV(dx, seg_offset(seg008)));	// 87773 mov     dx, seg seg008 ;~ 2B83:00C4
cs=0x2b83;eip=0x0000c7; 	X(PUSH(dx));	// 87774 push    dx ;~ 2B83:00C7
cs=0x2b83;eip=0x0000c8; 	X(PUSH(ax));	// 87775 push    ax ;~ 2B83:00C8
cs=0x2b83;eip=0x0000c9; 	T(MOV(ax, 0x70));	// 87776 mov     ax, 70h ; 'p' ;~ 2B83:00C9
cs=0x2b83;eip=0x0000cc; 	X(PUSH(ax));	// 87777 push    ax ;~ 2B83:00CC
cs=0x2b83;eip=0x0000cd; 	J(CALLF(kb_reg_callback,0));	// 87778 call    kb_reg_callback ;~ 2B83:00CD
cs=0x2b83;eip=0x0000d2; 	T(ADD(sp, 6));	// 87779 add     sp, 6 ;~ 2B83:00D2
cs=0x2b83;eip=0x0000d5; 	T(MOV(ax, m2c::kdo_dos_restext));	// 87780 mov     ax, offset do_dos_restext ;~ 2B83:00D5
cs=0x2b83;eip=0x0000d8; 	T(MOV(dx, seg_offset(seg008)));	// 87781 mov     dx, seg seg008 ;~ 2B83:00D8
cs=0x2b83;eip=0x0000db; 	X(PUSH(dx));	// 87782 push    dx ;~ 2B83:00DB
cs=0x2b83;eip=0x0000dc; 	X(PUSH(ax));	// 87783 push    ax ;~ 2B83:00DC
cs=0x2b83;eip=0x0000dd; 	T(MOV(ax, 0x11));	// 87784 mov     ax, 11h ;~ 2B83:00DD
cs=0x2b83;eip=0x0000e0; 	X(PUSH(ax));	// 87785 push    ax ;~ 2B83:00E0
cs=0x2b83;eip=0x0000e1; 	J(CALLF(kb_reg_callback,0));	// 87786 call    kb_reg_callback ;~ 2B83:00E1
cs=0x2b83;eip=0x0000e6; 	T(ADD(sp, 6));	// 87787 add     sp, 6 ;~ 2B83:00E6
cs=0x2b83;eip=0x0000e9; 	T(MOV(ax, m2c::kdo_sonsof_restext));	// 87788 mov     ax, offset do_sonsof_restext ;~ 2B83:00E9
cs=0x2b83;eip=0x0000ec; 	T(MOV(dx, seg_offset(seg008)));	// 87789 mov     dx, seg seg008 ;~ 2B83:00EC
cs=0x2b83;eip=0x0000ef; 	X(PUSH(dx));	// 87790 push    dx ;~ 2B83:00EF
cs=0x2b83;eip=0x0000f0; 	X(PUSH(ax));	// 87791 push    ax ;~ 2B83:00F0
cs=0x2b83;eip=0x0000f1; 	T(MOV(ax, 0x13));	// 87792 mov     ax, 13h ;~ 2B83:00F1
cs=0x2b83;eip=0x0000f4; 	X(PUSH(ax));	// 87793 push    ax ;~ 2B83:00F4
cs=0x2b83;eip=0x0000f5; 	J(CALLF(kb_reg_callback,0));	// 87794 call    kb_reg_callback ;~ 2B83:00F5
cs=0x2b83;eip=0x0000fa; 	T(ADD(sp, 6));	// 87795 add     sp, 6 ;~ 2B83:00FA
cs=0x2b83;eip=0x0000fd; 	T(MOV(ax, m2c::kdo_dos_restext));	// 87796 mov     ax, offset do_dos_restext ;~ 2B83:00FD
cs=0x2b83;eip=0x000100; 	T(MOV(dx, seg_offset(seg008)));	// 87797 mov     dx, seg seg008 ;~ 2B83:0100
cs=0x2b83;eip=0x000103; 	X(PUSH(dx));	// 87798 push    dx ;~ 2B83:0103
cs=0x2b83;eip=0x000104; 	X(PUSH(ax));	// 87799 push    ax ;~ 2B83:0104
cs=0x2b83;eip=0x000105; 	T(MOV(ax, 0x18));	// 87800 mov     ax, 18h ;~ 2B83:0105
cs=0x2b83;eip=0x000108; 	X(PUSH(ax));	// 87801 push    ax ;~ 2B83:0108
cs=0x2b83;eip=0x000109; 	J(CALLF(kb_reg_callback,0));	// 87802 call    kb_reg_callback ;~ 2B83:0109
cs=0x2b83;eip=0x00010e; 	T(ADD(sp, 6));	// 87803 add     sp, 6 ;~ 2B83:010E
cs=0x2b83;eip=0x000111; 	X(MOV(video_flag1_is1, 1));	// 87804 mov     video_flag1_is1, 1 ;~ 2B83:0111
cs=0x2b83;eip=0x000117; 	X(MOV(video_flag2_is1, 1));	// 87805 mov     video_flag2_is1, 1 ;~ 2B83:0117
cs=0x2b83;eip=0x00011d; 	X(MOV(video_flag3_isffff, 0x0FFFF));	// 87806 mov     video_flag3_isFFFF, 0FFFFh ;~ 2B83:011D
cs=0x2b83;eip=0x000123; 	X(MOV(video_flag4_is1, 1));	// 87807 mov     video_flag4_is1, 1 ;~ 2B83:0123
cs=0x2b83;eip=0x000129; 	J(CALLF(mmgr_alloc_a000,0));	// 87808 call    mmgr_alloc_a000 ;~ 2B83:0129
cs=0x2b83;eip=0x00012e; 	X(MOV(video_flag5_is0, 0));	// 87809 mov     video_flag5_is0, 0 ;~ 2B83:012E
cs=0x2b83;eip=0x000133; 	X(MOV(video_flag6_is1, 1));	// 87810 mov     video_flag6_is1, 1 ;~ 2B83:0133
cs=0x2b83;eip=0x000138; 	X(MOV(textresprefix, 'e'));	// 87811 mov     textresprefix, 'e' ;~ 2B83:0138
cs=0x2b83;eip=0x00013d; 	X(MOV(*(raddr(ss,bp+var_12)), 0));	// 87812 mov     [bp+var_12], 0 ;~ 2B83:013D
cs=0x2b83;eip=0x000141; 	X(MOV(*(raddr(ss,bp+var_e)), 0));	// 87813 mov     [bp+var_E], 0 ;~ 2B83:0141
cs=0x2b83;eip=0x000145; 	X(MOV(*(raddr(ss,bp+var_2)), 0));	// 87814 mov     [bp+var_2], 0 ;~ 2B83:0145
cs=0x2b83;eip=0x000149; 	T(MOV(si, 1));	// 87815 mov     si, 1 ;~ 2B83:0149
cs=0x2b83;eip=0x00014c; 	J(JMP(loc_39f63));	// 87816 jmp     short loc_39F63 ;~ 2B83:014C
loc_39f5e:
	// 9806 
cs=0x2b83;eip=0x00014e; 	X(MOV(*(raddr(ss,bp+var_12)), 1));	// 87820 mov     [bp+var_12], 1 ;~ 2B83:014E
loc_39f62:
	// 9807 
cs=0x2b83;eip=0x000152; 	T(INC(si));	// 87824 inc     si ;~ 2B83:0152
loc_39f63:
	// 9808 
cs=0x2b83;eip=0x000153; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), si));	// 87827 cmp     [bp+arg_0], si ;~ 2B83:0153
cs=0x2b83;eip=0x000156; 	J(JG(loc_39f6b));	// 87828 jg      short loc_39F6B ;~ 2B83:0156
cs=0x2b83;eip=0x000158; 	J(JMP(loc_3a07a));	// 87829 jmp     loc_3A07A ;~ 2B83:0158
loc_39f6b:
	// 9809 
cs=0x2b83;eip=0x00015b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 87833 mov     bx, [bp+arg_2] ;~ 2B83:015B
cs=0x2b83;eip=0x00015e; 	T(MOV(ax, si));	// 87834 mov     ax, si ;~ 2B83:015E
cs=0x2b83;eip=0x000160; 	T(SHL(ax, 1));	// 87835 shl     ax, 1 ;~ 2B83:0160
cs=0x2b83;eip=0x000162; 	T(ADD(bx, ax));	// 87836 add     bx, ax ;~ 2B83:0162
cs=0x2b83;eip=0x000164; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 87837 mov     ax, [bx] ;~ 2B83:0164
cs=0x2b83;eip=0x000166; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 87838 mov     [bp+var_1E], ax ;~ 2B83:0166
cs=0x2b83;eip=0x000169; 	T(MOV(bx, ax));	// 87839 mov     bx, ax ;~ 2B83:0169
cs=0x2b83;eip=0x00016b; 	T(CMP(*(raddr(ds,bx)), 0x2F));	// 87840 cmp     byte ptr [bx], 2Fh ; '/' ;~ 2B83:016B
cs=0x2b83;eip=0x00016e; 	J(JNZ(loc_39f62));	// 87841 jnz     short loc_39F62 ;~ 2B83:016E
cs=0x2b83;eip=0x000170; 	T(MOV(al, *(raddr(ds,bx+1))));	// 87842 mov     al, [bx+1] ;~ 2B83:0170
cs=0x2b83;eip=0x000173; 	T(CBW);	// 87843 cbw ;~ 2B83:0173
cs=0x2b83;eip=0x000174; 	T(CMP(ax, 0x68));	// 87844 cmp     ax, 68h ; 'h' ;~ 2B83:0174
cs=0x2b83;eip=0x000177; 	J(JZ(loc_39f5e));	// 87845 jz      short loc_39F5E ;~ 2B83:0177
cs=0x2b83;eip=0x000179; 	T(CMP(ax, 0x6E));	// 87846 cmp     ax, 6Eh ; 'n' ;~ 2B83:0179
cs=0x2b83;eip=0x00017c; 	J(JNZ(loc_39f91));	// 87847 jnz     short loc_39F91 ;~ 2B83:017C
cs=0x2b83;eip=0x00017e; 	J(JMP(loc_3a046));	// 87848 jmp     loc_3A046 ;~ 2B83:017E
loc_39f91:
	// 9810 
cs=0x2b83;eip=0x000181; 	T(CMP(ax, 0x73));	// 87852 cmp     ax, 73h ; 's' ;~ 2B83:0181
cs=0x2b83;eip=0x000184; 	J(JNZ(loc_39f62));	// 87853 jnz     short loc_39F62 ;~ 2B83:0184
cs=0x2b83;eip=0x000186; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 87854 mov     bx, [bp+arg_2] ;~ 2B83:0186
cs=0x2b83;eip=0x000189; 	T(MOV(ax, si));	// 87855 mov     ax, si ;~ 2B83:0189
cs=0x2b83;eip=0x00018b; 	T(SHL(ax, 1));	// 87856 shl     ax, 1 ;~ 2B83:018B
cs=0x2b83;eip=0x00018d; 	T(ADD(bx, ax));	// 87857 add     bx, ax ;~ 2B83:018D
cs=0x2b83;eip=0x00018f; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 87858 mov     ax, [bx] ;~ 2B83:018F
cs=0x2b83;eip=0x000191; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 87859 mov     [bp+var_1E], ax ;~ 2B83:0191
cs=0x2b83;eip=0x000194; 	T(MOV(bx, ax));	// 87860 mov     bx, ax ;~ 2B83:0194
cs=0x2b83;eip=0x000196; 	T(MOV(al, *(raddr(ds,bx+2))));	// 87861 mov     al, [bx+2] ;~ 2B83:0196
cs=0x2b83;eip=0x000199; 	T(CBW);	// 87862 cbw ;~ 2B83:0199
cs=0x2b83;eip=0x00019a; 	T(MOV(bx, ax));	// 87863 mov     bx, ax ;~ 2B83:019A
cs=0x2b83;eip=0x00019c; 	T(TEST(*((g_ascii_props)+bx), 1));	// 87864 test    g_ascii_props[bx], 1 ;~ 2B83:019C
cs=0x2b83;eip=0x0001a1; 	J(JZ(loc_39fc8));	// 87865 jz      short loc_39FC8 ;~ 2B83:01A1
cs=0x2b83;eip=0x0001a3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 87866 mov     bx, [bp+arg_2] ;~ 2B83:01A3
cs=0x2b83;eip=0x0001a6; 	T(MOV(ax, si));	// 87867 mov     ax, si ;~ 2B83:01A6
cs=0x2b83;eip=0x0001a8; 	T(SHL(ax, 1));	// 87868 shl     ax, 1 ;~ 2B83:01A8
cs=0x2b83;eip=0x0001aa; 	T(ADD(bx, ax));	// 87869 add     bx, ax ;~ 2B83:01AA
cs=0x2b83;eip=0x0001ac; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 87870 mov     bx, [bx] ;~ 2B83:01AC
cs=0x2b83;eip=0x0001ae; 	T(MOV(al, *(raddr(ds,bx+2))));	// 87871 mov     al, [bx+2] ;~ 2B83:01AE
cs=0x2b83;eip=0x0001b1; 	T(CBW);	// 87872 cbw ;~ 2B83:01B1
cs=0x2b83;eip=0x0001b2; 	T(ADD(ax, 0x20));	// 87873 add     ax, 20h ; ' ' ;~ 2B83:01B2
cs=0x2b83;eip=0x0001b5; 	J(JMP(loc_39fd7));	// 87874 jmp     short loc_39FD7 ;~ 2B83:01B5
loc_39fc8:
	// 9811 
cs=0x2b83;eip=0x0001b8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 87879 mov     bx, [bp+arg_2] ;~ 2B83:01B8
cs=0x2b83;eip=0x0001bb; 	T(MOV(ax, si));	// 87880 mov     ax, si ;~ 2B83:01BB
cs=0x2b83;eip=0x0001bd; 	T(SHL(ax, 1));	// 87881 shl     ax, 1 ;~ 2B83:01BD
cs=0x2b83;eip=0x0001bf; 	T(ADD(bx, ax));	// 87882 add     bx, ax ;~ 2B83:01BF
cs=0x2b83;eip=0x0001c1; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 87883 mov     bx, [bx] ;~ 2B83:01C1
cs=0x2b83;eip=0x0001c3; 	T(MOV(al, *(raddr(ds,bx+2))));	// 87884 mov     al, [bx+2] ;~ 2B83:01C3
cs=0x2b83;eip=0x0001c6; 	T(CBW);	// 87885 cbw ;~ 2B83:01C6
loc_39fd7:
	// 9812 
cs=0x2b83;eip=0x0001c7; 	T(CMP(ax, 0x73));	// 87888 cmp     ax, 73h ; 's' ;~ 2B83:01C7
cs=0x2b83;eip=0x0001ca; 	J(JNZ(loc_3a022));	// 87889 jnz     short loc_3A022 ;~ 2B83:01CA
cs=0x2b83;eip=0x0001cc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_1e))));	// 87890 mov     bx, [bp+var_1E] ;~ 2B83:01CC
cs=0x2b83;eip=0x0001cf; 	T(MOV(al, *(raddr(ds,bx+3))));	// 87891 mov     al, [bx+3] ;~ 2B83:01CF
cs=0x2b83;eip=0x0001d2; 	T(CBW);	// 87892 cbw ;~ 2B83:01D2
cs=0x2b83;eip=0x0001d3; 	T(MOV(bx, ax));	// 87893 mov     bx, ax ;~ 2B83:01D3
cs=0x2b83;eip=0x0001d5; 	T(TEST(*((g_ascii_props)+bx), 1));	// 87894 test    g_ascii_props[bx], 1 ;~ 2B83:01D5
cs=0x2b83;eip=0x0001da; 	J(JZ(loc_3a000));	// 87895 jz      short loc_3A000 ;~ 2B83:01DA
cs=0x2b83;eip=0x0001dc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 87896 mov     bx, [bp+arg_2] ;~ 2B83:01DC
cs=0x2b83;eip=0x0001df; 	T(MOV(ax, si));	// 87897 mov     ax, si ;~ 2B83:01DF
cs=0x2b83;eip=0x0001e1; 	T(SHL(ax, 1));	// 87898 shl     ax, 1 ;~ 2B83:01E1
cs=0x2b83;eip=0x0001e3; 	T(ADD(bx, ax));	// 87899 add     bx, ax ;~ 2B83:01E3
cs=0x2b83;eip=0x0001e5; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 87900 mov     bx, [bx] ;~ 2B83:01E5
cs=0x2b83;eip=0x0001e7; 	T(MOV(al, *(raddr(ds,bx+3))));	// 87901 mov     al, [bx+3] ;~ 2B83:01E7
cs=0x2b83;eip=0x0001ea; 	T(CBW);	// 87902 cbw ;~ 2B83:01EA
cs=0x2b83;eip=0x0001eb; 	T(ADD(ax, 0x20));	// 87903 add     ax, 20h ; ' ' ;~ 2B83:01EB
cs=0x2b83;eip=0x0001ee; 	J(JMP(loc_3a00f));	// 87904 jmp     short loc_3A00F ;~ 2B83:01EE
loc_3a000:
	// 9813 
cs=0x2b83;eip=0x0001f0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 87908 mov     bx, [bp+arg_2] ;~ 2B83:01F0
cs=0x2b83;eip=0x0001f3; 	T(MOV(ax, si));	// 87909 mov     ax, si ;~ 2B83:01F3
cs=0x2b83;eip=0x0001f5; 	T(SHL(ax, 1));	// 87910 shl     ax, 1 ;~ 2B83:01F5
cs=0x2b83;eip=0x0001f7; 	T(ADD(bx, ax));	// 87911 add     bx, ax ;~ 2B83:01F7
cs=0x2b83;eip=0x0001f9; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 87912 mov     bx, [bx] ;~ 2B83:01F9
cs=0x2b83;eip=0x0001fb; 	T(MOV(al, *(raddr(ds,bx+3))));	// 87913 mov     al, [bx+3] ;~ 2B83:01FB
cs=0x2b83;eip=0x0001fe; 	T(CBW);	// 87914 cbw ;~ 2B83:01FE
loc_3a00f:
	// 9814 
cs=0x2b83;eip=0x0001ff; 	T(CMP(ax, 0x62));	// 87917 cmp     ax, 62h ; 'b' ;~ 2B83:01FF
cs=0x2b83;eip=0x000202; 	J(JNZ(loc_3a022));	// 87918 jnz     short loc_3A022 ;~ 2B83:0202
cs=0x2b83;eip=0x000204; 	X(MOV(*(audiodriverstring), 0x61));	// 87919 mov     audiodriverstring, 61h ; 'a' ;~ 2B83:0204
cs=0x2b83;eip=0x000209; 	X(MOV(*((audiodriverstring)+1), 0x64));	// 87920 mov     audiodriverstring+1, 64h ; 'd' ;~ 2B83:0209
cs=0x2b83;eip=0x00020e; 	J(JMP(loc_39f62));	// 87921 jmp     loc_39F62 ;~ 2B83:020E
loc_3a022:
	// 9815 
cs=0x2b83;eip=0x000212; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 87927 mov     ax, [bp+arg_2] ;~ 2B83:0212
cs=0x2b83;eip=0x000215; 	T(MOV(cx, si));	// 87928 mov     cx, si ;~ 2B83:0215
cs=0x2b83;eip=0x000217; 	T(SHL(cx, 1));	// 87929 shl     cx, 1 ;~ 2B83:0217
cs=0x2b83;eip=0x000219; 	T(ADD(ax, cx));	// 87930 add     ax, cx ;~ 2B83:0219
cs=0x2b83;eip=0x00021b; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 87931 mov     [bp+var_1E], ax ;~ 2B83:021B
cs=0x2b83;eip=0x00021e; 	T(MOV(bx, ax));	// 87932 mov     bx, ax ;~ 2B83:021E
cs=0x2b83;eip=0x000220; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 87933 mov     bx, [bx] ;~ 2B83:0220
cs=0x2b83;eip=0x000222; 	T(MOV(al, *(raddr(ds,bx+2))));	// 87934 mov     al, [bx+2] ;~ 2B83:0222
cs=0x2b83;eip=0x000225; 	X(MOV(*(audiodriverstring), al));	// 87935 mov     audiodriverstring, al ;~ 2B83:0225
cs=0x2b83;eip=0x000228; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_1e))));	// 87936 mov     bx, [bp+var_1E] ;~ 2B83:0228
cs=0x2b83;eip=0x00022b; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 87937 mov     bx, [bx] ;~ 2B83:022B
cs=0x2b83;eip=0x00022d; 	T(MOV(al, *(raddr(ds,bx+3))));	// 87938 mov     al, [bx+3] ;~ 2B83:022D
cs=0x2b83;eip=0x000230; 	X(MOV(*((audiodriverstring)+1), al));	// 87939 mov     audiodriverstring+1, al ;~ 2B83:0230
cs=0x2b83;eip=0x000233; 	J(JMP(loc_39f62));	// 87940 jmp     loc_39F62 ;~ 2B83:0233
loc_3a046:
	// 9816 
cs=0x2b83;eip=0x000236; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 87944 mov     bx, [bp+arg_2] ;~ 2B83:0236
cs=0x2b83;eip=0x000239; 	T(MOV(ax, si));	// 87945 mov     ax, si ;~ 2B83:0239
cs=0x2b83;eip=0x00023b; 	T(SHL(ax, 1));	// 87946 shl     ax, 1 ;~ 2B83:023B
cs=0x2b83;eip=0x00023d; 	T(ADD(bx, ax));	// 87947 add     bx, ax ;~ 2B83:023D
cs=0x2b83;eip=0x00023f; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 87948 mov     bx, [bx] ;~ 2B83:023F
cs=0x2b83;eip=0x000241; 	T(CMP(*(raddr(ds,bx+2)), 0x73));	// 87949 cmp     byte ptr [bx+2], 73h ; 's' ;~ 2B83:0241
cs=0x2b83;eip=0x000245; 	J(JNZ(loc_3a05e));	// 87950 jnz     short loc_3A05E ;~ 2B83:0245
cs=0x2b83;eip=0x000247; 	X(MOV(*(raddr(ss,bp+var_e)), 1));	// 87951 mov     [bp+var_E], 1 ;~ 2B83:0247
cs=0x2b83;eip=0x00024b; 	J(JMP(loc_39f62));	// 87952 jmp     loc_39F62 ;~ 2B83:024B
loc_3a05e:
	// 9817 
cs=0x2b83;eip=0x00024e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 87956 mov     bx, [bp+arg_2] ;~ 2B83:024E
cs=0x2b83;eip=0x000251; 	T(MOV(ax, si));	// 87957 mov     ax, si ;~ 2B83:0251
cs=0x2b83;eip=0x000253; 	T(SHL(ax, 1));	// 87958 shl     ax, 1 ;~ 2B83:0253
cs=0x2b83;eip=0x000255; 	T(ADD(bx, ax));	// 87959 add     bx, ax ;~ 2B83:0255
cs=0x2b83;eip=0x000257; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 87960 mov     bx, [bx] ;~ 2B83:0257
cs=0x2b83;eip=0x000259; 	T(CMP(*(raddr(ds,bx+2)), 0x64));	// 87961 cmp     byte ptr [bx+2], 64h ; 'd' ;~ 2B83:0259
cs=0x2b83;eip=0x00025d; 	J(JZ(loc_3a072));	// 87962 jz      short loc_3A072 ;~ 2B83:025D
cs=0x2b83;eip=0x00025f; 	J(JMP(loc_39f62));	// 87963 jmp     loc_39F62 ;~ 2B83:025F
loc_3a072:
	// 9818 
cs=0x2b83;eip=0x000262; 	X(MOV(*(raddr(ss,bp+var_2)), 1));	// 87967 mov     [bp+var_2], 1 ;~ 2B83:0262
cs=0x2b83;eip=0x000266; 	J(JMP(loc_39f62));	// 87968 jmp     loc_39F62 ;~ 2B83:0266
loc_3a07a:
	// 9819 
cs=0x2b83;eip=0x00026a; 	J(CALLF(video_set_mode_13h,0));	// 87973 call    video_set_mode_13h ;~ 2B83:026A
cs=0x2b83;eip=0x00026f; 	T(CMP(*(raddr(ss,bp+var_12)), 0));	// 87974 cmp     [bp+var_12], 0 ;~ 2B83:026F
cs=0x2b83;eip=0x000273; 	J(JZ(loc_3a08a));	// 87975 jz      short loc_3A08A ;~ 2B83:0273
cs=0x2b83;eip=0x000275; 	J(CALLF(video_set_mode4,0));	// 87976 call    video_set_mode4 ;~ 2B83:0275
loc_3a08a:
	// 9820 
cs=0x2b83;eip=0x00027a; 	J(CALLF(timer_setup_interrupt,0));	// 87979 call    timer_setup_interrupt ;~ 2B83:027A
cs=0x2b83;eip=0x00027f; 	J(CALLF(sprite_copy_2_to_1_clear,0));	// 87980 call    sprite_copy_2_to_1_clear ;~ 2B83:027F
cs=0x2b83;eip=0x000284; 	T(MOV(ax, 0x0C8));	// 87981 mov     ax, 0C8h ; 'È' ;~ 2B83:0284
cs=0x2b83;eip=0x000287; 	X(PUSH(ax));	// 87982 push    ax ;~ 2B83:0287
cs=0x2b83;eip=0x000288; 	T(MOV(ax, 0x140));	// 87983 mov     ax, 140h ;~ 2B83:0288
cs=0x2b83;eip=0x00028b; 	X(PUSH(ax));	// 87984 push    ax ;~ 2B83:028B
cs=0x2b83;eip=0x00028c; 	J(CALLF(mouse_init,0));	// 87985 call    mouse_init ;~ 2B83:028C
cs=0x2b83;eip=0x000291; 	T(ADD(sp, 4));	// 87986 add     sp, 4 ;~ 2B83:0291
cs=0x2b83;eip=0x000294; 	T(SUB(ax, ax));	// 87987 sub     ax, ax ;~ 2B83:0294
cs=0x2b83;eip=0x000296; 	X(PUSH(ax));	// 87988 push    ax              ; int ;~ 2B83:0296
cs=0x2b83;eip=0x000297; 	X(PUSH(ax));	// 87989 push    ax ;~ 2B83:0297
cs=0x2b83;eip=0x000298; 	T(MOV(ax, offset(dseg,audiodriverstring)));	// 87990 mov     ax, offset audiodriverstring ;~ 2B83:0298
cs=0x2b83;eip=0x00029b; 	X(PUSH(ax));	// 87991 push    ax              ; char * ;~ 2B83:029B
cs=0x2b83;eip=0x00029c; 	J(CALLF(audio_load_driver,0));	// 87992 call    audio_load_driver ;~ 2B83:029C
cs=0x2b83;eip=0x0002a1; 	T(ADD(sp, 6));	// 87993 add     sp, 6 ;~ 2B83:02A1
cs=0x2b83;eip=0x0002a4; 	T(OR(ax, ax));	// 87994 or      ax, ax ;~ 2B83:02A4
cs=0x2b83;eip=0x0002a6; 	J(JZ(loc_3a0c9));	// 87995 jz      short loc_3A0C9 ;~ 2B83:02A6
cs=0x2b83;eip=0x0002a8; 	J(CALLF(audio_stop_unk,0));	// 87996 call    audio_stop_unk ;~ 2B83:02A8
cs=0x2b83;eip=0x0002ad; 	T(MOV(ax, 1));	// 87997 mov     ax, 1 ;~ 2B83:02AD
cs=0x2b83;eip=0x0002b0; 	X(PUSH(ax));	// 87998 push    ax ;~ 2B83:02B0
cs=0x2b83;eip=0x0002b1; 	J(CALLF(libsub_quit_to_dos_alt,0));	// 87999 call    far ptr libsub_quit_to_dos_alt ;~ 2B83:02B1
cs=0x2b83;eip=0x0002b6; 	T(ADD(sp, 2));	// 88001 add     sp, 2 ;~ 2B83:02B6
loc_3a0c9:
	// 9821 
cs=0x2b83;eip=0x0002b9; 	T(CMP(*(raddr(ss,bp+var_e)), 0));	// 88004 cmp     [bp+var_E], 0 ;~ 2B83:02B9
cs=0x2b83;eip=0x0002bd; 	J(JZ(loc_3a0d9));	// 88005 jz      short loc_3A0D9 ;~ 2B83:02BD
cs=0x2b83;eip=0x0002bf; 	J(CALLF(audio_toggle_flag2,0));	// 88006 call    audio_toggle_flag2 ;~ 2B83:02BF
cs=0x2b83;eip=0x0002c4; 	J(CALLF(audio_toggle_flag6,0));	// 88007 call    audio_toggle_flag6 ;~ 2B83:02C4
loc_3a0d9:
	// 9822 
cs=0x2b83;eip=0x0002c9; 	T(MOV(ax, m2c::kdo_dea_textres));	// 88010 mov     ax, offset do_dea_textres ;~ 2B83:02C9
cs=0x2b83;eip=0x0002cc; 	T(MOV(dx, seg_offset(seg008)));	// 88011 mov     dx, seg seg008 ;~ 2B83:02CC
cs=0x2b83;eip=0x0002cf; 	X(PUSH(dx));	// 88012 push    dx ;~ 2B83:02CF
cs=0x2b83;eip=0x0002d0; 	X(PUSH(ax));	// 88013 push    ax ;~ 2B83:02D0
cs=0x2b83;eip=0x0002d1; 	J(CALLF(set_criterr_handler,0));	// 88014 call    set_criterr_handler ;~ 2B83:02D1
cs=0x2b83;eip=0x0002d6; 	T(ADD(sp, 4));	// 88015 add     sp, 4 ;~ 2B83:02D6
cs=0x2b83;eip=0x0002d9; 	X(PUSH(cs));	// 88016 push    cs ;~ 2B83:02D9
cs=0x2b83;eip=0x0002da; 	J(CALL(load_palandcursor,0));	// 88017 call    near ptr load_palandcursor ;~ 2B83:02DA
cs=0x2b83;eip=0x0002dd; 	J(CALLF(sprite_copy_2_to_1,0));	// 88018 call    sprite_copy_2_to_1 ;~ 2B83:02DD
cs=0x2b83;eip=0x0002e2; 	T(MOV(ax, 120));	// 88019 mov     ax, 120 ;~ 2B83:02E2
cs=0x2b83;eip=0x0002e5; 	X(PUSH(ax));	// 88020 push    ax ;~ 2B83:02E5
cs=0x2b83;eip=0x0002e6; 	T(SUB(ax, ax));	// 88021 sub     ax, ax ;~ 2B83:02E6
cs=0x2b83;eip=0x0002e8; 	X(PUSH(ax));	// 88022 push    ax ;~ 2B83:02E8
cs=0x2b83;eip=0x0002e9; 	T(MOV(ax, 320));	// 88023 mov     ax, 320 ;~ 2B83:02E9
cs=0x2b83;eip=0x0002ec; 	X(PUSH(ax));	// 88024 push    ax ;~ 2B83:02EC
cs=0x2b83;eip=0x0002ed; 	T(SUB(ax, ax));	// 88025 sub     ax, ax ;~ 2B83:02ED
cs=0x2b83;eip=0x0002ef; 	X(PUSH(ax));	// 88026 push    ax ;~ 2B83:02EF
cs=0x2b83;eip=0x0002f0; 	J(CALLF(sprite_set_1_size,0));	// 88027 call    sprite_set_1_size ;~ 2B83:02F0
cs=0x2b83;eip=0x0002f5; 	T(ADD(sp, 8));	// 88028 add     sp, 8 ;~ 2B83:02F5
cs=0x2b83;eip=0x0002f8; 	J(CALLF(timer_get_delta_alt,0));	// 88029 call    timer_get_delta_alt ;~ 2B83:02F8
cs=0x2b83;eip=0x0002fd; 	T(SUB(si, si));	// 88030 sub     si, si ;~ 2B83:02FD
loc_3a10f:
	// 9823 
cs=0x2b83;eip=0x0002ff; 	T(SUB(ax, ax));	// 88033 sub     ax, ax ;~ 2B83:02FF
cs=0x2b83;eip=0x000301; 	X(PUSH(ax));	// 88034 push    ax ;~ 2B83:0301
cs=0x2b83;eip=0x000302; 	J(CALLF(sprite_clear_1_color,0));	// 88035 call    sprite_clear_1_color ;~ 2B83:0302
cs=0x2b83;eip=0x000307; 	T(ADD(sp, 2));	// 88036 add     sp, 2 ;~ 2B83:0307
cs=0x2b83;eip=0x00030a; 	T(INC(si));	// 88037 inc     si ;~ 2B83:030A
cs=0x2b83;eip=0x00030b; 	T(CMP(si, 0x0F));	// 88038 cmp     si, 0Fh ;~ 2B83:030B
cs=0x2b83;eip=0x00030e; 	J(JL(loc_3a10f));	// 88039 jl      short loc_3A10F ;~ 2B83:030E
cs=0x2b83;eip=0x000310; 	J(CALLF(timer_get_delta_alt,0));	// 88040 call    timer_get_delta_alt ;~ 2B83:0310
cs=0x2b83;eip=0x000315; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 88041 mov     [bp+var_C], ax ;~ 2B83:0315
cs=0x2b83;eip=0x000318; 	T(MOV(ax, 60));	// 88042 mov     ax, 60 ;~ 2B83:0318
cs=0x2b83;eip=0x00031b; 	X(PUSH(ax));	// 88043 push    ax ;~ 2B83:031B
cs=0x2b83;eip=0x00031c; 	T(SUB(ax, ax));	// 88044 sub     ax, ax ;~ 2B83:031C
cs=0x2b83;eip=0x00031e; 	X(PUSH(ax));	// 88045 push    ax ;~ 2B83:031E
cs=0x2b83;eip=0x00031f; 	T(MOV(ax, 320));	// 88046 mov     ax, 320 ;~ 2B83:031F
cs=0x2b83;eip=0x000322; 	X(PUSH(ax));	// 88047 push    ax ;~ 2B83:0322
cs=0x2b83;eip=0x000323; 	T(SUB(ax, ax));	// 88048 sub     ax, ax ;~ 2B83:0323
cs=0x2b83;eip=0x000325; 	X(PUSH(ax));	// 88049 push    ax ;~ 2B83:0325
cs=0x2b83;eip=0x000326; 	J(CALLF(sprite_set_1_size,0));	// 88050 call    sprite_set_1_size ;~ 2B83:0326
cs=0x2b83;eip=0x00032b; 	T(ADD(sp, 8));	// 88051 add     sp, 8 ;~ 2B83:032B
cs=0x2b83;eip=0x00032e; 	T(SUB(si, si));	// 88052 sub     si, si ;~ 2B83:032E
loc_3a140:
	// 9824 
cs=0x2b83;eip=0x000330; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0));	// 88055 mov     [bp+var_A], 0 ;~ 2B83:0330
cs=0x2b83;eip=0x000335; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 88056 mov     [bp+var_8], 0 ;~ 2B83:0335
cs=0x2b83;eip=0x00033a; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0));	// 88057 mov     [bp+var_6], 0 ;~ 2B83:033A
cs=0x2b83;eip=0x00033f; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 88058 mov     [bp+var_4], 0 ;~ 2B83:033F
cs=0x2b83;eip=0x000344; 	T(SUB(di, di));	// 88059 sub     di, di ;~ 2B83:0344
loc_3a156:
	// 9825 
cs=0x2b83;eip=0x000346; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), di));	// 88062 mov     [bp+var_1A], di ;~ 2B83:0346
cs=0x2b83;eip=0x000349; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), di));	// 88063 mov     [bp+var_18], di ;~ 2B83:0349
cs=0x2b83;eip=0x00034c; 	T(ax = bp+var_a);	// 88064 lea     ax, [bp+var_A] ;~ 2B83:034C
cs=0x2b83;eip=0x00034f; 	X(PUSH(ax));	// 88065 push    ax ;~ 2B83:034F
cs=0x2b83;eip=0x000350; 	T(ax = bp+var_1a);	// 88066 lea     ax, [bp+var_1A] ;~ 2B83:0350
cs=0x2b83;eip=0x000353; 	X(PUSH(ax));	// 88067 push    ax ;~ 2B83:0353
cs=0x2b83;eip=0x000354; 	J(CALLF(rect_adjust_from_point,0));	// 88068 call    rect_adjust_from_point ;~ 2B83:0354
cs=0x2b83;eip=0x000359; 	T(ADD(sp, 4));	// 88069 add     sp, 4 ;~ 2B83:0359
cs=0x2b83;eip=0x00035c; 	T(INC(di));	// 88070 inc     di ;~ 2B83:035C
cs=0x2b83;eip=0x00035d; 	T(CMP(di, 0x190));	// 88071 cmp     di, 190h ;~ 2B83:035D
cs=0x2b83;eip=0x000361; 	J(JL(loc_3a156));	// 88072 jl      short loc_3A156 ;~ 2B83:0361
cs=0x2b83;eip=0x000363; 	T(SUB(ax, ax));	// 88073 sub     ax, ax ;~ 2B83:0363
cs=0x2b83;eip=0x000365; 	X(PUSH(ax));	// 88074 push    ax ;~ 2B83:0365
cs=0x2b83;eip=0x000366; 	J(CALLF(sprite_clear_1_color,0));	// 88075 call    sprite_clear_1_color ;~ 2B83:0366
cs=0x2b83;eip=0x00036b; 	T(ADD(sp, 2));	// 88076 add     sp, 2 ;~ 2B83:036B
cs=0x2b83;eip=0x00036e; 	T(INC(si));	// 88077 inc     si ;~ 2B83:036E
cs=0x2b83;eip=0x00036f; 	T(CMP(si, 0x0F));	// 88078 cmp     si, 0Fh ;~ 2B83:036F
cs=0x2b83;eip=0x000372; 	J(JL(loc_3a140));	// 88079 jl      short loc_3A140 ;~ 2B83:0372
cs=0x2b83;eip=0x000374; 	J(CALLF(timer_get_delta_alt,0));	// 88080 call    timer_get_delta_alt ;~ 2B83:0374
cs=0x2b83;eip=0x000379; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 88081 mov     [bp+var_10], ax ;~ 2B83:0379
cs=0x2b83;eip=0x00037c; 	T(SUB(si, si));	// 88082 sub     si, si ;~ 2B83:037C
cs=0x2b83;eip=0x00037e; 	J(JMP(loc_3a1ab));	// 88083 jmp     short loc_3A1AB ;~ 2B83:037E
loc_3a190:
	// 9826 
cs=0x2b83;eip=0x000380; 	T(INC(di));	// 88087 inc     di ;~ 2B83:0380
loc_3a191:
	// 9827 
cs=0x2b83;eip=0x000381; 	T(CMP(di, 0x0FF));	// 88090 cmp     di, 0FFh ;~ 2B83:0381
cs=0x2b83;eip=0x000385; 	J(JGE(loc_3a1aa));	// 88091 jge     short loc_3A1AA ;~ 2B83:0385
cs=0x2b83;eip=0x000387; 	T(ax = bp+var_a);	// 88092 lea     ax, [bp+var_A] ;~ 2B83:0387
cs=0x2b83;eip=0x00038a; 	X(PUSH(ax));	// 88093 push    ax ;~ 2B83:038A
cs=0x2b83;eip=0x00038b; 	T(ax = bp+var_1a);	// 88094 lea     ax, [bp+var_1A] ;~ 2B83:038B
cs=0x2b83;eip=0x00038e; 	X(PUSH(ax));	// 88095 push    ax ;~ 2B83:038E
cs=0x2b83;eip=0x00038f; 	J(CALLF(rect_adjust_from_point,0));	// 88096 call    rect_adjust_from_point ;~ 2B83:038F
cs=0x2b83;eip=0x000394; 	T(ADD(sp, 4));	// 88097 add     sp, 4 ;~ 2B83:0394
cs=0x2b83;eip=0x000397; 	J(JMP(loc_3a190));	// 88098 jmp     short loc_3A190 ;~ 2B83:0397
loc_3a1aa:
	// 9828 
cs=0x2b83;eip=0x00039a; 	T(INC(si));	// 88103 inc     si ;~ 2B83:039A
loc_3a1ab:
	// 9829 
cs=0x2b83;eip=0x00039b; 	T(CMP(si, 0x92));	// 88106 cmp     si, 92h ; '’' ;~ 2B83:039B
cs=0x2b83;eip=0x00039f; 	J(JGE(loc_3a1b6));	// 88107 jge     short loc_3A1B6 ;~ 2B83:039F
cs=0x2b83;eip=0x0003a1; 	T(SUB(di, di));	// 88108 sub     di, di ;~ 2B83:03A1
cs=0x2b83;eip=0x0003a3; 	J(JMP(loc_3a191));	// 88109 jmp     short loc_3A191 ;~ 2B83:03A3
loc_3a1b6:
	// 9830 
cs=0x2b83;eip=0x0003a6; 	J(CALLF(timer_get_delta_alt,0));	// 88114 call    timer_get_delta_alt ;~ 2B83:03A6
cs=0x2b83;eip=0x0003ab; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), ax));	// 88115 mov     [bp+var_1C], ax ;~ 2B83:03AB
cs=0x2b83;eip=0x0003ae; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 88116 mov     ax, [bp+var_C] ;~ 2B83:03AE
cs=0x2b83;eip=0x0003b1; 	T(CMP(*(dw*)(raddr(ss,bp+var_10)), ax));	// 88117 cmp     [bp+var_10], ax ;~ 2B83:03B1
cs=0x2b83;eip=0x0003b4; 	J(JLE(loc_3a1ce));	// 88118 jle     short loc_3A1CE ;~ 2B83:03B4
cs=0x2b83;eip=0x0003b6; 	X(MOV(timertestflag, 0));	// 88119 mov     timertestflag, 0 ;~ 2B83:03B6
cs=0x2b83;eip=0x0003bc; 	J(JMP(loc_3a1d4));	// 88120 jmp     short loc_3A1D4 ;~ 2B83:03BC
loc_3a1ce:
	// 9831 
cs=0x2b83;eip=0x0003be; 	X(MOV(timertestflag, 1));	// 88124 mov     timertestflag, 1 ;~ 2B83:03BE
loc_3a1d4:
	// 9832 
cs=0x2b83;eip=0x0003c4; 	T(CMP(*(dw*)(raddr(ss,bp+var_1c)), 0x4B));	// 88127 cmp     [bp+var_1C], 4Bh ; 'K' ;~ 2B83:03C4
cs=0x2b83;eip=0x0003c8; 	J(JGE(loc_3a1e2));	// 88128 jge     short loc_3A1E2 ;~ 2B83:03C8
cs=0x2b83;eip=0x0003ca; 	X(MOV(framespersec2, 0x14));	// 88129 mov     framespersec2, 14h ;~ 2B83:03CA
cs=0x2b83;eip=0x0003d0; 	J(JMP(loc_3a1e8));	// 88130 jmp     short loc_3A1E8 ;~ 2B83:03D0
loc_3a1e2:
	// 9833 
cs=0x2b83;eip=0x0003d2; 	X(MOV(framespersec2, 0x0A));	// 88134 mov     framespersec2, 0Ah ;~ 2B83:03D2
loc_3a1e8:
	// 9834 
cs=0x2b83;eip=0x0003d8; 	T(CMP(*(dw*)(raddr(ss,bp+var_1c)), 0x23));	// 88137 cmp     [bp+var_1C], 23h ; '#' ;~ 2B83:03D8
cs=0x2b83;eip=0x0003dc; 	J(JGE(loc_3a1f6));	// 88138 jge     short loc_3A1F6 ;~ 2B83:03DC
cs=0x2b83;eip=0x0003de; 	X(MOV(timertestflag2, 0));	// 88139 mov     timertestflag2, 0 ;~ 2B83:03DE
cs=0x2b83;eip=0x0003e3; 	J(JMP(loc_3a22b));	// 88140 jmp     short loc_3A22B ;~ 2B83:03E3
loc_3a1f6:
	// 9835 
cs=0x2b83;eip=0x0003e6; 	T(CMP(*(dw*)(raddr(ss,bp+var_1c)), 0x37));	// 88145 cmp     [bp+var_1C], 37h ; '7' ;~ 2B83:03E6
cs=0x2b83;eip=0x0003ea; 	J(JGE(loc_3a204));	// 88146 jge     short loc_3A204 ;~ 2B83:03EA
cs=0x2b83;eip=0x0003ec; 	X(MOV(timertestflag2, 1));	// 88147 mov     timertestflag2, 1 ;~ 2B83:03EC
cs=0x2b83;eip=0x0003f1; 	J(JMP(loc_3a22b));	// 88148 jmp     short loc_3A22B ;~ 2B83:03F1
loc_3a204:
	// 9836 
cs=0x2b83;eip=0x0003f4; 	T(CMP(*(dw*)(raddr(ss,bp+var_1c)), 0x4B));	// 88153 cmp     [bp+var_1C], 4Bh ; 'K' ;~ 2B83:03F4
cs=0x2b83;eip=0x0003f8; 	J(JGE(loc_3a212));	// 88154 jge     short loc_3A212 ;~ 2B83:03F8
cs=0x2b83;eip=0x0003fa; 	X(MOV(timertestflag2, 2));	// 88155 mov     timertestflag2, 2 ;~ 2B83:03FA
cs=0x2b83;eip=0x0003ff; 	J(JMP(loc_3a22b));	// 88156 jmp     short loc_3A22B ;~ 2B83:03FF
loc_3a212:
	// 9837 
cs=0x2b83;eip=0x000402; 	T(CMP(*(dw*)(raddr(ss,bp+var_1c)), 0x64));	// 88161 cmp     [bp+var_1C], 64h ; 'd' ;~ 2B83:0402
cs=0x2b83;eip=0x000406; 	J(JL(loc_3a21f));	// 88162 jl      short loc_3A21F ;~ 2B83:0406
cs=0x2b83;eip=0x000408; 	T(CMP(timertestflag, 0));	// 88163 cmp     timertestflag, 0 ;~ 2B83:0408
cs=0x2b83;eip=0x00040d; 	J(JNZ(loc_3a226));	// 88164 jnz     short loc_3A226 ;~ 2B83:040D
loc_3a21f:
	// 9838 
cs=0x2b83;eip=0x00040f; 	X(MOV(timertestflag2, 3));	// 88167 mov     timertestflag2, 3 ;~ 2B83:040F
cs=0x2b83;eip=0x000414; 	J(JMP(loc_3a22b));	// 88168 jmp     short loc_3A22B ;~ 2B83:0414
loc_3a226:
	// 9839 
cs=0x2b83;eip=0x000416; 	X(MOV(timertestflag2, 4));	// 88172 mov     timertestflag2, 4 ;~ 2B83:0416
loc_3a22b:
	// 9840 
cs=0x2b83;eip=0x00041b; 	T(MOV(ax, framespersec2));	// 88176 mov     ax, framespersec2 ;~ 2B83:041B
cs=0x2b83;eip=0x00041e; 	X(MOV(framespersec, ax));	// 88177 mov     framespersec, ax ;~ 2B83:041E
cs=0x2b83;eip=0x000421; 	T(MOV(ax, timertestflag));	// 88178 mov     ax, timertestflag ;~ 2B83:0421
cs=0x2b83;eip=0x000424; 	X(MOV(timertestflag_copy, ax));	// 88179 mov     timertestflag_copy, ax ;~ 2B83:0424
cs=0x2b83;eip=0x000427; 	X(PUSH(cs));	// 88180 push    cs ;~ 2B83:0427
cs=0x2b83;eip=0x000428; 	J(CALL(random_wait,0));	// 88181 call    near ptr random_wait ;~ 2B83:0428
cs=0x2b83;eip=0x00042b; 	T(SUB(ax, ax));	// 88182 sub     ax, ax ;~ 2B83:042B
cs=0x2b83;eip=0x00042d; 	X(PUSH(ax));	// 88183 push    ax ;~ 2B83:042D
cs=0x2b83;eip=0x00042e; 	X(PUSH(material_patlist2_ptr));	// 88184 push    material_patlist2_ptr ;~ 2B83:042E
cs=0x2b83;eip=0x000432; 	X(PUSH(material_patlist_ptr));	// 88185 push    material_patlist_ptr ;~ 2B83:0432
cs=0x2b83;eip=0x000436; 	X(PUSH(material_clrlist2_ptr));	// 88186 push    material_clrlist2_ptr ;~ 2B83:0436
cs=0x2b83;eip=0x00043a; 	X(PUSH(material_clrlist_ptr));	// 88187 push    material_clrlist_ptr ;~ 2B83:043A
cs=0x2b83;eip=0x00043e; 	J(CALLF(copy_material_list_pointers,0));	// 88188 call    copy_material_list_pointers ;~ 2B83:043E
cs=0x2b83;eip=0x000443; 	T(ADD(sp, 0x0A));	// 88189 add     sp, 0Ah ;~ 2B83:0443
cs=0x2b83;eip=0x000446; 	X(POP(si));	// 88190 pop     si ;~ 2B83:0446
cs=0x2b83;eip=0x000447; 	X(POP(di));	// 88191 pop     di ;~ 2B83:0447
cs=0x2b83;eip=0x000448; 	T(MOV(sp, bp));	// 88192 mov     sp, bp ;~ 2B83:0448
cs=0x2b83;eip=0x00044a; 	X(POP(bp));	// 88193 pop     bp ;~ 2B83:044A
cs=0x2b83;eip=0x00044b; 	J(RETF(0));	// 88194 retf ;~ 2B83:044B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
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
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool random_wait(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    random_wait:
    _begin:
cs=0x2b83;eip=0x00044c; 	X(PUSH(bp));	// 88204 push    bp ;~ 2B83:044C
cs=0x2b83;eip=0x00044d; 	T(MOV(bp, sp));	// 88205 mov     bp, sp ;~ 2B83:044D
cs=0x2b83;eip=0x00044f; 	T(SUB(sp, 4));	// 88206 sub     sp, 4 ;~ 2B83:044F
cs=0x2b83;eip=0x000452; 	X(PUSH(di));	// 88207 push    di ;~ 2B83:0452
cs=0x2b83;eip=0x000453; 	X(PUSH(si));	// 88208 push    si ;~ 2B83:0453
cs=0x2b83;eip=0x000454; 	J(CALLF(video_get_status,0));	// 88209 call    video_get_status ;~ 2B83:0454
cs=0x2b83;eip=0x000459; 	T(MOV(si, ax));	// 88210 mov     si, ax ;~ 2B83:0459
cs=0x2b83;eip=0x00045b; 	T(SUB(di, di));	// 88211 sub     di, di ;~ 2B83:045B
cs=0x2b83;eip=0x00045d; 	J(JMP(loc_3a277));	// 88212 jmp     short loc_3A277 ;~ 2B83:045D
loc_3a270:
	// 9841 
cs=0x2b83;eip=0x000460; 	T(CMP(di, 12000));	// 88217 cmp     di, 12000 ;~ 2B83:0460
cs=0x2b83;eip=0x000464; 	J(JGE(loc_3a280));	// 88218 jge     short loc_3A280 ;~ 2B83:0464
cs=0x2b83;eip=0x000466; 	T(INC(di));	// 88219 inc     di ;~ 2B83:0466
loc_3a277:
	// 9842 
cs=0x2b83;eip=0x000467; 	J(CALLF(video_get_status,0));	// 88222 call    video_get_status ;~ 2B83:0467
cs=0x2b83;eip=0x00046c; 	T(CMP(ax, si));	// 88223 cmp     ax, si ;~ 2B83:046C
cs=0x2b83;eip=0x00046e; 	J(JZ(loc_3a270));	// 88224 jz      short loc_3A270 ;~ 2B83:046E
loc_3a280:
	// 9843 
cs=0x2b83;eip=0x000470; 	T(CMP(di, 1024));	// 88227 cmp     di, 1024 ;~ 2B83:0470
cs=0x2b83;eip=0x000474; 	J(JNZ(loc_3a29a));	// 88228 jnz     short loc_3A29A ;~ 2B83:0474
cs=0x2b83;eip=0x000476; 	T(MOV(bx, 0x46C));	// 88229 mov     bx, 46Ch ;~ 2B83:0476
cs=0x2b83;eip=0x000479; 	T(MOV(al, *(raddr(ds,bx))));	// 88230 mov     al, [bx] ;~ 2B83:0479
cs=0x2b83;eip=0x00047b; 	T(CBW);	// 88231 cbw ;~ 2B83:047B
cs=0x2b83;eip=0x00047c; 	T(MOV(di, ax));	// 88232 mov     di, ax ;~ 2B83:047C
cs=0x2b83;eip=0x00047e; 	J(JMP(loc_3a29a));	// 88233 jmp     short loc_3A29A ;~ 2B83:047E
loc_3a290:
	// 9844 
cs=0x2b83;eip=0x000480; 	J(CALLF(_rand,0));	// 88237 call    _rand ;~ 2B83:0480
cs=0x2b83;eip=0x000485; 	J(CALLF(get_kevinrandom,0));	// 88238 call    get_kevinrandom ;~ 2B83:0485
loc_3a29a:
	// 9845 
cs=0x2b83;eip=0x00048a; 	T(MOV(ax, di));	// 88242 mov     ax, di ;~ 2B83:048A
cs=0x2b83;eip=0x00048c; 	T(DEC(di));	// 88243 dec     di ;~ 2B83:048C
cs=0x2b83;eip=0x00048d; 	T(OR(ax, ax));	// 88244 or      ax, ax ;~ 2B83:048D
cs=0x2b83;eip=0x00048f; 	J(JNZ(loc_3a290));	// 88245 jnz     short loc_3A290 ;~ 2B83:048F
cs=0x2b83;eip=0x000491; 	T(AND(di, 0x0FF));	// 88246 and     di, 0FFh ;~ 2B83:0491
cs=0x2b83;eip=0x000495; 	J(JMP(loc_3a2b2));	// 88247 jmp     short loc_3A2B2 ;~ 2B83:0495
loc_3a2a8:
	// 9846 
cs=0x2b83;eip=0x000498; 	J(CALLF(get_kevinrandom,0));	// 88252 call    get_kevinrandom ;~ 2B83:0498
cs=0x2b83;eip=0x00049d; 	J(CALLF(_rand,0));	// 88253 call    _rand ;~ 2B83:049D
loc_3a2b2:
	// 9847 
cs=0x2b83;eip=0x0004a2; 	T(MOV(ax, di));	// 88256 mov     ax, di ;~ 2B83:04A2
cs=0x2b83;eip=0x0004a4; 	T(DEC(di));	// 88257 dec     di ;~ 2B83:04A4
cs=0x2b83;eip=0x0004a5; 	T(OR(ax, ax));	// 88258 or      ax, ax ;~ 2B83:04A5
cs=0x2b83;eip=0x0004a7; 	J(JNZ(loc_3a2a8));	// 88259 jnz     short loc_3A2A8 ;~ 2B83:04A7
cs=0x2b83;eip=0x0004a9; 	X(POP(si));	// 88260 pop     si ;~ 2B83:04A9
cs=0x2b83;eip=0x0004aa; 	X(POP(di));	// 88261 pop     di ;~ 2B83:04AA
cs=0x2b83;eip=0x0004ab; 	T(MOV(sp, bp));	// 88262 mov     sp, bp ;~ 2B83:04AB
cs=0x2b83;eip=0x0004ad; 	X(POP(bp));	// 88263 pop     bp ;~ 2B83:04AD
cs=0x2b83;eip=0x0004ae; 	J(RETF(0));	// 88264 retf ;~ 2B83:04AE

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_3a270: 	goto loc_3a270;
        case m2c::kloc_3a277: 	goto loc_3a277;
        case m2c::kloc_3a280: 	goto loc_3a280;
        case m2c::kloc_3a290: 	goto loc_3a290;
        case m2c::kloc_3a29a: 	goto loc_3a29a;
        case m2c::kloc_3a2a8: 	goto loc_3a2a8;
        case m2c::kloc_3a2b2: 	goto loc_3a2b2;
        case m2c::krandom_wait: 	goto random_wait;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool load_palandcursor(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    load_palandcursor:
    _begin:
#undef var_312
#define var_312 -0x312
	// 88276 var_312         = word ptr -312h ;~ 2B83:04B0
#undef var_310
#define var_310 -0x310
	// 88277 var_310         = dword ptr -310h ;~ 2B83:04B0
#undef var_30c
#define var_30c -0x30C
	// 88278 var_30C         = word ptr -30Ch ;~ 2B83:04B0
#undef var_30a
#define var_30a -0x30A
	// 88279 var_30A         = word ptr -30Ah ;~ 2B83:04B0
#undef var_308
#define var_308 -0x308
	// 88280 var_308         = word ptr -308h ;~ 2B83:04B0
#undef var_306
#define var_306 -0x306
	// 88281 var_306         = word ptr -306h ;~ 2B83:04B0
#undef var_304
#define var_304 -0x304
	// 88282 var_304         = dword ptr -304h ;~ 2B83:04B0
#undef var_300
#define var_300 -0x300
	// 88283 var_300         = byte ptr -300h ;~ 2B83:04B0
cs=0x2b83;eip=0x0004b0; 	X(PUSH(bp));	// 88285 push    bp ;~ 2B83:04B0
cs=0x2b83;eip=0x0004b1; 	T(MOV(bp, sp));	// 88286 mov     bp, sp ;~ 2B83:04B1
cs=0x2b83;eip=0x0004b3; 	T(SUB(sp, 0x312));	// 88287 sub     sp, 312h ;~ 2B83:04B3
cs=0x2b83;eip=0x0004b7; 	X(PUSH(si));	// 88288 push    si ;~ 2B83:04B7
cs=0x2b83;eip=0x0004b8; 	T(MOV(ax, offset(dseg,asdmain)));	// 88289 mov     ax, offset aSdmain ; "sdmain" ;~ 2B83:04B8
cs=0x2b83;eip=0x0004bb; 	X(PUSH(ax));	// 88290 push    ax ;~ 2B83:04BB
cs=0x2b83;eip=0x0004bc; 	J(CALLF(file_load_shape2d_fatal_thunk,0));	// 88291 call    file_load_shape2d_fatal_thunk ;~ 2B83:04BC
cs=0x2b83;eip=0x0004c1; 	T(ADD(sp, 2));	// 88292 add     sp, 2 ;~ 2B83:04C1
cs=0x2b83;eip=0x0004c4; 	X(MOV(*(dw*)(raddr(ss,bp+var_30c)), ax));	// 88293 mov     [bp+var_30C], ax ;~ 2B83:04C4
cs=0x2b83;eip=0x0004c8; 	X(MOV(*(dw*)(raddr(ss,bp+var_30a)), dx));	// 88294 mov     [bp+var_30A], dx ;~ 2B83:04C8
cs=0x2b83;eip=0x0004cc; 	T(MOV(ax, offset(dseg,apal)));	// 88295 mov     ax, offset aPal ; "!pal" ;~ 2B83:04CC
cs=0x2b83;eip=0x0004cf; 	X(PUSH(ax));	// 88296 push    ax ;~ 2B83:04CF
cs=0x2b83;eip=0x0004d0; 	X(PUSH(dx));	// 88297 push    dx ;~ 2B83:04D0
cs=0x2b83;eip=0x0004d1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_30c))));	// 88298 push    [bp+var_30C] ;~ 2B83:04D1
cs=0x2b83;eip=0x0004d5; 	J(CALLF(locate_shape_fatal,0));	// 88299 call    locate_shape_fatal ;~ 2B83:04D5
cs=0x2b83;eip=0x0004da; 	T(ADD(sp, 6));	// 88300 add     sp, 6 ;~ 2B83:04DA
cs=0x2b83;eip=0x0004dd; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_304))), ax));	// 88301 mov     word ptr [bp+var_304], ax ;~ 2B83:04DD
cs=0x2b83;eip=0x0004e1; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_304+2))), dx));	// 88302 mov     word ptr [bp+var_304+2], dx ;~ 2B83:04E1
cs=0x2b83;eip=0x0004e5; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_304))), 0x10));	// 88303 add     word ptr [bp+var_304], 10h ;~ 2B83:04E5
cs=0x2b83;eip=0x0004ea; 	X(MOV(*(dw*)(raddr(ss,bp+var_308)), 0));	// 88304 mov     [bp+var_308], 0 ;~ 2B83:04EA
loc_3a300:
	// 9848 
cs=0x2b83;eip=0x0004f0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_308))));	// 88307 mov     bx, [bp+var_308] ;~ 2B83:04F0
cs=0x2b83;eip=0x0004f4; 	T(LES(si, *(dd*)(raddr(ss,bp+var_304))));	// 88308 les     si, [bp+var_304] ;~ 2B83:04F4
cs=0x2b83;eip=0x0004f8; 	T(MOV(al, *(raddr(es,bx+si))));	// 88309 mov     al, es:[bx+si] ;~ 2B83:04F8
cs=0x2b83;eip=0x0004fb; 	T(MOV(si, bx));	// 88310 mov     si, bx ;~ 2B83:04FB
cs=0x2b83;eip=0x0004fd; 	X(MOV(*(raddr(ss,bp+si+var_300)), al));	// 88311 mov     [bp+si+var_300], al ;~ 2B83:04FD
cs=0x2b83;eip=0x000501; 	X(INC(*(dw*)(raddr(ss,bp+var_308))));	// 88312 inc     [bp+var_308] ;~ 2B83:0501
cs=0x2b83;eip=0x000505; 	T(CMP(*(dw*)(raddr(ss,bp+var_308)), 0x300));	// 88313 cmp     [bp+var_308], 300h ;~ 2B83:0505
cs=0x2b83;eip=0x00050b; 	J(JL(loc_3a300));	// 88314 jl      short loc_3A300 ;~ 2B83:050B
cs=0x2b83;eip=0x00050d; 	T(ax = bp+var_300);	// 88315 lea     ax, [bp+var_300] ;~ 2B83:050D
cs=0x2b83;eip=0x000511; 	X(PUSH(ax));	// 88316 push    ax ;~ 2B83:0511
cs=0x2b83;eip=0x000512; 	T(MOV(ax, 0x100));	// 88317 mov     ax, 100h ;~ 2B83:0512
cs=0x2b83;eip=0x000515; 	X(PUSH(ax));	// 88318 push    ax ;~ 2B83:0515
cs=0x2b83;eip=0x000516; 	T(SUB(ax, ax));	// 88319 sub     ax, ax ;~ 2B83:0516
cs=0x2b83;eip=0x000518; 	X(PUSH(ax));	// 88320 push    ax ;~ 2B83:0518
cs=0x2b83;eip=0x000519; 	J(CALLF(video_set_palette,0));	// 88321 call    video_set_palette ;~ 2B83:0519
cs=0x2b83;eip=0x00051e; 	T(ADD(sp, 6));	// 88322 add     sp, 6 ;~ 2B83:051E
cs=0x2b83;eip=0x000521; 	T(MOV(ax, offset(dseg,asmou)));	// 88323 mov     ax, offset aSmou ; "smou" ;~ 2B83:0521
cs=0x2b83;eip=0x000524; 	X(PUSH(ax));	// 88324 push    ax ;~ 2B83:0524
cs=0x2b83;eip=0x000525; 	X(PUSH(*(dw*)(raddr(ss,bp+var_30a))));	// 88325 push    [bp+var_30A] ;~ 2B83:0525
cs=0x2b83;eip=0x000529; 	X(PUSH(*(dw*)(raddr(ss,bp+var_30c))));	// 88326 push    [bp+var_30C] ;~ 2B83:0529
cs=0x2b83;eip=0x00052d; 	J(CALLF(locate_shape_fatal,0));	// 88327 call    locate_shape_fatal ;~ 2B83:052D
cs=0x2b83;eip=0x000532; 	T(ADD(sp, 6));	// 88328 add     sp, 6 ;~ 2B83:0532
cs=0x2b83;eip=0x000535; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_310))), ax));	// 88329 mov     word ptr [bp+var_310], ax ;~ 2B83:0535
cs=0x2b83;eip=0x000539; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_310+2))), dx));	// 88330 mov     word ptr [bp+var_310+2], dx ;~ 2B83:0539
cs=0x2b83;eip=0x00053d; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_310))));	// 88331 les     bx, [bp+var_310] ;~ 2B83:053D
cs=0x2b83;eip=0x000541; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 88332 mov     ax, es:[bx] ;~ 2B83:0541
cs=0x2b83;eip=0x000544; 	X(IMUL1_2(video_flag2_is1));	// 88333 imul    video_flag2_is1 ;~ 2B83:0544
cs=0x2b83;eip=0x000548; 	X(MOV(*(dw*)(raddr(ss,bp+var_312)), ax));	// 88334 mov     [bp+var_312], ax ;~ 2B83:0548
cs=0x2b83;eip=0x00054c; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 88335 mov     ax, es:[bx+2] ;~ 2B83:054C
cs=0x2b83;eip=0x000550; 	X(MOV(*(dw*)(raddr(ss,bp+var_306)), ax));	// 88336 mov     [bp+var_306], ax ;~ 2B83:0550
cs=0x2b83;eip=0x000554; 	X(PUSH(*(dw*)(raddr(ss,bp+var_30a))));	// 88337 push    [bp+var_30A] ;~ 2B83:0554
cs=0x2b83;eip=0x000558; 	X(PUSH(*(dw*)(raddr(ss,bp+var_30c))));	// 88338 push    [bp+var_30C] ;~ 2B83:0558
cs=0x2b83;eip=0x00055c; 	J(CALLF(mmgr_free,0));	// 88339 call    mmgr_free ;~ 2B83:055C
cs=0x2b83;eip=0x000561; 	T(ADD(sp, 4));	// 88340 add     sp, 4 ;~ 2B83:0561
cs=0x2b83;eip=0x000564; 	T(MOV(ax, 0x0F));	// 88341 mov     ax, 0Fh ;~ 2B83:0564
cs=0x2b83;eip=0x000567; 	X(PUSH(ax));	// 88342 push    ax ;~ 2B83:0567
cs=0x2b83;eip=0x000568; 	X(PUSH(*(dw*)(raddr(ss,bp+var_306))));	// 88343 push    [bp+var_306] ;~ 2B83:0568
cs=0x2b83;eip=0x00056c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_312))));	// 88344 push    [bp+var_312] ;~ 2B83:056C
cs=0x2b83;eip=0x000570; 	J(CALLF(sprite_make_wnd,0));	// 88345 call    sprite_make_wnd ;~ 2B83:0570
cs=0x2b83;eip=0x000575; 	T(ADD(sp, 6));	// 88346 add     sp, 6 ;~ 2B83:0575
cs=0x2b83;eip=0x000578; 	X(MOV(*(dw*)(((db*)&smouspriteptr)), ax));	// 88347 mov     word ptr smouspriteptr, ax ;~ 2B83:0578
cs=0x2b83;eip=0x00057b; 	X(MOV(*(dw*)(((db*)&smouspriteptr)+2), dx));	// 88348 mov     word ptr smouspriteptr+2, dx ;~ 2B83:057B
cs=0x2b83;eip=0x00057f; 	T(MOV(ax, 0x0F));	// 88349 mov     ax, 0Fh ;~ 2B83:057F
cs=0x2b83;eip=0x000582; 	X(PUSH(ax));	// 88350 push    ax ;~ 2B83:0582
cs=0x2b83;eip=0x000583; 	X(PUSH(*(dw*)(raddr(ss,bp+var_306))));	// 88351 push    [bp+var_306] ;~ 2B83:0583
cs=0x2b83;eip=0x000587; 	X(PUSH(*(dw*)(raddr(ss,bp+var_312))));	// 88352 push    [bp+var_312] ;~ 2B83:0587
cs=0x2b83;eip=0x00058b; 	J(CALLF(sprite_make_wnd,0));	// 88353 call    sprite_make_wnd ;~ 2B83:058B
cs=0x2b83;eip=0x000590; 	T(ADD(sp, 6));	// 88354 add     sp, 6 ;~ 2B83:0590
cs=0x2b83;eip=0x000593; 	X(MOV(*(dw*)(((db*)&mmouspriteptr)), ax));	// 88355 mov     word ptr mmouspriteptr, ax ;~ 2B83:0593
cs=0x2b83;eip=0x000596; 	X(MOV(*(dw*)(((db*)&mmouspriteptr)+2), dx));	// 88356 mov     word ptr mmouspriteptr+2, dx ;~ 2B83:0596
cs=0x2b83;eip=0x00059a; 	T(MOV(ax, 0x0F));	// 88357 mov     ax, 0Fh ;~ 2B83:059A
cs=0x2b83;eip=0x00059d; 	X(PUSH(ax));	// 88358 push    ax ;~ 2B83:059D
cs=0x2b83;eip=0x00059e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_306))));	// 88359 push    [bp+var_306] ;~ 2B83:059E
cs=0x2b83;eip=0x0005a2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_312))));	// 88360 mov     ax, [bp+var_312] ;~ 2B83:05A2
cs=0x2b83;eip=0x0005a6; 	T(ADD(ax, video_flag2_is1));	// 88361 add     ax, video_flag2_is1 ;~ 2B83:05A6
cs=0x2b83;eip=0x0005aa; 	X(PUSH(ax));	// 88362 push    ax ;~ 2B83:05AA
cs=0x2b83;eip=0x0005ab; 	J(CALLF(sprite_make_wnd,0));	// 88363 call    sprite_make_wnd ;~ 2B83:05AB
cs=0x2b83;eip=0x0005b0; 	T(ADD(sp, 6));	// 88364 add     sp, 6 ;~ 2B83:05B0
cs=0x2b83;eip=0x0005b3; 	X(MOV(*(dw*)(((db*)&mouseunkspriteptr)), ax));	// 88365 mov     word ptr mouseunkspriteptr, ax ;~ 2B83:05B3
cs=0x2b83;eip=0x0005b6; 	X(MOV(*(dw*)(((db*)&mouseunkspriteptr)+2), dx));	// 88366 mov     word ptr mouseunkspriteptr+2, dx ;~ 2B83:05B6
cs=0x2b83;eip=0x0005ba; 	T(MOV(ax, offset(dseg,asdmain_0)));	// 88367 mov     ax, offset aSdmain_0 ; "sdmain" ;~ 2B83:05BA
cs=0x2b83;eip=0x0005bd; 	X(PUSH(ax));	// 88368 push    ax ;~ 2B83:05BD
cs=0x2b83;eip=0x0005be; 	J(CALLF(file_load_shape2d_fatal_thunk,0));	// 88369 call    file_load_shape2d_fatal_thunk ;~ 2B83:05BE
cs=0x2b83;eip=0x0005c3; 	T(ADD(sp, 2));	// 88370 add     sp, 2 ;~ 2B83:05C3
cs=0x2b83;eip=0x0005c6; 	X(MOV(*(dw*)(raddr(ss,bp+var_30c)), ax));	// 88371 mov     [bp+var_30C], ax ;~ 2B83:05C6
cs=0x2b83;eip=0x0005ca; 	X(MOV(*(dw*)(raddr(ss,bp+var_30a)), dx));	// 88372 mov     [bp+var_30A], dx ;~ 2B83:05CA
cs=0x2b83;eip=0x0005ce; 	X(PUSH(*(dw*)(((db*)&smouspriteptr)+2)));	// 88373 push    word ptr smouspriteptr+2 ;~ 2B83:05CE
cs=0x2b83;eip=0x0005d2; 	X(PUSH(*(dw*)(((db*)&smouspriteptr))));	// 88374 push    word ptr smouspriteptr ;~ 2B83:05D2
cs=0x2b83;eip=0x0005d6; 	J(CALLF(sprite_set_1_from_argptr,0));	// 88375 call    sprite_set_1_from_argptr ;~ 2B83:05D6
cs=0x2b83;eip=0x0005db; 	T(ADD(sp, 4));	// 88376 add     sp, 4 ;~ 2B83:05DB
cs=0x2b83;eip=0x0005de; 	T(SUB(ax, ax));	// 88377 sub     ax, ax ;~ 2B83:05DE
cs=0x2b83;eip=0x0005e0; 	X(PUSH(ax));	// 88378 push    ax ;~ 2B83:05E0
cs=0x2b83;eip=0x0005e1; 	X(PUSH(ax));	// 88379 push    ax ;~ 2B83:05E1
cs=0x2b83;eip=0x0005e2; 	T(MOV(ax, offset(dseg,asmou_0)));	// 88380 mov     ax, offset aSmou_0 ; "smou" ;~ 2B83:05E2
cs=0x2b83;eip=0x0005e5; 	X(PUSH(ax));	// 88381 push    ax ;~ 2B83:05E5
cs=0x2b83;eip=0x0005e6; 	X(PUSH(*(dw*)(raddr(ss,bp+var_30a))));	// 88382 push    [bp+var_30A] ;~ 2B83:05E6
cs=0x2b83;eip=0x0005ea; 	X(PUSH(*(dw*)(raddr(ss,bp+var_30c))));	// 88383 push    [bp+var_30C] ;~ 2B83:05EA
cs=0x2b83;eip=0x0005ee; 	J(CALLF(locate_shape_fatal,0));	// 88384 call    locate_shape_fatal ;~ 2B83:05EE
cs=0x2b83;eip=0x0005f3; 	T(ADD(sp, 6));	// 88385 add     sp, 6 ;~ 2B83:05F3
cs=0x2b83;eip=0x0005f6; 	X(PUSH(dx));	// 88386 push    dx ;~ 2B83:05F6
cs=0x2b83;eip=0x0005f7; 	X(PUSH(ax));	// 88387 push    ax ;~ 2B83:05F7
cs=0x2b83;eip=0x0005f8; 	J(CALLF(sprite_shape_to_1,0));	// 88388 call    sprite_shape_to_1 ;~ 2B83:05F8
cs=0x2b83;eip=0x0005fd; 	T(ADD(sp, 8));	// 88389 add     sp, 8 ;~ 2B83:05FD
cs=0x2b83;eip=0x000600; 	X(PUSH(*(dw*)(((db*)&mmouspriteptr)+2)));	// 88390 push    word ptr mmouspriteptr+2 ;~ 2B83:0600
cs=0x2b83;eip=0x000604; 	X(PUSH(*(dw*)(((db*)&mmouspriteptr))));	// 88391 push    word ptr mmouspriteptr ;~ 2B83:0604
cs=0x2b83;eip=0x000608; 	J(CALLF(sprite_set_1_from_argptr,0));	// 88392 call    sprite_set_1_from_argptr ;~ 2B83:0608
cs=0x2b83;eip=0x00060d; 	T(ADD(sp, 4));	// 88393 add     sp, 4 ;~ 2B83:060D
cs=0x2b83;eip=0x000610; 	T(SUB(ax, ax));	// 88394 sub     ax, ax ;~ 2B83:0610
cs=0x2b83;eip=0x000612; 	X(PUSH(ax));	// 88395 push    ax ;~ 2B83:0612
cs=0x2b83;eip=0x000613; 	X(PUSH(ax));	// 88396 push    ax ;~ 2B83:0613
cs=0x2b83;eip=0x000614; 	T(MOV(ax, offset(dseg,ammou)));	// 88397 mov     ax, offset aMmou ; "mmou" ;~ 2B83:0614
cs=0x2b83;eip=0x000617; 	X(PUSH(ax));	// 88398 push    ax ;~ 2B83:0617
cs=0x2b83;eip=0x000618; 	X(PUSH(*(dw*)(raddr(ss,bp+var_30a))));	// 88399 push    [bp+var_30A] ;~ 2B83:0618
cs=0x2b83;eip=0x00061c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_30c))));	// 88400 push    [bp+var_30C] ;~ 2B83:061C
cs=0x2b83;eip=0x000620; 	J(CALLF(locate_shape_fatal,0));	// 88401 call    locate_shape_fatal ;~ 2B83:0620
cs=0x2b83;eip=0x000625; 	T(ADD(sp, 6));	// 88402 add     sp, 6 ;~ 2B83:0625
cs=0x2b83;eip=0x000628; 	X(PUSH(dx));	// 88403 push    dx ;~ 2B83:0628
cs=0x2b83;eip=0x000629; 	X(PUSH(ax));	// 88404 push    ax ;~ 2B83:0629
cs=0x2b83;eip=0x00062a; 	J(CALLF(sprite_shape_to_1,0));	// 88405 call    sprite_shape_to_1 ;~ 2B83:062A
cs=0x2b83;eip=0x00062f; 	T(ADD(sp, 8));	// 88406 add     sp, 8 ;~ 2B83:062F
cs=0x2b83;eip=0x000632; 	X(PUSH(*(dw*)(raddr(ss,bp+var_30a))));	// 88407 push    [bp+var_30A] ;~ 2B83:0632
cs=0x2b83;eip=0x000636; 	X(PUSH(*(dw*)(raddr(ss,bp+var_30c))));	// 88408 push    [bp+var_30C] ;~ 2B83:0636
cs=0x2b83;eip=0x00063a; 	J(CALLF(mmgr_free,0));	// 88409 call    mmgr_free ;~ 2B83:063A
cs=0x2b83;eip=0x00063f; 	T(ADD(sp, 4));	// 88410 add     sp, 4 ;~ 2B83:063F
cs=0x2b83;eip=0x000642; 	J(CALLF(sprite_copy_2_to_1_2,0));	// 88411 call    sprite_copy_2_to_1_2 ;~ 2B83:0642
cs=0x2b83;eip=0x000647; 	X(POP(si));	// 88412 pop     si ;~ 2B83:0647
cs=0x2b83;eip=0x000648; 	T(MOV(sp, bp));	// 88413 mov     sp, bp ;~ 2B83:0648
cs=0x2b83;eip=0x00064a; 	X(POP(bp));	// 88414 pop     bp ;~ 2B83:064A
cs=0x2b83;eip=0x00064b; 	J(RETF(0));	// 88415 retf ;~ 2B83:064B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kload_palandcursor: 	goto load_palandcursor;
        case m2c::kloc_3a300: 	goto loc_3a300;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool get_0(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    get_0:
    _begin:
cs=0x2b83;eip=0x00064c; 	T(SUB(ax, ax));	// 88424 sub     ax, ax ;~ 2B83:064C
cs=0x2b83;eip=0x00064e; 	J(RETF(0));	// 88425 retf ;~ 2B83:064E

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kget_0: 	goto get_0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool mmgr_alloc_resbytes(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mmgr_alloc_resbytes:
    _begin:
#undef arg_0
#define arg_0 6
	// 88438 arg_0           = word ptr  6 ;~ 2B83:0650
#undef arg_2
#define arg_2 8
	// 88439 arg_2           = word ptr  8 ;~ 2B83:0650
#undef arg_4
#define arg_4 0x0A
	// 88440 arg_4           = word ptr  0Ah ;~ 2B83:0650
cs=0x2b83;eip=0x000650; 	X(PUSH(bp));	// 88442 push    bp ;~ 2B83:0650
cs=0x2b83;eip=0x000651; 	T(MOV(bp, sp));	// 88443 mov     bp, sp ;~ 2B83:0651
cs=0x2b83;eip=0x000653; 	T(MOV(ax, 0x10));	// 88444 mov     ax, 10h ;~ 2B83:0653
cs=0x2b83;eip=0x000656; 	T(CWD);	// 88445 cwd ;~ 2B83:0656
cs=0x2b83;eip=0x000657; 	X(PUSH(dx));	// 88446 push    dx ;~ 2B83:0657
cs=0x2b83;eip=0x000658; 	X(PUSH(ax));	// 88447 push    ax ;~ 2B83:0658
cs=0x2b83;eip=0x000659; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 88448 push    [bp+arg_4] ;~ 2B83:0659
cs=0x2b83;eip=0x00065c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 88449 push    [bp+arg_2] ;~ 2B83:065C
cs=0x2b83;eip=0x00065f; 	J(CALLF(__afldiv,0));	// 88450 call    __aFldiv ;~ 2B83:065F
cs=0x2b83;eip=0x000664; 	T(INC(ax));	// 88451 inc     ax ;~ 2B83:0664
cs=0x2b83;eip=0x000665; 	X(PUSH(ax));	// 88452 push    ax ;~ 2B83:0665
cs=0x2b83;eip=0x000666; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 88453 push    [bp+arg_0] ;~ 2B83:0666
cs=0x2b83;eip=0x000669; 	J(CALLF(mmgr_alloc_pages,0));	// 88454 call    mmgr_alloc_pages ;~ 2B83:0669
cs=0x2b83;eip=0x00066e; 	T(ADD(sp, 4));	// 88455 add     sp, 4 ;~ 2B83:066E
cs=0x2b83;eip=0x000671; 	X(POP(bp));	// 88456 pop     bp ;~ 2B83:0671
cs=0x2b83;eip=0x000672; 	J(RETF(0));	// 88457 retf ;~ 2B83:0672

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kmmgr_alloc_resbytes: 	goto mmgr_alloc_resbytes;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool mmgr_get_res_ofs_diff_scaled(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mmgr_get_res_ofs_diff_scaled:
    _begin:
cs=0x2b83;eip=0x000674; 	J(CALLF(mmgr_get_ofs_diff,0));	// 88468 call    mmgr_get_ofs_diff ;~ 2B83:0674
cs=0x2b83;eip=0x000679; 	T(SUB(dx, dx));	// 88469 sub     dx, dx ;~ 2B83:0679
cs=0x2b83;eip=0x00067b; 	T(MOV(cl, 4));	// 88470 mov     cl, 4 ;~ 2B83:067B
loc_3a48d:
	// 9849 
cs=0x2b83;eip=0x00067d; 	T(SHL(ax, 1));	// 88473 shl     ax, 1 ;~ 2B83:067D
cs=0x2b83;eip=0x00067f; 	T(RCL(dx, 1));	// 88474 rcl     dx, 1 ;~ 2B83:067F
cs=0x2b83;eip=0x000681; 	T(DEC(cl));	// 88475 dec     cl ;~ 2B83:0681
cs=0x2b83;eip=0x000683; 	J(JNZ(loc_3a48d));	// 88476 jnz     short loc_3A48D ;~ 2B83:0683
cs=0x2b83;eip=0x000685; 	J(RETF(0));	// 88477 retf ;~ 2B83:0685

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_3a48d: 	goto loc_3a48d;
        case m2c::kmmgr_get_res_ofs_diff_scaled: 	goto mmgr_get_res_ofs_diff_scaled;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool mmgr_get_chunk_size_bytes(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mmgr_get_chunk_size_bytes:
    _begin:
#undef arg_0
#define arg_0 6
	// 88487 arg_0           = word ptr  6 ;~ 2B83:0686
#undef arg_2
#define arg_2 8
	// 88488 arg_2           = word ptr  8 ;~ 2B83:0686
cs=0x2b83;eip=0x000686; 	X(PUSH(bp));	// 88490 push    bp ;~ 2B83:0686
cs=0x2b83;eip=0x000687; 	T(MOV(bp, sp));	// 88491 mov     bp, sp ;~ 2B83:0687
cs=0x2b83;eip=0x000689; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 88492 push    [bp+arg_2] ;~ 2B83:0689
cs=0x2b83;eip=0x00068c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 88493 push    [bp+arg_0] ;~ 2B83:068C
cs=0x2b83;eip=0x00068f; 	J(CALLF(mmgr_get_chunk_size,0));	// 88494 call    mmgr_get_chunk_size ;~ 2B83:068F
cs=0x2b83;eip=0x000694; 	T(ADD(sp, 4));	// 88495 add     sp, 4 ;~ 2B83:0694
cs=0x2b83;eip=0x000697; 	T(SUB(dx, dx));	// 88496 sub     dx, dx ;~ 2B83:0697
cs=0x2b83;eip=0x000699; 	T(MOV(cl, 4));	// 88497 mov     cl, 4 ;~ 2B83:0699
loc_3a4ab:
	// 9850 
cs=0x2b83;eip=0x00069b; 	T(SHL(ax, 1));	// 88500 shl     ax, 1 ;~ 2B83:069B
cs=0x2b83;eip=0x00069d; 	T(RCL(dx, 1));	// 88501 rcl     dx, 1 ;~ 2B83:069D
cs=0x2b83;eip=0x00069f; 	T(DEC(cl));	// 88502 dec     cl ;~ 2B83:069F
cs=0x2b83;eip=0x0006a1; 	J(JNZ(loc_3a4ab));	// 88503 jnz     short loc_3A4AB ;~ 2B83:06A1
cs=0x2b83;eip=0x0006a3; 	X(POP(bp));	// 88504 pop     bp ;~ 2B83:06A3
cs=0x2b83;eip=0x0006a4; 	J(RETF(0));	// 88505 retf ;~ 2B83:06A4

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_3a4ab: 	goto loc_3a4ab;
        case m2c::kmmgr_get_chunk_size_bytes: 	goto mmgr_get_chunk_size_bytes;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

