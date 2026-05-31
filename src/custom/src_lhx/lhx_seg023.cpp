/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group21(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group21:
    _begin:
sub_35bae:
	// 85489 
cs=0x275c;eip=0x00000e; 	T(MOV(ax, 0x1000));	// 85491 mov     ax, 1000h ;~ 275C:000E
cs=0x275c;eip=0x000011; 	X(PUSH(ax));	// 85492 push    ax ;~ 275C:0011
cs=0x275c;eip=0x000012; 	R(CALL(sub_35bc3,0));	// 85493 call    sub_35BC3 ;~ 275C:0012
cs=0x275c;eip=0x000015; 	X(MOV(*(dw*)((&unk_570bc)), ax));	// 85494 mov     word ptr unk_570BC, ax ;~ 275C:0015
cs=0x275c;eip=0x000018; 	T(MOV(ax, 0x100));	// 85495 mov     ax, 100h ;~ 275C:0018
cs=0x275c;eip=0x00001b; 	X(PUSH(ax));	// 85496 push    ax ;~ 275C:001B
cs=0x275c;eip=0x00001c; 	R(CALL(sub_35bc3,0));	// 85497 call    sub_35BC3 ;~ 275C:001C
cs=0x275c;eip=0x00001f; 	X(MOV(*(dw*)((&unk_570be)), ax));	// 85498 mov     word ptr unk_570BE, ax ;~ 275C:001F
cs=0x275c;eip=0x000022; 	R(RETF(0));	// 85499 retf ;~ 275C:0022
sub_35bc3:
	// 85507 
#undef arg_0
#define arg_0 4
	// 85510 arg_0           = word ptr  4 ;~ 275C:0023
cs=0x275c;eip=0x000023; 	X(PUSH(bp));	// 85512 push    bp ;~ 275C:0023
cs=0x275c;eip=0x000024; 	T(MOV(bp, sp));	// 85513 mov     bp, sp ;~ 275C:0024
cs=0x275c;eip=0x000026; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 85514 mov     ax, [bp+arg_0] ;~ 275C:0026
cs=0x275c;eip=0x000029; 	X(MOV(*(dw*)((&unk_570c4)), ax));	// 85515 mov     word ptr unk_570C4, ax ;~ 275C:0029
cs=0x275c;eip=0x00002c; 	T(MOV(ax, 0x1388));	// 85516 mov     ax, 1388h ;~ 275C:002C
cs=0x275c;eip=0x00002f; 	X(PUSH(ax));	// 85517 push    ax ;~ 275C:002F
cs=0x275c;eip=0x000030; 	R(CALLF(sub_23961,0));	// 85518 call    sub_23961 ;~ 275C:0030
cs=0x275c;eip=0x000035; 	X(MOV(*(dw*)((&unk_570c0)), ax));	// 85519 mov     word ptr unk_570C0, ax ;~ 275C:0035
cs=0x275c;eip=0x000038; 	T(OR(ax, ax));	// 85520 or      ax, ax ;~ 275C:0038
cs=0x275c;eip=0x00003a; 	R(JNZ(loc_35be1));	// 85521 jnz     short loc_35BE1 ;~ 275C:003A
cs=0x275c;eip=0x00003c; 	R(CALLF(sub_315c9,0));	// 85522 call    sub_315C9 ;~ 275C:003C
loc_35be1:
	// 9881 
cs=0x275c;eip=0x000041; 	X(MOV(*(dw*)((&unk_570c2)), 0));	// 85526 mov     word ptr unk_570C2, 0 ;~ 275C:0041
cs=0x275c;eip=0x000047; 	T(SUB(ax, ax));	// 85527 sub     ax, ax ;~ 275C:0047
cs=0x275c;eip=0x000049; 	X(PUSH(ax));	// 85528 push    ax ;~ 275C:0049
cs=0x275c;eip=0x00004a; 	X(PUSH(ax));	// 85529 push    ax ;~ 275C:004A
cs=0x275c;eip=0x00004b; 	T(MOV(ah, unk_47a94));	// 85530 mov     ah, byte ptr unk_47A94 ;~ 275C:004B
cs=0x275c;eip=0x00004f; 	T(SUB(al, al));	// 85531 sub     al, al ;~ 275C:004F
cs=0x275c;eip=0x000051; 	X(PUSH(ax));	// 85532 push    ax ;~ 275C:0051
cs=0x275c;eip=0x000052; 	T(MOV(ah, unk_47a96));	// 85533 mov     ah, byte ptr unk_47A96 ;~ 275C:0052
cs=0x275c;eip=0x000056; 	X(PUSH(ax));	// 85534 push    ax ;~ 275C:0056
cs=0x275c;eip=0x000057; 	R(CALL(sub_368b7,0));	// 85535 call    sub_368B7 ;~ 275C:0057
cs=0x275c;eip=0x00005a; 	X(PUSH(*(dw*)((&unk_570c0))));	// 85536 push    word ptr unk_570C0 ;~ 275C:005A
cs=0x275c;eip=0x00005e; 	X(PUSH(*(dw*)((&unk_570c2))));	// 85537 push    word ptr unk_570C2 ;~ 275C:005E
cs=0x275c;eip=0x000062; 	R(CALLF(sub_23998,0));	// 85538 call    sub_23998 ;~ 275C:0062
cs=0x275c;eip=0x000067; 	T(OR(al, al));	// 85539 or      al, al ;~ 275C:0067
cs=0x275c;eip=0x000069; 	R(JNZ(loc_35c10));	// 85540 jnz     short loc_35C10 ;~ 275C:0069
cs=0x275c;eip=0x00006b; 	R(CALLF(sub_315c9,0));	// 85541 call    sub_315C9 ;~ 275C:006B
loc_35c10:
	// 9882 
cs=0x275c;eip=0x000070; 	T(MOV(ax, *(dw*)((&unk_570c0))));	// 85545 mov     ax, word ptr unk_570C0 ;~ 275C:0070
cs=0x275c;eip=0x000073; 	X(POP(bp));	// 85546 pop     bp ;~ 275C:0073
cs=0x275c;eip=0x000074; 	R(RETN(2));	// 85547 retn    2 ;~ 275C:0074
sub_35c17:
	// 85554 
cs=0x275c;eip=0x000077; 	T(CMP(*(dw*)((&unk_570bc)), 0));	// 85555 cmp     word ptr unk_570BC, 0 ;~ 275C:0077
cs=0x275c;eip=0x00007c; 	R(JZ(loc_35c2d));	// 85556 jz      short loc_35C2D ;~ 275C:007C
cs=0x275c;eip=0x00007e; 	X(PUSH(*(dw*)((&unk_570bc))));	// 85557 push    word ptr unk_570BC ;~ 275C:007E
cs=0x275c;eip=0x000082; 	R(CALLF(sub_2397c,0));	// 85558 call    sub_2397C ;~ 275C:0082
cs=0x275c;eip=0x000087; 	X(MOV(*(dw*)((&unk_570bc)), 0));	// 85559 mov     word ptr unk_570BC, 0 ;~ 275C:0087
loc_35c2d:
	// 9883 
cs=0x275c;eip=0x00008d; 	T(CMP(*(dw*)((&unk_570be)), 0));	// 85562 cmp     word ptr unk_570BE, 0 ;~ 275C:008D
cs=0x275c;eip=0x000092; 	R(JZ(locret_35c43));	// 85563 jz      short locret_35C43 ;~ 275C:0092
cs=0x275c;eip=0x000094; 	X(PUSH(*(dw*)((&unk_570be))));	// 85564 push    word ptr unk_570BE ;~ 275C:0094
cs=0x275c;eip=0x000098; 	R(CALLF(sub_2397c,0));	// 85565 call    sub_2397C ;~ 275C:0098
cs=0x275c;eip=0x00009d; 	X(MOV(*(dw*)((&unk_570be)), 0));	// 85566 mov     word ptr unk_570BE, 0 ;~ 275C:009D
locret_35c43:
	// 9884 
cs=0x275c;eip=0x0000a3; 	R(RETF(0));	// 85569 retf ;~ 275C:00A3
sub_35c44:
	// 85576 
cs=0x275c;eip=0x0000a4; 	X(PUSH(bp));	// 85577 push    bp ;~ 275C:00A4
cs=0x275c;eip=0x0000a5; 	T(MOV(bp, *(dw*)((&unk_4a09e))));	// 85578 mov     bp, word ptr unk_4A09E ;~ 275C:00A5
cs=0x275c;eip=0x0000a9; 	T(MOV(cx, *(dw*)(raddr(ss,bp+8))));	// 85579 mov     cx, [bp+8] ;~ 275C:00A9
cs=0x275c;eip=0x0000ac; 	T(MOV(bp, *(dw*)(raddr(ss,bp+0x0A))));	// 85580 mov     bp, [bp+0Ah] ;~ 275C:00AC
cs=0x275c;eip=0x0000af; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 85581 mov     ax, es:[bx+6] ;~ 275C:00AF
cs=0x275c;eip=0x0000b3; 	T(MOV(dx, *(dw*)(raddr(es,bx+8))));	// 85582 mov     dx, es:[bx+8] ;~ 275C:00B3
cs=0x275c;eip=0x0000b7; 	T(SUB(ax, cx));	// 85583 sub     ax, cx ;~ 275C:00B7
cs=0x275c;eip=0x0000b9; 	T(SBB(dx, bp));	// 85584 sbb     dx, bp ;~ 275C:00B9
cs=0x275c;eip=0x0000bb; 	T(CMP(*(dw*)((&unk_570ce)), dx));	// 85585 cmp     word ptr unk_570CE, dx ;~ 275C:00BB
cs=0x275c;eip=0x0000bf; 	R(JGE(loc_35c6a));	// 85586 jge     short loc_35C6A ;~ 275C:00BF
cs=0x275c;eip=0x0000c1; 	T(CMP(*(dw*)((&unk_570da)), dx));	// 85587 cmp     word ptr unk_570DA, dx ;~ 275C:00C1
cs=0x275c;eip=0x0000c5; 	R(JGE(loc_35c6a));	// 85588 jge     short loc_35C6A ;~ 275C:00C5
cs=0x275c;eip=0x0000c7; 	T(CLC);	// 85589 clc ;~ 275C:00C7
cs=0x275c;eip=0x0000c8; 	X(POP(bp));	// 85590 pop     bp ;~ 275C:00C8
cs=0x275c;eip=0x0000c9; 	R(RETN(0));	// 85591 retn ;~ 275C:00C9
loc_35c6a:
	// 9885 
cs=0x275c;eip=0x0000ca; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 85596 mov     ax, es:[bx+6] ;~ 275C:00CA
cs=0x275c;eip=0x0000ce; 	T(MOV(dx, *(dw*)(raddr(es,bx+8))));	// 85597 mov     dx, es:[bx+8] ;~ 275C:00CE
cs=0x275c;eip=0x0000d2; 	T(ADD(ax, cx));	// 85598 add     ax, cx ;~ 275C:00D2
cs=0x275c;eip=0x0000d4; 	T(ADC(dx, bp));	// 85599 adc     dx, bp ;~ 275C:00D4
cs=0x275c;eip=0x0000d6; 	T(CMP(*(dw*)((&unk_570cc)), dx));	// 85600 cmp     word ptr unk_570CC, dx ;~ 275C:00D6
cs=0x275c;eip=0x0000da; 	R(JLE(loc_35c85));	// 85601 jle     short loc_35C85 ;~ 275C:00DA
cs=0x275c;eip=0x0000dc; 	T(CMP(*(dw*)((&unk_570d8)), dx));	// 85602 cmp     word ptr unk_570D8, dx ;~ 275C:00DC
cs=0x275c;eip=0x0000e0; 	R(JLE(loc_35c85));	// 85603 jle     short loc_35C85 ;~ 275C:00E0
cs=0x275c;eip=0x0000e2; 	T(CLC);	// 85604 clc ;~ 275C:00E2
cs=0x275c;eip=0x0000e3; 	X(POP(bp));	// 85605 pop     bp ;~ 275C:00E3
cs=0x275c;eip=0x0000e4; 	R(RETN(0));	// 85606 retn ;~ 275C:00E4
loc_35c85:
	// 9886 
cs=0x275c;eip=0x0000e5; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 85611 mov     ax, es:[bx+0Ah] ;~ 275C:00E5
cs=0x275c;eip=0x0000e9; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C))));	// 85612 mov     dx, es:[bx+0Ch] ;~ 275C:00E9
cs=0x275c;eip=0x0000ed; 	T(SUB(ax, cx));	// 85613 sub     ax, cx ;~ 275C:00ED
cs=0x275c;eip=0x0000ef; 	T(SBB(dx, bp));	// 85614 sbb     dx, bp ;~ 275C:00EF
cs=0x275c;eip=0x0000f1; 	T(CMP(*(dw*)((&unk_570d2)), dx));	// 85615 cmp     word ptr unk_570D2, dx ;~ 275C:00F1
cs=0x275c;eip=0x0000f5; 	R(JGE(loc_35ca0));	// 85616 jge     short loc_35CA0 ;~ 275C:00F5
cs=0x275c;eip=0x0000f7; 	T(CMP(*(dw*)((&unk_570de)), dx));	// 85617 cmp     word ptr unk_570DE, dx ;~ 275C:00F7
cs=0x275c;eip=0x0000fb; 	R(JGE(loc_35ca0));	// 85618 jge     short loc_35CA0 ;~ 275C:00FB
cs=0x275c;eip=0x0000fd; 	T(CLC);	// 85619 clc ;~ 275C:00FD
cs=0x275c;eip=0x0000fe; 	X(POP(bp));	// 85620 pop     bp ;~ 275C:00FE
cs=0x275c;eip=0x0000ff; 	R(RETN(0));	// 85621 retn ;~ 275C:00FF
loc_35ca0:
	// 9887 
cs=0x275c;eip=0x000100; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 85626 mov     ax, es:[bx+0Ah] ;~ 275C:0100
cs=0x275c;eip=0x000104; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C))));	// 85627 mov     dx, es:[bx+0Ch] ;~ 275C:0104
cs=0x275c;eip=0x000108; 	T(ADD(ax, cx));	// 85628 add     ax, cx ;~ 275C:0108
cs=0x275c;eip=0x00010a; 	T(ADC(dx, bp));	// 85629 adc     dx, bp ;~ 275C:010A
cs=0x275c;eip=0x00010c; 	T(CMP(*(dw*)((&unk_570d0)), dx));	// 85630 cmp     word ptr unk_570D0, dx ;~ 275C:010C
cs=0x275c;eip=0x000110; 	R(JLE(loc_35cbb));	// 85631 jle     short loc_35CBB ;~ 275C:0110
cs=0x275c;eip=0x000112; 	T(CMP(*(dw*)((&unk_570dc)), dx));	// 85632 cmp     word ptr unk_570DC, dx ;~ 275C:0112
cs=0x275c;eip=0x000116; 	R(JLE(loc_35cbb));	// 85633 jle     short loc_35CBB ;~ 275C:0116
cs=0x275c;eip=0x000118; 	T(CLC);	// 85634 clc ;~ 275C:0118
cs=0x275c;eip=0x000119; 	X(POP(bp));	// 85635 pop     bp ;~ 275C:0119
cs=0x275c;eip=0x00011a; 	R(RETN(0));	// 85636 retn ;~ 275C:011A
loc_35cbb:
	// 9888 
cs=0x275c;eip=0x00011b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E))));	// 85641 mov     ax, es:[bx+0Eh] ;~ 275C:011B
cs=0x275c;eip=0x00011f; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x10))));	// 85642 mov     dx, es:[bx+10h] ;~ 275C:011F
cs=0x275c;eip=0x000123; 	T(SUB(ax, cx));	// 85643 sub     ax, cx ;~ 275C:0123
cs=0x275c;eip=0x000125; 	T(SBB(dx, bp));	// 85644 sbb     dx, bp ;~ 275C:0125
cs=0x275c;eip=0x000127; 	T(CMP(*(dw*)((&unk_570ce)), dx));	// 85645 cmp     word ptr unk_570CE, dx ;~ 275C:0127
cs=0x275c;eip=0x00012b; 	R(JGE(loc_35cd6));	// 85646 jge     short loc_35CD6 ;~ 275C:012B
cs=0x275c;eip=0x00012d; 	T(CMP(*(dw*)((&unk_570e2)), dx));	// 85647 cmp     word ptr unk_570E2, dx ;~ 275C:012D
cs=0x275c;eip=0x000131; 	R(JGE(loc_35cd6));	// 85648 jge     short loc_35CD6 ;~ 275C:0131
cs=0x275c;eip=0x000133; 	T(CLC);	// 85649 clc ;~ 275C:0133
cs=0x275c;eip=0x000134; 	X(POP(bp));	// 85650 pop     bp ;~ 275C:0134
cs=0x275c;eip=0x000135; 	R(RETN(0));	// 85651 retn ;~ 275C:0135
loc_35cd6:
	// 9889 
cs=0x275c;eip=0x000136; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E))));	// 85656 mov     ax, es:[bx+0Eh] ;~ 275C:0136
cs=0x275c;eip=0x00013a; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x10))));	// 85657 mov     dx, es:[bx+10h] ;~ 275C:013A
cs=0x275c;eip=0x00013e; 	T(ADD(ax, cx));	// 85658 add     ax, cx ;~ 275C:013E
cs=0x275c;eip=0x000140; 	T(ADC(dx, bp));	// 85659 adc     dx, bp ;~ 275C:0140
cs=0x275c;eip=0x000142; 	T(CMP(*(dw*)((&unk_570d4)), dx));	// 85660 cmp     word ptr unk_570D4, dx ;~ 275C:0142
cs=0x275c;eip=0x000146; 	R(JLE(loc_35cf1));	// 85661 jle     short loc_35CF1 ;~ 275C:0146
cs=0x275c;eip=0x000148; 	T(CMP(*(dw*)((&unk_570e0)), dx));	// 85662 cmp     word ptr unk_570E0, dx ;~ 275C:0148
cs=0x275c;eip=0x00014c; 	R(JLE(loc_35cf1));	// 85663 jle     short loc_35CF1 ;~ 275C:014C
cs=0x275c;eip=0x00014e; 	T(CLC);	// 85664 clc ;~ 275C:014E
cs=0x275c;eip=0x00014f; 	X(POP(bp));	// 85665 pop     bp ;~ 275C:014F
cs=0x275c;eip=0x000150; 	R(RETN(0));	// 85666 retn ;~ 275C:0150
loc_35cf1:
	// 9890 
cs=0x275c;eip=0x000151; 	T(STC);	// 85671 stc ;~ 275C:0151
cs=0x275c;eip=0x000152; 	X(POP(bp));	// 85672 pop     bp ;~ 275C:0152
cs=0x275c;eip=0x000153; 	R(RETN(0));	// 85673 retn ;~ 275C:0153
sub_35cf4:
	// 85681 
#undef arg_0
#define arg_0 6
	// 85684 arg_0           = byte ptr  6 ;~ 275C:0154
#undef arg_2
#define arg_2 8
	// 85685 arg_2           = byte ptr  8 ;~ 275C:0154
#undef arg_4
#define arg_4 0x0A
	// 85686 arg_4           = byte ptr  0Ah ;~ 275C:0154
#undef arg_6
#define arg_6 0x0C
	// 85687 arg_6           = byte ptr  0Ch ;~ 275C:0154
#undef arg_8
#define arg_8 0x0E
	// 85688 arg_8           = word ptr  0Eh ;~ 275C:0154
#undef arg_a
#define arg_a 0x10
	// 85689 arg_A           = word ptr  10h ;~ 275C:0154
#undef arg_c
#define arg_c 0x12
	// 85690 arg_C           = word ptr  12h ;~ 275C:0154
#undef arg_e
#define arg_e 0x14
	// 85691 arg_E           = word ptr  14h ;~ 275C:0154
#undef arg_10
#define arg_10 0x16
	// 85692 arg_10          = dword ptr  16h ;~ 275C:0154
#undef arg_14
#define arg_14 0x1A
	// 85693 arg_14          = dword ptr  1Ah ;~ 275C:0154
#undef arg_18
#define arg_18 0x1E
	// 85694 arg_18          = word ptr  1Eh ;~ 275C:0154
cs=0x275c;eip=0x000154; 	X(PUSH(bp));	// 85696 push    bp ;~ 275C:0154
cs=0x275c;eip=0x000155; 	T(MOV(bp, sp));	// 85697 mov     bp, sp ;~ 275C:0155
cs=0x275c;eip=0x000157; 	X(PUSH(si));	// 85698 push    si ;~ 275C:0157
cs=0x275c;eip=0x000158; 	X(PUSH(di));	// 85699 push    di ;~ 275C:0158
cs=0x275c;eip=0x000159; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_18))));	// 85700 mov     ax, [bp+arg_18] ;~ 275C:0159
cs=0x275c;eip=0x00015c; 	X(MOV(*(dw*)((&unk_570ca)), ax));	// 85701 mov     word ptr unk_570CA, ax ;~ 275C:015C
cs=0x275c;eip=0x00015f; 	T(MOV(ax, ds));	// 85702 mov     ax, ds ;~ 275C:015F
cs=0x275c;eip=0x000161; 	T(MOV(es, ax));	// 85703 mov     es, ax ;~ 275C:0161
cs=0x275c;eip=0x000163; 	T(LDS(si, *(dd*)(raddr(ss,bp+arg_14))));	// 85705 lds     si, [bp+arg_14] ;~ 275C:0163
cs=0x275c;eip=0x000166; 	T(MOV(di, 0x268E));	// 85706 mov     di, 268Eh ;~ 275C:0166
cs=0x275c;eip=0x000169; 	T(MOV(cx, 6));	// 85707 mov     cx, 6 ;~ 275C:0169
	// 85708 rep movsw ;~ 275C:016C
cs=0x275c;eip=0x00016c; 	X(	REP MOVSW);	// 85708 rep movsw ;~ 275C:016C
cs=0x275c;eip=0x00016e; 	T(LDS(si, *(dd*)(raddr(ss,bp+arg_10))));	// 85709 lds     si, [bp+arg_10] ;~ 275C:016E
cs=0x275c;eip=0x000171; 	T(MOV(di, 0x269A));	// 85710 mov     di, 269Ah ;~ 275C:0171
cs=0x275c;eip=0x000174; 	T(MOV(cx, 6));	// 85711 mov     cx, 6 ;~ 275C:0174
	// 85712 rep movsw ;~ 275C:0177
