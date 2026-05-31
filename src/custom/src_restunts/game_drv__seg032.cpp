/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool _group21(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group21:
    _begin:
read_line:
	// 88541 
#undef var_a
#define var_a -0x0A
	// 88543 var_A           = word ptr -0Ah ;~ 2BED:0006
#undef var_8
#define var_8 -8
	// 88544 var_8           = word ptr -8 ;~ 2BED:0006
#undef var_6
#define var_6 -6
	// 88545 var_6           = word ptr -6 ;~ 2BED:0006
#undef var_4
#define var_4 -4
	// 88546 var_4           = word ptr -4 ;~ 2BED:0006
#undef var_2
#define var_2 -2
	// 88547 var_2           = word ptr -2 ;~ 2BED:0006
#undef arg_0
#define arg_0 6
	// 88548 arg_0           = byte ptr  6 ;~ 2BED:0006
#undef arg_2
#define arg_2 8
	// 88549 arg_2           = dword ptr  8 ;~ 2BED:0006
#undef arg_6
#define arg_6 0x0C
	// 88550 arg_6           = word ptr  0Ch ;~ 2BED:0006
#undef arg_8
#define arg_8 0x0E
	// 88551 arg_8           = word ptr  0Eh ;~ 2BED:0006
#undef arg_a
#define arg_a 0x10
	// 88552 arg_A           = word ptr  10h ;~ 2BED:0006
#undef arg_c
#define arg_c 0x12
	// 88553 arg_C           = word ptr  12h ;~ 2BED:0006
#undef arg_e
#define arg_e 0x14
	// 88554 arg_E           = dword ptr  14h ;~ 2BED:0006
#undef arg_12
#define arg_12 0x18
	// 88555 arg_12          = word ptr  18h ;~ 2BED:0006
#undef arg_14
#define arg_14 0x1A
	// 88556 arg_14          = word ptr  1Ah ;~ 2BED:0006
ret_2bed_6:
	// 10447 
cs=0x2bed;eip=0x000006; 	X(PUSH(bp));	// 88558 push    bp ;~ 2BED:0006
cs=0x2bed;eip=0x000007; 	T(MOV(bp, sp));	// 88559 mov     bp, sp ;~ 2BED:0007
cs=0x2bed;eip=0x000009; 	T(SUB(sp, 0x0A));	// 88560 sub     sp, 0Ah ;~ 2BED:0009
cs=0x2bed;eip=0x00000c; 	X(PUSH(si));	// 88561 push    si ;~ 2BED:000C
cs=0x2bed;eip=0x00000d; 	R(CALLF(sprite_copy_2_to_1,0));	// 88562 call    sprite_copy_2_to_1 ;~ 2BED:000D
cs=0x2bed;eip=0x000012; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 88563 mov     ax, [bp+arg_A] ;~ 2BED:0012
cs=0x2bed;eip=0x000015; 	X(MOV(word_42a18, ax));	// 88564 mov     word_42A18, ax ;~ 2BED:0015
cs=0x2bed;eip=0x000018; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_c))));	// 88565 mov     ax, [bp+arg_C] ;~ 2BED:0018
cs=0x2bed;eip=0x00001b; 	X(MOV(word_42a1a, ax));	// 88566 mov     word_42A1A, ax ;~ 2BED:001B
cs=0x2bed;eip=0x00001e; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 88567 mov     ax, word ptr [bp+arg_2] ;~ 2BED:001E
cs=0x2bed;eip=0x000021; 	X(MOV(off_42a1e, ax));	// 88568 mov     off_42A1E, ax ;~ 2BED:0021
cs=0x2bed;eip=0x000024; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 88569 mov     ax, [bp+arg_8] ;~ 2BED:0024
cs=0x2bed;eip=0x000027; 	X(MOV(word_42a20, ax));	// 88570 mov     word_42A20, ax ;~ 2BED:0027
cs=0x2bed;eip=0x00002a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 88571 mov     bx, [bp+arg_6] ;~ 2BED:002A
cs=0x2bed;eip=0x00002d; 	T(MOV(si, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 88572 mov     si, word ptr [bp+arg_2] ;~ 2BED:002D
cs=0x2bed;eip=0x000030; 	X(MOV(*(raddr(ds,bx+si)), 0));	// 88573 mov     byte ptr [bx+si], 0 ;~ 2BED:0030
cs=0x2bed;eip=0x000033; 	T(TEST(*(raddr(ss,bp+arg_0)), 1));	// 88574 test    [bp+arg_0], 1 ;~ 2BED:0033
cs=0x2bed;eip=0x000037; 	R(JZ(loc_3a4ee));	// 88575 jz      short loc_3A4EE ;~ 2BED:0037
cs=0x2bed;eip=0x000039; 	T(MOV(bx, si));	// 88576 mov     bx, si ;~ 2BED:0039
cs=0x2bed;eip=0x00003b; 	X(MOV(*(raddr(ds,bx)), 0));	// 88577 mov     byte ptr [bx], 0 ;~ 2BED:003B
loc_3a4ee:
	// 10448 
cs=0x2bed;eip=0x00003e; 	T(TEST(*(raddr(ss,bp+arg_0)), 2));	// 88580 test    [bp+arg_0], 2 ;~ 2BED:003E
cs=0x2bed;eip=0x000042; 	R(JZ(loc_3a4fc));	// 88581 jz      short loc_3A4FC ;~ 2BED:0042
cs=0x2bed;eip=0x000044; 	X(MOV(word_42a22, 0));	// 88582 mov     word_42A22, 0 ;~ 2BED:0044
cs=0x2bed;eip=0x00004a; 	R(JMP(loc_3a50a));	// 88583 jmp     short loc_3A50A ;~ 2BED:004A
loc_3a4fc:
	// 10449 
cs=0x2bed;eip=0x00004c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 88587 push    word ptr [bp+arg_2] ; char * ;~ 2BED:004C
cs=0x2bed;eip=0x00004f; 	R(CALLF(_strlen,0));	// 88588 call    _strlen ;~ 2BED:004F
cs=0x2bed;eip=0x000054; 	T(ADD(sp, 2));	// 88589 add     sp, 2 ;~ 2BED:0054
cs=0x2bed;eip=0x000057; 	X(MOV(word_42a22, ax));	// 88590 mov     word_42A22, ax ;~ 2BED:0057
loc_3a50a:
	// 10450 
cs=0x2bed;eip=0x00005a; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 88593 push    word ptr [bp+arg_2] ; char * ;~ 2BED:005A
cs=0x2bed;eip=0x00005d; 	R(CALLF(_strlen,0));	// 88594 call    _strlen ;~ 2BED:005D
cs=0x2bed;eip=0x000062; 	T(ADD(sp, 2));	// 88595 add     sp, 2 ;~ 2BED:0062
cs=0x2bed;eip=0x000065; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 88596 mov     [bp+var_6], ax ;~ 2BED:0065
cs=0x2bed;eip=0x000068; 	R(JMP(loc_3a526));	// 88597 jmp     short loc_3A526 ;~ 2BED:0068
loc_3a51a:
	// 10451 
cs=0x2bed;eip=0x00006a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_6))));	// 88601 mov     bx, [bp+var_6] ;~ 2BED:006A
cs=0x2bed;eip=0x00006d; 	X(INC(*(dw*)(raddr(ss,bp+var_6))));	// 88602 inc     [bp+var_6] ;~ 2BED:006D
cs=0x2bed;eip=0x000070; 	T(MOV(si, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 88603 mov     si, word ptr [bp+arg_2] ;~ 2BED:0070
cs=0x2bed;eip=0x000073; 	X(MOV(*(raddr(ds,bx+si)), 0x20));	// 88604 mov     byte ptr [bx+si], 20h ; ' ' ;~ 2BED:0073
loc_3a526:
	// 10452 
cs=0x2bed;eip=0x000076; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 88607 mov     ax, [bp+arg_6] ;~ 2BED:0076
cs=0x2bed;eip=0x000079; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), ax));	// 88608 cmp     [bp+var_6], ax ;~ 2BED:0079
cs=0x2bed;eip=0x00007c; 	R(JL(loc_3a51a));	// 88609 jl      short loc_3A51A ;~ 2BED:007C
cs=0x2bed;eip=0x00007e; 	X(PUSH(cs));	// 88610 push    cs ;~ 2BED:007E
cs=0x2bed;eip=0x00007f; 	R(CALL(read_line_helper2,0));	// 88611 call    near ptr read_line_helper2 ;~ 2BED:007F
cs=0x2bed;eip=0x000082; 	X(MOV(word_42a16, 1));	// 88612 mov     word_42A16, 1 ;~ 2BED:0082
cs=0x2bed;eip=0x000088; 	X(MOV(word_42a1c, 1));	// 88613 mov     word_42A1C, 1 ;~ 2BED:0088
cs=0x2bed;eip=0x00008e; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0));	// 88614 mov     [bp+var_A], 0 ;~ 2BED:008E
cs=0x2bed;eip=0x000093; 	X(PUSH(cs));	// 88615 push    cs ;~ 2BED:0093
cs=0x2bed;eip=0x000094; 	R(CALL(read_line_helper,0));	// 88616 call    near ptr read_line_helper ;~ 2BED:0094
cs=0x2bed;eip=0x000097; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_14))));	// 88617 push    [bp+arg_14] ;~ 2BED:0097
cs=0x2bed;eip=0x00009a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_12))));	// 88618 push    [bp+arg_12] ;~ 2BED:009A
cs=0x2bed;eip=0x00009d; 	R(CALLF(timer_copy_counter,0));	// 88619 call    timer_copy_counter ; Stores a copy of the timer counter with the given ticks added. ;~ 2BED:009D
cs=0x2bed;eip=0x0000a2; 	T(ADD(sp, 4));	// 88620 add     sp, 4 ;~ 2BED:00A2
cs=0x2bed;eip=0x0000a5; 	T(MOV(ax, 4));	// 88621 mov     ax, 4 ;~ 2BED:00A5
cs=0x2bed;eip=0x0000a8; 	T(CWD);	// 88622 cwd ;~ 2BED:00A8
cs=0x2bed;eip=0x0000a9; 	X(PUSH(dx));	// 88623 push    dx ;~ 2BED:00A9
cs=0x2bed;eip=0x0000aa; 	X(PUSH(ax));	// 88624 push    ax ;~ 2BED:00AA
cs=0x2bed;eip=0x0000ab; 	R(CALLF(set_add_value,0));	// 88625 call    set_add_value ;~ 2BED:00AB
cs=0x2bed;eip=0x0000b0; 	T(ADD(sp, 4));	// 88626 add     sp, 4 ;~ 2BED:00B0
cs=0x2bed;eip=0x0000b3; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 1));	// 88627 mov     [bp+var_2], 1 ;~ 2BED:00B3
loc_3a568:
	// 10453 
