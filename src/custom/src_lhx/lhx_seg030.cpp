/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group28(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group28:
    _begin:
sub_3e2aa:
	// 102359 
#undef var_20
#define var_20 -0x20
	// 102362 var_20          = byte ptr -20h ;~ 2FCC:000A
#undef var_1e
#define var_1e -0x1E
	// 102363 var_1E          = byte ptr -1Eh ;~ 2FCC:000A
#undef var_1c
#define var_1c -0x1C
	// 102364 var_1C          = byte ptr -1Ch ;~ 2FCC:000A
#undef var_e
#define var_e -0x0E
	// 102365 var_E           = word ptr -0Eh ;~ 2FCC:000A
#undef var_a
#define var_a -0x0A
	// 102366 var_A           = word ptr -0Ah ;~ 2FCC:000A
#undef var_8
#define var_8 -8
	// 102367 var_8           = word ptr -8 ;~ 2FCC:000A
#undef arg_0
#define arg_0 6
	// 102368 arg_0           = word ptr  6 ;~ 2FCC:000A
cs=0x2fcc;eip=0x00000a; 	X(PUSH(bp));	// 102370 push    bp ;~ 2FCC:000A
cs=0x2fcc;eip=0x00000b; 	T(MOV(bp, sp));	// 102371 mov     bp, sp ;~ 2FCC:000B
cs=0x2fcc;eip=0x00000d; 	T(SUB(sp, 0x20));	// 102372 sub     sp, 20h ;~ 2FCC:000D
cs=0x2fcc;eip=0x000010; 	X(MOV(*(raddr(ss,bp+var_20)), 1));	// 102373 mov     [bp+var_20], 1 ;~ 2FCC:0010
cs=0x2fcc;eip=0x000014; 	T(SUB(bx, bx));	// 102374 sub     bx, bx ;~ 2FCC:0014
cs=0x2fcc;eip=0x000016; 	T(MOV(es, bx));	// 102375 mov     es, bx ;~ 2FCC:0016
cs=0x2fcc;eip=0x000018; 	T(MOV(bx, 0x449));	// 102377 mov     bx, 449h ;~ 2FCC:0018
cs=0x2fcc;eip=0x00001b; 	T(MOV(al, *(raddr(es,bx))));	// 102378 mov     al, es:[bx] ;~ 2FCC:001B
cs=0x2fcc;eip=0x00001e; 	X(MOV(*(raddr(ss,bp+var_1e)), al));	// 102379 mov     [bp+var_1E], al ;~ 2FCC:001E
cs=0x2fcc;eip=0x000021; 	X(MOV(*(raddr(es,bx)), 4));	// 102380 mov     byte ptr es:[bx], 4 ;~ 2FCC:0021
cs=0x2fcc;eip=0x000025; 	T(MOV(bx, 0x0CC));	// 102381 mov     bx, 0CCh ; 'Ì' ;~ 2FCC:0025
cs=0x2fcc;eip=0x000028; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 102382 mov     ax, es:[bx] ;~ 2FCC:0028
cs=0x2fcc;eip=0x00002b; 	T(OR(ax, *(dw*)(raddr(es,bx+2))));	// 102383 or      ax, es:[bx+2] ;~ 2FCC:002B
cs=0x2fcc;eip=0x00002f; 	R(JNZ(loc_3e2d8));	// 102384 jnz     short loc_3E2D8 ;~ 2FCC:002F
loc_3e2d1:
	// 10929 
cs=0x2fcc;eip=0x000031; 	X(MOV(*(raddr(ss,bp+var_20)), 0));	// 102387 mov     [bp+var_20], 0 ;~ 2FCC:0031
cs=0x2fcc;eip=0x000035; 	R(JMP(loc_3e3a9));	// 102388 jmp     loc_3E3A9 ;~ 2FCC:0035
loc_3e2d8:
	// 10930 
cs=0x2fcc;eip=0x000038; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0));	// 102392 mov     [bp+var_E], 0 ;~ 2FCC:0038
cs=0x2fcc;eip=0x00003d; 	T(ax = bp+var_e);	// 102393 lea     ax, [bp+var_E] ;~ 2FCC:003D
cs=0x2fcc;eip=0x000040; 	X(PUSH(ax));	// 102394 push    ax ;~ 2FCC:0040
cs=0x2fcc;eip=0x000041; 	T(ax = bp+var_e);	// 102395 lea     ax, [bp+var_E] ;~ 2FCC:0041
cs=0x2fcc;eip=0x000044; 	X(PUSH(ax));	// 102396 push    ax ;~ 2FCC:0044
cs=0x2fcc;eip=0x000045; 	T(MOV(ax, 0x33));	// 102397 mov     ax, 33h ; '3' ;~ 2FCC:0045
cs=0x2fcc;eip=0x000048; 	X(PUSH(ax));	// 102398 push    ax ;~ 2FCC:0048
cs=0x2fcc;eip=0x000049; 	R(CALLF(sub_1030c,0));	// 102399 call    sub_1030C ;~ 2FCC:0049
cs=0x2fcc;eip=0x00004e; 	T(ADD(sp, 6));	// 102400 add     sp, 6 ;~ 2FCC:004E
cs=0x2fcc;eip=0x000051; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), 0));	// 102401 cmp     [bp+var_E], 0 ;~ 2FCC:0051
cs=0x2fcc;eip=0x000055; 	R(JZ(loc_3e2d1));	// 102402 jz      short loc_3E2D1 ;~ 2FCC:0055
cs=0x2fcc;eip=0x000057; 	X(MOV(unk_4b098, 1));	// 102403 mov     byte ptr unk_4B098, 1 ;~ 2FCC:0057
cs=0x2fcc;eip=0x00005c; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 7));	// 102404 mov     [bp+var_E], 7 ;~ 2FCC:005C
cs=0x2fcc;eip=0x000061; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0));	// 102405 mov     [bp+var_A], 0 ;~ 2FCC:0061
cs=0x2fcc;eip=0x000066; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0x0C9));	// 102406 mov     [bp+var_8], 0C9h ; 'É' ;~ 2FCC:0066
cs=0x2fcc;eip=0x00006b; 	T(ax = bp+var_e);	// 102407 lea     ax, [bp+var_E] ;~ 2FCC:006B
cs=0x2fcc;eip=0x00006e; 	X(PUSH(ax));	// 102408 push    ax ;~ 2FCC:006E
cs=0x2fcc;eip=0x00006f; 	T(ax = bp+var_e);	// 102409 lea     ax, [bp+var_E] ;~ 2FCC:006F
cs=0x2fcc;eip=0x000072; 	X(PUSH(ax));	// 102410 push    ax ;~ 2FCC:0072
cs=0x2fcc;eip=0x000073; 	T(MOV(ax, 0x33));	// 102411 mov     ax, 33h ; '3' ;~ 2FCC:0073
cs=0x2fcc;eip=0x000076; 	X(PUSH(ax));	// 102412 push    ax ;~ 2FCC:0076
cs=0x2fcc;eip=0x000077; 	R(CALLF(sub_1030c,0));	// 102413 call    sub_1030C ;~ 2FCC:0077
cs=0x2fcc;eip=0x00007c; 	T(ADD(sp, 6));	// 102414 add     sp, 6 ;~ 2FCC:007C
cs=0x2fcc;eip=0x00007f; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 8));	// 102415 mov     [bp+var_E], 8 ;~ 2FCC:007F
cs=0x2fcc;eip=0x000084; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0));	// 102416 mov     [bp+var_A], 0 ;~ 2FCC:0084
cs=0x2fcc;eip=0x000089; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0x0C9));	// 102417 mov     [bp+var_8], 0C9h ; 'É' ;~ 2FCC:0089
cs=0x2fcc;eip=0x00008e; 	T(ax = bp+var_e);	// 102418 lea     ax, [bp+var_E] ;~ 2FCC:008E
cs=0x2fcc;eip=0x000091; 	X(PUSH(ax));	// 102419 push    ax ;~ 2FCC:0091
cs=0x2fcc;eip=0x000092; 	T(ax = bp+var_e);	// 102420 lea     ax, [bp+var_E] ;~ 2FCC:0092
cs=0x2fcc;eip=0x000095; 	X(PUSH(ax));	// 102421 push    ax ;~ 2FCC:0095
cs=0x2fcc;eip=0x000096; 	T(MOV(ax, 0x33));	// 102422 mov     ax, 33h ; '3' ;~ 2FCC:0096
cs=0x2fcc;eip=0x000099; 	X(PUSH(ax));	// 102423 push    ax ;~ 2FCC:0099
cs=0x2fcc;eip=0x00009a; 	R(CALLF(sub_1030c,0));	// 102424 call    sub_1030C ;~ 2FCC:009A
cs=0x2fcc;eip=0x00009f; 	T(ADD(sp, 6));	// 102425 add     sp, 6 ;~ 2FCC:009F
cs=0x2fcc;eip=0x0000a2; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0x0F));	// 102426 mov     [bp+var_E], 0Fh ;~ 2FCC:00A2
cs=0x2fcc;eip=0x0000a7; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 3));	// 102427 cmp     [bp+arg_0], 3 ;~ 2FCC:00A7
cs=0x2fcc;eip=0x0000ab; 	R(JNZ(loc_3e35a));	// 102428 jnz     short loc_3E35A ;~ 2FCC:00AB
cs=0x2fcc;eip=0x0000ad; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 8));	// 102429 mov     [bp+var_A], 8 ;~ 2FCC:00AD
cs=0x2fcc;eip=0x0000b2; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0x0C));	// 102430 mov     [bp+var_8], 0Ch ;~ 2FCC:00B2
cs=0x2fcc;eip=0x0000b7; 	R(JMP(loc_3e364));	// 102431 jmp     short loc_3E364 ;~ 2FCC:00B7
loc_3e35a:
	// 10931 
