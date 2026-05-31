/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool prerender_wheel(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    prerender_wheel:
    _begin:
#undef var_11a
#define var_11a -0x11A
	// 80528 var_11A         = word ptr -11Ah ;~ 2869:000E
#undef var_118
#define var_118 -0x118
	// 80529 var_118         = word ptr -118h ;~ 2869:000E
#undef var_116
#define var_116 -0x116
	// 80530 var_116         = word ptr -116h ;~ 2869:000E
#undef var_114
#define var_114 -0x114
	// 80531 var_114         = word ptr -114h ;~ 2869:000E
#undef var_112
#define var_112 -0x112
	// 80532 var_112         = word ptr -112h ;~ 2869:000E
#undef var_110
#define var_110 -0x110
	// 80533 var_110         = word ptr -110h ;~ 2869:000E
#undef var_10e
#define var_10e -0x10E
	// 80534 var_10E         = word ptr -10Eh ;~ 2869:000E
#undef var_10c
#define var_10c -0x10C
	// 80535 var_10C         = word ptr -10Ch ;~ 2869:000E
#undef var_10a
#define var_10a -0x10A
	// 80536 var_10A         = byte ptr -10Ah ;~ 2869:000E
#undef var_d2
#define var_d2 -0x0D2
	// 80537 var_D2          = byte ptr -0D2h ;~ 2869:000E
#undef var_ce
#define var_ce -0x0CE
	// 80538 var_CE          = byte ptr -0CEh ;~ 2869:000E
#undef var_92
#define var_92 -0x92
	// 80539 var_92          = byte ptr -92h ;~ 2869:000E
#undef var_8e
#define var_8e -0x8E
	// 80540 var_8E          = word ptr -8Eh ;~ 2869:000E
#undef var_8c
#define var_8c -0x8C
	// 80541 var_8C          = word ptr -8Ch ;~ 2869:000E
#undef var_4e
#define var_4e -0x4E
	// 80542 var_4E          = byte ptr -4Eh ;~ 2869:000E
#undef var_a
#define var_a -0x0A
	// 80543 var_A           = byte ptr -0Ah ;~ 2869:000E
#undef var_6
#define var_6 -6
	// 80544 var_6           = word ptr -6 ;~ 2869:000E
#undef var_4
#define var_4 -4
	// 80545 var_4           = word ptr -4 ;~ 2869:000E
#undef var_2
#define var_2 -2
	// 80546 var_2           = word ptr -2 ;~ 2869:000E
#undef arg_0
#define arg_0 6
	// 80547 arg_0           = word ptr  6 ;~ 2869:000E
#undef arg_2
#define arg_2 8
	// 80548 arg_2           = word ptr  8 ;~ 2869:000E
#undef arg_4
#define arg_4 0x0A
	// 80549 arg_4           = word ptr  0Ah ;~ 2869:000E
#undef arg_6
#define arg_6 0x0C
	// 80550 arg_6           = word ptr  0Ch ;~ 2869:000E
#undef arg_8
#define arg_8 0x0E
	// 80551 arg_8           = word ptr  0Eh ;~ 2869:000E
cs=0x2869;eip=0x00000e; 	X(PUSH(bp));	// 80553 push    bp ;~ 2869:000E
cs=0x2869;eip=0x00000f; 	T(MOV(bp, sp));	// 80554 mov     bp, sp ;~ 2869:000F
cs=0x2869;eip=0x000011; 	T(SUB(sp, 0x11A));	// 80555 sub     sp, 11Ah ;~ 2869:0011
cs=0x2869;eip=0x000015; 	X(PUSH(si));	// 80556 push    si ;~ 2869:0015
cs=0x2869;eip=0x000016; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 80557 push    [bp+arg_2] ;~ 2869:0016
cs=0x2869;eip=0x000019; 	T(ax = bp+var_10e);	// 80558 lea     ax, [bp+var_10E] ;~ 2869:0019
cs=0x2869;eip=0x00001d; 	X(PUSH(ax));	// 80559 push    ax ;~ 2869:001D
cs=0x2869;eip=0x00001e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 80560 push    [bp+arg_0] ;~ 2869:001E
cs=0x2869;eip=0x000021; 	J(CALLF(prerender_wheel_helper,0));	// 80561 call    preRender_wheel_helper ;~ 2869:0021
cs=0x2869;eip=0x000026; 	T(ADD(sp, 6));	// 80562 add     sp, 6 ;~ 2869:0026
cs=0x2869;eip=0x000029; 	T(ax = bp+var_10e);	// 80563 lea     ax, [bp+var_10E] ;~ 2869:0029
cs=0x2869;eip=0x00002d; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 80564 mov     [bp+var_2], ax ;~ 2869:002D
cs=0x2869;eip=0x000030; 	X(MOV(*(dw*)(raddr(ss,bp+var_110)), 0));	// 80565 mov     [bp+var_110], 0 ;~ 2869:0030
loc_36ca6:
	// 9465 
cs=0x2869;eip=0x000036; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 80568 mov     bx, [bp+var_2] ;~ 2869:0036
cs=0x2869;eip=0x000039; 	X(PUSH(*(dw*)(raddr(ds,bx+0x82))));	// 80569 push    word ptr [bx+82h] ;~ 2869:0039
cs=0x2869;eip=0x00003d; 	X(PUSH(*(dw*)(raddr(ds,bx+0x80))));	// 80570 push    word ptr [bx+80h] ;~ 2869:003D
cs=0x2869;eip=0x000041; 	X(PUSH(*(dw*)(raddr(ds,bx+0x86))));	// 80571 push    word ptr [bx+86h] ;~ 2869:0041
cs=0x2869;eip=0x000045; 	X(PUSH(*(dw*)(raddr(ds,bx+0x84))));	// 80572 push    word ptr [bx+84h] ;~ 2869:0045
cs=0x2869;eip=0x000049; 	X(PUSH(*(dw*)(raddr(ds,bx+6))));	// 80573 push    word ptr [bx+6] ;~ 2869:0049
cs=0x2869;eip=0x00004c; 	X(PUSH(*(dw*)(raddr(ds,bx+4))));	// 80574 push    word ptr [bx+4] ;~ 2869:004C
cs=0x2869;eip=0x00004f; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 80575 push    word ptr [bx+2] ;~ 2869:004F
cs=0x2869;eip=0x000052; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 80576 push    word ptr [bx] ;~ 2869:0052
cs=0x2869;eip=0x000054; 	T(MOV(ax, 4));	// 80577 mov     ax, 4 ;~ 2869:0054
cs=0x2869;eip=0x000057; 	X(PUSH(ax));	// 80578 push    ax ;~ 2869:0057
cs=0x2869;eip=0x000058; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 80579 push    [bp+arg_4] ;~ 2869:0058
cs=0x2869;eip=0x00005b; 	J(CALLF(prerender_wheel_helper4,0));	// 80580 call    preRender_wheel_helper4 ;~ 2869:005B
cs=0x2869;eip=0x000060; 	T(ADD(sp, 0x14));	// 80581 add     sp, 14h ;~ 2869:0060
cs=0x2869;eip=0x000063; 	X(ADD(*(dw*)(raddr(ss,bp+var_2)), 4));	// 80582 add     [bp+var_2], 4 ;~ 2869:0063
cs=0x2869;eip=0x000067; 	X(INC(*(dw*)(raddr(ss,bp+var_110))));	// 80583 inc     [bp+var_110] ;~ 2869:0067
cs=0x2869;eip=0x00006b; 	T(CMP(*(dw*)(raddr(ss,bp+var_110)), 0x0F));	// 80584 cmp     [bp+var_110], 0Fh ;~ 2869:006B
cs=0x2869;eip=0x000070; 	J(JL(loc_36ca6));	// 80585 jl      short loc_36CA6 ;~ 2869:0070
cs=0x2869;eip=0x000072; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 80586 mov     bx, [bp+var_2] ;~ 2869:0072
cs=0x2869;eip=0x000075; 	X(PUSH(*(dw*)(raddr(ds,bx+0x82))));	// 80587 push    word ptr [bx+82h] ;~ 2869:0075
cs=0x2869;eip=0x000079; 	X(PUSH(*(dw*)(raddr(ds,bx+0x80))));	// 80588 push    word ptr [bx+80h] ;~ 2869:0079
cs=0x2869;eip=0x00007d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8c))));	// 80589 push    [bp+var_8C] ;~ 2869:007D
cs=0x2869;eip=0x000081; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8e))));	// 80590 push    [bp+var_8E] ;~ 2869:0081
cs=0x2869;eip=0x000085; 	X(PUSH(*(dw*)(raddr(ss,bp+var_10c))));	// 80591 push    [bp+var_10C] ;~ 2869:0085
cs=0x2869;eip=0x000089; 	X(PUSH(*(dw*)(raddr(ss,bp+var_10e))));	// 80592 push    [bp+var_10E] ;~ 2869:0089
cs=0x2869;eip=0x00008d; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 80593 push    word ptr [bx+2] ;~ 2869:008D
cs=0x2869;eip=0x000090; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 80594 push    word ptr [bx] ;~ 2869:0090
cs=0x2869;eip=0x000092; 	T(MOV(ax, 4));	// 80595 mov     ax, 4 ;~ 2869:0092
cs=0x2869;eip=0x000095; 	X(PUSH(ax));	// 80596 push    ax ;~ 2869:0095
cs=0x2869;eip=0x000096; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 80597 push    [bp+arg_4] ;~ 2869:0096
cs=0x2869;eip=0x000099; 	J(CALLF(prerender_wheel_helper4,0));	// 80598 call    preRender_wheel_helper4 ;~ 2869:0099
cs=0x2869;eip=0x00009e; 	T(ADD(sp, 0x14));	// 80599 add     sp, 14h ;~ 2869:009E
cs=0x2869;eip=0x0000a1; 	T(ax = bp+var_10a);	// 80600 lea     ax, [bp+var_10A] ;~ 2869:00A1
cs=0x2869;eip=0x0000a5; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 80601 mov     [bp+var_4], ax ;~ 2869:00A5
cs=0x2869;eip=0x0000a8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10c))));	// 80602 mov     ax, [bp+var_10C] ;~ 2869:00A8
cs=0x2869;eip=0x0000ac; 	X(MOV(*(dw*)(raddr(ss,bp+var_118)), ax));	// 80603 mov     [bp+var_118], ax ;~ 2869:00AC
cs=0x2869;eip=0x0000b0; 	X(MOV(*(dw*)(raddr(ss,bp+var_11a)), 0));	// 80604 mov     [bp+var_11A], 0 ;~ 2869:00B0
cs=0x2869;eip=0x0000b6; 	X(MOV(*(dw*)(raddr(ss,bp+var_110)), 1));	// 80605 mov     [bp+var_110], 1 ;~ 2869:00B6
loc_36d2c:
	// 9466 
