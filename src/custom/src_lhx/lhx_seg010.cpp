/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group9(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group9:
    _begin:
sub_2ee6e:
	// 69428 
cs=0x2088;eip=0x00000e; 	T(MOV(ax, ds));	// 69430 mov     ax, ds ;~ 2088:000E
cs=0x2088;eip=0x000010; 	R(RETF(0));	// 69431 retf ;~ 2088:0010
sub_2ee71:
	// 69438 
cs=0x2088;eip=0x000011; 	R(CALLF(sub_36c43,0));	// 69440 call    sub_36C43 ;~ 2088:0011
cs=0x2088;eip=0x000016; 	T(CMP(ah, 0x66));	// 69441 cmp     ah, 66h ; 'f' ;~ 2088:0016
cs=0x2088;eip=0x000019; 	R(JC(loc_2ee8e));	// 69442 jb      short loc_2EE8E ;~ 2088:0019
cs=0x2088;eip=0x00001b; 	T(CMP(ah, 0x6F));	// 69443 cmp     ah, 6Fh ; 'o' ;~ 2088:001B
cs=0x2088;eip=0x00001e; 	R(JA(loc_2ee8e));	// 69444 ja      short loc_2EE8E ;~ 2088:001E
cs=0x2088;eip=0x000020; 	T(SUB(ah, 0x66));	// 69445 sub     ah, 66h ; 'f' ;~ 2088:0020
cs=0x2088;eip=0x000023; 	T(bx = offset(dseg,aghikmopqrs));	// 69446 lea     bx, aGhikmopqrs ; "GHIKMOPQRS" ;~ 2088:0023
cs=0x2088;eip=0x000027; 	T(ADD(bl, ah));	// 69447 add     bl, ah ;~ 2088:0027
cs=0x2088;eip=0x000029; 	T(ADC(bh, 0));	// 69448 adc     bh, 0 ;~ 2088:0029
cs=0x2088;eip=0x00002c; 	T(MOV(ah, *(raddr(ds,bx))));	// 69449 mov     ah, [bx] ;~ 2088:002C
loc_2ee8e:
	// 8870 
cs=0x2088;eip=0x00002e; 	T(CMP(ah, 0x53));	// 69453 cmp     ah, 53h ; 'S' ;~ 2088:002E
cs=0x2088;eip=0x000031; 	R(JNZ(loc_2eea9));	// 69454 jnz     short loc_2EEA9 ;~ 2088:0031
cs=0x2088;eip=0x000033; 	T(CMP(unk_4a2b8, 0));	// 69455 cmp     byte ptr unk_4A2B8, 0 ;~ 2088:0033
cs=0x2088;eip=0x000038; 	R(JZ(loc_2eea9));	// 69456 jz      short loc_2EEA9 ;~ 2088:0038
cs=0x2088;eip=0x00003a; 	T(CMP(unk_4a2b7, 0));	// 69457 cmp     byte ptr unk_4A2B7, 0 ;~ 2088:003A
cs=0x2088;eip=0x00003f; 	R(JZ(loc_2eea9));	// 69458 jz      short loc_2EEA9 ;~ 2088:003F
cs=0x2088;eip=0x000041; 	T(XOR(ax, ax));	// 69459 xor     ax, ax ;~ 2088:0041
cs=0x2088;eip=0x000043; 	X(PUSH(ax));	// 69460 push    ax ;~ 2088:0043
cs=0x2088;eip=0x000044; 	R(CALLF(sub_2f7e0,0));	// 69461 call    sub_2F7E0 ;~ 2088:0044
loc_2eea9:
	// 8871 
cs=0x2088;eip=0x000049; 	T(CMP(ah, 0x3B));	// 69466 cmp     ah, 3Bh ; ';' ;~ 2088:0049
cs=0x2088;eip=0x00004c; 	R(JC(loc_2eeca));	// 69467 jb      short loc_2EECA ;~ 2088:004C
cs=0x2088;eip=0x00004e; 	T(CMP(ah, 0x53));	// 69468 cmp     ah, 53h ; 'S' ;~ 2088:004E
cs=0x2088;eip=0x000051; 	R(JA(loc_2eeca));	// 69469 ja      short loc_2EECA ;~ 2088:0051
cs=0x2088;eip=0x000053; 	T(XOR(al, al));	// 69470 xor     al, al ;~ 2088:0053
cs=0x2088;eip=0x000055; 	T(CMP(unk_4a2b8, 0));	// 69471 cmp     byte ptr unk_4A2B8, 0 ;~ 2088:0055
cs=0x2088;eip=0x00005a; 	R(JZ(loc_2eebf));	// 69472 jz      short loc_2EEBF ;~ 2088:005A
cs=0x2088;eip=0x00005c; 	T(MOV(al, 1));	// 69473 mov     al, 1 ;~ 2088:005C
cs=0x2088;eip=0x00005e; 	R(RETF(0));	// 69474 retf ;~ 2088:005E
loc_2eebf:
	// 8872 
cs=0x2088;eip=0x00005f; 	T(CMP(unk_4a2b6, 0));	// 69478 cmp     byte ptr unk_4A2B6, 0 ;~ 2088:005F
cs=0x2088;eip=0x000064; 	R(JZ(locret_2eec9));	// 69479 jz      short locret_2EEC9 ;~ 2088:0064
cs=0x2088;eip=0x000066; 	T(MOV(al, 2));	// 69480 mov     al, 2 ;~ 2088:0066
cs=0x2088;eip=0x000068; 	R(RETF(0));	// 69481 retf ;~ 2088:0068
locret_2eec9:
	// 8873 
cs=0x2088;eip=0x000069; 	R(RETF(0));	// 69485 retf ;~ 2088:0069
loc_2eeca:
	// 8874 
cs=0x2088;eip=0x00006a; 	T(OR(ax, ax));	// 69490 or      ax, ax ;~ 2088:006A
cs=0x2088;eip=0x00006c; 	R(JZ(locret_2eee1));	// 69491 jz      short locret_2EEE1 ;~ 2088:006C
cs=0x2088;eip=0x00006e; 	T(XOR(ah, ah));	// 69492 xor     ah, ah ;~ 2088:006E
cs=0x2088;eip=0x000070; 	T(CMP(unk_4a2b8, 0));	// 69493 cmp     byte ptr unk_4A2B8, 0 ;~ 2088:0070
cs=0x2088;eip=0x000075; 	R(JZ(locret_2eee1));	// 69494 jz      short locret_2EEE1 ;~ 2088:0075
cs=0x2088;eip=0x000077; 	T(CMP(al, 0x61));	// 69495 cmp     al, 61h ; 'a' ;~ 2088:0077
cs=0x2088;eip=0x000079; 	R(JC(locret_2eee1));	// 69496 jb      short locret_2EEE1 ;~ 2088:0079
cs=0x2088;eip=0x00007b; 	T(CMP(al, 0x7A));	// 69497 cmp     al, 7Ah ; 'z' ;~ 2088:007B
cs=0x2088;eip=0x00007d; 	R(JA(locret_2eee1));	// 69498 ja      short locret_2EEE1 ;~ 2088:007D
cs=0x2088;eip=0x00007f; 	T(SUB(al, 0x60));	// 69499 sub     al, 60h ; '`' ;~ 2088:007F
locret_2eee1:
	// 8875 
cs=0x2088;eip=0x000081; 	R(RETF(0));	// 69503 retf ;~ 2088:0081
sub_2eee2:
	// 69510 
cs=0x2088;eip=0x000082; 	R(CALLF(nullsub_9,0));	// 69512 call    nullsub_9 ;~ 2088:0082
loc_2eee7:
	// 8876 
cs=0x2088;eip=0x000087; 	R(CALLF(sub_2ee71,0));	// 69515 call    sub_2EE71 ;~ 2088:0087
cs=0x2088;eip=0x00008c; 	X(INC(*(dw*)((&unk_56ff7))));	// 69516 inc     word ptr unk_56FF7 ;~ 2088:008C
cs=0x2088;eip=0x000090; 	T(OR(ax, ax));	// 69517 or      ax, ax ;~ 2088:0090
cs=0x2088;eip=0x000092; 	R(JZ(loc_2eee7));	// 69518 jz      short loc_2EEE7 ;~ 2088:0092
cs=0x2088;eip=0x000094; 	R(RETF(0));	// 69519 retf ;~ 2088:0094
sub_2eef5:
	// 69526 
cs=0x2088;eip=0x000095; 	T(XOR(ax, ax));	// 69527 xor     ax, ax ;~ 2088:0095
cs=0x2088;eip=0x000097; 	T(CMP(unk_4a2b7, 0));	// 69528 cmp     byte ptr unk_4A2B7, 0 ;~ 2088:0097
cs=0x2088;eip=0x00009c; 	R(JZ(locret_2ef01));	// 69529 jz      short locret_2EF01 ;~ 2088:009C
cs=0x2088;eip=0x00009e; 	T(MOV(ax, 8));	// 69530 mov     ax, 8 ;~ 2088:009E
locret_2ef01:
	// 8877 
cs=0x2088;eip=0x0000a1; 	R(RETF(0));	// 69533 retf ;~ 2088:00A1
sub_2ef02:
	// 69541 
#undef arg_0
#define arg_0 6
	// 69544 arg_0           = word ptr  6 ;~ 2088:00A2
#undef arg_2
#define arg_2 8
	// 69545 arg_2           = word ptr  8 ;~ 2088:00A2
#undef arg_4
#define arg_4 0x0A
	// 69546 arg_4           = word ptr  0Ah ;~ 2088:00A2
#undef arg_6
#define arg_6 0x0C
	// 69547 arg_6           = word ptr  0Ch ;~ 2088:00A2
cs=0x2088;eip=0x0000a2; 	X(PUSH(bp));	// 69549 push    bp ;~ 2088:00A2
cs=0x2088;eip=0x0000a3; 	T(MOV(bp, sp));	// 69550 mov     bp, sp ;~ 2088:00A3
cs=0x2088;eip=0x0000a5; 	X(PUSH(di));	// 69551 push    di ;~ 2088:00A5
cs=0x2088;eip=0x0000a6; 	X(PUSH(si));	// 69552 push    si ;~ 2088:00A6
cs=0x2088;eip=0x0000a7; 	T(XOR(si, si));	// 69553 xor     si, si ;~ 2088:00A7
cs=0x2088;eip=0x0000a9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 69554 mov     ax, [bp+arg_6] ;~ 2088:00A9
cs=0x2088;eip=0x0000ac; 	T(TEST(ax, ax));	// 69555 test    ax, ax ;~ 2088:00AC
cs=0x2088;eip=0x0000ae; 	R(JNS(loc_2ef1c));	// 69556 jns     short loc_2EF1C ;~ 2088:00AE
cs=0x2088;eip=0x0000b0; 	X(NOT(*(dw*)(raddr(ss,bp+arg_6))));	// 69557 not     [bp+arg_6] ;~ 2088:00B0
cs=0x2088;eip=0x0000b3; 	X(NEG(*(dw*)(raddr(ss,bp+arg_4))));	// 69558 neg     [bp+arg_4] ;~ 2088:00B3
cs=0x2088;eip=0x0000b6; 	X(SBB(*(dw*)(raddr(ss,bp+arg_6)), 0x0FFFF));	// 69559 sbb     [bp+arg_6], 0FFFFh ;~ 2088:00B6
cs=0x2088;eip=0x0000ba; 	T(NOT(si));	// 69560 not     si ;~ 2088:00BA
loc_2ef1c:
	// 8878 
cs=0x2088;eip=0x0000bc; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 69563 mov     ax, [bp+arg_2] ;~ 2088:00BC
cs=0x2088;eip=0x0000bf; 	T(TEST(ax, ax));	// 69564 test    ax, ax ;~ 2088:00BF
cs=0x2088;eip=0x0000c1; 	R(JNS(loc_2ef2f));	// 69565 jns     short loc_2EF2F ;~ 2088:00C1
cs=0x2088;eip=0x0000c3; 	X(NOT(*(dw*)(raddr(ss,bp+arg_2))));	// 69566 not     [bp+arg_2] ;~ 2088:00C3
cs=0x2088;eip=0x0000c6; 	X(NEG(*(dw*)(raddr(ss,bp+arg_0))));	// 69567 neg     [bp+arg_0] ;~ 2088:00C6
cs=0x2088;eip=0x0000c9; 	X(SBB(*(dw*)(raddr(ss,bp+arg_2)), 0x0FFFF));	// 69568 sbb     [bp+arg_2], 0FFFFh ;~ 2088:00C9
cs=0x2088;eip=0x0000cd; 	T(NOT(si));	// 69569 not     si ;~ 2088:00CD
loc_2ef2f:
	// 8879 
cs=0x2088;eip=0x0000cf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 69572 mov     ax, [bp+arg_4] ;~ 2088:00CF
cs=0x2088;eip=0x0000d2; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 69573 mul     [bp+arg_0] ;~ 2088:00D2
cs=0x2088;eip=0x0000d5; 	T(MOV(bx, dx));	// 69574 mov     bx, dx ;~ 2088:00D5
cs=0x2088;eip=0x0000d7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 69575 mov     ax, [bp+arg_6] ;~ 2088:00D7
cs=0x2088;eip=0x0000da; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_2))));	// 69576 mul     [bp+arg_2] ;~ 2088:00DA
cs=0x2088;eip=0x0000dd; 	T(MOV(cx, ax));	// 69577 mov     cx, ax ;~ 2088:00DD
cs=0x2088;eip=0x0000df; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 69578 mov     ax, [bp+arg_4] ;~ 2088:00DF
cs=0x2088;eip=0x0000e2; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_2))));	// 69579 mul     [bp+arg_2] ;~ 2088:00E2
cs=0x2088;eip=0x0000e5; 	T(ADD(bx, ax));	// 69580 add     bx, ax ;~ 2088:00E5
cs=0x2088;eip=0x0000e7; 	T(ADC(cx, dx));	// 69581 adc     cx, dx ;~ 2088:00E7
cs=0x2088;eip=0x0000e9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 69582 mov     ax, [bp+arg_6] ;~ 2088:00E9
cs=0x2088;eip=0x0000ec; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 69583 mul     [bp+arg_0] ;~ 2088:00EC
cs=0x2088;eip=0x0000ef; 	T(ADD(ax, bx));	// 69584 add     ax, bx ;~ 2088:00EF
cs=0x2088;eip=0x0000f1; 	T(ADC(dx, cx));	// 69585 adc     dx, cx ;~ 2088:00F1
cs=0x2088;eip=0x0000f3; 	T(TEST(si, si));	// 69586 test    si, si ;~ 2088:00F3
cs=0x2088;eip=0x0000f5; 	R(JNS(loc_2ef5e));	// 69587 jns     short loc_2EF5E ;~ 2088:00F5
cs=0x2088;eip=0x0000f7; 	T(NOT(dx));	// 69588 not     dx ;~ 2088:00F7
cs=0x2088;eip=0x0000f9; 	T(NEG(ax));	// 69589 neg     ax ;~ 2088:00F9
cs=0x2088;eip=0x0000fb; 	T(SBB(dx, 0x0FFFF));	// 69590 sbb     dx, 0FFFFh ;~ 2088:00FB
loc_2ef5e:
	// 8880 
cs=0x2088;eip=0x0000fe; 	X(POP(si));	// 69593 pop     si ;~ 2088:00FE
cs=0x2088;eip=0x0000ff; 	X(POP(di));	// 69594 pop     di ;~ 2088:00FF
cs=0x2088;eip=0x000100; 	X(POP(bp));	// 69595 pop     bp ;~ 2088:0100
cs=0x2088;eip=0x000101; 	R(RETF(8));	// 69596 retf    8 ;~ 2088:0101
sub_2ef64:
	// 69604 