cs=0x2fcc;eip=0x0000ba; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0x10));	// 102436 mov     [bp+var_A], 10h ;~ 2FCC:00BA
cs=0x2fcc;eip=0x0000bf; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0x18));	// 102437 mov     [bp+var_8], 18h ;~ 2FCC:00BF
loc_3e364:
	// 10932 
cs=0x2fcc;eip=0x0000c4; 	T(ax = bp+var_1c);	// 102440 lea     ax, [bp+var_1C] ;~ 2FCC:00C4
cs=0x2fcc;eip=0x0000c7; 	X(PUSH(ax));	// 102441 push    ax ;~ 2FCC:00C7
cs=0x2fcc;eip=0x0000c8; 	T(ax = bp+var_e);	// 102442 lea     ax, [bp+var_E] ;~ 2FCC:00C8
cs=0x2fcc;eip=0x0000cb; 	X(PUSH(ax));	// 102443 push    ax ;~ 2FCC:00CB
cs=0x2fcc;eip=0x0000cc; 	T(MOV(ax, 0x33));	// 102444 mov     ax, 33h ; '3' ;~ 2FCC:00CC
cs=0x2fcc;eip=0x0000cf; 	X(PUSH(ax));	// 102445 push    ax ;~ 2FCC:00CF
cs=0x2fcc;eip=0x0000d0; 	R(CALLF(sub_1030c,0));	// 102446 call    sub_1030C ;~ 2FCC:00D0
cs=0x2fcc;eip=0x0000d5; 	T(ADD(sp, 6));	// 102447 add     sp, 6 ;~ 2FCC:00D5
cs=0x2fcc;eip=0x0000d8; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0x13));	// 102448 mov     [bp+var_E], 13h ;~ 2FCC:00D8
cs=0x2fcc;eip=0x0000dd; 	T(MOV(cl, 3));	// 102449 mov     cl, 3 ;~ 2FCC:00DD
cs=0x2fcc;eip=0x0000df; 	X(SHL(*(dw*)(raddr(ss,bp+var_a)), cl));	// 102450 shl     [bp+var_A], cl ;~ 2FCC:00DF
cs=0x2fcc;eip=0x0000e2; 	X(SHL(*(dw*)(raddr(ss,bp+var_8)), cl));	// 102451 shl     [bp+var_8], cl ;~ 2FCC:00E2
cs=0x2fcc;eip=0x0000e5; 	T(ax = bp+var_e);	// 102452 lea     ax, [bp+var_E] ;~ 2FCC:00E5
cs=0x2fcc;eip=0x0000e8; 	X(PUSH(ax));	// 102453 push    ax ;~ 2FCC:00E8
cs=0x2fcc;eip=0x0000e9; 	T(ax = bp+var_e);	// 102454 lea     ax, [bp+var_E] ;~ 2FCC:00E9
cs=0x2fcc;eip=0x0000ec; 	X(PUSH(ax));	// 102455 push    ax ;~ 2FCC:00EC
cs=0x2fcc;eip=0x0000ed; 	T(MOV(ax, 0x33));	// 102456 mov     ax, 33h ; '3' ;~ 2FCC:00ED
cs=0x2fcc;eip=0x0000f0; 	X(PUSH(ax));	// 102457 push    ax ;~ 2FCC:00F0
cs=0x2fcc;eip=0x0000f1; 	R(CALLF(sub_1030c,0));	// 102458 call    sub_1030C ;~ 2FCC:00F1
cs=0x2fcc;eip=0x0000f6; 	T(ADD(sp, 6));	// 102459 add     sp, 6 ;~ 2FCC:00F6
cs=0x2fcc;eip=0x0000f9; 	R(CALLF(sub_2f45e,0));	// 102460 call    sub_2F45E ;~ 2FCC:00F9
cs=0x2fcc;eip=0x0000fe; 	T(MOV(ax, 1));	// 102461 mov     ax, 1 ;~ 2FCC:00FE
cs=0x2fcc;eip=0x000101; 	X(PUSH(ax));	// 102462 push    ax ;~ 2FCC:0101
cs=0x2fcc;eip=0x000102; 	X(PUSH(cs));	// 102463 push    cs ;~ 2FCC:0102
cs=0x2fcc;eip=0x000103; 	R(CALL(sub_3e3d0,0));	// 102464 call    near ptr sub_3E3D0 ;~ 2FCC:0103
cs=0x2fcc;eip=0x000106; 	T(ADD(sp, 2));	// 102465 add     sp, 2 ;~ 2FCC:0106
loc_3e3a9:
	// 10933 
