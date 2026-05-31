/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool _group24(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group24:
    _begin:
file_load_shape2d_res_fatal:
	// 89633 
#undef arg_0
#define arg_0 6
	// 89635 arg_0           = word ptr  6 ;~ 2C6F:0008
ret_2c6f_8:
	// 10534 
cs=0x2c6f;eip=0x000008; 	X(PUSH(bp));	// 89637 push    bp ;~ 2C6F:0008
cs=0x2c6f;eip=0x000009; 	T(MOV(bp, sp));	// 89638 mov     bp, sp ;~ 2C6F:0009
cs=0x2c6f;eip=0x00000b; 	T(MOV(ax, 1));	// 89639 mov     ax, 1 ;~ 2C6F:000B
cs=0x2c6f;eip=0x00000e; 	X(PUSH(ax));	// 89640 push    ax ;~ 2C6F:000E
cs=0x2c6f;eip=0x00000f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 89641 push    [bp+arg_0] ;~ 2C6F:000F
cs=0x2c6f;eip=0x000012; 	X(PUSH(cs));	// 89642 push    cs ;~ 2C6F:0012
cs=0x2c6f;eip=0x000013; 	R(CALL(file_load_shape2d_res,0));	// 89643 call    near ptr file_load_shape2d_res ;~ 2C6F:0013
cs=0x2c6f;eip=0x000016; 	T(ADD(sp, 4));	// 89644 add     sp, 4 ;~ 2C6F:0016
cs=0x2c6f;eip=0x000019; 	X(POP(bp));	// 89645 pop     bp ;~ 2C6F:0019
cs=0x2c6f;eip=0x00001a; 	R(RETF(0));	// 89646 retf ;~ 2C6F:001A
file_load_shape2d_res_nofatal:
	// 89656 
#undef arg_0
#define arg_0 6
	// 89658 arg_0           = word ptr  6 ;~ 2C6F:001C
ret_2c6f_1c:
	// 10535 
cs=0x2c6f;eip=0x00001c; 	X(PUSH(bp));	// 89660 push    bp ;~ 2C6F:001C
cs=0x2c6f;eip=0x00001d; 	T(MOV(bp, sp));	// 89661 mov     bp, sp ;~ 2C6F:001D
cs=0x2c6f;eip=0x00001f; 	T(SUB(ax, ax));	// 89662 sub     ax, ax ;~ 2C6F:001F
cs=0x2c6f;eip=0x000021; 	X(PUSH(ax));	// 89663 push    ax ;~ 2C6F:0021
cs=0x2c6f;eip=0x000022; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 89664 push    [bp+arg_0] ;~ 2C6F:0022
cs=0x2c6f;eip=0x000025; 	X(PUSH(cs));	// 89665 push    cs ;~ 2C6F:0025
cs=0x2c6f;eip=0x000026; 	R(CALL(file_load_shape2d_res,0));	// 89666 call    near ptr file_load_shape2d_res ;~ 2C6F:0026
cs=0x2c6f;eip=0x000029; 	T(ADD(sp, 4));	// 89667 add     sp, 4 ;~ 2C6F:0029
cs=0x2c6f;eip=0x00002c; 	X(POP(bp));	// 89668 pop     bp ;~ 2C6F:002C
cs=0x2c6f;eip=0x00002d; 	R(RETF(0));	// 89669 retf ;~ 2C6F:002D
file_load_shape2d_res:
	// 89677 
#undef var_a
#define var_a -0x0A
	// 89680 var_A           = word ptr -0Ah ;~ 2C6F:002E
#undef var_8
#define var_8 -8
	// 89681 var_8           = word ptr -8 ;~ 2C6F:002E
#undef var_6
#define var_6 -6
	// 89682 var_6           = word ptr -6 ;~ 2C6F:002E
#undef var_4
#define var_4 -4
	// 89683 var_4           = word ptr -4 ;~ 2C6F:002E
#undef var_2
#define var_2 -2
	// 89684 var_2           = word ptr -2 ;~ 2C6F:002E
#undef arg_0
#define arg_0 6
	// 89685 arg_0           = word ptr  6 ;~ 2C6F:002E
#undef arg_2
#define arg_2 8
	// 89686 arg_2           = word ptr  8 ;~ 2C6F:002E
ret_2c6f_2e:
	// 10536 
cs=0x2c6f;eip=0x00002e; 	X(PUSH(bp));	// 89688 push    bp ;~ 2C6F:002E
cs=0x2c6f;eip=0x00002f; 	T(MOV(bp, sp));	// 89689 mov     bp, sp ;~ 2C6F:002F
cs=0x2c6f;eip=0x000031; 	T(SUB(sp, 0x0A));	// 89690 sub     sp, 0Ah ;~ 2C6F:0031
cs=0x2c6f;eip=0x000034; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 89691 push    [bp+arg_0] ;~ 2C6F:0034
cs=0x2c6f;eip=0x000037; 	R(CALLF(mmgr_path_to_name,0));	// 89692 call    mmgr_path_to_name ;~ 2C6F:0037
cs=0x2c6f;eip=0x00003c; 	T(ADD(sp, 2));	// 89693 add     sp, 2 ;~ 2C6F:003C
cs=0x2c6f;eip=0x00003f; 	X(PUSH(ax));	// 89694 push    ax ;~ 2C6F:003F
cs=0x2c6f;eip=0x000040; 	R(CALLF(mmgr_get_chunk_by_name,0));	// 89695 call    mmgr_get_chunk_by_name ;~ 2C6F:0040
cs=0x2c6f;eip=0x000045; 	T(ADD(sp, 2));	// 89696 add     sp, 2 ;~ 2C6F:0045
cs=0x2c6f;eip=0x000048; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 89697 mov     [bp+var_8], ax ;~ 2C6F:0048
cs=0x2c6f;eip=0x00004b; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 89698 mov     [bp+var_6], dx ;~ 2C6F:004B
cs=0x2c6f;eip=0x00004e; 	T(OR(ax, dx));	// 89699 or      ax, dx ;~ 2C6F:004E
cs=0x2c6f;eip=0x000050; 	R(JZ(loc_3ad2a));	// 89700 jz      short loc_3AD2A ;~ 2C6F:0050
cs=0x2c6f;eip=0x000052; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 89701 mov     ax, [bp+var_8] ;~ 2C6F:0052
cs=0x2c6f;eip=0x000055; 	T(MOV(sp, bp));	// 89702 mov     sp, bp ;~ 2C6F:0055
cs=0x2c6f;eip=0x000057; 	X(POP(bp));	// 89703 pop     bp ;~ 2C6F:0057
cs=0x2c6f;eip=0x000058; 	R(RETF(0));	// 89704 retf ;~ 2C6F:0058
loc_3ad2a:
	// 10537 
cs=0x2c6f;eip=0x00005a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 89709 push    [bp+arg_2] ;~ 2C6F:005A
cs=0x2c6f;eip=0x00005d; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 89710 push    [bp+arg_0] ;~ 2C6F:005D
cs=0x2c6f;eip=0x000060; 	R(CALLF(file_load_shape2d,0));	// 89711 call    file_load_shape2d ;~ 2C6F:0060
cs=0x2c6f;eip=0x000065; 	T(ADD(sp, 4));	// 89712 add     sp, 4 ;~ 2C6F:0065
cs=0x2c6f;eip=0x000068; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 89713 mov     [bp+var_4], ax ;~ 2C6F:0068
cs=0x2c6f;eip=0x00006b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 89714 mov     [bp+var_2], dx ;~ 2C6F:006B
cs=0x2c6f;eip=0x00006e; 	T(OR(ax, dx));	// 89715 or      ax, dx ;~ 2C6F:006E
cs=0x2c6f;eip=0x000070; 	R(JNZ(loc_3ad4a));	// 89716 jnz     short loc_3AD4A ;~ 2C6F:0070
cs=0x2c6f;eip=0x000072; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 89717 mov     ax, [bp+var_4] ;~ 2C6F:0072
cs=0x2c6f;eip=0x000075; 	T(MOV(sp, bp));	// 89718 mov     sp, bp ;~ 2C6F:0075
cs=0x2c6f;eip=0x000077; 	X(POP(bp));	// 89719 pop     bp ;~ 2C6F:0077
cs=0x2c6f;eip=0x000078; 	R(RETF(0));	// 89720 retf ;~ 2C6F:0078
loc_3ad4a:
	// 10538 
cs=0x2c6f;eip=0x00007a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 89725 push    [bp+var_2] ;~ 2C6F:007A
cs=0x2c6f;eip=0x00007d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 89726 push    [bp+var_4] ;~ 2C6F:007D
cs=0x2c6f;eip=0x000080; 	R(CALLF(mmgr_get_chunk_size,0));	// 89727 call    mmgr_get_chunk_size ;~ 2C6F:0080
cs=0x2c6f;eip=0x000085; 	T(ADD(sp, 4));	// 89728 add     sp, 4 ;~ 2C6F:0085
cs=0x2c6f;eip=0x000088; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 89729 mov     [bp+var_A], ax ;~ 2C6F:0088
cs=0x2c6f;eip=0x00008b; 	X(PUSH(ax));	// 89730 push    ax ;~ 2C6F:008B
cs=0x2c6f;eip=0x00008c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 89731 push    [bp+arg_0] ;~ 2C6F:008C
cs=0x2c6f;eip=0x00008f; 	R(CALLF(mmgr_alloc_pages,0));	// 89732 call    mmgr_alloc_pages ;~ 2C6F:008F
cs=0x2c6f;eip=0x000094; 	T(ADD(sp, 4));	// 89733 add     sp, 4 ;~ 2C6F:0094
cs=0x2c6f;eip=0x000097; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 89734 mov     [bp+var_8], ax ;~ 2C6F:0097
cs=0x2c6f;eip=0x00009a; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 89735 mov     [bp+var_6], dx ;~ 2C6F:009A
cs=0x2c6f;eip=0x00009d; 	X(PUSH(dx));	// 89736 push    dx ;~ 2C6F:009D
cs=0x2c6f;eip=0x00009e; 	X(PUSH(ax));	// 89737 push    ax ;~ 2C6F:009E
cs=0x2c6f;eip=0x00009f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 89738 push    [bp+var_2] ;~ 2C6F:009F
cs=0x2c6f;eip=0x0000a2; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 89739 push    [bp+var_4] ;~ 2C6F:00A2
cs=0x2c6f;eip=0x0000a5; 	X(PUSH(cs));	// 89740 push    cs ;~ 2C6F:00A5
cs=0x2c6f;eip=0x0000a6; 	R(CALL(parse_shape2d,0));	// 89741 call    near ptr parse_shape2d ;~ 2C6F:00A6
cs=0x2c6f;eip=0x0000a9; 	T(ADD(sp, 8));	// 89742 add     sp, 8 ;~ 2C6F:00A9
cs=0x2c6f;eip=0x0000ac; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 89743 push    [bp+var_2] ;~ 2C6F:00AC
cs=0x2c6f;eip=0x0000af; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 89744 push    [bp+var_4] ;~ 2C6F:00AF
cs=0x2c6f;eip=0x0000b2; 	R(CALLF(mmgr_release,0));	// 89745 call    mmgr_release ;~ 2C6F:00B2
cs=0x2c6f;eip=0x0000b7; 	T(ADD(sp, 4));	// 89746 add     sp, 4 ;~ 2C6F:00B7
cs=0x2c6f;eip=0x0000ba; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 89747 push    [bp+var_6] ;~ 2C6F:00BA
cs=0x2c6f;eip=0x0000bd; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 89748 push    [bp+var_8] ;~ 2C6F:00BD
cs=0x2c6f;eip=0x0000c0; 	R(CALLF(mmgr_op_unk,0));	// 89749 call    mmgr_op_unk ;~ 2C6F:00C0
cs=0x2c6f;eip=0x0000c5; 	T(ADD(sp, 4));	// 89750 add     sp, 4 ;~ 2C6F:00C5
cs=0x2c6f;eip=0x0000c8; 	T(MOV(sp, bp));	// 89751 mov     sp, bp ;~ 2C6F:00C8
cs=0x2c6f;eip=0x0000ca; 	X(POP(bp));	// 89752 pop     bp ;~ 2C6F:00CA
cs=0x2c6f;eip=0x0000cb; 	R(RETF(0));	// 89753 retf ;~ 2C6F:00CB
parse_shape2d:
	// 89761 
#undef var_38
#define var_38 -0x38
	// 89764 var_38          = dword ptr -38h ;~ 2C6F:00CC
#undef var_34
#define var_34 -0x34
	// 89765 var_34          = word ptr -34h ;~ 2C6F:00CC
#undef var_32
#define var_32 -0x32
	// 89766 var_32          = word ptr -32h ;~ 2C6F:00CC
#undef var_30
#define var_30 -0x30
	// 89767 var_30          = word ptr -30h ;~ 2C6F:00CC
#undef var_2e
#define var_2e -0x2E
	// 89768 var_2E          = dword ptr -2Eh ;~ 2C6F:00CC
#undef var_2a
#define var_2a -0x2A
	// 89769 var_2A          = word ptr -2Ah ;~ 2C6F:00CC
#undef var_28
#define var_28 -0x28
	// 89770 var_28          = word ptr -28h ;~ 2C6F:00CC
#undef var_26
#define var_26 -0x26
	// 89771 var_26          = word ptr -26h ;~ 2C6F:00CC
#undef var_24
#define var_24 -0x24
	// 89772 var_24          = word ptr -24h ;~ 2C6F:00CC
#undef var_1e
#define var_1e -0x1E
	// 89773 var_1E          = word ptr -1Eh ;~ 2C6F:00CC
#undef var_1c
#define var_1c -0x1C
	// 89774 var_1C          = dword ptr -1Ch ;~ 2C6F:00CC
#undef var_18
#define var_18 -0x18
	// 89775 var_18          = dword ptr -18h ;~ 2C6F:00CC
#undef var_14
#define var_14 -0x14
	// 89776 var_14          = word ptr -14h ;~ 2C6F:00CC
#undef var_12
#define var_12 -0x12
	// 89777 var_12          = word ptr -12h ;~ 2C6F:00CC
#undef var_10
#define var_10 -0x10
	// 89778 var_10          = word ptr -10h ;~ 2C6F:00CC
#undef var_e
#define var_e -0x0E
	// 89779 var_E           = word ptr -0Eh ;~ 2C6F:00CC
#undef var_c
#define var_c -0x0C
	// 89780 var_C           = dword ptr -0Ch ;~ 2C6F:00CC
#undef var_8
#define var_8 -8
	// 89781 var_8           = dword ptr -8 ;~ 2C6F:00CC
#undef var_4
#define var_4 -4
	// 89782 var_4           = dword ptr -4 ;~ 2C6F:00CC
#undef arg_0
#define arg_0 6
	// 89783 arg_0           = word ptr  6 ;~ 2C6F:00CC
#undef arg_2
#define arg_2 8
	// 89784 arg_2           = word ptr  8 ;~ 2C6F:00CC
#undef arg_4
#define arg_4 0x0A
	// 89785 arg_4           = word ptr  0Ah ;~ 2C6F:00CC
#undef arg_6
#define arg_6 0x0C
	// 89786 arg_6           = word ptr  0Ch ;~ 2C6F:00CC
ret_2c6f_cc:
	// 10539 
cs=0x2c6f;eip=0x0000cc; 	X(PUSH(bp));	// 89788 push    bp ;~ 2C6F:00CC
cs=0x2c6f;eip=0x0000cd; 	T(MOV(bp, sp));	// 89789 mov     bp, sp ;~ 2C6F:00CD
cs=0x2c6f;eip=0x0000cf; 	T(SUB(sp, 0x38));	// 89790 sub     sp, 38h ;~ 2C6F:00CF
cs=0x2c6f;eip=0x0000d2; 	X(PUSH(di));	// 89791 push    di ;~ 2C6F:00D2
cs=0x2c6f;eip=0x0000d3; 	X(PUSH(si));	// 89792 push    si ;~ 2C6F:00D3
cs=0x2c6f;eip=0x0000d4; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 89793 push    [bp+arg_2] ;~ 2C6F:00D4
cs=0x2c6f;eip=0x0000d7; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 89794 push    [bp+arg_0] ;~ 2C6F:00D7
cs=0x2c6f;eip=0x0000da; 	R(CALLF(file_get_res_shape_count,0));	// 89795 call    file_get_res_shape_count ;~ 2C6F:00DA
cs=0x2c6f;eip=0x0000df; 	T(ADD(sp, 4));	// 89796 add     sp, 4 ;~ 2C6F:00DF
cs=0x2c6f;eip=0x0000e2; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), ax));	// 89797 mov     [bp+var_28], ax ;~ 2C6F:00E2
cs=0x2c6f;eip=0x0000e5; 	T(SHL(ax, 1));	// 89798 shl     ax, 1 ;~ 2C6F:00E5
cs=0x2c6f;eip=0x0000e7; 	T(SHL(ax, 1));	// 89799 shl     ax, 1 ;~ 2C6F:00E7
cs=0x2c6f;eip=0x0000e9; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 89800 add     ax, [bp+arg_4] ;~ 2C6F:00E9
cs=0x2c6f;eip=0x0000ec; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 89801 mov     dx, [bp+arg_6] ;~ 2C6F:00EC
cs=0x2c6f;eip=0x0000ef; 	T(ADD(ax, 6));	// 89802 add     ax, 6 ;~ 2C6F:00EF
cs=0x2c6f;eip=0x0000f2; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_18))), ax));	// 89803 mov     word ptr [bp+var_18], ax ;~ 2C6F:00F2
cs=0x2c6f;eip=0x0000f5; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_18+2))), dx));	// 89804 mov     word ptr [bp+var_18+2], dx ;~ 2C6F:00F5
cs=0x2c6f;eip=0x0000f8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 89805 mov     ax, [bp+arg_4] ;~ 2C6F:00F8
cs=0x2c6f;eip=0x0000fb; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_1c))), ax));	// 89806 mov     word ptr [bp+var_1C], ax ;~ 2C6F:00FB
cs=0x2c6f;eip=0x0000fe; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_1c+2))), dx));	// 89807 mov     word ptr [bp+var_1C+2], dx ;~ 2C6F:00FE
cs=0x2c6f;eip=0x000101; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 89808 mov     ax, [bp+arg_0] ;~ 2C6F:0101
cs=0x2c6f;eip=0x000104; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 89809 mov     dx, [bp+arg_2] ;~ 2C6F:0104
cs=0x2c6f;eip=0x000107; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_38))), ax));	// 89810 mov     word ptr [bp+var_38], ax ;~ 2C6F:0107
cs=0x2c6f;eip=0x00010a; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_38+2))), dx));	// 89811 mov     word ptr [bp+var_38+2], dx ;~ 2C6F:010A
cs=0x2c6f;eip=0x00010d; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a)), 0));	// 89812 mov     [bp+var_2A], 0 ;~ 2C6F:010D
cs=0x2c6f;eip=0x000112; 	R(JMP(loc_3adf9));	// 89813 jmp     short loc_3ADF9 ;~ 2C6F:0112
loc_3ade4:
	// 10540 