#undef arg_0
#define arg_0 6
	// 69607 arg_0           = word ptr  6 ;~ 2088:0104
#undef arg_2
#define arg_2 8
	// 69608 arg_2           = word ptr  8 ;~ 2088:0104
#undef arg_4
#define arg_4 0x0A
	// 69609 arg_4           = word ptr  0Ah ;~ 2088:0104
#undef arg_6
#define arg_6 0x0C
	// 69610 arg_6           = word ptr  0Ch ;~ 2088:0104
cs=0x2088;eip=0x000104; 	X(PUSH(bp));	// 69612 push    bp ;~ 2088:0104
cs=0x2088;eip=0x000105; 	T(MOV(bp, sp));	// 69613 mov     bp, sp ;~ 2088:0105
cs=0x2088;eip=0x000107; 	T(XOR(cx, cx));	// 69614 xor     cx, cx ;~ 2088:0107
cs=0x2088;eip=0x000109; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), 0));	// 69615 cmp     [bp+arg_6], 0 ;~ 2088:0109
cs=0x2088;eip=0x00010d; 	R(JGE(loc_2ef84));	// 69616 jge     short loc_2EF84 ;~ 2088:010D
cs=0x2088;eip=0x00010f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 69617 mov     ax, [bp+arg_4] ;~ 2088:010F
cs=0x2088;eip=0x000112; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 69618 mov     dx, [bp+arg_6] ;~ 2088:0112
cs=0x2088;eip=0x000115; 	T(NEG(ax));	// 69619 neg     ax ;~ 2088:0115
cs=0x2088;eip=0x000117; 	T(ADC(dx, 0));	// 69620 adc     dx, 0 ;~ 2088:0117
cs=0x2088;eip=0x00011a; 	T(NEG(dx));	// 69621 neg     dx ;~ 2088:011A
cs=0x2088;eip=0x00011c; 	X(MOV(*(dw*)(raddr(ss,bp+arg_4)), ax));	// 69622 mov     [bp+arg_4], ax ;~ 2088:011C
cs=0x2088;eip=0x00011f; 	X(MOV(*(dw*)(raddr(ss,bp+arg_6)), dx));	// 69623 mov     [bp+arg_6], dx ;~ 2088:011F
cs=0x2088;eip=0x000122; 	T(NOT(cx));	// 69624 not     cx ;~ 2088:0122
loc_2ef84:
	// 8881 
cs=0x2088;eip=0x000124; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 69627 cmp     [bp+arg_2], 0 ;~ 2088:0124
cs=0x2088;eip=0x000128; 	R(JGE(loc_2ef9f));	// 69628 jge     short loc_2EF9F ;~ 2088:0128
cs=0x2088;eip=0x00012a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 69629 mov     ax, [bp+arg_0] ;~ 2088:012A
cs=0x2088;eip=0x00012d; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 69630 mov     dx, [bp+arg_2] ;~ 2088:012D
cs=0x2088;eip=0x000130; 	T(NEG(ax));	// 69631 neg     ax ;~ 2088:0130
cs=0x2088;eip=0x000132; 	T(ADC(dx, 0));	// 69632 adc     dx, 0 ;~ 2088:0132
cs=0x2088;eip=0x000135; 	T(NEG(dx));	// 69633 neg     dx ;~ 2088:0135
cs=0x2088;eip=0x000137; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 69634 mov     [bp+arg_0], ax ;~ 2088:0137
cs=0x2088;eip=0x00013a; 	X(MOV(*(dw*)(raddr(ss,bp+arg_2)), dx));	// 69635 mov     [bp+arg_2], dx ;~ 2088:013A
cs=0x2088;eip=0x00013d; 	T(NOT(cx));	// 69636 not     cx ;~ 2088:013D
loc_2ef9f:
	// 8882 
cs=0x2088;eip=0x00013f; 	T(MOV(bx, cx));	// 69639 mov     bx, cx ;~ 2088:013F
loc_2efa1:
	// 8883 
cs=0x2088;eip=0x000141; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_2))));	// 69642 mov     cx, [bp+arg_2] ;~ 2088:0141
cs=0x2088;eip=0x000144; 	R(JCXZ(loc_2efb4));	// 69643 jcxz    short loc_2EFB4 ;~ 2088:0144
cs=0x2088;eip=0x000146; 	X(SAR(*(dw*)(raddr(ss,bp+arg_6)), 1));	// 69644 sar     [bp+arg_6], 1 ;~ 2088:0146
cs=0x2088;eip=0x000149; 	X(RCR(*(dw*)(raddr(ss,bp+arg_4)), 1));	// 69645 rcr     [bp+arg_4], 1 ;~ 2088:0149
cs=0x2088;eip=0x00014c; 	X(SAR(*(dw*)(raddr(ss,bp+arg_2)), 1));	// 69646 sar     [bp+arg_2], 1 ;~ 2088:014C
cs=0x2088;eip=0x00014f; 	X(RCR(*(dw*)(raddr(ss,bp+arg_0)), 1));	// 69647 rcr     [bp+arg_0], 1 ;~ 2088:014F
cs=0x2088;eip=0x000152; 	R(JMP(loc_2efa1));	// 69648 jmp     short loc_2EFA1 ;~ 2088:0152
loc_2efb4:
	// 8884 
cs=0x2088;eip=0x000154; 	T(MOV(cx, bx));	// 69652 mov     cx, bx ;~ 2088:0154
cs=0x2088;eip=0x000156; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 69653 mov     ax, [bp+arg_4] ;~ 2088:0156
cs=0x2088;eip=0x000159; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 69654 mov     dx, [bp+arg_6] ;~ 2088:0159
cs=0x2088;eip=0x00015c; 	T(CMP(dx, *(dw*)(raddr(ss,bp+arg_0))));	// 69655 cmp     dx, [bp+arg_0] ;~ 2088:015C
cs=0x2088;eip=0x00015f; 	R(JC(loc_2efc9));	// 69656 jb      short loc_2EFC9 ;~ 2088:015F
cs=0x2088;eip=0x000161; 	T(MOV(ax, 0x7FFF));	// 69657 mov     ax, 7FFFh ;~ 2088:0161
cs=0x2088;eip=0x000164; 	T(XOR(dx, dx));	// 69658 xor     dx, dx ;~ 2088:0164
cs=0x2088;eip=0x000166; 	R(JMP(loc_2efce));	// 69659 jmp     short loc_2EFCE ;~ 2088:0166
loc_2efc9:
	// 8885 
cs=0x2088;eip=0x000169; 	X(DIV2(*(dw*)(raddr(ss,bp+arg_0))));	// 69665 div     [bp+arg_0] ;~ 2088:0169
cs=0x2088;eip=0x00016c; 	T(MOV(bx, ax));	// 69666 mov     bx, ax ;~ 2088:016C
loc_2efce:
	// 8886 
cs=0x2088;eip=0x00016e; 	T(XOR(ax, ax));	// 69669 xor     ax, ax ;~ 2088:016E
cs=0x2088;eip=0x000170; 	X(DIV2(*(dw*)(raddr(ss,bp+arg_0))));	// 69670 div     [bp+arg_0] ;~ 2088:0170
cs=0x2088;eip=0x000173; 	T(MOV(dx, bx));	// 69671 mov     dx, bx ;~ 2088:0173
cs=0x2088;eip=0x000175; 	R(JCXZ(loc_2efde));	// 69672 jcxz    short loc_2EFDE ;~ 2088:0175
cs=0x2088;eip=0x000177; 	T(NEG(ax));	// 69673 neg     ax ;~ 2088:0177
cs=0x2088;eip=0x000179; 	T(ADC(dx, 0));	// 69674 adc     dx, 0 ;~ 2088:0179
cs=0x2088;eip=0x00017c; 	T(NEG(dx));	// 69675 neg     dx ;~ 2088:017C
loc_2efde:
	// 8887 
cs=0x2088;eip=0x00017e; 	X(POP(bp));	// 69678 pop     bp ;~ 2088:017E
cs=0x2088;eip=0x00017f; 	R(RETF(8));	// 69679 retf    8 ;~ 2088:017F
sub_2efe2:
	// 69687 
#undef arg_0
#define arg_0 6
	// 69690 arg_0           = word ptr  6 ;~ 2088:0182
#undef arg_2
#define arg_2 8
	// 69691 arg_2           = word ptr  8 ;~ 2088:0182
#undef arg_4
#define arg_4 0x0A
	// 69692 arg_4           = word ptr  0Ah ;~ 2088:0182
cs=0x2088;eip=0x000182; 	X(PUSH(bp));	// 69694 push    bp ;~ 2088:0182
cs=0x2088;eip=0x000183; 	T(MOV(bp, sp));	// 69695 mov     bp, sp ;~ 2088:0183
cs=0x2088;eip=0x000185; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 69696 mov     ax, [bp+arg_2] ;~ 2088:0185
cs=0x2088;eip=0x000188; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_4))));	// 69697 mov     dx, [bp+arg_4] ;~ 2088:0188
cs=0x2088;eip=0x00018b; 	X(IDIV2(*(dw*)(raddr(ss,bp+arg_0))));	// 69698 idiv    [bp+arg_0] ;~ 2088:018B
cs=0x2088;eip=0x00018e; 	X(POP(bp));	// 69699 pop     bp ;~ 2088:018E
cs=0x2088;eip=0x00018f; 	R(RETF(6));	// 69700 retf    6 ;~ 2088:018F
sub_2eff2:
	// 69708 
#undef arg_0
#define arg_0 6
	// 69711 arg_0           = word ptr  6 ;~ 2088:0192
#undef arg_2
#define arg_2 8
	// 69712 arg_2           = word ptr  8 ;~ 2088:0192
#undef arg_4
#define arg_4 0x0A
	// 69713 arg_4           = word ptr  0Ah ;~ 2088:0192
cs=0x2088;eip=0x000192; 	X(PUSH(bp));	// 69715 push    bp ;~ 2088:0192
cs=0x2088;eip=0x000193; 	T(MOV(bp, sp));	// 69716 mov     bp, sp ;~ 2088:0193
cs=0x2088;eip=0x000195; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 69717 mov     ax, [bp+arg_2] ;~ 2088:0195
cs=0x2088;eip=0x000198; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_4))));	// 69718 mov     dx, [bp+arg_4] ;~ 2088:0198
cs=0x2088;eip=0x00019b; 	X(DIV2(*(dw*)(raddr(ss,bp+arg_0))));	// 69719 div     [bp+arg_0] ;~ 2088:019B
cs=0x2088;eip=0x00019e; 	X(POP(bp));	// 69720 pop     bp ;~ 2088:019E
cs=0x2088;eip=0x00019f; 	R(RETF(6));	// 69721 retf    6 ;~ 2088:019F
sub_2f002:
	// 69729 
#undef arg_0
#define arg_0 6
	// 69732 arg_0           = word ptr  6 ;~ 2088:01A2
#undef arg_2
#define arg_2 8
	// 69733 arg_2           = word ptr  8 ;~ 2088:01A2
cs=0x2088;eip=0x0001a2; 	X(PUSH(bp));	// 69735 push    bp ;~ 2088:01A2
cs=0x2088;eip=0x0001a3; 	T(MOV(bp, sp));	// 69736 mov     bp, sp ;~ 2088:01A3
cs=0x2088;eip=0x0001a5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 69737 mov     ax, [bp+arg_2] ;~ 2088:01A5
cs=0x2088;eip=0x0001a8; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 69738 imul    [bp+arg_0] ;~ 2088:01A8
cs=0x2088;eip=0x0001ab; 	X(POP(bp));	// 69739 pop     bp ;~ 2088:01AB
cs=0x2088;eip=0x0001ac; 	R(RETF(4));	// 69740 retf    4 ;~ 2088:01AC
sub_2f00f:
	// 69748 
#undef arg_0
#define arg_0 6
	// 69751 arg_0           = word ptr  6 ;~ 2088:01AF
#undef arg_2
#define arg_2 8
	// 69752 arg_2           = word ptr  8 ;~ 2088:01AF
cs=0x2088;eip=0x0001af; 	X(PUSH(bp));	// 69754 push    bp ;~ 2088:01AF
cs=0x2088;eip=0x0001b0; 	T(MOV(bp, sp));	// 69755 mov     bp, sp ;~ 2088:01B0
cs=0x2088;eip=0x0001b2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 69756 mov     ax, [bp+arg_2] ;~ 2088:01B2
cs=0x2088;eip=0x0001b5; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 69757 mul     [bp+arg_0] ;~ 2088:01B5
cs=0x2088;eip=0x0001b8; 	X(POP(bp));	// 69758 pop     bp ;~ 2088:01B8
cs=0x2088;eip=0x0001b9; 	R(RETF(4));	// 69759 retf    4 ;~ 2088:01B9
sub_2f01c:
	// 69767 
#undef arg_0
#define arg_0 6
	// 69770 arg_0           = word ptr  6 ;~ 2088:01BC
#undef arg_2
#define arg_2 8
	// 69771 arg_2           = word ptr  8 ;~ 2088:01BC
#undef arg_4
#define arg_4 0x0A
	// 69772 arg_4           = word ptr  0Ah ;~ 2088:01BC
cs=0x2088;eip=0x0001bc; 	X(PUSH(bp));	// 69774 push    bp ;~ 2088:01BC
cs=0x2088;eip=0x0001bd; 	T(MOV(bp, sp));	// 69775 mov     bp, sp ;~ 2088:01BD
cs=0x2088;eip=0x0001bf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 69776 mov     ax, [bp+arg_4] ;~ 2088:01BF
cs=0x2088;eip=0x0001c2; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_2))));	// 69777 imul    [bp+arg_2] ;~ 2088:01C2
cs=0x2088;eip=0x0001c5; 	X(IDIV2(*(dw*)(raddr(ss,bp+arg_0))));	// 69778 idiv    [bp+arg_0] ;~ 2088:01C5
cs=0x2088;eip=0x0001c8; 	X(POP(bp));	// 69779 pop     bp ;~ 2088:01C8
cs=0x2088;eip=0x0001c9; 	R(RETF(6));	// 69780 retf    6 ;~ 2088:01C9
sub_2f02c:
	// 69788 
#undef arg_0
#define arg_0 6
	// 69790 arg_0           = word ptr  6 ;~ 2088:01CC
#undef arg_2
#define arg_2 8
	// 69791 arg_2           = word ptr  8 ;~ 2088:01CC
#undef arg_4
#define arg_4 0x0A
	// 69792 arg_4           = word ptr  0Ah ;~ 2088:01CC
cs=0x2088;eip=0x0001cc; 	X(PUSH(bp));	// 69794 push    bp ;~ 2088:01CC
cs=0x2088;eip=0x0001cd; 	T(MOV(bp, sp));	// 69795 mov     bp, sp ;~ 2088:01CD
cs=0x2088;eip=0x0001cf; 	X(PUSH(es));	// 69796 push    es ;~ 2088:01CF
cs=0x2088;eip=0x0001d0; 	X(PUSH(si));	// 69797 push    si ;~ 2088:01D0
cs=0x2088;eip=0x0001d1; 	X(PUSH(di));	// 69798 push    di ;~ 2088:01D1
cs=0x2088;eip=0x0001d2; 	T(MOV(ax, ds));	// 69799 mov     ax, ds ;~ 2088:01D2
cs=0x2088;eip=0x0001d4; 	T(MOV(es, ax));	// 69800 mov     es, ax ;~ 2088:01D4
cs=0x2088;eip=0x0001d6; 	T(CLD);	// 69802 cld ;~ 2088:01D6
cs=0x2088;eip=0x0001d7; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 69803 mov     si, [bp+arg_0] ;~ 2088:01D7
cs=0x2088;eip=0x0001da; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_2))));	// 69804 mov     di, [bp+arg_2] ;~ 2088:01DA
cs=0x2088;eip=0x0001dd; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_4))));	// 69805 mov     cx, [bp+arg_4] ;~ 2088:01DD
cs=0x2088;eip=0x0001e0; 	T(XOR(bh, bh));	// 69806 xor     bh, bh ;~ 2088:01E0
loc_2f042:
	// 8888 
