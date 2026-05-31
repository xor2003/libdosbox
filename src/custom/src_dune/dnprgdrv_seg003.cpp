/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "dnprgdrv.h"

                

 bool _group3(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group3:
    _begin:
sub_56460:
	// 70312 
cs=0x47d8;eip=0x000100; 	J(JMP(loc_56480));	// 70317 jmp     short loc_56480 ;~ 47D8:0100
seg003_102_proc:
	// 70321 
	// 70321 nop ;~ 47D8:0102
loc_56463:
	// 8663 
cs=0x47d8;eip=0x000103; 	J(JMP(sub_56522));	// 70324 jmp     near ptr sub_56522 ;~ 47D8:0103
sub_56466:
	// 70330 
cs=0x47d8;eip=0x000106; 	J(JMP(sub_5653e));	// 70332 jmp     near ptr sub_5653E ;~ 47D8:0106
sub_56469:
	// 70340 
cs=0x47d8;eip=0x000109; 	J(JMP(sub_56522));	// 70342 jmp     near ptr sub_56522 ;~ 47D8:0109
sub_5646c:
	// 70350 
cs=0x47d8;eip=0x00010c; 	J(JMP(sub_5652b));	// 70352 jmp     near ptr sub_5652B ;~ 47D8:010C
sub_5646f:
	// 70360 
cs=0x47d8;eip=0x00010f; 	J(JMP(sub_56538));	// 70362 jmp     near ptr sub_56538 ;~ 47D8:010F
sub_56472:
	// 70370 
cs=0x47d8;eip=0x000112; 	J(JMP(sub_56577));	// 70372 jmp     near ptr sub_56577 ;~ 47D8:0112
seg003_115_proc:
	// 70377 
loc_56475:
	// 8664 
cs=0x47d8;eip=0x000115; 	J(JMP(loc_56507));	// 70378 jmp     loc_56507 ;~ 47D8:0115
loc_56480:
	// 8665 
cs=0x47d8;eip=0x000120; 	T(OR(ax, ax));	// 70390 or      ax, ax ;~ 47D8:0120
cs=0x47d8;eip=0x000122; 	J(JZ(loc_564a4));	// 70391 jz      short loc_564A4 ;~ 47D8:0122
cs=0x47d8;eip=0x000124; 	X(PUSH(ax));	// 70392 push    ax ;~ 47D8:0124
cs=0x47d8;eip=0x000125; 	T(AND(al, 0x0F));	// 70393 and     al, 0Fh ;~ 47D8:0125
cs=0x47d8;eip=0x000127; 	T(MOV(bx, 2));	// 70394 mov     bx, 2 ;~ 47D8:0127
cs=0x47d8;eip=0x00012a; 	J(CALL(sub_56b8b,0));	// 70395 call    sub_56B8B ;~ 47D8:012A
cs=0x47d8;eip=0x00012d; 	X(POP(ax));	// 70396 pop     ax ;~ 47D8:012D
cs=0x47d8;eip=0x00012e; 	T(SHR(ax, 1));	// 70397 shr     ax, 1 ;~ 47D8:012E
cs=0x47d8;eip=0x000130; 	T(SHR(ax, 1));	// 70398 shr     ax, 1 ;~ 47D8:0130
cs=0x47d8;eip=0x000132; 	T(SHR(ax, 1));	// 70399 shr     ax, 1 ;~ 47D8:0132
cs=0x47d8;eip=0x000134; 	T(SHR(ax, 1));	// 70400 shr     ax, 1 ;~ 47D8:0134
cs=0x47d8;eip=0x000136; 	X(PUSH(ax));	// 70401 push    ax ;~ 47D8:0136
cs=0x47d8;eip=0x000137; 	T(MOV(bx, 1));	// 70402 mov     bx, 1 ;~ 47D8:0137
cs=0x47d8;eip=0x00013a; 	J(CALL(sub_56b8b,0));	// 70403 call    sub_56B8B ;~ 47D8:013A
cs=0x47d8;eip=0x00013d; 	X(POP(ax));	// 70404 pop     ax ;~ 47D8:013D
cs=0x47d8;eip=0x00013e; 	T(MOV(bx, 0x0D));	// 70405 mov     bx, 0Dh ;~ 47D8:013E
cs=0x47d8;eip=0x000141; 	J(CALL(sub_56b8b,0));	// 70406 call    sub_56B8B ;~ 47D8:0141
loc_564a4:
	// 8666 
cs=0x47d8;eip=0x000144; 	T(MOV(bx, 3));	// 70409 mov     bx, 3 ;~ 47D8:0144
cs=0x47d8;eip=0x000147; 	J(CALL(sub_56b8b,0));	// 70410 call    sub_56B8B ;~ 47D8:0147
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x00014a; 	X(MOV(*(dw*)(((db*)&dword_5647c)), m2c::ksub_56460));	// 70411 mov     word ptr cs:dword_5647C, offset sub_56460 ;~ 47D8:014A
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x000151; 	X(MOV(*(dw*)(((db*)&dword_5647c)+2), cs));	// 70412 mov     word ptr cs:dword_5647C+2, cs ;~ 47D8:0151
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x000156; 	X(MOV(*(dw*)(((db*)&word_56478)), m2c::ksub_56460));	// 70413 mov     cs:word_56478, offset sub_56460 ;~ 47D8:0156
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x00015d; 	X(MOV(*(dw*)(((db*)&word_5647a)), cs));	// 70414 mov     cs:word_5647A, cs ;~ 47D8:015D
cs=0x47d8;eip=0x000162; 	X(PUSH(cs));	// 70415 push    cs ;~ 47D8:0162
cs=0x47d8;eip=0x000163; 	J(CALL(sub_56522,0));	// 70416 call    near ptr sub_56522 ;~ 47D8:0163
cs=0x47d8;eip=0x000166; 	T(MOV(bx, 0x0F));	// 70417 mov     bx, 0Fh ;~ 47D8:0166
cs=0x47d8;eip=0x000169; 	J(RETF(0));	// 70418 retf ;~ 47D8:0169
sub_564ca:
	// 70424 
cs=0x47d8;eip=0x00016a; 	X(PUSH(bx));	// 70425 push    bx ;~ 47D8:016A
ret_47d8_16b:
	// 8667 
cs=0x47d8;eip=0x00016b; 	X(PUSH(dx));	// 70426 push    dx ;~ 47D8:016B
cs=0x47d8;eip=0x00016c; 	T(SHR(al, 1));	// 70427 shr     al, 1 ;~ 47D8:016C
cs=0x47d8;eip=0x00016e; 	T(SHR(al, 1));	// 70428 shr     al, 1 ;~ 47D8:016E
cs=0x47d8;eip=0x000170; 	T(SHR(al, 1));	// 70429 shr     al, 1 ;~ 47D8:0170
cs=0x47d8;eip=0x000172; 	T(MOV(dx, ax));	// 70430 mov     dx, ax ;~ 47D8:0172
cs=0x47d8;eip=0x000174; 	T(MOV(bx, 0x0F078));	// 70431 mov     bx, 0F078h ;~ 47D8:0174
cs=0x47d8;eip=0x000177; 	T(CMP(ah, bl));	// 70432 cmp     ah, bl ;~ 47D8:0177
cs=0x47d8;eip=0x000179; 	J(JBE(loc_564dd));	// 70433 jbe     short loc_564DD ;~ 47D8:0179
cs=0x47d8;eip=0x00017b; 	T(MOV(ah, bl));	// 70434 mov     ah, bl ;~ 47D8:017B
loc_564dd:
	// 8668 
cs=0x47d8;eip=0x00017d; 	T(XOR(al, al));	// 70437 xor     al, al ;~ 47D8:017D
cs=0x47d8;eip=0x00017f; 	T(DIV1(bh));	// 70438 div     bh ;~ 47D8:017F
cs=0x47d8;eip=0x000181; 	T(MUL1_1(dl));	// 70439 mul     dl ;~ 47D8:0181
cs=0x47d8;eip=0x000183; 	T(XCHG(ah, dh));	// 70440 xchg    ah, dh ;~ 47D8:0183
cs=0x47d8;eip=0x000185; 	T(SUB(ah, bh));	// 70441 sub     ah, bh ;~ 47D8:0185
cs=0x47d8;eip=0x000187; 	T(NEG(ah));	// 70442 neg     ah ;~ 47D8:0187
cs=0x47d8;eip=0x000189; 	T(CMP(ah, bl));	// 70443 cmp     ah, bl ;~ 47D8:0189
cs=0x47d8;eip=0x00018b; 	J(JBE(loc_564ef));	// 70444 jbe     short loc_564EF ;~ 47D8:018B
cs=0x47d8;eip=0x00018d; 	T(MOV(ah, bl));	// 70445 mov     ah, bl ;~ 47D8:018D
loc_564ef:
	// 8669 
cs=0x47d8;eip=0x00018f; 	T(XOR(al, al));	// 70448 xor     al, al ;~ 47D8:018F
cs=0x47d8;eip=0x000191; 	T(DIV1(bh));	// 70449 div     bh ;~ 47D8:0191
cs=0x47d8;eip=0x000193; 	T(MUL1_1(dl));	// 70450 mul     dl ;~ 47D8:0193
cs=0x47d8;eip=0x000195; 	T(SHR(ax, 1));	// 70451 shr     ax, 1 ;~ 47D8:0195
cs=0x47d8;eip=0x000197; 	T(SHR(ax, 1));	// 70452 shr     ax, 1 ;~ 47D8:0197
cs=0x47d8;eip=0x000199; 	T(SHR(ax, 1));	// 70453 shr     ax, 1 ;~ 47D8:0199
cs=0x47d8;eip=0x00019b; 	T(SHR(ax, 1));	// 70454 shr     ax, 1 ;~ 47D8:019B
cs=0x47d8;eip=0x00019d; 	T(MOV(ah, dh));	// 70455 mov     ah, dh ;~ 47D8:019D
cs=0x47d8;eip=0x00019f; 	T(AND(ax, 0x0FF0));	// 70456 and     ax, 0FF0h ;~ 47D8:019F
cs=0x47d8;eip=0x0001a2; 	T(OR(al, ah));	// 70457 or      al, ah ;~ 47D8:01A2
cs=0x47d8;eip=0x0001a4; 	X(POP(dx));	// 70458 pop     dx ;~ 47D8:01A4
cs=0x47d8;eip=0x0001a5; 	X(POP(bx));	// 70459 pop     bx ;~ 47D8:01A5
cs=0x47d8;eip=0x0001a6; 	J(RETN(0));	// 70460 retn ;~ 47D8:01A6
seg003_1a7_proc:
	// 70465 
loc_56507:
	// 8670 
cs=0x47d8;eip=0x0001a7; 	J(CALL(sub_564ca,0));	// 70466 call    sub_564CA ;~ 47D8:01A7
cs=0x47d8;eip=0x0001aa; 	T(MOV(ah, 4));	// 70467 mov     ah, 4 ;~ 47D8:01AA
cs=0x47d8;eip=0x0001ac; 	J(CALL(sub_56510,0));	// 70468 call    sub_56510 ;~ 47D8:01AC
cs=0x47d8;eip=0x0001af; 	J(RETF(0));	// 70469 retf ;~ 47D8:01AF
sub_56510:
	// 70474 
cs=0x47d8;eip=0x0001b0; 	X(PUSH(dx));	// 70475 push    dx ;~ 47D8:01B0
ret_47d8_1b1:
	// 8671 
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x0001b1; 	T(MOV(dx, *(dw*)(((db*)&word_565e5))));	// 70476 mov     dx, cs:word_565E5 ;~ 47D8:01B1
cs=0x47d8;eip=0x0001b6; 	T(ADD(dl, 4));	// 70477 add     dl, 4 ;~ 47D8:01B6
cs=0x47d8;eip=0x0001b9; 	T(XCHG(al, ah));	// 70478 xchg    al, ah ;~ 47D8:01B9
cs=0x47d8;eip=0x0001bb; 	R(OUT(dx, al));	// 70479 out     dx, al ;~ 47D8:01BB
cs=0x47d8;eip=0x0001bc; 	T(INC(dx));	// 70480 inc     dx ;~ 47D8:01BC
cs=0x47d8;eip=0x0001bd; 	T(XCHG(al, ah));	// 70481 xchg    al, ah ;~ 47D8:01BD
cs=0x47d8;eip=0x0001bf; 	R(OUT(dx, al));	// 70482 out     dx, al ;~ 47D8:01BF
cs=0x47d8;eip=0x0001c0; 	X(POP(dx));	// 70483 pop     dx ;~ 47D8:01C0
cs=0x47d8;eip=0x0001c1; 	J(RETN(0));	// 70484 retn ;~ 47D8:01C1
sub_56522:
	// 70491 
cs=0x47d8;eip=0x0001c2; 	X(PUSH(bx));	// 70493 push    bx ;~ 47D8:01C2
ret_47d8_1c3:
	// 8672 
cs=0x47d8;eip=0x0001c3; 	T(MOV(bx, 8));	// 70494 mov     bx, 8 ;~ 47D8:01C3
cs=0x47d8;eip=0x0001c6; 	J(CALL(sub_56b8b,0));	// 70495 call    sub_56B8B ;~ 47D8:01C6
cs=0x47d8;eip=0x0001c9; 	X(POP(bx));	// 70496 pop     bx ;~ 47D8:01C9
cs=0x47d8;eip=0x0001ca; 	J(RETF(0));	// 70497 retf ;~ 47D8:01CA
sub_5652b:
	// 70504 
cs=0x47d8;eip=0x0001cb; 	X(PUSH(ax));	// 70505 push    ax ;~ 47D8:01CB
ret_47d8_1cc:
	// 8673 
cs=0x47d8;eip=0x0001cc; 	T(XOR(ax, ax));	// 70506 xor     ax, ax ;~ 47D8:01CC
loc_5652e:
	// 8674 
cs=0x47d8;eip=0x0001ce; 	X(PUSH(bx));	// 70509 push    bx ;~ 47D8:01CE
cs=0x47d8;eip=0x0001cf; 	T(MOV(bx, 0x0C));	// 70510 mov     bx, 0Ch ;~ 47D8:01CF
cs=0x47d8;eip=0x0001d2; 	J(CALL(sub_56b8b,0));	// 70511 call    sub_56B8B ;~ 47D8:01D2
cs=0x47d8;eip=0x0001d5; 	X(POP(bx));	// 70512 pop     bx ;~ 47D8:01D5
cs=0x47d8;eip=0x0001d6; 	X(POP(ax));	// 70513 pop     ax ;~ 47D8:01D6
cs=0x47d8;eip=0x0001d7; 	J(RETF(0));	// 70514 retf ;~ 47D8:01D7
sub_56538:
	// 70521 
cs=0x47d8;eip=0x0001d8; 	X(PUSH(ax));	// 70522 push    ax ;~ 47D8:01D8
ret_47d8_1d9:
	// 8675 
cs=0x47d8;eip=0x0001d9; 	T(MOV(ax, 1));	// 70523 mov     ax, 1 ;~ 47D8:01D9
cs=0x47d8;eip=0x0001dc; 	J(JMP(loc_5652e));	// 70524 jmp     short loc_5652E ;~ 47D8:01DC
sub_5653e:
	// 70531 
cs=0x47d8;eip=0x0001de; 	X(PUSH(es));	// 70533 push    es ;~ 47D8:01DE
ret_47d8_1df:
	// 8676 
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x0001df; 	X(MOV(*(dw*)(((db*)&word_56478)), si));	// 70534 mov     cs:word_56478, si ;~ 47D8:01DF
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x0001e4; 	X(MOV(*(dw*)(((db*)&word_5647a)), ds));	// 70535 mov     cs:word_5647A, ds ;~ 47D8:01E4
cs=0x47d8;eip=0x0001e9; 	T(LES(di, *(dw*)(raddr(ds,si))));	// 70536 les     di, [si] ;~ 47D8:01E9
cs=0x47d8;eip=0x0001eb; 	T(MOV(bx, *(dw*)(raddr(ds,si+4))));	// 70537 mov     bx, [si+4] ;~ 47D8:01EB
cs=0x47d8;eip=0x0001ee; 	X(OR(*(raddr(ds,si+6)), 3));	// 70538 or      byte ptr [si+6], 3 ;~ 47D8:01EE
cs=0x47d8;eip=0x0001f2; 	X(MOV(*(raddr(es,bx+di)), 0));	// 70539 mov     byte ptr es:[bx+di], 0 ;~ 47D8:01F2
cs=0x47d8;eip=0x0001f6; 	T(SUB(bx, 4));	// 70540 sub     bx, 4 ;~ 47D8:01F6
cs=0x47d8;eip=0x0001f9; 	T(CMP(*(raddr(es,di+3)), 0));	// 70541 cmp     byte ptr es:[di+3], 0 ;~ 47D8:01F9
cs=0x47d8;eip=0x0001fe; 	J(JNZ(loc_56566));	// 70542 jnz     short loc_56566 ;~ 47D8:01FE
cs=0x47d8;eip=0x000200; 	T(CMP(*(dw*)(raddr(es,di+1)), bx));	// 70543 cmp     es:[di+1], bx ;~ 47D8:0200
cs=0x47d8;eip=0x000204; 	J(JC(loc_5656f));	// 70544 jb      short loc_5656F ;~ 47D8:0204
loc_56566:
	// 8677 
cs=0x47d8;eip=0x000206; 	X(MOV(*(dw*)(raddr(es,di+1)), bx));	// 70547 mov     es:[di+1], bx ;~ 47D8:0206
cs=0x47d8;eip=0x00020a; 	X(MOV(*(raddr(es,di+3)), 0));	// 70548 mov     byte ptr es:[di+3], 0 ;~ 47D8:020A
loc_5656f:
	// 8678 
cs=0x47d8;eip=0x00020f; 	T(MOV(bx, 6));	// 70551 mov     bx, 6 ;~ 47D8:020F
cs=0x47d8;eip=0x000212; 	J(CALL(sub_56b8b,0));	// 70552 call    sub_56B8B ;~ 47D8:0212
cs=0x47d8;eip=0x000215; 	X(POP(es));	// 70553 pop     es ;~ 47D8:0215
cs=0x47d8;eip=0x000216; 	J(RETF(0));	// 70554 retf ;~ 47D8:0216
sub_56577:
	// 70561 
cs=0x47d8;eip=0x000217; 	X(PUSH(es));	// 70562 push    es ;~ 47D8:0217
ret_47d8_218:
	// 8679 
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x000218; 	X(MOV(*(dw*)(((db*)&dword_5647c)), si));	// 70563 mov     word ptr cs:dword_5647C, si ;~ 47D8:0218
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x00021d; 	X(MOV(*(dw*)(((db*)&dword_5647c)+2), ds));	// 70564 mov     word ptr cs:dword_5647C+2, ds ;~ 47D8:021D
cs=0x47d8;eip=0x000222; 	T(LES(di, *(dw*)(raddr(ds,si))));	// 70565 les     di, [si] ;~ 47D8:0222
cs=0x47d8;eip=0x000224; 	T(MOV(bx, *(dw*)(raddr(ds,si+4))));	// 70566 mov     bx, [si+4] ;~ 47D8:0224
cs=0x47d8;eip=0x000227; 	T(CMP(*(raddr(ds,si+7)), 0));	// 70567 cmp     byte ptr [si+7], 0 ;~ 47D8:0227
cs=0x47d8;eip=0x00022b; 	J(JNS(loc_56592));	// 70568 jns     short loc_56592 ;~ 47D8:022B
cs=0x47d8;eip=0x00022d; 	T(OR(bx, bx));	// 70569 or      bx, bx ;~ 47D8:022D
cs=0x47d8;eip=0x00022f; 	J(JZ(loc_56592));	// 70570 jz      short loc_56592 ;~ 47D8:022F
cs=0x47d8;eip=0x000231; 	T(DEC(bx));	// 70571 dec     bx ;~ 47D8:0231
loc_56592:
	// 8680 
cs=0x47d8;eip=0x000232; 	X(MOV(*(raddr(es,bx+di+6)), 0));	// 70575 mov     byte ptr es:[bx+di+6], 0 ;~ 47D8:0232
cs=0x47d8;eip=0x000237; 	X(MOV(*(raddr(es,di+2)), 2));	// 70576 mov     byte ptr es:[di+2], 2 ;~ 47D8:0237
cs=0x47d8;eip=0x00023c; 	X(MOV(*(dw*)(raddr(es,di+3)), bx));	// 70577 mov     es:[di+3], bx ;~ 47D8:023C
cs=0x47d8;eip=0x000240; 	X(MOV(*(raddr(es,di+5)), 0));	// 70578 mov     byte ptr es:[di+5], 0 ;~ 47D8:0240
cs=0x47d8;eip=0x000245; 	X(MOV(*(raddr(ds,si+6)), 2));	// 70579 mov     byte ptr [si+6], 2 ;~ 47D8:0245
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x000249; 	T(CMP(*(&byte_565f2), 0));	// 70580 cmp     cs:byte_565F2, 0 ;~ 47D8:0249
cs=0x47d8;eip=0x00024f; 	J(JNZ(loc_565e1));	// 70581 jnz     short loc_565E1 ;~ 47D8:024F
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x000251; 	T(CMP(*(&byte_5665e), 0));	// 70582 cmp     cs:byte_5665E, 0 ;~ 47D8:0251
cs=0x47d8;eip=0x000257; 	J(JNZ(loc_565e1));	// 70583 jnz     short loc_565E1 ;~ 47D8:0257
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x000259; 	T(LDS(si, *(dd*)(((db*)&dword_5647c))));	// 70584 lds     si, cs:dword_5647C ;~ 47D8:0259
cs=0x47d8;eip=0x00025e; 	T(LES(di, *(dw*)(raddr(ds,si))));	// 70585 les     di, [si] ;~ 47D8:025E
cs=0x47d8;eip=0x000260; 	X(ADD(*(dw*)(raddr(ds,si+4)), 6));	// 70586 add     word ptr [si+4], 6 ;~ 47D8:0260
cs=0x47d8;eip=0x000264; 	X(MOV(*(raddr(es,di)), 1));	// 70587 mov     byte ptr es:[di], 1 ;~ 47D8:0264
cs=0x47d8;eip=0x000268; 	X(MOV(*(raddr(es,di+3)), 1));	// 70588 mov     byte ptr es:[di+3], 1 ;~ 47D8:0268
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x00026d; 	T(MOV(al, *(&byte_5665c)));	// 70589 mov     al, cs:byte_5665C ;~ 47D8:026D
cs=0x47d8;eip=0x000271; 	X(MOV(*(raddr(es,di+4)), al));	// 70590 mov     es:[di+4], al ;~ 47D8:0271
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x000275; 	T(MOV(al, *(&byte_5665d)));	// 70591 mov     al, cs:byte_5665D ;~ 47D8:0275
cs=0x47d8;eip=0x000279; 	X(MOV(*(raddr(es,di+5)), al));	// 70592 mov     es:[di+5], al ;~ 47D8:0279
cs=0x47d8;eip=0x00027d; 	X(PUSH(cs));	// 70593 push    cs ;~ 47D8:027D
cs=0x47d8;eip=0x00027e; 	J(CALL(sub_5653e,0));	// 70594 call    near ptr sub_5653E ;~ 47D8:027E
loc_565e1:
	// 8681 
cs=0x47d8;eip=0x000281; 	X(POP(es));	// 70598 pop     es ;~ 47D8:0281
cs=0x47d8;eip=0x000282; 	J(RETF(0));	// 70599 retf ;~ 47D8:0282
sub_5665f:
	// 70715 
cs=0x47d8;eip=0x0002ff; 	X(PUSH(cx));	// 70717 push    cx ;~ 47D8:02FF
ret_47d8_300:
	// 8682 
cs=0x47d8;eip=0x000300; 	T(MOV(cx, 0x200));	// 70718 mov     cx, 200h ;~ 47D8:0300
cs=0x47d8;eip=0x000303; 	T(MOV(ah, al));	// 70719 mov     ah, al ;~ 47D8:0303
loc_56665:
	// 8683 
cs=0x47d8;eip=0x000305; 	R(IN(al, dx));	// 70722 in      al, dx ;~ 47D8:0305
cs=0x47d8;eip=0x000306; 	T(OR(al, al));	// 70723 or      al, al ;~ 47D8:0306
cs=0x47d8;eip=0x000308; 	J(JNS(loc_5666f));	// 70724 jns     short loc_5666F ;~ 47D8:0308
cs=0x47d8;eip=0x00030a; 	J(LOOP(loc_56665));	// 70725 loop    loc_56665 ;~ 47D8:030A
cs=0x47d8;eip=0x00030c; 	T(STC);	// 70726 stc ;~ 47D8:030C
cs=0x47d8;eip=0x00030d; 	J(JMP(loc_56673));	// 70727 jmp     short loc_56673 ;~ 47D8:030D
loc_5666f:
	// 8684 
cs=0x47d8;eip=0x00030f; 	T(MOV(al, ah));	// 70731 mov     al, ah ;~ 47D8:030F
cs=0x47d8;eip=0x000311; 	R(OUT(dx, al));	// 70732 out     dx, al ;~ 47D8:0311
cs=0x47d8;eip=0x000312; 	T(CLC);	// 70733 clc ;~ 47D8:0312
loc_56673:
	// 8685 
cs=0x47d8;eip=0x000313; 	X(POP(cx));	// 70736 pop     cx ;~ 47D8:0313
cs=0x47d8;eip=0x000314; 	J(RETN(0));	// 70737 retn ;~ 47D8:0314
sub_56675:
	// 70744 
cs=0x47d8;eip=0x000315; 	X(PUSH(cx));	// 70746 push    cx ;~ 47D8:0315
ret_47d8_316:
	// 8686 
cs=0x47d8;eip=0x000316; 	X(PUSH(dx));	// 70747 push    dx ;~ 47D8:0316
cs=0x47d8;eip=0x000317; 	T(MOV(dx, *(dw*)(raddr(ds,0x285))));	// 70748 mov     dx, ds:285h ;~ 47D8:0317
cs=0x47d8;eip=0x00031b; 	T(ADD(dl, 0x0E));	// 70749 add     dl, 0Eh ;~ 47D8:031B
cs=0x47d8;eip=0x00031e; 	T(MOV(cx, 0x200));	// 70750 mov     cx, 200h ;~ 47D8:031E
loc_56681:
	// 8687 
cs=0x47d8;eip=0x000321; 	R(IN(al, dx));	// 70753 in      al, dx ;~ 47D8:0321
cs=0x47d8;eip=0x000322; 	T(OR(al, al));	// 70754 or      al, al ;~ 47D8:0322
cs=0x47d8;eip=0x000324; 	J(JS(loc_5668b));	// 70755 js      short loc_5668B ;~ 47D8:0324
cs=0x47d8;eip=0x000326; 	J(LOOP(loc_56681));	// 70756 loop    loc_56681 ;~ 47D8:0326
cs=0x47d8;eip=0x000328; 	T(STC);	// 70757 stc ;~ 47D8:0328
cs=0x47d8;eip=0x000329; 	J(JMP(loc_56690));	// 70758 jmp     short loc_56690 ;~ 47D8:0329
loc_5668b:
	// 8688 
cs=0x47d8;eip=0x00032b; 	T(SUB(dl, 4));	// 70762 sub     dl, 4 ;~ 47D8:032B
cs=0x47d8;eip=0x00032e; 	R(IN(al, dx));	// 70763 in      al, dx ;~ 47D8:032E
cs=0x47d8;eip=0x00032f; 	T(CLC);	// 70764 clc ;~ 47D8:032F
loc_56690:
	// 8689 
cs=0x47d8;eip=0x000330; 	X(POP(dx));	// 70767 pop     dx ;~ 47D8:0330
cs=0x47d8;eip=0x000331; 	X(POP(cx));	// 70768 pop     cx ;~ 47D8:0331
cs=0x47d8;eip=0x000332; 	J(RETN(0));	// 70769 retn ;~ 47D8:0332
sub_56693:
	// 70776 
cs=0x47d8;eip=0x000333; 	T(MOV(dx, *(dw*)(raddr(ds,0x285))));	// 70778 mov     dx, ds:285h ;~ 47D8:0333
ret_47d8_337:
	// 8690 
cs=0x47d8;eip=0x000337; 	T(ADD(dl, 0x0C));	// 70779 add     dl, 0Ch ;~ 47D8:0337
sub_5669a:
	// 70786 
cs=0x47d8;eip=0x00033a; 	T(MOV(ah, al));	// 70788 mov     ah, al ;~ 47D8:033A
cs=0x47d8;eip=0x00033c; 	T(MOV(al, 0x0F0));	// 70789 mov     al, 0F0h ; 'ğ' ;~ 47D8:033C
loc_5669e:
	// 8691 
cs=0x47d8;eip=0x00033e; 	R(IN(al, dx));	// 70792 in      al, dx ;~ 47D8:033E
cs=0x47d8;eip=0x00033f; 	T(OR(al, al));	// 70793 or      al, al ;~ 47D8:033F
cs=0x47d8;eip=0x000341; 	J(JS(loc_5669e));	// 70794 js      short loc_5669E ;~ 47D8:0341
cs=0x47d8;eip=0x000343; 	T(MOV(al, ah));	// 70795 mov     al, ah ;~ 47D8:0343
cs=0x47d8;eip=0x000345; 	R(OUT(dx, al));	// 70796 out     dx, al ;~ 47D8:0345
cs=0x47d8;eip=0x000346; 	J(RETN(0));	// 70797 retn ;~ 47D8:0346
sub_566a7:
	// 70804 
cs=0x47d8;eip=0x000347; 	X(PUSH(dx));	// 70806 push    dx ;~ 47D8:0347
ret_47d8_348:
	// 8692 
cs=0x47d8;eip=0x000348; 	T(MOV(dx, *(dw*)(raddr(ds,0x285))));	// 70807 mov     dx, ds:285h ;~ 47D8:0348
cs=0x47d8;eip=0x00034c; 	T(ADD(dl, 0x0E));	// 70808 add     dl, 0Eh ;~ 47D8:034C
cs=0x47d8;eip=0x00034f; 	T(XOR(al, al));	// 70809 xor     al, al ;~ 47D8:034F
loc_566b1:
	// 8693 
cs=0x47d8;eip=0x000351; 	R(IN(al, dx));	// 70812 in      al, dx ;~ 47D8:0351
cs=0x47d8;eip=0x000352; 	T(OR(al, al));	// 70813 or      al, al ;~ 47D8:0352
cs=0x47d8;eip=0x000354; 	J(JNS(loc_566b1));	// 70814 jns     short loc_566B1 ;~ 47D8:0354
cs=0x47d8;eip=0x000356; 	T(SUB(dl, 4));	// 70815 sub     dl, 4 ;~ 47D8:0356
cs=0x47d8;eip=0x000359; 	R(IN(al, dx));	// 70816 in      al, dx ;~ 47D8:0359
cs=0x47d8;eip=0x00035a; 	X(POP(dx));	// 70817 pop     dx ;~ 47D8:035A
cs=0x47d8;eip=0x00035b; 	J(RETN(0));	// 70818 retn ;~ 47D8:035B
sub_566bc:
	// 70825 
cs=0x47d8;eip=0x00035c; 	T(MOV(dx, *(dw*)(raddr(ds,0x285))));	// 70826 mov     dx, ds:285h ;~ 47D8:035C
ret_47d8_360:
	// 8694 
cs=0x47d8;eip=0x000360; 	T(ADD(dl, 6));	// 70827 add     dl, 6 ;~ 47D8:0360
cs=0x47d8;eip=0x000363; 	T(MOV(al, 1));	// 70828 mov     al, 1 ;~ 47D8:0363
cs=0x47d8;eip=0x000365; 	R(OUT(dx, al));	// 70829 out     dx, al ;~ 47D8:0365
cs=0x47d8;eip=0x000366; 	R(IN(al, dx));	// 70830 in      al, dx ;~ 47D8:0366
cs=0x47d8;eip=0x000367; 	R(IN(al, dx));	// 70831 in      al, dx ;~ 47D8:0367
cs=0x47d8;eip=0x000368; 	R(IN(al, dx));	// 70832 in      al, dx ;~ 47D8:0368
cs=0x47d8;eip=0x000369; 	R(IN(al, dx));	// 70833 in      al, dx ;~ 47D8:0369
cs=0x47d8;eip=0x00036a; 	T(XOR(al, al));	// 70834 xor     al, al ;~ 47D8:036A
cs=0x47d8;eip=0x00036c; 	R(OUT(dx, al));	// 70835 out     dx, al ;~ 47D8:036C
cs=0x47d8;eip=0x00036d; 	T(MOV(bl, 0x10));	// 70836 mov     bl, 10h ;~ 47D8:036D
loc_566cf:
	// 8695 
cs=0x47d8;eip=0x00036f; 	J(CALL(sub_56675,0));	// 70839 call    sub_56675 ;~ 47D8:036F
cs=0x47d8;eip=0x000372; 	T(CMP(al, 0x0AA));	// 70840 cmp     al, 0AAh ; 'ª' ;~ 47D8:0372
cs=0x47d8;eip=0x000374; 	J(JZ(loc_566e0));	// 70841 jz      short loc_566E0 ;~ 47D8:0374
cs=0x47d8;eip=0x000376; 	T(DEC(bl));	// 70842 dec     bl ;~ 47D8:0376
cs=0x47d8;eip=0x000378; 	J(JNZ(loc_566cf));	// 70843 jnz     short loc_566CF ;~ 47D8:0378
cs=0x47d8;eip=0x00037a; 	T(MOV(ax, 2));	// 70844 mov     ax, 2 ;~ 47D8:037A
cs=0x47d8;eip=0x00037d; 	J(JMP(loc_566e2));	// 70845 jmp     short loc_566E2 ;~ 47D8:037D
loc_566e0:
	// 8696 
cs=0x47d8;eip=0x000380; 	T(XOR(ax, ax));	// 70851 xor     ax, ax ;~ 47D8:0380
loc_566e2:
	// 8697 
cs=0x47d8;eip=0x000382; 	T(OR(ax, ax));	// 70854 or      ax, ax ;~ 47D8:0382
cs=0x47d8;eip=0x000384; 	J(RETN(0));	// 70855 retn ;~ 47D8:0384
sub_566e5:
	// 70862 
cs=0x47d8;eip=0x000385; 	T(MOV(bx, 2));	// 70863 mov     bx, 2 ;~ 47D8:0385
ret_47d8_388:
	// 8698 
cs=0x47d8;eip=0x000388; 	T(MOV(al, 0x0E0));	// 70864 mov     al, 0E0h ; 'à' ;~ 47D8:0388
cs=0x47d8;eip=0x00038a; 	T(MOV(dx, *(dw*)(raddr(ds,0x285))));	// 70865 mov     dx, ds:285h ;~ 47D8:038A
cs=0x47d8;eip=0x00038e; 	T(ADD(dl, 0x0C));	// 70866 add     dl, 0Ch ;~ 47D8:038E
cs=0x47d8;eip=0x000391; 	J(CALL(sub_5665f,0));	// 70867 call    sub_5665F ;~ 47D8:0391
cs=0x47d8;eip=0x000394; 	J(JC(loc_56708));	// 70868 jb      short loc_56708 ;~ 47D8:0394
cs=0x47d8;eip=0x000396; 	T(MOV(al, 0x0AA));	// 70869 mov     al, 0AAh ; 'ª' ;~ 47D8:0396
cs=0x47d8;eip=0x000398; 	J(CALL(sub_5665f,0));	// 70870 call    sub_5665F ;~ 47D8:0398
cs=0x47d8;eip=0x00039b; 	J(JC(loc_56708));	// 70871 jb      short loc_56708 ;~ 47D8:039B
cs=0x47d8;eip=0x00039d; 	J(CALL(sub_56675,0));	// 70872 call    sub_56675 ;~ 47D8:039D
cs=0x47d8;eip=0x0003a0; 	J(JC(loc_56708));	// 70873 jb      short loc_56708 ;~ 47D8:03A0
cs=0x47d8;eip=0x0003a2; 	T(CMP(al, 0x55));	// 70874 cmp     al, 55h ; 'U' ;~ 47D8:03A2
cs=0x47d8;eip=0x0003a4; 	J(JNZ(loc_56708));	// 70875 jnz     short loc_56708 ;~ 47D8:03A4
cs=0x47d8;eip=0x0003a6; 	T(XOR(bx, bx));	// 70876 xor     bx, bx ;~ 47D8:03A6
loc_56708:
	// 8699 
cs=0x47d8;eip=0x0003a8; 	T(MOV(ax, bx));	// 70880 mov     ax, bx ;~ 47D8:03A8
cs=0x47d8;eip=0x0003aa; 	T(OR(ax, ax));	// 70881 or      ax, ax ;~ 47D8:03AA
cs=0x47d8;eip=0x0003ac; 	J(RETN(0));	// 70882 retn ;~ 47D8:03AC
sub_56731:
	// 70926 
cs=0x47d8;eip=0x0003d1; 	X(MOV(*(raddr(ds,0x28E)), 0));	// 70927 mov     byte ptr ds:28Eh, 0 ;~ 47D8:03D1
ret_47d8_3d6:
	// 8700 
cs=0x47d8;eip=0x0003d6; 	T(MOV(ax, 0x3AD));	// 70928 mov     ax, 3ADh ;~ 47D8:03D6
cs=0x47d8;eip=0x0003d9; 	J(CALL(sub_56838,0));	// 70929 call    sub_56838 ;~ 47D8:03D9
cs=0x47d8;eip=0x0003dc; 	T(MOV(dx, cs));	// 70930 mov     dx, cs ;~ 47D8:03DC
cs=0x47d8;eip=0x0003de; 	T(MOV(ax, 0x291));	// 70931 mov     ax, 291h ;~ 47D8:03DE
cs=0x47d8;eip=0x0003e1; 	J(CALL(sub_567ea,0));	// 70932 call    sub_567EA ;~ 47D8:03E1
cs=0x47d8;eip=0x0003e4; 	T(XOR(cx, cx));	// 70933 xor     cx, cx ;~ 47D8:03E4
cs=0x47d8;eip=0x0003e6; 	T(MOV(dh, 0x48));	// 70934 mov     dh, 48h ; 'H' ;~ 47D8:03E6
cs=0x47d8;eip=0x0003e8; 	J(CALL(sub_567b0,0));	// 70935 call    sub_567B0 ;~ 47D8:03E8
cs=0x47d8;eip=0x0003eb; 	T(MOV(al, 0x40));	// 70936 mov     al, 40h ; '@' ;~ 47D8:03EB
cs=0x47d8;eip=0x0003ed; 	J(CALL(sub_56693,0));	// 70937 call    sub_56693 ;~ 47D8:03ED
cs=0x47d8;eip=0x0003f0; 	T(MOV(al, 0x64));	// 70938 mov     al, 64h ; 'd' ;~ 47D8:03F0
cs=0x47d8;eip=0x0003f2; 	J(CALL(sub_5669a,0));	// 70939 call    sub_5669A ;~ 47D8:03F2
cs=0x47d8;eip=0x0003f5; 	T(MOV(al, 0x14));	// 70940 mov     al, 14h ;~ 47D8:03F5
cs=0x47d8;eip=0x0003f7; 	J(CALL(sub_5669a,0));	// 70941 call    sub_5669A ;~ 47D8:03F7
cs=0x47d8;eip=0x0003fa; 	T(XOR(al, al));	// 70942 xor     al, al ;~ 47D8:03FA
cs=0x47d8;eip=0x0003fc; 	J(CALL(sub_5669a,0));	// 70943 call    sub_5669A ;~ 47D8:03FC
cs=0x47d8;eip=0x0003ff; 	T(XOR(al, al));	// 70944 xor     al, al ;~ 47D8:03FF
cs=0x47d8;eip=0x000401; 	J(CALL(sub_5669a,0));	// 70945 call    sub_5669A ;~ 47D8:0401
cs=0x47d8;eip=0x000404; 	T(XOR(ax, ax));	// 70946 xor     ax, ax ;~ 47D8:0404
cs=0x47d8;eip=0x000406; 	T(MOV(cx, 0x0FFFF));	// 70947 mov     cx, 0FFFFh ;~ 47D8:0406
loc_56769:
	// 8701 
cs=0x47d8;eip=0x000409; 	T(CMP(*(raddr(ds,0x28E)), 0));	// 70950 cmp     byte ptr ds:28Eh, 0 ;~ 47D8:0409
cs=0x47d8;eip=0x00040e; 	J(JNZ(loc_56774));	// 70951 jnz     short loc_56774 ;~ 47D8:040E
cs=0x47d8;eip=0x000410; 	J(LOOP(loc_56769));	// 70952 loop    loc_56769 ;~ 47D8:0410
cs=0x47d8;eip=0x000412; 	T(MOV(al, 3));	// 70953 mov     al, 3 ;~ 47D8:0412
loc_56774:
	// 8702 
cs=0x47d8;eip=0x000414; 	X(PUSH(ax));	// 70956 push    ax ;~ 47D8:0414
cs=0x47d8;eip=0x000415; 	J(CALL(sub_56884,0));	// 70957 call    sub_56884 ;~ 47D8:0415
cs=0x47d8;eip=0x000418; 	X(POP(ax));	// 70958 pop     ax ;~ 47D8:0418
cs=0x47d8;eip=0x000419; 	T(OR(ax, ax));	// 70959 or      ax, ax ;~ 47D8:0419
cs=0x47d8;eip=0x00041b; 	J(RETN(0));	// 70960 retn ;~ 47D8:041B
sub_5677c:
	// 70967 
cs=0x47d8;eip=0x00041c; 	T(MOV(al, 0x0E1));	// 70968 mov     al, 0E1h ; 'á' ;~ 47D8:041C
ret_47d8_41e:
	// 8703 
cs=0x47d8;eip=0x00041e; 	J(CALL(sub_5669a,0));	// 70969 call    sub_5669A ;~ 47D8:041E
cs=0x47d8;eip=0x000421; 	J(CALL(sub_566a7,0));	// 70970 call    sub_566A7 ;~ 47D8:0421
cs=0x47d8;eip=0x000424; 	T(MOV(ah, al));	// 70971 mov     ah, al ;~ 47D8:0424
cs=0x47d8;eip=0x000426; 	J(CALL(sub_566a7,0));	// 70972 call    sub_566A7 ;~ 47D8:0426
cs=0x47d8;eip=0x000429; 	T(CMP(ax, 0x103));	// 70973 cmp     ax, 103h ;~ 47D8:0429
cs=0x47d8;eip=0x00042c; 	T(MOV(ax, 0));	// 70974 mov     ax, 0 ;~ 47D8:042C
cs=0x47d8;eip=0x00042f; 	T(ADC(al, ah));	// 70975 adc     al, ah ;~ 47D8:042F
cs=0x47d8;eip=0x000431; 	J(RETN(0));	// 70976 retn ;~ 47D8:0431
sub_56792:
	// 70983 
cs=0x47d8;eip=0x000432; 	X(PUSHF);	// 70985 pushf ;~ 47D8:0432
ret_47d8_433:
	// 8704 
cs=0x47d8;eip=0x000433; 	T(MOV(cx, 0x64));	// 70986 mov     cx, 64h ; 'd' ;~ 47D8:0433
cs=0x47d8;eip=0x000436; 	T(MOV(dx, *(dw*)(raddr(ds,0x285))));	// 70987 mov     dx, ds:285h ;~ 47D8:0436
cs=0x47d8;eip=0x00043a; 	T(ADD(dl, 0x0C));	// 70988 add     dl, 0Ch ;~ 47D8:043A
loc_5679d:
	// 8705 
cs=0x47d8;eip=0x00043d; 	T(STI);	// 70991 sti ;~ 47D8:043D
cs=0x47d8;eip=0x00043e; 	T(CMP(*(raddr(ds,0x292)), 0));	// 70992 cmp     byte ptr ds:292h, 0 ;~ 47D8:043E
cs=0x47d8;eip=0x000443; 	J(JZ(loc_567ae));	// 70993 jz      short loc_567AE ;~ 47D8:0443
cs=0x47d8;eip=0x000445; 	T(CLI);	// 70994 cli ;~ 47D8:0445
cs=0x47d8;eip=0x000446; 	R(IN(al, dx));	// 70995 in      al, dx ;~ 47D8:0446
cs=0x47d8;eip=0x000447; 	T(TEST(al, 0x80));	// 70996 test    al, 80h ;~ 47D8:0447
cs=0x47d8;eip=0x000449; 	J(LOOPNE(loc_5679d));	// 70997 loopne  loc_5679D ;~ 47D8:0449
cs=0x47d8;eip=0x00044b; 	T(MOV(al, 0x0D0));	// 70998 mov     al, 0D0h ; 'Ğ' ;~ 47D8:044B
cs=0x47d8;eip=0x00044d; 	R(OUT(dx, al));	// 70999 out     dx, al ;~ 47D8:044D
loc_567ae:
	// 8706 
cs=0x47d8;eip=0x00044e; 	X(POPF);	// 71002 popf ;~ 47D8:044E
cs=0x47d8;eip=0x00044f; 	J(RETN(0));	// 71003 retn ;~ 47D8:044F
sub_567b0:
	// 71010 
cs=0x47d8;eip=0x000450; 	X(PUSH(bx));	// 71012 push    bx ;~ 47D8:0450
ret_47d8_451:
	// 8707 
cs=0x47d8;eip=0x000451; 	T(MOV(bx, ax));	// 71013 mov     bx, ax ;~ 47D8:0451
cs=0x47d8;eip=0x000453; 	T(MOV(ah, dl));	// 71014 mov     ah, dl ;~ 47D8:0453
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x000455; 	T(MOV(al, *(&byte_565e8)));	// 71015 mov     al, cs:byte_565E8 ;~ 47D8:0455
cs=0x47d8;eip=0x000459; 	T(MOV(dl, al));	// 71016 mov     dl, al ;~ 47D8:0459
cs=0x47d8;eip=0x00045b; 	T(OR(al, 4));	// 71017 or      al, 4 ;~ 47D8:045B
cs=0x47d8;eip=0x00045d; 	R(OUT(0x0A, al));	// 71018 out     0Ah, al         ; DMA controller, 8237A-5. ;~ 47D8:045D
cs=0x47d8;eip=0x00045f; 	T(XOR(al, al));	// 71022 xor     al, al ;~ 47D8:045F
cs=0x47d8;eip=0x000461; 	R(OUT(0x0C, al));	// 71023 out     0Ch, al         ; DMA controller, 8237A-5. ;~ 47D8:0461
cs=0x47d8;eip=0x000463; 	T(MOV(al, dh));	// 71025 mov     al, dh ;~ 47D8:0463
cs=0x47d8;eip=0x000465; 	T(OR(al, dl));	// 71026 or      al, dl ;~ 47D8:0465
cs=0x47d8;eip=0x000467; 	R(OUT(0x0B, al));	// 71027 out     0Bh, al         ; DMA 8237A-5. mode register bits: ;~ 47D8:0467
cs=0x47d8;eip=0x000469; 	T(XOR(dh, dh));	// 71033 xor     dh, dh ;~ 47D8:0469
cs=0x47d8;eip=0x00046b; 	T(SHL(dx, 1));	// 71034 shl     dx, 1 ;~ 47D8:046B
cs=0x47d8;eip=0x00046d; 	T(MOV(al, bl));	// 71035 mov     al, bl ;~ 47D8:046D
cs=0x47d8;eip=0x00046f; 	R(OUT(dx, al));	// 71036 out     dx, al          ; DMA controller, 8237A-5. ;~ 47D8:046F
cs=0x47d8;eip=0x000470; 	T(MOV(al, bh));	// 71039 mov     al, bh ;~ 47D8:0470
cs=0x47d8;eip=0x000472; 	R(OUT(dx, al));	// 71040 out     dx, al          ; DMA controller, 8237A-5. ;~ 47D8:0472
cs=0x47d8;eip=0x000473; 	T(MOV(al, cl));	// 71043 mov     al, cl ;~ 47D8:0473
cs=0x47d8;eip=0x000475; 	T(INC(dx));	// 71044 inc     dx ;~ 47D8:0475
cs=0x47d8;eip=0x000476; 	R(OUT(dx, al));	// 71045 out     dx, al          ; DMA controller, 8237A-5. ;~ 47D8:0476
cs=0x47d8;eip=0x000477; 	T(MOV(al, ch));	// 71047 mov     al, ch ;~ 47D8:0477
cs=0x47d8;eip=0x000479; 	R(OUT(dx, al));	// 71048 out     dx, al          ; DMA controller, 8237A-5. ;~ 47D8:0479
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x00047a; 	T(MOV(dl, *(&byte_565e9)));	// 71050 mov     dl, cs:byte_565E9 ;~ 47D8:047A
cs=0x47d8;eip=0x00047f; 	T(MOV(al, ah));	// 71051 mov     al, ah ;~ 47D8:047F
cs=0x47d8;eip=0x000481; 	R(OUT(dx, al));	// 71052 out     dx, al          ; DMA page register 74LS612: ;~ 47D8:0481
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x000482; 	T(MOV(al, *(&byte_565e8)));	// 71054 mov     al, cs:byte_565E8 ;~ 47D8:0482
cs=0x47d8;eip=0x000486; 	R(OUT(0x0A, al));	// 71055 out     0Ah, al         ; DMA controller, 8237A-5. ;~ 47D8:0486
cs=0x47d8;eip=0x000488; 	X(POP(bx));	// 71059 pop     bx ;~ 47D8:0488
cs=0x47d8;eip=0x000489; 	J(RETN(0));	// 71060 retn ;~ 47D8:0489
sub_567ea:
	// 71067 
cs=0x47d8;eip=0x00048a; 	X(PUSH(cx));	// 71069 push    cx ;~ 47D8:048A
ret_47d8_48b:
	// 8708 
cs=0x47d8;eip=0x00048b; 	T(MOV(cl, 4));	// 71070 mov     cl, 4 ;~ 47D8:048B
cs=0x47d8;eip=0x00048d; 	T(ROL(dx, cl));	// 71071 rol     dx, cl ;~ 47D8:048D
cs=0x47d8;eip=0x00048f; 	T(MOV(cx, dx));	// 71072 mov     cx, dx ;~ 47D8:048F
cs=0x47d8;eip=0x000491; 	T(AND(dx, 0x0F));	// 71073 and     dx, 0Fh ;~ 47D8:0491
cs=0x47d8;eip=0x000494; 	T(AND(cx, 0x0FFF0));	// 71074 and     cx, 0FFF0h ;~ 47D8:0494
cs=0x47d8;eip=0x000497; 	T(ADD(ax, cx));	// 71075 add     ax, cx ;~ 47D8:0497
cs=0x47d8;eip=0x000499; 	T(ADC(dx, 0));	// 71076 adc     dx, 0 ;~ 47D8:0499
cs=0x47d8;eip=0x00049c; 	X(POP(cx));	// 71077 pop     cx ;~ 47D8:049C
cs=0x47d8;eip=0x00049d; 	J(RETN(0));	// 71078 retn ;~ 47D8:049D
sub_567fe:
	// 71085 
cs=0x47d8;eip=0x00049e; 	T(MOV(dx, *(dw*)(raddr(ds,0x295))));	// 71086 mov     dx, ds:295h ;~ 47D8:049E
ret_47d8_4a2:
	// 8709 
cs=0x47d8;eip=0x0004a2; 	T(ADD(ax, *(dw*)(raddr(ds,0x293))));	// 71087 add     ax, ds:293h ;~ 47D8:04A2
cs=0x47d8;eip=0x0004a6; 	J(JNC(locret_5680b));	// 71088 jnb     short locret_5680B ;~ 47D8:04A6
cs=0x47d8;eip=0x0004a8; 	T(ADD(dh, 0x10));	// 71089 add     dh, 10h ;~ 47D8:04A8
locret_5680b:
	// 8710 
cs=0x47d8;eip=0x0004ab; 	J(RETN(0));	// 71092 retn ;~ 47D8:04AB
sub_5680c:
	// 71099 
cs=0x47d8;eip=0x0004ac; 	X(PUSH(es));	// 71100 push    es ;~ 47D8:04AC
ret_47d8_4ad:
	// 8711 
cs=0x47d8;eip=0x0004ad; 	X(PUSH(di));	// 71101 push    di ;~ 47D8:04AD
cs=0x47d8;eip=0x0004ae; 	T(LES(di, *(dw*)(raddr(ds,0x293))));	// 71102 les     di, ds:293h ;~ 47D8:04AE
cs=0x47d8;eip=0x0004b2; 	T(MOV(ax, *(dw*)(raddr(es,di+1))));	// 71103 mov     ax, es:[di+1] ;~ 47D8:04B2
cs=0x47d8;eip=0x0004b6; 	T(XOR(dx, dx));	// 71104 xor     dx, dx ;~ 47D8:04B6
cs=0x47d8;eip=0x0004b8; 	T(MOV(dl, *(raddr(es,di+3))));	// 71105 mov     dl, es:[di+3] ;~ 47D8:04B8
cs=0x47d8;eip=0x0004bc; 	X(POP(di));	// 71106 pop     di ;~ 47D8:04BC
cs=0x47d8;eip=0x0004bd; 	X(POP(es));	// 71107 pop     es ;~ 47D8:04BD
cs=0x47d8;eip=0x0004be; 	J(RETN(0));	// 71108 retn ;~ 47D8:04BE
sub_5681f:
	// 71115 
cs=0x47d8;eip=0x0004bf; 	T(MOV(al, *(raddr(ds,0x287))));	// 71117 mov     al, ds:287h ;~ 47D8:04BF
ret_47d8_4c2:
	// 8712 
cs=0x47d8;eip=0x0004c2; 	T(ADD(al, 8));	// 71118 add     al, 8 ;~ 47D8:04C2
cs=0x47d8;eip=0x0004c4; 	T(CMP(al, 0x10));	// 71119 cmp     al, 10h ;~ 47D8:04C4
cs=0x47d8;eip=0x0004c6; 	J(JC(loc_5682a));	// 71120 jb      short loc_5682A ;~ 47D8:04C6
cs=0x47d8;eip=0x0004c8; 	T(ADD(al, 0x60));	// 71121 add     al, 60h ; '`' ;~ 47D8:04C8
loc_5682a:
	// 8713 
cs=0x47d8;eip=0x0004ca; 	T(XOR(ah, ah));	// 71124 xor     ah, ah ;~ 47D8:04CA
cs=0x47d8;eip=0x0004cc; 	T(SHL(ax, 1));	// 71125 shl     ax, 1 ;~ 47D8:04CC
cs=0x47d8;eip=0x0004ce; 	T(SHL(ax, 1));	// 71126 shl     ax, 1 ;~ 47D8:04CE
cs=0x47d8;eip=0x0004d0; 	T(MOV(bx, ax));	// 71127 mov     bx, ax ;~ 47D8:04D0
cs=0x47d8;eip=0x0004d2; 	T(XOR(ax, ax));	// 71128 xor     ax, ax ;~ 47D8:04D2
cs=0x47d8;eip=0x0004d4; 	T(MOV(es, ax));	// 71129 mov     es, ax ;~ 47D8:04D4
cs=0x47d8;eip=0x0004d6; 	T(CLI);	// 71131 cli ;~ 47D8:04D6
cs=0x47d8;eip=0x0004d7; 	J(RETN(0));	// 71132 retn ;~ 47D8:04D7
sub_56838:
	// 71139 
cs=0x47d8;eip=0x0004d8; 	X(PUSHF);	// 71141 pushf ;~ 47D8:04D8
ret_47d8_4d9:
	// 8714 
cs=0x47d8;eip=0x0004d9; 	X(PUSH(bx));	// 71142 push    bx ;~ 47D8:04D9
cs=0x47d8;eip=0x0004da; 	X(PUSH(cx));	// 71143 push    cx ;~ 47D8:04DA
cs=0x47d8;eip=0x0004db; 	X(PUSH(dx));	// 71144 push    dx ;~ 47D8:04DB
cs=0x47d8;eip=0x0004dc; 	T(MOV(dx, ax));	// 71145 mov     dx, ax ;~ 47D8:04DC
cs=0x47d8;eip=0x0004de; 	X(PUSH(es));	// 71146 push    es ;~ 47D8:04DE
cs=0x47d8;eip=0x0004df; 	J(CALL(sub_5681f,0));	// 71147 call    sub_5681F ;~ 47D8:04DF
cs=0x47d8;eip=0x0004e2; 	T(MOV(ax, cs));	// 71148 mov     ax, cs ;~ 47D8:04E2
cs=0x47d8;eip=0x0004e4; 	X(XCHG(dx, *(dw*)(raddr(es,bx))));	// 71149 xchg    dx, es:[bx] ;~ 47D8:04E4
cs=0x47d8;eip=0x0004e7; 	X(MOV(*(dw*)(raddr(ds,0x297)), dx));	// 71150 mov     ds:297h, dx ;~ 47D8:04E7
cs=0x47d8;eip=0x0004eb; 	X(XCHG(ax, *(dw*)(raddr(es,bx+2))));	// 71151 xchg    ax, es:[bx+2] ;~ 47D8:04EB
cs=0x47d8;eip=0x0004ef; 	X(MOV(*(dw*)(raddr(ds,0x299)), ax));	// 71152 mov     ds:299h, ax ;~ 47D8:04EF
cs=0x47d8;eip=0x0004f2; 	X(POP(es));	// 71153 pop     es ;~ 47D8:04F2
cs=0x47d8;eip=0x0004f3; 	T(MOV(cl, *(raddr(ds,0x287))));	// 71155 mov     cl, ds:287h ;~ 47D8:04F3
cs=0x47d8;eip=0x0004f7; 	T(CMP(cl, 8));	// 71156 cmp     cl, 8 ;~ 47D8:04F7
cs=0x47d8;eip=0x0004fa; 	J(JC(loc_56870));	// 71157 jb      short loc_56870 ;~ 47D8:04FA
cs=0x47d8;eip=0x0004fc; 	T(SUB(cl, 8));	// 71158 sub     cl, 8 ;~ 47D8:04FC
cs=0x47d8;eip=0x0004ff; 	T(MOV(ah, 1));	// 71159 mov     ah, 1 ;~ 47D8:04FF
cs=0x47d8;eip=0x000501; 	T(SHL(ah, cl));	// 71160 shl     ah, cl ;~ 47D8:0501
cs=0x47d8;eip=0x000503; 	T(NOT(ah));	// 71161 not     ah ;~ 47D8:0503
cs=0x47d8;eip=0x000505; 	R(IN(al, 0x0A1));	// 71162 in      al, 0A1h        ; Interrupt Controller #2, 8259A ;~ 47D8:0505
cs=0x47d8;eip=0x000507; 	X(MOV(*(raddr(ds,0x29C)), al));	// 71163 mov     ds:29Ch, al ;~ 47D8:0507
cs=0x47d8;eip=0x00050a; 	T(AND(al, ah));	// 71164 and     al, ah ;~ 47D8:050A
cs=0x47d8;eip=0x00050c; 	R(OUT(0x0A1, al));	// 71165 out     0A1h, al        ; Interrupt Controller #2, 8259A ;~ 47D8:050C
cs=0x47d8;eip=0x00050e; 	T(MOV(cl, 2));	// 71166 mov     cl, 2 ;~ 47D8:050E
loc_56870:
	// 8715 
cs=0x47d8;eip=0x000510; 	T(MOV(ah, 1));	// 71169 mov     ah, 1 ;~ 47D8:0510
cs=0x47d8;eip=0x000512; 	T(SHL(ah, cl));	// 71170 shl     ah, cl ;~ 47D8:0512
cs=0x47d8;eip=0x000514; 	T(NOT(ah));	// 71171 not     ah ;~ 47D8:0514
cs=0x47d8;eip=0x000516; 	R(IN(al, 0x21));	// 71172 in      al, 21h         ; Interrupt controller, 8259A. ;~ 47D8:0516
cs=0x47d8;eip=0x000518; 	X(MOV(*(raddr(ds,0x29B)), al));	// 71173 mov     ds:29Bh, al ;~ 47D8:0518
cs=0x47d8;eip=0x00051b; 	T(AND(al, ah));	// 71174 and     al, ah ;~ 47D8:051B
cs=0x47d8;eip=0x00051d; 	R(OUT(0x21, al));	// 71175 out     21h, al         ; Interrupt controller, 8259A. ;~ 47D8:051D
cs=0x47d8;eip=0x00051f; 	X(POP(dx));	// 71176 pop     dx ;~ 47D8:051F
cs=0x47d8;eip=0x000520; 	X(POP(cx));	// 71177 pop     cx ;~ 47D8:0520
cs=0x47d8;eip=0x000521; 	X(POP(bx));	// 71178 pop     bx ;~ 47D8:0521
cs=0x47d8;eip=0x000522; 	X(POPF);	// 71179 popf ;~ 47D8:0522
cs=0x47d8;eip=0x000523; 	J(RETN(0));	// 71180 retn ;~ 47D8:0523
sub_56884:
	// 71187 
cs=0x47d8;eip=0x000524; 	X(PUSHF);	// 71189 pushf ;~ 47D8:0524
ret_47d8_525:
	// 8716 
cs=0x47d8;eip=0x000525; 	X(PUSH(bx));	// 71190 push    bx ;~ 47D8:0525
cs=0x47d8;eip=0x000526; 	X(PUSH(es));	// 71191 push    es ;~ 47D8:0526
cs=0x47d8;eip=0x000527; 	J(CALL(sub_5681f,0));	// 71192 call    sub_5681F ;~ 47D8:0527
cs=0x47d8;eip=0x00052a; 	T(MOV(ax, *(dw*)(raddr(ds,0x297))));	// 71193 mov     ax, ds:297h ;~ 47D8:052A
cs=0x47d8;eip=0x00052d; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 71194 mov     es:[bx], ax ;~ 47D8:052D
cs=0x47d8;eip=0x000530; 	T(MOV(ax, *(dw*)(raddr(ds,0x299))));	// 71195 mov     ax, ds:299h ;~ 47D8:0530
cs=0x47d8;eip=0x000533; 	X(MOV(*(dw*)(raddr(es,bx+2)), ax));	// 71196 mov     es:[bx+2], ax ;~ 47D8:0533
cs=0x47d8;eip=0x000537; 	X(POP(es));	// 71197 pop     es ;~ 47D8:0537
cs=0x47d8;eip=0x000538; 	T(CMP(*(raddr(ds,0x287)), 8));	// 71198 cmp     byte ptr ds:287h, 8 ;~ 47D8:0538
cs=0x47d8;eip=0x00053d; 	J(JC(loc_568a4));	// 71199 jb      short loc_568A4 ;~ 47D8:053D
cs=0x47d8;eip=0x00053f; 	T(MOV(al, *(raddr(ds,0x29C))));	// 71200 mov     al, ds:29Ch ;~ 47D8:053F
cs=0x47d8;eip=0x000542; 	R(OUT(0x0A1, al));	// 71201 out     0A1h, al        ; Interrupt Controller #2, 8259A ;~ 47D8:0542
loc_568a4:
	// 8717 
cs=0x47d8;eip=0x000544; 	T(MOV(al, *(raddr(ds,0x29B))));	// 71204 mov     al, ds:29Bh ;~ 47D8:0544
cs=0x47d8;eip=0x000547; 	R(OUT(0x21, al));	// 71205 out     21h, al         ; Interrupt controller, 8259A. ;~ 47D8:0547
cs=0x47d8;eip=0x000549; 	X(POP(bx));	// 71206 pop     bx ;~ 47D8:0549
cs=0x47d8;eip=0x00054a; 	X(POPF);	// 71207 popf ;~ 47D8:054A
cs=0x47d8;eip=0x00054b; 	J(RETN(0));	// 71208 retn ;~ 47D8:054B
sub_568ac:
	// 71215 
cs=0x47d8;eip=0x00054c; 	X(PUSH(ds));	// 71216 push    ds ;~ 47D8:054C
ret_47d8_54d:
	// 8718 
cs=0x47d8;eip=0x00054d; 	X(PUSH(si));	// 71217 push    si ;~ 47D8:054D
cs=0x47d8;eip=0x00054e; 	T(LDS(si, *(dw*)(raddr(ds,0x293))));	// 71218 lds     si, ds:293h ;~ 47D8:054E
cs=0x47d8;eip=0x000552; 	T(LODSB);	// 71219 lodsb ;~ 47D8:0552
cs=0x47d8;eip=0x000553; 	X(POP(si));	// 71220 pop     si ;~ 47D8:0553
cs=0x47d8;eip=0x000554; 	X(POP(ds));	// 71221 pop     ds ;~ 47D8:0554
cs=0x47d8;eip=0x000555; 	J(RETN(0));	// 71222 retn ;~ 47D8:0555
sub_568b6:
	// 71229 
cs=0x47d8;eip=0x000556; 	T(MOV(cx, ax));	// 71231 mov     cx, ax ;~ 47D8:0556
ret_47d8_558:
	// 8719 
cs=0x47d8;eip=0x000558; 	J(CALL(sub_567fe,0));	// 71232 call    sub_567FE ;~ 47D8:0558
cs=0x47d8;eip=0x00055b; 	J(CALL(sub_567ea,0));	// 71233 call    sub_567EA ;~ 47D8:055B
cs=0x47d8;eip=0x00055e; 	X(MOV(*(raddr(ds,0x29D)), dl));	// 71234 mov     ds:29Dh, dl ;~ 47D8:055E
cs=0x47d8;eip=0x000562; 	X(MOV(*(dw*)(raddr(ds,0x29E)), ax));	// 71235 mov     ds:29Eh, ax ;~ 47D8:0562
cs=0x47d8;eip=0x000565; 	J(CALL(sub_5680c,0));	// 71236 call    sub_5680C ;~ 47D8:0565
cs=0x47d8;eip=0x000568; 	T(SUB(cx, 4));	// 71237 sub     cx, 4 ;~ 47D8:0568
cs=0x47d8;eip=0x00056b; 	T(SUB(ax, cx));	// 71238 sub     ax, cx ;~ 47D8:056B
cs=0x47d8;eip=0x00056d; 	T(SBB(dx, 0));	// 71239 sbb     dx, 0 ;~ 47D8:056D
cs=0x47d8;eip=0x000570; 	X(MOV(*(dw*)(raddr(ds,0x2A0)), ax));	// 71240 mov     ds:2A0h, ax ;~ 47D8:0570
cs=0x47d8;eip=0x000573; 	X(MOV(*(dw*)(raddr(ds,0x2A2)), dx));	// 71241 mov     ds:2A2h, dx ;~ 47D8:0573
cs=0x47d8;eip=0x000577; 	T(SUB(ax, 1));	// 71242 sub     ax, 1 ;~ 47D8:0577
cs=0x47d8;eip=0x00057a; 	T(SBB(dx, 0));	// 71243 sbb     dx, 0 ;~ 47D8:057A
cs=0x47d8;eip=0x00057d; 	T(ADD(ax, *(dw*)(raddr(ds,0x29E))));	// 71244 add     ax, ds:29Eh ;~ 47D8:057D
cs=0x47d8;eip=0x000581; 	T(ADC(dl, *(raddr(ds,0x29D))));	// 71245 adc     dl, ds:29Dh ;~ 47D8:0581
cs=0x47d8;eip=0x000585; 	X(MOV(*(dw*)(raddr(ds,0x2A4)), ax));	// 71246 mov     ds:2A4h, ax ;~ 47D8:0585
cs=0x47d8;eip=0x000588; 	T(SUB(dl, *(raddr(ds,0x29D))));	// 71247 sub     dl, ds:29Dh ;~ 47D8:0588
cs=0x47d8;eip=0x00058c; 	X(MOV(*(raddr(ds,0x2A6)), dl));	// 71248 mov     ds:2A6h, dl ;~ 47D8:058C
cs=0x47d8;eip=0x000590; 	J(RETN(0));	// 71249 retn ;~ 47D8:0590
seg003_591_proc:
	// 71253 
cs=0x47d8;eip=0x000591; 	X(PUSH(ds));	// 71253 push    ds ;~ 47D8:0591
ret_47d8_592:
	// 8720 
cs=0x47d8;eip=0x000592; 	X(PUSH(es));	// 71254 push    es ;~ 47D8:0592
cs=0x47d8;eip=0x000593; 	X(PUSH(ax));	// 71255 push    ax ;~ 47D8:0593
cs=0x47d8;eip=0x000594; 	X(PUSH(bx));	// 71256 push    bx ;~ 47D8:0594
cs=0x47d8;eip=0x000595; 	X(PUSH(cx));	// 71257 push    cx ;~ 47D8:0595
cs=0x47d8;eip=0x000596; 	X(PUSH(dx));	// 71258 push    dx ;~ 47D8:0596
cs=0x47d8;eip=0x000597; 	X(PUSH(si));	// 71259 push    si ;~ 47D8:0597
cs=0x47d8;eip=0x000598; 	X(PUSH(di));	// 71260 push    di ;~ 47D8:0598
cs=0x47d8;eip=0x000599; 	X(PUSH(bp));	// 71261 push    bp ;~ 47D8:0599
cs=0x47d8;eip=0x00059a; 	T(CLD);	// 71262 cld ;~ 47D8:059A
cs=0x47d8;eip=0x00059b; 	T(MOV(ax, cs));	// 71263 mov     ax, cs ;~ 47D8:059B
cs=0x47d8;eip=0x00059d; 	T(MOV(ds, ax));	// 71264 mov     ds, ax ;~ 47D8:059D
cs=0x47d8;eip=0x00059f; 	T(MOV(es, ax));	// 71266 mov     es, ax ;~ 47D8:059F
cs=0x47d8;eip=0x0005a1; 	T(MOV(al, 0x20));	// 71268 mov     al, 20h ; ' ' ;~ 47D8:05A1
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x0005a3; 	T(CMP(*(&byte_565e7), 8));	// 71269 cmp     cs:byte_565E7, 8 ;~ 47D8:05A3
cs=0x47d8;eip=0x0005a9; 	J(JC(loc_5690f));	// 71270 jb      short loc_5690F ;~ 47D8:05A9
cs=0x47d8;eip=0x0005ab; 	R(OUT(0x0A0, al));	// 71271 out     0A0h, al        ; PIC 2  same as 0020 for PIC 1 ;~ 47D8:05AB
cs=0x47d8;eip=0x0005ad; 		// 71272 jmp     short $+2 ;~ 47D8:05AD
loc_5690f:
	// 8721 
cs=0x47d8;eip=0x0005af; 	R(OUT(0x20, al));	// 71277 out     20h, al         ; Interrupt controller, 8259A. ;~ 47D8:05AF
cs=0x47d8;eip=0x0005b1; 	T(MOV(dx, word_565e5));	// 71278 mov     dx, word_565E5 ;~ 47D8:05B1
cs=0x47d8;eip=0x0005b5; 	T(ADD(dl, 0x0E));	// 71279 add     dl, 0Eh ;~ 47D8:05B5
cs=0x47d8;eip=0x0005b8; 	R(IN(al, dx));	// 71280 in      al, dx ;~ 47D8:05B8
cs=0x47d8;eip=0x0005b9; 	T(STI);	// 71281 sti ;~ 47D8:05B9
cs=0x47d8;eip=0x0005ba; 	T(MOV(ax, word_56600));	// 71282 mov     ax, word_56600 ;~ 47D8:05BA
cs=0x47d8;eip=0x0005bd; 	T(OR(ax, word_56602));	// 71283 or      ax, word_56602 ;~ 47D8:05BD
cs=0x47d8;eip=0x0005c1; 	J(JNZ(loc_56935));	// 71284 jnz     short loc_56935 ;~ 47D8:05C1
cs=0x47d8;eip=0x0005c3; 	J(CALL(sub_569d7,0));	// 71285 call    sub_569D7 ;~ 47D8:05C3
cs=0x47d8;eip=0x0005c6; 	J(CALL(sub_569bf,0));	// 71286 call    sub_569BF ;~ 47D8:05C6
cs=0x47d8;eip=0x0005c9; 	T(CMP(byte_56607, 0));	// 71287 cmp     byte_56607, 0 ;~ 47D8:05C9
cs=0x47d8;eip=0x0005ce; 	J(JZ(loc_56938));	// 71288 jz      short loc_56938 ;~ 47D8:05CE
cs=0x47d8;eip=0x0005d0; 	J(CALL(sub_569a0,0));	// 71289 call    sub_569A0 ;~ 47D8:05D0
cs=0x47d8;eip=0x0005d3; 	J(JMP(loc_56938));	// 71290 jmp     short loc_56938 ;~ 47D8:05D3
loc_56935:
	// 8722 
cs=0x47d8;eip=0x0005d5; 	J(CALL(sub_56942,0));	// 71294 call    sub_56942 ;~ 47D8:05D5
loc_56938:
	// 8723 
cs=0x47d8;eip=0x0005d8; 	X(POP(bp));	// 71298 pop     bp ;~ 47D8:05D8
cs=0x47d8;eip=0x0005d9; 	X(POP(di));	// 71299 pop     di ;~ 47D8:05D9
cs=0x47d8;eip=0x0005da; 	X(POP(si));	// 71300 pop     si ;~ 47D8:05DA
cs=0x47d8;eip=0x0005db; 	X(POP(dx));	// 71301 pop     dx ;~ 47D8:05DB
cs=0x47d8;eip=0x0005dc; 	X(POP(cx));	// 71302 pop     cx ;~ 47D8:05DC
cs=0x47d8;eip=0x0005dd; 	X(POP(bx));	// 71303 pop     bx ;~ 47D8:05DD
cs=0x47d8;eip=0x0005de; 	X(POP(ax));	// 71304 pop     ax ;~ 47D8:05DE
cs=0x47d8;eip=0x0005df; 	X(POP(es));	// 71305 pop     es ;~ 47D8:05DF
cs=0x47d8;eip=0x0005e0; 	X(POP(ds));	// 71307 pop     ds ;~ 47D8:05E0
cs=0x47d8;eip=0x0005e1; 	R(IRET);	// 71309 iret ;~ 47D8:05E1
sub_56942:
	// 71314 
cs=0x47d8;eip=0x0005e2; 	T(MOV(cx, 0x0FFFF));	// 71316 mov     cx, 0FFFFh ;~ 47D8:05E2
ret_47d8_5e5:
	// 8724 
cs=0x47d8;eip=0x0005e5; 	T(CMP(*(raddr(ds,0x2A6)), 0));	// 71317 cmp     byte ptr ds:2A6h, 0 ;~ 47D8:05E5
cs=0x47d8;eip=0x0005ea; 	J(JNZ(loc_56954));	// 71318 jnz     short loc_56954 ;~ 47D8:05EA
cs=0x47d8;eip=0x0005ec; 	X(INC(*(raddr(ds,0x2A6))));	// 71319 inc     byte ptr ds:2A6h ;~ 47D8:05EC
cs=0x47d8;eip=0x0005f0; 	T(MOV(cx, *(dw*)(raddr(ds,0x2A4))));	// 71320 mov     cx, ds:2A4h ;~ 47D8:05F0
loc_56954:
	// 8725 
cs=0x47d8;eip=0x0005f4; 	T(SUB(cx, *(dw*)(raddr(ds,0x29E))));	// 71323 sub     cx, ds:29Eh ;~ 47D8:05F4
cs=0x47d8;eip=0x0005f8; 	X(MOV(*(dw*)(raddr(ds,0x2A8)), cx));	// 71324 mov     ds:2A8h, cx ;~ 47D8:05F8
cs=0x47d8;eip=0x0005fc; 	T(INC(cx));	// 71325 inc     cx ;~ 47D8:05FC
cs=0x47d8;eip=0x0005fd; 	J(JZ(loc_5696a));	// 71326 jz      short loc_5696A ;~ 47D8:05FD
cs=0x47d8;eip=0x0005ff; 	X(SUB(*(dw*)(raddr(ds,0x2A0)), cx));	// 71327 sub     ds:2A0h, cx ;~ 47D8:05FF
cs=0x47d8;eip=0x000603; 	X(SBB(*(dw*)(raddr(ds,0x2A2)), 0));	// 71328 sbb     word ptr ds:2A2h, 0 ;~ 47D8:0603
cs=0x47d8;eip=0x000608; 	J(JMP(loc_5696e));	// 71329 jmp     short loc_5696E ;~ 47D8:0608
loc_5696a:
	// 8726 
cs=0x47d8;eip=0x00060a; 	X(DEC(*(dw*)(raddr(ds,0x2A2))));	// 71333 dec     word ptr ds:2A2h ;~ 47D8:060A
loc_5696e:
	// 8727 
cs=0x47d8;eip=0x00060e; 	T(MOV(dh, 0x48));	// 71336 mov     dh, 48h ; 'H' ;~ 47D8:060E
cs=0x47d8;eip=0x000610; 	T(MOV(dl, *(raddr(ds,0x29D))));	// 71337 mov     dl, ds:29Dh ;~ 47D8:0610
cs=0x47d8;eip=0x000614; 	T(MOV(ax, *(dw*)(raddr(ds,0x29E))));	// 71338 mov     ax, ds:29Eh ;~ 47D8:0614
cs=0x47d8;eip=0x000617; 	T(MOV(cx, *(dw*)(raddr(ds,0x2A8))));	// 71339 mov     cx, ds:2A8h ;~ 47D8:0617
cs=0x47d8;eip=0x00061b; 	J(CALL(sub_567b0,0));	// 71340 call    sub_567B0 ;~ 47D8:061B
cs=0x47d8;eip=0x00061e; 	X(DEC(*(raddr(ds,0x2A6))));	// 71341 dec     byte ptr ds:2A6h ;~ 47D8:061E
cs=0x47d8;eip=0x000622; 	X(INC(*(raddr(ds,0x29D))));	// 71342 inc     byte ptr ds:29Dh ;~ 47D8:0622
cs=0x47d8;eip=0x000626; 	X(MOV(*(dw*)(raddr(ds,0x29E)), 0));	// 71343 mov     word ptr ds:29Eh, 0 ;~ 47D8:0626
cs=0x47d8;eip=0x00062c; 	T(MOV(cx, *(dw*)(raddr(ds,0x2A8))));	// 71344 mov     cx, ds:2A8h ;~ 47D8:062C
cs=0x47d8;eip=0x000630; 	T(MOV(al, *(raddr(ds,0x2AA))));	// 71345 mov     al, ds:2AAh ;~ 47D8:0630
cs=0x47d8;eip=0x000633; 	J(CALL(sub_56693,0));	// 71346 call    sub_56693 ;~ 47D8:0633
cs=0x47d8;eip=0x000636; 	T(MOV(al, cl));	// 71347 mov     al, cl ;~ 47D8:0636
cs=0x47d8;eip=0x000638; 	J(CALL(sub_5669a,0));	// 71348 call    sub_5669A ;~ 47D8:0638
cs=0x47d8;eip=0x00063b; 	T(MOV(al, ch));	// 71349 mov     al, ch ;~ 47D8:063B
cs=0x47d8;eip=0x00063d; 	J(JMP(sub_5669a));	// 71350 jmp     sub_5669A ;~ 47D8:063D
sub_569a0:
	// 71357 
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x000640; 	T(MOV(al, *(&byte_565e8)));	// 71359 mov     al, cs:byte_565E8 ;~ 47D8:0640
ret_47d8_644:
	// 8728 
cs=0x47d8;eip=0x000644; 	T(OR(al, 4));	// 71360 or      al, 4 ;~ 47D8:0644
cs=0x47d8;eip=0x000646; 	R(OUT(0x0A, al));	// 71361 out     0Ah, al         ; DMA controller, 8237A-5. ;~ 47D8:0646
cs=0x47d8;eip=0x000648; 	J(CALL(sub_56884,0));	// 71365 call    sub_56884 ;~ 47D8:0648
cs=0x47d8;eip=0x00064b; 	T(XOR(ax, ax));	// 71366 xor     ax, ax ;~ 47D8:064B
cs=0x47d8;eip=0x00064d; 	X(MOV(*(raddr(ds,0x292)), al));	// 71367 mov     ds:292h, al ;~ 47D8:064D
cs=0x47d8;eip=0x000650; 	X(MOV(*(dw*)(raddr(ds,0x2AB)), ax));	// 71368 mov     ds:2ABh, ax ;~ 47D8:0650
cs=0x47d8;eip=0x000653; 	X(MOV(*(dw*)(raddr(ds,0x283)), ax));	// 71369 mov     ds:283h, ax ;~ 47D8:0653
cs=0x47d8;eip=0x000656; 	T(MOV(dx, *(dw*)(raddr(ds,0x285))));	// 71370 mov     dx, ds:285h ;~ 47D8:0656
cs=0x47d8;eip=0x00065a; 	T(ADD(dl, 0x0E));	// 71371 add     dl, 0Eh ;~ 47D8:065A
cs=0x47d8;eip=0x00065d; 	R(IN(al, dx));	// 71372 in      al, dx ;~ 47D8:065D
cs=0x47d8;eip=0x00065e; 	J(RETN(0));	// 71373 retn ;~ 47D8:065E
sub_569bf:
	// 71380 
cs=0x47d8;eip=0x00065f; 	J(CALL(sub_568ac,0));	// 71382 call    sub_568AC ;~ 47D8:065F
ret_47d8_662:
	// 8729 
cs=0x47d8;eip=0x000662; 	T(CMP(al, 8));	// 71383 cmp     al, 8 ;~ 47D8:0662
cs=0x47d8;eip=0x000664; 	J(JNC(loc_569d2));	// 71384 jnb     short loc_569D2 ;~ 47D8:0664
cs=0x47d8;eip=0x000666; 	T(CBW);	// 71385 cbw ;~ 47D8:0666
cs=0x47d8;eip=0x000667; 	T(MOV(bx, ax));	// 71386 mov     bx, ax ;~ 47D8:0667
cs=0x47d8;eip=0x000669; 	T(SHL(bx, 1));	// 71387 shl     bx, 1 ;~ 47D8:0669
cs=0x47d8;eip=0x00066b; 	J(CALL(__dispatch_call,*(dw*)(raddr(ds,bx+0x2D0))));	// 71388 call    word ptr [bx+2D0h] ;~ 47D8:066B
cs=0x47d8;eip=0x00066f; 	J(JC(sub_569bf));	// 71389 jb      short sub_569BF ;~ 47D8:066F
cs=0x47d8;eip=0x000671; 	J(RETN(0));	// 71390 retn ;~ 47D8:0671
loc_569d2:
	// 8730 
cs=0x47d8;eip=0x000672; 	J(CALL(sub_569d7,0));	// 71394 call    sub_569D7 ;~ 47D8:0672
cs=0x47d8;eip=0x000675; 	J(JMP(sub_569bf));	// 71395 jmp     short sub_569BF ;~ 47D8:0675
sub_569d7:
	// 71402 
cs=0x47d8;eip=0x000677; 	X(PUSH(es));	// 71404 push    es ;~ 47D8:0677
ret_47d8_678:
	// 8731 
cs=0x47d8;eip=0x000678; 	X(PUSH(ax));	// 71405 push    ax ;~ 47D8:0678
cs=0x47d8;eip=0x000679; 	X(PUSH(bx));	// 71406 push    bx ;~ 47D8:0679
cs=0x47d8;eip=0x00067a; 	X(PUSH(dx));	// 71407 push    dx ;~ 47D8:067A
cs=0x47d8;eip=0x00067b; 	T(LES(bx, *(dw*)(raddr(ds,0x293))));	// 71408 les     bx, ds:293h ;~ 47D8:067B
cs=0x47d8;eip=0x00067f; 	T(MOV(ax, *(dw*)(raddr(es,bx+1))));	// 71409 mov     ax, es:[bx+1] ;~ 47D8:067F
cs=0x47d8;eip=0x000683; 	T(XOR(dx, dx));	// 71410 xor     dx, dx ;~ 47D8:0683
cs=0x47d8;eip=0x000685; 	T(MOV(dl, *(raddr(es,bx+3))));	// 71411 mov     dl, es:[bx+3] ;~ 47D8:0685
cs=0x47d8;eip=0x000689; 	T(ADD(ax, 4));	// 71412 add     ax, 4 ;~ 47D8:0689
cs=0x47d8;eip=0x00068c; 	T(ADC(dx, 0));	// 71413 adc     dx, 0 ;~ 47D8:068C
cs=0x47d8;eip=0x00068f; 	T(ADD(ax, *(dw*)(raddr(ds,0x293))));	// 71414 add     ax, ds:293h ;~ 47D8:068F
cs=0x47d8;eip=0x000693; 	T(ADC(dx, 0));	// 71415 adc     dx, 0 ;~ 47D8:0693
cs=0x47d8;eip=0x000696; 	T(ROR(dx, 1));	// 71416 ror     dx, 1 ;~ 47D8:0696
cs=0x47d8;eip=0x000698; 	T(ROR(dx, 1));	// 71417 ror     dx, 1 ;~ 47D8:0698
cs=0x47d8;eip=0x00069a; 	T(ROR(dx, 1));	// 71418 ror     dx, 1 ;~ 47D8:069A
cs=0x47d8;eip=0x00069c; 	T(ROR(dx, 1));	// 71419 ror     dx, 1 ;~ 47D8:069C
cs=0x47d8;eip=0x00069e; 	T(ADD(dx, *(dw*)(raddr(ds,0x295))));	// 71420 add     dx, ds:295h ;~ 47D8:069E
cs=0x47d8;eip=0x0006a2; 	T(MOV(bx, ax));	// 71421 mov     bx, ax ;~ 47D8:06A2
cs=0x47d8;eip=0x0006a4; 	T(SHR(bx, 1));	// 71422 shr     bx, 1 ;~ 47D8:06A4
cs=0x47d8;eip=0x0006a6; 	T(SHR(bx, 1));	// 71423 shr     bx, 1 ;~ 47D8:06A6
cs=0x47d8;eip=0x0006a8; 	T(SHR(bx, 1));	// 71424 shr     bx, 1 ;~ 47D8:06A8
cs=0x47d8;eip=0x0006aa; 	T(SHR(bx, 1));	// 71425 shr     bx, 1 ;~ 47D8:06AA
cs=0x47d8;eip=0x0006ac; 	T(ADD(dx, bx));	// 71426 add     dx, bx ;~ 47D8:06AC
cs=0x47d8;eip=0x0006ae; 	T(AND(ax, 0x0F));	// 71427 and     ax, 0Fh ;~ 47D8:06AE
cs=0x47d8;eip=0x0006b1; 	X(MOV(*(dw*)(raddr(ds,0x295)), dx));	// 71428 mov     ds:295h, dx ;~ 47D8:06B1
cs=0x47d8;eip=0x0006b5; 	X(MOV(*(dw*)(raddr(ds,0x293)), ax));	// 71429 mov     ds:293h, ax ;~ 47D8:06B5
cs=0x47d8;eip=0x0006b8; 	X(POP(dx));	// 71430 pop     dx ;~ 47D8:06B8
cs=0x47d8;eip=0x0006b9; 	X(POP(bx));	// 71431 pop     bx ;~ 47D8:06B9
cs=0x47d8;eip=0x0006ba; 	X(POP(ax));	// 71432 pop     ax ;~ 47D8:06BA
cs=0x47d8;eip=0x0006bb; 	X(POP(es));	// 71433 pop     es ;~ 47D8:06BB
cs=0x47d8;eip=0x0006bc; 	J(RETN(0));	// 71434 retn ;~ 47D8:06BC
sub_56a1d:
	// 71441 
cs=0x47d8;eip=0x0006bd; 	X(PUSH(ax));	// 71442 push    ax ;~ 47D8:06BD
ret_47d8_6be:
	// 8732 
cs=0x47d8;eip=0x0006be; 	T(SHR(ax, 1));	// 71443 shr     ax, 1 ;~ 47D8:06BE
cs=0x47d8;eip=0x0006c0; 	T(SHR(ax, 1));	// 71444 shr     ax, 1 ;~ 47D8:06C0
cs=0x47d8;eip=0x0006c2; 	T(SHR(ax, 1));	// 71445 shr     ax, 1 ;~ 47D8:06C2
cs=0x47d8;eip=0x0006c4; 	T(SHR(ax, 1));	// 71446 shr     ax, 1 ;~ 47D8:06C4
cs=0x47d8;eip=0x0006c6; 	T(ADD(dx, ax));	// 71447 add     dx, ax ;~ 47D8:06C6
cs=0x47d8;eip=0x0006c8; 	X(POP(ax));	// 71448 pop     ax ;~ 47D8:06C8
cs=0x47d8;eip=0x0006c9; 	T(AND(ax, 0x0F));	// 71449 and     ax, 0Fh ;~ 47D8:06C9
cs=0x47d8;eip=0x0006cc; 	J(RETN(0));	// 71450 retn ;~ 47D8:06CC
seg003_6cd_proc:
	// 71454 
cs=0x47d8;eip=0x0006cd; 	X(PUSH(es));	// 71454 push    es ;~ 47D8:06CD
loc_56a2e:
	// 8733 
cs=0x47d8;eip=0x0006ce; 	T(LES(si, *(dw*)(raddr(ds,0x118))));	// 71457 les     si, ds:118h ;~ 47D8:06CE
cs=0x47d8;eip=0x0006d2; 	X(MOV(*(raddr(es,si+6)), 0));	// 71458 mov     byte ptr es:[si+6], 0 ;~ 47D8:06D2
cs=0x47d8;eip=0x0006d7; 	T(MOV(al, *(raddr(es,si+7))));	// 71459 mov     al, es:[si+7] ;~ 47D8:06D7
cs=0x47d8;eip=0x0006db; 	T(SHL(al, 1));	// 71460 shl     al, 1 ;~ 47D8:06DB
cs=0x47d8;eip=0x0006dd; 	J(JC(loc_56a93));	// 71461 jb      short loc_56A93 ;~ 47D8:06DD
cs=0x47d8;eip=0x0006df; 	T(LES(si, *(dw*)(raddr(ds,0x11C))));	// 71462 les     si, ds:11Ch ;~ 47D8:06DF
cs=0x47d8;eip=0x0006e3; 	T(CMP(*(raddr(es,si+6)), 2));	// 71463 cmp     byte ptr es:[si+6], 2 ;~ 47D8:06E3
cs=0x47d8;eip=0x0006e8; 	J(JZ(loc_56a6f));	// 71464 jz      short loc_56A6F ;~ 47D8:06E8
cs=0x47d8;eip=0x0006ea; 	T(SHL(al, 1));	// 71465 shl     al, 1 ;~ 47D8:06EA
cs=0x47d8;eip=0x0006ec; 	J(JNC(loc_56a98));	// 71466 jnb     short loc_56A98 ;~ 47D8:06EC
cs=0x47d8;eip=0x0006ee; 	T(LES(si, *(dw*)(raddr(ds,0x118))));	// 71467 les     si, ds:118h ;~ 47D8:06EE
cs=0x47d8;eip=0x0006f2; 	X(MOV(*(raddr(es,si+6)), 3));	// 71468 mov     byte ptr es:[si+6], 3 ;~ 47D8:06F2
cs=0x47d8;eip=0x0006f7; 	T(LES(si, *(dw*)(raddr(es,si))));	// 71469 les     si, es:[si] ;~ 47D8:06F7
cs=0x47d8;eip=0x0006fa; 	T(CMP(*(raddr(es,si+2)), 2));	// 71470 cmp     byte ptr es:[si+2], 2 ;~ 47D8:06FA
cs=0x47d8;eip=0x0006ff; 	J(JNZ(loc_56a64));	// 71471 jnz     short loc_56A64 ;~ 47D8:06FF
cs=0x47d8;eip=0x000701; 	T(ADD(si, 2));	// 71472 add     si, 2 ;~ 47D8:0701
loc_56a64:
	// 8734 
cs=0x47d8;eip=0x000704; 	X(MOV(*(dw*)(raddr(ds,0x293)), si));	// 71475 mov     ds:293h, si ;~ 47D8:0704
cs=0x47d8;eip=0x000708; 	X(MOV(*(dw*)(raddr(ds,0x295)), es));	// 71476 mov     word ptr ds:295h, es ;~ 47D8:0708
cs=0x47d8;eip=0x00070c; 	X(POP(es));	// 71477 pop     es ;~ 47D8:070C
cs=0x47d8;eip=0x00070d; 	T(STC);	// 71478 stc ;~ 47D8:070D
cs=0x47d8;eip=0x00070e; 	J(RETN(0));	// 71479 retn ;~ 47D8:070E
loc_56a6f:
	// 8735 
cs=0x47d8;eip=0x00070f; 	X(MOV(*(dw*)(raddr(ds,0x118)), si));	// 71483 mov     ds:118h, si ;~ 47D8:070F
cs=0x47d8;eip=0x000713; 	X(MOV(*(dw*)(raddr(ds,0x11A)), es));	// 71484 mov     word ptr ds:11Ah, es ;~ 47D8:0713
cs=0x47d8;eip=0x000717; 	X(MOV(*(raddr(es,si+6)), 3));	// 71485 mov     byte ptr es:[si+6], 3 ;~ 47D8:0717
cs=0x47d8;eip=0x00071c; 	T(CMP(*(dw*)(raddr(es,si+4)), 3));	// 71486 cmp     word ptr es:[si+4], 3 ;~ 47D8:071C
cs=0x47d8;eip=0x000721; 	J(JC(loc_56a2e));	// 71487 jb      short loc_56A2E ;~ 47D8:0721
cs=0x47d8;eip=0x000723; 	T(LES(ax, *(dw*)(raddr(es,si))));	// 71488 les     ax, es:[si] ;~ 47D8:0723
cs=0x47d8;eip=0x000726; 	T(ADD(ax, 2));	// 71489 add     ax, 2 ;~ 47D8:0726
cs=0x47d8;eip=0x000729; 	X(MOV(*(dw*)(raddr(ds,0x293)), ax));	// 71490 mov     ds:293h, ax ;~ 47D8:0729
cs=0x47d8;eip=0x00072c; 	X(MOV(*(dw*)(raddr(ds,0x295)), es));	// 71491 mov     word ptr ds:295h, es ;~ 47D8:072C
cs=0x47d8;eip=0x000730; 	X(POP(es));	// 71492 pop     es ;~ 47D8:0730
cs=0x47d8;eip=0x000731; 	T(STC);	// 71493 stc ;~ 47D8:0731
cs=0x47d8;eip=0x000732; 	J(RETN(0));	// 71494 retn ;~ 47D8:0732
loc_56a93:
	// 8736 
cs=0x47d8;eip=0x000733; 	X(MOV(*(raddr(ds,0x2FE)), 1));	// 71498 mov     byte ptr ds:2FEh, 1 ;~ 47D8:0733
loc_56a98:
	// 8737 
cs=0x47d8;eip=0x000738; 	X(MOV(*(raddr(ds,0x2A7)), 1));	// 71501 mov     byte ptr ds:2A7h, 1 ;~ 47D8:0738
cs=0x47d8;eip=0x00073d; 	X(POP(es));	// 71502 pop     es ;~ 47D8:073D
cs=0x47d8;eip=0x00073e; 	T(CLC);	// 71503 clc ;~ 47D8:073E
cs=0x47d8;eip=0x00073f; 	J(RETN(0));	// 71504 retn ;~ 47D8:073F
ret_47d8_740:
	// 8738 
cs=0x47d8;eip=0x000740; 	X(PUSH(es));	// 71506 push    es ;~ 47D8:0740
cs=0x47d8;eip=0x000741; 	T(LES(di, *(dw*)(raddr(ds,0x293))));	// 71507 les     di, ds:293h ;~ 47D8:0741
cs=0x47d8;eip=0x000745; 	T(MOV(al, 0x40));	// 71508 mov     al, 40h ; '@' ;~ 47D8:0745
cs=0x47d8;eip=0x000747; 	J(CALL(sub_56693,0));	// 71509 call    sub_56693 ;~ 47D8:0747
cs=0x47d8;eip=0x00074a; 	T(MOV(al, *(raddr(es,di+4))));	// 71510 mov     al, es:[di+4] ;~ 47D8:074A
cs=0x47d8;eip=0x00074e; 	X(MOV(*(raddr(ds,0x2FC)), al));	// 71511 mov     ds:2FCh, al ;~ 47D8:074E
cs=0x47d8;eip=0x000751; 	J(CALL(sub_5669a,0));	// 71512 call    sub_5669A ;~ 47D8:0751
cs=0x47d8;eip=0x000754; 	T(MOV(al, *(raddr(es,di+5))));	// 71513 mov     al, es:[di+5] ;~ 47D8:0754
cs=0x47d8;eip=0x000758; 	X(MOV(*(raddr(ds,0x2FD)), al));	// 71514 mov     ds:2FDh, al ;~ 47D8:0758
cs=0x47d8;eip=0x00075b; 	T(MOV(bx, 0x2C5));	// 71515 mov     bx, 2C5h ;~ 47D8:075B
cs=0x47d8;eip=0x00075e; 	T(XLAT);	// 71516 xlat ;~ 47D8:075E
cs=0x47d8;eip=0x00075f; 	X(MOV(*(raddr(ds,0x2AA)), al));	// 71517 mov     ds:2AAh, al ;~ 47D8:075F
cs=0x47d8;eip=0x000762; 	X(POP(es));	// 71518 pop     es ;~ 47D8:0762
cs=0x47d8;eip=0x000763; 	T(MOV(ax, 6));	// 71519 mov     ax, 6 ;~ 47D8:0763
cs=0x47d8;eip=0x000766; 	J(CALL(sub_568b6,0));	// 71520 call    sub_568B6 ;~ 47D8:0766
cs=0x47d8;eip=0x000769; 	J(CALL(sub_56942,0));	// 71521 call    sub_56942 ;~ 47D8:0769
cs=0x47d8;eip=0x00076c; 	J(CALL(sub_56ad1,0));	// 71522 call    sub_56AD1 ;~ 47D8:076C
cs=0x47d8;eip=0x00076f; 	T(CLC);	// 71523 clc ;~ 47D8:076F
cs=0x47d8;eip=0x000770; 	J(RETN(0));	// 71524 retn ;~ 47D8:0770
sub_56ad1:
	// 71529 
cs=0x47d8;eip=0x000771; 	T(MOV(al, *(raddr(ds,0x2AA))));	// 71531 mov     al, ds:2AAh ;~ 47D8:0771
ret_47d8_774:
	// 8739 
cs=0x47d8;eip=0x000774; 	T(CMP(al, 0x61));	// 71532 cmp     al, 61h ; 'a' ;~ 47D8:0774
cs=0x47d8;eip=0x000776; 	J(JC(loc_56ae2));	// 71533 jb      short loc_56AE2 ;~ 47D8:0776
cs=0x47d8;eip=0x000778; 	T(CMP(al, 0x67));	// 71534 cmp     al, 67h ; 'g' ;~ 47D8:0778
cs=0x47d8;eip=0x00077a; 	J(JA(loc_56ae2));	// 71535 ja      short loc_56AE2 ;~ 47D8:077A
cs=0x47d8;eip=0x00077c; 	X(OR(*(raddr(ds,0x2AA)), 8));	// 71536 or      byte ptr ds:2AAh, 8 ;~ 47D8:077C
cs=0x47d8;eip=0x000781; 	J(RETN(0));	// 71537 retn ;~ 47D8:0781
loc_56ae2:
	// 8740 
cs=0x47d8;eip=0x000782; 	X(AND(*(raddr(ds,0x2AA)), 0x0FE));	// 71542 and     byte ptr ds:2AAh, 0FEh ;~ 47D8:0782
cs=0x47d8;eip=0x000787; 	J(RETN(0));	// 71543 retn ;~ 47D8:0787
seg003_788_proc:
	// 71547 
cs=0x47d8;eip=0x000788; 	T(MOV(ax, 4));	// 71547 mov     ax, 4 ;~ 47D8:0788
ret_47d8_78b:
	// 8741 
cs=0x47d8;eip=0x00078b; 	J(CALL(sub_568b6,0));	// 71548 call    sub_568B6 ;~ 47D8:078B
cs=0x47d8;eip=0x00078e; 	J(CALL(sub_56ad1,0));	// 71549 call    sub_56AD1 ;~ 47D8:078E
cs=0x47d8;eip=0x000791; 	J(CALL(sub_56942,0));	// 71550 call    sub_56942 ;~ 47D8:0791
cs=0x47d8;eip=0x000794; 	T(CLC);	// 71551 clc ;~ 47D8:0794
cs=0x47d8;eip=0x000795; 	J(RETN(0));	// 71552 retn ;~ 47D8:0795
ret_47d8_796:
	// 8742 
cs=0x47d8;eip=0x000796; 	T(MOV(al, 0x40));	// 71554 mov     al, 40h ; '@' ;~ 47D8:0796
cs=0x47d8;eip=0x000798; 	J(CALL(sub_56693,0));	// 71555 call    sub_56693 ;~ 47D8:0798
cs=0x47d8;eip=0x00079b; 	X(PUSH(es));	// 71556 push    es ;~ 47D8:079B
cs=0x47d8;eip=0x00079c; 	T(LES(bx, *(dw*)(raddr(ds,0x293))));	// 71557 les     bx, ds:293h ;~ 47D8:079C
cs=0x47d8;eip=0x0007a0; 	T(MOV(al, *(raddr(es,bx+6))));	// 71558 mov     al, es:[bx+6] ;~ 47D8:07A0
cs=0x47d8;eip=0x0007a4; 	J(CALL(sub_5669a,0));	// 71559 call    sub_5669A ;~ 47D8:07A4
cs=0x47d8;eip=0x0007a7; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 71560 mov     ax, es:[bx+4] ;~ 47D8:07A7
cs=0x47d8;eip=0x0007ab; 	X(POP(es));	// 71561 pop     es ;~ 47D8:07AB
cs=0x47d8;eip=0x0007ac; 	T(MOV(bx, ax));	// 71562 mov     bx, ax ;~ 47D8:07AC
cs=0x47d8;eip=0x0007ae; 	T(MOV(al, 0x80));	// 71563 mov     al, 80h ; '€' ;~ 47D8:07AE
cs=0x47d8;eip=0x0007b0; 	J(CALL(sub_5669a,0));	// 71564 call    sub_5669A ;~ 47D8:07B0
cs=0x47d8;eip=0x0007b3; 	T(MOV(al, bl));	// 71565 mov     al, bl ;~ 47D8:07B3
cs=0x47d8;eip=0x0007b5; 	J(CALL(sub_5669a,0));	// 71566 call    sub_5669A ;~ 47D8:07B5
cs=0x47d8;eip=0x0007b8; 	T(MOV(al, bh));	// 71567 mov     al, bh ;~ 47D8:07B8
cs=0x47d8;eip=0x0007ba; 	J(CALL(sub_5669a,0));	// 71568 call    sub_5669A ;~ 47D8:07BA
cs=0x47d8;eip=0x0007bd; 	T(CLC);	// 71569 clc ;~ 47D8:07BD
cs=0x47d8;eip=0x0007be; 	J(RETN(0));	// 71570 retn ;~ 47D8:07BE
ret_47d8_7bf:
	// 8743 
cs=0x47d8;eip=0x0007bf; 	X(PUSH(ds));	// 71572 push    ds ;~ 47D8:07BF
cs=0x47d8;eip=0x0007c0; 	T(LDS(bx, *(dw*)(raddr(ds,0x293))));	// 71573 lds     bx, ds:293h ;~ 47D8:07C0
cs=0x47d8;eip=0x0007c4; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 71574 mov     ax, [bx+4] ;~ 47D8:07C4
cs=0x47d8;eip=0x0007c7; 	X(POP(ds));	// 71575 pop     ds ;~ 47D8:07C7
cs=0x47d8;eip=0x0007c8; 	X(MOV(*(dw*)(raddr(ds,0x283)), ax));	// 71576 mov     ds:283h, ax ;~ 47D8:07C8
cs=0x47d8;eip=0x0007cb; 	J(CALL(sub_569d7,0));	// 71577 call    sub_569D7 ;~ 47D8:07CB
cs=0x47d8;eip=0x0007ce; 	T(STC);	// 71578 stc ;~ 47D8:07CE
cs=0x47d8;eip=0x0007cf; 	J(RETN(0));	// 71579 retn ;~ 47D8:07CF
ret_47d8_7d0:
	// 8744 
cs=0x47d8;eip=0x0007d0; 	X(PUSH(ds));	// 71581 push    ds ;~ 47D8:07D0
cs=0x47d8;eip=0x0007d1; 	T(LDS(bx, *(dw*)(raddr(ds,0x293))));	// 71582 lds     bx, ds:293h ;~ 47D8:07D1
cs=0x47d8;eip=0x0007d5; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 71583 mov     ax, [bx+4] ;~ 47D8:07D5
cs=0x47d8;eip=0x0007d8; 	X(POP(ds));	// 71584 pop     ds ;~ 47D8:07D8
cs=0x47d8;eip=0x0007d9; 	X(ADD(*(dw*)(raddr(ds,0x2AB)), 2));	// 71585 add     word ptr ds:2ABh, 2 ;~ 47D8:07D9
cs=0x47d8;eip=0x0007de; 	T(MOV(bx, *(dw*)(raddr(ds,0x2AB))));	// 71586 mov     bx, ds:2ABh ;~ 47D8:07DE
cs=0x47d8;eip=0x0007e2; 	X(MOV(*(dw*)(raddr(ds,bx+0x2AB)), ax));	// 71587 mov     [bx+2ABh], ax ;~ 47D8:07E2
cs=0x47d8;eip=0x0007e6; 	X(PUSH(bx));	// 71588 push    bx ;~ 47D8:07E6
cs=0x47d8;eip=0x0007e7; 	J(CALL(sub_569d7,0));	// 71589 call    sub_569D7 ;~ 47D8:07E7
cs=0x47d8;eip=0x0007ea; 	T(MOV(si, 0x293));	// 71590 mov     si, 293h ;~ 47D8:07EA
cs=0x47d8;eip=0x0007ed; 	T(MOV(di, 0x2B3));	// 71591 mov     di, 2B3h ;~ 47D8:07ED
cs=0x47d8;eip=0x0007f0; 	X(POP(bx));	// 71592 pop     bx ;~ 47D8:07F0
cs=0x47d8;eip=0x0007f1; 	T(ADD(di, bx));	// 71593 add     di, bx ;~ 47D8:07F1
cs=0x47d8;eip=0x0007f3; 	T(ADD(di, bx));	// 71594 add     di, bx ;~ 47D8:07F3
cs=0x47d8;eip=0x0007f5; 	X(MOVSW);	// 71595 movsw ;~ 47D8:07F5
cs=0x47d8;eip=0x0007f6; 	X(MOVSW);	// 71596 movsw ;~ 47D8:07F6
cs=0x47d8;eip=0x0007f7; 	T(STC);	// 71597 stc ;~ 47D8:07F7
cs=0x47d8;eip=0x0007f8; 	J(RETN(0));	// 71598 retn ;~ 47D8:07F8
ret_47d8_7f9:
	// 8745 
cs=0x47d8;eip=0x0007f9; 	T(MOV(bx, *(dw*)(raddr(ds,0x2AB))));	// 71600 mov     bx, ds:2ABh ;~ 47D8:07F9
cs=0x47d8;eip=0x0007fd; 	T(OR(bx, bx));	// 71601 or      bx, bx ;~ 47D8:07FD
cs=0x47d8;eip=0x0007ff; 	J(JZ(loc_56b86));	// 71602 jz      short loc_56B86 ;~ 47D8:07FF
cs=0x47d8;eip=0x000801; 	T(CMP(*(dw*)(raddr(ds,bx+0x2AB)), 0));	// 71603 cmp     word ptr [bx+2ABh], 0 ;~ 47D8:0801
cs=0x47d8;eip=0x000806; 	J(JZ(loc_56b81));	// 71604 jz      short loc_56B81 ;~ 47D8:0806
cs=0x47d8;eip=0x000808; 	T(MOV(di, 0x293));	// 71605 mov     di, 293h ;~ 47D8:0808
cs=0x47d8;eip=0x00080b; 	T(MOV(si, 0x2B3));	// 71606 mov     si, 2B3h ;~ 47D8:080B
cs=0x47d8;eip=0x00080e; 	T(ADD(si, bx));	// 71607 add     si, bx ;~ 47D8:080E
cs=0x47d8;eip=0x000810; 	T(ADD(si, bx));	// 71608 add     si, bx ;~ 47D8:0810
cs=0x47d8;eip=0x000812; 	X(MOVSW);	// 71609 movsw ;~ 47D8:0812
cs=0x47d8;eip=0x000813; 	X(MOVSW);	// 71610 movsw ;~ 47D8:0813
cs=0x47d8;eip=0x000814; 	T(CMP(*(dw*)(raddr(ds,bx+0x2AB)), 0x0FFFF));	// 71611 cmp     word ptr [bx+2ABh], 0FFFFh ;~ 47D8:0814
cs=0x47d8;eip=0x000819; 	J(JZ(loc_56b89));	// 71612 jz      short loc_56B89 ;~ 47D8:0819
cs=0x47d8;eip=0x00081b; 	X(DEC(*(dw*)(raddr(ds,bx+0x2AB))));	// 71613 dec     word ptr [bx+2ABh] ;~ 47D8:081B
cs=0x47d8;eip=0x00081f; 	J(JMP(loc_56b89));	// 71614 jmp     short loc_56B89 ;~ 47D8:081F
loc_56b81:
	// 8746 
cs=0x47d8;eip=0x000821; 	X(SUB(*(dw*)(raddr(ds,0x2AB)), 2));	// 71618 sub     word ptr ds:2ABh, 2 ;~ 47D8:0821
loc_56b86:
	// 8747 
cs=0x47d8;eip=0x000826; 	J(CALL(sub_569d7,0));	// 71621 call    sub_569D7 ;~ 47D8:0826
loc_56b89:
	// 8748 
cs=0x47d8;eip=0x000829; 	T(STC);	// 71625 stc ;~ 47D8:0829
cs=0x47d8;eip=0x00082a; 	J(RETN(0));	// 71626 retn ;~ 47D8:082A
sub_56b8b:
	// 71631 
cs=0x47d8;eip=0x00082b; 	X(PUSH(cx));	// 71633 push    cx ;~ 47D8:082B
ret_47d8_82c:
	// 8749 
cs=0x47d8;eip=0x00082c; 	X(PUSH(dx));	// 71634 push    dx ;~ 47D8:082C
cs=0x47d8;eip=0x00082d; 	X(PUSH(si));	// 71635 push    si ;~ 47D8:082D
cs=0x47d8;eip=0x00082e; 	X(PUSH(di));	// 71636 push    di ;~ 47D8:082E
cs=0x47d8;eip=0x00082f; 	X(PUSH(bp));	// 71637 push    bp ;~ 47D8:082F
cs=0x47d8;eip=0x000830; 	X(PUSH(ds));	// 71638 push    ds ;~ 47D8:0830
cs=0x47d8;eip=0x000831; 	X(PUSH(es));	// 71639 push    es ;~ 47D8:0831
cs=0x47d8;eip=0x000832; 	X(PUSH(cs));	// 71640 push    cs ;~ 47D8:0832
cs=0x47d8;eip=0x000833; 	X(POP(ds));	// 71641 pop     ds ;~ 47D8:0833
cs=0x47d8;eip=0x000834; 	X(MOV(word_565ef, es));	// 71643 mov     word_565EF, es ;~ 47D8:0834
cs=0x47d8;eip=0x000838; 	X(PUSH(cs));	// 71644 push    cs ;~ 47D8:0838
cs=0x47d8;eip=0x000839; 	X(POP(es));	// 71645 pop     es ;~ 47D8:0839
cs=0x47d8;eip=0x00083a; 	T(CMP(bx, 0x0E));	// 71647 cmp     bx, 0Eh ;~ 47D8:083A
cs=0x47d8;eip=0x00083d; 	J(JNC(loc_56bb8));	// 71648 jnb     short loc_56BB8 ;~ 47D8:083D
cs=0x47d8;eip=0x00083f; 	T(CMP(bl, 4));	// 71649 cmp     bl, 4 ;~ 47D8:083F
cs=0x47d8;eip=0x000842; 	J(JC(loc_56bb0));	// 71650 jb      short loc_56BB0 ;~ 47D8:0842
cs=0x47d8;eip=0x000844; 	T(CMP(bl, 0x0D));	// 71651 cmp     bl, 0Dh ;~ 47D8:0844
cs=0x47d8;eip=0x000847; 	J(JZ(loc_56bb0));	// 71652 jz      short loc_56BB0 ;~ 47D8:0847
cs=0x47d8;eip=0x000849; 	T(CMP(byte_565ee, 0));	// 71653 cmp     byte_565EE, 0 ;~ 47D8:0849
cs=0x47d8;eip=0x00084e; 	J(JZ(loc_56bb8));	// 71654 jz      short loc_56BB8 ;~ 47D8:084E
loc_56bb0:
	// 8750 
cs=0x47d8;eip=0x000850; 	T(SHL(bx, 1));	// 71658 shl     bx, 1 ;~ 47D8:0850
cs=0x47d8;eip=0x000852; 	J(CALL(__dispatch_call,*(dw*)(((db*)&funcs_56bb2)+bx)));	// 71659 call    funcs_56BB2[bx] ;~ 47D8:0852
cs=0x47d8;eip=0x000856; 	J(JMP(loc_56bbb));	// 71660 jmp     short loc_56BBB ;~ 47D8:0856
loc_56bb8:
	// 8751 
cs=0x47d8;eip=0x000858; 	T(MOV(ax, 0x0FFFF));	// 71665 mov     ax, 0FFFFh ;~ 47D8:0858
loc_56bbb:
	// 8752 
cs=0x47d8;eip=0x00085b; 	X(POP(es));	// 71668 pop     es ;~ 47D8:085B
cs=0x47d8;eip=0x00085c; 	X(POP(ds));	// 71670 pop     ds ;~ 47D8:085C
cs=0x47d8;eip=0x00085d; 	X(POP(bp));	// 71672 pop     bp ;~ 47D8:085D
cs=0x47d8;eip=0x00085e; 	X(POP(di));	// 71673 pop     di ;~ 47D8:085E
cs=0x47d8;eip=0x00085f; 	X(POP(si));	// 71674 pop     si ;~ 47D8:085F
cs=0x47d8;eip=0x000860; 	X(POP(dx));	// 71675 pop     dx ;~ 47D8:0860
cs=0x47d8;eip=0x000861; 	X(POP(cx));	// 71676 pop     cx ;~ 47D8:0861
cs=0x47d8;eip=0x000862; 	J(RETN(0));	// 71677 retn ;~ 47D8:0862
sub_56bc3:
	// 71684 
cs=0x47d8;eip=0x000863; 	T(MOV(ax, 0x10D));	// 71686 mov     ax, 10Dh ;~ 47D8:0863
ret_47d8_866:
	// 8753 
cs=0x47d8;eip=0x000866; 	J(RETN(0));	// 71687 retn ;~ 47D8:0866
sub_56bc7:
	// 71694 
cs=0x47d8;eip=0x000867; 	T(AND(ax, 0x0FFF8));	// 71696 and     ax, 0FFF8h ;~ 47D8:0867
ret_47d8_86a:
	// 8754 
cs=0x47d8;eip=0x00086a; 	T(MOV(bx, ax));	// 71697 mov     bx, ax ;~ 47D8:086A
cs=0x47d8;eip=0x00086c; 	T(SUB(ax, 0x210));	// 71698 sub     ax, 210h ;~ 47D8:086C
cs=0x47d8;eip=0x00086f; 	T(CMP(ax, 0x50));	// 71699 cmp     ax, 50h ; 'P' ;~ 47D8:086F
cs=0x47d8;eip=0x000872; 	J(JA(sub_56c10));	// 71700 ja      short sub_56C10 ;~ 47D8:0872
cs=0x47d8;eip=0x000874; 	X(MOV(*(dw*)(raddr(ds,0x285)), bx));	// 71701 mov     ds:285h, bx ;~ 47D8:0874
cs=0x47d8;eip=0x000878; 	T(XOR(ax, ax));	// 71702 xor     ax, ax ;~ 47D8:0878
cs=0x47d8;eip=0x00087a; 	J(RETN(0));	// 71703 retn ;~ 47D8:087A
sub_56bdb:
	// 71710 
cs=0x47d8;eip=0x00087b; 	T(CMP(al, 0x0A));	// 71712 cmp     al, 0Ah ;~ 47D8:087B
ret_47d8_87d:
	// 8755 
cs=0x47d8;eip=0x00087d; 	J(JZ(loc_56bef));	// 71713 jz      short loc_56BEF ;~ 47D8:087D
cs=0x47d8;eip=0x00087f; 	T(CMP(al, 7));	// 71714 cmp     al, 7 ;~ 47D8:087F
cs=0x47d8;eip=0x000881; 	J(JZ(loc_56bef));	// 71715 jz      short loc_56BEF ;~ 47D8:0881
cs=0x47d8;eip=0x000883; 	T(CMP(al, 5));	// 71716 cmp     al, 5 ;~ 47D8:0883
cs=0x47d8;eip=0x000885; 	J(JZ(loc_56bef));	// 71717 jz      short loc_56BEF ;~ 47D8:0885
cs=0x47d8;eip=0x000887; 	T(CMP(al, 3));	// 71718 cmp     al, 3 ;~ 47D8:0887
cs=0x47d8;eip=0x000889; 	J(JZ(loc_56bef));	// 71719 jz      short loc_56BEF ;~ 47D8:0889
cs=0x47d8;eip=0x00088b; 	T(CMP(al, 2));	// 71720 cmp     al, 2 ;~ 47D8:088B
cs=0x47d8;eip=0x00088d; 	J(JNZ(sub_56c10));	// 71721 jnz     short sub_56C10 ;~ 47D8:088D
loc_56bef:
	// 8756 
cs=0x47d8;eip=0x00088f; 	X(MOV(*(raddr(ds,0x287)), al));	// 71725 mov     ds:287h, al ;~ 47D8:088F
cs=0x47d8;eip=0x000892; 	T(XOR(ax, ax));	// 71726 xor     ax, ax ;~ 47D8:0892
cs=0x47d8;eip=0x000894; 	J(RETN(0));	// 71727 retn ;~ 47D8:0894
sub_56bf5:
	// 71734 
cs=0x47d8;eip=0x000895; 	T(AND(al, 7));	// 71736 and     al, 7 ;~ 47D8:0895
ret_47d8_897:
	// 8757 
cs=0x47d8;eip=0x000897; 	T(DEC(al));	// 71737 dec     al ;~ 47D8:0897
cs=0x47d8;eip=0x000899; 	T(CMP(al, 3));	// 71738 cmp     al, 3 ;~ 47D8:0899
cs=0x47d8;eip=0x00089b; 	J(JA(sub_56c10));	// 71739 ja      short sub_56C10 ;~ 47D8:089B
cs=0x47d8;eip=0x00089d; 	T(CMP(al, 2));	// 71740 cmp     al, 2 ;~ 47D8:089D
cs=0x47d8;eip=0x00089f; 	J(JZ(sub_56c10));	// 71741 jz      short sub_56C10 ;~ 47D8:089F
cs=0x47d8;eip=0x0008a1; 	X(MOV(*(raddr(ds,0x288)), al));	// 71742 mov     ds:288h, al ;~ 47D8:08A1
cs=0x47d8;eip=0x0008a4; 	X(PUSH(bx));	// 71743 push    bx ;~ 47D8:08A4
cs=0x47d8;eip=0x0008a5; 	T(MOV(bx, 0x28A));	// 71744 mov     bx, 28Ah ;~ 47D8:08A5
cs=0x47d8;eip=0x0008a8; 	T(XLAT);	// 71745 xlat ;~ 47D8:08A8
cs=0x47d8;eip=0x0008a9; 	X(MOV(*(raddr(ds,0x289)), al));	// 71746 mov     ds:289h, al ;~ 47D8:08A9
cs=0x47d8;eip=0x0008ac; 	X(POP(bx));	// 71747 pop     bx ;~ 47D8:08AC
cs=0x47d8;eip=0x0008ad; 	T(XOR(ax, ax));	// 71748 xor     ax, ax ;~ 47D8:08AD
cs=0x47d8;eip=0x0008af; 	J(RETN(0));	// 71749 retn ;~ 47D8:08AF
sub_56c10:
	// 71756 
cs=0x47d8;eip=0x0008b0; 	T(MOV(ax, 0x0FFFF));	// 71758 mov     ax, 0FFFFh ;~ 47D8:08B0
ret_47d8_8b3:
	// 8758 
cs=0x47d8;eip=0x0008b3; 	J(RETN(0));	// 71759 retn ;~ 47D8:08B3
sub_56c14:
	// 71766 
cs=0x47d8;eip=0x0008b4; 	X(PUSHF);	// 71768 pushf ;~ 47D8:08B4
ret_47d8_8b5:
	// 8759 
cs=0x47d8;eip=0x0008b5; 	T(STI);	// 71769 sti ;~ 47D8:08B5
cs=0x47d8;eip=0x0008b6; 	J(CALL(sub_566bc,0));	// 71770 call    sub_566BC ;~ 47D8:08B6
cs=0x47d8;eip=0x0008b9; 	J(JNZ(loc_56c31));	// 71771 jnz     short loc_56C31 ;~ 47D8:08B9
cs=0x47d8;eip=0x0008bb; 	J(CALL(sub_566e5,0));	// 71772 call    sub_566E5 ;~ 47D8:08BB
cs=0x47d8;eip=0x0008be; 	J(JNZ(loc_56c31));	// 71773 jnz     short loc_56C31 ;~ 47D8:08BE
cs=0x47d8;eip=0x0008c0; 	J(CALL(sub_5677c,0));	// 71774 call    sub_5677C ;~ 47D8:08C0
cs=0x47d8;eip=0x0008c3; 	J(JNZ(loc_56c31));	// 71775 jnz     short loc_56C31 ;~ 47D8:08C3
cs=0x47d8;eip=0x0008c5; 	J(CALL(sub_56731,0));	// 71776 call    sub_56731 ;~ 47D8:08C5
cs=0x47d8;eip=0x0008c8; 	J(JNZ(loc_56c31));	// 71777 jnz     short loc_56C31 ;~ 47D8:08C8
cs=0x47d8;eip=0x0008ca; 	T(MOV(al, 1));	// 71778 mov     al, 1 ;~ 47D8:08CA
cs=0x47d8;eip=0x0008cc; 	J(CALL(sub_56c33,0));	// 71779 call    sub_56C33 ;~ 47D8:08CC
cs=0x47d8;eip=0x0008cf; 	T(XOR(ax, ax));	// 71780 xor     ax, ax ;~ 47D8:08CF
loc_56c31:
	// 8760 
cs=0x47d8;eip=0x0008d1; 	X(POPF);	// 71784 popf ;~ 47D8:08D1
cs=0x47d8;eip=0x0008d2; 	J(RETN(0));	// 71785 retn ;~ 47D8:08D2
sub_56c33:
	// 71792 
cs=0x47d8;eip=0x0008d3; 	T(MOV(dx, *(dw*)(raddr(ds,0x285))));	// 71795 mov     dx, ds:285h ;~ 47D8:08D3
ret_47d8_8d7:
	// 8761 
cs=0x47d8;eip=0x0008d7; 	T(ADD(dl, 0x0C));	// 71796 add     dl, 0Ch ;~ 47D8:08D7
cs=0x47d8;eip=0x0008da; 	T(OR(al, al));	// 71797 or      al, al ;~ 47D8:08DA
cs=0x47d8;eip=0x0008dc; 	T(MOV(al, 0x0D1));	// 71798 mov     al, 0D1h ; 'Ñ' ;~ 47D8:08DC
cs=0x47d8;eip=0x0008de; 	J(JNZ(loc_56c42));	// 71799 jnz     short loc_56C42 ;~ 47D8:08DE
cs=0x47d8;eip=0x0008e0; 	T(MOV(al, 0x0D3));	// 71800 mov     al, 0D3h ; 'Ó' ;~ 47D8:08E0
loc_56c42:
	// 8762 
cs=0x47d8;eip=0x0008e2; 	J(CALL(sub_5669a,0));	// 71803 call    sub_5669A ;~ 47D8:08E2
cs=0x47d8;eip=0x0008e5; 	T(XOR(ax, ax));	// 71804 xor     ax, ax ;~ 47D8:08E5
cs=0x47d8;eip=0x0008e7; 	J(RETN(0));	// 71805 retn ;~ 47D8:08E7
sub_56c48:
	// 71812 
cs=0x47d8;eip=0x0008e8; 	T(CMP(*(raddr(ds,0x292)), 0));	// 71814 cmp     byte ptr ds:292h, 0 ;~ 47D8:08E8
ret_47d8_8ed:
	// 8763 
cs=0x47d8;eip=0x0008ed; 	J(JNZ(sub_56c10));	// 71815 jnz     short sub_56C10 ;~ 47D8:08ED
cs=0x47d8;eip=0x0008ef; 	X(INC(*(raddr(ds,0x292))));	// 71816 inc     byte ptr ds:292h ;~ 47D8:08EF
cs=0x47d8;eip=0x0008f3; 	T(MOV(dx, *(dw*)(raddr(ds,0x28F))));	// 71817 mov     dx, ds:28Fh ;~ 47D8:08F3
cs=0x47d8;eip=0x0008f7; 	T(MOV(ax, di));	// 71818 mov     ax, di ;~ 47D8:08F7
cs=0x47d8;eip=0x0008f9; 	J(CALL(sub_56a1d,0));	// 71819 call    sub_56A1D ;~ 47D8:08F9
cs=0x47d8;eip=0x0008fc; 	X(MOV(*(dw*)(raddr(ds,0x295)), dx));	// 71820 mov     ds:295h, dx ;~ 47D8:08FC
cs=0x47d8;eip=0x000900; 	X(MOV(*(dw*)(raddr(ds,0x293)), ax));	// 71821 mov     ds:293h, ax ;~ 47D8:0900
cs=0x47d8;eip=0x000903; 	T(XOR(ax, ax));	// 71822 xor     ax, ax ;~ 47D8:0903
cs=0x47d8;eip=0x000905; 	X(MOV(*(raddr(ds,0x2A7)), al));	// 71823 mov     ds:2A7h, al ;~ 47D8:0905
cs=0x47d8;eip=0x000908; 	X(MOV(*(dw*)(raddr(ds,0x2AB)), ax));	// 71824 mov     ds:2ABh, ax ;~ 47D8:0908
cs=0x47d8;eip=0x00090b; 	X(MOV(*(dw*)(raddr(ds,0x2AD)), ax));	// 71825 mov     ds:2ADh, ax ;~ 47D8:090B
cs=0x47d8;eip=0x00090e; 	T(MOV(ax, 0x591));	// 71826 mov     ax, 591h ;~ 47D8:090E
cs=0x47d8;eip=0x000911; 	J(CALL(sub_56838,0));	// 71827 call    sub_56838 ;~ 47D8:0911
cs=0x47d8;eip=0x000914; 	X(MOV(*(dw*)(raddr(ds,0x283)), 0x0FFFF));	// 71828 mov     word ptr ds:283h, 0FFFFh ;~ 47D8:0914
cs=0x47d8;eip=0x00091a; 	J(CALL(sub_569bf,0));	// 71829 call    sub_569BF ;~ 47D8:091A
cs=0x47d8;eip=0x00091d; 	X(MOV(*(raddr(ds,0x2FE)), 0));	// 71830 mov     byte ptr ds:2FEh, 0 ;~ 47D8:091D
cs=0x47d8;eip=0x000922; 	T(XOR(ax, ax));	// 71831 xor     ax, ax ;~ 47D8:0922
cs=0x47d8;eip=0x000924; 	J(RETN(0));	// 71832 retn ;~ 47D8:0924
sub_56c85:
	// 71839 
cs=0x47d8;eip=0x000925; 	T(MOV(ax, 1));	// 71841 mov     ax, 1 ;~ 47D8:0925
ret_47d8_928:
	// 8764 
cs=0x47d8;eip=0x000928; 	T(CMP(*(raddr(ds,0x292)), 0));	// 71842 cmp     byte ptr ds:292h, 0 ;~ 47D8:0928
cs=0x47d8;eip=0x00092d; 	J(JZ(loc_56c97));	// 71843 jz      short loc_56C97 ;~ 47D8:092D
cs=0x47d8;eip=0x00092f; 	J(CALL(sub_56792,0));	// 71844 call    sub_56792 ;~ 47D8:092F
cs=0x47d8;eip=0x000932; 	J(CALL(sub_569a0,0));	// 71845 call    sub_569A0 ;~ 47D8:0932
cs=0x47d8;eip=0x000935; 	T(XOR(ax, ax));	// 71846 xor     ax, ax ;~ 47D8:0935
loc_56c97:
	// 8765 
cs=0x47d8;eip=0x000937; 	X(MOV(*(raddr(ds,0x2FE)), 1));	// 71850 mov     byte ptr ds:2FEh, 1 ;~ 47D8:0937
cs=0x47d8;eip=0x00093c; 	J(RETN(0));	// 71851 retn ;~ 47D8:093C
sub_56c9d:
	// 71858 
cs=0x47d8;eip=0x00093d; 	T(MOV(ax, 1));	// 71860 mov     ax, 1 ;~ 47D8:093D
ret_47d8_940:
	// 8766 
cs=0x47d8;eip=0x000940; 	T(CMP(*(raddr(ds,0x292)), 0));	// 71861 cmp     byte ptr ds:292h, 0 ;~ 47D8:0940
cs=0x47d8;eip=0x000945; 	J(JZ(loc_56c97));	// 71862 jz      short loc_56C97 ;~ 47D8:0945
cs=0x47d8;eip=0x000947; 	J(CALL(sub_56792,0));	// 71863 call    sub_56792 ;~ 47D8:0947
cs=0x47d8;eip=0x00094a; 	T(XOR(ax, ax));	// 71864 xor     ax, ax ;~ 47D8:094A
cs=0x47d8;eip=0x00094c; 	J(RETN(0));	// 71865 retn ;~ 47D8:094C
sub_56cad:
	// 71872 
cs=0x47d8;eip=0x00094d; 	T(MOV(ax, 1));	// 71874 mov     ax, 1 ;~ 47D8:094D
ret_47d8_950:
	// 8767 
cs=0x47d8;eip=0x000950; 	T(CMP(*(raddr(ds,0x292)), 0));	// 71875 cmp     byte ptr ds:292h, 0 ;~ 47D8:0950
cs=0x47d8;eip=0x000955; 	J(JZ(loc_56c97));	// 71876 jz      short loc_56C97 ;~ 47D8:0955
cs=0x47d8;eip=0x000957; 	T(MOV(al, 0x0D4));	// 71877 mov     al, 0D4h ; 'Ô' ;~ 47D8:0957
cs=0x47d8;eip=0x000959; 	J(CALL(sub_56693,0));	// 71878 call    sub_56693 ;~ 47D8:0959
cs=0x47d8;eip=0x00095c; 	T(XOR(ax, ax));	// 71879 xor     ax, ax ;~ 47D8:095C
cs=0x47d8;eip=0x00095e; 	J(RETN(0));	// 71880 retn ;~ 47D8:095E
sub_56cbf:
	// 71887 
cs=0x47d8;eip=0x00095f; 	T(MOV(cx, ax));	// 71889 mov     cx, ax ;~ 47D8:095F
ret_47d8_961:
	// 8768 
cs=0x47d8;eip=0x000961; 	T(MOV(ax, 1));	// 71890 mov     ax, 1 ;~ 47D8:0961
cs=0x47d8;eip=0x000964; 	X(PUSHF);	// 71891 pushf ;~ 47D8:0964
cs=0x47d8;eip=0x000965; 	T(CLI);	// 71892 cli ;~ 47D8:0965
cs=0x47d8;eip=0x000966; 	T(MOV(bx, *(dw*)(raddr(ds,0x2AB))));	// 71893 mov     bx, ds:2ABh ;~ 47D8:0966
cs=0x47d8;eip=0x00096a; 	T(OR(bx, bx));	// 71894 or      bx, bx ;~ 47D8:096A
cs=0x47d8;eip=0x00096c; 	J(JZ(loc_56cf0));	// 71895 jz      short loc_56CF0 ;~ 47D8:096C
cs=0x47d8;eip=0x00096e; 	T(XOR(ax, ax));	// 71896 xor     ax, ax ;~ 47D8:096E
cs=0x47d8;eip=0x000970; 	X(MOV(*(dw*)(raddr(ds,bx+0x2AB)), ax));	// 71897 mov     [bx+2ABh], ax ;~ 47D8:0970
cs=0x47d8;eip=0x000974; 	J(JCXZ(loc_56cee));	// 71898 jcxz    short loc_56CEE ;~ 47D8:0974
cs=0x47d8;eip=0x000976; 	X(SUB(*(dw*)(raddr(ds,0x2AB)), 2));	// 71899 sub     word ptr ds:2ABh, 2 ;~ 47D8:0976
cs=0x47d8;eip=0x00097b; 	J(CALL(sub_56792,0));	// 71900 call    sub_56792 ;~ 47D8:097B
cs=0x47d8;eip=0x00097e; 	J(CALL(sub_569d7,0));	// 71901 call    sub_569D7 ;~ 47D8:097E
cs=0x47d8;eip=0x000981; 	J(CALL(sub_569bf,0));	// 71902 call    sub_569BF ;~ 47D8:0981
cs=0x47d8;eip=0x000984; 	T(CMP(*(raddr(ds,0x2A7)), 0));	// 71903 cmp     byte ptr ds:2A7h, 0 ;~ 47D8:0984
cs=0x47d8;eip=0x000989; 	J(JZ(loc_56cee));	// 71904 jz      short loc_56CEE ;~ 47D8:0989
cs=0x47d8;eip=0x00098b; 	J(CALL(sub_569a0,0));	// 71905 call    sub_569A0 ;~ 47D8:098B
loc_56cee:
	// 8769 
cs=0x47d8;eip=0x00098e; 	T(XOR(ax, ax));	// 71909 xor     ax, ax ;~ 47D8:098E
loc_56cf0:
	// 8770 
cs=0x47d8;eip=0x000990; 	X(POPF);	// 71912 popf ;~ 47D8:0990
cs=0x47d8;eip=0x000991; 	J(RETN(0));	// 71913 retn ;~ 47D8:0991

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_56463: 	goto loc_56463;
        case m2c::kloc_56480: 	goto loc_56480;
        case m2c::kloc_564a4: 	goto loc_564a4;
        case m2c::kloc_564dd: 	goto loc_564dd;
        case m2c::kloc_564ef: 	goto loc_564ef;
        case m2c::kloc_56507: 	goto loc_56507;
        case m2c::kloc_5652e: 	goto loc_5652e;
        case m2c::kloc_56566: 	goto loc_56566;
        case m2c::kloc_5656f: 	goto loc_5656f;
        case m2c::kloc_56592: 	goto loc_56592;
        case m2c::kloc_565e1: 	goto loc_565e1;
        case m2c::kloc_56665: 	goto loc_56665;
        case m2c::kloc_5666f: 	goto loc_5666f;
        case m2c::kloc_56673: 	goto loc_56673;
        case m2c::kloc_56681: 	goto loc_56681;
        case m2c::kloc_5668b: 	goto loc_5668b;
        case m2c::kloc_56690: 	goto loc_56690;
        case m2c::kloc_5669e: 	goto loc_5669e;
        case m2c::kloc_566b1: 	goto loc_566b1;
        case m2c::kloc_566cf: 	goto loc_566cf;
        case m2c::kloc_566e0: 	goto loc_566e0;
        case m2c::kloc_566e2: 	goto loc_566e2;
        case m2c::kloc_56708: 	goto loc_56708;
        case m2c::kloc_56769: 	goto loc_56769;
        case m2c::kloc_56774: 	goto loc_56774;
        case m2c::kloc_5679d: 	goto loc_5679d;
        case m2c::kloc_567ae: 	goto loc_567ae;
        case m2c::kloc_5682a: 	goto loc_5682a;
        case m2c::kloc_56870: 	goto loc_56870;
        case m2c::kloc_568a4: 	goto loc_568a4;
        case m2c::kloc_5690f: 	goto loc_5690f;
        case m2c::kloc_56935: 	goto loc_56935;
        case m2c::kloc_56938: 	goto loc_56938;
        case m2c::kloc_56954: 	goto loc_56954;
        case m2c::kloc_5696a: 	goto loc_5696a;
        case m2c::kloc_5696e: 	goto loc_5696e;
        case m2c::kloc_569d2: 	goto loc_569d2;
        case m2c::kloc_56a2e: 	goto loc_56a2e;
        case m2c::kloc_56a64: 	goto loc_56a64;
        case m2c::kloc_56a6f: 	goto loc_56a6f;
        case m2c::kloc_56a93: 	goto loc_56a93;
        case m2c::kloc_56a98: 	goto loc_56a98;
        case m2c::kloc_56ae2: 	goto loc_56ae2;
        case m2c::kloc_56b81: 	goto loc_56b81;
        case m2c::kloc_56b86: 	goto loc_56b86;
        case m2c::kloc_56b89: 	goto loc_56b89;
        case m2c::kloc_56bb0: 	goto loc_56bb0;
        case m2c::kloc_56bb8: 	goto loc_56bb8;
        case m2c::kloc_56bbb: 	goto loc_56bbb;
        case m2c::kloc_56bef: 	goto loc_56bef;
        case m2c::kloc_56c31: 	goto loc_56c31;
        case m2c::kloc_56c42: 	goto loc_56c42;
        case m2c::kloc_56c97: 	goto loc_56c97;
        case m2c::kloc_56cee: 	goto loc_56cee;
        case m2c::kloc_56cf0: 	goto loc_56cf0;
        case m2c::klocret_5680b: 	goto locret_5680b;
        case m2c::kret_47d8_16b: 	goto ret_47d8_16b;
        case m2c::kret_47d8_1b1: 	goto ret_47d8_1b1;
        case m2c::kret_47d8_1c3: 	goto ret_47d8_1c3;
        case m2c::kret_47d8_1cc: 	goto ret_47d8_1cc;
        case m2c::kret_47d8_1d9: 	goto ret_47d8_1d9;
        case m2c::kret_47d8_1df: 	goto ret_47d8_1df;
        case m2c::kret_47d8_218: 	goto ret_47d8_218;
        case m2c::kret_47d8_300: 	goto ret_47d8_300;
        case m2c::kret_47d8_316: 	goto ret_47d8_316;
        case m2c::kret_47d8_337: 	goto ret_47d8_337;
        case m2c::kret_47d8_348: 	goto ret_47d8_348;
        case m2c::kret_47d8_360: 	goto ret_47d8_360;
        case m2c::kret_47d8_388: 	goto ret_47d8_388;
        case m2c::kret_47d8_3d6: 	goto ret_47d8_3d6;
        case m2c::kret_47d8_41e: 	goto ret_47d8_41e;
        case m2c::kret_47d8_433: 	goto ret_47d8_433;
        case m2c::kret_47d8_451: 	goto ret_47d8_451;
        case m2c::kret_47d8_48b: 	goto ret_47d8_48b;
        case m2c::kret_47d8_4a2: 	goto ret_47d8_4a2;
        case m2c::kret_47d8_4ad: 	goto ret_47d8_4ad;
        case m2c::kret_47d8_4c2: 	goto ret_47d8_4c2;
        case m2c::kret_47d8_4d9: 	goto ret_47d8_4d9;
        case m2c::kret_47d8_525: 	goto ret_47d8_525;
        case m2c::kret_47d8_54d: 	goto ret_47d8_54d;
        case m2c::kret_47d8_558: 	goto ret_47d8_558;
        case m2c::kret_47d8_592: 	goto ret_47d8_592;
        case m2c::kret_47d8_5e5: 	goto ret_47d8_5e5;
        case m2c::kret_47d8_644: 	goto ret_47d8_644;
        case m2c::kret_47d8_662: 	goto ret_47d8_662;
        case m2c::kret_47d8_678: 	goto ret_47d8_678;
        case m2c::kret_47d8_6be: 	goto ret_47d8_6be;
        case m2c::kret_47d8_740: 	goto ret_47d8_740;
        case m2c::kret_47d8_774: 	goto ret_47d8_774;
        case m2c::kret_47d8_78b: 	goto ret_47d8_78b;
        case m2c::kret_47d8_796: 	goto ret_47d8_796;
        case m2c::kret_47d8_7bf: 	goto ret_47d8_7bf;
        case m2c::kret_47d8_7d0: 	goto ret_47d8_7d0;
        case m2c::kret_47d8_7f9: 	goto ret_47d8_7f9;
        case m2c::kret_47d8_82c: 	goto ret_47d8_82c;
        case m2c::kret_47d8_866: 	goto ret_47d8_866;
        case m2c::kret_47d8_86a: 	goto ret_47d8_86a;
        case m2c::kret_47d8_87d: 	goto ret_47d8_87d;
        case m2c::kret_47d8_897: 	goto ret_47d8_897;
        case m2c::kret_47d8_8b3: 	goto ret_47d8_8b3;
        case m2c::kret_47d8_8b5: 	goto ret_47d8_8b5;
        case m2c::kret_47d8_8d7: 	goto ret_47d8_8d7;
        case m2c::kret_47d8_8ed: 	goto ret_47d8_8ed;
        case m2c::kret_47d8_928: 	goto ret_47d8_928;
        case m2c::kret_47d8_940: 	goto ret_47d8_940;
        case m2c::kret_47d8_950: 	goto ret_47d8_950;
        case m2c::kret_47d8_961: 	goto ret_47d8_961;
        case m2c::kseg003_102_proc: 	goto seg003_102_proc;
        case m2c::kseg003_115_proc: 	goto seg003_115_proc;
        case m2c::kseg003_591_proc: 	goto seg003_591_proc;
        case m2c::kseg003_6cd_proc: 	goto seg003_6cd_proc;
        case m2c::kseg003_788_proc: 	goto seg003_788_proc;
        case m2c::ksub_56460: 	goto sub_56460;
        case m2c::ksub_56466: 	goto sub_56466;
        case m2c::ksub_56469: 	goto sub_56469;
        case m2c::ksub_5646c: 	goto sub_5646c;
        case m2c::ksub_5646f: 	goto sub_5646f;
        case m2c::ksub_56472: 	goto sub_56472;
        case m2c::ksub_564ca: 	goto sub_564ca;
        case m2c::ksub_56510: 	goto sub_56510;
        case m2c::ksub_56522: 	goto sub_56522;
        case m2c::ksub_5652b: 	goto sub_5652b;
        case m2c::ksub_56538: 	goto sub_56538;
        case m2c::ksub_5653e: 	goto sub_5653e;
        case m2c::ksub_56577: 	goto sub_56577;
        case m2c::ksub_5665f: 	goto sub_5665f;
        case m2c::ksub_56675: 	goto sub_56675;
        case m2c::ksub_56693: 	goto sub_56693;
        case m2c::ksub_5669a: 	goto sub_5669a;
        case m2c::ksub_566a7: 	goto sub_566a7;
        case m2c::ksub_566bc: 	goto sub_566bc;
        case m2c::ksub_566e5: 	goto sub_566e5;
        case m2c::ksub_56731: 	goto sub_56731;
        case m2c::ksub_5677c: 	goto sub_5677c;
        case m2c::ksub_56792: 	goto sub_56792;
        case m2c::ksub_567b0: 	goto sub_567b0;
        case m2c::ksub_567ea: 	goto sub_567ea;
        case m2c::ksub_567fe: 	goto sub_567fe;
        case m2c::ksub_5680c: 	goto sub_5680c;
        case m2c::ksub_5681f: 	goto sub_5681f;
        case m2c::ksub_56838: 	goto sub_56838;
        case m2c::ksub_56884: 	goto sub_56884;
        case m2c::ksub_568ac: 	goto sub_568ac;
        case m2c::ksub_568b6: 	goto sub_568b6;
        case m2c::ksub_56942: 	goto sub_56942;
        case m2c::ksub_569a0: 	goto sub_569a0;
        case m2c::ksub_569bf: 	goto sub_569bf;
        case m2c::ksub_569d7: 	goto sub_569d7;
        case m2c::ksub_56a1d: 	goto sub_56a1d;
        case m2c::ksub_56ad1: 	goto sub_56ad1;
        case m2c::ksub_56b8b: 	goto sub_56b8b;
        case m2c::ksub_56bc3: 	goto sub_56bc3;
        case m2c::ksub_56bc7: 	goto sub_56bc7;
        case m2c::ksub_56bdb: 	goto sub_56bdb;
        case m2c::ksub_56bf5: 	goto sub_56bf5;
        case m2c::ksub_56c10: 	goto sub_56c10;
        case m2c::ksub_56c14: 	goto sub_56c14;
        case m2c::ksub_56c33: 	goto sub_56c33;
        case m2c::ksub_56c48: 	goto sub_56c48;
        case m2c::ksub_56c85: 	goto sub_56c85;
        case m2c::ksub_56c9d: 	goto sub_56c9d;
        case m2c::ksub_56cad: 	goto sub_56cad;
        case m2c::ksub_56cbf: 	goto sub_56cbf;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

