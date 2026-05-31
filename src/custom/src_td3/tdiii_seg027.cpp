/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool _group17(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group17:
    _begin:
sub_27be9:
	// 45385 
#undef arg_2
#define arg_2 6
	// 45387 arg_2           = word ptr  6 ;~ 1960:0009
#undef arg_4
#define arg_4 8
	// 45388 arg_4           = word ptr  8 ;~ 1960:0009
#undef arg_6
#define arg_6 0x0A
	// 45389 arg_6           = word ptr  0Ah ;~ 1960:0009
#undef arg_8
#define arg_8 0x0C
	// 45390 arg_8           = word ptr  0Ch ;~ 1960:0009
ret_1960_9:
	// 7674 
cs=0x1960;eip=0x000009; 	X(PUSH(bp));	// 45392 push    bp ;~ 1960:0009
cs=0x1960;eip=0x00000a; 	T(MOV(bp, sp));	// 45393 mov     bp, sp ;~ 1960:000A
cs=0x1960;eip=0x00000c; 	X(PUSH(di));	// 45394 push    di ;~ 1960:000C
cs=0x1960;eip=0x00000d; 	X(PUSH(si));	// 45395 push    si ;~ 1960:000D
cs=0x1960;eip=0x00000e; 	T(CLD);	// 45396 cld ;~ 1960:000E
cs=0x1960;eip=0x00000f; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 45397 mov     si, [bp+arg_2] ;~ 1960:000F
cs=0x1960;eip=0x000012; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_4))));	// 45398 mov     dx, [bp+arg_4] ;~ 1960:0012
cs=0x1960;eip=0x000015; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_8))));	// 45399 mov     di, [bp+arg_8] ;~ 1960:0015
cs=0x1960;eip=0x000018; 	T(MOV(cx, di));	// 45400 mov     cx, di ;~ 1960:0018
cs=0x1960;eip=0x00001a; 	T(INC(cx));	// 45401 inc     cx ;~ 1960:001A
cs=0x1960;eip=0x00001b; 	T(SUB(cx, *(dw*)(raddr(ss,bp+arg_6))));	// 45402 sub     cx, [bp+arg_6] ;~ 1960:001B
cs=0x1960;eip=0x00001e; 	T(bx = offset(dseg,alors));	// 45403 lea     bx, aLors       ; "lors" ;~ 1960:001E
cs=0x1960;eip=0x000022; 	T(ADD(bx, word_37b84));	// 45404 add     bx, word_37B84 ;~ 1960:0022
cs=0x1960;eip=0x000026; __disp=*(dw*)(raddr(cs,bx));
	R(JMP(__dispatch_call));	// 45405 jmp     word ptr cs:[bx] ;~ 1960:0026
seg027_proc:
	// 45410 
loc_27c09:
	// 7675 
cs=0x1960;eip=0x000029; 	T(MOV(ax, di));	// 45411 mov     ax, di ;~ 1960:0029
cs=0x1960;eip=0x00002b; 	T(MOV(bx, si));	// 45412 mov     bx, si ;~ 1960:002B
cs=0x1960;eip=0x00002d; 	X(MUL1_2(word_38044));	// 45413 mul     word_38044 ;~ 1960:002D
cs=0x1960;eip=0x000031; 	T(ADD(bx, ax));	// 45414 add     bx, ax ;~ 1960:0031
cs=0x1960;eip=0x000033; 	T(SHL(bx, 1));	// 45415 shl     bx, 1 ;~ 1960:0033
cs=0x1960;eip=0x000035; 	T(MOV(dx, *(dw*)(raddr(ss,bp+8))));	// 45416 mov     dx, [bp+8] ;~ 1960:0035
cs=0x1960;eip=0x000038; 	T(INC(dx));	// 45417 inc     dx ;~ 1960:0038
cs=0x1960;eip=0x000039; 	T(SUB(dx, si));	// 45418 sub     dx, si ;~ 1960:0039
cs=0x1960;eip=0x00003b; 	T(MOV(si, bx));	// 45419 mov     si, bx ;~ 1960:003B
cs=0x1960;eip=0x00003d; 	X(PUSH(ds));	// 45420 push    ds ;~ 1960:003D
cs=0x1960;eip=0x00003e; 	X(PUSH(word_38044));	// 45421 push    word_38044 ;~ 1960:003E
cs=0x1960;eip=0x000042; 	T(MOV(ax, word_37bc6));	// 45422 mov     ax, word_37BC6 ;~ 1960:0042
cs=0x1960;eip=0x000045; 	T(MOV(es, ax));	// 45423 mov     es, ax ;~ 1960:0045
cs=0x1960;eip=0x000047; 	T(MOV(ax, word_37bc8));	// 45424 mov     ax, word_37BC8 ;~ 1960:0047
cs=0x1960;eip=0x00004a; 	T(MOV(ds, ax));	// 45425 mov     ds, ax ;~ 1960:004A
cs=0x1960;eip=0x00004c; 	X(POP(ax));	// 45426 pop     ax ;~ 1960:004C
cs=0x1960;eip=0x00004d; 	T(SHL(ax, 1));	// 45427 shl     ax, 1 ;~ 1960:004D
cs=0x1960;eip=0x00004f; 	T(ADD(ax, dx));	// 45428 add     ax, dx ;~ 1960:004F
cs=0x1960;eip=0x000051; 	T(ADD(ax, dx));	// 45429 add     ax, dx ;~ 1960:0051
cs=0x1960;eip=0x000053; 	T(MOV(bx, cx));	// 45430 mov     bx, cx ;~ 1960:0053
loc_27c35:
	// 7676 
cs=0x1960;eip=0x000055; 	T(MOV(cx, dx));	// 45433 mov     cx, dx ;~ 1960:0055
cs=0x1960;eip=0x000057; 	T(MOV(di, si));	// 45434 mov     di, si ;~ 1960:0057
	// 45435 rep movsw ;~ 1960:0059