cs=0x2088;eip=0x0001e2; 	T(LODSB);	// 69809 lodsb ;~ 2088:01E2
cs=0x2088;eip=0x0001e3; 	T(MOV(bl, al));	// 69810 mov     bl, al ;~ 2088:01E3
cs=0x2088;eip=0x0001e5; 	T(AND(bl, 0x0F));	// 69811 and     bl, 0Fh ;~ 2088:01E5
cs=0x2088;eip=0x0001e8; 	T(MOV(ah, *(raddr(ds,bx+0x18C))));	// 69812 mov     ah, [bx+18Ch] ;~ 2088:01E8
cs=0x2088;eip=0x0001ec; 	T(MOV(bl, al));	// 69813 mov     bl, al ;~ 2088:01EC
cs=0x2088;eip=0x0001ee; 	T(SHR(bl, 1));	// 69814 shr     bl, 1 ;~ 2088:01EE
cs=0x2088;eip=0x0001f0; 	T(SHR(bl, 1));	// 69815 shr     bl, 1 ;~ 2088:01F0
cs=0x2088;eip=0x0001f2; 	T(SHR(bl, 1));	// 69816 shr     bl, 1 ;~ 2088:01F2
cs=0x2088;eip=0x0001f4; 	T(SHR(bl, 1));	// 69817 shr     bl, 1 ;~ 2088:01F4
cs=0x2088;eip=0x0001f6; 	T(MOV(al, *(raddr(ds,bx+0x18C))));	// 69818 mov     al, [bx+18Ch] ;~ 2088:01F6
cs=0x2088;eip=0x0001fa; 	X(STOSW);	// 69819 stosw ;~ 2088:01FA
cs=0x2088;eip=0x0001fb; 	R(LOOP(loc_2f042));	// 69820 loop    loc_2F042 ;~ 2088:01FB
cs=0x2088;eip=0x0001fd; 	X(POP(di));	// 69821 pop     di ;~ 2088:01FD
cs=0x2088;eip=0x0001fe; 	X(POP(si));	// 69822 pop     si ;~ 2088:01FE
cs=0x2088;eip=0x0001ff; 	X(POP(es));	// 69823 pop     es ;~ 2088:01FF
cs=0x2088;eip=0x000200; 	X(POP(bp));	// 69825 pop     bp ;~ 2088:0200
cs=0x2088;eip=0x000201; 	R(RETF(0));	// 69826 retf ;~ 2088:0201
sub_2f062:
	// 69833 
cs=0x2088;eip=0x000202; 	T(MOV(ah, 0x52));	// 69834 mov     ah, 52h ;~ 2088:0202
cs=0x2088;eip=0x000204; 	R(_INT(0x21));	// 69835 int     21h             ; DOS - 2+ internal - GET LIST OF LISTS ;~ 2088:0204
cs=0x2088;eip=0x000206; 	T(MOV(ax, *(dw*)(raddr(es,bx-2))));	// 69837 mov     ax, es:[bx-2] ;~ 2088:0206
cs=0x2088;eip=0x00020a; 	R(RETF(0));	// 69838 retf ;~ 2088:020A
sub_2f06b:
	// 69846 
#undef arg_0
#define arg_0 6
	// 69848 arg_0           = word ptr  6 ;~ 2088:020B
#undef arg_2
#define arg_2 8
	// 69849 arg_2           = word ptr  8 ;~ 2088:020B
cs=0x2088;eip=0x00020b; 	X(PUSH(bp));	// 69851 push    bp ;~ 2088:020B
cs=0x2088;eip=0x00020c; 	T(MOV(bp, sp));	// 69852 mov     bp, sp ;~ 2088:020C
cs=0x2088;eip=0x00020e; 	X(PUSH(si));	// 69853 push    si ;~ 2088:020E
cs=0x2088;eip=0x00020f; 	T(CLI);	// 69854 cli ;~ 2088:020F
cs=0x2088;eip=0x000210; 	T(MOV(dx, 0x3DA));	// 69855 mov     dx, 3DAh ;~ 2088:0210
loc_2f073:
	// 8889 
cs=0x2088;eip=0x000213; 	R(IN(al, dx));	// 69858 in      al, dx          ; Video status bits: ;~ 2088:0213
cs=0x2088;eip=0x000214; 	T(AND(al, 8));	// 69863 and     al, 8 ;~ 2088:0214
cs=0x2088;eip=0x000216; 	R(JZ(loc_2f073));	// 69864 jz      short loc_2F073 ;~ 2088:0216
cs=0x2088;eip=0x000218; 	T(MOV(dx, 0x3C8));	// 69865 mov     dx, 3C8h ;~ 2088:0218
cs=0x2088;eip=0x00021b; 	T(XOR(al, al));	// 69866 xor     al, al ;~ 2088:021B
cs=0x2088;eip=0x00021d; 	R(OUT(dx, al));	// 69867 out     dx, al ;~ 2088:021D
cs=0x2088;eip=0x00021e; 	R(
);	// 69868 jmp     short $+2 ;~ 2088:021E
loc_2f080:
	// 8890 
cs=0x2088;eip=0x000220; 	T(MOV(dx, 0x3C9));	// 69872 mov     dx, 3C9h ;~ 2088:0220
cs=0x2088;eip=0x000223; 	T(MOV(cx, 0x100));	// 69873 mov     cx, 100h ;~ 2088:0223
cs=0x2088;eip=0x000226; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 69874 mov     si, [bp+arg_0] ;~ 2088:0226
cs=0x2088;eip=0x000229; 	X(PUSH(ds));	// 69875 push    ds ;~ 2088:0229
cs=0x2088;eip=0x00022a; 	T(MOV(ds, *(dw*)(raddr(ss,bp+arg_2))));	// 69876 mov     ds, [bp+arg_2] ;~ 2088:022A
loc_2f08d:
	// 8891 
cs=0x2088;eip=0x00022d; 	T(LODSB);	// 69879 lodsb ;~ 2088:022D
cs=0x2088;eip=0x00022e; 	T(SHR(al, 1));	// 69880 shr     al, 1 ;~ 2088:022E
cs=0x2088;eip=0x000230; 	T(SHR(al, 1));	// 69881 shr     al, 1 ;~ 2088:0230
cs=0x2088;eip=0x000232; 	R(OUT(dx, al));	// 69882 out     dx, al ;~ 2088:0232
cs=0x2088;eip=0x000233; 	R(
);	// 69883 jmp     short $+2 ;~ 2088:0233
loc_2f095:
	// 8892 
cs=0x2088;eip=0x000235; 	T(LODSB);	// 69887 lodsb ;~ 2088:0235
cs=0x2088;eip=0x000236; 	T(SHR(al, 1));	// 69888 shr     al, 1 ;~ 2088:0236
cs=0x2088;eip=0x000238; 	T(SHR(al, 1));	// 69889 shr     al, 1 ;~ 2088:0238
cs=0x2088;eip=0x00023a; 	R(OUT(dx, al));	// 69890 out     dx, al ;~ 2088:023A
cs=0x2088;eip=0x00023b; 	R(
);	// 69891 jmp     short $+2 ;~ 2088:023B
loc_2f09d:
	// 8893 
cs=0x2088;eip=0x00023d; 	T(LODSB);	// 69895 lodsb ;~ 2088:023D
cs=0x2088;eip=0x00023e; 	T(SHR(al, 1));	// 69896 shr     al, 1 ;~ 2088:023E
cs=0x2088;eip=0x000240; 	T(SHR(al, 1));	// 69897 shr     al, 1 ;~ 2088:0240
cs=0x2088;eip=0x000242; 	R(OUT(dx, al));	// 69898 out     dx, al ;~ 2088:0242
cs=0x2088;eip=0x000243; 	R(
);	// 69899 jmp     short $+2 ;~ 2088:0243
loc_2f0a5:
	// 8894 
cs=0x2088;eip=0x000245; 	R(LOOP(loc_2f08d));	// 69903 loop    loc_2F08D ;~ 2088:0245
cs=0x2088;eip=0x000247; 	X(POP(ds));	// 69904 pop     ds ;~ 2088:0247
cs=0x2088;eip=0x000248; 	T(STI);	// 69905 sti ;~ 2088:0248
cs=0x2088;eip=0x000249; 	X(POP(si));	// 69906 pop     si ;~ 2088:0249
cs=0x2088;eip=0x00024a; 	X(POP(bp));	// 69907 pop     bp ;~ 2088:024A
cs=0x2088;eip=0x00024b; 	R(RETF(0));	// 69908 retf ;~ 2088:024B
sub_2f0ac:
	// 69916 
#undef arg_0
#define arg_0 6
	// 69918 arg_0           = word ptr  6 ;~ 2088:024C
#undef arg_2
#define arg_2 8
	// 69919 arg_2           = word ptr  8 ;~ 2088:024C
cs=0x2088;eip=0x00024c; 	X(PUSH(bp));	// 69921 push    bp ;~ 2088:024C
cs=0x2088;eip=0x00024d; 	T(MOV(bp, sp));	// 69922 mov     bp, sp ;~ 2088:024D
cs=0x2088;eip=0x00024f; 	X(PUSH(di));	// 69923 push    di ;~ 2088:024F
cs=0x2088;eip=0x000250; 	X(PUSHF);	// 69924 pushf ;~ 2088:0250
cs=0x2088;eip=0x000251; 	T(MOV(dx, 0x40));	// 69925 mov     dx, 40h ; '@' ;~ 2088:0251
cs=0x2088;eip=0x000254; 	T(MOV(es, dx));	// 69926 mov     es, dx ;~ 2088:0254
cs=0x2088;eip=0x000256; 	T(MOV(bh, *(raddr(es,0x6C))));	// 69928 mov     bh, es:6Ch ;~ 2088:0256
loc_2f0bb:
	// 8895 
cs=0x2088;eip=0x00025b; 	T(CMP(bh, *(raddr(es,0x6C))));	// 69931 cmp     bh, es:6Ch ;~ 2088:025B
cs=0x2088;eip=0x000260; 	R(JZ(loc_2f0bb));	// 69932 jz      short loc_2F0BB ;~ 2088:0260
cs=0x2088;eip=0x000262; 	T(ADD(bh, 6));	// 69933 add     bh, 6 ;~ 2088:0262
cs=0x2088;eip=0x000265; 	T(XOR(ax, ax));	// 69934 xor     ax, ax ;~ 2088:0265
cs=0x2088;eip=0x000267; 	T(XOR(dx, dx));	// 69935 xor     dx, dx ;~ 2088:0267
loc_2f0c9:
	// 8896 
cs=0x2088;eip=0x000269; 	T(ADD(ax, 1));	// 69938 add     ax, 1 ;~ 2088:0269
cs=0x2088;eip=0x00026c; 	R(JNC(loc_2f0cf));	// 69939 jnb     short loc_2F0CF ;~ 2088:026C
cs=0x2088;eip=0x00026e; 	T(INC(dx));	// 69940 inc     dx ;~ 2088:026E
loc_2f0cf:
	// 8897 
cs=0x2088;eip=0x00026f; 	T(CMP(bh, *(raddr(es,0x6C))));	// 69943 cmp     bh, es:6Ch ;~ 2088:026F
cs=0x2088;eip=0x000274; 	R(JNZ(loc_2f0c9));	// 69944 jnz     short loc_2F0C9 ;~ 2088:0274
cs=0x2088;eip=0x000276; 	T(MOV(cx, 0x1977));	// 69945 mov     cx, 1977h ;~ 2088:0276
cs=0x2088;eip=0x000279; 	T(IDIV2(cx));	// 69946 idiv    cx ;~ 2088:0279
cs=0x2088;eip=0x00027b; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 69947 mov     di, [bp+arg_0] ;~ 2088:027B
cs=0x2088;eip=0x00027e; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 69948 mov     [di], ax ;~ 2088:027E
cs=0x2088;eip=0x000280; 	T(MOV(ax, dx));	// 69949 mov     ax, dx ;~ 2088:0280
cs=0x2088;eip=0x000282; 	T(SHL(ax, 1));	// 69950 shl     ax, 1 ;~ 2088:0282
cs=0x2088;eip=0x000284; 	T(XOR(dx, dx));	// 69951 xor     dx, dx ;~ 2088:0284
cs=0x2088;eip=0x000286; 	T(IDIV2(cx));	// 69952 idiv    cx ;~ 2088:0286
cs=0x2088;eip=0x000288; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_2))));	// 69953 mov     di, [bp+arg_2] ;~ 2088:0288
cs=0x2088;eip=0x00028b; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 69954 mov     [di], ax ;~ 2088:028B
cs=0x2088;eip=0x00028d; 	T(XOR(ax, ax));	// 69955 xor     ax, ax ;~ 2088:028D
cs=0x2088;eip=0x00028f; 	X(PUSH(ax));	// 69956 push    ax ;~ 2088:028F
cs=0x2088;eip=0x000290; 	X(POPF);	// 69957 popf ;~ 2088:0290
cs=0x2088;eip=0x000291; 	X(PUSHF);	// 69958 pushf ;~ 2088:0291
cs=0x2088;eip=0x000292; 	X(POP(ax));	// 69959 pop     ax ;~ 2088:0292
cs=0x2088;eip=0x000293; 	T(AND(ax, 0x0F000));	// 69960 and     ax, 0F000h ;~ 2088:0293
cs=0x2088;eip=0x000296; 	T(CMP(ax, 0x0F000));	// 69961 cmp     ax, 0F000h ;~ 2088:0296
cs=0x2088;eip=0x000299; 	R(JNZ(loc_2f114));	// 69962 jnz     short loc_2F114 ;~ 2088:0299
cs=0x2088;eip=0x00029b; 	X(PUSH(cx));	// 69963 push    cx ;~ 2088:029B
cs=0x2088;eip=0x00029c; 	T(MOV(ax, 0x0FFFF));	// 69964 mov     ax, 0FFFFh ;~ 2088:029C
cs=0x2088;eip=0x00029f; 	T(MOV(cl, 0x21));	// 69965 mov     cl, 21h ; '!' ;~ 2088:029F
cs=0x2088;eip=0x0002a1; 	T(SHL(ax, cl));	// 69966 shl     ax, cl ;~ 2088:02A1
cs=0x2088;eip=0x0002a3; 	X(POP(cx));	// 69967 pop     cx ;~ 2088:02A3
cs=0x2088;eip=0x0002a4; 	R(JNZ(loc_2f10d));	// 69968 jnz     short loc_2F10D ;~ 2088:02A4
cs=0x2088;eip=0x0002a6; 	T(MOV(ax, 0x56));	// 69969 mov     ax, 56h ; 'V' ;~ 2088:02A6
cs=0x2088;eip=0x0002a9; 	X(POPF);	// 69970 popf ;~ 2088:02A9
cs=0x2088;eip=0x0002aa; 	X(POP(di));	// 69971 pop     di ;~ 2088:02AA
cs=0x2088;eip=0x0002ab; 	X(POP(bp));	// 69972 pop     bp ;~ 2088:02AB
cs=0x2088;eip=0x0002ac; 	R(RETF(0));	// 69973 retf ;~ 2088:02AC
loc_2f10d:
	// 8898 