cs=0x2c6f;eip=0x000114; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_38))));	// 89817 les     bx, [bp+var_38] ;~ 2C6F:0114
cs=0x2c6f;eip=0x000117; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_38)))));	// 89818 inc     word ptr [bp+var_38] ;~ 2C6F:0117
cs=0x2c6f;eip=0x00011a; 	T(MOV(al, *(raddr(es,bx))));	// 89819 mov     al, es:[bx] ;~ 2C6F:011A
cs=0x2c6f;eip=0x00011d; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_1c))));	// 89820 les     bx, [bp+var_1C] ;~ 2C6F:011D
cs=0x2c6f;eip=0x000120; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_1c)))));	// 89821 inc     word ptr [bp+var_1C] ;~ 2C6F:0120
cs=0x2c6f;eip=0x000123; 	X(MOV(*(raddr(es,bx)), al));	// 89822 mov     es:[bx], al ;~ 2C6F:0123
cs=0x2c6f;eip=0x000126; 	X(INC(*(dw*)(raddr(ss,bp+var_2a))));	// 89823 inc     [bp+var_2A] ;~ 2C6F:0126
loc_3adf9:
	// 10541 
cs=0x2c6f;eip=0x000129; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 89826 mov     ax, [bp+var_28] ;~ 2C6F:0129
cs=0x2c6f;eip=0x00012c; 	T(SHL(ax, 1));	// 89827 shl     ax, 1 ;~ 2C6F:012C
cs=0x2c6f;eip=0x00012e; 	T(SHL(ax, 1));	// 89828 shl     ax, 1 ;~ 2C6F:012E
cs=0x2c6f;eip=0x000130; 	T(ADD(ax, 6));	// 89829 add     ax, 6 ;~ 2C6F:0130
cs=0x2c6f;eip=0x000133; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_2a))));	// 89830 cmp     ax, [bp+var_2A] ;~ 2C6F:0133
cs=0x2c6f;eip=0x000136; 	R(JG(loc_3ade4));	// 89831 jg      short loc_3ADE4 ;~ 2C6F:0136
cs=0x2c6f;eip=0x000138; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 89832 mov     ax, [bp+var_28] ;~ 2C6F:0138
cs=0x2c6f;eip=0x00013b; 	T(MOV(cl, 3));	// 89833 mov     cl, 3 ;~ 2C6F:013B
cs=0x2c6f;eip=0x00013d; 	T(SHL(ax, cl));	// 89834 shl     ax, cl ;~ 2C6F:013D
cs=0x2c6f;eip=0x00013f; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 89835 add     ax, [bp+arg_4] ;~ 2C6F:013F
cs=0x2c6f;eip=0x000142; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 89836 mov     dx, [bp+arg_6] ;~ 2C6F:0142
cs=0x2c6f;eip=0x000145; 	T(ADD(ax, 6));	// 89837 add     ax, 6 ;~ 2C6F:0145
cs=0x2c6f;eip=0x000148; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8))), ax));	// 89838 mov     word ptr [bp+var_8], ax ;~ 2C6F:0148
cs=0x2c6f;eip=0x00014b; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8+2))), dx));	// 89839 mov     word ptr [bp+var_8+2], dx ;~ 2C6F:014B
cs=0x2c6f;eip=0x00014e; 	X(MOV(*(dw*)(raddr(ss,bp+var_26)), ax));	// 89840 mov     [bp+var_26], ax ;~ 2C6F:014E
cs=0x2c6f;eip=0x000151; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), dx));	// 89841 mov     [bp+var_24], dx ;~ 2C6F:0151
cs=0x2c6f;eip=0x000154; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a)), 0));	// 89842 mov     [bp+var_2A], 0 ;~ 2C6F:0154
cs=0x2c6f;eip=0x000159; 	R(JMP(loc_3af5b));	// 89843 jmp     loc_3AF5B ;~ 2C6F:0159
loc_3ae2c:
	// 10542 