cs=0x2869;eip=0x0000bc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 80608 mov     bx, [bp+var_4] ;~ 2869:00BC
cs=0x2869;eip=0x0000bf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_118))));	// 80609 mov     ax, [bp+var_118] ;~ 2869:00BF
cs=0x2869;eip=0x0000c3; 	T(CMP(*(dw*)(raddr(ds,bx+2)), ax));	// 80610 cmp     [bx+2], ax ;~ 2869:00C3
cs=0x2869;eip=0x0000c6; 	J(JGE(loc_36d47));	// 80611 jge     short loc_36D47 ;~ 2869:00C6
cs=0x2869;eip=0x0000c8; 	T(MOV(ax, *(dw*)(raddr(ds,bx+2))));	// 80612 mov     ax, [bx+2] ;~ 2869:00C8
cs=0x2869;eip=0x0000cb; 	X(MOV(*(dw*)(raddr(ss,bp+var_118)), ax));	// 80613 mov     [bp+var_118], ax ;~ 2869:00CB
cs=0x2869;eip=0x0000cf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_110))));	// 80614 mov     ax, [bp+var_110] ;~ 2869:00CF
cs=0x2869;eip=0x0000d3; 	X(MOV(*(dw*)(raddr(ss,bp+var_11a)), ax));	// 80615 mov     [bp+var_11A], ax ;~ 2869:00D3
loc_36d47:
	// 9467 
