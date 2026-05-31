/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool read_line(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    read_line:
    _begin:
#undef var_a
#define var_a -0x0A
	// 88526 var_A           = word ptr -0Ah ;~ 2BED:0006
#undef var_8
#define var_8 -8
	// 88527 var_8           = word ptr -8 ;~ 2BED:0006
#undef var_6
#define var_6 -6
	// 88528 var_6           = word ptr -6 ;~ 2BED:0006
#undef var_4
#define var_4 -4
	// 88529 var_4           = word ptr -4 ;~ 2BED:0006
#undef var_2
#define var_2 -2
	// 88530 var_2           = word ptr -2 ;~ 2BED:0006
#undef arg_0
#define arg_0 6
	// 88531 arg_0           = byte ptr  6 ;~ 2BED:0006
#undef arg_2
#define arg_2 8
	// 88532 arg_2           = dword ptr  8 ;~ 2BED:0006
#undef arg_6
#define arg_6 0x0C
	// 88533 arg_6           = word ptr  0Ch ;~ 2BED:0006
#undef arg_8
#define arg_8 0x0E
	// 88534 arg_8           = word ptr  0Eh ;~ 2BED:0006
#undef arg_a
#define arg_a 0x10
	// 88535 arg_A           = word ptr  10h ;~ 2BED:0006
#undef arg_c
#define arg_c 0x12
	// 88536 arg_C           = word ptr  12h ;~ 2BED:0006
#undef arg_e
#define arg_e 0x14
	// 88537 arg_E           = dword ptr  14h ;~ 2BED:0006
#undef arg_12
#define arg_12 0x18
	// 88538 arg_12          = word ptr  18h ;~ 2BED:0006
#undef arg_14
#define arg_14 0x1A
	// 88539 arg_14          = word ptr  1Ah ;~ 2BED:0006
cs=0x2bed;eip=0x000006; 	X(PUSH(bp));	// 88541 push    bp ;~ 2BED:0006
cs=0x2bed;eip=0x000007; 	T(MOV(bp, sp));	// 88542 mov     bp, sp ;~ 2BED:0007
cs=0x2bed;eip=0x000009; 	T(SUB(sp, 0x0A));	// 88543 sub     sp, 0Ah ;~ 2BED:0009
cs=0x2bed;eip=0x00000c; 	X(PUSH(si));	// 88544 push    si ;~ 2BED:000C
cs=0x2bed;eip=0x00000d; 	J(CALLF(sprite_copy_2_to_1,0));	// 88545 call    sprite_copy_2_to_1 ;~ 2BED:000D
cs=0x2bed;eip=0x000012; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 88546 mov     ax, [bp+arg_A] ;~ 2BED:0012
cs=0x2bed;eip=0x000015; 	X(MOV(word_42a18, ax));	// 88547 mov     word_42A18, ax ;~ 2BED:0015
cs=0x2bed;eip=0x000018; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_c))));	// 88548 mov     ax, [bp+arg_C] ;~ 2BED:0018
cs=0x2bed;eip=0x00001b; 	X(MOV(word_42a1a, ax));	// 88549 mov     word_42A1A, ax ;~ 2BED:001B
cs=0x2bed;eip=0x00001e; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 88550 mov     ax, word ptr [bp+arg_2] ;~ 2BED:001E
cs=0x2bed;eip=0x000021; 	X(MOV(off_42a1e, ax));	// 88551 mov     off_42A1E, ax ;~ 2BED:0021
cs=0x2bed;eip=0x000024; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 88552 mov     ax, [bp+arg_8] ;~ 2BED:0024
cs=0x2bed;eip=0x000027; 	X(MOV(word_42a20, ax));	// 88553 mov     word_42A20, ax ;~ 2BED:0027
cs=0x2bed;eip=0x00002a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 88554 mov     bx, [bp+arg_6] ;~ 2BED:002A
cs=0x2bed;eip=0x00002d; 	T(MOV(si, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 88555 mov     si, word ptr [bp+arg_2] ;~ 2BED:002D
cs=0x2bed;eip=0x000030; 	X(MOV(*(raddr(ds,bx+si)), 0));	// 88556 mov     byte ptr [bx+si], 0 ;~ 2BED:0030
cs=0x2bed;eip=0x000033; 	T(TEST(*(raddr(ss,bp+arg_0)), 1));	// 88557 test    [bp+arg_0], 1 ;~ 2BED:0033
cs=0x2bed;eip=0x000037; 	J(JZ(loc_3a4ee));	// 88558 jz      short loc_3A4EE ;~ 2BED:0037
cs=0x2bed;eip=0x000039; 	T(MOV(bx, si));	// 88559 mov     bx, si ;~ 2BED:0039
cs=0x2bed;eip=0x00003b; 	X(MOV(*(raddr(ds,bx)), 0));	// 88560 mov     byte ptr [bx], 0 ;~ 2BED:003B
loc_3a4ee:
	// 9851 
cs=0x2bed;eip=0x00003e; 	T(TEST(*(raddr(ss,bp+arg_0)), 2));	// 88563 test    [bp+arg_0], 2 ;~ 2BED:003E
cs=0x2bed;eip=0x000042; 	J(JZ(loc_3a4fc));	// 88564 jz      short loc_3A4FC ;~ 2BED:0042
cs=0x2bed;eip=0x000044; 	X(MOV(word_42a22, 0));	// 88565 mov     word_42A22, 0 ;~ 2BED:0044
cs=0x2bed;eip=0x00004a; 	J(JMP(loc_3a50a));	// 88566 jmp     short loc_3A50A ;~ 2BED:004A
loc_3a4fc:
	// 9852 
cs=0x2bed;eip=0x00004c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 88570 push    word ptr [bp+arg_2] ; char * ;~ 2BED:004C
cs=0x2bed;eip=0x00004f; 	J(CALLF(_strlen,0));	// 88571 call    _strlen ;~ 2BED:004F
cs=0x2bed;eip=0x000054; 	T(ADD(sp, 2));	// 88572 add     sp, 2 ;~ 2BED:0054
cs=0x2bed;eip=0x000057; 	X(MOV(word_42a22, ax));	// 88573 mov     word_42A22, ax ;~ 2BED:0057
loc_3a50a:
	// 9853 
cs=0x2bed;eip=0x00005a; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 88576 push    word ptr [bp+arg_2] ; char * ;~ 2BED:005A
cs=0x2bed;eip=0x00005d; 	J(CALLF(_strlen,0));	// 88577 call    _strlen ;~ 2BED:005D
cs=0x2bed;eip=0x000062; 	T(ADD(sp, 2));	// 88578 add     sp, 2 ;~ 2BED:0062
cs=0x2bed;eip=0x000065; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 88579 mov     [bp+var_6], ax ;~ 2BED:0065
cs=0x2bed;eip=0x000068; 	J(JMP(loc_3a526));	// 88580 jmp     short loc_3A526 ;~ 2BED:0068
loc_3a51a:
	// 9854 
cs=0x2bed;eip=0x00006a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_6))));	// 88584 mov     bx, [bp+var_6] ;~ 2BED:006A
cs=0x2bed;eip=0x00006d; 	X(INC(*(dw*)(raddr(ss,bp+var_6))));	// 88585 inc     [bp+var_6] ;~ 2BED:006D
cs=0x2bed;eip=0x000070; 	T(MOV(si, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 88586 mov     si, word ptr [bp+arg_2] ;~ 2BED:0070
cs=0x2bed;eip=0x000073; 	X(MOV(*(raddr(ds,bx+si)), 0x20));	// 88587 mov     byte ptr [bx+si], 20h ; ' ' ;~ 2BED:0073
loc_3a526:
	// 9855 
cs=0x2bed;eip=0x000076; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 88590 mov     ax, [bp+arg_6] ;~ 2BED:0076
cs=0x2bed;eip=0x000079; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), ax));	// 88591 cmp     [bp+var_6], ax ;~ 2BED:0079
cs=0x2bed;eip=0x00007c; 	J(JL(loc_3a51a));	// 88592 jl      short loc_3A51A ;~ 2BED:007C
cs=0x2bed;eip=0x00007e; 	X(PUSH(cs));	// 88593 push    cs ;~ 2BED:007E
cs=0x2bed;eip=0x00007f; 	J(CALL(read_line_helper2,0));	// 88594 call    near ptr read_line_helper2 ;~ 2BED:007F
cs=0x2bed;eip=0x000082; 	X(MOV(word_42a16, 1));	// 88595 mov     word_42A16, 1 ;~ 2BED:0082
cs=0x2bed;eip=0x000088; 	X(MOV(word_42a1c, 1));	// 88596 mov     word_42A1C, 1 ;~ 2BED:0088
cs=0x2bed;eip=0x00008e; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0));	// 88597 mov     [bp+var_A], 0 ;~ 2BED:008E
cs=0x2bed;eip=0x000093; 	X(PUSH(cs));	// 88598 push    cs ;~ 2BED:0093
cs=0x2bed;eip=0x000094; 	J(CALL(read_line_helper,0));	// 88599 call    near ptr read_line_helper ;~ 2BED:0094
cs=0x2bed;eip=0x000097; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_14))));	// 88600 push    [bp+arg_14] ;~ 2BED:0097
cs=0x2bed;eip=0x00009a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_12))));	// 88601 push    [bp+arg_12] ;~ 2BED:009A
cs=0x2bed;eip=0x00009d; 	J(CALLF(timer_copy_counter,0));	// 88602 call    timer_copy_counter ; Stores a copy of the timer counter with the given ticks added. ;~ 2BED:009D
cs=0x2bed;eip=0x0000a2; 	T(ADD(sp, 4));	// 88603 add     sp, 4 ;~ 2BED:00A2
cs=0x2bed;eip=0x0000a5; 	T(MOV(ax, 4));	// 88604 mov     ax, 4 ;~ 2BED:00A5
cs=0x2bed;eip=0x0000a8; 	T(CWD);	// 88605 cwd ;~ 2BED:00A8
cs=0x2bed;eip=0x0000a9; 	X(PUSH(dx));	// 88606 push    dx ;~ 2BED:00A9
cs=0x2bed;eip=0x0000aa; 	X(PUSH(ax));	// 88607 push    ax ;~ 2BED:00AA
cs=0x2bed;eip=0x0000ab; 	J(CALLF(set_add_value,0));	// 88608 call    set_add_value ;~ 2BED:00AB
cs=0x2bed;eip=0x0000b0; 	T(ADD(sp, 4));	// 88609 add     sp, 4 ;~ 2BED:00B0
cs=0x2bed;eip=0x0000b3; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 1));	// 88610 mov     [bp+var_2], 1 ;~ 2BED:00B3
loc_3a568:
	// 9856 