cs=0x2bed;eip=0x0000b8; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+arg_2+2))), 0));	// 88631 cmp     word ptr [bp+arg_2+2], 0 ;~ 2BED:00B8
cs=0x2bed;eip=0x0000bc; 	R(JZ(loc_3a57f));	// 88632 jz      short loc_3A57F ;~ 2BED:00BC
cs=0x2bed;eip=0x0000be; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 88633 mov     ax, word ptr [bp+arg_2+2] ;~ 2BED:00BE
cs=0x2bed;eip=0x0000c1; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 88634 mov     [bp+var_8], ax ;~ 2BED:00C1
cs=0x2bed;eip=0x0000c4; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+arg_2+2))), 0));	// 88635 mov     word ptr [bp+arg_2+2], 0 ;~ 2BED:00C4
cs=0x2bed;eip=0x0000c9; 	R(JMP(loc_3a599));	// 88636 jmp     short loc_3A599 ;~ 2BED:00C9
loc_3a57c:
	// 10454 
cs=0x2bed;eip=0x0000cc; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+arg_e))));	// 88641 call    [bp+arg_E] ;~ 2BED:00CC
loc_3a57f:
	// 10455 
cs=0x2bed;eip=0x0000cf; 	R(CALLF(kb_call_readchar_callback,0));	// 88644 call    kb_call_readchar_callback ;~ 2BED:00CF
cs=0x2bed;eip=0x0000d4; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 88645 mov     [bp+var_8], ax ;~ 2BED:00D4
cs=0x2bed;eip=0x0000d7; 	T(OR(ax, ax));	// 88646 or      ax, ax ;~ 2BED:00D7
cs=0x2bed;eip=0x0000d9; 	R(JNZ(loc_3a599));	// 88647 jnz     short loc_3A599 ;~ 2BED:00D9
cs=0x2bed;eip=0x0000db; 	R(CALLF(sub_2eb07,0));	// 88648 call    sub_2EB07 ;~ 2BED:00DB
cs=0x2bed;eip=0x0000e0; 	T(OR(ax, ax));	// 88649 or      ax, ax ;~ 2BED:00E0
cs=0x2bed;eip=0x0000e2; 	R(JZ(loc_3a57c));	// 88650 jz      short loc_3A57C ;~ 2BED:00E2
cs=0x2bed;eip=0x0000e4; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 88651 mov     [bp+var_8], 0 ;~ 2BED:00E4
loc_3a599:
	// 10456 
cs=0x2bed;eip=0x0000e9; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0));	// 88655 cmp     [bp+var_8], 0 ;~ 2BED:00E9
cs=0x2bed;eip=0x0000ed; 	R(JNZ(loc_3a5f0));	// 88656 jnz     short loc_3A5F0 ;~ 2BED:00ED
cs=0x2bed;eip=0x0000ef; 	T(MOV(ax, 4));	// 88657 mov     ax, 4 ;~ 2BED:00EF
cs=0x2bed;eip=0x0000f2; 	T(CWD);	// 88658 cwd ;~ 2BED:00F2
cs=0x2bed;eip=0x0000f3; 	X(PUSH(dx));	// 88659 push    dx ;~ 2BED:00F3
cs=0x2bed;eip=0x0000f4; 	X(PUSH(ax));	// 88660 push    ax ;~ 2BED:00F4
cs=0x2bed;eip=0x0000f5; 	R(CALLF(set_add_value,0));	// 88661 call    set_add_value ;~ 2BED:00F5
cs=0x2bed;eip=0x0000fa; 	T(ADD(sp, 4));	// 88662 add     sp, 4 ;~ 2BED:00FA
cs=0x2bed;eip=0x0000fd; 	T(MOV(ax, word_42a1c));	// 88663 mov     ax, word_42A1C ;~ 2BED:00FD
cs=0x2bed;eip=0x000100; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 88664 mov     [bp+var_4], ax ;~ 2BED:0100
cs=0x2bed;eip=0x000103; 	X(MOV(word_42a1c, 1));	// 88665 mov     word_42A1C, 1 ;~ 2BED:0103
cs=0x2bed;eip=0x000109; 	X(PUSH(cs));	// 88666 push    cs ;~ 2BED:0109
cs=0x2bed;eip=0x00010a; 	R(CALL(read_line_helper,0));	// 88667 call    near ptr read_line_helper ;~ 2BED:010A
cs=0x2bed;eip=0x00010d; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 88668 cmp     [bp+var_4], 0 ;~ 2BED:010D
cs=0x2bed;eip=0x000111; 	R(JZ(loc_3a5cc));	// 88669 jz      short loc_3A5CC ;~ 2BED:0111
cs=0x2bed;eip=0x000113; 	X(MOV(word_42a1c, 0));	// 88670 mov     word_42A1C, 0 ;~ 2BED:0113
cs=0x2bed;eip=0x000119; 	R(JMP(loc_3a5d2));	// 88671 jmp     short loc_3A5D2 ;~ 2BED:0119
loc_3a5cc:
	// 10457 
cs=0x2bed;eip=0x00011c; 	X(MOV(word_42a1c, 1));	// 88676 mov     word_42A1C, 1 ;~ 2BED:011C
loc_3a5d2:
	// 10458 
