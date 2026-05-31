/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool _group21(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group21:
    _begin:
sub_28b34:
	// 47558 
cs=0x1a55;eip=0x000004; 	X(PUSH(bp));	// 47560 push    bp ;~ 1A55:0004
ret_1a55_5:
	// 7799 
cs=0x1a55;eip=0x000005; 	T(MOV(bp, sp));	// 47561 mov     bp, sp ;~ 1A55:0005
cs=0x1a55;eip=0x000007; 	X(PUSH(di));	// 47562 push    di ;~ 1A55:0007
cs=0x1a55;eip=0x000008; 	X(PUSH(si));	// 47563 push    si ;~ 1A55:0008
cs=0x1a55;eip=0x000009; 	T(CLD);	// 47564 cld ;~ 1A55:0009
cs=0x1a55;eip=0x00000a; 	T(MOV(ax, word_37bc8));	// 47565 mov     ax, word_37BC8 ;~ 1A55:000A
cs=0x1a55;eip=0x00000d; 	T(MOV(es, ax));	// 47566 mov     es, ax ;~ 1A55:000D
cs=0x1a55;eip=0x00000f; 	T(MOV(bx, word_37b8b));	// 47568 mov     bx, word_37B8B ;~ 1A55:000F
cs=0x1a55;eip=0x000013; 	T(MOV(cx, bx));	// 47569 mov     cx, bx ;~ 1A55:0013
cs=0x1a55;eip=0x000015; 	T(MOV(ax, word_37b8d));	// 47570 mov     ax, word_37B8D ;~ 1A55:0015
cs=0x1a55;eip=0x000018; 	T(si = offset(dseg,ateturningmidis));	// 47571 lea     si, aTeTurningMidiS ; "TE: Turning MIDI sounds on may slow dow"... ;~ 1A55:0018
cs=0x1a55;eip=0x00001c; 	T(ADD(si, word_37b84));	// 47572 add     si, word_37B84 ;~ 1A55:001C
cs=0x1a55;eip=0x000020; __disp=*(dw*)(raddr(cs,si));
	R(JMP(__dispatch_call));	// 47573 jmp     word ptr cs:[si] ;~ 1A55:0020
seg031_proc:
	// 47578 
loc_28b53:
	// 7800 
cs=0x1a55;eip=0x000023; 	T(XCHG(ah, al));	// 47579 xchg    ah, al ;~ 1A55:0023
cs=0x1a55;eip=0x000025; 	T(SHR(ax, 1));	// 47580 shr     ax, 1 ;~ 1A55:0025
cs=0x1a55;eip=0x000027; 	T(ADD(bh, al));	// 47581 add     bh, al ;~ 1A55:0027
cs=0x1a55;eip=0x000029; 	T(XOR(al, al));	// 47582 xor     al, al ;~ 1A55:0029
cs=0x1a55;eip=0x00002b; 	T(ADD(bx, ax));	// 47583 add     bx, ax ;~ 1A55:002B
cs=0x1a55;eip=0x00002d; 	T(SHR(ax, 1));	// 47584 shr     ax, 1 ;~ 1A55:002D
cs=0x1a55;eip=0x00002f; 	T(SHR(ax, 1));	// 47585 shr     ax, 1 ;~ 1A55:002F
cs=0x1a55;eip=0x000031; 	T(ADD(bx, ax));	// 47586 add     bx, ax ;~ 1A55:0031
cs=0x1a55;eip=0x000033; 	T(SHR(bx, 1));	// 47587 shr     bx, 1 ;~ 1A55:0033
cs=0x1a55;eip=0x000035; 	T(SHR(bx, 1));	// 47588 shr     bx, 1 ;~ 1A55:0035
cs=0x1a55;eip=0x000037; 	T(MOV(al, byte_37b81));	// 47589 mov     al, byte_37B81 ;~ 1A55:0037
cs=0x1a55;eip=0x00003a; 	T(AND(al, 3));	// 47590 and     al, 3 ;~ 1A55:003A
cs=0x1a55;eip=0x00003c; 	T(MOV(ah, al));	// 47591 mov     ah, al ;~ 1A55:003C
cs=0x1a55;eip=0x00003e; 	T(SHL(ah, 1));	// 47592 shl     ah, 1 ;~ 1A55:003E
cs=0x1a55;eip=0x000040; 	T(SHL(ah, 1));	// 47593 shl     ah, 1 ;~ 1A55:0040
cs=0x1a55;eip=0x000042; 	T(OR(al, ah));	// 47594 or      al, ah ;~ 1A55:0042
cs=0x1a55;eip=0x000044; 	T(SHL(ah, 1));	// 47595 shl     ah, 1 ;~ 1A55:0044
cs=0x1a55;eip=0x000046; 	T(SHL(ah, 1));	// 47596 shl     ah, 1 ;~ 1A55:0046
cs=0x1a55;eip=0x000048; 	T(OR(al, ah));	// 47597 or      al, ah ;~ 1A55:0048
cs=0x1a55;eip=0x00004a; 	T(SHL(ah, 1));	// 47598 shl     ah, 1 ;~ 1A55:004A
cs=0x1a55;eip=0x00004c; 	T(SHL(ah, 1));	// 47599 shl     ah, 1 ;~ 1A55:004C
cs=0x1a55;eip=0x00004e; 	T(OR(al, ah));	// 47600 or      al, ah ;~ 1A55:004E
cs=0x1a55;eip=0x000050; 	T(MOV(ah, al));	// 47601 mov     ah, al ;~ 1A55:0050
cs=0x1a55;eip=0x000052; 	X(MOV(word_38203, ax));	// 47602 mov     word_38203, ax ;~ 1A55:0052
cs=0x1a55;eip=0x000055; 	T(AND(cx, 3));	// 47603 and     cx, 3 ;~ 1A55:0055
cs=0x1a55;eip=0x000058; 	T(SHL(cl, 1));	// 47604 shl     cl, 1 ;~ 1A55:0058
cs=0x1a55;eip=0x00005a; 	T(MOV(si, *(dw*)(raddr(ss,bp+6))));	// 47605 mov     si, [bp+6] ;~ 1A55:005A
cs=0x1a55;eip=0x00005d; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x0A))));	// 47606 mov     dx, [bp+0Ah] ;~ 1A55:005D
loc_28b90:
	// 7801 
cs=0x1a55;eip=0x000060; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 47609 mov     di, [bp+8] ;~ 1A55:0060
cs=0x1a55;eip=0x000063; 	X(PUSH(bx));	// 47610 push    bx ;~ 1A55:0063
cs=0x1a55;eip=0x000064; 	X(PUSH(dx));	// 47611 push    dx ;~ 1A55:0064
loc_28b95:
	// 7802 
cs=0x1a55;eip=0x000065; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 47614 mov     ax, es:[bx] ;~ 1A55:0065
cs=0x1a55;eip=0x000068; 	T(XCHG(ah, al));	// 47615 xchg    ah, al ;~ 1A55:0068
cs=0x1a55;eip=0x00006a; 	T(ADD(bx, 2));	// 47616 add     bx, 2 ;~ 1A55:006A
cs=0x1a55;eip=0x00006d; 	T(MOV(dl, *(raddr(es,bx))));	// 47617 mov     dl, es:[bx] ;~ 1A55:006D
cs=0x1a55;eip=0x000070; 	T(XOR(dh, dh));	// 47618 xor     dh, dh ;~ 1A55:0070
cs=0x1a55;eip=0x000072; 	T(SHL(ax, cl));	// 47619 shl     ax, cl ;~ 1A55:0072
cs=0x1a55;eip=0x000074; 	T(SHL(dx, cl));	// 47620 shl     dx, cl ;~ 1A55:0074
cs=0x1a55;eip=0x000076; 	T(OR(al, dh));	// 47621 or      al, dh ;~ 1A55:0076
cs=0x1a55;eip=0x000078; 	T(XOR(ax, word_38203));	// 47622 xor     ax, word_38203 ;~ 1A55:0078
cs=0x1a55;eip=0x00007c; 	T(NOT(ax));	// 47623 not     ax ;~ 1A55:007C
cs=0x1a55;eip=0x00007e; 	T(MOV(dx, ax));	// 47624 mov     dx, ax ;~ 1A55:007E
cs=0x1a55;eip=0x000080; 	T(SHL(dx, 1));	// 47625 shl     dx, 1 ;~ 1A55:0080
cs=0x1a55;eip=0x000082; 	T(AND(ax, dx));	// 47626 and     ax, dx ;~ 1A55:0082
cs=0x1a55;eip=0x000084; 	X(PUSH(cx));	// 47627 push    cx ;~ 1A55:0084
cs=0x1a55;eip=0x000085; 	T(MOV(cx, 8));	// 47628 mov     cx, 8 ;~ 1A55:0085
cs=0x1a55;eip=0x000088; 	T(XOR(dx, dx));	// 47629 xor     dx, dx ;~ 1A55:0088
loc_28bba:
	// 7803 
