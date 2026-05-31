/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "vikings.exe.h"

                

 bool sub_1be8a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1be8a:
    _begin:
cs=0xd4f;eip=0x0003ba; 	T(CMP(bx, 0x10));	// 32482 cmp     bx, 10h ;~ 0D4F:03BA
cs=0xd4f;eip=0x0003bd; 	J(JNC(loc_1beb4));	// 32483 jnb     short loc_1BEB4 ;~ 0D4F:03BD
cs=0xd4f;eip=0x0003bf; 	T(SHL(bx, 1));	// 32484 shl     bx, 1 ;~ 0D4F:03BF
cs=0xd4f;eip=0x0003c1; 	T(SHL(bx, 1));	// 32485 shl     bx, 1 ;~ 0D4F:03C1
cs=0xd4f;eip=0x0003c3; 	T(LES(bx, *(dw*)(raddr(cs,bx+0x124))));	// 32486 les     bx, cs:[bx+124h] ;~ 0D4F:03C3
cs=0xd4f;eip=0x0003c8; 	T(MOV(cx, es));	// 32487 mov     cx, es ;~ 0D4F:03C8
cs=0xd4f;eip=0x0003ca; 	T(OR(cx, bx));	// 32488 or      cx, bx ;~ 0D4F:03CA
cs=0xd4f;eip=0x0003cc; 	J(JZ(loc_1beb4));	// 32489 jz      short loc_1BEB4 ;~ 0D4F:03CC
loc_1be9e:
	// 5435 
cs=0xd4f;eip=0x0003ce; 	T(MOV(cx, *(dw*)(raddr(es,bx))));	// 32492 mov     cx, es:[bx] ;~ 0D4F:03CE
cs=0xd4f;eip=0x0003d1; 	T(CMP(cx, ax));	// 32493 cmp     cx, ax ;~ 0D4F:03D1
cs=0xd4f;eip=0x0003d3; 	J(JZ(loc_1bebb));	// 32494 jz      short loc_1BEBB ;~ 0D4F:03D3
cs=0xd4f;eip=0x0003d5; 	T(ADD(bx, 4));	// 32495 add     bx, 4 ;~ 0D4F:03D5
cs=0xd4f;eip=0x0003d8; 	T(CMP(cx, 0x0FFFF));	// 32496 cmp     cx, 0FFFFh ;~ 0D4F:03D8
cs=0xd4f;eip=0x0003db; 	J(JNZ(loc_1be9e));	// 32497 jnz     short loc_1BE9E ;~ 0D4F:03DB
cs=0xd4f;eip=0x0003dd; 	T(MOV(ax, 0));	// 32498 mov     ax, 0 ;~ 0D4F:03DD
cs=0xd4f;eip=0x0003e0; 	T(MOV(dx, 0));	// 32499 mov     dx, 0 ;~ 0D4F:03E0
cs=0xd4f;eip=0x0003e3; 	J(RETF(0));	// 32500 retf ;~ 0D4F:03E3
loc_1beb4:
	// 5436 
cs=0xd4f;eip=0x0003e4; 	T(MOV(ax, 0));	// 32505 mov     ax, 0 ;~ 0D4F:03E4
cs=0xd4f;eip=0x0003e7; 	T(MOV(dx, 0));	// 32506 mov     dx, 0 ;~ 0D4F:03E7
cs=0xd4f;eip=0x0003ea; 	J(RETF(0));	// 32507 retf ;~ 0D4F:03EA
loc_1bebb:
	// 5437 
cs=0xd4f;eip=0x0003eb; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 32511 mov     ax, es:[bx+2] ;~ 0D4F:03EB
cs=0xd4f;eip=0x0003ef; 	T(MOV(dx, es));	// 32512 mov     dx, es ;~ 0D4F:03EF
cs=0xd4f;eip=0x0003f1; 	J(RETF(0));	// 32513 retf ;~ 0D4F:03F1

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1be9e: 	goto loc_1be9e;
        case m2c::kloc_1beb4: 	goto loc_1beb4;
        case m2c::kloc_1bebb: 	goto loc_1bebb;
        case m2c::ksub_1be8a: 	goto sub_1be8a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1bec2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1bec2:
    _begin:
cs=0xd4f;eip=0x0003f2; 	T(MOV(bx, sp));	// 32522 mov     bx, sp ;~ 0D4F:03F2
cs=0xd4f;eip=0x0003f4; 	T(MOV(bx, *(dw*)(raddr(ss,bx+4))));	// 32523 mov     bx, ss:[bx+4] ;~ 0D4F:03F4
cs=0xd4f;eip=0x0003f8; 	X(PUSH(cs));	// 32524 push    cs ;~ 0D4F:03F8
cs=0xd4f;eip=0x0003f9; 	J(CALL(sub_1be8a,0));	// 32525 call    near ptr sub_1BE8A ;~ 0D4F:03F9
cs=0xd4f;eip=0x0003fc; 	T(CMP(ax, 0));	// 32526 cmp     ax, 0 ;~ 0D4F:03FC
cs=0xd4f;eip=0x0003ff; 	J(JNZ(loc_1bed6));	// 32527 jnz     short loc_1BED6 ;~ 0D4F:03FF
cs=0xd4f;eip=0x000401; 	T(CMP(dx, 0));	// 32528 cmp     dx, 0 ;~ 0D4F:0401
cs=0xd4f;eip=0x000404; 	J(JZ(locret_1bed9));	// 32529 jz      short locret_1BED9 ;~ 0D4F:0404
loc_1bed6:
	// 5931 
__disp=(dx<<16)+ax;
cs=0xd4f;eip=0x000406; R(JMP(__dispatch_call));
	// 5438 
cs=0xd4f;eip=0x000406; 	X(PUSH(dx));	// 32532 push    dx ;~ 0D4F:0406
cs=0xd4f;eip=0x000407; 	X(PUSH(ax));	// 32533 push    ax ;~ 0D4F:0407
cs=0xd4f;eip=0x000408; 	J(RETF(0));	// 32534 retf ;~ 0D4F:0408
locret_1bed9:
	// 5439 
cs=0xd4f;eip=0x000409; 	J(RETF(0));	// 32538 retf ;~ 0D4F:0409

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1bed6: 	goto loc_1bed6;
        case m2c::klocret_1bed9: 	goto locret_1bed9;
        case m2c::ksub_1bec2: 	goto sub_1bec2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);return __dispatch_call(__disp,_state);//m2c::stackDump(); abort();
    };
}



 bool sub_1bedc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1bedc:
    _begin:
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x00040c; 	X(DEC(*(dw*)(((db*)&word_1beda))));	// 32550 dec     cs:word_1BEDA ;~ 0D4F:040C
cs=0xd4f;eip=0x000411; 	J(JNZ(locret_1bf1a));	// 32551 jnz     short locret_1BF1A ;~ 0D4F:0411
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000413; 	X(MOV(*(dw*)(((db*)&word_1beda)), 2));	// 32552 mov     cs:word_1BEDA, 2 ;~ 0D4F:0413
cs=0xd4f;eip=0x00041a; 	T(MOV(al, 0x36));	// 32553 mov     al, 36h ; '6' ;~ 0D4F:041A
cs=0xd4f;eip=0x00041c; 	R(OUT(0x43, al));	// 32554 out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0D4F:041C
cs=0xd4f;eip=0x00041e; 	T(MOV(ax, 0x7FFF));	// 32555 mov     ax, 7FFFh ;~ 0D4F:041E
cs=0xd4f;eip=0x000421; 	J({;});	// 32556 jmp     short $+2 ;~ 0D4F:0421
loc_1bef3:
	// 5440 
cs=0xd4f;eip=0x000423; 	R(OUT(0x40, al));	// 32560 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0D4F:0423
cs=0xd4f;eip=0x000425; 	T(MOV(al, ah));	// 32561 mov     al, ah ;~ 0D4F:0425
cs=0xd4f;eip=0x000427; 	J({;});	// 32562 jmp     short $+2 ;~ 0D4F:0427
loc_1bef9:
	// 5441 
cs=0xd4f;eip=0x000429; 	R(OUT(0x40, al));	// 32566 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0D4F:0429
cs=0xd4f;eip=0x00042b; 	T(MOV(dx, 0x3DA));	// 32567 mov     dx, 3DAh ;~ 0D4F:042B
loc_1befe:
	// 5442 
cs=0xd4f;eip=0x00042e; 	R(IN(al, dx));	// 32570 in      al, dx          ; Video status bits: ;~ 0D4F:042E
cs=0xd4f;eip=0x00042f; 	T(TEST(al, 8));	// 32575 test    al, 8 ;~ 0D4F:042F
cs=0xd4f;eip=0x000431; 	J(JZ(loc_1befe));	// 32576 jz      short loc_1BEFE ;~ 0D4F:0431
cs=0xd4f;eip=0x000433; 	T(MOV(al, 0x36));	// 32577 mov     al, 36h ; '6' ;~ 0D4F:0433
cs=0xd4f;eip=0x000435; 	R(OUT(0x43, al));	// 32578 out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0D4F:0435
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000437; 	T(MOV(ax, *(dw*)(((db*)&word_1bbf2))));	// 32579 mov     ax, cs:word_1BBF2 ;~ 0D4F:0437
cs=0xd4f;eip=0x00043b; 	J({;});	// 32580 jmp     short $+2 ;~ 0D4F:043B
loc_1bf0d:
	// 5443 
cs=0xd4f;eip=0x00043d; 	R(OUT(0x40, al));	// 32584 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0D4F:043D
cs=0xd4f;eip=0x00043f; 	T(MOV(al, ah));	// 32585 mov     al, ah ;~ 0D4F:043F
cs=0xd4f;eip=0x000441; 	J({;});	// 32586 jmp     short $+2 ;~ 0D4F:0441
loc_1bf13:
	// 5444 
cs=0xd4f;eip=0x000443; 	R(OUT(0x40, al));	// 32590 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0D4F:0443
cs=0xd4f;eip=0x000445; 	J(CALLF(sub_1797b,0));	// 32591 call    sub_1797B ;~ 0D4F:0445
locret_1bf1a:
	// 5445 
cs=0xd4f;eip=0x00044a; 	J(RETF(0));	// 32594 retf ;~ 0D4F:044A

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1bef3: 	goto loc_1bef3;
        case m2c::kloc_1bef9: 	goto loc_1bef9;
        case m2c::kloc_1befe: 	goto loc_1befe;
        case m2c::kloc_1bf0d: 	goto loc_1bf0d;
        case m2c::kloc_1bf13: 	goto loc_1bf13;
        case m2c::klocret_1bf1a: 	goto locret_1bf1a;
        case m2c::ksub_1bedc: 	goto sub_1bedc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1bf1b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1bf1b:
    _begin:
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x00044b; 	X(INC(*(dw*)(((db*)&word_1bad2))));	// 32602 inc     cs:word_1BAD2 ;~ 0D4F:044B
cs=0xd4f;eip=0x000450; 	T(CLD);	// 32603 cld ;~ 0D4F:0450
cs=0xd4f;eip=0x000451; 	X(PUSH(ax));	// 32604 push    ax ;~ 0D4F:0451
cs=0xd4f;eip=0x000452; 	X(PUSH(bx));	// 32605 push    bx ;~ 0D4F:0452
cs=0xd4f;eip=0x000453; 	X(PUSH(cx));	// 32606 push    cx ;~ 0D4F:0453
cs=0xd4f;eip=0x000454; 	X(PUSH(dx));	// 32607 push    dx ;~ 0D4F:0454
cs=0xd4f;eip=0x000455; 	X(PUSH(si));	// 32608 push    si ;~ 0D4F:0455
cs=0xd4f;eip=0x000456; 	X(PUSH(di));	// 32609 push    di ;~ 0D4F:0456
cs=0xd4f;eip=0x000457; 	X(PUSH(bp));	// 32610 push    bp ;~ 0D4F:0457
cs=0xd4f;eip=0x000458; 	X(PUSH(es));	// 32611 push    es ;~ 0D4F:0458
cs=0xd4f;eip=0x000459; 	X(PUSH(ds));	// 32612 push    ds ;~ 0D4F:0459
cs=0xd4f;eip=0x00045a; 	X(PUSH(cs));	// 32613 push    cs ;~ 0D4F:045A
cs=0xd4f;eip=0x00045b; 	J(CALL(sub_1bedc,0));	// 32614 call    near ptr sub_1BEDC ;~ 0D4F:045B
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x00045e; 	T(CMP(*(dw*)(((db*)&word_1bad2)), 1));	// 32615 cmp     cs:word_1BAD2, 1 ;~ 0D4F:045E
cs=0xd4f;eip=0x000464; 	J(JZ(loc_1bf39));	// 32616 jz      short loc_1BF39 ;~ 0D4F:0464
cs=0xd4f;eip=0x000466; 	J(JMP(loc_1bfc7));	// 32617 jmp     loc_1BFC7 ;~ 0D4F:0466
loc_1bf39:
	// 5446 
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000469; 	X(MOV(*(dw*)((byte_1bc85)+0x1FF), ss));	// 32621 mov     word ptr cs:byte_1BC85+1FFh, ss ;~ 0D4F:0469
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x00046e; 	X(MOV(*(dw*)((byte_1bc85)+0x201), sp));	// 32622 mov     word ptr cs:byte_1BC85+201h, sp ;~ 0D4F:046E
cs=0xd4f;eip=0x000473; 	T(MOV(ax, cs));	// 32623 mov     ax, cs ;~ 0D4F:0473
cs=0xd4f;eip=0x000475; 	R(MOV(ss, ax));	// 32624 mov     ss, ax ;~ 0D4F:0475
cs=0xd4f;eip=0x000477; 	T(MOV(sp, 0x3B4));	// 32626 mov     sp, 3B4h ;~ 0D4F:0477
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x00047a; 	X(MOV(*(dw*)(((db*)&word_1bbec)), 0));	// 32627 mov     cs:word_1BBEC, 0 ;~ 0D4F:047A
loc_1bf51:
	// 5447 
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000481; 	T(MOV(si, *(dw*)(((db*)&word_1bbec))));	// 32630 mov     si, cs:word_1BBEC ;~ 0D4F:0481
cs=0xd4f;eip=0x000486; 	T(SHL(si, 1));	// 32631 shl     si, 1 ;~ 0D4F:0486
cs=0xd4f;eip=0x000488; 	T(CMP(*(dw*)(raddr(cs,si+0x6A)), 2));	// 32632 cmp     word ptr cs:[si+6Ah], 2 ;~ 0D4F:0488
cs=0xd4f;eip=0x00048e; 	J(JNZ(loc_1bfb0));	// 32633 jnz     short loc_1BFB0 ;~ 0D4F:048E
cs=0xd4f;eip=0x000490; 	T(MOV(ds, *(dw*)(raddr(cs,si+0x48))));	// 32634 mov     ds, word ptr cs:[si+48h] ;~ 0D4F:0490
cs=0xd4f;eip=0x000495; 	T(SHL(si, 1));	// 32635 shl     si, 1 ;~ 0D4F:0495
cs=0xd4f;eip=0x000497; 	T(MOV(ax, *(dw*)(raddr(cs,si+0x8C))));	// 32636 mov     ax, cs:[si+8Ch] ;~ 0D4F:0497
cs=0xd4f;eip=0x00049c; 	T(MOV(dx, *(dw*)(raddr(cs,si+0x8E))));	// 32637 mov     dx, cs:[si+8Eh] ;~ 0D4F:049C
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0004a1; 	T(ADD(ax, *(dw*)(((db*)&word_1bbe4))));	// 32638 add     ax, cs:word_1BBE4 ;~ 0D4F:04A1
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0004a6; 	T(ADC(dx, *(dw*)(((db*)&word_1bbe6))));	// 32639 adc     dx, cs:word_1BBE6 ;~ 0D4F:04A6
cs=0xd4f;eip=0x0004ab; 	T(CMP(dx, *(dw*)(raddr(cs,si+0x0D2))));	// 32640 cmp     dx, cs:[si+0D2h] ;~ 0D4F:04AB
cs=0xd4f;eip=0x0004b0; 	J(JC(loc_1bf8b));	// 32641 jb      short loc_1BF8B ;~ 0D4F:04B0
cs=0xd4f;eip=0x0004b2; 	J(JA(loc_1bf97));	// 32642 ja      short loc_1BF97 ;~ 0D4F:04B2
cs=0xd4f;eip=0x0004b4; 	T(CMP(ax, *(dw*)(raddr(cs,si+0x0D0))));	// 32643 cmp     ax, cs:[si+0D0h] ;~ 0D4F:04B4
cs=0xd4f;eip=0x0004b9; 	J(JNC(loc_1bf97));	// 32644 jnb     short loc_1BF97 ;~ 0D4F:04B9
loc_1bf8b:
	// 5448 
cs=0xd4f;eip=0x0004bb; 	X(MOV(*(dw*)(raddr(cs,si+0x8C)), ax));	// 32648 mov     cs:[si+8Ch], ax ;~ 0D4F:04BB
cs=0xd4f;eip=0x0004c0; 	X(MOV(*(dw*)(raddr(cs,si+0x8E)), dx));	// 32649 mov     cs:[si+8Eh], dx ;~ 0D4F:04C0
cs=0xd4f;eip=0x0004c5; 	J(JMP(loc_1bfb0));	// 32650 jmp     short loc_1BFB0 ;~ 0D4F:04C5
loc_1bf97:
	// 5449 
cs=0xd4f;eip=0x0004c7; 	T(SUB(ax, *(dw*)(raddr(cs,si+0x0D0))));	// 32655 sub     ax, cs:[si+0D0h] ;~ 0D4F:04C7
cs=0xd4f;eip=0x0004cc; 	T(SBB(dx, *(dw*)(raddr(cs,si+0x0D2))));	// 32656 sbb     dx, cs:[si+0D2h] ;~ 0D4F:04CC
cs=0xd4f;eip=0x0004d1; 	X(MOV(*(dw*)(raddr(cs,si+0x8C)), ax));	// 32657 mov     cs:[si+8Ch], ax ;~ 0D4F:04D1
cs=0xd4f;eip=0x0004d6; 	X(MOV(*(dw*)(raddr(cs,si+0x8E)), dx));	// 32658 mov     cs:[si+8Eh], dx ;~ 0D4F:04D6
cs=0xd4f;eip=0x0004db; 	J(CALLF(__dispatch_call,*(dd*)(raddr(cs,si+4))));	// 32659 call    dword ptr cs:[si+4] ;~ 0D4F:04DB
loc_1bfb0:
	// 5450 
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0004e0; 	X(INC(*(dw*)(((db*)&word_1bbec))));	// 32663 inc     cs:word_1BBEC ;~ 0D4F:04E0
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0004e5; 	T(CMP(*(dw*)(((db*)&word_1bbec)), 0x10));	// 32664 cmp     cs:word_1BBEC, 10h ;~ 0D4F:04E5
cs=0xd4f;eip=0x0004eb; 	J(JBE(loc_1bf51));	// 32665 jbe     short loc_1BF51 ;~ 0D4F:04EB
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0004ed; 	R(MOV(ss, *(dw*)((byte_1bc85)+0x1FF)));	// 32666 mov     ss, word ptr cs:byte_1BC85+1FFh ;~ 0D4F:04ED
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0004f2; 	T(MOV(sp, *(dw*)((byte_1bc85)+0x201)));	// 32668 mov     sp, word ptr cs:byte_1BC85+201h ;~ 0D4F:04F2
loc_1bfc7:
	// 5451 
cs=0xd4f;eip=0x0004f7; 	X(POP(ds));	// 32671 pop     ds ;~ 0D4F:04F7
cs=0xd4f;eip=0x0004f8; 	X(POP(es));	// 32673 pop     es ;~ 0D4F:04F8
cs=0xd4f;eip=0x0004f9; 	X(POP(bp));	// 32674 pop     bp ;~ 0D4F:04F9
cs=0xd4f;eip=0x0004fa; 	X(POP(di));	// 32675 pop     di ;~ 0D4F:04FA
cs=0xd4f;eip=0x0004fb; 	X(POP(si));	// 32676 pop     si ;~ 0D4F:04FB
cs=0xd4f;eip=0x0004fc; 	X(POP(dx));	// 32677 pop     dx ;~ 0D4F:04FC
cs=0xd4f;eip=0x0004fd; 	X(POP(cx));	// 32678 pop     cx ;~ 0D4F:04FD
cs=0xd4f;eip=0x0004fe; 	X(POP(bx));	// 32679 pop     bx ;~ 0D4F:04FE
cs=0xd4f;eip=0x0004ff; 	T(MOV(al, 0x20));	// 32680 mov     al, 20h ; ' ' ;~ 0D4F:04FF
cs=0xd4f;eip=0x000501; 	R(OUT(0x20, al));	// 32681 out     20h, al         ; Interrupt controller, 8259A. ;~ 0D4F:0501
cs=0xd4f;eip=0x000503; 	X(POP(ax));	// 32682 pop     ax ;~ 0D4F:0503
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000504; 	T(CMP(*(dw*)(((db*)&atest)), 0x6554));	// 32683 cmp     cs:aTest, 6554h ;~ 0D4F:0504
cs=0xd4f;eip=0x00050b; 	J(JNZ(loc_1bfec));	// 32684 jnz     short loc_1BFEC ;~ 0D4F:050B
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x00050d; 	T(CMP(*(dw*)(((db*)&word_1bc82)), 0x7473));	// 32685 cmp     cs:word_1BC82, 7473h ;~ 0D4F:050D
cs=0xd4f;eip=0x000514; 	J(JNZ(loc_1bfec));	// 32686 jnz     short loc_1BFEC ;~ 0D4F:0514
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000516; 	X(DEC(*(dw*)(((db*)&word_1bad2))));	// 32687 dec     cs:word_1BAD2 ;~ 0D4F:0516
cs=0xd4f;eip=0x00051b; 	R(IRET);	// 32688 iret ;~ 0D4F:051B
loc_1bfec:
	// 5452 
