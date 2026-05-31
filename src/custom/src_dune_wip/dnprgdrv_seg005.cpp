/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "dnprgdrv.h"

                

 bool sub_5bb20(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5bb20:
    _begin:
cs=0x4d44;eip=0x000100; 	J(return sub_5bbeb(0, _state););	// 185392 jmp     near ptr sub_5BBEB ;~ 4D44:0100

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_5bb20: 	goto sub_5bb20;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5bb23(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5bb23:
    _begin:
cs=0x4d44;eip=0x000103; 	J(return sub_5bc70(0, _state););	// 185403 jmp     near ptr sub_5BC70 ;~ 4D44:0103

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_5bb23: 	goto sub_5bb23;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5bb26(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5bb26:
    _begin:
cs=0x4d44;eip=0x000106; 	J(return sub_5bc01(0, _state););	// 185414 jmp     near ptr sub_5BC01 ;~ 4D44:0106

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_5bb26: 	goto sub_5bb26;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5bb29(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5bb29:
    _begin:
cs=0x4d44;eip=0x000109; 	J(return sub_5bc5b(0, _state););	// 185424 jmp     near ptr sub_5BC5B ;~ 4D44:0109

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_5bb29: 	goto sub_5bb29;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5bb2c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5bb2c:
    _begin:
cs=0x4d44;eip=0x00010c; 	J(return sub_5bc0e(0, _state););	// 185433 jmp     near ptr sub_5BC0E ;~ 4D44:010C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_5bb2c: 	goto sub_5bb2c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5bb2f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5bb2f:
    _begin:
cs=0x4d44;eip=0x00010f; 	J(return sub_5bd2f(0, _state););	// 185443 jmp     near ptr sub_5BD2F ;~ 4D44:010F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_5bb2f: 	goto sub_5bb2f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5bb32(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5bb32:
    _begin:
cs=0x4d44;eip=0x000112; 	J(return sub_5bc4b(0, _state););	// 185454 jmp     near ptr sub_5BC4B ;~ 4D44:0112

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_5bb32: 	goto sub_5bb32;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5bbc8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5bbc8:
    _begin:
cs=0x4d44;eip=0x0001a8; 	X(PUSH(ss));	// 185603 push    ss ;~ 4D44:01A8
cs=0x4d44;eip=0x0001a9; 	X(POP(es));	// 185604 pop     es ;~ 4D44:01A9
cs=0x4d44;eip=0x0001aa; 	T(MOV(si, bp));	// 185606 mov     si, bp ;~ 4D44:01AA
loc_5bbcc:
	// 7710 
cs=0x4d44;eip=0x0001ac; 	X(LODS(*(dw*)(raddr(es,si)),si,2));	// 185609 lods    word ptr es:[si] ;~ 4D44:01AC
cs=0x4d44;eip=0x0001ae; 	T(ADD(ax, 2));	// 185610 add     ax, 2 ;~ 4D44:01AE
cs=0x4d44;eip=0x0001b1; 	T(MOV(di, ax));	// 185611 mov     di, ax ;~ 4D44:01B1
cs=0x4d44;eip=0x0001b3; 	X(PUSH(cx));	// 185612 push    cx ;~ 4D44:01B3
cs=0x4d44;eip=0x0001b4; 	T(MOV(cx, 9));	// 185613 mov     cx, 9 ;~ 4D44:01B4
cs=0x4d44;eip=0x0001b7; 	T(MOV(al, 0x2E));	// 185614 mov     al, 2Eh ; '.' ;~ 4D44:01B7
	// 185615 repne scasb ;~ 4D44:01B9
cs=0x4d44;eip=0x0001b9; 	T(	REPNE SCASB);	// 185615 repne scasb ;~ 4D44:01B9
cs=0x4d44;eip=0x0001bb; 	X(POP(cx));	// 185616 pop     cx ;~ 4D44:01BB
cs=0x4d44;eip=0x0001bc; 	J(JNZ(loc_5bbe8));	// 185617 jnz     short loc_5BBE8 ;~ 4D44:01BC
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x0001be; 	T(MOV(ax, *(dw*)(((db*)&word_5bbc5))));	// 185618 mov     ax, cs:word_5BBC5 ;~ 4D44:01BE
cs=0x4d44;eip=0x0001c2; 	X(STOSW);	// 185619 stosw ;~ 4D44:01C2
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x0001c3; 	T(MOV(al, *(&byte_5bbc7)));	// 185620 mov     al, cs:byte_5BBC7 ;~ 4D44:01C3
cs=0x4d44;eip=0x0001c7; 	X(STOSB);	// 185621 stosb ;~ 4D44:01C7
loc_5bbe8:
	// 7711 
cs=0x4d44;eip=0x0001c8; 	J(LOOP(loc_5bbcc));	// 185624 loop    loc_5BBCC ;~ 4D44:01C8
cs=0x4d44;eip=0x0001ca; 	J(RETN(0));	// 185625 retn ;~ 4D44:01CA

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_5bbcc: 	goto loc_5bbcc;
        case m2c::kloc_5bbe8: 	goto loc_5bbe8;
        case m2c::ksub_5bbc8: 	goto sub_5bbc8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5bbeb(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5bbeb:
    _begin:
cs=0x4d44;eip=0x0001cb; 	T(OR(ax, ax));	// 185634 or      ax, ax ;~ 4D44:01CB
cs=0x4d44;eip=0x0001cd; 	J(JZ(loc_5bbf3));	// 185635 jz      short loc_5BBF3 ;~ 4D44:01CD
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x0001cf; 	X(MOV(*(dw*)(((db*)&word_5bb45)), ax));	// 185636 mov     cs:word_5BB45, ax ;~ 4D44:01CF
loc_5bbf3:
	// 7712 
cs=0x4d44;eip=0x0001d3; 	J(CALL(sub_5bbc8,0));	// 185639 call    sub_5BBC8 ;~ 4D44:01D3
cs=0x4d44;eip=0x0001d6; 	J(CALL(sub_5bf4f,m2c::kloc_5bf79));	// 185641 call    loc_5BF79 ;~ 4D44:01D6
cs=0x4d44;eip=0x0001d9; 	X(PUSH(cs));	// 185642 push    cs ;~ 4D44:01D9
cs=0x4d44;eip=0x0001da; 	J(CALL(sub_5bc01,0));	// 185643 call    near ptr sub_5BC01 ;~ 4D44:01DA
cs=0x4d44;eip=0x0001dd; 	T(MOV(bx, 0x500));	// 185644 mov     bx, 500h ;~ 4D44:01DD
cs=0x4d44;eip=0x0001e0; 	J(RETF(0));	// 185645 retf ;~ 4D44:01E0

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_5bbf3: 	goto loc_5bbf3;
        case m2c::ksub_5bbeb: 	goto sub_5bbeb;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5bc01(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5bc01:
    _begin:
cs=0x4d44;eip=0x0001e1; 	X(PUSHF);	// 185654 pushf ;~ 4D44:01E1
cs=0x4d44;eip=0x0001e2; 	T(CLI);	// 185655 cli ;~ 4D44:01E2
cs=0x4d44;eip=0x0001e3; 	J(CALL(sub_5bf4f,0));	// 185656 call    sub_5BF4F ;~ 4D44:01E3
cs=0x4d44;eip=0x0001e6; 	T(XOR(ax, ax));	// 185657 xor     ax, ax ;~ 4D44:01E6
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x0001e8; 	X(MOV(*(&byte_5bb59), al));	// 185658 mov     cs:byte_5BB59, al ;~ 4D44:01E8
cs=0x4d44;eip=0x0001ec; 	X(POPF);	// 185659 popf ;~ 4D44:01EC
cs=0x4d44;eip=0x0001ed; 	J(RETF(0));	// 185660 retf ;~ 4D44:01ED

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_5bc01: 	goto sub_5bc01;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5bc0e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5bc0e:
    _begin:
cs=0x4d44;eip=0x0001ee; 	X(PUSH(bx));	// 185668 push    bx ;~ 4D44:01EE
cs=0x4d44;eip=0x0001ef; 	T(MOV(bx, 0x0FFFF));	// 185669 mov     bx, 0FFFFh ;~ 4D44:01EF
cs=0x4d44;eip=0x0001f2; 	T(CMP(ax, 0x60));	// 185670 cmp     ax, 60h ; '`' ;~ 4D44:01F2
cs=0x4d44;eip=0x0001f5; 	J(JC(loc_5bc31));	// 185671 jb      short loc_5BC31 ;~ 4D44:01F5
cs=0x4d44;eip=0x0001f7; 	T(MOV(bx, 0x0AAAA));	// 185672 mov     bx, 0AAAAh ;~ 4D44:01F7
cs=0x4d44;eip=0x0001fa; 	T(CMP(ax, 0x0C0));	// 185673 cmp     ax, 0C0h ; 'À' ;~ 4D44:01FA
cs=0x4d44;eip=0x0001fd; 	J(JC(loc_5bc31));	// 185674 jb      short loc_5BC31 ;~ 4D44:01FD
cs=0x4d44;eip=0x0001ff; 	T(MOV(bx, 0x8888));	// 185675 mov     bx, 8888h ;~ 4D44:01FF
cs=0x4d44;eip=0x000202; 	T(CMP(ax, 0x180));	// 185676 cmp     ax, 180h ;~ 4D44:0202
cs=0x4d44;eip=0x000205; 	J(JC(loc_5bc31));	// 185677 jb      short loc_5BC31 ;~ 4D44:0205
cs=0x4d44;eip=0x000207; 	T(MOV(bx, 0x8080));	// 185678 mov     bx, 8080h ;~ 4D44:0207
cs=0x4d44;eip=0x00020a; 	T(CMP(ax, 0x300));	// 185679 cmp     ax, 300h ;~ 4D44:020A
cs=0x4d44;eip=0x00020d; 	J(JC(loc_5bc31));	// 185680 jb      short loc_5BC31 ;~ 4D44:020D
cs=0x4d44;eip=0x00020f; 	T(XOR(bl, bl));	// 185681 xor     bl, bl ;~ 4D44:020F
loc_5bc31:
	// 7713 
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x000211; 	X(MOV(*(dw*)(((db*)&word_5bb5b)), bx));	// 185685 mov     cs:word_5BB5B, bx ;~ 4D44:0211
cs=0x4d44;eip=0x000216; 	X(POP(bx));	// 185686 pop     bx ;~ 4D44:0216
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x000217; 	X(MOV(*(&byte_5bb5e), bl));	// 185687 mov     cs:byte_5BB5E, bl ;~ 4D44:0217
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x00021c; 	T(MOV(al, *(&byte_5bb59)));	// 185688 mov     al, cs:byte_5BB59 ;~ 4D44:021C
cs=0x4d44;eip=0x000220; 	T(OR(al, al));	// 185689 or      al, al ;~ 4D44:0220
cs=0x4d44;eip=0x000222; 	J(JNS(locret_5bc4a));	// 185690 jns     short locret_5BC4A ;~ 4D44:0222
cs=0x4d44;eip=0x000224; 	T(OR(al, 0x40));	// 185691 or      al, 40h ;~ 4D44:0224
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x000226; 	X(MOV(*(&byte_5bb59), al));	// 185692 mov     cs:byte_5BB59, al ;~ 4D44:0226
locret_5bc4a:
	// 7714 
cs=0x4d44;eip=0x00022a; 	J(RETF(0));	// 185695 retf ;~ 4D44:022A

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_5bc31: 	goto loc_5bc31;
        case m2c::klocret_5bc4a: 	goto locret_5bc4a;
        case m2c::ksub_5bc0e: 	goto sub_5bc0e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5bc4b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5bc4b:
    _begin:
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x00022b; 	X(MOV(*(&byte_5bb5f), al));	// 185703 mov     cs:byte_5BB5F, al ;~ 4D44:022B
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x00022f; 	X(MOV(*(&byte_5bb5e), al));	// 185704 mov     cs:byte_5BB5E, al ;~ 4D44:022F
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x000233; 	X(MOV(*(dw*)(((db*)&word_5bb5b)), 0x0FFFF));	// 185705 mov     cs:word_5BB5B, 0FFFFh ;~ 4D44:0233
cs=0x4d44;eip=0x00023a; 	J(RETF(0));	// 185706 retf ;~ 4D44:023A

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_5bc4b: 	goto sub_5bc4b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5bc5b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5bc5b:
    _begin:
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x00023b; 	X(MOV(*(&byte_5bb5a), 1));	// 185714 mov     cs:byte_5BB5A, 1 ;~ 4D44:023B
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x000241; 	T(MOV(al, *(&byte_5bb59)));	// 185715 mov     al, cs:byte_5BB59 ;~ 4D44:0241
cs=0x4d44;eip=0x000245; 	J(RETF(0));	// 185716 retf ;~ 4D44:0245

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_5bc5b: 	goto sub_5bc5b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5bc70(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5bc70:
    _begin:
cs=0x4d44;eip=0x000250; 	X(PUSH(ds));	// 185735 push    ds ;~ 4D44:0250
cs=0x4d44;eip=0x000251; 	X(PUSH(cs));	// 185736 push    cs ;~ 4D44:0251
cs=0x4d44;eip=0x000252; 	X(POP(ds));	// 185737 pop     ds ;~ 4D44:0252
cs=0x4d44;eip=0x000253; 	X(MOV(byte_5bb5a, al));	// 185739 mov     byte_5BB5A, al ;~ 4D44:0253
cs=0x4d44;eip=0x000256; 	T(MOV(ax, *(dw*)(raddr(es,si))));	// 185740 mov     ax, es:[si] ;~ 4D44:0256
cs=0x4d44;eip=0x000259; 	T(MOV(di, 0x246));	// 185741 mov     di, 246h ;~ 4D44:0259
cs=0x4d44;eip=0x00025c; 	X(MOV(*(dw*)(raddr(ds,di)), si));	// 185742 mov     [di], si ;~ 4D44:025C
cs=0x4d44;eip=0x00025e; 	X(MOV(*(dw*)(raddr(ds,di+2)), es));	// 185743 mov     word ptr [di+2], es ;~ 4D44:025E
cs=0x4d44;eip=0x000261; 	X(MOV(*(dw*)(raddr(ds,di+4)), ax));	// 185744 mov     [di+4], ax ;~ 4D44:0261
cs=0x4d44;eip=0x000264; 	T(MOV(ax, *(dw*)(raddr(es,si+0x4000))));	// 185745 mov     ax, es:[si+4000h] ;~ 4D44:0264
cs=0x4d44;eip=0x000269; 	X(MOV(*(dw*)(raddr(ds,di+6)), ax));	// 185746 mov     [di+6], ax ;~ 4D44:0269
cs=0x4d44;eip=0x00026c; 	T(MOV(ax, *(dw*)(raddr(es,si-0x8000))));	// 185747 mov     ax, es:[si-8000h] ;~ 4D44:026C
cs=0x4d44;eip=0x000271; 	X(MOV(*(dw*)(raddr(ds,di+8)), ax));	// 185748 mov     [di+8], ax ;~ 4D44:0271
cs=0x4d44;eip=0x000274; 	T(ADD(si, 2));	// 185749 add     si, 2 ;~ 4D44:0274
cs=0x4d44;eip=0x000277; 	X(MOV(*(dw*)(((db*)&dword_5bb35)), si));	// 185750 mov     word ptr dword_5BB35, si ;~ 4D44:0277
cs=0x4d44;eip=0x00027b; 	X(MOV(*(dw*)(((db*)&dword_5bb35)+2), es));	// 185751 mov     word ptr dword_5BB35+2, es ;~ 4D44:027B
cs=0x4d44;eip=0x00027f; 	T(SUB(si, 2));	// 185752 sub     si, 2 ;~ 4D44:027F
cs=0x4d44;eip=0x000282; 	T(ADD(si, *(dw*)(raddr(es,si))));	// 185753 add     si, es:[si] ;~ 4D44:0282
cs=0x4d44;eip=0x000285; 	X(MOV(word_5bb39, si));	// 185754 mov     word_5BB39, si ;~ 4D44:0285
cs=0x4d44;eip=0x000289; 	X(MOV(word_5bb3b, es));	// 185755 mov     word_5BB3B, es ;~ 4D44:0289
cs=0x4d44;eip=0x00028d; 	J(CALL(sub_5bf4f,0));	// 185756 call    sub_5BF4F ;~ 4D44:028D
cs=0x4d44;eip=0x000290; 	J(CALL(sub_5bcce,0));	// 185757 call    sub_5BCCE ;~ 4D44:0290
cs=0x4d44;eip=0x000293; 	T(MOV(al, byte_5bb5f));	// 185758 mov     al, byte_5BB5F ;~ 4D44:0293
cs=0x4d44;eip=0x000296; 	X(MOV(byte_5bb5d, al));	// 185759 mov     byte_5BB5D, al ;~ 4D44:0296
cs=0x4d44;eip=0x000299; 	X(MOV(byte_5bb5e, al));	// 185760 mov     byte_5BB5E, al ;~ 4D44:0299
cs=0x4d44;eip=0x00029c; 	T(XOR(ax, ax));	// 185761 xor     ax, ax ;~ 4D44:029C
cs=0x4d44;eip=0x00029e; 	X(MOV(word_5bb3d, ax));	// 185762 mov     word_5BB3D, ax ;~ 4D44:029E
cs=0x4d44;eip=0x0002a1; 	X(MOV(word_5bb43, ax));	// 185763 mov     word_5BB43, ax ;~ 4D44:02A1
cs=0x4d44;eip=0x0002a4; 	J(CALL(sub_5bd8f,0));	// 185764 call    sub_5BD8F ;~ 4D44:02A4
cs=0x4d44;eip=0x0002a7; 	T(MOV(al, 0x80));	// 185765 mov     al, 80h ; '€' ;~ 4D44:02A7
cs=0x4d44;eip=0x0002a9; 	X(MOV(byte_5bb59, al));	// 185766 mov     byte_5BB59, al ;~ 4D44:02A9
cs=0x4d44;eip=0x0002ac; 	X(POP(ds));	// 185767 pop     ds ;~ 4D44:02AC
cs=0x4d44;eip=0x0002ad; 	J(RETF(0));	// 185769 retf ;~ 4D44:02AD

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_5bc70: 	goto sub_5bc70;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5bcce(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5bcce:
    _begin:
cs=0x4d44;eip=0x0002ae; 	X(PUSH(ds));	// 185778 push    ds ;~ 4D44:02AE
cs=0x4d44;eip=0x0002af; 	X(PUSH(ds));	// 185779 push    ds ;~ 4D44:02AF
cs=0x4d44;eip=0x0002b0; 	X(POP(es));	// 185780 pop     es ;~ 4D44:02B0
cs=0x4d44;eip=0x0002b1; 	X(MOV(word_5bb60, 0));	// 185782 mov     word_5BB60, 0 ;~ 4D44:02B1
cs=0x4d44;eip=0x0002b7; 	T(LDS(si, dword_5bb35));	// 185783 lds     si, dword_5BB35 ;~ 4D44:02B7
cs=0x4d44;eip=0x0002bb; 	T(MOV(bp, si));	// 185785 mov     bp, si ;~ 4D44:02BB
cs=0x4d44;eip=0x0002bd; 	T(MOV(di, 0x166));	// 185786 mov     di, 166h ;~ 4D44:02BD
cs=0x4d44;eip=0x0002c0; 	T(MOV(cx, 9));	// 185787 mov     cx, 9 ;~ 4D44:02C0
loc_5bce3:
	// 7715 
cs=0x4d44;eip=0x0002c3; 	T(LODSW);	// 185790 lodsw ;~ 4D44:02C3
cs=0x4d44;eip=0x0002c4; 	T(OR(ax, ax));	// 185791 or      ax, ax ;~ 4D44:02C4
cs=0x4d44;eip=0x0002c6; 	J(JZ(loc_5bcef));	// 185792 jz      short loc_5BCEF ;~ 4D44:02C6
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x0002c8; 	X(INC(*(dw*)(((db*)&word_5bb60))));	// 185793 inc     cs:word_5BB60 ;~ 4D44:02C8
cs=0x4d44;eip=0x0002cd; 	T(ADD(ax, bp));	// 185794 add     ax, bp ;~ 4D44:02CD
loc_5bcef:
	// 7716 
cs=0x4d44;eip=0x0002cf; 	X(STOSW);	// 185797 stosw ;~ 4D44:02CF
cs=0x4d44;eip=0x0002d0; 	J(LOOP(loc_5bce3));	// 185798 loop    loc_5BCE3 ;~ 4D44:02D0
cs=0x4d44;eip=0x0002d2; 	T(MOV(di, 0x19C));	// 185799 mov     di, 19Ch ;~ 4D44:02D2
cs=0x4d44;eip=0x0002d5; 	T(MOV(cl, 9));	// 185800 mov     cl, 9 ;~ 4D44:02D5
cs=0x4d44;eip=0x0002d7; 	T(MOV(al, 0x60));	// 185801 mov     al, 60h ; '`' ;~ 4D44:02D7
	// 185802 rep stosb ;~ 4D44:02D9
cs=0x4d44;eip=0x0002d9; 	X(	REP STOSB);	// 185802 rep stosb ;~ 4D44:02D9
cs=0x4d44;eip=0x0002db; 	X(POP(ds));	// 185803 pop     ds ;~ 4D44:02DB
cs=0x4d44;eip=0x0002dc; 	T(LES(si, dword_5bb35));	// 185805 les     si, dword_5BB35 ;~ 4D44:02DC
loc_5bd00:
	// 7717 
cs=0x4d44;eip=0x0002e0; 	X(MOV(word_5bb3f, 1));	// 185809 mov     word_5BB3F, 1 ;~ 4D44:02E0
cs=0x4d44;eip=0x0002e6; 	X(MOV(word_5bb41, 0x60));	// 185810 mov     word_5BB41, 60h ; '`' ;~ 4D44:02E6
cs=0x4d44;eip=0x0002ec; 	T(MOV(cx, 9));	// 185811 mov     cx, 9 ;~ 4D44:02EC
cs=0x4d44;eip=0x0002ef; 	T(MOV(di, 0x142));	// 185812 mov     di, 142h ;~ 4D44:02EF
loc_5bd12:
	// 7718 
cs=0x4d44;eip=0x0002f2; 	T(MOV(si, *(dw*)(raddr(ds,di+0x24))));	// 185815 mov     si, [di+24h] ;~ 4D44:02F2
cs=0x4d44;eip=0x0002f5; 	X(MOV(*(dw*)(raddr(ds,di+0x12)), si));	// 185816 mov     [di+12h], si ;~ 4D44:02F5
cs=0x4d44;eip=0x0002f8; 	X(MOV(*(dw*)(raddr(ds,di)), 0x0FFFF));	// 185817 mov     word ptr [di], 0FFFFh ;~ 4D44:02F8
cs=0x4d44;eip=0x0002fc; 	T(OR(si, si));	// 185818 or      si, si ;~ 4D44:02FC
cs=0x4d44;eip=0x0002fe; 	J(JZ(loc_5bd29));	// 185819 jz      short loc_5BD29 ;~ 4D44:02FE
cs=0x4d44;eip=0x000300; 	T(MOV(ax, cx));	// 185820 mov     ax, cx ;~ 4D44:0300
cs=0x4d44;eip=0x000302; 	J(CALL(sub_5bebb,0));	// 185821 call    sub_5BEBB ;~ 4D44:0302
cs=0x4d44;eip=0x000305; 	X(INC(*(dw*)(raddr(ds,di))));	// 185822 inc     word ptr [di] ;~ 4D44:0305
cs=0x4d44;eip=0x000307; 	T(MOV(cx, ax));	// 185823 mov     cx, ax ;~ 4D44:0307
loc_5bd29:
	// 7719 
cs=0x4d44;eip=0x000309; 	T(ADD(di, 2));	// 185826 add     di, 2 ;~ 4D44:0309
cs=0x4d44;eip=0x00030c; 	J(LOOP(loc_5bd12));	// 185827 loop    loc_5BD12 ;~ 4D44:030C
cs=0x4d44;eip=0x00030e; 	J(RETN(0));	// 185828 retn ;~ 4D44:030E

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_5bce3: 	goto loc_5bce3;
        case m2c::kloc_5bcef: 	goto loc_5bcef;
        case m2c::kloc_5bd00: 	goto loc_5bd00;
        case m2c::kloc_5bd12: 	goto loc_5bd12;
        case m2c::kloc_5bd29: 	goto loc_5bd29;
        case m2c::ksub_5bcce: 	goto sub_5bcce;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5bd2f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5bd2f:
    _begin:
cs=0x4d44;eip=0x00030f; 	X(PUSH(ds));	// 185837 push    ds ;~ 4D44:030F
cs=0x4d44;eip=0x000310; 	T(MOV(ax, cs));	// 185838 mov     ax, cs ;~ 4D44:0310
cs=0x4d44;eip=0x000312; 	T(MOV(ds, ax));	// 185839 mov     ds, ax ;~ 4D44:0312
cs=0x4d44;eip=0x000314; 	T(MOV(al, byte_5bb59));	// 185841 mov     al, byte_5BB59 ;~ 4D44:0314
cs=0x4d44;eip=0x000317; 	T(OR(al, al));	// 185842 or      al, al ;~ 4D44:0317
cs=0x4d44;eip=0x000319; 	J(JNS(loc_5bd5c));	// 185843 jns     short loc_5BD5C ;~ 4D44:0319
cs=0x4d44;eip=0x00031b; 	X(DEC(*(db*)(((db*)&word_5bb3d)+1)));	// 185844 dec     byte ptr word_5BB3D+1 ;~ 4D44:031B
cs=0x4d44;eip=0x00031f; 	J(JNS(loc_5bd53));	// 185845 jns     short loc_5BD53 ;~ 4D44:031F
cs=0x4d44;eip=0x000321; 	J(CALL(sub_5bd69,0));	// 185846 call    sub_5BD69 ;~ 4D44:0321
cs=0x4d44;eip=0x000324; 	J(JNZ(loc_5bd5c));	// 185847 jnz     short loc_5BD5C ;~ 4D44:0324
cs=0x4d44;eip=0x000326; 	X(PUSH(dx));	// 185848 push    dx ;~ 4D44:0326
cs=0x4d44;eip=0x000327; 	X(PUSH(si));	// 185849 push    si ;~ 4D44:0327
cs=0x4d44;eip=0x000328; 	X(PUSH(di));	// 185850 push    di ;~ 4D44:0328
cs=0x4d44;eip=0x000329; 	X(PUSH(bp));	// 185851 push    bp ;~ 4D44:0329
cs=0x4d44;eip=0x00032a; 	X(PUSH(es));	// 185852 push    es ;~ 4D44:032A
cs=0x4d44;eip=0x00032b; 	J(CALL(sub_5bd8f,0));	// 185853 call    sub_5BD8F ;~ 4D44:032B
cs=0x4d44;eip=0x00032e; 	X(POP(es));	// 185854 pop     es ;~ 4D44:032E
cs=0x4d44;eip=0x00032f; 	X(POP(bp));	// 185856 pop     bp ;~ 4D44:032F
cs=0x4d44;eip=0x000330; 	X(POP(di));	// 185857 pop     di ;~ 4D44:0330
cs=0x4d44;eip=0x000331; 	X(POP(si));	// 185858 pop     si ;~ 4D44:0331
cs=0x4d44;eip=0x000332; 	X(POP(dx));	// 185859 pop     dx ;~ 4D44:0332
loc_5bd53:
	// 7720 
cs=0x4d44;eip=0x000333; 	X(ROL(word_5bb5b, 1));	// 185862 rol     word_5BB5B, 1 ;~ 4D44:0333
cs=0x4d44;eip=0x000337; 	J(JNC(loc_5bd5c));	// 185863 jnb     short loc_5BD5C ;~ 4D44:0337
cs=0x4d44;eip=0x000339; 	J(CALL(sub_5bef7,0));	// 185864 call    sub_5BEF7 ;~ 4D44:0339
loc_5bd5c:
	// 7721 
cs=0x4d44;eip=0x00033c; 	T(MOV(al, byte_5bb59));	// 185868 mov     al, byte_5BB59 ;~ 4D44:033C
cs=0x4d44;eip=0x00033f; 	T(MOV(bx, word_5bb3f));	// 185869 mov     bx, word_5BB3F ;~ 4D44:033F
cs=0x4d44;eip=0x000343; 	T(MOV(cx, word_5bb41));	// 185870 mov     cx, word_5BB41 ;~ 4D44:0343
cs=0x4d44;eip=0x000347; 	X(POP(ds));	// 185871 pop     ds ;~ 4D44:0347
cs=0x4d44;eip=0x000348; 	J(RETF(0));	// 185873 retf ;~ 4D44:0348

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_5bd53: 	goto loc_5bd53;
        case m2c::kloc_5bd5c: 	goto loc_5bd5c;
        case m2c::ksub_5bd2f: 	goto sub_5bd2f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5bd69(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5bd69:
    _begin:
cs=0x4d44;eip=0x000349; 	X(PUSH(si));	// 185882 push    si ;~ 4D44:0349
cs=0x4d44;eip=0x00034a; 	X(PUSH(es));	// 185883 push    es ;~ 4D44:034A
cs=0x4d44;eip=0x00034b; 	T(LES(si, *(dd*)((&unk_5bc66))));	// 185884 les     si, dword ptr unk_5BC66 ;~ 4D44:034B
cs=0x4d44;eip=0x00034f; 	T(MOV(ax, *(dw*)(raddr(es,si))));	// 185886 mov     ax, es:[si] ;~ 4D44:034F
cs=0x4d44;eip=0x000352; 	T(CMP(*(dw*)((&unk_5bc6a)), ax));	// 185887 cmp     word ptr unk_5BC6A, ax ;~ 4D44:0352
cs=0x4d44;eip=0x000356; 	J(JNZ(loc_5bd8c));	// 185888 jnz     short loc_5BD8C ;~ 4D44:0356
cs=0x4d44;eip=0x000358; 	T(MOV(ax, *(dw*)(raddr(es,si+0x4000))));	// 185889 mov     ax, es:[si+4000h] ;~ 4D44:0358
cs=0x4d44;eip=0x00035d; 	T(CMP(*(dw*)((&unk_5bc6c)), ax));	// 185890 cmp     word ptr unk_5BC6C, ax ;~ 4D44:035D
cs=0x4d44;eip=0x000361; 	J(JNZ(loc_5bd8c));	// 185891 jnz     short loc_5BD8C ;~ 4D44:0361
cs=0x4d44;eip=0x000363; 	T(MOV(ax, *(dw*)(raddr(es,si-0x8000))));	// 185892 mov     ax, es:[si-8000h] ;~ 4D44:0363
cs=0x4d44;eip=0x000368; 	T(CMP(word_5bc6e, ax));	// 185893 cmp     word_5BC6E, ax ;~ 4D44:0368
loc_5bd8c:
	// 7722 
cs=0x4d44;eip=0x00036c; 	X(POP(es));	// 185897 pop     es ;~ 4D44:036C
cs=0x4d44;eip=0x00036d; 	X(POP(si));	// 185899 pop     si ;~ 4D44:036D
cs=0x4d44;eip=0x00036e; 	J(RETN(0));	// 185900 retn ;~ 4D44:036E

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_5bd8c: 	goto loc_5bd8c;
        case m2c::ksub_5bd69: 	goto sub_5bd69;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5bd8f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5bd8f:
    _begin:
cs=0x4d44;eip=0x00036f; 	T(LES(bx, dword_5bb35));	// 185909 les     bx, dword_5BB35 ;~ 4D44:036F
cs=0x4d44;eip=0x000373; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x30))));	// 185911 mov     ax, es:[bx+30h] ;~ 4D44:0373
cs=0x4d44;eip=0x000377; 	X(ADD(word_5bb3d, ax));	// 185912 add     word_5BB3D, ax ;~ 4D44:0377
cs=0x4d44;eip=0x00037b; 	T(MOV(di, 0x142));	// 185913 mov     di, 142h ;~ 4D44:037B
cs=0x4d44;eip=0x00037e; 	J(CALL(sub_5bde7,0));	// 185914 call    sub_5BDE7 ;~ 4D44:037E
cs=0x4d44;eip=0x000381; 	T(MOV(cx, word_5bb60));	// 185915 mov     cx, word_5BB60 ;~ 4D44:0381
loc_5bda5:
	// 7723 
cs=0x4d44;eip=0x000385; 	X(DEC(*(dw*)(raddr(ds,di))));	// 185918 dec     word ptr [di] ;~ 4D44:0385
cs=0x4d44;eip=0x000387; 	J(JNZ(loc_5bdd2));	// 185919 jnz     short loc_5BDD2 ;~ 4D44:0387
loc_5bda9:
	// 7724 
cs=0x4d44;eip=0x000389; 	T(MOV(si, *(dw*)(raddr(ds,di+0x12))));	// 185922 mov     si, [di+12h] ;~ 4D44:0389
cs=0x4d44;eip=0x00038c; 	T(OR(si, si));	// 185923 or      si, si ;~ 4D44:038C
cs=0x4d44;eip=0x00038e; 	J(JZ(loc_5bdd2));	// 185924 jz      short loc_5BDD2 ;~ 4D44:038E
cs=0x4d44;eip=0x000390; 	X(PUSH(cx));	// 185925 push    cx ;~ 4D44:0390
cs=0x4d44;eip=0x000391; 	X(PUSH(di));	// 185926 push    di ;~ 4D44:0391
cs=0x4d44;eip=0x000392; 	X(LODS(*(dw*)(raddr(es,si)),si,2));	// 185927 lods    word ptr es:[si] ;~ 4D44:0392
cs=0x4d44;eip=0x000394; 	T(MOV(dx, di));	// 185928 mov     dx, di ;~ 4D44:0394
cs=0x4d44;eip=0x000396; 	T(SUB(dx, 0x142));	// 185929 sub     dx, 142h ;~ 4D44:0396
cs=0x4d44;eip=0x00039a; 	T(SHR(dx, 1));	// 185930 shr     dx, 1 ;~ 4D44:039A
cs=0x4d44;eip=0x00039c; 	T(MOV(bx, ax));	// 185931 mov     bx, ax ;~ 4D44:039C
cs=0x4d44;eip=0x00039e; 	T(AND(bx, 0x70));	// 185932 and     bx, 70h ;~ 4D44:039E
cs=0x4d44;eip=0x0003a1; 	T(SHR(bx, 1));	// 185933 shr     bx, 1 ;~ 4D44:03A1
cs=0x4d44;eip=0x0003a3; 	T(SHR(bx, 1));	// 185934 shr     bx, 1 ;~ 4D44:03A3
cs=0x4d44;eip=0x0003a5; 	T(SHR(bx, 1));	// 185935 shr     bx, 1 ;~ 4D44:03A5
cs=0x4d44;eip=0x0003a7; 	J(CALL(__dispatch_call,*(dw*)(((db*)&off_5bb49)+bx)));	// 185936 call    off_5BB49[bx] ;~ 4D44:03A7
cs=0x4d44;eip=0x0003ab; 	X(POP(di));	// 185937 pop     di ;~ 4D44:03AB
cs=0x4d44;eip=0x0003ac; 	X(POP(cx));	// 185938 pop     cx ;~ 4D44:03AC
cs=0x4d44;eip=0x0003ad; 	T(CMP(*(dw*)(raddr(ds,di)), 0));	// 185939 cmp     word ptr [di], 0 ;~ 4D44:03AD
cs=0x4d44;eip=0x0003b0; 	J(JZ(loc_5bda9));	// 185940 jz      short loc_5BDA9 ;~ 4D44:03B0
loc_5bdd2:
	// 7725 
cs=0x4d44;eip=0x0003b2; 	T(ADD(di, 2));	// 185944 add     di, 2 ;~ 4D44:03B2
cs=0x4d44;eip=0x0003b5; 	J(LOOP(loc_5bda5));	// 185945 loop    loc_5BDA5 ;~ 4D44:03B5
cs=0x4d44;eip=0x0003b7; 	X(DEC(*(db*)(((db*)&word_5bb41))));	// 185946 dec     byte ptr word_5BB41 ;~ 4D44:03B7
cs=0x4d44;eip=0x0003bb; 	J(JNZ(locret_5bde6));	// 185947 jnz     short locret_5BDE6 ;~ 4D44:03BB
cs=0x4d44;eip=0x0003bd; 	X(MOV(*(db*)(((db*)&word_5bb41)), 0x60));	// 185948 mov     byte ptr word_5BB41, 60h ; '`' ;~ 4D44:03BD
cs=0x4d44;eip=0x0003c2; 	X(INC(word_5bb3f));	// 185949 inc     word_5BB3F ;~ 4D44:03C2
locret_5bde6:
	// 7726 
cs=0x4d44;eip=0x0003c6; 	J(RETN(0));	// 185952 retn ;~ 4D44:03C6

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_5bda5: 	goto loc_5bda5;
        case m2c::kloc_5bda9: 	goto loc_5bda9;
        case m2c::kloc_5bdd2: 	goto loc_5bdd2;
        case m2c::klocret_5bde6: 	goto locret_5bde6;
        case m2c::ksub_5bd8f: 	goto sub_5bd8f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5bde7(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5bde7:
    _begin:
cs=0x4d44;eip=0x0003c7; 	T(CMP(word_5bb43, 0));	// 185961 cmp     word_5BB43, 0 ;~ 4D44:03C7
cs=0x4d44;eip=0x0003cc; 	J(JNZ(loc_5be18));	// 185962 jnz     short loc_5BE18 ;~ 4D44:03CC
cs=0x4d44;eip=0x0003ce; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2A))));	// 185963 mov     ax, es:[bx+2Ah] ;~ 4D44:03CE
cs=0x4d44;eip=0x0003d2; 	T(CMP(ax, word_5bb3f));	// 185964 cmp     ax, word_5BB3F ;~ 4D44:03D2
cs=0x4d44;eip=0x0003d6; 	J(JNZ(locret_5be17));	// 185965 jnz     short locret_5BE17 ;~ 4D44:03D6
cs=0x4d44;eip=0x0003d8; 	T(CMP(word_5bb41, 0x60));	// 185966 cmp     word_5BB41, 60h ; '`' ;~ 4D44:03D8
cs=0x4d44;eip=0x0003dd; 	J(JNZ(locret_5be17));	// 185967 jnz     short locret_5BE17 ;~ 4D44:03DD
cs=0x4d44;eip=0x0003df; 	X(PUSH(di));	// 185968 push    di ;~ 4D44:03DF
cs=0x4d44;eip=0x0003e0; 	X(PUSH(es));	// 185969 push    es ;~ 4D44:03E0
cs=0x4d44;eip=0x0003e1; 	T(MOV(si, di));	// 185970 mov     si, di ;~ 4D44:03E1
cs=0x4d44;eip=0x0003e3; 	T(ADD(di, 0x36));	// 185971 add     di, 36h ; '6' ;~ 4D44:03E3
cs=0x4d44;eip=0x0003e6; 	X(PUSH(ds));	// 185972 push    ds ;~ 4D44:03E6
cs=0x4d44;eip=0x0003e7; 	X(POP(es));	// 185973 pop     es ;~ 4D44:03E7
cs=0x4d44;eip=0x0003e8; 	T(MOV(cx, 0x12));	// 185975 mov     cx, 12h ;~ 4D44:03E8
	// 185976 rep movsw ;~ 4D44:03EB
cs=0x4d44;eip=0x0003eb; 	X(	REP MOVSW);	// 185976 rep movsw ;~ 4D44:03EB
cs=0x4d44;eip=0x0003ed; 	X(POP(es));	// 185977 pop     es ;~ 4D44:03ED
cs=0x4d44;eip=0x0003ee; 	X(POP(di));	// 185979 pop     di ;~ 4D44:03EE
cs=0x4d44;eip=0x0003ef; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2E))));	// 185980 mov     ax, es:[bx+2Eh] ;~ 4D44:03EF
cs=0x4d44;eip=0x0003f3; 	T(DEC(ax));	// 185981 dec     ax ;~ 4D44:03F3
cs=0x4d44;eip=0x0003f4; 	X(MOV(word_5bb43, ax));	// 185982 mov     word_5BB43, ax ;~ 4D44:03F4
locret_5be17:
	// 7727 