cs=0x1a55;eip=0x00008a; 	T(SHL(ax, 1));	// 47632 shl     ax, 1 ;~ 1A55:008A
cs=0x1a55;eip=0x00008c; 	T(ADC(dl, dh));	// 47633 adc     dl, dh ;~ 1A55:008C
cs=0x1a55;eip=0x00008e; 	T(ROL(dl, 1));	// 47634 rol     dl, 1 ;~ 1A55:008E
cs=0x1a55;eip=0x000090; 	T(SHL(ax, 1));	// 47635 shl     ax, 1 ;~ 1A55:0090
cs=0x1a55;eip=0x000092; 	R(LOOP(loc_28bba));	// 47636 loop    loc_28BBA ;~ 1A55:0092
cs=0x1a55;eip=0x000094; 	T(ROR(dl, 1));	// 47637 ror     dl, 1 ;~ 1A55:0094
cs=0x1a55;eip=0x000096; 	X(POP(cx));	// 47638 pop     cx ;~ 1A55:0096
cs=0x1a55;eip=0x000097; 	X(MOV(*(raddr(ds,si)), dl));	// 47639 mov     [si], dl ;~ 1A55:0097
cs=0x1a55;eip=0x000099; 	T(INC(si));	// 47640 inc     si ;~ 1A55:0099
cs=0x1a55;eip=0x00009a; 	T(DEC(di));	// 47641 dec     di ;~ 1A55:009A
cs=0x1a55;eip=0x00009b; 	R(JNZ(loc_28b95));	// 47642 jnz     short loc_28B95 ;~ 1A55:009B
cs=0x1a55;eip=0x00009d; 	X(POP(dx));	// 47643 pop     dx ;~ 1A55:009D
cs=0x1a55;eip=0x00009e; 	X(POP(bx));	// 47644 pop     bx ;~ 1A55:009E
cs=0x1a55;eip=0x00009f; 	T(DEC(dx));	// 47645 dec     dx ;~ 1A55:009F
cs=0x1a55;eip=0x0000a0; 	R(JZ(loc_28be1));	// 47646 jz      short loc_28BE1 ;~ 1A55:00A0
cs=0x1a55;eip=0x0000a2; 	T(TEST(bx, 0x2000));	// 47647 test    bx, 2000h ;~ 1A55:00A2
cs=0x1a55;eip=0x0000a6; 	R(JNZ(loc_28bdb));	// 47648 jnz     short loc_28BDB ;~ 1A55:00A6
cs=0x1a55;eip=0x0000a8; 	T(SUB(bx, 0x50));	// 47649 sub     bx, 50h ; 'P' ;~ 1A55:00A8
loc_28bdb:
	// 7804 
cs=0x1a55;eip=0x0000ab; 	T(XOR(bx, 0x2000));	// 47652 xor     bx, 2000h ;~ 1A55:00AB
cs=0x1a55;eip=0x0000af; 	R(JMP(loc_28b90));	// 47653 jmp     short loc_28B90 ;~ 1A55:00AF
loc_28be1:
	// 7805 
cs=0x1a55;eip=0x0000b1; 	R(JMP(loc_28f02));	// 47657 jmp     loc_28F02 ;~ 1A55:00B1
loc_28be4:
	// 7806 
cs=0x1a55;eip=0x0000b4; 	T(XCHG(ah, al));	// 47661 xchg    ah, al ;~ 1A55:00B4
cs=0x1a55;eip=0x0000b6; 	T(SHR(ax, 1));	// 47662 shr     ax, 1 ;~ 1A55:00B6
cs=0x1a55;eip=0x0000b8; 	T(SHR(bx, 1));	// 47663 shr     bx, 1 ;~ 1A55:00B8
cs=0x1a55;eip=0x0000ba; 	T(ADD(bh, al));	// 47664 add     bh, al ;~ 1A55:00BA
cs=0x1a55;eip=0x0000bc; 	T(XOR(al, al));	// 47665 xor     al, al ;~ 1A55:00BC
cs=0x1a55;eip=0x0000be; 	T(ADD(bx, ax));	// 47666 add     bx, ax ;~ 1A55:00BE
cs=0x1a55;eip=0x0000c0; 	T(SHR(ax, 1));	// 47667 shr     ax, 1 ;~ 1A55:00C0
cs=0x1a55;eip=0x0000c2; 	T(SHR(ax, 1));	// 47668 shr     ax, 1 ;~ 1A55:00C2
cs=0x1a55;eip=0x0000c4; 	T(ADD(bx, ax));	// 47669 add     bx, ax ;~ 1A55:00C4
cs=0x1a55;eip=0x0000c6; 	T(SHR(bx, 1));	// 47670 shr     bx, 1 ;~ 1A55:00C6
cs=0x1a55;eip=0x0000c8; 	T(SHR(bx, 1));	// 47671 shr     bx, 1 ;~ 1A55:00C8
cs=0x1a55;eip=0x0000ca; 	R(JMP(loc_28cfa));	// 47672 jmp     loc_28CFA ;~ 1A55:00CA
loc_28bfd:
	// 7807 
cs=0x1a55;eip=0x0000cd; 	T(SHL(bx, 1));	// 47676 shl     bx, 1 ;~ 1A55:00CD
cs=0x1a55;eip=0x0000cf; 	T(SHL(bx, 1));	// 47677 shl     bx, 1 ;~ 1A55:00CF
cs=0x1a55;eip=0x0000d1; 	T(SHR(ax, 1));	// 47678 shr     ax, 1 ;~ 1A55:00D1
cs=0x1a55;eip=0x0000d3; 	T(RCR(bx, 1));	// 47679 rcr     bx, 1 ;~ 1A55:00D3
cs=0x1a55;eip=0x0000d5; 	T(SHR(ax, 1));	// 47680 shr     ax, 1 ;~ 1A55:00D5
cs=0x1a55;eip=0x0000d7; 	T(RCR(bx, 1));	// 47681 rcr     bx, 1 ;~ 1A55:00D7
cs=0x1a55;eip=0x0000d9; 	T(SHR(bx, 1));	// 47682 shr     bx, 1 ;~ 1A55:00D9
cs=0x1a55;eip=0x0000db; 	T(XCHG(ah, al));	// 47683 xchg    ah, al ;~ 1A55:00DB
cs=0x1a55;eip=0x0000dd; 	T(SHR(ax, 1));	// 47684 shr     ax, 1 ;~ 1A55:00DD
cs=0x1a55;eip=0x0000df; 	T(ADD(bx, ax));	// 47685 add     bx, ax ;~ 1A55:00DF
cs=0x1a55;eip=0x0000e1; 	T(SHR(ax, 1));	// 47686 shr     ax, 1 ;~ 1A55:00E1
cs=0x1a55;eip=0x0000e3; 	T(SHR(ax, 1));	// 47687 shr     ax, 1 ;~ 1A55:00E3
cs=0x1a55;eip=0x0000e5; 	T(ADD(bx, ax));	// 47688 add     bx, ax ;~ 1A55:00E5
cs=0x1a55;eip=0x0000e7; 	T(MOV(al, byte_37b81));	// 47689 mov     al, byte_37B81 ;~ 1A55:00E7
cs=0x1a55;eip=0x0000ea; 	T(AND(al, 0x0F));	// 47690 and     al, 0Fh ;~ 1A55:00EA
cs=0x1a55;eip=0x0000ec; 	T(MOV(ah, al));	// 47691 mov     ah, al ;~ 1A55:00EC
cs=0x1a55;eip=0x0000ee; 	T(SHL(ah, 1));	// 47692 shl     ah, 1 ;~ 1A55:00EE
cs=0x1a55;eip=0x0000f0; 	T(SHL(ah, 1));	// 47693 shl     ah, 1 ;~ 1A55:00F0
cs=0x1a55;eip=0x0000f2; 	T(SHL(ah, 1));	// 47694 shl     ah, 1 ;~ 1A55:00F2
cs=0x1a55;eip=0x0000f4; 	T(SHL(ah, 1));	// 47695 shl     ah, 1 ;~ 1A55:00F4
cs=0x1a55;eip=0x0000f6; 	T(OR(al, ah));	// 47696 or      al, ah ;~ 1A55:00F6
cs=0x1a55;eip=0x0000f8; 	T(MOV(ah, al));	// 47697 mov     ah, al ;~ 1A55:00F8
cs=0x1a55;eip=0x0000fa; 	X(MOV(word_38203, ax));	// 47698 mov     word_38203, ax ;~ 1A55:00FA
cs=0x1a55;eip=0x0000fd; 	T(AND(cx, 1));	// 47699 and     cx, 1 ;~ 1A55:00FD
cs=0x1a55;eip=0x000100; 	T(SHL(cl, 1));	// 47700 shl     cl, 1 ;~ 1A55:0100
cs=0x1a55;eip=0x000102; 	T(SHL(cl, 1));	// 47701 shl     cl, 1 ;~ 1A55:0102
cs=0x1a55;eip=0x000104; 	T(MOV(si, *(dw*)(raddr(ss,bp+6))));	// 47702 mov     si, [bp+6] ;~ 1A55:0104
cs=0x1a55;eip=0x000107; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x0A))));	// 47703 mov     dx, [bp+0Ah] ;~ 1A55:0107
loc_28c3a:
	// 7808 
