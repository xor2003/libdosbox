/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group13(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group13:
    _begin:
sub_2f860:
	// 71363 
#undef var_18
#define var_18 -0x18
	// 71365 var_18          = word ptr -18h ;~ 2128:0000
#undef var_16
#define var_16 -0x16
	// 71366 var_16          = word ptr -16h ;~ 2128:0000
#undef var_14
#define var_14 -0x14
	// 71367 var_14          = word ptr -14h ;~ 2128:0000
#undef var_6
#define var_6 -6
	// 71368 var_6           = word ptr -6 ;~ 2128:0000
#undef var_2
#define var_2 -2
	// 71369 var_2           = word ptr -2 ;~ 2128:0000
cs=0x2128;eip=0x000000; 	X(PUSH(bp));	// 71371 push    bp ;~ 2128:0000
cs=0x2128;eip=0x000001; 	T(MOV(bp, sp));	// 71372 mov     bp, sp ;~ 2128:0001
cs=0x2128;eip=0x000003; 	T(SUB(sp, 0x18));	// 71373 sub     sp, 18h ;~ 2128:0003
cs=0x2128;eip=0x000006; 	X(PUSH(di));	// 71374 push    di ;~ 2128:0006
cs=0x2128;eip=0x000007; 	X(PUSH(si));	// 71375 push    si ;~ 2128:0007
cs=0x2128;eip=0x000008; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 8));	// 71376 mov     [bp+var_6], 8 ;~ 2128:0008
cs=0x2128;eip=0x00000d; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), 0));	// 71377 mov     [bp+var_14], 0 ;~ 2128:000D
cs=0x2128;eip=0x000012; 	T(CMP(*(dw*)((&unk_48a9e)), 0));	// 71378 cmp     word ptr unk_48A9E, 0 ;~ 2128:0012
cs=0x2128;eip=0x000017; 	R(JG(loc_2f87c));	// 71379 jg      short loc_2F87C ;~ 2128:0017
cs=0x2128;eip=0x000019; 	R(JMP(loc_2f909));	// 71380 jmp     loc_2F909 ;~ 2128:0019
loc_2f87c:
	// 8971 
cs=0x2128;eip=0x00001c; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), 0));	// 71384 mov     [bp+var_16], 0 ;~ 2128:001C
cs=0x2128;eip=0x000021; 	T(MOV(ax, *(dw*)((&unk_48a9e))));	// 71385 mov     ax, word ptr unk_48A9E ;~ 2128:0021
cs=0x2128;eip=0x000024; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 71386 mov     [bp+var_18], ax ;~ 2128:0024
cs=0x2128;eip=0x000027; 	X(ADD(*(dw*)(raddr(ss,bp+var_14)), ax));	// 71387 add     [bp+var_14], ax ;~ 2128:0027
loc_2f88a:
	// 8972 
cs=0x2128;eip=0x00002a; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_16))));	// 71390 mov     di, [bp+var_16] ;~ 2128:002A
cs=0x2128;eip=0x00002d; 	T(ADD(di, 0x10F0));	// 71391 add     di, 10F0h ;~ 2128:002D
cs=0x2128;eip=0x000031; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 71392 mov     ax, [bp+var_6] ;~ 2128:0031
cs=0x2128;eip=0x000034; 	X(MOV(*(dw*)(raddr(ds,di+8)), ax));	// 71393 mov     [di+8], ax ;~ 2128:0034
cs=0x2128;eip=0x000037; 	X(MOV(*(dw*)(raddr(ds,di+0x0A)), 0));	// 71394 mov     word ptr [di+0Ah], 0 ;~ 2128:0037
cs=0x2128;eip=0x00003c; 	T(MOV(bx, *(dw*)(raddr(ds,di+0x10))));	// 71395 mov     bx, [di+10h] ;~ 2128:003C
cs=0x2128;eip=0x00003f; 	X(PUSH(di));	// 71396 push    di ;~ 2128:003F
cs=0x2128;eip=0x000040; 	T(MOV(di, bx));	// 71397 mov     di, bx ;~ 2128:0040
cs=0x2128;eip=0x000042; 	T(MOV(ax, ds));	// 71398 mov     ax, ds ;~ 2128:0042
cs=0x2128;eip=0x000044; 	T(MOV(es, ax));	// 71399 mov     es, ax ;~ 2128:0044
cs=0x2128;eip=0x000046; 	T(MOV(cx, 0x0FFFF));	// 71401 mov     cx, 0FFFFh ;~ 2128:0046
cs=0x2128;eip=0x000049; 	T(XOR(ax, ax));	// 71402 xor     ax, ax ;~ 2128:0049
	// 71403 repne scasb ;~ 2128:004B
cs=0x2128;eip=0x00004b; 	T(	REPNE SCASB);	// 71403 repne scasb ;~ 2128:004B
cs=0x2128;eip=0x00004d; 	T(NOT(cx));	// 71404 not     cx ;~ 2128:004D
cs=0x2128;eip=0x00004f; 	T(DEC(cx));	// 71405 dec     cx ;~ 2128:004F
cs=0x2128;eip=0x000050; 	X(POP(di));	// 71406 pop     di ;~ 2128:0050
cs=0x2128;eip=0x000051; 	T(SHL(cx, 1));	// 71407 shl     cx, 1 ;~ 2128:0051
cs=0x2128;eip=0x000053; 	T(SHL(cx, 1));	// 71408 shl     cx, 1 ;~ 2128:0053
cs=0x2128;eip=0x000055; 	T(ADD(cx, 8));	// 71409 add     cx, 8 ;~ 2128:0055
cs=0x2128;eip=0x000058; 	X(MOV(*(dw*)(raddr(ds,di+0x0C)), cx));	// 71410 mov     [di+0Ch], cx ;~ 2128:0058
cs=0x2128;eip=0x00005b; 	X(MOV(*(dw*)(raddr(ds,di+0x0E)), 9));	// 71411 mov     word ptr [di+0Eh], 9 ;~ 2128:005B
cs=0x2128;eip=0x000060; 	T(MOV(al, *(raddr(ds,di+0x17))));	// 71412 mov     al, [di+17h] ;~ 2128:0060
cs=0x2128;eip=0x000063; 	T(SUB(ah, ah));	// 71413 sub     ah, ah ;~ 2128:0063
cs=0x2128;eip=0x000065; 	T(SHL(ax, 1));	// 71414 shl     ax, 1 ;~ 2128:0065
cs=0x2128;eip=0x000067; 	T(SHL(ax, 1));	// 71415 shl     ax, 1 ;~ 2128:0067
cs=0x2128;eip=0x000069; 	T(ADD(ax, 0x18));	// 71416 add     ax, 18h ;~ 2128:0069
cs=0x2128;eip=0x00006c; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 71417 mov     [bp+var_2], ax ;~ 2128:006C
cs=0x2128;eip=0x00006f; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_6))));	// 71418 mov     si, [bp+var_6] ;~ 2128:006F
cs=0x2128;eip=0x000072; 	T(MOV(cx, ax));	// 71419 mov     cx, ax ;~ 2128:0072
cs=0x2128;eip=0x000074; 	R(JMP(loc_2f8d9));	// 71420 jmp     short loc_2F8D9 ;~ 2128:0074
loc_2f8d6:
	// 8973 
cs=0x2128;eip=0x000076; 	T(SUB(si, 8));	// 71424 sub     si, 8 ;~ 2128:0076
loc_2f8d9:
	// 8974 
cs=0x2128;eip=0x000079; 	T(MOV(ax, cx));	// 71427 mov     ax, cx ;~ 2128:0079
cs=0x2128;eip=0x00007b; 	T(ADD(ax, si));	// 71428 add     ax, si ;~ 2128:007B
cs=0x2128;eip=0x00007d; 	T(CMP(ax, *(dw*)((&unk_47b34))));	// 71429 cmp     ax, word ptr unk_47B34 ;~ 2128:007D
cs=0x2128;eip=0x000081; 	R(JA(loc_2f8d6));	// 71430 ja      short loc_2F8D6 ;~ 2128:0081
cs=0x2128;eip=0x000083; 	X(MOV(*(dw*)(raddr(ds,di)), si));	// 71431 mov     [di], si ;~ 2128:0083
cs=0x2128;eip=0x000085; 	X(MOV(*(dw*)(raddr(ds,di+2)), 9));	// 71432 mov     word ptr [di+2], 9 ;~ 2128:0085
cs=0x2128;eip=0x00008a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 71433 mov     ax, [bp+var_2] ;~ 2128:008A
cs=0x2128;eip=0x00008d; 	X(MOV(*(dw*)(raddr(ds,di+4)), ax));	// 71434 mov     [di+4], ax ;~ 2128:008D
cs=0x2128;eip=0x000090; 	T(MOV(al, 9));	// 71435 mov     al, 9 ;~ 2128:0090
cs=0x2128;eip=0x000092; 	X(MUL1_1(*(raddr(ds,di+0x16))));	// 71436 mul     byte ptr [di+16h] ;~ 2128:0092
cs=0x2128;eip=0x000095; 	T(INC(ax));	// 71437 inc     ax ;~ 2128:0095
cs=0x2128;eip=0x000096; 	T(INC(ax));	// 71438 inc     ax ;~ 2128:0096
cs=0x2128;eip=0x000097; 	X(MOV(*(dw*)(raddr(ds,di+6)), ax));	// 71439 mov     [di+6], ax ;~ 2128:0097
cs=0x2128;eip=0x00009a; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x0C))));	// 71440 mov     ax, [di+0Ch] ;~ 2128:009A
cs=0x2128;eip=0x00009d; 	X(ADD(*(dw*)(raddr(ss,bp+var_6)), ax));	// 71441 add     [bp+var_6], ax ;~ 2128:009D
cs=0x2128;eip=0x0000a0; 	X(ADD(*(dw*)(raddr(ss,bp+var_16)), 0x18));	// 71442 add     [bp+var_16], 18h ;~ 2128:00A0
cs=0x2128;eip=0x0000a4; 	X(DEC(*(dw*)(raddr(ss,bp+var_18))));	// 71443 dec     [bp+var_18] ;~ 2128:00A4
cs=0x2128;eip=0x0000a7; 	R(JNZ(loc_2f88a));	// 71444 jnz     short loc_2F88A ;~ 2128:00A7
loc_2f909:
	// 8975 
cs=0x2128;eip=0x0000a9; 	X(POP(si));	// 71447 pop     si ;~ 2128:00A9
cs=0x2128;eip=0x0000aa; 	X(POP(di));	// 71448 pop     di ;~ 2128:00AA
cs=0x2128;eip=0x0000ab; 	T(MOV(sp, bp));	// 71449 mov     sp, bp ;~ 2128:00AB
cs=0x2128;eip=0x0000ad; 	X(POP(bp));	// 71450 pop     bp ;~ 2128:00AD
cs=0x2128;eip=0x0000ae; 	R(RETF(0));	// 71451 retf ;~ 2128:00AE
sub_2f90f:
	// 71458 
cs=0x2128;eip=0x0000af; 	T(CMP(*(dw*)((&byte_47b2e)), 0));	// 71460 cmp     word ptr byte_47B2E, 0 ;~ 2128:00AF
cs=0x2128;eip=0x0000b4; 	R(JNZ(loc_2f91b));	// 71461 jnz     short loc_2F91B ;~ 2128:00B4
cs=0x2128;eip=0x0000b6; 	T(MOV(ax, 0x0FF0F));	// 71462 mov     ax, 0FF0Fh ;~ 2128:00B6
cs=0x2128;eip=0x0000b9; 	R(JMP(loc_2f91e));	// 71463 jmp     short loc_2F91E ;~ 2128:00B9
loc_2f91b:
	// 8976 
cs=0x2128;eip=0x0000bb; 	T(MOV(ax, 0x0FF07));	// 71467 mov     ax, 0FF07h ;~ 2128:00BB
loc_2f91e:
	// 8977 
cs=0x2128;eip=0x0000be; 	X(MOV(*(dw*)((&unk_48a9c)), ax));	// 71470 mov     word ptr unk_48A9C, ax ;~ 2128:00BE
cs=0x2128;eip=0x0000c1; 	R(RETN(0));	// 71471 retn ;~ 2128:00C1
sub_2f922:
	// 71479 
#undef var_8
#define var_8 -8
	// 71481 var_8           = word ptr -8 ;~ 2128:00C2
#undef var_6
#define var_6 -6
	// 71482 var_6           = word ptr -6 ;~ 2128:00C2
#undef var_2
#define var_2 -2
	// 71483 var_2           = word ptr -2 ;~ 2128:00C2
cs=0x2128;eip=0x0000c2; 	X(PUSH(bp));	// 71485 push    bp ;~ 2128:00C2
cs=0x2128;eip=0x0000c3; 	T(MOV(bp, sp));	// 71486 mov     bp, sp ;~ 2128:00C3
cs=0x2128;eip=0x0000c5; 	T(SUB(sp, 0x0C));	// 71487 sub     sp, 0Ch ;~ 2128:00C5
cs=0x2128;eip=0x0000c8; 	X(PUSH(di));	// 71488 push    di ;~ 2128:00C8
cs=0x2128;eip=0x0000c9; 	X(PUSH(si));	// 71489 push    si ;~ 2128:00C9
cs=0x2128;eip=0x0000ca; 	R(CALLF(sub_203b0,0));	// 71490 call    sub_203B0 ;~ 2128:00CA
cs=0x2128;eip=0x0000cf; 	R(CALL(sub_2f90f,0));	// 71491 call    sub_2F90F ;~ 2128:00CF
cs=0x2128;eip=0x0000d2; 	T(TEST(byte_5687c, 2));	// 71492 test    byte_5687C, 2 ;~ 2128:00D2
cs=0x2128;eip=0x0000d7; 	R(JZ(loc_2f966));	// 71493 jz      short loc_2F966 ;~ 2128:00D7
cs=0x2128;eip=0x0000d9; 	T(MOV(ax, *(dw*)((&unk_5651c))));	// 71494 mov     ax, word ptr unk_5651C ;~ 2128:00D9
cs=0x2128;eip=0x0000dc; 	X(MOV(*(dw*)((&unk_54146)), ax));	// 71495 mov     word ptr unk_54146, ax ;~ 2128:00DC
cs=0x2128;eip=0x0000df; 	X(PUSH(si));	// 71496 push    si ;~ 2128:00DF
cs=0x2128;eip=0x0000e0; 	X(PUSH(di));	// 71497 push    di ;~ 2128:00E0
cs=0x2128;eip=0x0000e1; 	T(MOV(di, 0x0C7A0));	// 71498 mov     di, 0C7A0h ;~ 2128:00E1
cs=0x2128;eip=0x0000e4; 	T(MOV(si, 0x0ED08));	// 71499 mov     si, 0ED08h ;~ 2128:00E4
cs=0x2128;eip=0x0000e7; 	X(PUSH(ds));	// 71500 push    ds ;~ 2128:00E7
cs=0x2128;eip=0x0000e8; 	X(POP(es));	// 71501 pop     es ;~ 2128:00E8
cs=0x2128;eip=0x0000e9; 	T(MOV(cx, 5));	// 71502 mov     cx, 5 ;~ 2128:00E9
	// 71503 repne movsw ;~ 2128:00EC
cs=0x2128;eip=0x0000ec; 	X(	REPNE MOVSW);	// 71503 repne movsw ;~ 2128:00EC
cs=0x2128;eip=0x0000ee; 	X(POP(di));	// 71504 pop     di ;~ 2128:00EE
cs=0x2128;eip=0x0000ef; 	X(POP(si));	// 71505 pop     si ;~ 2128:00EF
cs=0x2128;eip=0x0000f0; 	X(PUSH(word_5651a));	// 71506 push    word_5651A ;~ 2128:00F0
cs=0x2128;eip=0x0000f4; 	R(CALLF(sub_202f1,0));	// 71507 call    sub_202F1 ;~ 2128:00F4
cs=0x2128;eip=0x0000f9; 	X(PUSH(word_5651a));	// 71508 push    word_5651A ;~ 2128:00F9
cs=0x2128;eip=0x0000fd; 	T(MOV(ax, 1));	// 71509 mov     ax, 1 ;~ 2128:00FD
cs=0x2128;eip=0x000100; 	T(SUB(ax, word_5651a));	// 71510 sub     ax, word_5651A ;~ 2128:0100
cs=0x2128;eip=0x000104; 	R(JMP(loc_2f98b));	// 71511 jmp     short loc_2F98B ;~ 2128:0104
loc_2f966:
	// 8978 
cs=0x2128;eip=0x000106; 	T(MOV(ax, *(dw*)((&unk_5651c))));	// 71515 mov     ax, word ptr unk_5651C ;~ 2128:0106
cs=0x2128;eip=0x000109; 	X(MOV(*(dw*)((&unk_54146)), ax));	// 71516 mov     word ptr unk_54146, ax ;~ 2128:0109
cs=0x2128;eip=0x00010c; 	X(PUSH(si));	// 71517 push    si ;~ 2128:010C
cs=0x2128;eip=0x00010d; 	X(PUSH(di));	// 71518 push    di ;~ 2128:010D
cs=0x2128;eip=0x00010e; 	T(MOV(di, 0x0C7A0));	// 71519 mov     di, 0C7A0h ;~ 2128:010E
cs=0x2128;eip=0x000111; 	T(MOV(si, 0x0ED08));	// 71520 mov     si, 0ED08h ;~ 2128:0111
cs=0x2128;eip=0x000114; 	X(PUSH(ds));	// 71521 push    ds ;~ 2128:0114
cs=0x2128;eip=0x000115; 	X(POP(es));	// 71522 pop     es ;~ 2128:0115
cs=0x2128;eip=0x000116; 	T(MOV(cx, 5));	// 71523 mov     cx, 5 ;~ 2128:0116
	// 71524 repne movsw ;~ 2128:0119
cs=0x2128;eip=0x000119; 	X(	REPNE MOVSW);	// 71524 repne movsw ;~ 2128:0119
cs=0x2128;eip=0x00011b; 	X(POP(di));	// 71525 pop     di ;~ 2128:011B
cs=0x2128;eip=0x00011c; 	X(POP(si));	// 71526 pop     si ;~ 2128:011C
cs=0x2128;eip=0x00011d; 	T(SUB(ax, ax));	// 71527 sub     ax, ax ;~ 2128:011D
cs=0x2128;eip=0x00011f; 	X(PUSH(ax));	// 71528 push    ax ;~ 2128:011F
cs=0x2128;eip=0x000120; 	R(CALLF(sub_202f1,0));	// 71529 call    sub_202F1 ;~ 2128:0120
cs=0x2128;eip=0x000125; 	T(SUB(ax, ax));	// 71530 sub     ax, ax ;~ 2128:0125
cs=0x2128;eip=0x000127; 	X(PUSH(ax));	// 71531 push    ax ;~ 2128:0127
cs=0x2128;eip=0x000128; 	T(MOV(ax, 1));	// 71532 mov     ax, 1 ;~ 2128:0128
loc_2f98b:
	// 8979 
cs=0x2128;eip=0x00012b; 	X(PUSH(ax));	// 71535 push    ax ;~ 2128:012B
cs=0x2128;eip=0x00012c; 	R(CALLF(sub_2c939,0));	// 71536 call    sub_2C939 ;~ 2128:012C
cs=0x2128;eip=0x000131; 	T(SUB(ax, ax));	// 71537 sub     ax, ax ;~ 2128:0131
cs=0x2128;eip=0x000133; 	X(PUSH(ax));	// 71538 push    ax ;~ 2128:0133
cs=0x2128;eip=0x000134; 	X(PUSH(ax));	// 71539 push    ax ;~ 2128:0134
cs=0x2128;eip=0x000135; 	T(MOV(ax, 0x140));	// 71540 mov     ax, 140h ;~ 2128:0135
cs=0x2128;eip=0x000138; 	X(PUSH(ax));	// 71541 push    ax ;~ 2128:0138
cs=0x2128;eip=0x000139; 	T(MOV(ax, 0x0A));	// 71542 mov     ax, 0Ah ;~ 2128:0139
cs=0x2128;eip=0x00013c; 	X(PUSH(ax));	// 71543 push    ax ;~ 2128:013C
cs=0x2128;eip=0x00013d; 	T(SUB(ax, ax));	// 71544 sub     ax, ax ;~ 2128:013D
cs=0x2128;eip=0x00013f; 	X(PUSH(ax));	// 71545 push    ax ;~ 2128:013F
cs=0x2128;eip=0x000140; 	X(PUSH(cs));	// 71546 push    cs ;~ 2128:0140
cs=0x2128;eip=0x000141; 	R(CALL(sub_2fbda,0));	// 71547 call    near ptr sub_2FBDA ;~ 2128:0141
cs=0x2128;eip=0x000144; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0));	// 71548 mov     [bp+var_6], 0 ;~ 2128:0144
cs=0x2128;eip=0x000149; 	R(JMP(loc_2f9b7));	// 71549 jmp     short loc_2F9B7 ;~ 2128:0149
loc_2f9ab:
	// 8980 
cs=0x2128;eip=0x00014b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 71553 push    [bp+var_6] ;~ 2128:014B
cs=0x2128;eip=0x00014e; 	T(SUB(ax, ax));	// 71554 sub     ax, ax ;~ 2128:014E
cs=0x2128;eip=0x000150; 	X(PUSH(ax));	// 71555 push    ax ;~ 2128:0150
cs=0x2128;eip=0x000151; 	R(CALL(sub_2fcf2,0));	// 71556 call    sub_2FCF2 ;~ 2128:0151
cs=0x2128;eip=0x000154; 	X(INC(*(dw*)(raddr(ss,bp+var_6))));	// 71557 inc     [bp+var_6] ;~ 2128:0154
loc_2f9b7:
	// 8981 
cs=0x2128;eip=0x000157; 	T(MOV(ax, *(dw*)((&unk_48a9e))));	// 71560 mov     ax, word ptr unk_48A9E ;~ 2128:0157
cs=0x2128;eip=0x00015a; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), ax));	// 71561 cmp     [bp+var_6], ax ;~ 2128:015A
cs=0x2128;eip=0x00015d; 	R(JL(loc_2f9ab));	// 71562 jl      short loc_2F9AB ;~ 2128:015D
cs=0x2128;eip=0x00015f; 	R(CALLF(sub_29370,0));	// 71563 call    sub_29370 ;~ 2128:015F
cs=0x2128;eip=0x000164; 	T(TEST(al, 1));	// 71564 test    al, 1 ;~ 2128:0164
cs=0x2128;eip=0x000166; 	R(JZ(loc_2f9cd));	// 71565 jz      short loc_2F9CD ;~ 2128:0166
cs=0x2128;eip=0x000168; 	T(MOV(ax, 0x1168));	// 71566 mov     ax, 1168h ;~ 2128:0168
cs=0x2128;eip=0x00016b; 	R(JMP(loc_2f9d0));	// 71567 jmp     short loc_2F9D0 ;~ 2128:016B
loc_2f9cd:
	// 8982 
cs=0x2128;eip=0x00016d; 	T(MOV(ax, 0x117D));	// 71571 mov     ax, 117Dh ;~ 2128:016D
loc_2f9d0:
	// 8983 
cs=0x2128;eip=0x000170; 	X(PUSH(ax));	// 71574 push    ax ;~ 2128:0170
cs=0x2128;eip=0x000171; 	T(MOV(ax, 0x0E8));	// 71575 mov     ax, 0E8h ; 'è' ;~ 2128:0171
cs=0x2128;eip=0x000174; 	X(PUSH(ax));	// 71576 push    ax ;~ 2128:0174
cs=0x2128;eip=0x000175; 	T(MOV(ax, 2));	// 71577 mov     ax, 2 ;~ 2128:0175
cs=0x2128;eip=0x000178; 	X(PUSH(ax));	// 71578 push    ax ;~ 2128:0178
cs=0x2128;eip=0x000179; 	R(CALLF(sub_2de1a,0));	// 71579 call    sub_2DE1A ;~ 2128:0179
cs=0x2128;eip=0x00017e; 	T(SUB(si, si));	// 71580 sub     si, si ;~ 2128:017E
cs=0x2128;eip=0x000180; 	T(SUB(di, di));	// 71581 sub     di, di ;~ 2128:0180
cs=0x2128;eip=0x000182; 	T(SUB(ax, ax));	// 71582 sub     ax, ax ;~ 2128:0182
cs=0x2128;eip=0x000184; 	X(PUSH(ax));	// 71583 push    ax ;~ 2128:0184
cs=0x2128;eip=0x000185; 	T(MOV(ax, 1));	// 71584 mov     ax, 1 ;~ 2128:0185
cs=0x2128;eip=0x000188; 	X(PUSH(ax));	// 71585 push    ax ;~ 2128:0188
cs=0x2128;eip=0x000189; 	R(CALL(sub_2fcf2,0));	// 71586 call    sub_2FCF2 ;~ 2128:0189
cs=0x2128;eip=0x00018c; 	T(SUB(ax, ax));	// 71587 sub     ax, ax ;~ 2128:018C
cs=0x2128;eip=0x00018e; 	X(PUSH(ax));	// 71588 push    ax ;~ 2128:018E
cs=0x2128;eip=0x00018f; 	R(CALL(sub_2fd5d,0));	// 71589 call    sub_2FD5D ;~ 2128:018F
cs=0x2128;eip=0x000192; 	T(SUB(ax, ax));	// 71590 sub     ax, ax ;~ 2128:0192
cs=0x2128;eip=0x000194; 	X(PUSH(ax));	// 71591 push    ax ;~ 2128:0194
cs=0x2128;eip=0x000195; 	X(PUSH(ax));	// 71592 push    ax ;~ 2128:0195
loc_2f9f6:
	// 8984 
cs=0x2128;eip=0x000196; 	T(MOV(ax, 1));	// 71595 mov     ax, 1 ;~ 2128:0196
cs=0x2128;eip=0x000199; 	X(PUSH(ax));	// 71596 push    ax ;~ 2128:0199
cs=0x2128;eip=0x00019a; 	R(CALL(sub_2fe93,0));	// 71597 call    sub_2FE93 ;~ 2128:019A
loc_2f9fd:
	// 8985 
cs=0x2128;eip=0x00019d; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), si));	// 71600 mov     [bp+var_2], si ;~ 2128:019D
cs=0x2128;eip=0x0001a0; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), di));	// 71601 mov     [bp+var_8], di ;~ 2128:01A0
cs=0x2128;eip=0x0001a3; 	R(CALLF(sub_2eee2,0));	// 71602 call    sub_2EEE2 ;~ 2128:01A3
cs=0x2128;eip=0x0001a8; 	T(CMP(ax, 0x4700));	// 71603 cmp     ax, 4700h ;~ 2128:01A8
cs=0x2128;eip=0x0001ab; 	R(JNZ(loc_2fa10));	// 71604 jnz     short loc_2FA10 ;~ 2128:01AB
cs=0x2128;eip=0x0001ad; 	R(JMP(loc_2faa0));	// 71605 jmp     loc_2FAA0 ;~ 2128:01AD
loc_2fa10:
	// 8986 
cs=0x2128;eip=0x0001b0; 	R(JLE(loc_2fa15));	// 71609 jle     short loc_2FA15 ;~ 2128:01B0
cs=0x2128;eip=0x0001b2; 	R(JMP(loc_2fac3));	// 71610 jmp     loc_2FAC3 ;~ 2128:01B2
loc_2fa15:
	// 8987 
