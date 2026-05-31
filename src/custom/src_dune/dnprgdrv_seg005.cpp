/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "dnprgdrv.h"

                

 bool _group4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group4:
    _begin:
sub_5bb20:
	// 72223 
cs=0x4d44;eip=0x000100; 	J(JMP(sub_5bbeb));	// 72225 jmp     near ptr sub_5BBEB ;~ 4D44:0100
sub_5bb23:
	// 72233 
cs=0x4d44;eip=0x000103; 	J(JMP(sub_5bc70));	// 72235 jmp     near ptr sub_5BC70 ;~ 4D44:0103
sub_5bb26:
	// 72243 
cs=0x4d44;eip=0x000106; 	J(JMP(sub_5bc01));	// 72245 jmp     near ptr sub_5BC01 ;~ 4D44:0106
sub_5bb29:
	// 72253 
cs=0x4d44;eip=0x000109; 	J(JMP(sub_5bc5b));	// 72255 jmp     near ptr sub_5BC5B ;~ 4D44:0109
sub_5bb2f:
	// 72267 
cs=0x4d44;eip=0x00010f; 	J(JMP(sub_5bd2f));	// 72269 jmp     near ptr sub_5BD2F ;~ 4D44:010F
seg005_112_proc:
	// 72274 
loc_5bb32:
	// 8771 
cs=0x4d44;eip=0x000112; 	J(JMP(loc_5bc4b));	// 72275 jmp     loc_5BC4B ;~ 4D44:0112
sub_5bbc8:
	// 72415 
cs=0x4d44;eip=0x0001a8; 	X(PUSH(ss));	// 72416 push    ss ;~ 4D44:01A8
ret_4d44_1a9:
	// 8772 
cs=0x4d44;eip=0x0001a9; 	X(POP(es));	// 72417 pop     es ;~ 4D44:01A9
cs=0x4d44;eip=0x0001aa; 	T(MOV(si, bp));	// 72418 mov     si, bp ;~ 4D44:01AA
loc_5bbcc:
	// 8773 
cs=0x4d44;eip=0x0001ac; 	X(LODS(*(dw*)(raddr(es,si)),si,2));	// 72421 lods    word ptr es:[si] ;~ 4D44:01AC
cs=0x4d44;eip=0x0001ae; 	T(ADD(ax, 2));	// 72422 add     ax, 2 ;~ 4D44:01AE
cs=0x4d44;eip=0x0001b1; 	T(MOV(di, ax));	// 72423 mov     di, ax ;~ 4D44:01B1
cs=0x4d44;eip=0x0001b3; 	X(PUSH(cx));	// 72424 push    cx ;~ 4D44:01B3
cs=0x4d44;eip=0x0001b4; 	T(MOV(cx, 9));	// 72425 mov     cx, 9 ;~ 4D44:01B4
cs=0x4d44;eip=0x0001b7; 	T(MOV(al, 0x2E));	// 72426 mov     al, 2Eh ; '.' ;~ 4D44:01B7
	// 72427 repne scasb ;~ 4D44:01B9
cs=0x4d44;eip=0x0001b9; 	T(	REPNE SCASB);	// 72427 repne scasb ;~ 4D44:01B9
cs=0x4d44;eip=0x0001bb; 	X(POP(cx));	// 72428 pop     cx ;~ 4D44:01BB
cs=0x4d44;eip=0x0001bc; 	J(JNZ(loc_5bbe8));	// 72429 jnz     short loc_5BBE8 ;~ 4D44:01BC
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x0001be; 	T(MOV(ax, *(dw*)(((db*)&word_5bbc5))));	// 72430 mov     ax, cs:word_5BBC5 ;~ 4D44:01BE
cs=0x4d44;eip=0x0001c2; 	X(STOSW);	// 72431 stosw ;~ 4D44:01C2
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x0001c3; 	T(MOV(al, *(&byte_5bbc7)));	// 72432 mov     al, cs:byte_5BBC7 ;~ 4D44:01C3
cs=0x4d44;eip=0x0001c7; 	X(STOSB);	// 72433 stosb ;~ 4D44:01C7
loc_5bbe8:
	// 8774 
cs=0x4d44;eip=0x0001c8; 	J(LOOP(loc_5bbcc));	// 72436 loop    loc_5BBCC ;~ 4D44:01C8
cs=0x4d44;eip=0x0001ca; 	J(RETN(0));	// 72437 retn ;~ 4D44:01CA
sub_5bbeb:
	// 72444 
cs=0x4d44;eip=0x0001cb; 	T(OR(ax, ax));	// 72445 or      ax, ax ;~ 4D44:01CB
ret_4d44_1cd:
	// 8775 
cs=0x4d44;eip=0x0001cd; 	J(JZ(loc_5bbf3));	// 72446 jz      short loc_5BBF3 ;~ 4D44:01CD
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x0001cf; 	X(MOV(*(dw*)(((db*)&word_5bb45)), ax));	// 72447 mov     cs:word_5BB45, ax ;~ 4D44:01CF
loc_5bbf3:
	// 8776 
cs=0x4d44;eip=0x0001d3; 	J(CALL(sub_5bbc8,0));	// 72450 call    sub_5BBC8 ;~ 4D44:01D3
cs=0x4d44;eip=0x0001d6; 	J(CALL(_group4,m2c::kloc_5bf79));	// 72451 call    loc_5BF79 ;~ 4D44:01D6
cs=0x4d44;eip=0x0001d9; 	X(PUSH(cs));	// 72452 push    cs ;~ 4D44:01D9
cs=0x4d44;eip=0x0001da; 	J(CALL(sub_5bc01,0));	// 72453 call    near ptr sub_5BC01 ;~ 4D44:01DA
cs=0x4d44;eip=0x0001dd; 	T(MOV(bx, 0x500));	// 72454 mov     bx, 500h ;~ 4D44:01DD
cs=0x4d44;eip=0x0001e0; 	J(RETF(0));	// 72455 retf ;~ 4D44:01E0
sub_5bc01:
	// 72462 
cs=0x4d44;eip=0x0001e1; 	X(PUSHF);	// 72464 pushf ;~ 4D44:01E1
ret_4d44_1e2:
	// 8777 
cs=0x4d44;eip=0x0001e2; 	T(CLI);	// 72465 cli ;~ 4D44:01E2
cs=0x4d44;eip=0x0001e3; 	J(CALL(sub_5bf4f,0));	// 72466 call    sub_5BF4F ;~ 4D44:01E3
cs=0x4d44;eip=0x0001e6; 	T(XOR(ax, ax));	// 72467 xor     ax, ax ;~ 4D44:01E6
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x0001e8; 	X(MOV(*(&byte_5bb59), al));	// 72468 mov     cs:byte_5BB59, al ;~ 4D44:01E8
cs=0x4d44;eip=0x0001ec; 	X(POPF);	// 72469 popf ;~ 4D44:01EC
cs=0x4d44;eip=0x0001ed; 	J(RETF(0));	// 72470 retf ;~ 4D44:01ED
seg005_1ee_proc:
	// 72474 
cs=0x4d44;eip=0x0001ee; 	X(PUSH(bx));	// 72474 push    bx ;~ 4D44:01EE
ret_4d44_1ef:
	// 8778 
cs=0x4d44;eip=0x0001ef; 	T(MOV(bx, 0x0FFFF));	// 72475 mov     bx, 0FFFFh ;~ 4D44:01EF
cs=0x4d44;eip=0x0001f2; 	T(CMP(ax, 0x60));	// 72476 cmp     ax, 60h ; '`' ;~ 4D44:01F2
cs=0x4d44;eip=0x0001f5; 	J(JC(loc_5bc31));	// 72477 jb      short loc_5BC31 ;~ 4D44:01F5
cs=0x4d44;eip=0x0001f7; 	T(MOV(bx, 0x0AAAA));	// 72478 mov     bx, 0AAAAh ;~ 4D44:01F7
cs=0x4d44;eip=0x0001fa; 	T(CMP(ax, 0x0C0));	// 72479 cmp     ax, 0C0h ; 'À' ;~ 4D44:01FA
cs=0x4d44;eip=0x0001fd; 	J(JC(loc_5bc31));	// 72480 jb      short loc_5BC31 ;~ 4D44:01FD
cs=0x4d44;eip=0x0001ff; 	T(MOV(bx, 0x8888));	// 72481 mov     bx, 8888h ;~ 4D44:01FF
cs=0x4d44;eip=0x000202; 	T(CMP(ax, 0x180));	// 72482 cmp     ax, 180h ;~ 4D44:0202
cs=0x4d44;eip=0x000205; 	J(JC(loc_5bc31));	// 72483 jb      short loc_5BC31 ;~ 4D44:0205
cs=0x4d44;eip=0x000207; 	T(MOV(bx, 0x8080));	// 72484 mov     bx, 8080h ;~ 4D44:0207
cs=0x4d44;eip=0x00020a; 	T(CMP(ax, 0x300));	// 72485 cmp     ax, 300h ;~ 4D44:020A
cs=0x4d44;eip=0x00020d; 	J(JC(loc_5bc31));	// 72486 jb      short loc_5BC31 ;~ 4D44:020D
cs=0x4d44;eip=0x00020f; 	T(XOR(bl, bl));	// 72487 xor     bl, bl ;~ 4D44:020F
loc_5bc31:
	// 8779 
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x000211; 	X(MOV(*(dw*)(((db*)&word_5bb5b)), bx));	// 72491 mov     cs:word_5BB5B, bx ;~ 4D44:0211
cs=0x4d44;eip=0x000216; 	X(POP(bx));	// 72492 pop     bx ;~ 4D44:0216
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x000217; 	X(MOV(*(&byte_5bb5e), bl));	// 72493 mov     cs:byte_5BB5E, bl ;~ 4D44:0217
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x00021c; 	T(MOV(al, *(&byte_5bb59)));	// 72494 mov     al, cs:byte_5BB59 ;~ 4D44:021C
cs=0x4d44;eip=0x000220; 	T(OR(al, al));	// 72495 or      al, al ;~ 4D44:0220
cs=0x4d44;eip=0x000222; 	J(JNS(locret_5bc4a));	// 72496 jns     short locret_5BC4A ;~ 4D44:0222
cs=0x4d44;eip=0x000224; 	T(OR(al, 0x40));	// 72497 or      al, 40h ;~ 4D44:0224
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x000226; 	X(MOV(*(&byte_5bb59), al));	// 72498 mov     cs:byte_5BB59, al ;~ 4D44:0226
locret_5bc4a:
	// 8780 