cs=0x1a55;eip=0x00010a; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 47707 mov     di, [bp+8] ;~ 1A55:010A
cs=0x1a55;eip=0x00010d; 	X(PUSH(bx));	// 47708 push    bx ;~ 1A55:010D
cs=0x1a55;eip=0x00010e; 	X(PUSH(dx));	// 47709 push    dx ;~ 1A55:010E
loc_28c3f:
	// 7809 
cs=0x1a55;eip=0x00010f; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 47712 mov     ax, es:[bx] ;~ 1A55:010F
cs=0x1a55;eip=0x000112; 	T(XCHG(ah, al));	// 47713 xchg    ah, al ;~ 1A55:0112
cs=0x1a55;eip=0x000114; 	T(ADD(bx, 2));	// 47714 add     bx, 2 ;~ 1A55:0114
cs=0x1a55;eip=0x000117; 	T(MOV(dl, *(raddr(es,bx))));	// 47715 mov     dl, es:[bx] ;~ 1A55:0117
cs=0x1a55;eip=0x00011a; 	T(XOR(dh, dh));	// 47716 xor     dh, dh ;~ 1A55:011A
cs=0x1a55;eip=0x00011c; 	T(SHL(ax, cl));	// 47717 shl     ax, cl ;~ 1A55:011C
cs=0x1a55;eip=0x00011e; 	T(SHL(dx, cl));	// 47718 shl     dx, cl ;~ 1A55:011E
cs=0x1a55;eip=0x000120; 	T(OR(al, dh));	// 47719 or      al, dh ;~ 1A55:0120
cs=0x1a55;eip=0x000122; 	T(XOR(ax, word_38203));	// 47720 xor     ax, word_38203 ;~ 1A55:0122
cs=0x1a55;eip=0x000126; 	T(NOT(ax));	// 47721 not     ax ;~ 1A55:0126
cs=0x1a55;eip=0x000128; 	T(MOV(dx, ax));	// 47722 mov     dx, ax ;~ 1A55:0128
cs=0x1a55;eip=0x00012a; 	T(SHL(dx, 1));	// 47723 shl     dx, 1 ;~ 1A55:012A
cs=0x1a55;eip=0x00012c; 	T(AND(ax, dx));	// 47724 and     ax, dx ;~ 1A55:012C
cs=0x1a55;eip=0x00012e; 	T(SHL(dx, 1));	// 47725 shl     dx, 1 ;~ 1A55:012E
cs=0x1a55;eip=0x000130; 	T(AND(ax, dx));	// 47726 and     ax, dx ;~ 1A55:0130
cs=0x1a55;eip=0x000132; 	T(SHL(dx, 1));	// 47727 shl     dx, 1 ;~ 1A55:0132
cs=0x1a55;eip=0x000134; 	T(AND(ax, dx));	// 47728 and     ax, dx ;~ 1A55:0134
cs=0x1a55;eip=0x000136; 	X(PUSH(ax));	// 47729 push    ax ;~ 1A55:0136
cs=0x1a55;eip=0x000137; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 47730 mov     ax, es:[bx] ;~ 1A55:0137
cs=0x1a55;eip=0x00013a; 	T(XCHG(ah, al));	// 47731 xchg    ah, al ;~ 1A55:013A
cs=0x1a55;eip=0x00013c; 	T(ADD(bx, 2));	// 47732 add     bx, 2 ;~ 1A55:013C
cs=0x1a55;eip=0x00013f; 	T(MOV(dl, *(raddr(es,bx))));	// 47733 mov     dl, es:[bx] ;~ 1A55:013F
cs=0x1a55;eip=0x000142; 	T(XOR(dh, dh));	// 47734 xor     dh, dh ;~ 1A55:0142
cs=0x1a55;eip=0x000144; 	T(SHL(ax, cl));	// 47735 shl     ax, cl ;~ 1A55:0144
cs=0x1a55;eip=0x000146; 	T(SHL(dx, cl));	// 47736 shl     dx, cl ;~ 1A55:0146
cs=0x1a55;eip=0x000148; 	T(OR(al, dh));	// 47737 or      al, dh ;~ 1A55:0148
cs=0x1a55;eip=0x00014a; 	T(XOR(ax, word_38203));	// 47738 xor     ax, word_38203 ;~ 1A55:014A
cs=0x1a55;eip=0x00014e; 	T(NOT(ax));	// 47739 not     ax ;~ 1A55:014E
cs=0x1a55;eip=0x000150; 	T(MOV(dx, ax));	// 47740 mov     dx, ax ;~ 1A55:0150
cs=0x1a55;eip=0x000152; 	T(SHL(dx, 1));	// 47741 shl     dx, 1 ;~ 1A55:0152
cs=0x1a55;eip=0x000154; 	T(AND(ax, dx));	// 47742 and     ax, dx ;~ 1A55:0154
cs=0x1a55;eip=0x000156; 	T(SHL(dx, 1));	// 47743 shl     dx, 1 ;~ 1A55:0156
cs=0x1a55;eip=0x000158; 	T(AND(ax, dx));	// 47744 and     ax, dx ;~ 1A55:0158
cs=0x1a55;eip=0x00015a; 	T(SHL(dx, 1));	// 47745 shl     dx, 1 ;~ 1A55:015A
cs=0x1a55;eip=0x00015c; 	T(AND(ax, dx));	// 47746 and     ax, dx ;~ 1A55:015C
cs=0x1a55;eip=0x00015e; 	X(POP(dx));	// 47747 pop     dx ;~ 1A55:015E
cs=0x1a55;eip=0x00015f; 	X(PUSH(bx));	// 47748 push    bx ;~ 1A55:015F
cs=0x1a55;eip=0x000160; 	X(PUSH(cx));	// 47749 push    cx ;~ 1A55:0160
cs=0x1a55;eip=0x000161; 	T(MOV(cx, 4));	// 47750 mov     cx, 4 ;~ 1A55:0161
cs=0x1a55;eip=0x000164; 	T(XOR(bx, bx));	// 47751 xor     bx, bx ;~ 1A55:0164
loc_28c96:
	// 7810 
cs=0x1a55;eip=0x000166; 	T(SHL(dx, 1));	// 47754 shl     dx, 1 ;~ 1A55:0166
cs=0x1a55;eip=0x000168; 	T(ADC(bl, bh));	// 47755 adc     bl, bh ;~ 1A55:0168
cs=0x1a55;eip=0x00016a; 	T(ROL(bl, 1));	// 47756 rol     bl, 1 ;~ 1A55:016A
cs=0x1a55;eip=0x00016c; 	T(SHL(dx, 1));	// 47757 shl     dx, 1 ;~ 1A55:016C
cs=0x1a55;eip=0x00016e; 	T(SHL(dx, 1));	// 47758 shl     dx, 1 ;~ 1A55:016E
cs=0x1a55;eip=0x000170; 	T(SHL(dx, 1));	// 47759 shl     dx, 1 ;~ 1A55:0170
cs=0x1a55;eip=0x000172; 	R(LOOP(loc_28c96));	// 47760 loop    loc_28C96 ;~ 1A55:0172
cs=0x1a55;eip=0x000174; 	T(ROR(bl, 1));	// 47761 ror     bl, 1 ;~ 1A55:0174
cs=0x1a55;eip=0x000176; 	T(MOV(cx, 4));	// 47762 mov     cx, 4 ;~ 1A55:0176
cs=0x1a55;eip=0x000179; 	T(SHL(bl, cl));	// 47763 shl     bl, cl ;~ 1A55:0179
cs=0x1a55;eip=0x00017b; 	T(XOR(dx, dx));	// 47764 xor     dx, dx ;~ 1A55:017B
loc_28cad:
	// 7811 
