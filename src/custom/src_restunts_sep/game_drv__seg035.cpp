/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool file_load_shape2d_res_fatal(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    file_load_shape2d_res_fatal:
    _begin:
#undef arg_0
#define arg_0 6
	// 89618 arg_0           = word ptr  6 ;~ 2C6F:0008
cs=0x2c6f;eip=0x000008; 	X(PUSH(bp));	// 89620 push    bp ;~ 2C6F:0008
cs=0x2c6f;eip=0x000009; 	T(MOV(bp, sp));	// 89621 mov     bp, sp ;~ 2C6F:0009
cs=0x2c6f;eip=0x00000b; 	T(MOV(ax, 1));	// 89622 mov     ax, 1 ;~ 2C6F:000B
cs=0x2c6f;eip=0x00000e; 	X(PUSH(ax));	// 89623 push    ax ;~ 2C6F:000E
cs=0x2c6f;eip=0x00000f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 89624 push    [bp+arg_0] ;~ 2C6F:000F
cs=0x2c6f;eip=0x000012; 	X(PUSH(cs));	// 89625 push    cs ;~ 2C6F:0012
cs=0x2c6f;eip=0x000013; 	J(CALL(file_load_shape2d_res,0));	// 89626 call    near ptr file_load_shape2d_res ;~ 2C6F:0013
cs=0x2c6f;eip=0x000016; 	T(ADD(sp, 4));	// 89627 add     sp, 4 ;~ 2C6F:0016
cs=0x2c6f;eip=0x000019; 	X(POP(bp));	// 89628 pop     bp ;~ 2C6F:0019
cs=0x2c6f;eip=0x00001a; 	J(RETF(0));	// 89629 retf ;~ 2C6F:001A

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kfile_load_shape2d_res_fatal: 	goto file_load_shape2d_res_fatal;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool file_load_shape2d_res_nofatal(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    file_load_shape2d_res_nofatal:
    _begin:
#undef arg_0
#define arg_0 6
	// 89641 arg_0           = word ptr  6 ;~ 2C6F:001C
cs=0x2c6f;eip=0x00001c; 	X(PUSH(bp));	// 89643 push    bp ;~ 2C6F:001C
cs=0x2c6f;eip=0x00001d; 	T(MOV(bp, sp));	// 89644 mov     bp, sp ;~ 2C6F:001D
cs=0x2c6f;eip=0x00001f; 	T(SUB(ax, ax));	// 89645 sub     ax, ax ;~ 2C6F:001F
cs=0x2c6f;eip=0x000021; 	X(PUSH(ax));	// 89646 push    ax ;~ 2C6F:0021
cs=0x2c6f;eip=0x000022; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 89647 push    [bp+arg_0] ;~ 2C6F:0022
cs=0x2c6f;eip=0x000025; 	X(PUSH(cs));	// 89648 push    cs ;~ 2C6F:0025
cs=0x2c6f;eip=0x000026; 	J(CALL(file_load_shape2d_res,0));	// 89649 call    near ptr file_load_shape2d_res ;~ 2C6F:0026
cs=0x2c6f;eip=0x000029; 	T(ADD(sp, 4));	// 89650 add     sp, 4 ;~ 2C6F:0029
cs=0x2c6f;eip=0x00002c; 	X(POP(bp));	// 89651 pop     bp ;~ 2C6F:002C
cs=0x2c6f;eip=0x00002d; 	J(RETF(0));	// 89652 retf ;~ 2C6F:002D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kfile_load_shape2d_res_nofatal: 	goto file_load_shape2d_res_nofatal;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool file_load_shape2d_res(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    file_load_shape2d_res:
    _begin:
#undef var_a
#define var_a -0x0A
	// 89663 var_A           = word ptr -0Ah ;~ 2C6F:002E
#undef var_8
#define var_8 -8
	// 89664 var_8           = word ptr -8 ;~ 2C6F:002E
#undef var_6
#define var_6 -6
	// 89665 var_6           = word ptr -6 ;~ 2C6F:002E
#undef var_4
#define var_4 -4
	// 89666 var_4           = word ptr -4 ;~ 2C6F:002E
#undef var_2
#define var_2 -2
	// 89667 var_2           = word ptr -2 ;~ 2C6F:002E
#undef arg_0
#define arg_0 6
	// 89668 arg_0           = word ptr  6 ;~ 2C6F:002E
#undef arg_2
#define arg_2 8
	// 89669 arg_2           = word ptr  8 ;~ 2C6F:002E
cs=0x2c6f;eip=0x00002e; 	X(PUSH(bp));	// 89671 push    bp ;~ 2C6F:002E
cs=0x2c6f;eip=0x00002f; 	T(MOV(bp, sp));	// 89672 mov     bp, sp ;~ 2C6F:002F
cs=0x2c6f;eip=0x000031; 	T(SUB(sp, 0x0A));	// 89673 sub     sp, 0Ah ;~ 2C6F:0031
cs=0x2c6f;eip=0x000034; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 89674 push    [bp+arg_0] ;~ 2C6F:0034
cs=0x2c6f;eip=0x000037; 	J(CALLF(mmgr_path_to_name,0));	// 89675 call    mmgr_path_to_name ;~ 2C6F:0037
cs=0x2c6f;eip=0x00003c; 	T(ADD(sp, 2));	// 89676 add     sp, 2 ;~ 2C6F:003C
cs=0x2c6f;eip=0x00003f; 	X(PUSH(ax));	// 89677 push    ax ;~ 2C6F:003F
cs=0x2c6f;eip=0x000040; 	J(CALLF(mmgr_get_chunk_by_name,0));	// 89678 call    mmgr_get_chunk_by_name ;~ 2C6F:0040
cs=0x2c6f;eip=0x000045; 	T(ADD(sp, 2));	// 89679 add     sp, 2 ;~ 2C6F:0045
cs=0x2c6f;eip=0x000048; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 89680 mov     [bp+var_8], ax ;~ 2C6F:0048
cs=0x2c6f;eip=0x00004b; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 89681 mov     [bp+var_6], dx ;~ 2C6F:004B
cs=0x2c6f;eip=0x00004e; 	T(OR(ax, dx));	// 89682 or      ax, dx ;~ 2C6F:004E
cs=0x2c6f;eip=0x000050; 	J(JZ(loc_3ad2a));	// 89683 jz      short loc_3AD2A ;~ 2C6F:0050
cs=0x2c6f;eip=0x000052; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 89684 mov     ax, [bp+var_8] ;~ 2C6F:0052
cs=0x2c6f;eip=0x000055; 	T(MOV(sp, bp));	// 89685 mov     sp, bp ;~ 2C6F:0055
cs=0x2c6f;eip=0x000057; 	X(POP(bp));	// 89686 pop     bp ;~ 2C6F:0057
cs=0x2c6f;eip=0x000058; 	J(RETF(0));	// 89687 retf ;~ 2C6F:0058
loc_3ad2a:
	// 9929 
cs=0x2c6f;eip=0x00005a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 89692 push    [bp+arg_2] ;~ 2C6F:005A
cs=0x2c6f;eip=0x00005d; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 89693 push    [bp+arg_0] ;~ 2C6F:005D
cs=0x2c6f;eip=0x000060; 	J(CALLF(file_load_shape2d,0));	// 89694 call    file_load_shape2d ;~ 2C6F:0060
cs=0x2c6f;eip=0x000065; 	T(ADD(sp, 4));	// 89695 add     sp, 4 ;~ 2C6F:0065
cs=0x2c6f;eip=0x000068; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 89696 mov     [bp+var_4], ax ;~ 2C6F:0068
cs=0x2c6f;eip=0x00006b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 89697 mov     [bp+var_2], dx ;~ 2C6F:006B
cs=0x2c6f;eip=0x00006e; 	T(OR(ax, dx));	// 89698 or      ax, dx ;~ 2C6F:006E
cs=0x2c6f;eip=0x000070; 	J(JNZ(loc_3ad4a));	// 89699 jnz     short loc_3AD4A ;~ 2C6F:0070
cs=0x2c6f;eip=0x000072; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 89700 mov     ax, [bp+var_4] ;~ 2C6F:0072
cs=0x2c6f;eip=0x000075; 	T(MOV(sp, bp));	// 89701 mov     sp, bp ;~ 2C6F:0075
cs=0x2c6f;eip=0x000077; 	X(POP(bp));	// 89702 pop     bp ;~ 2C6F:0077
cs=0x2c6f;eip=0x000078; 	J(RETF(0));	// 89703 retf ;~ 2C6F:0078
loc_3ad4a:
	// 9930 
cs=0x2c6f;eip=0x00007a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 89708 push    [bp+var_2] ;~ 2C6F:007A
cs=0x2c6f;eip=0x00007d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 89709 push    [bp+var_4] ;~ 2C6F:007D
cs=0x2c6f;eip=0x000080; 	J(CALLF(mmgr_get_chunk_size,0));	// 89710 call    mmgr_get_chunk_size ;~ 2C6F:0080
cs=0x2c6f;eip=0x000085; 	T(ADD(sp, 4));	// 89711 add     sp, 4 ;~ 2C6F:0085
cs=0x2c6f;eip=0x000088; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 89712 mov     [bp+var_A], ax ;~ 2C6F:0088
cs=0x2c6f;eip=0x00008b; 	X(PUSH(ax));	// 89713 push    ax ;~ 2C6F:008B
cs=0x2c6f;eip=0x00008c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 89714 push    [bp+arg_0] ;~ 2C6F:008C
cs=0x2c6f;eip=0x00008f; 	J(CALLF(mmgr_alloc_pages,0));	// 89715 call    mmgr_alloc_pages ;~ 2C6F:008F
cs=0x2c6f;eip=0x000094; 	T(ADD(sp, 4));	// 89716 add     sp, 4 ;~ 2C6F:0094
cs=0x2c6f;eip=0x000097; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 89717 mov     [bp+var_8], ax ;~ 2C6F:0097
cs=0x2c6f;eip=0x00009a; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 89718 mov     [bp+var_6], dx ;~ 2C6F:009A
cs=0x2c6f;eip=0x00009d; 	X(PUSH(dx));	// 89719 push    dx ;~ 2C6F:009D
cs=0x2c6f;eip=0x00009e; 	X(PUSH(ax));	// 89720 push    ax ;~ 2C6F:009E
cs=0x2c6f;eip=0x00009f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 89721 push    [bp+var_2] ;~ 2C6F:009F
cs=0x2c6f;eip=0x0000a2; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 89722 push    [bp+var_4] ;~ 2C6F:00A2
cs=0x2c6f;eip=0x0000a5; 	X(PUSH(cs));	// 89723 push    cs ;~ 2C6F:00A5
cs=0x2c6f;eip=0x0000a6; 	J(CALL(parse_shape2d,0));	// 89724 call    near ptr parse_shape2d ;~ 2C6F:00A6
cs=0x2c6f;eip=0x0000a9; 	T(ADD(sp, 8));	// 89725 add     sp, 8 ;~ 2C6F:00A9
cs=0x2c6f;eip=0x0000ac; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 89726 push    [bp+var_2] ;~ 2C6F:00AC
cs=0x2c6f;eip=0x0000af; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 89727 push    [bp+var_4] ;~ 2C6F:00AF
cs=0x2c6f;eip=0x0000b2; 	J(CALLF(mmgr_release,0));	// 89728 call    mmgr_release ;~ 2C6F:00B2
cs=0x2c6f;eip=0x0000b7; 	T(ADD(sp, 4));	// 89729 add     sp, 4 ;~ 2C6F:00B7
cs=0x2c6f;eip=0x0000ba; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 89730 push    [bp+var_6] ;~ 2C6F:00BA
cs=0x2c6f;eip=0x0000bd; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 89731 push    [bp+var_8] ;~ 2C6F:00BD
cs=0x2c6f;eip=0x0000c0; 	J(CALLF(mmgr_op_unk,0));	// 89732 call    mmgr_op_unk ;~ 2C6F:00C0
cs=0x2c6f;eip=0x0000c5; 	T(ADD(sp, 4));	// 89733 add     sp, 4 ;~ 2C6F:00C5
cs=0x2c6f;eip=0x0000c8; 	T(MOV(sp, bp));	// 89734 mov     sp, bp ;~ 2C6F:00C8
cs=0x2c6f;eip=0x0000ca; 	X(POP(bp));	// 89735 pop     bp ;~ 2C6F:00CA
cs=0x2c6f;eip=0x0000cb; 	J(RETF(0));	// 89736 retf ;~ 2C6F:00CB

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kfile_load_shape2d_res: 	goto file_load_shape2d_res;
        case m2c::kloc_3ad2a: 	goto loc_3ad2a;
        case m2c::kloc_3ad4a: 	goto loc_3ad4a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool parse_shape2d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    parse_shape2d:
    _begin:
#undef var_38
#define var_38 -0x38
	// 89747 var_38          = dword ptr -38h ;~ 2C6F:00CC
#undef var_34
#define var_34 -0x34
	// 89748 var_34          = word ptr -34h ;~ 2C6F:00CC
#undef var_32
#define var_32 -0x32
	// 89749 var_32          = word ptr -32h ;~ 2C6F:00CC
#undef var_30
#define var_30 -0x30
	// 89750 var_30          = word ptr -30h ;~ 2C6F:00CC
#undef var_2e
#define var_2e -0x2E
	// 89751 var_2E          = dword ptr -2Eh ;~ 2C6F:00CC
#undef var_2a
#define var_2a -0x2A
	// 89752 var_2A          = word ptr -2Ah ;~ 2C6F:00CC
#undef var_28
#define var_28 -0x28
	// 89753 var_28          = word ptr -28h ;~ 2C6F:00CC
#undef var_26
#define var_26 -0x26
	// 89754 var_26          = word ptr -26h ;~ 2C6F:00CC
#undef var_24
#define var_24 -0x24
	// 89755 var_24          = word ptr -24h ;~ 2C6F:00CC
#undef var_1e
#define var_1e -0x1E
	// 89756 var_1E          = word ptr -1Eh ;~ 2C6F:00CC
#undef var_1c
#define var_1c -0x1C
	// 89757 var_1C          = dword ptr -1Ch ;~ 2C6F:00CC
#undef var_18
#define var_18 -0x18
	// 89758 var_18          = dword ptr -18h ;~ 2C6F:00CC
#undef var_14
#define var_14 -0x14
	// 89759 var_14          = word ptr -14h ;~ 2C6F:00CC
#undef var_12
#define var_12 -0x12
	// 89760 var_12          = word ptr -12h ;~ 2C6F:00CC
#undef var_10
#define var_10 -0x10
	// 89761 var_10          = word ptr -10h ;~ 2C6F:00CC
#undef var_e
#define var_e -0x0E
	// 89762 var_E           = word ptr -0Eh ;~ 2C6F:00CC
#undef var_c
#define var_c -0x0C
	// 89763 var_C           = dword ptr -0Ch ;~ 2C6F:00CC
#undef var_8
#define var_8 -8
	// 89764 var_8           = dword ptr -8 ;~ 2C6F:00CC
#undef var_4
#define var_4 -4
	// 89765 var_4           = dword ptr -4 ;~ 2C6F:00CC
#undef arg_0
#define arg_0 6
	// 89766 arg_0           = word ptr  6 ;~ 2C6F:00CC
#undef arg_2
#define arg_2 8
	// 89767 arg_2           = word ptr  8 ;~ 2C6F:00CC
#undef arg_4
#define arg_4 0x0A
	// 89768 arg_4           = word ptr  0Ah ;~ 2C6F:00CC
#undef arg_6
#define arg_6 0x0C
	// 89769 arg_6           = word ptr  0Ch ;~ 2C6F:00CC
cs=0x2c6f;eip=0x0000cc; 	X(PUSH(bp));	// 89771 push    bp ;~ 2C6F:00CC
cs=0x2c6f;eip=0x0000cd; 	T(MOV(bp, sp));	// 89772 mov     bp, sp ;~ 2C6F:00CD
cs=0x2c6f;eip=0x0000cf; 	T(SUB(sp, 0x38));	// 89773 sub     sp, 38h ;~ 2C6F:00CF
cs=0x2c6f;eip=0x0000d2; 	X(PUSH(di));	// 89774 push    di ;~ 2C6F:00D2
cs=0x2c6f;eip=0x0000d3; 	X(PUSH(si));	// 89775 push    si ;~ 2C6F:00D3
cs=0x2c6f;eip=0x0000d4; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 89776 push    [bp+arg_2] ;~ 2C6F:00D4
cs=0x2c6f;eip=0x0000d7; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 89777 push    [bp+arg_0] ;~ 2C6F:00D7
cs=0x2c6f;eip=0x0000da; 	J(CALLF(file_get_res_shape_count,0));	// 89778 call    file_get_res_shape_count ;~ 2C6F:00DA
cs=0x2c6f;eip=0x0000df; 	T(ADD(sp, 4));	// 89779 add     sp, 4 ;~ 2C6F:00DF
cs=0x2c6f;eip=0x0000e2; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), ax));	// 89780 mov     [bp+var_28], ax ;~ 2C6F:00E2
cs=0x2c6f;eip=0x0000e5; 	T(SHL(ax, 1));	// 89781 shl     ax, 1 ;~ 2C6F:00E5
cs=0x2c6f;eip=0x0000e7; 	T(SHL(ax, 1));	// 89782 shl     ax, 1 ;~ 2C6F:00E7
cs=0x2c6f;eip=0x0000e9; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 89783 add     ax, [bp+arg_4] ;~ 2C6F:00E9
cs=0x2c6f;eip=0x0000ec; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 89784 mov     dx, [bp+arg_6] ;~ 2C6F:00EC
cs=0x2c6f;eip=0x0000ef; 	T(ADD(ax, 6));	// 89785 add     ax, 6 ;~ 2C6F:00EF
cs=0x2c6f;eip=0x0000f2; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_18))), ax));	// 89786 mov     word ptr [bp+var_18], ax ;~ 2C6F:00F2
cs=0x2c6f;eip=0x0000f5; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_18+2))), dx));	// 89787 mov     word ptr [bp+var_18+2], dx ;~ 2C6F:00F5
cs=0x2c6f;eip=0x0000f8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 89788 mov     ax, [bp+arg_4] ;~ 2C6F:00F8
cs=0x2c6f;eip=0x0000fb; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_1c))), ax));	// 89789 mov     word ptr [bp+var_1C], ax ;~ 2C6F:00FB
cs=0x2c6f;eip=0x0000fe; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_1c+2))), dx));	// 89790 mov     word ptr [bp+var_1C+2], dx ;~ 2C6F:00FE
cs=0x2c6f;eip=0x000101; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 89791 mov     ax, [bp+arg_0] ;~ 2C6F:0101
cs=0x2c6f;eip=0x000104; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 89792 mov     dx, [bp+arg_2] ;~ 2C6F:0104
cs=0x2c6f;eip=0x000107; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_38))), ax));	// 89793 mov     word ptr [bp+var_38], ax ;~ 2C6F:0107
cs=0x2c6f;eip=0x00010a; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_38+2))), dx));	// 89794 mov     word ptr [bp+var_38+2], dx ;~ 2C6F:010A
cs=0x2c6f;eip=0x00010d; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a)), 0));	// 89795 mov     [bp+var_2A], 0 ;~ 2C6F:010D
cs=0x2c6f;eip=0x000112; 	J(JMP(loc_3adf9));	// 89796 jmp     short loc_3ADF9 ;~ 2C6F:0112
loc_3ade4:
	// 9931 