cs=0x4d44;eip=0x00022a; 	J(RETF(0));	// 72501 retf ;~ 4D44:022A
loc_5bc4b:
	// 8781 
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x00022b; 	X(MOV(*(&byte_5bb5f), al));	// 72505 mov     cs:byte_5BB5F, al ;~ 4D44:022B
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x00022f; 	X(MOV(*(&byte_5bb5e), al));	// 72506 mov     cs:byte_5BB5E, al ;~ 4D44:022F
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x000233; 	X(MOV(*(dw*)(((db*)&word_5bb5b)), 0x0FFFF));	// 72507 mov     cs:word_5BB5B, 0FFFFh ;~ 4D44:0233
cs=0x4d44;eip=0x00023a; 	J(RETF(0));	// 72508 retf ;~ 4D44:023A
sub_5bc5b:
	// 72513 
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x00023b; 	X(MOV(*(&byte_5bb5a), 1));	// 72514 mov     cs:byte_5BB5A, 1 ;~ 4D44:023B
ret_4d44_241:
	// 8782 
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x000241; 	T(MOV(al, *(&byte_5bb59)));	// 72515 mov     al, cs:byte_5BB59 ;~ 4D44:0241
cs=0x4d44;eip=0x000245; 	J(RETF(0));	// 72516 retf ;~ 4D44:0245
sub_5bc70:
	// 72534 
cs=0x4d44;eip=0x000250; 	X(PUSH(ds));	// 72535 push    ds ;~ 4D44:0250
ret_4d44_251:
	// 8783 
cs=0x4d44;eip=0x000251; 	X(PUSH(cs));	// 72536 push    cs ;~ 4D44:0251
cs=0x4d44;eip=0x000252; 	X(POP(ds));	// 72537 pop     ds ;~ 4D44:0252
cs=0x4d44;eip=0x000253; 	X(MOV(byte_5bb5a, al));	// 72539 mov     byte_5BB5A, al ;~ 4D44:0253
cs=0x4d44;eip=0x000256; 	T(MOV(ax, *(dw*)(raddr(es,si))));	// 72540 mov     ax, es:[si] ;~ 4D44:0256
cs=0x4d44;eip=0x000259; 	T(MOV(di, 0x246));	// 72541 mov     di, 246h ;~ 4D44:0259
cs=0x4d44;eip=0x00025c; 	X(MOV(*(dw*)(raddr(ds,di)), si));	// 72542 mov     [di], si ;~ 4D44:025C
cs=0x4d44;eip=0x00025e; 	X(MOV(*(dw*)(raddr(ds,di+2)), es));	// 72543 mov     word ptr [di+2], es ;~ 4D44:025E
cs=0x4d44;eip=0x000261; 	X(MOV(*(dw*)(raddr(ds,di+4)), ax));	// 72544 mov     [di+4], ax ;~ 4D44:0261
cs=0x4d44;eip=0x000264; 	T(MOV(ax, *(dw*)(raddr(es,si+0x4000))));	// 72545 mov     ax, es:[si+4000h] ;~ 4D44:0264
cs=0x4d44;eip=0x000269; 	X(MOV(*(dw*)(raddr(ds,di+6)), ax));	// 72546 mov     [di+6], ax ;~ 4D44:0269
cs=0x4d44;eip=0x00026c; 	T(MOV(ax, *(dw*)(raddr(es,si-0x8000))));	// 72547 mov     ax, es:[si-8000h] ;~ 4D44:026C
cs=0x4d44;eip=0x000271; 	X(MOV(*(dw*)(raddr(ds,di+8)), ax));	// 72548 mov     [di+8], ax ;~ 4D44:0271
cs=0x4d44;eip=0x000274; 	T(ADD(si, 2));	// 72549 add     si, 2 ;~ 4D44:0274
cs=0x4d44;eip=0x000277; 	X(MOV(word_5bb35, si));	// 72550 mov     word_5BB35, si ;~ 4D44:0277
cs=0x4d44;eip=0x00027b; 	X(MOV(word_5bb37, es));	// 72551 mov     word_5BB37, es ;~ 4D44:027B
cs=0x4d44;eip=0x00027f; 	T(SUB(si, 2));	// 72552 sub     si, 2 ;~ 4D44:027F
cs=0x4d44;eip=0x000282; 	T(ADD(si, *(dw*)(raddr(es,si))));	// 72553 add     si, es:[si] ;~ 4D44:0282
cs=0x4d44;eip=0x000285; 	X(MOV(word_5bb39, si));	// 72554 mov     word_5BB39, si ;~ 4D44:0285
cs=0x4d44;eip=0x000289; 	X(MOV(word_5bb3b, es));	// 72555 mov     word_5BB3B, es ;~ 4D44:0289
cs=0x4d44;eip=0x00028d; 	J(CALL(sub_5bf4f,0));	// 72556 call    sub_5BF4F ;~ 4D44:028D
cs=0x4d44;eip=0x000290; 	J(CALL(sub_5bcce,0));	// 72557 call    sub_5BCCE ;~ 4D44:0290
cs=0x4d44;eip=0x000293; 	T(MOV(al, byte_5bb5f));	// 72558 mov     al, byte_5BB5F ;~ 4D44:0293
cs=0x4d44;eip=0x000296; 	X(MOV(byte_5bb5d, al));	// 72559 mov     byte_5BB5D, al ;~ 4D44:0296
cs=0x4d44;eip=0x000299; 	X(MOV(byte_5bb5e, al));	// 72560 mov     byte_5BB5E, al ;~ 4D44:0299
cs=0x4d44;eip=0x00029c; 	T(XOR(ax, ax));	// 72561 xor     ax, ax ;~ 4D44:029C
cs=0x4d44;eip=0x00029e; 	X(MOV(word_5bb3d, ax));	// 72562 mov     word_5BB3D, ax ;~ 4D44:029E
cs=0x4d44;eip=0x0002a1; 	X(MOV(word_5bb43, ax));	// 72563 mov     word_5BB43, ax ;~ 4D44:02A1
cs=0x4d44;eip=0x0002a4; 	J(CALL(sub_5bd8f,0));	// 72564 call    sub_5BD8F ;~ 4D44:02A4
cs=0x4d44;eip=0x0002a7; 	T(MOV(al, 0x80));	// 72565 mov     al, 80h ; '€' ;~ 4D44:02A7
cs=0x4d44;eip=0x0002a9; 	X(MOV(byte_5bb59, al));	// 72566 mov     byte_5BB59, al ;~ 4D44:02A9
cs=0x4d44;eip=0x0002ac; 	X(POP(ds));	// 72567 pop     ds ;~ 4D44:02AC
cs=0x4d44;eip=0x0002ad; 	J(RETF(0));	// 72569 retf ;~ 4D44:02AD
sub_5bcce:
	// 72576 
cs=0x4d44;eip=0x0002ae; 	X(PUSH(ds));	// 72577 push    ds ;~ 4D44:02AE
ret_4d44_2af:
	// 8784 
cs=0x4d44;eip=0x0002af; 	X(PUSH(ds));	// 72578 push    ds ;~ 4D44:02AF
cs=0x4d44;eip=0x0002b0; 	X(POP(es));	// 72579 pop     es ;~ 4D44:02B0
cs=0x4d44;eip=0x0002b1; 	X(MOV(*(dw*)(raddr(ds,0x140)), 0));	// 72580 mov     word ptr ds:140h, 0 ;~ 4D44:02B1
cs=0x4d44;eip=0x0002b7; 	T(LDS(si, *(dw*)(raddr(ds,0x115))));	// 72581 lds     si, ds:115h ;~ 4D44:02B7
cs=0x4d44;eip=0x0002bb; 	T(MOV(bp, si));	// 72582 mov     bp, si ;~ 4D44:02BB
cs=0x4d44;eip=0x0002bd; 	T(MOV(di, 0x166));	// 72583 mov     di, 166h ;~ 4D44:02BD
cs=0x4d44;eip=0x0002c0; 	T(MOV(cx, 9));	// 72584 mov     cx, 9 ;~ 4D44:02C0
loc_5bce3:
	// 8785 
cs=0x4d44;eip=0x0002c3; 	T(LODSW);	// 72587 lodsw ;~ 4D44:02C3
cs=0x4d44;eip=0x0002c4; 	T(OR(ax, ax));	// 72588 or      ax, ax ;~ 4D44:02C4
cs=0x4d44;eip=0x0002c6; 	J(JZ(loc_5bcef));	// 72589 jz      short loc_5BCEF ;~ 4D44:02C6
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x0002c8; 	X(INC(*(dw*)(((db*)&word_5bb60))));	// 72590 inc     cs:word_5BB60 ;~ 4D44:02C8
cs=0x4d44;eip=0x0002cd; 	T(ADD(ax, bp));	// 72591 add     ax, bp ;~ 4D44:02CD
loc_5bcef:
	// 8786 
cs=0x4d44;eip=0x0002cf; 	X(STOSW);	// 72594 stosw ;~ 4D44:02CF
cs=0x4d44;eip=0x0002d0; 	J(LOOP(loc_5bce3));	// 72595 loop    loc_5BCE3 ;~ 4D44:02D0
cs=0x4d44;eip=0x0002d2; 	T(MOV(di, 0x19C));	// 72596 mov     di, 19Ch ;~ 4D44:02D2
cs=0x4d44;eip=0x0002d5; 	T(MOV(cl, 9));	// 72597 mov     cl, 9 ;~ 4D44:02D5
cs=0x4d44;eip=0x0002d7; 	T(MOV(al, 0x60));	// 72598 mov     al, 60h ; '`' ;~ 4D44:02D7
	// 72599 rep stosb ;~ 4D44:02D9