cs=0x1a55;eip=0x00017d; 	T(SHL(ax, 1));	// 47767 shl     ax, 1 ;~ 1A55:017D
cs=0x1a55;eip=0x00017f; 	T(ADC(dl, dh));	// 47768 adc     dl, dh ;~ 1A55:017F
cs=0x1a55;eip=0x000181; 	T(ROL(dl, 1));	// 47769 rol     dl, 1 ;~ 1A55:0181
cs=0x1a55;eip=0x000183; 	T(SHL(ax, 1));	// 47770 shl     ax, 1 ;~ 1A55:0183
cs=0x1a55;eip=0x000185; 	T(SHL(ax, 1));	// 47771 shl     ax, 1 ;~ 1A55:0185
cs=0x1a55;eip=0x000187; 	T(SHL(ax, 1));	// 47772 shl     ax, 1 ;~ 1A55:0187
cs=0x1a55;eip=0x000189; 	R(LOOP(loc_28cad));	// 47773 loop    loc_28CAD ;~ 1A55:0189
cs=0x1a55;eip=0x00018b; 	T(ROR(dl, 1));	// 47774 ror     dl, 1 ;~ 1A55:018B
cs=0x1a55;eip=0x00018d; 	T(OR(dl, bl));	// 47775 or      dl, bl ;~ 1A55:018D
cs=0x1a55;eip=0x00018f; 	X(MOV(*(raddr(ds,si)), dl));	// 47776 mov     [si], dl ;~ 1A55:018F
cs=0x1a55;eip=0x000191; 	T(INC(si));	// 47777 inc     si ;~ 1A55:0191
cs=0x1a55;eip=0x000192; 	X(POP(cx));	// 47778 pop     cx ;~ 1A55:0192
cs=0x1a55;eip=0x000193; 	X(POP(bx));	// 47779 pop     bx ;~ 1A55:0193
cs=0x1a55;eip=0x000194; 	T(DEC(di));	// 47780 dec     di ;~ 1A55:0194
cs=0x1a55;eip=0x000195; 	R(JZ(loc_28cca));	// 47781 jz      short loc_28CCA ;~ 1A55:0195
cs=0x1a55;eip=0x000197; 	R(JMP(loc_28c3f));	// 47782 jmp     loc_28C3F ;~ 1A55:0197
loc_28cca:
	// 7812 
cs=0x1a55;eip=0x00019a; 	X(POP(dx));	// 47786 pop     dx ;~ 1A55:019A
cs=0x1a55;eip=0x00019b; 	X(POP(bx));	// 47787 pop     bx ;~ 1A55:019B
cs=0x1a55;eip=0x00019c; 	T(DEC(dx));	// 47788 dec     dx ;~ 1A55:019C
cs=0x1a55;eip=0x00019d; 	R(JZ(loc_28ce7));	// 47789 jz      short loc_28CE7 ;~ 1A55:019D
cs=0x1a55;eip=0x00019f; 	T(TEST(bx, 0x0E000));	// 47790 test    bx, 0E000h ;~ 1A55:019F
cs=0x1a55;eip=0x0001a3; 	R(JZ(loc_28cdc));	// 47791 jz      short loc_28CDC ;~ 1A55:01A3
cs=0x1a55;eip=0x0001a5; 	T(SUB(bx, 0x2000));	// 47792 sub     bx, 2000h ;~ 1A55:01A5
cs=0x1a55;eip=0x0001a9; 	R(JMP(loc_28c3a));	// 47793 jmp     loc_28C3A ;~ 1A55:01A9
loc_28cdc:
	// 7813 
cs=0x1a55;eip=0x0001ac; 	T(OR(bx, 0x6000));	// 47797 or      bx, 6000h ;~ 1A55:01AC
cs=0x1a55;eip=0x0001b0; 	T(SUB(bx, 0x0A0));	// 47798 sub     bx, 0A0h ; ' ' ;~ 1A55:01B0
cs=0x1a55;eip=0x0001b4; 	R(JMP(loc_28c3a));	// 47799 jmp     loc_28C3A ;~ 1A55:01B4
loc_28ce7:
	// 7814 
cs=0x1a55;eip=0x0001b7; 	R(JMP(loc_28f02));	// 47803 jmp     loc_28F02 ;~ 1A55:01B7
loc_28cea:
	// 7815 
cs=0x1a55;eip=0x0001ba; 	T(SHR(ax, 1));	// 47807 shr     ax, 1 ;~ 1A55:01BA
cs=0x1a55;eip=0x0001bc; 	T(RCR(bx, 1));	// 47808 rcr     bx, 1 ;~ 1A55:01BC
cs=0x1a55;eip=0x0001be; 	T(SHR(ax, 1));	// 47809 shr     ax, 1 ;~ 1A55:01BE
cs=0x1a55;eip=0x0001c0; 	T(RCR(bx, 1));	// 47810 rcr     bx, 1 ;~ 1A55:01C0
cs=0x1a55;eip=0x0001c2; 	T(SHR(bx, 1));	// 47811 shr     bx, 1 ;~ 1A55:01C2
cs=0x1a55;eip=0x0001c4; 	T(MOV(ah, 0x5A));	// 47812 mov     ah, 5Ah ; 'Z' ;~ 1A55:01C4
cs=0x1a55;eip=0x0001c6; 	T(MUL1_1(ah));	// 47813 mul     ah ;~ 1A55:01C6
cs=0x1a55;eip=0x0001c8; 	T(ADD(bx, ax));	// 47814 add     bx, ax ;~ 1A55:01C8
loc_28cfa:
	// 7816 
cs=0x1a55;eip=0x0001ca; 	T(AND(cx, 7));	// 47817 and     cx, 7 ;~ 1A55:01CA
cs=0x1a55;eip=0x0001cd; 	T(SUB(ch, byte_37b81));	// 47818 sub     ch, byte_37B81 ;~ 1A55:01CD
cs=0x1a55;eip=0x0001d1; 	T(NOT(ch));	// 47819 not     ch ;~ 1A55:01D1
cs=0x1a55;eip=0x0001d3; 	T(MOV(si, *(dw*)(raddr(ss,bp+6))));	// 47820 mov     si, [bp+6] ;~ 1A55:01D3
cs=0x1a55;eip=0x0001d6; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0A))));	// 47821 mov     di, [bp+0Ah] ;~ 1A55:01D6
loc_28d09:
	// 7817 
cs=0x1a55;eip=0x0001d9; 	T(MOV(dx, *(dw*)(raddr(ss,bp+8))));	// 47825 mov     dx, [bp+8] ;~ 1A55:01D9
cs=0x1a55;eip=0x0001dc; 	X(PUSH(bx));	// 47826 push    bx ;~ 1A55:01DC
loc_28d0d:
	// 7818 
cs=0x1a55;eip=0x0001dd; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 47829 mov     ax, es:[bx] ;~ 1A55:01DD
cs=0x1a55;eip=0x0001e0; 	T(XCHG(ah, al));	// 47830 xchg    ah, al ;~ 1A55:01E0
cs=0x1a55;eip=0x0001e2; 	T(SHL(ax, cl));	// 47831 shl     ax, cl ;~ 1A55:01E2
cs=0x1a55;eip=0x0001e4; 	T(XOR(ah, ch));	// 47832 xor     ah, ch ;~ 1A55:01E4
cs=0x1a55;eip=0x0001e6; 	X(MOV(*(raddr(ds,si)), ah));	// 47833 mov     [si], ah ;~ 1A55:01E6
cs=0x1a55;eip=0x0001e8; 	T(INC(si));	// 47834 inc     si ;~ 1A55:01E8
cs=0x1a55;eip=0x0001e9; 	T(INC(bx));	// 47835 inc     bx ;~ 1A55:01E9
cs=0x1a55;eip=0x0001ea; 	T(DEC(dx));	// 47836 dec     dx ;~ 1A55:01EA
cs=0x1a55;eip=0x0001eb; 	R(JNZ(loc_28d0d));	// 47837 jnz     short loc_28D0D ;~ 1A55:01EB
cs=0x1a55;eip=0x0001ed; 	X(POP(bx));	// 47838 pop     bx ;~ 1A55:01ED
cs=0x1a55;eip=0x0001ee; 	T(DEC(di));	// 47839 dec     di ;~ 1A55:01EE
cs=0x1a55;eip=0x0001ef; 	R(JZ(loc_28d37));	// 47840 jz      short loc_28D37 ;~ 1A55:01EF
cs=0x1a55;eip=0x0001f1; 	T(TEST(bx, 0x0E000));	// 47841 test    bx, 0E000h ;~ 1A55:01F1
cs=0x1a55;eip=0x0001f5; 	R(JZ(loc_28d2d));	// 47842 jz      short loc_28D2D ;~ 1A55:01F5
cs=0x1a55;eip=0x0001f7; 	T(SUB(bx, 0x2000));	// 47843 sub     bx, 2000h ;~ 1A55:01F7
cs=0x1a55;eip=0x0001fb; 	R(JMP(loc_28d09));	// 47844 jmp     short loc_28D09 ;~ 1A55:01FB
loc_28d2d:
	// 7819 