cs=0xd4f;eip=0x00051c; 	T(MOV(ax, 0x2DBA));	// 32693 mov     ax, 2DBAh ;~ 0D4F:051C
cs=0xd4f;eip=0x00051f; 	T(XOR(bx, bx));	// 32694 xor     bx, bx ;~ 0D4F:051F
cs=0xd4f;eip=0x000521; 	J(CALLF(sub_10dba,0));	// 32695 call    far ptr sub_10DBA ;~ 0D4F:0521
	R(return seg002_526_proc(0, _state););
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1bf39: 	goto loc_1bf39;
        case m2c::kloc_1bf51: 	goto loc_1bf51;
        case m2c::kloc_1bf8b: 	goto loc_1bf8b;
        case m2c::kloc_1bf97: 	goto loc_1bf97;
        case m2c::kloc_1bfb0: 	goto loc_1bfb0;
        case m2c::kloc_1bfc7: 	goto loc_1bfc7;
        case m2c::kloc_1bfec: 	goto loc_1bfec;
        case m2c::ksub_1bf1b: 	goto sub_1bf1b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_526_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_526_proc:
    _begin:
cs=0xd4f;eip=0x000526; 	J(return sub_1bf1b(m2c::kloc_1bfec, _state););	// 32699 jmp     short loc_1BFEC ;~ 0D4F:0526

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kseg002_526_proc: 	goto seg002_526_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1bff8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1bff8:
    _begin:
cs=0xd4f;eip=0x000528; 	X(PUSH(ds));	// 32706 push    ds ;~ 0D4F:0528
cs=0xd4f;eip=0x000529; 	X(PUSH(si));	// 32707 push    si ;~ 0D4F:0529
cs=0xd4f;eip=0x00052a; 	X(PUSH(di));	// 32708 push    di ;~ 0D4F:052A
cs=0xd4f;eip=0x00052b; 	X(PUSHF);	// 32709 pushf ;~ 0D4F:052B
cs=0xd4f;eip=0x00052c; 	T(CLI);	// 32710 cli ;~ 0D4F:052C
cs=0xd4f;eip=0x00052d; 	T(CLD);	// 32711 cld ;~ 0D4F:052D
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x00052e; 	X(MOV(*(dw*)(((db*)&word_1bbe4)), 0x0FFFF));	// 32712 mov     cs:word_1BBE4, 0FFFFh ;~ 0D4F:052E
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000535; 	X(MOV(*(dw*)(((db*)&word_1bbe6)), 0x0FFFF));	// 32713 mov     cs:word_1BBE6, 0FFFFh ;~ 0D4F:0535
cs=0xd4f;eip=0x00053c; 	X(PUSH(cs));	// 32714 push    cs ;~ 0D4F:053C
cs=0xd4f;eip=0x00053d; 	X(POP(es));	// 32715 pop     es ;~ 0D4F:053D
cs=0xd4f;eip=0x00053e; 	T(MOV(di, 0x6A));	// 32716 mov     di, 6Ah ; 'j' ;~ 0D4F:053E
cs=0xd4f;eip=0x000541; 	T(MOV(cx, 0x11));	// 32717 mov     cx, 11h ;~ 0D4F:0541
cs=0xd4f;eip=0x000544; 	T(MOV(ax, 0));	// 32718 mov     ax, 0 ;~ 0D4F:0544
	// 32719 rep stosw ;~ 0D4F:0547
cs=0xd4f;eip=0x000547; 	X(	REP STOSW);	// 32719 rep stosw ;~ 0D4F:0547
cs=0xd4f;eip=0x000549; 	T(MOV(di, 0x8C));	// 32720 mov     di, 8Ch ; 'Œ' ;~ 0D4F:0549
cs=0xd4f;eip=0x00054c; 	T(MOV(cx, 0x22));	// 32721 mov     cx, 22h ; '"' ;~ 0D4F:054C
	// 32722 rep stosw ;~ 0D4F:054F
cs=0xd4f;eip=0x00054f; 	X(	REP STOSW);	// 32722 rep stosw ;~ 0D4F:054F
cs=0xd4f;eip=0x000551; 	T(MOV(di, 0x0D0));	// 32723 mov     di, 0D0h ; 'Ğ' ;~ 0D4F:0551
cs=0xd4f;eip=0x000554; 	T(MOV(cx, 0x22));	// 32724 mov     cx, 22h ; '"' ;~ 0D4F:0554
	// 32725 rep stosw ;~ 0D4F:0557
cs=0xd4f;eip=0x000557; 	X(	REP STOSW);	// 32725 rep stosw ;~ 0D4F:0557
	R(return seg002_55a_proc(0, _state););
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_1bff8: 	goto sub_1bff8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_55a_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_55a_proc:
    _begin:
R(POPF);	// 32731 iret ;~ 0D4F:055A
cs=0xd4f;eip=0x000560; 	X(POP(di));	// 32780 pop     di ;~ 0D4F:05B3
cs=0xd4f;eip=0x000561; 	X(POP(si));	// 32781 pop     si ;~ 0D4F:05B4
cs=0xd4f;eip=0x000562; 	X(POP(ds));	// 32782 pop     ds ;~ 0D4F:05B5
cs=0xd4f;eip=0x000563; 	J(RETF(0));	// 32736 retf ;~ 0D4F:0563
ret_d4f_564:
	// 5454 
cs=0xd4f;eip=0x000564; 	X(PUSHF);	// 32739 pushf ;~ 0D4F:0564
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000565; 	J(CALLF(__dispatch_call,*(dd*)(((db*)&dword_1bbe8))));	// 32740 call    cs:dword_1BBE8 ;~ 0D4F:0565
cs=0xd4f;eip=0x00056a; 	J(RETF(0));	// 32741 retf ;~ 0D4F:056A

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kret_d4f_564: 	goto ret_d4f_564;
        case m2c::kseg002_55a_proc: 	goto seg002_55a_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1c03b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1c03b:
    _begin:
cs=0xd4f;eip=0x00056b; 	X(PUSH(ds));	// 32748 push    ds ;~ 0D4F:056B
cs=0xd4f;eip=0x00056c; 	X(PUSH(si));	// 32749 push    si ;~ 0D4F:056C
cs=0xd4f;eip=0x00056d; 	X(PUSH(di));	// 32750 push    di ;~ 0D4F:056D
cs=0xd4f;eip=0x00056e; 	X(PUSHF);	// 32751 pushf ;~ 0D4F:056E
cs=0xd4f;eip=0x00056f; 	T(CLI);	// 32752 cli ;~ 0D4F:056F
cs=0xd4f;eip=0x000570; 	T(MOV(ax, 0));	// 32753 mov     ax, 0 ;~ 0D4F:0570
cs=0xd4f;eip=0x000573; 	T(MOV(es, ax));	// 32754 mov     es, ax ;~ 0D4F:0573
cs=0xd4f;eip=0x000575; 	T(MOV(bx, *(dw*)(raddr(es,0x20))));	// 32756 mov     bx, es:20h ;~ 0D4F:0575
cs=0xd4f;eip=0x00057a; 	T(MOV(es, *(dw*)(raddr(es,0x22))));	// 32757 mov     es, word ptr es:22h ;~ 0D4F:057A
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x00057f; 	X(MOV(*(dw*)(((db*)&dword_1bbe8)), bx));	// 32759 mov     word ptr cs:dword_1BBE8, bx ;~ 0D4F:057F
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000584; 	X(MOV(*(dw*)(((db*)&dword_1bbe8)+2), es));	// 32760 mov     word ptr cs:dword_1BBE8+2, es ;~ 0D4F:0584
cs=0xd4f;eip=0x000589; 	T(MOV(bx, 0x564));	// 32761 mov     bx, 564h ;~ 0D4F:0589
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x00058c; 	X(MOV(*(dw*)(((db*)&word_1bb14)), bx));	// 32762 mov     cs:word_1BB14, bx ;~ 0D4F:058C
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000591; 	X(MOV(*(dw*)(((db*)&word_1bb16)), cs));	// 32763 mov     cs:word_1BB16, cs ;~ 0D4F:0591
cs=0xd4f;eip=0x000596; 	T(MOV(ax, cs));	// 32764 mov     ax, cs ;~ 0D4F:0596
cs=0xd4f;eip=0x000598; 	T(MOV(ds, ax));	// 32765 mov     ds, ax ;~ 0D4F:0598
cs=0xd4f;eip=0x00059a; 	T(MOV(dx, 0x44B));	// 32767 mov     dx, 44Bh ;~ 0D4F:059A
cs=0xd4f;eip=0x00059d; 	T(MOV(ax, 0));	// 32768 mov     ax, 0 ;~ 0D4F:059D
cs=0xd4f;eip=0x0005a0; 	T(MOV(es, ax));	// 32769 mov     es, ax ;~ 0D4F:05A0
cs=0xd4f;eip=0x0005a2; 	X(MOV(*(dw*)(raddr(es,0x20)), dx));	// 32771 mov     es:20h, dx ;~ 0D4F:05A2
cs=0xd4f;eip=0x0005a7; 	X(MOV(*(dw*)(raddr(es,0x22)), ds));	// 32772 mov     word ptr es:22h, ds ;~ 0D4F:05A7
	R(return seg002_5ac_proc(0, _state););
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_1c03b: 	goto sub_1c03b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_5ac_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_5ac_proc:
    _begin:
loc_1c07c:
	// 5455 
cs=0xd4f;eip=0x0005ac; 	//T(OR(bh, 0));	// 32777 or      bh, 0 ;~ 0D4F:05AC
//cs=0xd4f;eip=0x0005af; 	X(PUSH(cs));	// 32778 push    cs ;~ 0D4F:05AF
//cs=0xd4f;eip=0x0005b0; 	J(CALL(seg002_5ac_proc,m2c::kloc_1c07c));	// 32779 call    near ptr loc_1C07C+1 ;~ 0D4F:05B0
R(POPF);
cs=0xd4f;eip=0x0005b3; 	X(POP(di));	// 32780 pop     di ;~ 0D4F:05B3
cs=0xd4f;eip=0x0005b4; 	X(POP(si));	// 32781 pop     si ;~ 0D4F:05B4
cs=0xd4f;eip=0x0005b5; 	X(POP(ds));	// 32782 pop     ds ;~ 0D4F:05B5
cs=0xd4f;eip=0x0005b6; 	J(RETF(0));	// 32784 retf ;~ 0D4F:05B6

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kseg002_5ac_proc: 	goto seg002_5ac_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1c087(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1c087:
    _begin:
cs=0xd4f;eip=0x0005b7; 	X(PUSH(ds));	// 32791 push    ds ;~ 0D4F:05B7
cs=0xd4f;eip=0x0005b8; 	X(PUSH(si));	// 32792 push    si ;~ 0D4F:05B8
cs=0xd4f;eip=0x0005b9; 	X(PUSH(di));	// 32793 push    di ;~ 0D4F:05B9
cs=0xd4f;eip=0x0005ba; 	X(PUSHF);	// 32794 pushf ;~ 0D4F:05BA
cs=0xd4f;eip=0x0005bb; 	T(CLI);	// 32795 cli ;~ 0D4F:05BB
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0005bc; 	X(MOV(*(dw*)(((db*)&word_1bbec)), 0x0FFFF));	// 32796 mov     cs:word_1BBEC, 0FFFFh ;~ 0D4F:05BC
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0005c3; 	T(MOV(dx, *(dw*)(((db*)&dword_1bbe8))));	// 32797 mov     dx, word ptr cs:dword_1BBE8 ;~ 0D4F:05C3
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0005c8; 	T(MOV(ds, *(dw*)(((db*)&dword_1bbe8)+2)));	// 32798 mov     ds, word ptr cs:dword_1BBE8+2 ;~ 0D4F:05C8
cs=0xd4f;eip=0x0005cd; 	T(MOV(ax, 0));	// 32800 mov     ax, 0 ;~ 0D4F:05CD
cs=0xd4f;eip=0x0005d0; 	T(MOV(es, ax));	// 32801 mov     es, ax ;~ 0D4F:05D0
cs=0xd4f;eip=0x0005d2; 	X(MOV(*(dw*)(raddr(es,0x20)), dx));	// 32803 mov     es:20h, dx ;~ 0D4F:05D2
cs=0xd4f;eip=0x0005d7; 	X(MOV(*(dw*)(raddr(es,0x22)), ds));	// 32804 mov     word ptr es:22h, ds ;~ 0D4F:05D7
loc_1c0ac:
	// 5456 
cs=0xd4f;eip=0x0005dc; //	T(OR(bh, 0));	// 32807 or      bh, 0 ;~ 0D4F:05DC
	R(return seg002_5df_proc(0, _state););
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1c0ac: 	goto loc_1c0ac;
        case m2c::ksub_1c087: 	goto sub_1c087;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_5df_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_5df_proc:
    _begin:
//cs=0xd4f;eip=0x0005df; 	X(PUSH(cs));	// 32810 push    cs ;~ 0D4F:05DF
//cs=0xd4f;eip=0x0005e0; 	J(CALL(sub_1c087,m2c::kloc_1c0ac));	// 32811 call    near ptr loc_1C0AC+1 ;~ 0D4F:05E0
R(POPF);
cs=0xd4f;eip=0x0005e3; 	X(POP(di));	// 32812 pop     di ;~ 0D4F:05E3
cs=0xd4f;eip=0x0005e4; 	X(POP(si));	// 32813 pop     si ;~ 0D4F:05E4
cs=0xd4f;eip=0x0005e5; 	X(POP(ds));	// 32814 pop     ds ;~ 0D4F:05E5
cs=0xd4f;eip=0x0005e6; 	J(RETF(0));	// 32816 retf ;~ 0D4F:05E6

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kseg002_5df_proc: 	goto seg002_5df_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1c0b7(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1c0b7:
    _begin:
#undef arg_2
#define arg_2 6
	// 32825 arg_2           = word ptr  6 ;~ 0D4F:05E7
cs=0xd4f;eip=0x0005e7; 	X(PUSH(bp));	// 32827 push    bp ;~ 0D4F:05E7
cs=0xd4f;eip=0x0005e8; 	T(MOV(bp, sp));	// 32828 mov     bp, sp ;~ 0D4F:05E8
cs=0xd4f;eip=0x0005ea; 	X(PUSH(ds));	// 32829 push    ds ;~ 0D4F:05EA
cs=0xd4f;eip=0x0005eb; 	X(PUSH(si));	// 32830 push    si ;~ 0D4F:05EB
cs=0xd4f;eip=0x0005ec; 	X(PUSH(di));	// 32831 push    di ;~ 0D4F:05EC
cs=0xd4f;eip=0x0005ed; 	X(PUSHF);	// 32832 pushf ;~ 0D4F:05ED
cs=0xd4f;eip=0x0005ee; 	T(CLI);	// 32833 cli ;~ 0D4F:05EE
cs=0xd4f;eip=0x0005ef; 	T(MOV(al, 0x36));	// 32834 mov     al, 36h ; '6' ;~ 0D4F:05EF
cs=0xd4f;eip=0x0005f1; 	R(OUT(0x43, al));	// 32835 out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0D4F:05F1
cs=0xd4f;eip=0x0005f3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 32836 mov     ax, [bp+arg_2] ;~ 0D4F:05F3
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0005f6; 	X(MOV(*(dw*)(((db*)&word_1bbf2)), ax));	// 32837 mov     cs:word_1BBF2, ax ;~ 0D4F:05F6
cs=0xd4f;eip=0x0005fa; 	J({;});	// 32838 jmp     short $+2 ;~ 0D4F:05FA
loc_1c0cc:
	// 5457 
cs=0xd4f;eip=0x0005fc; 	R(OUT(0x40, al));	// 32842 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0D4F:05FC
cs=0xd4f;eip=0x0005fe; 	T(MOV(al, ah));	// 32843 mov     al, ah ;~ 0D4F:05FE
cs=0xd4f;eip=0x000600; 	J({;});	// 32844 jmp     short $+2 ;~ 0D4F:0600
loc_1c0d2:
	// 5458 
cs=0xd4f;eip=0x000602; 	R(OUT(0x40, al));	// 32848 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 0D4F:0602
loc_1c0d4:
	// 5459 
cs=0xd4f;eip=0x000604; 	//T(OR(bh, 0));	// 32851 or      bh, 0 ;~ 0D4F:0604

/*

	R(return seg002_607_proc(0, _state););
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1c0cc: 	goto loc_1c0cc;
        case m2c::kloc_1c0d2: 	goto loc_1c0d2;
        case m2c::kloc_1c0d4: 	goto loc_1c0d4;
        case m2c::ksub_1c0b7: 	goto sub_1c0b7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_607_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_607_proc:
    _begin:
//cs=0xd4f;eip=0x000607; 	X(PUSH(cs));	// 32854 push    cs ;~ 0D4F:0607
//cs=0xd4f;eip=0x000608; 	J(CALL(sub_1c0b7,m2c::kloc_1c0d4));	// 32855 call    near ptr loc_1C0D4+1 ;~ 0D4F:0608

*/

R(POPF);
cs=0xd4f;eip=0x00060b; 	X(POP(di));	// 32856 pop     di ;~ 0D4F:060B
cs=0xd4f;eip=0x00060c; 	X(POP(si));	// 32857 pop     si ;~ 0D4F:060C
cs=0xd4f;eip=0x00060d; 	X(POP(ds));	// 32858 pop     ds ;~ 0D4F:060D
cs=0xd4f;eip=0x00060e; 	X(POP(bp));	// 32860 pop     bp ;~ 0D4F:060E
cs=0xd4f;eip=0x00060f; 	J(RETF(0));	// 32861 retf ;~ 0D4F:060F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
//        case m2c::kseg002_607_proc: 	goto seg002_607_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1c0e0(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1c0e0:
    _begin:
#undef arg_0
#define arg_0 6
	// 32870 arg_0           = word ptr  6 ;~ 0D4F:0610
cs=0xd4f;eip=0x000610; 	X(PUSH(bp));	// 32872 push    bp ;~ 0D4F:0610
cs=0xd4f;eip=0x000611; 	T(MOV(bp, sp));	// 32873 mov     bp, sp ;~ 0D4F:0611
cs=0xd4f;eip=0x000613; 	X(PUSH(ds));	// 32874 push    ds ;~ 0D4F:0613
cs=0xd4f;eip=0x000614; 	X(PUSH(si));	// 32875 push    si ;~ 0D4F:0614
cs=0xd4f;eip=0x000615; 	X(PUSH(di));	// 32876 push    di ;~ 0D4F:0615
cs=0xd4f;eip=0x000616; 	T(MOV(ax, 0));	// 32877 mov     ax, 0 ;~ 0D4F:0616
cs=0xd4f;eip=0x000619; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0D68D));	// 32878 cmp     [bp+arg_0], 0D68Dh ;~ 0D4F:0619
cs=0xd4f;eip=0x00061e; 	J(JNC(loc_1c0fd));	// 32879 jnb     short loc_1C0FD ;~ 0D4F:061E
cs=0xd4f;eip=0x000620; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 32881 mov     ax, [bp+arg_0] ;~ 0D4F:0620
cs=0xd4f;eip=0x000623; 	T(MOV(bx, 0x20BC));	// 32882 mov     bx, 20BCh ;~ 0D4F:0623
cs=0xd4f;eip=0x000626; 	T(MOV(cx, 0x2710));	// 32883 mov     cx, 2710h ;~ 0D4F:0626
cs=0xd4f;eip=0x000629; 	T(MUL1_2(cx));	// 32884 mul     cx ;~ 0D4F:0629
cs=0xd4f;eip=0x00062b; 	T(DIV2(bx));	// 32885 div     bx ;~ 0D4F:062B
loc_1c0fd:
	// 5460 
cs=0xd4f;eip=0x00062d; 	X(PUSH(ax));	// 32888 push    ax ;~ 0D4F:062D
cs=0xd4f;eip=0x00062e; 	X(PUSH(cs));	// 32889 push    cs ;~ 0D4F:062E
cs=0xd4f;eip=0x00062f; 	J(CALL(sub_1c0b7,0));	// 32890 call    sub_1C0B7 ;~ 0D4F:062F
cs=0xd4f;eip=0x000632; 	T(ADD(sp, 2));	// 32891 add     sp, 2 ;~ 0D4F:0632
cs=0xd4f;eip=0x000635; 	X(POP(di));	// 32892 pop     di ;~ 0D4F:0635
cs=0xd4f;eip=0x000636; 	X(POP(si));	// 32893 pop     si ;~ 0D4F:0636
cs=0xd4f;eip=0x000637; 	X(POP(ds));	// 32894 pop     ds ;~ 0D4F:0637
cs=0xd4f;eip=0x000638; 	X(POP(bp));	// 32896 pop     bp ;~ 0D4F:0638
cs=0xd4f;eip=0x000639; 	J(RETF(0));	// 32897 retf ;~ 0D4F:0639

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1c0fd: 	goto loc_1c0fd;
        case m2c::ksub_1c0e0: 	goto sub_1c0e0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1c10a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1c10a:
    _begin:
#undef arg_0
#define arg_0 6
	// 32908 arg_0           = word ptr  6 ;~ 0D4F:063A
#undef arg_2
#define arg_2 8
	// 32909 arg_2           = word ptr  8 ;~ 0D4F:063A
#undef arg_4
#define arg_4 0x0A
	// 32910 arg_4           = word ptr  0Ah ;~ 0D4F:063A
#undef arg_6
#define arg_6 0x0C
	// 32911 arg_6           = word ptr  0Ch ;~ 0D4F:063A