cs=0x2c6f;eip=0x000114; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_38))));	// 89800 les     bx, [bp+var_38] ;~ 2C6F:0114
cs=0x2c6f;eip=0x000117; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_38)))));	// 89801 inc     word ptr [bp+var_38] ;~ 2C6F:0117
cs=0x2c6f;eip=0x00011a; 	T(MOV(al, *(raddr(es,bx))));	// 89802 mov     al, es:[bx] ;~ 2C6F:011A
cs=0x2c6f;eip=0x00011d; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_1c))));	// 89803 les     bx, [bp+var_1C] ;~ 2C6F:011D
cs=0x2c6f;eip=0x000120; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_1c)))));	// 89804 inc     word ptr [bp+var_1C] ;~ 2C6F:0120
cs=0x2c6f;eip=0x000123; 	X(MOV(*(raddr(es,bx)), al));	// 89805 mov     es:[bx], al ;~ 2C6F:0123
cs=0x2c6f;eip=0x000126; 	X(INC(*(dw*)(raddr(ss,bp+var_2a))));	// 89806 inc     [bp+var_2A] ;~ 2C6F:0126
loc_3adf9:
	// 9932 
cs=0x2c6f;eip=0x000129; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 89809 mov     ax, [bp+var_28] ;~ 2C6F:0129
cs=0x2c6f;eip=0x00012c; 	T(SHL(ax, 1));	// 89810 shl     ax, 1 ;~ 2C6F:012C
cs=0x2c6f;eip=0x00012e; 	T(SHL(ax, 1));	// 89811 shl     ax, 1 ;~ 2C6F:012E
cs=0x2c6f;eip=0x000130; 	T(ADD(ax, 6));	// 89812 add     ax, 6 ;~ 2C6F:0130
cs=0x2c6f;eip=0x000133; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_2a))));	// 89813 cmp     ax, [bp+var_2A] ;~ 2C6F:0133
cs=0x2c6f;eip=0x000136; 	J(JG(loc_3ade4));	// 89814 jg      short loc_3ADE4 ;~ 2C6F:0136
cs=0x2c6f;eip=0x000138; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 89815 mov     ax, [bp+var_28] ;~ 2C6F:0138
cs=0x2c6f;eip=0x00013b; 	T(MOV(cl, 3));	// 89816 mov     cl, 3 ;~ 2C6F:013B
cs=0x2c6f;eip=0x00013d; 	T(SHL(ax, cl));	// 89817 shl     ax, cl ;~ 2C6F:013D
cs=0x2c6f;eip=0x00013f; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 89818 add     ax, [bp+arg_4] ;~ 2C6F:013F
cs=0x2c6f;eip=0x000142; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 89819 mov     dx, [bp+arg_6] ;~ 2C6F:0142
cs=0x2c6f;eip=0x000145; 	T(ADD(ax, 6));	// 89820 add     ax, 6 ;~ 2C6F:0145
cs=0x2c6f;eip=0x000148; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8))), ax));	// 89821 mov     word ptr [bp+var_8], ax ;~ 2C6F:0148
cs=0x2c6f;eip=0x00014b; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8+2))), dx));	// 89822 mov     word ptr [bp+var_8+2], dx ;~ 2C6F:014B
cs=0x2c6f;eip=0x00014e; 	X(MOV(*(dw*)(raddr(ss,bp+var_26)), ax));	// 89823 mov     [bp+var_26], ax ;~ 2C6F:014E
cs=0x2c6f;eip=0x000151; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), dx));	// 89824 mov     [bp+var_24], dx ;~ 2C6F:0151
cs=0x2c6f;eip=0x000154; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a)), 0));	// 89825 mov     [bp+var_2A], 0 ;~ 2C6F:0154
cs=0x2c6f;eip=0x000159; 	J(JMP(loc_3af5b));	// 89826 jmp     loc_3AF5B ;~ 2C6F:0159
loc_3ae2c:
	// 9933 