cs=0x1a55;eip=0x0001fd; 	T(OR(bx, word_37f94));	// 47848 or      bx, word_37F94 ;~ 1A55:01FD
cs=0x1a55;eip=0x000201; 	T(SUB(bx, word_38018));	// 47849 sub     bx, word_38018 ;~ 1A55:0201
cs=0x1a55;eip=0x000205; 	R(JMP(loc_28d09));	// 47850 jmp     short loc_28D09 ;~ 1A55:0205
loc_28d37:
	// 7820 
cs=0x1a55;eip=0x000207; 	R(JMP(loc_28f02));	// 47854 jmp     loc_28F02 ;~ 1A55:0207
loc_28d3a:
	// 7821 
cs=0x1a55;eip=0x00020a; 	T(SHL(bx, 1));	// 47858 shl     bx, 1 ;~ 1A55:020A
cs=0x1a55;eip=0x00020c; 	T(ADD(bx, 0x28));	// 47859 add     bx, 28h ; '(' ;~ 1A55:020C
cs=0x1a55;eip=0x00020f; 	T(MOV(dx, ax));	// 47860 mov     dx, ax ;~ 1A55:020F
cs=0x1a55;eip=0x000211; 	T(SAR(ax, 1));	// 47861 sar     ax, 1 ;~ 1A55:0211
cs=0x1a55;eip=0x000213; 	T(ADD(ax, dx));	// 47862 add     ax, dx ;~ 1A55:0213
cs=0x1a55;eip=0x000215; 	T(ADD(ax, 0x18));	// 47863 add     ax, 18h ;~ 1A55:0215
cs=0x1a55;eip=0x000218; 	T(AND(dx, 1));	// 47864 and     dx, 1 ;~ 1A55:0218
cs=0x1a55;eip=0x00021b; 	T(ADD(ax, dx));	// 47865 add     ax, dx ;~ 1A55:021B
cs=0x1a55;eip=0x00021d; 	X(MOV(byte_37b88, dl));	// 47866 mov     byte_37B88, dl ;~ 1A55:021D
cs=0x1a55;eip=0x000221; 	T(SHR(ax, 1));	// 47867 shr     ax, 1 ;~ 1A55:0221
cs=0x1a55;eip=0x000223; 	T(RCR(bx, 1));	// 47868 rcr     bx, 1 ;~ 1A55:0223
cs=0x1a55;eip=0x000225; 	T(SHR(ax, 1));	// 47869 shr     ax, 1 ;~ 1A55:0225
cs=0x1a55;eip=0x000227; 	T(RCR(bx, 1));	// 47870 rcr     bx, 1 ;~ 1A55:0227
cs=0x1a55;eip=0x000229; 	T(SHR(bx, 1));	// 47871 shr     bx, 1 ;~ 1A55:0229
cs=0x1a55;eip=0x00022b; 	T(MOV(ah, 0x5A));	// 47872 mov     ah, 5Ah ; 'Z' ;~ 1A55:022B
cs=0x1a55;eip=0x00022d; 	T(MUL1_1(ah));	// 47873 mul     ah ;~ 1A55:022D
cs=0x1a55;eip=0x00022f; 	T(ADD(bx, ax));	// 47874 add     bx, ax ;~ 1A55:022F
cs=0x1a55;eip=0x000231; 	T(MOV(al, byte_37b81));	// 47875 mov     al, byte_37B81 ;~ 1A55:0231
cs=0x1a55;eip=0x000234; 	T(AND(al, 3));	// 47876 and     al, 3 ;~ 1A55:0234
cs=0x1a55;eip=0x000236; 	T(MOV(ah, al));	// 47877 mov     ah, al ;~ 1A55:0236
cs=0x1a55;eip=0x000238; 	T(SHL(ah, 1));	// 47878 shl     ah, 1 ;~ 1A55:0238
cs=0x1a55;eip=0x00023a; 	T(SHL(ah, 1));	// 47879 shl     ah, 1 ;~ 1A55:023A
cs=0x1a55;eip=0x00023c; 	T(OR(al, ah));	// 47880 or      al, ah ;~ 1A55:023C
cs=0x1a55;eip=0x00023e; 	T(SHL(ah, 1));	// 47881 shl     ah, 1 ;~ 1A55:023E
cs=0x1a55;eip=0x000240; 	T(SHL(ah, 1));	// 47882 shl     ah, 1 ;~ 1A55:0240
cs=0x1a55;eip=0x000242; 	T(OR(al, ah));	// 47883 or      al, ah ;~ 1A55:0242
cs=0x1a55;eip=0x000244; 	T(SHL(ah, 1));	// 47884 shl     ah, 1 ;~ 1A55:0244
cs=0x1a55;eip=0x000246; 	T(SHL(ah, 1));	// 47885 shl     ah, 1 ;~ 1A55:0246
cs=0x1a55;eip=0x000248; 	T(OR(al, ah));	// 47886 or      al, ah ;~ 1A55:0248
cs=0x1a55;eip=0x00024a; 	T(MOV(ah, al));	// 47887 mov     ah, al ;~ 1A55:024A
cs=0x1a55;eip=0x00024c; 	X(MOV(word_38203, ax));	// 47888 mov     word_38203, ax ;~ 1A55:024C
cs=0x1a55;eip=0x00024f; 	T(AND(cx, 3));	// 47889 and     cx, 3 ;~ 1A55:024F
cs=0x1a55;eip=0x000252; 	T(SHL(cl, 1));	// 47890 shl     cl, 1 ;~ 1A55:0252
cs=0x1a55;eip=0x000254; 	T(MOV(si, *(dw*)(raddr(ss,bp+6))));	// 47891 mov     si, [bp+6] ;~ 1A55:0254
cs=0x1a55;eip=0x000257; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x0A))));	// 47892 mov     dx, [bp+0Ah] ;~ 1A55:0257
loc_28d8a:
	// 7822 
cs=0x1a55;eip=0x00025a; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 47896 mov     di, [bp+8] ;~ 1A55:025A
cs=0x1a55;eip=0x00025d; 	X(PUSH(bx));	// 47897 push    bx ;~ 1A55:025D
cs=0x1a55;eip=0x00025e; 	X(PUSH(dx));	// 47898 push    dx ;~ 1A55:025E
loc_28d8f:
	// 7823 
cs=0x1a55;eip=0x00025f; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 47901 mov     ax, es:[bx] ;~ 1A55:025F
cs=0x1a55;eip=0x000262; 	T(XCHG(ah, al));	// 47902 xchg    ah, al ;~ 1A55:0262
cs=0x1a55;eip=0x000264; 	T(ADD(bx, 2));	// 47903 add     bx, 2 ;~ 1A55:0264
cs=0x1a55;eip=0x000267; 	T(MOV(dl, *(raddr(es,bx))));	// 47904 mov     dl, es:[bx] ;~ 1A55:0267
cs=0x1a55;eip=0x00026a; 	T(XOR(dh, dh));	// 47905 xor     dh, dh ;~ 1A55:026A
cs=0x1a55;eip=0x00026c; 	T(SHL(ax, cl));	// 47906 shl     ax, cl ;~ 1A55:026C
cs=0x1a55;eip=0x00026e; 	T(SHL(dx, cl));	// 47907 shl     dx, cl ;~ 1A55:026E
cs=0x1a55;eip=0x000270; 	T(OR(al, dh));	// 47908 or      al, dh ;~ 1A55:0270
cs=0x1a55;eip=0x000272; 	T(XOR(ax, word_38203));	// 47909 xor     ax, word_38203 ;~ 1A55:0272
cs=0x1a55;eip=0x000276; 	T(NOT(ax));	// 47910 not     ax ;~ 1A55:0276
cs=0x1a55;eip=0x000278; 	T(MOV(dx, ax));	// 47911 mov     dx, ax ;~ 1A55:0278
cs=0x1a55;eip=0x00027a; 	T(SHL(dx, 1));	// 47912 shl     dx, 1 ;~ 1A55:027A
cs=0x1a55;eip=0x00027c; 	T(AND(ax, dx));	// 47913 and     ax, dx ;~ 1A55:027C
cs=0x1a55;eip=0x00027e; 	X(PUSH(cx));	// 47914 push    cx ;~ 1A55:027E
cs=0x1a55;eip=0x00027f; 	T(MOV(cx, 8));	// 47915 mov     cx, 8 ;~ 1A55:027F
cs=0x1a55;eip=0x000282; 	T(XOR(dx, dx));	// 47916 xor     dx, dx ;~ 1A55:0282
loc_28db4:
	// 7824 