cs=0x275c;eip=0x000177; 	X(	REP MOVSW);	// 85712 rep movsw ;~ 275C:0177
cs=0x275c;eip=0x000179; 	T(MOV(ds, ax));	// 85713 mov     ds, ax ;~ 275C:0179
cs=0x275c;eip=0x00017b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_c))));	// 85714 mov     ax, [bp+arg_C] ;~ 275C:017B
cs=0x275c;eip=0x00017e; 	X(MOV(*(dw*)((&unk_570c6)), ax));	// 85715 mov     word ptr unk_570C6, ax ;~ 275C:017E
cs=0x275c;eip=0x000181; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_e))));	// 85716 mov     ax, [bp+arg_E] ;~ 275C:0181
cs=0x275c;eip=0x000184; 	X(MOV(*(dw*)((&unk_570c8)), ax));	// 85717 mov     word ptr unk_570C8, ax ;~ 275C:0184
cs=0x275c;eip=0x000187; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 85718 mov     ax, [bp+arg_A] ;~ 275C:0187
cs=0x275c;eip=0x00018a; 	X(MOV(*(dw*)((&unk_570e4)), ax));	// 85719 mov     word ptr unk_570E4, ax ;~ 275C:018A
cs=0x275c;eip=0x00018d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 85720 mov     ax, [bp+arg_8] ;~ 275C:018D
cs=0x275c;eip=0x000190; 	T(OR(ax, 1));	// 85721 or      ax, 1 ;~ 275C:0190
cs=0x275c;eip=0x000193; 	X(MOV(*(dw*)((&unk_570c4)), ax));	// 85722 mov     word ptr unk_570C4, ax ;~ 275C:0193
cs=0x275c;eip=0x000196; 	T(MOV(al, *(raddr(ss,bp+arg_6))));	// 85723 mov     al, [bp+arg_6] ;~ 275C:0196
cs=0x275c;eip=0x000199; 	X(MOV(unk_570fe, al));	// 85724 mov     byte ptr unk_570FE, al ;~ 275C:0199
cs=0x275c;eip=0x00019c; 	T(MOV(dx, *(dw*)((&unk_4a03e))));	// 85725 mov     dx, word ptr unk_4A03E ;~ 275C:019C
cs=0x275c;eip=0x0001a0; 	T(MOV(ax, *(dw*)((&unk_4a040))));	// 85726 mov     ax, word ptr unk_4A040 ;~ 275C:01A0
cs=0x275c;eip=0x0001a3; 	T(MOV(dl, dh));	// 85727 mov     dl, dh ;~ 275C:01A3
cs=0x275c;eip=0x0001a5; 	T(MOV(dh, al));	// 85728 mov     dh, al ;~ 275C:01A5
cs=0x275c;eip=0x0001a7; 	T(MOV(al, ah));	// 85729 mov     al, ah ;~ 275C:01A7
cs=0x275c;eip=0x0001a9; 	T(CBW);	// 85730 cbw ;~ 275C:01A9
cs=0x275c;eip=0x0001aa; 	X(MOV(*(dw*)((&unk_570e6)), dx));	// 85731 mov     word ptr unk_570E6, dx ;~ 275C:01AA
cs=0x275c;eip=0x0001ae; 	X(MOV(*(dw*)((&unk_570e8)), ax));	// 85732 mov     word ptr unk_570E8, ax ;~ 275C:01AE
cs=0x275c;eip=0x0001b1; 	T(MOV(dx, *(dw*)((&unk_4a042))));	// 85733 mov     dx, word ptr unk_4A042 ;~ 275C:01B1
cs=0x275c;eip=0x0001b5; 	T(MOV(ax, *(dw*)((&unk_4a044))));	// 85734 mov     ax, word ptr unk_4A044 ;~ 275C:01B5
cs=0x275c;eip=0x0001b8; 	T(MOV(dl, dh));	// 85735 mov     dl, dh ;~ 275C:01B8
cs=0x275c;eip=0x0001ba; 	T(MOV(dh, al));	// 85736 mov     dh, al ;~ 275C:01BA
cs=0x275c;eip=0x0001bc; 	T(MOV(al, ah));	// 85737 mov     al, ah ;~ 275C:01BC
cs=0x275c;eip=0x0001be; 	T(CBW);	// 85738 cbw ;~ 275C:01BE
cs=0x275c;eip=0x0001bf; 	X(MOV(*(dw*)((&unk_570ea)), dx));	// 85739 mov     word ptr unk_570EA, dx ;~ 275C:01BF
cs=0x275c;eip=0x0001c3; 	X(MOV(*(dw*)((&unk_570ec)), ax));	// 85740 mov     word ptr unk_570EC, ax ;~ 275C:01C3
cs=0x275c;eip=0x0001c6; 	T(MOV(dx, *(dw*)((&unk_4a046))));	// 85741 mov     dx, word ptr unk_4A046 ;~ 275C:01C6
cs=0x275c;eip=0x0001ca; 	T(MOV(ax, *(dw*)((&unk_4a048))));	// 85742 mov     ax, word ptr unk_4A048 ;~ 275C:01CA
cs=0x275c;eip=0x0001cd; 	T(MOV(dl, dh));	// 85743 mov     dl, dh ;~ 275C:01CD
cs=0x275c;eip=0x0001cf; 	T(MOV(dh, al));	// 85744 mov     dh, al ;~ 275C:01CF
cs=0x275c;eip=0x0001d1; 	T(MOV(al, ah));	// 85745 mov     al, ah ;~ 275C:01D1
cs=0x275c;eip=0x0001d3; 	T(CBW);	// 85746 cbw ;~ 275C:01D3
cs=0x275c;eip=0x0001d4; 	X(MOV(*(dw*)((&unk_570ee)), dx));	// 85747 mov     word ptr unk_570EE, dx ;~ 275C:01D4
cs=0x275c;eip=0x0001d8; 	X(MOV(*(dw*)((&unk_570f0)), ax));	// 85748 mov     word ptr unk_570F0, ax ;~ 275C:01D8
cs=0x275c;eip=0x0001db; 	T(MOV(dx, *(dw*)((&unk_4a04a))));	// 85749 mov     dx, word ptr unk_4A04A ;~ 275C:01DB
cs=0x275c;eip=0x0001df; 	T(MOV(ax, *(dw*)((&unk_4a04c))));	// 85750 mov     ax, word ptr unk_4A04C ;~ 275C:01DF
cs=0x275c;eip=0x0001e2; 	T(MOV(dl, dh));	// 85751 mov     dl, dh ;~ 275C:01E2
cs=0x275c;eip=0x0001e4; 	T(MOV(dh, al));	// 85752 mov     dh, al ;~ 275C:01E4
cs=0x275c;eip=0x0001e6; 	T(MOV(al, ah));	// 85753 mov     al, ah ;~ 275C:01E6
cs=0x275c;eip=0x0001e8; 	T(CBW);	// 85754 cbw ;~ 275C:01E8
cs=0x275c;eip=0x0001e9; 	X(MOV(*(dw*)((&unk_570f2)), dx));	// 85755 mov     word ptr unk_570F2, dx ;~ 275C:01E9
cs=0x275c;eip=0x0001ed; 	X(MOV(*(dw*)((&unk_570f4)), ax));	// 85756 mov     word ptr unk_570F4, ax ;~ 275C:01ED
cs=0x275c;eip=0x0001f0; 	T(MOV(dx, *(dw*)((&unk_4a04e))));	// 85757 mov     dx, word ptr unk_4A04E ;~ 275C:01F0
cs=0x275c;eip=0x0001f4; 	T(MOV(ax, *(dw*)((&unk_4a050))));	// 85758 mov     ax, word ptr unk_4A050 ;~ 275C:01F4
cs=0x275c;eip=0x0001f7; 	T(MOV(dl, dh));	// 85759 mov     dl, dh ;~ 275C:01F7
cs=0x275c;eip=0x0001f9; 	T(MOV(dh, al));	// 85760 mov     dh, al ;~ 275C:01F9
cs=0x275c;eip=0x0001fb; 	T(MOV(al, ah));	// 85761 mov     al, ah ;~ 275C:01FB
cs=0x275c;eip=0x0001fd; 	T(CBW);	// 85762 cbw ;~ 275C:01FD
cs=0x275c;eip=0x0001fe; 	X(MOV(*(dw*)((&unk_570f6)), dx));	// 85763 mov     word ptr unk_570F6, dx ;~ 275C:01FE
cs=0x275c;eip=0x000202; 	X(MOV(*(dw*)((&unk_570f8)), ax));	// 85764 mov     word ptr unk_570F8, ax ;~ 275C:0202
cs=0x275c;eip=0x000205; 	T(MOV(dx, *(dw*)((&unk_4a052))));	// 85765 mov     dx, word ptr unk_4A052 ;~ 275C:0205
cs=0x275c;eip=0x000209; 	T(MOV(ax, *(dw*)((&unk_4a054))));	// 85766 mov     ax, word ptr unk_4A054 ;~ 275C:0209
cs=0x275c;eip=0x00020c; 	T(MOV(dl, dh));	// 85767 mov     dl, dh ;~ 275C:020C
cs=0x275c;eip=0x00020e; 	T(MOV(dh, al));	// 85768 mov     dh, al ;~ 275C:020E
cs=0x275c;eip=0x000210; 	T(MOV(al, ah));	// 85769 mov     al, ah ;~ 275C:0210
cs=0x275c;eip=0x000212; 	T(CBW);	// 85770 cbw ;~ 275C:0212
cs=0x275c;eip=0x000213; 	X(MOV(*(dw*)((&unk_570fa)), dx));	// 85771 mov     word ptr unk_570FA, dx ;~ 275C:0213
cs=0x275c;eip=0x000217; 	X(MOV(*(dw*)((&unk_570fc)), ax));	// 85772 mov     word ptr unk_570FC, ax ;~ 275C:0217
cs=0x275c;eip=0x00021a; 	T(MOV(bx, *(dw*)((&unk_570c6))));	// 85773 mov     bx, word ptr unk_570C6 ;~ 275C:021A
cs=0x275c;eip=0x00021e; 	T(MOV(cx, *(dw*)((&unk_570c8))));	// 85774 mov     cx, word ptr unk_570C8 ;~ 275C:021E
cs=0x275c;eip=0x000222; 	T(MOV(ax, *(dw*)((&unk_4a03e))));	// 85775 mov     ax, word ptr unk_4A03E ;~ 275C:0222
cs=0x275c;eip=0x000225; 	T(MOV(dx, *(dw*)((&unk_4a040))));	// 85776 mov     dx, word ptr unk_4A040 ;~ 275C:0225
cs=0x275c;eip=0x000229; 	T(SUB(ax, bx));	// 85777 sub     ax, bx ;~ 275C:0229
cs=0x275c;eip=0x00022b; 	T(SBB(dx, cx));	// 85778 sbb     dx, cx ;~ 275C:022B
cs=0x275c;eip=0x00022d; 	X(MOV(*(dw*)((&unk_570cc)), dx));	// 85779 mov     word ptr unk_570CC, dx ;~ 275C:022D
cs=0x275c;eip=0x000231; 	T(MOV(ax, *(dw*)((&unk_4a03e))));	// 85780 mov     ax, word ptr unk_4A03E ;~ 275C:0231
cs=0x275c;eip=0x000234; 	T(MOV(dx, *(dw*)((&unk_4a040))));	// 85781 mov     dx, word ptr unk_4A040 ;~ 275C:0234
cs=0x275c;eip=0x000238; 	T(ADD(ax, bx));	// 85782 add     ax, bx ;~ 275C:0238
cs=0x275c;eip=0x00023a; 	T(ADC(dx, cx));	// 85783 adc     dx, cx ;~ 275C:023A
cs=0x275c;eip=0x00023c; 	X(MOV(*(dw*)((&unk_570ce)), dx));	// 85784 mov     word ptr unk_570CE, dx ;~ 275C:023C
cs=0x275c;eip=0x000240; 	T(MOV(ax, *(dw*)((&unk_4a042))));	// 85785 mov     ax, word ptr unk_4A042 ;~ 275C:0240
cs=0x275c;eip=0x000243; 	T(MOV(dx, *(dw*)((&unk_4a044))));	// 85786 mov     dx, word ptr unk_4A044 ;~ 275C:0243
cs=0x275c;eip=0x000247; 	T(SUB(ax, bx));	// 85787 sub     ax, bx ;~ 275C:0247
cs=0x275c;eip=0x000249; 	T(SBB(dx, cx));	// 85788 sbb     dx, cx ;~ 275C:0249
cs=0x275c;eip=0x00024b; 	X(MOV(*(dw*)((&unk_570d0)), dx));	// 85789 mov     word ptr unk_570D0, dx ;~ 275C:024B
cs=0x275c;eip=0x00024f; 	T(MOV(ax, *(dw*)((&unk_4a042))));	// 85790 mov     ax, word ptr unk_4A042 ;~ 275C:024F
cs=0x275c;eip=0x000252; 	T(MOV(dx, *(dw*)((&unk_4a044))));	// 85791 mov     dx, word ptr unk_4A044 ;~ 275C:0252
cs=0x275c;eip=0x000256; 	T(ADD(ax, bx));	// 85792 add     ax, bx ;~ 275C:0256
cs=0x275c;eip=0x000258; 	T(ADC(dx, cx));	// 85793 adc     dx, cx ;~ 275C:0258
cs=0x275c;eip=0x00025a; 	X(MOV(*(dw*)((&unk_570d2)), dx));	// 85794 mov     word ptr unk_570D2, dx ;~ 275C:025A
cs=0x275c;eip=0x00025e; 	T(MOV(ax, *(dw*)((&unk_4a046))));	// 85795 mov     ax, word ptr unk_4A046 ;~ 275C:025E
cs=0x275c;eip=0x000261; 	T(MOV(dx, *(dw*)((&unk_4a048))));	// 85796 mov     dx, word ptr unk_4A048 ;~ 275C:0261
cs=0x275c;eip=0x000265; 	T(SUB(ax, bx));	// 85797 sub     ax, bx ;~ 275C:0265
cs=0x275c;eip=0x000267; 	T(SBB(dx, cx));	// 85798 sbb     dx, cx ;~ 275C:0267
cs=0x275c;eip=0x000269; 	X(MOV(*(dw*)((&unk_570d4)), dx));	// 85799 mov     word ptr unk_570D4, dx ;~ 275C:0269
cs=0x275c;eip=0x00026d; 	T(MOV(ax, *(dw*)((&unk_4a046))));	// 85800 mov     ax, word ptr unk_4A046 ;~ 275C:026D
cs=0x275c;eip=0x000270; 	T(MOV(dx, *(dw*)((&unk_4a048))));	// 85801 mov     dx, word ptr unk_4A048 ;~ 275C:0270
cs=0x275c;eip=0x000274; 	T(ADD(ax, bx));	// 85802 add     ax, bx ;~ 275C:0274
cs=0x275c;eip=0x000276; 	T(ADC(dx, cx));	// 85803 adc     dx, cx ;~ 275C:0276
cs=0x275c;eip=0x000278; 	X(MOV(*(dw*)((&unk_570d6)), dx));	// 85804 mov     word ptr unk_570D6, dx ;~ 275C:0278
cs=0x275c;eip=0x00027c; 	T(MOV(ax, *(dw*)((&unk_4a04a))));	// 85805 mov     ax, word ptr unk_4A04A ;~ 275C:027C
cs=0x275c;eip=0x00027f; 	T(MOV(dx, *(dw*)((&unk_4a04c))));	// 85806 mov     dx, word ptr unk_4A04C ;~ 275C:027F
cs=0x275c;eip=0x000283; 	T(SUB(ax, bx));	// 85807 sub     ax, bx ;~ 275C:0283
cs=0x275c;eip=0x000285; 	T(SBB(dx, cx));	// 85808 sbb     dx, cx ;~ 275C:0285
cs=0x275c;eip=0x000287; 	X(MOV(*(dw*)((&unk_570d8)), dx));	// 85809 mov     word ptr unk_570D8, dx ;~ 275C:0287
cs=0x275c;eip=0x00028b; 	T(MOV(ax, *(dw*)((&unk_4a04a))));	// 85810 mov     ax, word ptr unk_4A04A ;~ 275C:028B
cs=0x275c;eip=0x00028e; 	T(MOV(dx, *(dw*)((&unk_4a04c))));	// 85811 mov     dx, word ptr unk_4A04C ;~ 275C:028E
cs=0x275c;eip=0x000292; 	T(ADD(ax, bx));	// 85812 add     ax, bx ;~ 275C:0292
cs=0x275c;eip=0x000294; 	T(ADC(dx, cx));	// 85813 adc     dx, cx ;~ 275C:0294
cs=0x275c;eip=0x000296; 	X(MOV(*(dw*)((&unk_570da)), dx));	// 85814 mov     word ptr unk_570DA, dx ;~ 275C:0296
cs=0x275c;eip=0x00029a; 	T(MOV(ax, *(dw*)((&unk_4a04e))));	// 85815 mov     ax, word ptr unk_4A04E ;~ 275C:029A
cs=0x275c;eip=0x00029d; 	T(MOV(dx, *(dw*)((&unk_4a050))));	// 85816 mov     dx, word ptr unk_4A050 ;~ 275C:029D
cs=0x275c;eip=0x0002a1; 	T(SUB(ax, bx));	// 85817 sub     ax, bx ;~ 275C:02A1
cs=0x275c;eip=0x0002a3; 	T(SBB(dx, cx));	// 85818 sbb     dx, cx ;~ 275C:02A3
cs=0x275c;eip=0x0002a5; 	X(MOV(*(dw*)((&unk_570dc)), dx));	// 85819 mov     word ptr unk_570DC, dx ;~ 275C:02A5
cs=0x275c;eip=0x0002a9; 	T(MOV(ax, *(dw*)((&unk_4a04e))));	// 85820 mov     ax, word ptr unk_4A04E ;~ 275C:02A9
cs=0x275c;eip=0x0002ac; 	T(MOV(dx, *(dw*)((&unk_4a050))));	// 85821 mov     dx, word ptr unk_4A050 ;~ 275C:02AC
cs=0x275c;eip=0x0002b0; 	T(ADD(ax, bx));	// 85822 add     ax, bx ;~ 275C:02B0
cs=0x275c;eip=0x0002b2; 	T(ADC(dx, cx));	// 85823 adc     dx, cx ;~ 275C:02B2
cs=0x275c;eip=0x0002b4; 	X(MOV(*(dw*)((&unk_570de)), dx));	// 85824 mov     word ptr unk_570DE, dx ;~ 275C:02B4
cs=0x275c;eip=0x0002b8; 	T(MOV(ax, *(dw*)((&unk_4a052))));	// 85825 mov     ax, word ptr unk_4A052 ;~ 275C:02B8
cs=0x275c;eip=0x0002bb; 	T(MOV(dx, *(dw*)((&unk_4a054))));	// 85826 mov     dx, word ptr unk_4A054 ;~ 275C:02BB
cs=0x275c;eip=0x0002bf; 	T(SUB(ax, bx));	// 85827 sub     ax, bx ;~ 275C:02BF
cs=0x275c;eip=0x0002c1; 	T(SBB(dx, cx));	// 85828 sbb     dx, cx ;~ 275C:02C1
cs=0x275c;eip=0x0002c3; 	X(MOV(*(dw*)((&unk_570e0)), dx));	// 85829 mov     word ptr unk_570E0, dx ;~ 275C:02C3
cs=0x275c;eip=0x0002c7; 	T(MOV(ax, *(dw*)((&unk_4a052))));	// 85830 mov     ax, word ptr unk_4A052 ;~ 275C:02C7
cs=0x275c;eip=0x0002ca; 	T(MOV(dx, *(dw*)((&unk_4a054))));	// 85831 mov     dx, word ptr unk_4A054 ;~ 275C:02CA
cs=0x275c;eip=0x0002ce; 	T(ADD(ax, bx));	// 85832 add     ax, bx ;~ 275C:02CE
cs=0x275c;eip=0x0002d0; 	T(ADC(dx, cx));	// 85833 adc     dx, cx ;~ 275C:02D0
cs=0x275c;eip=0x0002d2; 	X(MOV(*(dw*)((&unk_570e2)), dx));	// 85834 mov     word ptr unk_570E2, dx ;~ 275C:02D2
cs=0x275c;eip=0x0002d6; 	T(CMP(*(dw*)((&unk_570c4)), 0x1001));	// 85835 cmp     word ptr unk_570C4, 1001h ;~ 275C:02D6
cs=0x275c;eip=0x0002dc; 	R(JNZ(loc_35eac));	// 85836 jnz     short loc_35EAC ;~ 275C:02DC
cs=0x275c;eip=0x0002de; 	T(XOR(bx, bx));	// 85837 xor     bx, bx ;~ 275C:02DE
cs=0x275c;eip=0x0002e0; 	T(MOV(cx, *(dw*)((&unk_4a040))));	// 85838 mov     cx, word ptr unk_4A040 ;~ 275C:02E0
cs=0x275c;eip=0x0002e4; 	T(MOV(dx, *(dw*)((&unk_4a048))));	// 85839 mov     dx, word ptr unk_4A048 ;~ 275C:02E4
cs=0x275c;eip=0x0002e8; 	T(MOV(ds, *(dw*)((&unk_570bc))));	// 85840 mov     ds, word ptr unk_570BC ;~ 275C:02E8
cs=0x275c;eip=0x0002ec; 	R(CALL(sub_36891,0));	// 85841 call    sub_36891 ;~ 275C:02EC
cs=0x275c;eip=0x0002ef; 	T(MOV(si, ax));	// 85842 mov     si, ax ;~ 275C:02EF
cs=0x275c;eip=0x0002f1; 	T(XOR(bx, bx));	// 85843 xor     bx, bx ;~ 275C:02F1
cs=0x275c;eip=0x0002f3; 	T(MOV(cx, *(dw*)((&unk_4a04c))));	// 85844 mov     cx, word ptr unk_4A04C ;~ 275C:02F3
cs=0x275c;eip=0x0002f7; 	T(MOV(dx, *(dw*)((&unk_4a054))));	// 85845 mov     dx, word ptr unk_4A054 ;~ 275C:02F7
cs=0x275c;eip=0x0002fb; 	T(MOV(ds, *(dw*)((&unk_570bc))));	// 85846 mov     ds, word ptr unk_570BC ;~ 275C:02FB
cs=0x275c;eip=0x0002ff; 	R(CALL(sub_36891,0));	// 85847 call    sub_36891 ;~ 275C:02FF
cs=0x275c;eip=0x000302; 	T(MOV(di, ax));	// 85848 mov     di, ax ;~ 275C:0302
cs=0x275c;eip=0x000304; 	T(MOV(ax, *(dw*)((&unk_570bc))));	// 85849 mov     ax, word ptr unk_570BC ;~ 275C:0304
cs=0x275c;eip=0x000307; 	X(MOV(*(dw*)((&unk_4a056)), ax));	// 85850 mov     word ptr unk_4A056, ax ;~ 275C:0307
cs=0x275c;eip=0x00030a; 	R(JMP(loc_35eeb));	// 85851 jmp     short loc_35EEB ;~ 275C:030A
loc_35eac:
	// 9891 
cs=0x275c;eip=0x00030c; 	T(CMP(*(dw*)((&unk_570c4)), 0x101));	// 85855 cmp     word ptr unk_570C4, 101h ;~ 275C:030C
cs=0x275c;eip=0x000312; 	R(JNZ(loc_35ee2));	// 85856 jnz     short loc_35EE2 ;~ 275C:0312
cs=0x275c;eip=0x000314; 	T(XOR(bx, bx));	// 85857 xor     bx, bx ;~ 275C:0314
cs=0x275c;eip=0x000316; 	T(MOV(cx, *(dw*)((&unk_4a040))));	// 85858 mov     cx, word ptr unk_4A040 ;~ 275C:0316
cs=0x275c;eip=0x00031a; 	T(MOV(dx, *(dw*)((&unk_4a048))));	// 85859 mov     dx, word ptr unk_4A048 ;~ 275C:031A
cs=0x275c;eip=0x00031e; 	T(MOV(ds, *(dw*)((&unk_570be))));	// 85860 mov     ds, word ptr unk_570BE ;~ 275C:031E
cs=0x275c;eip=0x000322; 	R(CALL(sub_36891,0));	// 85861 call    sub_36891 ;~ 275C:0322
cs=0x275c;eip=0x000325; 	T(MOV(si, ax));	// 85862 mov     si, ax ;~ 275C:0325
cs=0x275c;eip=0x000327; 	T(XOR(bx, bx));	// 85863 xor     bx, bx ;~ 275C:0327
cs=0x275c;eip=0x000329; 	T(MOV(cx, *(dw*)((&unk_4a04c))));	// 85864 mov     cx, word ptr unk_4A04C ;~ 275C:0329
cs=0x275c;eip=0x00032d; 	T(MOV(dx, *(dw*)((&unk_4a054))));	// 85865 mov     dx, word ptr unk_4A054 ;~ 275C:032D
cs=0x275c;eip=0x000331; 	T(MOV(ds, *(dw*)((&unk_570be))));	// 85866 mov     ds, word ptr unk_570BE ;~ 275C:0331
cs=0x275c;eip=0x000335; 	R(CALL(sub_36891,0));	// 85867 call    sub_36891 ;~ 275C:0335
cs=0x275c;eip=0x000338; 	T(MOV(di, ax));	// 85868 mov     di, ax ;~ 275C:0338
cs=0x275c;eip=0x00033a; 	T(MOV(ax, *(dw*)((&unk_570be))));	// 85869 mov     ax, word ptr unk_570BE ;~ 275C:033A
cs=0x275c;eip=0x00033d; 	X(MOV(*(dw*)((&unk_4a056)), ax));	// 85870 mov     word ptr unk_4A056, ax ;~ 275C:033D
cs=0x275c;eip=0x000340; 	R(JMP(loc_35eeb));	// 85871 jmp     short loc_35EEB ;~ 275C:0340
loc_35ee2:
	// 9892 
cs=0x275c;eip=0x000342; 	T(MOV(ax, 0x31));	// 85875 mov     ax, 31h ; '1' ;~ 275C:0342
cs=0x275c;eip=0x000345; 	X(PUSH(ax));	// 85876 push    ax ;~ 275C:0345
cs=0x275c;eip=0x000346; 	R(CALLF(sub_2f838,0));	// 85877 call    sub_2F838 ;~ 275C:0346
loc_35eeb:
	// 9893 
cs=0x275c;eip=0x00034b; 	X(PUSH(*(dw*)((&unk_4a056))));	// 85882 push    word ptr unk_4A056 ;~ 275C:034B
cs=0x275c;eip=0x00034f; 	X(PUSH(si));	// 85883 push    si ;~ 275C:034F
cs=0x275c;eip=0x000350; 	R(CALL(sub_36723,0));	// 85884 call    sub_36723 ;~ 275C:0350
cs=0x275c;eip=0x000353; 	T(OR(ax, ax));	// 85885 or      ax, ax ;~ 275C:0353
cs=0x275c;eip=0x000355; 	R(JNZ(loc_35f60));	// 85886 jnz     short loc_35F60 ;~ 275C:0355
cs=0x275c;eip=0x000357; 	T(CMP(si, di));	// 85887 cmp     si, di ;~ 275C:0357
cs=0x275c;eip=0x000359; 	R(JZ(loc_35f07));	// 85888 jz      short loc_35F07 ;~ 275C:0359
cs=0x275c;eip=0x00035b; 	X(PUSH(*(dw*)((&unk_4a056))));	// 85889 push    word ptr unk_4A056 ;~ 275C:035B
cs=0x275c;eip=0x00035f; 	X(PUSH(di));	// 85890 push    di ;~ 275C:035F
cs=0x275c;eip=0x000360; 	R(CALL(sub_36723,0));	// 85891 call    sub_36723 ;~ 275C:0360
cs=0x275c;eip=0x000363; 	T(OR(ax, ax));	// 85892 or      ax, ax ;~ 275C:0363
cs=0x275c;eip=0x000365; 	R(JNZ(loc_35f60));	// 85893 jnz     short loc_35F60 ;~ 275C:0365
loc_35f07:
	// 9894 
cs=0x275c;eip=0x000367; 	T(CMP(*(raddr(ss,bp+arg_2)), 0));	// 85896 cmp     [bp+arg_2], 0 ;~ 275C:0367
cs=0x275c;eip=0x00036b; 	R(JZ(loc_35f18));	// 85897 jz      short loc_35F18 ;~ 275C:036B
cs=0x275c;eip=0x00036d; 	X(PUSH(*(dw*)((&unk_47a9c))));	// 85898 push    word ptr unk_47A9C ;~ 275C:036D
cs=0x275c;eip=0x000371; 	R(CALL(sub_367e0,0));	// 85899 call    sub_367E0 ;~ 275C:0371
cs=0x275c;eip=0x000374; 	T(OR(ax, ax));	// 85900 or      ax, ax ;~ 275C:0374
cs=0x275c;eip=0x000376; 	R(JNZ(loc_35f60));	// 85901 jnz     short loc_35F60 ;~ 275C:0376
loc_35f18:
	// 9895 
cs=0x275c;eip=0x000378; 	T(CMP(*(raddr(ss,bp+arg_0)), 0));	// 85904 cmp     [bp+arg_0], 0 ;~ 275C:0378
cs=0x275c;eip=0x00037c; 	R(JZ(loc_35f4e));	// 85905 jz      short loc_35F4E ;~ 275C:037C
cs=0x275c;eip=0x00037e; 	T(MOV(si, *(dw*)((&unk_56dcc))));	// 85906 mov     si, word ptr unk_56DCC ;~ 275C:037E
cs=0x275c;eip=0x000382; 	T(OR(si, si));	// 85907 or      si, si ;~ 275C:0382
cs=0x275c;eip=0x000384; 	R(JZ(loc_35f4e));	// 85908 jz      short loc_35F4E ;~ 275C:0384
cs=0x275c;eip=0x000386; 	T(SHL(si, 1));	// 85909 shl     si, 1 ;~ 275C:0386
cs=0x275c;eip=0x000388; 	T(ADD(si, 0x0F410));	// 85910 add     si, 0F410h ;~ 275C:0388
loc_35f2c:
	// 9896 
cs=0x275c;eip=0x00038c; 	T(MOV(di, *(dw*)(raddr(ds,si))));	// 85913 mov     di, [si] ;~ 275C:038C
cs=0x275c;eip=0x00038e; 	T(OR(di, di));	// 85914 or      di, di ;~ 275C:038E
cs=0x275c;eip=0x000390; 	R(JZ(loc_35f45));	// 85915 jz      short loc_35F45 ;~ 275C:0390
cs=0x275c;eip=0x000392; 	T(MOV(es, *(dw*)((&unk_47a9a))));	// 85916 mov     es, word ptr unk_47A9A ;~ 275C:0392
cs=0x275c;eip=0x000396; 	T(MOV(di, *(dw*)(raddr(es,di+2))));	// 85918 mov     di, es:[di+2] ;~ 275C:0396
cs=0x275c;eip=0x00039a; 	T(MOV(bx, di));	// 85919 mov     bx, di ;~ 275C:039A
cs=0x275c;eip=0x00039c; 	R(CALL(sub_360ed,0));	// 85920 call    sub_360ED ;~ 275C:039C
cs=0x275c;eip=0x00039f; 	R(JNC(loc_35f45));	// 85921 jnb     short loc_35F45 ;~ 275C:039F
cs=0x275c;eip=0x0003a1; 	T(MOV(ax, di));	// 85922 mov     ax, di ;~ 275C:03A1
cs=0x275c;eip=0x0003a3; 	R(JMP(loc_35f60));	// 85923 jmp     short loc_35F60 ;~ 275C:03A3
loc_35f45:
	// 9897 
cs=0x275c;eip=0x0003a5; 	T(SUB(si, 2));	// 85928 sub     si, 2 ;~ 275C:03A5
cs=0x275c;eip=0x0003a8; 	T(CMP(si, 0x0F412));	// 85929 cmp     si, 0F412h ;~ 275C:03A8
cs=0x275c;eip=0x0003ac; 	R(JNC(loc_35f2c));	// 85930 jnb     short loc_35F2C ;~ 275C:03AC
loc_35f4e:
	// 9898 
cs=0x275c;eip=0x0003ae; 	T(CMP(*(raddr(ss,bp+arg_4)), 0));	// 85934 cmp     [bp+arg_4], 0 ;~ 275C:03AE
cs=0x275c;eip=0x0003b2; 	R(JZ(loc_35f5e));	// 85935 jz      short loc_35F5E ;~ 275C:03B2
cs=0x275c;eip=0x0003b4; 	R(CALL(sub_36619,0));	// 85936 call    sub_36619 ;~ 275C:03B4
cs=0x275c;eip=0x0003b7; 	R(JNC(loc_35f5e));	// 85937 jnb     short loc_35F5E ;~ 275C:03B7
cs=0x275c;eip=0x0003b9; 	T(MOV(ax, 0x0FFFF));	// 85938 mov     ax, 0FFFFh ;~ 275C:03B9
cs=0x275c;eip=0x0003bc; 	R(JMP(loc_35f60));	// 85939 jmp     short loc_35F60 ;~ 275C:03BC
loc_35f5e:
	// 9899 
cs=0x275c;eip=0x0003be; 	T(XOR(ax, ax));	// 85944 xor     ax, ax ;~ 275C:03BE
loc_35f60:
	// 9900 
cs=0x275c;eip=0x0003c0; 	X(POP(di));	// 85948 pop     di ;~ 275C:03C0
cs=0x275c;eip=0x0003c1; 	X(POP(si));	// 85949 pop     si ;~ 275C:03C1
cs=0x275c;eip=0x0003c2; 	X(POP(bp));	// 85950 pop     bp ;~ 275C:03C2
cs=0x275c;eip=0x0003c3; 	R(RETF(0x1A));	// 85951 retf    1Ah ;~ 275C:03C3
sub_35f66:
	// 85958 
cs=0x275c;eip=0x0003c6; 	T(XOR(bl, bl));	// 85960 xor     bl, bl ;~ 275C:03C6
cs=0x275c;eip=0x0003c8; 	T(MOV(ax, *(dw*)((&unk_4a064))));	// 85961 mov     ax, word ptr unk_4A064 ;~ 275C:03C8
cs=0x275c;eip=0x0003cb; 	T(CMP(ax, *(dw*)((&unk_4a070))));	// 85962 cmp     ax, word ptr unk_4A070 ;~ 275C:03CB
cs=0x275c;eip=0x0003cf; 	R(JGE(loc_35f74));	// 85963 jge     short loc_35F74 ;~ 275C:03CF
cs=0x275c;eip=0x0003d1; 	T(OR(bl, 4));	// 85964 or      bl, 4 ;~ 275C:03D1
loc_35f74:
	// 9901 
cs=0x275c;eip=0x0003d4; 	T(CMP(ax, *(dw*)((&unk_4a072))));	// 85967 cmp     ax, word ptr unk_4A072 ;~ 275C:03D4
cs=0x275c;eip=0x0003d8; 	R(JLE(loc_35f7d));	// 85968 jle     short loc_35F7D ;~ 275C:03D8
cs=0x275c;eip=0x0003da; 	T(OR(bl, 8));	// 85969 or      bl, 8 ;~ 275C:03DA
loc_35f7d:
	// 9902 
cs=0x275c;eip=0x0003dd; 	T(MOV(ax, *(dw*)((&unk_4a066))));	// 85972 mov     ax, word ptr unk_4A066 ;~ 275C:03DD
cs=0x275c;eip=0x0003e0; 	T(CMP(ax, *(dw*)((&unk_4a074))));	// 85973 cmp     ax, word ptr unk_4A074 ;~ 275C:03E0
cs=0x275c;eip=0x0003e4; 	R(JGE(loc_35f89));	// 85974 jge     short loc_35F89 ;~ 275C:03E4
cs=0x275c;eip=0x0003e6; 	T(OR(bl, 2));	// 85975 or      bl, 2 ;~ 275C:03E6
loc_35f89:
	// 9903 
cs=0x275c;eip=0x0003e9; 	T(CMP(ax, *(dw*)((&unk_4a076))));	// 85978 cmp     ax, word ptr unk_4A076 ;~ 275C:03E9
cs=0x275c;eip=0x0003ed; 	R(JLE(loc_35f92));	// 85979 jle     short loc_35F92 ;~ 275C:03ED
cs=0x275c;eip=0x0003ef; 	T(OR(bl, 1));	// 85980 or      bl, 1 ;~ 275C:03EF
loc_35f92:
	// 9904 
cs=0x275c;eip=0x0003f2; 	T(MOV(ax, *(dw*)((&unk_4a068))));	// 85983 mov     ax, word ptr unk_4A068 ;~ 275C:03F2
cs=0x275c;eip=0x0003f5; 	T(CMP(ax, *(dw*)((&unk_4a078))));	// 85984 cmp     ax, word ptr unk_4A078 ;~ 275C:03F5
cs=0x275c;eip=0x0003f9; 	R(JGE(loc_35f9e));	// 85985 jge     short loc_35F9E ;~ 275C:03F9
cs=0x275c;eip=0x0003fb; 	T(OR(bl, 0x10));	// 85986 or      bl, 10h ;~ 275C:03FB
loc_35f9e:
	// 9905 