cs=0x2c6f;eip=0x00015c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_2e +2)))));	// 89847 push    word ptr [bp+var_2E+2] ;~ 2C6F:015C
cs=0x2c6f;eip=0x00015f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_2e)))));	// 89848 push    word ptr [bp+var_2E] ;~ 2C6F:015F
cs=0x2c6f;eip=0x000162; 	X(PUSH(cs));	// 89849 push    cs ;~ 2C6F:0162
cs=0x2c6f;eip=0x000163; 	R(CALL(parse_shape2d_helper3,0));	// 89850 call    near ptr parse_shape2d_helper3 ;~ 2C6F:0163
cs=0x2c6f;eip=0x000166; 	T(ADD(sp, 4));	// 89851 add     sp, 4 ;~ 2C6F:0166
cs=0x2c6f;eip=0x000169; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 89852 mov     [bp+var_10], ax ;~ 2C6F:0169
cs=0x2c6f;eip=0x00016c; 	T(CMP(ax, 3));	// 89853 cmp     ax, 3 ;~ 2C6F:016C
cs=0x2c6f;eip=0x00016f; 	R(JG(loc_3ae4c));	// 89854 jg      short loc_3AE4C ;~ 2C6F:016F
cs=0x2c6f;eip=0x000171; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 89855 mov     ax, [bp+var_1E] ;~ 2C6F:0171
cs=0x2c6f;eip=0x000174; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), ax));	// 89856 cmp     [bp+var_E], ax ;~ 2C6F:0174
cs=0x2c6f;eip=0x000177; 	R(JNC(loc_3ae4c));	// 89857 jnb     short loc_3AE4C ;~ 2C6F:0177
cs=0x2c6f;eip=0x000179; 	R(JMP(loc_3af3f));	// 89858 jmp     loc_3AF3F ;~ 2C6F:0179
loc_3ae4c:
	// 10543 
