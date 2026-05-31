/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group14(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group14:
    _begin:
sub_3059c:
	// 73462 
cs=0x21fb;eip=0x00000c; 	X(PUSH(bp));	// 73464 push    bp ;~ 21FB:000C
cs=0x21fb;eip=0x00000d; 	T(MOV(bp, sp));	// 73465 mov     bp, sp ;~ 21FB:000D
cs=0x21fb;eip=0x00000f; 	T(SUB(sp, 4));	// 73466 sub     sp, 4 ;~ 21FB:000F
cs=0x21fb;eip=0x000012; 	X(PUSH(di));	// 73467 push    di ;~ 21FB:0012
cs=0x21fb;eip=0x000013; 	X(PUSH(si));	// 73468 push    si ;~ 21FB:0013
cs=0x21fb;eip=0x000014; 	T(MOV(ax, 0x1388));	// 73469 mov     ax, 1388h ;~ 21FB:0014
cs=0x21fb;eip=0x000017; 	X(PUSH(ax));	// 73470 push    ax ;~ 21FB:0017
cs=0x21fb;eip=0x000018; 	R(CALLF(sub_23961,0));	// 73471 call    sub_23961 ;~ 21FB:0018
cs=0x21fb;eip=0x00001d; 	X(MOV(*(dw*)((&unk_48b8e)), ax));	// 73472 mov     word ptr unk_48B8E, ax ;~ 21FB:001D
cs=0x21fb;eip=0x000020; 	T(OR(ax, ax));	// 73473 or      ax, ax ;~ 21FB:0020
cs=0x21fb;eip=0x000022; 	R(JNZ(loc_305b9));	// 73474 jnz     short loc_305B9 ;~ 21FB:0022
cs=0x21fb;eip=0x000024; 	R(CALLF(sub_315c9,0));	// 73475 call    sub_315C9 ;~ 21FB:0024
loc_305b9:
	// 9163 
cs=0x21fb;eip=0x000029; 	X(MOV(*(dw*)((&unk_541e8)), 0));	// 73479 mov     word ptr unk_541E8, 0 ;~ 21FB:0029
cs=0x21fb;eip=0x00002f; 	T(MOV(ax, *(dw*)((&unk_47a94))));	// 73480 mov     ax, word ptr unk_47A94 ;~ 21FB:002F
cs=0x21fb;eip=0x000032; 	X(IMUL1_2(*(dw*)((&unk_47a96))));	// 73481 imul    word ptr unk_47A96 ;~ 21FB:0032
cs=0x21fb;eip=0x000036; 	T(SHL(ax, 1));	// 73482 shl     ax, 1 ;~ 21FB:0036
cs=0x21fb;eip=0x000038; 	X(PUSH(ax));	// 73483 push    ax ;~ 21FB:0038
cs=0x21fb;eip=0x000039; 	R(CALL(sub_308b6,0));	// 73484 call    sub_308B6 ;~ 21FB:0039
cs=0x21fb;eip=0x00003c; 	T(SUB(di, di));	// 73485 sub     di, di ;~ 21FB:003C
cs=0x21fb;eip=0x00003e; 	R(JMP(loc_305dd));	// 73486 jmp     short loc_305DD ;~ 21FB:003E
loc_305d0:
	// 9164 
cs=0x21fb;eip=0x000040; 	X(PUSH(si));	// 73490 push    si ;~ 21FB:0040
cs=0x21fb;eip=0x000041; 	X(PUSH(di));	// 73491 push    di ;~ 21FB:0041
cs=0x21fb;eip=0x000042; 	R(CALL(sub_30613,0));	// 73492 call    sub_30613 ;~ 21FB:0042
cs=0x21fb;eip=0x000045; 	T(INC(si));	// 73493 inc     si ;~ 21FB:0045
loc_305d6:
	// 9165 
cs=0x21fb;eip=0x000046; 	T(CMP(*(dw*)((&unk_47a94)), si));	// 73496 cmp     word ptr unk_47A94, si ;~ 21FB:0046
cs=0x21fb;eip=0x00004a; 	R(JG(loc_305d0));	// 73497 jg      short loc_305D0 ;~ 21FB:004A
cs=0x21fb;eip=0x00004c; 	T(INC(di));	// 73498 inc     di ;~ 21FB:004C
loc_305dd:
	// 9166 
cs=0x21fb;eip=0x00004d; 	T(CMP(*(dw*)((&unk_47a96)), di));	// 73501 cmp     word ptr unk_47A96, di ;~ 21FB:004D
cs=0x21fb;eip=0x000051; 	R(JLE(loc_305e7));	// 73502 jle     short loc_305E7 ;~ 21FB:0051
cs=0x21fb;eip=0x000053; 	T(SUB(si, si));	// 73503 sub     si, si ;~ 21FB:0053
cs=0x21fb;eip=0x000055; 	R(JMP(loc_305d6));	// 73504 jmp     short loc_305D6 ;~ 21FB:0055
loc_305e7:
	// 9167 
cs=0x21fb;eip=0x000057; 	X(PUSH(*(dw*)((&unk_48b8e))));	// 73508 push    word ptr unk_48B8E ;~ 21FB:0057
cs=0x21fb;eip=0x00005b; 	X(PUSH(*(dw*)((&unk_541e8))));	// 73509 push    word ptr unk_541E8 ;~ 21FB:005B
cs=0x21fb;eip=0x00005f; 	R(CALLF(sub_23998,0));	// 73510 call    sub_23998 ;~ 21FB:005F
cs=0x21fb;eip=0x000064; 	T(OR(al, al));	// 73511 or      al, al ;~ 21FB:0064
cs=0x21fb;eip=0x000066; 	R(JNZ(loc_305fd));	// 73512 jnz     short loc_305FD ;~ 21FB:0066
cs=0x21fb;eip=0x000068; 	R(CALLF(sub_315c9,0));	// 73513 call    sub_315C9 ;~ 21FB:0068
loc_305fd:
	// 9168 
cs=0x21fb;eip=0x00006d; 	X(POP(si));	// 73517 pop     si ;~ 21FB:006D
cs=0x21fb;eip=0x00006e; 	X(POP(di));	// 73518 pop     di ;~ 21FB:006E
cs=0x21fb;eip=0x00006f; 	T(MOV(sp, bp));	// 73519 mov     sp, bp ;~ 21FB:006F
cs=0x21fb;eip=0x000071; 	X(POP(bp));	// 73520 pop     bp ;~ 21FB:0071
cs=0x21fb;eip=0x000072; 	R(RETF(0));	// 73521 retf ;~ 21FB:0072
sub_30603:
	// 73528 
cs=0x21fb;eip=0x000073; 	X(PUSH(*(dw*)((&unk_48b8e))));	// 73529 push    word ptr unk_48B8E ;~ 21FB:0073
cs=0x21fb;eip=0x000077; 	R(CALLF(sub_2397c,0));	// 73530 call    sub_2397C ;~ 21FB:0077
cs=0x21fb;eip=0x00007c; 	X(MOV(*(dw*)((&unk_48b8e)), 0));	// 73531 mov     word ptr unk_48B8E, 0 ;~ 21FB:007C
cs=0x21fb;eip=0x000082; 	R(RETF(0));	// 73532 retf ;~ 21FB:0082
sub_30613:
	// 73540 
#undef var_3a
#define var_3a -0x3A
	// 73542 var_3A          = word ptr -3Ah ;~ 21FB:0083
#undef var_38
#define var_38 -0x38
	// 73543 var_38          = word ptr -38h ;~ 21FB:0083
#undef var_36
#define var_36 -0x36
	// 73544 var_36          = word ptr -36h ;~ 21FB:0083
#undef var_34
#define var_34 -0x34
	// 73545 var_34          = word ptr -34h ;~ 21FB:0083
#undef var_32
#define var_32 -0x32
	// 73546 var_32          = word ptr -32h ;~ 21FB:0083
#undef var_30
#define var_30 -0x30
	// 73547 var_30          = word ptr -30h ;~ 21FB:0083
#undef var_2e
#define var_2e -0x2E
	// 73548 var_2E          = word ptr -2Eh ;~ 21FB:0083
#undef var_2c
#define var_2c -0x2C
	// 73549 var_2C          = word ptr -2Ch ;~ 21FB:0083
#undef var_2a
#define var_2a -0x2A
	// 73550 var_2A          = word ptr -2Ah ;~ 21FB:0083
#undef var_28
#define var_28 -0x28
	// 73551 var_28          = word ptr -28h ;~ 21FB:0083
#undef var_26
#define var_26 -0x26
	// 73552 var_26          = word ptr -26h ;~ 21FB:0083
#undef var_24
#define var_24 -0x24
	// 73553 var_24          = word ptr -24h ;~ 21FB:0083
#undef var_22
#define var_22 -0x22
	// 73554 var_22          = word ptr -22h ;~ 21FB:0083
#undef var_20
#define var_20 -0x20
	// 73555 var_20          = word ptr -20h ;~ 21FB:0083
#undef var_1e
#define var_1e -0x1E
	// 73556 var_1E          = word ptr -1Eh ;~ 21FB:0083
#undef var_1c
#define var_1c -0x1C
	// 73557 var_1C          = word ptr -1Ch ;~ 21FB:0083
#undef var_1a
#define var_1a -0x1A
	// 73558 var_1A          = word ptr -1Ah ;~ 21FB:0083
#undef var_18
#define var_18 -0x18
	// 73559 var_18          = word ptr -18h ;~ 21FB:0083
#undef var_16
#define var_16 -0x16
	// 73560 var_16          = word ptr -16h ;~ 21FB:0083
#undef var_14
#define var_14 -0x14
	// 73561 var_14          = word ptr -14h ;~ 21FB:0083
#undef var_12
#define var_12 -0x12
	// 73562 var_12          = word ptr -12h ;~ 21FB:0083
#undef var_10
#define var_10 -0x10
	// 73563 var_10          = word ptr -10h ;~ 21FB:0083
#undef var_e
#define var_e -0x0E
	// 73564 var_E           = word ptr -0Eh ;~ 21FB:0083
#undef var_c
#define var_c -0x0C
	// 73565 var_C           = byte ptr -0Ch ;~ 21FB:0083
#undef var_a
#define var_a -0x0A
	// 73566 var_A           = word ptr -0Ah ;~ 21FB:0083
#undef var_8
#define var_8 -8
	// 73567 var_8           = dword ptr -8 ;~ 21FB:0083
#undef var_4
#define var_4 -4
	// 73568 var_4           = dword ptr -4 ;~ 21FB:0083
#undef arg_0
#define arg_0 4
	// 73569 arg_0           = word ptr  4 ;~ 21FB:0083
#undef arg_2
#define arg_2 6
	// 73570 arg_2           = word ptr  6 ;~ 21FB:0083
cs=0x21fb;eip=0x000083; 	X(PUSH(bp));	// 73572 push    bp ;~ 21FB:0083
cs=0x21fb;eip=0x000084; 	T(MOV(bp, sp));	// 73573 mov     bp, sp ;~ 21FB:0084
cs=0x21fb;eip=0x000086; 	T(SUB(sp, 0x3A));	// 73574 sub     sp, 3Ah ;~ 21FB:0086
cs=0x21fb;eip=0x000089; 	X(PUSH(di));	// 73575 push    di ;~ 21FB:0089
cs=0x21fb;eip=0x00008a; 	X(PUSH(si));	// 73576 push    si ;~ 21FB:008A
cs=0x21fb;eip=0x00008b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 73577 mov     ax, [bp+arg_0] ;~ 21FB:008B
cs=0x21fb;eip=0x00008e; 	X(IMUL1_2(*(dw*)((&unk_47a94))));	// 73578 imul    word ptr unk_47A94 ;~ 21FB:008E
cs=0x21fb;eip=0x000092; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 73579 add     ax, [bp+arg_2] ;~ 21FB:0092
cs=0x21fb;eip=0x000095; 	T(SHL(ax, 1));	// 73580 shl     ax, 1 ;~ 21FB:0095
cs=0x21fb;eip=0x000097; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 73581 mov     [bp+var_16], ax ;~ 21FB:0097
cs=0x21fb;eip=0x00009a; 	X(MOV(*(raddr(ss,bp+var_c)), 0));	// 73582 mov     [bp+var_C], 0 ;~ 21FB:009A
cs=0x21fb;eip=0x00009e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 73583 mov     ax, [bp+arg_2] ;~ 21FB:009E
cs=0x21fb;eip=0x0000a1; 	T(DEC(ax));	// 73584 dec     ax ;~ 21FB:00A1
cs=0x21fb;eip=0x0000a2; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 73585 mov     [bp+var_A], ax ;~ 21FB:00A2
cs=0x21fb;eip=0x0000a5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 73586 mov     ax, [bp+arg_2] ;~ 21FB:00A5
cs=0x21fb;eip=0x0000a8; 	T(INC(ax));	// 73587 inc     ax ;~ 21FB:00A8
cs=0x21fb;eip=0x0000a9; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_a))));	// 73588 cmp     ax, [bp+var_A] ;~ 21FB:00A9
cs=0x21fb;eip=0x0000ac; 	R(JGE(loc_30641));	// 73589 jge     short loc_30641 ;~ 21FB:00AC
cs=0x21fb;eip=0x0000ae; 	R(JMP(loc_3087f));	// 73590 jmp     loc_3087F ;~ 21FB:00AE
loc_30641:
	// 9169 