cs=0x275c;eip=0x0003fe; 	T(CMP(ax, *(dw*)((&unk_4a07a))));	// 85989 cmp     ax, word ptr unk_4A07A ;~ 275C:03FE
cs=0x275c;eip=0x000402; 	R(JLE(loc_35fa7));	// 85990 jle     short loc_35FA7 ;~ 275C:0402
cs=0x275c;eip=0x000404; 	T(OR(bl, 0x20));	// 85991 or      bl, 20h ;~ 275C:0404
loc_35fa7:
	// 9906 
cs=0x275c;eip=0x000407; 	X(MOV(unk_4a07c, bl));	// 85994 mov     byte ptr unk_4A07C, bl ;~ 275C:0407
cs=0x275c;eip=0x00040b; 	R(RETN(0));	// 85995 retn ;~ 275C:040B
sub_35fac:
	// 86002 
cs=0x275c;eip=0x00040c; 	T(XOR(bl, bl));	// 86004 xor     bl, bl ;~ 275C:040C
cs=0x275c;eip=0x00040e; 	T(MOV(ax, *(dw*)((&unk_4a06a))));	// 86005 mov     ax, word ptr unk_4A06A ;~ 275C:040E
cs=0x275c;eip=0x000411; 	T(CMP(ax, *(dw*)((&unk_4a070))));	// 86006 cmp     ax, word ptr unk_4A070 ;~ 275C:0411
cs=0x275c;eip=0x000415; 	R(JGE(loc_35fba));	// 86007 jge     short loc_35FBA ;~ 275C:0415
cs=0x275c;eip=0x000417; 	T(OR(bl, 4));	// 86008 or      bl, 4 ;~ 275C:0417
loc_35fba:
	// 9907 
cs=0x275c;eip=0x00041a; 	T(CMP(ax, *(dw*)((&unk_4a072))));	// 86011 cmp     ax, word ptr unk_4A072 ;~ 275C:041A
cs=0x275c;eip=0x00041e; 	R(JLE(loc_35fc3));	// 86012 jle     short loc_35FC3 ;~ 275C:041E
cs=0x275c;eip=0x000420; 	T(OR(bl, 8));	// 86013 or      bl, 8 ;~ 275C:0420
loc_35fc3:
	// 9908 
cs=0x275c;eip=0x000423; 	T(MOV(ax, *(dw*)((&unk_4a06c))));	// 86016 mov     ax, word ptr unk_4A06C ;~ 275C:0423
cs=0x275c;eip=0x000426; 	T(CMP(ax, *(dw*)((&unk_4a074))));	// 86017 cmp     ax, word ptr unk_4A074 ;~ 275C:0426
cs=0x275c;eip=0x00042a; 	R(JGE(loc_35fcf));	// 86018 jge     short loc_35FCF ;~ 275C:042A
cs=0x275c;eip=0x00042c; 	T(OR(bl, 2));	// 86019 or      bl, 2 ;~ 275C:042C
loc_35fcf:
	// 9909 
cs=0x275c;eip=0x00042f; 	T(CMP(ax, *(dw*)((&unk_4a076))));	// 86022 cmp     ax, word ptr unk_4A076 ;~ 275C:042F
cs=0x275c;eip=0x000433; 	R(JLE(loc_35fd8));	// 86023 jle     short loc_35FD8 ;~ 275C:0433
cs=0x275c;eip=0x000435; 	T(OR(bl, 1));	// 86024 or      bl, 1 ;~ 275C:0435
loc_35fd8:
	// 9910 
cs=0x275c;eip=0x000438; 	T(MOV(ax, *(dw*)((&unk_4a06e))));	// 86027 mov     ax, word ptr unk_4A06E ;~ 275C:0438
cs=0x275c;eip=0x00043b; 	T(CMP(ax, *(dw*)((&unk_4a078))));	// 86028 cmp     ax, word ptr unk_4A078 ;~ 275C:043B
cs=0x275c;eip=0x00043f; 	R(JGE(loc_35fe4));	// 86029 jge     short loc_35FE4 ;~ 275C:043F
cs=0x275c;eip=0x000441; 	T(OR(bl, 0x10));	// 86030 or      bl, 10h ;~ 275C:0441
loc_35fe4:
	// 9911 
cs=0x275c;eip=0x000444; 	T(CMP(ax, *(dw*)((&unk_4a07a))));	// 86033 cmp     ax, word ptr unk_4A07A ;~ 275C:0444
cs=0x275c;eip=0x000448; 	R(JLE(loc_35fed));	// 86034 jle     short loc_35FED ;~ 275C:0448
cs=0x275c;eip=0x00044a; 	T(OR(bl, 0x20));	// 86035 or      bl, 20h ;~ 275C:044A
loc_35fed:
	// 9912 
cs=0x275c;eip=0x00044d; 	X(MOV(unk_4a07d, bl));	// 86038 mov     byte ptr unk_4A07D, bl ;~ 275C:044D
cs=0x275c;eip=0x000451; 	R(RETN(0));	// 86039 retn ;~ 275C:0451
sub_35ff2:
	// 86047 
#undef arg_0
#define arg_0 4
	// 86050 arg_0           = word ptr  4 ;~ 275C:0452
#undef arg_2
#define arg_2 6
	// 86051 arg_2           = word ptr  6 ;~ 275C:0452
#undef arg_4
#define arg_4 8
	// 86052 arg_4           = word ptr  8 ;~ 275C:0452
cs=0x275c;eip=0x000452; 	X(PUSH(bp));	// 86054 push    bp ;~ 275C:0452
cs=0x275c;eip=0x000453; 	T(MOV(bp, sp));	// 86055 mov     bp, sp ;~ 275C:0453
cs=0x275c;eip=0x000455; 	X(PUSH(si));	// 86056 push    si ;~ 275C:0455
cs=0x275c;eip=0x000456; 	X(PUSH(di));	// 86057 push    di ;~ 275C:0456
cs=0x275c;eip=0x000457; 	T(MOV(bx, *(dw*)((&unk_4a09e))));	// 86058 mov     bx, word ptr unk_4A09E ;~ 275C:0457
cs=0x275c;eip=0x00045b; 	T(MOV(bx, *(dw*)(raddr(ds,bx+0x44))));	// 86059 mov     bx, [bx+44h] ;~ 275C:045B
cs=0x275c;eip=0x00045e; 	T(MOV(cl, *(raddr(ds,bx+0x0C))));	// 86060 mov     cl, [bx+0Ch] ;~ 275C:045E
cs=0x275c;eip=0x000461; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 86061 mov     si, [bp+arg_4] ;~ 275C:0461
cs=0x275c;eip=0x000464; 	T(SAR(si, cl));	// 86062 sar     si, cl ;~ 275C:0464
cs=0x275c;eip=0x000466; 	T(ADD(si, *(dw*)(raddr(ds,bx+8))));	// 86063 add     si, [bx+8] ;~ 275C:0466
cs=0x275c;eip=0x000469; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 86064 mov     di, [bp+arg_0] ;~ 275C:0469
cs=0x275c;eip=0x00046c; 	T(SAR(di, cl));	// 86065 sar     di, cl ;~ 275C:046C
cs=0x275c;eip=0x00046e; 	T(ADD(di, *(dw*)(raddr(ds,bx+8))));	// 86066 add     di, [bx+8] ;~ 275C:046E
cs=0x275c;eip=0x000471; 	T(OR(si, si));	// 86067 or      si, si ;~ 275C:0471
cs=0x275c;eip=0x000473; 	R(JS(loc_36053));	// 86068 js      short loc_36053 ;~ 275C:0473
cs=0x275c;eip=0x000475; 	T(CMP(si, *(dw*)(raddr(ds,bx+4))));	// 86069 cmp     si, [bx+4] ;~ 275C:0475
cs=0x275c;eip=0x000478; 	R(JGE(loc_36053));	// 86070 jge     short loc_36053 ;~ 275C:0478
cs=0x275c;eip=0x00047a; 	T(OR(di, di));	// 86071 or      di, di ;~ 275C:047A
cs=0x275c;eip=0x00047c; 	R(JS(loc_36053));	// 86072 js      short loc_36053 ;~ 275C:047C
cs=0x275c;eip=0x00047e; 	T(CMP(di, *(dw*)(raddr(ds,bx+6))));	// 86073 cmp     di, [bx+6] ;~ 275C:047E
cs=0x275c;eip=0x000481; 	R(JGE(loc_36053));	// 86074 jge     short loc_36053 ;~ 275C:0481
cs=0x275c;eip=0x000483; 	T(MOV(ax, di));	// 86075 mov     ax, di ;~ 275C:0483
cs=0x275c;eip=0x000485; 	X(IMUL1_2(*(dw*)(raddr(ds,bx+4))));	// 86076 imul    word ptr [bx+4] ;~ 275C:0485
cs=0x275c;eip=0x000488; 	T(ADD(ax, si));	// 86077 add     ax, si ;~ 275C:0488
cs=0x275c;eip=0x00048a; 	T(MOV(cl, *(raddr(ds,bx+0x0E))));	// 86078 mov     cl, [bx+0Eh] ;~ 275C:048A
cs=0x275c;eip=0x00048d; 	T(LES(bx, *(dw*)(raddr(ds,bx))));	// 86079 les     bx, [bx] ;~ 275C:048D
cs=0x275c;eip=0x00048f; 	T(ADD(bx, ax));	// 86081 add     bx, ax ;~ 275C:048F
cs=0x275c;eip=0x000491; 	T(MOV(al, *(raddr(es,bx))));	// 86082 mov     al, es:[bx] ;~ 275C:0491
cs=0x275c;eip=0x000494; 	T(XOR(ah, ah));	// 86083 xor     ah, ah ;~ 275C:0494
cs=0x275c;eip=0x000496; 	T(SHL(ax, cl));	// 86084 shl     ax, cl ;~ 275C:0496
cs=0x275c;eip=0x000498; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), ax));	// 86085 cmp     [bp+arg_2], ax ;~ 275C:0498
cs=0x275c;eip=0x00049b; 	R(JG(loc_36053));	// 86086 jg      short loc_36053 ;~ 275C:049B
cs=0x275c;eip=0x00049d; 	X(MOV(*(dw*)((&unk_4a066)), ax));	// 86087 mov     word ptr unk_4A066, ax ;~ 275C:049D
cs=0x275c;eip=0x0004a0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 86088 mov     ax, [bp+arg_4] ;~ 275C:04A0
cs=0x275c;eip=0x0004a3; 	X(MOV(*(dw*)((&unk_4a064)), ax));	// 86089 mov     word ptr unk_4A064, ax ;~ 275C:04A3
cs=0x275c;eip=0x0004a6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 86090 mov     ax, [bp+arg_0] ;~ 275C:04A6
cs=0x275c;eip=0x0004a9; 	X(MOV(*(dw*)((&unk_4a068)), ax));	// 86091 mov     word ptr unk_4A068, ax ;~ 275C:04A9
cs=0x275c;eip=0x0004ac; 	T(STC);	// 86092 stc ;~ 275C:04AC
cs=0x275c;eip=0x0004ad; 	X(POP(di));	// 86093 pop     di ;~ 275C:04AD
cs=0x275c;eip=0x0004ae; 	X(POP(si));	// 86094 pop     si ;~ 275C:04AE
cs=0x275c;eip=0x0004af; 	X(POP(bp));	// 86095 pop     bp ;~ 275C:04AF
cs=0x275c;eip=0x0004b0; 	R(RETN(6));	// 86096 retn    6 ;~ 275C:04B0
loc_36053:
	// 9913 
cs=0x275c;eip=0x0004b3; 	T(CLC);	// 86101 clc ;~ 275C:04B3
cs=0x275c;eip=0x0004b4; 	X(POP(di));	// 86102 pop     di ;~ 275C:04B4
cs=0x275c;eip=0x0004b5; 	X(POP(si));	// 86103 pop     si ;~ 275C:04B5
cs=0x275c;eip=0x0004b6; 	X(POP(bp));	// 86104 pop     bp ;~ 275C:04B6
cs=0x275c;eip=0x0004b7; 	R(RETN(6));	// 86105 retn    6 ;~ 275C:04B7
sub_3605a:
	// 86112 
cs=0x275c;eip=0x0004ba; 	X(PUSH(*(dw*)((&unk_4a064))));	// 86113 push    word ptr unk_4A064 ;~ 275C:04BA
cs=0x275c;eip=0x0004be; 	X(PUSH(*(dw*)((&unk_4a066))));	// 86114 push    word ptr unk_4A066 ;~ 275C:04BE
cs=0x275c;eip=0x0004c2; 	X(PUSH(*(dw*)((&unk_4a068))));	// 86115 push    word ptr unk_4A068 ;~ 275C:04C2
cs=0x275c;eip=0x0004c6; 	R(CALL(sub_35ff2,0));	// 86116 call    sub_35FF2 ;~ 275C:04C6
cs=0x275c;eip=0x0004c9; 	R(JC(locret_3609d));	// 86117 jb      short locret_3609D ;~ 275C:04C9
cs=0x275c;eip=0x0004cb; 	T(MOV(ax, *(dw*)((&unk_4a064))));	// 86118 mov     ax, word ptr unk_4A064 ;~ 275C:04CB
cs=0x275c;eip=0x0004ce; 	T(ADD(ax, *(dw*)((&unk_4a06a))));	// 86119 add     ax, word ptr unk_4A06A ;~ 275C:04CE
cs=0x275c;eip=0x0004d2; 	T(SAR(ax, 1));	// 86120 sar     ax, 1 ;~ 275C:04D2
cs=0x275c;eip=0x0004d4; 	X(PUSH(ax));	// 86121 push    ax ;~ 275C:04D4
cs=0x275c;eip=0x0004d5; 	T(MOV(ax, *(dw*)((&unk_4a066))));	// 86122 mov     ax, word ptr unk_4A066 ;~ 275C:04D5
cs=0x275c;eip=0x0004d8; 	T(ADD(ax, *(dw*)((&unk_4a06c))));	// 86123 add     ax, word ptr unk_4A06C ;~ 275C:04D8
cs=0x275c;eip=0x0004dc; 	T(SAR(ax, 1));	// 86124 sar     ax, 1 ;~ 275C:04DC
cs=0x275c;eip=0x0004de; 	X(PUSH(ax));	// 86125 push    ax ;~ 275C:04DE
cs=0x275c;eip=0x0004df; 	T(MOV(ax, *(dw*)((&unk_4a068))));	// 86126 mov     ax, word ptr unk_4A068 ;~ 275C:04DF
cs=0x275c;eip=0x0004e2; 	T(ADD(ax, *(dw*)((&unk_4a06e))));	// 86127 add     ax, word ptr unk_4A06E ;~ 275C:04E2
cs=0x275c;eip=0x0004e6; 	T(SAR(ax, 1));	// 86128 sar     ax, 1 ;~ 275C:04E6
cs=0x275c;eip=0x0004e8; 	X(PUSH(ax));	// 86129 push    ax ;~ 275C:04E8
cs=0x275c;eip=0x0004e9; 	R(CALL(sub_35ff2,0));	// 86130 call    sub_35FF2 ;~ 275C:04E9
cs=0x275c;eip=0x0004ec; 	R(JC(locret_3609d));	// 86131 jb      short locret_3609D ;~ 275C:04EC
cs=0x275c;eip=0x0004ee; 	X(PUSH(*(dw*)((&unk_4a06a))));	// 86132 push    word ptr unk_4A06A ;~ 275C:04EE
cs=0x275c;eip=0x0004f2; 	X(PUSH(*(dw*)((&unk_4a06c))));	// 86133 push    word ptr unk_4A06C ;~ 275C:04F2
cs=0x275c;eip=0x0004f6; 	X(PUSH(*(dw*)((&unk_4a06e))));	// 86134 push    word ptr unk_4A06E ;~ 275C:04F6
cs=0x275c;eip=0x0004fa; 	R(CALL(sub_35ff2,0));	// 86135 call    sub_35FF2 ;~ 275C:04FA
locret_3609d:
	// 9914 
cs=0x275c;eip=0x0004fd; 	R(RETN(0));	// 86139 retn ;~ 275C:04FD
sub_3609e:
	// 86146 
cs=0x275c;eip=0x0004fe; 	T(MOV(bp, ax));	// 86147 mov     bp, ax ;~ 275C:04FE
cs=0x275c;eip=0x000500; 	T(NEG(bp));	// 86148 neg     bp ;~ 275C:0500
cs=0x275c;eip=0x000502; 	T(MOV(ax, *(dw*)((&unk_4a064))));	// 86149 mov     ax, word ptr unk_4A064 ;~ 275C:0502
cs=0x275c;eip=0x000505; 	X(MOV(*(dw*)((&unk_4a081)), ax));	// 86150 mov     word ptr unk_4A081, ax ;~ 275C:0505
cs=0x275c;eip=0x000508; 	T(MOV(ax, *(dw*)((&unk_4a068))));	// 86151 mov     ax, word ptr unk_4A068 ;~ 275C:0508
cs=0x275c;eip=0x00050b; 	X(MOV(*(dw*)((&unk_4a083)), ax));	// 86152 mov     word ptr unk_4A083, ax ;~ 275C:050B
cs=0x275c;eip=0x00050e; 	T(MOV(si, 0x26D1));	// 86153 mov     si, 26D1h ;~ 275C:050E
cs=0x275c;eip=0x000511; 	X(PUSH(si));	// 86154 push    si ;~ 275C:0511
cs=0x275c;eip=0x000512; 	T(MOV(di, 0x106));	// 86155 mov     di, 106h ;~ 275C:0512
cs=0x275c;eip=0x000515; 	X(PUSH(di));	// 86156 push    di ;~ 275C:0515
cs=0x275c;eip=0x000516; 	X(PUSH(bp));	// 86157 push    bp ;~ 275C:0516
cs=0x275c;eip=0x000517; 	R(CALLF(sub_27d5d,0));	// 86158 call    sub_27D5D ;~ 275C:0517
cs=0x275c;eip=0x00051c; 	T(MOV(ax, *(dw*)((&unk_4a081))));	// 86159 mov     ax, word ptr unk_4A081 ;~ 275C:051C
cs=0x275c;eip=0x00051f; 	X(MOV(*(dw*)((&unk_4a064)), ax));	// 86160 mov     word ptr unk_4A064, ax ;~ 275C:051F
cs=0x275c;eip=0x000522; 	T(MOV(ax, *(dw*)((&unk_4a083))));	// 86161 mov     ax, word ptr unk_4A083 ;~ 275C:0522
cs=0x275c;eip=0x000525; 	X(MOV(*(dw*)((&unk_4a068)), ax));	// 86162 mov     word ptr unk_4A068, ax ;~ 275C:0525
cs=0x275c;eip=0x000528; 	T(MOV(ax, *(dw*)((&unk_4a06a))));	// 86163 mov     ax, word ptr unk_4A06A ;~ 275C:0528
cs=0x275c;eip=0x00052b; 	X(MOV(*(dw*)((&unk_4a081)), ax));	// 86164 mov     word ptr unk_4A081, ax ;~ 275C:052B
cs=0x275c;eip=0x00052e; 	T(MOV(ax, *(dw*)((&unk_4a06e))));	// 86165 mov     ax, word ptr unk_4A06E ;~ 275C:052E
cs=0x275c;eip=0x000531; 	X(MOV(*(dw*)((&unk_4a083)), ax));	// 86166 mov     word ptr unk_4A083, ax ;~ 275C:0531
cs=0x275c;eip=0x000534; 	X(PUSH(si));	// 86167 push    si ;~ 275C:0534
cs=0x275c;eip=0x000535; 	X(PUSH(di));	// 86168 push    di ;~ 275C:0535
cs=0x275c;eip=0x000536; 	X(PUSH(bp));	// 86169 push    bp ;~ 275C:0536
cs=0x275c;eip=0x000537; 	R(CALLF(sub_27d5d,0));	// 86170 call    sub_27D5D ;~ 275C:0537
cs=0x275c;eip=0x00053c; 	T(MOV(ax, *(dw*)((&unk_4a081))));	// 86171 mov     ax, word ptr unk_4A081 ;~ 275C:053C
cs=0x275c;eip=0x00053f; 	X(MOV(*(dw*)((&unk_4a06a)), ax));	// 86172 mov     word ptr unk_4A06A, ax ;~ 275C:053F
cs=0x275c;eip=0x000542; 	T(MOV(ax, *(dw*)((&unk_4a083))));	// 86173 mov     ax, word ptr unk_4A083 ;~ 275C:0542
cs=0x275c;eip=0x000545; 	X(MOV(*(dw*)((&unk_4a06e)), ax));	// 86174 mov     word ptr unk_4A06E, ax ;~ 275C:0545
cs=0x275c;eip=0x000548; 	T(NEG(bp));	// 86175 neg     bp ;~ 275C:0548
cs=0x275c;eip=0x00054a; 	T(MOV(ax, bp));	// 86176 mov     ax, bp ;~ 275C:054A
cs=0x275c;eip=0x00054c; 	R(RETN(0));	// 86177 retn ;~ 275C:054C
sub_360ed:
	// 86184 
cs=0x275c;eip=0x00054d; 	X(PUSH(bp));	// 86186 push    bp ;~ 275C:054D
cs=0x275c;eip=0x00054e; 	X(PUSH(si));	// 86187 push    si ;~ 275C:054E
cs=0x275c;eip=0x00054f; 	X(PUSH(di));	// 86188 push    di ;~ 275C:054F
cs=0x275c;eip=0x000550; 	T(MOV(es, *(dw*)((&unk_47a9a))));	// 86189 mov     es, word ptr unk_47A9A ;~ 275C:0550
cs=0x275c;eip=0x000554; 	X(MOV(*(dw*)((&unk_4a09a)), bx));	// 86191 mov     word ptr unk_4A09A, bx ;~ 275C:0554
cs=0x275c;eip=0x000558; 	X(MOV(*(dw*)((&unk_4a09c)), es));	// 86192 mov     word ptr unk_4A09C, es ;~ 275C:0558
cs=0x275c;eip=0x00055c; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 86193 mov     ax, es:[bx] ;~ 275C:055C
cs=0x275c;eip=0x00055f; 	X(MOV(*(dw*)((&unk_4a09e)), ax));	// 86194 mov     word ptr unk_4A09E, ax ;~ 275C:055F
cs=0x275c;eip=0x000562; 	R(CALL(sub_35c44,0));	// 86195 call    sub_35C44 ;~ 275C:0562
cs=0x275c;eip=0x000565; 	R(JC(loc_3610b));	// 86196 jb      short loc_3610B ;~ 275C:0565
cs=0x275c;eip=0x000567; 	T(CLC);	// 86197 clc ;~ 275C:0567
cs=0x275c;eip=0x000568; 	R(JMP(loc_36610));	// 86198 jmp     loc_36610 ;~ 275C:0568
loc_3610b:
	// 9915 
cs=0x275c;eip=0x00056b; 	T(MOV(dx, *(dw*)(raddr(es,bx+6))));	// 86202 mov     dx, es:[bx+6] ;~ 275C:056B
cs=0x275c;eip=0x00056f; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 86203 mov     ax, es:[bx+8] ;~ 275C:056F
cs=0x275c;eip=0x000573; 	T(MOV(dl, dh));	// 86204 mov     dl, dh ;~ 275C:0573
cs=0x275c;eip=0x000575; 	T(MOV(dh, al));	// 86205 mov     dh, al ;~ 275C:0575
cs=0x275c;eip=0x000577; 	T(MOV(al, ah));	// 86206 mov     al, ah ;~ 275C:0577
cs=0x275c;eip=0x000579; 	T(CBW);	// 86207 cbw ;~ 275C:0579
cs=0x275c;eip=0x00057a; 	X(MOV(*(dw*)((&unk_4a058)), dx));	// 86208 mov     word ptr unk_4A058, dx ;~ 275C:057A
cs=0x275c;eip=0x00057e; 	X(MOV(*(dw*)((&unk_4a05a)), ax));	// 86209 mov     word ptr unk_4A05A, ax ;~ 275C:057E
cs=0x275c;eip=0x000581; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0A))));	// 86210 mov     dx, es:[bx+0Ah] ;~ 275C:0581
cs=0x275c;eip=0x000585; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C))));	// 86211 mov     ax, es:[bx+0Ch] ;~ 275C:0585
cs=0x275c;eip=0x000589; 	T(MOV(dl, dh));	// 86212 mov     dl, dh ;~ 275C:0589
cs=0x275c;eip=0x00058b; 	T(MOV(dh, al));	// 86213 mov     dh, al ;~ 275C:058B
cs=0x275c;eip=0x00058d; 	T(MOV(al, ah));	// 86214 mov     al, ah ;~ 275C:058D
cs=0x275c;eip=0x00058f; 	T(CBW);	// 86215 cbw ;~ 275C:058F
cs=0x275c;eip=0x000590; 	X(MOV(*(dw*)((&unk_4a05c)), dx));	// 86216 mov     word ptr unk_4A05C, dx ;~ 275C:0590
cs=0x275c;eip=0x000594; 	X(MOV(*(dw*)((&unk_4a05e)), ax));	// 86217 mov     word ptr unk_4A05E, ax ;~ 275C:0594
cs=0x275c;eip=0x000597; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E))));	// 86218 mov     dx, es:[bx+0Eh] ;~ 275C:0597
cs=0x275c;eip=0x00059b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x10))));	// 86219 mov     ax, es:[bx+10h] ;~ 275C:059B
cs=0x275c;eip=0x00059f; 	T(MOV(dl, dh));	// 86220 mov     dl, dh ;~ 275C:059F
cs=0x275c;eip=0x0005a1; 	T(MOV(dh, al));	// 86221 mov     dh, al ;~ 275C:05A1
cs=0x275c;eip=0x0005a3; 	T(MOV(al, ah));	// 86222 mov     al, ah ;~ 275C:05A3
cs=0x275c;eip=0x0005a5; 	T(CBW);	// 86223 cbw ;~ 275C:05A5
cs=0x275c;eip=0x0005a6; 	X(MOV(*(dw*)((&unk_4a060)), dx));	// 86224 mov     word ptr unk_4A060, dx ;~ 275C:05A6
cs=0x275c;eip=0x0005aa; 	X(MOV(*(dw*)((&unk_4a062)), ax));	// 86225 mov     word ptr unk_4A062, ax ;~ 275C:05AA
cs=0x275c;eip=0x0005ad; 	T(MOV(ax, *(dw*)((&unk_570e6))));	// 86226 mov     ax, word ptr unk_570E6 ;~ 275C:05AD
cs=0x275c;eip=0x0005b0; 	T(MOV(cx, *(dw*)((&unk_570e8))));	// 86227 mov     cx, word ptr unk_570E8 ;~ 275C:05B0
cs=0x275c;eip=0x0005b4; 	T(SUB(ax, *(dw*)((&unk_4a058))));	// 86228 sub     ax, word ptr unk_4A058 ;~ 275C:05B4
cs=0x275c;eip=0x0005b8; 	T(SBB(cx, *(dw*)((&unk_4a05a))));	// 86229 sbb     cx, word ptr unk_4A05A ;~ 275C:05B8
cs=0x275c;eip=0x0005bc; 	X(MOV(*(dw*)((&unk_4a064)), ax));	// 86230 mov     word ptr unk_4A064, ax ;~ 275C:05BC
cs=0x275c;eip=0x0005bf; 	T(CWD);	// 86231 cwd ;~ 275C:05BF
cs=0x275c;eip=0x0005c0; 	T(CMP(cx, dx));	// 86232 cmp     cx, dx ;~ 275C:05C0
cs=0x275c;eip=0x0005c2; 	R(JNZ(loc_361d7));	// 86233 jnz     short loc_361D7 ;~ 275C:05C2
cs=0x275c;eip=0x0005c4; 	T(MOV(ax, *(dw*)((&unk_570ea))));	// 86234 mov     ax, word ptr unk_570EA ;~ 275C:05C4
cs=0x275c;eip=0x0005c7; 	T(MOV(cx, *(dw*)((&unk_570ec))));	// 86235 mov     cx, word ptr unk_570EC ;~ 275C:05C7
cs=0x275c;eip=0x0005cb; 	T(SUB(ax, *(dw*)((&unk_4a05c))));	// 86236 sub     ax, word ptr unk_4A05C ;~ 275C:05CB
cs=0x275c;eip=0x0005cf; 	T(SBB(cx, *(dw*)((&unk_4a05e))));	// 86237 sbb     cx, word ptr unk_4A05E ;~ 275C:05CF
cs=0x275c;eip=0x0005d3; 	X(MOV(*(dw*)((&unk_4a066)), ax));	// 86238 mov     word ptr unk_4A066, ax ;~ 275C:05D3
cs=0x275c;eip=0x0005d6; 	T(CWD);	// 86239 cwd ;~ 275C:05D6
cs=0x275c;eip=0x0005d7; 	T(CMP(cx, dx));	// 86240 cmp     cx, dx ;~ 275C:05D7
cs=0x275c;eip=0x0005d9; 	R(JNZ(loc_361d7));	// 86241 jnz     short loc_361D7 ;~ 275C:05D9
cs=0x275c;eip=0x0005db; 	T(MOV(ax, *(dw*)((&unk_570ee))));	// 86242 mov     ax, word ptr unk_570EE ;~ 275C:05DB
cs=0x275c;eip=0x0005de; 	T(MOV(cx, *(dw*)((&unk_570f0))));	// 86243 mov     cx, word ptr unk_570F0 ;~ 275C:05DE
cs=0x275c;eip=0x0005e2; 	T(SUB(ax, *(dw*)((&unk_4a060))));	// 86244 sub     ax, word ptr unk_4A060 ;~ 275C:05E2
cs=0x275c;eip=0x0005e6; 	T(SBB(cx, *(dw*)((&unk_4a062))));	// 86245 sbb     cx, word ptr unk_4A062 ;~ 275C:05E6
cs=0x275c;eip=0x0005ea; 	X(MOV(*(dw*)((&unk_4a068)), ax));	// 86246 mov     word ptr unk_4A068, ax ;~ 275C:05EA
cs=0x275c;eip=0x0005ed; 	T(CWD);	// 86247 cwd ;~ 275C:05ED
cs=0x275c;eip=0x0005ee; 	T(CMP(cx, dx));	// 86248 cmp     cx, dx ;~ 275C:05EE
cs=0x275c;eip=0x0005f0; 	R(JNZ(loc_361d7));	// 86249 jnz     short loc_361D7 ;~ 275C:05F0
cs=0x275c;eip=0x0005f2; 	T(MOV(ax, *(dw*)((&unk_570f2))));	// 86250 mov     ax, word ptr unk_570F2 ;~ 275C:05F2
cs=0x275c;eip=0x0005f5; 	T(MOV(cx, *(dw*)((&unk_570f4))));	// 86251 mov     cx, word ptr unk_570F4 ;~ 275C:05F5
cs=0x275c;eip=0x0005f9; 	T(SUB(ax, *(dw*)((&unk_4a058))));	// 86252 sub     ax, word ptr unk_4A058 ;~ 275C:05F9
cs=0x275c;eip=0x0005fd; 	T(SBB(cx, *(dw*)((&unk_4a05a))));	// 86253 sbb     cx, word ptr unk_4A05A ;~ 275C:05FD
cs=0x275c;eip=0x000601; 	X(MOV(*(dw*)((&unk_4a06a)), ax));	// 86254 mov     word ptr unk_4A06A, ax ;~ 275C:0601
cs=0x275c;eip=0x000604; 	T(CWD);	// 86255 cwd ;~ 275C:0604
cs=0x275c;eip=0x000605; 	T(CMP(cx, dx));	// 86256 cmp     cx, dx ;~ 275C:0605
cs=0x275c;eip=0x000607; 	R(JNZ(loc_361d7));	// 86257 jnz     short loc_361D7 ;~ 275C:0607
cs=0x275c;eip=0x000609; 	T(MOV(ax, *(dw*)((&unk_570f6))));	// 86258 mov     ax, word ptr unk_570F6 ;~ 275C:0609
cs=0x275c;eip=0x00060c; 	T(MOV(cx, *(dw*)((&unk_570f8))));	// 86259 mov     cx, word ptr unk_570F8 ;~ 275C:060C
cs=0x275c;eip=0x000610; 	T(SUB(ax, *(dw*)((&unk_4a05c))));	// 86260 sub     ax, word ptr unk_4A05C ;~ 275C:0610
cs=0x275c;eip=0x000614; 	T(SBB(cx, *(dw*)((&unk_4a05e))));	// 86261 sbb     cx, word ptr unk_4A05E ;~ 275C:0614
cs=0x275c;eip=0x000618; 	X(MOV(*(dw*)((&unk_4a06c)), ax));	// 86262 mov     word ptr unk_4A06C, ax ;~ 275C:0618
cs=0x275c;eip=0x00061b; 	T(CWD);	// 86263 cwd ;~ 275C:061B
cs=0x275c;eip=0x00061c; 	T(CMP(cx, dx));	// 86264 cmp     cx, dx ;~ 275C:061C
cs=0x275c;eip=0x00061e; 	R(JNZ(loc_361d7));	// 86265 jnz     short loc_361D7 ;~ 275C:061E
cs=0x275c;eip=0x000620; 	T(MOV(ax, *(dw*)((&unk_570fa))));	// 86266 mov     ax, word ptr unk_570FA ;~ 275C:0620
cs=0x275c;eip=0x000623; 	T(MOV(cx, *(dw*)((&unk_570fc))));	// 86267 mov     cx, word ptr unk_570FC ;~ 275C:0623
cs=0x275c;eip=0x000627; 	T(SUB(ax, *(dw*)((&unk_4a060))));	// 86268 sub     ax, word ptr unk_4A060 ;~ 275C:0627
cs=0x275c;eip=0x00062b; 	T(SBB(cx, *(dw*)((&unk_4a062))));	// 86269 sbb     cx, word ptr unk_4A062 ;~ 275C:062B
cs=0x275c;eip=0x00062f; 	X(MOV(*(dw*)((&unk_4a06e)), ax));	// 86270 mov     word ptr unk_4A06E, ax ;~ 275C:062F
cs=0x275c;eip=0x000632; 	T(CWD);	// 86271 cwd ;~ 275C:0632
cs=0x275c;eip=0x000633; 	T(CMP(cx, dx));	// 86272 cmp     cx, dx ;~ 275C:0633
cs=0x275c;eip=0x000635; 	R(JZ(loc_361db));	// 86273 jz      short loc_361DB ;~ 275C:0635
loc_361d7:
	// 9916 