cs=0x4d44;eip=0x0002d9; 	X(	REP STOSB);	// 72599 rep stosb ;~ 4D44:02D9
cs=0x4d44;eip=0x0002db; 	X(POP(ds));	// 72600 pop     ds ;~ 4D44:02DB
cs=0x4d44;eip=0x0002dc; 	T(LES(si, *(dw*)(raddr(ds,0x115))));	// 72601 les     si, ds:115h ;~ 4D44:02DC
loc_5bd00:
	// 8787 
cs=0x4d44;eip=0x0002e0; 	X(MOV(*(dw*)(raddr(ds,0x11F)), 1));	// 72604 mov     word ptr ds:11Fh, 1 ;~ 4D44:02E0
cs=0x4d44;eip=0x0002e6; 	X(MOV(*(dw*)(raddr(ds,0x121)), 0x60));	// 72605 mov     word ptr ds:121h, 60h ; '`' ;~ 4D44:02E6
cs=0x4d44;eip=0x0002ec; 	T(MOV(cx, 9));	// 72606 mov     cx, 9 ;~ 4D44:02EC
cs=0x4d44;eip=0x0002ef; 	T(MOV(di, 0x142));	// 72607 mov     di, 142h ;~ 4D44:02EF
loc_5bd12:
	// 8788 
cs=0x4d44;eip=0x0002f2; 	T(MOV(si, *(dw*)(raddr(ds,di+0x24))));	// 72610 mov     si, [di+24h] ;~ 4D44:02F2
cs=0x4d44;eip=0x0002f5; 	X(MOV(*(dw*)(raddr(ds,di+0x12)), si));	// 72611 mov     [di+12h], si ;~ 4D44:02F5
cs=0x4d44;eip=0x0002f8; 	X(MOV(*(dw*)(raddr(ds,di)), 0x0FFFF));	// 72612 mov     word ptr [di], 0FFFFh ;~ 4D44:02F8
cs=0x4d44;eip=0x0002fc; 	T(OR(si, si));	// 72613 or      si, si ;~ 4D44:02FC
cs=0x4d44;eip=0x0002fe; 	J(JZ(loc_5bd29));	// 72614 jz      short loc_5BD29 ;~ 4D44:02FE
cs=0x4d44;eip=0x000300; 	T(MOV(ax, cx));	// 72615 mov     ax, cx ;~ 4D44:0300
cs=0x4d44;eip=0x000302; 	J(CALL(sub_5bebb,0));	// 72616 call    sub_5BEBB ;~ 4D44:0302
cs=0x4d44;eip=0x000305; 	X(INC(*(dw*)(raddr(ds,di))));	// 72617 inc     word ptr [di] ;~ 4D44:0305
cs=0x4d44;eip=0x000307; 	T(MOV(cx, ax));	// 72618 mov     cx, ax ;~ 4D44:0307
loc_5bd29:
	// 8789 
cs=0x4d44;eip=0x000309; 	T(ADD(di, 2));	// 72621 add     di, 2 ;~ 4D44:0309
cs=0x4d44;eip=0x00030c; 	J(LOOP(loc_5bd12));	// 72622 loop    loc_5BD12 ;~ 4D44:030C
cs=0x4d44;eip=0x00030e; 	J(RETN(0));	// 72623 retn ;~ 4D44:030E
sub_5bd2f:
	// 72630 
cs=0x4d44;eip=0x00030f; 	X(PUSH(ds));	// 72631 push    ds ;~ 4D44:030F
ret_4d44_310:
	// 8790 
cs=0x4d44;eip=0x000310; 	T(MOV(ax, cs));	// 72632 mov     ax, cs ;~ 4D44:0310
cs=0x4d44;eip=0x000312; 	T(MOV(ds, ax));	// 72633 mov     ds, ax ;~ 4D44:0312
cs=0x4d44;eip=0x000314; 	T(MOV(al, byte_5bb59));	// 72635 mov     al, byte_5BB59 ;~ 4D44:0314
cs=0x4d44;eip=0x000317; 	T(OR(al, al));	// 72636 or      al, al ;~ 4D44:0317
cs=0x4d44;eip=0x000319; 	J(JNS(loc_5bd5c));	// 72637 jns     short loc_5BD5C ;~ 4D44:0319
cs=0x4d44;eip=0x00031b; 	X(DEC(*(db*)(((db*)&word_5bb3d)+1)));	// 72638 dec     byte ptr word_5BB3D+1 ;~ 4D44:031B
cs=0x4d44;eip=0x00031f; 	J(JNS(loc_5bd53));	// 72639 jns     short loc_5BD53 ;~ 4D44:031F
cs=0x4d44;eip=0x000321; 	J(CALL(sub_5bd69,0));	// 72640 call    sub_5BD69 ;~ 4D44:0321
cs=0x4d44;eip=0x000324; 	J(JNZ(loc_5bd5c));	// 72641 jnz     short loc_5BD5C ;~ 4D44:0324
cs=0x4d44;eip=0x000326; 	X(PUSH(dx));	// 72642 push    dx ;~ 4D44:0326
cs=0x4d44;eip=0x000327; 	X(PUSH(si));	// 72643 push    si ;~ 4D44:0327
cs=0x4d44;eip=0x000328; 	X(PUSH(di));	// 72644 push    di ;~ 4D44:0328
cs=0x4d44;eip=0x000329; 	X(PUSH(bp));	// 72645 push    bp ;~ 4D44:0329
cs=0x4d44;eip=0x00032a; 	X(PUSH(es));	// 72646 push    es ;~ 4D44:032A
cs=0x4d44;eip=0x00032b; 	J(CALL(sub_5bd8f,0));	// 72647 call    sub_5BD8F ;~ 4D44:032B
cs=0x4d44;eip=0x00032e; 	X(POP(es));	// 72648 pop     es ;~ 4D44:032E
cs=0x4d44;eip=0x00032f; 	X(POP(bp));	// 72649 pop     bp ;~ 4D44:032F
cs=0x4d44;eip=0x000330; 	X(POP(di));	// 72650 pop     di ;~ 4D44:0330
cs=0x4d44;eip=0x000331; 	X(POP(si));	// 72651 pop     si ;~ 4D44:0331
cs=0x4d44;eip=0x000332; 	X(POP(dx));	// 72652 pop     dx ;~ 4D44:0332
loc_5bd53:
	// 8791 
cs=0x4d44;eip=0x000333; 	X(ROL(word_5bb5b, 1));	// 72655 rol     word_5BB5B, 1 ;~ 4D44:0333
cs=0x4d44;eip=0x000337; 	J(JNC(loc_5bd5c));	// 72656 jnb     short loc_5BD5C ;~ 4D44:0337
cs=0x4d44;eip=0x000339; 	J(CALL(sub_5bef7,0));	// 72657 call    sub_5BEF7 ;~ 4D44:0339
loc_5bd5c:
	// 8792 
cs=0x4d44;eip=0x00033c; 	T(MOV(al, byte_5bb59));	// 72661 mov     al, byte_5BB59 ;~ 4D44:033C
cs=0x4d44;eip=0x00033f; 	T(MOV(bx, word_5bb3f));	// 72662 mov     bx, word_5BB3F ;~ 4D44:033F
cs=0x4d44;eip=0x000343; 	T(MOV(cx, word_5bb41));	// 72663 mov     cx, word_5BB41 ;~ 4D44:0343
cs=0x4d44;eip=0x000347; 	X(POP(ds));	// 72664 pop     ds ;~ 4D44:0347
cs=0x4d44;eip=0x000348; 	J(RETF(0));	// 72666 retf ;~ 4D44:0348
sub_5bd69:
	// 72673 
cs=0x4d44;eip=0x000349; 	X(PUSH(si));	// 72674 push    si ;~ 4D44:0349
ret_4d44_34a:
	// 8793 
cs=0x4d44;eip=0x00034a; 	X(PUSH(es));	// 72675 push    es ;~ 4D44:034A
cs=0x4d44;eip=0x00034b; 	T(LES(si, *(dw*)(raddr(ds,0x246))));	// 72676 les     si, ds:246h ;~ 4D44:034B
cs=0x4d44;eip=0x00034f; 	T(MOV(ax, *(dw*)(raddr(es,si))));	// 72677 mov     ax, es:[si] ;~ 4D44:034F
cs=0x4d44;eip=0x000352; 	T(CMP(*(dw*)(raddr(ds,0x24A)), ax));	// 72678 cmp     ds:24Ah, ax ;~ 4D44:0352
cs=0x4d44;eip=0x000356; 	J(JNZ(loc_5bd8c));	// 72679 jnz     short loc_5BD8C ;~ 4D44:0356
cs=0x4d44;eip=0x000358; 	T(MOV(ax, *(dw*)(raddr(es,si+0x4000))));	// 72680 mov     ax, es:[si+4000h] ;~ 4D44:0358
cs=0x4d44;eip=0x00035d; 	T(CMP(*(dw*)(raddr(ds,0x24C)), ax));	// 72681 cmp     ds:24Ch, ax ;~ 4D44:035D
cs=0x4d44;eip=0x000361; 	J(JNZ(loc_5bd8c));	// 72682 jnz     short loc_5BD8C ;~ 4D44:0361
cs=0x4d44;eip=0x000363; 	T(MOV(ax, *(dw*)(raddr(es,si-0x8000))));	// 72683 mov     ax, es:[si-8000h] ;~ 4D44:0363
cs=0x4d44;eip=0x000368; 	T(CMP(*(dw*)(raddr(ds,0x24E)), ax));	// 72684 cmp     ds:24Eh, ax ;~ 4D44:0368
loc_5bd8c:
	// 8794 
cs=0x4d44;eip=0x00036c; 	X(POP(es));	// 72688 pop     es ;~ 4D44:036C
cs=0x4d44;eip=0x00036d; 	X(POP(si));	// 72689 pop     si ;~ 4D44:036D
cs=0x4d44;eip=0x00036e; 	J(RETN(0));	// 72690 retn ;~ 4D44:036E
sub_5bd8f:
	// 72697 
cs=0x4d44;eip=0x00036f; 	T(LES(bx, *(dw*)(raddr(ds,0x115))));	// 72699 les     bx, ds:115h ;~ 4D44:036F
ret_4d44_373:
	// 8795 