cs=0x1960;eip=0x000059; 	X(	REP MOVSW);	// 45435 rep movsw ;~ 1960:0059
cs=0x1960;eip=0x00005b; 	T(SUB(si, ax));	// 45436 sub     si, ax ;~ 1960:005B
cs=0x1960;eip=0x00005d; 	T(DEC(bx));	// 45437 dec     bx ;~ 1960:005D
cs=0x1960;eip=0x00005e; 	R(JNZ(loc_27c35));	// 45438 jnz     short loc_27C35 ;~ 1960:005E
cs=0x1960;eip=0x000060; 	R(JMP(loc_27e85));	// 45439 jmp     loc_27E85 ;~ 1960:0060
loc_27c43:
	// 7677 
cs=0x1960;eip=0x000063; 	T(MOV(ax, di));	// 45443 mov     ax, di ;~ 1960:0063
cs=0x1960;eip=0x000065; 	T(MOV(bx, si));	// 45444 mov     bx, si ;~ 1960:0065
cs=0x1960;eip=0x000067; 	T(XCHG(ah, al));	// 45445 xchg    ah, al ;~ 1960:0067
cs=0x1960;eip=0x000069; 	T(SHR(ax, 1));	// 45446 shr     ax, 1 ;~ 1960:0069
cs=0x1960;eip=0x00006b; 	T(ADD(bh, al));	// 45447 add     bh, al ;~ 1960:006B
cs=0x1960;eip=0x00006d; 	T(XOR(al, al));	// 45448 xor     al, al ;~ 1960:006D
cs=0x1960;eip=0x00006f; 	T(ADD(bx, ax));	// 45449 add     bx, ax ;~ 1960:006F
cs=0x1960;eip=0x000071; 	T(SHR(ax, 1));	// 45450 shr     ax, 1 ;~ 1960:0071
cs=0x1960;eip=0x000073; 	T(SHR(ax, 1));	// 45451 shr     ax, 1 ;~ 1960:0073
cs=0x1960;eip=0x000075; 	T(ADD(bx, ax));	// 45452 add     bx, ax ;~ 1960:0075
cs=0x1960;eip=0x000077; 	T(SHR(bx, 1));	// 45453 shr     bx, 1 ;~ 1960:0077
cs=0x1960;eip=0x000079; 	T(SHR(bx, 1));	// 45454 shr     bx, 1 ;~ 1960:0079
cs=0x1960;eip=0x00007b; 	T(SHR(dx, 1));	// 45455 shr     dx, 1 ;~ 1960:007B
cs=0x1960;eip=0x00007d; 	T(SHR(dx, 1));	// 45456 shr     dx, 1 ;~ 1960:007D
cs=0x1960;eip=0x00007f; 	T(SHR(si, 1));	// 45457 shr     si, 1 ;~ 1960:007F
cs=0x1960;eip=0x000081; 	T(SHR(si, 1));	// 45458 shr     si, 1 ;~ 1960:0081
cs=0x1960;eip=0x000083; 	R(JMP(loc_27d15));	// 45459 jmp     loc_27D15 ;~ 1960:0083
loc_27c66:
	// 7678 
cs=0x1960;eip=0x000086; 	T(MOV(ax, di));	// 45463 mov     ax, di ;~ 1960:0086
cs=0x1960;eip=0x000088; 	T(MOV(bx, si));	// 45464 mov     bx, si ;~ 1960:0088
cs=0x1960;eip=0x00008a; 	T(XCHG(ah, al));	// 45465 xchg    ah, al ;~ 1960:008A
cs=0x1960;eip=0x00008c; 	T(SHR(ax, 1));	// 45466 shr     ax, 1 ;~ 1960:008C
cs=0x1960;eip=0x00008e; 	T(SHR(bx, 1));	// 45467 shr     bx, 1 ;~ 1960:008E
cs=0x1960;eip=0x000090; 	T(ADD(bh, al));	// 45468 add     bh, al ;~ 1960:0090
cs=0x1960;eip=0x000092; 	T(XOR(al, al));	// 45469 xor     al, al ;~ 1960:0092
cs=0x1960;eip=0x000094; 	T(ADD(bx, ax));	// 45470 add     bx, ax ;~ 1960:0094
cs=0x1960;eip=0x000096; 	T(SHR(ax, 1));	// 45471 shr     ax, 1 ;~ 1960:0096
cs=0x1960;eip=0x000098; 	T(SHR(ax, 1));	// 45472 shr     ax, 1 ;~ 1960:0098
cs=0x1960;eip=0x00009a; 	T(ADD(bx, ax));	// 45473 add     bx, ax ;~ 1960:009A
cs=0x1960;eip=0x00009c; 	T(SHR(bx, 1));	// 45474 shr     bx, 1 ;~ 1960:009C
cs=0x1960;eip=0x00009e; 	T(SHR(bx, 1));	// 45475 shr     bx, 1 ;~ 1960:009E
cs=0x1960;eip=0x0000a0; 	T(SHR(dx, 1));	// 45476 shr     dx, 1 ;~ 1960:00A0
cs=0x1960;eip=0x0000a2; 	T(SHR(dx, 1));	// 45477 shr     dx, 1 ;~ 1960:00A2
cs=0x1960;eip=0x0000a4; 	T(SHR(dx, 1));	// 45478 shr     dx, 1 ;~ 1960:00A4
cs=0x1960;eip=0x0000a6; 	T(SHR(si, 1));	// 45479 shr     si, 1 ;~ 1960:00A6
cs=0x1960;eip=0x0000a8; 	T(SHR(si, 1));	// 45480 shr     si, 1 ;~ 1960:00A8
cs=0x1960;eip=0x0000aa; 	T(SHR(si, 1));	// 45481 shr     si, 1 ;~ 1960:00AA
cs=0x1960;eip=0x0000ac; 	R(JMP(loc_27d15));	// 45482 jmp     loc_27D15 ;~ 1960:00AC
loc_27c8f:
	// 7679 