cs=0x2869;eip=0x0000d7; 	X(ADD(*(dw*)(raddr(ss,bp+var_4)), 4));	// 80618 add     [bp+var_4], 4 ;~ 2869:00D7
cs=0x2869;eip=0x0000db; 	X(INC(*(dw*)(raddr(ss,bp+var_110))));	// 80619 inc     [bp+var_110] ;~ 2869:00DB
cs=0x2869;eip=0x0000df; 	T(CMP(*(dw*)(raddr(ss,bp+var_110)), 0x10));	// 80620 cmp     [bp+var_110], 10h ;~ 2869:00DF
cs=0x2869;eip=0x0000e4; 	J(JL(loc_36d2c));	// 80621 jl      short loc_36D2C ;~ 2869:00E4
cs=0x2869;eip=0x0000e6; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_11a))));	// 80622 mov     si, [bp+var_11A] ;~ 2869:00E6
cs=0x2869;eip=0x0000ea; 	T(MOV(cl, 2));	// 80623 mov     cl, 2 ;~ 2869:00EA
cs=0x2869;eip=0x0000ec; 	T(SHL(si, cl));	// 80624 shl     si, cl ;~ 2869:00EC
cs=0x2869;eip=0x0000ee; 	T(ADD(si, bp));	// 80625 add     si, bp ;~ 2869:00EE
cs=0x2869;eip=0x0000f0; 	T(ax = si-0x10E);	// 80626 lea     ax, [si-10Eh] ;~ 2869:00F0
cs=0x2869;eip=0x0000f4; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 80627 mov     [bp+var_4], ax ;~ 2869:00F4
cs=0x2869;eip=0x0000f7; 	T(ax = si-0x0CE);	// 80628 lea     ax, [si-0CEh] ;~ 2869:00F7
cs=0x2869;eip=0x0000fb; 	X(MOV(*(dw*)(raddr(ss,bp+var_114)), ax));	// 80629 mov     [bp+var_114], ax ;~ 2869:00FB
cs=0x2869;eip=0x0000ff; 	T(ax = bp+var_4e);	// 80630 lea     ax, [bp+var_4E] ;~ 2869:00FF
cs=0x2869;eip=0x000102; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 80631 mov     [bp+var_6], ax ;~ 2869:0102
cs=0x2869;eip=0x000105; 	T(ax = bp+var_a);	// 80632 lea     ax, [bp+var_A] ;~ 2869:0105
cs=0x2869;eip=0x000108; 	X(MOV(*(dw*)(raddr(ss,bp+var_116)), ax));	// 80633 mov     [bp+var_116], ax ;~ 2869:0108
cs=0x2869;eip=0x00010c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_11a))));	// 80634 mov     ax, [bp+var_11A] ;~ 2869:010C
cs=0x2869;eip=0x000110; 	X(MOV(*(dw*)(raddr(ss,bp+var_112)), ax));	// 80635 mov     [bp+var_112], ax ;~ 2869:0110
cs=0x2869;eip=0x000114; 	X(MOV(*(dw*)(raddr(ss,bp+var_110)), 0));	// 80636 mov     [bp+var_110], 0 ;~ 2869:0114
cs=0x2869;eip=0x00011a; 	J(JMP(loc_36da2));	// 80637 jmp     short loc_36DA2 ;~ 2869:011A
loc_36d8c:
	// 9468 