cs=0x275c;eip=0x000637; 	T(CLC);	// 86277 clc ;~ 275C:0637
cs=0x275c;eip=0x000638; 	R(JMP(loc_36610));	// 86278 jmp     loc_36610 ;~ 275C:0638
loc_361db:
	// 9917 
cs=0x275c;eip=0x00063b; 	T(XOR(ax, ax));	// 86282 xor     ax, ax ;~ 275C:063B
cs=0x275c;eip=0x00063d; 	T(TEST(*(dw*)(raddr(es,bx+2)), 2));	// 86283 test    word ptr es:[bx+2], 2 ;~ 275C:063D
cs=0x275c;eip=0x000643; 	R(JZ(loc_361e8));	// 86284 jz      short loc_361E8 ;~ 275C:0643
cs=0x275c;eip=0x000645; 	R(JMP(loc_36280));	// 86285 jmp     loc_36280 ;~ 275C:0645
loc_361e8:
	// 9918 
cs=0x275c;eip=0x000648; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x12))));	// 86289 mov     ax, es:[bx+12h] ;~ 275C:0648
cs=0x275c;eip=0x00064c; 	T(OR(ax, ax));	// 86290 or      ax, ax ;~ 275C:064C
cs=0x275c;eip=0x00064e; 	R(JNZ(loc_361f3));	// 86291 jnz     short loc_361F3 ;~ 275C:064E
cs=0x275c;eip=0x000650; 	R(JMP(loc_36280));	// 86292 jmp     loc_36280 ;~ 275C:0650
loc_361f3:
	// 9919 
cs=0x275c;eip=0x000653; 	T(CMP(ax, 0x2D0));	// 86296 cmp     ax, 2D0h ;~ 275C:0653
cs=0x275c;eip=0x000656; 	R(JNZ(loc_3621d));	// 86297 jnz     short loc_3621D ;~ 275C:0656
cs=0x275c;eip=0x000658; 	T(MOV(ax, *(dw*)((&unk_4a064))));	// 86298 mov     ax, word ptr unk_4A064 ;~ 275C:0658
cs=0x275c;eip=0x00065b; 	T(MOV(dx, *(dw*)((&unk_4a068))));	// 86299 mov     dx, word ptr unk_4A068 ;~ 275C:065B
cs=0x275c;eip=0x00065f; 	X(MOV(*(dw*)((&unk_4a064)), dx));	// 86300 mov     word ptr unk_4A064, dx ;~ 275C:065F
cs=0x275c;eip=0x000663; 	T(NEG(ax));	// 86301 neg     ax ;~ 275C:0663
cs=0x275c;eip=0x000665; 	X(MOV(*(dw*)((&unk_4a068)), ax));	// 86302 mov     word ptr unk_4A068, ax ;~ 275C:0665
cs=0x275c;eip=0x000668; 	T(MOV(ax, *(dw*)((&unk_4a06a))));	// 86303 mov     ax, word ptr unk_4A06A ;~ 275C:0668
cs=0x275c;eip=0x00066b; 	T(MOV(dx, *(dw*)((&unk_4a06e))));	// 86304 mov     dx, word ptr unk_4A06E ;~ 275C:066B
cs=0x275c;eip=0x00066f; 	X(MOV(*(dw*)((&unk_4a06a)), dx));	// 86305 mov     word ptr unk_4A06A, dx ;~ 275C:066F
cs=0x275c;eip=0x000673; 	T(NEG(ax));	// 86306 neg     ax ;~ 275C:0673
cs=0x275c;eip=0x000675; 	X(MOV(*(dw*)((&unk_4a06e)), ax));	// 86307 mov     word ptr unk_4A06E, ax ;~ 275C:0675
cs=0x275c;eip=0x000678; 	T(MOV(ax, 0x2D0));	// 86308 mov     ax, 2D0h ;~ 275C:0678
cs=0x275c;eip=0x00067b; 	R(JMP(loc_36280));	// 86309 jmp     short loc_36280 ;~ 275C:067B
loc_3621d:
	// 9920 
cs=0x275c;eip=0x00067d; 	T(CMP(ax, 0x5A0));	// 86313 cmp     ax, 5A0h ;~ 275C:067D
cs=0x275c;eip=0x000680; 	R(JNZ(loc_36237));	// 86314 jnz     short loc_36237 ;~ 275C:0680
cs=0x275c;eip=0x000682; 	X(NEG(*(dw*)((&unk_4a064))));	// 86315 neg     word ptr unk_4A064 ;~ 275C:0682
cs=0x275c;eip=0x000686; 	X(NEG(*(dw*)((&unk_4a068))));	// 86316 neg     word ptr unk_4A068 ;~ 275C:0686
cs=0x275c;eip=0x00068a; 	X(NEG(*(dw*)((&unk_4a06a))));	// 86317 neg     word ptr unk_4A06A ;~ 275C:068A
cs=0x275c;eip=0x00068e; 	X(NEG(*(dw*)((&unk_4a06e))));	// 86318 neg     word ptr unk_4A06E ;~ 275C:068E
cs=0x275c;eip=0x000692; 	T(MOV(ax, 0x5A0));	// 86319 mov     ax, 5A0h ;~ 275C:0692
cs=0x275c;eip=0x000695; 	R(JMP(loc_36280));	// 86320 jmp     short loc_36280 ;~ 275C:0695
loc_36237:
	// 9921 
cs=0x275c;eip=0x000697; 	T(CMP(ax, 0x870));	// 86324 cmp     ax, 870h ;~ 275C:0697
cs=0x275c;eip=0x00069a; 	R(JNZ(loc_3625f));	// 86325 jnz     short loc_3625F ;~ 275C:069A
cs=0x275c;eip=0x00069c; 	T(MOV(ax, *(dw*)((&unk_4a064))));	// 86326 mov     ax, word ptr unk_4A064 ;~ 275C:069C
cs=0x275c;eip=0x00069f; 	T(MOV(dx, *(dw*)((&unk_4a068))));	// 86327 mov     dx, word ptr unk_4A068 ;~ 275C:069F
cs=0x275c;eip=0x0006a3; 	T(NEG(dx));	// 86328 neg     dx ;~ 275C:06A3
cs=0x275c;eip=0x0006a5; 	X(MOV(*(dw*)((&unk_4a064)), dx));	// 86329 mov     word ptr unk_4A064, dx ;~ 275C:06A5
cs=0x275c;eip=0x0006a9; 	X(MOV(*(dw*)((&unk_4a068)), ax));	// 86330 mov     word ptr unk_4A068, ax ;~ 275C:06A9
cs=0x275c;eip=0x0006ac; 	T(MOV(ax, *(dw*)((&unk_4a06a))));	// 86331 mov     ax, word ptr unk_4A06A ;~ 275C:06AC
cs=0x275c;eip=0x0006af; 	T(MOV(dx, *(dw*)((&unk_4a06e))));	// 86332 mov     dx, word ptr unk_4A06E ;~ 275C:06AF
cs=0x275c;eip=0x0006b3; 	T(NEG(dx));	// 86333 neg     dx ;~ 275C:06B3
cs=0x275c;eip=0x0006b5; 	X(MOV(*(dw*)((&unk_4a06a)), dx));	// 86334 mov     word ptr unk_4A06A, dx ;~ 275C:06B5
cs=0x275c;eip=0x0006b9; 	X(MOV(*(dw*)((&unk_4a06e)), ax));	// 86335 mov     word ptr unk_4A06E, ax ;~ 275C:06B9
cs=0x275c;eip=0x0006bc; 	T(MOV(ax, 0x870));	// 86336 mov     ax, 870h ;~ 275C:06BC
loc_3625f:
	// 9922 
cs=0x275c;eip=0x0006bf; 	X(MOV(unk_4a085, 0));	// 86339 mov     byte ptr unk_4A085, 0 ;~ 275C:06BF
cs=0x275c;eip=0x0006c4; 	T(TEST(*(dw*)(raddr(es,bx+2)), 0x800));	// 86340 test    word ptr es:[bx+2], 800h ;~ 275C:06C4
cs=0x275c;eip=0x0006ca; 	R(JZ(loc_36280));	// 86341 jz      short loc_36280 ;~ 275C:06CA
cs=0x275c;eip=0x0006cc; 	T(ADD(bx, 0x18));	// 86342 add     bx, 18h ;~ 275C:06CC
cs=0x275c;eip=0x0006cf; 	T(MOV(bx, *(dw*)(raddr(es,bx))));	// 86343 mov     bx, es:[bx] ;~ 275C:06CF
cs=0x275c;eip=0x0006d2; 	T(TEST(*(raddr(ds,bx+0x16)), 0x20));	// 86344 test    byte ptr [bx+16h], 20h ;~ 275C:06D2
cs=0x275c;eip=0x0006d6; 	R(JZ(loc_36280));	// 86345 jz      short loc_36280 ;~ 275C:06D6
cs=0x275c;eip=0x0006d8; 	X(MOV(unk_4a085, 1));	// 86346 mov     byte ptr unk_4A085, 1 ;~ 275C:06D8
cs=0x275c;eip=0x0006dd; 	R(CALL(sub_3609e,0));	// 86347 call    sub_3609E ;~ 275C:06DD
loc_36280:
	// 9923 
cs=0x275c;eip=0x0006e0; 	X(MOV(*(dw*)((&unk_4a07f)), ax));	// 86351 mov     word ptr unk_4A07F, ax ;~ 275C:06E0
cs=0x275c;eip=0x0006e3; 	T(MOV(bp, *(dw*)((&unk_4a09e))));	// 86352 mov     bp, word ptr unk_4A09E ;~ 275C:06E3
cs=0x275c;eip=0x0006e7; 	T(MOV(bx, *(dw*)((&unk_570c6))));	// 86353 mov     bx, word ptr unk_570C6 ;~ 275C:06E7
cs=0x275c;eip=0x0006eb; 	T(MOV(cx, *(dw*)((&unk_570c8))));	// 86354 mov     cx, word ptr unk_570C8 ;~ 275C:06EB
cs=0x275c;eip=0x0006ef; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x2C))));	// 86355 mov     ax, [bp+2Ch] ;~ 275C:06EF
cs=0x275c;eip=0x0006f2; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x2E))));	// 86356 mov     dx, [bp+2Eh] ;~ 275C:06F2
cs=0x275c;eip=0x0006f5; 	T(SUB(ax, bx));	// 86357 sub     ax, bx ;~ 275C:06F5
cs=0x275c;eip=0x0006f7; 	T(SBB(dx, cx));	// 86358 sbb     dx, cx ;~ 275C:06F7
cs=0x275c;eip=0x0006f9; 	T(MOV(al, ah));	// 86359 mov     al, ah ;~ 275C:06F9
cs=0x275c;eip=0x0006fb; 	T(MOV(ah, dl));	// 86360 mov     ah, dl ;~ 275C:06FB
cs=0x275c;eip=0x0006fd; 	X(MOV(*(dw*)((&unk_4a070)), ax));	// 86361 mov     word ptr unk_4A070, ax ;~ 275C:06FD
cs=0x275c;eip=0x000700; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x30))));	// 86362 mov     ax, [bp+30h] ;~ 275C:0700
cs=0x275c;eip=0x000703; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x32))));	// 86363 mov     dx, [bp+32h] ;~ 275C:0703
cs=0x275c;eip=0x000706; 	T(ADD(ax, bx));	// 86364 add     ax, bx ;~ 275C:0706
cs=0x275c;eip=0x000708; 	T(ADC(dx, cx));	// 86365 adc     dx, cx ;~ 275C:0708
cs=0x275c;eip=0x00070a; 	T(MOV(al, ah));	// 86366 mov     al, ah ;~ 275C:070A
cs=0x275c;eip=0x00070c; 	T(MOV(ah, dl));	// 86367 mov     ah, dl ;~ 275C:070C
cs=0x275c;eip=0x00070e; 	X(MOV(*(dw*)((&unk_4a072)), ax));	// 86368 mov     word ptr unk_4A072, ax ;~ 275C:070E
cs=0x275c;eip=0x000711; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x34))));	// 86369 mov     ax, [bp+34h] ;~ 275C:0711
cs=0x275c;eip=0x000714; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x36))));	// 86370 mov     dx, [bp+36h] ;~ 275C:0714
cs=0x275c;eip=0x000717; 	T(SUB(ax, bx));	// 86371 sub     ax, bx ;~ 275C:0717
cs=0x275c;eip=0x000719; 	T(SBB(dx, cx));	// 86372 sbb     dx, cx ;~ 275C:0719
cs=0x275c;eip=0x00071b; 	T(MOV(al, ah));	// 86373 mov     al, ah ;~ 275C:071B
cs=0x275c;eip=0x00071d; 	T(MOV(ah, dl));	// 86374 mov     ah, dl ;~ 275C:071D
cs=0x275c;eip=0x00071f; 	X(MOV(*(dw*)((&unk_4a074)), ax));	// 86375 mov     word ptr unk_4A074, ax ;~ 275C:071F
cs=0x275c;eip=0x000722; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x38))));	// 86376 mov     ax, [bp+38h] ;~ 275C:0722
cs=0x275c;eip=0x000725; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x3A))));	// 86377 mov     dx, [bp+3Ah] ;~ 275C:0725
cs=0x275c;eip=0x000728; 	T(ADD(ax, bx));	// 86378 add     ax, bx ;~ 275C:0728
cs=0x275c;eip=0x00072a; 	T(ADC(dx, cx));	// 86379 adc     dx, cx ;~ 275C:072A
cs=0x275c;eip=0x00072c; 	T(MOV(al, ah));	// 86380 mov     al, ah ;~ 275C:072C
cs=0x275c;eip=0x00072e; 	T(MOV(ah, dl));	// 86381 mov     ah, dl ;~ 275C:072E
cs=0x275c;eip=0x000730; 	X(MOV(*(dw*)((&unk_4a076)), ax));	// 86382 mov     word ptr unk_4A076, ax ;~ 275C:0730
cs=0x275c;eip=0x000733; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x3C))));	// 86383 mov     ax, [bp+3Ch] ;~ 275C:0733
cs=0x275c;eip=0x000736; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x3E))));	// 86384 mov     dx, [bp+3Eh] ;~ 275C:0736
cs=0x275c;eip=0x000739; 	T(SUB(ax, bx));	// 86385 sub     ax, bx ;~ 275C:0739
cs=0x275c;eip=0x00073b; 	T(SBB(dx, cx));	// 86386 sbb     dx, cx ;~ 275C:073B
cs=0x275c;eip=0x00073d; 	T(MOV(al, ah));	// 86387 mov     al, ah ;~ 275C:073D
cs=0x275c;eip=0x00073f; 	T(MOV(ah, dl));	// 86388 mov     ah, dl ;~ 275C:073F
cs=0x275c;eip=0x000741; 	X(MOV(*(dw*)((&unk_4a078)), ax));	// 86389 mov     word ptr unk_4A078, ax ;~ 275C:0741
cs=0x275c;eip=0x000744; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x40))));	// 86390 mov     ax, [bp+40h] ;~ 275C:0744
cs=0x275c;eip=0x000747; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x42))));	// 86391 mov     dx, [bp+42h] ;~ 275C:0747
cs=0x275c;eip=0x00074a; 	T(ADD(ax, bx));	// 86392 add     ax, bx ;~ 275C:074A
cs=0x275c;eip=0x00074c; 	T(ADC(dx, cx));	// 86393 adc     dx, cx ;~ 275C:074C
cs=0x275c;eip=0x00074e; 	T(MOV(al, ah));	// 86394 mov     al, ah ;~ 275C:074E
cs=0x275c;eip=0x000750; 	T(MOV(ah, dl));	// 86395 mov     ah, dl ;~ 275C:0750
cs=0x275c;eip=0x000752; 	X(MOV(*(dw*)((&unk_4a07a)), ax));	// 86396 mov     word ptr unk_4A07A, ax ;~ 275C:0752
cs=0x275c;eip=0x000755; 	R(CALL(sub_35f66,0));	// 86397 call    sub_35F66 ;~ 275C:0755
cs=0x275c;eip=0x000758; 	R(CALL(sub_35fac,0));	// 86398 call    sub_35FAC ;~ 275C:0758
cs=0x275c;eip=0x00075b; 	X(MOV(unk_4a07e, 0x0F));	// 86399 mov     byte ptr unk_4A07E, 0Fh ;~ 275C:075B
loc_36300:
	// 9924 
cs=0x275c;eip=0x000760; 	T(MOV(al, unk_4a07c));	// 86403 mov     al, byte ptr unk_4A07C ;~ 275C:0760
cs=0x275c;eip=0x000763; 	T(OR(al, unk_4a07d));	// 86404 or      al, byte ptr unk_4A07D ;~ 275C:0763
cs=0x275c;eip=0x000767; 	R(JNZ(loc_3630c));	// 86405 jnz     short loc_3630C ;~ 275C:0767
cs=0x275c;eip=0x000769; 	R(JMP(loc_36536));	// 86406 jmp     loc_36536 ;~ 275C:0769
loc_3630c:
	// 9925 
cs=0x275c;eip=0x00076c; 	X(DEC(unk_4a07e));	// 86410 dec     byte ptr unk_4A07E ;~ 275C:076C
cs=0x275c;eip=0x000770; 	R(JNZ(loc_36315));	// 86411 jnz     short loc_36315 ;~ 275C:0770
cs=0x275c;eip=0x000772; 	R(JMP(loc_36536));	// 86412 jmp     loc_36536 ;~ 275C:0772
loc_36315:
	// 9926 
cs=0x275c;eip=0x000775; 	T(MOV(al, unk_4a07c));	// 86416 mov     al, byte ptr unk_4A07C ;~ 275C:0775
cs=0x275c;eip=0x000778; 	T(AND(al, unk_4a07d));	// 86417 and     al, byte ptr unk_4A07D ;~ 275C:0778
cs=0x275c;eip=0x00077c; 	R(JZ(loc_36322));	// 86418 jz      short loc_36322 ;~ 275C:077C
cs=0x275c;eip=0x00077e; 	T(CLC);	// 86419 clc ;~ 275C:077E
cs=0x275c;eip=0x00077f; 	R(JMP(loc_36610));	// 86420 jmp     loc_36610 ;~ 275C:077F
loc_36322:
	// 9927 
cs=0x275c;eip=0x000782; 	T(MOV(si, *(dw*)((&unk_4a06a))));	// 86424 mov     si, word ptr unk_4A06A ;~ 275C:0782
cs=0x275c;eip=0x000786; 	T(SUB(si, *(dw*)((&unk_4a064))));	// 86425 sub     si, word ptr unk_4A064 ;~ 275C:0786
cs=0x275c;eip=0x00078a; 	T(MOV(di, *(dw*)((&unk_4a06c))));	// 86426 mov     di, word ptr unk_4A06C ;~ 275C:078A
cs=0x275c;eip=0x00078e; 	T(SUB(di, *(dw*)((&unk_4a066))));	// 86427 sub     di, word ptr unk_4A066 ;~ 275C:078E
cs=0x275c;eip=0x000792; 	T(MOV(bp, *(dw*)((&unk_4a06e))));	// 86428 mov     bp, word ptr unk_4A06E ;~ 275C:0792
cs=0x275c;eip=0x000796; 	T(SUB(bp, *(dw*)((&unk_4a068))));	// 86429 sub     bp, word ptr unk_4A068 ;~ 275C:0796
cs=0x275c;eip=0x00079a; 	T(CMP(unk_4a07c, 0));	// 86430 cmp     byte ptr unk_4A07C, 0 ;~ 275C:079A
cs=0x275c;eip=0x00079f; 	R(JNZ(loc_36344));	// 86431 jnz     short loc_36344 ;~ 275C:079F
cs=0x275c;eip=0x0007a1; 	R(JMP(loc_3643d));	// 86432 jmp     loc_3643D ;~ 275C:07A1
loc_36344:
	// 9928 
cs=0x275c;eip=0x0007a4; 	T(MOV(al, unk_4a07c));	// 86436 mov     al, byte ptr unk_4A07C ;~ 275C:07A4
cs=0x275c;eip=0x0007a7; 	T(TEST(al, 4));	// 86437 test    al, 4 ;~ 275C:07A7
cs=0x275c;eip=0x0007a9; 	R(JZ(loc_3636f));	// 86438 jz      short loc_3636F ;~ 275C:07A9
cs=0x275c;eip=0x0007ab; 	T(MOV(ax, *(dw*)((&unk_4a070))));	// 86439 mov     ax, word ptr unk_4A070 ;~ 275C:07AB
cs=0x275c;eip=0x0007ae; 	T(MOV(cx, ax));	// 86440 mov     cx, ax ;~ 275C:07AE
cs=0x275c;eip=0x0007b0; 	T(SUB(ax, *(dw*)((&unk_4a064))));	// 86441 sub     ax, word ptr unk_4A064 ;~ 275C:07B0
cs=0x275c;eip=0x0007b4; 	T(MOV(bx, ax));	// 86442 mov     bx, ax ;~ 275C:07B4
cs=0x275c;eip=0x0007b6; 	T(IMUL1_2(di));	// 86443 imul    di ;~ 275C:07B6
cs=0x275c;eip=0x0007b8; 	T(IDIV2(si));	// 86444 idiv    si ;~ 275C:07B8
cs=0x275c;eip=0x0007ba; 	X(ADD(*(dw*)((&unk_4a066)), ax));	// 86445 add     word ptr unk_4A066, ax ;~ 275C:07BA
cs=0x275c;eip=0x0007be; 	T(MOV(ax, bx));	// 86446 mov     ax, bx ;~ 275C:07BE
cs=0x275c;eip=0x0007c0; 	T(IMUL1_2(bp));	// 86447 imul    bp ;~ 275C:07C0
cs=0x275c;eip=0x0007c2; 	T(IDIV2(si));	// 86448 idiv    si ;~ 275C:07C2
cs=0x275c;eip=0x0007c4; 	X(ADD(*(dw*)((&unk_4a068)), ax));	// 86449 add     word ptr unk_4A068, ax ;~ 275C:07C4
cs=0x275c;eip=0x0007c8; 	X(MOV(*(dw*)((&unk_4a064)), cx));	// 86450 mov     word ptr unk_4A064, cx ;~ 275C:07C8
cs=0x275c;eip=0x0007cc; 	R(JMP(loc_36437));	// 86451 jmp     loc_36437 ;~ 275C:07CC
loc_3636f:
	// 9929 
cs=0x275c;eip=0x0007cf; 	T(TEST(al, 8));	// 86455 test    al, 8 ;~ 275C:07CF
cs=0x275c;eip=0x0007d1; 	R(JZ(loc_36397));	// 86456 jz      short loc_36397 ;~ 275C:07D1
cs=0x275c;eip=0x0007d3; 	T(MOV(ax, *(dw*)((&unk_4a072))));	// 86457 mov     ax, word ptr unk_4A072 ;~ 275C:07D3
cs=0x275c;eip=0x0007d6; 	T(MOV(cx, ax));	// 86458 mov     cx, ax ;~ 275C:07D6
cs=0x275c;eip=0x0007d8; 	T(SUB(ax, *(dw*)((&unk_4a064))));	// 86459 sub     ax, word ptr unk_4A064 ;~ 275C:07D8
cs=0x275c;eip=0x0007dc; 	T(MOV(bx, ax));	// 86460 mov     bx, ax ;~ 275C:07DC
cs=0x275c;eip=0x0007de; 	T(IMUL1_2(di));	// 86461 imul    di ;~ 275C:07DE
cs=0x275c;eip=0x0007e0; 	T(IDIV2(si));	// 86462 idiv    si ;~ 275C:07E0
cs=0x275c;eip=0x0007e2; 	X(ADD(*(dw*)((&unk_4a066)), ax));	// 86463 add     word ptr unk_4A066, ax ;~ 275C:07E2
cs=0x275c;eip=0x0007e6; 	T(MOV(ax, bx));	// 86464 mov     ax, bx ;~ 275C:07E6
cs=0x275c;eip=0x0007e8; 	T(IMUL1_2(bp));	// 86465 imul    bp ;~ 275C:07E8
cs=0x275c;eip=0x0007ea; 	T(IDIV2(si));	// 86466 idiv    si ;~ 275C:07EA
cs=0x275c;eip=0x0007ec; 	X(ADD(*(dw*)((&unk_4a068)), ax));	// 86467 add     word ptr unk_4A068, ax ;~ 275C:07EC
cs=0x275c;eip=0x0007f0; 	X(MOV(*(dw*)((&unk_4a064)), cx));	// 86468 mov     word ptr unk_4A064, cx ;~ 275C:07F0
cs=0x275c;eip=0x0007f4; 	R(JMP(loc_36437));	// 86469 jmp     loc_36437 ;~ 275C:07F4
loc_36397:
	// 9930 