cs=0x2c6f;eip=0x00017c; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), 0x7F));	// 89863 cmp     [bp+var_E], 7Fh ;~ 2C6F:017C
cs=0x2c6f;eip=0x000180; 	R(JG(loc_3ae74));	// 89864 jg      short loc_3AE74 ;~ 2C6F:0180
cs=0x2c6f;eip=0x000182; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), 0));	// 89865 cmp     [bp+var_E], 0 ;~ 2C6F:0182
cs=0x2c6f;eip=0x000186; 	R(JZ(loc_3aec9));	// 89866 jz      short loc_3AEC9 ;~ 2C6F:0186
cs=0x2c6f;eip=0x000188; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 89867 les     bx, [bp+var_8] ;~ 2C6F:0188
cs=0x2c6f;eip=0x00018b; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_8)))));	// 89868 inc     word ptr [bp+var_8] ;~ 2C6F:018B
cs=0x2c6f;eip=0x00018e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 89869 mov     ax, [bp+var_E] ;~ 2C6F:018E
cs=0x2c6f;eip=0x000191; 	T(NEG(ax));	// 89870 neg     ax ;~ 2C6F:0191
cs=0x2c6f;eip=0x000193; 	X(MOV(*(raddr(es,bx)), al));	// 89871 mov     es:[bx], al ;~ 2C6F:0193
cs=0x2c6f;eip=0x000196; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 89872 mov     ax, [bp+var_E] ;~ 2C6F:0196
cs=0x2c6f;eip=0x000199; 	X(SUB(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 89873 sub     [bp+var_1E], ax ;~ 2C6F:0199
cs=0x2c6f;eip=0x00019c; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), 0));	// 89874 mov     [bp+var_30], 0 ;~ 2C6F:019C
cs=0x2c6f;eip=0x0001a1; 	R(JMP(loc_3aec1));	// 89875 jmp     short loc_3AEC1 ;~ 2C6F:01A1
loc_3ae74:
	// 10544 
cs=0x2c6f;eip=0x0001a4; 	X(SUB(*(dw*)(raddr(ss,bp+var_e)), 0x7F));	// 89880 sub     [bp+var_E], 7Fh ;~ 2C6F:01A4
cs=0x2c6f;eip=0x0001a8; 	X(SUB(*(dw*)(raddr(ss,bp+var_1e)), 0x7F));	// 89881 sub     [bp+var_1E], 7Fh ;~ 2C6F:01A8
cs=0x2c6f;eip=0x0001ac; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 89882 les     bx, [bp+var_8] ;~ 2C6F:01AC
cs=0x2c6f;eip=0x0001af; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_8)))));	// 89883 inc     word ptr [bp+var_8] ;~ 2C6F:01AF
cs=0x2c6f;eip=0x0001b2; 	X(MOV(*(raddr(es,bx)), 0x81));	// 89884 mov     byte ptr es:[bx], 81h ; '' ;~ 2C6F:01B2
cs=0x2c6f;eip=0x0001b6; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), 0));	// 89885 mov     [bp+var_30], 0 ;~ 2C6F:01B6
cs=0x2c6f;eip=0x0001bb; 	R(JMP(loc_3ae91));	// 89886 jmp     short loc_3AE91 ;~ 2C6F:01BB
loc_3ae8e:
	// 10545 
cs=0x2c6f;eip=0x0001be; 	X(INC(*(dw*)(raddr(ss,bp+var_30))));	// 89891 inc     [bp+var_30] ;~ 2C6F:01BE
loc_3ae91:
	// 10546 
cs=0x2c6f;eip=0x0001c1; 	T(CMP(*(dw*)(raddr(ss,bp+var_30)), 0x7F));	// 89894 cmp     [bp+var_30], 7Fh ;~ 2C6F:01C1
cs=0x2c6f;eip=0x0001c5; 	R(JGE(loc_3ae4c));	// 89895 jge     short loc_3AE4C ;~ 2C6F:01C5
cs=0x2c6f;eip=0x0001c7; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 89896 les     bx, [bp+var_4] ;~ 2C6F:01C7
cs=0x2c6f;eip=0x0001ca; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 89897 inc     word ptr [bp+var_4] ;~ 2C6F:01CA
cs=0x2c6f;eip=0x0001cd; 	T(MOV(al, *(raddr(es,bx))));	// 89898 mov     al, es:[bx] ;~ 2C6F:01CD
cs=0x2c6f;eip=0x0001d0; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 89899 les     bx, [bp+var_8] ;~ 2C6F:01D0
cs=0x2c6f;eip=0x0001d3; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_8)))));	// 89900 inc     word ptr [bp+var_8] ;~ 2C6F:01D3
cs=0x2c6f;eip=0x0001d6; 	X(MOV(*(raddr(es,bx)), al));	// 89901 mov     es:[bx], al ;~ 2C6F:01D6
cs=0x2c6f;eip=0x0001d9; 	R(JMP(loc_3ae8e));	// 89902 jmp     short loc_3AE8E ;~ 2C6F:01D9
loc_3aeac:
	// 10547 