cs=0x4d44;eip=0x000373; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x30))));	// 72700 mov     ax, es:[bx+30h] ;~ 4D44:0373
cs=0x4d44;eip=0x000377; 	X(ADD(*(dw*)(raddr(ds,0x11D)), ax));	// 72701 add     ds:11Dh, ax ;~ 4D44:0377
cs=0x4d44;eip=0x00037b; 	T(MOV(di, 0x142));	// 72702 mov     di, 142h ;~ 4D44:037B
cs=0x4d44;eip=0x00037e; 	J(CALL(sub_5bde7,0));	// 72703 call    sub_5BDE7 ;~ 4D44:037E
cs=0x4d44;eip=0x000381; 	T(MOV(cx, *(dw*)(raddr(ds,0x140))));	// 72704 mov     cx, ds:140h ;~ 4D44:0381
loc_5bda5:
	// 8796 
cs=0x4d44;eip=0x000385; 	X(DEC(*(dw*)(raddr(ds,di))));	// 72707 dec     word ptr [di] ;~ 4D44:0385
cs=0x4d44;eip=0x000387; 	J(JNZ(loc_5bdd2));	// 72708 jnz     short loc_5BDD2 ;~ 4D44:0387
loc_5bda9:
	// 8797 
cs=0x4d44;eip=0x000389; 	T(MOV(si, *(dw*)(raddr(ds,di+0x12))));	// 72711 mov     si, [di+12h] ;~ 4D44:0389
cs=0x4d44;eip=0x00038c; 	T(OR(si, si));	// 72712 or      si, si ;~ 4D44:038C
cs=0x4d44;eip=0x00038e; 	J(JZ(loc_5bdd2));	// 72713 jz      short loc_5BDD2 ;~ 4D44:038E
cs=0x4d44;eip=0x000390; 	X(PUSH(cx));	// 72714 push    cx ;~ 4D44:0390
cs=0x4d44;eip=0x000391; 	X(PUSH(di));	// 72715 push    di ;~ 4D44:0391
cs=0x4d44;eip=0x000392; 	X(LODS(*(dw*)(raddr(es,si)),si,2));	// 72716 lods    word ptr es:[si] ;~ 4D44:0392
cs=0x4d44;eip=0x000394; 	T(MOV(dx, di));	// 72717 mov     dx, di ;~ 4D44:0394
cs=0x4d44;eip=0x000396; 	T(SUB(dx, 0x142));	// 72718 sub     dx, 142h ;~ 4D44:0396
cs=0x4d44;eip=0x00039a; 	T(SHR(dx, 1));	// 72719 shr     dx, 1 ;~ 4D44:039A
cs=0x4d44;eip=0x00039c; 	T(MOV(bx, ax));	// 72720 mov     bx, ax ;~ 4D44:039C
cs=0x4d44;eip=0x00039e; 	T(AND(bx, 0x70));	// 72721 and     bx, 70h ;~ 4D44:039E
cs=0x4d44;eip=0x0003a1; 	T(SHR(bx, 1));	// 72722 shr     bx, 1 ;~ 4D44:03A1
cs=0x4d44;eip=0x0003a3; 	T(SHR(bx, 1));	// 72723 shr     bx, 1 ;~ 4D44:03A3
cs=0x4d44;eip=0x0003a5; 	T(SHR(bx, 1));	// 72724 shr     bx, 1 ;~ 4D44:03A5
cs=0x4d44;eip=0x0003a7; 	J(CALL(__dispatch_call,*(dw*)(raddr(ds,bx+0x129))));	// 72725 call    word ptr [bx+129h] ;~ 4D44:03A7
cs=0x4d44;eip=0x0003ab; 	X(POP(di));	// 72726 pop     di ;~ 4D44:03AB
cs=0x4d44;eip=0x0003ac; 	X(POP(cx));	// 72727 pop     cx ;~ 4D44:03AC
cs=0x4d44;eip=0x0003ad; 	T(CMP(*(dw*)(raddr(ds,di)), 0));	// 72728 cmp     word ptr [di], 0 ;~ 4D44:03AD
cs=0x4d44;eip=0x0003b0; 	J(JZ(loc_5bda9));	// 72729 jz      short loc_5BDA9 ;~ 4D44:03B0
loc_5bdd2:
	// 8798 
cs=0x4d44;eip=0x0003b2; 	T(ADD(di, 2));	// 72733 add     di, 2 ;~ 4D44:03B2
cs=0x4d44;eip=0x0003b5; 	J(LOOP(loc_5bda5));	// 72734 loop    loc_5BDA5 ;~ 4D44:03B5
cs=0x4d44;eip=0x0003b7; 	X(DEC(*(raddr(ds,0x121))));	// 72735 dec     byte ptr ds:121h ;~ 4D44:03B7
cs=0x4d44;eip=0x0003bb; 	J(JNZ(locret_5bde6));	// 72736 jnz     short locret_5BDE6 ;~ 4D44:03BB
cs=0x4d44;eip=0x0003bd; 	X(MOV(*(raddr(ds,0x121)), 0x60));	// 72737 mov     byte ptr ds:121h, 60h ; '`' ;~ 4D44:03BD
cs=0x4d44;eip=0x0003c2; 	X(INC(*(dw*)(raddr(ds,0x11F))));	// 72738 inc     word ptr ds:11Fh ;~ 4D44:03C2
locret_5bde6:
	// 8799 
cs=0x4d44;eip=0x0003c6; 	J(RETN(0));	// 72741 retn ;~ 4D44:03C6
sub_5bde7:
	// 72748 
cs=0x4d44;eip=0x0003c7; 	T(CMP(*(dw*)(raddr(ds,0x123)), 0));	// 72750 cmp     word ptr ds:123h, 0 ;~ 4D44:03C7
ret_4d44_3cc:
	// 8800 
cs=0x4d44;eip=0x0003cc; 	J(JNZ(loc_5be18));	// 72751 jnz     short loc_5BE18 ;~ 4D44:03CC
cs=0x4d44;eip=0x0003ce; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2A))));	// 72752 mov     ax, es:[bx+2Ah] ;~ 4D44:03CE
cs=0x4d44;eip=0x0003d2; 	T(CMP(ax, *(dw*)(raddr(ds,0x11F))));	// 72753 cmp     ax, ds:11Fh ;~ 4D44:03D2
cs=0x4d44;eip=0x0003d6; 	J(JNZ(locret_5be17));	// 72754 jnz     short locret_5BE17 ;~ 4D44:03D6
cs=0x4d44;eip=0x0003d8; 	T(CMP(*(dw*)(raddr(ds,0x121)), 0x60));	// 72755 cmp     word ptr ds:121h, 60h ; '`' ;~ 4D44:03D8
cs=0x4d44;eip=0x0003dd; 	J(JNZ(locret_5be17));	// 72756 jnz     short locret_5BE17 ;~ 4D44:03DD
cs=0x4d44;eip=0x0003df; 	X(PUSH(di));	// 72757 push    di ;~ 4D44:03DF
cs=0x4d44;eip=0x0003e0; 	X(PUSH(es));	// 72758 push    es ;~ 4D44:03E0
cs=0x4d44;eip=0x0003e1; 	T(MOV(si, di));	// 72759 mov     si, di ;~ 4D44:03E1
cs=0x4d44;eip=0x0003e3; 	T(ADD(di, 0x36));	// 72760 add     di, 36h ; '6' ;~ 4D44:03E3
cs=0x4d44;eip=0x0003e6; 	X(PUSH(ds));	// 72761 push    ds ;~ 4D44:03E6
cs=0x4d44;eip=0x0003e7; 	X(POP(es));	// 72762 pop     es ;~ 4D44:03E7
cs=0x4d44;eip=0x0003e8; 	T(MOV(cx, 0x12));	// 72763 mov     cx, 12h ;~ 4D44:03E8
	// 72764 rep movsw ;~ 4D44:03EB
cs=0x4d44;eip=0x0003eb; 	X(	REP MOVSW);	// 72764 rep movsw ;~ 4D44:03EB
cs=0x4d44;eip=0x0003ed; 	X(POP(es));	// 72765 pop     es ;~ 4D44:03ED
cs=0x4d44;eip=0x0003ee; 	X(POP(di));	// 72766 pop     di ;~ 4D44:03EE
cs=0x4d44;eip=0x0003ef; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2E))));	// 72767 mov     ax, es:[bx+2Eh] ;~ 4D44:03EF
cs=0x4d44;eip=0x0003f3; 	T(DEC(ax));	// 72768 dec     ax ;~ 4D44:03F3
cs=0x4d44;eip=0x0003f4; 	X(MOV(*(dw*)(raddr(ds,0x123)), ax));	// 72769 mov     ds:123h, ax ;~ 4D44:03F4
locret_5be17:
	// 8801 
cs=0x4d44;eip=0x0003f7; 	J(RETN(0));	// 72773 retn ;~ 4D44:03F7
loc_5be18:
	// 8802 
cs=0x4d44;eip=0x0003f8; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2C))));	// 72777 mov     ax, es:[bx+2Ch] ;~ 4D44:03F8
cs=0x4d44;eip=0x0003fc; 	T(CMP(ax, *(dw*)(raddr(ds,0x11F))));	// 72778 cmp     ax, ds:11Fh ;~ 4D44:03FC
cs=0x4d44;eip=0x000400; 	J(JNZ(locret_5be17));	// 72779 jnz     short locret_5BE17 ;~ 4D44:0400
cs=0x4d44;eip=0x000402; 	X(DEC(*(dw*)(raddr(ds,0x123))));	// 72780 dec     word ptr ds:123h ;~ 4D44:0402
cs=0x4d44;eip=0x000406; 	X(PUSH(di));	// 72781 push    di ;~ 4D44:0406
cs=0x4d44;eip=0x000407; 	X(PUSH(es));	// 72782 push    es ;~ 4D44:0407
cs=0x4d44;eip=0x000408; 	T(si = di+0x36);	// 72783 lea     si, [di+36h] ;~ 4D44:0408
cs=0x4d44;eip=0x00040b; 	X(PUSH(ds));	// 72784 push    ds ;~ 4D44:040B
cs=0x4d44;eip=0x00040c; 	X(POP(es));	// 72785 pop     es ;~ 4D44:040C
cs=0x4d44;eip=0x00040d; 	T(MOV(cx, 0x12));	// 72786 mov     cx, 12h ;~ 4D44:040D
	// 72787 rep movsw ;~ 4D44:0410