cs=0x2c6f;eip=0x00015c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_2e +2)))));	// 89830 push    word ptr [bp+var_2E+2] ;~ 2C6F:015C
cs=0x2c6f;eip=0x00015f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_2e)))));	// 89831 push    word ptr [bp+var_2E] ;~ 2C6F:015F
cs=0x2c6f;eip=0x000162; 	X(PUSH(cs));	// 89832 push    cs ;~ 2C6F:0162
cs=0x2c6f;eip=0x000163; 	J(CALL(parse_shape2d_helper3,0));	// 89833 call    near ptr parse_shape2d_helper3 ;~ 2C6F:0163
cs=0x2c6f;eip=0x000166; 	T(ADD(sp, 4));	// 89834 add     sp, 4 ;~ 2C6F:0166
cs=0x2c6f;eip=0x000169; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 89835 mov     [bp+var_10], ax ;~ 2C6F:0169
cs=0x2c6f;eip=0x00016c; 	T(CMP(ax, 3));	// 89836 cmp     ax, 3 ;~ 2C6F:016C
cs=0x2c6f;eip=0x00016f; 	J(JG(loc_3ae4c));	// 89837 jg      short loc_3AE4C ;~ 2C6F:016F
cs=0x2c6f;eip=0x000171; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 89838 mov     ax, [bp+var_1E] ;~ 2C6F:0171
cs=0x2c6f;eip=0x000174; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), ax));	// 89839 cmp     [bp+var_E], ax ;~ 2C6F:0174
cs=0x2c6f;eip=0x000177; 	J(JNC(loc_3ae4c));	// 89840 jnb     short loc_3AE4C ;~ 2C6F:0177
cs=0x2c6f;eip=0x000179; 	J(JMP(loc_3af3f));	// 89841 jmp     loc_3AF3F ;~ 2C6F:0179
loc_3ae4c:
	// 9934 
