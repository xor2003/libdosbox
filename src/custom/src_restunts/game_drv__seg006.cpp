/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool _group7(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group7:
    _begin:
init_polyinfo:
	// 40411 
cs=0x1678;eip=0x000004; 	T(MOV(ax, 0x28A0));	// 40412 mov     ax, 28A0h       ; bytes to reserve ;~ 1678:0004
ret_1678_7:
	// 7181 
cs=0x1678;eip=0x000007; 	T(CWD);	// 40413 cwd ;~ 1678:0007
cs=0x1678;eip=0x000008; 	X(PUSH(dx));	// 40414 push    dx ;~ 1678:0008
cs=0x1678;eip=0x000009; 	X(PUSH(ax));	// 40415 push    ax ;~ 1678:0009
cs=0x1678;eip=0x00000a; 	T(MOV(ax, offset(dseg,apolyinfo)));	// 40416 mov     ax, offset aPolyinfo ; "polyinfo" ;~ 1678:000A
cs=0x1678;eip=0x00000d; 	X(PUSH(ax));	// 40417 push    ax ;~ 1678:000D
cs=0x1678;eip=0x00000e; 	R(CALLF(mmgr_alloc_resbytes,0));	// 40418 call    mmgr_alloc_resbytes ;~ 1678:000E
cs=0x1678;eip=0x000013; 	T(ADD(sp, 6));	// 40419 add     sp, 6 ;~ 1678:0013
cs=0x1678;eip=0x000016; 	X(MOV(polyinfoptr, ax));	// 40420 mov     polyinfoptr, ax ;~ 1678:0016
cs=0x1678;eip=0x000019; 	X(MOV(word_40ed4, dx));	// 40421 mov     word_40ED4, dx ;~ 1678:0019
cs=0x1678;eip=0x00001d; 	T(SUB(ax, ax));	// 40422 sub     ax, ax ;~ 1678:001D
cs=0x1678;eip=0x00001f; 	X(PUSH(ax));	// 40423 push    ax ;~ 1678:001F
cs=0x1678;eip=0x000020; 	T(MOV(ax, offset(dseg,mat_y0)));	// 40424 mov     ax, offset mat_y0 ;~ 1678:0020
cs=0x1678;eip=0x000023; 	X(PUSH(ax));	// 40425 push    ax ;~ 1678:0023
cs=0x1678;eip=0x000024; 	R(CALLF(mat_rot_y,0));	// 40426 call    mat_rot_y ;~ 1678:0024
cs=0x1678;eip=0x000029; 	T(ADD(sp, 4));	// 40427 add     sp, 4 ;~ 1678:0029
cs=0x1678;eip=0x00002c; 	T(MOV(ax, 0x100));	// 40428 mov     ax, 100h ;~ 1678:002C
cs=0x1678;eip=0x00002f; 	X(PUSH(ax));	// 40429 push    ax ;~ 1678:002F
cs=0x1678;eip=0x000030; 	T(MOV(ax, offset(dseg,mat_y100)));	// 40430 mov     ax, offset mat_y100 ;~ 1678:0030
cs=0x1678;eip=0x000033; 	X(PUSH(ax));	// 40431 push    ax ;~ 1678:0033
cs=0x1678;eip=0x000034; 	R(CALLF(mat_rot_y,0));	// 40432 call    mat_rot_y ;~ 1678:0034
cs=0x1678;eip=0x000039; 	T(ADD(sp, 4));	// 40433 add     sp, 4 ;~ 1678:0039
cs=0x1678;eip=0x00003c; 	T(MOV(ax, 0x200));	// 40434 mov     ax, 200h ;~ 1678:003C
cs=0x1678;eip=0x00003f; 	X(PUSH(ax));	// 40435 push    ax ;~ 1678:003F
cs=0x1678;eip=0x000040; 	T(MOV(ax, offset(dseg,mat_y200)));	// 40436 mov     ax, offset mat_y200 ;~ 1678:0040
cs=0x1678;eip=0x000043; 	X(PUSH(ax));	// 40437 push    ax ;~ 1678:0043
cs=0x1678;eip=0x000044; 	R(CALLF(mat_rot_y,0));	// 40438 call    mat_rot_y ;~ 1678:0044
cs=0x1678;eip=0x000049; 	T(ADD(sp, 4));	// 40439 add     sp, 4 ;~ 1678:0049
cs=0x1678;eip=0x00004c; 	T(MOV(ax, 0x300));	// 40440 mov     ax, 300h ;~ 1678:004C
cs=0x1678;eip=0x00004f; 	X(PUSH(ax));	// 40441 push    ax ;~ 1678:004F
cs=0x1678;eip=0x000050; 	T(MOV(ax, offset(dseg,mat_y300)));	// 40442 mov     ax, offset mat_y300 ;~ 1678:0050
cs=0x1678;eip=0x000053; 	X(PUSH(ax));	// 40443 push    ax ;~ 1678:0053
cs=0x1678;eip=0x000054; 	R(CALLF(mat_rot_y,0));	// 40444 call    mat_rot_y ;~ 1678:0054
cs=0x1678;eip=0x000059; 	T(ADD(sp, 4));	// 40445 add     sp, 4 ;~ 1678:0059
cs=0x1678;eip=0x00005c; 	X(PUSH(cs));	// 40446 push    cs ;~ 1678:005C
cs=0x1678;eip=0x00005d; 	R(CALL(calc_sincos80,0));	// 40447 call    near ptr calc_sincos80 ;~ 1678:005D
cs=0x1678;eip=0x000060; 	R(RETF(0));	// 40448 retf ;~ 1678:0060
copy_material_list_pointers:
	// 40458 
#undef arg_0
#define arg_0 6
	// 40460 arg_0           = word ptr  6 ;~ 1678:0062
#undef arg_2
#define arg_2 8
	// 40461 arg_2           = word ptr  8 ;~ 1678:0062
#undef arg_4
#define arg_4 0x0A
	// 40462 arg_4           = word ptr  0Ah ;~ 1678:0062
#undef arg_6
#define arg_6 0x0C
	// 40463 arg_6           = word ptr  0Ch ;~ 1678:0062
#undef arg_8
#define arg_8 0x0E
	// 40464 arg_8           = word ptr  0Eh ;~ 1678:0062
ret_1678_62:
	// 7182 
cs=0x1678;eip=0x000062; 	X(PUSH(bp));	// 40466 push    bp ;~ 1678:0062
cs=0x1678;eip=0x000063; 	T(MOV(bp, sp));	// 40467 mov     bp, sp ;~ 1678:0063
cs=0x1678;eip=0x000065; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 40468 mov     ax, [bp+arg_0] ;~ 1678:0065
cs=0x1678;eip=0x000068; 	X(MOV(material_clrlist_ptr_cpy, ax));	// 40469 mov     material_clrlist_ptr_cpy, ax ;~ 1678:0068
cs=0x1678;eip=0x00006b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 40470 mov     ax, [bp+arg_2] ;~ 1678:006B
cs=0x1678;eip=0x00006e; 	X(MOV(material_clrlist2_ptr_cpy, ax));	// 40471 mov     material_clrlist2_ptr_cpy, ax ;~ 1678:006E
cs=0x1678;eip=0x000071; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 40472 mov     ax, [bp+arg_4] ;~ 1678:0071
cs=0x1678;eip=0x000074; 	X(MOV(material_patlist_ptr_cpy, ax));	// 40473 mov     material_patlist_ptr_cpy, ax ;~ 1678:0074
cs=0x1678;eip=0x000077; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 40474 mov     ax, [bp+arg_6] ;~ 1678:0077
cs=0x1678;eip=0x00007a; 	X(MOV(material_patlist2_ptr_cpy, ax));	// 40475 mov     material_patlist2_ptr_cpy, ax ;~ 1678:007A
cs=0x1678;eip=0x00007d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 40476 mov     ax, [bp+arg_8] ;~ 1678:007D
cs=0x1678;eip=0x000080; 	X(MOV(somezerovideoconst, ax));	// 40477 mov     someZeroVideoConst, ax ;~ 1678:0080
cs=0x1678;eip=0x000083; 	X(POP(bp));	// 40478 pop     bp ;~ 1678:0083
cs=0x1678;eip=0x000084; 	R(RETF(0));	// 40479 retf ;~ 1678:0084
polyinfo_reset:
	// 40488 
cs=0x1678;eip=0x000086; 	X(MOV(polyinfonumpolys, 0));	// 40490 mov     polyinfonumpolys, 0 ;~ 1678:0086
ret_1678_8c:
	// 7183 
cs=0x1678;eip=0x00008c; 	X(MOV(polyinfoptrnext, 0));	// 40491 mov     polyinfoptrnext, 0 ;~ 1678:008C
cs=0x1678;eip=0x000092; 	X(MOV(word_40ece, 0));	// 40492 mov     word_40ECE, 0 ;~ 1678:0092
cs=0x1678;eip=0x000098; 	X(MOV(word_411f6, 0x0FFFF));	// 40493 mov     word_411F6, 0FFFFh ;~ 1678:0098
cs=0x1678;eip=0x00009e; 	X(MOV(word_443f2, 0x190));	// 40494 mov     word_443F2, 190h ;~ 1678:009E
cs=0x1678;eip=0x0000a4; 	R(RETF(0));	// 40495 retf ;~ 1678:00A4
select_cliprect_rotate:
	// 40505 
#undef var_e
#define var_e -0x0E
	// 40508 var_E           = word ptr -0Eh ;~ 1678:00A6
#undef var_c
#define var_c -0x0C
	// 40509 var_C           = word ptr -0Ch ;~ 1678:00A6
#undef var_a
#define var_a -0x0A
	// 40510 var_A           = word ptr -0Ah ;~ 1678:00A6
#undef var_8
#define var_8 -8
	// 40511 var_8           = word ptr -8 ;~ 1678:00A6
#undef var_6
#define var_6 -6
	// 40512 var_6           = word ptr -6 ;~ 1678:00A6
#undef var_2
#define var_2 -2
	// 40513 var_2           = word ptr -2 ;~ 1678:00A6
#undef arg_0
#define arg_0 6
	// 40514 arg_0           = word ptr  6 ;~ 1678:00A6
#undef arg_2
#define arg_2 8
	// 40515 arg_2           = word ptr  8 ;~ 1678:00A6
#undef arg_4
#define arg_4 0x0A
	// 40516 arg_4           = word ptr  0Ah ;~ 1678:00A6
#undef arg_6
#define arg_6 0x0C
	// 40517 arg_6           = word ptr  0Ch ;~ 1678:00A6
#undef arg_8
#define arg_8 0x0E
	// 40518 arg_8           = word ptr  0Eh ;~ 1678:00A6
ret_1678_a6:
	// 7184 
cs=0x1678;eip=0x0000a6; 	X(PUSH(bp));	// 40520 push    bp ;~ 1678:00A6
cs=0x1678;eip=0x0000a7; 	T(MOV(bp, sp));	// 40521 mov     bp, sp ;~ 1678:00A7
cs=0x1678;eip=0x0000a9; 	T(SUB(sp, 0x0E));	// 40522 sub     sp, 0Eh ;~ 1678:00A9
cs=0x1678;eip=0x0000ac; 	X(PUSH(di));	// 40523 push    di ;~ 1678:00AC
cs=0x1678;eip=0x0000ad; 	X(PUSH(si));	// 40524 push    si ;~ 1678:00AD
cs=0x1678;eip=0x0000ae; 	T(MOV(ax, 1));	// 40525 mov     ax, 1 ;~ 1678:00AE
cs=0x1678;eip=0x0000b1; 	X(PUSH(ax));	// 40526 push    ax ;~ 1678:00B1
cs=0x1678;eip=0x0000b2; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 40527 push    [bp+arg_4] ;~ 1678:00B2
cs=0x1678;eip=0x0000b5; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 40528 push    [bp+arg_2] ;~ 1678:00B5
cs=0x1678;eip=0x0000b8; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 40529 push    [bp+arg_0] ;~ 1678:00B8
cs=0x1678;eip=0x0000bb; 	X(PUSH(cs));	// 40530 push    cs ;~ 1678:00BB
cs=0x1678;eip=0x0000bc; 	R(CALL(mat_rot_zxy,0));	// 40531 call    near ptr mat_rot_zxy ;~ 1678:00BC
cs=0x1678;eip=0x0000bf; 	T(ADD(sp, 8));	// 40532 add     sp, 8 ;~ 1678:00BF
cs=0x1678;eip=0x0000c2; 	T(MOV(di, offset(dseg,mat_temp)));	// 40533 mov     di, offset mat_temp ;~ 1678:00C2
cs=0x1678;eip=0x0000c5; 	T(MOV(si, ax));	// 40534 mov     si, ax ;~ 1678:00C5
cs=0x1678;eip=0x0000c7; 	X(PUSH(ds));	// 40535 push    ds ;~ 1678:00C7
cs=0x1678;eip=0x0000c8; 	X(POP(es));	// 40536 pop     es ;~ 1678:00C8
cs=0x1678;eip=0x0000c9; 	T(MOV(cx, 9));	// 40538 mov     cx, 9 ;~ 1678:00C9
	// 40539 repne movsw ;~ 1678:00CC
cs=0x1678;eip=0x0000cc; 	X(	REPNE MOVSW);	// 40539 repne movsw ;~ 1678:00CC
cs=0x1678;eip=0x0000ce; 	X(PUSH(cs));	// 40540 push    cs ;~ 1678:00CE
cs=0x1678;eip=0x0000cf; 	R(CALL(polyinfo_reset,0));	// 40541 call    near ptr polyinfo_reset ;~ 1678:00CF
cs=0x1678;eip=0x0000d2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 40542 mov     ax, [bp+arg_6] ;~ 1678:00D2
cs=0x1678;eip=0x0000d5; 	T(MOV(di, offset(dseg,select_rect_rc)));	// 40543 mov     di, offset select_rect_rc ;~ 1678:00D5
cs=0x1678;eip=0x0000d8; 	T(MOV(si, ax));	// 40544 mov     si, ax ;~ 1678:00D8
cs=0x1678;eip=0x0000da; 	X(PUSH(ds));	// 40545 push    ds ;~ 1678:00DA
cs=0x1678;eip=0x0000db; 	X(POP(es));	// 40546 pop     es ;~ 1678:00DB
cs=0x1678;eip=0x0000dc; 	X(MOVSW);	// 40547 movsw ;~ 1678:00DC
cs=0x1678;eip=0x0000dd; 	X(MOVSW);	// 40548 movsw ;~ 1678:00DD
cs=0x1678;eip=0x0000de; 	X(MOVSW);	// 40549 movsw ;~ 1678:00DE
cs=0x1678;eip=0x0000df; 	X(MOVSW);	// 40550 movsw ;~ 1678:00DF
cs=0x1678;eip=0x0000e0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 40551 mov     ax, [bp+arg_8] ;~ 1678:00E0
cs=0x1678;eip=0x0000e3; 	X(MOV(select_rect_param, ax));	// 40552 mov     select_rect_param, ax ;~ 1678:00E3
cs=0x1678;eip=0x0000e6; 	T(SUB(ax, ax));	// 40553 sub     ax, ax ;~ 1678:00E6
cs=0x1678;eip=0x0000e8; 	X(PUSH(ax));	// 40554 push    ax ;~ 1678:00E8
cs=0x1678;eip=0x0000e9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 40555 mov     ax, [bp+arg_4] ;~ 1678:00E9
cs=0x1678;eip=0x0000ec; 	T(NEG(ax));	// 40556 neg     ax ;~ 1678:00EC
cs=0x1678;eip=0x0000ee; 	X(PUSH(ax));	// 40557 push    ax ;~ 1678:00EE
cs=0x1678;eip=0x0000ef; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 40558 mov     ax, [bp+arg_2] ;~ 1678:00EF
cs=0x1678;eip=0x0000f2; 	T(NEG(ax));	// 40559 neg     ax ;~ 1678:00F2
cs=0x1678;eip=0x0000f4; 	X(PUSH(ax));	// 40560 push    ax ;~ 1678:00F4
cs=0x1678;eip=0x0000f5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 40561 mov     ax, [bp+arg_0] ;~ 1678:00F5
cs=0x1678;eip=0x0000f8; 	T(NEG(ax));	// 40562 neg     ax ;~ 1678:00F8
cs=0x1678;eip=0x0000fa; 	X(PUSH(ax));	// 40563 push    ax ;~ 1678:00FA
cs=0x1678;eip=0x0000fb; 	X(PUSH(cs));	// 40564 push    cs ;~ 1678:00FB
cs=0x1678;eip=0x0000fc; 	R(CALL(mat_rot_zxy,0));	// 40565 call    near ptr mat_rot_zxy ;~ 1678:00FC
cs=0x1678;eip=0x0000ff; 	T(ADD(sp, 8));	// 40566 add     sp, 8 ;~ 1678:00FF
cs=0x1678;eip=0x000102; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 40567 mov     [bp+var_8], ax ;~ 1678:0102
cs=0x1678;eip=0x000105; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0x2710));	// 40568 mov     [bp+var_A], 2710h ;~ 1678:0105
cs=0x1678;eip=0x00010a; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 0));	// 40569 mov     [bp+var_C], 0 ;~ 1678:010A
cs=0x1678;eip=0x00010f; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0));	// 40570 mov     [bp+var_E], 0 ;~ 1678:010F
cs=0x1678;eip=0x000114; 	T(ax = bp+var_6);	// 40571 lea     ax, [bp+var_6] ;~ 1678:0114
cs=0x1678;eip=0x000117; 	X(PUSH(ax));	// 40572 push    ax ;~ 1678:0117
cs=0x1678;eip=0x000118; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 40573 push    [bp+var_8] ;~ 1678:0118
cs=0x1678;eip=0x00011b; 	T(ax = bp+var_e);	// 40574 lea     ax, [bp+var_E] ;~ 1678:011B
cs=0x1678;eip=0x00011e; 	X(PUSH(ax));	// 40575 push    ax ;~ 1678:011E
cs=0x1678;eip=0x00011f; 	R(CALLF(mat_mul_vector,0));	// 40576 call    mat_mul_vector ;~ 1678:011F
cs=0x1678;eip=0x000124; 	T(ADD(sp, 6));	// 40577 add     sp, 6 ;~ 1678:0124
cs=0x1678;eip=0x000127; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 40578 push    [bp+var_2] ;~ 1678:0127
cs=0x1678;eip=0x00012a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 40579 push    [bp+var_6] ;~ 1678:012A
cs=0x1678;eip=0x00012d; 	R(CALLF(polarangle,0));	// 40580 call    polarAngle ;~ 1678:012D
cs=0x1678;eip=0x000132; 	T(ADD(sp, 4));	// 40581 add     sp, 4 ;~ 1678:0132
cs=0x1678;eip=0x000135; 	T(AND(ah, 3));	// 40582 and     ah, 3 ;~ 1678:0135
cs=0x1678;eip=0x000138; 	X(POP(si));	// 40583 pop     si ;~ 1678:0138
cs=0x1678;eip=0x000139; 	X(POP(di));	// 40584 pop     di ;~ 1678:0139
cs=0x1678;eip=0x00013a; 	T(MOV(sp, bp));	// 40585 mov     sp, bp ;~ 1678:013A
cs=0x1678;eip=0x00013c; 	X(POP(bp));	// 40586 pop     bp ;~ 1678:013C
cs=0x1678;eip=0x00013d; 	R(RETF(0));	// 40587 retf ;~ 1678:013D
transformed_shape_op:
	// 40595 
#undef var_b7c
#define var_b7c -0x0B7C
	// 40598 var_B7C         = word ptr -0B7Ch ;~ 1678:013E
#undef var_b7a
#define var_b7a -0x0B7A
	// 40599 var_B7A         = word ptr -0B7Ah ;~ 1678:013E
#undef var_b78
#define var_b78 -0x0B78
	// 40600 var_B78         = dword ptr -0B78h ;~ 1678:013E
#undef var_b74
#define var_b74 -0x0B74
	// 40601 var_B74         = word ptr -0B74h ;~ 1678:013E
#undef var_b72
#define var_b72 -0x0B72
	// 40602 var_B72         = word ptr -0B72h ;~ 1678:013E
#undef var_b70
#define var_b70 -0x0B70
	// 40603 var_B70         = word ptr -0B70h ;~ 1678:013E
#undef var_574
#define var_574 -0x574
	// 40604 var_574         = word ptr -574h ;~ 1678:013E
#undef var_572
#define var_572 -0x572
	// 40605 var_572         = word ptr -572h ;~ 1678:013E
#undef var_570
#define var_570 -0x570
	// 40606 var_570         = word ptr -570h ;~ 1678:013E
#undef var_56e
#define var_56e -0x56E
	// 40607 var_56E         = dword ptr -56Eh ;~ 1678:013E
#undef var_56a
#define var_56a -0x56A
	// 40608 var_56A         = word ptr -56Ah ;~ 1678:013E
#undef var_568
#define var_568 -0x568
	// 40609 var_568         = word ptr -568h ;~ 1678:013E
#undef var_566
#define var_566 -0x566
	// 40610 var_566         = word ptr -566h ;~ 1678:013E
#undef var_564
#define var_564 -0x564
	// 40611 var_564         = word ptr -564h ;~ 1678:013E
#undef var_562
#define var_562 -0x562
	// 40612 var_562         = byte ptr -562h ;~ 1678:013E
#undef var_462
#define var_462 -0x462
	// 40613 var_462         = word ptr -462h ;~ 1678:013E
#undef var_460
#define var_460 -0x460
	// 40614 var_460         = word ptr -460h ;~ 1678:013E
#undef var_45e
#define var_45e -0x45E
	// 40615 var_45E         = word ptr -45Eh ;~ 1678:013E
#undef var_45c
#define var_45c -0x45C
	// 40616 var_45C         = word ptr -45Ch ;~ 1678:013E
#undef var_45a
#define var_45a -0x45A
	// 40617 var_45A         = word ptr -45Ah ;~ 1678:013E
#undef var_458
#define var_458 -0x458
	// 40618 var_458         = word ptr -458h ;~ 1678:013E
#undef var_456
#define var_456 -0x456
	// 40619 var_456         = word ptr -456h ;~ 1678:013E
#undef var_454
#define var_454 -0x454
	// 40620 var_454         = word ptr -454h ;~ 1678:013E
#undef var_450
#define var_450 -0x450
	// 40621 var_450         = word ptr -450h ;~ 1678:013E
#undef var_44e
#define var_44e -0x44E
	// 40622 var_44E         = word ptr -44Eh ;~ 1678:013E
#undef var_44a
#define var_44a -0x44A
	// 40623 var_44A         = byte ptr -44Ah ;~ 1678:013E
#undef var_448
#define var_448 -0x448
	// 40624 var_448         = word ptr -448h ;~ 1678:013E
#undef var_446
#define var_446 -0x446
	// 40625 var_446         = byte ptr -446h ;~ 1678:013E
#undef var_434
#define var_434 -0x434
	// 40626 var_434         = dword ptr -434h ;~ 1678:013E
#undef var_430
#define var_430 -0x430
	// 40627 var_430         = dword ptr -430h ;~ 1678:013E
#undef var_42c
#define var_42c -0x42C
	// 40628 var_42C         = word ptr -42Ch ;~ 1678:013E
#undef var_42a
#define var_42a -0x42A
	// 40629 var_42A         = byte ptr -42Ah ;~ 1678:013E
#undef var_418
#define var_418 -0x418
	// 40630 var_418         = word ptr -418h ;~ 1678:013E
#undef var_1a
#define var_1a -0x1A
	// 40631 var_1A          = word ptr -1Ah ;~ 1678:013E
#undef var_18
#define var_18 -0x18
	// 40632 var_18          = word ptr -18h ;~ 1678:013E
#undef var_16
#define var_16 -0x16
	// 40633 var_16          = word ptr -16h ;~ 1678:013E
#undef var_14
#define var_14 -0x14
	// 40634 var_14          = dword ptr -14h ;~ 1678:013E
#undef var_10
#define var_10 -0x10
	// 40635 var_10          = dword ptr -10h ;~ 1678:013E
#undef var_c
#define var_c -0x0C
	// 40636 var_C           = word ptr -0Ch ;~ 1678:013E
#undef var_a
#define var_a -0x0A
	// 40637 var_A           = word ptr -0Ah ;~ 1678:013E
#undef var_8
#define var_8 -8
	// 40638 var_8           = word ptr -8 ;~ 1678:013E
#undef var_6
#define var_6 -6
	// 40639 var_6           = byte ptr -6 ;~ 1678:013E
#undef var_4
#define var_4 -4
	// 40640 var_4           = word ptr -4 ;~ 1678:013E
#undef var_2
#define var_2 -2
	// 40641 var_2           = word ptr -2 ;~ 1678:013E
#undef arg_0
#define arg_0 6
	// 40642 arg_0           = word ptr  6 ;~ 1678:013E
ret_1678_13e:
	// 7185 
cs=0x1678;eip=0x00013e; 	X(PUSH(bp));	// 40644 push    bp ;~ 1678:013E
cs=0x1678;eip=0x00013f; 	T(MOV(bp, sp));	// 40645 mov     bp, sp ;~ 1678:013F
cs=0x1678;eip=0x000141; 	T(SUB(sp, 0x0B7C));	// 40646 sub     sp, 0B7Ch ;~ 1678:0141
cs=0x1678;eip=0x000145; 	X(PUSH(di));	// 40647 push    di ;~ 1678:0145
cs=0x1678;eip=0x000146; 	X(PUSH(si));	// 40648 push    si ;~ 1678:0146
cs=0x1678;eip=0x000147; 	T(CMP(word_40ece, 0));	// 40649 cmp     word_40ECE, 0 ;~ 1678:0147
cs=0x1678;eip=0x00014c; 	R(JZ(loc_24eb8));	// 40650 jz      short loc_24EB8 ;~ 1678:014C
loc_24eae:
	// 7186 
cs=0x1678;eip=0x00014e; 	T(MOV(ax, 1));	// 40653 mov     ax, 1 ;~ 1678:014E
cs=0x1678;eip=0x000151; 	X(POP(si));	// 40654 pop     si ;~ 1678:0151
cs=0x1678;eip=0x000152; 	X(POP(di));	// 40655 pop     di ;~ 1678:0152
cs=0x1678;eip=0x000153; 	T(MOV(sp, bp));	// 40656 mov     sp, bp ;~ 1678:0153
cs=0x1678;eip=0x000155; 	X(POP(bp));	// 40657 pop     bp ;~ 1678:0155
cs=0x1678;eip=0x000156; 	R(RETF(0));	// 40658 retf ;~ 1678:0156
loc_24eb8:
	// 7187 
cs=0x1678;eip=0x000158; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 40663 mov     bx, [bp+arg_0] ;~ 1678:0158
cs=0x1678;eip=0x00015b; 	T(MOV(bx, *(dw*)(raddr(ds,bx+6))));	// 40664 mov     bx, [bx+6] ;~ 1678:015B
cs=0x1678;eip=0x00015e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 40665 mov     ax, [bx+0] ;~ 1678:015E
cs=0x1678;eip=0x000160; 	X(MOV(transshapenumverts, ax));	// 40666 mov     transshapenumverts, ax ;~ 1678:0160
cs=0x1678;eip=0x000163; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 40667 mov     bx, [bp+arg_0] ;~ 1678:0163
cs=0x1678;eip=0x000166; 	T(MOV(bx, *(dw*)(raddr(ds,bx+6))));	// 40668 mov     bx, [bx+6] ;~ 1678:0166
cs=0x1678;eip=0x000169; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0A))));	// 40669 mov     ax, [bx+0Ah] ;~ 1678:0169
cs=0x1678;eip=0x00016c; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0C))));	// 40670 mov     dx, [bx+0Ch] ;~ 1678:016C
cs=0x1678;eip=0x00016f; 	X(MOV(*(dw*)(((db*)&transshapeprimitives)), ax));	// 40671 mov     word ptr transshapeprimitives, ax ;~ 1678:016F
cs=0x1678;eip=0x000172; 	X(MOV(*(dw*)(((db*)&transshapeprimitives)+2), dx));	// 40672 mov     word ptr transshapeprimitives+2, dx ;~ 1678:0172
cs=0x1678;eip=0x000176; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 40673 mov     bx, [bp+arg_0] ;~ 1678:0176
cs=0x1678;eip=0x000179; 	T(MOV(bx, *(dw*)(raddr(ds,bx+6))));	// 40674 mov     bx, [bx+6] ;~ 1678:0179
cs=0x1678;eip=0x00017c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 40675 mov     ax, [bx+2] ;~ 1678:017C
cs=0x1678;eip=0x00017f; 	T(MOV(dx, *(dw*)(raddr(ds,bx+4))));	// 40676 mov     dx, [bx+4] ;~ 1678:017F
cs=0x1678;eip=0x000182; 	X(MOV(*(dw*)(((db*)&transshapeverts)), ax));	// 40677 mov     word ptr transshapeverts, ax ;~ 1678:0182
cs=0x1678;eip=0x000185; 	X(MOV(*(dw*)(((db*)&transshapeverts)+2), dx));	// 40678 mov     word ptr transshapeverts+2, dx ;~ 1678:0185
cs=0x1678;eip=0x000189; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 40679 mov     bx, [bp+arg_0] ;~ 1678:0189
cs=0x1678;eip=0x00018c; 	T(MOV(bx, *(dw*)(raddr(ds,bx+6))));	// 40680 mov     bx, [bx+6] ;~ 1678:018C
cs=0x1678;eip=0x00018f; 	T(MOV(al, *(raddr(ds,bx+8))));	// 40681 mov     al, [bx+8] ;~ 1678:018F
cs=0x1678;eip=0x000192; 	T(CBW);	// 40682 cbw ;~ 1678:0192
cs=0x1678;eip=0x000193; 	X(MOV(transshapenumpaints, ax));	// 40683 mov     transshapenumpaints, ax ;~ 1678:0193
cs=0x1678;eip=0x000196; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 40684 mov     bx, [bp+arg_0] ;~ 1678:0196
cs=0x1678;eip=0x000199; 	T(MOV(bx, *(dw*)(raddr(ds,bx+6))));	// 40685 mov     bx, [bx+6] ;~ 1678:0199
cs=0x1678;eip=0x00019c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0E))));	// 40686 mov     ax, [bx+0Eh] ;~ 1678:019C
cs=0x1678;eip=0x00019f; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x10))));	// 40687 mov     dx, [bx+10h] ;~ 1678:019F
cs=0x1678;eip=0x0001a2; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_b78))), ax));	// 40688 mov     word ptr [bp+var_B78], ax ;~ 1678:01A2
cs=0x1678;eip=0x0001a6; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_b78+2))), dx));	// 40689 mov     word ptr [bp+var_B78+2], dx ;~ 1678:01A6
cs=0x1678;eip=0x0001aa; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 40690 mov     bx, [bp+arg_0] ;~ 1678:01AA
cs=0x1678;eip=0x0001ad; 	T(MOV(bx, *(dw*)(raddr(ds,bx+6))));	// 40691 mov     bx, [bx+6] ;~ 1678:01AD
cs=0x1678;eip=0x0001b0; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x12))));	// 40692 mov     ax, [bx+12h] ;~ 1678:01B0
cs=0x1678;eip=0x0001b3; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x14))));	// 40693 mov     dx, [bx+14h] ;~ 1678:01B3
cs=0x1678;eip=0x0001b6; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_434))), ax));	// 40694 mov     word ptr [bp+var_434], ax ;~ 1678:01B6
cs=0x1678;eip=0x0001ba; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_434+2))), dx));	// 40695 mov     word ptr [bp+var_434+2], dx ;~ 1678:01BA
cs=0x1678;eip=0x0001be; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 40696 mov     bx, [bp+arg_0] ;~ 1678:01BE
cs=0x1678;eip=0x0001c1; 	T(MOV(al, *(raddr(ds,bx+0x13))));	// 40697 mov     al, [bx+13h] ;~ 1678:01C1
cs=0x1678;eip=0x0001c4; 	X(MOV(transshapematerial, al));	// 40698 mov     transshapematerial, al ;~ 1678:01C4
cs=0x1678;eip=0x0001c7; 	T(CMP(*(db*)(((db*)&transshapenumpaints)), al));	// 40699 cmp     byte ptr transshapenumpaints, al ;~ 1678:01C7
cs=0x1678;eip=0x0001cb; 	R(JA(loc_24f32));	// 40700 ja      short loc_24F32 ;~ 1678:01CB
cs=0x1678;eip=0x0001cd; 	X(MOV(transshapematerial, 0));	// 40701 mov     transshapematerial, 0 ;~ 1678:01CD
loc_24f32:
	// 7188 
cs=0x1678;eip=0x0001d2; 	T(MOV(al, *(raddr(ds,bx+0x12))));	// 40704 mov     al, [bx+12h] ;~ 1678:01D2
cs=0x1678;eip=0x0001d5; 	X(MOV(transshapeflags, al));	// 40705 mov     transshapeflags, al ;~ 1678:01D5
cs=0x1678;eip=0x0001d8; 	T(TEST(transshapeflags, 8));	// 40706 test    transshapeflags, 8 ;~ 1678:01D8
cs=0x1678;eip=0x0001dd; 	R(JZ(loc_24f45));	// 40707 jz      short loc_24F45 ;~ 1678:01DD
cs=0x1678;eip=0x0001df; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 40708 mov     ax, [bx+8] ;~ 1678:01DF
cs=0x1678;eip=0x0001e2; 	X(MOV(transshaperectptr, ax));	// 40709 mov     transshaperectptr, ax ;~ 1678:01E2
loc_24f45:
	// 7189 
cs=0x1678;eip=0x0001e5; 	T(SUB(si, si));	// 40712 sub     si, si ;~ 1678:01E5
cs=0x1678;eip=0x0001e7; 	R(JMP(loc_24f50));	// 40713 jmp     short loc_24F50 ;~ 1678:01E7
loc_24f4a:
	// 7190 
cs=0x1678;eip=0x0001ea; 	X(MOV(*(raddr(ss,bp+si+var_562)), 0x0FF));	// 40718 mov     [bp+si+var_562], 0FFh ;~ 1678:01EA
cs=0x1678;eip=0x0001ef; 	T(INC(si));	// 40719 inc     si ;~ 1678:01EF
loc_24f50:
	// 7191 
cs=0x1678;eip=0x0001f0; 	T(MOV(ax, si));	// 40722 mov     ax, si ;~ 1678:01F0
cs=0x1678;eip=0x0001f2; 	T(CMP(ax, transshapenumverts));	// 40723 cmp     ax, transshapenumverts ;~ 1678:01F2
cs=0x1678;eip=0x0001f6; 	R(JC(loc_24f4a));	// 40724 jb      short loc_24F4A ;~ 1678:01F6
cs=0x1678;eip=0x0001f8; 	T(TEST(transshapeflags, 2));	// 40725 test    transshapeflags, 2 ;~ 1678:01F8
cs=0x1678;eip=0x0001fd; 	R(JZ(loc_24fb6));	// 40726 jz      short loc_24FB6 ;~ 1678:01FD
cs=0x1678;eip=0x0001ff; 	T(SUB(ax, ax));	// 40727 sub     ax, ax ;~ 1678:01FF
cs=0x1678;eip=0x000201; 	X(PUSH(ax));	// 40728 push    ax ;~ 1678:0201
cs=0x1678;eip=0x000202; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 40729 mov     bx, [bp+arg_0] ;~ 1678:0202
cs=0x1678;eip=0x000205; 	X(PUSH(*(dw*)(raddr(ds,bx+0x0E))));	// 40730 push    word ptr [bx+0Eh] ;~ 1678:0205
cs=0x1678;eip=0x000208; 	X(PUSH(*(dw*)(raddr(ds,bx+0x0C))));	// 40731 push    word ptr [bx+0Ch] ;~ 1678:0208
cs=0x1678;eip=0x00020b; 	X(PUSH(*(dw*)(raddr(ds,bx+0x0A))));	// 40732 push    word ptr [bx+0Ah] ;~ 1678:020B
cs=0x1678;eip=0x00020e; 	X(PUSH(cs));	// 40733 push    cs ;~ 1678:020E
cs=0x1678;eip=0x00020f; 	R(CALL(mat_rot_zxy,0));	// 40734 call    near ptr mat_rot_zxy ;~ 1678:020F
cs=0x1678;eip=0x000212; 	T(ADD(sp, 8));	// 40735 add     sp, 8 ;~ 1678:0212
cs=0x1678;eip=0x000215; 	X(MOV(*(dw*)(raddr(ss,bp+var_42c)), ax));	// 40736 mov     [bp+var_42C], ax ;~ 1678:0215
cs=0x1678;eip=0x000219; 	T(ax = bp+var_42a);	// 40737 lea     ax, [bp+var_42A] ;~ 1678:0219
cs=0x1678;eip=0x00021d; 	X(PUSH(ax));	// 40738 push    ax ;~ 1678:021D
cs=0x1678;eip=0x00021e; 	T(MOV(ax, offset(dseg,mat_temp)));	// 40739 mov     ax, offset mat_temp ;~ 1678:021E
cs=0x1678;eip=0x000221; 	X(PUSH(ax));	// 40740 push    ax ;~ 1678:0221
cs=0x1678;eip=0x000222; 	X(PUSH(*(dw*)(raddr(ss,bp+var_42c))));	// 40741 push    [bp+var_42C] ;~ 1678:0222
cs=0x1678;eip=0x000226; 	R(CALLF(mat_multiply,0));	// 40742 call    mat_multiply ;~ 1678:0226
cs=0x1678;eip=0x00022b; 	T(ADD(sp, 6));	// 40743 add     sp, 6 ;~ 1678:022B
cs=0x1678;eip=0x00022e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 40744 mov     ax, [bp+arg_0] ;~ 1678:022E
cs=0x1678;eip=0x000231; 	X(PUSH(si));	// 40745 push    si ;~ 1678:0231
cs=0x1678;eip=0x000232; 	X(PUSH(di));	// 40746 push    di ;~ 1678:0232
cs=0x1678;eip=0x000233; 	T(di = bp+var_14);	// 40747 lea     di, [bp+var_14] ;~ 1678:0233
cs=0x1678;eip=0x000236; 	T(MOV(si, ax));	// 40748 mov     si, ax ;~ 1678:0236
cs=0x1678;eip=0x000238; 	X(PUSH(ss));	// 40749 push    ss ;~ 1678:0238
cs=0x1678;eip=0x000239; 	X(POP(es));	// 40750 pop     es ;~ 1678:0239
cs=0x1678;eip=0x00023a; 	X(MOVSW);	// 40752 movsw ;~ 1678:023A
cs=0x1678;eip=0x00023b; 	X(MOVSW);	// 40753 movsw ;~ 1678:023B
cs=0x1678;eip=0x00023c; 	X(MOVSW);	// 40754 movsw ;~ 1678:023C
cs=0x1678;eip=0x00023d; 	X(POP(di));	// 40755 pop     di ;~ 1678:023D
cs=0x1678;eip=0x00023e; 	X(POP(si));	// 40756 pop     si ;~ 1678:023E
loc_24f9f:
	// 7192 
cs=0x1678;eip=0x00023f; 	X(MOV(*(dw*)(raddr(ss,bp+var_45c)), 0x0FFFF));	// 40760 mov     [bp+var_45C], 0FFFFh ;~ 1678:023F
cs=0x1678;eip=0x000245; 	X(MOV(*(dw*)(raddr(ss,bp+var_45a)), 0x0FFFF));	// 40761 mov     [bp+var_45A], 0FFFFh ;~ 1678:0245
cs=0x1678;eip=0x00024b; 	T(SUB(ax, ax));	// 40762 sub     ax, ax ;~ 1678:024B
cs=0x1678;eip=0x00024d; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 40763 mov     [bp+var_8], ax ;~ 1678:024D
cs=0x1678;eip=0x000250; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 40764 mov     [bp+var_A], ax ;~ 1678:0250
cs=0x1678;eip=0x000253; 	R(JMP(loc_250a3));	// 40765 jmp     loc_250A3       ; initialized to 190h in polyinfo_reset() ;~ 1678:0253
loc_24fb6:
	// 7193 
cs=0x1678;eip=0x000256; 	T(SUB(ax, ax));	// 40769 sub     ax, ax ;~ 1678:0256
cs=0x1678;eip=0x000258; 	X(PUSH(ax));	// 40770 push    ax ;~ 1678:0258
cs=0x1678;eip=0x000259; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 40771 mov     bx, [bp+arg_0] ;~ 1678:0259
cs=0x1678;eip=0x00025c; 	X(PUSH(*(dw*)(raddr(ds,bx+0x0E))));	// 40772 push    word ptr [bx+0Eh] ;~ 1678:025C
cs=0x1678;eip=0x00025f; 	X(PUSH(*(dw*)(raddr(ds,bx+0x0C))));	// 40773 push    word ptr [bx+0Ch] ;~ 1678:025F
cs=0x1678;eip=0x000262; 	X(PUSH(*(dw*)(raddr(ds,bx+0x0A))));	// 40774 push    word ptr [bx+0Ah] ;~ 1678:0262
cs=0x1678;eip=0x000265; 	X(PUSH(cs));	// 40775 push    cs ;~ 1678:0265
cs=0x1678;eip=0x000266; 	R(CALL(mat_rot_zxy,0));	// 40776 call    near ptr mat_rot_zxy ;~ 1678:0266
cs=0x1678;eip=0x000269; 	T(ADD(sp, 8));	// 40777 add     sp, 8 ;~ 1678:0269
cs=0x1678;eip=0x00026c; 	X(MOV(*(dw*)(raddr(ss,bp+var_42c)), ax));	// 40778 mov     [bp+var_42C], ax ;~ 1678:026C
cs=0x1678;eip=0x000270; 	T(ax = bp+var_14);	// 40779 lea     ax, [bp+var_14] ;~ 1678:0270
cs=0x1678;eip=0x000273; 	X(PUSH(ax));	// 40780 push    ax ;~ 1678:0273
cs=0x1678;eip=0x000274; 	T(MOV(ax, offset(dseg,mat_temp)));	// 40781 mov     ax, offset mat_temp ;~ 1678:0274
cs=0x1678;eip=0x000277; 	X(PUSH(ax));	// 40782 push    ax ;~ 1678:0277
cs=0x1678;eip=0x000278; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 40783 push    [bp+arg_0] ;~ 1678:0278
cs=0x1678;eip=0x00027b; 	R(CALLF(mat_mul_vector,0));	// 40784 call    mat_mul_vector ;~ 1678:027B
cs=0x1678;eip=0x000280; 	T(ADD(sp, 6));	// 40785 add     sp, 6 ;~ 1678:0280
cs=0x1678;eip=0x000283; 	T(ax = bp+var_42a);	// 40786 lea     ax, [bp+var_42A] ;~ 1678:0283
cs=0x1678;eip=0x000287; 	X(PUSH(ax));	// 40787 push    ax ;~ 1678:0287
cs=0x1678;eip=0x000288; 	T(MOV(ax, offset(dseg,mat_temp)));	// 40788 mov     ax, offset mat_temp ;~ 1678:0288
cs=0x1678;eip=0x00028b; 	X(PUSH(ax));	// 40789 push    ax ;~ 1678:028B
cs=0x1678;eip=0x00028c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_42c))));	// 40790 push    [bp+var_42C] ;~ 1678:028C
cs=0x1678;eip=0x000290; 	R(CALLF(mat_multiply,0));	// 40791 call    mat_multiply ;~ 1678:0290
cs=0x1678;eip=0x000295; 	T(ADD(sp, 6));	// 40792 add     sp, 6 ;~ 1678:0295
cs=0x1678;eip=0x000298; 	T(ax = bp+var_446);	// 40793 lea     ax, [bp+var_446] ;~ 1678:0298
cs=0x1678;eip=0x00029c; 	X(PUSH(ax));	// 40794 push    ax ;~ 1678:029C
cs=0x1678;eip=0x00029d; 	T(ax = bp+var_42a);	// 40795 lea     ax, [bp+var_42A] ;~ 1678:029D
cs=0x1678;eip=0x0002a1; 	X(PUSH(ax));	// 40796 push    ax ;~ 1678:02A1
cs=0x1678;eip=0x0002a2; 	R(CALLF(mat_invert,0));	// 40797 call    mat_invert ;~ 1678:02A2
cs=0x1678;eip=0x0002a7; 	T(ADD(sp, 4));	// 40798 add     sp, 4 ;~ 1678:02A7
cs=0x1678;eip=0x0002aa; 	X(MOV(*(dw*)(raddr(ss,bp+var_458)), 0));	// 40799 mov     [bp+var_458], 0 ;~ 1678:02AA
cs=0x1678;eip=0x0002b0; 	X(MOV(*(dw*)(raddr(ss,bp+var_456)), 0));	// 40800 mov     [bp+var_456], 0 ;~ 1678:02B0
cs=0x1678;eip=0x0002b6; 	X(MOV(*(dw*)(raddr(ss,bp+var_454)), 0x1000));	// 40801 mov     [bp+var_454], 1000h ;~ 1678:02B6
cs=0x1678;eip=0x0002bc; 	T(ax = bp+var_56a);	// 40802 lea     ax, [bp+var_56A] ;~ 1678:02BC
cs=0x1678;eip=0x0002c0; 	X(PUSH(ax));	// 40803 push    ax ;~ 1678:02C0
cs=0x1678;eip=0x0002c1; 	T(ax = bp+var_446);	// 40804 lea     ax, [bp+var_446] ;~ 1678:02C1
cs=0x1678;eip=0x0002c5; 	X(PUSH(ax));	// 40805 push    ax ;~ 1678:02C5
cs=0x1678;eip=0x0002c6; 	T(ax = bp+var_458);	// 40806 lea     ax, [bp+var_458] ;~ 1678:02C6
cs=0x1678;eip=0x0002ca; 	X(PUSH(ax));	// 40807 push    ax ;~ 1678:02CA
cs=0x1678;eip=0x0002cb; 	R(CALLF(mat_mul_vector,0));	// 40808 call    mat_mul_vector ;~ 1678:02CB
cs=0x1678;eip=0x0002d0; 	T(ADD(sp, 6));	// 40809 add     sp, 6 ;~ 1678:02D0
cs=0x1678;eip=0x0002d3; 	T(CMP(*(dw*)(raddr(ss,bp+var_568)), 0));	// 40810 cmp     [bp+var_568], 0 ;~ 1678:02D3
cs=0x1678;eip=0x0002d8; 	R(JLE(loc_25046));	// 40811 jle     short loc_25046 ;~ 1678:02D8
cs=0x1678;eip=0x0002da; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 40812 mov     bx, [bp+arg_0] ;~ 1678:02DA
cs=0x1678;eip=0x0002dd; 	T(CMP(*(dw*)(raddr(ds,bx+2)), 0));	// 40813 cmp     word ptr [bx+2], 0 ;~ 1678:02DD
cs=0x1678;eip=0x0002e1; 	R(JGE(loc_25046));	// 40814 jge     short loc_25046 ;~ 1678:02E1
cs=0x1678;eip=0x0002e3; 	R(JMP(loc_24f9f));	// 40815 jmp     loc_24F9F ;~ 1678:02E3
loc_25046:
	// 7194 
cs=0x1678;eip=0x0002e6; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 40820 push    word ptr [bp+var_14] ; int ;~ 1678:02E6
cs=0x1678;eip=0x0002e9; 	R(CALLF(_abs,0));	// 40821 call    _abs ;~ 1678:02E9
cs=0x1678;eip=0x0002ee; 	T(ADD(sp, 2));	// 40822 add     sp, 2 ;~ 1678:02EE
cs=0x1678;eip=0x0002f1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 40823 mov     bx, [bp+arg_0] ;~ 1678:02F1
cs=0x1678;eip=0x0002f4; 	T(MOV(cx, *(dw*)(raddr(ds,bx+0x10))));	// 40824 mov     cx, [bx+10h] ;~ 1678:02F4
cs=0x1678;eip=0x0002f7; 	T(SHL(cx, 1));	// 40825 shl     cx, 1 ;~ 1678:02F7
cs=0x1678;eip=0x0002f9; 	T(CMP(cx, ax));	// 40826 cmp     cx, ax ;~ 1678:02F9
cs=0x1678;eip=0x0002fb; 	R(JLE(loc_25077));	// 40827 jle     short loc_25077 ;~ 1678:02FB
cs=0x1678;eip=0x0002fd; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_10)))));	// 40828 push    word ptr [bp+var_10] ; int ;~ 1678:02FD
cs=0x1678;eip=0x000300; 	R(CALLF(_abs,0));	// 40829 call    _abs ;~ 1678:0300
cs=0x1678;eip=0x000305; 	T(ADD(sp, 2));	// 40830 add     sp, 2 ;~ 1678:0305
cs=0x1678;eip=0x000308; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 40831 mov     bx, [bp+arg_0] ;~ 1678:0308
cs=0x1678;eip=0x00030b; 	T(MOV(cx, *(dw*)(raddr(ds,bx+0x10))));	// 40832 mov     cx, [bx+10h] ;~ 1678:030B
cs=0x1678;eip=0x00030e; 	T(SHL(cx, 1));	// 40833 shl     cx, 1 ;~ 1678:030E
cs=0x1678;eip=0x000310; 	T(CMP(cx, ax));	// 40834 cmp     cx, ax ;~ 1678:0310
cs=0x1678;eip=0x000312; 	R(JLE(loc_25077));	// 40835 jle     short loc_25077 ;~ 1678:0312
cs=0x1678;eip=0x000314; 	R(JMP(loc_24f9f));	// 40836 jmp     loc_24F9F ;~ 1678:0314
loc_25077:
	// 7195 
cs=0x1678;eip=0x000317; 	T(ax = bp+var_56a);	// 40841 lea     ax, [bp+var_56A] ;~ 1678:0317
cs=0x1678;eip=0x00031b; 	X(PUSH(ax));	// 40842 push    ax ;~ 1678:031B
cs=0x1678;eip=0x00031c; 	X(PUSH(cs));	// 40843 push    cs ;~ 1678:031C
cs=0x1678;eip=0x00031d; 	R(CALL(vector_op_unk2,0));	// 40844 call    near ptr vector_op_unk2 ;~ 1678:031D
cs=0x1678;eip=0x000320; 	T(ADD(sp, 2));	// 40845 add     sp, 2 ;~ 1678:0320
cs=0x1678;eip=0x000323; 	X(MOV(byte_4393d, al));	// 40846 mov     byte_4393D, al ;~ 1678:0323
cs=0x1678;eip=0x000326; 	T(CBW);	// 40847 cbw ;~ 1678:0326
cs=0x1678;eip=0x000327; 	T(MOV(bx, ax));	// 40848 mov     bx, ax ;~ 1678:0327
cs=0x1678;eip=0x000329; 	T(SHL(bx, 1));	// 40849 shl     bx, 1 ;~ 1678:0329
cs=0x1678;eip=0x00032b; 	T(SHL(bx, 1));	// 40850 shl     bx, 1 ;~ 1678:032B
cs=0x1678;eip=0x00032d; 	T(MOV(ax, *(dw*)(((db*)invpow2tbl)+bx)));	// 40851 mov     ax, word ptr invpow2tbl[bx] ;~ 1678:032D
cs=0x1678;eip=0x000331; 	T(MOV(dx, *(dw*)((((db*)invpow2tbl)+2)+bx)));	// 40852 mov     dx, word ptr (invpow2tbl+2)[bx] ;~ 1678:0331
cs=0x1678;eip=0x000335; 	X(MOV(*(dw*)(raddr(ss,bp+var_45c)), ax));	// 40853 mov     [bp+var_45C], ax ;~ 1678:0335
cs=0x1678;eip=0x000339; 	X(MOV(*(dw*)(raddr(ss,bp+var_45a)), dx));	// 40854 mov     [bp+var_45A], dx ;~ 1678:0339
cs=0x1678;eip=0x00033d; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 40855 mov     [bp+var_A], ax ;~ 1678:033D
cs=0x1678;eip=0x000340; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), dx));	// 40856 mov     [bp+var_8], dx ;~ 1678:0340
loc_250a3:
	// 7196 
cs=0x1678;eip=0x000343; 	T(MOV(ax, word_443f2));	// 40859 mov     ax, word_443F2  ; initialized to 190h in polyinfo_reset() ;~ 1678:0343
cs=0x1678;eip=0x000346; 	X(MOV(word_4394e, ax));	// 40860 mov     word_4394E, ax ;~ 1678:0346
cs=0x1678;eip=0x000349; 	X(MOV(word_45d98, ax));	// 40861 mov     word_45D98, ax ;~ 1678:0349
cs=0x1678;eip=0x00034c; 	X(MOV(word_4554a, 0));	// 40862 mov     word_4554A, 0 ;~ 1678:034C
cs=0x1678;eip=0x000352; 	X(MOV(*(dw*)(raddr(ss,bp+var_45e)), 0));	// 40863 mov     [bp+var_45E], 0 ;~ 1678:0352
cs=0x1678;eip=0x000358; 	T(CMP(transshapenumverts, 8));	// 40864 cmp     transshapenumverts, 8 ;~ 1678:0358
cs=0x1678;eip=0x00035d; 	R(JBE(loc_250c6));	// 40865 jbe     short loc_250C6 ;~ 1678:035D
cs=0x1678;eip=0x00035f; 	X(MOV(transshapenumvertscopy, 8));	// 40866 mov     transshapenumvertscopy, 8 ;~ 1678:035F
cs=0x1678;eip=0x000364; 	R(JMP(loc_250cc));	// 40867 jmp     short loc_250CC ;~ 1678:0364
loc_250c6:
	// 7197 
cs=0x1678;eip=0x000366; 	T(MOV(al, *(db*)(((db*)&transshapenumverts))));	// 40871 mov     al, byte ptr transshapenumverts ;~ 1678:0366
cs=0x1678;eip=0x000369; 	X(MOV(transshapenumvertscopy, al));	// 40872 mov     transshapenumvertscopy, al ;~ 1678:0369
loc_250cc:
	// 7198 
cs=0x1678;eip=0x00036c; 	T(CMP(transshapenumvertscopy, 4));	// 40875 cmp     transshapenumvertscopy, 4 ;~ 1678:036C
cs=0x1678;eip=0x000371; 	R(JBE(loc_250e6));	// 40876 jbe     short loc_250E6 ;~ 1678:0371
cs=0x1678;eip=0x000373; 	T(LES(bx, transshapeverts));	// 40877 les     bx, transshapeverts ;~ 1678:0373
cs=0x1678;eip=0x000377; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1A))));	// 40878 mov     ax, es:[bx+1Ah] ;~ 1678:0377
cs=0x1678;eip=0x00037b; 	T(CMP(*(dw*)(raddr(es,bx+2)), ax));	// 40879 cmp     es:[bx+2], ax ;~ 1678:037B
cs=0x1678;eip=0x00037f; 	R(JNZ(loc_250e6));	// 40880 jnz     short loc_250E6 ;~ 1678:037F
cs=0x1678;eip=0x000381; 	X(MOV(transshapenumvertscopy, 4));	// 40881 mov     transshapenumvertscopy, 4 ;~ 1678:0381
loc_250e6:
	// 7199 
cs=0x1678;eip=0x000386; 	X(MOV(*(raddr(ss,bp+var_44a)), 0x0F));	// 40885 mov     [bp+var_44A], 0Fh ;~ 1678:0386
cs=0x1678;eip=0x00038b; 	X(MOV(*(dw*)(raddr(ss,bp+var_460)), 1));	// 40886 mov     [bp+var_460], 1 ;~ 1678:038B
cs=0x1678;eip=0x000391; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), 0));	// 40887 mov     [bp+var_1A], 0 ;~ 1678:0391
cs=0x1678;eip=0x000396; 	T(SUB(si, si));	// 40888 sub     si, si ;~ 1678:0396
cs=0x1678;eip=0x000398; 	R(JMP(loc_2513f));	// 40889 jmp     short loc_2513F ;~ 1678:0398
loc_250fa:
	// 7200 
cs=0x1678;eip=0x00039a; 	X(MOV(*(dw*)(raddr(ss,bp+var_460)), 0));	// 40893 mov     [bp+var_460], 0 ;~ 1678:039A
cs=0x1678;eip=0x0003a0; 	X(MOV(*(raddr(ss,bp+si+var_562)), 0));	// 40894 mov     [bp+si+var_562], 0 ;~ 1678:03A0
cs=0x1678;eip=0x0003a5; 	T(MOV(bx, si));	// 40895 mov     bx, si ;~ 1678:03A5
cs=0x1678;eip=0x0003a7; 	T(SHL(bx, 1));	// 40896 shl     bx, 1 ;~ 1678:03A7
cs=0x1678;eip=0x0003a9; 	X(PUSH(*(dw*)(((db*)polyvertpointptrtab)+bx)));	// 40897 push    polyvertpointptrtab[bx] ;~ 1678:03A9
cs=0x1678;eip=0x0003ad; 	T(ax = bp+var_56a);	// 40898 lea     ax, [bp+var_56A] ;~ 1678:03AD
cs=0x1678;eip=0x0003b1; 	X(PUSH(ax));	// 40899 push    ax ;~ 1678:03B1
cs=0x1678;eip=0x0003b2; 	R(CALLF(vector_to_point,0));	// 40900 call    vector_to_point ;~ 1678:03B2
cs=0x1678;eip=0x0003b7; 	T(ADD(sp, 4));	// 40901 add     sp, 4 ;~ 1678:03B7
cs=0x1678;eip=0x0003ba; 	T(CMP(*(raddr(ss,bp+var_44a)), 0));	// 40902 cmp     [bp+var_44A], 0 ;~ 1678:03BA
cs=0x1678;eip=0x0003bf; 	R(JZ(loc_25134));	// 40903 jz      short loc_25134 ;~ 1678:03BF
cs=0x1678;eip=0x0003c1; 	T(MOV(bx, si));	// 40904 mov     bx, si ;~ 1678:03C1
cs=0x1678;eip=0x0003c3; 	T(SHL(bx, 1));	// 40905 shl     bx, 1 ;~ 1678:03C3
cs=0x1678;eip=0x0003c5; 	X(PUSH(*(dw*)(((db*)polyvertpointptrtab)+bx)));	// 40906 push    polyvertpointptrtab[bx] ;~ 1678:03C5
cs=0x1678;eip=0x0003c9; 	X(PUSH(cs));	// 40907 push    cs ;~ 1678:03C9
cs=0x1678;eip=0x0003ca; 	R(CALL(rect_compare_point,0));	// 40908 call    near ptr rect_compare_point ;~ 1678:03CA
cs=0x1678;eip=0x0003cd; 	T(ADD(sp, 2));	// 40909 add     sp, 2 ;~ 1678:03CD
cs=0x1678;eip=0x0003d0; 	X(AND(*(raddr(ss,bp+var_44a)), al));	// 40910 and     [bp+var_44A], al ;~ 1678:03D0
loc_25134:
	// 7201 
cs=0x1678;eip=0x0003d4; 	T(CMP(*(raddr(ss,bp+var_44a)), 0));	// 40913 cmp     [bp+var_44A], 0 ;~ 1678:03D4
cs=0x1678;eip=0x0003d9; 	R(JNZ(loc_2513e));	// 40914 jnz     short loc_2513E ;~ 1678:03D9
cs=0x1678;eip=0x0003db; 	R(JMP(loc_25220));	// 40915 jmp     loc_25220 ;~ 1678:03DB
loc_2513e:
	// 7202 
cs=0x1678;eip=0x0003de; 	T(INC(si));	// 40920 inc     si ;~ 1678:03DE
loc_2513f:
	// 7203 
cs=0x1678;eip=0x0003df; 	T(MOV(al, transshapenumvertscopy));	// 40923 mov     al, transshapenumvertscopy ;~ 1678:03DF
cs=0x1678;eip=0x0003e2; 	T(SUB(ah, ah));	// 40924 sub     ah, ah ;~ 1678:03E2
cs=0x1678;eip=0x0003e4; 	T(CMP(ax, si));	// 40925 cmp     ax, si ;~ 1678:03E4
cs=0x1678;eip=0x0003e6; 	R(JA(loc_2514b));	// 40926 ja      short loc_2514B ;~ 1678:03E6
cs=0x1678;eip=0x0003e8; 	R(JMP(loc_251f6));	// 40927 jmp     loc_251F6 ;~ 1678:03E8
loc_2514b:
	// 7204 
cs=0x1678;eip=0x0003eb; 	T(MOV(bx, si));	// 40931 mov     bx, si ;~ 1678:03EB
cs=0x1678;eip=0x0003ed; 	T(SHL(bx, 1));	// 40932 shl     bx, 1 ;~ 1678:03ED
cs=0x1678;eip=0x0003ef; 	T(MOV(ax, si));	// 40933 mov     ax, si ;~ 1678:03EF
cs=0x1678;eip=0x0003f1; 	T(SHL(ax, 1));	// 40934 shl     ax, 1 ;~ 1678:03F1
cs=0x1678;eip=0x0003f3; 	T(SHL(ax, 1));	// 40935 shl     ax, 1 ;~ 1678:03F3
cs=0x1678;eip=0x0003f5; 	T(ADD(ax, bp));	// 40936 add     ax, bp ;~ 1678:03F5
cs=0x1678;eip=0x0003f7; 	T(SUB(ax, 0x416));	// 40937 sub     ax, 416h        ; array access in var_416, but dunno how to make IDA show this ;~ 1678:03F7
cs=0x1678;eip=0x0003fa; 	X(MOV(*(dw*)(((db*)polyvertpointptrtab)+bx), ax));	// 40938 mov     polyvertpointptrtab[bx], ax ;~ 1678:03FA
cs=0x1678;eip=0x0003fe; 	T(MOV(ax, si));	// 40939 mov     ax, si ;~ 1678:03FE
cs=0x1678;eip=0x000400; 	T(MOV(cx, ax));	// 40940 mov     cx, ax ;~ 1678:0400
cs=0x1678;eip=0x000402; 	T(SHL(ax, 1));	// 40941 shl     ax, 1 ;~ 1678:0402
cs=0x1678;eip=0x000404; 	T(ADD(ax, cx));	// 40942 add     ax, cx ;~ 1678:0404
cs=0x1678;eip=0x000406; 	T(SHL(ax, 1));	// 40943 shl     ax, 1 ;~ 1678:0406
cs=0x1678;eip=0x000408; 	T(ADD(ax, *(dw*)(((db*)&transshapeverts))));	// 40944 add     ax, word ptr transshapeverts ;~ 1678:0408
cs=0x1678;eip=0x00040c; 	T(MOV(dx, *(dw*)(((db*)&transshapeverts)+2)));	// 40945 mov     dx, word ptr transshapeverts+2 ;~ 1678:040C
cs=0x1678;eip=0x000410; 	X(PUSH(si));	// 40946 push    si ;~ 1678:0410
cs=0x1678;eip=0x000411; 	X(PUSH(di));	// 40947 push    di ;~ 1678:0411
cs=0x1678;eip=0x000412; 	T(di = bp+var_458);	// 40948 lea     di, [bp+var_458] ;~ 1678:0412
cs=0x1678;eip=0x000416; 	T(MOV(si, ax));	// 40949 mov     si, ax ;~ 1678:0416
cs=0x1678;eip=0x000418; 	X(PUSH(ss));	// 40950 push    ss ;~ 1678:0418
cs=0x1678;eip=0x000419; 	X(POP(es));	// 40951 pop     es ;~ 1678:0419
cs=0x1678;eip=0x00041a; 	X(PUSH(ds));	// 40952 push    ds ;~ 1678:041A
cs=0x1678;eip=0x00041b; 	T(MOV(ds, dx));	// 40953 mov     ds, dx ;~ 1678:041B
cs=0x1678;eip=0x00041d; 	X(MOVSW);	// 40954 movsw ;~ 1678:041D
cs=0x1678;eip=0x00041e; 	X(MOVSW);	// 40955 movsw ;~ 1678:041E
cs=0x1678;eip=0x00041f; 	X(MOVSW);	// 40956 movsw ;~ 1678:041F
cs=0x1678;eip=0x000420; 	X(POP(ds));	// 40957 pop     ds ;~ 1678:0420
cs=0x1678;eip=0x000421; 	X(POP(di));	// 40958 pop     di ;~ 1678:0421
cs=0x1678;eip=0x000422; 	X(POP(si));	// 40959 pop     si ;~ 1678:0422
cs=0x1678;eip=0x000423; 	T(CMP(select_rect_param, 0));	// 40960 cmp     select_rect_param, 0 ;~ 1678:0423
cs=0x1678;eip=0x000428; 	R(JZ(loc_25196));	// 40961 jz      short loc_25196 ;~ 1678:0428
cs=0x1678;eip=0x00042a; 	X(SAR(*(dw*)(raddr(ss,bp+var_458)), 1));	// 40962 sar     [bp+var_458], 1 ;~ 1678:042A
cs=0x1678;eip=0x00042e; 	X(SAR(*(dw*)(raddr(ss,bp+var_456)), 1));	// 40963 sar     [bp+var_456], 1 ;~ 1678:042E
cs=0x1678;eip=0x000432; 	X(SAR(*(dw*)(raddr(ss,bp+var_454)), 1));	// 40964 sar     [bp+var_454], 1 ;~ 1678:0432
loc_25196:
	// 7205 
cs=0x1678;eip=0x000436; 	T(ax = bp+var_56a);	// 40967 lea     ax, [bp+var_56A] ;~ 1678:0436
cs=0x1678;eip=0x00043a; 	X(PUSH(ax));	// 40968 push    ax ;~ 1678:043A
cs=0x1678;eip=0x00043b; 	T(ax = bp+var_42a);	// 40969 lea     ax, [bp+var_42A] ;~ 1678:043B
cs=0x1678;eip=0x00043f; 	X(PUSH(ax));	// 40970 push    ax ;~ 1678:043F
cs=0x1678;eip=0x000440; 	T(ax = bp+var_458);	// 40971 lea     ax, [bp+var_458] ;~ 1678:0440
cs=0x1678;eip=0x000444; 	X(PUSH(ax));	// 40972 push    ax ;~ 1678:0444
cs=0x1678;eip=0x000445; 	R(CALLF(mat_mul_vector,0));	// 40973 call    mat_mul_vector ;~ 1678:0445
cs=0x1678;eip=0x00044a; 	T(ADD(sp, 6));	// 40974 add     sp, 6 ;~ 1678:044A
cs=0x1678;eip=0x00044d; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 40975 mov     ax, word ptr [bp+var_14] ;~ 1678:044D
cs=0x1678;eip=0x000450; 	X(ADD(*(dw*)(raddr(ss,bp+var_56a)), ax));	// 40976 add     [bp+var_56A], ax ;~ 1678:0450
cs=0x1678;eip=0x000454; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_14+2)))));	// 40977 mov     ax, word ptr [bp+var_14+2] ;~ 1678:0454
cs=0x1678;eip=0x000457; 	X(ADD(*(dw*)(raddr(ss,bp+var_568)), ax));	// 40978 add     [bp+var_568], ax ;~ 1678:0457
cs=0x1678;eip=0x00045b; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_10)))));	// 40979 mov     ax, word ptr [bp+var_10] ;~ 1678:045B
cs=0x1678;eip=0x00045e; 	X(ADD(*(dw*)(raddr(ss,bp+var_566)), ax));	// 40980 add     [bp+var_566], ax ;~ 1678:045E
cs=0x1678;eip=0x000462; 	T(MOV(bx, si));	// 40981 mov     bx, si ;~ 1678:0462
cs=0x1678;eip=0x000464; 	T(MOV(ax, bx));	// 40982 mov     ax, bx ;~ 1678:0464
cs=0x1678;eip=0x000466; 	T(SHL(bx, 1));	// 40983 shl     bx, 1 ;~ 1678:0466
cs=0x1678;eip=0x000468; 	T(ADD(bx, ax));	// 40984 add     bx, ax ;~ 1678:0468
cs=0x1678;eip=0x00046a; 	T(SHL(bx, 1));	// 40985 shl     bx, 1           ; bx = vertex index * 6 ;~ 1678:046A
cs=0x1678;eip=0x00046c; 	T(ADD(bx, bp));	// 40986 add     bx, bp ;~ 1678:046C
cs=0x1678;eip=0x00046e; 	X(PUSH(si));	// 40987 push    si ;~ 1678:046E
cs=0x1678;eip=0x00046f; 	X(PUSH(di));	// 40988 push    di ;~ 1678:046F
cs=0x1678;eip=0x000470; 	T(di = bx-0x0B6E);	// 40989 lea     di, [bx-0B6Eh] ;~ 1678:0470
cs=0x1678;eip=0x000474; 	T(si = bp+var_56a);	// 40990 lea     si, [bp+var_56A] ;~ 1678:0474
cs=0x1678;eip=0x000478; 	X(PUSH(ss));	// 40991 push    ss ;~ 1678:0478
cs=0x1678;eip=0x000479; 	X(POP(es));	// 40992 pop     es ;~ 1678:0479
cs=0x1678;eip=0x00047a; 	X(MOVSW);	// 40993 movsw ;~ 1678:047A
cs=0x1678;eip=0x00047b; 	X(MOVSW);	// 40994 movsw ;~ 1678:047B
cs=0x1678;eip=0x00047c; 	X(MOVSW);	// 40995 movsw ;~ 1678:047C
cs=0x1678;eip=0x00047d; 	X(POP(di));	// 40996 pop     di ;~ 1678:047D
cs=0x1678;eip=0x00047e; 	X(POP(si));	// 40997 pop     si ;~ 1678:047E
cs=0x1678;eip=0x00047f; 	T(CMP(*(dw*)(raddr(ss,bp+var_566)), 0x0C));	// 40998 cmp     [bp+var_566], 0Ch ;~ 1678:047F
cs=0x1678;eip=0x000484; 	R(JL(loc_251e9));	// 40999 jl      short loc_251E9 ;~ 1678:0484
cs=0x1678;eip=0x000486; 	R(JMP(loc_250fa));	// 41000 jmp     loc_250FA ;~ 1678:0486
loc_251e9:
	// 7206 
cs=0x1678;eip=0x000489; 	X(MOV(*(raddr(ss,bp+si+var_562)), 1));	// 41004 mov     [bp+si+var_562], 1 ;~ 1678:0489
cs=0x1678;eip=0x00048e; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), 1));	// 41005 mov     [bp+var_1A], 1 ;~ 1678:048E
cs=0x1678;eip=0x000493; 	R(JMP(loc_2513e));	// 41006 jmp     loc_2513E ;~ 1678:0493
loc_251f6:
	// 7207 
cs=0x1678;eip=0x000496; 	T(CMP(*(dw*)(raddr(ss,bp+var_460)), 0));	// 41010 cmp     [bp+var_460], 0 ;~ 1678:0496
cs=0x1678;eip=0x00049b; 	R(JNZ(_done_ret_neg1));	// 41011 jnz     short _done_ret_neg1 ;~ 1678:049B
cs=0x1678;eip=0x00049d; 	T(CMP(*(dw*)(raddr(ss,bp+var_1a)), 0));	// 41012 cmp     [bp+var_1A], 0 ;~ 1678:049D
cs=0x1678;eip=0x0004a1; 	R(JZ(_done_ret_neg1));	// 41013 jz      short _done_ret_neg1 ;~ 1678:04A1
cs=0x1678;eip=0x0004a3; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 41014 push    word ptr [bp+var_14] ; int ;~ 1678:04A3
cs=0x1678;eip=0x0004a6; 	R(CALLF(_abs,0));	// 41015 call    _abs ;~ 1678:04A6
cs=0x1678;eip=0x0004ab; 	T(ADD(sp, 2));	// 41016 add     sp, 2 ;~ 1678:04AB
cs=0x1678;eip=0x0004ae; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 41017 mov     bx, [bp+arg_0] ;~ 1678:04AE
cs=0x1678;eip=0x0004b1; 	T(CMP(*(dw*)(raddr(ds,bx+0x10)), ax));	// 41018 cmp     [bx+10h], ax ;~ 1678:04B1
cs=0x1678;eip=0x0004b4; 	R(JGE(loc_25220));	// 41019 jge     short loc_25220 ;~ 1678:04B4
_done_ret_neg1:
	// 7208 
cs=0x1678;eip=0x0004b6; 	T(MOV(ax, 0x0FFFF));	// 41023 mov     ax, 0FFFFh ;~ 1678:04B6
cs=0x1678;eip=0x0004b9; 	X(POP(si));	// 41024 pop     si ;~ 1678:04B9
cs=0x1678;eip=0x0004ba; 	X(POP(di));	// 41025 pop     di ;~ 1678:04BA
cs=0x1678;eip=0x0004bb; 	T(MOV(sp, bp));	// 41026 mov     sp, bp ;~ 1678:04BB
cs=0x1678;eip=0x0004bd; 	X(POP(bp));	// 41027 pop     bp ;~ 1678:04BD
cs=0x1678;eip=0x0004be; 	R(RETF(0));	// 41028 retf ;~ 1678:04BE
loc_25220:
	// 7209 
cs=0x1678;eip=0x0004c0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 41034 mov     bx, [bp+arg_0] ;~ 1678:04C0
cs=0x1678;eip=0x0004c3; 	T(MOV(bx, *(dw*)(raddr(ds,bx+6))));	// 41035 mov     bx, [bx+6] ;~ 1678:04C3
cs=0x1678;eip=0x0004c6; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0A))));	// 41036 mov     ax, [bx+0Ah] ;~ 1678:04C6
cs=0x1678;eip=0x0004c9; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0C))));	// 41037 mov     dx, [bx+0Ch] ;~ 1678:04C9
cs=0x1678;eip=0x0004cc; 	X(MOV(*(dw*)(((db*)&transshapeprimitives)), ax));	// 41038 mov     word ptr transshapeprimitives, ax ;~ 1678:04CC
cs=0x1678;eip=0x0004cf; 	X(MOV(*(dw*)(((db*)&transshapeprimitives)+2), dx));	// 41039 mov     word ptr transshapeprimitives+2, dx ;~ 1678:04CF
loc_25233:
	// 7210 
cs=0x1678;eip=0x0004d3; 	T(LES(bx, transshapeprimitives));	// 41042 les     bx, transshapeprimitives ;~ 1678:04D3
cs=0x1678;eip=0x0004d7; 	T(MOV(bl, *(raddr(es,bx))));	// 41043 mov     bl, es:[bx]     ; primitives+0 = primitive type ;~ 1678:04D7
cs=0x1678;eip=0x0004da; 	T(SUB(bh, bh));	// 41044 sub     bh, bh ;~ 1678:04DA
cs=0x1678;eip=0x0004dc; 	T(MOV(al, *((&primidxcounttab)+bx)));	// 41045 mov     al, primidxcounttab[bx] ; look up maybe indexcount from a table? ;~ 1678:04DC
cs=0x1678;eip=0x0004e0; 	T(SUB(ah, ah));	// 41046 sub     ah, ah ;~ 1678:04E0
cs=0x1678;eip=0x0004e2; 	T(ADD(ax, transshapenumpaints));	// 41047 add     ax, transshapenumpaints ;~ 1678:04E2
cs=0x1678;eip=0x0004e6; 	T(ADD(ax, *(dw*)(((db*)&transshapeprimitives))));	// 41048 add     ax, word ptr transshapeprimitives ;~ 1678:04E6
cs=0x1678;eip=0x0004ea; 	T(MOV(dx, es));	// 41049 mov     dx, es ;~ 1678:04EA
cs=0x1678;eip=0x0004ec; 	T(ADD(ax, 2));	// 41050 add     ax, 2 ;~ 1678:04EC
cs=0x1678;eip=0x0004ef; 	X(MOV(transshapeprimptr, ax));	// 41051 mov     transshapeprimptr, ax ;~ 1678:04EF
cs=0x1678;eip=0x0004f2; 	X(MOV(word_4186c, dx));	// 41052 mov     word_4186C, dx ;~ 1678:04F2
cs=0x1678;eip=0x0004f6; 	T(MOV(bx, *(dw*)(((db*)&transshapeprimitives))));	// 41053 mov     bx, word ptr transshapeprimitives ;~ 1678:04F6
cs=0x1678;eip=0x0004fa; 	T(MOV(al, *(raddr(es,bx+1))));	// 41054 mov     al, es:[bx+1]   ; primitives+1 = primitive flags ;~ 1678:04FA
cs=0x1678;eip=0x0004fe; 	T(SUB(ah, ah));	// 41055 sub     ah, ah ;~ 1678:04FE
cs=0x1678;eip=0x000500; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 41056 mov     [bp+var_2], ax ;~ 1678:0500
cs=0x1678;eip=0x000503; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 41057 mov     [bp+var_4], 0 ;~ 1678:0503
cs=0x1678;eip=0x000508; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_b78))));	// 41058 les     bx, [bp+var_B78] ;~ 1678:0508
cs=0x1678;eip=0x00050c; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 41059 mov     ax, es:[bx] ;~ 1678:050C
cs=0x1678;eip=0x00050f; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 41060 mov     dx, es:[bx+2] ;~ 1678:050F
cs=0x1678;eip=0x000513; 	T(AND(ax, *(dw*)(raddr(ss,bp+var_45c))));	// 41061 and     ax, [bp+var_45C] ;~ 1678:0513
cs=0x1678;eip=0x000517; 	T(AND(dx, *(dw*)(raddr(ss,bp+var_45a))));	// 41062 and     dx, [bp+var_45A] ;~ 1678:0517
cs=0x1678;eip=0x00051b; 	T(OR(dx, ax));	// 41063 or      dx, ax ;~ 1678:051B
cs=0x1678;eip=0x00051d; 	R(JNZ(loc_25282));	// 41064 jnz     short loc_25282 ;~ 1678:051D
cs=0x1678;eip=0x00051f; 	R(JMP(loc_25801));	// 41065 jmp     loc_25801 ;~ 1678:051F
loc_25282:
	// 7211 
cs=0x1678;eip=0x000522; 	T(LES(bx, transshapeprimitives));	// 41069 les     bx, transshapeprimitives ;~ 1678:0522
cs=0x1678;eip=0x000526; 	T(MOV(al, *(raddr(es,bx))));	// 41070 mov     al, es:[bx]     ; primitives+0 = type ;~ 1678:0526
cs=0x1678;eip=0x000529; 	T(SUB(ah, ah));	// 41071 sub     ah, ah ;~ 1678:0529
cs=0x1678;eip=0x00052b; 	X(MOV(*(dw*)(raddr(ss,bp+var_418)), ax));	// 41072 mov     [bp+var_418], ax ;~ 1678:052B
cs=0x1678;eip=0x00052f; 	T(MOV(bx, ax));	// 41073 mov     bx, ax ;~ 1678:052F
cs=0x1678;eip=0x000531; 	T(MOV(al, *((&primidxcounttab)+bx)));	// 41074 mov     al, primidxcounttab[bx] ;~ 1678:0531
cs=0x1678;eip=0x000535; 	X(MOV(transshapenumvertscopy, al));	// 41075 mov     transshapenumvertscopy, al ;~ 1678:0535
cs=0x1678;eip=0x000538; 	T(MOV(al, *((&primtypetab)+bx)));	// 41076 mov     al, primtypetab[bx] ;~ 1678:0538
cs=0x1678;eip=0x00053c; 	X(MOV(*(raddr(ss,bp+var_6)), al));	// 41077 mov     [bp+var_6], al  ; primunktab maps from file-based primitive type to internal type: ;~ 1678:053C
cs=0x1678;eip=0x00053f; 	T(MOV(ax, polyinfoptrnext));	// 41084 mov     ax, polyinfoptrnext ;~ 1678:053F
cs=0x1678;eip=0x000542; 	T(ADD(ax, polyinfoptr));	// 41085 add     ax, polyinfoptr ;~ 1678:0542
cs=0x1678;eip=0x000546; 	T(MOV(dx, word_40ed4));	// 41086 mov     dx, word_40ED4 ;~ 1678:0546
cs=0x1678;eip=0x00054a; 	X(MOV(*(dw*)(((db*)&transshapepolyinfo)), ax));	// 41087 mov     word ptr transshapepolyinfo, ax ;~ 1678:054A
cs=0x1678;eip=0x00054d; 	X(MOV(*(dw*)(((db*)&transshapepolyinfo)+2), dx));	// 41088 mov     word ptr transshapepolyinfo+2, dx ;~ 1678:054D
cs=0x1678;eip=0x000551; 	T(MOV(bx, polyinfonumpolys));	// 41089 mov     bx, polyinfonumpolys ;~ 1678:0551
cs=0x1678;eip=0x000555; 	T(SHL(bx, 1));	// 41090 shl     bx, 1 ;~ 1678:0555
cs=0x1678;eip=0x000557; 	T(SHL(bx, 1));	// 41091 shl     bx, 1 ;~ 1678:0557
cs=0x1678;eip=0x000559; 	X(MOV(*(dw*)(((db*)polyinfoptrs)+bx), ax));	// 41092 mov     word ptr polyinfoptrs[bx], ax ;~ 1678:0559
cs=0x1678;eip=0x00055d; 	X(MOV(*(dw*)((((db*)polyinfoptrs)+2)+bx), dx));	// 41093 mov     word ptr (polyinfoptrs+2)[bx], dx ;~ 1678:055D
cs=0x1678;eip=0x000561; 	T(MOV(bl, transshapematerial));	// 41094 mov     bl, transshapematerial ;~ 1678:0561
cs=0x1678;eip=0x000565; 	T(SUB(bh, bh));	// 41095 sub     bh, bh ;~ 1678:0565
cs=0x1678;eip=0x000567; 	T(ADD(bx, *(dw*)(((db*)&transshapeprimitives))));	// 41096 add     bx, word ptr transshapeprimitives ;~ 1678:0567
cs=0x1678;eip=0x00056b; 	T(MOV(es, *(dw*)(((db*)&transshapeprimitives)+2)));	// 41097 mov     es, word ptr transshapeprimitives+2 ;~ 1678:056B
cs=0x1678;eip=0x00056f; 	T(MOV(al, *(raddr(es,bx+2))));	// 41098 mov     al, es:[bx+2]   ; primitives+2+X = paint job color, X in [0..numpaints] ;~ 1678:056F
cs=0x1678;eip=0x000573; 	X(MOV(transprimitivepaintjob, al));	// 41099 mov     transprimitivepaintjob, al ;~ 1678:0573
cs=0x1678;eip=0x000576; 	T(MOV(ax, transshapenumpaints));	// 41100 mov     ax, transshapenumpaints ;~ 1678:0576
cs=0x1678;eip=0x000579; 	T(ADD(ax, 2));	// 41101 add     ax, 2 ;~ 1678:0579
cs=0x1678;eip=0x00057c; 	X(ADD(*(dw*)(((db*)&transshapeprimitives)), ax));	// 41102 add     word ptr transshapeprimitives, ax ; <- skip header and materials, -> point at indices ;~ 1678:057C
cs=0x1678;eip=0x000580; 	X(MOV(*(raddr(ss,bp+var_44a)), 0x0F));	// 41103 mov     [bp+var_44A], 0Fh ;~ 1678:0580
cs=0x1678;eip=0x000585; 	X(MOV(*(dw*)(raddr(ss,bp+var_460)), 1));	// 41104 mov     [bp+var_460], 1 ;~ 1678:0585
cs=0x1678;eip=0x00058b; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), 0));	// 41105 mov     [bp+var_1A], 0 ;~ 1678:058B
cs=0x1678;eip=0x000590; 	T(MOV(ax, *(dw*)(((db*)&transshapeprimitives))));	// 41106 mov     ax, word ptr transshapeprimitives ;~ 1678:0590
cs=0x1678;eip=0x000593; 	T(MOV(dx, es));	// 41107 mov     dx, es ;~ 1678:0593
cs=0x1678;eip=0x000595; 	X(MOV(transshapeprimindexptr, ax));	// 41108 mov     transshapeprimindexptr, ax ;~ 1678:0595
cs=0x1678;eip=0x000598; 	X(MOV(word_41876, dx));	// 41109 mov     word_41876, dx ;~ 1678:0598
cs=0x1678;eip=0x00059c; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10+2))), 0));	// 41110 mov     word ptr [bp+var_10+2], 0 ;~ 1678:059C
cs=0x1678;eip=0x0005a1; 	R(JMP(loc_25328));	// 41111 jmp     short loc_25328 ;~ 1678:05A1
loc_25304:
	// 7212 
cs=0x1678;eip=0x0005a4; 	X(MOV(*(dw*)(raddr(ss,bp+var_460)), 0));	// 41116 mov     [bp+var_460], 0 ;~ 1678:05A4
loc_2530a:
	// 7213 
cs=0x1678;eip=0x0005aa; 	T(CMP(*(raddr(ss,bp+var_44a)), 0));	// 41119 cmp     [bp+var_44A], 0 ;~ 1678:05AA
cs=0x1678;eip=0x0005af; 	R(JZ(loc_25325));	// 41120 jz      short loc_25325 ;~ 1678:05AF
cs=0x1678;eip=0x0005b1; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_10+2)))));	// 41121 mov     bx, word ptr [bp+var_10+2] ;~ 1678:05B1
cs=0x1678;eip=0x0005b4; 	T(SHL(bx, 1));	// 41122 shl     bx, 1 ;~ 1678:05B4
cs=0x1678;eip=0x0005b6; 	X(PUSH(*(dw*)(((db*)polyvertpointptrtab)+bx)));	// 41123 push    polyvertpointptrtab[bx] ;~ 1678:05B6
cs=0x1678;eip=0x0005ba; 	X(PUSH(cs));	// 41124 push    cs ;~ 1678:05BA
cs=0x1678;eip=0x0005bb; 	R(CALL(rect_compare_point,0));	// 41125 call    near ptr rect_compare_point ;~ 1678:05BB
cs=0x1678;eip=0x0005be; 	T(ADD(sp, 2));	// 41126 add     sp, 2 ;~ 1678:05BE
cs=0x1678;eip=0x0005c1; 	X(AND(*(raddr(ss,bp+var_44a)), al));	// 41127 and     [bp+var_44A], al ;~ 1678:05C1
loc_25325:
	// 7214 
cs=0x1678;eip=0x0005c5; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_10+2)))));	// 41131 inc     word ptr [bp+var_10+2] ;~ 1678:05C5
loc_25328:
	// 7215 
cs=0x1678;eip=0x0005c8; 	T(MOV(al, transshapenumvertscopy));	// 41134 mov     al, transshapenumvertscopy ;~ 1678:05C8
cs=0x1678;eip=0x0005cb; 	T(SUB(ah, ah));	// 41135 sub     ah, ah ;~ 1678:05CB
cs=0x1678;eip=0x0005cd; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+var_10+2))), ax));	// 41136 cmp     word ptr [bp+var_10+2], ax ;~ 1678:05CD
cs=0x1678;eip=0x0005d0; 	R(JC(loc_25335));	// 41137 jb      short loc_25335 ;~ 1678:05D0
cs=0x1678;eip=0x0005d2; 	R(JMP(loc_2542a));	// 41138 jmp     loc_2542A ;~ 1678:05D2
loc_25335:
	// 7216 
cs=0x1678;eip=0x0005d5; 	T(MOV(bx, transshapeprimindexptr));	// 41142 mov     bx, transshapeprimindexptr ;~ 1678:05D5
cs=0x1678;eip=0x0005d9; 	X(INC(transshapeprimindexptr));	// 41143 inc     transshapeprimindexptr ;~ 1678:05D9
cs=0x1678;eip=0x0005dd; 	T(MOV(es, word_41876));	// 41144 mov     es, word_41876 ;~ 1678:05DD
cs=0x1678;eip=0x0005e1; 	T(MOV(al, *(raddr(es,bx))));	// 41145 mov     al, es:[bx] ;~ 1678:05E1
cs=0x1678;eip=0x0005e4; 	T(MOV(si, ax));	// 41146 mov     si, ax ;~ 1678:05E4
cs=0x1678;eip=0x0005e6; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_10+2)))));	// 41147 mov     bx, word ptr [bp+var_10+2] ;~ 1678:05E6
cs=0x1678;eip=0x0005e9; 	T(SHL(bx, 1));	// 41148 shl     bx, 1 ;~ 1678:05E9
cs=0x1678;eip=0x0005eb; 	T(SHL(ax, 1));	// 41149 shl     ax, 1 ;~ 1678:05EB
cs=0x1678;eip=0x0005ed; 	T(SHL(ax, 1));	// 41150 shl     ax, 1 ;~ 1678:05ED
cs=0x1678;eip=0x0005ef; 	T(ADD(ax, bp));	// 41151 add     ax, bp ;~ 1678:05EF
cs=0x1678;eip=0x0005f1; 	T(SUB(ax, 0x416));	// 41152 sub     ax, 416h ;~ 1678:05F1
cs=0x1678;eip=0x0005f4; 	X(MOV(*(dw*)(((db*)polyvertpointptrtab)+bx), ax));	// 41153 mov     polyvertpointptrtab[bx], ax ;~ 1678:05F4
cs=0x1678;eip=0x0005f8; 	T(MOV(al, *(raddr(ss,bp+si+var_562))));	// 41154 mov     al, [bp+si+var_562] ;~ 1678:05F8
cs=0x1678;eip=0x0005fc; 	T(CBW);	// 41155 cbw ;~ 1678:05FC
cs=0x1678;eip=0x0005fd; 	T(CMP(ax, 0x0FFFF));	// 41156 cmp     ax, 0FFFFh ;~ 1678:05FD
cs=0x1678;eip=0x000600; 	R(JZ(loc_25370));	// 41157 jz      short loc_25370 ;~ 1678:0600
cs=0x1678;eip=0x000602; 	T(OR(ax, ax));	// 41158 or      ax, ax ;~ 1678:0602
cs=0x1678;eip=0x000604; 	R(JZ(loc_25304));	// 41159 jz      short loc_25304 ;~ 1678:0604
cs=0x1678;eip=0x000606; 	T(CMP(ax, 1));	// 41160 cmp     ax, 1 ;~ 1678:0606
cs=0x1678;eip=0x000609; 	R(JNZ(loc_2536e));	// 41161 jnz     short loc_2536E ;~ 1678:0609
cs=0x1678;eip=0x00060b; 	R(JMP(loc_253fd));	// 41162 jmp     loc_253FD ;~ 1678:060B
loc_2536e:
	// 7217 
cs=0x1678;eip=0x00060e; 	R(JMP(loc_25325));	// 41166 jmp     short loc_25325 ;~ 1678:060E
loc_25370:
	// 7218 
cs=0x1678;eip=0x000610; 	T(MOV(ax, si));	// 41170 mov     ax, si ;~ 1678:0610
cs=0x1678;eip=0x000612; 	T(MOV(cx, ax));	// 41171 mov     cx, ax ;~ 1678:0612
cs=0x1678;eip=0x000614; 	T(SHL(ax, 1));	// 41172 shl     ax, 1 ;~ 1678:0614
cs=0x1678;eip=0x000616; 	T(ADD(ax, cx));	// 41173 add     ax, cx ;~ 1678:0616
cs=0x1678;eip=0x000618; 	T(SHL(ax, 1));	// 41174 shl     ax, 1 ;~ 1678:0618
cs=0x1678;eip=0x00061a; 	T(ADD(ax, *(dw*)(((db*)&transshapeverts))));	// 41175 add     ax, word ptr transshapeverts ;~ 1678:061A
cs=0x1678;eip=0x00061e; 	T(MOV(dx, *(dw*)(((db*)&transshapeverts)+2)));	// 41176 mov     dx, word ptr transshapeverts+2 ;~ 1678:061E
cs=0x1678;eip=0x000622; 	X(PUSH(si));	// 41177 push    si ;~ 1678:0622
cs=0x1678;eip=0x000623; 	X(PUSH(di));	// 41178 push    di ;~ 1678:0623
cs=0x1678;eip=0x000624; 	T(di = bp+var_458);	// 41179 lea     di, [bp+var_458] ;~ 1678:0624
cs=0x1678;eip=0x000628; 	T(MOV(si, ax));	// 41180 mov     si, ax ;~ 1678:0628
cs=0x1678;eip=0x00062a; 	X(PUSH(ss));	// 41181 push    ss ;~ 1678:062A
cs=0x1678;eip=0x00062b; 	X(POP(es));	// 41182 pop     es ;~ 1678:062B
cs=0x1678;eip=0x00062c; 	X(PUSH(ds));	// 41183 push    ds ;~ 1678:062C
cs=0x1678;eip=0x00062d; 	T(MOV(ds, dx));	// 41184 mov     ds, dx ;~ 1678:062D
cs=0x1678;eip=0x00062f; 	X(MOVSW);	// 41185 movsw ;~ 1678:062F
cs=0x1678;eip=0x000630; 	X(MOVSW);	// 41186 movsw ;~ 1678:0630
cs=0x1678;eip=0x000631; 	X(MOVSW);	// 41187 movsw ;~ 1678:0631
cs=0x1678;eip=0x000632; 	X(POP(ds));	// 41188 pop     ds ;~ 1678:0632
cs=0x1678;eip=0x000633; 	X(POP(di));	// 41189 pop     di ;~ 1678:0633
cs=0x1678;eip=0x000634; 	X(POP(si));	// 41190 pop     si ;~ 1678:0634
cs=0x1678;eip=0x000635; 	T(CMP(select_rect_param, 0));	// 41191 cmp     select_rect_param, 0 ;~ 1678:0635
cs=0x1678;eip=0x00063a; 	R(JZ(loc_253a8));	// 41192 jz      short loc_253A8 ;~ 1678:063A
cs=0x1678;eip=0x00063c; 	X(SAR(*(dw*)(raddr(ss,bp+var_458)), 1));	// 41193 sar     [bp+var_458], 1 ;~ 1678:063C
cs=0x1678;eip=0x000640; 	X(SAR(*(dw*)(raddr(ss,bp+var_456)), 1));	// 41194 sar     [bp+var_456], 1 ;~ 1678:0640
cs=0x1678;eip=0x000644; 	X(SAR(*(dw*)(raddr(ss,bp+var_454)), 1));	// 41195 sar     [bp+var_454], 1 ;~ 1678:0644
loc_253a8:
	// 7219 
cs=0x1678;eip=0x000648; 	T(ax = bp+var_56a);	// 41198 lea     ax, [bp+var_56A] ;~ 1678:0648
cs=0x1678;eip=0x00064c; 	X(PUSH(ax));	// 41199 push    ax ;~ 1678:064C
cs=0x1678;eip=0x00064d; 	T(ax = bp+var_42a);	// 41200 lea     ax, [bp+var_42A] ;~ 1678:064D
cs=0x1678;eip=0x000651; 	X(PUSH(ax));	// 41201 push    ax ;~ 1678:0651
cs=0x1678;eip=0x000652; 	T(ax = bp+var_458);	// 41202 lea     ax, [bp+var_458] ;~ 1678:0652
cs=0x1678;eip=0x000656; 	X(PUSH(ax));	// 41203 push    ax ;~ 1678:0656
cs=0x1678;eip=0x000657; 	R(CALLF(mat_mul_vector,0));	// 41204 call    mat_mul_vector ;~ 1678:0657
cs=0x1678;eip=0x00065c; 	T(ADD(sp, 6));	// 41205 add     sp, 6 ;~ 1678:065C
cs=0x1678;eip=0x00065f; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 41206 mov     ax, word ptr [bp+var_14] ;~ 1678:065F
cs=0x1678;eip=0x000662; 	X(ADD(*(dw*)(raddr(ss,bp+var_56a)), ax));	// 41207 add     [bp+var_56A], ax ;~ 1678:0662
cs=0x1678;eip=0x000666; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_14+2)))));	// 41208 mov     ax, word ptr [bp+var_14+2] ;~ 1678:0666
cs=0x1678;eip=0x000669; 	X(ADD(*(dw*)(raddr(ss,bp+var_568)), ax));	// 41209 add     [bp+var_568], ax ;~ 1678:0669
cs=0x1678;eip=0x00066d; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_10)))));	// 41210 mov     ax, word ptr [bp+var_10] ;~ 1678:066D
cs=0x1678;eip=0x000670; 	X(ADD(*(dw*)(raddr(ss,bp+var_566)), ax));	// 41211 add     [bp+var_566], ax ;~ 1678:0670
cs=0x1678;eip=0x000674; 	T(MOV(bx, si));	// 41212 mov     bx, si ;~ 1678:0674
cs=0x1678;eip=0x000676; 	T(MOV(ax, bx));	// 41213 mov     ax, bx ;~ 1678:0676
cs=0x1678;eip=0x000678; 	T(SHL(bx, 1));	// 41214 shl     bx, 1 ;~ 1678:0678
cs=0x1678;eip=0x00067a; 	T(ADD(bx, ax));	// 41215 add     bx, ax ;~ 1678:067A
cs=0x1678;eip=0x00067c; 	T(SHL(bx, 1));	// 41216 shl     bx, 1 ;~ 1678:067C
cs=0x1678;eip=0x00067e; 	T(ADD(bx, bp));	// 41217 add     bx, bp ;~ 1678:067E
cs=0x1678;eip=0x000680; 	X(PUSH(si));	// 41218 push    si ;~ 1678:0680
cs=0x1678;eip=0x000681; 	X(PUSH(di));	// 41219 push    di ;~ 1678:0681
cs=0x1678;eip=0x000682; 	T(di = bx-0x0B6E);	// 41220 lea     di, [bx-0B6Eh] ;~ 1678:0682
cs=0x1678;eip=0x000686; 	T(si = bp+var_56a);	// 41221 lea     si, [bp+var_56A] ;~ 1678:0686
cs=0x1678;eip=0x00068a; 	X(PUSH(ss));	// 41222 push    ss ;~ 1678:068A
cs=0x1678;eip=0x00068b; 	X(POP(es));	// 41223 pop     es ;~ 1678:068B
cs=0x1678;eip=0x00068c; 	X(MOVSW);	// 41224 movsw ;~ 1678:068C
cs=0x1678;eip=0x00068d; 	X(MOVSW);	// 41225 movsw ;~ 1678:068D
cs=0x1678;eip=0x00068e; 	X(MOVSW);	// 41226 movsw ;~ 1678:068E
cs=0x1678;eip=0x00068f; 	X(POP(di));	// 41227 pop     di ;~ 1678:068F
cs=0x1678;eip=0x000690; 	X(POP(si));	// 41228 pop     si ;~ 1678:0690
cs=0x1678;eip=0x000691; 	T(CMP(*(dw*)(raddr(ss,bp+var_566)), 0x0C));	// 41229 cmp     [bp+var_566], 0Ch ;~ 1678:0691
cs=0x1678;eip=0x000696; 	R(JGE(loc_25406));	// 41230 jge     short loc_25406 ;~ 1678:0696
cs=0x1678;eip=0x000698; 	X(MOV(*(raddr(ss,bp+si+var_562)), 1));	// 41231 mov     [bp+si+var_562], 1 ;~ 1678:0698
loc_253fd:
	// 7220 
cs=0x1678;eip=0x00069d; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), 1));	// 41234 mov     [bp+var_1A], 1 ;~ 1678:069D
cs=0x1678;eip=0x0006a2; 	R(JMP(loc_25325));	// 41235 jmp     loc_25325 ;~ 1678:06A2
loc_25406:
	// 7221 
cs=0x1678;eip=0x0006a6; 	X(MOV(*(dw*)(raddr(ss,bp+var_460)), 0));	// 41240 mov     [bp+var_460], 0 ;~ 1678:06A6
cs=0x1678;eip=0x0006ac; 	X(MOV(*(raddr(ss,bp+si+var_562)), 0));	// 41241 mov     [bp+si+var_562], 0 ;~ 1678:06AC
cs=0x1678;eip=0x0006b1; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_10+2)))));	// 41242 mov     bx, word ptr [bp+var_10+2] ;~ 1678:06B1
cs=0x1678;eip=0x0006b4; 	T(SHL(bx, 1));	// 41243 shl     bx, 1 ;~ 1678:06B4
cs=0x1678;eip=0x0006b6; 	X(PUSH(*(dw*)(((db*)polyvertpointptrtab)+bx)));	// 41244 push    polyvertpointptrtab[bx] ;~ 1678:06B6
cs=0x1678;eip=0x0006ba; 	T(ax = bp+var_56a);	// 41245 lea     ax, [bp+var_56A] ;~ 1678:06BA
cs=0x1678;eip=0x0006be; 	X(PUSH(ax));	// 41246 push    ax ;~ 1678:06BE
cs=0x1678;eip=0x0006bf; 	R(CALLF(vector_to_point,0));	// 41247 call    vector_to_point ;~ 1678:06BF
cs=0x1678;eip=0x0006c4; 	T(ADD(sp, 4));	// 41248 add     sp, 4 ;~ 1678:06C4
cs=0x1678;eip=0x0006c7; 	R(JMP(loc_2530a));	// 41249 jmp     loc_2530A ;~ 1678:06C7
loc_2542a:
	// 7222 
cs=0x1678;eip=0x0006ca; 	T(CMP(*(dw*)(raddr(ss,bp+var_460)), 0));	// 41253 cmp     [bp+var_460], 0 ;~ 1678:06CA
cs=0x1678;eip=0x0006cf; 	R(JZ(loc_25434));	// 41254 jz      short loc_25434 ;~ 1678:06CF
cs=0x1678;eip=0x0006d1; 	R(JMP(loc_25801));	// 41255 jmp     loc_25801 ;~ 1678:06D1
loc_25434:
	// 7223 
cs=0x1678;eip=0x0006d4; 	T(CMP(*(raddr(ss,bp+var_44a)), 0));	// 41259 cmp     [bp+var_44A], 0 ;~ 1678:06D4
cs=0x1678;eip=0x0006d9; 	R(JZ(loc_25444));	// 41260 jz      short loc_25444 ;~ 1678:06D9
cs=0x1678;eip=0x0006db; 	T(CMP(*(dw*)(raddr(ss,bp+var_1a)), 0));	// 41261 cmp     [bp+var_1A], 0 ;~ 1678:06DB
cs=0x1678;eip=0x0006df; 	R(JNZ(loc_25444));	// 41262 jnz     short loc_25444 ;~ 1678:06DF
cs=0x1678;eip=0x0006e1; 	R(JMP(loc_25801));	// 41263 jmp     loc_25801 ;~ 1678:06E1
loc_25444:
	// 7224 
cs=0x1678;eip=0x0006e4; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 41268 mov     al, [bp+var_6] ;~ 1678:06E4
cs=0x1678;eip=0x0006e7; 	T(SUB(ah, ah));	// 41269 sub     ah, ah ;~ 1678:06E7
cs=0x1678;eip=0x0006e9; 	T(OR(ax, ax));	// 41270 or      ax, ax ;~ 1678:06E9
cs=0x1678;eip=0x0006eb; 	R(JZ(_primtype_poly));	// 41271 jz      short _primtype_poly ; al = 0 for polygons, ;~ 1678:06EB
cs=0x1678;eip=0x0006ed; 	T(CMP(ax, 1));	// 41272 cmp     ax, 1           ; 1 = lines ;~ 1678:06ED
cs=0x1678;eip=0x0006f0; 	R(JNZ(loc_25455));	// 41273 jnz     short loc_25455 ;~ 1678:06F0
cs=0x1678;eip=0x0006f2; 	R(JMP(_primtype_line));	// 41274 jmp     _primtype_line ;~ 1678:06F2
loc_25455:
	// 7225 
cs=0x1678;eip=0x0006f5; 	T(CMP(ax, 2));	// 41278 cmp     ax, 2 ;~ 1678:06F5
cs=0x1678;eip=0x0006f8; 	R(JNZ(loc_2545d));	// 41279 jnz     short loc_2545D ;~ 1678:06F8
cs=0x1678;eip=0x0006fa; 	R(JMP(_primtype_sphere));	// 41280 jmp     _primtype_sphere ; 2 = sphere ;~ 1678:06FA
loc_2545d:
	// 7226 
cs=0x1678;eip=0x0006fd; 	T(CMP(ax, 3));	// 41284 cmp     ax, 3 ;~ 1678:06FD
cs=0x1678;eip=0x000700; 	R(JNZ(loc_25465));	// 41285 jnz     short loc_25465 ;~ 1678:0700
cs=0x1678;eip=0x000702; 	R(JMP(_primtype_wheel));	// 41286 jmp     _primtype_wheel ; 3 = wheel ;~ 1678:0702
loc_25465:
	// 7227 
cs=0x1678;eip=0x000705; 	T(CMP(ax, 5));	// 41290 cmp     ax, 5 ;~ 1678:0705
cs=0x1678;eip=0x000708; 	R(JNZ(loc_2546d));	// 41291 jnz     short loc_2546D ;~ 1678:0708
cs=0x1678;eip=0x00070a; 	R(JMP(loc_25ce0));	// 41292 jmp     loc_25CE0       ; 5 = particle ;~ 1678:070A
loc_2546d:
	// 7228 
cs=0x1678;eip=0x00070d; 	R(JMP(loc_25801));	// 41296 jmp     loc_25801       ; everything else? (4?) ;~ 1678:070D
_primtype_poly:
	// 7229 
cs=0x1678;eip=0x000710; 	T(MOV(ax, *(dw*)(((db*)&transshapepolyinfo))));	// 41300 mov     ax, word ptr transshapepolyinfo ;~ 1678:0710
cs=0x1678;eip=0x000713; 	T(MOV(dx, *(dw*)(((db*)&transshapepolyinfo)+2)));	// 41301 mov     dx, word ptr transshapepolyinfo+2 ;~ 1678:0713
cs=0x1678;eip=0x000717; 	T(ADD(ax, 6));	// 41302 add     ax, 6 ;~ 1678:0717
cs=0x1678;eip=0x00071a; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_430))), ax));	// 41303 mov     word ptr [bp+var_430], ax ;~ 1678:071A
cs=0x1678;eip=0x00071e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_430+2))), dx));	// 41304 mov     word ptr [bp+var_430+2], dx ;~ 1678:071E
cs=0x1678;eip=0x000722; 	T(MOV(ax, *(dw*)(((db*)&transshapeprimitives))));	// 41305 mov     ax, word ptr transshapeprimitives ;~ 1678:0722
cs=0x1678;eip=0x000725; 	T(MOV(dx, *(dw*)(((db*)&transshapeprimitives)+2)));	// 41306 mov     dx, word ptr transshapeprimitives+2 ;~ 1678:0725
cs=0x1678;eip=0x000729; 	X(MOV(transshapeprimindexptr, ax));	// 41307 mov     transshapeprimindexptr, ax ;~ 1678:0729
cs=0x1678;eip=0x00072c; 	X(MOV(word_41876, dx));	// 41308 mov     word_41876, dx ;~ 1678:072C
cs=0x1678;eip=0x000730; 	T(SUB(ax, ax));	// 41309 sub     ax, ax ;~ 1678:0730
cs=0x1678;eip=0x000732; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 41310 mov     [bp+var_16], ax ;~ 1678:0732
cs=0x1678;eip=0x000735; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 41311 mov     [bp+var_18], ax ;~ 1678:0735
cs=0x1678;eip=0x000738; 	X(MOV(*(raddr(ss,bp+var_44a)), 0x0F));	// 41312 mov     [bp+var_44A], 0Fh ;~ 1678:0738
cs=0x1678;eip=0x00073d; 	T(CMP(*(dw*)(raddr(ss,bp+var_1a)), ax));	// 41313 cmp     [bp+var_1A], ax ;~ 1678:073D
cs=0x1678;eip=0x000740; 	R(JNZ(loc_25518));	// 41314 jnz     short loc_25518 ;~ 1678:0740
cs=0x1678;eip=0x000742; 	T(SUB(si, si));	// 41315 sub     si, si ;~ 1678:0742
cs=0x1678;eip=0x000744; 	R(JMP(loc_254a7));	// 41316 jmp     short loc_254A7 ;~ 1678:0744
loc_254a6:
	// 7230 
cs=0x1678;eip=0x000746; 	T(INC(si));	// 41320 inc     si ;~ 1678:0746
loc_254a7:
	// 7231 
cs=0x1678;eip=0x000747; 	T(MOV(al, transshapenumvertscopy));	// 41323 mov     al, transshapenumvertscopy ;~ 1678:0747
cs=0x1678;eip=0x00074a; 	T(SUB(ah, ah));	// 41324 sub     ah, ah ;~ 1678:074A
cs=0x1678;eip=0x00074c; 	T(CMP(ax, si));	// 41325 cmp     ax, si ;~ 1678:074C
cs=0x1678;eip=0x00074e; 	R(JA(loc_254b3));	// 41326 ja      short loc_254B3 ;~ 1678:074E
cs=0x1678;eip=0x000750; 	R(JMP(loc_2571a));	// 41327 jmp     loc_2571A ;~ 1678:0750
loc_254b3:
	// 7232 
cs=0x1678;eip=0x000753; 	T(MOV(bx, transshapeprimindexptr));	// 41331 mov     bx, transshapeprimindexptr ;~ 1678:0753
cs=0x1678;eip=0x000757; 	X(INC(transshapeprimindexptr));	// 41332 inc     transshapeprimindexptr ;~ 1678:0757
cs=0x1678;eip=0x00075b; 	T(MOV(es, word_41876));	// 41333 mov     es, word_41876 ;~ 1678:075B
cs=0x1678;eip=0x00075f; 	T(MOV(al, *(raddr(es,bx))));	// 41334 mov     al, es:[bx] ;~ 1678:075F
cs=0x1678;eip=0x000762; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 41335 mov     [bp+var_C], ax ;~ 1678:0762
cs=0x1678;eip=0x000765; 	T(MOV(bx, ax));	// 41336 mov     bx, ax ;~ 1678:0765
cs=0x1678;eip=0x000767; 	T(SHL(bx, 1));	// 41337 shl     bx, 1 ;~ 1678:0767
cs=0x1678;eip=0x000769; 	T(ADD(bx, ax));	// 41338 add     bx, ax ;~ 1678:0769
cs=0x1678;eip=0x00076b; 	T(SHL(bx, 1));	// 41339 shl     bx, 1 ;~ 1678:076B
cs=0x1678;eip=0x00076d; 	T(ADD(bx, bp));	// 41340 add     bx, bp ;~ 1678:076D
cs=0x1678;eip=0x00076f; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x0B6A))));	// 41341 mov     ax, [bx-0B6Ah] ;~ 1678:076F
cs=0x1678;eip=0x000773; 	T(CWD);	// 41342 cwd ;~ 1678:0773
cs=0x1678;eip=0x000774; 	X(ADD(*(dw*)(raddr(ss,bp+var_18)), ax));	// 41343 add     [bp+var_18], ax ;~ 1678:0774
cs=0x1678;eip=0x000777; 	X(ADC(*(dw*)(raddr(ss,bp+var_16)), dx));	// 41344 adc     [bp+var_16], dx ;~ 1678:0777
cs=0x1678;eip=0x00077a; 	T(MOV(ax, si));	// 41345 mov     ax, si ;~ 1678:077A
cs=0x1678;eip=0x00077c; 	T(SHL(ax, 1));	// 41346 shl     ax, 1 ;~ 1678:077C
cs=0x1678;eip=0x00077e; 	T(ADD(ax, offset(dseg,polyvertpointptrtab)));	// 41347 add     ax, offset polyvertpointptrtab ;~ 1678:077E
cs=0x1678;eip=0x000781; 	X(MOV(*(dw*)(raddr(ss,bp+var_b7a)), ax));	// 41348 mov     [bp+var_B7A], ax ;~ 1678:0781
cs=0x1678;eip=0x000785; 	T(MOV(bx, ax));	// 41349 mov     bx, ax ;~ 1678:0785
cs=0x1678;eip=0x000787; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 41350 mov     bx, [bx] ;~ 1678:0787
cs=0x1678;eip=0x000789; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 41351 mov     ax, [bx] ;~ 1678:0789
cs=0x1678;eip=0x00078b; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 41352 mov     dx, [bx+2] ;~ 1678:078B
cs=0x1678;eip=0x00078e; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_430))));	// 41353 les     bx, [bp+var_430] ;~ 1678:078E
cs=0x1678;eip=0x000792; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 41354 mov     es:[bx], ax ;~ 1678:0792
cs=0x1678;eip=0x000795; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 41355 mov     es:[bx+2], dx ;~ 1678:0795
cs=0x1678;eip=0x000799; 	T(CMP(*(raddr(ss,bp+var_44a)), 0));	// 41356 cmp     [bp+var_44A], 0 ;~ 1678:0799
cs=0x1678;eip=0x00079e; 	R(JZ(loc_25511));	// 41357 jz      short loc_25511 ;~ 1678:079E
cs=0x1678;eip=0x0007a0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_b7a))));	// 41358 mov     bx, [bp+var_B7A] ;~ 1678:07A0
cs=0x1678;eip=0x0007a4; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 41359 push    word ptr [bx] ;~ 1678:07A4
cs=0x1678;eip=0x0007a6; 	X(PUSH(cs));	// 41360 push    cs ;~ 1678:07A6
cs=0x1678;eip=0x0007a7; 	R(CALL(rect_compare_point,0));	// 41361 call    near ptr rect_compare_point ;~ 1678:07A7
cs=0x1678;eip=0x0007aa; 	T(ADD(sp, 2));	// 41362 add     sp, 2 ;~ 1678:07AA
cs=0x1678;eip=0x0007ad; 	X(AND(*(raddr(ss,bp+var_44a)), al));	// 41363 and     [bp+var_44A], al ;~ 1678:07AD
loc_25511:
	// 7233 
cs=0x1678;eip=0x0007b1; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_430))), 4));	// 41366 add     word ptr [bp+var_430], 4 ;~ 1678:07B1
cs=0x1678;eip=0x0007b6; 	R(JMP(loc_254a6));	// 41367 jmp     short loc_254A6 ;~ 1678:07B6
loc_25518:
	// 7234 
cs=0x1678;eip=0x0007b8; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10+2))), 0));	// 41371 mov     word ptr [bp+var_10+2], 0 ;~ 1678:07B8
cs=0x1678;eip=0x0007bd; 	T(MOV(bl, transshapenumvertscopy));	// 41372 mov     bl, transshapenumvertscopy ;~ 1678:07BD
cs=0x1678;eip=0x0007c1; 	T(SUB(bh, bh));	// 41373 sub     bh, bh ;~ 1678:07C1
cs=0x1678;eip=0x0007c3; 	T(ADD(bx, *(dw*)(((db*)&transshapeprimitives))));	// 41374 add     bx, word ptr transshapeprimitives ;~ 1678:07C3
cs=0x1678;eip=0x0007c7; 	T(MOV(es, *(dw*)(((db*)&transshapeprimitives)+2)));	// 41375 mov     es, word ptr transshapeprimitives+2 ;~ 1678:07C7
cs=0x1678;eip=0x0007cb; 	T(MOV(al, *(raddr(es,bx-1))));	// 41376 mov     al, es:[bx-1] ;~ 1678:07CB
cs=0x1678;eip=0x0007cf; 	T(SUB(ah, ah));	// 41377 sub     ah, ah ;~ 1678:07CF
cs=0x1678;eip=0x0007d1; 	X(MOV(*(dw*)(raddr(ss,bp+var_448)), ax));	// 41378 mov     [bp+var_448], ax ;~ 1678:07D1
cs=0x1678;eip=0x0007d5; 	T(SUB(si, si));	// 41379 sub     si, si ;~ 1678:07D5
cs=0x1678;eip=0x0007d7; 	R(JMP(loc_255ee));	// 41380 jmp     loc_255EE ;~ 1678:07D7
loc_2553a:
	// 7235 
cs=0x1678;eip=0x0007da; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_448))));	// 41384 mov     bx, [bp+var_448] ;~ 1678:07DA
cs=0x1678;eip=0x0007de; 	T(ADD(bx, bp));	// 41385 add     bx, bp ;~ 1678:07DE
cs=0x1678;eip=0x0007e0; 	T(CMP(*(raddr(ds,bx-0x562)), 0));	// 41386 cmp     byte ptr [bx-562h], 0 ;~ 1678:07E0
cs=0x1678;eip=0x0007e5; 	R(JZ(loc_2554a));	// 41387 jz      short loc_2554A ;~ 1678:07E5
cs=0x1678;eip=0x0007e7; 	R(JMP(loc_255e6));	// 41388 jmp     loc_255E6 ;~ 1678:07E7
loc_2554a:
	// 7236 
cs=0x1678;eip=0x0007ea; 	T(MOV(ax, 0x0C));	// 41392 mov     ax, 0Ch ;~ 1678:07EA
cs=0x1678;eip=0x0007ed; 	X(PUSH(ax));	// 41393 push    ax ;~ 1678:07ED
cs=0x1678;eip=0x0007ee; 	T(ax = bp+var_458);	// 41394 lea     ax, [bp+var_458] ;~ 1678:07EE
cs=0x1678;eip=0x0007f2; 	X(PUSH(ax));	// 41395 push    ax ;~ 1678:07F2
cs=0x1678;eip=0x0007f3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 41396 mov     ax, [bp+var_C] ;~ 1678:07F3
cs=0x1678;eip=0x0007f6; 	T(MOV(cx, ax));	// 41397 mov     cx, ax ;~ 1678:07F6
cs=0x1678;eip=0x0007f8; 	T(SHL(ax, 1));	// 41398 shl     ax, 1 ;~ 1678:07F8
cs=0x1678;eip=0x0007fa; 	T(ADD(ax, cx));	// 41399 add     ax, cx ;~ 1678:07FA
cs=0x1678;eip=0x0007fc; 	T(SHL(ax, 1));	// 41400 shl     ax, 1 ;~ 1678:07FC
cs=0x1678;eip=0x0007fe; 	T(ADD(ax, bp));	// 41401 add     ax, bp ;~ 1678:07FE
cs=0x1678;eip=0x000800; 	T(SUB(ax, 0x0B6E));	// 41402 sub     ax, 0B6Eh ;~ 1678:0800
cs=0x1678;eip=0x000803; 	X(PUSH(ax));	// 41403 push    ax ;~ 1678:0803
cs=0x1678;eip=0x000804; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_448))));	// 41404 mov     ax, [bp+var_448] ;~ 1678:0804
cs=0x1678;eip=0x000808; 	T(MOV(cx, ax));	// 41405 mov     cx, ax ;~ 1678:0808
cs=0x1678;eip=0x00080a; 	T(SHL(ax, 1));	// 41406 shl     ax, 1 ;~ 1678:080A
cs=0x1678;eip=0x00080c; 	T(ADD(ax, cx));	// 41407 add     ax, cx ;~ 1678:080C
cs=0x1678;eip=0x00080e; 	T(SHL(ax, 1));	// 41408 shl     ax, 1 ;~ 1678:080E
cs=0x1678;eip=0x000810; 	T(ADD(ax, bp));	// 41409 add     ax, bp ;~ 1678:0810
cs=0x1678;eip=0x000812; 	T(SUB(ax, 0x0B6E));	// 41410 sub     ax, 0B6Eh ;~ 1678:0812
cs=0x1678;eip=0x000815; 	X(PUSH(ax));	// 41411 push    ax ;~ 1678:0815
cs=0x1678;eip=0x000816; 	R(CALLF(vector_op_unk,0));	// 41412 call    vector_op_unk ;~ 1678:0816
cs=0x1678;eip=0x00081b; 	T(ADD(sp, 8));	// 41413 add     sp, 8 ;~ 1678:081B
cs=0x1678;eip=0x00081e; 	T(ax = bp+var_574);	// 41414 lea     ax, [bp+var_574] ;~ 1678:081E
cs=0x1678;eip=0x000822; 	X(PUSH(ax));	// 41415 push    ax ;~ 1678:0822
cs=0x1678;eip=0x000823; 	T(ax = bp+var_458);	// 41416 lea     ax, [bp+var_458] ;~ 1678:0823
cs=0x1678;eip=0x000827; 	X(PUSH(ax));	// 41417 push    ax ;~ 1678:0827
cs=0x1678;eip=0x000828; 	R(CALLF(vector_to_point,0));	// 41418 call    vector_to_point ;~ 1678:0828
cs=0x1678;eip=0x00082d; 	T(ADD(sp, 4));	// 41419 add     sp, 4 ;~ 1678:082D
cs=0x1678;eip=0x000830; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_448))));	// 41420 mov     ax, [bp+var_448] ;~ 1678:0830
cs=0x1678;eip=0x000834; 	T(SHL(ax, 1));	// 41421 shl     ax, 1 ;~ 1678:0834
cs=0x1678;eip=0x000836; 	T(SHL(ax, 1));	// 41422 shl     ax, 1 ;~ 1678:0836
cs=0x1678;eip=0x000838; 	T(ADD(ax, bp));	// 41423 add     ax, bp ;~ 1678:0838
cs=0x1678;eip=0x00083a; 	X(MOV(*(dw*)(raddr(ss,bp+var_b7c)), ax));	// 41424 mov     [bp+var_B7C], ax ;~ 1678:083A
cs=0x1678;eip=0x00083e; 	T(MOV(bx, ax));	// 41425 mov     bx, ax ;~ 1678:083E
cs=0x1678;eip=0x000840; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_574))));	// 41426 mov     ax, [bp+var_574] ;~ 1678:0840
cs=0x1678;eip=0x000844; 	T(CMP(*(dw*)(raddr(ds,bx-0x416)), ax));	// 41427 cmp     [bx-416h], ax ;~ 1678:0844
cs=0x1678;eip=0x000848; 	R(JNZ(loc_255b4));	// 41428 jnz     short loc_255B4 ;~ 1678:0848
cs=0x1678;eip=0x00084a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_572))));	// 41429 mov     ax, [bp+var_572] ;~ 1678:084A
cs=0x1678;eip=0x00084e; 	T(CMP(*(dw*)(raddr(ds,bx-0x414)), ax));	// 41430 cmp     [bx-414h], ax ;~ 1678:084E
cs=0x1678;eip=0x000852; 	R(JZ(loc_255e6));	// 41431 jz      short loc_255E6 ;~ 1678:0852
loc_255b4:
	// 7237 
cs=0x1678;eip=0x000854; 	T(CMP(*(raddr(ss,bp+var_44a)), 0));	// 41434 cmp     [bp+var_44A], 0 ;~ 1678:0854
cs=0x1678;eip=0x000859; 	R(JZ(loc_255cb));	// 41435 jz      short loc_255CB ;~ 1678:0859
cs=0x1678;eip=0x00085b; 	T(ax = bp+var_574);	// 41436 lea     ax, [bp+var_574] ;~ 1678:085B
cs=0x1678;eip=0x00085f; 	X(PUSH(ax));	// 41437 push    ax ;~ 1678:085F
cs=0x1678;eip=0x000860; 	X(PUSH(cs));	// 41438 push    cs ;~ 1678:0860
cs=0x1678;eip=0x000861; 	R(CALL(rect_compare_point,0));	// 41439 call    near ptr rect_compare_point ;~ 1678:0861
cs=0x1678;eip=0x000864; 	T(ADD(sp, 2));	// 41440 add     sp, 2 ;~ 1678:0864
cs=0x1678;eip=0x000867; 	X(AND(*(raddr(ss,bp+var_44a)), al));	// 41441 and     [bp+var_44A], al ;~ 1678:0867
loc_255cb:
	// 7238 
cs=0x1678;eip=0x00086b; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_430))));	// 41444 les     bx, [bp+var_430] ;~ 1678:086B
cs=0x1678;eip=0x00086f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_574))));	// 41445 mov     ax, [bp+var_574] ;~ 1678:086F
cs=0x1678;eip=0x000873; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_572))));	// 41446 mov     dx, [bp+var_572] ;~ 1678:0873
cs=0x1678;eip=0x000877; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 41447 mov     es:[bx], ax ;~ 1678:0877
cs=0x1678;eip=0x00087a; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 41448 mov     es:[bx+2], dx ;~ 1678:087A
loc_255de:
	// 7239 
cs=0x1678;eip=0x00087e; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_430))), 4));	// 41452 add     word ptr [bp+var_430], 4 ;~ 1678:087E
cs=0x1678;eip=0x000883; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_10+2)))));	// 41453 inc     word ptr [bp+var_10+2] ;~ 1678:0883
loc_255e6:
	// 7240 
cs=0x1678;eip=0x000886; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 41457 mov     ax, [bp+var_C] ;~ 1678:0886
cs=0x1678;eip=0x000889; 	X(MOV(*(dw*)(raddr(ss,bp+var_448)), ax));	// 41458 mov     [bp+var_448], ax ;~ 1678:0889
cs=0x1678;eip=0x00088d; 	T(INC(si));	// 41459 inc     si ;~ 1678:088D
loc_255ee:
	// 7241 
cs=0x1678;eip=0x00088e; 	T(MOV(al, transshapenumvertscopy));	// 41462 mov     al, transshapenumvertscopy ;~ 1678:088E
cs=0x1678;eip=0x000891; 	T(SUB(ah, ah));	// 41463 sub     ah, ah ;~ 1678:0891
cs=0x1678;eip=0x000893; 	T(CMP(ax, si));	// 41464 cmp     ax, si ;~ 1678:0893
cs=0x1678;eip=0x000895; 	R(JA(loc_255fa));	// 41465 ja      short loc_255FA ;~ 1678:0895
cs=0x1678;eip=0x000897; 	R(JMP(loc_25714));	// 41466 jmp     loc_25714 ;~ 1678:0897
loc_255fa:
	// 7242 
cs=0x1678;eip=0x00089a; 	T(MOV(bx, transshapeprimindexptr));	// 41470 mov     bx, transshapeprimindexptr ;~ 1678:089A
cs=0x1678;eip=0x00089e; 	X(INC(transshapeprimindexptr));	// 41471 inc     transshapeprimindexptr ;~ 1678:089E
cs=0x1678;eip=0x0008a2; 	T(MOV(es, word_41876));	// 41472 mov     es, word_41876 ;~ 1678:08A2
cs=0x1678;eip=0x0008a6; 	T(MOV(al, *(raddr(es,bx))));	// 41473 mov     al, es:[bx] ;~ 1678:08A6
cs=0x1678;eip=0x0008a9; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 41474 mov     [bp+var_C], ax ;~ 1678:08A9
cs=0x1678;eip=0x0008ac; 	T(MOV(cx, ax));	// 41475 mov     cx, ax ;~ 1678:08AC
cs=0x1678;eip=0x0008ae; 	T(SHL(ax, 1));	// 41476 shl     ax, 1 ;~ 1678:08AE
cs=0x1678;eip=0x0008b0; 	T(ADD(ax, cx));	// 41477 add     ax, cx ;~ 1678:08B0
cs=0x1678;eip=0x0008b2; 	T(SHL(ax, 1));	// 41478 shl     ax, 1 ;~ 1678:08B2
cs=0x1678;eip=0x0008b4; 	T(ADD(ax, bp));	// 41479 add     ax, bp ;~ 1678:08B4
cs=0x1678;eip=0x0008b6; 	X(MOV(*(dw*)(raddr(ss,bp+var_b7a)), ax));	// 41480 mov     [bp+var_B7A], ax ;~ 1678:08B6
cs=0x1678;eip=0x0008ba; 	T(MOV(bx, ax));	// 41481 mov     bx, ax ;~ 1678:08BA
cs=0x1678;eip=0x0008bc; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x0B6A))));	// 41482 mov     ax, [bx-0B6Ah] ;~ 1678:08BC
cs=0x1678;eip=0x0008c0; 	T(CWD);	// 41483 cwd ;~ 1678:08C0
cs=0x1678;eip=0x0008c1; 	X(ADD(*(dw*)(raddr(ss,bp+var_18)), ax));	// 41484 add     [bp+var_18], ax ;~ 1678:08C1
cs=0x1678;eip=0x0008c4; 	X(ADC(*(dw*)(raddr(ss,bp+var_16)), dx));	// 41485 adc     [bp+var_16], dx ;~ 1678:08C4
cs=0x1678;eip=0x0008c7; 	T(MOV(bx, cx));	// 41486 mov     bx, cx ;~ 1678:08C7
cs=0x1678;eip=0x0008c9; 	T(ADD(bx, bp));	// 41487 add     bx, bp ;~ 1678:08C9
cs=0x1678;eip=0x0008cb; 	T(CMP(*(raddr(ds,bx-0x562)), 0));	// 41488 cmp     byte ptr [bx-562h], 0 ;~ 1678:08CB
cs=0x1678;eip=0x0008d0; 	R(JZ(loc_25635));	// 41489 jz      short loc_25635 ;~ 1678:08D0
cs=0x1678;eip=0x0008d2; 	R(JMP(loc_2553a));	// 41490 jmp     loc_2553A ;~ 1678:08D2
loc_25635:
	// 7243 
cs=0x1678;eip=0x0008d5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_448))));	// 41494 mov     bx, [bp+var_448] ;~ 1678:08D5
cs=0x1678;eip=0x0008d9; 	T(ADD(bx, bp));	// 41495 add     bx, bp ;~ 1678:08D9
cs=0x1678;eip=0x0008db; 	T(CMP(*(raddr(ds,bx-0x562)), 0));	// 41496 cmp     byte ptr [bx-562h], 0 ;~ 1678:08DB
cs=0x1678;eip=0x0008e0; 	R(JNZ(loc_25645));	// 41497 jnz     short loc_25645 ;~ 1678:08E0
cs=0x1678;eip=0x0008e2; 	R(JMP(loc_256d7));	// 41498 jmp     loc_256D7 ;~ 1678:08E2
loc_25645:
	// 7244 
cs=0x1678;eip=0x0008e5; 	T(MOV(ax, 0x0C));	// 41502 mov     ax, 0Ch ;~ 1678:08E5
cs=0x1678;eip=0x0008e8; 	X(PUSH(ax));	// 41503 push    ax ;~ 1678:08E8
cs=0x1678;eip=0x0008e9; 	T(ax = bp+var_458);	// 41504 lea     ax, [bp+var_458] ;~ 1678:08E9
cs=0x1678;eip=0x0008ed; 	X(PUSH(ax));	// 41505 push    ax ;~ 1678:08ED
cs=0x1678;eip=0x0008ee; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_448))));	// 41506 mov     ax, [bp+var_448] ;~ 1678:08EE
cs=0x1678;eip=0x0008f2; 	T(MOV(cx, ax));	// 41507 mov     cx, ax ;~ 1678:08F2
cs=0x1678;eip=0x0008f4; 	T(SHL(ax, 1));	// 41508 shl     ax, 1 ;~ 1678:08F4
cs=0x1678;eip=0x0008f6; 	T(ADD(ax, cx));	// 41509 add     ax, cx ;~ 1678:08F6
cs=0x1678;eip=0x0008f8; 	T(SHL(ax, 1));	// 41510 shl     ax, 1 ;~ 1678:08F8
cs=0x1678;eip=0x0008fa; 	T(ADD(ax, bp));	// 41511 add     ax, bp ;~ 1678:08FA
cs=0x1678;eip=0x0008fc; 	T(SUB(ax, 0x0B6E));	// 41512 sub     ax, 0B6Eh ;~ 1678:08FC
cs=0x1678;eip=0x0008ff; 	X(PUSH(ax));	// 41513 push    ax ;~ 1678:08FF
cs=0x1678;eip=0x000900; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_b7a))));	// 41514 mov     ax, [bp+var_B7A] ;~ 1678:0900
cs=0x1678;eip=0x000904; 	T(SUB(ax, 0x0B6E));	// 41515 sub     ax, 0B6Eh ;~ 1678:0904
cs=0x1678;eip=0x000907; 	X(PUSH(ax));	// 41516 push    ax ;~ 1678:0907
cs=0x1678;eip=0x000908; 	R(CALLF(vector_op_unk,0));	// 41517 call    vector_op_unk ;~ 1678:0908
cs=0x1678;eip=0x00090d; 	T(ADD(sp, 8));	// 41518 add     sp, 8 ;~ 1678:090D
cs=0x1678;eip=0x000910; 	T(ax = bp+var_574);	// 41519 lea     ax, [bp+var_574] ;~ 1678:0910
cs=0x1678;eip=0x000914; 	X(PUSH(ax));	// 41520 push    ax ;~ 1678:0914
cs=0x1678;eip=0x000915; 	T(ax = bp+var_458);	// 41521 lea     ax, [bp+var_458] ;~ 1678:0915
cs=0x1678;eip=0x000919; 	X(PUSH(ax));	// 41522 push    ax ;~ 1678:0919
cs=0x1678;eip=0x00091a; 	R(CALLF(vector_to_point,0));	// 41523 call    vector_to_point ;~ 1678:091A
cs=0x1678;eip=0x00091f; 	T(ADD(sp, 4));	// 41524 add     sp, 4 ;~ 1678:091F
cs=0x1678;eip=0x000922; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 41525 mov     ax, [bp+var_C] ;~ 1678:0922
cs=0x1678;eip=0x000925; 	T(SHL(ax, 1));	// 41526 shl     ax, 1 ;~ 1678:0925
cs=0x1678;eip=0x000927; 	T(SHL(ax, 1));	// 41527 shl     ax, 1 ;~ 1678:0927
cs=0x1678;eip=0x000929; 	T(ADD(ax, bp));	// 41528 add     ax, bp ;~ 1678:0929
cs=0x1678;eip=0x00092b; 	X(MOV(*(dw*)(raddr(ss,bp+var_b7c)), ax));	// 41529 mov     [bp+var_B7C], ax ;~ 1678:092B
cs=0x1678;eip=0x00092f; 	T(MOV(bx, ax));	// 41530 mov     bx, ax ;~ 1678:092F
cs=0x1678;eip=0x000931; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_574))));	// 41531 mov     ax, [bp+var_574] ;~ 1678:0931
cs=0x1678;eip=0x000935; 	T(CMP(*(dw*)(raddr(ds,bx-0x416)), ax));	// 41532 cmp     [bx-416h], ax ;~ 1678:0935
cs=0x1678;eip=0x000939; 	R(JNZ(loc_256a5));	// 41533 jnz     short loc_256A5 ;~ 1678:0939
cs=0x1678;eip=0x00093b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_572))));	// 41534 mov     ax, [bp+var_572] ;~ 1678:093B
cs=0x1678;eip=0x00093f; 	T(CMP(*(dw*)(raddr(ds,bx-0x414)), ax));	// 41535 cmp     [bx-414h], ax ;~ 1678:093F
cs=0x1678;eip=0x000943; 	R(JZ(loc_256d7));	// 41536 jz      short loc_256D7 ;~ 1678:0943
loc_256a5:
	// 7245 
cs=0x1678;eip=0x000945; 	T(CMP(*(raddr(ss,bp+var_44a)), 0));	// 41539 cmp     [bp+var_44A], 0 ;~ 1678:0945
cs=0x1678;eip=0x00094a; 	R(JZ(loc_256bc));	// 41540 jz      short loc_256BC ;~ 1678:094A
cs=0x1678;eip=0x00094c; 	T(ax = bp+var_574);	// 41541 lea     ax, [bp+var_574] ;~ 1678:094C
cs=0x1678;eip=0x000950; 	X(PUSH(ax));	// 41542 push    ax ;~ 1678:0950
cs=0x1678;eip=0x000951; 	X(PUSH(cs));	// 41543 push    cs ;~ 1678:0951
cs=0x1678;eip=0x000952; 	R(CALL(rect_compare_point,0));	// 41544 call    near ptr rect_compare_point ;~ 1678:0952
cs=0x1678;eip=0x000955; 	T(ADD(sp, 2));	// 41545 add     sp, 2 ;~ 1678:0955
cs=0x1678;eip=0x000958; 	X(AND(*(raddr(ss,bp+var_44a)), al));	// 41546 and     [bp+var_44A], al ;~ 1678:0958
loc_256bc:
	// 7246 
cs=0x1678;eip=0x00095c; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_430))));	// 41549 les     bx, [bp+var_430] ;~ 1678:095C
cs=0x1678;eip=0x000960; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_574))));	// 41550 mov     ax, [bp+var_574] ;~ 1678:0960
cs=0x1678;eip=0x000964; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_572))));	// 41551 mov     dx, [bp+var_572] ;~ 1678:0964
cs=0x1678;eip=0x000968; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 41552 mov     es:[bx], ax ;~ 1678:0968
cs=0x1678;eip=0x00096b; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 41553 mov     es:[bx+2], dx ;~ 1678:096B
cs=0x1678;eip=0x00096f; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_430))), 4));	// 41554 add     word ptr [bp+var_430], 4 ;~ 1678:096F
cs=0x1678;eip=0x000974; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_10+2)))));	// 41555 inc     word ptr [bp+var_10+2] ;~ 1678:0974
loc_256d7:
	// 7247 
cs=0x1678;eip=0x000977; 	T(MOV(ax, si));	// 41559 mov     ax, si ;~ 1678:0977
cs=0x1678;eip=0x000979; 	T(SHL(ax, 1));	// 41560 shl     ax, 1 ;~ 1678:0979
cs=0x1678;eip=0x00097b; 	T(ADD(ax, offset(dseg,polyvertpointptrtab)));	// 41561 add     ax, offset polyvertpointptrtab ;~ 1678:097B
cs=0x1678;eip=0x00097e; 	X(MOV(*(dw*)(raddr(ss,bp+var_b7c)), ax));	// 41562 mov     [bp+var_B7C], ax ;~ 1678:097E
cs=0x1678;eip=0x000982; 	T(MOV(bx, ax));	// 41563 mov     bx, ax ;~ 1678:0982
cs=0x1678;eip=0x000984; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 41564 mov     bx, [bx] ;~ 1678:0984
cs=0x1678;eip=0x000986; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 41565 mov     ax, [bx] ;~ 1678:0986
cs=0x1678;eip=0x000988; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 41566 mov     dx, [bx+2] ;~ 1678:0988
cs=0x1678;eip=0x00098b; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_430))));	// 41567 les     bx, [bp+var_430] ;~ 1678:098B
cs=0x1678;eip=0x00098f; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 41568 mov     es:[bx], ax ;~ 1678:098F
cs=0x1678;eip=0x000992; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 41569 mov     es:[bx+2], dx ;~ 1678:0992
cs=0x1678;eip=0x000996; 	T(CMP(*(raddr(ss,bp+var_44a)), 0));	// 41570 cmp     [bp+var_44A], 0 ;~ 1678:0996
cs=0x1678;eip=0x00099b; 	R(JNZ(loc_25700));	// 41571 jnz     short loc_25700 ;~ 1678:099B
cs=0x1678;eip=0x00099d; 	R(JMP(loc_255de));	// 41572 jmp     loc_255DE ;~ 1678:099D
loc_25700:
	// 7248 
cs=0x1678;eip=0x0009a0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_b7c))));	// 41576 mov     bx, [bp+var_B7C] ;~ 1678:09A0
cs=0x1678;eip=0x0009a4; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 41577 push    word ptr [bx] ;~ 1678:09A4
cs=0x1678;eip=0x0009a6; 	X(PUSH(cs));	// 41578 push    cs ;~ 1678:09A6
cs=0x1678;eip=0x0009a7; 	R(CALL(rect_compare_point,0));	// 41579 call    near ptr rect_compare_point ;~ 1678:09A7
cs=0x1678;eip=0x0009aa; 	T(ADD(sp, 2));	// 41580 add     sp, 2 ;~ 1678:09AA
cs=0x1678;eip=0x0009ad; 	X(AND(*(raddr(ss,bp+var_44a)), al));	// 41581 and     [bp+var_44A], al ;~ 1678:09AD
cs=0x1678;eip=0x0009b1; 	R(JMP(loc_255de));	// 41582 jmp     loc_255DE ;~ 1678:09B1
loc_25714:
	// 7249 
cs=0x1678;eip=0x0009b4; 	T(MOV(al, *(db*)(raddr(ss,bp+var_10+2))));	// 41586 mov     al, byte ptr [bp+var_10+2] ;~ 1678:09B4
cs=0x1678;eip=0x0009b7; 	X(MOV(transshapenumvertscopy, al));	// 41587 mov     transshapenumvertscopy, al ;~ 1678:09B7
loc_2571a:
	// 7250 
cs=0x1678;eip=0x0009ba; 	T(CMP(transshapenumvertscopy, 0));	// 41590 cmp     transshapenumvertscopy, 0 ;~ 1678:09BA
cs=0x1678;eip=0x0009bf; 	R(JNZ(loc_25724));	// 41591 jnz     short loc_25724 ;~ 1678:09BF
cs=0x1678;eip=0x0009c1; 	R(JMP(loc_25801));	// 41592 jmp     loc_25801 ;~ 1678:09C1
loc_25724:
	// 7251 
cs=0x1678;eip=0x0009c4; 	T(CMP(*(raddr(ss,bp+var_44a)), 0));	// 41596 cmp     [bp+var_44A], 0 ;~ 1678:09C4
cs=0x1678;eip=0x0009c9; 	R(JZ(loc_2572e));	// 41597 jz      short loc_2572E ;~ 1678:09C9
cs=0x1678;eip=0x0009cb; 	R(JMP(loc_25801));	// 41598 jmp     loc_25801 ;~ 1678:09CB
loc_2572e:
	// 7252 
cs=0x1678;eip=0x0009ce; 	T(TEST(*(db*)(raddr(ss,bp+var_2)), 1));	// 41602 test    byte ptr [bp+var_2], 1 ;~ 1678:09CE
cs=0x1678;eip=0x0009d2; 	R(JNZ(loc_25760));	// 41603 jnz     short loc_25760 ;~ 1678:09D2
cs=0x1678;eip=0x0009d4; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_434))));	// 41604 les     bx, [bp+var_434] ;~ 1678:09D4
cs=0x1678;eip=0x0009d8; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 41605 mov     ax, es:[bx] ;~ 1678:09D8
cs=0x1678;eip=0x0009db; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 41606 mov     dx, es:[bx+2] ;~ 1678:09DB
cs=0x1678;eip=0x0009df; 	T(AND(ax, *(dw*)(raddr(ss,bp+var_a))));	// 41607 and     ax, [bp+var_A] ;~ 1678:09DF
cs=0x1678;eip=0x0009e2; 	T(AND(dx, *(dw*)(raddr(ss,bp+var_8))));	// 41608 and     dx, [bp+var_8] ;~ 1678:09E2
cs=0x1678;eip=0x0009e5; 	T(OR(dx, ax));	// 41609 or      dx, ax ;~ 1678:09E5
cs=0x1678;eip=0x0009e7; 	R(JNZ(loc_25760));	// 41610 jnz     short loc_25760 ;~ 1678:09E7
cs=0x1678;eip=0x0009e9; 	T(MOV(ax, *(dw*)(((db*)&transshapepolyinfo))));	// 41611 mov     ax, word ptr transshapepolyinfo ;~ 1678:09E9
cs=0x1678;eip=0x0009ec; 	T(MOV(dx, *(dw*)(((db*)&transshapepolyinfo)+2)));	// 41612 mov     dx, word ptr transshapepolyinfo+2 ;~ 1678:09EC
cs=0x1678;eip=0x0009f0; 	T(ADD(ax, 6));	// 41613 add     ax, 6 ;~ 1678:09F0
cs=0x1678;eip=0x0009f3; 	X(PUSH(dx));	// 41614 push    dx ;~ 1678:09F3
cs=0x1678;eip=0x0009f4; 	X(PUSH(ax));	// 41615 push    ax ;~ 1678:09F4
cs=0x1678;eip=0x0009f5; 	X(PUSH(cs));	// 41616 push    cs ;~ 1678:09F5
cs=0x1678;eip=0x0009f6; 	R(CALL(transformed_shape_op_helper3,0));	// 41617 call    near ptr transformed_shape_op_helper3 ;~ 1678:09F6
cs=0x1678;eip=0x0009f9; 	T(ADD(sp, 4));	// 41618 add     sp, 4 ;~ 1678:09F9
cs=0x1678;eip=0x0009fc; 	T(OR(al, al));	// 41619 or      al, al ;~ 1678:09FC
cs=0x1678;eip=0x0009fe; 	R(JZ(loc_25763));	// 41620 jz      short loc_25763 ;~ 1678:09FE
loc_25760:
	// 7253 
cs=0x1678;eip=0x000a00; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 41624 inc     [bp+var_4] ;~ 1678:0A00
loc_25763:
	// 7254 
cs=0x1678;eip=0x000a03; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 41627 cmp     [bp+var_4], 0 ;~ 1678:0A03
cs=0x1678;eip=0x000a07; 	R(JNZ(loc_2576c));	// 41628 jnz     short loc_2576C ;~ 1678:0A07
cs=0x1678;eip=0x000a09; 	R(JMP(loc_25801));	// 41629 jmp     loc_25801 ;~ 1678:0A09
loc_2576c:
	// 7255 
cs=0x1678;eip=0x000a0c; 	T(TEST(transshapeflags, 8));	// 41633 test    transshapeflags, 8 ;~ 1678:0A0C
cs=0x1678;eip=0x000a11; 	R(JNZ(loc_25776));	// 41634 jnz     short loc_25776 ;~ 1678:0A11
cs=0x1678;eip=0x000a13; 	R(JMP(loc_25801));	// 41635 jmp     loc_25801 ;~ 1678:0A13
loc_25776:
	// 7256 
cs=0x1678;eip=0x000a16; 	T(MOV(ax, *(dw*)(((db*)&transshapepolyinfo))));	// 41639 mov     ax, word ptr transshapepolyinfo ;~ 1678:0A16
cs=0x1678;eip=0x000a19; 	T(MOV(dx, *(dw*)(((db*)&transshapepolyinfo)+2)));	// 41640 mov     dx, word ptr transshapepolyinfo+2 ;~ 1678:0A19
cs=0x1678;eip=0x000a1d; 	T(ADD(ax, 6));	// 41641 add     ax, 6 ;~ 1678:0A1D
cs=0x1678;eip=0x000a20; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_56e))), ax));	// 41642 mov     word ptr [bp+var_56E], ax ;~ 1678:0A20
cs=0x1678;eip=0x000a24; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_56e +2))), dx));	// 41643 mov     word ptr [bp+var_56E+2], dx ;~ 1678:0A24
cs=0x1678;eip=0x000a28; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10+2))), 0));	// 41644 mov     word ptr [bp+var_10+2], 0 ;~ 1678:0A28
cs=0x1678;eip=0x000a2d; 	R(JMP(loc_257f7));	// 41645 jmp     short loc_257F7 ;~ 1678:0A2D
loc_25790:
	// 7257 
cs=0x1678;eip=0x000a30; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_56e))));	// 41650 les     bx, [bp+var_56E] ;~ 1678:0A30
cs=0x1678;eip=0x000a34; 	T(MOV(ax, *(dw*)(raddr(es,bx+0))));	// 41651 mov     ax, es:[bx+0] ;~ 1678:0A34
cs=0x1678;eip=0x000a37; 	X(MOV(*(dw*)(raddr(ss,bp+var_564)), ax));	// 41652 mov     [bp+var_564], ax ;~ 1678:0A37
cs=0x1678;eip=0x000a3b; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 41653 mov     ax, es:[bx+2] ;~ 1678:0A3B
cs=0x1678;eip=0x000a3f; 	X(MOV(*(dw*)(raddr(ss,bp+var_570)), ax));	// 41654 mov     [bp+var_570], ax ;~ 1678:0A3F
cs=0x1678;eip=0x000a43; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_56e))), 4));	// 41655 add     word ptr [bp+var_56E], 4 ;~ 1678:0A43
cs=0x1678;eip=0x000a48; 	T(MOV(bx, transshaperectptr));	// 41656 mov     bx, transshaperectptr ;~ 1678:0A48
cs=0x1678;eip=0x000a4c; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 41657 mov     ax, [bx+0] ;~ 1678:0A4C
cs=0x1678;eip=0x000a4e; 	T(CMP(*(dw*)(raddr(ss,bp+var_564)), ax));	// 41658 cmp     [bp+var_564], ax ;~ 1678:0A4E
cs=0x1678;eip=0x000a52; 	R(JGE(loc_257ba));	// 41659 jge     short loc_257BA ;~ 1678:0A52
cs=0x1678;eip=0x000a54; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_564))));	// 41660 mov     ax, [bp+var_564] ;~ 1678:0A54
cs=0x1678;eip=0x000a58; 	X(MOV(*(dw*)(raddr(ds,bx+0)), ax));	// 41661 mov     [bx+0], ax ;~ 1678:0A58
loc_257ba:
	// 7258 
cs=0x1678;eip=0x000a5a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_564))));	// 41664 mov     ax, [bp+var_564] ;~ 1678:0A5A
cs=0x1678;eip=0x000a5e; 	T(INC(ax));	// 41665 inc     ax ;~ 1678:0A5E
cs=0x1678;eip=0x000a5f; 	X(MOV(*(dw*)(raddr(ss,bp+var_b7c)), ax));	// 41666 mov     [bp+var_B7C], ax ;~ 1678:0A5F
cs=0x1678;eip=0x000a63; 	T(MOV(bx, transshaperectptr));	// 41667 mov     bx, transshaperectptr ;~ 1678:0A63
cs=0x1678;eip=0x000a67; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 41668 cmp     [bx+2], ax ;~ 1678:0A67
cs=0x1678;eip=0x000a6a; 	R(JGE(loc_257cf));	// 41669 jge     short loc_257CF ;~ 1678:0A6A
cs=0x1678;eip=0x000a6c; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 41670 mov     [bx+2], ax ;~ 1678:0A6C
loc_257cf:
	// 7259 
cs=0x1678;eip=0x000a6f; 	T(MOV(bx, transshaperectptr));	// 41673 mov     bx, transshaperectptr ;~ 1678:0A6F
cs=0x1678;eip=0x000a73; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_570))));	// 41674 mov     ax, [bp+var_570] ;~ 1678:0A73
cs=0x1678;eip=0x000a77; 	T(CMP(*(dw*)(raddr(ds,bx+4)), ax));	// 41675 cmp     [bx+4], ax ;~ 1678:0A77
cs=0x1678;eip=0x000a7a; 	R(JLE(loc_257df));	// 41676 jle     short loc_257DF ;~ 1678:0A7A
cs=0x1678;eip=0x000a7c; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 41677 mov     [bx+4], ax ;~ 1678:0A7C
loc_257df:
	// 7260 
cs=0x1678;eip=0x000a7f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_570))));	// 41680 mov     ax, [bp+var_570] ;~ 1678:0A7F
cs=0x1678;eip=0x000a83; 	T(INC(ax));	// 41681 inc     ax ;~ 1678:0A83
cs=0x1678;eip=0x000a84; 	X(MOV(*(dw*)(raddr(ss,bp+var_b7c)), ax));	// 41682 mov     [bp+var_B7C], ax ;~ 1678:0A84
cs=0x1678;eip=0x000a88; 	T(MOV(bx, transshaperectptr));	// 41683 mov     bx, transshaperectptr ;~ 1678:0A88
cs=0x1678;eip=0x000a8c; 	T(CMP(*(dw*)(raddr(ds,bx+6)), ax));	// 41684 cmp     [bx+6], ax ;~ 1678:0A8C
cs=0x1678;eip=0x000a8f; 	R(JGE(loc_257f4));	// 41685 jge     short loc_257F4 ;~ 1678:0A8F
cs=0x1678;eip=0x000a91; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 41686 mov     [bx+6], ax ;~ 1678:0A91
loc_257f4:
	// 7261 
cs=0x1678;eip=0x000a94; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_10+2)))));	// 41689 inc     word ptr [bp+var_10+2] ;~ 1678:0A94
loc_257f7:
	// 7262 
cs=0x1678;eip=0x000a97; 	T(MOV(al, transshapenumvertscopy));	// 41692 mov     al, transshapenumvertscopy ;~ 1678:0A97
cs=0x1678;eip=0x000a9a; 	T(SUB(ah, ah));	// 41693 sub     ah, ah ;~ 1678:0A9A
cs=0x1678;eip=0x000a9c; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+var_10+2))), ax));	// 41694 cmp     word ptr [bp+var_10+2], ax ;~ 1678:0A9C
cs=0x1678;eip=0x000a9f; 	R(JC(loc_25790));	// 41695 jb      short loc_25790 ;~ 1678:0A9F
loc_25801:
	// 7263 
cs=0x1678;eip=0x000aa1; 	T(MOV(ax, transshapeprimptr));	// 41699 mov     ax, transshapeprimptr ;~ 1678:0AA1
cs=0x1678;eip=0x000aa4; 	T(MOV(dx, word_4186c));	// 41700 mov     dx, word_4186C ;~ 1678:0AA4
cs=0x1678;eip=0x000aa8; 	X(MOV(*(dw*)(((db*)&transshapeprimitives)), ax));	// 41701 mov     word ptr transshapeprimitives, ax ;~ 1678:0AA8
cs=0x1678;eip=0x000aab; 	X(MOV(*(dw*)(((db*)&transshapeprimitives)+2), dx));	// 41702 mov     word ptr transshapeprimitives+2, dx ;~ 1678:0AAB
cs=0x1678;eip=0x000aaf; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_434))), 4));	// 41703 add     word ptr [bp+var_434], 4 ;~ 1678:0AAF
cs=0x1678;eip=0x000ab4; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_b78))), 4));	// 41704 add     word ptr [bp+var_B78], 4 ;~ 1678:0AB4
cs=0x1678;eip=0x000ab9; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 41705 cmp     [bp+var_4], 0 ;~ 1678:0AB9
cs=0x1678;eip=0x000abd; 	R(JZ(loc_25822));	// 41706 jz      short loc_25822 ;~ 1678:0ABD
cs=0x1678;eip=0x000abf; 	R(JMP(loc_25d3c));	// 41707 jmp     loc_25D3C ;~ 1678:0ABF
loc_25822:
	// 7264 
cs=0x1678;eip=0x000ac2; 	T(TEST(*(db*)(raddr(ss,bp+var_2)), 2));	// 41711 test    byte ptr [bp+var_2], 2 ;~ 1678:0AC2
cs=0x1678;eip=0x000ac6; 	R(JZ(loc_2582b));	// 41712 jz      short loc_2582B ;~ 1678:0AC6
cs=0x1678;eip=0x000ac8; 	R(JMP(loc_25e04));	// 41713 jmp     loc_25E04 ;~ 1678:0AC8
loc_2582b:
	// 7265 
cs=0x1678;eip=0x000acb; 	T(LES(bx, transshapeprimitives));	// 41718 les     bx, transshapeprimitives ;~ 1678:0ACB
cs=0x1678;eip=0x000acf; 	T(TEST(*(raddr(es,bx+1)), 2));	// 41719 test    byte ptr es:[bx+1], 2 ;~ 1678:0ACF
cs=0x1678;eip=0x000ad4; 	R(JNZ(loc_25839));	// 41720 jnz     short loc_25839 ;~ 1678:0AD4
cs=0x1678;eip=0x000ad6; 	R(JMP(loc_25e04));	// 41721 jmp     loc_25E04 ;~ 1678:0AD6
loc_25839:
	// 7266 
cs=0x1678;eip=0x000ad9; 	T(MOV(bl, *(raddr(es,bx))));	// 41725 mov     bl, es:[bx] ;~ 1678:0AD9
cs=0x1678;eip=0x000adc; 	T(SUB(bh, bh));	// 41726 sub     bh, bh ;~ 1678:0ADC
cs=0x1678;eip=0x000ade; 	T(MOV(al, *((&primidxcounttab)+bx)));	// 41727 mov     al, primidxcounttab[bx] ;~ 1678:0ADE
cs=0x1678;eip=0x000ae2; 	T(SUB(ah, ah));	// 41728 sub     ah, ah ;~ 1678:0AE2
cs=0x1678;eip=0x000ae4; 	T(ADD(ax, transshapenumpaints));	// 41729 add     ax, transshapenumpaints ;~ 1678:0AE4
cs=0x1678;eip=0x000ae8; 	T(ADD(ax, 2));	// 41730 add     ax, 2 ;~ 1678:0AE8
cs=0x1678;eip=0x000aeb; 	X(ADD(*(dw*)(((db*)&transshapeprimitives)), ax));	// 41731 add     word ptr transshapeprimitives, ax ;~ 1678:0AEB
cs=0x1678;eip=0x000aef; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_b78))), 4));	// 41732 add     word ptr [bp+var_B78], 4 ;~ 1678:0AEF
cs=0x1678;eip=0x000af4; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_434))), 4));	// 41733 add     word ptr [bp+var_434], 4 ;~ 1678:0AF4
cs=0x1678;eip=0x000af9; 	R(JMP(loc_2582b));	// 41734 jmp     short loc_2582B ;~ 1678:0AF9
_primtype_line:
	// 7267 
cs=0x1678;eip=0x000afc; 	T(LES(bx, transshapeprimitives));	// 41739 les     bx, transshapeprimitives ;~ 1678:0AFC
cs=0x1678;eip=0x000b00; 	T(MOV(al, *(raddr(es,bx))));	// 41740 mov     al, es:[bx] ;~ 1678:0B00
cs=0x1678;eip=0x000b03; 	T(SUB(ah, ah));	// 41741 sub     ah, ah ;~ 1678:0B03
cs=0x1678;eip=0x000b05; 	T(MOV(si, ax));	// 41742 mov     si, ax ;~ 1678:0B05
cs=0x1678;eip=0x000b07; 	T(MOV(al, *(raddr(es,bx+1))));	// 41743 mov     al, es:[bx+1] ;~ 1678:0B07
cs=0x1678;eip=0x000b0b; 	T(MOV(di, ax));	// 41744 mov     di, ax ;~ 1678:0B0B
cs=0x1678;eip=0x000b0d; 	T(MOV(al, *(raddr(ss,bp+di+var_562))));	// 41745 mov     al, [bp+di+var_562] ;~ 1678:0B0D
cs=0x1678;eip=0x000b11; 	T(CBW);	// 41746 cbw ;~ 1678:0B11
cs=0x1678;eip=0x000b12; 	T(MOV(cx, ax));	// 41747 mov     cx, ax ;~ 1678:0B12
cs=0x1678;eip=0x000b14; 	T(MOV(al, *(raddr(ss,bp+si+var_562))));	// 41748 mov     al, [bp+si+var_562] ;~ 1678:0B14
cs=0x1678;eip=0x000b18; 	T(CBW);	// 41749 cbw ;~ 1678:0B18
cs=0x1678;eip=0x000b19; 	T(ADD(ax, cx));	// 41750 add     ax, cx ;~ 1678:0B19
cs=0x1678;eip=0x000b1b; 	T(CMP(ax, 2));	// 41751 cmp     ax, 2 ;~ 1678:0B1B
cs=0x1678;eip=0x000b1e; 	R(JZ(loc_25801));	// 41752 jz      short loc_25801 ;~ 1678:0B1E
cs=0x1678;eip=0x000b20; 	T(CMP(*(raddr(ss,bp+si+var_562)), 0));	// 41753 cmp     [bp+si+var_562], 0 ;~ 1678:0B20
cs=0x1678;eip=0x000b25; 	R(JZ(loc_258bc));	// 41754 jz      short loc_258BC ;~ 1678:0B25
cs=0x1678;eip=0x000b27; 	T(MOV(ax, 0x0C));	// 41755 mov     ax, 0Ch ;~ 1678:0B27
cs=0x1678;eip=0x000b2a; 	X(PUSH(ax));	// 41756 push    ax ;~ 1678:0B2A
cs=0x1678;eip=0x000b2b; 	T(ax = bp+var_458);	// 41757 lea     ax, [bp+var_458] ;~ 1678:0B2B
cs=0x1678;eip=0x000b2f; 	X(PUSH(ax));	// 41758 push    ax ;~ 1678:0B2F
cs=0x1678;eip=0x000b30; 	T(MOV(ax, si));	// 41759 mov     ax, si ;~ 1678:0B30
cs=0x1678;eip=0x000b32; 	T(MOV(cx, ax));	// 41760 mov     cx, ax ;~ 1678:0B32
cs=0x1678;eip=0x000b34; 	T(SHL(ax, 1));	// 41761 shl     ax, 1 ;~ 1678:0B34
cs=0x1678;eip=0x000b36; 	T(ADD(ax, cx));	// 41762 add     ax, cx ;~ 1678:0B36
cs=0x1678;eip=0x000b38; 	T(SHL(ax, 1));	// 41763 shl     ax, 1 ;~ 1678:0B38
cs=0x1678;eip=0x000b3a; 	T(ADD(ax, bp));	// 41764 add     ax, bp ;~ 1678:0B3A
cs=0x1678;eip=0x000b3c; 	T(SUB(ax, 0x0B6E));	// 41765 sub     ax, 0B6Eh ;~ 1678:0B3C
cs=0x1678;eip=0x000b3f; 	X(PUSH(ax));	// 41766 push    ax ;~ 1678:0B3F
cs=0x1678;eip=0x000b40; 	T(MOV(ax, di));	// 41767 mov     ax, di ;~ 1678:0B40
cs=0x1678;eip=0x000b42; 	T(MOV(cx, ax));	// 41768 mov     cx, ax ;~ 1678:0B42
cs=0x1678;eip=0x000b44; 	T(SHL(ax, 1));	// 41769 shl     ax, 1 ;~ 1678:0B44
cs=0x1678;eip=0x000b46; 	T(ADD(ax, cx));	// 41770 add     ax, cx ;~ 1678:0B46
cs=0x1678;eip=0x000b48; 	T(SHL(ax, 1));	// 41771 shl     ax, 1 ;~ 1678:0B48
cs=0x1678;eip=0x000b4a; 	T(ADD(ax, bp));	// 41772 add     ax, bp ;~ 1678:0B4A
cs=0x1678;eip=0x000b4c; 	T(SUB(ax, 0x0B6E));	// 41773 sub     ax, 0B6Eh ;~ 1678:0B4C
cs=0x1678;eip=0x000b4f; 	X(PUSH(ax));	// 41774 push    ax ;~ 1678:0B4F
cs=0x1678;eip=0x000b50; 	R(CALLF(vector_op_unk,0));	// 41775 call    vector_op_unk ;~ 1678:0B50
cs=0x1678;eip=0x000b55; 	T(ADD(sp, 8));	// 41776 add     sp, 8 ;~ 1678:0B55
cs=0x1678;eip=0x000b58; 	T(MOV(ax, si));	// 41777 mov     ax, si ;~ 1678:0B58
cs=0x1678;eip=0x000b5a; 	R(JMP(loc_258f6));	// 41778 jmp     short loc_258F6 ;~ 1678:0B5A
loc_258bc:
	// 7268 
cs=0x1678;eip=0x000b5c; 	T(CMP(*(raddr(ss,bp+di+var_562)), 0));	// 41782 cmp     [bp+di+var_562], 0 ;~ 1678:0B5C
cs=0x1678;eip=0x000b61; 	R(JZ(loc_2590d));	// 41783 jz      short loc_2590D ;~ 1678:0B61
cs=0x1678;eip=0x000b63; 	T(MOV(ax, 0x0C));	// 41784 mov     ax, 0Ch ;~ 1678:0B63
cs=0x1678;eip=0x000b66; 	X(PUSH(ax));	// 41785 push    ax ;~ 1678:0B66
cs=0x1678;eip=0x000b67; 	T(ax = bp+var_458);	// 41786 lea     ax, [bp+var_458] ;~ 1678:0B67
cs=0x1678;eip=0x000b6b; 	X(PUSH(ax));	// 41787 push    ax ;~ 1678:0B6B
cs=0x1678;eip=0x000b6c; 	T(MOV(ax, di));	// 41788 mov     ax, di ;~ 1678:0B6C
cs=0x1678;eip=0x000b6e; 	T(MOV(cx, ax));	// 41789 mov     cx, ax ;~ 1678:0B6E
cs=0x1678;eip=0x000b70; 	T(SHL(ax, 1));	// 41790 shl     ax, 1 ;~ 1678:0B70
cs=0x1678;eip=0x000b72; 	T(ADD(ax, cx));	// 41791 add     ax, cx ;~ 1678:0B72
cs=0x1678;eip=0x000b74; 	T(SHL(ax, 1));	// 41792 shl     ax, 1 ;~ 1678:0B74
cs=0x1678;eip=0x000b76; 	T(ADD(ax, bp));	// 41793 add     ax, bp ;~ 1678:0B76
cs=0x1678;eip=0x000b78; 	T(SUB(ax, 0x0B6E));	// 41794 sub     ax, 0B6Eh ;~ 1678:0B78
cs=0x1678;eip=0x000b7b; 	X(PUSH(ax));	// 41795 push    ax ;~ 1678:0B7B
cs=0x1678;eip=0x000b7c; 	T(MOV(ax, si));	// 41796 mov     ax, si ;~ 1678:0B7C
cs=0x1678;eip=0x000b7e; 	T(MOV(cx, ax));	// 41797 mov     cx, ax ;~ 1678:0B7E
cs=0x1678;eip=0x000b80; 	T(SHL(ax, 1));	// 41798 shl     ax, 1 ;~ 1678:0B80
cs=0x1678;eip=0x000b82; 	T(ADD(ax, cx));	// 41799 add     ax, cx ;~ 1678:0B82
cs=0x1678;eip=0x000b84; 	T(SHL(ax, 1));	// 41800 shl     ax, 1 ;~ 1678:0B84
cs=0x1678;eip=0x000b86; 	T(ADD(ax, bp));	// 41801 add     ax, bp ;~ 1678:0B86
cs=0x1678;eip=0x000b88; 	T(SUB(ax, 0x0B6E));	// 41802 sub     ax, 0B6Eh ;~ 1678:0B88
cs=0x1678;eip=0x000b8b; 	X(PUSH(ax));	// 41803 push    ax ;~ 1678:0B8B
cs=0x1678;eip=0x000b8c; 	R(CALLF(vector_op_unk,0));	// 41804 call    vector_op_unk ;~ 1678:0B8C
cs=0x1678;eip=0x000b91; 	T(ADD(sp, 8));	// 41805 add     sp, 8 ;~ 1678:0B91
cs=0x1678;eip=0x000b94; 	T(MOV(ax, di));	// 41806 mov     ax, di ;~ 1678:0B94
loc_258f6:
	// 7269 
cs=0x1678;eip=0x000b96; 	T(SHL(ax, 1));	// 41809 shl     ax, 1 ;~ 1678:0B96
cs=0x1678;eip=0x000b98; 	T(SHL(ax, 1));	// 41810 shl     ax, 1 ;~ 1678:0B98
cs=0x1678;eip=0x000b9a; 	T(ADD(ax, bp));	// 41811 add     ax, bp ;~ 1678:0B9A
cs=0x1678;eip=0x000b9c; 	T(SUB(ax, 0x416));	// 41812 sub     ax, 416h ;~ 1678:0B9C
cs=0x1678;eip=0x000b9f; 	X(PUSH(ax));	// 41813 push    ax ;~ 1678:0B9F
cs=0x1678;eip=0x000ba0; 	T(ax = bp+var_458);	// 41814 lea     ax, [bp+var_458] ;~ 1678:0BA0
cs=0x1678;eip=0x000ba4; 	X(PUSH(ax));	// 41815 push    ax ;~ 1678:0BA4
cs=0x1678;eip=0x000ba5; 	R(CALLF(vector_to_point,0));	// 41816 call    vector_to_point ;~ 1678:0BA5
cs=0x1678;eip=0x000baa; 	T(ADD(sp, 4));	// 41817 add     sp, 4 ;~ 1678:0BAA
loc_2590d:
	// 7270 
cs=0x1678;eip=0x000bad; 	T(MOV(bx, si));	// 41820 mov     bx, si ;~ 1678:0BAD
cs=0x1678;eip=0x000baf; 	T(MOV(ax, bx));	// 41821 mov     ax, bx ;~ 1678:0BAF
cs=0x1678;eip=0x000bb1; 	T(SHL(bx, 1));	// 41822 shl     bx, 1 ;~ 1678:0BB1
cs=0x1678;eip=0x000bb3; 	T(ADD(bx, ax));	// 41823 add     bx, ax ;~ 1678:0BB3
cs=0x1678;eip=0x000bb5; 	T(SHL(bx, 1));	// 41824 shl     bx, 1 ;~ 1678:0BB5
cs=0x1678;eip=0x000bb7; 	T(ADD(bx, bp));	// 41825 add     bx, bp ;~ 1678:0BB7
cs=0x1678;eip=0x000bb9; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x0B6A))));	// 41826 mov     ax, [bx-0B6Ah] ;~ 1678:0BB9
cs=0x1678;eip=0x000bbd; 	T(MOV(bx, di));	// 41827 mov     bx, di ;~ 1678:0BBD
cs=0x1678;eip=0x000bbf; 	T(MOV(cx, bx));	// 41828 mov     cx, bx ;~ 1678:0BBF
cs=0x1678;eip=0x000bc1; 	T(SHL(bx, 1));	// 41829 shl     bx, 1 ;~ 1678:0BC1
cs=0x1678;eip=0x000bc3; 	T(ADD(bx, cx));	// 41830 add     bx, cx ;~ 1678:0BC3
cs=0x1678;eip=0x000bc5; 	T(SHL(bx, 1));	// 41831 shl     bx, 1 ;~ 1678:0BC5
cs=0x1678;eip=0x000bc7; 	T(ADD(bx, bp));	// 41832 add     bx, bp ;~ 1678:0BC7
cs=0x1678;eip=0x000bc9; 	T(ADD(ax, *(dw*)(raddr(ds,bx-0x0B6A))));	// 41833 add     ax, [bx-0B6Ah] ;~ 1678:0BC9
cs=0x1678;eip=0x000bcd; 	T(CWD);	// 41834 cwd ;~ 1678:0BCD
cs=0x1678;eip=0x000bce; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 41835 mov     [bp+var_18], ax ;~ 1678:0BCE
cs=0x1678;eip=0x000bd1; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), dx));	// 41836 mov     [bp+var_16], dx ;~ 1678:0BD1
cs=0x1678;eip=0x000bd4; 	T(MOV(bx, *(polyvertpointptrtab)));	// 41837 mov     bx, polyvertpointptrtab ;~ 1678:0BD4
cs=0x1678;eip=0x000bd8; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 41838 mov     ax, [bx] ;~ 1678:0BD8
cs=0x1678;eip=0x000bda; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 41839 mov     dx, [bx+2] ;~ 1678:0BDA
cs=0x1678;eip=0x000bdd; 	T(LES(bx, transshapepolyinfo));	// 41840 les     bx, transshapepolyinfo ;~ 1678:0BDD
cs=0x1678;eip=0x000be1; 	X(MOV(*(dw*)(raddr(es,bx+6)), ax));	// 41841 mov     es:[bx+6], ax ;~ 1678:0BE1
cs=0x1678;eip=0x000be5; 	X(MOV(*(dw*)(raddr(es,bx+8)), dx));	// 41842 mov     es:[bx+8], dx ;~ 1678:0BE5
cs=0x1678;eip=0x000be9; 	T(MOV(bx, *(dw*)(((db*)polyvertpointptrtab)+2)));	// 41843 mov     bx, polyvertpointptrtab+2 ;~ 1678:0BE9
cs=0x1678;eip=0x000bed; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 41844 mov     ax, [bx] ;~ 1678:0BED
cs=0x1678;eip=0x000bef; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 41845 mov     dx, [bx+2] ;~ 1678:0BEF
cs=0x1678;eip=0x000bf2; 	T(LES(bx, transshapepolyinfo));	// 41846 les     bx, transshapepolyinfo ;~ 1678:0BF2
cs=0x1678;eip=0x000bf6; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 41847 mov     es:[bx+0Ah], ax ;~ 1678:0BF6
cs=0x1678;eip=0x000bfa; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 41848 mov     es:[bx+0Ch], dx ;~ 1678:0BFA
cs=0x1678;eip=0x000bfe; 	T(TEST(transshapeflags, 8));	// 41849 test    transshapeflags, 8 ;~ 1678:0BFE
cs=0x1678;eip=0x000c03; 	R(JZ(loc_25983));	// 41850 jz      short loc_25983 ;~ 1678:0C03
cs=0x1678;eip=0x000c05; 	X(PUSH(transshaperectptr));	// 41851 push    transshaperectptr ;~ 1678:0C05
cs=0x1678;eip=0x000c09; 	X(PUSH(*(polyvertpointptrtab)));	// 41852 push    polyvertpointptrtab ;~ 1678:0C09
cs=0x1678;eip=0x000c0d; 	X(PUSH(cs));	// 41853 push    cs ;~ 1678:0C0D
cs=0x1678;eip=0x000c0e; 	R(CALL(rect_adjust_from_point,0));	// 41854 call    near ptr rect_adjust_from_point ;~ 1678:0C0E
cs=0x1678;eip=0x000c11; 	T(ADD(sp, 4));	// 41855 add     sp, 4 ;~ 1678:0C11
cs=0x1678;eip=0x000c14; 	X(PUSH(transshaperectptr));	// 41856 push    transshaperectptr ;~ 1678:0C14
cs=0x1678;eip=0x000c18; 	X(PUSH(*(dw*)(((db*)polyvertpointptrtab)+2)));	// 41857 push    polyvertpointptrtab+2 ;~ 1678:0C18
loc_2597c:
	// 7271 
cs=0x1678;eip=0x000c1c; 	X(PUSH(cs));	// 41860 push    cs ;~ 1678:0C1C
cs=0x1678;eip=0x000c1d; 	R(CALL(rect_adjust_from_point,0));	// 41861 call    near ptr rect_adjust_from_point ;~ 1678:0C1D
cs=0x1678;eip=0x000c20; 	T(ADD(sp, 4));	// 41862 add     sp, 4 ;~ 1678:0C20
loc_25983:
	// 7272 
cs=0x1678;eip=0x000c23; 	X(MOV(transshapenumvertscopy, 2));	// 41866 mov     transshapenumvertscopy, 2 ;~ 1678:0C23
loc_25988:
	// 7273 
cs=0x1678;eip=0x000c28; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 41869 inc     [bp+var_4] ;~ 1678:0C28
cs=0x1678;eip=0x000c2b; 	R(JMP(loc_25801));	// 41870 jmp     loc_25801 ;~ 1678:0C2B
_primtype_wheel:
	// 7274 
cs=0x1678;eip=0x000c2e; 	T(CMP(*(dw*)(raddr(ss,bp+var_1a)), 0));	// 41874 cmp     [bp+var_1A], 0 ;~ 1678:0C2E
cs=0x1678;eip=0x000c32; 	R(JZ(loc_25997));	// 41875 jz      short loc_25997 ;~ 1678:0C32
cs=0x1678;eip=0x000c34; 	R(JMP(loc_25801));	// 41876 jmp     loc_25801 ;~ 1678:0C34
loc_25997:
	// 7275 
cs=0x1678;eip=0x000c37; 	T(MOV(bx, *(polyvertpointptrtab)));	// 41880 mov     bx, polyvertpointptrtab ;~ 1678:0C37
cs=0x1678;eip=0x000c3b; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 41881 mov     ax, [bx] ;~ 1678:0C3B
cs=0x1678;eip=0x000c3d; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 41882 mov     dx, [bx+2] ;~ 1678:0C3D
cs=0x1678;eip=0x000c40; 	T(LES(bx, transshapepolyinfo));	// 41883 les     bx, transshapepolyinfo ;~ 1678:0C40
cs=0x1678;eip=0x000c44; 	X(MOV(*(dw*)(raddr(es,bx+6)), ax));	// 41884 mov     es:[bx+6], ax ;~ 1678:0C44
cs=0x1678;eip=0x000c48; 	X(MOV(*(dw*)(raddr(es,bx+8)), dx));	// 41885 mov     es:[bx+8], dx ;~ 1678:0C48
cs=0x1678;eip=0x000c4c; 	T(MOV(bx, *(dw*)(((db*)polyvertpointptrtab)+2)));	// 41886 mov     bx, polyvertpointptrtab+2 ;~ 1678:0C4C
cs=0x1678;eip=0x000c50; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 41887 mov     ax, [bx] ;~ 1678:0C50
cs=0x1678;eip=0x000c52; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 41888 mov     dx, [bx+2] ;~ 1678:0C52
cs=0x1678;eip=0x000c55; 	T(LES(bx, transshapepolyinfo));	// 41889 les     bx, transshapepolyinfo ;~ 1678:0C55
cs=0x1678;eip=0x000c59; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 41890 mov     es:[bx+0Ah], ax ;~ 1678:0C59
cs=0x1678;eip=0x000c5d; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 41891 mov     es:[bx+0Ch], dx ;~ 1678:0C5D
cs=0x1678;eip=0x000c61; 	T(MOV(bx, *(dw*)(((db*)polyvertpointptrtab)+4)));	// 41892 mov     bx, polyvertpointptrtab+4 ;~ 1678:0C61
cs=0x1678;eip=0x000c65; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 41893 mov     ax, [bx] ;~ 1678:0C65
cs=0x1678;eip=0x000c67; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 41894 mov     dx, [bx+2] ;~ 1678:0C67
cs=0x1678;eip=0x000c6a; 	T(LES(bx, transshapepolyinfo));	// 41895 les     bx, transshapepolyinfo ;~ 1678:0C6A
cs=0x1678;eip=0x000c6e; 	X(MOV(*(dw*)(raddr(es,bx+0x0E)), ax));	// 41896 mov     es:[bx+0Eh], ax ;~ 1678:0C6E
cs=0x1678;eip=0x000c72; 	X(MOV(*(dw*)(raddr(es,bx+0x10)), dx));	// 41897 mov     es:[bx+10h], dx ;~ 1678:0C72
cs=0x1678;eip=0x000c76; 	T(MOV(bx, *(dw*)(((db*)polyvertpointptrtab)+6)));	// 41898 mov     bx, polyvertpointptrtab+6 ;~ 1678:0C76
cs=0x1678;eip=0x000c7a; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 41899 mov     ax, [bx] ;~ 1678:0C7A
cs=0x1678;eip=0x000c7c; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 41900 mov     dx, [bx+2] ;~ 1678:0C7C
cs=0x1678;eip=0x000c7f; 	T(LES(bx, transshapepolyinfo));	// 41901 les     bx, transshapepolyinfo ;~ 1678:0C7F
cs=0x1678;eip=0x000c83; 	X(MOV(*(dw*)(raddr(es,bx+0x12)), ax));	// 41902 mov     es:[bx+12h], ax ;~ 1678:0C83
cs=0x1678;eip=0x000c87; 	X(MOV(*(dw*)(raddr(es,bx+0x14)), dx));	// 41903 mov     es:[bx+14h], dx ;~ 1678:0C87
cs=0x1678;eip=0x000c8b; 	T(MOV(ax, *(dw*)(((db*)&transshapepolyinfo))));	// 41904 mov     ax, word ptr transshapepolyinfo ;~ 1678:0C8B
cs=0x1678;eip=0x000c8e; 	T(MOV(dx, *(dw*)(((db*)&transshapepolyinfo)+2)));	// 41905 mov     dx, word ptr transshapepolyinfo+2 ;~ 1678:0C8E
cs=0x1678;eip=0x000c92; 	T(ADD(ax, 6));	// 41906 add     ax, 6 ;~ 1678:0C92
cs=0x1678;eip=0x000c95; 	X(PUSH(dx));	// 41907 push    dx ;~ 1678:0C95
cs=0x1678;eip=0x000c96; 	X(PUSH(ax));	// 41908 push    ax ;~ 1678:0C96
cs=0x1678;eip=0x000c97; 	X(PUSH(cs));	// 41909 push    cs ;~ 1678:0C97
cs=0x1678;eip=0x000c98; 	R(CALL(transformed_shape_op_helper3,0));	// 41910 call    near ptr transformed_shape_op_helper3 ;~ 1678:0C98
cs=0x1678;eip=0x000c9b; 	T(ADD(sp, 4));	// 41911 add     sp, 4 ;~ 1678:0C9B
cs=0x1678;eip=0x000c9e; 	T(OR(al, al));	// 41912 or      al, al ;~ 1678:0C9E
cs=0x1678;eip=0x000ca0; 	R(JNZ(loc_25a7c));	// 41913 jnz     short loc_25A7C ;~ 1678:0CA0
cs=0x1678;eip=0x000ca2; 	T(MOV(bx, *(dw*)(((db*)polyvertpointptrtab)+6)));	// 41914 mov     bx, polyvertpointptrtab+6 ;~ 1678:0CA2
cs=0x1678;eip=0x000ca6; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 41915 mov     ax, [bx] ;~ 1678:0CA6
cs=0x1678;eip=0x000ca8; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 41916 mov     dx, [bx+2] ;~ 1678:0CA8
cs=0x1678;eip=0x000cab; 	T(LES(bx, transshapepolyinfo));	// 41917 les     bx, transshapepolyinfo ;~ 1678:0CAB
cs=0x1678;eip=0x000caf; 	X(MOV(*(dw*)(raddr(es,bx+6)), ax));	// 41918 mov     es:[bx+6], ax ;~ 1678:0CAF
cs=0x1678;eip=0x000cb3; 	X(MOV(*(dw*)(raddr(es,bx+8)), dx));	// 41919 mov     es:[bx+8], dx ;~ 1678:0CB3
cs=0x1678;eip=0x000cb7; 	T(MOV(bx, *(dw*)(((db*)polyvertpointptrtab)+8)));	// 41920 mov     bx, polyvertpointptrtab+8 ;~ 1678:0CB7
cs=0x1678;eip=0x000cbb; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 41921 mov     ax, [bx] ;~ 1678:0CBB
cs=0x1678;eip=0x000cbd; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 41922 mov     dx, [bx+2] ;~ 1678:0CBD
cs=0x1678;eip=0x000cc0; 	T(LES(bx, transshapepolyinfo));	// 41923 les     bx, transshapepolyinfo ;~ 1678:0CC0
cs=0x1678;eip=0x000cc4; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 41924 mov     es:[bx+0Ah], ax ;~ 1678:0CC4
cs=0x1678;eip=0x000cc8; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 41925 mov     es:[bx+0Ch], dx ;~ 1678:0CC8
cs=0x1678;eip=0x000ccc; 	T(MOV(bx, *(dw*)(((db*)polyvertpointptrtab)+0x0A)));	// 41926 mov     bx, polyvertpointptrtab+0Ah ;~ 1678:0CCC
cs=0x1678;eip=0x000cd0; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 41927 mov     ax, [bx] ;~ 1678:0CD0
cs=0x1678;eip=0x000cd2; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 41928 mov     dx, [bx+2] ;~ 1678:0CD2
cs=0x1678;eip=0x000cd5; 	T(LES(bx, transshapepolyinfo));	// 41929 les     bx, transshapepolyinfo ;~ 1678:0CD5
cs=0x1678;eip=0x000cd9; 	X(MOV(*(dw*)(raddr(es,bx+0x0E)), ax));	// 41930 mov     es:[bx+0Eh], ax ;~ 1678:0CD9
cs=0x1678;eip=0x000cdd; 	X(MOV(*(dw*)(raddr(es,bx+0x10)), dx));	// 41931 mov     es:[bx+10h], dx ;~ 1678:0CDD
cs=0x1678;eip=0x000ce1; 	T(MOV(bx, *(polyvertpointptrtab)));	// 41932 mov     bx, polyvertpointptrtab ;~ 1678:0CE1
cs=0x1678;eip=0x000ce5; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 41933 mov     ax, [bx] ;~ 1678:0CE5
cs=0x1678;eip=0x000ce7; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 41934 mov     dx, [bx+2] ;~ 1678:0CE7
cs=0x1678;eip=0x000cea; 	T(LES(bx, transshapepolyinfo));	// 41935 les     bx, transshapepolyinfo ;~ 1678:0CEA
cs=0x1678;eip=0x000cee; 	X(MOV(*(dw*)(raddr(es,bx+0x12)), ax));	// 41936 mov     es:[bx+12h], ax ;~ 1678:0CEE
cs=0x1678;eip=0x000cf2; 	X(MOV(*(dw*)(raddr(es,bx+0x14)), dx));	// 41937 mov     es:[bx+14h], dx ;~ 1678:0CF2
cs=0x1678;eip=0x000cf6; 	T(LES(bx, transshapeprimitives));	// 41938 les     bx, transshapeprimitives ;~ 1678:0CF6
cs=0x1678;eip=0x000cfa; 	T(MOV(al, *(raddr(es,bx+3))));	// 41939 mov     al, es:[bx+3]   ; primitives+3 = paintjob 1? [0..x] ;~ 1678:0CFA
cs=0x1678;eip=0x000cfe; 	T(SUB(ah, ah));	// 41940 sub     ah, ah ;~ 1678:0CFE
cs=0x1678;eip=0x000d00; 	T(MOV(bx, ax));	// 41941 mov     bx, ax ;~ 1678:0D00
cs=0x1678;eip=0x000d02; 	T(SHL(bx, 1));	// 41942 shl     bx, 1 ;~ 1678:0D02
cs=0x1678;eip=0x000d04; 	T(ADD(bx, ax));	// 41943 add     bx, ax ;~ 1678:0D04
cs=0x1678;eip=0x000d06; 	T(SHL(bx, 1));	// 41944 shl     bx, 1 ;~ 1678:0D06
cs=0x1678;eip=0x000d08; 	T(ADD(bx, bp));	// 41945 add     bx, bp ;~ 1678:0D08
cs=0x1678;eip=0x000d0a; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x0B6A))));	// 41946 mov     ax, [bx-0B6Ah] ;~ 1678:0D0A
cs=0x1678;eip=0x000d0e; 	T(CWD);	// 41947 cwd ;~ 1678:0D0E
cs=0x1678;eip=0x000d0f; 	T(MOV(cl, 2));	// 41948 mov     cl, 2 ;~ 1678:0D0F
loc_25a71:
	// 7276 
cs=0x1678;eip=0x000d11; 	T(SHL(ax, 1));	// 41951 shl     ax, 1 ;~ 1678:0D11
cs=0x1678;eip=0x000d13; 	T(RCL(dx, 1));	// 41952 rcl     dx, 1 ;~ 1678:0D13
cs=0x1678;eip=0x000d15; 	T(DEC(cl));	// 41953 dec     cl ;~ 1678:0D15
cs=0x1678;eip=0x000d17; 	R(JNZ(loc_25a71));	// 41954 jnz     short loc_25A71 ;~ 1678:0D17
cs=0x1678;eip=0x000d19; 	R(JMP(loc_25a9e));	// 41955 jmp     short loc_25A9E ;~ 1678:0D19
loc_25a7c:
	// 7277 
cs=0x1678;eip=0x000d1c; 	T(LES(bx, transshapeprimitives));	// 41960 les     bx, transshapeprimitives ;~ 1678:0D1C
cs=0x1678;eip=0x000d20; 	T(MOV(al, *(raddr(es,bx))));	// 41961 mov     al, es:[bx]     ; primitives+0 = primitivetype ;~ 1678:0D20
cs=0x1678;eip=0x000d23; 	T(SUB(ah, ah));	// 41962 sub     ah, ah ;~ 1678:0D23
cs=0x1678;eip=0x000d25; 	T(MOV(bx, ax));	// 41963 mov     bx, ax ;~ 1678:0D25
cs=0x1678;eip=0x000d27; 	T(SHL(bx, 1));	// 41964 shl     bx, 1 ;~ 1678:0D27
cs=0x1678;eip=0x000d29; 	T(ADD(bx, ax));	// 41965 add     bx, ax ;~ 1678:0D29
cs=0x1678;eip=0x000d2b; 	T(SHL(bx, 1));	// 41966 shl     bx, 1 ;~ 1678:0D2B
cs=0x1678;eip=0x000d2d; 	T(ADD(bx, bp));	// 41967 add     bx, bp ;~ 1678:0D2D
cs=0x1678;eip=0x000d2f; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x0B6A))));	// 41968 mov     ax, [bx-0B6Ah] ;~ 1678:0D2F
cs=0x1678;eip=0x000d33; 	T(CWD);	// 41969 cwd ;~ 1678:0D33
cs=0x1678;eip=0x000d34; 	T(MOV(cl, 2));	// 41970 mov     cl, 2 ;~ 1678:0D34
loc_25a96:
	// 7278 
cs=0x1678;eip=0x000d36; 	T(SHL(ax, 1));	// 41973 shl     ax, 1 ;~ 1678:0D36
cs=0x1678;eip=0x000d38; 	T(RCL(dx, 1));	// 41974 rcl     dx, 1 ;~ 1678:0D38
cs=0x1678;eip=0x000d3a; 	T(DEC(cl));	// 41975 dec     cl ;~ 1678:0D3A
cs=0x1678;eip=0x000d3c; 	R(JNZ(loc_25a96));	// 41976 jnz     short loc_25A96 ;~ 1678:0D3C
loc_25a9e:
	// 7279 
cs=0x1678;eip=0x000d3e; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 41979 mov     [bp+var_18], ax ;~ 1678:0D3E
cs=0x1678;eip=0x000d41; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), dx));	// 41980 mov     [bp+var_16], dx ;~ 1678:0D41
cs=0x1678;eip=0x000d44; 	T(LES(bx, transshapepolyinfo));	// 41981 les     bx, transshapepolyinfo ;~ 1678:0D44
cs=0x1678;eip=0x000d48; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 41982 mov     ax, es:[bx+8] ;~ 1678:0D48
cs=0x1678;eip=0x000d4c; 	T(SUB(ax, *(dw*)(raddr(es,bx+0x0C))));	// 41983 sub     ax, es:[bx+0Ch] ;~ 1678:0D4C
cs=0x1678;eip=0x000d50; 	X(PUSH(ax));	// 41984 push    ax ;~ 1678:0D50
cs=0x1678;eip=0x000d51; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 41985 mov     ax, es:[bx+6] ;~ 1678:0D51
cs=0x1678;eip=0x000d55; 	T(SUB(ax, *(dw*)(raddr(es,bx+0x0A))));	// 41986 sub     ax, es:[bx+0Ah] ;~ 1678:0D55
cs=0x1678;eip=0x000d59; 	X(PUSH(ax));	// 41987 push    ax ;~ 1678:0D59
cs=0x1678;eip=0x000d5a; 	R(CALLF(polarradius2d,0));	// 41988 call    polarRadius2D ;~ 1678:0D5A
cs=0x1678;eip=0x000d5f; 	T(ADD(sp, 4));	// 41989 add     sp, 4 ;~ 1678:0D5F
cs=0x1678;eip=0x000d62; 	T(MOV(si, ax));	// 41990 mov     si, ax ;~ 1678:0D62
cs=0x1678;eip=0x000d64; 	T(LES(bx, transshapepolyinfo));	// 41991 les     bx, transshapepolyinfo ;~ 1678:0D64
cs=0x1678;eip=0x000d68; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 41992 mov     ax, es:[bx+8] ;~ 1678:0D68
cs=0x1678;eip=0x000d6c; 	T(SUB(ax, *(dw*)(raddr(es,bx+0x10))));	// 41993 sub     ax, es:[bx+10h] ;~ 1678:0D6C
cs=0x1678;eip=0x000d70; 	X(PUSH(ax));	// 41994 push    ax ;~ 1678:0D70
cs=0x1678;eip=0x000d71; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 41995 mov     ax, es:[bx+6] ;~ 1678:0D71
cs=0x1678;eip=0x000d75; 	T(SUB(ax, *(dw*)(raddr(es,bx+0x0E))));	// 41996 sub     ax, es:[bx+0Eh] ;~ 1678:0D75
cs=0x1678;eip=0x000d79; 	X(PUSH(ax));	// 41997 push    ax ;~ 1678:0D79
cs=0x1678;eip=0x000d7a; 	R(CALLF(polarradius2d,0));	// 41998 call    polarRadius2D ;~ 1678:0D7A
cs=0x1678;eip=0x000d7f; 	T(ADD(sp, 4));	// 41999 add     sp, 4 ;~ 1678:0D7F
cs=0x1678;eip=0x000d82; 	T(MOV(di, ax));	// 42000 mov     di, ax ;~ 1678:0D82
cs=0x1678;eip=0x000d84; 	T(CMP(di, si));	// 42001 cmp     di, si ;~ 1678:0D84
cs=0x1678;eip=0x000d86; 	R(JLE(loc_25aea));	// 42002 jle     short loc_25AEA ;~ 1678:0D86
cs=0x1678;eip=0x000d88; 	T(MOV(si, di));	// 42003 mov     si, di ;~ 1678:0D88
loc_25aea:
	// 7280 
cs=0x1678;eip=0x000d8a; 	T(TEST(transshapeflags, 8));	// 42006 test    transshapeflags, 8 ;~ 1678:0D8A
cs=0x1678;eip=0x000d8f; 	R(JNZ(loc_25af4));	// 42007 jnz     short loc_25AF4 ;~ 1678:0D8F
cs=0x1678;eip=0x000d91; 	R(JMP(loc_25b9c));	// 42008 jmp     loc_25B9C ;~ 1678:0D91
loc_25af4:
	// 7281 
cs=0x1678;eip=0x000d94; 	T(LES(bx, transshapepolyinfo));	// 42012 les     bx, transshapepolyinfo ;~ 1678:0D94
cs=0x1678;eip=0x000d98; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 42013 mov     ax, es:[bx+6] ;~ 1678:0D98
cs=0x1678;eip=0x000d9c; 	T(SUB(ax, si));	// 42014 sub     ax, si ;~ 1678:0D9C
cs=0x1678;eip=0x000d9e; 	T(DEC(ax));	// 42015 dec     ax ;~ 1678:0D9E
cs=0x1678;eip=0x000d9f; 	X(MOV(*(dw*)(raddr(ss,bp+var_450)), ax));	// 42016 mov     [bp+var_450], ax ;~ 1678:0D9F
cs=0x1678;eip=0x000da3; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 42017 mov     ax, es:[bx+8] ;~ 1678:0DA3
cs=0x1678;eip=0x000da7; 	T(SUB(ax, si));	// 42018 sub     ax, si ;~ 1678:0DA7
cs=0x1678;eip=0x000da9; 	T(DEC(ax));	// 42019 dec     ax ;~ 1678:0DA9
cs=0x1678;eip=0x000daa; 	X(MOV(*(dw*)(raddr(ss,bp+var_44e)), ax));	// 42020 mov     [bp+var_44E], ax ;~ 1678:0DAA
cs=0x1678;eip=0x000dae; 	X(PUSH(transshaperectptr));	// 42021 push    transshaperectptr ;~ 1678:0DAE
cs=0x1678;eip=0x000db2; 	T(ax = bp+var_450);	// 42022 lea     ax, [bp+var_450] ;~ 1678:0DB2
cs=0x1678;eip=0x000db6; 	X(PUSH(ax));	// 42023 push    ax ;~ 1678:0DB6
cs=0x1678;eip=0x000db7; 	X(PUSH(cs));	// 42024 push    cs ;~ 1678:0DB7
cs=0x1678;eip=0x000db8; 	R(CALL(rect_adjust_from_point,0));	// 42025 call    near ptr rect_adjust_from_point ;~ 1678:0DB8
cs=0x1678;eip=0x000dbb; 	T(ADD(sp, 4));	// 42026 add     sp, 4 ;~ 1678:0DBB
cs=0x1678;eip=0x000dbe; 	T(LES(bx, transshapepolyinfo));	// 42027 les     bx, transshapepolyinfo ;~ 1678:0DBE
cs=0x1678;eip=0x000dc2; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 42028 mov     ax, es:[bx+8] ;~ 1678:0DC2
cs=0x1678;eip=0x000dc6; 	T(ADD(ax, si));	// 42029 add     ax, si ;~ 1678:0DC6
cs=0x1678;eip=0x000dc8; 	T(INC(ax));	// 42030 inc     ax ;~ 1678:0DC8
cs=0x1678;eip=0x000dc9; 	X(MOV(*(dw*)(raddr(ss,bp+var_44e)), ax));	// 42031 mov     [bp+var_44E], ax ;~ 1678:0DC9
cs=0x1678;eip=0x000dcd; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 42032 mov     ax, es:[bx+6] ;~ 1678:0DCD
cs=0x1678;eip=0x000dd1; 	T(ADD(ax, si));	// 42033 add     ax, si ;~ 1678:0DD1
cs=0x1678;eip=0x000dd3; 	T(INC(ax));	// 42034 inc     ax ;~ 1678:0DD3
cs=0x1678;eip=0x000dd4; 	X(MOV(*(dw*)(raddr(ss,bp+var_450)), ax));	// 42035 mov     [bp+var_450], ax ;~ 1678:0DD4
cs=0x1678;eip=0x000dd8; 	X(PUSH(transshaperectptr));	// 42036 push    transshaperectptr ;~ 1678:0DD8
cs=0x1678;eip=0x000ddc; 	T(ax = bp+var_450);	// 42037 lea     ax, [bp+var_450] ;~ 1678:0DDC
cs=0x1678;eip=0x000de0; 	X(PUSH(ax));	// 42038 push    ax ;~ 1678:0DE0
cs=0x1678;eip=0x000de1; 	X(PUSH(cs));	// 42039 push    cs ;~ 1678:0DE1
cs=0x1678;eip=0x000de2; 	R(CALL(rect_adjust_from_point,0));	// 42040 call    near ptr rect_adjust_from_point ;~ 1678:0DE2
cs=0x1678;eip=0x000de5; 	T(ADD(sp, 4));	// 42041 add     sp, 4 ;~ 1678:0DE5
cs=0x1678;eip=0x000de8; 	T(LES(bx, transshapepolyinfo));	// 42042 les     bx, transshapepolyinfo ;~ 1678:0DE8
cs=0x1678;eip=0x000dec; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x12))));	// 42043 mov     ax, es:[bx+12h] ;~ 1678:0DEC
cs=0x1678;eip=0x000df0; 	T(SUB(ax, si));	// 42044 sub     ax, si ;~ 1678:0DF0
cs=0x1678;eip=0x000df2; 	T(DEC(ax));	// 42045 dec     ax ;~ 1678:0DF2
cs=0x1678;eip=0x000df3; 	X(MOV(*(dw*)(raddr(ss,bp+var_450)), ax));	// 42046 mov     [bp+var_450], ax ;~ 1678:0DF3
cs=0x1678;eip=0x000df7; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x14))));	// 42047 mov     ax, es:[bx+14h] ;~ 1678:0DF7
cs=0x1678;eip=0x000dfb; 	T(SUB(ax, si));	// 42048 sub     ax, si ;~ 1678:0DFB
cs=0x1678;eip=0x000dfd; 	T(DEC(ax));	// 42049 dec     ax ;~ 1678:0DFD
cs=0x1678;eip=0x000dfe; 	X(MOV(*(dw*)(raddr(ss,bp+var_44e)), ax));	// 42050 mov     [bp+var_44E], ax ;~ 1678:0DFE
cs=0x1678;eip=0x000e02; 	X(PUSH(transshaperectptr));	// 42051 push    transshaperectptr ;~ 1678:0E02
cs=0x1678;eip=0x000e06; 	T(ax = bp+var_450);	// 42052 lea     ax, [bp+var_450] ;~ 1678:0E06
cs=0x1678;eip=0x000e0a; 	X(PUSH(ax));	// 42053 push    ax ;~ 1678:0E0A
cs=0x1678;eip=0x000e0b; 	X(PUSH(cs));	// 42054 push    cs ;~ 1678:0E0B
cs=0x1678;eip=0x000e0c; 	R(CALL(rect_adjust_from_point,0));	// 42055 call    near ptr rect_adjust_from_point ;~ 1678:0E0C
cs=0x1678;eip=0x000e0f; 	T(ADD(sp, 4));	// 42056 add     sp, 4 ;~ 1678:0E0F
cs=0x1678;eip=0x000e12; 	T(LES(bx, transshapepolyinfo));	// 42057 les     bx, transshapepolyinfo ;~ 1678:0E12
cs=0x1678;eip=0x000e16; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x14))));	// 42058 mov     ax, es:[bx+14h] ;~ 1678:0E16
cs=0x1678;eip=0x000e1a; 	T(ADD(ax, si));	// 42059 add     ax, si ;~ 1678:0E1A
cs=0x1678;eip=0x000e1c; 	T(INC(ax));	// 42060 inc     ax ;~ 1678:0E1C
cs=0x1678;eip=0x000e1d; 	X(MOV(*(dw*)(raddr(ss,bp+var_44e)), ax));	// 42061 mov     [bp+var_44E], ax ;~ 1678:0E1D
cs=0x1678;eip=0x000e21; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x12))));	// 42062 mov     ax, es:[bx+12h] ;~ 1678:0E21
cs=0x1678;eip=0x000e25; 	T(ADD(ax, si));	// 42063 add     ax, si ;~ 1678:0E25
cs=0x1678;eip=0x000e27; 	T(INC(ax));	// 42064 inc     ax ;~ 1678:0E27
cs=0x1678;eip=0x000e28; 	X(MOV(*(dw*)(raddr(ss,bp+var_450)), ax));	// 42065 mov     [bp+var_450], ax ;~ 1678:0E28
cs=0x1678;eip=0x000e2c; 	X(PUSH(transshaperectptr));	// 42066 push    transshaperectptr ;~ 1678:0E2C
cs=0x1678;eip=0x000e30; 	T(ax = bp+var_450);	// 42067 lea     ax, [bp+var_450] ;~ 1678:0E30
cs=0x1678;eip=0x000e34; 	X(PUSH(ax));	// 42068 push    ax ;~ 1678:0E34
cs=0x1678;eip=0x000e35; 	X(PUSH(cs));	// 42069 push    cs ;~ 1678:0E35
cs=0x1678;eip=0x000e36; 	R(CALL(rect_adjust_from_point,0));	// 42070 call    near ptr rect_adjust_from_point ;~ 1678:0E36
cs=0x1678;eip=0x000e39; 	T(ADD(sp, 4));	// 42071 add     sp, 4 ;~ 1678:0E39
loc_25b9c:
	// 7282 
cs=0x1678;eip=0x000e3c; 	X(MOV(transshapenumvertscopy, 4));	// 42074 mov     transshapenumvertscopy, 4 ;~ 1678:0E3C
cs=0x1678;eip=0x000e41; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 1));	// 42075 mov     [bp+var_4], 1 ;~ 1678:0E41
cs=0x1678;eip=0x000e46; 	R(JMP(loc_25801));	// 42076 jmp     loc_25801 ;~ 1678:0E46
_primtype_sphere:
	// 7283 
cs=0x1678;eip=0x000e4a; 	T(LES(bx, transshapeprimitives));	// 42081 les     bx, transshapeprimitives ;~ 1678:0E4A
cs=0x1678;eip=0x000e4e; 	T(MOV(al, *(raddr(es,bx))));	// 42082 mov     al, es:[bx] ;~ 1678:0E4E
cs=0x1678;eip=0x000e51; 	T(SUB(ah, ah));	// 42083 sub     ah, ah ;~ 1678:0E51
cs=0x1678;eip=0x000e53; 	T(MOV(si, ax));	// 42084 mov     si, ax ;~ 1678:0E53
cs=0x1678;eip=0x000e55; 	T(MOV(al, *(raddr(es,bx+1))));	// 42085 mov     al, es:[bx+1] ;~ 1678:0E55
cs=0x1678;eip=0x000e59; 	T(MOV(di, ax));	// 42086 mov     di, ax ;~ 1678:0E59
cs=0x1678;eip=0x000e5b; 	T(MOV(cx, ax));	// 42087 mov     cx, ax ;~ 1678:0E5B
cs=0x1678;eip=0x000e5d; 	T(SHL(ax, 1));	// 42088 shl     ax, 1 ;~ 1678:0E5D
cs=0x1678;eip=0x000e5f; 	T(ADD(ax, cx));	// 42089 add     ax, cx ;~ 1678:0E5F
cs=0x1678;eip=0x000e61; 	T(SHL(ax, 1));	// 42090 shl     ax, 1 ;~ 1678:0E61
cs=0x1678;eip=0x000e63; 	T(ADD(ax, bp));	// 42091 add     ax, bp ;~ 1678:0E63
cs=0x1678;eip=0x000e65; 	X(MOV(*(dw*)(raddr(ss,bp+var_b7c)), ax));	// 42092 mov     [bp+var_B7C], ax ;~ 1678:0E65
cs=0x1678;eip=0x000e69; 	T(MOV(ax, si));	// 42093 mov     ax, si ;~ 1678:0E69
cs=0x1678;eip=0x000e6b; 	T(MOV(cx, ax));	// 42094 mov     cx, ax ;~ 1678:0E6B
cs=0x1678;eip=0x000e6d; 	T(SHL(ax, 1));	// 42095 shl     ax, 1 ;~ 1678:0E6D
cs=0x1678;eip=0x000e6f; 	T(ADD(ax, cx));	// 42096 add     ax, cx ;~ 1678:0E6F
cs=0x1678;eip=0x000e71; 	T(SHL(ax, 1));	// 42097 shl     ax, 1 ;~ 1678:0E71
cs=0x1678;eip=0x000e73; 	T(ADD(ax, bp));	// 42098 add     ax, bp ;~ 1678:0E73
cs=0x1678;eip=0x000e75; 	X(MOV(*(dw*)(raddr(ss,bp+var_b7a)), ax));	// 42099 mov     [bp+var_B7A], ax ;~ 1678:0E75
cs=0x1678;eip=0x000e79; 	T(MOV(bx, ax));	// 42100 mov     bx, ax ;~ 1678:0E79
cs=0x1678;eip=0x000e7b; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x0B6A))));	// 42101 mov     ax, [bx-0B6Ah] ;~ 1678:0E7B
cs=0x1678;eip=0x000e7f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_b7c))));	// 42102 mov     bx, [bp+var_B7C] ;~ 1678:0E7F
cs=0x1678;eip=0x000e83; 	T(ADD(ax, *(dw*)(raddr(ds,bx-0x0B6A))));	// 42103 add     ax, [bx-0B6Ah] ;~ 1678:0E83
cs=0x1678;eip=0x000e87; 	T(CWD);	// 42104 cwd ;~ 1678:0E87
cs=0x1678;eip=0x000e88; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 42105 mov     [bp+var_18], ax ;~ 1678:0E88
cs=0x1678;eip=0x000e8b; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), dx));	// 42106 mov     [bp+var_16], dx ;~ 1678:0E8B
cs=0x1678;eip=0x000e8e; 	T(MOV(al, *(raddr(ss,bp+di+var_562))));	// 42107 mov     al, [bp+di+var_562] ;~ 1678:0E8E
cs=0x1678;eip=0x000e92; 	T(CBW);	// 42108 cbw ;~ 1678:0E92
cs=0x1678;eip=0x000e93; 	T(MOV(cx, ax));	// 42109 mov     cx, ax ;~ 1678:0E93
cs=0x1678;eip=0x000e95; 	T(MOV(al, *(raddr(ss,bp+si+var_562))));	// 42110 mov     al, [bp+si+var_562] ;~ 1678:0E95
cs=0x1678;eip=0x000e99; 	T(CBW);	// 42111 cbw ;~ 1678:0E99
cs=0x1678;eip=0x000e9a; 	T(ADD(ax, cx));	// 42112 add     ax, cx ;~ 1678:0E9A
cs=0x1678;eip=0x000e9c; 	R(JZ(loc_25c01));	// 42113 jz      short loc_25C01 ;~ 1678:0E9C
cs=0x1678;eip=0x000e9e; 	R(JMP(loc_25801));	// 42114 jmp     loc_25801 ;~ 1678:0E9E
loc_25c01:
	// 7284 
cs=0x1678;eip=0x000ea1; 	T(MOV(bx, *(polyvertpointptrtab)));	// 42118 mov     bx, polyvertpointptrtab ;~ 1678:0EA1
cs=0x1678;eip=0x000ea5; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 42119 mov     ax, [bx] ;~ 1678:0EA5
cs=0x1678;eip=0x000ea7; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 42120 mov     dx, [bx+2] ;~ 1678:0EA7
cs=0x1678;eip=0x000eaa; 	T(LES(bx, transshapepolyinfo));	// 42121 les     bx, transshapepolyinfo ;~ 1678:0EAA
cs=0x1678;eip=0x000eae; 	X(MOV(*(dw*)(raddr(es,bx+6)), ax));	// 42122 mov     es:[bx+6], ax ;~ 1678:0EAE
cs=0x1678;eip=0x000eb2; 	X(MOV(*(dw*)(raddr(es,bx+8)), dx));	// 42123 mov     es:[bx+8], dx ;~ 1678:0EB2
cs=0x1678;eip=0x000eb6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_b7a))));	// 42124 mov     bx, [bp+var_B7A] ;~ 1678:0EB6
cs=0x1678;eip=0x000eba; 	X(PUSH(si));	// 42125 push    si ;~ 1678:0EBA
cs=0x1678;eip=0x000ebb; 	X(PUSH(di));	// 42126 push    di ;~ 1678:0EBB
cs=0x1678;eip=0x000ebc; 	T(di = bp+var_56a);	// 42127 lea     di, [bp+var_56A] ;~ 1678:0EBC
cs=0x1678;eip=0x000ec0; 	T(si = bx-0x0B6E);	// 42128 lea     si, [bx-0B6Eh] ;~ 1678:0EC0
cs=0x1678;eip=0x000ec4; 	X(PUSH(ss));	// 42129 push    ss ;~ 1678:0EC4
cs=0x1678;eip=0x000ec5; 	X(POP(es));	// 42130 pop     es ;~ 1678:0EC5
cs=0x1678;eip=0x000ec6; 	X(MOVSW);	// 42131 movsw ;~ 1678:0EC6
cs=0x1678;eip=0x000ec7; 	X(MOVSW);	// 42132 movsw ;~ 1678:0EC7
cs=0x1678;eip=0x000ec8; 	X(MOVSW);	// 42133 movsw ;~ 1678:0EC8
cs=0x1678;eip=0x000ec9; 	X(POP(di));	// 42134 pop     di ;~ 1678:0EC9
cs=0x1678;eip=0x000eca; 	X(POP(si));	// 42135 pop     si ;~ 1678:0ECA
cs=0x1678;eip=0x000ecb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_b7c))));	// 42136 mov     bx, [bp+var_B7C] ;~ 1678:0ECB
cs=0x1678;eip=0x000ecf; 	X(PUSH(si));	// 42137 push    si ;~ 1678:0ECF
cs=0x1678;eip=0x000ed0; 	X(PUSH(di));	// 42138 push    di ;~ 1678:0ED0
cs=0x1678;eip=0x000ed1; 	T(di = bp+var_b74);	// 42139 lea     di, [bp+var_B74] ;~ 1678:0ED1
cs=0x1678;eip=0x000ed5; 	T(si = bx-0x0B6E);	// 42140 lea     si, [bx-0B6Eh] ;~ 1678:0ED5
cs=0x1678;eip=0x000ed9; 	X(MOVSW);	// 42141 movsw ;~ 1678:0ED9
cs=0x1678;eip=0x000eda; 	X(MOVSW);	// 42142 movsw ;~ 1678:0EDA
cs=0x1678;eip=0x000edb; 	X(MOVSW);	// 42143 movsw ;~ 1678:0EDB
cs=0x1678;eip=0x000edc; 	X(POP(di));	// 42144 pop     di ;~ 1678:0EDC
cs=0x1678;eip=0x000edd; 	X(POP(si));	// 42145 pop     si ;~ 1678:0EDD
cs=0x1678;eip=0x000ede; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_56a))));	// 42146 mov     ax, [bp+var_56A] ;~ 1678:0EDE
cs=0x1678;eip=0x000ee2; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_b74))));	// 42147 sub     ax, [bp+var_B74] ;~ 1678:0EE2
cs=0x1678;eip=0x000ee6; 	X(MOV(*(dw*)(raddr(ss,bp+var_458)), ax));	// 42148 mov     [bp+var_458], ax ;~ 1678:0EE6
cs=0x1678;eip=0x000eea; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_568))));	// 42149 mov     ax, [bp+var_568] ;~ 1678:0EEA
cs=0x1678;eip=0x000eee; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_b72))));	// 42150 sub     ax, [bp+var_B72] ;~ 1678:0EEE
cs=0x1678;eip=0x000ef2; 	X(MOV(*(dw*)(raddr(ss,bp+var_456)), ax));	// 42151 mov     [bp+var_456], ax ;~ 1678:0EF2
cs=0x1678;eip=0x000ef6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_566))));	// 42152 mov     ax, [bp+var_566] ;~ 1678:0EF6
cs=0x1678;eip=0x000efa; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_b70))));	// 42153 sub     ax, [bp+var_B70] ;~ 1678:0EFA
cs=0x1678;eip=0x000efe; 	X(MOV(*(dw*)(raddr(ss,bp+var_454)), ax));	// 42154 mov     [bp+var_454], ax ;~ 1678:0EFE
cs=0x1678;eip=0x000f02; 	X(PUSH(*(dw*)(raddr(ss,bp+var_566))));	// 42155 push    [bp+var_566] ;~ 1678:0F02
cs=0x1678;eip=0x000f06; 	T(ax = bp+var_458);	// 42156 lea     ax, [bp+var_458] ;~ 1678:0F06
cs=0x1678;eip=0x000f0a; 	X(PUSH(ax));	// 42157 push    ax ;~ 1678:0F0A
cs=0x1678;eip=0x000f0b; 	R(CALLF(polarradius3d,0));	// 42158 call    polarRadius3D ;~ 1678:0F0B
cs=0x1678;eip=0x000f10; 	T(ADD(sp, 2));	// 42159 add     sp, 2 ;~ 1678:0F10
cs=0x1678;eip=0x000f13; 	X(PUSH(ax));	// 42160 push    ax ;~ 1678:0F13
cs=0x1678;eip=0x000f14; 	R(CALLF(transformed_shape_op_helper2,0));	// 42161 call    transformed_shape_op_helper2 ;~ 1678:0F14
cs=0x1678;eip=0x000f19; 	T(ADD(sp, 4));	// 42162 add     sp, 4 ;~ 1678:0F19
cs=0x1678;eip=0x000f1c; 	X(MOV(*(dw*)(raddr(ss,bp+var_462)), ax));	// 42163 mov     [bp+var_462], ax ;~ 1678:0F1C
cs=0x1678;eip=0x000f20; 	T(LES(bx, transshapepolyinfo));	// 42164 les     bx, transshapepolyinfo ;~ 1678:0F20
cs=0x1678;eip=0x000f24; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 42165 mov     es:[bx+0Ah], ax ;~ 1678:0F24
cs=0x1678;eip=0x000f28; 	T(TEST(transshapeflags, 8));	// 42166 test    transshapeflags, 8 ;~ 1678:0F28
cs=0x1678;eip=0x000f2d; 	R(JNZ(loc_25c92));	// 42167 jnz     short loc_25C92 ;~ 1678:0F2D
cs=0x1678;eip=0x000f2f; 	R(JMP(loc_25983));	// 42168 jmp     loc_25983 ;~ 1678:0F2F
loc_25c92:
	// 7285 
cs=0x1678;eip=0x000f32; 	T(MOV(bx, *(polyvertpointptrtab)));	// 42172 mov     bx, polyvertpointptrtab ;~ 1678:0F32
cs=0x1678;eip=0x000f36; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 42173 mov     ax, [bx+2] ;~ 1678:0F36
cs=0x1678;eip=0x000f39; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_462))));	// 42174 sub     ax, [bp+var_462] ;~ 1678:0F39
cs=0x1678;eip=0x000f3d; 	X(MOV(*(dw*)(raddr(ss,bp+var_44e)), ax));	// 42175 mov     [bp+var_44E], ax ;~ 1678:0F3D
cs=0x1678;eip=0x000f41; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 42176 mov     ax, [bx] ;~ 1678:0F41
cs=0x1678;eip=0x000f43; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_462))));	// 42177 sub     ax, [bp+var_462] ;~ 1678:0F43
cs=0x1678;eip=0x000f47; 	X(MOV(*(dw*)(raddr(ss,bp+var_450)), ax));	// 42178 mov     [bp+var_450], ax ;~ 1678:0F47
cs=0x1678;eip=0x000f4b; 	X(PUSH(transshaperectptr));	// 42179 push    transshaperectptr ;~ 1678:0F4B
cs=0x1678;eip=0x000f4f; 	T(ax = bp+var_450);	// 42180 lea     ax, [bp+var_450] ;~ 1678:0F4F
cs=0x1678;eip=0x000f53; 	X(PUSH(ax));	// 42181 push    ax ;~ 1678:0F53
cs=0x1678;eip=0x000f54; 	X(PUSH(cs));	// 42182 push    cs ;~ 1678:0F54
cs=0x1678;eip=0x000f55; 	R(CALL(rect_adjust_from_point,0));	// 42183 call    near ptr rect_adjust_from_point ;~ 1678:0F55
cs=0x1678;eip=0x000f58; 	T(ADD(sp, 4));	// 42184 add     sp, 4 ;~ 1678:0F58
cs=0x1678;eip=0x000f5b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_462))));	// 42185 mov     ax, [bp+var_462] ;~ 1678:0F5B
cs=0x1678;eip=0x000f5f; 	T(MOV(bx, *(polyvertpointptrtab)));	// 42186 mov     bx, polyvertpointptrtab ;~ 1678:0F5F
cs=0x1678;eip=0x000f63; 	T(ADD(ax, *(dw*)(raddr(ds,bx))));	// 42187 add     ax, [bx] ;~ 1678:0F63
cs=0x1678;eip=0x000f65; 	X(MOV(*(dw*)(raddr(ss,bp+var_450)), ax));	// 42188 mov     [bp+var_450], ax ;~ 1678:0F65
cs=0x1678;eip=0x000f69; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 42189 mov     ax, [bx+2] ;~ 1678:0F69
cs=0x1678;eip=0x000f6c; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_462))));	// 42190 add     ax, [bp+var_462] ;~ 1678:0F6C
cs=0x1678;eip=0x000f70; 	X(MOV(*(dw*)(raddr(ss,bp+var_450)), ax));	// 42191 mov     [bp+var_450], ax ;~ 1678:0F70
cs=0x1678;eip=0x000f74; 	X(PUSH(transshaperectptr));	// 42192 push    transshaperectptr ;~ 1678:0F74
cs=0x1678;eip=0x000f78; 	T(ax = bp+var_450);	// 42193 lea     ax, [bp+var_450] ;~ 1678:0F78
cs=0x1678;eip=0x000f7c; 	X(PUSH(ax));	// 42194 push    ax ;~ 1678:0F7C
cs=0x1678;eip=0x000f7d; 	R(JMP(loc_2597c));	// 42195 jmp     loc_2597C ;~ 1678:0F7D
loc_25ce0:
	// 7286 
cs=0x1678;eip=0x000f80; 	T(LES(bx, transshapeprimitives));	// 42199 les     bx, transshapeprimitives ;~ 1678:0F80
cs=0x1678;eip=0x000f84; 	T(MOV(al, *(raddr(es,bx))));	// 42200 mov     al, es:[bx]     ; primitives+ 0 = type ;~ 1678:0F84
cs=0x1678;eip=0x000f87; 	T(SUB(ah, ah));	// 42201 sub     ah, ah ;~ 1678:0F87
cs=0x1678;eip=0x000f89; 	T(MOV(si, ax));	// 42202 mov     si, ax ;~ 1678:0F89
cs=0x1678;eip=0x000f8b; 	T(CMP(*(raddr(ss,bp+si+var_562)), ah));	// 42203 cmp     [bp+si+var_562], ah ;~ 1678:0F8B
cs=0x1678;eip=0x000f8f; 	R(JZ(loc_25cf4));	// 42204 jz      short loc_25CF4 ;~ 1678:0F8F
cs=0x1678;eip=0x000f91; 	R(JMP(loc_25801));	// 42205 jmp     loc_25801 ;~ 1678:0F91
loc_25cf4:
	// 7287 
cs=0x1678;eip=0x000f94; 	T(MOV(bx, si));	// 42209 mov     bx, si ;~ 1678:0F94
cs=0x1678;eip=0x000f96; 	T(SHL(bx, 1));	// 42210 shl     bx, 1 ;~ 1678:0F96
cs=0x1678;eip=0x000f98; 	T(ADD(bx, ax));	// 42211 add     bx, ax ;~ 1678:0F98
cs=0x1678;eip=0x000f9a; 	T(SHL(bx, 1));	// 42212 shl     bx, 1 ;~ 1678:0F9A
cs=0x1678;eip=0x000f9c; 	T(ADD(bx, bp));	// 42213 add     bx, bp ;~ 1678:0F9C
cs=0x1678;eip=0x000f9e; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x0B6A))));	// 42214 mov     ax, [bx-0B6Ah] ;~ 1678:0F9E
cs=0x1678;eip=0x000fa2; 	T(CWD);	// 42215 cwd ;~ 1678:0FA2
cs=0x1678;eip=0x000fa3; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 42216 mov     [bp+var_18], ax ;~ 1678:0FA3
cs=0x1678;eip=0x000fa6; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), dx));	// 42217 mov     [bp+var_16], dx ;~ 1678:0FA6
cs=0x1678;eip=0x000fa9; 	T(MOV(bx, *(polyvertpointptrtab)));	// 42218 mov     bx, polyvertpointptrtab ;~ 1678:0FA9
cs=0x1678;eip=0x000fad; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 42219 mov     ax, [bx] ;~ 1678:0FAD
cs=0x1678;eip=0x000faf; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 42220 mov     dx, [bx+2] ;~ 1678:0FAF
cs=0x1678;eip=0x000fb2; 	T(LES(bx, transshapepolyinfo));	// 42221 les     bx, transshapepolyinfo ;~ 1678:0FB2
cs=0x1678;eip=0x000fb6; 	X(MOV(*(dw*)(raddr(es,bx+6)), ax));	// 42222 mov     es:[bx+6], ax ;~ 1678:0FB6
cs=0x1678;eip=0x000fba; 	X(MOV(*(dw*)(raddr(es,bx+8)), dx));	// 42223 mov     es:[bx+8], dx ;~ 1678:0FBA
cs=0x1678;eip=0x000fbe; 	T(TEST(transshapeflags, 8));	// 42224 test    transshapeflags, 8 ;~ 1678:0FBE
cs=0x1678;eip=0x000fc3; 	R(JZ(loc_25d34));	// 42225 jz      short loc_25D34 ;~ 1678:0FC3
cs=0x1678;eip=0x000fc5; 	X(PUSH(transshaperectptr));	// 42226 push    transshaperectptr ;~ 1678:0FC5
cs=0x1678;eip=0x000fc9; 	X(PUSH(*(polyvertpointptrtab)));	// 42227 push    polyvertpointptrtab ;~ 1678:0FC9
cs=0x1678;eip=0x000fcd; 	X(PUSH(cs));	// 42228 push    cs ;~ 1678:0FCD
cs=0x1678;eip=0x000fce; 	R(CALL(rect_adjust_from_point,0));	// 42229 call    near ptr rect_adjust_from_point ;~ 1678:0FCE
cs=0x1678;eip=0x000fd1; 	T(ADD(sp, 4));	// 42230 add     sp, 4 ;~ 1678:0FD1
loc_25d34:
	// 7288 
cs=0x1678;eip=0x000fd4; 	X(MOV(transshapenumvertscopy, 1));	// 42233 mov     transshapenumvertscopy, 1 ;~ 1678:0FD4
cs=0x1678;eip=0x000fd9; 	R(JMP(loc_25988));	// 42234 jmp     loc_25988 ;~ 1678:0FD9
loc_25d3c:
	// 7289 
cs=0x1678;eip=0x000fdc; 	X(INC(*(dw*)(raddr(ss,bp+var_45e))));	// 42238 inc     [bp+var_45E] ;~ 1678:0FDC
cs=0x1678;eip=0x000fe0; 	T(LES(bx, transshapepolyinfo));	// 42239 les     bx, transshapepolyinfo ;~ 1678:0FE0
cs=0x1678;eip=0x000fe4; 	T(MOV(al, transshapenumvertscopy));	// 42240 mov     al, transshapenumvertscopy ;~ 1678:0FE4
cs=0x1678;eip=0x000fe7; 	X(MOV(*(raddr(es,bx+3)), al));	// 42241 mov     es:[bx+3], al   ; polyinfo+3 = numverts ;~ 1678:0FE7
cs=0x1678;eip=0x000feb; 	T(LES(bx, transshapepolyinfo));	// 42242 les     bx, transshapepolyinfo ;~ 1678:0FEB
cs=0x1678;eip=0x000fef; 	T(MOV(al, *(raddr(ss,bp+var_6))));	// 42243 mov     al, [bp+var_6] ;~ 1678:0FEF
cs=0x1678;eip=0x000ff2; 	X(MOV(*(raddr(es,bx+4)), al));	// 42244 mov     es:[bx+4], al   ; polyinfo+4 = primtype ;~ 1678:0FF2
cs=0x1678;eip=0x000ff6; 	T(CMP(transprimitivepaintjob, 0x2D));	// 42245 cmp     transprimitivepaintjob, 2Dh ; '-' ; if shape paintjob = 0x2d (back lights), use override ;~ 1678:0FF6
cs=0x1678;eip=0x000ffb; 	R(JNZ(loc_25d66));	// 42246 jnz     short loc_25D66 ;~ 1678:0FFB
cs=0x1678;eip=0x000ffd; 	T(LES(bx, transshapepolyinfo));	// 42247 les     bx, transshapepolyinfo ;~ 1678:0FFD
cs=0x1678;eip=0x001001; 	T(MOV(al, backlights_paint_override));	// 42248 mov     al, backlights_paint_override ;~ 1678:1001
cs=0x1678;eip=0x001004; 	R(JMP(loc_25d6d));	// 42249 jmp     short loc_25D6D ;~ 1678:1004
loc_25d66:
	// 7290 
cs=0x1678;eip=0x001006; 	T(LES(bx, transshapepolyinfo));	// 42253 les     bx, transshapepolyinfo ;~ 1678:1006
cs=0x1678;eip=0x00100a; 	T(MOV(al, transprimitivepaintjob));	// 42254 mov     al, transprimitivepaintjob ;~ 1678:100A
loc_25d6d:
	// 7291 
cs=0x1678;eip=0x00100d; 	X(MOV(*(raddr(es,bx+2)), al));	// 42257 mov     es:[bx+2], al   ; polyinfo+2 = paintjob ;~ 1678:100D
cs=0x1678;eip=0x001011; 	T(MOV(al, transshapenumvertscopy));	// 42258 mov     al, transshapenumvertscopy ;~ 1678:1011
cs=0x1678;eip=0x001014; 	T(SUB(ah, ah));	// 42259 sub     ah, ah ;~ 1678:1014
cs=0x1678;eip=0x001016; 	T(CMP(ax, 1));	// 42260 cmp     ax, 1 ;~ 1678:1016
cs=0x1678;eip=0x001019; 	R(JZ(loc_25d9c));	// 42261 jz      short loc_25D9C ;~ 1678:1019
cs=0x1678;eip=0x00101b; 	T(CMP(ax, 2));	// 42262 cmp     ax, 2 ;~ 1678:101B
cs=0x1678;eip=0x00101e; 	R(JZ(loc_25db8));	// 42263 jz      short loc_25DB8 ;~ 1678:101E
cs=0x1678;eip=0x001020; 	T(CMP(ax, 4));	// 42264 cmp     ax, 4 ;~ 1678:1020
cs=0x1678;eip=0x001023; 	R(JZ(loc_25dc6));	// 42265 jz      short loc_25DC6 ;~ 1678:1023
cs=0x1678;eip=0x001025; 	T(CMP(ax, 8));	// 42266 cmp     ax, 8 ;~ 1678:1025
cs=0x1678;eip=0x001028; 	R(JZ(loc_25dda));	// 42267 jz      short loc_25DDA ;~ 1678:1028
cs=0x1678;eip=0x00102a; 	T(SUB(cx, cx));	// 42268 sub     cx, cx ;~ 1678:102A
cs=0x1678;eip=0x00102c; 	X(PUSH(cx));	// 42269 push    cx ;~ 1678:102C
cs=0x1678;eip=0x00102d; 	X(PUSH(ax));	// 42270 push    ax ;~ 1678:102D
cs=0x1678;eip=0x00102e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 42271 push    [bp+var_16] ;~ 1678:102E
cs=0x1678;eip=0x001031; 	X(PUSH(*(dw*)(raddr(ss,bp+var_18))));	// 42272 push    [bp+var_18] ;~ 1678:1031
cs=0x1678;eip=0x001034; 	R(CALLF(__afuldiv,0));	// 42273 call    __aFuldiv ;~ 1678:1034
cs=0x1678;eip=0x001039; 	R(JMP(loc_25dc2));	// 42274 jmp     short loc_25DC2 ;~ 1678:1039
loc_25d9c:
	// 7292 
cs=0x1678;eip=0x00103c; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_18))));	// 42279 mov     si, [bp+var_18] ;~ 1678:103C
loc_25d9f:
	// 7293 
cs=0x1678;eip=0x00103f; 	T(LES(bx, transshapepolyinfo));	// 42282 les     bx, transshapepolyinfo ;~ 1678:103F
cs=0x1678;eip=0x001043; 	X(MOV(*(dw*)(raddr(es,bx)), si));	// 42283 mov     es:[bx], si     ; polyinfo+0 = ??? ;~ 1678:1043
cs=0x1678;eip=0x001046; 	T(TEST(transshapeflags, 1));	// 42284 test    transshapeflags, 1 ;~ 1678:1046
cs=0x1678;eip=0x00104b; 	R(JNZ(loc_25db3));	// 42285 jnz     short loc_25DB3 ;~ 1678:104B
cs=0x1678;eip=0x00104d; 	T(TEST(*(db*)(raddr(ss,bp+var_2)), 2));	// 42286 test    byte ptr [bp+var_2], 2 ;~ 1678:104D
cs=0x1678;eip=0x001051; 	R(JZ(loc_25dee));	// 42287 jz      short loc_25DEE ;~ 1678:1051
loc_25db3:
	// 7294 
cs=0x1678;eip=0x001053; 	T(SUB(ax, ax));	// 42290 sub     ax, ax ;~ 1678:1053
cs=0x1678;eip=0x001055; 	R(JMP(loc_25df1));	// 42291 jmp     short loc_25DF1 ;~ 1678:1055
loc_25db8:
	// 7295 
cs=0x1678;eip=0x001058; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 42296 mov     ax, [bp+var_18] ;~ 1678:1058
cs=0x1678;eip=0x00105b; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_16))));	// 42297 mov     dx, [bp+var_16] ;~ 1678:105B
cs=0x1678;eip=0x00105e; 	T(SAR(dx, 1));	// 42298 sar     dx, 1 ;~ 1678:105E
cs=0x1678;eip=0x001060; 	T(RCR(ax, 1));	// 42299 rcr     ax, 1 ;~ 1678:1060
loc_25dc2:
	// 7296 
cs=0x1678;eip=0x001062; 	T(MOV(si, ax));	// 42303 mov     si, ax ;~ 1678:1062
cs=0x1678;eip=0x001064; 	R(JMP(loc_25d9f));	// 42304 jmp     short loc_25D9F ;~ 1678:1064
loc_25dc6:
	// 7297 
cs=0x1678;eip=0x001066; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 42308 mov     ax, [bp+var_18] ;~ 1678:1066
cs=0x1678;eip=0x001069; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_16))));	// 42309 mov     dx, [bp+var_16] ;~ 1678:1069
cs=0x1678;eip=0x00106c; 	T(MOV(cl, 2));	// 42310 mov     cl, 2 ;~ 1678:106C
loc_25dce:
	// 7298 
cs=0x1678;eip=0x00106e; 	T(OR(cl, cl));	// 42313 or      cl, cl ;~ 1678:106E
cs=0x1678;eip=0x001070; 	R(JZ(loc_25dc2));	// 42314 jz      short loc_25DC2 ;~ 1678:1070
cs=0x1678;eip=0x001072; 	T(SAR(dx, 1));	// 42315 sar     dx, 1 ;~ 1678:1072
cs=0x1678;eip=0x001074; 	T(RCR(ax, 1));	// 42316 rcr     ax, 1 ;~ 1678:1074
cs=0x1678;eip=0x001076; 	T(DEC(cl));	// 42317 dec     cl ;~ 1678:1076
cs=0x1678;eip=0x001078; 	R(JMP(loc_25dce));	// 42318 jmp     short loc_25DCE ;~ 1678:1078
loc_25dda:
	// 7299 
cs=0x1678;eip=0x00107a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 42322 mov     ax, [bp+var_18] ;~ 1678:107A
cs=0x1678;eip=0x00107d; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_16))));	// 42323 mov     dx, [bp+var_16] ;~ 1678:107D
cs=0x1678;eip=0x001080; 	T(MOV(cl, 3));	// 42324 mov     cl, 3 ;~ 1678:1080
loc_25de2:
	// 7300 
cs=0x1678;eip=0x001082; 	T(OR(cl, cl));	// 42327 or      cl, cl ;~ 1678:1082
cs=0x1678;eip=0x001084; 	R(JZ(loc_25dc2));	// 42328 jz      short loc_25DC2 ;~ 1678:1084
cs=0x1678;eip=0x001086; 	T(SAR(dx, 1));	// 42329 sar     dx, 1 ;~ 1678:1086
cs=0x1678;eip=0x001088; 	T(RCR(ax, 1));	// 42330 rcr     ax, 1 ;~ 1678:1088
cs=0x1678;eip=0x00108a; 	T(DEC(cl));	// 42331 dec     cl ;~ 1678:108A
cs=0x1678;eip=0x00108c; 	R(JMP(loc_25de2));	// 42332 jmp     short loc_25DE2 ;~ 1678:108C
loc_25dee:
	// 7301 
cs=0x1678;eip=0x00108e; 	T(MOV(ax, 1));	// 42336 mov     ax, 1 ;~ 1678:108E
loc_25df1:
	// 7302 
cs=0x1678;eip=0x001091; 	X(PUSH(ax));	// 42339 push    ax ;~ 1678:1091
cs=0x1678;eip=0x001092; 	X(PUSH(si));	// 42340 push    si ;~ 1678:1092
cs=0x1678;eip=0x001093; 	X(PUSH(cs));	// 42341 push    cs ;~ 1678:1093
cs=0x1678;eip=0x001094; 	R(CALL(transformed_shape_op_helper,0));	// 42342 call    near ptr transformed_shape_op_helper ;~ 1678:1094
cs=0x1678;eip=0x001097; 	T(ADD(sp, 4));	// 42343 add     sp, 4 ;~ 1678:1097
cs=0x1678;eip=0x00109a; 	X(MOV(word_40ece, ax));	// 42344 mov     word_40ECE, ax ;~ 1678:109A
cs=0x1678;eip=0x00109d; 	T(OR(ax, ax));	// 42345 or      ax, ax ;~ 1678:109D
cs=0x1678;eip=0x00109f; 	R(JZ(loc_25e04));	// 42346 jz      short loc_25E04 ;~ 1678:109F
cs=0x1678;eip=0x0010a1; 	R(JMP(loc_24eae));	// 42347 jmp     loc_24EAE ;~ 1678:10A1
loc_25e04:
	// 7303 
cs=0x1678;eip=0x0010a4; 	T(LES(bx, transshapeprimitives));	// 42352 les     bx, transshapeprimitives ;~ 1678:10A4
cs=0x1678;eip=0x0010a8; 	T(CMP(*(raddr(es,bx)), 0));	// 42353 cmp     byte ptr es:[bx], 0 ;~ 1678:10A8
cs=0x1678;eip=0x0010ac; 	R(JZ(_transform_done));	// 42354 jz      short _transform_done ;~ 1678:10AC
cs=0x1678;eip=0x0010ae; 	R(JMP(loc_25233));	// 42355 jmp     loc_25233 ;~ 1678:10AE
_transform_done:
	// 7304 
cs=0x1678;eip=0x0010b1; 	T(CMP(*(dw*)(raddr(ss,bp+var_45e)), 0));	// 42359 cmp     [bp+var_45E], 0 ;~ 1678:10B1
cs=0x1678;eip=0x0010b6; 	R(JNZ(_done_ret_0));	// 42360 jnz     short _done_ret_0 ;~ 1678:10B6
cs=0x1678;eip=0x0010b8; 	R(JMP(_done_ret_neg1));	// 42361 jmp     _done_ret_neg1 ;~ 1678:10B8
_done_ret_0:
	// 7305 
cs=0x1678;eip=0x0010bb; 	T(SUB(ax, ax));	// 42365 sub     ax, ax ;~ 1678:10BB
cs=0x1678;eip=0x0010bd; 	X(POP(si));	// 42366 pop     si ;~ 1678:10BD
cs=0x1678;eip=0x0010be; 	X(POP(di));	// 42367 pop     di ;~ 1678:10BE
cs=0x1678;eip=0x0010bf; 	T(MOV(sp, bp));	// 42368 mov     sp, bp ;~ 1678:10BF
cs=0x1678;eip=0x0010c1; 	X(POP(bp));	// 42369 pop     bp ;~ 1678:10C1
cs=0x1678;eip=0x0010c2; 	R(RETF(0));	// 42370 retf ;~ 1678:10C2
transformed_shape_op_helper:
	// 42380 
#undef arg_0
#define arg_0 6
	// 42382 arg_0           = word ptr  6 ;~ 1678:10C4
#undef arg_2
#define arg_2 8
	// 42383 arg_2           = word ptr  8 ;~ 1678:10C4
ret_1678_10c4:
	// 7306 
cs=0x1678;eip=0x0010c4; 	X(PUSH(bp));	// 42385 push    bp ;~ 1678:10C4
cs=0x1678;eip=0x0010c5; 	T(MOV(bp, sp));	// 42386 mov     bp, sp ;~ 1678:10C5
cs=0x1678;eip=0x0010c7; 	T(SUB(sp, 4));	// 42387 sub     sp, 4 ;~ 1678:10C7
cs=0x1678;eip=0x0010ca; 	X(PUSH(di));	// 42388 push    di ;~ 1678:10CA
cs=0x1678;eip=0x0010cb; 	X(PUSH(si));	// 42389 push    si ;~ 1678:10CB
cs=0x1678;eip=0x0010cc; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 42390 cmp     [bp+arg_2], 0 ;~ 1678:10CC
cs=0x1678;eip=0x0010d0; 	R(JNZ(loc_25e3e));	// 42391 jnz     short loc_25E3E ;~ 1678:10D0
cs=0x1678;eip=0x0010d2; 	T(MOV(bx, word_45d98));	// 42392 mov     bx, word_45D98 ;~ 1678:10D2
cs=0x1678;eip=0x0010d6; 	T(SHL(bx, 1));	// 42393 shl     bx, 1 ;~ 1678:10D6
cs=0x1678;eip=0x0010d8; 	T(MOV(di, *(dw*)(((db*)word_40ed6)+bx)));	// 42394 mov     di, word_40ED6[bx] ;~ 1678:10D8
cs=0x1678;eip=0x0010dc; 	R(JMP(loc_25e7b));	// 42395 jmp     short loc_25E7B ;~ 1678:10DC
loc_25e3e:
	// 7307 
cs=0x1678;eip=0x0010de; 	T(MOV(ax, word_4394e));	// 42399 mov     ax, word_4394E ;~ 1678:10DE
cs=0x1678;eip=0x0010e1; 	X(MOV(word_45d98, ax));	// 42400 mov     word_45D98, ax ;~ 1678:10E1
cs=0x1678;eip=0x0010e4; 	T(MOV(bx, ax));	// 42401 mov     bx, ax ;~ 1678:10E4
cs=0x1678;eip=0x0010e6; 	T(SHL(bx, 1));	// 42402 shl     bx, 1 ;~ 1678:10E6
cs=0x1678;eip=0x0010e8; 	T(MOV(di, *(dw*)(((db*)word_40ed6)+bx)));	// 42403 mov     di, word_40ED6[bx] ;~ 1678:10E8
cs=0x1678;eip=0x0010ec; 	T(MOV(si, word_4554a));	// 42404 mov     si, word_4554A ;~ 1678:10EC
cs=0x1678;eip=0x0010f0; 	R(JMP(loc_25e77));	// 42405 jmp     short loc_25E77 ;~ 1678:10F0
loc_25e52:
	// 7308 
cs=0x1678;eip=0x0010f2; 	T(MOV(ax, si));	// 42409 mov     ax, si ;~ 1678:10F2
cs=0x1678;eip=0x0010f4; 	T(DEC(si));	// 42410 dec     si ;~ 1678:10F4
cs=0x1678;eip=0x0010f5; 	T(OR(ax, ax));	// 42411 or      ax, ax ;~ 1678:10F5
cs=0x1678;eip=0x0010f7; 	R(JZ(loc_25e7b));	// 42412 jz      short loc_25E7B ;~ 1678:10F7
cs=0x1678;eip=0x0010f9; 	T(MOV(bx, di));	// 42413 mov     bx, di ;~ 1678:10F9
cs=0x1678;eip=0x0010fb; 	T(SHL(bx, 1));	// 42414 shl     bx, 1 ;~ 1678:10FB
cs=0x1678;eip=0x0010fd; 	T(SHL(bx, 1));	// 42415 shl     bx, 1 ;~ 1678:10FD
cs=0x1678;eip=0x0010ff; 	T(LES(bx, *(dd*)(((db*)polyinfoptrs)+bx)));	// 42416 les     bx, polyinfoptrs[bx] ;~ 1678:10FF
cs=0x1678;eip=0x001103; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 42417 mov     ax, [bp+arg_0] ;~ 1678:1103
cs=0x1678;eip=0x001106; 	T(CMP(*(dw*)(raddr(es,bx)), ax));	// 42418 cmp     es:[bx], ax ;~ 1678:1106
cs=0x1678;eip=0x001109; 	R(JL(loc_25e7b));	// 42419 jl      short loc_25E7B ;~ 1678:1109
cs=0x1678;eip=0x00110b; 	X(MOV(word_45d98, di));	// 42420 mov     word_45D98, di ;~ 1678:110B
cs=0x1678;eip=0x00110f; 	T(MOV(bx, di));	// 42421 mov     bx, di ;~ 1678:110F
cs=0x1678;eip=0x001111; 	T(SHL(bx, 1));	// 42422 shl     bx, 1 ;~ 1678:1111
cs=0x1678;eip=0x001113; 	T(MOV(di, *(dw*)(((db*)word_40ed6)+bx)));	// 42423 mov     di, word_40ED6[bx] ;~ 1678:1113
loc_25e77:
	// 7309 
cs=0x1678;eip=0x001117; 	T(OR(di, di));	// 42426 or      di, di ;~ 1678:1117
cs=0x1678;eip=0x001119; 	R(JGE(loc_25e52));	// 42427 jge     short loc_25E52 ;~ 1678:1119
loc_25e7b:
	// 7310 
cs=0x1678;eip=0x00111b; 	T(MOV(bx, polyinfonumpolys));	// 42431 mov     bx, polyinfonumpolys ;~ 1678:111B
cs=0x1678;eip=0x00111f; 	T(SHL(bx, 1));	// 42432 shl     bx, 1 ;~ 1678:111F
cs=0x1678;eip=0x001121; 	X(MOV(*(dw*)(((db*)word_40ed6)+bx), di));	// 42433 mov     word_40ED6[bx], di ;~ 1678:1121
cs=0x1678;eip=0x001125; 	T(MOV(bx, word_45d98));	// 42434 mov     bx, word_45D98 ;~ 1678:1125
cs=0x1678;eip=0x001129; 	T(SHL(bx, 1));	// 42435 shl     bx, 1 ;~ 1678:1129
cs=0x1678;eip=0x00112b; 	T(MOV(ax, polyinfonumpolys));	// 42436 mov     ax, polyinfonumpolys ;~ 1678:112B
cs=0x1678;eip=0x00112e; 	X(MOV(*(dw*)(((db*)word_40ed6)+bx), ax));	// 42437 mov     word_40ED6[bx], ax ;~ 1678:112E
cs=0x1678;eip=0x001132; 	X(INC(word_4554a));	// 42438 inc     word_4554A ;~ 1678:1132
cs=0x1678;eip=0x001136; 	T(OR(di, di));	// 42439 or      di, di ;~ 1678:1136
cs=0x1678;eip=0x001138; 	R(JGE(loc_25ea0));	// 42440 jge     short loc_25EA0 ;~ 1678:1138
cs=0x1678;eip=0x00113a; 	T(MOV(ax, polyinfonumpolys));	// 42441 mov     ax, polyinfonumpolys ;~ 1678:113A
cs=0x1678;eip=0x00113d; 	X(MOV(word_443f2, ax));	// 42442 mov     word_443F2, ax ;~ 1678:113D
loc_25ea0:
	// 7311 
cs=0x1678;eip=0x001140; 	T(MOV(bx, word_45d98));	// 42445 mov     bx, word_45D98 ;~ 1678:1140
cs=0x1678;eip=0x001144; 	T(SHL(bx, 1));	// 42446 shl     bx, 1 ;~ 1678:1144
cs=0x1678;eip=0x001146; 	T(MOV(ax, *(dw*)(((db*)word_40ed6)+bx)));	// 42447 mov     ax, word_40ED6[bx] ;~ 1678:1146
cs=0x1678;eip=0x00114a; 	X(MOV(word_45d98, ax));	// 42448 mov     word_45D98, ax ;~ 1678:114A
cs=0x1678;eip=0x00114d; 	X(INC(polyinfonumpolys));	// 42449 inc     polyinfonumpolys ;~ 1678:114D
cs=0x1678;eip=0x001151; 	T(MOV(al, transshapenumvertscopy));	// 42450 mov     al, transshapenumvertscopy ;~ 1678:1151
cs=0x1678;eip=0x001154; 	T(SUB(ah, ah));	// 42451 sub     ah, ah ;~ 1678:1154
cs=0x1678;eip=0x001156; 	T(SHL(ax, 1));	// 42452 shl     ax, 1 ;~ 1678:1156
cs=0x1678;eip=0x001158; 	T(SHL(ax, 1));	// 42453 shl     ax, 1 ;~ 1678:1158
cs=0x1678;eip=0x00115a; 	T(ADD(ax, 6));	// 42454 add     ax, 6 ;~ 1678:115A
cs=0x1678;eip=0x00115d; 	X(ADD(polyinfoptrnext, ax));	// 42455 add     polyinfoptrnext, ax ;~ 1678:115D
cs=0x1678;eip=0x001161; 	T(CMP(polyinfonumpolys, 0x190));	// 42456 cmp     polyinfonumpolys, 190h ;~ 1678:1161
cs=0x1678;eip=0x001167; 	R(JZ(loc_25ed1));	// 42457 jz      short loc_25ED1 ;~ 1678:1167
cs=0x1678;eip=0x001169; 	T(CMP(polyinfoptrnext, 0x2872));	// 42458 cmp     polyinfoptrnext, 2872h ;~ 1678:1169
cs=0x1678;eip=0x00116f; 	R(JLE(loc_25eda));	// 42459 jle     short loc_25EDA ;~ 1678:116F
loc_25ed1:
	// 7312 
cs=0x1678;eip=0x001171; 	T(MOV(ax, 1));	// 42462 mov     ax, 1           ; return 1 if error ;~ 1678:1171
cs=0x1678;eip=0x001174; 	X(POP(si));	// 42463 pop     si ;~ 1678:1174
cs=0x1678;eip=0x001175; 	X(POP(di));	// 42464 pop     di ;~ 1678:1175
cs=0x1678;eip=0x001176; 	T(MOV(sp, bp));	// 42465 mov     sp, bp ;~ 1678:1176
cs=0x1678;eip=0x001178; 	X(POP(bp));	// 42466 pop     bp ;~ 1678:1178
cs=0x1678;eip=0x001179; 	R(RETF(0));	// 42467 retf ;~ 1678:1179
loc_25eda:
	// 7313 
cs=0x1678;eip=0x00117a; 	T(SUB(ax, ax));	// 42471 sub     ax, ax ;~ 1678:117A
cs=0x1678;eip=0x00117c; 	X(POP(si));	// 42472 pop     si ;~ 1678:117C
cs=0x1678;eip=0x00117d; 	X(POP(di));	// 42473 pop     di ;~ 1678:117D
cs=0x1678;eip=0x00117e; 	T(MOV(sp, bp));	// 42474 mov     sp, bp ;~ 1678:117E
cs=0x1678;eip=0x001180; 	X(POP(bp));	// 42475 pop     bp ;~ 1678:1180
cs=0x1678;eip=0x001181; 	R(RETF(0));	// 42476 retf ;~ 1678:1181
rect_compare_point:
	// 42484 
#undef var_4
#define var_4 -4
	// 42487 var_4           = byte ptr -4 ;~ 1678:1182
#undef arg_0
#define arg_0 6
	// 42488 arg_0           = word ptr  6 ;~ 1678:1182
ret_1678_1182:
	// 7314 
cs=0x1678;eip=0x001182; 	X(PUSH(bp));	// 42490 push    bp ;~ 1678:1182
cs=0x1678;eip=0x001183; 	T(MOV(bp, sp));	// 42491 mov     bp, sp ;~ 1678:1183
cs=0x1678;eip=0x001185; 	T(SUB(sp, 4));	// 42492 sub     sp, 4 ;~ 1678:1185
cs=0x1678;eip=0x001188; 	X(PUSH(si));	// 42493 push    si ;~ 1678:1188
cs=0x1678;eip=0x001189; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 42494 mov     si, [bp+arg_0] ;~ 1678:1189
cs=0x1678;eip=0x00118c; 	T(MOV(ax, word_40eb4));	// 42495 mov     ax, word_40EB4 ;~ 1678:118C
cs=0x1678;eip=0x00118f; 	T(CMP(*(dw*)(raddr(ds,si+2)), ax));	// 42496 cmp     [si+2], ax ;~ 1678:118F
cs=0x1678;eip=0x001192; 	R(JGE(loc_25efa));	// 42497 jge     short loc_25EFA ;~ 1678:1192
cs=0x1678;eip=0x001194; 	X(MOV(*(raddr(ss,bp+var_4)), 1));	// 42498 mov     [bp+var_4], 1 ;~ 1678:1194
cs=0x1678;eip=0x001198; 	R(JMP(loc_25f0c));	// 42499 jmp     short loc_25F0C ;~ 1678:1198
loc_25efa:
	// 7315 
cs=0x1678;eip=0x00119a; 	T(MOV(ax, word_40eb6));	// 42503 mov     ax, word_40EB6 ;~ 1678:119A
cs=0x1678;eip=0x00119d; 	T(CMP(*(dw*)(raddr(ds,si+2)), ax));	// 42504 cmp     [si+2], ax ;~ 1678:119D
cs=0x1678;eip=0x0011a0; 	R(JLE(loc_25f08));	// 42505 jle     short loc_25F08 ;~ 1678:11A0
cs=0x1678;eip=0x0011a2; 	X(MOV(*(raddr(ss,bp+var_4)), 2));	// 42506 mov     [bp+var_4], 2 ;~ 1678:11A2
cs=0x1678;eip=0x0011a6; 	R(JMP(loc_25f0c));	// 42507 jmp     short loc_25F0C ;~ 1678:11A6
loc_25f08:
	// 7316 
cs=0x1678;eip=0x0011a8; 	X(MOV(*(raddr(ss,bp+var_4)), 0));	// 42511 mov     [bp+var_4], 0 ;~ 1678:11A8
loc_25f0c:
	// 7317 
cs=0x1678;eip=0x0011ac; 	T(MOV(ax, select_rect_rc));	// 42515 mov     ax, select_rect_rc ;~ 1678:11AC
cs=0x1678;eip=0x0011af; 	T(CMP(*(dw*)(raddr(ds,si+0)), ax));	// 42516 cmp     [si+0], ax ;~ 1678:11AF
cs=0x1678;eip=0x0011b1; 	R(JGE(loc_25f1a));	// 42517 jge     short loc_25F1A ;~ 1678:11B1
cs=0x1678;eip=0x0011b3; 	X(OR(*(raddr(ss,bp+var_4)), 4));	// 42518 or      [bp+var_4], 4 ;~ 1678:11B3
cs=0x1678;eip=0x0011b7; 	R(JMP(loc_25f25));	// 42519 jmp     short loc_25F25 ;~ 1678:11B7
loc_25f1a:
	// 7318 
cs=0x1678;eip=0x0011ba; 	T(MOV(ax, word_40eb2));	// 42524 mov     ax, word_40EB2 ;~ 1678:11BA
cs=0x1678;eip=0x0011bd; 	T(CMP(*(dw*)(raddr(ds,si+0)), ax));	// 42525 cmp     [si+0], ax ;~ 1678:11BD
cs=0x1678;eip=0x0011bf; 	R(JLE(loc_25f25));	// 42526 jle     short loc_25F25 ;~ 1678:11BF
cs=0x1678;eip=0x0011c1; 	X(OR(*(raddr(ss,bp+var_4)), 8));	// 42527 or      [bp+var_4], 8 ;~ 1678:11C1
loc_25f25:
	// 7319 
cs=0x1678;eip=0x0011c5; 	T(MOV(al, *(raddr(ss,bp+var_4))));	// 42531 mov     al, [bp+var_4] ;~ 1678:11C5
cs=0x1678;eip=0x0011c8; 	T(CBW);	// 42532 cbw ;~ 1678:11C8
cs=0x1678;eip=0x0011c9; 	X(POP(si));	// 42533 pop     si ;~ 1678:11C9
cs=0x1678;eip=0x0011ca; 	T(MOV(sp, bp));	// 42534 mov     sp, bp ;~ 1678:11CA
cs=0x1678;eip=0x0011cc; 	X(POP(bp));	// 42535 pop     bp ;~ 1678:11CC
cs=0x1678;eip=0x0011cd; 	R(RETF(0));	// 42536 retf ;~ 1678:11CD
transformed_shape_op_helper3:
	// 42544 
#undef var_10
#define var_10 -0x10
	// 42547 var_10          = word ptr -10h ;~ 1678:11CE
#undef var_e
#define var_e -0x0E
	// 42548 var_E           = word ptr -0Eh ;~ 1678:11CE
#undef var_c
#define var_c -0x0C
	// 42549 var_C           = word ptr -0Ch ;~ 1678:11CE
#undef var_a
#define var_a -0x0A
	// 42550 var_A           = word ptr -0Ah ;~ 1678:11CE
#undef var_8
#define var_8 -8
	// 42551 var_8           = word ptr -8 ;~ 1678:11CE
#undef var_6
#define var_6 -6
	// 42552 var_6           = word ptr -6 ;~ 1678:11CE
#undef var_4
#define var_4 -4
	// 42553 var_4           = word ptr -4 ;~ 1678:11CE
#undef var_2
#define var_2 -2
	// 42554 var_2           = word ptr -2 ;~ 1678:11CE
#undef arg_0
#define arg_0 6
	// 42555 arg_0           = dword ptr  6 ;~ 1678:11CE
ret_1678_11ce:
	// 7320 
cs=0x1678;eip=0x0011ce; 	X(PUSH(bp));	// 42557 push    bp ;~ 1678:11CE
cs=0x1678;eip=0x0011cf; 	T(MOV(bp, sp));	// 42558 mov     bp, sp ;~ 1678:11CF
cs=0x1678;eip=0x0011d1; 	T(SUB(sp, 0x10));	// 42559 sub     sp, 10h ;~ 1678:11D1
cs=0x1678;eip=0x0011d4; 	X(PUSH(di));	// 42560 push    di ;~ 1678:11D4
cs=0x1678;eip=0x0011d5; 	X(PUSH(si));	// 42561 push    si ;~ 1678:11D5
cs=0x1678;eip=0x0011d6; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 42562 les     bx, [bp+arg_0] ;~ 1678:11D6
cs=0x1678;eip=0x0011d9; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 42563 mov     ax, es:[bx+4] ;~ 1678:11D9
cs=0x1678;eip=0x0011dd; 	T(CWD);	// 42564 cwd ;~ 1678:11DD
cs=0x1678;eip=0x0011de; 	T(MOV(cx, ax));	// 42565 mov     cx, ax ;~ 1678:11DE
cs=0x1678;eip=0x0011e0; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 42566 mov     ax, es:[bx] ;~ 1678:11E0
cs=0x1678;eip=0x0011e3; 	T(MOV(bx, dx));	// 42567 mov     bx, dx ;~ 1678:11E3
cs=0x1678;eip=0x0011e5; 	T(CWD);	// 42568 cwd ;~ 1678:11E5
cs=0x1678;eip=0x0011e6; 	T(SUB(ax, cx));	// 42569 sub     ax, cx ;~ 1678:11E6
cs=0x1678;eip=0x0011e8; 	T(SBB(dx, bx));	// 42570 sbb     dx, bx ;~ 1678:11E8
cs=0x1678;eip=0x0011ea; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 42571 mov     [bp+var_4], ax ;~ 1678:11EA
cs=0x1678;eip=0x0011ed; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 42572 mov     [bp+var_2], dx ;~ 1678:11ED
cs=0x1678;eip=0x0011f0; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 42573 mov     bx, word ptr [bp+arg_0] ;~ 1678:11F0
cs=0x1678;eip=0x0011f3; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 42574 mov     ax, es:[bx+4] ;~ 1678:11F3
cs=0x1678;eip=0x0011f7; 	T(CWD);	// 42575 cwd ;~ 1678:11F7
cs=0x1678;eip=0x0011f8; 	T(MOV(cx, ax));	// 42576 mov     cx, ax ;~ 1678:11F8
cs=0x1678;eip=0x0011fa; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 42577 mov     ax, es:[bx+8] ;~ 1678:11FA
cs=0x1678;eip=0x0011fe; 	T(MOV(bx, dx));	// 42578 mov     bx, dx ;~ 1678:11FE
cs=0x1678;eip=0x001200; 	T(CWD);	// 42579 cwd ;~ 1678:1200
cs=0x1678;eip=0x001201; 	T(SUB(ax, cx));	// 42580 sub     ax, cx ;~ 1678:1201
cs=0x1678;eip=0x001203; 	T(SBB(dx, bx));	// 42581 sbb     dx, bx ;~ 1678:1203
cs=0x1678;eip=0x001205; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 42582 mov     [bp+var_C], ax ;~ 1678:1205
cs=0x1678;eip=0x001208; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), dx));	// 42583 mov     [bp+var_A], dx ;~ 1678:1208
cs=0x1678;eip=0x00120b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 42584 mov     ax, [bp+var_4] ;~ 1678:120B
cs=0x1678;eip=0x00120e; 	T(OR(ax, *(dw*)(raddr(ss,bp+var_2))));	// 42585 or      ax, [bp+var_2] ;~ 1678:120E
cs=0x1678;eip=0x001211; 	R(JNZ(loc_25f7a));	// 42586 jnz     short loc_25F7A ;~ 1678:1211
cs=0x1678;eip=0x001213; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 42587 mov     ax, [bp+var_C] ;~ 1678:1213
cs=0x1678;eip=0x001216; 	T(OR(ax, dx));	// 42588 or      ax, dx ;~ 1678:1216
cs=0x1678;eip=0x001218; 	R(JZ(loc_25fee));	// 42589 jz      short loc_25FEE ;~ 1678:1218
loc_25f7a:
	// 7321 
cs=0x1678;eip=0x00121a; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 42592 mov     bx, word ptr [bp+arg_0] ;~ 1678:121A
cs=0x1678;eip=0x00121d; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 42593 mov     ax, es:[bx+2] ;~ 1678:121D
cs=0x1678;eip=0x001221; 	T(SUB(ax, *(dw*)(raddr(es,bx+6))));	// 42594 sub     ax, es:[bx+6] ;~ 1678:1221
cs=0x1678;eip=0x001225; 	T(CWD);	// 42595 cwd ;~ 1678:1225
cs=0x1678;eip=0x001226; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 42596 mov     [bp+var_8], ax ;~ 1678:1226
cs=0x1678;eip=0x001229; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 42597 mov     [bp+var_6], dx ;~ 1678:1229
cs=0x1678;eip=0x00122c; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 42598 mov     ax, es:[bx+0Ah] ;~ 1678:122C
cs=0x1678;eip=0x001230; 	T(SUB(ax, *(dw*)(raddr(es,bx+6))));	// 42599 sub     ax, es:[bx+6] ;~ 1678:1230
cs=0x1678;eip=0x001234; 	T(CWD);	// 42600 cwd ;~ 1678:1234
cs=0x1678;eip=0x001235; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 42601 mov     [bp+var_10], ax ;~ 1678:1235
cs=0x1678;eip=0x001238; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), dx));	// 42602 mov     [bp+var_E], dx ;~ 1678:1238
cs=0x1678;eip=0x00123b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 42603 mov     ax, [bp+var_8] ;~ 1678:123B
cs=0x1678;eip=0x00123e; 	T(OR(ax, *(dw*)(raddr(ss,bp+var_6))));	// 42604 or      ax, [bp+var_6] ;~ 1678:123E
cs=0x1678;eip=0x001241; 	R(JNZ(loc_25faa));	// 42605 jnz     short loc_25FAA ;~ 1678:1241
cs=0x1678;eip=0x001243; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 42606 mov     ax, [bp+var_10] ;~ 1678:1243
cs=0x1678;eip=0x001246; 	T(OR(ax, dx));	// 42607 or      ax, dx ;~ 1678:1246
cs=0x1678;eip=0x001248; 	R(JZ(loc_25fee));	// 42608 jz      short loc_25FEE ;~ 1678:1248
loc_25faa:
	// 7322 
cs=0x1678;eip=0x00124a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_e))));	// 42611 push    [bp+var_E] ;~ 1678:124A
cs=0x1678;eip=0x00124d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_10))));	// 42612 push    [bp+var_10] ;~ 1678:124D
cs=0x1678;eip=0x001250; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 42613 push    [bp+var_2] ;~ 1678:1250
cs=0x1678;eip=0x001253; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 42614 push    [bp+var_4] ;~ 1678:1253
cs=0x1678;eip=0x001256; 	R(CALLF(__aflmul,0));	// 42615 call    __aFlmul ;~ 1678:1256
cs=0x1678;eip=0x00125b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 42616 push    [bp+var_6] ;~ 1678:125B
cs=0x1678;eip=0x00125e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 42617 push    [bp+var_8] ;~ 1678:125E
cs=0x1678;eip=0x001261; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 42618 push    [bp+var_A] ;~ 1678:1261
cs=0x1678;eip=0x001264; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 42619 push    [bp+var_C] ;~ 1678:1264
cs=0x1678;eip=0x001267; 	T(MOV(si, ax));	// 42620 mov     si, ax ;~ 1678:1267
cs=0x1678;eip=0x001269; 	T(MOV(di, dx));	// 42621 mov     di, dx ;~ 1678:1269
cs=0x1678;eip=0x00126b; 	R(CALLF(__aflmul,0));	// 42622 call    __aFlmul ;~ 1678:126B
cs=0x1678;eip=0x001270; 	T(SUB(ax, si));	// 42623 sub     ax, si ;~ 1678:1270
cs=0x1678;eip=0x001272; 	T(SBB(dx, di));	// 42624 sbb     dx, di ;~ 1678:1272
cs=0x1678;eip=0x001274; 	T(OR(dx, dx));	// 42625 or      dx, dx ;~ 1678:1274
cs=0x1678;eip=0x001276; 	R(JL(loc_25fe4));	// 42626 jl      short loc_25FE4 ;~ 1678:1276
cs=0x1678;eip=0x001278; 	R(JG(loc_25fde));	// 42627 jg      short loc_25FDE ;~ 1678:1278
cs=0x1678;eip=0x00127a; 	T(OR(ax, ax));	// 42628 or      ax, ax ;~ 1678:127A
cs=0x1678;eip=0x00127c; 	R(JZ(loc_25fe4));	// 42629 jz      short loc_25FE4 ;~ 1678:127C
loc_25fde:
	// 7323 
cs=0x1678;eip=0x00127e; 	T(MOV(al, 1));	// 42632 mov     al, 1 ;~ 1678:127E
cs=0x1678;eip=0x001280; 	R(JMP(loc_25fe6));	// 42633 jmp     short loc_25FE6 ;~ 1678:1280
loc_25fe4:
	// 7324 
cs=0x1678;eip=0x001284; 	T(SUB(al, al));	// 42640 sub     al, al ;~ 1678:1284
loc_25fe6:
	// 7325 
cs=0x1678;eip=0x001286; 	T(CBW);	// 42643 cbw ;~ 1678:1286
cs=0x1678;eip=0x001287; 	X(POP(si));	// 42644 pop     si ;~ 1678:1287
cs=0x1678;eip=0x001288; 	X(POP(di));	// 42645 pop     di ;~ 1678:1288
cs=0x1678;eip=0x001289; 	T(MOV(sp, bp));	// 42646 mov     sp, bp ;~ 1678:1289
cs=0x1678;eip=0x00128b; 	X(POP(bp));	// 42647 pop     bp ;~ 1678:128B
cs=0x1678;eip=0x00128c; 	R(RETF(0));	// 42648 retf ;~ 1678:128C
loc_25fee:
	// 7326 
cs=0x1678;eip=0x00128e; 	T(SUB(ax, ax));	// 42654 sub     ax, ax ;~ 1678:128E
cs=0x1678;eip=0x001290; 	X(POP(si));	// 42655 pop     si ;~ 1678:1290
cs=0x1678;eip=0x001291; 	X(POP(di));	// 42656 pop     di ;~ 1678:1291
cs=0x1678;eip=0x001292; 	T(MOV(sp, bp));	// 42657 mov     sp, bp ;~ 1678:1292
cs=0x1678;eip=0x001294; 	X(POP(bp));	// 42658 pop     bp ;~ 1678:1294
cs=0x1678;eip=0x001295; 	R(RETF(0));	// 42659 retf ;~ 1678:1295
get_a_poly_info:
	// 42667 
#undef var_40
#define var_40 -0x40
	// 42670 var_40          = word ptr -40h ;~ 1678:1296
#undef var_3e
#define var_3e -0x3E
	// 42671 var_3E          = dword ptr -3Eh ;~ 1678:1296
#undef var_38
#define var_38 -0x38
	// 42672 var_38          = dword ptr -38h ;~ 1678:1296
#undef var_32
#define var_32 -0x32
	// 42673 var_32          = byte ptr -32h ;~ 1678:1296
#undef var_a
#define var_a -0x0A
	// 42674 var_A           = word ptr -0Ah ;~ 1678:1296
#undef var_8
#define var_8 -8
	// 42675 var_8           = word ptr -8 ;~ 1678:1296
#undef var_6
#define var_6 -6
	// 42676 var_6           = word ptr -6 ;~ 1678:1296
#undef var_4
#define var_4 -4
	// 42677 var_4           = word ptr -4 ;~ 1678:1296
#undef var_2
#define var_2 -2
	// 42678 var_2           = word ptr -2 ;~ 1678:1296
ret_1678_1296:
	// 7327 
cs=0x1678;eip=0x001296; 	X(PUSH(bp));	// 42680 push    bp ;~ 1678:1296
cs=0x1678;eip=0x001297; 	T(MOV(bp, sp));	// 42681 mov     bp, sp ;~ 1678:1297
cs=0x1678;eip=0x001299; 	T(SUB(sp, 0x40));	// 42682 sub     sp, 40h ;~ 1678:1299
cs=0x1678;eip=0x00129c; 	X(PUSH(di));	// 42683 push    di ;~ 1678:129C
cs=0x1678;eip=0x00129d; 	X(PUSH(si));	// 42684 push    si ;~ 1678:129D
cs=0x1678;eip=0x00129e; 	T(MOV(di, 0x190));	// 42685 mov     di, 190h ;~ 1678:129E
cs=0x1678;eip=0x0012a1; 	T(SUB(si, si));	// 42686 sub     si, si ;~ 1678:12A1
cs=0x1678;eip=0x0012a3; 	R(JMP(loc_260ac));	// 42687 jmp     loc_260AC ;~ 1678:12A3
_fill_type0:
	// 7328 
cs=0x1678;eip=0x0012a6; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_38))));	// 42691 les     bx, [bp+var_38] ;~ 1678:12A6
cs=0x1678;eip=0x0012a9; 	T(MOV(al, *(raddr(es,bx+3))));	// 42692 mov     al, es:[bx+3] ;~ 1678:12A9
cs=0x1678;eip=0x0012ad; 	T(CBW);	// 42693 cbw ;~ 1678:12AD
cs=0x1678;eip=0x0012ae; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 42694 mov     [bp+var_2], ax ;~ 1678:12AE
cs=0x1678;eip=0x0012b1; 	T(MOV(ax, bx));	// 42695 mov     ax, bx ;~ 1678:12B1
cs=0x1678;eip=0x0012b3; 	T(MOV(dx, es));	// 42696 mov     dx, es ;~ 1678:12B3
cs=0x1678;eip=0x0012b5; 	T(ADD(ax, 6));	// 42697 add     ax, 6 ;~ 1678:12B5
cs=0x1678;eip=0x0012b8; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_3e))), ax));	// 42698 mov     word ptr [bp+var_3E], ax ; polyinfoptrdata = polyinfoptr+6 ;~ 1678:12B8
cs=0x1678;eip=0x0012bb; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_3e +2))), dx));	// 42699 mov     word ptr [bp+var_3E+2], dx ;~ 1678:12BB
cs=0x1678;eip=0x0012be; 	T(ax = bp+var_32);	// 42700 lea     ax, [bp+var_32] ;~ 1678:12BE
cs=0x1678;eip=0x0012c1; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 42701 mov     [bp+var_A], ax ;~ 1678:12C1
cs=0x1678;eip=0x0012c4; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 42702 mov     [bp+var_4], 0 ;~ 1678:12C4
cs=0x1678;eip=0x0012c9; 	R(JMP(loc_26049));	// 42703 jmp     short loc_26049 ;~ 1678:12C9
loc_2602c:
	// 7329 
cs=0x1678;eip=0x0012cc; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_3e))));	// 42708 les     bx, [bp+var_3E] ;~ 1678:12CC
cs=0x1678;eip=0x0012cf; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 42709 mov     ax, es:[bx] ;~ 1678:12CF
cs=0x1678;eip=0x0012d2; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 42710 mov     dx, es:[bx+2] ;~ 1678:12D2
cs=0x1678;eip=0x0012d6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_a))));	// 42711 mov     bx, [bp+var_A] ;~ 1678:12D6
cs=0x1678;eip=0x0012d9; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 42712 mov     [bx], ax ;~ 1678:12D9
cs=0x1678;eip=0x0012db; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 42713 mov     [bx+2], dx ;~ 1678:12DB
cs=0x1678;eip=0x0012de; 	X(ADD(*(dw*)(raddr(ss,bp+var_a)), 4));	// 42714 add     [bp+var_A], 4 ;~ 1678:12DE
cs=0x1678;eip=0x0012e2; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_3e))), 4));	// 42715 add     word ptr [bp+var_3E], 4 ;~ 1678:12E2
cs=0x1678;eip=0x0012e6; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 42716 inc     [bp+var_4] ;~ 1678:12E6
loc_26049:
	// 7330 
cs=0x1678;eip=0x0012e9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 42719 mov     ax, [bp+var_2] ;~ 1678:12E9
cs=0x1678;eip=0x0012ec; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), ax));	// 42720 cmp     [bp+var_4], ax ;~ 1678:12EC
cs=0x1678;eip=0x0012ef; 	R(JC(loc_2602c));	// 42721 jb      short loc_2602C ;~ 1678:12EF
cs=0x1678;eip=0x0012f1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_6))));	// 42722 mov     bx, [bp+var_6] ;~ 1678:12F1
cs=0x1678;eip=0x0012f4; 	T(SHL(bx, 1));	// 42723 shl     bx, 1 ;~ 1678:12F4
cs=0x1678;eip=0x0012f6; 	T(ADD(bx, material_patlist_ptr_cpy));	// 42724 add     bx, material_patlist_ptr_cpy ;~ 1678:12F6
cs=0x1678;eip=0x0012fa; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 42725 mov     ax, [bx] ;~ 1678:12FA
cs=0x1678;eip=0x0012fc; 	T(OR(ax, ax));	// 42726 or      ax, ax ;~ 1678:12FC
cs=0x1678;eip=0x0012fe; 	R(JZ(_fill_default));	// 42727 jz      short _fill_default ; 0 normal 1 grille 2? 3 invisible ;~ 1678:12FE
cs=0x1678;eip=0x001300; 	T(CMP(ax, 1));	// 42728 cmp     ax, 1 ;~ 1678:1300
cs=0x1678;eip=0x001303; 	R(JZ(_fill_patterned));	// 42729 jz      short _fill_patterned ;~ 1678:1303
cs=0x1678;eip=0x001305; 	T(CMP(ax, 2));	// 42730 cmp     ax, 2 ;~ 1678:1305
cs=0x1678;eip=0x001308; 	R(JNZ(_do_fill_next));	// 42731 jnz     short _do_fill_next ;~ 1678:1308
cs=0x1678;eip=0x00130a; 	R(JMP(_fill_unk));	// 42732 jmp     _fill_unk ;~ 1678:130A
_do_fill_next:
	// 7331 
cs=0x1678;eip=0x00130d; 	R(JMP(_fill_next));	// 42736 jmp     short _fill_next ;~ 1678:130D
_fill_default:
	// 7332 
cs=0x1678;eip=0x001310; 	T(ax = bp+var_32);	// 42741 lea     ax, [bp+var_32] ;~ 1678:1310
cs=0x1678;eip=0x001313; 	X(PUSH(ax));	// 42742 push    ax ;~ 1678:1313
cs=0x1678;eip=0x001314; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 42743 push    [bp+var_2] ;~ 1678:1314
cs=0x1678;eip=0x001317; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 42744 push    [bp+var_8] ;~ 1678:1317
cs=0x1678;eip=0x00131a; 	R(CALLF(prerender_default,0));	// 42745 call    preRender_default ;~ 1678:131A
_fill_next_eop6:
	// 7333 
cs=0x1678;eip=0x00131f; 	T(ADD(sp, 6));	// 42748 add     sp, 6 ;~ 1678:131F
cs=0x1678;eip=0x001322; 	R(JMP(_fill_next));	// 42749 jmp     short _fill_next ;~ 1678:1322
_fill_patterned:
	// 7334 
cs=0x1678;eip=0x001324; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_6))));	// 42753 mov     bx, [bp+var_6] ;~ 1678:1324
cs=0x1678;eip=0x001327; 	T(SHL(bx, 1));	// 42754 shl     bx, 1 ;~ 1678:1327
cs=0x1678;eip=0x001329; 	T(ADD(bx, material_patlist2_ptr_cpy));	// 42755 add     bx, material_patlist2_ptr_cpy ;~ 1678:1329
cs=0x1678;eip=0x00132d; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 42756 mov     ax, [bx] ;~ 1678:132D
cs=0x1678;eip=0x00132f; 	X(MOV(*(dw*)(raddr(ss,bp+var_40)), ax));	// 42757 mov     [bp+var_40], ax ;~ 1678:132F
cs=0x1678;eip=0x001332; 	T(OR(ax, ax));	// 42758 or      ax, ax ;~ 1678:1332
cs=0x1678;eip=0x001334; 	R(JZ(_fill_next));	// 42759 jz      short _fill_next ;~ 1678:1334
cs=0x1678;eip=0x001336; 	T(ax = bp+var_32);	// 42760 lea     ax, [bp+var_32] ;~ 1678:1336
cs=0x1678;eip=0x001339; 	X(PUSH(ax));	// 42761 push    ax ;~ 1678:1339
cs=0x1678;eip=0x00133a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 42762 push    [bp+var_2] ;~ 1678:133A
cs=0x1678;eip=0x00133d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 42763 push    [bp+var_8] ;~ 1678:133D
cs=0x1678;eip=0x001340; 	X(PUSH(*(dw*)(raddr(ss,bp+var_40))));	// 42764 push    [bp+var_40] ;~ 1678:1340
cs=0x1678;eip=0x001343; 	R(CALLF(prerender_patterned,0));	// 42765 call    preRender_patterned ;~ 1678:1343
_fill_next_eop8:
	// 7335 
cs=0x1678;eip=0x001348; 	T(ADD(sp, 8));	// 42768 add     sp, 8 ;~ 1678:1348
_fill_next:
	// 7336 
cs=0x1678;eip=0x00134b; 	T(INC(si));	// 42772 inc     si ;~ 1678:134B
loc_260ac:
	// 7337 
cs=0x1678;eip=0x00134c; 	T(MOV(ax, si));	// 42775 mov     ax, si ;~ 1678:134C
cs=0x1678;eip=0x00134e; 	T(CMP(ax, polyinfonumpolys));	// 42776 cmp     ax, polyinfonumpolys ;~ 1678:134E
cs=0x1678;eip=0x001352; 	R(JC(loc_260b7));	// 42777 jb      short loc_260B7 ;~ 1678:1352
cs=0x1678;eip=0x001354; 	R(JMP(_get_a_poly_info_done));	// 42778 jmp     _get_a_poly_info_done ;~ 1678:1354
loc_260b7:
	// 7338 
cs=0x1678;eip=0x001357; 	T(MOV(bx, di));	// 42782 mov     bx, di          ; di = 400 ;~ 1678:1357
cs=0x1678;eip=0x001359; 	T(SHL(bx, 1));	// 42783 shl     bx, 1 ;~ 1678:1359
cs=0x1678;eip=0x00135b; 	T(MOV(di, *(dw*)(((db*)word_40ed6)+bx)));	// 42784 mov     di, word_40ED6[bx] ;~ 1678:135B
cs=0x1678;eip=0x00135f; 	T(MOV(bx, di));	// 42785 mov     bx, di ;~ 1678:135F
cs=0x1678;eip=0x001361; 	T(SHL(bx, 1));	// 42786 shl     bx, 1 ;~ 1678:1361
cs=0x1678;eip=0x001363; 	T(SHL(bx, 1));	// 42787 shl     bx, 1 ;~ 1678:1363
cs=0x1678;eip=0x001365; 	T(MOV(ax, *(dw*)(((db*)polyinfoptrs)+bx)));	// 42788 mov     ax, word ptr polyinfoptrs[bx] ;~ 1678:1365
cs=0x1678;eip=0x001369; 	T(MOV(dx, *(dw*)((((db*)polyinfoptrs)+2)+bx)));	// 42789 mov     dx, word ptr (polyinfoptrs+2)[bx] ;~ 1678:1369
cs=0x1678;eip=0x00136d; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_38))), ax));	// 42790 mov     word ptr [bp+var_38], ax ;~ 1678:136D
cs=0x1678;eip=0x001370; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_38+2))), dx));	// 42791 mov     word ptr [bp+var_38+2], dx ;~ 1678:1370
cs=0x1678;eip=0x001373; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_38))));	// 42792 les     bx, [bp+var_38] ;~ 1678:1373
cs=0x1678;eip=0x001376; 	T(MOV(al, *(raddr(es,bx+2))));	// 42793 mov     al, es:[bx+2]   ; material type ;~ 1678:1376
cs=0x1678;eip=0x00137a; 	T(SUB(ah, ah));	// 42794 sub     ah, ah ;~ 1678:137A
cs=0x1678;eip=0x00137c; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 42795 mov     [bp+var_6], ax ;~ 1678:137C
cs=0x1678;eip=0x00137f; 	T(MOV(bx, ax));	// 42796 mov     bx, ax          ; material index... ;~ 1678:137F
cs=0x1678;eip=0x001381; 	T(SHL(bx, 1));	// 42797 shl     bx, 1 ;~ 1678:1381
cs=0x1678;eip=0x001383; 	T(ADD(bx, material_clrlist_ptr_cpy));	// 42798 add     bx, material_clrlist_ptr_cpy ;~ 1678:1383
cs=0x1678;eip=0x001387; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 42799 mov     ax, [bx] ;~ 1678:1387
cs=0x1678;eip=0x001389; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 42800 mov     [bp+var_8], ax ;~ 1678:1389
cs=0x1678;eip=0x00138c; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_38)))));	// 42801 mov     bx, word ptr [bp+var_38] ;~ 1678:138C
cs=0x1678;eip=0x00138f; 	T(MOV(al, *(raddr(es,bx+4))));	// 42802 mov     al, es:[bx+4]   ; object type (solid, sphere, wheel, pixel) ;~ 1678:138F
cs=0x1678;eip=0x001393; 	T(CBW);	// 42803 cbw ;~ 1678:1393
cs=0x1678;eip=0x001394; 	T(OR(ax, ax));	// 42804 or      ax, ax ;~ 1678:1394
cs=0x1678;eip=0x001396; 	R(JNZ(_fill_nonzero));	// 42805 jnz     short _fill_nonzero ;~ 1678:1396
cs=0x1678;eip=0x001398; 	R(JMP(_fill_type0));	// 42806 jmp     _fill_type0 ;~ 1678:1398
_fill_nonzero:
	// 7339 
cs=0x1678;eip=0x00139b; 	T(CMP(ax, 1));	// 42810 cmp     ax, 1 ;~ 1678:139B
cs=0x1678;eip=0x00139e; 	R(JZ(_fill_solid));	// 42811 jz      short _fill_solid ;~ 1678:139E
cs=0x1678;eip=0x0013a0; 	T(CMP(ax, 2));	// 42812 cmp     ax, 2 ;~ 1678:13A0
cs=0x1678;eip=0x0013a3; 	R(JNZ(loc_26108));	// 42813 jnz     short loc_26108 ;~ 1678:13A3
cs=0x1678;eip=0x0013a5; 	R(JMP(_fill_sphere));	// 42814 jmp     _fill_sphere ;~ 1678:13A5
loc_26108:
	// 7340 
cs=0x1678;eip=0x0013a8; 	T(CMP(ax, 3));	// 42818 cmp     ax, 3 ;~ 1678:13A8
cs=0x1678;eip=0x0013ab; 	R(JZ(_fill_wheel0));	// 42819 jz      short _fill_wheel0 ;~ 1678:13AB
cs=0x1678;eip=0x0013ad; 	T(CMP(ax, 5));	// 42820 cmp     ax, 5 ;~ 1678:13AD
cs=0x1678;eip=0x0013b0; 	R(JNZ(_fill_next_jmp));	// 42821 jnz     short _fill_next_jmp ;~ 1678:13B0
cs=0x1678;eip=0x0013b2; 	R(JMP(_fill_pixel));	// 42822 jmp     _fill_pixel ;~ 1678:13B2
_fill_next_jmp:
	// 7341 
cs=0x1678;eip=0x0013b5; 	R(JMP(_fill_next));	// 42826 jmp     short _fill_next ;~ 1678:13B5
_fill_unk:
	// 7342 
cs=0x1678;eip=0x0013b8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 42831 mov     ax, [bp+var_6] ;~ 1678:13B8
cs=0x1678;eip=0x0013bb; 	T(SHL(ax, 1));	// 42832 shl     ax, 1 ;~ 1678:13BB
cs=0x1678;eip=0x0013bd; 	X(MOV(*(dw*)(raddr(ss,bp+var_40)), ax));	// 42833 mov     [bp+var_40], ax ;~ 1678:13BD
cs=0x1678;eip=0x0013c0; 	T(ax = bp+var_32);	// 42834 lea     ax, [bp+var_32] ;~ 1678:13C0
cs=0x1678;eip=0x0013c3; 	X(PUSH(ax));	// 42835 push    ax ;~ 1678:13C3
cs=0x1678;eip=0x0013c4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 42836 push    [bp+var_2] ;~ 1678:13C4
cs=0x1678;eip=0x0013c7; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 42837 push    [bp+var_8] ;~ 1678:13C7
cs=0x1678;eip=0x0013ca; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_40))));	// 42838 mov     bx, [bp+var_40] ;~ 1678:13CA
cs=0x1678;eip=0x0013cd; 	T(ADD(bx, material_clrlist2_ptr_cpy));	// 42839 add     bx, material_clrlist2_ptr_cpy ;~ 1678:13CD
cs=0x1678;eip=0x0013d1; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 42840 push    word ptr [bx] ;~ 1678:13D1
cs=0x1678;eip=0x0013d3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_40))));	// 42841 mov     bx, [bp+var_40] ;~ 1678:13D3
cs=0x1678;eip=0x0013d6; 	T(ADD(bx, material_patlist2_ptr_cpy));	// 42842 add     bx, material_patlist2_ptr_cpy ;~ 1678:13D6
cs=0x1678;eip=0x0013da; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 42843 push    word ptr [bx] ;~ 1678:13DA
cs=0x1678;eip=0x0013dc; 	R(CALLF(prerender_unk,0));	// 42844 call    preRender_unk ;~ 1678:13DC
cs=0x1678;eip=0x0013e1; 	R(JMP(_fill_next_eop10));	// 42845 jmp     short _fill_next_eop10 ;~ 1678:13E1
_fill_solid:
	// 7343 
cs=0x1678;eip=0x0013e4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 42850 push    [bp+var_8] ;~ 1678:13E4
cs=0x1678;eip=0x0013e7; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_38))));	// 42851 les     bx, [bp+var_38] ;~ 1678:13E7
cs=0x1678;eip=0x0013ea; 	X(PUSH(*(dw*)(raddr(es,bx+0x0C))));	// 42852 push    word ptr es:[bx+0Ch] ;~ 1678:13EA
cs=0x1678;eip=0x0013ee; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A))));	// 42853 push    word ptr es:[bx+0Ah] ;~ 1678:13EE
cs=0x1678;eip=0x0013f2; 	X(PUSH(*(dw*)(raddr(es,bx+8))));	// 42854 push    word ptr es:[bx+8] ;~ 1678:13F2
cs=0x1678;eip=0x0013f6; 	X(PUSH(*(dw*)(raddr(es,bx+6))));	// 42855 push    word ptr es:[bx+6] ;~ 1678:13F6
cs=0x1678;eip=0x0013fa; 	R(CALLF(prerender_line,0));	// 42856 call    preRender_line ;~ 1678:13FA
_fill_next_eop10:
	// 7344 
cs=0x1678;eip=0x0013ff; 	T(ADD(sp, 0x0A));	// 42860 add     sp, 0Ah ;~ 1678:13FF
cs=0x1678;eip=0x001402; 	R(JMP(_fill_next));	// 42861 jmp     _fill_next ;~ 1678:1402
_fill_wheel0:
	// 7345 
cs=0x1678;eip=0x001406; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 42866 mov     [bp+var_4], 0 ;~ 1678:1406
_fill_wheel:
	// 7346 
cs=0x1678;eip=0x00140b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 42869 mov     ax, [bp+var_4] ;~ 1678:140B
cs=0x1678;eip=0x00140e; 	T(SHL(ax, 1));	// 42870 shl     ax, 1 ;~ 1678:140E
cs=0x1678;eip=0x001410; 	T(SHL(ax, 1));	// 42871 shl     ax, 1 ;~ 1678:1410
cs=0x1678;eip=0x001412; 	X(MOV(*(dw*)(raddr(ss,bp+var_40)), ax));	// 42872 mov     [bp+var_40], ax ;~ 1678:1412
cs=0x1678;eip=0x001415; 	T(MOV(bx, ax));	// 42873 mov     bx, ax ;~ 1678:1415
cs=0x1678;eip=0x001417; 	T(ADD(bx, *(dw*)((dw*)(raddr(ss,bp+var_38)))));	// 42874 add     bx, word ptr [bp+var_38] ;~ 1678:1417
cs=0x1678;eip=0x00141a; 	T(MOV(es, *(dw*)((dw*)(raddr(ss,bp+var_38+2)))));	// 42875 mov     es, word ptr [bp+var_38+2] ;~ 1678:141A
cs=0x1678;eip=0x00141d; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 42876 mov     ax, es:[bx+6] ;~ 1678:141D
cs=0x1678;eip=0x001421; 	T(MOV(dx, *(dw*)(raddr(es,bx+8))));	// 42877 mov     dx, es:[bx+8] ;~ 1678:1421
cs=0x1678;eip=0x001425; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_40))));	// 42878 mov     bx, [bp+var_40] ;~ 1678:1425
cs=0x1678;eip=0x001428; 	T(ADD(bx, bp));	// 42879 add     bx, bp ;~ 1678:1428
cs=0x1678;eip=0x00142a; 	X(MOV(*(dw*)(raddr(ds,bx-0x32)), ax));	// 42880 mov     [bx-32h], ax ;~ 1678:142A
cs=0x1678;eip=0x00142d; 	X(MOV(*(dw*)(raddr(ds,bx-0x30)), dx));	// 42881 mov     [bx-30h], dx ;~ 1678:142D
cs=0x1678;eip=0x001430; 	X(INC(*(dw*)(raddr(ss,bp+var_4))));	// 42882 inc     [bp+var_4] ;~ 1678:1430
cs=0x1678;eip=0x001433; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 4));	// 42883 cmp     [bp+var_4], 4 ;~ 1678:1433
cs=0x1678;eip=0x001437; 	R(JC(_fill_wheel));	// 42884 jb      short _fill_wheel ; b4 every car0 render ;~ 1678:1437
cs=0x1678;eip=0x001439; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 42885 mov     ax, [bp+var_6]  ; material index ;~ 1678:1439
cs=0x1678;eip=0x00143c; 	T(SHL(ax, 1));	// 42886 shl     ax, 1 ;~ 1678:143C
cs=0x1678;eip=0x00143e; 	T(ADD(ax, material_clrlist_ptr_cpy));	// 42887 add     ax, material_clrlist_ptr_cpy ;~ 1678:143E
cs=0x1678;eip=0x001442; 	X(MOV(*(dw*)(raddr(ss,bp+var_40)), ax));	// 42888 mov     [bp+var_40], ax ;~ 1678:1442
cs=0x1678;eip=0x001445; 	T(MOV(bx, ax));	// 42889 mov     bx, ax ;~ 1678:1445
cs=0x1678;eip=0x001447; 	X(PUSH(*(dw*)(raddr(ds,bx+4))));	// 42890 push    word ptr [bx+4] ;~ 1678:1447
cs=0x1678;eip=0x00144a; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 42891 push    word ptr [bx+2] ;~ 1678:144A
cs=0x1678;eip=0x00144d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 42892 push    [bp+var_8] ;~ 1678:144D
cs=0x1678;eip=0x001450; 	T(MOV(ax, offset(dseg,unk_3dc70)));	// 42893 mov     ax, offset unk_3DC70 ;~ 1678:1450
cs=0x1678;eip=0x001453; 	X(PUSH(ax));	// 42894 push    ax ;~ 1678:1453
cs=0x1678;eip=0x001454; 	T(ax = bp+var_32);	// 42895 lea     ax, [bp+var_32] ;~ 1678:1454
cs=0x1678;eip=0x001457; 	X(PUSH(ax));	// 42896 push    ax ;~ 1678:1457
cs=0x1678;eip=0x001458; 	R(CALLF(prerender_wheel,0));	// 42897 call    preRender_wheel ;~ 1678:1458
cs=0x1678;eip=0x00145d; 	R(JMP(_fill_next_eop10));	// 42898 jmp     short _fill_next_eop10 ;~ 1678:145D
_fill_sphere:
	// 7347 
cs=0x1678;eip=0x001460; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 42903 push    [bp+var_8] ;~ 1678:1460
cs=0x1678;eip=0x001463; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_38))));	// 42904 les     bx, [bp+var_38] ;~ 1678:1463
cs=0x1678;eip=0x001466; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A))));	// 42905 push    word ptr es:[bx+0Ah] ;~ 1678:1466
cs=0x1678;eip=0x00146a; 	X(PUSH(*(dw*)(raddr(es,bx+8))));	// 42906 push    word ptr es:[bx+8] ;~ 1678:146A
cs=0x1678;eip=0x00146e; 	X(PUSH(*(dw*)(raddr(es,bx+6))));	// 42907 push    word ptr es:[bx+6] ;~ 1678:146E
cs=0x1678;eip=0x001472; 	R(CALLF(prerender_sphere,0));	// 42908 call    preRender_sphere ;~ 1678:1472
cs=0x1678;eip=0x001477; 	R(JMP(_fill_next_eop8));	// 42909 jmp     _fill_next_eop8 ;~ 1678:1477
_fill_pixel:
	// 7348 
cs=0x1678;eip=0x00147a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 42913 push    [bp+var_8] ;~ 1678:147A
cs=0x1678;eip=0x00147d; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_38))));	// 42914 les     bx, [bp+var_38] ;~ 1678:147D
cs=0x1678;eip=0x001480; 	X(PUSH(*(dw*)(raddr(es,bx+8))));	// 42915 push    word ptr es:[bx+8] ;~ 1678:1480
cs=0x1678;eip=0x001484; 	X(PUSH(*(dw*)(raddr(es,bx+6))));	// 42916 push    word ptr es:[bx+6] ;~ 1678:1484
cs=0x1678;eip=0x001488; 	R(CALLF(putpixel_single_maybe,0));	// 42917 call    putpixel_single_maybe ;~ 1678:1488
cs=0x1678;eip=0x00148d; 	R(JMP(_fill_next_eop6));	// 42918 jmp     _fill_next_eop6 ;~ 1678:148D
_get_a_poly_info_done:
	// 7349 
cs=0x1678;eip=0x001490; 	X(PUSH(cs));	// 42922 push    cs ;~ 1678:1490
cs=0x1678;eip=0x001491; 	R(CALL(polyinfo_reset,0));	// 42923 call    near ptr polyinfo_reset ;~ 1678:1491
cs=0x1678;eip=0x001494; 	X(POP(si));	// 42924 pop     si ;~ 1678:1494
cs=0x1678;eip=0x001495; 	X(POP(di));	// 42925 pop     di ;~ 1678:1495
cs=0x1678;eip=0x001496; 	T(MOV(sp, bp));	// 42926 mov     sp, bp ;~ 1678:1496
cs=0x1678;eip=0x001498; 	X(POP(bp));	// 42927 pop     bp ;~ 1678:1498
cs=0x1678;eip=0x001499; 	R(RETF(0));	// 42928 retf ;~ 1678:1499
mat_rot_zxy:
	// 42936 
#undef arg_0
#define arg_0 6
	// 42939 arg_0           = word ptr  6 ;~ 1678:149A
#undef arg_2
#define arg_2 8
	// 42940 arg_2           = word ptr  8 ;~ 1678:149A
#undef arg_4
#define arg_4 0x0A
	// 42941 arg_4           = word ptr  0Ah ;~ 1678:149A
#undef arg_6
#define arg_6 0x0C
	// 42942 arg_6           = byte ptr  0Ch ;~ 1678:149A
ret_1678_149a:
	// 7350 
cs=0x1678;eip=0x00149a; 	X(PUSH(bp));	// 42944 push    bp ;~ 1678:149A
cs=0x1678;eip=0x00149b; 	T(MOV(bp, sp));	// 42945 mov     bp, sp ;~ 1678:149B
cs=0x1678;eip=0x00149d; 	T(SUB(sp, 4));	// 42946 sub     sp, 4 ;~ 1678:149D
cs=0x1678;eip=0x0014a0; 	X(PUSH(di));	// 42947 push    di ;~ 1678:14A0
cs=0x1678;eip=0x0014a1; 	X(PUSH(si));	// 42948 push    si ;~ 1678:14A1
cs=0x1678;eip=0x0014a2; 	T(SUB(si, si));	// 42949 sub     si, si ;~ 1678:14A2
cs=0x1678;eip=0x0014a4; 	T(TEST(*(dw*)(raddr(ss,bp+arg_0)), 0x3FF));	// 42950 test    [bp+arg_0], 3FFh ;~ 1678:14A4
cs=0x1678;eip=0x0014a9; 	R(JZ(loc_2621c));	// 42951 jz      short loc_2621C ;~ 1678:14A9
cs=0x1678;eip=0x0014ab; 	T(MOV(si, 4));	// 42952 mov     si, 4 ;~ 1678:14AB
cs=0x1678;eip=0x0014ae; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 42953 push    [bp+arg_0] ;~ 1678:14AE
cs=0x1678;eip=0x0014b1; 	T(MOV(ax, offset(dseg,mat_z_rot)));	// 42954 mov     ax, offset mat_z_rot ;~ 1678:14B1
cs=0x1678;eip=0x0014b4; 	X(PUSH(ax));	// 42955 push    ax ;~ 1678:14B4
cs=0x1678;eip=0x0014b5; 	R(CALLF(mat_rot_z,0));	// 42956 call    mat_rot_z ;~ 1678:14B5
cs=0x1678;eip=0x0014ba; 	T(ADD(sp, si));	// 42957 add     sp, si ;~ 1678:14BA
loc_2621c:
	// 7351 
cs=0x1678;eip=0x0014bc; 	T(TEST(*(dw*)(raddr(ss,bp+arg_2)), 0x3FF));	// 42960 test    [bp+arg_2], 3FFh ;~ 1678:14BC
cs=0x1678;eip=0x0014c1; 	R(JZ(loc_26236));	// 42961 jz      short loc_26236 ;~ 1678:14C1
cs=0x1678;eip=0x0014c3; 	T(OR(si, 2));	// 42962 or      si, 2 ;~ 1678:14C3
cs=0x1678;eip=0x0014c7; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 42963 push    [bp+arg_2] ;~ 1678:14C7
cs=0x1678;eip=0x0014ca; 	T(MOV(ax, offset(dseg,mat_x_rot)));	// 42964 mov     ax, offset mat_x_rot ;~ 1678:14CA
cs=0x1678;eip=0x0014cd; 	X(PUSH(ax));	// 42965 push    ax ;~ 1678:14CD
cs=0x1678;eip=0x0014ce; 	R(CALLF(mat_rot_x,0));	// 42966 call    mat_rot_x ;~ 1678:14CE
cs=0x1678;eip=0x0014d3; 	T(ADD(sp, 4));	// 42967 add     sp, 4 ;~ 1678:14D3
loc_26236:
	// 7352 
cs=0x1678;eip=0x0014d6; 	T(TEST(*(dw*)(raddr(ss,bp+arg_4)), 0x3FF));	// 42970 test    [bp+arg_4], 3FFh ;~ 1678:14D6
cs=0x1678;eip=0x0014db; 	R(JZ(loc_26285));	// 42971 jz      short loc_26285 ;~ 1678:14DB
cs=0x1678;eip=0x0014dd; 	T(OR(si, 1));	// 42972 or      si, 1 ;~ 1678:14DD
cs=0x1678;eip=0x0014e1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 42973 mov     ax, [bp+arg_4] ;~ 1678:14E1
cs=0x1678;eip=0x0014e4; 	T(AND(ah, 3));	// 42974 and     ah, 3 ;~ 1678:14E4
cs=0x1678;eip=0x0014e7; 	T(CMP(ax, mat_y_rot_angle));	// 42975 cmp     ax, mat_y_rot_angle ;~ 1678:14E7
cs=0x1678;eip=0x0014eb; 	R(JNZ(loc_26252));	// 42976 jnz     short loc_26252 ;~ 1678:14EB
loc_2624d:
	// 7353 
cs=0x1678;eip=0x0014ed; 	T(MOV(di, offset(dseg,mat_y_rot)));	// 42979 mov     di, offset mat_y_rot ;~ 1678:14ED
cs=0x1678;eip=0x0014f0; 	R(JMP(loc_26285));	// 42980 jmp     short loc_26285 ;~ 1678:14F0
loc_26252:
	// 7354 
cs=0x1678;eip=0x0014f2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 42984 mov     ax, [bp+arg_4] ;~ 1678:14F2
cs=0x1678;eip=0x0014f5; 	T(AND(ah, 3));	// 42985 and     ah, 3 ;~ 1678:14F5
cs=0x1678;eip=0x0014f8; 	T(CMP(ax, 0x100));	// 42986 cmp     ax, 100h ;~ 1678:14F8
cs=0x1678;eip=0x0014fb; 	R(JZ(loc_26282));	// 42987 jz      short loc_26282 ;~ 1678:14FB
cs=0x1678;eip=0x0014fd; 	T(CMP(ax, 0x200));	// 42988 cmp     ax, 200h ;~ 1678:14FD
cs=0x1678;eip=0x001500; 	R(JZ(loc_26298));	// 42989 jz      short loc_26298 ;~ 1678:1500
cs=0x1678;eip=0x001502; 	T(CMP(ax, 0x300));	// 42990 cmp     ax, 300h ;~ 1678:1502
cs=0x1678;eip=0x001505; 	R(JZ(loc_2629e));	// 42991 jz      short loc_2629E ;~ 1678:1505
cs=0x1678;eip=0x001507; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 42992 push    [bp+arg_4] ;~ 1678:1507
cs=0x1678;eip=0x00150a; 	T(MOV(ax, offset(dseg,mat_y_rot)));	// 42993 mov     ax, offset mat_y_rot ;~ 1678:150A
cs=0x1678;eip=0x00150d; 	X(PUSH(ax));	// 42994 push    ax ;~ 1678:150D
cs=0x1678;eip=0x00150e; 	R(CALLF(mat_rot_y,0));	// 42995 call    mat_rot_y ;~ 1678:150E
cs=0x1678;eip=0x001513; 	T(ADD(sp, 4));	// 42996 add     sp, 4 ;~ 1678:1513
cs=0x1678;eip=0x001516; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 42997 mov     ax, [bp+arg_4] ;~ 1678:1516
cs=0x1678;eip=0x001519; 	T(AND(ah, 3));	// 42998 and     ah, 3 ;~ 1678:1519
cs=0x1678;eip=0x00151c; 	X(MOV(mat_y_rot_angle, ax));	// 42999 mov     mat_y_rot_angle, ax ;~ 1678:151C
cs=0x1678;eip=0x00151f; 	R(JMP(loc_2624d));	// 43000 jmp     short loc_2624D ;~ 1678:151F
loc_26282:
	// 7355 
cs=0x1678;eip=0x001522; 	T(MOV(di, offset(dseg,mat_y100)));	// 43005 mov     di, offset mat_y100 ;~ 1678:1522
loc_26285:
	// 7356 
cs=0x1678;eip=0x001525; 	T(MOV(ax, si));	// 43009 mov     ax, si ;~ 1678:1525
cs=0x1678;eip=0x001527; 	T(CMP(ax, 7));	// 43010 cmp     ax, 7           ; switch 8 cases ;~ 1678:1527
cs=0x1678;eip=0x00152a; 	R(JBE(loc_2628f));	// 43011 jbe     short loc_2628F ;~ 1678:152A
cs=0x1678;eip=0x00152c; 	R(JMP(def_26292));	// 43012 jmp     def_26292       ; jumptable 00026292 default case, case 1 ;~ 1678:152C
loc_2628f:
	// 7357 
cs=0x1678;eip=0x00152f; 	T(ADD(ax, ax));	// 43016 add     ax, ax ;~ 1678:152F
cs=0x1678;eip=0x001531; 	T(XCHG(ax, bx));	// 43017 xchg    ax, bx ;~ 1678:1531
cs=0x1678;eip=0x001532; __disp=*(dw*)(raddr(cs,m2c::krotzxy_offset+bx));
	R(JMP(__dispatch_call));	// 43018 jmp     word ptr cs:rotZXY_offset[bx] ; switch jump ;~ 1678:1532
loc_26298:
	// 7358 
cs=0x1678;eip=0x001538; 	T(MOV(di, offset(dseg,mat_y200)));	// 43023 mov     di, offset mat_y200 ;~ 1678:1538
cs=0x1678;eip=0x00153b; 	R(JMP(loc_26285));	// 43024 jmp     short loc_26285 ;~ 1678:153B
loc_2629e:
	// 7359 
cs=0x1678;eip=0x00153e; 	T(MOV(di, offset(dseg,mat_y300)));	// 43029 mov     di, offset mat_y300 ;~ 1678:153E
cs=0x1678;eip=0x001541; 	R(JMP(loc_26285));	// 43030 jmp     short loc_26285 ;~ 1678:1541
loc_262a4:
	// 7360 
cs=0x1678;eip=0x001544; 	T(MOV(di, offset(dseg,mat_y0)));	// 43036 mov     di, offset mat_y0 ; jumptable 00026292 case 0 ;~ 1678:1544
cs=0x1678;eip=0x001547; 	R(JMP(def_26292));	// 43037 jmp     def_26292       ; jumptable 00026292 default case, case 1 ;~ 1678:1547
loc_262aa:
	// 7361 
cs=0x1678;eip=0x00154a; 	T(TEST(*(raddr(ss,bp+arg_6)), 1));	// 43042 test    [bp+arg_6], 1   ; jumptable 00026292 case 3 ;~ 1678:154A
cs=0x1678;eip=0x00154e; 	R(JZ(loc_262bc));	// 43043 jz      short loc_262BC ;~ 1678:154E
cs=0x1678;eip=0x001550; 	T(MOV(ax, offset(dseg,mat_rot_temp)));	// 43044 mov     ax, offset mat_rot_temp ;~ 1678:1550
cs=0x1678;eip=0x001553; 	X(PUSH(ax));	// 43045 push    ax ;~ 1678:1553
cs=0x1678;eip=0x001554; 	T(MOV(ax, offset(dseg,mat_x_rot)));	// 43046 mov     ax, offset mat_x_rot ;~ 1678:1554
loc_262b7:
	// 7362 
cs=0x1678;eip=0x001557; 	X(PUSH(ax));	// 43049 push    ax ;~ 1678:1557
cs=0x1678;eip=0x001558; 	X(PUSH(di));	// 43050 push    di ;~ 1678:1558
cs=0x1678;eip=0x001559; 	R(JMP(loc_262c5));	// 43051 jmp     short loc_262C5 ;~ 1678:1559
loc_262bc:
	// 7363 
cs=0x1678;eip=0x00155c; 	T(MOV(ax, offset(dseg,mat_rot_temp)));	// 43056 mov     ax, offset mat_rot_temp ;~ 1678:155C
cs=0x1678;eip=0x00155f; 	X(PUSH(ax));	// 43057 push    ax ;~ 1678:155F
cs=0x1678;eip=0x001560; 	X(PUSH(di));	// 43058 push    di ;~ 1678:1560
loc_262c1:
	// 7364 
cs=0x1678;eip=0x001561; 	T(MOV(ax, offset(dseg,mat_x_rot)));	// 43061 mov     ax, offset mat_x_rot ;~ 1678:1561
loc_262c4:
	// 7365 
cs=0x1678;eip=0x001564; 	X(PUSH(ax));	// 43064 push    ax ;~ 1678:1564
loc_262c5:
	// 7366 
cs=0x1678;eip=0x001565; 	R(CALLF(mat_multiply,0));	// 43067 call    mat_multiply ;~ 1678:1565
cs=0x1678;eip=0x00156a; 	T(ADD(sp, 6));	// 43068 add     sp, 6 ;~ 1678:156A
cs=0x1678;eip=0x00156d; 	T(MOV(di, offset(dseg,mat_rot_temp)));	// 43069 mov     di, offset mat_rot_temp ;~ 1678:156D
cs=0x1678;eip=0x001570; 	R(JMP(def_26292));	// 43070 jmp     def_26292       ; jumptable 00026292 default case, case 1 ;~ 1678:1570
loc_262d4:
	// 7367 
cs=0x1678;eip=0x001574; 	T(TEST(*(raddr(ss,bp+arg_6)), 1));	// 43076 test    [bp+arg_6], 1   ; jumptable 00026292 case 5 ;~ 1678:1574
cs=0x1678;eip=0x001578; 	R(JZ(loc_262e4));	// 43077 jz      short loc_262E4 ;~ 1678:1578
cs=0x1678;eip=0x00157a; 	T(MOV(ax, offset(dseg,mat_rot_temp)));	// 43078 mov     ax, offset mat_rot_temp ;~ 1678:157A
cs=0x1678;eip=0x00157d; 	X(PUSH(ax));	// 43079 push    ax ;~ 1678:157D
cs=0x1678;eip=0x00157e; 	T(MOV(ax, offset(dseg,mat_z_rot)));	// 43080 mov     ax, offset mat_z_rot ;~ 1678:157E
cs=0x1678;eip=0x001581; 	R(JMP(loc_262b7));	// 43081 jmp     short loc_262B7 ;~ 1678:1581
loc_262e4:
	// 7368 
cs=0x1678;eip=0x001584; 	T(MOV(ax, offset(dseg,mat_rot_temp)));	// 43086 mov     ax, offset mat_rot_temp ;~ 1678:1584
cs=0x1678;eip=0x001587; 	X(PUSH(ax));	// 43087 push    ax ;~ 1678:1587
cs=0x1678;eip=0x001588; 	X(PUSH(di));	// 43088 push    di ;~ 1678:1588
loc_262e9:
	// 7369 
cs=0x1678;eip=0x001589; 	T(MOV(ax, offset(dseg,mat_z_rot)));	// 43091 mov     ax, offset mat_z_rot ;~ 1678:1589
cs=0x1678;eip=0x00158c; 	R(JMP(loc_262c4));	// 43092 jmp     short loc_262C4 ;~ 1678:158C
loc_262ee:
	// 7370 
cs=0x1678;eip=0x00158e; 	T(TEST(*(raddr(ss,bp+arg_6)), 1));	// 43097 test    [bp+arg_6], 1   ; jumptable 00026292 case 6 ;~ 1678:158E
cs=0x1678;eip=0x001592; 	R(JZ(loc_262fe));	// 43098 jz      short loc_262FE ;~ 1678:1592
cs=0x1678;eip=0x001594; 	T(MOV(ax, offset(dseg,mat_rot_temp)));	// 43099 mov     ax, offset mat_rot_temp ;~ 1678:1594
cs=0x1678;eip=0x001597; 	X(PUSH(ax));	// 43100 push    ax ;~ 1678:1597
cs=0x1678;eip=0x001598; 	T(MOV(ax, offset(dseg,mat_z_rot)));	// 43101 mov     ax, offset mat_z_rot ;~ 1678:1598
cs=0x1678;eip=0x00159b; 	X(PUSH(ax));	// 43102 push    ax ;~ 1678:159B
cs=0x1678;eip=0x00159c; 	R(JMP(loc_262c1));	// 43103 jmp     short loc_262C1 ;~ 1678:159C
loc_262fe:
	// 7371 
cs=0x1678;eip=0x00159e; 	T(MOV(ax, offset(dseg,mat_rot_temp)));	// 43107 mov     ax, offset mat_rot_temp ;~ 1678:159E
cs=0x1678;eip=0x0015a1; 	X(PUSH(ax));	// 43108 push    ax ;~ 1678:15A1
cs=0x1678;eip=0x0015a2; 	T(MOV(ax, offset(dseg,mat_x_rot)));	// 43109 mov     ax, offset mat_x_rot ;~ 1678:15A2
cs=0x1678;eip=0x0015a5; 	X(PUSH(ax));	// 43110 push    ax ;~ 1678:15A5
cs=0x1678;eip=0x0015a6; 	R(JMP(loc_262e9));	// 43111 jmp     short loc_262E9 ;~ 1678:15A6
loc_26308:
	// 7372 
cs=0x1678;eip=0x0015a8; 	T(TEST(*(raddr(ss,bp+arg_6)), 1));	// 43116 test    [bp+arg_6], 1   ; jumptable 00026292 case 7 ;~ 1678:15A8
cs=0x1678;eip=0x0015ac; 	R(JZ(loc_26338));	// 43117 jz      short loc_26338 ;~ 1678:15AC
cs=0x1678;eip=0x0015ae; 	T(MOV(ax, offset(dseg,mat_rot_temp)));	// 43118 mov     ax, offset mat_rot_temp ;~ 1678:15AE
cs=0x1678;eip=0x0015b1; 	X(PUSH(ax));	// 43119 push    ax ;~ 1678:15B1
cs=0x1678;eip=0x0015b2; 	T(MOV(ax, offset(dseg,mat_x_rot)));	// 43120 mov     ax, offset mat_x_rot ;~ 1678:15B2
cs=0x1678;eip=0x0015b5; 	X(PUSH(ax));	// 43121 push    ax ;~ 1678:15B5
cs=0x1678;eip=0x0015b6; 	X(PUSH(di));	// 43122 push    di ;~ 1678:15B6
cs=0x1678;eip=0x0015b7; 	R(CALLF(mat_multiply,0));	// 43123 call    mat_multiply ;~ 1678:15B7
cs=0x1678;eip=0x0015bc; 	T(ADD(sp, 6));	// 43124 add     sp, 6 ;~ 1678:15BC
cs=0x1678;eip=0x0015bf; 	T(MOV(ax, offset(dseg,mat_x_rot)));	// 43125 mov     ax, offset mat_x_rot ;~ 1678:15BF
cs=0x1678;eip=0x0015c2; 	X(PUSH(ax));	// 43126 push    ax ;~ 1678:15C2
cs=0x1678;eip=0x0015c3; 	T(MOV(ax, offset(dseg,mat_z_rot)));	// 43127 mov     ax, offset mat_z_rot ;~ 1678:15C3
cs=0x1678;eip=0x0015c6; 	X(PUSH(ax));	// 43128 push    ax ;~ 1678:15C6
cs=0x1678;eip=0x0015c7; 	T(MOV(ax, offset(dseg,mat_rot_temp)));	// 43129 mov     ax, offset mat_rot_temp ;~ 1678:15C7
cs=0x1678;eip=0x0015ca; 	X(PUSH(ax));	// 43130 push    ax ;~ 1678:15CA
cs=0x1678;eip=0x0015cb; 	R(CALLF(mat_multiply,0));	// 43131 call    mat_multiply ;~ 1678:15CB
cs=0x1678;eip=0x0015d0; 	T(ADD(sp, 6));	// 43132 add     sp, 6 ;~ 1678:15D0
loc_26333:
	// 7373 
cs=0x1678;eip=0x0015d3; 	T(MOV(di, offset(dseg,mat_x_rot)));	// 43136 mov     di, offset mat_x_rot ; jumptable 00026292 case 2 ;~ 1678:15D3
cs=0x1678;eip=0x0015d6; 	R(JMP(def_26292));	// 43137 jmp     short def_26292 ; jumptable 00026292 default case, case 1 ;~ 1678:15D6
loc_26338:
	// 7374 
cs=0x1678;eip=0x0015d8; 	T(MOV(ax, offset(dseg,mat_rot_temp)));	// 43141 mov     ax, offset mat_rot_temp ;~ 1678:15D8
cs=0x1678;eip=0x0015db; 	X(PUSH(ax));	// 43142 push    ax ;~ 1678:15DB
cs=0x1678;eip=0x0015dc; 	T(MOV(ax, offset(dseg,mat_x_rot)));	// 43143 mov     ax, offset mat_x_rot ;~ 1678:15DC
cs=0x1678;eip=0x0015df; 	X(PUSH(ax));	// 43144 push    ax ;~ 1678:15DF
cs=0x1678;eip=0x0015e0; 	T(MOV(ax, offset(dseg,mat_z_rot)));	// 43145 mov     ax, offset mat_z_rot ;~ 1678:15E0
cs=0x1678;eip=0x0015e3; 	X(PUSH(ax));	// 43146 push    ax ;~ 1678:15E3
cs=0x1678;eip=0x0015e4; 	R(CALLF(mat_multiply,0));	// 43147 call    mat_multiply ;~ 1678:15E4
cs=0x1678;eip=0x0015e9; 	T(ADD(sp, 6));	// 43148 add     sp, 6 ;~ 1678:15E9
cs=0x1678;eip=0x0015ec; 	T(MOV(ax, offset(dseg,mat_z_rot)));	// 43149 mov     ax, offset mat_z_rot ;~ 1678:15EC
cs=0x1678;eip=0x0015ef; 	X(PUSH(ax));	// 43150 push    ax ;~ 1678:15EF
cs=0x1678;eip=0x0015f0; 	X(PUSH(di));	// 43151 push    di ;~ 1678:15F0
cs=0x1678;eip=0x0015f1; 	T(MOV(ax, offset(dseg,mat_rot_temp)));	// 43152 mov     ax, offset mat_rot_temp ;~ 1678:15F1
cs=0x1678;eip=0x0015f4; 	X(PUSH(ax));	// 43153 push    ax ;~ 1678:15F4
cs=0x1678;eip=0x0015f5; 	R(CALLF(mat_multiply,0));	// 43154 call    mat_multiply ;~ 1678:15F5
cs=0x1678;eip=0x0015fa; 	T(ADD(sp, 6));	// 43155 add     sp, 6 ;~ 1678:15FA
loc_2635d:
	// 7375 
cs=0x1678;eip=0x0015fd; 	T(MOV(di, offset(dseg,mat_z_rot)));	// 43159 mov     di, offset mat_z_rot ; jumptable 00026292 case 4 ;~ 1678:15FD
cs=0x1678;eip=0x001600; 	R(JMP(def_26292));	// 43160 jmp     short def_26292 ; jumptable 00026292 default case, case 1 ;~ 1678:1600
rotzxy_offset:
	// 7376 
def_26292:
	// 7377 
cs=0x1678;eip=0x001612; 	T(MOV(ax, di));	// 43175 mov     ax, di          ; jumptable 00026292 default case, case 1 ;~ 1678:1612
cs=0x1678;eip=0x001614; 	X(POP(si));	// 43176 pop     si ;~ 1678:1614
cs=0x1678;eip=0x001615; 	X(POP(di));	// 43177 pop     di ;~ 1678:1615
cs=0x1678;eip=0x001616; 	T(MOV(sp, bp));	// 43178 mov     sp, bp ;~ 1678:1616
cs=0x1678;eip=0x001618; 	X(POP(bp));	// 43179 pop     bp ;~ 1678:1618
cs=0x1678;eip=0x001619; 	R(RETF(0));	// 43180 retf ;~ 1678:1619
rect_adjust_from_point:
	// 43188 
#undef var_6
#define var_6 -6
	// 43191 var_6           = word ptr -6 ;~ 1678:161A
#undef arg_0
#define arg_0 6
	// 43192 arg_0           = word ptr  6 ;~ 1678:161A
#undef arg_2
#define arg_2 8
	// 43193 arg_2           = word ptr  8 ;~ 1678:161A
ret_1678_161a:
	// 7378 
cs=0x1678;eip=0x00161a; 	X(PUSH(bp));	// 43195 push    bp ;~ 1678:161A
cs=0x1678;eip=0x00161b; 	T(MOV(bp, sp));	// 43196 mov     bp, sp ;~ 1678:161B
cs=0x1678;eip=0x00161d; 	T(SUB(sp, 6));	// 43197 sub     sp, 6 ;~ 1678:161D
cs=0x1678;eip=0x001620; 	X(PUSH(di));	// 43198 push    di ;~ 1678:1620
cs=0x1678;eip=0x001621; 	X(PUSH(si));	// 43199 push    si ;~ 1678:1621
cs=0x1678;eip=0x001622; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 43200 mov     bx, [bp+arg_0] ;~ 1678:1622
cs=0x1678;eip=0x001625; 	T(MOV(si, *(dw*)(raddr(ds,bx))));	// 43201 mov     si, [bx] ;~ 1678:1625
cs=0x1678;eip=0x001627; 	T(MOV(di, *(dw*)(raddr(ds,bx+2))));	// 43202 mov     di, [bx+2] ;~ 1678:1627
cs=0x1678;eip=0x00162a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 43203 mov     bx, [bp+arg_2] ;~ 1678:162A
cs=0x1678;eip=0x00162d; 	T(CMP(*(dw*)(raddr(ds,bx+0)), si));	// 43204 cmp     [bx+0], si ;~ 1678:162D
cs=0x1678;eip=0x00162f; 	R(JLE(loc_26393));	// 43205 jle     short loc_26393 ;~ 1678:162F
cs=0x1678;eip=0x001631; 	X(MOV(*(dw*)(raddr(ds,bx+0)), si));	// 43206 mov     [bx+0], si ;~ 1678:1631
loc_26393:
	// 7379 
cs=0x1678;eip=0x001633; 	T(ax = si+1);	// 43209 lea     ax, [si+1] ;~ 1678:1633
cs=0x1678;eip=0x001636; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 43210 mov     [bp+var_6], ax ;~ 1678:1636
cs=0x1678;eip=0x001639; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 43211 mov     bx, [bp+arg_2] ;~ 1678:1639
cs=0x1678;eip=0x00163c; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 43212 cmp     [bx+2], ax ;~ 1678:163C
cs=0x1678;eip=0x00163f; 	R(JGE(loc_263a4));	// 43213 jge     short loc_263A4 ;~ 1678:163F
cs=0x1678;eip=0x001641; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 43214 mov     [bx+2], ax ;~ 1678:1641
loc_263a4:
	// 7380 
cs=0x1678;eip=0x001644; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 43217 mov     bx, [bp+arg_2] ;~ 1678:1644
cs=0x1678;eip=0x001647; 	T(CMP(*(dw*)(raddr(ds,bx+4)), di));	// 43218 cmp     [bx+4], di ;~ 1678:1647
cs=0x1678;eip=0x00164a; 	R(JLE(loc_263af));	// 43219 jle     short loc_263AF ;~ 1678:164A
cs=0x1678;eip=0x00164c; 	X(MOV(*(dw*)(raddr(ds,bx+4)), di));	// 43220 mov     [bx+4], di ;~ 1678:164C
loc_263af:
	// 7381 
cs=0x1678;eip=0x00164f; 	T(ax = di+1);	// 43223 lea     ax, [di+1] ;~ 1678:164F
cs=0x1678;eip=0x001652; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 43224 mov     [bp+var_6], ax ;~ 1678:1652
cs=0x1678;eip=0x001655; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 43225 mov     bx, [bp+arg_2] ;~ 1678:1655
cs=0x1678;eip=0x001658; 	T(CMP(*(dw*)(raddr(ds,bx+6)), ax));	// 43226 cmp     [bx+6], ax ;~ 1678:1658
cs=0x1678;eip=0x00165b; 	R(JGE(loc_263c0));	// 43227 jge     short loc_263C0 ;~ 1678:165B
cs=0x1678;eip=0x00165d; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 43228 mov     [bx+6], ax ;~ 1678:165D
loc_263c0:
	// 7382 
cs=0x1678;eip=0x001660; 	X(POP(si));	// 43231 pop     si ;~ 1678:1660
cs=0x1678;eip=0x001661; 	X(POP(di));	// 43232 pop     di ;~ 1678:1661
cs=0x1678;eip=0x001662; 	T(MOV(sp, bp));	// 43233 mov     sp, bp ;~ 1678:1662
cs=0x1678;eip=0x001664; 	X(POP(bp));	// 43234 pop     bp ;~ 1678:1664
cs=0x1678;eip=0x001665; 	R(RETF(0));	// 43235 retf ;~ 1678:1665
vector_op_unk2:
	// 43243 
#undef var_e
#define var_e -0x0E
	// 43245 var_E           = word ptr -0Eh ;~ 1678:1666
#undef var_c
#define var_c -0x0C
	// 43246 var_C           = word ptr -0Ch ;~ 1678:1666
#undef var_a
#define var_a -0x0A
	// 43247 var_A           = byte ptr -0Ah ;~ 1678:1666
#undef var_8
#define var_8 -8
	// 43248 var_8           = word ptr -8 ;~ 1678:1666
#undef var_6
#define var_6 -6
	// 43249 var_6           = word ptr -6 ;~ 1678:1666
#undef var_4
#define var_4 -4
	// 43250 var_4           = word ptr -4 ;~ 1678:1666
#undef var_2
#define var_2 -2
	// 43251 var_2           = word ptr -2 ;~ 1678:1666
#undef arg_0
#define arg_0 6
	// 43252 arg_0           = word ptr  6 ;~ 1678:1666
ret_1678_1666:
	// 7383 
cs=0x1678;eip=0x001666; 	X(PUSH(bp));	// 43254 push    bp ;~ 1678:1666
cs=0x1678;eip=0x001667; 	T(MOV(bp, sp));	// 43255 mov     bp, sp ;~ 1678:1667
cs=0x1678;eip=0x001669; 	T(SUB(sp, 0x0E));	// 43256 sub     sp, 0Eh ;~ 1678:1669
cs=0x1678;eip=0x00166c; 	X(PUSH(di));	// 43257 push    di ;~ 1678:166C
cs=0x1678;eip=0x00166d; 	X(PUSH(si));	// 43258 push    si ;~ 1678:166D
cs=0x1678;eip=0x00166e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 43259 mov     bx, [bp+arg_0] ;~ 1678:166E
cs=0x1678;eip=0x001671; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 43260 push    word ptr [bx+2] ; int ;~ 1678:1671
cs=0x1678;eip=0x001674; 	R(CALLF(_abs,0));	// 43261 call    _abs ;~ 1678:1674
cs=0x1678;eip=0x001679; 	T(ADD(sp, 2));	// 43262 add     sp, 2 ;~ 1678:1679
cs=0x1678;eip=0x00167c; 	T(CWD);	// 43263 cwd ;~ 1678:167C
cs=0x1678;eip=0x00167d; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 43264 mov     [bp+var_E], ax ;~ 1678:167D
cs=0x1678;eip=0x001680; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), dx));	// 43265 mov     [bp+var_C], dx ;~ 1678:1680
cs=0x1678;eip=0x001683; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 43266 mov     bx, [bp+arg_0] ;~ 1678:1683
cs=0x1678;eip=0x001686; 	X(PUSH(*(dw*)(raddr(ds,bx+4))));	// 43267 push    word ptr [bx+4] ; int ;~ 1678:1686
cs=0x1678;eip=0x001689; 	R(CALLF(_abs,0));	// 43268 call    _abs ;~ 1678:1689
cs=0x1678;eip=0x00168e; 	T(ADD(sp, 2));	// 43269 add     sp, 2 ;~ 1678:168E
cs=0x1678;eip=0x001691; 	X(PUSH(ax));	// 43270 push    ax ;~ 1678:1691
cs=0x1678;eip=0x001692; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 43271 mov     bx, [bp+arg_0] ;~ 1678:1692
cs=0x1678;eip=0x001695; 	X(PUSH(*(dw*)(raddr(ds,bx+0))));	// 43272 push    word ptr [bx+0] ; int ;~ 1678:1695
cs=0x1678;eip=0x001697; 	R(CALLF(_abs,0));	// 43273 call    _abs ;~ 1678:1697
cs=0x1678;eip=0x00169c; 	T(ADD(sp, 2));	// 43274 add     sp, 2 ;~ 1678:169C
cs=0x1678;eip=0x00169f; 	X(PUSH(ax));	// 43275 push    ax ;~ 1678:169F
cs=0x1678;eip=0x0016a0; 	R(CALLF(polarradius2d,0));	// 43276 call    polarRadius2D ;~ 1678:16A0
cs=0x1678;eip=0x0016a5; 	T(ADD(sp, 4));	// 43277 add     sp, 4 ;~ 1678:16A5
cs=0x1678;eip=0x0016a8; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 43278 mov     [bp+var_4], ax ;~ 1678:16A8
cs=0x1678;eip=0x0016ab; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 43279 mov     [bp+var_2], 0 ;~ 1678:16AB
cs=0x1678;eip=0x0016b0; 	T(MOV(ax, sin80));	// 43280 mov     ax, sin80 ;~ 1678:16B0
cs=0x1678;eip=0x0016b3; 	T(MOV(dx, word_4188a));	// 43281 mov     dx, word_4188A ;~ 1678:16B3
cs=0x1678;eip=0x0016b7; 	T(CMP(cos80, ax));	// 43282 cmp     cos80, ax ;~ 1678:16B7
cs=0x1678;eip=0x0016bb; 	R(JNZ(loc_2643a));	// 43283 jnz     short loc_2643A ;~ 1678:16BB
cs=0x1678;eip=0x0016bd; 	T(CMP(word_41886, dx));	// 43284 cmp     word_41886, dx ;~ 1678:16BD
cs=0x1678;eip=0x0016c1; 	R(JNZ(loc_2643a));	// 43285 jnz     short loc_2643A ;~ 1678:16C1
cs=0x1678;eip=0x0016c3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 43286 mov     ax, [bp+var_E] ;~ 1678:16C3
cs=0x1678;eip=0x0016c6; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_c))));	// 43287 mov     dx, [bp+var_C] ;~ 1678:16C6
cs=0x1678;eip=0x0016c9; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), dx));	// 43288 cmp     [bp+var_2], dx ;~ 1678:16C9
cs=0x1678;eip=0x0016cc; 	R(JG(loc_2646e));	// 43289 jg      short loc_2646E ;~ 1678:16CC
cs=0x1678;eip=0x0016ce; 	R(JL(loc_26435));	// 43290 jl      short loc_26435 ;~ 1678:16CE
cs=0x1678;eip=0x0016d0; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), ax));	// 43291 cmp     [bp+var_4], ax ;~ 1678:16D0
cs=0x1678;eip=0x0016d3; 	R(JNC(loc_2646e));	// 43292 jnb     short loc_2646E ;~ 1678:16D3
loc_26435:
	// 7384 
cs=0x1678;eip=0x0016d5; 	T(MOV(ax, 1));	// 43296 mov     ax, 1 ;~ 1678:16D5
cs=0x1678;eip=0x0016d8; 	R(JMP(loc_26470));	// 43297 jmp     short loc_26470 ;~ 1678:16D8
loc_2643a:
	// 7385 
cs=0x1678;eip=0x0016da; 	X(PUSH(word_4188a));	// 43302 push    word_4188A ;~ 1678:16DA
cs=0x1678;eip=0x0016de; 	X(PUSH(sin80));	// 43303 push    sin80 ;~ 1678:16DE
cs=0x1678;eip=0x0016e2; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 43304 push    [bp+var_C] ;~ 1678:16E2
cs=0x1678;eip=0x0016e5; 	X(PUSH(*(dw*)(raddr(ss,bp+var_e))));	// 43305 push    [bp+var_E] ;~ 1678:16E5
cs=0x1678;eip=0x0016e8; 	R(CALLF(__aflmul,0));	// 43306 call    __aFlmul ;~ 1678:16E8
cs=0x1678;eip=0x0016ed; 	X(PUSH(word_41886));	// 43307 push    word_41886 ;~ 1678:16ED
cs=0x1678;eip=0x0016f1; 	X(PUSH(cos80));	// 43308 push    cos80 ;~ 1678:16F1
cs=0x1678;eip=0x0016f5; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 43309 push    [bp+var_2] ;~ 1678:16F5
cs=0x1678;eip=0x0016f8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 43310 push    [bp+var_4] ;~ 1678:16F8
cs=0x1678;eip=0x0016fb; 	T(MOV(si, ax));	// 43311 mov     si, ax ;~ 1678:16FB
cs=0x1678;eip=0x0016fd; 	T(MOV(di, dx));	// 43312 mov     di, dx ;~ 1678:16FD
cs=0x1678;eip=0x0016ff; 	R(CALLF(__aflmul,0));	// 43313 call    __aFlmul ;~ 1678:16FF
cs=0x1678;eip=0x001704; 	T(CMP(dx, di));	// 43314 cmp     dx, di ;~ 1678:1704
cs=0x1678;eip=0x001706; 	R(JG(loc_2646e));	// 43315 jg      short loc_2646E ;~ 1678:1706
cs=0x1678;eip=0x001708; 	R(JL(loc_26435));	// 43316 jl      short loc_26435 ;~ 1678:1708
cs=0x1678;eip=0x00170a; 	T(CMP(ax, si));	// 43317 cmp     ax, si ;~ 1678:170A
cs=0x1678;eip=0x00170c; 	R(JC(loc_26435));	// 43318 jb      short loc_26435 ;~ 1678:170C
loc_2646e:
	// 7386 
cs=0x1678;eip=0x00170e; 	T(SUB(ax, ax));	// 43322 sub     ax, ax ;~ 1678:170E
loc_26470:
	// 7387 
cs=0x1678;eip=0x001710; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 43325 mov     [bp+var_8], ax ;~ 1678:1710
cs=0x1678;eip=0x001713; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 43326 mov     bx, [bp+arg_0] ;~ 1678:1713
cs=0x1678;eip=0x001716; 	T(CMP(*(dw*)(raddr(ds,bx+2)), 0));	// 43327 cmp     word ptr [bx+2], 0 ;~ 1678:1716
cs=0x1678;eip=0x00171a; 	R(JGE(loc_2648a));	// 43328 jge     short loc_2648A ;~ 1678:171A
cs=0x1678;eip=0x00171c; 	T(OR(ax, ax));	// 43329 or      ax, ax ;~ 1678:171C
cs=0x1678;eip=0x00171e; 	R(JZ(loc_264a0));	// 43330 jz      short loc_264A0 ;~ 1678:171E
cs=0x1678;eip=0x001720; 	T(MOV(ax, 0x1E));	// 43331 mov     ax, 1Eh ;~ 1678:1720
cs=0x1678;eip=0x001723; 	X(POP(si));	// 43332 pop     si ;~ 1678:1723
cs=0x1678;eip=0x001724; 	X(POP(di));	// 43333 pop     di ;~ 1678:1724
cs=0x1678;eip=0x001725; 	T(MOV(sp, bp));	// 43334 mov     sp, bp ;~ 1678:1725
cs=0x1678;eip=0x001727; 	X(POP(bp));	// 43335 pop     bp ;~ 1678:1727
cs=0x1678;eip=0x001728; 	R(RETF(0));	// 43336 retf ;~ 1678:1728
loc_2648a:
	// 7388 
cs=0x1678;eip=0x00172a; 	T(CMP(*(dw*)(raddr(ds,bx+2)), 0));	// 43341 cmp     word ptr [bx+2], 0 ;~ 1678:172A
cs=0x1678;eip=0x00172e; 	R(JLE(loc_264a0));	// 43342 jle     short loc_264A0 ;~ 1678:172E
cs=0x1678;eip=0x001730; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0));	// 43343 cmp     [bp+var_8], 0 ;~ 1678:1730
cs=0x1678;eip=0x001734; 	R(JZ(loc_264a0));	// 43344 jz      short loc_264A0 ;~ 1678:1734
cs=0x1678;eip=0x001736; 	T(MOV(ax, 0x1F));	// 43345 mov     ax, 1Fh ;~ 1678:1736
cs=0x1678;eip=0x001739; 	X(POP(si));	// 43346 pop     si ;~ 1678:1739
cs=0x1678;eip=0x00173a; 	X(POP(di));	// 43347 pop     di ;~ 1678:173A
cs=0x1678;eip=0x00173b; 	T(MOV(sp, bp));	// 43348 mov     sp, bp ;~ 1678:173B
cs=0x1678;eip=0x00173d; 	X(POP(bp));	// 43349 pop     bp ;~ 1678:173D
cs=0x1678;eip=0x00173e; 	R(RETF(0));	// 43350 retf ;~ 1678:173E
loc_264a0:
	// 7389 
cs=0x1678;eip=0x001740; 	T(CMP(*(dw*)(raddr(ds,bx+2)), 0));	// 43356 cmp     word ptr [bx+2], 0 ;~ 1678:1740
cs=0x1678;eip=0x001744; 	R(JLE(loc_264ac));	// 43357 jle     short loc_264AC ;~ 1678:1744
cs=0x1678;eip=0x001746; 	X(MOV(*(raddr(ss,bp+var_a)), 0x0F));	// 43358 mov     [bp+var_A], 0Fh ;~ 1678:1746
cs=0x1678;eip=0x00174a; 	R(JMP(loc_264b0));	// 43359 jmp     short loc_264B0 ;~ 1678:174A
loc_264ac:
	// 7390 
cs=0x1678;eip=0x00174c; 	X(MOV(*(raddr(ss,bp+var_a)), 0));	// 43363 mov     [bp+var_A], 0 ;~ 1678:174C
loc_264b0:
	// 7391 
cs=0x1678;eip=0x001750; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 43366 mov     ax, [bx+0] ;~ 1678:1750
cs=0x1678;eip=0x001752; 	T(NEG(ax));	// 43367 neg     ax ;~ 1678:1752
cs=0x1678;eip=0x001754; 	X(PUSH(ax));	// 43368 push    ax ;~ 1678:1754
cs=0x1678;eip=0x001755; 	X(PUSH(*(dw*)(raddr(ds,bx+4))));	// 43369 push    word ptr [bx+4] ;~ 1678:1755
cs=0x1678;eip=0x001758; 	R(CALLF(polarangle,0));	// 43370 call    polarAngle ;~ 1678:1758
cs=0x1678;eip=0x00175d; 	T(ADD(sp, 4));	// 43371 add     sp, 4 ;~ 1678:175D
cs=0x1678;eip=0x001760; 	T(NEG(ax));	// 43372 neg     ax ;~ 1678:1760
cs=0x1678;eip=0x001762; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 43373 mov     [bp+var_6], ax ;~ 1678:1762
cs=0x1678;eip=0x001765; 	T(OR(ax, ax));	// 43374 or      ax, ax ;~ 1678:1765
cs=0x1678;eip=0x001767; 	R(JGE(loc_264cd));	// 43375 jge     short loc_264CD ;~ 1678:1767
cs=0x1678;eip=0x001769; 	X(ADD(*(db*)(raddr(ss,bp+var_6+1)), 4));	// 43376 add     byte ptr [bp+var_6+1], 4 ;~ 1678:1769
loc_264cd:
	// 7392 
cs=0x1678;eip=0x00176d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 43379 mov     ax, [bp+var_6] ;~ 1678:176D
cs=0x1678;eip=0x001770; 	T(CWD);	// 43380 cwd ;~ 1678:1770
cs=0x1678;eip=0x001771; 	T(MOV(cx, ax));	// 43381 mov     cx, ax ;~ 1678:1771
cs=0x1678;eip=0x001773; 	T(MOV(bx, dx));	// 43382 mov     bx, dx ;~ 1678:1773
cs=0x1678;eip=0x001775; 	T(SHL(ax, 1));	// 43383 shl     ax, 1 ;~ 1678:1775
cs=0x1678;eip=0x001777; 	T(RCL(dx, 1));	// 43384 rcl     dx, 1 ;~ 1678:1777
cs=0x1678;eip=0x001779; 	T(SHL(ax, 1));	// 43385 shl     ax, 1 ;~ 1678:1779
cs=0x1678;eip=0x00177b; 	T(RCL(dx, 1));	// 43386 rcl     dx, 1 ;~ 1678:177B
cs=0x1678;eip=0x00177d; 	T(SHL(ax, 1));	// 43387 shl     ax, 1 ;~ 1678:177D
cs=0x1678;eip=0x00177f; 	T(RCL(dx, 1));	// 43388 rcl     dx, 1 ;~ 1678:177F
cs=0x1678;eip=0x001781; 	T(SHL(ax, 1));	// 43389 shl     ax, 1 ;~ 1678:1781
cs=0x1678;eip=0x001783; 	T(RCL(dx, 1));	// 43390 rcl     dx, 1 ;~ 1678:1783
cs=0x1678;eip=0x001785; 	T(SUB(ax, cx));	// 43391 sub     ax, cx ;~ 1678:1785
cs=0x1678;eip=0x001787; 	T(SBB(dx, bx));	// 43392 sbb     dx, bx ;~ 1678:1787
cs=0x1678;eip=0x001789; 	T(MOV(cl, 0x0A));	// 43393 mov     cl, 0Ah ;~ 1678:1789
loc_264eb:
	// 7393 
cs=0x1678;eip=0x00178b; 	T(SAR(dx, 1));	// 43396 sar     dx, 1 ;~ 1678:178B
cs=0x1678;eip=0x00178d; 	T(RCR(ax, 1));	// 43397 rcr     ax, 1 ;~ 1678:178D
cs=0x1678;eip=0x00178f; 	T(DEC(cl));	// 43398 dec     cl ;~ 1678:178F
cs=0x1678;eip=0x001791; 	R(JNZ(loc_264eb));	// 43399 jnz     short loc_264EB ;~ 1678:1791
cs=0x1678;eip=0x001793; 	X(ADD(*(raddr(ss,bp+var_a)), al));	// 43400 add     [bp+var_A], al ;~ 1678:1793
cs=0x1678;eip=0x001796; 	T(MOV(al, *(raddr(ss,bp+var_a))));	// 43401 mov     al, [bp+var_A] ;~ 1678:1796
cs=0x1678;eip=0x001799; 	T(CBW);	// 43402 cbw ;~ 1678:1799
cs=0x1678;eip=0x00179a; 	X(POP(si));	// 43403 pop     si ;~ 1678:179A
cs=0x1678;eip=0x00179b; 	X(POP(di));	// 43404 pop     di ;~ 1678:179B
cs=0x1678;eip=0x00179c; 	T(MOV(sp, bp));	// 43405 mov     sp, bp ;~ 1678:179C
cs=0x1678;eip=0x00179e; 	X(POP(bp));	// 43406 pop     bp ;~ 1678:179E
cs=0x1678;eip=0x00179f; 	R(RETF(0));	// 43407 retf ;~ 1678:179F
calc_sincos80:
	// 43414 
cs=0x1678;eip=0x0017a0; 	T(MOV(ax, 0x80));	// 43415 mov     ax, 80h ;~ 1678:17A0
ret_1678_17a3:
	// 7394 
cs=0x1678;eip=0x0017a3; 	X(PUSH(ax));	// 43416 push    ax ;~ 1678:17A3
cs=0x1678;eip=0x0017a4; 	R(CALLF(sin_fast,0));	// 43417 call    sin_fast ;~ 1678:17A4
cs=0x1678;eip=0x0017a9; 	T(ADD(sp, 2));	// 43418 add     sp, 2 ;~ 1678:17A9
cs=0x1678;eip=0x0017ac; 	T(CWD);	// 43419 cwd ;~ 1678:17AC
cs=0x1678;eip=0x0017ad; 	X(MOV(sin80, ax));	// 43420 mov     sin80, ax ;~ 1678:17AD
cs=0x1678;eip=0x0017b0; 	X(MOV(word_4188a, dx));	// 43421 mov     word_4188A, dx ;~ 1678:17B0
cs=0x1678;eip=0x0017b4; 	T(MOV(ax, 0x80));	// 43422 mov     ax, 80h ;~ 1678:17B4
cs=0x1678;eip=0x0017b7; 	X(PUSH(ax));	// 43423 push    ax ;~ 1678:17B7
cs=0x1678;eip=0x0017b8; 	R(CALLF(cos_fast,0));	// 43424 call    cos_fast ;~ 1678:17B8
cs=0x1678;eip=0x0017bd; 	T(ADD(sp, 2));	// 43425 add     sp, 2 ;~ 1678:17BD
cs=0x1678;eip=0x0017c0; 	T(CWD);	// 43426 cwd ;~ 1678:17C0
cs=0x1678;eip=0x0017c1; 	X(MOV(cos80, ax));	// 43427 mov     cos80, ax ;~ 1678:17C1
cs=0x1678;eip=0x0017c4; 	X(MOV(word_41886, dx));	// 43428 mov     word_41886, dx ;~ 1678:17C4
cs=0x1678;eip=0x0017c8; 	T(MOV(ax, 0x80));	// 43429 mov     ax, 80h ;~ 1678:17C8
cs=0x1678;eip=0x0017cb; 	X(PUSH(ax));	// 43430 push    ax ;~ 1678:17CB
cs=0x1678;eip=0x0017cc; 	R(CALLF(sin_fast,0));	// 43431 call    sin_fast ;~ 1678:17CC
cs=0x1678;eip=0x0017d1; 	T(ADD(sp, 2));	// 43432 add     sp, 2 ;~ 1678:17D1
cs=0x1678;eip=0x0017d4; 	T(CWD);	// 43433 cwd ;~ 1678:17D4
cs=0x1678;eip=0x0017d5; 	X(MOV(sin80_2, ax));	// 43434 mov     sin80_2, ax ;~ 1678:17D5
cs=0x1678;eip=0x0017d8; 	X(MOV(word_41892, dx));	// 43435 mov     word_41892, dx ;~ 1678:17D8
cs=0x1678;eip=0x0017dc; 	T(MOV(ax, 0x80));	// 43436 mov     ax, 80h ;~ 1678:17DC
cs=0x1678;eip=0x0017df; 	X(PUSH(ax));	// 43437 push    ax ;~ 1678:17DF
cs=0x1678;eip=0x0017e0; 	R(CALLF(cos_fast,0));	// 43438 call    cos_fast ;~ 1678:17E0
cs=0x1678;eip=0x0017e5; 	T(ADD(sp, 2));	// 43439 add     sp, 2 ;~ 1678:17E5
cs=0x1678;eip=0x0017e8; 	T(CWD);	// 43440 cwd ;~ 1678:17E8
cs=0x1678;eip=0x0017e9; 	X(MOV(cos80_2, ax));	// 43441 mov     cos80_2, ax ;~ 1678:17E9
cs=0x1678;eip=0x0017ec; 	X(MOV(word_4188e, dx));	// 43442 mov     word_4188E, dx ;~ 1678:17EC
cs=0x1678;eip=0x0017f0; 	R(RETF(0));	// 43443 retf ;~ 1678:17F0
nopsub_26552:
	// 43453 
#undef arg_0
#define arg_0 6
	// 43455 arg_0           = word ptr  6 ;~ 1678:17F2
#undef arg_2
#define arg_2 8
	// 43456 arg_2           = word ptr  8 ;~ 1678:17F2
ret_1678_17f2:
	// 7395 
cs=0x1678;eip=0x0017f2; 	X(PUSH(bp));	// 43458 push    bp ;~ 1678:17F2
cs=0x1678;eip=0x0017f3; 	T(MOV(bp, sp));	// 43459 mov     bp, sp ;~ 1678:17F3
cs=0x1678;eip=0x0017f5; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 43460 cmp     [bp+arg_2], 0 ;~ 1678:17F5
cs=0x1678;eip=0x0017f9; 	R(JGE(loc_2656a));	// 43461 jge     short loc_2656A ;~ 1678:17F9
cs=0x1678;eip=0x0017fb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 43462 mov     ax, [bp+arg_0] ;~ 1678:17FB
cs=0x1678;eip=0x0017fe; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 43463 mov     dx, [bp+arg_2] ;~ 1678:17FE
cs=0x1678;eip=0x001801; 	T(NEG(ax));	// 43464 neg     ax ;~ 1678:1801
cs=0x1678;eip=0x001803; 	T(ADC(dx, 0));	// 43465 adc     dx, 0 ;~ 1678:1803
cs=0x1678;eip=0x001806; 	T(NEG(dx));	// 43466 neg     dx ;~ 1678:1806
cs=0x1678;eip=0x001808; 	X(POP(bp));	// 43467 pop     bp ;~ 1678:1808
cs=0x1678;eip=0x001809; 	R(RETF(0));	// 43468 retf ;~ 1678:1809
loc_2656a:
	// 7396 
cs=0x1678;eip=0x00180a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 43472 mov     ax, [bp+arg_0] ;~ 1678:180A
cs=0x1678;eip=0x00180d; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 43473 mov     dx, [bp+arg_2] ;~ 1678:180D
cs=0x1678;eip=0x001810; 	X(POP(bp));	// 43474 pop     bp ;~ 1678:1810
cs=0x1678;eip=0x001811; 	R(RETF(0));	// 43475 retf ;~ 1678:1811
rect_union:
	// 43483 
#undef arg_0
#define arg_0 6
	// 43486 arg_0           = word ptr  6 ;~ 1678:1812
#undef arg_2
#define arg_2 8
	// 43487 arg_2           = word ptr  8 ;~ 1678:1812
#undef arg_4
#define arg_4 0x0A
	// 43488 arg_4           = word ptr  0Ah ;~ 1678:1812
ret_1678_1812:
	// 7397 
cs=0x1678;eip=0x001812; 	X(PUSH(bp));	// 43490 push    bp ;~ 1678:1812
cs=0x1678;eip=0x001813; 	T(MOV(bp, sp));	// 43491 mov     bp, sp ;~ 1678:1813
cs=0x1678;eip=0x001815; 	X(PUSH(si));	// 43492 push    si ;~ 1678:1815
cs=0x1678;eip=0x001816; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 43493 mov     bx, [bp+arg_4] ;~ 1678:1816
cs=0x1678;eip=0x001819; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 43494 mov     si, [bp+arg_0] ;~ 1678:1819
cs=0x1678;eip=0x00181c; 	T(MOV(ax, *(dw*)(raddr(ds,si+0))));	// 43495 mov     ax, [si+0] ;~ 1678:181C
cs=0x1678;eip=0x00181e; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 43496 mov     si, [bp+arg_2] ;~ 1678:181E
cs=0x1678;eip=0x001821; 	T(CMP(ax, *(dw*)(raddr(ds,si+0))));	// 43497 cmp     ax, [si+0] ;~ 1678:1821
cs=0x1678;eip=0x001823; 	R(JLE(loc_26587));	// 43498 jle     short loc_26587 ;~ 1678:1823
cs=0x1678;eip=0x001825; 	T(MOV(ax, *(dw*)(raddr(ds,si+0))));	// 43499 mov     ax, [si+0] ;~ 1678:1825
loc_26587:
	// 7398 
cs=0x1678;eip=0x001827; 	X(MOV(*(dw*)(raddr(ds,bx+0)), ax));	// 43502 mov     [bx+0], ax ;~ 1678:1827
cs=0x1678;eip=0x001829; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 43503 mov     bx, [bp+arg_4] ;~ 1678:1829
cs=0x1678;eip=0x00182c; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 43504 mov     si, [bp+arg_0] ;~ 1678:182C
cs=0x1678;eip=0x00182f; 	T(MOV(ax, *(dw*)(raddr(ds,si+2))));	// 43505 mov     ax, [si+2] ;~ 1678:182F
cs=0x1678;eip=0x001832; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 43506 mov     si, [bp+arg_2] ;~ 1678:1832
cs=0x1678;eip=0x001835; 	T(CMP(ax, *(dw*)(raddr(ds,si+2))));	// 43507 cmp     ax, [si+2] ;~ 1678:1835
cs=0x1678;eip=0x001838; 	R(JGE(loc_2659d));	// 43508 jge     short loc_2659D ;~ 1678:1838
cs=0x1678;eip=0x00183a; 	T(MOV(ax, *(dw*)(raddr(ds,si+2))));	// 43509 mov     ax, [si+2] ;~ 1678:183A
loc_2659d:
	// 7399 
cs=0x1678;eip=0x00183d; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 43512 mov     [bx+2], ax ;~ 1678:183D
cs=0x1678;eip=0x001840; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 43513 mov     bx, [bp+arg_4] ;~ 1678:1840
cs=0x1678;eip=0x001843; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 43514 mov     si, [bp+arg_0] ;~ 1678:1843
cs=0x1678;eip=0x001846; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 43515 mov     ax, [si+4] ;~ 1678:1846
cs=0x1678;eip=0x001849; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 43516 mov     si, [bp+arg_2] ;~ 1678:1849
cs=0x1678;eip=0x00184c; 	T(CMP(ax, *(dw*)(raddr(ds,si+4))));	// 43517 cmp     ax, [si+4] ;~ 1678:184C
cs=0x1678;eip=0x00184f; 	R(JLE(loc_265b4));	// 43518 jle     short loc_265B4 ;~ 1678:184F
cs=0x1678;eip=0x001851; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 43519 mov     ax, [si+4] ;~ 1678:1851
loc_265b4:
	// 7400 
cs=0x1678;eip=0x001854; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 43522 mov     [bx+4], ax ;~ 1678:1854
cs=0x1678;eip=0x001857; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 43523 mov     bx, [bp+arg_4] ;~ 1678:1857
cs=0x1678;eip=0x00185a; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 43524 mov     si, [bp+arg_0] ;~ 1678:185A
cs=0x1678;eip=0x00185d; 	T(MOV(ax, *(dw*)(raddr(ds,si+6))));	// 43525 mov     ax, [si+6] ;~ 1678:185D
cs=0x1678;eip=0x001860; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 43526 mov     si, [bp+arg_2] ;~ 1678:1860
cs=0x1678;eip=0x001863; 	T(CMP(ax, *(dw*)(raddr(ds,si+6))));	// 43527 cmp     ax, [si+6] ;~ 1678:1863
cs=0x1678;eip=0x001866; 	R(JGE(loc_265cb));	// 43528 jge     short loc_265CB ;~ 1678:1866
cs=0x1678;eip=0x001868; 	T(MOV(ax, *(dw*)(raddr(ds,si+6))));	// 43529 mov     ax, [si+6] ;~ 1678:1868
loc_265cb:
	// 7401 
cs=0x1678;eip=0x00186b; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 43532 mov     [bx+6], ax ;~ 1678:186B
cs=0x1678;eip=0x00186e; 	T(CMP(video_flag2_is1, 1));	// 43533 cmp     video_flag2_is1, 1 ;~ 1678:186E
cs=0x1678;eip=0x001873; 	R(JZ(loc_265e9));	// 43534 jz      short loc_265E9 ;~ 1678:1873
cs=0x1678;eip=0x001875; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 43535 mov     bx, [bp+arg_4] ;~ 1678:1875
cs=0x1678;eip=0x001878; 	T(MOV(si, bx));	// 43536 mov     si, bx ;~ 1678:1878
cs=0x1678;eip=0x00187a; 	T(MOV(ax, *(dw*)(raddr(ds,si+2))));	// 43537 mov     ax, [si+2] ;~ 1678:187A
cs=0x1678;eip=0x00187d; 	T(ADD(ax, video_flag2_is1));	// 43538 add     ax, video_flag2_is1 ;~ 1678:187D
cs=0x1678;eip=0x001881; 	T(DEC(ax));	// 43539 dec     ax ;~ 1678:1881
cs=0x1678;eip=0x001882; 	T(AND(ax, video_flag3_isffff));	// 43540 and     ax, video_flag3_isFFFF ;~ 1678:1882
cs=0x1678;eip=0x001886; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 43541 mov     [bx+2], ax ;~ 1678:1886
loc_265e9:
	// 7402 
cs=0x1678;eip=0x001889; 	X(POP(si));	// 43544 pop     si ;~ 1678:1889
cs=0x1678;eip=0x00188a; 	X(POP(bp));	// 43545 pop     bp ;~ 1678:188A
cs=0x1678;eip=0x00188b; 	R(RETF(0));	// 43546 retf ;~ 1678:188B
rect_intersect:
	// 43554 
#undef arg_0
#define arg_0 6
	// 43557 arg_0           = word ptr  6 ;~ 1678:188C
#undef arg_2
#define arg_2 8
	// 43558 arg_2           = word ptr  8 ;~ 1678:188C
ret_1678_188c:
	// 7403 
cs=0x1678;eip=0x00188c; 	X(PUSH(bp));	// 43560 push    bp ;~ 1678:188C
cs=0x1678;eip=0x00188d; 	T(MOV(bp, sp));	// 43561 mov     bp, sp ;~ 1678:188D
cs=0x1678;eip=0x00188f; 	X(PUSH(si));	// 43562 push    si ;~ 1678:188F
cs=0x1678;eip=0x001890; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 43563 mov     bx, [bp+arg_0] ;~ 1678:1890
cs=0x1678;eip=0x001893; 	T(MOV(si, bx));	// 43564 mov     si, bx ;~ 1678:1893
cs=0x1678;eip=0x001895; 	T(MOV(ax, *(dw*)(raddr(ds,si+0))));	// 43565 mov     ax, [si+0] ;~ 1678:1895
cs=0x1678;eip=0x001897; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 43566 cmp     [bx+2], ax ;~ 1678:1897
cs=0x1678;eip=0x00189a; 	R(JGE(loc_26602));	// 43567 jge     short loc_26602 ;~ 1678:189A
loc_265fc:
	// 7404 
cs=0x1678;eip=0x00189c; 	T(MOV(ax, 1));	// 43571 mov     ax, 1 ;~ 1678:189C
cs=0x1678;eip=0x00189f; 	X(POP(si));	// 43572 pop     si ;~ 1678:189F
cs=0x1678;eip=0x0018a0; 	X(POP(bp));	// 43573 pop     bp ;~ 1678:18A0
cs=0x1678;eip=0x0018a1; 	R(RETF(0));	// 43574 retf ;~ 1678:18A1
loc_26602:
	// 7405 
cs=0x1678;eip=0x0018a2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 43578 mov     bx, [bp+arg_2] ;~ 1678:18A2
cs=0x1678;eip=0x0018a5; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 43579 mov     si, [bp+arg_0] ;~ 1678:18A5
cs=0x1678;eip=0x0018a8; 	T(MOV(ax, *(dw*)(raddr(ds,si+0))));	// 43580 mov     ax, [si+0] ;~ 1678:18A8
cs=0x1678;eip=0x0018aa; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 43581 cmp     [bx+2], ax ;~ 1678:18AA
cs=0x1678;eip=0x0018ad; 	R(JLE(loc_265fc));	// 43582 jle     short loc_265FC ;~ 1678:18AD
cs=0x1678;eip=0x0018af; 	T(MOV(bx, si));	// 43583 mov     bx, si ;~ 1678:18AF
cs=0x1678;eip=0x0018b1; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 43584 mov     si, [bp+arg_2] ;~ 1678:18B1
cs=0x1678;eip=0x0018b4; 	T(MOV(ax, *(dw*)(raddr(ds,si+0))));	// 43585 mov     ax, [si+0] ;~ 1678:18B4
cs=0x1678;eip=0x0018b6; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 43586 cmp     [bx+2], ax ;~ 1678:18B6
cs=0x1678;eip=0x0018b9; 	R(JLE(loc_265fc));	// 43587 jle     short loc_265FC ;~ 1678:18B9
cs=0x1678;eip=0x0018bb; 	T(MOV(ax, *(dw*)(raddr(ds,si+6))));	// 43588 mov     ax, [si+6] ;~ 1678:18BB
cs=0x1678;eip=0x0018be; 	T(CMP(*(dw*)(raddr(ds,bx+4)), ax));	// 43589 cmp     [bx+4], ax ;~ 1678:18BE
cs=0x1678;eip=0x0018c1; 	R(JGE(loc_265fc));	// 43590 jge     short loc_265FC ;~ 1678:18C1
cs=0x1678;eip=0x0018c3; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 43591 mov     ax, [si+4] ;~ 1678:18C3
cs=0x1678;eip=0x0018c6; 	T(CMP(*(dw*)(raddr(ds,bx+6)), ax));	// 43592 cmp     [bx+6], ax ;~ 1678:18C6
cs=0x1678;eip=0x0018c9; 	R(JLE(loc_265fc));	// 43593 jle     short loc_265FC ;~ 1678:18C9
cs=0x1678;eip=0x0018cb; 	T(MOV(bx, si));	// 43594 mov     bx, si ;~ 1678:18CB
cs=0x1678;eip=0x0018cd; 	T(MOV(si, *(dw*)(raddr(ds,bx+0))));	// 43595 mov     si, [bx+0] ;~ 1678:18CD
cs=0x1678;eip=0x0018cf; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 43596 mov     bx, [bp+arg_0] ;~ 1678:18CF
cs=0x1678;eip=0x0018d2; 	T(CMP(*(dw*)(raddr(ds,bx+0)), si));	// 43597 cmp     [bx+0], si ;~ 1678:18D2
cs=0x1678;eip=0x0018d4; 	R(JGE(loc_26638));	// 43598 jge     short loc_26638 ;~ 1678:18D4
cs=0x1678;eip=0x0018d6; 	X(MOV(*(dw*)(raddr(ds,bx+0)), si));	// 43599 mov     [bx+0], si ;~ 1678:18D6
loc_26638:
	// 7406 
cs=0x1678;eip=0x0018d8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 43602 mov     bx, [bp+arg_0] ;~ 1678:18D8
cs=0x1678;eip=0x0018db; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 43603 mov     si, [bp+arg_2] ;~ 1678:18DB
cs=0x1678;eip=0x0018de; 	T(MOV(ax, *(dw*)(raddr(ds,si+2))));	// 43604 mov     ax, [si+2] ;~ 1678:18DE
cs=0x1678;eip=0x0018e1; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 43605 cmp     [bx+2], ax ;~ 1678:18E1
cs=0x1678;eip=0x0018e4; 	R(JLE(loc_26649));	// 43606 jle     short loc_26649 ;~ 1678:18E4
cs=0x1678;eip=0x0018e6; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 43607 mov     [bx+2], ax ;~ 1678:18E6
loc_26649:
	// 7407 
cs=0x1678;eip=0x0018e9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 43610 mov     bx, [bp+arg_0] ;~ 1678:18E9
cs=0x1678;eip=0x0018ec; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 43611 mov     si, [bp+arg_2] ;~ 1678:18EC
cs=0x1678;eip=0x0018ef; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 43612 mov     ax, [si+4] ;~ 1678:18EF
cs=0x1678;eip=0x0018f2; 	T(CMP(*(dw*)(raddr(ds,bx+4)), ax));	// 43613 cmp     [bx+4], ax ;~ 1678:18F2
cs=0x1678;eip=0x0018f5; 	R(JGE(loc_2665a));	// 43614 jge     short loc_2665A ;~ 1678:18F5
cs=0x1678;eip=0x0018f7; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 43615 mov     [bx+4], ax ;~ 1678:18F7
loc_2665a:
	// 7408 
cs=0x1678;eip=0x0018fa; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 43618 mov     bx, [bp+arg_0] ;~ 1678:18FA
cs=0x1678;eip=0x0018fd; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 43619 mov     si, [bp+arg_2] ;~ 1678:18FD
cs=0x1678;eip=0x001900; 	T(MOV(ax, *(dw*)(raddr(ds,si+6))));	// 43620 mov     ax, [si+6] ;~ 1678:1900
cs=0x1678;eip=0x001903; 	T(CMP(*(dw*)(raddr(ds,bx+6)), ax));	// 43621 cmp     [bx+6], ax ;~ 1678:1903
cs=0x1678;eip=0x001906; 	R(JLE(loc_2666b));	// 43622 jle     short loc_2666B ;~ 1678:1906
cs=0x1678;eip=0x001908; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 43623 mov     [bx+6], ax ;~ 1678:1908
loc_2666b:
	// 7409 
cs=0x1678;eip=0x00190b; 	T(SUB(ax, ax));	// 43626 sub     ax, ax ;~ 1678:190B
cs=0x1678;eip=0x00190d; 	X(POP(si));	// 43627 pop     si ;~ 1678:190D
cs=0x1678;eip=0x00190e; 	X(POP(bp));	// 43628 pop     bp ;~ 1678:190E
cs=0x1678;eip=0x00190f; 	R(RETF(0));	// 43629 retf ;~ 1678:190F
rectlist_add_rect:
	// 43637 
#undef var_22
#define var_22 -0x22
	// 43640 var_22          = byte ptr -22h ;~ 1678:1910
#undef var_20
#define var_20 -0x20
	// 43641 var_20          = byte ptr -20h ;~ 1678:1910
#undef var_1a
#define var_1a -0x1A
	// 43642 var_1A          = word ptr -1Ah ;~ 1678:1910
#undef var_18
#define var_18 -0x18
	// 43643 var_18          = byte ptr -18h ;~ 1678:1910
#undef var_16
#define var_16 -0x16
	// 43644 var_16          = word ptr -16h ;~ 1678:1910
#undef var_14
#define var_14 -0x14
	// 43645 var_14          = byte ptr -14h ;~ 1678:1910
#undef var_12
#define var_12 -0x12
	// 43646 var_12          = byte ptr -12h ;~ 1678:1910
#undef var_10
#define var_10 -0x10
	// 43647 var_10          = word ptr -10h ;~ 1678:1910
#undef var_e
#define var_e -0x0E
	// 43648 var_E           = word ptr -0Eh ;~ 1678:1910
#undef var_c
#define var_c -0x0C
	// 43649 var_C           = word ptr -0Ch ;~ 1678:1910
#undef var_a
#define var_a -0x0A
	// 43650 var_A           = word ptr -0Ah ;~ 1678:1910
#undef var_8
#define var_8 -8
	// 43651 var_8           = byte ptr -8 ;~ 1678:1910
#undef var_4
#define var_4 -4
	// 43652 var_4           = word ptr -4 ;~ 1678:1910
#undef arg_0
#define arg_0 6
	// 43653 arg_0           = word ptr  6 ;~ 1678:1910
#undef arg_2
#define arg_2 8
	// 43654 arg_2           = word ptr  8 ;~ 1678:1910
#undef arg_4
#define arg_4 0x0A
	// 43655 arg_4           = word ptr  0Ah ;~ 1678:1910
ret_1678_1910:
	// 7410 
cs=0x1678;eip=0x001910; 	X(PUSH(bp));	// 43657 push    bp ;~ 1678:1910
cs=0x1678;eip=0x001911; 	T(MOV(bp, sp));	// 43658 mov     bp, sp ;~ 1678:1911
cs=0x1678;eip=0x001913; 	T(SUB(sp, 0x22));	// 43659 sub     sp, 22h ;~ 1678:1913
cs=0x1678;eip=0x001916; 	X(PUSH(di));	// 43660 push    di ;~ 1678:1916
cs=0x1678;eip=0x001917; 	X(PUSH(si));	// 43661 push    si ;~ 1678:1917
cs=0x1678;eip=0x001918; 	T(CMP(video_flag2_is1, 1));	// 43662 cmp     video_flag2_is1, 1 ;~ 1678:1918
cs=0x1678;eip=0x00191d; 	R(JZ(loc_26693));	// 43663 jz      short loc_26693 ;~ 1678:191D
cs=0x1678;eip=0x00191f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 43664 mov     bx, [bp+arg_4] ;~ 1678:191F
cs=0x1678;eip=0x001922; 	T(MOV(si, bx));	// 43665 mov     si, bx ;~ 1678:1922
cs=0x1678;eip=0x001924; 	T(MOV(ax, *(dw*)(raddr(ds,si+2))));	// 43666 mov     ax, [si+2] ;~ 1678:1924
cs=0x1678;eip=0x001927; 	T(ADD(ax, video_flag2_is1));	// 43667 add     ax, video_flag2_is1 ;~ 1678:1927
cs=0x1678;eip=0x00192b; 	T(DEC(ax));	// 43668 dec     ax ;~ 1678:192B
cs=0x1678;eip=0x00192c; 	T(AND(ax, video_flag3_isffff));	// 43669 and     ax, video_flag3_isFFFF ;~ 1678:192C
cs=0x1678;eip=0x001930; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 43670 mov     [bx+2], ax ;~ 1678:1930
loc_26693:
	// 7411 
cs=0x1678;eip=0x001933; 	X(MOV(*(raddr(ss,bp+var_14)), 0));	// 43673 mov     [bp+var_14], 0 ;~ 1678:1933
cs=0x1678;eip=0x001937; 	R(JMP(loc_266c9));	// 43674 jmp     short loc_266C9 ;~ 1678:1937
loc_2669a:
	// 7412 
cs=0x1678;eip=0x00193a; 	T(MOV(di, si));	// 43679 mov     di, si ;~ 1678:193A
cs=0x1678;eip=0x00193c; 	T(MOV(cl, 3));	// 43680 mov     cl, 3 ;~ 1678:193C
cs=0x1678;eip=0x00193e; 	T(SHL(di, cl));	// 43681 shl     di, cl ;~ 1678:193E
cs=0x1678;eip=0x001940; 	T(ADD(di, *(dw*)(raddr(ss,bp+arg_2))));	// 43682 add     di, [bp+arg_2] ;~ 1678:1940
cs=0x1678;eip=0x001943; 	X(PUSH(si));	// 43683 push    si ;~ 1678:1943
cs=0x1678;eip=0x001944; 	X(PUSH(di));	// 43684 push    di ;~ 1678:1944
cs=0x1678;eip=0x001945; 	T(si = di+8);	// 43685 lea     si, [di+8] ;~ 1678:1945
cs=0x1678;eip=0x001948; 	X(PUSH(ds));	// 43686 push    ds ;~ 1678:1948
cs=0x1678;eip=0x001949; 	X(POP(es));	// 43687 pop     es ;~ 1678:1949
cs=0x1678;eip=0x00194a; 	X(MOVSW);	// 43689 movsw ;~ 1678:194A
cs=0x1678;eip=0x00194b; 	X(MOVSW);	// 43690 movsw ;~ 1678:194B
cs=0x1678;eip=0x00194c; 	X(MOVSW);	// 43691 movsw ;~ 1678:194C
cs=0x1678;eip=0x00194d; 	X(MOVSW);	// 43692 movsw ;~ 1678:194D
cs=0x1678;eip=0x00194e; 	X(POP(di));	// 43693 pop     di ;~ 1678:194E
cs=0x1678;eip=0x00194f; 	X(POP(si));	// 43694 pop     si ;~ 1678:194F
cs=0x1678;eip=0x001950; 	X(INC(*(raddr(ss,bp+var_12))));	// 43695 inc     [bp+var_12] ;~ 1678:1950
loc_266b3:
	// 7413 
cs=0x1678;eip=0x001953; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 43698 mov     al, [bp+var_12] ;~ 1678:1953
cs=0x1678;eip=0x001956; 	T(CBW);	// 43699 cbw ;~ 1678:1956
cs=0x1678;eip=0x001957; 	T(MOV(si, ax));	// 43700 mov     si, ax ;~ 1678:1957
cs=0x1678;eip=0x001959; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 43701 mov     bx, [bp+arg_0] ;~ 1678:1959
cs=0x1678;eip=0x00195c; 	T(MOV(al, *(raddr(ds,bx))));	// 43702 mov     al, [bx] ;~ 1678:195C
cs=0x1678;eip=0x00195e; 	T(CBW);	// 43703 cbw ;~ 1678:195E
cs=0x1678;eip=0x00195f; 	T(DEC(ax));	// 43704 dec     ax ;~ 1678:195F
cs=0x1678;eip=0x001960; 	T(CMP(ax, si));	// 43705 cmp     ax, si ;~ 1678:1960
cs=0x1678;eip=0x001962; 	R(JG(loc_2669a));	// 43706 jg      short loc_2669A ;~ 1678:1962
cs=0x1678;eip=0x001964; 	X(DEC(*(raddr(ds,bx))));	// 43707 dec     byte ptr [bx] ;~ 1678:1964
loc_266c6:
	// 7414 
cs=0x1678;eip=0x001966; 	X(INC(*(raddr(ss,bp+var_14))));	// 43710 inc     [bp+var_14] ;~ 1678:1966
loc_266c9:
	// 7415 
cs=0x1678;eip=0x001969; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 43713 mov     bx, [bp+arg_0] ;~ 1678:1969
cs=0x1678;eip=0x00196c; 	T(MOV(al, *(raddr(ss,bp+var_14))));	// 43714 mov     al, [bp+var_14] ;~ 1678:196C
cs=0x1678;eip=0x00196f; 	T(CMP(*(raddr(ds,bx)), al));	// 43715 cmp     [bx], al ;~ 1678:196F
cs=0x1678;eip=0x001971; 	R(JG(loc_266d6));	// 43716 jg      short loc_266D6 ;~ 1678:1971
cs=0x1678;eip=0x001973; 	R(JMP(loc_26880));	// 43717 jmp     loc_26880 ;~ 1678:1973
loc_266d6:
	// 7416 
cs=0x1678;eip=0x001976; 	T(CBW);	// 43721 cbw ;~ 1678:1976
cs=0x1678;eip=0x001977; 	T(MOV(cl, 3));	// 43722 mov     cl, 3 ;~ 1678:1977
cs=0x1678;eip=0x001979; 	T(SHL(ax, cl));	// 43723 shl     ax, cl ;~ 1678:1979
cs=0x1678;eip=0x00197b; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 43724 add     ax, [bp+arg_2] ;~ 1678:197B
cs=0x1678;eip=0x00197e; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 43725 mov     [bp+var_16], ax ;~ 1678:197E
cs=0x1678;eip=0x001981; 	X(PUSH(ax));	// 43726 push    ax ;~ 1678:1981
cs=0x1678;eip=0x001982; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 43727 push    [bp+arg_4] ;~ 1678:1982
cs=0x1678;eip=0x001985; 	X(PUSH(cs));	// 43728 push    cs ;~ 1678:1985
cs=0x1678;eip=0x001986; 	R(CALL(rect_is_overlapping,0));	// 43729 call    near ptr rect_is_overlapping ;~ 1678:1986
cs=0x1678;eip=0x001989; 	T(ADD(sp, 4));	// 43730 add     sp, 4 ;~ 1678:1989
cs=0x1678;eip=0x00198c; 	T(OR(al, al));	// 43731 or      al, al ;~ 1678:198C
cs=0x1678;eip=0x00198e; 	R(JZ(loc_266c6));	// 43732 jz      short loc_266C6 ;~ 1678:198E
cs=0x1678;eip=0x001990; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 43733 push    [bp+var_16] ;~ 1678:1990
cs=0x1678;eip=0x001993; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 43734 push    [bp+arg_4] ;~ 1678:1993
cs=0x1678;eip=0x001996; 	X(PUSH(cs));	// 43735 push    cs ;~ 1678:1996
cs=0x1678;eip=0x001997; 	R(CALL(rect_is_inside,0));	// 43736 call    near ptr rect_is_inside ;~ 1678:1997
cs=0x1678;eip=0x00199a; 	T(ADD(sp, 4));	// 43737 add     sp, 4 ;~ 1678:199A
cs=0x1678;eip=0x00199d; 	T(OR(al, al));	// 43738 or      al, al ;~ 1678:199D
cs=0x1678;eip=0x00199f; 	R(JZ(loc_26704));	// 43739 jz      short loc_26704 ;~ 1678:199F
cs=0x1678;eip=0x0019a1; 	R(JMP(loc_26957));	// 43740 jmp     loc_26957 ;~ 1678:19A1
loc_26704:
	// 7417 
cs=0x1678;eip=0x0019a4; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 43744 push    [bp+arg_4] ;~ 1678:19A4
cs=0x1678;eip=0x0019a7; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 43745 push    [bp+var_16] ;~ 1678:19A7
cs=0x1678;eip=0x0019aa; 	X(PUSH(cs));	// 43746 push    cs ;~ 1678:19AA
cs=0x1678;eip=0x0019ab; 	R(CALL(rect_is_inside,0));	// 43747 call    near ptr rect_is_inside ;~ 1678:19AB
cs=0x1678;eip=0x0019ae; 	T(ADD(sp, 4));	// 43748 add     sp, 4 ;~ 1678:19AE
cs=0x1678;eip=0x0019b1; 	T(OR(al, al));	// 43749 or      al, al ;~ 1678:19B1
cs=0x1678;eip=0x0019b3; 	R(JZ(loc_2671e));	// 43750 jz      short loc_2671E ;~ 1678:19B3
cs=0x1678;eip=0x0019b5; 	T(MOV(al, *(raddr(ss,bp+var_14))));	// 43751 mov     al, [bp+var_14] ;~ 1678:19B5
cs=0x1678;eip=0x0019b8; 	X(MOV(*(raddr(ss,bp+var_12)), al));	// 43752 mov     [bp+var_12], al ;~ 1678:19B8
cs=0x1678;eip=0x0019bb; 	R(JMP(loc_266b3));	// 43753 jmp     short loc_266B3 ;~ 1678:19BB
loc_2671e:
	// 7418 
cs=0x1678;eip=0x0019be; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_16))));	// 43758 mov     ax, [bp+var_16] ;~ 1678:19BE
cs=0x1678;eip=0x0019c1; 	T(di = bp+var_10);	// 43759 lea     di, [bp+var_10] ;~ 1678:19C1
cs=0x1678;eip=0x0019c4; 	T(MOV(si, ax));	// 43760 mov     si, ax ;~ 1678:19C4
cs=0x1678;eip=0x0019c6; 	X(PUSH(ss));	// 43761 push    ss ;~ 1678:19C6
cs=0x1678;eip=0x0019c7; 	X(POP(es));	// 43762 pop     es ;~ 1678:19C7
cs=0x1678;eip=0x0019c8; 	X(MOVSW);	// 43764 movsw ;~ 1678:19C8
cs=0x1678;eip=0x0019c9; 	X(MOVSW);	// 43765 movsw ;~ 1678:19C9
cs=0x1678;eip=0x0019ca; 	X(MOVSW);	// 43766 movsw ;~ 1678:19CA
cs=0x1678;eip=0x0019cb; 	X(MOVSW);	// 43767 movsw ;~ 1678:19CB
cs=0x1678;eip=0x0019cc; 	T(MOV(bx, ax));	// 43768 mov     bx, ax ;~ 1678:19CC
cs=0x1678;eip=0x0019ce; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 43769 mov     si, [bp+arg_4] ;~ 1678:19CE
cs=0x1678;eip=0x0019d1; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 43770 mov     ax, [si+4] ;~ 1678:19D1
cs=0x1678;eip=0x0019d4; 	T(CMP(*(dw*)(raddr(ds,bx+4)), ax));	// 43771 cmp     [bx+4], ax ;~ 1678:19D4
cs=0x1678;eip=0x0019d7; 	R(JGE(loc_2675a));	// 43772 jge     short loc_2675A ;~ 1678:19D7
cs=0x1678;eip=0x0019d9; 	T(MOV(ax, bx));	// 43773 mov     ax, bx ;~ 1678:19D9
cs=0x1678;eip=0x0019db; 	T(di = bp+var_20);	// 43774 lea     di, [bp+var_20] ;~ 1678:19DB
cs=0x1678;eip=0x0019de; 	T(MOV(si, ax));	// 43775 mov     si, ax ;~ 1678:19DE
cs=0x1678;eip=0x0019e0; 	X(MOVSW);	// 43776 movsw ;~ 1678:19E0
cs=0x1678;eip=0x0019e1; 	X(MOVSW);	// 43777 movsw ;~ 1678:19E1
cs=0x1678;eip=0x0019e2; 	X(MOVSW);	// 43778 movsw ;~ 1678:19E2
cs=0x1678;eip=0x0019e3; 	X(MOVSW);	// 43779 movsw ;~ 1678:19E3
cs=0x1678;eip=0x0019e4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 43780 mov     bx, [bp+arg_4] ;~ 1678:19E4
cs=0x1678;eip=0x0019e7; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 43781 mov     ax, [bx+4] ;~ 1678:19E7
cs=0x1678;eip=0x0019ea; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), ax));	// 43782 mov     [bp+var_1A], ax ;~ 1678:19EA
cs=0x1678;eip=0x0019ed; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 43783 mov     ax, [bx+4] ;~ 1678:19ED
cs=0x1678;eip=0x0019f0; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 43784 mov     [bp+var_C], ax ;~ 1678:19F0
loc_26753:
	// 7419 
cs=0x1678;eip=0x0019f3; 	X(MOV(*(raddr(ss,bp+var_18)), 1));	// 43787 mov     [bp+var_18], 1 ;~ 1678:19F3
cs=0x1678;eip=0x0019f7; 	R(JMP(loc_26784));	// 43788 jmp     short loc_26784 ;~ 1678:19F7
loc_2675a:
	// 7420 
cs=0x1678;eip=0x0019fa; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 43793 mov     bx, [bp+arg_4] ;~ 1678:19FA
cs=0x1678;eip=0x0019fd; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_16))));	// 43794 mov     si, [bp+var_16] ;~ 1678:19FD
cs=0x1678;eip=0x001a00; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 43795 mov     ax, [si+4] ;~ 1678:1A00
cs=0x1678;eip=0x001a03; 	T(CMP(*(dw*)(raddr(ds,bx+4)), ax));	// 43796 cmp     [bx+4], ax ;~ 1678:1A03
cs=0x1678;eip=0x001a06; 	R(JGE(loc_26780));	// 43797 jge     short loc_26780 ;~ 1678:1A06
cs=0x1678;eip=0x001a08; 	T(MOV(ax, bx));	// 43798 mov     ax, bx ;~ 1678:1A08
cs=0x1678;eip=0x001a0a; 	T(di = bp+var_20);	// 43799 lea     di, [bp+var_20] ;~ 1678:1A0A
cs=0x1678;eip=0x001a0d; 	T(MOV(si, ax));	// 43800 mov     si, ax ;~ 1678:1A0D
cs=0x1678;eip=0x001a0f; 	X(PUSH(ss));	// 43801 push    ss ;~ 1678:1A0F
cs=0x1678;eip=0x001a10; 	X(POP(es));	// 43802 pop     es ;~ 1678:1A10
cs=0x1678;eip=0x001a11; 	X(MOVSW);	// 43803 movsw ;~ 1678:1A11
cs=0x1678;eip=0x001a12; 	X(MOVSW);	// 43804 movsw ;~ 1678:1A12
cs=0x1678;eip=0x001a13; 	X(MOVSW);	// 43805 movsw ;~ 1678:1A13
cs=0x1678;eip=0x001a14; 	X(MOVSW);	// 43806 movsw ;~ 1678:1A14
cs=0x1678;eip=0x001a15; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_16))));	// 43807 mov     bx, [bp+var_16] ;~ 1678:1A15
cs=0x1678;eip=0x001a18; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 43808 mov     ax, [bx+4] ;~ 1678:1A18
cs=0x1678;eip=0x001a1b; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), ax));	// 43809 mov     [bp+var_1A], ax ;~ 1678:1A1B
cs=0x1678;eip=0x001a1e; 	R(JMP(loc_26753));	// 43810 jmp     short loc_26753 ;~ 1678:1A1E
loc_26780:
	// 7421 
cs=0x1678;eip=0x001a20; 	X(MOV(*(raddr(ss,bp+var_18)), 0));	// 43814 mov     [bp+var_18], 0 ;~ 1678:1A20
loc_26784:
	// 7422 
cs=0x1678;eip=0x001a24; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_16))));	// 43817 mov     bx, [bp+var_16] ;~ 1678:1A24
cs=0x1678;eip=0x001a27; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 43818 mov     si, [bp+arg_4] ;~ 1678:1A27
cs=0x1678;eip=0x001a2a; 	T(MOV(ax, *(dw*)(raddr(ds,si+6))));	// 43819 mov     ax, [si+6] ;~ 1678:1A2A
cs=0x1678;eip=0x001a2d; 	T(CMP(*(dw*)(raddr(ds,bx+6)), ax));	// 43820 cmp     [bx+6], ax ;~ 1678:1A2D
cs=0x1678;eip=0x001a30; 	R(JLE(loc_267b4));	// 43821 jle     short loc_267B4 ;~ 1678:1A30
cs=0x1678;eip=0x001a32; 	T(MOV(ax, bx));	// 43822 mov     ax, bx ;~ 1678:1A32
cs=0x1678;eip=0x001a34; 	T(di = bp+var_8);	// 43823 lea     di, [bp+var_8] ;~ 1678:1A34
cs=0x1678;eip=0x001a37; 	T(MOV(si, ax));	// 43824 mov     si, ax ;~ 1678:1A37
cs=0x1678;eip=0x001a39; 	X(PUSH(ss));	// 43825 push    ss ;~ 1678:1A39
cs=0x1678;eip=0x001a3a; 	X(POP(es));	// 43826 pop     es ;~ 1678:1A3A
cs=0x1678;eip=0x001a3b; 	X(MOVSW);	// 43827 movsw ;~ 1678:1A3B
cs=0x1678;eip=0x001a3c; 	X(MOVSW);	// 43828 movsw ;~ 1678:1A3C
cs=0x1678;eip=0x001a3d; 	X(MOVSW);	// 43829 movsw ;~ 1678:1A3D
cs=0x1678;eip=0x001a3e; 	X(MOVSW);	// 43830 movsw ;~ 1678:1A3E
cs=0x1678;eip=0x001a3f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 43831 mov     bx, [bp+arg_4] ;~ 1678:1A3F
cs=0x1678;eip=0x001a42; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 43832 mov     ax, [bx+6] ;~ 1678:1A42
cs=0x1678;eip=0x001a45; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 43833 mov     [bp+var_4], ax ;~ 1678:1A45
cs=0x1678;eip=0x001a48; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 43834 mov     ax, [bx+6] ;~ 1678:1A48
cs=0x1678;eip=0x001a4b; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 43835 mov     [bp+var_A], ax ;~ 1678:1A4B
loc_267ae:
	// 7423 
cs=0x1678;eip=0x001a4e; 	X(MOV(*(raddr(ss,bp+var_22)), 1));	// 43838 mov     [bp+var_22], 1 ;~ 1678:1A4E
cs=0x1678;eip=0x001a52; 	R(JMP(loc_267de));	// 43839 jmp     short loc_267DE ;~ 1678:1A52
loc_267b4:
	// 7424 
cs=0x1678;eip=0x001a54; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 43843 mov     bx, [bp+arg_4] ;~ 1678:1A54
cs=0x1678;eip=0x001a57; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_16))));	// 43844 mov     si, [bp+var_16] ;~ 1678:1A57
cs=0x1678;eip=0x001a5a; 	T(MOV(ax, *(dw*)(raddr(ds,si+6))));	// 43845 mov     ax, [si+6] ;~ 1678:1A5A
cs=0x1678;eip=0x001a5d; 	T(CMP(*(dw*)(raddr(ds,bx+6)), ax));	// 43846 cmp     [bx+6], ax ;~ 1678:1A5D
cs=0x1678;eip=0x001a60; 	R(JLE(loc_267da));	// 43847 jle     short loc_267DA ;~ 1678:1A60
cs=0x1678;eip=0x001a62; 	T(MOV(ax, bx));	// 43848 mov     ax, bx ;~ 1678:1A62
cs=0x1678;eip=0x001a64; 	T(di = bp+var_8);	// 43849 lea     di, [bp+var_8] ;~ 1678:1A64
cs=0x1678;eip=0x001a67; 	T(MOV(si, ax));	// 43850 mov     si, ax ;~ 1678:1A67
cs=0x1678;eip=0x001a69; 	X(PUSH(ss));	// 43851 push    ss ;~ 1678:1A69
cs=0x1678;eip=0x001a6a; 	X(POP(es));	// 43852 pop     es ;~ 1678:1A6A
cs=0x1678;eip=0x001a6b; 	X(MOVSW);	// 43853 movsw ;~ 1678:1A6B
cs=0x1678;eip=0x001a6c; 	X(MOVSW);	// 43854 movsw ;~ 1678:1A6C
cs=0x1678;eip=0x001a6d; 	X(MOVSW);	// 43855 movsw ;~ 1678:1A6D
cs=0x1678;eip=0x001a6e; 	X(MOVSW);	// 43856 movsw ;~ 1678:1A6E
cs=0x1678;eip=0x001a6f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_16))));	// 43857 mov     bx, [bp+var_16] ;~ 1678:1A6F
cs=0x1678;eip=0x001a72; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 43858 mov     ax, [bx+6] ;~ 1678:1A72
cs=0x1678;eip=0x001a75; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 43859 mov     [bp+var_4], ax ;~ 1678:1A75
cs=0x1678;eip=0x001a78; 	R(JMP(loc_267ae));	// 43860 jmp     short loc_267AE ;~ 1678:1A78
loc_267da:
	// 7425 
cs=0x1678;eip=0x001a7a; 	X(MOV(*(raddr(ss,bp+var_22)), 0));	// 43864 mov     [bp+var_22], 0 ;~ 1678:1A7A
loc_267de:
	// 7426 
cs=0x1678;eip=0x001a7e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 43867 mov     bx, [bp+arg_4] ;~ 1678:1A7E
cs=0x1678;eip=0x001a81; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 43868 mov     ax, [bx+0] ;~ 1678:1A81
cs=0x1678;eip=0x001a83; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_16))));	// 43869 mov     bx, [bp+var_16] ;~ 1678:1A83
cs=0x1678;eip=0x001a86; 	T(CMP(ax, *(dw*)(raddr(ds,bx+0))));	// 43870 cmp     ax, [bx+0] ;~ 1678:1A86
cs=0x1678;eip=0x001a88; 	R(JLE(loc_267ec));	// 43871 jle     short loc_267EC ;~ 1678:1A88
cs=0x1678;eip=0x001a8a; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 43872 mov     ax, [bx+0] ;~ 1678:1A8A
loc_267ec:
	// 7427 
cs=0x1678;eip=0x001a8c; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 43875 mov     [bp+var_10], ax ;~ 1678:1A8C
cs=0x1678;eip=0x001a8f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 43876 mov     bx, [bp+arg_4] ;~ 1678:1A8F
cs=0x1678;eip=0x001a92; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 43877 mov     ax, [bx+2] ;~ 1678:1A92
cs=0x1678;eip=0x001a95; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_16))));	// 43878 mov     bx, [bp+var_16] ;~ 1678:1A95
cs=0x1678;eip=0x001a98; 	T(CMP(ax, *(dw*)(raddr(ds,bx+2))));	// 43879 cmp     ax, [bx+2] ;~ 1678:1A98
cs=0x1678;eip=0x001a9b; 	R(JGE(loc_26800));	// 43880 jge     short loc_26800 ;~ 1678:1A9B
cs=0x1678;eip=0x001a9d; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 43881 mov     ax, [bx+2] ;~ 1678:1A9D
loc_26800:
	// 7428 
cs=0x1678;eip=0x001aa0; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 43884 mov     [bp+var_E], ax ;~ 1678:1AA0
cs=0x1678;eip=0x001aa3; 	T(MOV(al, *(raddr(ss,bp+var_14))));	// 43885 mov     al, [bp+var_14] ;~ 1678:1AA3
cs=0x1678;eip=0x001aa6; 	X(MOV(*(raddr(ss,bp+var_12)), al));	// 43886 mov     [bp+var_12], al ;~ 1678:1AA6
cs=0x1678;eip=0x001aa9; 	R(JMP(loc_26825));	// 43887 jmp     short loc_26825 ;~ 1678:1AA9
loc_2680c:
	// 7429 
cs=0x1678;eip=0x001aac; 	T(MOV(di, si));	// 43892 mov     di, si ;~ 1678:1AAC
cs=0x1678;eip=0x001aae; 	T(MOV(cl, 3));	// 43893 mov     cl, 3 ;~ 1678:1AAE
cs=0x1678;eip=0x001ab0; 	T(SHL(di, cl));	// 43894 shl     di, cl ;~ 1678:1AB0
cs=0x1678;eip=0x001ab2; 	T(ADD(di, *(dw*)(raddr(ss,bp+arg_2))));	// 43895 add     di, [bp+arg_2] ;~ 1678:1AB2
cs=0x1678;eip=0x001ab5; 	X(PUSH(si));	// 43896 push    si ;~ 1678:1AB5
cs=0x1678;eip=0x001ab6; 	X(PUSH(di));	// 43897 push    di ;~ 1678:1AB6
cs=0x1678;eip=0x001ab7; 	T(si = di+8);	// 43898 lea     si, [di+8] ;~ 1678:1AB7
cs=0x1678;eip=0x001aba; 	X(PUSH(ds));	// 43899 push    ds ;~ 1678:1ABA
cs=0x1678;eip=0x001abb; 	X(POP(es));	// 43900 pop     es ;~ 1678:1ABB
cs=0x1678;eip=0x001abc; 	X(MOVSW);	// 43902 movsw ;~ 1678:1ABC
cs=0x1678;eip=0x001abd; 	X(MOVSW);	// 43903 movsw ;~ 1678:1ABD
cs=0x1678;eip=0x001abe; 	X(MOVSW);	// 43904 movsw ;~ 1678:1ABE
cs=0x1678;eip=0x001abf; 	X(MOVSW);	// 43905 movsw ;~ 1678:1ABF
cs=0x1678;eip=0x001ac0; 	X(POP(di));	// 43906 pop     di ;~ 1678:1AC0
cs=0x1678;eip=0x001ac1; 	X(POP(si));	// 43907 pop     si ;~ 1678:1AC1
cs=0x1678;eip=0x001ac2; 	X(INC(*(raddr(ss,bp+var_12))));	// 43908 inc     [bp+var_12] ;~ 1678:1AC2
loc_26825:
	// 7430 
cs=0x1678;eip=0x001ac5; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 43911 mov     al, [bp+var_12] ;~ 1678:1AC5
cs=0x1678;eip=0x001ac8; 	T(CBW);	// 43912 cbw ;~ 1678:1AC8
cs=0x1678;eip=0x001ac9; 	T(MOV(si, ax));	// 43913 mov     si, ax ;~ 1678:1AC9
cs=0x1678;eip=0x001acb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 43914 mov     bx, [bp+arg_0] ;~ 1678:1ACB
cs=0x1678;eip=0x001ace; 	T(MOV(al, *(raddr(ds,bx))));	// 43915 mov     al, [bx] ;~ 1678:1ACE
cs=0x1678;eip=0x001ad0; 	T(CBW);	// 43916 cbw ;~ 1678:1AD0
cs=0x1678;eip=0x001ad1; 	T(DEC(ax));	// 43917 dec     ax ;~ 1678:1AD1
cs=0x1678;eip=0x001ad2; 	T(CMP(ax, si));	// 43918 cmp     ax, si ;~ 1678:1AD2
cs=0x1678;eip=0x001ad4; 	R(JG(loc_2680c));	// 43919 jg      short loc_2680C ;~ 1678:1AD4
cs=0x1678;eip=0x001ad6; 	X(DEC(*(raddr(ds,bx))));	// 43920 dec     byte ptr [bx] ;~ 1678:1AD6
cs=0x1678;eip=0x001ad8; 	T(CMP(*(raddr(ss,bp+var_18)), 0));	// 43921 cmp     [bp+var_18], 0 ;~ 1678:1AD8
cs=0x1678;eip=0x001adc; 	R(JZ(loc_2684f));	// 43922 jz      short loc_2684F ;~ 1678:1ADC
cs=0x1678;eip=0x001ade; 	T(ax = bp+var_20);	// 43923 lea     ax, [bp+var_20] ;~ 1678:1ADE
cs=0x1678;eip=0x001ae1; 	X(PUSH(ax));	// 43924 push    ax ;~ 1678:1AE1
cs=0x1678;eip=0x001ae2; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 43925 push    [bp+arg_2] ;~ 1678:1AE2
cs=0x1678;eip=0x001ae5; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 43926 push    [bp+arg_0] ;~ 1678:1AE5
cs=0x1678;eip=0x001ae8; 	X(PUSH(cs));	// 43927 push    cs ;~ 1678:1AE8
cs=0x1678;eip=0x001ae9; 	R(CALL(rectlist_add_rect,0));	// 43928 call    near ptr rectlist_add_rect ;~ 1678:1AE9
cs=0x1678;eip=0x001aec; 	T(ADD(sp, 6));	// 43929 add     sp, 6 ;~ 1678:1AEC
loc_2684f:
	// 7431 
cs=0x1678;eip=0x001aef; 	T(ax = bp+var_10);	// 43932 lea     ax, [bp+var_10] ;~ 1678:1AEF
cs=0x1678;eip=0x001af2; 	X(PUSH(ax));	// 43933 push    ax ;~ 1678:1AF2
cs=0x1678;eip=0x001af3; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 43934 push    [bp+arg_2] ;~ 1678:1AF3
cs=0x1678;eip=0x001af6; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 43935 push    [bp+arg_0] ;~ 1678:1AF6
cs=0x1678;eip=0x001af9; 	X(PUSH(cs));	// 43936 push    cs ;~ 1678:1AF9
cs=0x1678;eip=0x001afa; 	R(CALL(rectlist_add_rect,0));	// 43937 call    near ptr rectlist_add_rect ;~ 1678:1AFA
cs=0x1678;eip=0x001afd; 	T(ADD(sp, 6));	// 43938 add     sp, 6 ;~ 1678:1AFD
cs=0x1678;eip=0x001b00; 	T(CMP(*(raddr(ss,bp+var_22)), 0));	// 43939 cmp     [bp+var_22], 0 ;~ 1678:1B00
cs=0x1678;eip=0x001b04; 	R(JNZ(loc_26869));	// 43940 jnz     short loc_26869 ;~ 1678:1B04
cs=0x1678;eip=0x001b06; 	R(JMP(loc_26957));	// 43941 jmp     loc_26957 ;~ 1678:1B06
loc_26869:
	// 7432 
cs=0x1678;eip=0x001b09; 	T(ax = bp+var_8);	// 43945 lea     ax, [bp+var_8] ;~ 1678:1B09
loc_2686c:
	// 7433 
cs=0x1678;eip=0x001b0c; 	X(PUSH(ax));	// 43948 push    ax ;~ 1678:1B0C
cs=0x1678;eip=0x001b0d; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 43949 push    [bp+arg_2] ;~ 1678:1B0D
cs=0x1678;eip=0x001b10; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 43950 push    [bp+arg_0] ;~ 1678:1B10
cs=0x1678;eip=0x001b13; 	X(PUSH(cs));	// 43951 push    cs ;~ 1678:1B13
cs=0x1678;eip=0x001b14; 	R(CALL(rectlist_add_rect,0));	// 43952 call    near ptr rectlist_add_rect ;~ 1678:1B14
cs=0x1678;eip=0x001b17; 	T(ADD(sp, 6));	// 43953 add     sp, 6 ;~ 1678:1B17
cs=0x1678;eip=0x001b1a; 	X(POP(si));	// 43954 pop     si ;~ 1678:1B1A
cs=0x1678;eip=0x001b1b; 	X(POP(di));	// 43955 pop     di ;~ 1678:1B1B
cs=0x1678;eip=0x001b1c; 	T(MOV(sp, bp));	// 43956 mov     sp, bp ;~ 1678:1B1C
cs=0x1678;eip=0x001b1e; 	X(POP(bp));	// 43957 pop     bp ;~ 1678:1B1E
cs=0x1678;eip=0x001b1f; 	R(RETF(0));	// 43958 retf ;~ 1678:1B1F
loc_26880:
	// 7434 
cs=0x1678;eip=0x001b20; 	X(MOV(*(raddr(ss,bp+var_14)), 0));	// 43962 mov     [bp+var_14], 0 ;~ 1678:1B20
cs=0x1678;eip=0x001b24; 	R(JMP(loc_268bb));	// 43963 jmp     short loc_268BB ;~ 1678:1B24
loc_26886:
	// 7435 
cs=0x1678;eip=0x001b26; 	T(MOV(di, si));	// 43967 mov     di, si ;~ 1678:1B26
cs=0x1678;eip=0x001b28; 	T(MOV(cl, 3));	// 43968 mov     cl, 3 ;~ 1678:1B28
cs=0x1678;eip=0x001b2a; 	T(SHL(di, cl));	// 43969 shl     di, cl ;~ 1678:1B2A
cs=0x1678;eip=0x001b2c; 	T(ADD(di, *(dw*)(raddr(ss,bp+arg_2))));	// 43970 add     di, [bp+arg_2] ;~ 1678:1B2C
cs=0x1678;eip=0x001b2f; 	X(PUSH(si));	// 43971 push    si ;~ 1678:1B2F
cs=0x1678;eip=0x001b30; 	X(PUSH(di));	// 43972 push    di ;~ 1678:1B30
cs=0x1678;eip=0x001b31; 	T(si = di+8);	// 43973 lea     si, [di+8] ;~ 1678:1B31
cs=0x1678;eip=0x001b34; 	X(PUSH(ds));	// 43974 push    ds ;~ 1678:1B34
cs=0x1678;eip=0x001b35; 	X(POP(es));	// 43975 pop     es ;~ 1678:1B35
cs=0x1678;eip=0x001b36; 	X(MOVSW);	// 43976 movsw ;~ 1678:1B36
cs=0x1678;eip=0x001b37; 	X(MOVSW);	// 43977 movsw ;~ 1678:1B37
cs=0x1678;eip=0x001b38; 	X(MOVSW);	// 43978 movsw ;~ 1678:1B38
cs=0x1678;eip=0x001b39; 	X(MOVSW);	// 43979 movsw ;~ 1678:1B39
cs=0x1678;eip=0x001b3a; 	X(POP(di));	// 43980 pop     di ;~ 1678:1B3A
cs=0x1678;eip=0x001b3b; 	X(POP(si));	// 43981 pop     si ;~ 1678:1B3B
cs=0x1678;eip=0x001b3c; 	X(INC(*(raddr(ss,bp+var_12))));	// 43982 inc     [bp+var_12] ;~ 1678:1B3C
loc_2689f:
	// 7436 
cs=0x1678;eip=0x001b3f; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 43985 mov     al, [bp+var_12] ;~ 1678:1B3F
cs=0x1678;eip=0x001b42; 	T(CBW);	// 43986 cbw ;~ 1678:1B42
cs=0x1678;eip=0x001b43; 	T(MOV(si, ax));	// 43987 mov     si, ax ;~ 1678:1B43
cs=0x1678;eip=0x001b45; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 43988 mov     bx, [bp+arg_0] ;~ 1678:1B45
cs=0x1678;eip=0x001b48; 	T(MOV(al, *(raddr(ds,bx))));	// 43989 mov     al, [bx] ;~ 1678:1B48
cs=0x1678;eip=0x001b4a; 	T(CBW);	// 43990 cbw ;~ 1678:1B4A
cs=0x1678;eip=0x001b4b; 	T(DEC(ax));	// 43991 dec     ax ;~ 1678:1B4B
cs=0x1678;eip=0x001b4c; 	T(CMP(ax, si));	// 43992 cmp     ax, si ;~ 1678:1B4C
cs=0x1678;eip=0x001b4e; 	R(JG(loc_26886));	// 43993 jg      short loc_26886 ;~ 1678:1B4E
cs=0x1678;eip=0x001b50; 	X(DEC(*(raddr(ds,bx))));	// 43994 dec     byte ptr [bx] ;~ 1678:1B50
cs=0x1678;eip=0x001b52; 	T(ax = bp+var_10);	// 43995 lea     ax, [bp+var_10] ;~ 1678:1B52
cs=0x1678;eip=0x001b55; 	R(JMP(loc_2686c));	// 43996 jmp     short loc_2686C ;~ 1678:1B55
loc_268b8:
	// 7437 
cs=0x1678;eip=0x001b58; 	X(INC(*(raddr(ss,bp+var_14))));	// 44001 inc     [bp+var_14] ;~ 1678:1B58
loc_268bb:
	// 7438 
cs=0x1678;eip=0x001b5b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 44004 mov     bx, [bp+arg_0] ;~ 1678:1B5B
cs=0x1678;eip=0x001b5e; 	T(MOV(al, *(raddr(ss,bp+var_14))));	// 44005 mov     al, [bp+var_14] ;~ 1678:1B5E
cs=0x1678;eip=0x001b61; 	T(CMP(*(raddr(ds,bx)), al));	// 44006 cmp     [bx], al ;~ 1678:1B61
cs=0x1678;eip=0x001b63; 	R(JLE(loc_26936));	// 44007 jle     short loc_26936 ;~ 1678:1B63
cs=0x1678;eip=0x001b65; 	T(CBW);	// 44008 cbw ;~ 1678:1B65
cs=0x1678;eip=0x001b66; 	T(MOV(cl, 3));	// 44009 mov     cl, 3 ;~ 1678:1B66
cs=0x1678;eip=0x001b68; 	T(SHL(ax, cl));	// 44010 shl     ax, cl ;~ 1678:1B68
cs=0x1678;eip=0x001b6a; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 44011 add     ax, [bp+arg_2] ;~ 1678:1B6A
cs=0x1678;eip=0x001b6d; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 44012 mov     [bp+var_16], ax ;~ 1678:1B6D
cs=0x1678;eip=0x001b70; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 44013 push    [bp+arg_4] ;~ 1678:1B70
cs=0x1678;eip=0x001b73; 	X(PUSH(ax));	// 44014 push    ax ;~ 1678:1B73
cs=0x1678;eip=0x001b74; 	X(PUSH(cs));	// 44015 push    cs ;~ 1678:1B74
cs=0x1678;eip=0x001b75; 	R(CALL(rect_is_adjacent,0));	// 44016 call    near ptr rect_is_adjacent ;~ 1678:1B75
cs=0x1678;eip=0x001b78; 	T(ADD(sp, 4));	// 44017 add     sp, 4 ;~ 1678:1B78
cs=0x1678;eip=0x001b7b; 	T(OR(al, al));	// 44018 or      al, al ;~ 1678:1B7B
cs=0x1678;eip=0x001b7d; 	R(JZ(loc_268b8));	// 44019 jz      short loc_268B8 ;~ 1678:1B7D
cs=0x1678;eip=0x001b7f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_16))));	// 44020 mov     bx, [bp+var_16] ;~ 1678:1B7F
cs=0x1678;eip=0x001b82; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 44021 mov     ax, [bx+0] ;~ 1678:1B82
cs=0x1678;eip=0x001b84; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 44022 mov     bx, [bp+arg_4] ;~ 1678:1B84
cs=0x1678;eip=0x001b87; 	T(CMP(ax, *(dw*)(raddr(ds,bx+0))));	// 44023 cmp     ax, [bx+0] ;~ 1678:1B87
cs=0x1678;eip=0x001b89; 	R(JLE(loc_268ed));	// 44024 jle     short loc_268ED ;~ 1678:1B89
cs=0x1678;eip=0x001b8b; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0))));	// 44025 mov     ax, [bx+0] ;~ 1678:1B8B
loc_268ed:
	// 7439 
cs=0x1678;eip=0x001b8d; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 44028 mov     [bp+var_10], ax ;~ 1678:1B8D
cs=0x1678;eip=0x001b90; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_16))));	// 44029 mov     bx, [bp+var_16] ;~ 1678:1B90
cs=0x1678;eip=0x001b93; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 44030 mov     ax, [bx+2] ;~ 1678:1B93
cs=0x1678;eip=0x001b96; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 44031 mov     bx, [bp+arg_4] ;~ 1678:1B96
cs=0x1678;eip=0x001b99; 	T(CMP(ax, *(dw*)(raddr(ds,bx+2))));	// 44032 cmp     ax, [bx+2] ;~ 1678:1B99
cs=0x1678;eip=0x001b9c; 	R(JGE(loc_26901));	// 44033 jge     short loc_26901 ;~ 1678:1B9C
cs=0x1678;eip=0x001b9e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 44034 mov     ax, [bx+2] ;~ 1678:1B9E
loc_26901:
	// 7440 
cs=0x1678;eip=0x001ba1; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 44037 mov     [bp+var_E], ax ;~ 1678:1BA1
cs=0x1678;eip=0x001ba4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_16))));	// 44038 mov     bx, [bp+var_16] ;~ 1678:1BA4
cs=0x1678;eip=0x001ba7; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 44039 mov     ax, [bx+4] ;~ 1678:1BA7
cs=0x1678;eip=0x001baa; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 44040 mov     bx, [bp+arg_4] ;~ 1678:1BAA
cs=0x1678;eip=0x001bad; 	T(CMP(ax, *(dw*)(raddr(ds,bx+4))));	// 44041 cmp     ax, [bx+4] ;~ 1678:1BAD
cs=0x1678;eip=0x001bb0; 	R(JLE(loc_26915));	// 44042 jle     short loc_26915 ;~ 1678:1BB0
cs=0x1678;eip=0x001bb2; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 44043 mov     ax, [bx+4] ;~ 1678:1BB2
loc_26915:
	// 7441 
cs=0x1678;eip=0x001bb5; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 44046 mov     [bp+var_C], ax ;~ 1678:1BB5
cs=0x1678;eip=0x001bb8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_16))));	// 44047 mov     bx, [bp+var_16] ;~ 1678:1BB8
cs=0x1678;eip=0x001bbb; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 44048 mov     ax, [bx+6] ;~ 1678:1BBB
cs=0x1678;eip=0x001bbe; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 44049 mov     bx, [bp+arg_4] ;~ 1678:1BBE
cs=0x1678;eip=0x001bc1; 	T(CMP(ax, *(dw*)(raddr(ds,bx+6))));	// 44050 cmp     ax, [bx+6] ;~ 1678:1BC1
cs=0x1678;eip=0x001bc4; 	R(JGE(loc_26929));	// 44051 jge     short loc_26929 ;~ 1678:1BC4
cs=0x1678;eip=0x001bc6; 	T(MOV(ax, *(dw*)(raddr(ds,bx+6))));	// 44052 mov     ax, [bx+6] ;~ 1678:1BC6
loc_26929:
	// 7442 
cs=0x1678;eip=0x001bc9; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 44055 mov     [bp+var_A], ax ;~ 1678:1BC9
cs=0x1678;eip=0x001bcc; 	T(MOV(al, *(raddr(ss,bp+var_14))));	// 44056 mov     al, [bp+var_14] ;~ 1678:1BCC
cs=0x1678;eip=0x001bcf; 	X(MOV(*(raddr(ss,bp+var_12)), al));	// 44057 mov     [bp+var_12], al ;~ 1678:1BCF
cs=0x1678;eip=0x001bd2; 	R(JMP(loc_2689f));	// 44058 jmp     loc_2689F ;~ 1678:1BD2
loc_26936:
	// 7443 
cs=0x1678;eip=0x001bd6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 44063 mov     bx, [bp+arg_0] ;~ 1678:1BD6
cs=0x1678;eip=0x001bd9; 	T(MOV(al, *(raddr(ds,bx))));	// 44064 mov     al, [bx] ;~ 1678:1BD9
cs=0x1678;eip=0x001bdb; 	T(CBW);	// 44065 cbw ;~ 1678:1BDB
cs=0x1678;eip=0x001bdc; 	T(MOV(bx, ax));	// 44066 mov     bx, ax ;~ 1678:1BDC
cs=0x1678;eip=0x001bde; 	T(MOV(cl, 3));	// 44067 mov     cl, 3 ;~ 1678:1BDE
cs=0x1678;eip=0x001be0; 	T(SHL(bx, cl));	// 44068 shl     bx, cl ;~ 1678:1BE0
cs=0x1678;eip=0x001be2; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 44069 mov     si, [bp+arg_2] ;~ 1678:1BE2
cs=0x1678;eip=0x001be5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 44070 mov     ax, [bp+arg_4] ;~ 1678:1BE5
cs=0x1678;eip=0x001be8; 	T(di = bx+si);	// 44071 lea     di, [bx+si] ;~ 1678:1BE8
cs=0x1678;eip=0x001bea; 	T(MOV(si, ax));	// 44072 mov     si, ax ;~ 1678:1BEA
cs=0x1678;eip=0x001bec; 	X(PUSH(ds));	// 44073 push    ds ;~ 1678:1BEC
cs=0x1678;eip=0x001bed; 	X(POP(es));	// 44074 pop     es ;~ 1678:1BED
cs=0x1678;eip=0x001bee; 	X(MOVSW);	// 44075 movsw ;~ 1678:1BEE
cs=0x1678;eip=0x001bef; 	X(MOVSW);	// 44076 movsw ;~ 1678:1BEF
cs=0x1678;eip=0x001bf0; 	X(MOVSW);	// 44077 movsw ;~ 1678:1BF0
cs=0x1678;eip=0x001bf1; 	X(MOVSW);	// 44078 movsw ;~ 1678:1BF1
cs=0x1678;eip=0x001bf2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 44079 mov     bx, [bp+arg_0] ;~ 1678:1BF2
cs=0x1678;eip=0x001bf5; 	X(INC(*(raddr(ds,bx))));	// 44080 inc     byte ptr [bx] ;~ 1678:1BF5
loc_26957:
	// 7444 
cs=0x1678;eip=0x001bf7; 	X(POP(si));	// 44084 pop     si ;~ 1678:1BF7
cs=0x1678;eip=0x001bf8; 	X(POP(di));	// 44085 pop     di ;~ 1678:1BF8
cs=0x1678;eip=0x001bf9; 	T(MOV(sp, bp));	// 44086 mov     sp, bp ;~ 1678:1BF9
cs=0x1678;eip=0x001bfb; 	X(POP(bp));	// 44087 pop     bp ;~ 1678:1BFB
cs=0x1678;eip=0x001bfc; 	R(RETF(0));	// 44088 retf ;~ 1678:1BFC
rect_is_overlapping:
	// 44098 
#undef arg_0
#define arg_0 6
	// 44100 arg_0           = word ptr  6 ;~ 1678:1BFE
#undef arg_2
#define arg_2 8
	// 44101 arg_2           = word ptr  8 ;~ 1678:1BFE
ret_1678_1bfe:
	// 7445 
cs=0x1678;eip=0x001bfe; 	X(PUSH(bp));	// 44103 push    bp ;~ 1678:1BFE
cs=0x1678;eip=0x001bff; 	T(MOV(bp, sp));	// 44104 mov     bp, sp ;~ 1678:1BFF
cs=0x1678;eip=0x001c01; 	X(PUSH(si));	// 44105 push    si ;~ 1678:1C01
cs=0x1678;eip=0x001c02; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 44106 mov     bx, [bp+arg_0] ;~ 1678:1C02
cs=0x1678;eip=0x001c05; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 44107 mov     si, [bp+arg_2] ;~ 1678:1C05
cs=0x1678;eip=0x001c08; 	T(MOV(ax, *(dw*)(raddr(ds,si+0))));	// 44108 mov     ax, [si+0] ;~ 1678:1C08
cs=0x1678;eip=0x001c0a; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 44109 cmp     [bx+2], ax ;~ 1678:1C0A
cs=0x1678;eip=0x001c0d; 	R(JG(loc_26974));	// 44110 jg      short loc_26974 ;~ 1678:1C0D
loc_2696f:
	// 7446 
cs=0x1678;eip=0x001c0f; 	T(SUB(ax, ax));	// 44114 sub     ax, ax ;~ 1678:1C0F
cs=0x1678;eip=0x001c11; 	X(POP(si));	// 44115 pop     si ;~ 1678:1C11
cs=0x1678;eip=0x001c12; 	X(POP(bp));	// 44116 pop     bp ;~ 1678:1C12
cs=0x1678;eip=0x001c13; 	R(RETF(0));	// 44117 retf ;~ 1678:1C13
loc_26974:
	// 7447 
cs=0x1678;eip=0x001c14; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 44121 mov     bx, [bp+arg_2] ;~ 1678:1C14
cs=0x1678;eip=0x001c17; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 44122 mov     si, [bp+arg_0] ;~ 1678:1C17
cs=0x1678;eip=0x001c1a; 	T(MOV(ax, *(dw*)(raddr(ds,si+0))));	// 44123 mov     ax, [si+0] ;~ 1678:1C1A
cs=0x1678;eip=0x001c1c; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 44124 cmp     [bx+2], ax ;~ 1678:1C1C
cs=0x1678;eip=0x001c1f; 	R(JLE(loc_2696f));	// 44125 jle     short loc_2696F ;~ 1678:1C1F
cs=0x1678;eip=0x001c21; 	T(MOV(bx, si));	// 44126 mov     bx, si ;~ 1678:1C21
cs=0x1678;eip=0x001c23; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 44127 mov     si, [bp+arg_2] ;~ 1678:1C23
cs=0x1678;eip=0x001c26; 	T(MOV(ax, *(dw*)(raddr(ds,si+6))));	// 44128 mov     ax, [si+6] ;~ 1678:1C26
cs=0x1678;eip=0x001c29; 	T(CMP(*(dw*)(raddr(ds,bx+4)), ax));	// 44129 cmp     [bx+4], ax ;~ 1678:1C29
cs=0x1678;eip=0x001c2c; 	R(JGE(loc_2696f));	// 44130 jge     short loc_2696F ;~ 1678:1C2C
cs=0x1678;eip=0x001c2e; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 44131 mov     ax, [si+4] ;~ 1678:1C2E
cs=0x1678;eip=0x001c31; 	T(CMP(*(dw*)(raddr(ds,bx+6)), ax));	// 44132 cmp     [bx+6], ax ;~ 1678:1C31
cs=0x1678;eip=0x001c34; 	R(JLE(loc_2696f));	// 44133 jle     short loc_2696F ;~ 1678:1C34
cs=0x1678;eip=0x001c36; 	T(MOV(ax, 1));	// 44134 mov     ax, 1 ;~ 1678:1C36
cs=0x1678;eip=0x001c39; 	X(POP(si));	// 44135 pop     si ;~ 1678:1C39
cs=0x1678;eip=0x001c3a; 	X(POP(bp));	// 44136 pop     bp ;~ 1678:1C3A
cs=0x1678;eip=0x001c3b; 	R(RETF(0));	// 44137 retf ;~ 1678:1C3B
rect_is_inside:
	// 44145 
#undef arg_0
#define arg_0 6
	// 44148 arg_0           = word ptr  6 ;~ 1678:1C3C
#undef arg_2
#define arg_2 8
	// 44149 arg_2           = word ptr  8 ;~ 1678:1C3C
ret_1678_1c3c:
	// 7448 
cs=0x1678;eip=0x001c3c; 	X(PUSH(bp));	// 44151 push    bp ;~ 1678:1C3C
cs=0x1678;eip=0x001c3d; 	T(MOV(bp, sp));	// 44152 mov     bp, sp ;~ 1678:1C3D
cs=0x1678;eip=0x001c3f; 	X(PUSH(si));	// 44153 push    si ;~ 1678:1C3F
cs=0x1678;eip=0x001c40; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 44154 mov     bx, [bp+arg_0] ;~ 1678:1C40
cs=0x1678;eip=0x001c43; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 44155 mov     si, [bp+arg_2] ;~ 1678:1C43
cs=0x1678;eip=0x001c46; 	T(MOV(ax, *(dw*)(raddr(ds,si+2))));	// 44156 mov     ax, [si+2] ;~ 1678:1C46
cs=0x1678;eip=0x001c49; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 44157 cmp     [bx+2], ax ;~ 1678:1C49
cs=0x1678;eip=0x001c4c; 	R(JG(loc_269ca));	// 44158 jg      short loc_269CA ;~ 1678:1C4C
cs=0x1678;eip=0x001c4e; 	T(MOV(ax, *(dw*)(raddr(ds,si+0))));	// 44159 mov     ax, [si+0] ;~ 1678:1C4E
cs=0x1678;eip=0x001c50; 	T(CMP(*(dw*)(raddr(ds,bx+0)), ax));	// 44160 cmp     [bx+0], ax ;~ 1678:1C50
cs=0x1678;eip=0x001c52; 	R(JL(loc_269ca));	// 44161 jl      short loc_269CA ;~ 1678:1C52
cs=0x1678;eip=0x001c54; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 44162 mov     ax, [si+4] ;~ 1678:1C54
cs=0x1678;eip=0x001c57; 	T(CMP(*(dw*)(raddr(ds,bx+4)), ax));	// 44163 cmp     [bx+4], ax ;~ 1678:1C57
cs=0x1678;eip=0x001c5a; 	R(JL(loc_269ca));	// 44164 jl      short loc_269CA ;~ 1678:1C5A
cs=0x1678;eip=0x001c5c; 	T(MOV(ax, *(dw*)(raddr(ds,si+6))));	// 44165 mov     ax, [si+6] ;~ 1678:1C5C
cs=0x1678;eip=0x001c5f; 	T(CMP(*(dw*)(raddr(ds,bx+6)), ax));	// 44166 cmp     [bx+6], ax ;~ 1678:1C5F
cs=0x1678;eip=0x001c62; 	R(JG(loc_269ca));	// 44167 jg      short loc_269CA ;~ 1678:1C62
cs=0x1678;eip=0x001c64; 	T(MOV(ax, 1));	// 44168 mov     ax, 1 ;~ 1678:1C64
cs=0x1678;eip=0x001c67; 	X(POP(si));	// 44169 pop     si ;~ 1678:1C67
cs=0x1678;eip=0x001c68; 	X(POP(bp));	// 44170 pop     bp ;~ 1678:1C68
cs=0x1678;eip=0x001c69; 	R(RETF(0));	// 44171 retf ;~ 1678:1C69
loc_269ca:
	// 7449 
cs=0x1678;eip=0x001c6a; 	T(SUB(ax, ax));	// 44176 sub     ax, ax ;~ 1678:1C6A
cs=0x1678;eip=0x001c6c; 	X(POP(si));	// 44177 pop     si ;~ 1678:1C6C
cs=0x1678;eip=0x001c6d; 	X(POP(bp));	// 44178 pop     bp ;~ 1678:1C6D
cs=0x1678;eip=0x001c6e; 	R(RETF(0));	// 44179 retf ;~ 1678:1C6E
rect_is_adjacent:
	// 44189 
#undef arg_0
#define arg_0 6
	// 44191 arg_0           = word ptr  6 ;~ 1678:1C70
#undef arg_2
#define arg_2 8
	// 44192 arg_2           = word ptr  8 ;~ 1678:1C70
ret_1678_1c70:
	// 7450 
cs=0x1678;eip=0x001c70; 	X(PUSH(bp));	// 44194 push    bp ;~ 1678:1C70
cs=0x1678;eip=0x001c71; 	T(MOV(bp, sp));	// 44195 mov     bp, sp ;~ 1678:1C71
cs=0x1678;eip=0x001c73; 	X(PUSH(si));	// 44196 push    si ;~ 1678:1C73
cs=0x1678;eip=0x001c74; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 44197 mov     bx, [bp+arg_0] ;~ 1678:1C74
cs=0x1678;eip=0x001c77; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 44198 mov     si, [bp+arg_2] ;~ 1678:1C77
cs=0x1678;eip=0x001c7a; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 44199 mov     ax, [si+4] ;~ 1678:1C7A
cs=0x1678;eip=0x001c7d; 	T(CMP(*(dw*)(raddr(ds,bx+6)), ax));	// 44200 cmp     [bx+6], ax ;~ 1678:1C7D
cs=0x1678;eip=0x001c80; 	R(JNZ(loc_26a02));	// 44201 jnz     short loc_26A02 ;~ 1678:1C80
cs=0x1678;eip=0x001c82; 	T(MOV(ax, *(dw*)(raddr(ds,si+0))));	// 44202 mov     ax, [si+0] ;~ 1678:1C82
cs=0x1678;eip=0x001c84; 	T(CMP(*(dw*)(raddr(ds,bx+0)), ax));	// 44203 cmp     [bx+0], ax ;~ 1678:1C84
cs=0x1678;eip=0x001c86; 	R(JZ(loc_269ee));	// 44204 jz      short loc_269EE ;~ 1678:1C86
loc_269e8:
	// 7451 
cs=0x1678;eip=0x001c88; 	T(SUB(ax, ax));	// 44208 sub     ax, ax ;~ 1678:1C88
cs=0x1678;eip=0x001c8a; 	X(POP(si));	// 44209 pop     si ;~ 1678:1C8A
cs=0x1678;eip=0x001c8b; 	X(POP(bp));	// 44210 pop     bp ;~ 1678:1C8B
cs=0x1678;eip=0x001c8c; 	R(RETF(0));	// 44211 retf ;~ 1678:1C8C
loc_269ee:
	// 7452 
cs=0x1678;eip=0x001c8e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 44216 mov     bx, [bp+arg_0] ;~ 1678:1C8E
cs=0x1678;eip=0x001c91; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 44217 mov     si, [bp+arg_2] ;~ 1678:1C91
cs=0x1678;eip=0x001c94; 	T(MOV(ax, *(dw*)(raddr(ds,si+2))));	// 44218 mov     ax, [si+2] ;~ 1678:1C94
cs=0x1678;eip=0x001c97; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 44219 cmp     [bx+2], ax ;~ 1678:1C97
cs=0x1678;eip=0x001c9a; 	R(JNZ(loc_269e8));	// 44220 jnz     short loc_269E8 ;~ 1678:1C9A
loc_269fc:
	// 7453 
cs=0x1678;eip=0x001c9c; 	T(MOV(ax, 1));	// 44223 mov     ax, 1 ;~ 1678:1C9C
cs=0x1678;eip=0x001c9f; 	X(POP(si));	// 44224 pop     si ;~ 1678:1C9F
cs=0x1678;eip=0x001ca0; 	X(POP(bp));	// 44225 pop     bp ;~ 1678:1CA0
cs=0x1678;eip=0x001ca1; 	R(RETF(0));	// 44226 retf ;~ 1678:1CA1
loc_26a02:
	// 7454 
cs=0x1678;eip=0x001ca2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 44230 mov     bx, [bp+arg_0] ;~ 1678:1CA2
cs=0x1678;eip=0x001ca5; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 44231 mov     si, [bp+arg_2] ;~ 1678:1CA5
cs=0x1678;eip=0x001ca8; 	T(MOV(ax, *(dw*)(raddr(ds,si+6))));	// 44232 mov     ax, [si+6] ;~ 1678:1CA8
cs=0x1678;eip=0x001cab; 	T(CMP(*(dw*)(raddr(ds,bx+4)), ax));	// 44233 cmp     [bx+4], ax ;~ 1678:1CAB
cs=0x1678;eip=0x001cae; 	R(JNZ(loc_26a20));	// 44234 jnz     short loc_26A20 ;~ 1678:1CAE
cs=0x1678;eip=0x001cb0; 	T(MOV(ax, *(dw*)(raddr(ds,si+0))));	// 44235 mov     ax, [si+0] ;~ 1678:1CB0
cs=0x1678;eip=0x001cb2; 	T(CMP(*(dw*)(raddr(ds,bx+0)), ax));	// 44236 cmp     [bx+0], ax ;~ 1678:1CB2
cs=0x1678;eip=0x001cb4; 	R(JNZ(loc_269e8));	// 44237 jnz     short loc_269E8 ;~ 1678:1CB4
cs=0x1678;eip=0x001cb6; 	T(MOV(ax, *(dw*)(raddr(ds,si+2))));	// 44238 mov     ax, [si+2] ;~ 1678:1CB6
cs=0x1678;eip=0x001cb9; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 44239 cmp     [bx+2], ax ;~ 1678:1CB9
loc_26a1c:
	// 7455 
cs=0x1678;eip=0x001cbc; 	R(JZ(loc_269fc));	// 44242 jz      short loc_269FC ;~ 1678:1CBC
cs=0x1678;eip=0x001cbe; 	R(JMP(loc_269e8));	// 44243 jmp     short loc_269E8 ;~ 1678:1CBE
loc_26a20:
	// 7456 
cs=0x1678;eip=0x001cc0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 44247 mov     bx, [bp+arg_0] ;~ 1678:1CC0
cs=0x1678;eip=0x001cc3; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 44248 mov     si, [bp+arg_2] ;~ 1678:1CC3
cs=0x1678;eip=0x001cc6; 	T(MOV(ax, *(dw*)(raddr(ds,si+0))));	// 44249 mov     ax, [si+0] ;~ 1678:1CC6
cs=0x1678;eip=0x001cc8; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 44250 cmp     [bx+2], ax ;~ 1678:1CC8
cs=0x1678;eip=0x001ccb; 	R(JNZ(loc_26a3e));	// 44251 jnz     short loc_26A3E ;~ 1678:1CCB
loc_26a2d:
	// 7457 
cs=0x1678;eip=0x001ccd; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 44254 mov     ax, [si+4] ;~ 1678:1CCD
cs=0x1678;eip=0x001cd0; 	T(CMP(*(dw*)(raddr(ds,bx+4)), ax));	// 44255 cmp     [bx+4], ax ;~ 1678:1CD0
cs=0x1678;eip=0x001cd3; 	R(JNZ(loc_269e8));	// 44256 jnz     short loc_269E8 ;~ 1678:1CD3
cs=0x1678;eip=0x001cd5; 	T(MOV(ax, *(dw*)(raddr(ds,si+6))));	// 44257 mov     ax, [si+6] ;~ 1678:1CD5
cs=0x1678;eip=0x001cd8; 	T(CMP(*(dw*)(raddr(ds,bx+6)), ax));	// 44258 cmp     [bx+6], ax ;~ 1678:1CD8
cs=0x1678;eip=0x001cdb; 	R(JMP(loc_26a1c));	// 44259 jmp     short loc_26A1C ;~ 1678:1CDB
loc_26a3e:
	// 7458 
cs=0x1678;eip=0x001cde; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 44264 mov     bx, [bp+arg_2] ;~ 1678:1CDE
cs=0x1678;eip=0x001ce1; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 44265 mov     si, [bp+arg_0] ;~ 1678:1CE1
cs=0x1678;eip=0x001ce4; 	T(MOV(ax, *(dw*)(raddr(ds,si+0))));	// 44266 mov     ax, [si+0] ;~ 1678:1CE4
cs=0x1678;eip=0x001ce6; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 44267 cmp     [bx+2], ax ;~ 1678:1CE6
cs=0x1678;eip=0x001ce9; 	R(JNZ(loc_269e8));	// 44268 jnz     short loc_269E8 ;~ 1678:1CE9
cs=0x1678;eip=0x001ceb; 	T(MOV(bx, si));	// 44269 mov     bx, si ;~ 1678:1CEB
cs=0x1678;eip=0x001ced; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 44270 mov     si, [bp+arg_2] ;~ 1678:1CED
cs=0x1678;eip=0x001cf0; 	R(JMP(loc_26a2d));	// 44271 jmp     short loc_26A2D ;~ 1678:1CF0
rectlist_add_rects:
	// 44279 
#undef var_1c
#define var_1c -0x1C
	// 44282 var_1C          = word ptr -1Ch ;~ 1678:1CF2
#undef var_1a
#define var_1a -0x1A
	// 44283 var_1A          = word ptr -1Ah ;~ 1678:1CF2
#undef var_18
#define var_18 -0x18
	// 44284 var_18          = byte ptr -18h ;~ 1678:1CF2
#undef var_16
#define var_16 -0x16
	// 44285 var_16          = byte ptr -16h ;~ 1678:1CF2
#undef var_14
#define var_14 -0x14
	// 44286 var_14          = byte ptr -14h ;~ 1678:1CF2
#undef var_c
#define var_c -0x0C
	// 44287 var_C           = byte ptr -0Ch ;~ 1678:1CF2
#undef var_4
#define var_4 -4
	// 44288 var_4           = word ptr -4 ;~ 1678:1CF2
#undef var_2
#define var_2 -2
	// 44289 var_2           = byte ptr -2 ;~ 1678:1CF2
#undef arg_0
#define arg_0 6
	// 44290 arg_0           = byte ptr  6 ;~ 1678:1CF2
#undef arg_2
#define arg_2 8
	// 44291 arg_2           = word ptr  8 ;~ 1678:1CF2
#undef arg_4
#define arg_4 0x0A
	// 44292 arg_4           = word ptr  0Ah ;~ 1678:1CF2
#undef arg_6
#define arg_6 0x0C
	// 44293 arg_6           = word ptr  0Ch ;~ 1678:1CF2
#undef arg_8
#define arg_8 0x0E
	// 44294 arg_8           = word ptr  0Eh ;~ 1678:1CF2
#undef arg_a
#define arg_a 0x10
	// 44295 arg_A           = word ptr  10h ;~ 1678:1CF2
#undef arg_c
#define arg_c 0x12
	// 44296 arg_C           = word ptr  12h ;~ 1678:1CF2
ret_1678_1cf2:
	// 7459 
cs=0x1678;eip=0x001cf2; 	X(PUSH(bp));	// 44298 push    bp ;~ 1678:1CF2
cs=0x1678;eip=0x001cf3; 	T(MOV(bp, sp));	// 44299 mov     bp, sp ;~ 1678:1CF3
cs=0x1678;eip=0x001cf5; 	T(SUB(sp, 0x1C));	// 44300 sub     sp, 1Ch ;~ 1678:1CF5
cs=0x1678;eip=0x001cf8; 	X(PUSH(di));	// 44301 push    di ;~ 1678:1CF8
cs=0x1678;eip=0x001cf9; 	X(PUSH(si));	// 44302 push    si ;~ 1678:1CF9
cs=0x1678;eip=0x001cfa; 	X(MOV(*(raddr(ss,bp+var_18)), 0));	// 44303 mov     [bp+var_18], 0 ;~ 1678:1CFA
cs=0x1678;eip=0x001cfe; 	R(JMP(loc_26ac0));	// 44304 jmp     short loc_26AC0 ;~ 1678:1CFE
loc_26a60:
	// 7460 
cs=0x1678;eip=0x001d00; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 44309 mov     ax, [bp+var_1A] ;~ 1678:1D00
loc_26a63:
	// 7461 
cs=0x1678;eip=0x001d03; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 44313 mov     [bp+var_4], ax ;~ 1678:1D03
cs=0x1678;eip=0x001d06; 	X(MOV(*(raddr(ss,bp+var_2)), 1));	// 44314 mov     [bp+var_2], 1 ;~ 1678:1D06
cs=0x1678;eip=0x001d0a; 	R(JMP(loc_26a86));	// 44315 jmp     short loc_26A86 ;~ 1678:1D0A
loc_26a6c:
	// 7462 
cs=0x1678;eip=0x001d0c; 	T(TEST(*(raddr(ss,bp+var_16)), 2));	// 44320 test    [bp+var_16], 2 ;~ 1678:1D0C
cs=0x1678;eip=0x001d10; 	R(JZ(loc_26a82));	// 44321 jz      short loc_26A82 ;~ 1678:1D10
cs=0x1678;eip=0x001d12; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_1c))));	// 44322 mov     bx, [bp+var_1C] ;~ 1678:1D12
cs=0x1678;eip=0x001d15; 	T(MOV(si, bx));	// 44323 mov     si, bx ;~ 1678:1D15
cs=0x1678;eip=0x001d17; 	T(MOV(ax, *(dw*)(raddr(ds,si+0))));	// 44324 mov     ax, [si+0] ;~ 1678:1D17
cs=0x1678;eip=0x001d19; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 44325 cmp     [bx+2], ax ;~ 1678:1D19
cs=0x1678;eip=0x001d1c; 	R(JLE(loc_26a82));	// 44326 jle     short loc_26A82 ;~ 1678:1D1C
cs=0x1678;eip=0x001d1e; 	T(MOV(ax, bx));	// 44327 mov     ax, bx ;~ 1678:1D1E
cs=0x1678;eip=0x001d20; 	R(JMP(loc_26a63));	// 44328 jmp     short loc_26A63 ;~ 1678:1D20
loc_26a82:
	// 7463 
cs=0x1678;eip=0x001d22; 	X(MOV(*(raddr(ss,bp+var_2)), 0));	// 44333 mov     [bp+var_2], 0 ;~ 1678:1D22
loc_26a86:
	// 7464 
cs=0x1678;eip=0x001d26; 	T(CMP(*(raddr(ss,bp+var_2)), 0));	// 44336 cmp     [bp+var_2], 0 ;~ 1678:1D26
cs=0x1678;eip=0x001d2a; 	R(JZ(loc_26abd));	// 44337 jz      short loc_26ABD ;~ 1678:1D2A
cs=0x1678;eip=0x001d2c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 44338 mov     ax, [bp+var_4] ;~ 1678:1D2C
cs=0x1678;eip=0x001d2f; 	T(di = bp+var_14);	// 44339 lea     di, [bp+var_14] ;~ 1678:1D2F
cs=0x1678;eip=0x001d32; 	T(MOV(si, ax));	// 44340 mov     si, ax ;~ 1678:1D32
cs=0x1678;eip=0x001d34; 	X(PUSH(ss));	// 44341 push    ss ;~ 1678:1D34
cs=0x1678;eip=0x001d35; 	X(POP(es));	// 44342 pop     es ;~ 1678:1D35
cs=0x1678;eip=0x001d36; 	X(MOVSW);	// 44344 movsw ;~ 1678:1D36
cs=0x1678;eip=0x001d37; 	X(MOVSW);	// 44345 movsw ;~ 1678:1D37
cs=0x1678;eip=0x001d38; 	X(MOVSW);	// 44346 movsw ;~ 1678:1D38
cs=0x1678;eip=0x001d39; 	X(MOVSW);	// 44347 movsw ;~ 1678:1D39
cs=0x1678;eip=0x001d3a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 44348 push    [bp+arg_8] ;~ 1678:1D3A
cs=0x1678;eip=0x001d3d; 	T(ax = bp+var_14);	// 44349 lea     ax, [bp+var_14] ;~ 1678:1D3D
cs=0x1678;eip=0x001d40; 	X(PUSH(ax));	// 44350 push    ax ;~ 1678:1D40
cs=0x1678;eip=0x001d41; 	X(PUSH(cs));	// 44351 push    cs ;~ 1678:1D41
cs=0x1678;eip=0x001d42; 	R(CALL(rect_intersect,0));	// 44352 call    near ptr rect_intersect ;~ 1678:1D42
cs=0x1678;eip=0x001d45; 	T(ADD(sp, 4));	// 44353 add     sp, 4 ;~ 1678:1D45
cs=0x1678;eip=0x001d48; 	T(OR(al, al));	// 44354 or      al, al ;~ 1678:1D48
cs=0x1678;eip=0x001d4a; 	R(JNZ(loc_26abd));	// 44355 jnz     short loc_26ABD ;~ 1678:1D4A
cs=0x1678;eip=0x001d4c; 	T(ax = bp+var_14);	// 44356 lea     ax, [bp+var_14] ;~ 1678:1D4C
cs=0x1678;eip=0x001d4f; 	X(PUSH(ax));	// 44357 push    ax ;~ 1678:1D4F
cs=0x1678;eip=0x001d50; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_c))));	// 44358 push    [bp+arg_C] ;~ 1678:1D50
cs=0x1678;eip=0x001d53; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 44359 push    [bp+arg_A] ;~ 1678:1D53
cs=0x1678;eip=0x001d56; 	X(PUSH(cs));	// 44360 push    cs ;~ 1678:1D56
cs=0x1678;eip=0x001d57; 	R(CALL(rectlist_add_rect,0));	// 44361 call    near ptr rectlist_add_rect ;~ 1678:1D57
cs=0x1678;eip=0x001d5a; 	T(ADD(sp, 6));	// 44362 add     sp, 6 ;~ 1678:1D5A
loc_26abd:
	// 7465 
cs=0x1678;eip=0x001d5d; 	X(INC(*(raddr(ss,bp+var_18))));	// 44366 inc     [bp+var_18] ;~ 1678:1D5D
loc_26ac0:
	// 7466 
cs=0x1678;eip=0x001d60; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 44369 mov     al, [bp+arg_0] ;~ 1678:1D60
cs=0x1678;eip=0x001d63; 	T(CMP(*(raddr(ss,bp+var_18)), al));	// 44370 cmp     [bp+var_18], al ;~ 1678:1D63
cs=0x1678;eip=0x001d66; 	R(JNC(loc_26b44));	// 44371 jnb     short loc_26B44 ;~ 1678:1D66
cs=0x1678;eip=0x001d68; 	T(MOV(al, *(raddr(ss,bp+var_18))));	// 44372 mov     al, [bp+var_18] ;~ 1678:1D68
cs=0x1678;eip=0x001d6b; 	T(CBW);	// 44373 cbw ;~ 1678:1D6B
cs=0x1678;eip=0x001d6c; 	T(MOV(si, ax));	// 44374 mov     si, ax ;~ 1678:1D6C
cs=0x1678;eip=0x001d6e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 44375 mov     bx, [bp+arg_2] ;~ 1678:1D6E
cs=0x1678;eip=0x001d71; 	T(MOV(al, *(raddr(ds,bx+si))));	// 44376 mov     al, [bx+si] ;~ 1678:1D71
cs=0x1678;eip=0x001d73; 	X(MOV(*(raddr(ss,bp+var_16)), al));	// 44377 mov     [bp+var_16], al ;~ 1678:1D73
cs=0x1678;eip=0x001d76; 	T(TEST(*(raddr(ss,bp+var_16)), 1));	// 44378 test    [bp+var_16], 1 ;~ 1678:1D76
cs=0x1678;eip=0x001d7a; 	R(JZ(loc_26aea));	// 44379 jz      short loc_26AEA ;~ 1678:1D7A
cs=0x1678;eip=0x001d7c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 44380 mov     ax, [bp+arg_4] ;~ 1678:1D7C
cs=0x1678;eip=0x001d7f; 	T(MOV(dx, si));	// 44381 mov     dx, si ;~ 1678:1D7F
cs=0x1678;eip=0x001d81; 	T(MOV(cl, 3));	// 44382 mov     cl, 3 ;~ 1678:1D81
cs=0x1678;eip=0x001d83; 	T(SHL(dx, cl));	// 44383 shl     dx, cl ;~ 1678:1D83
cs=0x1678;eip=0x001d85; 	T(ADD(ax, dx));	// 44384 add     ax, dx ;~ 1678:1D85
cs=0x1678;eip=0x001d87; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), ax));	// 44385 mov     [bp+var_1A], ax ;~ 1678:1D87
loc_26aea:
	// 7467 
cs=0x1678;eip=0x001d8a; 	T(TEST(*(raddr(ss,bp+var_16)), 2));	// 44388 test    [bp+var_16], 2 ;~ 1678:1D8A
cs=0x1678;eip=0x001d8e; 	R(JZ(loc_26afe));	// 44389 jz      short loc_26AFE ;~ 1678:1D8E
cs=0x1678;eip=0x001d90; 	T(MOV(al, *(raddr(ss,bp+var_18))));	// 44390 mov     al, [bp+var_18] ;~ 1678:1D90
cs=0x1678;eip=0x001d93; 	T(CBW);	// 44391 cbw ;~ 1678:1D93
cs=0x1678;eip=0x001d94; 	T(MOV(cl, 3));	// 44392 mov     cl, 3 ;~ 1678:1D94
cs=0x1678;eip=0x001d96; 	T(SHL(ax, cl));	// 44393 shl     ax, cl ;~ 1678:1D96
cs=0x1678;eip=0x001d98; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 44394 add     ax, [bp+arg_6] ;~ 1678:1D98
cs=0x1678;eip=0x001d9b; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), ax));	// 44395 mov     [bp+var_1C], ax ;~ 1678:1D9B
loc_26afe:
	// 7468 
cs=0x1678;eip=0x001d9e; 	T(TEST(*(raddr(ss,bp+var_16)), 1));	// 44398 test    [bp+var_16], 1 ;~ 1678:1D9E
cs=0x1678;eip=0x001da2; 	R(JNZ(loc_26b07));	// 44399 jnz     short loc_26B07 ;~ 1678:1DA2
cs=0x1678;eip=0x001da4; 	R(JMP(loc_26a6c));	// 44400 jmp     loc_26A6C ;~ 1678:1DA4
loc_26b07:
	// 7469 
cs=0x1678;eip=0x001da7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_1a))));	// 44404 mov     bx, [bp+var_1A] ;~ 1678:1DA7
cs=0x1678;eip=0x001daa; 	T(MOV(si, bx));	// 44405 mov     si, bx ;~ 1678:1DAA
cs=0x1678;eip=0x001dac; 	T(MOV(ax, *(dw*)(raddr(ds,si+0))));	// 44406 mov     ax, [si+0] ;~ 1678:1DAC
cs=0x1678;eip=0x001dae; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 44407 cmp     [bx+2], ax ;~ 1678:1DAE
cs=0x1678;eip=0x001db1; 	R(JG(loc_26b16));	// 44408 jg      short loc_26B16 ;~ 1678:1DB1
cs=0x1678;eip=0x001db3; 	R(JMP(loc_26a6c));	// 44409 jmp     loc_26A6C ;~ 1678:1DB3
loc_26b16:
	// 7470 
cs=0x1678;eip=0x001db6; 	T(TEST(*(raddr(ss,bp+var_16)), 2));	// 44413 test    [bp+var_16], 2 ;~ 1678:1DB6
cs=0x1678;eip=0x001dba; 	R(JNZ(loc_26b1f));	// 44414 jnz     short loc_26B1F ;~ 1678:1DBA
cs=0x1678;eip=0x001dbc; 	R(JMP(loc_26a60));	// 44415 jmp     loc_26A60 ;~ 1678:1DBC
loc_26b1f:
	// 7471 
cs=0x1678;eip=0x001dbf; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_1c))));	// 44419 mov     bx, [bp+var_1C] ;~ 1678:1DBF
cs=0x1678;eip=0x001dc2; 	T(MOV(si, bx));	// 44420 mov     si, bx ;~ 1678:1DC2
cs=0x1678;eip=0x001dc4; 	T(MOV(ax, *(dw*)(raddr(ds,si+0))));	// 44421 mov     ax, [si+0] ;~ 1678:1DC4
cs=0x1678;eip=0x001dc6; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 44422 cmp     [bx+2], ax ;~ 1678:1DC6
cs=0x1678;eip=0x001dc9; 	R(JG(loc_26b2e));	// 44423 jg      short loc_26B2E ;~ 1678:1DC9
cs=0x1678;eip=0x001dcb; 	R(JMP(loc_26a60));	// 44424 jmp     loc_26A60 ;~ 1678:1DCB
loc_26b2e:
	// 7472 
cs=0x1678;eip=0x001dce; 	T(ax = bp+var_c);	// 44428 lea     ax, [bp+var_C] ;~ 1678:1DCE
cs=0x1678;eip=0x001dd1; 	X(PUSH(ax));	// 44429 push    ax ;~ 1678:1DD1
cs=0x1678;eip=0x001dd2; 	X(PUSH(bx));	// 44430 push    bx ;~ 1678:1DD2
cs=0x1678;eip=0x001dd3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 44431 push    [bp+var_1A] ;~ 1678:1DD3
cs=0x1678;eip=0x001dd6; 	X(PUSH(cs));	// 44432 push    cs ;~ 1678:1DD6
cs=0x1678;eip=0x001dd7; 	R(CALL(rect_union,0));	// 44433 call    near ptr rect_union ;~ 1678:1DD7
cs=0x1678;eip=0x001dda; 	T(ADD(sp, 6));	// 44434 add     sp, 6 ;~ 1678:1DDA
cs=0x1678;eip=0x001ddd; 	T(ax = bp+var_c);	// 44435 lea     ax, [bp+var_C] ;~ 1678:1DDD
cs=0x1678;eip=0x001de0; 	R(JMP(loc_26a63));	// 44436 jmp     loc_26A63 ;~ 1678:1DE0
loc_26b44:
	// 7473 
cs=0x1678;eip=0x001de4; 	X(POP(si));	// 44441 pop     si ;~ 1678:1DE4
cs=0x1678;eip=0x001de5; 	X(POP(di));	// 44442 pop     di ;~ 1678:1DE5
cs=0x1678;eip=0x001de6; 	T(MOV(sp, bp));	// 44443 mov     sp, bp ;~ 1678:1DE6
cs=0x1678;eip=0x001de8; 	X(POP(bp));	// 44444 pop     bp ;~ 1678:1DE8
cs=0x1678;eip=0x001de9; 	R(RETF(0));	// 44445 retf ;~ 1678:1DE9
rect_array_sort_by_top:
	// 44453 
#undef var_202
#define var_202 -0x202
	// 44455 var_202         = word ptr -202h ;~ 1678:1DEA
#undef arg_0
#define arg_0 6
	// 44456 arg_0           = byte ptr  6 ;~ 1678:1DEA
#undef arg_2
#define arg_2 8
	// 44457 arg_2           = word ptr  8 ;~ 1678:1DEA
#undef arg_4
#define arg_4 0x0A
	// 44458 arg_4           = word ptr  0Ah ;~ 1678:1DEA
ret_1678_1dea:
	// 7474 
cs=0x1678;eip=0x001dea; 	X(PUSH(bp));	// 44460 push    bp ;~ 1678:1DEA
cs=0x1678;eip=0x001deb; 	T(MOV(bp, sp));	// 44461 mov     bp, sp ;~ 1678:1DEB
cs=0x1678;eip=0x001ded; 	T(SUB(sp, 0x202));	// 44462 sub     sp, 202h ;~ 1678:1DED
cs=0x1678;eip=0x001df1; 	X(PUSH(di));	// 44463 push    di ;~ 1678:1DF1
cs=0x1678;eip=0x001df2; 	X(PUSH(si));	// 44464 push    si ;~ 1678:1DF2
cs=0x1678;eip=0x001df3; 	T(CMP(*(raddr(ss,bp+arg_0)), 1));	// 44465 cmp     [bp+arg_0], 1 ;~ 1678:1DF3
cs=0x1678;eip=0x001df7; 	R(JLE(loc_26ba0));	// 44466 jle     short loc_26BA0 ;~ 1678:1DF7
cs=0x1678;eip=0x001df9; 	T(SUB(si, si));	// 44467 sub     si, si ;~ 1678:1DF9
cs=0x1678;eip=0x001dfb; 	R(JMP(loc_26b7c));	// 44468 jmp     short loc_26B7C ;~ 1678:1DFB
loc_26b5e:
	// 7475 
cs=0x1678;eip=0x001dfe; 	T(MOV(di, si));	// 44473 mov     di, si ;~ 1678:1DFE
cs=0x1678;eip=0x001e00; 	T(SHL(di, 1));	// 44474 shl     di, 1 ;~ 1678:1E00
cs=0x1678;eip=0x001e02; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 44475 mov     bx, [bp+arg_2] ;~ 1678:1E02
cs=0x1678;eip=0x001e05; 	T(MOV(ax, si));	// 44476 mov     ax, si ;~ 1678:1E05
cs=0x1678;eip=0x001e07; 	T(MOV(cl, 3));	// 44477 mov     cl, 3 ;~ 1678:1E07
cs=0x1678;eip=0x001e09; 	T(SHL(ax, cl));	// 44478 shl     ax, cl ;~ 1678:1E09
cs=0x1678;eip=0x001e0b; 	T(ADD(bx, ax));	// 44479 add     bx, ax ;~ 1678:1E0B
cs=0x1678;eip=0x001e0d; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 44480 mov     ax, [bx+4] ;~ 1678:1E0D
cs=0x1678;eip=0x001e10; 	T(NEG(ax));	// 44481 neg     ax ;~ 1678:1E10
cs=0x1678;eip=0x001e12; 	X(MOV(*(dw*)(raddr(ss,bp+di+var_202)), ax));	// 44482 mov     [bp+di+var_202], ax ;~ 1678:1E12
cs=0x1678;eip=0x001e16; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 44483 mov     bx, [bp+arg_4] ;~ 1678:1E16
cs=0x1678;eip=0x001e19; 	X(MOV(*(dw*)(raddr(ds,bx+di)), si));	// 44484 mov     [bx+di], si ;~ 1678:1E19
cs=0x1678;eip=0x001e1b; 	T(INC(si));	// 44485 inc     si ;~ 1678:1E1B
loc_26b7c:
	// 7476 
cs=0x1678;eip=0x001e1c; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 44488 mov     al, [bp+arg_0] ;~ 1678:1E1C
cs=0x1678;eip=0x001e1f; 	T(CBW);	// 44489 cbw ;~ 1678:1E1F
cs=0x1678;eip=0x001e20; 	T(CMP(ax, si));	// 44490 cmp     ax, si ;~ 1678:1E20
cs=0x1678;eip=0x001e22; 	R(JG(loc_26b5e));	// 44491 jg      short loc_26B5E ;~ 1678:1E22
cs=0x1678;eip=0x001e24; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 44492 push    [bp+arg_4] ;~ 1678:1E24
cs=0x1678;eip=0x001e27; 	T(ax = bp+var_202);	// 44493 lea     ax, [bp+var_202] ;~ 1678:1E27
cs=0x1678;eip=0x001e2b; 	X(PUSH(ax));	// 44494 push    ax ;~ 1678:1E2B
cs=0x1678;eip=0x001e2c; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 44495 mov     al, [bp+arg_0] ;~ 1678:1E2C
cs=0x1678;eip=0x001e2f; 	T(CBW);	// 44496 cbw ;~ 1678:1E2F
cs=0x1678;eip=0x001e30; 	X(PUSH(ax));	// 44497 push    ax ;~ 1678:1E30
cs=0x1678;eip=0x001e31; 	R(CALLF(heapsort_by_order,0));	// 44498 call    heapsort_by_order ;~ 1678:1E31
cs=0x1678;eip=0x001e36; 	T(ADD(sp, 6));	// 44499 add     sp, 6 ;~ 1678:1E36
cs=0x1678;eip=0x001e39; 	X(POP(si));	// 44500 pop     si ;~ 1678:1E39
cs=0x1678;eip=0x001e3a; 	X(POP(di));	// 44501 pop     di ;~ 1678:1E3A
cs=0x1678;eip=0x001e3b; 	T(MOV(sp, bp));	// 44502 mov     sp, bp ;~ 1678:1E3B
cs=0x1678;eip=0x001e3d; 	X(POP(bp));	// 44503 pop     bp ;~ 1678:1E3D
cs=0x1678;eip=0x001e3e; 	R(RETF(0));	// 44504 retf ;~ 1678:1E3E
loc_26ba0:
	// 7477 
cs=0x1678;eip=0x001e40; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 44509 mov     bx, [bp+arg_4] ;~ 1678:1E40
cs=0x1678;eip=0x001e43; 	X(MOV(*(dw*)(raddr(ds,bx)), 0));	// 44510 mov     word ptr [bx], 0 ;~ 1678:1E43
cs=0x1678;eip=0x001e47; 	X(POP(si));	// 44511 pop     si ;~ 1678:1E47
cs=0x1678;eip=0x001e48; 	X(POP(di));	// 44512 pop     di ;~ 1678:1E48
cs=0x1678;eip=0x001e49; 	T(MOV(sp, bp));	// 44513 mov     sp, bp ;~ 1678:1E49
cs=0x1678;eip=0x001e4b; 	X(POP(bp));	// 44514 pop     bp ;~ 1678:1E4B
cs=0x1678;eip=0x001e4c; 	R(RETF(0));	// 44515 retf ;~ 1678:1E4C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return true;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::k_do_fill_next: 	goto _do_fill_next;
        case m2c::k_done_ret_0: 	goto _done_ret_0;
        case m2c::k_done_ret_neg1: 	goto _done_ret_neg1;
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
        case m2c::k_primtype_line: 	goto _primtype_line;
        case m2c::k_primtype_poly: 	goto _primtype_poly;
        case m2c::k_primtype_sphere: 	goto _primtype_sphere;
        case m2c::k_primtype_wheel: 	goto _primtype_wheel;
        case m2c::k_transform_done: 	goto _transform_done;
        case m2c::kcalc_sincos80: 	goto calc_sincos80;
        case m2c::kcopy_material_list_pointers: 	goto copy_material_list_pointers;
        case m2c::kdef_26292: 	goto def_26292;
        case m2c::kget_a_poly_info: 	goto get_a_poly_info;
        case m2c::kinit_polyinfo: 	goto init_polyinfo;
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
        case m2c::kloc_25e3e: 	goto loc_25e3e;
        case m2c::kloc_25e52: 	goto loc_25e52;
        case m2c::kloc_25e77: 	goto loc_25e77;
        case m2c::kloc_25e7b: 	goto loc_25e7b;
        case m2c::kloc_25ea0: 	goto loc_25ea0;
        case m2c::kloc_25ed1: 	goto loc_25ed1;
        case m2c::kloc_25eda: 	goto loc_25eda;
        case m2c::kloc_25efa: 	goto loc_25efa;
        case m2c::kloc_25f08: 	goto loc_25f08;
        case m2c::kloc_25f0c: 	goto loc_25f0c;
        case m2c::kloc_25f1a: 	goto loc_25f1a;
        case m2c::kloc_25f25: 	goto loc_25f25;
        case m2c::kloc_25f7a: 	goto loc_25f7a;
        case m2c::kloc_25faa: 	goto loc_25faa;
        case m2c::kloc_25fde: 	goto loc_25fde;
        case m2c::kloc_25fe4: 	goto loc_25fe4;
        case m2c::kloc_25fe6: 	goto loc_25fe6;
        case m2c::kloc_25fee: 	goto loc_25fee;
        case m2c::kloc_2602c: 	goto loc_2602c;
        case m2c::kloc_26049: 	goto loc_26049;
        case m2c::kloc_260ac: 	goto loc_260ac;
        case m2c::kloc_260b7: 	goto loc_260b7;
        case m2c::kloc_26108: 	goto loc_26108;
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
        case m2c::kloc_26393: 	goto loc_26393;
        case m2c::kloc_263a4: 	goto loc_263a4;
        case m2c::kloc_263af: 	goto loc_263af;
        case m2c::kloc_263c0: 	goto loc_263c0;
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
        case m2c::kloc_2656a: 	goto loc_2656a;
        case m2c::kloc_26587: 	goto loc_26587;
        case m2c::kloc_2659d: 	goto loc_2659d;
        case m2c::kloc_265b4: 	goto loc_265b4;
        case m2c::kloc_265cb: 	goto loc_265cb;
        case m2c::kloc_265e9: 	goto loc_265e9;
        case m2c::kloc_265fc: 	goto loc_265fc;
        case m2c::kloc_26602: 	goto loc_26602;
        case m2c::kloc_26638: 	goto loc_26638;
        case m2c::kloc_26649: 	goto loc_26649;
        case m2c::kloc_2665a: 	goto loc_2665a;
        case m2c::kloc_2666b: 	goto loc_2666b;
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
        case m2c::kloc_2696f: 	goto loc_2696f;
        case m2c::kloc_26974: 	goto loc_26974;
        case m2c::kloc_269ca: 	goto loc_269ca;
        case m2c::kloc_269e8: 	goto loc_269e8;
        case m2c::kloc_269ee: 	goto loc_269ee;
        case m2c::kloc_269fc: 	goto loc_269fc;
        case m2c::kloc_26a02: 	goto loc_26a02;
        case m2c::kloc_26a1c: 	goto loc_26a1c;
        case m2c::kloc_26a20: 	goto loc_26a20;
        case m2c::kloc_26a2d: 	goto loc_26a2d;
        case m2c::kloc_26a3e: 	goto loc_26a3e;
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
        case m2c::kloc_26b5e: 	goto loc_26b5e;
        case m2c::kloc_26b7c: 	goto loc_26b7c;
        case m2c::kloc_26ba0: 	goto loc_26ba0;
        case m2c::kpolyinfo_reset: 	goto polyinfo_reset;
        case m2c::krect_adjust_from_point: 	goto rect_adjust_from_point;
        case m2c::krectlist_add_rect: 	goto rectlist_add_rect;
        case m2c::krectlist_add_rects: 	goto rectlist_add_rects;
        case m2c::kret_1678_1182: 	goto ret_1678_1182;
        case m2c::kret_1678_149a: 	goto ret_1678_149a;
        case m2c::kret_1678_1666: 	goto ret_1678_1666;
        case m2c::kret_1678_17a3: 	goto ret_1678_17a3;
        case m2c::kret_1678_17f2: 	goto ret_1678_17f2;
        case m2c::kret_1678_1812: 	goto ret_1678_1812;
        case m2c::kret_1678_188c: 	goto ret_1678_188c;
        case m2c::kret_1678_1bfe: 	goto ret_1678_1bfe;
        case m2c::kret_1678_1c3c: 	goto ret_1678_1c3c;
        case m2c::kret_1678_1c70: 	goto ret_1678_1c70;
        case m2c::kret_1678_1dea: 	goto ret_1678_1dea;
        case m2c::kret_1678_7: 	goto ret_1678_7;
        case m2c::kret_1678_8c: 	goto ret_1678_8c;
        case m2c::kret_1678_a6: 	goto ret_1678_a6;
        case m2c::krotzxy_offset: 	goto rotzxy_offset;
        case m2c::ktransformed_shape_op: 	goto transformed_shape_op;
        case m2c::ktransformed_shape_op_helper: 	goto transformed_shape_op_helper;
        case m2c::ktransformed_shape_op_helper3: 	goto transformed_shape_op_helper3;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