cs=0x21fb;eip=0x0000b1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 73594 mov     ax, [bp+arg_2] ;~ 21FB:00B1
cs=0x21fb;eip=0x0000b4; 	T(INC(ax));	// 73595 inc     ax ;~ 21FB:00B4
cs=0x21fb;eip=0x0000b5; 	X(MOV(*(dw*)(raddr(ss,bp+var_2e)), ax));	// 73596 mov     [bp+var_2E], ax ;~ 21FB:00B5
cs=0x21fb;eip=0x0000b8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_16))));	// 73597 mov     ax, [bp+var_16] ;~ 21FB:00B8
cs=0x21fb;eip=0x0000bb; 	X(MOV(*(dw*)(raddr(ss,bp+var_32)), ax));	// 73598 mov     [bp+var_32], ax ;~ 21FB:00BB
cs=0x21fb;eip=0x0000be; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), 0));	// 73599 mov     [bp+var_30], 0 ;~ 21FB:00BE
cs=0x21fb;eip=0x0000c3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 73600 mov     ax, [bp+arg_2] ;~ 21FB:00C3
cs=0x21fb;eip=0x0000c6; 	T(CWD);	// 73601 cwd ;~ 21FB:00C6
cs=0x21fb;eip=0x0000c7; 	T(MOV(cl, 0x18));	// 73602 mov     cl, 18h ;~ 21FB:00C7
cs=0x21fb;eip=0x0000c9; 	R(CALLF(sub_105f6,0));	// 73603 call    sub_105F6 ;~ 21FB:00C9
cs=0x21fb;eip=0x0000ce; 	X(MOV(*(dw*)(raddr(ss,bp+var_36)), ax));	// 73604 mov     [bp+var_36], ax ;~ 21FB:00CE
cs=0x21fb;eip=0x0000d1; 	X(MOV(*(dw*)(raddr(ss,bp+var_34)), dx));	// 73605 mov     [bp+var_34], dx ;~ 21FB:00D1
cs=0x21fb;eip=0x0000d4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 73606 mov     ax, [bp+arg_0] ;~ 21FB:00D4
cs=0x21fb;eip=0x0000d7; 	T(INC(ax));	// 73607 inc     ax ;~ 21FB:00D7
cs=0x21fb;eip=0x0000d8; 	X(MOV(*(dw*)(raddr(ss,bp+var_38)), ax));	// 73608 mov     [bp+var_38], ax ;~ 21FB:00D8
cs=0x21fb;eip=0x0000db; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 73609 mov     ax, [bp+arg_0] ;~ 21FB:00DB
cs=0x21fb;eip=0x0000de; 	T(DEC(ax));	// 73610 dec     ax ;~ 21FB:00DE
cs=0x21fb;eip=0x0000df; 	X(MOV(*(dw*)(raddr(ss,bp+var_3a)), ax));	// 73611 mov     [bp+var_3A], ax ;~ 21FB:00DF
loc_30672:
	// 9170 
cs=0x21fb;eip=0x0000e2; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0));	// 73614 cmp     [bp+var_A], 0 ;~ 21FB:00E2
cs=0x21fb;eip=0x0000e6; 	R(JGE(loc_3067b));	// 73615 jge     short loc_3067B ;~ 21FB:00E6
cs=0x21fb;eip=0x0000e8; 	R(JMP(loc_30871));	// 73616 jmp     loc_30871 ;~ 21FB:00E8
loc_3067b:
	// 9171 
cs=0x21fb;eip=0x0000eb; 	T(MOV(ax, *(dw*)((&unk_47a94))));	// 73620 mov     ax, word ptr unk_47A94 ;~ 21FB:00EB
cs=0x21fb;eip=0x0000ee; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), ax));	// 73621 cmp     [bp+var_A], ax ;~ 21FB:00EE
cs=0x21fb;eip=0x0000f1; 	R(JL(loc_30686));	// 73622 jl      short loc_30686 ;~ 21FB:00F1
cs=0x21fb;eip=0x0000f3; 	R(JMP(loc_30871));	// 73623 jmp     loc_30871 ;~ 21FB:00F3
loc_30686:
	// 9172 