cs=0x2c6f;eip=0x00017c; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), 0x7F));	// 89846 cmp     [bp+var_E], 7Fh ;~ 2C6F:017C
cs=0x2c6f;eip=0x000180; 	J(JG(loc_3ae74));	// 89847 jg      short loc_3AE74 ;~ 2C6F:0180
cs=0x2c6f;eip=0x000182; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), 0));	// 89848 cmp     [bp+var_E], 0 ;~ 2C6F:0182
cs=0x2c6f;eip=0x000186; 	J(JZ(loc_3aec9));	// 89849 jz      short loc_3AEC9 ;~ 2C6F:0186
cs=0x2c6f;eip=0x000188; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 89850 les     bx, [bp+var_8] ;~ 2C6F:0188
cs=0x2c6f;eip=0x00018b; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_8)))));	// 89851 inc     word ptr [bp+var_8] ;~ 2C6F:018B
cs=0x2c6f;eip=0x00018e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 89852 mov     ax, [bp+var_E] ;~ 2C6F:018E
cs=0x2c6f;eip=0x000191; 	T(NEG(ax));	// 89853 neg     ax ;~ 2C6F:0191
cs=0x2c6f;eip=0x000193; 	X(MOV(*(raddr(es,bx)), al));	// 89854 mov     es:[bx], al ;~ 2C6F:0193
cs=0x2c6f;eip=0x000196; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 89855 mov     ax, [bp+var_E] ;~ 2C6F:0196
cs=0x2c6f;eip=0x000199; 	X(SUB(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 89856 sub     [bp+var_1E], ax ;~ 2C6F:0199
cs=0x2c6f;eip=0x00019c; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), 0));	// 89857 mov     [bp+var_30], 0 ;~ 2C6F:019C
cs=0x2c6f;eip=0x0001a1; 	J(JMP(loc_3aec1));	// 89858 jmp     short loc_3AEC1 ;~ 2C6F:01A1
loc_3ae74:
	// 9935 
cs=0x2c6f;eip=0x0001a4; 	X(SUB(*(dw*)(raddr(ss,bp+var_e)), 0x7F));	// 89863 sub     [bp+var_E], 7Fh ;~ 2C6F:01A4
cs=0x2c6f;eip=0x0001a8; 	X(SUB(*(dw*)(raddr(ss,bp+var_1e)), 0x7F));	// 89864 sub     [bp+var_1E], 7Fh ;~ 2C6F:01A8
cs=0x2c6f;eip=0x0001ac; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 89865 les     bx, [bp+var_8] ;~ 2C6F:01AC
cs=0x2c6f;eip=0x0001af; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_8)))));	// 89866 inc     word ptr [bp+var_8] ;~ 2C6F:01AF
cs=0x2c6f;eip=0x0001b2; 	X(MOV(*(raddr(es,bx)), 0x81));	// 89867 mov     byte ptr es:[bx], 81h ; '' ;~ 2C6F:01B2
cs=0x2c6f;eip=0x0001b6; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), 0));	// 89868 mov     [bp+var_30], 0 ;~ 2C6F:01B6
cs=0x2c6f;eip=0x0001bb; 	J(JMP(loc_3ae91));	// 89869 jmp     short loc_3AE91 ;~ 2C6F:01BB
loc_3ae8e:
	// 9936 
cs=0x2c6f;eip=0x0001be; 	X(INC(*(dw*)(raddr(ss,bp+var_30))));	// 89874 inc     [bp+var_30] ;~ 2C6F:01BE
loc_3ae91:
	// 9937 
cs=0x2c6f;eip=0x0001c1; 	T(CMP(*(dw*)(raddr(ss,bp+var_30)), 0x7F));	// 89877 cmp     [bp+var_30], 7Fh ;~ 2C6F:01C1
cs=0x2c6f;eip=0x0001c5; 	J(JGE(loc_3ae4c));	// 89878 jge     short loc_3AE4C ;~ 2C6F:01C5
cs=0x2c6f;eip=0x0001c7; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 89879 les     bx, [bp+var_4] ;~ 2C6F:01C7
cs=0x2c6f;eip=0x0001ca; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 89880 inc     word ptr [bp+var_4] ;~ 2C6F:01CA
cs=0x2c6f;eip=0x0001cd; 	T(MOV(al, *(raddr(es,bx))));	// 89881 mov     al, es:[bx] ;~ 2C6F:01CD
cs=0x2c6f;eip=0x0001d0; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 89882 les     bx, [bp+var_8] ;~ 2C6F:01D0
cs=0x2c6f;eip=0x0001d3; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_8)))));	// 89883 inc     word ptr [bp+var_8] ;~ 2C6F:01D3
cs=0x2c6f;eip=0x0001d6; 	X(MOV(*(raddr(es,bx)), al));	// 89884 mov     es:[bx], al ;~ 2C6F:01D6
cs=0x2c6f;eip=0x0001d9; 	J(JMP(loc_3ae8e));	// 89885 jmp     short loc_3AE8E ;~ 2C6F:01D9
loc_3aeac:
	// 9938 