cs=0x2bed;eip=0x0000b8; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+arg_2+2))), 0));	// 88614 cmp     word ptr [bp+arg_2+2], 0 ;~ 2BED:00B8
cs=0x2bed;eip=0x0000bc; 	J(JZ(loc_3a57f));	// 88615 jz      short loc_3A57F ;~ 2BED:00BC
cs=0x2bed;eip=0x0000be; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 88616 mov     ax, word ptr [bp+arg_2+2] ;~ 2BED:00BE
cs=0x2bed;eip=0x0000c1; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 88617 mov     [bp+var_8], ax ;~ 2BED:00C1
cs=0x2bed;eip=0x0000c4; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+arg_2+2))), 0));	// 88618 mov     word ptr [bp+arg_2+2], 0 ;~ 2BED:00C4
cs=0x2bed;eip=0x0000c9; 	J(JMP(loc_3a599));	// 88619 jmp     short loc_3A599 ;~ 2BED:00C9
loc_3a57c:
	// 9857 
cs=0x2bed;eip=0x0000cc; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+arg_e))));	// 88624 call    [bp+arg_E] ;~ 2BED:00CC
loc_3a57f:
	// 9858 
cs=0x2bed;eip=0x0000cf; 	J(CALLF(kb_call_readchar_callback,0));	// 88627 call    kb_call_readchar_callback ;~ 2BED:00CF
cs=0x2bed;eip=0x0000d4; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 88628 mov     [bp+var_8], ax ;~ 2BED:00D4
cs=0x2bed;eip=0x0000d7; 	T(OR(ax, ax));	// 88629 or      ax, ax ;~ 2BED:00D7
cs=0x2bed;eip=0x0000d9; 	J(JNZ(loc_3a599));	// 88630 jnz     short loc_3A599 ;~ 2BED:00D9
cs=0x2bed;eip=0x0000db; 	J(CALLF(sub_2eb07,0));	// 88631 call    sub_2EB07 ;~ 2BED:00DB
cs=0x2bed;eip=0x0000e0; 	T(OR(ax, ax));	// 88632 or      ax, ax ;~ 2BED:00E0
cs=0x2bed;eip=0x0000e2; 	J(JZ(loc_3a57c));	// 88633 jz      short loc_3A57C ;~ 2BED:00E2
cs=0x2bed;eip=0x0000e4; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 88634 mov     [bp+var_8], 0 ;~ 2BED:00E4
loc_3a599:
	// 9859 
cs=0x2bed;eip=0x0000e9; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0));	// 88638 cmp     [bp+var_8], 0 ;~ 2BED:00E9
cs=0x2bed;eip=0x0000ed; 	J(JNZ(loc_3a5f0));	// 88639 jnz     short loc_3A5F0 ;~ 2BED:00ED
cs=0x2bed;eip=0x0000ef; 	T(MOV(ax, 4));	// 88640 mov     ax, 4 ;~ 2BED:00EF
cs=0x2bed;eip=0x0000f2; 	T(CWD);	// 88641 cwd ;~ 2BED:00F2
cs=0x2bed;eip=0x0000f3; 	X(PUSH(dx));	// 88642 push    dx ;~ 2BED:00F3
cs=0x2bed;eip=0x0000f4; 	X(PUSH(ax));	// 88643 push    ax ;~ 2BED:00F4
cs=0x2bed;eip=0x0000f5; 	J(CALLF(set_add_value,0));	// 88644 call    set_add_value ;~ 2BED:00F5
cs=0x2bed;eip=0x0000fa; 	T(ADD(sp, 4));	// 88645 add     sp, 4 ;~ 2BED:00FA
cs=0x2bed;eip=0x0000fd; 	T(MOV(ax, word_42a1c));	// 88646 mov     ax, word_42A1C ;~ 2BED:00FD
cs=0x2bed;eip=0x000100; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 88647 mov     [bp+var_4], ax ;~ 2BED:0100
cs=0x2bed;eip=0x000103; 	X(MOV(word_42a1c, 1));	// 88648 mov     word_42A1C, 1 ;~ 2BED:0103
cs=0x2bed;eip=0x000109; 	X(PUSH(cs));	// 88649 push    cs ;~ 2BED:0109
cs=0x2bed;eip=0x00010a; 	J(CALL(read_line_helper,0));	// 88650 call    near ptr read_line_helper ;~ 2BED:010A
cs=0x2bed;eip=0x00010d; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 88651 cmp     [bp+var_4], 0 ;~ 2BED:010D
cs=0x2bed;eip=0x000111; 	J(JZ(loc_3a5cc));	// 88652 jz      short loc_3A5CC ;~ 2BED:0111
cs=0x2bed;eip=0x000113; 	X(MOV(word_42a1c, 0));	// 88653 mov     word_42A1C, 0 ;~ 2BED:0113
cs=0x2bed;eip=0x000119; 	J(JMP(loc_3a5d2));	// 88654 jmp     short loc_3A5D2 ;~ 2BED:0119
loc_3a5cc:
	// 9860 
cs=0x2bed;eip=0x00011c; 	X(MOV(word_42a1c, 1));	// 88659 mov     word_42A1C, 1 ;~ 2BED:011C
loc_3a5d2:
	// 9861 
cs=0x2bed;eip=0x000122; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_12))));	// 88662 mov     ax, [bp+arg_12] ;~ 2BED:0122
cs=0x2bed;eip=0x000125; 	T(OR(ax, *(dw*)(raddr(ss,bp+arg_14))));	// 88663 or      ax, [bp+arg_14] ;~ 2BED:0125
cs=0x2bed;eip=0x000128; 	J(JZ(loc_3a568));	// 88664 jz      short loc_3A568 ;~ 2BED:0128
cs=0x2bed;eip=0x00012a; 	J(CALLF(timer_compare_dx,0));	// 88665 call    timer_compare_dx ;~ 2BED:012A
cs=0x2bed;eip=0x00012f; 	T(OR(ax, ax));	// 88666 or      ax, ax ;~ 2BED:012F
cs=0x2bed;eip=0x000131; 	J(JZ(loc_3a568));	// 88667 jz      short loc_3A568 ;~ 2BED:0131
loc_3a5e3:
	// 9862 