cs=0x21fb;eip=0x0000f6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_3a))));	// 73627 mov     ax, [bp+var_3A] ;~ 21FB:00F6
cs=0x21fb;eip=0x0000f9; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 73628 mov     [bp+var_E], ax ;~ 21FB:00F9
cs=0x21fb;eip=0x0000fc; 	T(CMP(*(dw*)(raddr(ss,bp+var_38)), ax));	// 73629 cmp     [bp+var_38], ax ;~ 21FB:00FC
cs=0x21fb;eip=0x0000ff; 	R(JGE(loc_30694));	// 73630 jge     short loc_30694 ;~ 21FB:00FF
cs=0x21fb;eip=0x000101; 	R(JMP(loc_30871));	// 73631 jmp     loc_30871 ;~ 21FB:0101
loc_30694:
	// 9173 
cs=0x21fb;eip=0x000104; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_38))));	// 73635 mov     ax, [bp+var_38] ;~ 21FB:0104
cs=0x21fb;eip=0x000107; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), ax));	// 73636 mov     [bp+var_24], ax ;~ 21FB:0107
cs=0x21fb;eip=0x00010a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_36))));	// 73637 mov     ax, [bp+var_36] ;~ 21FB:010A
cs=0x21fb;eip=0x00010d; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_34))));	// 73638 mov     dx, [bp+var_34] ;~ 21FB:010D
cs=0x21fb;eip=0x000110; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), ax));	// 73639 mov     [bp+var_28], ax ;~ 21FB:0110
cs=0x21fb;eip=0x000113; 	X(MOV(*(dw*)(raddr(ss,bp+var_26)), dx));	// 73640 mov     [bp+var_26], dx ;~ 21FB:0113
cs=0x21fb;eip=0x000116; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_32))));	// 73641 mov     ax, [bp+var_32] ;~ 21FB:0116
cs=0x21fb;eip=0x000119; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_30))));	// 73642 mov     dx, [bp+var_30] ;~ 21FB:0119
cs=0x21fb;eip=0x00011c; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 73643 mov     [bp+var_2C], ax ;~ 21FB:011C
cs=0x21fb;eip=0x00011f; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a)), dx));	// 73644 mov     [bp+var_2A], dx ;~ 21FB:011F
cs=0x21fb;eip=0x000122; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_14))));	// 73645 mov     si, [bp+var_14] ;~ 21FB:0122
loc_306b5:
	// 9174 
cs=0x21fb;eip=0x000125; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), 0));	// 73648 cmp     [bp+var_E], 0 ;~ 21FB:0125
cs=0x21fb;eip=0x000129; 	R(JGE(loc_306be));	// 73649 jge     short loc_306BE ;~ 21FB:0129
cs=0x21fb;eip=0x00012b; 	R(JMP(loc_30860));	// 73650 jmp     loc_30860 ;~ 21FB:012B
loc_306be:
	// 9175 
cs=0x21fb;eip=0x00012e; 	T(MOV(ax, *(dw*)((&unk_47a96))));	// 73654 mov     ax, word ptr unk_47A96 ;~ 21FB:012E
cs=0x21fb;eip=0x000131; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), ax));	// 73655 cmp     [bp+var_E], ax ;~ 21FB:0131
cs=0x21fb;eip=0x000134; 	R(JL(loc_306c9));	// 73656 jl      short loc_306C9 ;~ 21FB:0134
cs=0x21fb;eip=0x000136; 	R(JMP(loc_30860));	// 73657 jmp     loc_30860 ;~ 21FB:0136
loc_306c9:
	// 9176 
cs=0x21fb;eip=0x000139; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 73661 mov     ax, [bp+arg_0] ;~ 21FB:0139
cs=0x21fb;eip=0x00013c; 	X(IMUL1_2(*(dw*)((&unk_47a94))));	// 73662 imul    word ptr unk_47A94 ;~ 21FB:013C
cs=0x21fb;eip=0x000140; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 73663 add     ax, [bp+arg_2] ;~ 21FB:0140
cs=0x21fb;eip=0x000143; 	T(SHL(ax, 1));	// 73664 shl     ax, 1 ;~ 21FB:0143
cs=0x21fb;eip=0x000145; 	T(SHL(ax, 1));	// 73665 shl     ax, 1 ;~ 21FB:0145
cs=0x21fb;eip=0x000147; 	T(ADD(ax, *(dw*)((&unk_47a98))));	// 73666 add     ax, word ptr unk_47A98 ;~ 21FB:0147
cs=0x21fb;eip=0x00014b; 	T(MOV(bx, *(dw*)((&unk_47a9e))));	// 73667 mov     bx, word ptr unk_47A9E ;~ 21FB:014B
cs=0x21fb;eip=0x00014f; 	T(SUB(cx, cx));	// 73668 sub     cx, cx ;~ 21FB:014F
cs=0x21fb;eip=0x000151; 	T(MOV(dx, bx));	// 73669 mov     dx, bx ;~ 21FB:0151
cs=0x21fb;eip=0x000153; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8))), ax));	// 73670 mov     word ptr [bp+var_8], ax ;~ 21FB:0153
cs=0x21fb;eip=0x000156; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8+2))), dx));	// 73671 mov     word ptr [bp+var_8+2], dx ;~ 21FB:0156
cs=0x21fb;eip=0x000159; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 73672 les     bx, [bp+var_8] ;~ 21FB:0159
cs=0x21fb;eip=0x00015c; 	T(MOV(si, *(dw*)(raddr(es,bx))));	// 73673 mov     si, es:[bx] ;~ 21FB:015C
cs=0x21fb;eip=0x00015f; 	T(OR(si, si));	// 73674 or      si, si ;~ 21FB:015F
cs=0x21fb;eip=0x000161; 	R(JNZ(loc_306f6));	// 73675 jnz     short loc_306F6 ;~ 21FB:0161
cs=0x21fb;eip=0x000163; 	R(JMP(loc_30860));	// 73676 jmp     loc_30860 ;~ 21FB:0163
loc_306f6:
	// 9177 
cs=0x21fb;eip=0x000166; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2c))));	// 73680 mov     ax, [bp+var_2C] ;~ 21FB:0166
cs=0x21fb;eip=0x000169; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2a))));	// 73681 mov     dx, [bp+var_2A] ;~ 21FB:0169
cs=0x21fb;eip=0x00016c; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 73682 mov     [bp+var_1E], ax ;~ 21FB:016C
cs=0x21fb;eip=0x00016f; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), dx));	// 73683 mov     [bp+var_1C], dx ;~ 21FB:016F
cs=0x21fb;eip=0x000172; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_28))));	// 73684 mov     ax, [bp+var_28] ;~ 21FB:0172
cs=0x21fb;eip=0x000175; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_26))));	// 73685 mov     dx, [bp+var_26] ;~ 21FB:0175
cs=0x21fb;eip=0x000178; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 73686 mov     [bp+var_22], ax ;~ 21FB:0178
cs=0x21fb;eip=0x00017b; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), dx));	// 73687 mov     [bp+var_20], dx ;~ 21FB:017B
cs=0x21fb;eip=0x00017e; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 73688 mov     di, [bp+arg_0] ;~ 21FB:017E
loc_30711:
	// 9178 
cs=0x21fb;eip=0x000181; 	T(MOV(dx, *(dw*)((&unk_47a9a))));	// 73691 mov     dx, word ptr unk_47A9A ;~ 21FB:0181
cs=0x21fb;eip=0x000185; 	T(MOV(ax, si));	// 73692 mov     ax, si ;~ 21FB:0185
cs=0x21fb;eip=0x000187; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 73693 mov     word ptr [bp+var_4], ax ;~ 21FB:0187
cs=0x21fb;eip=0x00018a; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 73694 mov     word ptr [bp+var_4+2], dx ;~ 21FB:018A
cs=0x21fb;eip=0x00018d; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 73695 les     bx, [bp+var_4] ;~ 21FB:018D
cs=0x21fb;eip=0x000190; 	T(MOV(bx, *(dw*)(raddr(es,bx))));	// 73696 mov     bx, es:[bx] ;~ 21FB:0190
cs=0x21fb;eip=0x000193; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x38))));	// 73697 mov     ax, [bx+38h] ;~ 21FB:0193
cs=0x21fb;eip=0x000196; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x3A))));	// 73698 mov     dx, [bx+3Ah] ;~ 21FB:0196
cs=0x21fb;eip=0x000199; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 73699 mov     bx, word ptr [bp+var_4] ;~ 21FB:0199
cs=0x21fb;eip=0x00019c; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x0A))));	// 73700 add     ax, es:[bx+0Ah] ;~ 21FB:019C
cs=0x21fb;eip=0x0001a0; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x0C))));	// 73701 adc     dx, es:[bx+0Ch] ;~ 21FB:01A0
cs=0x21fb;eip=0x0001a4; 	T(OR(dx, dx));	// 73702 or      dx, dx ;~ 21FB:01A4
cs=0x21fb;eip=0x0001a6; 	R(JG(loc_30745));	// 73703 jg      short loc_30745 ;~ 21FB:01A6
cs=0x21fb;eip=0x0001a8; 	R(JGE(loc_3073d));	// 73704 jge     short loc_3073D ;~ 21FB:01A8
cs=0x21fb;eip=0x0001aa; 	R(JMP(loc_3084b));	// 73705 jmp     loc_3084B ;~ 21FB:01AA
loc_3073d:
	// 9179 