cs=0x2c6f;eip=0x0001dc; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 89890 les     bx, [bp+var_4] ;~ 2C6F:01DC
cs=0x2c6f;eip=0x0001df; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 89891 inc     word ptr [bp+var_4] ;~ 2C6F:01DF
cs=0x2c6f;eip=0x0001e2; 	T(MOV(al, *(raddr(es,bx))));	// 89892 mov     al, es:[bx] ;~ 2C6F:01E2
cs=0x2c6f;eip=0x0001e5; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 89893 les     bx, [bp+var_8] ;~ 2C6F:01E5
cs=0x2c6f;eip=0x0001e8; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_8)))));	// 89894 inc     word ptr [bp+var_8] ;~ 2C6F:01E8
cs=0x2c6f;eip=0x0001eb; 	X(MOV(*(raddr(es,bx)), al));	// 89895 mov     es:[bx], al ;~ 2C6F:01EB
cs=0x2c6f;eip=0x0001ee; 	X(INC(*(dw*)(raddr(ss,bp+var_30))));	// 89896 inc     [bp+var_30] ;~ 2C6F:01EE
loc_3aec1:
	// 9939 
cs=0x2c6f;eip=0x0001f1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 89899 mov     ax, [bp+var_E] ;~ 2C6F:01F1
cs=0x2c6f;eip=0x0001f4; 	T(CMP(*(dw*)(raddr(ss,bp+var_30)), ax));	// 89900 cmp     [bp+var_30], ax ;~ 2C6F:01F4
cs=0x2c6f;eip=0x0001f7; 	J(JL(loc_3aeac));	// 89901 jl      short loc_3AEAC ;~ 2C6F:01F7
loc_3aec9:
	// 9940 
cs=0x2c6f;eip=0x0001f9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 89904 mov     ax, [bp+var_1E] ;~ 2C6F:01F9
cs=0x2c6f;eip=0x0001fc; 	T(CMP(*(dw*)(raddr(ss,bp+var_10)), ax));	// 89905 cmp     [bp+var_10], ax ;~ 2C6F:01FC
cs=0x2c6f;eip=0x0001ff; 	J(JBE(loc_3aefb));	// 89906 jbe     short loc_3AEFB ;~ 2C6F:01FF
cs=0x2c6f;eip=0x000201; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 89907 mov     [bp+var_10], ax ;~ 2C6F:0201
cs=0x2c6f;eip=0x000204; 	J(JMP(loc_3aefb));	// 89908 jmp     short loc_3AEFB ;~ 2C6F:0204
loc_3aed6:
	// 9941 
cs=0x2c6f;eip=0x000206; 	X(SUB(*(dw*)(raddr(ss,bp+var_10)), 0x7F));	// 89912 sub     [bp+var_10], 7Fh ;~ 2C6F:0206
cs=0x2c6f;eip=0x00020a; 	X(SUB(*(dw*)(raddr(ss,bp+var_1e)), 0x7F));	// 89913 sub     [bp+var_1E], 7Fh ;~ 2C6F:020A
cs=0x2c6f;eip=0x00020e; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 89914 les     bx, [bp+var_8] ;~ 2C6F:020E
cs=0x2c6f;eip=0x000211; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_8)))));	// 89915 inc     word ptr [bp+var_8] ;~ 2C6F:0211
cs=0x2c6f;eip=0x000214; 	X(MOV(*(raddr(es,bx)), 0x7F));	// 89916 mov     byte ptr es:[bx], 7Fh ;~ 2C6F:0214
cs=0x2c6f;eip=0x000218; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_2e))));	// 89917 les     bx, [bp+var_2E] ;~ 2C6F:0218
cs=0x2c6f;eip=0x00021b; 	T(MOV(al, *(raddr(es,bx))));	// 89918 mov     al, es:[bx] ;~ 2C6F:021B
cs=0x2c6f;eip=0x00021e; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 89919 les     bx, [bp+var_8] ;~ 2C6F:021E
cs=0x2c6f;eip=0x000221; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_8)))));	// 89920 inc     word ptr [bp+var_8] ;~ 2C6F:0221
cs=0x2c6f;eip=0x000224; 	X(MOV(*(raddr(es,bx)), al));	// 89921 mov     es:[bx], al ;~ 2C6F:0224
cs=0x2c6f;eip=0x000227; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_2e))), 0x7F));	// 89922 add     word ptr [bp+var_2E], 7Fh ;~ 2C6F:0227
loc_3aefb:
	// 9942 
cs=0x2c6f;eip=0x00022b; 	T(CMP(*(dw*)(raddr(ss,bp+var_10)), 0x7F));	// 89926 cmp     [bp+var_10], 7Fh ;~ 2C6F:022B
cs=0x2c6f;eip=0x00022f; 	J(JG(loc_3aed6));	// 89927 jg      short loc_3AED6 ;~ 2C6F:022F
cs=0x2c6f;eip=0x000231; 	T(CMP(*(dw*)(raddr(ss,bp+var_10)), 3));	// 89928 cmp     [bp+var_10], 3 ;~ 2C6F:0231
cs=0x2c6f;eip=0x000235; 	J(JLE(loc_3af2e));	// 89929 jle     short loc_3AF2E ;~ 2C6F:0235
cs=0x2c6f;eip=0x000237; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 89930 les     bx, [bp+var_8] ;~ 2C6F:0237
cs=0x2c6f;eip=0x00023a; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_8)))));	// 89931 inc     word ptr [bp+var_8] ;~ 2C6F:023A
cs=0x2c6f;eip=0x00023d; 	T(MOV(al, *(db*)(raddr(ss,bp+var_10))));	// 89932 mov     al, byte ptr [bp+var_10] ;~ 2C6F:023D
cs=0x2c6f;eip=0x000240; 	X(MOV(*(raddr(es,bx)), al));	// 89933 mov     es:[bx], al ;~ 2C6F:0240
cs=0x2c6f;eip=0x000243; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 89934 mov     ax, [bp+var_10] ;~ 2C6F:0243
cs=0x2c6f;eip=0x000246; 	X(SUB(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 89935 sub     [bp+var_1E], ax ;~ 2C6F:0246
cs=0x2c6f;eip=0x000249; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_2e))));	// 89936 les     bx, [bp+var_2E] ;~ 2C6F:0249
cs=0x2c6f;eip=0x00024c; 	T(MOV(al, *(raddr(es,bx))));	// 89937 mov     al, es:[bx] ;~ 2C6F:024C
cs=0x2c6f;eip=0x00024f; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 89938 les     bx, [bp+var_8] ;~ 2C6F:024F
cs=0x2c6f;eip=0x000252; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_8)))));	// 89939 inc     word ptr [bp+var_8] ;~ 2C6F:0252
cs=0x2c6f;eip=0x000255; 	X(MOV(*(raddr(es,bx)), al));	// 89940 mov     es:[bx], al ;~ 2C6F:0255
cs=0x2c6f;eip=0x000258; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 89941 mov     ax, [bp+var_10] ;~ 2C6F:0258
cs=0x2c6f;eip=0x00025b; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_2e))), ax));	// 89942 add     word ptr [bp+var_2E], ax ;~ 2C6F:025B
loc_3af2e:
	// 9943 
cs=0x2c6f;eip=0x00025e; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_2e)))));	// 89945 mov     ax, word ptr [bp+var_2E] ;~ 2C6F:025E
cs=0x2c6f;eip=0x000261; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_2e +2)))));	// 89946 mov     dx, word ptr [bp+var_2E+2] ;~ 2C6F:0261
cs=0x2c6f;eip=0x000264; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 89947 mov     word ptr [bp+var_4], ax ;~ 2C6F:0264
cs=0x2c6f;eip=0x000267; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 89948 mov     word ptr [bp+var_4+2], dx ;~ 2C6F:0267
cs=0x2c6f;eip=0x00026a; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0));	// 89949 mov     [bp+var_E], 0 ;~ 2C6F:026A
loc_3af3f:
	// 9944 