cs=0xd4f;eip=0x00063a; 	X(PUSH(bp));	// 32913 push    bp ;~ 0D4F:063A
cs=0xd4f;eip=0x00063b; 	T(MOV(bp, sp));	// 32914 mov     bp, sp ;~ 0D4F:063B
cs=0xd4f;eip=0x00063d; 	X(PUSH(ds));	// 32915 push    ds ;~ 0D4F:063D
cs=0xd4f;eip=0x00063e; 	X(PUSH(si));	// 32916 push    si ;~ 0D4F:063E
cs=0xd4f;eip=0x00063f; 	X(PUSH(di));	// 32917 push    di ;~ 0D4F:063F
cs=0xd4f;eip=0x000640; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 32918 mov     ax, [bp+arg_0] ;~ 0D4F:0640
cs=0xd4f;eip=0x000643; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 32919 mov     dx, [bp+arg_2] ;~ 0D4F:0643
cs=0xd4f;eip=0x000646; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 32920 mov     bx, [bp+arg_4] ;~ 0D4F:0646
cs=0xd4f;eip=0x000649; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_6))));	// 32921 mov     cx, [bp+arg_6] ;~ 0D4F:0649
cs=0xd4f;eip=0x00064c; 	T(OR(cx, cx));	// 32922 or      cx, cx ;~ 0D4F:064C
cs=0xd4f;eip=0x00064e; 	J(JNZ(loc_1c128));	// 32923 jnz     short loc_1C128 ;~ 0D4F:064E
cs=0xd4f;eip=0x000650; 	T(OR(dx, dx));	// 32924 or      dx, dx ;~ 0D4F:0650
cs=0xd4f;eip=0x000652; 	J(JZ(loc_1c14c));	// 32925 jz      short loc_1C14C ;~ 0D4F:0652
cs=0xd4f;eip=0x000654; 	T(OR(bx, bx));	// 32926 or      bx, bx ;~ 0D4F:0654
cs=0xd4f;eip=0x000656; 	J(JZ(loc_1c14c));	// 32927 jz      short loc_1C14C ;~ 0D4F:0656
loc_1c128:
	// 5461 
cs=0xd4f;eip=0x000658; 	T(MOV(bp, cx));	// 32930 mov     bp, cx ;~ 0D4F:0658
cs=0xd4f;eip=0x00065a; 	T(MOV(cx, 0x20));	// 32931 mov     cx, 20h ; ' ' ;~ 0D4F:065A
cs=0xd4f;eip=0x00065d; 	T(XOR(di, di));	// 32932 xor     di, di ;~ 0D4F:065D
cs=0xd4f;eip=0x00065f; 	T(XOR(si, si));	// 32933 xor     si, si ;~ 0D4F:065F
loc_1c131:
	// 5462 
cs=0xd4f;eip=0x000661; 	T(SHL(ax, 1));	// 32936 shl     ax, 1 ;~ 0D4F:0661
cs=0xd4f;eip=0x000663; 	T(RCL(dx, 1));	// 32937 rcl     dx, 1 ;~ 0D4F:0663
cs=0xd4f;eip=0x000665; 	T(RCL(si, 1));	// 32938 rcl     si, 1 ;~ 0D4F:0665
cs=0xd4f;eip=0x000667; 	T(RCL(di, 1));	// 32939 rcl     di, 1 ;~ 0D4F:0667
cs=0xd4f;eip=0x000669; 	T(CMP(di, bp));	// 32940 cmp     di, bp ;~ 0D4F:0669
cs=0xd4f;eip=0x00066b; 	J(JC(loc_1c148));	// 32941 jb      short loc_1C148 ;~ 0D4F:066B
cs=0xd4f;eip=0x00066d; 	J(JA(loc_1c143));	// 32942 ja      short loc_1C143 ;~ 0D4F:066D
cs=0xd4f;eip=0x00066f; 	T(CMP(si, bx));	// 32943 cmp     si, bx ;~ 0D4F:066F
cs=0xd4f;eip=0x000671; 	J(JC(loc_1c148));	// 32944 jb      short loc_1C148 ;~ 0D4F:0671
loc_1c143:
	// 5463 
cs=0xd4f;eip=0x000673; 	T(SUB(si, bx));	// 32947 sub     si, bx ;~ 0D4F:0673
cs=0xd4f;eip=0x000675; 	T(SBB(di, bp));	// 32948 sbb     di, bp ;~ 0D4F:0675
cs=0xd4f;eip=0x000677; 	T(INC(ax));	// 32949 inc     ax ;~ 0D4F:0677
loc_1c148:
	// 5464 
cs=0xd4f;eip=0x000678; 	J(LOOP(loc_1c131));	// 32953 loop    loc_1C131 ;~ 0D4F:0678
cs=0xd4f;eip=0x00067a; 	J(JMP(loc_1c150));	// 32954 jmp     short loc_1C150 ;~ 0D4F:067A
loc_1c14c:
	// 5465 
cs=0xd4f;eip=0x00067c; 	T(DIV2(bx));	// 32959 div     bx ;~ 0D4F:067C
cs=0xd4f;eip=0x00067e; 	T(XOR(dx, dx));	// 32960 xor     dx, dx ;~ 0D4F:067E
loc_1c150:
	// 5466 
cs=0xd4f;eip=0x000680; 	X(POP(di));	// 32963 pop     di ;~ 0D4F:0680
cs=0xd4f;eip=0x000681; 	X(POP(si));	// 32964 pop     si ;~ 0D4F:0681
cs=0xd4f;eip=0x000682; 	X(POP(ds));	// 32965 pop     ds ;~ 0D4F:0682
cs=0xd4f;eip=0x000683; 	X(POP(bp));	// 32966 pop     bp ;~ 0D4F:0683
cs=0xd4f;eip=0x000684; 	J(RETF(0));	// 32967 retf ;~ 0D4F:0684

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1c128: 	goto loc_1c128;
        case m2c::kloc_1c131: 	goto loc_1c131;
        case m2c::kloc_1c143: 	goto loc_1c143;
        case m2c::kloc_1c148: 	goto loc_1c148;
        case m2c::kloc_1c14c: 	goto loc_1c14c;
        case m2c::kloc_1c150: 	goto loc_1c150;
        case m2c::ksub_1c10a: 	goto sub_1c10a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1c155(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1c155:
    _begin:
cs=0xd4f;eip=0x000685; 	X(PUSH(ds));	// 32975 push    ds ;~ 0D4F:0685
cs=0xd4f;eip=0x000686; 	X(PUSH(si));	// 32976 push    si ;~ 0D4F:0686
cs=0xd4f;eip=0x000687; 	X(PUSH(di));	// 32977 push    di ;~ 0D4F:0687
cs=0xd4f;eip=0x000688; 	X(PUSHF);	// 32978 pushf ;~ 0D4F:0688
cs=0xd4f;eip=0x000689; 	T(CLI);	// 32979 cli ;~ 0D4F:0689
cs=0xd4f;eip=0x00068a; 	T(CLD);	// 32980 cld ;~ 0D4F:068A
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x00068b; 	X(MOV(*(dw*)(((db*)&word_1bbee)), 0x0FFFF));	// 32981 mov     cs:word_1BBEE, 0FFFFh ;~ 0D4F:068B
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000692; 	X(MOV(*(dw*)(((db*)&word_1bbf0)), 0x0FFFF));	// 32982 mov     cs:word_1BBF0, 0FFFFh ;~ 0D4F:0692
cs=0xd4f;eip=0x000699; 	T(MOV(si, 0));	// 32983 mov     si, 0 ;~ 0D4F:0699
loc_1c16c:
	// 5467 
cs=0xd4f;eip=0x00069c; 	T(MOV(bx, si));	// 32986 mov     bx, si ;~ 0D4F:069C
cs=0xd4f;eip=0x00069e; 	T(SHL(bx, 1));	// 32987 shl     bx, 1 ;~ 0D4F:069E
cs=0xd4f;eip=0x0006a0; 	T(CMP(*(dw*)(raddr(cs,bx+0x6A)), 0));	// 32988 cmp     word ptr cs:[bx+6Ah], 0 ;~ 0D4F:06A0
cs=0xd4f;eip=0x0006a6; 	J(JZ(loc_1c19d));	// 32989 jz      short loc_1C19D ;~ 0D4F:06A6
cs=0xd4f;eip=0x0006a8; 	T(SHL(bx, 1));	// 32990 shl     bx, 1 ;~ 0D4F:06A8
cs=0xd4f;eip=0x0006aa; 	T(MOV(ax, *(dw*)(raddr(cs,bx+0x0D0))));	// 32991 mov     ax, cs:[bx+0D0h] ;~ 0D4F:06AA
cs=0xd4f;eip=0x0006af; 	T(MOV(dx, *(dw*)(raddr(cs,bx+0x0D2))));	// 32992 mov     dx, cs:[bx+0D2h] ;~ 0D4F:06AF
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0006b4; 	T(CMP(dx, *(dw*)(((db*)&word_1bbf0))));	// 32993 cmp     dx, cs:word_1BBF0 ;~ 0D4F:06B4
cs=0xd4f;eip=0x0006b9; 	J(JC(loc_1c194));	// 32994 jb      short loc_1C194 ;~ 0D4F:06B9
cs=0xd4f;eip=0x0006bb; 	J(JA(loc_1c19d));	// 32995 ja      short loc_1C19D ;~ 0D4F:06BB
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0006bd; 	T(CMP(ax, *(dw*)(((db*)&word_1bbee))));	// 32996 cmp     ax, cs:word_1BBEE ;~ 0D4F:06BD
cs=0xd4f;eip=0x0006c2; 	J(JNC(loc_1c19d));	// 32997 jnb     short loc_1C19D ;~ 0D4F:06C2
loc_1c194:
	// 5468 
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0006c4; 	X(MOV(*(dw*)(((db*)&word_1bbee)), ax));	// 33000 mov     cs:word_1BBEE, ax ;~ 0D4F:06C4
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0006c8; 	X(MOV(*(dw*)(((db*)&word_1bbf0)), dx));	// 33001 mov     cs:word_1BBF0, dx ;~ 0D4F:06C8
loc_1c19d:
	// 5469 
cs=0xd4f;eip=0x0006cd; 	T(INC(si));	// 33005 inc     si ;~ 0D4F:06CD
cs=0xd4f;eip=0x0006ce; 	T(CMP(si, 0x10));	// 33006 cmp     si, 10h ;~ 0D4F:06CE
cs=0xd4f;eip=0x0006d1; 	J(JBE(loc_1c16c));	// 33007 jbe     short loc_1C16C ;~ 0D4F:06D1
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0006d3; 	T(MOV(ax, *(dw*)(((db*)&word_1bbee))));	// 33008 mov     ax, cs:word_1BBEE ;~ 0D4F:06D3
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0006d7; 	T(MOV(dx, *(dw*)(((db*)&word_1bbf0))));	// 33009 mov     dx, cs:word_1BBF0 ;~ 0D4F:06D7
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0006dc; 	T(CMP(ax, *(dw*)(((db*)&word_1bbe4))));	// 33010 cmp     ax, cs:word_1BBE4 ;~ 0D4F:06DC
cs=0xd4f;eip=0x0006e1; 	J(JNZ(loc_1c1ba));	// 33011 jnz     short loc_1C1BA ;~ 0D4F:06E1
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0006e3; 	T(CMP(dx, *(dw*)(((db*)&word_1bbe6))));	// 33012 cmp     dx, cs:word_1BBE6 ;~ 0D4F:06E3
cs=0xd4f;eip=0x0006e8; 	J(JZ(loc_1c1df));	// 33013 jz      short loc_1C1DF ;~ 0D4F:06E8
loc_1c1ba:
	// 5470 
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0006ea; 	X(MOV(*(dw*)(((db*)&word_1bbec)), 0x0FFFF));	// 33016 mov     cs:word_1BBEC, 0FFFFh ;~ 0D4F:06EA
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0006f1; 	X(MOV(*(dw*)(((db*)&word_1bbe4)), ax));	// 33017 mov     cs:word_1BBE4, ax ;~ 0D4F:06F1
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0006f5; 	X(MOV(*(dw*)(((db*)&word_1bbe6)), dx));	// 33018 mov     cs:word_1BBE6, dx ;~ 0D4F:06F5
cs=0xd4f;eip=0x0006fa; 	X(PUSH(ax));	// 33019 push    ax ;~ 0D4F:06FA
cs=0xd4f;eip=0x0006fb; 	X(PUSH(cs));	// 33020 push    cs ;~ 0D4F:06FB
cs=0xd4f;eip=0x0006fc; 	J(CALL(sub_1c0e0,0));	// 33021 call    near ptr sub_1C0E0 ;~ 0D4F:06FC
cs=0xd4f;eip=0x0006ff; 	T(ADD(sp, 2));	// 33022 add     sp, 2 ;~ 0D4F:06FF
cs=0xd4f;eip=0x000702; 	X(PUSH(cs));	// 33023 push    cs ;~ 0D4F:0702
cs=0xd4f;eip=0x000703; 	X(POP(es));	// 33024 pop     es ;~ 0D4F:0703
cs=0xd4f;eip=0x000704; 	T(MOV(di, 0x8C));	// 33025 mov     di, 8Ch ; 'Œ' ;~ 0D4F:0704
cs=0xd4f;eip=0x000707; 	T(MOV(cx, 0x22));	// 33026 mov     cx, 22h ; '"' ;~ 0D4F:0707
cs=0xd4f;eip=0x00070a; 	T(MOV(ax, 0));	// 33027 mov     ax, 0 ;~ 0D4F:070A
	// 33028 rep stosw ;~ 0D4F:070D
cs=0xd4f;eip=0x00070d; 	X(	REP STOSW);	// 33028 rep stosw ;~ 0D4F:070D
loc_1c1df:
	// 5471 
cs=0xd4f;eip=0x00070f; 	//T(OR(bh, 0));	// 33032 or      bh, 0 ;~ 0D4F:070F
	R(return seg002_712_proc(0, _state););
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1c16c: 	goto loc_1c16c;
        case m2c::kloc_1c194: 	goto loc_1c194;
        case m2c::kloc_1c19d: 	goto loc_1c19d;
        case m2c::kloc_1c1ba: 	goto loc_1c1ba;
        case m2c::kloc_1c1df: 	goto loc_1c1df;
        case m2c::ksub_1c155: 	goto sub_1c155;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_712_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_712_proc:
    _begin:
//cs=0xd4f;eip=0x000712; 	X(PUSH(cs));	// 33035 push    cs ;~ 0D4F:0712
//cs=0xd4f;eip=0x000713; 	J(CALL(sub_1c155,m2c::kloc_1c1df));	// 33036 call    near ptr loc_1C1DF+1 ;~ 0D4F:0713
R(POPF);
cs=0xd4f;eip=0x000716; 	X(POP(di));	// 33037 pop     di ;~ 0D4F:0716
cs=0xd4f;eip=0x000717; 	X(POP(si));	// 33038 pop     si ;~ 0D4F:0717
cs=0xd4f;eip=0x000718; 	X(POP(ds));	// 33039 pop     ds ;~ 0D4F:0718
cs=0xd4f;eip=0x000719; 	J(RETF(0));	// 33041 retf ;~ 0D4F:0719

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kseg002_712_proc: 	goto seg002_712_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1c1ea(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1c1ea:
    _begin:
cs=0xd4f;eip=0x00071a; 	X(PUSH(ds));	// 33048 push    ds ;~ 0D4F:071A
cs=0xd4f;eip=0x00071b; 	X(PUSH(si));	// 33049 push    si ;~ 0D4F:071B
cs=0xd4f;eip=0x00071c; 	X(PUSH(di));	// 33050 push    di ;~ 0D4F:071C
cs=0xd4f;eip=0x00071d; 	X(PUSHF);	// 33051 pushf ;~ 0D4F:071D
cs=0xd4f;eip=0x00071e; 	T(CLI);	// 33052 cli ;~ 0D4F:071E
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x00071f; 	X(MOV(*(dw*)(((db*)&word_1bad0)), 0));	// 33053 mov     cs:word_1BAD0, 0 ;~ 0D4F:071F
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000726; 	X(MOV(*(dw*)(((db*)&word_1bad2)), 0));	// 33054 mov     cs:word_1BAD2, 0 ;~ 0D4F:0726
cs=0xd4f;eip=0x00072d; 	T(CLD);	// 33055 cld ;~ 0D4F:072D
cs=0xd4f;eip=0x00072e; 	T(MOV(ax, cs));	// 33056 mov     ax, cs ;~ 0D4F:072E
cs=0xd4f;eip=0x000730; 	T(MOV(es, ax));	// 33057 mov     es, ax ;~ 0D4F:0730
cs=0xd4f;eip=0x000732; 	T(MOV(di, offset(seg002,byte_1bbf4)));	// 33059 mov     di, offset byte_1BBF4 ;~ 0D4F:0732
cs=0xd4f;eip=0x000735; 	T(MOV(cx, 0x20));	// 33060 mov     cx, 20h ; ' ' ;~ 0D4F:0735
cs=0xd4f;eip=0x000738; 	T(MOV(ax, 0));	// 33061 mov     ax, 0 ;~ 0D4F:0738
	// 33062 rep stosw ;~ 0D4F:073B
cs=0xd4f;eip=0x00073b; 	X(	REP STOSW);	// 33062 rep stosw ;~ 0D4F:073B
cs=0xd4f;eip=0x00073d; 	T(MOV(di, 0x164));	// 33063 mov     di, 164h ;~ 0D4F:073D
cs=0xd4f;eip=0x000740; 	T(MOV(cx, 0x10));	// 33064 mov     cx, 10h ;~ 0D4F:0740
cs=0xd4f;eip=0x000743; 	T(MOV(ax, 0x0FFFF));	// 33065 mov     ax, 0FFFFh ;~ 0D4F:0743
	// 33066 rep stosw ;~ 0D4F:0746
cs=0xd4f;eip=0x000746; 	X(	REP STOSW);	// 33066 rep stosw ;~ 0D4F:0746
cs=0xd4f;eip=0x000748; 	T(MOV(di, 0x184));	// 33067 mov     di, 184h ;~ 0D4F:0748
cs=0xd4f;eip=0x00074b; 	T(MOV(cx, 0x10));	// 33068 mov     cx, 10h ;~ 0D4F:074B
cs=0xd4f;eip=0x00074e; 	T(MOV(ax, 0));	// 33069 mov     ax, 0 ;~ 0D4F:074E
	// 33070 rep stosw ;~ 0D4F:0751
cs=0xd4f;eip=0x000751; 	X(	REP STOSW);	// 33070 rep stosw ;~ 0D4F:0751
	R(return seg002_753_proc(0, _state););
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_1c1ea: 	goto sub_1c1ea;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_753_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_753_proc:
    _begin:
loc_1c223:
	// 5472 
cs=0xd4f;eip=0x000753;// 	T(OR(bh, 0));	// 33075 or      bh, 0 ;~ 0D4F:0753
//cs=0xd4f;eip=0x000756; 	X(PUSH(cs));	// 33076 push    cs ;~ 0D4F:0756
//cs=0xd4f;eip=0x000757; 	J(CALL(seg002_753_proc,m2c::kloc_1c223));	// 33077 call    near ptr loc_1C223+1 ;~ 0D4F:0757
R(POPF);
cs=0xd4f;eip=0x00075a; 	X(POP(di));	// 33078 pop     di ;~ 0D4F:075A
cs=0xd4f;eip=0x00075b; 	X(POP(si));	// 33079 pop     si ;~ 0D4F:075B
cs=0xd4f;eip=0x00075c; 	X(POP(ds));	// 33080 pop     ds ;~ 0D4F:075C
cs=0xd4f;eip=0x00075d; 	J(RETF(0));	// 33081 retf ;~ 0D4F:075D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1c223: 	goto loc_1c223;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1c22e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1c22e:
    _begin:
#undef arg_2
#define arg_2 6
	// 33090 arg_2           = word ptr  6 ;~ 0D4F:075E
#undef arg_4
#define arg_4 8
	// 33091 arg_4           = word ptr  8 ;~ 0D4F:075E
cs=0xd4f;eip=0x00075e; 	X(PUSH(bp));	// 33093 push    bp ;~ 0D4F:075E
cs=0xd4f;eip=0x00075f; 	T(MOV(bp, sp));	// 33094 mov     bp, sp ;~ 0D4F:075F
cs=0xd4f;eip=0x000761; 	X(PUSH(ds));	// 33095 push    ds ;~ 0D4F:0761
cs=0xd4f;eip=0x000762; 	X(PUSH(si));	// 33096 push    si ;~ 0D4F:0762
cs=0xd4f;eip=0x000763; 	X(PUSH(di));	// 33097 push    di ;~ 0D4F:0763
cs=0xd4f;eip=0x000764; 	X(PUSHF);	// 33098 pushf ;~ 0D4F:0764
cs=0xd4f;eip=0x000765; 	T(CLI);	// 33099 cli ;~ 0D4F:0765
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000766; 	X(MOV(*(dw*)(((db*)&word_1bc78)), 0));	// 33100 mov     cs:word_1BC78, 0 ;~ 0D4F:0766
loc_1c23d:
	// 5473 
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x00076d; 	T(MOV(si, *(dw*)(((db*)&word_1bc78))));	// 33103 mov     si, cs:word_1BC78 ;~ 0D4F:076D
cs=0xd4f;eip=0x000772; 	T(SHL(si, 1));	// 33104 shl     si, 1 ;~ 0D4F:0772
cs=0xd4f;eip=0x000774; 	T(MOV(dx, *(dw*)(raddr(cs,si+0x164))));	// 33105 mov     dx, cs:[si+164h] ;~ 0D4F:0774
cs=0xd4f;eip=0x000779; 	T(SHL(si, 1));	// 33106 shl     si, 1 ;~ 0D4F:0779
cs=0xd4f;eip=0x00077b; 	T(MOV(ax, *(dw*)(raddr(cs,si+0x124))));	// 33107 mov     ax, cs:[si+124h] ;~ 0D4F:077B
cs=0xd4f;eip=0x000780; 	T(OR(ax, *(dw*)(raddr(cs,si+0x126))));	// 33108 or      ax, cs:[si+126h] ;~ 0D4F:0780
cs=0xd4f;eip=0x000785; 	J(JZ(loc_1c276));	// 33109 jz      short loc_1C276 ;~ 0D4F:0785
cs=0xd4f;eip=0x000787; 	T(CMP(dx, 0x0FFFF));	// 33110 cmp     dx, 0FFFFh ;~ 0D4F:0787
cs=0xd4f;eip=0x00078a; 	J(JZ(loc_1c264));	// 33111 jz      short loc_1C264 ;~ 0D4F:078A
cs=0xd4f;eip=0x00078c; 	X(PUSH(dx));	// 33112 push    dx ;~ 0D4F:078C
cs=0xd4f;eip=0x00078d; 	X(PUSH(cs));	// 33113 push    cs ;~ 0D4F:078D
cs=0xd4f;eip=0x00078e; 	J(CALL(sub_1c35e,0));	// 33114 call    sub_1C35E ;~ 0D4F:078E
cs=0xd4f;eip=0x000791; 	T(ADD(sp, 2));	// 33115 add     sp, 2 ;~ 0D4F:0791
loc_1c264:
	// 5474 
cs=0xd4f;eip=0x000794; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 33118 push    [bp+arg_4] ;~ 0D4F:0794
cs=0xd4f;eip=0x000797; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 33119 push    [bp+arg_2] ;~ 0D4F:0797
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x00079a; 	X(PUSH(*(dw*)(((db*)&word_1bc78))));	// 33120 push    cs:word_1BC78 ;~ 0D4F:079A
cs=0xd4f;eip=0x00079f; 	X(PUSH(cs));	// 33121 push    cs ;~ 0D4F:079F
cs=0xd4f;eip=0x0007a0; 	J(CALL(sub_1c6d0,0));	// 33122 call    near ptr sub_1C6D0 ;~ 0D4F:07A0
cs=0xd4f;eip=0x0007a3; 	T(ADD(sp, 6));	// 33123 add     sp, 6 ;~ 0D4F:07A3
loc_1c276:
	// 5475 
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0007a6; 	X(INC(*(dw*)(((db*)&word_1bc78))));	// 33126 inc     cs:word_1BC78 ;~ 0D4F:07A6
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0007ab; 	T(CMP(*(dw*)(((db*)&word_1bc78)), 0x10));	// 33127 cmp     cs:word_1BC78, 10h ;~ 0D4F:07AB
cs=0xd4f;eip=0x0007b1; 	J(JNZ(loc_1c23d));	// 33128 jnz     short loc_1C23D ;~ 0D4F:07B1
cs=0xd4f;eip=0x0007b3; 	X(PUSH(cs));	// 33129 push    cs ;~ 0D4F:07B3
cs=0xd4f;eip=0x0007b4; 	J(CALL(sub_1c3a7,0));	// 33130 call    sub_1C3A7 ;~ 0D4F:07B4
loc_1c287:
	// 5476 
cs=0xd4f;eip=0x0007b7; 	//T(OR(bh, 0));	// 33134 or      bh, 0 ;~ 0D4F:07B7
	R(return seg002_7ba_proc(0, _state););
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1c23d: 	goto loc_1c23d;
        case m2c::kloc_1c264: 	goto loc_1c264;
        case m2c::kloc_1c276: 	goto loc_1c276;
        case m2c::kloc_1c287: 	goto loc_1c287;
        case m2c::ksub_1c22e: 	goto sub_1c22e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_7ba_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_7ba_proc:
    _begin:
//cs=0xd4f;eip=0x0007ba; 	X(PUSH(cs));	// 33137 push    cs ;~ 0D4F:07BA
//cs=0xd4f;eip=0x0007bb; 	J(CALL(sub_1c22e,m2c::kloc_1c287));	// 33138 call    near ptr loc_1C287+1 ;~ 0D4F:07BB
R(POPF);
cs=0xd4f;eip=0x0007be; 	X(POP(di));	// 33139 pop     di ;~ 0D4F:07BE
cs=0xd4f;eip=0x0007bf; 	X(POP(si));	// 33140 pop     si ;~ 0D4F:07BF
cs=0xd4f;eip=0x0007c0; 	X(POP(ds));	// 33141 pop     ds ;~ 0D4F:07C0
cs=0xd4f;eip=0x0007c1; 	X(POP(bp));	// 33142 pop     bp ;~ 0D4F:07C1
cs=0xd4f;eip=0x0007c2; 	J(RETF(0));	// 33143 retf ;~ 0D4F:07C2

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kseg002_7ba_proc: 	goto seg002_7ba_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1c293(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1c293:
    _begin:
#undef arg_2
#define arg_2 6
	// 33153 arg_2           = dword ptr  6 ;~ 0D4F:07C3
cs=0xd4f;eip=0x0007c3; 	X(PUSH(bp));	// 33155 push    bp ;~ 0D4F:07C3
cs=0xd4f;eip=0x0007c4; 	T(MOV(bp, sp));	// 33156 mov     bp, sp ;~ 0D4F:07C4
cs=0xd4f;eip=0x0007c6; 	X(PUSH(ds));	// 33157 push    ds ;~ 0D4F:07C6
cs=0xd4f;eip=0x0007c7; 	X(PUSH(si));	// 33158 push    si ;~ 0D4F:07C7
cs=0xd4f;eip=0x0007c8; 	X(PUSH(di));	// 33159 push    di ;~ 0D4F:07C8
cs=0xd4f;eip=0x0007c9; 	X(PUSHF);	// 33160 pushf ;~ 0D4F:07C9
cs=0xd4f;eip=0x0007ca; 	T(CLI);	// 33161 cli ;~ 0D4F:07CA
cs=0xd4f;eip=0x0007cb; 	T(MOV(cx, ds));	// 33162 mov     cx, ds ;~ 0D4F:07CB
cs=0xd4f;eip=0x0007cd; 	T(MOV(bx, 0));	// 33163 mov     bx, 0 ;~ 0D4F:07CD
loc_1c2a0:
	// 5477 
cs=0xd4f;eip=0x0007d0; 	T(CMP(*(dw*)(raddr(cs,bx+0x6A)), 0));	// 33166 cmp     word ptr cs:[bx+6Ah], 0 ;~ 0D4F:07D0
cs=0xd4f;eip=0x0007d6; 	J(JZ(loc_1c2b6));	// 33167 jz      short loc_1C2B6 ;~ 0D4F:07D6
cs=0xd4f;eip=0x0007d8; 	T(ADD(bx, 2));	// 33168 add     bx, 2 ;~ 0D4F:07D8
cs=0xd4f;eip=0x0007db; 	T(CMP(bx, 0x20));	// 33169 cmp     bx, 20h ; ' ' ;~ 0D4F:07DB
cs=0xd4f;eip=0x0007de; 	J(JC(loc_1c2a0));	// 33170 jb      short loc_1C2A0 ;~ 0D4F:07DE
cs=0xd4f;eip=0x0007e0; 	T(MOV(ax, 0x0FFFF));	// 33171 mov     ax, 0FFFFh ;~ 0D4F:07E0
cs=0xd4f;eip=0x0007e3; 	J(JMP(loc_1c352));	// 33172 jmp     loc_1C352 ;~ 0D4F:07E3
loc_1c2b6:
	// 5478 
cs=0xd4f;eip=0x0007e6; 	T(MOV(ax, bx));	// 33176 mov     ax, bx ;~ 0D4F:07E6
cs=0xd4f;eip=0x0007e8; 	T(SHR(ax, 1));	// 33177 shr     ax, 1 ;~ 0D4F:07E8
cs=0xd4f;eip=0x0007ea; 	X(MOV(*(dw*)(raddr(cs,bx+0x6A)), 1));	// 33178 mov     word ptr cs:[bx+6Ah], 1 ;~ 0D4F:07EA
cs=0xd4f;eip=0x0007f1; 	X(MOV(*(dw*)(raddr(cs,bx+0x48)), cx));	// 33179 mov     cs:[bx+48h], cx ;~ 0D4F:07F1
cs=0xd4f;eip=0x0007f6; 	T(SHL(bx, 1));	// 33180 shl     bx, 1 ;~ 0D4F:07F6
cs=0xd4f;eip=0x0007f8; 	T(LDS(si, *(dd*)(raddr(ss,bp+arg_2))));	// 33181 lds     si, [bp+arg_2] ;~ 0D4F:07F8
cs=0xd4f;eip=0x0007fb; 	X(MOV(*(dw*)(raddr(cs,bx+4)), si));	// 33183 mov     cs:[bx+4], si ;~ 0D4F:07FB
cs=0xd4f;eip=0x000800; 	X(MOV(*(dw*)(raddr(cs,bx+6)), ds));	// 33184 mov     word ptr cs:[bx+6], ds ;~ 0D4F:0800
cs=0xd4f;eip=0x000805; 	X(MOV(*(dw*)(raddr(cs,bx+0x0D0)), 0x0FFFF));	// 33185 mov     word ptr cs:[bx+0D0h], 0FFFFh ;~ 0D4F:0805
cs=0xd4f;eip=0x00080c; 	X(MOV(*(dw*)(raddr(cs,bx+0x0D2)), 0x0FFFF));	// 33186 mov     word ptr cs:[bx+0D2h], 0FFFFh ;~ 0D4F:080C
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000813; 	X(INC(*(dw*)(((db*)&word_1bad0))));	// 33187 inc     cs:word_1BAD0 ;~ 0D4F:0813
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000818; 	T(CMP(*(dw*)(((db*)&word_1bad0)), 1));	// 33188 cmp     cs:word_1BAD0, 1 ;~ 0D4F:0818
cs=0xd4f;eip=0x00081e; 	J(JNZ(loc_1c352));	// 33189 jnz     short loc_1C352 ;~ 0D4F:081E
cs=0xd4f;eip=0x000820; 	X(PUSH(ax));	// 33190 push    ax ;~ 0D4F:0820
cs=0xd4f;eip=0x000821; 	X(PUSH(cs));	// 33191 push    cs ;~ 0D4F:0821
cs=0xd4f;eip=0x000822; 	J(CALL(sub_1bff8,0));	// 33192 call    sub_1BFF8 ;~ 0D4F:0822
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000825; 	X(MOV(*(dw*)(((db*)&word_1bb5a)), 1));	// 33193 mov     cs:word_1BB5A, 1 ;~ 0D4F:0825
cs=0xd4f;eip=0x00082c; 	X(PUSH(cs));	// 33194 push    cs ;~ 0D4F:082C
cs=0xd4f;eip=0x00082d; 	J(CALL(sub_1c03b,0));	// 33195 call    sub_1C03B ;~ 0D4F:082D
cs=0xd4f;eip=0x000830; 	X(PUSH(ax));	// 33197 push    ax ;~ 0D4F:0830
cs=0xd4f;eip=0x000831; 	X(PUSH(bp));	// 33198 push    bp ;~ 0D4F:0831
cs=0xd4f;eip=0x000832; 	T(MOV(bp, sp));	// 33199 mov     bp, sp ;~ 0D4F:0832
cs=0xd4f;eip=0x000834; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0));	// 33200 mov     word ptr [bp+2], 0 ;~ 0D4F:0834
cs=0xd4f;eip=0x000839; 	X(POP(bp));	// 33201 pop     bp ;~ 0D4F:0839
cs=0xd4f;eip=0x00083a; 	X(PUSH(ax));	// 33202 push    ax ;~ 0D4F:083A
cs=0xd4f;eip=0x00083b; 	X(PUSH(bp));	// 33203 push    bp ;~ 0D4F:083B
cs=0xd4f;eip=0x00083c; 	T(MOV(bp, sp));	// 33204 mov     bp, sp ;~ 0D4F:083C
cs=0xd4f;eip=0x00083e; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0x0D68D));	// 33205 mov     word ptr [bp+2], 0D68Dh ;~ 0D4F:083E
cs=0xd4f;eip=0x000843; 	X(POP(bp));	// 33206 pop     bp ;~ 0D4F:0843
cs=0xd4f;eip=0x000844; 	X(PUSH(ax));	// 33207 push    ax ;~ 0D4F:0844
cs=0xd4f;eip=0x000845; 	X(PUSH(bp));	// 33208 push    bp ;~ 0D4F:0845
cs=0xd4f;eip=0x000846; 	T(MOV(bp, sp));	// 33209 mov     bp, sp ;~ 0D4F:0846
cs=0xd4f;eip=0x000848; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0x10));	// 33210 mov     word ptr [bp+2], 10h ;~ 0D4F:0848
cs=0xd4f;eip=0x00084d; 	X(POP(bp));	// 33211 pop     bp ;~ 0D4F:084D
cs=0xd4f;eip=0x00084e; 	X(PUSH(cs));	// 33212 push    cs ;~ 0D4F:084E
cs=0xd4f;eip=0x00084f; 	J(CALL(sub_1c451,0));	// 33213 call    sub_1C451 ;~ 0D4F:084F
cs=0xd4f;eip=0x000852; 	T(ADD(sp, 6));	// 33215 add     sp, 6 ;~ 0D4F:0852
cs=0xd4f;eip=0x000855; 	X(PUSH(ax));	// 33216 push    ax ;~ 0D4F:0855
cs=0xd4f;eip=0x000856; 	X(PUSH(bp));	// 33217 push    bp ;~ 0D4F:0856
cs=0xd4f;eip=0x000857; 	T(MOV(bp, sp));	// 33218 mov     bp, sp ;~ 0D4F:0857
cs=0xd4f;eip=0x000859; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0x10));	// 33219 mov     word ptr [bp+2], 10h ;~ 0D4F:0859
cs=0xd4f;eip=0x00085e; 	X(POP(bp));	// 33220 pop     bp ;~ 0D4F:085E
cs=0xd4f;eip=0x00085f; 	X(PUSH(cs));	// 33221 push    cs ;~ 0D4F:085F
cs=0xd4f;eip=0x000860; 	J(CALL(sub_1c3c5,0));	// 33222 call    sub_1C3C5 ;~ 0D4F:0860
cs=0xd4f;eip=0x000863; 	T(ADD(sp, 2));	// 33223 add     sp, 2 ;~ 0D4F:0863
cs=0xd4f;eip=0x000866; 	X(POP(ax));	// 33224 pop     ax ;~ 0D4F:0866
cs=0xd4f;eip=0x000867; 	T(MOV(bx, ax));	// 33225 mov     bx, ax ;~ 0D4F:0867
cs=0xd4f;eip=0x000869; 	T(SHL(bx, 1));	// 33226 shl     bx, 1 ;~ 0D4F:0869
cs=0xd4f;eip=0x00086b; 	X(MOV(*(dw*)(raddr(cs,bx+0x6A)), 1));	// 33227 mov     word ptr cs:[bx+6Ah], 1 ;~ 0D4F:086B
cs=0xd4f;eip=0x000872; 	T(SHL(bx, 1));	// 33228 shl     bx, 1 ;~ 0D4F:0872
cs=0xd4f;eip=0x000874; 	X(MOV(*(dw*)(raddr(cs,bx+0x0D0)), 0x0FFFF));	// 33229 mov     word ptr cs:[bx+0D0h], 0FFFFh ;~ 0D4F:0874
cs=0xd4f;eip=0x00087b; 	X(MOV(*(dw*)(raddr(cs,bx+0x0D2)), 0x0FFFF));	// 33230 mov     word ptr cs:[bx+0D2h], 0FFFFh ;~ 0D4F:087B
loc_1c352:
	// 5479 