cs=0x2088;eip=0x0002ad; 	T(MOV(ax, 0x0BA));	// 69977 mov     ax, 0BAh ; 'º' ;~ 2088:02AD
cs=0x2088;eip=0x0002b0; 	X(POPF);	// 69978 popf ;~ 2088:02B0
cs=0x2088;eip=0x0002b1; 	X(POP(di));	// 69979 pop     di ;~ 2088:02B1
cs=0x2088;eip=0x0002b2; 	X(POP(bp));	// 69980 pop     bp ;~ 2088:02B2
cs=0x2088;eip=0x0002b3; 	R(RETF(0));	// 69981 retf ;~ 2088:02B3
loc_2f114:
	// 8899 
cs=0x2088;eip=0x0002b4; 	T(MOV(ax, 0x7000));	// 69985 mov     ax, 7000h ;~ 2088:02B4
cs=0x2088;eip=0x0002b7; 	X(PUSH(ax));	// 69986 push    ax ;~ 2088:02B7
cs=0x2088;eip=0x0002b8; 	X(POPF);	// 69987 popf ;~ 2088:02B8
cs=0x2088;eip=0x0002b9; 	X(PUSHF);	// 69988 pushf ;~ 2088:02B9
cs=0x2088;eip=0x0002ba; 	X(POP(ax));	// 69989 pop     ax ;~ 2088:02BA
cs=0x2088;eip=0x0002bb; 	T(AND(ax, 0x7000));	// 69990 and     ax, 7000h ;~ 2088:02BB
cs=0x2088;eip=0x0002be; 	R(JNZ(loc_2f127));	// 69991 jnz     short loc_2F127 ;~ 2088:02BE
cs=0x2088;eip=0x0002c0; 	T(MOV(ax, 0x11E));	// 69992 mov     ax, 11Eh ;~ 2088:02C0
cs=0x2088;eip=0x0002c3; 	X(POPF);	// 69993 popf ;~ 2088:02C3
cs=0x2088;eip=0x0002c4; 	X(POP(di));	// 69994 pop     di ;~ 2088:02C4
cs=0x2088;eip=0x0002c5; 	X(POP(bp));	// 69995 pop     bp ;~ 2088:02C5
cs=0x2088;eip=0x0002c6; 	R(RETF(0));	// 69996 retf ;~ 2088:02C6
loc_2f127:
	// 8900 
cs=0x2088;eip=0x0002c7; 	T(MOV(ax, 0x182));	// 70000 mov     ax, 182h ;~ 2088:02C7
cs=0x2088;eip=0x0002ca; 	X(POPF);	// 70001 popf ;~ 2088:02CA
cs=0x2088;eip=0x0002cb; 	X(POP(di));	// 70002 pop     di ;~ 2088:02CB
cs=0x2088;eip=0x0002cc; 	X(POP(bp));	// 70003 pop     bp ;~ 2088:02CC
cs=0x2088;eip=0x0002cd; 	R(RETF(0));	// 70004 retf ;~ 2088:02CD
sub_2f12e:
	// 70012 
#undef arg_0
#define arg_0 6
	// 70015 arg_0           = byte ptr  6 ;~ 2088:02CE
#undef arg_2
#define arg_2 8
	// 70016 arg_2           = word ptr  8 ;~ 2088:02CE
#undef arg_4
#define arg_4 0x0A
	// 70017 arg_4           = word ptr  0Ah ;~ 2088:02CE
#undef arg_6
#define arg_6 0x0C
	// 70018 arg_6           = word ptr  0Ch ;~ 2088:02CE
cs=0x2088;eip=0x0002ce; 	X(PUSH(bp));	// 70020 push    bp ;~ 2088:02CE
cs=0x2088;eip=0x0002cf; 	T(MOV(bp, sp));	// 70021 mov     bp, sp ;~ 2088:02CF
cs=0x2088;eip=0x0002d1; 	X(PUSH(si));	// 70022 push    si ;~ 2088:02D1
cs=0x2088;eip=0x0002d2; 	X(PUSH(di));	// 70023 push    di ;~ 2088:02D2
cs=0x2088;eip=0x0002d3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 70024 mov     bx, [bp+arg_6] ;~ 2088:02D3
cs=0x2088;eip=0x0002d6; 	T(MOV(ax, ds));	// 70025 mov     ax, ds ;~ 2088:02D6
cs=0x2088;eip=0x0002d8; 	T(MOV(es, ax));	// 70026 mov     es, ax ;~ 2088:02D8
cs=0x2088;eip=0x0002da; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_4))));	// 70028 mov     di, [bp+arg_4] ;~ 2088:02DA
cs=0x2088;eip=0x0002dd; 	T(MOV(si, 0x0FFFF));	// 70029 mov     si, 0FFFFh ;~ 2088:02DD
cs=0x2088;eip=0x0002e0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 70030 mov     ax, [bp+arg_2] ;~ 2088:02E0
cs=0x2088;eip=0x0002e3; 	T(CMP(ax, si));	// 70031 cmp     ax, si ;~ 2088:02E3
cs=0x2088;eip=0x0002e5; 	R(JZ(loc_2f14b));	// 70032 jz      short loc_2F14B ;~ 2088:02E5
cs=0x2088;eip=0x0002e7; 	T(MOV(si, di));	// 70033 mov     si, di ;~ 2088:02E7
cs=0x2088;eip=0x0002e9; 	T(ADD(si, ax));	// 70034 add     si, ax ;~ 2088:02E9
loc_2f14b:
	// 8901 
cs=0x2088;eip=0x0002eb; 	T(CMP(unk_480c3, 0));	// 70037 cmp     byte ptr unk_480C3, 0 ;~ 2088:02EB
cs=0x2088;eip=0x0002f0; 	R(JZ(loc_2f160));	// 70038 jz      short loc_2F160 ;~ 2088:02F0
cs=0x2088;eip=0x0002f2; 	T(TEST(bh, 0x80));	// 70039 test    bh, 80h ;~ 2088:02F2
cs=0x2088;eip=0x0002f5; 	R(JZ(loc_2f160));	// 70040 jz      short loc_2F160 ;~ 2088:02F5
cs=0x2088;eip=0x0002f7; 	T(CMP(di, si));	// 70041 cmp     di, si ;~ 2088:02F7
cs=0x2088;eip=0x0002f9; 	R(JNC(loc_2f1a3));	// 70042 jnb     short loc_2F1A3 ;~ 2088:02F9
cs=0x2088;eip=0x0002fb; 	T(NEG(bx));	// 70043 neg     bx ;~ 2088:02FB
cs=0x2088;eip=0x0002fd; 	T(MOV(al, 0x2D));	// 70044 mov     al, 2Dh ; '-' ;~ 2088:02FD
cs=0x2088;eip=0x0002ff; 	X(STOSB);	// 70045 stosb ;~ 2088:02FF
loc_2f160:
	// 8902 
cs=0x2088;eip=0x000300; 	T(OR(bx, bx));	// 70049 or      bx, bx ;~ 2088:0300
cs=0x2088;eip=0x000302; 	R(JNZ(loc_2f16d));	// 70050 jnz     short loc_2F16D ;~ 2088:0302
cs=0x2088;eip=0x000304; 	T(CMP(di, si));	// 70051 cmp     di, si ;~ 2088:0304
cs=0x2088;eip=0x000306; 	R(JNC(loc_2f1a3));	// 70052 jnb     short loc_2F1A3 ;~ 2088:0306
cs=0x2088;eip=0x000308; 	T(MOV(al, 0x30));	// 70053 mov     al, 30h ; '0' ;~ 2088:0308
cs=0x2088;eip=0x00030a; 	X(STOSB);	// 70054 stosb ;~ 2088:030A
cs=0x2088;eip=0x00030b; 	R(JMP(loc_2f1a3));	// 70055 jmp     short loc_2F1A3 ;~ 2088:030B
loc_2f16d:
	// 8903 
cs=0x2088;eip=0x00030d; 	T(MOV(cx, 0x2710));	// 70059 mov     cx, 2710h ;~ 2088:030D
cs=0x2088;eip=0x000310; 	X(MOV(unk_480c2, 0));	// 70060 mov     byte ptr unk_480C2, 0 ;~ 2088:0310
loc_2f175:
	// 8904 
cs=0x2088;eip=0x000315; 	T(XOR(dx, dx));	// 70063 xor     dx, dx ;~ 2088:0315
cs=0x2088;eip=0x000317; 	T(MOV(ax, bx));	// 70064 mov     ax, bx ;~ 2088:0317
cs=0x2088;eip=0x000319; 	T(DIV2(cx));	// 70065 div     cx ;~ 2088:0319
cs=0x2088;eip=0x00031b; 	T(OR(ax, ax));	// 70066 or      ax, ax ;~ 2088:031B
cs=0x2088;eip=0x00031d; 	R(JNZ(loc_2f186));	// 70067 jnz     short loc_2F186 ;~ 2088:031D
cs=0x2088;eip=0x00031f; 	T(CMP(unk_480c2, 0));	// 70068 cmp     byte ptr unk_480C2, 0 ;~ 2088:031F
cs=0x2088;eip=0x000324; 	R(JZ(loc_2f194));	// 70069 jz      short loc_2F194 ;~ 2088:0324
loc_2f186:
	// 8905 
cs=0x2088;eip=0x000326; 	T(CMP(di, si));	// 70072 cmp     di, si ;~ 2088:0326
cs=0x2088;eip=0x000328; 	R(JNC(loc_2f1a3));	// 70073 jnb     short loc_2F1A3 ;~ 2088:0328
cs=0x2088;eip=0x00032a; 	T(ADD(al, 0x30));	// 70074 add     al, 30h ; '0' ;~ 2088:032A
cs=0x2088;eip=0x00032c; 	X(STOSB);	// 70075 stosb ;~ 2088:032C
cs=0x2088;eip=0x00032d; 	X(MOV(unk_480c2, 1));	// 70076 mov     byte ptr unk_480C2, 1 ;~ 2088:032D
cs=0x2088;eip=0x000332; 	T(MOV(bx, dx));	// 70077 mov     bx, dx ;~ 2088:0332
loc_2f194:
	// 8906 
cs=0x2088;eip=0x000334; 	T(MOV(ax, cx));	// 70080 mov     ax, cx ;~ 2088:0334
cs=0x2088;eip=0x000336; 	T(XOR(dx, dx));	// 70081 xor     dx, dx ;~ 2088:0336
cs=0x2088;eip=0x000338; 	T(MOV(cx, 0x0A));	// 70082 mov     cx, 0Ah ;~ 2088:0338
cs=0x2088;eip=0x00033b; 	T(DIV2(cx));	// 70083 div     cx ;~ 2088:033B
cs=0x2088;eip=0x00033d; 	T(MOV(cx, ax));	// 70084 mov     cx, ax ;~ 2088:033D
cs=0x2088;eip=0x00033f; 	T(OR(ax, ax));	// 70085 or      ax, ax ;~ 2088:033F
cs=0x2088;eip=0x000341; 	R(JNZ(loc_2f175));	// 70086 jnz     short loc_2F175 ;~ 2088:0341
loc_2f1a3:
	// 8907 
cs=0x2088;eip=0x000343; 	X(MOV(*(raddr(ds,di)), 0));	// 70090 mov     byte ptr [di], 0 ;~ 2088:0343
cs=0x2088;eip=0x000346; 	T(MOV(ax, di));	// 70091 mov     ax, di ;~ 2088:0346
cs=0x2088;eip=0x000348; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 70092 sub     ax, [bp+arg_4] ;~ 2088:0348
cs=0x2088;eip=0x00034b; 	T(CMP(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 70093 cmp     ax, [bp+arg_2] ;~ 2088:034B
cs=0x2088;eip=0x00034e; 	R(JGE(loc_2f1cc));	// 70094 jge     short loc_2F1CC ;~ 2088:034E
cs=0x2088;eip=0x000350; 	T(MOV(cx, ax));	// 70095 mov     cx, ax ;~ 2088:0350
cs=0x2088;eip=0x000352; 	T(INC(cx));	// 70096 inc     cx ;~ 2088:0352
cs=0x2088;eip=0x000353; 	T(NEG(ax));	// 70097 neg     ax ;~ 2088:0353
cs=0x2088;eip=0x000355; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 70098 add     ax, [bp+arg_2] ;~ 2088:0355
cs=0x2088;eip=0x000358; 	T(MOV(dx, ax));	// 70099 mov     dx, ax ;~ 2088:0358
cs=0x2088;eip=0x00035a; 	T(MOV(si, di));	// 70100 mov     si, di ;~ 2088:035A
cs=0x2088;eip=0x00035c; 	T(ADD(di, ax));	// 70101 add     di, ax ;~ 2088:035C
cs=0x2088;eip=0x00035e; 	T(STD);	// 70102 std ;~ 2088:035E
	// 70103 rep movsb ;~ 2088:035F
cs=0x2088;eip=0x00035f; 	X(	REP MOVSB);	// 70103 rep movsb ;~ 2088:035F
cs=0x2088;eip=0x000361; 	T(CLD);	// 70104 cld ;~ 2088:0361
cs=0x2088;eip=0x000362; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_4))));	// 70105 mov     di, [bp+arg_4] ;~ 2088:0362
cs=0x2088;eip=0x000365; 	T(MOV(cx, dx));	// 70106 mov     cx, dx ;~ 2088:0365
cs=0x2088;eip=0x000367; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 70107 mov     al, [bp+arg_0] ;~ 2088:0367
	// 70108 rep stosb ;~ 2088:036A
cs=0x2088;eip=0x00036a; 	X(	REP STOSB);	// 70108 rep stosb ;~ 2088:036A
loc_2f1cc:
	// 8908 
cs=0x2088;eip=0x00036c; 	X(POP(di));	// 70111 pop     di ;~ 2088:036C
cs=0x2088;eip=0x00036d; 	X(POP(si));	// 70112 pop     si ;~ 2088:036D
cs=0x2088;eip=0x00036e; 	X(POP(bp));	// 70113 pop     bp ;~ 2088:036E
cs=0x2088;eip=0x00036f; 	R(RETF(8));	// 70114 retf    8 ;~ 2088:036F
seg010_proc:
	// 70120 
loc_2f1d2:
	// 8909 
cs=0x2088;eip=0x000372; 	T(XOR(al, al));	// 70121 xor     al, al ;~ 2088:0372
cs=0x2088;eip=0x000374; 	X(STOSB);	// 70122 stosb ;~ 2088:0374
cs=0x2088;eip=0x000375; 	X(POP(di));	// 70123 pop     di ;~ 2088:0375
cs=0x2088;eip=0x000376; 	X(POP(si));	// 70124 pop     si ;~ 2088:0376
cs=0x2088;eip=0x000377; 	X(POP(bp));	// 70125 pop     bp ;~ 2088:0377
cs=0x2088;eip=0x000378; 	R(RETF(0));	// 70126 retf ;~ 2088:0378
cs=0x2088;eip=0x0005bf; 	X(PUSH(bp));	// 70521 push    bp ;~ 2088:05BF
cs=0x2088;eip=0x0005c0; 	T(MOV(bp, sp));	// 70522 mov     bp, sp ;~ 2088:05C0
cs=0x2088;eip=0x0005c2; 	T(MOV(ah, 1));	// 70523 mov     ah, 1 ;~ 2088:05C2
cs=0x2088;eip=0x0005c4; 	T(MOV(dx, *(dw*)(raddr(ss,bp+6))));	// 70524 mov     dx, [bp+6] ;~ 2088:05C4
cs=0x2088;eip=0x0005c7; 	T(MOV(cx, *(dw*)(raddr(ss,bp+8))));	// 70525 mov     cx, [bp+8] ;~ 2088:05C7
cs=0x2088;eip=0x0005ca; 	R(_INT(0x1A));	// 70526 int     1Ah             ; CLOCK - SET TIME OF DAY ;~ 2088:05CA
cs=0x2088;eip=0x0005cc; 	X(POP(bp));	// 70529 pop     bp ;~ 2088:05CC
cs=0x2088;eip=0x0005cd; 	R(RETF(0));	// 70530 retf ;~ 2088:05CD
ret_2088_5d0:
	// 8941 