cs=0x21fb;eip=0x0001ad; 	T(CMP(ax, 0x0FA00));	// 73709 cmp     ax, 0FA00h ;~ 21FB:01AD
cs=0x21fb;eip=0x0001b0; 	R(JA(loc_30745));	// 73710 ja      short loc_30745 ;~ 21FB:01B0
cs=0x21fb;eip=0x0001b2; 	R(JMP(loc_3084b));	// 73711 jmp     loc_3084B ;~ 21FB:01B2
loc_30745:
	// 9180 
cs=0x21fb;eip=0x0001b5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 73716 mov     ax, [bp+arg_2] ;~ 21FB:01B5
cs=0x21fb;eip=0x0001b8; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), ax));	// 73717 cmp     [bp+var_A], ax ;~ 21FB:01B8
cs=0x21fb;eip=0x0001bb; 	R(JNZ(loc_30755));	// 73718 jnz     short loc_30755 ;~ 21FB:01BB
cs=0x21fb;eip=0x0001bd; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), di));	// 73719 cmp     [bp+var_E], di ;~ 21FB:01BD
cs=0x21fb;eip=0x0001c0; 	R(JNZ(loc_30755));	// 73720 jnz     short loc_30755 ;~ 21FB:01C0
cs=0x21fb;eip=0x0001c2; 	R(JMP(loc_30818));	// 73721 jmp     loc_30818 ;~ 21FB:01C2
loc_30755:
	// 9181 
cs=0x21fb;eip=0x0001c5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_22))));	// 73726 mov     ax, [bp+var_22] ;~ 21FB:01C5
cs=0x21fb;eip=0x0001c8; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_20))));	// 73727 mov     dx, [bp+var_20] ;~ 21FB:01C8
cs=0x21fb;eip=0x0001cb; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 73728 mov     [bp+var_12], ax ;~ 21FB:01CB
cs=0x21fb;eip=0x0001ce; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), dx));	// 73729 mov     [bp+var_10], dx ;~ 21FB:01CE
cs=0x21fb;eip=0x0001d1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 73730 mov     ax, [bp+arg_2] ;~ 21FB:01D1
cs=0x21fb;eip=0x0001d4; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), ax));	// 73731 cmp     [bp+var_A], ax ;~ 21FB:01D4
cs=0x21fb;eip=0x0001d7; 	R(JGE(loc_30779));	// 73732 jge     short loc_30779 ;~ 21FB:01D7
cs=0x21fb;eip=0x0001d9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 73733 mov     ax, [bp+var_12] ;~ 21FB:01D9
cs=0x21fb;eip=0x0001dc; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 73734 les     bx, [bp+var_4] ;~ 21FB:01DC
cs=0x21fb;eip=0x0001df; 	T(SUB(ax, *(dw*)(raddr(es,bx+6))));	// 73735 sub     ax, es:[bx+6] ;~ 21FB:01DF
cs=0x21fb;eip=0x0001e3; 	T(SBB(dx, *(dw*)(raddr(es,bx+8))));	// 73736 sbb     dx, es:[bx+8] ;~ 21FB:01E3
cs=0x21fb;eip=0x0001e7; 	R(JMP(loc_307a2));	// 73737 jmp     short loc_307A2 ;~ 21FB:01E7
loc_30779:
	// 9182 
cs=0x21fb;eip=0x0001e9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 73741 mov     ax, [bp+arg_2] ;~ 21FB:01E9
cs=0x21fb;eip=0x0001ec; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), ax));	// 73742 cmp     [bp+var_A], ax ;~ 21FB:01EC
cs=0x21fb;eip=0x0001ef; 	R(JNZ(loc_3078b));	// 73743 jnz     short loc_3078B ;~ 21FB:01EF
cs=0x21fb;eip=0x0001f1; 	T(SUB(ax, ax));	// 73744 sub     ax, ax ;~ 21FB:01F1
cs=0x21fb;eip=0x0001f3; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 73745 mov     [bp+var_18], ax ;~ 21FB:01F3
cs=0x21fb;eip=0x0001f6; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), ax));	// 73746 mov     [bp+var_1A], ax ;~ 21FB:01F6
cs=0x21fb;eip=0x0001f9; 	R(JMP(loc_307a8));	// 73747 jmp     short loc_307A8 ;~ 21FB:01F9
loc_3078b:
	// 9183 
cs=0x21fb;eip=0x0001fb; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 73751 les     bx, [bp+var_4] ;~ 21FB:01FB
cs=0x21fb;eip=0x0001fe; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 73752 mov     ax, es:[bx+6] ;~ 21FB:01FE
cs=0x21fb;eip=0x000202; 	T(MOV(dx, *(dw*)(raddr(es,bx+8))));	// 73753 mov     dx, es:[bx+8] ;~ 21FB:0202
cs=0x21fb;eip=0x000206; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_12))));	// 73754 sub     ax, [bp+var_12] ;~ 21FB:0206
cs=0x21fb;eip=0x000209; 	T(SBB(dx, *(dw*)(raddr(ss,bp+var_10))));	// 73755 sbb     dx, [bp+var_10] ;~ 21FB:0209
cs=0x21fb;eip=0x00020c; 	T(SUB(ax, 0));	// 73756 sub     ax, 0 ;~ 21FB:020C
cs=0x21fb;eip=0x00020f; 	T(SBB(dx, 1));	// 73757 sbb     dx, 1 ;~ 21FB:020F
loc_307a2:
	// 9184 
cs=0x21fb;eip=0x000212; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), ax));	// 73760 mov     [bp+var_1A], ax ;~ 21FB:0212
cs=0x21fb;eip=0x000215; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), dx));	// 73761 mov     [bp+var_18], dx ;~ 21FB:0215
loc_307a8:
	// 9185 
cs=0x21fb;eip=0x000218; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), di));	// 73764 cmp     [bp+var_E], di ;~ 21FB:0218
cs=0x21fb;eip=0x00021b; 	R(JGE(loc_307c0));	// 73765 jge     short loc_307C0 ;~ 21FB:021B
cs=0x21fb;eip=0x00021d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 73766 mov     ax, [bp+var_12] ;~ 21FB:021D
cs=0x21fb;eip=0x000220; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_10))));	// 73767 mov     dx, [bp+var_10] ;~ 21FB:0220
cs=0x21fb;eip=0x000223; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 73768 les     bx, [bp+var_4] ;~ 21FB:0223
cs=0x21fb;eip=0x000226; 	T(SUB(ax, *(dw*)(raddr(es,bx+0x0E))));	// 73769 sub     ax, es:[bx+0Eh] ;~ 21FB:0226
cs=0x21fb;eip=0x00022a; 	T(SBB(dx, *(dw*)(raddr(es,bx+0x10))));	// 73770 sbb     dx, es:[bx+10h] ;~ 21FB:022A
cs=0x21fb;eip=0x00022e; 	R(JMP(loc_307dc));	// 73771 jmp     short loc_307DC ;~ 21FB:022E
loc_307c0:
	// 9186 
cs=0x21fb;eip=0x000230; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), di));	// 73775 cmp     [bp+var_E], di ;~ 21FB:0230
cs=0x21fb;eip=0x000233; 	R(JLE(loc_307e2));	// 73776 jle     short loc_307E2 ;~ 21FB:0233
cs=0x21fb;eip=0x000235; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 73777 les     bx, [bp+var_4] ;~ 21FB:0235
cs=0x21fb;eip=0x000238; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E))));	// 73778 mov     ax, es:[bx+0Eh] ;~ 21FB:0238
cs=0x21fb;eip=0x00023c; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x10))));	// 73779 mov     dx, es:[bx+10h] ;~ 21FB:023C
cs=0x21fb;eip=0x000240; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_12))));	// 73780 sub     ax, [bp+var_12] ;~ 21FB:0240
cs=0x21fb;eip=0x000243; 	T(SBB(dx, *(dw*)(raddr(ss,bp+var_10))));	// 73781 sbb     dx, [bp+var_10] ;~ 21FB:0243
cs=0x21fb;eip=0x000246; 	T(SUB(ax, 0));	// 73782 sub     ax, 0 ;~ 21FB:0246
cs=0x21fb;eip=0x000249; 	T(SBB(dx, 1));	// 73783 sbb     dx, 1 ;~ 21FB:0249
loc_307dc:
	// 9187 
cs=0x21fb;eip=0x00024c; 	X(ADD(*(dw*)(raddr(ss,bp+var_1a)), ax));	// 73786 add     [bp+var_1A], ax ;~ 21FB:024C
cs=0x21fb;eip=0x00024f; 	X(ADC(*(dw*)(raddr(ss,bp+var_18)), dx));	// 73787 adc     [bp+var_18], dx ;~ 21FB:024F
loc_307e2:
	// 9188 