cs=0xd4f;eip=0x000882; 	//T(OR(bh, 0));	// 33234 or      bh, 0 ;~ 0D4F:0882
	R(return seg002_885_proc(0, _state););
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1c2a0: 	goto loc_1c2a0;
        case m2c::kloc_1c2b6: 	goto loc_1c2b6;
        case m2c::kloc_1c352: 	goto loc_1c352;
        case m2c::ksub_1c293: 	goto sub_1c293;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_885_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_885_proc:
    _begin:
//cs=0xd4f;eip=0x000885; 	X(PUSH(cs));	// 33237 push    cs ;~ 0D4F:0885
//cs=0xd4f;eip=0x000886; 	J(CALL(sub_1c293,m2c::kloc_1c352));	// 33238 call    near ptr loc_1C352+1 ;~ 0D4F:0886
R(POPF);
cs=0xd4f;eip=0x000889; 	X(POP(di));	// 33239 pop     di ;~ 0D4F:0889
cs=0xd4f;eip=0x00088a; 	X(POP(si));	// 33240 pop     si ;~ 0D4F:088A
cs=0xd4f;eip=0x00088b; 	X(POP(ds));	// 33241 pop     ds ;~ 0D4F:088B
cs=0xd4f;eip=0x00088c; 	X(POP(bp));	// 33243 pop     bp ;~ 0D4F:088C
cs=0xd4f;eip=0x00088d; 	J(RETF(0));	// 33244 retf ;~ 0D4F:088D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kseg002_885_proc: 	goto seg002_885_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1c35e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1c35e:
    _begin:
#undef arg_2
#define arg_2 6
	// 33254 arg_2           = word ptr  6 ;~ 0D4F:088E
cs=0xd4f;eip=0x00088e; 	X(PUSH(bp));	// 33256 push    bp ;~ 0D4F:088E
cs=0xd4f;eip=0x00088f; 	T(MOV(bp, sp));	// 33257 mov     bp, sp ;~ 0D4F:088F
cs=0xd4f;eip=0x000891; 	X(PUSH(ds));	// 33258 push    ds ;~ 0D4F:0891
cs=0xd4f;eip=0x000892; 	X(PUSH(si));	// 33259 push    si ;~ 0D4F:0892
cs=0xd4f;eip=0x000893; 	X(PUSH(di));	// 33260 push    di ;~ 0D4F:0893
cs=0xd4f;eip=0x000894; 	X(PUSHF);	// 33261 pushf ;~ 0D4F:0894
cs=0xd4f;eip=0x000895; 	T(CLI);	// 33262 cli ;~ 0D4F:0895
cs=0xd4f;eip=0x000896; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 33263 mov     bx, [bp+arg_2] ;~ 0D4F:0896
cs=0xd4f;eip=0x000899; 	T(CMP(bx, 0x0FFFF));	// 33264 cmp     bx, 0FFFFh ;~ 0D4F:0899
cs=0xd4f;eip=0x00089c; 	J(JZ(loc_1c39b));	// 33265 jz      short loc_1C39B ;~ 0D4F:089C
cs=0xd4f;eip=0x00089e; 	T(SHL(bx, 1));	// 33266 shl     bx, 1 ;~ 0D4F:089E
cs=0xd4f;eip=0x0008a0; 	T(CMP(*(dw*)(raddr(cs,bx+0x6A)), 0));	// 33267 cmp     word ptr cs:[bx+6Ah], 0 ;~ 0D4F:08A0
cs=0xd4f;eip=0x0008a6; 	J(JZ(loc_1c39b));	// 33268 jz      short loc_1C39B ;~ 0D4F:08A6
cs=0xd4f;eip=0x0008a8; 	X(MOV(*(dw*)(raddr(cs,bx+0x6A)), 0));	// 33269 mov     word ptr cs:[bx+6Ah], 0 ;~ 0D4F:08A8
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x0008af; 	X(DEC(*(dw*)(((db*)&word_1bad0))));	// 33270 dec     cs:word_1BAD0 ;~ 0D4F:08AF
cs=0xd4f;eip=0x0008b4; 	J(JNZ(loc_1c39b));	// 33271 jnz     short loc_1C39B ;~ 0D4F:08B4
cs=0xd4f;eip=0x0008b6; 	X(PUSH(ax));	// 33272 push    ax ;~ 0D4F:08B6
cs=0xd4f;eip=0x0008b7; 	X(PUSH(bp));	// 33273 push    bp ;~ 0D4F:08B7
cs=0xd4f;eip=0x0008b8; 	T(MOV(bp, sp));	// 33274 mov     bp, sp ;~ 0D4F:08B8
cs=0xd4f;eip=0x0008ba; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0));	// 33275 mov     word ptr [bp+2], 0 ;~ 0D4F:08BA
cs=0xd4f;eip=0x0008bf; 	X(POP(bp));	// 33276 pop     bp ;~ 0D4F:08BF
cs=0xd4f;eip=0x0008c0; 	X(PUSH(cs));	// 33277 push    cs ;~ 0D4F:08C0
cs=0xd4f;eip=0x0008c1; 	J(CALL(sub_1c0b7,0));	// 33278 call    sub_1C0B7 ;~ 0D4F:08C1
cs=0xd4f;eip=0x0008c4; 	T(ADD(sp, 2));	// 33279 add     sp, 2 ;~ 0D4F:08C4
cs=0xd4f;eip=0x0008c7; 	X(PUSH(cs));	// 33280 push    cs ;~ 0D4F:08C7
cs=0xd4f;eip=0x0008c8; 	J(CALL(sub_1c087,0));	// 33281 call    sub_1C087 ;~ 0D4F:08C8
loc_1c39b:
	// 5480 
cs=0xd4f;eip=0x0008cb; 	//T(OR(bh, 0));	// 33285 or      bh, 0 ;~ 0D4F:08CB
	R(return seg002_8ce_proc(0, _state););
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1c39b: 	goto loc_1c39b;
        case m2c::ksub_1c35e: 	goto sub_1c35e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_8ce_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_8ce_proc:
    _begin:
//cs=0xd4f;eip=0x0008ce; 	X(PUSH(cs));	// 33288 push    cs ;~ 0D4F:08CE
//cs=0xd4f;eip=0x0008cf; 	J(CALL(sub_1c35e,m2c::kloc_1c39b));	// 33289 call    near ptr loc_1C39B+1 ;~ 0D4F:08CF
R(POPF);
cs=0xd4f;eip=0x0008d2; 	X(POP(di));	// 33290 pop     di ;~ 0D4F:08D2
cs=0xd4f;eip=0x0008d3; 	X(POP(si));	// 33291 pop     si ;~ 0D4F:08D3
cs=0xd4f;eip=0x0008d4; 	X(POP(ds));	// 33292 pop     ds ;~ 0D4F:08D4
cs=0xd4f;eip=0x0008d5; 	X(POP(bp));	// 33293 pop     bp ;~ 0D4F:08D5
cs=0xd4f;eip=0x0008d6; 	J(RETF(0));	// 33294 retf ;~ 0D4F:08D6

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kseg002_8ce_proc: 	goto seg002_8ce_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1c3a7(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1c3a7:
    _begin:
cs=0xd4f;eip=0x0008d7; 	X(PUSH(ds));	// 33300 push    ds ;~ 0D4F:08D7
cs=0xd4f;eip=0x0008d8; 	X(PUSH(si));	// 33301 push    si ;~ 0D4F:08D8
cs=0xd4f;eip=0x0008d9; 	X(PUSH(di));	// 33302 push    di ;~ 0D4F:08D9
cs=0xd4f;eip=0x0008da; 	X(PUSHF);	// 33303 pushf ;~ 0D4F:08DA
cs=0xd4f;eip=0x0008db; 	T(CLI);	// 33304 cli ;~ 0D4F:08DB
cs=0xd4f;eip=0x0008dc; 	T(MOV(si, 0x0F));	// 33305 mov     si, 0Fh ;~ 0D4F:08DC
loc_1c3af:
	// 5481 
cs=0xd4f;eip=0x0008df; 	X(PUSH(si));	// 33308 push    si ;~ 0D4F:08DF
cs=0xd4f;eip=0x0008e0; 	X(PUSH(cs));	// 33309 push    cs ;~ 0D4F:08E0
cs=0xd4f;eip=0x0008e1; 	J(CALL(sub_1c35e,0));	// 33310 call    sub_1C35E ;~ 0D4F:08E1
cs=0xd4f;eip=0x0008e4; 	T(ADD(sp, 2));	// 33311 add     sp, 2 ;~ 0D4F:08E4
cs=0xd4f;eip=0x0008e7; 	T(DEC(si));	// 33312 dec     si ;~ 0D4F:08E7
cs=0xd4f;eip=0x0008e8; 	J(JGE(loc_1c3af));	// 33313 jge     short loc_1C3AF ;~ 0D4F:08E8
loc_1c3ba:
	// 5482 
cs=0xd4f;eip=0x0008ea; 	//T(OR(bh, 0));	// 33317 or      bh, 0 ;~ 0D4F:08EA
	R(return seg002_8ed_proc(0, _state););
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1c3af: 	goto loc_1c3af;
        case m2c::kloc_1c3ba: 	goto loc_1c3ba;
        case m2c::ksub_1c3a7: 	goto sub_1c3a7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_8ed_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_8ed_proc:
    _begin:
//cs=0xd4f;eip=0x0008ed; 	X(PUSH(cs));	// 33320 push    cs ;~ 0D4F:08ED
//cs=0xd4f;eip=0x0008ee; 	J(CALL(sub_1c3a7,m2c::kloc_1c3ba));	// 33321 call    near ptr loc_1C3BA+1 ;~ 0D4F:08EE
R(POPF);
cs=0xd4f;eip=0x0008f1; 	X(POP(di));	// 33322 pop     di ;~ 0D4F:08F1
cs=0xd4f;eip=0x0008f2; 	X(POP(si));	// 33323 pop     si ;~ 0D4F:08F2
cs=0xd4f;eip=0x0008f3; 	X(POP(ds));	// 33324 pop     ds ;~ 0D4F:08F3
cs=0xd4f;eip=0x0008f4; 	J(RETF(0));	// 33325 retf ;~ 0D4F:08F4

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kseg002_8ed_proc: 	goto seg002_8ed_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1c3c5(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1c3c5:
    _begin:
#undef arg_2
#define arg_2 6
	// 33335 arg_2           = word ptr  6 ;~ 0D4F:08F5
cs=0xd4f;eip=0x0008f5; 	X(PUSH(bp));	// 33337 push    bp ;~ 0D4F:08F5
cs=0xd4f;eip=0x0008f6; 	T(MOV(bp, sp));	// 33338 mov     bp, sp ;~ 0D4F:08F6
cs=0xd4f;eip=0x0008f8; 	X(PUSH(ds));	// 33339 push    ds ;~ 0D4F:08F8
cs=0xd4f;eip=0x0008f9; 	X(PUSH(si));	// 33340 push    si ;~ 0D4F:08F9
cs=0xd4f;eip=0x0008fa; 	X(PUSH(di));	// 33341 push    di ;~ 0D4F:08FA
cs=0xd4f;eip=0x0008fb; 	X(PUSHF);	// 33342 pushf ;~ 0D4F:08FB
cs=0xd4f;eip=0x0008fc; 	T(CLI);	// 33343 cli ;~ 0D4F:08FC
cs=0xd4f;eip=0x0008fd; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 33344 mov     bx, [bp+arg_2] ;~ 0D4F:08FD
cs=0xd4f;eip=0x000900; 	T(SHL(bx, 1));	// 33345 shl     bx, 1 ;~ 0D4F:0900
cs=0xd4f;eip=0x000902; 	T(CMP(*(dw*)(raddr(cs,bx+0x6A)), 1));	// 33346 cmp     word ptr cs:[bx+6Ah], 1 ;~ 0D4F:0902
cs=0xd4f;eip=0x000908; 	J(JNZ(loc_1c3e1));	// 33347 jnz     short loc_1C3E1 ;~ 0D4F:0908
cs=0xd4f;eip=0x00090a; 	X(MOV(*(dw*)(raddr(cs,bx+0x6A)), 2));	// 33348 mov     word ptr cs:[bx+6Ah], 2 ;~ 0D4F:090A
loc_1c3e1:
	// 5483 
cs=0xd4f;eip=0x000911; 	//T(OR(bh, 0));	// 33352 or      bh, 0 ;~ 0D4F:0911
	R(return seg002_914_proc(0, _state););
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1c3e1: 	goto loc_1c3e1;
        case m2c::ksub_1c3c5: 	goto sub_1c3c5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_914_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_914_proc:
    _begin:
//cs=0xd4f;eip=0x000914; 	X(PUSH(cs));	// 33355 push    cs ;~ 0D4F:0914
//cs=0xd4f;eip=0x000915; 	J(CALL(sub_1c3c5,m2c::kloc_1c3e1));	// 33356 call    near ptr loc_1C3E1+1 ;~ 0D4F:0915
R(POPF);
cs=0xd4f;eip=0x000918; 	X(POP(di));	// 33357 pop     di ;~ 0D4F:0918
cs=0xd4f;eip=0x000919; 	X(POP(si));	// 33358 pop     si ;~ 0D4F:0919
cs=0xd4f;eip=0x00091a; 	X(POP(ds));	// 33359 pop     ds ;~ 0D4F:091A
cs=0xd4f;eip=0x00091b; 	X(POP(bp));	// 33361 pop     bp ;~ 0D4F:091B
cs=0xd4f;eip=0x00091c; 	J(RETF(0));	// 33362 retf ;~ 0D4F:091C
ret_d4f_91d:
	// 5484 
cs=0xd4f;eip=0x00091d; 	X(PUSH(ds));	// 33364 push    ds ;~ 0D4F:091D
cs=0xd4f;eip=0x00091e; 	X(PUSH(si));	// 33365 push    si ;~ 0D4F:091E
cs=0xd4f;eip=0x00091f; 	X(PUSH(di));	// 33366 push    di ;~ 0D4F:091F
cs=0xd4f;eip=0x000920; 	X(PUSHF);	// 33367 pushf ;~ 0D4F:0920
cs=0xd4f;eip=0x000921; 	T(CLI);	// 33368 cli ;~ 0D4F:0921
cs=0xd4f;eip=0x000922; 	T(MOV(si, 0x0F));	// 33369 mov     si, 0Fh ;~ 0D4F:0922
loc_1c3f5:
	// 5485 
cs=0xd4f;eip=0x000925; 	X(PUSH(si));	// 33372 push    si ;~ 0D4F:0925
cs=0xd4f;eip=0x000926; 	X(PUSH(cs));	// 33373 push    cs ;~ 0D4F:0926
cs=0xd4f;eip=0x000927; 	J(CALL(sub_1c3c5,0));	// 33374 call    sub_1C3C5 ;~ 0D4F:0927
cs=0xd4f;eip=0x00092a; 	T(ADD(sp, 2));	// 33375 add     sp, 2 ;~ 0D4F:092A
cs=0xd4f;eip=0x00092d; 	T(DEC(si));	// 33376 dec     si ;~ 0D4F:092D
cs=0xd4f;eip=0x00092e; 	J(JGE(loc_1c3f5));	// 33377 jge     short loc_1C3F5 ;~ 0D4F:092E
loc_1c400:
	// 5486 
cs=0xd4f;eip=0x000930; 	//T(OR(bh, 0));	// 33380 or      bh, 0 ;~ 0D4F:0930
//cs=0xd4f;eip=0x000933; 	X(PUSH(cs));	// 33381 push    cs ;~ 0D4F:0933
//cs=0xd4f;eip=0x000934; 	J(CALL(seg002_914_proc,m2c::kloc_1c400));	// 33382 call    near ptr loc_1C400+1 ;~ 0D4F:0934
R(POPF);
cs=0xd4f;eip=0x000937; 	X(POP(di));	// 33383 pop     di ;~ 0D4F:0937
cs=0xd4f;eip=0x000938; 	X(POP(si));	// 33384 pop     si ;~ 0D4F:0938
cs=0xd4f;eip=0x000939; 	X(POP(ds));	// 33385 pop     ds ;~ 0D4F:0939
cs=0xd4f;eip=0x00093a; 	J(RETF(0));	// 33386 retf ;~ 0D4F:093A

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1c3f5: 	goto loc_1c3f5;
        case m2c::kloc_1c400: 	goto loc_1c400;
        case m2c::kret_d4f_91d: 	goto ret_d4f_91d;
        case m2c::kseg002_914_proc: 	goto seg002_914_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1c40b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1c40b:
    _begin:
#undef arg_0
#define arg_0 6
	// 33394 arg_0           = word ptr  6 ;~ 0D4F:093B
cs=0xd4f;eip=0x00093b; 	X(PUSH(bp));	// 33396 push    bp ;~ 0D4F:093B
cs=0xd4f;eip=0x00093c; 	T(MOV(bp, sp));	// 33397 mov     bp, sp ;~ 0D4F:093C
cs=0xd4f;eip=0x00093e; 	X(PUSH(ds));	// 33398 push    ds ;~ 0D4F:093E
cs=0xd4f;eip=0x00093f; 	X(PUSH(si));	// 33399 push    si ;~ 0D4F:093F
cs=0xd4f;eip=0x000940; 	X(PUSH(di));	// 33400 push    di ;~ 0D4F:0940
cs=0xd4f;eip=0x000941; 	X(PUSHF);	// 33401 pushf ;~ 0D4F:0941
cs=0xd4f;eip=0x000942; 	T(CLI);	// 33402 cli ;~ 0D4F:0942
cs=0xd4f;eip=0x000943; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 33403 mov     bx, [bp+arg_0] ;~ 0D4F:0943
cs=0xd4f;eip=0x000946; 	T(SHL(bx, 1));	// 33404 shl     bx, 1 ;~ 0D4F:0946
cs=0xd4f;eip=0x000948; 	T(CMP(*(dw*)(raddr(cs,bx+0x6A)), 2));	// 33405 cmp     word ptr cs:[bx+6Ah], 2 ;~ 0D4F:0948
cs=0xd4f;eip=0x00094e; 	J(JNZ(loc_1c427));	// 33406 jnz     short loc_1C427 ;~ 0D4F:094E
cs=0xd4f;eip=0x000950; 	X(MOV(*(dw*)(raddr(cs,bx+0x6A)), 1));	// 33407 mov     word ptr cs:[bx+6Ah], 1 ;~ 0D4F:0950
loc_1c427:
	// 5487 
cs=0xd4f;eip=0x000957; 	//T(OR(bh, 0));	// 33411 or      bh, 0 ;~ 0D4F:0957
//cs=0xd4f;eip=0x00095a; 	X(PUSH(cs));	// 33412 push    cs ;~ 0D4F:095A
//cs=0xd4f;eip=0x00095b; 	J(CALL(sub_1c40b,m2c::kloc_1c427));	// 33413 call    near ptr loc_1C427+1 ;~ 0D4F:095B
R(POPF);
cs=0xd4f;eip=0x00095e; 	X(POP(di));	// 33415 pop     di ;~ 0D4F:095E
cs=0xd4f;eip=0x00095f; 	X(POP(si));	// 33416 pop     si ;~ 0D4F:095F
cs=0xd4f;eip=0x000960; 	X(POP(ds));	// 33417 pop     ds ;~ 0D4F:0960
cs=0xd4f;eip=0x000961; 	X(POP(bp));	// 33418 pop     bp ;~ 0D4F:0961
cs=0xd4f;eip=0x000962; 	J(RETF(0));	// 33419 retf ;~ 0D4F:0962

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1c427: 	goto loc_1c427;
        case m2c::ksub_1c40b: 	goto sub_1c40b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_963_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_963_proc:
    _begin:
cs=0xd4f;eip=0x000963; 	X(PUSH(ds));	// 33423 push    ds ;~ 0D4F:0963
cs=0xd4f;eip=0x000964; 	X(PUSH(si));	// 33424 push    si ;~ 0D4F:0964
cs=0xd4f;eip=0x000965; 	X(PUSH(di));	// 33425 push    di ;~ 0D4F:0965
cs=0xd4f;eip=0x000966; 	X(PUSHF);	// 33426 pushf ;~ 0D4F:0966
cs=0xd4f;eip=0x000967; 	T(CLI);	// 33427 cli ;~ 0D4F:0967
cs=0xd4f;eip=0x000968; 	T(MOV(si, 0x0F));	// 33428 mov     si, 0Fh ;~ 0D4F:0968
loc_1c43b:
	// 5488 
cs=0xd4f;eip=0x00096b; 	X(PUSH(si));	// 33431 push    si ;~ 0D4F:096B
cs=0xd4f;eip=0x00096c; 	X(PUSH(cs));	// 33432 push    cs ;~ 0D4F:096C
cs=0xd4f;eip=0x00096d; 	J(CALL(sub_1c40b,0));	// 33433 call    near ptr sub_1C40B ;~ 0D4F:096D
cs=0xd4f;eip=0x000970; 	T(ADD(sp, 2));	// 33435 add     sp, 2 ;~ 0D4F:0970
cs=0xd4f;eip=0x000973; 	T(DEC(si));	// 33436 dec     si ;~ 0D4F:0973
cs=0xd4f;eip=0x000974; 	J(JGE(loc_1c43b));	// 33437 jge     short loc_1C43B ;~ 0D4F:0974
loc_1c446:
	// 5489 
cs=0xd4f;eip=0x000976; 	//T(OR(bh, 0));	// 33440 or      bh, 0 ;~ 0D4F:0976
//cs=0xd4f;eip=0x000979; 	X(PUSH(cs));	// 33441 push    cs ;~ 0D4F:0979
//cs=0xd4f;eip=0x00097a; 	J(CALL(seg002_963_proc,m2c::kloc_1c446));	// 33442 call    near ptr loc_1C446+1 ;~ 0D4F:097A
R(POPF);
cs=0xd4f;eip=0x00097d; 	X(POP(di));	// 33443 pop     di ;~ 0D4F:097D
cs=0xd4f;eip=0x00097e; 	X(POP(si));	// 33444 pop     si ;~ 0D4F:097E
cs=0xd4f;eip=0x00097f; 	X(POP(ds));	// 33445 pop     ds ;~ 0D4F:097F
cs=0xd4f;eip=0x000980; 	J(RETF(0));	// 33446 retf ;~ 0D4F:0980

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1c43b: 	goto loc_1c43b;
        case m2c::kloc_1c446: 	goto loc_1c446;
        case m2c::kseg002_963_proc: 	goto seg002_963_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1c451(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1c451:
    _begin:
#undef arg_2
#define arg_2 6
	// 33455 arg_2           = word ptr  6 ;~ 0D4F:0981
#undef arg_4
#define arg_4 8
	// 33456 arg_4           = word ptr  8 ;~ 0D4F:0981
#undef arg_6
#define arg_6 0x0A
	// 33457 arg_6           = word ptr  0Ah ;~ 0D4F:0981
cs=0xd4f;eip=0x000981; 	X(PUSH(bp));	// 33459 push    bp ;~ 0D4F:0981
cs=0xd4f;eip=0x000982; 	T(MOV(bp, sp));	// 33460 mov     bp, sp ;~ 0D4F:0982
cs=0xd4f;eip=0x000984; 	X(PUSH(ds));	// 33461 push    ds ;~ 0D4F:0984
cs=0xd4f;eip=0x000985; 	X(PUSH(si));	// 33462 push    si ;~ 0D4F:0985
cs=0xd4f;eip=0x000986; 	X(PUSH(di));	// 33463 push    di ;~ 0D4F:0986
cs=0xd4f;eip=0x000987; 	X(PUSHF);	// 33464 pushf ;~ 0D4F:0987
cs=0xd4f;eip=0x000988; 	T(CLI);	// 33465 cli ;~ 0D4F:0988
cs=0xd4f;eip=0x000989; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 33466 mov     bx, [bp+arg_2] ;~ 0D4F:0989
cs=0xd4f;eip=0x00098c; 	T(SHL(bx, 1));	// 33467 shl     bx, 1 ;~ 0D4F:098C
cs=0xd4f;eip=0x00098e; 	T(MOV(ax, *(dw*)(raddr(cs,bx+0x6A))));	// 33468 mov     ax, cs:[bx+6Ah] ;~ 0D4F:098E
cs=0xd4f;eip=0x000993; 	X(PUSH(ax));	// 33469 push    ax ;~ 0D4F:0993
cs=0xd4f;eip=0x000994; 	X(MOV(*(dw*)(raddr(cs,bx+0x6A)), 1));	// 33470 mov     word ptr cs:[bx+6Ah], 1 ;~ 0D4F:0994
cs=0xd4f;eip=0x00099b; 	T(SHL(bx, 1));	// 33471 shl     bx, 1 ;~ 0D4F:099B
cs=0xd4f;eip=0x00099d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 33472 mov     ax, [bp+arg_4] ;~ 0D4F:099D
cs=0xd4f;eip=0x0009a0; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 33473 mov     dx, [bp+arg_6] ;~ 0D4F:09A0
cs=0xd4f;eip=0x0009a3; 	X(MOV(*(dw*)(raddr(cs,bx+0x0D0)), ax));	// 33474 mov     cs:[bx+0D0h], ax ;~ 0D4F:09A3
cs=0xd4f;eip=0x0009a8; 	X(MOV(*(dw*)(raddr(cs,bx+0x0D2)), dx));	// 33475 mov     cs:[bx+0D2h], dx ;~ 0D4F:09A8
cs=0xd4f;eip=0x0009ad; 	X(MOV(*(dw*)(raddr(cs,bx+0x8C)), 0));	// 33476 mov     word ptr cs:[bx+8Ch], 0 ;~ 0D4F:09AD
cs=0xd4f;eip=0x0009b4; 	X(MOV(*(dw*)(raddr(cs,bx+0x8E)), 0));	// 33477 mov     word ptr cs:[bx+8Eh], 0 ;~ 0D4F:09B4
cs=0xd4f;eip=0x0009bb; 	X(PUSH(cs));	// 33478 push    cs ;~ 0D4F:09BB
cs=0xd4f;eip=0x0009bc; 	J(CALL(sub_1c155,0));	// 33479 call    sub_1C155 ;~ 0D4F:09BC
cs=0xd4f;eip=0x0009bf; 	X(POP(ax));	// 33480 pop     ax ;~ 0D4F:09BF
cs=0xd4f;eip=0x0009c0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 33481 mov     bx, [bp+arg_2] ;~ 0D4F:09C0
cs=0xd4f;eip=0x0009c3; 	T(SHL(bx, 1));	// 33482 shl     bx, 1 ;~ 0D4F:09C3
cs=0xd4f;eip=0x0009c5; 	X(MOV(*(dw*)(raddr(cs,bx+0x6A)), ax));	// 33483 mov     cs:[bx+6Ah], ax ;~ 0D4F:09C5
loc_1c49a:
	// 5490 
cs=0xd4f;eip=0x0009ca; 	//T(OR(bh, 0));	// 33486 or      bh, 0 ;~ 0D4F:09CA
	R(return seg002_9cd_proc(0, _state););
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1c49a: 	goto loc_1c49a;
        case m2c::ksub_1c451: 	goto sub_1c451;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_9cd_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_9cd_proc:
    _begin:
//cs=0xd4f;eip=0x0009cd; 	X(PUSH(cs));	// 33489 push    cs ;~ 0D4F:09CD
//cs=0xd4f;eip=0x0009ce; 	J(CALL(sub_1c451,m2c::kloc_1c49a));	// 33490 call    near ptr loc_1C49A+1 ;~ 0D4F:09CE
R(POPF);
cs=0xd4f;eip=0x0009d1; 	X(POP(di));	// 33491 pop     di ;~ 0D4F:09D1
cs=0xd4f;eip=0x0009d2; 	X(POP(si));	// 33492 pop     si ;~ 0D4F:09D2
cs=0xd4f;eip=0x0009d3; 	X(POP(ds));	// 33493 pop     ds ;~ 0D4F:09D3
cs=0xd4f;eip=0x0009d4; 	X(POP(bp));	// 33494 pop     bp ;~ 0D4F:09D4
cs=0xd4f;eip=0x0009d5; 	J(RETF(0));	// 33495 retf ;~ 0D4F:09D5

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kseg002_9cd_proc: 	goto seg002_9cd_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1c4a6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1c4a6:
    _begin:
#undef arg_2
#define arg_2 6
	// 33505 arg_2           = word ptr  6 ;~ 0D4F:09D6
#undef arg_4
#define arg_4 8
	// 33506 arg_4           = word ptr  8 ;~ 0D4F:09D6
#undef arg_6
#define arg_6 0x0A
	// 33507 arg_6           = word ptr  0Ah ;~ 0D4F:09D6
cs=0xd4f;eip=0x0009d6; 	X(PUSH(bp));	// 33509 push    bp ;~ 0D4F:09D6
cs=0xd4f;eip=0x0009d7; 	T(MOV(bp, sp));	// 33510 mov     bp, sp ;~ 0D4F:09D7
cs=0xd4f;eip=0x0009d9; 	X(PUSH(ds));	// 33511 push    ds ;~ 0D4F:09D9
cs=0xd4f;eip=0x0009da; 	X(PUSH(si));	// 33512 push    si ;~ 0D4F:09DA
cs=0xd4f;eip=0x0009db; 	X(PUSH(di));	// 33513 push    di ;~ 0D4F:09DB
cs=0xd4f;eip=0x0009dc; 	X(PUSHF);	// 33514 pushf ;~ 0D4F:09DC
cs=0xd4f;eip=0x0009dd; 	T(CLI);	// 33515 cli ;~ 0D4F:09DD
cs=0xd4f;eip=0x0009de; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 33516 push    [bp+arg_6] ;~ 0D4F:09DE
cs=0xd4f;eip=0x0009e1; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 33517 push    [bp+arg_4] ;~ 0D4F:09E1
cs=0xd4f;eip=0x0009e4; 	X(PUSH(ax));	// 33518 push    ax ;~ 0D4F:09E4
cs=0xd4f;eip=0x0009e5; 	X(PUSH(bp));	// 33519 push    bp ;~ 0D4F:09E5
cs=0xd4f;eip=0x0009e6; 	T(MOV(bp, sp));	// 33520 mov     bp, sp ;~ 0D4F:09E6
cs=0xd4f;eip=0x0009e8; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0x0F));	// 33521 mov     word ptr [bp+2], 0Fh ;~ 0D4F:09E8
cs=0xd4f;eip=0x0009ed; 	X(POP(bp));	// 33522 pop     bp ;~ 0D4F:09ED
cs=0xd4f;eip=0x0009ee; 	X(PUSH(ax));	// 33523 push    ax ;~ 0D4F:09EE
cs=0xd4f;eip=0x0009ef; 	X(PUSH(bp));	// 33524 push    bp ;~ 0D4F:09EF
cs=0xd4f;eip=0x0009f0; 	T(MOV(bp, sp));	// 33525 mov     bp, sp ;~ 0D4F:09F0
cs=0xd4f;eip=0x0009f2; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0x4240));	// 33526 mov     word ptr [bp+2], 4240h ;~ 0D4F:09F2
cs=0xd4f;eip=0x0009f7; 	X(POP(bp));	// 33527 pop     bp ;~ 0D4F:09F7
cs=0xd4f;eip=0x0009f8; 	X(PUSH(cs));	// 33528 push    cs ;~ 0D4F:09F8
cs=0xd4f;eip=0x0009f9; 	J(CALL(sub_1c10a,0));	// 33529 call    near ptr sub_1C10A ;~ 0D4F:09F9
cs=0xd4f;eip=0x0009fc; 	T(ADD(sp, 8));	// 33530 add     sp, 8 ;~ 0D4F:09FC
cs=0xd4f;eip=0x0009ff; 	X(PUSH(dx));	// 33531 push    dx ;~ 0D4F:09FF
cs=0xd4f;eip=0x000a00; 	X(PUSH(ax));	// 33532 push    ax ;~ 0D4F:0A00
cs=0xd4f;eip=0x000a01; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 33533 push    [bp+arg_2] ;~ 0D4F:0A01
cs=0xd4f;eip=0x000a04; 	X(PUSH(cs));	// 33534 push    cs ;~ 0D4F:0A04
cs=0xd4f;eip=0x000a05; 	J(CALL(sub_1c451,0));	// 33535 call    sub_1C451 ;~ 0D4F:0A05
cs=0xd4f;eip=0x000a08; 	T(ADD(sp, 6));	// 33536 add     sp, 6 ;~ 0D4F:0A08
loc_1c4db:
	// 5491 