cs=0x1960;eip=0x0000af; 	T(MOV(ax, di));	// 45486 mov     ax, di ;~ 1960:00AF
cs=0x1960;eip=0x0000b1; 	T(MOV(bx, si));	// 45487 mov     bx, si ;~ 1960:00B1
cs=0x1960;eip=0x0000b3; 	T(SHL(bx, 1));	// 45488 shl     bx, 1 ;~ 1960:00B3
cs=0x1960;eip=0x0000b5; 	T(SHL(bx, 1));	// 45489 shl     bx, 1 ;~ 1960:00B5
cs=0x1960;eip=0x0000b7; 	T(SHR(ax, 1));	// 45490 shr     ax, 1 ;~ 1960:00B7
cs=0x1960;eip=0x0000b9; 	T(RCR(bx, 1));	// 45491 rcr     bx, 1 ;~ 1960:00B9
cs=0x1960;eip=0x0000bb; 	T(SHR(ax, 1));	// 45492 shr     ax, 1 ;~ 1960:00BB
cs=0x1960;eip=0x0000bd; 	T(RCR(bx, 1));	// 45493 rcr     bx, 1 ;~ 1960:00BD
cs=0x1960;eip=0x0000bf; 	T(SHR(bx, 1));	// 45494 shr     bx, 1 ;~ 1960:00BF
cs=0x1960;eip=0x0000c1; 	T(XCHG(ah, al));	// 45495 xchg    ah, al ;~ 1960:00C1
cs=0x1960;eip=0x0000c3; 	T(SHR(ax, 1));	// 45496 shr     ax, 1 ;~ 1960:00C3
cs=0x1960;eip=0x0000c5; 	T(ADD(bx, ax));	// 45497 add     bx, ax ;~ 1960:00C5
cs=0x1960;eip=0x0000c7; 	T(SHR(ax, 1));	// 45498 shr     ax, 1 ;~ 1960:00C7
cs=0x1960;eip=0x0000c9; 	T(SHR(ax, 1));	// 45499 shr     ax, 1 ;~ 1960:00C9
cs=0x1960;eip=0x0000cb; 	T(ADD(bx, ax));	// 45500 add     bx, ax ;~ 1960:00CB
cs=0x1960;eip=0x0000cd; 	T(SHR(dx, 1));	// 45501 shr     dx, 1 ;~ 1960:00CD
cs=0x1960;eip=0x0000cf; 	T(SHR(si, 1));	// 45502 shr     si, 1 ;~ 1960:00CF
cs=0x1960;eip=0x0000d1; 	R(JMP(loc_27d15));	// 45503 jmp     short loc_27D15 ;~ 1960:00D1
loc_27cb3:
	// 7680 
cs=0x1960;eip=0x0000d3; 	T(SHL(si, 1));	// 45507 shl     si, 1 ;~ 1960:00D3
cs=0x1960;eip=0x0000d5; 	T(ADD(si, 0x28));	// 45508 add     si, 28h ; '(' ;~ 1960:00D5
cs=0x1960;eip=0x0000d8; 	T(SHL(dx, 1));	// 45509 shl     dx, 1 ;~ 1960:00D8
cs=0x1960;eip=0x0000da; 	T(ADD(dx, 0x29));	// 45510 add     dx, 29h ; ')' ;~ 1960:00DA
cs=0x1960;eip=0x0000dd; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 45511 mov     ax, [bp+0Ah] ;~ 1960:00DD
cs=0x1960;eip=0x0000e0; 	T(MOV(cx, ax));	// 45512 mov     cx, ax ;~ 1960:00E0
cs=0x1960;eip=0x0000e2; 	T(SAR(ax, 1));	// 45513 sar     ax, 1 ;~ 1960:00E2
cs=0x1960;eip=0x0000e4; 	T(ADD(ax, cx));	// 45514 add     ax, cx ;~ 1960:00E4
cs=0x1960;eip=0x0000e6; 	T(ADD(ax, 0x18));	// 45515 add     ax, 18h ;~ 1960:00E6
cs=0x1960;eip=0x0000e9; 	T(MOV(cx, ax));	// 45516 mov     cx, ax ;~ 1960:00E9
cs=0x1960;eip=0x0000eb; 	T(MOV(ax, di));	// 45517 mov     ax, di ;~ 1960:00EB
cs=0x1960;eip=0x0000ed; 	T(SAR(ax, 1));	// 45518 sar     ax, 1 ;~ 1960:00ED
cs=0x1960;eip=0x0000ef; 	T(ADD(ax, di));	// 45519 add     ax, di ;~ 1960:00EF
cs=0x1960;eip=0x0000f1; 	T(ADD(ax, 0x18));	// 45520 add     ax, 18h ;~ 1960:00F1
cs=0x1960;eip=0x0000f4; 	T(AND(di, 1));	// 45521 and     di, 1 ;~ 1960:00F4
cs=0x1960;eip=0x0000f7; 	T(ADD(di, ax));	// 45522 add     di, ax ;~ 1960:00F7
cs=0x1960;eip=0x0000f9; 	T(NEG(cx));	// 45523 neg     cx ;~ 1960:00F9
cs=0x1960;eip=0x0000fb; 	T(ADD(cx, di));	// 45524 add     cx, di ;~ 1960:00FB
cs=0x1960;eip=0x0000fd; 	T(INC(cx));	// 45525 inc     cx ;~ 1960:00FD
loc_27cde:
	// 7681 