cs=0x275c;eip=0x0007f7; 	T(TEST(al, 1));	// 86473 test    al, 1 ;~ 275C:07F7
cs=0x275c;eip=0x0007f9; 	R(JZ(loc_363bf));	// 86474 jz      short loc_363BF ;~ 275C:07F9
cs=0x275c;eip=0x0007fb; 	T(MOV(ax, *(dw*)((&unk_4a076))));	// 86475 mov     ax, word ptr unk_4A076 ;~ 275C:07FB
cs=0x275c;eip=0x0007fe; 	T(MOV(cx, ax));	// 86476 mov     cx, ax ;~ 275C:07FE
cs=0x275c;eip=0x000800; 	T(SUB(ax, *(dw*)((&unk_4a066))));	// 86477 sub     ax, word ptr unk_4A066 ;~ 275C:0800
cs=0x275c;eip=0x000804; 	T(MOV(bx, ax));	// 86478 mov     bx, ax ;~ 275C:0804
cs=0x275c;eip=0x000806; 	T(IMUL1_2(si));	// 86479 imul    si ;~ 275C:0806
cs=0x275c;eip=0x000808; 	T(IDIV2(di));	// 86480 idiv    di ;~ 275C:0808
cs=0x275c;eip=0x00080a; 	X(ADD(*(dw*)((&unk_4a064)), ax));	// 86481 add     word ptr unk_4A064, ax ;~ 275C:080A
cs=0x275c;eip=0x00080e; 	T(MOV(ax, bx));	// 86482 mov     ax, bx ;~ 275C:080E
cs=0x275c;eip=0x000810; 	T(IMUL1_2(bp));	// 86483 imul    bp ;~ 275C:0810
cs=0x275c;eip=0x000812; 	T(IDIV2(di));	// 86484 idiv    di ;~ 275C:0812
cs=0x275c;eip=0x000814; 	X(ADD(*(dw*)((&unk_4a068)), ax));	// 86485 add     word ptr unk_4A068, ax ;~ 275C:0814
cs=0x275c;eip=0x000818; 	X(MOV(*(dw*)((&unk_4a066)), cx));	// 86486 mov     word ptr unk_4A066, cx ;~ 275C:0818
cs=0x275c;eip=0x00081c; 	R(JMP(loc_36437));	// 86487 jmp     short loc_36437 ;~ 275C:081C
loc_363bf:
	// 9931 
cs=0x275c;eip=0x00081f; 	T(TEST(al, 2));	// 86493 test    al, 2 ;~ 275C:081F
cs=0x275c;eip=0x000821; 	R(JZ(loc_363e7));	// 86494 jz      short loc_363E7 ;~ 275C:0821
cs=0x275c;eip=0x000823; 	T(MOV(ax, *(dw*)((&unk_4a074))));	// 86495 mov     ax, word ptr unk_4A074 ;~ 275C:0823
cs=0x275c;eip=0x000826; 	T(MOV(cx, ax));	// 86496 mov     cx, ax ;~ 275C:0826
cs=0x275c;eip=0x000828; 	T(SUB(ax, *(dw*)((&unk_4a066))));	// 86497 sub     ax, word ptr unk_4A066 ;~ 275C:0828
cs=0x275c;eip=0x00082c; 	T(MOV(bx, ax));	// 86498 mov     bx, ax ;~ 275C:082C
cs=0x275c;eip=0x00082e; 	T(IMUL1_2(si));	// 86499 imul    si ;~ 275C:082E
cs=0x275c;eip=0x000830; 	T(IDIV2(di));	// 86500 idiv    di ;~ 275C:0830
cs=0x275c;eip=0x000832; 	X(ADD(*(dw*)((&unk_4a064)), ax));	// 86501 add     word ptr unk_4A064, ax ;~ 275C:0832
cs=0x275c;eip=0x000836; 	T(MOV(ax, bx));	// 86502 mov     ax, bx ;~ 275C:0836
cs=0x275c;eip=0x000838; 	T(IMUL1_2(bp));	// 86503 imul    bp ;~ 275C:0838
cs=0x275c;eip=0x00083a; 	T(IDIV2(di));	// 86504 idiv    di ;~ 275C:083A
cs=0x275c;eip=0x00083c; 	X(ADD(*(dw*)((&unk_4a068)), ax));	// 86505 add     word ptr unk_4A068, ax ;~ 275C:083C
cs=0x275c;eip=0x000840; 	X(MOV(*(dw*)((&unk_4a066)), cx));	// 86506 mov     word ptr unk_4A066, cx ;~ 275C:0840
cs=0x275c;eip=0x000844; 	R(JMP(loc_36437));	// 86507 jmp     short loc_36437 ;~ 275C:0844
loc_363e7:
	// 9932 
cs=0x275c;eip=0x000847; 	T(TEST(al, 0x10));	// 86513 test    al, 10h ;~ 275C:0847
cs=0x275c;eip=0x000849; 	R(JZ(loc_3640f));	// 86514 jz      short loc_3640F ;~ 275C:0849
cs=0x275c;eip=0x00084b; 	T(MOV(ax, *(dw*)((&unk_4a078))));	// 86515 mov     ax, word ptr unk_4A078 ;~ 275C:084B
cs=0x275c;eip=0x00084e; 	T(MOV(cx, ax));	// 86516 mov     cx, ax ;~ 275C:084E
cs=0x275c;eip=0x000850; 	T(SUB(ax, *(dw*)((&unk_4a068))));	// 86517 sub     ax, word ptr unk_4A068 ;~ 275C:0850
cs=0x275c;eip=0x000854; 	T(MOV(bx, ax));	// 86518 mov     bx, ax ;~ 275C:0854
cs=0x275c;eip=0x000856; 	T(IMUL1_2(si));	// 86519 imul    si ;~ 275C:0856
cs=0x275c;eip=0x000858; 	T(IDIV2(bp));	// 86520 idiv    bp ;~ 275C:0858
cs=0x275c;eip=0x00085a; 	X(ADD(*(dw*)((&unk_4a064)), ax));	// 86521 add     word ptr unk_4A064, ax ;~ 275C:085A
cs=0x275c;eip=0x00085e; 	T(MOV(ax, bx));	// 86522 mov     ax, bx ;~ 275C:085E
cs=0x275c;eip=0x000860; 	T(IMUL1_2(di));	// 86523 imul    di ;~ 275C:0860
cs=0x275c;eip=0x000862; 	T(IDIV2(bp));	// 86524 idiv    bp ;~ 275C:0862
cs=0x275c;eip=0x000864; 	X(ADD(*(dw*)((&unk_4a066)), ax));	// 86525 add     word ptr unk_4A066, ax ;~ 275C:0864
cs=0x275c;eip=0x000868; 	X(MOV(*(dw*)((&unk_4a068)), cx));	// 86526 mov     word ptr unk_4A068, cx ;~ 275C:0868
cs=0x275c;eip=0x00086c; 	R(JMP(loc_36437));	// 86527 jmp     short loc_36437 ;~ 275C:086C
loc_3640f:
	// 9933 
cs=0x275c;eip=0x00086f; 	T(TEST(al, 0x20));	// 86533 test    al, 20h ;~ 275C:086F
cs=0x275c;eip=0x000871; 	R(JZ(loc_36437));	// 86534 jz      short loc_36437 ;~ 275C:0871
cs=0x275c;eip=0x000873; 	T(MOV(ax, *(dw*)((&unk_4a07a))));	// 86535 mov     ax, word ptr unk_4A07A ;~ 275C:0873
cs=0x275c;eip=0x000876; 	T(MOV(cx, ax));	// 86536 mov     cx, ax ;~ 275C:0876
cs=0x275c;eip=0x000878; 	T(SUB(ax, *(dw*)((&unk_4a068))));	// 86537 sub     ax, word ptr unk_4A068 ;~ 275C:0878
cs=0x275c;eip=0x00087c; 	T(MOV(bx, ax));	// 86538 mov     bx, ax ;~ 275C:087C
cs=0x275c;eip=0x00087e; 	T(IMUL1_2(si));	// 86539 imul    si ;~ 275C:087E
cs=0x275c;eip=0x000880; 	T(IDIV2(bp));	// 86540 idiv    bp ;~ 275C:0880
cs=0x275c;eip=0x000882; 	X(ADD(*(dw*)((&unk_4a064)), ax));	// 86541 add     word ptr unk_4A064, ax ;~ 275C:0882
cs=0x275c;eip=0x000886; 	T(MOV(ax, bx));	// 86542 mov     ax, bx ;~ 275C:0886
cs=0x275c;eip=0x000888; 	T(IMUL1_2(di));	// 86543 imul    di ;~ 275C:0888
cs=0x275c;eip=0x00088a; 	T(IDIV2(bp));	// 86544 idiv    bp ;~ 275C:088A
cs=0x275c;eip=0x00088c; 	X(ADD(*(dw*)((&unk_4a066)), ax));	// 86545 add     word ptr unk_4A066, ax ;~ 275C:088C
cs=0x275c;eip=0x000890; 	X(MOV(*(dw*)((&unk_4a068)), cx));	// 86546 mov     word ptr unk_4A068, cx ;~ 275C:0890
cs=0x275c;eip=0x000894; 	R(JMP(loc_36437));	// 86547 jmp     short loc_36437 ;~ 275C:0894
loc_36437:
	// 9934 
cs=0x275c;eip=0x000897; 	R(CALL(sub_35f66,0));	// 86554 call    sub_35F66 ;~ 275C:0897
cs=0x275c;eip=0x00089a; 	R(JMP(loc_36300));	// 86555 jmp     loc_36300 ;~ 275C:089A
loc_3643d:
	// 9935 
cs=0x275c;eip=0x00089d; 	T(MOV(al, unk_4a07c));	// 86559 mov     al, byte ptr unk_4A07C ;~ 275C:089D
cs=0x275c;eip=0x0008a0; 	T(TEST(al, 4));	// 86560 test    al, 4 ;~ 275C:08A0
cs=0x275c;eip=0x0008a2; 	R(JZ(loc_36468));	// 86561 jz      short loc_36468 ;~ 275C:08A2
cs=0x275c;eip=0x0008a4; 	T(MOV(ax, *(dw*)((&unk_4a070))));	// 86562 mov     ax, word ptr unk_4A070 ;~ 275C:08A4
cs=0x275c;eip=0x0008a7; 	T(MOV(cx, ax));	// 86563 mov     cx, ax ;~ 275C:08A7
cs=0x275c;eip=0x0008a9; 	T(SUB(ax, *(dw*)((&unk_4a06a))));	// 86564 sub     ax, word ptr unk_4A06A ;~ 275C:08A9
cs=0x275c;eip=0x0008ad; 	T(MOV(bx, ax));	// 86565 mov     bx, ax ;~ 275C:08AD
cs=0x275c;eip=0x0008af; 	T(IMUL1_2(di));	// 86566 imul    di ;~ 275C:08AF
cs=0x275c;eip=0x0008b1; 	T(IDIV2(si));	// 86567 idiv    si ;~ 275C:08B1
cs=0x275c;eip=0x0008b3; 	X(ADD(*(dw*)((&unk_4a06c)), ax));	// 86568 add     word ptr unk_4A06C, ax ;~ 275C:08B3
cs=0x275c;eip=0x0008b7; 	T(MOV(ax, bx));	// 86569 mov     ax, bx ;~ 275C:08B7
cs=0x275c;eip=0x0008b9; 	T(IMUL1_2(bp));	// 86570 imul    bp ;~ 275C:08B9
cs=0x275c;eip=0x0008bb; 	T(IDIV2(si));	// 86571 idiv    si ;~ 275C:08BB
cs=0x275c;eip=0x0008bd; 	X(ADD(*(dw*)((&unk_4a06e)), ax));	// 86572 add     word ptr unk_4A06E, ax ;~ 275C:08BD
cs=0x275c;eip=0x0008c1; 	X(MOV(*(dw*)((&unk_4a06a)), cx));	// 86573 mov     word ptr unk_4A06A, cx ;~ 275C:08C1
cs=0x275c;eip=0x0008c5; 	R(JMP(loc_36530));	// 86574 jmp     loc_36530 ;~ 275C:08C5
loc_36468:
	// 9936 
cs=0x275c;eip=0x0008c8; 	T(TEST(al, 8));	// 86578 test    al, 8 ;~ 275C:08C8
cs=0x275c;eip=0x0008ca; 	R(JZ(loc_36490));	// 86579 jz      short loc_36490 ;~ 275C:08CA
cs=0x275c;eip=0x0008cc; 	T(MOV(ax, *(dw*)((&unk_4a072))));	// 86580 mov     ax, word ptr unk_4A072 ;~ 275C:08CC
cs=0x275c;eip=0x0008cf; 	T(MOV(cx, ax));	// 86581 mov     cx, ax ;~ 275C:08CF
cs=0x275c;eip=0x0008d1; 	T(SUB(ax, *(dw*)((&unk_4a06a))));	// 86582 sub     ax, word ptr unk_4A06A ;~ 275C:08D1
cs=0x275c;eip=0x0008d5; 	T(MOV(bx, ax));	// 86583 mov     bx, ax ;~ 275C:08D5
cs=0x275c;eip=0x0008d7; 	T(IMUL1_2(di));	// 86584 imul    di ;~ 275C:08D7
cs=0x275c;eip=0x0008d9; 	T(IDIV2(si));	// 86585 idiv    si ;~ 275C:08D9
cs=0x275c;eip=0x0008db; 	X(ADD(*(dw*)((&unk_4a06c)), ax));	// 86586 add     word ptr unk_4A06C, ax ;~ 275C:08DB
cs=0x275c;eip=0x0008df; 	T(MOV(ax, bx));	// 86587 mov     ax, bx ;~ 275C:08DF
cs=0x275c;eip=0x0008e1; 	T(IMUL1_2(bp));	// 86588 imul    bp ;~ 275C:08E1
cs=0x275c;eip=0x0008e3; 	T(IDIV2(si));	// 86589 idiv    si ;~ 275C:08E3
cs=0x275c;eip=0x0008e5; 	X(ADD(*(dw*)((&unk_4a06e)), ax));	// 86590 add     word ptr unk_4A06E, ax ;~ 275C:08E5
cs=0x275c;eip=0x0008e9; 	X(MOV(*(dw*)((&unk_4a06a)), cx));	// 86591 mov     word ptr unk_4A06A, cx ;~ 275C:08E9
cs=0x275c;eip=0x0008ed; 	R(JMP(loc_36530));	// 86592 jmp     loc_36530 ;~ 275C:08ED
loc_36490:
	// 9937 
cs=0x275c;eip=0x0008f0; 	T(TEST(al, 1));	// 86596 test    al, 1 ;~ 275C:08F0
cs=0x275c;eip=0x0008f2; 	R(JZ(loc_364b8));	// 86597 jz      short loc_364B8 ;~ 275C:08F2
cs=0x275c;eip=0x0008f4; 	T(MOV(ax, *(dw*)((&unk_4a076))));	// 86598 mov     ax, word ptr unk_4A076 ;~ 275C:08F4
cs=0x275c;eip=0x0008f7; 	T(MOV(cx, ax));	// 86599 mov     cx, ax ;~ 275C:08F7
cs=0x275c;eip=0x0008f9; 	T(SUB(ax, *(dw*)((&unk_4a06c))));	// 86600 sub     ax, word ptr unk_4A06C ;~ 275C:08F9
cs=0x275c;eip=0x0008fd; 	T(MOV(bx, ax));	// 86601 mov     bx, ax ;~ 275C:08FD
cs=0x275c;eip=0x0008ff; 	T(IMUL1_2(si));	// 86602 imul    si ;~ 275C:08FF
cs=0x275c;eip=0x000901; 	T(IDIV2(di));	// 86603 idiv    di ;~ 275C:0901
cs=0x275c;eip=0x000903; 	X(ADD(*(dw*)((&unk_4a06a)), ax));	// 86604 add     word ptr unk_4A06A, ax ;~ 275C:0903
cs=0x275c;eip=0x000907; 	T(MOV(ax, bx));	// 86605 mov     ax, bx ;~ 275C:0907
cs=0x275c;eip=0x000909; 	T(IMUL1_2(bp));	// 86606 imul    bp ;~ 275C:0909
cs=0x275c;eip=0x00090b; 	T(IDIV2(di));	// 86607 idiv    di ;~ 275C:090B
cs=0x275c;eip=0x00090d; 	X(ADD(*(dw*)((&unk_4a06e)), ax));	// 86608 add     word ptr unk_4A06E, ax ;~ 275C:090D
cs=0x275c;eip=0x000911; 	X(MOV(*(dw*)((&unk_4a06c)), cx));	// 86609 mov     word ptr unk_4A06C, cx ;~ 275C:0911
cs=0x275c;eip=0x000915; 	R(JMP(loc_36530));	// 86610 jmp     short loc_36530 ;~ 275C:0915
loc_364b8:
	// 9938 
cs=0x275c;eip=0x000918; 	T(TEST(al, 2));	// 86615 test    al, 2 ;~ 275C:0918
cs=0x275c;eip=0x00091a; 	R(JZ(loc_364e0));	// 86616 jz      short loc_364E0 ;~ 275C:091A
cs=0x275c;eip=0x00091c; 	T(MOV(ax, *(dw*)((&unk_4a074))));	// 86617 mov     ax, word ptr unk_4A074 ;~ 275C:091C
cs=0x275c;eip=0x00091f; 	T(MOV(cx, ax));	// 86618 mov     cx, ax ;~ 275C:091F
cs=0x275c;eip=0x000921; 	T(SUB(ax, *(dw*)((&unk_4a06c))));	// 86619 sub     ax, word ptr unk_4A06C ;~ 275C:0921
cs=0x275c;eip=0x000925; 	T(MOV(bx, ax));	// 86620 mov     bx, ax ;~ 275C:0925
cs=0x275c;eip=0x000927; 	T(IMUL1_2(si));	// 86621 imul    si ;~ 275C:0927
cs=0x275c;eip=0x000929; 	T(IDIV2(di));	// 86622 idiv    di ;~ 275C:0929
cs=0x275c;eip=0x00092b; 	X(ADD(*(dw*)((&unk_4a06a)), ax));	// 86623 add     word ptr unk_4A06A, ax ;~ 275C:092B
cs=0x275c;eip=0x00092f; 	T(MOV(ax, bx));	// 86624 mov     ax, bx ;~ 275C:092F
cs=0x275c;eip=0x000931; 	T(IMUL1_2(bp));	// 86625 imul    bp ;~ 275C:0931
cs=0x275c;eip=0x000933; 	T(IDIV2(di));	// 86626 idiv    di ;~ 275C:0933
cs=0x275c;eip=0x000935; 	X(ADD(*(dw*)((&unk_4a06e)), ax));	// 86627 add     word ptr unk_4A06E, ax ;~ 275C:0935
cs=0x275c;eip=0x000939; 	X(MOV(*(dw*)((&unk_4a06c)), cx));	// 86628 mov     word ptr unk_4A06C, cx ;~ 275C:0939
cs=0x275c;eip=0x00093d; 	R(JMP(loc_36530));	// 86629 jmp     short loc_36530 ;~ 275C:093D
loc_364e0:
	// 9939 
cs=0x275c;eip=0x000940; 	T(TEST(al, 0x10));	// 86634 test    al, 10h ;~ 275C:0940
cs=0x275c;eip=0x000942; 	R(JZ(loc_36508));	// 86635 jz      short loc_36508 ;~ 275C:0942
cs=0x275c;eip=0x000944; 	T(MOV(ax, *(dw*)((&unk_4a078))));	// 86636 mov     ax, word ptr unk_4A078 ;~ 275C:0944
cs=0x275c;eip=0x000947; 	T(MOV(cx, ax));	// 86637 mov     cx, ax ;~ 275C:0947
cs=0x275c;eip=0x000949; 	T(SUB(ax, *(dw*)((&unk_4a06e))));	// 86638 sub     ax, word ptr unk_4A06E ;~ 275C:0949
cs=0x275c;eip=0x00094d; 	T(MOV(bx, ax));	// 86639 mov     bx, ax ;~ 275C:094D
cs=0x275c;eip=0x00094f; 	T(IMUL1_2(si));	// 86640 imul    si ;~ 275C:094F
cs=0x275c;eip=0x000951; 	T(IDIV2(bp));	// 86641 idiv    bp ;~ 275C:0951
cs=0x275c;eip=0x000953; 	X(ADD(*(dw*)((&unk_4a06a)), ax));	// 86642 add     word ptr unk_4A06A, ax ;~ 275C:0953
cs=0x275c;eip=0x000957; 	T(MOV(ax, bx));	// 86643 mov     ax, bx ;~ 275C:0957
cs=0x275c;eip=0x000959; 	T(IMUL1_2(di));	// 86644 imul    di ;~ 275C:0959
cs=0x275c;eip=0x00095b; 	T(IDIV2(bp));	// 86645 idiv    bp ;~ 275C:095B
cs=0x275c;eip=0x00095d; 	X(ADD(*(dw*)((&unk_4a06c)), ax));	// 86646 add     word ptr unk_4A06C, ax ;~ 275C:095D
cs=0x275c;eip=0x000961; 	X(MOV(*(dw*)((&unk_4a06e)), cx));	// 86647 mov     word ptr unk_4A06E, cx ;~ 275C:0961
cs=0x275c;eip=0x000965; 	R(JMP(loc_36530));	// 86648 jmp     short loc_36530 ;~ 275C:0965
loc_36508:
	// 9940 
cs=0x275c;eip=0x000968; 	T(TEST(al, 0x20));	// 86653 test    al, 20h ;~ 275C:0968
cs=0x275c;eip=0x00096a; 	R(JZ(loc_36530));	// 86654 jz      short loc_36530 ;~ 275C:096A
cs=0x275c;eip=0x00096c; 	T(MOV(ax, *(dw*)((&unk_4a07a))));	// 86655 mov     ax, word ptr unk_4A07A ;~ 275C:096C
cs=0x275c;eip=0x00096f; 	T(MOV(cx, ax));	// 86656 mov     cx, ax ;~ 275C:096F
cs=0x275c;eip=0x000971; 	T(SUB(ax, *(dw*)((&unk_4a06e))));	// 86657 sub     ax, word ptr unk_4A06E ;~ 275C:0971
cs=0x275c;eip=0x000975; 	T(MOV(bx, ax));	// 86658 mov     bx, ax ;~ 275C:0975
cs=0x275c;eip=0x000977; 	T(IMUL1_2(si));	// 86659 imul    si ;~ 275C:0977
cs=0x275c;eip=0x000979; 	T(IDIV2(bp));	// 86660 idiv    bp ;~ 275C:0979
cs=0x275c;eip=0x00097b; 	X(ADD(*(dw*)((&unk_4a06a)), ax));	// 86661 add     word ptr unk_4A06A, ax ;~ 275C:097B
cs=0x275c;eip=0x00097f; 	T(MOV(ax, bx));	// 86662 mov     ax, bx ;~ 275C:097F
cs=0x275c;eip=0x000981; 	T(IMUL1_2(di));	// 86663 imul    di ;~ 275C:0981
cs=0x275c;eip=0x000983; 	T(IDIV2(bp));	// 86664 idiv    bp ;~ 275C:0983
cs=0x275c;eip=0x000985; 	X(ADD(*(dw*)((&unk_4a06c)), ax));	// 86665 add     word ptr unk_4A06C, ax ;~ 275C:0985
cs=0x275c;eip=0x000989; 	X(MOV(*(dw*)((&unk_4a06e)), cx));	// 86666 mov     word ptr unk_4A06E, cx ;~ 275C:0989
cs=0x275c;eip=0x00098d; 	R(JMP(loc_36530));	// 86667 jmp     short loc_36530 ;~ 275C:098D
loc_36530:
	// 9941 
cs=0x275c;eip=0x000990; 	R(CALL(sub_35fac,0));	// 86673 call    sub_35FAC ;~ 275C:0990
cs=0x275c;eip=0x000993; 	R(JMP(loc_36300));	// 86674 jmp     loc_36300 ;~ 275C:0993
loc_36536:
	// 9942 
cs=0x275c;eip=0x000996; 	T(MOV(bx, *(dw*)((&unk_4a09e))));	// 86679 mov     bx, word ptr unk_4A09E ;~ 275C:0996
cs=0x275c;eip=0x00099a; 	T(CMP(*(dw*)(raddr(ds,bx+0x44)), 0));	// 86680 cmp     word ptr [bx+44h], 0 ;~ 275C:099A
cs=0x275c;eip=0x00099e; 	R(JZ(loc_36549));	// 86681 jz      short loc_36549 ;~ 275C:099E
cs=0x275c;eip=0x0009a0; 	R(CALL(sub_3605a,0));	// 86682 call    sub_3605A ;~ 275C:09A0
cs=0x275c;eip=0x0009a3; 	R(JC(loc_36549));	// 86683 jb      short loc_36549 ;~ 275C:09A3
cs=0x275c;eip=0x0009a5; 	T(CLC);	// 86684 clc ;~ 275C:09A5
cs=0x275c;eip=0x0009a6; 	R(JMP(loc_36610));	// 86685 jmp     loc_36610 ;~ 275C:09A6
loc_36549:
	// 9943 
cs=0x275c;eip=0x0009a9; 	T(MOV(ax, *(dw*)((&unk_4a07f))));	// 86690 mov     ax, word ptr unk_4A07F ;~ 275C:09A9
cs=0x275c;eip=0x0009ac; 	T(OR(ax, ax));	// 86691 or      ax, ax ;~ 275C:09AC
cs=0x275c;eip=0x0009ae; 	R(JZ(loc_365ba));	// 86692 jz      short loc_365BA ;~ 275C:09AE
cs=0x275c;eip=0x0009b0; 	T(CMP(ax, 0x2D0));	// 86693 cmp     ax, 2D0h ;~ 275C:09B0
cs=0x275c;eip=0x0009b3; 	R(JNZ(loc_36567));	// 86694 jnz     short loc_36567 ;~ 275C:09B3
cs=0x275c;eip=0x0009b5; 	T(MOV(ax, *(dw*)((&unk_4a064))));	// 86695 mov     ax, word ptr unk_4A064 ;~ 275C:09B5
cs=0x275c;eip=0x0009b8; 	T(MOV(dx, *(dw*)((&unk_4a068))));	// 86696 mov     dx, word ptr unk_4A068 ;~ 275C:09B8
cs=0x275c;eip=0x0009bc; 	X(MOV(*(dw*)((&unk_4a068)), ax));	// 86697 mov     word ptr unk_4A068, ax ;~ 275C:09BC
cs=0x275c;eip=0x0009bf; 	T(NEG(dx));	// 86698 neg     dx ;~ 275C:09BF
cs=0x275c;eip=0x0009c1; 	X(MOV(*(dw*)((&unk_4a064)), dx));	// 86699 mov     word ptr unk_4A064, dx ;~ 275C:09C1
cs=0x275c;eip=0x0009c5; 	R(JMP(loc_365ba));	// 86700 jmp     short loc_365BA ;~ 275C:09C5
loc_36567:
	// 9944 
cs=0x275c;eip=0x0009c7; 	T(CMP(ax, 0x5A0));	// 86704 cmp     ax, 5A0h ;~ 275C:09C7
cs=0x275c;eip=0x0009ca; 	R(JNZ(loc_36576));	// 86705 jnz     short loc_36576 ;~ 275C:09CA
cs=0x275c;eip=0x0009cc; 	X(NEG(*(dw*)((&unk_4a064))));	// 86706 neg     word ptr unk_4A064 ;~ 275C:09CC
cs=0x275c;eip=0x0009d0; 	X(NEG(*(dw*)((&unk_4a068))));	// 86707 neg     word ptr unk_4A068 ;~ 275C:09D0
cs=0x275c;eip=0x0009d4; 	R(JMP(loc_365ba));	// 86708 jmp     short loc_365BA ;~ 275C:09D4
loc_36576:
	// 9945 
cs=0x275c;eip=0x0009d6; 	T(CMP(ax, 0x870));	// 86712 cmp     ax, 870h ;~ 275C:09D6
cs=0x275c;eip=0x0009d9; 	R(JNZ(loc_3658b));	// 86713 jnz     short loc_3658B ;~ 275C:09D9
cs=0x275c;eip=0x0009db; 	T(MOV(ax, *(dw*)((&unk_4a068))));	// 86714 mov     ax, word ptr unk_4A068 ;~ 275C:09DB
cs=0x275c;eip=0x0009de; 	T(MOV(dx, *(dw*)((&unk_4a064))));	// 86715 mov     dx, word ptr unk_4A064 ;~ 275C:09DE
cs=0x275c;eip=0x0009e2; 	X(MOV(*(dw*)((&unk_4a064)), ax));	// 86716 mov     word ptr unk_4A064, ax ;~ 275C:09E2
cs=0x275c;eip=0x0009e5; 	T(NEG(dx));	// 86717 neg     dx ;~ 275C:09E5
cs=0x275c;eip=0x0009e7; 	X(MOV(*(dw*)((&unk_4a068)), dx));	// 86718 mov     word ptr unk_4A068, dx ;~ 275C:09E7
loc_3658b:
	// 9946 
cs=0x275c;eip=0x0009eb; 	T(CMP(unk_4a085, 0));	// 86721 cmp     byte ptr unk_4A085, 0 ;~ 275C:09EB
cs=0x275c;eip=0x0009f0; 	R(JZ(loc_365ba));	// 86722 jz      short loc_365BA ;~ 275C:09F0
cs=0x275c;eip=0x0009f2; 	T(MOV(bx, ax));	// 86723 mov     bx, ax ;~ 275C:09F2
cs=0x275c;eip=0x0009f4; 	T(MOV(ax, *(dw*)((&unk_4a064))));	// 86724 mov     ax, word ptr unk_4A064 ;~ 275C:09F4
cs=0x275c;eip=0x0009f7; 	X(MOV(*(dw*)((&unk_4a081)), ax));	// 86725 mov     word ptr unk_4A081, ax ;~ 275C:09F7
cs=0x275c;eip=0x0009fa; 	T(MOV(ax, *(dw*)((&unk_4a068))));	// 86726 mov     ax, word ptr unk_4A068 ;~ 275C:09FA
cs=0x275c;eip=0x0009fd; 	X(MOV(*(dw*)((&unk_4a083)), ax));	// 86727 mov     word ptr unk_4A083, ax ;~ 275C:09FD
cs=0x275c;eip=0x000a00; 	T(MOV(ax, 0x26D1));	// 86728 mov     ax, 26D1h ;~ 275C:0A00
cs=0x275c;eip=0x000a03; 	X(PUSH(ax));	// 86729 push    ax ;~ 275C:0A03
cs=0x275c;eip=0x000a04; 	T(MOV(ax, 0x106));	// 86730 mov     ax, 106h ;~ 275C:0A04
cs=0x275c;eip=0x000a07; 	X(PUSH(ax));	// 86731 push    ax ;~ 275C:0A07
cs=0x275c;eip=0x000a08; 	X(PUSH(bx));	// 86732 push    bx ;~ 275C:0A08
cs=0x275c;eip=0x000a09; 	R(CALLF(sub_27d5d,0));	// 86733 call    sub_27D5D ;~ 275C:0A09
cs=0x275c;eip=0x000a0e; 	T(MOV(ax, *(dw*)((&unk_4a081))));	// 86734 mov     ax, word ptr unk_4A081 ;~ 275C:0A0E
cs=0x275c;eip=0x000a11; 	X(MOV(*(dw*)((&unk_4a064)), ax));	// 86735 mov     word ptr unk_4A064, ax ;~ 275C:0A11
cs=0x275c;eip=0x000a14; 	T(MOV(ax, *(dw*)((&unk_4a083))));	// 86736 mov     ax, word ptr unk_4A083 ;~ 275C:0A14
cs=0x275c;eip=0x000a17; 	X(MOV(*(dw*)((&unk_4a068)), ax));	// 86737 mov     word ptr unk_4A068, ax ;~ 275C:0A17
loc_365ba:
	// 9947 