cs=0x2fcc;eip=0x000109; 	T(SUB(bx, bx));	// 102468 sub     bx, bx ;~ 2FCC:0109
cs=0x2fcc;eip=0x00010b; 	T(MOV(es, bx));	// 102469 mov     es, bx ;~ 2FCC:010B
cs=0x2fcc;eip=0x00010d; 	T(MOV(bx, 0x449));	// 102470 mov     bx, 449h ;~ 2FCC:010D
cs=0x2fcc;eip=0x000110; 	T(MOV(al, *(raddr(ss,bp+var_1e))));	// 102471 mov     al, [bp+var_1E] ;~ 2FCC:0110
cs=0x2fcc;eip=0x000113; 	X(MOV(*(raddr(es,bx)), al));	// 102472 mov     es:[bx], al ;~ 2FCC:0113
cs=0x2fcc;eip=0x000116; 	T(MOV(al, *(raddr(ss,bp+var_20))));	// 102473 mov     al, [bp+var_20] ;~ 2FCC:0116
cs=0x2fcc;eip=0x000119; 	T(CBW);	// 102474 cbw ;~ 2FCC:0119
cs=0x2fcc;eip=0x00011a; 	T(MOV(sp, bp));	// 102475 mov     sp, bp ;~ 2FCC:011A
cs=0x2fcc;eip=0x00011c; 	X(POP(bp));	// 102476 pop     bp ;~ 2FCC:011C
cs=0x2fcc;eip=0x00011d; 	R(RETF(0));	// 102477 retf ;~ 2FCC:011D
sub_3e3be:
	// 102484 