cs=0x2bed;eip=0x000122; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_12))));	// 88679 mov     ax, [bp+arg_12] ;~ 2BED:0122
cs=0x2bed;eip=0x000125; 	T(OR(ax, *(dw*)(raddr(ss,bp+arg_14))));	// 88680 or      ax, [bp+arg_14] ;~ 2BED:0125
cs=0x2bed;eip=0x000128; 	R(JZ(loc_3a568));	// 88681 jz      short loc_3A568 ;~ 2BED:0128
cs=0x2bed;eip=0x00012a; 	R(CALLF(timer_compare_dx,0));	// 88682 call    timer_compare_dx ;~ 2BED:012A
cs=0x2bed;eip=0x00012f; 	T(OR(ax, ax));	// 88683 or      ax, ax ;~ 2BED:012F
cs=0x2bed;eip=0x000131; 	R(JZ(loc_3a568));	// 88684 jz      short loc_3A568 ;~ 2BED:0131
loc_3a5e3:
	// 10459 
cs=0x2bed;eip=0x000133; 	X(PUSH(cs));	// 88688 push    cs ;~ 2BED:0133
cs=0x2bed;eip=0x000134; 	R(CALL(read_line_helper,0));	// 88689 call    near ptr read_line_helper ;~ 2BED:0134
cs=0x2bed;eip=0x000137; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 88690 mov     ax, [bp+var_8] ;~ 2BED:0137
cs=0x2bed;eip=0x00013a; 	X(POP(si));	// 88691 pop     si ;~ 2BED:013A
cs=0x2bed;eip=0x00013b; 	T(MOV(sp, bp));	// 88692 mov     sp, bp ;~ 2BED:013B
cs=0x2bed;eip=0x00013d; 	X(POP(bp));	// 88693 pop     bp ;~ 2BED:013D
cs=0x2bed;eip=0x00013e; 	R(RETF(0));	// 88694 retf ;~ 2BED:013E
loc_3a5f0:
	// 10460 
cs=0x2bed;eip=0x000140; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_14))));	// 88699 push    [bp+arg_14] ;~ 2BED:0140
cs=0x2bed;eip=0x000143; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_12))));	// 88700 push    [bp+arg_12] ;~ 2BED:0143
cs=0x2bed;eip=0x000146; 	R(CALLF(timer_copy_counter,0));	// 88701 call    timer_copy_counter ; Stores a copy of the timer counter with the given ticks added. ;~ 2BED:0146
cs=0x2bed;eip=0x00014b; 	T(ADD(sp, 4));	// 88702 add     sp, 4 ;~ 2BED:014B
cs=0x2bed;eip=0x00014e; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0x0D));	// 88703 cmp     [bp+var_8], 0Dh ;~ 2BED:014E
cs=0x2bed;eip=0x000152; 	R(JZ(loc_3a5e3));	// 88704 jz      short loc_3A5E3 ;~ 2BED:0152
cs=0x2bed;eip=0x000154; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0x1B));	// 88705 cmp     [bp+var_8], 1Bh ;~ 2BED:0154
cs=0x2bed;eip=0x000158; 	R(JZ(loc_3a5e3));	// 88706 jz      short loc_3A5E3 ;~ 2BED:0158
cs=0x2bed;eip=0x00015a; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0x4800));	// 88707 cmp     [bp+var_8], 4800h ;~ 2BED:015A
cs=0x2bed;eip=0x00015f; 	R(JZ(loc_3a5e3));	// 88708 jz      short loc_3A5E3 ;~ 2BED:015F
cs=0x2bed;eip=0x000161; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0x5000));	// 88709 cmp     [bp+var_8], 5000h ;~ 2BED:0161
cs=0x2bed;eip=0x000166; 	R(JNZ(loc_3a61e));	// 88710 jnz     short loc_3A61E ;~ 2BED:0166
cs=0x2bed;eip=0x000168; 	T(TEST(*(raddr(ss,bp+arg_0)), 8));	// 88711 test    [bp+arg_0], 8 ;~ 2BED:0168
cs=0x2bed;eip=0x00016c; 	R(JZ(loc_3a5e3));	// 88712 jz      short loc_3A5E3 ;~ 2BED:016C
loc_3a61e:
	// 10461 
cs=0x2bed;eip=0x00016e; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 9));	// 88715 cmp     [bp+var_8], 9 ;~ 2BED:016E
cs=0x2bed;eip=0x000172; 	R(JNZ(loc_3a62a));	// 88716 jnz     short loc_3A62A ;~ 2BED:0172
cs=0x2bed;eip=0x000174; 	T(TEST(*(raddr(ss,bp+arg_0)), 0x10));	// 88717 test    [bp+arg_0], 10h ;~ 2BED:0174
cs=0x2bed;eip=0x000178; 	R(JZ(loc_3a5e3));	// 88718 jz      short loc_3A5E3 ;~ 2BED:0178
loc_3a62a:
	// 10462 
cs=0x2bed;eip=0x00017a; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0x4D00));	// 88721 cmp     [bp+var_8], 4D00h ;~ 2BED:017A
cs=0x2bed;eip=0x00017f; 	R(JNZ(loc_3a648));	// 88722 jnz     short loc_3A648 ;~ 2BED:017F
cs=0x2bed;eip=0x000181; 	X(PUSH(cs));	// 88723 push    cs ;~ 2BED:0181
cs=0x2bed;eip=0x000182; 	R(CALL(read_line_helper,0));	// 88724 call    near ptr read_line_helper ;~ 2BED:0182
cs=0x2bed;eip=0x000185; 	T(MOV(ax, word_42a22));	// 88725 mov     ax, word_42A22 ;~ 2BED:0185
cs=0x2bed;eip=0x000188; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), ax));	// 88726 cmp     [bp+arg_6], ax ;~ 2BED:0188
cs=0x2bed;eip=0x00018b; 	R(JG(loc_3a640));	// 88727 jg      short loc_3A640 ;~ 2BED:018B
cs=0x2bed;eip=0x00018d; 	R(JMP(loc_3a7e9));	// 88728 jmp     loc_3A7E9 ;~ 2BED:018D
loc_3a640:
	// 10463 
cs=0x2bed;eip=0x000190; 	X(INC(word_42a22));	// 88732 inc     word_42A22 ;~ 2BED:0190
cs=0x2bed;eip=0x000194; 	R(JMP(loc_3a7e9));	// 88733 jmp     loc_3A7E9 ;~ 2BED:0194
loc_3a648:
	// 10464 
cs=0x2bed;eip=0x000198; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0x4B00));	// 88738 cmp     [bp+var_8], 4B00h ;~ 2BED:0198
cs=0x2bed;eip=0x00019d; 	R(JNZ(loc_3a664));	// 88739 jnz     short loc_3A664 ;~ 2BED:019D
cs=0x2bed;eip=0x00019f; 	X(PUSH(cs));	// 88740 push    cs ;~ 2BED:019F
cs=0x2bed;eip=0x0001a0; 	R(CALL(read_line_helper,0));	// 88741 call    near ptr read_line_helper ;~ 2BED:01A0
cs=0x2bed;eip=0x0001a3; 	T(CMP(word_42a22, 0));	// 88742 cmp     word_42A22, 0 ;~ 2BED:01A3
cs=0x2bed;eip=0x0001a8; 	R(JNZ(loc_3a65d));	// 88743 jnz     short loc_3A65D ;~ 2BED:01A8
cs=0x2bed;eip=0x0001aa; 	R(JMP(loc_3a7e9));	// 88744 jmp     loc_3A7E9 ;~ 2BED:01AA
loc_3a65d:
	// 10465 
cs=0x2bed;eip=0x0001ad; 	X(DEC(word_42a22));	// 88748 dec     word_42A22 ;~ 2BED:01AD
cs=0x2bed;eip=0x0001b1; 	R(JMP(loc_3a7e9));	// 88749 jmp     loc_3A7E9 ;~ 2BED:01B1
loc_3a664:
	// 10466 
