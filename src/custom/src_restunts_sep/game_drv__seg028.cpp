/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool audiodriver_timer(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    audiodriver_timer:
    _begin:
cs=0x2a05;eip=0x00000c; 	X(PUSH(ds));	// 84272 push    ds ;~ 2A05:000C
cs=0x2a05;eip=0x00000d; 	T(MOV(ax, seg_offset(dseg)));	// 84273 mov     ax, seg dseg ;~ 2A05:000D
cs=0x2a05;eip=0x000010; 	T(MOV(ds, ax));	// 84274 mov     ds, ax ;~ 2A05:0010
cs=0x2a05;eip=0x000012; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 84275 mov     ax, word ptr audiodriverbinary ;~ 2A05:0012
cs=0x2a05;eip=0x000015; 	T(OR(ax, *(dw*)(((db*)&audiodriverbinary)+2)));	// 84276 or      ax, word ptr audiodriverbinary+2 ;~ 2A05:0015
cs=0x2a05;eip=0x000019; 	J(JZ(loc_38688));	// 84277 jz      short loc_38688 ;~ 2A05:0019
cs=0x2a05;eip=0x00001b; 	T(CMP(word_4063a, 0));	// 84278 cmp     word_4063A, 0 ;~ 2A05:001B
cs=0x2a05;eip=0x000020; 	J(JNZ(loc_38688));	// 84279 jnz     short loc_38688 ;~ 2A05:0020
cs=0x2a05;eip=0x000022; 	T(CMP(word_407aa, 0));	// 84280 cmp     word_407AA, 0 ;~ 2A05:0022
cs=0x2a05;eip=0x000027; 	J(JNZ(loc_38688));	// 84281 jnz     short loc_38688 ;~ 2A05:0027
cs=0x2a05;eip=0x000029; 	X(INC(word_407aa));	// 84282 inc     word_407AA ;~ 2A05:0029
cs=0x2a05;eip=0x00002d; 	X(PUSH(cs));	// 84283 push    cs ;~ 2A05:002D
cs=0x2a05;eip=0x00002e; 	J(CALL(sub_39700,0));	// 84284 call    near ptr sub_39700 ;~ 2A05:002E
cs=0x2a05;eip=0x000031; 	T(CMP(byte_40632, 1));	// 84285 cmp     byte_40632, 1 ;~ 2A05:0031
cs=0x2a05;eip=0x000036; 	J(JNZ(loc_3867c));	// 84286 jnz     short loc_3867C ;~ 2A05:0036
cs=0x2a05;eip=0x000038; 	T(CMP(audioflag2, 1));	// 84287 cmp     audioflag2, 1 ;~ 2A05:0038
cs=0x2a05;eip=0x00003d; 	J(JNZ(loc_3867c));	// 84288 jnz     short loc_3867C ;~ 2A05:003D
cs=0x2a05;eip=0x00003f; 	T(CMP(byte_40630, 0));	// 84289 cmp     byte_40630, 0 ;~ 2A05:003F
cs=0x2a05;eip=0x000044; 	J(JNZ(loc_3867c));	// 84290 jnz     short loc_3867C ;~ 2A05:0044
cs=0x2a05;eip=0x000046; 	X(PUSH(cs));	// 84291 push    cs ;~ 2A05:0046
cs=0x2a05;eip=0x000047; 	J(CALL(sub_3868a,0));	// 84292 call    near ptr sub_3868A ;~ 2A05:0047
cs=0x2a05;eip=0x00004a; 	J(JMP(loc_38680));	// 84293 jmp     short loc_38680 ;~ 2A05:004A
loc_3867c:
	// 9604 
cs=0x2a05;eip=0x00004c; 	X(PUSH(cs));	// 84298 push    cs ;~ 2A05:004C
cs=0x2a05;eip=0x00004d; 	J(CALL(sub_3963c,0));	// 84299 call    near ptr sub_3963C ;~ 2A05:004D
loc_38680:
	// 9605 
cs=0x2a05;eip=0x000050; 	X(PUSH(cs));	// 84302 push    cs ;~ 2A05:0050
cs=0x2a05;eip=0x000051; 	J(CALL(sub_386d6,0));	// 84303 call    near ptr sub_386D6 ;~ 2A05:0051
cs=0x2a05;eip=0x000054; 	X(DEC(word_407aa));	// 84304 dec     word_407AA ;~ 2A05:0054
loc_38688:
	// 9606 
cs=0x2a05;eip=0x000058; 	X(POP(ds));	// 84308 pop     ds ;~ 2A05:0058
cs=0x2a05;eip=0x000059; 	J(RETF(0));	// 84309 retf ;~ 2A05:0059

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kaudiodriver_timer: 	goto audiodriver_timer;
        case m2c::kloc_3867c: 	goto loc_3867c;
        case m2c::kloc_38680: 	goto loc_38680;
        case m2c::kloc_38688: 	goto loc_38688;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3868a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3868a:
    _begin:
#undef var_2
#define var_2 -2
	// 84319 var_2           = byte ptr -2 ;~ 2A05:005A
cs=0x2a05;eip=0x00005a; 	X(PUSH(bp));	// 84321 push    bp ;~ 2A05:005A
cs=0x2a05;eip=0x00005b; 	T(MOV(bp, sp));	// 84322 mov     bp, sp ;~ 2A05:005B
cs=0x2a05;eip=0x00005d; 	T(SUB(sp, 2));	// 84323 sub     sp, 2 ;~ 2A05:005D
cs=0x2a05;eip=0x000060; 	X(PUSH(ds));	// 84324 push    ds ;~ 2A05:0060
cs=0x2a05;eip=0x000061; 	T(MOV(ax, seg_offset(dseg)));	// 84325 mov     ax, seg dseg ;~ 2A05:0061
cs=0x2a05;eip=0x000064; 	T(MOV(ds, ax));	// 84326 mov     ds, ax ;~ 2A05:0064
cs=0x2a05;eip=0x000066; 	X(ADD(word_44d48, 0x80));	// 84327 add     word_44D48, 80h ; '€' ;~ 2A05:0066
cs=0x2a05;eip=0x00006c; 	J(JMP(loc_386b6));	// 84328 jmp     short loc_386B6 ;~ 2A05:006C
loc_3869e:
	// 9607 
cs=0x2a05;eip=0x00006e; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 84332 mov     al, [bp+var_2] ;~ 2A05:006E
cs=0x2a05;eip=0x000071; 	T(SUB(ah, ah));	// 84333 sub     ah, ah ;~ 2A05:0071
cs=0x2a05;eip=0x000073; 	X(PUSH(ax));	// 84334 push    ax ;~ 2A05:0073
cs=0x2a05;eip=0x000074; 	X(PUSH(cs));	// 84335 push    cs ;~ 2A05:0074
cs=0x2a05;eip=0x000075; 	J(CALL(sub_38702,0));	// 84336 call    near ptr sub_38702 ;~ 2A05:0075
cs=0x2a05;eip=0x000078; 	T(ADD(sp, 2));	// 84337 add     sp, 2 ;~ 2A05:0078
cs=0x2a05;eip=0x00007b; 	X(INC(*(raddr(ss,bp+var_2))));	// 84338 inc     [bp+var_2] ;~ 2A05:007B
loc_386ae:
	// 9608 
cs=0x2a05;eip=0x00007e; 	T(MOV(al, byte_44290));	// 84341 mov     al, byte_44290 ;~ 2A05:007E
cs=0x2a05;eip=0x000081; 	T(CMP(*(raddr(ss,bp+var_2)), al));	// 84342 cmp     [bp+var_2], al ;~ 2A05:0081
cs=0x2a05;eip=0x000084; 	J(JC(loc_3869e));	// 84343 jb      short loc_3869E ;~ 2A05:0084
loc_386b6:
	// 9609 
cs=0x2a05;eip=0x000086; 	T(MOV(ax, word_454ba));	// 84346 mov     ax, word_454BA ;~ 2A05:0086
cs=0x2a05;eip=0x000089; 	T(CMP(word_44d48, ax));	// 84347 cmp     word_44D48, ax ;~ 2A05:0089
cs=0x2a05;eip=0x00008d; 	J(JC(loc_386d0));	// 84348 jb      short loc_386D0 ;~ 2A05:008D
cs=0x2a05;eip=0x00008f; 	X(PUSH(cs));	// 84349 push    cs ;~ 2A05:008F
cs=0x2a05;eip=0x000090; 	J(CALL(sub_3963c,0));	// 84350 call    near ptr sub_3963C ;~ 2A05:0090
cs=0x2a05;eip=0x000093; 	T(MOV(ax, word_454ba));	// 84351 mov     ax, word_454BA ;~ 2A05:0093
cs=0x2a05;eip=0x000096; 	X(SUB(word_44d48, ax));	// 84352 sub     word_44D48, ax ;~ 2A05:0096
cs=0x2a05;eip=0x00009a; 	X(MOV(*(raddr(ss,bp+var_2)), 0));	// 84353 mov     [bp+var_2], 0 ;~ 2A05:009A
cs=0x2a05;eip=0x00009e; 	J(JMP(loc_386ae));	// 84354 jmp     short loc_386AE ;~ 2A05:009E
loc_386d0:
	// 9610 
cs=0x2a05;eip=0x0000a0; 	X(POP(ds));	// 84358 pop     ds ;~ 2A05:00A0
cs=0x2a05;eip=0x0000a1; 	T(MOV(sp, bp));	// 84359 mov     sp, bp ;~ 2A05:00A1
cs=0x2a05;eip=0x0000a3; 	X(POP(bp));	// 84360 pop     bp ;~ 2A05:00A3
cs=0x2a05;eip=0x0000a4; 	J(RETF(0));	// 84361 retf ;~ 2A05:00A4

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_3869e: 	goto loc_3869e;
        case m2c::kloc_386ae: 	goto loc_386ae;
        case m2c::kloc_386b6: 	goto loc_386b6;
        case m2c::kloc_386d0: 	goto loc_386d0;
        case m2c::ksub_3868a: 	goto sub_3868a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_386d6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_386d6:
    _begin:
#undef var_2
#define var_2 -2
	// 84373 var_2           = byte ptr -2 ;~ 2A05:00A6
cs=0x2a05;eip=0x0000a6; 	X(PUSH(bp));	// 84375 push    bp ;~ 2A05:00A6
cs=0x2a05;eip=0x0000a7; 	T(MOV(bp, sp));	// 84376 mov     bp, sp ;~ 2A05:00A7
cs=0x2a05;eip=0x0000a9; 	T(SUB(sp, 2));	// 84377 sub     sp, 2 ;~ 2A05:00A9
cs=0x2a05;eip=0x0000ac; 	X(PUSH(ds));	// 84378 push    ds ;~ 2A05:00AC
cs=0x2a05;eip=0x0000ad; 	T(MOV(ax, seg_offset(dseg)));	// 84379 mov     ax, seg dseg ;~ 2A05:00AD
cs=0x2a05;eip=0x0000b0; 	T(MOV(ds, ax));	// 84380 mov     ds, ax ;~ 2A05:00B0
cs=0x2a05;eip=0x0000b2; 	X(MOV(*(raddr(ss,bp+var_2)), 0x10));	// 84381 mov     [bp+var_2], 10h ;~ 2A05:00B2
loc_386e6:
	// 9611 
cs=0x2a05;eip=0x0000b6; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 84384 mov     al, [bp+var_2] ;~ 2A05:00B6
cs=0x2a05;eip=0x0000b9; 	T(SUB(ah, ah));	// 84385 sub     ah, ah ;~ 2A05:00B9
cs=0x2a05;eip=0x0000bb; 	X(PUSH(ax));	// 84386 push    ax ;~ 2A05:00BB
cs=0x2a05;eip=0x0000bc; 	X(PUSH(cs));	// 84387 push    cs ;~ 2A05:00BC
cs=0x2a05;eip=0x0000bd; 	J(CALL(sub_38702,0));	// 84388 call    near ptr sub_38702 ;~ 2A05:00BD
cs=0x2a05;eip=0x0000c0; 	T(ADD(sp, 2));	// 84389 add     sp, 2 ;~ 2A05:00C0
cs=0x2a05;eip=0x0000c3; 	X(INC(*(raddr(ss,bp+var_2))));	// 84390 inc     [bp+var_2] ;~ 2A05:00C3
cs=0x2a05;eip=0x0000c6; 	T(CMP(*(raddr(ss,bp+var_2)), 0x17));	// 84391 cmp     [bp+var_2], 17h ;~ 2A05:00C6
cs=0x2a05;eip=0x0000ca; 	J(JC(loc_386e6));	// 84392 jb      short loc_386E6 ;~ 2A05:00CA
cs=0x2a05;eip=0x0000cc; 	X(POP(ds));	// 84393 pop     ds ;~ 2A05:00CC
cs=0x2a05;eip=0x0000cd; 	T(MOV(sp, bp));	// 84394 mov     sp, bp ;~ 2A05:00CD
cs=0x2a05;eip=0x0000cf; 	X(POP(bp));	// 84395 pop     bp ;~ 2A05:00CF
cs=0x2a05;eip=0x0000d0; 	J(RETF(0));	// 84396 retf ;~ 2A05:00D0

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_386e6: 	goto loc_386e6;
        case m2c::ksub_386d6: 	goto sub_386d6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_38702(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_38702:
    _begin:
#undef var_e
#define var_e -0x0E
	// 84409 var_E           = byte ptr -0Eh ;~ 2A05:00D2
#undef var_c
#define var_c -0x0C
	// 84410 var_C           = dword ptr -0Ch ;~ 2A05:00D2
#undef var_8
#define var_8 -8
	// 84411 var_8           = dword ptr -8 ;~ 2A05:00D2
#undef var_4
#define var_4 -4
	// 84412 var_4           = word ptr -4 ;~ 2A05:00D2
#undef var_2
#define var_2 -2
	// 84413 var_2           = byte ptr -2 ;~ 2A05:00D2
#undef arg_0
#define arg_0 6
	// 84414 arg_0           = word ptr  6 ;~ 2A05:00D2
cs=0x2a05;eip=0x0000d2; 	X(PUSH(bp));	// 84416 push    bp ;~ 2A05:00D2
cs=0x2a05;eip=0x0000d3; 	T(MOV(bp, sp));	// 84417 mov     bp, sp ;~ 2A05:00D3
cs=0x2a05;eip=0x0000d5; 	T(SUB(sp, 0x0E));	// 84418 sub     sp, 0Eh ;~ 2A05:00D5
cs=0x2a05;eip=0x0000d8; 	X(PUSH(di));	// 84419 push    di ;~ 2A05:00D8
cs=0x2a05;eip=0x0000d9; 	X(PUSH(si));	// 84420 push    si ;~ 2A05:00D9
cs=0x2a05;eip=0x0000da; 	X(PUSH(ds));	// 84421 push    ds ;~ 2A05:00DA
cs=0x2a05;eip=0x0000db; 	T(MOV(ax, seg_offset(dseg)));	// 84422 mov     ax, seg dseg ;~ 2A05:00DB
cs=0x2a05;eip=0x0000de; 	T(MOV(ds, ax));	// 84423 mov     ds, ax ;~ 2A05:00DE
cs=0x2a05;eip=0x0000e0; 	X(MOV(*(raddr(ss,bp+var_2)), 0));	// 84424 mov     [bp+var_2], 0 ;~ 2A05:00E0
cs=0x2a05;eip=0x0000e4; 	T(MOV(ax, 0x4C));	// 84425 mov     ax, 4Ch ; 'L' ;~ 2A05:00E4
cs=0x2a05;eip=0x0000e7; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 84426 imul    [bp+arg_0] ;~ 2A05:00E7
cs=0x2a05;eip=0x0000ea; 	T(ADD(ax, 0x81FC));	// 84427 add     ax, 81FCh ;~ 2A05:00EA
cs=0x2a05;eip=0x0000ed; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 84428 mov     [bp+var_4], ax ;~ 2A05:00ED
cs=0x2a05;eip=0x0000f0; 	T(MOV(bx, ax));	// 84429 mov     bx, ax ;~ 2A05:00F0
cs=0x2a05;eip=0x0000f2; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x18))));	// 84430 mov     ax, [bx+18h] ;~ 2A05:00F2
cs=0x2a05;eip=0x0000f5; 	T(OR(ax, *(dw*)(raddr(ds,bx+0x1A))));	// 84431 or      ax, [bx+1Ah] ;~ 2A05:00F5
cs=0x2a05;eip=0x0000f8; 	J(JZ(loc_3872d));	// 84432 jz      short loc_3872D ;~ 2A05:00F8
cs=0x2a05;eip=0x0000fa; 	J(JMP(loc_38a98));	// 84433 jmp     loc_38A98 ;~ 2A05:00FA
loc_3872d:
	// 9612 
cs=0x2a05;eip=0x0000fd; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 84437 mov     ax, [bx] ;~ 2A05:00FD
cs=0x2a05;eip=0x0000ff; 	T(OR(ax, *(dw*)(raddr(ds,bx+2))));	// 84438 or      ax, [bx+2] ;~ 2A05:00FF
cs=0x2a05;eip=0x000102; 	J(JNZ(loc_38737));	// 84439 jnz     short loc_38737 ;~ 2A05:0102
cs=0x2a05;eip=0x000104; 	J(JMP(loc_38aa0));	// 84440 jmp     loc_38AA0 ;~ 2A05:0104
loc_38737:
	// 9613 
cs=0x2a05;eip=0x000107; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x18))));	// 84445 mov     ax, [bx+18h] ;~ 2A05:0107
cs=0x2a05;eip=0x00010a; 	T(OR(ax, *(dw*)(raddr(ds,bx+0x1A))));	// 84446 or      ax, [bx+1Ah] ;~ 2A05:010A
cs=0x2a05;eip=0x00010d; 	J(JZ(loc_38742));	// 84447 jz      short loc_38742 ;~ 2A05:010D
cs=0x2a05;eip=0x00010f; 	J(JMP(loc_38a98));	// 84448 jmp     loc_38A98 ;~ 2A05:010F
loc_38742:
	// 9614 
cs=0x2a05;eip=0x000112; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 84452 mov     ax, [bx] ;~ 2A05:0112
cs=0x2a05;eip=0x000114; 	T(OR(ax, *(dw*)(raddr(ds,bx+2))));	// 84453 or      ax, [bx+2] ;~ 2A05:0114
cs=0x2a05;eip=0x000117; 	J(JNZ(loc_3874c));	// 84454 jnz     short loc_3874C ;~ 2A05:0117
cs=0x2a05;eip=0x000119; 	J(JMP(loc_38a98));	// 84455 jmp     loc_38A98 ;~ 2A05:0119
loc_3874c:
	// 9615 
cs=0x2a05;eip=0x00011c; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 84459 push    word ptr [bx+2] ;~ 2A05:011C
cs=0x2a05;eip=0x00011f; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 84460 push    word ptr [bx] ;~ 2A05:011F
cs=0x2a05;eip=0x000121; 	T(MOV(ax, 0x728E));	// 84461 mov     ax, 728Eh ;~ 2A05:0121
cs=0x2a05;eip=0x000124; 	X(PUSH(ax));	// 84462 push    ax ;~ 2A05:0124
cs=0x2a05;eip=0x000125; 	X(PUSH(cs));	// 84463 push    cs ;~ 2A05:0125
cs=0x2a05;eip=0x000126; 	J(CALL(sub_3945a,0));	// 84464 call    near ptr sub_3945A ;~ 2A05:0126
cs=0x2a05;eip=0x000129; 	T(ADD(sp, 6));	// 84465 add     sp, 6 ;~ 2A05:0129
cs=0x2a05;eip=0x00012c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 84466 mov     bx, [bp+var_4] ;~ 2A05:012C
cs=0x2a05;eip=0x00012f; 	T(MOV(al, byte_42a08));	// 84467 mov     al, byte_42A08 ;~ 2A05:012F
cs=0x2a05;eip=0x000132; 	T(SUB(ah, ah));	// 84468 sub     ah, ah ;~ 2A05:0132
cs=0x2a05;eip=0x000134; 	X(ADD(*(dw*)(raddr(ds,bx)), ax));	// 84469 add     [bx], ax ;~ 2A05:0134
cs=0x2a05;eip=0x000136; 	T(CMP(byte_42a02, 0x0D9));	// 84470 cmp     byte_42A02, 0D9h ; 'Ù' ;~ 2A05:0136
cs=0x2a05;eip=0x00013b; 	J(JNC(loc_38770));	// 84471 jnb     short loc_38770 ;~ 2A05:013B
cs=0x2a05;eip=0x00013d; 	J(JMP(loc_38a44));	// 84472 jmp     loc_38A44 ;~ 2A05:013D
loc_38770:
	// 9616 
cs=0x2a05;eip=0x000140; 	T(MOV(al, byte_42a03));	// 84476 mov     al, byte_42A03 ;~ 2A05:0140
cs=0x2a05;eip=0x000143; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 84477 mov     [bp+var_2], al ;~ 2A05:0143
cs=0x2a05;eip=0x000146; 	T(MOV(al, byte_42a02));	// 84478 mov     al, byte_42A02 ;~ 2A05:0146
cs=0x2a05;eip=0x000149; 	T(SUB(ax, 0x0D9));	// 84479 sub     ax, 0D9h ; 'Ù'  ; switch 18 cases ;~ 2A05:0149
cs=0x2a05;eip=0x00014c; 	T(CMP(ax, 0x11));	// 84480 cmp     ax, 11h ;~ 2A05:014C
cs=0x2a05;eip=0x00014f; 	J(JBE(loc_38784));	// 84481 jbe     short loc_38784 ;~ 2A05:014F
cs=0x2a05;eip=0x000151; 	J(JMP(def_38787));	// 84482 jmp     def_38787       ; jumptable 00038787 default case, case 231 ;~ 2A05:0151
loc_38784:
	// 9617 
cs=0x2a05;eip=0x000154; 	T(ADD(ax, ax));	// 84486 add     ax, ax ;~ 2A05:0154
cs=0x2a05;eip=0x000156; 	T(XCHG(ax, bx));	// 84487 xchg    ax, bx ;~ 2A05:0156
	cs=seg_offset(seg028);
cs=0x2a05;eip=0x000157; __disp=*(dw*)(((db*)&jpt_38787)+bx);
	J(return __dispatch_call(__disp, _state););	// 84488 jmp     cs:jpt_38787[bx] ; switch jump ;~ 2A05:0157
loc_3878c:
	// 9618 
cs=0x2a05;eip=0x00015c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 84493 mov     bx, [bp+var_4]  ; jumptable 00038787 case 217 ;~ 2A05:015C
cs=0x2a05;eip=0x00015f; 	T(CMP(*(raddr(ds,bx+4)), 0));	// 84494 cmp     byte ptr [bx+4], 0 ;~ 2A05:015F
cs=0x2a05;eip=0x000163; 	J(JZ(loc_387b2));	// 84495 jz      short loc_387B2 ;~ 2A05:0163
cs=0x2a05;eip=0x000165; 	T(MOV(si, *(dw*)(raddr(ds,bx+4))));	// 84496 mov     si, [bx+4] ;~ 2A05:0165
cs=0x2a05;eip=0x000168; 	T(AND(si, 0x0FF));	// 84497 and     si, 0FFh ;~ 2A05:0168
cs=0x2a05;eip=0x00016c; 	T(SHL(si, 1));	// 84498 shl     si, 1 ;~ 2A05:016C
cs=0x2a05;eip=0x00016e; 	T(SHL(si, 1));	// 84499 shl     si, 1 ;~ 2A05:016E
cs=0x2a05;eip=0x000170; 	T(MOV(ax, *(dw*)(raddr(ds,bx+si+5))));	// 84500 mov     ax, [bx+si+5] ;~ 2A05:0170
cs=0x2a05;eip=0x000173; 	T(MOV(dx, *(dw*)(raddr(ds,bx+si+7))));	// 84501 mov     dx, [bx+si+7] ;~ 2A05:0173
cs=0x2a05;eip=0x000176; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 84502 mov     [bx], ax ;~ 2A05:0176
cs=0x2a05;eip=0x000178; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 84503 mov     [bx+2], dx ;~ 2A05:0178
cs=0x2a05;eip=0x00017b; 	X(DEC(*(raddr(ds,bx+4))));	// 84504 dec     byte ptr [bx+4] ;~ 2A05:017B
cs=0x2a05;eip=0x00017e; 	J(JMP(def_38787));	// 84505 jmp     def_38787       ; jumptable 00038787 default case, case 231 ;~ 2A05:017E
loc_387b2:
	// 9619 
cs=0x2a05;eip=0x000182; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x48))));	// 84510 mov     ax, [bx+48h] ;~ 2A05:0182
cs=0x2a05;eip=0x000185; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x4A))));	// 84511 mov     dx, [bx+4Ah] ;~ 2A05:0185
cs=0x2a05;eip=0x000188; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8))), ax));	// 84512 mov     word ptr [bp+var_8], ax ;~ 2A05:0188
cs=0x2a05;eip=0x00018b; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8+2))), dx));	// 84513 mov     word ptr [bp+var_8+2], dx ;~ 2A05:018B
cs=0x2a05;eip=0x00018e; 	T(SUB(ax, ax));	// 84514 sub     ax, ax ;~ 2A05:018E
cs=0x2a05;eip=0x000190; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 84515 mov     [bx+2], ax ;~ 2A05:0190
cs=0x2a05;eip=0x000193; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 84516 mov     [bx], ax ;~ 2A05:0193
cs=0x2a05;eip=0x000195; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 84517 push    [bp+arg_0] ;~ 2A05:0195
cs=0x2a05;eip=0x000198; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 84518 push    [bp+arg_0] ;~ 2A05:0198
cs=0x2a05;eip=0x00019b; 	X(PUSH(cs));	// 84519 push    cs ;~ 2A05:019B
cs=0x2a05;eip=0x00019c; 	J(CALL(audio_driver_func1e,0));	// 84520 call    near ptr audio_driver_func1E ;~ 2A05:019C
cs=0x2a05;eip=0x00019f; 	T(ADD(sp, 4));	// 84521 add     sp, 4 ;~ 2A05:019F
loc_387d2:
	// 9620 
cs=0x2a05;eip=0x0001a2; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_8)))));	// 84524 mov     ax, word ptr [bp+var_8] ;~ 2A05:01A2
cs=0x2a05;eip=0x0001a5; 	T(OR(ax, *(dw*)((dw*)(raddr(ss,bp+var_8+2)))));	// 84525 or      ax, word ptr [bp+var_8+2] ;~ 2A05:01A5
cs=0x2a05;eip=0x0001a8; 	J(JNZ(loc_387dd));	// 84526 jnz     short loc_387DD ;~ 2A05:01A8
cs=0x2a05;eip=0x0001aa; 	J(JMP(def_38787));	// 84527 jmp     def_38787       ; jumptable 00038787 default case, case 231 ;~ 2A05:01AA
loc_387dd:
	// 9621 
cs=0x2a05;eip=0x0001ad; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 84531 push    [bp+arg_0] ;~ 2A05:01AD
cs=0x2a05;eip=0x0001b0; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_8))));	// 84532 call    [bp+var_8] ;~ 2A05:01B0
cs=0x2a05;eip=0x0001b3; 	T(ADD(sp, 2));	// 84533 add     sp, 2 ;~ 2A05:01B3
cs=0x2a05;eip=0x0001b6; 	J(JMP(def_38787));	// 84534 jmp     def_38787       ; jumptable 00038787 default case, case 231 ;~ 2A05:01B6
loc_387ea:
	// 9622 
cs=0x2a05;eip=0x0001ba; 	T(MOV(ax, 0x717E));	// 84540 mov     ax, 717Eh       ; jumptable 00038787 case 232 ;~ 2A05:01BA
cs=0x2a05;eip=0x0001bd; 	X(PUSH(ax));	// 84541 push    ax ;~ 2A05:01BD
cs=0x2a05;eip=0x0001be; 	T(MOV(al, byte_42a08));	// 84542 mov     al, byte_42A08 ;~ 2A05:01BE
cs=0x2a05;eip=0x0001c1; 	T(SUB(ah, ah));	// 84543 sub     ah, ah ;~ 2A05:01C1
cs=0x2a05;eip=0x0001c3; 	T(SUB(ax, 4));	// 84544 sub     ax, 4 ;~ 2A05:01C3
cs=0x2a05;eip=0x0001c6; 	X(PUSH(ax));	// 84545 push    ax ;~ 2A05:01C6
cs=0x2a05;eip=0x0001c7; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 84546 mov     ax, word ptr audiodriverbinary ;~ 2A05:01C7
cs=0x2a05;eip=0x0001ca; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 84547 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:01CA
cs=0x2a05;eip=0x0001ce; 	T(ADD(ax, 0x39));	// 84548 add     ax, 39h ; '9' ;~ 2A05:01CE
cs=0x2a05;eip=0x0001d1; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c+2))), dx));	// 84549 mov     word ptr [bp+var_C+2], dx ;~ 2A05:01D1
cs=0x2a05;eip=0x0001d4; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c))), ax));	// 84550 mov     word ptr [bp+var_C], ax ;~ 2A05:01D4
cs=0x2a05;eip=0x0001d7; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_c))));	// 84551 call    [bp+var_C] ;~ 2A05:01D7
cs=0x2a05;eip=0x0001da; 	J(JMP(loc_38a64));	// 84552 jmp     loc_38A64 ;~ 2A05:01DA
loc_3880e:
	// 9623 
cs=0x2a05;eip=0x0001de; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 84558 mov     bx, [bp+arg_0]  ; jumptable 00038787 case 234 ;~ 2A05:01DE
cs=0x2a05;eip=0x0001e1; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 84559 mov     al, [bp+var_2] ;~ 2A05:01E1
cs=0x2a05;eip=0x0001e4; 	X(MOV(*(raddr(ds,bx-0x6A6A)), al));	// 84560 mov     [bx-6A6Ah], al ;~ 2A05:01E4
cs=0x2a05;eip=0x0001e8; 	J(JMP(def_38787));	// 84561 jmp     def_38787       ; jumptable 00038787 default case, case 231 ;~ 2A05:01E8
loc_3881c:
	// 9624 
cs=0x2a05;eip=0x0001ec; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 84567 mov     bx, [bp+var_4]  ; jumptable 00038787 case 230 ;~ 2A05:01EC
cs=0x2a05;eip=0x0001ef; 	X(INC(*(raddr(ds,bx+4))));	// 84568 inc     byte ptr [bx+4] ;~ 2A05:01EF
cs=0x2a05;eip=0x0001f2; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 84569 mov     ax, [bx] ;~ 2A05:01F2
cs=0x2a05;eip=0x0001f4; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 84570 mov     dx, [bx+2] ;~ 2A05:01F4
cs=0x2a05;eip=0x0001f7; 	T(MOV(si, *(dw*)(raddr(ds,bx+4))));	// 84571 mov     si, [bx+4] ;~ 2A05:01F7
cs=0x2a05;eip=0x0001fa; 	T(AND(si, 0x0FF));	// 84572 and     si, 0FFh ;~ 2A05:01FA
cs=0x2a05;eip=0x0001fe; 	T(SHL(si, 1));	// 84573 shl     si, 1 ;~ 2A05:01FE
cs=0x2a05;eip=0x000200; 	T(SHL(si, 1));	// 84574 shl     si, 1 ;~ 2A05:0200
cs=0x2a05;eip=0x000202; 	X(MOV(*(dw*)(raddr(ds,bx+si+5)), ax));	// 84575 mov     [bx+si+5], ax ;~ 2A05:0202
cs=0x2a05;eip=0x000205; 	X(MOV(*(dw*)(raddr(ds,bx+si+7)), dx));	// 84576 mov     [bx+si+7], dx ;~ 2A05:0205
cs=0x2a05;eip=0x000208; 	T(MOV(ax, word_42a04));	// 84577 mov     ax, word_42A04 ;~ 2A05:0208
cs=0x2a05;eip=0x00020b; 	T(MOV(dx, word_42a06));	// 84578 mov     dx, word_42A06 ;~ 2A05:020B
cs=0x2a05;eip=0x00020f; 	T(ADD(ax, 4));	// 84579 add     ax, 4 ;~ 2A05:020F
cs=0x2a05;eip=0x000212; 	J(JMP(loc_38899));	// 84580 jmp     short loc_38899 ;~ 2A05:0212
loc_38844:
	// 9625 
cs=0x2a05;eip=0x000214; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 84585 mov     bx, [bp+var_4]  ; jumptable 00038787 case 218 ;~ 2A05:0214
cs=0x2a05;eip=0x000217; 	T(SUB(ax, ax));	// 84586 sub     ax, ax ;~ 2A05:0217
cs=0x2a05;eip=0x000219; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 84587 mov     [bx+2], ax ;~ 2A05:0219
cs=0x2a05;eip=0x00021c; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 84588 mov     [bx], ax ;~ 2A05:021C
cs=0x2a05;eip=0x00021e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x48))));	// 84589 mov     ax, [bx+48h] ;~ 2A05:021E
cs=0x2a05;eip=0x000221; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x4A))));	// 84590 mov     dx, [bx+4Ah] ;~ 2A05:0221
cs=0x2a05;eip=0x000224; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8))), ax));	// 84591 mov     word ptr [bp+var_8], ax ;~ 2A05:0224
cs=0x2a05;eip=0x000227; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8+2))), dx));	// 84592 mov     word ptr [bp+var_8+2], dx ;~ 2A05:0227
cs=0x2a05;eip=0x00022a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 84593 push    [bp+arg_0] ;~ 2A05:022A
cs=0x2a05;eip=0x00022d; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 84594 push    [bp+arg_0] ;~ 2A05:022D
cs=0x2a05;eip=0x000230; 	X(PUSH(cs));	// 84595 push    cs ;~ 2A05:0230
cs=0x2a05;eip=0x000231; 	J(CALL(audio_driver_func1e,0));	// 84596 call    near ptr audio_driver_func1E ;~ 2A05:0231
cs=0x2a05;eip=0x000234; 	T(ADD(sp, 4));	// 84597 add     sp, 4 ;~ 2A05:0234
cs=0x2a05;eip=0x000237; 	T(SUB(ax, ax));	// 84598 sub     ax, ax ;~ 2A05:0237
cs=0x2a05;eip=0x000239; 	X(PUSH(ax));	// 84599 push    ax ;~ 2A05:0239
cs=0x2a05;eip=0x00023a; 	T(MOV(al, byte_45950));	// 84600 mov     al, byte_45950 ;~ 2A05:023A
cs=0x2a05;eip=0x00023d; 	T(SUB(ah, ah));	// 84601 sub     ah, ah ;~ 2A05:023D
cs=0x2a05;eip=0x00023f; 	X(PUSH(ax));	// 84602 push    ax ;~ 2A05:023F
cs=0x2a05;eip=0x000240; 	T(SUB(ax, ax));	// 84603 sub     ax, ax ;~ 2A05:0240
cs=0x2a05;eip=0x000242; 	X(PUSH(ax));	// 84604 push    ax ;~ 2A05:0242
cs=0x2a05;eip=0x000243; 	X(PUSH(ax));	// 84605 push    ax ;~ 2A05:0243
cs=0x2a05;eip=0x000244; 	X(PUSH(ax));	// 84606 push    ax ;~ 2A05:0244
cs=0x2a05;eip=0x000245; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 84607 push    [bp+arg_0] ;~ 2A05:0245
cs=0x2a05;eip=0x000248; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 84608 push    [bp+arg_0] ;~ 2A05:0248
cs=0x2a05;eip=0x00024b; 	J(CALLF(audio_init_chunk,0));	// 84609 call    audio_init_chunk ;~ 2A05:024B
cs=0x2a05;eip=0x000250; 	T(ADD(sp, 0x0E));	// 84610 add     sp, 0Eh ;~ 2A05:0250
cs=0x2a05;eip=0x000253; 	J(JMP(loc_387d2));	// 84611 jmp     loc_387D2 ;~ 2A05:0253
loc_38886:
	// 9626 
cs=0x2a05;eip=0x000256; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 84616 mov     bx, [bp+var_4]  ; jumptable 00038787 case 219 ;~ 2A05:0256
cs=0x2a05;eip=0x000259; 	X(MOV(*(raddr(ds,bx+4)), 0));	// 84617 mov     byte ptr [bx+4], 0 ;~ 2A05:0259
cs=0x2a05;eip=0x00025d; 	X(MOV(*(raddr(ds,bx+0x32)), 0));	// 84618 mov     byte ptr [bx+32h], 0 ;~ 2A05:025D
cs=0x2a05;eip=0x000261; 	T(MOV(si, bx));	// 84619 mov     si, bx ;~ 2A05:0261
cs=0x2a05;eip=0x000263; 	T(MOV(ax, *(dw*)(raddr(ds,si+5))));	// 84620 mov     ax, [si+5] ;~ 2A05:0263
cs=0x2a05;eip=0x000266; 	T(MOV(dx, *(dw*)(raddr(ds,si+7))));	// 84621 mov     dx, [si+7] ;~ 2A05:0266
loc_38899:
	// 9627 
cs=0x2a05;eip=0x000269; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 84624 mov     [bx], ax ;~ 2A05:0269
cs=0x2a05;eip=0x00026b; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 84625 mov     [bx+2], dx ;~ 2A05:026B
cs=0x2a05;eip=0x00026e; 	J(JMP(def_38787));	// 84626 jmp     def_38787       ; jumptable 00038787 default case, case 231 ;~ 2A05:026E
loc_388a2:
	// 9628 
cs=0x2a05;eip=0x000272; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 84632 push    [bp+var_4]      ; jumptable 00038787 case 220 ;~ 2A05:0272
cs=0x2a05;eip=0x000275; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 84633 mov     al, [bp+var_2] ;~ 2A05:0275
cs=0x2a05;eip=0x000278; 	T(SUB(ah, ah));	// 84634 sub     ah, ah ;~ 2A05:0278
cs=0x2a05;eip=0x00027a; 	X(PUSH(ax));	// 84635 push    ax ;~ 2A05:027A
cs=0x2a05;eip=0x00027b; 	X(PUSH(cs));	// 84636 push    cs ;~ 2A05:027B
cs=0x2a05;eip=0x00027c; 	J(CALL(sub_38ac4,0));	// 84637 call    near ptr sub_38AC4 ;~ 2A05:027C
cs=0x2a05;eip=0x00027f; 	T(ADD(sp, 4));	// 84638 add     sp, 4 ;~ 2A05:027F
cs=0x2a05;eip=0x000282; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 84639 mov     bx, [bp+var_4] ;~ 2A05:0282
cs=0x2a05;eip=0x000285; 	X(MOV(*(dw*)(raddr(ds,bx+0x1E)), ax));	// 84640 mov     [bx+1Eh], ax ;~ 2A05:0285
cs=0x2a05;eip=0x000288; 	X(MOV(*(dw*)(raddr(ds,bx+0x20)), dx));	// 84641 mov     [bx+20h], dx ;~ 2A05:0288
cs=0x2a05;eip=0x00028b; 	T(CMP(byte_40634, 0));	// 84642 cmp     byte_40634, 0 ;~ 2A05:028B
cs=0x2a05;eip=0x000290; 	J(JNZ(loc_388c5));	// 84643 jnz     short loc_388C5 ;~ 2A05:0290
cs=0x2a05;eip=0x000292; 	J(JMP(def_38787));	// 84644 jmp     def_38787       ; jumptable 00038787 default case, case 231 ;~ 2A05:0292
loc_388c5:
	// 9629 
cs=0x2a05;eip=0x000295; 	T(LES(bx, *(dw*)(raddr(ds,bx+0x1E))));	// 84648 les     bx, [bx+1Eh] ;~ 2A05:0295
cs=0x2a05;eip=0x000298; 	T(MOV(al, *(raddr(es,bx+0x43))));	// 84649 mov     al, es:[bx+43h] ;~ 2A05:0298
cs=0x2a05;eip=0x00029c; 	X(MOV(*(raddr(ss,bp+var_e)), al));	// 84650 mov     [bp+var_E], al ;~ 2A05:029C
cs=0x2a05;eip=0x00029f; 	T(CMP(al, 0x10));	// 84651 cmp     al, 10h ;~ 2A05:029F
cs=0x2a05;eip=0x0002a1; 	J(JNC(loc_388d8));	// 84652 jnb     short loc_388D8 ;~ 2A05:02A1
cs=0x2a05;eip=0x0002a3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 84653 mov     bx, [bp+var_4] ;~ 2A05:02A3
cs=0x2a05;eip=0x0002a6; 	J(JMP(loc_388e2));	// 84654 jmp     short loc_388E2 ;~ 2A05:02A6
loc_388d8:
	// 9630 
cs=0x2a05;eip=0x0002a8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 84658 mov     bx, [bp+var_4] ;~ 2A05:02A8
cs=0x2a05;eip=0x0002ab; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_0))));	// 84659 mov     al, byte ptr [bp+arg_0] ;~ 2A05:02AB
cs=0x2a05;eip=0x0002ae; 	T(AND(al, 0x0F));	// 84660 and     al, 0Fh ;~ 2A05:02AE
cs=0x2a05;eip=0x0002b0; 	T(INC(al));	// 84661 inc     al ;~ 2A05:02B0
loc_388e2:
	// 9631 
cs=0x2a05;eip=0x0002b2; 	X(MOV(*(raddr(ds,bx+0x47)), al));	// 84664 mov     [bx+47h], al ;~ 2A05:02B2
cs=0x2a05;eip=0x0002b5; 	T(MOV(al, *(raddr(ds,bx+0x28))));	// 84665 mov     al, [bx+28h] ;~ 2A05:02B5
cs=0x2a05;eip=0x0002b8; 	T(SUB(ah, ah));	// 84666 sub     ah, ah ;~ 2A05:02B8
cs=0x2a05;eip=0x0002ba; 	X(PUSH(ax));	// 84667 push    ax ;~ 2A05:02BA
cs=0x2a05;eip=0x0002bb; 	T(SUB(ax, ax));	// 84668 sub     ax, ax ;~ 2A05:02BB
cs=0x2a05;eip=0x0002bd; 	X(PUSH(ax));	// 84669 push    ax ;~ 2A05:02BD
cs=0x2a05;eip=0x0002be; 	T(MOV(al, *(raddr(ds,bx+0x47))));	// 84670 mov     al, [bx+47h] ;~ 2A05:02BE
cs=0x2a05;eip=0x0002c1; 	T(SUB(ah, ah));	// 84671 sub     ah, ah ;~ 2A05:02C1
cs=0x2a05;eip=0x0002c3; 	X(PUSH(ax));	// 84672 push    ax ;~ 2A05:02C3
cs=0x2a05;eip=0x0002c4; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 84673 mov     ax, word ptr audiodriverbinary ;~ 2A05:02C4
cs=0x2a05;eip=0x0002c7; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 84674 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:02C7
cs=0x2a05;eip=0x0002cb; 	T(ADD(ax, 0x12));	// 84675 add     ax, 12h ;~ 2A05:02CB
cs=0x2a05;eip=0x0002ce; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c+2))), dx));	// 84676 mov     word ptr [bp+var_C+2], dx ;~ 2A05:02CE
cs=0x2a05;eip=0x0002d1; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c))), ax));	// 84677 mov     word ptr [bp+var_C], ax ;~ 2A05:02D1
cs=0x2a05;eip=0x0002d4; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_c))));	// 84678 call    [bp+var_C] ;~ 2A05:02D4
cs=0x2a05;eip=0x0002d7; 	T(ADD(sp, 6));	// 84679 add     sp, 6 ;~ 2A05:02D7
cs=0x2a05;eip=0x0002da; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 84680 mov     bx, [bp+var_4] ;~ 2A05:02DA
cs=0x2a05;eip=0x0002dd; 	X(PUSH(*(dw*)(raddr(ds,bx+0x20))));	// 84681 push    word ptr [bx+20h] ;~ 2A05:02DD
cs=0x2a05;eip=0x0002e0; 	X(PUSH(*(dw*)(raddr(ds,bx+0x1E))));	// 84682 push    word ptr [bx+1Eh] ;~ 2A05:02E0
cs=0x2a05;eip=0x0002e3; 	X(PUSH(bx));	// 84683 push    bx ;~ 2A05:02E3
cs=0x2a05;eip=0x0002e4; 	T(SUB(ax, ax));	// 84684 sub     ax, ax ;~ 2A05:02E4
cs=0x2a05;eip=0x0002e6; 	X(PUSH(ax));	// 84685 push    ax ;~ 2A05:02E6
cs=0x2a05;eip=0x0002e7; 	T(MOV(al, *(raddr(ds,bx+0x47))));	// 84686 mov     al, [bx+47h] ;~ 2A05:02E7
cs=0x2a05;eip=0x0002ea; 	T(SUB(ah, ah));	// 84687 sub     ah, ah ;~ 2A05:02EA
cs=0x2a05;eip=0x0002ec; 	X(PUSH(ax));	// 84688 push    ax ;~ 2A05:02EC
cs=0x2a05;eip=0x0002ed; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 84689 mov     ax, word ptr audiodriverbinary ;~ 2A05:02ED
cs=0x2a05;eip=0x0002f0; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 84690 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:02F0
cs=0x2a05;eip=0x0002f4; 	T(ADD(ax, 0x21));	// 84691 add     ax, 21h ; '!' ;~ 2A05:02F4
cs=0x2a05;eip=0x0002f7; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c+2))), dx));	// 84692 mov     word ptr [bp+var_C+2], dx ;~ 2A05:02F7
cs=0x2a05;eip=0x0002fa; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c))), ax));	// 84693 mov     word ptr [bp+var_C], ax ;~ 2A05:02FA
cs=0x2a05;eip=0x0002fd; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_c))));	// 84694 call    [bp+var_C] ;~ 2A05:02FD
cs=0x2a05;eip=0x000300; 	T(ADD(sp, 0x0A));	// 84695 add     sp, 0Ah ;~ 2A05:0300
cs=0x2a05;eip=0x000303; 	J(JMP(def_38787));	// 84696 jmp     def_38787       ; jumptable 00038787 default case, case 231 ;~ 2A05:0303
loc_38936:
	// 9632 
cs=0x2a05;eip=0x000306; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x10));	// 84701 cmp     [bp+arg_0], 10h ; jumptable 00038787 case 221 ;~ 2A05:0306
cs=0x2a05;eip=0x00030a; 	J(JL(loc_3893f));	// 84702 jl      short loc_3893F ;~ 2A05:030A
cs=0x2a05;eip=0x00030c; 	J(JMP(def_38787));	// 84703 jmp     def_38787       ; jumptable 00038787 default case, case 231 ;~ 2A05:030C
loc_3893f:
	// 9633 
cs=0x2a05;eip=0x00030f; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 84707 mov     al, [bp+var_2] ;~ 2A05:030F
cs=0x2a05;eip=0x000312; 	T(SUB(ah, ah));	// 84708 sub     ah, ah ;~ 2A05:0312
cs=0x2a05;eip=0x000314; 	T(MOV(cx, ax));	// 84709 mov     cx, ax ;~ 2A05:0314
cs=0x2a05;eip=0x000316; 	T(MOV(ax, 0x7D00));	// 84710 mov     ax, 7D00h ;~ 2A05:0316
cs=0x2a05;eip=0x000319; 	T(CWD);	// 84711 cwd ;~ 2A05:0319
cs=0x2a05;eip=0x00031a; 	T(DIV2(cx));	// 84712 div     cx ;~ 2A05:031A
cs=0x2a05;eip=0x00031c; 	X(MOV(word_454ba, ax));	// 84713 mov     word_454BA, ax ;~ 2A05:031C
cs=0x2a05;eip=0x00031f; 	J(JMP(def_38787));	// 84714 jmp     def_38787       ; jumptable 00038787 default case, case 231 ;~ 2A05:031F
loc_38952:
	// 9634 
cs=0x2a05;eip=0x000322; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 84719 mov     al, [bp+var_2]  ; jumptable 00038787 case 222 ;~ 2A05:0322
cs=0x2a05;eip=0x000325; 	T(SUB(ah, ah));	// 84720 sub     ah, ah ;~ 2A05:0325
cs=0x2a05;eip=0x000327; 	X(PUSH(ax));	// 84721 push    ax ;~ 2A05:0327
cs=0x2a05;eip=0x000328; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 84722 push    [bp+arg_0] ;~ 2A05:0328
cs=0x2a05;eip=0x00032b; 	X(PUSH(cs));	// 84723 push    cs ;~ 2A05:032B
cs=0x2a05;eip=0x00032c; 	J(CALL(audio_unk2,0));	// 84724 call    near ptr audio_unk2 ;~ 2A05:032C
cs=0x2a05;eip=0x00032f; 	J(JMP(loc_38a64));	// 84725 jmp     loc_38A64 ;~ 2A05:032F
loc_38962:
	// 9635 
cs=0x2a05;eip=0x000332; 	X(PUSH(word_42a04));	// 84730 push    word_42A04      ; jumptable 00038787 case 223 ;~ 2A05:0332
cs=0x2a05;eip=0x000336; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 84731 mov     al, [bp+var_2] ;~ 2A05:0336
cs=0x2a05;eip=0x000339; 	T(SUB(ah, ah));	// 84732 sub     ah, ah ;~ 2A05:0339
cs=0x2a05;eip=0x00033b; 	X(PUSH(ax));	// 84733 push    ax ;~ 2A05:033B
cs=0x2a05;eip=0x00033c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 84734 push    [bp+arg_0] ;~ 2A05:033C
cs=0x2a05;eip=0x00033f; 	X(PUSH(cs));	// 84735 push    cs ;~ 2A05:033F
cs=0x2a05;eip=0x000340; 	J(CALL(sub_38aea,0));	// 84736 call    near ptr sub_38AEA ;~ 2A05:0340
cs=0x2a05;eip=0x000343; 	T(ADD(sp, 6));	// 84737 add     sp, 6 ;~ 2A05:0343
cs=0x2a05;eip=0x000346; 	J(JMP(def_38787));	// 84738 jmp     def_38787       ; jumptable 00038787 default case, case 231 ;~ 2A05:0346
loc_3897a:
	// 9636 
cs=0x2a05;eip=0x00034a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 84744 mov     bx, [bp+var_4]  ; jumptable 00038787 case 224 ;~ 2A05:034A
cs=0x2a05;eip=0x00034d; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 84745 mov     al, [bp+var_2] ;~ 2A05:034D
cs=0x2a05;eip=0x000350; 	X(MOV(*(raddr(ds,bx+0x16)), al));	// 84746 mov     [bx+16h], al ;~ 2A05:0350
cs=0x2a05;eip=0x000353; 	J(JMP(def_38787));	// 84747 jmp     def_38787       ; jumptable 00038787 default case, case 231 ;~ 2A05:0353
loc_38986:
	// 9637 
cs=0x2a05;eip=0x000356; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 84752 mov     bx, [bp+var_4]  ; jumptable 00038787 case 225 ;~ 2A05:0356
cs=0x2a05;eip=0x000359; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 84753 mov     al, [bp+var_2] ;~ 2A05:0359
cs=0x2a05;eip=0x00035c; 	X(MOV(*(raddr(ds,bx+0x24)), al));	// 84754 mov     [bx+24h], al ;~ 2A05:035C
cs=0x2a05;eip=0x00035f; 	J(JMP(def_38787));	// 84755 jmp     def_38787       ; jumptable 00038787 default case, case 231 ;~ 2A05:035F
loc_38992:
	// 9638 
cs=0x2a05;eip=0x000362; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 84760 mov     bx, [bp+var_4]  ; jumptable 00038787 case 226 ;~ 2A05:0362
cs=0x2a05;eip=0x000365; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 84761 mov     ax, [bx] ;~ 2A05:0365
cs=0x2a05;eip=0x000367; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 84762 mov     dx, [bx+2] ;~ 2A05:0367
cs=0x2a05;eip=0x00036a; 	T(MOV(si, *(dw*)(raddr(ds,bx+0x32))));	// 84763 mov     si, [bx+32h] ;~ 2A05:036A
cs=0x2a05;eip=0x00036d; 	T(AND(si, 0x0FF));	// 84764 and     si, 0FFh ;~ 2A05:036D
cs=0x2a05;eip=0x000371; 	T(SHL(si, 1));	// 84765 shl     si, 1 ;~ 2A05:0371
cs=0x2a05;eip=0x000373; 	T(SHL(si, 1));	// 84766 shl     si, 1 ;~ 2A05:0373
cs=0x2a05;eip=0x000375; 	X(MOV(*(dw*)(raddr(ds,bx+si+0x33)), ax));	// 84767 mov     [bx+si+33h], ax ;~ 2A05:0375
cs=0x2a05;eip=0x000378; 	X(MOV(*(dw*)(raddr(ds,bx+si+0x35)), dx));	// 84768 mov     [bx+si+35h], dx ;~ 2A05:0378
cs=0x2a05;eip=0x00037b; 	T(MOV(si, *(dw*)(raddr(ds,bx+0x32))));	// 84769 mov     si, [bx+32h] ;~ 2A05:037B
cs=0x2a05;eip=0x00037e; 	T(AND(si, 0x0FF));	// 84770 and     si, 0FFh ;~ 2A05:037E
cs=0x2a05;eip=0x000382; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 84771 mov     al, [bp+var_2] ;~ 2A05:0382
cs=0x2a05;eip=0x000385; 	T(DEC(al));	// 84772 dec     al ;~ 2A05:0385
cs=0x2a05;eip=0x000387; 	X(MOV(*(raddr(ds,bx+si+0x43)), al));	// 84773 mov     [bx+si+43h], al ;~ 2A05:0387
cs=0x2a05;eip=0x00038a; 	X(INC(*(raddr(ds,bx+0x32))));	// 84774 inc     byte ptr [bx+32h] ;~ 2A05:038A
cs=0x2a05;eip=0x00038d; 	J(JMP(def_38787));	// 84775 jmp     def_38787       ; jumptable 00038787 default case, case 231 ;~ 2A05:038D
loc_389c0:
	// 9639 
cs=0x2a05;eip=0x000390; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 84780 mov     bx, [bp+var_4]  ; jumptable 00038787 case 227 ;~ 2A05:0390
cs=0x2a05;eip=0x000393; 	T(CMP(*(raddr(ds,bx+0x32)), 0));	// 84781 cmp     byte ptr [bx+32h], 0 ;~ 2A05:0393
cs=0x2a05;eip=0x000397; 	J(JNZ(loc_389cc));	// 84782 jnz     short loc_389CC ;~ 2A05:0397
cs=0x2a05;eip=0x000399; 	J(JMP(def_38787));	// 84783 jmp     def_38787       ; jumptable 00038787 default case, case 231 ;~ 2A05:0399
loc_389cc:
	// 9640 
cs=0x2a05;eip=0x00039c; 	T(MOV(al, *(raddr(ds,bx+0x32))));	// 84787 mov     al, [bx+32h] ;~ 2A05:039C
cs=0x2a05;eip=0x00039f; 	T(SUB(ah, ah));	// 84788 sub     ah, ah ;~ 2A05:039F
cs=0x2a05;eip=0x0003a1; 	T(MOV(si, ax));	// 84789 mov     si, ax ;~ 2A05:03A1
cs=0x2a05;eip=0x0003a3; 	T(MOV(di, bx));	// 84790 mov     di, bx ;~ 2A05:03A3
cs=0x2a05;eip=0x0003a5; 	T(MOV(bx, si));	// 84791 mov     bx, si ;~ 2A05:03A5
cs=0x2a05;eip=0x0003a7; 	T(SHL(bx, 1));	// 84792 shl     bx, 1 ;~ 2A05:03A7
cs=0x2a05;eip=0x0003a9; 	T(SHL(bx, 1));	// 84793 shl     bx, 1 ;~ 2A05:03A9
cs=0x2a05;eip=0x0003ab; 	T(MOV(ax, *(dw*)(raddr(ds,bx+di+0x2F))));	// 84794 mov     ax, [bx+di+2Fh] ;~ 2A05:03AB
cs=0x2a05;eip=0x0003ae; 	T(MOV(dx, *(dw*)(raddr(ds,bx+di+0x31))));	// 84795 mov     dx, [bx+di+31h] ;~ 2A05:03AE
cs=0x2a05;eip=0x0003b1; 	T(MOV(bx, di));	// 84796 mov     bx, di ;~ 2A05:03B1
cs=0x2a05;eip=0x0003b3; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 84797 mov     [bx], ax ;~ 2A05:03B3
cs=0x2a05;eip=0x0003b5; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 84798 mov     [bx+2], dx ;~ 2A05:03B5
cs=0x2a05;eip=0x0003b8; 	T(MOV(al, *(raddr(ds,bx+si+0x42))));	// 84799 mov     al, [bx+si+42h] ;~ 2A05:03B8
cs=0x2a05;eip=0x0003bb; 	X(DEC(*(raddr(ds,bx+si+0x42))));	// 84800 dec     byte ptr [bx+si+42h] ;~ 2A05:03BB
cs=0x2a05;eip=0x0003be; 	T(OR(al, al));	// 84801 or      al, al ;~ 2A05:03BE
cs=0x2a05;eip=0x0003c0; 	J(JNZ(def_38787));	// 84802 jnz     short def_38787 ; jumptable 00038787 default case, case 231 ;~ 2A05:03C0
cs=0x2a05;eip=0x0003c2; 	X(DEC(*(raddr(ds,bx+0x32))));	// 84803 dec     byte ptr [bx+32h] ;~ 2A05:03C2
cs=0x2a05;eip=0x0003c5; 	J(JMP(def_38787));	// 84804 jmp     short def_38787 ; jumptable 00038787 default case, case 231 ;~ 2A05:03C5
loc_389f8:
	// 9641 
cs=0x2a05;eip=0x0003c8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 84810 mov     bx, [bp+var_4]  ; jumptable 00038787 case 228 ;~ 2A05:03C8
cs=0x2a05;eip=0x0003cb; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 84811 mov     al, [bp+var_2] ;~ 2A05:03CB
cs=0x2a05;eip=0x0003ce; 	X(MOV(*(raddr(ds,bx+0x22)), al));	// 84812 mov     [bx+22h], al ;~ 2A05:03CE
cs=0x2a05;eip=0x0003d1; 	J(JMP(def_38787));	// 84813 jmp     short def_38787 ; jumptable 00038787 default case, case 231 ;~ 2A05:03D1
loc_38a04:
	// 9642 
cs=0x2a05;eip=0x0003d4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 84819 mov     bx, [bp+var_4]  ; jumptable 00038787 case 233 ;~ 2A05:03D4
cs=0x2a05;eip=0x0003d7; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 84820 mov     al, [bp+var_2] ;~ 2A05:03D7
cs=0x2a05;eip=0x0003da; 	X(MOV(*(raddr(ds,bx+0x47)), al));	// 84821 mov     [bx+47h], al ;~ 2A05:03DA
cs=0x2a05;eip=0x0003dd; 	J(JMP(def_38787));	// 84822 jmp     short def_38787 ; jumptable 00038787 default case, case 231 ;~ 2A05:03DD
loc_38a10:
	// 9643 
cs=0x2a05;eip=0x0003e0; 	X(PUSH(word_42a04));	// 84828 push    word_42A04      ; jumptable 00038787 case 229 ;~ 2A05:03E0
cs=0x2a05;eip=0x0003e4; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 84829 push    [bp+arg_0] ;~ 2A05:03E4
cs=0x2a05;eip=0x0003e7; 	X(PUSH(cs));	// 84830 push    cs ;~ 2A05:03E7
cs=0x2a05;eip=0x0003e8; 	J(CALL(sub_38bea,0));	// 84831 call    near ptr sub_38BEA ;~ 2A05:03E8
cs=0x2a05;eip=0x0003eb; 	J(JMP(loc_38a64));	// 84832 jmp     short loc_38A64 ;~ 2A05:03EB
ret_2a05_412:
	// 9644 
cs=0x2a05;eip=0x000412; 	J(JMP(def_38787));	// 84854 jmp     short def_38787 ; jumptable 00038787 default case, case 231 ;~ 2A05:0412
loc_38a44:
	// 9645 
cs=0x2a05;eip=0x000414; 	T(CMP(byte_42a02, 0x80));	// 84858 cmp     byte_42A02, 80h ; '€' ;~ 2A05:0414
cs=0x2a05;eip=0x000419; 	J(JNC(loc_38a54));	// 84859 jnb     short loc_38A54 ;~ 2A05:0419
cs=0x2a05;eip=0x00041b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 84860 mov     bx, [bp+var_4] ;~ 2A05:041B
cs=0x2a05;eip=0x00041e; 	T(MOV(al, *(raddr(ds,bx+0x22))));	// 84861 mov     al, [bx+22h] ;~ 2A05:041E
cs=0x2a05;eip=0x000421; 	X(MOV(byte_42a03, al));	// 84862 mov     byte_42A03, al ;~ 2A05:0421
loc_38a54:
	// 9646 
cs=0x2a05;eip=0x000424; 	X(AND(byte_42a02, 0x7F));	// 84865 and     byte_42A02, 7Fh ;~ 2A05:0424
cs=0x2a05;eip=0x000429; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 84866 push    [bp+arg_0] ;~ 2A05:0429
cs=0x2a05;eip=0x00042c; 	T(MOV(ax, 0x728E));	// 84867 mov     ax, 728Eh ;~ 2A05:042C
cs=0x2a05;eip=0x00042f; 	X(PUSH(ax));	// 84868 push    ax ;~ 2A05:042F
cs=0x2a05;eip=0x000430; 	X(PUSH(cs));	// 84869 push    cs ;~ 2A05:0430
cs=0x2a05;eip=0x000431; 	J(CALL(sub_38de6,0));	// 84870 call    near ptr sub_38DE6 ;~ 2A05:0431
loc_38a64:
	// 9647 
cs=0x2a05;eip=0x000434; 	T(ADD(sp, 4));	// 84874 add     sp, 4 ;~ 2A05:0434
def_38787:
	// 9648 
cs=0x2a05;eip=0x000437; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 84878 mov     bx, [bp+var_4]  ; jumptable 00038787 default case, case 231 ;~ 2A05:0437
cs=0x2a05;eip=0x00043a; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 84879 mov     ax, [bx] ;~ 2A05:043A
cs=0x2a05;eip=0x00043c; 	T(OR(ax, *(dw*)(raddr(ds,bx+2))));	// 84880 or      ax, [bx+2] ;~ 2A05:043C
cs=0x2a05;eip=0x00043f; 	J(JNZ(loc_38a74));	// 84881 jnz     short loc_38A74 ;~ 2A05:043F
cs=0x2a05;eip=0x000441; 	J(JMP(loc_38737));	// 84882 jmp     loc_38737 ;~ 2A05:0441
loc_38a74:
	// 9649 
cs=0x2a05;eip=0x000444; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 84886 push    word ptr [bx+2] ;~ 2A05:0444
cs=0x2a05;eip=0x000447; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 84887 push    word ptr [bx] ;~ 2A05:0447
cs=0x2a05;eip=0x000449; 	T(MOV(ax, 0x7282));	// 84888 mov     ax, 7282h ;~ 2A05:0449
cs=0x2a05;eip=0x00044c; 	X(PUSH(ax));	// 84889 push    ax ;~ 2A05:044C
cs=0x2a05;eip=0x00044d; 	X(PUSH(cs));	// 84890 push    cs ;~ 2A05:044D
cs=0x2a05;eip=0x00044e; 	J(CALL(sub_3945a,0));	// 84891 call    near ptr sub_3945A ;~ 2A05:044E
cs=0x2a05;eip=0x000451; 	T(ADD(sp, 6));	// 84892 add     sp, 6 ;~ 2A05:0451
cs=0x2a05;eip=0x000454; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 84893 mov     bx, [bp+var_4] ;~ 2A05:0454
cs=0x2a05;eip=0x000457; 	T(MOV(ax, word_429f2));	// 84894 mov     ax, word_429F2 ;~ 2A05:0457
cs=0x2a05;eip=0x00045a; 	T(MOV(dx, word_429f4));	// 84895 mov     dx, word_429F4 ;~ 2A05:045A
cs=0x2a05;eip=0x00045e; 	X(MOV(*(dw*)(raddr(ds,bx+0x18)), ax));	// 84896 mov     [bx+18h], ax ;~ 2A05:045E
cs=0x2a05;eip=0x000461; 	X(MOV(*(dw*)(raddr(ds,bx+0x1A)), dx));	// 84897 mov     [bx+1Ah], dx ;~ 2A05:0461
cs=0x2a05;eip=0x000464; 	J(JMP(loc_38737));	// 84898 jmp     loc_38737 ;~ 2A05:0464
loc_38a98:
	// 9650 
cs=0x2a05;eip=0x000468; 	X(SUB(*(dw*)(raddr(ds,bx+0x18)), 1));	// 84904 sub     word ptr [bx+18h], 1 ;~ 2A05:0468
cs=0x2a05;eip=0x00046c; 	X(SBB(*(dw*)(raddr(ds,bx+0x1A)), 0));	// 84905 sbb     word ptr [bx+1Ah], 0 ;~ 2A05:046C
loc_38aa0:
	// 9651 
cs=0x2a05;eip=0x000470; 	X(POP(ds));	// 84908 pop     ds ;~ 2A05:0470
cs=0x2a05;eip=0x000471; 	X(POP(si));	// 84909 pop     si ;~ 2A05:0471
cs=0x2a05;eip=0x000472; 	X(POP(di));	// 84910 pop     di ;~ 2A05:0472
cs=0x2a05;eip=0x000473; 	T(MOV(sp, bp));	// 84911 mov     sp, bp ;~ 2A05:0473
cs=0x2a05;eip=0x000475; 	X(POP(bp));	// 84912 pop     bp ;~ 2A05:0475
cs=0x2a05;eip=0x000476; 	J(RETF(0));	// 84913 retf ;~ 2A05:0476

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kdef_38787: 	goto def_38787;
        case m2c::kloc_3872d: 	goto loc_3872d;
        case m2c::kloc_38737: 	goto loc_38737;
        case m2c::kloc_38742: 	goto loc_38742;
        case m2c::kloc_3874c: 	goto loc_3874c;
        case m2c::kloc_38770: 	goto loc_38770;
        case m2c::kloc_38784: 	goto loc_38784;
        case m2c::kloc_3878c: 	goto loc_3878c;
        case m2c::kloc_387b2: 	goto loc_387b2;
        case m2c::kloc_387d2: 	goto loc_387d2;
        case m2c::kloc_387dd: 	goto loc_387dd;
        case m2c::kloc_387ea: 	goto loc_387ea;
        case m2c::kloc_3880e: 	goto loc_3880e;
        case m2c::kloc_3881c: 	goto loc_3881c;
        case m2c::kloc_38844: 	goto loc_38844;
        case m2c::kloc_38886: 	goto loc_38886;
        case m2c::kloc_38899: 	goto loc_38899;
        case m2c::kloc_388a2: 	goto loc_388a2;
        case m2c::kloc_388c5: 	goto loc_388c5;
        case m2c::kloc_388d8: 	goto loc_388d8;
        case m2c::kloc_388e2: 	goto loc_388e2;
        case m2c::kloc_38936: 	goto loc_38936;
        case m2c::kloc_3893f: 	goto loc_3893f;
        case m2c::kloc_38952: 	goto loc_38952;
        case m2c::kloc_38962: 	goto loc_38962;
        case m2c::kloc_3897a: 	goto loc_3897a;
        case m2c::kloc_38986: 	goto loc_38986;
        case m2c::kloc_38992: 	goto loc_38992;
        case m2c::kloc_389c0: 	goto loc_389c0;
        case m2c::kloc_389cc: 	goto loc_389cc;
        case m2c::kloc_389f8: 	goto loc_389f8;
        case m2c::kloc_38a04: 	goto loc_38a04;
        case m2c::kloc_38a10: 	goto loc_38a10;
        case m2c::kloc_38a44: 	goto loc_38a44;
        case m2c::kloc_38a54: 	goto loc_38a54;
        case m2c::kloc_38a64: 	goto loc_38a64;
        case m2c::kloc_38a74: 	goto loc_38a74;
        case m2c::kloc_38a98: 	goto loc_38a98;
        case m2c::kloc_38aa0: 	goto loc_38aa0;
        case m2c::kret_2a05_412: 	goto ret_2a05_412;
        case m2c::ksub_38702: 	goto sub_38702;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg028_478_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg028_478_proc:
    _begin:
cs=0x2a05;eip=0x000478; 	X(PUSH(bp));	// 84918 push    bp ;~ 2A05:0478
cs=0x2a05;eip=0x000479; 	T(MOV(bp, sp));	// 84919 mov     bp, sp ;~ 2A05:0479
cs=0x2a05;eip=0x00047b; 	X(PUSH(ds));	// 84920 push    ds ;~ 2A05:047B
cs=0x2a05;eip=0x00047c; 	T(MOV(ax, seg_offset(dseg)));	// 84921 mov     ax, seg dseg ;~ 2A05:047C
cs=0x2a05;eip=0x00047f; 	T(MOV(ds, ax));	// 84922 mov     ds, ax ;~ 2A05:047F
cs=0x2a05;eip=0x000481; 	T(MOV(ax, 0x4C));	// 84923 mov     ax, 4Ch ; 'L' ;~ 2A05:0481
cs=0x2a05;eip=0x000484; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+6))));	// 84924 imul    word ptr [bp+6] ;~ 2A05:0484
cs=0x2a05;eip=0x000487; 	T(MOV(bx, ax));	// 84925 mov     bx, ax ;~ 2A05:0487
cs=0x2a05;eip=0x000489; 	T(MOV(al, *(raddr(ss,bp+8))));	// 84926 mov     al, [bp+8] ;~ 2A05:0489
cs=0x2a05;eip=0x00048c; 	X(MOV(*(raddr(ds,bx-0x7DBD)), al));	// 84927 mov     [bx-7DBDh], al ;~ 2A05:048C
cs=0x2a05;eip=0x000490; 	X(POP(ds));	// 84928 pop     ds ;~ 2A05:0490
cs=0x2a05;eip=0x000491; 	X(POP(bp));	// 84929 pop     bp ;~ 2A05:0491
cs=0x2a05;eip=0x000492; 	J(RETF(0));	// 84930 retf ;~ 2A05:0492

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kseg028_478_proc: 	goto seg028_478_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_38ac4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_38ac4:
    _begin:
#undef arg_0
#define arg_0 6
	// 84940 arg_0           = word ptr  6 ;~ 2A05:0494
#undef arg_2
#define arg_2 8
	// 84941 arg_2           = word ptr  8 ;~ 2A05:0494
cs=0x2a05;eip=0x000494; 	X(PUSH(bp));	// 84943 push    bp ;~ 2A05:0494
cs=0x2a05;eip=0x000495; 	T(MOV(bp, sp));	// 84944 mov     bp, sp ;~ 2A05:0495
cs=0x2a05;eip=0x000497; 	X(PUSH(si));	// 84945 push    si ;~ 2A05:0497
cs=0x2a05;eip=0x000498; 	X(PUSH(ds));	// 84946 push    ds ;~ 2A05:0498
cs=0x2a05;eip=0x000499; 	T(MOV(ax, seg_offset(dseg)));	// 84947 mov     ax, seg dseg ;~ 2A05:0499
cs=0x2a05;eip=0x00049c; 	T(MOV(ds, ax));	// 84948 mov     ds, ax ;~ 2A05:049C
cs=0x2a05;eip=0x00049e; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 84949 mov     si, [bp+arg_0] ;~ 2A05:049E
cs=0x2a05;eip=0x0004a1; 	T(AND(si, 0x0FF));	// 84950 and     si, 0FFh ;~ 2A05:04A1
cs=0x2a05;eip=0x0004a5; 	T(SHL(si, 1));	// 84951 shl     si, 1 ;~ 2A05:04A5
cs=0x2a05;eip=0x0004a7; 	T(SHL(si, 1));	// 84952 shl     si, 1 ;~ 2A05:04A7
cs=0x2a05;eip=0x0004a9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 84953 mov     bx, [bp+arg_2] ;~ 2A05:04A9
cs=0x2a05;eip=0x0004ac; 	T(LES(bx, *(dw*)(raddr(ds,bx+0x2E))));	// 84954 les     bx, [bx+2Eh] ;~ 2A05:04AC
cs=0x2a05;eip=0x0004af; 	T(MOV(ax, *(dw*)(raddr(es,bx+si))));	// 84955 mov     ax, es:[bx+si] ;~ 2A05:04AF
cs=0x2a05;eip=0x0004b2; 	T(MOV(dx, *(dw*)(raddr(es,bx+si+2))));	// 84956 mov     dx, es:[bx+si+2] ;~ 2A05:04B2
cs=0x2a05;eip=0x0004b6; 	X(POP(ds));	// 84957 pop     ds ;~ 2A05:04B6
cs=0x2a05;eip=0x0004b7; 	X(POP(si));	// 84958 pop     si ;~ 2A05:04B7
cs=0x2a05;eip=0x0004b8; 	X(POP(bp));	// 84959 pop     bp ;~ 2A05:04B8
cs=0x2a05;eip=0x0004b9; 	J(RETF(0));	// 84960 retf ;~ 2A05:04B9

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_38ac4: 	goto sub_38ac4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_38aea(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_38aea:
    _begin:
#undef var_12
#define var_12 -0x12
	// 84970 var_12          = word ptr -12h ;~ 2A05:04BA
#undef var_10
#define var_10 -0x10
	// 84971 var_10          = word ptr -10h ;~ 2A05:04BA
#undef var_e
#define var_e -0x0E
	// 84972 var_E           = word ptr -0Eh ;~ 2A05:04BA
#undef var_a
#define var_a -0x0A
	// 84973 var_A           = word ptr -0Ah ;~ 2A05:04BA
#undef var_8
#define var_8 -8
	// 84974 var_8           = dword ptr -8 ;~ 2A05:04BA
#undef var_4
#define var_4 -4
	// 84975 var_4           = word ptr -4 ;~ 2A05:04BA
#undef var_2
#define var_2 -2
	// 84976 var_2           = word ptr -2 ;~ 2A05:04BA
#undef arg_0
#define arg_0 6
	// 84977 arg_0           = word ptr  6 ;~ 2A05:04BA
#undef arg_2
#define arg_2 8
	// 84978 arg_2           = byte ptr  8 ;~ 2A05:04BA
#undef arg_4
#define arg_4 0x0A
	// 84979 arg_4           = word ptr  0Ah ;~ 2A05:04BA
cs=0x2a05;eip=0x0004ba; 	X(PUSH(bp));	// 84981 push    bp ;~ 2A05:04BA
cs=0x2a05;eip=0x0004bb; 	T(MOV(bp, sp));	// 84982 mov     bp, sp ;~ 2A05:04BB
cs=0x2a05;eip=0x0004bd; 	T(SUB(sp, 0x12));	// 84983 sub     sp, 12h ;~ 2A05:04BD
cs=0x2a05;eip=0x0004c0; 	X(PUSH(di));	// 84984 push    di ;~ 2A05:04C0
cs=0x2a05;eip=0x0004c1; 	X(PUSH(si));	// 84985 push    si ;~ 2A05:04C1
cs=0x2a05;eip=0x0004c2; 	X(PUSH(ds));	// 84986 push    ds ;~ 2A05:04C2
cs=0x2a05;eip=0x0004c3; 	T(MOV(ax, seg_offset(dseg)));	// 84987 mov     ax, seg dseg ;~ 2A05:04C3
cs=0x2a05;eip=0x0004c6; 	T(MOV(ds, ax));	// 84988 mov     ds, ax ;~ 2A05:04C6
cs=0x2a05;eip=0x0004c8; 	T(MOV(ax, 0x4C));	// 84989 mov     ax, 4Ch ; 'L' ;~ 2A05:04C8
cs=0x2a05;eip=0x0004cb; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 84990 imul    [bp+arg_0] ;~ 2A05:04CB
cs=0x2a05;eip=0x0004ce; 	T(ADD(ax, 0x81FC));	// 84991 add     ax, 81FCh ;~ 2A05:04CE
cs=0x2a05;eip=0x0004d1; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 84992 mov     [bp+var_4], ax ;~ 2A05:04D1
cs=0x2a05;eip=0x0004d4; 	T(CMP(*(raddr(ss,bp+arg_2)), 0x40));	// 84993 cmp     [bp+arg_2], 40h ; '@' ;~ 2A05:04D4
cs=0x2a05;eip=0x0004d8; 	J(JNZ(loc_38b12));	// 84994 jnz     short loc_38B12 ;~ 2A05:04D8
cs=0x2a05;eip=0x0004da; 	T(MOV(bx, ax));	// 84995 mov     bx, ax ;~ 2A05:04DA
cs=0x2a05;eip=0x0004dc; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_4))));	// 84996 mov     al, byte ptr [bp+arg_4] ;~ 2A05:04DC
cs=0x2a05;eip=0x0004df; 	X(MOV(*(raddr(ds,bx+0x25)), al));	// 84997 mov     [bx+25h], al ;~ 2A05:04DF
loc_38b12:
	// 9652 
cs=0x2a05;eip=0x0004e2; 	T(CMP(byte_40634, 0));	// 85000 cmp     byte_40634, 0 ;~ 2A05:04E2
cs=0x2a05;eip=0x0004e7; 	J(JZ(loc_38b44));	// 85001 jz      short loc_38B44 ;~ 2A05:04E7
cs=0x2a05;eip=0x0004e9; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 85002 push    [bp+arg_4] ;~ 2A05:04E9
cs=0x2a05;eip=0x0004ec; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 85003 mov     al, [bp+arg_2] ;~ 2A05:04EC
cs=0x2a05;eip=0x0004ef; 	T(SUB(ah, ah));	// 85004 sub     ah, ah ;~ 2A05:04EF
cs=0x2a05;eip=0x0004f1; 	X(PUSH(ax));	// 85005 push    ax ;~ 2A05:04F1
cs=0x2a05;eip=0x0004f2; 	T(SUB(ax, ax));	// 85006 sub     ax, ax ;~ 2A05:04F2
cs=0x2a05;eip=0x0004f4; 	X(PUSH(ax));	// 85007 push    ax ;~ 2A05:04F4
cs=0x2a05;eip=0x0004f5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 85008 mov     bx, [bp+var_4] ;~ 2A05:04F5
cs=0x2a05;eip=0x0004f8; 	T(MOV(al, *(raddr(ds,bx+0x47))));	// 85009 mov     al, [bx+47h] ;~ 2A05:04F8
cs=0x2a05;eip=0x0004fb; 	T(SUB(ah, ah));	// 85010 sub     ah, ah ;~ 2A05:04FB
cs=0x2a05;eip=0x0004fd; 	X(PUSH(ax));	// 85011 push    ax ;~ 2A05:04FD
cs=0x2a05;eip=0x0004fe; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 85012 mov     ax, word ptr audiodriverbinary ;~ 2A05:04FE
cs=0x2a05;eip=0x000501; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 85013 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:0501
cs=0x2a05;eip=0x000505; 	T(ADD(ax, 0x15));	// 85014 add     ax, 15h ;~ 2A05:0505
cs=0x2a05;eip=0x000508; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8+2))), dx));	// 85015 mov     word ptr [bp+var_8+2], dx ;~ 2A05:0508
cs=0x2a05;eip=0x00050b; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8))), ax));	// 85016 mov     word ptr [bp+var_8], ax ;~ 2A05:050B
cs=0x2a05;eip=0x00050e; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_8))));	// 85017 call    [bp+var_8] ;~ 2A05:050E
cs=0x2a05;eip=0x000511; 	T(ADD(sp, 8));	// 85018 add     sp, 8 ;~ 2A05:0511
loc_38b44:
	// 9653 
cs=0x2a05;eip=0x000514; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 85021 mov     [bp+var_2], 0 ;~ 2A05:0514
cs=0x2a05;eip=0x000519; 	T(MOV(al, byte_459d2));	// 85022 mov     al, byte_459D2 ;~ 2A05:0519
cs=0x2a05;eip=0x00051c; 	T(SUB(ah, ah));	// 85023 sub     ah, ah ;~ 2A05:051C
cs=0x2a05;eip=0x00051e; 	T(OR(ax, ax));	// 85024 or      ax, ax ;~ 2A05:051E
cs=0x2a05;eip=0x000520; 	J(JNZ(loc_38b55));	// 85025 jnz     short loc_38B55 ;~ 2A05:0520
cs=0x2a05;eip=0x000522; 	J(JMP(loc_38be3));	// 85026 jmp     loc_38BE3 ;~ 2A05:0522
loc_38b55:
	// 9654 
cs=0x2a05;eip=0x000525; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 85030 mov     al, [bp+arg_2] ;~ 2A05:0525
cs=0x2a05;eip=0x000528; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 85031 mov     [bp+var_A], ax ;~ 2A05:0528
cs=0x2a05;eip=0x00052b; 	T(MOV(si, 0x0A2B6));	// 85032 mov     si, 0A2B6h ;~ 2A05:052B
cs=0x2a05;eip=0x00052e; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0x0A2B7));	// 85033 mov     [bp+var_E], 0A2B7h ;~ 2A05:052E
cs=0x2a05;eip=0x000533; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), si));	// 85034 mov     [bp+var_10], si ;~ 2A05:0533
cs=0x2a05;eip=0x000536; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), 0x0A2CC));	// 85035 mov     [bp+var_12], 0A2CCh ;~ 2A05:0536
cs=0x2a05;eip=0x00053b; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_2))));	// 85036 mov     di, [bp+var_2] ;~ 2A05:053B
loc_38b6e:
	// 9655 
cs=0x2a05;eip=0x00053e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 85039 mov     bx, [bp+var_4] ;~ 2A05:053E
cs=0x2a05;eip=0x000541; 	T(MOV(al, *(raddr(ds,si))));	// 85040 mov     al, [si] ;~ 2A05:0541
cs=0x2a05;eip=0x000543; 	T(CMP(*(raddr(ds,bx+0x23)), al));	// 85041 cmp     [bx+23h], al ;~ 2A05:0543
cs=0x2a05;eip=0x000546; 	J(JNZ(loc_38b9d));	// 85042 jnz     short loc_38B9D ;~ 2A05:0546
cs=0x2a05;eip=0x000548; 	T(CMP(byte_40634, 0));	// 85043 cmp     byte_40634, 0 ;~ 2A05:0548
cs=0x2a05;eip=0x00054d; 	J(JNZ(loc_38b9d));	// 85044 jnz     short loc_38B9D ;~ 2A05:054D
cs=0x2a05;eip=0x00054f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 85045 push    [bp+arg_4] ;~ 2A05:054F
cs=0x2a05;eip=0x000552; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 85046 push    [bp+var_A] ;~ 2A05:0552
cs=0x2a05;eip=0x000555; 	X(PUSH(si));	// 85047 push    si ;~ 2A05:0555
cs=0x2a05;eip=0x000556; 	X(PUSH(di));	// 85048 push    di ;~ 2A05:0556
cs=0x2a05;eip=0x000557; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 85049 mov     ax, word ptr audiodriverbinary ;~ 2A05:0557
cs=0x2a05;eip=0x00055a; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 85050 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:055A
cs=0x2a05;eip=0x00055e; 	T(ADD(ax, 0x15));	// 85051 add     ax, 15h ;~ 2A05:055E
cs=0x2a05;eip=0x000561; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8+2))), dx));	// 85052 mov     word ptr [bp+var_8+2], dx ;~ 2A05:0561
cs=0x2a05;eip=0x000564; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8))), ax));	// 85053 mov     word ptr [bp+var_8], ax ;~ 2A05:0564
cs=0x2a05;eip=0x000567; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_8))));	// 85054 call    [bp+var_8] ;~ 2A05:0567
cs=0x2a05;eip=0x00056a; 	T(ADD(sp, 8));	// 85055 add     sp, 8 ;~ 2A05:056A
loc_38b9d:
	// 9656 
cs=0x2a05;eip=0x00056d; 	T(CMP(*(raddr(ss,bp+arg_2)), 0x40));	// 85059 cmp     [bp+arg_2], 40h ; '@' ;~ 2A05:056D
cs=0x2a05;eip=0x000571; 	J(JNZ(loc_38bc4));	// 85060 jnz     short loc_38BC4 ;~ 2A05:0571
cs=0x2a05;eip=0x000573; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0));	// 85061 cmp     [bp+arg_4], 0 ;~ 2A05:0573
cs=0x2a05;eip=0x000577; 	J(JNZ(loc_38bc4));	// 85062 jnz     short loc_38BC4 ;~ 2A05:0577
cs=0x2a05;eip=0x000579; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_e))));	// 85063 mov     bx, [bp+var_E] ;~ 2A05:0579
cs=0x2a05;eip=0x00057c; 	T(CMP(*(raddr(ds,bx)), 2));	// 85064 cmp     byte ptr [bx], 2 ;~ 2A05:057C
cs=0x2a05;eip=0x00057f; 	J(JNZ(loc_38bc4));	// 85065 jnz     short loc_38BC4 ;~ 2A05:057F
cs=0x2a05;eip=0x000581; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_10))));	// 85066 mov     bx, [bp+var_10] ;~ 2A05:0581
cs=0x2a05;eip=0x000584; 	T(MOV(al, *(raddr(ds,bx))));	// 85067 mov     al, [bx] ;~ 2A05:0584
cs=0x2a05;eip=0x000586; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 85068 mov     bx, [bp+var_4] ;~ 2A05:0586
cs=0x2a05;eip=0x000589; 	T(CMP(*(raddr(ds,bx+0x23)), al));	// 85069 cmp     [bx+23h], al ;~ 2A05:0589
cs=0x2a05;eip=0x00058c; 	J(JNZ(loc_38bc4));	// 85070 jnz     short loc_38BC4 ;~ 2A05:058C
cs=0x2a05;eip=0x00058e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_12))));	// 85071 mov     bx, [bp+var_12] ;~ 2A05:058E
cs=0x2a05;eip=0x000591; 	X(MOV(*(raddr(ds,bx)), 4));	// 85072 mov     byte ptr [bx], 4 ;~ 2A05:0591
loc_38bc4:
	// 9657 
cs=0x2a05;eip=0x000594; 	T(ADD(si, 0x2E));	// 85076 add     si, 2Eh ; '.' ;~ 2A05:0594
cs=0x2a05;eip=0x000597; 	X(ADD(*(dw*)(raddr(ss,bp+var_e)), 0x2E));	// 85077 add     [bp+var_E], 2Eh ; '.' ;~ 2A05:0597
cs=0x2a05;eip=0x00059b; 	X(ADD(*(dw*)(raddr(ss,bp+var_10)), 0x2E));	// 85078 add     [bp+var_10], 2Eh ; '.' ;~ 2A05:059B
cs=0x2a05;eip=0x00059f; 	X(ADD(*(dw*)(raddr(ss,bp+var_12)), 0x2E));	// 85079 add     [bp+var_12], 2Eh ; '.' ;~ 2A05:059F
cs=0x2a05;eip=0x0005a3; 	T(INC(di));	// 85080 inc     di ;~ 2A05:05A3
cs=0x2a05;eip=0x0005a4; 	T(MOV(ax, di));	// 85081 mov     ax, di ;~ 2A05:05A4
cs=0x2a05;eip=0x0005a6; 	T(MOV(cl, byte_459d2));	// 85082 mov     cl, byte_459D2 ;~ 2A05:05A6
cs=0x2a05;eip=0x0005aa; 	T(SUB(ch, ch));	// 85083 sub     ch, ch ;~ 2A05:05AA
cs=0x2a05;eip=0x0005ac; 	T(CMP(ax, cx));	// 85084 cmp     ax, cx ;~ 2A05:05AC
cs=0x2a05;eip=0x0005ae; 	J(JC(loc_38b6e));	// 85085 jb      short loc_38B6E ;~ 2A05:05AE
cs=0x2a05;eip=0x0005b0; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), di));	// 85086 mov     [bp+var_2], di ;~ 2A05:05B0
loc_38be3:
	// 9658 
cs=0x2a05;eip=0x0005b3; 	X(POP(ds));	// 85089 pop     ds ;~ 2A05:05B3
cs=0x2a05;eip=0x0005b4; 	X(POP(si));	// 85090 pop     si ;~ 2A05:05B4
cs=0x2a05;eip=0x0005b5; 	X(POP(di));	// 85091 pop     di ;~ 2A05:05B5
cs=0x2a05;eip=0x0005b6; 	T(MOV(sp, bp));	// 85092 mov     sp, bp ;~ 2A05:05B6
cs=0x2a05;eip=0x0005b8; 	X(POP(bp));	// 85093 pop     bp ;~ 2A05:05B8
cs=0x2a05;eip=0x0005b9; 	J(RETF(0));	// 85094 retf ;~ 2A05:05B9

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_38b12: 	goto loc_38b12;
        case m2c::kloc_38b44: 	goto loc_38b44;
        case m2c::kloc_38b55: 	goto loc_38b55;
        case m2c::kloc_38b6e: 	goto loc_38b6e;
        case m2c::kloc_38b9d: 	goto loc_38b9d;
        case m2c::kloc_38bc4: 	goto loc_38bc4;
        case m2c::kloc_38be3: 	goto loc_38be3;
        case m2c::ksub_38aea: 	goto sub_38aea;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_38bea(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_38bea:
    _begin:
#undef var_6
#define var_6 -6
	// 85104 var_6           = dword ptr -6 ;~ 2A05:05BA
#undef var_2
#define var_2 -2
	// 85105 var_2           = word ptr -2 ;~ 2A05:05BA
#undef arg_0
#define arg_0 6
	// 85106 arg_0           = word ptr  6 ;~ 2A05:05BA
#undef arg_2
#define arg_2 8
	// 85107 arg_2           = word ptr  8 ;~ 2A05:05BA
cs=0x2a05;eip=0x0005ba; 	X(PUSH(bp));	// 85109 push    bp ;~ 2A05:05BA
cs=0x2a05;eip=0x0005bb; 	T(MOV(bp, sp));	// 85110 mov     bp, sp ;~ 2A05:05BB
cs=0x2a05;eip=0x0005bd; 	T(SUB(sp, 6));	// 85111 sub     sp, 6 ;~ 2A05:05BD
cs=0x2a05;eip=0x0005c0; 	X(PUSH(ds));	// 85112 push    ds ;~ 2A05:05C0
cs=0x2a05;eip=0x0005c1; 	T(MOV(ax, seg_offset(dseg)));	// 85113 mov     ax, seg dseg ;~ 2A05:05C1
cs=0x2a05;eip=0x0005c4; 	T(MOV(ds, ax));	// 85114 mov     ds, ax ;~ 2A05:05C4
cs=0x2a05;eip=0x0005c6; 	T(MOV(ax, 0x4C));	// 85115 mov     ax, 4Ch ; 'L' ;~ 2A05:05C6
cs=0x2a05;eip=0x0005c9; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 85116 imul    [bp+arg_0] ;~ 2A05:05C9
cs=0x2a05;eip=0x0005cc; 	T(ADD(ax, 0x81FC));	// 85117 add     ax, 81FCh ;~ 2A05:05CC
cs=0x2a05;eip=0x0005cf; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 85118 mov     [bp+var_2], ax ;~ 2A05:05CF
cs=0x2a05;eip=0x0005d2; 	T(TEST(*(dw*)(raddr(ss,bp+arg_2)), 0x100));	// 85119 test    [bp+arg_2], 100h ;~ 2A05:05D2
cs=0x2a05;eip=0x0005d7; 	J(JZ(loc_38c0d));	// 85120 jz      short loc_38C0D ;~ 2A05:05D7
cs=0x2a05;eip=0x0005d9; 	X(OR(*(db*)(raddr(ss,bp+arg_2)), 0x80));	// 85121 or      byte ptr [bp+arg_2], 80h ;~ 2A05:05D9
loc_38c0d:
	// 9659 
cs=0x2a05;eip=0x0005dd; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_2))));	// 85124 mov     al, byte ptr [bp+arg_2] ;~ 2A05:05DD
cs=0x2a05;eip=0x0005e0; 	T(CBW);	// 85125 cbw ;~ 2A05:05E0
cs=0x2a05;eip=0x0005e1; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_2))));	// 85126 mov     cx, [bp+arg_2] ;~ 2A05:05E1
cs=0x2a05;eip=0x0005e4; 	T(SUB(cl, cl));	// 85127 sub     cl, cl ;~ 2A05:05E4
cs=0x2a05;eip=0x0005e6; 	T(SHR(cx, 1));	// 85128 shr     cx, 1 ;~ 2A05:05E6
cs=0x2a05;eip=0x0005e8; 	T(ADD(cx, ax));	// 85129 add     cx, ax ;~ 2A05:05E8
cs=0x2a05;eip=0x0005ea; 	T(SUB(cx, 0x2000));	// 85130 sub     cx, 2000h ;~ 2A05:05EA
cs=0x2a05;eip=0x0005ee; 	X(MOV(*(dw*)(raddr(ss,bp+arg_2)), cx));	// 85131 mov     [bp+arg_2], cx ;~ 2A05:05EE
cs=0x2a05;eip=0x0005f1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 85132 mov     bx, [bp+var_2] ;~ 2A05:05F1
cs=0x2a05;eip=0x0005f4; 	T(MOV(ax, cx));	// 85133 mov     ax, cx ;~ 2A05:05F4
cs=0x2a05;eip=0x0005f6; 	X(MOV(*(dw*)(raddr(ds,bx+0x26)), ax));	// 85134 mov     [bx+26h], ax ;~ 2A05:05F6
cs=0x2a05;eip=0x0005f9; 	T(MOV(al, *(raddr(ds,bx+0x47))));	// 85135 mov     al, [bx+47h] ;~ 2A05:05F9
cs=0x2a05;eip=0x0005fc; 	T(SUB(ah, ah));	// 85136 sub     ah, ah ;~ 2A05:05FC
cs=0x2a05;eip=0x0005fe; 	X(PUSH(ax));	// 85137 push    ax ;~ 2A05:05FE
cs=0x2a05;eip=0x0005ff; 	X(PUSH(cx));	// 85138 push    cx ;~ 2A05:05FF
cs=0x2a05;eip=0x000600; 	X(PUSH(bx));	// 85139 push    bx ;~ 2A05:0600
cs=0x2a05;eip=0x000601; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 85140 mov     ax, word ptr audiodriverbinary ;~ 2A05:0601
cs=0x2a05;eip=0x000604; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 85141 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:0604
cs=0x2a05;eip=0x000608; 	T(ADD(ax, 0x1B));	// 85142 add     ax, 1Bh ;~ 2A05:0608
cs=0x2a05;eip=0x00060b; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6+2))), dx));	// 85143 mov     word ptr [bp+var_6+2], dx ;~ 2A05:060B
cs=0x2a05;eip=0x00060e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6))), ax));	// 85144 mov     word ptr [bp+var_6], ax ;~ 2A05:060E
cs=0x2a05;eip=0x000611; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_6))));	// 85145 call    [bp+var_6] ;~ 2A05:0611
cs=0x2a05;eip=0x000614; 	T(ADD(sp, 6));	// 85146 add     sp, 6 ;~ 2A05:0614
cs=0x2a05;eip=0x000617; 	X(POP(ds));	// 85147 pop     ds ;~ 2A05:0617
cs=0x2a05;eip=0x000618; 	T(MOV(sp, bp));	// 85148 mov     sp, bp ;~ 2A05:0618
cs=0x2a05;eip=0x00061a; 	X(POP(bp));	// 85149 pop     bp ;~ 2A05:061A
cs=0x2a05;eip=0x00061b; 	J(RETF(0));	// 85150 retf ;~ 2A05:061B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_38c0d: 	goto loc_38c0d;
        case m2c::ksub_38bea: 	goto sub_38bea;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool audio_unk2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    audio_unk2:
    _begin:
#undef var_c
#define var_c -0x0C
	// 85161 var_C           = dword ptr -0Ch ;~ 2A05:061C
#undef var_6
#define var_6 -6
	// 85162 var_6           = word ptr -6 ;~ 2A05:061C
#undef var_4
#define var_4 -4
	// 85163 var_4           = word ptr -4 ;~ 2A05:061C
#undef var_2
#define var_2 -2
	// 85164 var_2           = word ptr -2 ;~ 2A05:061C
#undef arg_0
#define arg_0 6
	// 85165 arg_0           = word ptr  6 ;~ 2A05:061C
#undef arg_2
#define arg_2 8
	// 85166 arg_2           = byte ptr  8 ;~ 2A05:061C
cs=0x2a05;eip=0x00061c; 	X(PUSH(bp));	// 85168 push    bp ;~ 2A05:061C
cs=0x2a05;eip=0x00061d; 	T(MOV(bp, sp));	// 85169 mov     bp, sp ;~ 2A05:061D
cs=0x2a05;eip=0x00061f; 	T(SUB(sp, 0x0C));	// 85170 sub     sp, 0Ch ;~ 2A05:061F
cs=0x2a05;eip=0x000622; 	X(PUSH(di));	// 85171 push    di ;~ 2A05:0622
cs=0x2a05;eip=0x000623; 	X(PUSH(si));	// 85172 push    si ;~ 2A05:0623
cs=0x2a05;eip=0x000624; 	X(PUSH(ds));	// 85173 push    ds ;~ 2A05:0624
cs=0x2a05;eip=0x000625; 	T(MOV(ax, seg_offset(dseg)));	// 85174 mov     ax, seg dseg ;~ 2A05:0625
cs=0x2a05;eip=0x000628; 	T(MOV(ds, ax));	// 85175 mov     ds, ax ;~ 2A05:0628
cs=0x2a05;eip=0x00062a; 	T(MOV(ax, 0x4C));	// 85176 mov     ax, 4Ch ; 'L' ;~ 2A05:062A
cs=0x2a05;eip=0x00062d; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 85177 imul    [bp+arg_0] ;~ 2A05:062D
cs=0x2a05;eip=0x000630; 	T(ADD(ax, offset(dseg,audiochunks_unk)));	// 85178 add     ax, offset audiochunks_unk ;~ 2A05:0630
cs=0x2a05;eip=0x000633; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 85179 mov     [bp+var_4], ax ;~ 2A05:0633
cs=0x2a05;eip=0x000636; 	T(MOV(bx, ax));	// 85180 mov     bx, ax ;~ 2A05:0636
cs=0x2a05;eip=0x000638; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 85181 mov     al, [bp+arg_2] ;~ 2A05:0638
cs=0x2a05;eip=0x00063b; 	X(MOV(*(raddr(ds,bx+0x28)), al));	// 85182 mov     [bx+28h], al ;~ 2A05:063B
cs=0x2a05;eip=0x00063e; 	T(CMP(byte_40634, 0));	// 85183 cmp     byte_40634, 0 ;~ 2A05:063E
cs=0x2a05;eip=0x000643; 	J(JNZ(loc_38cc8));	// 85184 jnz     short loc_38CC8 ;~ 2A05:0643
cs=0x2a05;eip=0x000645; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 85185 mov     [bp+var_2], 0 ;~ 2A05:0645
cs=0x2a05;eip=0x00064a; 	T(MOV(al, byte_459d2));	// 85186 mov     al, byte_459D2 ;~ 2A05:064A
cs=0x2a05;eip=0x00064d; 	T(SUB(ah, ah));	// 85187 sub     ah, ah ;~ 2A05:064D
cs=0x2a05;eip=0x00064f; 	T(OR(ax, ax));	// 85188 or      ax, ax ;~ 2A05:064F
cs=0x2a05;eip=0x000651; 	J(JZ(loc_38cf0));	// 85189 jz      short loc_38CF0 ;~ 2A05:0651
cs=0x2a05;eip=0x000653; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 85190 mov     al, [bp+arg_2] ;~ 2A05:0653
cs=0x2a05;eip=0x000656; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 85191 mov     [bp+var_6], ax ;~ 2A05:0656
cs=0x2a05;eip=0x000659; 	T(MOV(si, offset(dseg,unk_45a26)));	// 85192 mov     si, offset unk_45A26 ;~ 2A05:0659
cs=0x2a05;eip=0x00065c; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_2))));	// 85193 mov     di, [bp+var_2] ;~ 2A05:065C
loc_38c8f:
	// 9660 
cs=0x2a05;eip=0x00065f; 	T(MOV(al, *(raddr(ds,si))));	// 85196 mov     al, [si] ;~ 2A05:065F
cs=0x2a05;eip=0x000661; 	T(SUB(ah, ah));	// 85197 sub     ah, ah ;~ 2A05:0661
cs=0x2a05;eip=0x000663; 	T(CMP(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 85198 cmp     ax, [bp+arg_0] ;~ 2A05:0663
cs=0x2a05;eip=0x000666; 	J(JNZ(loc_38cb3));	// 85199 jnz     short loc_38CB3 ;~ 2A05:0666
cs=0x2a05;eip=0x000668; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 85200 push    [bp+var_6] ;~ 2A05:0668
cs=0x2a05;eip=0x00066b; 	X(PUSH(si));	// 85201 push    si ;~ 2A05:066B
cs=0x2a05;eip=0x00066c; 	X(PUSH(di));	// 85202 push    di ;~ 2A05:066C
cs=0x2a05;eip=0x00066d; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 85203 mov     ax, word ptr audiodriverbinary ;~ 2A05:066D
cs=0x2a05;eip=0x000670; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 85204 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:0670
cs=0x2a05;eip=0x000674; 	T(ADD(ax, 0x12));	// 85205 add     ax, 12h ;~ 2A05:0674
cs=0x2a05;eip=0x000677; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c+2))), dx));	// 85206 mov     word ptr [bp+var_C+2], dx ;~ 2A05:0677
cs=0x2a05;eip=0x00067a; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c))), ax));	// 85207 mov     word ptr [bp+var_C], ax ;~ 2A05:067A
cs=0x2a05;eip=0x00067d; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_c))));	// 85208 call    [bp+var_C] ;~ 2A05:067D
cs=0x2a05;eip=0x000680; 	T(ADD(sp, 6));	// 85209 add     sp, 6 ;~ 2A05:0680
loc_38cb3:
	// 9661 
cs=0x2a05;eip=0x000683; 	T(ADD(si, 0x2E));	// 85212 add     si, 2Eh ; '.' ;~ 2A05:0683
cs=0x2a05;eip=0x000686; 	T(INC(di));	// 85213 inc     di ;~ 2A05:0686
cs=0x2a05;eip=0x000687; 	T(MOV(ax, di));	// 85214 mov     ax, di ;~ 2A05:0687
cs=0x2a05;eip=0x000689; 	T(MOV(cl, byte_459d2));	// 85215 mov     cl, byte_459D2 ;~ 2A05:0689
cs=0x2a05;eip=0x00068d; 	T(SUB(ch, ch));	// 85216 sub     ch, ch ;~ 2A05:068D
cs=0x2a05;eip=0x00068f; 	T(CMP(ax, cx));	// 85217 cmp     ax, cx ;~ 2A05:068F
cs=0x2a05;eip=0x000691; 	J(JC(loc_38c8f));	// 85218 jb      short loc_38C8F ;~ 2A05:0691
cs=0x2a05;eip=0x000693; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), di));	// 85219 mov     [bp+var_2], di ;~ 2A05:0693
cs=0x2a05;eip=0x000696; 	J(JMP(loc_38cf0));	// 85220 jmp     short loc_38CF0 ;~ 2A05:0696
loc_38cc8:
	// 9662 
cs=0x2a05;eip=0x000698; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 85224 mov     al, [bp+arg_2] ;~ 2A05:0698
cs=0x2a05;eip=0x00069b; 	T(SUB(ah, ah));	// 85225 sub     ah, ah ;~ 2A05:069B
cs=0x2a05;eip=0x00069d; 	X(PUSH(ax));	// 85226 push    ax ;~ 2A05:069D
cs=0x2a05;eip=0x00069e; 	T(SUB(ax, ax));	// 85227 sub     ax, ax ;~ 2A05:069E
cs=0x2a05;eip=0x0006a0; 	X(PUSH(ax));	// 85228 push    ax ;~ 2A05:06A0
cs=0x2a05;eip=0x0006a1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 85229 mov     bx, [bp+var_4] ;~ 2A05:06A1
cs=0x2a05;eip=0x0006a4; 	T(MOV(al, *(raddr(ds,bx+0x47))));	// 85230 mov     al, [bx+47h] ;~ 2A05:06A4
cs=0x2a05;eip=0x0006a7; 	T(SUB(ah, ah));	// 85231 sub     ah, ah ;~ 2A05:06A7
cs=0x2a05;eip=0x0006a9; 	X(PUSH(ax));	// 85232 push    ax ;~ 2A05:06A9
cs=0x2a05;eip=0x0006aa; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 85233 mov     ax, word ptr audiodriverbinary ;~ 2A05:06AA
cs=0x2a05;eip=0x0006ad; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 85234 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:06AD
cs=0x2a05;eip=0x0006b1; 	T(ADD(ax, 0x12));	// 85235 add     ax, 12h ;~ 2A05:06B1
cs=0x2a05;eip=0x0006b4; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c+2))), dx));	// 85236 mov     word ptr [bp+var_C+2], dx ;~ 2A05:06B4
cs=0x2a05;eip=0x0006b7; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c))), ax));	// 85237 mov     word ptr [bp+var_C], ax ;~ 2A05:06B7
cs=0x2a05;eip=0x0006ba; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_c))));	// 85238 call    [bp+var_C] ;~ 2A05:06BA
cs=0x2a05;eip=0x0006bd; 	T(ADD(sp, 6));	// 85239 add     sp, 6 ;~ 2A05:06BD
loc_38cf0:
	// 9663 
cs=0x2a05;eip=0x0006c0; 	X(POP(ds));	// 85243 pop     ds ;~ 2A05:06C0
cs=0x2a05;eip=0x0006c1; 	X(POP(si));	// 85244 pop     si ;~ 2A05:06C1
cs=0x2a05;eip=0x0006c2; 	X(POP(di));	// 85245 pop     di ;~ 2A05:06C2
cs=0x2a05;eip=0x0006c3; 	T(MOV(sp, bp));	// 85246 mov     sp, bp ;~ 2A05:06C3
cs=0x2a05;eip=0x0006c5; 	X(POP(bp));	// 85247 pop     bp ;~ 2A05:06C5
cs=0x2a05;eip=0x0006c6; 	J(RETF(0));	// 85248 retf ;~ 2A05:06C6

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kaudio_unk2: 	goto audio_unk2;
        case m2c::kloc_38c8f: 	goto loc_38c8f;
        case m2c::kloc_38cb3: 	goto loc_38cb3;
        case m2c::kloc_38cc8: 	goto loc_38cc8;
        case m2c::kloc_38cf0: 	goto loc_38cf0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_38cf8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_38cf8:
    _begin:
#undef var_a
#define var_a -0x0A
	// 85260 var_A           = dword ptr -0Ah ;~ 2A05:06C8
#undef var_4
#define var_4 -4
	// 85261 var_4           = word ptr -4 ;~ 2A05:06C8
#undef var_2
#define var_2 -2
	// 85262 var_2           = word ptr -2 ;~ 2A05:06C8
#undef arg_0
#define arg_0 6
	// 85263 arg_0           = word ptr  6 ;~ 2A05:06C8
#undef arg_2
#define arg_2 8
	// 85264 arg_2           = dword ptr  8 ;~ 2A05:06C8
cs=0x2a05;eip=0x0006c8; 	X(PUSH(bp));	// 85266 push    bp ;~ 2A05:06C8
cs=0x2a05;eip=0x0006c9; 	T(MOV(bp, sp));	// 85267 mov     bp, sp ;~ 2A05:06C9
cs=0x2a05;eip=0x0006cb; 	T(SUB(sp, 0x0A));	// 85268 sub     sp, 0Ah ;~ 2A05:06CB
cs=0x2a05;eip=0x0006ce; 	X(PUSH(di));	// 85269 push    di ;~ 2A05:06CE
cs=0x2a05;eip=0x0006cf; 	X(PUSH(si));	// 85270 push    si ;~ 2A05:06CF
cs=0x2a05;eip=0x0006d0; 	X(PUSH(ds));	// 85271 push    ds ;~ 2A05:06D0
cs=0x2a05;eip=0x0006d1; 	T(MOV(ax, seg_offset(dseg)));	// 85272 mov     ax, seg dseg ;~ 2A05:06D1
cs=0x2a05;eip=0x0006d4; 	T(MOV(ds, ax));	// 85273 mov     ds, ax ;~ 2A05:06D4
cs=0x2a05;eip=0x0006d6; 	T(MOV(ax, 0x4C));	// 85274 mov     ax, 4Ch ; 'L' ;~ 2A05:06D6
cs=0x2a05;eip=0x0006d9; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 85275 imul    [bp+arg_0] ;~ 2A05:06D9
cs=0x2a05;eip=0x0006dc; 	T(MOV(si, ax));	// 85276 mov     si, ax ;~ 2A05:06DC
cs=0x2a05;eip=0x0006de; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 85277 mov     ax, word ptr [bp+arg_2] ;~ 2A05:06DE
cs=0x2a05;eip=0x0006e1; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 85278 mov     dx, word ptr [bp+arg_2+2] ;~ 2A05:06E1
cs=0x2a05;eip=0x0006e4; 	X(MOV(*(dw*)(raddr(ds,si-0x7DE6)), ax));	// 85279 mov     [si-7DE6h], ax ;~ 2A05:06E4
cs=0x2a05;eip=0x0006e8; 	X(MOV(*(dw*)(raddr(ds,si-0x7DE4)), dx));	// 85280 mov     [si-7DE4h], dx ;~ 2A05:06E8
cs=0x2a05;eip=0x0006ec; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 85281 les     bx, [bp+arg_2] ;~ 2A05:06EC
cs=0x2a05;eip=0x0006ef; 	T(CMP(*(raddr(es,bx+0x43)), 0x10));	// 85282 cmp     byte ptr es:[bx+43h], 10h ;~ 2A05:06EF
cs=0x2a05;eip=0x0006f4; 	J(JNC(loc_38d30));	// 85283 jnb     short loc_38D30 ;~ 2A05:06F4
cs=0x2a05;eip=0x0006f6; 	T(MOV(al, *(raddr(es,bx+0x43))));	// 85284 mov     al, es:[bx+43h] ;~ 2A05:06F6
cs=0x2a05;eip=0x0006fa; 	X(MOV(*(raddr(ds,si-0x7DBD)), al));	// 85285 mov     [si-7DBDh], al ;~ 2A05:06FA
cs=0x2a05;eip=0x0006fe; 	J(JMP(loc_38d43));	// 85286 jmp     short loc_38D43 ;~ 2A05:06FE
loc_38d30:
	// 9664 
cs=0x2a05;eip=0x000700; 	T(MOV(ax, 0x4C));	// 85290 mov     ax, 4Ch ; 'L' ;~ 2A05:0700
cs=0x2a05;eip=0x000703; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 85291 imul    [bp+arg_0] ;~ 2A05:0703
cs=0x2a05;eip=0x000706; 	T(MOV(bx, ax));	// 85292 mov     bx, ax ;~ 2A05:0706
cs=0x2a05;eip=0x000708; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_0))));	// 85293 mov     al, byte ptr [bp+arg_0] ;~ 2A05:0708
cs=0x2a05;eip=0x00070b; 	T(AND(al, 0x0F));	// 85294 and     al, 0Fh ;~ 2A05:070B
cs=0x2a05;eip=0x00070d; 	T(INC(al));	// 85295 inc     al ;~ 2A05:070D
cs=0x2a05;eip=0x00070f; 	X(MOV(*(raddr(ds,bx-0x7DBD)), al));	// 85296 mov     [bx-7DBDh], al ;~ 2A05:070F
loc_38d43:
	// 9665 
cs=0x2a05;eip=0x000713; 	T(CMP(byte_40634, 0));	// 85299 cmp     byte_40634, 0 ;~ 2A05:0713
cs=0x2a05;eip=0x000718; 	J(JNZ(loc_38dac));	// 85300 jnz     short loc_38DAC ;~ 2A05:0718
cs=0x2a05;eip=0x00071a; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 85301 mov     [bp+var_2], 0 ;~ 2A05:071A
cs=0x2a05;eip=0x00071f; 	T(MOV(al, byte_459d2));	// 85302 mov     al, byte_459D2 ;~ 2A05:071F
cs=0x2a05;eip=0x000722; 	T(SUB(ah, ah));	// 85303 sub     ah, ah ;~ 2A05:0722
cs=0x2a05;eip=0x000724; 	T(OR(ax, ax));	// 85304 or      ax, ax ;~ 2A05:0724
cs=0x2a05;eip=0x000726; 	J(JNZ(loc_38d5b));	// 85305 jnz     short loc_38D5B ;~ 2A05:0726
cs=0x2a05;eip=0x000728; 	J(JMP(loc_38dde));	// 85306 jmp     loc_38DDE ;~ 2A05:0728
loc_38d5b:
	// 9666 
cs=0x2a05;eip=0x00072b; 	T(MOV(ax, 0x4C));	// 85310 mov     ax, 4Ch ; 'L' ;~ 2A05:072B
cs=0x2a05;eip=0x00072e; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 85311 imul    [bp+arg_0] ;~ 2A05:072E
cs=0x2a05;eip=0x000731; 	T(ADD(ax, 0x81FC));	// 85312 add     ax, 81FCh ;~ 2A05:0731
cs=0x2a05;eip=0x000734; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 85313 mov     [bp+var_4], ax ;~ 2A05:0734
cs=0x2a05;eip=0x000737; 	T(MOV(si, 0x0A2B6));	// 85314 mov     si, 0A2B6h ;~ 2A05:0737
cs=0x2a05;eip=0x00073a; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_2))));	// 85315 mov     di, [bp+var_2] ;~ 2A05:073A
loc_38d6d:
	// 9667 
cs=0x2a05;eip=0x00073d; 	T(MOV(al, *(raddr(ds,si))));	// 85318 mov     al, [si] ;~ 2A05:073D
cs=0x2a05;eip=0x00073f; 	T(SUB(ah, ah));	// 85319 sub     ah, ah ;~ 2A05:073F
cs=0x2a05;eip=0x000741; 	T(CMP(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 85320 cmp     ax, [bp+arg_0] ;~ 2A05:0741
cs=0x2a05;eip=0x000744; 	J(JNZ(loc_38d97));	// 85321 jnz     short loc_38D97 ;~ 2A05:0744
cs=0x2a05;eip=0x000746; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 85322 push    word ptr [bp+arg_2+2] ;~ 2A05:0746
cs=0x2a05;eip=0x000749; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 85323 push    word ptr [bp+arg_2] ;~ 2A05:0749
cs=0x2a05;eip=0x00074c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 85324 push    [bp+var_4] ;~ 2A05:074C
cs=0x2a05;eip=0x00074f; 	X(PUSH(si));	// 85325 push    si ;~ 2A05:074F
cs=0x2a05;eip=0x000750; 	X(PUSH(di));	// 85326 push    di ;~ 2A05:0750
cs=0x2a05;eip=0x000751; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 85327 mov     ax, word ptr audiodriverbinary ;~ 2A05:0751
cs=0x2a05;eip=0x000754; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 85328 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:0754
cs=0x2a05;eip=0x000758; 	T(ADD(ax, 0x21));	// 85329 add     ax, 21h ; '!' ;~ 2A05:0758
cs=0x2a05;eip=0x00075b; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a+2))), dx));	// 85330 mov     word ptr [bp+var_A+2], dx ;~ 2A05:075B
cs=0x2a05;eip=0x00075e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a))), ax));	// 85331 mov     word ptr [bp+var_A], ax ;~ 2A05:075E
cs=0x2a05;eip=0x000761; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_a))));	// 85332 call    [bp+var_A] ;~ 2A05:0761
cs=0x2a05;eip=0x000764; 	T(ADD(sp, 0x0A));	// 85333 add     sp, 0Ah ;~ 2A05:0764
loc_38d97:
	// 9668 
cs=0x2a05;eip=0x000767; 	T(ADD(si, 0x2E));	// 85336 add     si, 2Eh ; '.' ;~ 2A05:0767
cs=0x2a05;eip=0x00076a; 	T(INC(di));	// 85337 inc     di ;~ 2A05:076A
cs=0x2a05;eip=0x00076b; 	T(MOV(ax, di));	// 85338 mov     ax, di ;~ 2A05:076B
cs=0x2a05;eip=0x00076d; 	T(MOV(cl, byte_459d2));	// 85339 mov     cl, byte_459D2 ;~ 2A05:076D
cs=0x2a05;eip=0x000771; 	T(SUB(ch, ch));	// 85340 sub     ch, ch ;~ 2A05:0771
cs=0x2a05;eip=0x000773; 	T(CMP(ax, cx));	// 85341 cmp     ax, cx ;~ 2A05:0773
cs=0x2a05;eip=0x000775; 	J(JC(loc_38d6d));	// 85342 jb      short loc_38D6D ;~ 2A05:0775
cs=0x2a05;eip=0x000777; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), di));	// 85343 mov     [bp+var_2], di ;~ 2A05:0777
cs=0x2a05;eip=0x00077a; 	J(JMP(loc_38dde));	// 85344 jmp     short loc_38DDE ;~ 2A05:077A
loc_38dac:
	// 9669 
cs=0x2a05;eip=0x00077c; 	T(MOV(ax, 0x4C));	// 85348 mov     ax, 4Ch ; 'L' ;~ 2A05:077C
cs=0x2a05;eip=0x00077f; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 85349 imul    [bp+arg_0] ;~ 2A05:077F
cs=0x2a05;eip=0x000782; 	T(MOV(si, ax));	// 85350 mov     si, ax ;~ 2A05:0782
cs=0x2a05;eip=0x000784; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 85351 push    word ptr [bp+arg_2+2] ;~ 2A05:0784
cs=0x2a05;eip=0x000787; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 85352 push    word ptr [bp+arg_2] ;~ 2A05:0787
cs=0x2a05;eip=0x00078a; 	T(ADD(ax, 0x81FC));	// 85353 add     ax, 81FCh ;~ 2A05:078A
cs=0x2a05;eip=0x00078d; 	X(PUSH(ax));	// 85354 push    ax ;~ 2A05:078D
cs=0x2a05;eip=0x00078e; 	T(SUB(ax, ax));	// 85355 sub     ax, ax ;~ 2A05:078E
cs=0x2a05;eip=0x000790; 	X(PUSH(ax));	// 85356 push    ax ;~ 2A05:0790
cs=0x2a05;eip=0x000791; 	T(MOV(al, *(raddr(ds,si-0x7DBD))));	// 85357 mov     al, [si-7DBDh] ;~ 2A05:0791
cs=0x2a05;eip=0x000795; 	T(SUB(ah, ah));	// 85358 sub     ah, ah ;~ 2A05:0795
cs=0x2a05;eip=0x000797; 	X(PUSH(ax));	// 85359 push    ax ;~ 2A05:0797
cs=0x2a05;eip=0x000798; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 85360 mov     ax, word ptr audiodriverbinary ;~ 2A05:0798
cs=0x2a05;eip=0x00079b; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 85361 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:079B
cs=0x2a05;eip=0x00079f; 	T(ADD(ax, 0x21));	// 85362 add     ax, 21h ; '!' ;~ 2A05:079F
cs=0x2a05;eip=0x0007a2; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a+2))), dx));	// 85363 mov     word ptr [bp+var_A+2], dx ;~ 2A05:07A2
cs=0x2a05;eip=0x0007a5; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a))), ax));	// 85364 mov     word ptr [bp+var_A], ax ;~ 2A05:07A5
cs=0x2a05;eip=0x0007a8; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_a))));	// 85365 call    [bp+var_A] ;~ 2A05:07A8
cs=0x2a05;eip=0x0007ab; 	T(ADD(sp, 0x0A));	// 85366 add     sp, 0Ah ;~ 2A05:07AB
loc_38dde:
	// 9670 
cs=0x2a05;eip=0x0007ae; 	X(POP(ds));	// 85370 pop     ds ;~ 2A05:07AE
cs=0x2a05;eip=0x0007af; 	X(POP(si));	// 85371 pop     si ;~ 2A05:07AF
cs=0x2a05;eip=0x0007b0; 	X(POP(di));	// 85372 pop     di ;~ 2A05:07B0
cs=0x2a05;eip=0x0007b1; 	T(MOV(sp, bp));	// 85373 mov     sp, bp ;~ 2A05:07B1
cs=0x2a05;eip=0x0007b3; 	X(POP(bp));	// 85374 pop     bp ;~ 2A05:07B3
cs=0x2a05;eip=0x0007b4; 	J(RETF(0));	// 85375 retf ;~ 2A05:07B4

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_38d30: 	goto loc_38d30;
        case m2c::kloc_38d43: 	goto loc_38d43;
        case m2c::kloc_38d5b: 	goto loc_38d5b;
        case m2c::kloc_38d6d: 	goto loc_38d6d;
        case m2c::kloc_38d97: 	goto loc_38d97;
        case m2c::kloc_38dac: 	goto loc_38dac;
        case m2c::kloc_38dde: 	goto loc_38dde;
        case m2c::ksub_38cf8: 	goto sub_38cf8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_38de6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_38de6:
    _begin:
#undef var_12
#define var_12 -0x12
	// 85388 var_12          = dword ptr -12h ;~ 2A05:07B6
#undef var_e
#define var_e -0x0E
	// 85389 var_E           = dword ptr -0Eh ;~ 2A05:07B6
#undef var_a
#define var_a -0x0A
	// 85390 var_A           = word ptr -0Ah ;~ 2A05:07B6
#undef var_8
#define var_8 -8
	// 85391 var_8           = word ptr -8 ;~ 2A05:07B6
#undef var_6
#define var_6 -6
	// 85392 var_6           = word ptr -6 ;~ 2A05:07B6
#undef var_4
#define var_4 -4
	// 85393 var_4           = dword ptr -4 ;~ 2A05:07B6
#undef arg_0
#define arg_0 6
	// 85394 arg_0           = word ptr  6 ;~ 2A05:07B6
#undef arg_2
#define arg_2 8
	// 85395 arg_2           = word ptr  8 ;~ 2A05:07B6
cs=0x2a05;eip=0x0007b6; 	X(PUSH(bp));	// 85397 push    bp ;~ 2A05:07B6
cs=0x2a05;eip=0x0007b7; 	T(MOV(bp, sp));	// 85398 mov     bp, sp ;~ 2A05:07B7
cs=0x2a05;eip=0x0007b9; 	T(SUB(sp, 0x12));	// 85399 sub     sp, 12h ;~ 2A05:07B9
cs=0x2a05;eip=0x0007bc; 	X(PUSH(si));	// 85400 push    si ;~ 2A05:07BC
cs=0x2a05;eip=0x0007bd; 	X(PUSH(ds));	// 85401 push    ds ;~ 2A05:07BD
cs=0x2a05;eip=0x0007be; 	T(MOV(ax, seg_offset(dseg)));	// 85402 mov     ax, seg dseg ;~ 2A05:07BE
cs=0x2a05;eip=0x0007c1; 	T(MOV(ds, ax));	// 85403 mov     ds, ax ;~ 2A05:07C1
cs=0x2a05;eip=0x0007c3; 	T(MOV(ax, 0x4C));	// 85404 mov     ax, 4Ch ; 'L' ;~ 2A05:07C3
cs=0x2a05;eip=0x0007c6; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_2))));	// 85405 imul    [bp+arg_2] ;~ 2A05:07C6
cs=0x2a05;eip=0x0007c9; 	T(ADD(ax, 0x81FC));	// 85406 add     ax, 81FCh ;~ 2A05:07C9
cs=0x2a05;eip=0x0007cc; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 85407 mov     [bp+var_8], ax ;~ 2A05:07CC
cs=0x2a05;eip=0x0007cf; 	T(MOV(bx, ax));	// 85408 mov     bx, ax ;~ 2A05:07CF
cs=0x2a05;eip=0x0007d1; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1E))));	// 85409 mov     ax, [bx+1Eh] ;~ 2A05:07D1
cs=0x2a05;eip=0x0007d4; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x20))));	// 85410 mov     dx, [bx+20h] ;~ 2A05:07D4
cs=0x2a05;eip=0x0007d7; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 85411 mov     word ptr [bp+var_4], ax ;~ 2A05:07D7
cs=0x2a05;eip=0x0007da; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 85412 mov     word ptr [bp+var_4+2], dx ;~ 2A05:07DA
cs=0x2a05;eip=0x0007dd; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 85413 les     bx, [bp+var_4] ;~ 2A05:07DD
cs=0x2a05;eip=0x0007e0; 	T(CMP(*(raddr(es,bx+5)), 5));	// 85414 cmp     byte ptr es:[bx+5], 5 ;~ 2A05:07E0
cs=0x2a05;eip=0x0007e5; 	J(JZ(loc_38e1a));	// 85415 jz      short loc_38E1A ;~ 2A05:07E5
cs=0x2a05;eip=0x0007e7; 	J(JMP(loc_38e9e));	// 85416 jmp     loc_38E9E ;~ 2A05:07E7
loc_38e1a:
	// 9671 
cs=0x2a05;eip=0x0007ea; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 85420 mov     bx, [bp+arg_0] ;~ 2A05:07EA
cs=0x2a05;eip=0x0007ed; 	T(MOV(al, *(raddr(ds,bx+4))));	// 85421 mov     al, [bx+4] ;~ 2A05:07ED
cs=0x2a05;eip=0x0007f0; 	T(SUB(ah, ah));	// 85422 sub     ah, ah ;~ 2A05:07F0
cs=0x2a05;eip=0x0007f2; 	T(SUB(ax, 0x18));	// 85423 sub     ax, 18h         ; switch 16 cases ;~ 2A05:07F2
cs=0x2a05;eip=0x0007f5; 	T(CMP(ax, 0x0F));	// 85424 cmp     ax, 0Fh ;~ 2A05:07F5
cs=0x2a05;eip=0x0007f8; 	J(JA(def_38e2d));	// 85425 ja      short def_38E2D ; jumptable 00038E2D default case, cases 25,27-29,31,33,35,36,38 ;~ 2A05:07F8
cs=0x2a05;eip=0x0007fa; 	T(ADD(ax, ax));	// 85426 add     ax, ax ;~ 2A05:07FA
cs=0x2a05;eip=0x0007fc; 	T(XCHG(ax, bx));	// 85427 xchg    ax, bx ;~ 2A05:07FC
	cs=seg_offset(seg028);
cs=0x2a05;eip=0x0007fd; __disp=*(dw*)(((db*)&jpt_38e2d)+bx);
	J(return __dispatch_call(__disp, _state););	// 85428 jmp     cs:jpt_38E2D[bx] ; switch jump ;~ 2A05:07FD
loc_38e32:
	// 9672 
cs=0x2a05;eip=0x000802; 	T(MOV(ax, basdres));	// 85433 mov     ax, basdres     ; jumptable 00038E2D case 24 ;~ 2A05:0802
cs=0x2a05;eip=0x000805; 	T(MOV(dx, word_42a36));	// 85434 mov     dx, word_42A36 ;~ 2A05:0805
loc_38e39:
	// 9673 
cs=0x2a05;eip=0x000809; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 85438 mov     word ptr [bp+var_4], ax ;~ 2A05:0809
cs=0x2a05;eip=0x00080c; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 85439 mov     word ptr [bp+var_4+2], dx ;~ 2A05:080C
cs=0x2a05;eip=0x00080f; 	J(JMP(loc_38e9e));	// 85440 jmp     short loc_38E9E ;~ 2A05:080F
loc_38e42:
	// 9674 
cs=0x2a05;eip=0x000812; 	T(MOV(ax, snarres));	// 85446 mov     ax, snarres     ; jumptable 00038E2D case 26 ;~ 2A05:0812
cs=0x2a05;eip=0x000815; 	T(MOV(dx, word_43940));	// 85447 mov     dx, word_43940 ;~ 2A05:0815
cs=0x2a05;eip=0x000819; 	J(JMP(loc_38e39));	// 85448 jmp     short loc_38E39 ;~ 2A05:0819
loc_38e4c:
	// 9675 
cs=0x2a05;eip=0x00081c; 	T(MOV(ax, rideres));	// 85454 mov     ax, rideres     ; jumptable 00038E2D case 37 ;~ 2A05:081C
cs=0x2a05;eip=0x00081f; 	T(MOV(dx, word_454cc));	// 85455 mov     dx, word_454CC ;~ 2A05:081F
cs=0x2a05;eip=0x000823; 	J(JMP(loc_38e39));	// 85456 jmp     short loc_38E39 ;~ 2A05:0823
loc_38e56:
	// 9676 
cs=0x2a05;eip=0x000826; 	T(MOV(ax, crshres));	// 85462 mov     ax, crshres     ; jumptable 00038E2D case 39 ;~ 2A05:0826
cs=0x2a05;eip=0x000829; 	T(MOV(dx, word_4432e));	// 85463 mov     dx, word_4432E ;~ 2A05:0829
cs=0x2a05;eip=0x00082d; 	J(JMP(loc_38e39));	// 85464 jmp     short loc_38E39 ;~ 2A05:082D
loc_38e60:
	// 9677 
cs=0x2a05;eip=0x000830; 	T(MOV(ax, chhtres));	// 85470 mov     ax, chhtres     ; jumptable 00038E2D case 30 ;~ 2A05:0830
cs=0x2a05;eip=0x000833; 	T(MOV(dx, word_4392a));	// 85471 mov     dx, word_4392A ;~ 2A05:0833
cs=0x2a05;eip=0x000837; 	J(JMP(loc_38e39));	// 85472 jmp     short loc_38E39 ;~ 2A05:0837
loc_38e6a:
	// 9678 
cs=0x2a05;eip=0x00083a; 	T(MOV(ax, ohhtres));	// 85478 mov     ax, ohhtres     ; jumptable 00038E2D cases 32,34 ;~ 2A05:083A
cs=0x2a05;eip=0x00083d; 	T(MOV(dx, word_4436a));	// 85479 mov     dx, word_4436A ;~ 2A05:083D
cs=0x2a05;eip=0x000841; 	J(JMP(loc_38e39));	// 85480 jmp     short loc_38E39 ;~ 2A05:0841
def_38e2d:
	// 9679 
cs=0x2a05;eip=0x000844; 	T(MOV(ax, tommres));	// 85487 mov     ax, tommres     ; jumptable 00038E2D default case, cases 25,27-29,31,33,35,36,38 ;~ 2A05:0844
cs=0x2a05;eip=0x000847; 	T(MOV(dx, word_4394c));	// 85488 mov     dx, word_4394C ;~ 2A05:0847
cs=0x2a05;eip=0x00084b; 	J(JMP(loc_38e39));	// 85489 jmp     short loc_38E39 ;~ 2A05:084B
loc_38e9e:
	// 9680 
cs=0x2a05;eip=0x00086e; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 85512 mov     ax, word ptr [bp+var_4] ;~ 2A05:086E
cs=0x2a05;eip=0x000871; 	T(OR(ax, *(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 85513 or      ax, word ptr [bp+var_4+2] ;~ 2A05:0871
cs=0x2a05;eip=0x000874; 	J(JNZ(loc_38eb0));	// 85514 jnz     short loc_38EB0 ;~ 2A05:0874
loc_38ea6:
	// 9681 
cs=0x2a05;eip=0x000876; 	T(MOV(ax, 0x0FFFF));	// 85517 mov     ax, 0FFFFh ;~ 2A05:0876
cs=0x2a05;eip=0x000879; 	X(POP(ds));	// 85518 pop     ds ;~ 2A05:0879
cs=0x2a05;eip=0x00087a; 	X(POP(si));	// 85519 pop     si ;~ 2A05:087A
cs=0x2a05;eip=0x00087b; 	T(MOV(sp, bp));	// 85520 mov     sp, bp ;~ 2A05:087B
cs=0x2a05;eip=0x00087d; 	X(POP(bp));	// 85521 pop     bp ;~ 2A05:087D
cs=0x2a05;eip=0x00087e; 	J(RETF(0));	// 85522 retf ;~ 2A05:087E
loc_38eb0:
	// 9682 
cs=0x2a05;eip=0x000880; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 85527 push    [bp+var_8] ;~ 2A05:0880
cs=0x2a05;eip=0x000883; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 85528 push    word ptr [bp+var_4+2] ;~ 2A05:0883
cs=0x2a05;eip=0x000886; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 85529 push    word ptr [bp+var_4] ;~ 2A05:0886
cs=0x2a05;eip=0x000889; 	X(PUSH(cs));	// 85530 push    cs ;~ 2A05:0889
cs=0x2a05;eip=0x00088a; 	J(CALL(seg028_a98_proc,m2c::kloc_390c8));	// 85531 call    loc_390C8 ;~ 2A05:088A
cs=0x2a05;eip=0x00088d; 	T(ADD(sp, 6));	// 85532 add     sp, 6 ;~ 2A05:088D
cs=0x2a05;eip=0x000890; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 85533 mov     [bp+var_6], ax ;~ 2A05:0890
cs=0x2a05;eip=0x000893; 	T(CMP(ax, 0x0FFFF));	// 85534 cmp     ax, 0FFFFh ;~ 2A05:0893
cs=0x2a05;eip=0x000896; 	J(JZ(loc_38ea6));	// 85535 jz      short loc_38EA6 ;~ 2A05:0896
cs=0x2a05;eip=0x000898; 	T(MOV(ax, 0x2E));	// 85536 mov     ax, 2Eh ; '.' ;~ 2A05:0898
cs=0x2a05;eip=0x00089b; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_6))));	// 85537 imul    [bp+var_6] ;~ 2A05:089B
cs=0x2a05;eip=0x00089e; 	T(ADD(ax, 0x0A2B6));	// 85538 add     ax, 0A2B6h ;~ 2A05:089E
cs=0x2a05;eip=0x0008a1; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 85539 mov     [bp+var_A], ax ;~ 2A05:08A1
cs=0x2a05;eip=0x0008a4; 	T(MOV(bx, ax));	// 85540 mov     bx, ax ;~ 2A05:08A4
cs=0x2a05;eip=0x0008a6; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 85541 mov     ax, word ptr [bp+var_4] ;~ 2A05:08A6
cs=0x2a05;eip=0x0008a9; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 85542 mov     dx, word ptr [bp+var_4+2] ;~ 2A05:08A9
cs=0x2a05;eip=0x0008ac; 	T(CMP(*(dw*)(raddr(ds,bx+0x10)), ax));	// 85543 cmp     [bx+10h], ax ;~ 2A05:08AC
cs=0x2a05;eip=0x0008af; 	J(JNZ(loc_38ee6));	// 85544 jnz     short loc_38EE6 ;~ 2A05:08AF
cs=0x2a05;eip=0x0008b1; 	T(CMP(*(dw*)(raddr(ds,bx+0x12)), dx));	// 85545 cmp     [bx+12h], dx ;~ 2A05:08B1
cs=0x2a05;eip=0x0008b4; 	J(JZ(loc_38f18));	// 85546 jz      short loc_38F18 ;~ 2A05:08B4
loc_38ee6:
	// 9683 
cs=0x2a05;eip=0x0008b6; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 85549 mov     ax, word ptr [bp+var_4] ;~ 2A05:08B6
cs=0x2a05;eip=0x0008b9; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 85550 mov     dx, word ptr [bp+var_4+2] ;~ 2A05:08B9
cs=0x2a05;eip=0x0008bc; 	X(MOV(*(dw*)(raddr(ds,bx+0x10)), ax));	// 85551 mov     [bx+10h], ax ;~ 2A05:08BC
cs=0x2a05;eip=0x0008bf; 	X(MOV(*(dw*)(raddr(ds,bx+0x12)), dx));	// 85552 mov     [bx+12h], dx ;~ 2A05:08BF
cs=0x2a05;eip=0x0008c2; 	T(CMP(byte_40634, 0));	// 85553 cmp     byte_40634, 0 ;~ 2A05:08C2
cs=0x2a05;eip=0x0008c7; 	J(JNZ(loc_38f18));	// 85554 jnz     short loc_38F18 ;~ 2A05:08C7
cs=0x2a05;eip=0x0008c9; 	X(PUSH(dx));	// 85555 push    dx ;~ 2A05:08C9
cs=0x2a05;eip=0x0008ca; 	X(PUSH(ax));	// 85556 push    ax ;~ 2A05:08CA
cs=0x2a05;eip=0x0008cb; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 85557 push    [bp+var_8] ;~ 2A05:08CB
cs=0x2a05;eip=0x0008ce; 	X(PUSH(bx));	// 85558 push    bx ;~ 2A05:08CE
cs=0x2a05;eip=0x0008cf; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 85559 push    [bp+var_6] ;~ 2A05:08CF
cs=0x2a05;eip=0x0008d2; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 85560 mov     ax, word ptr audiodriverbinary ;~ 2A05:08D2
cs=0x2a05;eip=0x0008d5; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 85561 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:08D5
cs=0x2a05;eip=0x0008d9; 	T(ADD(ax, 0x21));	// 85562 add     ax, 21h ; '!' ;~ 2A05:08D9
cs=0x2a05;eip=0x0008dc; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e +2))), dx));	// 85563 mov     word ptr [bp+var_E+2], dx ;~ 2A05:08DC
cs=0x2a05;eip=0x0008df; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e))), ax));	// 85564 mov     word ptr [bp+var_E], ax ;~ 2A05:08DF
cs=0x2a05;eip=0x0008e2; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_e))));	// 85565 call    [bp+var_E] ;~ 2A05:08E2
cs=0x2a05;eip=0x0008e5; 	T(ADD(sp, 0x0A));	// 85566 add     sp, 0Ah ;~ 2A05:08E5
loc_38f18:
	// 9684 
cs=0x2a05;eip=0x0008e8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_a))));	// 85570 mov     bx, [bp+var_A] ;~ 2A05:08E8
cs=0x2a05;eip=0x0008eb; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_2))));	// 85571 mov     al, byte ptr [bp+arg_2] ;~ 2A05:08EB
cs=0x2a05;eip=0x0008ee; 	X(MOV(*(raddr(ds,bx)), al));	// 85572 mov     [bx], al ;~ 2A05:08EE
cs=0x2a05;eip=0x0008f0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 85573 mov     ax, [bp+var_8] ;~ 2A05:08F0
cs=0x2a05;eip=0x0008f3; 	X(MOV(*(dw*)(raddr(ds,bx+0x2A)), ax));	// 85574 mov     [bx+2Ah], ax ;~ 2A05:08F3
cs=0x2a05;eip=0x0008f6; 	X(MOV(*(raddr(ds,bx+1)), 1));	// 85575 mov     byte ptr [bx+1], 1 ;~ 2A05:08F6
cs=0x2a05;eip=0x0008fa; 	X(MOV(*(raddr(ds,bx+0x16)), 1));	// 85576 mov     byte ptr [bx+16h], 1 ;~ 2A05:08FA
cs=0x2a05;eip=0x0008fe; 	T(MOV(si, bx));	// 85577 mov     si, bx ;~ 2A05:08FE
cs=0x2a05;eip=0x000900; 	T(LES(si, *(dw*)(raddr(ds,si+0x10))));	// 85578 les     si, [si+10h] ;~ 2A05:0900
cs=0x2a05;eip=0x000903; 	T(MOV(ax, *(dw*)(raddr(es,si+0x1C))));	// 85579 mov     ax, es:[si+1Ch] ;~ 2A05:0903
cs=0x2a05;eip=0x000907; 	X(MOV(*(dw*)(raddr(ds,bx+0x14)), ax));	// 85580 mov     [bx+14h], ax ;~ 2A05:0907
cs=0x2a05;eip=0x00090a; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_8))));	// 85581 mov     si, [bp+var_8] ;~ 2A05:090A
cs=0x2a05;eip=0x00090d; 	T(MOV(al, *(raddr(ds,si+0x24))));	// 85582 mov     al, [si+24h] ;~ 2A05:090D
cs=0x2a05;eip=0x000910; 	X(MOV(*(raddr(ds,bx+2)), al));	// 85583 mov     [bx+2], al ;~ 2A05:0910
cs=0x2a05;eip=0x000913; 	T(SUB(ax, ax));	// 85584 sub     ax, ax ;~ 2A05:0913
cs=0x2a05;eip=0x000915; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), ax));	// 85585 mov     [bx+0Ah], ax ;~ 2A05:0915
cs=0x2a05;eip=0x000918; 	X(MOV(*(dw*)(raddr(ds,bx+8)), ax));	// 85586 mov     [bx+8], ax ;~ 2A05:0918
cs=0x2a05;eip=0x00091b; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 85587 mov     si, [bp+arg_0] ;~ 2A05:091B
cs=0x2a05;eip=0x00091e; 	T(MOV(ax, *(dw*)(raddr(ds,si+6))));	// 85588 mov     ax, [si+6] ;~ 2A05:091E
cs=0x2a05;eip=0x000921; 	T(MOV(dx, *(dw*)(raddr(ds,si+8))));	// 85589 mov     dx, [si+8] ;~ 2A05:0921
cs=0x2a05;eip=0x000924; 	T(SUB(ax, 1));	// 85590 sub     ax, 1 ;~ 2A05:0924
cs=0x2a05;eip=0x000927; 	T(SBB(dx, 0));	// 85591 sbb     dx, 0 ;~ 2A05:0927
cs=0x2a05;eip=0x00092a; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), ax));	// 85592 mov     [bx+0Ch], ax ;~ 2A05:092A
cs=0x2a05;eip=0x00092d; 	X(MOV(*(dw*)(raddr(ds,bx+0x0E)), dx));	// 85593 mov     [bx+0Eh], dx ;~ 2A05:092D
cs=0x2a05;eip=0x000930; 	T(LES(si, *(dd*)(raddr(ss,bp+var_4))));	// 85594 les     si, [bp+var_4] ;~ 2A05:0930
cs=0x2a05;eip=0x000933; 	T(MOV(ax, *(dw*)(raddr(es,si+0x2A))));	// 85595 mov     ax, es:[si+2Ah] ;~ 2A05:0933
cs=0x2a05;eip=0x000937; 	X(MOV(*(dw*)(raddr(ds,bx+0x18)), ax));	// 85596 mov     [bx+18h], ax ;~ 2A05:0937
cs=0x2a05;eip=0x00093a; 	T(MOV(ax, *(dw*)(raddr(es,si+0x2C))));	// 85597 mov     ax, es:[si+2Ch] ;~ 2A05:093A
cs=0x2a05;eip=0x00093e; 	X(MOV(*(dw*)(raddr(ds,bx+0x1A)), ax));	// 85598 mov     [bx+1Ah], ax ;~ 2A05:093E
cs=0x2a05;eip=0x000941; 	T(MOV(ax, *(dw*)(raddr(es,si+0x30))));	// 85599 mov     ax, es:[si+30h] ;~ 2A05:0941
cs=0x2a05;eip=0x000945; 	X(MOV(*(dw*)(raddr(ds,bx+0x24)), ax));	// 85600 mov     [bx+24h], ax ;~ 2A05:0945
cs=0x2a05;eip=0x000948; 	X(MOV(*(dw*)(raddr(ds,bx+0x1C)), 0));	// 85601 mov     word ptr [bx+1Ch], 0 ;~ 2A05:0948
cs=0x2a05;eip=0x00094d; 	T(MOV(al, *(raddr(es,si+0x34))));	// 85602 mov     al, es:[si+34h] ;~ 2A05:094D
cs=0x2a05;eip=0x000951; 	X(MOV(*(raddr(ds,bx+0x26)), al));	// 85603 mov     [bx+26h], al ;~ 2A05:0951
cs=0x2a05;eip=0x000954; 	X(MOV(*(raddr(ds,bx+0x27)), 0));	// 85604 mov     byte ptr [bx+27h], 0 ;~ 2A05:0954
cs=0x2a05;eip=0x000958; 	T(MOV(ax, *(dw*)(raddr(es,si+0x36))));	// 85605 mov     ax, es:[si+36h] ;~ 2A05:0958
cs=0x2a05;eip=0x00095c; 	X(MOV(*(dw*)(raddr(ds,bx+0x1E)), ax));	// 85606 mov     [bx+1Eh], ax ;~ 2A05:095C
cs=0x2a05;eip=0x00095f; 	T(MOV(ax, *(dw*)(raddr(es,si+0x38))));	// 85607 mov     ax, es:[si+38h] ;~ 2A05:095F
cs=0x2a05;eip=0x000963; 	X(MOV(*(dw*)(raddr(ds,bx+0x20)), ax));	// 85608 mov     [bx+20h], ax ;~ 2A05:0963
cs=0x2a05;eip=0x000966; 	X(MOV(*(raddr(ds,bx+0x28)), 0));	// 85609 mov     byte ptr [bx+28h], 0 ;~ 2A05:0966
cs=0x2a05;eip=0x00096a; 	X(MOV(*(raddr(ds,bx+0x22)), 0));	// 85610 mov     byte ptr [bx+22h], 0 ;~ 2A05:096A
cs=0x2a05;eip=0x00096e; 	X(MOV(*(raddr(ds,bx+0x29)), 0));	// 85611 mov     byte ptr [bx+29h], 0 ;~ 2A05:096E
cs=0x2a05;eip=0x000972; 	T(CMP(byte_40634, 0));	// 85612 cmp     byte_40634, 0 ;~ 2A05:0972
cs=0x2a05;eip=0x000977; 	J(JNZ(loc_38fae));	// 85613 jnz     short loc_38FAE ;~ 2A05:0977
cs=0x2a05;eip=0x000979; 	T(MOV(al, *(db*)(raddr(ss,bp+var_6))));	// 85614 mov     al, byte ptr [bp+var_6] ;~ 2A05:0979
cs=0x2a05;eip=0x00097c; 	J(JMP(loc_38fb4));	// 85615 jmp     short loc_38FB4 ;~ 2A05:097C
loc_38fae:
	// 9685 
cs=0x2a05;eip=0x00097e; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_8))));	// 85619 mov     si, [bp+var_8] ;~ 2A05:097E
cs=0x2a05;eip=0x000981; 	T(MOV(al, *(raddr(ds,si+0x47))));	// 85620 mov     al, [si+47h] ;~ 2A05:0981
loc_38fb4:
	// 9686 
cs=0x2a05;eip=0x000984; 	X(MOV(*(raddr(ds,bx+0x2C)), al));	// 85623 mov     [bx+2Ch], al ;~ 2A05:0984
cs=0x2a05;eip=0x000987; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 85624 mov     bx, [bp+arg_0] ;~ 2A05:0987
cs=0x2a05;eip=0x00098a; 	T(CMP(*(raddr(ds,bx+4)), 0x0FF));	// 85625 cmp     byte ptr [bx+4], 0FFh ;~ 2A05:098A
cs=0x2a05;eip=0x00098e; 	J(JNZ(loc_38ff2));	// 85626 jnz     short loc_38FF2 ;~ 2A05:098E
cs=0x2a05;eip=0x000990; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 85627 push    word ptr [bx] ;~ 2A05:0990
cs=0x2a05;eip=0x000992; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 85628 push    [bp+var_A] ;~ 2A05:0992
cs=0x2a05;eip=0x000995; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_a))));	// 85629 mov     bx, [bp+var_A] ;~ 2A05:0995
cs=0x2a05;eip=0x000998; 	T(MOV(al, *(raddr(ds,bx+0x2C))));	// 85630 mov     al, [bx+2Ch] ;~ 2A05:0998
cs=0x2a05;eip=0x00099b; 	T(SUB(ah, ah));	// 85631 sub     ah, ah ;~ 2A05:099B
cs=0x2a05;eip=0x00099d; 	X(PUSH(ax));	// 85632 push    ax ;~ 2A05:099D
cs=0x2a05;eip=0x00099e; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 85633 mov     ax, word ptr audiodriverbinary ;~ 2A05:099E
cs=0x2a05;eip=0x0009a1; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 85634 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:09A1
cs=0x2a05;eip=0x0009a5; 	T(ADD(ax, 0x24));	// 85635 add     ax, 24h ; '$' ;~ 2A05:09A5
cs=0x2a05;eip=0x0009a8; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e +2))), dx));	// 85636 mov     word ptr [bp+var_E+2], dx ;~ 2A05:09A8
cs=0x2a05;eip=0x0009ab; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e))), ax));	// 85637 mov     word ptr [bp+var_E], ax ;~ 2A05:09AB
cs=0x2a05;eip=0x0009ae; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_e))));	// 85638 call    [bp+var_E] ;~ 2A05:09AE
cs=0x2a05;eip=0x0009b1; 	T(ADD(sp, 6));	// 85639 add     sp, 6 ;~ 2A05:09B1
cs=0x2a05;eip=0x0009b4; 	T(CMP(byte_40634, 0));	// 85640 cmp     byte_40634, 0 ;~ 2A05:09B4
cs=0x2a05;eip=0x0009b9; 	J(JZ(loc_38ff2));	// 85641 jz      short loc_38FF2 ;~ 2A05:09B9
cs=0x2a05;eip=0x0009bb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 85642 mov     bx, [bp+arg_0] ;~ 2A05:09BB
cs=0x2a05;eip=0x0009be; 	X(MOV(*(raddr(ds,bx+4)), 0x3C));	// 85643 mov     byte ptr [bx+4], 3Ch ; '<' ;~ 2A05:09BE
loc_38ff2:
	// 9687 
cs=0x2a05;eip=0x0009c2; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 85647 push    word ptr [bp+var_4+2] ;~ 2A05:09C2
cs=0x2a05;eip=0x0009c5; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 85648 push    word ptr [bp+var_4] ;~ 2A05:09C5
cs=0x2a05;eip=0x0009c8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 85649 mov     bx, [bp+arg_0] ;~ 2A05:09C8
cs=0x2a05;eip=0x0009cb; 	T(MOV(al, *(raddr(ds,bx+5))));	// 85650 mov     al, [bx+5] ;~ 2A05:09CB
cs=0x2a05;eip=0x0009ce; 	T(SUB(ah, ah));	// 85651 sub     ah, ah ;~ 2A05:09CE
cs=0x2a05;eip=0x0009d0; 	X(PUSH(ax));	// 85652 push    ax ;~ 2A05:09D0
cs=0x2a05;eip=0x0009d1; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 85653 les     bx, [bp+var_4] ;~ 2A05:09D1
cs=0x2a05;eip=0x0009d4; 	T(MOV(al, *(raddr(es,bx+0x10))));	// 85654 mov     al, es:[bx+10h] ;~ 2A05:09D4
cs=0x2a05;eip=0x0009d8; 	T(CBW);	// 85655 cbw ;~ 2A05:09D8
cs=0x2a05;eip=0x0009d9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 85656 mov     bx, [bp+arg_0] ;~ 2A05:09D9
cs=0x2a05;eip=0x0009dc; 	T(MOV(cx, ax));	// 85657 mov     cx, ax ;~ 2A05:09DC
cs=0x2a05;eip=0x0009de; 	T(MOV(al, *(raddr(ds,bx+4))));	// 85658 mov     al, [bx+4] ;~ 2A05:09DE
cs=0x2a05;eip=0x0009e1; 	T(CBW);	// 85659 cbw ;~ 2A05:09E1
cs=0x2a05;eip=0x0009e2; 	T(ADD(ax, cx));	// 85660 add     ax, cx ;~ 2A05:09E2
cs=0x2a05;eip=0x0009e4; 	X(PUSH(ax));	// 85661 push    ax ;~ 2A05:09E4
cs=0x2a05;eip=0x0009e5; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 85662 push    [bp+var_8] ;~ 2A05:09E5
cs=0x2a05;eip=0x0009e8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 85663 push    [bp+var_A] ;~ 2A05:09E8
cs=0x2a05;eip=0x0009eb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_a))));	// 85664 mov     bx, [bp+var_A] ;~ 2A05:09EB
cs=0x2a05;eip=0x0009ee; 	T(MOV(al, *(raddr(ds,bx+0x2C))));	// 85665 mov     al, [bx+2Ch] ;~ 2A05:09EE
cs=0x2a05;eip=0x0009f1; 	T(SUB(ah, ah));	// 85666 sub     ah, ah ;~ 2A05:09F1
cs=0x2a05;eip=0x0009f3; 	X(PUSH(ax));	// 85667 push    ax ;~ 2A05:09F3
cs=0x2a05;eip=0x0009f4; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 85668 mov     ax, word ptr audiodriverbinary ;~ 2A05:09F4
cs=0x2a05;eip=0x0009f7; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 85669 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:09F7
cs=0x2a05;eip=0x0009fb; 	T(ADD(ax, 9));	// 85670 add     ax, 9 ;~ 2A05:09FB
cs=0x2a05;eip=0x0009fe; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_12+2))), dx));	// 85671 mov     word ptr [bp+var_12+2], dx ;~ 2A05:09FE
cs=0x2a05;eip=0x000a01; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_12))), ax));	// 85672 mov     word ptr [bp+var_12], ax ;~ 2A05:0A01
cs=0x2a05;eip=0x000a04; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_12))));	// 85673 call    [bp+var_12] ;~ 2A05:0A04
cs=0x2a05;eip=0x000a07; 	T(ADD(sp, 0x0E));	// 85674 add     sp, 0Eh ;~ 2A05:0A07
cs=0x2a05;eip=0x000a0a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 85675 mov     bx, [bp+arg_2] ;~ 2A05:0A0A
cs=0x2a05;eip=0x000a0d; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 85676 mov     si, [bp+arg_0] ;~ 2A05:0A0D
cs=0x2a05;eip=0x000a10; 	T(MOV(al, *(raddr(ds,si+4))));	// 85677 mov     al, [si+4] ;~ 2A05:0A10
cs=0x2a05;eip=0x000a13; 	X(MOV(*((&byte_44aca)+bx), al));	// 85678 mov     byte_44ACA[bx], al ;~ 2A05:0A13
cs=0x2a05;eip=0x000a17; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 85679 mov     ax, [bp+var_6] ;~ 2A05:0A17
cs=0x2a05;eip=0x000a1a; 	X(POP(ds));	// 85680 pop     ds ;~ 2A05:0A1A
cs=0x2a05;eip=0x000a1b; 	X(POP(si));	// 85681 pop     si ;~ 2A05:0A1B
cs=0x2a05;eip=0x000a1c; 	T(MOV(sp, bp));	// 85682 mov     sp, bp ;~ 2A05:0A1C
cs=0x2a05;eip=0x000a1e; 	X(POP(bp));	// 85683 pop     bp ;~ 2A05:0A1E
cs=0x2a05;eip=0x000a1f; 	J(RETF(0));	// 85684 retf ;~ 2A05:0A1F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kdef_38e2d: 	goto def_38e2d;
        case m2c::kloc_38e1a: 	goto loc_38e1a;
        case m2c::kloc_38e32: 	goto loc_38e32;
        case m2c::kloc_38e39: 	goto loc_38e39;
        case m2c::kloc_38e42: 	goto loc_38e42;
        case m2c::kloc_38e4c: 	goto loc_38e4c;
        case m2c::kloc_38e56: 	goto loc_38e56;
        case m2c::kloc_38e60: 	goto loc_38e60;
        case m2c::kloc_38e6a: 	goto loc_38e6a;
        case m2c::kloc_38e9e: 	goto loc_38e9e;
        case m2c::kloc_38ea6: 	goto loc_38ea6;
        case m2c::kloc_38eb0: 	goto loc_38eb0;
        case m2c::kloc_38ee6: 	goto loc_38ee6;
        case m2c::kloc_38f18: 	goto loc_38f18;
        case m2c::kloc_38fae: 	goto loc_38fae;
        case m2c::kloc_38fb4: 	goto loc_38fb4;
        case m2c::kloc_38ff2: 	goto loc_38ff2;
        case m2c::ksub_38de6: 	goto sub_38de6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_39050(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_39050:
    _begin:
#undef arg_0
#define arg_0 6
	// 85694 arg_0           = word ptr  6 ;~ 2A05:0A20
#undef arg_2
#define arg_2 8
	// 85695 arg_2           = word ptr  8 ;~ 2A05:0A20
cs=0x2a05;eip=0x000a20; 	X(PUSH(bp));	// 85697 push    bp ;~ 2A05:0A20
cs=0x2a05;eip=0x000a21; 	T(MOV(bp, sp));	// 85698 mov     bp, sp ;~ 2A05:0A21
cs=0x2a05;eip=0x000a23; 	X(PUSH(ds));	// 85699 push    ds ;~ 2A05:0A23
cs=0x2a05;eip=0x000a24; 	T(MOV(ax, seg_offset(dseg)));	// 85700 mov     ax, seg dseg ;~ 2A05:0A24
cs=0x2a05;eip=0x000a27; 	T(MOV(ds, ax));	// 85701 mov     ds, ax ;~ 2A05:0A27
cs=0x2a05;eip=0x000a29; 	X(MOV(byte_42a0e, 0x0FF));	// 85702 mov     byte_42A0E, 0FFh ;~ 2A05:0A29
cs=0x2a05;eip=0x000a2e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 85703 mov     ax, [bp+arg_0] ;~ 2A05:0A2E
cs=0x2a05;eip=0x000a31; 	X(MOV(word_42a0a, ax));	// 85704 mov     word_42A0A, ax ;~ 2A05:0A31
cs=0x2a05;eip=0x000a34; 	X(MOV(word_42a0c, 0));	// 85705 mov     word_42A0C, 0 ;~ 2A05:0A34
cs=0x2a05;eip=0x000a3a; 	X(MOV(word_42a10, 0x0FFE0));	// 85706 mov     word_42A10, 0FFE0h ;~ 2A05:0A3A
cs=0x2a05;eip=0x000a40; 	X(MOV(word_42a12, 0x0FFFF));	// 85707 mov     word_42A12, 0FFFFh ;~ 2A05:0A40
cs=0x2a05;eip=0x000a46; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 85708 push    [bp+arg_2] ;~ 2A05:0A46
cs=0x2a05;eip=0x000a49; 	T(MOV(ax, 0x729A));	// 85709 mov     ax, 729Ah ;~ 2A05:0A49
cs=0x2a05;eip=0x000a4c; 	X(PUSH(ax));	// 85710 push    ax ;~ 2A05:0A4C
cs=0x2a05;eip=0x000a4d; 	X(PUSH(cs));	// 85711 push    cs ;~ 2A05:0A4D
cs=0x2a05;eip=0x000a4e; 	J(CALL(sub_38de6,0));	// 85712 call    near ptr sub_38DE6 ;~ 2A05:0A4E
cs=0x2a05;eip=0x000a51; 	T(ADD(sp, 4));	// 85713 add     sp, 4 ;~ 2A05:0A51
cs=0x2a05;eip=0x000a54; 	X(POP(ds));	// 85714 pop     ds ;~ 2A05:0A54
cs=0x2a05;eip=0x000a55; 	X(POP(bp));	// 85715 pop     bp ;~ 2A05:0A55
cs=0x2a05;eip=0x000a56; 	J(RETF(0));	// 85716 retf ;~ 2A05:0A56

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_39050: 	goto sub_39050;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_39088(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_39088:
    _begin:
#undef var_4
#define var_4 -4
	// 85728 var_4           = dword ptr -4 ;~ 2A05:0A58
#undef arg_0
#define arg_0 6
	// 85729 arg_0           = word ptr  6 ;~ 2A05:0A58
#undef arg_2
#define arg_2 8
	// 85730 arg_2           = word ptr  8 ;~ 2A05:0A58
cs=0x2a05;eip=0x000a58; 	X(PUSH(bp));	// 85732 push    bp ;~ 2A05:0A58
cs=0x2a05;eip=0x000a59; 	T(MOV(bp, sp));	// 85733 mov     bp, sp ;~ 2A05:0A59
cs=0x2a05;eip=0x000a5b; 	T(SUB(sp, 4));	// 85734 sub     sp, 4 ;~ 2A05:0A5B
cs=0x2a05;eip=0x000a5e; 	X(PUSH(si));	// 85735 push    si ;~ 2A05:0A5E
cs=0x2a05;eip=0x000a5f; 	X(PUSH(ds));	// 85736 push    ds ;~ 2A05:0A5F
cs=0x2a05;eip=0x000a60; 	T(MOV(ax, seg_offset(dseg)));	// 85737 mov     ax, seg dseg ;~ 2A05:0A60
cs=0x2a05;eip=0x000a63; 	T(MOV(ds, ax));	// 85738 mov     ds, ax ;~ 2A05:0A63
cs=0x2a05;eip=0x000a65; 	T(MOV(ax, 0x2E));	// 85739 mov     ax, 2Eh ; '.' ;~ 2A05:0A65
cs=0x2a05;eip=0x000a68; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 85740 imul    [bp+arg_0] ;~ 2A05:0A68
cs=0x2a05;eip=0x000a6b; 	T(MOV(si, ax));	// 85741 mov     si, ax ;~ 2A05:0A6B
cs=0x2a05;eip=0x000a6d; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 85742 push    [bp+arg_2] ;~ 2A05:0A6D
cs=0x2a05;eip=0x000a70; 	T(ADD(ax, 0x0A2B6));	// 85743 add     ax, 0A2B6h ;~ 2A05:0A70
cs=0x2a05;eip=0x000a73; 	X(PUSH(ax));	// 85744 push    ax ;~ 2A05:0A73
cs=0x2a05;eip=0x000a74; 	T(MOV(al, *(raddr(ds,si-0x5D1E))));	// 85745 mov     al, [si-5D1Eh] ;~ 2A05:0A74
cs=0x2a05;eip=0x000a78; 	T(SUB(ah, ah));	// 85746 sub     ah, ah ;~ 2A05:0A78
cs=0x2a05;eip=0x000a7a; 	X(PUSH(ax));	// 85747 push    ax ;~ 2A05:0A7A
cs=0x2a05;eip=0x000a7b; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 85748 mov     ax, word ptr audiodriverbinary ;~ 2A05:0A7B
cs=0x2a05;eip=0x000a7e; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 85749 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:0A7E
cs=0x2a05;eip=0x000a82; 	T(ADD(ax, 0x24));	// 85750 add     ax, 24h ; '$' ;~ 2A05:0A82
cs=0x2a05;eip=0x000a85; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 85751 mov     word ptr [bp+var_4+2], dx ;~ 2A05:0A85
cs=0x2a05;eip=0x000a88; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 85752 mov     word ptr [bp+var_4], ax ;~ 2A05:0A88
cs=0x2a05;eip=0x000a8b; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_4))));	// 85753 call    [bp+var_4] ;~ 2A05:0A8B
cs=0x2a05;eip=0x000a8e; 	T(ADD(sp, 6));	// 85754 add     sp, 6 ;~ 2A05:0A8E
cs=0x2a05;eip=0x000a91; 	X(POP(ds));	// 85755 pop     ds ;~ 2A05:0A91
cs=0x2a05;eip=0x000a92; 	X(POP(si));	// 85756 pop     si ;~ 2A05:0A92
cs=0x2a05;eip=0x000a93; 	T(MOV(sp, bp));	// 85757 mov     sp, bp ;~ 2A05:0A93
cs=0x2a05;eip=0x000a95; 	X(POP(bp));	// 85758 pop     bp ;~ 2A05:0A95
cs=0x2a05;eip=0x000a96; 	J(RETF(0));	// 85759 retf ;~ 2A05:0A96

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_39088: 	goto sub_39088;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg028_a98_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg028_a98_proc:
    _begin:
loc_390c8:
	// 9688 
cs=0x2a05;eip=0x000a98; 	X(PUSH(bp));	// 85766 push    bp ;~ 2A05:0A98
cs=0x2a05;eip=0x000a99; 	T(MOV(bp, sp));	// 85767 mov     bp, sp ;~ 2A05:0A99
cs=0x2a05;eip=0x000a9b; 	T(SUB(sp, 0x1A));	// 85768 sub     sp, 1Ah ;~ 2A05:0A9B
cs=0x2a05;eip=0x000a9e; 	X(PUSH(di));	// 85769 push    di ;~ 2A05:0A9E
cs=0x2a05;eip=0x000a9f; 	X(PUSH(si));	// 85770 push    si ;~ 2A05:0A9F
cs=0x2a05;eip=0x000aa0; 	X(PUSH(ds));	// 85771 push    ds ;~ 2A05:0AA0
cs=0x2a05;eip=0x000aa1; 	T(MOV(ax, seg_offset(dseg)));	// 85772 mov     ax, seg dseg ;~ 2A05:0AA1
cs=0x2a05;eip=0x000aa4; 	T(MOV(ds, ax));	// 85773 mov     ds, ax ;~ 2A05:0AA4
cs=0x2a05;eip=0x000aa6; 	X(MOV(*(dw*)(raddr(ss,bp-0x10)), 0x0FFFF));	// 85774 mov     word ptr [bp-10h], 0FFFFh ;~ 2A05:0AA6
cs=0x2a05;eip=0x000aab; 	X(MOV(*(dw*)(raddr(ss,bp-0x0E)), 0x0FFFF));	// 85775 mov     word ptr [bp-0Eh], 0FFFFh ;~ 2A05:0AAB
cs=0x2a05;eip=0x000ab0; 	T(SUB(ax, ax));	// 85776 sub     ax, ax ;~ 2A05:0AB0
cs=0x2a05;eip=0x000ab2; 	X(MOV(*(dw*)(raddr(ss,bp-8)), ax));	// 85777 mov     [bp-8], ax ;~ 2A05:0AB2
cs=0x2a05;eip=0x000ab5; 	X(MOV(*(dw*)(raddr(ss,bp-0x0A)), ax));	// 85778 mov     [bp-0Ah], ax ;~ 2A05:0AB5
cs=0x2a05;eip=0x000ab8; 	X(MOV(*(dw*)(raddr(ss,bp-2)), ax));	// 85779 mov     [bp-2], ax ;~ 2A05:0AB8
cs=0x2a05;eip=0x000abb; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 85780 mov     [bp-4], ax ;~ 2A05:0ABB
cs=0x2a05;eip=0x000abe; 	T(LES(bx, *(dw*)(raddr(ss,bp+6))));	// 85781 les     bx, [bp+6] ;~ 2A05:0ABE
cs=0x2a05;eip=0x000ac1; 	T(CMP(*(dw*)(raddr(es,bx+0x0C)), ax));	// 85782 cmp     es:[bx+0Ch], ax ;~ 2A05:0AC1
cs=0x2a05;eip=0x000ac5; 	J(JNZ(loc_390fe));	// 85783 jnz     short loc_390FE ;~ 2A05:0AC5
loc_390f7:
	// 9689 
cs=0x2a05;eip=0x000ac7; 	T(MOV(ax, 0x0FFFF));	// 85787 mov     ax, 0FFFFh ;~ 2A05:0AC7
cs=0x2a05;eip=0x000aca; 	J(JMP(loc_39452));	// 85788 jmp     loc_39452 ;~ 2A05:0ACA
loc_390fe:
	// 9690 
cs=0x2a05;eip=0x000ace; 	T(CMP(byte_40634, 0));	// 85793 cmp     byte_40634, 0 ;~ 2A05:0ACE
cs=0x2a05;eip=0x000ad3; 	J(JNZ(loc_39108));	// 85794 jnz     short loc_39108 ;~ 2A05:0AD3
cs=0x2a05;eip=0x000ad5; 	J(JMP(loc_391f0));	// 85795 jmp     loc_391F0 ;~ 2A05:0AD5
loc_39108:
	// 9691 
cs=0x2a05;eip=0x000ad8; 	T(SUB(si, si));	// 85799 sub     si, si ;~ 2A05:0AD8
cs=0x2a05;eip=0x000ada; 	T(MOV(di, 0x0A2B6));	// 85800 mov     di, 0A2B6h ;~ 2A05:0ADA
loc_3910d:
	// 9692 
cs=0x2a05;eip=0x000add; 	T(MOV(cx, di));	// 85803 mov     cx, di ;~ 2A05:0ADD
cs=0x2a05;eip=0x000adf; 	T(MOV(bx, cx));	// 85804 mov     bx, cx ;~ 2A05:0ADF
cs=0x2a05;eip=0x000ae1; 	T(CMP(*(raddr(ds,bx+1)), 0));	// 85805 cmp     byte ptr [bx+1], 0 ;~ 2A05:0AE1
cs=0x2a05;eip=0x000ae5; 	J(JNZ(loc_39122));	// 85806 jnz     short loc_39122 ;~ 2A05:0AE5
loc_39117:
	// 9693 
cs=0x2a05;eip=0x000ae7; 	T(MOV(ax, si));	// 85809 mov     ax, si ;~ 2A05:0AE7
cs=0x2a05;eip=0x000ae9; 	X(MOV(*(dw*)(raddr(ss,bp-6)), si));	// 85810 mov     [bp-6], si ;~ 2A05:0AE9
cs=0x2a05;eip=0x000aec; 	X(MOV(*(dw*)(raddr(ss,bp-0x0C)), cx));	// 85811 mov     [bp-0Ch], cx ;~ 2A05:0AEC
cs=0x2a05;eip=0x000aef; 	J(JMP(loc_39452));	// 85812 jmp     loc_39452 ;~ 2A05:0AEF
loc_39122:
	// 9694 
cs=0x2a05;eip=0x000af2; 	T(MOV(bx, cx));	// 85816 mov     bx, cx ;~ 2A05:0AF2
cs=0x2a05;eip=0x000af4; 	T(CMP(*(raddr(ds,bx+1)), 1));	// 85817 cmp     byte ptr [bx+1], 1 ;~ 2A05:0AF4
cs=0x2a05;eip=0x000af8; 	J(JNZ(loc_3914d));	// 85818 jnz     short loc_3914D ;~ 2A05:0AF8
cs=0x2a05;eip=0x000afa; 	T(MOV(ax, *(dw*)(raddr(ss,bp-0x0A))));	// 85819 mov     ax, [bp-0Ah] ;~ 2A05:0AFA
cs=0x2a05;eip=0x000afd; 	T(MOV(dx, *(dw*)(raddr(ss,bp-8))));	// 85820 mov     dx, [bp-8] ;~ 2A05:0AFD
cs=0x2a05;eip=0x000b00; 	T(CMP(*(dw*)(raddr(ds,bx+0x0A)), dx));	// 85821 cmp     [bx+0Ah], dx ;~ 2A05:0B00
cs=0x2a05;eip=0x000b03; 	J(JC(loc_3914d));	// 85822 jb      short loc_3914D ;~ 2A05:0B03
cs=0x2a05;eip=0x000b05; 	J(JA(loc_3913c));	// 85823 ja      short loc_3913C ;~ 2A05:0B05
cs=0x2a05;eip=0x000b07; 	T(CMP(*(dw*)(raddr(ds,bx+8)), ax));	// 85824 cmp     [bx+8], ax ;~ 2A05:0B07
cs=0x2a05;eip=0x000b0a; 	J(JBE(loc_3914d));	// 85825 jbe     short loc_3914D ;~ 2A05:0B0A
loc_3913c:
	// 9695 
cs=0x2a05;eip=0x000b0c; 	T(MOV(bx, cx));	// 85828 mov     bx, cx ;~ 2A05:0B0C
cs=0x2a05;eip=0x000b0e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 85829 mov     ax, [bx+8] ;~ 2A05:0B0E
cs=0x2a05;eip=0x000b11; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 85830 mov     dx, [bx+0Ah] ;~ 2A05:0B11
cs=0x2a05;eip=0x000b14; 	X(MOV(*(dw*)(raddr(ss,bp-0x0A)), ax));	// 85831 mov     [bp-0Ah], ax ;~ 2A05:0B14
cs=0x2a05;eip=0x000b17; 	X(MOV(*(dw*)(raddr(ss,bp-8)), dx));	// 85832 mov     [bp-8], dx ;~ 2A05:0B17
cs=0x2a05;eip=0x000b1a; 	X(MOV(*(dw*)(raddr(ss,bp-0x10)), si));	// 85833 mov     [bp-10h], si ;~ 2A05:0B1A
loc_3914d:
	// 9696 
cs=0x2a05;eip=0x000b1d; 	T(MOV(bx, cx));	// 85837 mov     bx, cx ;~ 2A05:0B1D
cs=0x2a05;eip=0x000b1f; 	T(CMP(*(raddr(ds,bx+1)), 2));	// 85838 cmp     byte ptr [bx+1], 2 ;~ 2A05:0B1F
cs=0x2a05;eip=0x000b23; 	J(JNZ(loc_39178));	// 85839 jnz     short loc_39178 ;~ 2A05:0B23
cs=0x2a05;eip=0x000b25; 	T(MOV(ax, *(dw*)(raddr(ss,bp-4))));	// 85840 mov     ax, [bp-4] ;~ 2A05:0B25
cs=0x2a05;eip=0x000b28; 	T(MOV(dx, *(dw*)(raddr(ss,bp-2))));	// 85841 mov     dx, [bp-2] ;~ 2A05:0B28
cs=0x2a05;eip=0x000b2b; 	T(CMP(*(dw*)(raddr(ds,bx+0x0A)), dx));	// 85842 cmp     [bx+0Ah], dx ;~ 2A05:0B2B
cs=0x2a05;eip=0x000b2e; 	J(JC(loc_39178));	// 85843 jb      short loc_39178 ;~ 2A05:0B2E
cs=0x2a05;eip=0x000b30; 	J(JA(loc_39167));	// 85844 ja      short loc_39167 ;~ 2A05:0B30
cs=0x2a05;eip=0x000b32; 	T(CMP(*(dw*)(raddr(ds,bx+8)), ax));	// 85845 cmp     [bx+8], ax ;~ 2A05:0B32
cs=0x2a05;eip=0x000b35; 	J(JBE(loc_39178));	// 85846 jbe     short loc_39178 ;~ 2A05:0B35
loc_39167:
	// 9697 
cs=0x2a05;eip=0x000b37; 	T(MOV(bx, cx));	// 85849 mov     bx, cx ;~ 2A05:0B37
cs=0x2a05;eip=0x000b39; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 85850 mov     ax, [bx+8] ;~ 2A05:0B39
cs=0x2a05;eip=0x000b3c; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 85851 mov     dx, [bx+0Ah] ;~ 2A05:0B3C
cs=0x2a05;eip=0x000b3f; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 85852 mov     [bp-4], ax ;~ 2A05:0B3F
cs=0x2a05;eip=0x000b42; 	X(MOV(*(dw*)(raddr(ss,bp-2)), dx));	// 85853 mov     [bp-2], dx ;~ 2A05:0B42
cs=0x2a05;eip=0x000b45; 	X(MOV(*(dw*)(raddr(ss,bp-0x0E)), si));	// 85854 mov     [bp-0Eh], si ;~ 2A05:0B45
loc_39178:
	// 9698 
cs=0x2a05;eip=0x000b48; 	T(ADD(di, 0x2E));	// 85858 add     di, 2Eh ; '.' ;~ 2A05:0B48
cs=0x2a05;eip=0x000b4b; 	T(INC(si));	// 85859 inc     si ;~ 2A05:0B4B
cs=0x2a05;eip=0x000b4c; 	T(CMP(si, 0x10));	// 85860 cmp     si, 10h ;~ 2A05:0B4C
cs=0x2a05;eip=0x000b4f; 	J(JL(loc_3910d));	// 85861 jl      short loc_3910D ;~ 2A05:0B4F
cs=0x2a05;eip=0x000b51; 	X(MOV(*(dw*)(raddr(ss,bp-6)), si));	// 85862 mov     [bp-6], si ;~ 2A05:0B51
cs=0x2a05;eip=0x000b54; 	X(MOV(*(dw*)(raddr(ss,bp-0x0C)), cx));	// 85863 mov     [bp-0Ch], cx ;~ 2A05:0B54
cs=0x2a05;eip=0x000b57; 	T(CMP(*(dw*)(raddr(ss,bp-0x0E)), 0x0FFFF));	// 85864 cmp     word ptr [bp-0Eh], 0FFFFh ;~ 2A05:0B57
cs=0x2a05;eip=0x000b5b; 	J(JZ(loc_39194));	// 85865 jz      short loc_39194 ;~ 2A05:0B5B
loc_3918d:
	// 9699 
cs=0x2a05;eip=0x000b5d; 	T(MOV(ax, *(dw*)(raddr(ss,bp-0x0E))));	// 85868 mov     ax, [bp-0Eh] ;~ 2A05:0B5D
cs=0x2a05;eip=0x000b60; 	J(JMP(loc_39452));	// 85869 jmp     loc_39452 ;~ 2A05:0B60
loc_39194:
	// 9700 
cs=0x2a05;eip=0x000b64; 	T(CMP(*(dw*)(raddr(ss,bp-0x10)), 0x0FFFF));	// 85874 cmp     word ptr [bp-10h], 0FFFFh ;~ 2A05:0B64
cs=0x2a05;eip=0x000b68; 	J(JNZ(loc_3919d));	// 85875 jnz     short loc_3919D ;~ 2A05:0B68
cs=0x2a05;eip=0x000b6a; 	J(JMP(loc_390f7));	// 85876 jmp     loc_390F7 ;~ 2A05:0B6A
loc_3919d:
	// 9701 
cs=0x2a05;eip=0x000b6d; 	T(MOV(ax, 0x2E));	// 85880 mov     ax, 2Eh ; '.' ;~ 2A05:0B6D
cs=0x2a05;eip=0x000b70; 	X(IMUL1_2(*(dw*)(raddr(ss,bp-0x10))));	// 85881 imul    word ptr [bp-10h] ;~ 2A05:0B70
cs=0x2a05;eip=0x000b73; 	T(MOV(si, ax));	// 85882 mov     si, ax ;~ 2A05:0B73
cs=0x2a05;eip=0x000b75; 	T(ADD(ax, 0x0A2B6));	// 85883 add     ax, 0A2B6h ;~ 2A05:0B75
cs=0x2a05;eip=0x000b78; 	X(PUSH(ax));	// 85884 push    ax ;~ 2A05:0B78
cs=0x2a05;eip=0x000b79; 	T(MOV(al, *(raddr(ds,si-0x5D1E))));	// 85885 mov     al, [si-5D1Eh] ;~ 2A05:0B79
cs=0x2a05;eip=0x000b7d; 	T(SUB(ah, ah));	// 85886 sub     ah, ah ;~ 2A05:0B7D
cs=0x2a05;eip=0x000b7f; 	X(PUSH(ax));	// 85887 push    ax ;~ 2A05:0B7F
cs=0x2a05;eip=0x000b80; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 85888 mov     ax, word ptr audiodriverbinary ;~ 2A05:0B80
cs=0x2a05;eip=0x000b83; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 85889 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:0B83
cs=0x2a05;eip=0x000b87; 	T(ADD(ax, 0x0C));	// 85890 add     ax, 0Ch ;~ 2A05:0B87
cs=0x2a05;eip=0x000b8a; 	X(MOV(*(dw*)(raddr(ss,bp-0x14)), dx));	// 85891 mov     [bp-14h], dx ;~ 2A05:0B8A
cs=0x2a05;eip=0x000b8d; 	X(MOV(*(dw*)(raddr(ss,bp-0x16)), ax));	// 85892 mov     [bp-16h], ax ;~ 2A05:0B8D
cs=0x2a05;eip=0x000b90; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp-0x16))));	// 85893 call    dword ptr [bp-16h] ;~ 2A05:0B90
cs=0x2a05;eip=0x000b93; 	T(ADD(sp, 4));	// 85894 add     sp, 4 ;~ 2A05:0B93
cs=0x2a05;eip=0x000b96; 	T(MOV(ax, si));	// 85895 mov     ax, si ;~ 2A05:0B96
cs=0x2a05;eip=0x000b98; 	T(ADD(ax, 0x0A2B6));	// 85896 add     ax, 0A2B6h ;~ 2A05:0B98
cs=0x2a05;eip=0x000b9b; 	X(PUSH(ax));	// 85897 push    ax ;~ 2A05:0B9B
cs=0x2a05;eip=0x000b9c; 	T(MOV(al, *(raddr(ds,si-0x5D1E))));	// 85898 mov     al, [si-5D1Eh] ;~ 2A05:0B9C
cs=0x2a05;eip=0x000ba0; 	T(SUB(ah, ah));	// 85899 sub     ah, ah ;~ 2A05:0BA0
cs=0x2a05;eip=0x000ba2; 	X(PUSH(ax));	// 85900 push    ax ;~ 2A05:0BA2
loc_391d3:
	// 9702 
cs=0x2a05;eip=0x000ba3; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 85903 mov     ax, word ptr audiodriverbinary ;~ 2A05:0BA3
cs=0x2a05;eip=0x000ba6; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 85904 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:0BA6
cs=0x2a05;eip=0x000baa; 	T(ADD(ax, 0x0F));	// 85905 add     ax, 0Fh ;~ 2A05:0BAA
cs=0x2a05;eip=0x000bad; 	X(MOV(*(dw*)(raddr(ss,bp-0x14)), dx));	// 85906 mov     [bp-14h], dx ;~ 2A05:0BAD
cs=0x2a05;eip=0x000bb0; 	X(MOV(*(dw*)(raddr(ss,bp-0x16)), ax));	// 85907 mov     [bp-16h], ax ;~ 2A05:0BB0
cs=0x2a05;eip=0x000bb3; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp-0x16))));	// 85908 call    dword ptr [bp-16h] ;~ 2A05:0BB3
cs=0x2a05;eip=0x000bb6; 	T(ADD(sp, 4));	// 85909 add     sp, 4 ;~ 2A05:0BB6
cs=0x2a05;eip=0x000bb9; 	T(MOV(ax, *(dw*)(raddr(ss,bp-0x10))));	// 85910 mov     ax, [bp-10h] ;~ 2A05:0BB9
cs=0x2a05;eip=0x000bbc; 	J(JMP(loc_39452));	// 85911 jmp     loc_39452 ;~ 2A05:0BBC
loc_391f0:
	// 9703 
cs=0x2a05;eip=0x000bc0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0A))));	// 85916 mov     bx, [bp+0Ah] ;~ 2A05:0BC0
cs=0x2a05;eip=0x000bc3; 	T(MOV(si, bx));	// 85917 mov     si, bx ;~ 2A05:0BC3
cs=0x2a05;eip=0x000bc5; 	T(MOV(al, *(raddr(ds,si+0x16))));	// 85918 mov     al, [si+16h] ;~ 2A05:0BC5
cs=0x2a05;eip=0x000bc8; 	T(CMP(*(raddr(ds,bx+0x15)), al));	// 85919 cmp     [bx+15h], al ;~ 2A05:0BC8
cs=0x2a05;eip=0x000bcb; 	J(JNC(loc_39200));	// 85920 jnb     short loc_39200 ;~ 2A05:0BCB
cs=0x2a05;eip=0x000bcd; 	J(JMP(loc_39344));	// 85921 jmp     loc_39344 ;~ 2A05:0BCD
loc_39200:
	// 9704 
cs=0x2a05;eip=0x000bd0; 	X(MOV(*(dw*)(raddr(ss,bp-6)), 0));	// 85925 mov     word ptr [bp-6], 0 ;~ 2A05:0BD0
cs=0x2a05;eip=0x000bd5; 	T(MOV(al, byte_459d2));	// 85926 mov     al, byte_459D2 ;~ 2A05:0BD5
cs=0x2a05;eip=0x000bd8; 	T(SUB(ah, ah));	// 85927 sub     ah, ah ;~ 2A05:0BD8
cs=0x2a05;eip=0x000bda; 	T(OR(ax, ax));	// 85928 or      ax, ax ;~ 2A05:0BDA
cs=0x2a05;eip=0x000bdc; 	J(JNZ(loc_39211));	// 85929 jnz     short loc_39211 ;~ 2A05:0BDC
cs=0x2a05;eip=0x000bde; 	J(JMP(loc_392c5));	// 85930 jmp     loc_392C5 ;~ 2A05:0BDE
loc_39211:
	// 9705 
cs=0x2a05;eip=0x000be1; 	X(MOV(*(dw*)(raddr(ss,bp-0x12)), ax));	// 85934 mov     [bp-12h], ax ;~ 2A05:0BE1
cs=0x2a05;eip=0x000be4; 	X(MOV(*(dw*)(raddr(ss,bp-0x18)), 0x4E9E));	// 85935 mov     word ptr [bp-18h], 4E9Eh ;~ 2A05:0BE4
cs=0x2a05;eip=0x000be9; 	X(MOV(*(dw*)(raddr(ss,bp-0x1A)), 0x0A2B6));	// 85936 mov     word ptr [bp-1Ah], 0A2B6h ;~ 2A05:0BE9
cs=0x2a05;eip=0x000bee; 	T(MOV(di, *(dw*)(raddr(ss,bp-6))));	// 85937 mov     di, [bp-6] ;~ 2A05:0BEE
cs=0x2a05;eip=0x000bf1; 	T(MOV(si, *(dw*)(raddr(ss,bp-0x0C))));	// 85938 mov     si, [bp-0Ch] ;~ 2A05:0BF1
cs=0x2a05;eip=0x000bf4; 	T(MOV(cx, bx));	// 85939 mov     cx, bx ;~ 2A05:0BF4
loc_39226:
	// 9706 
cs=0x2a05;eip=0x000bf6; 	T(MOV(bx, *(dw*)(raddr(ss,bp-0x18))));	// 85942 mov     bx, [bp-18h] ;~ 2A05:0BF6
cs=0x2a05;eip=0x000bf9; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 85943 mov     ax, [bx] ;~ 2A05:0BF9
cs=0x2a05;eip=0x000bfb; 	T(LES(bx, *(dw*)(raddr(ss,bp+6))));	// 85944 les     bx, [bp+6] ;~ 2A05:0BFB
cs=0x2a05;eip=0x000bfe; 	T(TEST(*(dw*)(raddr(es,bx+0x0C)), ax));	// 85945 test    es:[bx+0Ch], ax ;~ 2A05:0BFE
cs=0x2a05;eip=0x000c02; 	J(JZ(loc_392ac));	// 85946 jz      short loc_392AC ;~ 2A05:0C02
cs=0x2a05;eip=0x000c04; 	T(MOV(si, *(dw*)(raddr(ss,bp-0x1A))));	// 85947 mov     si, [bp-1Ah] ;~ 2A05:0C04
cs=0x2a05;eip=0x000c07; 	T(MOV(bx, cx));	// 85948 mov     bx, cx ;~ 2A05:0C07
cs=0x2a05;eip=0x000c09; 	T(MOV(al, *(raddr(ds,si))));	// 85949 mov     al, [si] ;~ 2A05:0C09
cs=0x2a05;eip=0x000c0b; 	T(CMP(*(raddr(ds,bx+0x23)), al));	// 85950 cmp     [bx+23h], al ;~ 2A05:0C0B
cs=0x2a05;eip=0x000c0e; 	J(JNZ(loc_392ac));	// 85951 jnz     short loc_392AC ;~ 2A05:0C0E
cs=0x2a05;eip=0x000c10; 	T(CMP(*(raddr(ds,si+1)), 0));	// 85952 cmp     byte ptr [si+1], 0 ;~ 2A05:0C10
cs=0x2a05;eip=0x000c14; 	J(JNZ(loc_39254));	// 85953 jnz     short loc_39254 ;~ 2A05:0C14
cs=0x2a05;eip=0x000c16; 	X(INC(*(raddr(ds,bx+0x15))));	// 85954 inc     byte ptr [bx+15h] ;~ 2A05:0C16
cs=0x2a05;eip=0x000c19; 	T(MOV(ax, di));	// 85955 mov     ax, di ;~ 2A05:0C19
cs=0x2a05;eip=0x000c1b; 	X(MOV(*(dw*)(raddr(ss,bp-6)), di));	// 85956 mov     [bp-6], di ;~ 2A05:0C1B
cs=0x2a05;eip=0x000c1e; 	X(MOV(*(dw*)(raddr(ss,bp-0x0C)), si));	// 85957 mov     [bp-0Ch], si ;~ 2A05:0C1E
cs=0x2a05;eip=0x000c21; 	J(JMP(loc_39452));	// 85958 jmp     loc_39452 ;~ 2A05:0C21
loc_39254:
	// 9707 
cs=0x2a05;eip=0x000c24; 	T(MOV(bx, cx));	// 85962 mov     bx, cx ;~ 2A05:0C24
cs=0x2a05;eip=0x000c26; 	T(MOV(al, *(raddr(ds,si+2))));	// 85963 mov     al, [si+2] ;~ 2A05:0C26
cs=0x2a05;eip=0x000c29; 	T(CMP(*(raddr(ds,bx+0x24)), al));	// 85964 cmp     [bx+24h], al ;~ 2A05:0C29
cs=0x2a05;eip=0x000c2c; 	J(JC(loc_392ac));	// 85965 jb      short loc_392AC ;~ 2A05:0C2C
cs=0x2a05;eip=0x000c2e; 	T(CMP(*(raddr(ds,si+1)), 1));	// 85966 cmp     byte ptr [si+1], 1 ;~ 2A05:0C2E
cs=0x2a05;eip=0x000c32; 	J(JNZ(loc_39285));	// 85967 jnz     short loc_39285 ;~ 2A05:0C32
cs=0x2a05;eip=0x000c34; 	T(MOV(ax, *(dw*)(raddr(ss,bp-0x0A))));	// 85968 mov     ax, [bp-0Ah] ;~ 2A05:0C34
cs=0x2a05;eip=0x000c37; 	T(MOV(dx, *(dw*)(raddr(ss,bp-8))));	// 85969 mov     dx, [bp-8] ;~ 2A05:0C37
cs=0x2a05;eip=0x000c3a; 	T(CMP(*(dw*)(raddr(ds,si+0x0A)), dx));	// 85970 cmp     [si+0Ah], dx ;~ 2A05:0C3A
cs=0x2a05;eip=0x000c3d; 	J(JC(loc_39285));	// 85971 jb      short loc_39285 ;~ 2A05:0C3D
cs=0x2a05;eip=0x000c3f; 	J(JA(loc_39276));	// 85972 ja      short loc_39276 ;~ 2A05:0C3F
cs=0x2a05;eip=0x000c41; 	T(CMP(*(dw*)(raddr(ds,si+8)), ax));	// 85973 cmp     [si+8], ax ;~ 2A05:0C41
cs=0x2a05;eip=0x000c44; 	J(JBE(loc_39285));	// 85974 jbe     short loc_39285 ;~ 2A05:0C44
loc_39276:
	// 9708 
cs=0x2a05;eip=0x000c46; 	T(MOV(ax, *(dw*)(raddr(ds,si+8))));	// 85977 mov     ax, [si+8] ;~ 2A05:0C46
cs=0x2a05;eip=0x000c49; 	T(MOV(dx, *(dw*)(raddr(ds,si+0x0A))));	// 85978 mov     dx, [si+0Ah] ;~ 2A05:0C49
cs=0x2a05;eip=0x000c4c; 	X(MOV(*(dw*)(raddr(ss,bp-0x0A)), ax));	// 85979 mov     [bp-0Ah], ax ;~ 2A05:0C4C
cs=0x2a05;eip=0x000c4f; 	X(MOV(*(dw*)(raddr(ss,bp-8)), dx));	// 85980 mov     [bp-8], dx ;~ 2A05:0C4F
cs=0x2a05;eip=0x000c52; 	X(MOV(*(dw*)(raddr(ss,bp-0x10)), di));	// 85981 mov     [bp-10h], di ;~ 2A05:0C52
loc_39285:
	// 9709 
cs=0x2a05;eip=0x000c55; 	T(CMP(*(raddr(ds,si+1)), 2));	// 85985 cmp     byte ptr [si+1], 2 ;~ 2A05:0C55
cs=0x2a05;eip=0x000c59; 	J(JNZ(loc_392ac));	// 85986 jnz     short loc_392AC ;~ 2A05:0C59
cs=0x2a05;eip=0x000c5b; 	T(MOV(ax, *(dw*)(raddr(ss,bp-4))));	// 85987 mov     ax, [bp-4] ;~ 2A05:0C5B
cs=0x2a05;eip=0x000c5e; 	T(MOV(dx, *(dw*)(raddr(ss,bp-2))));	// 85988 mov     dx, [bp-2] ;~ 2A05:0C5E
cs=0x2a05;eip=0x000c61; 	T(CMP(*(dw*)(raddr(ds,si+0x0A)), dx));	// 85989 cmp     [si+0Ah], dx ;~ 2A05:0C61
cs=0x2a05;eip=0x000c64; 	J(JC(loc_392ac));	// 85990 jb      short loc_392AC ;~ 2A05:0C64
cs=0x2a05;eip=0x000c66; 	J(JA(loc_3929d));	// 85991 ja      short loc_3929D ;~ 2A05:0C66
cs=0x2a05;eip=0x000c68; 	T(CMP(*(dw*)(raddr(ds,si+8)), ax));	// 85992 cmp     [si+8], ax ;~ 2A05:0C68
cs=0x2a05;eip=0x000c6b; 	J(JBE(loc_392ac));	// 85993 jbe     short loc_392AC ;~ 2A05:0C6B
loc_3929d:
	// 9710 
cs=0x2a05;eip=0x000c6d; 	T(MOV(ax, *(dw*)(raddr(ds,si+8))));	// 85996 mov     ax, [si+8] ;~ 2A05:0C6D
cs=0x2a05;eip=0x000c70; 	T(MOV(dx, *(dw*)(raddr(ds,si+0x0A))));	// 85997 mov     dx, [si+0Ah] ;~ 2A05:0C70
cs=0x2a05;eip=0x000c73; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 85998 mov     [bp-4], ax ;~ 2A05:0C73
cs=0x2a05;eip=0x000c76; 	X(MOV(*(dw*)(raddr(ss,bp-2)), dx));	// 85999 mov     [bp-2], dx ;~ 2A05:0C76
cs=0x2a05;eip=0x000c79; 	X(MOV(*(dw*)(raddr(ss,bp-0x0E)), di));	// 86000 mov     [bp-0Eh], di ;~ 2A05:0C79
loc_392ac:
	// 9711 
cs=0x2a05;eip=0x000c7c; 	X(ADD(*(dw*)(raddr(ss,bp-0x18)), 2));	// 86004 add     word ptr [bp-18h], 2 ;~ 2A05:0C7C
cs=0x2a05;eip=0x000c80; 	X(ADD(*(dw*)(raddr(ss,bp-0x1A)), 0x2E));	// 86005 add     word ptr [bp-1Ah], 2Eh ; '.' ;~ 2A05:0C80
cs=0x2a05;eip=0x000c84; 	T(INC(di));	// 86006 inc     di ;~ 2A05:0C84
cs=0x2a05;eip=0x000c85; 	T(MOV(ax, di));	// 86007 mov     ax, di ;~ 2A05:0C85
cs=0x2a05;eip=0x000c87; 	T(CMP(ax, *(dw*)(raddr(ss,bp-0x12))));	// 86008 cmp     ax, [bp-12h] ;~ 2A05:0C87
cs=0x2a05;eip=0x000c8a; 	J(JNC(loc_392bf));	// 86009 jnb     short loc_392BF ;~ 2A05:0C8A
cs=0x2a05;eip=0x000c8c; 	J(JMP(loc_39226));	// 86010 jmp     loc_39226 ;~ 2A05:0C8C
loc_392bf:
	// 9712 
cs=0x2a05;eip=0x000c8f; 	X(MOV(*(dw*)(raddr(ss,bp-6)), di));	// 86014 mov     [bp-6], di ;~ 2A05:0C8F
cs=0x2a05;eip=0x000c92; 	X(MOV(*(dw*)(raddr(ss,bp-0x0C)), si));	// 86015 mov     [bp-0Ch], si ;~ 2A05:0C92
loc_392c5:
	// 9713 
cs=0x2a05;eip=0x000c95; 	T(CMP(*(dw*)(raddr(ss,bp-0x0E)), 0x0FFFF));	// 86018 cmp     word ptr [bp-0Eh], 0FFFFh ;~ 2A05:0C95
cs=0x2a05;eip=0x000c99; 	J(JZ(loc_3930e));	// 86019 jz      short loc_3930E ;~ 2A05:0C99
loc_392cb:
	// 9714 
cs=0x2a05;eip=0x000c9b; 	T(MOV(ax, 0x2E));	// 86023 mov     ax, 2Eh ; '.' ;~ 2A05:0C9B
cs=0x2a05;eip=0x000c9e; 	X(IMUL1_2(*(dw*)(raddr(ss,bp-0x0E))));	// 86024 imul    word ptr [bp-0Eh] ;~ 2A05:0C9E
cs=0x2a05;eip=0x000ca1; 	T(MOV(si, ax));	// 86025 mov     si, ax ;~ 2A05:0CA1
cs=0x2a05;eip=0x000ca3; 	T(ADD(si, 0x0A2B6));	// 86026 add     si, 0A2B6h ;~ 2A05:0CA3
cs=0x2a05;eip=0x000ca7; 	X(PUSH(si));	// 86027 push    si ;~ 2A05:0CA7
cs=0x2a05;eip=0x000ca8; 	X(PUSH(*(dw*)(raddr(ss,bp-0x0E))));	// 86028 push    word ptr [bp-0Eh] ;~ 2A05:0CA8
cs=0x2a05;eip=0x000cab; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 86029 mov     ax, word ptr audiodriverbinary ;~ 2A05:0CAB
cs=0x2a05;eip=0x000cae; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 86030 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:0CAE
cs=0x2a05;eip=0x000cb2; 	T(ADD(ax, 0x0C));	// 86031 add     ax, 0Ch ;~ 2A05:0CB2
cs=0x2a05;eip=0x000cb5; 	X(MOV(*(dw*)(raddr(ss,bp-0x14)), dx));	// 86032 mov     [bp-14h], dx ;~ 2A05:0CB5
cs=0x2a05;eip=0x000cb8; 	X(MOV(*(dw*)(raddr(ss,bp-0x16)), ax));	// 86033 mov     [bp-16h], ax ;~ 2A05:0CB8
cs=0x2a05;eip=0x000cbb; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp-0x16))));	// 86034 call    dword ptr [bp-16h] ;~ 2A05:0CBB
cs=0x2a05;eip=0x000cbe; 	T(ADD(sp, 4));	// 86035 add     sp, 4 ;~ 2A05:0CBE
cs=0x2a05;eip=0x000cc1; 	X(PUSH(si));	// 86036 push    si ;~ 2A05:0CC1
cs=0x2a05;eip=0x000cc2; 	X(PUSH(*(dw*)(raddr(ss,bp-0x0E))));	// 86037 push    word ptr [bp-0Eh] ;~ 2A05:0CC2
cs=0x2a05;eip=0x000cc5; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 86038 mov     ax, word ptr audiodriverbinary ;~ 2A05:0CC5
cs=0x2a05;eip=0x000cc8; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 86039 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:0CC8
cs=0x2a05;eip=0x000ccc; 	T(ADD(ax, 0x0F));	// 86040 add     ax, 0Fh ;~ 2A05:0CCC
cs=0x2a05;eip=0x000ccf; 	X(MOV(*(dw*)(raddr(ss,bp-0x14)), dx));	// 86041 mov     [bp-14h], dx ;~ 2A05:0CCF
cs=0x2a05;eip=0x000cd2; 	X(MOV(*(dw*)(raddr(ss,bp-0x16)), ax));	// 86042 mov     [bp-16h], ax ;~ 2A05:0CD2
cs=0x2a05;eip=0x000cd5; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp-0x16))));	// 86043 call    dword ptr [bp-16h] ;~ 2A05:0CD5
cs=0x2a05;eip=0x000cd8; 	T(ADD(sp, 4));	// 86044 add     sp, 4 ;~ 2A05:0CD8
cs=0x2a05;eip=0x000cdb; 	J(JMP(loc_3918d));	// 86045 jmp     loc_3918D ;~ 2A05:0CDB
loc_3930e:
	// 9715 
cs=0x2a05;eip=0x000cde; 	T(CMP(*(dw*)(raddr(ss,bp-0x10)), 0x0FFFF));	// 86049 cmp     word ptr [bp-10h], 0FFFFh ;~ 2A05:0CDE
cs=0x2a05;eip=0x000ce2; 	J(JNZ(loc_39317));	// 86050 jnz     short loc_39317 ;~ 2A05:0CE2
cs=0x2a05;eip=0x000ce4; 	J(JMP(loc_390f7));	// 86051 jmp     loc_390F7 ;~ 2A05:0CE4
loc_39317:
	// 9716 
cs=0x2a05;eip=0x000ce7; 	T(MOV(ax, 0x2E));	// 86056 mov     ax, 2Eh ; '.' ;~ 2A05:0CE7
cs=0x2a05;eip=0x000cea; 	X(IMUL1_2(*(dw*)(raddr(ss,bp-0x10))));	// 86057 imul    word ptr [bp-10h] ;~ 2A05:0CEA
cs=0x2a05;eip=0x000ced; 	T(MOV(si, ax));	// 86058 mov     si, ax ;~ 2A05:0CED
cs=0x2a05;eip=0x000cef; 	T(ADD(si, 0x0A2B6));	// 86059 add     si, 0A2B6h ;~ 2A05:0CEF
cs=0x2a05;eip=0x000cf3; 	X(PUSH(si));	// 86060 push    si ;~ 2A05:0CF3
cs=0x2a05;eip=0x000cf4; 	X(PUSH(*(dw*)(raddr(ss,bp-0x10))));	// 86061 push    word ptr [bp-10h] ;~ 2A05:0CF4
cs=0x2a05;eip=0x000cf7; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 86062 mov     ax, word ptr audiodriverbinary ;~ 2A05:0CF7
cs=0x2a05;eip=0x000cfa; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 86063 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:0CFA
cs=0x2a05;eip=0x000cfe; 	T(ADD(ax, 0x0C));	// 86064 add     ax, 0Ch ;~ 2A05:0CFE
cs=0x2a05;eip=0x000d01; 	X(MOV(*(dw*)(raddr(ss,bp-0x14)), dx));	// 86065 mov     [bp-14h], dx ;~ 2A05:0D01
cs=0x2a05;eip=0x000d04; 	X(MOV(*(dw*)(raddr(ss,bp-0x16)), ax));	// 86066 mov     [bp-16h], ax ;~ 2A05:0D04
cs=0x2a05;eip=0x000d07; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp-0x16))));	// 86067 call    dword ptr [bp-16h] ;~ 2A05:0D07
cs=0x2a05;eip=0x000d0a; 	T(ADD(sp, 4));	// 86068 add     sp, 4 ;~ 2A05:0D0A
cs=0x2a05;eip=0x000d0d; 	X(PUSH(si));	// 86069 push    si ;~ 2A05:0D0D
cs=0x2a05;eip=0x000d0e; 	X(PUSH(*(dw*)(raddr(ss,bp-0x10))));	// 86070 push    word ptr [bp-10h] ;~ 2A05:0D0E
cs=0x2a05;eip=0x000d11; 	J(JMP(loc_391d3));	// 86071 jmp     loc_391D3 ;~ 2A05:0D11
loc_39344:
	// 9717 
cs=0x2a05;eip=0x000d14; 	X(MOV(*(dw*)(raddr(ss,bp-6)), 0));	// 86075 mov     word ptr [bp-6], 0 ;~ 2A05:0D14
cs=0x2a05;eip=0x000d19; 	T(MOV(al, byte_459d2));	// 86076 mov     al, byte_459D2 ;~ 2A05:0D19
cs=0x2a05;eip=0x000d1c; 	T(SUB(ah, ah));	// 86077 sub     ah, ah ;~ 2A05:0D1C
cs=0x2a05;eip=0x000d1e; 	T(OR(ax, ax));	// 86078 or      ax, ax ;~ 2A05:0D1E
cs=0x2a05;eip=0x000d20; 	J(JNZ(loc_39355));	// 86079 jnz     short loc_39355 ;~ 2A05:0D20
cs=0x2a05;eip=0x000d22; 	J(JMP(loc_39401));	// 86080 jmp     loc_39401 ;~ 2A05:0D22
loc_39355:
	// 9718 
cs=0x2a05;eip=0x000d25; 	X(MOV(*(dw*)(raddr(ss,bp-0x1A)), ax));	// 86084 mov     [bp-1Ah], ax ;~ 2A05:0D25
cs=0x2a05;eip=0x000d28; 	T(MOV(di, 0x0A2B6));	// 86085 mov     di, 0A2B6h ;~ 2A05:0D28
cs=0x2a05;eip=0x000d2b; 	X(MOV(*(dw*)(raddr(ss,bp-0x12)), 0x4E9E));	// 86086 mov     word ptr [bp-12h], 4E9Eh ;~ 2A05:0D2B
cs=0x2a05;eip=0x000d30; 	T(MOV(si, *(dw*)(raddr(ss,bp-6))));	// 86087 mov     si, [bp-6] ;~ 2A05:0D30
loc_39363:
	// 9719 
cs=0x2a05;eip=0x000d33; 	T(MOV(cx, di));	// 86090 mov     cx, di ;~ 2A05:0D33
cs=0x2a05;eip=0x000d35; 	T(MOV(bx, *(dw*)(raddr(ss,bp-0x12))));	// 86091 mov     bx, [bp-12h] ;~ 2A05:0D35
cs=0x2a05;eip=0x000d38; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 86092 mov     ax, [bx] ;~ 2A05:0D38
cs=0x2a05;eip=0x000d3a; 	T(LES(bx, *(dw*)(raddr(ss,bp+6))));	// 86093 les     bx, [bp+6] ;~ 2A05:0D3A
cs=0x2a05;eip=0x000d3d; 	T(TEST(*(dw*)(raddr(es,bx+0x0C)), ax));	// 86094 test    es:[bx+0Ch], ax ;~ 2A05:0D3D
cs=0x2a05;eip=0x000d41; 	J(JZ(loc_393e9));	// 86095 jz      short loc_393E9 ;~ 2A05:0D41
cs=0x2a05;eip=0x000d43; 	T(MOV(bx, cx));	// 86096 mov     bx, cx ;~ 2A05:0D43
cs=0x2a05;eip=0x000d45; 	T(CMP(*(raddr(ds,bx+1)), 0));	// 86097 cmp     byte ptr [bx+1], 0 ;~ 2A05:0D45
cs=0x2a05;eip=0x000d49; 	J(JNZ(loc_39386));	// 86098 jnz     short loc_39386 ;~ 2A05:0D49
cs=0x2a05;eip=0x000d4b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0A))));	// 86099 mov     bx, [bp+0Ah] ;~ 2A05:0D4B
cs=0x2a05;eip=0x000d4e; 	X(INC(*(raddr(ds,bx+0x15))));	// 86100 inc     byte ptr [bx+15h] ;~ 2A05:0D4E
cs=0x2a05;eip=0x000d51; 	J(JMP(loc_39117));	// 86101 jmp     loc_39117 ;~ 2A05:0D51
loc_39386:
	// 9720 
cs=0x2a05;eip=0x000d56; 	T(MOV(bx, cx));	// 86107 mov     bx, cx ;~ 2A05:0D56
cs=0x2a05;eip=0x000d58; 	T(MOV(al, *(raddr(ds,bx+2))));	// 86108 mov     al, [bx+2] ;~ 2A05:0D58
cs=0x2a05;eip=0x000d5b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0A))));	// 86109 mov     bx, [bp+0Ah] ;~ 2A05:0D5B
cs=0x2a05;eip=0x000d5e; 	T(CMP(*(raddr(ds,bx+0x24)), al));	// 86110 cmp     [bx+24h], al ;~ 2A05:0D5E
cs=0x2a05;eip=0x000d61; 	J(JC(loc_393e9));	// 86111 jb      short loc_393E9 ;~ 2A05:0D61
cs=0x2a05;eip=0x000d63; 	T(MOV(bx, cx));	// 86112 mov     bx, cx ;~ 2A05:0D63
cs=0x2a05;eip=0x000d65; 	T(CMP(*(raddr(ds,bx+1)), 1));	// 86113 cmp     byte ptr [bx+1], 1 ;~ 2A05:0D65
cs=0x2a05;eip=0x000d69; 	J(JNZ(loc_393be));	// 86114 jnz     short loc_393BE ;~ 2A05:0D69
cs=0x2a05;eip=0x000d6b; 	T(MOV(ax, *(dw*)(raddr(ss,bp-0x0A))));	// 86115 mov     ax, [bp-0Ah] ;~ 2A05:0D6B
cs=0x2a05;eip=0x000d6e; 	T(MOV(dx, *(dw*)(raddr(ss,bp-8))));	// 86116 mov     dx, [bp-8] ;~ 2A05:0D6E
cs=0x2a05;eip=0x000d71; 	T(CMP(*(dw*)(raddr(ds,bx+0x0A)), dx));	// 86117 cmp     [bx+0Ah], dx ;~ 2A05:0D71
cs=0x2a05;eip=0x000d74; 	J(JC(loc_393be));	// 86118 jb      short loc_393BE ;~ 2A05:0D74
cs=0x2a05;eip=0x000d76; 	J(JA(loc_393ad));	// 86119 ja      short loc_393AD ;~ 2A05:0D76
cs=0x2a05;eip=0x000d78; 	T(CMP(*(dw*)(raddr(ds,bx+8)), ax));	// 86120 cmp     [bx+8], ax ;~ 2A05:0D78
cs=0x2a05;eip=0x000d7b; 	J(JBE(loc_393be));	// 86121 jbe     short loc_393BE ;~ 2A05:0D7B
loc_393ad:
	// 9721 
cs=0x2a05;eip=0x000d7d; 	T(MOV(bx, cx));	// 86124 mov     bx, cx ;~ 2A05:0D7D
cs=0x2a05;eip=0x000d7f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 86125 mov     ax, [bx+8] ;~ 2A05:0D7F
cs=0x2a05;eip=0x000d82; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 86126 mov     dx, [bx+0Ah] ;~ 2A05:0D82
cs=0x2a05;eip=0x000d85; 	X(MOV(*(dw*)(raddr(ss,bp-0x0A)), ax));	// 86127 mov     [bp-0Ah], ax ;~ 2A05:0D85
cs=0x2a05;eip=0x000d88; 	X(MOV(*(dw*)(raddr(ss,bp-8)), dx));	// 86128 mov     [bp-8], dx ;~ 2A05:0D88
cs=0x2a05;eip=0x000d8b; 	X(MOV(*(dw*)(raddr(ss,bp-0x10)), si));	// 86129 mov     [bp-10h], si ;~ 2A05:0D8B
loc_393be:
	// 9722 
cs=0x2a05;eip=0x000d8e; 	T(MOV(bx, cx));	// 86133 mov     bx, cx ;~ 2A05:0D8E
cs=0x2a05;eip=0x000d90; 	T(CMP(*(raddr(ds,bx+1)), 2));	// 86134 cmp     byte ptr [bx+1], 2 ;~ 2A05:0D90
cs=0x2a05;eip=0x000d94; 	J(JNZ(loc_393e9));	// 86135 jnz     short loc_393E9 ;~ 2A05:0D94
cs=0x2a05;eip=0x000d96; 	T(MOV(ax, *(dw*)(raddr(ss,bp-4))));	// 86136 mov     ax, [bp-4] ;~ 2A05:0D96
cs=0x2a05;eip=0x000d99; 	T(MOV(dx, *(dw*)(raddr(ss,bp-2))));	// 86137 mov     dx, [bp-2] ;~ 2A05:0D99
cs=0x2a05;eip=0x000d9c; 	T(CMP(*(dw*)(raddr(ds,bx+0x0A)), dx));	// 86138 cmp     [bx+0Ah], dx ;~ 2A05:0D9C
cs=0x2a05;eip=0x000d9f; 	J(JC(loc_393e9));	// 86139 jb      short loc_393E9 ;~ 2A05:0D9F
cs=0x2a05;eip=0x000da1; 	J(JA(loc_393d8));	// 86140 ja      short loc_393D8 ;~ 2A05:0DA1
cs=0x2a05;eip=0x000da3; 	T(CMP(*(dw*)(raddr(ds,bx+8)), ax));	// 86141 cmp     [bx+8], ax ;~ 2A05:0DA3
cs=0x2a05;eip=0x000da6; 	J(JBE(loc_393e9));	// 86142 jbe     short loc_393E9 ;~ 2A05:0DA6
loc_393d8:
	// 9723 
cs=0x2a05;eip=0x000da8; 	T(MOV(bx, cx));	// 86145 mov     bx, cx ;~ 2A05:0DA8
cs=0x2a05;eip=0x000daa; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 86146 mov     ax, [bx+8] ;~ 2A05:0DAA
cs=0x2a05;eip=0x000dad; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 86147 mov     dx, [bx+0Ah] ;~ 2A05:0DAD
cs=0x2a05;eip=0x000db0; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 86148 mov     [bp-4], ax ;~ 2A05:0DB0
cs=0x2a05;eip=0x000db3; 	X(MOV(*(dw*)(raddr(ss,bp-2)), dx));	// 86149 mov     [bp-2], dx ;~ 2A05:0DB3
cs=0x2a05;eip=0x000db6; 	X(MOV(*(dw*)(raddr(ss,bp-0x0E)), si));	// 86150 mov     [bp-0Eh], si ;~ 2A05:0DB6
loc_393e9:
	// 9724 
cs=0x2a05;eip=0x000db9; 	T(ADD(di, 0x2E));	// 86154 add     di, 2Eh ; '.' ;~ 2A05:0DB9
cs=0x2a05;eip=0x000dbc; 	X(ADD(*(dw*)(raddr(ss,bp-0x12)), 2));	// 86155 add     word ptr [bp-12h], 2 ;~ 2A05:0DBC
cs=0x2a05;eip=0x000dc0; 	T(INC(si));	// 86156 inc     si ;~ 2A05:0DC0
cs=0x2a05;eip=0x000dc1; 	T(MOV(ax, si));	// 86157 mov     ax, si ;~ 2A05:0DC1
cs=0x2a05;eip=0x000dc3; 	T(CMP(ax, *(dw*)(raddr(ss,bp-0x1A))));	// 86158 cmp     ax, [bp-1Ah] ;~ 2A05:0DC3
cs=0x2a05;eip=0x000dc6; 	J(JNC(loc_393fb));	// 86159 jnb     short loc_393FB ;~ 2A05:0DC6
cs=0x2a05;eip=0x000dc8; 	J(JMP(loc_39363));	// 86160 jmp     loc_39363 ;~ 2A05:0DC8
loc_393fb:
	// 9725 
cs=0x2a05;eip=0x000dcb; 	X(MOV(*(dw*)(raddr(ss,bp-6)), si));	// 86164 mov     [bp-6], si ;~ 2A05:0DCB
cs=0x2a05;eip=0x000dce; 	X(MOV(*(dw*)(raddr(ss,bp-0x0C)), cx));	// 86165 mov     [bp-0Ch], cx ;~ 2A05:0DCE
loc_39401:
	// 9726 
cs=0x2a05;eip=0x000dd1; 	T(CMP(*(dw*)(raddr(ss,bp-0x0E)), 0x0FFFF));	// 86168 cmp     word ptr [bp-0Eh], 0FFFFh ;~ 2A05:0DD1
cs=0x2a05;eip=0x000dd5; 	J(JZ(loc_39428));	// 86169 jz      short loc_39428 ;~ 2A05:0DD5
cs=0x2a05;eip=0x000dd7; 	T(MOV(ax, 0x2E));	// 86170 mov     ax, 2Eh ; '.' ;~ 2A05:0DD7
cs=0x2a05;eip=0x000dda; 	X(IMUL1_2(*(dw*)(raddr(ss,bp-0x0E))));	// 86171 imul    word ptr [bp-0Eh] ;~ 2A05:0DDA
cs=0x2a05;eip=0x000ddd; 	T(MOV(bx, ax));	// 86172 mov     bx, ax ;~ 2A05:0DDD
cs=0x2a05;eip=0x000ddf; 	T(MOV(si, *(dw*)(raddr(ds,bx-0x5D20))));	// 86173 mov     si, [bx-5D20h] ;~ 2A05:0DDF
cs=0x2a05;eip=0x000de3; 	T(CMP(*(dw*)(raddr(ss,bp+0x0A)), si));	// 86174 cmp     [bp+0Ah], si ;~ 2A05:0DE3
cs=0x2a05;eip=0x000de6; 	J(JNZ(loc_3941b));	// 86175 jnz     short loc_3941B ;~ 2A05:0DE6
cs=0x2a05;eip=0x000de8; 	J(JMP(loc_392cb));	// 86176 jmp     loc_392CB ;~ 2A05:0DE8
loc_3941b:
	// 9727 
cs=0x2a05;eip=0x000deb; 	X(DEC(*(raddr(ds,si+0x15))));	// 86180 dec     byte ptr [si+15h] ;~ 2A05:0DEB
cs=0x2a05;eip=0x000dee; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0A))));	// 86181 mov     bx, [bp+0Ah] ;~ 2A05:0DEE
cs=0x2a05;eip=0x000df1; 	X(INC(*(raddr(ds,bx+0x15))));	// 86182 inc     byte ptr [bx+15h] ;~ 2A05:0DF1
cs=0x2a05;eip=0x000df4; 	J(JMP(loc_392cb));	// 86183 jmp     loc_392CB ;~ 2A05:0DF4
loc_39428:
	// 9728 
cs=0x2a05;eip=0x000df8; 	T(CMP(*(dw*)(raddr(ss,bp-0x10)), 0x0FFFF));	// 86188 cmp     word ptr [bp-10h], 0FFFFh ;~ 2A05:0DF8
cs=0x2a05;eip=0x000dfc; 	J(JNZ(loc_39431));	// 86189 jnz     short loc_39431 ;~ 2A05:0DFC
cs=0x2a05;eip=0x000dfe; 	J(JMP(loc_390f7));	// 86190 jmp     loc_390F7 ;~ 2A05:0DFE
loc_39431:
	// 9729 
cs=0x2a05;eip=0x000e01; 	T(MOV(ax, 0x2E));	// 86194 mov     ax, 2Eh ; '.' ;~ 2A05:0E01
cs=0x2a05;eip=0x000e04; 	X(IMUL1_2(*(dw*)(raddr(ss,bp-0x10))));	// 86195 imul    word ptr [bp-10h] ;~ 2A05:0E04
cs=0x2a05;eip=0x000e07; 	T(MOV(bx, ax));	// 86196 mov     bx, ax ;~ 2A05:0E07
cs=0x2a05;eip=0x000e09; 	T(MOV(si, *(dw*)(raddr(ds,bx-0x5D20))));	// 86197 mov     si, [bx-5D20h] ;~ 2A05:0E09
cs=0x2a05;eip=0x000e0d; 	T(CMP(*(dw*)(raddr(ss,bp+0x0A)), si));	// 86198 cmp     [bp+0Ah], si ;~ 2A05:0E0D
cs=0x2a05;eip=0x000e10; 	J(JNZ(loc_39445));	// 86199 jnz     short loc_39445 ;~ 2A05:0E10
cs=0x2a05;eip=0x000e12; 	J(JMP(loc_39317));	// 86200 jmp     loc_39317 ;~ 2A05:0E12
loc_39445:
	// 9730 
cs=0x2a05;eip=0x000e15; 	X(DEC(*(raddr(ds,si+0x15))));	// 86204 dec     byte ptr [si+15h] ;~ 2A05:0E15
cs=0x2a05;eip=0x000e18; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0A))));	// 86205 mov     bx, [bp+0Ah] ;~ 2A05:0E18
cs=0x2a05;eip=0x000e1b; 	X(INC(*(raddr(ds,bx+0x15))));	// 86206 inc     byte ptr [bx+15h] ;~ 2A05:0E1B
cs=0x2a05;eip=0x000e1e; 	J(JMP(loc_39317));	// 86207 jmp     loc_39317 ;~ 2A05:0E1E
loc_39452:
	// 9731 
cs=0x2a05;eip=0x000e22; 	X(POP(ds));	// 86213 pop     ds ;~ 2A05:0E22
cs=0x2a05;eip=0x000e23; 	X(POP(si));	// 86214 pop     si ;~ 2A05:0E23
cs=0x2a05;eip=0x000e24; 	X(POP(di));	// 86215 pop     di ;~ 2A05:0E24
cs=0x2a05;eip=0x000e25; 	T(MOV(sp, bp));	// 86216 mov     sp, bp ;~ 2A05:0E25
cs=0x2a05;eip=0x000e27; 	X(POP(bp));	// 86217 pop     bp ;~ 2A05:0E27
cs=0x2a05;eip=0x000e28; 	J(RETF(0));	// 86218 retf ;~ 2A05:0E28

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_390f7: 	goto loc_390f7;
        case m2c::kloc_390fe: 	goto loc_390fe;
        case m2c::kloc_39108: 	goto loc_39108;
        case m2c::kloc_3910d: 	goto loc_3910d;
        case m2c::kloc_39117: 	goto loc_39117;
        case m2c::kloc_39122: 	goto loc_39122;
        case m2c::kloc_3913c: 	goto loc_3913c;
        case m2c::kloc_3914d: 	goto loc_3914d;
        case m2c::kloc_39167: 	goto loc_39167;
        case m2c::kloc_39178: 	goto loc_39178;
        case m2c::kloc_3918d: 	goto loc_3918d;
        case m2c::kloc_39194: 	goto loc_39194;
        case m2c::kloc_3919d: 	goto loc_3919d;
        case m2c::kloc_391d3: 	goto loc_391d3;
        case m2c::kloc_391f0: 	goto loc_391f0;
        case m2c::kloc_39200: 	goto loc_39200;
        case m2c::kloc_39211: 	goto loc_39211;
        case m2c::kloc_39226: 	goto loc_39226;
        case m2c::kloc_39254: 	goto loc_39254;
        case m2c::kloc_39276: 	goto loc_39276;
        case m2c::kloc_39285: 	goto loc_39285;
        case m2c::kloc_3929d: 	goto loc_3929d;
        case m2c::kloc_392ac: 	goto loc_392ac;
        case m2c::kloc_392bf: 	goto loc_392bf;
        case m2c::kloc_392c5: 	goto loc_392c5;
        case m2c::kloc_392cb: 	goto loc_392cb;
        case m2c::kloc_3930e: 	goto loc_3930e;
        case m2c::kloc_39317: 	goto loc_39317;
        case m2c::kloc_39344: 	goto loc_39344;
        case m2c::kloc_39355: 	goto loc_39355;
        case m2c::kloc_39363: 	goto loc_39363;
        case m2c::kloc_39386: 	goto loc_39386;
        case m2c::kloc_393ad: 	goto loc_393ad;
        case m2c::kloc_393be: 	goto loc_393be;
        case m2c::kloc_393d8: 	goto loc_393d8;
        case m2c::kloc_393e9: 	goto loc_393e9;
        case m2c::kloc_393fb: 	goto loc_393fb;
        case m2c::kloc_39401: 	goto loc_39401;
        case m2c::kloc_3941b: 	goto loc_3941b;
        case m2c::kloc_39428: 	goto loc_39428;
        case m2c::kloc_39431: 	goto loc_39431;
        case m2c::kloc_39445: 	goto loc_39445;
        case m2c::kloc_39452: 	goto loc_39452;
        case m2c::kseg028_a98_proc: 	goto seg028_a98_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3945a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3945a:
    _begin:
#undef var_c
#define var_c -0x0C
	// 86229 var_C           = word ptr -0Ch ;~ 2A05:0E2A
#undef var_a
#define var_a -0x0A
	// 86230 var_A           = word ptr -0Ah ;~ 2A05:0E2A
#undef var_8
#define var_8 -8
	// 86231 var_8           = byte ptr -8 ;~ 2A05:0E2A
#undef var_6
#define var_6 -6
	// 86232 var_6           = word ptr -6 ;~ 2A05:0E2A
#undef var_4
#define var_4 -4
	// 86233 var_4           = word ptr -4 ;~ 2A05:0E2A
#undef var_2
#define var_2 -2
	// 86234 var_2           = word ptr -2 ;~ 2A05:0E2A
#undef arg_0
#define arg_0 6
	// 86235 arg_0           = word ptr  6 ;~ 2A05:0E2A
#undef arg_2
#define arg_2 8
	// 86236 arg_2           = dword ptr  8 ;~ 2A05:0E2A
cs=0x2a05;eip=0x000e2a; 	X(PUSH(bp));	// 86238 push    bp ;~ 2A05:0E2A
cs=0x2a05;eip=0x000e2b; 	T(MOV(bp, sp));	// 86239 mov     bp, sp ;~ 2A05:0E2B
cs=0x2a05;eip=0x000e2d; 	T(SUB(sp, 0x0C));	// 86240 sub     sp, 0Ch ;~ 2A05:0E2D
cs=0x2a05;eip=0x000e30; 	X(PUSH(di));	// 86241 push    di ;~ 2A05:0E30
cs=0x2a05;eip=0x000e31; 	X(PUSH(si));	// 86242 push    si ;~ 2A05:0E31
cs=0x2a05;eip=0x000e32; 	X(PUSH(ds));	// 86243 push    ds ;~ 2A05:0E32
cs=0x2a05;eip=0x000e33; 	T(MOV(ax, seg_offset(dseg)));	// 86244 mov     ax, seg dseg ;~ 2A05:0E33
cs=0x2a05;eip=0x000e36; 	T(MOV(ds, ax));	// 86245 mov     ds, ax ;~ 2A05:0E36
cs=0x2a05;eip=0x000e38; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86246 mov     ax, word ptr [bp+arg_2] ;~ 2A05:0E38
cs=0x2a05;eip=0x000e3b; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 86247 mov     dx, word ptr [bp+arg_2+2] ;~ 2A05:0E3B
cs=0x2a05;eip=0x000e3e; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 86248 mov     [bp+var_6], ax ;~ 2A05:0E3E
cs=0x2a05;eip=0x000e41; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 86249 mov     [bp+var_4], dx ;~ 2A05:0E41
cs=0x2a05;eip=0x000e44; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 86250 mov     bx, [bp+arg_0] ;~ 2A05:0E44
cs=0x2a05;eip=0x000e47; 	T(SUB(ax, ax));	// 86251 sub     ax, ax ;~ 2A05:0E47
cs=0x2a05;eip=0x000e49; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 86252 mov     [bx+2], ax ;~ 2A05:0E49
cs=0x2a05;eip=0x000e4c; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 86253 mov     [bx], ax ;~ 2A05:0E4C
cs=0x2a05;eip=0x000e4e; 	T(MOV(si, bx));	// 86254 mov     si, bx ;~ 2A05:0E4E
loc_39480:
	// 9732 
cs=0x2a05;eip=0x000e50; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 86257 les     bx, [bp+arg_2] ;~ 2A05:0E50
cs=0x2a05;eip=0x000e53; 	T(MOV(al, *(raddr(es,bx))));	// 86258 mov     al, es:[bx] ;~ 2A05:0E53
cs=0x2a05;eip=0x000e56; 	T(SUB(ah, ah));	// 86259 sub     ah, ah ;~ 2A05:0E56
cs=0x2a05;eip=0x000e58; 	T(AND(ax, 0x7F));	// 86260 and     ax, 7Fh ;~ 2A05:0E58
cs=0x2a05;eip=0x000e5b; 	T(SUB(dx, dx));	// 86261 sub     dx, dx ;~ 2A05:0E5B
cs=0x2a05;eip=0x000e5d; 	T(MOV(cx, *(dw*)(raddr(ds,si))));	// 86262 mov     cx, [si] ;~ 2A05:0E5D
cs=0x2a05;eip=0x000e5f; 	T(MOV(bx, *(dw*)(raddr(ds,si+2))));	// 86263 mov     bx, [si+2] ;~ 2A05:0E5F
cs=0x2a05;eip=0x000e62; 	T(MOV(di, cx));	// 86264 mov     di, cx ;~ 2A05:0E62
cs=0x2a05;eip=0x000e64; 	T(MOV(cl, 7));	// 86265 mov     cl, 7 ;~ 2A05:0E64
loc_39496:
	// 9733 
cs=0x2a05;eip=0x000e66; 	T(SHL(di, 1));	// 86268 shl     di, 1 ;~ 2A05:0E66
cs=0x2a05;eip=0x000e68; 	T(RCL(bx, 1));	// 86269 rcl     bx, 1 ;~ 2A05:0E68
cs=0x2a05;eip=0x000e6a; 	T(DEC(cl));	// 86270 dec     cl ;~ 2A05:0E6A
cs=0x2a05;eip=0x000e6c; 	J(JNZ(loc_39496));	// 86271 jnz     short loc_39496 ;~ 2A05:0E6C
cs=0x2a05;eip=0x000e6e; 	T(ADD(ax, di));	// 86272 add     ax, di ;~ 2A05:0E6E
cs=0x2a05;eip=0x000e70; 	T(ADC(dx, bx));	// 86273 adc     dx, bx ;~ 2A05:0E70
cs=0x2a05;eip=0x000e72; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 86274 mov     [si], ax ;~ 2A05:0E72
cs=0x2a05;eip=0x000e74; 	X(MOV(*(dw*)(raddr(ds,si+2)), dx));	// 86275 mov     [si+2], dx ;~ 2A05:0E74
cs=0x2a05;eip=0x000e77; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 86276 les     bx, [bp+arg_2] ;~ 2A05:0E77
cs=0x2a05;eip=0x000e7a; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86277 inc     word ptr [bp+arg_2] ;~ 2A05:0E7A
cs=0x2a05;eip=0x000e7d; 	T(TEST(*(raddr(es,bx)), 0x80));	// 86278 test    byte ptr es:[bx], 80h ;~ 2A05:0E7D
cs=0x2a05;eip=0x000e81; 	J(JNZ(loc_39480));	// 86279 jnz     short loc_39480 ;~ 2A05:0E81
cs=0x2a05;eip=0x000e83; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 86280 mov     bx, [bp+arg_0] ;~ 2A05:0E83
cs=0x2a05;eip=0x000e86; 	T(MOV(si, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86281 mov     si, word ptr [bp+arg_2] ;~ 2A05:0E86
cs=0x2a05;eip=0x000e89; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86282 inc     word ptr [bp+arg_2] ;~ 2A05:0E89
cs=0x2a05;eip=0x000e8c; 	T(MOV(al, *(raddr(es,si))));	// 86283 mov     al, es:[si] ;~ 2A05:0E8C
cs=0x2a05;eip=0x000e8f; 	X(MOV(*(raddr(ds,bx+4)), al));	// 86284 mov     [bx+4], al ;~ 2A05:0E8F
cs=0x2a05;eip=0x000e92; 	X(MOV(*(raddr(ss,bp+var_8)), al));	// 86285 mov     [bp+var_8], al ;~ 2A05:0E92
cs=0x2a05;eip=0x000e95; 	T(SUB(ah, ah));	// 86286 sub     ah, ah ;~ 2A05:0E95
cs=0x2a05;eip=0x000e97; 	T(SUB(ax, 0x0D9));	// 86287 sub     ax, 0D9h ; 'Ù'  ; switch 18 cases ;~ 2A05:0E97
cs=0x2a05;eip=0x000e9a; 	T(CMP(ax, 0x11));	// 86288 cmp     ax, 11h ;~ 2A05:0E9A
cs=0x2a05;eip=0x000e9d; 	J(JBE(loc_394d2));	// 86289 jbe     short loc_394D2 ;~ 2A05:0E9D
cs=0x2a05;eip=0x000e9f; 	J(JMP(def_394d5));	// 86290 jmp     def_394D5       ; jumptable 000394D5 default case, cases 217-219,227 ;~ 2A05:0E9F
loc_394d2:
	// 9734 
cs=0x2a05;eip=0x000ea2; 	T(ADD(ax, ax));	// 86294 add     ax, ax ;~ 2A05:0EA2
cs=0x2a05;eip=0x000ea4; 	T(XCHG(ax, bx));	// 86295 xchg    ax, bx ;~ 2A05:0EA4
	cs=seg_offset(seg028);
cs=0x2a05;eip=0x000ea5; __disp=*(dw*)(((db*)&jpt_394d5)+bx);
	J(return __dispatch_call(__disp, _state););	// 86296 jmp     cs:jpt_394D5[bx] ; switch jump ;~ 2A05:0EA5
loc_394da:
	// 9735 
cs=0x2a05;eip=0x000eaa; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 86301 mov     [bp+var_2], 0   ; jumptable 000394D5 case 232 ;~ 2A05:0EAA
cs=0x2a05;eip=0x000eaf; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86302 mov     bx, word ptr [bp+arg_2] ;~ 2A05:0EAF
cs=0x2a05;eip=0x000eb2; 	T(MOV(al, *(raddr(es,bx))));	// 86303 mov     al, es:[bx] ;~ 2A05:0EB2
cs=0x2a05;eip=0x000eb5; 	T(SUB(ah, ah));	// 86304 sub     ah, ah ;~ 2A05:0EB5
cs=0x2a05;eip=0x000eb7; 	T(OR(ax, ax));	// 86305 or      ax, ax ;~ 2A05:0EB7
cs=0x2a05;eip=0x000eb9; 	J(JZ(loc_39518));	// 86306 jz      short loc_39518 ; jumptable 000394D5 case 231 ;~ 2A05:0EB9
cs=0x2a05;eip=0x000ebb; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 86307 mov     [bp+var_A], ax ;~ 2A05:0EBB
cs=0x2a05;eip=0x000ebe; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 86308 mov     [bp+var_C], ax ;~ 2A05:0EBE
cs=0x2a05;eip=0x000ec1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 86309 mov     bx, [bp+var_2] ;~ 2A05:0EC1
cs=0x2a05;eip=0x000ec4; 	T(MOV(ax, bx));	// 86310 mov     ax, bx ;~ 2A05:0EC4
cs=0x2a05;eip=0x000ec6; 	T(ADD(ax, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86311 add     ax, word ptr [bp+arg_2] ;~ 2A05:0EC6
cs=0x2a05;eip=0x000ec9; 	T(MOV(dx, es));	// 86312 mov     dx, es ;~ 2A05:0EC9
cs=0x2a05;eip=0x000ecb; 	T(INC(ax));	// 86313 inc     ax ;~ 2A05:0ECB
cs=0x2a05;eip=0x000ecc; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_c))));	// 86314 mov     cx, [bp+var_C] ;~ 2A05:0ECC
cs=0x2a05;eip=0x000ecf; 	T(SHR(cx, 1));	// 86315 shr     cx, 1 ;~ 2A05:0ECF
cs=0x2a05;eip=0x000ed1; 	T(di = bx+0x717E);	// 86316 lea     di, [bx+717Eh] ;~ 2A05:0ED1
cs=0x2a05;eip=0x000ed5; 	T(MOV(si, ax));	// 86317 mov     si, ax ;~ 2A05:0ED5
cs=0x2a05;eip=0x000ed7; 	X(PUSH(ds));	// 86318 push    ds ;~ 2A05:0ED7
cs=0x2a05;eip=0x000ed8; 	X(POP(es));	// 86319 pop     es ;~ 2A05:0ED8
cs=0x2a05;eip=0x000ed9; 	X(PUSH(ds));	// 86321 push    ds ;~ 2A05:0ED9
cs=0x2a05;eip=0x000eda; 	T(MOV(ds, dx));	// 86322 mov     ds, dx ;~ 2A05:0EDA
	// 86323 repne movsw ;~ 2A05:0EDC
cs=0x2a05;eip=0x000edc; 	X(	REPNE MOVSW);	// 86323 repne movsw ;~ 2A05:0EDC
cs=0x2a05;eip=0x000ede; 	J(JNC(loc_39511));	// 86324 jnb     short loc_39511 ;~ 2A05:0EDE
cs=0x2a05;eip=0x000ee0; 	X(MOVSB);	// 86325 movsb ;~ 2A05:0EE0
loc_39511:
	// 9736 
cs=0x2a05;eip=0x000ee1; 	X(POP(ds));	// 86328 pop     ds ;~ 2A05:0EE1
cs=0x2a05;eip=0x000ee2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 86329 mov     ax, [bp+var_C] ;~ 2A05:0EE2
cs=0x2a05;eip=0x000ee5; 	X(ADD(*(dw*)(raddr(ss,bp+var_2)), ax));	// 86330 add     [bp+var_2], ax ;~ 2A05:0EE5
loc_39518:
	// 9737 
cs=0x2a05;eip=0x000ee8; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 86335 les     bx, [bp+arg_2]  ; jumptable 000394D5 case 231 ;~ 2A05:0EE8
cs=0x2a05;eip=0x000eeb; 	T(MOV(al, *(raddr(es,bx))));	// 86337 mov     al, es:[bx] ;~ 2A05:0EEB
cs=0x2a05;eip=0x000eee; 	T(SUB(ah, ah));	// 86338 sub     ah, ah ;~ 2A05:0EEE
cs=0x2a05;eip=0x000ef0; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+arg_2))), ax));	// 86339 add     word ptr [bp+arg_2], ax ;~ 2A05:0EF0
cs=0x2a05;eip=0x000ef3; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86340 inc     word ptr [bp+arg_2] ;~ 2A05:0EF3
cs=0x2a05;eip=0x000ef6; 	J(JMP(def_394d5));	// 86341 jmp     def_394D5       ; jumptable 000394D5 default case, cases 217-219,227 ;~ 2A05:0EF6
loc_3952a:
	// 9738 
cs=0x2a05;eip=0x000efa; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 86347 mov     bx, [bp+arg_0]  ; jumptable 000394D5 case 230 ;~ 2A05:0EFA
cs=0x2a05;eip=0x000efd; 	T(MOV(si, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86348 mov     si, word ptr [bp+arg_2] ;~ 2A05:0EFD
cs=0x2a05;eip=0x000f00; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86349 inc     word ptr [bp+arg_2] ;~ 2A05:0F00
cs=0x2a05;eip=0x000f03; 	T(MOV(al, *(raddr(es,si))));	// 86350 mov     al, es:[si] ;~ 2A05:0F03
cs=0x2a05;eip=0x000f06; 	X(MOV(*(raddr(ds,bx+5)), al));	// 86351 mov     [bx+5], al ;~ 2A05:0F06
cs=0x2a05;eip=0x000f09; 	X(PUSH(es));	// 86352 push    es ;~ 2A05:0F09
cs=0x2a05;eip=0x000f0a; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86353 push    word ptr [bp+arg_2] ;~ 2A05:0F0A
cs=0x2a05;eip=0x000f0d; 	J(CALLF(audioresource_get_dword,0));	// 86354 call    audioresource_get_dword ;~ 2A05:0F0D
cs=0x2a05;eip=0x000f12; 	T(ADD(sp, 4));	// 86355 add     sp, 4 ;~ 2A05:0F12
cs=0x2a05;eip=0x000f15; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 86356 mov     bx, [bp+arg_0] ;~ 2A05:0F15
cs=0x2a05;eip=0x000f18; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 86357 mov     [bx+6], ax ;~ 2A05:0F18
cs=0x2a05;eip=0x000f1b; 	X(MOV(*(dw*)(raddr(ds,bx+8)), dx));	// 86358 mov     [bx+8], dx ;~ 2A05:0F1B
cs=0x2a05;eip=0x000f1e; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+arg_2))), 4));	// 86359 add     word ptr [bp+arg_2], 4 ;~ 2A05:0F1E
cs=0x2a05;eip=0x000f22; 	J(JMP(def_394d5));	// 86360 jmp     short def_394D5 ; jumptable 000394D5 default case, cases 217-219,227 ;~ 2A05:0F22
loc_39554:
	// 9739 
cs=0x2a05;eip=0x000f24; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 86365 mov     bx, [bp+arg_0]  ; jumptable 000394D5 cases 220-222,224-226,228,233,234 ;~ 2A05:0F24
cs=0x2a05;eip=0x000f27; 	T(LES(si, *(dd*)(raddr(ss,bp+arg_2))));	// 86366 les     si, [bp+arg_2] ;~ 2A05:0F27
cs=0x2a05;eip=0x000f2a; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86367 inc     word ptr [bp+arg_2] ;~ 2A05:0F2A
cs=0x2a05;eip=0x000f2d; 	T(MOV(al, *(raddr(es,si))));	// 86368 mov     al, es:[si] ;~ 2A05:0F2D
cs=0x2a05;eip=0x000f30; 	X(MOV(*(raddr(ds,bx+5)), al));	// 86369 mov     [bx+5], al ;~ 2A05:0F30
cs=0x2a05;eip=0x000f33; 	J(JMP(def_394d5));	// 86370 jmp     short def_394D5 ; jumptable 000394D5 default case, cases 217-219,227 ;~ 2A05:0F33
loc_39566:
	// 9740 
cs=0x2a05;eip=0x000f36; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 86376 mov     bx, [bp+arg_0]  ; jumptable 000394D5 case 223 ;~ 2A05:0F36
cs=0x2a05;eip=0x000f39; 	T(MOV(si, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86377 mov     si, word ptr [bp+arg_2] ;~ 2A05:0F39
cs=0x2a05;eip=0x000f3c; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86378 inc     word ptr [bp+arg_2] ;~ 2A05:0F3C
cs=0x2a05;eip=0x000f3f; 	T(MOV(al, *(raddr(es,si))));	// 86379 mov     al, es:[si] ;~ 2A05:0F3F
cs=0x2a05;eip=0x000f42; 	X(MOV(*(raddr(ds,bx+5)), al));	// 86380 mov     [bx+5], al ;~ 2A05:0F42
cs=0x2a05;eip=0x000f45; 	T(MOV(si, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86381 mov     si, word ptr [bp+arg_2] ;~ 2A05:0F45
cs=0x2a05;eip=0x000f48; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86382 inc     word ptr [bp+arg_2] ;~ 2A05:0F48
cs=0x2a05;eip=0x000f4b; 	T(MOV(al, *(raddr(es,si))));	// 86383 mov     al, es:[si] ;~ 2A05:0F4B
cs=0x2a05;eip=0x000f4e; 	T(SUB(ah, ah));	// 86384 sub     ah, ah ;~ 2A05:0F4E
cs=0x2a05;eip=0x000f50; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 86385 mov     [bx+6], ax ;~ 2A05:0F50
cs=0x2a05;eip=0x000f53; 	X(MOV(*(dw*)(raddr(ds,bx+8)), 0));	// 86386 mov     word ptr [bx+8], 0 ;~ 2A05:0F53
cs=0x2a05;eip=0x000f58; 	J(JMP(def_394d5));	// 86387 jmp     short def_394D5 ; jumptable 000394D5 default case, cases 217-219,227 ;~ 2A05:0F58
loc_3958a:
	// 9741 
cs=0x2a05;eip=0x000f5a; 	X(PUSH(es));	// 86392 push    es              ; jumptable 000394D5 case 229 ;~ 2A05:0F5A
cs=0x2a05;eip=0x000f5b; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86393 push    word ptr [bp+arg_2] ;~ 2A05:0F5B
cs=0x2a05;eip=0x000f5e; 	J(CALLF(audioresource_get_word,0));	// 86394 call    audioresource_get_word ;~ 2A05:0F5E
cs=0x2a05;eip=0x000f63; 	T(ADD(sp, 4));	// 86395 add     sp, 4 ;~ 2A05:0F63
cs=0x2a05;eip=0x000f66; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 86396 mov     bx, [bp+arg_0] ;~ 2A05:0F66
cs=0x2a05;eip=0x000f69; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 86397 mov     [bx+6], ax ;~ 2A05:0F69
cs=0x2a05;eip=0x000f6c; 	X(MOV(*(dw*)(raddr(ds,bx+8)), 0));	// 86398 mov     word ptr [bx+8], 0 ;~ 2A05:0F6C
cs=0x2a05;eip=0x000f71; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+arg_2))), 2));	// 86399 add     word ptr [bp+arg_2], 2 ;~ 2A05:0F71
cs=0x2a05;eip=0x000f75; 	J(JMP(def_394d5));	// 86400 jmp     short def_394D5 ; jumptable 000394D5 default case, cases 217-219,227 ;~ 2A05:0F75
def_394d5:
	// 9742 
cs=0x2a05;eip=0x000f9c; 	T(CMP(*(raddr(ss,bp+var_8)), 0x0D9));	// 86425 cmp     [bp+var_8], 0D9h ; 'Ù' ; jumptable 000394D5 default case, cases 217-219,227 ;~ 2A05:0F9C
cs=0x2a05;eip=0x000fa0; 	J(JNC(loc_39629));	// 86426 jnb     short loc_39629 ;~ 2A05:0FA0
cs=0x2a05;eip=0x000fa2; 	T(CMP(*(raddr(ss,bp+var_8)), 0x80));	// 86427 cmp     [bp+var_8], 80h ; '€' ;~ 2A05:0FA2
cs=0x2a05;eip=0x000fa6; 	J(JBE(loc_395e7));	// 86428 jbe     short loc_395E7 ;~ 2A05:0FA6
cs=0x2a05;eip=0x000fa8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 86429 mov     bx, [bp+arg_0] ;~ 2A05:0FA8
cs=0x2a05;eip=0x000fab; 	T(LES(si, *(dd*)(raddr(ss,bp+arg_2))));	// 86430 les     si, [bp+arg_2] ;~ 2A05:0FAB
cs=0x2a05;eip=0x000fae; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86431 inc     word ptr [bp+arg_2] ;~ 2A05:0FAE
cs=0x2a05;eip=0x000fb1; 	T(MOV(al, *(raddr(es,si))));	// 86432 mov     al, es:[si] ;~ 2A05:0FB1
cs=0x2a05;eip=0x000fb4; 	X(MOV(*(raddr(ds,bx+5)), al));	// 86433 mov     [bx+5], al ;~ 2A05:0FB4
loc_395e7:
	// 9743 
cs=0x2a05;eip=0x000fb7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 86436 mov     bx, [bp+arg_0] ;~ 2A05:0FB7
cs=0x2a05;eip=0x000fba; 	T(SUB(ax, ax));	// 86437 sub     ax, ax ;~ 2A05:0FBA
cs=0x2a05;eip=0x000fbc; 	X(MOV(*(dw*)(raddr(ds,bx+8)), ax));	// 86438 mov     [bx+8], ax ;~ 2A05:0FBC
cs=0x2a05;eip=0x000fbf; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 86439 mov     [bx+6], ax ;~ 2A05:0FBF
cs=0x2a05;eip=0x000fc2; 	T(MOV(si, bx));	// 86440 mov     si, bx ;~ 2A05:0FC2
loc_395f4:
	// 9744 
cs=0x2a05;eip=0x000fc4; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 86443 les     bx, [bp+arg_2] ;~ 2A05:0FC4
cs=0x2a05;eip=0x000fc7; 	T(MOV(al, *(raddr(es,bx))));	// 86444 mov     al, es:[bx] ;~ 2A05:0FC7
cs=0x2a05;eip=0x000fca; 	T(SUB(ah, ah));	// 86445 sub     ah, ah ;~ 2A05:0FCA
cs=0x2a05;eip=0x000fcc; 	T(AND(ax, 0x7F));	// 86446 and     ax, 7Fh ;~ 2A05:0FCC
cs=0x2a05;eip=0x000fcf; 	T(SUB(dx, dx));	// 86447 sub     dx, dx ;~ 2A05:0FCF
cs=0x2a05;eip=0x000fd1; 	T(MOV(cx, *(dw*)(raddr(ds,si+6))));	// 86448 mov     cx, [si+6] ;~ 2A05:0FD1
cs=0x2a05;eip=0x000fd4; 	T(MOV(bx, *(dw*)(raddr(ds,si+8))));	// 86449 mov     bx, [si+8] ;~ 2A05:0FD4
cs=0x2a05;eip=0x000fd7; 	T(MOV(di, cx));	// 86450 mov     di, cx ;~ 2A05:0FD7
cs=0x2a05;eip=0x000fd9; 	T(MOV(cl, 7));	// 86451 mov     cl, 7 ;~ 2A05:0FD9
loc_3960b:
	// 9745 
cs=0x2a05;eip=0x000fdb; 	T(SHL(di, 1));	// 86454 shl     di, 1 ;~ 2A05:0FDB
cs=0x2a05;eip=0x000fdd; 	T(RCL(bx, 1));	// 86455 rcl     bx, 1 ;~ 2A05:0FDD
cs=0x2a05;eip=0x000fdf; 	T(DEC(cl));	// 86456 dec     cl ;~ 2A05:0FDF
cs=0x2a05;eip=0x000fe1; 	J(JNZ(loc_3960b));	// 86457 jnz     short loc_3960B ;~ 2A05:0FE1
cs=0x2a05;eip=0x000fe3; 	T(ADD(ax, di));	// 86458 add     ax, di ;~ 2A05:0FE3
cs=0x2a05;eip=0x000fe5; 	T(ADC(dx, bx));	// 86459 adc     dx, bx ;~ 2A05:0FE5
cs=0x2a05;eip=0x000fe7; 	X(MOV(*(dw*)(raddr(ds,si+6)), ax));	// 86460 mov     [si+6], ax ;~ 2A05:0FE7
cs=0x2a05;eip=0x000fea; 	X(MOV(*(dw*)(raddr(ds,si+8)), dx));	// 86461 mov     [si+8], dx ;~ 2A05:0FEA
cs=0x2a05;eip=0x000fed; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 86462 les     bx, [bp+arg_2] ;~ 2A05:0FED
cs=0x2a05;eip=0x000ff0; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86463 inc     word ptr [bp+arg_2] ;~ 2A05:0FF0
cs=0x2a05;eip=0x000ff3; 	T(TEST(*(raddr(es,bx)), 0x80));	// 86464 test    byte ptr es:[bx], 80h ;~ 2A05:0FF3
cs=0x2a05;eip=0x000ff7; 	J(JNZ(loc_395f4));	// 86465 jnz     short loc_395F4 ;~ 2A05:0FF7
loc_39629:
	// 9746 
cs=0x2a05;eip=0x000ff9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 86468 mov     bx, [bp+arg_0] ;~ 2A05:0FF9
cs=0x2a05;eip=0x000ffc; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86469 mov     ax, word ptr [bp+arg_2] ;~ 2A05:0FFC
cs=0x2a05;eip=0x000fff; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_6))));	// 86470 sub     ax, [bp+var_6] ;~ 2A05:0FFF
cs=0x2a05;eip=0x001002; 	X(MOV(*(raddr(ds,bx+0x0A)), al));	// 86471 mov     [bx+0Ah], al ;~ 2A05:1002
cs=0x2a05;eip=0x001005; 	X(POP(ds));	// 86472 pop     ds ;~ 2A05:1005
cs=0x2a05;eip=0x001006; 	X(POP(si));	// 86473 pop     si ;~ 2A05:1006
cs=0x2a05;eip=0x001007; 	X(POP(di));	// 86474 pop     di ;~ 2A05:1007
cs=0x2a05;eip=0x001008; 	T(MOV(sp, bp));	// 86475 mov     sp, bp ;~ 2A05:1008
cs=0x2a05;eip=0x00100a; 	X(POP(bp));	// 86476 pop     bp ;~ 2A05:100A
cs=0x2a05;eip=0x00100b; 	J(RETF(0));	// 86477 retf ;~ 2A05:100B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kdef_394d5: 	goto def_394d5;
        case m2c::kloc_39480: 	goto loc_39480;
        case m2c::kloc_39496: 	goto loc_39496;
        case m2c::kloc_394d2: 	goto loc_394d2;
        case m2c::kloc_394da: 	goto loc_394da;
        case m2c::kloc_39511: 	goto loc_39511;
        case m2c::kloc_39518: 	goto loc_39518;
        case m2c::kloc_3952a: 	goto loc_3952a;
        case m2c::kloc_39554: 	goto loc_39554;
        case m2c::kloc_39566: 	goto loc_39566;
        case m2c::kloc_3958a: 	goto loc_3958a;
        case m2c::kloc_395e7: 	goto loc_395e7;
        case m2c::kloc_395f4: 	goto loc_395f4;
        case m2c::kloc_3960b: 	goto loc_3960b;
        case m2c::kloc_39629: 	goto loc_39629;
        case m2c::ksub_3945a: 	goto sub_3945a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3963c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3963c:
    _begin:
#undef var_4
#define var_4 -4
	// 86488 var_4           = word ptr -4 ;~ 2A05:100C
#undef var_2
#define var_2 -2
	// 86489 var_2           = word ptr -2 ;~ 2A05:100C
cs=0x2a05;eip=0x00100c; 	X(PUSH(bp));	// 86491 push    bp ;~ 2A05:100C
cs=0x2a05;eip=0x00100d; 	T(MOV(bp, sp));	// 86492 mov     bp, sp ;~ 2A05:100D
cs=0x2a05;eip=0x00100f; 	T(SUB(sp, 6));	// 86493 sub     sp, 6 ;~ 2A05:100F
cs=0x2a05;eip=0x001012; 	X(PUSH(di));	// 86494 push    di ;~ 2A05:1012
cs=0x2a05;eip=0x001013; 	X(PUSH(si));	// 86495 push    si ;~ 2A05:1013
cs=0x2a05;eip=0x001014; 	X(PUSH(ds));	// 86496 push    ds ;~ 2A05:1014
cs=0x2a05;eip=0x001015; 	T(MOV(ax, seg_offset(dseg)));	// 86497 mov     ax, seg dseg ;~ 2A05:1015
cs=0x2a05;eip=0x001018; 	T(MOV(ds, ax));	// 86498 mov     ds, ax ;~ 2A05:1018
cs=0x2a05;eip=0x00101a; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 86499 mov     [bp+var_2], 0 ;~ 2A05:101A
cs=0x2a05;eip=0x00101f; 	T(MOV(al, byte_459d2));	// 86500 mov     al, byte_459D2 ;~ 2A05:101F
cs=0x2a05;eip=0x001022; 	T(SUB(ah, ah));	// 86501 sub     ah, ah ;~ 2A05:1022
cs=0x2a05;eip=0x001024; 	T(OR(ax, ax));	// 86502 or      ax, ax ;~ 2A05:1024
cs=0x2a05;eip=0x001026; 	J(JZ(loc_39683));	// 86503 jz      short loc_39683 ;~ 2A05:1026
cs=0x2a05;eip=0x001028; 	T(MOV(di, 0x0A2B6));	// 86504 mov     di, 0A2B6h ;~ 2A05:1028
loc_3965b:
	// 9747 
cs=0x2a05;eip=0x00102b; 	T(MOV(si, di));	// 86507 mov     si, di ;~ 2A05:102B
cs=0x2a05;eip=0x00102d; 	T(CMP(*(raddr(ds,si+1)), 0));	// 86508 cmp     byte ptr [si+1], 0 ;~ 2A05:102D
cs=0x2a05;eip=0x001031; 	J(JZ(loc_39670));	// 86509 jz      short loc_39670 ;~ 2A05:1031
cs=0x2a05;eip=0x001033; 	T(CMP(*(raddr(ds,si)), 0x10));	// 86510 cmp     byte ptr [si], 10h ;~ 2A05:1033
cs=0x2a05;eip=0x001036; 	J(JNC(loc_39670));	// 86511 jnb     short loc_39670 ;~ 2A05:1036
cs=0x2a05;eip=0x001038; 	X(PUSH(si));	// 86512 push    si ;~ 2A05:1038
cs=0x2a05;eip=0x001039; 	X(PUSH(cs));	// 86513 push    cs ;~ 2A05:1039
cs=0x2a05;eip=0x00103a; 	J(CALL(sub_3968a,0));	// 86514 call    near ptr sub_3968A ;~ 2A05:103A
cs=0x2a05;eip=0x00103d; 	T(ADD(sp, 2));	// 86515 add     sp, 2 ;~ 2A05:103D
loc_39670:
	// 9748 
cs=0x2a05;eip=0x001040; 	T(ADD(di, 0x2E));	// 86519 add     di, 2Eh ; '.' ;~ 2A05:1040
cs=0x2a05;eip=0x001043; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 86520 inc     [bp+var_2] ;~ 2A05:1043
cs=0x2a05;eip=0x001046; 	T(MOV(al, byte_459d2));	// 86521 mov     al, byte_459D2 ;~ 2A05:1046
cs=0x2a05;eip=0x001049; 	T(SUB(ah, ah));	// 86522 sub     ah, ah ;~ 2A05:1049
cs=0x2a05;eip=0x00104b; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), ax));	// 86523 cmp     [bp+var_2], ax ;~ 2A05:104B
cs=0x2a05;eip=0x00104e; 	J(JC(loc_3965b));	// 86524 jb      short loc_3965B ;~ 2A05:104E
cs=0x2a05;eip=0x001050; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), si));	// 86525 mov     [bp+var_4], si ;~ 2A05:1050
loc_39683:
	// 9749 
cs=0x2a05;eip=0x001053; 	X(POP(ds));	// 86528 pop     ds ;~ 2A05:1053
cs=0x2a05;eip=0x001054; 	X(POP(si));	// 86529 pop     si ;~ 2A05:1054
cs=0x2a05;eip=0x001055; 	X(POP(di));	// 86530 pop     di ;~ 2A05:1055
cs=0x2a05;eip=0x001056; 	T(MOV(sp, bp));	// 86531 mov     sp, bp ;~ 2A05:1056
cs=0x2a05;eip=0x001058; 	X(POP(bp));	// 86532 pop     bp ;~ 2A05:1058
cs=0x2a05;eip=0x001059; 	J(RETF(0));	// 86533 retf ;~ 2A05:1059

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_3965b: 	goto loc_3965b;
        case m2c::kloc_39670: 	goto loc_39670;
        case m2c::kloc_39683: 	goto loc_39683;
        case m2c::ksub_3963c: 	goto sub_3963c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3968a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3968a:
    _begin:
#undef var_4
#define var_4 -4
	// 86544 var_4           = dword ptr -4 ;~ 2A05:105A
#undef arg_0
#define arg_0 6
	// 86545 arg_0           = word ptr  6 ;~ 2A05:105A
cs=0x2a05;eip=0x00105a; 	X(PUSH(bp));	// 86547 push    bp ;~ 2A05:105A
cs=0x2a05;eip=0x00105b; 	T(MOV(bp, sp));	// 86548 mov     bp, sp ;~ 2A05:105B
cs=0x2a05;eip=0x00105d; 	T(SUB(sp, 4));	// 86549 sub     sp, 4 ;~ 2A05:105D
cs=0x2a05;eip=0x001060; 	X(PUSH(ds));	// 86550 push    ds ;~ 2A05:1060
cs=0x2a05;eip=0x001061; 	T(MOV(ax, seg_offset(dseg)));	// 86551 mov     ax, seg dseg ;~ 2A05:1061
cs=0x2a05;eip=0x001064; 	T(MOV(ds, ax));	// 86552 mov     ds, ax ;~ 2A05:1064
cs=0x2a05;eip=0x001066; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 86553 mov     bx, [bp+arg_0] ;~ 2A05:1066
cs=0x2a05;eip=0x001069; 	X(ADD(*(dw*)(raddr(ds,bx+8)), 1));	// 86554 add     word ptr [bx+8], 1 ;~ 2A05:1069
cs=0x2a05;eip=0x00106d; 	X(ADC(*(dw*)(raddr(ds,bx+0x0A)), 0));	// 86555 adc     word ptr [bx+0Ah], 0 ;~ 2A05:106D
cs=0x2a05;eip=0x001071; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0C))));	// 86556 mov     ax, [bx+0Ch] ;~ 2A05:1071
cs=0x2a05;eip=0x001074; 	T(OR(ax, *(dw*)(raddr(ds,bx+0x0E))));	// 86557 or      ax, [bx+0Eh] ;~ 2A05:1074
cs=0x2a05;eip=0x001077; 	J(JNZ(loc_396f2));	// 86558 jnz     short loc_396F2 ;~ 2A05:1077
cs=0x2a05;eip=0x001079; 	X(PUSH(bx));	// 86559 push    bx ;~ 2A05:1079
cs=0x2a05;eip=0x00107a; 	T(MOV(al, *(raddr(ds,bx+0x2C))));	// 86560 mov     al, [bx+2Ch] ;~ 2A05:107A
cs=0x2a05;eip=0x00107d; 	T(SUB(ah, ah));	// 86561 sub     ah, ah ;~ 2A05:107D
cs=0x2a05;eip=0x00107f; 	X(PUSH(ax));	// 86562 push    ax ;~ 2A05:107F
cs=0x2a05;eip=0x001080; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 86563 mov     ax, word ptr audiodriverbinary ;~ 2A05:1080
cs=0x2a05;eip=0x001083; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 86564 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:1083
cs=0x2a05;eip=0x001087; 	T(ADD(ax, 0x0C));	// 86565 add     ax, 0Ch ;~ 2A05:1087
cs=0x2a05;eip=0x00108a; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 86566 mov     word ptr [bp+var_4+2], dx ;~ 2A05:108A
cs=0x2a05;eip=0x00108d; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 86567 mov     word ptr [bp+var_4], ax ;~ 2A05:108D
cs=0x2a05;eip=0x001090; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_4))));	// 86568 call    [bp+var_4] ;~ 2A05:1090
cs=0x2a05;eip=0x001093; 	T(ADD(sp, 4));	// 86569 add     sp, 4 ;~ 2A05:1093
cs=0x2a05;eip=0x001096; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 86570 mov     bx, [bp+arg_0] ;~ 2A05:1096
cs=0x2a05;eip=0x001099; 	X(MOV(*(raddr(ds,bx+1)), 2));	// 86571 mov     byte ptr [bx+1], 2 ;~ 2A05:1099
cs=0x2a05;eip=0x00109d; 	T(MOV(al, 0x4C));	// 86572 mov     al, 4Ch ; 'L' ;~ 2A05:109D
cs=0x2a05;eip=0x00109f; 	X(MUL1_1(*(raddr(ds,bx))));	// 86573 mul     byte ptr [bx] ;~ 2A05:109F
cs=0x2a05;eip=0x0010a1; 	T(MOV(bx, ax));	// 86574 mov     bx, ax ;~ 2A05:10A1
cs=0x2a05;eip=0x0010a3; 	T(CMP(*(raddr(ds,bx-0x7DDF)), 0));	// 86575 cmp     byte ptr [bx-7DDFh], 0 ;~ 2A05:10A3
cs=0x2a05;eip=0x0010a8; 	J(JZ(loc_396e6));	// 86576 jz      short loc_396E6 ;~ 2A05:10A8
cs=0x2a05;eip=0x0010aa; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 86577 mov     bx, [bp+arg_0] ;~ 2A05:10AA
cs=0x2a05;eip=0x0010ad; 	X(MOV(*(raddr(ds,bx+0x16)), 3));	// 86578 mov     byte ptr [bx+16h], 3 ;~ 2A05:10AD
cs=0x2a05;eip=0x0010b1; 	X(POP(ds));	// 86579 pop     ds ;~ 2A05:10B1
cs=0x2a05;eip=0x0010b2; 	T(MOV(sp, bp));	// 86580 mov     sp, bp ;~ 2A05:10B2
cs=0x2a05;eip=0x0010b4; 	X(POP(bp));	// 86581 pop     bp ;~ 2A05:10B4
cs=0x2a05;eip=0x0010b5; 	J(RETF(0));	// 86582 retf ;~ 2A05:10B5
loc_396e6:
	// 9750 
cs=0x2a05;eip=0x0010b6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 86586 mov     bx, [bp+arg_0] ;~ 2A05:10B6
cs=0x2a05;eip=0x0010b9; 	X(MOV(*(raddr(ds,bx+0x16)), 4));	// 86587 mov     byte ptr [bx+16h], 4 ;~ 2A05:10B9
cs=0x2a05;eip=0x0010bd; 	X(POP(ds));	// 86588 pop     ds ;~ 2A05:10BD
cs=0x2a05;eip=0x0010be; 	T(MOV(sp, bp));	// 86589 mov     sp, bp ;~ 2A05:10BE
cs=0x2a05;eip=0x0010c0; 	X(POP(bp));	// 86590 pop     bp ;~ 2A05:10C0
cs=0x2a05;eip=0x0010c1; 	J(RETF(0));	// 86591 retf ;~ 2A05:10C1
loc_396f2:
	// 9751 
cs=0x2a05;eip=0x0010c2; 	X(SUB(*(dw*)(raddr(ds,bx+0x0C)), 1));	// 86595 sub     word ptr [bx+0Ch], 1 ;~ 2A05:10C2
cs=0x2a05;eip=0x0010c6; 	X(SBB(*(dw*)(raddr(ds,bx+0x0E)), 0));	// 86596 sbb     word ptr [bx+0Eh], 0 ;~ 2A05:10C6
cs=0x2a05;eip=0x0010ca; 	X(POP(ds));	// 86597 pop     ds ;~ 2A05:10CA
cs=0x2a05;eip=0x0010cb; 	T(MOV(sp, bp));	// 86598 mov     sp, bp ;~ 2A05:10CB
cs=0x2a05;eip=0x0010cd; 	X(POP(bp));	// 86599 pop     bp ;~ 2A05:10CD
cs=0x2a05;eip=0x0010ce; 	J(RETF(0));	// 86600 retf ;~ 2A05:10CE

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_396e6: 	goto loc_396e6;
        case m2c::kloc_396f2: 	goto loc_396f2;
        case m2c::ksub_3968a: 	goto sub_3968a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_39700(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_39700:
    _begin:
#undef var_c
#define var_c -0x0C
	// 86613 var_C           = dword ptr -0Ch ;~ 2A05:10D0
#undef var_8
#define var_8 -8
	// 86614 var_8           = word ptr -8 ;~ 2A05:10D0
#undef var_6
#define var_6 -6
	// 86615 var_6           = dword ptr -6 ;~ 2A05:10D0
#undef var_2
#define var_2 -2
	// 86616 var_2           = word ptr -2 ;~ 2A05:10D0
cs=0x2a05;eip=0x0010d0; 	X(PUSH(bp));	// 86618 push    bp ;~ 2A05:10D0
cs=0x2a05;eip=0x0010d1; 	T(MOV(bp, sp));	// 86619 mov     bp, sp ;~ 2A05:10D1
cs=0x2a05;eip=0x0010d3; 	T(SUB(sp, 0x0C));	// 86620 sub     sp, 0Ch ;~ 2A05:10D3
cs=0x2a05;eip=0x0010d6; 	X(PUSH(si));	// 86621 push    si ;~ 2A05:10D6
cs=0x2a05;eip=0x0010d7; 	X(PUSH(ds));	// 86622 push    ds ;~ 2A05:10D7
cs=0x2a05;eip=0x0010d8; 	T(MOV(ax, seg_offset(dseg)));	// 86623 mov     ax, seg dseg ;~ 2A05:10D8
cs=0x2a05;eip=0x0010db; 	T(MOV(ds, ax));	// 86624 mov     ds, ax ;~ 2A05:10DB
cs=0x2a05;eip=0x0010dd; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 86625 mov     [bp+var_2], 0 ;~ 2A05:10DD
cs=0x2a05;eip=0x0010e2; 	J(JMP(loc_398d0));	// 86626 jmp     loc_398D0 ;~ 2A05:10E2
loc_39716:
	// 9752 
cs=0x2a05;eip=0x0010e6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 86631 mov     bx, [bp+var_8] ;~ 2A05:10E6
cs=0x2a05;eip=0x0010e9; 	X(MOV(*(raddr(ds,bx+0x16)), 2));	// 86632 mov     byte ptr [bx+16h], 2 ;~ 2A05:10E9
loc_3971d:
	// 9753 
cs=0x2a05;eip=0x0010ed; 	T(CMP(*(raddr(ds,bx+0x16)), 2));	// 86636 cmp     byte ptr [bx+16h], 2 ;~ 2A05:10ED
cs=0x2a05;eip=0x0010f1; 	J(JNZ(loc_3973d));	// 86637 jnz     short loc_3973D ;~ 2A05:10F1
cs=0x2a05;eip=0x0010f3; 	T(LES(si, *(dd*)(raddr(ss,bp+var_6))));	// 86638 les     si, [bp+var_6] ;~ 2A05:10F3
cs=0x2a05;eip=0x0010f6; 	T(MOV(ax, *(dw*)(raddr(es,si+0x22))));	// 86639 mov     ax, es:[si+22h] ;~ 2A05:10F6
cs=0x2a05;eip=0x0010fa; 	X(SUB(*(dw*)(raddr(ds,bx+0x14)), ax));	// 86640 sub     [bx+14h], ax ;~ 2A05:10FA
cs=0x2a05;eip=0x0010fd; 	T(MOV(ax, *(dw*)(raddr(es,si+0x24))));	// 86641 mov     ax, es:[si+24h] ;~ 2A05:10FD
cs=0x2a05;eip=0x001101; 	T(CMP(*(dw*)(raddr(ds,bx+0x14)), ax));	// 86642 cmp     [bx+14h], ax ;~ 2A05:1101
cs=0x2a05;eip=0x001104; 	J(JG(loc_3973d));	// 86643 jg      short loc_3973D ;~ 2A05:1104
cs=0x2a05;eip=0x001106; 	X(MOV(*(raddr(ds,bx+0x16)), 3));	// 86644 mov     byte ptr [bx+16h], 3 ;~ 2A05:1106
cs=0x2a05;eip=0x00110a; 	X(MOV(*(dw*)(raddr(ds,bx+0x14)), ax));	// 86645 mov     [bx+14h], ax ;~ 2A05:110A
loc_3973d:
	// 9754 
cs=0x2a05;eip=0x00110d; 	T(CMP(*(raddr(ds,bx+0x16)), 3));	// 86649 cmp     byte ptr [bx+16h], 3 ;~ 2A05:110D
cs=0x2a05;eip=0x001111; 	J(JNZ(loc_39754));	// 86650 jnz     short loc_39754 ;~ 2A05:1111
cs=0x2a05;eip=0x001113; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_6))));	// 86651 les     bx, [bp+var_6] ;~ 2A05:1113
cs=0x2a05;eip=0x001116; 	T(CMP(*(dw*)(raddr(es,bx+0x24)), 0));	// 86652 cmp     word ptr es:[bx+24h], 0 ;~ 2A05:1116
cs=0x2a05;eip=0x00111b; 	J(JNZ(loc_39754));	// 86653 jnz     short loc_39754 ;~ 2A05:111B
cs=0x2a05;eip=0x00111d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 86654 mov     bx, [bp+var_8] ;~ 2A05:111D
cs=0x2a05;eip=0x001120; 	X(MOV(*(raddr(ds,bx+0x16)), 4));	// 86655 mov     byte ptr [bx+16h], 4 ;~ 2A05:1120
loc_39754:
	// 9755 
cs=0x2a05;eip=0x001124; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 86659 mov     bx, [bp+var_8] ;~ 2A05:1124
cs=0x2a05;eip=0x001127; 	T(CMP(*(raddr(ds,bx+0x16)), 4));	// 86660 cmp     byte ptr [bx+16h], 4 ;~ 2A05:1127
cs=0x2a05;eip=0x00112b; 	J(JNZ(loc_397b1));	// 86661 jnz     short loc_397B1 ;~ 2A05:112B
cs=0x2a05;eip=0x00112d; 	T(LES(si, *(dd*)(raddr(ss,bp+var_6))));	// 86662 les     si, [bp+var_6] ;~ 2A05:112D
cs=0x2a05;eip=0x001130; 	T(MOV(ax, *(dw*)(raddr(es,si+0x26))));	// 86663 mov     ax, es:[si+26h] ;~ 2A05:1130
cs=0x2a05;eip=0x001134; 	X(SUB(*(dw*)(raddr(ds,bx+0x14)), ax));	// 86664 sub     [bx+14h], ax ;~ 2A05:1134
cs=0x2a05;eip=0x001137; 	T(CMP(*(dw*)(raddr(ds,bx+0x14)), 0));	// 86665 cmp     word ptr [bx+14h], 0 ;~ 2A05:1137
cs=0x2a05;eip=0x00113b; 	J(JG(loc_397b1));	// 86666 jg      short loc_397B1 ;~ 2A05:113B
cs=0x2a05;eip=0x00113d; 	X(MOV(*(dw*)(raddr(ds,bx+0x14)), 0));	// 86667 mov     word ptr [bx+14h], 0 ;~ 2A05:113D
cs=0x2a05;eip=0x001142; 	X(MOV(*(raddr(ds,bx+0x16)), 0));	// 86668 mov     byte ptr [bx+16h], 0 ;~ 2A05:1142
cs=0x2a05;eip=0x001146; 	X(MOV(*(raddr(ds,bx+1)), 0));	// 86669 mov     byte ptr [bx+1], 0 ;~ 2A05:1146
cs=0x2a05;eip=0x00114a; 	T(MOV(al, 0x4C));	// 86670 mov     al, 4Ch ; 'L' ;~ 2A05:114A
cs=0x2a05;eip=0x00114c; 	X(MUL1_1(*(raddr(ds,bx))));	// 86671 mul     byte ptr [bx] ;~ 2A05:114C
cs=0x2a05;eip=0x00114e; 	T(MOV(bx, ax));	// 86672 mov     bx, ax ;~ 2A05:114E
cs=0x2a05;eip=0x001150; 	X(DEC(*(((audiochunks_unk)+0x15)+bx)));	// 86673 dec     (audiochunks_unk+15h)[bx] ;~ 2A05:1150
cs=0x2a05;eip=0x001154; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 86674 push    [bp+var_8] ;~ 2A05:1154
cs=0x2a05;eip=0x001157; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 86675 mov     bx, [bp+var_8] ;~ 2A05:1157
cs=0x2a05;eip=0x00115a; 	T(MOV(al, *(raddr(ds,bx+0x2C))));	// 86676 mov     al, [bx+2Ch] ;~ 2A05:115A
cs=0x2a05;eip=0x00115d; 	T(SUB(ah, ah));	// 86677 sub     ah, ah ;~ 2A05:115D
cs=0x2a05;eip=0x00115f; 	X(PUSH(ax));	// 86678 push    ax ;~ 2A05:115F
cs=0x2a05;eip=0x001160; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 86679 mov     ax, word ptr audiodriverbinary ;~ 2A05:1160
cs=0x2a05;eip=0x001163; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 86680 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:1163
cs=0x2a05;eip=0x001167; 	T(ADD(ax, 0x0F));	// 86681 add     ax, 0Fh ;~ 2A05:1167
cs=0x2a05;eip=0x00116a; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c+2))), dx));	// 86682 mov     word ptr [bp+var_C+2], dx ;~ 2A05:116A
cs=0x2a05;eip=0x00116d; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c))), ax));	// 86683 mov     word ptr [bp+var_C], ax ;~ 2A05:116D
cs=0x2a05;eip=0x001170; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_c))));	// 86684 call    [bp+var_C] ;~ 2A05:1170
cs=0x2a05;eip=0x001173; 	T(ADD(sp, 4));	// 86685 add     sp, 4 ;~ 2A05:1173
cs=0x2a05;eip=0x001176; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 86686 mov     bx, [bp+var_8] ;~ 2A05:1176
cs=0x2a05;eip=0x001179; 	T(MOV(bl, *(raddr(ds,bx))));	// 86687 mov     bl, [bx] ;~ 2A05:1179
cs=0x2a05;eip=0x00117b; 	T(SUB(bh, bh));	// 86688 sub     bh, bh ;~ 2A05:117B
cs=0x2a05;eip=0x00117d; 	X(MOV(*((&byte_44aca)+bx), bh));	// 86689 mov     byte_44ACA[bx], bh ;~ 2A05:117D
loc_397b1:
	// 9756 
cs=0x2a05;eip=0x001181; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_6))));	// 86693 les     bx, [bp+var_6] ;~ 2A05:1181
cs=0x2a05;eip=0x001184; 	T(CMP(*(raddr(es,bx+0x28)), 0));	// 86694 cmp     byte ptr es:[bx+28h], 0 ;~ 2A05:1184
cs=0x2a05;eip=0x001189; 	J(JNZ(loc_397be));	// 86695 jnz     short loc_397BE ;~ 2A05:1189
cs=0x2a05;eip=0x00118b; 	J(JMP(loc_39853));	// 86696 jmp     loc_39853 ;~ 2A05:118B
loc_397be:
	// 9757 
cs=0x2a05;eip=0x00118e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 86700 mov     bx, [bp+var_8] ;~ 2A05:118E
cs=0x2a05;eip=0x001191; 	T(CMP(*(dw*)(raddr(ds,bx+0x18)), 0));	// 86701 cmp     word ptr [bx+18h], 0 ;~ 2A05:1191
cs=0x2a05;eip=0x001195; 	J(JZ(loc_397ce));	// 86702 jz      short loc_397CE ;~ 2A05:1195
cs=0x2a05;eip=0x001197; 	X(DEC(*(dw*)(raddr(ds,bx+0x18))));	// 86703 dec     word ptr [bx+18h] ;~ 2A05:1197
cs=0x2a05;eip=0x00119a; 	J(JMP(loc_39853));	// 86704 jmp     loc_39853 ;~ 2A05:119A
loc_397ce:
	// 9758 
cs=0x2a05;eip=0x00119e; 	T(CMP(*(dw*)(raddr(ds,bx+0x1A)), 0));	// 86709 cmp     word ptr [bx+1Ah], 0 ;~ 2A05:119E
cs=0x2a05;eip=0x0011a2; 	J(JZ(loc_39853));	// 86710 jz      short loc_39853 ;~ 2A05:11A2
cs=0x2a05;eip=0x0011a4; 	T(CMP(*(dw*)(raddr(ds,bx+0x1A)), 0x7FFF));	// 86711 cmp     word ptr [bx+1Ah], 7FFFh ;~ 2A05:11A4
cs=0x2a05;eip=0x0011a9; 	J(JZ(loc_397de));	// 86712 jz      short loc_397DE ;~ 2A05:11A9
cs=0x2a05;eip=0x0011ab; 	X(DEC(*(dw*)(raddr(ds,bx+0x1A))));	// 86713 dec     word ptr [bx+1Ah] ;~ 2A05:11AB
loc_397de:
	// 9759 
cs=0x2a05;eip=0x0011ae; 	T(CMP(*(raddr(ds,bx+0x27)), 0));	// 86716 cmp     byte ptr [bx+27h], 0 ;~ 2A05:11AE
cs=0x2a05;eip=0x0011b2; 	J(JNZ(loc_39850));	// 86717 jnz     short loc_39850 ;~ 2A05:11B2
cs=0x2a05;eip=0x0011b4; 	T(LES(si, *(dd*)(raddr(ss,bp+var_6))));	// 86718 les     si, [bp+var_6] ;~ 2A05:11B4
cs=0x2a05;eip=0x0011b7; 	T(MOV(al, *(raddr(es,si+0x29))));	// 86719 mov     al, es:[si+29h] ;~ 2A05:11B7
cs=0x2a05;eip=0x0011bb; 	X(MOV(*(raddr(ds,bx+0x27)), al));	// 86720 mov     [bx+27h], al ;~ 2A05:11BB
cs=0x2a05;eip=0x0011be; 	T(CMP(*(raddr(ds,bx+0x26)), 2));	// 86721 cmp     byte ptr [bx+26h], 2 ;~ 2A05:11BE
cs=0x2a05;eip=0x0011c2; 	J(JNZ(loc_39828));	// 86722 jnz     short loc_39828 ;~ 2A05:11C2
cs=0x2a05;eip=0x0011c4; 	T(MOV(si, bx));	// 86723 mov     si, bx ;~ 2A05:11C4
cs=0x2a05;eip=0x0011c6; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x24))));	// 86724 mov     ax, [si+24h] ;~ 2A05:11C6
cs=0x2a05;eip=0x0011c9; 	X(SUB(*(dw*)(raddr(ds,bx+0x1C)), ax));	// 86725 sub     [bx+1Ch], ax ;~ 2A05:11C9
cs=0x2a05;eip=0x0011cc; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1C))));	// 86726 mov     ax, [bx+1Ch] ;~ 2A05:11CC
cs=0x2a05;eip=0x0011cf; 	T(CWD);	// 86727 cwd ;~ 2A05:11CF
cs=0x2a05;eip=0x0011d0; 	T(XOR(ax, dx));	// 86728 xor     ax, dx ;~ 2A05:11D0
cs=0x2a05;eip=0x0011d2; 	T(SUB(ax, dx));	// 86729 sub     ax, dx ;~ 2A05:11D2
cs=0x2a05;eip=0x0011d4; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_6)))));	// 86730 mov     bx, word ptr [bp+var_6] ;~ 2A05:11D4
cs=0x2a05;eip=0x0011d7; 	T(CMP(*(dw*)(raddr(es,bx+0x2E)), ax));	// 86731 cmp     es:[bx+2Eh], ax ;~ 2A05:11D7
cs=0x2a05;eip=0x0011db; 	J(JA(loc_39853));	// 86732 ja      short loc_39853 ;~ 2A05:11DB
cs=0x2a05;eip=0x0011dd; 	T(TEST(*(raddr(es,bx+0x34)), 1));	// 86733 test    byte ptr es:[bx+34h], 1 ;~ 2A05:11DD
cs=0x2a05;eip=0x0011e2; 	J(JZ(loc_3981e));	// 86734 jz      short loc_3981E ;~ 2A05:11E2
cs=0x2a05;eip=0x0011e4; 	T(MOV(bx, si));	// 86735 mov     bx, si ;~ 2A05:11E4
cs=0x2a05;eip=0x0011e6; 	X(MOV(*(raddr(ds,bx+0x26)), 1));	// 86736 mov     byte ptr [bx+26h], 1 ;~ 2A05:11E6
cs=0x2a05;eip=0x0011ea; 	J(JMP(loc_39853));	// 86737 jmp     short loc_39853 ;~ 2A05:11EA
loc_3981e:
	// 9760 
cs=0x2a05;eip=0x0011ee; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 86744 mov     bx, [bp+var_8] ;~ 2A05:11EE
cs=0x2a05;eip=0x0011f1; 	X(MOV(*(dw*)(raddr(ds,bx+0x1C)), 0));	// 86745 mov     word ptr [bx+1Ch], 0 ;~ 2A05:11F1
cs=0x2a05;eip=0x0011f6; 	J(JMP(loc_39853));	// 86746 jmp     short loc_39853 ;~ 2A05:11F6
loc_39828:
	// 9761 
cs=0x2a05;eip=0x0011f8; 	T(MOV(si, bx));	// 86750 mov     si, bx ;~ 2A05:11F8
cs=0x2a05;eip=0x0011fa; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x24))));	// 86751 mov     ax, [si+24h] ;~ 2A05:11FA
cs=0x2a05;eip=0x0011fd; 	X(ADD(*(dw*)(raddr(ds,bx+0x1C)), ax));	// 86752 add     [bx+1Ch], ax ;~ 2A05:11FD
cs=0x2a05;eip=0x001200; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1C))));	// 86753 mov     ax, [bx+1Ch] ;~ 2A05:1200
cs=0x2a05;eip=0x001203; 	T(CWD);	// 86754 cwd ;~ 2A05:1203
cs=0x2a05;eip=0x001204; 	T(XOR(ax, dx));	// 86755 xor     ax, dx ;~ 2A05:1204
cs=0x2a05;eip=0x001206; 	T(SUB(ax, dx));	// 86756 sub     ax, dx ;~ 2A05:1206
cs=0x2a05;eip=0x001208; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_6)))));	// 86757 mov     bx, word ptr [bp+var_6] ;~ 2A05:1208
cs=0x2a05;eip=0x00120b; 	T(CMP(*(dw*)(raddr(es,bx+0x2E)), ax));	// 86758 cmp     es:[bx+2Eh], ax ;~ 2A05:120B
cs=0x2a05;eip=0x00120f; 	J(JA(loc_39853));	// 86759 ja      short loc_39853 ;~ 2A05:120F
cs=0x2a05;eip=0x001211; 	T(TEST(*(raddr(es,bx+0x34)), 2));	// 86760 test    byte ptr es:[bx+34h], 2 ;~ 2A05:1211
cs=0x2a05;eip=0x001216; 	J(JZ(loc_3981e));	// 86761 jz      short loc_3981E ;~ 2A05:1216
cs=0x2a05;eip=0x001218; 	T(MOV(bx, si));	// 86762 mov     bx, si ;~ 2A05:1218
cs=0x2a05;eip=0x00121a; 	X(MOV(*(raddr(ds,bx+0x26)), 2));	// 86763 mov     byte ptr [bx+26h], 2 ;~ 2A05:121A
cs=0x2a05;eip=0x00121e; 	J(JMP(loc_39853));	// 86764 jmp     short loc_39853 ;~ 2A05:121E
loc_39850:
	// 9762 
cs=0x2a05;eip=0x001220; 	X(DEC(*(raddr(ds,bx+0x27))));	// 86768 dec     byte ptr [bx+27h] ;~ 2A05:1220
loc_39853:
	// 9763 
cs=0x2a05;eip=0x001223; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_6))));	// 86772 les     bx, [bp+var_6] ;~ 2A05:1223
cs=0x2a05;eip=0x001226; 	T(CMP(*(raddr(es,bx+0x35)), 0));	// 86773 cmp     byte ptr es:[bx+35h], 0 ;~ 2A05:1226
cs=0x2a05;eip=0x00122b; 	J(JZ(loc_398a4));	// 86774 jz      short loc_398A4 ;~ 2A05:122B
cs=0x2a05;eip=0x00122d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 86775 mov     bx, [bp+var_8] ;~ 2A05:122D
cs=0x2a05;eip=0x001230; 	T(CMP(*(dw*)(raddr(ds,bx+0x1E)), 0));	// 86776 cmp     word ptr [bx+1Eh], 0 ;~ 2A05:1230
cs=0x2a05;eip=0x001234; 	J(JZ(loc_3986c));	// 86777 jz      short loc_3986C ;~ 2A05:1234
cs=0x2a05;eip=0x001236; 	X(DEC(*(dw*)(raddr(ds,bx+0x1E))));	// 86778 dec     word ptr [bx+1Eh] ;~ 2A05:1236
cs=0x2a05;eip=0x001239; 	J(JMP(loc_398a4));	// 86779 jmp     short loc_398A4 ;~ 2A05:1239
loc_3986c:
	// 9764 
cs=0x2a05;eip=0x00123c; 	T(CMP(*(dw*)(raddr(ds,bx+0x20)), 0));	// 86784 cmp     word ptr [bx+20h], 0 ;~ 2A05:123C
cs=0x2a05;eip=0x001240; 	J(JZ(loc_398a4));	// 86785 jz      short loc_398A4 ;~ 2A05:1240
cs=0x2a05;eip=0x001242; 	X(DEC(*(dw*)(raddr(ds,bx+0x20))));	// 86786 dec     word ptr [bx+20h] ;~ 2A05:1242
cs=0x2a05;eip=0x001245; 	T(CMP(*(raddr(ds,bx+0x28)), 0));	// 86787 cmp     byte ptr [bx+28h], 0 ;~ 2A05:1245
cs=0x2a05;eip=0x001249; 	J(JZ(loc_39880));	// 86788 jz      short loc_39880 ;~ 2A05:1249
cs=0x2a05;eip=0x00124b; 	X(DEC(*(raddr(ds,bx+0x28))));	// 86789 dec     byte ptr [bx+28h] ;~ 2A05:124B
cs=0x2a05;eip=0x00124e; 	J(JMP(loc_398a4));	// 86790 jmp     short loc_398A4 ;~ 2A05:124E
loc_39880:
	// 9765 
cs=0x2a05;eip=0x001250; 	T(LES(si, *(dd*)(raddr(ss,bp+var_6))));	// 86794 les     si, [bp+var_6] ;~ 2A05:1250
cs=0x2a05;eip=0x001253; 	T(MOV(al, *(raddr(es,si+0x3A))));	// 86795 mov     al, es:[si+3Ah] ;~ 2A05:1253
cs=0x2a05;eip=0x001257; 	X(MOV(*(raddr(ds,bx+0x28)), al));	// 86796 mov     [bx+28h], al ;~ 2A05:1257
cs=0x2a05;eip=0x00125a; 	T(MOV(al, *(raddr(ds,bx+0x29))));	// 86797 mov     al, [bx+29h] ;~ 2A05:125A
cs=0x2a05;eip=0x00125d; 	X(INC(*(raddr(ds,bx+0x29))));	// 86798 inc     byte ptr [bx+29h] ;~ 2A05:125D
cs=0x2a05;eip=0x001260; 	T(SUB(ah, ah));	// 86799 sub     ah, ah ;~ 2A05:1260
cs=0x2a05;eip=0x001262; 	T(MOV(si, ax));	// 86800 mov     si, ax ;~ 2A05:1262
cs=0x2a05;eip=0x001264; 	T(AND(si, 7));	// 86801 and     si, 7 ;~ 2A05:1264
cs=0x2a05;eip=0x001267; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_6)))));	// 86802 mov     bx, word ptr [bp+var_6] ;~ 2A05:1267
cs=0x2a05;eip=0x00126a; 	T(MOV(al, *(raddr(es,bx+si+0x3B))));	// 86803 mov     al, es:[bx+si+3Bh] ;~ 2A05:126A
cs=0x2a05;eip=0x00126e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 86804 mov     bx, [bp+var_8] ;~ 2A05:126E
cs=0x2a05;eip=0x001271; 	X(MOV(*(raddr(ds,bx+0x22)), al));	// 86805 mov     [bx+22h], al ;~ 2A05:1271
loc_398a4:
	// 9766 
cs=0x2a05;eip=0x001274; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 86809 mov     bx, [bp+var_8] ;~ 2A05:1274
cs=0x2a05;eip=0x001277; 	X(PUSH(*(dw*)(raddr(ds,bx+0x12))));	// 86810 push    word ptr [bx+12h] ;~ 2A05:1277
cs=0x2a05;eip=0x00127a; 	X(PUSH(*(dw*)(raddr(ds,bx+0x10))));	// 86811 push    word ptr [bx+10h] ;~ 2A05:127A
cs=0x2a05;eip=0x00127d; 	X(PUSH(*(dw*)(raddr(ds,bx+0x2A))));	// 86812 push    word ptr [bx+2Ah] ;~ 2A05:127D
cs=0x2a05;eip=0x001280; 	X(PUSH(bx));	// 86813 push    bx ;~ 2A05:1280
cs=0x2a05;eip=0x001281; 	T(MOV(al, *(raddr(ds,bx+0x2C))));	// 86814 mov     al, [bx+2Ch] ;~ 2A05:1281
cs=0x2a05;eip=0x001284; 	T(SUB(ah, ah));	// 86815 sub     ah, ah ;~ 2A05:1284
cs=0x2a05;eip=0x001286; 	X(PUSH(ax));	// 86816 push    ax ;~ 2A05:1286
cs=0x2a05;eip=0x001287; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 86817 mov     ax, word ptr audiodriverbinary ;~ 2A05:1287
cs=0x2a05;eip=0x00128a; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 86818 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:128A
cs=0x2a05;eip=0x00128e; 	T(ADD(ax, 0x27));	// 86819 add     ax, 27h ; ''' ;~ 2A05:128E
cs=0x2a05;eip=0x001291; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c+2))), dx));	// 86820 mov     word ptr [bp+var_C+2], dx ;~ 2A05:1291
cs=0x2a05;eip=0x001294; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c))), ax));	// 86821 mov     word ptr [bp+var_C], ax ;~ 2A05:1294
cs=0x2a05;eip=0x001297; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_c))));	// 86822 call    [bp+var_C] ;~ 2A05:1297
cs=0x2a05;eip=0x00129a; 	T(ADD(sp, 0x0A));	// 86823 add     sp, 0Ah ;~ 2A05:129A
loc_398cd:
	// 9767 
cs=0x2a05;eip=0x00129d; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 86826 inc     [bp+var_2] ;~ 2A05:129D
loc_398d0:
	// 9768 
cs=0x2a05;eip=0x0012a0; 	T(MOV(al, byte_459d2));	// 86829 mov     al, byte_459D2 ;~ 2A05:12A0
cs=0x2a05;eip=0x0012a3; 	T(SUB(ah, ah));	// 86830 sub     ah, ah ;~ 2A05:12A3
cs=0x2a05;eip=0x0012a5; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), ax));	// 86831 cmp     [bp+var_2], ax ;~ 2A05:12A5
cs=0x2a05;eip=0x0012a8; 	J(JNC(loc_39946));	// 86832 jnb     short loc_39946 ;~ 2A05:12A8
cs=0x2a05;eip=0x0012aa; 	T(MOV(ax, 0x2E));	// 86833 mov     ax, 2Eh ; '.' ;~ 2A05:12AA
cs=0x2a05;eip=0x0012ad; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_2))));	// 86834 imul    [bp+var_2] ;~ 2A05:12AD
cs=0x2a05;eip=0x0012b0; 	T(ADD(ax, 0x0A2B6));	// 86835 add     ax, 0A2B6h ;~ 2A05:12B0
cs=0x2a05;eip=0x0012b3; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 86836 mov     [bp+var_8], ax ;~ 2A05:12B3
cs=0x2a05;eip=0x0012b6; 	T(MOV(bx, ax));	// 86837 mov     bx, ax ;~ 2A05:12B6
cs=0x2a05;eip=0x0012b8; 	T(CMP(*(raddr(ds,bx+1)), 0));	// 86838 cmp     byte ptr [bx+1], 0 ;~ 2A05:12B8
cs=0x2a05;eip=0x0012bc; 	J(JZ(loc_398cd));	// 86839 jz      short loc_398CD ;~ 2A05:12BC
cs=0x2a05;eip=0x0012be; 	T(CMP(*(raddr(ds,bx)), 0x0F));	// 86840 cmp     byte ptr [bx], 0Fh ;~ 2A05:12BE
cs=0x2a05;eip=0x0012c1; 	J(JBE(loc_398fb));	// 86841 jbe     short loc_398FB ;~ 2A05:12C1
cs=0x2a05;eip=0x0012c3; 	X(PUSH(ax));	// 86842 push    ax ;~ 2A05:12C3
cs=0x2a05;eip=0x0012c4; 	X(PUSH(cs));	// 86843 push    cs ;~ 2A05:12C4
cs=0x2a05;eip=0x0012c5; 	J(CALL(sub_3968a,0));	// 86844 call    near ptr sub_3968A ;~ 2A05:12C5
cs=0x2a05;eip=0x0012c8; 	T(ADD(sp, 2));	// 86845 add     sp, 2 ;~ 2A05:12C8
loc_398fb:
	// 9769 
cs=0x2a05;eip=0x0012cb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 86848 mov     bx, [bp+var_8] ;~ 2A05:12CB
cs=0x2a05;eip=0x0012ce; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x10))));	// 86849 mov     ax, [bx+10h] ;~ 2A05:12CE
cs=0x2a05;eip=0x0012d1; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x12))));	// 86850 mov     dx, [bx+12h] ;~ 2A05:12D1
cs=0x2a05;eip=0x0012d4; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6))), ax));	// 86851 mov     word ptr [bp+var_6], ax ;~ 2A05:12D4
cs=0x2a05;eip=0x0012d7; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6+2))), dx));	// 86852 mov     word ptr [bp+var_6+2], dx ;~ 2A05:12D7
cs=0x2a05;eip=0x0012da; 	T(CMP(*(raddr(ds,bx+0x16)), 1));	// 86853 cmp     byte ptr [bx+16h], 1 ;~ 2A05:12DA
cs=0x2a05;eip=0x0012de; 	J(JZ(loc_39913));	// 86854 jz      short loc_39913 ;~ 2A05:12DE
cs=0x2a05;eip=0x0012e0; 	J(JMP(loc_3971d));	// 86855 jmp     loc_3971D ;~ 2A05:12E0
loc_39913:
	// 9770 
cs=0x2a05;eip=0x0012e3; 	T(LES(si, *(dd*)(raddr(ss,bp+var_6))));	// 86859 les     si, [bp+var_6] ;~ 2A05:12E3
cs=0x2a05;eip=0x0012e6; 	T(MOV(ax, *(dw*)(raddr(es,si+0x20))));	// 86860 mov     ax, es:[si+20h] ;~ 2A05:12E6
cs=0x2a05;eip=0x0012ea; 	X(ADD(*(dw*)(raddr(ds,bx+0x14)), ax));	// 86861 add     [bx+14h], ax ;~ 2A05:12EA
cs=0x2a05;eip=0x0012ed; 	T(MOV(ax, *(dw*)(raddr(es,si+0x1E))));	// 86862 mov     ax, es:[si+1Eh] ;~ 2A05:12ED
cs=0x2a05;eip=0x0012f1; 	T(CMP(*(dw*)(raddr(ds,bx+0x14)), ax));	// 86863 cmp     [bx+14h], ax ;~ 2A05:12F1
cs=0x2a05;eip=0x0012f4; 	J(JGE(loc_39929));	// 86864 jge     short loc_39929 ;~ 2A05:12F4
cs=0x2a05;eip=0x0012f6; 	J(JMP(loc_3971d));	// 86865 jmp     loc_3971D ;~ 2A05:12F6
loc_39929:
	// 9771 
cs=0x2a05;eip=0x0012f9; 	X(MOV(*(dw*)(raddr(ds,bx+0x14)), ax));	// 86869 mov     [bx+14h], ax ;~ 2A05:12F9
cs=0x2a05;eip=0x0012fc; 	T(MOV(bx, si));	// 86870 mov     bx, si ;~ 2A05:12FC
cs=0x2a05;eip=0x0012fe; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1E))));	// 86871 mov     ax, es:[bx+1Eh] ;~ 2A05:12FE
cs=0x2a05;eip=0x001302; 	T(CMP(*(dw*)(raddr(es,bx+0x24)), ax));	// 86872 cmp     es:[bx+24h], ax ;~ 2A05:1302
cs=0x2a05;eip=0x001306; 	J(JGE(loc_3993b));	// 86873 jge     short loc_3993B ;~ 2A05:1306
cs=0x2a05;eip=0x001308; 	J(JMP(loc_39716));	// 86874 jmp     loc_39716 ;~ 2A05:1308
loc_3993b:
	// 9772 
cs=0x2a05;eip=0x00130b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 86878 mov     bx, [bp+var_8] ;~ 2A05:130B
cs=0x2a05;eip=0x00130e; 	X(MOV(*(raddr(ds,bx+0x16)), 3));	// 86879 mov     byte ptr [bx+16h], 3 ;~ 2A05:130E
cs=0x2a05;eip=0x001312; 	J(JMP(loc_3971d));	// 86880 jmp     loc_3971D ;~ 2A05:1312
loc_39946:
	// 9773 
cs=0x2a05;eip=0x001316; 	T(MOV(ax, 0x0A2B6));	// 86885 mov     ax, 0A2B6h ;~ 2A05:1316
cs=0x2a05;eip=0x001319; 	X(PUSH(ax));	// 86886 push    ax ;~ 2A05:1319
cs=0x2a05;eip=0x00131a; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 86887 mov     ax, word ptr audiodriverbinary ;~ 2A05:131A
cs=0x2a05;eip=0x00131d; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 86888 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:131D
cs=0x2a05;eip=0x001321; 	T(ADD(ax, 0x30));	// 86889 add     ax, 30h ; '0' ;~ 2A05:1321
cs=0x2a05;eip=0x001324; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c+2))), dx));	// 86890 mov     word ptr [bp+var_C+2], dx ;~ 2A05:1324
cs=0x2a05;eip=0x001327; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c))), ax));	// 86891 mov     word ptr [bp+var_C], ax ;~ 2A05:1327
cs=0x2a05;eip=0x00132a; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_c))));	// 86892 call    [bp+var_C] ;~ 2A05:132A
cs=0x2a05;eip=0x00132d; 	T(ADD(sp, 2));	// 86893 add     sp, 2 ;~ 2A05:132D
cs=0x2a05;eip=0x001330; 	X(POP(ds));	// 86894 pop     ds ;~ 2A05:1330
cs=0x2a05;eip=0x001331; 	X(POP(si));	// 86895 pop     si ;~ 2A05:1331
cs=0x2a05;eip=0x001332; 	T(MOV(sp, bp));	// 86896 mov     sp, bp ;~ 2A05:1332
cs=0x2a05;eip=0x001334; 	X(POP(bp));	// 86897 pop     bp ;~ 2A05:1334
cs=0x2a05;eip=0x001335; 	J(RETF(0));	// 86898 retf ;~ 2A05:1335

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_39716: 	goto loc_39716;
        case m2c::kloc_3971d: 	goto loc_3971d;
        case m2c::kloc_3973d: 	goto loc_3973d;
        case m2c::kloc_39754: 	goto loc_39754;
        case m2c::kloc_397b1: 	goto loc_397b1;
        case m2c::kloc_397be: 	goto loc_397be;
        case m2c::kloc_397ce: 	goto loc_397ce;
        case m2c::kloc_397de: 	goto loc_397de;
        case m2c::kloc_3981e: 	goto loc_3981e;
        case m2c::kloc_39828: 	goto loc_39828;
        case m2c::kloc_39850: 	goto loc_39850;
        case m2c::kloc_39853: 	goto loc_39853;
        case m2c::kloc_3986c: 	goto loc_3986c;
        case m2c::kloc_39880: 	goto loc_39880;
        case m2c::kloc_398a4: 	goto loc_398a4;
        case m2c::kloc_398cd: 	goto loc_398cd;
        case m2c::kloc_398d0: 	goto loc_398d0;
        case m2c::kloc_398fb: 	goto loc_398fb;
        case m2c::kloc_39913: 	goto loc_39913;
        case m2c::kloc_39929: 	goto loc_39929;
        case m2c::kloc_3993b: 	goto loc_3993b;
        case m2c::kloc_39946: 	goto loc_39946;
        case m2c::ksub_39700: 	goto sub_39700;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool audio_driver_func1e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    audio_driver_func1e:
    _begin:
#undef var_16
#define var_16 -0x16
	// 86909 var_16          = dword ptr -16h ;~ 2A05:1336
#undef var_12
#define var_12 -0x12
	// 86910 var_12          = word ptr -12h ;~ 2A05:1336
#undef var_10
#define var_10 -0x10
	// 86911 var_10          = dword ptr -10h ;~ 2A05:1336
#undef var_c
#define var_c -0x0C
	// 86912 var_C           = word ptr -0Ch ;~ 2A05:1336
#undef var_a
#define var_a -0x0A
	// 86913 var_A           = word ptr -0Ah ;~ 2A05:1336
#undef var_8
#define var_8 -8
	// 86914 var_8           = word ptr -8 ;~ 2A05:1336
#undef var_6
#define var_6 -6
	// 86915 var_6           = word ptr -6 ;~ 2A05:1336
#undef var_4
#define var_4 -4
	// 86916 var_4           = word ptr -4 ;~ 2A05:1336
#undef var_2
#define var_2 -2
	// 86917 var_2           = word ptr -2 ;~ 2A05:1336
#undef arg_0
#define arg_0 6
	// 86918 arg_0           = word ptr  6 ;~ 2A05:1336
#undef arg_2
#define arg_2 8
	// 86919 arg_2           = word ptr  8 ;~ 2A05:1336
cs=0x2a05;eip=0x001336; 	X(PUSH(bp));	// 86921 push    bp ;~ 2A05:1336
cs=0x2a05;eip=0x001337; 	T(MOV(bp, sp));	// 86922 mov     bp, sp ;~ 2A05:1337
cs=0x2a05;eip=0x001339; 	T(SUB(sp, 0x16));	// 86923 sub     sp, 16h ;~ 2A05:1339
cs=0x2a05;eip=0x00133c; 	X(PUSH(di));	// 86924 push    di ;~ 2A05:133C
cs=0x2a05;eip=0x00133d; 	X(PUSH(si));	// 86925 push    si ;~ 2A05:133D
cs=0x2a05;eip=0x00133e; 	X(PUSH(ds));	// 86926 push    ds ;~ 2A05:133E
cs=0x2a05;eip=0x00133f; 	T(MOV(ax, seg_offset(dseg)));	// 86927 mov     ax, seg dseg ;~ 2A05:133F
cs=0x2a05;eip=0x001342; 	T(MOV(ds, ax));	// 86928 mov     ds, ax ;~ 2A05:1342
cs=0x2a05;eip=0x001344; 	T(CMP(byte_40634, 0));	// 86929 cmp     byte_40634, 0 ;~ 2A05:1344
cs=0x2a05;eip=0x001349; 	J(JZ(loc_3997e));	// 86930 jz      short loc_3997E ;~ 2A05:1349
cs=0x2a05;eip=0x00134b; 	J(JMP(loc_39a04));	// 86931 jmp     loc_39A04 ;~ 2A05:134B
loc_3997e:
	// 9774 
cs=0x2a05;eip=0x00134e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 86935 mov     [bp+var_2], 0 ;~ 2A05:134E
cs=0x2a05;eip=0x001353; 	T(MOV(al, byte_459d2));	// 86936 mov     al, byte_459D2 ;~ 2A05:1353
cs=0x2a05;eip=0x001356; 	T(SUB(ah, ah));	// 86937 sub     ah, ah ;~ 2A05:1356
cs=0x2a05;eip=0x001358; 	T(OR(ax, ax));	// 86938 or      ax, ax ;~ 2A05:1358
cs=0x2a05;eip=0x00135a; 	J(JNZ(loc_3998f));	// 86939 jnz     short loc_3998F ;~ 2A05:135A
cs=0x2a05;eip=0x00135c; 	J(JMP(loc_39a9e));	// 86940 jmp     loc_39A9E ;~ 2A05:135C
loc_3998f:
	// 9775 
cs=0x2a05;eip=0x00135f; 	T(MOV(si, 0x0A2B6));	// 86944 mov     si, 0A2B6h ;~ 2A05:135F
cs=0x2a05;eip=0x001362; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0x0A2B7));	// 86945 mov     [bp+var_8], 0A2B7h ;~ 2A05:1362
cs=0x2a05;eip=0x001367; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0x0A2C6));	// 86946 mov     [bp+var_A], 0A2C6h ;~ 2A05:1367
cs=0x2a05;eip=0x00136c; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 0x0A2B8));	// 86947 mov     [bp+var_C], 0A2B8h ;~ 2A05:136C
cs=0x2a05;eip=0x001371; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_2))));	// 86948 mov     di, [bp+var_2] ;~ 2A05:1371
loc_399a4:
	// 9776 
cs=0x2a05;eip=0x001374; 	T(MOV(al, *(raddr(ds,si))));	// 86951 mov     al, [si] ;~ 2A05:1374
cs=0x2a05;eip=0x001376; 	T(SUB(ah, ah));	// 86952 sub     ah, ah ;~ 2A05:1376
cs=0x2a05;eip=0x001378; 	T(CMP(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 86953 cmp     ax, [bp+arg_2] ;~ 2A05:1378
cs=0x2a05;eip=0x00137b; 	J(JA(loc_399e2));	// 86954 ja      short loc_399E2 ;~ 2A05:137B
cs=0x2a05;eip=0x00137d; 	T(CMP(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 86955 cmp     ax, [bp+arg_0] ;~ 2A05:137D
cs=0x2a05;eip=0x001380; 	J(JC(loc_399e2));	// 86956 jb      short loc_399E2 ;~ 2A05:1380
cs=0x2a05;eip=0x001382; 	X(PUSH(di));	// 86957 push    di ;~ 2A05:1382
cs=0x2a05;eip=0x001383; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 86958 mov     ax, word ptr audiodriverbinary ;~ 2A05:1383
cs=0x2a05;eip=0x001386; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 86959 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:1386
cs=0x2a05;eip=0x00138a; 	T(ADD(ax, 0x1E));	// 86960 add     ax, 1Eh ;~ 2A05:138A
cs=0x2a05;eip=0x00138d; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10+2))), dx));	// 86961 mov     word ptr [bp+var_10+2], dx ;~ 2A05:138D
cs=0x2a05;eip=0x001390; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10))), ax));	// 86962 mov     word ptr [bp+var_10], ax ;~ 2A05:1390
cs=0x2a05;eip=0x001393; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_10))));	// 86963 call    [bp+var_10] ;~ 2A05:1393
cs=0x2a05;eip=0x001396; 	T(ADD(sp, 2));	// 86964 add     sp, 2 ;~ 2A05:1396
cs=0x2a05;eip=0x001399; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 86965 mov     bx, [bp+var_8] ;~ 2A05:1399
cs=0x2a05;eip=0x00139c; 	X(MOV(*(raddr(ds,bx)), 0));	// 86966 mov     byte ptr [bx], 0 ;~ 2A05:139C
cs=0x2a05;eip=0x00139f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_a))));	// 86967 mov     bx, [bp+var_A] ;~ 2A05:139F
cs=0x2a05;eip=0x0013a2; 	T(SUB(ax, ax));	// 86968 sub     ax, ax ;~ 2A05:13A2
cs=0x2a05;eip=0x0013a4; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 86969 mov     [bx+2], ax ;~ 2A05:13A4
cs=0x2a05;eip=0x0013a7; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 86970 mov     [bx], ax ;~ 2A05:13A7
cs=0x2a05;eip=0x0013a9; 	X(MOV(*(raddr(ds,si)), 0x0FF));	// 86971 mov     byte ptr [si], 0FFh ;~ 2A05:13A9
cs=0x2a05;eip=0x0013ac; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_c))));	// 86972 mov     bx, [bp+var_C] ;~ 2A05:13AC
cs=0x2a05;eip=0x0013af; 	X(MOV(*(raddr(ds,bx)), 0));	// 86973 mov     byte ptr [bx], 0 ;~ 2A05:13AF
loc_399e2:
	// 9777 
cs=0x2a05;eip=0x0013b2; 	T(ADD(si, 0x2E));	// 86977 add     si, 2Eh ; '.' ;~ 2A05:13B2
cs=0x2a05;eip=0x0013b5; 	X(ADD(*(dw*)(raddr(ss,bp+var_8)), 0x2E));	// 86978 add     [bp+var_8], 2Eh ; '.' ;~ 2A05:13B5
cs=0x2a05;eip=0x0013b9; 	X(ADD(*(dw*)(raddr(ss,bp+var_a)), 0x2E));	// 86979 add     [bp+var_A], 2Eh ; '.' ;~ 2A05:13B9
cs=0x2a05;eip=0x0013bd; 	X(ADD(*(dw*)(raddr(ss,bp+var_c)), 0x2E));	// 86980 add     [bp+var_C], 2Eh ; '.' ;~ 2A05:13BD
cs=0x2a05;eip=0x0013c1; 	T(INC(di));	// 86981 inc     di ;~ 2A05:13C1
cs=0x2a05;eip=0x0013c2; 	T(MOV(ax, di));	// 86982 mov     ax, di ;~ 2A05:13C2
cs=0x2a05;eip=0x0013c4; 	T(MOV(cl, byte_459d2));	// 86983 mov     cl, byte_459D2 ;~ 2A05:13C4
cs=0x2a05;eip=0x0013c8; 	T(SUB(ch, ch));	// 86984 sub     ch, ch ;~ 2A05:13C8
cs=0x2a05;eip=0x0013ca; 	T(CMP(ax, cx));	// 86985 cmp     ax, cx ;~ 2A05:13CA
cs=0x2a05;eip=0x0013cc; 	J(JC(loc_399a4));	// 86986 jb      short loc_399A4 ;~ 2A05:13CC
cs=0x2a05;eip=0x0013ce; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), di));	// 86987 mov     [bp+var_2], di ;~ 2A05:13CE
cs=0x2a05;eip=0x0013d1; 	J(JMP(loc_39a9e));	// 86988 jmp     loc_39A9E ;~ 2A05:13D1
loc_39a04:
	// 9778 
cs=0x2a05;eip=0x0013d4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 86992 mov     ax, [bp+arg_0] ;~ 2A05:13D4
cs=0x2a05;eip=0x0013d7; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 86993 mov     [bp+var_2], ax ;~ 2A05:13D7
cs=0x2a05;eip=0x0013da; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 86994 mov     ax, [bp+arg_2] ;~ 2A05:13DA
cs=0x2a05;eip=0x0013dd; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), ax));	// 86995 cmp     [bp+var_2], ax ;~ 2A05:13DD
cs=0x2a05;eip=0x0013e0; 	J(JLE(loc_39a15));	// 86996 jle     short loc_39A15 ;~ 2A05:13E0
cs=0x2a05;eip=0x0013e2; 	J(JMP(loc_39a9e));	// 86997 jmp     loc_39A9E ;~ 2A05:13E2
loc_39a15:
	// 9779 
cs=0x2a05;eip=0x0013e5; 	T(MOV(ax, 0x4C));	// 87001 mov     ax, 4Ch ; 'L' ;~ 2A05:13E5
cs=0x2a05;eip=0x0013e8; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 87002 imul    [bp+arg_0] ;~ 2A05:13E8
cs=0x2a05;eip=0x0013eb; 	T(ADD(ax, 0x8243));	// 87003 add     ax, 8243h ;~ 2A05:13EB
cs=0x2a05;eip=0x0013ee; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 87004 mov     [bp+var_12], ax ;~ 2A05:13EE
loc_39a21:
	// 9780 
cs=0x2a05;eip=0x0013f1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_12))));	// 87007 mov     bx, [bp+var_12] ;~ 2A05:13F1
cs=0x2a05;eip=0x0013f4; 	T(CMP(*(raddr(ds,bx)), 0x10));	// 87008 cmp     byte ptr [bx], 10h ;~ 2A05:13F4
cs=0x2a05;eip=0x0013f7; 	J(JNC(loc_39a8f));	// 87009 jnb     short loc_39A8F ;~ 2A05:13F7
cs=0x2a05;eip=0x0013f9; 	T(MOV(al, *(raddr(ds,bx))));	// 87010 mov     al, [bx] ;~ 2A05:13F9
cs=0x2a05;eip=0x0013fb; 	T(SUB(ah, ah));	// 87011 sub     ah, ah ;~ 2A05:13FB
cs=0x2a05;eip=0x0013fd; 	X(PUSH(ax));	// 87012 push    ax ;~ 2A05:13FD
cs=0x2a05;eip=0x0013fe; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 87013 mov     ax, word ptr audiodriverbinary ;~ 2A05:13FE
cs=0x2a05;eip=0x001401; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 87014 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:1401
cs=0x2a05;eip=0x001405; 	T(ADD(ax, 0x1E));	// 87015 add     ax, 1Eh ;~ 2A05:1405
cs=0x2a05;eip=0x001408; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_16+2))), dx));	// 87016 mov     word ptr [bp+var_16+2], dx ;~ 2A05:1408
cs=0x2a05;eip=0x00140b; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_16))), ax));	// 87017 mov     word ptr [bp+var_16], ax ;~ 2A05:140B
cs=0x2a05;eip=0x00140e; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_16))));	// 87018 call    [bp+var_16] ;~ 2A05:140E
cs=0x2a05;eip=0x001411; 	T(ADD(sp, 2));	// 87019 add     sp, 2 ;~ 2A05:1411
cs=0x2a05;eip=0x001414; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0x10));	// 87020 mov     [bp+var_4], 10h ;~ 2A05:1414
cs=0x2a05;eip=0x001419; 	T(MOV(si, 0x0A2B6));	// 87021 mov     si, 0A2B6h ;~ 2A05:1419
cs=0x2a05;eip=0x00141c; 	T(MOV(di, 0x0A2B7));	// 87022 mov     di, 0A2B7h ;~ 2A05:141C
cs=0x2a05;eip=0x00141f; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0x0A2C6));	// 87023 mov     [bp+var_A], 0A2C6h ;~ 2A05:141F
cs=0x2a05;eip=0x001424; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0x0A2B8));	// 87024 mov     [bp+var_8], 0A2B8h ;~ 2A05:1424
cs=0x2a05;eip=0x001429; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0x10));	// 87025 mov     [bp+var_6], 10h ;~ 2A05:1429
cs=0x2a05;eip=0x00142e; 	T(MOV(cx, 0x10));	// 87026 mov     cx, 10h ;~ 2A05:142E
loc_39a61:
	// 9781 
cs=0x2a05;eip=0x001431; 	T(MOV(al, *(raddr(ds,si))));	// 87029 mov     al, [si] ;~ 2A05:1431
cs=0x2a05;eip=0x001433; 	T(SUB(ah, ah));	// 87030 sub     ah, ah ;~ 2A05:1433
cs=0x2a05;eip=0x001435; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), ax));	// 87031 cmp     [bp+var_2], ax ;~ 2A05:1435
cs=0x2a05;eip=0x001438; 	J(JNZ(loc_39a7f));	// 87032 jnz     short loc_39A7F ;~ 2A05:1438
cs=0x2a05;eip=0x00143a; 	X(MOV(*(raddr(ds,di)), ah));	// 87033 mov     [di], ah ;~ 2A05:143A
cs=0x2a05;eip=0x00143c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_a))));	// 87034 mov     bx, [bp+var_A] ;~ 2A05:143C
cs=0x2a05;eip=0x00143f; 	T(SUB(ax, ax));	// 87035 sub     ax, ax ;~ 2A05:143F
cs=0x2a05;eip=0x001441; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 87036 mov     [bx+2], ax ;~ 2A05:1441
cs=0x2a05;eip=0x001444; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 87037 mov     [bx], ax ;~ 2A05:1444
cs=0x2a05;eip=0x001446; 	X(MOV(*(raddr(ds,si)), 0x0FF));	// 87038 mov     byte ptr [si], 0FFh ;~ 2A05:1446
cs=0x2a05;eip=0x001449; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 87039 mov     bx, [bp+var_8] ;~ 2A05:1449
cs=0x2a05;eip=0x00144c; 	X(MOV(*(raddr(ds,bx)), 0));	// 87040 mov     byte ptr [bx], 0 ;~ 2A05:144C
loc_39a7f:
	// 9782 
cs=0x2a05;eip=0x00144f; 	T(ADD(si, 0x2E));	// 87043 add     si, 2Eh ; '.' ;~ 2A05:144F
cs=0x2a05;eip=0x001452; 	T(ADD(di, 0x2E));	// 87044 add     di, 2Eh ; '.' ;~ 2A05:1452
cs=0x2a05;eip=0x001455; 	X(ADD(*(dw*)(raddr(ss,bp+var_a)), 0x2E));	// 87045 add     [bp+var_A], 2Eh ; '.' ;~ 2A05:1455
cs=0x2a05;eip=0x001459; 	X(ADD(*(dw*)(raddr(ss,bp+var_8)), 0x2E));	// 87046 add     [bp+var_8], 2Eh ; '.' ;~ 2A05:1459
cs=0x2a05;eip=0x00145d; 	J(LOOP(loc_39a61));	// 87047 loop    loc_39A61 ;~ 2A05:145D
loc_39a8f:
	// 9783 
cs=0x2a05;eip=0x00145f; 	X(ADD(*(dw*)(raddr(ss,bp+var_12)), 0x4C));	// 87050 add     [bp+var_12], 4Ch ; 'L' ;~ 2A05:145F
cs=0x2a05;eip=0x001463; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 87051 inc     [bp+var_2] ;~ 2A05:1463
cs=0x2a05;eip=0x001466; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 87052 mov     ax, [bp+arg_2] ;~ 2A05:1466
cs=0x2a05;eip=0x001469; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), ax));	// 87053 cmp     [bp+var_2], ax ;~ 2A05:1469
cs=0x2a05;eip=0x00146c; 	J(JLE(loc_39a21));	// 87054 jle     short loc_39A21 ;~ 2A05:146C
loc_39a9e:
	// 9784 
cs=0x2a05;eip=0x00146e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 87058 mov     ax, [bp+arg_0] ;~ 2A05:146E
cs=0x2a05;eip=0x001471; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 87059 mov     [bp+var_2], ax ;~ 2A05:1471
cs=0x2a05;eip=0x001474; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 87060 mov     ax, [bp+arg_2] ;~ 2A05:1474
cs=0x2a05;eip=0x001477; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), ax));	// 87061 cmp     [bp+var_2], ax ;~ 2A05:1477
cs=0x2a05;eip=0x00147a; 	J(JG(loc_39aca));	// 87062 jg      short loc_39ACA ;~ 2A05:147A
cs=0x2a05;eip=0x00147c; 	T(MOV(ax, 0x4C));	// 87063 mov     ax, 4Ch ; 'L' ;~ 2A05:147C
cs=0x2a05;eip=0x00147f; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 87064 imul    [bp+arg_0] ;~ 2A05:147F
cs=0x2a05;eip=0x001482; 	T(MOV(si, ax));	// 87065 mov     si, ax ;~ 2A05:1482
cs=0x2a05;eip=0x001484; 	T(ADD(si, 0x8211));	// 87066 add     si, 8211h ;~ 2A05:1484
cs=0x2a05;eip=0x001488; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_2))));	// 87067 mov     cx, [bp+arg_2] ;~ 2A05:1488
cs=0x2a05;eip=0x00148b; 	T(SUB(cx, *(dw*)(raddr(ss,bp+arg_0))));	// 87068 sub     cx, [bp+arg_0] ;~ 2A05:148B
cs=0x2a05;eip=0x00148e; 	T(INC(cx));	// 87069 inc     cx ;~ 2A05:148E
cs=0x2a05;eip=0x00148f; 	X(ADD(*(dw*)(raddr(ss,bp+var_2)), cx));	// 87070 add     [bp+var_2], cx ;~ 2A05:148F
loc_39ac2:
	// 9785 
cs=0x2a05;eip=0x001492; 	X(MOV(*(raddr(ds,si)), 0));	// 87073 mov     byte ptr [si], 0 ;~ 2A05:1492
cs=0x2a05;eip=0x001495; 	T(ADD(si, 0x4C));	// 87074 add     si, 4Ch ; 'L' ;~ 2A05:1495
cs=0x2a05;eip=0x001498; 	J(LOOP(loc_39ac2));	// 87075 loop    loc_39AC2 ;~ 2A05:1498
loc_39aca:
	// 9786 
cs=0x2a05;eip=0x00149a; 	X(POP(ds));	// 87078 pop     ds ;~ 2A05:149A
cs=0x2a05;eip=0x00149b; 	X(POP(si));	// 87079 pop     si ;~ 2A05:149B
cs=0x2a05;eip=0x00149c; 	X(POP(di));	// 87080 pop     di ;~ 2A05:149C
cs=0x2a05;eip=0x00149d; 	T(MOV(sp, bp));	// 87081 mov     sp, bp ;~ 2A05:149D
cs=0x2a05;eip=0x00149f; 	X(POP(bp));	// 87082 pop     bp ;~ 2A05:149F
cs=0x2a05;eip=0x0014a0; 	J(RETF(0));	// 87083 retf ;~ 2A05:14A0

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kaudio_driver_func1e: 	goto audio_driver_func1e;
        case m2c::kloc_3997e: 	goto loc_3997e;
        case m2c::kloc_3998f: 	goto loc_3998f;
        case m2c::kloc_399a4: 	goto loc_399a4;
        case m2c::kloc_399e2: 	goto loc_399e2;
        case m2c::kloc_39a04: 	goto loc_39a04;
        case m2c::kloc_39a15: 	goto loc_39a15;
        case m2c::kloc_39a21: 	goto loc_39a21;
        case m2c::kloc_39a61: 	goto loc_39a61;
        case m2c::kloc_39a7f: 	goto loc_39a7f;
        case m2c::kloc_39a8f: 	goto loc_39a8f;
        case m2c::kloc_39a9e: 	goto loc_39a9e;
        case m2c::kloc_39ac2: 	goto loc_39ac2;
        case m2c::kloc_39aca: 	goto loc_39aca;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