cs=0x275c;eip=0x000a1a; 	T(MOV(bx, *(dw*)((&unk_570e4))));	// 86741 mov     bx, word ptr unk_570E4 ;~ 275C:0A1A
cs=0x275c;eip=0x000a1e; 	T(OR(bx, bx));	// 86742 or      bx, bx ;~ 275C:0A1E
cs=0x275c;eip=0x000a20; 	R(JZ(loc_3660f));	// 86743 jz      short loc_3660F ;~ 275C:0A20
cs=0x275c;eip=0x000a22; 	T(MOV(ax, *(dw*)((&unk_4a064))));	// 86744 mov     ax, word ptr unk_4A064 ;~ 275C:0A22
cs=0x275c;eip=0x000a25; 	T(CWD);	// 86745 cwd ;~ 275C:0A25
cs=0x275c;eip=0x000a26; 	T(ADD(ax, *(dw*)((&unk_4a058))));	// 86746 add     ax, word ptr unk_4A058 ;~ 275C:0A26
cs=0x275c;eip=0x000a2a; 	T(ADC(dx, *(dw*)((&unk_4a05a))));	// 86747 adc     dx, word ptr unk_4A05A ;~ 275C:0A2A
cs=0x275c;eip=0x000a2e; 	T(MOV(dh, dl));	// 86748 mov     dh, dl ;~ 275C:0A2E
cs=0x275c;eip=0x000a30; 	T(MOV(dl, ah));	// 86749 mov     dl, ah ;~ 275C:0A30
cs=0x275c;eip=0x000a32; 	T(MOV(ah, al));	// 86750 mov     ah, al ;~ 275C:0A32
cs=0x275c;eip=0x000a34; 	T(XOR(al, al));	// 86751 xor     al, al ;~ 275C:0A34
cs=0x275c;eip=0x000a36; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 86752 mov     [bx], ax ;~ 275C:0A36
cs=0x275c;eip=0x000a38; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 86753 mov     [bx+2], dx ;~ 275C:0A38
cs=0x275c;eip=0x000a3b; 	T(MOV(ax, *(dw*)((&unk_4a066))));	// 86754 mov     ax, word ptr unk_4A066 ;~ 275C:0A3B
cs=0x275c;eip=0x000a3e; 	T(CWD);	// 86755 cwd ;~ 275C:0A3E
cs=0x275c;eip=0x000a3f; 	T(ADD(ax, *(dw*)((&unk_4a05c))));	// 86756 add     ax, word ptr unk_4A05C ;~ 275C:0A3F
cs=0x275c;eip=0x000a43; 	T(ADC(dx, *(dw*)((&unk_4a05e))));	// 86757 adc     dx, word ptr unk_4A05E ;~ 275C:0A43
cs=0x275c;eip=0x000a47; 	T(MOV(dh, dl));	// 86758 mov     dh, dl ;~ 275C:0A47
cs=0x275c;eip=0x000a49; 	T(MOV(dl, ah));	// 86759 mov     dl, ah ;~ 275C:0A49
cs=0x275c;eip=0x000a4b; 	T(MOV(ah, al));	// 86760 mov     ah, al ;~ 275C:0A4B
cs=0x275c;eip=0x000a4d; 	T(XOR(al, al));	// 86761 xor     al, al ;~ 275C:0A4D
cs=0x275c;eip=0x000a4f; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 86762 mov     [bx+4], ax ;~ 275C:0A4F
cs=0x275c;eip=0x000a52; 	X(MOV(*(dw*)(raddr(ds,bx+6)), dx));	// 86763 mov     [bx+6], dx ;~ 275C:0A52
cs=0x275c;eip=0x000a55; 	T(MOV(ax, *(dw*)((&unk_4a068))));	// 86764 mov     ax, word ptr unk_4A068 ;~ 275C:0A55
cs=0x275c;eip=0x000a58; 	T(CWD);	// 86765 cwd ;~ 275C:0A58
cs=0x275c;eip=0x000a59; 	T(ADD(ax, *(dw*)((&unk_4a060))));	// 86766 add     ax, word ptr unk_4A060 ;~ 275C:0A59
cs=0x275c;eip=0x000a5d; 	T(ADC(dx, *(dw*)((&unk_4a062))));	// 86767 adc     dx, word ptr unk_4A062 ;~ 275C:0A5D
cs=0x275c;eip=0x000a61; 	T(MOV(dh, dl));	// 86768 mov     dh, dl ;~ 275C:0A61
cs=0x275c;eip=0x000a63; 	T(MOV(dl, ah));	// 86769 mov     dl, ah ;~ 275C:0A63
cs=0x275c;eip=0x000a65; 	T(MOV(ah, al));	// 86770 mov     ah, al ;~ 275C:0A65
cs=0x275c;eip=0x000a67; 	T(XOR(al, al));	// 86771 xor     al, al ;~ 275C:0A67
cs=0x275c;eip=0x000a69; 	X(MOV(*(dw*)(raddr(ds,bx+8)), ax));	// 86772 mov     [bx+8], ax ;~ 275C:0A69
cs=0x275c;eip=0x000a6c; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), dx));	// 86773 mov     [bx+0Ah], dx ;~ 275C:0A6C
loc_3660f:
	// 9948 
cs=0x275c;eip=0x000a6f; 	T(STC);	// 86776 stc ;~ 275C:0A6F
loc_36610:
	// 9949 
cs=0x275c;eip=0x000a70; 	X(POP(di));	// 86780 pop     di ;~ 275C:0A70
cs=0x275c;eip=0x000a71; 	X(POP(si));	// 86781 pop     si ;~ 275C:0A71
cs=0x275c;eip=0x000a72; 	X(POP(bp));	// 86782 pop     bp ;~ 275C:0A72
cs=0x275c;eip=0x000a73; 	R(RETN(0));	// 86783 retn ;~ 275C:0A73
seg023_proc:
	// 86789 
loc_36614:
	// 9950 
cs=0x275c;eip=0x000a74; 	T(CLC);	// 86790 clc ;~ 275C:0A74
cs=0x275c;eip=0x000a75; 	X(POP(di));	// 86791 pop     di ;~ 275C:0A75
cs=0x275c;eip=0x000a76; 	X(POP(si));	// 86792 pop     si ;~ 275C:0A76
cs=0x275c;eip=0x000a77; 	X(POP(bp));	// 86793 pop     bp ;~ 275C:0A77
cs=0x275c;eip=0x000a78; 	R(RETN(0));	// 86794 retn ;~ 275C:0A78
sub_36619:
	// 86801 
cs=0x275c;eip=0x000a79; 	X(PUSH(bp));	// 86805 push    bp ;~ 275C:0A79
cs=0x275c;eip=0x000a7a; 	T(MOV(bp, sp));	// 86806 mov     bp, sp ;~ 275C:0A7A
cs=0x275c;eip=0x000a7c; 	X(PUSH(si));	// 86807 push    si ;~ 275C:0A7C
cs=0x275c;eip=0x000a7d; 	X(PUSH(di));	// 86808 push    di ;~ 275C:0A7D
cs=0x275c;eip=0x000a7e; 	T(CMP(unk_570f9, 0));	// 86809 cmp     byte ptr unk_570F9, 0 ;~ 275C:0A7E
cs=0x275c;eip=0x000a83; 	R(JL(loc_36643));	// 86810 jl      short loc_36643 ;~ 275C:0A83
cs=0x275c;eip=0x000a85; 	T(CMP(unk_570ed, 0));	// 86811 cmp     byte ptr unk_570ED, 0 ;~ 275C:0A85
cs=0x275c;eip=0x000a8a; 	R(JGE(loc_36614));	// 86812 jge     short loc_36614 ;~ 275C:0A8A
cs=0x275c;eip=0x000a8c; 	T(MOV(di, *(dw*)((&unk_570e4))));	// 86813 mov     di, word ptr unk_570E4 ;~ 275C:0A8C
cs=0x275c;eip=0x000a90; 	T(OR(di, di));	// 86814 or      di, di ;~ 275C:0A90
cs=0x275c;eip=0x000a92; 	R(JZ(loc_36640));	// 86815 jz      short loc_36640 ;~ 275C:0A92
cs=0x275c;eip=0x000a94; 	T(MOV(ax, ds));	// 86816 mov     ax, ds ;~ 275C:0A94
cs=0x275c;eip=0x000a96; 	T(MOV(es, ax));	// 86817 mov     es, ax ;~ 275C:0A96
cs=0x275c;eip=0x000a98; 	T(MOV(cx, 6));	// 86819 mov     cx, 6 ;~ 275C:0A98
cs=0x275c;eip=0x000a9b; 	T(MOV(si, 0x268E));	// 86820 mov     si, 268Eh ;~ 275C:0A9B
	// 86821 rep movsw ;~ 275C:0A9E
cs=0x275c;eip=0x000a9e; 	X(	REP MOVSW);	// 86821 rep movsw ;~ 275C:0A9E
loc_36640:
	// 9951 
cs=0x275c;eip=0x000aa0; 	R(JMP(loc_3671e));	// 86824 jmp     loc_3671E ;~ 275C:0AA0
loc_36643:
	// 9952 
cs=0x275c;eip=0x000aa3; 	T(MOV(si, *(dw*)((&unk_570e6))));	// 86828 mov     si, word ptr unk_570E6 ;~ 275C:0AA3
cs=0x275c;eip=0x000aa7; 	T(MOV(ax, *(dw*)((&unk_570e8))));	// 86829 mov     ax, word ptr unk_570E8 ;~ 275C:0AA7
cs=0x275c;eip=0x000aaa; 	T(CMP(ax, *(dw*)((&unk_570f4))));	// 86830 cmp     ax, word ptr unk_570F4 ;~ 275C:0AAA
cs=0x275c;eip=0x000aae; 	R(JL(loc_3665f));	// 86831 jl      short loc_3665F ;~ 275C:0AAE
cs=0x275c;eip=0x000ab0; 	R(JG(loc_36658));	// 86832 jg      short loc_36658 ;~ 275C:0AB0
cs=0x275c;eip=0x000ab2; 	T(CMP(si, *(dw*)((&unk_570f2))));	// 86833 cmp     si, word ptr unk_570F2 ;~ 275C:0AB2
cs=0x275c;eip=0x000ab6; 	R(JBE(loc_3665f));	// 86834 jbe     short loc_3665F ;~ 275C:0AB6
loc_36658:
	// 9953 
cs=0x275c;eip=0x000ab8; 	T(MOV(si, *(dw*)((&unk_570f2))));	// 86837 mov     si, word ptr unk_570F2 ;~ 275C:0AB8
cs=0x275c;eip=0x000abc; 	T(MOV(ax, *(dw*)((&unk_570f4))));	// 86838 mov     ax, word ptr unk_570F4 ;~ 275C:0ABC
loc_3665f:
	// 9954 
cs=0x275c;eip=0x000abf; 	X(MOV(*(dw*)((&unk_4a086)), si));	// 86842 mov     word ptr unk_4A086, si ;~ 275C:0ABF
cs=0x275c;eip=0x000ac3; 	X(MOV(*(dw*)((&unk_4a088)), ax));	// 86843 mov     word ptr unk_4A088, ax ;~ 275C:0AC3
cs=0x275c;eip=0x000ac6; 	T(MOV(di, *(dw*)((&unk_570ee))));	// 86844 mov     di, word ptr unk_570EE ;~ 275C:0AC6
cs=0x275c;eip=0x000aca; 	T(MOV(ax, *(dw*)((&unk_570f0))));	// 86845 mov     ax, word ptr unk_570F0 ;~ 275C:0ACA
cs=0x275c;eip=0x000acd; 	T(CMP(ax, *(dw*)((&unk_570fc))));	// 86846 cmp     ax, word ptr unk_570FC ;~ 275C:0ACD
cs=0x275c;eip=0x000ad1; 	R(JL(loc_36682));	// 86847 jl      short loc_36682 ;~ 275C:0AD1
cs=0x275c;eip=0x000ad3; 	R(JG(loc_3667b));	// 86848 jg      short loc_3667B ;~ 275C:0AD3
cs=0x275c;eip=0x000ad5; 	T(CMP(di, *(dw*)((&unk_570fa))));	// 86849 cmp     di, word ptr unk_570FA ;~ 275C:0AD5
cs=0x275c;eip=0x000ad9; 	R(JBE(loc_36682));	// 86850 jbe     short loc_36682 ;~ 275C:0AD9
loc_3667b:
	// 9955 
cs=0x275c;eip=0x000adb; 	T(MOV(di, *(dw*)((&unk_570fa))));	// 86853 mov     di, word ptr unk_570FA ;~ 275C:0ADB
cs=0x275c;eip=0x000adf; 	T(MOV(ax, *(dw*)((&unk_570fc))));	// 86854 mov     ax, word ptr unk_570FC ;~ 275C:0ADF
loc_36682:
	// 9956 
cs=0x275c;eip=0x000ae2; 	X(MOV(*(dw*)((&unk_4a08a)), di));	// 86858 mov     word ptr unk_4A08A, di ;~ 275C:0AE2
cs=0x275c;eip=0x000ae6; 	X(MOV(*(dw*)((&unk_4a08c)), ax));	// 86859 mov     word ptr unk_4A08C, ax ;~ 275C:0AE6
cs=0x275c;eip=0x000ae9; 	T(MOV(ax, *(dw*)((&unk_570e6))));	// 86860 mov     ax, word ptr unk_570E6 ;~ 275C:0AE9
cs=0x275c;eip=0x000aec; 	T(SUB(ax, si));	// 86861 sub     ax, si ;~ 275C:0AEC
cs=0x275c;eip=0x000aee; 	X(MOV(*(dw*)((&unk_4a08e)), ax));	// 86862 mov     word ptr unk_4A08E, ax ;~ 275C:0AEE
cs=0x275c;eip=0x000af1; 	T(MOV(ax, *(dw*)((&unk_570f2))));	// 86863 mov     ax, word ptr unk_570F2 ;~ 275C:0AF1
cs=0x275c;eip=0x000af4; 	T(SUB(ax, si));	// 86864 sub     ax, si ;~ 275C:0AF4
cs=0x275c;eip=0x000af6; 	X(MOV(*(dw*)((&unk_4a092)), ax));	// 86865 mov     word ptr unk_4A092, ax ;~ 275C:0AF6
cs=0x275c;eip=0x000af9; 	T(MOV(ax, *(dw*)((&unk_570ee))));	// 86866 mov     ax, word ptr unk_570EE ;~ 275C:0AF9
cs=0x275c;eip=0x000afc; 	T(SUB(ax, di));	// 86867 sub     ax, di ;~ 275C:0AFC
cs=0x275c;eip=0x000afe; 	X(MOV(*(dw*)((&unk_4a090)), ax));	// 86868 mov     word ptr unk_4A090, ax ;~ 275C:0AFE
cs=0x275c;eip=0x000b01; 	T(MOV(ax, *(dw*)((&unk_570fa))));	// 86869 mov     ax, word ptr unk_570FA ;~ 275C:0B01
cs=0x275c;eip=0x000b04; 	T(SUB(ax, di));	// 86870 sub     ax, di ;~ 275C:0B04
cs=0x275c;eip=0x000b06; 	X(MOV(*(dw*)((&unk_4a094)), ax));	// 86871 mov     word ptr unk_4A094, ax ;~ 275C:0B06
cs=0x275c;eip=0x000b09; 	T(MOV(si, *(dw*)((&unk_4a092))));	// 86872 mov     si, word ptr unk_4A092 ;~ 275C:0B09
cs=0x275c;eip=0x000b0d; 	T(SUB(si, *(dw*)((&unk_4a08e))));	// 86873 sub     si, word ptr unk_4A08E ;~ 275C:0B0D
cs=0x275c;eip=0x000b11; 	T(MOV(di, *(dw*)((&unk_570f6))));	// 86874 mov     di, word ptr unk_570F6 ;~ 275C:0B11
cs=0x275c;eip=0x000b15; 	T(SUB(di, *(dw*)((&unk_570ea))));	// 86875 sub     di, word ptr unk_570EA ;~ 275C:0B15
cs=0x275c;eip=0x000b19; 	T(MOV(bp, *(dw*)((&unk_4a094))));	// 86876 mov     bp, word ptr unk_4A094 ;~ 275C:0B19
cs=0x275c;eip=0x000b1d; 	T(SUB(bp, *(dw*)((&unk_4a090))));	// 86877 sub     bp, word ptr unk_4A090 ;~ 275C:0B1D
cs=0x275c;eip=0x000b21; 	T(MOV(ax, si));	// 86878 mov     ax, si ;~ 275C:0B21
cs=0x275c;eip=0x000b23; 	X(IMUL1_2(*(dw*)((&unk_570ea))));	// 86879 imul    word ptr unk_570EA ;~ 275C:0B23
cs=0x275c;eip=0x000b27; 	T(IDIV2(di));	// 86880 idiv    di ;~ 275C:0B27
cs=0x275c;eip=0x000b29; 	X(SUB(*(dw*)((&unk_4a08e)), ax));	// 86881 sub     word ptr unk_4A08E, ax ;~ 275C:0B29
cs=0x275c;eip=0x000b2d; 	T(MOV(ax, bp));	// 86882 mov     ax, bp ;~ 275C:0B2D
cs=0x275c;eip=0x000b2f; 	X(IMUL1_2(*(dw*)((&unk_570ea))));	// 86883 imul    word ptr unk_570EA ;~ 275C:0B2F
cs=0x275c;eip=0x000b33; 	T(IDIV2(di));	// 86884 idiv    di ;~ 275C:0B33
cs=0x275c;eip=0x000b35; 	X(SUB(*(dw*)((&unk_4a090)), ax));	// 86885 sub     word ptr unk_4A090, ax ;~ 275C:0B35
cs=0x275c;eip=0x000b39; 	T(MOV(bx, *(dw*)((&unk_570e4))));	// 86886 mov     bx, word ptr unk_570E4 ;~ 275C:0B39
cs=0x275c;eip=0x000b3d; 	T(OR(bx, bx));	// 86887 or      bx, bx ;~ 275C:0B3D
cs=0x275c;eip=0x000b3f; 	R(JZ(loc_3671e));	// 86888 jz      short loc_3671E ;~ 275C:0B3F
cs=0x275c;eip=0x000b41; 	T(MOV(ax, *(dw*)((&unk_4a08e))));	// 86889 mov     ax, word ptr unk_4A08E ;~ 275C:0B41
cs=0x275c;eip=0x000b44; 	T(CWD);	// 86890 cwd ;~ 275C:0B44
cs=0x275c;eip=0x000b45; 	T(ADD(ax, *(dw*)((&unk_4a086))));	// 86891 add     ax, word ptr unk_4A086 ;~ 275C:0B45
cs=0x275c;eip=0x000b49; 	T(ADC(dx, *(dw*)((&unk_4a088))));	// 86892 adc     dx, word ptr unk_4A088 ;~ 275C:0B49
cs=0x275c;eip=0x000b4d; 	T(MOV(dh, dl));	// 86893 mov     dh, dl ;~ 275C:0B4D
cs=0x275c;eip=0x000b4f; 	T(MOV(dl, ah));	// 86894 mov     dl, ah ;~ 275C:0B4F
cs=0x275c;eip=0x000b51; 	T(MOV(ah, al));	// 86895 mov     ah, al ;~ 275C:0B51
cs=0x275c;eip=0x000b53; 	T(XOR(al, al));	// 86896 xor     al, al ;~ 275C:0B53
cs=0x275c;eip=0x000b55; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 86897 mov     [bx], ax ;~ 275C:0B55
cs=0x275c;eip=0x000b57; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 86898 mov     [bx+2], dx ;~ 275C:0B57
cs=0x275c;eip=0x000b5a; 	X(MOV(*(dw*)(raddr(ds,bx+4)), 0));	// 86899 mov     word ptr [bx+4], 0 ;~ 275C:0B5A
cs=0x275c;eip=0x000b5f; 	X(MOV(*(dw*)(raddr(ds,bx+6)), 0));	// 86900 mov     word ptr [bx+6], 0 ;~ 275C:0B5F
cs=0x275c;eip=0x000b64; 	T(MOV(ax, *(dw*)((&unk_4a090))));	// 86901 mov     ax, word ptr unk_4A090 ;~ 275C:0B64
cs=0x275c;eip=0x000b67; 	T(CWD);	// 86902 cwd ;~ 275C:0B67
cs=0x275c;eip=0x000b68; 	T(ADD(ax, *(dw*)((&unk_4a08a))));	// 86903 add     ax, word ptr unk_4A08A ;~ 275C:0B68
cs=0x275c;eip=0x000b6c; 	T(ADC(dx, *(dw*)((&unk_4a08c))));	// 86904 adc     dx, word ptr unk_4A08C ;~ 275C:0B6C
cs=0x275c;eip=0x000b70; 	T(MOV(dh, dl));	// 86905 mov     dh, dl ;~ 275C:0B70
cs=0x275c;eip=0x000b72; 	T(MOV(dl, ah));	// 86906 mov     dl, ah ;~ 275C:0B72
cs=0x275c;eip=0x000b74; 	T(MOV(ah, al));	// 86907 mov     ah, al ;~ 275C:0B74
cs=0x275c;eip=0x000b76; 	T(XOR(al, al));	// 86908 xor     al, al ;~ 275C:0B76
cs=0x275c;eip=0x000b78; 	X(MOV(*(dw*)(raddr(ds,bx+8)), ax));	// 86909 mov     [bx+8], ax ;~ 275C:0B78
cs=0x275c;eip=0x000b7b; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), dx));	// 86910 mov     [bx+0Ah], dx ;~ 275C:0B7B
loc_3671e:
	// 9957 
cs=0x275c;eip=0x000b7e; 	T(STC);	// 86914 stc ;~ 275C:0B7E
cs=0x275c;eip=0x000b7f; 	X(POP(di));	// 86915 pop     di ;~ 275C:0B7F
cs=0x275c;eip=0x000b80; 	X(POP(si));	// 86916 pop     si ;~ 275C:0B80
cs=0x275c;eip=0x000b81; 	X(POP(bp));	// 86917 pop     bp ;~ 275C:0B81
cs=0x275c;eip=0x000b82; 	R(RETN(0));	// 86918 retn ;~ 275C:0B82
sub_36723:
	// 86926 
#undef arg_0
#define arg_0 4
	// 86929 arg_0           = dword ptr  4 ;~ 275C:0B83
cs=0x275c;eip=0x000b83; 	X(PUSH(bp));	// 86931 push    bp ;~ 275C:0B83
cs=0x275c;eip=0x000b84; 	T(MOV(bp, sp));	// 86932 mov     bp, sp ;~ 275C:0B84
cs=0x275c;eip=0x000b86; 	X(PUSH(si));	// 86933 push    si ;~ 275C:0B86
cs=0x275c;eip=0x000b87; 	X(PUSH(di));	// 86934 push    di ;~ 275C:0B87
cs=0x275c;eip=0x000b88; 	T(LES(bp, *(dd*)(raddr(ss,bp+arg_0))));	// 86935 les     bp, [bp+arg_0] ;~ 275C:0B88
cs=0x275c;eip=0x000b8b; 	T(ADD(bp, 1));	// 86937 add     bp, 1 ;~ 275C:0B8B
cs=0x275c;eip=0x000b8e; 	X(MOV(*(dw*)((&unk_4a096)), bp));	// 86938 mov     word ptr unk_4A096, bp ;~ 275C:0B8E
cs=0x275c;eip=0x000b92; 	X(MOV(*(dw*)((&unk_4a098)), es));	// 86939 mov     word ptr unk_4A098, es ;~ 275C:0B92
loc_36736:
	// 9958 
cs=0x275c;eip=0x000b96; 	T(MOV(es, *(dw*)((&unk_4a098))));	// 86943 mov     es, word ptr unk_4A098 ;~ 275C:0B96
cs=0x275c;eip=0x000b9a; 	T(MOV(si, *(dw*)(raddr(es,bp+0))));	// 86944 mov     si, es:[bp+0] ;~ 275C:0B9A
cs=0x275c;eip=0x000b9e; 	T(ADD(bp, 2));	// 86945 add     bp, 2 ;~ 275C:0B9E
cs=0x275c;eip=0x000ba1; 	T(OR(si, si));	// 86946 or      si, si ;~ 275C:0BA1
cs=0x275c;eip=0x000ba3; 	R(JNZ(loc_36748));	// 86947 jnz     short loc_36748 ;~ 275C:0BA3
cs=0x275c;eip=0x000ba5; 	R(JMP(loc_367d8));	// 86948 jmp     loc_367D8 ;~ 275C:0BA5
loc_36748:
	// 9959 
cs=0x275c;eip=0x000ba8; 	T(MOV(es, *(dw*)((&unk_47a9a))));	// 86952 mov     es, word ptr unk_47A9A ;~ 275C:0BA8
cs=0x275c;eip=0x000bac; 	T(MOV(ax, *(dw*)(raddr(es,si+2))));	// 86954 mov     ax, es:[si+2] ;~ 275C:0BAC
cs=0x275c;eip=0x000bb0; 	T(MOV(di, ax));	// 86955 mov     di, ax ;~ 275C:0BB0
cs=0x275c;eip=0x000bb2; 	T(AND(ax, *(dw*)((&unk_570c4))));	// 86956 and     ax, word ptr unk_570C4 ;~ 275C:0BB2
cs=0x275c;eip=0x000bb6; 	T(CMP(ax, *(dw*)((&unk_570c4))));	// 86957 cmp     ax, word ptr unk_570C4 ;~ 275C:0BB6
cs=0x275c;eip=0x000bba; 	R(JNZ(loc_36736));	// 86958 jnz     short loc_36736 ;~ 275C:0BBA
cs=0x275c;eip=0x000bbc; 	T(CMP(si, *(dw*)((&unk_570ca))));	// 86959 cmp     si, word ptr unk_570CA ;~ 275C:0BBC
cs=0x275c;eip=0x000bc0; 	R(JZ(loc_36736));	// 86960 jz      short loc_36736 ;~ 275C:0BC0
cs=0x275c;eip=0x000bc2; 	T(CMP(unk_570fe, 0));	// 86961 cmp     byte ptr unk_570FE, 0 ;~ 275C:0BC2
cs=0x275c;eip=0x000bc7; 	R(JNZ(loc_3678a));	// 86962 jnz     short loc_3678A ;~ 275C:0BC7
cs=0x275c;eip=0x000bc9; 	T(MOV(ax, di));	// 86963 mov     ax, di ;~ 275C:0BC9
cs=0x275c;eip=0x000bcb; 	T(AND(ax, 0x820));	// 86964 and     ax, 820h ;~ 275C:0BCB
cs=0x275c;eip=0x000bce; 	T(CMP(ax, 0x800));	// 86965 cmp     ax, 800h ;~ 275C:0BCE
cs=0x275c;eip=0x000bd1; 	R(JNZ(loc_3678a));	// 86966 jnz     short loc_3678A ;~ 275C:0BD1
cs=0x275c;eip=0x000bd3; 	T(MOV(bx, si));	// 86967 mov     bx, si ;~ 275C:0BD3
cs=0x275c;eip=0x000bd5; 	T(ADD(bx, 0x12));	// 86968 add     bx, 12h ;~ 275C:0BD5
cs=0x275c;eip=0x000bd8; 	T(TEST(di, 2));	// 86969 test    di, 2 ;~ 275C:0BD8
cs=0x275c;eip=0x000bdc; 	R(JNZ(loc_36781));	// 86970 jnz     short loc_36781 ;~ 275C:0BDC
cs=0x275c;eip=0x000bde; 	T(ADD(bx, 6));	// 86971 add     bx, 6 ;~ 275C:0BDE
loc_36781:
	// 9960 
cs=0x275c;eip=0x000be1; 	T(MOV(bx, *(dw*)(raddr(es,bx))));	// 86974 mov     bx, es:[bx] ;~ 275C:0BE1
cs=0x275c;eip=0x000be4; 	T(TEST(*(raddr(ds,bx+0x16)), 4));	// 86975 test    byte ptr [bx+16h], 4 ;~ 275C:0BE4
cs=0x275c;eip=0x000be8; 	R(JNZ(loc_36736));	// 86976 jnz     short loc_36736 ;~ 275C:0BE8
loc_3678a:
	// 9961 