cs=0x2c6f;eip=0x00026f; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_2e)))));	// 89952 inc     word ptr [bp+var_2E] ;~ 2C6F:026F
cs=0x2c6f;eip=0x000272; 	X(INC(*(dw*)(raddr(ss,bp+var_e))));	// 89953 inc     [bp+var_E] ;~ 2C6F:0272
loc_3af45:
	// 9945 
cs=0x2c6f;eip=0x000275; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 89956 cmp     [bp+var_1E], 0 ;~ 2C6F:0275
cs=0x2c6f;eip=0x000279; 	J(JZ(loc_3af4e));	// 89957 jz      short loc_3AF4E ;~ 2C6F:0279
cs=0x2c6f;eip=0x00027b; 	J(JMP(loc_3ae2c));	// 89958 jmp     loc_3AE2C ;~ 2C6F:027B
loc_3af4e:
	// 9946 
cs=0x2c6f;eip=0x00027e; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 89962 les     bx, [bp+var_8] ;~ 2C6F:027E
cs=0x2c6f;eip=0x000281; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_8)))));	// 89963 inc     word ptr [bp+var_8] ;~ 2C6F:0281
cs=0x2c6f;eip=0x000284; 	X(MOV(*(raddr(es,bx)), 0));	// 89964 mov     byte ptr es:[bx], 0 ;~ 2C6F:0284
cs=0x2c6f;eip=0x000288; 	X(INC(*(dw*)(raddr(ss,bp+var_2a))));	// 89965 inc     [bp+var_2A] ;~ 2C6F:0288
loc_3af5b:
	// 9947 
cs=0x2c6f;eip=0x00028b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 89968 mov     ax, [bp+var_28] ;~ 2C6F:028B
cs=0x2c6f;eip=0x00028e; 	T(CMP(*(dw*)(raddr(ss,bp+var_2a)), ax));	// 89969 cmp     [bp+var_2A], ax ;~ 2C6F:028E
cs=0x2c6f;eip=0x000291; 	J(JL(loc_3af66));	// 89970 jl      short loc_3AF66 ;~ 2C6F:0291
cs=0x2c6f;eip=0x000293; 	J(JMP(loc_3b020));	// 89971 jmp     loc_3B020 ;~ 2C6F:0293
loc_3af66:
	// 9948 
cs=0x2c6f;eip=0x000296; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2a))));	// 89975 push    [bp+var_2A] ;~ 2C6F:0296
cs=0x2c6f;eip=0x000299; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 89976 push    [bp+arg_2] ;~ 2C6F:0299
cs=0x2c6f;eip=0x00029c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 89977 push    [bp+arg_0] ;~ 2C6F:029C
cs=0x2c6f;eip=0x00029f; 	J(CALLF(file_get_shape2d,0));	// 89978 call    file_get_shape2d ;~ 2C6F:029F
cs=0x2c6f;eip=0x0002a4; 	T(ADD(sp, 6));	// 89979 add     sp, 6 ;~ 2C6F:02A4
cs=0x2c6f;eip=0x0002a7; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c))), ax));	// 89980 mov     word ptr [bp+var_C], ax ;~ 2C6F:02A7
cs=0x2c6f;eip=0x0002aa; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c+2))), dx));	// 89981 mov     word ptr [bp+var_C+2], dx ;~ 2C6F:02AA
cs=0x2c6f;eip=0x0002ad; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_8+2)))));	// 89982 push    word ptr [bp+var_8+2] ;~ 2C6F:02AD
cs=0x2c6f;eip=0x0002b0; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_8)))));	// 89983 push    word ptr [bp+var_8] ;~ 2C6F:02B0
cs=0x2c6f;eip=0x0002b3; 	J(CALLF(parse_shape2d_helper,0));	// 89984 call    parse_shape2d_helper ;~ 2C6F:02B3
cs=0x2c6f;eip=0x0002b8; 	T(ADD(sp, 4));	// 89985 add     sp, 4 ;~ 2C6F:02B8
cs=0x2c6f;eip=0x0002bb; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 89986 mov     [bp+var_14], ax ;~ 2C6F:02BB
cs=0x2c6f;eip=0x0002be; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), dx));	// 89987 mov     [bp+var_12], dx ;~ 2C6F:02BE
cs=0x2c6f;eip=0x0002c1; 	X(PUSH(dx));	// 89988 push    dx ;~ 2C6F:02C1
cs=0x2c6f;eip=0x0002c2; 	X(PUSH(ax));	// 89989 push    ax ;~ 2C6F:02C2
cs=0x2c6f;eip=0x0002c3; 	J(CALLF(parse_shape2d_helper2,0));	// 89990 call    parse_shape2d_helper2 ;~ 2C6F:02C3
cs=0x2c6f;eip=0x0002c8; 	T(ADD(sp, 4));	// 89991 add     sp, 4 ;~ 2C6F:02C8
cs=0x2c6f;eip=0x0002cb; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8))), ax));	// 89992 mov     word ptr [bp+var_8], ax ;~ 2C6F:02CB
cs=0x2c6f;eip=0x0002ce; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8+2))), dx));	// 89993 mov     word ptr [bp+var_8+2], dx ;~ 2C6F:02CE
cs=0x2c6f;eip=0x0002d1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_24))));	// 89994 push    [bp+var_24] ;~ 2C6F:02D1
cs=0x2c6f;eip=0x0002d4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_26))));	// 89995 push    [bp+var_26] ;~ 2C6F:02D4
cs=0x2c6f;eip=0x0002d7; 	J(CALLF(parse_shape2d_helper,0));	// 89996 call    parse_shape2d_helper ;~ 2C6F:02D7
cs=0x2c6f;eip=0x0002dc; 	T(ADD(sp, 4));	// 89997 add     sp, 4 ;~ 2C6F:02DC
cs=0x2c6f;eip=0x0002df; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_8+2)))));	// 89998 push    word ptr [bp+var_8+2] ;~ 2C6F:02DF
cs=0x2c6f;eip=0x0002e2; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_8)))));	// 89999 push    word ptr [bp+var_8] ;~ 2C6F:02E2
cs=0x2c6f;eip=0x0002e5; 	T(MOV(si, ax));	// 90000 mov     si, ax ;~ 2C6F:02E5
cs=0x2c6f;eip=0x0002e7; 	T(MOV(di, dx));	// 90001 mov     di, dx ;~ 2C6F:02E7
cs=0x2c6f;eip=0x0002e9; 	J(CALLF(parse_shape2d_helper,0));	// 90002 call    parse_shape2d_helper ;~ 2C6F:02E9
cs=0x2c6f;eip=0x0002ee; 	T(ADD(sp, 4));	// 90003 add     sp, 4 ;~ 2C6F:02EE
cs=0x2c6f;eip=0x0002f1; 	T(SUB(ax, si));	// 90004 sub     ax, si ;~ 2C6F:02F1
cs=0x2c6f;eip=0x0002f3; 	T(SBB(dx, di));	// 90005 sbb     dx, di ;~ 2C6F:02F3
cs=0x2c6f;eip=0x0002f5; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_18))));	// 90006 les     bx, [bp+var_18] ;~ 2C6F:02F5
cs=0x2c6f;eip=0x0002f8; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_18))), 4));	// 90007 add     word ptr [bp+var_18], 4 ;~ 2C6F:02F8
cs=0x2c6f;eip=0x0002fc; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 90008 mov     es:[bx], ax ;~ 2C6F:02FC
cs=0x2c6f;eip=0x0002ff; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 90009 mov     es:[bx+2], dx ;~ 2C6F:02FF
cs=0x2c6f;eip=0x000303; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_c)))));	// 90010 mov     ax, word ptr [bp+var_C] ;~ 2C6F:0303
cs=0x2c6f;eip=0x000306; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_c+2)))));	// 90011 mov     dx, word ptr [bp+var_C+2] ;~ 2C6F:0306
cs=0x2c6f;eip=0x000309; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_2e))), ax));	// 90012 mov     word ptr [bp+var_2E], ax ;~ 2C6F:0309
cs=0x2c6f;eip=0x00030c; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_2e +2))), dx));	// 90013 mov     word ptr [bp+var_2E+2], dx ;~ 2C6F:030C
cs=0x2c6f;eip=0x00030f; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), 0));	// 90014 mov     [bp+var_30], 0 ;~ 2C6F:030F
loc_3afe4:
	// 9949 