cs=0x2869;eip=0x00011c; 	X(ADD(*(dw*)(raddr(ss,bp+var_4)), 4));	// 80641 add     [bp+var_4], 4 ;~ 2869:011C
cs=0x2869;eip=0x000120; 	X(ADD(*(dw*)(raddr(ss,bp+var_114)), 4));	// 80642 add     [bp+var_114], 4 ;~ 2869:0120
loc_36d95:
	// 9469 
cs=0x2869;eip=0x000125; 	X(ADD(*(dw*)(raddr(ss,bp+var_6)), 4));	// 80645 add     [bp+var_6], 4 ;~ 2869:0125
cs=0x2869;eip=0x000129; 	X(SUB(*(dw*)(raddr(ss,bp+var_116)), 4));	// 80646 sub     [bp+var_116], 4 ;~ 2869:0129
cs=0x2869;eip=0x00012e; 	X(INC(*(dw*)(raddr(ss,bp+var_110))));	// 80647 inc     [bp+var_110] ;~ 2869:012E
loc_36da2:
	// 9470 
cs=0x2869;eip=0x000132; 	T(CMP(*(dw*)(raddr(ss,bp+var_110)), 8));	// 80650 cmp     [bp+var_110], 8 ;~ 2869:0132
cs=0x2869;eip=0x000137; 	J(JG(loc_36dee));	// 80651 jg      short loc_36DEE ;~ 2869:0137
cs=0x2869;eip=0x000139; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_6))));	// 80652 mov     bx, [bp+var_6] ;~ 2869:0139
cs=0x2869;eip=0x00013c; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_4))));	// 80653 mov     si, [bp+var_4] ;~ 2869:013C
cs=0x2869;eip=0x00013f; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 80654 mov     ax, [si] ;~ 2869:013F
cs=0x2869;eip=0x000141; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 80655 mov     [bx], ax ;~ 2869:0141
cs=0x2869;eip=0x000143; 	T(MOV(ax, *(dw*)(raddr(ds,si+2))));	// 80656 mov     ax, [si+2] ;~ 2869:0143
cs=0x2869;eip=0x000146; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 80657 mov     [bx+2], ax ;~ 2869:0146
cs=0x2869;eip=0x000149; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_116))));	// 80658 mov     bx, [bp+var_116] ;~ 2869:0149
cs=0x2869;eip=0x00014d; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_114))));	// 80659 mov     si, [bp+var_114] ;~ 2869:014D
cs=0x2869;eip=0x000151; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 80660 mov     ax, [si] ;~ 2869:0151
cs=0x2869;eip=0x000153; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 80661 mov     [bx], ax ;~ 2869:0153
cs=0x2869;eip=0x000155; 	T(MOV(ax, *(dw*)(raddr(ds,si+2))));	// 80662 mov     ax, [si+2] ;~ 2869:0155
cs=0x2869;eip=0x000158; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 80663 mov     [bx+2], ax ;~ 2869:0158
cs=0x2869;eip=0x00015b; 	X(INC(*(dw*)(raddr(ss,bp+var_112))));	// 80664 inc     [bp+var_112] ;~ 2869:015B
cs=0x2869;eip=0x00015f; 	T(CMP(*(dw*)(raddr(ss,bp+var_112)), 0x10));	// 80665 cmp     [bp+var_112], 10h ;~ 2869:015F
cs=0x2869;eip=0x000164; 	J(JL(loc_36d8c));	// 80666 jl      short loc_36D8C ;~ 2869:0164
cs=0x2869;eip=0x000166; 	T(ax = bp+var_10e);	// 80667 lea     ax, [bp+var_10E] ;~ 2869:0166
cs=0x2869;eip=0x00016a; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 80668 mov     [bp+var_4], ax ;~ 2869:016A
cs=0x2869;eip=0x00016d; 	T(ax = bp+var_ce);	// 80669 lea     ax, [bp+var_CE] ;~ 2869:016D
cs=0x2869;eip=0x000171; 	X(MOV(*(dw*)(raddr(ss,bp+var_114)), ax));	// 80670 mov     [bp+var_114], ax ;~ 2869:0171
cs=0x2869;eip=0x000175; 	X(MOV(*(dw*)(raddr(ss,bp+var_112)), 0));	// 80671 mov     [bp+var_112], 0 ;~ 2869:0175
cs=0x2869;eip=0x00017b; 	J(JMP(loc_36d95));	// 80672 jmp     short loc_36D95 ;~ 2869:017B
loc_36dee:
	// 9471 