cs=0x275c;eip=0x000bea; 	T(MOV(bx, si));	// 86980 mov     bx, si ;~ 275C:0BEA
cs=0x275c;eip=0x000bec; 	R(CALL(sub_360ed,0));	// 86981 call    sub_360ED ;~ 275C:0BEC
cs=0x275c;eip=0x000bef; 	R(JNC(loc_36736));	// 86982 jnb     short loc_36736 ;~ 275C:0BEF
cs=0x275c;eip=0x000bf1; 	T(TEST(di, 0x20));	// 86983 test    di, 20h ;~ 275C:0BF1
cs=0x275c;eip=0x000bf5; 	R(JZ(loc_367a8));	// 86984 jz      short loc_367A8 ;~ 275C:0BF5
cs=0x275c;eip=0x000bf7; 	T(MOV(es, *(dw*)((&unk_47a9a))));	// 86985 mov     es, word ptr unk_47A9A ;~ 275C:0BF7
cs=0x275c;eip=0x000bfb; 	X(PUSH(*(dw*)(raddr(es,si+0x18))));	// 86986 push    word ptr es:[si+18h] ;~ 275C:0BFB
cs=0x275c;eip=0x000bff; 	R(CALL(sub_367e0,0));	// 86987 call    sub_367E0 ;~ 275C:0BFF
cs=0x275c;eip=0x000c02; 	T(OR(ax, ax));	// 86988 or      ax, ax ;~ 275C:0C02
cs=0x275c;eip=0x000c04; 	R(JNZ(loc_367da));	// 86989 jnz     short loc_367DA ;~ 275C:0C04
cs=0x275c;eip=0x000c06; 	R(JMP(loc_36736));	// 86990 jmp     short loc_36736 ;~ 275C:0C06
loc_367a8:
	// 9962 
cs=0x275c;eip=0x000c08; 	T(CMP(unk_570fe, 0));	// 86994 cmp     byte ptr unk_570FE, 0 ;~ 275C:0C08
cs=0x275c;eip=0x000c0d; 	R(JNZ(loc_367d3));	// 86995 jnz     short loc_367D3 ;~ 275C:0C0D
cs=0x275c;eip=0x000c0f; 	T(TEST(di, 0x800));	// 86996 test    di, 800h ;~ 275C:0C0F
cs=0x275c;eip=0x000c13; 	R(JZ(loc_367d3));	// 86997 jz      short loc_367D3 ;~ 275C:0C13
cs=0x275c;eip=0x000c15; 	T(MOV(bx, si));	// 86998 mov     bx, si ;~ 275C:0C15
cs=0x275c;eip=0x000c17; 	T(ADD(bx, 0x12));	// 86999 add     bx, 12h ;~ 275C:0C17
cs=0x275c;eip=0x000c1a; 	T(TEST(di, 2));	// 87000 test    di, 2 ;~ 275C:0C1A
cs=0x275c;eip=0x000c1e; 	R(JNZ(loc_367c3));	// 87001 jnz     short loc_367C3 ;~ 275C:0C1E
cs=0x275c;eip=0x000c20; 	T(ADD(bx, 6));	// 87002 add     bx, 6 ;~ 275C:0C20
loc_367c3:
	// 9963 
cs=0x275c;eip=0x000c23; 	T(MOV(es, *(dw*)((&unk_47a9a))));	// 87005 mov     es, word ptr unk_47A9A ;~ 275C:0C23
cs=0x275c;eip=0x000c27; 	T(MOV(bx, *(dw*)(raddr(es,bx))));	// 87006 mov     bx, es:[bx] ;~ 275C:0C27
cs=0x275c;eip=0x000c2a; 	T(TEST(*(raddr(ds,bx+0x16)), 4));	// 87007 test    byte ptr [bx+16h], 4 ;~ 275C:0C2A
cs=0x275c;eip=0x000c2e; 	R(JZ(loc_367d3));	// 87008 jz      short loc_367D3 ;~ 275C:0C2E
cs=0x275c;eip=0x000c30; 	R(JMP(loc_36736));	// 87009 jmp     loc_36736 ;~ 275C:0C30
loc_367d3:
	// 9964 
cs=0x275c;eip=0x000c33; 	T(MOV(ax, si));	// 87014 mov     ax, si ;~ 275C:0C33
cs=0x275c;eip=0x000c35; 	R(JMP(loc_367da));	// 87015 jmp     short loc_367DA ;~ 275C:0C35
loc_367d8:
	// 9965 
cs=0x275c;eip=0x000c38; 	T(XOR(ax, ax));	// 87020 xor     ax, ax ;~ 275C:0C38
loc_367da:
	// 9966 
cs=0x275c;eip=0x000c3a; 	X(POP(di));	// 87024 pop     di ;~ 275C:0C3A
cs=0x275c;eip=0x000c3b; 	X(POP(si));	// 87025 pop     si ;~ 275C:0C3B
cs=0x275c;eip=0x000c3c; 	X(POP(bp));	// 87026 pop     bp ;~ 275C:0C3C
cs=0x275c;eip=0x000c3d; 	R(RETN(4));	// 87027 retn    4 ;~ 275C:0C3D
sub_367e0:
	// 87035 
#undef arg_0
#define arg_0 4
	// 87038 arg_0           = word ptr  4 ;~ 275C:0C40
cs=0x275c;eip=0x000c40; 	X(PUSH(bp));	// 87040 push    bp ;~ 275C:0C40
cs=0x275c;eip=0x000c41; 	T(MOV(bp, sp));	// 87041 mov     bp, sp ;~ 275C:0C41
cs=0x275c;eip=0x000c43; 	X(PUSH(si));	// 87042 push    si ;~ 275C:0C43
cs=0x275c;eip=0x000c44; 	X(PUSH(di));	// 87043 push    di ;~ 275C:0C44
cs=0x275c;eip=0x000c45; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 87044 mov     si, [bp+arg_0] ;~ 275C:0C45
cs=0x275c;eip=0x000c48; 	T(MOV(es, *(dw*)((&unk_47a9a))));	// 87045 mov     es, word ptr unk_47A9A ;~ 275C:0C48
cs=0x275c;eip=0x000c4c; 	R(JMP(loc_367f6));	// 87046 jmp     short loc_367F6 ;~ 275C:0C4C
loc_367ee:
	// 9967 
cs=0x275c;eip=0x000c4e; 	T(MOV(es, *(dw*)((&unk_47a9a))));	// 87051 mov     es, word ptr unk_47A9A ;~ 275C:0C4E
cs=0x275c;eip=0x000c52; 	T(MOV(si, *(dw*)(raddr(es,si+4))));	// 87052 mov     si, es:[si+4] ;~ 275C:0C52
loc_367f6:
	// 9968 
cs=0x275c;eip=0x000c56; 	T(OR(si, si));	// 87055 or      si, si ;~ 275C:0C56
cs=0x275c;eip=0x000c58; 	R(JNZ(loc_367fd));	// 87056 jnz     short loc_367FD ;~ 275C:0C58
cs=0x275c;eip=0x000c5a; 	R(JMP(loc_36889));	// 87057 jmp     loc_36889 ;~ 275C:0C5A
loc_367fd:
	// 9969 
cs=0x275c;eip=0x000c5d; 	T(MOV(ax, *(dw*)(raddr(es,si+2))));	// 87061 mov     ax, es:[si+2] ;~ 275C:0C5D
cs=0x275c;eip=0x000c61; 	T(MOV(di, ax));	// 87062 mov     di, ax ;~ 275C:0C61
cs=0x275c;eip=0x000c63; 	T(AND(ax, *(dw*)((&unk_570c4))));	// 87063 and     ax, word ptr unk_570C4 ;~ 275C:0C63
cs=0x275c;eip=0x000c67; 	T(CMP(ax, *(dw*)((&unk_570c4))));	// 87064 cmp     ax, word ptr unk_570C4 ;~ 275C:0C67
cs=0x275c;eip=0x000c6b; 	R(JNZ(loc_367ee));	// 87065 jnz     short loc_367EE ;~ 275C:0C6B
cs=0x275c;eip=0x000c6d; 	T(CMP(si, *(dw*)((&unk_570ca))));	// 87066 cmp     si, word ptr unk_570CA ;~ 275C:0C6D
cs=0x275c;eip=0x000c71; 	R(JZ(loc_367ee));	// 87067 jz      short loc_367EE ;~ 275C:0C71
cs=0x275c;eip=0x000c73; 	T(CMP(unk_570fe, 0));	// 87068 cmp     byte ptr unk_570FE, 0 ;~ 275C:0C73
cs=0x275c;eip=0x000c78; 	R(JNZ(loc_3683b));	// 87069 jnz     short loc_3683B ;~ 275C:0C78
cs=0x275c;eip=0x000c7a; 	T(MOV(ax, di));	// 87070 mov     ax, di ;~ 275C:0C7A
cs=0x275c;eip=0x000c7c; 	T(AND(ax, 0x820));	// 87071 and     ax, 820h ;~ 275C:0C7C
cs=0x275c;eip=0x000c7f; 	T(CMP(ax, 0x800));	// 87072 cmp     ax, 800h ;~ 275C:0C7F
cs=0x275c;eip=0x000c82; 	R(JNZ(loc_3683b));	// 87073 jnz     short loc_3683B ;~ 275C:0C82
cs=0x275c;eip=0x000c84; 	T(MOV(bx, si));	// 87074 mov     bx, si ;~ 275C:0C84
cs=0x275c;eip=0x000c86; 	T(ADD(bx, 0x12));	// 87075 add     bx, 12h ;~ 275C:0C86
cs=0x275c;eip=0x000c89; 	T(TEST(di, 2));	// 87076 test    di, 2 ;~ 275C:0C89
cs=0x275c;eip=0x000c8d; 	R(JNZ(loc_36832));	// 87077 jnz     short loc_36832 ;~ 275C:0C8D
cs=0x275c;eip=0x000c8f; 	T(ADD(bx, 6));	// 87078 add     bx, 6 ;~ 275C:0C8F
loc_36832:
	// 9970 
cs=0x275c;eip=0x000c92; 	T(MOV(bx, *(dw*)(raddr(es,bx))));	// 87081 mov     bx, es:[bx] ;~ 275C:0C92
cs=0x275c;eip=0x000c95; 	T(TEST(*(raddr(ds,bx+0x16)), 4));	// 87082 test    byte ptr [bx+16h], 4 ;~ 275C:0C95
cs=0x275c;eip=0x000c99; 	R(JNZ(loc_367ee));	// 87083 jnz     short loc_367EE ;~ 275C:0C99
loc_3683b:
	// 9971 
cs=0x275c;eip=0x000c9b; 	T(MOV(bx, si));	// 87087 mov     bx, si ;~ 275C:0C9B
cs=0x275c;eip=0x000c9d; 	R(CALL(sub_360ed,0));	// 87088 call    sub_360ED ;~ 275C:0C9D
cs=0x275c;eip=0x000ca0; 	R(JNC(loc_367ee));	// 87089 jnb     short loc_367EE ;~ 275C:0CA0
cs=0x275c;eip=0x000ca2; 	T(TEST(di, 0x20));	// 87090 test    di, 20h ;~ 275C:0CA2
cs=0x275c;eip=0x000ca6; 	R(JZ(loc_36859));	// 87091 jz      short loc_36859 ;~ 275C:0CA6
cs=0x275c;eip=0x000ca8; 	T(MOV(es, *(dw*)((&unk_47a9a))));	// 87092 mov     es, word ptr unk_47A9A ;~ 275C:0CA8
cs=0x275c;eip=0x000cac; 	X(PUSH(*(dw*)(raddr(es,si+0x18))));	// 87093 push    word ptr es:[si+18h] ;~ 275C:0CAC
cs=0x275c;eip=0x000cb0; 	R(CALL(sub_367e0,0));	// 87094 call    sub_367E0 ;~ 275C:0CB0
cs=0x275c;eip=0x000cb3; 	T(OR(ax, ax));	// 87095 or      ax, ax ;~ 275C:0CB3
cs=0x275c;eip=0x000cb5; 	R(JNZ(loc_3688b));	// 87096 jnz     short loc_3688B ;~ 275C:0CB5
cs=0x275c;eip=0x000cb7; 	R(JMP(loc_367ee));	// 87097 jmp     short loc_367EE ;~ 275C:0CB7
loc_36859:
	// 9972 
cs=0x275c;eip=0x000cb9; 	T(CMP(unk_570fe, 0));	// 87101 cmp     byte ptr unk_570FE, 0 ;~ 275C:0CB9
cs=0x275c;eip=0x000cbe; 	R(JNZ(loc_36884));	// 87102 jnz     short loc_36884 ;~ 275C:0CBE
cs=0x275c;eip=0x000cc0; 	T(TEST(di, 0x800));	// 87103 test    di, 800h ;~ 275C:0CC0
cs=0x275c;eip=0x000cc4; 	R(JZ(loc_36884));	// 87104 jz      short loc_36884 ;~ 275C:0CC4
cs=0x275c;eip=0x000cc6; 	T(MOV(bx, si));	// 87105 mov     bx, si ;~ 275C:0CC6
cs=0x275c;eip=0x000cc8; 	T(ADD(bx, 0x12));	// 87106 add     bx, 12h ;~ 275C:0CC8
cs=0x275c;eip=0x000ccb; 	T(TEST(di, 2));	// 87107 test    di, 2 ;~ 275C:0CCB
cs=0x275c;eip=0x000ccf; 	R(JNZ(loc_36874));	// 87108 jnz     short loc_36874 ;~ 275C:0CCF
cs=0x275c;eip=0x000cd1; 	T(ADD(bx, 6));	// 87109 add     bx, 6 ;~ 275C:0CD1
loc_36874:
	// 9973 
cs=0x275c;eip=0x000cd4; 	T(MOV(es, *(dw*)((&unk_47a9a))));	// 87112 mov     es, word ptr unk_47A9A ;~ 275C:0CD4
cs=0x275c;eip=0x000cd8; 	T(MOV(bx, *(dw*)(raddr(es,bx))));	// 87113 mov     bx, es:[bx] ;~ 275C:0CD8
cs=0x275c;eip=0x000cdb; 	T(TEST(*(raddr(ds,bx+0x16)), 4));	// 87114 test    byte ptr [bx+16h], 4 ;~ 275C:0CDB
cs=0x275c;eip=0x000cdf; 	R(JZ(loc_36884));	// 87115 jz      short loc_36884 ;~ 275C:0CDF
cs=0x275c;eip=0x000ce1; 	R(JMP(loc_367ee));	// 87116 jmp     loc_367EE ;~ 275C:0CE1
loc_36884:
	// 9974 
cs=0x275c;eip=0x000ce4; 	T(MOV(ax, si));	// 87121 mov     ax, si ;~ 275C:0CE4
cs=0x275c;eip=0x000ce6; 	R(JMP(loc_3688b));	// 87122 jmp     short loc_3688B ;~ 275C:0CE6
loc_36889:
	// 9975 
cs=0x275c;eip=0x000ce9; 	T(XOR(ax, ax));	// 87128 xor     ax, ax ;~ 275C:0CE9
loc_3688b:
	// 9976 
cs=0x275c;eip=0x000ceb; 	X(POP(di));	// 87132 pop     di ;~ 275C:0CEB
cs=0x275c;eip=0x000cec; 	X(POP(si));	// 87133 pop     si ;~ 275C:0CEC
cs=0x275c;eip=0x000ced; 	X(POP(bp));	// 87134 pop     bp ;~ 275C:0CED
cs=0x275c;eip=0x000cee; 	R(RETN(2));	// 87135 retn    2 ;~ 275C:0CEE
sub_36891:
	// 87142 
cs=0x275c;eip=0x000cf1; 	T(CMP(*(raddr(ds,bx)), 0));	// 87144 cmp     byte ptr [bx], 0 ;~ 275C:0CF1
cs=0x275c;eip=0x000cf4; 	R(JNZ(loc_368b0));	// 87145 jnz     short loc_368B0 ;~ 275C:0CF4
loc_36896:
	// 9977 
cs=0x275c;eip=0x000cf6; 	T(XOR(ax, ax));	// 87148 xor     ax, ax ;~ 275C:0CF6
cs=0x275c;eip=0x000cf8; 	T(CMP(dx, *(dw*)(raddr(ds,bx+3))));	// 87149 cmp     dx, [bx+3] ;~ 275C:0CF8
cs=0x275c;eip=0x000cfb; 	T(CMC);	// 87150 cmc ;~ 275C:0CFB
cs=0x275c;eip=0x000cfc; 	T(RCL(ax, 1));	// 87151 rcl     ax, 1 ;~ 275C:0CFC
cs=0x275c;eip=0x000cfe; 	T(CMP(cx, *(dw*)(raddr(ds,bx+1))));	// 87152 cmp     cx, [bx+1] ;~ 275C:0CFE
cs=0x275c;eip=0x000d01; 	T(CMC);	// 87153 cmc ;~ 275C:0D01
cs=0x275c;eip=0x000d02; 	T(RCL(ax, 1));	// 87154 rcl     ax, 1 ;~ 275C:0D02
cs=0x275c;eip=0x000d04; 	T(SHL(ax, 1));	// 87155 shl     ax, 1 ;~ 275C:0D04
cs=0x275c;eip=0x000d06; 	T(ADD(bx, ax));	// 87156 add     bx, ax ;~ 275C:0D06
cs=0x275c;eip=0x000d08; 	T(MOV(bx, *(dw*)(raddr(ds,bx+5))));	// 87157 mov     bx, [bx+5] ;~ 275C:0D08
cs=0x275c;eip=0x000d0b; 	T(CMP(*(raddr(ds,bx)), 0));	// 87158 cmp     byte ptr [bx], 0 ;~ 275C:0D0B
cs=0x275c;eip=0x000d0e; 	R(JZ(loc_36896));	// 87159 jz      short loc_36896 ;~ 275C:0D0E
loc_368b0:
	// 9978 
cs=0x275c;eip=0x000d10; 	T(MOV(ax, ss));	// 87162 mov     ax, ss ;~ 275C:0D10
cs=0x275c;eip=0x000d12; 	T(MOV(ds, ax));	// 87163 mov     ds, ax ;~ 275C:0D12
cs=0x275c;eip=0x000d14; 	T(MOV(ax, bx));	// 87164 mov     ax, bx ;~ 275C:0D14
cs=0x275c;eip=0x000d16; 	R(RETN(0));	// 87165 retn ;~ 275C:0D16
sub_368b7:
	// 87173 
#undef var_8
#define var_8 -8
	// 87176 var_8           = word ptr -8 ;~ 275C:0D17
#undef var_6
#define var_6 -6
	// 87177 var_6           = word ptr -6 ;~ 275C:0D17
#undef arg_0
#define arg_0 4
	// 87178 arg_0           = word ptr  4 ;~ 275C:0D17
#undef arg_2
#define arg_2 6
	// 87179 arg_2           = word ptr  6 ;~ 275C:0D17
#undef arg_4
#define arg_4 8
	// 87180 arg_4           = word ptr  8 ;~ 275C:0D17
#undef arg_6
#define arg_6 0x0A
	// 87181 arg_6           = word ptr  0Ah ;~ 275C:0D17
cs=0x275c;eip=0x000d17; 	X(PUSH(bp));	// 87183 push    bp ;~ 275C:0D17
cs=0x275c;eip=0x000d18; 	T(MOV(bp, sp));	// 87184 mov     bp, sp ;~ 275C:0D18
cs=0x275c;eip=0x000d1a; 	X(PUSH(si));	// 87185 push    si ;~ 275C:0D1A
cs=0x275c;eip=0x000d1b; 	X(PUSH(di));	// 87186 push    di ;~ 275C:0D1B
cs=0x275c;eip=0x000d1c; 	T(SUB(sp, 4));	// 87187 sub     sp, 4 ;~ 275C:0D1C
cs=0x275c;eip=0x000d1f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 87188 mov     ax, [bp+arg_2] ;~ 275C:0D1F
cs=0x275c;eip=0x000d22; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 87189 sub     ax, [bp+arg_6] ;~ 275C:0D22
cs=0x275c;eip=0x000d25; 	T(INC(ax));	// 87190 inc     ax ;~ 275C:0D25
cs=0x275c;eip=0x000d26; 	X(MOV(*(dw*)((&unk_4a0b4)), ax));	// 87191 mov     word ptr unk_4A0B4, ax ;~ 275C:0D26
cs=0x275c;eip=0x000d29; 	T(SHR(ax, 1));	// 87192 shr     ax, 1 ;~ 275C:0D29
cs=0x275c;eip=0x000d2b; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 87193 add     ax, [bp+arg_6] ;~ 275C:0D2B
cs=0x275c;eip=0x000d2e; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 87194 mov     [bp+var_6], ax ;~ 275C:0D2E
cs=0x275c;eip=0x000d31; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 87195 mov     ax, [bp+arg_0] ;~ 275C:0D31
cs=0x275c;eip=0x000d34; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 87196 sub     ax, [bp+arg_4] ;~ 275C:0D34
cs=0x275c;eip=0x000d37; 	T(INC(ax));	// 87197 inc     ax ;~ 275C:0D37
cs=0x275c;eip=0x000d38; 	X(MOV(*(dw*)((&unk_4a0b6)), ax));	// 87198 mov     word ptr unk_4A0B6, ax ;~ 275C:0D38
cs=0x275c;eip=0x000d3b; 	T(SHR(ax, 1));	// 87199 shr     ax, 1 ;~ 275C:0D3B
cs=0x275c;eip=0x000d3d; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 87200 add     ax, [bp+arg_4] ;~ 275C:0D3D
cs=0x275c;eip=0x000d40; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 87201 mov     [bp+var_8], ax ;~ 275C:0D40
cs=0x275c;eip=0x000d43; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 87202 mov     ax, [bp+arg_6] ;~ 275C:0D43
cs=0x275c;eip=0x000d46; 	X(MOV(*(dw*)((&unk_4a0a0)), ax));	// 87203 mov     word ptr unk_4A0A0, ax ;~ 275C:0D46
cs=0x275c;eip=0x000d49; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 87204 mov     ax, [bp+arg_2] ;~ 275C:0D49
cs=0x275c;eip=0x000d4c; 	X(MOV(*(dw*)((&unk_4a0a2)), ax));	// 87205 mov     word ptr unk_4A0A2, ax ;~ 275C:0D4C
cs=0x275c;eip=0x000d4f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 87206 mov     ax, [bp+arg_4] ;~ 275C:0D4F
cs=0x275c;eip=0x000d52; 	X(MOV(*(dw*)((&unk_4a0a4)), ax));	// 87207 mov     word ptr unk_4A0A4, ax ;~ 275C:0D52
cs=0x275c;eip=0x000d55; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 87208 mov     ax, [bp+arg_0] ;~ 275C:0D55
cs=0x275c;eip=0x000d58; 	X(MOV(*(dw*)((&unk_4a0a6)), ax));	// 87209 mov     word ptr unk_4A0A6, ax ;~ 275C:0D58
cs=0x275c;eip=0x000d5b; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_6+1))));	// 87210 mov     al, byte ptr [bp+arg_6+1] ;~ 275C:0D5B
cs=0x275c;eip=0x000d5e; 	T(CBW);	// 87211 cbw ;~ 275C:0D5E
cs=0x275c;eip=0x000d5f; 	T(DEC(ax));	// 87212 dec     ax ;~ 275C:0D5F
cs=0x275c;eip=0x000d60; 	R(JNS(loc_36904));	// 87213 jns     short loc_36904 ;~ 275C:0D60
cs=0x275c;eip=0x000d62; 	T(XOR(ax, ax));	// 87214 xor     ax, ax ;~ 275C:0D62
loc_36904:
	// 9979 
cs=0x275c;eip=0x000d64; 	X(MOV(*(dw*)((&unk_4a0ac)), ax));	// 87217 mov     word ptr unk_4A0AC, ax ;~ 275C:0D64
cs=0x275c;eip=0x000d67; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_2+1))));	// 87218 mov     al, byte ptr [bp+arg_2+1] ;~ 275C:0D67
cs=0x275c;eip=0x000d6a; 	T(CBW);	// 87219 cbw ;~ 275C:0D6A
cs=0x275c;eip=0x000d6b; 	T(INC(ax));	// 87220 inc     ax ;~ 275C:0D6B
cs=0x275c;eip=0x000d6c; 	T(CMP(ax, *(dw*)((&unk_47a94))));	// 87221 cmp     ax, word ptr unk_47A94 ;~ 275C:0D6C
cs=0x275c;eip=0x000d70; 	R(JL(loc_36916));	// 87222 jl      short loc_36916 ;~ 275C:0D70
cs=0x275c;eip=0x000d72; 	T(MOV(ax, *(dw*)((&unk_47a94))));	// 87223 mov     ax, word ptr unk_47A94 ;~ 275C:0D72
cs=0x275c;eip=0x000d75; 	T(DEC(ax));	// 87224 dec     ax ;~ 275C:0D75
loc_36916:
	// 9980 
cs=0x275c;eip=0x000d76; 	X(MOV(*(dw*)((&unk_4a0ae)), ax));	// 87227 mov     word ptr unk_4A0AE, ax ;~ 275C:0D76
cs=0x275c;eip=0x000d79; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_4+1))));	// 87228 mov     al, byte ptr [bp+arg_4+1] ;~ 275C:0D79
cs=0x275c;eip=0x000d7c; 	T(CBW);	// 87229 cbw ;~ 275C:0D7C
cs=0x275c;eip=0x000d7d; 	T(DEC(ax));	// 87230 dec     ax ;~ 275C:0D7D
cs=0x275c;eip=0x000d7e; 	R(JNS(loc_36922));	// 87231 jns     short loc_36922 ;~ 275C:0D7E
cs=0x275c;eip=0x000d80; 	T(XOR(ax, ax));	// 87232 xor     ax, ax ;~ 275C:0D80
loc_36922:
	// 9981 
cs=0x275c;eip=0x000d82; 	X(MOV(*(dw*)((&unk_4a0b0)), ax));	// 87235 mov     word ptr unk_4A0B0, ax ;~ 275C:0D82
cs=0x275c;eip=0x000d85; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_0+1))));	// 87236 mov     al, byte ptr [bp+arg_0+1] ;~ 275C:0D85
cs=0x275c;eip=0x000d88; 	T(CBW);	// 87237 cbw ;~ 275C:0D88
cs=0x275c;eip=0x000d89; 	T(INC(ax));	// 87238 inc     ax ;~ 275C:0D89
cs=0x275c;eip=0x000d8a; 	T(CMP(ax, *(dw*)((&unk_47a96))));	// 87239 cmp     ax, word ptr unk_47A96 ;~ 275C:0D8A
cs=0x275c;eip=0x000d8e; 	R(JL(loc_36934));	// 87240 jl      short loc_36934 ;~ 275C:0D8E
cs=0x275c;eip=0x000d90; 	T(MOV(ax, *(dw*)((&unk_47a96))));	// 87241 mov     ax, word ptr unk_47A96 ;~ 275C:0D90
cs=0x275c;eip=0x000d93; 	T(DEC(ax));	// 87242 dec     ax ;~ 275C:0D93
loc_36934:
	// 9982 
cs=0x275c;eip=0x000d94; 	X(MOV(*(dw*)((&unk_4a0b2)), ax));	// 87245 mov     word ptr unk_4A0B2, ax ;~ 275C:0D94
cs=0x275c;eip=0x000d97; 	T(MOV(ax, *(dw*)((&unk_570c2))));	// 87246 mov     ax, word ptr unk_570C2 ;~ 275C:0D97
cs=0x275c;eip=0x000d9a; 	X(MOV(*(dw*)((&unk_4a0ba)), ax));	// 87247 mov     word ptr unk_4A0BA, ax ;~ 275C:0D9A
cs=0x275c;eip=0x000d9d; 	T(CMP(ax, 0x137B));	// 87248 cmp     ax, 137Bh ;~ 275C:0D9D
cs=0x275c;eip=0x000da0; 	R(JL(loc_36947));	// 87249 jl      short loc_36947 ;~ 275C:0DA0
cs=0x275c;eip=0x000da2; 	R(CALLF(sub_2f82e,0));	// 87250 call    sub_2F82E ;~ 275C:0DA2
loc_36947:
	// 9983 
cs=0x275c;eip=0x000da7; 	T(MOV(cx, 0x0A));	// 87254 mov     cx, 0Ah ;~ 275C:0DA7
cs=0x275c;eip=0x000daa; 	T(CMP(*(dw*)((&unk_4a0b4)), 8));	// 87255 cmp     word ptr unk_4A0B4, 8 ;~ 275C:0DAA
cs=0x275c;eip=0x000daf; 	R(JLE(loc_36958));	// 87256 jle     short loc_36958 ;~ 275C:0DAF
cs=0x275c;eip=0x000db1; 	T(CMP(*(dw*)((&unk_4a0b6)), 8));	// 87257 cmp     word ptr unk_4A0B6, 8 ;~ 275C:0DB1
cs=0x275c;eip=0x000db6; 	R(JG(loc_3695b));	// 87258 jg      short loc_3695B ;~ 275C:0DB6
loc_36958:
	// 9984 
cs=0x275c;eip=0x000db8; 	T(MOV(cx, 0x0FFFF));	// 87261 mov     cx, 0FFFFh ;~ 275C:0DB8
loc_3695b:
	// 9985 
cs=0x275c;eip=0x000dbb; 	X(MOV(*(dw*)((&unk_4a0b8)), ax));	// 87264 mov     word ptr unk_4A0B8, ax ;~ 275C:0DBB
cs=0x275c;eip=0x000dbe; 	T(MOV(di, *(dw*)((&unk_4a0ba))));	// 87265 mov     di, word ptr unk_4A0BA ;~ 275C:0DBE
cs=0x275c;eip=0x000dc2; 	T(ADD(di, 1));	// 87266 add     di, 1 ;~ 275C:0DC2
cs=0x275c;eip=0x000dc5; 	T(MOV(ax, *(dw*)((&unk_4a0ac))));	// 87267 mov     ax, word ptr unk_4A0AC ;~ 275C:0DC5
cs=0x275c;eip=0x000dc8; 	X(MOV(*(dw*)((&unk_4a0a8)), ax));	// 87268 mov     word ptr unk_4A0A8, ax ;~ 275C:0DC8
loc_3696b:
	// 9986 