cs=0x4d44;eip=0x000410; 	X(	REP MOVSW);	// 72787 rep movsw ;~ 4D44:0410
cs=0x4d44;eip=0x000412; 	X(POP(es));	// 72788 pop     es ;~ 4D44:0412
cs=0x4d44;eip=0x000413; 	X(POP(di));	// 72789 pop     di ;~ 4D44:0413
cs=0x4d44;eip=0x000414; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2A))));	// 72790 mov     ax, es:[bx+2Ah] ;~ 4D44:0414
cs=0x4d44;eip=0x000418; 	X(MOV(*(dw*)(raddr(ds,0x11F)), ax));	// 72791 mov     ds:11Fh, ax ;~ 4D44:0418
cs=0x4d44;eip=0x00041b; 	J(RETN(0));	// 72792 retn ;~ 4D44:041B
seg005_41c_proc:
	// 72797 
loc_5be3c:
	// 8803 
cs=0x4d44;eip=0x00041c; 	J(CALL(sub_5bebb,0));	// 72798 call    sub_5BEBB ;~ 4D44:041C
cs=0x4d44;eip=0x00041f; 	J(JMP(loc_5bfb2));	// 72799 jmp     loc_5BFB2 ;~ 4D44:041F
loc_5be42:
	// 8804 
cs=0x4d44;eip=0x000422; 	J(CALL(sub_5bebb,0));	// 72803 call    sub_5BEBB ;~ 4D44:0422
cs=0x4d44;eip=0x000425; 	J(JMP(loc_5bfb2));	// 72804 jmp     loc_5BFB2 ;~ 4D44:0425
loc_5be48:
	// 8805 
cs=0x4d44;eip=0x000428; 	T(MOV(cl, *(raddr(es,si))));	// 72809 mov     cl, es:[si] ;~ 4D44:0428
cs=0x4d44;eip=0x00042b; 	T(INC(si));	// 72810 inc     si ;~ 4D44:042B
cs=0x4d44;eip=0x00042c; 	J(CALL(sub_5bebb,0));	// 72811 call    sub_5BEBB ;~ 4D44:042C
cs=0x4d44;eip=0x00042f; 	J(JMP(sub_5bfc6));	// 72812 jmp     sub_5BFC6 ;~ 4D44:042F
loc_5be52:
	// 8806 
cs=0x4d44;eip=0x000432; 	T(MOV(cl, *(raddr(es,si))));	// 72816 mov     cl, es:[si] ;~ 4D44:0432
cs=0x4d44;eip=0x000435; 	T(INC(si));	// 72817 inc     si ;~ 4D44:0435
cs=0x4d44;eip=0x000436; 	J(CALL(sub_5bebb,0));	// 72818 call    sub_5BEBB ;~ 4D44:0436
cs=0x4d44;eip=0x000439; 	T(CMP(ah, 7));	// 72819 cmp     ah, 7 ;~ 4D44:0439
cs=0x4d44;eip=0x00043c; 	J(JNZ(loc_5be70));	// 72820 jnz     short loc_5BE70 ;~ 4D44:043C
cs=0x4d44;eip=0x00043e; 	T(MOV(bx, ax));	// 72821 mov     bx, ax ;~ 4D44:043E
cs=0x4d44;eip=0x000440; 	T(AND(bx, 0x0F));	// 72822 and     bx, 0Fh ;~ 4D44:0440
cs=0x4d44;eip=0x000443; 	X(MOV(*(raddr(ds,bx+0x19C)), cl));	// 72823 mov     [bx+19Ch], cl ;~ 4D44:0443
cs=0x4d44;eip=0x000447; 	X(PUSH(ax));	// 72824 push    ax ;~ 4D44:0447
cs=0x4d44;eip=0x000448; 	T(MOV(al, *(raddr(ds,0x13D))));	// 72825 mov     al, ds:13Dh ;~ 4D44:0448
cs=0x4d44;eip=0x00044b; 	T(MUL1_1(cl));	// 72826 mul     cl ;~ 4D44:044B
cs=0x4d44;eip=0x00044d; 	T(MOV(cl, ah));	// 72827 mov     cl, ah ;~ 4D44:044D
cs=0x4d44;eip=0x00044f; 	X(POP(ax));	// 72828 pop     ax ;~ 4D44:044F
loc_5be70:
	// 8807 
cs=0x4d44;eip=0x000450; 	J(JMP(sub_5bfc6));	// 72831 jmp     sub_5BFC6 ;~ 4D44:0450
loc_5be73:
	// 8808 
cs=0x4d44;eip=0x000453; 	T(MOV(cl, *(raddr(es,si))));	// 72835 mov     cl, es:[si] ;~ 4D44:0453
cs=0x4d44;eip=0x000456; 	T(INC(si));	// 72836 inc     si ;~ 4D44:0456
cs=0x4d44;eip=0x000457; 	J(CALL(sub_5bebb,0));	// 72837 call    sub_5BEBB ;~ 4D44:0457
cs=0x4d44;eip=0x00045a; 	J(JMP(sub_5bfc6));	// 72838 jmp     sub_5BFC6 ;~ 4D44:045A
loc_5be7d:
	// 8809 
cs=0x4d44;eip=0x00045d; 	T(CMP(al, 0x0FF));	// 72842 cmp     al, 0FFh ;~ 4D44:045D
cs=0x4d44;eip=0x00045f; 	J(JZ(loc_5be82));	// 72843 jz      short loc_5BE82 ;~ 4D44:045F
	// 72844 nop ;~ 4D44:0461
loc_5be82:
	// 8810 
cs=0x4d44;eip=0x000462; 	X(MOV(*(dw*)(raddr(ds,di)), 0x0FFFF));	// 72847 mov     word ptr [di], 0FFFFh ;~ 4D44:0462
cs=0x4d44;eip=0x000466; 	X(SUB(*(raddr(ds,di+0x12)), 2));	// 72848 sub     byte ptr [di+12h], 2 ;~ 4D44:0466
cs=0x4d44;eip=0x00046a; 	T(OR(dx, dx));	// 72849 or      dx, dx ;~ 4D44:046A
cs=0x4d44;eip=0x00046c; 	J(JNZ(locret_5bea9));	// 72850 jnz     short locret_5BEA9 ;~ 4D44:046C
cs=0x4d44;eip=0x00046e; 	X(DEC(*(raddr(ds,0x13A))));	// 72851 dec     byte ptr ds:13Ah ;~ 4D44:046E
cs=0x4d44;eip=0x000472; 	J(JZ(loc_5beaa));	// 72852 jz      short loc_5BEAA ;~ 4D44:0472
cs=0x4d44;eip=0x000474; 	J(JNS(loc_5be9a));	// 72853 jns     short loc_5BE9A ;~ 4D44:0474
cs=0x4d44;eip=0x000476; 	X(INC(*(raddr(ds,0x13A))));	// 72854 inc     byte ptr ds:13Ah ;~ 4D44:0476
loc_5be9a:
	// 8811 
cs=0x4d44;eip=0x00047a; 	J(CALL(_group4,m2c::kloc_5bd00));	// 72857 call    loc_5BD00 ;~ 4D44:047A
cs=0x4d44;eip=0x00047d; 	T(LES(bx, *(dw*)(raddr(ds,0x115))));	// 72858 les     bx, ds:115h ;~ 4D44:047D
cs=0x4d44;eip=0x000481; 	T(MOV(di, 0x142));	// 72859 mov     di, 142h ;~ 4D44:0481
cs=0x4d44;eip=0x000484; 	J(CALL(sub_5bde7,0));	// 72860 call    sub_5BDE7 ;~ 4D44:0484
cs=0x4d44;eip=0x000487; 	X(DEC(*(dw*)(raddr(ds,di))));	// 72861 dec     word ptr [di] ;~ 4D44:0487
locret_5bea9:
	// 8812 
cs=0x4d44;eip=0x000489; 	J(RETN(0));	// 72864 retn ;~ 4D44:0489
loc_5beaa:
	// 8813 
cs=0x4d44;eip=0x00048a; 	T(MOV(ax, 0x0FFFF));	// 72868 mov     ax, 0FFFFh ;~ 4D44:048A
cs=0x4d44;eip=0x00048d; 	X(PUSH(es));	// 72869 push    es ;~ 4D44:048D
cs=0x4d44;eip=0x00048e; 	X(PUSH(ds));	// 72870 push    ds ;~ 4D44:048E
cs=0x4d44;eip=0x00048f; 	X(POP(es));	// 72871 pop     es ;~ 4D44:048F
cs=0x4d44;eip=0x000490; 	T(MOV(cx, 9));	// 72872 mov     cx, 9 ;~ 4D44:0490
	// 72873 rep stosw ;~ 4D44:0493
cs=0x4d44;eip=0x000493; 	X(	REP STOSW);	// 72873 rep stosw ;~ 4D44:0493
cs=0x4d44;eip=0x000495; 	X(POP(es));	// 72874 pop     es ;~ 4D44:0495
cs=0x4d44;eip=0x000496; 	X(PUSH(cs));	// 72875 push    cs ;~ 4D44:0496
cs=0x4d44;eip=0x000497; 	J(CALL(sub_5bc01,0));	// 72876 call    near ptr sub_5BC01 ;~ 4D44:0497
cs=0x4d44;eip=0x00049a; 	J(RETN(0));	// 72877 retn ;~ 4D44:049A
sub_5bebb:
	// 72882 
cs=0x4d44;eip=0x00049b; 	X(PUSH(ax));	// 72884 push    ax ;~ 4D44:049B
ret_4d44_49c:
	// 8814 