cs=0x2c6f;eip=0x0001dc; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 89907 les     bx, [bp+var_4] ;~ 2C6F:01DC
cs=0x2c6f;eip=0x0001df; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 89908 inc     word ptr [bp+var_4] ;~ 2C6F:01DF
cs=0x2c6f;eip=0x0001e2; 	T(MOV(al, *(raddr(es,bx))));	// 89909 mov     al, es:[bx] ;~ 2C6F:01E2
cs=0x2c6f;eip=0x0001e5; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 89910 les     bx, [bp+var_8] ;~ 2C6F:01E5
cs=0x2c6f;eip=0x0001e8; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_8)))));	// 89911 inc     word ptr [bp+var_8] ;~ 2C6F:01E8
cs=0x2c6f;eip=0x0001eb; 	X(MOV(*(raddr(es,bx)), al));	// 89912 mov     es:[bx], al ;~ 2C6F:01EB
cs=0x2c6f;eip=0x0001ee; 	X(INC(*(dw*)(raddr(ss,bp+var_30))));	// 89913 inc     [bp+var_30] ;~ 2C6F:01EE
loc_3aec1:
	// 10548 
cs=0x2c6f;eip=0x0001f1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 89916 mov     ax, [bp+var_E] ;~ 2C6F:01F1
cs=0x2c6f;eip=0x0001f4; 	T(CMP(*(dw*)(raddr(ss,bp+var_30)), ax));	// 89917 cmp     [bp+var_30], ax ;~ 2C6F:01F4
cs=0x2c6f;eip=0x0001f7; 	R(JL(loc_3aeac));	// 89918 jl      short loc_3AEAC ;~ 2C6F:01F7
loc_3aec9:
	// 10549 
cs=0x2c6f;eip=0x0001f9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 89921 mov     ax, [bp+var_1E] ;~ 2C6F:01F9
cs=0x2c6f;eip=0x0001fc; 	T(CMP(*(dw*)(raddr(ss,bp+var_10)), ax));	// 89922 cmp     [bp+var_10], ax ;~ 2C6F:01FC
cs=0x2c6f;eip=0x0001ff; 	R(JBE(loc_3aefb));	// 89923 jbe     short loc_3AEFB ;~ 2C6F:01FF
cs=0x2c6f;eip=0x000201; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 89924 mov     [bp+var_10], ax ;~ 2C6F:0201
cs=0x2c6f;eip=0x000204; 	R(JMP(loc_3aefb));	// 89925 jmp     short loc_3AEFB ;~ 2C6F:0204
loc_3aed6:
	// 10550 
cs=0x2c6f;eip=0x000206; 	X(SUB(*(dw*)(raddr(ss,bp+var_10)), 0x7F));	// 89929 sub     [bp+var_10], 7Fh ;~ 2C6F:0206
cs=0x2c6f;eip=0x00020a; 	X(SUB(*(dw*)(raddr(ss,bp+var_1e)), 0x7F));	// 89930 sub     [bp+var_1E], 7Fh ;~ 2C6F:020A
cs=0x2c6f;eip=0x00020e; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 89931 les     bx, [bp+var_8] ;~ 2C6F:020E
cs=0x2c6f;eip=0x000211; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_8)))));	// 89932 inc     word ptr [bp+var_8] ;~ 2C6F:0211
cs=0x2c6f;eip=0x000214; 	X(MOV(*(raddr(es,bx)), 0x7F));	// 89933 mov     byte ptr es:[bx], 7Fh ;~ 2C6F:0214
cs=0x2c6f;eip=0x000218; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_2e))));	// 89934 les     bx, [bp+var_2E] ;~ 2C6F:0218
cs=0x2c6f;eip=0x00021b; 	T(MOV(al, *(raddr(es,bx))));	// 89935 mov     al, es:[bx] ;~ 2C6F:021B
cs=0x2c6f;eip=0x00021e; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 89936 les     bx, [bp+var_8] ;~ 2C6F:021E
cs=0x2c6f;eip=0x000221; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_8)))));	// 89937 inc     word ptr [bp+var_8] ;~ 2C6F:0221
cs=0x2c6f;eip=0x000224; 	X(MOV(*(raddr(es,bx)), al));	// 89938 mov     es:[bx], al ;~ 2C6F:0224
cs=0x2c6f;eip=0x000227; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_2e))), 0x7F));	// 89939 add     word ptr [bp+var_2E], 7Fh ;~ 2C6F:0227
loc_3aefb:
	// 10551 
cs=0x2c6f;eip=0x00022b; 	T(CMP(*(dw*)(raddr(ss,bp+var_10)), 0x7F));	// 89943 cmp     [bp+var_10], 7Fh ;~ 2C6F:022B
cs=0x2c6f;eip=0x00022f; 	R(JG(loc_3aed6));	// 89944 jg      short loc_3AED6 ;~ 2C6F:022F
cs=0x2c6f;eip=0x000231; 	T(CMP(*(dw*)(raddr(ss,bp+var_10)), 3));	// 89945 cmp     [bp+var_10], 3 ;~ 2C6F:0231
cs=0x2c6f;eip=0x000235; 	R(JLE(loc_3af2e));	// 89946 jle     short loc_3AF2E ;~ 2C6F:0235
cs=0x2c6f;eip=0x000237; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 89947 les     bx, [bp+var_8] ;~ 2C6F:0237
cs=0x2c6f;eip=0x00023a; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_8)))));	// 89948 inc     word ptr [bp+var_8] ;~ 2C6F:023A
cs=0x2c6f;eip=0x00023d; 	T(MOV(al, *(db*)(raddr(ss,bp+var_10))));	// 89949 mov     al, byte ptr [bp+var_10] ;~ 2C6F:023D
cs=0x2c6f;eip=0x000240; 	X(MOV(*(raddr(es,bx)), al));	// 89950 mov     es:[bx], al ;~ 2C6F:0240
cs=0x2c6f;eip=0x000243; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 89951 mov     ax, [bp+var_10] ;~ 2C6F:0243
cs=0x2c6f;eip=0x000246; 	X(SUB(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 89952 sub     [bp+var_1E], ax ;~ 2C6F:0246
cs=0x2c6f;eip=0x000249; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_2e))));	// 89953 les     bx, [bp+var_2E] ;~ 2C6F:0249
cs=0x2c6f;eip=0x00024c; 	T(MOV(al, *(raddr(es,bx))));	// 89954 mov     al, es:[bx] ;~ 2C6F:024C
cs=0x2c6f;eip=0x00024f; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 89955 les     bx, [bp+var_8] ;~ 2C6F:024F
cs=0x2c6f;eip=0x000252; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_8)))));	// 89956 inc     word ptr [bp+var_8] ;~ 2C6F:0252
cs=0x2c6f;eip=0x000255; 	X(MOV(*(raddr(es,bx)), al));	// 89957 mov     es:[bx], al ;~ 2C6F:0255
cs=0x2c6f;eip=0x000258; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 89958 mov     ax, [bp+var_10] ;~ 2C6F:0258
cs=0x2c6f;eip=0x00025b; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_2e))), ax));	// 89959 add     word ptr [bp+var_2E], ax ;~ 2C6F:025B
loc_3af2e:
	// 10552 