cs=0x2088;eip=0x0005d0; 	X(PUSHF);	// 70535 pushf ;~ 2088:05D0
cs=0x2088;eip=0x0005d1; 	T(CLI);	// 70536 cli ;~ 2088:05D1
cs=0x2088;eip=0x0005d2; 	X(PUSH(ax));	// 70537 push    ax ;~ 2088:05D2
cs=0x2088;eip=0x0005d3; 	X(PUSH(bx));	// 70538 push    bx ;~ 2088:05D3
cs=0x2088;eip=0x0005d4; 	X(PUSH(cx));	// 70539 push    cx ;~ 2088:05D4
cs=0x2088;eip=0x0005d5; 	X(PUSH(dx));	// 70540 push    dx ;~ 2088:05D5
cs=0x2088;eip=0x0005d6; 	X(PUSH(ds));	// 70541 push    ds ;~ 2088:05D6
cs=0x2088;eip=0x0005d7; 	X(PUSH(es));	// 70542 push    es ;~ 2088:05D7
cs=0x2088;eip=0x0005d8; 	X(PUSH(si));	// 70543 push    si ;~ 2088:05D8
cs=0x2088;eip=0x0005d9; 	X(PUSH(di));	// 70544 push    di ;~ 2088:05D9
cs=0x2088;eip=0x0005da; 	X(PUSH(bp));	// 70545 push    bp ;~ 2088:05DA
	cs=seg_offset(seg010);
cs=0x2088;eip=0x0005db; 	T(MOV(ds, *(dw*)(((db*)&word_2f42e))));	// 70546 mov     ds, cs:word_2F42E ;~ 2088:05DB
cs=0x2088;eip=0x0005e0; 	T(CLD);	// 70547 cld ;~ 2088:05E0
cs=0x2088;eip=0x0005e1; 	X(PUSH(dx));	// 70548 push    dx ;~ 2088:05E1
cs=0x2088;eip=0x0005e2; 	X(PUSH(cx));	// 70549 push    cx ;~ 2088:05E2
cs=0x2088;eip=0x0005e3; 	X(PUSH(bx));	// 70550 push    bx ;~ 2088:05E3
cs=0x2088;eip=0x0005e4; 	X(PUSH(ax));	// 70551 push    ax ;~ 2088:05E4
cs=0x2088;eip=0x0005e5; 	R(CALLF(sub_3e406,0));	// 70552 call    sub_3E406 ;~ 2088:05E5
cs=0x2088;eip=0x0005ea; 	T(ADD(sp, 8));	// 70553 add     sp, 8 ;~ 2088:05EA
cs=0x2088;eip=0x0005ed; 	X(POP(bp));	// 70554 pop     bp ;~ 2088:05ED
cs=0x2088;eip=0x0005ee; 	X(POP(di));	// 70555 pop     di ;~ 2088:05EE
cs=0x2088;eip=0x0005ef; 	X(POP(si));	// 70556 pop     si ;~ 2088:05EF
cs=0x2088;eip=0x0005f0; 	X(POP(es));	// 70557 pop     es ;~ 2088:05F0
cs=0x2088;eip=0x0005f1; 	X(POP(ds));	// 70558 pop     ds ;~ 2088:05F1
cs=0x2088;eip=0x0005f2; 	X(POP(dx));	// 70559 pop     dx ;~ 2088:05F2
cs=0x2088;eip=0x0005f3; 	X(POP(cx));	// 70560 pop     cx ;~ 2088:05F3
cs=0x2088;eip=0x0005f4; 	X(POP(bx));	// 70561 pop     bx ;~ 2088:05F4
cs=0x2088;eip=0x0005f5; 	X(POP(ax));	// 70562 pop     ax ;~ 2088:05F5
cs=0x2088;eip=0x0005f6; 	R(JMP(loc_2f459));	// 70563 jmp     short loc_2F459 ;~ 2088:05F6
loc_2f459:
	// 8942 
cs=0x2088;eip=0x0005f9; 	X(PUSH(cs));	// 70575 push    cs ;~ 2088:05F9
cs=0x2088;eip=0x0005fa; 	R(CALL(nullsub_17,0));	// 70576 call    near ptr nullsub_17 ;~ 2088:05FA
cs=0x2088;eip=0x0005fd; 	R(RETF(0));	// 70577 retf ;~ 2088:05FD
loc_2f49e:
	// 8943 
cs=0x2088;eip=0x00063e; 	X(PUSH(cs));	// 70656 push    cs ;~ 2088:063E
cs=0x2088;eip=0x00063f; 	R(CALL(nullsub_12,0));	// 70657 call    near ptr nullsub_12 ;~ 2088:063F
cs=0x2088;eip=0x000642; 	X(POP(bp));	// 70658 pop     bp ;~ 2088:0642
cs=0x2088;eip=0x000643; 	R(RETF(0));	// 70659 retf ;~ 2088:0643
sub_2f1d9:
	// 70133 
#undef var_s0
#define var_s0 0
	// 70136 var_s0          = word ptr  0 ;~ 2088:0379
#undef arg_0
#define arg_0 6
	// 70137 arg_0           = word ptr  6 ;~ 2088:0379
#undef arg_2
#define arg_2 8
	// 70138 arg_2           = word ptr  8 ;~ 2088:0379
cs=0x2088;eip=0x000379; 	X(PUSH(bp));	// 70142 push    bp ;~ 2088:0379
cs=0x2088;eip=0x00037a; 	T(MOV(bp, sp));	// 70143 mov     bp, sp ;~ 2088:037A
cs=0x2088;eip=0x00037c; 	X(PUSH(si));	// 70144 push    si ;~ 2088:037C
cs=0x2088;eip=0x00037d; 	X(PUSH(di));	// 70145 push    di ;~ 2088:037D
cs=0x2088;eip=0x00037e; 	T(MOV(ax, ds));	// 70146 mov     ax, ds ;~ 2088:037E
cs=0x2088;eip=0x000380; 	T(MOV(es, ax));	// 70147 mov     es, ax ;~ 2088:0380
cs=0x2088;eip=0x000382; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 70148 mov     si, [bp+arg_2] ;~ 2088:0382
cs=0x2088;eip=0x000385; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 70149 mov     di, [bp+arg_0] ;~ 2088:0385
cs=0x2088;eip=0x000388; 	T(bp = bp+0x0A);	// 70150 lea     bp, [bp+0Ah] ;~ 2088:0388
loc_2f1eb:
	// 8910 
cs=0x2088;eip=0x00038b; 	T(LODSB);	// 70154 lodsb ;~ 2088:038B
cs=0x2088;eip=0x00038c; 	T(OR(al, al));	// 70155 or      al, al ;~ 2088:038C
cs=0x2088;eip=0x00038e; 	R(JZ(loc_2f1d2));	// 70156 jz      short loc_2F1D2 ;~ 2088:038E
cs=0x2088;eip=0x000390; 	T(CMP(al, 0x25));	// 70157 cmp     al, 25h ; '%' ;~ 2088:0390
cs=0x2088;eip=0x000392; 	R(JZ(loc_2f1f7));	// 70158 jz      short loc_2F1F7 ;~ 2088:0392
loc_2f1f4:
	// 8911 
cs=0x2088;eip=0x000394; 	X(STOSB);	// 70161 stosb ;~ 2088:0394
cs=0x2088;eip=0x000395; 	R(JMP(loc_2f1eb));	// 70162 jmp     short loc_2F1EB ;~ 2088:0395
loc_2f1f7:
	// 8912 
cs=0x2088;eip=0x000397; 	X(MOV(*(dw*)((&unk_480c4)), 0x0FFFF));	// 70166 mov     word ptr unk_480C4, 0FFFFh ;~ 2088:0397
cs=0x2088;eip=0x00039d; 	X(MOV(*(dw*)((&unk_480c8)), 0x0FFFF));	// 70167 mov     word ptr unk_480C8, 0FFFFh ;~ 2088:039D
cs=0x2088;eip=0x0003a3; 	X(MOV(*(dw*)((&unk_480c6)), di));	// 70168 mov     word ptr unk_480C6, di ;~ 2088:03A3
cs=0x2088;eip=0x0003a7; 	X(MOV(*(dw*)((&unk_480ca)), 0x20));	// 70169 mov     word ptr unk_480CA, 20h ; ' ' ;~ 2088:03A7
cs=0x2088;eip=0x0003ad; 	X(MOV(unk_480cc, 0));	// 70170 mov     byte ptr unk_480CC, 0 ;~ 2088:03AD
loc_2f212:
	// 8913 
cs=0x2088;eip=0x0003b2; 	T(LODSB);	// 70174 lodsb ;~ 2088:03B2
cs=0x2088;eip=0x0003b3; 	T(CMP(al, 0x25));	// 70175 cmp     al, 25h ; '%' ;~ 2088:03B3
cs=0x2088;eip=0x0003b5; 	R(JZ(loc_2f1f4));	// 70176 jz      short loc_2F1F4 ;~ 2088:03B5
cs=0x2088;eip=0x0003b7; 	T(CMP(al, 0x64));	// 70177 cmp     al, 64h ; 'd' ;~ 2088:03B7
cs=0x2088;eip=0x0003b9; 	R(JNZ(loc_2f262));	// 70178 jnz     short loc_2F262 ;~ 2088:03B9
cs=0x2088;eip=0x0003bb; 	T(CMP(unk_480cc, 0));	// 70179 cmp     byte ptr unk_480CC, 0 ;~ 2088:03BB
cs=0x2088;eip=0x0003c0; 	R(JNZ(loc_2f24c));	// 70180 jnz     short loc_2F24C ;~ 2088:03C0
cs=0x2088;eip=0x0003c2; 	X(PUSH(es));	// 70181 push    es ;~ 2088:03C2
cs=0x2088;eip=0x0003c3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_s0))));	// 70182 mov     ax, [bp+var_s0] ;~ 2088:03C3
cs=0x2088;eip=0x0003c6; 	X(PUSH(ax));	// 70183 push    ax ;~ 2088:03C6
cs=0x2088;eip=0x0003c7; 	T(ADD(bp, 2));	// 70184 add     bp, 2 ;~ 2088:03C7
cs=0x2088;eip=0x0003ca; 	X(PUSH(di));	// 70185 push    di ;~ 2088:03CA
cs=0x2088;eip=0x0003cb; 	X(PUSH(*(dw*)((&unk_480c4))));	// 70186 push    word ptr unk_480C4 ;~ 2088:03CB
cs=0x2088;eip=0x0003cf; 	X(PUSH(*(dw*)((&unk_480ca))));	// 70187 push    word ptr unk_480CA ;~ 2088:03CF
cs=0x2088;eip=0x0003d3; 	X(MOV(unk_480c3, 1));	// 70188 mov     byte ptr unk_480C3, 1 ;~ 2088:03D3
cs=0x2088;eip=0x0003d8; 	R(CALLF(sub_2f12e,0));	// 70189 call    sub_2F12E ;~ 2088:03D8
cs=0x2088;eip=0x0003dd; 	X(MOV(unk_480c3, 0));	// 70190 mov     byte ptr unk_480C3, 0 ;~ 2088:03DD
cs=0x2088;eip=0x0003e2; 	X(POP(es));	// 70191 pop     es ;~ 2088:03E2
loc_2f243:
	// 8914 
cs=0x2088;eip=0x0003e3; 	T(MOV(al, *(raddr(ds,di))));	// 70195 mov     al, [di] ;~ 2088:03E3
cs=0x2088;eip=0x0003e5; 	T(OR(al, al));	// 70196 or      al, al ;~ 2088:03E5
cs=0x2088;eip=0x0003e7; 	R(JZ(loc_2f1eb));	// 70197 jz      short loc_2F1EB ;~ 2088:03E7
cs=0x2088;eip=0x0003e9; 	T(INC(di));	// 70198 inc     di ;~ 2088:03E9
cs=0x2088;eip=0x0003ea; 	R(JMP(loc_2f243));	// 70199 jmp     short loc_2F243 ;~ 2088:03EA
loc_2f24c:
	// 8915 
cs=0x2088;eip=0x0003ec; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_s0))));	// 70203 mov     ax, [bp+var_s0] ;~ 2088:03EC
cs=0x2088;eip=0x0003ef; 	T(MOV(dx, *(dw*)(raddr(ss,bp+2))));	// 70204 mov     dx, [bp+2] ;~ 2088:03EF
cs=0x2088;eip=0x0003f2; 	T(ADD(bp, 4));	// 70205 add     bp, 4 ;~ 2088:03F2
cs=0x2088;eip=0x0003f5; 	T(MOV(cx, 0x0A));	// 70206 mov     cx, 0Ah ;~ 2088:03F5
cs=0x2088;eip=0x0003f8; 	T(MOV(bl, 1));	// 70207 mov     bl, 1 ;~ 2088:03F8
cs=0x2088;eip=0x0003fa; 	R(CALL(sub_2f3ab,0));	// 70208 call    sub_2F3AB ;~ 2088:03FA
cs=0x2088;eip=0x0003fd; 	R(CALL(sub_2f367,0));	// 70209 call    sub_2F367 ;~ 2088:03FD
cs=0x2088;eip=0x000400; 	R(JMP(loc_2f1eb));	// 70210 jmp     short loc_2F1EB ;~ 2088:0400
loc_2f262:
	// 8916 
cs=0x2088;eip=0x000402; 	T(CMP(al, 0x78));	// 70214 cmp     al, 78h ; 'x' ;~ 2088:0402
cs=0x2088;eip=0x000404; 	R(JNZ(loc_2f289));	// 70215 jnz     short loc_2F289 ;~ 2088:0404
cs=0x2088;eip=0x000406; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_s0))));	// 70216 mov     ax, [bp+var_s0] ;~ 2088:0406
cs=0x2088;eip=0x000409; 	T(XOR(dx, dx));	// 70217 xor     dx, dx ;~ 2088:0409
cs=0x2088;eip=0x00040b; 	T(ADD(bp, 2));	// 70218 add     bp, 2 ;~ 2088:040B
cs=0x2088;eip=0x00040e; 	T(CMP(unk_480cc, 0));	// 70219 cmp     byte ptr unk_480CC, 0 ;~ 2088:040E
cs=0x2088;eip=0x000413; 	R(JZ(loc_2f27b));	// 70220 jz      short loc_2F27B ;~ 2088:0413
cs=0x2088;eip=0x000415; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_s0))));	// 70221 mov     dx, [bp+var_s0] ;~ 2088:0415
cs=0x2088;eip=0x000418; 	T(ADD(bp, 2));	// 70222 add     bp, 2 ;~ 2088:0418
loc_2f27b:
	// 8917 