cs=0x2c6f;eip=0x000314; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_2e))));	// 90017 les     bx, [bp+var_2E] ;~ 2C6F:0314
cs=0x2c6f;eip=0x000317; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_2e)))));	// 90018 inc     word ptr [bp+var_2E] ;~ 2C6F:0317
cs=0x2c6f;eip=0x00031a; 	T(MOV(al, *(raddr(es,bx))));	// 90019 mov     al, es:[bx] ;~ 2C6F:031A
cs=0x2c6f;eip=0x00031d; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 90020 les     bx, [bp+var_8] ;~ 2C6F:031D
cs=0x2c6f;eip=0x000320; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_8)))));	// 90021 inc     word ptr [bp+var_8] ;~ 2C6F:0320
cs=0x2c6f;eip=0x000323; 	X(MOV(*(raddr(es,bx)), al));	// 90022 mov     es:[bx], al ;~ 2C6F:0323
cs=0x2c6f;eip=0x000326; 	X(INC(*(dw*)(raddr(ss,bp+var_30))));	// 90023 inc     [bp+var_30] ;~ 2C6F:0326
cs=0x2c6f;eip=0x000329; 	T(CMP(*(dw*)(raddr(ss,bp+var_30)), 0x10));	// 90024 cmp     [bp+var_30], 10h ;~ 2C6F:0329
cs=0x2c6f;eip=0x00032d; 	J(JL(loc_3afe4));	// 90025 jl      short loc_3AFE4 ;~ 2C6F:032D
cs=0x2c6f;eip=0x00032f; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_2e)))));	// 90026 mov     ax, word ptr [bp+var_2E] ;~ 2C6F:032F
cs=0x2c6f;eip=0x000332; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_2e +2)))));	// 90027 mov     dx, word ptr [bp+var_2E+2] ;~ 2C6F:0332
cs=0x2c6f;eip=0x000335; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 90028 mov     word ptr [bp+var_4], ax ;~ 2C6F:0335
cs=0x2c6f;eip=0x000338; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 90029 mov     word ptr [bp+var_4+2], dx ;~ 2C6F:0338
cs=0x2c6f;eip=0x00033b; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0));	// 90030 mov     [bp+var_E], 0 ;~ 2C6F:033B
cs=0x2c6f;eip=0x000340; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_c))));	// 90031 les     bx, [bp+var_C] ;~ 2C6F:0340
cs=0x2c6f;eip=0x000343; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 90032 mov     ax, es:[bx+2] ;~ 2C6F:0343
cs=0x2c6f;eip=0x000347; 	X(IMUL1_2(*(dw*)(raddr(es,bx))));	// 90033 imul    word ptr es:[bx] ;~ 2C6F:0347
cs=0x2c6f;eip=0x00034a; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 90034 mov     [bp+var_1E], ax ;~ 2C6F:034A
cs=0x2c6f;eip=0x00034d; 	J(JMP(loc_3af45));	// 90035 jmp     loc_3AF45 ;~ 2C6F:034D
loc_3b020:
	// 9950 
cs=0x2c6f;eip=0x000350; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 90039 push    [bp+arg_6] ;~ 2C6F:0350
cs=0x2c6f;eip=0x000353; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 90040 push    [bp+arg_4] ;~ 2C6F:0353
cs=0x2c6f;eip=0x000356; 	J(CALLF(parse_shape2d_helper,0));	// 90041 call    parse_shape2d_helper ;~ 2C6F:0356
cs=0x2c6f;eip=0x00035b; 	T(ADD(sp, 4));	// 90042 add     sp, 4 ;~ 2C6F:035B
cs=0x2c6f;eip=0x00035e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_8+2)))));	// 90043 push    word ptr [bp+var_8+2] ;~ 2C6F:035E
cs=0x2c6f;eip=0x000361; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_8)))));	// 90044 push    word ptr [bp+var_8] ;~ 2C6F:0361
cs=0x2c6f;eip=0x000364; 	T(MOV(si, ax));	// 90045 mov     si, ax ;~ 2C6F:0364
cs=0x2c6f;eip=0x000366; 	T(MOV(di, dx));	// 90046 mov     di, dx ;~ 2C6F:0366
cs=0x2c6f;eip=0x000368; 	J(CALLF(parse_shape2d_helper,0));	// 90047 call    parse_shape2d_helper ;~ 2C6F:0368
cs=0x2c6f;eip=0x00036d; 	T(ADD(sp, 4));	// 90048 add     sp, 4 ;~ 2C6F:036D
cs=0x2c6f;eip=0x000370; 	T(SUB(ax, si));	// 90049 sub     ax, si ;~ 2C6F:0370
cs=0x2c6f;eip=0x000372; 	T(SBB(dx, di));	// 90050 sbb     dx, di ;~ 2C6F:0372
cs=0x2c6f;eip=0x000374; 	X(MOV(*(dw*)(raddr(ss,bp+var_34)), ax));	// 90051 mov     [bp+var_34], ax ;~ 2C6F:0374
cs=0x2c6f;eip=0x000377; 	X(MOV(*(dw*)(raddr(ss,bp+var_32)), dx));	// 90052 mov     [bp+var_32], dx ;~ 2C6F:0377
cs=0x2c6f;eip=0x00037a; 	T(TEST(*(db*)(raddr(ss,bp+var_34)), 0x0F));	// 90053 test    byte ptr [bp+var_34], 0Fh ;~ 2C6F:037A
cs=0x2c6f;eip=0x00037e; 	J(JZ(loc_3b068));	// 90054 jz      short loc_3B068 ;~ 2C6F:037E
cs=0x2c6f;eip=0x000380; 	T(MOV(cl, 4));	// 90055 mov     cl, 4 ;~ 2C6F:0380
loc_3b052:
	// 9951 
cs=0x2c6f;eip=0x000382; 	T(SAR(dx, 1));	// 90058 sar     dx, 1 ;~ 2C6F:0382
cs=0x2c6f;eip=0x000384; 	T(RCR(ax, 1));	// 90059 rcr     ax, 1 ;~ 2C6F:0384
cs=0x2c6f;eip=0x000386; 	T(DEC(cl));	// 90060 dec     cl ;~ 2C6F:0386
cs=0x2c6f;eip=0x000388; 	J(JNZ(loc_3b052));	// 90061 jnz     short loc_3B052 ;~ 2C6F:0388
cs=0x2c6f;eip=0x00038a; 	T(ADD(ax, 1));	// 90062 add     ax, 1 ;~ 2C6F:038A
cs=0x2c6f;eip=0x00038d; 	T(ADC(dx, 0));	// 90063 adc     dx, 0 ;~ 2C6F:038D
cs=0x2c6f;eip=0x000390; 	X(MOV(*(dw*)(raddr(ss,bp+var_34)), ax));	// 90064 mov     [bp+var_34], ax ;~ 2C6F:0390
cs=0x2c6f;eip=0x000393; 	X(MOV(*(dw*)(raddr(ss,bp+var_32)), dx));	// 90065 mov     [bp+var_32], dx ;~ 2C6F:0393
cs=0x2c6f;eip=0x000396; 	J(JMP(loc_3b074));	// 90066 jmp     short loc_3B074 ;~ 2C6F:0396
loc_3b068:
	// 9952 