cs=0x2bed;eip=0x000133; 	X(PUSH(cs));	// 88671 push    cs ;~ 2BED:0133
cs=0x2bed;eip=0x000134; 	J(CALL(read_line_helper,0));	// 88672 call    near ptr read_line_helper ;~ 2BED:0134
cs=0x2bed;eip=0x000137; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 88673 mov     ax, [bp+var_8] ;~ 2BED:0137
cs=0x2bed;eip=0x00013a; 	X(POP(si));	// 88674 pop     si ;~ 2BED:013A
cs=0x2bed;eip=0x00013b; 	T(MOV(sp, bp));	// 88675 mov     sp, bp ;~ 2BED:013B
cs=0x2bed;eip=0x00013d; 	X(POP(bp));	// 88676 pop     bp ;~ 2BED:013D
cs=0x2bed;eip=0x00013e; 	J(RETF(0));	// 88677 retf ;~ 2BED:013E
loc_3a5f0:
	// 9863 
cs=0x2bed;eip=0x000140; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_14))));	// 88682 push    [bp+arg_14] ;~ 2BED:0140
cs=0x2bed;eip=0x000143; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_12))));	// 88683 push    [bp+arg_12] ;~ 2BED:0143
cs=0x2bed;eip=0x000146; 	J(CALLF(timer_copy_counter,0));	// 88684 call    timer_copy_counter ; Stores a copy of the timer counter with the given ticks added. ;~ 2BED:0146
cs=0x2bed;eip=0x00014b; 	T(ADD(sp, 4));	// 88685 add     sp, 4 ;~ 2BED:014B
cs=0x2bed;eip=0x00014e; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0x0D));	// 88686 cmp     [bp+var_8], 0Dh ;~ 2BED:014E
cs=0x2bed;eip=0x000152; 	J(JZ(loc_3a5e3));	// 88687 jz      short loc_3A5E3 ;~ 2BED:0152
cs=0x2bed;eip=0x000154; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0x1B));	// 88688 cmp     [bp+var_8], 1Bh ;~ 2BED:0154
cs=0x2bed;eip=0x000158; 	J(JZ(loc_3a5e3));	// 88689 jz      short loc_3A5E3 ;~ 2BED:0158
cs=0x2bed;eip=0x00015a; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0x4800));	// 88690 cmp     [bp+var_8], 4800h ;~ 2BED:015A
cs=0x2bed;eip=0x00015f; 	J(JZ(loc_3a5e3));	// 88691 jz      short loc_3A5E3 ;~ 2BED:015F
cs=0x2bed;eip=0x000161; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0x5000));	// 88692 cmp     [bp+var_8], 5000h ;~ 2BED:0161
cs=0x2bed;eip=0x000166; 	J(JNZ(loc_3a61e));	// 88693 jnz     short loc_3A61E ;~ 2BED:0166
cs=0x2bed;eip=0x000168; 	T(TEST(*(raddr(ss,bp+arg_0)), 8));	// 88694 test    [bp+arg_0], 8 ;~ 2BED:0168
cs=0x2bed;eip=0x00016c; 	J(JZ(loc_3a5e3));	// 88695 jz      short loc_3A5E3 ;~ 2BED:016C
loc_3a61e:
	// 9864 
cs=0x2bed;eip=0x00016e; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 9));	// 88698 cmp     [bp+var_8], 9 ;~ 2BED:016E
cs=0x2bed;eip=0x000172; 	J(JNZ(loc_3a62a));	// 88699 jnz     short loc_3A62A ;~ 2BED:0172
cs=0x2bed;eip=0x000174; 	T(TEST(*(raddr(ss,bp+arg_0)), 0x10));	// 88700 test    [bp+arg_0], 10h ;~ 2BED:0174
cs=0x2bed;eip=0x000178; 	J(JZ(loc_3a5e3));	// 88701 jz      short loc_3A5E3 ;~ 2BED:0178
loc_3a62a:
	// 9865 
cs=0x2bed;eip=0x00017a; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0x4D00));	// 88704 cmp     [bp+var_8], 4D00h ;~ 2BED:017A
cs=0x2bed;eip=0x00017f; 	J(JNZ(loc_3a648));	// 88705 jnz     short loc_3A648 ;~ 2BED:017F
cs=0x2bed;eip=0x000181; 	X(PUSH(cs));	// 88706 push    cs ;~ 2BED:0181
cs=0x2bed;eip=0x000182; 	J(CALL(read_line_helper,0));	// 88707 call    near ptr read_line_helper ;~ 2BED:0182
cs=0x2bed;eip=0x000185; 	T(MOV(ax, word_42a22));	// 88708 mov     ax, word_42A22 ;~ 2BED:0185
cs=0x2bed;eip=0x000188; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), ax));	// 88709 cmp     [bp+arg_6], ax ;~ 2BED:0188
cs=0x2bed;eip=0x00018b; 	J(JG(loc_3a640));	// 88710 jg      short loc_3A640 ;~ 2BED:018B
cs=0x2bed;eip=0x00018d; 	J(JMP(loc_3a7e9));	// 88711 jmp     loc_3A7E9 ;~ 2BED:018D
loc_3a640:
	// 9866 
cs=0x2bed;eip=0x000190; 	X(INC(word_42a22));	// 88715 inc     word_42A22 ;~ 2BED:0190
cs=0x2bed;eip=0x000194; 	J(JMP(loc_3a7e9));	// 88716 jmp     loc_3A7E9 ;~ 2BED:0194
loc_3a648:
	// 9867 
cs=0x2bed;eip=0x000198; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0x4B00));	// 88721 cmp     [bp+var_8], 4B00h ;~ 2BED:0198
cs=0x2bed;eip=0x00019d; 	J(JNZ(loc_3a664));	// 88722 jnz     short loc_3A664 ;~ 2BED:019D
cs=0x2bed;eip=0x00019f; 	X(PUSH(cs));	// 88723 push    cs ;~ 2BED:019F
cs=0x2bed;eip=0x0001a0; 	J(CALL(read_line_helper,0));	// 88724 call    near ptr read_line_helper ;~ 2BED:01A0
cs=0x2bed;eip=0x0001a3; 	T(CMP(word_42a22, 0));	// 88725 cmp     word_42A22, 0 ;~ 2BED:01A3
cs=0x2bed;eip=0x0001a8; 	J(JNZ(loc_3a65d));	// 88726 jnz     short loc_3A65D ;~ 2BED:01A8
cs=0x2bed;eip=0x0001aa; 	J(JMP(loc_3a7e9));	// 88727 jmp     loc_3A7E9 ;~ 2BED:01AA
loc_3a65d:
	// 9868 
cs=0x2bed;eip=0x0001ad; 	X(DEC(word_42a22));	// 88731 dec     word_42A22 ;~ 2BED:01AD
cs=0x2bed;eip=0x0001b1; 	J(JMP(loc_3a7e9));	// 88732 jmp     loc_3A7E9 ;~ 2BED:01B1
loc_3a664:
	// 9869 
cs=0x2bed;eip=0x0001b4; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0x4700));	// 88736 cmp     [bp+var_8], 4700h ;~ 2BED:01B4
cs=0x2bed;eip=0x0001b9; 	J(JNZ(loc_3a678));	// 88737 jnz     short loc_3A678 ;~ 2BED:01B9
cs=0x2bed;eip=0x0001bb; 	X(PUSH(cs));	// 88738 push    cs ;~ 2BED:01BB
cs=0x2bed;eip=0x0001bc; 	J(CALL(read_line_helper,0));	// 88739 call    near ptr read_line_helper ;~ 2BED:01BC
cs=0x2bed;eip=0x0001bf; 	X(MOV(word_42a22, 0));	// 88740 mov     word_42A22, 0 ;~ 2BED:01BF
cs=0x2bed;eip=0x0001c5; 	J(JMP(loc_3a7e9));	// 88741 jmp     loc_3A7E9 ;~ 2BED:01C5
loc_3a678:
	// 9870 