cs=0x2128;eip=0x0001b5; 	T(CMP(ax, 3));	// 71614 cmp     ax, 3 ;~ 2128:01B5
cs=0x2128;eip=0x0001b8; 	R(JNZ(loc_2fa1d));	// 71615 jnz     short loc_2FA1D ;~ 2128:01B8
cs=0x2128;eip=0x0001ba; 	R(JMP(loc_2fabb));	// 71616 jmp     loc_2FABB ;~ 2128:01BA
loc_2fa1d:
	// 8988 
cs=0x2128;eip=0x0001bd; 	T(CMP(ax, 0x0D));	// 71620 cmp     ax, 0Dh ;~ 2128:01BD
cs=0x2128;eip=0x0001c0; 	R(JNZ(loc_2fa25));	// 71621 jnz     short loc_2FA25 ;~ 2128:01C0
cs=0x2128;eip=0x0001c2; 	R(JMP(loc_2fae2));	// 71622 jmp     loc_2FAE2 ;~ 2128:01C2
loc_2fa25:
	// 8989 
cs=0x2128;eip=0x0001c5; 	T(CMP(ax, 0x1B));	// 71626 cmp     ax, 1Bh ;~ 2128:01C5
cs=0x2128;eip=0x0001c8; 	R(JNZ(loc_2fa2d));	// 71627 jnz     short loc_2FA2D ;~ 2128:01C8
cs=0x2128;eip=0x0001ca; 	R(JMP(loc_2fab6));	// 71628 jmp     loc_2FAB6 ;~ 2128:01CA
loc_2fa2d:
	// 8990 
cs=0x2128;eip=0x0001cd; 	R(JMP(loc_2fa37));	// 71632 jmp     short loc_2FA37 ;~ 2128:01CD
loc_2fa2f:
	// 8991 
cs=0x2128;eip=0x0001cf; 	T(DEC(si));	// 71636 dec     si ;~ 2128:01CF
cs=0x2128;eip=0x0001d0; 	R(JNS(loc_2fa37));	// 71637 jns     short loc_2FA37 ;~ 2128:01D0
cs=0x2128;eip=0x0001d2; 	T(MOV(si, *(dw*)((&unk_48a9e))));	// 71638 mov     si, word ptr unk_48A9E ;~ 2128:01D2
cs=0x2128;eip=0x0001d6; 	T(DEC(si));	// 71639 dec     si ;~ 2128:01D6
loc_2fa37:
	// 8992 
cs=0x2128;eip=0x0001d7; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), si));	// 71643 cmp     [bp+var_2], si ;~ 2128:01D7
cs=0x2128;eip=0x0001da; 	R(JZ(loc_2fa64));	// 71644 jz      short loc_2FA64 ;~ 2128:01DA
cs=0x2128;eip=0x0001dc; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 71645 push    [bp+var_2] ;~ 2128:01DC
cs=0x2128;eip=0x0001df; 	T(SUB(ax, ax));	// 71646 sub     ax, ax ;~ 2128:01DF
cs=0x2128;eip=0x0001e1; 	X(PUSH(ax));	// 71647 push    ax ;~ 2128:01E1
cs=0x2128;eip=0x0001e2; 	R(CALL(sub_2fcf2,0));	// 71648 call    sub_2FCF2 ;~ 2128:01E2
cs=0x2128;eip=0x0001e5; 	R(CALL(sub_2ff8f,0));	// 71649 call    sub_2FF8F ;~ 2128:01E5
cs=0x2128;eip=0x0001e8; 	T(SUB(di, di));	// 71650 sub     di, di ;~ 2128:01E8
cs=0x2128;eip=0x0001ea; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), di));	// 71651 mov     [bp+var_8], di ;~ 2128:01EA
cs=0x2128;eip=0x0001ed; 	X(PUSH(si));	// 71652 push    si ;~ 2128:01ED
cs=0x2128;eip=0x0001ee; 	T(MOV(ax, 1));	// 71653 mov     ax, 1 ;~ 2128:01EE
cs=0x2128;eip=0x0001f1; 	X(PUSH(ax));	// 71654 push    ax ;~ 2128:01F1
cs=0x2128;eip=0x0001f2; 	R(CALL(sub_2fcf2,0));	// 71655 call    sub_2FCF2 ;~ 2128:01F2
cs=0x2128;eip=0x0001f5; 	X(PUSH(si));	// 71656 push    si ;~ 2128:01F5
cs=0x2128;eip=0x0001f6; 	R(CALL(sub_2fd5d,0));	// 71657 call    sub_2FD5D ;~ 2128:01F6
cs=0x2128;eip=0x0001f9; 	X(PUSH(si));	// 71658 push    si ;~ 2128:01F9
cs=0x2128;eip=0x0001fa; 	T(SUB(ax, ax));	// 71659 sub     ax, ax ;~ 2128:01FA
cs=0x2128;eip=0x0001fc; 	X(PUSH(ax));	// 71660 push    ax ;~ 2128:01FC
cs=0x2128;eip=0x0001fd; 	T(MOV(ax, 1));	// 71661 mov     ax, 1 ;~ 2128:01FD
cs=0x2128;eip=0x000200; 	X(PUSH(ax));	// 71662 push    ax ;~ 2128:0200
cs=0x2128;eip=0x000201; 	R(CALL(sub_2fe93,0));	// 71663 call    sub_2FE93 ;~ 2128:0201
loc_2fa64:
	// 8993 
cs=0x2128;eip=0x000204; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), di));	// 71666 cmp     [bp+var_8], di ;~ 2128:0204
cs=0x2128;eip=0x000207; 	R(JZ(loc_2f9fd));	// 71667 jz      short loc_2F9FD ;~ 2128:0207
cs=0x2128;eip=0x000209; 	X(PUSH(si));	// 71668 push    si ;~ 2128:0209
cs=0x2128;eip=0x00020a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 71669 push    [bp+var_8] ;~ 2128:020A
cs=0x2128;eip=0x00020d; 	T(SUB(ax, ax));	// 71670 sub     ax, ax ;~ 2128:020D
cs=0x2128;eip=0x00020f; 	X(PUSH(ax));	// 71671 push    ax ;~ 2128:020F
cs=0x2128;eip=0x000210; 	R(CALL(sub_2fe93,0));	// 71672 call    sub_2FE93 ;~ 2128:0210
cs=0x2128;eip=0x000213; 	X(PUSH(si));	// 71673 push    si ;~ 2128:0213
cs=0x2128;eip=0x000214; 	X(PUSH(di));	// 71674 push    di ;~ 2128:0214
cs=0x2128;eip=0x000215; 	R(JMP(loc_2f9f6));	// 71675 jmp     loc_2F9F6 ;~ 2128:0215
loc_2fa78:
	// 8994 
cs=0x2128;eip=0x000218; 	T(INC(si));	// 71679 inc     si ;~ 2128:0218
cs=0x2128;eip=0x000219; 	T(MOV(ax, *(dw*)((&unk_48a9e))));	// 71680 mov     ax, word ptr unk_48A9E ;~ 2128:0219
cs=0x2128;eip=0x00021c; 	T(CMP(si, ax));	// 71681 cmp     si, ax ;~ 2128:021C
cs=0x2128;eip=0x00021e; 	R(JL(loc_2fa37));	// 71682 jl      short loc_2FA37 ;~ 2128:021E
cs=0x2128;eip=0x000220; 	T(SUB(si, si));	// 71683 sub     si, si ;~ 2128:0220
cs=0x2128;eip=0x000222; 	R(JMP(loc_2fa37));	// 71684 jmp     short loc_2FA37 ;~ 2128:0222
loc_2fa84:
	// 8995 
cs=0x2128;eip=0x000224; 	T(DEC(di));	// 71688 dec     di ;~ 2128:0224
cs=0x2128;eip=0x000225; 	R(JNS(loc_2fa37));	// 71689 jns     short loc_2FA37 ;~ 2128:0225
loc_2fa87:
	// 8996 
cs=0x2128;eip=0x000227; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_8))));	// 71692 mov     di, [bp+var_8] ;~ 2128:0227
cs=0x2128;eip=0x00022a; 	R(JMP(loc_2fa37));	// 71693 jmp     short loc_2FA37 ;~ 2128:022A
loc_2fa8c:
	// 8997 
cs=0x2128;eip=0x00022c; 	T(MOV(ax, 0x18));	// 71697 mov     ax, 18h ;~ 2128:022C
cs=0x2128;eip=0x00022f; 	T(IMUL1_2(si));	// 71698 imul    si ;~ 2128:022F
cs=0x2128;eip=0x000231; 	T(MOV(bx, ax));	// 71699 mov     bx, ax ;~ 2128:0231
cs=0x2128;eip=0x000233; 	T(MOV(al, *(raddr(ds,bx+0x1106))));	// 71700 mov     al, [bx+1106h] ;~ 2128:0233
cs=0x2128;eip=0x000237; 	T(SUB(ah, ah));	// 71701 sub     ah, ah ;~ 2128:0237
cs=0x2128;eip=0x000239; 	T(INC(di));	// 71702 inc     di ;~ 2128:0239
cs=0x2128;eip=0x00023a; 	T(CMP(ax, di));	// 71703 cmp     ax, di ;~ 2128:023A
cs=0x2128;eip=0x00023c; 	R(JA(loc_2fa37));	// 71704 ja      short loc_2FA37 ;~ 2128:023C
cs=0x2128;eip=0x00023e; 	R(JMP(loc_2fa87));	// 71705 jmp     short loc_2FA87 ;~ 2128:023E
loc_2faa0:
	// 8998 
cs=0x2128;eip=0x000240; 	T(SUB(di, di));	// 71709 sub     di, di ;~ 2128:0240
cs=0x2128;eip=0x000242; 	R(JMP(loc_2fa37));	// 71710 jmp     short loc_2FA37 ;~ 2128:0242
loc_2faa4:
	// 8999 
cs=0x2128;eip=0x000244; 	T(MOV(ax, 0x18));	// 71714 mov     ax, 18h ;~ 2128:0244
cs=0x2128;eip=0x000247; 	T(IMUL1_2(si));	// 71715 imul    si ;~ 2128:0247
cs=0x2128;eip=0x000249; 	T(MOV(bx, ax));	// 71716 mov     bx, ax ;~ 2128:0249
cs=0x2128;eip=0x00024b; 	T(MOV(al, *(raddr(ds,bx+0x1106))));	// 71717 mov     al, [bx+1106h] ;~ 2128:024B
cs=0x2128;eip=0x00024f; 	T(SUB(ah, ah));	// 71718 sub     ah, ah ;~ 2128:024F
cs=0x2128;eip=0x000251; 	T(MOV(di, ax));	// 71719 mov     di, ax ;~ 2128:0251
cs=0x2128;eip=0x000253; 	T(DEC(di));	// 71720 dec     di ;~ 2128:0253
cs=0x2128;eip=0x000254; 	R(JMP(loc_2fa37));	// 71721 jmp     short loc_2FA37 ;~ 2128:0254
loc_2fab6:
	// 9000 
cs=0x2128;eip=0x000256; 	T(MOV(di, 0x0FFFF));	// 71725 mov     di, 0FFFFh ;~ 2128:0256
cs=0x2128;eip=0x000259; 	R(JMP(loc_2fae2));	// 71726 jmp     short loc_2FAE2 ;~ 2128:0259
loc_2fabb:
	// 9001 
cs=0x2128;eip=0x00025b; 	R(CALLF(sub_318b6,0));	// 71730 call    sub_318B6 ;~ 2128:025B
cs=0x2128;eip=0x000260; 	R(JMP(loc_2fa37));	// 71731 jmp     loc_2FA37 ;~ 2128:0260
loc_2fac3:
	// 9002 
cs=0x2128;eip=0x000263; 	T(CMP(ax, 0x4800));	// 71735 cmp     ax, 4800h ;~ 2128:0263
cs=0x2128;eip=0x000266; 	R(JZ(loc_2fa84));	// 71736 jz      short loc_2FA84 ;~ 2128:0266
cs=0x2128;eip=0x000268; 	T(CMP(ax, 0x4B00));	// 71737 cmp     ax, 4B00h ;~ 2128:0268
cs=0x2128;eip=0x00026b; 	R(JNZ(loc_2fad0));	// 71738 jnz     short loc_2FAD0 ;~ 2128:026B
cs=0x2128;eip=0x00026d; 	R(JMP(loc_2fa2f));	// 71739 jmp     loc_2FA2F ;~ 2128:026D
loc_2fad0:
	// 9003 
cs=0x2128;eip=0x000270; 	T(CMP(ax, 0x4D00));	// 71743 cmp     ax, 4D00h ;~ 2128:0270
cs=0x2128;eip=0x000273; 	R(JZ(loc_2fa78));	// 71744 jz      short loc_2FA78 ;~ 2128:0273
cs=0x2128;eip=0x000275; 	T(CMP(ax, 0x4F00));	// 71745 cmp     ax, 4F00h ;~ 2128:0275
cs=0x2128;eip=0x000278; 	R(JZ(loc_2faa4));	// 71746 jz      short loc_2FAA4 ;~ 2128:0278
cs=0x2128;eip=0x00027a; 	T(CMP(ax, 0x5000));	// 71747 cmp     ax, 5000h ;~ 2128:027A
cs=0x2128;eip=0x00027d; 	R(JZ(loc_2fa8c));	// 71748 jz      short loc_2FA8C ;~ 2128:027D
cs=0x2128;eip=0x00027f; 	R(JMP(loc_2fa37));	// 71749 jmp     loc_2FA37 ;~ 2128:027F
loc_2fae2:
	// 9004 
cs=0x2128;eip=0x000282; 	R(CALL(sub_2ff8f,0));	// 71754 call    sub_2FF8F ;~ 2128:0282
cs=0x2128;eip=0x000285; 	T(MOV(ax, 0x0C7A0));	// 71755 mov     ax, 0C7A0h ;~ 2128:0285
cs=0x2128;eip=0x000288; 	X(PUSH(ax));	// 71756 push    ax ;~ 2128:0288
cs=0x2128;eip=0x000289; 	T(SUB(ax, ax));	// 71757 sub     ax, ax ;~ 2128:0289
cs=0x2128;eip=0x00028b; 	X(PUSH(ax));	// 71758 push    ax ;~ 2128:028B
cs=0x2128;eip=0x00028c; 	X(PUSH(ax));	// 71759 push    ax ;~ 2128:028C
cs=0x2128;eip=0x00028d; 	T(MOV(ax, 0x0ED08));	// 71760 mov     ax, 0ED08h ;~ 2128:028D
cs=0x2128;eip=0x000290; 	X(PUSH(ax));	// 71761 push    ax ;~ 2128:0290
cs=0x2128;eip=0x000291; 	T(SUB(ax, ax));	// 71762 sub     ax, ax ;~ 2128:0291
cs=0x2128;eip=0x000293; 	X(PUSH(ax));	// 71763 push    ax ;~ 2128:0293
cs=0x2128;eip=0x000294; 	X(PUSH(ax));	// 71764 push    ax ;~ 2128:0294
cs=0x2128;eip=0x000295; 	X(PUSH(*(dw*)((&unk_47b34))));	// 71765 push    word ptr unk_47B34 ;~ 2128:0295
cs=0x2128;eip=0x000299; 	T(MOV(ax, 0x0C));	// 71766 mov     ax, 0Ch ;~ 2128:0299
cs=0x2128;eip=0x00029c; 	X(PUSH(ax));	// 71767 push    ax ;~ 2128:029C
cs=0x2128;eip=0x00029d; 	R(CALLF(sub_2c4d3,0));	// 71768 call    sub_2C4D3 ;~ 2128:029D
cs=0x2128;eip=0x0002a2; 	X(PUSH(*(dw*)((&unk_54146))));	// 71769 push    word ptr unk_54146 ;~ 2128:02A2
cs=0x2128;eip=0x0002a6; 	R(CALLF(sub_202f1,0));	// 71770 call    sub_202F1 ;~ 2128:02A6
cs=0x2128;eip=0x0002ab; 	R(CALLF(sub_20565,0));	// 71771 call    sub_20565 ;~ 2128:02AB
cs=0x2128;eip=0x0002b0; 	T(MOV(ax, si));	// 71772 mov     ax, si ;~ 2128:02B0
cs=0x2128;eip=0x0002b2; 	T(MOV(cl, 8));	// 71773 mov     cl, 8 ;~ 2128:02B2
cs=0x2128;eip=0x0002b4; 	T(SHL(ax, cl));	// 71774 shl     ax, cl ;~ 2128:02B4
cs=0x2128;eip=0x0002b6; 	T(ADD(ax, di));	// 71775 add     ax, di ;~ 2128:02B6
cs=0x2128;eip=0x0002b8; 	X(POP(si));	// 71776 pop     si ;~ 2128:02B8
cs=0x2128;eip=0x0002b9; 	X(POP(di));	// 71777 pop     di ;~ 2128:02B9
cs=0x2128;eip=0x0002ba; 	T(MOV(sp, bp));	// 71778 mov     sp, bp ;~ 2128:02BA
cs=0x2128;eip=0x0002bc; 	X(POP(bp));	// 71779 pop     bp ;~ 2128:02BC
cs=0x2128;eip=0x0002bd; 	R(RETN(0));	// 71780 retn ;~ 2128:02BD
sub_2fb1e:
	// 71788 
#undef var_c
#define var_c -0x0C
	// 71791 var_C           = word ptr -0Ch ;~ 2128:02BE
#undef var_a
#define var_a -0x0A
	// 71792 var_A           = word ptr -0Ah ;~ 2128:02BE
#undef var_8
#define var_8 -8
	// 71793 var_8           = word ptr -8 ;~ 2128:02BE
#undef var_6
#define var_6 -6
	// 71794 var_6           = word ptr -6 ;~ 2128:02BE
#undef var_4
#define var_4 -4
	// 71795 var_4           = word ptr -4 ;~ 2128:02BE
#undef var_2
#define var_2 -2
	// 71796 var_2           = word ptr -2 ;~ 2128:02BE
#undef arg_0
#define arg_0 4
	// 71797 arg_0           = word ptr  4 ;~ 2128:02BE
#undef arg_2
#define arg_2 6
	// 71798 arg_2           = word ptr  6 ;~ 2128:02BE
cs=0x2128;eip=0x0002be; 	X(PUSH(bp));	// 71800 push    bp ;~ 2128:02BE
cs=0x2128;eip=0x0002bf; 	T(MOV(bp, sp));	// 71801 mov     bp, sp ;~ 2128:02BF
cs=0x2128;eip=0x0002c1; 	T(SUB(sp, 0x0C));	// 71802 sub     sp, 0Ch ;~ 2128:02C1
cs=0x2128;eip=0x0002c4; 	X(PUSH(di));	// 71803 push    di ;~ 2128:02C4
cs=0x2128;eip=0x0002c5; 	X(PUSH(si));	// 71804 push    si ;~ 2128:02C5
cs=0x2128;eip=0x0002c6; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 71805 mov     si, [bp+arg_2] ;~ 2128:02C6
cs=0x2128;eip=0x0002c9; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 71806 mov     di, [bp+arg_0] ;~ 2128:02C9
cs=0x2128;eip=0x0002cc; 	T(ax = si+1);	// 71807 lea     ax, [si+1] ;~ 2128:02CC
cs=0x2128;eip=0x0002cf; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 71808 mov     [bp+var_2], ax ;~ 2128:02CF
cs=0x2128;eip=0x0002d2; 	X(PUSH(ax));	// 71809 push    ax ;~ 2128:02D2
cs=0x2128;eip=0x0002d3; 	X(PUSH(di));	// 71810 push    di ;~ 2128:02D3
cs=0x2128;eip=0x0002d4; 	T(MOV(ax, 0x0FF0F));	// 71811 mov     ax, 0FF0Fh ;~ 2128:02D4
cs=0x2128;eip=0x0002d7; 	X(PUSH(ax));	// 71812 push    ax ;~ 2128:02D7
cs=0x2128;eip=0x0002d8; 	R(CALLF(sub_22ab7,0));	// 71813 call    sub_22AB7 ;~ 2128:02D8
cs=0x2128;eip=0x0002dd; 	T(ax = si+2);	// 71814 lea     ax, [si+2] ;~ 2128:02DD
cs=0x2128;eip=0x0002e0; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 71815 mov     [bp+var_4], ax ;~ 2128:02E0
cs=0x2128;eip=0x0002e3; 	X(PUSH(ax));	// 71816 push    ax ;~ 2128:02E3
cs=0x2128;eip=0x0002e4; 	X(PUSH(di));	// 71817 push    di ;~ 2128:02E4
cs=0x2128;eip=0x0002e5; 	T(MOV(ax, 0x0FF0F));	// 71818 mov     ax, 0FF0Fh ;~ 2128:02E5
cs=0x2128;eip=0x0002e8; 	X(PUSH(ax));	// 71819 push    ax ;~ 2128:02E8
cs=0x2128;eip=0x0002e9; 	R(CALLF(sub_22ab7,0));	// 71820 call    sub_22AB7 ;~ 2128:02E9
cs=0x2128;eip=0x0002ee; 	T(ax = di+1);	// 71821 lea     ax, [di+1] ;~ 2128:02EE
cs=0x2128;eip=0x0002f1; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 71822 mov     [bp+var_6], ax ;~ 2128:02F1
cs=0x2128;eip=0x0002f4; 	X(PUSH(si));	// 71823 push    si ;~ 2128:02F4
cs=0x2128;eip=0x0002f5; 	X(PUSH(ax));	// 71824 push    ax ;~ 2128:02F5
cs=0x2128;eip=0x0002f6; 	T(MOV(ax, 0x0FF0F));	// 71825 mov     ax, 0FF0Fh ;~ 2128:02F6
cs=0x2128;eip=0x0002f9; 	X(PUSH(ax));	// 71826 push    ax ;~ 2128:02F9
cs=0x2128;eip=0x0002fa; 	R(CALLF(sub_22ab7,0));	// 71827 call    sub_22AB7 ;~ 2128:02FA
cs=0x2128;eip=0x0002ff; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 71828 push    [bp+var_2] ;~ 2128:02FF
cs=0x2128;eip=0x000302; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 71829 push    [bp+var_6] ;~ 2128:0302
cs=0x2128;eip=0x000305; 	T(MOV(ax, 0x0FF0F));	// 71830 mov     ax, 0FF0Fh ;~ 2128:0305
cs=0x2128;eip=0x000308; 	X(PUSH(ax));	// 71831 push    ax ;~ 2128:0308
cs=0x2128;eip=0x000309; 	R(CALLF(sub_22ab7,0));	// 71832 call    sub_22AB7 ;~ 2128:0309
cs=0x2128;eip=0x00030e; 	T(ax = di+2);	// 71833 lea     ax, [di+2] ;~ 2128:030E
cs=0x2128;eip=0x000311; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 71834 mov     [bp+var_8], ax ;~ 2128:0311
cs=0x2128;eip=0x000314; 	X(PUSH(si));	// 71835 push    si ;~ 2128:0314
cs=0x2128;eip=0x000315; 	X(PUSH(ax));	// 71836 push    ax ;~ 2128:0315
cs=0x2128;eip=0x000316; 	T(MOV(ax, 0x0FF0F));	// 71837 mov     ax, 0FF0Fh ;~ 2128:0316
cs=0x2128;eip=0x000319; 	X(PUSH(ax));	// 71838 push    ax ;~ 2128:0319
cs=0x2128;eip=0x00031a; 	R(CALLF(sub_22ab7,0));	// 71839 call    sub_22AB7 ;~ 2128:031A
cs=0x2128;eip=0x00031f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 71840 push    [bp+var_4] ;~ 2128:031F
cs=0x2128;eip=0x000322; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 71841 push    [bp+var_8] ;~ 2128:0322
cs=0x2128;eip=0x000325; 	T(MOV(ax, 0x0FF0F));	// 71842 mov     ax, 0FF0Fh ;~ 2128:0325
cs=0x2128;eip=0x000328; 	X(PUSH(ax));	// 71843 push    ax ;~ 2128:0328
cs=0x2128;eip=0x000329; 	R(CALLF(sub_22ab7,0));	// 71844 call    sub_22AB7 ;~ 2128:0329
cs=0x2128;eip=0x00032e; 	T(ax = di+3);	// 71845 lea     ax, [di+3] ;~ 2128:032E
cs=0x2128;eip=0x000331; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 71846 mov     [bp+var_A], ax ;~ 2128:0331
cs=0x2128;eip=0x000334; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 71847 push    [bp+var_2] ;~ 2128:0334
cs=0x2128;eip=0x000337; 	X(PUSH(ax));	// 71848 push    ax ;~ 2128:0337
cs=0x2128;eip=0x000338; 	T(MOV(ax, 0x0FF00));	// 71849 mov     ax, 0FF00h ;~ 2128:0338
cs=0x2128;eip=0x00033b; 	X(PUSH(ax));	// 71850 push    ax ;~ 2128:033B
cs=0x2128;eip=0x00033c; 	R(CALLF(sub_22ab7,0));	// 71851 call    sub_22AB7 ;~ 2128:033C
cs=0x2128;eip=0x000341; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 71852 push    [bp+var_4] ;~ 2128:0341
cs=0x2128;eip=0x000344; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 71853 push    [bp+var_A] ;~ 2128:0344
cs=0x2128;eip=0x000347; 	T(MOV(ax, 0x0FF00));	// 71854 mov     ax, 0FF00h ;~ 2128:0347
cs=0x2128;eip=0x00034a; 	X(PUSH(ax));	// 71855 push    ax ;~ 2128:034A
cs=0x2128;eip=0x00034b; 	R(CALLF(sub_22ab7,0));	// 71856 call    sub_22AB7 ;~ 2128:034B
cs=0x2128;eip=0x000350; 	T(ax = si+3);	// 71857 lea     ax, [si+3] ;~ 2128:0350
cs=0x2128;eip=0x000353; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 71858 mov     [bp+var_C], ax ;~ 2128:0353
cs=0x2128;eip=0x000356; 	X(PUSH(ax));	// 71859 push    ax ;~ 2128:0356
cs=0x2128;eip=0x000357; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 71860 push    [bp+var_8] ;~ 2128:0357
cs=0x2128;eip=0x00035a; 	T(MOV(ax, 0x0FF00));	// 71861 mov     ax, 0FF00h ;~ 2128:035A
cs=0x2128;eip=0x00035d; 	X(PUSH(ax));	// 71862 push    ax ;~ 2128:035D
cs=0x2128;eip=0x00035e; 	R(CALLF(sub_22ab7,0));	// 71863 call    sub_22AB7 ;~ 2128:035E
cs=0x2128;eip=0x000363; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 71864 push    [bp+var_C] ;~ 2128:0363
cs=0x2128;eip=0x000366; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 71865 push    [bp+var_6] ;~ 2128:0366
cs=0x2128;eip=0x000369; 	T(MOV(ax, 0x0FF00));	// 71866 mov     ax, 0FF00h ;~ 2128:0369
cs=0x2128;eip=0x00036c; 	X(PUSH(ax));	// 71867 push    ax ;~ 2128:036C
cs=0x2128;eip=0x00036d; 	R(CALLF(sub_22ab7,0));	// 71868 call    sub_22AB7 ;~ 2128:036D
cs=0x2128;eip=0x000372; 	X(POP(si));	// 71869 pop     si ;~ 2128:0372
cs=0x2128;eip=0x000373; 	X(POP(di));	// 71870 pop     di ;~ 2128:0373
cs=0x2128;eip=0x000374; 	T(MOV(sp, bp));	// 71871 mov     sp, bp ;~ 2128:0374
cs=0x2128;eip=0x000376; 	X(POP(bp));	// 71872 pop     bp ;~ 2128:0376
cs=0x2128;eip=0x000377; 	R(RETN(4));	// 71873 retn    4 ;~ 2128:0377
sub_2fbda:
	// 71881 