cs=0x21fb;eip=0x000252; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 73790 les     bx, [bp+var_4] ;~ 21FB:0252
cs=0x21fb;eip=0x000255; 	T(MOV(bx, *(dw*)(raddr(es,bx))));	// 73791 mov     bx, es:[bx] ;~ 21FB:0255
cs=0x21fb;eip=0x000258; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x38))));	// 73792 mov     ax, [bx+38h] ;~ 21FB:0258
cs=0x21fb;eip=0x00025b; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x3A))));	// 73793 mov     dx, [bx+3Ah] ;~ 21FB:025B
cs=0x21fb;eip=0x00025e; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 73794 mov     bx, word ptr [bp+var_4] ;~ 21FB:025E
cs=0x21fb;eip=0x000261; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x0A))));	// 73795 add     ax, es:[bx+0Ah] ;~ 21FB:0261
cs=0x21fb;eip=0x000265; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x0C))));	// 73796 adc     dx, es:[bx+0Ch] ;~ 21FB:0265
cs=0x21fb;eip=0x000269; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 73797 mov     [bp+var_12], ax ;~ 21FB:0269
cs=0x21fb;eip=0x00026c; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), dx));	// 73798 mov     [bp+var_10], dx ;~ 21FB:026C
cs=0x21fb;eip=0x00026f; 	T(MOV(cl, 2));	// 73799 mov     cl, 2 ;~ 21FB:026F
cs=0x21fb;eip=0x000271; 	R(CALLF(sub_105f6,0));	// 73800 call    sub_105F6 ;~ 21FB:0271
cs=0x21fb;eip=0x000276; 	T(SUB(ax, 0x0E800));	// 73801 sub     ax, 0E800h ;~ 21FB:0276
cs=0x21fb;eip=0x000279; 	T(SBB(dx, 3));	// 73802 sbb     dx, 3 ;~ 21FB:0279
cs=0x21fb;eip=0x00027c; 	T(CMP(dx, *(dw*)(raddr(ss,bp+var_18))));	// 73803 cmp     dx, [bp+var_18] ;~ 21FB:027C
cs=0x21fb;eip=0x00027f; 	R(JG(loc_30818));	// 73804 jg      short loc_30818 ;~ 21FB:027F
cs=0x21fb;eip=0x000281; 	R(JL(loc_3084b));	// 73805 jl      short loc_3084B ;~ 21FB:0281
cs=0x21fb;eip=0x000283; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 73806 cmp     ax, [bp+var_1A] ;~ 21FB:0283
cs=0x21fb;eip=0x000286; 	R(JC(loc_3084b));	// 73807 jb      short loc_3084B ;~ 21FB:0286
loc_30818:
	// 9189 
cs=0x21fb;eip=0x000288; 	T(CMP(*(raddr(ss,bp+var_c)), 0));	// 73811 cmp     [bp+var_C], 0 ;~ 21FB:0288
cs=0x21fb;eip=0x00028c; 	R(JNZ(loc_30836));	// 73812 jnz     short loc_30836 ;~ 21FB:028C
cs=0x21fb;eip=0x00028e; 	X(MOV(*(raddr(ss,bp+var_c)), 1));	// 73813 mov     [bp+var_C], 1 ;~ 21FB:028E
cs=0x21fb;eip=0x000292; 	T(MOV(dx, *(dw*)((&unk_48b8e))));	// 73814 mov     dx, word ptr unk_48B8E ;~ 21FB:0292
cs=0x21fb;eip=0x000296; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 73815 mov     ax, [bp+var_1E] ;~ 21FB:0296
cs=0x21fb;eip=0x000299; 	T(OR(dx, *(dw*)(raddr(ss,bp+var_1c))));	// 73816 or      dx, [bp+var_1C] ;~ 21FB:0299
cs=0x21fb;eip=0x00029c; 	T(MOV(es, dx));	// 73817 mov     es, dx ;~ 21FB:029C
cs=0x21fb;eip=0x00029e; 	T(MOV(bx, ax));	// 73818 mov     bx, ax ;~ 21FB:029E
cs=0x21fb;eip=0x0002a0; 	T(MOV(ax, *(dw*)((&unk_541e8))));	// 73819 mov     ax, word ptr unk_541E8 ;~ 21FB:02A0
cs=0x21fb;eip=0x0002a3; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 73820 mov     es:[bx], ax ;~ 21FB:02A3
loc_30836:
	// 9190 
cs=0x21fb;eip=0x0002a6; 	T(MOV(dx, *(dw*)((&unk_48b8e))));	// 73823 mov     dx, word ptr unk_48B8E ;~ 21FB:02A6
cs=0x21fb;eip=0x0002aa; 	T(MOV(ax, *(dw*)((&unk_541e8))));	// 73824 mov     ax, word ptr unk_541E8 ;~ 21FB:02AA
cs=0x21fb;eip=0x0002ad; 	T(MOV(es, dx));	// 73825 mov     es, dx ;~ 21FB:02AD
cs=0x21fb;eip=0x0002af; 	T(MOV(bx, ax));	// 73826 mov     bx, ax ;~ 21FB:02AF
cs=0x21fb;eip=0x0002b1; 	X(MOV(*(dw*)(raddr(es,bx)), si));	// 73827 mov     es:[bx], si ;~ 21FB:02B1
cs=0x21fb;eip=0x0002b4; 	T(MOV(ax, 2));	// 73828 mov     ax, 2 ;~ 21FB:02B4
cs=0x21fb;eip=0x0002b7; 	X(PUSH(ax));	// 73829 push    ax ;~ 21FB:02B7
cs=0x21fb;eip=0x0002b8; 	R(CALL(sub_308b6,0));	// 73830 call    sub_308B6 ;~ 21FB:02B8
loc_3084b:
	// 9191 
cs=0x21fb;eip=0x0002bb; 	T(MOV(dx, *(dw*)((&unk_47a9a))));	// 73834 mov     dx, word ptr unk_47A9A ;~ 21FB:02BB
cs=0x21fb;eip=0x0002bf; 	T(MOV(ax, si));	// 73835 mov     ax, si ;~ 21FB:02BF
cs=0x21fb;eip=0x0002c1; 	T(MOV(es, dx));	// 73836 mov     es, dx ;~ 21FB:02C1
cs=0x21fb;eip=0x0002c3; 	T(MOV(bx, ax));	// 73838 mov     bx, ax ;~ 21FB:02C3
cs=0x21fb;eip=0x0002c5; 	T(MOV(si, *(dw*)(raddr(es,bx+4))));	// 73839 mov     si, es:[bx+4] ;~ 21FB:02C5
cs=0x21fb;eip=0x0002c9; 	T(OR(si, si));	// 73840 or      si, si ;~ 21FB:02C9
cs=0x21fb;eip=0x0002cb; 	R(JZ(loc_30860));	// 73841 jz      short loc_30860 ;~ 21FB:02CB
cs=0x21fb;eip=0x0002cd; 	R(JMP(loc_30711));	// 73842 jmp     loc_30711 ;~ 21FB:02CD
loc_30860:
	// 9192 
cs=0x21fb;eip=0x0002d0; 	X(INC(*(dw*)(raddr(ss,bp+var_e))));	// 73847 inc     [bp+var_E] ;~ 21FB:02D0
cs=0x21fb;eip=0x0002d3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_24))));	// 73848 mov     ax, [bp+var_24] ;~ 21FB:02D3
cs=0x21fb;eip=0x0002d6; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), ax));	// 73849 cmp     [bp+var_E], ax ;~ 21FB:02D6
cs=0x21fb;eip=0x0002d9; 	R(JG(loc_3086e));	// 73850 jg      short loc_3086E ;~ 21FB:02D9
cs=0x21fb;eip=0x0002db; 	R(JMP(loc_306b5));	// 73851 jmp     loc_306B5 ;~ 21FB:02DB
loc_3086e:
	// 9193 
cs=0x21fb;eip=0x0002de; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), si));	// 73855 mov     [bp+var_14], si ;~ 21FB:02DE
loc_30871:
	// 9194 
cs=0x21fb;eip=0x0002e1; 	X(INC(*(dw*)(raddr(ss,bp+var_a))));	// 73859 inc     [bp+var_A] ;~ 21FB:02E1
cs=0x21fb;eip=0x0002e4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2e))));	// 73860 mov     ax, [bp+var_2E] ;~ 21FB:02E4
cs=0x21fb;eip=0x0002e7; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), ax));	// 73861 cmp     [bp+var_A], ax ;~ 21FB:02E7
cs=0x21fb;eip=0x0002ea; 	R(JG(loc_3087f));	// 73862 jg      short loc_3087F ;~ 21FB:02EA
cs=0x21fb;eip=0x0002ec; 	R(JMP(loc_30672));	// 73863 jmp     loc_30672 ;~ 21FB:02EC
loc_3087f:
	// 9195 