cs=0x2bed;eip=0x0001c8; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0x4F00));	// 88745 cmp     [bp+var_8], 4F00h ;~ 2BED:01C8
cs=0x2bed;eip=0x0001cd; 	J(JNZ(loc_3a694));	// 88746 jnz     short loc_3A694 ;~ 2BED:01CD
cs=0x2bed;eip=0x0001cf; 	X(PUSH(cs));	// 88747 push    cs ;~ 2BED:01CF
cs=0x2bed;eip=0x0001d0; 	J(CALL(read_line_helper,0));	// 88748 call    near ptr read_line_helper ;~ 2BED:01D0
cs=0x2bed;eip=0x0001d3; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 88749 push    word ptr [bp+arg_2] ; char * ;~ 2BED:01D3
cs=0x2bed;eip=0x0001d6; 	J(CALLF(_strlen,0));	// 88750 call    _strlen ;~ 2BED:01D6
cs=0x2bed;eip=0x0001db; 	T(ADD(sp, 2));	// 88751 add     sp, 2 ;~ 2BED:01DB
cs=0x2bed;eip=0x0001de; 	X(MOV(word_42a22, ax));	// 88752 mov     word_42A22, ax ;~ 2BED:01DE
cs=0x2bed;eip=0x0001e1; 	J(JMP(loc_3a7e9));	// 88753 jmp     loc_3A7E9 ;~ 2BED:01E1
loc_3a694:
	// 9871 
cs=0x2bed;eip=0x0001e4; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0x5200));	// 88757 cmp     [bp+var_8], 5200h ;~ 2BED:01E4
cs=0x2bed;eip=0x0001e9; 	J(JNZ(loc_3a6c2));	// 88758 jnz     short loc_3A6C2 ;~ 2BED:01E9
cs=0x2bed;eip=0x0001eb; 	X(PUSH(cs));	// 88759 push    cs ;~ 2BED:01EB
cs=0x2bed;eip=0x0001ec; 	J(CALL(read_line_helper,0));	// 88760 call    near ptr read_line_helper ;~ 2BED:01EC
cs=0x2bed;eip=0x0001ef; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0));	// 88761 cmp     [bp+var_A], 0 ;~ 2BED:01EF
cs=0x2bed;eip=0x0001f3; 	J(JNZ(loc_3a6b4));	// 88762 jnz     short loc_3A6B4 ;~ 2BED:01F3
cs=0x2bed;eip=0x0001f5; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 1));	// 88763 mov     [bp+var_A], 1 ;~ 2BED:01F5
cs=0x2bed;eip=0x0001fa; 	X(MOV(word_42a16, 8));	// 88764 mov     word_42A16, 8 ;~ 2BED:01FA
cs=0x2bed;eip=0x000200; 	J(JMP(loc_3a7e9));	// 88765 jmp     loc_3A7E9 ;~ 2BED:0200
loc_3a6b4:
	// 9872 
cs=0x2bed;eip=0x000204; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0));	// 88770 mov     [bp+var_A], 0 ;~ 2BED:0204
cs=0x2bed;eip=0x000209; 	X(MOV(word_42a16, 1));	// 88771 mov     word_42A16, 1 ;~ 2BED:0209
cs=0x2bed;eip=0x00020f; 	J(JMP(loc_3a7e9));	// 88772 jmp     loc_3A7E9 ;~ 2BED:020F
loc_3a6c2:
	// 9873 
cs=0x2bed;eip=0x000212; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0x5300));	// 88776 cmp     [bp+var_8], 5300h ;~ 2BED:0212
cs=0x2bed;eip=0x000217; 	J(JNZ(loc_3a710));	// 88777 jnz     short loc_3A710 ;~ 2BED:0217
cs=0x2bed;eip=0x000219; 	T(MOV(ax, word_42a22));	// 88778 mov     ax, word_42A22 ;~ 2BED:0219
cs=0x2bed;eip=0x00021c; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), ax));	// 88779 cmp     [bp+arg_6], ax ;~ 2BED:021C
cs=0x2bed;eip=0x00021f; 	J(JG(loc_3a6d4));	// 88780 jg      short loc_3A6D4 ;~ 2BED:021F
cs=0x2bed;eip=0x000221; 	J(JMP(loc_3a7ed));	// 88781 jmp     loc_3A7ED ;~ 2BED:0221
loc_3a6d4:
	// 9874 
cs=0x2bed;eip=0x000224; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 88785 mov     bx, word ptr [bp+arg_2] ;~ 2BED:0224
cs=0x2bed;eip=0x000227; 	T(MOV(si, ax));	// 88786 mov     si, ax ;~ 2BED:0227
cs=0x2bed;eip=0x000229; 	T(CMP(*(raddr(ds,bx+si)), 0));	// 88787 cmp     byte ptr [bx+si], 0 ;~ 2BED:0229
cs=0x2bed;eip=0x00022c; 	J(JNZ(loc_3a6e1));	// 88788 jnz     short loc_3A6E1 ;~ 2BED:022C
cs=0x2bed;eip=0x00022e; 	J(JMP(loc_3a7ed));	// 88789 jmp     loc_3A7ED ;~ 2BED:022E
loc_3a6e1:
	// 9875 
cs=0x2bed;eip=0x000231; 	X(PUSH(cs));	// 88793 push    cs ;~ 2BED:0231
cs=0x2bed;eip=0x000232; 	J(CALL(read_line_helper,0));	// 88794 call    near ptr read_line_helper ;~ 2BED:0232
cs=0x2bed;eip=0x000235; 	T(MOV(ax, word_42a22));	// 88795 mov     ax, word_42A22 ;~ 2BED:0235
cs=0x2bed;eip=0x000238; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 88796 mov     [bp+var_6], ax ;~ 2BED:0238
cs=0x2bed;eip=0x00023b; 	J(JMP(loc_3a6fc));	// 88797 jmp     short loc_3A6FC ;~ 2BED:023B
loc_3a6ee:
	// 9876 
cs=0x2bed;eip=0x00023e; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_6))));	// 88802 mov     si, [bp+var_6] ;~ 2BED:023E
cs=0x2bed;eip=0x000241; 	T(ADD(si, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 88803 add     si, word ptr [bp+arg_2] ;~ 2BED:0241
cs=0x2bed;eip=0x000244; 	T(MOV(al, *(raddr(ds,si+1))));	// 88804 mov     al, [si+1] ;~ 2BED:0244
cs=0x2bed;eip=0x000247; 	X(MOV(*(raddr(ds,si)), al));	// 88805 mov     [si], al ;~ 2BED:0247
cs=0x2bed;eip=0x000249; 	X(INC(*(dw*)(raddr(ss,bp+var_6))));	// 88806 inc     [bp+var_6] ;~ 2BED:0249
loc_3a6fc:
	// 9877 
cs=0x2bed;eip=0x00024c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 88809 mov     ax, [bp+arg_6] ;~ 2BED:024C
cs=0x2bed;eip=0x00024f; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), ax));	// 88810 cmp     [bp+var_6], ax ;~ 2BED:024F
cs=0x2bed;eip=0x000252; 	J(JL(loc_3a6ee));	// 88811 jl      short loc_3A6EE ;~ 2BED:0252
loc_3a704:
	// 9878 
cs=0x2bed;eip=0x000254; 	T(MOV(si, ax));	// 88814 mov     si, ax ;~ 2BED:0254
cs=0x2bed;eip=0x000256; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 88815 mov     bx, word ptr [bp+arg_2] ;~ 2BED:0256
cs=0x2bed;eip=0x000259; 	X(MOV(*(raddr(ds,bx+si-1)), 0x20));	// 88816 mov     byte ptr [bx+si-1], 20h ; ' ' ;~ 2BED:0259
cs=0x2bed;eip=0x00025d; 	J(JMP(loc_3a7e5));	// 88817 jmp     loc_3A7E5 ;~ 2BED:025D
loc_3a710:
	// 9879 
cs=0x2bed;eip=0x000260; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 8));	// 88821 cmp     [bp+var_8], 8 ;~ 2BED:0260
cs=0x2bed;eip=0x000264; 	J(JNZ(loc_3a748));	// 88822 jnz     short loc_3A748 ;~ 2BED:0264
cs=0x2bed;eip=0x000266; 	T(CMP(word_42a22, 0));	// 88823 cmp     word_42A22, 0 ;~ 2BED:0266
cs=0x2bed;eip=0x00026b; 	J(JNZ(loc_3a720));	// 88824 jnz     short loc_3A720 ;~ 2BED:026B
cs=0x2bed;eip=0x00026d; 	J(JMP(loc_3a7ed));	// 88825 jmp     loc_3A7ED ;~ 2BED:026D
loc_3a720:
	// 9880 