#undef var_c
#define var_c -0x0C
	// 71884 var_C           = word ptr -0Ch ;~ 2128:037A
#undef var_a
#define var_a -0x0A
	// 71885 var_A           = word ptr -0Ah ;~ 2128:037A
#undef var_8
#define var_8 -8
	// 71886 var_8           = word ptr -8 ;~ 2128:037A
#undef var_6
#define var_6 -6
	// 71887 var_6           = word ptr -6 ;~ 2128:037A
#undef var_4
#define var_4 -4
	// 71888 var_4           = word ptr -4 ;~ 2128:037A
#undef var_2
#define var_2 -2
	// 71889 var_2           = word ptr -2 ;~ 2128:037A
#undef arg_0
#define arg_0 6
	// 71890 arg_0           = byte ptr  6 ;~ 2128:037A
#undef arg_2
#define arg_2 8
	// 71891 arg_2           = word ptr  8 ;~ 2128:037A
#undef arg_4
#define arg_4 0x0A
	// 71892 arg_4           = word ptr  0Ah ;~ 2128:037A
#undef arg_6
#define arg_6 0x0C
	// 71893 arg_6           = word ptr  0Ch ;~ 2128:037A
#undef arg_8
#define arg_8 0x0E
	// 71894 arg_8           = word ptr  0Eh ;~ 2128:037A
cs=0x2128;eip=0x00037a; 	X(PUSH(bp));	// 71896 push    bp ;~ 2128:037A
cs=0x2128;eip=0x00037b; 	T(MOV(bp, sp));	// 71897 mov     bp, sp ;~ 2128:037B
cs=0x2128;eip=0x00037d; 	T(SUB(sp, 0x0C));	// 71898 sub     sp, 0Ch ;~ 2128:037D
cs=0x2128;eip=0x000380; 	X(PUSH(di));	// 71899 push    di ;~ 2128:0380
cs=0x2128;eip=0x000381; 	X(PUSH(si));	// 71900 push    si ;~ 2128:0381
cs=0x2128;eip=0x000382; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_8))));	// 71901 mov     si, [bp+arg_8] ;~ 2128:0382
cs=0x2128;eip=0x000385; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_6))));	// 71902 mov     di, [bp+arg_6] ;~ 2128:0385
cs=0x2128;eip=0x000388; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 71903 mov     ax, [bp+arg_4] ;~ 2128:0388
cs=0x2128;eip=0x00038b; 	T(ADD(ax, si));	// 71904 add     ax, si ;~ 2128:038B
cs=0x2128;eip=0x00038d; 	T(DEC(ax));	// 71905 dec     ax ;~ 2128:038D
cs=0x2128;eip=0x00038e; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 71906 mov     [bp+var_4], ax ;~ 2128:038E
cs=0x2128;eip=0x000391; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 71907 mov     ax, [bp+arg_2] ;~ 2128:0391
cs=0x2128;eip=0x000394; 	T(ADD(ax, di));	// 71908 add     ax, di ;~ 2128:0394
cs=0x2128;eip=0x000396; 	T(DEC(ax));	// 71909 dec     ax ;~ 2128:0396
cs=0x2128;eip=0x000397; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 71910 mov     [bp+var_2], ax ;~ 2128:0397
cs=0x2128;eip=0x00039a; 	R(CALL(sub_2f90f,0));	// 71911 call    sub_2F90F ;~ 2128:039A
cs=0x2128;eip=0x00039d; 	X(PUSH(si));	// 71912 push    si ;~ 2128:039D
cs=0x2128;eip=0x00039e; 	X(PUSH(di));	// 71913 push    di ;~ 2128:039E
cs=0x2128;eip=0x00039f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 71914 push    [bp+arg_4] ;~ 2128:039F
cs=0x2128;eip=0x0003a2; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 71915 push    [bp+arg_2] ;~ 2128:03A2
cs=0x2128;eip=0x0003a5; 	X(PUSH(*(dw*)((&unk_48a9c))));	// 71916 push    word ptr unk_48A9C ;~ 2128:03A5
cs=0x2128;eip=0x0003a9; 	R(CALLF(sub_233c4,0));	// 71917 call    sub_233C4 ;~ 2128:03A9
cs=0x2128;eip=0x0003ae; 	X(PUSH(si));	// 71918 push    si ;~ 2128:03AE
cs=0x2128;eip=0x0003af; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 71919 push    [bp+var_4] ;~ 2128:03AF
cs=0x2128;eip=0x0003b2; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 71920 push    [bp+var_2] ;~ 2128:03B2
cs=0x2128;eip=0x0003b5; 	T(MOV(ax, 0x0FF08));	// 71921 mov     ax, 0FF08h ;~ 2128:03B5
cs=0x2128;eip=0x0003b8; 	X(PUSH(ax));	// 71922 push    ax ;~ 2128:03B8
cs=0x2128;eip=0x0003b9; 	R(CALLF(sub_203c2,0));	// 71923 call    sub_203C2 ;~ 2128:03B9
cs=0x2128;eip=0x0003be; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 71924 push    [bp+var_4] ;~ 2128:03BE
cs=0x2128;eip=0x0003c1; 	X(PUSH(di));	// 71925 push    di ;~ 2128:03C1
cs=0x2128;eip=0x0003c2; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 71926 push    [bp+var_2] ;~ 2128:03C2
cs=0x2128;eip=0x0003c5; 	T(MOV(ax, 0x0FF08));	// 71927 mov     ax, 0FF08h ;~ 2128:03C5
cs=0x2128;eip=0x0003c8; 	X(PUSH(ax));	// 71928 push    ax ;~ 2128:03C8
cs=0x2128;eip=0x0003c9; 	R(CALLF(sub_203e4,0));	// 71929 call    sub_203E4 ;~ 2128:03C9
cs=0x2128;eip=0x0003ce; 	X(PUSH(si));	// 71930 push    si ;~ 2128:03CE
cs=0x2128;eip=0x0003cf; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 71931 push    [bp+var_4] ;~ 2128:03CF
cs=0x2128;eip=0x0003d2; 	X(PUSH(di));	// 71932 push    di ;~ 2128:03D2
cs=0x2128;eip=0x0003d3; 	T(MOV(ax, 0x0FF0F));	// 71933 mov     ax, 0FF0Fh ;~ 2128:03D3
cs=0x2128;eip=0x0003d6; 	X(PUSH(ax));	// 71934 push    ax ;~ 2128:03D6
cs=0x2128;eip=0x0003d7; 	R(CALLF(sub_203c2,0));	// 71935 call    sub_203C2 ;~ 2128:03D7
cs=0x2128;eip=0x0003dc; 	X(PUSH(si));	// 71936 push    si ;~ 2128:03DC
cs=0x2128;eip=0x0003dd; 	X(PUSH(di));	// 71937 push    di ;~ 2128:03DD
cs=0x2128;eip=0x0003de; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 71938 push    [bp+var_2] ;~ 2128:03DE
cs=0x2128;eip=0x0003e1; 	T(MOV(ax, 0x0FF0F));	// 71939 mov     ax, 0FF0Fh ;~ 2128:03E1
cs=0x2128;eip=0x0003e4; 	X(PUSH(ax));	// 71940 push    ax ;~ 2128:03E4
cs=0x2128;eip=0x0003e5; 	R(CALLF(sub_203e4,0));	// 71941 call    sub_203E4 ;~ 2128:03E5
cs=0x2128;eip=0x0003ea; 	T(CMP(*(raddr(ss,bp+arg_0)), 0));	// 71942 cmp     [bp+arg_0], 0 ;~ 2128:03EA
cs=0x2128;eip=0x0003ee; 	R(JZ(loc_2fc86));	// 71943 jz      short loc_2FC86 ;~ 2128:03EE
cs=0x2128;eip=0x0003f0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 71944 mov     ax, [bp+var_4] ;~ 2128:03F0
cs=0x2128;eip=0x0003f3; 	T(INC(ax));	// 71945 inc     ax ;~ 2128:03F3
cs=0x2128;eip=0x0003f4; 	X(PUSH(ax));	// 71946 push    ax ;~ 2128:03F4
cs=0x2128;eip=0x0003f5; 	T(ax = di+4);	// 71947 lea     ax, [di+4] ;~ 2128:03F5
cs=0x2128;eip=0x0003f8; 	X(PUSH(ax));	// 71948 push    ax ;~ 2128:03F8
cs=0x2128;eip=0x0003f9; 	T(MOV(ax, 4));	// 71949 mov     ax, 4 ;~ 2128:03F9
cs=0x2128;eip=0x0003fc; 	X(PUSH(ax));	// 71950 push    ax ;~ 2128:03FC
cs=0x2128;eip=0x0003fd; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 71951 push    [bp+arg_2] ;~ 2128:03FD
cs=0x2128;eip=0x000400; 	T(MOV(ax, 0x5A00));	// 71952 mov     ax, 5A00h ;~ 2128:0400
cs=0x2128;eip=0x000403; 	X(PUSH(ax));	// 71953 push    ax ;~ 2128:0403
cs=0x2128;eip=0x000404; 	R(CALLF(sub_233c4,0));	// 71954 call    sub_233C4 ;~ 2128:0404
cs=0x2128;eip=0x000409; 	T(ax = si+4);	// 71955 lea     ax, [si+4] ;~ 2128:0409
cs=0x2128;eip=0x00040c; 	X(PUSH(ax));	// 71956 push    ax ;~ 2128:040C
cs=0x2128;eip=0x00040d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 71957 mov     ax, [bp+var_2] ;~ 2128:040D
cs=0x2128;eip=0x000410; 	T(INC(ax));	// 71958 inc     ax ;~ 2128:0410
cs=0x2128;eip=0x000411; 	X(PUSH(ax));	// 71959 push    ax ;~ 2128:0411
cs=0x2128;eip=0x000412; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 71960 mov     ax, [bp+arg_4] ;~ 2128:0412
cs=0x2128;eip=0x000415; 	T(SUB(ax, 4));	// 71961 sub     ax, 4 ;~ 2128:0415
cs=0x2128;eip=0x000418; 	X(PUSH(ax));	// 71962 push    ax ;~ 2128:0418
cs=0x2128;eip=0x000419; 	T(MOV(ax, 4));	// 71963 mov     ax, 4 ;~ 2128:0419
cs=0x2128;eip=0x00041c; 	X(PUSH(ax));	// 71964 push    ax ;~ 2128:041C
cs=0x2128;eip=0x00041d; 	T(MOV(ax, 0x5A00));	// 71965 mov     ax, 5A00h ;~ 2128:041D
cs=0x2128;eip=0x000420; 	X(PUSH(ax));	// 71966 push    ax ;~ 2128:0420
cs=0x2128;eip=0x000421; 	R(CALLF(sub_233c4,0));	// 71967 call    sub_233C4 ;~ 2128:0421
loc_2fc86:
	// 9005 
cs=0x2128;eip=0x000426; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0x14));	// 71970 cmp     [bp+arg_2], 14h ;~ 2128:0426
cs=0x2128;eip=0x00042a; 	R(JL(loc_2fcc7));	// 71971 jl      short loc_2FCC7 ;~ 2128:042A
cs=0x2128;eip=0x00042c; 	T(ax = di+2);	// 71972 lea     ax, [di+2] ;~ 2128:042C
cs=0x2128;eip=0x00042f; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 71973 mov     [bp+var_6], ax ;~ 2128:042F
cs=0x2128;eip=0x000432; 	T(ax = si+2);	// 71974 lea     ax, [si+2] ;~ 2128:0432
cs=0x2128;eip=0x000435; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 71975 mov     [bp+var_8], ax ;~ 2128:0435
cs=0x2128;eip=0x000438; 	X(PUSH(ax));	// 71976 push    ax ;~ 2128:0438
cs=0x2128;eip=0x000439; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 71977 push    [bp+var_6] ;~ 2128:0439
cs=0x2128;eip=0x00043c; 	R(CALL(sub_2fb1e,0));	// 71978 call    sub_2FB1E ;~ 2128:043C
cs=0x2128;eip=0x00043f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 71979 mov     ax, [bp+var_2] ;~ 2128:043F
cs=0x2128;eip=0x000442; 	T(SUB(ax, 5));	// 71980 sub     ax, 5 ;~ 2128:0442
cs=0x2128;eip=0x000445; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 71981 mov     [bp+var_A], ax ;~ 2128:0445
cs=0x2128;eip=0x000448; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 71982 push    [bp+var_8] ;~ 2128:0448
cs=0x2128;eip=0x00044b; 	X(PUSH(ax));	// 71983 push    ax ;~ 2128:044B
cs=0x2128;eip=0x00044c; 	R(CALL(sub_2fb1e,0));	// 71984 call    sub_2FB1E ;~ 2128:044C
cs=0x2128;eip=0x00044f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 71985 mov     ax, [bp+var_4] ;~ 2128:044F
cs=0x2128;eip=0x000452; 	T(SUB(ax, 5));	// 71986 sub     ax, 5 ;~ 2128:0452
cs=0x2128;eip=0x000455; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 71987 mov     [bp+var_C], ax ;~ 2128:0455
cs=0x2128;eip=0x000458; 	X(PUSH(ax));	// 71988 push    ax ;~ 2128:0458
cs=0x2128;eip=0x000459; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 71989 push    [bp+var_6] ;~ 2128:0459
cs=0x2128;eip=0x00045c; 	R(CALL(sub_2fb1e,0));	// 71990 call    sub_2FB1E ;~ 2128:045C
cs=0x2128;eip=0x00045f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 71991 push    [bp+var_C] ;~ 2128:045F
cs=0x2128;eip=0x000462; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 71992 push    [bp+var_A] ;~ 2128:0462
cs=0x2128;eip=0x000465; 	R(JMP(loc_2fce7));	// 71993 jmp     short loc_2FCE7 ;~ 2128:0465
loc_2fcc7:
	// 9006 
cs=0x2128;eip=0x000467; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 71997 mov     ax, [bp+arg_2] ;~ 2128:0467
cs=0x2128;eip=0x00046a; 	T(SAR(ax, 1));	// 71998 sar     ax, 1 ;~ 2128:046A
cs=0x2128;eip=0x00046c; 	T(ADD(ax, di));	// 71999 add     ax, di ;~ 2128:046C
cs=0x2128;eip=0x00046e; 	T(DEC(ax));	// 72000 dec     ax ;~ 2128:046E
cs=0x2128;eip=0x00046f; 	T(DEC(ax));	// 72001 dec     ax ;~ 2128:046F
cs=0x2128;eip=0x000470; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 72002 mov     [bp+var_C], ax ;~ 2128:0470
cs=0x2128;eip=0x000473; 	T(ax = si+2);	// 72003 lea     ax, [si+2] ;~ 2128:0473
cs=0x2128;eip=0x000476; 	X(PUSH(ax));	// 72004 push    ax ;~ 2128:0476
cs=0x2128;eip=0x000477; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 72005 push    [bp+var_C] ;~ 2128:0477
cs=0x2128;eip=0x00047a; 	R(CALL(sub_2fb1e,0));	// 72006 call    sub_2FB1E ;~ 2128:047A
cs=0x2128;eip=0x00047d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 72007 mov     ax, [bp+var_4] ;~ 2128:047D
cs=0x2128;eip=0x000480; 	T(SUB(ax, 5));	// 72008 sub     ax, 5 ;~ 2128:0480
cs=0x2128;eip=0x000483; 	X(PUSH(ax));	// 72009 push    ax ;~ 2128:0483
cs=0x2128;eip=0x000484; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 72010 push    [bp+var_C] ;~ 2128:0484
loc_2fce7:
	// 9007 
cs=0x2128;eip=0x000487; 	R(CALL(sub_2fb1e,0));	// 72013 call    sub_2FB1E ;~ 2128:0487
cs=0x2128;eip=0x00048a; 	X(POP(si));	// 72014 pop     si ;~ 2128:048A
cs=0x2128;eip=0x00048b; 	X(POP(di));	// 72015 pop     di ;~ 2128:048B
cs=0x2128;eip=0x00048c; 	T(MOV(sp, bp));	// 72016 mov     sp, bp ;~ 2128:048C
cs=0x2128;eip=0x00048e; 	X(POP(bp));	// 72017 pop     bp ;~ 2128:048E
cs=0x2128;eip=0x00048f; 	R(RETF(0x0A));	// 72018 retf    0Ah ;~ 2128:048F
sub_2fcf2:
	// 72026 
#undef arg_0
#define arg_0 4
	// 72029 arg_0           = byte ptr  4 ;~ 2128:0492
#undef arg_2
#define arg_2 6
	// 72030 arg_2           = word ptr  6 ;~ 2128:0492
cs=0x2128;eip=0x000492; 	X(PUSH(bp));	// 72032 push    bp ;~ 2128:0492
cs=0x2128;eip=0x000493; 	T(MOV(bp, sp));	// 72033 mov     bp, sp ;~ 2128:0493
cs=0x2128;eip=0x000495; 	T(SUB(sp, 2));	// 72034 sub     sp, 2 ;~ 2128:0495
cs=0x2128;eip=0x000498; 	X(PUSH(si));	// 72035 push    si ;~ 2128:0498
cs=0x2128;eip=0x000499; 	T(MOV(ax, 0x18));	// 72036 mov     ax, 18h ;~ 2128:0499
cs=0x2128;eip=0x00049c; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_2))));	// 72037 imul    [bp+arg_2] ;~ 2128:049C
cs=0x2128;eip=0x00049f; 	T(MOV(si, ax));	// 72038 mov     si, ax ;~ 2128:049F
cs=0x2128;eip=0x0004a1; 	T(ADD(si, 0x10F0));	// 72039 add     si, 10F0h ;~ 2128:04A1
cs=0x2128;eip=0x0004a5; 	X(PUSH(*(dw*)(raddr(ds,si+8))));	// 72040 push    word ptr [si+8] ;~ 2128:04A5
cs=0x2128;eip=0x0004a8; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x0A))));	// 72041 mov     ax, [si+0Ah] ;~ 2128:04A8
cs=0x2128;eip=0x0004ab; 	T(INC(ax));	// 72042 inc     ax ;~ 2128:04AB
cs=0x2128;eip=0x0004ac; 	X(PUSH(ax));	// 72043 push    ax ;~ 2128:04AC
cs=0x2128;eip=0x0004ad; 	X(PUSH(*(dw*)(raddr(ds,si+0x0C))));	// 72044 push    word ptr [si+0Ch] ;~ 2128:04AD
cs=0x2128;eip=0x0004b0; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x0E))));	// 72045 mov     ax, [si+0Eh] ;~ 2128:04B0
cs=0x2128;eip=0x0004b3; 	T(DEC(ax));	// 72046 dec     ax ;~ 2128:04B3
cs=0x2128;eip=0x0004b4; 	X(PUSH(ax));	// 72047 push    ax ;~ 2128:04B4
cs=0x2128;eip=0x0004b5; 	T(CMP(*(raddr(ss,bp+arg_0)), 0));	// 72048 cmp     [bp+arg_0], 0 ;~ 2128:04B5
cs=0x2128;eip=0x0004b9; 	R(JZ(loc_2fd20));	// 72049 jz      short loc_2FD20 ;~ 2128:04B9
cs=0x2128;eip=0x0004bb; 	T(MOV(ax, 0x0FF00));	// 72050 mov     ax, 0FF00h ;~ 2128:04BB
cs=0x2128;eip=0x0004be; 	R(JMP(loc_2fd23));	// 72051 jmp     short loc_2FD23 ;~ 2128:04BE
loc_2fd20:
	// 9008 
cs=0x2128;eip=0x0004c0; 	T(MOV(ax, *(dw*)((&unk_48a9c))));	// 72055 mov     ax, word ptr unk_48A9C ;~ 2128:04C0
loc_2fd23:
	// 9009 
cs=0x2128;eip=0x0004c3; 	X(PUSH(ax));	// 72058 push    ax ;~ 2128:04C3
cs=0x2128;eip=0x0004c4; 	R(CALLF(sub_233c4,0));	// 72059 call    sub_233C4 ;~ 2128:04C4
cs=0x2128;eip=0x0004c9; 	T(CMP(*(raddr(ss,bp+arg_0)), 0));	// 72060 cmp     [bp+arg_0], 0 ;~ 2128:04C9
cs=0x2128;eip=0x0004cd; 	R(JZ(loc_2fd34));	// 72061 jz      short loc_2FD34 ;~ 2128:04CD
cs=0x2128;eip=0x0004cf; 	T(MOV(ax, 0x0F));	// 72062 mov     ax, 0Fh ;~ 2128:04CF
cs=0x2128;eip=0x0004d2; 	R(JMP(loc_2fd36));	// 72063 jmp     short loc_2FD36 ;~ 2128:04D2
loc_2fd34:
	// 9010 
cs=0x2128;eip=0x0004d4; 	T(SUB(ax, ax));	// 72067 sub     ax, ax ;~ 2128:04D4
loc_2fd36:
	// 9011 
cs=0x2128;eip=0x0004d6; 	T(OR(ah, 0x0FF));	// 72070 or      ah, 0FFh ;~ 2128:04D6
cs=0x2128;eip=0x0004d9; 	X(MOV(*(dw*)((&unk_47bde)), ax));	// 72071 mov     word ptr unk_47BDE, ax ;~ 2128:04D9
cs=0x2128;eip=0x0004dc; 	X(MOV(unk_56885, 0));	// 72072 mov     byte ptr unk_56885, 0 ;~ 2128:04DC
cs=0x2128;eip=0x0004e1; 	X(PUSH(*(dw*)(raddr(ds,si+0x10))));	// 72073 push    word ptr [si+10h] ;~ 2128:04E1
cs=0x2128;eip=0x0004e4; 	T(MOV(ax, *(dw*)(raddr(ds,si+8))));	// 72074 mov     ax, [si+8] ;~ 2128:04E4
cs=0x2128;eip=0x0004e7; 	T(ADD(ax, 4));	// 72075 add     ax, 4 ;~ 2128:04E7
cs=0x2128;eip=0x0004ea; 	X(PUSH(ax));	// 72076 push    ax ;~ 2128:04EA
cs=0x2128;eip=0x0004eb; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x0A))));	// 72077 mov     ax, [si+0Ah] ;~ 2128:04EB
cs=0x2128;eip=0x0004ee; 	T(INC(ax));	// 72078 inc     ax ;~ 2128:04EE
cs=0x2128;eip=0x0004ef; 	T(INC(ax));	// 72079 inc     ax ;~ 2128:04EF
cs=0x2128;eip=0x0004f0; 	X(PUSH(ax));	// 72080 push    ax ;~ 2128:04F0
cs=0x2128;eip=0x0004f1; 	R(CALLF(sub_2de1a,0));	// 72081 call    sub_2DE1A ;~ 2128:04F1
cs=0x2128;eip=0x0004f6; 	X(POP(si));	// 72082 pop     si ;~ 2128:04F6
cs=0x2128;eip=0x0004f7; 	T(MOV(sp, bp));	// 72083 mov     sp, bp ;~ 2128:04F7
cs=0x2128;eip=0x0004f9; 	X(POP(bp));	// 72084 pop     bp ;~ 2128:04F9
cs=0x2128;eip=0x0004fa; 	R(RETN(4));	// 72085 retn    4 ;~ 2128:04FA
sub_2fd5d:
	// 72093 
#undef var_6
#define var_6 -6
	// 72096 var_6           = word ptr -6 ;~ 2128:04FD
#undef arg_0
#define arg_0 4
	// 72097 arg_0           = word ptr  4 ;~ 2128:04FD
cs=0x2128;eip=0x0004fd; 	X(PUSH(bp));	// 72099 push    bp ;~ 2128:04FD
cs=0x2128;eip=0x0004fe; 	T(MOV(bp, sp));	// 72100 mov     bp, sp ;~ 2128:04FE
cs=0x2128;eip=0x000500; 	T(SUB(sp, 6));	// 72101 sub     sp, 6 ;~ 2128:0500
cs=0x2128;eip=0x000503; 	X(PUSH(di));	// 72102 push    di ;~ 2128:0503
cs=0x2128;eip=0x000504; 	X(PUSH(si));	// 72103 push    si ;~ 2128:0504
cs=0x2128;eip=0x000505; 	T(MOV(ax, 0x18));	// 72104 mov     ax, 18h ;~ 2128:0505
cs=0x2128;eip=0x000508; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 72105 imul    [bp+arg_0] ;~ 2128:0508
cs=0x2128;eip=0x00050b; 	T(MOV(di, ax));	// 72106 mov     di, ax ;~ 2128:050B
cs=0x2128;eip=0x00050d; 	T(ADD(di, 0x10F0));	// 72107 add     di, 10F0h ;~ 2128:050D
cs=0x2128;eip=0x000511; 	X(PUSH(si));	// 72108 push    si ;~ 2128:0511
cs=0x2128;eip=0x000512; 	X(PUSH(di));	// 72109 push    di ;~ 2128:0512
cs=0x2128;eip=0x000513; 	T(MOV(si, di));	// 72110 mov     si, di ;~ 2128:0513
cs=0x2128;eip=0x000515; 	T(MOV(di, 0x0C798));	// 72111 mov     di, 0C798h ;~ 2128:0515
cs=0x2128;eip=0x000518; 	X(PUSH(ds));	// 72112 push    ds ;~ 2128:0518
cs=0x2128;eip=0x000519; 	X(POP(es));	// 72113 pop     es ;~ 2128:0519
cs=0x2128;eip=0x00051a; 	X(MOVSW);	// 72114 movsw ;~ 2128:051A
cs=0x2128;eip=0x00051b; 	X(MOVSW);	// 72115 movsw ;~ 2128:051B
cs=0x2128;eip=0x00051c; 	X(MOVSW);	// 72116 movsw ;~ 2128:051C
cs=0x2128;eip=0x00051d; 	X(MOVSW);	// 72117 movsw ;~ 2128:051D
cs=0x2128;eip=0x00051e; 	X(POP(di));	// 72118 pop     di ;~ 2128:051E
cs=0x2128;eip=0x00051f; 	X(POP(si));	// 72119 pop     si ;~ 2128:051F
cs=0x2128;eip=0x000520; 	X(MOV(*(dw*)((&unk_5414a)), 0x0A));	// 72120 mov     word ptr unk_5414A, 0Ah ;~ 2128:0520
cs=0x2128;eip=0x000526; 	X(ADD(*(dw*)((&unk_5414c)), 4));	// 72121 add     word ptr unk_5414C, 4 ;~ 2128:0526
cs=0x2128;eip=0x00052b; 	X(ADD(*(dw*)((&unk_5414e)), 5));	// 72122 add     word ptr unk_5414E, 5 ;~ 2128:052B
cs=0x2128;eip=0x000530; 	T(MOV(ax, 0x0C798));	// 72123 mov     ax, 0C798h ;~ 2128:0530
cs=0x2128;eip=0x000533; 	X(PUSH(ax));	// 72124 push    ax ;~ 2128:0533
cs=0x2128;eip=0x000534; 	R(CALLF(sub_23644,0));	// 72125 call    sub_23644 ;~ 2128:0534
cs=0x2128;eip=0x000539; 	X(PUSH(*(dw*)(raddr(ds,di))));	// 72126 push    word ptr [di] ;~ 2128:0539
cs=0x2128;eip=0x00053b; 	X(PUSH(*(dw*)(raddr(ds,di+2))));	// 72127 push    word ptr [di+2] ;~ 2128:053B
cs=0x2128;eip=0x00053e; 	X(PUSH(*(dw*)(raddr(ds,di+4))));	// 72128 push    word ptr [di+4] ;~ 2128:053E
cs=0x2128;eip=0x000541; 	X(PUSH(*(dw*)(raddr(ds,di+6))));	// 72129 push    word ptr [di+6] ;~ 2128:0541
cs=0x2128;eip=0x000544; 	T(MOV(ax, 1));	// 72130 mov     ax, 1 ;~ 2128:0544
cs=0x2128;eip=0x000547; 	X(PUSH(ax));	// 72131 push    ax ;~ 2128:0547
cs=0x2128;eip=0x000548; 	X(PUSH(cs));	// 72132 push    cs ;~ 2128:0548
cs=0x2128;eip=0x000549; 	R(CALL(sub_2fbda,0));	// 72133 call    near ptr sub_2FBDA ;~ 2128:0549
cs=0x2128;eip=0x00054c; 	T(SUB(si, si));	// 72134 sub     si, si ;~ 2128:054C
cs=0x2128;eip=0x00054e; 	T(MOV(al, *(raddr(ds,di+0x16))));	// 72135 mov     al, [di+16h] ;~ 2128:054E
cs=0x2128;eip=0x000551; 	T(SUB(ah, ah));	// 72136 sub     ah, ah ;~ 2128:0551
cs=0x2128;eip=0x000553; 	T(OR(ax, ax));	// 72137 or      ax, ax ;~ 2128:0553
cs=0x2128;eip=0x000555; 	R(JZ(loc_2fdcc));	// 72138 jz      short loc_2FDCC ;~ 2128:0555
cs=0x2128;eip=0x000557; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 72139 mov     [bp+var_6], ax ;~ 2128:0557
loc_2fdba:
	// 9012 