cs=0x21fb;eip=0x0002ef; 	T(CMP(*(raddr(ss,bp+var_c)), 0));	// 73868 cmp     [bp+var_C], 0 ;~ 21FB:02EF
cs=0x21fb;eip=0x0002f3; 	R(JZ(loc_3089e));	// 73869 jz      short loc_3089E ;~ 21FB:02F3
cs=0x21fb;eip=0x0002f5; 	T(MOV(dx, *(dw*)((&unk_48b8e))));	// 73870 mov     dx, word ptr unk_48B8E ;~ 21FB:02F5
cs=0x21fb;eip=0x0002f9; 	T(MOV(ax, *(dw*)((&unk_541e8))));	// 73871 mov     ax, word ptr unk_541E8 ;~ 21FB:02F9
cs=0x21fb;eip=0x0002fc; 	T(MOV(es, dx));	// 73872 mov     es, dx ;~ 21FB:02FC
cs=0x21fb;eip=0x0002fe; 	T(MOV(bx, ax));	// 73874 mov     bx, ax ;~ 21FB:02FE
cs=0x21fb;eip=0x000300; 	X(MOV(*(dw*)(raddr(es,bx)), 0));	// 73875 mov     word ptr es:[bx], 0 ;~ 21FB:0300
cs=0x21fb;eip=0x000305; 	T(MOV(ax, 2));	// 73876 mov     ax, 2 ;~ 21FB:0305
cs=0x21fb;eip=0x000308; 	X(PUSH(ax));	// 73877 push    ax ;~ 21FB:0308
cs=0x21fb;eip=0x000309; 	R(CALL(sub_308b6,0));	// 73878 call    sub_308B6 ;~ 21FB:0309
cs=0x21fb;eip=0x00030c; 	R(JMP(loc_308ae));	// 73879 jmp     short loc_308AE ;~ 21FB:030C
loc_3089e:
	// 9196 
cs=0x21fb;eip=0x00030e; 	T(MOV(dx, *(dw*)((&unk_48b8e))));	// 73883 mov     dx, word ptr unk_48B8E ;~ 21FB:030E
cs=0x21fb;eip=0x000312; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_16))));	// 73884 mov     ax, [bp+var_16] ;~ 21FB:0312
cs=0x21fb;eip=0x000315; 	T(MOV(es, dx));	// 73885 mov     es, dx ;~ 21FB:0315
cs=0x21fb;eip=0x000317; 	T(MOV(bx, ax));	// 73886 mov     bx, ax ;~ 21FB:0317
cs=0x21fb;eip=0x000319; 	X(MOV(*(dw*)(raddr(es,bx)), 0));	// 73887 mov     word ptr es:[bx], 0 ;~ 21FB:0319
loc_308ae:
	// 9197 
cs=0x21fb;eip=0x00031e; 	X(POP(si));	// 73890 pop     si ;~ 21FB:031E
cs=0x21fb;eip=0x00031f; 	X(POP(di));	// 73891 pop     di ;~ 21FB:031F
cs=0x21fb;eip=0x000320; 	T(MOV(sp, bp));	// 73892 mov     sp, bp ;~ 21FB:0320
cs=0x21fb;eip=0x000322; 	X(POP(bp));	// 73893 pop     bp ;~ 21FB:0322
cs=0x21fb;eip=0x000323; 	R(RETN(4));	// 73894 retn    4 ;~ 21FB:0323
sub_308b6:
	// 73902 
#undef arg_0
#define arg_0 4
	// 73905 arg_0           = word ptr  4 ;~ 21FB:0326
cs=0x21fb;eip=0x000326; 	X(PUSH(bp));	// 73907 push    bp ;~ 21FB:0326
cs=0x21fb;eip=0x000327; 	T(MOV(bp, sp));	// 73908 mov     bp, sp ;~ 21FB:0327
cs=0x21fb;eip=0x000329; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 73909 mov     ax, [bp+arg_0] ;~ 21FB:0329
cs=0x21fb;eip=0x00032c; 	X(ADD(*(dw*)((&unk_541e8)), ax));	// 73910 add     word ptr unk_541E8, ax ;~ 21FB:032C
cs=0x21fb;eip=0x000330; 	T(CMP(*(dw*)((&unk_541e8)), 0x1388));	// 73911 cmp     word ptr unk_541E8, 1388h ;~ 21FB:0330
cs=0x21fb;eip=0x000336; 	R(JC(loc_308cd));	// 73912 jb      short loc_308CD ;~ 21FB:0336
cs=0x21fb;eip=0x000338; 	R(CALLF(sub_315c9,0));	// 73913 call    sub_315C9 ;~ 21FB:0338
loc_308cd:
	// 9198 
cs=0x21fb;eip=0x00033d; 	X(POP(bp));	// 73917 pop     bp ;~ 21FB:033D
cs=0x21fb;eip=0x00033e; 	R(RETN(2));	// 73918 retn    2 ;~ 21FB:033E
sub_308d1:
	// 73926 
#undef var_22
#define var_22 -0x22
	// 73928 var_22          = word ptr -22h ;~ 21FB:0341
#undef var_1e
#define var_1e -0x1E
	// 73929 var_1E          = word ptr -1Eh ;~ 21FB:0341
#undef var_1c
#define var_1c -0x1C
	// 73930 var_1C          = word ptr -1Ch ;~ 21FB:0341
#undef var_1a
#define var_1a -0x1A
	// 73931 var_1A          = word ptr -1Ah ;~ 21FB:0341
#undef var_18
#define var_18 -0x18
	// 73932 var_18          = word ptr -18h ;~ 21FB:0341
#undef var_14
#define var_14 -0x14
	// 73933 var_14          = word ptr -14h ;~ 21FB:0341
#undef var_12
#define var_12 -0x12
	// 73934 var_12          = word ptr -12h ;~ 21FB:0341
#undef var_10
#define var_10 -0x10
	// 73935 var_10          = word ptr -10h ;~ 21FB:0341
#undef var_e
#define var_e -0x0E
	// 73936 var_E           = word ptr -0Eh ;~ 21FB:0341
#undef var_4
#define var_4 -4
	// 73937 var_4           = dword ptr -4 ;~ 21FB:0341
#undef arg_0
#define arg_0 6
	// 73938 arg_0           = word ptr  6 ;~ 21FB:0341
#undef arg_2
#define arg_2 8
	// 73939 arg_2           = word ptr  8 ;~ 21FB:0341
#undef arg_4
#define arg_4 0x0A
	// 73940 arg_4           = word ptr  0Ah ;~ 21FB:0341
#undef arg_6
#define arg_6 0x0C
	// 73941 arg_6           = word ptr  0Ch ;~ 21FB:0341