cs=0x2bed;eip=0x000270; 	X(PUSH(cs));	// 88829 push    cs ;~ 2BED:0270
cs=0x2bed;eip=0x000271; 	J(CALL(read_line_helper,0));	// 88830 call    near ptr read_line_helper ;~ 2BED:0271
cs=0x2bed;eip=0x000274; 	X(DEC(word_42a22));	// 88831 dec     word_42A22 ;~ 2BED:0274
cs=0x2bed;eip=0x000278; 	T(MOV(ax, word_42a22));	// 88832 mov     ax, word_42A22 ;~ 2BED:0278
cs=0x2bed;eip=0x00027b; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 88833 mov     [bp+var_6], ax ;~ 2BED:027B
cs=0x2bed;eip=0x00027e; 	J(JMP(loc_3a73e));	// 88834 jmp     short loc_3A73E ;~ 2BED:027E
loc_3a730:
	// 9881 
cs=0x2bed;eip=0x000280; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_6))));	// 88838 mov     si, [bp+var_6] ;~ 2BED:0280
cs=0x2bed;eip=0x000283; 	T(ADD(si, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 88839 add     si, word ptr [bp+arg_2] ;~ 2BED:0283
cs=0x2bed;eip=0x000286; 	T(MOV(al, *(raddr(ds,si+1))));	// 88840 mov     al, [si+1] ;~ 2BED:0286
cs=0x2bed;eip=0x000289; 	X(MOV(*(raddr(ds,si)), al));	// 88841 mov     [si], al ;~ 2BED:0289
cs=0x2bed;eip=0x00028b; 	X(INC(*(dw*)(raddr(ss,bp+var_6))));	// 88842 inc     [bp+var_6] ;~ 2BED:028B
loc_3a73e:
	// 9882 
cs=0x2bed;eip=0x00028e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 88845 mov     ax, [bp+arg_6] ;~ 2BED:028E
cs=0x2bed;eip=0x000291; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), ax));	// 88846 cmp     [bp+var_6], ax ;~ 2BED:0291
cs=0x2bed;eip=0x000294; 	J(JL(loc_3a730));	// 88847 jl      short loc_3A730 ;~ 2BED:0294
cs=0x2bed;eip=0x000296; 	J(JMP(loc_3a704));	// 88848 jmp     short loc_3A704 ;~ 2BED:0296
loc_3a748:
	// 9883 
cs=0x2bed;eip=0x000298; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0x20));	// 88852 cmp     [bp+var_8], 20h ; ' ' ;~ 2BED:0298
cs=0x2bed;eip=0x00029c; 	J(JGE(loc_3a751));	// 88853 jge     short loc_3A751 ;~ 2BED:029C
cs=0x2bed;eip=0x00029e; 	J(JMP(loc_3a7ed));	// 88854 jmp     loc_3A7ED ;~ 2BED:029E
loc_3a751:
	// 9884 
cs=0x2bed;eip=0x0002a1; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0x7A));	// 88858 cmp     [bp+var_8], 7Ah ; 'z' ;~ 2BED:02A1
cs=0x2bed;eip=0x0002a5; 	J(JLE(loc_3a75a));	// 88859 jle     short loc_3A75A ;~ 2BED:02A5
cs=0x2bed;eip=0x0002a7; 	J(JMP(loc_3a7ed));	// 88860 jmp     loc_3A7ED ;~ 2BED:02A7
loc_3a75a:
	// 9885 
cs=0x2bed;eip=0x0002aa; 	T(MOV(ax, word_42a22));	// 88864 mov     ax, word_42A22 ;~ 2BED:02AA
cs=0x2bed;eip=0x0002ad; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), ax));	// 88865 cmp     [bp+arg_6], ax ;~ 2BED:02AD
cs=0x2bed;eip=0x0002b0; 	J(JG(loc_3a765));	// 88866 jg      short loc_3A765 ;~ 2BED:02B0
cs=0x2bed;eip=0x0002b2; 	J(JMP(loc_3a7ed));	// 88867 jmp     loc_3A7ED ;~ 2BED:02B2
loc_3a765:
	// 9886 
cs=0x2bed;eip=0x0002b5; 	X(PUSH(cs));	// 88871 push    cs ;~ 2BED:02B5
cs=0x2bed;eip=0x0002b6; 	J(CALL(read_line_helper,0));	// 88872 call    near ptr read_line_helper ;~ 2BED:02B6
cs=0x2bed;eip=0x0002b9; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0));	// 88873 cmp     [bp+var_2], 0 ;~ 2BED:02B9
cs=0x2bed;eip=0x0002bd; 	J(JZ(loc_3a796));	// 88874 jz      short loc_3A796 ;~ 2BED:02BD
cs=0x2bed;eip=0x0002bf; 	T(TEST(*(raddr(ss,bp+arg_0)), 4));	// 88875 test    [bp+arg_0], 4 ;~ 2BED:02BF
cs=0x2bed;eip=0x0002c3; 	J(JNZ(loc_3a796));	// 88876 jnz     short loc_3A796 ;~ 2BED:02C3
cs=0x2bed;eip=0x0002c5; 	X(MOV(word_42a22, 0));	// 88877 mov     word_42A22, 0 ;~ 2BED:02C5
cs=0x2bed;eip=0x0002cb; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0));	// 88878 mov     [bp+var_6], 0 ;~ 2BED:02CB
cs=0x2bed;eip=0x0002d0; 	J(JMP(loc_3a78e));	// 88879 jmp     short loc_3A78E ;~ 2BED:02D0
loc_3a782:
	// 9887 
cs=0x2bed;eip=0x0002d2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_6))));	// 88883 mov     bx, [bp+var_6] ;~ 2BED:02D2
cs=0x2bed;eip=0x0002d5; 	T(MOV(si, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 88884 mov     si, word ptr [bp+arg_2] ;~ 2BED:02D5
cs=0x2bed;eip=0x0002d8; 	X(MOV(*(raddr(ds,bx+si)), 0x20));	// 88885 mov     byte ptr [bx+si], 20h ; ' ' ;~ 2BED:02D8
cs=0x2bed;eip=0x0002db; 	X(INC(*(dw*)(raddr(ss,bp+var_6))));	// 88886 inc     [bp+var_6] ;~ 2BED:02DB
loc_3a78e:
	// 9888 
cs=0x2bed;eip=0x0002de; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 88889 mov     ax, [bp+arg_6] ;~ 2BED:02DE
cs=0x2bed;eip=0x0002e1; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), ax));	// 88890 cmp     [bp+var_6], ax ;~ 2BED:02E1
cs=0x2bed;eip=0x0002e4; 	J(JL(loc_3a782));	// 88891 jl      short loc_3A782 ;~ 2BED:02E4
loc_3a796:
	// 9889 
cs=0x2bed;eip=0x0002e6; 	T(MOV(si, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 88895 mov     si, word ptr [bp+arg_2] ;~ 2BED:02E6
cs=0x2bed;eip=0x0002e9; 	T(ADD(si, word_42a22));	// 88896 add     si, word_42A22 ;~ 2BED:02E9
cs=0x2bed;eip=0x0002ed; 	T(CMP(*(raddr(ds,si)), 0));	// 88897 cmp     byte ptr [si], 0 ;~ 2BED:02ED
cs=0x2bed;eip=0x0002f0; 	J(JNZ(loc_3a7a6));	// 88898 jnz     short loc_3A7A6 ;~ 2BED:02F0
cs=0x2bed;eip=0x0002f2; 	X(MOV(*(raddr(ds,si+1)), 0));	// 88899 mov     byte ptr [si+1], 0 ;~ 2BED:02F2
loc_3a7a6:
	// 9890 
cs=0x2bed;eip=0x0002f6; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0));	// 88902 cmp     [bp+var_A], 0 ;~ 2BED:02F6
cs=0x2bed;eip=0x0002fa; 	J(JZ(loc_3a7ce));	// 88903 jz      short loc_3A7CE ;~ 2BED:02FA
cs=0x2bed;eip=0x0002fc; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 88904 mov     ax, [bp+arg_6] ;~ 2BED:02FC
cs=0x2bed;eip=0x0002ff; 	T(SUB(ax, 2));	// 88905 sub     ax, 2 ;~ 2BED:02FF
cs=0x2bed;eip=0x000302; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 88906 mov     [bp+var_6], ax ;~ 2BED:0302
cs=0x2bed;eip=0x000305; 	J(JMP(loc_3a7c6));	// 88907 jmp     short loc_3A7C6 ;~ 2BED:0305
loc_3a7b8:
	// 9891 