cs=0x4d44;eip=0x00049c; 	X(PUSH(cx));	// 72885 push    cx ;~ 4D44:049C
cs=0x4d44;eip=0x00049d; 	T(XOR(ax, ax));	// 72886 xor     ax, ax ;~ 4D44:049D
cs=0x4d44;eip=0x00049f; 	X(LODS(*(raddr(es,si)),si,1));	// 72887 lods    byte ptr es:[si] ;~ 4D44:049F
cs=0x4d44;eip=0x0004a1; 	T(OR(al, al));	// 72888 or      al, al ;~ 4D44:04A1
cs=0x4d44;eip=0x0004a3; 	J(JNS(loc_5beef));	// 72889 jns     short loc_5BEEF ;~ 4D44:04A3
cs=0x4d44;eip=0x0004a5; 	T(XOR(cx, cx));	// 72890 xor     cx, cx ;~ 4D44:04A5
loc_5bec7:
	// 8815 
cs=0x4d44;eip=0x0004a7; 	T(MOV(ch, cl));	// 72893 mov     ch, cl ;~ 4D44:04A7
cs=0x4d44;eip=0x0004a9; 	T(MOV(cl, ah));	// 72894 mov     cl, ah ;~ 4D44:04A9
cs=0x4d44;eip=0x0004ab; 	T(MOV(ah, al));	// 72895 mov     ah, al ;~ 4D44:04AB
cs=0x4d44;eip=0x0004ad; 	X(LODS(*(raddr(es,si)),si,1));	// 72896 lods    byte ptr es:[si] ;~ 4D44:04AD
cs=0x4d44;eip=0x0004af; 	T(OR(al, al));	// 72897 or      al, al ;~ 4D44:04AF
cs=0x4d44;eip=0x0004b1; 	J(JS(loc_5bec7));	// 72898 js      short loc_5BEC7 ;~ 4D44:04B1
cs=0x4d44;eip=0x0004b3; 	T(AND(ax, 0x7F7F));	// 72899 and     ax, 7F7Fh ;~ 4D44:04B3
cs=0x4d44;eip=0x0004b6; 	T(AND(cx, 0x7F7F));	// 72900 and     cx, 7F7Fh ;~ 4D44:04B6
cs=0x4d44;eip=0x0004ba; 	T(SHL(cl, 1));	// 72901 shl     cl, 1 ;~ 4D44:04BA
cs=0x4d44;eip=0x0004bc; 	T(SHR(cx, 1));	// 72902 shr     cx, 1 ;~ 4D44:04BC
cs=0x4d44;eip=0x0004be; 	T(SHL(al, 1));	// 72903 shl     al, 1 ;~ 4D44:04BE
cs=0x4d44;eip=0x0004c0; 	T(SHL(ax, 1));	// 72904 shl     ax, 1 ;~ 4D44:04C0
cs=0x4d44;eip=0x0004c2; 	T(SHR(cx, 1));	// 72905 shr     cx, 1 ;~ 4D44:04C2
cs=0x4d44;eip=0x0004c4; 	T(RCR(ax, 1));	// 72906 rcr     ax, 1 ;~ 4D44:04C4
cs=0x4d44;eip=0x0004c6; 	T(SHR(cx, 1));	// 72907 shr     cx, 1 ;~ 4D44:04C6
cs=0x4d44;eip=0x0004c8; 	T(RCR(ax, 1));	// 72908 rcr     ax, 1 ;~ 4D44:04C8
cs=0x4d44;eip=0x0004ca; 	J(JCXZ(loc_5beef));	// 72909 jcxz    short loc_5BEEF ;~ 4D44:04CA
cs=0x4d44;eip=0x0004cc; 	T(MOV(ax, 0x0FFFF));	// 72910 mov     ax, 0FFFFh ;~ 4D44:04CC
loc_5beef:
	// 8816 
cs=0x4d44;eip=0x0004cf; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 72914 mov     [di], ax ;~ 4D44:04CF
cs=0x4d44;eip=0x0004d1; 	X(MOV(*(dw*)(raddr(ds,di+0x12)), si));	// 72915 mov     [di+12h], si ;~ 4D44:04D1
cs=0x4d44;eip=0x0004d4; 	X(POP(cx));	// 72916 pop     cx ;~ 4D44:04D4
cs=0x4d44;eip=0x0004d5; 	X(POP(ax));	// 72917 pop     ax ;~ 4D44:04D5
cs=0x4d44;eip=0x0004d6; 	J(RETN(0));	// 72918 retn ;~ 4D44:04D6
sub_5bef7:
	// 72925 
cs=0x4d44;eip=0x0004d7; 	T(MOV(al, *(raddr(ds,0x13D))));	// 72926 mov     al, ds:13Dh ;~ 4D44:04D7
ret_4d44_4da:
	// 8817 
cs=0x4d44;eip=0x0004da; 	T(SUB(al, *(raddr(ds,0x13E))));	// 72927 sub     al, ds:13Eh ;~ 4D44:04DA
cs=0x4d44;eip=0x0004de; 	J(JNZ(loc_5bf0c));	// 72928 jnz     short loc_5BF0C ;~ 4D44:04DE
cs=0x4d44;eip=0x0004e0; 	X(MOV(*(dw*)(raddr(ds,0x13B)), 1));	// 72929 mov     word ptr ds:13Bh, 1 ;~ 4D44:04E0
cs=0x4d44;eip=0x0004e6; 	X(AND(*(raddr(ds,0x139)), 0x0BF));	// 72930 and     byte ptr ds:139h, 0BFh ;~ 4D44:04E6
cs=0x4d44;eip=0x0004eb; 	J(RETN(0));	// 72931 retn ;~ 4D44:04EB
loc_5bf0c:
	// 8818 
cs=0x4d44;eip=0x0004ec; 	X(PUSH(dx));	// 72935 push    dx ;~ 4D44:04EC
cs=0x4d44;eip=0x0004ed; 	X(PUSH(si));	// 72936 push    si ;~ 4D44:04ED
cs=0x4d44;eip=0x0004ee; 	X(PUSH(di));	// 72937 push    di ;~ 4D44:04EE
cs=0x4d44;eip=0x0004ef; 	X(PUSH(bp));	// 72938 push    bp ;~ 4D44:04EF
cs=0x4d44;eip=0x0004f0; 	X(PUSH(es));	// 72939 push    es ;~ 4D44:04F0
cs=0x4d44;eip=0x0004f1; 	J(JC(loc_5bf1b));	// 72940 jb      short loc_5BF1B ;~ 4D44:04F1
cs=0x4d44;eip=0x0004f3; 	T(CMP(al, 3));	// 72941 cmp     al, 3 ;~ 4D44:04F3
cs=0x4d44;eip=0x0004f5; 	J(JC(loc_5bf21));	// 72942 jb      short loc_5BF21 ;~ 4D44:04F5
cs=0x4d44;eip=0x0004f7; 	T(MOV(al, 3));	// 72943 mov     al, 3 ;~ 4D44:04F7
cs=0x4d44;eip=0x0004f9; 	J(JMP(loc_5bf21));	// 72944 jmp     short loc_5BF21 ;~ 4D44:04F9
loc_5bf1b:
	// 8819 
cs=0x4d44;eip=0x0004fb; 	T(CMP(al, 0x0FD));	// 72948 cmp     al, 0FDh ; 'ı' ;~ 4D44:04FB
cs=0x4d44;eip=0x0004fd; 	J(JNC(loc_5bf21));	// 72949 jnb     short loc_5BF21 ;~ 4D44:04FD
cs=0x4d44;eip=0x0004ff; 	T(MOV(al, 0x0FD));	// 72950 mov     al, 0FDh ; 'ı' ;~ 4D44:04FF
loc_5bf21:
	// 8820 
cs=0x4d44;eip=0x000501; 	X(SUB(*(raddr(ds,0x13D)), al));	// 72954 sub     ds:13Dh, al ;~ 4D44:0501
cs=0x4d44;eip=0x000505; 	T(MOV(bl, *(raddr(ds,0x13D))));	// 72955 mov     bl, ds:13Dh ;~ 4D44:0505
cs=0x4d44;eip=0x000509; 	T(MOV(si, 0x19C));	// 72956 mov     si, 19Ch ;~ 4D44:0509
cs=0x4d44;eip=0x00050c; 	T(MOV(dx, 0x7B0));	// 72957 mov     dx, 7B0h ;~ 4D44:050C
loc_5bf2f:
	// 8821 
cs=0x4d44;eip=0x00050f; 	T(LODSB);	// 72960 lodsb ;~ 4D44:050F
cs=0x4d44;eip=0x000510; 	T(MUL1_1(bl));	// 72961 mul     bl ;~ 4D44:0510
cs=0x4d44;eip=0x000512; 	T(MOV(cl, ah));	// 72962 mov     cl, ah ;~ 4D44:0512
cs=0x4d44;eip=0x000514; 	T(MOV(ax, dx));	// 72963 mov     ax, dx ;~ 4D44:0514
cs=0x4d44;eip=0x000516; 	J(CALL(sub_5bfc6,0));	// 72964 call    sub_5BFC6 ;~ 4D44:0516
cs=0x4d44;eip=0x000519; 	T(INC(dx));	// 72965 inc     dx ;~ 4D44:0519
cs=0x4d44;eip=0x00051a; 	T(CMP(dl, 0x0BA));	// 72966 cmp     dl, 0BAh ; 'º' ;~ 4D44:051A
cs=0x4d44;eip=0x00051d; 	J(JC(loc_5bf2f));	// 72967 jb      short loc_5BF2F ;~ 4D44:051D
cs=0x4d44;eip=0x00051f; 	T(OR(bl, bl));	// 72968 or      bl, bl ;~ 4D44:051F
cs=0x4d44;eip=0x000521; 	J(JNZ(loc_5bf49));	// 72969 jnz     short loc_5BF49 ;~ 4D44:0521
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x000523; 	X(MOV(*(&byte_5bb59), 0));	// 72970 mov     cs:byte_5BB59, 0 ;~ 4D44:0523
loc_5bf49:
	// 8822 