cs=0x2869;eip=0x00017e; 	T(ax = bp+var_4e);	// 80677 lea     ax, [bp+var_4E] ;~ 2869:017E
cs=0x2869;eip=0x000181; 	X(PUSH(ax));	// 80678 push    ax ;~ 2869:0181
cs=0x2869;eip=0x000182; 	T(MOV(ax, 0x12));	// 80679 mov     ax, 12h ;~ 2869:0182
cs=0x2869;eip=0x000185; 	X(PUSH(ax));	// 80680 push    ax ;~ 2869:0185
cs=0x2869;eip=0x000186; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 80681 push    [bp+arg_6] ;~ 2869:0186
cs=0x2869;eip=0x000189; 	J(CALLF(prerender_default_alt,0));	// 80682 call    preRender_default_alt ;~ 2869:0189
cs=0x2869;eip=0x00018e; 	T(ADD(sp, 6));	// 80683 add     sp, 6 ;~ 2869:018E
cs=0x2869;eip=0x000191; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_11a))));	// 80684 mov     si, [bp+var_11A] ;~ 2869:0191
cs=0x2869;eip=0x000195; 	T(MOV(cl, 2));	// 80685 mov     cl, 2 ;~ 2869:0195
cs=0x2869;eip=0x000197; 	T(SHL(si, cl));	// 80686 shl     si, cl ;~ 2869:0197
cs=0x2869;eip=0x000199; 	T(ADD(si, bp));	// 80687 add     si, bp ;~ 2869:0199
cs=0x2869;eip=0x00019b; 	T(ax = si-0x10E);	// 80688 lea     ax, [si-10Eh] ;~ 2869:019B
cs=0x2869;eip=0x00019f; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 80689 mov     [bp+var_4], ax ;~ 2869:019F
cs=0x2869;eip=0x0001a2; 	T(ax = si-0x0CE);	// 80690 lea     ax, [si-0CEh] ;~ 2869:01A2
cs=0x2869;eip=0x0001a6; 	X(MOV(*(dw*)(raddr(ss,bp+var_114)), ax));	// 80691 mov     [bp+var_114], ax ;~ 2869:01A6
cs=0x2869;eip=0x0001aa; 	T(ax = bp+var_4e);	// 80692 lea     ax, [bp+var_4E] ;~ 2869:01AA
cs=0x2869;eip=0x0001ad; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 80693 mov     [bp+var_6], ax ;~ 2869:01AD
cs=0x2869;eip=0x0001b0; 	T(ax = bp+var_a);	// 80694 lea     ax, [bp+var_A] ;~ 2869:01B0
cs=0x2869;eip=0x0001b3; 	X(MOV(*(dw*)(raddr(ss,bp+var_116)), ax));	// 80695 mov     [bp+var_116], ax ;~ 2869:01B3
cs=0x2869;eip=0x0001b7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_11a))));	// 80696 mov     ax, [bp+var_11A] ;~ 2869:01B7
cs=0x2869;eip=0x0001bb; 	X(MOV(*(dw*)(raddr(ss,bp+var_112)), ax));	// 80697 mov     [bp+var_112], ax ;~ 2869:01BB
cs=0x2869;eip=0x0001bf; 	X(MOV(*(dw*)(raddr(ss,bp+var_110)), 0));	// 80698 mov     [bp+var_110], 0 ;~ 2869:01BF
cs=0x2869;eip=0x0001c5; 	J(JMP(loc_36e4e));	// 80699 jmp     short loc_36E4E ;~ 2869:01C5
loc_36e38:
	// 9472 