cs=0x21fb;eip=0x000341; 	X(PUSH(bp));	// 73943 push    bp ;~ 21FB:0341
cs=0x21fb;eip=0x000342; 	T(MOV(bp, sp));	// 73944 mov     bp, sp ;~ 21FB:0342
cs=0x21fb;eip=0x000344; 	T(SUB(sp, 0x22));	// 73945 sub     sp, 22h ;~ 21FB:0344
cs=0x21fb;eip=0x000347; 	X(PUSH(di));	// 73946 push    di ;~ 21FB:0347
cs=0x21fb;eip=0x000348; 	X(PUSH(si));	// 73947 push    si ;~ 21FB:0348
cs=0x21fb;eip=0x000349; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 73948 mov     ax, [bp+arg_4] ;~ 21FB:0349
cs=0x21fb;eip=0x00034c; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 73949 mov     dx, [bp+arg_6] ;~ 21FB:034C
cs=0x21fb;eip=0x00034f; 	T(MOV(cl, 0x18));	// 73950 mov     cl, 18h ;~ 21FB:034F
cs=0x21fb;eip=0x000351; 	R(CALLF(sub_10240,0));	// 73951 call    sub_10240 ;~ 21FB:0351
cs=0x21fb;eip=0x000356; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), ax));	// 73952 mov     [bp+var_1C], ax ;~ 21FB:0356
cs=0x21fb;eip=0x000359; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 73953 mov     ax, [bp+arg_0] ;~ 21FB:0359
cs=0x21fb;eip=0x00035c; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 73954 mov     dx, [bp+arg_2] ;~ 21FB:035C
cs=0x21fb;eip=0x00035f; 	T(MOV(cl, 0x18));	// 73955 mov     cl, 18h ;~ 21FB:035F
cs=0x21fb;eip=0x000361; 	R(CALLF(sub_10240,0));	// 73956 call    sub_10240 ;~ 21FB:0361
cs=0x21fb;eip=0x000366; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 73957 mov     [bp+var_1E], ax ;~ 21FB:0366
cs=0x21fb;eip=0x000369; 	T(CMP(*(dw*)(raddr(ss,bp+var_1c)), 0));	// 73958 cmp     [bp+var_1C], 0 ;~ 21FB:0369
cs=0x21fb;eip=0x00036d; 	R(JL(loc_30915));	// 73959 jl      short loc_30915 ;~ 21FB:036D
cs=0x21fb;eip=0x00036f; 	T(MOV(ax, *(dw*)((&unk_47a94))));	// 73960 mov     ax, word ptr unk_47A94 ;~ 21FB:036F
cs=0x21fb;eip=0x000372; 	T(CMP(*(dw*)(raddr(ss,bp+var_1c)), ax));	// 73961 cmp     [bp+var_1C], ax ;~ 21FB:0372
cs=0x21fb;eip=0x000375; 	R(JGE(loc_30915));	// 73962 jge     short loc_30915 ;~ 21FB:0375
cs=0x21fb;eip=0x000377; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 73963 cmp     [bp+var_1E], 0 ;~ 21FB:0377
cs=0x21fb;eip=0x00037b; 	R(JL(loc_30915));	// 73964 jl      short loc_30915 ;~ 21FB:037B
cs=0x21fb;eip=0x00037d; 	T(MOV(ax, *(dw*)((&unk_47a96))));	// 73965 mov     ax, word ptr unk_47A96 ;~ 21FB:037D
cs=0x21fb;eip=0x000380; 	T(CMP(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 73966 cmp     [bp+var_1E], ax ;~ 21FB:0380
cs=0x21fb;eip=0x000383; 	R(JL(loc_3091a));	// 73967 jl      short loc_3091A ;~ 21FB:0383
loc_30915:
	// 9199 
cs=0x21fb;eip=0x000385; 	T(SUB(ax, ax));	// 73971 sub     ax, ax ;~ 21FB:0385
cs=0x21fb;eip=0x000387; 	R(JMP(loc_30a08));	// 73972 jmp     loc_30A08 ;~ 21FB:0387
loc_3091a:
	// 9200 
cs=0x21fb;eip=0x00038a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 73976 mov     ax, [bp+var_1E] ;~ 21FB:038A
cs=0x21fb;eip=0x00038d; 	X(IMUL1_2(*(dw*)((&unk_47a94))));	// 73977 imul    word ptr unk_47A94 ;~ 21FB:038D
cs=0x21fb;eip=0x000391; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 73978 add     ax, [bp+var_1C] ;~ 21FB:0391
cs=0x21fb;eip=0x000394; 	T(SHL(ax, 1));	// 73979 shl     ax, 1 ;~ 21FB:0394
cs=0x21fb;eip=0x000396; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 73980 mov     [bp+var_12], ax ;~ 21FB:0396
cs=0x21fb;eip=0x000399; 	T(MOV(dx, *(dw*)((&unk_48b8e))));	// 73981 mov     dx, word ptr unk_48B8E ;~ 21FB:0399
cs=0x21fb;eip=0x00039d; 	T(MOV(es, dx));	// 73982 mov     es, dx ;~ 21FB:039D
cs=0x21fb;eip=0x00039f; 	T(MOV(bx, ax));	// 73983 mov     bx, ax ;~ 21FB:039F
cs=0x21fb;eip=0x0003a1; 	T(CMP(*(dw*)(raddr(es,bx)), 0));	// 73984 cmp     word ptr es:[bx], 0 ;~ 21FB:03A1
cs=0x21fb;eip=0x0003a5; 	R(JZ(loc_30915));	// 73985 jz      short loc_30915 ;~ 21FB:03A5
cs=0x21fb;eip=0x0003a7; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), 0));	// 73986 mov     [bp+var_14], 0 ;~ 21FB:03A7
cs=0x21fb;eip=0x0003ac; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 73987 mov     ax, es:[bx] ;~ 21FB:03AC
cs=0x21fb;eip=0x0003af; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 73988 mov     [bp+var_12], ax ;~ 21FB:03AF
cs=0x21fb;eip=0x0003b2; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_e))));	// 73989 mov     di, [bp+var_E] ;~ 21FB:03B2
cs=0x21fb;eip=0x0003b5; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_22))));	// 73990 mov     si, [bp+var_22] ;~ 21FB:03B5
cs=0x21fb;eip=0x0003b8; 	R(JMP(loc_3096b));	// 73991 jmp     short loc_3096B ;~ 21FB:03B8
loc_3094a:
	// 9201 
cs=0x21fb;eip=0x0003ba; 	T(MOV(di, si));	// 73996 mov     di, si ;~ 21FB:03BA
cs=0x21fb;eip=0x0003bc; 	T(MOV(ax, 4));	// 73997 mov     ax, 4 ;~ 21FB:03BC
cs=0x21fb;eip=0x0003bf; 	T(CWD);	// 73998 cwd ;~ 21FB:03BF
cs=0x21fb;eip=0x0003c0; 	X(PUSH(dx));	// 73999 push    dx ;~ 21FB:03C0
cs=0x21fb;eip=0x0003c1; 	X(PUSH(ax));	// 74000 push    ax ;~ 21FB:03C1
cs=0x21fb;eip=0x0003c2; 	X(PUSH(*(dw*)(raddr(ss,bp+var_18))));	// 74001 push    [bp+var_18] ;~ 21FB:03C2
cs=0x21fb;eip=0x0003c5; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 74002 push    [bp+var_1A] ;~ 21FB:03C5
cs=0x21fb;eip=0x0003c8; 	R(CALLF(sub_10526,0));	// 74003 call    sub_10526 ;~ 21FB:03C8
cs=0x21fb;eip=0x0003cd; 	T(SUB(di, ax));	// 74004 sub     di, ax ;~ 21FB:03CD
cs=0x21fb;eip=0x0003cf; 	T(CMP(di, *(dw*)(raddr(ss,bp+var_14))));	// 74005 cmp     di, [bp+var_14] ;~ 21FB:03CF
cs=0x21fb;eip=0x0003d2; 	R(JLE(loc_30967));	// 74006 jle     short loc_30967 ;~ 21FB:03D2
cs=0x21fb;eip=0x0003d4; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), di));	// 74007 mov     [bp+var_14], di ;~ 21FB:03D4
loc_30967:
	// 9202 
cs=0x21fb;eip=0x0003d7; 	X(ADD(*(dw*)(raddr(ss,bp+var_12)), 2));	// 74011 add     [bp+var_12], 2 ;~ 21FB:03D7
loc_3096b:
	// 9203 