cs=0x2088;eip=0x00041b; 	T(MOV(cx, 0x10));	// 70225 mov     cx, 10h ;~ 2088:041B
cs=0x2088;eip=0x00041e; 	T(MOV(bl, 0));	// 70226 mov     bl, 0 ;~ 2088:041E
cs=0x2088;eip=0x000420; 	R(CALL(sub_2f3ab,0));	// 70227 call    sub_2F3AB ;~ 2088:0420
cs=0x2088;eip=0x000423; 	R(CALL(sub_2f367,0));	// 70228 call    sub_2F367 ;~ 2088:0423
cs=0x2088;eip=0x000426; 	R(JMP(loc_2f1eb));	// 70229 jmp     loc_2F1EB ;~ 2088:0426
loc_2f289:
	// 8918 
cs=0x2088;eip=0x000429; 	T(CMP(al, 0x75));	// 70233 cmp     al, 75h ; 'u' ;~ 2088:0429
cs=0x2088;eip=0x00042b; 	R(JNZ(loc_2f2b0));	// 70234 jnz     short loc_2F2B0 ;~ 2088:042B
cs=0x2088;eip=0x00042d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_s0))));	// 70235 mov     ax, [bp+var_s0] ;~ 2088:042D
cs=0x2088;eip=0x000430; 	T(XOR(dx, dx));	// 70236 xor     dx, dx ;~ 2088:0430
cs=0x2088;eip=0x000432; 	T(ADD(bp, 2));	// 70237 add     bp, 2 ;~ 2088:0432
cs=0x2088;eip=0x000435; 	T(CMP(unk_480cc, 0));	// 70238 cmp     byte ptr unk_480CC, 0 ;~ 2088:0435
cs=0x2088;eip=0x00043a; 	R(JZ(loc_2f2a2));	// 70239 jz      short loc_2F2A2 ;~ 2088:043A
cs=0x2088;eip=0x00043c; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_s0))));	// 70240 mov     dx, [bp+var_s0] ;~ 2088:043C
cs=0x2088;eip=0x00043f; 	T(ADD(bp, 2));	// 70241 add     bp, 2 ;~ 2088:043F
loc_2f2a2:
	// 8919 
cs=0x2088;eip=0x000442; 	T(MOV(cx, 0x0A));	// 70244 mov     cx, 0Ah ;~ 2088:0442
cs=0x2088;eip=0x000445; 	T(MOV(bl, 1));	// 70245 mov     bl, 1 ;~ 2088:0445
cs=0x2088;eip=0x000447; 	R(CALL(sub_2f3ab,0));	// 70246 call    sub_2F3AB ;~ 2088:0447
cs=0x2088;eip=0x00044a; 	R(CALL(sub_2f367,0));	// 70247 call    sub_2F367 ;~ 2088:044A
cs=0x2088;eip=0x00044d; 	R(JMP(loc_2f1eb));	// 70248 jmp     loc_2F1EB ;~ 2088:044D
loc_2f2b0:
	// 8920 
cs=0x2088;eip=0x000450; 	T(CMP(al, 0x73));	// 70252 cmp     al, 73h ; 's' ;~ 2088:0450
cs=0x2088;eip=0x000452; 	R(JNZ(loc_2f316));	// 70253 jnz     short loc_2F316 ;~ 2088:0452
cs=0x2088;eip=0x000454; 	T(CMP(*(dw*)((&unk_480c4)), 0x0FFFF));	// 70254 cmp     word ptr unk_480C4, 0FFFFh ;~ 2088:0454
cs=0x2088;eip=0x000459; 	R(JNZ(loc_2f2d0));	// 70255 jnz     short loc_2F2D0 ;~ 2088:0459
cs=0x2088;eip=0x00045b; 	T(MOV(dx, si));	// 70256 mov     dx, si ;~ 2088:045B
cs=0x2088;eip=0x00045d; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_s0))));	// 70257 mov     si, [bp+var_s0] ;~ 2088:045D
cs=0x2088;eip=0x000460; 	T(ADD(bp, 2));	// 70258 add     bp, 2 ;~ 2088:0460
loc_2f2c3:
	// 8921 
cs=0x2088;eip=0x000463; 	T(LODSB);	// 70261 lodsb ;~ 2088:0463
cs=0x2088;eip=0x000464; 	T(OR(al, al));	// 70262 or      al, al ;~ 2088:0464
cs=0x2088;eip=0x000466; 	R(JZ(loc_2f2cb));	// 70263 jz      short loc_2F2CB ;~ 2088:0466
cs=0x2088;eip=0x000468; 	X(STOSB);	// 70264 stosb ;~ 2088:0468
cs=0x2088;eip=0x000469; 	R(JMP(loc_2f2c3));	// 70265 jmp     short loc_2F2C3 ;~ 2088:0469
loc_2f2cb:
	// 8922 
cs=0x2088;eip=0x00046b; 	T(MOV(si, dx));	// 70269 mov     si, dx ;~ 2088:046B
cs=0x2088;eip=0x00046d; 	R(JMP(loc_2f1eb));	// 70270 jmp     loc_2F1EB ;~ 2088:046D
loc_2f2d0:
	// 8923 
cs=0x2088;eip=0x000470; 	T(MOV(dx, di));	// 70274 mov     dx, di ;~ 2088:0470
cs=0x2088;eip=0x000472; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_s0))));	// 70275 mov     di, [bp+var_s0] ;~ 2088:0472
cs=0x2088;eip=0x000475; 	T(MOV(cx, 0x0FFFF));	// 70276 mov     cx, 0FFFFh ;~ 2088:0475
cs=0x2088;eip=0x000478; 	T(XOR(al, al));	// 70277 xor     al, al ;~ 2088:0478
	// 70278 repne scasb ;~ 2088:047A
cs=0x2088;eip=0x00047a; 	T(	REPNE SCASB);	// 70278 repne scasb ;~ 2088:047A
cs=0x2088;eip=0x00047c; 	T(MOV(di, dx));	// 70279 mov     di, dx ;~ 2088:047C
cs=0x2088;eip=0x00047e; 	T(NEG(cx));	// 70280 neg     cx ;~ 2088:047E
cs=0x2088;eip=0x000480; 	T(SUB(cx, 2));	// 70281 sub     cx, 2 ;~ 2088:0480
cs=0x2088;eip=0x000483; 	T(CMP(cx, *(dw*)((&unk_480c4))));	// 70282 cmp     cx, word ptr unk_480C4 ;~ 2088:0483
cs=0x2088;eip=0x000487; 	R(JL(loc_2f2f8));	// 70283 jl      short loc_2F2F8 ;~ 2088:0487
cs=0x2088;eip=0x000489; 	T(MOV(dx, si));	// 70284 mov     dx, si ;~ 2088:0489
cs=0x2088;eip=0x00048b; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_s0))));	// 70285 mov     si, [bp+var_s0] ;~ 2088:048B
cs=0x2088;eip=0x00048e; 	T(MOV(cx, *(dw*)((&unk_480c4))));	// 70286 mov     cx, word ptr unk_480C4 ;~ 2088:048E
	// 70287 rep movsb ;~ 2088:0492
cs=0x2088;eip=0x000492; 	X(	REP MOVSB);	// 70287 rep movsb ;~ 2088:0492
cs=0x2088;eip=0x000494; 	T(MOV(si, dx));	// 70288 mov     si, dx ;~ 2088:0494
cs=0x2088;eip=0x000496; 	R(JMP(loc_2f310));	// 70289 jmp     short loc_2F310 ;~ 2088:0496
loc_2f2f8:
	// 8924 
cs=0x2088;eip=0x000498; 	T(MOV(dx, cx));	// 70293 mov     dx, cx ;~ 2088:0498
cs=0x2088;eip=0x00049a; 	T(NEG(cx));	// 70294 neg     cx ;~ 2088:049A
cs=0x2088;eip=0x00049c; 	T(ADD(cx, *(dw*)((&unk_480c4))));	// 70295 add     cx, word ptr unk_480C4 ;~ 2088:049C
cs=0x2088;eip=0x0004a0; 	T(MOV(al, unk_480ca));	// 70296 mov     al, byte ptr unk_480CA ;~ 2088:04A0
	// 70297 rep stosb ;~ 2088:04A3
cs=0x2088;eip=0x0004a3; 	X(	REP STOSB);	// 70297 rep stosb ;~ 2088:04A3
cs=0x2088;eip=0x0004a5; 	T(MOV(cx, dx));	// 70298 mov     cx, dx ;~ 2088:04A5
cs=0x2088;eip=0x0004a7; 	T(MOV(dx, si));	// 70299 mov     dx, si ;~ 2088:04A7
cs=0x2088;eip=0x0004a9; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_s0))));	// 70300 mov     si, [bp+var_s0] ;~ 2088:04A9
	// 70301 rep movsb ;~ 2088:04AC
cs=0x2088;eip=0x0004ac; 	X(	REP MOVSB);	// 70301 rep movsb ;~ 2088:04AC
cs=0x2088;eip=0x0004ae; 	T(MOV(si, dx));	// 70302 mov     si, dx ;~ 2088:04AE
loc_2f310:
	// 8925 
cs=0x2088;eip=0x0004b0; 	T(ADD(bp, 2));	// 70305 add     bp, 2 ;~ 2088:04B0
cs=0x2088;eip=0x0004b3; 	R(JMP(loc_2f1eb));	// 70306 jmp     loc_2F1EB ;~ 2088:04B3
loc_2f316:
	// 8926 
cs=0x2088;eip=0x0004b6; 	T(CMP(al, 0x6C));	// 70310 cmp     al, 6Ch ; 'l' ;~ 2088:04B6
cs=0x2088;eip=0x0004b8; 	R(JNZ(loc_2f322));	// 70311 jnz     short loc_2F322 ;~ 2088:04B8
cs=0x2088;eip=0x0004ba; 	X(MOV(unk_480cc, 1));	// 70312 mov     byte ptr unk_480CC, 1 ;~ 2088:04BA
cs=0x2088;eip=0x0004bf; 	R(JMP(loc_2f212));	// 70313 jmp     loc_2F212 ;~ 2088:04BF
loc_2f322:
	// 8927 
cs=0x2088;eip=0x0004c2; 	T(CMP(al, 0x30));	// 70317 cmp     al, 30h ; '0' ;~ 2088:04C2
cs=0x2088;eip=0x0004c4; 	R(JNZ(loc_2f32f));	// 70318 jnz     short loc_2F32F ;~ 2088:04C4
cs=0x2088;eip=0x0004c6; 	X(MOV(*(dw*)((&unk_480ca)), 0x30));	// 70319 mov     word ptr unk_480CA, 30h ; '0' ;~ 2088:04C6
cs=0x2088;eip=0x0004cc; 	R(JMP(loc_2f212));	// 70320 jmp     loc_2F212 ;~ 2088:04CC
loc_2f32f:
	// 8928 
cs=0x2088;eip=0x0004cf; 	T(CMP(al, 0x31));	// 70324 cmp     al, 31h ; '1' ;~ 2088:04CF
cs=0x2088;eip=0x0004d1; 	R(JL(loc_2f364));	// 70325 jl      short loc_2F364 ;~ 2088:04D1
cs=0x2088;eip=0x0004d3; 	T(CMP(al, 0x39));	// 70326 cmp     al, 39h ; '9' ;~ 2088:04D3
cs=0x2088;eip=0x0004d5; 	R(JG(loc_2f364));	// 70327 jg      short loc_2F364 ;~ 2088:04D5
cs=0x2088;eip=0x0004d7; 	T(SUB(al, 0x30));	// 70328 sub     al, 30h ; '0' ;~ 2088:04D7
cs=0x2088;eip=0x0004d9; 	T(XOR(ah, ah));	// 70329 xor     ah, ah ;~ 2088:04D9
loc_2f33b:
	// 8929 
cs=0x2088;eip=0x0004db; 	T(MOV(bl, *(raddr(ds,si))));	// 70332 mov     bl, [si] ;~ 2088:04DB
cs=0x2088;eip=0x0004dd; 	T(SUB(bl, 0x30));	// 70333 sub     bl, 30h ; '0' ;~ 2088:04DD
cs=0x2088;eip=0x0004e0; 	R(JS(loc_2f358));	// 70334 js      short loc_2F358 ;~ 2088:04E0
cs=0x2088;eip=0x0004e2; 	T(CMP(bl, 9));	// 70335 cmp     bl, 9 ;~ 2088:04E2
cs=0x2088;eip=0x0004e5; 	R(JG(loc_2f358));	// 70336 jg      short loc_2F358 ;~ 2088:04E5
cs=0x2088;eip=0x0004e7; 	T(INC(si));	// 70337 inc     si ;~ 2088:04E7
cs=0x2088;eip=0x0004e8; 	T(XOR(bh, bh));	// 70338 xor     bh, bh ;~ 2088:04E8
cs=0x2088;eip=0x0004ea; 	T(SHL(ax, 1));	// 70339 shl     ax, 1 ;~ 2088:04EA
cs=0x2088;eip=0x0004ec; 	T(MOV(cx, ax));	// 70340 mov     cx, ax ;~ 2088:04EC
cs=0x2088;eip=0x0004ee; 	T(SHL(ax, 1));	// 70341 shl     ax, 1 ;~ 2088:04EE
cs=0x2088;eip=0x0004f0; 	T(SHL(ax, 1));	// 70342 shl     ax, 1 ;~ 2088:04F0
cs=0x2088;eip=0x0004f2; 	T(ADD(ax, cx));	// 70343 add     ax, cx ;~ 2088:04F2
cs=0x2088;eip=0x0004f4; 	T(ADD(ax, bx));	// 70344 add     ax, bx ;~ 2088:04F4
cs=0x2088;eip=0x0004f6; 	R(JMP(loc_2f33b));	// 70345 jmp     short loc_2F33B ;~ 2088:04F6
loc_2f358:
	// 8930 
cs=0x2088;eip=0x0004f8; 	X(MOV(*(dw*)((&unk_480c4)), ax));	// 70350 mov     word ptr unk_480C4, ax ;~ 2088:04F8
cs=0x2088;eip=0x0004fb; 	T(ADD(ax, di));	// 70351 add     ax, di ;~ 2088:04FB
cs=0x2088;eip=0x0004fd; 	T(DEC(ax));	// 70352 dec     ax ;~ 2088:04FD
cs=0x2088;eip=0x0004fe; 	X(MOV(*(dw*)((&unk_480c8)), ax));	// 70353 mov     word ptr unk_480C8, ax ;~ 2088:04FE
cs=0x2088;eip=0x000501; 	R(JMP(loc_2f212));	// 70354 jmp     loc_2F212 ;~ 2088:0501
loc_2f364:
	// 8931 
cs=0x2088;eip=0x000504; 	R(JMP(loc_2f1eb));	// 70359 jmp     loc_2F1EB ;~ 2088:0504
sub_2f367:
	// 70366 
cs=0x2088;eip=0x000507; 	T(CMP(*(dw*)((&unk_480c4)), 0x0FFFF));	// 70368 cmp     word ptr unk_480C4, 0FFFFh ;~ 2088:0507
cs=0x2088;eip=0x00050c; 	R(JZ(locret_2f3aa));	// 70369 jz      short locret_2F3AA ;~ 2088:050C
cs=0x2088;eip=0x00050e; 	T(CMP(di, *(dw*)((&unk_480c8))));	// 70370 cmp     di, word ptr unk_480C8 ;~ 2088:050E
cs=0x2088;eip=0x000512; 	R(JLE(loc_2f37a));	// 70371 jle     short loc_2F37A ;~ 2088:0512
cs=0x2088;eip=0x000514; 	T(MOV(di, *(dw*)((&unk_480c8))));	// 70372 mov     di, word ptr unk_480C8 ;~ 2088:0514
cs=0x2088;eip=0x000518; 	T(INC(di));	// 70373 inc     di ;~ 2088:0518
cs=0x2088;eip=0x000519; 	R(RETN(0));	// 70374 retn ;~ 2088:0519
loc_2f37a:
	// 8932 