cs=0x275c;eip=0x000dcb; 	T(MOV(ax, *(dw*)((&unk_4a0b0))));	// 87271 mov     ax, word ptr unk_4A0B0 ;~ 275C:0DCB
cs=0x275c;eip=0x000dce; 	X(MOV(*(dw*)((&unk_4a0aa)), ax));	// 87272 mov     word ptr unk_4A0AA, ax ;~ 275C:0DCE
loc_36971:
	// 9987 
cs=0x275c;eip=0x000dd1; 	T(MOV(bx, *(dw*)((&unk_47a98))));	// 87275 mov     bx, word ptr unk_47A98 ;~ 275C:0DD1
cs=0x275c;eip=0x000dd5; 	T(MOV(ax, *(dw*)((&unk_4a0aa))));	// 87276 mov     ax, word ptr unk_4A0AA ;~ 275C:0DD5
cs=0x275c;eip=0x000dd8; 	X(IMUL1_2(*(dw*)((&unk_47a94))));	// 87277 imul    word ptr unk_47A94 ;~ 275C:0DD8
cs=0x275c;eip=0x000ddc; 	T(ADD(ax, *(dw*)((&unk_4a0a8))));	// 87278 add     ax, word ptr unk_4A0A8 ;~ 275C:0DDC
cs=0x275c;eip=0x000de0; 	T(SHL(ax, 1));	// 87279 shl     ax, 1 ;~ 275C:0DE0
cs=0x275c;eip=0x000de2; 	T(SHL(ax, 1));	// 87280 shl     ax, 1 ;~ 275C:0DE2
cs=0x275c;eip=0x000de4; 	T(ADD(bx, ax));	// 87281 add     bx, ax ;~ 275C:0DE4
cs=0x275c;eip=0x000de6; 	T(MOV(es, *(dw*)((&unk_47a9e))));	// 87282 mov     es, word ptr unk_47A9E ;~ 275C:0DE6
cs=0x275c;eip=0x000dea; 	T(MOV(bx, *(dw*)(raddr(es,bx))));	// 87283 mov     bx, es:[bx] ;~ 275C:0DEA
cs=0x275c;eip=0x000ded; 	T(MOV(es, *(dw*)((&unk_47a9a))));	// 87284 mov     es, word ptr unk_47A9A ;~ 275C:0DED
cs=0x275c;eip=0x000df1; 	T(OR(bx, bx));	// 87285 or      bx, bx ;~ 275C:0DF1
cs=0x275c;eip=0x000df3; 	R(JNZ(loc_369a3));	// 87286 jnz     short loc_369A3 ;~ 275C:0DF3
cs=0x275c;eip=0x000df5; 	R(JMP(loc_36a33));	// 87287 jmp     loc_36A33 ;~ 275C:0DF5
loc_36998:
	// 9988 
cs=0x275c;eip=0x000df8; 	T(MOV(bx, *(dw*)(raddr(es,bx+4))));	// 87292 mov     bx, es:[bx+4] ;~ 275C:0DF8
cs=0x275c;eip=0x000dfc; 	T(OR(bx, bx));	// 87293 or      bx, bx ;~ 275C:0DFC
cs=0x275c;eip=0x000dfe; 	R(JNZ(loc_369a3));	// 87294 jnz     short loc_369A3 ;~ 275C:0DFE
cs=0x275c;eip=0x000e00; 	R(JMP(loc_36a33));	// 87295 jmp     loc_36A33 ;~ 275C:0E00
loc_369a3:
	// 9989 
cs=0x275c;eip=0x000e03; 	T(MOV(ax, *(dw*)((&unk_570c4))));	// 87300 mov     ax, word ptr unk_570C4 ;~ 275C:0E03
cs=0x275c;eip=0x000e06; 	T(TEST(*(dw*)(raddr(es,bx+2)), ax));	// 87301 test    es:[bx+2], ax ;~ 275C:0E06
cs=0x275c;eip=0x000e0a; 	R(JZ(loc_36998));	// 87302 jz      short loc_36998 ;~ 275C:0E0A
cs=0x275c;eip=0x000e0c; 	T(MOV(si, *(dw*)(raddr(es,bx))));	// 87303 mov     si, es:[bx] ;~ 275C:0E0C
cs=0x275c;eip=0x000e0f; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 87304 mov     ax, es:[bx+6] ;~ 275C:0E0F
cs=0x275c;eip=0x000e13; 	T(MOV(dx, *(dw*)(raddr(es,bx+8))));	// 87305 mov     dx, es:[bx+8] ;~ 275C:0E13
cs=0x275c;eip=0x000e17; 	T(ADD(ax, *(dw*)(raddr(ds,si+0x30))));	// 87306 add     ax, [si+30h] ;~ 275C:0E17
cs=0x275c;eip=0x000e1a; 	T(ADC(dx, *(dw*)(raddr(ds,si+0x32))));	// 87307 adc     dx, [si+32h] ;~ 275C:0E1A
cs=0x275c;eip=0x000e1d; 	T(ADD(ax, 0x0C8));	// 87308 add     ax, 0C8h ; 'È' ;~ 275C:0E1D
cs=0x275c;eip=0x000e20; 	T(ADC(dx, 0));	// 87309 adc     dx, 0 ;~ 275C:0E20
cs=0x275c;eip=0x000e23; 	T(CMP(dx, *(dw*)((&unk_4a0a0))));	// 87310 cmp     dx, word ptr unk_4A0A0 ;~ 275C:0E23
cs=0x275c;eip=0x000e27; 	R(JL(loc_36998));	// 87311 jl      short loc_36998 ;~ 275C:0E27
cs=0x275c;eip=0x000e29; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 87312 mov     ax, es:[bx+6] ;~ 275C:0E29
cs=0x275c;eip=0x000e2d; 	T(MOV(dx, *(dw*)(raddr(es,bx+8))));	// 87313 mov     dx, es:[bx+8] ;~ 275C:0E2D
cs=0x275c;eip=0x000e31; 	T(ADD(ax, *(dw*)(raddr(ds,si+0x2C))));	// 87314 add     ax, [si+2Ch] ;~ 275C:0E31
cs=0x275c;eip=0x000e34; 	T(ADC(dx, *(dw*)(raddr(ds,si+0x2E))));	// 87315 adc     dx, [si+2Eh] ;~ 275C:0E34
cs=0x275c;eip=0x000e37; 	T(SUB(ax, 0x0C8));	// 87316 sub     ax, 0C8h ; 'È' ;~ 275C:0E37
cs=0x275c;eip=0x000e3a; 	T(SBB(dx, 0));	// 87317 sbb     dx, 0 ;~ 275C:0E3A
cs=0x275c;eip=0x000e3d; 	T(CMP(dx, *(dw*)((&unk_4a0a2))));	// 87318 cmp     dx, word ptr unk_4A0A2 ;~ 275C:0E3D
cs=0x275c;eip=0x000e41; 	R(JGE(loc_36998));	// 87319 jge     short loc_36998 ;~ 275C:0E41
cs=0x275c;eip=0x000e43; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E))));	// 87320 mov     ax, es:[bx+0Eh] ;~ 275C:0E43
cs=0x275c;eip=0x000e47; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x10))));	// 87321 mov     dx, es:[bx+10h] ;~ 275C:0E47
cs=0x275c;eip=0x000e4b; 	T(ADD(ax, *(dw*)(raddr(ds,si+0x40))));	// 87322 add     ax, [si+40h] ;~ 275C:0E4B
cs=0x275c;eip=0x000e4e; 	T(ADC(dx, *(dw*)(raddr(ds,si+0x42))));	// 87323 adc     dx, [si+42h] ;~ 275C:0E4E
cs=0x275c;eip=0x000e51; 	T(ADD(ax, 0x0C8));	// 87324 add     ax, 0C8h ; 'È' ;~ 275C:0E51
cs=0x275c;eip=0x000e54; 	T(ADC(dx, 0));	// 87325 adc     dx, 0 ;~ 275C:0E54
cs=0x275c;eip=0x000e57; 	T(CMP(dx, *(dw*)((&unk_4a0a4))));	// 87326 cmp     dx, word ptr unk_4A0A4 ;~ 275C:0E57
cs=0x275c;eip=0x000e5b; 	R(JL(loc_36998));	// 87327 jl      short loc_36998 ;~ 275C:0E5B
cs=0x275c;eip=0x000e5d; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E))));	// 87328 mov     ax, es:[bx+0Eh] ;~ 275C:0E5D
cs=0x275c;eip=0x000e61; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x10))));	// 87329 mov     dx, es:[bx+10h] ;~ 275C:0E61
cs=0x275c;eip=0x000e65; 	T(ADD(ax, *(dw*)(raddr(ds,si+0x3C))));	// 87330 add     ax, [si+3Ch] ;~ 275C:0E65
cs=0x275c;eip=0x000e68; 	T(ADC(dx, *(dw*)(raddr(ds,si+0x3E))));	// 87331 adc     dx, [si+3Eh] ;~ 275C:0E68
cs=0x275c;eip=0x000e6b; 	T(SUB(ax, 0x0C8));	// 87332 sub     ax, 0C8h ; 'È' ;~ 275C:0E6B
cs=0x275c;eip=0x000e6e; 	T(SBB(dx, 0));	// 87333 sbb     dx, 0 ;~ 275C:0E6E
cs=0x275c;eip=0x000e71; 	T(CMP(dx, *(dw*)((&unk_4a0a6))));	// 87334 cmp     dx, word ptr unk_4A0A6 ;~ 275C:0E71
cs=0x275c;eip=0x000e75; 	R(JGE(loc_36998));	// 87335 jge     short loc_36998 ;~ 275C:0E75
cs=0x275c;eip=0x000e77; 	T(CMP(di, 0x1388));	// 87336 cmp     di, 1388h ;~ 275C:0E77
cs=0x275c;eip=0x000e7b; 	R(JC(loc_36a22));	// 87337 jb      short loc_36A22 ;~ 275C:0E7B
cs=0x275c;eip=0x000e7d; 	R(CALLF(sub_2f82e,0));	// 87338 call    sub_2F82E ;~ 275C:0E7D
loc_36a22:
	// 9990 
cs=0x275c;eip=0x000e82; 	T(MOV(es, *(dw*)((&unk_570c0))));	// 87342 mov     es, word ptr unk_570C0 ;~ 275C:0E82
cs=0x275c;eip=0x000e86; 	T(MOV(ax, bx));	// 87344 mov     ax, bx ;~ 275C:0E86
cs=0x275c;eip=0x000e88; 	X(STOSW);	// 87345 stosw ;~ 275C:0E88
cs=0x275c;eip=0x000e89; 	T(MOV(es, *(dw*)((&unk_47a9a))));	// 87346 mov     es, word ptr unk_47A9A ;~ 275C:0E89
cs=0x275c;eip=0x000e8d; 	T(DEC(cx));	// 87348 dec     cx ;~ 275C:0E8D
cs=0x275c;eip=0x000e8e; 	R(JZ(loc_36a73));	// 87349 jz      short loc_36A73 ;~ 275C:0E8E
cs=0x275c;eip=0x000e90; 	R(JMP(loc_36998));	// 87350 jmp     loc_36998 ;~ 275C:0E90
loc_36a33:
	// 9991 
cs=0x275c;eip=0x000e93; 	X(INC(*(dw*)((&unk_4a0aa))));	// 87355 inc     word ptr unk_4A0AA ;~ 275C:0E93
cs=0x275c;eip=0x000e97; 	T(MOV(ax, *(dw*)((&unk_4a0aa))));	// 87356 mov     ax, word ptr unk_4A0AA ;~ 275C:0E97
cs=0x275c;eip=0x000e9a; 	T(CMP(ax, *(dw*)((&unk_4a0b2))));	// 87357 cmp     ax, word ptr unk_4A0B2 ;~ 275C:0E9A
cs=0x275c;eip=0x000e9e; 	R(JG(loc_36a43));	// 87358 jg      short loc_36A43 ;~ 275C:0E9E
cs=0x275c;eip=0x000ea0; 	R(JMP(loc_36971));	// 87359 jmp     loc_36971 ;~ 275C:0EA0
loc_36a43:
	// 9992 
cs=0x275c;eip=0x000ea3; 	X(INC(*(dw*)((&unk_4a0a8))));	// 87363 inc     word ptr unk_4A0A8 ;~ 275C:0EA3
cs=0x275c;eip=0x000ea7; 	T(MOV(ax, *(dw*)((&unk_4a0a8))));	// 87364 mov     ax, word ptr unk_4A0A8 ;~ 275C:0EA7
cs=0x275c;eip=0x000eaa; 	T(CMP(ax, *(dw*)((&unk_4a0ae))));	// 87365 cmp     ax, word ptr unk_4A0AE ;~ 275C:0EAA
cs=0x275c;eip=0x000eae; 	R(JG(loc_36a53));	// 87366 jg      short loc_36A53 ;~ 275C:0EAE
cs=0x275c;eip=0x000eb0; 	R(JMP(loc_3696b));	// 87367 jmp     loc_3696B ;~ 275C:0EB0
loc_36a53:
	// 9993 
cs=0x275c;eip=0x000eb3; 	T(MOV(es, *(dw*)((&unk_570c0))));	// 87371 mov     es, word ptr unk_570C0 ;~ 275C:0EB3
cs=0x275c;eip=0x000eb7; 	T(CMP(di, 0x1386));	// 87373 cmp     di, 1386h ;~ 275C:0EB7
cs=0x275c;eip=0x000ebb; 	R(JBE(loc_36a62));	// 87374 jbe     short loc_36A62 ;~ 275C:0EBB
cs=0x275c;eip=0x000ebd; 	R(CALLF(sub_2f82e,0));	// 87375 call    sub_2F82E ;~ 275C:0EBD
loc_36a62:
	// 9994 
cs=0x275c;eip=0x000ec2; 	T(XOR(ax, ax));	// 87379 xor     ax, ax ;~ 275C:0EC2
cs=0x275c;eip=0x000ec4; 	X(STOSW);	// 87380 stosw ;~ 275C:0EC4
cs=0x275c;eip=0x000ec5; 	X(MOV(*(dw*)((&unk_570c2)), di));	// 87381 mov     word ptr unk_570C2, di ;~ 275C:0EC5
cs=0x275c;eip=0x000ec9; 	T(MOV(di, *(dw*)((&unk_4a0ba))));	// 87382 mov     di, word ptr unk_4A0BA ;~ 275C:0EC9
cs=0x275c;eip=0x000ecd; 	X(MOV(*(raddr(es,di)), 1));	// 87383 mov     byte ptr es:[di], 1 ;~ 275C:0ECD
cs=0x275c;eip=0x000ed1; 	R(JMP(loc_36aeb));	// 87384 jmp     short loc_36AEB ;~ 275C:0ED1
loc_36a73:
	// 9995 
cs=0x275c;eip=0x000ed3; 	T(MOV(di, *(dw*)((&unk_4a0ba))));	// 87388 mov     di, word ptr unk_4A0BA ;~ 275C:0ED3
cs=0x275c;eip=0x000ed7; 	T(ax = di+0x0D);	// 87389 lea     ax, [di+0Dh] ;~ 275C:0ED7
cs=0x275c;eip=0x000eda; 	X(MOV(*(dw*)((&unk_570c2)), ax));	// 87390 mov     word ptr unk_570C2, ax ;~ 275C:0EDA
cs=0x275c;eip=0x000edd; 	T(CMP(di, 0x137B));	// 87391 cmp     di, 137Bh ;~ 275C:0EDD
cs=0x275c;eip=0x000ee1; 	R(JC(loc_36a88));	// 87392 jb      short loc_36A88 ;~ 275C:0EE1
cs=0x275c;eip=0x000ee3; 	R(CALLF(sub_2f82e,0));	// 87393 call    sub_2F82E ;~ 275C:0EE3
loc_36a88:
	// 9996 
cs=0x275c;eip=0x000ee8; 	T(MOV(es, *(dw*)((&unk_570c0))));	// 87397 mov     es, word ptr unk_570C0 ;~ 275C:0EE8
cs=0x275c;eip=0x000eec; 	T(XOR(al, al));	// 87398 xor     al, al ;~ 275C:0EEC
cs=0x275c;eip=0x000eee; 	X(STOSB);	// 87399 stosb ;~ 275C:0EEE
cs=0x275c;eip=0x000eef; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 87400 mov     ax, [bp+var_6] ;~ 275C:0EEF
cs=0x275c;eip=0x000ef2; 	X(STOSW);	// 87401 stosw ;~ 275C:0EF2
cs=0x275c;eip=0x000ef3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 87402 mov     ax, [bp+var_8] ;~ 275C:0EF3
cs=0x275c;eip=0x000ef6; 	X(STOSW);	// 87403 stosw ;~ 275C:0EF6
cs=0x275c;eip=0x000ef7; 	T(MOV(ax, *(dw*)((&unk_570c2))));	// 87404 mov     ax, word ptr unk_570C2 ;~ 275C:0EF7
cs=0x275c;eip=0x000efa; 	X(STOSW);	// 87405 stosw ;~ 275C:0EFA
cs=0x275c;eip=0x000efb; 	T(MOV(si, es));	// 87406 mov     si, es ;~ 275C:0EFB
cs=0x275c;eip=0x000efd; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 87407 push    [bp+arg_6] ;~ 275C:0EFD
cs=0x275c;eip=0x000f00; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 87408 push    [bp+arg_4] ;~ 275C:0F00
cs=0x275c;eip=0x000f03; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 87409 push    [bp+var_6] ;~ 275C:0F03
cs=0x275c;eip=0x000f06; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 87410 push    [bp+var_8] ;~ 275C:0F06
cs=0x275c;eip=0x000f09; 	R(CALL(sub_368b7,0));	// 87411 call    sub_368B7 ;~ 275C:0F09
cs=0x275c;eip=0x000f0c; 	T(MOV(es, si));	// 87412 mov     es, si ;~ 275C:0F0C
cs=0x275c;eip=0x000f0e; 	T(MOV(ax, *(dw*)((&unk_570c2))));	// 87413 mov     ax, word ptr unk_570C2 ;~ 275C:0F0E
cs=0x275c;eip=0x000f11; 	X(STOSW);	// 87414 stosw ;~ 275C:0F11
cs=0x275c;eip=0x000f12; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 87415 push    [bp+var_6] ;~ 275C:0F12
cs=0x275c;eip=0x000f15; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 87416 push    [bp+arg_4] ;~ 275C:0F15
cs=0x275c;eip=0x000f18; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 87417 push    [bp+arg_2] ;~ 275C:0F18
cs=0x275c;eip=0x000f1b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 87418 push    [bp+var_8] ;~ 275C:0F1B
cs=0x275c;eip=0x000f1e; 	R(CALL(sub_368b7,0));	// 87419 call    sub_368B7 ;~ 275C:0F1E
cs=0x275c;eip=0x000f21; 	T(MOV(es, si));	// 87420 mov     es, si ;~ 275C:0F21
cs=0x275c;eip=0x000f23; 	T(MOV(ax, *(dw*)((&unk_570c2))));	// 87421 mov     ax, word ptr unk_570C2 ;~ 275C:0F23
cs=0x275c;eip=0x000f26; 	X(STOSW);	// 87422 stosw ;~ 275C:0F26
cs=0x275c;eip=0x000f27; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 87423 push    [bp+arg_6] ;~ 275C:0F27
cs=0x275c;eip=0x000f2a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 87424 push    [bp+var_8] ;~ 275C:0F2A
cs=0x275c;eip=0x000f2d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 87425 push    [bp+var_6] ;~ 275C:0F2D
cs=0x275c;eip=0x000f30; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 87426 push    [bp+arg_0] ;~ 275C:0F30
cs=0x275c;eip=0x000f33; 	R(CALL(sub_368b7,0));	// 87427 call    sub_368B7 ;~ 275C:0F33
cs=0x275c;eip=0x000f36; 	T(MOV(es, si));	// 87428 mov     es, si ;~ 275C:0F36
cs=0x275c;eip=0x000f38; 	T(MOV(ax, *(dw*)((&unk_570c2))));	// 87429 mov     ax, word ptr unk_570C2 ;~ 275C:0F38
cs=0x275c;eip=0x000f3b; 	X(STOSW);	// 87430 stosw ;~ 275C:0F3B
cs=0x275c;eip=0x000f3c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 87431 push    [bp+var_6] ;~ 275C:0F3C
cs=0x275c;eip=0x000f3f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 87432 push    [bp+var_8] ;~ 275C:0F3F
cs=0x275c;eip=0x000f42; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 87433 push    [bp+arg_2] ;~ 275C:0F42
cs=0x275c;eip=0x000f45; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 87434 push    [bp+arg_0] ;~ 275C:0F45
cs=0x275c;eip=0x000f48; 	R(CALL(sub_368b7,0));	// 87435 call    sub_368B7 ;~ 275C:0F48
loc_36aeb:
	// 9997 
cs=0x275c;eip=0x000f4b; 	T(ADD(sp, 4));	// 87438 add     sp, 4 ;~ 275C:0F4B
cs=0x275c;eip=0x000f4e; 	X(POP(di));	// 87439 pop     di ;~ 275C:0F4E
cs=0x275c;eip=0x000f4f; 	X(POP(si));	// 87440 pop     si ;~ 275C:0F4F
cs=0x275c;eip=0x000f50; 	X(POP(bp));	// 87441 pop     bp ;~ 275C:0F50
cs=0x275c;eip=0x000f51; 	R(RETN(8));	// 87442 retn    8 ;~ 275C:0F51

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_35be1: 	goto loc_35be1;
        case m2c::kloc_35c10: 	goto loc_35c10;
        case m2c::kloc_35c2d: 	goto loc_35c2d;
        case m2c::kloc_35c6a: 	goto loc_35c6a;
        case m2c::kloc_35c85: 	goto loc_35c85;
        case m2c::kloc_35ca0: 	goto loc_35ca0;
        case m2c::kloc_35cbb: 	goto loc_35cbb;
        case m2c::kloc_35cd6: 	goto loc_35cd6;
        case m2c::kloc_35cf1: 	goto loc_35cf1;
        case m2c::kloc_35eac: 	goto loc_35eac;
        case m2c::kloc_35ee2: 	goto loc_35ee2;
        case m2c::kloc_35eeb: 	goto loc_35eeb;
        case m2c::kloc_35f07: 	goto loc_35f07;
        case m2c::kloc_35f18: 	goto loc_35f18;
        case m2c::kloc_35f2c: 	goto loc_35f2c;
        case m2c::kloc_35f45: 	goto loc_35f45;
        case m2c::kloc_35f4e: 	goto loc_35f4e;
        case m2c::kloc_35f5e: 	goto loc_35f5e;
        case m2c::kloc_35f60: 	goto loc_35f60;
        case m2c::kloc_35f74: 	goto loc_35f74;
        case m2c::kloc_35f7d: 	goto loc_35f7d;
        case m2c::kloc_35f89: 	goto loc_35f89;
        case m2c::kloc_35f92: 	goto loc_35f92;
        case m2c::kloc_35f9e: 	goto loc_35f9e;
        case m2c::kloc_35fa7: 	goto loc_35fa7;
        case m2c::kloc_35fba: 	goto loc_35fba;
        case m2c::kloc_35fc3: 	goto loc_35fc3;
        case m2c::kloc_35fcf: 	goto loc_35fcf;
        case m2c::kloc_35fd8: 	goto loc_35fd8;
        case m2c::kloc_35fe4: 	goto loc_35fe4;
        case m2c::kloc_35fed: 	goto loc_35fed;
        case m2c::kloc_36053: 	goto loc_36053;
        case m2c::kloc_3610b: 	goto loc_3610b;
        case m2c::kloc_361d7: 	goto loc_361d7;
        case m2c::kloc_361db: 	goto loc_361db;
        case m2c::kloc_361e8: 	goto loc_361e8;
        case m2c::kloc_361f3: 	goto loc_361f3;
        case m2c::kloc_3621d: 	goto loc_3621d;
        case m2c::kloc_36237: 	goto loc_36237;
        case m2c::kloc_3625f: 	goto loc_3625f;
        case m2c::kloc_36280: 	goto loc_36280;
        case m2c::kloc_36300: 	goto loc_36300;
        case m2c::kloc_3630c: 	goto loc_3630c;
        case m2c::kloc_36315: 	goto loc_36315;
        case m2c::kloc_36322: 	goto loc_36322;
        case m2c::kloc_36344: 	goto loc_36344;
        case m2c::kloc_3636f: 	goto loc_3636f;
        case m2c::kloc_36397: 	goto loc_36397;
        case m2c::kloc_363bf: 	goto loc_363bf;
        case m2c::kloc_363e7: 	goto loc_363e7;
        case m2c::kloc_3640f: 	goto loc_3640f;
        case m2c::kloc_36437: 	goto loc_36437;
        case m2c::kloc_3643d: 	goto loc_3643d;
        case m2c::kloc_36468: 	goto loc_36468;
        case m2c::kloc_36490: 	goto loc_36490;
        case m2c::kloc_364b8: 	goto loc_364b8;
        case m2c::kloc_364e0: 	goto loc_364e0;
        case m2c::kloc_36508: 	goto loc_36508;
        case m2c::kloc_36530: 	goto loc_36530;
        case m2c::kloc_36536: 	goto loc_36536;
        case m2c::kloc_36549: 	goto loc_36549;
        case m2c::kloc_36567: 	goto loc_36567;
        case m2c::kloc_36576: 	goto loc_36576;
        case m2c::kloc_3658b: 	goto loc_3658b;
        case m2c::kloc_365ba: 	goto loc_365ba;
        case m2c::kloc_3660f: 	goto loc_3660f;
        case m2c::kloc_36610: 	goto loc_36610;
        case m2c::kloc_36614: 	goto loc_36614;
        case m2c::kloc_36640: 	goto loc_36640;
        case m2c::kloc_36643: 	goto loc_36643;
        case m2c::kloc_36658: 	goto loc_36658;
        case m2c::kloc_3665f: 	goto loc_3665f;
        case m2c::kloc_3667b: 	goto loc_3667b;
        case m2c::kloc_36682: 	goto loc_36682;
        case m2c::kloc_3671e: 	goto loc_3671e;
        case m2c::kloc_36736: 	goto loc_36736;
        case m2c::kloc_36748: 	goto loc_36748;
        case m2c::kloc_36781: 	goto loc_36781;
        case m2c::kloc_3678a: 	goto loc_3678a;
        case m2c::kloc_367a8: 	goto loc_367a8;
        case m2c::kloc_367c3: 	goto loc_367c3;
        case m2c::kloc_367d3: 	goto loc_367d3;
        case m2c::kloc_367d8: 	goto loc_367d8;
        case m2c::kloc_367da: 	goto loc_367da;
        case m2c::kloc_367ee: 	goto loc_367ee;
        case m2c::kloc_367f6: 	goto loc_367f6;
        case m2c::kloc_367fd: 	goto loc_367fd;
        case m2c::kloc_36832: 	goto loc_36832;
        case m2c::kloc_3683b: 	goto loc_3683b;
        case m2c::kloc_36859: 	goto loc_36859;
        case m2c::kloc_36874: 	goto loc_36874;
        case m2c::kloc_36884: 	goto loc_36884;
        case m2c::kloc_36889: 	goto loc_36889;
        case m2c::kloc_3688b: 	goto loc_3688b;
        case m2c::kloc_36896: 	goto loc_36896;
        case m2c::kloc_368b0: 	goto loc_368b0;
        case m2c::kloc_36904: 	goto loc_36904;
        case m2c::kloc_36916: 	goto loc_36916;
        case m2c::kloc_36922: 	goto loc_36922;
        case m2c::kloc_36934: 	goto loc_36934;
        case m2c::kloc_36947: 	goto loc_36947;
        case m2c::kloc_36958: 	goto loc_36958;
        case m2c::kloc_3695b: 	goto loc_3695b;
        case m2c::kloc_3696b: 	goto loc_3696b;
        case m2c::kloc_36971: 	goto loc_36971;
        case m2c::kloc_36998: 	goto loc_36998;
        case m2c::kloc_369a3: 	goto loc_369a3;
        case m2c::kloc_36a22: 	goto loc_36a22;
        case m2c::kloc_36a33: 	goto loc_36a33;
        case m2c::kloc_36a43: 	goto loc_36a43;
        case m2c::kloc_36a53: 	goto loc_36a53;
        case m2c::kloc_36a62: 	goto loc_36a62;
        case m2c::kloc_36a73: 	goto loc_36a73;
        case m2c::kloc_36a88: 	goto loc_36a88;
        case m2c::kloc_36aeb: 	goto loc_36aeb;
        case m2c::klocret_35c43: 	goto locret_35c43;
        case m2c::klocret_3609d: 	goto locret_3609d;
        case m2c::ksub_35bae: 	goto sub_35bae;
        case m2c::ksub_35bc3: 	goto sub_35bc3;
        case m2c::ksub_35c17: 	goto sub_35c17;
        case m2c::ksub_35c44: 	goto sub_35c44;
        case m2c::ksub_35cf4: 	goto sub_35cf4;
        case m2c::ksub_35f66: 	goto sub_35f66;
        case m2c::ksub_35fac: 	goto sub_35fac;
        case m2c::ksub_35ff2: 	goto sub_35ff2;
        case m2c::ksub_3605a: 	goto sub_3605a;
        case m2c::ksub_3609e: 	goto sub_3609e;
        case m2c::ksub_360ed: 	goto sub_360ed;
        case m2c::ksub_36619: 	goto sub_36619;
        case m2c::ksub_36723: 	goto sub_36723;
        case m2c::ksub_367e0: 	goto sub_367e0;
        case m2c::ksub_36891: 	goto sub_36891;
        case m2c::ksub_368b7: 	goto sub_368b7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, _source);m2c::stackDump(_state); abort();
    };
}