cs=0x2bed;eip=0x000308; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_6))));	// 88912 mov     si, [bp+var_6] ;~ 2BED:0308
cs=0x2bed;eip=0x00030b; 	T(ADD(si, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 88913 add     si, word ptr [bp+arg_2] ;~ 2BED:030B
cs=0x2bed;eip=0x00030e; 	T(MOV(al, *(raddr(ds,si))));	// 88914 mov     al, [si] ;~ 2BED:030E
cs=0x2bed;eip=0x000310; 	X(MOV(*(raddr(ds,si+1)), al));	// 88915 mov     [si+1], al ;~ 2BED:0310
cs=0x2bed;eip=0x000313; 	X(DEC(*(dw*)(raddr(ss,bp+var_6))));	// 88916 dec     [bp+var_6] ;~ 2BED:0313
loc_3a7c6:
	// 9892 
cs=0x2bed;eip=0x000316; 	T(MOV(ax, word_42a22));	// 88919 mov     ax, word_42A22 ;~ 2BED:0316
cs=0x2bed;eip=0x000319; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), ax));	// 88920 cmp     [bp+var_6], ax ;~ 2BED:0319
cs=0x2bed;eip=0x00031c; 	J(JGE(loc_3a7b8));	// 88921 jge     short loc_3A7B8 ;~ 2BED:031C
loc_3a7ce:
	// 9893 
cs=0x2bed;eip=0x00031e; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 88924 mov     bx, word ptr [bp+arg_2] ;~ 2BED:031E
cs=0x2bed;eip=0x000321; 	T(MOV(si, word_42a22));	// 88925 mov     si, word_42A22 ;~ 2BED:0321
cs=0x2bed;eip=0x000325; 	T(MOV(al, *(db*)(raddr(ss,bp+var_8))));	// 88926 mov     al, byte ptr [bp+var_8] ;~ 2BED:0325
cs=0x2bed;eip=0x000328; 	X(MOV(*(raddr(ds,bx+si)), al));	// 88927 mov     [bx+si], al ;~ 2BED:0328
cs=0x2bed;eip=0x00032a; 	T(MOV(ax, si));	// 88928 mov     ax, si ;~ 2BED:032A
cs=0x2bed;eip=0x00032c; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), ax));	// 88929 cmp     [bp+arg_6], ax ;~ 2BED:032C
cs=0x2bed;eip=0x00032f; 	J(JLE(loc_3a7e5));	// 88930 jle     short loc_3A7E5 ;~ 2BED:032F
cs=0x2bed;eip=0x000331; 	X(INC(word_42a22));	// 88931 inc     word_42A22 ;~ 2BED:0331
loc_3a7e5:
	// 9894 
cs=0x2bed;eip=0x000335; 	X(PUSH(cs));	// 88935 push    cs ;~ 2BED:0335
cs=0x2bed;eip=0x000336; 	J(CALL(read_line_helper2,0));	// 88936 call    near ptr read_line_helper2 ;~ 2BED:0336
loc_3a7e9:
	// 9895 
cs=0x2bed;eip=0x000339; 	X(PUSH(cs));	// 88940 push    cs ;~ 2BED:0339
cs=0x2bed;eip=0x00033a; 	J(CALL(read_line_helper,0));	// 88941 call    near ptr read_line_helper ;~ 2BED:033A
loc_3a7ed:
	// 9896 