cs=0x1960;eip=0x0000fe; 	T(MOV(ax, di));	// 45528 mov     ax, di ;~ 1960:00FE
cs=0x1960;eip=0x000100; 	T(MOV(bx, si));	// 45529 mov     bx, si ;~ 1960:0100
cs=0x1960;eip=0x000102; 	T(SHR(ax, 1));	// 45530 shr     ax, 1 ;~ 1960:0102
cs=0x1960;eip=0x000104; 	T(RCR(bx, 1));	// 45531 rcr     bx, 1 ;~ 1960:0104
cs=0x1960;eip=0x000106; 	T(SHR(ax, 1));	// 45532 shr     ax, 1 ;~ 1960:0106
cs=0x1960;eip=0x000108; 	T(RCR(bx, 1));	// 45533 rcr     bx, 1 ;~ 1960:0108
cs=0x1960;eip=0x00010a; 	T(SHR(bx, 1));	// 45534 shr     bx, 1 ;~ 1960:010A
cs=0x1960;eip=0x00010c; 	T(MOV(ah, 0x5A));	// 45535 mov     ah, 5Ah ; 'Z' ;~ 1960:010C
cs=0x1960;eip=0x00010e; 	T(MUL1_1(ah));	// 45536 mul     ah ;~ 1960:010E
cs=0x1960;eip=0x000110; 	T(ADD(bx, ax));	// 45537 add     bx, ax ;~ 1960:0110
cs=0x1960;eip=0x000112; 	T(SHR(dx, 1));	// 45538 shr     dx, 1 ;~ 1960:0112
cs=0x1960;eip=0x000114; 	T(SHR(dx, 1));	// 45539 shr     dx, 1 ;~ 1960:0114
cs=0x1960;eip=0x000116; 	T(SHR(dx, 1));	// 45540 shr     dx, 1 ;~ 1960:0116
cs=0x1960;eip=0x000118; 	T(SHR(si, 1));	// 45541 shr     si, 1 ;~ 1960:0118
cs=0x1960;eip=0x00011a; 	T(SHR(si, 1));	// 45542 shr     si, 1 ;~ 1960:011A
cs=0x1960;eip=0x00011c; 	T(SHR(si, 1));	// 45543 shr     si, 1 ;~ 1960:011C
cs=0x1960;eip=0x00011e; 	T(INC(dx));	// 45544 inc     dx ;~ 1960:011E
cs=0x1960;eip=0x00011f; 	T(SUB(dx, si));	// 45545 sub     dx, si ;~ 1960:011F
cs=0x1960;eip=0x000121; 	T(MOV(si, bx));	// 45546 mov     si, bx ;~ 1960:0121
cs=0x1960;eip=0x000123; 	X(PUSH(ds));	// 45547 push    ds ;~ 1960:0123
cs=0x1960;eip=0x000124; 	T(MOV(ax, word_37bc6));	// 45548 mov     ax, word_37BC6 ;~ 1960:0124
cs=0x1960;eip=0x000127; 	T(MOV(es, ax));	// 45549 mov     es, ax ;~ 1960:0127
cs=0x1960;eip=0x000129; 	T(MOV(ax, word_37bc8));	// 45550 mov     ax, word_37BC8 ;~ 1960:0129
cs=0x1960;eip=0x00012c; 	T(MOV(ds, ax));	// 45551 mov     ds, ax ;~ 1960:012C
cs=0x1960;eip=0x00012e; 	T(MOV(ax, 0x5A));	// 45552 mov     ax, 5Ah ; 'Z' ;~ 1960:012E
cs=0x1960;eip=0x000131; 	T(MOV(bx, cx));	// 45553 mov     bx, cx ;~ 1960:0131
cs=0x1960;eip=0x000133; 	R(JMP(loc_27d5b));	// 45554 jmp     short loc_27D5B ;~ 1960:0133
loc_27d15:
	// 7682 
cs=0x1960;eip=0x000135; 	X(PUSH(ds));	// 45559 push    ds ;~ 1960:0135
cs=0x1960;eip=0x000136; 	T(INC(dx));	// 45560 inc     dx ;~ 1960:0136
cs=0x1960;eip=0x000137; 	T(SUB(dx, si));	// 45561 sub     dx, si ;~ 1960:0137
cs=0x1960;eip=0x000139; 	T(MOV(si, bx));	// 45562 mov     si, bx ;~ 1960:0139
cs=0x1960;eip=0x00013b; 	T(MOV(bx, word_38018));	// 45563 mov     bx, word_38018 ;~ 1960:013B
cs=0x1960;eip=0x00013f; 	T(MOV(di, word_37f94));	// 45564 mov     di, word_37F94 ;~ 1960:013F
cs=0x1960;eip=0x000143; 	T(MOV(ax, word_37bc6));	// 45565 mov     ax, word_37BC6 ;~ 1960:0143
cs=0x1960;eip=0x000146; 	T(MOV(es, ax));	// 45566 mov     es, ax ;~ 1960:0146
cs=0x1960;eip=0x000148; 	T(MOV(ax, word_37bc8));	// 45567 mov     ax, word_37BC8 ;~ 1960:0148
cs=0x1960;eip=0x00014b; 	T(MOV(ds, ax));	// 45568 mov     ds, ax ;~ 1960:014B
cs=0x1960;eip=0x00014d; 	T(MOV(ax, bx));	// 45569 mov     ax, bx ;~ 1960:014D
cs=0x1960;eip=0x00014f; 	T(MOV(bx, cx));	// 45570 mov     bx, cx ;~ 1960:014F
cs=0x1960;eip=0x000151; 	T(CMP(di, 0x6000));	// 45571 cmp     di, 6000h ;~ 1960:0151
cs=0x1960;eip=0x000155; 	R(JZ(loc_27d5b));	// 45572 jz      short loc_27D5B ;~ 1960:0155
loc_27d37:
	// 7683 
cs=0x1960;eip=0x000157; 	T(MOV(cx, dx));	// 45576 mov     cx, dx ;~ 1960:0157
cs=0x1960;eip=0x000159; 	T(MOV(di, si));	// 45577 mov     di, si ;~ 1960:0159
	// 45578 rep movsb ;~ 1960:015B