cs=0x2869;eip=0x0001c8; 	X(SUB(*(dw*)(raddr(ss,bp+var_4)), 4));	// 80704 sub     [bp+var_4], 4 ;~ 2869:01C8
cs=0x2869;eip=0x0001cc; 	X(SUB(*(dw*)(raddr(ss,bp+var_114)), 4));	// 80705 sub     [bp+var_114], 4 ;~ 2869:01CC
loc_36e41:
	// 9473 
cs=0x2869;eip=0x0001d1; 	X(ADD(*(dw*)(raddr(ss,bp+var_6)), 4));	// 80708 add     [bp+var_6], 4 ;~ 2869:01D1
cs=0x2869;eip=0x0001d5; 	X(SUB(*(dw*)(raddr(ss,bp+var_116)), 4));	// 80709 sub     [bp+var_116], 4 ;~ 2869:01D5
cs=0x2869;eip=0x0001da; 	X(INC(*(dw*)(raddr(ss,bp+var_110))));	// 80710 inc     [bp+var_110] ;~ 2869:01DA
loc_36e4e:
	// 9474 
cs=0x2869;eip=0x0001de; 	T(CMP(*(dw*)(raddr(ss,bp+var_110)), 9));	// 80713 cmp     [bp+var_110], 9 ;~ 2869:01DE
cs=0x2869;eip=0x0001e3; 	J(JGE(loc_36e94));	// 80714 jge     short loc_36E94 ;~ 2869:01E3
cs=0x2869;eip=0x0001e5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_6))));	// 80715 mov     bx, [bp+var_6] ;~ 2869:01E5
cs=0x2869;eip=0x0001e8; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_4))));	// 80716 mov     si, [bp+var_4] ;~ 2869:01E8
cs=0x2869;eip=0x0001eb; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 80717 mov     ax, [si] ;~ 2869:01EB
cs=0x2869;eip=0x0001ed; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 80718 mov     [bx], ax ;~ 2869:01ED
cs=0x2869;eip=0x0001ef; 	T(MOV(ax, *(dw*)(raddr(ds,si+2))));	// 80719 mov     ax, [si+2] ;~ 2869:01EF
cs=0x2869;eip=0x0001f2; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 80720 mov     [bx+2], ax ;~ 2869:01F2
cs=0x2869;eip=0x0001f5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_116))));	// 80721 mov     bx, [bp+var_116] ;~ 2869:01F5
cs=0x2869;eip=0x0001f9; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_114))));	// 80722 mov     si, [bp+var_114] ;~ 2869:01F9
cs=0x2869;eip=0x0001fd; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 80723 mov     ax, [si] ;~ 2869:01FD
cs=0x2869;eip=0x0001ff; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 80724 mov     [bx], ax ;~ 2869:01FF
cs=0x2869;eip=0x000201; 	T(MOV(ax, *(dw*)(raddr(ds,si+2))));	// 80725 mov     ax, [si+2] ;~ 2869:0201
cs=0x2869;eip=0x000204; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 80726 mov     [bx+2], ax ;~ 2869:0204
cs=0x2869;eip=0x000207; 	X(DEC(*(dw*)(raddr(ss,bp+var_112))));	// 80727 dec     [bp+var_112] ;~ 2869:0207
cs=0x2869;eip=0x00020b; 	J(JNS(loc_36e38));	// 80728 jns     short loc_36E38 ;~ 2869:020B
cs=0x2869;eip=0x00020d; 	T(ax = bp+var_d2);	// 80729 lea     ax, [bp+var_D2] ;~ 2869:020D
cs=0x2869;eip=0x000211; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 80730 mov     [bp+var_4], ax ;~ 2869:0211
cs=0x2869;eip=0x000214; 	T(ax = bp+var_92);	// 80731 lea     ax, [bp+var_92] ;~ 2869:0214
cs=0x2869;eip=0x000218; 	X(MOV(*(dw*)(raddr(ss,bp+var_114)), ax));	// 80732 mov     [bp+var_114], ax ;~ 2869:0218
cs=0x2869;eip=0x00021c; 	X(MOV(*(dw*)(raddr(ss,bp+var_112)), 0x10));	// 80733 mov     [bp+var_112], 10h ;~ 2869:021C
cs=0x2869;eip=0x000222; 	J(JMP(loc_36e41));	// 80734 jmp     short loc_36E41 ;~ 2869:0222
loc_36e94:
	// 9475 
