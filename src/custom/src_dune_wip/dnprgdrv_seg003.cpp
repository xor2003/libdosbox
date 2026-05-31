/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "dnprgdrv.h"

                

 bool _group147(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group147:
    _begin:
sub_56460:
	// 165561 
cs=0x47d8;eip=0x000100; 	J(JMP(loc_56480));	// 165566 jmp     short loc_56480 ;~ 47D8:0100
seg003_120_proc:
	// 165657 
loc_56480:
	// 7655 
cs=0x47d8;eip=0x000120; 	T(OR(ax, ax));	// 165658 or      ax, ax ;~ 47D8:0120
cs=0x47d8;eip=0x000122; 	J(JZ(loc_564a4));	// 165659 jz      short loc_564A4 ;~ 47D8:0122
cs=0x47d8;eip=0x000124; 	X(PUSH(ax));	// 165660 push    ax ;~ 47D8:0124
cs=0x47d8;eip=0x000125; 	T(AND(al, 0x0F));	// 165661 and     al, 0Fh ;~ 47D8:0125
cs=0x47d8;eip=0x000127; 	T(MOV(bx, 2));	// 165662 mov     bx, 2 ;~ 47D8:0127
cs=0x47d8;eip=0x00012a; 	J(CALL(sub_56b8b,0));	// 165663 call    sub_56B8B ;~ 47D8:012A
cs=0x47d8;eip=0x00012d; 	X(POP(ax));	// 165664 pop     ax ;~ 47D8:012D
cs=0x47d8;eip=0x00012e; 	T(SHR(ax, 1));	// 165665 shr     ax, 1 ;~ 47D8:012E
cs=0x47d8;eip=0x000130; 	T(SHR(ax, 1));	// 165666 shr     ax, 1 ;~ 47D8:0130
cs=0x47d8;eip=0x000132; 	T(SHR(ax, 1));	// 165667 shr     ax, 1 ;~ 47D8:0132
cs=0x47d8;eip=0x000134; 	T(SHR(ax, 1));	// 165668 shr     ax, 1 ;~ 47D8:0134
cs=0x47d8;eip=0x000136; 	X(PUSH(ax));	// 165669 push    ax ;~ 47D8:0136
cs=0x47d8;eip=0x000137; 	T(MOV(bx, 1));	// 165670 mov     bx, 1 ;~ 47D8:0137
cs=0x47d8;eip=0x00013a; 	J(CALL(sub_56b8b,0));	// 165671 call    sub_56B8B ;~ 47D8:013A
cs=0x47d8;eip=0x00013d; 	X(POP(ax));	// 165672 pop     ax ;~ 47D8:013D
cs=0x47d8;eip=0x00013e; 	T(MOV(bx, 0x0D));	// 165673 mov     bx, 0Dh ;~ 47D8:013E
cs=0x47d8;eip=0x000141; 	J(CALL(sub_56b8b,0));	// 165674 call    sub_56B8B ;~ 47D8:0141
loc_564a4:
	// 7656 
cs=0x47d8;eip=0x000144; 	T(MOV(bx, 3));	// 165677 mov     bx, 3 ;~ 47D8:0144
cs=0x47d8;eip=0x000147; 	J(CALL(sub_56b8b,0));	// 165678 call    sub_56B8B ;~ 47D8:0147
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x00014a; 	X(MOV(*(dw*)((&unk_5647c)), m2c::ksub_56460));	// 165679 mov     word ptr cs:unk_5647C, offset sub_56460 ;~ 47D8:014A
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x000151; 	X(MOV(*(dw*)(((db*)&seg_5647e)), cs));	// 165680 mov     cs:seg_5647E, cs ;~ 47D8:0151
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x000156; 	X(MOV(*(dw*)(((db*)&word_56478)), m2c::ksub_56460));	// 165681 mov     cs:word_56478, offset sub_56460 ;~ 47D8:0156
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x00015d; 	X(MOV(*(dw*)(((db*)&seg_5647a)), cs));	// 165682 mov     cs:seg_5647A, cs ;~ 47D8:015D
cs=0x47d8;eip=0x000162; 	X(PUSH(cs));	// 165683 push    cs ;~ 47D8:0162
cs=0x47d8;eip=0x000163; 	J(CALL(sub_56522,0));	// 165684 call    near ptr sub_56522 ;~ 47D8:0163
cs=0x47d8;eip=0x000166; 	T(MOV(bx, 0x0F));	// 165685 mov     bx, 0Fh ;~ 47D8:0166
cs=0x47d8;eip=0x000169; 	J(RETF(0));	// 165686 retf ;~ 47D8:0169

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_564a4: 	goto loc_564a4;
        case m2c::kseg003_120_proc: 	goto seg003_120_proc;
        case m2c::ksub_56460: 	goto sub_56460;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg003_102_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg003_102_proc:
    _begin:
cs=0x47d8;eip=0x000102; 	T(NOP);	// 165570 nop ;~ 47D8:0102
	R(return sub_56463(0, _state););
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kseg003_102_proc: 	goto seg003_102_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_56463(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_56463:
    _begin:
cs=0x47d8;eip=0x000103; 	J(return sub_56522(0, _state););	// 165579 jmp     near ptr sub_56522 ;~ 47D8:0103

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_56463: 	goto sub_56463;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_56466(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_56466:
    _begin:
cs=0x47d8;eip=0x000106; 	J(return sub_5653e(0, _state););	// 165589 jmp     near ptr sub_5653E ;~ 47D8:0106

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_56466: 	goto sub_56466;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_56469(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_56469:
    _begin:
cs=0x47d8;eip=0x000109; 	J(return sub_56522(0, _state););	// 165599 jmp     near ptr sub_56522 ;~ 47D8:0109

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_56469: 	goto sub_56469;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5646c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5646c:
    _begin:
cs=0x47d8;eip=0x00010c; 	J(return sub_5652b(0, _state););	// 165609 jmp     near ptr sub_5652B ;~ 47D8:010C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_5646c: 	goto sub_5646c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5646f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5646f:
    _begin:
cs=0x47d8;eip=0x00010f; 	J(return sub_56538(0, _state););	// 165619 jmp     near ptr sub_56538 ;~ 47D8:010F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_5646f: 	goto sub_5646f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_56472(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_56472:
    _begin:
cs=0x47d8;eip=0x000112; 	J(return sub_56577(0, _state););	// 165630 jmp     near ptr sub_56577 ;~ 47D8:0112

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_56472: 	goto sub_56472;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_56475(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_56475:
    _begin:
cs=0x47d8;eip=0x000115; 	J(return sub_56507(0, _state););	// 165641 jmp     near ptr sub_56507 ;~ 47D8:0115

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_56475: 	goto sub_56475;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_564ca(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_564ca:
    _begin:
cs=0x47d8;eip=0x00016a; 	X(PUSH(bx));	// 165693 push    bx ;~ 47D8:016A
cs=0x47d8;eip=0x00016b; 	X(PUSH(dx));	// 165694 push    dx ;~ 47D8:016B
cs=0x47d8;eip=0x00016c; 	T(SHR(al, 1));	// 165695 shr     al, 1 ;~ 47D8:016C
cs=0x47d8;eip=0x00016e; 	T(SHR(al, 1));	// 165696 shr     al, 1 ;~ 47D8:016E
cs=0x47d8;eip=0x000170; 	T(SHR(al, 1));	// 165697 shr     al, 1 ;~ 47D8:0170
cs=0x47d8;eip=0x000172; 	T(MOV(dx, ax));	// 165698 mov     dx, ax ;~ 47D8:0172
cs=0x47d8;eip=0x000174; 	T(MOV(bx, 0x0F078));	// 165699 mov     bx, 0F078h ;~ 47D8:0174
cs=0x47d8;eip=0x000177; 	T(CMP(ah, bl));	// 165700 cmp     ah, bl ;~ 47D8:0177
cs=0x47d8;eip=0x000179; 	J(JBE(loc_564dd));	// 165701 jbe     short loc_564DD ;~ 47D8:0179
cs=0x47d8;eip=0x00017b; 	T(MOV(ah, bl));	// 165702 mov     ah, bl ;~ 47D8:017B
loc_564dd:
	// 7657 
cs=0x47d8;eip=0x00017d; 	T(XOR(al, al));	// 165705 xor     al, al ;~ 47D8:017D
cs=0x47d8;eip=0x00017f; 	T(DIV1(bh));	// 165706 div     bh ;~ 47D8:017F
cs=0x47d8;eip=0x000181; 	T(MUL1_1(dl));	// 165707 mul     dl ;~ 47D8:0181
cs=0x47d8;eip=0x000183; 	T(XCHG(ah, dh));	// 165708 xchg    ah, dh ;~ 47D8:0183
cs=0x47d8;eip=0x000185; 	T(SUB(ah, bh));	// 165709 sub     ah, bh ;~ 47D8:0185
cs=0x47d8;eip=0x000187; 	T(NEG(ah));	// 165710 neg     ah ;~ 47D8:0187
cs=0x47d8;eip=0x000189; 	T(CMP(ah, bl));	// 165711 cmp     ah, bl ;~ 47D8:0189
cs=0x47d8;eip=0x00018b; 	J(JBE(loc_564ef));	// 165712 jbe     short loc_564EF ;~ 47D8:018B
cs=0x47d8;eip=0x00018d; 	T(MOV(ah, bl));	// 165713 mov     ah, bl ;~ 47D8:018D
loc_564ef:
	// 7658 
cs=0x47d8;eip=0x00018f; 	T(XOR(al, al));	// 165716 xor     al, al ;~ 47D8:018F
cs=0x47d8;eip=0x000191; 	T(DIV1(bh));	// 165717 div     bh ;~ 47D8:0191
cs=0x47d8;eip=0x000193; 	T(MUL1_1(dl));	// 165718 mul     dl ;~ 47D8:0193
cs=0x47d8;eip=0x000195; 	T(SHR(ax, 1));	// 165719 shr     ax, 1 ;~ 47D8:0195
cs=0x47d8;eip=0x000197; 	T(SHR(ax, 1));	// 165720 shr     ax, 1 ;~ 47D8:0197
cs=0x47d8;eip=0x000199; 	T(SHR(ax, 1));	// 165721 shr     ax, 1 ;~ 47D8:0199
cs=0x47d8;eip=0x00019b; 	T(SHR(ax, 1));	// 165722 shr     ax, 1 ;~ 47D8:019B
cs=0x47d8;eip=0x00019d; 	T(MOV(ah, dh));	// 165723 mov     ah, dh ;~ 47D8:019D
cs=0x47d8;eip=0x00019f; 	T(AND(ax, 0x0FF0));	// 165724 and     ax, 0FF0h ;~ 47D8:019F
cs=0x47d8;eip=0x0001a2; 	T(OR(al, ah));	// 165725 or      al, ah ;~ 47D8:01A2
cs=0x47d8;eip=0x0001a4; 	X(POP(dx));	// 165726 pop     dx ;~ 47D8:01A4
cs=0x47d8;eip=0x0001a5; 	X(POP(bx));	// 165727 pop     bx ;~ 47D8:01A5
cs=0x47d8;eip=0x0001a6; 	J(RETN(0));	// 165728 retn ;~ 47D8:01A6

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_564dd: 	goto loc_564dd;
        case m2c::kloc_564ef: 	goto loc_564ef;
        case m2c::ksub_564ca: 	goto sub_564ca;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_56507(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_56507:
    _begin:
cs=0x47d8;eip=0x0001a7; 	J(CALL(sub_564ca,0));	// 165736 call    sub_564CA ;~ 47D8:01A7
cs=0x47d8;eip=0x0001aa; 	T(MOV(ah, 4));	// 165737 mov     ah, 4 ;~ 47D8:01AA
cs=0x47d8;eip=0x0001ac; 	J(CALL(sub_56510,0));	// 165738 call    sub_56510 ;~ 47D8:01AC
cs=0x47d8;eip=0x0001af; 	J(RETF(0));	// 165739 retf ;~ 47D8:01AF

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_56507: 	goto sub_56507;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_56510(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_56510:
    _begin:
cs=0x47d8;eip=0x0001b0; 	X(PUSH(dx));	// 165747 push    dx ;~ 47D8:01B0
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x0001b1; 	T(MOV(dx, *(dw*)(((db*)&word_565e5))));	// 165748 mov     dx, cs:word_565E5 ;~ 47D8:01B1
cs=0x47d8;eip=0x0001b6; 	T(ADD(dl, 4));	// 165749 add     dl, 4 ;~ 47D8:01B6
cs=0x47d8;eip=0x0001b9; 	T(XCHG(al, ah));	// 165750 xchg    al, ah ;~ 47D8:01B9
cs=0x47d8;eip=0x0001bb; 	S(OUT(dx, al));	// 165751 out     dx, al ;~ 47D8:01BB
cs=0x47d8;eip=0x0001bc; 	T(INC(dx));	// 165752 inc     dx ;~ 47D8:01BC
cs=0x47d8;eip=0x0001bd; 	T(XCHG(al, ah));	// 165753 xchg    al, ah ;~ 47D8:01BD
cs=0x47d8;eip=0x0001bf; 	S(OUT(dx, al));	// 165754 out     dx, al ;~ 47D8:01BF
cs=0x47d8;eip=0x0001c0; 	X(POP(dx));	// 165755 pop     dx ;~ 47D8:01C0
cs=0x47d8;eip=0x0001c1; 	J(RETN(0));	// 165756 retn ;~ 47D8:01C1

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_56510: 	goto sub_56510;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_56522(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_56522:
    _begin:
cs=0x47d8;eip=0x0001c2; 	X(PUSH(bx));	// 165765 push    bx ;~ 47D8:01C2
cs=0x47d8;eip=0x0001c3; 	T(MOV(bx, 8));	// 165766 mov     bx, 8 ;~ 47D8:01C3
cs=0x47d8;eip=0x0001c6; 	J(CALL(sub_56b8b,0));	// 165767 call    sub_56B8B ;~ 47D8:01C6
cs=0x47d8;eip=0x0001c9; 	X(POP(bx));	// 165768 pop     bx ;~ 47D8:01C9
cs=0x47d8;eip=0x0001ca; 	J(RETF(0));	// 165769 retf ;~ 47D8:01CA

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_56522: 	goto sub_56522;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5652b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5652b:
    _begin:
cs=0x47d8;eip=0x0001cb; 	X(PUSH(ax));	// 165777 push    ax ;~ 47D8:01CB
cs=0x47d8;eip=0x0001cc; 	T(XOR(ax, ax));	// 165778 xor     ax, ax ;~ 47D8:01CC
loc_5652e:
	// 7659 
cs=0x47d8;eip=0x0001ce; 	X(PUSH(bx));	// 165781 push    bx ;~ 47D8:01CE
cs=0x47d8;eip=0x0001cf; 	T(MOV(bx, 0x0C));	// 165782 mov     bx, 0Ch ;~ 47D8:01CF
cs=0x47d8;eip=0x0001d2; 	J(CALL(sub_56b8b,0));	// 165783 call    sub_56B8B ;~ 47D8:01D2
cs=0x47d8;eip=0x0001d5; 	X(POP(bx));	// 165784 pop     bx ;~ 47D8:01D5
cs=0x47d8;eip=0x0001d6; 	X(POP(ax));	// 165785 pop     ax ;~ 47D8:01D6
cs=0x47d8;eip=0x0001d7; 	J(RETF(0));	// 165786 retf ;~ 47D8:01D7

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_5652e: 	goto loc_5652e;
        case m2c::ksub_5652b: 	goto sub_5652b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_56538(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_56538:
    _begin:
cs=0x47d8;eip=0x0001d8; 	X(PUSH(ax));	// 165794 push    ax ;~ 47D8:01D8
cs=0x47d8;eip=0x0001d9; 	T(MOV(ax, 1));	// 165795 mov     ax, 1 ;~ 47D8:01D9
cs=0x47d8;eip=0x0001dc; 	J(return sub_5652b(m2c::kloc_5652e, _state););	// 165796 jmp     short loc_5652E ;~ 47D8:01DC

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_56538: 	goto sub_56538;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5653e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5653e:
    _begin:
cs=0x47d8;eip=0x0001de; 	X(PUSH(es));	// 165805 push    es ;~ 47D8:01DE
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x0001df; 	X(MOV(*(dw*)(((db*)&word_56478)), si));	// 165806 mov     cs:word_56478, si ;~ 47D8:01DF
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x0001e4; 	X(MOV(*(dw*)(((db*)&seg_5647a)), ds));	// 165807 mov     cs:seg_5647A, ds ;~ 47D8:01E4
cs=0x47d8;eip=0x0001e9; 	T(LES(di, *(dw*)(raddr(ds,si))));	// 165808 les     di, [si] ;~ 47D8:01E9
cs=0x47d8;eip=0x0001eb; 	T(MOV(bx, *(dw*)(raddr(ds,si+4))));	// 165810 mov     bx, [si+4] ;~ 47D8:01EB
cs=0x47d8;eip=0x0001ee; 	X(OR(*(raddr(ds,si+6)), 3));	// 165811 or      byte ptr [si+6], 3 ;~ 47D8:01EE
cs=0x47d8;eip=0x0001f2; 	X(MOV(*(raddr(es,bx+di)), 0));	// 165812 mov     byte ptr es:[bx+di], 0 ;~ 47D8:01F2
cs=0x47d8;eip=0x0001f6; 	T(SUB(bx, 4));	// 165813 sub     bx, 4 ;~ 47D8:01F6
cs=0x47d8;eip=0x0001f9; 	T(CMP(*(raddr(es,di+3)), 0));	// 165814 cmp     byte ptr es:[di+3], 0 ;~ 47D8:01F9
cs=0x47d8;eip=0x0001fe; 	J(JNZ(loc_56566));	// 165815 jnz     short loc_56566 ;~ 47D8:01FE
cs=0x47d8;eip=0x000200; 	T(CMP(*(dw*)(raddr(es,di+1)), bx));	// 165816 cmp     es:[di+1], bx ;~ 47D8:0200
cs=0x47d8;eip=0x000204; 	J(JC(loc_5656f));	// 165817 jb      short loc_5656F ;~ 47D8:0204
loc_56566:
	// 7660 
cs=0x47d8;eip=0x000206; 	X(MOV(*(dw*)(raddr(es,di+1)), bx));	// 165820 mov     es:[di+1], bx ;~ 47D8:0206
cs=0x47d8;eip=0x00020a; 	X(MOV(*(raddr(es,di+3)), 0));	// 165821 mov     byte ptr es:[di+3], 0 ;~ 47D8:020A
loc_5656f:
	// 7661 
cs=0x47d8;eip=0x00020f; 	T(MOV(bx, 6));	// 165824 mov     bx, 6 ;~ 47D8:020F
cs=0x47d8;eip=0x000212; 	J(CALL(sub_56b8b,0));	// 165825 call    sub_56B8B ;~ 47D8:0212
cs=0x47d8;eip=0x000215; 	X(POP(es));	// 165826 pop     es ;~ 47D8:0215
cs=0x47d8;eip=0x000216; 	J(RETF(0));	// 165828 retf ;~ 47D8:0216

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_56566: 	goto loc_56566;
        case m2c::kloc_5656f: 	goto loc_5656f;
        case m2c::ksub_5653e: 	goto sub_5653e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_56577(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_56577:
    _begin:
cs=0x47d8;eip=0x000217; 	X(PUSH(es));	// 165837 push    es ;~ 47D8:0217
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x000218; 	X(MOV(*(dw*)((&unk_5647c)), si));	// 165838 mov     word ptr cs:unk_5647C, si ;~ 47D8:0218
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x00021d; 	X(MOV(*(dw*)(((db*)&seg_5647e)), ds));	// 165839 mov     cs:seg_5647E, ds ;~ 47D8:021D
cs=0x47d8;eip=0x000222; 	T(LES(di, *(dw*)(raddr(ds,si))));	// 165840 les     di, [si] ;~ 47D8:0222
cs=0x47d8;eip=0x000224; 	T(MOV(bx, *(dw*)(raddr(ds,si+4))));	// 165841 mov     bx, [si+4] ;~ 47D8:0224
cs=0x47d8;eip=0x000227; 	T(CMP(*(raddr(ds,si+7)), 0));	// 165842 cmp     byte ptr [si+7], 0 ;~ 47D8:0227
cs=0x47d8;eip=0x00022b; 	J(JNS(loc_56592));	// 165843 jns     short loc_56592 ;~ 47D8:022B
cs=0x47d8;eip=0x00022d; 	T(OR(bx, bx));	// 165844 or      bx, bx ;~ 47D8:022D
cs=0x47d8;eip=0x00022f; 	J(JZ(loc_56592));	// 165845 jz      short loc_56592 ;~ 47D8:022F
cs=0x47d8;eip=0x000231; 	T(DEC(bx));	// 165846 dec     bx ;~ 47D8:0231
loc_56592:
	// 7662 
cs=0x47d8;eip=0x000232; 	X(MOV(*(raddr(es,bx+di+6)), 0));	// 165850 mov     byte ptr es:[bx+di+6], 0 ;~ 47D8:0232
cs=0x47d8;eip=0x000237; 	X(MOV(*(raddr(es,di+2)), 2));	// 165851 mov     byte ptr es:[di+2], 2 ;~ 47D8:0237
cs=0x47d8;eip=0x00023c; 	X(MOV(*(dw*)(raddr(es,di+3)), bx));	// 165852 mov     es:[di+3], bx ;~ 47D8:023C
cs=0x47d8;eip=0x000240; 	X(MOV(*(raddr(es,di+5)), 0));	// 165853 mov     byte ptr es:[di+5], 0 ;~ 47D8:0240
cs=0x47d8;eip=0x000245; 	X(MOV(*(raddr(ds,si+6)), 2));	// 165854 mov     byte ptr [si+6], 2 ;~ 47D8:0245
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x000249; 	T(CMP(*(&byte_565f2), 0));	// 165855 cmp     cs:byte_565F2, 0 ;~ 47D8:0249
cs=0x47d8;eip=0x00024f; 	J(JNZ(loc_565e1));	// 165856 jnz     short loc_565E1 ;~ 47D8:024F
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x000251; 	T(CMP(*(&byte_5665e), 0));	// 165857 cmp     cs:byte_5665E, 0 ;~ 47D8:0251
cs=0x47d8;eip=0x000257; 	J(JNZ(loc_565e1));	// 165858 jnz     short loc_565E1 ;~ 47D8:0257
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x000259; 	T(LDS(si, *(dd*)((&unk_5647c))));	// 165859 lds     si, dword ptr cs:unk_5647C ;~ 47D8:0259
cs=0x47d8;eip=0x00025e; 	T(LES(di, *(dw*)(raddr(ds,si))));	// 165861 les     di, [si] ;~ 47D8:025E
cs=0x47d8;eip=0x000260; 	X(ADD(*(dw*)(raddr(ds,si+4)), 6));	// 165863 add     word ptr [si+4], 6 ;~ 47D8:0260
cs=0x47d8;eip=0x000264; 	X(MOV(*(raddr(es,di)), 1));	// 165864 mov     byte ptr es:[di], 1 ;~ 47D8:0264
cs=0x47d8;eip=0x000268; 	X(MOV(*(raddr(es,di+3)), 1));	// 165865 mov     byte ptr es:[di+3], 1 ;~ 47D8:0268
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x00026d; 	T(MOV(al, *(&byte_5665c)));	// 165866 mov     al, cs:byte_5665C ;~ 47D8:026D
cs=0x47d8;eip=0x000271; 	X(MOV(*(raddr(es,di+4)), al));	// 165867 mov     es:[di+4], al ;~ 47D8:0271
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x000275; 	T(MOV(al, *(&byte_5665d)));	// 165868 mov     al, cs:byte_5665D ;~ 47D8:0275
cs=0x47d8;eip=0x000279; 	X(MOV(*(raddr(es,di+5)), al));	// 165869 mov     es:[di+5], al ;~ 47D8:0279
cs=0x47d8;eip=0x00027d; 	X(PUSH(cs));	// 165870 push    cs ;~ 47D8:027D
cs=0x47d8;eip=0x00027e; 	J(CALL(sub_5653e,0));	// 165871 call    near ptr sub_5653E ;~ 47D8:027E
loc_565e1:
	// 7663 
cs=0x47d8;eip=0x000281; 	X(POP(es));	// 165876 pop     es ;~ 47D8:0281
cs=0x47d8;eip=0x000282; 	J(RETF(0));	// 165877 retf ;~ 47D8:0282

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_56592: 	goto loc_56592;
        case m2c::kloc_565e1: 	goto loc_565e1;
        case m2c::ksub_56577: 	goto sub_56577;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5665f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5665f:
    _begin:
cs=0x47d8;eip=0x0002ff; 	X(PUSH(cx));	// 166001 push    cx ;~ 47D8:02FF
cs=0x47d8;eip=0x000300; 	T(MOV(cx, 0x200));	// 166002 mov     cx, 200h ;~ 47D8:0300
cs=0x47d8;eip=0x000303; 	T(MOV(ah, al));	// 166003 mov     ah, al ;~ 47D8:0303
loc_56665:
	// 7664 
cs=0x47d8;eip=0x000305; 	S(IN(al, dx));	// 166006 in      al, dx ;~ 47D8:0305
cs=0x47d8;eip=0x000306; 	T(OR(al, al));	// 166007 or      al, al ;~ 47D8:0306
cs=0x47d8;eip=0x000308; 	J(JNS(loc_5666f));	// 166008 jns     short loc_5666F ;~ 47D8:0308
cs=0x47d8;eip=0x00030a; 	J(LOOP(loc_56665));	// 166009 loop    loc_56665 ;~ 47D8:030A
cs=0x47d8;eip=0x00030c; 	T(STC);	// 166010 stc ;~ 47D8:030C
cs=0x47d8;eip=0x00030d; 	J(JMP(loc_56673));	// 166011 jmp     short loc_56673 ;~ 47D8:030D
loc_5666f:
	// 7665 
cs=0x47d8;eip=0x00030f; 	T(MOV(al, ah));	// 166015 mov     al, ah ;~ 47D8:030F
cs=0x47d8;eip=0x000311; 	S(OUT(dx, al));	// 166016 out     dx, al ;~ 47D8:0311
cs=0x47d8;eip=0x000312; 	T(CLC);	// 166017 clc ;~ 47D8:0312
loc_56673:
	// 7666 
cs=0x47d8;eip=0x000313; 	X(POP(cx));	// 166020 pop     cx ;~ 47D8:0313
cs=0x47d8;eip=0x000314; 	J(RETN(0));	// 166021 retn ;~ 47D8:0314

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_56665: 	goto loc_56665;
        case m2c::kloc_5666f: 	goto loc_5666f;
        case m2c::kloc_56673: 	goto loc_56673;
        case m2c::ksub_5665f: 	goto sub_5665f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_56675(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_56675:
    _begin:
cs=0x47d8;eip=0x000315; 	X(PUSH(cx));	// 166030 push    cx ;~ 47D8:0315
cs=0x47d8;eip=0x000316; 	X(PUSH(dx));	// 166031 push    dx ;~ 47D8:0316
cs=0x47d8;eip=0x000317; 	T(MOV(dx, word_565e5));	// 166032 mov     dx, word_565E5 ;~ 47D8:0317
cs=0x47d8;eip=0x00031b; 	T(ADD(dl, 0x0E));	// 166033 add     dl, 0Eh ;~ 47D8:031B
cs=0x47d8;eip=0x00031e; 	T(MOV(cx, 0x200));	// 166034 mov     cx, 200h ;~ 47D8:031E
loc_56681:
	// 7667 
cs=0x47d8;eip=0x000321; 	S(IN(al, dx));	// 166037 in      al, dx ;~ 47D8:0321
cs=0x47d8;eip=0x000322; 	T(OR(al, al));	// 166038 or      al, al ;~ 47D8:0322
cs=0x47d8;eip=0x000324; 	J(JS(loc_5668b));	// 166039 js      short loc_5668B ;~ 47D8:0324
cs=0x47d8;eip=0x000326; 	J(LOOP(loc_56681));	// 166040 loop    loc_56681 ;~ 47D8:0326
cs=0x47d8;eip=0x000328; 	T(STC);	// 166041 stc ;~ 47D8:0328
cs=0x47d8;eip=0x000329; 	J(JMP(loc_56690));	// 166042 jmp     short loc_56690 ;~ 47D8:0329
loc_5668b:
	// 7668 
cs=0x47d8;eip=0x00032b; 	T(SUB(dl, 4));	// 166046 sub     dl, 4 ;~ 47D8:032B
cs=0x47d8;eip=0x00032e; 	S(IN(al, dx));	// 166047 in      al, dx ;~ 47D8:032E
cs=0x47d8;eip=0x00032f; 	T(CLC);	// 166048 clc ;~ 47D8:032F
loc_56690:
	// 7669 
cs=0x47d8;eip=0x000330; 	X(POP(dx));	// 166051 pop     dx ;~ 47D8:0330
cs=0x47d8;eip=0x000331; 	X(POP(cx));	// 166052 pop     cx ;~ 47D8:0331
cs=0x47d8;eip=0x000332; 	J(RETN(0));	// 166053 retn ;~ 47D8:0332

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_56681: 	goto loc_56681;
        case m2c::kloc_5668b: 	goto loc_5668b;
        case m2c::kloc_56690: 	goto loc_56690;
        case m2c::ksub_56675: 	goto sub_56675;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_56693(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_56693:
    _begin:
cs=0x47d8;eip=0x000333; 	T(MOV(dx, word_565e5));	// 166062 mov     dx, word_565E5 ;~ 47D8:0333
cs=0x47d8;eip=0x000337; 	T(ADD(dl, 0x0C));	// 166063 add     dl, 0Ch ;~ 47D8:0337
	R(return sub_5669a(0, _state););
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_56693: 	goto sub_56693;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5669a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5669a:
    _begin:
cs=0x47d8;eip=0x00033a; 	T(MOV(ah, al));	// 166072 mov     ah, al ;~ 47D8:033A
cs=0x47d8;eip=0x00033c; 	T(MOV(al, 0x0F0));	// 166073 mov     al, 0F0h ; 'ğ' ;~ 47D8:033C
loc_5669e:
	// 7670 
cs=0x47d8;eip=0x00033e; 	S(IN(al, dx));	// 166076 in      al, dx ;~ 47D8:033E
cs=0x47d8;eip=0x00033f; 	T(OR(al, al));	// 166077 or      al, al ;~ 47D8:033F
cs=0x47d8;eip=0x000341; 	J(JS(loc_5669e));	// 166078 js      short loc_5669E ;~ 47D8:0341
cs=0x47d8;eip=0x000343; 	T(MOV(al, ah));	// 166079 mov     al, ah ;~ 47D8:0343
cs=0x47d8;eip=0x000345; 	S(OUT(dx, al));	// 166080 out     dx, al ;~ 47D8:0345
cs=0x47d8;eip=0x000346; 	J(RETN(0));	// 166081 retn ;~ 47D8:0346

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_5669e: 	goto loc_5669e;
        case m2c::ksub_5669a: 	goto sub_5669a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_566a7(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_566a7:
    _begin:
cs=0x47d8;eip=0x000347; 	X(PUSH(dx));	// 166090 push    dx ;~ 47D8:0347
cs=0x47d8;eip=0x000348; 	T(MOV(dx, word_565e5));	// 166091 mov     dx, word_565E5 ;~ 47D8:0348
cs=0x47d8;eip=0x00034c; 	T(ADD(dl, 0x0E));	// 166092 add     dl, 0Eh ;~ 47D8:034C
cs=0x47d8;eip=0x00034f; 	T(XOR(al, al));	// 166093 xor     al, al ;~ 47D8:034F
loc_566b1:
	// 7671 
cs=0x47d8;eip=0x000351; 	S(IN(al, dx));	// 166096 in      al, dx ;~ 47D8:0351
cs=0x47d8;eip=0x000352; 	T(OR(al, al));	// 166097 or      al, al ;~ 47D8:0352
cs=0x47d8;eip=0x000354; 	J(JNS(loc_566b1));	// 166098 jns     short loc_566B1 ;~ 47D8:0354
cs=0x47d8;eip=0x000356; 	T(SUB(dl, 4));	// 166099 sub     dl, 4 ;~ 47D8:0356
cs=0x47d8;eip=0x000359; 	S(IN(al, dx));	// 166100 in      al, dx ;~ 47D8:0359
cs=0x47d8;eip=0x00035a; 	X(POP(dx));	// 166101 pop     dx ;~ 47D8:035A
cs=0x47d8;eip=0x00035b; 	J(RETN(0));	// 166102 retn ;~ 47D8:035B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_566b1: 	goto loc_566b1;
        case m2c::ksub_566a7: 	goto sub_566a7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_566bc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_566bc:
    _begin:
cs=0x47d8;eip=0x00035c; 	T(MOV(dx, word_565e5));	// 166110 mov     dx, word_565E5 ;~ 47D8:035C
cs=0x47d8;eip=0x000360; 	T(ADD(dl, 6));	// 166111 add     dl, 6 ;~ 47D8:0360
cs=0x47d8;eip=0x000363; 	T(MOV(al, 1));	// 166112 mov     al, 1 ;~ 47D8:0363
cs=0x47d8;eip=0x000365; 	S(OUT(dx, al));	// 166113 out     dx, al ;~ 47D8:0365
cs=0x47d8;eip=0x000366; 	S(IN(al, dx));	// 166114 in      al, dx ;~ 47D8:0366
cs=0x47d8;eip=0x000367; 	S(IN(al, dx));	// 166115 in      al, dx ;~ 47D8:0367
cs=0x47d8;eip=0x000368; 	S(IN(al, dx));	// 166116 in      al, dx ;~ 47D8:0368
cs=0x47d8;eip=0x000369; 	S(IN(al, dx));	// 166117 in      al, dx ;~ 47D8:0369
cs=0x47d8;eip=0x00036a; 	T(XOR(al, al));	// 166118 xor     al, al ;~ 47D8:036A
cs=0x47d8;eip=0x00036c; 	S(OUT(dx, al));	// 166119 out     dx, al ;~ 47D8:036C
cs=0x47d8;eip=0x00036d; 	T(MOV(bl, 0x10));	// 166120 mov     bl, 10h ;~ 47D8:036D
loc_566cf:
	// 7672 
cs=0x47d8;eip=0x00036f; 	J(CALL(sub_56675,0));	// 166123 call    sub_56675 ;~ 47D8:036F
cs=0x47d8;eip=0x000372; 	T(CMP(al, 0x0AA));	// 166124 cmp     al, 0AAh ; 'ª' ;~ 47D8:0372
cs=0x47d8;eip=0x000374; 	J(JZ(loc_566e0));	// 166125 jz      short loc_566E0 ;~ 47D8:0374
cs=0x47d8;eip=0x000376; 	T(DEC(bl));	// 166126 dec     bl ;~ 47D8:0376
cs=0x47d8;eip=0x000378; 	J(JNZ(loc_566cf));	// 166127 jnz     short loc_566CF ;~ 47D8:0378
cs=0x47d8;eip=0x00037a; 	T(MOV(ax, 2));	// 166128 mov     ax, 2 ;~ 47D8:037A
cs=0x47d8;eip=0x00037d; 	J(JMP(loc_566e2));	// 166129 jmp     short loc_566E2 ;~ 47D8:037D
loc_566e0:
	// 7673 
cs=0x47d8;eip=0x000380; 	T(XOR(ax, ax));	// 166135 xor     ax, ax ;~ 47D8:0380
loc_566e2:
	// 7674 
cs=0x47d8;eip=0x000382; 	T(OR(ax, ax));	// 166138 or      ax, ax ;~ 47D8:0382
cs=0x47d8;eip=0x000384; 	J(RETN(0));	// 166139 retn ;~ 47D8:0384

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_566cf: 	goto loc_566cf;
        case m2c::kloc_566e0: 	goto loc_566e0;
        case m2c::kloc_566e2: 	goto loc_566e2;
        case m2c::ksub_566bc: 	goto sub_566bc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_566e5(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_566e5:
    _begin:
cs=0x47d8;eip=0x000385; 	T(MOV(bx, 2));	// 166147 mov     bx, 2 ;~ 47D8:0385
cs=0x47d8;eip=0x000388; 	T(MOV(al, 0x0E0));	// 166148 mov     al, 0E0h ; 'à' ;~ 47D8:0388
cs=0x47d8;eip=0x00038a; 	T(MOV(dx, word_565e5));	// 166149 mov     dx, word_565E5 ;~ 47D8:038A
cs=0x47d8;eip=0x00038e; 	T(ADD(dl, 0x0C));	// 166150 add     dl, 0Ch ;~ 47D8:038E
cs=0x47d8;eip=0x000391; 	J(CALL(sub_5665f,0));	// 166151 call    sub_5665F ;~ 47D8:0391
cs=0x47d8;eip=0x000394; 	J(JC(loc_56708));	// 166152 jb      short loc_56708 ;~ 47D8:0394
cs=0x47d8;eip=0x000396; 	T(MOV(al, 0x0AA));	// 166153 mov     al, 0AAh ; 'ª' ;~ 47D8:0396
cs=0x47d8;eip=0x000398; 	J(CALL(sub_5665f,0));	// 166154 call    sub_5665F ;~ 47D8:0398
cs=0x47d8;eip=0x00039b; 	J(JC(loc_56708));	// 166155 jb      short loc_56708 ;~ 47D8:039B
cs=0x47d8;eip=0x00039d; 	J(CALL(sub_56675,0));	// 166156 call    sub_56675 ;~ 47D8:039D
cs=0x47d8;eip=0x0003a0; 	J(JC(loc_56708));	// 166157 jb      short loc_56708 ;~ 47D8:03A0
cs=0x47d8;eip=0x0003a2; 	T(CMP(al, 0x55));	// 166158 cmp     al, 55h ; 'U' ;~ 47D8:03A2
cs=0x47d8;eip=0x0003a4; 	J(JNZ(loc_56708));	// 166159 jnz     short loc_56708 ;~ 47D8:03A4
cs=0x47d8;eip=0x0003a6; 	T(XOR(bx, bx));	// 166160 xor     bx, bx ;~ 47D8:03A6
loc_56708:
	// 7675 
cs=0x47d8;eip=0x0003a8; 	T(MOV(ax, bx));	// 166164 mov     ax, bx ;~ 47D8:03A8
cs=0x47d8;eip=0x0003aa; 	T(OR(ax, ax));	// 166165 or      ax, ax ;~ 47D8:03AA
cs=0x47d8;eip=0x0003ac; 	J(RETN(0));	// 166166 retn ;~ 47D8:03AC

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_56708: 	goto loc_56708;
        case m2c::ksub_566e5: 	goto sub_566e5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5670d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5670d:
    _begin:
cs=0x47d8;eip=0x0003ad; 	X(PUSH(ax));	// 166174 push    ax ;~ 47D8:03AD
cs=0x47d8;eip=0x0003ae; 	X(PUSH(dx));	// 166175 push    dx ;~ 47D8:03AE
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x0003af; 	T(MOV(dx, *(dw*)(((db*)&word_565e5))));	// 166176 mov     dx, cs:word_565E5 ;~ 47D8:03AF
cs=0x47d8;eip=0x0003b4; 	T(ADD(dl, 0x0E));	// 166177 add     dl, 0Eh ;~ 47D8:03B4
cs=0x47d8;eip=0x0003b7; 	S(IN(al, dx));	// 166178 in      al, dx ;~ 47D8:03B7
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x0003b8; 	X(MOV(*(&byte_565ee), 1));	// 166179 mov     cs:byte_565EE, 1 ;~ 47D8:03B8
cs=0x47d8;eip=0x0003be; 	T(MOV(al, 0x20));	// 166180 mov     al, 20h ; ' ' ;~ 47D8:03BE
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x0003c0; 	T(CMP(*(&byte_565e7), 8));	// 166181 cmp     cs:byte_565E7, 8 ;~ 47D8:03C0
cs=0x47d8;eip=0x0003c6; 	J(JC(loc_5672c));	// 166182 jb      short loc_5672C ;~ 47D8:03C6
cs=0x47d8;eip=0x0003c8; 	S(OUT(0x0A0, al));	// 166183 out     0A0h, al        ; PIC 2  same as 0020 for PIC 1 ;~ 47D8:03C8
cs=0x47d8;eip=0x0003ca; 	J({;});	// 166184 jmp     short $+2 ;~ 47D8:03CA
loc_5672c:
	// 7676 
cs=0x47d8;eip=0x0003cc; 	S(OUT(0x20, al));	// 166189 out     20h, al         ; Interrupt controller, 8259A. ;~ 47D8:03CC
cs=0x47d8;eip=0x0003ce; 	X(POP(dx));	// 166190 pop     dx ;~ 47D8:03CE
cs=0x47d8;eip=0x0003cf; 	X(POP(ax));	// 166191 pop     ax ;~ 47D8:03CF
cs=0x47d8;eip=0x0003d0; 	J(IRET);	// 166192 iret ;~ 47D8:03D0

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_5672c: 	goto loc_5672c;
        case m2c::ksub_5670d: 	goto sub_5670d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_56731(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_56731:
    _begin:
cs=0x47d8;eip=0x0003d1; 	X(MOV(byte_565ee, 0));	// 166200 mov     byte_565EE, 0 ;~ 47D8:03D1
cs=0x47d8;eip=0x0003d6; 	T(MOV(ax, 0x3AD));	// 166201 mov     ax, 3ADh ;~ 47D8:03D6
cs=0x47d8;eip=0x0003d9; 	J(CALL(sub_56838,0));	// 166202 call    sub_56838 ;~ 47D8:03D9
cs=0x47d8;eip=0x0003dc; 	T(MOV(dx, cs));	// 166203 mov     dx, cs ;~ 47D8:03DC
cs=0x47d8;eip=0x0003de; 	T(MOV(ax, 0x291));	// 166204 mov     ax, 291h ;~ 47D8:03DE
cs=0x47d8;eip=0x0003e1; 	J(CALL(sub_567ea,0));	// 166205 call    sub_567EA ;~ 47D8:03E1
cs=0x47d8;eip=0x0003e4; 	T(XOR(cx, cx));	// 166206 xor     cx, cx ;~ 47D8:03E4
cs=0x47d8;eip=0x0003e6; 	T(MOV(dh, 0x48));	// 166207 mov     dh, 48h ; 'H' ;~ 47D8:03E6
cs=0x47d8;eip=0x0003e8; 	J(CALL(sub_567b0,0));	// 166208 call    sub_567B0 ;~ 47D8:03E8
cs=0x47d8;eip=0x0003eb; 	T(MOV(al, 0x40));	// 166209 mov     al, 40h ; '@' ;~ 47D8:03EB
cs=0x47d8;eip=0x0003ed; 	J(CALL(sub_56693,0));	// 166210 call    sub_56693 ;~ 47D8:03ED
cs=0x47d8;eip=0x0003f0; 	T(MOV(al, 0x64));	// 166211 mov     al, 64h ; 'd' ;~ 47D8:03F0
cs=0x47d8;eip=0x0003f2; 	J(CALL(sub_5669a,0));	// 166212 call    sub_5669A ;~ 47D8:03F2
cs=0x47d8;eip=0x0003f5; 	T(MOV(al, 0x14));	// 166213 mov     al, 14h ;~ 47D8:03F5
cs=0x47d8;eip=0x0003f7; 	J(CALL(sub_5669a,0));	// 166214 call    sub_5669A ;~ 47D8:03F7
cs=0x47d8;eip=0x0003fa; 	T(XOR(al, al));	// 166215 xor     al, al ;~ 47D8:03FA
cs=0x47d8;eip=0x0003fc; 	J(CALL(sub_5669a,0));	// 166216 call    sub_5669A ;~ 47D8:03FC
cs=0x47d8;eip=0x0003ff; 	T(XOR(al, al));	// 166217 xor     al, al ;~ 47D8:03FF
cs=0x47d8;eip=0x000401; 	J(CALL(sub_5669a,0));	// 166218 call    sub_5669A ;~ 47D8:0401
cs=0x47d8;eip=0x000404; 	T(XOR(ax, ax));	// 166219 xor     ax, ax ;~ 47D8:0404
cs=0x47d8;eip=0x000406; 	T(MOV(cx, 0x0FFFF));	// 166220 mov     cx, 0FFFFh ;~ 47D8:0406
loc_56769:
	// 7677 
cs=0x47d8;eip=0x000409; 	T(CMP(byte_565ee, 0));	// 166223 cmp     byte_565EE, 0 ;~ 47D8:0409
cs=0x47d8;eip=0x00040e; 	J(JNZ(loc_56774));	// 166224 jnz     short loc_56774 ;~ 47D8:040E
cs=0x47d8;eip=0x000410; 	J(LOOP(loc_56769));	// 166225 loop    loc_56769 ;~ 47D8:0410
cs=0x47d8;eip=0x000412; 	T(MOV(al, 3));	// 166226 mov     al, 3 ;~ 47D8:0412
loc_56774:
	// 7678 
cs=0x47d8;eip=0x000414; 	X(PUSH(ax));	// 166229 push    ax ;~ 47D8:0414
cs=0x47d8;eip=0x000415; 	J(CALL(sub_56884,0));	// 166230 call    sub_56884 ;~ 47D8:0415
cs=0x47d8;eip=0x000418; 	X(POP(ax));	// 166231 pop     ax ;~ 47D8:0418
cs=0x47d8;eip=0x000419; 	T(OR(ax, ax));	// 166232 or      ax, ax ;~ 47D8:0419
cs=0x47d8;eip=0x00041b; 	J(RETN(0));	// 166233 retn ;~ 47D8:041B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_56769: 	goto loc_56769;
        case m2c::kloc_56774: 	goto loc_56774;
        case m2c::ksub_56731: 	goto sub_56731;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5677c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5677c:
    _begin:
cs=0x47d8;eip=0x00041c; 	T(MOV(al, 0x0E1));	// 166241 mov     al, 0E1h ; 'á' ;~ 47D8:041C
cs=0x47d8;eip=0x00041e; 	J(CALL(sub_5669a,0));	// 166242 call    sub_5669A ;~ 47D8:041E
cs=0x47d8;eip=0x000421; 	J(CALL(sub_566a7,0));	// 166243 call    sub_566A7 ;~ 47D8:0421
cs=0x47d8;eip=0x000424; 	T(MOV(ah, al));	// 166244 mov     ah, al ;~ 47D8:0424
cs=0x47d8;eip=0x000426; 	J(CALL(sub_566a7,0));	// 166245 call    sub_566A7 ;~ 47D8:0426
cs=0x47d8;eip=0x000429; 	T(CMP(ax, 0x103));	// 166246 cmp     ax, 103h ;~ 47D8:0429
cs=0x47d8;eip=0x00042c; 	T(MOV(ax, 0));	// 166247 mov     ax, 0 ;~ 47D8:042C
cs=0x47d8;eip=0x00042f; 	T(ADC(al, ah));	// 166248 adc     al, ah ;~ 47D8:042F
cs=0x47d8;eip=0x000431; 	J(RETN(0));	// 166249 retn ;~ 47D8:0431

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_5677c: 	goto sub_5677c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_56792(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_56792:
    _begin:
cs=0x47d8;eip=0x000432; 	X(PUSHF);	// 166258 pushf ;~ 47D8:0432
cs=0x47d8;eip=0x000433; 	T(MOV(cx, 0x64));	// 166259 mov     cx, 64h ; 'd' ;~ 47D8:0433
cs=0x47d8;eip=0x000436; 	T(MOV(dx, word_565e5));	// 166260 mov     dx, word_565E5 ;~ 47D8:0436
cs=0x47d8;eip=0x00043a; 	T(ADD(dl, 0x0C));	// 166261 add     dl, 0Ch ;~ 47D8:043A
loc_5679d:
	// 7679 
cs=0x47d8;eip=0x00043d; 	T(STI);	// 166264 sti ;~ 47D8:043D
cs=0x47d8;eip=0x00043e; 	T(CMP(byte_565f2, 0));	// 166265 cmp     byte_565F2, 0 ;~ 47D8:043E
cs=0x47d8;eip=0x000443; 	J(JZ(loc_567ae));	// 166266 jz      short loc_567AE ;~ 47D8:0443
cs=0x47d8;eip=0x000445; 	T(CLI);	// 166267 cli ;~ 47D8:0445
cs=0x47d8;eip=0x000446; 	S(IN(al, dx));	// 166268 in      al, dx ;~ 47D8:0446
cs=0x47d8;eip=0x000447; 	T(TEST(al, 0x80));	// 166269 test    al, 80h ;~ 47D8:0447
cs=0x47d8;eip=0x000449; 	J(LOOPNE(loc_5679d));	// 166270 loopne  loc_5679D ;~ 47D8:0449
cs=0x47d8;eip=0x00044b; 	T(MOV(al, 0x0D0));	// 166271 mov     al, 0D0h ; 'Ğ' ;~ 47D8:044B
cs=0x47d8;eip=0x00044d; 	S(OUT(dx, al));	// 166272 out     dx, al ;~ 47D8:044D
loc_567ae:
	// 7680 
cs=0x47d8;eip=0x00044e; 	X(POPF);	// 166275 popf ;~ 47D8:044E
cs=0x47d8;eip=0x00044f; 	J(RETN(0));	// 166276 retn ;~ 47D8:044F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_5679d: 	goto loc_5679d;
        case m2c::kloc_567ae: 	goto loc_567ae;
        case m2c::ksub_56792: 	goto sub_56792;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_567b0(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_567b0:
    _begin:
cs=0x47d8;eip=0x000450; 	X(PUSH(bx));	// 166285 push    bx ;~ 47D8:0450
cs=0x47d8;eip=0x000451; 	T(MOV(bx, ax));	// 166286 mov     bx, ax ;~ 47D8:0451
cs=0x47d8;eip=0x000453; 	T(MOV(ah, dl));	// 166287 mov     ah, dl ;~ 47D8:0453
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x000455; 	T(MOV(al, *(&byte_565e8)));	// 166288 mov     al, cs:byte_565E8 ;~ 47D8:0455
cs=0x47d8;eip=0x000459; 	T(MOV(dl, al));	// 166289 mov     dl, al ;~ 47D8:0459
cs=0x47d8;eip=0x00045b; 	T(OR(al, 4));	// 166290 or      al, 4 ;~ 47D8:045B
cs=0x47d8;eip=0x00045d; 	S(OUT(0x0A, al));	// 166291 out     0Ah, al         ; DMA controller, 8237A-5. ;~ 47D8:045D
cs=0x47d8;eip=0x00045f; 	T(XOR(al, al));	// 166295 xor     al, al ;~ 47D8:045F
cs=0x47d8;eip=0x000461; 	S(OUT(0x0C, al));	// 166296 out     0Ch, al         ; DMA controller, 8237A-5. ;~ 47D8:0461
cs=0x47d8;eip=0x000463; 	T(MOV(al, dh));	// 166298 mov     al, dh ;~ 47D8:0463
cs=0x47d8;eip=0x000465; 	T(OR(al, dl));	// 166299 or      al, dl ;~ 47D8:0465
cs=0x47d8;eip=0x000467; 	S(OUT(0x0B, al));	// 166300 out     0Bh, al         ; DMA 8237A-5. mode register bits: ;~ 47D8:0467
cs=0x47d8;eip=0x000469; 	T(XOR(dh, dh));	// 166306 xor     dh, dh ;~ 47D8:0469
cs=0x47d8;eip=0x00046b; 	T(SHL(dx, 1));	// 166307 shl     dx, 1 ;~ 47D8:046B
cs=0x47d8;eip=0x00046d; 	T(MOV(al, bl));	// 166308 mov     al, bl ;~ 47D8:046D
cs=0x47d8;eip=0x00046f; 	S(OUT(dx, al));	// 166309 out     dx, al          ; DMA controller, 8237A-5. ;~ 47D8:046F
cs=0x47d8;eip=0x000470; 	T(MOV(al, bh));	// 166312 mov     al, bh ;~ 47D8:0470
cs=0x47d8;eip=0x000472; 	S(OUT(dx, al));	// 166313 out     dx, al          ; DMA controller, 8237A-5. ;~ 47D8:0472
cs=0x47d8;eip=0x000473; 	T(MOV(al, cl));	// 166316 mov     al, cl ;~ 47D8:0473
cs=0x47d8;eip=0x000475; 	T(INC(dx));	// 166317 inc     dx ;~ 47D8:0475
cs=0x47d8;eip=0x000476; 	S(OUT(dx, al));	// 166318 out     dx, al          ; DMA controller, 8237A-5. ;~ 47D8:0476
cs=0x47d8;eip=0x000477; 	T(MOV(al, ch));	// 166320 mov     al, ch ;~ 47D8:0477
cs=0x47d8;eip=0x000479; 	S(OUT(dx, al));	// 166321 out     dx, al          ; DMA controller, 8237A-5. ;~ 47D8:0479
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x00047a; 	T(MOV(dl, *(&byte_565e9)));	// 166323 mov     dl, cs:byte_565E9 ;~ 47D8:047A
cs=0x47d8;eip=0x00047f; 	T(MOV(al, ah));	// 166324 mov     al, ah ;~ 47D8:047F
cs=0x47d8;eip=0x000481; 	S(OUT(dx, al));	// 166325 out     dx, al          ; DMA page register 74LS612: ;~ 47D8:0481
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x000482; 	T(MOV(al, *(&byte_565e8)));	// 166327 mov     al, cs:byte_565E8 ;~ 47D8:0482
cs=0x47d8;eip=0x000486; 	S(OUT(0x0A, al));	// 166328 out     0Ah, al         ; DMA controller, 8237A-5. ;~ 47D8:0486
cs=0x47d8;eip=0x000488; 	X(POP(bx));	// 166332 pop     bx ;~ 47D8:0488
cs=0x47d8;eip=0x000489; 	J(RETN(0));	// 166333 retn ;~ 47D8:0489

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_567b0: 	goto sub_567b0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_567ea(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_567ea:
    _begin:
cs=0x47d8;eip=0x00048a; 	X(PUSH(cx));	// 166342 push    cx ;~ 47D8:048A
cs=0x47d8;eip=0x00048b; 	T(MOV(cl, 4));	// 166343 mov     cl, 4 ;~ 47D8:048B
cs=0x47d8;eip=0x00048d; 	T(ROL(dx, cl));	// 166344 rol     dx, cl ;~ 47D8:048D
cs=0x47d8;eip=0x00048f; 	T(MOV(cx, dx));	// 166345 mov     cx, dx ;~ 47D8:048F
cs=0x47d8;eip=0x000491; 	T(AND(dx, 0x0F));	// 166346 and     dx, 0Fh ;~ 47D8:0491
cs=0x47d8;eip=0x000494; 	T(AND(cx, 0x0FFF0));	// 166347 and     cx, 0FFF0h ;~ 47D8:0494
cs=0x47d8;eip=0x000497; 	T(ADD(ax, cx));	// 166348 add     ax, cx ;~ 47D8:0497
cs=0x47d8;eip=0x000499; 	T(ADC(dx, 0));	// 166349 adc     dx, 0 ;~ 47D8:0499
cs=0x47d8;eip=0x00049c; 	X(POP(cx));	// 166350 pop     cx ;~ 47D8:049C
cs=0x47d8;eip=0x00049d; 	J(RETN(0));	// 166351 retn ;~ 47D8:049D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_567ea: 	goto sub_567ea;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_567fe(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_567fe:
    _begin:
cs=0x47d8;eip=0x00049e; 	T(MOV(dx, *(dw*)(((db*)&dword_565f3)+2)));	// 166359 mov     dx, word ptr dword_565F3+2 ;~ 47D8:049E
cs=0x47d8;eip=0x0004a2; 	T(ADD(ax, *(dw*)(((db*)&dword_565f3))));	// 166360 add     ax, word ptr dword_565F3 ;~ 47D8:04A2
cs=0x47d8;eip=0x0004a6; 	J(JNC(locret_5680b));	// 166361 jnb     short locret_5680B ;~ 47D8:04A6
cs=0x47d8;eip=0x0004a8; 	T(ADD(dh, 0x10));	// 166362 add     dh, 10h ;~ 47D8:04A8
locret_5680b:
	// 7681 
cs=0x47d8;eip=0x0004ab; 	J(RETN(0));	// 166365 retn ;~ 47D8:04AB

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::klocret_5680b: 	goto locret_5680b;
        case m2c::ksub_567fe: 	goto sub_567fe;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5680c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5680c:
    _begin:
cs=0x47d8;eip=0x0004ac; 	X(PUSH(es));	// 166373 push    es ;~ 47D8:04AC
cs=0x47d8;eip=0x0004ad; 	X(PUSH(di));	// 166374 push    di ;~ 47D8:04AD
cs=0x47d8;eip=0x0004ae; 	T(LES(di, dword_565f3));	// 166375 les     di, dword_565F3 ;~ 47D8:04AE
cs=0x47d8;eip=0x0004b2; 	T(MOV(ax, *(dw*)(raddr(es,di+1))));	// 166377 mov     ax, es:[di+1] ;~ 47D8:04B2
cs=0x47d8;eip=0x0004b6; 	T(XOR(dx, dx));	// 166378 xor     dx, dx ;~ 47D8:04B6
cs=0x47d8;eip=0x0004b8; 	T(MOV(dl, *(raddr(es,di+3))));	// 166379 mov     dl, es:[di+3] ;~ 47D8:04B8
cs=0x47d8;eip=0x0004bc; 	X(POP(di));	// 166380 pop     di ;~ 47D8:04BC
cs=0x47d8;eip=0x0004bd; 	X(POP(es));	// 166381 pop     es ;~ 47D8:04BD
cs=0x47d8;eip=0x0004be; 	J(RETN(0));	// 166383 retn ;~ 47D8:04BE

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_5680c: 	goto sub_5680c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_5681f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_5681f:
    _begin:
cs=0x47d8;eip=0x0004bf; 	T(MOV(al, byte_565e7));	// 166392 mov     al, byte_565E7 ;~ 47D8:04BF
cs=0x47d8;eip=0x0004c2; 	T(ADD(al, 8));	// 166393 add     al, 8 ;~ 47D8:04C2
cs=0x47d8;eip=0x0004c4; 	T(CMP(al, 0x10));	// 166394 cmp     al, 10h ;~ 47D8:04C4
cs=0x47d8;eip=0x0004c6; 	J(JC(loc_5682a));	// 166395 jb      short loc_5682A ;~ 47D8:04C6
cs=0x47d8;eip=0x0004c8; 	T(ADD(al, 0x60));	// 166396 add     al, 60h ; '`' ;~ 47D8:04C8
loc_5682a:
	// 7682 
cs=0x47d8;eip=0x0004ca; 	T(XOR(ah, ah));	// 166399 xor     ah, ah ;~ 47D8:04CA
cs=0x47d8;eip=0x0004cc; 	T(SHL(ax, 1));	// 166400 shl     ax, 1 ;~ 47D8:04CC
cs=0x47d8;eip=0x0004ce; 	T(SHL(ax, 1));	// 166401 shl     ax, 1 ;~ 47D8:04CE
cs=0x47d8;eip=0x0004d0; 	T(MOV(bx, ax));	// 166402 mov     bx, ax ;~ 47D8:04D0
cs=0x47d8;eip=0x0004d2; 	T(XOR(ax, ax));	// 166403 xor     ax, ax ;~ 47D8:04D2
cs=0x47d8;eip=0x0004d4; 	T(MOV(es, ax));	// 166404 mov     es, ax ;~ 47D8:04D4
cs=0x47d8;eip=0x0004d6; 	T(CLI);	// 166406 cli ;~ 47D8:04D6
cs=0x47d8;eip=0x0004d7; 	J(RETN(0));	// 166407 retn ;~ 47D8:04D7

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_5682a: 	goto loc_5682a;
        case m2c::ksub_5681f: 	goto sub_5681f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_56838(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_56838:
    _begin:
cs=0x47d8;eip=0x0004d8; 	X(PUSHF);	// 166417 pushf ;~ 47D8:04D8
cs=0x47d8;eip=0x0004d9; 	X(PUSH(bx));	// 166418 push    bx ;~ 47D8:04D9
cs=0x47d8;eip=0x0004da; 	X(PUSH(cx));	// 166419 push    cx ;~ 47D8:04DA
cs=0x47d8;eip=0x0004db; 	X(PUSH(dx));	// 166420 push    dx ;~ 47D8:04DB
cs=0x47d8;eip=0x0004dc; 	T(MOV(dx, ax));	// 166421 mov     dx, ax ;~ 47D8:04DC
cs=0x47d8;eip=0x0004de; 	X(PUSH(es));	// 166422 push    es ;~ 47D8:04DE
cs=0x47d8;eip=0x0004df; 	J(CALL(sub_5681f,0));	// 166423 call    sub_5681F ;~ 47D8:04DF
cs=0x47d8;eip=0x0004e2; 	T(MOV(ax, cs));	// 166425 mov     ax, cs ;~ 47D8:04E2
cs=0x47d8;eip=0x0004e4; 	X(XCHG(dx, *(dw*)(raddr(es,bx))));	// 166426 xchg    dx, es:[bx] ;~ 47D8:04E4
cs=0x47d8;eip=0x0004e7; 	X(MOV(word_565f7, dx));	// 166427 mov     word_565F7, dx ;~ 47D8:04E7
cs=0x47d8;eip=0x0004eb; 	X(XCHG(ax, *(dw*)(raddr(es,bx+2))));	// 166428 xchg    ax, es:[bx+2] ;~ 47D8:04EB
cs=0x47d8;eip=0x0004ef; 	X(MOV(word_565f9, ax));	// 166429 mov     word_565F9, ax ;~ 47D8:04EF
cs=0x47d8;eip=0x0004f2; 	X(POP(es));	// 166430 pop     es ;~ 47D8:04F2
cs=0x47d8;eip=0x0004f3; 	T(MOV(cl, byte_565e7));	// 166432 mov     cl, byte_565E7 ;~ 47D8:04F3
cs=0x47d8;eip=0x0004f7; 	T(CMP(cl, 8));	// 166433 cmp     cl, 8 ;~ 47D8:04F7
cs=0x47d8;eip=0x0004fa; 	J(JC(loc_56870));	// 166434 jb      short loc_56870 ;~ 47D8:04FA
cs=0x47d8;eip=0x0004fc; 	T(SUB(cl, 8));	// 166435 sub     cl, 8 ;~ 47D8:04FC
cs=0x47d8;eip=0x0004ff; 	T(MOV(ah, 1));	// 166436 mov     ah, 1 ;~ 47D8:04FF
cs=0x47d8;eip=0x000501; 	T(SHL(ah, cl));	// 166437 shl     ah, cl ;~ 47D8:0501
cs=0x47d8;eip=0x000503; 	T(NOT(ah));	// 166438 not     ah ;~ 47D8:0503
cs=0x47d8;eip=0x000505; 	S(IN(al, 0x0A1));	// 166439 in      al, 0A1h        ; Interrupt Controller #2, 8259A ;~ 47D8:0505
cs=0x47d8;eip=0x000507; 	X(MOV(byte_565fc, al));	// 166440 mov     byte_565FC, al ;~ 47D8:0507
cs=0x47d8;eip=0x00050a; 	T(AND(al, ah));	// 166441 and     al, ah ;~ 47D8:050A
cs=0x47d8;eip=0x00050c; 	S(OUT(0x0A1, al));	// 166442 out     0A1h, al        ; Interrupt Controller #2, 8259A ;~ 47D8:050C
cs=0x47d8;eip=0x00050e; 	T(MOV(cl, 2));	// 166443 mov     cl, 2 ;~ 47D8:050E
loc_56870:
	// 7683 
cs=0x47d8;eip=0x000510; 	T(MOV(ah, 1));	// 166446 mov     ah, 1 ;~ 47D8:0510
cs=0x47d8;eip=0x000512; 	T(SHL(ah, cl));	// 166447 shl     ah, cl ;~ 47D8:0512
cs=0x47d8;eip=0x000514; 	T(NOT(ah));	// 166448 not     ah ;~ 47D8:0514
cs=0x47d8;eip=0x000516; 	S(IN(al, 0x21));	// 166449 in      al, 21h         ; Interrupt controller, 8259A. ;~ 47D8:0516
cs=0x47d8;eip=0x000518; 	X(MOV(byte_565fb, al));	// 166450 mov     byte_565FB, al ;~ 47D8:0518
cs=0x47d8;eip=0x00051b; 	T(AND(al, ah));	// 166451 and     al, ah ;~ 47D8:051B
cs=0x47d8;eip=0x00051d; 	S(OUT(0x21, al));	// 166452 out     21h, al         ; Interrupt controller, 8259A. ;~ 47D8:051D
cs=0x47d8;eip=0x00051f; 	X(POP(dx));	// 166453 pop     dx ;~ 47D8:051F
cs=0x47d8;eip=0x000520; 	X(POP(cx));	// 166454 pop     cx ;~ 47D8:0520
cs=0x47d8;eip=0x000521; 	X(POP(bx));	// 166455 pop     bx ;~ 47D8:0521
cs=0x47d8;eip=0x000522; 	X(POPF);	// 166456 popf ;~ 47D8:0522
cs=0x47d8;eip=0x000523; 	J(RETN(0));	// 166457 retn ;~ 47D8:0523

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_56870: 	goto loc_56870;
        case m2c::ksub_56838: 	goto sub_56838;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_56884(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_56884:
    _begin:
cs=0x47d8;eip=0x000524; 	X(PUSHF);	// 166466 pushf ;~ 47D8:0524
cs=0x47d8;eip=0x000525; 	X(PUSH(bx));	// 166467 push    bx ;~ 47D8:0525
cs=0x47d8;eip=0x000526; 	X(PUSH(es));	// 166468 push    es ;~ 47D8:0526
cs=0x47d8;eip=0x000527; 	J(CALL(sub_5681f,0));	// 166469 call    sub_5681F ;~ 47D8:0527
cs=0x47d8;eip=0x00052a; 	T(MOV(ax, word_565f7));	// 166471 mov     ax, word_565F7 ;~ 47D8:052A
cs=0x47d8;eip=0x00052d; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 166472 mov     es:[bx], ax ;~ 47D8:052D
cs=0x47d8;eip=0x000530; 	T(MOV(ax, word_565f9));	// 166473 mov     ax, word_565F9 ;~ 47D8:0530
cs=0x47d8;eip=0x000533; 	X(MOV(*(dw*)(raddr(es,bx+2)), ax));	// 166474 mov     es:[bx+2], ax ;~ 47D8:0533
cs=0x47d8;eip=0x000537; 	X(POP(es));	// 166475 pop     es ;~ 47D8:0537
cs=0x47d8;eip=0x000538; 	T(CMP(byte_565e7, 8));	// 166477 cmp     byte_565E7, 8 ;~ 47D8:0538
cs=0x47d8;eip=0x00053d; 	J(JC(loc_568a4));	// 166478 jb      short loc_568A4 ;~ 47D8:053D
cs=0x47d8;eip=0x00053f; 	T(MOV(al, byte_565fc));	// 166479 mov     al, byte_565FC ;~ 47D8:053F
cs=0x47d8;eip=0x000542; 	S(OUT(0x0A1, al));	// 166480 out     0A1h, al        ; Interrupt Controller #2, 8259A ;~ 47D8:0542
loc_568a4:
	// 7684 
cs=0x47d8;eip=0x000544; 	T(MOV(al, byte_565fb));	// 166483 mov     al, byte_565FB ;~ 47D8:0544
cs=0x47d8;eip=0x000547; 	S(OUT(0x21, al));	// 166484 out     21h, al         ; Interrupt controller, 8259A. ;~ 47D8:0547
cs=0x47d8;eip=0x000549; 	X(POP(bx));	// 166485 pop     bx ;~ 47D8:0549
cs=0x47d8;eip=0x00054a; 	X(POPF);	// 166486 popf ;~ 47D8:054A
cs=0x47d8;eip=0x00054b; 	J(RETN(0));	// 166487 retn ;~ 47D8:054B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_568a4: 	goto loc_568a4;
        case m2c::ksub_56884: 	goto sub_56884;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_568ac(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_568ac:
    _begin:
cs=0x47d8;eip=0x00054c; 	X(PUSH(ds));	// 166495 push    ds ;~ 47D8:054C
cs=0x47d8;eip=0x00054d; 	X(PUSH(si));	// 166496 push    si ;~ 47D8:054D
cs=0x47d8;eip=0x00054e; 	T(LDS(si, dword_565f3));	// 166497 lds     si, dword_565F3 ;~ 47D8:054E
cs=0x47d8;eip=0x000552; 	T(LODSB);	// 166499 lodsb ;~ 47D8:0552
cs=0x47d8;eip=0x000553; 	X(POP(si));	// 166500 pop     si ;~ 47D8:0553
cs=0x47d8;eip=0x000554; 	X(POP(ds));	// 166501 pop     ds ;~ 47D8:0554
cs=0x47d8;eip=0x000555; 	J(RETN(0));	// 166503 retn ;~ 47D8:0555

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_568ac: 	goto sub_568ac;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_568b6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_568b6:
    _begin:
cs=0x47d8;eip=0x000556; 	T(MOV(cx, ax));	// 166512 mov     cx, ax ;~ 47D8:0556
cs=0x47d8;eip=0x000558; 	J(CALL(sub_567fe,0));	// 166513 call    sub_567FE ;~ 47D8:0558
cs=0x47d8;eip=0x00055b; 	J(CALL(sub_567ea,0));	// 166514 call    sub_567EA ;~ 47D8:055B
cs=0x47d8;eip=0x00055e; 	X(MOV(byte_565fd, dl));	// 166515 mov     byte_565FD, dl ;~ 47D8:055E
cs=0x47d8;eip=0x000562; 	X(MOV(word_565fe, ax));	// 166516 mov     word_565FE, ax ;~ 47D8:0562
cs=0x47d8;eip=0x000565; 	J(CALL(sub_5680c,0));	// 166517 call    sub_5680C ;~ 47D8:0565
cs=0x47d8;eip=0x000568; 	T(SUB(cx, 4));	// 166518 sub     cx, 4 ;~ 47D8:0568
cs=0x47d8;eip=0x00056b; 	T(SUB(ax, cx));	// 166519 sub     ax, cx ;~ 47D8:056B
cs=0x47d8;eip=0x00056d; 	T(SBB(dx, 0));	// 166520 sbb     dx, 0 ;~ 47D8:056D
cs=0x47d8;eip=0x000570; 	X(MOV(word_56600, ax));	// 166521 mov     word_56600, ax ;~ 47D8:0570
cs=0x47d8;eip=0x000573; 	X(MOV(word_56602, dx));	// 166522 mov     word_56602, dx ;~ 47D8:0573
cs=0x47d8;eip=0x000577; 	T(SUB(ax, 1));	// 166523 sub     ax, 1 ;~ 47D8:0577
cs=0x47d8;eip=0x00057a; 	T(SBB(dx, 0));	// 166524 sbb     dx, 0 ;~ 47D8:057A
cs=0x47d8;eip=0x00057d; 	T(ADD(ax, word_565fe));	// 166525 add     ax, word_565FE ;~ 47D8:057D
cs=0x47d8;eip=0x000581; 	T(ADC(dl, byte_565fd));	// 166526 adc     dl, byte_565FD ;~ 47D8:0581
cs=0x47d8;eip=0x000585; 	X(MOV(word_56604, ax));	// 166527 mov     word_56604, ax ;~ 47D8:0585
cs=0x47d8;eip=0x000588; 	T(SUB(dl, byte_565fd));	// 166528 sub     dl, byte_565FD ;~ 47D8:0588
cs=0x47d8;eip=0x00058c; 	X(MOV(byte_56606, dl));	// 166529 mov     byte_56606, dl ;~ 47D8:058C
cs=0x47d8;eip=0x000590; 	J(RETN(0));	// 166530 retn ;~ 47D8:0590

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_568b6: 	goto sub_568b6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg003_591_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg003_591_proc:
    _begin:
cs=0x47d8;eip=0x000591; 	X(PUSH(ds));	// 166534 push    ds ;~ 47D8:0591
cs=0x47d8;eip=0x000592; 	X(PUSH(es));	// 166535 push    es ;~ 47D8:0592
cs=0x47d8;eip=0x000593; 	X(PUSH(ax));	// 166536 push    ax ;~ 47D8:0593
cs=0x47d8;eip=0x000594; 	X(PUSH(bx));	// 166537 push    bx ;~ 47D8:0594
cs=0x47d8;eip=0x000595; 	X(PUSH(cx));	// 166538 push    cx ;~ 47D8:0595
cs=0x47d8;eip=0x000596; 	X(PUSH(dx));	// 166539 push    dx ;~ 47D8:0596
cs=0x47d8;eip=0x000597; 	X(PUSH(si));	// 166540 push    si ;~ 47D8:0597
cs=0x47d8;eip=0x000598; 	X(PUSH(di));	// 166541 push    di ;~ 47D8:0598
cs=0x47d8;eip=0x000599; 	X(PUSH(bp));	// 166542 push    bp ;~ 47D8:0599
cs=0x47d8;eip=0x00059a; 	T(CLD);	// 166543 cld ;~ 47D8:059A
cs=0x47d8;eip=0x00059b; 	T(MOV(ax, cs));	// 166544 mov     ax, cs ;~ 47D8:059B
cs=0x47d8;eip=0x00059d; 	T(MOV(ds, ax));	// 166545 mov     ds, ax ;~ 47D8:059D
cs=0x47d8;eip=0x00059f; 	T(MOV(es, ax));	// 166546 mov     es, ax ;~ 47D8:059F
cs=0x47d8;eip=0x0005a1; 	T(MOV(al, 0x20));	// 166547 mov     al, 20h ; ' ' ;~ 47D8:05A1
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x0005a3; 	T(CMP(*(&byte_565e7), 8));	// 166548 cmp     cs:byte_565E7, 8 ;~ 47D8:05A3
cs=0x47d8;eip=0x0005a9; 	J(JC(loc_5690f));	// 166549 jb      short loc_5690F ;~ 47D8:05A9
cs=0x47d8;eip=0x0005ab; 	S(OUT(0x0A0, al));	// 166550 out     0A0h, al        ; PIC 2  same as 0020 for PIC 1 ;~ 47D8:05AB
cs=0x47d8;eip=0x0005ad; 	J({;});	// 166551 jmp     short $+2 ;~ 47D8:05AD
loc_5690f:
	// 7685 
cs=0x47d8;eip=0x0005af; 	S(OUT(0x20, al));	// 166556 out     20h, al         ; Interrupt controller, 8259A. ;~ 47D8:05AF
cs=0x47d8;eip=0x0005b1; 	T(MOV(dx, word_565e5));	// 166557 mov     dx, word_565E5 ;~ 47D8:05B1
cs=0x47d8;eip=0x0005b5; 	T(ADD(dl, 0x0E));	// 166558 add     dl, 0Eh ;~ 47D8:05B5
cs=0x47d8;eip=0x0005b8; 	S(IN(al, dx));	// 166559 in      al, dx ;~ 47D8:05B8
cs=0x47d8;eip=0x0005b9; 	T(STI);	// 166560 sti ;~ 47D8:05B9
cs=0x47d8;eip=0x0005ba; 	T(MOV(ax, word_56600));	// 166561 mov     ax, word_56600 ;~ 47D8:05BA
cs=0x47d8;eip=0x0005bd; 	T(OR(ax, word_56602));	// 166562 or      ax, word_56602 ;~ 47D8:05BD
cs=0x47d8;eip=0x0005c1; 	J(JNZ(loc_56935));	// 166563 jnz     short loc_56935 ;~ 47D8:05C1
cs=0x47d8;eip=0x0005c3; 	J(CALL(sub_569d7,0));	// 166564 call    sub_569D7 ;~ 47D8:05C3
cs=0x47d8;eip=0x0005c6; 	J(CALL(sub_569bf,0));	// 166565 call    sub_569BF ;~ 47D8:05C6
cs=0x47d8;eip=0x0005c9; 	T(CMP(byte_56607, 0));	// 166566 cmp     byte_56607, 0 ;~ 47D8:05C9
cs=0x47d8;eip=0x0005ce; 	J(JZ(loc_56938));	// 166567 jz      short loc_56938 ;~ 47D8:05CE
cs=0x47d8;eip=0x0005d0; 	J(CALL(sub_569a0,0));	// 166568 call    sub_569A0 ;~ 47D8:05D0
cs=0x47d8;eip=0x0005d3; 	J(JMP(loc_56938));	// 166569 jmp     short loc_56938 ;~ 47D8:05D3
loc_56935:
	// 7686 
cs=0x47d8;eip=0x0005d5; 	J(CALL(sub_56942,0));	// 166573 call    sub_56942 ;~ 47D8:05D5
loc_56938:
	// 7687 
cs=0x47d8;eip=0x0005d8; 	X(POP(bp));	// 166577 pop     bp ;~ 47D8:05D8
cs=0x47d8;eip=0x0005d9; 	X(POP(di));	// 166578 pop     di ;~ 47D8:05D9
cs=0x47d8;eip=0x0005da; 	X(POP(si));	// 166579 pop     si ;~ 47D8:05DA
cs=0x47d8;eip=0x0005db; 	X(POP(dx));	// 166580 pop     dx ;~ 47D8:05DB
cs=0x47d8;eip=0x0005dc; 	X(POP(cx));	// 166581 pop     cx ;~ 47D8:05DC
cs=0x47d8;eip=0x0005dd; 	X(POP(bx));	// 166582 pop     bx ;~ 47D8:05DD
cs=0x47d8;eip=0x0005de; 	X(POP(ax));	// 166583 pop     ax ;~ 47D8:05DE
cs=0x47d8;eip=0x0005df; 	X(POP(es));	// 166584 pop     es ;~ 47D8:05DF
cs=0x47d8;eip=0x0005e0; 	X(POP(ds));	// 166586 pop     ds ;~ 47D8:05E0
cs=0x47d8;eip=0x0005e1; 	J(IRET);	// 166588 iret ;~ 47D8:05E1

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_5690f: 	goto loc_5690f;
        case m2c::kloc_56935: 	goto loc_56935;
        case m2c::kloc_56938: 	goto loc_56938;
        case m2c::kseg003_591_proc: 	goto seg003_591_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_56942(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_56942:
    _begin:
cs=0x47d8;eip=0x0005e2; 	T(MOV(cx, 0x0FFFF));	// 166596 mov     cx, 0FFFFh ;~ 47D8:05E2
cs=0x47d8;eip=0x0005e5; 	T(CMP(byte_56606, 0));	// 166597 cmp     byte_56606, 0 ;~ 47D8:05E5
cs=0x47d8;eip=0x0005ea; 	J(JNZ(loc_56954));	// 166598 jnz     short loc_56954 ;~ 47D8:05EA
cs=0x47d8;eip=0x0005ec; 	X(INC(byte_56606));	// 166599 inc     byte_56606 ;~ 47D8:05EC
cs=0x47d8;eip=0x0005f0; 	T(MOV(cx, word_56604));	// 166600 mov     cx, word_56604 ;~ 47D8:05F0
loc_56954:
	// 7688 
cs=0x47d8;eip=0x0005f4; 	T(SUB(cx, word_565fe));	// 166603 sub     cx, word_565FE ;~ 47D8:05F4
cs=0x47d8;eip=0x0005f8; 	X(MOV(word_56608, cx));	// 166604 mov     word_56608, cx ;~ 47D8:05F8
cs=0x47d8;eip=0x0005fc; 	T(INC(cx));	// 166605 inc     cx ;~ 47D8:05FC
cs=0x47d8;eip=0x0005fd; 	J(JZ(loc_5696a));	// 166606 jz      short loc_5696A ;~ 47D8:05FD
cs=0x47d8;eip=0x0005ff; 	X(SUB(word_56600, cx));	// 166607 sub     word_56600, cx ;~ 47D8:05FF
cs=0x47d8;eip=0x000603; 	X(SBB(word_56602, 0));	// 166608 sbb     word_56602, 0 ;~ 47D8:0603
cs=0x47d8;eip=0x000608; 	J(JMP(loc_5696e));	// 166609 jmp     short loc_5696E ;~ 47D8:0608
loc_5696a:
	// 7689 
cs=0x47d8;eip=0x00060a; 	X(DEC(word_56602));	// 166613 dec     word_56602 ;~ 47D8:060A
loc_5696e:
	// 7690 
cs=0x47d8;eip=0x00060e; 	T(MOV(dh, 0x48));	// 166616 mov     dh, 48h ; 'H' ;~ 47D8:060E
cs=0x47d8;eip=0x000610; 	T(MOV(dl, byte_565fd));	// 166617 mov     dl, byte_565FD ;~ 47D8:0610
cs=0x47d8;eip=0x000614; 	T(MOV(ax, word_565fe));	// 166618 mov     ax, word_565FE ;~ 47D8:0614
cs=0x47d8;eip=0x000617; 	T(MOV(cx, word_56608));	// 166619 mov     cx, word_56608 ;~ 47D8:0617
cs=0x47d8;eip=0x00061b; 	J(CALL(sub_567b0,0));	// 166620 call    sub_567B0 ;~ 47D8:061B
cs=0x47d8;eip=0x00061e; 	X(DEC(byte_56606));	// 166621 dec     byte_56606 ;~ 47D8:061E
cs=0x47d8;eip=0x000622; 	X(INC(byte_565fd));	// 166622 inc     byte_565FD ;~ 47D8:0622
cs=0x47d8;eip=0x000626; 	X(MOV(word_565fe, 0));	// 166623 mov     word_565FE, 0 ;~ 47D8:0626
cs=0x47d8;eip=0x00062c; 	T(MOV(cx, word_56608));	// 166624 mov     cx, word_56608 ;~ 47D8:062C
cs=0x47d8;eip=0x000630; 	T(MOV(al, byte_5660a));	// 166625 mov     al, byte_5660A ;~ 47D8:0630
cs=0x47d8;eip=0x000633; 	J(CALL(sub_56693,0));	// 166626 call    sub_56693 ;~ 47D8:0633
cs=0x47d8;eip=0x000636; 	T(MOV(al, cl));	// 166627 mov     al, cl ;~ 47D8:0636
cs=0x47d8;eip=0x000638; 	J(CALL(sub_5669a,0));	// 166628 call    sub_5669A ;~ 47D8:0638
cs=0x47d8;eip=0x00063b; 	T(MOV(al, ch));	// 166629 mov     al, ch ;~ 47D8:063B
cs=0x47d8;eip=0x00063d; 	J(return sub_5669a(0, _state););	// 166630 jmp     sub_5669A ;~ 47D8:063D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_56954: 	goto loc_56954;
        case m2c::kloc_5696a: 	goto loc_5696a;
        case m2c::kloc_5696e: 	goto loc_5696e;
        case m2c::ksub_56942: 	goto sub_56942;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_569a0(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_569a0:
    _begin:
	cs=seg_offset(seg003);
cs=0x47d8;eip=0x000640; 	T(MOV(al, *(&byte_565e8)));	// 166639 mov     al, cs:byte_565E8 ;~ 47D8:0640
cs=0x47d8;eip=0x000644; 	T(OR(al, 4));	// 166640 or      al, 4 ;~ 47D8:0644
cs=0x47d8;eip=0x000646; 	S(OUT(0x0A, al));	// 166641 out     0Ah, al         ; DMA controller, 8237A-5. ;~ 47D8:0646
cs=0x47d8;eip=0x000648; 	J(CALL(sub_56884,0));	// 166645 call    sub_56884 ;~ 47D8:0648
cs=0x47d8;eip=0x00064b; 	T(XOR(ax, ax));	// 166646 xor     ax, ax ;~ 47D8:064B
cs=0x47d8;eip=0x00064d; 	X(MOV(byte_565f2, al));	// 166647 mov     byte_565F2, al ;~ 47D8:064D
cs=0x47d8;eip=0x000650; 	X(MOV(word_5660b, ax));	// 166648 mov     word_5660B, ax ;~ 47D8:0650
cs=0x47d8;eip=0x000653; 	X(MOV(word_565e3, ax));	// 166649 mov     word_565E3, ax ;~ 47D8:0653
cs=0x47d8;eip=0x000656; 	T(MOV(dx, word_565e5));	// 166650 mov     dx, word_565E5 ;~ 47D8:0656
cs=0x47d8;eip=0x00065a; 	T(ADD(dl, 0x0E));	// 166651 add     dl, 0Eh ;~ 47D8:065A
cs=0x47d8;eip=0x00065d; 	S(IN(al, dx));	// 166652 in      al, dx ;~ 47D8:065D
cs=0x47d8;eip=0x00065e; 	J(RETN(0));	// 166653 retn ;~ 47D8:065E

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_569a0: 	goto sub_569a0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_569bf(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_569bf:
    _begin:
cs=0x47d8;eip=0x00065f; 	J(CALL(sub_568ac,0));	// 166662 call    sub_568AC ;~ 47D8:065F
cs=0x47d8;eip=0x000662; 	T(CMP(al, 8));	// 166663 cmp     al, 8 ;~ 47D8:0662
cs=0x47d8;eip=0x000664; 	J(JNC(loc_569d2));	// 166664 jnb     short loc_569D2 ;~ 47D8:0664
cs=0x47d8;eip=0x000666; 	T(CBW);	// 166665 cbw ;~ 47D8:0666
cs=0x47d8;eip=0x000667; 	T(MOV(bx, ax));	// 166666 mov     bx, ax ;~ 47D8:0667
cs=0x47d8;eip=0x000669; 	T(SHL(bx, 1));	// 166667 shl     bx, 1 ;~ 47D8:0669
cs=0x47d8;eip=0x00066b; 	J(CALL(__dispatch_call,*(dw*)(((db*)&funcs_569cb)+bx)));	// 166668 call    funcs_569CB[bx] ;~ 47D8:066B
cs=0x47d8;eip=0x00066f; 	J(JC(sub_569bf));	// 166669 jb      short sub_569BF ;~ 47D8:066F
cs=0x47d8;eip=0x000671; 	J(RETN(0));	// 166670 retn ;~ 47D8:0671
loc_569d2:
	// 7691 
cs=0x47d8;eip=0x000672; 	J(CALL(sub_569d7,0));	// 166674 call    sub_569D7 ;~ 47D8:0672
cs=0x47d8;eip=0x000675; 	J(JMP(sub_569bf));	// 166675 jmp     short sub_569BF ;~ 47D8:0675

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_569d2: 	goto loc_569d2;
        case m2c::ksub_569bf: 	goto sub_569bf;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_569d7(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_569d7:
    _begin:
cs=0x47d8;eip=0x000677; 	X(PUSH(es));	// 166684 push    es ;~ 47D8:0677
cs=0x47d8;eip=0x000678; 	X(PUSH(ax));	// 166685 push    ax ;~ 47D8:0678
cs=0x47d8;eip=0x000679; 	X(PUSH(bx));	// 166686 push    bx ;~ 47D8:0679
cs=0x47d8;eip=0x00067a; 	X(PUSH(dx));	// 166687 push    dx ;~ 47D8:067A
cs=0x47d8;eip=0x00067b; 	T(LES(bx, dword_565f3));	// 166688 les     bx, dword_565F3 ;~ 47D8:067B
cs=0x47d8;eip=0x00067f; 	T(MOV(ax, *(dw*)(raddr(es,bx+1))));	// 166690 mov     ax, es:[bx+1] ;~ 47D8:067F
cs=0x47d8;eip=0x000683; 	T(XOR(dx, dx));	// 166691 xor     dx, dx ;~ 47D8:0683
cs=0x47d8;eip=0x000685; 	T(MOV(dl, *(raddr(es,bx+3))));	// 166692 mov     dl, es:[bx+3] ;~ 47D8:0685
cs=0x47d8;eip=0x000689; 	T(ADD(ax, 4));	// 166693 add     ax, 4 ;~ 47D8:0689
cs=0x47d8;eip=0x00068c; 	T(ADC(dx, 0));	// 166694 adc     dx, 0 ;~ 47D8:068C
cs=0x47d8;eip=0x00068f; 	T(ADD(ax, *(dw*)(((db*)&dword_565f3))));	// 166695 add     ax, word ptr dword_565F3 ;~ 47D8:068F
cs=0x47d8;eip=0x000693; 	T(ADC(dx, 0));	// 166696 adc     dx, 0 ;~ 47D8:0693
cs=0x47d8;eip=0x000696; 	T(ROR(dx, 1));	// 166697 ror     dx, 1 ;~ 47D8:0696
cs=0x47d8;eip=0x000698; 	T(ROR(dx, 1));	// 166698 ror     dx, 1 ;~ 47D8:0698
cs=0x47d8;eip=0x00069a; 	T(ROR(dx, 1));	// 166699 ror     dx, 1 ;~ 47D8:069A
cs=0x47d8;eip=0x00069c; 	T(ROR(dx, 1));	// 166700 ror     dx, 1 ;~ 47D8:069C
cs=0x47d8;eip=0x00069e; 	T(ADD(dx, *(dw*)(((db*)&dword_565f3)+2)));	// 166701 add     dx, word ptr dword_565F3+2 ;~ 47D8:069E
cs=0x47d8;eip=0x0006a2; 	T(MOV(bx, ax));	// 166702 mov     bx, ax ;~ 47D8:06A2
cs=0x47d8;eip=0x0006a4; 	T(SHR(bx, 1));	// 166703 shr     bx, 1 ;~ 47D8:06A4
cs=0x47d8;eip=0x0006a6; 	T(SHR(bx, 1));	// 166704 shr     bx, 1 ;~ 47D8:06A6
cs=0x47d8;eip=0x0006a8; 	T(SHR(bx, 1));	// 166705 shr     bx, 1 ;~ 47D8:06A8
cs=0x47d8;eip=0x0006aa; 	T(SHR(bx, 1));	// 166706 shr     bx, 1 ;~ 47D8:06AA
cs=0x47d8;eip=0x0006ac; 	T(ADD(dx, bx));	// 166707 add     dx, bx ;~ 47D8:06AC
cs=0x47d8;eip=0x0006ae; 	T(AND(ax, 0x0F));	// 166708 and     ax, 0Fh ;~ 47D8:06AE
cs=0x47d8;eip=0x0006b1; 	X(MOV(*(dw*)(((db*)&dword_565f3)+2), dx));	// 166709 mov     word ptr dword_565F3+2, dx ;~ 47D8:06B1
cs=0x47d8;eip=0x0006b5; 	X(MOV(*(dw*)(((db*)&dword_565f3)), ax));	// 166710 mov     word ptr dword_565F3, ax ;~ 47D8:06B5
cs=0x47d8;eip=0x0006b8; 	X(POP(dx));	// 166711 pop     dx ;~ 47D8:06B8
cs=0x47d8;eip=0x0006b9; 	X(POP(bx));	// 166712 pop     bx ;~ 47D8:06B9
cs=0x47d8;eip=0x0006ba; 	X(POP(ax));	// 166713 pop     ax ;~ 47D8:06BA
cs=0x47d8;eip=0x0006bb; 	X(POP(es));	// 166714 pop     es ;~ 47D8:06BB
cs=0x47d8;eip=0x0006bc; 	J(RETN(0));	// 166716 retn ;~ 47D8:06BC

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_569d7: 	goto sub_569d7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_56a1d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_56a1d:
    _begin:
cs=0x47d8;eip=0x0006bd; 	X(PUSH(ax));	// 166724 push    ax ;~ 47D8:06BD
cs=0x47d8;eip=0x0006be; 	T(SHR(ax, 1));	// 166725 shr     ax, 1 ;~ 47D8:06BE
cs=0x47d8;eip=0x0006c0; 	T(SHR(ax, 1));	// 166726 shr     ax, 1 ;~ 47D8:06C0
cs=0x47d8;eip=0x0006c2; 	T(SHR(ax, 1));	// 166727 shr     ax, 1 ;~ 47D8:06C2
cs=0x47d8;eip=0x0006c4; 	T(SHR(ax, 1));	// 166728 shr     ax, 1 ;~ 47D8:06C4
cs=0x47d8;eip=0x0006c6; 	T(ADD(dx, ax));	// 166729 add     dx, ax ;~ 47D8:06C6
cs=0x47d8;eip=0x0006c8; 	X(POP(ax));	// 166730 pop     ax ;~ 47D8:06C8
cs=0x47d8;eip=0x0006c9; 	T(AND(ax, 0x0F));	// 166731 and     ax, 0Fh ;~ 47D8:06C9
cs=0x47d8;eip=0x0006cc; 	J(RETN(0));	// 166732 retn ;~ 47D8:06CC

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_56a1d: 	goto sub_56a1d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_56a2d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_56a2d:
    _begin:
cs=0x47d8;eip=0x0006cd; 	X(PUSH(es));	// 166741 push    es ;~ 47D8:06CD
loc_56a2e:
	// 7692 
cs=0x47d8;eip=0x0006ce; 	T(LES(si, *(dd*)(((db*)&word_56478))));	// 166744 les     si, dword ptr word_56478 ;~ 47D8:06CE
cs=0x47d8;eip=0x0006d2; 	X(MOV(*(raddr(es,si+6)), 0));	// 166746 mov     byte ptr es:[si+6], 0 ;~ 47D8:06D2
cs=0x47d8;eip=0x0006d7; 	T(MOV(al, *(raddr(es,si+7))));	// 166747 mov     al, es:[si+7] ;~ 47D8:06D7
cs=0x47d8;eip=0x0006db; 	T(SHL(al, 1));	// 166748 shl     al, 1 ;~ 47D8:06DB
cs=0x47d8;eip=0x0006dd; 	J(JC(loc_56a93));	// 166749 jb      short loc_56A93 ;~ 47D8:06DD
cs=0x47d8;eip=0x0006df; 	T(LES(si, *(dd*)((&unk_5647c))));	// 166750 les     si, dword ptr unk_5647C ;~ 47D8:06DF
cs=0x47d8;eip=0x0006e3; 	T(CMP(*(raddr(es,si+6)), 2));	// 166751 cmp     byte ptr es:[si+6], 2 ;~ 47D8:06E3
cs=0x47d8;eip=0x0006e8; 	J(JZ(loc_56a6f));	// 166752 jz      short loc_56A6F ;~ 47D8:06E8
cs=0x47d8;eip=0x0006ea; 	T(SHL(al, 1));	// 166753 shl     al, 1 ;~ 47D8:06EA
cs=0x47d8;eip=0x0006ec; 	J(JNC(loc_56a98));	// 166754 jnb     short loc_56A98 ;~ 47D8:06EC
cs=0x47d8;eip=0x0006ee; 	T(LES(si, *(dd*)(((db*)&word_56478))));	// 166755 les     si, dword ptr word_56478 ;~ 47D8:06EE
cs=0x47d8;eip=0x0006f2; 	X(MOV(*(raddr(es,si+6)), 3));	// 166756 mov     byte ptr es:[si+6], 3 ;~ 47D8:06F2
cs=0x47d8;eip=0x0006f7; 	T(LES(si, *(dw*)(raddr(es,si))));	// 166757 les     si, es:[si] ;~ 47D8:06F7
cs=0x47d8;eip=0x0006fa; 	T(CMP(*(raddr(es,si+2)), 2));	// 166759 cmp     byte ptr es:[si+2], 2 ;~ 47D8:06FA
cs=0x47d8;eip=0x0006ff; 	J(JNZ(loc_56a64));	// 166760 jnz     short loc_56A64 ;~ 47D8:06FF
cs=0x47d8;eip=0x000701; 	T(ADD(si, 2));	// 166761 add     si, 2 ;~ 47D8:0701
loc_56a64:
	// 7693 
cs=0x47d8;eip=0x000704; 	X(MOV(*(dw*)(((db*)&dword_565f3)), si));	// 166764 mov     word ptr dword_565F3, si ;~ 47D8:0704
cs=0x47d8;eip=0x000708; 	X(MOV(*(dw*)(((db*)&dword_565f3)+2), es));	// 166765 mov     word ptr dword_565F3+2, es ;~ 47D8:0708
cs=0x47d8;eip=0x00070c; 	X(POP(es));	// 166766 pop     es ;~ 47D8:070C
cs=0x47d8;eip=0x00070d; 	T(STC);	// 166768 stc ;~ 47D8:070D
cs=0x47d8;eip=0x00070e; 	J(RETN(0));	// 166769 retn ;~ 47D8:070E
loc_56a6f:
	// 7694 
cs=0x47d8;eip=0x00070f; 	X(MOV(word_56478, si));	// 166774 mov     word_56478, si ;~ 47D8:070F
cs=0x47d8;eip=0x000713; 	X(MOV(seg_5647a, es));	// 166775 mov     seg_5647A, es ;~ 47D8:0713
cs=0x47d8;eip=0x000717; 	X(MOV(*(raddr(es,si+6)), 3));	// 166776 mov     byte ptr es:[si+6], 3 ;~ 47D8:0717
cs=0x47d8;eip=0x00071c; 	T(CMP(*(dw*)(raddr(es,si+4)), 3));	// 166777 cmp     word ptr es:[si+4], 3 ;~ 47D8:071C
cs=0x47d8;eip=0x000721; 	J(JC(loc_56a2e));	// 166778 jb      short loc_56A2E ;~ 47D8:0721
cs=0x47d8;eip=0x000723; 	T(LES(ax, *(dw*)(raddr(es,si))));	// 166779 les     ax, es:[si] ;~ 47D8:0723
cs=0x47d8;eip=0x000726; 	T(ADD(ax, 2));	// 166781 add     ax, 2 ;~ 47D8:0726
cs=0x47d8;eip=0x000729; 	X(MOV(*(dw*)(((db*)&dword_565f3)), ax));	// 166782 mov     word ptr dword_565F3, ax ;~ 47D8:0729
cs=0x47d8;eip=0x00072c; 	X(MOV(*(dw*)(((db*)&dword_565f3)+2), es));	// 166783 mov     word ptr dword_565F3+2, es ;~ 47D8:072C
cs=0x47d8;eip=0x000730; 	X(POP(es));	// 166784 pop     es ;~ 47D8:0730
cs=0x47d8;eip=0x000731; 	T(STC);	// 166786 stc ;~ 47D8:0731
cs=0x47d8;eip=0x000732; 	J(RETN(0));	// 166787 retn ;~ 47D8:0732
loc_56a93:
	// 7695 
cs=0x47d8;eip=0x000733; 	X(MOV(byte_5665e, 1));	// 166792 mov     byte_5665E, 1 ;~ 47D8:0733
loc_56a98:
	// 7696 
cs=0x47d8;eip=0x000738; 	X(MOV(byte_56607, 1));	// 166795 mov     byte_56607, 1 ;~ 47D8:0738
cs=0x47d8;eip=0x00073d; 	X(POP(es));	// 166796 pop     es ;~ 47D8:073D
cs=0x47d8;eip=0x00073e; 	T(CLC);	// 166798 clc ;~ 47D8:073E
cs=0x47d8;eip=0x00073f; 	J(RETN(0));	// 166799 retn ;~ 47D8:073F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_56a2e: 	goto loc_56a2e;
        case m2c::kloc_56a64: 	goto loc_56a64;
        case m2c::kloc_56a6f: 	goto loc_56a6f;
        case m2c::kloc_56a93: 	goto loc_56a93;
        case m2c::kloc_56a98: 	goto loc_56a98;
        case m2c::ksub_56a2d: 	goto sub_56a2d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_56aa0(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_56aa0:
    _begin:
cs=0x47d8;eip=0x000740; 	X(PUSH(es));	// 166808 push    es ;~ 47D8:0740
cs=0x47d8;eip=0x000741; 	T(LES(di, dword_565f3));	// 166809 les     di, dword_565F3 ;~ 47D8:0741
cs=0x47d8;eip=0x000745; 	T(MOV(al, 0x40));	// 166811 mov     al, 40h ; '@' ;~ 47D8:0745
cs=0x47d8;eip=0x000747; 	J(CALL(sub_56693,0));	// 166812 call    sub_56693 ;~ 47D8:0747
cs=0x47d8;eip=0x00074a; 	T(MOV(al, *(raddr(es,di+4))));	// 166813 mov     al, es:[di+4] ;~ 47D8:074A
cs=0x47d8;eip=0x00074e; 	X(MOV(byte_5665c, al));	// 166814 mov     byte_5665C, al ;~ 47D8:074E
cs=0x47d8;eip=0x000751; 	J(CALL(sub_5669a,0));	// 166815 call    sub_5669A ;~ 47D8:0751
cs=0x47d8;eip=0x000754; 	T(MOV(al, *(raddr(es,di+5))));	// 166816 mov     al, es:[di+5] ;~ 47D8:0754
cs=0x47d8;eip=0x000758; 	X(MOV(byte_5665d, al));	// 166817 mov     byte_5665D, al ;~ 47D8:0758
cs=0x47d8;eip=0x00075b; 	T(MOV(bx, 0x2C5));	// 166818 mov     bx, 2C5h ;~ 47D8:075B
cs=0x47d8;eip=0x00075e; 	T(XLAT);	// 166819 xlat ;~ 47D8:075E
cs=0x47d8;eip=0x00075f; 	X(MOV(byte_5660a, al));	// 166820 mov     byte_5660A, al ;~ 47D8:075F
cs=0x47d8;eip=0x000762; 	X(POP(es));	// 166821 pop     es ;~ 47D8:0762
cs=0x47d8;eip=0x000763; 	T(MOV(ax, 6));	// 166823 mov     ax, 6 ;~ 47D8:0763
cs=0x47d8;eip=0x000766; 	J(CALL(sub_568b6,0));	// 166824 call    sub_568B6 ;~ 47D8:0766
cs=0x47d8;eip=0x000769; 	J(CALL(sub_56942,0));	// 166825 call    sub_56942 ;~ 47D8:0769
cs=0x47d8;eip=0x00076c; 	J(CALL(sub_56ad1,0));	// 166826 call    sub_56AD1 ;~ 47D8:076C
cs=0x47d8;eip=0x00076f; 	T(CLC);	// 166827 clc ;~ 47D8:076F
cs=0x47d8;eip=0x000770; 	J(RETN(0));	// 166828 retn ;~ 47D8:0770

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_56aa0: 	goto sub_56aa0;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_56ad1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_56ad1:
    _begin:
cs=0x47d8;eip=0x000771; 	T(MOV(al, byte_5660a));	// 166837 mov     al, byte_5660A ;~ 47D8:0771
cs=0x47d8;eip=0x000774; 	T(CMP(al, 0x61));	// 166838 cmp     al, 61h ; 'a' ;~ 47D8:0774
cs=0x47d8;eip=0x000776; 	J(JC(loc_56ae2));	// 166839 jb      short loc_56AE2 ;~ 47D8:0776
cs=0x47d8;eip=0x000778; 	T(CMP(al, 0x67));	// 166840 cmp     al, 67h ; 'g' ;~ 47D8:0778
cs=0x47d8;eip=0x00077a; 	J(JA(loc_56ae2));	// 166841 ja      short loc_56AE2 ;~ 47D8:077A
cs=0x47d8;eip=0x00077c; 	X(OR(byte_5660a, 8));	// 166842 or      byte_5660A, 8 ;~ 47D8:077C
cs=0x47d8;eip=0x000781; 	J(RETN(0));	// 166843 retn ;~ 47D8:0781
loc_56ae2:
	// 7697 
cs=0x47d8;eip=0x000782; 	X(AND(byte_5660a, 0x0FE));	// 166848 and     byte_5660A, 0FEh ;~ 47D8:0782
cs=0x47d8;eip=0x000787; 	J(RETN(0));	// 166849 retn ;~ 47D8:0787

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_56ae2: 	goto loc_56ae2;
        case m2c::ksub_56ad1: 	goto sub_56ad1;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_56ae8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_56ae8:
    _begin:
cs=0x47d8;eip=0x000788; 	T(MOV(ax, 4));	// 166858 mov     ax, 4 ;~ 47D8:0788
cs=0x47d8;eip=0x00078b; 	J(CALL(sub_568b6,0));	// 166859 call    sub_568B6 ;~ 47D8:078B
cs=0x47d8;eip=0x00078e; 	J(CALL(sub_56ad1,0));	// 166860 call    sub_56AD1 ;~ 47D8:078E
cs=0x47d8;eip=0x000791; 	J(CALL(sub_56942,0));	// 166861 call    sub_56942 ;~ 47D8:0791
cs=0x47d8;eip=0x000794; 	T(CLC);	// 166862 clc ;~ 47D8:0794
cs=0x47d8;eip=0x000795; 	J(RETN(0));	// 166863 retn ;~ 47D8:0795

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_56ae8: 	goto sub_56ae8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_56af6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_56af6:
    _begin:
cs=0x47d8;eip=0x000796; 	T(MOV(al, 0x40));	// 166872 mov     al, 40h ; '@' ;~ 47D8:0796
cs=0x47d8;eip=0x000798; 	J(CALL(sub_56693,0));	// 166873 call    sub_56693 ;~ 47D8:0798
cs=0x47d8;eip=0x00079b; 	X(PUSH(es));	// 166874 push    es ;~ 47D8:079B
cs=0x47d8;eip=0x00079c; 	T(LES(bx, dword_565f3));	// 166875 les     bx, dword_565F3 ;~ 47D8:079C
cs=0x47d8;eip=0x0007a0; 	T(MOV(al, *(raddr(es,bx+6))));	// 166877 mov     al, es:[bx+6] ;~ 47D8:07A0
cs=0x47d8;eip=0x0007a4; 	J(CALL(sub_5669a,0));	// 166878 call    sub_5669A ;~ 47D8:07A4
cs=0x47d8;eip=0x0007a7; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 166879 mov     ax, es:[bx+4] ;~ 47D8:07A7
cs=0x47d8;eip=0x0007ab; 	X(POP(es));	// 166880 pop     es ;~ 47D8:07AB
cs=0x47d8;eip=0x0007ac; 	T(MOV(bx, ax));	// 166882 mov     bx, ax ;~ 47D8:07AC
cs=0x47d8;eip=0x0007ae; 	T(MOV(al, 0x80));	// 166883 mov     al, 80h ; '€' ;~ 47D8:07AE
cs=0x47d8;eip=0x0007b0; 	J(CALL(sub_5669a,0));	// 166884 call    sub_5669A ;~ 47D8:07B0
cs=0x47d8;eip=0x0007b3; 	T(MOV(al, bl));	// 166885 mov     al, bl ;~ 47D8:07B3
cs=0x47d8;eip=0x0007b5; 	J(CALL(sub_5669a,0));	// 166886 call    sub_5669A ;~ 47D8:07B5
cs=0x47d8;eip=0x0007b8; 	T(MOV(al, bh));	// 166887 mov     al, bh ;~ 47D8:07B8
cs=0x47d8;eip=0x0007ba; 	J(CALL(sub_5669a,0));	// 166888 call    sub_5669A ;~ 47D8:07BA
cs=0x47d8;eip=0x0007bd; 	T(CLC);	// 166889 clc ;~ 47D8:07BD
cs=0x47d8;eip=0x0007be; 	J(RETN(0));	// 166890 retn ;~ 47D8:07BE

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_56af6: 	goto sub_56af6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_56b1f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_56b1f:
    _begin:
cs=0x47d8;eip=0x0007bf; 	X(PUSH(ds));	// 166899 push    ds ;~ 47D8:07BF
cs=0x47d8;eip=0x0007c0; 	T(LDS(bx, dword_565f3));	// 166900 lds     bx, dword_565F3 ;~ 47D8:07C0
cs=0x47d8;eip=0x0007c4; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 166902 mov     ax, [bx+4] ;~ 47D8:07C4
cs=0x47d8;eip=0x0007c7; 	X(POP(ds));	// 166903 pop     ds ;~ 47D8:07C7
cs=0x47d8;eip=0x0007c8; 	X(MOV(*(dw*)(raddr(ds,0x283)), ax));	// 166904 mov     ds:283h, ax ;~ 47D8:07C8
	R(return sub_56b2b(0, _state););
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_56b1f: 	goto sub_56b1f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_56b2b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_56b2b:
    _begin:
cs=0x47d8;eip=0x0007cb; 	J(CALL(sub_569d7,0));	// 166913 call    sub_569D7 ;~ 47D8:07CB
cs=0x47d8;eip=0x0007ce; 	T(STC);	// 166914 stc ;~ 47D8:07CE
cs=0x47d8;eip=0x0007cf; 	J(RETN(0));	// 166915 retn ;~ 47D8:07CF

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_56b2b: 	goto sub_56b2b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_56b30(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_56b30:
    _begin:
cs=0x47d8;eip=0x0007d0; 	X(PUSH(ds));	// 166925 push    ds ;~ 47D8:07D0
cs=0x47d8;eip=0x0007d1; 	T(LDS(bx, dword_565f3));	// 166926 lds     bx, dword_565F3 ;~ 47D8:07D1
cs=0x47d8;eip=0x0007d5; 	T(MOV(ax, *(dw*)(raddr(ds,bx+4))));	// 166928 mov     ax, [bx+4] ;~ 47D8:07D5
cs=0x47d8;eip=0x0007d8; 	X(POP(ds));	// 166929 pop     ds ;~ 47D8:07D8
cs=0x47d8;eip=0x0007d9; 	X(ADD(word_5660b, 2));	// 166931 add     word_5660B, 2 ;~ 47D8:07D9
cs=0x47d8;eip=0x0007de; 	T(MOV(bx, word_5660b));	// 166932 mov     bx, word_5660B ;~ 47D8:07DE
cs=0x47d8;eip=0x0007e2; 	X(MOV(*(dw*)(raddr(ds,bx+0x2AB)), ax));	// 166933 mov     [bx+2ABh], ax ;~ 47D8:07E2
cs=0x47d8;eip=0x0007e6; 	X(PUSH(bx));	// 166934 push    bx ;~ 47D8:07E6
cs=0x47d8;eip=0x0007e7; 	J(CALL(sub_569d7,0));	// 166935 call    sub_569D7 ;~ 47D8:07E7
cs=0x47d8;eip=0x0007ea; 	T(MOV(si, 0x293));	// 166936 mov     si, 293h ;~ 47D8:07EA
cs=0x47d8;eip=0x0007ed; 	T(MOV(di, 0x2B3));	// 166937 mov     di, 2B3h ;~ 47D8:07ED
cs=0x47d8;eip=0x0007f0; 	X(POP(bx));	// 166938 pop     bx ;~ 47D8:07F0
cs=0x47d8;eip=0x0007f1; 	T(ADD(di, bx));	// 166939 add     di, bx ;~ 47D8:07F1
cs=0x47d8;eip=0x0007f3; 	T(ADD(di, bx));	// 166940 add     di, bx ;~ 47D8:07F3
cs=0x47d8;eip=0x0007f5; 	X(MOVSW);	// 166941 movsw ;~ 47D8:07F5
cs=0x47d8;eip=0x0007f6; 	X(MOVSW);	// 166942 movsw ;~ 47D8:07F6
cs=0x47d8;eip=0x0007f7; 	T(STC);	// 166943 stc ;~ 47D8:07F7
cs=0x47d8;eip=0x0007f8; 	J(RETN(0));	// 166944 retn ;~ 47D8:07F8

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_56b30: 	goto sub_56b30;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_56b59(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_56b59:
    _begin:
cs=0x47d8;eip=0x0007f9; 	T(MOV(bx, word_5660b));	// 166953 mov     bx, word_5660B ;~ 47D8:07F9
cs=0x47d8;eip=0x0007fd; 	T(OR(bx, bx));	// 166954 or      bx, bx ;~ 47D8:07FD
cs=0x47d8;eip=0x0007ff; 	J(JZ(loc_56b86));	// 166955 jz      short loc_56B86 ;~ 47D8:07FF
cs=0x47d8;eip=0x000801; 	T(CMP(*(dw*)(raddr(ds,bx+0x2AB)), 0));	// 166956 cmp     word ptr [bx+2ABh], 0 ;~ 47D8:0801
cs=0x47d8;eip=0x000806; 	J(JZ(loc_56b81));	// 166957 jz      short loc_56B81 ;~ 47D8:0806
cs=0x47d8;eip=0x000808; 	T(MOV(di, 0x293));	// 166958 mov     di, 293h ;~ 47D8:0808
cs=0x47d8;eip=0x00080b; 	T(MOV(si, 0x2B3));	// 166959 mov     si, 2B3h ;~ 47D8:080B
cs=0x47d8;eip=0x00080e; 	T(ADD(si, bx));	// 166960 add     si, bx ;~ 47D8:080E
cs=0x47d8;eip=0x000810; 	T(ADD(si, bx));	// 166961 add     si, bx ;~ 47D8:0810
cs=0x47d8;eip=0x000812; 	X(MOVSW);	// 166962 movsw ;~ 47D8:0812
cs=0x47d8;eip=0x000813; 	X(MOVSW);	// 166963 movsw ;~ 47D8:0813
cs=0x47d8;eip=0x000814; 	T(CMP(*(dw*)(raddr(ds,bx+0x2AB)), 0x0FFFF));	// 166964 cmp     word ptr [bx+2ABh], 0FFFFh ;~ 47D8:0814
cs=0x47d8;eip=0x000819; 	J(JZ(loc_56b89));	// 166965 jz      short loc_56B89 ;~ 47D8:0819
cs=0x47d8;eip=0x00081b; 	X(DEC(*(dw*)(raddr(ds,bx+0x2AB))));	// 166966 dec     word ptr [bx+2ABh] ;~ 47D8:081B
cs=0x47d8;eip=0x00081f; 	J(JMP(loc_56b89));	// 166967 jmp     short loc_56B89 ;~ 47D8:081F
loc_56b81:
	// 7698 
cs=0x47d8;eip=0x000821; 	X(SUB(word_5660b, 2));	// 166971 sub     word_5660B, 2 ;~ 47D8:0821
loc_56b86:
	// 7699 
cs=0x47d8;eip=0x000826; 	J(CALL(sub_569d7,0));	// 166974 call    sub_569D7 ;~ 47D8:0826
loc_56b89:
	// 7700 
cs=0x47d8;eip=0x000829; 	T(STC);	// 166978 stc ;~ 47D8:0829
cs=0x47d8;eip=0x00082a; 	J(RETN(0));	// 166979 retn ;~ 47D8:082A

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_56b81: 	goto loc_56b81;
        case m2c::kloc_56b86: 	goto loc_56b86;
        case m2c::kloc_56b89: 	goto loc_56b89;
        case m2c::ksub_56b59: 	goto sub_56b59;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_56b8b(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_56b8b:
    _begin:
cs=0x47d8;eip=0x00082b; 	X(PUSH(cx));	// 166989 push    cx ;~ 47D8:082B
cs=0x47d8;eip=0x00082c; 	X(PUSH(dx));	// 166990 push    dx ;~ 47D8:082C
cs=0x47d8;eip=0x00082d; 	X(PUSH(si));	// 166991 push    si ;~ 47D8:082D
cs=0x47d8;eip=0x00082e; 	X(PUSH(di));	// 166992 push    di ;~ 47D8:082E
cs=0x47d8;eip=0x00082f; 	X(PUSH(bp));	// 166993 push    bp ;~ 47D8:082F
cs=0x47d8;eip=0x000830; 	X(PUSH(ds));	// 166994 push    ds ;~ 47D8:0830
cs=0x47d8;eip=0x000831; 	X(PUSH(es));	// 166995 push    es ;~ 47D8:0831
cs=0x47d8;eip=0x000832; 	X(PUSH(cs));	// 166996 push    cs ;~ 47D8:0832
cs=0x47d8;eip=0x000833; 	X(POP(ds));	// 166997 pop     ds ;~ 47D8:0833
cs=0x47d8;eip=0x000834; 	X(MOV(word_565ef, es));	// 166999 mov     word_565EF, es ;~ 47D8:0834
cs=0x47d8;eip=0x000838; 	X(PUSH(cs));	// 167000 push    cs ;~ 47D8:0838
cs=0x47d8;eip=0x000839; 	X(POP(es));	// 167001 pop     es ;~ 47D8:0839
cs=0x47d8;eip=0x00083a; 	T(CMP(bx, 0x0E));	// 167002 cmp     bx, 0Eh ;~ 47D8:083A
cs=0x47d8;eip=0x00083d; 	J(JNC(loc_56bb8));	// 167003 jnb     short loc_56BB8 ;~ 47D8:083D
cs=0x47d8;eip=0x00083f; 	T(CMP(bl, 4));	// 167004 cmp     bl, 4 ;~ 47D8:083F
cs=0x47d8;eip=0x000842; 	J(JC(loc_56bb0));	// 167005 jb      short loc_56BB0 ;~ 47D8:0842
cs=0x47d8;eip=0x000844; 	T(CMP(bl, 0x0D));	// 167006 cmp     bl, 0Dh ;~ 47D8:0844
cs=0x47d8;eip=0x000847; 	J(JZ(loc_56bb0));	// 167007 jz      short loc_56BB0 ;~ 47D8:0847
cs=0x47d8;eip=0x000849; 	T(CMP(byte_565ee, 0));	// 167008 cmp     byte_565EE, 0 ;~ 47D8:0849
cs=0x47d8;eip=0x00084e; 	J(JZ(loc_56bb8));	// 167009 jz      short loc_56BB8 ;~ 47D8:084E
loc_56bb0:
	// 7701 
cs=0x47d8;eip=0x000850; 	T(SHL(bx, 1));	// 167013 shl     bx, 1 ;~ 47D8:0850
cs=0x47d8;eip=0x000852; 	J(CALL(__dispatch_call,*(dw*)(((db*)&funcs_56bb2)+bx)));	// 167014 call    funcs_56BB2[bx] ;~ 47D8:0852
cs=0x47d8;eip=0x000856; 	J(JMP(loc_56bbb));	// 167015 jmp     short loc_56BBB ;~ 47D8:0856
loc_56bb8:
	// 7702 
cs=0x47d8;eip=0x000858; 	T(MOV(ax, 0x0FFFF));	// 167020 mov     ax, 0FFFFh ;~ 47D8:0858
loc_56bbb:
	// 7703 
cs=0x47d8;eip=0x00085b; 	X(POP(es));	// 167023 pop     es ;~ 47D8:085B
cs=0x47d8;eip=0x00085c; 	X(POP(ds));	// 167025 pop     ds ;~ 47D8:085C
cs=0x47d8;eip=0x00085d; 	X(POP(bp));	// 167027 pop     bp ;~ 47D8:085D
cs=0x47d8;eip=0x00085e; 	X(POP(di));	// 167028 pop     di ;~ 47D8:085E
cs=0x47d8;eip=0x00085f; 	X(POP(si));	// 167029 pop     si ;~ 47D8:085F
cs=0x47d8;eip=0x000860; 	X(POP(dx));	// 167030 pop     dx ;~ 47D8:0860
cs=0x47d8;eip=0x000861; 	X(POP(cx));	// 167031 pop     cx ;~ 47D8:0861
cs=0x47d8;eip=0x000862; 	J(RETN(0));	// 167032 retn ;~ 47D8:0862

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_56bb0: 	goto loc_56bb0;
        case m2c::kloc_56bb8: 	goto loc_56bb8;
        case m2c::kloc_56bbb: 	goto loc_56bbb;
        case m2c::ksub_56b8b: 	goto sub_56b8b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_56bc3(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_56bc3:
    _begin:
cs=0x47d8;eip=0x000863; 	T(MOV(ax, 0x10D));	// 167042 mov     ax, 10Dh ;~ 47D8:0863
cs=0x47d8;eip=0x000866; 	J(RETN(0));	// 167043 retn ;~ 47D8:0866

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_56bc3: 	goto sub_56bc3;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group148(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group148:
    _begin:
sub_56bc7:
	// 167051 
cs=0x47d8;eip=0x000867; 	T(AND(ax, 0x0FFF8));	// 167054 and     ax, 0FFF8h ;~ 47D8:0867
cs=0x47d8;eip=0x00086a; 	T(MOV(bx, ax));	// 167055 mov     bx, ax ;~ 47D8:086A
cs=0x47d8;eip=0x00086c; 	T(SUB(ax, 0x210));	// 167056 sub     ax, 210h ;~ 47D8:086C
cs=0x47d8;eip=0x00086f; 	T(CMP(ax, 0x50));	// 167057 cmp     ax, 50h ; 'P' ;~ 47D8:086F
cs=0x47d8;eip=0x000872; 	J(JA(sub_56c10));	// 167058 ja      short sub_56C10 ;~ 47D8:0872
cs=0x47d8;eip=0x000874; 	X(MOV(word_565e5, bx));	// 167059 mov     word_565E5, bx ;~ 47D8:0874
cs=0x47d8;eip=0x000878; 	T(XOR(ax, ax));	// 167060 xor     ax, ax ;~ 47D8:0878
cs=0x47d8;eip=0x00087a; 	J(RETN(0));	// 167061 retn ;~ 47D8:087A
sub_56bdb:
	// 167068 
cs=0x47d8;eip=0x00087b; 	T(CMP(al, 0x0A));	// 167071 cmp     al, 0Ah ;~ 47D8:087B
cs=0x47d8;eip=0x00087d; 	J(JZ(loc_56bef));	// 167072 jz      short loc_56BEF ;~ 47D8:087D
cs=0x47d8;eip=0x00087f; 	T(CMP(al, 7));	// 167073 cmp     al, 7 ;~ 47D8:087F
cs=0x47d8;eip=0x000881; 	J(JZ(loc_56bef));	// 167074 jz      short loc_56BEF ;~ 47D8:0881
cs=0x47d8;eip=0x000883; 	T(CMP(al, 5));	// 167075 cmp     al, 5 ;~ 47D8:0883
cs=0x47d8;eip=0x000885; 	J(JZ(loc_56bef));	// 167076 jz      short loc_56BEF ;~ 47D8:0885
cs=0x47d8;eip=0x000887; 	T(CMP(al, 3));	// 167077 cmp     al, 3 ;~ 47D8:0887
cs=0x47d8;eip=0x000889; 	J(JZ(loc_56bef));	// 167078 jz      short loc_56BEF ;~ 47D8:0889
cs=0x47d8;eip=0x00088b; 	T(CMP(al, 2));	// 167079 cmp     al, 2 ;~ 47D8:088B
cs=0x47d8;eip=0x00088d; 	J(JNZ(sub_56c10));	// 167080 jnz     short sub_56C10 ;~ 47D8:088D
loc_56bef:
	// 7704 
cs=0x47d8;eip=0x00088f; 	X(MOV(byte_565e7, al));	// 167084 mov     byte_565E7, al ;~ 47D8:088F
cs=0x47d8;eip=0x000892; 	T(XOR(ax, ax));	// 167085 xor     ax, ax ;~ 47D8:0892
cs=0x47d8;eip=0x000894; 	J(RETN(0));	// 167086 retn ;~ 47D8:0894
sub_56bf5:
	// 167093 
cs=0x47d8;eip=0x000895; 	T(AND(al, 7));	// 167096 and     al, 7 ;~ 47D8:0895
cs=0x47d8;eip=0x000897; 	T(DEC(al));	// 167097 dec     al ;~ 47D8:0897
cs=0x47d8;eip=0x000899; 	T(CMP(al, 3));	// 167098 cmp     al, 3 ;~ 47D8:0899
cs=0x47d8;eip=0x00089b; 	J(JA(sub_56c10));	// 167099 ja      short sub_56C10 ;~ 47D8:089B
cs=0x47d8;eip=0x00089d; 	T(CMP(al, 2));	// 167100 cmp     al, 2 ;~ 47D8:089D
cs=0x47d8;eip=0x00089f; 	J(JZ(sub_56c10));	// 167101 jz      short sub_56C10 ;~ 47D8:089F
cs=0x47d8;eip=0x0008a1; 	X(MOV(byte_565e8, al));	// 167102 mov     byte_565E8, al ;~ 47D8:08A1
cs=0x47d8;eip=0x0008a4; 	X(PUSH(bx));	// 167103 push    bx ;~ 47D8:08A4
cs=0x47d8;eip=0x0008a5; 	T(MOV(bx, 0x28A));	// 167104 mov     bx, 28Ah ;~ 47D8:08A5
cs=0x47d8;eip=0x0008a8; 	T(XLAT);	// 167105 xlat ;~ 47D8:08A8
cs=0x47d8;eip=0x0008a9; 	X(MOV(byte_565e9, al));	// 167106 mov     byte_565E9, al ;~ 47D8:08A9
cs=0x47d8;eip=0x0008ac; 	X(POP(bx));	// 167107 pop     bx ;~ 47D8:08AC
cs=0x47d8;eip=0x0008ad; 	T(XOR(ax, ax));	// 167108 xor     ax, ax ;~ 47D8:08AD
cs=0x47d8;eip=0x0008af; 	J(RETN(0));	// 167109 retn ;~ 47D8:08AF
sub_56c10:
	// 167116 
cs=0x47d8;eip=0x0008b0; 	T(MOV(ax, 0x0FFFF));	// 167118 mov     ax, 0FFFFh ;~ 47D8:08B0
cs=0x47d8;eip=0x0008b3; 	J(RETN(0));	// 167119 retn ;~ 47D8:08B3
sub_56c48:
	// 167172 
cs=0x47d8;eip=0x0008e8; 	T(CMP(byte_565f2, 0));	// 167175 cmp     byte_565F2, 0 ;~ 47D8:08E8
cs=0x47d8;eip=0x0008ed; 	J(JNZ(sub_56c10));	// 167176 jnz     short sub_56C10 ;~ 47D8:08ED
cs=0x47d8;eip=0x0008ef; 	X(INC(byte_565f2));	// 167177 inc     byte_565F2 ;~ 47D8:08EF
cs=0x47d8;eip=0x0008f3; 	T(MOV(dx, word_565ef));	// 167178 mov     dx, word_565EF ;~ 47D8:08F3
cs=0x47d8;eip=0x0008f7; 	T(MOV(ax, di));	// 167179 mov     ax, di ;~ 47D8:08F7
cs=0x47d8;eip=0x0008f9; 	J(CALL(sub_56a1d,0));	// 167180 call    sub_56A1D ;~ 47D8:08F9
cs=0x47d8;eip=0x0008fc; 	X(MOV(*(dw*)(((db*)&dword_565f3)+2), dx));	// 167181 mov     word ptr dword_565F3+2, dx ;~ 47D8:08FC
cs=0x47d8;eip=0x000900; 	X(MOV(*(dw*)(((db*)&dword_565f3)), ax));	// 167182 mov     word ptr dword_565F3, ax ;~ 47D8:0900
cs=0x47d8;eip=0x000903; 	T(XOR(ax, ax));	// 167183 xor     ax, ax ;~ 47D8:0903
cs=0x47d8;eip=0x000905; 	X(MOV(byte_56607, al));	// 167184 mov     byte_56607, al ;~ 47D8:0905
cs=0x47d8;eip=0x000908; 	X(MOV(word_5660b, ax));	// 167185 mov     word_5660B, ax ;~ 47D8:0908
cs=0x47d8;eip=0x00090b; 	X(MOV(word_5660d, ax));	// 167186 mov     word_5660D, ax ;~ 47D8:090B
cs=0x47d8;eip=0x00090e; 	T(MOV(ax, 0x591));	// 167187 mov     ax, 591h ;~ 47D8:090E
cs=0x47d8;eip=0x000911; 	J(CALL(sub_56838,0));	// 167188 call    sub_56838 ;~ 47D8:0911
cs=0x47d8;eip=0x000914; 	X(MOV(word_565e3, 0x0FFFF));	// 167189 mov     word_565E3, 0FFFFh ;~ 47D8:0914
cs=0x47d8;eip=0x00091a; 	J(CALL(sub_569bf,0));	// 167190 call    sub_569BF ;~ 47D8:091A
cs=0x47d8;eip=0x00091d; 	X(MOV(byte_5665e, 0));	// 167191 mov     byte_5665E, 0 ;~ 47D8:091D
cs=0x47d8;eip=0x000922; 	T(XOR(ax, ax));	// 167192 xor     ax, ax ;~ 47D8:0922
cs=0x47d8;eip=0x000924; 	J(RETN(0));	// 167193 retn ;~ 47D8:0924

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_56bef: 	goto loc_56bef;
        case m2c::ksub_56bc7: 	goto sub_56bc7;
        case m2c::ksub_56bdb: 	goto sub_56bdb;
        case m2c::ksub_56bf5: 	goto sub_56bf5;
        case m2c::ksub_56c10: 	goto sub_56c10;
        case m2c::ksub_56c48: 	goto sub_56c48;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_56c14(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_56c14:
    _begin:
cs=0x47d8;eip=0x0008b4; 	X(PUSHF);	// 167129 pushf ;~ 47D8:08B4
cs=0x47d8;eip=0x0008b5; 	T(STI);	// 167130 sti ;~ 47D8:08B5
cs=0x47d8;eip=0x0008b6; 	J(CALL(sub_566bc,0));	// 167131 call    sub_566BC ;~ 47D8:08B6
cs=0x47d8;eip=0x0008b9; 	J(JNZ(loc_56c31));	// 167132 jnz     short loc_56C31 ;~ 47D8:08B9
cs=0x47d8;eip=0x0008bb; 	J(CALL(sub_566e5,0));	// 167133 call    sub_566E5 ;~ 47D8:08BB
cs=0x47d8;eip=0x0008be; 	J(JNZ(loc_56c31));	// 167134 jnz     short loc_56C31 ;~ 47D8:08BE
cs=0x47d8;eip=0x0008c0; 	J(CALL(sub_5677c,0));	// 167135 call    sub_5677C ;~ 47D8:08C0
cs=0x47d8;eip=0x0008c3; 	J(JNZ(loc_56c31));	// 167136 jnz     short loc_56C31 ;~ 47D8:08C3
cs=0x47d8;eip=0x0008c5; 	J(CALL(sub_56731,0));	// 167137 call    sub_56731 ;~ 47D8:08C5
cs=0x47d8;eip=0x0008c8; 	J(JNZ(loc_56c31));	// 167138 jnz     short loc_56C31 ;~ 47D8:08C8
cs=0x47d8;eip=0x0008ca; 	T(MOV(al, 1));	// 167139 mov     al, 1 ;~ 47D8:08CA
cs=0x47d8;eip=0x0008cc; 	J(CALL(sub_56c33,0));	// 167140 call    sub_56C33 ;~ 47D8:08CC
cs=0x47d8;eip=0x0008cf; 	T(XOR(ax, ax));	// 167141 xor     ax, ax ;~ 47D8:08CF
loc_56c31:
	// 7705 
cs=0x47d8;eip=0x0008d1; 	X(POPF);	// 167145 popf ;~ 47D8:08D1
cs=0x47d8;eip=0x0008d2; 	J(RETN(0));	// 167146 retn ;~ 47D8:08D2

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_56c31: 	goto loc_56c31;
        case m2c::ksub_56c14: 	goto sub_56c14;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_56c33(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_56c33:
    _begin:
cs=0x47d8;eip=0x0008d3; 	T(MOV(dx, word_565e5));	// 167155 mov     dx, word_565E5 ;~ 47D8:08D3
cs=0x47d8;eip=0x0008d7; 	T(ADD(dl, 0x0C));	// 167156 add     dl, 0Ch ;~ 47D8:08D7
cs=0x47d8;eip=0x0008da; 	T(OR(al, al));	// 167157 or      al, al ;~ 47D8:08DA
cs=0x47d8;eip=0x0008dc; 	T(MOV(al, 0x0D1));	// 167158 mov     al, 0D1h ; 'Ñ' ;~ 47D8:08DC
cs=0x47d8;eip=0x0008de; 	J(JNZ(loc_56c42));	// 167159 jnz     short loc_56C42 ;~ 47D8:08DE
cs=0x47d8;eip=0x0008e0; 	T(MOV(al, 0x0D3));	// 167160 mov     al, 0D3h ; 'Ó' ;~ 47D8:08E0
loc_56c42:
	// 7706 
cs=0x47d8;eip=0x0008e2; 	J(CALL(sub_5669a,0));	// 167163 call    sub_5669A ;~ 47D8:08E2
cs=0x47d8;eip=0x0008e5; 	T(XOR(ax, ax));	// 167164 xor     ax, ax ;~ 47D8:08E5
cs=0x47d8;eip=0x0008e7; 	J(RETN(0));	// 167165 retn ;~ 47D8:08E7

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_56c42: 	goto loc_56c42;
        case m2c::ksub_56c33: 	goto sub_56c33;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group149(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group149:
    _begin:
sub_56c85:
	// 167200 
cs=0x47d8;eip=0x000925; 	T(MOV(ax, 1));	// 167203 mov     ax, 1 ;~ 47D8:0925
cs=0x47d8;eip=0x000928; 	T(CMP(byte_565f2, 0));	// 167204 cmp     byte_565F2, 0 ;~ 47D8:0928
cs=0x47d8;eip=0x00092d; 	J(JZ(loc_56c97));	// 167205 jz      short loc_56C97 ;~ 47D8:092D
cs=0x47d8;eip=0x00092f; 	J(CALL(sub_56792,0));	// 167206 call    sub_56792 ;~ 47D8:092F
cs=0x47d8;eip=0x000932; 	J(CALL(sub_569a0,0));	// 167207 call    sub_569A0 ;~ 47D8:0932
cs=0x47d8;eip=0x000935; 	T(XOR(ax, ax));	// 167208 xor     ax, ax ;~ 47D8:0935
loc_56c97:
	// 7707 
cs=0x47d8;eip=0x000937; 	X(MOV(byte_5665e, 1));	// 167212 mov     byte_5665E, 1 ;~ 47D8:0937
cs=0x47d8;eip=0x00093c; 	J(RETN(0));	// 167213 retn ;~ 47D8:093C
sub_56c9d:
	// 167220 
cs=0x47d8;eip=0x00093d; 	T(MOV(ax, 1));	// 167223 mov     ax, 1 ;~ 47D8:093D
cs=0x47d8;eip=0x000940; 	T(CMP(byte_565f2, 0));	// 167224 cmp     byte_565F2, 0 ;~ 47D8:0940
cs=0x47d8;eip=0x000945; 	J(JZ(loc_56c97));	// 167225 jz      short loc_56C97 ;~ 47D8:0945
cs=0x47d8;eip=0x000947; 	J(CALL(sub_56792,0));	// 167226 call    sub_56792 ;~ 47D8:0947
cs=0x47d8;eip=0x00094a; 	T(XOR(ax, ax));	// 167227 xor     ax, ax ;~ 47D8:094A
cs=0x47d8;eip=0x00094c; 	J(RETN(0));	// 167228 retn ;~ 47D8:094C
sub_56cad:
	// 167235 
cs=0x47d8;eip=0x00094d; 	T(MOV(ax, 1));	// 167238 mov     ax, 1 ;~ 47D8:094D
cs=0x47d8;eip=0x000950; 	T(CMP(byte_565f2, 0));	// 167239 cmp     byte_565F2, 0 ;~ 47D8:0950
cs=0x47d8;eip=0x000955; 	J(JZ(loc_56c97));	// 167240 jz      short loc_56C97 ;~ 47D8:0955
cs=0x47d8;eip=0x000957; 	T(MOV(al, 0x0D4));	// 167241 mov     al, 0D4h ; 'Ô' ;~ 47D8:0957
cs=0x47d8;eip=0x000959; 	J(CALL(sub_56693,0));	// 167242 call    sub_56693 ;~ 47D8:0959
cs=0x47d8;eip=0x00095c; 	T(XOR(ax, ax));	// 167243 xor     ax, ax ;~ 47D8:095C
cs=0x47d8;eip=0x00095e; 	J(RETN(0));	// 167244 retn ;~ 47D8:095E

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_56c97: 	goto loc_56c97;
        case m2c::ksub_56c85: 	goto sub_56c85;
        case m2c::ksub_56c9d: 	goto sub_56c9d;
        case m2c::ksub_56cad: 	goto sub_56cad;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_56cbf(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_56cbf:
    _begin:
cs=0x47d8;eip=0x00095f; 	T(MOV(cx, ax));	// 167254 mov     cx, ax ;~ 47D8:095F
cs=0x47d8;eip=0x000961; 	T(MOV(ax, 1));	// 167255 mov     ax, 1 ;~ 47D8:0961
cs=0x47d8;eip=0x000964; 	X(PUSHF);	// 167256 pushf ;~ 47D8:0964
cs=0x47d8;eip=0x000965; 	T(CLI);	// 167257 cli ;~ 47D8:0965
cs=0x47d8;eip=0x000966; 	T(MOV(bx, word_5660b));	// 167258 mov     bx, word_5660B ;~ 47D8:0966
cs=0x47d8;eip=0x00096a; 	T(OR(bx, bx));	// 167259 or      bx, bx ;~ 47D8:096A
cs=0x47d8;eip=0x00096c; 	J(JZ(loc_56cf0));	// 167260 jz      short loc_56CF0 ;~ 47D8:096C
cs=0x47d8;eip=0x00096e; 	T(XOR(ax, ax));	// 167261 xor     ax, ax ;~ 47D8:096E
cs=0x47d8;eip=0x000970; 	X(MOV(*(dw*)(raddr(ds,bx+0x2AB)), ax));	// 167262 mov     [bx+2ABh], ax ;~ 47D8:0970
cs=0x47d8;eip=0x000974; 	J(JCXZ(loc_56cee));	// 167263 jcxz    short loc_56CEE ;~ 47D8:0974
cs=0x47d8;eip=0x000976; 	X(SUB(word_5660b, 2));	// 167264 sub     word_5660B, 2 ;~ 47D8:0976
cs=0x47d8;eip=0x00097b; 	J(CALL(sub_56792,0));	// 167265 call    sub_56792 ;~ 47D8:097B
cs=0x47d8;eip=0x00097e; 	J(CALL(sub_569d7,0));	// 167266 call    sub_569D7 ;~ 47D8:097E
cs=0x47d8;eip=0x000981; 	J(CALL(sub_569bf,0));	// 167267 call    sub_569BF ;~ 47D8:0981
cs=0x47d8;eip=0x000984; 	T(CMP(byte_56607, 0));	// 167268 cmp     byte_56607, 0 ;~ 47D8:0984
cs=0x47d8;eip=0x000989; 	J(JZ(loc_56cee));	// 167269 jz      short loc_56CEE ;~ 47D8:0989
cs=0x47d8;eip=0x00098b; 	J(CALL(sub_569a0,0));	// 167270 call    sub_569A0 ;~ 47D8:098B
loc_56cee:
	// 7708 
cs=0x47d8;eip=0x00098e; 	T(XOR(ax, ax));	// 167274 xor     ax, ax ;~ 47D8:098E
loc_56cf0:
	// 7709 
cs=0x47d8;eip=0x000990; 	X(POPF);	// 167277 popf ;~ 47D8:0990
cs=0x47d8;eip=0x000991; 	J(RETN(0));	// 167278 retn ;~ 47D8:0991

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_56cee: 	goto loc_56cee;
        case m2c::kloc_56cf0: 	goto loc_56cf0;
        case m2c::ksub_56cbf: 	goto sub_56cbf;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