cs=0x4d44;eip=0x000529; 	X(POP(es));	// 72973 pop     es ;~ 4D44:0529
cs=0x4d44;eip=0x00052a; 	X(POP(bp));	// 72974 pop     bp ;~ 4D44:052A
cs=0x4d44;eip=0x00052b; 	X(POP(di));	// 72975 pop     di ;~ 4D44:052B
cs=0x4d44;eip=0x00052c; 	X(POP(si));	// 72976 pop     si ;~ 4D44:052C
cs=0x4d44;eip=0x00052d; 	X(POP(dx));	// 72977 pop     dx ;~ 4D44:052D
cs=0x4d44;eip=0x00052e; 	J(RETN(0));	// 72978 retn ;~ 4D44:052E
sub_5bf4f:
	// 72985 
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x00052f; 	X(MOV(*(dw*)(((db*)&word_5bb47)), 0x50));	// 72987 mov     cs:word_5BB47, 50h ; 'P' ;~ 4D44:052F
ret_4d44_536:
	// 8823 
cs=0x4d44;eip=0x000536; 	T(XOR(dx, dx));	// 72988 xor     dx, dx ;~ 4D44:0536
loc_5bf58:
	// 8824 
cs=0x4d44;eip=0x000538; 	T(MOV(ax, 0x7BB0));	// 72991 mov     ax, 7BB0h ;~ 4D44:0538
cs=0x4d44;eip=0x00053b; 	T(OR(al, dl));	// 72992 or      al, dl ;~ 4D44:053B
cs=0x4d44;eip=0x00053d; 	T(XOR(cl, cl));	// 72993 xor     cl, cl ;~ 4D44:053D
cs=0x4d44;eip=0x00053f; 	J(CALL(sub_5bfc6,0));	// 72994 call    sub_5BFC6 ;~ 4D44:053F
cs=0x4d44;eip=0x000542; 	T(MOV(ax, 0x0E0));	// 72995 mov     ax, 0E0h ; 'à' ;~ 4D44:0542
cs=0x4d44;eip=0x000545; 	T(OR(al, dl));	// 72996 or      al, dl ;~ 4D44:0545
cs=0x4d44;eip=0x000547; 	T(MOV(cl, 0x40));	// 72997 mov     cl, 40h ; '@' ;~ 4D44:0547
cs=0x4d44;eip=0x000549; 	J(CALL(sub_5bfc6,0));	// 72998 call    sub_5BFC6 ;~ 4D44:0549
cs=0x4d44;eip=0x00054c; 	T(INC(dx));	// 72999 inc     dx ;~ 4D44:054C
cs=0x4d44;eip=0x00054d; 	T(CMP(dx, 0x0A));	// 73000 cmp     dx, 0Ah ;~ 4D44:054D
cs=0x4d44;eip=0x000550; 	J(JC(loc_5bf58));	// 73001 jb      short loc_5BF58 ;~ 4D44:0550
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x000552; 	X(MOV(*(dw*)(((db*)&word_5bb47)), 1));	// 73002 mov     cs:word_5BB47, 1 ;~ 4D44:0552
loc_5bf79:
	// 8825 
cs=0x4d44;eip=0x000559; 	T(MOV(bl, 0x0FF));	// 73005 mov     bl, 0FFh ;~ 4D44:0559
cs=0x4d44;eip=0x00055b; 	J(CALL(sub_5bf84,0));	// 73006 call    sub_5BF84 ;~ 4D44:055B
cs=0x4d44;eip=0x00055e; 	T(MOV(bl, 0x3F));	// 73007 mov     bl, 3Fh ; '?' ;~ 4D44:055E
cs=0x4d44;eip=0x000560; 	J(CALL(sub_5bf84,0));	// 73008 call    sub_5BF84 ;~ 4D44:0560
cs=0x4d44;eip=0x000563; 	J(RETN(0));	// 73009 retn ;~ 4D44:0563
sub_5bf84:
	// 73016 
cs=0x4d44;eip=0x000564; 	X(PUSH(cx));	// 73018 push    cx ;~ 4D44:0564
ret_4d44_565:
	// 8826 
cs=0x4d44;eip=0x000565; 	X(PUSH(dx));	// 73019 push    dx ;~ 4D44:0565
cs=0x4d44;eip=0x000566; 	X(PUSHF);	// 73020 pushf ;~ 4D44:0566
cs=0x4d44;eip=0x000567; 	T(CLI);	// 73021 cli ;~ 4D44:0567
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x000568; 	T(MOV(dx, *(dw*)(((db*)&word_5bb45))));	// 73022 mov     dx, cs:word_5BB45 ;~ 4D44:0568
cs=0x4d44;eip=0x00056d; 	T(INC(dx));	// 73023 inc     dx ;~ 4D44:056D
cs=0x4d44;eip=0x00056e; 	T(XOR(cx, cx));	// 73024 xor     cx, cx ;~ 4D44:056E
loc_5bf90:
	// 8827 
cs=0x4d44;eip=0x000570; 	R(IN(al, dx));	// 73027 in      al, dx ;~ 4D44:0570
cs=0x4d44;eip=0x000571; 	T(TEST(al, 0x40));	// 73028 test    al, 40h ;~ 4D44:0571
cs=0x4d44;eip=0x000573; 	J(LOOPNE(loc_5bf90));	// 73029 loopne  loc_5BF90 ;~ 4D44:0573
cs=0x4d44;eip=0x000575; 	T(MOV(al, bl));	// 73030 mov     al, bl ;~ 4D44:0575
cs=0x4d44;eip=0x000577; 	R(OUT(dx, al));	// 73031 out     dx, al ;~ 4D44:0577
cs=0x4d44;eip=0x000578; 	T(MOV(cx, 0x64));	// 73032 mov     cx, 64h ; 'd' ;~ 4D44:0578
loc_5bf9b:
	// 8828 
cs=0x4d44;eip=0x00057b; 	R(IN(al, dx));	// 73036 in      al, dx ;~ 4D44:057B
cs=0x4d44;eip=0x00057c; 	T(TEST(al, 0x80));	// 73037 test    al, 80h ;~ 4D44:057C
cs=0x4d44;eip=0x00057e; 	J(LOOPNE(loc_5bf9b));	// 73038 loopne  loc_5BF9B ;~ 4D44:057E
cs=0x4d44;eip=0x000580; 	T(INC(cx));	// 73039 inc     cx ;~ 4D44:0580
cs=0x4d44;eip=0x000581; 	T(DEC(dx));	// 73040 dec     dx ;~ 4D44:0581
cs=0x4d44;eip=0x000582; 	R(IN(al, dx));	// 73041 in      al, dx ;~ 4D44:0582
cs=0x4d44;eip=0x000583; 	T(INC(dx));	// 73042 inc     dx ;~ 4D44:0583
cs=0x4d44;eip=0x000584; 	T(CMP(al, 0x0FE));	// 73043 cmp     al, 0FEh ; 'ş' ;~ 4D44:0584
cs=0x4d44;eip=0x000586; 	J(LOOPNE(loc_5bf9b));	// 73044 loopne  loc_5BF9B ;~ 4D44:0586
cs=0x4d44;eip=0x000588; 	T(MOV(cx, 0x4E20));	// 73045 mov     cx, 4E20h ;~ 4D44:0588
loc_5bfab:
	// 8829 
cs=0x4d44;eip=0x00058b; 	R(IN(al, dx));	// 73048 in      al, dx ;~ 4D44:058B
cs=0x4d44;eip=0x00058c; 	J(LOOP(loc_5bfab));	// 73049 loop    loc_5BFAB ;~ 4D44:058C
cs=0x4d44;eip=0x00058e; 	X(POPF);	// 73050 popf ;~ 4D44:058E
cs=0x4d44;eip=0x00058f; 	X(POP(dx));	// 73051 pop     dx ;~ 4D44:058F
cs=0x4d44;eip=0x000590; 	X(POP(cx));	// 73052 pop     cx ;~ 4D44:0590
cs=0x4d44;eip=0x000591; 	J(RETN(0));	// 73053 retn ;~ 4D44:0591
seg005_592_proc:
	// 73058 
loc_5bfb2:
	// 8830 
cs=0x4d44;eip=0x000592; 	X(PUSH(bx));	// 73060 push    bx ;~ 4D44:0592
cs=0x4d44;eip=0x000593; 	X(PUSH(cx));	// 73061 push    cx ;~ 4D44:0593
cs=0x4d44;eip=0x000594; 	X(PUSH(dx));	// 73062 push    dx ;~ 4D44:0594
cs=0x4d44;eip=0x000595; 	X(PUSHF);	// 73063 pushf ;~ 4D44:0595
cs=0x4d44;eip=0x000596; 	T(MOV(bx, ax));	// 73064 mov     bx, ax ;~ 4D44:0596
cs=0x4d44;eip=0x000598; 	T(CLI);	// 73065 cli ;~ 4D44:0598
cs=0x4d44;eip=0x000599; 	J(CALL(sub_5bfdf,0));	// 73066 call    sub_5BFDF ;~ 4D44:0599
cs=0x4d44;eip=0x00059c; 	T(MOV(bl, bh));	// 73067 mov     bl, bh ;~ 4D44:059C
cs=0x4d44;eip=0x00059e; 	J(CALL(sub_5bfdf,0));	// 73068 call    sub_5BFDF ;~ 4D44:059E
cs=0x4d44;eip=0x0005a1; 	X(POPF);	// 73069 popf ;~ 4D44:05A1
cs=0x4d44;eip=0x0005a2; 	X(POP(dx));	// 73070 pop     dx ;~ 4D44:05A2
cs=0x4d44;eip=0x0005a3; 	X(POP(cx));	// 73071 pop     cx ;~ 4D44:05A3
cs=0x4d44;eip=0x0005a4; 	X(POP(bx));	// 73072 pop     bx ;~ 4D44:05A4
cs=0x4d44;eip=0x0005a5; 	J(RETN(0));	// 73073 retn ;~ 4D44:05A5
sub_5bfc6:
	// 73078 
cs=0x4d44;eip=0x0005a6; 	X(PUSH(bx));	// 73080 push    bx ;~ 4D44:05A6
ret_4d44_5a7:
	// 8831 