cs=0x2bed;eip=0x0001b4; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0x4700));	// 88753 cmp     [bp+var_8], 4700h ;~ 2BED:01B4
cs=0x2bed;eip=0x0001b9; 	R(JNZ(loc_3a678));	// 88754 jnz     short loc_3A678 ;~ 2BED:01B9
cs=0x2bed;eip=0x0001bb; 	X(PUSH(cs));	// 88755 push    cs ;~ 2BED:01BB
cs=0x2bed;eip=0x0001bc; 	R(CALL(read_line_helper,0));	// 88756 call    near ptr read_line_helper ;~ 2BED:01BC
cs=0x2bed;eip=0x0001bf; 	X(MOV(word_42a22, 0));	// 88757 mov     word_42A22, 0 ;~ 2BED:01BF
cs=0x2bed;eip=0x0001c5; 	R(JMP(loc_3a7e9));	// 88758 jmp     loc_3A7E9 ;~ 2BED:01C5
loc_3a678:
	// 10467 
cs=0x2bed;eip=0x0001c8; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0x4F00));	// 88762 cmp     [bp+var_8], 4F00h ;~ 2BED:01C8
cs=0x2bed;eip=0x0001cd; 	R(JNZ(loc_3a694));	// 88763 jnz     short loc_3A694 ;~ 2BED:01CD
cs=0x2bed;eip=0x0001cf; 	X(PUSH(cs));	// 88764 push    cs ;~ 2BED:01CF
cs=0x2bed;eip=0x0001d0; 	R(CALL(read_line_helper,0));	// 88765 call    near ptr read_line_helper ;~ 2BED:01D0
cs=0x2bed;eip=0x0001d3; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 88766 push    word ptr [bp+arg_2] ; char * ;~ 2BED:01D3
cs=0x2bed;eip=0x0001d6; 	R(CALLF(_strlen,0));	// 88767 call    _strlen ;~ 2BED:01D6
cs=0x2bed;eip=0x0001db; 	T(ADD(sp, 2));	// 88768 add     sp, 2 ;~ 2BED:01DB
cs=0x2bed;eip=0x0001de; 	X(MOV(word_42a22, ax));	// 88769 mov     word_42A22, ax ;~ 2BED:01DE
cs=0x2bed;eip=0x0001e1; 	R(JMP(loc_3a7e9));	// 88770 jmp     loc_3A7E9 ;~ 2BED:01E1
loc_3a694:
	// 10468 
cs=0x2bed;eip=0x0001e4; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0x5200));	// 88774 cmp     [bp+var_8], 5200h ;~ 2BED:01E4
cs=0x2bed;eip=0x0001e9; 	R(JNZ(loc_3a6c2));	// 88775 jnz     short loc_3A6C2 ;~ 2BED:01E9
cs=0x2bed;eip=0x0001eb; 	X(PUSH(cs));	// 88776 push    cs ;~ 2BED:01EB
cs=0x2bed;eip=0x0001ec; 	R(CALL(read_line_helper,0));	// 88777 call    near ptr read_line_helper ;~ 2BED:01EC
cs=0x2bed;eip=0x0001ef; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0));	// 88778 cmp     [bp+var_A], 0 ;~ 2BED:01EF
cs=0x2bed;eip=0x0001f3; 	R(JNZ(loc_3a6b4));	// 88779 jnz     short loc_3A6B4 ;~ 2BED:01F3
cs=0x2bed;eip=0x0001f5; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 1));	// 88780 mov     [bp+var_A], 1 ;~ 2BED:01F5
cs=0x2bed;eip=0x0001fa; 	X(MOV(word_42a16, 8));	// 88781 mov     word_42A16, 8 ;~ 2BED:01FA
cs=0x2bed;eip=0x000200; 	R(JMP(loc_3a7e9));	// 88782 jmp     loc_3A7E9 ;~ 2BED:0200
loc_3a6b4:
	// 10469 
cs=0x2bed;eip=0x000204; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0));	// 88787 mov     [bp+var_A], 0 ;~ 2BED:0204
cs=0x2bed;eip=0x000209; 	X(MOV(word_42a16, 1));	// 88788 mov     word_42A16, 1 ;~ 2BED:0209
cs=0x2bed;eip=0x00020f; 	R(JMP(loc_3a7e9));	// 88789 jmp     loc_3A7E9 ;~ 2BED:020F
loc_3a6c2:
	// 10470 
cs=0x2bed;eip=0x000212; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0x5300));	// 88793 cmp     [bp+var_8], 5300h ;~ 2BED:0212
cs=0x2bed;eip=0x000217; 	R(JNZ(loc_3a710));	// 88794 jnz     short loc_3A710 ;~ 2BED:0217
cs=0x2bed;eip=0x000219; 	T(MOV(ax, word_42a22));	// 88795 mov     ax, word_42A22 ;~ 2BED:0219
cs=0x2bed;eip=0x00021c; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), ax));	// 88796 cmp     [bp+arg_6], ax ;~ 2BED:021C
cs=0x2bed;eip=0x00021f; 	R(JG(loc_3a6d4));	// 88797 jg      short loc_3A6D4 ;~ 2BED:021F
cs=0x2bed;eip=0x000221; 	R(JMP(loc_3a7ed));	// 88798 jmp     loc_3A7ED ;~ 2BED:0221
loc_3a6d4:
	// 10471 
cs=0x2bed;eip=0x000224; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 88802 mov     bx, word ptr [bp+arg_2] ;~ 2BED:0224
cs=0x2bed;eip=0x000227; 	T(MOV(si, ax));	// 88803 mov     si, ax ;~ 2BED:0227
cs=0x2bed;eip=0x000229; 	T(CMP(*(raddr(ds,bx+si)), 0));	// 88804 cmp     byte ptr [bx+si], 0 ;~ 2BED:0229
cs=0x2bed;eip=0x00022c; 	R(JNZ(loc_3a6e1));	// 88805 jnz     short loc_3A6E1 ;~ 2BED:022C
cs=0x2bed;eip=0x00022e; 	R(JMP(loc_3a7ed));	// 88806 jmp     loc_3A7ED ;~ 2BED:022E
loc_3a6e1:
	// 10472 
cs=0x2bed;eip=0x000231; 	X(PUSH(cs));	// 88810 push    cs ;~ 2BED:0231
cs=0x2bed;eip=0x000232; 	R(CALL(read_line_helper,0));	// 88811 call    near ptr read_line_helper ;~ 2BED:0232
cs=0x2bed;eip=0x000235; 	T(MOV(ax, word_42a22));	// 88812 mov     ax, word_42A22 ;~ 2BED:0235
cs=0x2bed;eip=0x000238; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 88813 mov     [bp+var_6], ax ;~ 2BED:0238
cs=0x2bed;eip=0x00023b; 	R(JMP(loc_3a6fc));	// 88814 jmp     short loc_3A6FC ;~ 2BED:023B
loc_3a6ee:
	// 10473 
cs=0x2bed;eip=0x00023e; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_6))));	// 88819 mov     si, [bp+var_6] ;~ 2BED:023E
cs=0x2bed;eip=0x000241; 	T(ADD(si, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 88820 add     si, word ptr [bp+arg_2] ;~ 2BED:0241
cs=0x2bed;eip=0x000244; 	T(MOV(al, *(raddr(ds,si+1))));	// 88821 mov     al, [si+1] ;~ 2BED:0244
cs=0x2bed;eip=0x000247; 	X(MOV(*(raddr(ds,si)), al));	// 88822 mov     [si], al ;~ 2BED:0247
cs=0x2bed;eip=0x000249; 	X(INC(*(dw*)(raddr(ss,bp+var_6))));	// 88823 inc     [bp+var_6] ;~ 2BED:0249
loc_3a6fc:
	// 10474 
cs=0x2bed;eip=0x00024c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 88826 mov     ax, [bp+arg_6] ;~ 2BED:024C
cs=0x2bed;eip=0x00024f; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), ax));	// 88827 cmp     [bp+var_6], ax ;~ 2BED:024F
cs=0x2bed;eip=0x000252; 	R(JL(loc_3a6ee));	// 88828 jl      short loc_3A6EE ;~ 2BED:0252
loc_3a704:
	// 10475 