cs=0x2088;eip=0x00051a; 	T(MOV(cx, *(dw*)((&unk_480c8))));	// 70378 mov     cx, word ptr unk_480C8 ;~ 2088:051A
cs=0x2088;eip=0x00051e; 	T(SUB(cx, di));	// 70379 sub     cx, di ;~ 2088:051E
cs=0x2088;eip=0x000520; 	T(INC(cx));	// 70380 inc     cx ;~ 2088:0520
cs=0x2088;eip=0x000521; 	R(JZ(locret_2f3aa));	// 70381 jz      short locret_2F3AA ;~ 2088:0521
cs=0x2088;eip=0x000523; 	X(PUSH(si));	// 70382 push    si ;~ 2088:0523
cs=0x2088;eip=0x000524; 	X(PUSH(di));	// 70383 push    di ;~ 2088:0524
cs=0x2088;eip=0x000525; 	T(MOV(bx, cx));	// 70384 mov     bx, cx ;~ 2088:0525
cs=0x2088;eip=0x000527; 	T(STD);	// 70385 std ;~ 2088:0527
cs=0x2088;eip=0x000528; 	T(MOV(cx, di));	// 70386 mov     cx, di ;~ 2088:0528
cs=0x2088;eip=0x00052a; 	T(SUB(cx, *(dw*)((&unk_480c6))));	// 70387 sub     cx, word ptr unk_480C6 ;~ 2088:052A
cs=0x2088;eip=0x00052e; 	T(MOV(si, di));	// 70388 mov     si, di ;~ 2088:052E
cs=0x2088;eip=0x000530; 	T(DEC(si));	// 70389 dec     si ;~ 2088:0530
cs=0x2088;eip=0x000531; 	T(MOV(di, *(dw*)((&unk_480c8))));	// 70390 mov     di, word ptr unk_480C8 ;~ 2088:0531
	// 70391 rep movsb ;~ 2088:0535
cs=0x2088;eip=0x000535; 	X(	REP MOVSB);	// 70391 rep movsb ;~ 2088:0535
cs=0x2088;eip=0x000537; 	T(CLD);	// 70392 cld ;~ 2088:0537
cs=0x2088;eip=0x000538; 	T(MOV(cx, bx));	// 70393 mov     cx, bx ;~ 2088:0538
cs=0x2088;eip=0x00053a; 	X(POP(di));	// 70394 pop     di ;~ 2088:053A
cs=0x2088;eip=0x00053b; 	X(POP(si));	// 70395 pop     si ;~ 2088:053B
cs=0x2088;eip=0x00053c; 	T(MOV(al, unk_480ca));	// 70396 mov     al, byte ptr unk_480CA ;~ 2088:053C
cs=0x2088;eip=0x00053f; 	T(MOV(di, *(dw*)((&unk_480c6))));	// 70397 mov     di, word ptr unk_480C6 ;~ 2088:053F
	// 70398 rep stosb ;~ 2088:0543
cs=0x2088;eip=0x000543; 	X(	REP STOSB);	// 70398 rep stosb ;~ 2088:0543
cs=0x2088;eip=0x000545; 	T(MOV(di, *(dw*)((&unk_480c8))));	// 70399 mov     di, word ptr unk_480C8 ;~ 2088:0545
cs=0x2088;eip=0x000549; 	T(INC(di));	// 70400 inc     di ;~ 2088:0549
locret_2f3aa:
	// 8933 
cs=0x2088;eip=0x00054a; 	R(RETN(0));	// 70404 retn ;~ 2088:054A
sub_2f3ab:
	// 70411 
cs=0x2088;eip=0x00054b; 	X(PUSH(si));	// 70413 push    si ;~ 2088:054B
cs=0x2088;eip=0x00054c; 	T(XCHG(ax, bx));	// 70414 xchg    ax, bx ;~ 2088:054C
cs=0x2088;eip=0x00054d; 	T(OR(al, al));	// 70415 or      al, al ;~ 2088:054D
cs=0x2088;eip=0x00054f; 	R(JZ(loc_2f3c4));	// 70416 jz      short loc_2F3C4 ;~ 2088:054F
cs=0x2088;eip=0x000551; 	T(CMP(cx, 0x0A));	// 70417 cmp     cx, 0Ah ;~ 2088:0551
cs=0x2088;eip=0x000554; 	R(JNZ(loc_2f3c4));	// 70418 jnz     short loc_2F3C4 ;~ 2088:0554
cs=0x2088;eip=0x000556; 	T(OR(dx, dx));	// 70419 or      dx, dx ;~ 2088:0556
cs=0x2088;eip=0x000558; 	R(JNS(loc_2f3c4));	// 70420 jns     short loc_2F3C4 ;~ 2088:0558
cs=0x2088;eip=0x00055a; 	T(MOV(al, 0x2D));	// 70421 mov     al, 2Dh ; '-' ;~ 2088:055A
cs=0x2088;eip=0x00055c; 	X(STOSB);	// 70422 stosb ;~ 2088:055C
cs=0x2088;eip=0x00055d; 	T(NEG(bx));	// 70423 neg     bx ;~ 2088:055D
cs=0x2088;eip=0x00055f; 	T(ADC(dx, 0));	// 70424 adc     dx, 0 ;~ 2088:055F
cs=0x2088;eip=0x000562; 	T(NEG(dx));	// 70425 neg     dx ;~ 2088:0562
loc_2f3c4:
	// 8934 
cs=0x2088;eip=0x000564; 	T(MOV(si, di));	// 70429 mov     si, di ;~ 2088:0564
loc_2f3c6:
	// 8935 
cs=0x2088;eip=0x000566; 	T(XCHG(ax, dx));	// 70432 xchg    ax, dx ;~ 2088:0566
cs=0x2088;eip=0x000567; 	T(XOR(dx, dx));	// 70433 xor     dx, dx ;~ 2088:0567
cs=0x2088;eip=0x000569; 	T(OR(ax, ax));	// 70434 or      ax, ax ;~ 2088:0569
cs=0x2088;eip=0x00056b; 	R(JZ(loc_2f3cf));	// 70435 jz      short loc_2F3CF ;~ 2088:056B
cs=0x2088;eip=0x00056d; 	T(DIV2(cx));	// 70436 div     cx ;~ 2088:056D
loc_2f3cf:
	// 8936 
cs=0x2088;eip=0x00056f; 	T(XCHG(ax, bx));	// 70439 xchg    ax, bx ;~ 2088:056F
cs=0x2088;eip=0x000570; 	T(DIV2(cx));	// 70440 div     cx ;~ 2088:0570
cs=0x2088;eip=0x000572; 	T(XCHG(ax, dx));	// 70441 xchg    ax, dx ;~ 2088:0572
cs=0x2088;eip=0x000573; 	T(XCHG(dx, bx));	// 70442 xchg    dx, bx ;~ 2088:0573
cs=0x2088;eip=0x000575; 	T(ADD(al, 0x30));	// 70443 add     al, 30h ; '0' ;~ 2088:0575
cs=0x2088;eip=0x000577; 	T(CMP(al, 0x39));	// 70444 cmp     al, 39h ; '9' ;~ 2088:0577
cs=0x2088;eip=0x000579; 	R(JBE(loc_2f3dd));	// 70445 jbe     short loc_2F3DD ;~ 2088:0579
cs=0x2088;eip=0x00057b; 	T(ADD(al, 0x27));	// 70446 add     al, 27h ; ''' ;~ 2088:057B
loc_2f3dd:
	// 8937 
cs=0x2088;eip=0x00057d; 	X(STOSB);	// 70449 stosb ;~ 2088:057D
cs=0x2088;eip=0x00057e; 	T(MOV(ax, dx));	// 70450 mov     ax, dx ;~ 2088:057E
cs=0x2088;eip=0x000580; 	T(OR(ax, bx));	// 70451 or      ax, bx ;~ 2088:0580
cs=0x2088;eip=0x000582; 	R(JNZ(loc_2f3c6));	// 70452 jnz     short loc_2F3C6 ;~ 2088:0582
cs=0x2088;eip=0x000584; 	T(MOV(cx, di));	// 70453 mov     cx, di ;~ 2088:0584
loc_2f3e6:
	// 8938 
cs=0x2088;eip=0x000586; 	T(DEC(di));	// 70456 dec     di ;~ 2088:0586
cs=0x2088;eip=0x000587; 	T(LODSB);	// 70457 lodsb ;~ 2088:0587
cs=0x2088;eip=0x000588; 	X(XCHG(al, *(raddr(ds,di))));	// 70458 xchg    al, [di] ;~ 2088:0588
cs=0x2088;eip=0x00058a; 	X(MOV(*(raddr(ds,si-1)), al));	// 70459 mov     [si-1], al ;~ 2088:058A
cs=0x2088;eip=0x00058d; 	T(ax = si+1);	// 70460 lea     ax, [si+1] ;~ 2088:058D
cs=0x2088;eip=0x000590; 	T(CMP(ax, di));	// 70461 cmp     ax, di ;~ 2088:0590
cs=0x2088;eip=0x000592; 	R(JC(loc_2f3e6));	// 70462 jb      short loc_2F3E6 ;~ 2088:0592
cs=0x2088;eip=0x000594; 	T(MOV(di, cx));	// 70463 mov     di, cx ;~ 2088:0594
cs=0x2088;eip=0x000596; 	X(POP(si));	// 70464 pop     si ;~ 2088:0596
cs=0x2088;eip=0x000597; 	R(RETN(0));	// 70465 retn ;~ 2088:0597
sub_2f3f8:
	// 70473 
#undef arg_0
#define arg_0 6
	// 70476 arg_0           = word ptr  6 ;~ 2088:0598
cs=0x2088;eip=0x000598; 	X(PUSH(bp));	// 70478 push    bp ;~ 2088:0598
cs=0x2088;eip=0x000599; 	T(MOV(bp, sp));	// 70479 mov     bp, sp ;~ 2088:0599
cs=0x2088;eip=0x00059b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 70480 mov     bx, [bp+arg_0] ;~ 2088:059B
cs=0x2088;eip=0x00059e; 	T(MOV(ah, 2));	// 70481 mov     ah, 2 ;~ 2088:059E
loc_2f400:
	// 8939 
cs=0x2088;eip=0x0005a0; 	T(MOV(dl, *(raddr(ds,bx))));	// 70485 mov     dl, [bx] ;~ 2088:05A0
cs=0x2088;eip=0x0005a2; 	T(INC(bx));	// 70486 inc     bx ;~ 2088:05A2
cs=0x2088;eip=0x0005a3; 	T(OR(dl, dl));	// 70487 or      dl, dl ;~ 2088:05A3
cs=0x2088;eip=0x0005a5; 	R(JZ(loc_2f414));	// 70488 jz      short loc_2F414 ;~ 2088:05A5
cs=0x2088;eip=0x0005a7; 	R(_INT(0x21));	// 70489 int     21h             ; DOS - DISPLAY OUTPUT ;~ 2088:05A7
cs=0x2088;eip=0x0005a9; 	T(CMP(dl, 0x0A));	// 70491 cmp     dl, 0Ah ;~ 2088:05A9
cs=0x2088;eip=0x0005ac; 	R(JNZ(loc_2f400));	// 70492 jnz     short loc_2F400 ;~ 2088:05AC
cs=0x2088;eip=0x0005ae; 	T(MOV(dl, 0x0D));	// 70493 mov     dl, 0Dh ;~ 2088:05AE
cs=0x2088;eip=0x0005b0; 	R(_INT(0x21));	// 70494 int     21h             ; DOS - ;~ 2088:05B0
cs=0x2088;eip=0x0005b2; 	R(JMP(loc_2f400));	// 70495 jmp     short loc_2F400 ;~ 2088:05B2
loc_2f414:
	// 8940 
cs=0x2088;eip=0x0005b4; 	X(POP(bp));	// 70499 pop     bp ;~ 2088:05B4
cs=0x2088;eip=0x0005b5; 	R(RETF(0));	// 70500 retf ;~ 2088:05B5
sub_2f416:
	// 70507 
cs=0x2088;eip=0x0005b6; 	T(XOR(ah, ah));	// 70509 xor     ah, ah ;~ 2088:05B6
cs=0x2088;eip=0x0005b8; 	R(_INT(0x1A));	// 70510 int     1Ah             ; CLOCK - GET TIME OF DAY ;~ 2088:05B8
cs=0x2088;eip=0x0005ba; 	T(MOV(ax, dx));	// 70515 mov     ax, dx ;~ 2088:05BA
cs=0x2088;eip=0x0005bc; 	T(MOV(dx, cx));	// 70516 mov     dx, cx ;~ 2088:05BC
cs=0x2088;eip=0x0005be; 	R(RETF(0));	// 70517 retf ;~ 2088:05BE
nullsub_17:
	// 70568 
cs=0x2088;eip=0x0005f8; 	R(IRET);	// 70569 iret ;~ 2088:05F8
sub_2f45e:
	// 70583 
cs=0x2088;eip=0x0005fe; 	X(PUSH(bp));	// 70584 push    bp ;~ 2088:05FE
cs=0x2088;eip=0x0005ff; 	T(MOV(bp, sp));	// 70585 mov     bp, sp ;~ 2088:05FF
	cs=seg_offset(seg010);
cs=0x2088;eip=0x000601; 	X(MOV(*(dw*)(((db*)&word_2f42e)), ds));	// 70586 mov     cs:word_2F42E, ds ;~ 2088:0601
cs=0x2088;eip=0x000606; 	T(MOV(dx, 0x5D0));	// 70587 mov     dx, 5D0h ;~ 2088:0606
cs=0x2088;eip=0x000609; 	T(MOV(ax, seg_offset(seg010)));	// 70588 mov     ax, seg seg010 ;~ 2088:0609
cs=0x2088;eip=0x00060c; 	T(MOV(es, ax));	// 70589 mov     es, ax ;~ 2088:060C
cs=0x2088;eip=0x00060e; 	T(MOV(ax, 0x0C));	// 70591 mov     ax, 0Ch ;~ 2088:060E
cs=0x2088;eip=0x000611; 	T(MOV(cx, 0x0FFFF));	// 70592 mov     cx, 0FFFFh ;~ 2088:0611
cs=0x2088;eip=0x000614; 	R(_INT(0x33));	// 70593 int     33h             ; - MS MOUSE - DEFINE INTERRUPT SUBROUTINE PARAMETERS ;~ 2088:0614
cs=0x2088;eip=0x000616; 	X(POP(bp));	// 70595 pop     bp ;~ 2088:0616
cs=0x2088;eip=0x000617; 	R(RETF(0));	// 70596 retf ;~ 2088:0617
sub_2f478:
	// 70603 
cs=0x2088;eip=0x000618; 	T(XOR(dx, dx));	// 70604 xor     dx, dx ;~ 2088:0618
cs=0x2088;eip=0x00061a; 	T(MOV(es, dx));	// 70605 mov     es, dx ;~ 2088:061A
cs=0x2088;eip=0x00061c; 	T(MOV(ax, 0x0C));	// 70607 mov     ax, 0Ch ;~ 2088:061C
cs=0x2088;eip=0x00061f; 	T(XOR(cx, cx));	// 70608 xor     cx, cx ;~ 2088:061F
cs=0x2088;eip=0x000621; 	R(_INT(0x33));	// 70609 int     33h             ; - MS MOUSE - DEFINE INTERRUPT SUBROUTINE PARAMETERS ;~ 2088:0621
cs=0x2088;eip=0x000623; 	R(RETF(0));	// 70611 retf ;~ 2088:0623
sub_2f484:
	// 70619 