cs=0x1960;eip=0x00015b; 	X(	REP MOVSB);	// 45578 rep movsb ;~ 1960:015B
cs=0x1960;eip=0x00015d; 	T(SUB(si, dx));	// 45579 sub     si, dx ;~ 1960:015D
cs=0x1960;eip=0x00015f; 	T(TEST(si, 0x2000));	// 45580 test    si, 2000h ;~ 1960:015F
cs=0x1960;eip=0x000163; 	R(JZ(loc_27d4f));	// 45581 jz      short loc_27D4F ;~ 1960:0163
cs=0x1960;eip=0x000165; 	T(XOR(si, 0x2000));	// 45582 xor     si, 2000h ;~ 1960:0165
cs=0x1960;eip=0x000169; 	T(DEC(bx));	// 45583 dec     bx ;~ 1960:0169
cs=0x1960;eip=0x00016a; 	R(JNZ(loc_27d37));	// 45584 jnz     short loc_27D37 ;~ 1960:016A
cs=0x1960;eip=0x00016c; 	R(JMP(loc_27e85));	// 45585 jmp     loc_27E85 ;~ 1960:016C
loc_27d4f:
	// 7684 
cs=0x1960;eip=0x00016f; 	T(SUB(si, ax));	// 45589 sub     si, ax ;~ 1960:016F
cs=0x1960;eip=0x000171; 	T(XOR(si, 0x2000));	// 45590 xor     si, 2000h ;~ 1960:0171
cs=0x1960;eip=0x000175; 	T(DEC(bx));	// 45591 dec     bx ;~ 1960:0175
cs=0x1960;eip=0x000176; 	R(JNZ(loc_27d37));	// 45592 jnz     short loc_27D37 ;~ 1960:0176
cs=0x1960;eip=0x000178; 	R(JMP(loc_27e85));	// 45593 jmp     loc_27E85 ;~ 1960:0178
loc_27d5b:
	// 7685 
cs=0x1960;eip=0x00017b; 	T(MOV(cx, dx));	// 45598 mov     cx, dx ;~ 1960:017B
cs=0x1960;eip=0x00017d; 	T(MOV(di, si));	// 45599 mov     di, si ;~ 1960:017D
	// 45600 rep movsb ;~ 1960:017F
cs=0x1960;eip=0x00017f; 	X(	REP MOVSB);	// 45600 rep movsb ;~ 1960:017F
cs=0x1960;eip=0x000181; 	T(SUB(si, dx));	// 45601 sub     si, dx ;~ 1960:0181
cs=0x1960;eip=0x000183; 	T(TEST(si, 0x0E000));	// 45602 test    si, 0E000h ;~ 1960:0183
cs=0x1960;eip=0x000187; 	R(JZ(loc_27d73));	// 45603 jz      short loc_27D73 ;~ 1960:0187
cs=0x1960;eip=0x000189; 	T(SUB(si, 0x2000));	// 45604 sub     si, 2000h ;~ 1960:0189
cs=0x1960;eip=0x00018d; 	T(DEC(bx));	// 45605 dec     bx ;~ 1960:018D
cs=0x1960;eip=0x00018e; 	R(JNZ(loc_27d5b));	// 45606 jnz     short loc_27D5B ;~ 1960:018E
cs=0x1960;eip=0x000190; 	R(JMP(loc_27e85));	// 45607 jmp     loc_27E85 ;~ 1960:0190
loc_27d73:
	// 7686 
cs=0x1960;eip=0x000193; 	T(OR(si, 0x6000));	// 45611 or      si, 6000h ;~ 1960:0193
cs=0x1960;eip=0x000197; 	T(SUB(si, ax));	// 45612 sub     si, ax ;~ 1960:0197
cs=0x1960;eip=0x000199; 	T(DEC(bx));	// 45613 dec     bx ;~ 1960:0199
cs=0x1960;eip=0x00019a; 	R(JNZ(loc_27d5b));	// 45614 jnz     short loc_27D5B ;~ 1960:019A
cs=0x1960;eip=0x00019c; 	R(JMP(loc_27e85));	// 45615 jmp     loc_27E85 ;~ 1960:019C
loc_27d7f:
	// 7687 
cs=0x1960;eip=0x00019f; 	X(PUSH(ax));	// 45619 push    ax ;~ 1960:019F
cs=0x1960;eip=0x0001a0; 	T(MOV(al, 5));	// 45620 mov     al, 5 ;~ 1960:01A0
cs=0x1960;eip=0x0001a2; 	T(MOV(ah, 1));	// 45621 mov     ah, 1 ;~ 1960:01A2
cs=0x1960;eip=0x0001a4; 	X(PUSH(dx));	// 45622 push    dx ;~ 1960:01A4
cs=0x1960;eip=0x0001a5; 	T(MOV(dx, 0x3CE));	// 45623 mov     dx, 3CEh ;~ 1960:01A5
cs=0x1960;eip=0x0001a8; 	R(OUT(dx, ax));	// 45624 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1960:01A8
cs=0x1960;eip=0x0001a9; 	X(POP(dx));	// 45626 pop     dx ;~ 1960:01A9
cs=0x1960;eip=0x0001aa; 	X(POP(ax));	// 45627 pop     ax ;~ 1960:01AA
cs=0x1960;eip=0x0001ab; 	T(SHR(si, 1));	// 45628 shr     si, 1 ;~ 1960:01AB
cs=0x1960;eip=0x0001ad; 	T(SHR(si, 1));	// 45629 shr     si, 1 ;~ 1960:01AD
cs=0x1960;eip=0x0001af; 	T(SHR(si, 1));	// 45630 shr     si, 1 ;~ 1960:01AF
cs=0x1960;eip=0x0001b1; 	T(MOV(bx, dx));	// 45631 mov     bx, dx ;~ 1960:01B1
cs=0x1960;eip=0x0001b3; 	T(SHR(bx, 1));	// 45632 shr     bx, 1 ;~ 1960:01B3
cs=0x1960;eip=0x0001b5; 	T(SHR(bx, 1));	// 45633 shr     bx, 1 ;~ 1960:01B5
cs=0x1960;eip=0x0001b7; 	T(SHR(bx, 1));	// 45634 shr     bx, 1 ;~ 1960:01B7
cs=0x1960;eip=0x0001b9; 	T(INC(bx));	// 45635 inc     bx ;~ 1960:01B9
cs=0x1960;eip=0x0001ba; 	T(SUB(bx, si));	// 45636 sub     bx, si ;~ 1960:01BA
cs=0x1960;eip=0x0001bc; 	T(MOV(ax, word_38018));	// 45637 mov     ax, word_38018 ;~ 1960:01BC
cs=0x1960;eip=0x0001bf; 	T(MUL1_2(di));	// 45638 mul     di ;~ 1960:01BF
cs=0x1960;eip=0x0001c1; 	T(ADD(si, ax));	// 45639 add     si, ax ;~ 1960:01C1
cs=0x1960;eip=0x0001c3; 	X(PUSH(ds));	// 45640 push    ds ;~ 1960:01C3
cs=0x1960;eip=0x0001c4; 	T(MOV(di, word_38018));	// 45641 mov     di, word_38018 ;~ 1960:01C4
cs=0x1960;eip=0x0001c8; 	T(MOV(ax, word_37bc6));	// 45642 mov     ax, word_37BC6 ;~ 1960:01C8
cs=0x1960;eip=0x0001cb; 	T(MOV(es, ax));	// 45643 mov     es, ax ;~ 1960:01CB
cs=0x1960;eip=0x0001cd; 	T(MOV(ax, word_37bc8));	// 45644 mov     ax, word_37BC8 ;~ 1960:01CD
cs=0x1960;eip=0x0001d0; 	T(MOV(ds, ax));	// 45645 mov     ds, ax ;~ 1960:01D0
cs=0x1960;eip=0x0001d2; 	T(MOV(ax, di));	// 45646 mov     ax, di ;~ 1960:01D2
cs=0x1960;eip=0x0001d4; 	T(ADD(ax, bx));	// 45647 add     ax, bx ;~ 1960:01D4
cs=0x1960;eip=0x0001d6; 	T(MOV(dx, cx));	// 45648 mov     dx, cx ;~ 1960:01D6
loc_27db8:
	// 7688 