cs=0x2bed;eip=0x000254; 	T(MOV(si, ax));	// 88831 mov     si, ax ;~ 2BED:0254
cs=0x2bed;eip=0x000256; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 88832 mov     bx, word ptr [bp+arg_2] ;~ 2BED:0256
cs=0x2bed;eip=0x000259; 	X(MOV(*(raddr(ds,bx+si-1)), 0x20));	// 88833 mov     byte ptr [bx+si-1], 20h ; ' ' ;~ 2BED:0259
cs=0x2bed;eip=0x00025d; 	R(JMP(loc_3a7e5));	// 88834 jmp     loc_3A7E5 ;~ 2BED:025D
loc_3a710:
	// 10476 
cs=0x2bed;eip=0x000260; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 8));	// 88838 cmp     [bp+var_8], 8 ;~ 2BED:0260
cs=0x2bed;eip=0x000264; 	R(JNZ(loc_3a748));	// 88839 jnz     short loc_3A748 ;~ 2BED:0264
cs=0x2bed;eip=0x000266; 	T(CMP(word_42a22, 0));	// 88840 cmp     word_42A22, 0 ;~ 2BED:0266
cs=0x2bed;eip=0x00026b; 	R(JNZ(loc_3a720));	// 88841 jnz     short loc_3A720 ;~ 2BED:026B
cs=0x2bed;eip=0x00026d; 	R(JMP(loc_3a7ed));	// 88842 jmp     loc_3A7ED ;~ 2BED:026D
loc_3a720:
	// 10477 
cs=0x2bed;eip=0x000270; 	X(PUSH(cs));	// 88846 push    cs ;~ 2BED:0270
cs=0x2bed;eip=0x000271; 	R(CALL(read_line_helper,0));	// 88847 call    near ptr read_line_helper ;~ 2BED:0271
cs=0x2bed;eip=0x000274; 	X(DEC(word_42a22));	// 88848 dec     word_42A22 ;~ 2BED:0274
cs=0x2bed;eip=0x000278; 	T(MOV(ax, word_42a22));	// 88849 mov     ax, word_42A22 ;~ 2BED:0278
cs=0x2bed;eip=0x00027b; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 88850 mov     [bp+var_6], ax ;~ 2BED:027B
cs=0x2bed;eip=0x00027e; 	R(JMP(loc_3a73e));	// 88851 jmp     short loc_3A73E ;~ 2BED:027E
loc_3a730:
	// 10478 
cs=0x2bed;eip=0x000280; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_6))));	// 88855 mov     si, [bp+var_6] ;~ 2BED:0280
cs=0x2bed;eip=0x000283; 	T(ADD(si, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 88856 add     si, word ptr [bp+arg_2] ;~ 2BED:0283
cs=0x2bed;eip=0x000286; 	T(MOV(al, *(raddr(ds,si+1))));	// 88857 mov     al, [si+1] ;~ 2BED:0286
cs=0x2bed;eip=0x000289; 	X(MOV(*(raddr(ds,si)), al));	// 88858 mov     [si], al ;~ 2BED:0289
cs=0x2bed;eip=0x00028b; 	X(INC(*(dw*)(raddr(ss,bp+var_6))));	// 88859 inc     [bp+var_6] ;~ 2BED:028B
loc_3a73e:
	// 10479 
cs=0x2bed;eip=0x00028e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 88862 mov     ax, [bp+arg_6] ;~ 2BED:028E
cs=0x2bed;eip=0x000291; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), ax));	// 88863 cmp     [bp+var_6], ax ;~ 2BED:0291
cs=0x2bed;eip=0x000294; 	R(JL(loc_3a730));	// 88864 jl      short loc_3A730 ;~ 2BED:0294
cs=0x2bed;eip=0x000296; 	R(JMP(loc_3a704));	// 88865 jmp     short loc_3A704 ;~ 2BED:0296
loc_3a748:
	// 10480 
cs=0x2bed;eip=0x000298; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0x20));	// 88869 cmp     [bp+var_8], 20h ; ' ' ;~ 2BED:0298
cs=0x2bed;eip=0x00029c; 	R(JGE(loc_3a751));	// 88870 jge     short loc_3A751 ;~ 2BED:029C
cs=0x2bed;eip=0x00029e; 	R(JMP(loc_3a7ed));	// 88871 jmp     loc_3A7ED ;~ 2BED:029E
loc_3a751:
	// 10481 
cs=0x2bed;eip=0x0002a1; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0x7A));	// 88875 cmp     [bp+var_8], 7Ah ; 'z' ;~ 2BED:02A1
cs=0x2bed;eip=0x0002a5; 	R(JLE(loc_3a75a));	// 88876 jle     short loc_3A75A ;~ 2BED:02A5
cs=0x2bed;eip=0x0002a7; 	R(JMP(loc_3a7ed));	// 88877 jmp     loc_3A7ED ;~ 2BED:02A7
loc_3a75a:
	// 10482 
cs=0x2bed;eip=0x0002aa; 	T(MOV(ax, word_42a22));	// 88881 mov     ax, word_42A22 ;~ 2BED:02AA
cs=0x2bed;eip=0x0002ad; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), ax));	// 88882 cmp     [bp+arg_6], ax ;~ 2BED:02AD
cs=0x2bed;eip=0x0002b0; 	R(JG(loc_3a765));	// 88883 jg      short loc_3A765 ;~ 2BED:02B0
cs=0x2bed;eip=0x0002b2; 	R(JMP(loc_3a7ed));	// 88884 jmp     loc_3A7ED ;~ 2BED:02B2
loc_3a765:
	// 10483 
cs=0x2bed;eip=0x0002b5; 	X(PUSH(cs));	// 88888 push    cs ;~ 2BED:02B5
cs=0x2bed;eip=0x0002b6; 	R(CALL(read_line_helper,0));	// 88889 call    near ptr read_line_helper ;~ 2BED:02B6
cs=0x2bed;eip=0x0002b9; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0));	// 88890 cmp     [bp+var_2], 0 ;~ 2BED:02B9
cs=0x2bed;eip=0x0002bd; 	R(JZ(loc_3a796));	// 88891 jz      short loc_3A796 ;~ 2BED:02BD
cs=0x2bed;eip=0x0002bf; 	T(TEST(*(raddr(ss,bp+arg_0)), 4));	// 88892 test    [bp+arg_0], 4 ;~ 2BED:02BF
cs=0x2bed;eip=0x0002c3; 	R(JNZ(loc_3a796));	// 88893 jnz     short loc_3A796 ;~ 2BED:02C3
cs=0x2bed;eip=0x0002c5; 	X(MOV(word_42a22, 0));	// 88894 mov     word_42A22, 0 ;~ 2BED:02C5
cs=0x2bed;eip=0x0002cb; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0));	// 88895 mov     [bp+var_6], 0 ;~ 2BED:02CB
cs=0x2bed;eip=0x0002d0; 	R(JMP(loc_3a78e));	// 88896 jmp     short loc_3A78E ;~ 2BED:02D0
loc_3a782:
	// 10484 
cs=0x2bed;eip=0x0002d2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_6))));	// 88900 mov     bx, [bp+var_6] ;~ 2BED:02D2
cs=0x2bed;eip=0x0002d5; 	T(MOV(si, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 88901 mov     si, word ptr [bp+arg_2] ;~ 2BED:02D5
cs=0x2bed;eip=0x0002d8; 	X(MOV(*(raddr(ds,bx+si)), 0x20));	// 88902 mov     byte ptr [bx+si], 20h ; ' ' ;~ 2BED:02D8
cs=0x2bed;eip=0x0002db; 	X(INC(*(dw*)(raddr(ss,bp+var_6))));	// 88903 inc     [bp+var_6] ;~ 2BED:02DB
loc_3a78e:
	// 10485 
cs=0x2bed;eip=0x0002de; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 88906 mov     ax, [bp+arg_6] ;~ 2BED:02DE
cs=0x2bed;eip=0x0002e1; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), ax));	// 88907 cmp     [bp+var_6], ax ;~ 2BED:02E1
cs=0x2bed;eip=0x0002e4; 	R(JL(loc_3a782));	// 88908 jl      short loc_3A782 ;~ 2BED:02E4
loc_3a796:
	// 10486 