cs=0x1a55;eip=0x000284; 	T(SHL(ax, 1));	// 47919 shl     ax, 1 ;~ 1A55:0284
cs=0x1a55;eip=0x000286; 	T(ADC(dl, dh));	// 47920 adc     dl, dh ;~ 1A55:0286
cs=0x1a55;eip=0x000288; 	T(ROL(dl, 1));	// 47921 rol     dl, 1 ;~ 1A55:0288
cs=0x1a55;eip=0x00028a; 	T(SHL(ax, 1));	// 47922 shl     ax, 1 ;~ 1A55:028A
cs=0x1a55;eip=0x00028c; 	R(LOOP(loc_28db4));	// 47923 loop    loc_28DB4 ;~ 1A55:028C
cs=0x1a55;eip=0x00028e; 	T(ROR(dl, 1));	// 47924 ror     dl, 1 ;~ 1A55:028E
cs=0x1a55;eip=0x000290; 	X(POP(cx));	// 47925 pop     cx ;~ 1A55:0290
cs=0x1a55;eip=0x000291; 	X(MOV(*(raddr(ds,si)), dl));	// 47926 mov     [si], dl ;~ 1A55:0291
cs=0x1a55;eip=0x000293; 	T(INC(si));	// 47927 inc     si ;~ 1A55:0293
cs=0x1a55;eip=0x000294; 	T(DEC(di));	// 47928 dec     di ;~ 1A55:0294
cs=0x1a55;eip=0x000295; 	R(JNZ(loc_28d8f));	// 47929 jnz     short loc_28D8F ;~ 1A55:0295
cs=0x1a55;eip=0x000297; 	X(POP(dx));	// 47930 pop     dx ;~ 1A55:0297
cs=0x1a55;eip=0x000298; 	X(POP(bx));	// 47931 pop     bx ;~ 1A55:0298
cs=0x1a55;eip=0x000299; 	T(DEC(dx));	// 47932 dec     dx ;~ 1A55:0299
cs=0x1a55;eip=0x00029a; 	R(JZ(loc_28df1));	// 47933 jz      short loc_28DF1 ;~ 1A55:029A
cs=0x1a55;eip=0x00029c; 	T(MOV(al, byte_37b88));	// 47934 mov     al, byte_37B88 ;~ 1A55:029C
cs=0x1a55;eip=0x00029f; 	X(XOR(byte_37b88, 1));	// 47935 xor     byte_37B88, 1 ;~ 1A55:029F
loc_28dd4:
	// 7825 
cs=0x1a55;eip=0x0002a4; 	T(TEST(bx, 0x0E000));	// 47939 test    bx, 0E000h ;~ 1A55:02A4
cs=0x1a55;eip=0x0002a8; 	R(JZ(loc_28de4));	// 47940 jz      short loc_28DE4 ;~ 1A55:02A8
cs=0x1a55;eip=0x0002aa; 	T(SUB(bx, 0x2000));	// 47941 sub     bx, 2000h ;~ 1A55:02AA
cs=0x1a55;eip=0x0002ae; 	T(XOR(al, 1));	// 47942 xor     al, 1 ;~ 1A55:02AE
cs=0x1a55;eip=0x0002b0; 	R(JZ(loc_28dd4));	// 47943 jz      short loc_28DD4 ;~ 1A55:02B0
cs=0x1a55;eip=0x0002b2; 	R(JMP(loc_28d8a));	// 47944 jmp     short loc_28D8A ;~ 1A55:02B2
loc_28de4:
	// 7826 
cs=0x1a55;eip=0x0002b4; 	T(OR(bx, 0x6000));	// 47948 or      bx, 6000h ;~ 1A55:02B4
cs=0x1a55;eip=0x0002b8; 	T(SUB(bx, 0x5A));	// 47949 sub     bx, 5Ah ; 'Z' ;~ 1A55:02B8
cs=0x1a55;eip=0x0002bb; 	T(XOR(al, 1));	// 47950 xor     al, 1 ;~ 1A55:02BB
cs=0x1a55;eip=0x0002bd; 	R(JZ(loc_28dd4));	// 47951 jz      short loc_28DD4 ;~ 1A55:02BD
cs=0x1a55;eip=0x0002bf; 	R(JMP(loc_28d8a));	// 47952 jmp     short loc_28D8A ;~ 1A55:02BF
loc_28df1:
	// 7827 
cs=0x1a55;eip=0x0002c1; 	R(JMP(loc_28f02));	// 47956 jmp     loc_28F02 ;~ 1A55:02C1
loc_28df4:
	// 7828 
cs=0x1a55;eip=0x0002c4; 	T(AND(cx, 7));	// 47960 and     cx, 7 ;~ 1A55:02C4
cs=0x1a55;eip=0x0002c7; 	T(SHR(bx, 1));	// 47961 shr     bx, 1 ;~ 1A55:02C7
cs=0x1a55;eip=0x0002c9; 	T(SHR(bx, 1));	// 47962 shr     bx, 1 ;~ 1A55:02C9
cs=0x1a55;eip=0x0002cb; 	T(SHR(bx, 1));	// 47963 shr     bx, 1 ;~ 1A55:02CB
cs=0x1a55;eip=0x0002cd; 	X(MUL1_2(word_38018));	// 47964 mul     word_38018 ;~ 1A55:02CD
cs=0x1a55;eip=0x0002d1; 	T(ADD(bx, ax));	// 47965 add     bx, ax ;~ 1A55:02D1
cs=0x1a55;eip=0x0002d3; 	T(MOV(si, *(dw*)(raddr(ss,bp+6))));	// 47966 mov     si, [bp+6] ;~ 1A55:02D3
cs=0x1a55;eip=0x0002d6; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0A))));	// 47967 mov     di, [bp+0Ah] ;~ 1A55:02D6
cs=0x1a55;eip=0x0002d9; 	X(PUSH(ax));	// 47968 push    ax ;~ 1A55:02D9
cs=0x1a55;eip=0x0002da; 	T(MOV(al, 5));	// 47969 mov     al, 5 ;~ 1A55:02DA
cs=0x1a55;eip=0x0002dc; 	T(MOV(ah, 8));	// 47970 mov     ah, 8 ;~ 1A55:02DC
cs=0x1a55;eip=0x0002de; 	X(PUSH(dx));	// 47971 push    dx ;~ 1A55:02DE
cs=0x1a55;eip=0x0002df; 	T(MOV(dx, 0x3CE));	// 47972 mov     dx, 3CEh ;~ 1A55:02DF
cs=0x1a55;eip=0x0002e2; 	R(OUT(dx, ax));	// 47973 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1A55:02E2
cs=0x1a55;eip=0x0002e3; 	X(POP(dx));	// 47975 pop     dx ;~ 1A55:02E3
cs=0x1a55;eip=0x0002e4; 	X(POP(ax));	// 47976 pop     ax ;~ 1A55:02E4
loc_28e15:
	// 7829 
cs=0x1a55;eip=0x0002e5; 	T(MOV(dx, *(dw*)(raddr(ss,bp+8))));	// 47979 mov     dx, [bp+8] ;~ 1A55:02E5
cs=0x1a55;eip=0x0002e8; 	X(PUSH(bx));	// 47980 push    bx ;~ 1A55:02E8
loc_28e19:
	// 7830 