cs=0x2128;eip=0x00055a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 72142 push    [bp+arg_0] ;~ 2128:055A
cs=0x2128;eip=0x00055d; 	X(PUSH(si));	// 72143 push    si ;~ 2128:055D
cs=0x2128;eip=0x00055e; 	T(SUB(ax, ax));	// 72144 sub     ax, ax ;~ 2128:055E
cs=0x2128;eip=0x000560; 	X(PUSH(ax));	// 72145 push    ax ;~ 2128:0560
cs=0x2128;eip=0x000561; 	R(CALL(sub_2fe93,0));	// 72146 call    sub_2FE93 ;~ 2128:0561
cs=0x2128;eip=0x000564; 	T(INC(si));	// 72147 inc     si ;~ 2128:0564
cs=0x2128;eip=0x000565; 	T(MOV(ax, si));	// 72148 mov     ax, si ;~ 2128:0565
cs=0x2128;eip=0x000567; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), ax));	// 72149 cmp     [bp+var_6], ax ;~ 2128:0567
cs=0x2128;eip=0x00056a; 	R(JA(loc_2fdba));	// 72150 ja      short loc_2FDBA ;~ 2128:056A
loc_2fdcc:
	// 9013 
cs=0x2128;eip=0x00056c; 	X(POP(si));	// 72153 pop     si ;~ 2128:056C
cs=0x2128;eip=0x00056d; 	X(POP(di));	// 72154 pop     di ;~ 2128:056D
cs=0x2128;eip=0x00056e; 	T(MOV(sp, bp));	// 72155 mov     sp, bp ;~ 2128:056E
cs=0x2128;eip=0x000570; 	X(POP(bp));	// 72156 pop     bp ;~ 2128:0570
cs=0x2128;eip=0x000571; 	R(RETN(2));	// 72157 retn    2 ;~ 2128:0571
sub_2fdd4:
	// 72165 
#undef var_6
#define var_6 -6
	// 72168 var_6           = word ptr -6 ;~ 2128:0574
#undef var_4
#define var_4 -4
	// 72169 var_4           = dword ptr -4 ;~ 2128:0574
#undef arg_0
#define arg_0 4
	// 72170 arg_0           = word ptr  4 ;~ 2128:0574
#undef arg_2
#define arg_2 6
	// 72171 arg_2           = word ptr  6 ;~ 2128:0574
cs=0x2128;eip=0x000574; 	X(PUSH(bp));	// 72173 push    bp ;~ 2128:0574
cs=0x2128;eip=0x000575; 	T(MOV(bp, sp));	// 72174 mov     bp, sp ;~ 2128:0575
cs=0x2128;eip=0x000577; 	T(SUB(sp, 6));	// 72175 sub     sp, 6 ;~ 2128:0577
cs=0x2128;eip=0x00057a; 	X(PUSH(di));	// 72176 push    di ;~ 2128:057A
cs=0x2128;eip=0x00057b; 	X(PUSH(si));	// 72177 push    si ;~ 2128:057B
cs=0x2128;eip=0x00057c; 	T(MOV(ax, 0x18));	// 72178 mov     ax, 18h ;~ 2128:057C
cs=0x2128;eip=0x00057f; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_2))));	// 72179 imul    [bp+arg_2] ;~ 2128:057F
cs=0x2128;eip=0x000582; 	T(MOV(bx, ax));	// 72180 mov     bx, ax ;~ 2128:0582
cs=0x2128;eip=0x000584; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1102))));	// 72181 mov     ax, [bx+1102h] ;~ 2128:0584
cs=0x2128;eip=0x000588; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x1104))));	// 72182 mov     dx, [bx+1104h] ;~ 2128:0588
cs=0x2128;eip=0x00058c; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 72183 mov     word ptr [bp+var_4], ax ;~ 2128:058C
cs=0x2128;eip=0x00058f; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 72184 mov     word ptr [bp+var_4+2], dx ;~ 2128:058F
cs=0x2128;eip=0x000592; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_6))));	// 72185 mov     di, [bp+var_6] ;~ 2128:0592
cs=0x2128;eip=0x000595; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_0))));	// 72186 mov     cx, [bp+arg_0] ;~ 2128:0595
cs=0x2128;eip=0x000598; 	R(JMP(loc_2fe0a));	// 72187 jmp     short loc_2FE0A ;~ 2128:0598
loc_2fdfa:
	// 9014 
cs=0x2128;eip=0x00059a; 	T(INC(si));	// 72192 inc     si ;~ 2128:059A
cs=0x2128;eip=0x00059b; 	T(CMP(*(raddr(ds,si-1)), 0));	// 72193 cmp     byte ptr [si-1], 0 ;~ 2128:059B
cs=0x2128;eip=0x00059f; 	R(JNZ(loc_2fdfa));	// 72194 jnz     short loc_2FDFA ;~ 2128:059F
cs=0x2128;eip=0x0005a1; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), si));	// 72195 mov     word ptr [bp+var_4], si ;~ 2128:05A1
cs=0x2128;eip=0x0005a4; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), ds));	// 72196 mov     word ptr [bp+var_4+2], ds ;~ 2128:05A4
cs=0x2128;eip=0x0005a7; 	T(MOV(ds, *(dw*)(raddr(ss,bp+var_6))));	// 72197 mov     ds, [bp+var_6] ;~ 2128:05A7
loc_2fe0a:
	// 9015 
cs=0x2128;eip=0x0005aa; 	T(MOV(ax, cx));	// 72200 mov     ax, cx ;~ 2128:05AA
cs=0x2128;eip=0x0005ac; 	T(DEC(cx));	// 72201 dec     cx ;~ 2128:05AC
cs=0x2128;eip=0x0005ad; 	T(OR(ax, ax));	// 72202 or      ax, ax ;~ 2128:05AD
cs=0x2128;eip=0x0005af; 	R(JLE(loc_2fe19));	// 72203 jle     short loc_2FE19 ;~ 2128:05AF
cs=0x2128;eip=0x0005b1; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ds));	// 72204 mov     [bp+var_6], ds ;~ 2128:05B1
cs=0x2128;eip=0x0005b4; 	T(LDS(si, *(dd*)(raddr(ss,bp+var_4))));	// 72205 lds     si, [bp+var_4] ;~ 2128:05B4
cs=0x2128;eip=0x0005b7; 	R(JMP(loc_2fdfa));	// 72206 jmp     short loc_2FDFA ;~ 2128:05B7
loc_2fe19:
	// 9016 
cs=0x2128;eip=0x0005b9; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), cx));	// 72210 mov     [bp+arg_0], cx ;~ 2128:05B9
cs=0x2128;eip=0x0005bc; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 72211 mov     ax, word ptr [bp+var_4] ;~ 2128:05BC
cs=0x2128;eip=0x0005bf; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 72212 mov     dx, word ptr [bp+var_4+2] ;~ 2128:05BF
cs=0x2128;eip=0x0005c2; 	X(POP(si));	// 72213 pop     si ;~ 2128:05C2
cs=0x2128;eip=0x0005c3; 	X(POP(di));	// 72214 pop     di ;~ 2128:05C3
cs=0x2128;eip=0x0005c4; 	T(MOV(sp, bp));	// 72215 mov     sp, bp ;~ 2128:05C4
cs=0x2128;eip=0x0005c6; 	X(POP(bp));	// 72216 pop     bp ;~ 2128:05C6
cs=0x2128;eip=0x0005c7; 	R(RETN(4));	// 72217 retn    4 ;~ 2128:05C7
sub_2fe2a:
	// 72225 
#undef var_4
#define var_4 -4
	// 72227 var_4           = dword ptr -4 ;~ 2128:05CA
#undef arg_0
#define arg_0 4
	// 72228 arg_0           = word ptr  4 ;~ 2128:05CA
#undef arg_2
#define arg_2 6
	// 72229 arg_2           = word ptr  6 ;~ 2128:05CA
#undef arg_4
#define arg_4 8
	// 72230 arg_4           = word ptr  8 ;~ 2128:05CA
cs=0x2128;eip=0x0005ca; 	X(PUSH(bp));	// 72232 push    bp ;~ 2128:05CA
cs=0x2128;eip=0x0005cb; 	T(MOV(bp, sp));	// 72233 mov     bp, sp ;~ 2128:05CB
cs=0x2128;eip=0x0005cd; 	T(SUB(sp, 4));	// 72234 sub     sp, 4 ;~ 2128:05CD
cs=0x2128;eip=0x0005d0; 	X(PUSH(di));	// 72235 push    di ;~ 2128:05D0
cs=0x2128;eip=0x0005d1; 	X(PUSH(si));	// 72236 push    si ;~ 2128:05D1
cs=0x2128;eip=0x0005d2; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 72237 mov     si, [bp+arg_0] ;~ 2128:05D2
cs=0x2128;eip=0x0005d5; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 72238 push    [bp+arg_4] ;~ 2128:05D5
cs=0x2128;eip=0x0005d8; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 72239 push    [bp+arg_2] ;~ 2128:05D8
cs=0x2128;eip=0x0005db; 	R(CALL(sub_2fdd4,0));	// 72240 call    sub_2FDD4 ;~ 2128:05DB
cs=0x2128;eip=0x0005de; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 72241 mov     word ptr [bp+var_4], ax ;~ 2128:05DE
cs=0x2128;eip=0x0005e1; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 72242 mov     word ptr [bp+var_4+2], dx ;~ 2128:05E1
loc_2fe44:
	// 9017 
cs=0x2128;eip=0x0005e4; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 72245 les     bx, [bp+var_4] ;~ 2128:05E4
cs=0x2128;eip=0x0005e7; 	T(CMP(*(raddr(es,bx)), 0x23));	// 72247 cmp     byte ptr es:[bx], 23h ; '#' ;~ 2128:05E7
cs=0x2128;eip=0x0005eb; 	R(JNZ(loc_2fe60));	// 72248 jnz     short loc_2FE60 ;~ 2128:05EB
cs=0x2128;eip=0x0005ed; 	T(MOV(cx, 4));	// 72249 mov     cx, 4 ;~ 2128:05ED
cs=0x2128;eip=0x0005f0; 	T(MOV(di, si));	// 72250 mov     di, si ;~ 2128:05F0
cs=0x2128;eip=0x0005f2; 	T(MOV(ax, ds));	// 72251 mov     ax, ds ;~ 2128:05F2
cs=0x2128;eip=0x0005f4; 	T(MOV(es, ax));	// 72252 mov     es, ax ;~ 2128:05F4
cs=0x2128;eip=0x0005f6; 	T(MOV(ax, 0x20));	// 72254 mov     ax, 20h ; ' ' ;~ 2128:05F6
	// 72255 repne stosb ;~ 2128:05F9
cs=0x2128;eip=0x0005f9; 	R(REPNE STOSB);	// 72255 repne stosb ;~ 2128:05F9
cs=0x2128;eip=0x0005fb; 	T(ADD(si, 4));	// 72256 add     si, 4 ;~ 2128:05FB
cs=0x2128;eip=0x0005fe; 	R(JMP(loc_2fe69));	// 72257 jmp     short loc_2FE69 ;~ 2128:05FE
loc_2fe60:
	// 9018 
cs=0x2128;eip=0x000600; 	T(MOV(es, *(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 72261 mov     es, word ptr [bp+var_4+2] ;~ 2128:0600
cs=0x2128;eip=0x000603; 	T(MOV(al, *(raddr(es,bx))));	// 72263 mov     al, es:[bx] ;~ 2128:0603
cs=0x2128;eip=0x000606; 	X(MOV(*(raddr(ds,si)), al));	// 72264 mov     [si], al ;~ 2128:0606
cs=0x2128;eip=0x000608; 	T(INC(si));	// 72265 inc     si ;~ 2128:0608
loc_2fe69:
	// 9019 
cs=0x2128;eip=0x000609; 	T(MOV(es, *(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 72268 mov     es, word ptr [bp+var_4+2] ;~ 2128:0609
cs=0x2128;eip=0x00060c; 	T(CMP(*(raddr(es,bx)), 0));	// 72269 cmp     byte ptr es:[bx], 0 ;~ 2128:060C
cs=0x2128;eip=0x000610; 	R(JNZ(loc_2fe86));	// 72270 jnz     short loc_2FE86 ;~ 2128:0610
cs=0x2128;eip=0x000612; 	T(CMP(*(raddr(es,bx-1)), 0x2A));	// 72271 cmp     byte ptr es:[bx-1], 2Ah ; '*' ;~ 2128:0612
cs=0x2128;eip=0x000617; 	R(JNZ(loc_2fe82));	// 72272 jnz     short loc_2FE82 ;~ 2128:0617
cs=0x2128;eip=0x000619; 	X(MOV(*(raddr(ds,si-2)), 0));	// 72273 mov     byte ptr [si-2], 0 ;~ 2128:0619
cs=0x2128;eip=0x00061d; 	T(MOV(ax, 1));	// 72274 mov     ax, 1 ;~ 2128:061D
cs=0x2128;eip=0x000620; 	R(JMP(loc_2fe8b));	// 72275 jmp     short loc_2FE8B ;~ 2128:0620
loc_2fe82:
	// 9020 
cs=0x2128;eip=0x000622; 	T(SUB(ax, ax));	// 72279 sub     ax, ax ;~ 2128:0622
cs=0x2128;eip=0x000624; 	R(JMP(loc_2fe8b));	// 72280 jmp     short loc_2FE8B ;~ 2128:0624
loc_2fe86:
	// 9021 
cs=0x2128;eip=0x000626; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 72284 inc     word ptr [bp+var_4] ;~ 2128:0626
cs=0x2128;eip=0x000629; 	R(JMP(loc_2fe44));	// 72285 jmp     short loc_2FE44 ;~ 2128:0629
loc_2fe8b:
	// 9022 
cs=0x2128;eip=0x00062b; 	X(POP(si));	// 72290 pop     si ;~ 2128:062B
cs=0x2128;eip=0x00062c; 	X(POP(di));	// 72291 pop     di ;~ 2128:062C
cs=0x2128;eip=0x00062d; 	T(MOV(sp, bp));	// 72292 mov     sp, bp ;~ 2128:062D
cs=0x2128;eip=0x00062f; 	X(POP(bp));	// 72293 pop     bp ;~ 2128:062F
cs=0x2128;eip=0x000630; 	R(RETN(6));	// 72294 retn    6 ;~ 2128:0630
sub_2fe93:
	// 72302 
#undef var_5a
#define var_5a -0x5A
	// 72305 var_5A          = word ptr -5Ah ;~ 2128:0633
#undef var_58
#define var_58 -0x58
	// 72306 var_58          = word ptr -58h ;~ 2128:0633
#undef var_56
#define var_56 -0x56
	// 72307 var_56          = byte ptr -56h ;~ 2128:0633
#undef var_6
#define var_6 -6
	// 72308 var_6           = word ptr -6 ;~ 2128:0633
#undef var_4
#define var_4 -4
	// 72309 var_4           = byte ptr -4 ;~ 2128:0633
#undef var_2
#define var_2 -2
	// 72310 var_2           = word ptr -2 ;~ 2128:0633
#undef arg_0
#define arg_0 4
	// 72311 arg_0           = byte ptr  4 ;~ 2128:0633
#undef arg_2
#define arg_2 6
	// 72312 arg_2           = word ptr  6 ;~ 2128:0633
#undef arg_4
#define arg_4 8
	// 72313 arg_4           = word ptr  8 ;~ 2128:0633
cs=0x2128;eip=0x000633; 	X(PUSH(bp));	// 72315 push    bp ;~ 2128:0633
cs=0x2128;eip=0x000634; 	T(MOV(bp, sp));	// 72316 mov     bp, sp ;~ 2128:0634
cs=0x2128;eip=0x000636; 	T(SUB(sp, 0x5A));	// 72317 sub     sp, 5Ah ;~ 2128:0636
cs=0x2128;eip=0x000639; 	X(PUSH(si));	// 72318 push    si ;~ 2128:0639
cs=0x2128;eip=0x00063a; 	T(MOV(ax, 0x18));	// 72319 mov     ax, 18h ;~ 2128:063A
cs=0x2128;eip=0x00063d; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_4))));	// 72320 imul    [bp+arg_4] ;~ 2128:063D
cs=0x2128;eip=0x000640; 	T(ADD(ax, 0x10F0));	// 72321 add     ax, 10F0h ;~ 2128:0640
cs=0x2128;eip=0x000643; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 72322 mov     [bp+var_2], ax ;~ 2128:0643
cs=0x2128;eip=0x000646; 	T(MOV(bx, ax));	// 72323 mov     bx, ax ;~ 2128:0646
cs=0x2128;eip=0x000648; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 72324 mov     ax, [bx] ;~ 2128:0648
cs=0x2128;eip=0x00064a; 	X(MOV(*(dw*)(raddr(ss,bp+var_58)), ax));	// 72325 mov     [bp+var_58], ax ;~ 2128:064A
cs=0x2128;eip=0x00064d; 	T(MOV(ax, 9));	// 72326 mov     ax, 9 ;~ 2128:064D
cs=0x2128;eip=0x000650; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_2))));	// 72327 imul    [bp+arg_2] ;~ 2128:0650
cs=0x2128;eip=0x000653; 	T(ADD(ax, 0x0A));	// 72328 add     ax, 0Ah ;~ 2128:0653
cs=0x2128;eip=0x000656; 	X(MOV(*(dw*)(raddr(ss,bp+var_5a)), ax));	// 72329 mov     [bp+var_5A], ax ;~ 2128:0656
cs=0x2128;eip=0x000659; 	T(MOV(al, *(raddr(ds,bx+0x17))));	// 72330 mov     al, [bx+17h] ;~ 2128:0659
cs=0x2128;eip=0x00065c; 	T(SUB(ah, ah));	// 72331 sub     ah, ah ;~ 2128:065C
cs=0x2128;eip=0x00065e; 	T(MOV(si, ax));	// 72332 mov     si, ax ;~ 2128:065E
cs=0x2128;eip=0x000660; 	T(MOV(cl, 2));	// 72333 mov     cl, 2 ;~ 2128:0660
cs=0x2128;eip=0x000662; 	T(SHL(si, cl));	// 72334 shl     si, cl ;~ 2128:0662
cs=0x2128;eip=0x000664; 	T(ax = si+0x18);	// 72335 lea     ax, [si+18h] ;~ 2128:0664
cs=0x2128;eip=0x000667; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 72336 mov     [bp+var_6], ax ;~ 2128:0667
cs=0x2128;eip=0x00066a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_58))));	// 72337 mov     ax, [bp+var_58] ;~ 2128:066A
cs=0x2128;eip=0x00066d; 	T(ADD(ax, 8));	// 72338 add     ax, 8 ;~ 2128:066D
cs=0x2128;eip=0x000670; 	X(PUSH(ax));	// 72339 push    ax ;~ 2128:0670
cs=0x2128;eip=0x000671; 	X(PUSH(*(dw*)(raddr(ss,bp+var_5a))));	// 72340 push    [bp+var_5A] ;~ 2128:0671
cs=0x2128;eip=0x000674; 	T(ax = si+8);	// 72341 lea     ax, [si+8] ;~ 2128:0674
cs=0x2128;eip=0x000677; 	X(PUSH(ax));	// 72342 push    ax ;~ 2128:0677
cs=0x2128;eip=0x000678; 	T(MOV(ax, 9));	// 72343 mov     ax, 9 ;~ 2128:0678
cs=0x2128;eip=0x00067b; 	X(PUSH(ax));	// 72344 push    ax ;~ 2128:067B
cs=0x2128;eip=0x00067c; 	T(CMP(*(raddr(ss,bp+arg_0)), 0));	// 72345 cmp     [bp+arg_0], 0 ;~ 2128:067C
cs=0x2128;eip=0x000680; 	R(JZ(loc_2fee7));	// 72346 jz      short loc_2FEE7 ;~ 2128:0680
cs=0x2128;eip=0x000682; 	T(MOV(ax, 0x0FF00));	// 72347 mov     ax, 0FF00h ;~ 2128:0682
cs=0x2128;eip=0x000685; 	R(JMP(loc_2feea));	// 72348 jmp     short loc_2FEEA ;~ 2128:0685
loc_2fee7:
	// 9023 
cs=0x2128;eip=0x000687; 	T(MOV(ax, *(dw*)((&unk_48a9c))));	// 72352 mov     ax, word ptr unk_48A9C ;~ 2128:0687
loc_2feea:
	// 9024 
cs=0x2128;eip=0x00068a; 	X(PUSH(ax));	// 72355 push    ax ;~ 2128:068A
cs=0x2128;eip=0x00068b; 	R(CALLF(sub_233c4,0));	// 72356 call    sub_233C4 ;~ 2128:068B
cs=0x2128;eip=0x000690; 	T(CMP(*(raddr(ss,bp+arg_0)), 0));	// 72357 cmp     [bp+arg_0], 0 ;~ 2128:0690
cs=0x2128;eip=0x000694; 	R(JZ(loc_2fefb));	// 72358 jz      short loc_2FEFB ;~ 2128:0694
cs=0x2128;eip=0x000696; 	T(MOV(ax, 0x0F));	// 72359 mov     ax, 0Fh ;~ 2128:0696
cs=0x2128;eip=0x000699; 	R(JMP(loc_2fefd));	// 72360 jmp     short loc_2FEFD ;~ 2128:0699
loc_2fefb:
	// 9025 
cs=0x2128;eip=0x00069b; 	T(SUB(ax, ax));	// 72364 sub     ax, ax ;~ 2128:069B
loc_2fefd:
	// 9026 
cs=0x2128;eip=0x00069d; 	T(OR(ah, 0x0FF));	// 72367 or      ah, 0FFh ;~ 2128:069D
cs=0x2128;eip=0x0006a0; 	X(MOV(*(dw*)((&unk_47bde)), ax));	// 72368 mov     word ptr unk_47BDE, ax ;~ 2128:06A0
cs=0x2128;eip=0x0006a3; 	X(MOV(unk_56885, 0));	// 72369 mov     byte ptr unk_56885, 0 ;~ 2128:06A3
cs=0x2128;eip=0x0006a8; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 72370 push    [bp+arg_4] ;~ 2128:06A8
cs=0x2128;eip=0x0006ab; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 72371 push    [bp+arg_2] ;~ 2128:06AB
cs=0x2128;eip=0x0006ae; 	T(ax = bp+var_56);	// 72372 lea     ax, [bp+var_56] ;~ 2128:06AE
cs=0x2128;eip=0x0006b1; 	X(PUSH(ax));	// 72373 push    ax ;~ 2128:06B1
cs=0x2128;eip=0x0006b2; 	R(CALL(sub_2fe2a,0));	// 72374 call    sub_2FE2A ;~ 2128:06B2
cs=0x2128;eip=0x0006b5; 	X(MOV(*(raddr(ss,bp+var_4)), al));	// 72375 mov     [bp+var_4], al ;~ 2128:06B5
cs=0x2128;eip=0x0006b8; 	T(ax = bp+var_56);	// 72376 lea     ax, [bp+var_56] ;~ 2128:06B8
cs=0x2128;eip=0x0006bb; 	X(PUSH(ax));	// 72377 push    ax ;~ 2128:06BB
cs=0x2128;eip=0x0006bc; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_58))));	// 72378 mov     ax, [bp+var_58] ;~ 2128:06BC
cs=0x2128;eip=0x0006bf; 	T(ADD(ax, 0x0C));	// 72379 add     ax, 0Ch ;~ 2128:06BF
cs=0x2128;eip=0x0006c2; 	X(PUSH(ax));	// 72380 push    ax ;~ 2128:06C2
cs=0x2128;eip=0x0006c3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_5a))));	// 72381 mov     ax, [bp+var_5A] ;~ 2128:06C3
cs=0x2128;eip=0x0006c6; 	T(INC(ax));	// 72382 inc     ax ;~ 2128:06C6
cs=0x2128;eip=0x0006c7; 	T(INC(ax));	// 72383 inc     ax ;~ 2128:06C7
cs=0x2128;eip=0x0006c8; 	X(PUSH(ax));	// 72384 push    ax ;~ 2128:06C8
cs=0x2128;eip=0x0006c9; 	R(CALLF(sub_2de1a,0));	// 72385 call    sub_2DE1A ;~ 2128:06C9
cs=0x2128;eip=0x0006ce; 	T(CMP(*(raddr(ss,bp+var_4)), 0));	// 72386 cmp     [bp+var_4], 0 ;~ 2128:06CE
cs=0x2128;eip=0x0006d2; 	R(JZ(loc_2ff52));	// 72387 jz      short loc_2FF52 ;~ 2128:06D2
cs=0x2128;eip=0x0006d4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_58))));	// 72388 mov     ax, [bp+var_58] ;~ 2128:06D4
cs=0x2128;eip=0x0006d7; 	T(INC(ax));	// 72389 inc     ax ;~ 2128:06D7
cs=0x2128;eip=0x0006d8; 	X(PUSH(ax));	// 72390 push    ax ;~ 2128:06D8
cs=0x2128;eip=0x0006d9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_58))));	// 72391 mov     ax, [bp+var_58] ;~ 2128:06D9
cs=0x2128;eip=0x0006dc; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_6))));	// 72392 add     ax, [bp+var_6] ;~ 2128:06DC
cs=0x2128;eip=0x0006df; 	T(DEC(ax));	// 72393 dec     ax ;~ 2128:06DF
cs=0x2128;eip=0x0006e0; 	T(DEC(ax));	// 72394 dec     ax ;~ 2128:06E0
cs=0x2128;eip=0x0006e1; 	X(PUSH(ax));	// 72395 push    ax ;~ 2128:06E1
cs=0x2128;eip=0x0006e2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_5a))));	// 72396 mov     ax, [bp+var_5A] ;~ 2128:06E2
cs=0x2128;eip=0x0006e5; 	T(ADD(ax, 8));	// 72397 add     ax, 8 ;~ 2128:06E5
cs=0x2128;eip=0x0006e8; 	X(PUSH(ax));	// 72398 push    ax ;~ 2128:06E8
cs=0x2128;eip=0x0006e9; 	T(MOV(ax, 0x0FF00));	// 72399 mov     ax, 0FF00h ;~ 2128:06E9
cs=0x2128;eip=0x0006ec; 	X(PUSH(ax));	// 72400 push    ax ;~ 2128:06EC
cs=0x2128;eip=0x0006ed; 	R(CALLF(sub_203c2,0));	// 72401 call    sub_203C2 ;~ 2128:06ED
loc_2ff52:
	// 9027 