cs=0x4d44;eip=0x0003f7; 	J(RETN(0));	// 185986 retn ;~ 4D44:03F7
loc_5be18:
	// 7728 
cs=0x4d44;eip=0x0003f8; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2C))));	// 185990 mov     ax, es:[bx+2Ch] ;~ 4D44:03F8
cs=0x4d44;eip=0x0003fc; 	T(CMP(ax, word_5bb3f));	// 185991 cmp     ax, word_5BB3F ;~ 4D44:03FC
cs=0x4d44;eip=0x000400; 	J(JNZ(locret_5be17));	// 185992 jnz     short locret_5BE17 ;~ 4D44:0400
cs=0x4d44;eip=0x000402; 	X(DEC(word_5bb43));	// 185993 dec     word_5BB43 ;~ 4D44:0402
cs=0x4d44;eip=0x000406; 	X(PUSH(di));	// 185994 push    di ;~ 4D44:0406
cs=0x4d44;eip=0x000407; 	X(PUSH(es));	// 185995 push    es ;~ 4D44:0407
cs=0x4d44;eip=0x000408; 	T(si = di+0x36);	// 185996 lea     si, [di+36h] ;~ 4D44:0408
cs=0x4d44;eip=0x00040b; 	X(PUSH(ds));	// 185997 push    ds ;~ 4D44:040B
cs=0x4d44;eip=0x00040c; 	X(POP(es));	// 185998 pop     es ;~ 4D44:040C
cs=0x4d44;eip=0x00040d; 	T(MOV(cx, 0x12));	// 186000 mov     cx, 12h ;~ 4D44:040D
	// 186001 rep movsw ;~ 4D44:0410