cs=0x2bed;eip=0x0002e6; 	T(MOV(si, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 88912 mov     si, word ptr [bp+arg_2] ;~ 2BED:02E6
cs=0x2bed;eip=0x0002e9; 	T(ADD(si, word_42a22));	// 88913 add     si, word_42A22 ;~ 2BED:02E9
cs=0x2bed;eip=0x0002ed; 	T(CMP(*(raddr(ds,si)), 0));	// 88914 cmp     byte ptr [si], 0 ;~ 2BED:02ED
cs=0x2bed;eip=0x0002f0; 	R(JNZ(loc_3a7a6));	// 88915 jnz     short loc_3A7A6 ;~ 2BED:02F0
cs=0x2bed;eip=0x0002f2; 	X(MOV(*(raddr(ds,si+1)), 0));	// 88916 mov     byte ptr [si+1], 0 ;~ 2BED:02F2
loc_3a7a6:
	// 10487 
cs=0x2bed;eip=0x0002f6; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0));	// 88919 cmp     [bp+var_A], 0 ;~ 2BED:02F6
cs=0x2bed;eip=0x0002fa; 	R(JZ(loc_3a7ce));	// 88920 jz      short loc_3A7CE ;~ 2BED:02FA
cs=0x2bed;eip=0x0002fc; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 88921 mov     ax, [bp+arg_6] ;~ 2BED:02FC
cs=0x2bed;eip=0x0002ff; 	T(SUB(ax, 2));	// 88922 sub     ax, 2 ;~ 2BED:02FF
cs=0x2bed;eip=0x000302; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 88923 mov     [bp+var_6], ax ;~ 2BED:0302
cs=0x2bed;eip=0x000305; 	R(JMP(loc_3a7c6));	// 88924 jmp     short loc_3A7C6 ;~ 2BED:0305
loc_3a7b8:
	// 10488 
cs=0x2bed;eip=0x000308; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_6))));	// 88929 mov     si, [bp+var_6] ;~ 2BED:0308
cs=0x2bed;eip=0x00030b; 	T(ADD(si, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 88930 add     si, word ptr [bp+arg_2] ;~ 2BED:030B
cs=0x2bed;eip=0x00030e; 	T(MOV(al, *(raddr(ds,si))));	// 88931 mov     al, [si] ;~ 2BED:030E
cs=0x2bed;eip=0x000310; 	X(MOV(*(raddr(ds,si+1)), al));	// 88932 mov     [si+1], al ;~ 2BED:0310
cs=0x2bed;eip=0x000313; 	X(DEC(*(dw*)(raddr(ss,bp+var_6))));	// 88933 dec     [bp+var_6] ;~ 2BED:0313
loc_3a7c6:
	// 10489 
cs=0x2bed;eip=0x000316; 	T(MOV(ax, word_42a22));	// 88936 mov     ax, word_42A22 ;~ 2BED:0316
cs=0x2bed;eip=0x000319; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), ax));	// 88937 cmp     [bp+var_6], ax ;~ 2BED:0319
cs=0x2bed;eip=0x00031c; 	R(JGE(loc_3a7b8));	// 88938 jge     short loc_3A7B8 ;~ 2BED:031C
loc_3a7ce:
	// 10490 
cs=0x2bed;eip=0x00031e; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 88941 mov     bx, word ptr [bp+arg_2] ;~ 2BED:031E
cs=0x2bed;eip=0x000321; 	T(MOV(si, word_42a22));	// 88942 mov     si, word_42A22 ;~ 2BED:0321
cs=0x2bed;eip=0x000325; 	T(MOV(al, *(db*)(raddr(ss,bp+var_8))));	// 88943 mov     al, byte ptr [bp+var_8] ;~ 2BED:0325
cs=0x2bed;eip=0x000328; 	X(MOV(*(raddr(ds,bx+si)), al));	// 88944 mov     [bx+si], al ;~ 2BED:0328
cs=0x2bed;eip=0x00032a; 	T(MOV(ax, si));	// 88945 mov     ax, si ;~ 2BED:032A
cs=0x2bed;eip=0x00032c; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), ax));	// 88946 cmp     [bp+arg_6], ax ;~ 2BED:032C
cs=0x2bed;eip=0x00032f; 	R(JLE(loc_3a7e5));	// 88947 jle     short loc_3A7E5 ;~ 2BED:032F
cs=0x2bed;eip=0x000331; 	X(INC(word_42a22));	// 88948 inc     word_42A22 ;~ 2BED:0331
loc_3a7e5:
	// 10491 
cs=0x2bed;eip=0x000335; 	X(PUSH(cs));	// 88952 push    cs ;~ 2BED:0335
cs=0x2bed;eip=0x000336; 	R(CALL(read_line_helper2,0));	// 88953 call    near ptr read_line_helper2 ;~ 2BED:0336
loc_3a7e9:
	// 10492 
cs=0x2bed;eip=0x000339; 	X(PUSH(cs));	// 88957 push    cs ;~ 2BED:0339
cs=0x2bed;eip=0x00033a; 	R(CALL(read_line_helper,0));	// 88958 call    near ptr read_line_helper ;~ 2BED:033A
loc_3a7ed:
	// 10493 
cs=0x2bed;eip=0x00033d; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 88962 mov     [bp+var_2], 0 ;~ 2BED:033D
cs=0x2bed;eip=0x000342; 	R(JMP(loc_3a568));	// 88963 jmp     loc_3A568 ;~ 2BED:0342
read_line_helper:
	// 88973 
#undef var_6
#define var_6 -6
	// 88976 var_6           = word ptr -6 ;~ 2BED:0346
#undef var_4
#define var_4 -4
	// 88977 var_4           = word ptr -4 ;~ 2BED:0346
#undef var_2
#define var_2 -2
	// 88978 var_2           = word ptr -2 ;~ 2BED:0346
ret_2bed_346:
	// 10494 
cs=0x2bed;eip=0x000346; 	X(PUSH(bp));	// 88980 push    bp ;~ 2BED:0346
cs=0x2bed;eip=0x000347; 	T(MOV(bp, sp));	// 88981 mov     bp, sp ;~ 2BED:0347
cs=0x2bed;eip=0x000349; 	T(SUB(sp, 6));	// 88982 sub     sp, 6 ;~ 2BED:0349
cs=0x2bed;eip=0x00034c; 	T(CMP(word_42a1c, 0));	// 88983 cmp     word_42A1C, 0 ;~ 2BED:034C
cs=0x2bed;eip=0x000351; 	R(JNZ(loc_3a806));	// 88984 jnz     short loc_3A806 ;~ 2BED:0351
cs=0x2bed;eip=0x000353; 	R(JMP(loc_3a891));	// 88985 jmp     loc_3A891 ;~ 2BED:0353
loc_3a806:
	// 10495 
cs=0x2bed;eip=0x000356; 	X(PUSH(off_42a1e));	// 88989 push    off_42A1E       ; char * ;~ 2BED:0356
cs=0x2bed;eip=0x00035a; 	R(CALLF(_strlen,0));	// 88990 call    _strlen ;~ 2BED:035A
cs=0x2bed;eip=0x00035f; 	T(ADD(sp, 2));	// 88991 add     sp, 2 ;~ 2BED:035F
cs=0x2bed;eip=0x000362; 	T(CMP(ax, word_42a22));	// 88992 cmp     ax, word_42A22 ;~ 2BED:0362
cs=0x2bed;eip=0x000366; 	R(JGE(loc_3a827));	// 88993 jge     short loc_3A827 ;~ 2BED:0366
cs=0x2bed;eip=0x000368; 	X(PUSH(off_42a1e));	// 88994 push    off_42A1E       ; char * ;~ 2BED:0368
cs=0x2bed;eip=0x00036c; 	R(CALLF(_strlen,0));	// 88995 call    _strlen ;~ 2BED:036C
cs=0x2bed;eip=0x000371; 	T(ADD(sp, 2));	// 88996 add     sp, 2 ;~ 2BED:0371
cs=0x2bed;eip=0x000374; 	X(MOV(word_42a22, ax));	// 88997 mov     word_42A22, ax ;~ 2BED:0374
loc_3a827:
	// 10496 