cs=0x1a55;eip=0x0002e9; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 47983 mov     ax, es:[bx] ;~ 1A55:02E9
cs=0x1a55;eip=0x0002ec; 	T(XCHG(ah, al));	// 47984 xchg    ah, al ;~ 1A55:02EC
cs=0x1a55;eip=0x0002ee; 	T(SHL(ax, cl));	// 47985 shl     ax, cl ;~ 1A55:02EE
cs=0x1a55;eip=0x0002f0; 	X(MOV(*(raddr(ds,si)), ah));	// 47986 mov     [si], ah ;~ 1A55:02F0
cs=0x1a55;eip=0x0002f2; 	T(INC(si));	// 47987 inc     si ;~ 1A55:02F2
cs=0x1a55;eip=0x0002f3; 	T(INC(bx));	// 47988 inc     bx ;~ 1A55:02F3
cs=0x1a55;eip=0x0002f4; 	T(DEC(dx));	// 47989 dec     dx ;~ 1A55:02F4
cs=0x1a55;eip=0x0002f5; 	R(JNZ(loc_28e19));	// 47990 jnz     short loc_28E19 ;~ 1A55:02F5
cs=0x1a55;eip=0x0002f7; 	X(POP(bx));	// 47991 pop     bx ;~ 1A55:02F7
cs=0x1a55;eip=0x0002f8; 	T(SUB(bx, word_38018));	// 47992 sub     bx, word_38018 ;~ 1A55:02F8
cs=0x1a55;eip=0x0002fc; 	T(DEC(di));	// 47993 dec     di ;~ 1A55:02FC
cs=0x1a55;eip=0x0002fd; 	R(JNZ(loc_28e15));	// 47994 jnz     short loc_28E15 ;~ 1A55:02FD
cs=0x1a55;eip=0x0002ff; 	X(PUSH(ax));	// 47995 push    ax ;~ 1A55:02FF
cs=0x1a55;eip=0x000300; 	T(MOV(al, 5));	// 47996 mov     al, 5 ;~ 1A55:0300
cs=0x1a55;eip=0x000302; 	T(MOV(ah, 0));	// 47997 mov     ah, 0 ;~ 1A55:0302
cs=0x1a55;eip=0x000304; 	X(PUSH(dx));	// 47998 push    dx ;~ 1A55:0304
cs=0x1a55;eip=0x000305; 	T(MOV(dx, 0x3CE));	// 47999 mov     dx, 3CEh ;~ 1A55:0305
cs=0x1a55;eip=0x000308; 	R(OUT(dx, ax));	// 48000 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1A55:0308
cs=0x1a55;eip=0x000309; 	X(POP(dx));	// 48007 pop     dx ;~ 1A55:0309
cs=0x1a55;eip=0x00030a; 	X(POP(ax));	// 48008 pop     ax ;~ 1A55:030A
cs=0x1a55;eip=0x00030b; 	R(JMP(loc_28f02));	// 48009 jmp     loc_28F02 ;~ 1A55:030B
loc_28e3e:
	// 7831 
cs=0x1a55;eip=0x00030e; 	T(XCHG(ah, al));	// 48013 xchg    ah, al ;~ 1A55:030E
cs=0x1a55;eip=0x000310; 	T(ADD(bx, ax));	// 48014 add     bx, ax ;~ 1A55:0310
cs=0x1a55;eip=0x000312; 	T(SHR(ax, 1));	// 48015 shr     ax, 1 ;~ 1A55:0312
cs=0x1a55;eip=0x000314; 	T(SHR(ax, 1));	// 48016 shr     ax, 1 ;~ 1A55:0314
cs=0x1a55;eip=0x000316; 	T(ADD(bx, ax));	// 48017 add     bx, ax ;~ 1A55:0316
cs=0x1a55;eip=0x000318; 	T(MOV(ah, byte_37b81));	// 48018 mov     ah, byte_37B81 ;~ 1A55:0318
cs=0x1a55;eip=0x00031c; 	T(MOV(si, *(dw*)(raddr(ss,bp+6))));	// 48019 mov     si, [bp+6] ;~ 1A55:031C
cs=0x1a55;eip=0x00031f; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0A))));	// 48020 mov     di, [bp+0Ah] ;~ 1A55:031F
loc_28e52:
	// 7832 
cs=0x1a55;eip=0x000322; 	T(MOV(dx, *(dw*)(raddr(ss,bp+8))));	// 48023 mov     dx, [bp+8] ;~ 1A55:0322
cs=0x1a55;eip=0x000325; 	X(PUSH(bx));	// 48024 push    bx ;~ 1A55:0325
loc_28e56:
	// 7833 
cs=0x1a55;eip=0x000326; 	T(XOR(al, al));	// 48027 xor     al, al ;~ 1A55:0326
cs=0x1a55;eip=0x000328; 	T(MOV(ch, 0x80));	// 48028 mov     ch, 80h ; '€' ;~ 1A55:0328
loc_28e5a:
	// 7834 
cs=0x1a55;eip=0x00032a; 	T(CMP(*(raddr(es,bx)), ah));	// 48031 cmp     es:[bx], ah ;~ 1A55:032A
cs=0x1a55;eip=0x00032d; 	R(JNZ(loc_28e61));	// 48032 jnz     short loc_28E61 ;~ 1A55:032D
cs=0x1a55;eip=0x00032f; 	T(OR(al, ch));	// 48033 or      al, ch ;~ 1A55:032F
loc_28e61:
	// 7835 
cs=0x1a55;eip=0x000331; 	T(INC(bx));	// 48036 inc     bx ;~ 1A55:0331
cs=0x1a55;eip=0x000332; 	T(SHR(ch, 1));	// 48037 shr     ch, 1 ;~ 1A55:0332
cs=0x1a55;eip=0x000334; 	R(JNC(loc_28e5a));	// 48038 jnb     short loc_28E5A ;~ 1A55:0334
cs=0x1a55;eip=0x000336; 	X(MOV(*(raddr(ds,si)), al));	// 48039 mov     [si], al ;~ 1A55:0336
cs=0x1a55;eip=0x000338; 	T(INC(si));	// 48040 inc     si ;~ 1A55:0338
cs=0x1a55;eip=0x000339; 	T(DEC(dx));	// 48041 dec     dx ;~ 1A55:0339
cs=0x1a55;eip=0x00033a; 	R(JNZ(loc_28e56));	// 48042 jnz     short loc_28E56 ;~ 1A55:033A
cs=0x1a55;eip=0x00033c; 	X(POP(bx));	// 48043 pop     bx ;~ 1A55:033C
cs=0x1a55;eip=0x00033d; 	T(SUB(bx, 0x140));	// 48044 sub     bx, 140h ;~ 1A55:033D
cs=0x1a55;eip=0x000341; 	T(DEC(di));	// 48045 dec     di ;~ 1A55:0341
cs=0x1a55;eip=0x000342; 	R(JNZ(loc_28e52));	// 48046 jnz     short loc_28E52 ;~ 1A55:0342
cs=0x1a55;eip=0x000344; 	R(JMP(loc_28f02));	// 48047 jmp     loc_28F02 ;~ 1A55:0344
ret_1a55_347:
	// 7836 
cs=0x1a55;eip=0x000347; 	T(XCHG(ah, al));	// 48049 xchg    ah, al ;~ 1A55:0347
cs=0x1a55;eip=0x000349; 	T(ADD(bx, ax));	// 48050 add     bx, ax ;~ 1A55:0349
cs=0x1a55;eip=0x00034b; 	T(SHR(ax, 1));	// 48051 shr     ax, 1 ;~ 1A55:034B
cs=0x1a55;eip=0x00034d; 	T(SHR(ax, 1));	// 48052 shr     ax, 1 ;~ 1A55:034D
cs=0x1a55;eip=0x00034f; 	T(ADD(bx, ax));	// 48053 add     bx, ax ;~ 1A55:034F
cs=0x1a55;eip=0x000351; 	T(SHR(bx, 1));	// 48054 shr     bx, 1 ;~ 1A55:0351
cs=0x1a55;eip=0x000353; 	T(SHR(bx, 1));	// 48055 shr     bx, 1 ;~ 1A55:0353
cs=0x1a55;eip=0x000355; 	X(MOV(word_37bb9, bx));	// 48056 mov     word_37BB9, bx ;~ 1A55:0355
cs=0x1a55;eip=0x000359; 	T(AND(cl, 3));	// 48057 and     cl, 3 ;~ 1A55:0359
cs=0x1a55;eip=0x00035c; 	X(MOV(byte_37bc2, cl));	// 48058 mov     byte_37BC2, cl ;~ 1A55:035C
cs=0x1a55;eip=0x000360; 	T(MOV(di, *(dw*)(raddr(ss,bp+6))));	// 48059 mov     di, [bp+6] ;~ 1A55:0360
cs=0x1a55;eip=0x000363; 	X(MOV(word_37bbb, di));	// 48060 mov     word_37BBB, di ;~ 1A55:0363
cs=0x1a55;eip=0x000367; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 48061 mov     ax, [bp+8] ;~ 1A55:0367
cs=0x1a55;eip=0x00036a; 	X(MOV(word_37bbd, ax));	// 48062 mov     word_37BBD, ax ;~ 1A55:036A
cs=0x1a55;eip=0x00036d; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x0A))));	// 48063 mov     cx, [bp+0Ah] ;~ 1A55:036D
cs=0x1a55;eip=0x000370; 	X(MOV(word_37bc4, cx));	// 48064 mov     word_37BC4, cx ;~ 1A55:0370
cs=0x1a55;eip=0x000374; 	T(MOV(bl, 0x80));	// 48065 mov     bl, 80h ; '€' ;~ 1A55:0374
cs=0x1a55;eip=0x000376; 	T(MOV(bh, byte_37b81));	// 48066 mov     bh, byte_37B81 ;~ 1A55:0376
cs=0x1a55;eip=0x00037a; 	T(MUL1_2(cx));	// 48067 mul     cx ;~ 1A55:037A
cs=0x1a55;eip=0x00037c; 	T(MOV(cx, ax));	// 48068 mov     cx, ax ;~ 1A55:037C
cs=0x1a55;eip=0x00037e; 	T(XOR(al, al));	// 48069 xor     al, al ;~ 1A55:037E
loc_28eb0:
	// 7837 