cs=0x4d44;eip=0x000410; 	X(	REP MOVSW);	// 186001 rep movsw ;~ 4D44:0410
cs=0x4d44;eip=0x000412; 	X(POP(es));	// 186002 pop     es ;~ 4D44:0412
cs=0x4d44;eip=0x000413; 	X(POP(di));	// 186004 pop     di ;~ 4D44:0413
cs=0x4d44;eip=0x000414; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2A))));	// 186005 mov     ax, es:[bx+2Ah] ;~ 4D44:0414
cs=0x4d44;eip=0x000418; 	X(MOV(word_5bb3f, ax));	// 186006 mov     word_5BB3F, ax ;~ 4D44:0418
cs=0x4d44;eip=0x00041b; 	J(RETN(0));	// 186007 retn ;~ 4D44:041B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_5be18: 	goto loc_5be18;
        case m2c::klocret_5be17: 	goto locret_5be17;
        case m2c::ksub_5bde7: 	goto sub_5bde7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5be3c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5be3c:
    _begin:
cs=0x4d44;eip=0x00041c; 	J(CALL(sub_5bebb,0));	// 186017 call    sub_5BEBB ;~ 4D44:041C
cs=0x4d44;eip=0x00041f; 	J(return sub_5bfb2(0, _state););	// 186018 jmp     sub_5BFB2 ;~ 4D44:041F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_5be3c: 	goto sub_5be3c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5be42(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5be42:
    _begin:
cs=0x4d44;eip=0x000422; 	J(CALL(sub_5bebb,0));	// 186027 call    sub_5BEBB ;~ 4D44:0422
cs=0x4d44;eip=0x000425; 	J(return sub_5bfb2(0, _state););	// 186028 jmp     sub_5BFB2 ;~ 4D44:0425

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_5be42: 	goto sub_5be42;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5be48(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5be48:
    _begin:
cs=0x4d44;eip=0x000428; 	T(MOV(cl, *(raddr(es,si))));	// 186037 mov     cl, es:[si] ;~ 4D44:0428
cs=0x4d44;eip=0x00042b; 	T(INC(si));	// 186038 inc     si ;~ 4D44:042B
cs=0x4d44;eip=0x00042c; 	J(CALL(sub_5bebb,0));	// 186039 call    sub_5BEBB ;~ 4D44:042C
cs=0x4d44;eip=0x00042f; 	J(return sub_5bfc6(0, _state););	// 186040 jmp     sub_5BFC6 ;~ 4D44:042F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_5be48: 	goto sub_5be48;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5be52(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5be52:
    _begin:
cs=0x4d44;eip=0x000432; 	T(MOV(cl, *(raddr(es,si))));	// 186049 mov     cl, es:[si] ;~ 4D44:0432
cs=0x4d44;eip=0x000435; 	T(INC(si));	// 186050 inc     si ;~ 4D44:0435
cs=0x4d44;eip=0x000436; 	J(CALL(sub_5bebb,0));	// 186051 call    sub_5BEBB ;~ 4D44:0436
cs=0x4d44;eip=0x000439; 	T(CMP(ah, 7));	// 186052 cmp     ah, 7 ;~ 4D44:0439
cs=0x4d44;eip=0x00043c; 	J(JNZ(loc_5be70));	// 186053 jnz     short loc_5BE70 ;~ 4D44:043C
cs=0x4d44;eip=0x00043e; 	T(MOV(bx, ax));	// 186054 mov     bx, ax ;~ 4D44:043E
cs=0x4d44;eip=0x000440; 	T(AND(bx, 0x0F));	// 186055 and     bx, 0Fh ;~ 4D44:0440
cs=0x4d44;eip=0x000443; 	X(MOV(*(raddr(ds,bx+0x19C)), cl));	// 186056 mov     [bx+19Ch], cl ;~ 4D44:0443
cs=0x4d44;eip=0x000447; 	X(PUSH(ax));	// 186057 push    ax ;~ 4D44:0447
cs=0x4d44;eip=0x000448; 	T(MOV(al, byte_5bb5d));	// 186058 mov     al, byte_5BB5D ;~ 4D44:0448
cs=0x4d44;eip=0x00044b; 	T(MUL1_1(cl));	// 186059 mul     cl ;~ 4D44:044B
cs=0x4d44;eip=0x00044d; 	T(MOV(cl, ah));	// 186060 mov     cl, ah ;~ 4D44:044D
cs=0x4d44;eip=0x00044f; 	X(POP(ax));	// 186061 pop     ax ;~ 4D44:044F
loc_5be70:
	// 7729 
cs=0x4d44;eip=0x000450; 	J(return sub_5bfc6(0, _state););	// 186064 jmp     sub_5BFC6 ;~ 4D44:0450

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_5be70: 	goto loc_5be70;
        case m2c::ksub_5be52: 	goto sub_5be52;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5be73(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5be73:
    _begin:
cs=0x4d44;eip=0x000453; 	T(MOV(cl, *(raddr(es,si))));	// 186073 mov     cl, es:[si] ;~ 4D44:0453
cs=0x4d44;eip=0x000456; 	T(INC(si));	// 186074 inc     si ;~ 4D44:0456
cs=0x4d44;eip=0x000457; 	J(CALL(sub_5bebb,0));	// 186075 call    sub_5BEBB ;~ 4D44:0457
cs=0x4d44;eip=0x00045a; 	J(return sub_5bfc6(0, _state););	// 186076 jmp     sub_5BFC6 ;~ 4D44:045A

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_5be73: 	goto sub_5be73;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5be7d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5be7d:
    _begin:
cs=0x4d44;eip=0x00045d; 	T(CMP(al, 0x0FF));	// 186085 cmp     al, 0FFh ;~ 4D44:045D
cs=0x4d44;eip=0x00045f; 	J(JZ(loc_5be82));	// 186086 jz      short loc_5BE82 ;~ 4D44:045F
cs=0x4d44;eip=0x000461; 	T(NOP);	// 186087 nop ;~ 4D44:0461
loc_5be82:
	// 7730 
cs=0x4d44;eip=0x000462; 	X(MOV(*(dw*)(raddr(ds,di)), 0x0FFFF));	// 186090 mov     word ptr [di], 0FFFFh ;~ 4D44:0462
cs=0x4d44;eip=0x000466; 	X(SUB(*(raddr(ds,di+0x12)), 2));	// 186091 sub     byte ptr [di+12h], 2 ;~ 4D44:0466
cs=0x4d44;eip=0x00046a; 	T(OR(dx, dx));	// 186092 or      dx, dx ;~ 4D44:046A
cs=0x4d44;eip=0x00046c; 	J(JNZ(locret_5bea9));	// 186093 jnz     short locret_5BEA9 ;~ 4D44:046C
cs=0x4d44;eip=0x00046e; 	X(DEC(byte_5bb5a));	// 186094 dec     byte_5BB5A ;~ 4D44:046E
cs=0x4d44;eip=0x000472; 	J(JZ(loc_5beaa));	// 186095 jz      short loc_5BEAA ;~ 4D44:0472
cs=0x4d44;eip=0x000474; 	J(JNS(loc_5be9a));	// 186096 jns     short loc_5BE9A ;~ 4D44:0474
cs=0x4d44;eip=0x000476; 	X(INC(byte_5bb5a));	// 186097 inc     byte_5BB5A ;~ 4D44:0476
loc_5be9a:
	// 7731 
cs=0x4d44;eip=0x00047a; 	J(CALL(sub_5bcce,m2c::kloc_5bd00));	// 186100 call    loc_5BD00 ;~ 4D44:047A
cs=0x4d44;eip=0x00047d; 	T(LES(bx, dword_5bb35));	// 186101 les     bx, dword_5BB35 ;~ 4D44:047D
cs=0x4d44;eip=0x000481; 	T(MOV(di, 0x142));	// 186103 mov     di, 142h ;~ 4D44:0481
cs=0x4d44;eip=0x000484; 	J(CALL(sub_5bde7,0));	// 186104 call    sub_5BDE7 ;~ 4D44:0484
cs=0x4d44;eip=0x000487; 	X(DEC(*(dw*)(raddr(ds,di))));	// 186105 dec     word ptr [di] ;~ 4D44:0487
locret_5bea9:
	// 7732 
cs=0x4d44;eip=0x000489; 	J(RETN(0));	// 186108 retn ;~ 4D44:0489
loc_5beaa:
	// 7733 
cs=0x4d44;eip=0x00048a; 	T(MOV(ax, 0x0FFFF));	// 186112 mov     ax, 0FFFFh ;~ 4D44:048A
cs=0x4d44;eip=0x00048d; 	X(PUSH(es));	// 186113 push    es ;~ 4D44:048D
cs=0x4d44;eip=0x00048e; 	X(PUSH(ds));	// 186114 push    ds ;~ 4D44:048E
cs=0x4d44;eip=0x00048f; 	X(POP(es));	// 186115 pop     es ;~ 4D44:048F
cs=0x4d44;eip=0x000490; 	T(MOV(cx, 9));	// 186117 mov     cx, 9 ;~ 4D44:0490
	// 186118 rep stosw ;~ 4D44:0493
cs=0x4d44;eip=0x000493; 	X(	REP STOSW);	// 186118 rep stosw ;~ 4D44:0493
cs=0x4d44;eip=0x000495; 	X(POP(es));	// 186119 pop     es ;~ 4D44:0495
cs=0x4d44;eip=0x000496; 	X(PUSH(cs));	// 186121 push    cs ;~ 4D44:0496
cs=0x4d44;eip=0x000497; 	J(CALL(sub_5bc01,0));	// 186122 call    near ptr sub_5BC01 ;~ 4D44:0497
cs=0x4d44;eip=0x00049a; 	J(RETN(0));	// 186123 retn ;~ 4D44:049A

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_5be82: 	goto loc_5be82;
        case m2c::kloc_5be9a: 	goto loc_5be9a;
        case m2c::kloc_5beaa: 	goto loc_5beaa;
        case m2c::klocret_5bea9: 	goto locret_5bea9;
        case m2c::ksub_5be7d: 	goto sub_5be7d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5bebb(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5bebb:
    _begin:
cs=0x4d44;eip=0x00049b; 	X(PUSH(ax));	// 186133 push    ax ;~ 4D44:049B
cs=0x4d44;eip=0x00049c; 	X(PUSH(cx));	// 186134 push    cx ;~ 4D44:049C
cs=0x4d44;eip=0x00049d; 	T(XOR(ax, ax));	// 186135 xor     ax, ax ;~ 4D44:049D
cs=0x4d44;eip=0x00049f; 	X(LODS(*(raddr(es,si)),si,1));	// 186136 lods    byte ptr es:[si] ;~ 4D44:049F
cs=0x4d44;eip=0x0004a1; 	T(OR(al, al));	// 186137 or      al, al ;~ 4D44:04A1
cs=0x4d44;eip=0x0004a3; 	J(JNS(loc_5beef));	// 186138 jns     short loc_5BEEF ;~ 4D44:04A3
cs=0x4d44;eip=0x0004a5; 	T(XOR(cx, cx));	// 186139 xor     cx, cx ;~ 4D44:04A5
loc_5bec7:
	// 7734 
cs=0x4d44;eip=0x0004a7; 	T(MOV(ch, cl));	// 186142 mov     ch, cl ;~ 4D44:04A7
cs=0x4d44;eip=0x0004a9; 	T(MOV(cl, ah));	// 186143 mov     cl, ah ;~ 4D44:04A9
cs=0x4d44;eip=0x0004ab; 	T(MOV(ah, al));	// 186144 mov     ah, al ;~ 4D44:04AB
cs=0x4d44;eip=0x0004ad; 	X(LODS(*(raddr(es,si)),si,1));	// 186145 lods    byte ptr es:[si] ;~ 4D44:04AD
cs=0x4d44;eip=0x0004af; 	T(OR(al, al));	// 186146 or      al, al ;~ 4D44:04AF
cs=0x4d44;eip=0x0004b1; 	J(JS(loc_5bec7));	// 186147 js      short loc_5BEC7 ;~ 4D44:04B1
cs=0x4d44;eip=0x0004b3; 	T(AND(ax, 0x7F7F));	// 186148 and     ax, 7F7Fh ;~ 4D44:04B3
cs=0x4d44;eip=0x0004b6; 	T(AND(cx, 0x7F7F));	// 186149 and     cx, 7F7Fh ;~ 4D44:04B6
cs=0x4d44;eip=0x0004ba; 	T(SHL(cl, 1));	// 186150 shl     cl, 1 ;~ 4D44:04BA
cs=0x4d44;eip=0x0004bc; 	T(SHR(cx, 1));	// 186151 shr     cx, 1 ;~ 4D44:04BC
cs=0x4d44;eip=0x0004be; 	T(SHL(al, 1));	// 186152 shl     al, 1 ;~ 4D44:04BE
cs=0x4d44;eip=0x0004c0; 	T(SHL(ax, 1));	// 186153 shl     ax, 1 ;~ 4D44:04C0
cs=0x4d44;eip=0x0004c2; 	T(SHR(cx, 1));	// 186154 shr     cx, 1 ;~ 4D44:04C2
cs=0x4d44;eip=0x0004c4; 	T(RCR(ax, 1));	// 186155 rcr     ax, 1 ;~ 4D44:04C4
cs=0x4d44;eip=0x0004c6; 	T(SHR(cx, 1));	// 186156 shr     cx, 1 ;~ 4D44:04C6
cs=0x4d44;eip=0x0004c8; 	T(RCR(ax, 1));	// 186157 rcr     ax, 1 ;~ 4D44:04C8
cs=0x4d44;eip=0x0004ca; 	J(JCXZ(loc_5beef));	// 186158 jcxz    short loc_5BEEF ;~ 4D44:04CA
cs=0x4d44;eip=0x0004cc; 	T(MOV(ax, 0x0FFFF));	// 186159 mov     ax, 0FFFFh ;~ 4D44:04CC
loc_5beef:
	// 7735 
cs=0x4d44;eip=0x0004cf; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 186163 mov     [di], ax ;~ 4D44:04CF
cs=0x4d44;eip=0x0004d1; 	X(MOV(*(dw*)(raddr(ds,di+0x12)), si));	// 186164 mov     [di+12h], si ;~ 4D44:04D1
cs=0x4d44;eip=0x0004d4; 	X(POP(cx));	// 186165 pop     cx ;~ 4D44:04D4
cs=0x4d44;eip=0x0004d5; 	X(POP(ax));	// 186166 pop     ax ;~ 4D44:04D5
cs=0x4d44;eip=0x0004d6; 	J(RETN(0));	// 186167 retn ;~ 4D44:04D6

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_5bec7: 	goto loc_5bec7;
        case m2c::kloc_5beef: 	goto loc_5beef;
        case m2c::ksub_5bebb: 	goto sub_5bebb;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5bef7(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5bef7:
    _begin:
cs=0x4d44;eip=0x0004d7; 	T(MOV(al, byte_5bb5d));	// 186175 mov     al, byte_5BB5D ;~ 4D44:04D7
cs=0x4d44;eip=0x0004da; 	T(SUB(al, byte_5bb5e));	// 186176 sub     al, byte_5BB5E ;~ 4D44:04DA
cs=0x4d44;eip=0x0004de; 	J(JNZ(loc_5bf0c));	// 186177 jnz     short loc_5BF0C ;~ 4D44:04DE
cs=0x4d44;eip=0x0004e0; 	X(MOV(word_5bb5b, 1));	// 186178 mov     word_5BB5B, 1 ;~ 4D44:04E0
cs=0x4d44;eip=0x0004e6; 	X(AND(byte_5bb59, 0x0BF));	// 186179 and     byte_5BB59, 0BFh ;~ 4D44:04E6
cs=0x4d44;eip=0x0004eb; 	J(RETN(0));	// 186180 retn ;~ 4D44:04EB
loc_5bf0c:
	// 7736 
cs=0x4d44;eip=0x0004ec; 	X(PUSH(dx));	// 186184 push    dx ;~ 4D44:04EC
cs=0x4d44;eip=0x0004ed; 	X(PUSH(si));	// 186185 push    si ;~ 4D44:04ED
cs=0x4d44;eip=0x0004ee; 	X(PUSH(di));	// 186186 push    di ;~ 4D44:04EE
cs=0x4d44;eip=0x0004ef; 	X(PUSH(bp));	// 186187 push    bp ;~ 4D44:04EF
cs=0x4d44;eip=0x0004f0; 	X(PUSH(es));	// 186188 push    es ;~ 4D44:04F0
cs=0x4d44;eip=0x0004f1; 	J(JC(loc_5bf1b));	// 186189 jb      short loc_5BF1B ;~ 4D44:04F1
cs=0x4d44;eip=0x0004f3; 	T(CMP(al, 3));	// 186190 cmp     al, 3 ;~ 4D44:04F3
cs=0x4d44;eip=0x0004f5; 	J(JC(loc_5bf21));	// 186191 jb      short loc_5BF21 ;~ 4D44:04F5
cs=0x4d44;eip=0x0004f7; 	T(MOV(al, 3));	// 186192 mov     al, 3 ;~ 4D44:04F7
cs=0x4d44;eip=0x0004f9; 	J(JMP(loc_5bf21));	// 186193 jmp     short loc_5BF21 ;~ 4D44:04F9
loc_5bf1b:
	// 7737 
cs=0x4d44;eip=0x0004fb; 	T(CMP(al, 0x0FD));	// 186197 cmp     al, 0FDh ; 'ı' ;~ 4D44:04FB
cs=0x4d44;eip=0x0004fd; 	J(JNC(loc_5bf21));	// 186198 jnb     short loc_5BF21 ;~ 4D44:04FD
cs=0x4d44;eip=0x0004ff; 	T(MOV(al, 0x0FD));	// 186199 mov     al, 0FDh ; 'ı' ;~ 4D44:04FF
loc_5bf21:
	// 7738 
cs=0x4d44;eip=0x000501; 	X(SUB(byte_5bb5d, al));	// 186203 sub     byte_5BB5D, al ;~ 4D44:0501
cs=0x4d44;eip=0x000505; 	T(MOV(bl, byte_5bb5d));	// 186204 mov     bl, byte_5BB5D ;~ 4D44:0505
cs=0x4d44;eip=0x000509; 	T(MOV(si, 0x19C));	// 186205 mov     si, 19Ch ;~ 4D44:0509
cs=0x4d44;eip=0x00050c; 	T(MOV(dx, 0x7B0));	// 186206 mov     dx, 7B0h ;~ 4D44:050C
loc_5bf2f:
	// 7739 
cs=0x4d44;eip=0x00050f; 	T(LODSB);	// 186209 lodsb ;~ 4D44:050F
cs=0x4d44;eip=0x000510; 	T(MUL1_1(bl));	// 186210 mul     bl ;~ 4D44:0510
cs=0x4d44;eip=0x000512; 	T(MOV(cl, ah));	// 186211 mov     cl, ah ;~ 4D44:0512
cs=0x4d44;eip=0x000514; 	T(MOV(ax, dx));	// 186212 mov     ax, dx ;~ 4D44:0514
cs=0x4d44;eip=0x000516; 	J(CALL(sub_5bfc6,0));	// 186213 call    sub_5BFC6 ;~ 4D44:0516
cs=0x4d44;eip=0x000519; 	T(INC(dx));	// 186214 inc     dx ;~ 4D44:0519
cs=0x4d44;eip=0x00051a; 	T(CMP(dl, 0x0BA));	// 186215 cmp     dl, 0BAh ; 'º' ;~ 4D44:051A
cs=0x4d44;eip=0x00051d; 	J(JC(loc_5bf2f));	// 186216 jb      short loc_5BF2F ;~ 4D44:051D
cs=0x4d44;eip=0x00051f; 	T(OR(bl, bl));	// 186217 or      bl, bl ;~ 4D44:051F
cs=0x4d44;eip=0x000521; 	J(JNZ(loc_5bf49));	// 186218 jnz     short loc_5BF49 ;~ 4D44:0521
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x000523; 	X(MOV(*(&byte_5bb59), 0));	// 186219 mov     cs:byte_5BB59, 0 ;~ 4D44:0523
loc_5bf49:
	// 7740 
cs=0x4d44;eip=0x000529; 	X(POP(es));	// 186222 pop     es ;~ 4D44:0529
cs=0x4d44;eip=0x00052a; 	X(POP(bp));	// 186224 pop     bp ;~ 4D44:052A
cs=0x4d44;eip=0x00052b; 	X(POP(di));	// 186225 pop     di ;~ 4D44:052B
cs=0x4d44;eip=0x00052c; 	X(POP(si));	// 186226 pop     si ;~ 4D44:052C
cs=0x4d44;eip=0x00052d; 	X(POP(dx));	// 186227 pop     dx ;~ 4D44:052D
cs=0x4d44;eip=0x00052e; 	J(RETN(0));	// 186228 retn ;~ 4D44:052E

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_5bf0c: 	goto loc_5bf0c;
        case m2c::kloc_5bf1b: 	goto loc_5bf1b;
        case m2c::kloc_5bf21: 	goto loc_5bf21;
        case m2c::kloc_5bf2f: 	goto loc_5bf2f;
        case m2c::kloc_5bf49: 	goto loc_5bf49;
        case m2c::ksub_5bef7: 	goto sub_5bef7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5bf4f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5bf4f:
    _begin:
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x00052f; 	X(MOV(*(dw*)(((db*)&word_5bb47)), 0x50));	// 186237 mov     cs:word_5BB47, 50h ; 'P' ;~ 4D44:052F
cs=0x4d44;eip=0x000536; 	T(XOR(dx, dx));	// 186238 xor     dx, dx ;~ 4D44:0536
loc_5bf58:
	// 7741 
cs=0x4d44;eip=0x000538; 	T(MOV(ax, 0x7BB0));	// 186241 mov     ax, 7BB0h ;~ 4D44:0538
cs=0x4d44;eip=0x00053b; 	T(OR(al, dl));	// 186242 or      al, dl ;~ 4D44:053B
cs=0x4d44;eip=0x00053d; 	T(XOR(cl, cl));	// 186243 xor     cl, cl ;~ 4D44:053D
cs=0x4d44;eip=0x00053f; 	J(CALL(sub_5bfc6,0));	// 186244 call    sub_5BFC6 ;~ 4D44:053F
cs=0x4d44;eip=0x000542; 	T(MOV(ax, 0x0E0));	// 186245 mov     ax, 0E0h ; 'à' ;~ 4D44:0542
cs=0x4d44;eip=0x000545; 	T(OR(al, dl));	// 186246 or      al, dl ;~ 4D44:0545
cs=0x4d44;eip=0x000547; 	T(MOV(cl, 0x40));	// 186247 mov     cl, 40h ; '@' ;~ 4D44:0547
cs=0x4d44;eip=0x000549; 	J(CALL(sub_5bfc6,0));	// 186248 call    sub_5BFC6 ;~ 4D44:0549
cs=0x4d44;eip=0x00054c; 	T(INC(dx));	// 186249 inc     dx ;~ 4D44:054C
cs=0x4d44;eip=0x00054d; 	T(CMP(dx, 0x0A));	// 186250 cmp     dx, 0Ah ;~ 4D44:054D
cs=0x4d44;eip=0x000550; 	J(JC(loc_5bf58));	// 186251 jb      short loc_5BF58 ;~ 4D44:0550
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x000552; 	X(MOV(*(dw*)(((db*)&word_5bb47)), 1));	// 186252 mov     cs:word_5BB47, 1 ;~ 4D44:0552
loc_5bf79:
	// 7742 
cs=0x4d44;eip=0x000559; 	T(MOV(bl, 0x0FF));	// 186255 mov     bl, 0FFh ;~ 4D44:0559
cs=0x4d44;eip=0x00055b; 	J(CALL(sub_5bf84,0));	// 186256 call    sub_5BF84 ;~ 4D44:055B
cs=0x4d44;eip=0x00055e; 	T(MOV(bl, 0x3F));	// 186257 mov     bl, 3Fh ; '?' ;~ 4D44:055E
cs=0x4d44;eip=0x000560; 	J(CALL(sub_5bf84,0));	// 186258 call    sub_5BF84 ;~ 4D44:0560
cs=0x4d44;eip=0x000563; 	J(RETN(0));	// 186259 retn ;~ 4D44:0563

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_5bf58: 	goto loc_5bf58;
        case m2c::kloc_5bf79: 	goto loc_5bf79;
        case m2c::ksub_5bf4f: 	goto sub_5bf4f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5bf84(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5bf84:
    _begin:
cs=0x4d44;eip=0x000564; 	X(PUSH(cx));	// 186268 push    cx ;~ 4D44:0564
cs=0x4d44;eip=0x000565; 	X(PUSH(dx));	// 186269 push    dx ;~ 4D44:0565
cs=0x4d44;eip=0x000566; 	X(PUSHF);	// 186270 pushf ;~ 4D44:0566
cs=0x4d44;eip=0x000567; 	T(CLI);	// 186271 cli ;~ 4D44:0567
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x000568; 	T(MOV(dx, *(dw*)(((db*)&word_5bb45))));	// 186272 mov     dx, cs:word_5BB45 ;~ 4D44:0568
cs=0x4d44;eip=0x00056d; 	T(INC(dx));	// 186273 inc     dx ;~ 4D44:056D
cs=0x4d44;eip=0x00056e; 	T(XOR(cx, cx));	// 186274 xor     cx, cx ;~ 4D44:056E
loc_5bf90:
	// 7743 
cs=0x4d44;eip=0x000570; 	S(IN(al, dx));	// 186277 in      al, dx ;~ 4D44:0570
cs=0x4d44;eip=0x000571; 	T(TEST(al, 0x40));	// 186278 test    al, 40h ;~ 4D44:0571
cs=0x4d44;eip=0x000573; 	J(LOOPNE(loc_5bf90));	// 186279 loopne  loc_5BF90 ;~ 4D44:0573
cs=0x4d44;eip=0x000575; 	T(MOV(al, bl));	// 186280 mov     al, bl ;~ 4D44:0575
cs=0x4d44;eip=0x000577; 	S(OUT(dx, al));	// 186281 out     dx, al ;~ 4D44:0577
cs=0x4d44;eip=0x000578; 	T(MOV(cx, 0x64));	// 186282 mov     cx, 64h ; 'd' ;~ 4D44:0578
loc_5bf9b:
	// 7744 
cs=0x4d44;eip=0x00057b; 	S(IN(al, dx));	// 186286 in      al, dx ;~ 4D44:057B
cs=0x4d44;eip=0x00057c; 	T(TEST(al, 0x80));	// 186287 test    al, 80h ;~ 4D44:057C
cs=0x4d44;eip=0x00057e; 	J(LOOPNE(loc_5bf9b));	// 186288 loopne  loc_5BF9B ;~ 4D44:057E
cs=0x4d44;eip=0x000580; 	T(INC(cx));	// 186289 inc     cx ;~ 4D44:0580
cs=0x4d44;eip=0x000581; 	T(DEC(dx));	// 186290 dec     dx ;~ 4D44:0581
cs=0x4d44;eip=0x000582; 	S(IN(al, dx));	// 186291 in      al, dx ;~ 4D44:0582
cs=0x4d44;eip=0x000583; 	T(INC(dx));	// 186292 inc     dx ;~ 4D44:0583
cs=0x4d44;eip=0x000584; 	T(CMP(al, 0x0FE));	// 186293 cmp     al, 0FEh ; 'ş' ;~ 4D44:0584
cs=0x4d44;eip=0x000586; 	J(LOOPNE(loc_5bf9b));	// 186294 loopne  loc_5BF9B ;~ 4D44:0586
cs=0x4d44;eip=0x000588; 	T(MOV(cx, 0x4E20));	// 186295 mov     cx, 4E20h ;~ 4D44:0588
loc_5bfab:
	// 7745 
cs=0x4d44;eip=0x00058b; 	S(IN(al, dx));	// 186298 in      al, dx ;~ 4D44:058B
cs=0x4d44;eip=0x00058c; 	J(LOOP(loc_5bfab));	// 186299 loop    loc_5BFAB ;~ 4D44:058C
cs=0x4d44;eip=0x00058e; 	X(POPF);	// 186300 popf ;~ 4D44:058E
cs=0x4d44;eip=0x00058f; 	X(POP(dx));	// 186301 pop     dx ;~ 4D44:058F
cs=0x4d44;eip=0x000590; 	X(POP(cx));	// 186302 pop     cx ;~ 4D44:0590
cs=0x4d44;eip=0x000591; 	J(RETN(0));	// 186303 retn ;~ 4D44:0591

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_5bf90: 	goto loc_5bf90;
        case m2c::kloc_5bf9b: 	goto loc_5bf9b;
        case m2c::kloc_5bfab: 	goto loc_5bfab;
        case m2c::ksub_5bf84: 	goto sub_5bf84;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5bfb2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5bfb2:
    _begin:
cs=0x4d44;eip=0x000592; 	X(PUSH(bx));	// 186313 push    bx ;~ 4D44:0592
cs=0x4d44;eip=0x000593; 	X(PUSH(cx));	// 186314 push    cx ;~ 4D44:0593
cs=0x4d44;eip=0x000594; 	X(PUSH(dx));	// 186315 push    dx ;~ 4D44:0594
cs=0x4d44;eip=0x000595; 	X(PUSHF);	// 186316 pushf ;~ 4D44:0595
cs=0x4d44;eip=0x000596; 	T(MOV(bx, ax));	// 186317 mov     bx, ax ;~ 4D44:0596
cs=0x4d44;eip=0x000598; 	T(CLI);	// 186318 cli ;~ 4D44:0598
cs=0x4d44;eip=0x000599; 	J(CALL(sub_5bfdf,0));	// 186319 call    sub_5BFDF ;~ 4D44:0599
cs=0x4d44;eip=0x00059c; 	T(MOV(bl, bh));	// 186320 mov     bl, bh ;~ 4D44:059C
cs=0x4d44;eip=0x00059e; 	J(CALL(sub_5bfdf,0));	// 186321 call    sub_5BFDF ;~ 4D44:059E
cs=0x4d44;eip=0x0005a1; 	X(POPF);	// 186322 popf ;~ 4D44:05A1
cs=0x4d44;eip=0x0005a2; 	X(POP(dx));	// 186323 pop     dx ;~ 4D44:05A2
cs=0x4d44;eip=0x0005a3; 	X(POP(cx));	// 186324 pop     cx ;~ 4D44:05A3
cs=0x4d44;eip=0x0005a4; 	X(POP(bx));	// 186325 pop     bx ;~ 4D44:05A4
cs=0x4d44;eip=0x0005a5; 	J(RETN(0));	// 186326 retn ;~ 4D44:05A5

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_5bfb2: 	goto sub_5bfb2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5bfc6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5bfc6:
    _begin:
cs=0x4d44;eip=0x0005a6; 	X(PUSH(bx));	// 186335 push    bx ;~ 4D44:05A6
cs=0x4d44;eip=0x0005a7; 	X(PUSH(cx));	// 186336 push    cx ;~ 4D44:05A7
cs=0x4d44;eip=0x0005a8; 	X(PUSH(dx));	// 186337 push    dx ;~ 4D44:05A8
cs=0x4d44;eip=0x0005a9; 	X(PUSHF);	// 186338 pushf ;~ 4D44:05A9
cs=0x4d44;eip=0x0005aa; 	T(MOV(bx, ax));	// 186339 mov     bx, ax ;~ 4D44:05AA
cs=0x4d44;eip=0x0005ac; 	X(PUSH(cx));	// 186340 push    cx ;~ 4D44:05AC
cs=0x4d44;eip=0x0005ad; 	T(CLI);	// 186341 cli ;~ 4D44:05AD
cs=0x4d44;eip=0x0005ae; 	J(CALL(sub_5bfdf,0));	// 186342 call    sub_5BFDF ;~ 4D44:05AE
cs=0x4d44;eip=0x0005b1; 	T(MOV(bl, bh));	// 186343 mov     bl, bh ;~ 4D44:05B1
cs=0x4d44;eip=0x0005b3; 	J(CALL(sub_5bfdf,0));	// 186344 call    sub_5BFDF ;~ 4D44:05B3
cs=0x4d44;eip=0x0005b6; 	X(POP(bx));	// 186345 pop     bx ;~ 4D44:05B6
cs=0x4d44;eip=0x0005b7; 	J(CALL(sub_5bfdf,0));	// 186346 call    sub_5BFDF ;~ 4D44:05B7
cs=0x4d44;eip=0x0005ba; 	X(POPF);	// 186347 popf ;~ 4D44:05BA
cs=0x4d44;eip=0x0005bb; 	X(POP(dx));	// 186348 pop     dx ;~ 4D44:05BB
cs=0x4d44;eip=0x0005bc; 	X(POP(cx));	// 186349 pop     cx ;~ 4D44:05BC
cs=0x4d44;eip=0x0005bd; 	X(POP(bx));	// 186350 pop     bx ;~ 4D44:05BD
cs=0x4d44;eip=0x0005be; 	J(RETN(0));	// 186351 retn ;~ 4D44:05BE

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_5bfc6: 	goto sub_5bfc6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5bfdf(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5bfdf:
    _begin:
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x0005bf; 	T(MOV(dx, *(dw*)(((db*)&word_5bb45))));	// 186360 mov     dx, cs:word_5BB45 ;~ 4D44:05BF
cs=0x4d44;eip=0x0005c4; 	T(INC(dx));	// 186361 inc     dx ;~ 4D44:05C4
cs=0x4d44;eip=0x0005c5; 	T(MOV(cx, 0x0FF));	// 186362 mov     cx, 0FFh ;~ 4D44:05C5
loc_5bfe8:
	// 7746 
cs=0x4d44;eip=0x0005c8; 	S(IN(al, dx));	// 186365 in      al, dx ;~ 4D44:05C8
cs=0x4d44;eip=0x0005c9; 	T(TEST(al, 0x40));	// 186366 test    al, 40h ;~ 4D44:05C9
cs=0x4d44;eip=0x0005cb; 	J(LOOPNE(loc_5bfe8));	// 186367 loopne  loc_5BFE8 ;~ 4D44:05CB
cs=0x4d44;eip=0x0005cd; 	T(DEC(dx));	// 186368 dec     dx ;~ 4D44:05CD
cs=0x4d44;eip=0x0005ce; 	T(MOV(al, bl));	// 186369 mov     al, bl ;~ 4D44:05CE
cs=0x4d44;eip=0x0005d0; 	S(OUT(dx, al));	// 186370 out     dx, al ;~ 4D44:05D0
cs=0x4d44;eip=0x0005d1; 	T(INC(dx));	// 186371 inc     dx ;~ 4D44:05D1
	cs=seg_offset(seg005);
cs=0x4d44;eip=0x0005d2; 	T(MOV(cx, *(dw*)(((db*)&word_5bb47))));	// 186372 mov     cx, cs:word_5BB47 ;~ 4D44:05D2
loc_5bff7:
	// 7747 
cs=0x4d44;eip=0x0005d7; 	S(IN(al, dx));	// 186375 in      al, dx ;~ 4D44:05D7
cs=0x4d44;eip=0x0005d8; 	J(LOOP(loc_5bff7));	// 186376 loop    loc_5BFF7 ;~ 4D44:05D8
cs=0x4d44;eip=0x0005da; 	J(RETN(0));	// 186377 retn ;~ 4D44:05DA

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_5bfe8: 	goto loc_5bfe8;
        case m2c::kloc_5bff7: 	goto loc_5bff7;
        case m2c::ksub_5bfdf: 	goto sub_5bfdf;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