cs=0x2bed;eip=0x000377; 	T(MOV(ax, 1));	// 89000 mov     ax, 1 ;~ 2BED:0377
cs=0x2bed;eip=0x00037a; 	X(PUSH(ax));	// 89001 push    ax ;~ 2BED:037A
cs=0x2bed;eip=0x00037b; 	T(MOV(ax, word_42a22));	// 89002 mov     ax, word_42A22 ;~ 2BED:037B
cs=0x2bed;eip=0x00037e; 	T(ADD(ax, off_42a1e));	// 89003 add     ax, off_42A1E ;~ 2BED:037E
cs=0x2bed;eip=0x000382; 	X(PUSH(ax));	// 89004 push    ax ;~ 2BED:0382
cs=0x2bed;eip=0x000383; 	R(CALLF(font_op,0));	// 89005 call    font_op ;~ 2BED:0383
cs=0x2bed;eip=0x000388; 	T(ADD(sp, 4));	// 89006 add     sp, 4 ;~ 2BED:0388
cs=0x2bed;eip=0x00038b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 89007 mov     [bp+var_2], ax ;~ 2BED:038B
cs=0x2bed;eip=0x00038e; 	T(OR(ax, ax));	// 89008 or      ax, ax ;~ 2BED:038E
cs=0x2bed;eip=0x000390; 	R(JNZ(loc_3a851));	// 89009 jnz     short loc_3A851 ;~ 2BED:0390
cs=0x2bed;eip=0x000392; 	T(MOV(ax, 0x53CA));	// 89010 mov     ax, 53CAh ;~ 2BED:0392
cs=0x2bed;eip=0x000395; 	X(PUSH(ax));	// 89011 push    ax ;~ 2BED:0395
cs=0x2bed;eip=0x000396; 	R(CALLF(font_op2,0));	// 89012 call    font_op2 ;~ 2BED:0396
cs=0x2bed;eip=0x00039b; 	T(ADD(sp, 2));	// 89013 add     sp, 2 ;~ 2BED:039B
cs=0x2bed;eip=0x00039e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 89014 mov     [bp+var_2], ax ;~ 2BED:039E
loc_3a851:
	// 10497 
cs=0x2bed;eip=0x0003a1; 	X(PUSH(word_42a22));	// 89017 push    word_42A22 ;~ 2BED:03A1
cs=0x2bed;eip=0x0003a5; 	X(PUSH(off_42a1e));	// 89018 push    off_42A1E ;~ 2BED:03A5
cs=0x2bed;eip=0x0003a9; 	R(CALLF(font_op,0));	// 89019 call    font_op ;~ 2BED:03A9
cs=0x2bed;eip=0x0003ae; 	T(ADD(sp, 4));	// 89020 add     sp, 4 ;~ 2BED:03AE
cs=0x2bed;eip=0x0003b1; 	T(ADD(ax, word_42a18));	// 89021 add     ax, word_42A18 ;~ 2BED:03B1
cs=0x2bed;eip=0x0003b5; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 89022 mov     [bp+var_4], ax ;~ 2BED:03B5
cs=0x2bed;eip=0x0003b8; 	T(LES(bx, *(dd*)(((db*)&word_405fe))));	// 89023 les     bx, dword ptr word_405FE ;~ 2BED:03B8
cs=0x2bed;eip=0x0003bc; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x12))));	// 89024 mov     ax, es:[bx+12h] ;~ 2BED:03BC
cs=0x2bed;eip=0x0003c0; 	T(ADD(ax, word_42a1a));	// 89025 add     ax, word_42A1A ;~ 2BED:03C0
cs=0x2bed;eip=0x0003c4; 	T(SUB(ax, word_42a16));	// 89026 sub     ax, word_42A16 ;~ 2BED:03C4
cs=0x2bed;eip=0x0003c8; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 89027 mov     [bp+var_6], ax ;~ 2BED:03C8
cs=0x2bed;eip=0x0003cb; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 89028 push    word ptr es:[bx] ;~ 2BED:03CB
cs=0x2bed;eip=0x0003ce; 	X(PUSH(word_42a16));	// 89029 push    word_42A16 ;~ 2BED:03CE
cs=0x2bed;eip=0x0003d2; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 89030 push    [bp+var_2] ;~ 2BED:03D2
cs=0x2bed;eip=0x0003d5; 	X(PUSH(ax));	// 89031 push    ax ;~ 2BED:03D5
cs=0x2bed;eip=0x0003d6; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 89032 push    [bp+var_4] ;~ 2BED:03D6
cs=0x2bed;eip=0x0003d9; 	R(CALLF(sub_35b76,0));	// 89033 call    sub_35B76 ;~ 2BED:03D9
cs=0x2bed;eip=0x0003de; 	T(ADD(sp, 0x0A));	// 89034 add     sp, 0Ah ;~ 2BED:03DE
loc_3a891:
	// 10498 
cs=0x2bed;eip=0x0003e1; 	T(MOV(sp, bp));	// 89037 mov     sp, bp ;~ 2BED:03E1
cs=0x2bed;eip=0x0003e3; 	X(POP(bp));	// 89038 pop     bp ;~ 2BED:03E3
cs=0x2bed;eip=0x0003e4; 	R(RETF(0));	// 89039 retf ;~ 2BED:03E4
read_line_helper2:
	// 89049 
#undef var_6
#define var_6 -6
	// 89052 var_6           = word ptr -6 ;~ 2BED:03E6
#undef var_4
#define var_4 -4
	// 89053 var_4           = word ptr -4 ;~ 2BED:03E6
#undef var_2
#define var_2 -2
	// 89054 var_2           = word ptr -2 ;~ 2BED:03E6
ret_2bed_3e6:
	// 10499 
cs=0x2bed;eip=0x0003e6; 	X(PUSH(bp));	// 89056 push    bp ;~ 2BED:03E6
cs=0x2bed;eip=0x0003e7; 	T(MOV(bp, sp));	// 89057 mov     bp, sp ;~ 2BED:03E7
cs=0x2bed;eip=0x0003e9; 	T(SUB(sp, 6));	// 89058 sub     sp, 6 ;~ 2BED:03E9
cs=0x2bed;eip=0x0003ec; 	X(PUSH(si));	// 89059 push    si ;~ 2BED:03EC
cs=0x2bed;eip=0x0003ed; 	T(CMP(word_42a20, 0));	// 89060 cmp     word_42A20, 0 ;~ 2BED:03ED
cs=0x2bed;eip=0x0003f2; 	R(JZ(loc_3a8de));	// 89061 jz      short loc_3A8DE ;~ 2BED:03F2
cs=0x2bed;eip=0x0003f4; 	R(JMP(loc_3a8cc));	// 89062 jmp     short loc_3A8CC ;~ 2BED:03F4
loc_3a8a6:
	// 10500 
cs=0x2bed;eip=0x0003f6; 	X(PUSH(off_42a1e));	// 89066 push    off_42A1E       ; char * ;~ 2BED:03F6
cs=0x2bed;eip=0x0003fa; 	R(CALLF(_strlen,0));	// 89067 call    _strlen ;~ 2BED:03FA
cs=0x2bed;eip=0x0003ff; 	T(ADD(sp, 2));	// 89068 add     sp, 2 ;~ 2BED:03FF
cs=0x2bed;eip=0x000402; 	T(OR(ax, ax));	// 89069 or      ax, ax ;~ 2BED:0402
cs=0x2bed;eip=0x000404; 	R(JZ(loc_3a8de));	// 89070 jz      short loc_3A8DE ;~ 2BED:0404
cs=0x2bed;eip=0x000406; 	X(PUSH(off_42a1e));	// 89071 push    off_42A1E       ; char * ;~ 2BED:0406
cs=0x2bed;eip=0x00040a; 	R(CALLF(_strlen,0));	// 89072 call    _strlen ;~ 2BED:040A
cs=0x2bed;eip=0x00040f; 	T(ADD(sp, 2));	// 89073 add     sp, 2 ;~ 2BED:040F
cs=0x2bed;eip=0x000412; 	T(MOV(si, ax));	// 89074 mov     si, ax ;~ 2BED:0412
cs=0x2bed;eip=0x000414; 	T(MOV(bx, off_42a1e));	// 89075 mov     bx, off_42A1E ;~ 2BED:0414
cs=0x2bed;eip=0x000418; 	X(MOV(*(raddr(ds,bx+si-1)), 0));	// 89076 mov     byte ptr [bx+si-1], 0 ;~ 2BED:0418
loc_3a8cc:
	// 10501 