cs=0xd4f;eip=0x000a0b; 	//T(OR(bh, 0));	// 33539 or      bh, 0 ;~ 0D4F:0A0B
	R(return seg002_a0e_proc(0, _state););
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1c4db: 	goto loc_1c4db;
        case m2c::ksub_1c4a6: 	goto sub_1c4a6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_a0e_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_a0e_proc:
    _begin:
//cs=0xd4f;eip=0x000a0e; 	X(PUSH(cs));	// 33542 push    cs ;~ 0D4F:0A0E
//cs=0xd4f;eip=0x000a0f; 	J(CALL(sub_1c4a6,m2c::kloc_1c4db));	// 33543 call    near ptr loc_1C4DB+1 ;~ 0D4F:0A0F
R(POPF);
cs=0xd4f;eip=0x000a12; 	X(POP(di));	// 33544 pop     di ;~ 0D4F:0A12
cs=0xd4f;eip=0x000a13; 	X(POP(si));	// 33545 pop     si ;~ 0D4F:0A13
cs=0xd4f;eip=0x000a14; 	X(POP(ds));	// 33546 pop     ds ;~ 0D4F:0A14
cs=0xd4f;eip=0x000a15; 	X(POP(bp));	// 33547 pop     bp ;~ 0D4F:0A15
cs=0xd4f;eip=0x000a16; 	J(RETF(0));	// 33548 retf ;~ 0D4F:0A16
ret_d4f_a17:
	// 5492 
cs=0xd4f;eip=0x000a17; 	X(PUSH(bp));	// 33550 push    bp ;~ 0D4F:0A17
cs=0xd4f;eip=0x000a18; 	T(MOV(bp, sp));	// 33551 mov     bp, sp ;~ 0D4F:0A18
cs=0xd4f;eip=0x000a1a; 	X(PUSH(ds));	// 33552 push    ds ;~ 0D4F:0A1A
cs=0xd4f;eip=0x000a1b; 	X(PUSH(si));	// 33553 push    si ;~ 0D4F:0A1B
cs=0xd4f;eip=0x000a1c; 	X(PUSH(di));	// 33554 push    di ;~ 0D4F:0A1C
cs=0xd4f;eip=0x000a1d; 	X(PUSHF);	// 33555 pushf ;~ 0D4F:0A1D
cs=0xd4f;eip=0x000a1e; 	T(CLI);	// 33556 cli ;~ 0D4F:0A1E
cs=0xd4f;eip=0x000a1f; 	T(CMP(*(dw*)(raddr(ss,bp+8)), 0));	// 33557 cmp     word ptr [bp+8], 0 ;~ 0D4F:0A1F
cs=0xd4f;eip=0x000a23; 	J(JNZ(loc_1c4fd));	// 33558 jnz     short loc_1C4FD ;~ 0D4F:0A23
cs=0xd4f;eip=0x000a25; 	T(MOV(ax, 0x0D68D));	// 33559 mov     ax, 0D68Dh ;~ 0D4F:0A25
cs=0xd4f;eip=0x000a28; 	T(MOV(dx, 0));	// 33560 mov     dx, 0 ;~ 0D4F:0A28
cs=0xd4f;eip=0x000a2b; 	J(JMP(loc_1c50b));	// 33561 jmp     short loc_1C50B ;~ 0D4F:0A2B
loc_1c4fd:
	// 5493 
cs=0xd4f;eip=0x000a2d; 	T(MOV(ax, 0x2710));	// 33565 mov     ax, 2710h ;~ 0D4F:0A2D
cs=0xd4f;eip=0x000a30; 	T(MOV(bx, 0x2E9C));	// 33566 mov     bx, 2E9Ch ;~ 0D4F:0A30
cs=0xd4f;eip=0x000a33; 	X(MUL1_2(*(dw*)(raddr(ss,bp+8))));	// 33567 mul     word ptr [bp+8] ;~ 0D4F:0A33
cs=0xd4f;eip=0x000a36; 	T(DIV2(bx));	// 33568 div     bx ;~ 0D4F:0A36
cs=0xd4f;eip=0x000a38; 	T(MOV(dx, 0));	// 33569 mov     dx, 0 ;~ 0D4F:0A38
loc_1c50b:
	// 5494 
cs=0xd4f;eip=0x000a3b; 	X(PUSH(dx));	// 33572 push    dx ;~ 0D4F:0A3B
cs=0xd4f;eip=0x000a3c; 	X(PUSH(ax));	// 33573 push    ax ;~ 0D4F:0A3C
cs=0xd4f;eip=0x000a3d; 	X(PUSH(*(dw*)(raddr(ss,bp+6))));	// 33574 push    word ptr [bp+6] ;~ 0D4F:0A3D
cs=0xd4f;eip=0x000a40; 	X(PUSH(cs));	// 33575 push    cs ;~ 0D4F:0A40
cs=0xd4f;eip=0x000a41; 	J(CALL(sub_1c451,0));	// 33576 call    sub_1C451 ;~ 0D4F:0A41
cs=0xd4f;eip=0x000a44; 	T(ADD(sp, 6));	// 33577 add     sp, 6 ;~ 0D4F:0A44
loc_1c517:
	// 5495 
cs=0xd4f;eip=0x000a47; 	//T(OR(bh, 0));	// 33580 or      bh, 0 ;~ 0D4F:0A47
//cs=0xd4f;eip=0x000a4a; 	X(PUSH(cs));	// 33581 push    cs ;~ 0D4F:0A4A
//cs=0xd4f;eip=0x000a4b; 	J(CALL(seg002_a0e_proc,m2c::kloc_1c517));	// 33582 call    near ptr loc_1C517+1 ;~ 0D4F:0A4B
R(POPF);
cs=0xd4f;eip=0x000a4e; 	X(POP(di));	// 33583 pop     di ;~ 0D4F:0A4E
cs=0xd4f;eip=0x000a4f; 	X(POP(si));	// 33584 pop     si ;~ 0D4F:0A4F
cs=0xd4f;eip=0x000a50; 	X(POP(ds));	// 33585 pop     ds ;~ 0D4F:0A50
cs=0xd4f;eip=0x000a51; 	X(POP(bp));	// 33587 pop     bp ;~ 0D4F:0A51
cs=0xd4f;eip=0x000a52; 	J(RETF(0));	// 33588 retf ;~ 0D4F:0A52
ret_d4f_a53:
	// 5496 
cs=0xd4f;eip=0x000a53; 	X(PUSH(ds));	// 33590 push    ds ;~ 0D4F:0A53
cs=0xd4f;eip=0x000a54; 	X(PUSH(si));	// 33591 push    si ;~ 0D4F:0A54
cs=0xd4f;eip=0x000a55; 	X(PUSH(di));	// 33592 push    di ;~ 0D4F:0A55
cs=0xd4f;eip=0x000a56; 	X(PUSHF);	// 33593 pushf ;~ 0D4F:0A56
cs=0xd4f;eip=0x000a57; 	T(CLI);	// 33594 cli ;~ 0D4F:0A57
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000a58; 	T(MOV(ax, *(dw*)(((db*)&word_1bbf2))));	// 33595 mov     ax, cs:word_1BBF2 ;~ 0D4F:0A58
loc_1c52c:
	// 5497 