#undef arg_2
#define arg_2 6
	// 70622 arg_2           = dword ptr  6 ;~ 2088:0624
#undef arg_6
#define arg_6 0x0A
	// 70623 arg_6           = word ptr  0Ah ;~ 2088:0624
#undef arg_8
#define arg_8 0x0C
	// 70624 arg_8           = word ptr  0Ch ;~ 2088:0624
#undef arg_a
#define arg_a 0x0E
	// 70625 arg_A           = word ptr  0Eh ;~ 2088:0624
cs=0x2088;eip=0x000624; 	X(PUSH(bp));	// 70629 push    bp ;~ 2088:0624
cs=0x2088;eip=0x000625; 	T(MOV(bp, sp));	// 70630 mov     bp, sp ;~ 2088:0625
cs=0x2088;eip=0x000627; 	X(PUSHF);	// 70631 pushf ;~ 2088:0627
cs=0x2088;eip=0x000628; 	X(PUSH(si));	// 70632 push    si ;~ 2088:0628
cs=0x2088;eip=0x000629; 	X(PUSH(di));	// 70633 push    di ;~ 2088:0629
cs=0x2088;eip=0x00062a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 70634 push    [bp+arg_A] ;~ 2088:062A
cs=0x2088;eip=0x00062d; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 70635 push    [bp+arg_8] ;~ 2088:062D
cs=0x2088;eip=0x000630; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 70636 push    [bp+arg_6] ;~ 2088:0630
cs=0x2088;eip=0x000633; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+arg_2))));	// 70637 call    [bp+arg_2] ;~ 2088:0633
cs=0x2088;eip=0x000636; 	T(ADD(sp, 6));	// 70638 add     sp, 6 ;~ 2088:0636
cs=0x2088;eip=0x000639; 	X(POP(di));	// 70639 pop     di ;~ 2088:0639
cs=0x2088;eip=0x00063a; 	X(POP(si));	// 70640 pop     si ;~ 2088:063A
cs=0x2088;eip=0x00063b; 	R(JMP(loc_2f49e));	// 70641 jmp     short loc_2F49E ;~ 2088:063B
nullsub_12:
	// 70648 
cs=0x2088;eip=0x00063d; 	R(IRET);	// 70649 iret ;~ 2088:063D
sub_2f4a4:
	// 70666 
cs=0x2088;eip=0x000644; 	X(PUSH(bp));	// 70668 push    bp ;~ 2088:0644
cs=0x2088;eip=0x000645; 	T(MOV(bp, sp));	// 70669 mov     bp, sp ;~ 2088:0645
cs=0x2088;eip=0x000647; 	X(PUSH(si));	// 70670 push    si ;~ 2088:0647
cs=0x2088;eip=0x000648; 	X(PUSH(di));	// 70671 push    di ;~ 2088:0648
cs=0x2088;eip=0x000649; 	T(MOV(si, 0x727));	// 70672 mov     si, 727h ;~ 2088:0649
cs=0x2088;eip=0x00064c; 	T(XOR(di, di));	// 70673 xor     di, di ;~ 2088:064C
loc_2f4ae:
	// 8944 
cs=0x2088;eip=0x00064e; 	T(LODSB);	// 70676 lodsb ;~ 2088:064E
cs=0x2088;eip=0x00064f; 	T(MOV(bx, di));	// 70677 mov     bx, di ;~ 2088:064F
cs=0x2088;eip=0x000651; 	T(MOV(bh, al));	// 70678 mov     bh, al ;~ 2088:0651
cs=0x2088;eip=0x000653; 	T(MOV(ax, 0x1000));	// 70679 mov     ax, 1000h ;~ 2088:0653
cs=0x2088;eip=0x000656; 	R(_INT(0x10));	// 70680 int     10h             ; - VIDEO - SET PALETTE REGISTER (Jr, PS, TANDY 1000, EGA, VGA) ;~ 2088:0656
cs=0x2088;eip=0x000658; 	T(INC(di));	// 70683 inc     di ;~ 2088:0658
cs=0x2088;eip=0x000659; 	T(CMP(di, 0x10));	// 70684 cmp     di, 10h ;~ 2088:0659
cs=0x2088;eip=0x00065c; 	R(JL(loc_2f4ae));	// 70685 jl      short loc_2F4AE ;~ 2088:065C
cs=0x2088;eip=0x00065e; 	X(POP(di));	// 70686 pop     di ;~ 2088:065E
cs=0x2088;eip=0x00065f; 	X(POP(si));	// 70687 pop     si ;~ 2088:065F
cs=0x2088;eip=0x000660; 	X(POP(bp));	// 70688 pop     bp ;~ 2088:0660
cs=0x2088;eip=0x000661; 	R(RETF(0));	// 70689 retf ;~ 2088:0661
sub_2f4c2:
	// 70696 
cs=0x2088;eip=0x000662; 	X(PUSH(bp));	// 70697 push    bp ;~ 2088:0662
cs=0x2088;eip=0x000663; 	T(MOV(ah, 0x0B));	// 70698 mov     ah, 0Bh ;~ 2088:0663
cs=0x2088;eip=0x000665; 	T(MOV(bh, 1));	// 70699 mov     bh, 1 ;~ 2088:0665
cs=0x2088;eip=0x000667; 	T(MOV(bl, 0));	// 70700 mov     bl, 0 ;~ 2088:0667
cs=0x2088;eip=0x000669; 	R(_INT(0x10));	// 70701 int     10h             ; - VIDEO - SET COLOR PALETTE ;~ 2088:0669
cs=0x2088;eip=0x00066b; 	T(MOV(ah, 0x0B));	// 70704 mov     ah, 0Bh ;~ 2088:066B
cs=0x2088;eip=0x00066d; 	T(MOV(bh, 0));	// 70705 mov     bh, 0 ;~ 2088:066D
cs=0x2088;eip=0x00066f; 	T(MOV(bl, 0x10));	// 70706 mov     bl, 10h ;~ 2088:066F
cs=0x2088;eip=0x000671; 	R(_INT(0x10));	// 70707 int     10h             ; - VIDEO - SET COLOR PALETTE ;~ 2088:0671
cs=0x2088;eip=0x000673; 	T(MOV(ah, 0x0B));	// 70710 mov     ah, 0Bh ;~ 2088:0673
cs=0x2088;eip=0x000675; 	T(MOV(bh, 1));	// 70711 mov     bh, 1 ;~ 2088:0675
cs=0x2088;eip=0x000677; 	T(MOV(bl, 0x11));	// 70712 mov     bl, 11h ;~ 2088:0677
cs=0x2088;eip=0x000679; 	R(_INT(0x10));	// 70713 int     10h             ; - VIDEO - SET COLOR PALETTE ;~ 2088:0679
cs=0x2088;eip=0x00067b; 	T(MOV(ah, 0x0B));	// 70716 mov     ah, 0Bh ;~ 2088:067B
cs=0x2088;eip=0x00067d; 	T(MOV(bh, 2));	// 70717 mov     bh, 2 ;~ 2088:067D
cs=0x2088;eip=0x00067f; 	T(MOV(bl, 0x12));	// 70718 mov     bl, 12h ;~ 2088:067F
cs=0x2088;eip=0x000681; 	R(_INT(0x10));	// 70719 int     10h             ; - VIDEO - SET COLOR PALETTE ;~ 2088:0681
cs=0x2088;eip=0x000683; 	T(MOV(ah, 0x0B));	// 70722 mov     ah, 0Bh ;~ 2088:0683
cs=0x2088;eip=0x000685; 	T(MOV(bh, 3));	// 70723 mov     bh, 3 ;~ 2088:0685
cs=0x2088;eip=0x000687; 	T(MOV(bl, 0x13));	// 70724 mov     bl, 13h ;~ 2088:0687
cs=0x2088;eip=0x000689; 	R(_INT(0x10));	// 70725 int     10h             ; - VIDEO - SET COLOR PALETTE ;~ 2088:0689
cs=0x2088;eip=0x00068b; 	X(POP(bp));	// 70728 pop     bp ;~ 2088:068B
cs=0x2088;eip=0x00068c; 	R(RETF(0));	// 70729 retf ;~ 2088:068C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_2ee8e: 	goto loc_2ee8e;
        case m2c::kloc_2eea9: 	goto loc_2eea9;
        case m2c::kloc_2eebf: 	goto loc_2eebf;
        case m2c::kloc_2eeca: 	goto loc_2eeca;
        case m2c::kloc_2eee7: 	goto loc_2eee7;
        case m2c::kloc_2ef1c: 	goto loc_2ef1c;
        case m2c::kloc_2ef2f: 	goto loc_2ef2f;
        case m2c::kloc_2ef5e: 	goto loc_2ef5e;
        case m2c::kloc_2ef84: 	goto loc_2ef84;
        case m2c::kloc_2ef9f: 	goto loc_2ef9f;
        case m2c::kloc_2efa1: 	goto loc_2efa1;
        case m2c::kloc_2efb4: 	goto loc_2efb4;
        case m2c::kloc_2efc9: 	goto loc_2efc9;
        case m2c::kloc_2efce: 	goto loc_2efce;
        case m2c::kloc_2efde: 	goto loc_2efde;
        case m2c::kloc_2f042: 	goto loc_2f042;
        case m2c::kloc_2f073: 	goto loc_2f073;
        case m2c::kloc_2f080: 	goto loc_2f080;
        case m2c::kloc_2f08d: 	goto loc_2f08d;
        case m2c::kloc_2f095: 	goto loc_2f095;
        case m2c::kloc_2f09d: 	goto loc_2f09d;
        case m2c::kloc_2f0a5: 	goto loc_2f0a5;
        case m2c::kloc_2f0bb: 	goto loc_2f0bb;
        case m2c::kloc_2f0c9: 	goto loc_2f0c9;
        case m2c::kloc_2f0cf: 	goto loc_2f0cf;
        case m2c::kloc_2f10d: 	goto loc_2f10d;
        case m2c::kloc_2f114: 	goto loc_2f114;
        case m2c::kloc_2f127: 	goto loc_2f127;
        case m2c::kloc_2f14b: 	goto loc_2f14b;
        case m2c::kloc_2f160: 	goto loc_2f160;
        case m2c::kloc_2f16d: 	goto loc_2f16d;
        case m2c::kloc_2f175: 	goto loc_2f175;
        case m2c::kloc_2f186: 	goto loc_2f186;
        case m2c::kloc_2f194: 	goto loc_2f194;
        case m2c::kloc_2f1a3: 	goto loc_2f1a3;
        case m2c::kloc_2f1cc: 	goto loc_2f1cc;
        case m2c::kloc_2f1eb: 	goto loc_2f1eb;
        case m2c::kloc_2f1f4: 	goto loc_2f1f4;
        case m2c::kloc_2f1f7: 	goto loc_2f1f7;
        case m2c::kloc_2f212: 	goto loc_2f212;
        case m2c::kloc_2f243: 	goto loc_2f243;
        case m2c::kloc_2f24c: 	goto loc_2f24c;
        case m2c::kloc_2f262: 	goto loc_2f262;
        case m2c::kloc_2f27b: 	goto loc_2f27b;
        case m2c::kloc_2f289: 	goto loc_2f289;
        case m2c::kloc_2f2a2: 	goto loc_2f2a2;
        case m2c::kloc_2f2b0: 	goto loc_2f2b0;
        case m2c::kloc_2f2c3: 	goto loc_2f2c3;
        case m2c::kloc_2f2cb: 	goto loc_2f2cb;
        case m2c::kloc_2f2d0: 	goto loc_2f2d0;
        case m2c::kloc_2f2f8: 	goto loc_2f2f8;
        case m2c::kloc_2f310: 	goto loc_2f310;
        case m2c::kloc_2f316: 	goto loc_2f316;
        case m2c::kloc_2f322: 	goto loc_2f322;
        case m2c::kloc_2f32f: 	goto loc_2f32f;
        case m2c::kloc_2f33b: 	goto loc_2f33b;
        case m2c::kloc_2f358: 	goto loc_2f358;
        case m2c::kloc_2f364: 	goto loc_2f364;
        case m2c::kloc_2f37a: 	goto loc_2f37a;
        case m2c::kloc_2f3c4: 	goto loc_2f3c4;
        case m2c::kloc_2f3c6: 	goto loc_2f3c6;
        case m2c::kloc_2f3cf: 	goto loc_2f3cf;
        case m2c::kloc_2f3dd: 	goto loc_2f3dd;
        case m2c::kloc_2f3e6: 	goto loc_2f3e6;
        case m2c::kloc_2f400: 	goto loc_2f400;
        case m2c::kloc_2f414: 	goto loc_2f414;
        case m2c::kloc_2f459: 	goto loc_2f459;
        case m2c::kloc_2f49e: 	goto loc_2f49e;
        case m2c::kloc_2f4ae: 	goto loc_2f4ae;
        case m2c::klocret_2eec9: 	goto locret_2eec9;
        case m2c::klocret_2eee1: 	goto locret_2eee1;
        case m2c::klocret_2ef01: 	goto locret_2ef01;
        case m2c::klocret_2f3aa: 	goto locret_2f3aa;
        case m2c::knullsub_12: 	goto nullsub_12;
        case m2c::knullsub_17: 	goto nullsub_17;
        case m2c::kret_2088_5d0: 	goto ret_2088_5d0;
        case m2c::kseg010_proc: 	goto seg010_proc;
        case m2c::ksub_2ee6e: 	goto sub_2ee6e;
        case m2c::ksub_2ee71: 	goto sub_2ee71;
        case m2c::ksub_2eee2: 	goto sub_2eee2;
        case m2c::ksub_2eef5: 	goto sub_2eef5;
        case m2c::ksub_2ef02: 	goto sub_2ef02;
        case m2c::ksub_2ef64: 	goto sub_2ef64;
        case m2c::ksub_2efe2: 	goto sub_2efe2;
        case m2c::ksub_2eff2: 	goto sub_2eff2;
        case m2c::ksub_2f002: 	goto sub_2f002;
        case m2c::ksub_2f00f: 	goto sub_2f00f;
        case m2c::ksub_2f01c: 	goto sub_2f01c;
        case m2c::ksub_2f02c: 	goto sub_2f02c;
        case m2c::ksub_2f062: 	goto sub_2f062;
        case m2c::ksub_2f06b: 	goto sub_2f06b;
        case m2c::ksub_2f0ac: 	goto sub_2f0ac;
        case m2c::ksub_2f12e: 	goto sub_2f12e;
        case m2c::ksub_2f1d9: 	goto sub_2f1d9;
        case m2c::ksub_2f367: 	goto sub_2f367;
        case m2c::ksub_2f3ab: 	goto sub_2f3ab;
        case m2c::ksub_2f3f8: 	goto sub_2f3f8;
        case m2c::ksub_2f416: 	goto sub_2f416;
        case m2c::ksub_2f45e: 	goto sub_2f45e;
        case m2c::ksub_2f478: 	goto sub_2f478;
        case m2c::ksub_2f484: 	goto sub_2f484;
        case m2c::ksub_2f4a4: 	goto sub_2f4a4;
        case m2c::ksub_2f4c2: 	goto sub_2f4c2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, _source);m2c::stackDump(_state); abort();
    };
}

