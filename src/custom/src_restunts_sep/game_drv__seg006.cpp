/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool init_polyinfo(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    init_polyinfo:
    _begin:
cs=0x1678;eip=0x000004; 	T(MOV(ax, 0x28A0));	// 40395 mov     ax, 28A0h       ; bytes to reserve ;~ 1678:0004
cs=0x1678;eip=0x000007; 	T(CWD);	// 40396 cwd ;~ 1678:0007
cs=0x1678;eip=0x000008; 	X(PUSH(dx));	// 40397 push    dx ;~ 1678:0008
cs=0x1678;eip=0x000009; 	X(PUSH(ax));	// 40398 push    ax ;~ 1678:0009
cs=0x1678;eip=0x00000a; 	T(MOV(ax, offset(dseg,apolyinfo)));	// 40399 mov     ax, offset aPolyinfo ; "polyinfo" ;~ 1678:000A
cs=0x1678;eip=0x00000d; 	X(PUSH(ax));	// 40400 push    ax ;~ 1678:000D
cs=0x1678;eip=0x00000e; 	J(CALLF(mmgr_alloc_resbytes,0));	// 40401 call    mmgr_alloc_resbytes ;~ 1678:000E
cs=0x1678;eip=0x000013; 	T(ADD(sp, 6));	// 40402 add     sp, 6 ;~ 1678:0013
cs=0x1678;eip=0x000016; 	X(MOV(polyinfoptr, ax));	// 40403 mov     polyinfoptr, ax ;~ 1678:0016
cs=0x1678;eip=0x000019; 	X(MOV(word_40ed4, dx));	// 40404 mov     word_40ED4, dx ;~ 1678:0019
cs=0x1678;eip=0x00001d; 	T(SUB(ax, ax));	// 40405 sub     ax, ax ;~ 1678:001D
cs=0x1678;eip=0x00001f; 	X(PUSH(ax));	// 40406 push    ax ;~ 1678:001F
cs=0x1678;eip=0x000020; 	T(MOV(ax, offset(dseg,mat_y0)));	// 40407 mov     ax, offset mat_y0 ;~ 1678:0020
cs=0x1678;eip=0x000023; 	X(PUSH(ax));	// 40408 push    ax ;~ 1678:0023
cs=0x1678;eip=0x000024; 	J(CALLF(mat_rot_y,0));	// 40409 call    mat_rot_y ;~ 1678:0024
cs=0x1678;eip=0x000029; 	T(ADD(sp, 4));	// 40410 add     sp, 4 ;~ 1678:0029
cs=0x1678;eip=0x00002c; 	T(MOV(ax, 0x100));	// 40411 mov     ax, 100h ;~ 1678:002C
cs=0x1678;eip=0x00002f; 	X(PUSH(ax));	// 40412 push    ax ;~ 1678:002F
cs=0x1678;eip=0x000030; 	T(MOV(ax, offset(dseg,mat_y100)));	// 40413 mov     ax, offset mat_y100 ;~ 1678:0030
cs=0x1678;eip=0x000033; 	X(PUSH(ax));	// 40414 push    ax ;~ 1678:0033
cs=0x1678;eip=0x000034; 	J(CALLF(mat_rot_y,0));	// 40415 call    mat_rot_y ;~ 1678:0034
cs=0x1678;eip=0x000039; 	T(ADD(sp, 4));	// 40416 add     sp, 4 ;~ 1678:0039
cs=0x1678;eip=0x00003c; 	T(MOV(ax, 0x200));	// 40417 mov     ax, 200h ;~ 1678:003C
cs=0x1678;eip=0x00003f; 	X(PUSH(ax));	// 40418 push    ax ;~ 1678:003F
cs=0x1678;eip=0x000040; 	T(MOV(ax, offset(dseg,mat_y200)));	// 40419 mov     ax, offset mat_y200 ;~ 1678:0040
cs=0x1678;eip=0x000043; 	X(PUSH(ax));	// 40420 push    ax ;~ 1678:0043
cs=0x1678;eip=0x000044; 	J(CALLF(mat_rot_y,0));	// 40421 call    mat_rot_y ;~ 1678:0044
cs=0x1678;eip=0x000049; 	T(ADD(sp, 4));	// 40422 add     sp, 4 ;~ 1678:0049
cs=0x1678;eip=0x00004c; 	T(MOV(ax, 0x300));	// 40423 mov     ax, 300h ;~ 1678:004C
cs=0x1678;eip=0x00004f; 	X(PUSH(ax));	// 40424 push    ax ;~ 1678:004F
cs=0x1678;eip=0x000050; 	T(MOV(ax, offset(dseg,mat_y300)));	// 40425 mov     ax, offset mat_y300 ;~ 1678:0050
cs=0x1678;eip=0x000053; 	X(PUSH(ax));	// 40426 push    ax ;~ 1678:0053
cs=0x1678;eip=0x000054; 	J(CALLF(mat_rot_y,0));	// 40427 call    mat_rot_y ;~ 1678:0054
cs=0x1678;eip=0x000059; 	T(ADD(sp, 4));	// 40428 add     sp, 4 ;~ 1678:0059
cs=0x1678;eip=0x00005c; 	X(PUSH(cs));	// 40429 push    cs ;~ 1678:005C
cs=0x1678;eip=0x00005d; 	J(CALL(calc_sincos80,0));	// 40430 call    near ptr calc_sincos80 ;~ 1678:005D
cs=0x1678;eip=0x000060; 	J(RETF(0));	// 40431 retf ;~ 1678:0060

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kinit_polyinfo: 	goto init_polyinfo;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool copy_material_list_pointers(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    copy_material_list_pointers:
    _begin:
#undef arg_0
#define arg_0 6
	// 40443 arg_0           = word ptr  6 ;~ 1678:0062
#undef arg_2
#define arg_2 8
	// 40444 arg_2           = word ptr  8 ;~ 1678:0062
#undef arg_4
#define arg_4 0x0A
	// 40445 arg_4           = word ptr  0Ah ;~ 1678:0062
#undef arg_6
#define arg_6 0x0C
	// 40446 arg_6           = word ptr  0Ch ;~ 1678:0062
#undef arg_8
#define arg_8 0x0E
	// 40447 arg_8           = word ptr  0Eh ;~ 1678:0062
cs=0x1678;eip=0x000062; 	X(PUSH(bp));	// 40449 push    bp ;~ 1678:0062
cs=0x1678;eip=0x000063; 	T(MOV(bp, sp));	// 40450 mov     bp, sp ;~ 1678:0063
cs=0x1678;eip=0x000065; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 40451 mov     ax, [bp+arg_0] ;~ 1678:0065
cs=0x1678;eip=0x000068; 	X(MOV(material_clrlist_ptr_cpy, ax));	// 40452 mov     material_clrlist_ptr_cpy, ax ;~ 1678:0068
cs=0x1678;eip=0x00006b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 40453 mov     ax, [bp+arg_2] ;~ 1678:006B
cs=0x1678;eip=0x00006e; 	X(MOV(material_clrlist2_ptr_cpy, ax));	// 40454 mov     material_clrlist2_ptr_cpy, ax ;~ 1678:006E
cs=0x1678;eip=0x000071; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 40455 mov     ax, [bp+arg_4] ;~ 1678:0071
cs=0x1678;eip=0x000074; 	X(MOV(material_patlist_ptr_cpy, ax));	// 40456 mov     material_patlist_ptr_cpy, ax ;~ 1678:0074
cs=0x1678;eip=0x000077; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 40457 mov     ax, [bp+arg_6] ;~ 1678:0077
cs=0x1678;eip=0x00007a; 	X(MOV(material_patlist2_ptr_cpy, ax));	// 40458 mov     material_patlist2_ptr_cpy, ax ;~ 1678:007A
cs=0x1678;eip=0x00007d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 40459 mov     ax, [bp+arg_8] ;~ 1678:007D
cs=0x1678;eip=0x000080; 	X(MOV(somezerovideoconst, ax));	// 40460 mov     someZeroVideoConst, ax ;~ 1678:0080
cs=0x1678;eip=0x000083; 	X(POP(bp));	// 40461 pop     bp ;~ 1678:0083
cs=0x1678;eip=0x000084; 	J(RETF(0));	// 40462 retf ;~ 1678:0084

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kcopy_material_list_pointers: 	goto copy_material_list_pointers;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool polyinfo_reset(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    polyinfo_reset:
    _begin:
cs=0x1678;eip=0x000086; 	X(MOV(polyinfonumpolys, 0));	// 40473 mov     polyinfonumpolys, 0 ;~ 1678:0086
cs=0x1678;eip=0x00008c; 	X(MOV(polyinfoptrnext, 0));	// 40474 mov     polyinfoptrnext, 0 ;~ 1678:008C
cs=0x1678;eip=0x000092; 	X(MOV(word_40ece, 0));	// 40475 mov     word_40ECE, 0 ;~ 1678:0092
cs=0x1678;eip=0x000098; 	X(MOV(word_411f6, 0x0FFFF));	// 40476 mov     word_411F6, 0FFFFh ;~ 1678:0098
cs=0x1678;eip=0x00009e; 	X(MOV(word_443f2, 0x190));	// 40477 mov     word_443F2, 190h ;~ 1678:009E
cs=0x1678;eip=0x0000a4; 	J(RETF(0));	// 40478 retf ;~ 1678:00A4

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kpolyinfo_reset: 	goto polyinfo_reset;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool select_cliprect_rotate(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    select_cliprect_rotate:
    _begin:
#undef var_e
#define var_e -0x0E
	// 40491 var_E           = word ptr -0Eh ;~ 1678:00A6
#undef var_c
#define var_c -0x0C
	// 40492 var_C           = word ptr -0Ch ;~ 1678:00A6
#undef var_a
#define var_a -0x0A
	// 40493 var_A           = word ptr -0Ah ;~ 1678:00A6
#undef var_8
#define var_8 -8
	// 40494 var_8           = word ptr -8 ;~ 1678:00A6
#undef var_6
#define var_6 -6
	// 40495 var_6           = word ptr -6 ;~ 1678:00A6
#undef var_2
#define var_2 -2
	// 40496 var_2           = word ptr -2 ;~ 1678:00A6
#undef arg_0
#define arg_0 6
	// 40497 arg_0           = word ptr  6 ;~ 1678:00A6
#undef arg_2
#define arg_2 8
	// 40498 arg_2           = word ptr  8 ;~ 1678:00A6
#undef arg_4
#define arg_4 0x0A
	// 40499 arg_4           = word ptr  0Ah ;~ 1678:00A6
#undef arg_6
#define arg_6 0x0C
	// 40500 arg_6           = word ptr  0Ch ;~ 1678:00A6
#undef arg_8
#define arg_8 0x0E
	// 40501 arg_8           = word ptr  0Eh ;~ 1678:00A6
cs=0x1678;eip=0x0000a6; 	X(PUSH(bp));	// 40503 push    bp ;~ 1678:00A6
cs=0x1678;eip=0x0000a7; 	T(MOV(bp, sp));	// 40504 mov     bp, sp ;~ 1678:00A7
cs=0x1678;eip=0x0000a9; 	T(SUB(sp, 0x0E));	// 40505 sub     sp, 0Eh ;~ 1678:00A9
cs=0x1678;eip=0x0000ac; 	X(PUSH(di));	// 40506 push    di ;~ 1678:00AC
cs=0x1678;eip=0x0000ad; 	X(PUSH(si));	// 40507 push    si ;~ 1678:00AD
cs=0x1678;eip=0x0000ae; 	T(MOV(ax, 1));	// 40508 mov     ax, 1 ;~ 1678:00AE
cs=0x1678;eip=0x0000b1; 	X(PUSH(ax));	// 40509 push    ax ;~ 1678:00B1
cs=0x1678;eip=0x0000b2; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 40510 push    [bp+arg_4] ;~ 1678:00B2
cs=0x1678;eip=0x0000b5; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 40511 push    [bp+arg_2] ;~ 1678:00B5
cs=0x1678;eip=0x0000b8; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 40512 push    [bp+arg_0] ;~ 1678:00B8
cs=0x1678;eip=0x0000bb; 	X(PUSH(cs));	// 40513 push    cs ;~ 1678:00BB
cs=0x1678;eip=0x0000bc; 	J(CALL(mat_rot_zxy,0));	// 40514 call    near ptr mat_rot_zxy ;~ 1678:00BC
cs=0x1678;eip=0x0000bf; 	T(ADD(sp, 8));	// 40515 add     sp, 8 ;~ 1678:00BF
cs=0x1678;eip=0x0000c2; 	T(MOV(di, offset(dseg,mat_temp)));	// 40516 mov     di, offset mat_temp ;~ 1678:00C2
cs=0x1678;eip=0x0000c5; 	T(MOV(si, ax));	// 40517 mov     si, ax ;~ 1678:00C5
cs=0x1678;eip=0x0000c7; 	X(PUSH(ds));	// 40518 push    ds ;~ 1678:00C7
cs=0x1678;eip=0x0000c8; 	X(POP(es));	// 40519 pop     es ;~ 1678:00C8
cs=0x1678;eip=0x0000c9; 	T(MOV(cx, 9));	// 40521 mov     cx, 9 ;~ 1678:00C9
	// 40522 repne movsw ;~ 1678:00CC
cs=0x1678;eip=0x0000cc; 	X(	REPNE MOVSW);	// 40522 repne movsw ;~ 1678:00CC
cs=0x1678;eip=0x0000ce; 	X(PUSH(cs));	// 40523 push    cs ;~ 1678:00CE
cs=0x1678;eip=0x0000cf; 	J(CALL(polyinfo_reset,0));	// 40524 call    near ptr polyinfo_reset ;~ 1678:00CF
cs=0x1678;eip=0x0000d2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 40525 mov     ax, [bp+arg_6] ;~ 1678:00D2
cs=0x1678;eip=0x0000d5; 	T(MOV(di, offset(dseg,select_rect_rc)));	// 40526 mov     di, offset select_rect_rc ;~ 1678:00D5
cs=0x1678;eip=0x0000d8; 	T(MOV(si, ax));	// 40527 mov     si, ax ;~ 1678:00D8
cs=0x1678;eip=0x0000da; 	X(PUSH(ds));	// 40528 push    ds ;~ 1678:00DA
cs=0x1678;eip=0x0000db; 	X(POP(es));	// 40529 pop     es ;~ 1678:00DB
cs=0x1678;eip=0x0000dc; 	X(MOVSW);	// 40530 movsw ;~ 1678:00DC
cs=0x1678;eip=0x0000dd; 	X(MOVSW);	// 40531 movsw ;~ 1678:00DD
cs=0x1678;eip=0x0000de; 	X(MOVSW);	// 40532 movsw ;~ 1678:00DE
cs=0x1678;eip=0x0000df; 	X(MOVSW);	// 40533 movsw ;~ 1678:00DF
cs=0x1678;eip=0x0000e0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 40534 mov     ax, [bp+arg_8] ;~ 1678:00E0
cs=0x1678;eip=0x0000e3; 	X(MOV(select_rect_param, ax));	// 40535 mov     select_rect_param, ax ;~ 1678:00E3
cs=0x1678;eip=0x0000e6; 	T(SUB(ax, ax));	// 40536 sub     ax, ax ;~ 1678:00E6
cs=0x1678;eip=0x0000e8; 	X(PUSH(ax));	// 40537 push    ax ;~ 1678:00E8
cs=0x1678;eip=0x0000e9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 40538 mov     ax, [bp+arg_4] ;~ 1678:00E9
cs=0x1678;eip=0x0000ec; 	T(NEG(ax));	// 40539 neg     ax ;~ 1678:00EC
cs=0x1678;eip=0x0000ee; 	X(PUSH(ax));	// 40540 push    ax ;~ 1678:00EE
cs=0x1678;eip=0x0000ef; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 40541 mov     ax, [bp+arg_2] ;~ 1678:00EF
cs=0x1678;eip=0x0000f2; 	T(NEG(ax));	// 40542 neg     ax ;~ 1678:00F2
cs=0x1678;eip=0x0000f4; 	X(PUSH(ax));	// 40543 push    ax ;~ 1678:00F4
cs=0x1678;eip=0x0000f5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 40544 mov     ax, [bp+arg_0] ;~ 1678:00F5
cs=0x1678;eip=0x0000f8; 	T(NEG(ax));	// 40545 neg     ax ;~ 1678:00F8
cs=0x1678;eip=0x0000fa; 	X(PUSH(ax));	// 40546 push    ax ;~ 1678:00FA
cs=0x1678;eip=0x0000fb; 	X(PUSH(cs));	// 40547 push    cs ;~ 1678:00FB
cs=0x1678;eip=0x0000fc; 	J(CALL(mat_rot_zxy,0));	// 40548 call    near ptr mat_rot_zxy ;~ 1678:00FC
cs=0x1678;eip=0x0000ff; 	T(ADD(sp, 8));	// 40549 add     sp, 8 ;~ 1678:00FF
cs=0x1678;eip=0x000102; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 40550 mov     [bp+var_8], ax ;~ 1678:0102
cs=0x1678;eip=0x000105; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0x2710));	// 40551 mov     [bp+var_A], 2710h ;~ 1678:0105
cs=0x1678;eip=0x00010a; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 0));	// 40552 mov     [bp+var_C], 0 ;~ 1678:010A
cs=0x1678;eip=0x00010f; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0));	// 40553 mov     [bp+var_E], 0 ;~ 1678:010F
cs=0x1678;eip=0x000114; 	T(ax = bp+var_6);	// 40554 lea     ax, [bp+var_6] ;~ 1678:0114
cs=0x1678;eip=0x000117; 	X(PUSH(ax));	// 40555 push    ax ;~ 1678:0117
cs=0x1678;eip=0x000118; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 40556 push    [bp+var_8] ;~ 1678:0118
cs=0x1678;eip=0x00011b; 	T(ax = bp+var_e);	// 40557 lea     ax, [bp+var_E] ;~ 1678:011B
cs=0x1678;eip=0x00011e; 	X(PUSH(ax));	// 40558 push    ax ;~ 1678:011E
cs=0x1678;eip=0x00011f; 	J(CALLF(mat_mul_vector,0));	// 40559 call    mat_mul_vector ;~ 1678:011F
cs=0x1678;eip=0x000124; 	T(ADD(sp, 6));	// 40560 add     sp, 6 ;~ 1678:0124
cs=0x1678;eip=0x000127; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 40561 push    [bp+var_2] ;~ 1678:0127
cs=0x1678;eip=0x00012a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 40562 push    [bp+var_6] ;~ 1678:012A
cs=0x1678;eip=0x00012d; 	J(CALLF(polarangle,0));	// 40563 call    polarAngle ;~ 1678:012D
cs=0x1678;eip=0x000132; 	T(ADD(sp, 4));	// 40564 add     sp, 4 ;~ 1678:0132
cs=0x1678;eip=0x000135; 	T(AND(ah, 3));	// 40565 and     ah, 3 ;~ 1678:0135
cs=0x1678;eip=0x000138; 	X(POP(si));	// 40566 pop     si ;~ 1678:0138
cs=0x1678;eip=0x000139; 	X(POP(di));	// 40567 pop     di ;~ 1678:0139
cs=0x1678;eip=0x00013a; 	T(MOV(sp, bp));	// 40568 mov     sp, bp ;~ 1678:013A
cs=0x1678;eip=0x00013c; 	X(POP(bp));	// 40569 pop     bp ;~ 1678:013C
cs=0x1678;eip=0x00013d; 	J(RETF(0));	// 40570 retf ;~ 1678:013D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kselect_cliprect_rotate: 	goto select_cliprect_rotate;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool transformed_shape_op(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    transformed_shape_op:
    _begin:
#undef var_b7c
#define var_b7c -0x0B7C
	// 40581 var_B7C         = word ptr -0B7Ch ;~ 1678:013E
#undef var_b7a
#define var_b7a -0x0B7A
	// 40582 var_B7A         = word ptr -0B7Ah ;~ 1678:013E
#undef var_b78
#define var_b78 -0x0B78
	// 40583 var_B78         = dword ptr -0B78h ;~ 1678:013E
#undef var_b74
#define var_b74 -0x0B74
	// 40584 var_B74         = word ptr -0B74h ;~ 1678:013E
#undef var_b72
#define var_b72 -0x0B72
	// 40585 var_B72         = word ptr -0B72h ;~ 1678:013E
#undef var_b70
#define var_b70 -0x0B70
	// 40586 var_B70         = word ptr -0B70h ;~ 1678:013E
#undef var_574
#define var_574 -0x574
	// 40587 var_574         = word ptr -574h ;~ 1678:013E
#undef var_572
#define var_572 -0x572
	// 40588 var_572         = word ptr -572h ;~ 1678:013E
#undef var_570
#define var_570 -0x570
	// 40589 var_570         = word ptr -570h ;~ 1678:013E
#undef var_56e
#define var_56e -0x56E
	// 40590 var_56E         = dword ptr -56Eh ;~ 1678:013E
#undef var_56a
#define var_56a -0x56A
	// 40591 var_56A         = word ptr -56Ah ;~ 1678:013E
#undef var_568
#define var_568 -0x568
	// 40592 var_568         = word ptr -568h ;~ 1678:013E
#undef var_566
#define var_566 -0x566
	// 40593 var_566         = word ptr -566h ;~ 1678:013E
#undef var_564
#define var_564 -0x564
	// 40594 var_564         = word ptr -564h ;~ 1678:013E
#undef var_562
#define var_562 -0x562
	// 40595 var_562         = byte ptr -562h ;~ 1678:013E
#undef var_462
#define var_462 -0x462
	// 40596 var_462         = word ptr -462h ;~ 1678:013E
#undef var_460
#define var_460 -0x460
	// 40597 var_460         = word ptr -460h ;~ 1678:013E
#undef var_45e
#define var_45e -0x45E
	// 40598 var_45E         = word ptr -45Eh ;~ 1678:013E
#undef var_45c
#define var_45c -0x45C
	// 40599 var_45C         = word ptr -45Ch ;~ 1678:013E
#undef var_45a
#define var_45a -0x45A
	// 40600 var_45A         = word ptr -45Ah ;~ 1678:013E
#undef var_458
#define var_458 -0x458
	// 40601 var_458         = word ptr -458h ;~ 1678:013E
#undef var_456
#define var_456 -0x456
	// 40602 var_456         = word ptr -456h ;~ 1678:013E
#undef var_454
#define var_454 -0x454
	// 40603 var_454         = word ptr -454h ;~ 1678:013E
#undef var_450
#define var_450 -0x450
	// 40604 var_450         = word ptr -450h ;~ 1678:013E
#undef var_44e
#define var_44e -0x44E
	// 40605 var_44E         = word ptr -44Eh ;~ 1678:013E
#undef var_44a
#define var_44a -0x44A
	// 40606 var_44A         = byte ptr -44Ah ;~ 1678:013E
#undef var_448
#define var_448 -0x448
	// 40607 var_448         = word ptr -448h ;~ 1678:013E
#undef var_446
#define var_446 -0x446
	// 40608 var_446         = byte ptr -446h ;~ 1678:013E
#undef var_434
#define var_434 -0x434
	// 40609 var_434         = dword ptr -434h ;~ 1678:013E
#undef var_430
#define var_430 -0x430
	// 40610 var_430         = dword ptr -430h ;~ 1678:013E
#undef var_42c
#define var_42c -0x42C
	// 40611 var_42C         = word ptr -42Ch ;~ 1678:013E
#undef var_42a
#define var_42a -0x42A
	// 40612 var_42A         = byte ptr -42Ah ;~ 1678:013E
#undef var_418
#define var_418 -0x418
	// 40613 var_418         = word ptr -418h ;~ 1678:013E
#undef var_1a
#define var_1a -0x1A
	// 40614 var_1A          = word ptr -1Ah ;~ 1678:013E
#undef var_18
#define var_18 -0x18
	// 40615 var_18          = word ptr -18h ;~ 1678:013E
#undef var_16
#define var_16 -0x16
	// 40616 var_16          = word ptr -16h ;~ 1678:013E
#undef var_14
#define var_14 -0x14
	// 40617 var_14          = dword ptr -14h ;~ 1678:013E
#undef var_10
#define var_10 -0x10
	// 40618 var_10          = dword ptr -10h ;~ 1678:013E
#undef var_c
#define var_c -0x0C
	// 40619 var_C           = word ptr -0Ch ;~ 1678:013E
#undef var_a
#define var_a -0x0A
	// 40620 var_A           = word ptr -0Ah ;~ 1678:013E
#undef var_8
#define var_8 -8
	// 40621 var_8           = word ptr -8 ;~ 1678:013E
#undef var_6
#define var_6 -6
	// 40622 var_6           = byte ptr -6 ;~ 1678:013E
#undef var_4
#define var_4 -4
	// 40623 var_4           = word ptr -4 ;~ 1678:013E
#undef var_2
#define var_2 -2
	// 40624 var_2           = word ptr -2 ;~ 1678:013E
#undef arg_0
#define arg_0 6
	// 40625 arg_0           = word ptr  6 ;~ 1678:013E
cs=0x1678;eip=0x00013e; 	X(PUSH(bp));	// 40627 push    bp ;~ 1678:013E
cs=0x1678;eip=0x00013f; 	T(MOV(bp, sp));	// 40628 mov     bp, sp ;~ 1678:013F
cs=0x1678;eip=0x000141; 	T(SUB(sp, 0x0B7C));	// 40629 sub     sp, 0B7Ch ;~ 1678:0141
cs=0x1678;eip=0x000145; 	X(PUSH(di));	// 40630 push    di ;~ 1678:0145
cs=0x1678;eip=0x000146; 	X(PUSH(si));	// 40631 push    si ;~ 1678:0146
cs=0x1678;eip=0x000147; 	T(CMP(word_40ece, 0));	// 40632 cmp     word_40ECE, 0 ;~ 1678:0147
cs=0x1678;eip=0x00014c; 	J(JZ(loc_24eb8));	// 40633 jz      short loc_24EB8 ;~ 1678:014C
loc_24eae:
	// 7083 
cs=0x1678;eip=0x00014e; 	T(MOV(ax, 1));	// 40636 mov     ax, 1 ;~ 1678:014E
cs=0x1678;eip=0x000151; 	X(POP(si));	// 40637 pop     si ;~ 1678:0151
cs=0x1678;eip=0x000152; 	X(POP(di));	// 40638 pop     di ;~ 1678:0152
cs=0x1678;eip=0x000153; 	T(MOV(sp, bp));	// 40639 mov     sp, bp ;~ 1678:0153
cs=0x1678;eip=0x000155; 	X(POP(bp));	// 40640 pop     bp ;~ 1678:0155
cs=0x1678;eip=0x000156; 	J(RETF(0));	// 40641 retf ;~ 1678:0156
loc_24eb8:
	// 7084 
cs=0x1678;eip=0x000158; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 40646 mov     bx, [bp+arg_0] ;~ 1678:0158
cs=0x1678;eip=0x00015b; 	T(MOV(bx, *(dw*)(raddr(ds,bx+6))));	// 40647 mov     bx, [bx+6] ;~ 1678:015B
cs=0x1678;eip=0x00015e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 40648 mov     ax, [bx+0] ;~ 1678:015E
cs=0x1678;eip=0x000160; 	X(MOV(transshapenumverts, ax));	// 40649 mov     transshapenumverts, ax ;~ 1678:0160
cs=0x1678;eip=0x000163; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 40650 mov     bx, [bp+arg_0] ;~ 1678:0163
cs=0x1678;eip=0x000166; 	T(MOV(bx, *(dw*)(raddr(ds,bx+6))));	// 40651 mov     bx, [bx+6] ;~ 1678:0166
cs=0x1678;eip=0x000169; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0A))));	// 40652 mov     ax, [bx+0Ah] ;~ 1678:0169
cs=0x1678;eip=0x00016c; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0C))));	// 40653 mov     dx, [bx+0Ch] ;~ 1678:016C
cs=0x1678;eip=0x00016f; 	X(MOV(*(dw*)(((db*)&transshapeprimitives)), ax));	// 40654 mov     word ptr transshapeprimitives, ax ;~ 1678:016F
cs=0x1678;eip=0x000172; 	X(MOV(*(dw*)(((db*)&transshapeprimitives)+2), dx));	// 40655 mov     word ptr transshapeprimitives+2, dx ;~ 1678:0172
cs=0x1678;eip=0x000176; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 40656 mov     bx, [bp+arg_0] ;~ 1678:0176
cs=0x1678;eip=0x000179; 	T(MOV(bx, *(dw*)(raddr(ds,bx+6))));	// 40657 mov     bx, [bx+6] ;~ 1678:0179
cs=0x1678;eip=0x00017c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 40658 mov     ax, [bx+2] ;~ 1678:017C
cs=0x1678;eip=0x00017f; 	T(MOV(dx, *(dw*)(raddr(ds,bx+4))));	// 40659 mov     dx, [bx+4] ;~ 1678:017F
cs=0x1678;eip=0x000182; 	X(MOV(*(dw*)(((db*)&transshapeverts)), ax));	// 40660 mov     word ptr transshapeverts, ax ;~ 1678:0182
cs=0x1678;eip=0x000185; 	X(MOV(*(dw*)(((db*)&transshapeverts)+2), dx));	// 40661 mov     word ptr transshapeverts+2, dx ;~ 1678:0185
cs=0x1678;eip=0x000189; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 40662 mov     bx, [bp+arg_0] ;~ 1678:0189
cs=0x1678;eip=0x00018c; 	T(MOV(bx, *(dw*)(raddr(ds,bx+6))));	// 40663 mov     bx, [bx+6] ;~ 1678:018C
cs=0x1678;eip=0x00018f; 	T(MOV(al, *(raddr(ds,bx+8))));	// 40664 mov     al, [bx+8] ;~ 1678:018F
cs=0x1678;eip=0x000192; 	T(CBW);	// 40665 cbw ;~ 1678:0192
cs=0x1678;eip=0x000193; 	X(MOV(transshapenumpaints, ax));	// 40666 mov     transshapenumpaints, ax ;~ 1678:0193
cs=0x1678;eip=0x000196; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 40667 mov     bx, [bp+arg_0] ;~ 1678:0196
cs=0x1678;eip=0x000199; 	T(MOV(bx, *(dw*)(raddr(ds,bx+6))));	// 40668 mov     bx, [bx+6] ;~ 1678:0199
cs=0x1678;eip=0x00019c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0E))));	// 40669 mov     ax, [bx+0Eh] ;~ 1678:019C
cs=0x1678;eip=0x00019f; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x10))));	// 40670 mov     dx, [bx+10h] ;~ 1678:019F
cs=0x1678;eip=0x0001a2; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_b78))), ax));	// 40671 mov     word ptr [bp+var_B78], ax ;~ 1678:01A2
cs=0x1678;eip=0x0001a6; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_b78+2))), dx));	// 40672 mov     word ptr [bp+var_B78+2], dx ;~ 1678:01A6
cs=0x1678;eip=0x0001aa; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 40673 mov     bx, [bp+arg_0] ;~ 1678:01AA
cs=0x1678;eip=0x0001ad; 	T(MOV(bx, *(dw*)(raddr(ds,bx+6))));	// 40674 mov     bx, [bx+6] ;~ 1678:01AD
cs=0x1678;eip=0x0001b0; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x12))));	// 40675 mov     ax, [bx+12h] ;~ 1678:01B0
cs=0x1678;eip=0x0001b3; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x14))));	// 40676 mov     dx, [bx+14h] ;~ 1678:01B3
cs=0x1678;eip=0x0001b6; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_434))), ax));	// 40677 mov     word ptr [bp+var_434], ax ;~ 1678:01B6
cs=0x1678;eip=0x0001ba; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_434+2))), dx));	// 40678 mov     word ptr [bp+var_434+2], dx ;~ 1678:01BA
cs=0x1678;eip=0x0001be; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 40679 mov     bx, [bp+arg_0] ;~ 1678:01BE
cs=0x1678;eip=0x0001c1; 	T(MOV(al, *(raddr(ds,bx+0x13))));	// 40680 mov     al, [bx+13h] ;~ 1678:01C1
cs=0x1678;eip=0x0001c4; 	X(MOV(transshapematerial, al));	// 40681 mov     transshapematerial, al ;~ 1678:01C4
cs=0x1678;eip=0x0001c7; 	T(CMP(*(db*)(((db*)&transshapenumpaints)), al));	// 40682 cmp     byte ptr transshapenumpaints, al ;~ 1678:01C7
cs=0x1678;eip=0x0001cb; 	J(JA(loc_24f32));	// 40683 ja      short loc_24F32 ;~ 1678:01CB
cs=0x1678;eip=0x0001cd; 	X(MOV(transshapematerial, 0));	// 40684 mov     transshapematerial, 0 ;~ 1678:01CD
loc_24f32:
	// 7085 
cs=0x1678;eip=0x0001d2; 	T(MOV(al, *(raddr(ds,bx+0x12))));	// 40687 mov     al, [bx+12h] ;~ 1678:01D2
cs=0x1678;eip=0x0001d5; 	X(MOV(transshapeflags, al));	// 40688 mov     transshapeflags, al ;~ 1678:01D5
cs=0x1678;eip=0x0001d8; 	T(TEST(transshapeflags, 8));	// 40689 test    transshapeflags, 8 ;~ 1678:01D8
cs=0x1678;eip=0x0001dd; 	J(JZ(loc_24f45));	// 40690 jz      short loc_24F45 ;~ 1678:01DD
cs=0x1678;eip=0x0001df; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 40691 mov     ax, [bx+8] ;~ 1678:01DF
cs=0x1678;eip=0x0001e2; 	X(MOV(transshaperectptr, ax));	// 40692 mov     transshaperectptr, ax ;~ 1678:01E2
loc_24f45:
	// 7086 
cs=0x1678;eip=0x0001e5; 	T(SUB(si, si));	// 40695 sub     si, si ;~ 1678:01E5
cs=0x1678;eip=0x0001e7; 	J(JMP(loc_24f50));	// 40696 jmp     short loc_24F50 ;~ 1678:01E7
loc_24f4a:
	// 7087 
cs=0x1678;eip=0x0001ea; 	X(MOV(*(raddr(ss,bp+si+var_562)), 0x0FF));	// 40701 mov     [bp+si+var_562], 0FFh ;~ 1678:01EA
cs=0x1678;eip=0x0001ef; 	T(INC(si));	// 40702 inc     si ;~ 1678:01EF
loc_24f50:
	// 7088 
cs=0x1678;eip=0x0001f0; 	T(MOV(ax, si));	// 40705 mov     ax, si ;~ 1678:01F0
cs=0x1678;eip=0x0001f2; 	T(CMP(ax, transshapenumverts));	// 40706 cmp     ax, transshapenumverts ;~ 1678:01F2
cs=0x1678;eip=0x0001f6; 	J(JC(loc_24f4a));	// 40707 jb      short loc_24F4A ;~ 1678:01F6
cs=0x1678;eip=0x0001f8; 	T(TEST(transshapeflags, 2));	// 40708 test    transshapeflags, 2 ;~ 1678:01F8
cs=0x1678;eip=0x0001fd; 	J(JZ(loc_24fb6));	// 40709 jz      short loc_24FB6 ;~ 1678:01FD
cs=0x1678;eip=0x0001ff; 	T(SUB(ax, ax));	// 40710 sub     ax, ax ;~ 1678:01FF
cs=0x1678;eip=0x000201; 	X(PUSH(ax));	// 40711 push    ax ;~ 1678:0201
cs=0x1678;eip=0x000202; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 40712 mov     bx, [bp+arg_0] ;~ 1678:0202
cs=0x1678;eip=0x000205; 	X(PUSH(*(dw*)(raddr(ds,bx+0x0E))));	// 40713 push    word ptr [bx+0Eh] ;~ 1678:0205
cs=0x1678;eip=0x000208; 	X(PUSH(*(dw*)(raddr(ds,bx+0x0C))));	// 40714 push    word ptr [bx+0Ch] ;~ 1678:0208
cs=0x1678;eip=0x00020b; 	X(PUSH(*(dw*)(raddr(ds,bx+0x0A))));	// 40715 push    word ptr [bx+0Ah] ;~ 1678:020B
cs=0x1678;eip=0x00020e; 	X(PUSH(cs));	// 40716 push    cs ;~ 1678:020E
cs=0x1678;eip=0x00020f; 	J(CALL(mat_rot_zxy,0));	// 40717 call    near ptr mat_rot_zxy ;~ 1678:020F
cs=0x1678;eip=0x000212; 	T(ADD(sp, 8));	// 40718 add     sp, 8 ;~ 1678:0212
cs=0x1678;eip=0x000215; 	X(MOV(*(dw*)(raddr(ss,bp+var_42c)), ax));	// 40719 mov     [bp+var_42C], ax ;~ 1678:0215
cs=0x1678;eip=0x000219; 	T(ax = bp+var_42a);	// 40720 lea     ax, [bp+var_42A] ;~ 1678:0219
cs=0x1678;eip=0x00021d; 	X(PUSH(ax));	// 40721 push    ax ;~ 1678:021D
cs=0x1678;eip=0x00021e; 	T(MOV(ax, offset(dseg,mat_temp)));	// 40722 mov     ax, offset mat_temp ;~ 1678:021E
cs=0x1678;eip=0x000221; 	X(PUSH(ax));	// 40723 push    ax ;~ 1678:0221
cs=0x1678;eip=0x000222; 	X(PUSH(*(dw*)(raddr(ss,bp+var_42c))));	// 40724 push    [bp+var_42C] ;~ 1678:0222
cs=0x1678;eip=0x000226; 	J(CALLF(mat_multiply,0));	// 40725 call    mat_multiply ;~ 1678:0226
cs=0x1678;eip=0x00022b; 	T(ADD(sp, 6));	// 40726 add     sp, 6 ;~ 1678:022B
cs=0x1678;eip=0x00022e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 40727 mov     ax, [bp+arg_0] ;~ 1678:022E
cs=0x1678;eip=0x000231; 	X(PUSH(si));	// 40728 push    si ;~ 1678:0231
cs=0x1678;eip=0x000232; 	X(PUSH(di));	// 40729 push    di ;~ 1678:0232
cs=0x1678;eip=0x000233; 	T(di = bp+var_14);	// 40730 lea     di, [bp+var_14] ;~ 1678:0233
cs=0x1678;eip=0x000236; 	T(MOV(si, ax));	// 40731 mov     si, ax ;~ 1678:0236
cs=0x1678;eip=0x000238; 	X(PUSH(ss));	// 40732 push    ss ;~ 1678:0238
cs=0x1678;eip=0x000239; 	X(POP(es));	// 40733 pop     es ;~ 1678:0239
cs=0x1678;eip=0x00023a; 	X(MOVSW);	// 40735 movsw ;~ 1678:023A
cs=0x1678;eip=0x00023b; 	X(MOVSW);	// 40736 movsw ;~ 1678:023B
cs=0x1678;eip=0x00023c; 	X(MOVSW);	// 40737 movsw ;~ 1678:023C
cs=0x1678;eip=0x00023d; 	X(POP(di));	// 40738 pop     di ;~ 1678:023D
cs=0x1678;eip=0x00023e; 	X(POP(si));	// 40739 pop     si ;~ 1678:023E
loc_24f9f:
	// 7089 
cs=0x1678;eip=0x00023f; 	X(MOV(*(dw*)(raddr(ss,bp+var_45c)), 0x0FFFF));	// 40743 mov     [bp+var_45C], 0FFFFh ;~ 1678:023F
cs=0x1678;eip=0x000245; 	X(MOV(*(dw*)(raddr(ss,bp+var_45a)), 0x0FFFF));	// 40744 mov     [bp+var_45A], 0FFFFh ;~ 1678:0245
cs=0x1678;eip=0x00024b; 	T(SUB(ax, ax));	// 40745 sub     ax, ax ;~ 1678:024B
cs=0x1678;eip=0x00024d; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 40746 mov     [bp+var_8], ax ;~ 1678:024D
cs=0x1678;eip=0x000250; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 40747 mov     [bp+var_A], ax ;~ 1678:0250
cs=0x1678;eip=0x000253; 	J(JMP(loc_250a3));	// 40748 jmp     loc_250A3       ; initialized to 190h in polyinfo_reset() ;~ 1678:0253
loc_24fb6:
	// 7090 
cs=0x1678;eip=0x000256; 	T(SUB(ax, ax));	// 40752 sub     ax, ax ;~ 1678:0256
cs=0x1678;eip=0x000258; 	X(PUSH(ax));	// 40753 push    ax ;~ 1678:0258
cs=0x1678;eip=0x000259; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 40754 mov     bx, [bp+arg_0] ;~ 1678:0259
cs=0x1678;eip=0x00025c; 	X(PUSH(*(dw*)(raddr(ds,bx+0x0E))));	// 40755 push    word ptr [bx+0Eh] ;~ 1678:025C
cs=0x1678;eip=0x00025f; 	X(PUSH(*(dw*)(raddr(ds,bx+0x0C))));	// 40756 push    word ptr [bx+0Ch] ;~ 1678:025F
cs=0x1678;eip=0x000262; 	X(PUSH(*(dw*)(raddr(ds,bx+0x0A))));	// 40757 push    word ptr [bx+0Ah] ;~ 1678:0262
cs=0x1678;eip=0x000265; 	X(PUSH(cs));	// 40758 push    cs ;~ 1678:0265
cs=0x1678;eip=0x000266; 	J(CALL(mat_rot_zxy,0));	// 40759 call    near ptr mat_rot_zxy ;~ 1678:0266
cs=0x1678;eip=0x000269; 	T(ADD(sp, 8));	// 40760 add     sp, 8 ;~ 1678:0269
cs=0x1678;eip=0x00026c; 	X(MOV(*(dw*)(raddr(ss,bp+var_42c)), ax));	// 40761 mov     [bp+var_42C], ax ;~ 1678:026C
cs=0x1678;eip=0x000270; 	T(ax = bp+var_14);	// 40762 lea     ax, [bp+var_14] ;~ 1678:0270
cs=0x1678;eip=0x000273; 	X(PUSH(ax));	// 40763 push    ax ;~ 1678:0273
cs=0x1678;eip=0x000274; 	T(MOV(ax, offset(dseg,mat_temp)));	// 40764 mov     ax, offset mat_temp ;~ 1678:0274
cs=0x1678;eip=0x000277; 	X(PUSH(ax));	// 40765 push    ax ;~ 1678:0277
cs=0x1678;eip=0x000278; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 40766 push    [bp+arg_0] ;~ 1678:0278
cs=0x1678;eip=0x00027b; 	J(CALLF(mat_mul_vector,0));	// 40767 call    mat_mul_vector ;~ 1678:027B
cs=0x1678;eip=0x000280; 	T(ADD(sp, 6));	// 40768 add     sp, 6 ;~ 1678:0280
cs=0x1678;eip=0x000283; 	T(ax = bp+var_42a);	// 40769 lea     ax, [bp+var_42A] ;~ 1678:0283
cs=0x1678;eip=0x000287; 	X(PUSH(ax));	// 40770 push    ax ;~ 1678:0287
cs=0x1678;eip=0x000288; 	T(MOV(ax, offset(dseg,mat_temp)));	// 40771 mov     ax, offset mat_temp ;~ 1678:0288
cs=0x1678;eip=0x00028b; 	X(PUSH(ax));	// 40772 push    ax ;~ 1678:028B
cs=0x1678;eip=0x00028c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_42c))));	// 40773 push    [bp+var_42C] ;~ 1678:028C
cs=0x1678;eip=0x000290; 	J(CALLF(mat_multiply,0));	// 40774 call    mat_multiply ;~ 1678:0290
cs=0x1678;eip=0x000295; 	T(ADD(sp, 6));	// 40775 add     sp, 6 ;~ 1678:0295
cs=0x1678;eip=0x000298; 	T(ax = bp+var_446);	// 40776 lea     ax, [bp+var_446] ;~ 1678:0298
cs=0x1678;eip=0x00029c; 	X(PUSH(ax));	// 40777 push    ax ;~ 1678:029C
cs=0x1678;eip=0x00029d; 	T(ax = bp+var_42a);	// 40778 lea     ax, [bp+var_42A] ;~ 1678:029D
cs=0x1678;eip=0x0002a1; 	X(PUSH(ax));	// 40779 push    ax ;~ 1678:02A1
cs=0x1678;eip=0x0002a2; 	J(CALLF(mat_invert,0));	// 40780 call    mat_invert ;~ 1678:02A2
cs=0x1678;eip=0x0002a7; 	T(ADD(sp, 4));	// 40781 add     sp, 4 ;~ 1678:02A7
cs=0x1678;eip=0x0002aa; 	X(MOV(*(dw*)(raddr(ss,bp+var_458)), 0));	// 40782 mov     [bp+var_458], 0 ;~ 1678:02AA
cs=0x1678;eip=0x0002b0; 	X(MOV(*(dw*)(raddr(ss,bp+var_456)), 0));	// 40783 mov     [bp+var_456], 0 ;~ 1678:02B0
cs=0x1678;eip=0x0002b6; 	X(MOV(*(dw*)(raddr(ss,bp+var_454)), 0x1000));	// 40784 mov     [bp+var_454], 1000h ;~ 1678:02B6
cs=0x1678;eip=0x0002bc; 	T(ax = bp+var_56a);	// 40785 lea     ax, [bp+var_56A] ;~ 1678:02BC
cs=0x1678;eip=0x0002c0; 	X(PUSH(ax));	// 40786 push    ax ;~ 1678:02C0
cs=0x1678;eip=0x0002c1; 	T(ax = bp+var_446);	// 40787 lea     ax, [bp+var_446] ;~ 1678:02C1
cs=0x1678;eip=0x0002c5; 	X(PUSH(ax));	// 40788 push    ax ;~ 1678:02C5
cs=0x1678;eip=0x0002c6; 	T(ax = bp+var_458);	// 40789 lea     ax, [bp+var_458] ;~ 1678:02C6
cs=0x1678;eip=0x0002ca; 	X(PUSH(ax));	// 40790 push    ax ;~ 1678:02CA
cs=0x1678;eip=0x0002cb; 	J(CALLF(mat_mul_vector,0));	// 40791 call    mat_mul_vector ;~ 1678:02CB
cs=0x1678;eip=0x0002d0; 	T(ADD(sp, 6));	// 40792 add     sp, 6 ;~ 1678:02D0
cs=0x1678;eip=0x0002d3; 	T(CMP(*(dw*)(raddr(ss,bp+var_568)), 0));	// 40793 cmp     [bp+var_568], 0 ;~ 1678:02D3
cs=0x1678;eip=0x0002d8; 	J(JLE(loc_25046));	// 40794 jle     short loc_25046 ;~ 1678:02D8
cs=0x1678;eip=0x0002da; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 40795 mov     bx, [bp+arg_0] ;~ 1678:02DA
cs=0x1678;eip=0x0002dd; 	T(CMP(*(dw*)(raddr(ds,bx+2)), 0));	// 40796 cmp     word ptr [bx+2], 0 ;~ 1678:02DD
cs=0x1678;eip=0x0002e1; 	J(JGE(loc_25046));	// 40797 jge     short loc_25046 ;~ 1678:02E1
cs=0x1678;eip=0x0002e3; 	J(JMP(loc_24f9f));	// 40798 jmp     loc_24F9F ;~ 1678:02E3
loc_25046:
	// 7091 
cs=0x1678;eip=0x0002e6; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 40803 push    word ptr [bp+var_14] ; int ;~ 1678:02E6
cs=0x1678;eip=0x0002e9; 	J(CALLF(_abs,0));	// 40804 call    _abs ;~ 1678:02E9
cs=0x1678;eip=0x0002ee; 	T(ADD(sp, 2));	// 40805 add     sp, 2 ;~ 1678:02EE
cs=0x1678;eip=0x0002f1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 40806 mov     bx, [bp+arg_0] ;~ 1678:02F1
cs=0x1678;eip=0x0002f4; 	T(MOV(cx, *(dw*)(raddr(ds,bx+0x10))));	// 40807 mov     cx, [bx+10h] ;~ 1678:02F4
cs=0x1678;eip=0x0002f7; 	T(SHL(cx, 1));	// 40808 shl     cx, 1 ;~ 1678:02F7
cs=0x1678;eip=0x0002f9; 	T(CMP(cx, ax));	// 40809 cmp     cx, ax ;~ 1678:02F9
cs=0x1678;eip=0x0002fb; 	J(JLE(loc_25077));	// 40810 jle     short loc_25077 ;~ 1678:02FB
cs=0x1678;eip=0x0002fd; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_10)))));	// 40811 push    word ptr [bp+var_10] ; int ;~ 1678:02FD
cs=0x1678;eip=0x000300; 	J(CALLF(_abs,0));	// 40812 call    _abs ;~ 1678:0300
cs=0x1678;eip=0x000305; 	T(ADD(sp, 2));	// 40813 add     sp, 2 ;~ 1678:0305
cs=0x1678;eip=0x000308; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 40814 mov     bx, [bp+arg_0] ;~ 1678:0308
cs=0x1678;eip=0x00030b; 	T(MOV(cx, *(dw*)(raddr(ds,bx+0x10))));	// 40815 mov     cx, [bx+10h] ;~ 1678:030B
cs=0x1678;eip=0x00030e; 	T(SHL(cx, 1));	// 40816 shl     cx, 1 ;~ 1678:030E
cs=0x1678;eip=0x000310; 	T(CMP(cx, ax));	// 40817 cmp     cx, ax ;~ 1678:0310
cs=0x1678;eip=0x000312; 	J(JLE(loc_25077));	// 40818 jle     short loc_25077 ;~ 1678:0312
cs=0x1678;eip=0x000314; 	J(JMP(loc_24f9f));	// 40819 jmp     loc_24F9F ;~ 1678:0314
loc_25077:
	// 7092 
cs=0x1678;eip=0x000317; 	T(ax = bp+var_56a);	// 40824 lea     ax, [bp+var_56A] ;~ 1678:0317
cs=0x1678;eip=0x00031b; 	X(PUSH(ax));	// 40825 push    ax ;~ 1678:031B
cs=0x1678;eip=0x00031c; 	X(PUSH(cs));	// 40826 push    cs ;~ 1678:031C
cs=0x1678;eip=0x00031d; 	J(CALL(vector_op_unk2,0));	// 40827 call    near ptr vector_op_unk2 ;~ 1678:031D
cs=0x1678;eip=0x000320; 	T(ADD(sp, 2));	// 40828 add     sp, 2 ;~ 1678:0320
cs=0x1678;eip=0x000323; 	X(MOV(byte_4393d, al));	// 40829 mov     byte_4393D, al ;~ 1678:0323
cs=0x1678;eip=0x000326; 	T(CBW);	// 40830 cbw ;~ 1678:0326
cs=0x1678;eip=0x000327; 	T(MOV(bx, ax));	// 40831 mov     bx, ax ;~ 1678:0327
cs=0x1678;eip=0x000329; 	T(SHL(bx, 1));	// 40832 shl     bx, 1 ;~ 1678:0329
cs=0x1678;eip=0x00032b; 	T(SHL(bx, 1));	// 40833 shl     bx, 1 ;~ 1678:032B
cs=0x1678;eip=0x00032d; 	T(MOV(ax, *(dw*)(((db*)invpow2tbl)+bx)));	// 40834 mov     ax, word ptr invpow2tbl[bx] ;~ 1678:032D
cs=0x1678;eip=0x000331; 	T(MOV(dx, *(dw*)((((db*)invpow2tbl)+2)+bx)));	// 40835 mov     dx, word ptr (invpow2tbl+2)[bx] ;~ 1678:0331
cs=0x1678;eip=0x000335; 	X(MOV(*(dw*)(raddr(ss,bp+var_45c)), ax));	// 40836 mov     [bp+var_45C], ax ;~ 1678:0335
cs=0x1678;eip=0x000339; 	X(MOV(*(dw*)(raddr(ss,bp+var_45a)), dx));	// 40837 mov     [bp+var_45A], dx ;~ 1678:0339
cs=0x1678;eip=0x00033d; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 40838 mov     [bp+var_A], ax ;~ 1678:033D
cs=0x1678;eip=0x000340; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), dx));	// 40839 mov     [bp+var_8], dx ;~ 1678:0340
loc_250a3:
	// 7093 
cs=0x1678;eip=0x000343; 	T(MOV(ax, word_443f2));	// 40842 mov     ax, word_443F2  ; initialized to 190h in polyinfo_reset() ;~ 1678:0343
cs=0x1678;eip=0x000346; 	X(MOV(word_4394e, ax));	// 40843 mov     word_4394E, ax ;~ 1678:0346
cs=0x1678;eip=0x000349; 	X(MOV(word_45d98, ax));	// 40844 mov     word_45D98, ax ;~ 1678:0349
cs=0x1678;eip=0x00034c; 	X(MOV(word_4554a, 0));	// 40845 mov     word_4554A, 0 ;~ 1678:034C
cs=0x1678;eip=0x000352; 	X(MOV(*(dw*)(raddr(ss,bp+var_45e)), 0));	// 40846 mov     [bp+var_45E], 0 ;~ 1678:0352
cs=0x1678;eip=0x000358; 	T(CMP(transshapenumverts, 8));	// 40847 cmp     transshapenumverts, 8 ;~ 1678:0358
cs=0x1678;eip=0x00035d; 	J(JBE(loc_250c6));	// 40848 jbe     short loc_250C6 ;~ 1678:035D
cs=0x1678;eip=0x00035f; 	X(MOV(transshapenumvertscopy, 8));	// 40849 mov     transshapenumvertscopy, 8 ;~ 1678:035F
cs=0x1678;eip=0x000364; 	J(JMP(loc_250cc));	// 40850 jmp     short loc_250CC ;~ 1678:0364
loc_250c6:
	// 7094 
cs=0x1678;eip=0x000366; 	T(MOV(al, *(db*)(((db*)&transshapenumverts))));	// 40854 mov     al, byte ptr transshapenumverts ;~ 1678:0366
cs=0x1678;eip=0x000369; 	X(MOV(transshapenumvertscopy, al));	// 40855 mov     transshapenumvertscopy, al ;~ 1678:0369
loc_250cc:
	// 7095 
cs=0x1678;eip=0x00036c; 	T(CMP(transshapenumvertscopy, 4));	// 40858 cmp     transshapenumvertscopy, 4 ;~ 1678:036C
cs=0x1678;eip=0x000371; 	J(JBE(loc_250e6));	// 40859 jbe     short loc_250E6 ;~ 1678:0371
cs=0x1678;eip=0x000373; 	T(LES(bx, transshapeverts));	// 40860 les     bx, transshapeverts ;~ 1678:0373
cs=0x1678;eip=0x000377; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1A))));	// 40861 mov     ax, es:[bx+1Ah] ;~ 1678:0377
cs=0x1678;eip=0x00037b; 	T(CMP(*(dw*)(raddr(es,bx+2)), ax));	// 40862 cmp     es:[bx+2], ax ;~ 1678:037B
cs=0x1678;eip=0x00037f; 	J(JNZ(loc_250e6));	// 40863 jnz     short loc_250E6 ;~ 1678:037F
cs=0x1678;eip=0x000381; 	X(MOV(transshapenumvertscopy, 4));	// 40864 mov     transshapenumvertscopy, 4 ;~ 1678:0381
loc_250e6:
	// 7096 
cs=0x1678;eip=0x000386; 	X(MOV(*(raddr(ss,bp+var_44a)), 0x0F));	// 40868 mov     [bp+var_44A], 0Fh ;~ 1678:0386
cs=0x1678;eip=0x00038b; 	X(MOV(*(dw*)(raddr(ss,bp+var_460)), 1));	// 40869 mov     [bp+var_460], 1 ;~ 1678:038B
cs=0x1678;eip=0x000391; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), 0));	// 40870 mov     [bp+var_1A], 0 ;~ 1678:0391
cs=0x1678;eip=0x000396; 	T(SUB(si, si));	// 40871 sub     si, si ;~ 1678:0396
cs=0x1678;eip=0x000398; 	J(JMP(loc_2513f));	// 40872 jmp     short loc_2513F ;~ 1678:0398
loc_250fa:
	// 7097 
cs=0x1678;eip=0x00039a; 	X(MOV(*(dw*)(raddr(ss,bp+var_460)), 0));	// 40876 mov     [bp+var_460], 0 ;~ 1678:039A
cs=0x1678;eip=0x0003a0; 	X(MOV(*(raddr(ss,bp+si+var_562)), 0));	// 40877 mov     [bp+si+var_562], 0 ;~ 1678:03A0
cs=0x1678;eip=0x0003a5; 	T(MOV(bx, si));	// 40878 mov     bx, si ;~ 1678:03A5
cs=0x1678;eip=0x0003a7; 	T(SHL(bx, 1));	// 40879 shl     bx, 1 ;~ 1678:03A7
cs=0x1678;eip=0x0003a9; 	X(PUSH(*(dw*)(((db*)polyvertpointptrtab)+bx)));	// 40880 push    polyvertpointptrtab[bx] ;~ 1678:03A9
cs=0x1678;eip=0x0003ad; 	T(ax = bp+var_56a);	// 40881 lea     ax, [bp+var_56A] ;~ 1678:03AD
cs=0x1678;eip=0x0003b1; 	X(PUSH(ax));	// 40882 push    ax ;~ 1678:03B1
cs=0x1678;eip=0x0003b2; 	J(CALLF(vector_to_point,0));	// 40883 call    vector_to_point ;~ 1678:03B2
cs=0x1678;eip=0x0003b7; 	T(ADD(sp, 4));	// 40884 add     sp, 4 ;~ 1678:03B7
cs=0x1678;eip=0x0003ba; 	T(CMP(*(raddr(ss,bp+var_44a)), 0));	// 40885 cmp     [bp+var_44A], 0 ;~ 1678:03BA
cs=0x1678;eip=0x0003bf; 	J(JZ(loc_25134));	// 40886 jz      short loc_25134 ;~ 1678:03BF
cs=0x1678;eip=0x0003c1; 	T(MOV(bx, si));	// 40887 mov     bx, si ;~ 1678:03C1
cs=0x1678;eip=0x0003c3; 	T(SHL(bx, 1));	// 40888 shl     bx, 1 ;~ 1678:03C3
cs=0x1678;eip=0x0003c5; 	X(PUSH(*(dw*)(((db*)polyvertpointptrtab)+bx)));	// 40889 push    polyvertpointptrtab[bx] ;~ 1678:03C5
cs=0x1678;eip=0x0003c9; 	X(PUSH(cs));	// 40890 push    cs ;~ 1678:03C9
cs=0x1678;eip=0x0003ca; 	J(CALL(rect_compare_point,0));	// 40891 call    near ptr rect_compare_point ;~ 1678:03CA
cs=0x1678;eip=0x0003cd; 	T(ADD(sp, 2));	// 40892 add     sp, 2 ;~ 1678:03CD
cs=0x1678;eip=0x0003d0; 	X(AND(*(raddr(ss,bp+var_44a)), al));	// 40893 and     [bp+var_44A], al ;~ 1678:03D0
loc_25134:
	// 7098 
cs=0x1678;eip=0x0003d4; 	T(CMP(*(raddr(ss,bp+var_44a)), 0));	// 40896 cmp     [bp+var_44A], 0 ;~ 1678:03D4
cs=0x1678;eip=0x0003d9; 	J(JNZ(loc_2513e));	// 40897 jnz     short loc_2513E ;~ 1678:03D9
cs=0x1678;eip=0x0003db; 	J(JMP(loc_25220));	// 40898 jmp     loc_25220 ;~ 1678:03DB
loc_2513e:
	// 7099 
cs=0x1678;eip=0x0003de; 	T(INC(si));	// 40903 inc     si ;~ 1678:03DE
loc_2513f:
	// 7100 
cs=0x1678;eip=0x0003df; 	T(MOV(al, transshapenumvertscopy));	// 40906 mov     al, transshapenumvertscopy ;~ 1678:03DF
cs=0x1678;eip=0x0003e2; 	T(SUB(ah, ah));	// 40907 sub     ah, ah ;~ 1678:03E2
cs=0x1678;eip=0x0003e4; 	T(CMP(ax, si));	// 40908 cmp     ax, si ;~ 1678:03E4
cs=0x1678;eip=0x0003e6; 	J(JA(loc_2514b));	// 40909 ja      short loc_2514B ;~ 1678:03E6
cs=0x1678;eip=0x0003e8; 	J(JMP(loc_251f6));	// 40910 jmp     loc_251F6 ;~ 1678:03E8
loc_2514b:
	// 7101 
cs=0x1678;eip=0x0003eb; 	T(MOV(bx, si));	// 40914 mov     bx, si ;~ 1678:03EB
cs=0x1678;eip=0x0003ed; 	T(SHL(bx, 1));	// 40915 shl     bx, 1 ;~ 1678:03ED
cs=0x1678;eip=0x0003ef; 	T(MOV(ax, si));	// 40916 mov     ax, si ;~ 1678:03EF
cs=0x1678;eip=0x0003f1; 	T(SHL(ax, 1));	// 40917 shl     ax, 1 ;~ 1678:03F1
cs=0x1678;eip=0x0003f3; 	T(SHL(ax, 1));	// 40918 shl     ax, 1 ;~ 1678:03F3
cs=0x1678;eip=0x0003f5; 	T(ADD(ax, bp));	// 40919 add     ax, bp ;~ 1678:03F5
cs=0x1678;eip=0x0003f7; 	T(SUB(ax, 0x416));	// 40920 sub     ax, 416h        ; array access in var_416, but dunno how to make IDA show this ;~ 1678:03F7
cs=0x1678;eip=0x0003fa; 	X(MOV(*(dw*)(((db*)polyvertpointptrtab)+bx), ax));	// 40921 mov     polyvertpointptrtab[bx], ax ;~ 1678:03FA
cs=0x1678;eip=0x0003fe; 	T(MOV(ax, si));	// 40922 mov     ax, si ;~ 1678:03FE
cs=0x1678;eip=0x000400; 	T(MOV(cx, ax));	// 40923 mov     cx, ax ;~ 1678:0400
cs=0x1678;eip=0x000402; 	T(SHL(ax, 1));	// 40924 shl     ax, 1 ;~ 1678:0402
cs=0x1678;eip=0x000404; 	T(ADD(ax, cx));	// 40925 add     ax, cx ;~ 1678:0404
cs=0x1678;eip=0x000406; 	T(SHL(ax, 1));	// 40926 shl     ax, 1 ;~ 1678:0406
cs=0x1678;eip=0x000408; 	T(ADD(ax, *(dw*)(((db*)&transshapeverts))));	// 40927 add     ax, word ptr transshapeverts ;~ 1678:0408
cs=0x1678;eip=0x00040c; 	T(MOV(dx, *(dw*)(((db*)&transshapeverts)+2)));	// 40928 mov     dx, word ptr transshapeverts+2 ;~ 1678:040C
cs=0x1678;eip=0x000410; 	X(PUSH(si));	// 40929 push    si ;~ 1678:0410
cs=0x1678;eip=0x000411; 	X(PUSH(di));	// 40930 push    di ;~ 1678:0411
cs=0x1678;eip=0x000412; 	T(di = bp+var_458);	// 40931 lea     di, [bp+var_458] ;~ 1678:0412
cs=0x1678;eip=0x000416; 	T(MOV(si, ax));	// 40932 mov     si, ax ;~ 1678:0416
cs=0x1678;eip=0x000418; 	X(PUSH(ss));	// 40933 push    ss ;~ 1678:0418
cs=0x1678;eip=0x000419; 	X(POP(es));	// 40934 pop     es ;~ 1678:0419
cs=0x1678;eip=0x00041a; 	X(PUSH(ds));	// 40935 push    ds ;~ 1678:041A
cs=0x1678;eip=0x00041b; 	T(MOV(ds, dx));	// 40936 mov     ds, dx ;~ 1678:041B
cs=0x1678;eip=0x00041d; 	X(MOVSW);	// 40937 movsw ;~ 1678:041D
cs=0x1678;eip=0x00041e; 	X(MOVSW);	// 40938 movsw ;~ 1678:041E
cs=0x1678;eip=0x00041f; 	X(MOVSW);	// 40939 movsw ;~ 1678:041F
cs=0x1678;eip=0x000420; 	X(POP(ds));	// 40940 pop     ds ;~ 1678:0420
cs=0x1678;eip=0x000421; 	X(POP(di));	// 40941 pop     di ;~ 1678:0421
cs=0x1678;eip=0x000422; 	X(POP(si));	// 40942 pop     si ;~ 1678:0422
cs=0x1678;eip=0x000423; 	T(CMP(select_rect_param, 0));	// 40943 cmp     select_rect_param, 0 ;~ 1678:0423
cs=0x1678;eip=0x000428; 	J(JZ(loc_25196));	// 40944 jz      short loc_25196 ;~ 1678:0428
cs=0x1678;eip=0x00042a; 	X(SAR(*(dw*)(raddr(ss,bp+var_458)), 1));	// 40945 sar     [bp+var_458], 1 ;~ 1678:042A
cs=0x1678;eip=0x00042e; 	X(SAR(*(dw*)(raddr(ss,bp+var_456)), 1));	// 40946 sar     [bp+var_456], 1 ;~ 1678:042E
cs=0x1678;eip=0x000432; 	X(SAR(*(dw*)(raddr(ss,bp+var_454)), 1));	// 40947 sar     [bp+var_454], 1 ;~ 1678:0432
loc_25196:
	// 7102 
cs=0x1678;eip=0x000436; 	T(ax = bp+var_56a);	// 40950 lea     ax, [bp+var_56A] ;~ 1678:0436
cs=0x1678;eip=0x00043a; 	X(PUSH(ax));	// 40951 push    ax ;~ 1678:043A
cs=0x1678;eip=0x00043b; 	T(ax = bp+var_42a);	// 40952 lea     ax, [bp+var_42A] ;~ 1678:043B
cs=0x1678;eip=0x00043f; 	X(PUSH(ax));	// 40953 push    ax ;~ 1678:043F
cs=0x1678;eip=0x000440; 	T(ax = bp+var_458);	// 40954 lea     ax, [bp+var_458] ;~ 1678:0440
cs=0x1678;eip=0x000444; 	X(PUSH(ax));	// 40955 push    ax ;~ 1678:0444
cs=0x1678;eip=0x000445; 	J(CALLF(mat_mul_vector,0));	// 40956 call    mat_mul_vector ;~ 1678:0445
cs=0x1678;eip=0x00044a; 	T(ADD(sp, 6));	// 40957 add     sp, 6 ;~ 1678:044A
cs=0x1678;eip=0x00044d; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 40958 mov     ax, word ptr [bp+var_14] ;~ 1678:044D
cs=0x1678;eip=0x000450; 	X(ADD(*(dw*)(raddr(ss,bp+var_56a)), ax));	// 40959 add     [bp+var_56A], ax ;~ 1678:0450
cs=0x1678;eip=0x000454; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_14+2)))));	// 40960 mov     ax, word ptr [bp+var_14+2] ;~ 1678:0454
cs=0x1678;eip=0x000457; 	X(ADD(*(dw*)(raddr(ss,bp+var_568)), ax));	// 40961 add     [bp+var_568], ax ;~ 1678:0457
cs=0x1678;eip=0x00045b; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_10)))));	// 40962 mov     ax, word ptr [bp+var_10] ;~ 1678:045B
cs=0x1678;eip=0x00045e; 	X(ADD(*(dw*)(raddr(ss,bp+var_566)), ax));	// 40963 add     [bp+var_566], ax ;~ 1678:045E
cs=0x1678;eip=0x000462; 	T(MOV(bx, si));	// 40964 mov     bx, si ;~ 1678:0462
cs=0x1678;eip=0x000464; 	T(MOV(ax, bx));	// 40965 mov     ax, bx ;~ 1678:0464
cs=0x1678;eip=0x000466; 	T(SHL(bx, 1));	// 40966 shl     bx, 1 ;~ 1678:0466
cs=0x1678;eip=0x000468; 	T(ADD(bx, ax));	// 40967 add     bx, ax ;~ 1678:0468
cs=0x1678;eip=0x00046a; 	T(SHL(bx, 1));	// 40968 shl     bx, 1           ; bx = vertex index * 6 ;~ 1678:046A
cs=0x1678;eip=0x00046c; 	T(ADD(bx, bp));	// 40969 add     bx, bp ;~ 1678:046C
cs=0x1678;eip=0x00046e; 	X(PUSH(si));	// 40970 push    si ;~ 1678:046E
cs=0x1678;eip=0x00046f; 	X(PUSH(di));	// 40971 push    di ;~ 1678:046F
cs=0x1678;eip=0x000470; 	T(di = bx-0x0B6E);	// 40972 lea     di, [bx-0B6Eh] ;~ 1678:0470
cs=0x1678;eip=0x000474; 	T(si = bp+var_56a);	// 40973 lea     si, [bp+var_56A] ;~ 1678:0474
cs=0x1678;eip=0x000478; 	X(PUSH(ss));	// 40974 push    ss ;~ 1678:0478
cs=0x1678;eip=0x000479; 	X(POP(es));	// 40975 pop     es ;~ 1678:0479
cs=0x1678;eip=0x00047a; 	X(MOVSW);	// 40976 movsw ;~ 1678:047A
cs=0x1678;eip=0x00047b; 	X(MOVSW);	// 40977 movsw ;~ 1678:047B
cs=0x1678;eip=0x00047c; 	X(MOVSW);	// 40978 movsw ;~ 1678:047C
cs=0x1678;eip=0x00047d; 	X(POP(di));	// 40979 pop     di ;~ 1678:047D
cs=0x1678;eip=0x00047e; 	X(POP(si));	// 40980 pop     si ;~ 1678:047E
cs=0x1678;eip=0x00047f; 	T(CMP(*(dw*)(raddr(ss,bp+var_566)), 0x0C));	// 40981 cmp     [bp+var_566], 0Ch ;~ 1678:047F
cs=0x1678;eip=0x000484; 	J(JL(loc_251e9));	// 40982 jl      short loc_251E9 ;~ 1678:0484
cs=0x1678;eip=0x000486; 	J(JMP(loc_250fa));	// 40983 jmp     loc_250FA ;~ 1678:0486
loc_251e9:
	// 7103 
cs=0x1678;eip=0x000489; 	X(MOV(*(raddr(ss,bp+si+var_562)), 1));	// 40987 mov     [bp+si+var_562], 1 ;~ 1678:0489
cs=0x1678;eip=0x00048e; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), 1));	// 40988 mov     [bp+var_1A], 1 ;~ 1678:048E
cs=0x1678;eip=0x000493; 	J(JMP(loc_2513e));	// 40989 jmp     loc_2513E ;~ 1678:0493
loc_251f6:
	// 7104 
cs=0x1678;eip=0x000496; 	T(CMP(*(dw*)(raddr(ss,bp+var_460)), 0));	// 40993 cmp     [bp+var_460], 0 ;~ 1678:0496
cs=0x1678;eip=0x00049b; 	J(JNZ(_done_ret_neg1));	// 40994 jnz     short _done_ret_neg1 ;~ 1678:049B
cs=0x1678;eip=0x00049d; 	T(CMP(*(dw*)(raddr(ss,bp+var_1a)), 0));	// 40995 cmp     [bp+var_1A], 0 ;~ 1678:049D
cs=0x1678;eip=0x0004a1; 	J(JZ(_done_ret_neg1));	// 40996 jz      short _done_ret_neg1 ;~ 1678:04A1
cs=0x1678;eip=0x0004a3; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 40997 push    word ptr [bp+var_14] ; int ;~ 1678:04A3
cs=0x1678;eip=0x0004a6; 	J(CALLF(_abs,0));	// 40998 call    _abs ;~ 1678:04A6
cs=0x1678;eip=0x0004ab; 	T(ADD(sp, 2));	// 40999 add     sp, 2 ;~ 1678:04AB
cs=0x1678;eip=0x0004ae; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 41000 mov     bx, [bp+arg_0] ;~ 1678:04AE
cs=0x1678;eip=0x0004b1; 	T(CMP(*(dw*)(raddr(ds,bx+0x10)), ax));	// 41001 cmp     [bx+10h], ax ;~ 1678:04B1
cs=0x1678;eip=0x0004b4; 	J(JGE(loc_25220));	// 41002 jge     short loc_25220 ;~ 1678:04B4
_done_ret_neg1:
	// 7105 
cs=0x1678;eip=0x0004b6; 	T(MOV(ax, 0x0FFFF));	// 41006 mov     ax, 0FFFFh ;~ 1678:04B6
cs=0x1678;eip=0x0004b9; 	X(POP(si));	// 41007 pop     si ;~ 1678:04B9
cs=0x1678;eip=0x0004ba; 	X(POP(di));	// 41008 pop     di ;~ 1678:04BA
cs=0x1678;eip=0x0004bb; 	T(MOV(sp, bp));	// 41009 mov     sp, bp ;~ 1678:04BB
cs=0x1678;eip=0x0004bd; 	X(POP(bp));	// 41010 pop     bp ;~ 1678:04BD
cs=0x1678;eip=0x0004be; 	J(RETF(0));	// 41011 retf ;~ 1678:04BE
loc_25220:
	// 7106 
cs=0x1678;eip=0x0004c0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 41017 mov     bx, [bp+arg_0] ;~ 1678:04C0
cs=0x1678;eip=0x0004c3; 	T(MOV(bx, *(dw*)(raddr(ds,bx+6))));	// 41018 mov     bx, [bx+6] ;~ 1678:04C3
cs=0x1678;eip=0x0004c6; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0A))));	// 41019 mov     ax, [bx+0Ah] ;~ 1678:04C6
cs=0x1678;eip=0x0004c9; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0C))));	// 41020 mov     dx, [bx+0Ch] ;~ 1678:04C9
cs=0x1678;eip=0x0004cc; 	X(MOV(*(dw*)(((db*)&transshapeprimitives)), ax));	// 41021 mov     word ptr transshapeprimitives, ax ;~ 1678:04CC
cs=0x1678;eip=0x0004cf; 	X(MOV(*(dw*)(((db*)&transshapeprimitives)+2), dx));	// 41022 mov     word ptr transshapeprimitives+2, dx ;~ 1678:04CF
loc_25233:
	// 7107 
cs=0x1678;eip=0x0004d3; 	T(LES(bx, transshapeprimitives));	// 41025 les     bx, transshapeprimitives ;~ 1678:04D3
cs=0x1678;eip=0x0004d7; 	T(MOV(bl, *(raddr(es,bx))));	// 41026 mov     bl, es:[bx]     ; primitives+0 = primitive type ;~ 1678:04D7
cs=0x1678;eip=0x0004da; 	T(SUB(bh, bh));	// 41027 sub     bh, bh ;~ 1678:04DA
cs=0x1678;eip=0x0004dc; 	T(MOV(al, *((&primidxcounttab)+bx)));	// 41028 mov     al, primidxcounttab[bx] ; look up maybe indexcount from a table? ;~ 1678:04DC
cs=0x1678;eip=0x0004e0; 	T(SUB(ah, ah));	// 41029 sub     ah, ah ;~ 1678:04E0
cs=0x1678;eip=0x0004e2; 	T(ADD(ax, transshapenumpaints));	// 41030 add     ax, transshapenumpaints ;~ 1678:04E2
cs=0x1678;eip=0x0004e6; 	T(ADD(ax, *(dw*)(((db*)&transshapeprimitives))));	// 41031 add     ax, word ptr transshapeprimitives ;~ 1678:04E6
cs=0x1678;eip=0x0004ea; 	T(MOV(dx, es));	// 41032 mov     dx, es ;~ 1678:04EA
cs=0x1678;eip=0x0004ec; 	T(ADD(ax, 2));	// 41033 add     ax, 2 ;~ 1678:04EC
cs=0x1678;eip=0x0004ef; 	X(MOV(transshapeprimptr, ax));	// 41034 mov     transshapeprimptr, ax ;~ 1678:04EF
cs=0x1678;eip=0x0004f2; 	X(MOV(word_4186c, dx));	// 41035 mov     word_4186C, dx ;~ 1678:04F2
cs=0x1678;eip=0x0004f6; 	T(MOV(bx, *(dw*)(((db*)&transshapeprimitives))));	// 41036 mov     bx, word ptr transshapeprimitives ;~ 1678:04F6
cs=0x1678;eip=0x0004fa; 	T(MOV(al, *(raddr(es,bx+1))));	// 41037 mov     al, es:[bx+1]   ; primitives+1 = primitive flags ;~ 1678:04FA
cs=0x1678;eip=0x0004fe; 	T(SUB(ah, ah));	// 41038 sub     ah, ah ;~ 1678:04FE
cs=0x1678;eip=0x000500; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 41039 mov     [bp+var_2], ax ;~ 1678:0500
cs=0x1678;eip=0x000503; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 41040 mov     [bp+var_4], 0 ;~ 1678:0503
cs=0x1678;eip=0x000508; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_b78))));	// 41041 les     bx, [bp+var_B78] ;~ 1678:0508
cs=0x1678;eip=0x00050c; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 41042 mov     ax, es:[bx] ;~ 1678:050C
cs=0x1678;eip=0x00050f; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 41043 mov     dx, es:[bx+2] ;~ 1678:050F
cs=0x1678;eip=0x000513; 	T(AND(ax, *(dw*)(raddr(ss,bp+var_45c))));	// 41044 and     ax, [bp+var_45C] ;~ 1678:0513
cs=0x1678;eip=0x000517; 	T(AND(dx, *(dw*)(raddr(ss,bp+var_45a))));	// 41045 and     dx, [bp+var_45A] ;~ 1678:0517
cs=0x1678;eip=0x00051b; 	T(OR(dx, ax));	// 41046 or      dx, ax ;~ 1678:051B
cs=0x1678;eip=0x00051d; 	J(JNZ(loc_25282));	// 41047 jnz     short loc_25282 ;~ 1678:051D
cs=0x1678;eip=0x00051f; 	J(JMP(loc_25801));	// 41048 jmp     loc_25801 ;~ 1678:051F
loc_25282:
	// 7108 
cs=0x1678;eip=0x000522; 	T(LES(bx, transshapeprimitives));	// 41052 les     bx, transshapeprimitives ;~ 1678:0522
cs=0x1678;eip=0x000526; 	T(MOV(al, *(raddr(es,bx))));	// 41053 mov     al, es:[bx]     ; primitives+0 = type ;~ 1678:0526
cs=0x1678;eip=0x000529; 	T(SUB(ah, ah));	// 41054 sub     ah, ah ;~ 1678:0529
cs=0x1678;eip=0x00052b; 	X(MOV(*(dw*)(raddr(ss,bp+var_418)), ax));	// 41055 mov     [bp+var_418], ax ;~ 1678:052B
cs=0x1678;eip=0x00052f; 	T(MOV(bx, ax));	// 41056 mov     bx, ax ;~ 1678:052F
cs=0x1678;eip=0x000531; 	T(MOV(al, *((&primidxcounttab)+bx)));	// 41057 mov     al, primidxcounttab[bx] ;~ 1678:0531
cs=0x1678;eip=0x000535; 	X(MOV(transshapenumvertscopy, al));	// 41058 mov     transshapenumvertscopy, al ;~ 1678:0535
cs=0x1678;eip=0x000538; 	T(MOV(al, *((&primtypetab)+bx)));	// 41059 mov     al, primtypetab[bx] ;~ 1678:0538
cs=0x1678;eip=0x00053c; 	X(MOV(*(raddr(ss,bp+var_6)), al));	// 41060 mov     [bp+var_6], al  ; primunktab maps from file-based primitive type to internal type: ;~ 1678:053C
cs=0x1678;eip=0x00053f; 	T(MOV(ax, polyinfoptrnext));	// 41067 mov     ax, polyinfoptrnext ;~ 1678:053F
cs=0x1678;eip=0x000542; 	T(ADD(ax, polyinfoptr));	// 41068 add     ax, polyinfoptr ;~ 1678:0542
cs=0x1678;eip=0x000546; 	T(MOV(dx, word_40ed4));	// 41069 mov     dx, word_40ED4 ;~ 1678:0546
cs=0x1678;eip=0x00054a; 	X(MOV(*(dw*)(((db*)&transshapepolyinfo)), ax));	// 41070 mov     word ptr transshapepolyinfo, ax ;~ 1678:054A
cs=0x1678;eip=0x00054d; 	X(MOV(*(dw*)(((db*)&transshapepolyinfo)+2), dx));	// 41071 mov     word ptr transshapepolyinfo+2, dx ;~ 1678:054D
cs=0x1678;eip=0x000551; 	T(MOV(bx, polyinfonumpolys));	// 41072 mov     bx, polyinfonumpolys ;~ 1678:0551
cs=0x1678;eip=0x000555; 	T(SHL(bx, 1));	// 41073 shl     bx, 1 ;~ 1678:0555
cs=0x1678;eip=0x000557; 	T(SHL(bx, 1));	// 41074 shl     bx, 1 ;~ 1678:0557
cs=0x1678;eip=0x000559; 	X(MOV(*(dw*)(((db*)polyinfoptrs)+bx), ax));	// 41075 mov     word ptr polyinfoptrs[bx], ax ;~ 1678:0559
cs=0x1678;eip=0x00055d; 	X(MOV(*(dw*)((((db*)polyinfoptrs)+2)+bx), dx));	// 41076 mov     word ptr (polyinfoptrs+2)[bx], dx ;~ 1678:055D
cs=0x1678;eip=0x000561; 	T(MOV(bl, transshapematerial));	// 41077 mov     bl, transshapematerial ;~ 1678:0561
cs=0x1678;eip=0x000565; 	T(SUB(bh, bh));	// 41078 sub     bh, bh ;~ 1678:0565
cs=0x1678;eip=0x000567; 	T(ADD(bx, *(dw*)(((db*)&transshapeprimitives))));	// 41079 add     bx, word ptr transshapeprimitives ;~ 1678:0567
cs=0x1678;eip=0x00056b; 	T(MOV(es, *(dw*)(((db*)&transshapeprimitives)+2)));	// 41080 mov     es, word ptr transshapeprimitives+2 ;~ 1678:056B
cs=0x1678;eip=0x00056f; 	T(MOV(al, *(raddr(es,bx+2))));	// 41081 mov     al, es:[bx+2]   ; primitives+2+X = paint job color, X in [0..numpaints] ;~ 1678:056F
cs=0x1678;eip=0x000573; 	X(MOV(transprimitivepaintjob, al));	// 41082 mov     transprimitivepaintjob, al ;~ 1678:0573
cs=0x1678;eip=0x000576; 	T(MOV(ax, transshapenumpaints));	// 41083 mov     ax, transshapenumpaints ;~ 1678:0576
cs=0x1678;eip=0x000579; 	T(ADD(ax, 2));	// 41084 add     ax, 2 ;~ 1678:0579
cs=0x1678;eip=0x00057c; 	X(ADD(*(dw*)(((db*)&transshapeprimitives)), ax));	// 41085 add     word ptr transshapeprimitives, ax ; <- skip header and materials, -> point at indices ;~ 1678:057C
cs=0x1678;eip=0x000580; 	X(MOV(*(raddr(ss,bp+var_44a)), 0x0F));	// 41086 mov     [bp+var_44A], 0Fh ;~ 1678:0580
cs=0x1678;eip=0x000585; 	X(MOV(*(dw*)(raddr(ss,bp+var_460)), 1));	// 41087 mov     [bp+var_460], 1 ;~ 1678:0585
cs=0x1678;eip=0x00058b; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), 0));	// 41088 mov     [bp+var_1A], 0 ;~ 1678:058B
cs=0x1678;eip=0x000590; 	T(MOV(ax, *(dw*)(((db*)&transshapeprimitives))));	// 41089 mov     ax, word ptr transshapeprimitives ;~ 1678:0590
cs=0x1678;eip=0x000593; 	T(MOV(dx, es));	// 41090 mov     dx, es ;~ 1678:0593
cs=0x1678;eip=0x000595; 	X(MOV(transshapeprimindexptr, ax));	// 41091 mov     transshapeprimindexptr, ax ;~ 1678:0595
cs=0x1678;eip=0x000598; 	X(MOV(word_41876, dx));	// 41092 mov     word_41876, dx ;~ 1678:0598
cs=0x1678;eip=0x00059c; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10+2))), 0));	// 41093 mov     word ptr [bp+var_10+2], 0 ;~ 1678:059C
cs=0x1678;eip=0x0005a1; 	J(JMP(loc_25328));	// 41094 jmp     short loc_25328 ;~ 1678:05A1
loc_25304:
	// 7109 
cs=0x1678;eip=0x0005a4; 	X(MOV(*(dw*)(raddr(ss,bp+var_460)), 0));	// 41099 mov     [bp+var_460], 0 ;~ 1678:05A4
loc_2530a:
	// 7110 
cs=0x1678;eip=0x0005aa; 	T(CMP(*(raddr(ss,bp+var_44a)), 0));	// 41102 cmp     [bp+var_44A], 0 ;~ 1678:05AA
cs=0x1678;eip=0x0005af; 	J(JZ(loc_25325));	// 41103 jz      short loc_25325 ;~ 1678:05AF
cs=0x1678;eip=0x0005b1; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_10+2)))));	// 41104 mov     bx, word ptr [bp+var_10+2] ;~ 1678:05B1
cs=0x1678;eip=0x0005b4; 	T(SHL(bx, 1));	// 41105 shl     bx, 1 ;~ 1678:05B4
cs=0x1678;eip=0x0005b6; 	X(PUSH(*(dw*)(((db*)polyvertpointptrtab)+bx)));	// 41106 push    polyvertpointptrtab[bx] ;~ 1678:05B6
cs=0x1678;eip=0x0005ba; 	X(PUSH(cs));	// 41107 push    cs ;~ 1678:05BA
cs=0x1678;eip=0x0005bb; 	J(CALL(rect_compare_point,0));	// 41108 call    near ptr rect_compare_point ;~ 1678:05BB
cs=0x1678;eip=0x0005be; 	T(ADD(sp, 2));	// 41109 add     sp, 2 ;~ 1678:05BE
cs=0x1678;eip=0x0005c1; 	X(AND(*(raddr(ss,bp+var_44a)), al));	// 41110 and     [bp+var_44A], al ;~ 1678:05C1
loc_25325:
	// 7111 
cs=0x1678;eip=0x0005c5; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_10+2)))));	// 41114 inc     word ptr [bp+var_10+2] ;~ 1678:05C5
loc_25328:
	// 7112 
cs=0x1678;eip=0x0005c8; 	T(MOV(al, transshapenumvertscopy));	// 41117 mov     al, transshapenumvertscopy ;~ 1678:05C8
cs=0x1678;eip=0x0005cb; 	T(SUB(ah, ah));	// 41118 sub     ah, ah ;~ 1678:05CB
cs=0x1678;eip=0x0005cd; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+var_10+2))), ax));	// 41119 cmp     word ptr [bp+var_10+2], ax ;~ 1678:05CD
cs=0x1678;eip=0x0005d0; 	J(JC(loc_25335));	// 41120 jb      short loc_25335 ;~ 1678:05D0
cs=0x1678;eip=0x0005d2; 	J(JMP(loc_2542a));	// 41121 jmp     loc_2542A ;~ 1678:05D2
loc_25335:
	// 7113 
cs=0x1678;eip=0x0005d5; 	T(MOV(bx, transshapeprimindexptr));	// 41125 mov     bx, transshapeprimindexptr ;~ 1678:05D5
cs=0x1678;eip=0x0005d9; 	X(INC(transshapeprimindexptr));	// 41126 inc     transshapeprimindexptr ;~ 1678:05D9
cs=0x1678;eip=0x0005dd; 	T(MOV(es, word_41876));	// 41127 mov     es, word_41876 ;~ 1678:05DD
cs=0x1678;eip=0x0005e1; 	T(MOV(al, *(raddr(es,bx))));	// 41128 mov     al, es:[bx] ;~ 1678:05E1
cs=0x1678;eip=0x0005e4; 	T(MOV(si, ax));	// 41129 mov     si, ax ;~ 1678:05E4
cs=0x1678;eip=0x0005e6; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_10+2)))));	// 41130 mov     bx, word ptr [bp+var_10+2] ;~ 1678:05E6
cs=0x1678;eip=0x0005e9; 	T(SHL(bx, 1));	// 41131 shl     bx, 1 ;~ 1678:05E9
cs=0x1678;eip=0x0005eb; 	T(SHL(ax, 1));	// 41132 shl     ax, 1 ;~ 1678:05EB
cs=0x1678;eip=0x0005ed; 	T(SHL(ax, 1));	// 41133 shl     ax, 1 ;~ 1678:05ED
cs=0x1678;eip=0x0005ef; 	T(ADD(ax, bp));	// 41134 add     ax, bp ;~ 1678:05EF
cs=0x1678;eip=0x0005f1; 	T(SUB(ax, 0x416));	// 41135 sub     ax, 416h ;~ 1678:05F1
cs=0x1678;eip=0x0005f4; 	X(MOV(*(dw*)(((db*)polyvertpointptrtab)+bx), ax));	// 41136 mov     polyvertpointptrtab[bx], ax ;~ 1678:05F4
cs=0x1678;eip=0x0005f8; 	T(MOV(al, *(raddr(ss,bp+si+var_562))));	// 41137 mov     al, [bp+si+var_562] ;~ 1678:05F8
cs=0x1678;eip=0x0005fc; 	T(CBW);	// 41138 cbw ;~ 1678:05FC
cs=0x1678;eip=0x0005fd; 	T(CMP(ax, 0x0FFFF));	// 41139 cmp     ax, 0FFFFh ;~ 1678:05FD
cs=0x1678;eip=0x000600; 	J(JZ(loc_25370));	// 41140 jz      short loc_25370 ;~ 1678:0600
cs=0x1678;eip=0x000602; 	T(OR(ax, ax));	// 41141 or      ax, ax ;~ 1678:0602
cs=0x1678;eip=0x000604; 	J(JZ(loc_25304));	// 41142 jz      short loc_25304 ;~ 1678:0604
cs=0x1678;eip=0x000606; 	T(CMP(ax, 1));	// 41143 cmp     ax, 1 ;~ 1678:0606
cs=0x1678;eip=0x000609; 	J(JNZ(loc_2536e));	// 41144 jnz     short loc_2536E ;~ 1678:0609
cs=0x1678;eip=0x00060b; 	J(JMP(loc_253fd));	// 41145 jmp     loc_253FD ;~ 1678:060B
loc_2536e:
	// 7114 
cs=0x1678;eip=0x00060e; 	J(JMP(loc_25325));	// 41149 jmp     short loc_25325 ;~ 1678:060E
loc_25370:
	// 7115 
cs=0x1678;eip=0x000610; 	T(MOV(ax, si));	// 41153 mov     ax, si ;~ 1678:0610
cs=0x1678;eip=0x000612; 	T(MOV(cx, ax));	// 41154 mov     cx, ax ;~ 1678:0612
cs=0x1678;eip=0x000614; 	T(SHL(ax, 1));	// 41155 shl     ax, 1 ;~ 1678:0614
cs=0x1678;eip=0x000616; 	T(ADD(ax, cx));	// 41156 add     ax, cx ;~ 1678:0616
cs=0x1678;eip=0x000618; 	T(SHL(ax, 1));	// 41157 shl     ax, 1 ;~ 1678:0618
cs=0x1678;eip=0x00061a; 	T(ADD(ax, *(dw*)(((db*)&transshapeverts))));	// 41158 add     ax, word ptr transshapeverts ;~ 1678:061A
cs=0x1678;eip=0x00061e; 	T(MOV(dx, *(dw*)(((db*)&transshapeverts)+2)));	// 41159 mov     dx, word ptr transshapeverts+2 ;~ 1678:061E
cs=0x1678;eip=0x000622; 	X(PUSH(si));	// 41160 push    si ;~ 1678:0622
cs=0x1678;eip=0x000623; 	X(PUSH(di));	// 41161 push    di ;~ 1678:0623
cs=0x1678;eip=0x000624; 	T(di = bp+var_458);	// 41162 lea     di, [bp+var_458] ;~ 1678:0624
cs=0x1678;eip=0x000628; 	T(MOV(si, ax));	// 41163 mov     si, ax ;~ 1678:0628
cs=0x1678;eip=0x00062a; 	X(PUSH(ss));	// 41164 push    ss ;~ 1678:062A
cs=0x1678;eip=0x00062b; 	X(POP(es));	// 41165 pop     es ;~ 1678:062B
cs=0x1678;eip=0x00062c; 	X(PUSH(ds));	// 41166 push    ds ;~ 1678:062C
cs=0x1678;eip=0x00062d; 	T(MOV(ds, dx));	// 41167 mov     ds, dx ;~ 1678:062D
cs=0x1678;eip=0x00062f; 	X(MOVSW);	// 41168 movsw ;~ 1678:062F
cs=0x1678;eip=0x000630; 	X(MOVSW);	// 41169 movsw ;~ 1678:0630
cs=0x1678;eip=0x000631; 	X(MOVSW);	// 41170 movsw ;~ 1678:0631
cs=0x1678;eip=0x000632; 	X(POP(ds));	// 41171 pop     ds ;~ 1678:0632
cs=0x1678;eip=0x000633; 	X(POP(di));	// 41172 pop     di ;~ 1678:0633
cs=0x1678;eip=0x000634; 	X(POP(si));	// 41173 pop     si ;~ 1678:0634
cs=0x1678;eip=0x000635; 	T(CMP(select_rect_param, 0));	// 41174 cmp     select_rect_param, 0 ;~ 1678:0635
cs=0x1678;eip=0x00063a; 	J(JZ(loc_253a8));	// 41175 jz      short loc_253A8 ;~ 1678:063A
cs=0x1678;eip=0x00063c; 	X(SAR(*(dw*)(raddr(ss,bp+var_458)), 1));	// 41176 sar     [bp+var_458], 1 ;~ 1678:063C
cs=0x1678;eip=0x000640; 	X(SAR(*(dw*)(raddr(ss,bp+var_456)), 1));	// 41177 sar     [bp+var_456], 1 ;~ 1678:0640
cs=0x1678;eip=0x000644; 	X(SAR(*(dw*)(raddr(ss,bp+var_454)), 1));	// 41178 sar     [bp+var_454], 1 ;~ 1678:0644
loc_253a8:
	// 7116 
cs=0x1678;eip=0x000648; 	T(ax = bp+var_56a);	// 41181 lea     ax, [bp+var_56A] ;~ 1678:0648
cs=0x1678;eip=0x00064c; 	X(PUSH(ax));	// 41182 push    ax ;~ 1678:064C
cs=0x1678;eip=0x00064d; 	T(ax = bp+var_42a);	// 41183 lea     ax, [bp+var_42A] ;~ 1678:064D
cs=0x1678;eip=0x000651; 	X(PUSH(ax));	// 41184 push    ax ;~ 1678:0651
cs=0x1678;eip=0x000652; 	T(ax = bp+var_458);	// 41185 lea     ax, [bp+var_458] ;~ 1678:0652
cs=0x1678;eip=0x000656; 	X(PUSH(ax));	// 41186 push    ax ;~ 1678:0656
cs=0x1678;eip=0x000657; 	J(CALLF(mat_mul_vector,0));	// 41187 call    mat_mul_vector ;~ 1678:0657
cs=0x1678;eip=0x00065c; 	T(ADD(sp, 6));	// 41188 add     sp, 6 ;~ 1678:065C
cs=0x1678;eip=0x00065f; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 41189 mov     ax, word ptr [bp+var_14] ;~ 1678:065F
cs=0x1678;eip=0x000662; 	X(ADD(*(dw*)(raddr(ss,bp+var_56a)), ax));	// 41190 add     [bp+var_56A], ax ;~ 1678:0662
cs=0x1678;eip=0x000666; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_14+2)))));	// 41191 mov     ax, word ptr [bp+var_14+2] ;~ 1678:0666
cs=0x1678;eip=0x000669; 	X(ADD(*(dw*)(raddr(ss,bp+var_568)), ax));	// 41192 add     [bp+var_568], ax ;~ 1678:0669
cs=0x1678;eip=0x00066d; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_10)))));	// 41193 mov     ax, word ptr [bp+var_10] ;~ 1678:066D
cs=0x1678;eip=0x000670; 	X(ADD(*(dw*)(raddr(ss,bp+var_566)), ax));	// 41194 add     [bp+var_566], ax ;~ 1678:0670
cs=0x1678;eip=0x000674; 	T(MOV(bx, si));	// 41195 mov     bx, si ;~ 1678:0674
cs=0x1678;eip=0x000676; 	T(MOV(ax, bx));	// 41196 mov     ax, bx ;~ 1678:0676
cs=0x1678;eip=0x000678; 	T(SHL(bx, 1));	// 41197 shl     bx, 1 ;~ 1678:0678
cs=0x1678;eip=0x00067a; 	T(ADD(bx, ax));	// 41198 add     bx, ax ;~ 1678:067A
cs=0x1678;eip=0x00067c; 	T(SHL(bx, 1));	// 41199 shl     bx, 1 ;~ 1678:067C
cs=0x1678;eip=0x00067e; 	T(ADD(bx, bp));	// 41200 add     bx, bp ;~ 1678:067E
cs=0x1678;eip=0x000680; 	X(PUSH(si));	// 41201 push    si ;~ 1678:0680
cs=0x1678;eip=0x000681; 	X(PUSH(di));	// 41202 push    di ;~ 1678:0681
cs=0x1678;eip=0x000682; 	T(di = bx-0x0B6E);	// 41203 lea     di, [bx-0B6Eh] ;~ 1678:0682
cs=0x1678;eip=0x000686; 	T(si = bp+var_56a);	// 41204 lea     si, [bp+var_56A] ;~ 1678:0686
cs=0x1678;eip=0x00068a; 	X(PUSH(ss));	// 41205 push    ss ;~ 1678:068A
cs=0x1678;eip=0x00068b; 	X(POP(es));	// 41206 pop     es ;~ 1678:068B
cs=0x1678;eip=0x00068c; 	X(MOVSW);	// 41207 movsw ;~ 1678:068C
cs=0x1678;eip=0x00068d; 	X(MOVSW);	// 41208 movsw ;~ 1678:068D
cs=0x1678;eip=0x00068e; 	X(MOVSW);	// 41209 movsw ;~ 1678:068E
cs=0x1678;eip=0x00068f; 	X(POP(di));	// 41210 pop     di ;~ 1678:068F
cs=0x1678;eip=0x000690; 	X(POP(si));	// 41211 pop     si ;~ 1678:0690
cs=0x1678;eip=0x000691; 	T(CMP(*(dw*)(raddr(ss,bp+var_566)), 0x0C));	// 41212 cmp     [bp+var_566], 0Ch ;~ 1678:0691
cs=0x1678;eip=0x000696; 	J(JGE(loc_25406));	// 41213 jge     short loc_25406 ;~ 1678:0696
cs=0x1678;eip=0x000698; 	X(MOV(*(raddr(ss,bp+si+var_562)), 1));	// 41214 mov     [bp+si+var_562], 1 ;~ 1678:0698
loc_253fd:
	// 7117 
cs=0x1678;eip=0x00069d; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), 1));	// 41217 mov     [bp+var_1A], 1 ;~ 1678:069D
cs=0x1678;eip=0x0006a2; 	J(JMP(loc_25325));	// 41218 jmp     loc_25325 ;~ 1678:06A2
loc_25406:
	// 7118 
cs=0x1678;eip=0x0006a6; 	X(MOV(*(dw*)(raddr(ss,bp+var_460)), 0));	// 41223 mov     [bp+var_460], 0 ;~ 1678:06A6
cs=0x1678;eip=0x0006ac; 	X(MOV(*(raddr(ss,bp+si+var_562)), 0));	// 41224 mov     [bp+si+var_562], 0 ;~ 1678:06AC
cs=0x1678;eip=0x0006b1; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_10+2)))));	// 41225 mov     bx, word ptr [bp+var_10+2] ;~ 1678:06B1
cs=0x1678;eip=0x0006b4; 	T(SHL(bx, 1));	// 41226 shl     bx, 1 ;~ 1678:06B4
cs=0x1678;eip=0x0006b6; 	X(PUSH(*(dw*)(((db*)polyvertpointptrtab)+bx)));	// 41227 push    polyvertpointptrtab[bx] ;~ 1678:06B6
cs=0x1678;eip=0x0006ba; 	T(ax = bp+var_56a);	// 41228 lea     ax, [bp+var_56A] ;~ 1678:06BA
cs=0x1678;eip=0x0006be; 	X(PUSH(ax));	// 41229 push    ax ;~ 1678:06BE
cs=0x1678;eip=0x0006bf; 	J(CALLF(vector_to_point,0));	// 41230 call    vector_to_point ;~ 1678:06BF
cs=0x1678;eip=0x0006c4; 	T(ADD(sp, 4));	// 41231 add     sp, 4 ;~ 1678:06C4
cs=0x1678;eip=0x0006c7; 	J(JMP(loc_2530a));	// 41232 jmp     loc_2530A ;~ 1678:06C7
loc_2542a:
	// 7119 
cs=0x1678;eip=0x0006ca; 	T(CMP(*(dw*)(raddr(ss,bp+var_460)), 0));	// 41236 cmp     [bp+var_460], 0 ;~ 1678:06CA
cs=0x1678;eip=0x0006cf; 	J(JZ(loc_25434));	// 41237 jz      short loc_25434 ;~ 1678:06CF
cs=0x1678;eip=0x0006d1; 	J(JMP(loc_25801));	// 41238 jmp     loc_25801 ;~ 1678:06D1
loc_25434:
	// 7120 
cs=0x1678;eip=0x0006d4; 	T(CMP(*(raddr(ss,bp+var_44a)), 0));	// 41242 cmp     [bp+var_44A], 0 ;~ 1678:06D4
cs=0x1678;eip=0x0006d9; 	J(JZ(loc_25444));	// 41243 jz      short loc_25444 ;~ 1678:06D9
cs=0x1678;eip=0x0006db; 	T(CMP(*(dw*)(raddr(ss,bp+var_1a)), 0));	// 41244 cmp     [bp+var_1A], 0 ;~ 1678:06DB
cs=0x1678;eip=0x0006df; 	J(JNZ(loc_25444));	// 41245 jnz     short loc_25444 ;~ 1678:06DF
cs=0x1678;eip=0x0006e1; 	J(JMP(loc_25801));	// 41246 jmp     loc_25801 ;~ 1678:06E1
loc_25444:
	// 7121 
cs=0x1678;eip=0x0006e4; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 41251 mov     al, [bp+var_6] ;~ 1678:06E4
cs=0x1678;eip=0x0006e7; 	T(SUB(ah, ah));	// 41252 sub     ah, ah ;~ 1678:06E7
cs=0x1678;eip=0x0006e9; 	T(OR(ax, ax));	// 41253 or      ax, ax ;~ 1678:06E9
cs=0x1678;eip=0x0006eb; 	J(JZ(_primtype_poly));	// 41254 jz      short _primtype_poly ; al = 0 for polygons, ;~ 1678:06EB
cs=0x1678;eip=0x0006ed; 	T(CMP(ax, 1));	// 41255 cmp     ax, 1           ; 1 = lines ;~ 1678:06ED
cs=0x1678;eip=0x0006f0; 	J(JNZ(loc_25455));	// 41256 jnz     short loc_25455 ;~ 1678:06F0
cs=0x1678;eip=0x0006f2; 	J(JMP(_primtype_line));	// 41257 jmp     _primtype_line ;~ 1678:06F2
loc_25455:
	// 7122 
cs=0x1678;eip=0x0006f5; 	T(CMP(ax, 2));	// 41261 cmp     ax, 2 ;~ 1678:06F5
cs=0x1678;eip=0x0006f8; 	J(JNZ(loc_2545d));	// 41262 jnz     short loc_2545D ;~ 1678:06F8
cs=0x1678;eip=0x0006fa; 	J(JMP(_primtype_sphere));	// 41263 jmp     _primtype_sphere ; 2 = sphere ;~ 1678:06FA
loc_2545d:
	// 7123 
cs=0x1678;eip=0x0006fd; 	T(CMP(ax, 3));	// 41267 cmp     ax, 3 ;~ 1678:06FD
cs=0x1678;eip=0x000700; 	J(JNZ(loc_25465));	// 41268 jnz     short loc_25465 ;~ 1678:0700
cs=0x1678;eip=0x000702; 	J(JMP(_primtype_wheel));	// 41269 jmp     _primtype_wheel ; 3 = wheel ;~ 1678:0702
loc_25465:
	// 7124 
cs=0x1678;eip=0x000705; 	T(CMP(ax, 5));	// 41273 cmp     ax, 5 ;~ 1678:0705
cs=0x1678;eip=0x000708; 	J(JNZ(loc_2546d));	// 41274 jnz     short loc_2546D ;~ 1678:0708
cs=0x1678;eip=0x00070a; 	J(JMP(loc_25ce0));	// 41275 jmp     loc_25CE0       ; 5 = particle ;~ 1678:070A
loc_2546d:
	// 7125 
cs=0x1678;eip=0x00070d; 	J(JMP(loc_25801));	// 41279 jmp     loc_25801       ; everything else? (4?) ;~ 1678:070D
_primtype_poly:
	// 7126 
cs=0x1678;eip=0x000710; 	T(MOV(ax, *(dw*)(((db*)&transshapepolyinfo))));	// 41283 mov     ax, word ptr transshapepolyinfo ;~ 1678:0710
cs=0x1678;eip=0x000713; 	T(MOV(dx, *(dw*)(((db*)&transshapepolyinfo)+2)));	// 41284 mov     dx, word ptr transshapepolyinfo+2 ;~ 1678:0713
cs=0x1678;eip=0x000717; 	T(ADD(ax, 6));	// 41285 add     ax, 6 ;~ 1678:0717
cs=0x1678;eip=0x00071a; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_430))), ax));	// 41286 mov     word ptr [bp+var_430], ax ;~ 1678:071A
cs=0x1678;eip=0x00071e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_430+2))), dx));	// 41287 mov     word ptr [bp+var_430+2], dx ;~ 1678:071E
cs=0x1678;eip=0x000722; 	T(MOV(ax, *(dw*)(((db*)&transshapeprimitives))));	// 41288 mov     ax, word ptr transshapeprimitives ;~ 1678:0722
cs=0x1678;eip=0x000725; 	T(MOV(dx, *(dw*)(((db*)&transshapeprimitives)+2)));	// 41289 mov     dx, word ptr transshapeprimitives+2 ;~ 1678:0725
cs=0x1678;eip=0x000729; 	X(MOV(transshapeprimindexptr, ax));	// 41290 mov     transshapeprimindexptr, ax ;~ 1678:0729
cs=0x1678;eip=0x00072c; 	X(MOV(word_41876, dx));	// 41291 mov     word_41876, dx ;~ 1678:072C
cs=0x1678;eip=0x000730; 	T(SUB(ax, ax));	// 41292 sub     ax, ax ;~ 1678:0730
cs=0x1678;eip=0x000732; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 41293 mov     [bp+var_16], ax ;~ 1678:0732
cs=0x1678;eip=0x000735; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 41294 mov     [bp+var_18], ax ;~ 1678:0735
cs=0x1678;eip=0x000738; 	X(MOV(*(raddr(ss,bp+var_44a)), 0x0F));	// 41295 mov     [bp+var_44A], 0Fh ;~ 1678:0738
cs=0x1678;eip=0x00073d; 	T(CMP(*(dw*)(raddr(ss,bp+var_1a)), ax));	// 41296 cmp     [bp+var_1A], ax ;~ 1678:073D
cs=0x1678;eip=0x000740; 	J(JNZ(loc_25518));	// 41297 jnz     short loc_25518 ;~ 1678:0740
cs=0x1678;eip=0x000742; 	T(SUB(si, si));	// 41298 sub     si, si ;~ 1678:0742
cs=0x1678;eip=0x000744; 	J(JMP(loc_254a7));	// 41299 jmp     short loc_254A7 ;~ 1678:0744
loc_254a6:
	// 7127 
cs=0x1678;eip=0x000746; 	T(INC(si));	// 41303 inc     si ;~ 1678:0746
loc_254a7:
	// 7128 
cs=0x1678;eip=0x000747; 	T(MOV(al, transshapenumvertscopy));	// 41306 mov     al, transshapenumvertscopy ;~ 1678:0747
cs=0x1678;eip=0x00074a; 	T(SUB(ah, ah));	// 41307 sub     ah, ah ;~ 1678:074A
cs=0x1678;eip=0x00074c; 	T(CMP(ax, si));	// 41308 cmp     ax, si ;~ 1678:074C
cs=0x1678;eip=0x00074e; 	J(JA(loc_254b3));	// 41309 ja      short loc_254B3 ;~ 1678:074E
cs=0x1678;eip=0x000750; 	J(JMP(loc_2571a));	// 41310 jmp     loc_2571A ;~ 1678:0750
loc_254b3:
	// 7129 
cs=0x1678;eip=0x000753; 	T(MOV(bx, transshapeprimindexptr));	// 41314 mov     bx, transshapeprimindexptr ;~ 1678:0753
cs=0x1678;eip=0x000757; 	X(INC(transshapeprimindexptr));	// 41315 inc     transshapeprimindexptr ;~ 1678:0757
cs=0x1678;eip=0x00075b; 	T(MOV(es, word_41876));	// 41316 mov     es, word_41876 ;~ 1678:075B
cs=0x1678;eip=0x00075f; 	T(MOV(al, *(raddr(es,bx))));	// 41317 mov     al, es:[bx] ;~ 1678:075F
cs=0x1678;eip=0x000762; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 41318 mov     [bp+var_C], ax ;~ 1678:0762
cs=0x1678;eip=0x000765; 	T(MOV(bx, ax));	// 41319 mov     bx, ax ;~ 1678:0765
cs=0x1678;eip=0x000767; 	T(SHL(bx, 1));	// 41320 shl     bx, 1 ;~ 1678:0767
cs=0x1678;eip=0x000769; 	T(ADD(bx, ax));	// 41321 add     bx, ax ;~ 1678:0769
cs=0x1678;eip=0x00076b; 	T(SHL(bx, 1));	// 41322 shl     bx, 1 ;~ 1678:076B
cs=0x1678;eip=0x00076d; 	T(ADD(bx, bp));	// 41323 add     bx, bp ;~ 1678:076D
cs=0x1678;eip=0x00076f; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x0B6A))));	// 41324 mov     ax, [bx-0B6Ah] ;~ 1678:076F
cs=0x1678;eip=0x000773; 	T(CWD);	// 41325 cwd ;~ 1678:0773
cs=0x1678;eip=0x000774; 	X(ADD(*(dw*)(raddr(ss,bp+var_18)), ax));	// 41326 add     [bp+var_18], ax ;~ 1678:0774
cs=0x1678;eip=0x000777; 	X(ADC(*(dw*)(raddr(ss,bp+var_16)), dx));	// 41327 adc     [bp+var_16], dx ;~ 1678:0777
cs=0x1678;eip=0x00077a; 	T(MOV(ax, si));	// 41328 mov     ax, si ;~ 1678:077A
cs=0x1678;eip=0x00077c; 	T(SHL(ax, 1));	// 41329 shl     ax, 1 ;~ 1678:077C
cs=0x1678;eip=0x00077e; 	T(ADD(ax, offset(dseg,polyvertpointptrtab)));	// 41330 add     ax, offset polyvertpointptrtab ;~ 1678:077E
cs=0x1678;eip=0x000781; 	X(MOV(*(dw*)(raddr(ss,bp+var_b7a)), ax));	// 41331 mov     [bp+var_B7A], ax ;~ 1678:0781
cs=0x1678;eip=0x000785; 	T(MOV(bx, ax));	// 41332 mov     bx, ax ;~ 1678:0785
cs=0x1678;eip=0x000787; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 41333 mov     bx, [bx] ;~ 1678:0787
cs=0x1678;eip=0x000789; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 41334 mov     ax, [bx] ;~ 1678:0789
cs=0x1678;eip=0x00078b; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 41335 mov     dx, [bx+2] ;~ 1678:078B
cs=0x1678;eip=0x00078e; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_430))));	// 41336 les     bx, [bp+var_430] ;~ 1678:078E
cs=0x1678;eip=0x000792; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 41337 mov     es:[bx], ax ;~ 1678:0792
cs=0x1678;eip=0x000795; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 41338 mov     es:[bx+2], dx ;~ 1678:0795
cs=0x1678;eip=0x000799; 	T(CMP(*(raddr(ss,bp+var_44a)), 0));	// 41339 cmp     [bp+var_44A], 0 ;~ 1678:0799
cs=0x1678;eip=0x00079e; 	J(JZ(loc_25511));	// 41340 jz      short loc_25511 ;~ 1678:079E
cs=0x1678;eip=0x0007a0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_b7a))));	// 41341 mov     bx, [bp+var_B7A] ;~ 1678:07A0
cs=0x1678;eip=0x0007a4; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 41342 push    word ptr [bx] ;~ 1678:07A4
cs=0x1678;eip=0x0007a6; 	X(PUSH(cs));	// 41343 push    cs ;~ 1678:07A6
cs=0x1678;eip=0x0007a7; 	J(CALL(rect_compare_point,0));	// 41344 call    near ptr rect_compare_point ;~ 1678:07A7
cs=0x1678;eip=0x0007aa; 	T(ADD(sp, 2));	// 41345 add     sp, 2 ;~ 1678:07AA
cs=0x1678;eip=0x0007ad; 	X(AND(*(raddr(ss,bp+var_44a)), al));	// 41346 and     [bp+var_44A], al ;~ 1678:07AD
loc_25511:
	// 7130 
cs=0x1678;eip=0x0007b1; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_430))), 4));	// 41349 add     word ptr [bp+var_430], 4 ;~ 1678:07B1
cs=0x1678;eip=0x0007b6; 	J(JMP(loc_254a6));	// 41350 jmp     short loc_254A6 ;~ 1678:07B6
loc_25518:
	// 7131 
cs=0x1678;eip=0x0007b8; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10+2))), 0));	// 41354 mov     word ptr [bp+var_10+2], 0 ;~ 1678:07B8
cs=0x1678;eip=0x0007bd; 	T(MOV(bl, transshapenumvertscopy));	// 41355 mov     bl, transshapenumvertscopy ;~ 1678:07BD
cs=0x1678;eip=0x0007c1; 	T(SUB(bh, bh));	// 41356 sub     bh, bh ;~ 1678:07C1
cs=0x1678;eip=0x0007c3; 	T(ADD(bx, *(dw*)(((db*)&transshapeprimitives))));	// 41357 add     bx, word ptr transshapeprimitives ;~ 1678:07C3
cs=0x1678;eip=0x0007c7; 	T(MOV(es, *(dw*)(((db*)&transshapeprimitives)+2)));	// 41358 mov     es, word ptr transshapeprimitives+2 ;~ 1678:07C7
cs=0x1678;eip=0x0007cb; 	T(MOV(al, *(raddr(es,bx-1))));	// 41359 mov     al, es:[bx-1] ;~ 1678:07CB
cs=0x1678;eip=0x0007cf; 	T(SUB(ah, ah));	// 41360 sub     ah, ah ;~ 1678:07CF
cs=0x1678;eip=0x0007d1; 	X(MOV(*(dw*)(raddr(ss,bp+var_448)), ax));	// 41361 mov     [bp+var_448], ax ;~ 1678:07D1
cs=0x1678;eip=0x0007d5; 	T(SUB(si, si));	// 41362 sub     si, si ;~ 1678:07D5
cs=0x1678;eip=0x0007d7; 	J(JMP(loc_255ee));	// 41363 jmp     loc_255EE ;~ 1678:07D7
loc_2553a:
	// 7132 
cs=0x1678;eip=0x0007da; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_448))));	// 41367 mov     bx, [bp+var_448] ;~ 1678:07DA
cs=0x1678;eip=0x0007de; 	T(ADD(bx, bp));	// 41368 add     bx, bp ;~ 1678:07DE
cs=0x1678;eip=0x0007e0; 	T(CMP(*(raddr(ds,bx-0x562)), 0));	// 41369 cmp     byte ptr [bx-562h], 0 ;~ 1678:07E0
cs=0x1678;eip=0x0007e5; 	J(JZ(loc_2554a));	// 41370 jz      short loc_2554A ;~ 1678:07E5
cs=0x1678;eip=0x0007e7; 	J(JMP(loc_255e6));	// 41371 jmp     loc_255E6 ;~ 1678:07E7
loc_2554a:
	// 7133 
cs=0x1678;eip=0x0007ea; 	T(MOV(ax, 0x0C));	// 41375 mov     ax, 0Ch ;~ 1678:07EA
cs=0x1678;eip=0x0007ed; 	X(PUSH(ax));	// 41376 push    ax ;~ 1678:07ED
cs=0x1678;eip=0x0007ee; 	T(ax = bp+var_458);	// 41377 lea     ax, [bp+var_458] ;~ 1678:07EE
cs=0x1678;eip=0x0007f2; 	X(PUSH(ax));	// 41378 push    ax ;~ 1678:07F2
cs=0x1678;eip=0x0007f3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 41379 mov     ax, [bp+var_C] ;~ 1678:07F3
cs=0x1678;eip=0x0007f6; 	T(MOV(cx, ax));	// 41380 mov     cx, ax ;~ 1678:07F6
cs=0x1678;eip=0x0007f8; 	T(SHL(ax, 1));	// 41381 shl     ax, 1 ;~ 1678:07F8
cs=0x1678;eip=0x0007fa; 	T(ADD(ax, cx));	// 41382 add     ax, cx ;~ 1678:07FA
cs=0x1678;eip=0x0007fc; 	T(SHL(ax, 1));	// 41383 shl     ax, 1 ;~ 1678:07FC
cs=0x1678;eip=0x0007fe; 	T(ADD(ax, bp));	// 41384 add     ax, bp ;~ 1678:07FE
cs=0x1678;eip=0x000800; 	T(SUB(ax, 0x0B6E));	// 41385 sub     ax, 0B6Eh ;~ 1678:0800
cs=0x1678;eip=0x000803; 	X(PUSH(ax));	// 41386 push    ax ;~ 1678:0803
cs=0x1678;eip=0x000804; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_448))));	// 41387 mov     ax, [bp+var_448] ;~ 1678:0804
cs=0x1678;eip=0x000808; 	T(MOV(cx, ax));	// 41388 mov     cx, ax ;~ 1678:0808
cs=0x1678;eip=0x00080a; 	T(SHL(ax, 1));	// 41389 shl     ax, 1 ;~ 1678:080A
cs=0x1678;eip=0x00080c; 	T(ADD(ax, cx));	// 41390 add     ax, cx ;~ 1678:080C
cs=0x1678;eip=0x00080e; 	T(SHL(ax, 1));	// 41391 shl     ax, 1 ;~ 1678:080E
cs=0x1678;eip=0x000810; 	T(ADD(ax, bp));	// 41392 add     ax, bp ;~ 1678:0810
cs=0x1678;eip=0x000812; 	T(SUB(ax, 0x0B6E));	// 41393 sub     ax, 0B6Eh ;~ 1678:0812
cs=0x1678;eip=0x000815; 	X(PUSH(ax));	// 41394 push    ax ;~ 1678:0815
cs=0x1678;eip=0x000816; 	J(CALLF(vector_op_unk,0));	// 41395 call    vector_op_unk ;~ 1678:0816
cs=0x1678;eip=0x00081b; 	T(ADD(sp, 8));	// 41396 add     sp, 8 ;~ 1678:081B
cs=0x1678;eip=0x00081e; 	T(ax = bp+var_574);	// 41397 lea     ax, [bp+var_574] ;~ 1678:081E
cs=0x1678;eip=0x000822; 	X(PUSH(ax));	// 41398 push    ax ;~ 1678:0822
cs=0x1678;eip=0x000823; 	T(ax = bp+var_458);	// 41399 lea     ax, [bp+var_458] ;~ 1678:0823
cs=0x1678;eip=0x000827; 	X(PUSH(ax));	// 41400 push    ax ;~ 1678:0827
cs=0x1678;eip=0x000828; 	J(CALLF(vector_to_point,0));	// 41401 call    vector_to_point ;~ 1678:0828
cs=0x1678;eip=0x00082d; 	T(ADD(sp, 4));	// 41402 add     sp, 4 ;~ 1678:082D
cs=0x1678;eip=0x000830; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_448))));	// 41403 mov     ax, [bp+var_448] ;~ 1678:0830
cs=0x1678;eip=0x000834; 	T(SHL(ax, 1));	// 41404 shl     ax, 1 ;~ 1678:0834
cs=0x1678;eip=0x000836; 	T(SHL(ax, 1));	// 41405 shl     ax, 1 ;~ 1678:0836
cs=0x1678;eip=0x000838; 	T(ADD(ax, bp));	// 41406 add     ax, bp ;~ 1678:0838
cs=0x1678;eip=0x00083a; 	X(MOV(*(dw*)(raddr(ss,bp+var_b7c)), ax));	// 41407 mov     [bp+var_B7C], ax ;~ 1678:083A
cs=0x1678;eip=0x00083e; 	T(MOV(bx, ax));	// 41408 mov     bx, ax ;~ 1678:083E
cs=0x1678;eip=0x000840; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_574))));	// 41409 mov     ax, [bp+var_574] ;~ 1678:0840
cs=0x1678;eip=0x000844; 	T(CMP(*(dw*)(raddr(ds,bx-0x416)), ax));	// 41410 cmp     [bx-416h], ax ;~ 1678:0844
cs=0x1678;eip=0x000848; 	J(JNZ(loc_255b4));	// 41411 jnz     short loc_255B4 ;~ 1678:0848
cs=0x1678;eip=0x00084a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_572))));	// 41412 mov     ax, [bp+var_572] ;~ 1678:084A
cs=0x1678;eip=0x00084e; 	T(CMP(*(dw*)(raddr(ds,bx-0x414)), ax));	// 41413 cmp     [bx-414h], ax ;~ 1678:084E
cs=0x1678;eip=0x000852; 	J(JZ(loc_255e6));	// 41414 jz      short loc_255E6 ;~ 1678:0852
loc_255b4:
	// 7134 
cs=0x1678;eip=0x000854; 	T(CMP(*(raddr(ss,bp+var_44a)), 0));	// 41417 cmp     [bp+var_44A], 0 ;~ 1678:0854
cs=0x1678;eip=0x000859; 	J(JZ(loc_255cb));	// 41418 jz      short loc_255CB ;~ 1678:0859
cs=0x1678;eip=0x00085b; 	T(ax = bp+var_574);	// 41419 lea     ax, [bp+var_574] ;~ 1678:085B
cs=0x1678;eip=0x00085f; 	X(PUSH(ax));	// 41420 push    ax ;~ 1678:085F
cs=0x1678;eip=0x000860; 	X(PUSH(cs));	// 41421 push    cs ;~ 1678:0860
cs=0x1678;eip=0x000861; 	J(CALL(rect_compare_point,0));	// 41422 call    near ptr rect_compare_point ;~ 1678:0861
cs=0x1678;eip=0x000864; 	T(ADD(sp, 2));	// 41423 add     sp, 2 ;~ 1678:0864
cs=0x1678;eip=0x000867; 	X(AND(*(raddr(ss,bp+var_44a)), al));	// 41424 and     [bp+var_44A], al ;~ 1678:0867
loc_255cb:
	// 7135 
cs=0x1678;eip=0x00086b; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_430))));	// 41427 les     bx, [bp+var_430] ;~ 1678:086B
cs=0x1678;eip=0x00086f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_574))));	// 41428 mov     ax, [bp+var_574] ;~ 1678:086F
cs=0x1678;eip=0x000873; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_572))));	// 41429 mov     dx, [bp+var_572] ;~ 1678:0873
cs=0x1678;eip=0x000877; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 41430 mov     es:[bx], ax ;~ 1678:0877
cs=0x1678;eip=0x00087a; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 41431 mov     es:[bx+2], dx ;~ 1678:087A
loc_255de:
	// 7136 
cs=0x1678;eip=0x00087e; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_430))), 4));	// 41435 add     word ptr [bp+var_430], 4 ;~ 1678:087E
cs=0x1678;eip=0x000883; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_10+2)))));	// 41436 inc     word ptr [bp+var_10+2] ;~ 1678:0883
loc_255e6:
	// 7137 
cs=0x1678;eip=0x000886; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 41440 mov     ax, [bp+var_C] ;~ 1678:0886
cs=0x1678;eip=0x000889; 	X(MOV(*(dw*)(raddr(ss,bp+var_448)), ax));	// 41441 mov     [bp+var_448], ax ;~ 1678:0889
cs=0x1678;eip=0x00088d; 	T(INC(si));	// 41442 inc     si ;~ 1678:088D
loc_255ee:
	// 7138 
cs=0x1678;eip=0x00088e; 	T(MOV(al, transshapenumvertscopy));	// 41445 mov     al, transshapenumvertscopy ;~ 1678:088E
cs=0x1678;eip=0x000891; 	T(SUB(ah, ah));	// 41446 sub     ah, ah ;~ 1678:0891
cs=0x1678;eip=0x000893; 	T(CMP(ax, si));	// 41447 cmp     ax, si ;~ 1678:0893
cs=0x1678;eip=0x000895; 	J(JA(loc_255fa));	// 41448 ja      short loc_255FA ;~ 1678:0895
cs=0x1678;eip=0x000897; 	J(JMP(loc_25714));	// 41449 jmp     loc_25714 ;~ 1678:0897
loc_255fa:
	// 7139 
cs=0x1678;eip=0x00089a; 	T(MOV(bx, transshapeprimindexptr));	// 41453 mov     bx, transshapeprimindexptr ;~ 1678:089A
cs=0x1678;eip=0x00089e; 	X(INC(transshapeprimindexptr));	// 41454 inc     transshapeprimindexptr ;~ 1678:089E
cs=0x1678;eip=0x0008a2; 	T(MOV(es, word_41876));	// 41455 mov     es, word_41876 ;~ 1678:08A2
cs=0x1678;eip=0x0008a6; 	T(MOV(al, *(raddr(es,bx))));	// 41456 mov     al, es:[bx] ;~ 1678:08A6
cs=0x1678;eip=0x0008a9; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 41457 mov     [bp+var_C], ax ;~ 1678:08A9
cs=0x1678;eip=0x0008ac; 	T(MOV(cx, ax));	// 41458 mov     cx, ax ;~ 1678:08AC
cs=0x1678;eip=0x0008ae; 	T(SHL(ax, 1));	// 41459 shl     ax, 1 ;~ 1678:08AE
cs=0x1678;eip=0x0008b0; 	T(ADD(ax, cx));	// 41460 add     ax, cx ;~ 1678:08B0
cs=0x1678;eip=0x0008b2; 	T(SHL(ax, 1));	// 41461 shl     ax, 1 ;~ 1678:08B2
cs=0x1678;eip=0x0008b4; 	T(ADD(ax, bp));	// 41462 add     ax, bp ;~ 1678:08B4
cs=0x1678;eip=0x0008b6; 	X(MOV(*(dw*)(raddr(ss,bp+var_b7a)), ax));	// 41463 mov     [bp+var_B7A], ax ;~ 1678:08B6
cs=0x1678;eip=0x0008ba; 	T(MOV(bx, ax));	// 41464 mov     bx, ax ;~ 1678:08BA
cs=0x1678;eip=0x0008bc; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x0B6A))));	// 41465 mov     ax, [bx-0B6Ah] ;~ 1678:08BC
cs=0x1678;eip=0x0008c0; 	T(CWD);	// 41466 cwd ;~ 1678:08C0
cs=0x1678;eip=0x0008c1; 	X(ADD(*(dw*)(raddr(ss,bp+var_18)), ax));	// 41467 add     [bp+var_18], ax ;~ 1678:08C1
cs=0x1678;eip=0x0008c4; 	X(ADC(*(dw*)(raddr(ss,bp+var_16)), dx));	// 41468 adc     [bp+var_16], dx ;~ 1678:08C4
cs=0x1678;eip=0x0008c7; 	T(MOV(bx, cx));	// 41469 mov     bx, cx ;~ 1678:08C7
cs=0x1678;eip=0x0008c9; 	T(ADD(bx, bp));	// 41470 add     bx, bp ;~ 1678:08C9
cs=0x1678;eip=0x0008cb; 	T(CMP(*(raddr(ds,bx-0x562)), 0));	// 41471 cmp     byte ptr [bx-562h], 0 ;~ 1678:08CB
cs=0x1678;eip=0x0008d0; 	J(JZ(loc_25635));	// 41472 jz      short loc_25635 ;~ 1678:08D0
cs=0x1678;eip=0x0008d2; 	J(JMP(loc_2553a));	// 41473 jmp     loc_2553A ;~ 1678:08D2
loc_25635:
	// 7140 
cs=0x1678;eip=0x0008d5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_448))));	// 41477 mov     bx, [bp+var_448] ;~ 1678:08D5
cs=0x1678;eip=0x0008d9; 	T(ADD(bx, bp));	// 41478 add     bx, bp ;~ 1678:08D9
cs=0x1678;eip=0x0008db; 	T(CMP(*(raddr(ds,bx-0x562)), 0));	// 41479 cmp     byte ptr [bx-562h], 0 ;~ 1678:08DB
cs=0x1678;eip=0x0008e0; 	J(JNZ(loc_25645));	// 41480 jnz     short loc_25645 ;~ 1678:08E0
cs=0x1678;eip=0x0008e2; 	J(JMP(loc_256d7));	// 41481 jmp     loc_256D7 ;~ 1678:08E2
loc_25645:
	// 7141 
cs=0x1678;eip=0x0008e5; 	T(MOV(ax, 0x0C));	// 41485 mov     ax, 0Ch ;~ 1678:08E5
cs=0x1678;eip=0x0008e8; 	X(PUSH(ax));	// 41486 push    ax ;~ 1678:08E8
cs=0x1678;eip=0x0008e9; 	T(ax = bp+var_458);	// 41487 lea     ax, [bp+var_458] ;~ 1678:08E9
cs=0x1678;eip=0x0008ed; 	X(PUSH(ax));	// 41488 push    ax ;~ 1678:08ED
cs=0x1678;eip=0x0008ee; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_448))));	// 41489 mov     ax, [bp+var_448] ;~ 1678:08EE
cs=0x1678;eip=0x0008f2; 	T(MOV(cx, ax));	// 41490 mov     cx, ax ;~ 1678:08F2
cs=0x1678;eip=0x0008f4; 	T(SHL(ax, 1));	// 41491 shl     ax, 1 ;~ 1678:08F4
cs=0x1678;eip=0x0008f6; 	T(ADD(ax, cx));	// 41492 add     ax, cx ;~ 1678:08F6
cs=0x1678;eip=0x0008f8; 	T(SHL(ax, 1));	// 41493 shl     ax, 1 ;~ 1678:08F8
cs=0x1678;eip=0x0008fa; 	T(ADD(ax, bp));	// 41494 add     ax, bp ;~ 1678:08FA
cs=0x1678;eip=0x0008fc; 	T(SUB(ax, 0x0B6E));	// 41495 sub     ax, 0B6Eh ;~ 1678:08FC
cs=0x1678;eip=0x0008ff; 	X(PUSH(ax));	// 41496 push    ax ;~ 1678:08FF
cs=0x1678;eip=0x000900; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_b7a))));	// 41497 mov     ax, [bp+var_B7A] ;~ 1678:0900
cs=0x1678;eip=0x000904; 	T(SUB(ax, 0x0B6E));	// 41498 sub     ax, 0B6Eh ;~ 1678:0904
cs=0x1678;eip=0x000907; 	X(PUSH(ax));	// 41499 push    ax ;~ 1678:0907
cs=0x1678;eip=0x000908; 	J(CALLF(vector_op_unk,0));	// 41500 call    vector_op_unk ;~ 1678:0908
cs=0x1678;eip=0x00090d; 	T(ADD(sp, 8));	// 41501 add     sp, 8 ;~ 1678:090D
cs=0x1678;eip=0x000910; 	T(ax = bp+var_574);	// 41502 lea     ax, [bp+var_574] ;~ 1678:0910
cs=0x1678;eip=0x000914; 	X(PUSH(ax));	// 41503 push    ax ;~ 1678:0914
cs=0x1678;eip=0x000915; 	T(ax = bp+var_458);	// 41504 lea     ax, [bp+var_458] ;~ 1678:0915
cs=0x1678;eip=0x000919; 	X(PUSH(ax));	// 41505 push    ax ;~ 1678:0919
cs=0x1678;eip=0x00091a; 	J(CALLF(vector_to_point,0));	// 41506 call    vector_to_point ;~ 1678:091A
cs=0x1678;eip=0x00091f; 	T(ADD(sp, 4));	// 41507 add     sp, 4 ;~ 1678:091F
cs=0x1678;eip=0x000922; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 41508 mov     ax, [bp+var_C] ;~ 1678:0922
cs=0x1678;eip=0x000925; 	T(SHL(ax, 1));	// 41509 shl     ax, 1 ;~ 1678:0925
cs=0x1678;eip=0x000927; 	T(SHL(ax, 1));	// 41510 shl     ax, 1 ;~ 1678:0927
cs=0x1678;eip=0x000929; 	T(ADD(ax, bp));	// 41511 add     ax, bp ;~ 1678:0929
cs=0x1678;eip=0x00092b; 	X(MOV(*(dw*)(raddr(ss,bp+var_b7c)), ax));	// 41512 mov     [bp+var_B7C], ax ;~ 1678:092B
cs=0x1678;eip=0x00092f; 	T(MOV(bx, ax));	// 41513 mov     bx, ax ;~ 1678:092F
cs=0x1678;eip=0x000931; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_574))));	// 41514 mov     ax, [bp+var_574] ;~ 1678:0931
cs=0x1678;eip=0x000935; 	T(CMP(*(dw*)(raddr(ds,bx-0x416)), ax));	// 41515 cmp     [bx-416h], ax ;~ 1678:0935
cs=0x1678;eip=0x000939; 	J(JNZ(loc_256a5));	// 41516 jnz     short loc_256A5 ;~ 1678:0939
cs=0x1678;eip=0x00093b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_572))));	// 41517 mov     ax, [bp+var_572] ;~ 1678:093B
cs=0x1678;eip=0x00093f; 	T(CMP(*(dw*)(raddr(ds,bx-0x414)), ax));	// 41518 cmp     [bx-414h], ax ;~ 1678:093F
cs=0x1678;eip=0x000943; 	J(JZ(loc_256d7));	// 41519 jz      short loc_256D7 ;~ 1678:0943
loc_256a5:
	// 7142 
cs=0x1678;eip=0x000945; 	T(CMP(*(raddr(ss,bp+var_44a)), 0));	// 41522 cmp     [bp+var_44A], 0 ;~ 1678:0945
cs=0x1678;eip=0x00094a; 	J(JZ(loc_256bc));	// 41523 jz      short loc_256BC ;~ 1678:094A
cs=0x1678;eip=0x00094c; 	T(ax = bp+var_574);	// 41524 lea     ax, [bp+var_574] ;~ 1678:094C
cs=0x1678;eip=0x000950; 	X(PUSH(ax));	// 41525 push    ax ;~ 1678:0950
cs=0x1678;eip=0x000951; 	X(PUSH(cs));	// 41526 push    cs ;~ 1678:0951
cs=0x1678;eip=0x000952; 	J(CALL(rect_compare_point,0));	// 41527 call    near ptr rect_compare_point ;~ 1678:0952
cs=0x1678;eip=0x000955; 	T(ADD(sp, 2));	// 41528 add     sp, 2 ;~ 1678:0955
cs=0x1678;eip=0x000958; 	X(AND(*(raddr(ss,bp+var_44a)), al));	// 41529 and     [bp+var_44A], al ;~ 1678:0958
loc_256bc:
	// 7143 
cs=0x1678;eip=0x00095c; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_430))));	// 41532 les     bx, [bp+var_430] ;~ 1678:095C
cs=0x1678;eip=0x000960; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_574))));	// 41533 mov     ax, [bp+var_574] ;~ 1678:0960
cs=0x1678;eip=0x000964; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_572))));	// 41534 mov     dx, [bp+var_572] ;~ 1678:0964
cs=0x1678;eip=0x000968; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 41535 mov     es:[bx], ax ;~ 1678:0968
cs=0x1678;eip=0x00096b; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 41536 mov     es:[bx+2], dx ;~ 1678:096B
cs=0x1678;eip=0x00096f; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_430))), 4));	// 41537 add     word ptr [bp+var_430], 4 ;~ 1678:096F
cs=0x1678;eip=0x000974; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_10+2)))));	// 41538 inc     word ptr [bp+var_10+2] ;~ 1678:0974
loc_256d7:
	// 7144 
cs=0x1678;eip=0x000977; 	T(MOV(ax, si));	// 41542 mov     ax, si ;~ 1678:0977
cs=0x1678;eip=0x000979; 	T(SHL(ax, 1));	// 41543 shl     ax, 1 ;~ 1678:0979
cs=0x1678;eip=0x00097b; 	T(ADD(ax, offset(dseg,polyvertpointptrtab)));	// 41544 add     ax, offset polyvertpointptrtab ;~ 1678:097B
cs=0x1678;eip=0x00097e; 	X(MOV(*(dw*)(raddr(ss,bp+var_b7c)), ax));	// 41545 mov     [bp+var_B7C], ax ;~ 1678:097E
cs=0x1678;eip=0x000982; 	T(MOV(bx, ax));	// 41546 mov     bx, ax ;~ 1678:0982
cs=0x1678;eip=0x000984; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 41547 mov     bx, [bx] ;~ 1678:0984
cs=0x1678;eip=0x000986; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 41548 mov     ax, [bx] ;~ 1678:0986
cs=0x1678;eip=0x000988; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 41549 mov     dx, [bx+2] ;~ 1678:0988
cs=0x1678;eip=0x00098b; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_430))));	// 41550 les     bx, [bp+var_430] ;~ 1678:098B
cs=0x1678;eip=0x00098f; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 41551 mov     es:[bx], ax ;~ 1678:098F
cs=0x1678;eip=0x000992; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 41552 mov     es:[bx+2], dx ;~ 1678:0992
cs=0x1678;eip=0x000996; 	T(CMP(*(raddr(ss,bp+var_44a)), 0));	// 41553 cmp     [bp+var_44A], 0 ;~ 1678:0996
cs=0x1678;eip=0x00099b; 	J(JNZ(loc_25700));	// 41554 jnz     short loc_25700 ;~ 1678:099B
cs=0x1678;eip=0x00099d; 	J(JMP(loc_255de));	// 41555 jmp     loc_255DE ;~ 1678:099D
loc_25700:
	// 7145 
cs=0x1678;eip=0x0009a0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_b7c))));	// 41559 mov     bx, [bp+var_B7C] ;~ 1678:09A0
cs=0x1678;eip=0x0009a4; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 41560 push    word ptr [bx] ;~ 1678:09A4
cs=0x1678;eip=0x0009a6; 	X(PUSH(cs));	// 41561 push    cs ;~ 1678:09A6
cs=0x1678;eip=0x0009a7; 	J(CALL(rect_compare_point,0));	// 41562 call    near ptr rect_compare_point ;~ 1678:09A7
cs=0x1678;eip=0x0009aa; 	T(ADD(sp, 2));	// 41563 add     sp, 2 ;~ 1678:09AA
cs=0x1678;eip=0x0009ad; 	X(AND(*(raddr(ss,bp+var_44a)), al));	// 41564 and     [bp+var_44A], al ;~ 1678:09AD
cs=0x1678;eip=0x0009b1; 	J(JMP(loc_255de));	// 41565 jmp     loc_255DE ;~ 1678:09B1
loc_25714:
	// 7146 
cs=0x1678;eip=0x0009b4; 	T(MOV(al, *(db*)(raddr(ss,bp+var_10+2))));	// 41569 mov     al, byte ptr [bp+var_10+2] ;~ 1678:09B4
cs=0x1678;eip=0x0009b7; 	X(MOV(transshapenumvertscopy, al));	// 41570 mov     transshapenumvertscopy, al ;~ 1678:09B7
loc_2571a:
	// 7147 
cs=0x1678;eip=0x0009ba; 	T(CMP(transshapenumvertscopy, 0));	// 41573 cmp     transshapenumvertscopy, 0 ;~ 1678:09BA
cs=0x1678;eip=0x0009bf; 	J(JNZ(loc_25724));	// 41574 jnz     short loc_25724 ;~ 1678:09BF
cs=0x1678;eip=0x0009c1; 	J(JMP(loc_25801));	// 41575 jmp     loc_25801 ;~ 1678:09C1
loc_25724:
	// 7148 
cs=0x1678;eip=0x0009c4; 	T(CMP(*(raddr(ss,bp+var_44a)), 0));	// 41579 cmp     [bp+var_44A], 0 ;~ 1678:09C4
cs=0x1678;eip=0x0009c9; 	J(JZ(loc_2572e));	// 41580 jz      short loc_2572E ;~ 1678:09C9
cs=0x1678;eip=0x0009cb; 	J(JMP(loc_25801));	// 41581 jmp     loc_25801 ;~ 1678:09CB
loc_2572e:
	// 7149 
cs=0x1678;eip=0x0009ce; 	T(TEST(*(db*)(raddr(ss,bp+var_2)), 1));	// 41585 test    byte ptr [bp+var_2], 1 ;~ 1678:09CE
cs=0x1678;eip=0x0009d2; 	J(JNZ(loc_25760));	// 41586 jnz     short loc_25760 ;~ 1678:09D2
cs=0x1678;eip=0x0009d4; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_434))));	// 41587 les     bx, [bp+var_434] ;~ 1678:09D4
cs=0x1678;eip=0x0009d8; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 41588 mov     ax, es:[bx] ;~ 1678:09D8
cs=0x1678;eip=0x0009db; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 41589 mov     dx, es:[bx+2] ;~ 1678:09DB
cs=0x1678;eip=0x0009df; 	T(AND(ax, *(dw*)(raddr(ss,bp+var_a))));	// 41590 and     ax, [bp+var_A] ;~ 1678:09DF
cs=0x1678;eip=0x0009e2; 	T(AND(dx, *(dw*)(raddr(ss,bp+var_8))));	// 41591 and     dx, [bp+var_8] ;~ 1678:09E2
cs=0x1678;eip=0x0009e5; 	T(OR(dx, ax));	// 41592 or      dx, ax ;~ 1678:09E5
cs=0x1678;eip=0x0009e7; 	J(JNZ(loc_25760));	// 41593 jnz     short loc_25760 ;~ 1678:09E7
cs=0x1678;eip=0x0009e9; 	T(MOV(ax, *(dw*)(((db*)&transshapepolyinfo))));	// 41594 mov     ax, word ptr transshapepolyinfo ;~ 1678:09E9
cs=0x1678;eip=0x0009ec; 	T(MOV(dx, *(dw*)(((db*)&transshapepolyinfo)+2)));	// 41595 mov     dx, word ptr transshapepolyinfo+2 ;~ 1678:09EC
cs=0x1678;eip=0x0009f0; 	T(ADD(ax, 6));	// 41596 add     ax, 6 ;~ 1678:09F0
cs=0x1678;eip=0x0009f3; 	X(PUSH(dx));	// 41597 push    dx ;~ 1678:09F3
cs=0x1678;eip=0x0009f4; 	X(PUSH(ax));	// 41598 push    ax ;~ 1678:09F4
cs=0x1678;eip=0x0009f5; 	X(PUSH(cs));	// 41599 push    cs ;~ 1678:09F5
cs=0x1678;eip=0x0009f6; 	J(CALL(transformed_shape_op_helper3,0));	// 41600 call    near ptr transformed_shape_op_helper3 ;~ 1678:09F6
cs=0x1678;eip=0x0009f9; 	T(ADD(sp, 4));	// 41601 add     sp, 4 ;~ 1678:09F9
cs=0x1678;eip=0x0009fc; 	T(OR(al, al));	// 41602 or      al, al ;~ 1678:09FC
cs=0x1678;eip=0x0009fe; 	J(JZ(loc_25763));	// 41603 jz      short loc_25763 ;~ 1678:09FE
loc_25760:
	// 7150 
cs=0x1678;eip=0x000a00; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 41607 inc     [bp+var_4] ;~ 1678:0A00
loc_25763:
	// 7151 
cs=0x1678;eip=0x000a03; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 41610 cmp     [bp+var_4], 0 ;~ 1678:0A03
cs=0x1678;eip=0x000a07; 	J(JNZ(loc_2576c));	// 41611 jnz     short loc_2576C ;~ 1678:0A07
cs=0x1678;eip=0x000a09; 	J(JMP(loc_25801));	// 41612 jmp     loc_25801 ;~ 1678:0A09
loc_2576c:
	// 7152 
cs=0x1678;eip=0x000a0c; 	T(TEST(transshapeflags, 8));	// 41616 test    transshapeflags, 8 ;~ 1678:0A0C
cs=0x1678;eip=0x000a11; 	J(JNZ(loc_25776));	// 41617 jnz     short loc_25776 ;~ 1678:0A11
cs=0x1678;eip=0x000a13; 	J(JMP(loc_25801));	// 41618 jmp     loc_25801 ;~ 1678:0A13
loc_25776:
	// 7153 
cs=0x1678;eip=0x000a16; 	T(MOV(ax, *(dw*)(((db*)&transshapepolyinfo))));	// 41622 mov     ax, word ptr transshapepolyinfo ;~ 1678:0A16
cs=0x1678;eip=0x000a19; 	T(MOV(dx, *(dw*)(((db*)&transshapepolyinfo)+2)));	// 41623 mov     dx, word ptr transshapepolyinfo+2 ;~ 1678:0A19
cs=0x1678;eip=0x000a1d; 	T(ADD(ax, 6));	// 41624 add     ax, 6 ;~ 1678:0A1D
cs=0x1678;eip=0x000a20; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_56e))), ax));	// 41625 mov     word ptr [bp+var_56E], ax ;~ 1678:0A20
cs=0x1678;eip=0x000a24; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_56e +2))), dx));	// 41626 mov     word ptr [bp+var_56E+2], dx ;~ 1678:0A24
cs=0x1678;eip=0x000a28; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10+2))), 0));	// 41627 mov     word ptr [bp+var_10+2], 0 ;~ 1678:0A28
cs=0x1678;eip=0x000a2d; 	J(JMP(loc_257f7));	// 41628 jmp     short loc_257F7 ;~ 1678:0A2D
loc_25790:
	// 7154 
cs=0x1678;eip=0x000a30; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_56e))));	// 41633 les     bx, [bp+var_56E] ;~ 1678:0A30
cs=0x1678;eip=0x000a34; 	T(MOV(ax, *(dw*)(raddr(es,bx+0))));	// 41634 mov     ax, es:[bx+0] ;~ 1678:0A34
cs=0x1678;eip=0x000a37; 	X(MOV(*(dw*)(raddr(ss,bp+var_564)), ax));	// 41635 mov     [bp+var_564], ax ;~ 1678:0A37
cs=0x1678;eip=0x000a3b; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 41636 mov     ax, es:[bx+2] ;~ 1678:0A3B
cs=0x1678;eip=0x000a3f; 	X(MOV(*(dw*)(raddr(ss,bp+var_570)), ax));	// 41637 mov     [bp+var_570], ax ;~ 1678:0A3F
cs=0x1678;eip=0x000a43; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_56e))), 4));	// 41638 add     word ptr [bp+var_56E], 4 ;~ 1678:0A43
cs=0x1678;eip=0x000a48; 	T(MOV(bx, transshaperectptr));	// 41639 mov     bx, transshaperectptr ;~ 1678:0A48
cs=0x1678;eip=0x000a4c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 41640 mov     ax, [bx+0] ;~ 1678:0A4C
cs=0x1678;eip=0x000a4e; 	T(CMP(*(dw*)(raddr(ss,bp+var_564)), ax));	// 41641 cmp     [bp+var_564], ax ;~ 1678:0A4E
cs=0x1678;eip=0x000a52; 	J(JGE(loc_257ba));	// 41642 jge     short loc_257BA ;~ 1678:0A52
cs=0x1678;eip=0x000a54; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_564))));	// 41643 mov     ax, [bp+var_564] ;~ 1678:0A54
cs=0x1678;eip=0x000a58; 	X(MOV(*(dw*)(raddr(ds,bx+0)), ax));	// 41644 mov     [bx+0], ax ;~ 1678:0A58
loc_257ba:
	// 7155 
cs=0x1678;eip=0x000a5a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_564))));	// 41647 mov     ax, [bp+var_564] ;~ 1678:0A5A
cs=0x1678;eip=0x000a5e; 	T(INC(ax));	// 41648 inc     ax ;~ 1678:0A5E
cs=0x1678;eip=0x000a5f; 	X(MOV(*(dw*)(raddr(ss,bp+var_b7c)), ax));	// 41649 mov     [bp+var_B7C], ax ;~ 1678:0A5F
cs=0x1678;eip=0x000a63; 	T(MOV(bx, transshaperectptr));	// 41650 mov     bx, transshaperectptr ;~ 1678:0A63
cs=0x1678;eip=0x000a67; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 41651 cmp     [bx+2], ax ;~ 1678:0A67
cs=0x1678;eip=0x000a6a; 	J(JGE(loc_257cf));	// 41652 jge     short loc_257CF ;~ 1678:0A6A
cs=0x1678;eip=0x000a6c; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 41653 mov     [bx+2], ax ;~ 1678:0A6C
loc_257cf:
	// 7156 
cs=0x1678;eip=0x000a6f; 	T(MOV(bx, transshaperectptr));	// 41656 mov     bx, transshaperectptr ;~ 1678:0A6F
cs=0x1678;eip=0x000a73; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_570))));	// 41657 mov     ax, [bp+var_570] ;~ 1678:0A73
cs=0x1678;eip=0x000a77; 	T(CMP(*(dw*)(raddr(ds,bx+4)), ax));	// 41658 cmp     [bx+4], ax ;~ 1678:0A77
cs=0x1678;eip=0x000a7a; 	J(JLE(loc_257df));	// 41659 jle     short loc_257DF ;~ 1678:0A7A
cs=0x1678;eip=0x000a7c; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 41660 mov     [bx+4], ax ;~ 1678:0A7C
loc_257df:
	// 7157 
cs=0x1678;eip=0x000a7f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_570))));	// 41663 mov     ax, [bp+var_570] ;~ 1678:0A7F
cs=0x1678;eip=0x000a83; 	T(INC(ax));	// 41664 inc     ax ;~ 1678:0A83
cs=0x1678;eip=0x000a84; 	X(MOV(*(dw*)(raddr(ss,bp+var_b7c)), ax));	// 41665 mov     [bp+var_B7C], ax ;~ 1678:0A84
cs=0x1678;eip=0x000a88; 	T(MOV(bx, transshaperectptr));	// 41666 mov     bx, transshaperectptr ;~ 1678:0A88
cs=0x1678;eip=0x000a8c; 	T(CMP(*(dw*)(raddr(ds,bx+6)), ax));	// 41667 cmp     [bx+6], ax ;~ 1678:0A8C
cs=0x1678;eip=0x000a8f; 	J(JGE(loc_257f4));	// 41668 jge     short loc_257F4 ;~ 1678:0A8F
cs=0x1678;eip=0x000a91; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 41669 mov     [bx+6], ax ;~ 1678:0A91
loc_257f4:
	// 7158 
cs=0x1678;eip=0x000a94; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_10+2)))));	// 41672 inc     word ptr [bp+var_10+2] ;~ 1678:0A94
loc_257f7:
	// 7159 
cs=0x1678;eip=0x000a97; 	T(MOV(al, transshapenumvertscopy));	// 41675 mov     al, transshapenumvertscopy ;~ 1678:0A97
cs=0x1678;eip=0x000a9a; 	T(SUB(ah, ah));	// 41676 sub     ah, ah ;~ 1678:0A9A
cs=0x1678;eip=0x000a9c; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+var_10+2))), ax));	// 41677 cmp     word ptr [bp+var_10+2], ax ;~ 1678:0A9C
cs=0x1678;eip=0x000a9f; 	J(JC(loc_25790));	// 41678 jb      short loc_25790 ;~ 1678:0A9F
loc_25801:
	// 7160 
cs=0x1678;eip=0x000aa1; 	T(MOV(ax, transshapeprimptr));	// 41682 mov     ax, transshapeprimptr ;~ 1678:0AA1
cs=0x1678;eip=0x000aa4; 	T(MOV(dx, word_4186c));	// 41683 mov     dx, word_4186C ;~ 1678:0AA4
cs=0x1678;eip=0x000aa8; 	X(MOV(*(dw*)(((db*)&transshapeprimitives)), ax));	// 41684 mov     word ptr transshapeprimitives, ax ;~ 1678:0AA8
cs=0x1678;eip=0x000aab; 	X(MOV(*(dw*)(((db*)&transshapeprimitives)+2), dx));	// 41685 mov     word ptr transshapeprimitives+2, dx ;~ 1678:0AAB
cs=0x1678;eip=0x000aaf; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_434))), 4));	// 41686 add     word ptr [bp+var_434], 4 ;~ 1678:0AAF
cs=0x1678;eip=0x000ab4; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_b78))), 4));	// 41687 add     word ptr [bp+var_B78], 4 ;~ 1678:0AB4
cs=0x1678;eip=0x000ab9; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 41688 cmp     [bp+var_4], 0 ;~ 1678:0AB9
cs=0x1678;eip=0x000abd; 	J(JZ(loc_25822));	// 41689 jz      short loc_25822 ;~ 1678:0ABD
cs=0x1678;eip=0x000abf; 	J(JMP(loc_25d3c));	// 41690 jmp     loc_25D3C ;~ 1678:0ABF
loc_25822:
	// 7161 
cs=0x1678;eip=0x000ac2; 	T(TEST(*(db*)(raddr(ss,bp+var_2)), 2));	// 41694 test    byte ptr [bp+var_2], 2 ;~ 1678:0AC2
cs=0x1678;eip=0x000ac6; 	J(JZ(loc_2582b));	// 41695 jz      short loc_2582B ;~ 1678:0AC6
cs=0x1678;eip=0x000ac8; 	J(JMP(loc_25e04));	// 41696 jmp     loc_25E04 ;~ 1678:0AC8
loc_2582b:
	// 7162 
cs=0x1678;eip=0x000acb; 	T(LES(bx, transshapeprimitives));	// 41701 les     bx, transshapeprimitives ;~ 1678:0ACB
cs=0x1678;eip=0x000acf; 	T(TEST(*(raddr(es,bx+1)), 2));	// 41702 test    byte ptr es:[bx+1], 2 ;~ 1678:0ACF
cs=0x1678;eip=0x000ad4; 	J(JNZ(loc_25839));	// 41703 jnz     short loc_25839 ;~ 1678:0AD4
cs=0x1678;eip=0x000ad6; 	J(JMP(loc_25e04));	// 41704 jmp     loc_25E04 ;~ 1678:0AD6
loc_25839:
	// 7163 
cs=0x1678;eip=0x000ad9; 	T(MOV(bl, *(raddr(es,bx))));	// 41708 mov     bl, es:[bx] ;~ 1678:0AD9
cs=0x1678;eip=0x000adc; 	T(SUB(bh, bh));	// 41709 sub     bh, bh ;~ 1678:0ADC
cs=0x1678;eip=0x000ade; 	T(MOV(al, *((&primidxcounttab)+bx)));	// 41710 mov     al, primidxcounttab[bx] ;~ 1678:0ADE
cs=0x1678;eip=0x000ae2; 	T(SUB(ah, ah));	// 41711 sub     ah, ah ;~ 1678:0AE2
cs=0x1678;eip=0x000ae4; 	T(ADD(ax, transshapenumpaints));	// 41712 add     ax, transshapenumpaints ;~ 1678:0AE4
cs=0x1678;eip=0x000ae8; 	T(ADD(ax, 2));	// 41713 add     ax, 2 ;~ 1678:0AE8
cs=0x1678;eip=0x000aeb; 	X(ADD(*(dw*)(((db*)&transshapeprimitives)), ax));	// 41714 add     word ptr transshapeprimitives, ax ;~ 1678:0AEB
cs=0x1678;eip=0x000aef; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_b78))), 4));	// 41715 add     word ptr [bp+var_B78], 4 ;~ 1678:0AEF
cs=0x1678;eip=0x000af4; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_434))), 4));	// 41716 add     word ptr [bp+var_434], 4 ;~ 1678:0AF4
cs=0x1678;eip=0x000af9; 	J(JMP(loc_2582b));	// 41717 jmp     short loc_2582B ;~ 1678:0AF9
_primtype_line:
	// 7164 
cs=0x1678;eip=0x000afc; 	T(LES(bx, transshapeprimitives));	// 41722 les     bx, transshapeprimitives ;~ 1678:0AFC
cs=0x1678;eip=0x000b00; 	T(MOV(al, *(raddr(es,bx))));	// 41723 mov     al, es:[bx] ;~ 1678:0B00
cs=0x1678;eip=0x000b03; 	T(SUB(ah, ah));	// 41724 sub     ah, ah ;~ 1678:0B03
cs=0x1678;eip=0x000b05; 	T(MOV(si, ax));	// 41725 mov     si, ax ;~ 1678:0B05
cs=0x1678;eip=0x000b07; 	T(MOV(al, *(raddr(es,bx+1))));	// 41726 mov     al, es:[bx+1] ;~ 1678:0B07
cs=0x1678;eip=0x000b0b; 	T(MOV(di, ax));	// 41727 mov     di, ax ;~ 1678:0B0B
cs=0x1678;eip=0x000b0d; 	T(MOV(al, *(raddr(ss,bp+di+var_562))));	// 41728 mov     al, [bp+di+var_562] ;~ 1678:0B0D
cs=0x1678;eip=0x000b11; 	T(CBW);	// 41729 cbw ;~ 1678:0B11
cs=0x1678;eip=0x000b12; 	T(MOV(cx, ax));	// 41730 mov     cx, ax ;~ 1678:0B12
cs=0x1678;eip=0x000b14; 	T(MOV(al, *(raddr(ss,bp+si+var_562))));	// 41731 mov     al, [bp+si+var_562] ;~ 1678:0B14
cs=0x1678;eip=0x000b18; 	T(CBW);	// 41732 cbw ;~ 1678:0B18
cs=0x1678;eip=0x000b19; 	T(ADD(ax, cx));	// 41733 add     ax, cx ;~ 1678:0B19
cs=0x1678;eip=0x000b1b; 	T(CMP(ax, 2));	// 41734 cmp     ax, 2 ;~ 1678:0B1B
cs=0x1678;eip=0x000b1e; 	J(JZ(loc_25801));	// 41735 jz      short loc_25801 ;~ 1678:0B1E
cs=0x1678;eip=0x000b20; 	T(CMP(*(raddr(ss,bp+si+var_562)), 0));	// 41736 cmp     [bp+si+var_562], 0 ;~ 1678:0B20
cs=0x1678;eip=0x000b25; 	J(JZ(loc_258bc));	// 41737 jz      short loc_258BC ;~ 1678:0B25
cs=0x1678;eip=0x000b27; 	T(MOV(ax, 0x0C));	// 41738 mov     ax, 0Ch ;~ 1678:0B27
cs=0x1678;eip=0x000b2a; 	X(PUSH(ax));	// 41739 push    ax ;~ 1678:0B2A
cs=0x1678;eip=0x000b2b; 	T(ax = bp+var_458);	// 41740 lea     ax, [bp+var_458] ;~ 1678:0B2B
cs=0x1678;eip=0x000b2f; 	X(PUSH(ax));	// 41741 push    ax ;~ 1678:0B2F
cs=0x1678;eip=0x000b30; 	T(MOV(ax, si));	// 41742 mov     ax, si ;~ 1678:0B30
cs=0x1678;eip=0x000b32; 	T(MOV(cx, ax));	// 41743 mov     cx, ax ;~ 1678:0B32
cs=0x1678;eip=0x000b34; 	T(SHL(ax, 1));	// 41744 shl     ax, 1 ;~ 1678:0B34
cs=0x1678;eip=0x000b36; 	T(ADD(ax, cx));	// 41745 add     ax, cx ;~ 1678:0B36
cs=0x1678;eip=0x000b38; 	T(SHL(ax, 1));	// 41746 shl     ax, 1 ;~ 1678:0B38
cs=0x1678;eip=0x000b3a; 	T(ADD(ax, bp));	// 41747 add     ax, bp ;~ 1678:0B3A
cs=0x1678;eip=0x000b3c; 	T(SUB(ax, 0x0B6E));	// 41748 sub     ax, 0B6Eh ;~ 1678:0B3C
cs=0x1678;eip=0x000b3f; 	X(PUSH(ax));	// 41749 push    ax ;~ 1678:0B3F
cs=0x1678;eip=0x000b40; 	T(MOV(ax, di));	// 41750 mov     ax, di ;~ 1678:0B40
cs=0x1678;eip=0x000b42; 	T(MOV(cx, ax));	// 41751 mov     cx, ax ;~ 1678:0B42
cs=0x1678;eip=0x000b44; 	T(SHL(ax, 1));	// 41752 shl     ax, 1 ;~ 1678:0B44
cs=0x1678;eip=0x000b46; 	T(ADD(ax, cx));	// 41753 add     ax, cx ;~ 1678:0B46
cs=0x1678;eip=0x000b48; 	T(SHL(ax, 1));	// 41754 shl     ax, 1 ;~ 1678:0B48
cs=0x1678;eip=0x000b4a; 	T(ADD(ax, bp));	// 41755 add     ax, bp ;~ 1678:0B4A
cs=0x1678;eip=0x000b4c; 	T(SUB(ax, 0x0B6E));	// 41756 sub     ax, 0B6Eh ;~ 1678:0B4C
cs=0x1678;eip=0x000b4f; 	X(PUSH(ax));	// 41757 push    ax ;~ 1678:0B4F
cs=0x1678;eip=0x000b50; 	J(CALLF(vector_op_unk,0));	// 41758 call    vector_op_unk ;~ 1678:0B50
cs=0x1678;eip=0x000b55; 	T(ADD(sp, 8));	// 41759 add     sp, 8 ;~ 1678:0B55
cs=0x1678;eip=0x000b58; 	T(MOV(ax, si));	// 41760 mov     ax, si ;~ 1678:0B58
cs=0x1678;eip=0x000b5a; 	J(JMP(loc_258f6));	// 41761 jmp     short loc_258F6 ;~ 1678:0B5A
loc_258bc:
	// 7165 
cs=0x1678;eip=0x000b5c; 	T(CMP(*(raddr(ss,bp+di+var_562)), 0));	// 41765 cmp     [bp+di+var_562], 0 ;~ 1678:0B5C
cs=0x1678;eip=0x000b61; 	J(JZ(loc_2590d));	// 41766 jz      short loc_2590D ;~ 1678:0B61
cs=0x1678;eip=0x000b63; 	T(MOV(ax, 0x0C));	// 41767 mov     ax, 0Ch ;~ 1678:0B63
cs=0x1678;eip=0x000b66; 	X(PUSH(ax));	// 41768 push    ax ;~ 1678:0B66
cs=0x1678;eip=0x000b67; 	T(ax = bp+var_458);	// 41769 lea     ax, [bp+var_458] ;~ 1678:0B67
cs=0x1678;eip=0x000b6b; 	X(PUSH(ax));	// 41770 push    ax ;~ 1678:0B6B
cs=0x1678;eip=0x000b6c; 	T(MOV(ax, di));	// 41771 mov     ax, di ;~ 1678:0B6C
cs=0x1678;eip=0x000b6e; 	T(MOV(cx, ax));	// 41772 mov     cx, ax ;~ 1678:0B6E
cs=0x1678;eip=0x000b70; 	T(SHL(ax, 1));	// 41773 shl     ax, 1 ;~ 1678:0B70
cs=0x1678;eip=0x000b72; 	T(ADD(ax, cx));	// 41774 add     ax, cx ;~ 1678:0B72
cs=0x1678;eip=0x000b74; 	T(SHL(ax, 1));	// 41775 shl     ax, 1 ;~ 1678:0B74
cs=0x1678;eip=0x000b76; 	T(ADD(ax, bp));	// 41776 add     ax, bp ;~ 1678:0B76
cs=0x1678;eip=0x000b78; 	T(SUB(ax, 0x0B6E));	// 41777 sub     ax, 0B6Eh ;~ 1678:0B78
cs=0x1678;eip=0x000b7b; 	X(PUSH(ax));	// 41778 push    ax ;~ 1678:0B7B
cs=0x1678;eip=0x000b7c; 	T(MOV(ax, si));	// 41779 mov     ax, si ;~ 1678:0B7C
cs=0x1678;eip=0x000b7e; 	T(MOV(cx, ax));	// 41780 mov     cx, ax ;~ 1678:0B7E
cs=0x1678;eip=0x000b80; 	T(SHL(ax, 1));	// 41781 shl     ax, 1 ;~ 1678:0B80
cs=0x1678;eip=0x000b82; 	T(ADD(ax, cx));	// 41782 add     ax, cx ;~ 1678:0B82
cs=0x1678;eip=0x000b84; 	T(SHL(ax, 1));	// 41783 shl     ax, 1 ;~ 1678:0B84
cs=0x1678;eip=0x000b86; 	T(ADD(ax, bp));	// 41784 add     ax, bp ;~ 1678:0B86
cs=0x1678;eip=0x000b88; 	T(SUB(ax, 0x0B6E));	// 41785 sub     ax, 0B6Eh ;~ 1678:0B88
cs=0x1678;eip=0x000b8b; 	X(PUSH(ax));	// 41786 push    ax ;~ 1678:0B8B
cs=0x1678;eip=0x000b8c; 	J(CALLF(vector_op_unk,0));	// 41787 call    vector_op_unk ;~ 1678:0B8C
cs=0x1678;eip=0x000b91; 	T(ADD(sp, 8));	// 41788 add     sp, 8 ;~ 1678:0B91
cs=0x1678;eip=0x000b94; 	T(MOV(ax, di));	// 41789 mov     ax, di ;~ 1678:0B94
loc_258f6:
	// 7166 
cs=0x1678;eip=0x000b96; 	T(SHL(ax, 1));	// 41792 shl     ax, 1 ;~ 1678:0B96
cs=0x1678;eip=0x000b98; 	T(SHL(ax, 1));	// 41793 shl     ax, 1 ;~ 1678:0B98
cs=0x1678;eip=0x000b9a; 	T(ADD(ax, bp));	// 41794 add     ax, bp ;~ 1678:0B9A
cs=0x1678;eip=0x000b9c; 	T(SUB(ax, 0x416));	// 41795 sub     ax, 416h ;~ 1678:0B9C
cs=0x1678;eip=0x000b9f; 	X(PUSH(ax));	// 41796 push    ax ;~ 1678:0B9F
cs=0x1678;eip=0x000ba0; 	T(ax = bp+var_458);	// 41797 lea     ax, [bp+var_458] ;~ 1678:0BA0
cs=0x1678;eip=0x000ba4; 	X(PUSH(ax));	// 41798 push    ax ;~ 1678:0BA4
cs=0x1678;eip=0x000ba5; 	J(CALLF(vector_to_point,0));	// 41799 call    vector_to_point ;~ 1678:0BA5
cs=0x1678;eip=0x000baa; 	T(ADD(sp, 4));	// 41800 add     sp, 4 ;~ 1678:0BAA
loc_2590d:
	// 7167 
cs=0x1678;eip=0x000bad; 	T(MOV(bx, si));	// 41803 mov     bx, si ;~ 1678:0BAD
cs=0x1678;eip=0x000baf; 	T(MOV(ax, bx));	// 41804 mov     ax, bx ;~ 1678:0BAF
cs=0x1678;eip=0x000bb1; 	T(SHL(bx, 1));	// 41805 shl     bx, 1 ;~ 1678:0BB1
cs=0x1678;eip=0x000bb3; 	T(ADD(bx, ax));	// 41806 add     bx, ax ;~ 1678:0BB3
cs=0x1678;eip=0x000bb5; 	T(SHL(bx, 1));	// 41807 shl     bx, 1 ;~ 1678:0BB5
cs=0x1678;eip=0x000bb7; 	T(ADD(bx, bp));	// 41808 add     bx, bp ;~ 1678:0BB7
cs=0x1678;eip=0x000bb9; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x0B6A))));	// 41809 mov     ax, [bx-0B6Ah] ;~ 1678:0BB9
cs=0x1678;eip=0x000bbd; 	T(MOV(bx, di));	// 41810 mov     bx, di ;~ 1678:0BBD
cs=0x1678;eip=0x000bbf; 	T(MOV(cx, bx));	// 41811 mov     cx, bx ;~ 1678:0BBF
cs=0x1678;eip=0x000bc1; 	T(SHL(bx, 1));	// 41812 shl     bx, 1 ;~ 1678:0BC1
cs=0x1678;eip=0x000bc3; 	T(ADD(bx, cx));	// 41813 add     bx, cx ;~ 1678:0BC3
cs=0x1678;eip=0x000bc5; 	T(SHL(bx, 1));	// 41814 shl     bx, 1 ;~ 1678:0BC5
cs=0x1678;eip=0x000bc7; 	T(ADD(bx, bp));	// 41815 add     bx, bp ;~ 1678:0BC7
cs=0x1678;eip=0x000bc9; 	T(ADD(ax, *(dw*)(raddr(ds,bx-0x0B6A))));	// 41816 add     ax, [bx-0B6Ah] ;~ 1678:0BC9
cs=0x1678;eip=0x000bcd; 	T(CWD);	// 41817 cwd ;~ 1678:0BCD
cs=0x1678;eip=0x000bce; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 41818 mov     [bp+var_18], ax ;~ 1678:0BCE
cs=0x1678;eip=0x000bd1; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), dx));	// 41819 mov     [bp+var_16], dx ;~ 1678:0BD1
cs=0x1678;eip=0x000bd4; 	T(MOV(bx, *(polyvertpointptrtab)));	// 41820 mov     bx, polyvertpointptrtab ;~ 1678:0BD4
cs=0x1678;eip=0x000bd8; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 41821 mov     ax, [bx] ;~ 1678:0BD8
cs=0x1678;eip=0x000bda; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 41822 mov     dx, [bx+2] ;~ 1678:0BDA
cs=0x1678;eip=0x000bdd; 	T(LES(bx, transshapepolyinfo));	// 41823 les     bx, transshapepolyinfo ;~ 1678:0BDD
cs=0x1678;eip=0x000be1; 	X(MOV(*(dw*)(raddr(es,bx+6)), ax));	// 41824 mov     es:[bx+6], ax ;~ 1678:0BE1
cs=0x1678;eip=0x000be5; 	X(MOV(*(dw*)(raddr(es,bx+8)), dx));	// 41825 mov     es:[bx+8], dx ;~ 1678:0BE5
cs=0x1678;eip=0x000be9; 	T(MOV(bx, *(dw*)(((db*)polyvertpointptrtab)+2)));	// 41826 mov     bx, polyvertpointptrtab+2 ;~ 1678:0BE9
cs=0x1678;eip=0x000bed; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 41827 mov     ax, [bx] ;~ 1678:0BED
cs=0x1678;eip=0x000bef; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 41828 mov     dx, [bx+2] ;~ 1678:0BEF
cs=0x1678;eip=0x000bf2; 	T(LES(bx, transshapepolyinfo));	// 41829 les     bx, transshapepolyinfo ;~ 1678:0BF2
cs=0x1678;eip=0x000bf6; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 41830 mov     es:[bx+0Ah], ax ;~ 1678:0BF6
cs=0x1678;eip=0x000bfa; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 41831 mov     es:[bx+0Ch], dx ;~ 1678:0BFA
cs=0x1678;eip=0x000bfe; 	T(TEST(transshapeflags, 8));	// 41832 test    transshapeflags, 8 ;~ 1678:0BFE
cs=0x1678;eip=0x000c03; 	J(JZ(loc_25983));	// 41833 jz      short loc_25983 ;~ 1678:0C03
cs=0x1678;eip=0x000c05; 	X(PUSH(transshaperectptr));	// 41834 push    transshaperectptr ;~ 1678:0C05
cs=0x1678;eip=0x000c09; 	X(PUSH(*(polyvertpointptrtab)));	// 41835 push    polyvertpointptrtab ;~ 1678:0C09
cs=0x1678;eip=0x000c0d; 	X(PUSH(cs));	// 41836 push    cs ;~ 1678:0C0D
cs=0x1678;eip=0x000c0e; 	J(CALL(rect_adjust_from_point,0));	// 41837 call    near ptr rect_adjust_from_point ;~ 1678:0C0E
cs=0x1678;eip=0x000c11; 	T(ADD(sp, 4));	// 41838 add     sp, 4 ;~ 1678:0C11
cs=0x1678;eip=0x000c14; 	X(PUSH(transshaperectptr));	// 41839 push    transshaperectptr ;~ 1678:0C14
cs=0x1678;eip=0x000c18; 	X(PUSH(*(dw*)(((db*)polyvertpointptrtab)+2)));	// 41840 push    polyvertpointptrtab+2 ;~ 1678:0C18
loc_2597c:
	// 7168 
cs=0x1678;eip=0x000c1c; 	X(PUSH(cs));	// 41843 push    cs ;~ 1678:0C1C
cs=0x1678;eip=0x000c1d; 	J(CALL(rect_adjust_from_point,0));	// 41844 call    near ptr rect_adjust_from_point ;~ 1678:0C1D
cs=0x1678;eip=0x000c20; 	T(ADD(sp, 4));	// 41845 add     sp, 4 ;~ 1678:0C20
loc_25983:
	// 7169 
cs=0x1678;eip=0x000c23; 	X(MOV(transshapenumvertscopy, 2));	// 41849 mov     transshapenumvertscopy, 2 ;~ 1678:0C23
loc_25988:
	// 7170 
cs=0x1678;eip=0x000c28; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 41852 inc     [bp+var_4] ;~ 1678:0C28
cs=0x1678;eip=0x000c2b; 	J(JMP(loc_25801));	// 41853 jmp     loc_25801 ;~ 1678:0C2B
_primtype_wheel:
	// 7171 
cs=0x1678;eip=0x000c2e; 	T(CMP(*(dw*)(raddr(ss,bp+var_1a)), 0));	// 41857 cmp     [bp+var_1A], 0 ;~ 1678:0C2E
cs=0x1678;eip=0x000c32; 	J(JZ(loc_25997));	// 41858 jz      short loc_25997 ;~ 1678:0C32
cs=0x1678;eip=0x000c34; 	J(JMP(loc_25801));	// 41859 jmp     loc_25801 ;~ 1678:0C34
loc_25997:
	// 7172 
cs=0x1678;eip=0x000c37; 	T(MOV(bx, *(polyvertpointptrtab)));	// 41863 mov     bx, polyvertpointptrtab ;~ 1678:0C37
cs=0x1678;eip=0x000c3b; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 41864 mov     ax, [bx] ;~ 1678:0C3B
cs=0x1678;eip=0x000c3d; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 41865 mov     dx, [bx+2] ;~ 1678:0C3D
cs=0x1678;eip=0x000c40; 	T(LES(bx, transshapepolyinfo));	// 41866 les     bx, transshapepolyinfo ;~ 1678:0C40
cs=0x1678;eip=0x000c44; 	X(MOV(*(dw*)(raddr(es,bx+6)), ax));	// 41867 mov     es:[bx+6], ax ;~ 1678:0C44
cs=0x1678;eip=0x000c48; 	X(MOV(*(dw*)(raddr(es,bx+8)), dx));	// 41868 mov     es:[bx+8], dx ;~ 1678:0C48
cs=0x1678;eip=0x000c4c; 	T(MOV(bx, *(dw*)(((db*)polyvertpointptrtab)+2)));	// 41869 mov     bx, polyvertpointptrtab+2 ;~ 1678:0C4C
cs=0x1678;eip=0x000c50; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 41870 mov     ax, [bx] ;~ 1678:0C50
cs=0x1678;eip=0x000c52; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 41871 mov     dx, [bx+2] ;~ 1678:0C52
cs=0x1678;eip=0x000c55; 	T(LES(bx, transshapepolyinfo));	// 41872 les     bx, transshapepolyinfo ;~ 1678:0C55
cs=0x1678;eip=0x000c59; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 41873 mov     es:[bx+0Ah], ax ;~ 1678:0C59
cs=0x1678;eip=0x000c5d; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 41874 mov     es:[bx+0Ch], dx ;~ 1678:0C5D
cs=0x1678;eip=0x000c61; 	T(MOV(bx, *(dw*)(((db*)polyvertpointptrtab)+4)));	// 41875 mov     bx, polyvertpointptrtab+4 ;~ 1678:0C61
cs=0x1678;eip=0x000c65; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 41876 mov     ax, [bx] ;~ 1678:0C65
cs=0x1678;eip=0x000c67; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 41877 mov     dx, [bx+2] ;~ 1678:0C67
cs=0x1678;eip=0x000c6a; 	T(LES(bx, transshapepolyinfo));	// 41878 les     bx, transshapepolyinfo ;~ 1678:0C6A
cs=0x1678;eip=0x000c6e; 	X(MOV(*(dw*)(raddr(es,bx+0x0E)), ax));	// 41879 mov     es:[bx+0Eh], ax ;~ 1678:0C6E
cs=0x1678;eip=0x000c72; 	X(MOV(*(dw*)(raddr(es,bx+0x10)), dx));	// 41880 mov     es:[bx+10h], dx ;~ 1678:0C72
cs=0x1678;eip=0x000c76; 	T(MOV(bx, *(dw*)(((db*)polyvertpointptrtab)+6)));	// 41881 mov     bx, polyvertpointptrtab+6 ;~ 1678:0C76
cs=0x1678;eip=0x000c7a; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 41882 mov     ax, [bx] ;~ 1678:0C7A
cs=0x1678;eip=0x000c7c; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 41883 mov     dx, [bx+2] ;~ 1678:0C7C
cs=0x1678;eip=0x000c7f; 	T(LES(bx, transshapepolyinfo));	// 41884 les     bx, transshapepolyinfo ;~ 1678:0C7F
cs=0x1678;eip=0x000c83; 	X(MOV(*(dw*)(raddr(es,bx+0x12)), ax));	// 41885 mov     es:[bx+12h], ax ;~ 1678:0C83
cs=0x1678;eip=0x000c87; 	X(MOV(*(dw*)(raddr(es,bx+0x14)), dx));	// 41886 mov     es:[bx+14h], dx ;~ 1678:0C87
cs=0x1678;eip=0x000c8b; 	T(MOV(ax, *(dw*)(((db*)&transshapepolyinfo))));	// 41887 mov     ax, word ptr transshapepolyinfo ;~ 1678:0C8B
cs=0x1678;eip=0x000c8e; 	T(MOV(dx, *(dw*)(((db*)&transshapepolyinfo)+2)));	// 41888 mov     dx, word ptr transshapepolyinfo+2 ;~ 1678:0C8E
cs=0x1678;eip=0x000c92; 	T(ADD(ax, 6));	// 41889 add     ax, 6 ;~ 1678:0C92
cs=0x1678;eip=0x000c95; 	X(PUSH(dx));	// 41890 push    dx ;~ 1678:0C95
cs=0x1678;eip=0x000c96; 	X(PUSH(ax));	// 41891 push    ax ;~ 1678:0C96
cs=0x1678;eip=0x000c97; 	X(PUSH(cs));	// 41892 push    cs ;~ 1678:0C97
cs=0x1678;eip=0x000c98; 	J(CALL(transformed_shape_op_helper3,0));	// 41893 call    near ptr transformed_shape_op_helper3 ;~ 1678:0C98
cs=0x1678;eip=0x000c9b; 	T(ADD(sp, 4));	// 41894 add     sp, 4 ;~ 1678:0C9B
cs=0x1678;eip=0x000c9e; 	T(OR(al, al));	// 41895 or      al, al ;~ 1678:0C9E
cs=0x1678;eip=0x000ca0; 	J(JNZ(loc_25a7c));	// 41896 jnz     short loc_25A7C ;~ 1678:0CA0
cs=0x1678;eip=0x000ca2; 	T(MOV(bx, *(dw*)(((db*)polyvertpointptrtab)+6)));	// 41897 mov     bx, polyvertpointptrtab+6 ;~ 1678:0CA2
cs=0x1678;eip=0x000ca6; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 41898 mov     ax, [bx] ;~ 1678:0CA6
cs=0x1678;eip=0x000ca8; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 41899 mov     dx, [bx+2] ;~ 1678:0CA8
cs=0x1678;eip=0x000cab; 	T(LES(bx, transshapepolyinfo));	// 41900 les     bx, transshapepolyinfo ;~ 1678:0CAB
cs=0x1678;eip=0x000caf; 	X(MOV(*(dw*)(raddr(es,bx+6)), ax));	// 41901 mov     es:[bx+6], ax ;~ 1678:0CAF
cs=0x1678;eip=0x000cb3; 	X(MOV(*(dw*)(raddr(es,bx+8)), dx));	// 41902 mov     es:[bx+8], dx ;~ 1678:0CB3
cs=0x1678;eip=0x000cb7; 	T(MOV(bx, *(dw*)(((db*)polyvertpointptrtab)+8)));	// 41903 mov     bx, polyvertpointptrtab+8 ;~ 1678:0CB7
cs=0x1678;eip=0x000cbb; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 41904 mov     ax, [bx] ;~ 1678:0CBB
cs=0x1678;eip=0x000cbd; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 41905 mov     dx, [bx+2] ;~ 1678:0CBD
cs=0x1678;eip=0x000cc0; 	T(LES(bx, transshapepolyinfo));	// 41906 les     bx, transshapepolyinfo ;~ 1678:0CC0
cs=0x1678;eip=0x000cc4; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 41907 mov     es:[bx+0Ah], ax ;~ 1678:0CC4
cs=0x1678;eip=0x000cc8; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 41908 mov     es:[bx+0Ch], dx ;~ 1678:0CC8
cs=0x1678;eip=0x000ccc; 	T(MOV(bx, *(dw*)(((db*)polyvertpointptrtab)+0x0A)));	// 41909 mov     bx, polyvertpointptrtab+0Ah ;~ 1678:0CCC
cs=0x1678;eip=0x000cd0; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 41910 mov     ax, [bx] ;~ 1678:0CD0
cs=0x1678;eip=0x000cd2; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 41911 mov     dx, [bx+2] ;~ 1678:0CD2
cs=0x1678;eip=0x000cd5; 	T(LES(bx, transshapepolyinfo));	// 41912 les     bx, transshapepolyinfo ;~ 1678:0CD5
cs=0x1678;eip=0x000cd9; 	X(MOV(*(dw*)(raddr(es,bx+0x0E)), ax));	// 41913 mov     es:[bx+0Eh], ax ;~ 1678:0CD9
cs=0x1678;eip=0x000cdd; 	X(MOV(*(dw*)(raddr(es,bx+0x10)), dx));	// 41914 mov     es:[bx+10h], dx ;~ 1678:0CDD
cs=0x1678;eip=0x000ce1; 	T(MOV(bx, *(polyvertpointptrtab)));	// 41915 mov     bx, polyvertpointptrtab ;~ 1678:0CE1
cs=0x1678;eip=0x000ce5; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 41916 mov     ax, [bx] ;~ 1678:0CE5
cs=0x1678;eip=0x000ce7; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 41917 mov     dx, [bx+2] ;~ 1678:0CE7
cs=0x1678;eip=0x000cea; 	T(LES(bx, transshapepolyinfo));	// 41918 les     bx, transshapepolyinfo ;~ 1678:0CEA
cs=0x1678;eip=0x000cee; 	X(MOV(*(dw*)(raddr(es,bx+0x12)), ax));	// 41919 mov     es:[bx+12h], ax ;~ 1678:0CEE
cs=0x1678;eip=0x000cf2; 	X(MOV(*(dw*)(raddr(es,bx+0x14)), dx));	// 41920 mov     es:[bx+14h], dx ;~ 1678:0CF2
cs=0x1678;eip=0x000cf6; 	T(LES(bx, transshapeprimitives));	// 41921 les     bx, transshapeprimitives ;~ 1678:0CF6
cs=0x1678;eip=0x000cfa; 	T(MOV(al, *(raddr(es,bx+3))));	// 41922 mov     al, es:[bx+3]   ; primitives+3 = paintjob 1? [0..x] ;~ 1678:0CFA
cs=0x1678;eip=0x000cfe; 	T(SUB(ah, ah));	// 41923 sub     ah, ah ;~ 1678:0CFE
cs=0x1678;eip=0x000d00; 	T(MOV(bx, ax));	// 41924 mov     bx, ax ;~ 1678:0D00
cs=0x1678;eip=0x000d02; 	T(SHL(bx, 1));	// 41925 shl     bx, 1 ;~ 1678:0D02
cs=0x1678;eip=0x000d04; 	T(ADD(bx, ax));	// 41926 add     bx, ax ;~ 1678:0D04
cs=0x1678;eip=0x000d06; 	T(SHL(bx, 1));	// 41927 shl     bx, 1 ;~ 1678:0D06
cs=0x1678;eip=0x000d08; 	T(ADD(bx, bp));	// 41928 add     bx, bp ;~ 1678:0D08
cs=0x1678;eip=0x000d0a; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x0B6A))));	// 41929 mov     ax, [bx-0B6Ah] ;~ 1678:0D0A
cs=0x1678;eip=0x000d0e; 	T(CWD);	// 41930 cwd ;~ 1678:0D0E
cs=0x1678;eip=0x000d0f; 	T(MOV(cl, 2));	// 41931 mov     cl, 2 ;~ 1678:0D0F
loc_25a71:
	// 7173 
cs=0x1678;eip=0x000d11; 	T(SHL(ax, 1));	// 41934 shl     ax, 1 ;~ 1678:0D11
cs=0x1678;eip=0x000d13; 	T(RCL(dx, 1));	// 41935 rcl     dx, 1 ;~ 1678:0D13
cs=0x1678;eip=0x000d15; 	T(DEC(cl));	// 41936 dec     cl ;~ 1678:0D15
cs=0x1678;eip=0x000d17; 	J(JNZ(loc_25a71));	// 41937 jnz     short loc_25A71 ;~ 1678:0D17
cs=0x1678;eip=0x000d19; 	J(JMP(loc_25a9e));	// 41938 jmp     short loc_25A9E ;~ 1678:0D19
loc_25a7c:
	// 7174 
cs=0x1678;eip=0x000d1c; 	T(LES(bx, transshapeprimitives));	// 41943 les     bx, transshapeprimitives ;~ 1678:0D1C
cs=0x1678;eip=0x000d20; 	T(MOV(al, *(raddr(es,bx))));	// 41944 mov     al, es:[bx]     ; primitives+0 = primitivetype ;~ 1678:0D20
cs=0x1678;eip=0x000d23; 	T(SUB(ah, ah));	// 41945 sub     ah, ah ;~ 1678:0D23
cs=0x1678;eip=0x000d25; 	T(MOV(bx, ax));	// 41946 mov     bx, ax ;~ 1678:0D25
cs=0x1678;eip=0x000d27; 	T(SHL(bx, 1));	// 41947 shl     bx, 1 ;~ 1678:0D27
cs=0x1678;eip=0x000d29; 	T(ADD(bx, ax));	// 41948 add     bx, ax ;~ 1678:0D29
cs=0x1678;eip=0x000d2b; 	T(SHL(bx, 1));	// 41949 shl     bx, 1 ;~ 1678:0D2B
cs=0x1678;eip=0x000d2d; 	T(ADD(bx, bp));	// 41950 add     bx, bp ;~ 1678:0D2D
cs=0x1678;eip=0x000d2f; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x0B6A))));	// 41951 mov     ax, [bx-0B6Ah] ;~ 1678:0D2F
cs=0x1678;eip=0x000d33; 	T(CWD);	// 41952 cwd ;~ 1678:0D33
cs=0x1678;eip=0x000d34; 	T(MOV(cl, 2));	// 41953 mov     cl, 2 ;~ 1678:0D34
loc_25a96:
	// 7175 
cs=0x1678;eip=0x000d36; 	T(SHL(ax, 1));	// 41956 shl     ax, 1 ;~ 1678:0D36
cs=0x1678;eip=0x000d38; 	T(RCL(dx, 1));	// 41957 rcl     dx, 1 ;~ 1678:0D38
cs=0x1678;eip=0x000d3a; 	T(DEC(cl));	// 41958 dec     cl ;~ 1678:0D3A
cs=0x1678;eip=0x000d3c; 	J(JNZ(loc_25a96));	// 41959 jnz     short loc_25A96 ;~ 1678:0D3C
loc_25a9e:
	// 7176 
cs=0x1678;eip=0x000d3e; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 41962 mov     [bp+var_18], ax ;~ 1678:0D3E
cs=0x1678;eip=0x000d41; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), dx));	// 41963 mov     [bp+var_16], dx ;~ 1678:0D41
cs=0x1678;eip=0x000d44; 	T(LES(bx, transshapepolyinfo));	// 41964 les     bx, transshapepolyinfo ;~ 1678:0D44
cs=0x1678;eip=0x000d48; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 41965 mov     ax, es:[bx+8] ;~ 1678:0D48
cs=0x1678;eip=0x000d4c; 	T(SUB(ax, *(dw*)(raddr(es,bx+0x0C))));	// 41966 sub     ax, es:[bx+0Ch] ;~ 1678:0D4C
cs=0x1678;eip=0x000d50; 	X(PUSH(ax));	// 41967 push    ax ;~ 1678:0D50
cs=0x1678;eip=0x000d51; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 41968 mov     ax, es:[bx+6] ;~ 1678:0D51
cs=0x1678;eip=0x000d55; 	T(SUB(ax, *(dw*)(raddr(es,bx+0x0A))));	// 41969 sub     ax, es:[bx+0Ah] ;~ 1678:0D55
cs=0x1678;eip=0x000d59; 	X(PUSH(ax));	// 41970 push    ax ;~ 1678:0D59
cs=0x1678;eip=0x000d5a; 	J(CALLF(polarradius2d,0));	// 41971 call    polarRadius2D ;~ 1678:0D5A
cs=0x1678;eip=0x000d5f; 	T(ADD(sp, 4));	// 41972 add     sp, 4 ;~ 1678:0D5F
cs=0x1678;eip=0x000d62; 	T(MOV(si, ax));	// 41973 mov     si, ax ;~ 1678:0D62
cs=0x1678;eip=0x000d64; 	T(LES(bx, transshapepolyinfo));	// 41974 les     bx, transshapepolyinfo ;~ 1678:0D64
cs=0x1678;eip=0x000d68; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 41975 mov     ax, es:[bx+8] ;~ 1678:0D68
cs=0x1678;eip=0x000d6c; 	T(SUB(ax, *(dw*)(raddr(es,bx+0x10))));	// 41976 sub     ax, es:[bx+10h] ;~ 1678:0D6C
cs=0x1678;eip=0x000d70; 	X(PUSH(ax));	// 41977 push    ax ;~ 1678:0D70
cs=0x1678;eip=0x000d71; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 41978 mov     ax, es:[bx+6] ;~ 1678:0D71
cs=0x1678;eip=0x000d75; 	T(SUB(ax, *(dw*)(raddr(es,bx+0x0E))));	// 41979 sub     ax, es:[bx+0Eh] ;~ 1678:0D75
cs=0x1678;eip=0x000d79; 	X(PUSH(ax));	// 41980 push    ax ;~ 1678:0D79
cs=0x1678;eip=0x000d7a; 	J(CALLF(polarradius2d,0));	// 41981 call    polarRadius2D ;~ 1678:0D7A
cs=0x1678;eip=0x000d7f; 	T(ADD(sp, 4));	// 41982 add     sp, 4 ;~ 1678:0D7F
cs=0x1678;eip=0x000d82; 	T(MOV(di, ax));	// 41983 mov     di, ax ;~ 1678:0D82
cs=0x1678;eip=0x000d84; 	T(CMP(di, si));	// 41984 cmp     di, si ;~ 1678:0D84
cs=0x1678;eip=0x000d86; 	J(JLE(loc_25aea));	// 41985 jle     short loc_25AEA ;~ 1678:0D86
cs=0x1678;eip=0x000d88; 	T(MOV(si, di));	// 41986 mov     si, di ;~ 1678:0D88
loc_25aea:
	// 7177 
cs=0x1678;eip=0x000d8a; 	T(TEST(transshapeflags, 8));	// 41989 test    transshapeflags, 8 ;~ 1678:0D8A
cs=0x1678;eip=0x000d8f; 	J(JNZ(loc_25af4));	// 41990 jnz     short loc_25AF4 ;~ 1678:0D8F
cs=0x1678;eip=0x000d91; 	J(JMP(loc_25b9c));	// 41991 jmp     loc_25B9C ;~ 1678:0D91
loc_25af4:
	// 7178 
cs=0x1678;eip=0x000d94; 	T(LES(bx, transshapepolyinfo));	// 41995 les     bx, transshapepolyinfo ;~ 1678:0D94
cs=0x1678;eip=0x000d98; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 41996 mov     ax, es:[bx+6] ;~ 1678:0D98
cs=0x1678;eip=0x000d9c; 	T(SUB(ax, si));	// 41997 sub     ax, si ;~ 1678:0D9C
cs=0x1678;eip=0x000d9e; 	T(DEC(ax));	// 41998 dec     ax ;~ 1678:0D9E
cs=0x1678;eip=0x000d9f; 	X(MOV(*(dw*)(raddr(ss,bp+var_450)), ax));	// 41999 mov     [bp+var_450], ax ;~ 1678:0D9F
cs=0x1678;eip=0x000da3; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 42000 mov     ax, es:[bx+8] ;~ 1678:0DA3
cs=0x1678;eip=0x000da7; 	T(SUB(ax, si));	// 42001 sub     ax, si ;~ 1678:0DA7
cs=0x1678;eip=0x000da9; 	T(DEC(ax));	// 42002 dec     ax ;~ 1678:0DA9
cs=0x1678;eip=0x000daa; 	X(MOV(*(dw*)(raddr(ss,bp+var_44e)), ax));	// 42003 mov     [bp+var_44E], ax ;~ 1678:0DAA
cs=0x1678;eip=0x000dae; 	X(PUSH(transshaperectptr));	// 42004 push    transshaperectptr ;~ 1678:0DAE
cs=0x1678;eip=0x000db2; 	T(ax = bp+var_450);	// 42005 lea     ax, [bp+var_450] ;~ 1678:0DB2
cs=0x1678;eip=0x000db6; 	X(PUSH(ax));	// 42006 push    ax ;~ 1678:0DB6
cs=0x1678;eip=0x000db7; 	X(PUSH(cs));	// 42007 push    cs ;~ 1678:0DB7
cs=0x1678;eip=0x000db8; 	J(CALL(rect_adjust_from_point,0));	// 42008 call    near ptr rect_adjust_from_point ;~ 1678:0DB8
cs=0x1678;eip=0x000dbb; 	T(ADD(sp, 4));	// 42009 add     sp, 4 ;~ 1678:0DBB
cs=0x1678;eip=0x000dbe; 	T(LES(bx, transshapepolyinfo));	// 42010 les     bx, transshapepolyinfo ;~ 1678:0DBE
cs=0x1678;eip=0x000dc2; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 42011 mov     ax, es:[bx+8] ;~ 1678:0DC2
cs=0x1678;eip=0x000dc6; 	T(ADD(ax, si));	// 42012 add     ax, si ;~ 1678:0DC6
cs=0x1678;eip=0x000dc8; 	T(INC(ax));	// 42013 inc     ax ;~ 1678:0DC8
cs=0x1678;eip=0x000dc9; 	X(MOV(*(dw*)(raddr(ss,bp+var_44e)), ax));	// 42014 mov     [bp+var_44E], ax ;~ 1678:0DC9
cs=0x1678;eip=0x000dcd; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 42015 mov     ax, es:[bx+6] ;~ 1678:0DCD
cs=0x1678;eip=0x000dd1; 	T(ADD(ax, si));	// 42016 add     ax, si ;~ 1678:0DD1
cs=0x1678;eip=0x000dd3; 	T(INC(ax));	// 42017 inc     ax ;~ 1678:0DD3
cs=0x1678;eip=0x000dd4; 	X(MOV(*(dw*)(raddr(ss,bp+var_450)), ax));	// 42018 mov     [bp+var_450], ax ;~ 1678:0DD4
cs=0x1678;eip=0x000dd8; 	X(PUSH(transshaperectptr));	// 42019 push    transshaperectptr ;~ 1678:0DD8
cs=0x1678;eip=0x000ddc; 	T(ax = bp+var_450);	// 42020 lea     ax, [bp+var_450] ;~ 1678:0DDC
cs=0x1678;eip=0x000de0; 	X(PUSH(ax));	// 42021 push    ax ;~ 1678:0DE0
cs=0x1678;eip=0x000de1; 	X(PUSH(cs));	// 42022 push    cs ;~ 1678:0DE1
cs=0x1678;eip=0x000de2; 	J(CALL(rect_adjust_from_point,0));	// 42023 call    near ptr rect_adjust_from_point ;~ 1678:0DE2
cs=0x1678;eip=0x000de5; 	T(ADD(sp, 4));	// 42024 add     sp, 4 ;~ 1678:0DE5
cs=0x1678;eip=0x000de8; 	T(LES(bx, transshapepolyinfo));	// 42025 les     bx, transshapepolyinfo ;~ 1678:0DE8
cs=0x1678;eip=0x000dec; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x12))));	// 42026 mov     ax, es:[bx+12h] ;~ 1678:0DEC
cs=0x1678;eip=0x000df0; 	T(SUB(ax, si));	// 42027 sub     ax, si ;~ 1678:0DF0
cs=0x1678;eip=0x000df2; 	T(DEC(ax));	// 42028 dec     ax ;~ 1678:0DF2
cs=0x1678;eip=0x000df3; 	X(MOV(*(dw*)(raddr(ss,bp+var_450)), ax));	// 42029 mov     [bp+var_450], ax ;~ 1678:0DF3
cs=0x1678;eip=0x000df7; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x14))));	// 42030 mov     ax, es:[bx+14h] ;~ 1678:0DF7
cs=0x1678;eip=0x000dfb; 	T(SUB(ax, si));	// 42031 sub     ax, si ;~ 1678:0DFB
cs=0x1678;eip=0x000dfd; 	T(DEC(ax));	// 42032 dec     ax ;~ 1678:0DFD
cs=0x1678;eip=0x000dfe; 	X(MOV(*(dw*)(raddr(ss,bp+var_44e)), ax));	// 42033 mov     [bp+var_44E], ax ;~ 1678:0DFE
cs=0x1678;eip=0x000e02; 	X(PUSH(transshaperectptr));	// 42034 push    transshaperectptr ;~ 1678:0E02
cs=0x1678;eip=0x000e06; 	T(ax = bp+var_450);	// 42035 lea     ax, [bp+var_450] ;~ 1678:0E06
cs=0x1678;eip=0x000e0a; 	X(PUSH(ax));	// 42036 push    ax ;~ 1678:0E0A
cs=0x1678;eip=0x000e0b; 	X(PUSH(cs));	// 42037 push    cs ;~ 1678:0E0B
cs=0x1678;eip=0x000e0c; 	J(CALL(rect_adjust_from_point,0));	// 42038 call    near ptr rect_adjust_from_point ;~ 1678:0E0C
cs=0x1678;eip=0x000e0f; 	T(ADD(sp, 4));	// 42039 add     sp, 4 ;~ 1678:0E0F
cs=0x1678;eip=0x000e12; 	T(LES(bx, transshapepolyinfo));	// 42040 les     bx, transshapepolyinfo ;~ 1678:0E12
cs=0x1678;eip=0x000e16; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x14))));	// 42041 mov     ax, es:[bx+14h] ;~ 1678:0E16
cs=0x1678;eip=0x000e1a; 	T(ADD(ax, si));	// 42042 add     ax, si ;~ 1678:0E1A
cs=0x1678;eip=0x000e1c; 	T(INC(ax));	// 42043 inc     ax ;~ 1678:0E1C
cs=0x1678;eip=0x000e1d; 	X(MOV(*(dw*)(raddr(ss,bp+var_44e)), ax));	// 42044 mov     [bp+var_44E], ax ;~ 1678:0E1D
cs=0x1678;eip=0x000e21; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x12))));	// 42045 mov     ax, es:[bx+12h] ;~ 1678:0E21
cs=0x1678;eip=0x000e25; 	T(ADD(ax, si));	// 42046 add     ax, si ;~ 1678:0E25
cs=0x1678;eip=0x000e27; 	T(INC(ax));	// 42047 inc     ax ;~ 1678:0E27
cs=0x1678;eip=0x000e28; 	X(MOV(*(dw*)(raddr(ss,bp+var_450)), ax));	// 42048 mov     [bp+var_450], ax ;~ 1678:0E28
cs=0x1678;eip=0x000e2c; 	X(PUSH(transshaperectptr));	// 42049 push    transshaperectptr ;~ 1678:0E2C
cs=0x1678;eip=0x000e30; 	T(ax = bp+var_450);	// 42050 lea     ax, [bp+var_450] ;~ 1678:0E30
cs=0x1678;eip=0x000e34; 	X(PUSH(ax));	// 42051 push    ax ;~ 1678:0E34
cs=0x1678;eip=0x000e35; 	X(PUSH(cs));	// 42052 push    cs ;~ 1678:0E35
cs=0x1678;eip=0x000e36; 	J(CALL(rect_adjust_from_point,0));	// 42053 call    near ptr rect_adjust_from_point ;~ 1678:0E36
cs=0x1678;eip=0x000e39; 	T(ADD(sp, 4));	// 42054 add     sp, 4 ;~ 1678:0E39
loc_25b9c:
	// 7179 
cs=0x1678;eip=0x000e3c; 	X(MOV(transshapenumvertscopy, 4));	// 42057 mov     transshapenumvertscopy, 4 ;~ 1678:0E3C
cs=0x1678;eip=0x000e41; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 1));	// 42058 mov     [bp+var_4], 1 ;~ 1678:0E41
cs=0x1678;eip=0x000e46; 	J(JMP(loc_25801));	// 42059 jmp     loc_25801 ;~ 1678:0E46
_primtype_sphere:
	// 7180 
cs=0x1678;eip=0x000e4a; 	T(LES(bx, transshapeprimitives));	// 42064 les     bx, transshapeprimitives ;~ 1678:0E4A
cs=0x1678;eip=0x000e4e; 	T(MOV(al, *(raddr(es,bx))));	// 42065 mov     al, es:[bx] ;~ 1678:0E4E
cs=0x1678;eip=0x000e51; 	T(SUB(ah, ah));	// 42066 sub     ah, ah ;~ 1678:0E51
cs=0x1678;eip=0x000e53; 	T(MOV(si, ax));	// 42067 mov     si, ax ;~ 1678:0E53
cs=0x1678;eip=0x000e55; 	T(MOV(al, *(raddr(es,bx+1))));	// 42068 mov     al, es:[bx+1] ;~ 1678:0E55
cs=0x1678;eip=0x000e59; 	T(MOV(di, ax));	// 42069 mov     di, ax ;~ 1678:0E59
cs=0x1678;eip=0x000e5b; 	T(MOV(cx, ax));	// 42070 mov     cx, ax ;~ 1678:0E5B
cs=0x1678;eip=0x000e5d; 	T(SHL(ax, 1));	// 42071 shl     ax, 1 ;~ 1678:0E5D
cs=0x1678;eip=0x000e5f; 	T(ADD(ax, cx));	// 42072 add     ax, cx ;~ 1678:0E5F
cs=0x1678;eip=0x000e61; 	T(SHL(ax, 1));	// 42073 shl     ax, 1 ;~ 1678:0E61
cs=0x1678;eip=0x000e63; 	T(ADD(ax, bp));	// 42074 add     ax, bp ;~ 1678:0E63
cs=0x1678;eip=0x000e65; 	X(MOV(*(dw*)(raddr(ss,bp+var_b7c)), ax));	// 42075 mov     [bp+var_B7C], ax ;~ 1678:0E65
cs=0x1678;eip=0x000e69; 	T(MOV(ax, si));	// 42076 mov     ax, si ;~ 1678:0E69
cs=0x1678;eip=0x000e6b; 	T(MOV(cx, ax));	// 42077 mov     cx, ax ;~ 1678:0E6B
cs=0x1678;eip=0x000e6d; 	T(SHL(ax, 1));	// 42078 shl     ax, 1 ;~ 1678:0E6D
cs=0x1678;eip=0x000e6f; 	T(ADD(ax, cx));	// 42079 add     ax, cx ;~ 1678:0E6F
cs=0x1678;eip=0x000e71; 	T(SHL(ax, 1));	// 42080 shl     ax, 1 ;~ 1678:0E71
cs=0x1678;eip=0x000e73; 	T(ADD(ax, bp));	// 42081 add     ax, bp ;~ 1678:0E73
cs=0x1678;eip=0x000e75; 	X(MOV(*(dw*)(raddr(ss,bp+var_b7a)), ax));	// 42082 mov     [bp+var_B7A], ax ;~ 1678:0E75
cs=0x1678;eip=0x000e79; 	T(MOV(bx, ax));	// 42083 mov     bx, ax ;~ 1678:0E79
cs=0x1678;eip=0x000e7b; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x0B6A))));	// 42084 mov     ax, [bx-0B6Ah] ;~ 1678:0E7B
cs=0x1678;eip=0x000e7f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_b7c))));	// 42085 mov     bx, [bp+var_B7C] ;~ 1678:0E7F
cs=0x1678;eip=0x000e83; 	T(ADD(ax, *(dw*)(raddr(ds,bx-0x0B6A))));	// 42086 add     ax, [bx-0B6Ah] ;~ 1678:0E83
cs=0x1678;eip=0x000e87; 	T(CWD);	// 42087 cwd ;~ 1678:0E87
cs=0x1678;eip=0x000e88; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 42088 mov     [bp+var_18], ax ;~ 1678:0E88
cs=0x1678;eip=0x000e8b; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), dx));	// 42089 mov     [bp+var_16], dx ;~ 1678:0E8B
cs=0x1678;eip=0x000e8e; 	T(MOV(al, *(raddr(ss,bp+di+var_562))));	// 42090 mov     al, [bp+di+var_562] ;~ 1678:0E8E
cs=0x1678;eip=0x000e92; 	T(CBW);	// 42091 cbw ;~ 1678:0E92
cs=0x1678;eip=0x000e93; 	T(MOV(cx, ax));	// 42092 mov     cx, ax ;~ 1678:0E93
cs=0x1678;eip=0x000e95; 	T(MOV(al, *(raddr(ss,bp+si+var_562))));	// 42093 mov     al, [bp+si+var_562] ;~ 1678:0E95
cs=0x1678;eip=0x000e99; 	T(CBW);	// 42094 cbw ;~ 1678:0E99
cs=0x1678;eip=0x000e9a; 	T(ADD(ax, cx));	// 42095 add     ax, cx ;~ 1678:0E9A
cs=0x1678;eip=0x000e9c; 	J(JZ(loc_25c01));	// 42096 jz      short loc_25C01 ;~ 1678:0E9C
cs=0x1678;eip=0x000e9e; 	J(JMP(loc_25801));	// 42097 jmp     loc_25801 ;~ 1678:0E9E
loc_25c01:
	// 7181 
cs=0x1678;eip=0x000ea1; 	T(MOV(bx, *(polyvertpointptrtab)));	// 42101 mov     bx, polyvertpointptrtab ;~ 1678:0EA1
cs=0x1678;eip=0x000ea5; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 42102 mov     ax, [bx] ;~ 1678:0EA5
cs=0x1678;eip=0x000ea7; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 42103 mov     dx, [bx+2] ;~ 1678:0EA7
cs=0x1678;eip=0x000eaa; 	T(LES(bx, transshapepolyinfo));	// 42104 les     bx, transshapepolyinfo ;~ 1678:0EAA
cs=0x1678;eip=0x000eae; 	X(MOV(*(dw*)(raddr(es,bx+6)), ax));	// 42105 mov     es:[bx+6], ax ;~ 1678:0EAE
cs=0x1678;eip=0x000eb2; 	X(MOV(*(dw*)(raddr(es,bx+8)), dx));	// 42106 mov     es:[bx+8], dx ;~ 1678:0EB2
cs=0x1678;eip=0x000eb6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_b7a))));	// 42107 mov     bx, [bp+var_B7A] ;~ 1678:0EB6
cs=0x1678;eip=0x000eba; 	X(PUSH(si));	// 42108 push    si ;~ 1678:0EBA
cs=0x1678;eip=0x000ebb; 	X(PUSH(di));	// 42109 push    di ;~ 1678:0EBB
cs=0x1678;eip=0x000ebc; 	T(di = bp+var_56a);	// 42110 lea     di, [bp+var_56A] ;~ 1678:0EBC
cs=0x1678;eip=0x000ec0; 	T(si = bx-0x0B6E);	// 42111 lea     si, [bx-0B6Eh] ;~ 1678:0EC0
cs=0x1678;eip=0x000ec4; 	X(PUSH(ss));	// 42112 push    ss ;~ 1678:0EC4
cs=0x1678;eip=0x000ec5; 	X(POP(es));	// 42113 pop     es ;~ 1678:0EC5
cs=0x1678;eip=0x000ec6; 	X(MOVSW);	// 42114 movsw ;~ 1678:0EC6
cs=0x1678;eip=0x000ec7; 	X(MOVSW);	// 42115 movsw ;~ 1678:0EC7
cs=0x1678;eip=0x000ec8; 	X(MOVSW);	// 42116 movsw ;~ 1678:0EC8
cs=0x1678;eip=0x000ec9; 	X(POP(di));	// 42117 pop     di ;~ 1678:0EC9
cs=0x1678;eip=0x000eca; 	X(POP(si));	// 42118 pop     si ;~ 1678:0ECA
cs=0x1678;eip=0x000ecb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_b7c))));	// 42119 mov     bx, [bp+var_B7C] ;~ 1678:0ECB
cs=0x1678;eip=0x000ecf; 	X(PUSH(si));	// 42120 push    si ;~ 1678:0ECF
cs=0x1678;eip=0x000ed0; 	X(PUSH(di));	// 42121 push    di ;~ 1678:0ED0
cs=0x1678;eip=0x000ed1; 	T(di = bp+var_b74);	// 42122 lea     di, [bp+var_B74] ;~ 1678:0ED1
cs=0x1678;eip=0x000ed5; 	T(si = bx-0x0B6E);	// 42123 lea     si, [bx-0B6Eh] ;~ 1678:0ED5
cs=0x1678;eip=0x000ed9; 	X(MOVSW);	// 42124 movsw ;~ 1678:0ED9
cs=0x1678;eip=0x000eda; 	X(MOVSW);	// 42125 movsw ;~ 1678:0EDA
cs=0x1678;eip=0x000edb; 	X(MOVSW);	// 42126 movsw ;~ 1678:0EDB
cs=0x1678;eip=0x000edc; 	X(POP(di));	// 42127 pop     di ;~ 1678:0EDC
cs=0x1678;eip=0x000edd; 	X(POP(si));	// 42128 pop     si ;~ 1678:0EDD
cs=0x1678;eip=0x000ede; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_56a))));	// 42129 mov     ax, [bp+var_56A] ;~ 1678:0EDE
cs=0x1678;eip=0x000ee2; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_b74))));	// 42130 sub     ax, [bp+var_B74] ;~ 1678:0EE2
cs=0x1678;eip=0x000ee6; 	X(MOV(*(dw*)(raddr(ss,bp+var_458)), ax));	// 42131 mov     [bp+var_458], ax ;~ 1678:0EE6
cs=0x1678;eip=0x000eea; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_568))));	// 42132 mov     ax, [bp+var_568] ;~ 1678:0EEA
cs=0x1678;eip=0x000eee; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_b72))));	// 42133 sub     ax, [bp+var_B72] ;~ 1678:0EEE
cs=0x1678;eip=0x000ef2; 	X(MOV(*(dw*)(raddr(ss,bp+var_456)), ax));	// 42134 mov     [bp+var_456], ax ;~ 1678:0EF2
cs=0x1678;eip=0x000ef6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_566))));	// 42135 mov     ax, [bp+var_566] ;~ 1678:0EF6
cs=0x1678;eip=0x000efa; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_b70))));	// 42136 sub     ax, [bp+var_B70] ;~ 1678:0EFA
cs=0x1678;eip=0x000efe; 	X(MOV(*(dw*)(raddr(ss,bp+var_454)), ax));	// 42137 mov     [bp+var_454], ax ;~ 1678:0EFE
cs=0x1678;eip=0x000f02; 	X(PUSH(*(dw*)(raddr(ss,bp+var_566))));	// 42138 push    [bp+var_566] ;~ 1678:0F02
cs=0x1678;eip=0x000f06; 	T(ax = bp+var_458);	// 42139 lea     ax, [bp+var_458] ;~ 1678:0F06
cs=0x1678;eip=0x000f0a; 	X(PUSH(ax));	// 42140 push    ax ;~ 1678:0F0A
cs=0x1678;eip=0x000f0b; 	J(CALLF(polarradius3d,0));	// 42141 call    polarRadius3D ;~ 1678:0F0B
cs=0x1678;eip=0x000f10; 	T(ADD(sp, 2));	// 42142 add     sp, 2 ;~ 1678:0F10
cs=0x1678;eip=0x000f13; 	X(PUSH(ax));	// 42143 push    ax ;~ 1678:0F13
cs=0x1678;eip=0x000f14; 	J(CALLF(transformed_shape_op_helper2,0));	// 42144 call    transformed_shape_op_helper2 ;~ 1678:0F14
cs=0x1678;eip=0x000f19; 	T(ADD(sp, 4));	// 42145 add     sp, 4 ;~ 1678:0F19
cs=0x1678;eip=0x000f1c; 	X(MOV(*(dw*)(raddr(ss,bp+var_462)), ax));	// 42146 mov     [bp+var_462], ax ;~ 1678:0F1C
cs=0x1678;eip=0x000f20; 	T(LES(bx, transshapepolyinfo));	// 42147 les     bx, transshapepolyinfo ;~ 1678:0F20
cs=0x1678;eip=0x000f24; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 42148 mov     es:[bx+0Ah], ax ;~ 1678:0F24
cs=0x1678;eip=0x000f28; 	T(TEST(transshapeflags, 8));	// 42149 test    transshapeflags, 8 ;~ 1678:0F28
cs=0x1678;eip=0x000f2d; 	J(JNZ(loc_25c92));	// 42150 jnz     short loc_25C92 ;~ 1678:0F2D
cs=0x1678;eip=0x000f2f; 	J(JMP(loc_25983));	// 42151 jmp     loc_25983 ;~ 1678:0F2F
loc_25c92:
	// 7182 
cs=0x1678;eip=0x000f32; 	T(MOV(bx, *(polyvertpointptrtab)));	// 42155 mov     bx, polyvertpointptrtab ;~ 1678:0F32
cs=0x1678;eip=0x000f36; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 42156 mov     ax, [bx+2] ;~ 1678:0F36
cs=0x1678;eip=0x000f39; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_462))));	// 42157 sub     ax, [bp+var_462] ;~ 1678:0F39
cs=0x1678;eip=0x000f3d; 	X(MOV(*(dw*)(raddr(ss,bp+var_44e)), ax));	// 42158 mov     [bp+var_44E], ax ;~ 1678:0F3D
cs=0x1678;eip=0x000f41; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 42159 mov     ax, [bx] ;~ 1678:0F41
cs=0x1678;eip=0x000f43; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_462))));	// 42160 sub     ax, [bp+var_462] ;~ 1678:0F43
cs=0x1678;eip=0x000f47; 	X(MOV(*(dw*)(raddr(ss,bp+var_450)), ax));	// 42161 mov     [bp+var_450], ax ;~ 1678:0F47
cs=0x1678;eip=0x000f4b; 	X(PUSH(transshaperectptr));	// 42162 push    transshaperectptr ;~ 1678:0F4B
cs=0x1678;eip=0x000f4f; 	T(ax = bp+var_450);	// 42163 lea     ax, [bp+var_450] ;~ 1678:0F4F
cs=0x1678;eip=0x000f53; 	X(PUSH(ax));	// 42164 push    ax ;~ 1678:0F53
cs=0x1678;eip=0x000f54; 	X(PUSH(cs));	// 42165 push    cs ;~ 1678:0F54
cs=0x1678;eip=0x000f55; 	J(CALL(rect_adjust_from_point,0));	// 42166 call    near ptr rect_adjust_from_point ;~ 1678:0F55
cs=0x1678;eip=0x000f58; 	T(ADD(sp, 4));	// 42167 add     sp, 4 ;~ 1678:0F58
cs=0x1678;eip=0x000f5b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_462))));	// 42168 mov     ax, [bp+var_462] ;~ 1678:0F5B
cs=0x1678;eip=0x000f5f; 	T(MOV(bx, *(polyvertpointptrtab)));	// 42169 mov     bx, polyvertpointptrtab ;~ 1678:0F5F
cs=0x1678;eip=0x000f63; 	T(ADD(ax, *(dw*)(raddr(ds,bx))));	// 42170 add     ax, [bx] ;~ 1678:0F63
cs=0x1678;eip=0x000f65; 	X(MOV(*(dw*)(raddr(ss,bp+var_450)), ax));	// 42171 mov     [bp+var_450], ax ;~ 1678:0F65
cs=0x1678;eip=0x000f69; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 42172 mov     ax, [bx+2] ;~ 1678:0F69
cs=0x1678;eip=0x000f6c; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_462))));	// 42173 add     ax, [bp+var_462] ;~ 1678:0F6C
cs=0x1678;eip=0x000f70; 	X(MOV(*(dw*)(raddr(ss,bp+var_450)), ax));	// 42174 mov     [bp+var_450], ax ;~ 1678:0F70
cs=0x1678;eip=0x000f74; 	X(PUSH(transshaperectptr));	// 42175 push    transshaperectptr ;~ 1678:0F74
cs=0x1678;eip=0x000f78; 	T(ax = bp+var_450);	// 42176 lea     ax, [bp+var_450] ;~ 1678:0F78
cs=0x1678;eip=0x000f7c; 	X(PUSH(ax));	// 42177 push    ax ;~ 1678:0F7C
cs=0x1678;eip=0x000f7d; 	J(JMP(loc_2597c));	// 42178 jmp     loc_2597C ;~ 1678:0F7D
loc_25ce0:
	// 7183 
cs=0x1678;eip=0x000f80; 	T(LES(bx, transshapeprimitives));	// 42182 les     bx, transshapeprimitives ;~ 1678:0F80
cs=0x1678;eip=0x000f84; 	T(MOV(al, *(raddr(es,bx))));	// 42183 mov     al, es:[bx]     ; primitives+ 0 = type ;~ 1678:0F84
cs=0x1678;eip=0x000f87; 	T(SUB(ah, ah));	// 42184 sub     ah, ah ;~ 1678:0F87
cs=0x1678;eip=0x000f89; 	T(MOV(si, ax));	// 42185 mov     si, ax ;~ 1678:0F89
cs=0x1678;eip=0x000f8b; 	T(CMP(*(raddr(ss,bp+si+var_562)), ah));	// 42186 cmp     [bp+si+var_562], ah ;~ 1678:0F8B
cs=0x1678;eip=0x000f8f; 	J(JZ(loc_25cf4));	// 42187 jz      short loc_25CF4 ;~ 1678:0F8F
cs=0x1678;eip=0x000f91; 	J(JMP(loc_25801));	// 42188 jmp     loc_25801 ;~ 1678:0F91
loc_25cf4:
	// 7184 
cs=0x1678;eip=0x000f94; 	T(MOV(bx, si));	// 42192 mov     bx, si ;~ 1678:0F94
cs=0x1678;eip=0x000f96; 	T(SHL(bx, 1));	// 42193 shl     bx, 1 ;~ 1678:0F96
cs=0x1678;eip=0x000f98; 	T(ADD(bx, ax));	// 42194 add     bx, ax ;~ 1678:0F98
cs=0x1678;eip=0x000f9a; 	T(SHL(bx, 1));	// 42195 shl     bx, 1 ;~ 1678:0F9A
cs=0x1678;eip=0x000f9c; 	T(ADD(bx, bp));	// 42196 add     bx, bp ;~ 1678:0F9C
cs=0x1678;eip=0x000f9e; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x0B6A))));	// 42197 mov     ax, [bx-0B6Ah] ;~ 1678:0F9E
cs=0x1678;eip=0x000fa2; 	T(CWD);	// 42198 cwd ;~ 1678:0FA2
cs=0x1678;eip=0x000fa3; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 42199 mov     [bp+var_18], ax ;~ 1678:0FA3
cs=0x1678;eip=0x000fa6; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), dx));	// 42200 mov     [bp+var_16], dx ;~ 1678:0FA6
cs=0x1678;eip=0x000fa9; 	T(MOV(bx, *(polyvertpointptrtab)));	// 42201 mov     bx, polyvertpointptrtab ;~ 1678:0FA9
cs=0x1678;eip=0x000fad; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 42202 mov     ax, [bx] ;~ 1678:0FAD
cs=0x1678;eip=0x000faf; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 42203 mov     dx, [bx+2] ;~ 1678:0FAF
cs=0x1678;eip=0x000fb2; 	T(LES(bx, transshapepolyinfo));	// 42204 les     bx, transshapepolyinfo ;~ 1678:0FB2
cs=0x1678;eip=0x000fb6; 	X(MOV(*(dw*)(raddr(es,bx+6)), ax));	// 42205 mov     es:[bx+6], ax ;~ 1678:0FB6
cs=0x1678;eip=0x000fba; 	X(MOV(*(dw*)(raddr(es,bx+8)), dx));	// 42206 mov     es:[bx+8], dx ;~ 1678:0FBA
cs=0x1678;eip=0x000fbe; 	T(TEST(transshapeflags, 8));	// 42207 test    transshapeflags, 8 ;~ 1678:0FBE
cs=0x1678;eip=0x000fc3; 	J(JZ(loc_25d34));	// 42208 jz      short loc_25D34 ;~ 1678:0FC3
cs=0x1678;eip=0x000fc5; 	X(PUSH(transshaperectptr));	// 42209 push    transshaperectptr ;~ 1678:0FC5
cs=0x1678;eip=0x000fc9; 	X(PUSH(*(polyvertpointptrtab)));	// 42210 push    polyvertpointptrtab ;~ 1678:0FC9
cs=0x1678;eip=0x000fcd; 	X(PUSH(cs));	// 42211 push    cs ;~ 1678:0FCD
cs=0x1678;eip=0x000fce; 	J(CALL(rect_adjust_from_point,0));	// 42212 call    near ptr rect_adjust_from_point ;~ 1678:0FCE
cs=0x1678;eip=0x000fd1; 	T(ADD(sp, 4));	// 42213 add     sp, 4 ;~ 1678:0FD1
loc_25d34:
	// 7185 
cs=0x1678;eip=0x000fd4; 	X(MOV(transshapenumvertscopy, 1));	// 42216 mov     transshapenumvertscopy, 1 ;~ 1678:0FD4
cs=0x1678;eip=0x000fd9; 	J(JMP(loc_25988));	// 42217 jmp     loc_25988 ;~ 1678:0FD9
loc_25d3c:
	// 7186 
cs=0x1678;eip=0x000fdc; 	X(INC(*(dw*)(raddr(ss,bp+var_45e))));	// 42221 inc     [bp+var_45E] ;~ 1678:0FDC
cs=0x1678;eip=0x000fe0; 	T(LES(bx, transshapepolyinfo));	// 42222 les     bx, transshapepolyinfo ;~ 1678:0FE0
cs=0x1678;eip=0x000fe4; 	T(MOV(al, transshapenumvertscopy));	// 42223 mov     al, transshapenumvertscopy ;~ 1678:0FE4
cs=0x1678;eip=0x000fe7; 	X(MOV(*(raddr(es,bx+3)), al));	// 42224 mov     es:[bx+3], al   ; polyinfo+3 = numverts ;~ 1678:0FE7
cs=0x1678;eip=0x000feb; 	T(LES(bx, transshapepolyinfo));	// 42225 les     bx, transshapepolyinfo ;~ 1678:0FEB
cs=0x1678;eip=0x000fef; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 42226 mov     al, [bp+var_6] ;~ 1678:0FEF
cs=0x1678;eip=0x000ff2; 	X(MOV(*(raddr(es,bx+4)), al));	// 42227 mov     es:[bx+4], al   ; polyinfo+4 = primtype ;~ 1678:0FF2
cs=0x1678;eip=0x000ff6; 	T(CMP(transprimitivepaintjob, 0x2D));	// 42228 cmp     transprimitivepaintjob, 2Dh ; '-' ; if shape paintjob = 0x2d (back lights), use override ;~ 1678:0FF6
cs=0x1678;eip=0x000ffb; 	J(JNZ(loc_25d66));	// 42229 jnz     short loc_25D66 ;~ 1678:0FFB
cs=0x1678;eip=0x000ffd; 	T(LES(bx, transshapepolyinfo));	// 42230 les     bx, transshapepolyinfo ;~ 1678:0FFD
cs=0x1678;eip=0x001001; 	T(MOV(al, backlights_paint_override));	// 42231 mov     al, backlights_paint_override ;~ 1678:1001
cs=0x1678;eip=0x001004; 	J(JMP(loc_25d6d));	// 42232 jmp     short loc_25D6D ;~ 1678:1004
loc_25d66:
	// 7187 
cs=0x1678;eip=0x001006; 	T(LES(bx, transshapepolyinfo));	// 42236 les     bx, transshapepolyinfo ;~ 1678:1006
cs=0x1678;eip=0x00100a; 	T(MOV(al, transprimitivepaintjob));	// 42237 mov     al, transprimitivepaintjob ;~ 1678:100A
loc_25d6d:
	// 7188 
cs=0x1678;eip=0x00100d; 	X(MOV(*(raddr(es,bx+2)), al));	// 42240 mov     es:[bx+2], al   ; polyinfo+2 = paintjob ;~ 1678:100D
cs=0x1678;eip=0x001011; 	T(MOV(al, transshapenumvertscopy));	// 42241 mov     al, transshapenumvertscopy ;~ 1678:1011
cs=0x1678;eip=0x001014; 	T(SUB(ah, ah));	// 42242 sub     ah, ah ;~ 1678:1014
cs=0x1678;eip=0x001016; 	T(CMP(ax, 1));	// 42243 cmp     ax, 1 ;~ 1678:1016
cs=0x1678;eip=0x001019; 	J(JZ(loc_25d9c));	// 42244 jz      short loc_25D9C ;~ 1678:1019
cs=0x1678;eip=0x00101b; 	T(CMP(ax, 2));	// 42245 cmp     ax, 2 ;~ 1678:101B
cs=0x1678;eip=0x00101e; 	J(JZ(loc_25db8));	// 42246 jz      short loc_25DB8 ;~ 1678:101E
cs=0x1678;eip=0x001020; 	T(CMP(ax, 4));	// 42247 cmp     ax, 4 ;~ 1678:1020
cs=0x1678;eip=0x001023; 	J(JZ(loc_25dc6));	// 42248 jz      short loc_25DC6 ;~ 1678:1023
cs=0x1678;eip=0x001025; 	T(CMP(ax, 8));	// 42249 cmp     ax, 8 ;~ 1678:1025
cs=0x1678;eip=0x001028; 	J(JZ(loc_25dda));	// 42250 jz      short loc_25DDA ;~ 1678:1028
cs=0x1678;eip=0x00102a; 	T(SUB(cx, cx));	// 42251 sub     cx, cx ;~ 1678:102A
cs=0x1678;eip=0x00102c; 	X(PUSH(cx));	// 42252 push    cx ;~ 1678:102C
cs=0x1678;eip=0x00102d; 	X(PUSH(ax));	// 42253 push    ax ;~ 1678:102D
cs=0x1678;eip=0x00102e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 42254 push    [bp+var_16] ;~ 1678:102E
cs=0x1678;eip=0x001031; 	X(PUSH(*(dw*)(raddr(ss,bp+var_18))));	// 42255 push    [bp+var_18] ;~ 1678:1031
cs=0x1678;eip=0x001034; 	J(CALLF(__afuldiv,0));	// 42256 call    __aFuldiv ;~ 1678:1034
cs=0x1678;eip=0x001039; 	J(JMP(loc_25dc2));	// 42257 jmp     short loc_25DC2 ;~ 1678:1039
loc_25d9c:
	// 7189 
cs=0x1678;eip=0x00103c; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_18))));	// 42262 mov     si, [bp+var_18] ;~ 1678:103C
loc_25d9f:
	// 7190 
cs=0x1678;eip=0x00103f; 	T(LES(bx, transshapepolyinfo));	// 42265 les     bx, transshapepolyinfo ;~ 1678:103F
cs=0x1678;eip=0x001043; 	X(MOV(*(dw*)(raddr(es,bx)), si));	// 42266 mov     es:[bx], si     ; polyinfo+0 = ??? ;~ 1678:1043
cs=0x1678;eip=0x001046; 	T(TEST(transshapeflags, 1));	// 42267 test    transshapeflags, 1 ;~ 1678:1046
cs=0x1678;eip=0x00104b; 	J(JNZ(loc_25db3));	// 42268 jnz     short loc_25DB3 ;~ 1678:104B
cs=0x1678;eip=0x00104d; 	T(TEST(*(db*)(raddr(ss,bp+var_2)), 2));	// 42269 test    byte ptr [bp+var_2], 2 ;~ 1678:104D
cs=0x1678;eip=0x001051; 	J(JZ(loc_25dee));	// 42270 jz      short loc_25DEE ;~ 1678:1051
loc_25db3:
	// 7191 
cs=0x1678;eip=0x001053; 	T(SUB(ax, ax));	// 42273 sub     ax, ax ;~ 1678:1053
cs=0x1678;eip=0x001055; 	J(JMP(loc_25df1));	// 42274 jmp     short loc_25DF1 ;~ 1678:1055
loc_25db8:
	// 7192 
cs=0x1678;eip=0x001058; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 42279 mov     ax, [bp+var_18] ;~ 1678:1058
cs=0x1678;eip=0x00105b; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_16))));	// 42280 mov     dx, [bp+var_16] ;~ 1678:105B
cs=0x1678;eip=0x00105e; 	T(SAR(dx, 1));	// 42281 sar     dx, 1 ;~ 1678:105E
cs=0x1678;eip=0x001060; 	T(RCR(ax, 1));	// 42282 rcr     ax, 1 ;~ 1678:1060
loc_25dc2:
	// 7193 
cs=0x1678;eip=0x001062; 	T(MOV(si, ax));	// 42286 mov     si, ax ;~ 1678:1062
cs=0x1678;eip=0x001064; 	J(JMP(loc_25d9f));	// 42287 jmp     short loc_25D9F ;~ 1678:1064
loc_25dc6:
	// 7194 
cs=0x1678;eip=0x001066; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 42291 mov     ax, [bp+var_18] ;~ 1678:1066
cs=0x1678;eip=0x001069; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_16))));	// 42292 mov     dx, [bp+var_16] ;~ 1678:1069
cs=0x1678;eip=0x00106c; 	T(MOV(cl, 2));	// 42293 mov     cl, 2 ;~ 1678:106C
loc_25dce:
	// 7195 
cs=0x1678;eip=0x00106e; 	T(OR(cl, cl));	// 42296 or      cl, cl ;~ 1678:106E
cs=0x1678;eip=0x001070; 	J(JZ(loc_25dc2));	// 42297 jz      short loc_25DC2 ;~ 1678:1070
cs=0x1678;eip=0x001072; 	T(SAR(dx, 1));	// 42298 sar     dx, 1 ;~ 1678:1072
cs=0x1678;eip=0x001074; 	T(RCR(ax, 1));	// 42299 rcr     ax, 1 ;~ 1678:1074
cs=0x1678;eip=0x001076; 	T(DEC(cl));	// 42300 dec     cl ;~ 1678:1076
cs=0x1678;eip=0x001078; 	J(JMP(loc_25dce));	// 42301 jmp     short loc_25DCE ;~ 1678:1078
loc_25dda:
	// 7196 
cs=0x1678;eip=0x00107a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 42305 mov     ax, [bp+var_18] ;~ 1678:107A
cs=0x1678;eip=0x00107d; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_16))));	// 42306 mov     dx, [bp+var_16] ;~ 1678:107D
cs=0x1678;eip=0x001080; 	T(MOV(cl, 3));	// 42307 mov     cl, 3 ;~ 1678:1080
loc_25de2:
	// 7197 
cs=0x1678;eip=0x001082; 	T(OR(cl, cl));	// 42310 or      cl, cl ;~ 1678:1082
cs=0x1678;eip=0x001084; 	J(JZ(loc_25dc2));	// 42311 jz      short loc_25DC2 ;~ 1678:1084
cs=0x1678;eip=0x001086; 	T(SAR(dx, 1));	// 42312 sar     dx, 1 ;~ 1678:1086
cs=0x1678;eip=0x001088; 	T(RCR(ax, 1));	// 42313 rcr     ax, 1 ;~ 1678:1088
cs=0x1678;eip=0x00108a; 	T(DEC(cl));	// 42314 dec     cl ;~ 1678:108A
cs=0x1678;eip=0x00108c; 	J(JMP(loc_25de2));	// 42315 jmp     short loc_25DE2 ;~ 1678:108C
loc_25dee:
	// 7198 
cs=0x1678;eip=0x00108e; 	T(MOV(ax, 1));	// 42319 mov     ax, 1 ;~ 1678:108E
loc_25df1:
	// 7199 
cs=0x1678;eip=0x001091; 	X(PUSH(ax));	// 42322 push    ax ;~ 1678:1091
cs=0x1678;eip=0x001092; 	X(PUSH(si));	// 42323 push    si ;~ 1678:1092
cs=0x1678;eip=0x001093; 	X(PUSH(cs));	// 42324 push    cs ;~ 1678:1093
cs=0x1678;eip=0x001094; 	J(CALL(transformed_shape_op_helper,0));	// 42325 call    near ptr transformed_shape_op_helper ;~ 1678:1094
cs=0x1678;eip=0x001097; 	T(ADD(sp, 4));	// 42326 add     sp, 4 ;~ 1678:1097
cs=0x1678;eip=0x00109a; 	X(MOV(word_40ece, ax));	// 42327 mov     word_40ECE, ax ;~ 1678:109A
cs=0x1678;eip=0x00109d; 	T(OR(ax, ax));	// 42328 or      ax, ax ;~ 1678:109D
cs=0x1678;eip=0x00109f; 	J(JZ(loc_25e04));	// 42329 jz      short loc_25E04 ;~ 1678:109F
cs=0x1678;eip=0x0010a1; 	J(JMP(loc_24eae));	// 42330 jmp     loc_24EAE ;~ 1678:10A1
loc_25e04:
	// 7200 
cs=0x1678;eip=0x0010a4; 	T(LES(bx, transshapeprimitives));	// 42335 les     bx, transshapeprimitives ;~ 1678:10A4
cs=0x1678;eip=0x0010a8; 	T(CMP(*(raddr(es,bx)), 0));	// 42336 cmp     byte ptr es:[bx], 0 ;~ 1678:10A8
cs=0x1678;eip=0x0010ac; 	J(JZ(_transform_done));	// 42337 jz      short _transform_done ;~ 1678:10AC
cs=0x1678;eip=0x0010ae; 	J(JMP(loc_25233));	// 42338 jmp     loc_25233 ;~ 1678:10AE
_transform_done:
	// 7201 
cs=0x1678;eip=0x0010b1; 	T(CMP(*(dw*)(raddr(ss,bp+var_45e)), 0));	// 42342 cmp     [bp+var_45E], 0 ;~ 1678:10B1
cs=0x1678;eip=0x0010b6; 	J(JNZ(_done_ret_0));	// 42343 jnz     short _done_ret_0 ;~ 1678:10B6
cs=0x1678;eip=0x0010b8; 	J(JMP(_done_ret_neg1));	// 42344 jmp     _done_ret_neg1 ;~ 1678:10B8
_done_ret_0:
	// 7202 
cs=0x1678;eip=0x0010bb; 	T(SUB(ax, ax));	// 42348 sub     ax, ax ;~ 1678:10BB
cs=0x1678;eip=0x0010bd; 	X(POP(si));	// 42349 pop     si ;~ 1678:10BD
cs=0x1678;eip=0x0010be; 	X(POP(di));	// 42350 pop     di ;~ 1678:10BE
cs=0x1678;eip=0x0010bf; 	T(MOV(sp, bp));	// 42351 mov     sp, bp ;~ 1678:10BF
cs=0x1678;eip=0x0010c1; 	X(POP(bp));	// 42352 pop     bp ;~ 1678:10C1
cs=0x1678;eip=0x0010c2; 	J(RETF(0));	// 42353 retf ;~ 1678:10C2

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_done_ret_0: 	goto _done_ret_0;
        case m2c::k_done_ret_neg1: 	goto _done_ret_neg1;
        case m2c::k_primtype_line: 	goto _primtype_line;
        case m2c::k_primtype_poly: 	goto _primtype_poly;
        case m2c::k_primtype_sphere: 	goto _primtype_sphere;
        case m2c::k_primtype_wheel: 	goto _primtype_wheel;
        case m2c::k_transform_done: 	goto _transform_done;
        case m2c::kloc_24eae: 	goto loc_24eae;
        case m2c::kloc_24eb8: 	goto loc_24eb8;
        case m2c::kloc_24f32: 	goto loc_24f32;
        case m2c::kloc_24f45: 	goto loc_24f45;
        case m2c::kloc_24f4a: 	goto loc_24f4a;
        case m2c::kloc_24f50: 	goto loc_24f50;
        case m2c::kloc_24f9f: 	goto loc_24f9f;
        case m2c::kloc_24fb6: 	goto loc_24fb6;
        case m2c::kloc_25046: 	goto loc_25046;
        case m2c::kloc_25077: 	goto loc_25077;
        case m2c::kloc_250a3: 	goto loc_250a3;
        case m2c::kloc_250c6: 	goto loc_250c6;
        case m2c::kloc_250cc: 	goto loc_250cc;
        case m2c::kloc_250e6: 	goto loc_250e6;
        case m2c::kloc_250fa: 	goto loc_250fa;
        case m2c::kloc_25134: 	goto loc_25134;
        case m2c::kloc_2513e: 	goto loc_2513e;
        case m2c::kloc_2513f: 	goto loc_2513f;
        case m2c::kloc_2514b: 	goto loc_2514b;
        case m2c::kloc_25196: 	goto loc_25196;
        case m2c::kloc_251e9: 	goto loc_251e9;
        case m2c::kloc_251f6: 	goto loc_251f6;
        case m2c::kloc_25220: 	goto loc_25220;
        case m2c::kloc_25233: 	goto loc_25233;
        case m2c::kloc_25282: 	goto loc_25282;
        case m2c::kloc_25304: 	goto loc_25304;
        case m2c::kloc_2530a: 	goto loc_2530a;
        case m2c::kloc_25325: 	goto loc_25325;
        case m2c::kloc_25328: 	goto loc_25328;
        case m2c::kloc_25335: 	goto loc_25335;
        case m2c::kloc_2536e: 	goto loc_2536e;
        case m2c::kloc_25370: 	goto loc_25370;
        case m2c::kloc_253a8: 	goto loc_253a8;
        case m2c::kloc_253fd: 	goto loc_253fd;
        case m2c::kloc_25406: 	goto loc_25406;
        case m2c::kloc_2542a: 	goto loc_2542a;
        case m2c::kloc_25434: 	goto loc_25434;
        case m2c::kloc_25444: 	goto loc_25444;
        case m2c::kloc_25455: 	goto loc_25455;
        case m2c::kloc_2545d: 	goto loc_2545d;
        case m2c::kloc_25465: 	goto loc_25465;
        case m2c::kloc_2546d: 	goto loc_2546d;
        case m2c::kloc_254a6: 	goto loc_254a6;
        case m2c::kloc_254a7: 	goto loc_254a7;
        case m2c::kloc_254b3: 	goto loc_254b3;
        case m2c::kloc_25511: 	goto loc_25511;
        case m2c::kloc_25518: 	goto loc_25518;
        case m2c::kloc_2553a: 	goto loc_2553a;
        case m2c::kloc_2554a: 	goto loc_2554a;
        case m2c::kloc_255b4: 	goto loc_255b4;
        case m2c::kloc_255cb: 	goto loc_255cb;
        case m2c::kloc_255de: 	goto loc_255de;
        case m2c::kloc_255e6: 	goto loc_255e6;
        case m2c::kloc_255ee: 	goto loc_255ee;
        case m2c::kloc_255fa: 	goto loc_255fa;
        case m2c::kloc_25635: 	goto loc_25635;
        case m2c::kloc_25645: 	goto loc_25645;
        case m2c::kloc_256a5: 	goto loc_256a5;
        case m2c::kloc_256bc: 	goto loc_256bc;
        case m2c::kloc_256d7: 	goto loc_256d7;
        case m2c::kloc_25700: 	goto loc_25700;
        case m2c::kloc_25714: 	goto loc_25714;
        case m2c::kloc_2571a: 	goto loc_2571a;
        case m2c::kloc_25724: 	goto loc_25724;
        case m2c::kloc_2572e: 	goto loc_2572e;
        case m2c::kloc_25760: 	goto loc_25760;
        case m2c::kloc_25763: 	goto loc_25763;
        case m2c::kloc_2576c: 	goto loc_2576c;
        case m2c::kloc_25776: 	goto loc_25776;
        case m2c::kloc_25790: 	goto loc_25790;
        case m2c::kloc_257ba: 	goto loc_257ba;
        case m2c::kloc_257cf: 	goto loc_257cf;
        case m2c::kloc_257df: 	goto loc_257df;
        case m2c::kloc_257f4: 	goto loc_257f4;
        case m2c::kloc_257f7: 	goto loc_257f7;
        case m2c::kloc_25801: 	goto loc_25801;
        case m2c::kloc_25822: 	goto loc_25822;
        case m2c::kloc_2582b: 	goto loc_2582b;
        case m2c::kloc_25839: 	goto loc_25839;
        case m2c::kloc_258bc: 	goto loc_258bc;
        case m2c::kloc_258f6: 	goto loc_258f6;
        case m2c::kloc_2590d: 	goto loc_2590d;
        case m2c::kloc_2597c: 	goto loc_2597c;
        case m2c::kloc_25983: 	goto loc_25983;
        case m2c::kloc_25988: 	goto loc_25988;
        case m2c::kloc_25997: 	goto loc_25997;
        case m2c::kloc_25a71: 	goto loc_25a71;
        case m2c::kloc_25a7c: 	goto loc_25a7c;
        case m2c::kloc_25a96: 	goto loc_25a96;
        case m2c::kloc_25a9e: 	goto loc_25a9e;
        case m2c::kloc_25aea: 	goto loc_25aea;
        case m2c::kloc_25af4: 	goto loc_25af4;
        case m2c::kloc_25b9c: 	goto loc_25b9c;
        case m2c::kloc_25c01: 	goto loc_25c01;
        case m2c::kloc_25c92: 	goto loc_25c92;
        case m2c::kloc_25ce0: 	goto loc_25ce0;
        case m2c::kloc_25cf4: 	goto loc_25cf4;
        case m2c::kloc_25d34: 	goto loc_25d34;
        case m2c::kloc_25d3c: 	goto loc_25d3c;
        case m2c::kloc_25d66: 	goto loc_25d66;
        case m2c::kloc_25d6d: 	goto loc_25d6d;
        case m2c::kloc_25d9c: 	goto loc_25d9c;
        case m2c::kloc_25d9f: 	goto loc_25d9f;
        case m2c::kloc_25db3: 	goto loc_25db3;
        case m2c::kloc_25db8: 	goto loc_25db8;
        case m2c::kloc_25dc2: 	goto loc_25dc2;
        case m2c::kloc_25dc6: 	goto loc_25dc6;
        case m2c::kloc_25dce: 	goto loc_25dce;
        case m2c::kloc_25dda: 	goto loc_25dda;
        case m2c::kloc_25de2: 	goto loc_25de2;
        case m2c::kloc_25dee: 	goto loc_25dee;
        case m2c::kloc_25df1: 	goto loc_25df1;
        case m2c::kloc_25e04: 	goto loc_25e04;
        case m2c::ktransformed_shape_op: 	goto transformed_shape_op;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool transformed_shape_op_helper(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    transformed_shape_op_helper:
    _begin:
#undef arg_0
#define arg_0 6
	// 42365 arg_0           = word ptr  6 ;~ 1678:10C4
#undef arg_2
#define arg_2 8
	// 42366 arg_2           = word ptr  8 ;~ 1678:10C4
cs=0x1678;eip=0x0010c4; 	X(PUSH(bp));	// 42368 push    bp ;~ 1678:10C4
cs=0x1678;eip=0x0010c5; 	T(MOV(bp, sp));	// 42369 mov     bp, sp ;~ 1678:10C5
cs=0x1678;eip=0x0010c7; 	T(SUB(sp, 4));	// 42370 sub     sp, 4 ;~ 1678:10C7
cs=0x1678;eip=0x0010ca; 	X(PUSH(di));	// 42371 push    di ;~ 1678:10CA
cs=0x1678;eip=0x0010cb; 	X(PUSH(si));	// 42372 push    si ;~ 1678:10CB
cs=0x1678;eip=0x0010cc; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 42373 cmp     [bp+arg_2], 0 ;~ 1678:10CC
cs=0x1678;eip=0x0010d0; 	J(JNZ(loc_25e3e));	// 42374 jnz     short loc_25E3E ;~ 1678:10D0
cs=0x1678;eip=0x0010d2; 	T(MOV(bx, word_45d98));	// 42375 mov     bx, word_45D98 ;~ 1678:10D2
cs=0x1678;eip=0x0010d6; 	T(SHL(bx, 1));	// 42376 shl     bx, 1 ;~ 1678:10D6
cs=0x1678;eip=0x0010d8; 	T(MOV(di, *(dw*)(((db*)word_40ed6)+bx)));	// 42377 mov     di, word_40ED6[bx] ;~ 1678:10D8
cs=0x1678;eip=0x0010dc; 	J(JMP(loc_25e7b));	// 42378 jmp     short loc_25E7B ;~ 1678:10DC
loc_25e3e:
	// 7203 
cs=0x1678;eip=0x0010de; 	T(MOV(ax, word_4394e));	// 42382 mov     ax, word_4394E ;~ 1678:10DE
cs=0x1678;eip=0x0010e1; 	X(MOV(word_45d98, ax));	// 42383 mov     word_45D98, ax ;~ 1678:10E1
cs=0x1678;eip=0x0010e4; 	T(MOV(bx, ax));	// 42384 mov     bx, ax ;~ 1678:10E4
cs=0x1678;eip=0x0010e6; 	T(SHL(bx, 1));	// 42385 shl     bx, 1 ;~ 1678:10E6
cs=0x1678;eip=0x0010e8; 	T(MOV(di, *(dw*)(((db*)word_40ed6)+bx)));	// 42386 mov     di, word_40ED6[bx] ;~ 1678:10E8
cs=0x1678;eip=0x0010ec; 	T(MOV(si, word_4554a));	// 42387 mov     si, word_4554A ;~ 1678:10EC
cs=0x1678;eip=0x0010f0; 	J(JMP(loc_25e77));	// 42388 jmp     short loc_25E77 ;~ 1678:10F0
loc_25e52:
	// 7204 
cs=0x1678;eip=0x0010f2; 	T(MOV(ax, si));	// 42392 mov     ax, si ;~ 1678:10F2
cs=0x1678;eip=0x0010f4; 	T(DEC(si));	// 42393 dec     si ;~ 1678:10F4
cs=0x1678;eip=0x0010f5; 	T(OR(ax, ax));	// 42394 or      ax, ax ;~ 1678:10F5
cs=0x1678;eip=0x0010f7; 	J(JZ(loc_25e7b));	// 42395 jz      short loc_25E7B ;~ 1678:10F7
cs=0x1678;eip=0x0010f9; 	T(MOV(bx, di));	// 42396 mov     bx, di ;~ 1678:10F9
cs=0x1678;eip=0x0010fb; 	T(SHL(bx, 1));	// 42397 shl     bx, 1 ;~ 1678:10FB
cs=0x1678;eip=0x0010fd; 	T(SHL(bx, 1));	// 42398 shl     bx, 1 ;~ 1678:10FD
cs=0x1678;eip=0x0010ff; 	T(LES(bx, *(dd*)(((db*)polyinfoptrs)+bx)));	// 42399 les     bx, polyinfoptrs[bx] ;~ 1678:10FF
cs=0x1678;eip=0x001103; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 42400 mov     ax, [bp+arg_0] ;~ 1678:1103
cs=0x1678;eip=0x001106; 	T(CMP(*(dw*)(raddr(es,bx)), ax));	// 42401 cmp     es:[bx], ax ;~ 1678:1106
cs=0x1678;eip=0x001109; 	J(JL(loc_25e7b));	// 42402 jl      short loc_25E7B ;~ 1678:1109
cs=0x1678;eip=0x00110b; 	X(MOV(word_45d98, di));	// 42403 mov     word_45D98, di ;~ 1678:110B
cs=0x1678;eip=0x00110f; 	T(MOV(bx, di));	// 42404 mov     bx, di ;~ 1678:110F
cs=0x1678;eip=0x001111; 	T(SHL(bx, 1));	// 42405 shl     bx, 1 ;~ 1678:1111
cs=0x1678;eip=0x001113; 	T(MOV(di, *(dw*)(((db*)word_40ed6)+bx)));	// 42406 mov     di, word_40ED6[bx] ;~ 1678:1113
loc_25e77:
	// 7205 
cs=0x1678;eip=0x001117; 	T(OR(di, di));	// 42409 or      di, di ;~ 1678:1117
cs=0x1678;eip=0x001119; 	J(JGE(loc_25e52));	// 42410 jge     short loc_25E52 ;~ 1678:1119
loc_25e7b:
	// 7206 
cs=0x1678;eip=0x00111b; 	T(MOV(bx, polyinfonumpolys));	// 42414 mov     bx, polyinfonumpolys ;~ 1678:111B
cs=0x1678;eip=0x00111f; 	T(SHL(bx, 1));	// 42415 shl     bx, 1 ;~ 1678:111F
cs=0x1678;eip=0x001121; 	X(MOV(*(dw*)(((db*)word_40ed6)+bx), di));	// 42416 mov     word_40ED6[bx], di ;~ 1678:1121
cs=0x1678;eip=0x001125; 	T(MOV(bx, word_45d98));	// 42417 mov     bx, word_45D98 ;~ 1678:1125
cs=0x1678;eip=0x001129; 	T(SHL(bx, 1));	// 42418 shl     bx, 1 ;~ 1678:1129
cs=0x1678;eip=0x00112b; 	T(MOV(ax, polyinfonumpolys));	// 42419 mov     ax, polyinfonumpolys ;~ 1678:112B
cs=0x1678;eip=0x00112e; 	X(MOV(*(dw*)(((db*)word_40ed6)+bx), ax));	// 42420 mov     word_40ED6[bx], ax ;~ 1678:112E
cs=0x1678;eip=0x001132; 	X(INC(word_4554a));	// 42421 inc     word_4554A ;~ 1678:1132
cs=0x1678;eip=0x001136; 	T(OR(di, di));	// 42422 or      di, di ;~ 1678:1136
cs=0x1678;eip=0x001138; 	J(JGE(loc_25ea0));	// 42423 jge     short loc_25EA0 ;~ 1678:1138
cs=0x1678;eip=0x00113a; 	T(MOV(ax, polyinfonumpolys));	// 42424 mov     ax, polyinfonumpolys ;~ 1678:113A
cs=0x1678;eip=0x00113d; 	X(MOV(word_443f2, ax));	// 42425 mov     word_443F2, ax ;~ 1678:113D
loc_25ea0:
	// 7207 
cs=0x1678;eip=0x001140; 	T(MOV(bx, word_45d98));	// 42428 mov     bx, word_45D98 ;~ 1678:1140
cs=0x1678;eip=0x001144; 	T(SHL(bx, 1));	// 42429 shl     bx, 1 ;~ 1678:1144
cs=0x1678;eip=0x001146; 	T(MOV(ax, *(dw*)(((db*)word_40ed6)+bx)));	// 42430 mov     ax, word_40ED6[bx] ;~ 1678:1146
cs=0x1678;eip=0x00114a; 	X(MOV(word_45d98, ax));	// 42431 mov     word_45D98, ax ;~ 1678:114A
cs=0x1678;eip=0x00114d; 	X(INC(polyinfonumpolys));	// 42432 inc     polyinfonumpolys ;~ 1678:114D
cs=0x1678;eip=0x001151; 	T(MOV(al, transshapenumvertscopy));	// 42433 mov     al, transshapenumvertscopy ;~ 1678:1151
cs=0x1678;eip=0x001154; 	T(SUB(ah, ah));	// 42434 sub     ah, ah ;~ 1678:1154
cs=0x1678;eip=0x001156; 	T(SHL(ax, 1));	// 42435 shl     ax, 1 ;~ 1678:1156
cs=0x1678;eip=0x001158; 	T(SHL(ax, 1));	// 42436 shl     ax, 1 ;~ 1678:1158
cs=0x1678;eip=0x00115a; 	T(ADD(ax, 6));	// 42437 add     ax, 6 ;~ 1678:115A
cs=0x1678;eip=0x00115d; 	X(ADD(polyinfoptrnext, ax));	// 42438 add     polyinfoptrnext, ax ;~ 1678:115D
cs=0x1678;eip=0x001161; 	T(CMP(polyinfonumpolys, 0x190));	// 42439 cmp     polyinfonumpolys, 190h ;~ 1678:1161
cs=0x1678;eip=0x001167; 	J(JZ(loc_25ed1));	// 42440 jz      short loc_25ED1 ;~ 1678:1167
cs=0x1678;eip=0x001169; 	T(CMP(polyinfoptrnext, 0x2872));	// 42441 cmp     polyinfoptrnext, 2872h ;~ 1678:1169
cs=0x1678;eip=0x00116f; 	J(JLE(loc_25eda));	// 42442 jle     short loc_25EDA ;~ 1678:116F
loc_25ed1:
	// 7208 
cs=0x1678;eip=0x001171; 	T(MOV(ax, 1));	// 42445 mov     ax, 1           ; return 1 if error ;~ 1678:1171
cs=0x1678;eip=0x001174; 	X(POP(si));	// 42446 pop     si ;~ 1678:1174
cs=0x1678;eip=0x001175; 	X(POP(di));	// 42447 pop     di ;~ 1678:1175
cs=0x1678;eip=0x001176; 	T(MOV(sp, bp));	// 42448 mov     sp, bp ;~ 1678:1176
cs=0x1678;eip=0x001178; 	X(POP(bp));	// 42449 pop     bp ;~ 1678:1178
cs=0x1678;eip=0x001179; 	J(RETF(0));	// 42450 retf ;~ 1678:1179
loc_25eda:
	// 7209 
cs=0x1678;eip=0x00117a; 	T(SUB(ax, ax));	// 42454 sub     ax, ax ;~ 1678:117A
cs=0x1678;eip=0x00117c; 	X(POP(si));	// 42455 pop     si ;~ 1678:117C
cs=0x1678;eip=0x00117d; 	X(POP(di));	// 42456 pop     di ;~ 1678:117D
cs=0x1678;eip=0x00117e; 	T(MOV(sp, bp));	// 42457 mov     sp, bp ;~ 1678:117E
cs=0x1678;eip=0x001180; 	X(POP(bp));	// 42458 pop     bp ;~ 1678:1180
cs=0x1678;eip=0x001181; 	J(RETF(0));	// 42459 retf ;~ 1678:1181

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_25e3e: 	goto loc_25e3e;
        case m2c::kloc_25e52: 	goto loc_25e52;
        case m2c::kloc_25e77: 	goto loc_25e77;
        case m2c::kloc_25e7b: 	goto loc_25e7b;
        case m2c::kloc_25ea0: 	goto loc_25ea0;
        case m2c::kloc_25ed1: 	goto loc_25ed1;
        case m2c::kloc_25eda: 	goto loc_25eda;
        case m2c::ktransformed_shape_op_helper: 	goto transformed_shape_op_helper;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool rect_compare_point(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    rect_compare_point:
    _begin:
#undef var_4
#define var_4 -4
	// 42470 var_4           = byte ptr -4 ;~ 1678:1182
#undef arg_0
#define arg_0 6
	// 42471 arg_0           = word ptr  6 ;~ 1678:1182
cs=0x1678;eip=0x001182; 	X(PUSH(bp));	// 42473 push    bp ;~ 1678:1182
cs=0x1678;eip=0x001183; 	T(MOV(bp, sp));	// 42474 mov     bp, sp ;~ 1678:1183
cs=0x1678;eip=0x001185; 	T(SUB(sp, 4));	// 42475 sub     sp, 4 ;~ 1678:1185
cs=0x1678;eip=0x001188; 	X(PUSH(si));	// 42476 push    si ;~ 1678:1188
cs=0x1678;eip=0x001189; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 42477 mov     si, [bp+arg_0] ;~ 1678:1189
cs=0x1678;eip=0x00118c; 	T(MOV(ax, word_40eb4));	// 42478 mov     ax, word_40EB4 ;~ 1678:118C
cs=0x1678;eip=0x00118f; 	T(CMP(*(dw*)(raddr(ds,si+2)), ax));	// 42479 cmp     [si+2], ax ;~ 1678:118F
cs=0x1678;eip=0x001192; 	J(JGE(loc_25efa));	// 42480 jge     short loc_25EFA ;~ 1678:1192
cs=0x1678;eip=0x001194; 	X(MOV(*(raddr(ss,bp+var_4)), 1));	// 42481 mov     [bp+var_4], 1 ;~ 1678:1194
cs=0x1678;eip=0x001198; 	J(JMP(loc_25f0c));	// 42482 jmp     short loc_25F0C ;~ 1678:1198
loc_25efa:
	// 7210 
cs=0x1678;eip=0x00119a; 	T(MOV(ax, word_40eb6));	// 42486 mov     ax, word_40EB6 ;~ 1678:119A
cs=0x1678;eip=0x00119d; 	T(CMP(*(dw*)(raddr(ds,si+2)), ax));	// 42487 cmp     [si+2], ax ;~ 1678:119D
cs=0x1678;eip=0x0011a0; 	J(JLE(loc_25f08));	// 42488 jle     short loc_25F08 ;~ 1678:11A0
cs=0x1678;eip=0x0011a2; 	X(MOV(*(raddr(ss,bp+var_4)), 2));	// 42489 mov     [bp+var_4], 2 ;~ 1678:11A2
cs=0x1678;eip=0x0011a6; 	J(JMP(loc_25f0c));	// 42490 jmp     short loc_25F0C ;~ 1678:11A6
loc_25f08:
	// 7211 
cs=0x1678;eip=0x0011a8; 	X(MOV(*(raddr(ss,bp+var_4)), 0));	// 42494 mov     [bp+var_4], 0 ;~ 1678:11A8
loc_25f0c:
	// 7212 
cs=0x1678;eip=0x0011ac; 	T(MOV(ax, select_rect_rc));	// 42498 mov     ax, select_rect_rc ;~ 1678:11AC
cs=0x1678;eip=0x0011af; 	T(CMP(*(dw*)(raddr(ds,si+0)), ax));	// 42499 cmp     [si+0], ax ;~ 1678:11AF
cs=0x1678;eip=0x0011b1; 	J(JGE(loc_25f1a));	// 42500 jge     short loc_25F1A ;~ 1678:11B1
cs=0x1678;eip=0x0011b3; 	X(OR(*(raddr(ss,bp+var_4)), 4));	// 42501 or      [bp+var_4], 4 ;~ 1678:11B3
cs=0x1678;eip=0x0011b7; 	J(JMP(loc_25f25));	// 42502 jmp     short loc_25F25 ;~ 1678:11B7
loc_25f1a:
	// 7213 
cs=0x1678;eip=0x0011ba; 	T(MOV(ax, word_40eb2));	// 42507 mov     ax, word_40EB2 ;~ 1678:11BA
cs=0x1678;eip=0x0011bd; 	T(CMP(*(dw*)(raddr(ds,si+0)), ax));	// 42508 cmp     [si+0], ax ;~ 1678:11BD
cs=0x1678;eip=0x0011bf; 	J(JLE(loc_25f25));	// 42509 jle     short loc_25F25 ;~ 1678:11BF
cs=0x1678;eip=0x0011c1; 	X(OR(*(raddr(ss,bp+var_4)), 8));	// 42510 or      [bp+var_4], 8 ;~ 1678:11C1
loc_25f25:
	// 7214 
cs=0x1678;eip=0x0011c5; 	T(MOV(al, *(raddr(ss,bp+var_4))));	// 42514 mov     al, [bp+var_4] ;~ 1678:11C5
cs=0x1678;eip=0x0011c8; 	T(CBW);	// 42515 cbw ;~ 1678:11C8
cs=0x1678;eip=0x0011c9; 	X(POP(si));	// 42516 pop     si ;~ 1678:11C9
cs=0x1678;eip=0x0011ca; 	T(MOV(sp, bp));	// 42517 mov     sp, bp ;~ 1678:11CA
cs=0x1678;eip=0x0011cc; 	X(POP(bp));	// 42518 pop     bp ;~ 1678:11CC
cs=0x1678;eip=0x0011cd; 	J(RETF(0));	// 42519 retf ;~ 1678:11CD

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_25efa: 	goto loc_25efa;
        case m2c::kloc_25f08: 	goto loc_25f08;
        case m2c::kloc_25f0c: 	goto loc_25f0c;
        case m2c::kloc_25f1a: 	goto loc_25f1a;
        case m2c::kloc_25f25: 	goto loc_25f25;
        case m2c::krect_compare_point: 	goto rect_compare_point;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool transformed_shape_op_helper3(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    transformed_shape_op_helper3:
    _begin:
#undef var_10
#define var_10 -0x10
	// 42530 var_10          = word ptr -10h ;~ 1678:11CE
#undef var_e
#define var_e -0x0E
	// 42531 var_E           = word ptr -0Eh ;~ 1678:11CE
#undef var_c
#define var_c -0x0C
	// 42532 var_C           = word ptr -0Ch ;~ 1678:11CE
#undef var_a
#define var_a -0x0A
	// 42533 var_A           = word ptr -0Ah ;~ 1678:11CE
#undef var_8
#define var_8 -8
	// 42534 var_8           = word ptr -8 ;~ 1678:11CE
#undef var_6
#define var_6 -6
	// 42535 var_6           = word ptr -6 ;~ 1678:11CE
#undef var_4
#define var_4 -4
	// 42536 var_4           = word ptr -4 ;~ 1678:11CE
#undef var_2
#define var_2 -2
	// 42537 var_2           = word ptr -2 ;~ 1678:11CE
#undef arg_0
#define arg_0 6
	// 42538 arg_0           = dword ptr  6 ;~ 1678:11CE
cs=0x1678;eip=0x0011ce; 	X(PUSH(bp));	// 42540 push    bp ;~ 1678:11CE
cs=0x1678;eip=0x0011cf; 	T(MOV(bp, sp));	// 42541 mov     bp, sp ;~ 1678:11CF
cs=0x1678;eip=0x0011d1; 	T(SUB(sp, 0x10));	// 42542 sub     sp, 10h ;~ 1678:11D1
cs=0x1678;eip=0x0011d4; 	X(PUSH(di));	// 42543 push    di ;~ 1678:11D4
cs=0x1678;eip=0x0011d5; 	X(PUSH(si));	// 42544 push    si ;~ 1678:11D5
cs=0x1678;eip=0x0011d6; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 42545 les     bx, [bp+arg_0] ;~ 1678:11D6
cs=0x1678;eip=0x0011d9; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 42546 mov     ax, es:[bx+4] ;~ 1678:11D9
cs=0x1678;eip=0x0011dd; 	T(CWD);	// 42547 cwd ;~ 1678:11DD
cs=0x1678;eip=0x0011de; 	T(MOV(cx, ax));	// 42548 mov     cx, ax ;~ 1678:11DE
cs=0x1678;eip=0x0011e0; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 42549 mov     ax, es:[bx] ;~ 1678:11E0
cs=0x1678;eip=0x0011e3; 	T(MOV(bx, dx));	// 42550 mov     bx, dx ;~ 1678:11E3
cs=0x1678;eip=0x0011e5; 	T(CWD);	// 42551 cwd ;~ 1678:11E5
cs=0x1678;eip=0x0011e6; 	T(SUB(ax, cx));	// 42552 sub     ax, cx ;~ 1678:11E6
cs=0x1678;eip=0x0011e8; 	T(SBB(dx, bx));	// 42553 sbb     dx, bx ;~ 1678:11E8
cs=0x1678;eip=0x0011ea; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 42554 mov     [bp+var_4], ax ;~ 1678:11EA
cs=0x1678;eip=0x0011ed; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 42555 mov     [bp+var_2], dx ;~ 1678:11ED
cs=0x1678;eip=0x0011f0; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 42556 mov     bx, word ptr [bp+arg_0] ;~ 1678:11F0
cs=0x1678;eip=0x0011f3; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 42557 mov     ax, es:[bx+4] ;~ 1678:11F3
cs=0x1678;eip=0x0011f7; 	T(CWD);	// 42558 cwd ;~ 1678:11F7
cs=0x1678;eip=0x0011f8; 	T(MOV(cx, ax));	// 42559 mov     cx, ax ;~ 1678:11F8
cs=0x1678;eip=0x0011fa; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 42560 mov     ax, es:[bx+8] ;~ 1678:11FA
cs=0x1678;eip=0x0011fe; 	T(MOV(bx, dx));	// 42561 mov     bx, dx ;~ 1678:11FE
cs=0x1678;eip=0x001200; 	T(CWD);	// 42562 cwd ;~ 1678:1200
cs=0x1678;eip=0x001201; 	T(SUB(ax, cx));	// 42563 sub     ax, cx ;~ 1678:1201
cs=0x1678;eip=0x001203; 	T(SBB(dx, bx));	// 42564 sbb     dx, bx ;~ 1678:1203
cs=0x1678;eip=0x001205; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 42565 mov     [bp+var_C], ax ;~ 1678:1205
cs=0x1678;eip=0x001208; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), dx));	// 42566 mov     [bp+var_A], dx ;~ 1678:1208
cs=0x1678;eip=0x00120b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 42567 mov     ax, [bp+var_4] ;~ 1678:120B
cs=0x1678;eip=0x00120e; 	T(OR(ax, *(dw*)(raddr(ss,bp+var_2))));	// 42568 or      ax, [bp+var_2] ;~ 1678:120E
cs=0x1678;eip=0x001211; 	J(JNZ(loc_25f7a));	// 42569 jnz     short loc_25F7A ;~ 1678:1211
cs=0x1678;eip=0x001213; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 42570 mov     ax, [bp+var_C] ;~ 1678:1213
cs=0x1678;eip=0x001216; 	T(OR(ax, dx));	// 42571 or      ax, dx ;~ 1678:1216
cs=0x1678;eip=0x001218; 	J(JZ(loc_25fee));	// 42572 jz      short loc_25FEE ;~ 1678:1218
loc_25f7a:
	// 7215 
cs=0x1678;eip=0x00121a; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 42575 mov     bx, word ptr [bp+arg_0] ;~ 1678:121A
cs=0x1678;eip=0x00121d; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 42576 mov     ax, es:[bx+2] ;~ 1678:121D
cs=0x1678;eip=0x001221; 	T(SUB(ax, *(dw*)(raddr(es,bx+6))));	// 42577 sub     ax, es:[bx+6] ;~ 1678:1221
cs=0x1678;eip=0x001225; 	T(CWD);	// 42578 cwd ;~ 1678:1225
cs=0x1678;eip=0x001226; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 42579 mov     [bp+var_8], ax ;~ 1678:1226
cs=0x1678;eip=0x001229; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 42580 mov     [bp+var_6], dx ;~ 1678:1229
cs=0x1678;eip=0x00122c; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 42581 mov     ax, es:[bx+0Ah] ;~ 1678:122C
cs=0x1678;eip=0x001230; 	T(SUB(ax, *(dw*)(raddr(es,bx+6))));	// 42582 sub     ax, es:[bx+6] ;~ 1678:1230
cs=0x1678;eip=0x001234; 	T(CWD);	// 42583 cwd ;~ 1678:1234
cs=0x1678;eip=0x001235; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 42584 mov     [bp+var_10], ax ;~ 1678:1235
cs=0x1678;eip=0x001238; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), dx));	// 42585 mov     [bp+var_E], dx ;~ 1678:1238
cs=0x1678;eip=0x00123b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 42586 mov     ax, [bp+var_8] ;~ 1678:123B
cs=0x1678;eip=0x00123e; 	T(OR(ax, *(dw*)(raddr(ss,bp+var_6))));	// 42587 or      ax, [bp+var_6] ;~ 1678:123E
cs=0x1678;eip=0x001241; 	J(JNZ(loc_25faa));	// 42588 jnz     short loc_25FAA ;~ 1678:1241
cs=0x1678;eip=0x001243; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 42589 mov     ax, [bp+var_10] ;~ 1678:1243
cs=0x1678;eip=0x001246; 	T(OR(ax, dx));	// 42590 or      ax, dx ;~ 1678:1246
cs=0x1678;eip=0x001248; 	J(JZ(loc_25fee));	// 42591 jz      short loc_25FEE ;~ 1678:1248
loc_25faa:
	// 7216 
cs=0x1678;eip=0x00124a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_e))));	// 42594 push    [bp+var_E] ;~ 1678:124A
cs=0x1678;eip=0x00124d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_10))));	// 42595 push    [bp+var_10] ;~ 1678:124D
cs=0x1678;eip=0x001250; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 42596 push    [bp+var_2] ;~ 1678:1250
cs=0x1678;eip=0x001253; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 42597 push    [bp+var_4] ;~ 1678:1253
cs=0x1678;eip=0x001256; 	J(CALLF(__aflmul,0));	// 42598 call    __aFlmul ;~ 1678:1256
cs=0x1678;eip=0x00125b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 42599 push    [bp+var_6] ;~ 1678:125B
cs=0x1678;eip=0x00125e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 42600 push    [bp+var_8] ;~ 1678:125E
cs=0x1678;eip=0x001261; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 42601 push    [bp+var_A] ;~ 1678:1261
cs=0x1678;eip=0x001264; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 42602 push    [bp+var_C] ;~ 1678:1264
cs=0x1678;eip=0x001267; 	T(MOV(si, ax));	// 42603 mov     si, ax ;~ 1678:1267
cs=0x1678;eip=0x001269; 	T(MOV(di, dx));	// 42604 mov     di, dx ;~ 1678:1269
cs=0x1678;eip=0x00126b; 	J(CALLF(__aflmul,0));	// 42605 call    __aFlmul ;~ 1678:126B
cs=0x1678;eip=0x001270; 	T(SUB(ax, si));	// 42606 sub     ax, si ;~ 1678:1270
cs=0x1678;eip=0x001272; 	T(SBB(dx, di));	// 42607 sbb     dx, di ;~ 1678:1272
cs=0x1678;eip=0x001274; 	T(OR(dx, dx));	// 42608 or      dx, dx ;~ 1678:1274
cs=0x1678;eip=0x001276; 	J(JL(loc_25fe4));	// 42609 jl      short loc_25FE4 ;~ 1678:1276
cs=0x1678;eip=0x001278; 	J(JG(loc_25fde));	// 42610 jg      short loc_25FDE ;~ 1678:1278
cs=0x1678;eip=0x00127a; 	T(OR(ax, ax));	// 42611 or      ax, ax ;~ 1678:127A
cs=0x1678;eip=0x00127c; 	J(JZ(loc_25fe4));	// 42612 jz      short loc_25FE4 ;~ 1678:127C
loc_25fde:
	// 7217 
cs=0x1678;eip=0x00127e; 	T(MOV(al, 1));	// 42615 mov     al, 1 ;~ 1678:127E
cs=0x1678;eip=0x001280; 	J(JMP(loc_25fe6));	// 42616 jmp     short loc_25FE6 ;~ 1678:1280
loc_25fe4:
	// 7218 
cs=0x1678;eip=0x001284; 	T(SUB(al, al));	// 42623 sub     al, al ;~ 1678:1284
loc_25fe6:
	// 7219 
cs=0x1678;eip=0x001286; 	T(CBW);	// 42626 cbw ;~ 1678:1286
cs=0x1678;eip=0x001287; 	X(POP(si));	// 42627 pop     si ;~ 1678:1287
cs=0x1678;eip=0x001288; 	X(POP(di));	// 42628 pop     di ;~ 1678:1288
cs=0x1678;eip=0x001289; 	T(MOV(sp, bp));	// 42629 mov     sp, bp ;~ 1678:1289
cs=0x1678;eip=0x00128b; 	X(POP(bp));	// 42630 pop     bp ;~ 1678:128B
cs=0x1678;eip=0x00128c; 	J(RETF(0));	// 42631 retf ;~ 1678:128C
loc_25fee:
	// 7220 
cs=0x1678;eip=0x00128e; 	T(SUB(ax, ax));	// 42637 sub     ax, ax ;~ 1678:128E
cs=0x1678;eip=0x001290; 	X(POP(si));	// 42638 pop     si ;~ 1678:1290
cs=0x1678;eip=0x001291; 	X(POP(di));	// 42639 pop     di ;~ 1678:1291
cs=0x1678;eip=0x001292; 	T(MOV(sp, bp));	// 42640 mov     sp, bp ;~ 1678:1292
cs=0x1678;eip=0x001294; 	X(POP(bp));	// 42641 pop     bp ;~ 1678:1294
cs=0x1678;eip=0x001295; 	J(RETF(0));	// 42642 retf ;~ 1678:1295

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_25f7a: 	goto loc_25f7a;
        case m2c::kloc_25faa: 	goto loc_25faa;
        case m2c::kloc_25fde: 	goto loc_25fde;
        case m2c::kloc_25fe4: 	goto loc_25fe4;
        case m2c::kloc_25fe6: 	goto loc_25fe6;
        case m2c::kloc_25fee: 	goto loc_25fee;
        case m2c::ktransformed_shape_op_helper3: 	goto transformed_shape_op_helper3;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool get_a_poly_info(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    get_a_poly_info:
    _begin:
#undef var_40
#define var_40 -0x40
	// 42653 var_40          = word ptr -40h ;~ 1678:1296
#undef var_3e
#define var_3e -0x3E
	// 42654 var_3E          = dword ptr -3Eh ;~ 1678:1296
#undef var_38
#define var_38 -0x38
	// 42655 var_38          = dword ptr -38h ;~ 1678:1296
#undef var_32
#define var_32 -0x32
	// 42656 var_32          = byte ptr -32h ;~ 1678:1296
#undef var_a
#define var_a -0x0A
	// 42657 var_A           = word ptr -0Ah ;~ 1678:1296
#undef var_8
#define var_8 -8
	// 42658 var_8           = word ptr -8 ;~ 1678:1296
#undef var_6
#define var_6 -6
	// 42659 var_6           = word ptr -6 ;~ 1678:1296
#undef var_4
#define var_4 -4
	// 42660 var_4           = word ptr -4 ;~ 1678:1296
#undef var_2
#define var_2 -2
	// 42661 var_2           = word ptr -2 ;~ 1678:1296
cs=0x1678;eip=0x001296; 	X(PUSH(bp));	// 42663 push    bp ;~ 1678:1296
cs=0x1678;eip=0x001297; 	T(MOV(bp, sp));	// 42664 mov     bp, sp ;~ 1678:1297
cs=0x1678;eip=0x001299; 	T(SUB(sp, 0x40));	// 42665 sub     sp, 40h ;~ 1678:1299
cs=0x1678;eip=0x00129c; 	X(PUSH(di));	// 42666 push    di ;~ 1678:129C
cs=0x1678;eip=0x00129d; 	X(PUSH(si));	// 42667 push    si ;~ 1678:129D
cs=0x1678;eip=0x00129e; 	T(MOV(di, 0x190));	// 42668 mov     di, 190h ;~ 1678:129E
cs=0x1678;eip=0x0012a1; 	T(SUB(si, si));	// 42669 sub     si, si ;~ 1678:12A1
cs=0x1678;eip=0x0012a3; 	J(JMP(loc_260ac));	// 42670 jmp     loc_260AC ;~ 1678:12A3
_fill_type0:
	// 7221 
cs=0x1678;eip=0x0012a6; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_38))));	// 42674 les     bx, [bp+var_38] ;~ 1678:12A6
cs=0x1678;eip=0x0012a9; 	T(MOV(al, *(raddr(es,bx+3))));	// 42675 mov     al, es:[bx+3] ;~ 1678:12A9
cs=0x1678;eip=0x0012ad; 	T(CBW);	// 42676 cbw ;~ 1678:12AD
cs=0x1678;eip=0x0012ae; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 42677 mov     [bp+var_2], ax ;~ 1678:12AE
cs=0x1678;eip=0x0012b1; 	T(MOV(ax, bx));	// 42678 mov     ax, bx ;~ 1678:12B1
cs=0x1678;eip=0x0012b3; 	T(MOV(dx, es));	// 42679 mov     dx, es ;~ 1678:12B3
cs=0x1678;eip=0x0012b5; 	T(ADD(ax, 6));	// 42680 add     ax, 6 ;~ 1678:12B5
cs=0x1678;eip=0x0012b8; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_3e))), ax));	// 42681 mov     word ptr [bp+var_3E], ax ; polyinfoptrdata = polyinfoptr+6 ;~ 1678:12B8
cs=0x1678;eip=0x0012bb; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_3e +2))), dx));	// 42682 mov     word ptr [bp+var_3E+2], dx ;~ 1678:12BB
cs=0x1678;eip=0x0012be; 	T(ax = bp+var_32);	// 42683 lea     ax, [bp+var_32] ;~ 1678:12BE
cs=0x1678;eip=0x0012c1; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 42684 mov     [bp+var_A], ax ;~ 1678:12C1
cs=0x1678;eip=0x0012c4; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 42685 mov     [bp+var_4], 0 ;~ 1678:12C4
cs=0x1678;eip=0x0012c9; 	J(JMP(loc_26049));	// 42686 jmp     short loc_26049 ;~ 1678:12C9
loc_2602c:
	// 7222 
cs=0x1678;eip=0x0012cc; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_3e))));	// 42691 les     bx, [bp+var_3E] ;~ 1678:12CC
cs=0x1678;eip=0x0012cf; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 42692 mov     ax, es:[bx] ;~ 1678:12CF
cs=0x1678;eip=0x0012d2; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 42693 mov     dx, es:[bx+2] ;~ 1678:12D2
cs=0x1678;eip=0x0012d6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_a))));	// 42694 mov     bx, [bp+var_A] ;~ 1678:12D6
cs=0x1678;eip=0x0012d9; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 42695 mov     [bx], ax ;~ 1678:12D9
cs=0x1678;eip=0x0012db; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 42696 mov     [bx+2], dx ;~ 1678:12DB
cs=0x1678;eip=0x0012de; 	X(ADD(*(dw*)(raddr(ss,bp+var_a)), 4));	// 42697 add     [bp+var_A], 4 ;~ 1678:12DE
cs=0x1678;eip=0x0012e2; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_3e))), 4));	// 42698 add     word ptr [bp+var_3E], 4 ;~ 1678:12E2
cs=0x1678;eip=0x0012e6; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 42699 inc     [bp+var_4] ;~ 1678:12E6
loc_26049:
	// 7223 
cs=0x1678;eip=0x0012e9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 42702 mov     ax, [bp+var_2] ;~ 1678:12E9
cs=0x1678;eip=0x0012ec; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), ax));	// 42703 cmp     [bp+var_4], ax ;~ 1678:12EC
cs=0x1678;eip=0x0012ef; 	J(JC(loc_2602c));	// 42704 jb      short loc_2602C ;~ 1678:12EF
cs=0x1678;eip=0x0012f1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_6))));	// 42705 mov     bx, [bp+var_6] ;~ 1678:12F1
cs=0x1678;eip=0x0012f4; 	T(SHL(bx, 1));	// 42706 shl     bx, 1 ;~ 1678:12F4
cs=0x1678;eip=0x0012f6; 	T(ADD(bx, material_patlist_ptr_cpy));	// 42707 add     bx, material_patlist_ptr_cpy ;~ 1678:12F6
cs=0x1678;eip=0x0012fa; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 42708 mov     ax, [bx] ;~ 1678:12FA
cs=0x1678;eip=0x0012fc; 	T(OR(ax, ax));	// 42709 or      ax, ax ;~ 1678:12FC
cs=0x1678;eip=0x0012fe; 	J(JZ(_fill_default));	// 42710 jz      short _fill_default ; 0 normal 1 grille 2? 3 invisible ;~ 1678:12FE
cs=0x1678;eip=0x001300; 	T(CMP(ax, 1));	// 42711 cmp     ax, 1 ;~ 1678:1300
cs=0x1678;eip=0x001303; 	J(JZ(_fill_patterned));	// 42712 jz      short _fill_patterned ;~ 1678:1303
cs=0x1678;eip=0x001305; 	T(CMP(ax, 2));	// 42713 cmp     ax, 2 ;~ 1678:1305
cs=0x1678;eip=0x001308; 	J(JNZ(_do_fill_next));	// 42714 jnz     short _do_fill_next ;~ 1678:1308
cs=0x1678;eip=0x00130a; 	J(JMP(_fill_unk));	// 42715 jmp     _fill_unk ;~ 1678:130A
_do_fill_next:
	// 7224 
cs=0x1678;eip=0x00130d; 	J(JMP(_fill_next));	// 42719 jmp     short _fill_next ;~ 1678:130D
_fill_default:
	// 7225 
cs=0x1678;eip=0x001310; 	T(ax = bp+var_32);	// 42724 lea     ax, [bp+var_32] ;~ 1678:1310
cs=0x1678;eip=0x001313; 	X(PUSH(ax));	// 42725 push    ax ;~ 1678:1313
cs=0x1678;eip=0x001314; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 42726 push    [bp+var_2] ;~ 1678:1314
cs=0x1678;eip=0x001317; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 42727 push    [bp+var_8] ;~ 1678:1317
cs=0x1678;eip=0x00131a; 	J(CALLF(prerender_default,0));	// 42728 call    preRender_default ;~ 1678:131A
_fill_next_eop6:
	// 7226 
cs=0x1678;eip=0x00131f; 	T(ADD(sp, 6));	// 42731 add     sp, 6 ;~ 1678:131F
cs=0x1678;eip=0x001322; 	J(JMP(_fill_next));	// 42732 jmp     short _fill_next ;~ 1678:1322
_fill_patterned:
	// 7227 
cs=0x1678;eip=0x001324; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_6))));	// 42736 mov     bx, [bp+var_6] ;~ 1678:1324
cs=0x1678;eip=0x001327; 	T(SHL(bx, 1));	// 42737 shl     bx, 1 ;~ 1678:1327
cs=0x1678;eip=0x001329; 	T(ADD(bx, material_patlist2_ptr_cpy));	// 42738 add     bx, material_patlist2_ptr_cpy ;~ 1678:1329
cs=0x1678;eip=0x00132d; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 42739 mov     ax, [bx] ;~ 1678:132D
cs=0x1678;eip=0x00132f; 	X(MOV(*(dw*)(raddr(ss,bp+var_40)), ax));	// 42740 mov     [bp+var_40], ax ;~ 1678:132F
cs=0x1678;eip=0x001332; 	T(OR(ax, ax));	// 42741 or      ax, ax ;~ 1678:1332
cs=0x1678;eip=0x001334; 	J(JZ(_fill_next));	// 42742 jz      short _fill_next ;~ 1678:1334
cs=0x1678;eip=0x001336; 	T(ax = bp+var_32);	// 42743 lea     ax, [bp+var_32] ;~ 1678:1336
cs=0x1678;eip=0x001339; 	X(PUSH(ax));	// 42744 push    ax ;~ 1678:1339
cs=0x1678;eip=0x00133a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 42745 push    [bp+var_2] ;~ 1678:133A
cs=0x1678;eip=0x00133d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 42746 push    [bp+var_8] ;~ 1678:133D
cs=0x1678;eip=0x001340; 	X(PUSH(*(dw*)(raddr(ss,bp+var_40))));	// 42747 push    [bp+var_40] ;~ 1678:1340
cs=0x1678;eip=0x001343; 	J(CALLF(prerender_patterned,0));	// 42748 call    preRender_patterned ;~ 1678:1343
_fill_next_eop8:
	// 7228 
cs=0x1678;eip=0x001348; 	T(ADD(sp, 8));	// 42751 add     sp, 8 ;~ 1678:1348
_fill_next:
	// 7229 
cs=0x1678;eip=0x00134b; 	T(INC(si));	// 42755 inc     si ;~ 1678:134B
loc_260ac:
	// 7230 
cs=0x1678;eip=0x00134c; 	T(MOV(ax, si));	// 42758 mov     ax, si ;~ 1678:134C
cs=0x1678;eip=0x00134e; 	T(CMP(ax, polyinfonumpolys));	// 42759 cmp     ax, polyinfonumpolys ;~ 1678:134E
cs=0x1678;eip=0x001352; 	J(JC(loc_260b7));	// 42760 jb      short loc_260B7 ;~ 1678:1352
cs=0x1678;eip=0x001354; 	J(JMP(_get_a_poly_info_done));	// 42761 jmp     _get_a_poly_info_done ;~ 1678:1354
loc_260b7:
	// 7231 
cs=0x1678;eip=0x001357; 	T(MOV(bx, di));	// 42765 mov     bx, di          ; di = 400 ;~ 1678:1357
cs=0x1678;eip=0x001359; 	T(SHL(bx, 1));	// 42766 shl     bx, 1 ;~ 1678:1359
cs=0x1678;eip=0x00135b; 	T(MOV(di, *(dw*)(((db*)word_40ed6)+bx)));	// 42767 mov     di, word_40ED6[bx] ;~ 1678:135B
cs=0x1678;eip=0x00135f; 	T(MOV(bx, di));	// 42768 mov     bx, di ;~ 1678:135F
cs=0x1678;eip=0x001361; 	T(SHL(bx, 1));	// 42769 shl     bx, 1 ;~ 1678:1361
cs=0x1678;eip=0x001363; 	T(SHL(bx, 1));	// 42770 shl     bx, 1 ;~ 1678:1363
cs=0x1678;eip=0x001365; 	T(MOV(ax, *(dw*)(((db*)polyinfoptrs)+bx)));	// 42771 mov     ax, word ptr polyinfoptrs[bx] ;~ 1678:1365
cs=0x1678;eip=0x001369; 	T(MOV(dx, *(dw*)((((db*)polyinfoptrs)+2)+bx)));	// 42772 mov     dx, word ptr (polyinfoptrs+2)[bx] ;~ 1678:1369
cs=0x1678;eip=0x00136d; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_38))), ax));	// 42773 mov     word ptr [bp+var_38], ax ;~ 1678:136D
cs=0x1678;eip=0x001370; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_38+2))), dx));	// 42774 mov     word ptr [bp+var_38+2], dx ;~ 1678:1370
cs=0x1678;eip=0x001373; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_38))));	// 42775 les     bx, [bp+var_38] ;~ 1678:1373
cs=0x1678;eip=0x001376; 	T(MOV(al, *(raddr(es,bx+2))));	// 42776 mov     al, es:[bx+2]   ; material type ;~ 1678:1376
cs=0x1678;eip=0x00137a; 	T(SUB(ah, ah));	// 42777 sub     ah, ah ;~ 1678:137A
cs=0x1678;eip=0x00137c; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 42778 mov     [bp+var_6], ax ;~ 1678:137C
cs=0x1678;eip=0x00137f; 	T(MOV(bx, ax));	// 42779 mov     bx, ax          ; material index... ;~ 1678:137F
cs=0x1678;eip=0x001381; 	T(SHL(bx, 1));	// 42780 shl     bx, 1 ;~ 1678:1381
cs=0x1678;eip=0x001383; 	T(ADD(bx, material_clrlist_ptr_cpy));	// 42781 add     bx, material_clrlist_ptr_cpy ;~ 1678:1383
cs=0x1678;eip=0x001387; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 42782 mov     ax, [bx] ;~ 1678:1387
cs=0x1678;eip=0x001389; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 42783 mov     [bp+var_8], ax ;~ 1678:1389
cs=0x1678;eip=0x00138c; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_38)))));	// 42784 mov     bx, word ptr [bp+var_38] ;~ 1678:138C
cs=0x1678;eip=0x00138f; 	T(MOV(al, *(raddr(es,bx+4))));	// 42785 mov     al, es:[bx+4]   ; object type (solid, sphere, wheel, pixel) ;~ 1678:138F
cs=0x1678;eip=0x001393; 	T(CBW);	// 42786 cbw ;~ 1678:1393
cs=0x1678;eip=0x001394; 	T(OR(ax, ax));	// 42787 or      ax, ax ;~ 1678:1394
cs=0x1678;eip=0x001396; 	J(JNZ(_fill_nonzero));	// 42788 jnz     short _fill_nonzero ;~ 1678:1396
cs=0x1678;eip=0x001398; 	J(JMP(_fill_type0));	// 42789 jmp     _fill_type0 ;~ 1678:1398
_fill_nonzero:
	// 7232 
cs=0x1678;eip=0x00139b; 	T(CMP(ax, 1));	// 42793 cmp     ax, 1 ;~ 1678:139B
cs=0x1678;eip=0x00139e; 	J(JZ(_fill_solid));	// 42794 jz      short _fill_solid ;~ 1678:139E
cs=0x1678;eip=0x0013a0; 	T(CMP(ax, 2));	// 42795 cmp     ax, 2 ;~ 1678:13A0
cs=0x1678;eip=0x0013a3; 	J(JNZ(loc_26108));	// 42796 jnz     short loc_26108 ;~ 1678:13A3
cs=0x1678;eip=0x0013a5; 	J(JMP(_fill_sphere));	// 42797 jmp     _fill_sphere ;~ 1678:13A5
loc_26108:
	// 7233 
cs=0x1678;eip=0x0013a8; 	T(CMP(ax, 3));	// 42801 cmp     ax, 3 ;~ 1678:13A8
cs=0x1678;eip=0x0013ab; 	J(JZ(_fill_wheel0));	// 42802 jz      short _fill_wheel0 ;~ 1678:13AB
cs=0x1678;eip=0x0013ad; 	T(CMP(ax, 5));	// 42803 cmp     ax, 5 ;~ 1678:13AD
cs=0x1678;eip=0x0013b0; 	J(JNZ(_fill_next_jmp));	// 42804 jnz     short _fill_next_jmp ;~ 1678:13B0
cs=0x1678;eip=0x0013b2; 	J(JMP(_fill_pixel));	// 42805 jmp     _fill_pixel ;~ 1678:13B2
_fill_next_jmp:
	// 7234 
cs=0x1678;eip=0x0013b5; 	J(JMP(_fill_next));	// 42809 jmp     short _fill_next ;~ 1678:13B5
_fill_unk:
	// 7235 
cs=0x1678;eip=0x0013b8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 42814 mov     ax, [bp+var_6] ;~ 1678:13B8
cs=0x1678;eip=0x0013bb; 	T(SHL(ax, 1));	// 42815 shl     ax, 1 ;~ 1678:13BB
cs=0x1678;eip=0x0013bd; 	X(MOV(*(dw*)(raddr(ss,bp+var_40)), ax));	// 42816 mov     [bp+var_40], ax ;~ 1678:13BD
cs=0x1678;eip=0x0013c0; 	T(ax = bp+var_32);	// 42817 lea     ax, [bp+var_32] ;~ 1678:13C0
cs=0x1678;eip=0x0013c3; 	X(PUSH(ax));	// 42818 push    ax ;~ 1678:13C3
cs=0x1678;eip=0x0013c4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 42819 push    [bp+var_2] ;~ 1678:13C4
cs=0x1678;eip=0x0013c7; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 42820 push    [bp+var_8] ;~ 1678:13C7
cs=0x1678;eip=0x0013ca; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_40))));	// 42821 mov     bx, [bp+var_40] ;~ 1678:13CA
cs=0x1678;eip=0x0013cd; 	T(ADD(bx, material_clrlist2_ptr_cpy));	// 42822 add     bx, material_clrlist2_ptr_cpy ;~ 1678:13CD
cs=0x1678;eip=0x0013d1; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 42823 push    word ptr [bx] ;~ 1678:13D1
cs=0x1678;eip=0x0013d3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_40))));	// 42824 mov     bx, [bp+var_40] ;~ 1678:13D3
cs=0x1678;eip=0x0013d6; 	T(ADD(bx, material_patlist2_ptr_cpy));	// 42825 add     bx, material_patlist2_ptr_cpy ;~ 1678:13D6
cs=0x1678;eip=0x0013da; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 42826 push    word ptr [bx] ;~ 1678:13DA
cs=0x1678;eip=0x0013dc; 	J(CALLF(prerender_unk,0));	// 42827 call    preRender_unk ;~ 1678:13DC
cs=0x1678;eip=0x0013e1; 	J(JMP(_fill_next_eop10));	// 42828 jmp     short _fill_next_eop10 ;~ 1678:13E1
_fill_solid:
	// 7236 
cs=0x1678;eip=0x0013e4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 42833 push    [bp+var_8] ;~ 1678:13E4
cs=0x1678;eip=0x0013e7; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_38))));	// 42834 les     bx, [bp+var_38] ;~ 1678:13E7
cs=0x1678;eip=0x0013ea; 	X(PUSH(*(dw*)(raddr(es,bx+0x0C))));	// 42835 push    word ptr es:[bx+0Ch] ;~ 1678:13EA
cs=0x1678;eip=0x0013ee; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A))));	// 42836 push    word ptr es:[bx+0Ah] ;~ 1678:13EE
cs=0x1678;eip=0x0013f2; 	X(PUSH(*(dw*)(raddr(es,bx+8))));	// 42837 push    word ptr es:[bx+8] ;~ 1678:13F2
cs=0x1678;eip=0x0013f6; 	X(PUSH(*(dw*)(raddr(es,bx+6))));	// 42838 push    word ptr es:[bx+6] ;~ 1678:13F6
cs=0x1678;eip=0x0013fa; 	J(CALLF(prerender_line,0));	// 42839 call    preRender_line ;~ 1678:13FA
_fill_next_eop10:
	// 7237 
cs=0x1678;eip=0x0013ff; 	T(ADD(sp, 0x0A));	// 42843 add     sp, 0Ah ;~ 1678:13FF
cs=0x1678;eip=0x001402; 	J(JMP(_fill_next));	// 42844 jmp     _fill_next ;~ 1678:1402
_fill_wheel0:
	// 7238 
cs=0x1678;eip=0x001406; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 42849 mov     [bp+var_4], 0 ;~ 1678:1406
_fill_wheel:
	// 7239 
cs=0x1678;eip=0x00140b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 42852 mov     ax, [bp+var_4] ;~ 1678:140B
cs=0x1678;eip=0x00140e; 	T(SHL(ax, 1));	// 42853 shl     ax, 1 ;~ 1678:140E
cs=0x1678;eip=0x001410; 	T(SHL(ax, 1));	// 42854 shl     ax, 1 ;~ 1678:1410
cs=0x1678;eip=0x001412; 	X(MOV(*(dw*)(raddr(ss,bp+var_40)), ax));	// 42855 mov     [bp+var_40], ax ;~ 1678:1412
cs=0x1678;eip=0x001415; 	T(MOV(bx, ax));	// 42856 mov     bx, ax ;~ 1678:1415
cs=0x1678;eip=0x001417; 	T(ADD(bx, *(dw*)((dw*)(raddr(ss,bp+var_38)))));	// 42857 add     bx, word ptr [bp+var_38] ;~ 1678:1417
cs=0x1678;eip=0x00141a; 	T(MOV(es, *(dw*)((dw*)(raddr(ss,bp+var_38+2)))));	// 42858 mov     es, word ptr [bp+var_38+2] ;~ 1678:141A
cs=0x1678;eip=0x00141d; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 42859 mov     ax, es:[bx+6] ;~ 1678:141D
cs=0x1678;eip=0x001421; 	T(MOV(dx, *(dw*)(raddr(es,bx+8))));	// 42860 mov     dx, es:[bx+8] ;~ 1678:1421
cs=0x1678;eip=0x001425; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_40))));	// 42861 mov     bx, [bp+var_40] ;~ 1678:1425
cs=0x1678;eip=0x001428; 	T(ADD(bx, bp));	// 42862 add     bx, bp ;~ 1678:1428
cs=0x1678;eip=0x00142a; 	X(MOV(*(dw*)(raddr(ds,bx-0x32)), ax));	// 42863 mov     [bx-32h], ax ;~ 1678:142A
cs=0x1678;eip=0x00142d; 	X(MOV(*(dw*)(raddr(ds,bx-0x30)), dx));	// 42864 mov     [bx-30h], dx ;~ 1678:142D
cs=0x1678;eip=0x001430; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 42865 inc     [bp+var_4] ;~ 1678:1430
cs=0x1678;eip=0x001433; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 4));	// 42866 cmp     [bp+var_4], 4 ;~ 1678:1433
cs=0x1678;eip=0x001437; 	J(JC(_fill_wheel));	// 42867 jb      short _fill_wheel ; b4 every car0 render ;~ 1678:1437
cs=0x1678;eip=0x001439; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 42868 mov     ax, [bp+var_6]  ; material index ;~ 1678:1439
cs=0x1678;eip=0x00143c; 	T(SHL(ax, 1));	// 42869 shl     ax, 1 ;~ 1678:143C
cs=0x1678;eip=0x00143e; 	T(ADD(ax, material_clrlist_ptr_cpy));	// 42870 add     ax, material_clrlist_ptr_cpy ;~ 1678:143E
cs=0x1678;eip=0x001442; 	X(MOV(*(dw*)(raddr(ss,bp+var_40)), ax));	// 42871 mov     [bp+var_40], ax ;~ 1678:1442
cs=0x1678;eip=0x001445; 	T(MOV(bx, ax));	// 42872 mov     bx, ax ;~ 1678:1445
cs=0x1678;eip=0x001447; 	X(PUSH(*(dw*)(raddr(ds,bx+4))));	// 42873 push    word ptr [bx+4] ;~ 1678:1447
cs=0x1678;eip=0x00144a; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 42874 push    word ptr [bx+2] ;~ 1678:144A
cs=0x1678;eip=0x00144d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 42875 push    [bp+var_8] ;~ 1678:144D
cs=0x1678;eip=0x001450; 	T(MOV(ax, offset(dseg,unk_3dc70)));	// 42876 mov     ax, offset unk_3DC70 ;~ 1678:1450
cs=0x1678;eip=0x001453; 	X(PUSH(ax));	// 42877 push    ax ;~ 1678:1453
cs=0x1678;eip=0x001454; 	T(ax = bp+var_32);	// 42878 lea     ax, [bp+var_32] ;~ 1678:1454
cs=0x1678;eip=0x001457; 	X(PUSH(ax));	// 42879 push    ax ;~ 1678:1457
cs=0x1678;eip=0x001458; 	J(CALLF(prerender_wheel,0));	// 42880 call    preRender_wheel ;~ 1678:1458
cs=0x1678;eip=0x00145d; 	J(JMP(_fill_next_eop10));	// 42881 jmp     short _fill_next_eop10 ;~ 1678:145D
_fill_sphere:
	// 7240 
cs=0x1678;eip=0x001460; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 42886 push    [bp+var_8] ;~ 1678:1460
cs=0x1678;eip=0x001463; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_38))));	// 42887 les     bx, [bp+var_38] ;~ 1678:1463
cs=0x1678;eip=0x001466; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A))));	// 42888 push    word ptr es:[bx+0Ah] ;~ 1678:1466
cs=0x1678;eip=0x00146a; 	X(PUSH(*(dw*)(raddr(es,bx+8))));	// 42889 push    word ptr es:[bx+8] ;~ 1678:146A
cs=0x1678;eip=0x00146e; 	X(PUSH(*(dw*)(raddr(es,bx+6))));	// 42890 push    word ptr es:[bx+6] ;~ 1678:146E
cs=0x1678;eip=0x001472; 	J(CALLF(prerender_sphere,0));	// 42891 call    preRender_sphere ;~ 1678:1472
cs=0x1678;eip=0x001477; 	J(JMP(_fill_next_eop8));	// 42892 jmp     _fill_next_eop8 ;~ 1678:1477
_fill_pixel:
	// 7241 
cs=0x1678;eip=0x00147a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 42896 push    [bp+var_8] ;~ 1678:147A
cs=0x1678;eip=0x00147d; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_38))));	// 42897 les     bx, [bp+var_38] ;~ 1678:147D
cs=0x1678;eip=0x001480; 	X(PUSH(*(dw*)(raddr(es,bx+8))));	// 42898 push    word ptr es:[bx+8] ;~ 1678:1480
cs=0x1678;eip=0x001484; 	X(PUSH(*(dw*)(raddr(es,bx+6))));	// 42899 push    word ptr es:[bx+6] ;~ 1678:1484
cs=0x1678;eip=0x001488; 	J(CALLF(putpixel_single_maybe,0));	// 42900 call    putpixel_single_maybe ;~ 1678:1488
cs=0x1678;eip=0x00148d; 	J(JMP(_fill_next_eop6));	// 42901 jmp     _fill_next_eop6 ;~ 1678:148D
_get_a_poly_info_done:
	// 7242 
cs=0x1678;eip=0x001490; 	X(PUSH(cs));	// 42905 push    cs ;~ 1678:1490
cs=0x1678;eip=0x001491; 	J(CALL(polyinfo_reset,0));	// 42906 call    near ptr polyinfo_reset ;~ 1678:1491
cs=0x1678;eip=0x001494; 	X(POP(si));	// 42907 pop     si ;~ 1678:1494
cs=0x1678;eip=0x001495; 	X(POP(di));	// 42908 pop     di ;~ 1678:1495
cs=0x1678;eip=0x001496; 	T(MOV(sp, bp));	// 42909 mov     sp, bp ;~ 1678:1496
cs=0x1678;eip=0x001498; 	X(POP(bp));	// 42910 pop     bp ;~ 1678:1498
cs=0x1678;eip=0x001499; 	J(RETF(0));	// 42911 retf ;~ 1678:1499

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_do_fill_next: 	goto _do_fill_next;
        case m2c::k_fill_default: 	goto _fill_default;
        case m2c::k_fill_next: 	goto _fill_next;
        case m2c::k_fill_next_eop10: 	goto _fill_next_eop10;
        case m2c::k_fill_next_eop6: 	goto _fill_next_eop6;
        case m2c::k_fill_next_eop8: 	goto _fill_next_eop8;
        case m2c::k_fill_next_jmp: 	goto _fill_next_jmp;
        case m2c::k_fill_nonzero: 	goto _fill_nonzero;
        case m2c::k_fill_patterned: 	goto _fill_patterned;
        case m2c::k_fill_pixel: 	goto _fill_pixel;
        case m2c::k_fill_solid: 	goto _fill_solid;
        case m2c::k_fill_sphere: 	goto _fill_sphere;
        case m2c::k_fill_type0: 	goto _fill_type0;
        case m2c::k_fill_unk: 	goto _fill_unk;
        case m2c::k_fill_wheel: 	goto _fill_wheel;
        case m2c::k_fill_wheel0: 	goto _fill_wheel0;
        case m2c::k_get_a_poly_info_done: 	goto _get_a_poly_info_done;
        case m2c::kget_a_poly_info: 	goto get_a_poly_info;
        case m2c::kloc_2602c: 	goto loc_2602c;
        case m2c::kloc_26049: 	goto loc_26049;
        case m2c::kloc_260ac: 	goto loc_260ac;
        case m2c::kloc_260b7: 	goto loc_260b7;
        case m2c::kloc_26108: 	goto loc_26108;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool mat_rot_zxy(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mat_rot_zxy:
    _begin:
#undef arg_0
#define arg_0 6
	// 42922 arg_0           = word ptr  6 ;~ 1678:149A
#undef arg_2
#define arg_2 8
	// 42923 arg_2           = word ptr  8 ;~ 1678:149A
#undef arg_4
#define arg_4 0x0A
	// 42924 arg_4           = word ptr  0Ah ;~ 1678:149A
#undef arg_6
#define arg_6 0x0C
	// 42925 arg_6           = byte ptr  0Ch ;~ 1678:149A
cs=0x1678;eip=0x00149a; 	X(PUSH(bp));	// 42927 push    bp ;~ 1678:149A
cs=0x1678;eip=0x00149b; 	T(MOV(bp, sp));	// 42928 mov     bp, sp ;~ 1678:149B
cs=0x1678;eip=0x00149d; 	T(SUB(sp, 4));	// 42929 sub     sp, 4 ;~ 1678:149D
cs=0x1678;eip=0x0014a0; 	X(PUSH(di));	// 42930 push    di ;~ 1678:14A0
cs=0x1678;eip=0x0014a1; 	X(PUSH(si));	// 42931 push    si ;~ 1678:14A1
cs=0x1678;eip=0x0014a2; 	T(SUB(si, si));	// 42932 sub     si, si ;~ 1678:14A2
cs=0x1678;eip=0x0014a4; 	T(TEST(*(dw*)(raddr(ss,bp+arg_0)), 0x3FF));	// 42933 test    [bp+arg_0], 3FFh ;~ 1678:14A4
cs=0x1678;eip=0x0014a9; 	J(JZ(loc_2621c));	// 42934 jz      short loc_2621C ;~ 1678:14A9
cs=0x1678;eip=0x0014ab; 	T(MOV(si, 4));	// 42935 mov     si, 4 ;~ 1678:14AB
cs=0x1678;eip=0x0014ae; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 42936 push    [bp+arg_0] ;~ 1678:14AE
cs=0x1678;eip=0x0014b1; 	T(MOV(ax, offset(dseg,mat_z_rot)));	// 42937 mov     ax, offset mat_z_rot ;~ 1678:14B1
cs=0x1678;eip=0x0014b4; 	X(PUSH(ax));	// 42938 push    ax ;~ 1678:14B4
cs=0x1678;eip=0x0014b5; 	J(CALLF(mat_rot_z,0));	// 42939 call    mat_rot_z ;~ 1678:14B5
cs=0x1678;eip=0x0014ba; 	T(ADD(sp, si));	// 42940 add     sp, si ;~ 1678:14BA
loc_2621c:
	// 7243 
cs=0x1678;eip=0x0014bc; 	T(TEST(*(dw*)(raddr(ss,bp+arg_2)), 0x3FF));	// 42943 test    [bp+arg_2], 3FFh ;~ 1678:14BC
cs=0x1678;eip=0x0014c1; 	J(JZ(loc_26236));	// 42944 jz      short loc_26236 ;~ 1678:14C1
cs=0x1678;eip=0x0014c3; 	T(OR(si, 2));	// 42945 or      si, 2 ;~ 1678:14C3
cs=0x1678;eip=0x0014c7; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 42946 push    [bp+arg_2] ;~ 1678:14C7
cs=0x1678;eip=0x0014ca; 	T(MOV(ax, offset(dseg,mat_x_rot)));	// 42947 mov     ax, offset mat_x_rot ;~ 1678:14CA
cs=0x1678;eip=0x0014cd; 	X(PUSH(ax));	// 42948 push    ax ;~ 1678:14CD
cs=0x1678;eip=0x0014ce; 	J(CALLF(mat_rot_x,0));	// 42949 call    mat_rot_x ;~ 1678:14CE
cs=0x1678;eip=0x0014d3; 	T(ADD(sp, 4));	// 42950 add     sp, 4 ;~ 1678:14D3
loc_26236:
	// 7244 
cs=0x1678;eip=0x0014d6; 	T(TEST(*(dw*)(raddr(ss,bp+arg_4)), 0x3FF));	// 42953 test    [bp+arg_4], 3FFh ;~ 1678:14D6
cs=0x1678;eip=0x0014db; 	J(JZ(loc_26285));	// 42954 jz      short loc_26285 ;~ 1678:14DB
cs=0x1678;eip=0x0014dd; 	T(OR(si, 1));	// 42955 or      si, 1 ;~ 1678:14DD
cs=0x1678;eip=0x0014e1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 42956 mov     ax, [bp+arg_4] ;~ 1678:14E1
cs=0x1678;eip=0x0014e4; 	T(AND(ah, 3));	// 42957 and     ah, 3 ;~ 1678:14E4
cs=0x1678;eip=0x0014e7; 	T(CMP(ax, mat_y_rot_angle));	// 42958 cmp     ax, mat_y_rot_angle ;~ 1678:14E7
cs=0x1678;eip=0x0014eb; 	J(JNZ(loc_26252));	// 42959 jnz     short loc_26252 ;~ 1678:14EB
loc_2624d:
	// 7245 
cs=0x1678;eip=0x0014ed; 	T(MOV(di, offset(dseg,mat_y_rot)));	// 42962 mov     di, offset mat_y_rot ;~ 1678:14ED
cs=0x1678;eip=0x0014f0; 	J(JMP(loc_26285));	// 42963 jmp     short loc_26285 ;~ 1678:14F0
loc_26252:
	// 7246 
cs=0x1678;eip=0x0014f2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 42967 mov     ax, [bp+arg_4] ;~ 1678:14F2
cs=0x1678;eip=0x0014f5; 	T(AND(ah, 3));	// 42968 and     ah, 3 ;~ 1678:14F5
cs=0x1678;eip=0x0014f8; 	T(CMP(ax, 0x100));	// 42969 cmp     ax, 100h ;~ 1678:14F8
cs=0x1678;eip=0x0014fb; 	J(JZ(loc_26282));	// 42970 jz      short loc_26282 ;~ 1678:14FB
cs=0x1678;eip=0x0014fd; 	T(CMP(ax, 0x200));	// 42971 cmp     ax, 200h ;~ 1678:14FD
cs=0x1678;eip=0x001500; 	J(JZ(loc_26298));	// 42972 jz      short loc_26298 ;~ 1678:1500
cs=0x1678;eip=0x001502; 	T(CMP(ax, 0x300));	// 42973 cmp     ax, 300h ;~ 1678:1502
cs=0x1678;eip=0x001505; 	J(JZ(loc_2629e));	// 42974 jz      short loc_2629E ;~ 1678:1505
cs=0x1678;eip=0x001507; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 42975 push    [bp+arg_4] ;~ 1678:1507
cs=0x1678;eip=0x00150a; 	T(MOV(ax, offset(dseg,mat_y_rot)));	// 42976 mov     ax, offset mat_y_rot ;~ 1678:150A
cs=0x1678;eip=0x00150d; 	X(PUSH(ax));	// 42977 push    ax ;~ 1678:150D
cs=0x1678;eip=0x00150e; 	J(CALLF(mat_rot_y,0));	// 42978 call    mat_rot_y ;~ 1678:150E
cs=0x1678;eip=0x001513; 	T(ADD(sp, 4));	// 42979 add     sp, 4 ;~ 1678:1513
cs=0x1678;eip=0x001516; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 42980 mov     ax, [bp+arg_4] ;~ 1678:1516
cs=0x1678;eip=0x001519; 	T(AND(ah, 3));	// 42981 and     ah, 3 ;~ 1678:1519
cs=0x1678;eip=0x00151c; 	X(MOV(mat_y_rot_angle, ax));	// 42982 mov     mat_y_rot_angle, ax ;~ 1678:151C
cs=0x1678;eip=0x00151f; 	J(JMP(loc_2624d));	// 42983 jmp     short loc_2624D ;~ 1678:151F
loc_26282:
	// 7247 
cs=0x1678;eip=0x001522; 	T(MOV(di, offset(dseg,mat_y100)));	// 42988 mov     di, offset mat_y100 ;~ 1678:1522
loc_26285:
	// 7248 
cs=0x1678;eip=0x001525; 	T(MOV(ax, si));	// 42992 mov     ax, si ;~ 1678:1525
cs=0x1678;eip=0x001527; 	T(CMP(ax, 7));	// 42993 cmp     ax, 7           ; switch 8 cases ;~ 1678:1527
cs=0x1678;eip=0x00152a; 	J(JBE(loc_2628f));	// 42994 jbe     short loc_2628F ;~ 1678:152A
cs=0x1678;eip=0x00152c; 	J(JMP(def_26292));	// 42995 jmp     def_26292       ; jumptable 00026292 default case, case 1 ;~ 1678:152C
loc_2628f:
	// 7249 
cs=0x1678;eip=0x00152f; 	T(ADD(ax, ax));	// 42999 add     ax, ax ;~ 1678:152F
cs=0x1678;eip=0x001531; 	T(XCHG(ax, bx));	// 43000 xchg    ax, bx ;~ 1678:1531
cs=0x1678;eip=0x001532; __disp=*(dw*)(raddr(cs,m2c::krotzxy_offset+bx));
	J(return __dispatch_call(__disp, _state););	// 43001 jmp     word ptr cs:rotZXY_offset[bx] ; switch jump ;~ 1678:1532
loc_26298:
	// 7250 
cs=0x1678;eip=0x001538; 	T(MOV(di, offset(dseg,mat_y200)));	// 43006 mov     di, offset mat_y200 ;~ 1678:1538
cs=0x1678;eip=0x00153b; 	J(JMP(loc_26285));	// 43007 jmp     short loc_26285 ;~ 1678:153B
loc_2629e:
	// 7251 
cs=0x1678;eip=0x00153e; 	T(MOV(di, offset(dseg,mat_y300)));	// 43012 mov     di, offset mat_y300 ;~ 1678:153E
cs=0x1678;eip=0x001541; 	J(JMP(loc_26285));	// 43013 jmp     short loc_26285 ;~ 1678:1541
loc_262a4:
	// 7252 
cs=0x1678;eip=0x001544; 	T(MOV(di, offset(dseg,mat_y0)));	// 43019 mov     di, offset mat_y0 ; jumptable 00026292 case 0 ;~ 1678:1544
cs=0x1678;eip=0x001547; 	J(JMP(def_26292));	// 43020 jmp     def_26292       ; jumptable 00026292 default case, case 1 ;~ 1678:1547
loc_262aa:
	// 7253 
cs=0x1678;eip=0x00154a; 	T(TEST(*(raddr(ss,bp+arg_6)), 1));	// 43025 test    [bp+arg_6], 1   ; jumptable 00026292 case 3 ;~ 1678:154A
cs=0x1678;eip=0x00154e; 	J(JZ(loc_262bc));	// 43026 jz      short loc_262BC ;~ 1678:154E
cs=0x1678;eip=0x001550; 	T(MOV(ax, offset(dseg,mat_rot_temp)));	// 43027 mov     ax, offset mat_rot_temp ;~ 1678:1550
cs=0x1678;eip=0x001553; 	X(PUSH(ax));	// 43028 push    ax ;~ 1678:1553
cs=0x1678;eip=0x001554; 	T(MOV(ax, offset(dseg,mat_x_rot)));	// 43029 mov     ax, offset mat_x_rot ;~ 1678:1554
loc_262b7:
	// 7254 
cs=0x1678;eip=0x001557; 	X(PUSH(ax));	// 43032 push    ax ;~ 1678:1557
cs=0x1678;eip=0x001558; 	X(PUSH(di));	// 43033 push    di ;~ 1678:1558
cs=0x1678;eip=0x001559; 	J(JMP(loc_262c5));	// 43034 jmp     short loc_262C5 ;~ 1678:1559
loc_262bc:
	// 7255 
cs=0x1678;eip=0x00155c; 	T(MOV(ax, offset(dseg,mat_rot_temp)));	// 43039 mov     ax, offset mat_rot_temp ;~ 1678:155C
cs=0x1678;eip=0x00155f; 	X(PUSH(ax));	// 43040 push    ax ;~ 1678:155F
cs=0x1678;eip=0x001560; 	X(PUSH(di));	// 43041 push    di ;~ 1678:1560
loc_262c1:
	// 7256 
cs=0x1678;eip=0x001561; 	T(MOV(ax, offset(dseg,mat_x_rot)));	// 43044 mov     ax, offset mat_x_rot ;~ 1678:1561
loc_262c4:
	// 7257 
cs=0x1678;eip=0x001564; 	X(PUSH(ax));	// 43047 push    ax ;~ 1678:1564
loc_262c5:
	// 7258 
cs=0x1678;eip=0x001565; 	J(CALLF(mat_multiply,0));	// 43050 call    mat_multiply ;~ 1678:1565
cs=0x1678;eip=0x00156a; 	T(ADD(sp, 6));	// 43051 add     sp, 6 ;~ 1678:156A
cs=0x1678;eip=0x00156d; 	T(MOV(di, offset(dseg,mat_rot_temp)));	// 43052 mov     di, offset mat_rot_temp ;~ 1678:156D
cs=0x1678;eip=0x001570; 	J(JMP(def_26292));	// 43053 jmp     def_26292       ; jumptable 00026292 default case, case 1 ;~ 1678:1570
loc_262d4:
	// 7259 
cs=0x1678;eip=0x001574; 	T(TEST(*(raddr(ss,bp+arg_6)), 1));	// 43059 test    [bp+arg_6], 1   ; jumptable 00026292 case 5 ;~ 1678:1574
cs=0x1678;eip=0x001578; 	J(JZ(loc_262e4));	// 43060 jz      short loc_262E4 ;~ 1678:1578
cs=0x1678;eip=0x00157a; 	T(MOV(ax, offset(dseg,mat_rot_temp)));	// 43061 mov     ax, offset mat_rot_temp ;~ 1678:157A
cs=0x1678;eip=0x00157d; 	X(PUSH(ax));	// 43062 push    ax ;~ 1678:157D
cs=0x1678;eip=0x00157e; 	T(MOV(ax, offset(dseg,mat_z_rot)));	// 43063 mov     ax, offset mat_z_rot ;~ 1678:157E
cs=0x1678;eip=0x001581; 	J(JMP(loc_262b7));	// 43064 jmp     short loc_262B7 ;~ 1678:1581
loc_262e4:
	// 7260 
cs=0x1678;eip=0x001584; 	T(MOV(ax, offset(dseg,mat_rot_temp)));	// 43069 mov     ax, offset mat_rot_temp ;~ 1678:1584
cs=0x1678;eip=0x001587; 	X(PUSH(ax));	// 43070 push    ax ;~ 1678:1587
cs=0x1678;eip=0x001588; 	X(PUSH(di));	// 43071 push    di ;~ 1678:1588
loc_262e9:
	// 7261 
cs=0x1678;eip=0x001589; 	T(MOV(ax, offset(dseg,mat_z_rot)));	// 43074 mov     ax, offset mat_z_rot ;~ 1678:1589
cs=0x1678;eip=0x00158c; 	J(JMP(loc_262c4));	// 43075 jmp     short loc_262C4 ;~ 1678:158C
loc_262ee:
	// 7262 
cs=0x1678;eip=0x00158e; 	T(TEST(*(raddr(ss,bp+arg_6)), 1));	// 43080 test    [bp+arg_6], 1   ; jumptable 00026292 case 6 ;~ 1678:158E
cs=0x1678;eip=0x001592; 	J(JZ(loc_262fe));	// 43081 jz      short loc_262FE ;~ 1678:1592
cs=0x1678;eip=0x001594; 	T(MOV(ax, offset(dseg,mat_rot_temp)));	// 43082 mov     ax, offset mat_rot_temp ;~ 1678:1594
cs=0x1678;eip=0x001597; 	X(PUSH(ax));	// 43083 push    ax ;~ 1678:1597
cs=0x1678;eip=0x001598; 	T(MOV(ax, offset(dseg,mat_z_rot)));	// 43084 mov     ax, offset mat_z_rot ;~ 1678:1598
cs=0x1678;eip=0x00159b; 	X(PUSH(ax));	// 43085 push    ax ;~ 1678:159B
cs=0x1678;eip=0x00159c; 	J(JMP(loc_262c1));	// 43086 jmp     short loc_262C1 ;~ 1678:159C
loc_262fe:
	// 7263 
cs=0x1678;eip=0x00159e; 	T(MOV(ax, offset(dseg,mat_rot_temp)));	// 43090 mov     ax, offset mat_rot_temp ;~ 1678:159E
cs=0x1678;eip=0x0015a1; 	X(PUSH(ax));	// 43091 push    ax ;~ 1678:15A1
cs=0x1678;eip=0x0015a2; 	T(MOV(ax, offset(dseg,mat_x_rot)));	// 43092 mov     ax, offset mat_x_rot ;~ 1678:15A2
cs=0x1678;eip=0x0015a5; 	X(PUSH(ax));	// 43093 push    ax ;~ 1678:15A5
cs=0x1678;eip=0x0015a6; 	J(JMP(loc_262e9));	// 43094 jmp     short loc_262E9 ;~ 1678:15A6
loc_26308:
	// 7264 
cs=0x1678;eip=0x0015a8; 	T(TEST(*(raddr(ss,bp+arg_6)), 1));	// 43099 test    [bp+arg_6], 1   ; jumptable 00026292 case 7 ;~ 1678:15A8
cs=0x1678;eip=0x0015ac; 	J(JZ(loc_26338));	// 43100 jz      short loc_26338 ;~ 1678:15AC
cs=0x1678;eip=0x0015ae; 	T(MOV(ax, offset(dseg,mat_rot_temp)));	// 43101 mov     ax, offset mat_rot_temp ;~ 1678:15AE
cs=0x1678;eip=0x0015b1; 	X(PUSH(ax));	// 43102 push    ax ;~ 1678:15B1
cs=0x1678;eip=0x0015b2; 	T(MOV(ax, offset(dseg,mat_x_rot)));	// 43103 mov     ax, offset mat_x_rot ;~ 1678:15B2
cs=0x1678;eip=0x0015b5; 	X(PUSH(ax));	// 43104 push    ax ;~ 1678:15B5
cs=0x1678;eip=0x0015b6; 	X(PUSH(di));	// 43105 push    di ;~ 1678:15B6
cs=0x1678;eip=0x0015b7; 	J(CALLF(mat_multiply,0));	// 43106 call    mat_multiply ;~ 1678:15B7
cs=0x1678;eip=0x0015bc; 	T(ADD(sp, 6));	// 43107 add     sp, 6 ;~ 1678:15BC
cs=0x1678;eip=0x0015bf; 	T(MOV(ax, offset(dseg,mat_x_rot)));	// 43108 mov     ax, offset mat_x_rot ;~ 1678:15BF
cs=0x1678;eip=0x0015c2; 	X(PUSH(ax));	// 43109 push    ax ;~ 1678:15C2
cs=0x1678;eip=0x0015c3; 	T(MOV(ax, offset(dseg,mat_z_rot)));	// 43110 mov     ax, offset mat_z_rot ;~ 1678:15C3
cs=0x1678;eip=0x0015c6; 	X(PUSH(ax));	// 43111 push    ax ;~ 1678:15C6
cs=0x1678;eip=0x0015c7; 	T(MOV(ax, offset(dseg,mat_rot_temp)));	// 43112 mov     ax, offset mat_rot_temp ;~ 1678:15C7
cs=0x1678;eip=0x0015ca; 	X(PUSH(ax));	// 43113 push    ax ;~ 1678:15CA
cs=0x1678;eip=0x0015cb; 	J(CALLF(mat_multiply,0));	// 43114 call    mat_multiply ;~ 1678:15CB
cs=0x1678;eip=0x0015d0; 	T(ADD(sp, 6));	// 43115 add     sp, 6 ;~ 1678:15D0
loc_26333:
	// 7265 
cs=0x1678;eip=0x0015d3; 	T(MOV(di, offset(dseg,mat_x_rot)));	// 43119 mov     di, offset mat_x_rot ; jumptable 00026292 case 2 ;~ 1678:15D3
cs=0x1678;eip=0x0015d6; 	J(JMP(def_26292));	// 43120 jmp     short def_26292 ; jumptable 00026292 default case, case 1 ;~ 1678:15D6
loc_26338:
	// 7266 
cs=0x1678;eip=0x0015d8; 	T(MOV(ax, offset(dseg,mat_rot_temp)));	// 43124 mov     ax, offset mat_rot_temp ;~ 1678:15D8
cs=0x1678;eip=0x0015db; 	X(PUSH(ax));	// 43125 push    ax ;~ 1678:15DB
cs=0x1678;eip=0x0015dc; 	T(MOV(ax, offset(dseg,mat_x_rot)));	// 43126 mov     ax, offset mat_x_rot ;~ 1678:15DC
cs=0x1678;eip=0x0015df; 	X(PUSH(ax));	// 43127 push    ax ;~ 1678:15DF
cs=0x1678;eip=0x0015e0; 	T(MOV(ax, offset(dseg,mat_z_rot)));	// 43128 mov     ax, offset mat_z_rot ;~ 1678:15E0
cs=0x1678;eip=0x0015e3; 	X(PUSH(ax));	// 43129 push    ax ;~ 1678:15E3
cs=0x1678;eip=0x0015e4; 	J(CALLF(mat_multiply,0));	// 43130 call    mat_multiply ;~ 1678:15E4
cs=0x1678;eip=0x0015e9; 	T(ADD(sp, 6));	// 43131 add     sp, 6 ;~ 1678:15E9
cs=0x1678;eip=0x0015ec; 	T(MOV(ax, offset(dseg,mat_z_rot)));	// 43132 mov     ax, offset mat_z_rot ;~ 1678:15EC
cs=0x1678;eip=0x0015ef; 	X(PUSH(ax));	// 43133 push    ax ;~ 1678:15EF
cs=0x1678;eip=0x0015f0; 	X(PUSH(di));	// 43134 push    di ;~ 1678:15F0
cs=0x1678;eip=0x0015f1; 	T(MOV(ax, offset(dseg,mat_rot_temp)));	// 43135 mov     ax, offset mat_rot_temp ;~ 1678:15F1
cs=0x1678;eip=0x0015f4; 	X(PUSH(ax));	// 43136 push    ax ;~ 1678:15F4
cs=0x1678;eip=0x0015f5; 	J(CALLF(mat_multiply,0));	// 43137 call    mat_multiply ;~ 1678:15F5
cs=0x1678;eip=0x0015fa; 	T(ADD(sp, 6));	// 43138 add     sp, 6 ;~ 1678:15FA
loc_2635d:
	// 7267 
cs=0x1678;eip=0x0015fd; 	T(MOV(di, offset(dseg,mat_z_rot)));	// 43142 mov     di, offset mat_z_rot ; jumptable 00026292 case 4 ;~ 1678:15FD
cs=0x1678;eip=0x001600; 	J(JMP(def_26292));	// 43143 jmp     short def_26292 ; jumptable 00026292 default case, case 1 ;~ 1678:1600
rotzxy_offset:
	// 7268 
def_26292:
	// 7269 
cs=0x1678;eip=0x001612; 	T(MOV(ax, di));	// 43158 mov     ax, di          ; jumptable 00026292 default case, case 1 ;~ 1678:1612
cs=0x1678;eip=0x001614; 	X(POP(si));	// 43159 pop     si ;~ 1678:1614
cs=0x1678;eip=0x001615; 	X(POP(di));	// 43160 pop     di ;~ 1678:1615
cs=0x1678;eip=0x001616; 	T(MOV(sp, bp));	// 43161 mov     sp, bp ;~ 1678:1616
cs=0x1678;eip=0x001618; 	X(POP(bp));	// 43162 pop     bp ;~ 1678:1618
cs=0x1678;eip=0x001619; 	J(RETF(0));	// 43163 retf ;~ 1678:1619

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kdef_26292: 	goto def_26292;
        case m2c::kloc_2621c: 	goto loc_2621c;
        case m2c::kloc_26236: 	goto loc_26236;
        case m2c::kloc_2624d: 	goto loc_2624d;
        case m2c::kloc_26252: 	goto loc_26252;
        case m2c::kloc_26282: 	goto loc_26282;
        case m2c::kloc_26285: 	goto loc_26285;
        case m2c::kloc_2628f: 	goto loc_2628f;
        case m2c::kloc_26298: 	goto loc_26298;
        case m2c::kloc_2629e: 	goto loc_2629e;
        case m2c::kloc_262a4: 	goto loc_262a4;
        case m2c::kloc_262aa: 	goto loc_262aa;
        case m2c::kloc_262b7: 	goto loc_262b7;
        case m2c::kloc_262bc: 	goto loc_262bc;
        case m2c::kloc_262c1: 	goto loc_262c1;
        case m2c::kloc_262c4: 	goto loc_262c4;
        case m2c::kloc_262c5: 	goto loc_262c5;
        case m2c::kloc_262d4: 	goto loc_262d4;
        case m2c::kloc_262e4: 	goto loc_262e4;
        case m2c::kloc_262e9: 	goto loc_262e9;
        case m2c::kloc_262ee: 	goto loc_262ee;
        case m2c::kloc_262fe: 	goto loc_262fe;
        case m2c::kloc_26308: 	goto loc_26308;
        case m2c::kloc_26333: 	goto loc_26333;
        case m2c::kloc_26338: 	goto loc_26338;
        case m2c::kloc_2635d: 	goto loc_2635d;
        case m2c::kmat_rot_zxy: 	goto mat_rot_zxy;
        case m2c::krotzxy_offset: 	goto rotzxy_offset;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool rect_adjust_from_point(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    rect_adjust_from_point:
    _begin:
#undef var_6
#define var_6 -6
	// 43174 var_6           = word ptr -6 ;~ 1678:161A
#undef arg_0
#define arg_0 6
	// 43175 arg_0           = word ptr  6 ;~ 1678:161A
#undef arg_2
#define arg_2 8
	// 43176 arg_2           = word ptr  8 ;~ 1678:161A
cs=0x1678;eip=0x00161a; 	X(PUSH(bp));	// 43178 push    bp ;~ 1678:161A
cs=0x1678;eip=0x00161b; 	T(MOV(bp, sp));	// 43179 mov     bp, sp ;~ 1678:161B
cs=0x1678;eip=0x00161d; 	T(SUB(sp, 6));	// 43180 sub     sp, 6 ;~ 1678:161D
cs=0x1678;eip=0x001620; 	X(PUSH(di));	// 43181 push    di ;~ 1678:1620
cs=0x1678;eip=0x001621; 	X(PUSH(si));	// 43182 push    si ;~ 1678:1621
cs=0x1678;eip=0x001622; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 43183 mov     bx, [bp+arg_0] ;~ 1678:1622
cs=0x1678;eip=0x001625; 	T(MOV(si, *(dw*)(raddr(ds,bx))));	// 43184 mov     si, [bx] ;~ 1678:1625
cs=0x1678;eip=0x001627; 	T(MOV(di, *(dw*)(raddr(ds,bx+2))));	// 43185 mov     di, [bx+2] ;~ 1678:1627
cs=0x1678;eip=0x00162a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 43186 mov     bx, [bp+arg_2] ;~ 1678:162A
cs=0x1678;eip=0x00162d; 	T(CMP(*(dw*)(raddr(ds,bx+0)), si));	// 43187 cmp     [bx+0], si ;~ 1678:162D
cs=0x1678;eip=0x00162f; 	J(JLE(loc_26393));	// 43188 jle     short loc_26393 ;~ 1678:162F
cs=0x1678;eip=0x001631; 	X(MOV(*(dw*)(raddr(ds,bx+0)), si));	// 43189 mov     [bx+0], si ;~ 1678:1631
loc_26393:
	// 7270 
cs=0x1678;eip=0x001633; 	T(ax = si+1);	// 43192 lea     ax, [si+1] ;~ 1678:1633
cs=0x1678;eip=0x001636; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 43193 mov     [bp+var_6], ax ;~ 1678:1636
cs=0x1678;eip=0x001639; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 43194 mov     bx, [bp+arg_2] ;~ 1678:1639
cs=0x1678;eip=0x00163c; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 43195 cmp     [bx+2], ax ;~ 1678:163C
cs=0x1678;eip=0x00163f; 	J(JGE(loc_263a4));	// 43196 jge     short loc_263A4 ;~ 1678:163F
cs=0x1678;eip=0x001641; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 43197 mov     [bx+2], ax ;~ 1678:1641
loc_263a4:
	// 7271 
cs=0x1678;eip=0x001644; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 43200 mov     bx, [bp+arg_2] ;~ 1678:1644
cs=0x1678;eip=0x001647; 	T(CMP(*(dw*)(raddr(ds,bx+4)), di));	// 43201 cmp     [bx+4], di ;~ 1678:1647
cs=0x1678;eip=0x00164a; 	J(JLE(loc_263af));	// 43202 jle     short loc_263AF ;~ 1678:164A
cs=0x1678;eip=0x00164c; 	X(MOV(*(dw*)(raddr(ds,bx+4)), di));	// 43203 mov     [bx+4], di ;~ 1678:164C
loc_263af:
	// 7272 
cs=0x1678;eip=0x00164f; 	T(ax = di+1);	// 43206 lea     ax, [di+1] ;~ 1678:164F
cs=0x1678;eip=0x001652; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 43207 mov     [bp+var_6], ax ;~ 1678:1652
cs=0x1678;eip=0x001655; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 43208 mov     bx, [bp+arg_2] ;~ 1678:1655
cs=0x1678;eip=0x001658; 	T(CMP(*(dw*)(raddr(ds,bx+6)), ax));	// 43209 cmp     [bx+6], ax ;~ 1678:1658
cs=0x1678;eip=0x00165b; 	J(JGE(loc_263c0));	// 43210 jge     short loc_263C0 ;~ 1678:165B
cs=0x1678;eip=0x00165d; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 43211 mov     [bx+6], ax ;~ 1678:165D
loc_263c0:
	// 7273 
cs=0x1678;eip=0x001660; 	X(POP(si));	// 43214 pop     si ;~ 1678:1660
cs=0x1678;eip=0x001661; 	X(POP(di));	// 43215 pop     di ;~ 1678:1661
cs=0x1678;eip=0x001662; 	T(MOV(sp, bp));	// 43216 mov     sp, bp ;~ 1678:1662
cs=0x1678;eip=0x001664; 	X(POP(bp));	// 43217 pop     bp ;~ 1678:1664
cs=0x1678;eip=0x001665; 	J(RETF(0));	// 43218 retf ;~ 1678:1665

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_26393: 	goto loc_26393;
        case m2c::kloc_263a4: 	goto loc_263a4;
        case m2c::kloc_263af: 	goto loc_263af;
        case m2c::kloc_263c0: 	goto loc_263c0;
        case m2c::krect_adjust_from_point: 	goto rect_adjust_from_point;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool vector_op_unk2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    vector_op_unk2:
    _begin:
#undef var_e
#define var_e -0x0E
	// 43228 var_E           = word ptr -0Eh ;~ 1678:1666
#undef var_c
#define var_c -0x0C
	// 43229 var_C           = word ptr -0Ch ;~ 1678:1666
#undef var_a
#define var_a -0x0A
	// 43230 var_A           = byte ptr -0Ah ;~ 1678:1666
#undef var_8
#define var_8 -8
	// 43231 var_8           = word ptr -8 ;~ 1678:1666
#undef var_6
#define var_6 -6
	// 43232 var_6           = word ptr -6 ;~ 1678:1666
#undef var_4
#define var_4 -4
	// 43233 var_4           = word ptr -4 ;~ 1678:1666
#undef var_2
#define var_2 -2
	// 43234 var_2           = word ptr -2 ;~ 1678:1666
#undef arg_0
#define arg_0 6
	// 43235 arg_0           = word ptr  6 ;~ 1678:1666
cs=0x1678;eip=0x001666; 	X(PUSH(bp));	// 43237 push    bp ;~ 1678:1666
cs=0x1678;eip=0x001667; 	T(MOV(bp, sp));	// 43238 mov     bp, sp ;~ 1678:1667
cs=0x1678;eip=0x001669; 	T(SUB(sp, 0x0E));	// 43239 sub     sp, 0Eh ;~ 1678:1669
cs=0x1678;eip=0x00166c; 	X(PUSH(di));	// 43240 push    di ;~ 1678:166C
cs=0x1678;eip=0x00166d; 	X(PUSH(si));	// 43241 push    si ;~ 1678:166D
cs=0x1678;eip=0x00166e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 43242 mov     bx, [bp+arg_0] ;~ 1678:166E
cs=0x1678;eip=0x001671; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 43243 push    word ptr [bx+2] ; int ;~ 1678:1671
cs=0x1678;eip=0x001674; 	J(CALLF(_abs,0));	// 43244 call    _abs ;~ 1678:1674
cs=0x1678;eip=0x001679; 	T(ADD(sp, 2));	// 43245 add     sp, 2 ;~ 1678:1679
cs=0x1678;eip=0x00167c; 	T(CWD);	// 43246 cwd ;~ 1678:167C
cs=0x1678;eip=0x00167d; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 43247 mov     [bp+var_E], ax ;~ 1678:167D
cs=0x1678;eip=0x001680; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), dx));	// 43248 mov     [bp+var_C], dx ;~ 1678:1680
cs=0x1678;eip=0x001683; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 43249 mov     bx, [bp+arg_0] ;~ 1678:1683
cs=0x1678;eip=0x001686; 	X(PUSH(*(dw*)(raddr(ds,bx+4))));	// 43250 push    word ptr [bx+4] ; int ;~ 1678:1686
cs=0x1678;eip=0x001689; 	J(CALLF(_abs,0));	// 43251 call    _abs ;~ 1678:1689
cs=0x1678;eip=0x00168e; 	T(ADD(sp, 2));	// 43252 add     sp, 2 ;~ 1678:168E
cs=0x1678;eip=0x001691; 	X(PUSH(ax));	// 43253 push    ax ;~ 1678:1691
cs=0x1678;eip=0x001692; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 43254 mov     bx, [bp+arg_0] ;~ 1678:1692
cs=0x1678;eip=0x001695; 	X(PUSH(*(dw*)(raddr(ds,bx+0))));	// 43255 push    word ptr [bx+0] ; int ;~ 1678:1695
cs=0x1678;eip=0x001697; 	J(CALLF(_abs,0));	// 43256 call    _abs ;~ 1678:1697
cs=0x1678;eip=0x00169c; 	T(ADD(sp, 2));	// 43257 add     sp, 2 ;~ 1678:169C
cs=0x1678;eip=0x00169f; 	X(PUSH(ax));	// 43258 push    ax ;~ 1678:169F
cs=0x1678;eip=0x0016a0; 	J(CALLF(polarradius2d,0));	// 43259 call    polarRadius2D ;~ 1678:16A0
cs=0x1678;eip=0x0016a5; 	T(ADD(sp, 4));	// 43260 add     sp, 4 ;~ 1678:16A5
cs=0x1678;eip=0x0016a8; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 43261 mov     [bp+var_4], ax ;~ 1678:16A8
cs=0x1678;eip=0x0016ab; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 43262 mov     [bp+var_2], 0 ;~ 1678:16AB
cs=0x1678;eip=0x0016b0; 	T(MOV(ax, sin80));	// 43263 mov     ax, sin80 ;~ 1678:16B0
cs=0x1678;eip=0x0016b3; 	T(MOV(dx, word_4188a));	// 43264 mov     dx, word_4188A ;~ 1678:16B3
cs=0x1678;eip=0x0016b7; 	T(CMP(cos80, ax));	// 43265 cmp     cos80, ax ;~ 1678:16B7
cs=0x1678;eip=0x0016bb; 	J(JNZ(loc_2643a));	// 43266 jnz     short loc_2643A ;~ 1678:16BB
cs=0x1678;eip=0x0016bd; 	T(CMP(word_41886, dx));	// 43267 cmp     word_41886, dx ;~ 1678:16BD
cs=0x1678;eip=0x0016c1; 	J(JNZ(loc_2643a));	// 43268 jnz     short loc_2643A ;~ 1678:16C1
cs=0x1678;eip=0x0016c3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 43269 mov     ax, [bp+var_E] ;~ 1678:16C3
cs=0x1678;eip=0x0016c6; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_c))));	// 43270 mov     dx, [bp+var_C] ;~ 1678:16C6
cs=0x1678;eip=0x0016c9; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), dx));	// 43271 cmp     [bp+var_2], dx ;~ 1678:16C9
cs=0x1678;eip=0x0016cc; 	J(JG(loc_2646e));	// 43272 jg      short loc_2646E ;~ 1678:16CC
cs=0x1678;eip=0x0016ce; 	J(JL(loc_26435));	// 43273 jl      short loc_26435 ;~ 1678:16CE
cs=0x1678;eip=0x0016d0; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), ax));	// 43274 cmp     [bp+var_4], ax ;~ 1678:16D0
cs=0x1678;eip=0x0016d3; 	J(JNC(loc_2646e));	// 43275 jnb     short loc_2646E ;~ 1678:16D3
loc_26435:
	// 7274 
cs=0x1678;eip=0x0016d5; 	T(MOV(ax, 1));	// 43279 mov     ax, 1 ;~ 1678:16D5
cs=0x1678;eip=0x0016d8; 	J(JMP(loc_26470));	// 43280 jmp     short loc_26470 ;~ 1678:16D8
loc_2643a:
	// 7275 
cs=0x1678;eip=0x0016da; 	X(PUSH(word_4188a));	// 43285 push    word_4188A ;~ 1678:16DA
cs=0x1678;eip=0x0016de; 	X(PUSH(sin80));	// 43286 push    sin80 ;~ 1678:16DE
cs=0x1678;eip=0x0016e2; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 43287 push    [bp+var_C] ;~ 1678:16E2
cs=0x1678;eip=0x0016e5; 	X(PUSH(*(dw*)(raddr(ss,bp+var_e))));	// 43288 push    [bp+var_E] ;~ 1678:16E5
cs=0x1678;eip=0x0016e8; 	J(CALLF(__aflmul,0));	// 43289 call    __aFlmul ;~ 1678:16E8
cs=0x1678;eip=0x0016ed; 	X(PUSH(word_41886));	// 43290 push    word_41886 ;~ 1678:16ED
cs=0x1678;eip=0x0016f1; 	X(PUSH(cos80));	// 43291 push    cos80 ;~ 1678:16F1
cs=0x1678;eip=0x0016f5; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 43292 push    [bp+var_2] ;~ 1678:16F5
cs=0x1678;eip=0x0016f8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 43293 push    [bp+var_4] ;~ 1678:16F8
cs=0x1678;eip=0x0016fb; 	T(MOV(si, ax));	// 43294 mov     si, ax ;~ 1678:16FB
cs=0x1678;eip=0x0016fd; 	T(MOV(di, dx));	// 43295 mov     di, dx ;~ 1678:16FD
cs=0x1678;eip=0x0016ff; 	J(CALLF(__aflmul,0));	// 43296 call    __aFlmul ;~ 1678:16FF
cs=0x1678;eip=0x001704; 	T(CMP(dx, di));	// 43297 cmp     dx, di ;~ 1678:1704
cs=0x1678;eip=0x001706; 	J(JG(loc_2646e));	// 43298 jg      short loc_2646E ;~ 1678:1706
cs=0x1678;eip=0x001708; 	J(JL(loc_26435));	// 43299 jl      short loc_26435 ;~ 1678:1708
cs=0x1678;eip=0x00170a; 	T(CMP(ax, si));	// 43300 cmp     ax, si ;~ 1678:170A
cs=0x1678;eip=0x00170c; 	J(JC(loc_26435));	// 43301 jb      short loc_26435 ;~ 1678:170C
loc_2646e:
	// 7276 
cs=0x1678;eip=0x00170e; 	T(SUB(ax, ax));	// 43305 sub     ax, ax ;~ 1678:170E
loc_26470:
	// 7277 
cs=0x1678;eip=0x001710; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 43308 mov     [bp+var_8], ax ;~ 1678:1710
cs=0x1678;eip=0x001713; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 43309 mov     bx, [bp+arg_0] ;~ 1678:1713
cs=0x1678;eip=0x001716; 	T(CMP(*(dw*)(raddr(ds,bx+2)), 0));	// 43310 cmp     word ptr [bx+2], 0 ;~ 1678:1716
cs=0x1678;eip=0x00171a; 	J(JGE(loc_2648a));	// 43311 jge     short loc_2648A ;~ 1678:171A
cs=0x1678;eip=0x00171c; 	T(OR(ax, ax));	// 43312 or      ax, ax ;~ 1678:171C
cs=0x1678;eip=0x00171e; 	J(JZ(loc_264a0));	// 43313 jz      short loc_264A0 ;~ 1678:171E
cs=0x1678;eip=0x001720; 	T(MOV(ax, 0x1E));	// 43314 mov     ax, 1Eh ;~ 1678:1720
cs=0x1678;eip=0x001723; 	X(POP(si));	// 43315 pop     si ;~ 1678:1723
cs=0x1678;eip=0x001724; 	X(POP(di));	// 43316 pop     di ;~ 1678:1724
cs=0x1678;eip=0x001725; 	T(MOV(sp, bp));	// 43317 mov     sp, bp ;~ 1678:1725
cs=0x1678;eip=0x001727; 	X(POP(bp));	// 43318 pop     bp ;~ 1678:1727
cs=0x1678;eip=0x001728; 	J(RETF(0));	// 43319 retf ;~ 1678:1728
loc_2648a:
	// 7278 
cs=0x1678;eip=0x00172a; 	T(CMP(*(dw*)(raddr(ds,bx+2)), 0));	// 43324 cmp     word ptr [bx+2], 0 ;~ 1678:172A
cs=0x1678;eip=0x00172e; 	J(JLE(loc_264a0));	// 43325 jle     short loc_264A0 ;~ 1678:172E
cs=0x1678;eip=0x001730; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0));	// 43326 cmp     [bp+var_8], 0 ;~ 1678:1730
cs=0x1678;eip=0x001734; 	J(JZ(loc_264a0));	// 43327 jz      short loc_264A0 ;~ 1678:1734
cs=0x1678;eip=0x001736; 	T(MOV(ax, 0x1F));	// 43328 mov     ax, 1Fh ;~ 1678:1736
cs=0x1678;eip=0x001739; 	X(POP(si));	// 43329 pop     si ;~ 1678:1739
cs=0x1678;eip=0x00173a; 	X(POP(di));	// 43330 pop     di ;~ 1678:173A
cs=0x1678;eip=0x00173b; 	T(MOV(sp, bp));	// 43331 mov     sp, bp ;~ 1678:173B
cs=0x1678;eip=0x00173d; 	X(POP(bp));	// 43332 pop     bp ;~ 1678:173D
cs=0x1678;eip=0x00173e; 	J(RETF(0));	// 43333 retf ;~ 1678:173E
loc_264a0:
	// 7279 
cs=0x1678;eip=0x001740; 	T(CMP(*(dw*)(raddr(ds,bx+2)), 0));	// 43339 cmp     word ptr [bx+2], 0 ;~ 1678:1740
cs=0x1678;eip=0x001744; 	J(JLE(loc_264ac));	// 43340 jle     short loc_264AC ;~ 1678:1744
cs=0x1678;eip=0x001746; 	X(MOV(*(raddr(ss,bp+var_a)), 0x0F));	// 43341 mov     [bp+var_A], 0Fh ;~ 1678:1746
cs=0x1678;eip=0x00174a; 	J(JMP(loc_264b0));	// 43342 jmp     short loc_264B0 ;~ 1678:174A
loc_264ac:
	// 7280 
cs=0x1678;eip=0x00174c; 	X(MOV(*(raddr(ss,bp+var_a)), 0));	// 43346 mov     [bp+var_A], 0 ;~ 1678:174C
loc_264b0:
	// 7281 
cs=0x1678;eip=0x001750; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 43349 mov     ax, [bx+0] ;~ 1678:1750
cs=0x1678;eip=0x001752; 	T(NEG(ax));	// 43350 neg     ax ;~ 1678:1752
cs=0x1678;eip=0x001754; 	X(PUSH(ax));	// 43351 push    ax ;~ 1678:1754
cs=0x1678;eip=0x001755; 	X(PUSH(*(dw*)(raddr(ds,bx+4))));	// 43352 push    word ptr [bx+4] ;~ 1678:1755
cs=0x1678;eip=0x001758; 	J(CALLF(polarangle,0));	// 43353 call    polarAngle ;~ 1678:1758
cs=0x1678;eip=0x00175d; 	T(ADD(sp, 4));	// 43354 add     sp, 4 ;~ 1678:175D
cs=0x1678;eip=0x001760; 	T(NEG(ax));	// 43355 neg     ax ;~ 1678:1760
cs=0x1678;eip=0x001762; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 43356 mov     [bp+var_6], ax ;~ 1678:1762
cs=0x1678;eip=0x001765; 	T(OR(ax, ax));	// 43357 or      ax, ax ;~ 1678:1765
cs=0x1678;eip=0x001767; 	J(JGE(loc_264cd));	// 43358 jge     short loc_264CD ;~ 1678:1767
cs=0x1678;eip=0x001769; 	X(ADD(*(db*)(raddr(ss,bp+var_6+1)), 4));	// 43359 add     byte ptr [bp+var_6+1], 4 ;~ 1678:1769
loc_264cd:
	// 7282 
cs=0x1678;eip=0x00176d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 43362 mov     ax, [bp+var_6] ;~ 1678:176D
cs=0x1678;eip=0x001770; 	T(CWD);	// 43363 cwd ;~ 1678:1770
cs=0x1678;eip=0x001771; 	T(MOV(cx, ax));	// 43364 mov     cx, ax ;~ 1678:1771
cs=0x1678;eip=0x001773; 	T(MOV(bx, dx));	// 43365 mov     bx, dx ;~ 1678:1773
cs=0x1678;eip=0x001775; 	T(SHL(ax, 1));	// 43366 shl     ax, 1 ;~ 1678:1775
cs=0x1678;eip=0x001777; 	T(RCL(dx, 1));	// 43367 rcl     dx, 1 ;~ 1678:1777
cs=0x1678;eip=0x001779; 	T(SHL(ax, 1));	// 43368 shl     ax, 1 ;~ 1678:1779
cs=0x1678;eip=0x00177b; 	T(RCL(dx, 1));	// 43369 rcl     dx, 1 ;~ 1678:177B
cs=0x1678;eip=0x00177d; 	T(SHL(ax, 1));	// 43370 shl     ax, 1 ;~ 1678:177D
cs=0x1678;eip=0x00177f; 	T(RCL(dx, 1));	// 43371 rcl     dx, 1 ;~ 1678:177F
cs=0x1678;eip=0x001781; 	T(SHL(ax, 1));	// 43372 shl     ax, 1 ;~ 1678:1781
cs=0x1678;eip=0x001783; 	T(RCL(dx, 1));	// 43373 rcl     dx, 1 ;~ 1678:1783
cs=0x1678;eip=0x001785; 	T(SUB(ax, cx));	// 43374 sub     ax, cx ;~ 1678:1785
cs=0x1678;eip=0x001787; 	T(SBB(dx, bx));	// 43375 sbb     dx, bx ;~ 1678:1787
cs=0x1678;eip=0x001789; 	T(MOV(cl, 0x0A));	// 43376 mov     cl, 0Ah ;~ 1678:1789
loc_264eb:
	// 7283 
cs=0x1678;eip=0x00178b; 	T(SAR(dx, 1));	// 43379 sar     dx, 1 ;~ 1678:178B
cs=0x1678;eip=0x00178d; 	T(RCR(ax, 1));	// 43380 rcr     ax, 1 ;~ 1678:178D
cs=0x1678;eip=0x00178f; 	T(DEC(cl));	// 43381 dec     cl ;~ 1678:178F
cs=0x1678;eip=0x001791; 	J(JNZ(loc_264eb));	// 43382 jnz     short loc_264EB ;~ 1678:1791
cs=0x1678;eip=0x001793; 	X(ADD(*(raddr(ss,bp+var_a)), al));	// 43383 add     [bp+var_A], al ;~ 1678:1793
cs=0x1678;eip=0x001796; 	T(MOV(al, *(raddr(ss,bp+var_a))));	// 43384 mov     al, [bp+var_A] ;~ 1678:1796
cs=0x1678;eip=0x001799; 	T(CBW);	// 43385 cbw ;~ 1678:1799
cs=0x1678;eip=0x00179a; 	X(POP(si));	// 43386 pop     si ;~ 1678:179A
cs=0x1678;eip=0x00179b; 	X(POP(di));	// 43387 pop     di ;~ 1678:179B
cs=0x1678;eip=0x00179c; 	T(MOV(sp, bp));	// 43388 mov     sp, bp ;~ 1678:179C
cs=0x1678;eip=0x00179e; 	X(POP(bp));	// 43389 pop     bp ;~ 1678:179E
cs=0x1678;eip=0x00179f; 	J(RETF(0));	// 43390 retf ;~ 1678:179F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_26435: 	goto loc_26435;
        case m2c::kloc_2643a: 	goto loc_2643a;
        case m2c::kloc_2646e: 	goto loc_2646e;
        case m2c::kloc_26470: 	goto loc_26470;
        case m2c::kloc_2648a: 	goto loc_2648a;
        case m2c::kloc_264a0: 	goto loc_264a0;
        case m2c::kloc_264ac: 	goto loc_264ac;
        case m2c::kloc_264b0: 	goto loc_264b0;
        case m2c::kloc_264cd: 	goto loc_264cd;
        case m2c::kloc_264eb: 	goto loc_264eb;
        case m2c::kvector_op_unk2: 	goto vector_op_unk2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool calc_sincos80(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    calc_sincos80:
    _begin:
cs=0x1678;eip=0x0017a0; 	T(MOV(ax, 0x80));	// 43398 mov     ax, 80h ;~ 1678:17A0
cs=0x1678;eip=0x0017a3; 	X(PUSH(ax));	// 43399 push    ax ;~ 1678:17A3
cs=0x1678;eip=0x0017a4; 	J(CALLF(sin_fast,0));	// 43400 call    sin_fast ;~ 1678:17A4
cs=0x1678;eip=0x0017a9; 	T(ADD(sp, 2));	// 43401 add     sp, 2 ;~ 1678:17A9
cs=0x1678;eip=0x0017ac; 	T(CWD);	// 43402 cwd ;~ 1678:17AC
cs=0x1678;eip=0x0017ad; 	X(MOV(sin80, ax));	// 43403 mov     sin80, ax ;~ 1678:17AD
cs=0x1678;eip=0x0017b0; 	X(MOV(word_4188a, dx));	// 43404 mov     word_4188A, dx ;~ 1678:17B0
cs=0x1678;eip=0x0017b4; 	T(MOV(ax, 0x80));	// 43405 mov     ax, 80h ;~ 1678:17B4
cs=0x1678;eip=0x0017b7; 	X(PUSH(ax));	// 43406 push    ax ;~ 1678:17B7
cs=0x1678;eip=0x0017b8; 	J(CALLF(cos_fast,0));	// 43407 call    cos_fast ;~ 1678:17B8
cs=0x1678;eip=0x0017bd; 	T(ADD(sp, 2));	// 43408 add     sp, 2 ;~ 1678:17BD
cs=0x1678;eip=0x0017c0; 	T(CWD);	// 43409 cwd ;~ 1678:17C0
cs=0x1678;eip=0x0017c1; 	X(MOV(cos80, ax));	// 43410 mov     cos80, ax ;~ 1678:17C1
cs=0x1678;eip=0x0017c4; 	X(MOV(word_41886, dx));	// 43411 mov     word_41886, dx ;~ 1678:17C4
cs=0x1678;eip=0x0017c8; 	T(MOV(ax, 0x80));	// 43412 mov     ax, 80h ;~ 1678:17C8
cs=0x1678;eip=0x0017cb; 	X(PUSH(ax));	// 43413 push    ax ;~ 1678:17CB
cs=0x1678;eip=0x0017cc; 	J(CALLF(sin_fast,0));	// 43414 call    sin_fast ;~ 1678:17CC
cs=0x1678;eip=0x0017d1; 	T(ADD(sp, 2));	// 43415 add     sp, 2 ;~ 1678:17D1
cs=0x1678;eip=0x0017d4; 	T(CWD);	// 43416 cwd ;~ 1678:17D4
cs=0x1678;eip=0x0017d5; 	X(MOV(sin80_2, ax));	// 43417 mov     sin80_2, ax ;~ 1678:17D5
cs=0x1678;eip=0x0017d8; 	X(MOV(word_41892, dx));	// 43418 mov     word_41892, dx ;~ 1678:17D8
cs=0x1678;eip=0x0017dc; 	T(MOV(ax, 0x80));	// 43419 mov     ax, 80h ;~ 1678:17DC
cs=0x1678;eip=0x0017df; 	X(PUSH(ax));	// 43420 push    ax ;~ 1678:17DF
cs=0x1678;eip=0x0017e0; 	J(CALLF(cos_fast,0));	// 43421 call    cos_fast ;~ 1678:17E0
cs=0x1678;eip=0x0017e5; 	T(ADD(sp, 2));	// 43422 add     sp, 2 ;~ 1678:17E5
cs=0x1678;eip=0x0017e8; 	T(CWD);	// 43423 cwd ;~ 1678:17E8
cs=0x1678;eip=0x0017e9; 	X(MOV(cos80_2, ax));	// 43424 mov     cos80_2, ax ;~ 1678:17E9
cs=0x1678;eip=0x0017ec; 	X(MOV(word_4188e, dx));	// 43425 mov     word_4188E, dx ;~ 1678:17EC
cs=0x1678;eip=0x0017f0; 	J(RETF(0));	// 43426 retf ;~ 1678:17F0

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kcalc_sincos80: 	goto calc_sincos80;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool nopsub_26552(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    nopsub_26552:
    _begin:
#undef arg_0
#define arg_0 6
	// 43438 arg_0           = word ptr  6 ;~ 1678:17F2
#undef arg_2
#define arg_2 8
	// 43439 arg_2           = word ptr  8 ;~ 1678:17F2
cs=0x1678;eip=0x0017f2; 	X(PUSH(bp));	// 43441 push    bp ;~ 1678:17F2
cs=0x1678;eip=0x0017f3; 	T(MOV(bp, sp));	// 43442 mov     bp, sp ;~ 1678:17F3
cs=0x1678;eip=0x0017f5; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 43443 cmp     [bp+arg_2], 0 ;~ 1678:17F5
cs=0x1678;eip=0x0017f9; 	J(JGE(loc_2656a));	// 43444 jge     short loc_2656A ;~ 1678:17F9
cs=0x1678;eip=0x0017fb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 43445 mov     ax, [bp+arg_0] ;~ 1678:17FB
cs=0x1678;eip=0x0017fe; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 43446 mov     dx, [bp+arg_2] ;~ 1678:17FE
cs=0x1678;eip=0x001801; 	T(NEG(ax));	// 43447 neg     ax ;~ 1678:1801
cs=0x1678;eip=0x001803; 	T(ADC(dx, 0));	// 43448 adc     dx, 0 ;~ 1678:1803
cs=0x1678;eip=0x001806; 	T(NEG(dx));	// 43449 neg     dx ;~ 1678:1806
cs=0x1678;eip=0x001808; 	X(POP(bp));	// 43450 pop     bp ;~ 1678:1808
cs=0x1678;eip=0x001809; 	J(RETF(0));	// 43451 retf ;~ 1678:1809
loc_2656a:
	// 7284 
cs=0x1678;eip=0x00180a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 43455 mov     ax, [bp+arg_0] ;~ 1678:180A
cs=0x1678;eip=0x00180d; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 43456 mov     dx, [bp+arg_2] ;~ 1678:180D
cs=0x1678;eip=0x001810; 	X(POP(bp));	// 43457 pop     bp ;~ 1678:1810
cs=0x1678;eip=0x001811; 	J(RETF(0));	// 43458 retf ;~ 1678:1811

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_2656a: 	goto loc_2656a;
        case m2c::knopsub_26552: 	goto nopsub_26552;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool rect_union(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    rect_union:
    _begin:
#undef arg_0
#define arg_0 6
	// 43469 arg_0           = word ptr  6 ;~ 1678:1812
#undef arg_2
#define arg_2 8
	// 43470 arg_2           = word ptr  8 ;~ 1678:1812
#undef arg_4
#define arg_4 0x0A
	// 43471 arg_4           = word ptr  0Ah ;~ 1678:1812
cs=0x1678;eip=0x001812; 	X(PUSH(bp));	// 43473 push    bp ;~ 1678:1812
cs=0x1678;eip=0x001813; 	T(MOV(bp, sp));	// 43474 mov     bp, sp ;~ 1678:1813
cs=0x1678;eip=0x001815; 	X(PUSH(si));	// 43475 push    si ;~ 1678:1815
cs=0x1678;eip=0x001816; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 43476 mov     bx, [bp+arg_4] ;~ 1678:1816
cs=0x1678;eip=0x001819; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 43477 mov     si, [bp+arg_0] ;~ 1678:1819
cs=0x1678;eip=0x00181c; 	T(MOV(ax, *(dw*)(raddr(ds,si+0))));	// 43478 mov     ax, [si+0] ;~ 1678:181C
cs=0x1678;eip=0x00181e; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 43479 mov     si, [bp+arg_2] ;~ 1678:181E
cs=0x1678;eip=0x001821; 	T(CMP(ax, *(dw*)(raddr(ds,si+0))));	// 43480 cmp     ax, [si+0] ;~ 1678:1821
cs=0x1678;eip=0x001823; 	J(JLE(loc_26587));	// 43481 jle     short loc_26587 ;~ 1678:1823
cs=0x1678;eip=0x001825; 	T(MOV(ax, *(dw*)(raddr(ds,si+0))));	// 43482 mov     ax, [si+0] ;~ 1678:1825
loc_26587:
	// 7285 
cs=0x1678;eip=0x001827; 	X(MOV(*(dw*)(raddr(ds,bx+0)), ax));	// 43485 mov     [bx+0], ax ;~ 1678:1827
cs=0x1678;eip=0x001829; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 43486 mov     bx, [bp+arg_4] ;~ 1678:1829
cs=0x1678;eip=0x00182c; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 43487 mov     si, [bp+arg_0] ;~ 1678:182C
cs=0x1678;eip=0x00182f; 	T(MOV(ax, *(dw*)(raddr(ds,si+2))));	// 43488 mov     ax, [si+2] ;~ 1678:182F
cs=0x1678;eip=0x001832; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 43489 mov     si, [bp+arg_2] ;~ 1678:1832
cs=0x1678;eip=0x001835; 	T(CMP(ax, *(dw*)(raddr(ds,si+2))));	// 43490 cmp     ax, [si+2] ;~ 1678:1835
cs=0x1678;eip=0x001838; 	J(JGE(loc_2659d));	// 43491 jge     short loc_2659D ;~ 1678:1838
cs=0x1678;eip=0x00183a; 	T(MOV(ax, *(dw*)(raddr(ds,si+2))));	// 43492 mov     ax, [si+2] ;~ 1678:183A
loc_2659d:
	// 7286 
cs=0x1678;eip=0x00183d; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 43495 mov     [bx+2], ax ;~ 1678:183D
cs=0x1678;eip=0x001840; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 43496 mov     bx, [bp+arg_4] ;~ 1678:1840
cs=0x1678;eip=0x001843; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 43497 mov     si, [bp+arg_0] ;~ 1678:1843
cs=0x1678;eip=0x001846; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 43498 mov     ax, [si+4] ;~ 1678:1846
cs=0x1678;eip=0x001849; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 43499 mov     si, [bp+arg_2] ;~ 1678:1849
cs=0x1678;eip=0x00184c; 	T(CMP(ax, *(dw*)(raddr(ds,si+4))));	// 43500 cmp     ax, [si+4] ;~ 1678:184C
cs=0x1678;eip=0x00184f; 	J(JLE(loc_265b4));	// 43501 jle     short loc_265B4 ;~ 1678:184F
cs=0x1678;eip=0x001851; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 43502 mov     ax, [si+4] ;~ 1678:1851
loc_265b4:
	// 7287 
cs=0x1678;eip=0x001854; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 43505 mov     [bx+4], ax ;~ 1678:1854
cs=0x1678;eip=0x001857; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 43506 mov     bx, [bp+arg_4] ;~ 1678:1857
cs=0x1678;eip=0x00185a; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 43507 mov     si, [bp+arg_0] ;~ 1678:185A
cs=0x1678;eip=0x00185d; 	T(MOV(ax, *(dw*)(raddr(ds,si+6))));	// 43508 mov     ax, [si+6] ;~ 1678:185D
cs=0x1678;eip=0x001860; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 43509 mov     si, [bp+arg_2] ;~ 1678:1860
cs=0x1678;eip=0x001863; 	T(CMP(ax, *(dw*)(raddr(ds,si+6))));	// 43510 cmp     ax, [si+6] ;~ 1678:1863
cs=0x1678;eip=0x001866; 	J(JGE(loc_265cb));	// 43511 jge     short loc_265CB ;~ 1678:1866
cs=0x1678;eip=0x001868; 	T(MOV(ax, *(dw*)(raddr(ds,si+6))));	// 43512 mov     ax, [si+6] ;~ 1678:1868
loc_265cb:
	// 7288 
cs=0x1678;eip=0x00186b; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 43515 mov     [bx+6], ax ;~ 1678:186B
cs=0x1678;eip=0x00186e; 	T(CMP(video_flag2_is1, 1));	// 43516 cmp     video_flag2_is1, 1 ;~ 1678:186E
cs=0x1678;eip=0x001873; 	J(JZ(loc_265e9));	// 43517 jz      short loc_265E9 ;~ 1678:1873
cs=0x1678;eip=0x001875; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 43518 mov     bx, [bp+arg_4] ;~ 1678:1875
cs=0x1678;eip=0x001878; 	T(MOV(si, bx));	// 43519 mov     si, bx ;~ 1678:1878
cs=0x1678;eip=0x00187a; 	T(MOV(ax, *(dw*)(raddr(ds,si+2))));	// 43520 mov     ax, [si+2] ;~ 1678:187A
cs=0x1678;eip=0x00187d; 	T(ADD(ax, video_flag2_is1));	// 43521 add     ax, video_flag2_is1 ;~ 1678:187D
cs=0x1678;eip=0x001881; 	T(DEC(ax));	// 43522 dec     ax ;~ 1678:1881
cs=0x1678;eip=0x001882; 	T(AND(ax, video_flag3_isffff));	// 43523 and     ax, video_flag3_isFFFF ;~ 1678:1882
cs=0x1678;eip=0x001886; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 43524 mov     [bx+2], ax ;~ 1678:1886
loc_265e9:
	// 7289 
cs=0x1678;eip=0x001889; 	X(POP(si));	// 43527 pop     si ;~ 1678:1889
cs=0x1678;eip=0x00188a; 	X(POP(bp));	// 43528 pop     bp ;~ 1678:188A
cs=0x1678;eip=0x00188b; 	J(RETF(0));	// 43529 retf ;~ 1678:188B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_26587: 	goto loc_26587;
        case m2c::kloc_2659d: 	goto loc_2659d;
        case m2c::kloc_265b4: 	goto loc_265b4;
        case m2c::kloc_265cb: 	goto loc_265cb;
        case m2c::kloc_265e9: 	goto loc_265e9;
        case m2c::krect_union: 	goto rect_union;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool rect_intersect(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    rect_intersect:
    _begin:
#undef arg_0
#define arg_0 6
	// 43540 arg_0           = word ptr  6 ;~ 1678:188C
#undef arg_2
#define arg_2 8
	// 43541 arg_2           = word ptr  8 ;~ 1678:188C
cs=0x1678;eip=0x00188c; 	X(PUSH(bp));	// 43543 push    bp ;~ 1678:188C
cs=0x1678;eip=0x00188d; 	T(MOV(bp, sp));	// 43544 mov     bp, sp ;~ 1678:188D
cs=0x1678;eip=0x00188f; 	X(PUSH(si));	// 43545 push    si ;~ 1678:188F
cs=0x1678;eip=0x001890; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 43546 mov     bx, [bp+arg_0] ;~ 1678:1890
cs=0x1678;eip=0x001893; 	T(MOV(si, bx));	// 43547 mov     si, bx ;~ 1678:1893
cs=0x1678;eip=0x001895; 	T(MOV(ax, *(dw*)(raddr(ds,si+0))));	// 43548 mov     ax, [si+0] ;~ 1678:1895
cs=0x1678;eip=0x001897; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 43549 cmp     [bx+2], ax ;~ 1678:1897
cs=0x1678;eip=0x00189a; 	J(JGE(loc_26602));	// 43550 jge     short loc_26602 ;~ 1678:189A
loc_265fc:
	// 7290 
cs=0x1678;eip=0x00189c; 	T(MOV(ax, 1));	// 43554 mov     ax, 1 ;~ 1678:189C
cs=0x1678;eip=0x00189f; 	X(POP(si));	// 43555 pop     si ;~ 1678:189F
cs=0x1678;eip=0x0018a0; 	X(POP(bp));	// 43556 pop     bp ;~ 1678:18A0
cs=0x1678;eip=0x0018a1; 	J(RETF(0));	// 43557 retf ;~ 1678:18A1
loc_26602:
	// 7291 
cs=0x1678;eip=0x0018a2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 43561 mov     bx, [bp+arg_2] ;~ 1678:18A2
cs=0x1678;eip=0x0018a5; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 43562 mov     si, [bp+arg_0] ;~ 1678:18A5
cs=0x1678;eip=0x0018a8; 	T(MOV(ax, *(dw*)(raddr(ds,si+0))));	// 43563 mov     ax, [si+0] ;~ 1678:18A8
cs=0x1678;eip=0x0018aa; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 43564 cmp     [bx+2], ax ;~ 1678:18AA
cs=0x1678;eip=0x0018ad; 	J(JLE(loc_265fc));	// 43565 jle     short loc_265FC ;~ 1678:18AD
cs=0x1678;eip=0x0018af; 	T(MOV(bx, si));	// 43566 mov     bx, si ;~ 1678:18AF
cs=0x1678;eip=0x0018b1; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 43567 mov     si, [bp+arg_2] ;~ 1678:18B1
cs=0x1678;eip=0x0018b4; 	T(MOV(ax, *(dw*)(raddr(ds,si+0))));	// 43568 mov     ax, [si+0] ;~ 1678:18B4
cs=0x1678;eip=0x0018b6; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 43569 cmp     [bx+2], ax ;~ 1678:18B6
cs=0x1678;eip=0x0018b9; 	J(JLE(loc_265fc));	// 43570 jle     short loc_265FC ;~ 1678:18B9
cs=0x1678;eip=0x0018bb; 	T(MOV(ax, *(dw*)(raddr(ds,si+6))));	// 43571 mov     ax, [si+6] ;~ 1678:18BB
cs=0x1678;eip=0x0018be; 	T(CMP(*(dw*)(raddr(ds,bx+4)), ax));	// 43572 cmp     [bx+4], ax ;~ 1678:18BE
cs=0x1678;eip=0x0018c1; 	J(JGE(loc_265fc));	// 43573 jge     short loc_265FC ;~ 1678:18C1
cs=0x1678;eip=0x0018c3; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 43574 mov     ax, [si+4] ;~ 1678:18C3
cs=0x1678;eip=0x0018c6; 	T(CMP(*(dw*)(raddr(ds,bx+6)), ax));	// 43575 cmp     [bx+6], ax ;~ 1678:18C6
cs=0x1678;eip=0x0018c9; 	J(JLE(loc_265fc));	// 43576 jle     short loc_265FC ;~ 1678:18C9
cs=0x1678;eip=0x0018cb; 	T(MOV(bx, si));	// 43577 mov     bx, si ;~ 1678:18CB
cs=0x1678;eip=0x0018cd; 	T(MOV(si, *(dw*)(raddr(ds,bx+0))));	// 43578 mov     si, [bx+0] ;~ 1678:18CD
cs=0x1678;eip=0x0018cf; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 43579 mov     bx, [bp+arg_0] ;~ 1678:18CF
cs=0x1678;eip=0x0018d2; 	T(CMP(*(dw*)(raddr(ds,bx+0)), si));	// 43580 cmp     [bx+0], si ;~ 1678:18D2
cs=0x1678;eip=0x0018d4; 	J(JGE(loc_26638));	// 43581 jge     short loc_26638 ;~ 1678:18D4
cs=0x1678;eip=0x0018d6; 	X(MOV(*(dw*)(raddr(ds,bx+0)), si));	// 43582 mov     [bx+0], si ;~ 1678:18D6
loc_26638:
	// 7292 
cs=0x1678;eip=0x0018d8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 43585 mov     bx, [bp+arg_0] ;~ 1678:18D8
cs=0x1678;eip=0x0018db; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 43586 mov     si, [bp+arg_2] ;~ 1678:18DB
cs=0x1678;eip=0x0018de; 	T(MOV(ax, *(dw*)(raddr(ds,si+2))));	// 43587 mov     ax, [si+2] ;~ 1678:18DE
cs=0x1678;eip=0x0018e1; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 43588 cmp     [bx+2], ax ;~ 1678:18E1
cs=0x1678;eip=0x0018e4; 	J(JLE(loc_26649));	// 43589 jle     short loc_26649 ;~ 1678:18E4
cs=0x1678;eip=0x0018e6; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 43590 mov     [bx+2], ax ;~ 1678:18E6
loc_26649:
	// 7293 
cs=0x1678;eip=0x0018e9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 43593 mov     bx, [bp+arg_0] ;~ 1678:18E9
cs=0x1678;eip=0x0018ec; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 43594 mov     si, [bp+arg_2] ;~ 1678:18EC
cs=0x1678;eip=0x0018ef; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 43595 mov     ax, [si+4] ;~ 1678:18EF
cs=0x1678;eip=0x0018f2; 	T(CMP(*(dw*)(raddr(ds,bx+4)), ax));	// 43596 cmp     [bx+4], ax ;~ 1678:18F2
cs=0x1678;eip=0x0018f5; 	J(JGE(loc_2665a));	// 43597 jge     short loc_2665A ;~ 1678:18F5
cs=0x1678;eip=0x0018f7; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 43598 mov     [bx+4], ax ;~ 1678:18F7
loc_2665a:
	// 7294 
cs=0x1678;eip=0x0018fa; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 43601 mov     bx, [bp+arg_0] ;~ 1678:18FA
cs=0x1678;eip=0x0018fd; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 43602 mov     si, [bp+arg_2] ;~ 1678:18FD
cs=0x1678;eip=0x001900; 	T(MOV(ax, *(dw*)(raddr(ds,si+6))));	// 43603 mov     ax, [si+6] ;~ 1678:1900
cs=0x1678;eip=0x001903; 	T(CMP(*(dw*)(raddr(ds,bx+6)), ax));	// 43604 cmp     [bx+6], ax ;~ 1678:1903
cs=0x1678;eip=0x001906; 	J(JLE(loc_2666b));	// 43605 jle     short loc_2666B ;~ 1678:1906
cs=0x1678;eip=0x001908; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 43606 mov     [bx+6], ax ;~ 1678:1908
loc_2666b:
	// 7295 
cs=0x1678;eip=0x00190b; 	T(SUB(ax, ax));	// 43609 sub     ax, ax ;~ 1678:190B
cs=0x1678;eip=0x00190d; 	X(POP(si));	// 43610 pop     si ;~ 1678:190D
cs=0x1678;eip=0x00190e; 	X(POP(bp));	// 43611 pop     bp ;~ 1678:190E
cs=0x1678;eip=0x00190f; 	J(RETF(0));	// 43612 retf ;~ 1678:190F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_265fc: 	goto loc_265fc;
        case m2c::kloc_26602: 	goto loc_26602;
        case m2c::kloc_26638: 	goto loc_26638;
        case m2c::kloc_26649: 	goto loc_26649;
        case m2c::kloc_2665a: 	goto loc_2665a;
        case m2c::kloc_2666b: 	goto loc_2666b;
        case m2c::krect_intersect: 	goto rect_intersect;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool rectlist_add_rect(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    rectlist_add_rect:
    _begin:
#undef var_22
#define var_22 -0x22
	// 43623 var_22          = byte ptr -22h ;~ 1678:1910
#undef var_20
#define var_20 -0x20
	// 43624 var_20          = byte ptr -20h ;~ 1678:1910
#undef var_1a
#define var_1a -0x1A
	// 43625 var_1A          = word ptr -1Ah ;~ 1678:1910
#undef var_18
#define var_18 -0x18
	// 43626 var_18          = byte ptr -18h ;~ 1678:1910
#undef var_16
#define var_16 -0x16
	// 43627 var_16          = word ptr -16h ;~ 1678:1910
#undef var_14
#define var_14 -0x14
	// 43628 var_14          = byte ptr -14h ;~ 1678:1910
#undef var_12
#define var_12 -0x12
	// 43629 var_12          = byte ptr -12h ;~ 1678:1910
#undef var_10
#define var_10 -0x10
	// 43630 var_10          = word ptr -10h ;~ 1678:1910
#undef var_e
#define var_e -0x0E
	// 43631 var_E           = word ptr -0Eh ;~ 1678:1910
#undef var_c
#define var_c -0x0C
	// 43632 var_C           = word ptr -0Ch ;~ 1678:1910
#undef var_a
#define var_a -0x0A
	// 43633 var_A           = word ptr -0Ah ;~ 1678:1910
#undef var_8
#define var_8 -8
	// 43634 var_8           = byte ptr -8 ;~ 1678:1910
#undef var_4
#define var_4 -4
	// 43635 var_4           = word ptr -4 ;~ 1678:1910
#undef arg_0
#define arg_0 6
	// 43636 arg_0           = word ptr  6 ;~ 1678:1910
#undef arg_2
#define arg_2 8
	// 43637 arg_2           = word ptr  8 ;~ 1678:1910
#undef arg_4
#define arg_4 0x0A
	// 43638 arg_4           = word ptr  0Ah ;~ 1678:1910
cs=0x1678;eip=0x001910; 	X(PUSH(bp));	// 43640 push    bp ;~ 1678:1910
cs=0x1678;eip=0x001911; 	T(MOV(bp, sp));	// 43641 mov     bp, sp ;~ 1678:1911
cs=0x1678;eip=0x001913; 	T(SUB(sp, 0x22));	// 43642 sub     sp, 22h ;~ 1678:1913
cs=0x1678;eip=0x001916; 	X(PUSH(di));	// 43643 push    di ;~ 1678:1916
cs=0x1678;eip=0x001917; 	X(PUSH(si));	// 43644 push    si ;~ 1678:1917
cs=0x1678;eip=0x001918; 	T(CMP(video_flag2_is1, 1));	// 43645 cmp     video_flag2_is1, 1 ;~ 1678:1918
cs=0x1678;eip=0x00191d; 	J(JZ(loc_26693));	// 43646 jz      short loc_26693 ;~ 1678:191D
cs=0x1678;eip=0x00191f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 43647 mov     bx, [bp+arg_4] ;~ 1678:191F
cs=0x1678;eip=0x001922; 	T(MOV(si, bx));	// 43648 mov     si, bx ;~ 1678:1922
cs=0x1678;eip=0x001924; 	T(MOV(ax, *(dw*)(raddr(ds,si+2))));	// 43649 mov     ax, [si+2] ;~ 1678:1924
cs=0x1678;eip=0x001927; 	T(ADD(ax, video_flag2_is1));	// 43650 add     ax, video_flag2_is1 ;~ 1678:1927
cs=0x1678;eip=0x00192b; 	T(DEC(ax));	// 43651 dec     ax ;~ 1678:192B
cs=0x1678;eip=0x00192c; 	T(AND(ax, video_flag3_isffff));	// 43652 and     ax, video_flag3_isFFFF ;~ 1678:192C
cs=0x1678;eip=0x001930; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 43653 mov     [bx+2], ax ;~ 1678:1930
loc_26693:
	// 7296 
cs=0x1678;eip=0x001933; 	X(MOV(*(raddr(ss,bp+var_14)), 0));	// 43656 mov     [bp+var_14], 0 ;~ 1678:1933
cs=0x1678;eip=0x001937; 	J(JMP(loc_266c9));	// 43657 jmp     short loc_266C9 ;~ 1678:1937
loc_2669a:
	// 7297 
cs=0x1678;eip=0x00193a; 	T(MOV(di, si));	// 43662 mov     di, si ;~ 1678:193A
cs=0x1678;eip=0x00193c; 	T(MOV(cl, 3));	// 43663 mov     cl, 3 ;~ 1678:193C
cs=0x1678;eip=0x00193e; 	T(SHL(di, cl));	// 43664 shl     di, cl ;~ 1678:193E
cs=0x1678;eip=0x001940; 	T(ADD(di, *(dw*)(raddr(ss,bp+arg_2))));	// 43665 add     di, [bp+arg_2] ;~ 1678:1940
cs=0x1678;eip=0x001943; 	X(PUSH(si));	// 43666 push    si ;~ 1678:1943
cs=0x1678;eip=0x001944; 	X(PUSH(di));	// 43667 push    di ;~ 1678:1944
cs=0x1678;eip=0x001945; 	T(si = di+8);	// 43668 lea     si, [di+8] ;~ 1678:1945
cs=0x1678;eip=0x001948; 	X(PUSH(ds));	// 43669 push    ds ;~ 1678:1948
cs=0x1678;eip=0x001949; 	X(POP(es));	// 43670 pop     es ;~ 1678:1949
cs=0x1678;eip=0x00194a; 	X(MOVSW);	// 43672 movsw ;~ 1678:194A
cs=0x1678;eip=0x00194b; 	X(MOVSW);	// 43673 movsw ;~ 1678:194B
cs=0x1678;eip=0x00194c; 	X(MOVSW);	// 43674 movsw ;~ 1678:194C
cs=0x1678;eip=0x00194d; 	X(MOVSW);	// 43675 movsw ;~ 1678:194D
cs=0x1678;eip=0x00194e; 	X(POP(di));	// 43676 pop     di ;~ 1678:194E
cs=0x1678;eip=0x00194f; 	X(POP(si));	// 43677 pop     si ;~ 1678:194F
cs=0x1678;eip=0x001950; 	X(INC(*(raddr(ss,bp+var_12))));	// 43678 inc     [bp+var_12] ;~ 1678:1950
loc_266b3:
	// 7298 
cs=0x1678;eip=0x001953; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 43681 mov     al, [bp+var_12] ;~ 1678:1953
cs=0x1678;eip=0x001956; 	T(CBW);	// 43682 cbw ;~ 1678:1956
cs=0x1678;eip=0x001957; 	T(MOV(si, ax));	// 43683 mov     si, ax ;~ 1678:1957
cs=0x1678;eip=0x001959; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 43684 mov     bx, [bp+arg_0] ;~ 1678:1959
cs=0x1678;eip=0x00195c; 	T(MOV(al, *(raddr(ds,bx))));	// 43685 mov     al, [bx] ;~ 1678:195C
cs=0x1678;eip=0x00195e; 	T(CBW);	// 43686 cbw ;~ 1678:195E
cs=0x1678;eip=0x00195f; 	T(DEC(ax));	// 43687 dec     ax ;~ 1678:195F
cs=0x1678;eip=0x001960; 	T(CMP(ax, si));	// 43688 cmp     ax, si ;~ 1678:1960
cs=0x1678;eip=0x001962; 	J(JG(loc_2669a));	// 43689 jg      short loc_2669A ;~ 1678:1962
cs=0x1678;eip=0x001964; 	X(DEC(*(raddr(ds,bx))));	// 43690 dec     byte ptr [bx] ;~ 1678:1964
loc_266c6:
	// 7299 
cs=0x1678;eip=0x001966; 	X(INC(*(raddr(ss,bp+var_14))));	// 43693 inc     [bp+var_14] ;~ 1678:1966
loc_266c9:
	// 7300 
cs=0x1678;eip=0x001969; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 43696 mov     bx, [bp+arg_0] ;~ 1678:1969
cs=0x1678;eip=0x00196c; 	T(MOV(al, *(raddr(ss,bp+var_14))));	// 43697 mov     al, [bp+var_14] ;~ 1678:196C
cs=0x1678;eip=0x00196f; 	T(CMP(*(raddr(ds,bx)), al));	// 43698 cmp     [bx], al ;~ 1678:196F
cs=0x1678;eip=0x001971; 	J(JG(loc_266d6));	// 43699 jg      short loc_266D6 ;~ 1678:1971
cs=0x1678;eip=0x001973; 	J(JMP(loc_26880));	// 43700 jmp     loc_26880 ;~ 1678:1973
loc_266d6:
	// 7301 
cs=0x1678;eip=0x001976; 	T(CBW);	// 43704 cbw ;~ 1678:1976
cs=0x1678;eip=0x001977; 	T(MOV(cl, 3));	// 43705 mov     cl, 3 ;~ 1678:1977
cs=0x1678;eip=0x001979; 	T(SHL(ax, cl));	// 43706 shl     ax, cl ;~ 1678:1979
cs=0x1678;eip=0x00197b; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 43707 add     ax, [bp+arg_2] ;~ 1678:197B
cs=0x1678;eip=0x00197e; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 43708 mov     [bp+var_16], ax ;~ 1678:197E
cs=0x1678;eip=0x001981; 	X(PUSH(ax));	// 43709 push    ax ;~ 1678:1981
cs=0x1678;eip=0x001982; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 43710 push    [bp+arg_4] ;~ 1678:1982
cs=0x1678;eip=0x001985; 	X(PUSH(cs));	// 43711 push    cs ;~ 1678:1985
cs=0x1678;eip=0x001986; 	J(CALL(rect_is_overlapping,0));	// 43712 call    near ptr rect_is_overlapping ;~ 1678:1986
cs=0x1678;eip=0x001989; 	T(ADD(sp, 4));	// 43713 add     sp, 4 ;~ 1678:1989
cs=0x1678;eip=0x00198c; 	T(OR(al, al));	// 43714 or      al, al ;~ 1678:198C
cs=0x1678;eip=0x00198e; 	J(JZ(loc_266c6));	// 43715 jz      short loc_266C6 ;~ 1678:198E
cs=0x1678;eip=0x001990; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 43716 push    [bp+var_16] ;~ 1678:1990
cs=0x1678;eip=0x001993; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 43717 push    [bp+arg_4] ;~ 1678:1993
cs=0x1678;eip=0x001996; 	X(PUSH(cs));	// 43718 push    cs ;~ 1678:1996
cs=0x1678;eip=0x001997; 	J(CALL(rect_is_inside,0));	// 43719 call    near ptr rect_is_inside ;~ 1678:1997
cs=0x1678;eip=0x00199a; 	T(ADD(sp, 4));	// 43720 add     sp, 4 ;~ 1678:199A
cs=0x1678;eip=0x00199d; 	T(OR(al, al));	// 43721 or      al, al ;~ 1678:199D
cs=0x1678;eip=0x00199f; 	J(JZ(loc_26704));	// 43722 jz      short loc_26704 ;~ 1678:199F
cs=0x1678;eip=0x0019a1; 	J(JMP(loc_26957));	// 43723 jmp     loc_26957 ;~ 1678:19A1
loc_26704:
	// 7302 
cs=0x1678;eip=0x0019a4; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 43727 push    [bp+arg_4] ;~ 1678:19A4
cs=0x1678;eip=0x0019a7; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 43728 push    [bp+var_16] ;~ 1678:19A7
cs=0x1678;eip=0x0019aa; 	X(PUSH(cs));	// 43729 push    cs ;~ 1678:19AA
cs=0x1678;eip=0x0019ab; 	J(CALL(rect_is_inside,0));	// 43730 call    near ptr rect_is_inside ;~ 1678:19AB
cs=0x1678;eip=0x0019ae; 	T(ADD(sp, 4));	// 43731 add     sp, 4 ;~ 1678:19AE
cs=0x1678;eip=0x0019b1; 	T(OR(al, al));	// 43732 or      al, al ;~ 1678:19B1
cs=0x1678;eip=0x0019b3; 	J(JZ(loc_2671e));	// 43733 jz      short loc_2671E ;~ 1678:19B3
cs=0x1678;eip=0x0019b5; 	T(MOV(al, *(raddr(ss,bp+var_14))));	// 43734 mov     al, [bp+var_14] ;~ 1678:19B5
cs=0x1678;eip=0x0019b8; 	X(MOV(*(raddr(ss,bp+var_12)), al));	// 43735 mov     [bp+var_12], al ;~ 1678:19B8
cs=0x1678;eip=0x0019bb; 	J(JMP(loc_266b3));	// 43736 jmp     short loc_266B3 ;~ 1678:19BB
loc_2671e:
	// 7303 
cs=0x1678;eip=0x0019be; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_16))));	// 43741 mov     ax, [bp+var_16] ;~ 1678:19BE
cs=0x1678;eip=0x0019c1; 	T(di = bp+var_10);	// 43742 lea     di, [bp+var_10] ;~ 1678:19C1
cs=0x1678;eip=0x0019c4; 	T(MOV(si, ax));	// 43743 mov     si, ax ;~ 1678:19C4
cs=0x1678;eip=0x0019c6; 	X(PUSH(ss));	// 43744 push    ss ;~ 1678:19C6
cs=0x1678;eip=0x0019c7; 	X(POP(es));	// 43745 pop     es ;~ 1678:19C7
cs=0x1678;eip=0x0019c8; 	X(MOVSW);	// 43747 movsw ;~ 1678:19C8
cs=0x1678;eip=0x0019c9; 	X(MOVSW);	// 43748 movsw ;~ 1678:19C9
cs=0x1678;eip=0x0019ca; 	X(MOVSW);	// 43749 movsw ;~ 1678:19CA
cs=0x1678;eip=0x0019cb; 	X(MOVSW);	// 43750 movsw ;~ 1678:19CB
cs=0x1678;eip=0x0019cc; 	T(MOV(bx, ax));	// 43751 mov     bx, ax ;~ 1678:19CC
cs=0x1678;eip=0x0019ce; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 43752 mov     si, [bp+arg_4] ;~ 1678:19CE
cs=0x1678;eip=0x0019d1; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 43753 mov     ax, [si+4] ;~ 1678:19D1
cs=0x1678;eip=0x0019d4; 	T(CMP(*(dw*)(raddr(ds,bx+4)), ax));	// 43754 cmp     [bx+4], ax ;~ 1678:19D4
cs=0x1678;eip=0x0019d7; 	J(JGE(loc_2675a));	// 43755 jge     short loc_2675A ;~ 1678:19D7
cs=0x1678;eip=0x0019d9; 	T(MOV(ax, bx));	// 43756 mov     ax, bx ;~ 1678:19D9
cs=0x1678;eip=0x0019db; 	T(di = bp+var_20);	// 43757 lea     di, [bp+var_20] ;~ 1678:19DB
cs=0x1678;eip=0x0019de; 	T(MOV(si, ax));	// 43758 mov     si, ax ;~ 1678:19DE
cs=0x1678;eip=0x0019e0; 	X(MOVSW);	// 43759 movsw ;~ 1678:19E0
cs=0x1678;eip=0x0019e1; 	X(MOVSW);	// 43760 movsw ;~ 1678:19E1
cs=0x1678;eip=0x0019e2; 	X(MOVSW);	// 43761 movsw ;~ 1678:19E2
cs=0x1678;eip=0x0019e3; 	X(MOVSW);	// 43762 movsw ;~ 1678:19E3
cs=0x1678;eip=0x0019e4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 43763 mov     bx, [bp+arg_4] ;~ 1678:19E4
cs=0x1678;eip=0x0019e7; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 43764 mov     ax, [bx+4] ;~ 1678:19E7
cs=0x1678;eip=0x0019ea; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), ax));	// 43765 mov     [bp+var_1A], ax ;~ 1678:19EA
cs=0x1678;eip=0x0019ed; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 43766 mov     ax, [bx+4] ;~ 1678:19ED
cs=0x1678;eip=0x0019f0; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 43767 mov     [bp+var_C], ax ;~ 1678:19F0
loc_26753:
	// 7304 
cs=0x1678;eip=0x0019f3; 	X(MOV(*(raddr(ss,bp+var_18)), 1));	// 43770 mov     [bp+var_18], 1 ;~ 1678:19F3
cs=0x1678;eip=0x0019f7; 	J(JMP(loc_26784));	// 43771 jmp     short loc_26784 ;~ 1678:19F7
loc_2675a:
	// 7305 
cs=0x1678;eip=0x0019fa; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 43776 mov     bx, [bp+arg_4] ;~ 1678:19FA
cs=0x1678;eip=0x0019fd; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_16))));	// 43777 mov     si, [bp+var_16] ;~ 1678:19FD
cs=0x1678;eip=0x001a00; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 43778 mov     ax, [si+4] ;~ 1678:1A00
cs=0x1678;eip=0x001a03; 	T(CMP(*(dw*)(raddr(ds,bx+4)), ax));	// 43779 cmp     [bx+4], ax ;~ 1678:1A03
cs=0x1678;eip=0x001a06; 	J(JGE(loc_26780));	// 43780 jge     short loc_26780 ;~ 1678:1A06
cs=0x1678;eip=0x001a08; 	T(MOV(ax, bx));	// 43781 mov     ax, bx ;~ 1678:1A08
cs=0x1678;eip=0x001a0a; 	T(di = bp+var_20);	// 43782 lea     di, [bp+var_20] ;~ 1678:1A0A
cs=0x1678;eip=0x001a0d; 	T(MOV(si, ax));	// 43783 mov     si, ax ;~ 1678:1A0D
cs=0x1678;eip=0x001a0f; 	X(PUSH(ss));	// 43784 push    ss ;~ 1678:1A0F
cs=0x1678;eip=0x001a10; 	X(POP(es));	// 43785 pop     es ;~ 1678:1A10
cs=0x1678;eip=0x001a11; 	X(MOVSW);	// 43786 movsw ;~ 1678:1A11
cs=0x1678;eip=0x001a12; 	X(MOVSW);	// 43787 movsw ;~ 1678:1A12
cs=0x1678;eip=0x001a13; 	X(MOVSW);	// 43788 movsw ;~ 1678:1A13
cs=0x1678;eip=0x001a14; 	X(MOVSW);	// 43789 movsw ;~ 1678:1A14
cs=0x1678;eip=0x001a15; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_16))));	// 43790 mov     bx, [bp+var_16] ;~ 1678:1A15
cs=0x1678;eip=0x001a18; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 43791 mov     ax, [bx+4] ;~ 1678:1A18
cs=0x1678;eip=0x001a1b; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), ax));	// 43792 mov     [bp+var_1A], ax ;~ 1678:1A1B
cs=0x1678;eip=0x001a1e; 	J(JMP(loc_26753));	// 43793 jmp     short loc_26753 ;~ 1678:1A1E
loc_26780:
	// 7306 
cs=0x1678;eip=0x001a20; 	X(MOV(*(raddr(ss,bp+var_18)), 0));	// 43797 mov     [bp+var_18], 0 ;~ 1678:1A20
loc_26784:
	// 7307 
cs=0x1678;eip=0x001a24; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_16))));	// 43800 mov     bx, [bp+var_16] ;~ 1678:1A24
cs=0x1678;eip=0x001a27; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 43801 mov     si, [bp+arg_4] ;~ 1678:1A27
cs=0x1678;eip=0x001a2a; 	T(MOV(ax, *(dw*)(raddr(ds,si+6))));	// 43802 mov     ax, [si+6] ;~ 1678:1A2A
cs=0x1678;eip=0x001a2d; 	T(CMP(*(dw*)(raddr(ds,bx+6)), ax));	// 43803 cmp     [bx+6], ax ;~ 1678:1A2D
cs=0x1678;eip=0x001a30; 	J(JLE(loc_267b4));	// 43804 jle     short loc_267B4 ;~ 1678:1A30
cs=0x1678;eip=0x001a32; 	T(MOV(ax, bx));	// 43805 mov     ax, bx ;~ 1678:1A32
cs=0x1678;eip=0x001a34; 	T(di = bp+var_8);	// 43806 lea     di, [bp+var_8] ;~ 1678:1A34
cs=0x1678;eip=0x001a37; 	T(MOV(si, ax));	// 43807 mov     si, ax ;~ 1678:1A37
cs=0x1678;eip=0x001a39; 	X(PUSH(ss));	// 43808 push    ss ;~ 1678:1A39
cs=0x1678;eip=0x001a3a; 	X(POP(es));	// 43809 pop     es ;~ 1678:1A3A
cs=0x1678;eip=0x001a3b; 	X(MOVSW);	// 43810 movsw ;~ 1678:1A3B
cs=0x1678;eip=0x001a3c; 	X(MOVSW);	// 43811 movsw ;~ 1678:1A3C
cs=0x1678;eip=0x001a3d; 	X(MOVSW);	// 43812 movsw ;~ 1678:1A3D
cs=0x1678;eip=0x001a3e; 	X(MOVSW);	// 43813 movsw ;~ 1678:1A3E
cs=0x1678;eip=0x001a3f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 43814 mov     bx, [bp+arg_4] ;~ 1678:1A3F
cs=0x1678;eip=0x001a42; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 43815 mov     ax, [bx+6] ;~ 1678:1A42
cs=0x1678;eip=0x001a45; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 43816 mov     [bp+var_4], ax ;~ 1678:1A45
cs=0x1678;eip=0x001a48; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 43817 mov     ax, [bx+6] ;~ 1678:1A48
cs=0x1678;eip=0x001a4b; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 43818 mov     [bp+var_A], ax ;~ 1678:1A4B
loc_267ae:
	// 7308 
cs=0x1678;eip=0x001a4e; 	X(MOV(*(raddr(ss,bp+var_22)), 1));	// 43821 mov     [bp+var_22], 1 ;~ 1678:1A4E
cs=0x1678;eip=0x001a52; 	J(JMP(loc_267de));	// 43822 jmp     short loc_267DE ;~ 1678:1A52
loc_267b4:
	// 7309 
cs=0x1678;eip=0x001a54; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 43826 mov     bx, [bp+arg_4] ;~ 1678:1A54
cs=0x1678;eip=0x001a57; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_16))));	// 43827 mov     si, [bp+var_16] ;~ 1678:1A57
cs=0x1678;eip=0x001a5a; 	T(MOV(ax, *(dw*)(raddr(ds,si+6))));	// 43828 mov     ax, [si+6] ;~ 1678:1A5A
cs=0x1678;eip=0x001a5d; 	T(CMP(*(dw*)(raddr(ds,bx+6)), ax));	// 43829 cmp     [bx+6], ax ;~ 1678:1A5D
cs=0x1678;eip=0x001a60; 	J(JLE(loc_267da));	// 43830 jle     short loc_267DA ;~ 1678:1A60
cs=0x1678;eip=0x001a62; 	T(MOV(ax, bx));	// 43831 mov     ax, bx ;~ 1678:1A62
cs=0x1678;eip=0x001a64; 	T(di = bp+var_8);	// 43832 lea     di, [bp+var_8] ;~ 1678:1A64
cs=0x1678;eip=0x001a67; 	T(MOV(si, ax));	// 43833 mov     si, ax ;~ 1678:1A67
cs=0x1678;eip=0x001a69; 	X(PUSH(ss));	// 43834 push    ss ;~ 1678:1A69
cs=0x1678;eip=0x001a6a; 	X(POP(es));	// 43835 pop     es ;~ 1678:1A6A
cs=0x1678;eip=0x001a6b; 	X(MOVSW);	// 43836 movsw ;~ 1678:1A6B
cs=0x1678;eip=0x001a6c; 	X(MOVSW);	// 43837 movsw ;~ 1678:1A6C
cs=0x1678;eip=0x001a6d; 	X(MOVSW);	// 43838 movsw ;~ 1678:1A6D
cs=0x1678;eip=0x001a6e; 	X(MOVSW);	// 43839 movsw ;~ 1678:1A6E
cs=0x1678;eip=0x001a6f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_16))));	// 43840 mov     bx, [bp+var_16] ;~ 1678:1A6F
cs=0x1678;eip=0x001a72; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 43841 mov     ax, [bx+6] ;~ 1678:1A72
cs=0x1678;eip=0x001a75; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 43842 mov     [bp+var_4], ax ;~ 1678:1A75
cs=0x1678;eip=0x001a78; 	J(JMP(loc_267ae));	// 43843 jmp     short loc_267AE ;~ 1678:1A78
loc_267da:
	// 7310 
cs=0x1678;eip=0x001a7a; 	X(MOV(*(raddr(ss,bp+var_22)), 0));	// 43847 mov     [bp+var_22], 0 ;~ 1678:1A7A
loc_267de:
	// 7311 
cs=0x1678;eip=0x001a7e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 43850 mov     bx, [bp+arg_4] ;~ 1678:1A7E
cs=0x1678;eip=0x001a81; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 43851 mov     ax, [bx+0] ;~ 1678:1A81
cs=0x1678;eip=0x001a83; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_16))));	// 43852 mov     bx, [bp+var_16] ;~ 1678:1A83
cs=0x1678;eip=0x001a86; 	T(CMP(ax, *(dw*)(raddr(ds,bx+0))));	// 43853 cmp     ax, [bx+0] ;~ 1678:1A86
cs=0x1678;eip=0x001a88; 	J(JLE(loc_267ec));	// 43854 jle     short loc_267EC ;~ 1678:1A88
cs=0x1678;eip=0x001a8a; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 43855 mov     ax, [bx+0] ;~ 1678:1A8A
loc_267ec:
	// 7312 
cs=0x1678;eip=0x001a8c; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 43858 mov     [bp+var_10], ax ;~ 1678:1A8C
cs=0x1678;eip=0x001a8f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 43859 mov     bx, [bp+arg_4] ;~ 1678:1A8F
cs=0x1678;eip=0x001a92; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 43860 mov     ax, [bx+2] ;~ 1678:1A92
cs=0x1678;eip=0x001a95; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_16))));	// 43861 mov     bx, [bp+var_16] ;~ 1678:1A95
cs=0x1678;eip=0x001a98; 	T(CMP(ax, *(dw*)(raddr(ds,bx+2))));	// 43862 cmp     ax, [bx+2] ;~ 1678:1A98
cs=0x1678;eip=0x001a9b; 	J(JGE(loc_26800));	// 43863 jge     short loc_26800 ;~ 1678:1A9B
cs=0x1678;eip=0x001a9d; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 43864 mov     ax, [bx+2] ;~ 1678:1A9D
loc_26800:
	// 7313 
cs=0x1678;eip=0x001aa0; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 43867 mov     [bp+var_E], ax ;~ 1678:1AA0
cs=0x1678;eip=0x001aa3; 	T(MOV(al, *(raddr(ss,bp+var_14))));	// 43868 mov     al, [bp+var_14] ;~ 1678:1AA3
cs=0x1678;eip=0x001aa6; 	X(MOV(*(raddr(ss,bp+var_12)), al));	// 43869 mov     [bp+var_12], al ;~ 1678:1AA6
cs=0x1678;eip=0x001aa9; 	J(JMP(loc_26825));	// 43870 jmp     short loc_26825 ;~ 1678:1AA9
loc_2680c:
	// 7314 
cs=0x1678;eip=0x001aac; 	T(MOV(di, si));	// 43875 mov     di, si ;~ 1678:1AAC
cs=0x1678;eip=0x001aae; 	T(MOV(cl, 3));	// 43876 mov     cl, 3 ;~ 1678:1AAE
cs=0x1678;eip=0x001ab0; 	T(SHL(di, cl));	// 43877 shl     di, cl ;~ 1678:1AB0
cs=0x1678;eip=0x001ab2; 	T(ADD(di, *(dw*)(raddr(ss,bp+arg_2))));	// 43878 add     di, [bp+arg_2] ;~ 1678:1AB2
cs=0x1678;eip=0x001ab5; 	X(PUSH(si));	// 43879 push    si ;~ 1678:1AB5
cs=0x1678;eip=0x001ab6; 	X(PUSH(di));	// 43880 push    di ;~ 1678:1AB6
cs=0x1678;eip=0x001ab7; 	T(si = di+8);	// 43881 lea     si, [di+8] ;~ 1678:1AB7
cs=0x1678;eip=0x001aba; 	X(PUSH(ds));	// 43882 push    ds ;~ 1678:1ABA
cs=0x1678;eip=0x001abb; 	X(POP(es));	// 43883 pop     es ;~ 1678:1ABB
cs=0x1678;eip=0x001abc; 	X(MOVSW);	// 43885 movsw ;~ 1678:1ABC
cs=0x1678;eip=0x001abd; 	X(MOVSW);	// 43886 movsw ;~ 1678:1ABD
cs=0x1678;eip=0x001abe; 	X(MOVSW);	// 43887 movsw ;~ 1678:1ABE
cs=0x1678;eip=0x001abf; 	X(MOVSW);	// 43888 movsw ;~ 1678:1ABF
cs=0x1678;eip=0x001ac0; 	X(POP(di));	// 43889 pop     di ;~ 1678:1AC0
cs=0x1678;eip=0x001ac1; 	X(POP(si));	// 43890 pop     si ;~ 1678:1AC1
cs=0x1678;eip=0x001ac2; 	X(INC(*(raddr(ss,bp+var_12))));	// 43891 inc     [bp+var_12] ;~ 1678:1AC2
loc_26825:
	// 7315 
cs=0x1678;eip=0x001ac5; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 43894 mov     al, [bp+var_12] ;~ 1678:1AC5
cs=0x1678;eip=0x001ac8; 	T(CBW);	// 43895 cbw ;~ 1678:1AC8
cs=0x1678;eip=0x001ac9; 	T(MOV(si, ax));	// 43896 mov     si, ax ;~ 1678:1AC9
cs=0x1678;eip=0x001acb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 43897 mov     bx, [bp+arg_0] ;~ 1678:1ACB
cs=0x1678;eip=0x001ace; 	T(MOV(al, *(raddr(ds,bx))));	// 43898 mov     al, [bx] ;~ 1678:1ACE
cs=0x1678;eip=0x001ad0; 	T(CBW);	// 43899 cbw ;~ 1678:1AD0
cs=0x1678;eip=0x001ad1; 	T(DEC(ax));	// 43900 dec     ax ;~ 1678:1AD1
cs=0x1678;eip=0x001ad2; 	T(CMP(ax, si));	// 43901 cmp     ax, si ;~ 1678:1AD2
cs=0x1678;eip=0x001ad4; 	J(JG(loc_2680c));	// 43902 jg      short loc_2680C ;~ 1678:1AD4
cs=0x1678;eip=0x001ad6; 	X(DEC(*(raddr(ds,bx))));	// 43903 dec     byte ptr [bx] ;~ 1678:1AD6
cs=0x1678;eip=0x001ad8; 	T(CMP(*(raddr(ss,bp+var_18)), 0));	// 43904 cmp     [bp+var_18], 0 ;~ 1678:1AD8
cs=0x1678;eip=0x001adc; 	J(JZ(loc_2684f));	// 43905 jz      short loc_2684F ;~ 1678:1ADC
cs=0x1678;eip=0x001ade; 	T(ax = bp+var_20);	// 43906 lea     ax, [bp+var_20] ;~ 1678:1ADE
cs=0x1678;eip=0x001ae1; 	X(PUSH(ax));	// 43907 push    ax ;~ 1678:1AE1
cs=0x1678;eip=0x001ae2; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 43908 push    [bp+arg_2] ;~ 1678:1AE2
cs=0x1678;eip=0x001ae5; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 43909 push    [bp+arg_0] ;~ 1678:1AE5
cs=0x1678;eip=0x001ae8; 	X(PUSH(cs));	// 43910 push    cs ;~ 1678:1AE8
cs=0x1678;eip=0x001ae9; 	J(CALL(rectlist_add_rect,0));	// 43911 call    near ptr rectlist_add_rect ;~ 1678:1AE9
cs=0x1678;eip=0x001aec; 	T(ADD(sp, 6));	// 43912 add     sp, 6 ;~ 1678:1AEC
loc_2684f:
	// 7316 
cs=0x1678;eip=0x001aef; 	T(ax = bp+var_10);	// 43915 lea     ax, [bp+var_10] ;~ 1678:1AEF
cs=0x1678;eip=0x001af2; 	X(PUSH(ax));	// 43916 push    ax ;~ 1678:1AF2
cs=0x1678;eip=0x001af3; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 43917 push    [bp+arg_2] ;~ 1678:1AF3
cs=0x1678;eip=0x001af6; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 43918 push    [bp+arg_0] ;~ 1678:1AF6
cs=0x1678;eip=0x001af9; 	X(PUSH(cs));	// 43919 push    cs ;~ 1678:1AF9
cs=0x1678;eip=0x001afa; 	J(CALL(rectlist_add_rect,0));	// 43920 call    near ptr rectlist_add_rect ;~ 1678:1AFA
cs=0x1678;eip=0x001afd; 	T(ADD(sp, 6));	// 43921 add     sp, 6 ;~ 1678:1AFD
cs=0x1678;eip=0x001b00; 	T(CMP(*(raddr(ss,bp+var_22)), 0));	// 43922 cmp     [bp+var_22], 0 ;~ 1678:1B00
cs=0x1678;eip=0x001b04; 	J(JNZ(loc_26869));	// 43923 jnz     short loc_26869 ;~ 1678:1B04
cs=0x1678;eip=0x001b06; 	J(JMP(loc_26957));	// 43924 jmp     loc_26957 ;~ 1678:1B06
loc_26869:
	// 7317 
cs=0x1678;eip=0x001b09; 	T(ax = bp+var_8);	// 43928 lea     ax, [bp+var_8] ;~ 1678:1B09
loc_2686c:
	// 7318 
cs=0x1678;eip=0x001b0c; 	X(PUSH(ax));	// 43931 push    ax ;~ 1678:1B0C
cs=0x1678;eip=0x001b0d; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 43932 push    [bp+arg_2] ;~ 1678:1B0D
cs=0x1678;eip=0x001b10; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 43933 push    [bp+arg_0] ;~ 1678:1B10
cs=0x1678;eip=0x001b13; 	X(PUSH(cs));	// 43934 push    cs ;~ 1678:1B13
cs=0x1678;eip=0x001b14; 	J(CALL(rectlist_add_rect,0));	// 43935 call    near ptr rectlist_add_rect ;~ 1678:1B14
cs=0x1678;eip=0x001b17; 	T(ADD(sp, 6));	// 43936 add     sp, 6 ;~ 1678:1B17
cs=0x1678;eip=0x001b1a; 	X(POP(si));	// 43937 pop     si ;~ 1678:1B1A
cs=0x1678;eip=0x001b1b; 	X(POP(di));	// 43938 pop     di ;~ 1678:1B1B
cs=0x1678;eip=0x001b1c; 	T(MOV(sp, bp));	// 43939 mov     sp, bp ;~ 1678:1B1C
cs=0x1678;eip=0x001b1e; 	X(POP(bp));	// 43940 pop     bp ;~ 1678:1B1E
cs=0x1678;eip=0x001b1f; 	J(RETF(0));	// 43941 retf ;~ 1678:1B1F
loc_26880:
	// 7319 
cs=0x1678;eip=0x001b20; 	X(MOV(*(raddr(ss,bp+var_14)), 0));	// 43945 mov     [bp+var_14], 0 ;~ 1678:1B20
cs=0x1678;eip=0x001b24; 	J(JMP(loc_268bb));	// 43946 jmp     short loc_268BB ;~ 1678:1B24
loc_26886:
	// 7320 
cs=0x1678;eip=0x001b26; 	T(MOV(di, si));	// 43950 mov     di, si ;~ 1678:1B26
cs=0x1678;eip=0x001b28; 	T(MOV(cl, 3));	// 43951 mov     cl, 3 ;~ 1678:1B28
cs=0x1678;eip=0x001b2a; 	T(SHL(di, cl));	// 43952 shl     di, cl ;~ 1678:1B2A
cs=0x1678;eip=0x001b2c; 	T(ADD(di, *(dw*)(raddr(ss,bp+arg_2))));	// 43953 add     di, [bp+arg_2] ;~ 1678:1B2C
cs=0x1678;eip=0x001b2f; 	X(PUSH(si));	// 43954 push    si ;~ 1678:1B2F
cs=0x1678;eip=0x001b30; 	X(PUSH(di));	// 43955 push    di ;~ 1678:1B30
cs=0x1678;eip=0x001b31; 	T(si = di+8);	// 43956 lea     si, [di+8] ;~ 1678:1B31
cs=0x1678;eip=0x001b34; 	X(PUSH(ds));	// 43957 push    ds ;~ 1678:1B34
cs=0x1678;eip=0x001b35; 	X(POP(es));	// 43958 pop     es ;~ 1678:1B35
cs=0x1678;eip=0x001b36; 	X(MOVSW);	// 43959 movsw ;~ 1678:1B36
cs=0x1678;eip=0x001b37; 	X(MOVSW);	// 43960 movsw ;~ 1678:1B37
cs=0x1678;eip=0x001b38; 	X(MOVSW);	// 43961 movsw ;~ 1678:1B38
cs=0x1678;eip=0x001b39; 	X(MOVSW);	// 43962 movsw ;~ 1678:1B39
cs=0x1678;eip=0x001b3a; 	X(POP(di));	// 43963 pop     di ;~ 1678:1B3A
cs=0x1678;eip=0x001b3b; 	X(POP(si));	// 43964 pop     si ;~ 1678:1B3B
cs=0x1678;eip=0x001b3c; 	X(INC(*(raddr(ss,bp+var_12))));	// 43965 inc     [bp+var_12] ;~ 1678:1B3C
loc_2689f:
	// 7321 
cs=0x1678;eip=0x001b3f; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 43968 mov     al, [bp+var_12] ;~ 1678:1B3F
cs=0x1678;eip=0x001b42; 	T(CBW);	// 43969 cbw ;~ 1678:1B42
cs=0x1678;eip=0x001b43; 	T(MOV(si, ax));	// 43970 mov     si, ax ;~ 1678:1B43
cs=0x1678;eip=0x001b45; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 43971 mov     bx, [bp+arg_0] ;~ 1678:1B45
cs=0x1678;eip=0x001b48; 	T(MOV(al, *(raddr(ds,bx))));	// 43972 mov     al, [bx] ;~ 1678:1B48
cs=0x1678;eip=0x001b4a; 	T(CBW);	// 43973 cbw ;~ 1678:1B4A
cs=0x1678;eip=0x001b4b; 	T(DEC(ax));	// 43974 dec     ax ;~ 1678:1B4B
cs=0x1678;eip=0x001b4c; 	T(CMP(ax, si));	// 43975 cmp     ax, si ;~ 1678:1B4C
cs=0x1678;eip=0x001b4e; 	J(JG(loc_26886));	// 43976 jg      short loc_26886 ;~ 1678:1B4E
cs=0x1678;eip=0x001b50; 	X(DEC(*(raddr(ds,bx))));	// 43977 dec     byte ptr [bx] ;~ 1678:1B50
cs=0x1678;eip=0x001b52; 	T(ax = bp+var_10);	// 43978 lea     ax, [bp+var_10] ;~ 1678:1B52
cs=0x1678;eip=0x001b55; 	J(JMP(loc_2686c));	// 43979 jmp     short loc_2686C ;~ 1678:1B55
loc_268b8:
	// 7322 
cs=0x1678;eip=0x001b58; 	X(INC(*(raddr(ss,bp+var_14))));	// 43984 inc     [bp+var_14] ;~ 1678:1B58
loc_268bb:
	// 7323 
cs=0x1678;eip=0x001b5b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 43987 mov     bx, [bp+arg_0] ;~ 1678:1B5B
cs=0x1678;eip=0x001b5e; 	T(MOV(al, *(raddr(ss,bp+var_14))));	// 43988 mov     al, [bp+var_14] ;~ 1678:1B5E
cs=0x1678;eip=0x001b61; 	T(CMP(*(raddr(ds,bx)), al));	// 43989 cmp     [bx], al ;~ 1678:1B61
cs=0x1678;eip=0x001b63; 	J(JLE(loc_26936));	// 43990 jle     short loc_26936 ;~ 1678:1B63
cs=0x1678;eip=0x001b65; 	T(CBW);	// 43991 cbw ;~ 1678:1B65
cs=0x1678;eip=0x001b66; 	T(MOV(cl, 3));	// 43992 mov     cl, 3 ;~ 1678:1B66
cs=0x1678;eip=0x001b68; 	T(SHL(ax, cl));	// 43993 shl     ax, cl ;~ 1678:1B68
cs=0x1678;eip=0x001b6a; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 43994 add     ax, [bp+arg_2] ;~ 1678:1B6A
cs=0x1678;eip=0x001b6d; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 43995 mov     [bp+var_16], ax ;~ 1678:1B6D
cs=0x1678;eip=0x001b70; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 43996 push    [bp+arg_4] ;~ 1678:1B70
cs=0x1678;eip=0x001b73; 	X(PUSH(ax));	// 43997 push    ax ;~ 1678:1B73
cs=0x1678;eip=0x001b74; 	X(PUSH(cs));	// 43998 push    cs ;~ 1678:1B74
cs=0x1678;eip=0x001b75; 	J(CALL(rect_is_adjacent,0));	// 43999 call    near ptr rect_is_adjacent ;~ 1678:1B75
cs=0x1678;eip=0x001b78; 	T(ADD(sp, 4));	// 44000 add     sp, 4 ;~ 1678:1B78
cs=0x1678;eip=0x001b7b; 	T(OR(al, al));	// 44001 or      al, al ;~ 1678:1B7B
cs=0x1678;eip=0x001b7d; 	J(JZ(loc_268b8));	// 44002 jz      short loc_268B8 ;~ 1678:1B7D
cs=0x1678;eip=0x001b7f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_16))));	// 44003 mov     bx, [bp+var_16] ;~ 1678:1B7F
cs=0x1678;eip=0x001b82; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 44004 mov     ax, [bx+0] ;~ 1678:1B82
cs=0x1678;eip=0x001b84; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 44005 mov     bx, [bp+arg_4] ;~ 1678:1B84
cs=0x1678;eip=0x001b87; 	T(CMP(ax, *(dw*)(raddr(ds,bx+0))));	// 44006 cmp     ax, [bx+0] ;~ 1678:1B87
cs=0x1678;eip=0x001b89; 	J(JLE(loc_268ed));	// 44007 jle     short loc_268ED ;~ 1678:1B89
cs=0x1678;eip=0x001b8b; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 44008 mov     ax, [bx+0] ;~ 1678:1B8B
loc_268ed:
	// 7324 
cs=0x1678;eip=0x001b8d; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 44011 mov     [bp+var_10], ax ;~ 1678:1B8D
cs=0x1678;eip=0x001b90; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_16))));	// 44012 mov     bx, [bp+var_16] ;~ 1678:1B90
cs=0x1678;eip=0x001b93; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 44013 mov     ax, [bx+2] ;~ 1678:1B93
cs=0x1678;eip=0x001b96; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 44014 mov     bx, [bp+arg_4] ;~ 1678:1B96
cs=0x1678;eip=0x001b99; 	T(CMP(ax, *(dw*)(raddr(ds,bx+2))));	// 44015 cmp     ax, [bx+2] ;~ 1678:1B99
cs=0x1678;eip=0x001b9c; 	J(JGE(loc_26901));	// 44016 jge     short loc_26901 ;~ 1678:1B9C
cs=0x1678;eip=0x001b9e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 44017 mov     ax, [bx+2] ;~ 1678:1B9E
loc_26901:
	// 7325 
cs=0x1678;eip=0x001ba1; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 44020 mov     [bp+var_E], ax ;~ 1678:1BA1
cs=0x1678;eip=0x001ba4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_16))));	// 44021 mov     bx, [bp+var_16] ;~ 1678:1BA4
cs=0x1678;eip=0x001ba7; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 44022 mov     ax, [bx+4] ;~ 1678:1BA7
cs=0x1678;eip=0x001baa; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 44023 mov     bx, [bp+arg_4] ;~ 1678:1BAA
cs=0x1678;eip=0x001bad; 	T(CMP(ax, *(dw*)(raddr(ds,bx+4))));	// 44024 cmp     ax, [bx+4] ;~ 1678:1BAD
cs=0x1678;eip=0x001bb0; 	J(JLE(loc_26915));	// 44025 jle     short loc_26915 ;~ 1678:1BB0
cs=0x1678;eip=0x001bb2; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 44026 mov     ax, [bx+4] ;~ 1678:1BB2
loc_26915:
	// 7326 
cs=0x1678;eip=0x001bb5; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 44029 mov     [bp+var_C], ax ;~ 1678:1BB5
cs=0x1678;eip=0x001bb8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_16))));	// 44030 mov     bx, [bp+var_16] ;~ 1678:1BB8
cs=0x1678;eip=0x001bbb; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 44031 mov     ax, [bx+6] ;~ 1678:1BBB
cs=0x1678;eip=0x001bbe; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 44032 mov     bx, [bp+arg_4] ;~ 1678:1BBE
cs=0x1678;eip=0x001bc1; 	T(CMP(ax, *(dw*)(raddr(ds,bx+6))));	// 44033 cmp     ax, [bx+6] ;~ 1678:1BC1
cs=0x1678;eip=0x001bc4; 	J(JGE(loc_26929));	// 44034 jge     short loc_26929 ;~ 1678:1BC4
cs=0x1678;eip=0x001bc6; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 44035 mov     ax, [bx+6] ;~ 1678:1BC6
loc_26929:
	// 7327 
cs=0x1678;eip=0x001bc9; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 44038 mov     [bp+var_A], ax ;~ 1678:1BC9
cs=0x1678;eip=0x001bcc; 	T(MOV(al, *(raddr(ss,bp+var_14))));	// 44039 mov     al, [bp+var_14] ;~ 1678:1BCC
cs=0x1678;eip=0x001bcf; 	X(MOV(*(raddr(ss,bp+var_12)), al));	// 44040 mov     [bp+var_12], al ;~ 1678:1BCF
cs=0x1678;eip=0x001bd2; 	J(JMP(loc_2689f));	// 44041 jmp     loc_2689F ;~ 1678:1BD2
loc_26936:
	// 7328 
cs=0x1678;eip=0x001bd6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 44046 mov     bx, [bp+arg_0] ;~ 1678:1BD6
cs=0x1678;eip=0x001bd9; 	T(MOV(al, *(raddr(ds,bx))));	// 44047 mov     al, [bx] ;~ 1678:1BD9
cs=0x1678;eip=0x001bdb; 	T(CBW);	// 44048 cbw ;~ 1678:1BDB
cs=0x1678;eip=0x001bdc; 	T(MOV(bx, ax));	// 44049 mov     bx, ax ;~ 1678:1BDC
cs=0x1678;eip=0x001bde; 	T(MOV(cl, 3));	// 44050 mov     cl, 3 ;~ 1678:1BDE
cs=0x1678;eip=0x001be0; 	T(SHL(bx, cl));	// 44051 shl     bx, cl ;~ 1678:1BE0
cs=0x1678;eip=0x001be2; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 44052 mov     si, [bp+arg_2] ;~ 1678:1BE2
cs=0x1678;eip=0x001be5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 44053 mov     ax, [bp+arg_4] ;~ 1678:1BE5
cs=0x1678;eip=0x001be8; 	T(di = bx+si);	// 44054 lea     di, [bx+si] ;~ 1678:1BE8
cs=0x1678;eip=0x001bea; 	T(MOV(si, ax));	// 44055 mov     si, ax ;~ 1678:1BEA
cs=0x1678;eip=0x001bec; 	X(PUSH(ds));	// 44056 push    ds ;~ 1678:1BEC
cs=0x1678;eip=0x001bed; 	X(POP(es));	// 44057 pop     es ;~ 1678:1BED
cs=0x1678;eip=0x001bee; 	X(MOVSW);	// 44058 movsw ;~ 1678:1BEE
cs=0x1678;eip=0x001bef; 	X(MOVSW);	// 44059 movsw ;~ 1678:1BEF
cs=0x1678;eip=0x001bf0; 	X(MOVSW);	// 44060 movsw ;~ 1678:1BF0
cs=0x1678;eip=0x001bf1; 	X(MOVSW);	// 44061 movsw ;~ 1678:1BF1
cs=0x1678;eip=0x001bf2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 44062 mov     bx, [bp+arg_0] ;~ 1678:1BF2
cs=0x1678;eip=0x001bf5; 	X(INC(*(raddr(ds,bx))));	// 44063 inc     byte ptr [bx] ;~ 1678:1BF5
loc_26957:
	// 7329 
cs=0x1678;eip=0x001bf7; 	X(POP(si));	// 44067 pop     si ;~ 1678:1BF7
cs=0x1678;eip=0x001bf8; 	X(POP(di));	// 44068 pop     di ;~ 1678:1BF8
cs=0x1678;eip=0x001bf9; 	T(MOV(sp, bp));	// 44069 mov     sp, bp ;~ 1678:1BF9
cs=0x1678;eip=0x001bfb; 	X(POP(bp));	// 44070 pop     bp ;~ 1678:1BFB
cs=0x1678;eip=0x001bfc; 	J(RETF(0));	// 44071 retf ;~ 1678:1BFC

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_26693: 	goto loc_26693;
        case m2c::kloc_2669a: 	goto loc_2669a;
        case m2c::kloc_266b3: 	goto loc_266b3;
        case m2c::kloc_266c6: 	goto loc_266c6;
        case m2c::kloc_266c9: 	goto loc_266c9;
        case m2c::kloc_266d6: 	goto loc_266d6;
        case m2c::kloc_26704: 	goto loc_26704;
        case m2c::kloc_2671e: 	goto loc_2671e;
        case m2c::kloc_26753: 	goto loc_26753;
        case m2c::kloc_2675a: 	goto loc_2675a;
        case m2c::kloc_26780: 	goto loc_26780;
        case m2c::kloc_26784: 	goto loc_26784;
        case m2c::kloc_267ae: 	goto loc_267ae;
        case m2c::kloc_267b4: 	goto loc_267b4;
        case m2c::kloc_267da: 	goto loc_267da;
        case m2c::kloc_267de: 	goto loc_267de;
        case m2c::kloc_267ec: 	goto loc_267ec;
        case m2c::kloc_26800: 	goto loc_26800;
        case m2c::kloc_2680c: 	goto loc_2680c;
        case m2c::kloc_26825: 	goto loc_26825;
        case m2c::kloc_2684f: 	goto loc_2684f;
        case m2c::kloc_26869: 	goto loc_26869;
        case m2c::kloc_2686c: 	goto loc_2686c;
        case m2c::kloc_26880: 	goto loc_26880;
        case m2c::kloc_26886: 	goto loc_26886;
        case m2c::kloc_2689f: 	goto loc_2689f;
        case m2c::kloc_268b8: 	goto loc_268b8;
        case m2c::kloc_268bb: 	goto loc_268bb;
        case m2c::kloc_268ed: 	goto loc_268ed;
        case m2c::kloc_26901: 	goto loc_26901;
        case m2c::kloc_26915: 	goto loc_26915;
        case m2c::kloc_26929: 	goto loc_26929;
        case m2c::kloc_26936: 	goto loc_26936;
        case m2c::kloc_26957: 	goto loc_26957;
        case m2c::krectlist_add_rect: 	goto rectlist_add_rect;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool rect_is_overlapping(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    rect_is_overlapping:
    _begin:
#undef arg_0
#define arg_0 6
	// 44083 arg_0           = word ptr  6 ;~ 1678:1BFE
#undef arg_2
#define arg_2 8
	// 44084 arg_2           = word ptr  8 ;~ 1678:1BFE
cs=0x1678;eip=0x001bfe; 	X(PUSH(bp));	// 44086 push    bp ;~ 1678:1BFE
cs=0x1678;eip=0x001bff; 	T(MOV(bp, sp));	// 44087 mov     bp, sp ;~ 1678:1BFF
cs=0x1678;eip=0x001c01; 	X(PUSH(si));	// 44088 push    si ;~ 1678:1C01
cs=0x1678;eip=0x001c02; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 44089 mov     bx, [bp+arg_0] ;~ 1678:1C02
cs=0x1678;eip=0x001c05; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 44090 mov     si, [bp+arg_2] ;~ 1678:1C05
cs=0x1678;eip=0x001c08; 	T(MOV(ax, *(dw*)(raddr(ds,si+0))));	// 44091 mov     ax, [si+0] ;~ 1678:1C08
cs=0x1678;eip=0x001c0a; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 44092 cmp     [bx+2], ax ;~ 1678:1C0A
cs=0x1678;eip=0x001c0d; 	J(JG(loc_26974));	// 44093 jg      short loc_26974 ;~ 1678:1C0D
loc_2696f:
	// 7330 
cs=0x1678;eip=0x001c0f; 	T(SUB(ax, ax));	// 44097 sub     ax, ax ;~ 1678:1C0F
cs=0x1678;eip=0x001c11; 	X(POP(si));	// 44098 pop     si ;~ 1678:1C11
cs=0x1678;eip=0x001c12; 	X(POP(bp));	// 44099 pop     bp ;~ 1678:1C12
cs=0x1678;eip=0x001c13; 	J(RETF(0));	// 44100 retf ;~ 1678:1C13
loc_26974:
	// 7331 
cs=0x1678;eip=0x001c14; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 44104 mov     bx, [bp+arg_2] ;~ 1678:1C14
cs=0x1678;eip=0x001c17; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 44105 mov     si, [bp+arg_0] ;~ 1678:1C17
cs=0x1678;eip=0x001c1a; 	T(MOV(ax, *(dw*)(raddr(ds,si+0))));	// 44106 mov     ax, [si+0] ;~ 1678:1C1A
cs=0x1678;eip=0x001c1c; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 44107 cmp     [bx+2], ax ;~ 1678:1C1C
cs=0x1678;eip=0x001c1f; 	J(JLE(loc_2696f));	// 44108 jle     short loc_2696F ;~ 1678:1C1F
cs=0x1678;eip=0x001c21; 	T(MOV(bx, si));	// 44109 mov     bx, si ;~ 1678:1C21
cs=0x1678;eip=0x001c23; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 44110 mov     si, [bp+arg_2] ;~ 1678:1C23
cs=0x1678;eip=0x001c26; 	T(MOV(ax, *(dw*)(raddr(ds,si+6))));	// 44111 mov     ax, [si+6] ;~ 1678:1C26
cs=0x1678;eip=0x001c29; 	T(CMP(*(dw*)(raddr(ds,bx+4)), ax));	// 44112 cmp     [bx+4], ax ;~ 1678:1C29
cs=0x1678;eip=0x001c2c; 	J(JGE(loc_2696f));	// 44113 jge     short loc_2696F ;~ 1678:1C2C
cs=0x1678;eip=0x001c2e; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 44114 mov     ax, [si+4] ;~ 1678:1C2E
cs=0x1678;eip=0x001c31; 	T(CMP(*(dw*)(raddr(ds,bx+6)), ax));	// 44115 cmp     [bx+6], ax ;~ 1678:1C31
cs=0x1678;eip=0x001c34; 	J(JLE(loc_2696f));	// 44116 jle     short loc_2696F ;~ 1678:1C34
cs=0x1678;eip=0x001c36; 	T(MOV(ax, 1));	// 44117 mov     ax, 1 ;~ 1678:1C36
cs=0x1678;eip=0x001c39; 	X(POP(si));	// 44118 pop     si ;~ 1678:1C39
cs=0x1678;eip=0x001c3a; 	X(POP(bp));	// 44119 pop     bp ;~ 1678:1C3A
cs=0x1678;eip=0x001c3b; 	J(RETF(0));	// 44120 retf ;~ 1678:1C3B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_2696f: 	goto loc_2696f;
        case m2c::kloc_26974: 	goto loc_26974;
        case m2c::krect_is_overlapping: 	goto rect_is_overlapping;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool rect_is_inside(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    rect_is_inside:
    _begin:
#undef arg_0
#define arg_0 6
	// 44131 arg_0           = word ptr  6 ;~ 1678:1C3C
#undef arg_2
#define arg_2 8
	// 44132 arg_2           = word ptr  8 ;~ 1678:1C3C
cs=0x1678;eip=0x001c3c; 	X(PUSH(bp));	// 44134 push    bp ;~ 1678:1C3C
cs=0x1678;eip=0x001c3d; 	T(MOV(bp, sp));	// 44135 mov     bp, sp ;~ 1678:1C3D
cs=0x1678;eip=0x001c3f; 	X(PUSH(si));	// 44136 push    si ;~ 1678:1C3F
cs=0x1678;eip=0x001c40; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 44137 mov     bx, [bp+arg_0] ;~ 1678:1C40
cs=0x1678;eip=0x001c43; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 44138 mov     si, [bp+arg_2] ;~ 1678:1C43
cs=0x1678;eip=0x001c46; 	T(MOV(ax, *(dw*)(raddr(ds,si+2))));	// 44139 mov     ax, [si+2] ;~ 1678:1C46
cs=0x1678;eip=0x001c49; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 44140 cmp     [bx+2], ax ;~ 1678:1C49
cs=0x1678;eip=0x001c4c; 	J(JG(loc_269ca));	// 44141 jg      short loc_269CA ;~ 1678:1C4C
cs=0x1678;eip=0x001c4e; 	T(MOV(ax, *(dw*)(raddr(ds,si+0))));	// 44142 mov     ax, [si+0] ;~ 1678:1C4E
cs=0x1678;eip=0x001c50; 	T(CMP(*(dw*)(raddr(ds,bx+0)), ax));	// 44143 cmp     [bx+0], ax ;~ 1678:1C50
cs=0x1678;eip=0x001c52; 	J(JL(loc_269ca));	// 44144 jl      short loc_269CA ;~ 1678:1C52
cs=0x1678;eip=0x001c54; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 44145 mov     ax, [si+4] ;~ 1678:1C54
cs=0x1678;eip=0x001c57; 	T(CMP(*(dw*)(raddr(ds,bx+4)), ax));	// 44146 cmp     [bx+4], ax ;~ 1678:1C57
cs=0x1678;eip=0x001c5a; 	J(JL(loc_269ca));	// 44147 jl      short loc_269CA ;~ 1678:1C5A
cs=0x1678;eip=0x001c5c; 	T(MOV(ax, *(dw*)(raddr(ds,si+6))));	// 44148 mov     ax, [si+6] ;~ 1678:1C5C
cs=0x1678;eip=0x001c5f; 	T(CMP(*(dw*)(raddr(ds,bx+6)), ax));	// 44149 cmp     [bx+6], ax ;~ 1678:1C5F
cs=0x1678;eip=0x001c62; 	J(JG(loc_269ca));	// 44150 jg      short loc_269CA ;~ 1678:1C62
cs=0x1678;eip=0x001c64; 	T(MOV(ax, 1));	// 44151 mov     ax, 1 ;~ 1678:1C64
cs=0x1678;eip=0x001c67; 	X(POP(si));	// 44152 pop     si ;~ 1678:1C67
cs=0x1678;eip=0x001c68; 	X(POP(bp));	// 44153 pop     bp ;~ 1678:1C68
cs=0x1678;eip=0x001c69; 	J(RETF(0));	// 44154 retf ;~ 1678:1C69
loc_269ca:
	// 7332 
cs=0x1678;eip=0x001c6a; 	T(SUB(ax, ax));	// 44159 sub     ax, ax ;~ 1678:1C6A
cs=0x1678;eip=0x001c6c; 	X(POP(si));	// 44160 pop     si ;~ 1678:1C6C
cs=0x1678;eip=0x001c6d; 	X(POP(bp));	// 44161 pop     bp ;~ 1678:1C6D
cs=0x1678;eip=0x001c6e; 	J(RETF(0));	// 44162 retf ;~ 1678:1C6E

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_269ca: 	goto loc_269ca;
        case m2c::krect_is_inside: 	goto rect_is_inside;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool rect_is_adjacent(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    rect_is_adjacent:
    _begin:
#undef arg_0
#define arg_0 6
	// 44174 arg_0           = word ptr  6 ;~ 1678:1C70
#undef arg_2
#define arg_2 8
	// 44175 arg_2           = word ptr  8 ;~ 1678:1C70
cs=0x1678;eip=0x001c70; 	X(PUSH(bp));	// 44177 push    bp ;~ 1678:1C70
cs=0x1678;eip=0x001c71; 	T(MOV(bp, sp));	// 44178 mov     bp, sp ;~ 1678:1C71
cs=0x1678;eip=0x001c73; 	X(PUSH(si));	// 44179 push    si ;~ 1678:1C73
cs=0x1678;eip=0x001c74; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 44180 mov     bx, [bp+arg_0] ;~ 1678:1C74
cs=0x1678;eip=0x001c77; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 44181 mov     si, [bp+arg_2] ;~ 1678:1C77
cs=0x1678;eip=0x001c7a; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 44182 mov     ax, [si+4] ;~ 1678:1C7A
cs=0x1678;eip=0x001c7d; 	T(CMP(*(dw*)(raddr(ds,bx+6)), ax));	// 44183 cmp     [bx+6], ax ;~ 1678:1C7D
cs=0x1678;eip=0x001c80; 	J(JNZ(loc_26a02));	// 44184 jnz     short loc_26A02 ;~ 1678:1C80
cs=0x1678;eip=0x001c82; 	T(MOV(ax, *(dw*)(raddr(ds,si+0))));	// 44185 mov     ax, [si+0] ;~ 1678:1C82
cs=0x1678;eip=0x001c84; 	T(CMP(*(dw*)(raddr(ds,bx+0)), ax));	// 44186 cmp     [bx+0], ax ;~ 1678:1C84
cs=0x1678;eip=0x001c86; 	J(JZ(loc_269ee));	// 44187 jz      short loc_269EE ;~ 1678:1C86
loc_269e8:
	// 7333 
cs=0x1678;eip=0x001c88; 	T(SUB(ax, ax));	// 44191 sub     ax, ax ;~ 1678:1C88
cs=0x1678;eip=0x001c8a; 	X(POP(si));	// 44192 pop     si ;~ 1678:1C8A
cs=0x1678;eip=0x001c8b; 	X(POP(bp));	// 44193 pop     bp ;~ 1678:1C8B
cs=0x1678;eip=0x001c8c; 	J(RETF(0));	// 44194 retf ;~ 1678:1C8C
loc_269ee:
	// 7334 
cs=0x1678;eip=0x001c8e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 44199 mov     bx, [bp+arg_0] ;~ 1678:1C8E
cs=0x1678;eip=0x001c91; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 44200 mov     si, [bp+arg_2] ;~ 1678:1C91
cs=0x1678;eip=0x001c94; 	T(MOV(ax, *(dw*)(raddr(ds,si+2))));	// 44201 mov     ax, [si+2] ;~ 1678:1C94
cs=0x1678;eip=0x001c97; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 44202 cmp     [bx+2], ax ;~ 1678:1C97
cs=0x1678;eip=0x001c9a; 	J(JNZ(loc_269e8));	// 44203 jnz     short loc_269E8 ;~ 1678:1C9A
loc_269fc:
	// 7335 
cs=0x1678;eip=0x001c9c; 	T(MOV(ax, 1));	// 44206 mov     ax, 1 ;~ 1678:1C9C
cs=0x1678;eip=0x001c9f; 	X(POP(si));	// 44207 pop     si ;~ 1678:1C9F
cs=0x1678;eip=0x001ca0; 	X(POP(bp));	// 44208 pop     bp ;~ 1678:1CA0
cs=0x1678;eip=0x001ca1; 	J(RETF(0));	// 44209 retf ;~ 1678:1CA1
loc_26a02:
	// 7336 
cs=0x1678;eip=0x001ca2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 44213 mov     bx, [bp+arg_0] ;~ 1678:1CA2
cs=0x1678;eip=0x001ca5; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 44214 mov     si, [bp+arg_2] ;~ 1678:1CA5
cs=0x1678;eip=0x001ca8; 	T(MOV(ax, *(dw*)(raddr(ds,si+6))));	// 44215 mov     ax, [si+6] ;~ 1678:1CA8
cs=0x1678;eip=0x001cab; 	T(CMP(*(dw*)(raddr(ds,bx+4)), ax));	// 44216 cmp     [bx+4], ax ;~ 1678:1CAB
cs=0x1678;eip=0x001cae; 	J(JNZ(loc_26a20));	// 44217 jnz     short loc_26A20 ;~ 1678:1CAE
cs=0x1678;eip=0x001cb0; 	T(MOV(ax, *(dw*)(raddr(ds,si+0))));	// 44218 mov     ax, [si+0] ;~ 1678:1CB0
cs=0x1678;eip=0x001cb2; 	T(CMP(*(dw*)(raddr(ds,bx+0)), ax));	// 44219 cmp     [bx+0], ax ;~ 1678:1CB2
cs=0x1678;eip=0x001cb4; 	J(JNZ(loc_269e8));	// 44220 jnz     short loc_269E8 ;~ 1678:1CB4
cs=0x1678;eip=0x001cb6; 	T(MOV(ax, *(dw*)(raddr(ds,si+2))));	// 44221 mov     ax, [si+2] ;~ 1678:1CB6
cs=0x1678;eip=0x001cb9; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 44222 cmp     [bx+2], ax ;~ 1678:1CB9
loc_26a1c:
	// 7337 
cs=0x1678;eip=0x001cbc; 	J(JZ(loc_269fc));	// 44225 jz      short loc_269FC ;~ 1678:1CBC
cs=0x1678;eip=0x001cbe; 	J(JMP(loc_269e8));	// 44226 jmp     short loc_269E8 ;~ 1678:1CBE
loc_26a20:
	// 7338 
cs=0x1678;eip=0x001cc0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 44230 mov     bx, [bp+arg_0] ;~ 1678:1CC0
cs=0x1678;eip=0x001cc3; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 44231 mov     si, [bp+arg_2] ;~ 1678:1CC3
cs=0x1678;eip=0x001cc6; 	T(MOV(ax, *(dw*)(raddr(ds,si+0))));	// 44232 mov     ax, [si+0] ;~ 1678:1CC6
cs=0x1678;eip=0x001cc8; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 44233 cmp     [bx+2], ax ;~ 1678:1CC8
cs=0x1678;eip=0x001ccb; 	J(JNZ(loc_26a3e));	// 44234 jnz     short loc_26A3E ;~ 1678:1CCB
loc_26a2d:
	// 7339 
cs=0x1678;eip=0x001ccd; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 44237 mov     ax, [si+4] ;~ 1678:1CCD
cs=0x1678;eip=0x001cd0; 	T(CMP(*(dw*)(raddr(ds,bx+4)), ax));	// 44238 cmp     [bx+4], ax ;~ 1678:1CD0
cs=0x1678;eip=0x001cd3; 	J(JNZ(loc_269e8));	// 44239 jnz     short loc_269E8 ;~ 1678:1CD3
cs=0x1678;eip=0x001cd5; 	T(MOV(ax, *(dw*)(raddr(ds,si+6))));	// 44240 mov     ax, [si+6] ;~ 1678:1CD5
cs=0x1678;eip=0x001cd8; 	T(CMP(*(dw*)(raddr(ds,bx+6)), ax));	// 44241 cmp     [bx+6], ax ;~ 1678:1CD8
cs=0x1678;eip=0x001cdb; 	J(JMP(loc_26a1c));	// 44242 jmp     short loc_26A1C ;~ 1678:1CDB
loc_26a3e:
	// 7340 
cs=0x1678;eip=0x001cde; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 44247 mov     bx, [bp+arg_2] ;~ 1678:1CDE
cs=0x1678;eip=0x001ce1; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 44248 mov     si, [bp+arg_0] ;~ 1678:1CE1
cs=0x1678;eip=0x001ce4; 	T(MOV(ax, *(dw*)(raddr(ds,si+0))));	// 44249 mov     ax, [si+0] ;~ 1678:1CE4
cs=0x1678;eip=0x001ce6; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 44250 cmp     [bx+2], ax ;~ 1678:1CE6
cs=0x1678;eip=0x001ce9; 	J(JNZ(loc_269e8));	// 44251 jnz     short loc_269E8 ;~ 1678:1CE9
cs=0x1678;eip=0x001ceb; 	T(MOV(bx, si));	// 44252 mov     bx, si ;~ 1678:1CEB
cs=0x1678;eip=0x001ced; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 44253 mov     si, [bp+arg_2] ;~ 1678:1CED
cs=0x1678;eip=0x001cf0; 	J(JMP(loc_26a2d));	// 44254 jmp     short loc_26A2D ;~ 1678:1CF0

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_269e8: 	goto loc_269e8;
        case m2c::kloc_269ee: 	goto loc_269ee;
        case m2c::kloc_269fc: 	goto loc_269fc;
        case m2c::kloc_26a02: 	goto loc_26a02;
        case m2c::kloc_26a1c: 	goto loc_26a1c;
        case m2c::kloc_26a20: 	goto loc_26a20;
        case m2c::kloc_26a2d: 	goto loc_26a2d;
        case m2c::kloc_26a3e: 	goto loc_26a3e;
        case m2c::krect_is_adjacent: 	goto rect_is_adjacent;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool rectlist_add_rects(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    rectlist_add_rects:
    _begin:
#undef var_1c
#define var_1c -0x1C
	// 44265 var_1C          = word ptr -1Ch ;~ 1678:1CF2
#undef var_1a
#define var_1a -0x1A
	// 44266 var_1A          = word ptr -1Ah ;~ 1678:1CF2
#undef var_18
#define var_18 -0x18
	// 44267 var_18          = byte ptr -18h ;~ 1678:1CF2
#undef var_16
#define var_16 -0x16
	// 44268 var_16          = byte ptr -16h ;~ 1678:1CF2
#undef var_14
#define var_14 -0x14
	// 44269 var_14          = byte ptr -14h ;~ 1678:1CF2
#undef var_c
#define var_c -0x0C
	// 44270 var_C           = byte ptr -0Ch ;~ 1678:1CF2
#undef var_4
#define var_4 -4
	// 44271 var_4           = word ptr -4 ;~ 1678:1CF2
#undef var_2
#define var_2 -2
	// 44272 var_2           = byte ptr -2 ;~ 1678:1CF2
#undef arg_0
#define arg_0 6
	// 44273 arg_0           = byte ptr  6 ;~ 1678:1CF2
#undef arg_2
#define arg_2 8
	// 44274 arg_2           = word ptr  8 ;~ 1678:1CF2
#undef arg_4
#define arg_4 0x0A
	// 44275 arg_4           = word ptr  0Ah ;~ 1678:1CF2
#undef arg_6
#define arg_6 0x0C
	// 44276 arg_6           = word ptr  0Ch ;~ 1678:1CF2
#undef arg_8
#define arg_8 0x0E
	// 44277 arg_8           = word ptr  0Eh ;~ 1678:1CF2
#undef arg_a
#define arg_a 0x10
	// 44278 arg_A           = word ptr  10h ;~ 1678:1CF2
#undef arg_c
#define arg_c 0x12
	// 44279 arg_C           = word ptr  12h ;~ 1678:1CF2
cs=0x1678;eip=0x001cf2; 	X(PUSH(bp));	// 44281 push    bp ;~ 1678:1CF2
cs=0x1678;eip=0x001cf3; 	T(MOV(bp, sp));	// 44282 mov     bp, sp ;~ 1678:1CF3
cs=0x1678;eip=0x001cf5; 	T(SUB(sp, 0x1C));	// 44283 sub     sp, 1Ch ;~ 1678:1CF5
cs=0x1678;eip=0x001cf8; 	X(PUSH(di));	// 44284 push    di ;~ 1678:1CF8
cs=0x1678;eip=0x001cf9; 	X(PUSH(si));	// 44285 push    si ;~ 1678:1CF9
cs=0x1678;eip=0x001cfa; 	X(MOV(*(raddr(ss,bp+var_18)), 0));	// 44286 mov     [bp+var_18], 0 ;~ 1678:1CFA
cs=0x1678;eip=0x001cfe; 	J(JMP(loc_26ac0));	// 44287 jmp     short loc_26AC0 ;~ 1678:1CFE
loc_26a60:
	// 7341 
cs=0x1678;eip=0x001d00; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 44292 mov     ax, [bp+var_1A] ;~ 1678:1D00
loc_26a63:
	// 7342 
cs=0x1678;eip=0x001d03; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 44296 mov     [bp+var_4], ax ;~ 1678:1D03
cs=0x1678;eip=0x001d06; 	X(MOV(*(raddr(ss,bp+var_2)), 1));	// 44297 mov     [bp+var_2], 1 ;~ 1678:1D06
cs=0x1678;eip=0x001d0a; 	J(JMP(loc_26a86));	// 44298 jmp     short loc_26A86 ;~ 1678:1D0A
loc_26a6c:
	// 7343 
cs=0x1678;eip=0x001d0c; 	T(TEST(*(raddr(ss,bp+var_16)), 2));	// 44303 test    [bp+var_16], 2 ;~ 1678:1D0C
cs=0x1678;eip=0x001d10; 	J(JZ(loc_26a82));	// 44304 jz      short loc_26A82 ;~ 1678:1D10
cs=0x1678;eip=0x001d12; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_1c))));	// 44305 mov     bx, [bp+var_1C] ;~ 1678:1D12
cs=0x1678;eip=0x001d15; 	T(MOV(si, bx));	// 44306 mov     si, bx ;~ 1678:1D15
cs=0x1678;eip=0x001d17; 	T(MOV(ax, *(dw*)(raddr(ds,si+0))));	// 44307 mov     ax, [si+0] ;~ 1678:1D17
cs=0x1678;eip=0x001d19; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 44308 cmp     [bx+2], ax ;~ 1678:1D19
cs=0x1678;eip=0x001d1c; 	J(JLE(loc_26a82));	// 44309 jle     short loc_26A82 ;~ 1678:1D1C
cs=0x1678;eip=0x001d1e; 	T(MOV(ax, bx));	// 44310 mov     ax, bx ;~ 1678:1D1E
cs=0x1678;eip=0x001d20; 	J(JMP(loc_26a63));	// 44311 jmp     short loc_26A63 ;~ 1678:1D20
loc_26a82:
	// 7344 
cs=0x1678;eip=0x001d22; 	X(MOV(*(raddr(ss,bp+var_2)), 0));	// 44316 mov     [bp+var_2], 0 ;~ 1678:1D22
loc_26a86:
	// 7345 
cs=0x1678;eip=0x001d26; 	T(CMP(*(raddr(ss,bp+var_2)), 0));	// 44319 cmp     [bp+var_2], 0 ;~ 1678:1D26
cs=0x1678;eip=0x001d2a; 	J(JZ(loc_26abd));	// 44320 jz      short loc_26ABD ;~ 1678:1D2A
cs=0x1678;eip=0x001d2c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 44321 mov     ax, [bp+var_4] ;~ 1678:1D2C
cs=0x1678;eip=0x001d2f; 	T(di = bp+var_14);	// 44322 lea     di, [bp+var_14] ;~ 1678:1D2F
cs=0x1678;eip=0x001d32; 	T(MOV(si, ax));	// 44323 mov     si, ax ;~ 1678:1D32
cs=0x1678;eip=0x001d34; 	X(PUSH(ss));	// 44324 push    ss ;~ 1678:1D34
cs=0x1678;eip=0x001d35; 	X(POP(es));	// 44325 pop     es ;~ 1678:1D35
cs=0x1678;eip=0x001d36; 	X(MOVSW);	// 44327 movsw ;~ 1678:1D36
cs=0x1678;eip=0x001d37; 	X(MOVSW);	// 44328 movsw ;~ 1678:1D37
cs=0x1678;eip=0x001d38; 	X(MOVSW);	// 44329 movsw ;~ 1678:1D38
cs=0x1678;eip=0x001d39; 	X(MOVSW);	// 44330 movsw ;~ 1678:1D39
cs=0x1678;eip=0x001d3a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 44331 push    [bp+arg_8] ;~ 1678:1D3A
cs=0x1678;eip=0x001d3d; 	T(ax = bp+var_14);	// 44332 lea     ax, [bp+var_14] ;~ 1678:1D3D
cs=0x1678;eip=0x001d40; 	X(PUSH(ax));	// 44333 push    ax ;~ 1678:1D40
cs=0x1678;eip=0x001d41; 	X(PUSH(cs));	// 44334 push    cs ;~ 1678:1D41
cs=0x1678;eip=0x001d42; 	J(CALL(rect_intersect,0));	// 44335 call    near ptr rect_intersect ;~ 1678:1D42
cs=0x1678;eip=0x001d45; 	T(ADD(sp, 4));	// 44336 add     sp, 4 ;~ 1678:1D45
cs=0x1678;eip=0x001d48; 	T(OR(al, al));	// 44337 or      al, al ;~ 1678:1D48
cs=0x1678;eip=0x001d4a; 	J(JNZ(loc_26abd));	// 44338 jnz     short loc_26ABD ;~ 1678:1D4A
cs=0x1678;eip=0x001d4c; 	T(ax = bp+var_14);	// 44339 lea     ax, [bp+var_14] ;~ 1678:1D4C
cs=0x1678;eip=0x001d4f; 	X(PUSH(ax));	// 44340 push    ax ;~ 1678:1D4F
cs=0x1678;eip=0x001d50; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 44341 push    [bp+arg_C] ;~ 1678:1D50
cs=0x1678;eip=0x001d53; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 44342 push    [bp+arg_A] ;~ 1678:1D53
cs=0x1678;eip=0x001d56; 	X(PUSH(cs));	// 44343 push    cs ;~ 1678:1D56
cs=0x1678;eip=0x001d57; 	J(CALL(rectlist_add_rect,0));	// 44344 call    near ptr rectlist_add_rect ;~ 1678:1D57
cs=0x1678;eip=0x001d5a; 	T(ADD(sp, 6));	// 44345 add     sp, 6 ;~ 1678:1D5A
loc_26abd:
	// 7346 
cs=0x1678;eip=0x001d5d; 	X(INC(*(raddr(ss,bp+var_18))));	// 44349 inc     [bp+var_18] ;~ 1678:1D5D
loc_26ac0:
	// 7347 
cs=0x1678;eip=0x001d60; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 44352 mov     al, [bp+arg_0] ;~ 1678:1D60
cs=0x1678;eip=0x001d63; 	T(CMP(*(raddr(ss,bp+var_18)), al));	// 44353 cmp     [bp+var_18], al ;~ 1678:1D63
cs=0x1678;eip=0x001d66; 	J(JNC(loc_26b44));	// 44354 jnb     short loc_26B44 ;~ 1678:1D66
cs=0x1678;eip=0x001d68; 	T(MOV(al, *(raddr(ss,bp+var_18))));	// 44355 mov     al, [bp+var_18] ;~ 1678:1D68
cs=0x1678;eip=0x001d6b; 	T(CBW);	// 44356 cbw ;~ 1678:1D6B
cs=0x1678;eip=0x001d6c; 	T(MOV(si, ax));	// 44357 mov     si, ax ;~ 1678:1D6C
cs=0x1678;eip=0x001d6e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 44358 mov     bx, [bp+arg_2] ;~ 1678:1D6E
cs=0x1678;eip=0x001d71; 	T(MOV(al, *(raddr(ds,bx+si))));	// 44359 mov     al, [bx+si] ;~ 1678:1D71
cs=0x1678;eip=0x001d73; 	X(MOV(*(raddr(ss,bp+var_16)), al));	// 44360 mov     [bp+var_16], al ;~ 1678:1D73
cs=0x1678;eip=0x001d76; 	T(TEST(*(raddr(ss,bp+var_16)), 1));	// 44361 test    [bp+var_16], 1 ;~ 1678:1D76
cs=0x1678;eip=0x001d7a; 	J(JZ(loc_26aea));	// 44362 jz      short loc_26AEA ;~ 1678:1D7A
cs=0x1678;eip=0x001d7c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 44363 mov     ax, [bp+arg_4] ;~ 1678:1D7C
cs=0x1678;eip=0x001d7f; 	T(MOV(dx, si));	// 44364 mov     dx, si ;~ 1678:1D7F
cs=0x1678;eip=0x001d81; 	T(MOV(cl, 3));	// 44365 mov     cl, 3 ;~ 1678:1D81
cs=0x1678;eip=0x001d83; 	T(SHL(dx, cl));	// 44366 shl     dx, cl ;~ 1678:1D83
cs=0x1678;eip=0x001d85; 	T(ADD(ax, dx));	// 44367 add     ax, dx ;~ 1678:1D85
cs=0x1678;eip=0x001d87; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), ax));	// 44368 mov     [bp+var_1A], ax ;~ 1678:1D87
loc_26aea:
	// 7348 
cs=0x1678;eip=0x001d8a; 	T(TEST(*(raddr(ss,bp+var_16)), 2));	// 44371 test    [bp+var_16], 2 ;~ 1678:1D8A
cs=0x1678;eip=0x001d8e; 	J(JZ(loc_26afe));	// 44372 jz      short loc_26AFE ;~ 1678:1D8E
cs=0x1678;eip=0x001d90; 	T(MOV(al, *(raddr(ss,bp+var_18))));	// 44373 mov     al, [bp+var_18] ;~ 1678:1D90
cs=0x1678;eip=0x001d93; 	T(CBW);	// 44374 cbw ;~ 1678:1D93
cs=0x1678;eip=0x001d94; 	T(MOV(cl, 3));	// 44375 mov     cl, 3 ;~ 1678:1D94
cs=0x1678;eip=0x001d96; 	T(SHL(ax, cl));	// 44376 shl     ax, cl ;~ 1678:1D96
cs=0x1678;eip=0x001d98; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 44377 add     ax, [bp+arg_6] ;~ 1678:1D98
cs=0x1678;eip=0x001d9b; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), ax));	// 44378 mov     [bp+var_1C], ax ;~ 1678:1D9B
loc_26afe:
	// 7349 
cs=0x1678;eip=0x001d9e; 	T(TEST(*(raddr(ss,bp+var_16)), 1));	// 44381 test    [bp+var_16], 1 ;~ 1678:1D9E
cs=0x1678;eip=0x001da2; 	J(JNZ(loc_26b07));	// 44382 jnz     short loc_26B07 ;~ 1678:1DA2
cs=0x1678;eip=0x001da4; 	J(JMP(loc_26a6c));	// 44383 jmp     loc_26A6C ;~ 1678:1DA4
loc_26b07:
	// 7350 
cs=0x1678;eip=0x001da7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_1a))));	// 44387 mov     bx, [bp+var_1A] ;~ 1678:1DA7
cs=0x1678;eip=0x001daa; 	T(MOV(si, bx));	// 44388 mov     si, bx ;~ 1678:1DAA
cs=0x1678;eip=0x001dac; 	T(MOV(ax, *(dw*)(raddr(ds,si+0))));	// 44389 mov     ax, [si+0] ;~ 1678:1DAC
cs=0x1678;eip=0x001dae; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 44390 cmp     [bx+2], ax ;~ 1678:1DAE
cs=0x1678;eip=0x001db1; 	J(JG(loc_26b16));	// 44391 jg      short loc_26B16 ;~ 1678:1DB1
cs=0x1678;eip=0x001db3; 	J(JMP(loc_26a6c));	// 44392 jmp     loc_26A6C ;~ 1678:1DB3
loc_26b16:
	// 7351 
cs=0x1678;eip=0x001db6; 	T(TEST(*(raddr(ss,bp+var_16)), 2));	// 44396 test    [bp+var_16], 2 ;~ 1678:1DB6
cs=0x1678;eip=0x001dba; 	J(JNZ(loc_26b1f));	// 44397 jnz     short loc_26B1F ;~ 1678:1DBA
cs=0x1678;eip=0x001dbc; 	J(JMP(loc_26a60));	// 44398 jmp     loc_26A60 ;~ 1678:1DBC
loc_26b1f:
	// 7352 
cs=0x1678;eip=0x001dbf; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_1c))));	// 44402 mov     bx, [bp+var_1C] ;~ 1678:1DBF
cs=0x1678;eip=0x001dc2; 	T(MOV(si, bx));	// 44403 mov     si, bx ;~ 1678:1DC2
cs=0x1678;eip=0x001dc4; 	T(MOV(ax, *(dw*)(raddr(ds,si+0))));	// 44404 mov     ax, [si+0] ;~ 1678:1DC4
cs=0x1678;eip=0x001dc6; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 44405 cmp     [bx+2], ax ;~ 1678:1DC6
cs=0x1678;eip=0x001dc9; 	J(JG(loc_26b2e));	// 44406 jg      short loc_26B2E ;~ 1678:1DC9
cs=0x1678;eip=0x001dcb; 	J(JMP(loc_26a60));	// 44407 jmp     loc_26A60 ;~ 1678:1DCB
loc_26b2e:
	// 7353 
cs=0x1678;eip=0x001dce; 	T(ax = bp+var_c);	// 44411 lea     ax, [bp+var_C] ;~ 1678:1DCE
cs=0x1678;eip=0x001dd1; 	X(PUSH(ax));	// 44412 push    ax ;~ 1678:1DD1
cs=0x1678;eip=0x001dd2; 	X(PUSH(bx));	// 44413 push    bx ;~ 1678:1DD2
cs=0x1678;eip=0x001dd3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 44414 push    [bp+var_1A] ;~ 1678:1DD3
cs=0x1678;eip=0x001dd6; 	X(PUSH(cs));	// 44415 push    cs ;~ 1678:1DD6
cs=0x1678;eip=0x001dd7; 	J(CALL(rect_union,0));	// 44416 call    near ptr rect_union ;~ 1678:1DD7
cs=0x1678;eip=0x001dda; 	T(ADD(sp, 6));	// 44417 add     sp, 6 ;~ 1678:1DDA
cs=0x1678;eip=0x001ddd; 	T(ax = bp+var_c);	// 44418 lea     ax, [bp+var_C] ;~ 1678:1DDD
cs=0x1678;eip=0x001de0; 	J(JMP(loc_26a63));	// 44419 jmp     loc_26A63 ;~ 1678:1DE0
loc_26b44:
	// 7354 
cs=0x1678;eip=0x001de4; 	X(POP(si));	// 44424 pop     si ;~ 1678:1DE4
cs=0x1678;eip=0x001de5; 	X(POP(di));	// 44425 pop     di ;~ 1678:1DE5
cs=0x1678;eip=0x001de6; 	T(MOV(sp, bp));	// 44426 mov     sp, bp ;~ 1678:1DE6
cs=0x1678;eip=0x001de8; 	X(POP(bp));	// 44427 pop     bp ;~ 1678:1DE8
cs=0x1678;eip=0x001de9; 	J(RETF(0));	// 44428 retf ;~ 1678:1DE9

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_26a60: 	goto loc_26a60;
        case m2c::kloc_26a63: 	goto loc_26a63;
        case m2c::kloc_26a6c: 	goto loc_26a6c;
        case m2c::kloc_26a82: 	goto loc_26a82;
        case m2c::kloc_26a86: 	goto loc_26a86;
        case m2c::kloc_26abd: 	goto loc_26abd;
        case m2c::kloc_26ac0: 	goto loc_26ac0;
        case m2c::kloc_26aea: 	goto loc_26aea;
        case m2c::kloc_26afe: 	goto loc_26afe;
        case m2c::kloc_26b07: 	goto loc_26b07;
        case m2c::kloc_26b16: 	goto loc_26b16;
        case m2c::kloc_26b1f: 	goto loc_26b1f;
        case m2c::kloc_26b2e: 	goto loc_26b2e;
        case m2c::kloc_26b44: 	goto loc_26b44;
        case m2c::krectlist_add_rects: 	goto rectlist_add_rects;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool rect_array_sort_by_top(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    rect_array_sort_by_top:
    _begin:
#undef var_202
#define var_202 -0x202
	// 44438 var_202         = word ptr -202h ;~ 1678:1DEA
#undef arg_0
#define arg_0 6
	// 44439 arg_0           = byte ptr  6 ;~ 1678:1DEA
#undef arg_2
#define arg_2 8
	// 44440 arg_2           = word ptr  8 ;~ 1678:1DEA
#undef arg_4
#define arg_4 0x0A
	// 44441 arg_4           = word ptr  0Ah ;~ 1678:1DEA
cs=0x1678;eip=0x001dea; 	X(PUSH(bp));	// 44443 push    bp ;~ 1678:1DEA
cs=0x1678;eip=0x001deb; 	T(MOV(bp, sp));	// 44444 mov     bp, sp ;~ 1678:1DEB
cs=0x1678;eip=0x001ded; 	T(SUB(sp, 0x202));	// 44445 sub     sp, 202h ;~ 1678:1DED
cs=0x1678;eip=0x001df1; 	X(PUSH(di));	// 44446 push    di ;~ 1678:1DF1
cs=0x1678;eip=0x001df2; 	X(PUSH(si));	// 44447 push    si ;~ 1678:1DF2
cs=0x1678;eip=0x001df3; 	T(CMP(*(raddr(ss,bp+arg_0)), 1));	// 44448 cmp     [bp+arg_0], 1 ;~ 1678:1DF3
cs=0x1678;eip=0x001df7; 	J(JLE(loc_26ba0));	// 44449 jle     short loc_26BA0 ;~ 1678:1DF7
cs=0x1678;eip=0x001df9; 	T(SUB(si, si));	// 44450 sub     si, si ;~ 1678:1DF9
cs=0x1678;eip=0x001dfb; 	J(JMP(loc_26b7c));	// 44451 jmp     short loc_26B7C ;~ 1678:1DFB
loc_26b5e:
	// 7355 
cs=0x1678;eip=0x001dfe; 	T(MOV(di, si));	// 44456 mov     di, si ;~ 1678:1DFE
cs=0x1678;eip=0x001e00; 	T(SHL(di, 1));	// 44457 shl     di, 1 ;~ 1678:1E00
cs=0x1678;eip=0x001e02; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 44458 mov     bx, [bp+arg_2] ;~ 1678:1E02
cs=0x1678;eip=0x001e05; 	T(MOV(ax, si));	// 44459 mov     ax, si ;~ 1678:1E05
cs=0x1678;eip=0x001e07; 	T(MOV(cl, 3));	// 44460 mov     cl, 3 ;~ 1678:1E07
cs=0x1678;eip=0x001e09; 	T(SHL(ax, cl));	// 44461 shl     ax, cl ;~ 1678:1E09
cs=0x1678;eip=0x001e0b; 	T(ADD(bx, ax));	// 44462 add     bx, ax ;~ 1678:1E0B
cs=0x1678;eip=0x001e0d; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 44463 mov     ax, [bx+4] ;~ 1678:1E0D
cs=0x1678;eip=0x001e10; 	T(NEG(ax));	// 44464 neg     ax ;~ 1678:1E10
cs=0x1678;eip=0x001e12; 	X(MOV(*(dw*)(raddr(ss,bp+di+var_202)), ax));	// 44465 mov     [bp+di+var_202], ax ;~ 1678:1E12
cs=0x1678;eip=0x001e16; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 44466 mov     bx, [bp+arg_4] ;~ 1678:1E16
cs=0x1678;eip=0x001e19; 	X(MOV(*(dw*)(raddr(ds,bx+di)), si));	// 44467 mov     [bx+di], si ;~ 1678:1E19
cs=0x1678;eip=0x001e1b; 	T(INC(si));	// 44468 inc     si ;~ 1678:1E1B
loc_26b7c:
	// 7356 
cs=0x1678;eip=0x001e1c; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 44471 mov     al, [bp+arg_0] ;~ 1678:1E1C
cs=0x1678;eip=0x001e1f; 	T(CBW);	// 44472 cbw ;~ 1678:1E1F
cs=0x1678;eip=0x001e20; 	T(CMP(ax, si));	// 44473 cmp     ax, si ;~ 1678:1E20
cs=0x1678;eip=0x001e22; 	J(JG(loc_26b5e));	// 44474 jg      short loc_26B5E ;~ 1678:1E22
cs=0x1678;eip=0x001e24; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 44475 push    [bp+arg_4] ;~ 1678:1E24
cs=0x1678;eip=0x001e27; 	T(ax = bp+var_202);	// 44476 lea     ax, [bp+var_202] ;~ 1678:1E27
cs=0x1678;eip=0x001e2b; 	X(PUSH(ax));	// 44477 push    ax ;~ 1678:1E2B
cs=0x1678;eip=0x001e2c; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 44478 mov     al, [bp+arg_0] ;~ 1678:1E2C
cs=0x1678;eip=0x001e2f; 	T(CBW);	// 44479 cbw ;~ 1678:1E2F
cs=0x1678;eip=0x001e30; 	X(PUSH(ax));	// 44480 push    ax ;~ 1678:1E30
cs=0x1678;eip=0x001e31; 	J(CALLF(heapsort_by_order,0));	// 44481 call    heapsort_by_order ;~ 1678:1E31
cs=0x1678;eip=0x001e36; 	T(ADD(sp, 6));	// 44482 add     sp, 6 ;~ 1678:1E36
cs=0x1678;eip=0x001e39; 	X(POP(si));	// 44483 pop     si ;~ 1678:1E39
cs=0x1678;eip=0x001e3a; 	X(POP(di));	// 44484 pop     di ;~ 1678:1E3A
cs=0x1678;eip=0x001e3b; 	T(MOV(sp, bp));	// 44485 mov     sp, bp ;~ 1678:1E3B
cs=0x1678;eip=0x001e3d; 	X(POP(bp));	// 44486 pop     bp ;~ 1678:1E3D
cs=0x1678;eip=0x001e3e; 	J(RETF(0));	// 44487 retf ;~ 1678:1E3E
loc_26ba0:
	// 7357 
cs=0x1678;eip=0x001e40; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 44492 mov     bx, [bp+arg_4] ;~ 1678:1E40
cs=0x1678;eip=0x001e43; 	X(MOV(*(dw*)(raddr(ds,bx)), 0));	// 44493 mov     word ptr [bx], 0 ;~ 1678:1E43
cs=0x1678;eip=0x001e47; 	X(POP(si));	// 44494 pop     si ;~ 1678:1E47
cs=0x1678;eip=0x001e48; 	X(POP(di));	// 44495 pop     di ;~ 1678:1E48
cs=0x1678;eip=0x001e49; 	T(MOV(sp, bp));	// 44496 mov     sp, bp ;~ 1678:1E49
cs=0x1678;eip=0x001e4b; 	X(POP(bp));	// 44497 pop     bp ;~ 1678:1E4B
cs=0x1678;eip=0x001e4c; 	J(RETF(0));	// 44498 retf ;~ 1678:1E4C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_26b5e: 	goto loc_26b5e;
        case m2c::kloc_26b7c: 	goto loc_26b7c;
        case m2c::kloc_26ba0: 	goto loc_26ba0;
        case m2c::krect_array_sort_by_top: 	goto rect_array_sort_by_top;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