cs=0x1960;eip=0x0001d8; 	T(MOV(cx, bx));	// 45651 mov     cx, bx ;~ 1960:01D8
cs=0x1960;eip=0x0001da; 	T(MOV(di, si));	// 45652 mov     di, si ;~ 1960:01DA
	// 45653 rep movsb ;~ 1960:01DC
cs=0x1960;eip=0x0001dc; 	X(	REP MOVSB);	// 45653 rep movsb ;~ 1960:01DC
cs=0x1960;eip=0x0001de; 	T(SUB(si, ax));	// 45654 sub     si, ax ;~ 1960:01DE
cs=0x1960;eip=0x0001e0; 	T(DEC(dx));	// 45655 dec     dx ;~ 1960:01E0
cs=0x1960;eip=0x0001e1; 	R(JNZ(loc_27db8));	// 45656 jnz     short loc_27DB8 ;~ 1960:01E1
cs=0x1960;eip=0x0001e3; 	X(PUSH(ax));	// 45657 push    ax ;~ 1960:01E3
cs=0x1960;eip=0x0001e4; 	T(MOV(al, 5));	// 45658 mov     al, 5 ;~ 1960:01E4
cs=0x1960;eip=0x0001e6; 	T(MOV(ah, 0));	// 45659 mov     ah, 0 ;~ 1960:01E6
cs=0x1960;eip=0x0001e8; 	X(PUSH(dx));	// 45660 push    dx ;~ 1960:01E8
cs=0x1960;eip=0x0001e9; 	T(MOV(dx, 0x3CE));	// 45661 mov     dx, 3CEh ;~ 1960:01E9
cs=0x1960;eip=0x0001ec; 	R(OUT(dx, ax));	// 45662 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1960:01EC
cs=0x1960;eip=0x0001ed; 	X(POP(dx));	// 45669 pop     dx ;~ 1960:01ED
cs=0x1960;eip=0x0001ee; 	X(POP(ax));	// 45670 pop     ax ;~ 1960:01EE
cs=0x1960;eip=0x0001ef; 	R(JMP(loc_27e85));	// 45671 jmp     loc_27E85 ;~ 1960:01EF
ret_1960_1f2:
	// 7689 
cs=0x1960;eip=0x0001f2; 	T(MOV(ax, di));	// 45673 mov     ax, di ;~ 1960:01F2
cs=0x1960;eip=0x0001f4; 	T(MOV(bx, si));	// 45674 mov     bx, si ;~ 1960:01F4
cs=0x1960;eip=0x0001f6; 	T(XCHG(ah, al));	// 45675 xchg    ah, al ;~ 1960:01F6
cs=0x1960;eip=0x0001f8; 	T(ADD(bx, ax));	// 45676 add     bx, ax ;~ 1960:01F8
cs=0x1960;eip=0x0001fa; 	T(SHR(ax, 1));	// 45677 shr     ax, 1 ;~ 1960:01FA
cs=0x1960;eip=0x0001fc; 	T(SHR(ax, 1));	// 45678 shr     ax, 1 ;~ 1960:01FC
cs=0x1960;eip=0x0001fe; 	T(ADD(bx, ax));	// 45679 add     bx, ax ;~ 1960:01FE
cs=0x1960;eip=0x000200; 	T(INC(dx));	// 45680 inc     dx ;~ 1960:0200
cs=0x1960;eip=0x000201; 	T(SUB(dx, si));	// 45681 sub     dx, si ;~ 1960:0201
cs=0x1960;eip=0x000203; 	T(MOV(si, bx));	// 45682 mov     si, bx ;~ 1960:0203
cs=0x1960;eip=0x000205; 	X(PUSH(ds));	// 45683 push    ds ;~ 1960:0205
cs=0x1960;eip=0x000206; 	T(MOV(ax, word_37bc6));	// 45684 mov     ax, word_37BC6 ;~ 1960:0206
cs=0x1960;eip=0x000209; 	T(MOV(es, ax));	// 45685 mov     es, ax ;~ 1960:0209
cs=0x1960;eip=0x00020b; 	T(MOV(ax, word_37bc8));	// 45686 mov     ax, word_37BC8 ;~ 1960:020B
cs=0x1960;eip=0x00020e; 	T(MOV(ds, ax));	// 45687 mov     ds, ax ;~ 1960:020E
cs=0x1960;eip=0x000210; 	T(MOV(ax, 0x140));	// 45688 mov     ax, 140h ;~ 1960:0210
cs=0x1960;eip=0x000213; 	T(ADD(ax, dx));	// 45689 add     ax, dx ;~ 1960:0213
cs=0x1960;eip=0x000215; 	T(MOV(bx, cx));	// 45690 mov     bx, cx ;~ 1960:0215
loc_27df7:
	// 7690 