cs=0x2bed;eip=0x00041c; 	X(PUSH(off_42a1e));	// 89079 push    off_42A1E ;~ 2BED:041C
cs=0x2bed;eip=0x000420; 	R(CALLF(font_op2,0));	// 89080 call    font_op2 ;~ 2BED:0420
cs=0x2bed;eip=0x000425; 	T(ADD(sp, 2));	// 89081 add     sp, 2 ;~ 2BED:0425
cs=0x2bed;eip=0x000428; 	T(CMP(ax, word_42a20));	// 89082 cmp     ax, word_42A20 ;~ 2BED:0428
cs=0x2bed;eip=0x00042c; 	R(JG(loc_3a8a6));	// 89083 jg      short loc_3A8A6 ;~ 2BED:042C
loc_3a8de:
	// 10502 
cs=0x2bed;eip=0x00042e; 	X(PUSH(off_42a1e));	// 89087 push    off_42A1E       ; char * ;~ 2BED:042E
cs=0x2bed;eip=0x000432; 	R(CALLF(_strlen,0));	// 89088 call    _strlen ;~ 2BED:0432
cs=0x2bed;eip=0x000437; 	T(ADD(sp, 2));	// 89089 add     sp, 2 ;~ 2BED:0437
cs=0x2bed;eip=0x00043a; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 89090 mov     [bp+var_2], ax ;~ 2BED:043A
cs=0x2bed;eip=0x00043d; 	T(MOV(ax, word_42a22));	// 89091 mov     ax, word_42A22 ;~ 2BED:043D
cs=0x2bed;eip=0x000440; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), ax));	// 89092 cmp     [bp+var_2], ax ;~ 2BED:0440
cs=0x2bed;eip=0x000443; 	R(JGE(loc_3a8fb));	// 89093 jge     short loc_3A8FB ;~ 2BED:0443
cs=0x2bed;eip=0x000445; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 89094 mov     ax, [bp+var_2] ;~ 2BED:0445
cs=0x2bed;eip=0x000448; 	X(MOV(word_42a22, ax));	// 89095 mov     word_42A22, ax ;~ 2BED:0448
loc_3a8fb:
	// 10503 
cs=0x2bed;eip=0x00044b; 	X(PUSH(word_42a1a));	// 89098 push    word_42A1A ;~ 2BED:044B
cs=0x2bed;eip=0x00044f; 	X(PUSH(word_42a18));	// 89099 push    word_42A18 ;~ 2BED:044F
cs=0x2bed;eip=0x000453; 	X(PUSH(off_42a1e));	// 89100 push    off_42A1E ;~ 2BED:0453
cs=0x2bed;eip=0x000457; 	R(CALLF(sub_345bc,0));	// 89101 call    sub_345BC ;~ 2BED:0457
cs=0x2bed;eip=0x00045c; 	T(ADD(sp, 6));	// 89102 add     sp, 6 ;~ 2BED:045C
cs=0x2bed;eip=0x00045f; 	T(CMP(word_42a20, 0));	// 89103 cmp     word_42A20, 0 ;~ 2BED:045F
cs=0x2bed;eip=0x000464; 	R(JZ(loc_3a953));	// 89104 jz      short loc_3A953 ;~ 2BED:0464
cs=0x2bed;eip=0x000466; 	X(PUSH(off_42a1e));	// 89105 push    off_42A1E ;~ 2BED:0466
cs=0x2bed;eip=0x00046a; 	R(CALLF(font_op2,0));	// 89106 call    font_op2 ;~ 2BED:046A
cs=0x2bed;eip=0x00046f; 	T(ADD(sp, 2));	// 89107 add     sp, 2 ;~ 2BED:046F
cs=0x2bed;eip=0x000472; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 89108 mov     [bp+var_6], ax ;~ 2BED:0472
cs=0x2bed;eip=0x000475; 	T(MOV(ax, word_42a20));	// 89109 mov     ax, word_42A20 ;~ 2BED:0475
cs=0x2bed;eip=0x000478; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_6))));	// 89110 sub     ax, [bp+var_6] ;~ 2BED:0478
cs=0x2bed;eip=0x00047b; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 89111 mov     [bp+var_4], ax ;~ 2BED:047B
cs=0x2bed;eip=0x00047e; 	T(OR(ax, ax));	// 89112 or      ax, ax ;~ 2BED:047E
cs=0x2bed;eip=0x000480; 	R(JLE(loc_3a953));	// 89113 jle     short loc_3A953 ;~ 2BED:0480
cs=0x2bed;eip=0x000482; 	T(LES(bx, *(dd*)(((db*)&word_405fe))));	// 89114 les     bx, dword ptr word_405FE ;~ 2BED:0482
cs=0x2bed;eip=0x000486; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 89115 push    word ptr es:[bx+2] ;~ 2BED:0486
cs=0x2bed;eip=0x00048a; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 89116 push    word ptr es:[bx+12h] ;~ 2BED:048A
cs=0x2bed;eip=0x00048e; 	X(PUSH(ax));	// 89117 push    ax ;~ 2BED:048E
cs=0x2bed;eip=0x00048f; 	X(PUSH(word_42a1a));	// 89118 push    word_42A1A ;~ 2BED:048F
cs=0x2bed;eip=0x000493; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 89119 mov     ax, [bp+var_6] ;~ 2BED:0493
cs=0x2bed;eip=0x000496; 	T(ADD(ax, word_42a18));	// 89120 add     ax, word_42A18 ;~ 2BED:0496
cs=0x2bed;eip=0x00049a; 	X(PUSH(ax));	// 89121 push    ax ;~ 2BED:049A
cs=0x2bed;eip=0x00049b; 	R(CALLF(sprite_1_unk2,0));	// 89122 call    sprite_1_unk2 ;~ 2BED:049B
cs=0x2bed;eip=0x0004a0; 	T(ADD(sp, 0x0A));	// 89123 add     sp, 0Ah ;~ 2BED:04A0
loc_3a953:
	// 10504 
cs=0x2bed;eip=0x0004a3; 	X(POP(si));	// 89127 pop     si ;~ 2BED:04A3
cs=0x2bed;eip=0x0004a4; 	T(MOV(sp, bp));	// 89128 mov     sp, bp ;~ 2BED:04A4
cs=0x2bed;eip=0x0004a6; 	X(POP(bp));	// 89129 pop     bp ;~ 2BED:04A6
cs=0x2bed;eip=0x0004a7; 	R(RETF(0));	// 89130 retf ;~ 2BED:04A7

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return true;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
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
        case m2c::kloc_3a806: 	goto loc_3a806;
        case m2c::kloc_3a827: 	goto loc_3a827;
        case m2c::kloc_3a851: 	goto loc_3a851;
        case m2c::kloc_3a891: 	goto loc_3a891;
        case m2c::kloc_3a8a6: 	goto loc_3a8a6;
        case m2c::kloc_3a8cc: 	goto loc_3a8cc;
        case m2c::kloc_3a8de: 	goto loc_3a8de;
        case m2c::kloc_3a8fb: 	goto loc_3a8fb;
        case m2c::kloc_3a953: 	goto loc_3a953;
        case m2c::kread_line: 	goto read_line;
        case m2c::kread_line_helper: 	goto read_line_helper;
        case m2c::kread_line_helper2: 	goto read_line_helper2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