cs=0x4d44;eip=0x0005a7; 	X(PUSH(cx));	// 73081 push    cx ;~ 4D44:05A7
cs=0x4d44;eip=0x0005a8; 	X(PUSH(dx));	// 73082 push    dx ;~ 4D44:05A8
cs=0x4d44;eip=0x0005a9; 	X(PUSHF);	// 73083 pushf ;~ 4D44:05A9
cs=0x4d44;eip=0x0005aa; 	T(MOV(bx, ax));	// 73084 mov     bx, ax ;~ 4D44:05AA
cs=0x4d44;eip=0x0005ac; 	X(PUSH(cx));	// 73085 push    cx ;~ 4D44:05AC
cs=0x4d44;eip=0x0005ad; 	T(CLI);	// 73086 cli ;~ 4D44:05AD
cs=0x4d44;eip=0x0005ae; 	J(CALL(sub_5bfdf,0));	// 73087 call    sub_5BFDF ;~ 4D44:05AE
cs=0x4d44;eip=0x0005b1; 	T(MOV(bl, bh));	// 73088 mov     bl, bh ;~ 4D44:05B1
cs=0x4d44;eip=0x0005b3; 	J(CALL(sub_5bfdf,0));	// 73089 call    sub_5BFDF ;~ 4D44:05B3
cs=0x4d44;eip=0x0005b6; 	X(POP(bx));	// 73090 pop     bx ;~ 4D44:05B6
cs=0x4d44;eip=0x0005b7; 	J(CALL(sub_5bfdf,0));	// 73091 call    sub_5BFDF ;~ 4D44:05B7
cs=0x4d44;eip=0x0005ba; 	X(POPF);	// 73092 popf ;~ 4D44:05BA
cs=0x4d44;eip=0x0005bb; 	X(POP(dx));	// 73093 pop     dx ;~ 4D44:05BB
cs=0x4d44;eip=0x0005bc; 	X(POP(cx));	// 73094 pop     cx ;~ 4D44:05BC
cs=0x4d44;eip=0x0005bd; 	X(POP(bx));	// 73095 pop     bx ;~ 4D44:05BD
cs=0x4d44;eip=0x0005be; 	J(RETN(0));	// 73096 retn ;~ 4D44:05BE
sub_5bfdf:
	// 73103 
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x0005bf; 	T(MOV(dx, *(dw*)(((db*)&word_5bb45))));	// 73105 mov     dx, cs:word_5BB45 ;~ 4D44:05BF
ret_4d44_5c4:
	// 8832 
cs=0x4d44;eip=0x0005c4; 	T(INC(dx));	// 73106 inc     dx ;~ 4D44:05C4
cs=0x4d44;eip=0x0005c5; 	T(MOV(cx, 0x0FF));	// 73107 mov     cx, 0FFh ;~ 4D44:05C5
loc_5bfe8:
	// 8833 
cs=0x4d44;eip=0x0005c8; 	R(IN(al, dx));	// 73110 in      al, dx ;~ 4D44:05C8
cs=0x4d44;eip=0x0005c9; 	T(TEST(al, 0x40));	// 73111 test    al, 40h ;~ 4D44:05C9
cs=0x4d44;eip=0x0005cb; 	J(LOOPNE(loc_5bfe8));	// 73112 loopne  loc_5BFE8 ;~ 4D44:05CB
cs=0x4d44;eip=0x0005cd; 	T(DEC(dx));	// 73113 dec     dx ;~ 4D44:05CD
cs=0x4d44;eip=0x0005ce; 	T(MOV(al, bl));	// 73114 mov     al, bl ;~ 4D44:05CE
cs=0x4d44;eip=0x0005d0; 	R(OUT(dx, al));	// 73115 out     dx, al ;~ 4D44:05D0
cs=0x4d44;eip=0x0005d1; 	T(INC(dx));	// 73116 inc     dx ;~ 4D44:05D1
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x0005d2; 	T(MOV(cx, *(dw*)(((db*)&word_5bb47))));	// 73117 mov     cx, cs:word_5BB47 ;~ 4D44:05D2
loc_5bff7:
	// 8834 
cs=0x4d44;eip=0x0005d7; 	R(IN(al, dx));	// 73120 in      al, dx ;~ 4D44:05D7
cs=0x4d44;eip=0x0005d8; 	J(LOOP(loc_5bff7));	// 73121 loop    loc_5BFF7 ;~ 4D44:05D8
cs=0x4d44;eip=0x0005da; 	J(RETN(0));	// 73122 retn ;~ 4D44:05DA

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_5bbcc: 	goto loc_5bbcc;
        case m2c::kloc_5bbe8: 	goto loc_5bbe8;
        case m2c::kloc_5bbf3: 	goto loc_5bbf3;
        case m2c::kloc_5bc31: 	goto loc_5bc31;
        case m2c::kloc_5bc4b: 	goto loc_5bc4b;
        case m2c::kloc_5bce3: 	goto loc_5bce3;
        case m2c::kloc_5bcef: 	goto loc_5bcef;
        case m2c::kloc_5bd00: 	goto loc_5bd00;
        case m2c::kloc_5bd12: 	goto loc_5bd12;
        case m2c::kloc_5bd29: 	goto loc_5bd29;
        case m2c::kloc_5bd53: 	goto loc_5bd53;
        case m2c::kloc_5bd5c: 	goto loc_5bd5c;
        case m2c::kloc_5bd8c: 	goto loc_5bd8c;
        case m2c::kloc_5bda5: 	goto loc_5bda5;
        case m2c::kloc_5bda9: 	goto loc_5bda9;
        case m2c::kloc_5bdd2: 	goto loc_5bdd2;
        case m2c::kloc_5be18: 	goto loc_5be18;
        case m2c::kloc_5be42: 	goto loc_5be42;
        case m2c::kloc_5be48: 	goto loc_5be48;
        case m2c::kloc_5be52: 	goto loc_5be52;
        case m2c::kloc_5be70: 	goto loc_5be70;
        case m2c::kloc_5be73: 	goto loc_5be73;
        case m2c::kloc_5be7d: 	goto loc_5be7d;
        case m2c::kloc_5be82: 	goto loc_5be82;
        case m2c::kloc_5be9a: 	goto loc_5be9a;
        case m2c::kloc_5beaa: 	goto loc_5beaa;
        case m2c::kloc_5bec7: 	goto loc_5bec7;
        case m2c::kloc_5beef: 	goto loc_5beef;
        case m2c::kloc_5bf0c: 	goto loc_5bf0c;
        case m2c::kloc_5bf1b: 	goto loc_5bf1b;
        case m2c::kloc_5bf21: 	goto loc_5bf21;
        case m2c::kloc_5bf2f: 	goto loc_5bf2f;
        case m2c::kloc_5bf49: 	goto loc_5bf49;
        case m2c::kloc_5bf58: 	goto loc_5bf58;
        case m2c::kloc_5bf79: 	goto loc_5bf79;
        case m2c::kloc_5bf90: 	goto loc_5bf90;
        case m2c::kloc_5bf9b: 	goto loc_5bf9b;
        case m2c::kloc_5bfab: 	goto loc_5bfab;
        case m2c::kloc_5bfe8: 	goto loc_5bfe8;
        case m2c::kloc_5bff7: 	goto loc_5bff7;
        case m2c::klocret_5bc4a: 	goto locret_5bc4a;
        case m2c::klocret_5bde6: 	goto locret_5bde6;
        case m2c::klocret_5be17: 	goto locret_5be17;
        case m2c::klocret_5bea9: 	goto locret_5bea9;
        case m2c::kret_4d44_1a9: 	goto ret_4d44_1a9;
        case m2c::kret_4d44_1cd: 	goto ret_4d44_1cd;
        case m2c::kret_4d44_1e2: 	goto ret_4d44_1e2;
        case m2c::kret_4d44_1ef: 	goto ret_4d44_1ef;
        case m2c::kret_4d44_241: 	goto ret_4d44_241;
        case m2c::kret_4d44_251: 	goto ret_4d44_251;
        case m2c::kret_4d44_2af: 	goto ret_4d44_2af;
        case m2c::kret_4d44_310: 	goto ret_4d44_310;
        case m2c::kret_4d44_34a: 	goto ret_4d44_34a;
        case m2c::kret_4d44_373: 	goto ret_4d44_373;
        case m2c::kret_4d44_3cc: 	goto ret_4d44_3cc;
        case m2c::kret_4d44_49c: 	goto ret_4d44_49c;
        case m2c::kret_4d44_4da: 	goto ret_4d44_4da;
        case m2c::kret_4d44_536: 	goto ret_4d44_536;
        case m2c::kret_4d44_565: 	goto ret_4d44_565;
        case m2c::kret_4d44_5a7: 	goto ret_4d44_5a7;
        case m2c::kret_4d44_5c4: 	goto ret_4d44_5c4;
        case m2c::kseg005_112_proc: 	goto seg005_112_proc;
        case m2c::kseg005_1ee_proc: 	goto seg005_1ee_proc;
        case m2c::kseg005_41c_proc: 	goto seg005_41c_proc;
        case m2c::kseg005_592_proc: 	goto seg005_592_proc;
        case m2c::ksub_5bb20: 	goto sub_5bb20;
        case m2c::ksub_5bb23: 	goto sub_5bb23;
        case m2c::ksub_5bb26: 	goto sub_5bb26;
        case m2c::ksub_5bb29: 	goto sub_5bb29;
        case m2c::ksub_5bb2f: 	goto sub_5bb2f;
        case m2c::ksub_5bbc8: 	goto sub_5bbc8;
        case m2c::ksub_5bbeb: 	goto sub_5bbeb;
        case m2c::ksub_5bc01: 	goto sub_5bc01;
        case m2c::ksub_5bc5b: 	goto sub_5bc5b;
        case m2c::ksub_5bc70: 	goto sub_5bc70;
        case m2c::ksub_5bcce: 	goto sub_5bcce;
        case m2c::ksub_5bd2f: 	goto sub_5bd2f;
        case m2c::ksub_5bd69: 	goto sub_5bd69;
        case m2c::ksub_5bd8f: 	goto sub_5bd8f;
        case m2c::ksub_5bde7: 	goto sub_5bde7;
        case m2c::ksub_5bebb: 	goto sub_5bebb;
        case m2c::ksub_5bef7: 	goto sub_5bef7;
        case m2c::ksub_5bf4f: 	goto sub_5bf4f;
        case m2c::ksub_5bf84: 	goto sub_5bf84;
        case m2c::ksub_5bfc6: 	goto sub_5bfc6;
        case m2c::ksub_5bfdf: 	goto sub_5bfdf;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