cs=0x1960;eip=0x000217; 	T(MOV(cx, dx));	// 45693 mov     cx, dx ;~ 1960:0217
cs=0x1960;eip=0x000219; 	T(MOV(di, si));	// 45694 mov     di, si ;~ 1960:0219
	// 45695 rep movsb ;~ 1960:021B
cs=0x1960;eip=0x00021b; 	X(	REP MOVSB);	// 45695 rep movsb ;~ 1960:021B
cs=0x1960;eip=0x00021d; 	T(SUB(si, ax));	// 45696 sub     si, ax ;~ 1960:021D
cs=0x1960;eip=0x00021f; 	T(DEC(bx));	// 45697 dec     bx ;~ 1960:021F
cs=0x1960;eip=0x000220; 	R(JNZ(loc_27df7));	// 45698 jnz     short loc_27DF7 ;~ 1960:0220
cs=0x1960;eip=0x000222; 	R(JMP(loc_27e85));	// 45699 jmp     loc_27E85 ;~ 1960:0222
ret_1960_225:
	// 7691 
cs=0x1960;eip=0x000225; 	T(MOV(ax, di));	// 45701 mov     ax, di ;~ 1960:0225
cs=0x1960;eip=0x000227; 	T(MOV(bx, si));	// 45702 mov     bx, si ;~ 1960:0227
cs=0x1960;eip=0x000229; 	T(XCHG(ah, al));	// 45703 xchg    ah, al ;~ 1960:0229
cs=0x1960;eip=0x00022b; 	T(ADD(bx, ax));	// 45704 add     bx, ax ;~ 1960:022B
cs=0x1960;eip=0x00022d; 	T(SHR(ax, 1));	// 45705 shr     ax, 1 ;~ 1960:022D
cs=0x1960;eip=0x00022f; 	T(SHR(ax, 1));	// 45706 shr     ax, 1 ;~ 1960:022F
cs=0x1960;eip=0x000231; 	T(ADD(bx, ax));	// 45707 add     bx, ax ;~ 1960:0231
cs=0x1960;eip=0x000233; 	T(SHR(bx, 1));	// 45708 shr     bx, 1 ;~ 1960:0233
cs=0x1960;eip=0x000235; 	T(SHR(bx, 1));	// 45709 shr     bx, 1 ;~ 1960:0235
cs=0x1960;eip=0x000237; 	X(MOV(word_37bb9, bx));	// 45710 mov     word_37BB9, bx ;~ 1960:0237
cs=0x1960;eip=0x00023b; 	T(MOV(di, cx));	// 45711 mov     di, cx ;~ 1960:023B
cs=0x1960;eip=0x00023d; 	T(MOV(cx, si));	// 45712 mov     cx, si ;~ 1960:023D
cs=0x1960;eip=0x00023f; 	T(AND(cl, 3));	// 45713 and     cl, 3 ;~ 1960:023F
cs=0x1960;eip=0x000242; 	T(MOV(al, 1));	// 45714 mov     al, 1 ;~ 1960:0242
cs=0x1960;eip=0x000244; 	T(SHL(al, cl));	// 45715 shl     al, cl ;~ 1960:0244
cs=0x1960;eip=0x000246; 	X(MOV(byte_37bc2, cl));	// 45716 mov     byte_37BC2, cl ;~ 1960:0246
cs=0x1960;eip=0x00024a; 	X(MOV(byte_37bbf, al));	// 45717 mov     byte_37BBF, al ;~ 1960:024A
cs=0x1960;eip=0x00024d; 	T(NEG(si));	// 45718 neg     si ;~ 1960:024D
cs=0x1960;eip=0x00024f; 	T(ADD(si, dx));	// 45719 add     si, dx ;~ 1960:024F
cs=0x1960;eip=0x000251; 	T(INC(si));	// 45720 inc     si ;~ 1960:0251
cs=0x1960;eip=0x000252; 	T(MOV(ax, word_37bc6));	// 45721 mov     ax, word_37BC6 ;~ 1960:0252
cs=0x1960;eip=0x000255; 	T(MOV(es, ax));	// 45722 mov     es, ax ;~ 1960:0255
loc_27e37:
	// 7692 
cs=0x1960;eip=0x000257; 	T(MOV(dx, 0x3C4));	// 45725 mov     dx, 3C4h ;~ 1960:0257
cs=0x1960;eip=0x00025a; 	T(MOV(al, 2));	// 45726 mov     al, 2 ;~ 1960:025A
cs=0x1960;eip=0x00025c; 	T(MOV(ah, byte_37bbf));	// 45727 mov     ah, byte_37BBF ;~ 1960:025C
cs=0x1960;eip=0x000260; 	R(OUT(dx, ax));	// 45728 out     dx, ax          ; EGA: sequencer address reg ;~ 1960:0260
cs=0x1960;eip=0x000261; 	T(MOV(dl, 0x0CE));	// 45731 mov     dl, 0CEh ; 'Î' ;~ 1960:0261
cs=0x1960;eip=0x000263; 	T(MOV(al, 4));	// 45732 mov     al, 4 ;~ 1960:0263
cs=0x1960;eip=0x000265; 	T(MOV(ah, byte_37bc2));	// 45733 mov     ah, byte_37BC2 ;~ 1960:0265
cs=0x1960;eip=0x000269; 	R(OUT(dx, ax));	// 45734 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1960:0269
cs=0x1960;eip=0x00026a; 	T(MOV(bx, word_37bb9));	// 45737 mov     bx, word_37BB9 ;~ 1960:026A
cs=0x1960;eip=0x00026e; 	T(MOV(cx, di));	// 45738 mov     cx, di ;~ 1960:026E
cs=0x1960;eip=0x000270; 	T(MOV(dx, 0x50));	// 45739 mov     dx, 50h ; 'P' ;~ 1960:0270
cs=0x1960;eip=0x000273; 	X(PUSH(ds));	// 45740 push    ds ;~ 1960:0273
cs=0x1960;eip=0x000274; 	T(MOV(ax, word_37bc8));	// 45741 mov     ax, word_37BC8 ;~ 1960:0274
cs=0x1960;eip=0x000277; 	T(MOV(ds, ax));	// 45742 mov     ds, ax ;~ 1960:0277
loc_27e59:
	// 7693 