cs=0x2c6f;eip=0x00025e; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_2e)))));	// 89962 mov     ax, word ptr [bp+var_2E] ;~ 2C6F:025E
cs=0x2c6f;eip=0x000261; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_2e +2)))));	// 89963 mov     dx, word ptr [bp+var_2E+2] ;~ 2C6F:0261
cs=0x2c6f;eip=0x000264; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 89964 mov     word ptr [bp+var_4], ax ;~ 2C6F:0264
cs=0x2c6f;eip=0x000267; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 89965 mov     word ptr [bp+var_4+2], dx ;~ 2C6F:0267
cs=0x2c6f;eip=0x00026a; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0));	// 89966 mov     [bp+var_E], 0 ;~ 2C6F:026A
loc_3af3f:
	// 10553 
cs=0x2c6f;eip=0x00026f; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_2e)))));	// 89969 inc     word ptr [bp+var_2E] ;~ 2C6F:026F
cs=0x2c6f;eip=0x000272; 	X(INC(*(dw*)(raddr(ss,bp+var_e))));	// 89970 inc     [bp+var_E] ;~ 2C6F:0272
loc_3af45:
	// 10554 
cs=0x2c6f;eip=0x000275; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 89973 cmp     [bp+var_1E], 0 ;~ 2C6F:0275
cs=0x2c6f;eip=0x000279; 	R(JZ(loc_3af4e));	// 89974 jz      short loc_3AF4E ;~ 2C6F:0279
cs=0x2c6f;eip=0x00027b; 	R(JMP(loc_3ae2c));	// 89975 jmp     loc_3AE2C ;~ 2C6F:027B
loc_3af4e:
	// 10555 
cs=0x2c6f;eip=0x00027e; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 89979 les     bx, [bp+var_8] ;~ 2C6F:027E
cs=0x2c6f;eip=0x000281; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_8)))));	// 89980 inc     word ptr [bp+var_8] ;~ 2C6F:0281
cs=0x2c6f;eip=0x000284; 	X(MOV(*(raddr(es,bx)), 0));	// 89981 mov     byte ptr es:[bx], 0 ;~ 2C6F:0284
cs=0x2c6f;eip=0x000288; 	X(INC(*(dw*)(raddr(ss,bp+var_2a))));	// 89982 inc     [bp+var_2A] ;~ 2C6F:0288
loc_3af5b:
	// 10556 
cs=0x2c6f;eip=0x00028b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 89985 mov     ax, [bp+var_28] ;~ 2C6F:028B
cs=0x2c6f;eip=0x00028e; 	T(CMP(*(dw*)(raddr(ss,bp+var_2a)), ax));	// 89986 cmp     [bp+var_2A], ax ;~ 2C6F:028E
cs=0x2c6f;eip=0x000291; 	R(JL(loc_3af66));	// 89987 jl      short loc_3AF66 ;~ 2C6F:0291
cs=0x2c6f;eip=0x000293; 	R(JMP(loc_3b020));	// 89988 jmp     loc_3B020 ;~ 2C6F:0293
loc_3af66:
	// 10557 
cs=0x2c6f;eip=0x000296; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2a))));	// 89992 push    [bp+var_2A] ;~ 2C6F:0296
cs=0x2c6f;eip=0x000299; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 89993 push    [bp+arg_2] ;~ 2C6F:0299
cs=0x2c6f;eip=0x00029c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 89994 push    [bp+arg_0] ;~ 2C6F:029C
cs=0x2c6f;eip=0x00029f; 	R(CALLF(file_get_shape2d,0));	// 89995 call    file_get_shape2d ;~ 2C6F:029F
cs=0x2c6f;eip=0x0002a4; 	T(ADD(sp, 6));	// 89996 add     sp, 6 ;~ 2C6F:02A4
cs=0x2c6f;eip=0x0002a7; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c))), ax));	// 89997 mov     word ptr [bp+var_C], ax ;~ 2C6F:02A7
cs=0x2c6f;eip=0x0002aa; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c+2))), dx));	// 89998 mov     word ptr [bp+var_C+2], dx ;~ 2C6F:02AA
cs=0x2c6f;eip=0x0002ad; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_8+2)))));	// 89999 push    word ptr [bp+var_8+2] ;~ 2C6F:02AD
cs=0x2c6f;eip=0x0002b0; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_8)))));	// 90000 push    word ptr [bp+var_8] ;~ 2C6F:02B0
cs=0x2c6f;eip=0x0002b3; 	R(CALLF(parse_shape2d_helper,0));	// 90001 call    parse_shape2d_helper ;~ 2C6F:02B3
cs=0x2c6f;eip=0x0002b8; 	T(ADD(sp, 4));	// 90002 add     sp, 4 ;~ 2C6F:02B8
cs=0x2c6f;eip=0x0002bb; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 90003 mov     [bp+var_14], ax ;~ 2C6F:02BB
cs=0x2c6f;eip=0x0002be; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), dx));	// 90004 mov     [bp+var_12], dx ;~ 2C6F:02BE
cs=0x2c6f;eip=0x0002c1; 	X(PUSH(dx));	// 90005 push    dx ;~ 2C6F:02C1
cs=0x2c6f;eip=0x0002c2; 	X(PUSH(ax));	// 90006 push    ax ;~ 2C6F:02C2
cs=0x2c6f;eip=0x0002c3; 	R(CALLF(parse_shape2d_helper2,0));	// 90007 call    parse_shape2d_helper2 ;~ 2C6F:02C3
cs=0x2c6f;eip=0x0002c8; 	T(ADD(sp, 4));	// 90008 add     sp, 4 ;~ 2C6F:02C8
cs=0x2c6f;eip=0x0002cb; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8))), ax));	// 90009 mov     word ptr [bp+var_8], ax ;~ 2C6F:02CB
cs=0x2c6f;eip=0x0002ce; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8+2))), dx));	// 90010 mov     word ptr [bp+var_8+2], dx ;~ 2C6F:02CE
cs=0x2c6f;eip=0x0002d1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_24))));	// 90011 push    [bp+var_24] ;~ 2C6F:02D1
cs=0x2c6f;eip=0x0002d4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_26))));	// 90012 push    [bp+var_26] ;~ 2C6F:02D4
cs=0x2c6f;eip=0x0002d7; 	R(CALLF(parse_shape2d_helper,0));	// 90013 call    parse_shape2d_helper ;~ 2C6F:02D7
cs=0x2c6f;eip=0x0002dc; 	T(ADD(sp, 4));	// 90014 add     sp, 4 ;~ 2C6F:02DC
cs=0x2c6f;eip=0x0002df; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_8+2)))));	// 90015 push    word ptr [bp+var_8+2] ;~ 2C6F:02DF
cs=0x2c6f;eip=0x0002e2; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_8)))));	// 90016 push    word ptr [bp+var_8] ;~ 2C6F:02E2
cs=0x2c6f;eip=0x0002e5; 	T(MOV(si, ax));	// 90017 mov     si, ax ;~ 2C6F:02E5
cs=0x2c6f;eip=0x0002e7; 	T(MOV(di, dx));	// 90018 mov     di, dx ;~ 2C6F:02E7
cs=0x2c6f;eip=0x0002e9; 	R(CALLF(parse_shape2d_helper,0));	// 90019 call    parse_shape2d_helper ;~ 2C6F:02E9
cs=0x2c6f;eip=0x0002ee; 	T(ADD(sp, 4));	// 90020 add     sp, 4 ;~ 2C6F:02EE
cs=0x2c6f;eip=0x0002f1; 	T(SUB(ax, si));	// 90021 sub     ax, si ;~ 2C6F:02F1
cs=0x2c6f;eip=0x0002f3; 	T(SBB(dx, di));	// 90022 sbb     dx, di ;~ 2C6F:02F3
cs=0x2c6f;eip=0x0002f5; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_18))));	// 90023 les     bx, [bp+var_18] ;~ 2C6F:02F5
cs=0x2c6f;eip=0x0002f8; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_18))), 4));	// 90024 add     word ptr [bp+var_18], 4 ;~ 2C6F:02F8
cs=0x2c6f;eip=0x0002fc; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 90025 mov     es:[bx], ax ;~ 2C6F:02FC
cs=0x2c6f;eip=0x0002ff; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 90026 mov     es:[bx+2], dx ;~ 2C6F:02FF
cs=0x2c6f;eip=0x000303; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_c)))));	// 90027 mov     ax, word ptr [bp+var_C] ;~ 2C6F:0303
cs=0x2c6f;eip=0x000306; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_c+2)))));	// 90028 mov     dx, word ptr [bp+var_C+2] ;~ 2C6F:0306
cs=0x2c6f;eip=0x000309; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_2e))), ax));	// 90029 mov     word ptr [bp+var_2E], ax ;~ 2C6F:0309
cs=0x2c6f;eip=0x00030c; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_2e +2))), dx));	// 90030 mov     word ptr [bp+var_2E+2], dx ;~ 2C6F:030C
cs=0x2c6f;eip=0x00030f; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), 0));	// 90031 mov     [bp+var_30], 0 ;~ 2C6F:030F
loc_3afe4:
	// 10558 