cs=0xd4f;eip=0x000a5c; 	//T(OR(bh, 0));	// 33598 or      bh, 0 ;~ 0D4F:0A5C
//cs=0xd4f;eip=0x000a5f; 	X(PUSH(cs));	// 33599 push    cs ;~ 0D4F:0A5F
//cs=0xd4f;eip=0x000a60; 	J(CALL(seg002_a0e_proc,m2c::kloc_1c52c));	// 33600 call    near ptr loc_1C52C+1 ;~ 0D4F:0A60
R(POPF);
cs=0xd4f;eip=0x000a63; 	X(POP(di));	// 33601 pop     di ;~ 0D4F:0A63
cs=0xd4f;eip=0x000a64; 	X(POP(si));	// 33602 pop     si ;~ 0D4F:0A64
cs=0xd4f;eip=0x000a65; 	X(POP(ds));	// 33603 pop     ds ;~ 0D4F:0A65
cs=0xd4f;eip=0x000a66; 	J(RETF(0));	// 33604 retf ;~ 0D4F:0A66

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1c4fd: 	goto loc_1c4fd;
        case m2c::kloc_1c50b: 	goto loc_1c50b;
        case m2c::kloc_1c517: 	goto loc_1c517;
        case m2c::kloc_1c52c: 	goto loc_1c52c;
        case m2c::kret_d4f_a17: 	goto ret_d4f_a17;
        case m2c::kret_d4f_a53: 	goto ret_d4f_a53;
        case m2c::kseg002_a0e_proc: 	goto seg002_a0e_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1c537(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1c537:
    _begin:
#undef arg_2
#define arg_2 6
	// 33612 arg_2           = dword ptr  6 ;~ 0D4F:0A67
cs=0xd4f;eip=0x000a67; 	X(PUSH(bp));	// 33614 push    bp ;~ 0D4F:0A67
cs=0xd4f;eip=0x000a68; 	T(MOV(bp, sp));	// 33615 mov     bp, sp ;~ 0D4F:0A68
cs=0xd4f;eip=0x000a6a; 	X(PUSH(ds));	// 33616 push    ds ;~ 0D4F:0A6A
cs=0xd4f;eip=0x000a6b; 	X(PUSH(si));	// 33617 push    si ;~ 0D4F:0A6B
cs=0xd4f;eip=0x000a6c; 	X(PUSH(di));	// 33618 push    di ;~ 0D4F:0A6C
cs=0xd4f;eip=0x000a6d; 	X(PUSHF);	// 33619 pushf ;~ 0D4F:0A6D
cs=0xd4f;eip=0x000a6e; 	T(CLI);	// 33620 cli ;~ 0D4F:0A6E
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000a6f; 	X(MOV(*(dw*)(((db*)&word_1bc78)), 0));	// 33621 mov     cs:word_1BC78, 0 ;~ 0D4F:0A6F
loc_1c546:
	// 5498 
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000a76; 	T(MOV(si, *(dw*)(((db*)&word_1bc78))));	// 33624 mov     si, cs:word_1BC78 ;~ 0D4F:0A76
cs=0xd4f;eip=0x000a7b; 	T(SHL(si, 1));	// 33625 shl     si, 1 ;~ 0D4F:0A7B
cs=0xd4f;eip=0x000a7d; 	T(SHL(si, 1));	// 33626 shl     si, 1 ;~ 0D4F:0A7D
cs=0xd4f;eip=0x000a7f; 	T(MOV(ax, *(dw*)(raddr(cs,si+0x124))));	// 33627 mov     ax, cs:[si+124h] ;~ 0D4F:0A7F
cs=0xd4f;eip=0x000a84; 	T(OR(ax, *(dw*)(raddr(cs,si+0x126))));	// 33628 or      ax, cs:[si+126h] ;~ 0D4F:0A84
cs=0xd4f;eip=0x000a89; 	J(JZ(loc_1c56d));	// 33629 jz      short loc_1C56D ;~ 0D4F:0A89
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000a8b; 	X(INC(*(dw*)(((db*)&word_1bc78))));	// 33630 inc     cs:word_1BC78 ;~ 0D4F:0A8B
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000a90; 	T(CMP(*(dw*)(((db*)&word_1bc78)), 0x10));	// 33631 cmp     cs:word_1BC78, 10h ;~ 0D4F:0A90
cs=0xd4f;eip=0x000a96; 	J(JNZ(loc_1c546));	// 33632 jnz     short loc_1C546 ;~ 0D4F:0A96
cs=0xd4f;eip=0x000a98; 	T(MOV(ax, 0x0FFFF));	// 33633 mov     ax, 0FFFFh ;~ 0D4F:0A98
cs=0xd4f;eip=0x000a9b; 	J(JMP(loc_1c5b5));	// 33634 jmp     short loc_1C5B5 ;~ 0D4F:0A9B
loc_1c56d:
	// 5499 
cs=0xd4f;eip=0x000a9d; 	T(LES(di, *(dd*)(raddr(ss,bp+arg_2))));	// 33638 les     di, [bp+arg_2] ;~ 0D4F:0A9D
cs=0xd4f;eip=0x000aa0; 	T(MOV(ax, 0x0FFFF));	// 33640 mov     ax, 0FFFFh ;~ 0D4F:0AA0
cs=0xd4f;eip=0x000aa3; 	T(CMP(*(dw*)(raddr(es,di+2)), 0x6F43));	// 33641 cmp     word ptr es:[di+2], 6F43h ;~ 0D4F:0AA3
cs=0xd4f;eip=0x000aa9; 	J(JNZ(loc_1c5b5));	// 33642 jnz     short loc_1C5B5 ;~ 0D4F:0AA9
cs=0xd4f;eip=0x000aab; 	T(CMP(*(dw*)(raddr(es,di+4)), 0x7970));	// 33643 cmp     word ptr es:[di+4], 7970h ;~ 0D4F:0AAB
cs=0xd4f;eip=0x000ab1; 	J(JNZ(loc_1c5b5));	// 33644 jnz     short loc_1C5B5 ;~ 0D4F:0AB1
cs=0xd4f;eip=0x000ab3; 	T(ADD(di, *(dw*)(raddr(es,di))));	// 33645 add     di, es:[di] ;~ 0D4F:0AB3
cs=0xd4f;eip=0x000ab6; 	X(MOV(*(dw*)(raddr(cs,si+0x124)), di));	// 33646 mov     cs:[si+124h], di ;~ 0D4F:0AB6
cs=0xd4f;eip=0x000abb; 	X(MOV(*(dw*)(raddr(cs,si+0x126)), es));	// 33647 mov     word ptr cs:[si+126h], es ;~ 0D4F:0ABB
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000ac0; 	X(PUSH(*(dw*)(((db*)&word_1bc78))));	// 33648 push    cs:word_1BC78 ;~ 0D4F:0AC0
cs=0xd4f;eip=0x000ac5; 	X(PUSH(cs));	// 33649 push    cs ;~ 0D4F:0AC5
cs=0xd4f;eip=0x000ac6; 	J(CALL(sub_1c5ef,0));	// 33650 call    near ptr sub_1C5EF ;~ 0D4F:0AC6
cs=0xd4f;eip=0x000ac9; 	T(ADD(sp, 2));	// 33651 add     sp, 2 ;~ 0D4F:0AC9
cs=0xd4f;eip=0x000acc; 	T(MOV(es, dx));	// 33652 mov     es, dx ;~ 0D4F:0ACC
cs=0xd4f;eip=0x000ace; 	T(MOV(di, ax));	// 33653 mov     di, ax ;~ 0D4F:0ACE
cs=0xd4f;eip=0x000ad0; 	T(OR(dx, ax));	// 33654 or      dx, ax ;~ 0D4F:0AD0
cs=0xd4f;eip=0x000ad2; 	T(MOV(ax, 0x0FFFF));	// 33655 mov     ax, 0FFFFh ;~ 0D4F:0AD2
cs=0xd4f;eip=0x000ad5; 	J(JZ(loc_1c5b5));	// 33656 jz      short loc_1C5B5 ;~ 0D4F:0AD5
cs=0xd4f;eip=0x000ad7; 	T(MOV(dx, *(dw*)(raddr(es,di))));	// 33657 mov     dx, es:[di] ;~ 0D4F:0AD7
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000ada; 	T(CMP(dx, *(dw*)(((db*)&word_1be88))));	// 33658 cmp     dx, cs:word_1BE88 ;~ 0D4F:0ADA
cs=0xd4f;eip=0x000adf; 	J(JA(loc_1c5b5));	// 33659 ja      short loc_1C5B5 ;~ 0D4F:0ADF
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000ae1; 	T(MOV(ax, *(dw*)(((db*)&word_1bc78))));	// 33660 mov     ax, cs:word_1BC78 ;~ 0D4F:0AE1
loc_1c5b5:
	// 5500 
cs=0xd4f;eip=0x000ae5; 	//T(OR(bh, 0));	// 33664 or      bh, 0 ;~ 0D4F:0AE5
	R(return seg002_ae8_proc(0, _state););
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1c546: 	goto loc_1c546;
        case m2c::kloc_1c56d: 	goto loc_1c56d;
        case m2c::kloc_1c5b5: 	goto loc_1c5b5;
        case m2c::ksub_1c537: 	goto sub_1c537;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_ae8_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_ae8_proc:
    _begin:
//cs=0xd4f;eip=0x000ae8; 	X(PUSH(cs));	// 33667 push    cs ;~ 0D4F:0AE8
//cs=0xd4f;eip=0x000ae9; 	J(CALL(sub_1c537,m2c::kloc_1c5b5));	// 33668 call    near ptr loc_1C5B5+1 ;~ 0D4F:0AE9
R(POPF);
cs=0xd4f;eip=0x000aec; 	X(POP(di));	// 33669 pop     di ;~ 0D4F:0AEC
cs=0xd4f;eip=0x000aed; 	X(POP(si));	// 33670 pop     si ;~ 0D4F:0AED
cs=0xd4f;eip=0x000aee; 	X(POP(ds));	// 33671 pop     ds ;~ 0D4F:0AEE
cs=0xd4f;eip=0x000aef; 	X(POP(bp));	// 33672 pop     bp ;~ 0D4F:0AEF
cs=0xd4f;eip=0x000af0; 	J(RETF(0));	// 33673 retf ;~ 0D4F:0AF0
ret_d4f_af1:
	// 5501 
cs=0xd4f;eip=0x000af1; 	X(PUSH(bp));	// 33675 push    bp ;~ 0D4F:0AF1
cs=0xd4f;eip=0x000af2; 	T(MOV(bp, sp));	// 33676 mov     bp, sp ;~ 0D4F:0AF2
cs=0xd4f;eip=0x000af4; 	X(PUSH(ds));	// 33677 push    ds ;~ 0D4F:0AF4
cs=0xd4f;eip=0x000af5; 	X(PUSH(si));	// 33678 push    si ;~ 0D4F:0AF5
cs=0xd4f;eip=0x000af6; 	X(PUSH(di));	// 33679 push    di ;~ 0D4F:0AF6
cs=0xd4f;eip=0x000af7; 	X(PUSHF);	// 33680 pushf ;~ 0D4F:0AF7
cs=0xd4f;eip=0x000af8; 	T(CLI);	// 33681 cli ;~ 0D4F:0AF8
cs=0xd4f;eip=0x000af9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 33682 mov     bx, [bp+6] ;~ 0D4F:0AF9
cs=0xd4f;eip=0x000afc; 	T(CMP(bx, 0x10));	// 33683 cmp     bx, 10h ;~ 0D4F:0AFC
cs=0xd4f;eip=0x000aff; 	J(JNC(loc_1c5e3));	// 33684 jnb     short loc_1C5E3 ;~ 0D4F:0AFF
cs=0xd4f;eip=0x000b01; 	T(SHL(bx, 1));	// 33685 shl     bx, 1 ;~ 0D4F:0B01
cs=0xd4f;eip=0x000b03; 	T(SHL(bx, 1));	// 33686 shl     bx, 1 ;~ 0D4F:0B03
cs=0xd4f;eip=0x000b05; 	X(MOV(*(dw*)(raddr(cs,bx+0x124)), 0));	// 33687 mov     word ptr cs:[bx+124h], 0 ;~ 0D4F:0B05
cs=0xd4f;eip=0x000b0c; 	X(MOV(*(dw*)(raddr(cs,bx+0x126)), 0));	// 33688 mov     word ptr cs:[bx+126h], 0 ;~ 0D4F:0B0C
loc_1c5e3:
	// 5502 
cs=0xd4f;eip=0x000b13; 	//T(OR(bh, 0));	// 33692 or      bh, 0 ;~ 0D4F:0B13
//cs=0xd4f;eip=0x000b16; 	X(PUSH(cs));	// 33693 push    cs ;~ 0D4F:0B16
//cs=0xd4f;eip=0x000b17; 	J(CALL(seg002_ae8_proc,m2c::kloc_1c5e3));	// 33694 call    near ptr loc_1C5E3+1 ;~ 0D4F:0B17
R(POPF);
cs=0xd4f;eip=0x000b1a; 	X(POP(di));	// 33695 pop     di ;~ 0D4F:0B1A
cs=0xd4f;eip=0x000b1b; 	X(POP(si));	// 33696 pop     si ;~ 0D4F:0B1B
cs=0xd4f;eip=0x000b1c; 	X(POP(ds));	// 33697 pop     ds ;~ 0D4F:0B1C
cs=0xd4f;eip=0x000b1d; 	X(POP(bp));	// 33698 pop     bp ;~ 0D4F:0B1D
cs=0xd4f;eip=0x000b1e; 	J(RETF(0));	// 33699 retf ;~ 0D4F:0B1E

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1c5e3: 	goto loc_1c5e3;
        case m2c::kret_d4f_af1: 	goto ret_d4f_af1;
        case m2c::kseg002_ae8_proc: 	goto seg002_ae8_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1c5ef(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1c5ef:
    _begin:
#undef arg_0
#define arg_0 6
	// 33708 arg_0           = word ptr  6 ;~ 0D4F:0B1F
cs=0xd4f;eip=0x000b1f; 	X(PUSH(bp));	// 33710 push    bp ;~ 0D4F:0B1F
cs=0xd4f;eip=0x000b20; 	T(MOV(bp, sp));	// 33711 mov     bp, sp ;~ 0D4F:0B20
cs=0xd4f;eip=0x000b22; 	X(PUSH(ax));	// 33712 push    ax ;~ 0D4F:0B22
cs=0xd4f;eip=0x000b23; 	X(PUSH(bp));	// 33713 push    bp ;~ 0D4F:0B23
cs=0xd4f;eip=0x000b24; 	T(MOV(bp, sp));	// 33714 mov     bp, sp ;~ 0D4F:0B24
cs=0xd4f;eip=0x000b26; 	X(MOV(*(dw*)(raddr(ss,bp+2)), seg_offset(seg002)));	// 33715 mov     word ptr [bp+2], seg seg002 ;~ 0D4F:0B26
cs=0xd4f;eip=0x000b2b; 	X(POP(bp));	// 33716 pop     bp ;~ 0D4F:0B2B
cs=0xd4f;eip=0x000b2c; 	X(PUSH(ax));	// 33717 push    ax ;~ 0D4F:0B2C
cs=0xd4f;eip=0x000b2d; 	X(PUSH(bp));	// 33718 push    bp ;~ 0D4F:0B2D
cs=0xd4f;eip=0x000b2e; 	T(MOV(bp, sp));	// 33719 mov     bp, sp ;~ 0D4F:0B2E
cs=0xd4f;eip=0x000b30; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0x0A53));	// 33720 mov     word ptr [bp+2], 0A53h ;~ 0D4F:0B30
cs=0xd4f;eip=0x000b35; 	X(POP(bp));	// 33721 pop     bp ;~ 0D4F:0B35
cs=0xd4f;eip=0x000b36; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 33722 push    [bp+arg_0] ;~ 0D4F:0B36
cs=0xd4f;eip=0x000b39; 	T(MOV(ax, 0x64));	// 33723 mov     ax, 64h ; 'd' ;~ 0D4F:0B39
cs=0xd4f;eip=0x000b3c; 	X(PUSH(cs));	// 33724 push    cs ;~ 0D4F:0B3C
cs=0xd4f;eip=0x000b3d; 	J(CALL(sub_1bec2,0));	// 33725 call    near ptr sub_1BEC2 ;~ 0D4F:0B3D
cs=0xd4f;eip=0x000b40; 	T(ADD(sp, 6));	// 33726 add     sp, 6 ;~ 0D4F:0B40
cs=0xd4f;eip=0x000b43; 	X(POP(bp));	// 33727 pop     bp ;~ 0D4F:0B43
cs=0xd4f;eip=0x000b44; 	J(RETF(0));	// 33728 retf ;~ 0D4F:0B44

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_1c5ef: 	goto sub_1c5ef;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1c615(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1c615:
    _begin:
cs=0xd4f;eip=0x000b45; 	T(MOV(ax, 0x65));	// 33736 mov     ax, 65h ; 'e' ;~ 0D4F:0B45
cs=0xd4f;eip=0x000b48; 	J(return sub_1bec2(0, _state););	// 33737 jmp     near ptr sub_1BEC2 ;~ 0D4F:0B48

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_1c615: 	goto sub_1c615;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1c61b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1c61b:
    _begin:
#undef arg_2
#define arg_2 6
	// 33747 arg_2           = word ptr  6 ;~ 0D4F:0B4B
#undef arg_4
#define arg_4 8
	// 33748 arg_4           = word ptr  8 ;~ 0D4F:0B4B
#undef arg_6
#define arg_6 0x0A
	// 33749 arg_6           = word ptr  0Ah ;~ 0D4F:0B4B
#undef arg_8
#define arg_8 0x0C
	// 33750 arg_8           = word ptr  0Ch ;~ 0D4F:0B4B
#undef arg_a
#define arg_a 0x0E
	// 33751 arg_A           = word ptr  0Eh ;~ 0D4F:0B4B
cs=0xd4f;eip=0x000b4b; 	X(PUSH(bp));	// 33753 push    bp ;~ 0D4F:0B4B
cs=0xd4f;eip=0x000b4c; 	T(MOV(bp, sp));	// 33754 mov     bp, sp ;~ 0D4F:0B4C
cs=0xd4f;eip=0x000b4e; 	X(PUSH(ds));	// 33755 push    ds ;~ 0D4F:0B4E
cs=0xd4f;eip=0x000b4f; 	X(PUSH(si));	// 33756 push    si ;~ 0D4F:0B4F
cs=0xd4f;eip=0x000b50; 	X(PUSH(di));	// 33757 push    di ;~ 0D4F:0B50
cs=0xd4f;eip=0x000b51; 	X(PUSHF);	// 33758 pushf ;~ 0D4F:0B51
cs=0xd4f;eip=0x000b52; 	T(CLI);	// 33759 cli ;~ 0D4F:0B52
cs=0xd4f;eip=0x000b53; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0x10));	// 33760 cmp     [bp+arg_2], 10h ;~ 0D4F:0B53
cs=0xd4f;eip=0x000b57; 	J(JC(loc_1c62c));	// 33761 jb      short loc_1C62C ;~ 0D4F:0B57
cs=0xd4f;eip=0x000b59; 	J(JMP(loc_1c6c4));	// 33762 jmp     loc_1C6C4 ;~ 0D4F:0B59
loc_1c62c:
	// 5503 
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000b5c; 	X(MOV(*(dw*)(((db*)&word_1bc7e)), 0x0FFFF));	// 33766 mov     cs:word_1BC7E, 0FFFFh ;~ 0D4F:0B5C
cs=0xd4f;eip=0x000b63; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 33767 push    [bp+arg_2] ;~ 0D4F:0B63
cs=0xd4f;eip=0x000b66; 	X(PUSH(cs));	// 33768 push    cs ;~ 0D4F:0B66
cs=0xd4f;eip=0x000b67; 	J(CALL(sub_1c5ef,0));	// 33769 call    near ptr sub_1C5EF ;~ 0D4F:0B67
cs=0xd4f;eip=0x000b6a; 	T(ADD(sp, 2));	// 33770 add     sp, 2 ;~ 0D4F:0B6A
cs=0xd4f;eip=0x000b6d; 	T(MOV(es, dx));	// 33771 mov     es, dx ;~ 0D4F:0B6D
cs=0xd4f;eip=0x000b6f; 	T(MOV(di, ax));	// 33772 mov     di, ax ;~ 0D4F:0B6F
cs=0xd4f;eip=0x000b71; 	T(MOV(si, *(dw*)(raddr(es,di+0x14))));	// 33773 mov     si, es:[di+14h] ;~ 0D4F:0B71
cs=0xd4f;eip=0x000b75; 	T(CMP(si, 0x0FFFF));	// 33774 cmp     si, 0FFFFh ;~ 0D4F:0B75
cs=0xd4f;eip=0x000b78; 	J(JZ(loc_1c68b));	// 33775 jz      short loc_1C68B ;~ 0D4F:0B78
cs=0xd4f;eip=0x000b7a; 	T(ADD(si, 5));	// 33776 add     si, 5 ;~ 0D4F:0B7A
cs=0xd4f;eip=0x000b7d; 	T(MOV(ax, 0x67));	// 33777 mov     ax, 67h ; 'g' ;~ 0D4F:0B7D
cs=0xd4f;eip=0x000b80; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 33778 mov     bx, [bp+arg_2] ;~ 0D4F:0B80
cs=0xd4f;eip=0x000b83; 	X(PUSH(cs));	// 33779 push    cs ;~ 0D4F:0B83
cs=0xd4f;eip=0x000b84; 	J(CALL(sub_1be8a,0));	// 33780 call    near ptr sub_1BE8A ;~ 0D4F:0B84
cs=0xd4f;eip=0x000b87; 	T(MOV(bx, ax));	// 33781 mov     bx, ax ;~ 0D4F:0B87
cs=0xd4f;eip=0x000b89; 	T(OR(bx, dx));	// 33782 or      bx, dx ;~ 0D4F:0B89
cs=0xd4f;eip=0x000b8b; 	J(JZ(loc_1c68b));	// 33783 jz      short loc_1C68B ;~ 0D4F:0B8B
cs=0xd4f;eip=0x000b8d; 	T(MOV(es, dx));	// 33784 mov     es, dx ;~ 0D4F:0B8D
cs=0xd4f;eip=0x000b8f; 	T(MOV(bx, ax));	// 33785 mov     bx, ax ;~ 0D4F:0B8F
cs=0xd4f;eip=0x000b91; 	X(PUSH(es));	// 33786 push    es ;~ 0D4F:0B91
cs=0xd4f;eip=0x000b92; 	X(PUSH(bx));	// 33787 push    bx ;~ 0D4F:0B92
cs=0xd4f;eip=0x000b93; 	X(PUSH(cs));	// 33788 push    cs ;~ 0D4F:0B93
cs=0xd4f;eip=0x000b94; 	J(CALL(sub_1c293,0));	// 33789 call    sub_1C293 ;~ 0D4F:0B94
cs=0xd4f;eip=0x000b97; 	T(ADD(sp, 4));	// 33790 add     sp, 4 ;~ 0D4F:0B97
cs=0xd4f;eip=0x000b9a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 33791 mov     bx, [bp+arg_2] ;~ 0D4F:0B9A
cs=0xd4f;eip=0x000b9d; 	T(SHL(bx, 1));	// 33792 shl     bx, 1 ;~ 0D4F:0B9D
cs=0xd4f;eip=0x000b9f; 	X(MOV(*(dw*)(raddr(cs,bx+0x164)), ax));	// 33793 mov     cs:[bx+164h], ax ;~ 0D4F:0B9F
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000ba4; 	X(MOV(*(dw*)(((db*)&word_1bc7e)), ax));	// 33794 mov     cs:word_1BC7E, ax ;~ 0D4F:0BA4
cs=0xd4f;eip=0x000ba8; 	X(PUSH(ax));	// 33795 push    ax ;~ 0D4F:0BA8
cs=0xd4f;eip=0x000ba9; 	X(PUSH(bp));	// 33796 push    bp ;~ 0D4F:0BA9
cs=0xd4f;eip=0x000baa; 	T(MOV(bp, sp));	// 33797 mov     bp, sp ;~ 0D4F:0BAA
cs=0xd4f;eip=0x000bac; 	X(MOV(*(dw*)(raddr(ss,bp+2)), 0));	// 33798 mov     word ptr [bp+2], 0 ;~ 0D4F:0BAC
cs=0xd4f;eip=0x000bb1; 	X(POP(bp));	// 33799 pop     bp ;~ 0D4F:0BB1
cs=0xd4f;eip=0x000bb2; 	X(PUSH(si));	// 33800 push    si ;~ 0D4F:0BB2
cs=0xd4f;eip=0x000bb3; 	X(PUSH(ax));	// 33801 push    ax ;~ 0D4F:0BB3
cs=0xd4f;eip=0x000bb4; 	X(PUSH(cs));	// 33802 push    cs ;~ 0D4F:0BB4
cs=0xd4f;eip=0x000bb5; 	J(CALL(sub_1c4a6,0));	// 33803 call    sub_1C4A6 ;~ 0D4F:0BB5
cs=0xd4f;eip=0x000bb8; 	T(ADD(sp, 6));	// 33804 add     sp, 6 ;~ 0D4F:0BB8
loc_1c68b:
	// 5504 
cs=0xd4f;eip=0x000bbb; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 33808 push    [bp+arg_A] ;~ 0D4F:0BBB
cs=0xd4f;eip=0x000bbe; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 33809 push    [bp+arg_8] ;~ 0D4F:0BBE
cs=0xd4f;eip=0x000bc1; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 33810 push    [bp+arg_6] ;~ 0D4F:0BC1
cs=0xd4f;eip=0x000bc4; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 33811 push    [bp+arg_4] ;~ 0D4F:0BC4
cs=0xd4f;eip=0x000bc7; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 33812 push    [bp+arg_2] ;~ 0D4F:0BC7
cs=0xd4f;eip=0x000bca; 	T(MOV(ax, 0x66));	// 33813 mov     ax, 66h ; 'f' ;~ 0D4F:0BCA
cs=0xd4f;eip=0x000bcd; 	X(PUSH(cs));	// 33814 push    cs ;~ 0D4F:0BCD
cs=0xd4f;eip=0x000bce; 	J(CALL(sub_1bec2,0));	// 33815 call    near ptr sub_1BEC2 ;~ 0D4F:0BCE
cs=0xd4f;eip=0x000bd1; 	T(ADD(sp, 0x0A));	// 33816 add     sp, 0Ah ;~ 0D4F:0BD1
cs=0xd4f;eip=0x000bd4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 33817 mov     bx, [bp+arg_2] ;~ 0D4F:0BD4
cs=0xd4f;eip=0x000bd7; 	T(SHL(bx, 1));	// 33818 shl     bx, 1 ;~ 0D4F:0BD7
cs=0xd4f;eip=0x000bd9; 	X(MOV(*(dw*)(raddr(cs,bx+0x184)), 1));	// 33819 mov     word ptr cs:[bx+184h], 1 ;~ 0D4F:0BD9
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000be0; 	T(CMP(*(dw*)(((db*)&word_1bc7e)), 0x0FFFF));	// 33820 cmp     cs:word_1BC7E, 0FFFFh ;~ 0D4F:0BE0
cs=0xd4f;eip=0x000be6; 	J(JZ(loc_1c6c4));	// 33821 jz      short loc_1C6C4 ;~ 0D4F:0BE6
	cs=seg_offset(seg002);
cs=0xd4f;eip=0x000be8; 	X(PUSH(*(dw*)(((db*)&word_1bc7e))));	// 33822 push    cs:word_1BC7E ;~ 0D4F:0BE8
cs=0xd4f;eip=0x000bed; 	X(PUSH(cs));	// 33823 push    cs ;~ 0D4F:0BED
cs=0xd4f;eip=0x000bee; 	J(CALL(sub_1c3c5,0));	// 33824 call    sub_1C3C5 ;~ 0D4F:0BEE
cs=0xd4f;eip=0x000bf1; 	T(ADD(sp, 2));	// 33825 add     sp, 2 ;~ 0D4F:0BF1
loc_1c6c4:
	// 5505 
cs=0xd4f;eip=0x000bf4; 	//T(OR(bh, 0));	// 33829 or      bh, 0 ;~ 0D4F:0BF4
	R(return seg002_bf7_proc(0, _state););
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1c62c: 	goto loc_1c62c;
        case m2c::kloc_1c68b: 	goto loc_1c68b;
        case m2c::kloc_1c6c4: 	goto loc_1c6c4;
        case m2c::ksub_1c61b: 	goto sub_1c61b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_bf7_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_bf7_proc:
    _begin:
//cs=0xd4f;eip=0x000bf7; 	X(PUSH(cs));	// 33832 push    cs ;~ 0D4F:0BF7
//cs=0xd4f;eip=0x000bf8; 	J(CALL(sub_1c61b,m2c::kloc_1c6c4));	// 33833 call    near ptr loc_1C6C4+1 ;~ 0D4F:0BF8
R(POPF);
cs=0xd4f;eip=0x000bfb; 	X(POP(di));	// 33834 pop     di ;~ 0D4F:0BFB
cs=0xd4f;eip=0x000bfc; 	X(POP(si));	// 33835 pop     si ;~ 0D4F:0BFC
cs=0xd4f;eip=0x000bfd; 	X(POP(ds));	// 33836 pop     ds ;~ 0D4F:0BFD
cs=0xd4f;eip=0x000bfe; 	X(POP(bp));	// 33837 pop     bp ;~ 0D4F:0BFE
cs=0xd4f;eip=0x000bff; 	J(RETF(0));	// 33838 retf ;~ 0D4F:0BFF

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kseg002_bf7_proc: 	goto seg002_bf7_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1c6d0(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1c6d0:
    _begin:
cs=0xd4f;eip=0x000c00; 	T(MOV(bx, sp));	// 33844 mov     bx, sp ;~ 0D4F:0C00
cs=0xd4f;eip=0x000c02; 	T(MOV(bx, *(dw*)(raddr(ss,bx+4))));	// 33845 mov     bx, ss:[bx+4] ;~ 0D4F:0C02
cs=0xd4f;eip=0x000c06; 	T(CMP(bx, 0x10));	// 33846 cmp     bx, 10h ;~ 0D4F:0C06
cs=0xd4f;eip=0x000c09; 	J(JNC(locret_1c702));	// 33847 jnb     short locret_1C702 ;~ 0D4F:0C09
cs=0xd4f;eip=0x000c0b; 	T(SHL(bx, 1));	// 33848 shl     bx, 1 ;~ 0D4F:0C0B
cs=0xd4f;eip=0x000c0d; 	T(MOV(dx, 0));	// 33849 mov     dx, 0 ;~ 0D4F:0C0D
cs=0xd4f;eip=0x000c10; 	X(XCHG(dx, *(dw*)(raddr(cs,bx+0x184))));	// 33850 xchg    dx, cs:[bx+184h] ;~ 0D4F:0C10
cs=0xd4f;eip=0x000c15; 	T(CMP(dx, 0));	// 33851 cmp     dx, 0 ;~ 0D4F:0C15
cs=0xd4f;eip=0x000c18; 	J(JZ(locret_1c702));	// 33852 jz      short locret_1C702 ;~ 0D4F:0C18
cs=0xd4f;eip=0x000c1a; 	T(MOV(dx, *(dw*)(raddr(cs,bx+0x164))));	// 33853 mov     dx, cs:[bx+164h] ;~ 0D4F:0C1A
cs=0xd4f;eip=0x000c1f; 	T(CMP(dx, 0x0FFFF));	// 33854 cmp     dx, 0FFFFh ;~ 0D4F:0C1F
cs=0xd4f;eip=0x000c22; 	J(JZ(loc_1c6fc));	// 33855 jz      short loc_1C6FC ;~ 0D4F:0C22
cs=0xd4f;eip=0x000c24; 	X(PUSH(dx));	// 33856 push    dx ;~ 0D4F:0C24
cs=0xd4f;eip=0x000c25; 	X(PUSH(cs));	// 33857 push    cs ;~ 0D4F:0C25
cs=0xd4f;eip=0x000c26; 	J(CALL(sub_1c35e,0));	// 33858 call    sub_1C35E ;~ 0D4F:0C26
cs=0xd4f;eip=0x000c29; 	T(ADD(sp, 2));	// 33859 add     sp, 2 ;~ 0D4F:0C29
loc_1c6fc:
	// 5506 
cs=0xd4f;eip=0x000c2c; 	T(MOV(ax, 0x68));	// 33862 mov     ax, 68h ; 'h' ;~ 0D4F:0C2C
cs=0xd4f;eip=0x000c2f; 	J(return sub_1bec2(0, _state););	// 33863 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C2F
locret_1c702:
	// 5507 
cs=0xd4f;eip=0x000c32; 	J(RETF(0));	// 33868 retf ;~ 0D4F:0C32

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1c6fc: 	goto loc_1c6fc;
        case m2c::klocret_1c702: 	goto locret_1c702;
        case m2c::ksub_1c6d0: 	goto sub_1c6d0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_c33_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_c33_proc:
    _begin:
cs=0xd4f;eip=0x000c33; 	T(MOV(ax, 0x78));	// 33872 mov     ax, 78h ; 'x' ;~ 0D4F:0C33
cs=0xd4f;eip=0x000c36; 	J(return sub_1bec2(0, _state););	// 33873 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C36
ret_d4f_c39:
	// 5508 
cs=0xd4f;eip=0x000c39; 	T(MOV(ax, 0x79));	// 33875 mov     ax, 79h ; 'y' ;~ 0D4F:0C39
cs=0xd4f;eip=0x000c3c; 	J(return sub_1bec2(0, _state););	// 33876 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C3C
ret_d4f_c3f:
	// 5509 
cs=0xd4f;eip=0x000c3f; 	T(MOV(ax, 0x86));	// 33878 mov     ax, 86h ; '†' ;~ 0D4F:0C3F
cs=0xd4f;eip=0x000c42; 	J(return sub_1bec2(0, _state););	// 33879 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C42
ret_d4f_c45:
	// 5510 
cs=0xd4f;eip=0x000c45; 	T(MOV(ax, 0x7A));	// 33881 mov     ax, 7Ah ; 'z' ;~ 0D4F:0C45
cs=0xd4f;eip=0x000c48; 	J(return sub_1bec2(0, _state););	// 33882 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C48
ret_d4f_c4b:
	// 5511 
cs=0xd4f;eip=0x000c4b; 	T(MOV(ax, 0x7B));	// 33884 mov     ax, 7Bh ; '{' ;~ 0D4F:0C4B
cs=0xd4f;eip=0x000c4e; 	J(return sub_1bec2(0, _state););	// 33885 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C4E
ret_d4f_c51:
	// 5512 
cs=0xd4f;eip=0x000c51; 	T(MOV(ax, 0x85));	// 33887 mov     ax, 85h ; '…' ;~ 0D4F:0C51
cs=0xd4f;eip=0x000c54; 	J(return sub_1bec2(0, _state););	// 33888 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C54
ret_d4f_c57:
	// 5513 
cs=0xd4f;eip=0x000c57; 	T(MOV(ax, 0x7C));	// 33890 mov     ax, 7Ch ; '|' ;~ 0D4F:0C57
cs=0xd4f;eip=0x000c5a; 	J(return sub_1bec2(0, _state););	// 33891 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C5A
ret_d4f_c5d:
	// 5514 
cs=0xd4f;eip=0x000c5d; 	T(MOV(ax, 0x7D));	// 33893 mov     ax, 7Dh ; '}' ;~ 0D4F:0C5D
cs=0xd4f;eip=0x000c60; 	J(return sub_1bec2(0, _state););	// 33894 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C60
ret_d4f_c63:
	// 5515 
cs=0xd4f;eip=0x000c63; 	T(MOV(ax, 0x7E));	// 33896 mov     ax, 7Eh ; '~' ;~ 0D4F:0C63
cs=0xd4f;eip=0x000c66; 	J(return sub_1bec2(0, _state););	// 33897 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C66
ret_d4f_c69:
	// 5516 
cs=0xd4f;eip=0x000c69; 	T(MOV(ax, 0x7F));	// 33899 mov     ax, 7Fh ;~ 0D4F:0C69
cs=0xd4f;eip=0x000c6c; 	J(return sub_1bec2(0, _state););	// 33900 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C6C
ret_d4f_c6f:
	// 5517 
cs=0xd4f;eip=0x000c6f; 	T(MOV(ax, 0x80));	// 33902 mov     ax, 80h ; '€' ;~ 0D4F:0C6F
cs=0xd4f;eip=0x000c72; 	J(return sub_1bec2(0, _state););	// 33903 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C72
ret_d4f_c75:
	// 5518 
cs=0xd4f;eip=0x000c75; 	T(MOV(ax, 0x81));	// 33905 mov     ax, 81h ;~ 0D4F:0C75
cs=0xd4f;eip=0x000c78; 	J(return sub_1bec2(0, _state););	// 33906 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C78
ret_d4f_c7b:
	// 5519 
cs=0xd4f;eip=0x000c7b; 	T(MOV(ax, 0x82));	// 33908 mov     ax, 82h ; '‚' ;~ 0D4F:0C7B
cs=0xd4f;eip=0x000c7e; 	J(return sub_1bec2(0, _state););	// 33909 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C7E
ret_d4f_c81:
	// 5520 
cs=0xd4f;eip=0x000c81; 	T(MOV(ax, 0x83));	// 33911 mov     ax, 83h ; 'ƒ' ;~ 0D4F:0C81
cs=0xd4f;eip=0x000c84; 	J(return sub_1bec2(0, _state););	// 33912 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C84
ret_d4f_c87:
	// 5521 
cs=0xd4f;eip=0x000c87; 	T(MOV(ax, 0x84));	// 33914 mov     ax, 84h ; '„' ;~ 0D4F:0C87
cs=0xd4f;eip=0x000c8a; 	J(return sub_1bec2(0, _state););	// 33915 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C8A
ret_d4f_c8d:
	// 5522 
cs=0xd4f;eip=0x000c8d; 	T(MOV(ax, 0x96));	// 33917 mov     ax, 96h ; '–' ;~ 0D4F:0C8D
cs=0xd4f;eip=0x000c90; 	J(return sub_1bec2(0, _state););	// 33918 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C90

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kret_d4f_c39: 	goto ret_d4f_c39;
        case m2c::kret_d4f_c3f: 	goto ret_d4f_c3f;
        case m2c::kret_d4f_c45: 	goto ret_d4f_c45;
        case m2c::kret_d4f_c4b: 	goto ret_d4f_c4b;
        case m2c::kret_d4f_c51: 	goto ret_d4f_c51;
        case m2c::kret_d4f_c57: 	goto ret_d4f_c57;
        case m2c::kret_d4f_c5d: 	goto ret_d4f_c5d;
        case m2c::kret_d4f_c63: 	goto ret_d4f_c63;
        case m2c::kret_d4f_c69: 	goto ret_d4f_c69;
        case m2c::kret_d4f_c6f: 	goto ret_d4f_c6f;
        case m2c::kret_d4f_c75: 	goto ret_d4f_c75;
        case m2c::kret_d4f_c7b: 	goto ret_d4f_c7b;
        case m2c::kret_d4f_c81: 	goto ret_d4f_c81;
        case m2c::kret_d4f_c87: 	goto ret_d4f_c87;
        case m2c::kret_d4f_c8d: 	goto ret_d4f_c8d;
        case m2c::kseg002_c33_proc: 	goto seg002_c33_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1c763(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1c763:
    _begin:
cs=0xd4f;eip=0x000c93; 	T(MOV(ax, 0x97));	// 33924 mov     ax, 97h ; '—' ;~ 0D4F:0C93
cs=0xd4f;eip=0x000c96; 	J(return sub_1bec2(0, _state););	// 33925 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C96

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_1c763: 	goto sub_1c763;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1c769(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1c769:
    _begin:
cs=0xd4f;eip=0x000c99; 	T(MOV(ax, 0x98));	// 33934 mov     ax, 98h ; '˜' ;~ 0D4F:0C99
cs=0xd4f;eip=0x000c9c; 	J(return sub_1bec2(0, _state););	// 33935 jmp     near ptr sub_1BEC2 ;~ 0D4F:0C9C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_1c769: 	goto sub_1c769;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1c76f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1c76f:
    _begin:
cs=0xd4f;eip=0x000c9f; 	T(MOV(ax, 0x99));	// 33943 mov     ax, 99h ; '™' ;~ 0D4F:0C9F
cs=0xd4f;eip=0x000ca2; 	J(return sub_1bec2(0, _state););	// 33944 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CA2

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_1c76f: 	goto sub_1c76f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1c775(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1c775:
    _begin:
cs=0xd4f;eip=0x000ca5; 	T(MOV(ax, 0x9A));	// 33952 mov     ax, 9Ah ; 'š' ;~ 0D4F:0CA5
cs=0xd4f;eip=0x000ca8; 	J(return sub_1bec2(0, _state););	// 33953 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CA8

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_1c775: 	goto sub_1c775;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1c77b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1c77b:
    _begin:
cs=0xd4f;eip=0x000cab; 	T(MOV(ax, 0x9B));	// 33961 mov     ax, 9Bh ; '›' ;~ 0D4F:0CAB
cs=0xd4f;eip=0x000cae; 	J(return sub_1bec2(0, _state););	// 33962 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CAE

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_1c77b: 	goto sub_1c77b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1c781(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1c781:
    _begin:
cs=0xd4f;eip=0x000cb1; 	T(MOV(ax, 0x9C));	// 33970 mov     ax, 9Ch ; 'œ' ;~ 0D4F:0CB1
cs=0xd4f;eip=0x000cb4; 	J(return sub_1bec2(0, _state););	// 33971 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CB4

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_1c781: 	goto sub_1c781;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_cb7_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_cb7_proc:
    _begin:
cs=0xd4f;eip=0x000cb7; 	T(MOV(ax, 0x9D));	// 33975 mov     ax, 9Dh ;~ 0D4F:0CB7
cs=0xd4f;eip=0x000cba; 	J(return sub_1bec2(0, _state););	// 33976 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CBA
ret_d4f_cbd:
	// 5523 
cs=0xd4f;eip=0x000cbd; 	T(MOV(ax, 0x9E));	// 33978 mov     ax, 9Eh ; '' ;~ 0D4F:0CBD
cs=0xd4f;eip=0x000cc0; 	J(return sub_1bec2(0, _state););	// 33979 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CC0
ret_d4f_cc3:
	// 5524 
cs=0xd4f;eip=0x000cc3; 	T(MOV(ax, 0x9F));	// 33981 mov     ax, 9Fh ; 'Ÿ' ;~ 0D4F:0CC3
cs=0xd4f;eip=0x000cc6; 	J(return sub_1bec2(0, _state););	// 33982 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CC6

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kret_d4f_cbd: 	goto ret_d4f_cbd;
        case m2c::kret_d4f_cc3: 	goto ret_d4f_cc3;
        case m2c::kseg002_cb7_proc: 	goto seg002_cb7_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1c799(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1c799:
    _begin:
cs=0xd4f;eip=0x000cc9; 	T(MOV(ax, 0x0AA));	// 33988 mov     ax, 0AAh ; 'ª' ;~ 0D4F:0CC9
cs=0xd4f;eip=0x000ccc; 	J(return sub_1bec2(0, _state););	// 33989 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CCC

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_1c799: 	goto sub_1c799;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1c79f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1c79f:
    _begin:
cs=0xd4f;eip=0x000ccf; 	T(MOV(ax, 0x0AB));	// 33998 mov     ax, 0ABh ; '«' ;~ 0D4F:0CCF
cs=0xd4f;eip=0x000cd2; 	J(return sub_1bec2(0, _state););	// 33999 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CD2

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_1c79f: 	goto sub_1c79f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_cd5_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_cd5_proc:
    _begin:
cs=0xd4f;eip=0x000cd5; 	T(MOV(ax, 0x0AD));	// 34003 mov     ax, 0ADh ; '­' ;~ 0D4F:0CD5
cs=0xd4f;eip=0x000cd8; 	J(return sub_1bec2(0, _state););	// 34004 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CD8

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kseg002_cd5_proc: 	goto seg002_cd5_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1c7ab(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1c7ab:
    _begin:
cs=0xd4f;eip=0x000cdb; 	T(MOV(ax, 0x0AE));	// 34010 mov     ax, 0AEh ; '®' ;~ 0D4F:0CDB
cs=0xd4f;eip=0x000cde; 	J(return sub_1bec2(0, _state););	// 34011 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CDE

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_1c7ab: 	goto sub_1c7ab;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_ce1_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_ce1_proc:
    _begin:
cs=0xd4f;eip=0x000ce1; 	T(MOV(ax, 0x0AF));	// 34015 mov     ax, 0AFh ; '¯' ;~ 0D4F:0CE1
cs=0xd4f;eip=0x000ce4; 	J(return sub_1bec2(0, _state););	// 34016 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CE4
ret_d4f_ce7:
	// 5525 
cs=0xd4f;eip=0x000ce7; 	T(MOV(ax, 0x0B0));	// 34018 mov     ax, 0B0h ; '°' ;~ 0D4F:0CE7
cs=0xd4f;eip=0x000cea; 	J(return sub_1bec2(0, _state););	// 34019 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CEA

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kret_d4f_ce7: 	goto ret_d4f_ce7;
        case m2c::kseg002_ce1_proc: 	goto seg002_ce1_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1c7bd(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1c7bd:
    _begin:
cs=0xd4f;eip=0x000ced; 	T(MOV(ax, 0x0B1));	// 34025 mov     ax, 0B1h ; '±' ;~ 0D4F:0CED
cs=0xd4f;eip=0x000cf0; 	J(return sub_1bec2(0, _state););	// 34026 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CF0

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_1c7bd: 	goto sub_1c7bd;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg002_cf3_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg002_cf3_proc:
    _begin:
cs=0xd4f;eip=0x000cf3; 	T(MOV(ax, 0x0B2));	// 34030 mov     ax, 0B2h ; '²' ;~ 0D4F:0CF3
cs=0xd4f;eip=0x000cf6; 	J(return sub_1bec2(0, _state););	// 34031 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CF6
ret_d4f_cf9:
	// 5526 
cs=0xd4f;eip=0x000cf9; 	T(MOV(ax, 0x0B3));	// 34033 mov     ax, 0B3h ; '³' ;~ 0D4F:0CF9
cs=0xd4f;eip=0x000cfc; 	J(return sub_1bec2(0, _state););	// 34034 jmp     near ptr sub_1BEC2 ;~ 0D4F:0CFC
ret_d4f_cff:
	// 5527 
cs=0xd4f;eip=0x000cff; 	T(MOV(ax, 0x0B4));	// 34036 mov     ax, 0B4h ; '´' ;~ 0D4F:0CFF
cs=0xd4f;eip=0x000d02; 	J(return sub_1bec2(0, _state););	// 34037 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D02
ret_d4f_d05:
	// 5528 
cs=0xd4f;eip=0x000d05; 	T(MOV(ax, 0x0B5));	// 34039 mov     ax, 0B5h ; 'µ' ;~ 0D4F:0D05
cs=0xd4f;eip=0x000d08; 	J(return sub_1bec2(0, _state););	// 34040 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D08
ret_d4f_d0b:
	// 5529 
cs=0xd4f;eip=0x000d0b; 	T(MOV(ax, 0x0B6));	// 34042 mov     ax, 0B6h ; '¶' ;~ 0D4F:0D0B
cs=0xd4f;eip=0x000d0e; 	J(return sub_1bec2(0, _state););	// 34043 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D0E
ret_d4f_d11:
	// 5530 
cs=0xd4f;eip=0x000d11; 	T(MOV(ax, 0x0B7));	// 34045 mov     ax, 0B7h ; '·' ;~ 0D4F:0D11
cs=0xd4f;eip=0x000d14; 	J(return sub_1bec2(0, _state););	// 34046 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D14
ret_d4f_d17:
	// 5531 
cs=0xd4f;eip=0x000d17; 	T(MOV(ax, 0x0B9));	// 34048 mov     ax, 0B9h ; '¹' ;~ 0D4F:0D17
cs=0xd4f;eip=0x000d1a; 	J(return sub_1bec2(0, _state););	// 34049 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D1A
ret_d4f_d1d:
	// 5532 
cs=0xd4f;eip=0x000d1d; 	T(MOV(ax, 0x0BA));	// 34051 mov     ax, 0BAh ; 'º' ;~ 0D4F:0D1D
cs=0xd4f;eip=0x000d20; 	J(return sub_1bec2(0, _state););	// 34052 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D20
ret_d4f_d23:
	// 5533 
cs=0xd4f;eip=0x000d23; 	T(MOV(ax, 0x0BB));	// 34054 mov     ax, 0BBh ; '»' ;~ 0D4F:0D23
cs=0xd4f;eip=0x000d26; 	J(return sub_1bec2(0, _state););	// 34055 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D26
ret_d4f_d29:
	// 5534 
cs=0xd4f;eip=0x000d29; 	T(MOV(ax, 0x0BC));	// 34057 mov     ax, 0BCh ; '¼' ;~ 0D4F:0D29
cs=0xd4f;eip=0x000d2c; 	J(return sub_1bec2(0, _state););	// 34058 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D2C
ret_d4f_d2f:
	// 5535 
cs=0xd4f;eip=0x000d2f; 	T(MOV(ax, 0x0BD));	// 34060 mov     ax, 0BDh ; '½' ;~ 0D4F:0D2F
cs=0xd4f;eip=0x000d32; 	J(return sub_1bec2(0, _state););	// 34061 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D32
ret_d4f_d35:
	// 5536 
cs=0xd4f;eip=0x000d35; 	T(MOV(ax, 0x0BE));	// 34063 mov     ax, 0BEh ; '¾' ;~ 0D4F:0D35
cs=0xd4f;eip=0x000d38; 	J(return sub_1bec2(0, _state););	// 34064 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D38
ret_d4f_d3b:
	// 5537 
cs=0xd4f;eip=0x000d3b; 	T(MOV(ax, 0x0BF));	// 34066 mov     ax, 0BFh ; '¿' ;~ 0D4F:0D3B
cs=0xd4f;eip=0x000d3e; 	J(return sub_1bec2(0, _state););	// 34067 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D3E
ret_d4f_d41:
	// 5538 
cs=0xd4f;eip=0x000d41; 	T(MOV(ax, 0x0C0));	// 34069 mov     ax, 0C0h ; 'À' ;~ 0D4F:0D41
cs=0xd4f;eip=0x000d44; 	J(return sub_1bec2(0, _state););	// 34070 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D44
ret_d4f_d47:
	// 5539 
cs=0xd4f;eip=0x000d47; 	T(MOV(ax, 0x0C1));	// 34072 mov     ax, 0C1h ; 'Á' ;~ 0D4F:0D47
cs=0xd4f;eip=0x000d4a; 	J(return sub_1bec2(0, _state););	// 34073 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D4A
ret_d4f_d4d:
	// 5540 
cs=0xd4f;eip=0x000d4d; 	T(MOV(ax, 0x0C2));	// 34075 mov     ax, 0C2h ; 'Â' ;~ 0D4F:0D4D
cs=0xd4f;eip=0x000d50; 	J(return sub_1bec2(0, _state););	// 34076 jmp     near ptr sub_1BEC2 ;~ 0D4F:0D50

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kret_d4f_cf9: 	goto ret_d4f_cf9;
        case m2c::kret_d4f_cff: 	goto ret_d4f_cff;
        case m2c::kret_d4f_d05: 	goto ret_d4f_d05;
        case m2c::kret_d4f_d0b: 	goto ret_d4f_d0b;
        case m2c::kret_d4f_d11: 	goto ret_d4f_d11;
        case m2c::kret_d4f_d17: 	goto ret_d4f_d17;
        case m2c::kret_d4f_d1d: 	goto ret_d4f_d1d;
        case m2c::kret_d4f_d23: 	goto ret_d4f_d23;
        case m2c::kret_d4f_d29: 	goto ret_d4f_d29;
        case m2c::kret_d4f_d2f: 	goto ret_d4f_d2f;
        case m2c::kret_d4f_d35: 	goto ret_d4f_d35;
        case m2c::kret_d4f_d3b: 	goto ret_d4f_d3b;
        case m2c::kret_d4f_d41: 	goto ret_d4f_d41;
        case m2c::kret_d4f_d47: 	goto ret_d4f_d47;
        case m2c::kret_d4f_d4d: 	goto ret_d4f_d4d;
        case m2c::kseg002_cf3_proc: 	goto seg002_cf3_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