cs=0x2fcc;eip=0x00011e; 	T(CMP(unk_4b098, 0));	// 102486 cmp     byte ptr unk_4B098, 0 ;~ 2FCC:011E
cs=0x2fcc;eip=0x000123; 	R(JZ(locret_3e3cf));	// 102487 jz      short locret_3E3CF ;~ 2FCC:0123
cs=0x2fcc;eip=0x000125; 	X(MOV(unk_4b098, 0));	// 102488 mov     byte ptr unk_4B098, 0 ;~ 2FCC:0125
cs=0x2fcc;eip=0x00012a; 	R(CALLF(sub_2f478,0));	// 102489 call    sub_2F478 ;~ 2FCC:012A
locret_3e3cf:
	// 10934 
cs=0x2fcc;eip=0x00012f; 	R(RETF(0));	// 102492 retf ;~ 2FCC:012F
sub_3e3d0:
	// 102500 
#undef var_e
#define var_e -0x0E
	// 102503 var_E           = word ptr -0Eh ;~ 2FCC:0130
#undef var_a
#define var_a -0x0A
	// 102504 var_A           = word ptr -0Ah ;~ 2FCC:0130
#undef var_8
#define var_8 -8
	// 102505 var_8           = word ptr -8 ;~ 2FCC:0130