cs=0x2bed;eip=0x00033d; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 88945 mov     [bp+var_2], 0 ;~ 2BED:033D
cs=0x2bed;eip=0x000342; 	J(JMP(loc_3a568));	// 88946 jmp     loc_3A568 ;~ 2BED:0342

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_3a4ee: 	goto loc_3a4ee;
        case m2c::kloc_3a4fc: 	goto loc_3a4fc;
        case m2c::kloc_3a50a: 	goto loc_3a50a;
        case m2c::kloc_3a51a: 	goto loc_3a51a;
        case m2c::kloc_3a526: 	goto loc_3a526;
        case m2c::kloc_3a568: 	goto loc_3a568;
        case m2c::kloc_3a57c: 	goto loc_3a57c;
        case m2c::kloc_3a57f: 	goto loc_3a57f;
        case m2c::kloc_3a599: 	goto loc_3a599;
        case m2c::kloc_3a5cc: 	goto loc_3a5cc;
        case m2c::kloc_3a5d2: 	goto loc_3a5d2;
        case m2c::kloc_3a5e3: 	goto loc_3a5e3;
        case m2c::kloc_3a5f0: 	goto loc_3a5f0;
        case m2c::kloc_3a61e: 	goto loc_3a61e;
        case m2c::kloc_3a62a: 	goto loc_3a62a;
        case m2c::kloc_3a640: 	goto loc_3a640;
        case m2c::kloc_3a648: 	goto loc_3a648;
        case m2c::kloc_3a65d: 	goto loc_3a65d;
        case m2c::kloc_3a664: 	goto loc_3a664;
        case m2c::kloc_3a678: 	goto loc_3a678;
        case m2c::kloc_3a694: 	goto loc_3a694;
        case m2c::kloc_3a6b4: 	goto loc_3a6b4;
        case m2c::kloc_3a6c2: 	goto loc_3a6c2;
        case m2c::kloc_3a6d4: 	goto loc_3a6d4;
        case m2c::kloc_3a6e1: 	goto loc_3a6e1;
        case m2c::kloc_3a6ee: 	goto loc_3a6ee;
        case m2c::kloc_3a6fc: 	goto loc_3a6fc;
        case m2c::kloc_3a704: 	goto loc_3a704;
        case m2c::kloc_3a710: 	goto loc_3a710;
        case m2c::kloc_3a720: 	goto loc_3a720;
        case m2c::kloc_3a730: 	goto loc_3a730;
        case m2c::kloc_3a73e: 	goto loc_3a73e;
        case m2c::kloc_3a748: 	goto loc_3a748;
        case m2c::kloc_3a751: 	goto loc_3a751;
        case m2c::kloc_3a75a: 	goto loc_3a75a;
        case m2c::kloc_3a765: 	goto loc_3a765;
        case m2c::kloc_3a782: 	goto loc_3a782;
        case m2c::kloc_3a78e: 	goto loc_3a78e;
        case m2c::kloc_3a796: 	goto loc_3a796;
        case m2c::kloc_3a7a6: 	goto loc_3a7a6;
        case m2c::kloc_3a7b8: 	goto loc_3a7b8;
        case m2c::kloc_3a7c6: 	goto loc_3a7c6;
        case m2c::kloc_3a7ce: 	goto loc_3a7ce;
        case m2c::kloc_3a7e5: 	goto loc_3a7e5;
        case m2c::kloc_3a7e9: 	goto loc_3a7e9;
        case m2c::kloc_3a7ed: 	goto loc_3a7ed;
        case m2c::kread_line: 	goto read_line;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool read_line_helper(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    read_line_helper:
    _begin:
#undef var_6
#define var_6 -6
	// 88959 var_6           = word ptr -6 ;~ 2BED:0346
#undef var_4
#define var_4 -4
	// 88960 var_4           = word ptr -4 ;~ 2BED:0346
#undef var_2
#define var_2 -2
	// 88961 var_2           = word ptr -2 ;~ 2BED:0346
cs=0x2bed;eip=0x000346; 	X(PUSH(bp));	// 88963 push    bp ;~ 2BED:0346
cs=0x2bed;eip=0x000347; 	T(MOV(bp, sp));	// 88964 mov     bp, sp ;~ 2BED:0347
cs=0x2bed;eip=0x000349; 	T(SUB(sp, 6));	// 88965 sub     sp, 6 ;~ 2BED:0349
cs=0x2bed;eip=0x00034c; 	T(CMP(word_42a1c, 0));	// 88966 cmp     word_42A1C, 0 ;~ 2BED:034C
cs=0x2bed;eip=0x000351; 	J(JNZ(loc_3a806));	// 88967 jnz     short loc_3A806 ;~ 2BED:0351
cs=0x2bed;eip=0x000353; 	J(JMP(loc_3a891));	// 88968 jmp     loc_3A891 ;~ 2BED:0353
loc_3a806:
	// 9897 
cs=0x2bed;eip=0x000356; 	X(PUSH(off_42a1e));	// 88972 push    off_42A1E       ; char * ;~ 2BED:0356
cs=0x2bed;eip=0x00035a; 	J(CALLF(_strlen,0));	// 88973 call    _strlen ;~ 2BED:035A
cs=0x2bed;eip=0x00035f; 	T(ADD(sp, 2));	// 88974 add     sp, 2 ;~ 2BED:035F
cs=0x2bed;eip=0x000362; 	T(CMP(ax, word_42a22));	// 88975 cmp     ax, word_42A22 ;~ 2BED:0362
cs=0x2bed;eip=0x000366; 	J(JGE(loc_3a827));	// 88976 jge     short loc_3A827 ;~ 2BED:0366
cs=0x2bed;eip=0x000368; 	X(PUSH(off_42a1e));	// 88977 push    off_42A1E       ; char * ;~ 2BED:0368
cs=0x2bed;eip=0x00036c; 	J(CALLF(_strlen,0));	// 88978 call    _strlen ;~ 2BED:036C
cs=0x2bed;eip=0x000371; 	T(ADD(sp, 2));	// 88979 add     sp, 2 ;~ 2BED:0371
cs=0x2bed;eip=0x000374; 	X(MOV(word_42a22, ax));	// 88980 mov     word_42A22, ax ;~ 2BED:0374
loc_3a827:
	// 9898 
cs=0x2bed;eip=0x000377; 	T(MOV(ax, 1));	// 88983 mov     ax, 1 ;~ 2BED:0377
cs=0x2bed;eip=0x00037a; 	X(PUSH(ax));	// 88984 push    ax ;~ 2BED:037A
cs=0x2bed;eip=0x00037b; 	T(MOV(ax, word_42a22));	// 88985 mov     ax, word_42A22 ;~ 2BED:037B
cs=0x2bed;eip=0x00037e; 	T(ADD(ax, off_42a1e));	// 88986 add     ax, off_42A1E ;~ 2BED:037E
cs=0x2bed;eip=0x000382; 	X(PUSH(ax));	// 88987 push    ax ;~ 2BED:0382
cs=0x2bed;eip=0x000383; 	J(CALLF(font_op,0));	// 88988 call    font_op ;~ 2BED:0383
cs=0x2bed;eip=0x000388; 	T(ADD(sp, 4));	// 88989 add     sp, 4 ;~ 2BED:0388
cs=0x2bed;eip=0x00038b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 88990 mov     [bp+var_2], ax ;~ 2BED:038B
cs=0x2bed;eip=0x00038e; 	T(OR(ax, ax));	// 88991 or      ax, ax ;~ 2BED:038E
cs=0x2bed;eip=0x000390; 	J(JNZ(loc_3a851));	// 88992 jnz     short loc_3A851 ;~ 2BED:0390
cs=0x2bed;eip=0x000392; 	T(MOV(ax, 0x53CA));	// 88993 mov     ax, 53CAh ;~ 2BED:0392
cs=0x2bed;eip=0x000395; 	X(PUSH(ax));	// 88994 push    ax ;~ 2BED:0395
cs=0x2bed;eip=0x000396; 	J(CALLF(font_op2,0));	// 88995 call    font_op2 ;~ 2BED:0396
cs=0x2bed;eip=0x00039b; 	T(ADD(sp, 2));	// 88996 add     sp, 2 ;~ 2BED:039B
cs=0x2bed;eip=0x00039e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 88997 mov     [bp+var_2], ax ;~ 2BED:039E
loc_3a851:
	// 9899 
cs=0x2bed;eip=0x0003a1; 	X(PUSH(word_42a22));	// 89000 push    word_42A22 ;~ 2BED:03A1
cs=0x2bed;eip=0x0003a5; 	X(PUSH(off_42a1e));	// 89001 push    off_42A1E ;~ 2BED:03A5
cs=0x2bed;eip=0x0003a9; 	J(CALLF(font_op,0));	// 89002 call    font_op ;~ 2BED:03A9
cs=0x2bed;eip=0x0003ae; 	T(ADD(sp, 4));	// 89003 add     sp, 4 ;~ 2BED:03AE
cs=0x2bed;eip=0x0003b1; 	T(ADD(ax, word_42a18));	// 89004 add     ax, word_42A18 ;~ 2BED:03B1
cs=0x2bed;eip=0x0003b5; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 89005 mov     [bp+var_4], ax ;~ 2BED:03B5
cs=0x2bed;eip=0x0003b8; 	T(LES(bx, *(dd*)(((db*)&word_405fe))));	// 89006 les     bx, dword ptr word_405FE ;~ 2BED:03B8
cs=0x2bed;eip=0x0003bc; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x12))));	// 89007 mov     ax, es:[bx+12h] ;~ 2BED:03BC
cs=0x2bed;eip=0x0003c0; 	T(ADD(ax, word_42a1a));	// 89008 add     ax, word_42A1A ;~ 2BED:03C0
cs=0x2bed;eip=0x0003c4; 	T(SUB(ax, word_42a16));	// 89009 sub     ax, word_42A16 ;~ 2BED:03C4
cs=0x2bed;eip=0x0003c8; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 89010 mov     [bp+var_6], ax ;~ 2BED:03C8
cs=0x2bed;eip=0x0003cb; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 89011 push    word ptr es:[bx] ;~ 2BED:03CB
cs=0x2bed;eip=0x0003ce; 	X(PUSH(word_42a16));	// 89012 push    word_42A16 ;~ 2BED:03CE
cs=0x2bed;eip=0x0003d2; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 89013 push    [bp+var_2] ;~ 2BED:03D2
cs=0x2bed;eip=0x0003d5; 	X(PUSH(ax));	// 89014 push    ax ;~ 2BED:03D5
cs=0x2bed;eip=0x0003d6; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 89015 push    [bp+var_4] ;~ 2BED:03D6
cs=0x2bed;eip=0x0003d9; 	J(CALLF(sub_35b76,0));	// 89016 call    sub_35B76 ;~ 2BED:03D9
cs=0x2bed;eip=0x0003de; 	T(ADD(sp, 0x0A));	// 89017 add     sp, 0Ah ;~ 2BED:03DE
loc_3a891:
	// 9900 
cs=0x2bed;eip=0x0003e1; 	T(MOV(sp, bp));	// 89020 mov     sp, bp ;~ 2BED:03E1
cs=0x2bed;eip=0x0003e3; 	X(POP(bp));	// 89021 pop     bp ;~ 2BED:03E3
cs=0x2bed;eip=0x0003e4; 	J(RETF(0));	// 89022 retf ;~ 2BED:03E4

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_3a806: 	goto loc_3a806;
        case m2c::kloc_3a827: 	goto loc_3a827;
        case m2c::kloc_3a851: 	goto loc_3a851;
        case m2c::kloc_3a891: 	goto loc_3a891;
        case m2c::kread_line_helper: 	goto read_line_helper;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool read_line_helper2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    read_line_helper2:
    _begin:
#undef var_6
#define var_6 -6
	// 89035 var_6           = word ptr -6 ;~ 2BED:03E6
#undef var_4
#define var_4 -4
	// 89036 var_4           = word ptr -4 ;~ 2BED:03E6
#undef var_2
#define var_2 -2
	// 89037 var_2           = word ptr -2 ;~ 2BED:03E6
cs=0x2bed;eip=0x0003e6; 	X(PUSH(bp));	// 89039 push    bp ;~ 2BED:03E6
cs=0x2bed;eip=0x0003e7; 	T(MOV(bp, sp));	// 89040 mov     bp, sp ;~ 2BED:03E7
cs=0x2bed;eip=0x0003e9; 	T(SUB(sp, 6));	// 89041 sub     sp, 6 ;~ 2BED:03E9
cs=0x2bed;eip=0x0003ec; 	X(PUSH(si));	// 89042 push    si ;~ 2BED:03EC
cs=0x2bed;eip=0x0003ed; 	T(CMP(word_42a20, 0));	// 89043 cmp     word_42A20, 0 ;~ 2BED:03ED
cs=0x2bed;eip=0x0003f2; 	J(JZ(loc_3a8de));	// 89044 jz      short loc_3A8DE ;~ 2BED:03F2
cs=0x2bed;eip=0x0003f4; 	J(JMP(loc_3a8cc));	// 89045 jmp     short loc_3A8CC ;~ 2BED:03F4
loc_3a8a6:
	// 9901 