cs=0x2128;eip=0x0006f2; 	X(POP(si));	// 72404 pop     si ;~ 2128:06F2
cs=0x2128;eip=0x0006f3; 	T(MOV(sp, bp));	// 72405 mov     sp, bp ;~ 2128:06F3
cs=0x2128;eip=0x0006f5; 	X(POP(bp));	// 72406 pop     bp ;~ 2128:06F5
cs=0x2128;eip=0x0006f6; 	R(RETN(6));	// 72407 retn    6 ;~ 2128:06F6
sub_2ff59:
	// 72415 
#undef var_2
#define var_2 -2
	// 72418 var_2           = word ptr -2 ;~ 2128:06F9
#undef arg_0
#define arg_0 4
	// 72419 arg_0           = byte ptr  4 ;~ 2128:06F9
#undef arg_2
#define arg_2 6
	// 72420 arg_2           = word ptr  6 ;~ 2128:06F9
cs=0x2128;eip=0x0006f9; 	X(PUSH(bp));	// 72422 push    bp ;~ 2128:06F9
cs=0x2128;eip=0x0006fa; 	T(MOV(bp, sp));	// 72423 mov     bp, sp ;~ 2128:06FA
cs=0x2128;eip=0x0006fc; 	T(SUB(sp, 2));	// 72424 sub     sp, 2 ;~ 2128:06FC
cs=0x2128;eip=0x0006ff; 	T(CMP(*(raddr(ss,bp+arg_0)), 0));	// 72425 cmp     [bp+arg_0], 0 ;~ 2128:06FF
cs=0x2128;eip=0x000703; 	R(JZ(loc_2ff69));	// 72426 jz      short loc_2FF69 ;~ 2128:0703
cs=0x2128;eip=0x000705; 	T(MOV(al, 0x1D));	// 72427 mov     al, 1Dh ;~ 2128:0705
cs=0x2128;eip=0x000707; 	R(JMP(loc_2ff6b));	// 72428 jmp     short loc_2FF6B ;~ 2128:0707
loc_2ff69:
	// 9028 
cs=0x2128;eip=0x000709; 	T(MOV(al, 0x20));	// 72432 mov     al, 20h ; ' ' ;~ 2128:0709
loc_2ff6b:
	// 9029 
cs=0x2128;eip=0x00070b; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 72435 mov     dx, [bp+arg_2] ;~ 2128:070B
cs=0x2128;eip=0x00070e; 	T(MOV(cl, 8));	// 72436 mov     cl, 8 ;~ 2128:070E
cs=0x2128;eip=0x000710; 	T(SHR(dx, cl));	// 72437 shr     dx, cl ;~ 2128:0710
cs=0x2128;eip=0x000712; 	X(PUSH(dx));	// 72438 push    dx ;~ 2128:0712
cs=0x2128;eip=0x000713; 	T(MOV(cl, *(db*)(raddr(ss,bp+arg_2))));	// 72439 mov     cl, byte ptr [bp+arg_2] ;~ 2128:0713
cs=0x2128;eip=0x000716; 	T(SUB(ch, ch));	// 72440 sub     ch, ch ;~ 2128:0716
cs=0x2128;eip=0x000718; 	X(PUSH(cx));	// 72441 push    cx ;~ 2128:0718
cs=0x2128;eip=0x000719; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 72442 mov     [bp+var_2], ax ;~ 2128:0719
cs=0x2128;eip=0x00071c; 	R(CALL(sub_2fdd4,0));	// 72443 call    sub_2FDD4 ;~ 2128:071C
cs=0x2128;eip=0x00071f; 	T(MOV(bx, ax));	// 72444 mov     bx, ax ;~ 2128:071F
cs=0x2128;eip=0x000721; 	T(MOV(es, dx));	// 72445 mov     es, dx ;~ 2128:0721
cs=0x2128;eip=0x000723; 	T(MOV(al, *(db*)(raddr(ss,bp+var_2))));	// 72446 mov     al, byte ptr [bp+var_2] ;~ 2128:0723
cs=0x2128;eip=0x000726; 	X(MOV(*(raddr(es,bx)), al));	// 72447 mov     es:[bx], al ;~ 2128:0726
cs=0x2128;eip=0x000729; 	T(MOV(sp, bp));	// 72448 mov     sp, bp ;~ 2128:0729
cs=0x2128;eip=0x00072b; 	X(POP(bp));	// 72449 pop     bp ;~ 2128:072B
cs=0x2128;eip=0x00072c; 	R(RETN(4));	// 72450 retn    4 ;~ 2128:072C
sub_2ff8f:
	// 72457 
cs=0x2128;eip=0x00072f; 	T(MOV(ax, 0x0C7A0));	// 72459 mov     ax, 0C7A0h ;~ 2128:072F
cs=0x2128;eip=0x000732; 	X(PUSH(ax));	// 72460 push    ax ;~ 2128:0732
cs=0x2128;eip=0x000733; 	X(PUSH(*(dw*)((&unk_54148))));	// 72461 push    word ptr unk_54148 ;~ 2128:0733
cs=0x2128;eip=0x000737; 	X(PUSH(*(dw*)((&unk_5414a))));	// 72462 push    word ptr unk_5414A ;~ 2128:0737
cs=0x2128;eip=0x00073b; 	T(MOV(ax, 0x0ED08));	// 72463 mov     ax, 0ED08h ;~ 2128:073B
cs=0x2128;eip=0x00073e; 	X(PUSH(ax));	// 72464 push    ax ;~ 2128:073E
cs=0x2128;eip=0x00073f; 	X(PUSH(*(dw*)((&unk_54148))));	// 72465 push    word ptr unk_54148 ;~ 2128:073F
cs=0x2128;eip=0x000743; 	X(PUSH(*(dw*)((&unk_5414a))));	// 72466 push    word ptr unk_5414A ;~ 2128:0743
cs=0x2128;eip=0x000747; 	X(PUSH(*(dw*)((&unk_5414c))));	// 72467 push    word ptr unk_5414C ;~ 2128:0747
cs=0x2128;eip=0x00074b; 	X(PUSH(*(dw*)((&unk_5414e))));	// 72468 push    word ptr unk_5414E ;~ 2128:074B
cs=0x2128;eip=0x00074f; 	R(CALLF(sub_2c4d3,0));	// 72469 call    sub_2C4D3 ;~ 2128:074F
cs=0x2128;eip=0x000754; 	T(MOV(ax, 1));	// 72470 mov     ax, 1 ;~ 2128:0754
cs=0x2128;eip=0x000757; 	X(PUSH(ax));	// 72471 push    ax ;~ 2128:0757
cs=0x2128;eip=0x000758; 	T(MOV(ax, 0x13F));	// 72472 mov     ax, 13Fh ;~ 2128:0758
cs=0x2128;eip=0x00075b; 	X(PUSH(ax));	// 72473 push    ax ;~ 2128:075B
cs=0x2128;eip=0x00075c; 	T(MOV(ax, 9));	// 72474 mov     ax, 9 ;~ 2128:075C
cs=0x2128;eip=0x00075f; 	X(PUSH(ax));	// 72475 push    ax ;~ 2128:075F
cs=0x2128;eip=0x000760; 	T(MOV(ax, 0x0FF00));	// 72476 mov     ax, 0FF00h ;~ 2128:0760
cs=0x2128;eip=0x000763; 	X(PUSH(ax));	// 72477 push    ax ;~ 2128:0763
cs=0x2128;eip=0x000764; 	R(CALLF(sub_203c2,0));	// 72478 call    sub_203C2 ;~ 2128:0764
cs=0x2128;eip=0x000769; 	R(RETN(0));	// 72479 retn ;~ 2128:0769
sub_2ffca:
	// 72486 
cs=0x2128;eip=0x00076a; 	T(MOV(ax, 0x100));	// 72487 mov     ax, 100h ;~ 2128:076A
cs=0x2128;eip=0x00076d; 	X(PUSH(ax));	// 72488 push    ax ;~ 2128:076D
cs=0x2128;eip=0x00076e; 	T(MOV(al, unk_55212));	// 72489 mov     al, byte ptr unk_55212 ;~ 2128:076E
cs=0x2128;eip=0x000771; 	T(SUB(ah, ah));	// 72490 sub     ah, ah ;~ 2128:0771
cs=0x2128;eip=0x000773; 	T(AND(ax, 1));	// 72491 and     ax, 1 ;~ 2128:0773
cs=0x2128;eip=0x000776; 	X(PUSH(ax));	// 72492 push    ax ;~ 2128:0776
cs=0x2128;eip=0x000777; 	R(CALL(sub_2ff59,0));	// 72493 call    sub_2FF59 ;~ 2128:0777
cs=0x2128;eip=0x00077a; 	T(MOV(ax, 0x101));	// 72494 mov     ax, 101h ;~ 2128:077A
cs=0x2128;eip=0x00077d; 	X(PUSH(ax));	// 72495 push    ax ;~ 2128:077D
cs=0x2128;eip=0x00077e; 	T(MOV(al, unk_55212));	// 72496 mov     al, byte ptr unk_55212 ;~ 2128:077E
cs=0x2128;eip=0x000781; 	T(AND(al, 1));	// 72497 and     al, 1 ;~ 2128:0781
cs=0x2128;eip=0x000783; 	T(CMP(al, 1));	// 72498 cmp     al, 1 ;~ 2128:0783
cs=0x2128;eip=0x000785; 	T(SBB(cx, cx));	// 72499 sbb     cx, cx ;~ 2128:0785
cs=0x2128;eip=0x000787; 	T(NEG(cx));	// 72500 neg     cx ;~ 2128:0787
cs=0x2128;eip=0x000789; 	X(PUSH(cx));	// 72501 push    cx ;~ 2128:0789
cs=0x2128;eip=0x00078a; 	R(CALL(sub_2ff59,0));	// 72502 call    sub_2FF59 ;~ 2128:078A
cs=0x2128;eip=0x00078d; 	T(MOV(ax, 0x102));	// 72503 mov     ax, 102h ;~ 2128:078D
cs=0x2128;eip=0x000790; 	X(PUSH(ax));	// 72504 push    ax ;~ 2128:0790
cs=0x2128;eip=0x000791; 	T(MOV(al, unk_55212));	// 72505 mov     al, byte ptr unk_55212 ;~ 2128:0791
cs=0x2128;eip=0x000794; 	T(SUB(ah, ah));	// 72506 sub     ah, ah ;~ 2128:0794
cs=0x2128;eip=0x000796; 	T(AND(ax, 2));	// 72507 and     ax, 2 ;~ 2128:0796
cs=0x2128;eip=0x000799; 	X(PUSH(ax));	// 72508 push    ax ;~ 2128:0799
cs=0x2128;eip=0x00079a; 	R(CALL(sub_2ff59,0));	// 72509 call    sub_2FF59 ;~ 2128:079A
cs=0x2128;eip=0x00079d; 	T(MOV(ax, 0x103));	// 72510 mov     ax, 103h ;~ 2128:079D
cs=0x2128;eip=0x0007a0; 	X(PUSH(ax));	// 72511 push    ax ;~ 2128:07A0
cs=0x2128;eip=0x0007a1; 	T(MOV(al, unk_55212));	// 72512 mov     al, byte ptr unk_55212 ;~ 2128:07A1
cs=0x2128;eip=0x0007a4; 	T(SUB(ah, ah));	// 72513 sub     ah, ah ;~ 2128:07A4
cs=0x2128;eip=0x0007a6; 	T(AND(ax, 4));	// 72514 and     ax, 4 ;~ 2128:07A6
cs=0x2128;eip=0x0007a9; 	X(PUSH(ax));	// 72515 push    ax ;~ 2128:07A9
cs=0x2128;eip=0x0007aa; 	R(CALL(sub_2ff59,0));	// 72516 call    sub_2FF59 ;~ 2128:07AA
cs=0x2128;eip=0x0007ad; 	T(MOV(ax, 0x200));	// 72517 mov     ax, 200h ;~ 2128:07AD
cs=0x2128;eip=0x0007b0; 	X(PUSH(ax));	// 72518 push    ax ;~ 2128:07B0
cs=0x2128;eip=0x0007b1; 	T(CMP(byte_55204, 2));	// 72519 cmp     byte_55204, 2 ;~ 2128:07B1
cs=0x2128;eip=0x0007b6; 	R(JNZ(loc_3001d));	// 72520 jnz     short loc_3001D ;~ 2128:07B6
cs=0x2128;eip=0x0007b8; 	T(MOV(ax, 1));	// 72521 mov     ax, 1 ;~ 2128:07B8
cs=0x2128;eip=0x0007bb; 	R(JMP(loc_3001f));	// 72522 jmp     short loc_3001F ;~ 2128:07BB
loc_3001d:
	// 9030 
cs=0x2128;eip=0x0007bd; 	T(SUB(ax, ax));	// 72526 sub     ax, ax ;~ 2128:07BD
loc_3001f:
	// 9031 
cs=0x2128;eip=0x0007bf; 	X(PUSH(ax));	// 72529 push    ax ;~ 2128:07BF
cs=0x2128;eip=0x0007c0; 	R(CALL(sub_2ff59,0));	// 72530 call    sub_2FF59 ;~ 2128:07C0
cs=0x2128;eip=0x0007c3; 	T(MOV(ax, 0x201));	// 72531 mov     ax, 201h ;~ 2128:07C3
cs=0x2128;eip=0x0007c6; 	X(PUSH(ax));	// 72532 push    ax ;~ 2128:07C6
cs=0x2128;eip=0x0007c7; 	T(CMP(byte_55204, 1));	// 72533 cmp     byte_55204, 1 ;~ 2128:07C7
cs=0x2128;eip=0x0007cc; 	R(JNZ(loc_30033));	// 72534 jnz     short loc_30033 ;~ 2128:07CC
cs=0x2128;eip=0x0007ce; 	T(MOV(ax, 1));	// 72535 mov     ax, 1 ;~ 2128:07CE
cs=0x2128;eip=0x0007d1; 	R(JMP(loc_30035));	// 72536 jmp     short loc_30035 ;~ 2128:07D1
loc_30033:
	// 9032 
cs=0x2128;eip=0x0007d3; 	T(SUB(ax, ax));	// 72540 sub     ax, ax ;~ 2128:07D3
loc_30035:
	// 9033 
cs=0x2128;eip=0x0007d5; 	X(PUSH(ax));	// 72543 push    ax ;~ 2128:07D5
cs=0x2128;eip=0x0007d6; 	R(CALL(sub_2ff59,0));	// 72544 call    sub_2FF59 ;~ 2128:07D6
cs=0x2128;eip=0x0007d9; 	T(MOV(ax, 0x202));	// 72545 mov     ax, 202h ;~ 2128:07D9
cs=0x2128;eip=0x0007dc; 	X(PUSH(ax));	// 72546 push    ax ;~ 2128:07DC
cs=0x2128;eip=0x0007dd; 	T(CMP(byte_55204, 3));	// 72547 cmp     byte_55204, 3 ;~ 2128:07DD
cs=0x2128;eip=0x0007e2; 	R(JNZ(loc_30049));	// 72548 jnz     short loc_30049 ;~ 2128:07E2
cs=0x2128;eip=0x0007e4; 	T(MOV(ax, 1));	// 72549 mov     ax, 1 ;~ 2128:07E4
cs=0x2128;eip=0x0007e7; 	R(JMP(loc_3004b));	// 72550 jmp     short loc_3004B ;~ 2128:07E7
loc_30049:
	// 9034 
cs=0x2128;eip=0x0007e9; 	T(SUB(ax, ax));	// 72554 sub     ax, ax ;~ 2128:07E9
loc_3004b:
	// 9035 
cs=0x2128;eip=0x0007eb; 	X(PUSH(ax));	// 72557 push    ax ;~ 2128:07EB
cs=0x2128;eip=0x0007ec; 	R(CALL(sub_2ff59,0));	// 72558 call    sub_2FF59 ;~ 2128:07EC
cs=0x2128;eip=0x0007ef; 	T(MOV(ax, 0x203));	// 72559 mov     ax, 203h ;~ 2128:07EF
cs=0x2128;eip=0x0007f2; 	X(PUSH(ax));	// 72560 push    ax ;~ 2128:07F2
cs=0x2128;eip=0x0007f3; 	T(CMP(byte_55204, 4));	// 72561 cmp     byte_55204, 4 ;~ 2128:07F3
cs=0x2128;eip=0x0007f8; 	R(JNZ(loc_3005f));	// 72562 jnz     short loc_3005F ;~ 2128:07F8
cs=0x2128;eip=0x0007fa; 	T(MOV(ax, 1));	// 72563 mov     ax, 1 ;~ 2128:07FA
cs=0x2128;eip=0x0007fd; 	R(JMP(loc_30061));	// 72564 jmp     short loc_30061 ;~ 2128:07FD
loc_3005f:
	// 9036 
cs=0x2128;eip=0x0007ff; 	T(SUB(ax, ax));	// 72568 sub     ax, ax ;~ 2128:07FF
loc_30061:
	// 9037 
cs=0x2128;eip=0x000801; 	X(PUSH(ax));	// 72571 push    ax ;~ 2128:0801
cs=0x2128;eip=0x000802; 	R(CALL(sub_2ff59,0));	// 72572 call    sub_2FF59 ;~ 2128:0802
cs=0x2128;eip=0x000805; 	T(MOV(ax, 0x300));	// 72573 mov     ax, 300h ;~ 2128:0805
cs=0x2128;eip=0x000808; 	X(PUSH(ax));	// 72574 push    ax ;~ 2128:0808
cs=0x2128;eip=0x000809; 	T(CMP(*(dw*)((&unk_564ee)), 1));	// 72575 cmp     word ptr unk_564EE, 1 ;~ 2128:0809
cs=0x2128;eip=0x00080e; 	R(JNZ(loc_30075));	// 72576 jnz     short loc_30075 ;~ 2128:080E
cs=0x2128;eip=0x000810; 	T(MOV(ax, 1));	// 72577 mov     ax, 1 ;~ 2128:0810
cs=0x2128;eip=0x000813; 	R(JMP(loc_30077));	// 72578 jmp     short loc_30077 ;~ 2128:0813
loc_30075:
	// 9038 
cs=0x2128;eip=0x000815; 	T(SUB(ax, ax));	// 72582 sub     ax, ax ;~ 2128:0815
loc_30077:
	// 9039 
cs=0x2128;eip=0x000817; 	X(PUSH(ax));	// 72585 push    ax ;~ 2128:0817
cs=0x2128;eip=0x000818; 	R(CALL(sub_2ff59,0));	// 72586 call    sub_2FF59 ;~ 2128:0818
cs=0x2128;eip=0x00081b; 	T(MOV(ax, 0x301));	// 72587 mov     ax, 301h ;~ 2128:081B
cs=0x2128;eip=0x00081e; 	X(PUSH(ax));	// 72588 push    ax ;~ 2128:081E
cs=0x2128;eip=0x00081f; 	T(CMP(*(dw*)((&unk_564ee)), 0x0A));	// 72589 cmp     word ptr unk_564EE, 0Ah ;~ 2128:081F
cs=0x2128;eip=0x000824; 	R(JNZ(loc_3008b));	// 72590 jnz     short loc_3008B ;~ 2128:0824
cs=0x2128;eip=0x000826; 	T(MOV(ax, 1));	// 72591 mov     ax, 1 ;~ 2128:0826
cs=0x2128;eip=0x000829; 	R(JMP(loc_3008d));	// 72592 jmp     short loc_3008D ;~ 2128:0829
loc_3008b:
	// 9040 
cs=0x2128;eip=0x00082b; 	T(SUB(ax, ax));	// 72596 sub     ax, ax ;~ 2128:082B
loc_3008d:
	// 9041 
cs=0x2128;eip=0x00082d; 	X(PUSH(ax));	// 72599 push    ax ;~ 2128:082D
cs=0x2128;eip=0x00082e; 	R(CALL(sub_2ff59,0));	// 72600 call    sub_2FF59 ;~ 2128:082E
cs=0x2128;eip=0x000831; 	T(MOV(ax, 0x302));	// 72601 mov     ax, 302h ;~ 2128:0831
cs=0x2128;eip=0x000834; 	X(PUSH(ax));	// 72602 push    ax ;~ 2128:0834
cs=0x2128;eip=0x000835; 	T(CMP(*(dw*)((&unk_564ee)), 0x0D));	// 72603 cmp     word ptr unk_564EE, 0Dh ;~ 2128:0835
cs=0x2128;eip=0x00083a; 	R(JNZ(loc_300a1));	// 72604 jnz     short loc_300A1 ;~ 2128:083A
cs=0x2128;eip=0x00083c; 	T(MOV(ax, 1));	// 72605 mov     ax, 1 ;~ 2128:083C
cs=0x2128;eip=0x00083f; 	R(JMP(loc_300a3));	// 72606 jmp     short loc_300A3 ;~ 2128:083F
loc_300a1:
	// 9042 
cs=0x2128;eip=0x000841; 	T(SUB(ax, ax));	// 72610 sub     ax, ax ;~ 2128:0841
loc_300a3:
	// 9043 
cs=0x2128;eip=0x000843; 	X(PUSH(ax));	// 72613 push    ax ;~ 2128:0843
cs=0x2128;eip=0x000844; 	R(CALL(sub_2ff59,0));	// 72614 call    sub_2FF59 ;~ 2128:0844
cs=0x2128;eip=0x000847; 	T(MOV(ax, 0x303));	// 72615 mov     ax, 303h ;~ 2128:0847
cs=0x2128;eip=0x00084a; 	X(PUSH(ax));	// 72616 push    ax ;~ 2128:084A
cs=0x2128;eip=0x00084b; 	T(CMP(*(dw*)((&unk_564ee)), 0x0B));	// 72617 cmp     word ptr unk_564EE, 0Bh ;~ 2128:084B
cs=0x2128;eip=0x000850; 	R(JNZ(loc_300b7));	// 72618 jnz     short loc_300B7 ;~ 2128:0850
cs=0x2128;eip=0x000852; 	T(MOV(ax, 1));	// 72619 mov     ax, 1 ;~ 2128:0852
cs=0x2128;eip=0x000855; 	R(JMP(loc_300b9));	// 72620 jmp     short loc_300B9 ;~ 2128:0855
loc_300b7:
	// 9044 
cs=0x2128;eip=0x000857; 	T(SUB(ax, ax));	// 72624 sub     ax, ax ;~ 2128:0857
loc_300b9:
	// 9045 
cs=0x2128;eip=0x000859; 	X(PUSH(ax));	// 72627 push    ax ;~ 2128:0859
cs=0x2128;eip=0x00085a; 	R(CALL(sub_2ff59,0));	// 72628 call    sub_2FF59 ;~ 2128:085A
cs=0x2128;eip=0x00085d; 	T(MOV(ax, 0x304));	// 72629 mov     ax, 304h ;~ 2128:085D
cs=0x2128;eip=0x000860; 	X(PUSH(ax));	// 72630 push    ax ;~ 2128:0860
cs=0x2128;eip=0x000861; 	T(CMP(*(dw*)((&unk_564ee)), 0x0C));	// 72631 cmp     word ptr unk_564EE, 0Ch ;~ 2128:0861
cs=0x2128;eip=0x000866; 	R(JNZ(loc_300cd));	// 72632 jnz     short loc_300CD ;~ 2128:0866
cs=0x2128;eip=0x000868; 	T(MOV(ax, 1));	// 72633 mov     ax, 1 ;~ 2128:0868
cs=0x2128;eip=0x00086b; 	R(JMP(loc_300cf));	// 72634 jmp     short loc_300CF ;~ 2128:086B
loc_300cd:
	// 9046 
cs=0x2128;eip=0x00086d; 	T(SUB(ax, ax));	// 72638 sub     ax, ax ;~ 2128:086D
loc_300cf:
	// 9047 
cs=0x2128;eip=0x00086f; 	X(PUSH(ax));	// 72641 push    ax ;~ 2128:086F
cs=0x2128;eip=0x000870; 	R(CALL(sub_2ff59,0));	// 72642 call    sub_2FF59 ;~ 2128:0870
cs=0x2128;eip=0x000873; 	T(MOV(ax, 0x305));	// 72643 mov     ax, 305h ;~ 2128:0873
cs=0x2128;eip=0x000876; 	X(PUSH(ax));	// 72644 push    ax ;~ 2128:0876
cs=0x2128;eip=0x000877; 	T(CMP(*(dw*)((&unk_564ee)), 1));	// 72645 cmp     word ptr unk_564EE, 1 ;~ 2128:0877
cs=0x2128;eip=0x00087c; 	T(SBB(ax, ax));	// 72646 sbb     ax, ax ;~ 2128:087C
cs=0x2128;eip=0x00087e; 	T(NEG(ax));	// 72647 neg     ax ;~ 2128:087E
cs=0x2128;eip=0x000880; 	X(PUSH(ax));	// 72648 push    ax ;~ 2128:0880
cs=0x2128;eip=0x000881; 	R(CALL(sub_2ff59,0));	// 72649 call    sub_2FF59 ;~ 2128:0881
cs=0x2128;eip=0x000884; 	T(MOV(ax, 0x306));	// 72650 mov     ax, 306h ;~ 2128:0884
cs=0x2128;eip=0x000887; 	X(PUSH(ax));	// 72651 push    ax ;~ 2128:0887
cs=0x2128;eip=0x000888; 	T(CMP(*(dw*)((&unk_564ee)), 0x0E));	// 72652 cmp     word ptr unk_564EE, 0Eh ;~ 2128:0888
cs=0x2128;eip=0x00088d; 	R(JNZ(loc_300f4));	// 72653 jnz     short loc_300F4 ;~ 2128:088D
cs=0x2128;eip=0x00088f; 	T(MOV(ax, 1));	// 72654 mov     ax, 1 ;~ 2128:088F
cs=0x2128;eip=0x000892; 	R(JMP(loc_300f6));	// 72655 jmp     short loc_300F6 ;~ 2128:0892
loc_300f4:
	// 9048 
cs=0x2128;eip=0x000894; 	T(SUB(ax, ax));	// 72659 sub     ax, ax ;~ 2128:0894
loc_300f6:
	// 9049 
cs=0x2128;eip=0x000896; 	X(PUSH(ax));	// 72662 push    ax ;~ 2128:0896
cs=0x2128;eip=0x000897; 	R(CALL(sub_2ff59,0));	// 72663 call    sub_2FF59 ;~ 2128:0897
cs=0x2128;eip=0x00089a; 	T(MOV(ax, 0x307));	// 72664 mov     ax, 307h ;~ 2128:089A
cs=0x2128;eip=0x00089d; 	X(PUSH(ax));	// 72665 push    ax ;~ 2128:089D
cs=0x2128;eip=0x00089e; 	T(CMP(*(dw*)((&unk_564ee)), 2));	// 72666 cmp     word ptr unk_564EE, 2 ;~ 2128:089E
cs=0x2128;eip=0x0008a3; 	R(JNZ(loc_3010a));	// 72667 jnz     short loc_3010A ;~ 2128:08A3
cs=0x2128;eip=0x0008a5; 	T(MOV(ax, 1));	// 72668 mov     ax, 1 ;~ 2128:08A5
cs=0x2128;eip=0x0008a8; 	R(JMP(loc_3010c));	// 72669 jmp     short loc_3010C ;~ 2128:08A8
loc_3010a:
	// 9050 