#undef arg_0
#define arg_0 6
	// 102506 arg_0           = byte ptr  6 ;~ 2FCC:0130
cs=0x2fcc;eip=0x000130; 	X(PUSH(bp));	// 102508 push    bp ;~ 2FCC:0130
cs=0x2fcc;eip=0x000131; 	T(MOV(bp, sp));	// 102509 mov     bp, sp ;~ 2FCC:0131
cs=0x2fcc;eip=0x000133; 	T(SUB(sp, 0x1C));	// 102510 sub     sp, 1Ch ;~ 2FCC:0133
cs=0x2fcc;eip=0x000136; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 4));	// 102511 mov     [bp+var_E], 4 ;~ 2FCC:0136
cs=0x2fcc;eip=0x00013b; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0x64));	// 102512 mov     [bp+var_A], 64h ; 'd' ;~ 2FCC:013B
cs=0x2fcc;eip=0x000140; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0x64));	// 102513 mov     [bp+var_8], 64h ; 'd' ;~ 2FCC:0140
cs=0x2fcc;eip=0x000145; 	T(CMP(*(raddr(ss,bp+arg_0)), 0));	// 102514 cmp     [bp+arg_0], 0 ;~ 2FCC:0145
cs=0x2fcc;eip=0x000149; 	R(JNZ(loc_3e3f1));	// 102515 jnz     short loc_3E3F1 ;~ 2FCC:0149
cs=0x2fcc;eip=0x00014b; 	T(MOV(ax, *(dw*)((&unk_56488))));	// 102516 mov     ax, word ptr unk_56488 ;~ 2FCC:014B
cs=0x2fcc;eip=0x00014e; 	X(ADD(*(dw*)(raddr(ss,bp+var_8)), ax));	// 102517 add     [bp+var_8], ax ;~ 2FCC:014E
loc_3e3f1:
	// 10935 
cs=0x2fcc;eip=0x000151; 	T(ax = bp+var_e);	// 102520 lea     ax, [bp+var_E] ;~ 2FCC:0151
cs=0x2fcc;eip=0x000154; 	X(PUSH(ax));	// 102521 push    ax ;~ 2FCC:0154
cs=0x2fcc;eip=0x000155; 	T(ax = bp+var_e);	// 102522 lea     ax, [bp+var_E] ;~ 2FCC:0155
cs=0x2fcc;eip=0x000158; 	X(PUSH(ax));	// 102523 push    ax ;~ 2FCC:0158
cs=0x2fcc;eip=0x000159; 	T(MOV(ax, 0x33));	// 102524 mov     ax, 33h ; '3' ;~ 2FCC:0159
cs=0x2fcc;eip=0x00015c; 	X(PUSH(ax));	// 102525 push    ax ;~ 2FCC:015C
cs=0x2fcc;eip=0x00015d; 	R(CALLF(sub_1030c,0));	// 102526 call    sub_1030C ;~ 2FCC:015D
cs=0x2fcc;eip=0x000162; 	T(MOV(sp, bp));	// 102527 mov     sp, bp ;~ 2FCC:0162
cs=0x2fcc;eip=0x000164; 	X(POP(bp));	// 102528 pop     bp ;~ 2FCC:0164
cs=0x2fcc;eip=0x000165; 	R(RETF(0));	// 102529 retf ;~ 2FCC:0165
sub_3e406:
	// 102537 
#undef arg_2
#define arg_2 8
	// 102539 arg_2           = byte ptr  8 ;~ 2FCC:0166
#undef arg_4
#define arg_4 0x0A
	// 102540 arg_4           = word ptr  0Ah ;~ 2FCC:0166
#undef arg_6
#define arg_6 0x0C
	// 102541 arg_6           = word ptr  0Ch ;~ 2FCC:0166