cs=0x2c6f;eip=0x000398; 	T(MOV(al, 4));	// 90070 mov     al, 4 ;~ 2C6F:0398
cs=0x2c6f;eip=0x00039a; 	X(PUSH(ax));	// 90071 push    ax ;~ 2C6F:039A
cs=0x2c6f;eip=0x00039b; 	T(ax = bp+var_34);	// 90072 lea     ax, [bp+var_34] ;~ 2C6F:039B
cs=0x2c6f;eip=0x00039e; 	X(PUSH(ax));	// 90073 push    ax ;~ 2C6F:039E
cs=0x2c6f;eip=0x00039f; 	J(CALLF(unknown_libname_4,0));	// 90074 call    unknown_libname_4 ; MS Quick C v1.0/v2.01 & MSC v5.1 DOS run-time & graphic ;~ 2C6F:039F
loc_3b074:
	// 9953 
cs=0x2c6f;eip=0x0003a4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_34))));	// 90077 push    [bp+var_34] ;~ 2C6F:03A4
cs=0x2c6f;eip=0x0003a7; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 90078 push    [bp+arg_6] ;~ 2C6F:03A7
cs=0x2c6f;eip=0x0003aa; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 90079 push    [bp+arg_4] ;~ 2C6F:03AA
cs=0x2c6f;eip=0x0003ad; 	J(CALLF(mmgr_resize_memory,0));	// 90080 call    mmgr_resize_memory ;~ 2C6F:03AD
cs=0x2c6f;eip=0x0003b2; 	T(ADD(sp, 6));	// 90081 add     sp, 6 ;~ 2C6F:03B2
cs=0x2c6f;eip=0x0003b5; 	X(POP(si));	// 90082 pop     si ;~ 2C6F:03B5
cs=0x2c6f;eip=0x0003b6; 	X(POP(di));	// 90083 pop     di ;~ 2C6F:03B6
cs=0x2c6f;eip=0x0003b7; 	T(MOV(sp, bp));	// 90084 mov     sp, bp ;~ 2C6F:03B7
cs=0x2c6f;eip=0x0003b9; 	X(POP(bp));	// 90085 pop     bp ;~ 2C6F:03B9
cs=0x2c6f;eip=0x0003ba; 	J(RETF(0));	// 90086 retf ;~ 2C6F:03BA

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_3ade4: 	goto loc_3ade4;
        case m2c::kloc_3adf9: 	goto loc_3adf9;
        case m2c::kloc_3ae2c: 	goto loc_3ae2c;
        case m2c::kloc_3ae4c: 	goto loc_3ae4c;
        case m2c::kloc_3ae74: 	goto loc_3ae74;
        case m2c::kloc_3ae8e: 	goto loc_3ae8e;
        case m2c::kloc_3ae91: 	goto loc_3ae91;
        case m2c::kloc_3aeac: 	goto loc_3aeac;
        case m2c::kloc_3aec1: 	goto loc_3aec1;
        case m2c::kloc_3aec9: 	goto loc_3aec9;
        case m2c::kloc_3aed6: 	goto loc_3aed6;
        case m2c::kloc_3aefb: 	goto loc_3aefb;
        case m2c::kloc_3af2e: 	goto loc_3af2e;
        case m2c::kloc_3af3f: 	goto loc_3af3f;
        case m2c::kloc_3af45: 	goto loc_3af45;
        case m2c::kloc_3af4e: 	goto loc_3af4e;
        case m2c::kloc_3af5b: 	goto loc_3af5b;
        case m2c::kloc_3af66: 	goto loc_3af66;
        case m2c::kloc_3afe4: 	goto loc_3afe4;
        case m2c::kloc_3b020: 	goto loc_3b020;
        case m2c::kloc_3b052: 	goto loc_3b052;
        case m2c::kloc_3b068: 	goto loc_3b068;
        case m2c::kloc_3b074: 	goto loc_3b074;
        case m2c::kparse_shape2d: 	goto parse_shape2d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool parse_shape2d_helper3(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    parse_shape2d_helper3:
    _begin:
#undef var_4
#define var_4 -4
	// 90098 var_4           = byte ptr -4 ;~ 2C6F:03BC
#undef var_2
#define var_2 -2
	// 90099 var_2           = word ptr -2 ;~ 2C6F:03BC
#undef arg_0
#define arg_0 6
	// 90100 arg_0           = dword ptr  6 ;~ 2C6F:03BC
cs=0x2c6f;eip=0x0003bc; 	X(PUSH(bp));	// 90102 push    bp ;~ 2C6F:03BC
cs=0x2c6f;eip=0x0003bd; 	T(MOV(bp, sp));	// 90103 mov     bp, sp ;~ 2C6F:03BD
cs=0x2c6f;eip=0x0003bf; 	T(SUB(sp, 4));	// 90104 sub     sp, 4 ;~ 2C6F:03BF
cs=0x2c6f;eip=0x0003c2; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90105 les     bx, [bp+arg_0] ;~ 2C6F:03C2
cs=0x2c6f;eip=0x0003c5; 	T(MOV(al, *(raddr(es,bx))));	// 90106 mov     al, es:[bx] ;~ 2C6F:03C5
cs=0x2c6f;eip=0x0003c8; 	X(MOV(*(raddr(ss,bp+var_4)), al));	// 90107 mov     [bp+var_4], al ;~ 2C6F:03C8
cs=0x2c6f;eip=0x0003cb; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 90108 mov     [bp+var_2], 0 ;~ 2C6F:03CB
cs=0x2c6f;eip=0x0003d0; 	J(JMP(loc_3b0a5));	// 90109 jmp     short loc_3B0A5 ;~ 2C6F:03D0
loc_3b0a2:
	// 9954 
cs=0x2c6f;eip=0x0003d2; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 90113 inc     [bp+var_2] ;~ 2C6F:03D2
loc_3b0a5:
	// 9955 
cs=0x2c6f;eip=0x0003d5; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90116 les     bx, [bp+arg_0] ;~ 2C6F:03D5
cs=0x2c6f;eip=0x0003d8; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 90117 inc     word ptr [bp+arg_0] ;~ 2C6F:03D8
cs=0x2c6f;eip=0x0003db; 	T(MOV(al, *(raddr(ss,bp+var_4))));	// 90118 mov     al, [bp+var_4] ;~ 2C6F:03DB
cs=0x2c6f;eip=0x0003de; 	T(CMP(*(raddr(es,bx)), al));	// 90119 cmp     es:[bx], al ;~ 2C6F:03DE
cs=0x2c6f;eip=0x0003e1; 	J(JZ(loc_3b0a2));	// 90120 jz      short loc_3B0A2 ;~ 2C6F:03E1
cs=0x2c6f;eip=0x0003e3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 90121 mov     ax, [bp+var_2] ;~ 2C6F:03E3
cs=0x2c6f;eip=0x0003e6; 	T(MOV(sp, bp));	// 90122 mov     sp, bp ;~ 2C6F:03E6
cs=0x2c6f;eip=0x0003e8; 	X(POP(bp));	// 90123 pop     bp ;~ 2C6F:03E8
cs=0x2c6f;eip=0x0003e9; 	J(RETF(0));	// 90124 retf ;~ 2C6F:03E9

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_3b0a2: 	goto loc_3b0a2;
        case m2c::kloc_3b0a5: 	goto loc_3b0a5;
        case m2c::kparse_shape2d_helper3: 	goto parse_shape2d_helper3;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