cs=0x2bed;eip=0x0003f6; 	X(PUSH(off_42a1e));	// 89049 push    off_42A1E       ; char * ;~ 2BED:03F6
cs=0x2bed;eip=0x0003fa; 	J(CALLF(_strlen,0));	// 89050 call    _strlen ;~ 2BED:03FA
cs=0x2bed;eip=0x0003ff; 	T(ADD(sp, 2));	// 89051 add     sp, 2 ;~ 2BED:03FF
cs=0x2bed;eip=0x000402; 	T(OR(ax, ax));	// 89052 or      ax, ax ;~ 2BED:0402
cs=0x2bed;eip=0x000404; 	J(JZ(loc_3a8de));	// 89053 jz      short loc_3A8DE ;~ 2BED:0404
cs=0x2bed;eip=0x000406; 	X(PUSH(off_42a1e));	// 89054 push    off_42A1E       ; char * ;~ 2BED:0406
cs=0x2bed;eip=0x00040a; 	J(CALLF(_strlen,0));	// 89055 call    _strlen ;~ 2BED:040A
cs=0x2bed;eip=0x00040f; 	T(ADD(sp, 2));	// 89056 add     sp, 2 ;~ 2BED:040F
cs=0x2bed;eip=0x000412; 	T(MOV(si, ax));	// 89057 mov     si, ax ;~ 2BED:0412
cs=0x2bed;eip=0x000414; 	T(MOV(bx, off_42a1e));	// 89058 mov     bx, off_42A1E ;~ 2BED:0414
cs=0x2bed;eip=0x000418; 	X(MOV(*(raddr(ds,bx+si-1)), 0));	// 89059 mov     byte ptr [bx+si-1], 0 ;~ 2BED:0418
loc_3a8cc:
	// 9902 
cs=0x2bed;eip=0x00041c; 	X(PUSH(off_42a1e));	// 89062 push    off_42A1E ;~ 2BED:041C
cs=0x2bed;eip=0x000420; 	J(CALLF(font_op2,0));	// 89063 call    font_op2 ;~ 2BED:0420
cs=0x2bed;eip=0x000425; 	T(ADD(sp, 2));	// 89064 add     sp, 2 ;~ 2BED:0425
cs=0x2bed;eip=0x000428; 	T(CMP(ax, word_42a20));	// 89065 cmp     ax, word_42A20 ;~ 2BED:0428
cs=0x2bed;eip=0x00042c; 	J(JG(loc_3a8a6));	// 89066 jg      short loc_3A8A6 ;~ 2BED:042C
loc_3a8de:
	// 9903 
cs=0x2bed;eip=0x00042e; 	X(PUSH(off_42a1e));	// 89070 push    off_42A1E       ; char * ;~ 2BED:042E
cs=0x2bed;eip=0x000432; 	J(CALLF(_strlen,0));	// 89071 call    _strlen ;~ 2BED:0432
cs=0x2bed;eip=0x000437; 	T(ADD(sp, 2));	// 89072 add     sp, 2 ;~ 2BED:0437
cs=0x2bed;eip=0x00043a; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 89073 mov     [bp+var_2], ax ;~ 2BED:043A
cs=0x2bed;eip=0x00043d; 	T(MOV(ax, word_42a22));	// 89074 mov     ax, word_42A22 ;~ 2BED:043D
cs=0x2bed;eip=0x000440; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), ax));	// 89075 cmp     [bp+var_2], ax ;~ 2BED:0440
cs=0x2bed;eip=0x000443; 	J(JGE(loc_3a8fb));	// 89076 jge     short loc_3A8FB ;~ 2BED:0443
cs=0x2bed;eip=0x000445; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 89077 mov     ax, [bp+var_2] ;~ 2BED:0445
cs=0x2bed;eip=0x000448; 	X(MOV(word_42a22, ax));	// 89078 mov     word_42A22, ax ;~ 2BED:0448
loc_3a8fb:
	// 9904 
cs=0x2bed;eip=0x00044b; 	X(PUSH(word_42a1a));	// 89081 push    word_42A1A ;~ 2BED:044B
cs=0x2bed;eip=0x00044f; 	X(PUSH(word_42a18));	// 89082 push    word_42A18 ;~ 2BED:044F
cs=0x2bed;eip=0x000453; 	X(PUSH(off_42a1e));	// 89083 push    off_42A1E ;~ 2BED:0453
cs=0x2bed;eip=0x000457; 	J(CALLF(sub_345bc,0));	// 89084 call    sub_345BC ;~ 2BED:0457
cs=0x2bed;eip=0x00045c; 	T(ADD(sp, 6));	// 89085 add     sp, 6 ;~ 2BED:045C
cs=0x2bed;eip=0x00045f; 	T(CMP(word_42a20, 0));	// 89086 cmp     word_42A20, 0 ;~ 2BED:045F
cs=0x2bed;eip=0x000464; 	J(JZ(loc_3a953));	// 89087 jz      short loc_3A953 ;~ 2BED:0464
cs=0x2bed;eip=0x000466; 	X(PUSH(off_42a1e));	// 89088 push    off_42A1E ;~ 2BED:0466
cs=0x2bed;eip=0x00046a; 	J(CALLF(font_op2,0));	// 89089 call    font_op2 ;~ 2BED:046A
cs=0x2bed;eip=0x00046f; 	T(ADD(sp, 2));	// 89090 add     sp, 2 ;~ 2BED:046F
cs=0x2bed;eip=0x000472; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 89091 mov     [bp+var_6], ax ;~ 2BED:0472
cs=0x2bed;eip=0x000475; 	T(MOV(ax, word_42a20));	// 89092 mov     ax, word_42A20 ;~ 2BED:0475
cs=0x2bed;eip=0x000478; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_6))));	// 89093 sub     ax, [bp+var_6] ;~ 2BED:0478
cs=0x2bed;eip=0x00047b; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 89094 mov     [bp+var_4], ax ;~ 2BED:047B
cs=0x2bed;eip=0x00047e; 	T(OR(ax, ax));	// 89095 or      ax, ax ;~ 2BED:047E
cs=0x2bed;eip=0x000480; 	J(JLE(loc_3a953));	// 89096 jle     short loc_3A953 ;~ 2BED:0480
cs=0x2bed;eip=0x000482; 	T(LES(bx, *(dd*)(((db*)&word_405fe))));	// 89097 les     bx, dword ptr word_405FE ;~ 2BED:0482
cs=0x2bed;eip=0x000486; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 89098 push    word ptr es:[bx+2] ;~ 2BED:0486
cs=0x2bed;eip=0x00048a; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 89099 push    word ptr es:[bx+12h] ;~ 2BED:048A
cs=0x2bed;eip=0x00048e; 	X(PUSH(ax));	// 89100 push    ax ;~ 2BED:048E
cs=0x2bed;eip=0x00048f; 	X(PUSH(word_42a1a));	// 89101 push    word_42A1A ;~ 2BED:048F
cs=0x2bed;eip=0x000493; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 89102 mov     ax, [bp+var_6] ;~ 2BED:0493
cs=0x2bed;eip=0x000496; 	T(ADD(ax, word_42a18));	// 89103 add     ax, word_42A18 ;~ 2BED:0496
cs=0x2bed;eip=0x00049a; 	X(PUSH(ax));	// 89104 push    ax ;~ 2BED:049A
cs=0x2bed;eip=0x00049b; 	J(CALLF(sprite_1_unk2,0));	// 89105 call    sprite_1_unk2 ;~ 2BED:049B
cs=0x2bed;eip=0x0004a0; 	T(ADD(sp, 0x0A));	// 89106 add     sp, 0Ah ;~ 2BED:04A0
loc_3a953:
	// 9905 
cs=0x2bed;eip=0x0004a3; 	X(POP(si));	// 89110 pop     si ;~ 2BED:04A3
cs=0x2bed;eip=0x0004a4; 	T(MOV(sp, bp));	// 89111 mov     sp, bp ;~ 2BED:04A4
cs=0x2bed;eip=0x0004a6; 	X(POP(bp));	// 89112 pop     bp ;~ 2BED:04A6
cs=0x2bed;eip=0x0004a7; 	J(RETF(0));	// 89113 retf ;~ 2BED:04A7

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_3a8a6: 	goto loc_3a8a6;
        case m2c::kloc_3a8cc: 	goto loc_3a8cc;
        case m2c::kloc_3a8de: 	goto loc_3a8de;
        case m2c::kloc_3a8fb: 	goto loc_3a8fb;
        case m2c::kloc_3a953: 	goto loc_3a953;
        case m2c::kread_line_helper2: 	goto read_line_helper2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