cs=0x2fcc;eip=0x000166; 	X(PUSH(bp));	// 102543 push    bp ;~ 2FCC:0166
cs=0x2fcc;eip=0x000167; 	T(MOV(bp, sp));	// 102544 mov     bp, sp ;~ 2FCC:0167
cs=0x2fcc;eip=0x000169; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 102545 mov     ax, [bp+arg_4] ;~ 2FCC:0169
cs=0x2fcc;eip=0x00016c; 	T(SUB(ax, 0x64));	// 102546 sub     ax, 64h ; 'd' ;~ 2FCC:016C
cs=0x2fcc;eip=0x00016f; 	X(MOV(*(dw*)((&unk_56486)), ax));	// 102547 mov     word ptr unk_56486, ax ;~ 2FCC:016F
cs=0x2fcc;eip=0x000172; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 102548 mov     ax, [bp+arg_6] ;~ 2FCC:0172
cs=0x2fcc;eip=0x000175; 	T(SUB(ax, 0x64));	// 102549 sub     ax, 64h ; 'd' ;~ 2FCC:0175
cs=0x2fcc;eip=0x000178; 	X(MOV(*(dw*)((&unk_56488)), ax));	// 102550 mov     word ptr unk_56488, ax ;~ 2FCC:0178
cs=0x2fcc;eip=0x00017b; 	T(TEST(*(raddr(ss,bp+arg_2)), 1));	// 102551 test    [bp+arg_2], 1 ;~ 2FCC:017B
cs=0x2fcc;eip=0x00017f; 	R(JZ(loc_3e42c));	// 102552 jz      short loc_3E42C ;~ 2FCC:017F
cs=0x2fcc;eip=0x000181; 	T(TEST(byte_56492, 1));	// 102553 test    byte_56492, 1 ;~ 2FCC:0181
cs=0x2fcc;eip=0x000186; 	R(JNZ(loc_3e42c));	// 102554 jnz     short loc_3E42C ;~ 2FCC:0186
cs=0x2fcc;eip=0x000188; 	X(INC(byte_47ab4));	// 102555 inc     byte_47AB4 ;~ 2FCC:0188
loc_3e42c:
	// 10936 
cs=0x2fcc;eip=0x00018c; 	T(TEST(*(raddr(ss,bp+arg_2)), 2));	// 102559 test    [bp+arg_2], 2 ;~ 2FCC:018C
cs=0x2fcc;eip=0x000190; 	R(JZ(loc_3e43d));	// 102560 jz      short loc_3E43D ;~ 2FCC:0190
cs=0x2fcc;eip=0x000192; 	T(TEST(byte_56492, 2));	// 102561 test    byte_56492, 2 ;~ 2FCC:0192
cs=0x2fcc;eip=0x000197; 	R(JNZ(loc_3e43d));	// 102562 jnz     short loc_3E43D ;~ 2FCC:0197
cs=0x2fcc;eip=0x000199; 	X(INC(byte_47ab5));	// 102563 inc     byte_47AB5 ;~ 2FCC:0199
loc_3e43d:
	// 10937 
cs=0x2fcc;eip=0x00019d; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 102567 mov     al, [bp+arg_2] ;~ 2FCC:019D
cs=0x2fcc;eip=0x0001a0; 	X(MOV(byte_56492, al));	// 102568 mov     byte_56492, al ;~ 2FCC:01A0
cs=0x2fcc;eip=0x0001a3; 	X(POP(bp));	// 102569 pop     bp ;~ 2FCC:01A3
cs=0x2fcc;eip=0x0001a4; 	R(RETF(0));	// 102570 retf ;~ 2FCC:01A4

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_3e2d1: 	goto loc_3e2d1;
        case m2c::kloc_3e2d8: 	goto loc_3e2d8;
        case m2c::kloc_3e35a: 	goto loc_3e35a;
        case m2c::kloc_3e364: 	goto loc_3e364;
        case m2c::kloc_3e3a9: 	goto loc_3e3a9;
        case m2c::kloc_3e3f1: 	goto loc_3e3f1;
        case m2c::kloc_3e42c: 	goto loc_3e42c;
        case m2c::kloc_3e43d: 	goto loc_3e43d;
        case m2c::klocret_3e3cf: 	goto locret_3e3cf;
        case m2c::ksub_3e2aa: 	goto sub_3e2aa;
        case m2c::ksub_3e3be: 	goto sub_3e3be;
        case m2c::ksub_3e3d0: 	goto sub_3e3d0;
        case m2c::ksub_3e406: 	goto sub_3e406;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, _source);m2c::stackDump(_state); abort();
    };
}