cs=0x2869;eip=0x000224; 	T(ax = bp+var_4e);	// 80738 lea     ax, [bp+var_4E] ;~ 2869:0224
cs=0x2869;eip=0x000227; 	X(PUSH(ax));	// 80739 push    ax ;~ 2869:0227
cs=0x2869;eip=0x000228; 	T(MOV(ax, 0x12));	// 80740 mov     ax, 12h ;~ 2869:0228
cs=0x2869;eip=0x00022b; 	X(PUSH(ax));	// 80741 push    ax ;~ 2869:022B
cs=0x2869;eip=0x00022c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 80742 push    [bp+arg_6] ;~ 2869:022C
cs=0x2869;eip=0x00022f; 	J(CALLF(prerender_default_alt,0));	// 80743 call    preRender_default_alt ;~ 2869:022F
cs=0x2869;eip=0x000234; 	T(ADD(sp, 6));	// 80744 add     sp, 6 ;~ 2869:0234
cs=0x2869;eip=0x000237; 	T(ax = bp+var_ce);	// 80745 lea     ax, [bp+var_CE] ;~ 2869:0237
cs=0x2869;eip=0x00023b; 	X(PUSH(ax));	// 80746 push    ax ;~ 2869:023B
cs=0x2869;eip=0x00023c; 	T(MOV(ax, 0x10));	// 80747 mov     ax, 10h ;~ 2869:023C
cs=0x2869;eip=0x00023f; 	X(PUSH(ax));	// 80748 push    ax ;~ 2869:023F
cs=0x2869;eip=0x000240; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 80749 push    [bp+arg_8] ;~ 2869:0240
cs=0x2869;eip=0x000243; 	J(CALLF(prerender_default_alt,0));	// 80750 call    preRender_default_alt ;~ 2869:0243
cs=0x2869;eip=0x000248; 	T(ADD(sp, 6));	// 80751 add     sp, 6 ;~ 2869:0248
cs=0x2869;eip=0x00024b; 	X(POP(si));	// 80752 pop     si ;~ 2869:024B
cs=0x2869;eip=0x00024c; 	T(MOV(sp, bp));	// 80753 mov     sp, bp ;~ 2869:024C
cs=0x2869;eip=0x00024e; 	X(POP(bp));	// 80754 pop     bp ;~ 2869:024E
cs=0x2869;eip=0x00024f; 	J(RETF(0));	// 80755 retf ;~ 2869:024F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_36ca6: 	goto loc_36ca6;
        case m2c::kloc_36d2c: 	goto loc_36d2c;
        case m2c::kloc_36d47: 	goto loc_36d47;
        case m2c::kloc_36d8c: 	goto loc_36d8c;
        case m2c::kloc_36d95: 	goto loc_36d95;
        case m2c::kloc_36da2: 	goto loc_36da2;
        case m2c::kloc_36dee: 	goto loc_36dee;
        case m2c::kloc_36e38: 	goto loc_36e38;
        case m2c::kloc_36e41: 	goto loc_36e41;
        case m2c::kloc_36e4e: 	goto loc_36e4e;
        case m2c::kloc_36e94: 	goto loc_36e94;
        case m2c::kprerender_wheel: 	goto prerender_wheel;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