cs=0x1a55;eip=0x000380; 	X(MOV(*(raddr(ds,di)), al));	// 48072 mov     [di], al ;~ 1A55:0380
cs=0x1a55;eip=0x000382; 	T(INC(di));	// 48073 inc     di ;~ 1A55:0382
cs=0x1a55;eip=0x000383; 	R(LOOP(loc_28eb0));	// 48074 loop    loc_28EB0 ;~ 1A55:0383
loc_28eb5:
	// 7838 
cs=0x1a55;eip=0x000385; 	T(MOV(dx, 0x3CE));	// 48078 mov     dx, 3CEh ;~ 1A55:0385
cs=0x1a55;eip=0x000388; 	T(MOV(al, 4));	// 48079 mov     al, 4 ;~ 1A55:0388
cs=0x1a55;eip=0x00038a; 	T(MOV(ah, byte_37bc2));	// 48080 mov     ah, byte_37BC2 ;~ 1A55:038A
cs=0x1a55;eip=0x00038e; 	R(OUT(dx, ax));	// 48081 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1A55:038E
cs=0x1a55;eip=0x00038f; 	T(MOV(di, word_37bbb));	// 48084 mov     di, word_37BBB ;~ 1A55:038F
cs=0x1a55;eip=0x000393; 	T(MOV(si, word_37bb9));	// 48085 mov     si, word_37BB9 ;~ 1A55:0393
cs=0x1a55;eip=0x000397; 	T(MOV(ax, 0x50));	// 48086 mov     ax, 50h ; 'P' ;~ 1A55:0397
cs=0x1a55;eip=0x00039a; 	T(MOV(cx, word_37bc4));	// 48087 mov     cx, word_37BC4 ;~ 1A55:039A
cs=0x1a55;eip=0x00039e; 	T(MOV(dx, *(dw*)(raddr(ss,bp+8))));	// 48088 mov     dx, [bp+8] ;~ 1A55:039E
loc_28ed1:
	// 7839 
cs=0x1a55;eip=0x0003a1; 	T(CMP(*(raddr(es,si)), bh));	// 48091 cmp     es:[si], bh ;~ 1A55:03A1
cs=0x1a55;eip=0x0003a4; 	R(JNZ(loc_28ed8));	// 48092 jnz     short loc_28ED8 ;~ 1A55:03A4
cs=0x1a55;eip=0x0003a6; 	X(OR(*(raddr(ds,di)), bl));	// 48093 or      [di], bl ;~ 1A55:03A6
loc_28ed8:
	// 7840 
cs=0x1a55;eip=0x0003a8; 	T(ADD(di, dx));	// 48096 add     di, dx ;~ 1A55:03A8
cs=0x1a55;eip=0x0003aa; 	T(SUB(si, ax));	// 48097 sub     si, ax ;~ 1A55:03AA
cs=0x1a55;eip=0x0003ac; 	R(LOOP(loc_28ed1));	// 48098 loop    loc_28ED1 ;~ 1A55:03AC
cs=0x1a55;eip=0x0003ae; 	T(MOV(cl, byte_37bc2));	// 48099 mov     cl, byte_37BC2 ;~ 1A55:03AE
cs=0x1a55;eip=0x0003b2; 	T(INC(cl));	// 48100 inc     cl ;~ 1A55:03B2
cs=0x1a55;eip=0x0003b4; 	T(AND(cl, 3));	// 48101 and     cl, 3 ;~ 1A55:03B4
cs=0x1a55;eip=0x0003b7; 	X(MOV(byte_37bc2, cl));	// 48102 mov     byte_37BC2, cl ;~ 1A55:03B7
cs=0x1a55;eip=0x0003bb; 	T(MOV(ax, 1));	// 48103 mov     ax, 1 ;~ 1A55:03BB
cs=0x1a55;eip=0x0003be; 	T(SHR(ax, cl));	// 48104 shr     ax, cl ;~ 1A55:03BE
cs=0x1a55;eip=0x0003c0; 	X(ADD(word_37bb9, ax));	// 48105 add     word_37BB9, ax ;~ 1A55:03C0
cs=0x1a55;eip=0x0003c4; 	T(ROR(bl, 1));	// 48106 ror     bl, 1 ;~ 1A55:03C4
cs=0x1a55;eip=0x0003c6; 	R(JNC(loc_28eb5));	// 48107 jnb     short loc_28EB5 ;~ 1A55:03C6
cs=0x1a55;eip=0x0003c8; 	X(INC(word_37bbb));	// 48108 inc     word_37BBB ;~ 1A55:03C8
cs=0x1a55;eip=0x0003cc; 	X(DEC(word_37bbd));	// 48109 dec     word_37BBD ;~ 1A55:03CC
cs=0x1a55;eip=0x0003d0; 	R(JNZ(loc_28eb5));	// 48110 jnz     short loc_28EB5 ;~ 1A55:03D0
loc_28f02:
	// 7841 
cs=0x1a55;eip=0x0003d2; 	T(XOR(ax, ax));	// 48114 xor     ax, ax ;~ 1A55:03D2
cs=0x1a55;eip=0x0003d4; 	X(POP(si));	// 48115 pop     si ;~ 1A55:03D4
cs=0x1a55;eip=0x0003d5; 	X(POP(di));	// 48116 pop     di ;~ 1A55:03D5
cs=0x1a55;eip=0x0003d6; 	X(POP(bp));	// 48117 pop     bp ;~ 1A55:03D6
cs=0x1a55;eip=0x0003d7; 	R(RETF(0));	// 48118 retf ;~ 1A55:03D7

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_28b53: 	goto loc_28b53;
        case m2c::kloc_28b90: 	goto loc_28b90;
        case m2c::kloc_28b95: 	goto loc_28b95;
        case m2c::kloc_28bba: 	goto loc_28bba;
        case m2c::kloc_28bdb: 	goto loc_28bdb;
        case m2c::kloc_28be1: 	goto loc_28be1;
        case m2c::kloc_28be4: 	goto loc_28be4;
        case m2c::kloc_28bfd: 	goto loc_28bfd;
        case m2c::kloc_28c3a: 	goto loc_28c3a;
        case m2c::kloc_28c3f: 	goto loc_28c3f;
        case m2c::kloc_28c96: 	goto loc_28c96;
        case m2c::kloc_28cad: 	goto loc_28cad;
        case m2c::kloc_28cca: 	goto loc_28cca;
        case m2c::kloc_28cdc: 	goto loc_28cdc;
        case m2c::kloc_28ce7: 	goto loc_28ce7;
        case m2c::kloc_28cea: 	goto loc_28cea;
        case m2c::kloc_28cfa: 	goto loc_28cfa;
        case m2c::kloc_28d09: 	goto loc_28d09;
        case m2c::kloc_28d0d: 	goto loc_28d0d;
        case m2c::kloc_28d2d: 	goto loc_28d2d;
        case m2c::kloc_28d37: 	goto loc_28d37;
        case m2c::kloc_28d3a: 	goto loc_28d3a;
        case m2c::kloc_28d8a: 	goto loc_28d8a;
        case m2c::kloc_28d8f: 	goto loc_28d8f;
        case m2c::kloc_28db4: 	goto loc_28db4;
        case m2c::kloc_28dd4: 	goto loc_28dd4;
        case m2c::kloc_28de4: 	goto loc_28de4;
        case m2c::kloc_28df1: 	goto loc_28df1;
        case m2c::kloc_28df4: 	goto loc_28df4;
        case m2c::kloc_28e15: 	goto loc_28e15;
        case m2c::kloc_28e19: 	goto loc_28e19;
        case m2c::kloc_28e3e: 	goto loc_28e3e;
        case m2c::kloc_28e52: 	goto loc_28e52;
        case m2c::kloc_28e56: 	goto loc_28e56;
        case m2c::kloc_28e5a: 	goto loc_28e5a;
        case m2c::kloc_28e61: 	goto loc_28e61;
        case m2c::kloc_28eb0: 	goto loc_28eb0;
        case m2c::kloc_28eb5: 	goto loc_28eb5;
        case m2c::kloc_28ed1: 	goto loc_28ed1;
        case m2c::kloc_28ed8: 	goto loc_28ed8;
        case m2c::kloc_28f02: 	goto loc_28f02;
        case m2c::kret_1a55_347: 	goto ret_1a55_347;
        case m2c::kret_1a55_5: 	goto ret_1a55_5;
        case m2c::ksub_28b34: 	goto sub_28b34;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