cs=0x1960;eip=0x000279; 	T(MOV(al, *(raddr(ds,bx))));	// 45745 mov     al, [bx] ;~ 1960:0279
cs=0x1960;eip=0x00027b; 	X(MOV(*(raddr(es,bx)), al));	// 45746 mov     es:[bx], al ;~ 1960:027B
cs=0x1960;eip=0x00027e; 	T(SUB(bx, dx));	// 45747 sub     bx, dx ;~ 1960:027E
cs=0x1960;eip=0x000280; 	R(LOOP(loc_27e59));	// 45748 loop    loc_27E59 ;~ 1960:0280
cs=0x1960;eip=0x000282; 	T(DEC(si));	// 45749 dec     si ;~ 1960:0282
cs=0x1960;eip=0x000283; 	R(JZ(loc_27e85));	// 45750 jz      short loc_27E85 ;~ 1960:0283
cs=0x1960;eip=0x000285; 	X(POP(ds));	// 45751 pop     ds ;~ 1960:0285
cs=0x1960;eip=0x000286; 	T(MOV(cl, byte_37bc2));	// 45752 mov     cl, byte_37BC2 ;~ 1960:0286
cs=0x1960;eip=0x00028a; 	T(INC(cl));	// 45753 inc     cl ;~ 1960:028A
cs=0x1960;eip=0x00028c; 	T(AND(cl, 3));	// 45754 and     cl, 3 ;~ 1960:028C
cs=0x1960;eip=0x00028f; 	T(MOV(al, 1));	// 45755 mov     al, 1 ;~ 1960:028F
cs=0x1960;eip=0x000291; 	T(SHL(al, cl));	// 45756 shl     al, cl ;~ 1960:0291
cs=0x1960;eip=0x000293; 	X(MOV(byte_37bc2, cl));	// 45757 mov     byte_37BC2, cl ;~ 1960:0293
cs=0x1960;eip=0x000297; 	X(MOV(byte_37bbf, al));	// 45758 mov     byte_37BBF, al ;~ 1960:0297
cs=0x1960;eip=0x00029a; 	T(MOV(ax, 1));	// 45759 mov     ax, 1 ;~ 1960:029A
cs=0x1960;eip=0x00029d; 	T(SHR(ax, cl));	// 45760 shr     ax, cl ;~ 1960:029D
cs=0x1960;eip=0x00029f; 	X(ADD(word_37bb9, ax));	// 45761 add     word_37BB9, ax ;~ 1960:029F
cs=0x1960;eip=0x0002a3; 	R(JMP(loc_27e37));	// 45762 jmp     short loc_27E37 ;~ 1960:02A3
loc_27e85:
	// 7694 
cs=0x1960;eip=0x0002a5; 	X(POP(ds));	// 45767 pop     ds ;~ 1960:02A5
loc_27e86:
	// 7695 
cs=0x1960;eip=0x0002a6; 	T(XOR(ax, ax));	// 45770 xor     ax, ax ;~ 1960:02A6
cs=0x1960;eip=0x0002a8; 	X(POP(si));	// 45771 pop     si ;~ 1960:02A8
cs=0x1960;eip=0x0002a9; 	X(POP(di));	// 45772 pop     di ;~ 1960:02A9
cs=0x1960;eip=0x0002aa; 	X(POP(bp));	// 45773 pop     bp ;~ 1960:02AA
cs=0x1960;eip=0x0002ab; 	R(RETF(0));	// 45774 retf ;~ 1960:02AB

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_27c09: 	goto loc_27c09;
        case m2c::kloc_27c35: 	goto loc_27c35;
        case m2c::kloc_27c43: 	goto loc_27c43;
        case m2c::kloc_27c66: 	goto loc_27c66;
        case m2c::kloc_27c8f: 	goto loc_27c8f;
        case m2c::kloc_27cb3: 	goto loc_27cb3;
        case m2c::kloc_27cde: 	goto loc_27cde;
        case m2c::kloc_27d15: 	goto loc_27d15;
        case m2c::kloc_27d37: 	goto loc_27d37;
        case m2c::kloc_27d4f: 	goto loc_27d4f;
        case m2c::kloc_27d5b: 	goto loc_27d5b;
        case m2c::kloc_27d73: 	goto loc_27d73;
        case m2c::kloc_27d7f: 	goto loc_27d7f;
        case m2c::kloc_27db8: 	goto loc_27db8;
        case m2c::kloc_27df7: 	goto loc_27df7;
        case m2c::kloc_27e37: 	goto loc_27e37;
        case m2c::kloc_27e59: 	goto loc_27e59;
        case m2c::kloc_27e85: 	goto loc_27e85;
        case m2c::kloc_27e86: 	goto loc_27e86;
        case m2c::kret_1960_1f2: 	goto ret_1960_1f2;
        case m2c::kret_1960_225: 	goto ret_1960_225;
        case m2c::ksub_27be9: 	goto sub_27be9;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