cs=0x21fb;eip=0x0003db; 	T(MOV(dx, *(dw*)((&unk_48b8e))));	// 74014 mov     dx, word ptr unk_48B8E ;~ 21FB:03DB
cs=0x21fb;eip=0x0003df; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 74015 mov     ax, [bp+var_12] ;~ 21FB:03DF
cs=0x21fb;eip=0x0003e2; 	T(MOV(es, dx));	// 74016 mov     es, dx ;~ 21FB:03E2
cs=0x21fb;eip=0x0003e4; 	T(MOV(bx, ax));	// 74017 mov     bx, ax ;~ 21FB:03E4
cs=0x21fb;eip=0x0003e6; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 74018 mov     ax, es:[bx] ;~ 21FB:03E6
cs=0x21fb;eip=0x0003e9; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 74019 mov     [bp+var_10], ax ;~ 21FB:03E9
cs=0x21fb;eip=0x0003ec; 	T(OR(ax, ax));	// 74020 or      ax, ax ;~ 21FB:03EC
cs=0x21fb;eip=0x0003ee; 	R(JZ(loc_309ff));	// 74021 jz      short loc_309FF ;~ 21FB:03EE
cs=0x21fb;eip=0x0003f0; 	T(MOV(dx, *(dw*)((&unk_47a9a))));	// 74022 mov     dx, word ptr unk_47A9A ;~ 21FB:03F0
cs=0x21fb;eip=0x0003f4; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 74023 mov     word ptr [bp+var_4], ax ;~ 21FB:03F4
cs=0x21fb;eip=0x0003f7; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 74024 mov     word ptr [bp+var_4+2], dx ;~ 21FB:03F7
cs=0x21fb;eip=0x0003fa; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 74025 les     bx, [bp+var_4] ;~ 21FB:03FA
cs=0x21fb;eip=0x0003fd; 	T(MOV(bx, *(dw*)(raddr(es,bx))));	// 74026 mov     bx, es:[bx] ;~ 21FB:03FD
cs=0x21fb;eip=0x000400; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x38))));	// 74027 mov     ax, [bx+38h] ;~ 21FB:0400
cs=0x21fb;eip=0x000403; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x3A))));	// 74028 mov     dx, [bx+3Ah] ;~ 21FB:0403
cs=0x21fb;eip=0x000406; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 74029 mov     bx, word ptr [bp+var_4] ;~ 21FB:0406
cs=0x21fb;eip=0x000409; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x0A))));	// 74030 add     ax, es:[bx+0Ah] ;~ 21FB:0409
cs=0x21fb;eip=0x00040d; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x0C))));	// 74031 adc     dx, es:[bx+0Ch] ;~ 21FB:040D
cs=0x21fb;eip=0x000411; 	T(MOV(cl, 8));	// 74032 mov     cl, 8 ;~ 21FB:0411
cs=0x21fb;eip=0x000413; 	R(CALLF(sub_10240,0));	// 74033 call    sub_10240 ;~ 21FB:0413
cs=0x21fb;eip=0x000418; 	T(MOV(si, ax));	// 74034 mov     si, ax ;~ 21FB:0418
cs=0x21fb;eip=0x00041a; 	T(CMP(si, *(dw*)(raddr(ss,bp+var_14))));	// 74035 cmp     si, [bp+var_14] ;~ 21FB:041A
cs=0x21fb;eip=0x00041d; 	R(JLE(loc_30967));	// 74036 jle     short loc_30967 ;~ 21FB:041D
cs=0x21fb;eip=0x00041f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 74037 push    [bp+arg_6] ;~ 21FB:041F
cs=0x21fb;eip=0x000422; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 74038 push    [bp+arg_4] ;~ 21FB:0422
cs=0x21fb;eip=0x000425; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 74039 push    [bp+arg_2] ;~ 21FB:0425
cs=0x21fb;eip=0x000428; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 74040 push    [bp+arg_0] ;~ 21FB:0428
cs=0x21fb;eip=0x00042b; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 74041 les     bx, [bp+var_4] ;~ 21FB:042B
cs=0x21fb;eip=0x00042e; 	X(PUSH(*(dw*)(raddr(es,bx+8))));	// 74042 push    word ptr es:[bx+8] ;~ 21FB:042E
cs=0x21fb;eip=0x000432; 	X(PUSH(*(dw*)(raddr(es,bx+6))));	// 74043 push    word ptr es:[bx+6] ;~ 21FB:0432
cs=0x21fb;eip=0x000436; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 74044 push    word ptr es:[bx+10h] ;~ 21FB:0436
cs=0x21fb;eip=0x00043a; 	X(PUSH(*(dw*)(raddr(es,bx+0x0E))));	// 74045 push    word ptr es:[bx+0Eh] ;~ 21FB:043A
cs=0x21fb;eip=0x00043e; 	R(CALLF(sub_1a264,0));	// 74046 call    sub_1A264 ;~ 21FB:043E
cs=0x21fb;eip=0x000443; 	T(MOV(cl, 8));	// 74047 mov     cl, 8 ;~ 21FB:0443
cs=0x21fb;eip=0x000445; 	R(CALLF(sub_10240,0));	// 74048 call    sub_10240 ;~ 21FB:0445
cs=0x21fb;eip=0x00044a; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), ax));	// 74049 mov     [bp+var_1A], ax ;~ 21FB:044A
cs=0x21fb;eip=0x00044d; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), dx));	// 74050 mov     [bp+var_18], dx ;~ 21FB:044D
cs=0x21fb;eip=0x000450; 	T(MOV(ax, si));	// 74051 mov     ax, si ;~ 21FB:0450
cs=0x21fb;eip=0x000452; 	T(SHL(ax, 1));	// 74052 shl     ax, 1 ;~ 21FB:0452
cs=0x21fb;eip=0x000454; 	T(SHL(ax, 1));	// 74053 shl     ax, 1 ;~ 21FB:0454
cs=0x21fb;eip=0x000456; 	T(CWD);	// 74054 cwd ;~ 21FB:0456
cs=0x21fb;eip=0x000457; 	T(CMP(dx, *(dw*)(raddr(ss,bp+var_18))));	// 74055 cmp     dx, [bp+var_18] ;~ 21FB:0457
cs=0x21fb;eip=0x00045a; 	R(JLE(loc_309ef));	// 74056 jle     short loc_309EF ;~ 21FB:045A
cs=0x21fb;eip=0x00045c; 	R(JMP(loc_3094a));	// 74057 jmp     loc_3094A ;~ 21FB:045C
loc_309ef:
	// 9204 
cs=0x21fb;eip=0x00045f; 	R(JGE(loc_309f4));	// 74061 jge     short loc_309F4 ;~ 21FB:045F
cs=0x21fb;eip=0x000461; 	R(JMP(loc_30967));	// 74062 jmp     loc_30967 ;~ 21FB:0461
loc_309f4:
	// 9205 
cs=0x21fb;eip=0x000464; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 74066 cmp     ax, [bp+var_1A] ;~ 21FB:0464
cs=0x21fb;eip=0x000467; 	R(JBE(loc_309fc));	// 74067 jbe     short loc_309FC ;~ 21FB:0467
cs=0x21fb;eip=0x000469; 	R(JMP(loc_3094a));	// 74068 jmp     loc_3094A ;~ 21FB:0469
loc_309fc:
	// 9206 
cs=0x21fb;eip=0x00046c; 	R(JMP(loc_30967));	// 74072 jmp     loc_30967 ;~ 21FB:046C
loc_309ff:
	// 9207 
cs=0x21fb;eip=0x00046f; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), di));	// 74076 mov     [bp+var_E], di ;~ 21FB:046F
cs=0x21fb;eip=0x000472; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), si));	// 74077 mov     [bp+var_22], si ;~ 21FB:0472
cs=0x21fb;eip=0x000475; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 74078 mov     ax, [bp+var_14] ;~ 21FB:0475
loc_30a08:
	// 9208 
cs=0x21fb;eip=0x000478; 	X(POP(si));	// 74081 pop     si ;~ 21FB:0478
cs=0x21fb;eip=0x000479; 	X(POP(di));	// 74082 pop     di ;~ 21FB:0479
cs=0x21fb;eip=0x00047a; 	T(MOV(sp, bp));	// 74083 mov     sp, bp ;~ 21FB:047A
cs=0x21fb;eip=0x00047c; 	X(POP(bp));	// 74084 pop     bp ;~ 21FB:047C
cs=0x21fb;eip=0x00047d; 	R(RETF(8));	// 74085 retf    8 ;~ 21FB:047D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_305b9: 	goto loc_305b9;
        case m2c::kloc_305d0: 	goto loc_305d0;
        case m2c::kloc_305d6: 	goto loc_305d6;
        case m2c::kloc_305dd: 	goto loc_305dd;
        case m2c::kloc_305e7: 	goto loc_305e7;
        case m2c::kloc_305fd: 	goto loc_305fd;
        case m2c::kloc_30641: 	goto loc_30641;
        case m2c::kloc_30672: 	goto loc_30672;
        case m2c::kloc_3067b: 	goto loc_3067b;
        case m2c::kloc_30686: 	goto loc_30686;
        case m2c::kloc_30694: 	goto loc_30694;
        case m2c::kloc_306b5: 	goto loc_306b5;
        case m2c::kloc_306be: 	goto loc_306be;
        case m2c::kloc_306c9: 	goto loc_306c9;
        case m2c::kloc_306f6: 	goto loc_306f6;
        case m2c::kloc_30711: 	goto loc_30711;
        case m2c::kloc_3073d: 	goto loc_3073d;
        case m2c::kloc_30745: 	goto loc_30745;
        case m2c::kloc_30755: 	goto loc_30755;
        case m2c::kloc_30779: 	goto loc_30779;
        case m2c::kloc_3078b: 	goto loc_3078b;
        case m2c::kloc_307a2: 	goto loc_307a2;
        case m2c::kloc_307a8: 	goto loc_307a8;
        case m2c::kloc_307c0: 	goto loc_307c0;
        case m2c::kloc_307dc: 	goto loc_307dc;
        case m2c::kloc_307e2: 	goto loc_307e2;
        case m2c::kloc_30818: 	goto loc_30818;
        case m2c::kloc_30836: 	goto loc_30836;
        case m2c::kloc_3084b: 	goto loc_3084b;
        case m2c::kloc_30860: 	goto loc_30860;
        case m2c::kloc_3086e: 	goto loc_3086e;
        case m2c::kloc_30871: 	goto loc_30871;
        case m2c::kloc_3087f: 	goto loc_3087f;
        case m2c::kloc_3089e: 	goto loc_3089e;
        case m2c::kloc_308ae: 	goto loc_308ae;
        case m2c::kloc_308cd: 	goto loc_308cd;
        case m2c::kloc_30915: 	goto loc_30915;
        case m2c::kloc_3091a: 	goto loc_3091a;
        case m2c::kloc_3094a: 	goto loc_3094a;
        case m2c::kloc_30967: 	goto loc_30967;
        case m2c::kloc_3096b: 	goto loc_3096b;
        case m2c::kloc_309ef: 	goto loc_309ef;
        case m2c::kloc_309f4: 	goto loc_309f4;
        case m2c::kloc_309fc: 	goto loc_309fc;
        case m2c::kloc_309ff: 	goto loc_309ff;
        case m2c::kloc_30a08: 	goto loc_30a08;
        case m2c::ksub_3059c: 	goto sub_3059c;
        case m2c::ksub_30603: 	goto sub_30603;
        case m2c::ksub_30613: 	goto sub_30613;
        case m2c::ksub_308b6: 	goto sub_308b6;
        case m2c::ksub_308d1: 	goto sub_308d1;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, _source);m2c::stackDump(_state); abort();
    };
}