cs=0x2128;eip=0x0008aa; 	T(SUB(ax, ax));	// 72673 sub     ax, ax ;~ 2128:08AA
loc_3010c:
	// 9051 
cs=0x2128;eip=0x0008ac; 	X(PUSH(ax));	// 72676 push    ax ;~ 2128:08AC
cs=0x2128;eip=0x0008ad; 	R(CALL(sub_2ff59,0));	// 72677 call    sub_2FF59 ;~ 2128:08AD
cs=0x2128;eip=0x0008b0; 	T(MOV(ax, 0x308));	// 72678 mov     ax, 308h ;~ 2128:08B0
cs=0x2128;eip=0x0008b3; 	X(PUSH(ax));	// 72679 push    ax ;~ 2128:08B3
cs=0x2128;eip=0x0008b4; 	T(CMP(*(dw*)((&unk_564ee)), 5));	// 72680 cmp     word ptr unk_564EE, 5 ;~ 2128:08B4
cs=0x2128;eip=0x0008b9; 	R(JNZ(loc_30120));	// 72681 jnz     short loc_30120 ;~ 2128:08B9
cs=0x2128;eip=0x0008bb; 	T(MOV(ax, 1));	// 72682 mov     ax, 1 ;~ 2128:08BB
cs=0x2128;eip=0x0008be; 	R(JMP(loc_30122));	// 72683 jmp     short loc_30122 ;~ 2128:08BE
loc_30120:
	// 9052 
cs=0x2128;eip=0x0008c0; 	T(SUB(ax, ax));	// 72687 sub     ax, ax ;~ 2128:08C0
loc_30122:
	// 9053 
cs=0x2128;eip=0x0008c2; 	X(PUSH(ax));	// 72690 push    ax ;~ 2128:08C2
cs=0x2128;eip=0x0008c3; 	R(CALL(sub_2ff59,0));	// 72691 call    sub_2FF59 ;~ 2128:08C3
cs=0x2128;eip=0x0008c6; 	T(MOV(ax, 0x309));	// 72692 mov     ax, 309h ;~ 2128:08C6
cs=0x2128;eip=0x0008c9; 	X(PUSH(ax));	// 72693 push    ax ;~ 2128:08C9
cs=0x2128;eip=0x0008ca; 	T(CMP(*(dw*)((&unk_564ee)), 6));	// 72694 cmp     word ptr unk_564EE, 6 ;~ 2128:08CA
cs=0x2128;eip=0x0008cf; 	R(JNZ(loc_30136));	// 72695 jnz     short loc_30136 ;~ 2128:08CF
cs=0x2128;eip=0x0008d1; 	T(MOV(ax, 1));	// 72696 mov     ax, 1 ;~ 2128:08D1
cs=0x2128;eip=0x0008d4; 	R(JMP(loc_30138));	// 72697 jmp     short loc_30138 ;~ 2128:08D4
loc_30136:
	// 9054 
cs=0x2128;eip=0x0008d6; 	T(SUB(ax, ax));	// 72701 sub     ax, ax ;~ 2128:08D6
loc_30138:
	// 9055 
cs=0x2128;eip=0x0008d8; 	X(PUSH(ax));	// 72704 push    ax ;~ 2128:08D8
cs=0x2128;eip=0x0008d9; 	R(CALL(sub_2ff59,0));	// 72705 call    sub_2FF59 ;~ 2128:08D9
cs=0x2128;eip=0x0008dc; 	T(MOV(ax, 0x30A));	// 72706 mov     ax, 30Ah ;~ 2128:08DC
cs=0x2128;eip=0x0008df; 	X(PUSH(ax));	// 72707 push    ax ;~ 2128:08DF
cs=0x2128;eip=0x0008e0; 	T(CMP(*(dw*)((&unk_564ee)), 7));	// 72708 cmp     word ptr unk_564EE, 7 ;~ 2128:08E0
cs=0x2128;eip=0x0008e5; 	R(JNZ(loc_3014c));	// 72709 jnz     short loc_3014C ;~ 2128:08E5
cs=0x2128;eip=0x0008e7; 	T(MOV(ax, 1));	// 72710 mov     ax, 1 ;~ 2128:08E7
cs=0x2128;eip=0x0008ea; 	R(JMP(loc_3014e));	// 72711 jmp     short loc_3014E ;~ 2128:08EA
loc_3014c:
	// 9056 
cs=0x2128;eip=0x0008ec; 	T(SUB(ax, ax));	// 72715 sub     ax, ax ;~ 2128:08EC
loc_3014e:
	// 9057 
cs=0x2128;eip=0x0008ee; 	X(PUSH(ax));	// 72718 push    ax ;~ 2128:08EE
cs=0x2128;eip=0x0008ef; 	R(CALL(sub_2ff59,0));	// 72719 call    sub_2FF59 ;~ 2128:08EF
cs=0x2128;eip=0x0008f2; 	T(MOV(ax, 0x30B));	// 72720 mov     ax, 30Bh ;~ 2128:08F2
cs=0x2128;eip=0x0008f5; 	X(PUSH(ax));	// 72721 push    ax ;~ 2128:08F5
cs=0x2128;eip=0x0008f6; 	T(CMP(*(dw*)((&unk_564ee)), 3));	// 72722 cmp     word ptr unk_564EE, 3 ;~ 2128:08F6
cs=0x2128;eip=0x0008fb; 	R(JNZ(loc_30162));	// 72723 jnz     short loc_30162 ;~ 2128:08FB
cs=0x2128;eip=0x0008fd; 	T(MOV(ax, 1));	// 72724 mov     ax, 1 ;~ 2128:08FD
cs=0x2128;eip=0x000900; 	R(JMP(loc_30164));	// 72725 jmp     short loc_30164 ;~ 2128:0900
loc_30162:
	// 9058 
cs=0x2128;eip=0x000902; 	T(SUB(ax, ax));	// 72729 sub     ax, ax ;~ 2128:0902
loc_30164:
	// 9059 
cs=0x2128;eip=0x000904; 	X(PUSH(ax));	// 72732 push    ax ;~ 2128:0904
cs=0x2128;eip=0x000905; 	R(CALL(sub_2ff59,0));	// 72733 call    sub_2FF59 ;~ 2128:0905
cs=0x2128;eip=0x000908; 	T(MOV(ax, 0x30C));	// 72734 mov     ax, 30Ch ;~ 2128:0908
cs=0x2128;eip=0x00090b; 	X(PUSH(ax));	// 72735 push    ax ;~ 2128:090B
cs=0x2128;eip=0x00090c; 	T(CMP(*(dw*)((&unk_564ee)), 9));	// 72736 cmp     word ptr unk_564EE, 9 ;~ 2128:090C
cs=0x2128;eip=0x000911; 	R(JNZ(loc_30178));	// 72737 jnz     short loc_30178 ;~ 2128:0911
cs=0x2128;eip=0x000913; 	T(MOV(ax, 1));	// 72738 mov     ax, 1 ;~ 2128:0913
cs=0x2128;eip=0x000916; 	R(JMP(loc_3017a));	// 72739 jmp     short loc_3017A ;~ 2128:0916
loc_30178:
	// 9060 
cs=0x2128;eip=0x000918; 	T(SUB(ax, ax));	// 72743 sub     ax, ax ;~ 2128:0918
loc_3017a:
	// 9061 
cs=0x2128;eip=0x00091a; 	X(PUSH(ax));	// 72746 push    ax ;~ 2128:091A
cs=0x2128;eip=0x00091b; 	R(CALL(sub_2ff59,0));	// 72747 call    sub_2FF59 ;~ 2128:091B
cs=0x2128;eip=0x00091e; 	T(MOV(ax, 0x30D));	// 72748 mov     ax, 30Dh ;~ 2128:091E
cs=0x2128;eip=0x000921; 	X(PUSH(ax));	// 72749 push    ax ;~ 2128:0921
cs=0x2128;eip=0x000922; 	T(CMP(*(dw*)((&unk_564ee)), 8));	// 72750 cmp     word ptr unk_564EE, 8 ;~ 2128:0922
cs=0x2128;eip=0x000927; 	R(JNZ(loc_3018e));	// 72751 jnz     short loc_3018E ;~ 2128:0927
cs=0x2128;eip=0x000929; 	T(MOV(ax, 1));	// 72752 mov     ax, 1 ;~ 2128:0929
cs=0x2128;eip=0x00092c; 	R(JMP(loc_30190));	// 72753 jmp     short loc_30190 ;~ 2128:092C
loc_3018e:
	// 9062 
cs=0x2128;eip=0x00092e; 	T(SUB(ax, ax));	// 72757 sub     ax, ax ;~ 2128:092E
loc_30190:
	// 9063 
cs=0x2128;eip=0x000930; 	X(PUSH(ax));	// 72760 push    ax ;~ 2128:0930
cs=0x2128;eip=0x000931; 	R(CALL(sub_2ff59,0));	// 72761 call    sub_2FF59 ;~ 2128:0931
cs=0x2128;eip=0x000934; 	T(MOV(ax, 0x400));	// 72762 mov     ax, 400h ;~ 2128:0934
cs=0x2128;eip=0x000937; 	X(PUSH(ax));	// 72763 push    ax ;~ 2128:0937
cs=0x2128;eip=0x000938; 	T(CMP(unk_57041, 1));	// 72764 cmp     byte ptr unk_57041, 1 ;~ 2128:0938
cs=0x2128;eip=0x00093d; 	T(SBB(ax, ax));	// 72765 sbb     ax, ax ;~ 2128:093D
cs=0x2128;eip=0x00093f; 	T(NEG(ax));	// 72766 neg     ax ;~ 2128:093F
cs=0x2128;eip=0x000941; 	X(PUSH(ax));	// 72767 push    ax ;~ 2128:0941
cs=0x2128;eip=0x000942; 	R(CALL(sub_2ff59,0));	// 72768 call    sub_2FF59 ;~ 2128:0942
cs=0x2128;eip=0x000945; 	T(MOV(ax, 0x401));	// 72769 mov     ax, 401h ;~ 2128:0945
cs=0x2128;eip=0x000948; 	X(PUSH(ax));	// 72770 push    ax ;~ 2128:0948
cs=0x2128;eip=0x000949; 	T(CMP(unk_57041, 1));	// 72771 cmp     byte ptr unk_57041, 1 ;~ 2128:0949
cs=0x2128;eip=0x00094e; 	R(JNZ(loc_301b5));	// 72772 jnz     short loc_301B5 ;~ 2128:094E
cs=0x2128;eip=0x000950; 	T(MOV(ax, 1));	// 72773 mov     ax, 1 ;~ 2128:0950
cs=0x2128;eip=0x000953; 	R(JMP(loc_301b7));	// 72774 jmp     short loc_301B7 ;~ 2128:0953
loc_301b5:
	// 9064 
cs=0x2128;eip=0x000955; 	T(SUB(ax, ax));	// 72778 sub     ax, ax ;~ 2128:0955
loc_301b7:
	// 9065 
cs=0x2128;eip=0x000957; 	X(PUSH(ax));	// 72781 push    ax ;~ 2128:0957
cs=0x2128;eip=0x000958; 	R(CALL(sub_2ff59,0));	// 72782 call    sub_2FF59 ;~ 2128:0958
cs=0x2128;eip=0x00095b; 	T(MOV(ax, 0x402));	// 72783 mov     ax, 402h ;~ 2128:095B
cs=0x2128;eip=0x00095e; 	X(PUSH(ax));	// 72784 push    ax ;~ 2128:095E
cs=0x2128;eip=0x00095f; 	T(CMP(unk_57041, 2));	// 72785 cmp     byte ptr unk_57041, 2 ;~ 2128:095F
cs=0x2128;eip=0x000964; 	R(JNZ(loc_301cb));	// 72786 jnz     short loc_301CB ;~ 2128:0964
cs=0x2128;eip=0x000966; 	T(MOV(ax, 1));	// 72787 mov     ax, 1 ;~ 2128:0966
cs=0x2128;eip=0x000969; 	R(JMP(loc_301cd));	// 72788 jmp     short loc_301CD ;~ 2128:0969
loc_301cb:
	// 9066 
cs=0x2128;eip=0x00096b; 	T(SUB(ax, ax));	// 72792 sub     ax, ax ;~ 2128:096B
loc_301cd:
	// 9067 
cs=0x2128;eip=0x00096d; 	X(PUSH(ax));	// 72795 push    ax ;~ 2128:096D
cs=0x2128;eip=0x00096e; 	R(CALL(sub_2ff59,0));	// 72796 call    sub_2FF59 ;~ 2128:096E
cs=0x2128;eip=0x000971; 	T(MOV(ax, 0x403));	// 72797 mov     ax, 403h ;~ 2128:0971
cs=0x2128;eip=0x000974; 	X(PUSH(ax));	// 72798 push    ax ;~ 2128:0974
cs=0x2128;eip=0x000975; 	T(CMP(unk_56fe2, 1));	// 72799 cmp     byte ptr unk_56FE2, 1 ;~ 2128:0975
cs=0x2128;eip=0x00097a; 	T(SBB(ax, ax));	// 72800 sbb     ax, ax ;~ 2128:097A
cs=0x2128;eip=0x00097c; 	T(NEG(ax));	// 72801 neg     ax ;~ 2128:097C
cs=0x2128;eip=0x00097e; 	X(PUSH(ax));	// 72802 push    ax ;~ 2128:097E
cs=0x2128;eip=0x00097f; 	R(CALL(sub_2ff59,0));	// 72803 call    sub_2FF59 ;~ 2128:097F
cs=0x2128;eip=0x000982; 	T(MOV(ax, 0x404));	// 72804 mov     ax, 404h ;~ 2128:0982
cs=0x2128;eip=0x000985; 	X(PUSH(ax));	// 72805 push    ax ;~ 2128:0985
cs=0x2128;eip=0x000986; 	T(CMP(unk_56fe2, 1));	// 72806 cmp     byte ptr unk_56FE2, 1 ;~ 2128:0986
cs=0x2128;eip=0x00098b; 	R(JNZ(loc_301f2));	// 72807 jnz     short loc_301F2 ;~ 2128:098B
cs=0x2128;eip=0x00098d; 	T(MOV(ax, 1));	// 72808 mov     ax, 1 ;~ 2128:098D
cs=0x2128;eip=0x000990; 	R(JMP(loc_301f4));	// 72809 jmp     short loc_301F4 ;~ 2128:0990
loc_301f2:
	// 9068 
cs=0x2128;eip=0x000992; 	T(SUB(ax, ax));	// 72813 sub     ax, ax ;~ 2128:0992
loc_301f4:
	// 9069 
cs=0x2128;eip=0x000994; 	X(PUSH(ax));	// 72816 push    ax ;~ 2128:0994
cs=0x2128;eip=0x000995; 	R(CALL(sub_2ff59,0));	// 72817 call    sub_2FF59 ;~ 2128:0995
cs=0x2128;eip=0x000998; 	T(MOV(ax, 0x405));	// 72818 mov     ax, 405h ;~ 2128:0998
cs=0x2128;eip=0x00099b; 	X(PUSH(ax));	// 72819 push    ax ;~ 2128:099B
cs=0x2128;eip=0x00099c; 	T(CMP(unk_56fe2, 2));	// 72820 cmp     byte ptr unk_56FE2, 2 ;~ 2128:099C
cs=0x2128;eip=0x0009a1; 	R(JNZ(loc_30208));	// 72821 jnz     short loc_30208 ;~ 2128:09A1
cs=0x2128;eip=0x0009a3; 	T(MOV(ax, 1));	// 72822 mov     ax, 1 ;~ 2128:09A3
cs=0x2128;eip=0x0009a6; 	R(JMP(loc_3020a));	// 72823 jmp     short loc_3020A ;~ 2128:09A6
loc_30208:
	// 9070 
cs=0x2128;eip=0x0009a8; 	T(SUB(ax, ax));	// 72827 sub     ax, ax ;~ 2128:09A8
loc_3020a:
	// 9071 
cs=0x2128;eip=0x0009aa; 	X(PUSH(ax));	// 72830 push    ax ;~ 2128:09AA
cs=0x2128;eip=0x0009ab; 	R(CALL(sub_2ff59,0));	// 72831 call    sub_2FF59 ;~ 2128:09AB
cs=0x2128;eip=0x0009ae; 	T(MOV(ax, 0x407));	// 72832 mov     ax, 407h ;~ 2128:09AE
cs=0x2128;eip=0x0009b1; 	X(PUSH(ax));	// 72833 push    ax ;~ 2128:09B1
cs=0x2128;eip=0x0009b2; 	T(MOV(al, unk_55206));	// 72834 mov     al, byte ptr unk_55206 ;~ 2128:09B2
cs=0x2128;eip=0x0009b5; 	T(CBW);	// 72835 cbw ;~ 2128:09B5
cs=0x2128;eip=0x0009b6; 	X(PUSH(ax));	// 72836 push    ax ;~ 2128:09B6
cs=0x2128;eip=0x0009b7; 	R(CALL(sub_2ff59,0));	// 72837 call    sub_2FF59 ;~ 2128:09B7
cs=0x2128;eip=0x0009ba; 	T(MOV(ax, 0x408));	// 72838 mov     ax, 408h ;~ 2128:09BA
cs=0x2128;eip=0x0009bd; 	X(PUSH(ax));	// 72839 push    ax ;~ 2128:09BD
cs=0x2128;eip=0x0009be; 	T(MOV(al, unk_47ac3));	// 72840 mov     al, byte ptr unk_47AC3 ;~ 2128:09BE
cs=0x2128;eip=0x0009c1; 	T(CBW);	// 72841 cbw ;~ 2128:09C1
cs=0x2128;eip=0x0009c2; 	X(PUSH(ax));	// 72842 push    ax ;~ 2128:09C2
cs=0x2128;eip=0x0009c3; 	R(CALL(sub_2ff59,0));	// 72843 call    sub_2FF59 ;~ 2128:09C3
cs=0x2128;eip=0x0009c6; 	T(MOV(ax, 0x409));	// 72844 mov     ax, 409h ;~ 2128:09C6
cs=0x2128;eip=0x0009c9; 	X(PUSH(ax));	// 72845 push    ax ;~ 2128:09C9
cs=0x2128;eip=0x0009ca; 	T(MOV(al, unk_47ac2));	// 72846 mov     al, byte ptr unk_47AC2 ;~ 2128:09CA
cs=0x2128;eip=0x0009cd; 	T(CBW);	// 72847 cbw ;~ 2128:09CD
cs=0x2128;eip=0x0009ce; 	X(PUSH(ax));	// 72848 push    ax ;~ 2128:09CE
cs=0x2128;eip=0x0009cf; 	R(CALL(sub_2ff59,0));	// 72849 call    sub_2FF59 ;~ 2128:09CF
cs=0x2128;eip=0x0009d2; 	T(MOV(ax, 0x40A));	// 72850 mov     ax, 40Ah ;~ 2128:09D2
cs=0x2128;eip=0x0009d5; 	X(PUSH(ax));	// 72851 push    ax ;~ 2128:09D5
cs=0x2128;eip=0x0009d6; 	T(MOV(al, unk_47ac4));	// 72852 mov     al, byte ptr unk_47AC4 ;~ 2128:09D6
cs=0x2128;eip=0x0009d9; 	T(CBW);	// 72853 cbw ;~ 2128:09D9
cs=0x2128;eip=0x0009da; 	X(PUSH(ax));	// 72854 push    ax ;~ 2128:09DA
cs=0x2128;eip=0x0009db; 	R(CALL(sub_2ff59,0));	// 72855 call    sub_2FF59 ;~ 2128:09DB
cs=0x2128;eip=0x0009de; 	R(CALL(sub_2f922,0));	// 72856 call    sub_2F922 ;~ 2128:09DE
cs=0x2128;eip=0x0009e1; 	T(CMP(ax, 0x308));	// 72857 cmp     ax, 308h ;~ 2128:09E1
cs=0x2128;eip=0x0009e4; 	R(JNZ(loc_30249));	// 72858 jnz     short loc_30249 ;~ 2128:09E4
cs=0x2128;eip=0x0009e6; 	R(JMP(loc_302f8));	// 72859 jmp     loc_302F8 ;~ 2128:09E6
loc_30249:
	// 9072 
cs=0x2128;eip=0x0009e9; 	R(JLE(loc_3024e));	// 72863 jle     short loc_3024E ;~ 2128:09E9
cs=0x2128;eip=0x0009eb; 	R(JMP(loc_30441));	// 72864 jmp     loc_30441 ;~ 2128:09EB
loc_3024e:
	// 9073 
cs=0x2128;eip=0x0009ee; 	T(CMP(ax, 0x201));	// 72868 cmp     ax, 201h ;~ 2128:09EE
cs=0x2128;eip=0x0009f1; 	R(JZ(loc_302bb));	// 72869 jz      short loc_302BB ;~ 2128:09F1
cs=0x2128;eip=0x0009f3; 	R(JLE(loc_30258));	// 72870 jle     short loc_30258 ;~ 2128:09F3
cs=0x2128;eip=0x0009f5; 	R(JMP(loc_303e9));	// 72871 jmp     loc_303E9 ;~ 2128:09F5
loc_30258:
	// 9074 
cs=0x2128;eip=0x0009f8; 	T(CMP(ax, 0x100));	// 72875 cmp     ax, 100h ;~ 2128:09F8
cs=0x2128;eip=0x0009fb; 	R(JZ(loc_3028a));	// 72876 jz      short loc_3028A ;~ 2128:09FB
cs=0x2128;eip=0x0009fd; 	R(JLE(loc_30262));	// 72877 jle     short loc_30262 ;~ 2128:09FD
cs=0x2128;eip=0x0009ff; 	R(JMP(loc_303c6));	// 72878 jmp     loc_303C6 ;~ 2128:09FF
loc_30262:
	// 9075 
cs=0x2128;eip=0x000a02; 	T(OR(ax, ax));	// 72882 or      ax, ax ;~ 2128:0A02
cs=0x2128;eip=0x000a04; 	R(JZ(loc_30273));	// 72883 jz      short loc_30273 ;~ 2128:0A04
cs=0x2128;eip=0x000a06; 	T(CMP(ax, 1));	// 72884 cmp     ax, 1 ;~ 2128:0A06
cs=0x2128;eip=0x000a09; 	R(JZ(loc_3027c));	// 72885 jz      short loc_3027C ;~ 2128:0A09
cs=0x2128;eip=0x000a0b; 	T(CMP(ax, 2));	// 72886 cmp     ax, 2 ;~ 2128:0A0B
cs=0x2128;eip=0x000a0e; 	R(JZ(loc_30284));	// 72887 jz      short loc_30284 ;~ 2128:0A0E
cs=0x2128;eip=0x000a10; 	R(JMP(loc_304f6));	// 72888 jmp     loc_304F6 ;~ 2128:0A10
loc_30273:
	// 9076 
cs=0x2128;eip=0x000a13; 	X(MOV(*(dw*)((&unk_564f0)), 0));	// 72892 mov     word ptr unk_564F0, 0 ;~ 2128:0A13
cs=0x2128;eip=0x000a19; 	R(JMP(loc_304f6));	// 72893 jmp     loc_304F6 ;~ 2128:0A19
loc_3027c:
	// 9077 
cs=0x2128;eip=0x000a1c; 	R(CALLF(sub_318b6,0));	// 72897 call    sub_318B6 ;~ 2128:0A1C
cs=0x2128;eip=0x000a21; 	R(JMP(loc_304f6));	// 72898 jmp     loc_304F6 ;~ 2128:0A21
loc_30284:
	// 9078 
cs=0x2128;eip=0x000a24; 	R(CALL(sub_30501,0));	// 72902 call    sub_30501 ;~ 2128:0A24
cs=0x2128;eip=0x000a27; 	R(JMP(loc_304f6));	// 72903 jmp     loc_304F6 ;~ 2128:0A27
loc_3028a:
	// 9079 
cs=0x2128;eip=0x000a2a; 	X(OR(unk_55212, 1));	// 72907 or      byte ptr unk_55212, 1 ;~ 2128:0A2A
loc_3028f:
	// 9080 
cs=0x2128;eip=0x000a2f; 	R(CALLF(sub_36e9c,0));	// 72911 call    sub_36E9C ;~ 2128:0A2F
cs=0x2128;eip=0x000a34; 	R(JMP(loc_304f6));	// 72912 jmp     loc_304F6 ;~ 2128:0A34
loc_30297:
	// 9081 
cs=0x2128;eip=0x000a37; 	X(AND(unk_55212, 0x0FE));	// 72916 and     byte ptr unk_55212, 0FEh ;~ 2128:0A37
cs=0x2128;eip=0x000a3c; 	R(JMP(loc_3028f));	// 72917 jmp     short loc_3028F ;~ 2128:0A3C
loc_3029e:
	// 9082 
cs=0x2128;eip=0x000a3e; 	X(XOR(unk_55212, 2));	// 72921 xor     byte ptr unk_55212, 2 ;~ 2128:0A3E
cs=0x2128;eip=0x000a43; 	R(JMP(loc_3028f));	// 72922 jmp     short loc_3028F ;~ 2128:0A43
loc_302a5:
	// 9083 
cs=0x2128;eip=0x000a45; 	X(XOR(unk_55212, 4));	// 72926 xor     byte ptr unk_55212, 4 ;~ 2128:0A45
cs=0x2128;eip=0x000a4a; 	R(JMP(loc_3028f));	// 72927 jmp     short loc_3028F ;~ 2128:0A4A
loc_302ac:
	// 9084 
cs=0x2128;eip=0x000a4c; 	T(MOV(ax, 2));	// 72931 mov     ax, 2 ;~ 2128:0A4C
loc_302af:
	// 9085 
cs=0x2128;eip=0x000a4f; 	X(PUSH(ax));	// 72935 push    ax ;~ 2128:0A4F
cs=0x2128;eip=0x000a50; 	R(CALLF(sub_3185c,0));	// 72936 call    sub_3185C ;~ 2128:0A50
cs=0x2128;eip=0x000a55; 	T(ADD(sp, 2));	// 72937 add     sp, 2 ;~ 2128:0A55
cs=0x2128;eip=0x000a58; 	R(JMP(loc_304f6));	// 72938 jmp     loc_304F6 ;~ 2128:0A58
loc_302bb:
	// 9086 
cs=0x2128;eip=0x000a5b; 	T(MOV(ax, 1));	// 72942 mov     ax, 1 ;~ 2128:0A5B
cs=0x2128;eip=0x000a5e; 	R(JMP(loc_302af));	// 72943 jmp     short loc_302AF ;~ 2128:0A5E
loc_302c0:
	// 9087 
cs=0x2128;eip=0x000a60; 	T(MOV(ax, 3));	// 72947 mov     ax, 3 ;~ 2128:0A60
cs=0x2128;eip=0x000a63; 	R(JMP(loc_302af));	// 72948 jmp     short loc_302AF ;~ 2128:0A63
loc_302c5:
	// 9088 
cs=0x2128;eip=0x000a65; 	T(MOV(ax, 4));	// 72952 mov     ax, 4 ;~ 2128:0A65
cs=0x2128;eip=0x000a68; 	R(JMP(loc_302af));	// 72953 jmp     short loc_302AF ;~ 2128:0A68
loc_302ca:
	// 9089 