cs=0x2c6f;eip=0x000314; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_2e))));	// 90034 les     bx, [bp+var_2E] ;~ 2C6F:0314
cs=0x2c6f;eip=0x000317; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_2e)))));	// 90035 inc     word ptr [bp+var_2E] ;~ 2C6F:0317
cs=0x2c6f;eip=0x00031a; 	T(MOV(al, *(raddr(es,bx))));	// 90036 mov     al, es:[bx] ;~ 2C6F:031A
cs=0x2c6f;eip=0x00031d; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 90037 les     bx, [bp+var_8] ;~ 2C6F:031D
cs=0x2c6f;eip=0x000320; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_8)))));	// 90038 inc     word ptr [bp+var_8] ;~ 2C6F:0320
cs=0x2c6f;eip=0x000323; 	X(MOV(*(raddr(es,bx)), al));	// 90039 mov     es:[bx], al ;~ 2C6F:0323
cs=0x2c6f;eip=0x000326; 	X(INC(*(dw*)(raddr(ss,bp+var_30))));	// 90040 inc     [bp+var_30] ;~ 2C6F:0326
cs=0x2c6f;eip=0x000329; 	T(CMP(*(dw*)(raddr(ss,bp+var_30)), 0x10));	// 90041 cmp     [bp+var_30], 10h ;~ 2C6F:0329
cs=0x2c6f;eip=0x00032d; 	R(JL(loc_3afe4));	// 90042 jl      short loc_3AFE4 ;~ 2C6F:032D
cs=0x2c6f;eip=0x00032f; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_2e)))));	// 90043 mov     ax, word ptr [bp+var_2E] ;~ 2C6F:032F
cs=0x2c6f;eip=0x000332; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_2e +2)))));	// 90044 mov     dx, word ptr [bp+var_2E+2] ;~ 2C6F:0332
cs=0x2c6f;eip=0x000335; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 90045 mov     word ptr [bp+var_4], ax ;~ 2C6F:0335
cs=0x2c6f;eip=0x000338; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 90046 mov     word ptr [bp+var_4+2], dx ;~ 2C6F:0338
cs=0x2c6f;eip=0x00033b; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0));	// 90047 mov     [bp+var_E], 0 ;~ 2C6F:033B
cs=0x2c6f;eip=0x000340; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_c))));	// 90048 les     bx, [bp+var_C] ;~ 2C6F:0340
cs=0x2c6f;eip=0x000343; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 90049 mov     ax, es:[bx+2] ;~ 2C6F:0343
cs=0x2c6f;eip=0x000347; 	X(IMUL1_2(*(dw*)(raddr(es,bx))));	// 90050 imul    word ptr es:[bx] ;~ 2C6F:0347
cs=0x2c6f;eip=0x00034a; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 90051 mov     [bp+var_1E], ax ;~ 2C6F:034A
cs=0x2c6f;eip=0x00034d; 	R(JMP(loc_3af45));	// 90052 jmp     loc_3AF45 ;~ 2C6F:034D
loc_3b020:
	// 10559 
cs=0x2c6f;eip=0x000350; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 90056 push    [bp+arg_6] ;~ 2C6F:0350
cs=0x2c6f;eip=0x000353; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 90057 push    [bp+arg_4] ;~ 2C6F:0353
cs=0x2c6f;eip=0x000356; 	R(CALLF(parse_shape2d_helper,0));	// 90058 call    parse_shape2d_helper ;~ 2C6F:0356
cs=0x2c6f;eip=0x00035b; 	T(ADD(sp, 4));	// 90059 add     sp, 4 ;~ 2C6F:035B
cs=0x2c6f;eip=0x00035e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_8+2)))));	// 90060 push    word ptr [bp+var_8+2] ;~ 2C6F:035E
cs=0x2c6f;eip=0x000361; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_8)))));	// 90061 push    word ptr [bp+var_8] ;~ 2C6F:0361
cs=0x2c6f;eip=0x000364; 	T(MOV(si, ax));	// 90062 mov     si, ax ;~ 2C6F:0364
cs=0x2c6f;eip=0x000366; 	T(MOV(di, dx));	// 90063 mov     di, dx ;~ 2C6F:0366
cs=0x2c6f;eip=0x000368; 	R(CALLF(parse_shape2d_helper,0));	// 90064 call    parse_shape2d_helper ;~ 2C6F:0368
cs=0x2c6f;eip=0x00036d; 	T(ADD(sp, 4));	// 90065 add     sp, 4 ;~ 2C6F:036D
cs=0x2c6f;eip=0x000370; 	T(SUB(ax, si));	// 90066 sub     ax, si ;~ 2C6F:0370
cs=0x2c6f;eip=0x000372; 	T(SBB(dx, di));	// 90067 sbb     dx, di ;~ 2C6F:0372
cs=0x2c6f;eip=0x000374; 	X(MOV(*(dw*)(raddr(ss,bp+var_34)), ax));	// 90068 mov     [bp+var_34], ax ;~ 2C6F:0374
cs=0x2c6f;eip=0x000377; 	X(MOV(*(dw*)(raddr(ss,bp+var_32)), dx));	// 90069 mov     [bp+var_32], dx ;~ 2C6F:0377
cs=0x2c6f;eip=0x00037a; 	T(TEST(*(db*)(raddr(ss,bp+var_34)), 0x0F));	// 90070 test    byte ptr [bp+var_34], 0Fh ;~ 2C6F:037A
cs=0x2c6f;eip=0x00037e; 	R(JZ(loc_3b068));	// 90071 jz      short loc_3B068 ;~ 2C6F:037E
cs=0x2c6f;eip=0x000380; 	T(MOV(cl, 4));	// 90072 mov     cl, 4 ;~ 2C6F:0380
loc_3b052:
	// 10560 