cs=0x2128;eip=0x000a6a; 	T(MOV(ax, 1));	// 72957 mov     ax, 1 ;~ 2128:0A6A
loc_302cd:
	// 9090 
cs=0x2128;eip=0x000a6d; 	X(PUSH(ax));	// 72961 push    ax ;~ 2128:0A6D
cs=0x2128;eip=0x000a6e; 	R(CALLF(sub_11c14,0));	// 72962 call    sub_11C14 ;~ 2128:0A6E
cs=0x2128;eip=0x000a73; 	R(JMP(loc_304f6));	// 72963 jmp     loc_304F6 ;~ 2128:0A73
loc_302d6:
	// 9091 
cs=0x2128;eip=0x000a76; 	T(MOV(ax, 0x0A));	// 72967 mov     ax, 0Ah ;~ 2128:0A76
cs=0x2128;eip=0x000a79; 	R(JMP(loc_302cd));	// 72968 jmp     short loc_302CD ;~ 2128:0A79
loc_302db:
	// 9092 
cs=0x2128;eip=0x000a7b; 	T(MOV(ax, 0x0D));	// 72972 mov     ax, 0Dh ;~ 2128:0A7B
cs=0x2128;eip=0x000a7e; 	R(JMP(loc_302cd));	// 72973 jmp     short loc_302CD ;~ 2128:0A7E
loc_302e0:
	// 9093 
cs=0x2128;eip=0x000a80; 	T(MOV(ax, 0x0B));	// 72977 mov     ax, 0Bh ;~ 2128:0A80
cs=0x2128;eip=0x000a83; 	R(JMP(loc_302cd));	// 72978 jmp     short loc_302CD ;~ 2128:0A83
loc_302e5:
	// 9094 
cs=0x2128;eip=0x000a85; 	T(MOV(ax, 0x0C));	// 72982 mov     ax, 0Ch ;~ 2128:0A85
cs=0x2128;eip=0x000a88; 	R(JMP(loc_302cd));	// 72983 jmp     short loc_302CD ;~ 2128:0A88
loc_302ea:
	// 9095 
cs=0x2128;eip=0x000a8a; 	T(SUB(ax, ax));	// 72987 sub     ax, ax ;~ 2128:0A8A
cs=0x2128;eip=0x000a8c; 	R(JMP(loc_302cd));	// 72988 jmp     short loc_302CD ;~ 2128:0A8C
loc_302ee:
	// 9096 
cs=0x2128;eip=0x000a8e; 	T(MOV(ax, 0x0E));	// 72992 mov     ax, 0Eh ;~ 2128:0A8E
cs=0x2128;eip=0x000a91; 	R(JMP(loc_302cd));	// 72993 jmp     short loc_302CD ;~ 2128:0A91
loc_302f3:
	// 9097 
cs=0x2128;eip=0x000a93; 	T(MOV(ax, 2));	// 72997 mov     ax, 2 ;~ 2128:0A93
cs=0x2128;eip=0x000a96; 	R(JMP(loc_302cd));	// 72998 jmp     short loc_302CD ;~ 2128:0A96
loc_302f8:
	// 9098 
cs=0x2128;eip=0x000a98; 	T(MOV(ax, 5));	// 73002 mov     ax, 5 ;~ 2128:0A98
cs=0x2128;eip=0x000a9b; 	R(JMP(loc_302cd));	// 73003 jmp     short loc_302CD ;~ 2128:0A9B
loc_302fd:
	// 9099 
cs=0x2128;eip=0x000a9d; 	T(MOV(ax, 6));	// 73007 mov     ax, 6 ;~ 2128:0A9D
cs=0x2128;eip=0x000aa0; 	R(JMP(loc_302cd));	// 73008 jmp     short loc_302CD ;~ 2128:0AA0
loc_30302:
	// 9100 
cs=0x2128;eip=0x000aa2; 	T(MOV(ax, 7));	// 73012 mov     ax, 7 ;~ 2128:0AA2
cs=0x2128;eip=0x000aa5; 	R(JMP(loc_302cd));	// 73013 jmp     short loc_302CD ;~ 2128:0AA5
loc_30307:
	// 9101 
cs=0x2128;eip=0x000aa7; 	T(MOV(ax, 3));	// 73017 mov     ax, 3 ;~ 2128:0AA7
cs=0x2128;eip=0x000aaa; 	R(JMP(loc_302cd));	// 73018 jmp     short loc_302CD ;~ 2128:0AAA
loc_3030c:
	// 9102 
cs=0x2128;eip=0x000aac; 	T(MOV(ax, 9));	// 73022 mov     ax, 9 ;~ 2128:0AAC
cs=0x2128;eip=0x000aaf; 	R(JMP(loc_302cd));	// 73023 jmp     short loc_302CD ;~ 2128:0AAF
loc_30311:
	// 9103 
cs=0x2128;eip=0x000ab1; 	T(MOV(ax, 8));	// 73027 mov     ax, 8 ;~ 2128:0AB1
cs=0x2128;eip=0x000ab4; 	R(JMP(loc_302cd));	// 73028 jmp     short loc_302CD ;~ 2128:0AB4
loc_30316:
	// 9104 
cs=0x2128;eip=0x000ab6; 	R(CALLF(sub_1cf53,0));	// 73032 call    sub_1CF53 ;~ 2128:0AB6
cs=0x2128;eip=0x000abb; 	R(JMP(loc_304f6));	// 73033 jmp     loc_304F6 ;~ 2128:0ABB
loc_3031e:
	// 9105 
cs=0x2128;eip=0x000abe; 	R(CALLF(sub_1cf5f,0));	// 73037 call    sub_1CF5F ;~ 2128:0ABE
cs=0x2128;eip=0x000ac3; 	R(JMP(loc_304f6));	// 73038 jmp     loc_304F6 ;~ 2128:0AC3
loc_30326:
	// 9106 
cs=0x2128;eip=0x000ac6; 	T(SUB(ax, ax));	// 73042 sub     ax, ax ;~ 2128:0AC6
loc_30328:
	// 9107 
cs=0x2128;eip=0x000ac8; 	X(PUSH(ax));	// 73046 push    ax ;~ 2128:0AC8
cs=0x2128;eip=0x000ac9; 	R(CALLF(sub_31828,0));	// 73047 call    sub_31828 ;~ 2128:0AC9
cs=0x2128;eip=0x000ace; 	T(ADD(sp, 2));	// 73048 add     sp, 2 ;~ 2128:0ACE
cs=0x2128;eip=0x000ad1; 	R(CALLF(sub_1bae3,0));	// 73049 call    sub_1BAE3 ;~ 2128:0AD1
cs=0x2128;eip=0x000ad6; 	R(JMP(loc_304f6));	// 73050 jmp     loc_304F6 ;~ 2128:0AD6
loc_30339:
	// 9108 
cs=0x2128;eip=0x000ad9; 	T(MOV(ax, 1));	// 73054 mov     ax, 1 ;~ 2128:0AD9
cs=0x2128;eip=0x000adc; 	R(JMP(loc_30328));	// 73055 jmp     short loc_30328 ;~ 2128:0ADC
loc_3033e:
	// 9109 
cs=0x2128;eip=0x000ade; 	T(MOV(ax, 2));	// 73059 mov     ax, 2 ;~ 2128:0ADE
cs=0x2128;eip=0x000ae1; 	R(JMP(loc_30328));	// 73060 jmp     short loc_30328 ;~ 2128:0AE1
loc_30343:
	// 9110 
cs=0x2128;eip=0x000ae3; 	X(MOV(unk_56fe2, 0));	// 73064 mov     byte ptr unk_56FE2, 0 ;~ 2128:0AE3
cs=0x2128;eip=0x000ae8; 	R(JMP(loc_304f6));	// 73065 jmp     loc_304F6 ;~ 2128:0AE8
loc_3034b:
	// 9111 
cs=0x2128;eip=0x000aeb; 	X(MOV(unk_56fe2, 1));	// 73069 mov     byte ptr unk_56FE2, 1 ;~ 2128:0AEB
cs=0x2128;eip=0x000af0; 	R(JMP(loc_304f6));	// 73070 jmp     loc_304F6 ;~ 2128:0AF0
loc_30353:
	// 9112 
cs=0x2128;eip=0x000af3; 	X(MOV(unk_56fe2, 2));	// 73074 mov     byte ptr unk_56FE2, 2 ;~ 2128:0AF3
cs=0x2128;eip=0x000af8; 	R(JMP(loc_304f6));	// 73075 jmp     loc_304F6 ;~ 2128:0AF8
loc_3035b:
	// 9113 
cs=0x2128;eip=0x000afb; 	T(SUB(ax, ax));	// 73079 sub     ax, ax ;~ 2128:0AFB
cs=0x2128;eip=0x000afd; 	X(PUSH(ax));	// 73080 push    ax ;~ 2128:0AFD
cs=0x2128;eip=0x000afe; 	R(CALLF(sub_1d0e5,0));	// 73081 call    sub_1D0E5 ;~ 2128:0AFE
cs=0x2128;eip=0x000b03; 	T(ADD(sp, 2));	// 73082 add     sp, 2 ;~ 2128:0B03
cs=0x2128;eip=0x000b06; 	R(CALLF(sub_1dad6,0));	// 73083 call    sub_1DAD6 ;~ 2128:0B06
cs=0x2128;eip=0x000b0b; 	R(JMP(loc_304f6));	// 73084 jmp     loc_304F6 ;~ 2128:0B0B
loc_3036e:
	// 9114 
cs=0x2128;eip=0x000b0e; 	T(CMP(unk_55206, 1));	// 73088 cmp     byte ptr unk_55206, 1 ;~ 2128:0B0E
cs=0x2128;eip=0x000b13; 	T(SBB(ax, ax));	// 73089 sbb     ax, ax ;~ 2128:0B13
cs=0x2128;eip=0x000b15; 	T(NEG(ax));	// 73090 neg     ax ;~ 2128:0B15
cs=0x2128;eip=0x000b17; 	X(MOV(unk_55206, al));	// 73091 mov     byte ptr unk_55206, al ;~ 2128:0B17
cs=0x2128;eip=0x000b1a; 	X(OR(unk_55207, al));	// 73092 or      byte ptr unk_55207, al ;~ 2128:0B1A
cs=0x2128;eip=0x000b1e; 	R(JMP(loc_304f6));	// 73093 jmp     loc_304F6 ;~ 2128:0B1E
loc_30381:
	// 9115 
cs=0x2128;eip=0x000b21; 	T(CMP(unk_47ac3, 1));	// 73097 cmp     byte ptr unk_47AC3, 1 ;~ 2128:0B21
cs=0x2128;eip=0x000b26; 	T(SBB(ax, ax));	// 73098 sbb     ax, ax ;~ 2128:0B26
cs=0x2128;eip=0x000b28; 	T(NEG(ax));	// 73099 neg     ax ;~ 2128:0B28
cs=0x2128;eip=0x000b2a; 	X(MOV(unk_47ac3, al));	// 73100 mov     byte ptr unk_47AC3, al ;~ 2128:0B2A
cs=0x2128;eip=0x000b2d; 	R(JMP(loc_304f6));	// 73101 jmp     loc_304F6 ;~ 2128:0B2D
loc_30390:
	// 9116 
cs=0x2128;eip=0x000b30; 	T(CMP(unk_47ac2, 1));	// 73105 cmp     byte ptr unk_47AC2, 1 ;~ 2128:0B30
cs=0x2128;eip=0x000b35; 	T(SBB(ax, ax));	// 73106 sbb     ax, ax ;~ 2128:0B35
cs=0x2128;eip=0x000b37; 	T(NEG(ax));	// 73107 neg     ax ;~ 2128:0B37
cs=0x2128;eip=0x000b39; 	X(MOV(unk_47ac2, al));	// 73108 mov     byte ptr unk_47AC2, al ;~ 2128:0B39
cs=0x2128;eip=0x000b3c; 	R(JMP(loc_304f6));	// 73109 jmp     loc_304F6 ;~ 2128:0B3C
loc_3039f:
	// 9117 
cs=0x2128;eip=0x000b3f; 	T(CMP(unk_47ac4, 1));	// 73113 cmp     byte ptr unk_47AC4, 1 ;~ 2128:0B3F
cs=0x2128;eip=0x000b44; 	T(SBB(ax, ax));	// 73114 sbb     ax, ax ;~ 2128:0B44
cs=0x2128;eip=0x000b46; 	T(NEG(ax));	// 73115 neg     ax ;~ 2128:0B46
cs=0x2128;eip=0x000b48; 	X(MOV(unk_47ac4, al));	// 73116 mov     byte ptr unk_47AC4, al ;~ 2128:0B48
cs=0x2128;eip=0x000b4b; 	R(JMP(loc_304f6));	// 73117 jmp     loc_304F6 ;~ 2128:0B4B
loc_303ae:
	// 9118 
cs=0x2128;eip=0x000b4e; 	X(MOV(unk_57043, 0));	// 73121 mov     byte ptr unk_57043, 0 ;~ 2128:0B4E
cs=0x2128;eip=0x000b53; 	R(JMP(loc_304f6));	// 73122 jmp     loc_304F6 ;~ 2128:0B53
loc_303b6:
	// 9119 
cs=0x2128;eip=0x000b56; 	X(MOV(unk_57043, 1));	// 73126 mov     byte ptr unk_57043, 1 ;~ 2128:0B56
cs=0x2128;eip=0x000b5b; 	R(JMP(loc_304f6));	// 73127 jmp     loc_304F6 ;~ 2128:0B5B
loc_303be:
	// 9120 
cs=0x2128;eip=0x000b5e; 	X(MOV(unk_57043, 2));	// 73131 mov     byte ptr unk_57043, 2 ;~ 2128:0B5E
cs=0x2128;eip=0x000b63; 	R(JMP(loc_304f6));	// 73132 jmp     loc_304F6 ;~ 2128:0B63
loc_303c6:
	// 9121 
cs=0x2128;eip=0x000b66; 	T(CMP(ax, 0x101));	// 73136 cmp     ax, 101h ;~ 2128:0B66
cs=0x2128;eip=0x000b69; 	R(JNZ(loc_303ce));	// 73137 jnz     short loc_303CE ;~ 2128:0B69
cs=0x2128;eip=0x000b6b; 	R(JMP(loc_30297));	// 73138 jmp     loc_30297 ;~ 2128:0B6B
loc_303ce:
	// 9122 
cs=0x2128;eip=0x000b6e; 	T(CMP(ax, 0x102));	// 73142 cmp     ax, 102h ;~ 2128:0B6E
cs=0x2128;eip=0x000b71; 	R(JNZ(loc_303d6));	// 73143 jnz     short loc_303D6 ;~ 2128:0B71
cs=0x2128;eip=0x000b73; 	R(JMP(loc_3029e));	// 73144 jmp     loc_3029E ;~ 2128:0B73
loc_303d6:
	// 9123 
cs=0x2128;eip=0x000b76; 	T(CMP(ax, 0x103));	// 73148 cmp     ax, 103h ;~ 2128:0B76
cs=0x2128;eip=0x000b79; 	R(JNZ(loc_303de));	// 73149 jnz     short loc_303DE ;~ 2128:0B79
cs=0x2128;eip=0x000b7b; 	R(JMP(loc_302a5));	// 73150 jmp     loc_302A5 ;~ 2128:0B7B
loc_303de:
	// 9124 
cs=0x2128;eip=0x000b7e; 	T(CMP(ax, 0x200));	// 73154 cmp     ax, 200h ;~ 2128:0B7E
cs=0x2128;eip=0x000b81; 	R(JNZ(loc_303e6));	// 73155 jnz     short loc_303E6 ;~ 2128:0B81
cs=0x2128;eip=0x000b83; 	R(JMP(loc_302ac));	// 73156 jmp     loc_302AC ;~ 2128:0B83
loc_303e6:
	// 9125 
cs=0x2128;eip=0x000b86; 	R(JMP(loc_304f6));	// 73160 jmp     loc_304F6 ;~ 2128:0B86
loc_303e9:
	// 9126 
cs=0x2128;eip=0x000b89; 	T(CMP(ax, 0x302));	// 73164 cmp     ax, 302h ;~ 2128:0B89
cs=0x2128;eip=0x000b8c; 	R(JNZ(loc_303f1));	// 73165 jnz     short loc_303F1 ;~ 2128:0B8C
cs=0x2128;eip=0x000b8e; 	R(JMP(loc_302db));	// 73166 jmp     loc_302DB ;~ 2128:0B8E
loc_303f1:
	// 9127 
cs=0x2128;eip=0x000b91; 	R(JG(loc_30416));	// 73170 jg      short loc_30416 ;~ 2128:0B91
cs=0x2128;eip=0x000b93; 	T(CMP(ax, 0x202));	// 73171 cmp     ax, 202h ;~ 2128:0B93
cs=0x2128;eip=0x000b96; 	R(JNZ(loc_303fb));	// 73172 jnz     short loc_303FB ;~ 2128:0B96
cs=0x2128;eip=0x000b98; 	R(JMP(loc_302c0));	// 73173 jmp     loc_302C0 ;~ 2128:0B98
loc_303fb:
	// 9128 
cs=0x2128;eip=0x000b9b; 	T(CMP(ax, 0x203));	// 73177 cmp     ax, 203h ;~ 2128:0B9B
cs=0x2128;eip=0x000b9e; 	R(JNZ(loc_30403));	// 73178 jnz     short loc_30403 ;~ 2128:0B9E
cs=0x2128;eip=0x000ba0; 	R(JMP(loc_302c5));	// 73179 jmp     loc_302C5 ;~ 2128:0BA0
loc_30403:
	// 9129 
cs=0x2128;eip=0x000ba3; 	T(CMP(ax, 0x300));	// 73183 cmp     ax, 300h ;~ 2128:0BA3
cs=0x2128;eip=0x000ba6; 	R(JNZ(loc_3040b));	// 73184 jnz     short loc_3040B ;~ 2128:0BA6
cs=0x2128;eip=0x000ba8; 	R(JMP(loc_302ca));	// 73185 jmp     loc_302CA ;~ 2128:0BA8
loc_3040b:
	// 9130 
cs=0x2128;eip=0x000bab; 	T(CMP(ax, 0x301));	// 73189 cmp     ax, 301h ;~ 2128:0BAB
cs=0x2128;eip=0x000bae; 	R(JNZ(loc_30413));	// 73190 jnz     short loc_30413 ;~ 2128:0BAE
cs=0x2128;eip=0x000bb0; 	R(JMP(loc_302d6));	// 73191 jmp     loc_302D6 ;~ 2128:0BB0
loc_30413:
	// 9131 
cs=0x2128;eip=0x000bb3; 	R(JMP(loc_304f6));	// 73195 jmp     loc_304F6 ;~ 2128:0BB3
loc_30416:
	// 9132 
cs=0x2128;eip=0x000bb6; 	T(CMP(ax, 0x303));	// 73199 cmp     ax, 303h ;~ 2128:0BB6
cs=0x2128;eip=0x000bb9; 	R(JNZ(loc_3041e));	// 73200 jnz     short loc_3041E ;~ 2128:0BB9
cs=0x2128;eip=0x000bbb; 	R(JMP(loc_302e0));	// 73201 jmp     loc_302E0 ;~ 2128:0BBB
loc_3041e:
	// 9133 
cs=0x2128;eip=0x000bbe; 	T(CMP(ax, 0x304));	// 73205 cmp     ax, 304h ;~ 2128:0BBE
cs=0x2128;eip=0x000bc1; 	R(JNZ(loc_30426));	// 73206 jnz     short loc_30426 ;~ 2128:0BC1
cs=0x2128;eip=0x000bc3; 	R(JMP(loc_302e5));	// 73207 jmp     loc_302E5 ;~ 2128:0BC3
loc_30426:
	// 9134 
cs=0x2128;eip=0x000bc6; 	T(CMP(ax, 0x305));	// 73211 cmp     ax, 305h ;~ 2128:0BC6
cs=0x2128;eip=0x000bc9; 	R(JNZ(loc_3042e));	// 73212 jnz     short loc_3042E ;~ 2128:0BC9
cs=0x2128;eip=0x000bcb; 	R(JMP(loc_302ea));	// 73213 jmp     loc_302EA ;~ 2128:0BCB
loc_3042e:
	// 9135 
cs=0x2128;eip=0x000bce; 	T(CMP(ax, 0x306));	// 73217 cmp     ax, 306h ;~ 2128:0BCE
cs=0x2128;eip=0x000bd1; 	R(JNZ(loc_30436));	// 73218 jnz     short loc_30436 ;~ 2128:0BD1
cs=0x2128;eip=0x000bd3; 	R(JMP(loc_302ee));	// 73219 jmp     loc_302EE ;~ 2128:0BD3
loc_30436:
	// 9136 
cs=0x2128;eip=0x000bd6; 	T(CMP(ax, 0x307));	// 73223 cmp     ax, 307h ;~ 2128:0BD6
cs=0x2128;eip=0x000bd9; 	R(JNZ(loc_3043e));	// 73224 jnz     short loc_3043E ;~ 2128:0BD9
cs=0x2128;eip=0x000bdb; 	R(JMP(loc_302f3));	// 73225 jmp     loc_302F3 ;~ 2128:0BDB
loc_3043e:
	// 9137 
cs=0x2128;eip=0x000bde; 	R(JMP(loc_304f6));	// 73229 jmp     loc_304F6 ;~ 2128:0BDE
loc_30441:
	// 9138 
cs=0x2128;eip=0x000be1; 	T(CMP(ax, 0x402));	// 73233 cmp     ax, 402h ;~ 2128:0BE1
cs=0x2128;eip=0x000be4; 	R(JNZ(loc_30449));	// 73234 jnz     short loc_30449 ;~ 2128:0BE4
cs=0x2128;eip=0x000be6; 	R(JMP(loc_3033e));	// 73235 jmp     loc_3033E ;~ 2128:0BE6
loc_30449:
	// 9139 
cs=0x2128;eip=0x000be9; 	R(JG(loc_3049a));	// 73239 jg      short loc_3049A ;~ 2128:0BE9
cs=0x2128;eip=0x000beb; 	T(CMP(ax, 0x30C));	// 73240 cmp     ax, 30Ch ;~ 2128:0BEB
cs=0x2128;eip=0x000bee; 	R(JNZ(loc_30453));	// 73241 jnz     short loc_30453 ;~ 2128:0BEE
cs=0x2128;eip=0x000bf0; 	R(JMP(loc_3030c));	// 73242 jmp     loc_3030C ;~ 2128:0BF0
loc_30453:
	// 9140 
cs=0x2128;eip=0x000bf3; 	R(JG(loc_30470));	// 73246 jg      short loc_30470 ;~ 2128:0BF3
cs=0x2128;eip=0x000bf5; 	T(CMP(ax, 0x309));	// 73247 cmp     ax, 309h ;~ 2128:0BF5
cs=0x2128;eip=0x000bf8; 	R(JNZ(loc_3045d));	// 73248 jnz     short loc_3045D ;~ 2128:0BF8
cs=0x2128;eip=0x000bfa; 	R(JMP(loc_302fd));	// 73249 jmp     loc_302FD ;~ 2128:0BFA
loc_3045d:
	// 9141 
cs=0x2128;eip=0x000bfd; 	T(CMP(ax, 0x30A));	// 73253 cmp     ax, 30Ah ;~ 2128:0BFD
cs=0x2128;eip=0x000c00; 	R(JNZ(loc_30465));	// 73254 jnz     short loc_30465 ;~ 2128:0C00
cs=0x2128;eip=0x000c02; 	R(JMP(loc_30302));	// 73255 jmp     loc_30302 ;~ 2128:0C02
loc_30465:
	// 9142 
cs=0x2128;eip=0x000c05; 	T(CMP(ax, 0x30B));	// 73259 cmp     ax, 30Bh ;~ 2128:0C05
cs=0x2128;eip=0x000c08; 	R(JNZ(loc_3046d));	// 73260 jnz     short loc_3046D ;~ 2128:0C08
cs=0x2128;eip=0x000c0a; 	R(JMP(loc_30307));	// 73261 jmp     loc_30307 ;~ 2128:0C0A
loc_3046d:
	// 9143 
cs=0x2128;eip=0x000c0d; 	R(JMP(loc_304f6));	// 73265 jmp     loc_304F6 ;~ 2128:0C0D
loc_30470:
	// 9144 
cs=0x2128;eip=0x000c10; 	T(CMP(ax, 0x30D));	// 73269 cmp     ax, 30Dh ;~ 2128:0C10
cs=0x2128;eip=0x000c13; 	R(JNZ(loc_30478));	// 73270 jnz     short loc_30478 ;~ 2128:0C13
cs=0x2128;eip=0x000c15; 	R(JMP(loc_30311));	// 73271 jmp     loc_30311 ;~ 2128:0C15
loc_30478:
	// 9145 
cs=0x2128;eip=0x000c18; 	T(CMP(ax, 0x30E));	// 73275 cmp     ax, 30Eh ;~ 2128:0C18
cs=0x2128;eip=0x000c1b; 	R(JNZ(loc_30480));	// 73276 jnz     short loc_30480 ;~ 2128:0C1B
cs=0x2128;eip=0x000c1d; 	R(JMP(loc_30316));	// 73277 jmp     loc_30316 ;~ 2128:0C1D
loc_30480:
	// 9146 
cs=0x2128;eip=0x000c20; 	T(CMP(ax, 0x30F));	// 73281 cmp     ax, 30Fh ;~ 2128:0C20
cs=0x2128;eip=0x000c23; 	R(JNZ(loc_30488));	// 73282 jnz     short loc_30488 ;~ 2128:0C23
cs=0x2128;eip=0x000c25; 	R(JMP(loc_3031e));	// 73283 jmp     loc_3031E ;~ 2128:0C25
loc_30488:
	// 9147 
cs=0x2128;eip=0x000c28; 	T(CMP(ax, 0x400));	// 73287 cmp     ax, 400h ;~ 2128:0C28
cs=0x2128;eip=0x000c2b; 	R(JNZ(loc_30490));	// 73288 jnz     short loc_30490 ;~ 2128:0C2B
cs=0x2128;eip=0x000c2d; 	R(JMP(loc_30326));	// 73289 jmp     loc_30326 ;~ 2128:0C2D
loc_30490:
	// 9148 
cs=0x2128;eip=0x000c30; 	T(CMP(ax, 0x401));	// 73293 cmp     ax, 401h ;~ 2128:0C30
cs=0x2128;eip=0x000c33; 	R(JNZ(loc_30498));	// 73294 jnz     short loc_30498 ;~ 2128:0C33
cs=0x2128;eip=0x000c35; 	R(JMP(loc_30339));	// 73295 jmp     loc_30339 ;~ 2128:0C35
loc_30498:
	// 9149 
cs=0x2128;eip=0x000c38; 	R(JMP(loc_304f6));	// 73299 jmp     short loc_304F6 ;~ 2128:0C38
loc_3049a:
	// 9150 
cs=0x2128;eip=0x000c3a; 	T(CMP(ax, 0x407));	// 73303 cmp     ax, 407h ;~ 2128:0C3A
cs=0x2128;eip=0x000c3d; 	R(JNZ(loc_304a2));	// 73304 jnz     short loc_304A2 ;~ 2128:0C3D
cs=0x2128;eip=0x000c3f; 	R(JMP(loc_3036e));	// 73305 jmp     loc_3036E ;~ 2128:0C3F
loc_304a2:
	// 9151 
cs=0x2128;eip=0x000c42; 	R(JG(loc_304c6));	// 73309 jg      short loc_304C6 ;~ 2128:0C42
cs=0x2128;eip=0x000c44; 	T(CMP(ax, 0x403));	// 73310 cmp     ax, 403h ;~ 2128:0C44
cs=0x2128;eip=0x000c47; 	R(JNZ(loc_304ac));	// 73311 jnz     short loc_304AC ;~ 2128:0C47
cs=0x2128;eip=0x000c49; 	R(JMP(loc_30343));	// 73312 jmp     loc_30343 ;~ 2128:0C49
loc_304ac:
	// 9152 
cs=0x2128;eip=0x000c4c; 	T(CMP(ax, 0x404));	// 73316 cmp     ax, 404h ;~ 2128:0C4C
cs=0x2128;eip=0x000c4f; 	R(JNZ(loc_304b4));	// 73317 jnz     short loc_304B4 ;~ 2128:0C4F
cs=0x2128;eip=0x000c51; 	R(JMP(loc_3034b));	// 73318 jmp     loc_3034B ;~ 2128:0C51
loc_304b4:
	// 9153 
cs=0x2128;eip=0x000c54; 	T(CMP(ax, 0x405));	// 73322 cmp     ax, 405h ;~ 2128:0C54
cs=0x2128;eip=0x000c57; 	R(JNZ(loc_304bc));	// 73323 jnz     short loc_304BC ;~ 2128:0C57
cs=0x2128;eip=0x000c59; 	R(JMP(loc_30353));	// 73324 jmp     loc_30353 ;~ 2128:0C59
loc_304bc:
	// 9154 
cs=0x2128;eip=0x000c5c; 	T(CMP(ax, 0x406));	// 73328 cmp     ax, 406h ;~ 2128:0C5C
cs=0x2128;eip=0x000c5f; 	R(JNZ(loc_304c4));	// 73329 jnz     short loc_304C4 ;~ 2128:0C5F
cs=0x2128;eip=0x000c61; 	R(JMP(loc_3035b));	// 73330 jmp     loc_3035B ;~ 2128:0C61
loc_304c4:
	// 9155 
cs=0x2128;eip=0x000c64; 	R(JMP(loc_304f6));	// 73334 jmp     short loc_304F6 ;~ 2128:0C64
loc_304c6:
	// 9156 
cs=0x2128;eip=0x000c66; 	T(CMP(ax, 0x408));	// 73338 cmp     ax, 408h ;~ 2128:0C66
cs=0x2128;eip=0x000c69; 	R(JNZ(loc_304ce));	// 73339 jnz     short loc_304CE ;~ 2128:0C69
cs=0x2128;eip=0x000c6b; 	R(JMP(loc_30381));	// 73340 jmp     loc_30381 ;~ 2128:0C6B
loc_304ce:
	// 9157 
cs=0x2128;eip=0x000c6e; 	T(CMP(ax, 0x409));	// 73344 cmp     ax, 409h ;~ 2128:0C6E
cs=0x2128;eip=0x000c71; 	R(JNZ(loc_304d6));	// 73345 jnz     short loc_304D6 ;~ 2128:0C71
cs=0x2128;eip=0x000c73; 	R(JMP(loc_30390));	// 73346 jmp     loc_30390 ;~ 2128:0C73
loc_304d6:
	// 9158 
cs=0x2128;eip=0x000c76; 	T(CMP(ax, 0x40A));	// 73350 cmp     ax, 40Ah ;~ 2128:0C76
cs=0x2128;eip=0x000c79; 	R(JNZ(loc_304de));	// 73351 jnz     short loc_304DE ;~ 2128:0C79
cs=0x2128;eip=0x000c7b; 	R(JMP(loc_3039f));	// 73352 jmp     loc_3039F ;~ 2128:0C7B
loc_304de:
	// 9159 
cs=0x2128;eip=0x000c7e; 	T(CMP(ax, 0x500));	// 73356 cmp     ax, 500h ;~ 2128:0C7E
cs=0x2128;eip=0x000c81; 	R(JNZ(loc_304e6));	// 73357 jnz     short loc_304E6 ;~ 2128:0C81
cs=0x2128;eip=0x000c83; 	R(JMP(loc_303ae));	// 73358 jmp     loc_303AE ;~ 2128:0C83
loc_304e6:
	// 9160 
cs=0x2128;eip=0x000c86; 	T(CMP(ax, 0x501));	// 73362 cmp     ax, 501h ;~ 2128:0C86
cs=0x2128;eip=0x000c89; 	R(JNZ(loc_304ee));	// 73363 jnz     short loc_304EE ;~ 2128:0C89
cs=0x2128;eip=0x000c8b; 	R(JMP(loc_303b6));	// 73364 jmp     loc_303B6 ;~ 2128:0C8B
loc_304ee:
	// 9161 
cs=0x2128;eip=0x000c8e; 	T(CMP(ax, 0x502));	// 73368 cmp     ax, 502h ;~ 2128:0C8E
cs=0x2128;eip=0x000c91; 	R(JNZ(loc_304f6));	// 73369 jnz     short loc_304F6 ;~ 2128:0C91
cs=0x2128;eip=0x000c93; 	R(JMP(loc_303be));	// 73370 jmp     loc_303BE ;~ 2128:0C93
loc_304f6:
	// 9162 
cs=0x2128;eip=0x000c96; 	R(CALLF(sub_1bb30,0));	// 73375 call    sub_1BB30 ;~ 2128:0C96
cs=0x2128;eip=0x000c9b; 	R(CALLF(sub_1ba1f,0));	// 73376 call    sub_1BA1F ;~ 2128:0C9B
cs=0x2128;eip=0x000ca0; 	R(RETF(0));	// 73377 retf ;~ 2128:0CA0
sub_30501:
	// 73384 
cs=0x2128;eip=0x000ca1; 	T(SUB(ax, ax));	// 73385 sub     ax, ax ;~ 2128:0CA1
cs=0x2128;eip=0x000ca3; 	X(PUSH(ax));	// 73386 push    ax ;~ 2128:0CA3
cs=0x2128;eip=0x000ca4; 	T(MOV(ax, 1));	// 73387 mov     ax, 1 ;~ 2128:0CA4
cs=0x2128;eip=0x000ca7; 	X(PUSH(ax));	// 73388 push    ax ;~ 2128:0CA7
cs=0x2128;eip=0x000ca8; 	R(CALLF(sub_2c939,0));	// 73389 call    sub_2C939 ;~ 2128:0CA8
cs=0x2128;eip=0x000cad; 	T(SUB(ax, ax));	// 73390 sub     ax, ax ;~ 2128:0CAD
cs=0x2128;eip=0x000caf; 	X(PUSH(ax));	// 73391 push    ax ;~ 2128:0CAF
cs=0x2128;eip=0x000cb0; 	R(CALLF(sub_20347,0));	// 73392 call    sub_20347 ;~ 2128:0CB0
cs=0x2128;eip=0x000cb5; 	T(SUB(ax, ax));	// 73393 sub     ax, ax ;~ 2128:0CB5
cs=0x2128;eip=0x000cb7; 	X(PUSH(ax));	// 73394 push    ax ;~ 2128:0CB7
cs=0x2128;eip=0x000cb8; 	R(CALLF(sub_202f1,0));	// 73395 call    sub_202F1 ;~ 2128:0CB8
cs=0x2128;eip=0x000cbd; 	R(CALLF(sub_203b0,0));	// 73396 call    sub_203B0 ;~ 2128:0CBD
cs=0x2128;eip=0x000cc2; 	T(MOV(ax, 0x68));	// 73397 mov     ax, 68h ; 'h' ;~ 2128:0CC2
cs=0x2128;eip=0x000cc5; 	X(PUSH(ax));	// 73398 push    ax ;~ 2128:0CC5
cs=0x2128;eip=0x000cc6; 	T(MOV(ax, 0x21));	// 73399 mov     ax, 21h ; '!' ;~ 2128:0CC6
cs=0x2128;eip=0x000cc9; 	X(PUSH(ax));	// 73400 push    ax ;~ 2128:0CC9
cs=0x2128;eip=0x000cca; 	T(MOV(ax, 0x70));	// 73401 mov     ax, 70h ; 'p' ;~ 2128:0CCA
cs=0x2128;eip=0x000ccd; 	X(PUSH(ax));	// 73402 push    ax ;~ 2128:0CCD
cs=0x2128;eip=0x000cce; 	T(MOV(ax, 0x23));	// 73403 mov     ax, 23h ; '#' ;~ 2128:0CCE
cs=0x2128;eip=0x000cd1; 	X(PUSH(ax));	// 73404 push    ax ;~ 2128:0CD1
cs=0x2128;eip=0x000cd2; 	T(MOV(ax, 1));	// 73405 mov     ax, 1 ;~ 2128:0CD2
cs=0x2128;eip=0x000cd5; 	X(PUSH(ax));	// 73406 push    ax ;~ 2128:0CD5
cs=0x2128;eip=0x000cd6; 	X(PUSH(cs));	// 73407 push    cs ;~ 2128:0CD6
cs=0x2128;eip=0x000cd7; 	R(CALL(sub_2fbda,0));	// 73408 call    near ptr sub_2FBDA ;~ 2128:0CD7
cs=0x2128;eip=0x000cda; 	X(MOV(*(dw*)((&unk_47bde)), 0x0FF00));	// 73409 mov     word ptr unk_47BDE, 0FF00h ;~ 2128:0CDA
cs=0x2128;eip=0x000ce0; 	X(MOV(unk_56885, 0));	// 73410 mov     byte ptr unk_56885, 0 ;~ 2128:0CE0
cs=0x2128;eip=0x000ce5; 	T(MOV(ax, 0x1190));	// 73411 mov     ax, 1190h ;~ 2128:0CE5
cs=0x2128;eip=0x000ce8; 	X(PUSH(ax));	// 73412 push    ax ;~ 2128:0CE8
cs=0x2128;eip=0x000ce9; 	T(MOV(ax, 0x70));	// 73413 mov     ax, 70h ; 'p' ;~ 2128:0CE9
cs=0x2128;eip=0x000cec; 	X(PUSH(ax));	// 73414 push    ax ;~ 2128:0CEC
cs=0x2128;eip=0x000ced; 	T(MOV(ax, 0x28));	// 73415 mov     ax, 28h ; '(' ;~ 2128:0CED
cs=0x2128;eip=0x000cf0; 	X(PUSH(ax));	// 73416 push    ax ;~ 2128:0CF0
cs=0x2128;eip=0x000cf1; 	R(CALLF(sub_2de1a,0));	// 73417 call    sub_2DE1A ;~ 2128:0CF1
cs=0x2128;eip=0x000cf6; 	T(MOV(ax, 0x11A9));	// 73418 mov     ax, 11A9h ;~ 2128:0CF6
cs=0x2128;eip=0x000cf9; 	X(PUSH(ax));	// 73419 push    ax ;~ 2128:0CF9
cs=0x2128;eip=0x000cfa; 	T(MOV(ax, 0x80));	// 73420 mov     ax, 80h ; '€' ;~ 2128:0CFA
cs=0x2128;eip=0x000cfd; 	X(PUSH(ax));	// 73421 push    ax ;~ 2128:0CFD
cs=0x2128;eip=0x000cfe; 	T(MOV(ax, 0x2F));	// 73422 mov     ax, 2Fh ; '/' ;~ 2128:0CFE
cs=0x2128;eip=0x000d01; 	X(PUSH(ax));	// 73423 push    ax ;~ 2128:0D01
cs=0x2128;eip=0x000d02; 	R(CALLF(sub_2de1a,0));	// 73424 call    sub_2DE1A ;~ 2128:0D02
cs=0x2128;eip=0x000d07; 	T(MOV(ax, 0x11BA));	// 73425 mov     ax, 11BAh ;~ 2128:0D07
cs=0x2128;eip=0x000d0a; 	X(PUSH(ax));	// 73426 push    ax ;~ 2128:0D0A
cs=0x2128;eip=0x000d0b; 	T(MOV(ax, 0x70));	// 73427 mov     ax, 70h ; 'p' ;~ 2128:0D0B
cs=0x2128;eip=0x000d0e; 	X(PUSH(ax));	// 73428 push    ax ;~ 2128:0D0E
cs=0x2128;eip=0x000d0f; 	T(MOV(ax, 0x36));	// 73429 mov     ax, 36h ; '6' ;~ 2128:0D0F
cs=0x2128;eip=0x000d12; 	X(PUSH(ax));	// 73430 push    ax ;~ 2128:0D12
cs=0x2128;eip=0x000d13; 	R(CALLF(sub_2de1a,0));	// 73431 call    sub_2DE1A ;~ 2128:0D13
cs=0x2128;eip=0x000d18; 	R(CALLF(sub_2eee2,0));	// 73432 call    sub_2EEE2 ;~ 2128:0D18
cs=0x2128;eip=0x000d1d; 	T(MOV(ax, 1));	// 73433 mov     ax, 1 ;~ 2128:0D1D
cs=0x2128;eip=0x000d20; 	X(PUSH(ax));	// 73434 push    ax ;~ 2128:0D20
cs=0x2128;eip=0x000d21; 	T(SUB(ax, ax));	// 73435 sub     ax, ax ;~ 2128:0D21
cs=0x2128;eip=0x000d23; 	X(PUSH(ax));	// 73436 push    ax ;~ 2128:0D23
cs=0x2128;eip=0x000d24; 	R(CALLF(sub_2c939,0));	// 73437 call    sub_2C939 ;~ 2128:0D24
cs=0x2128;eip=0x000d29; 	T(SUB(ax, ax));	// 73438 sub     ax, ax ;~ 2128:0D29
cs=0x2128;eip=0x000d2b; 	X(PUSH(ax));	// 73439 push    ax ;~ 2128:0D2B
cs=0x2128;eip=0x000d2c; 	R(CALLF(sub_20347,0));	// 73440 call    sub_20347 ;~ 2128:0D2C
cs=0x2128;eip=0x000d31; 	T(MOV(ax, 1));	// 73441 mov     ax, 1 ;~ 2128:0D31
cs=0x2128;eip=0x000d34; 	X(PUSH(ax));	// 73442 push    ax ;~ 2128:0D34
cs=0x2128;eip=0x000d35; 	R(CALLF(sub_202f1,0));	// 73443 call    sub_202F1 ;~ 2128:0D35
cs=0x2128;eip=0x000d3a; 	R(RETN(0));	// 73444 retn ;~ 2128:0D3A

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_2f87c: 	goto loc_2f87c;
        case m2c::kloc_2f88a: 	goto loc_2f88a;
        case m2c::kloc_2f8d6: 	goto loc_2f8d6;
        case m2c::kloc_2f8d9: 	goto loc_2f8d9;
        case m2c::kloc_2f909: 	goto loc_2f909;
        case m2c::kloc_2f91b: 	goto loc_2f91b;
        case m2c::kloc_2f91e: 	goto loc_2f91e;
        case m2c::kloc_2f966: 	goto loc_2f966;
        case m2c::kloc_2f98b: 	goto loc_2f98b;
        case m2c::kloc_2f9ab: 	goto loc_2f9ab;
        case m2c::kloc_2f9b7: 	goto loc_2f9b7;
        case m2c::kloc_2f9cd: 	goto loc_2f9cd;
        case m2c::kloc_2f9d0: 	goto loc_2f9d0;
        case m2c::kloc_2f9f6: 	goto loc_2f9f6;
        case m2c::kloc_2f9fd: 	goto loc_2f9fd;
        case m2c::kloc_2fa10: 	goto loc_2fa10;
        case m2c::kloc_2fa15: 	goto loc_2fa15;
        case m2c::kloc_2fa1d: 	goto loc_2fa1d;
        case m2c::kloc_2fa25: 	goto loc_2fa25;
        case m2c::kloc_2fa2d: 	goto loc_2fa2d;
        case m2c::kloc_2fa2f: 	goto loc_2fa2f;
        case m2c::kloc_2fa37: 	goto loc_2fa37;
        case m2c::kloc_2fa64: 	goto loc_2fa64;
        case m2c::kloc_2fa78: 	goto loc_2fa78;
        case m2c::kloc_2fa84: 	goto loc_2fa84;
        case m2c::kloc_2fa87: 	goto loc_2fa87;
        case m2c::kloc_2fa8c: 	goto loc_2fa8c;
        case m2c::kloc_2faa0: 	goto loc_2faa0;
        case m2c::kloc_2faa4: 	goto loc_2faa4;
        case m2c::kloc_2fab6: 	goto loc_2fab6;
        case m2c::kloc_2fabb: 	goto loc_2fabb;
        case m2c::kloc_2fac3: 	goto loc_2fac3;
        case m2c::kloc_2fad0: 	goto loc_2fad0;
        case m2c::kloc_2fae2: 	goto loc_2fae2;
        case m2c::kloc_2fc86: 	goto loc_2fc86;
        case m2c::kloc_2fcc7: 	goto loc_2fcc7;
        case m2c::kloc_2fce7: 	goto loc_2fce7;
        case m2c::kloc_2fd20: 	goto loc_2fd20;
        case m2c::kloc_2fd23: 	goto loc_2fd23;
        case m2c::kloc_2fd34: 	goto loc_2fd34;
        case m2c::kloc_2fd36: 	goto loc_2fd36;
        case m2c::kloc_2fdba: 	goto loc_2fdba;
        case m2c::kloc_2fdcc: 	goto loc_2fdcc;
        case m2c::kloc_2fdfa: 	goto loc_2fdfa;
        case m2c::kloc_2fe0a: 	goto loc_2fe0a;
        case m2c::kloc_2fe19: 	goto loc_2fe19;
        case m2c::kloc_2fe44: 	goto loc_2fe44;
        case m2c::kloc_2fe60: 	goto loc_2fe60;
        case m2c::kloc_2fe69: 	goto loc_2fe69;
        case m2c::kloc_2fe82: 	goto loc_2fe82;
        case m2c::kloc_2fe86: 	goto loc_2fe86;
        case m2c::kloc_2fe8b: 	goto loc_2fe8b;
        case m2c::kloc_2fee7: 	goto loc_2fee7;
        case m2c::kloc_2feea: 	goto loc_2feea;
        case m2c::kloc_2fefb: 	goto loc_2fefb;
        case m2c::kloc_2fefd: 	goto loc_2fefd;
        case m2c::kloc_2ff52: 	goto loc_2ff52;
        case m2c::kloc_2ff69: 	goto loc_2ff69;
        case m2c::kloc_2ff6b: 	goto loc_2ff6b;
        case m2c::kloc_3001d: 	goto loc_3001d;
        case m2c::kloc_3001f: 	goto loc_3001f;
        case m2c::kloc_30033: 	goto loc_30033;
        case m2c::kloc_30035: 	goto loc_30035;
        case m2c::kloc_30049: 	goto loc_30049;
        case m2c::kloc_3004b: 	goto loc_3004b;
        case m2c::kloc_3005f: 	goto loc_3005f;
        case m2c::kloc_30061: 	goto loc_30061;
        case m2c::kloc_30075: 	goto loc_30075;
        case m2c::kloc_30077: 	goto loc_30077;
        case m2c::kloc_3008b: 	goto loc_3008b;
        case m2c::kloc_3008d: 	goto loc_3008d;
        case m2c::kloc_300a1: 	goto loc_300a1;
        case m2c::kloc_300a3: 	goto loc_300a3;
        case m2c::kloc_300b7: 	goto loc_300b7;
        case m2c::kloc_300b9: 	goto loc_300b9;
        case m2c::kloc_300cd: 	goto loc_300cd;
        case m2c::kloc_300cf: 	goto loc_300cf;
        case m2c::kloc_300f4: 	goto loc_300f4;
        case m2c::kloc_300f6: 	goto loc_300f6;
        case m2c::kloc_3010a: 	goto loc_3010a;
        case m2c::kloc_3010c: 	goto loc_3010c;
        case m2c::kloc_30120: 	goto loc_30120;
        case m2c::kloc_30122: 	goto loc_30122;
        case m2c::kloc_30136: 	goto loc_30136;
        case m2c::kloc_30138: 	goto loc_30138;
        case m2c::kloc_3014c: 	goto loc_3014c;
        case m2c::kloc_3014e: 	goto loc_3014e;
        case m2c::kloc_30162: 	goto loc_30162;
        case m2c::kloc_30164: 	goto loc_30164;
        case m2c::kloc_30178: 	goto loc_30178;
        case m2c::kloc_3017a: 	goto loc_3017a;
        case m2c::kloc_3018e: 	goto loc_3018e;
        case m2c::kloc_30190: 	goto loc_30190;
        case m2c::kloc_301b5: 	goto loc_301b5;
        case m2c::kloc_301b7: 	goto loc_301b7;
        case m2c::kloc_301cb: 	goto loc_301cb;
        case m2c::kloc_301cd: 	goto loc_301cd;
        case m2c::kloc_301f2: 	goto loc_301f2;
        case m2c::kloc_301f4: 	goto loc_301f4;
        case m2c::kloc_30208: 	goto loc_30208;
        case m2c::kloc_3020a: 	goto loc_3020a;
        case m2c::kloc_30249: 	goto loc_30249;
        case m2c::kloc_3024e: 	goto loc_3024e;
        case m2c::kloc_30258: 	goto loc_30258;
        case m2c::kloc_30262: 	goto loc_30262;
        case m2c::kloc_30273: 	goto loc_30273;
        case m2c::kloc_3027c: 	goto loc_3027c;
        case m2c::kloc_30284: 	goto loc_30284;
        case m2c::kloc_3028a: 	goto loc_3028a;
        case m2c::kloc_3028f: 	goto loc_3028f;
        case m2c::kloc_30297: 	goto loc_30297;
        case m2c::kloc_3029e: 	goto loc_3029e;
        case m2c::kloc_302a5: 	goto loc_302a5;
        case m2c::kloc_302ac: 	goto loc_302ac;
        case m2c::kloc_302af: 	goto loc_302af;
        case m2c::kloc_302bb: 	goto loc_302bb;
        case m2c::kloc_302c0: 	goto loc_302c0;
        case m2c::kloc_302c5: 	goto loc_302c5;
        case m2c::kloc_302ca: 	goto loc_302ca;
        case m2c::kloc_302cd: 	goto loc_302cd;
        case m2c::kloc_302d6: 	goto loc_302d6;
        case m2c::kloc_302db: 	goto loc_302db;
        case m2c::kloc_302e0: 	goto loc_302e0;
        case m2c::kloc_302e5: 	goto loc_302e5;
        case m2c::kloc_302ea: 	goto loc_302ea;
        case m2c::kloc_302ee: 	goto loc_302ee;
        case m2c::kloc_302f3: 	goto loc_302f3;
        case m2c::kloc_302f8: 	goto loc_302f8;
        case m2c::kloc_302fd: 	goto loc_302fd;
        case m2c::kloc_30302: 	goto loc_30302;
        case m2c::kloc_30307: 	goto loc_30307;
        case m2c::kloc_3030c: 	goto loc_3030c;
        case m2c::kloc_30311: 	goto loc_30311;
        case m2c::kloc_30316: 	goto loc_30316;
        case m2c::kloc_3031e: 	goto loc_3031e;
        case m2c::kloc_30326: 	goto loc_30326;
        case m2c::kloc_30328: 	goto loc_30328;
        case m2c::kloc_30339: 	goto loc_30339;
        case m2c::kloc_3033e: 	goto loc_3033e;
        case m2c::kloc_30343: 	goto loc_30343;
        case m2c::kloc_3034b: 	goto loc_3034b;
        case m2c::kloc_30353: 	goto loc_30353;
        case m2c::kloc_3035b: 	goto loc_3035b;
        case m2c::kloc_3036e: 	goto loc_3036e;
        case m2c::kloc_30381: 	goto loc_30381;
        case m2c::kloc_30390: 	goto loc_30390;
        case m2c::kloc_3039f: 	goto loc_3039f;
        case m2c::kloc_303ae: 	goto loc_303ae;
        case m2c::kloc_303b6: 	goto loc_303b6;
        case m2c::kloc_303be: 	goto loc_303be;
        case m2c::kloc_303c6: 	goto loc_303c6;
        case m2c::kloc_303ce: 	goto loc_303ce;
        case m2c::kloc_303d6: 	goto loc_303d6;
        case m2c::kloc_303de: 	goto loc_303de;
        case m2c::kloc_303e6: 	goto loc_303e6;
        case m2c::kloc_303e9: 	goto loc_303e9;
        case m2c::kloc_303f1: 	goto loc_303f1;
        case m2c::kloc_303fb: 	goto loc_303fb;
        case m2c::kloc_30403: 	goto loc_30403;
        case m2c::kloc_3040b: 	goto loc_3040b;
        case m2c::kloc_30413: 	goto loc_30413;
        case m2c::kloc_30416: 	goto loc_30416;
        case m2c::kloc_3041e: 	goto loc_3041e;
        case m2c::kloc_30426: 	goto loc_30426;
        case m2c::kloc_3042e: 	goto loc_3042e;
        case m2c::kloc_30436: 	goto loc_30436;
        case m2c::kloc_3043e: 	goto loc_3043e;
        case m2c::kloc_30441: 	goto loc_30441;
        case m2c::kloc_30449: 	goto loc_30449;
        case m2c::kloc_30453: 	goto loc_30453;
        case m2c::kloc_3045d: 	goto loc_3045d;
        case m2c::kloc_30465: 	goto loc_30465;
        case m2c::kloc_3046d: 	goto loc_3046d;
        case m2c::kloc_30470: 	goto loc_30470;
        case m2c::kloc_30478: 	goto loc_30478;
        case m2c::kloc_30480: 	goto loc_30480;
        case m2c::kloc_30488: 	goto loc_30488;
        case m2c::kloc_30490: 	goto loc_30490;
        case m2c::kloc_30498: 	goto loc_30498;
        case m2c::kloc_3049a: 	goto loc_3049a;
        case m2c::kloc_304a2: 	goto loc_304a2;
        case m2c::kloc_304ac: 	goto loc_304ac;
        case m2c::kloc_304b4: 	goto loc_304b4;
        case m2c::kloc_304bc: 	goto loc_304bc;
        case m2c::kloc_304c4: 	goto loc_304c4;
        case m2c::kloc_304c6: 	goto loc_304c6;
        case m2c::kloc_304ce: 	goto loc_304ce;
        case m2c::kloc_304d6: 	goto loc_304d6;
        case m2c::kloc_304de: 	goto loc_304de;
        case m2c::kloc_304e6: 	goto loc_304e6;
        case m2c::kloc_304ee: 	goto loc_304ee;
        case m2c::kloc_304f6: 	goto loc_304f6;
        case m2c::ksub_2f860: 	goto sub_2f860;
        case m2c::ksub_2f90f: 	goto sub_2f90f;
        case m2c::ksub_2f922: 	goto sub_2f922;
        case m2c::ksub_2fb1e: 	goto sub_2fb1e;
        case m2c::ksub_2fbda: 	goto sub_2fbda;
        case m2c::ksub_2fcf2: 	goto sub_2fcf2;
        case m2c::ksub_2fd5d: 	goto sub_2fd5d;
        case m2c::ksub_2fdd4: 	goto sub_2fdd4;
        case m2c::ksub_2fe2a: 	goto sub_2fe2a;
        case m2c::ksub_2fe93: 	goto sub_2fe93;
        case m2c::ksub_2ff59: 	goto sub_2ff59;
        case m2c::ksub_2ff8f: 	goto sub_2ff8f;
        case m2c::ksub_2ffca: 	goto sub_2ffca;
        case m2c::ksub_30501: 	goto sub_30501;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, _source);m2c::stackDump(_state); abort();
    };
}