cs=0x2c6f;eip=0x000382; 	T(SAR(dx, 1));	// 90075 sar     dx, 1 ;~ 2C6F:0382
cs=0x2c6f;eip=0x000384; 	T(RCR(ax, 1));	// 90076 rcr     ax, 1 ;~ 2C6F:0384
cs=0x2c6f;eip=0x000386; 	T(DEC(cl));	// 90077 dec     cl ;~ 2C6F:0386
cs=0x2c6f;eip=0x000388; 	R(JNZ(loc_3b052));	// 90078 jnz     short loc_3B052 ;~ 2C6F:0388
cs=0x2c6f;eip=0x00038a; 	T(ADD(ax, 1));	// 90079 add     ax, 1 ;~ 2C6F:038A
cs=0x2c6f;eip=0x00038d; 	T(ADC(dx, 0));	// 90080 adc     dx, 0 ;~ 2C6F:038D
cs=0x2c6f;eip=0x000390; 	X(MOV(*(dw*)(raddr(ss,bp+var_34)), ax));	// 90081 mov     [bp+var_34], ax ;~ 2C6F:0390
cs=0x2c6f;eip=0x000393; 	X(MOV(*(dw*)(raddr(ss,bp+var_32)), dx));	// 90082 mov     [bp+var_32], dx ;~ 2C6F:0393
cs=0x2c6f;eip=0x000396; 	R(JMP(loc_3b074));	// 90083 jmp     short loc_3B074 ;~ 2C6F:0396
loc_3b068:
	// 10561 
cs=0x2c6f;eip=0x000398; 	T(MOV(al, 4));	// 90087 mov     al, 4 ;~ 2C6F:0398
cs=0x2c6f;eip=0x00039a; 	X(PUSH(ax));	// 90088 push    ax ;~ 2C6F:039A
cs=0x2c6f;eip=0x00039b; 	T(ax = bp+var_34);	// 90089 lea     ax, [bp+var_34] ;~ 2C6F:039B
cs=0x2c6f;eip=0x00039e; 	X(PUSH(ax));	// 90090 push    ax ;~ 2C6F:039E
cs=0x2c6f;eip=0x00039f; 	R(CALLF(unknown_libname_4,0));	// 90091 call    unknown_libname_4 ; MS Quick C v1.0/v2.01 & MSC v5.1 DOS run-time & graphic ;~ 2C6F:039F
loc_3b074:
	// 10562 
cs=0x2c6f;eip=0x0003a4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_34))));	// 90094 push    [bp+var_34] ;~ 2C6F:03A4
cs=0x2c6f;eip=0x0003a7; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 90095 push    [bp+arg_6] ;~ 2C6F:03A7
cs=0x2c6f;eip=0x0003aa; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 90096 push    [bp+arg_4] ;~ 2C6F:03AA
cs=0x2c6f;eip=0x0003ad; 	R(CALLF(mmgr_resize_memory,0));	// 90097 call    mmgr_resize_memory ;~ 2C6F:03AD
cs=0x2c6f;eip=0x0003b2; 	T(ADD(sp, 6));	// 90098 add     sp, 6 ;~ 2C6F:03B2
cs=0x2c6f;eip=0x0003b5; 	X(POP(si));	// 90099 pop     si ;~ 2C6F:03B5
cs=0x2c6f;eip=0x0003b6; 	X(POP(di));	// 90100 pop     di ;~ 2C6F:03B6
cs=0x2c6f;eip=0x0003b7; 	T(MOV(sp, bp));	// 90101 mov     sp, bp ;~ 2C6F:03B7
cs=0x2c6f;eip=0x0003b9; 	X(POP(bp));	// 90102 pop     bp ;~ 2C6F:03B9
cs=0x2c6f;eip=0x0003ba; 	R(RETF(0));	// 90103 retf ;~ 2C6F:03BA
parse_shape2d_helper3:
	// 90113 
#undef var_4
#define var_4 -4
	// 90115 var_4           = byte ptr -4 ;~ 2C6F:03BC
#undef var_2
#define var_2 -2
	// 90116 var_2           = word ptr -2 ;~ 2C6F:03BC
#undef arg_0
#define arg_0 6
	// 90117 arg_0           = dword ptr  6 ;~ 2C6F:03BC
ret_2c6f_3bc:
	// 10563 
cs=0x2c6f;eip=0x0003bc; 	X(PUSH(bp));	// 90119 push    bp ;~ 2C6F:03BC
cs=0x2c6f;eip=0x0003bd; 	T(MOV(bp, sp));	// 90120 mov     bp, sp ;~ 2C6F:03BD
cs=0x2c6f;eip=0x0003bf; 	T(SUB(sp, 4));	// 90121 sub     sp, 4 ;~ 2C6F:03BF
cs=0x2c6f;eip=0x0003c2; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90122 les     bx, [bp+arg_0] ;~ 2C6F:03C2
cs=0x2c6f;eip=0x0003c5; 	T(MOV(al, *(raddr(es,bx))));	// 90123 mov     al, es:[bx] ;~ 2C6F:03C5
cs=0x2c6f;eip=0x0003c8; 	X(MOV(*(raddr(ss,bp+var_4)), al));	// 90124 mov     [bp+var_4], al ;~ 2C6F:03C8
cs=0x2c6f;eip=0x0003cb; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 90125 mov     [bp+var_2], 0 ;~ 2C6F:03CB
cs=0x2c6f;eip=0x0003d0; 	R(JMP(loc_3b0a5));	// 90126 jmp     short loc_3B0A5 ;~ 2C6F:03D0
loc_3b0a2:
	// 10564 
cs=0x2c6f;eip=0x0003d2; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 90130 inc     [bp+var_2] ;~ 2C6F:03D2
loc_3b0a5:
	// 10565 
cs=0x2c6f;eip=0x0003d5; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90133 les     bx, [bp+arg_0] ;~ 2C6F:03D5
cs=0x2c6f;eip=0x0003d8; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 90134 inc     word ptr [bp+arg_0] ;~ 2C6F:03D8
cs=0x2c6f;eip=0x0003db; 	T(MOV(al, *(raddr(ss,bp+var_4))));	// 90135 mov     al, [bp+var_4] ;~ 2C6F:03DB
cs=0x2c6f;eip=0x0003de; 	T(CMP(*(raddr(es,bx)), al));	// 90136 cmp     es:[bx], al ;~ 2C6F:03DE
cs=0x2c6f;eip=0x0003e1; 	R(JZ(loc_3b0a2));	// 90137 jz      short loc_3B0A2 ;~ 2C6F:03E1
cs=0x2c6f;eip=0x0003e3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 90138 mov     ax, [bp+var_2] ;~ 2C6F:03E3
cs=0x2c6f;eip=0x0003e6; 	T(MOV(sp, bp));	// 90139 mov     sp, bp ;~ 2C6F:03E6
cs=0x2c6f;eip=0x0003e8; 	X(POP(bp));	// 90140 pop     bp ;~ 2C6F:03E8
cs=0x2c6f;eip=0x0003e9; 	R(RETF(0));	// 90141 retf ;~ 2C6F:03E9

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return true;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kfile_load_shape2d_res_nofatal: 	goto file_load_shape2d_res_nofatal;
        case m2c::kloc_3ad2a: 	goto loc_3ad2a;
        case m2c::kloc_3ad4a: 	goto loc_3ad4a;
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
        case m2c::kloc_3b0a2: 	goto loc_3b0a2;
        case m2c::kloc_3b0a5: 	goto loc_3b0a5;
        case m2c::kret_2c6f_2e: 	goto ret_2c6f_2e;
        case m2c::kret_2c6f_3bc: 	goto ret_2c6f_3bc;
        case m2c::kret_2c6f_8: 	goto ret_2c6f_8;
        case m2c::kret_2c6f_cc: 	goto ret_2c6f_cc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

