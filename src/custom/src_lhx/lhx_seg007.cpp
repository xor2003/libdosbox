/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group7(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group7:
    _begin:
sub_2e88a:
	// 68586 
#undef arg_0
#define arg_0 6
	// 68589 arg_0           = word ptr  6 ;~ 202A:000A
#undef arg_2
#define arg_2 8
	// 68590 arg_2           = word ptr  8 ;~ 202A:000A
#undef arg_4
#define arg_4 0x0A
	// 68591 arg_4           = word ptr  0Ah ;~ 202A:000A
#undef arg_6
#define arg_6 0x0C
	// 68592 arg_6           = word ptr  0Ch ;~ 202A:000A
#undef arg_8
#define arg_8 0x0E
	// 68593 arg_8           = word ptr  0Eh ;~ 202A:000A
#undef arg_a
#define arg_a 0x10
	// 68594 arg_A           = word ptr  10h ;~ 202A:000A
#undef arg_c
#define arg_c 0x12
	// 68595 arg_C           = word ptr  12h ;~ 202A:000A
#undef arg_e
#define arg_e 0x14
	// 68596 arg_E           = word ptr  14h ;~ 202A:000A
cs=0x202a;eip=0x00000a; 	X(PUSH(bp));	// 68598 push    bp ;~ 202A:000A
cs=0x202a;eip=0x00000b; 	T(MOV(bp, sp));	// 68599 mov     bp, sp ;~ 202A:000B
cs=0x202a;eip=0x00000d; 	X(PUSH(si));	// 68600 push    si ;~ 202A:000D
cs=0x202a;eip=0x00000e; 	X(PUSH(di));	// 68601 push    di ;~ 202A:000E
cs=0x202a;eip=0x00000f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_e))));	// 68602 mov     ax, [bp+arg_E] ;~ 202A:000F
cs=0x202a;eip=0x000012; 	X(MOV(*(dw*)((&unk_48016)), ax));	// 68603 mov     word ptr unk_48016, ax ;~ 202A:0012
cs=0x202a;eip=0x000015; 	T(MOV(bx, ax));	// 68604 mov     bx, ax ;~ 202A:0015
cs=0x202a;eip=0x000017; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_c))));	// 68605 mov     ax, [bp+arg_C] ;~ 202A:0017
cs=0x202a;eip=0x00001a; 	X(MOV(*(dw*)((&unk_48018)), ax));	// 68606 mov     word ptr unk_48018, ax ;~ 202A:001A
cs=0x202a;eip=0x00001d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 68607 mov     ax, [bp+arg_A] ;~ 202A:001D
cs=0x202a;eip=0x000020; 	X(MOV(*(dw*)((&unk_4801a)), ax));	// 68608 mov     word ptr unk_4801A, ax ;~ 202A:0020
cs=0x202a;eip=0x000023; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 68609 mov     ax, [bp+arg_8] ;~ 202A:0023
cs=0x202a;eip=0x000026; 	X(MOV(*(dw*)((&unk_48022)), ax));	// 68610 mov     word ptr unk_48022, ax ;~ 202A:0026
cs=0x202a;eip=0x000029; 	T(MOV(di, ax));	// 68611 mov     di, ax ;~ 202A:0029
cs=0x202a;eip=0x00002b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 68612 mov     ax, [bp+arg_6] ;~ 202A:002B
cs=0x202a;eip=0x00002e; 	X(MOV(*(dw*)((&unk_48034)), ax));	// 68613 mov     word ptr unk_48034, ax ;~ 202A:002E
cs=0x202a;eip=0x000031; 	X(MOV(*(dw*)((&unk_48038)), ax));	// 68614 mov     word ptr unk_48038, ax ;~ 202A:0031
cs=0x202a;eip=0x000034; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 68615 mov     ax, [bp+arg_4] ;~ 202A:0034
cs=0x202a;eip=0x000037; 	X(MOV(*(dw*)((&unk_48036)), ax));	// 68616 mov     word ptr unk_48036, ax ;~ 202A:0037
cs=0x202a;eip=0x00003a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 68617 mov     ax, [bp+arg_2] ;~ 202A:003A
cs=0x202a;eip=0x00003d; 	X(MOV(*(dw*)((&unk_4801c)), ax));	// 68618 mov     word ptr unk_4801C, ax ;~ 202A:003D
cs=0x202a;eip=0x000040; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 68619 mov     ax, [bp+arg_0] ;~ 202A:0040
cs=0x202a;eip=0x000043; 	X(MOV(*(dw*)((&unk_4801e)), ax));	// 68620 mov     word ptr unk_4801E, ax ;~ 202A:0043
cs=0x202a;eip=0x000046; 	T(MOV(bp, bx));	// 68621 mov     bp, bx ;~ 202A:0046
cs=0x202a;eip=0x000048; 	T(MOV(si, *(dw*)((&byte_47b2e))));	// 68622 mov     si, word ptr byte_47B2E ;~ 202A:0048
cs=0x202a;eip=0x00004c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 68623 mov     ax, [bp+arg_0] ;~ 202A:004C
cs=0x202a;eip=0x00004f; 	X(MOV(*(dw*)((&unk_48046)), ax));	// 68624 mov     word ptr unk_48046, ax ;~ 202A:004F
cs=0x202a;eip=0x000052; 	T(MOV(ax, *(dw*)((&unk_4801c))));	// 68625 mov     ax, word ptr unk_4801C ;~ 202A:0052
cs=0x202a;eip=0x000055; 	T(MOV(cl, *(raddr(ds,si+0x6A4))));	// 68626 mov     cl, [si+6A4h] ;~ 202A:0055
cs=0x202a;eip=0x000059; 	T(SHR(ax, cl));	// 68627 shr     ax, cl ;~ 202A:0059
cs=0x202a;eip=0x00005b; 	X(MOV(*(dw*)((&unk_48020)), ax));	// 68628 mov     word ptr unk_48020, ax ;~ 202A:005B
cs=0x202a;eip=0x00005e; 	T(MOV(ax, *(dw*)((&unk_4801e))));	// 68629 mov     ax, word ptr unk_4801E ;~ 202A:005E
cs=0x202a;eip=0x000061; 	X(MOV(*(dw*)((&unk_48028)), ax));	// 68630 mov     word ptr unk_48028, ax ;~ 202A:0061
cs=0x202a;eip=0x000064; 	T(MOV(ax, *(dw*)((&unk_4801a))));	// 68631 mov     ax, word ptr unk_4801A ;~ 202A:0064
cs=0x202a;eip=0x000067; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 68632 imul    [bp+arg_0] ;~ 202A:0067
cs=0x202a;eip=0x00006a; 	X(MOV(*(dw*)((&unk_48032)), ax));	// 68633 mov     word ptr unk_48032, ax ;~ 202A:006A
cs=0x202a;eip=0x00006d; 	T(XOR(ax, ax));	// 68634 xor     ax, ax ;~ 202A:006D
cs=0x202a;eip=0x00006f; 	X(MOV(*(dw*)((&unk_48026)), ax));	// 68635 mov     word ptr unk_48026, ax ;~ 202A:006F
cs=0x202a;eip=0x000072; 	X(MOV(unk_4803e, al));	// 68636 mov     byte ptr unk_4803E, al ;~ 202A:0072
cs=0x202a;eip=0x000075; 	X(MOV(unk_4803f, al));	// 68637 mov     byte ptr unk_4803F, al ;~ 202A:0075
cs=0x202a;eip=0x000078; 	X(MOV(*(dw*)((&unk_48042)), ax));	// 68638 mov     word ptr unk_48042, ax ;~ 202A:0078
cs=0x202a;eip=0x00007b; 	X(MOV(*(dw*)((&unk_48044)), ax));	// 68639 mov     word ptr unk_48044, ax ;~ 202A:007B
cs=0x202a;eip=0x00007e; 	T(MOV(ax, *(dw*)((&unk_48036))));	// 68640 mov     ax, word ptr unk_48036 ;~ 202A:007E
cs=0x202a;eip=0x000081; 	T(CMP(ax, *(dw*)((&unk_56883))));	// 68641 cmp     ax, word ptr unk_56883 ;~ 202A:0081
cs=0x202a;eip=0x000085; 	R(JG(loc_2e949));	// 68642 jg      short loc_2E949 ;~ 202A:0085
cs=0x202a;eip=0x000087; 	T(CMP(ax, *(dw*)((&unk_56881))));	// 68643 cmp     ax, word ptr unk_56881 ;~ 202A:0087
cs=0x202a;eip=0x00008b; 	R(JGE(loc_2e92f));	// 68644 jge     short loc_2E92F ;~ 202A:008B
cs=0x202a;eip=0x00008d; 	T(MOV(dx, *(dw*)((&unk_56881))));	// 68645 mov     dx, word ptr unk_56881 ;~ 202A:008D
cs=0x202a;eip=0x000091; 	X(MOV(*(dw*)((&unk_48036)), dx));	// 68646 mov     word ptr unk_48036, dx ;~ 202A:0091
cs=0x202a;eip=0x000095; 	T(SUB(dx, ax));	// 68647 sub     dx, ax ;~ 202A:0095
cs=0x202a;eip=0x000097; 	T(MOV(ax, dx));	// 68648 mov     ax, dx ;~ 202A:0097
cs=0x202a;eip=0x000099; 	T(MOV(cx, *(dw*)((&unk_48028))));	// 68649 mov     cx, word ptr unk_48028 ;~ 202A:0099
cs=0x202a;eip=0x00009d; 	T(SUB(cx, dx));	// 68650 sub     cx, dx ;~ 202A:009D
cs=0x202a;eip=0x00009f; 	R(JBE(loc_2e949));	// 68651 jbe     short loc_2E949 ;~ 202A:009F
cs=0x202a;eip=0x0000a1; 	X(MOV(*(dw*)((&unk_48028)), cx));	// 68652 mov     word ptr unk_48028, cx ;~ 202A:00A1
cs=0x202a;eip=0x0000a5; 	T(ADD(ax, *(dw*)((&unk_4801a))));	// 68653 add     ax, word ptr unk_4801A ;~ 202A:00A5
cs=0x202a;eip=0x0000a9; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 68654 imul    [bp+arg_0] ;~ 202A:00A9
cs=0x202a;eip=0x0000ac; 	X(MOV(*(dw*)((&unk_48032)), ax));	// 68655 mov     word ptr unk_48032, ax ;~ 202A:00AC
loc_2e92f:
	// 8828 
cs=0x202a;eip=0x0000af; 	T(MOV(ax, *(dw*)((&unk_48036))));	// 68658 mov     ax, word ptr unk_48036 ;~ 202A:00AF
cs=0x202a;eip=0x0000b2; 	T(ADD(ax, *(dw*)((&unk_48028))));	// 68659 add     ax, word ptr unk_48028 ;~ 202A:00B2
cs=0x202a;eip=0x0000b6; 	T(CMP(ax, *(dw*)((&unk_56883))));	// 68660 cmp     ax, word ptr unk_56883 ;~ 202A:00B6
cs=0x202a;eip=0x0000ba; 	R(JLE(loc_2e94c));	// 68661 jle     short loc_2E94C ;~ 202A:00BA
cs=0x202a;eip=0x0000bc; 	T(MOV(ax, *(dw*)((&unk_56883))));	// 68662 mov     ax, word ptr unk_56883 ;~ 202A:00BC
cs=0x202a;eip=0x0000bf; 	T(SUB(ax, *(dw*)((&unk_48036))));	// 68663 sub     ax, word ptr unk_48036 ;~ 202A:00BF
cs=0x202a;eip=0x0000c3; 	T(INC(ax));	// 68664 inc     ax ;~ 202A:00C3
cs=0x202a;eip=0x0000c4; 	X(MOV(*(dw*)((&unk_48028)), ax));	// 68665 mov     word ptr unk_48028, ax ;~ 202A:00C4
cs=0x202a;eip=0x0000c7; 	R(JA(loc_2e94c));	// 68666 ja      short loc_2E94C ;~ 202A:00C7
loc_2e949:
	// 8829 
cs=0x202a;eip=0x0000c9; 	R(JMP(loc_2ea76));	// 68670 jmp     loc_2EA76 ;~ 202A:00C9
loc_2e94c:
	// 8830 
cs=0x202a;eip=0x0000cc; 	T(MOV(ax, *(dw*)((&unk_48034))));	// 68675 mov     ax, word ptr unk_48034 ;~ 202A:00CC
cs=0x202a;eip=0x0000cf; 	T(CMP(ax, *(dw*)((&unk_5687f))));	// 68676 cmp     ax, word ptr unk_5687F ;~ 202A:00CF
cs=0x202a;eip=0x0000d3; 	R(JG(loc_2e949));	// 68677 jg      short loc_2E949 ;~ 202A:00D3
cs=0x202a;eip=0x0000d5; 	T(CMP(ax, *(dw*)((&unk_5687d))));	// 68678 cmp     ax, word ptr unk_5687D ;~ 202A:00D5
cs=0x202a;eip=0x0000d9; 	R(JGE(loc_2e98e));	// 68679 jge     short loc_2E98E ;~ 202A:00D9
cs=0x202a;eip=0x0000db; 	T(ADD(ax, *(dw*)((&unk_4801c))));	// 68680 add     ax, word ptr unk_4801C ;~ 202A:00DB
cs=0x202a;eip=0x0000df; 	T(CMP(ax, *(dw*)((&unk_5687d))));	// 68681 cmp     ax, word ptr unk_5687D ;~ 202A:00DF
cs=0x202a;eip=0x0000e3; 	R(JLE(loc_2e949));	// 68682 jle     short loc_2E949 ;~ 202A:00E3
cs=0x202a;eip=0x0000e5; 	X(MOV(unk_4803e, 1));	// 68683 mov     byte ptr unk_4803E, 1 ;~ 202A:00E5
	// 68684 nop ;~ 202A:00EA
cs=0x202a;eip=0x0000eb; 	T(MOV(ax, *(dw*)((&unk_5687d))));	// 68685 mov     ax, word ptr unk_5687D ;~ 202A:00EB
cs=0x202a;eip=0x0000ee; 	X(MOV(*(dw*)((&unk_48038)), ax));	// 68686 mov     word ptr unk_48038, ax ;~ 202A:00EE
cs=0x202a;eip=0x0000f1; 	T(SUB(ax, *(dw*)((&unk_48034))));	// 68687 sub     ax, word ptr unk_48034 ;~ 202A:00F1
cs=0x202a;eip=0x0000f5; 	T(SHL(si, 1));	// 68688 shl     si, 1 ;~ 202A:00F5
cs=0x202a;eip=0x0000f7; 	T(TEST(*(dw*)(raddr(ds,si+0x6AA)), ax));	// 68689 test    [si+6AAh], ax ;~ 202A:00F7
cs=0x202a;eip=0x0000fb; 	R(JNZ(loc_2e983));	// 68690 jnz     short loc_2E983 ;~ 202A:00FB
cs=0x202a;eip=0x0000fd; 	X(MOV(unk_4803e, 0));	// 68691 mov     byte ptr unk_4803E, 0 ;~ 202A:00FD
	// 68692 nop ;~ 202A:0102
loc_2e983:
	// 8831 
cs=0x202a;eip=0x000103; 	T(SHR(si, 1));	// 68695 shr     si, 1 ;~ 202A:0103
cs=0x202a;eip=0x000105; 	T(MOV(cl, *(raddr(ds,si+0x6A4))));	// 68696 mov     cl, [si+6A4h] ;~ 202A:0105
cs=0x202a;eip=0x000109; 	T(SHR(ax, cl));	// 68697 shr     ax, cl ;~ 202A:0109
cs=0x202a;eip=0x00010b; 	X(MOV(*(dw*)((&unk_48042)), ax));	// 68698 mov     word ptr unk_48042, ax ;~ 202A:010B
loc_2e98e:
	// 8832 
cs=0x202a;eip=0x00010e; 	T(MOV(ax, *(dw*)((&unk_48034))));	// 68701 mov     ax, word ptr unk_48034 ;~ 202A:010E
cs=0x202a;eip=0x000111; 	T(ADD(ax, *(dw*)((&unk_4801c))));	// 68702 add     ax, word ptr unk_4801C ;~ 202A:0111
cs=0x202a;eip=0x000115; 	T(DEC(ax));	// 68703 dec     ax ;~ 202A:0115
cs=0x202a;eip=0x000116; 	T(CMP(ax, *(dw*)((&unk_5687f))));	// 68704 cmp     ax, word ptr unk_5687F ;~ 202A:0116
cs=0x202a;eip=0x00011a; 	R(JLE(loc_2e9af));	// 68705 jle     short loc_2E9AF ;~ 202A:011A
cs=0x202a;eip=0x00011c; 	T(SUB(ax, *(dw*)((&unk_5687f))));	// 68706 sub     ax, word ptr unk_5687F ;~ 202A:011C
cs=0x202a;eip=0x000120; 	T(MOV(cl, *(raddr(ds,si+0x6A4))));	// 68707 mov     cl, [si+6A4h] ;~ 202A:0120
cs=0x202a;eip=0x000124; 	T(SHR(ax, cl));	// 68708 shr     ax, cl ;~ 202A:0124
cs=0x202a;eip=0x000126; 	X(MOV(*(dw*)((&unk_48044)), ax));	// 68709 mov     word ptr unk_48044, ax ;~ 202A:0126
cs=0x202a;eip=0x000129; 	X(MOV(unk_4803f, 1));	// 68710 mov     byte ptr unk_4803F, 1 ;~ 202A:0129
	// 68711 nop ;~ 202A:012E
loc_2e9af:
	// 8833 
cs=0x202a;eip=0x00012f; 	T(MOV(ax, *(dw*)((&unk_48044))));	// 68714 mov     ax, word ptr unk_48044 ;~ 202A:012F
cs=0x202a;eip=0x000132; 	T(ADD(ax, *(dw*)((&unk_48042))));	// 68715 add     ax, word ptr unk_48042 ;~ 202A:0132
cs=0x202a;eip=0x000136; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_0))));	// 68716 mov     cx, [bp+arg_0] ;~ 202A:0136
cs=0x202a;eip=0x000139; 	T(SUB(cx, *(dw*)((&unk_48020))));	// 68717 sub     cx, word ptr unk_48020 ;~ 202A:0139
cs=0x202a;eip=0x00013d; 	T(ADD(ax, cx));	// 68718 add     ax, cx ;~ 202A:013D
cs=0x202a;eip=0x00013f; 	X(MOV(*(dw*)((&unk_48026)), ax));	// 68719 mov     word ptr unk_48026, ax ;~ 202A:013F
cs=0x202a;eip=0x000142; 	T(MOV(bx, *(dw*)((&unk_48036))));	// 68720 mov     bx, word ptr unk_48036 ;~ 202A:0142
cs=0x202a;eip=0x000146; 	T(SHL(bx, 1));	// 68721 shl     bx, 1 ;~ 202A:0146
cs=0x202a;eip=0x000148; 	T(MOV(bx, *(dw*)(raddr(ds,bx-0x1492))));	// 68722 mov     bx, [bx-1492h] ;~ 202A:0148
cs=0x202a;eip=0x00014c; 	T(MOV(dx, *(dw*)((&unk_48038))));	// 68723 mov     dx, word ptr unk_48038 ;~ 202A:014C
cs=0x202a;eip=0x000150; 	T(MOV(cl, *(raddr(ds,si+0x6A4))));	// 68724 mov     cl, [si+6A4h] ;~ 202A:0150
cs=0x202a;eip=0x000154; 	T(SHR(dx, cl));	// 68725 shr     dx, cl ;~ 202A:0154
cs=0x202a;eip=0x000156; 	T(MOV(al, unk_4803e));	// 68726 mov     al, byte ptr unk_4803E ;~ 202A:0156
cs=0x202a;eip=0x000159; 	T(CBW);	// 68727 cbw ;~ 202A:0159
cs=0x202a;eip=0x00015a; 	T(SUB(dx, ax));	// 68728 sub     dx, ax ;~ 202A:015A
cs=0x202a;eip=0x00015c; 	X(MOV(*(dw*)((&unk_48040)), dx));	// 68729 mov     word ptr unk_48040, dx ;~ 202A:015C
cs=0x202a;eip=0x000160; 	T(ADD(dx, bx));	// 68730 add     dx, bx ;~ 202A:0160
cs=0x202a;eip=0x000162; 	X(MOV(*(dw*)((&unk_48030)), dx));	// 68731 mov     word ptr unk_48030, dx ;~ 202A:0162
cs=0x202a;eip=0x000166; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 68732 mov     ax, [bp+arg_2] ;~ 202A:0166
cs=0x202a;eip=0x000169; 	X(MOV(*(dw*)((&unk_4802c)), ax));	// 68733 mov     word ptr unk_4802C, ax ;~ 202A:0169
cs=0x202a;eip=0x00016c; 	T(MOV(dx, *(dw*)(raddr(ds,di+8))));	// 68734 mov     dx, [di+8] ;~ 202A:016C
cs=0x202a;eip=0x00016f; 	X(MOV(*(dw*)((&unk_4802e)), dx));	// 68735 mov     word ptr unk_4802E, dx ;~ 202A:016F
cs=0x202a;eip=0x000173; 	T(MOV(ax, *(dw*)((&unk_48034))));	// 68736 mov     ax, word ptr unk_48034 ;~ 202A:0173
cs=0x202a;eip=0x000176; 	T(SHL(si, 1));	// 68737 shl     si, 1 ;~ 202A:0176
cs=0x202a;eip=0x000178; 	T(AND(ax, *(dw*)(raddr(ds,si+0x6AA))));	// 68738 and     ax, [si+6AAh] ;~ 202A:0178
cs=0x202a;eip=0x00017c; 	T(SHR(si, 1));	// 68739 shr     si, 1 ;~ 202A:017C
cs=0x202a;eip=0x00017e; 	T(MOV(cl, *(raddr(ds,si+0x6A4))));	// 68740 mov     cl, [si+6A4h] ;~ 202A:017E
cs=0x202a;eip=0x000182; 	T(XOR(cl, 3));	// 68741 xor     cl, 3 ;~ 202A:0182
cs=0x202a;eip=0x000185; 	T(SHL(ax, cl));	// 68742 shl     ax, cl ;~ 202A:0185
cs=0x202a;eip=0x000187; 	T(MOV(cx, ax));	// 68743 mov     cx, ax ;~ 202A:0187
cs=0x202a;eip=0x000189; 	X(MOV(unk_4803a, al));	// 68744 mov     byte ptr unk_4803A, al ;~ 202A:0189
cs=0x202a;eip=0x00018c; 	T(MOV(al, 0x0FF));	// 68745 mov     al, 0FFh ;~ 202A:018C
cs=0x202a;eip=0x00018e; 	T(SHR(al, cl));	// 68746 shr     al, cl ;~ 202A:018E
cs=0x202a;eip=0x000190; 	X(MOV(unk_4802a, al));	// 68747 mov     byte ptr unk_4802A, al ;~ 202A:0190
cs=0x202a;eip=0x000193; 	T(MOV(ax, *(dw*)(raddr(ds,di+6))));	// 68748 mov     ax, [di+6] ;~ 202A:0193
cs=0x202a;eip=0x000196; 	T(SUB(ax, *(dw*)((&unk_48020))));	// 68749 sub     ax, word ptr unk_48020 ;~ 202A:0196
cs=0x202a;eip=0x00019a; 	T(ADD(ax, *(dw*)((&unk_48042))));	// 68750 add     ax, word ptr unk_48042 ;~ 202A:019A
cs=0x202a;eip=0x00019e; 	T(ADD(ax, *(dw*)((&unk_48044))));	// 68751 add     ax, word ptr unk_48044 ;~ 202A:019E
cs=0x202a;eip=0x0001a2; 	X(MOV(*(dw*)((&unk_48024)), ax));	// 68752 mov     word ptr unk_48024, ax ;~ 202A:01A2
cs=0x202a;eip=0x0001a5; 	T(MOV(di, *(dw*)((&unk_48030))));	// 68753 mov     di, word ptr unk_48030 ;~ 202A:01A5
cs=0x202a;eip=0x0001a9; 	T(MOV(ax, *(dw*)((&unk_48018))));	// 68754 mov     ax, word ptr unk_48018 ;~ 202A:01A9
cs=0x202a;eip=0x0001ac; 	T(MOV(cl, *(raddr(ds,si+0x6A4))));	// 68755 mov     cl, [si+6A4h] ;~ 202A:01AC
cs=0x202a;eip=0x0001b0; 	T(SHR(ax, cl));	// 68756 shr     ax, cl ;~ 202A:01B0
cs=0x202a;eip=0x0001b2; 	T(ADD(ax, *(dw*)((&unk_48042))));	// 68757 add     ax, word ptr unk_48042 ;~ 202A:01B2
cs=0x202a;eip=0x0001b6; 	T(MOV(si, *(dw*)((&unk_48032))));	// 68758 mov     si, word ptr unk_48032 ;~ 202A:01B6
cs=0x202a;eip=0x0001ba; 	T(ADD(si, ax));	// 68759 add     si, ax ;~ 202A:01BA
cs=0x202a;eip=0x0001bc; 	T(MOV(ax, *(dw*)((&unk_48046))));	// 68760 mov     ax, word ptr unk_48046 ;~ 202A:01BC
cs=0x202a;eip=0x0001bf; 	T(SUB(ax, *(dw*)((&unk_48026))));	// 68761 sub     ax, word ptr unk_48026 ;~ 202A:01BF
cs=0x202a;eip=0x0001c3; 	T(DEC(ax));	// 68762 dec     ax ;~ 202A:01C3
cs=0x202a;eip=0x0001c4; 	X(MOV(*(dw*)((&unk_48046)), ax));	// 68763 mov     word ptr unk_48046, ax ;~ 202A:01C4
cs=0x202a;eip=0x0001c7; 	T(MOV(bp, ax));	// 68764 mov     bp, ax ;~ 202A:01C7
cs=0x202a;eip=0x0001c9; 	T(MOV(al, unk_4803e));	// 68765 mov     al, byte ptr unk_4803E ;~ 202A:01C9
cs=0x202a;eip=0x0001cc; 	X(MOV(unk_4803c, al));	// 68766 mov     byte ptr unk_4803C, al ;~ 202A:01CC
cs=0x202a;eip=0x0001cf; 	T(MOV(al, unk_4803e));	// 68767 mov     al, byte ptr unk_4803E ;~ 202A:01CF
cs=0x202a;eip=0x0001d2; 	X(MOV(unk_4803c, al));	// 68768 mov     byte ptr unk_4803C, al ;~ 202A:01D2
cs=0x202a;eip=0x0001d5; 	X(PUSH(di));	// 68769 push    di ;~ 202A:01D5
cs=0x202a;eip=0x0001d6; 	T(MOV(ax, ds));	// 68770 mov     ax, ds ;~ 202A:01D6
cs=0x202a;eip=0x0001d8; 	T(MOV(es, ax));	// 68771 mov     es, ax ;~ 202A:01D8
cs=0x202a;eip=0x0001da; 	T(MOV(di, 0x0ED3C));	// 68773 mov     di, 0ED3Ch ;~ 202A:01DA
cs=0x202a;eip=0x0001dd; 	T(ADD(di, *(dw*)((&unk_48036))));	// 68774 add     di, word ptr unk_48036 ;~ 202A:01DD
cs=0x202a;eip=0x0001e1; 	T(MOV(cx, *(dw*)((&unk_48028))));	// 68775 mov     cx, word ptr unk_48028 ;~ 202A:01E1
cs=0x202a;eip=0x0001e5; 	T(MOV(al, 0x0FF));	// 68776 mov     al, 0FFh ;~ 202A:01E5
	// 68777 rep stosb ;~ 202A:01E7
cs=0x202a;eip=0x0001e7; 	X(	REP STOSB);	// 68777 rep stosb ;~ 202A:01E7
cs=0x202a;eip=0x0001e9; 	X(POP(di));	// 68778 pop     di ;~ 202A:01E9
cs=0x202a;eip=0x0001ea; 	T(MOV(bx, *(dw*)((&byte_47b2e))));	// 68779 mov     bx, word ptr byte_47B2E ;~ 202A:01EA
cs=0x202a;eip=0x0001ee; 	T(SHL(bx, 1));	// 68780 shl     bx, 1 ;~ 202A:01EE
cs=0x202a;eip=0x0001f0; 	T(MOV(bx, *(dw*)(raddr(ds,bx+0x698))));	// 68781 mov     bx, [bx+698h] ;~ 202A:01F0
cs=0x202a;eip=0x0001f4; 	R(CALL(__dispatch_call,bx));	// 68782 call    bx ;~ 202A:01F4
loc_2ea76:
	// 8834 
cs=0x202a;eip=0x0001f6; 	T(TEST(*(dw*)((&unk_47b38)), 1));	// 68785 test    word ptr unk_47B38, 1 ;~ 202A:01F6
cs=0x202a;eip=0x0001fc; 	R(JZ(loc_2ea98));	// 68786 jz      short loc_2EA98 ;~ 202A:01FC
cs=0x202a;eip=0x0001fe; 	T(MOV(dx, 0x3CE));	// 68787 mov     dx, 3CEh ;~ 202A:01FE
cs=0x202a;eip=0x000201; 	T(XOR(ah, ah));	// 68788 xor     ah, ah ;~ 202A:0201
cs=0x202a;eip=0x000203; 	T(MOV(al, 3));	// 68789 mov     al, 3 ;~ 202A:0203
cs=0x202a;eip=0x000205; 	R(OUT(dx, ax));	// 68790 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 202A:0205
cs=0x202a;eip=0x000206; 	T(MOV(ah, 3));	// 68795 mov     ah, 3 ;~ 202A:0206
cs=0x202a;eip=0x000208; 	T(MOV(al, 4));	// 68796 mov     al, 4 ;~ 202A:0208
cs=0x202a;eip=0x00020a; 	R(OUT(dx, ax));	// 68797 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 202A:020A
cs=0x202a;eip=0x00020b; 	T(MOV(ah, 0x0FF));	// 68799 mov     ah, 0FFh ;~ 202A:020B
cs=0x202a;eip=0x00020d; 	T(MOV(al, 8));	// 68800 mov     al, 8 ;~ 202A:020D
cs=0x202a;eip=0x00020f; 	R(OUT(dx, ax));	// 68801 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 202A:020F
cs=0x202a;eip=0x000210; 	T(MOV(dx, 0x3C4));	// 68803 mov     dx, 3C4h ;~ 202A:0210
cs=0x202a;eip=0x000213; 	T(MOV(ah, 0x0F));	// 68804 mov     ah, 0Fh ;~ 202A:0213
cs=0x202a;eip=0x000215; 	T(MOV(al, 2));	// 68805 mov     al, 2 ;~ 202A:0215
cs=0x202a;eip=0x000217; 	R(OUT(dx, ax));	// 68806 out     dx, ax          ; EGA: sequencer address reg ;~ 202A:0217
loc_2ea98:
	// 8835 
cs=0x202a;eip=0x000218; 	X(POP(di));	// 68810 pop     di ;~ 202A:0218
cs=0x202a;eip=0x000219; 	X(POP(si));	// 68811 pop     si ;~ 202A:0219
cs=0x202a;eip=0x00021a; 	X(POP(bp));	// 68812 pop     bp ;~ 202A:021A
cs=0x202a;eip=0x00021b; 	R(RETF(0x10));	// 68813 retf    10h ;~ 202A:021B
seg007_proc:
	// 68817 
cs=0x202a;eip=0x00021e; 	T(MOV(ah, unk_4803a));	// 68817 mov     ah, byte ptr unk_4803A ;~ 202A:021E
cs=0x202a;eip=0x000222; 	T(MOV(dx, 0x3CE));	// 68818 mov     dx, 3CEh ;~ 202A:0222
cs=0x202a;eip=0x000225; 	T(MOV(al, 3));	// 68819 mov     al, 3 ;~ 202A:0225
cs=0x202a;eip=0x000227; 	R(OUT(dx, ax));	// 68820 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 202A:0227
loc_2eaa8:
	// 8836 
cs=0x202a;eip=0x000228; 	T(OR(bp, bp));	// 68825 or      bp, bp ;~ 202A:0228
cs=0x202a;eip=0x00022a; 	R(JNZ(loc_2eab2));	// 68826 jnz     short loc_2EAB2 ;~ 202A:022A
cs=0x202a;eip=0x00022c; 	T(MOV(al, unk_4803f));	// 68827 mov     al, byte ptr unk_4803F ;~ 202A:022C
cs=0x202a;eip=0x00022f; 	X(MOV(unk_4803d, al));	// 68828 mov     byte ptr unk_4803D, al ;~ 202A:022F
loc_2eab2:
	// 8837 
cs=0x202a;eip=0x000232; 	T(MOV(es, *(dw*)((&unk_4802c))));	// 68831 mov     es, word ptr unk_4802C ;~ 202A:0232
cs=0x202a;eip=0x000236; 	T(MOV(dx, 0x3CE));	// 68833 mov     dx, 3CEh ;~ 202A:0236
cs=0x202a;eip=0x000239; 	T(MOV(al, 4));	// 68834 mov     al, 4 ;~ 202A:0239
cs=0x202a;eip=0x00023b; 	T(XOR(ah, ah));	// 68835 xor     ah, ah ;~ 202A:023B
cs=0x202a;eip=0x00023d; 	R(OUT(dx, ax));	// 68836 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 202A:023D
cs=0x202a;eip=0x00023e; 	T(MOV(bl, *(raddr(es,si))));	// 68839 mov     bl, es:[si] ;~ 202A:023E
cs=0x202a;eip=0x000241; 	T(INC(ah));	// 68840 inc     ah ;~ 202A:0241
cs=0x202a;eip=0x000243; 	R(OUT(dx, ax));	// 68841 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 202A:0243
cs=0x202a;eip=0x000244; 	T(MOV(bh, *(raddr(es,si))));	// 68843 mov     bh, es:[si] ;~ 202A:0244
cs=0x202a;eip=0x000247; 	T(INC(ah));	// 68844 inc     ah ;~ 202A:0247
cs=0x202a;eip=0x000249; 	R(OUT(dx, ax));	// 68845 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 202A:0249
cs=0x202a;eip=0x00024a; 	T(MOV(cl, *(raddr(es,si))));	// 68847 mov     cl, es:[si] ;~ 202A:024A
cs=0x202a;eip=0x00024d; 	T(INC(ah));	// 68848 inc     ah ;~ 202A:024D
cs=0x202a;eip=0x00024f; 	R(OUT(dx, ax));	// 68849 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 202A:024F
cs=0x202a;eip=0x000250; 	T(MOV(ch, *(raddr(es,si))));	// 68851 mov     ch, es:[si] ;~ 202A:0250
cs=0x202a;eip=0x000253; 	T(MOV(es, *(dw*)((&unk_4802e))));	// 68852 mov     es, word ptr unk_4802E ;~ 202A:0253
cs=0x202a;eip=0x000257; 	T(XOR(al, al));	// 68853 xor     al, al ;~ 202A:0257
cs=0x202a;eip=0x000259; 	T(OR(al, bl));	// 68854 or      al, bl ;~ 202A:0259
cs=0x202a;eip=0x00025b; 	T(OR(al, bh));	// 68855 or      al, bh ;~ 202A:025B
cs=0x202a;eip=0x00025d; 	T(OR(al, cl));	// 68856 or      al, cl ;~ 202A:025D
cs=0x202a;eip=0x00025f; 	T(OR(al, ch));	// 68857 or      al, ch ;~ 202A:025F
cs=0x202a;eip=0x000261; 	T(MOV(dx, cx));	// 68858 mov     dx, cx ;~ 202A:0261
cs=0x202a;eip=0x000263; 	T(MOV(cl, unk_4803a));	// 68859 mov     cl, byte ptr unk_4803A ;~ 202A:0263
cs=0x202a;eip=0x000267; 	T(ROR(al, cl));	// 68860 ror     al, cl ;~ 202A:0267
cs=0x202a;eip=0x000269; 	X(MOV(unk_4802b, al));	// 68861 mov     byte ptr unk_4802B, al ;~ 202A:0269
cs=0x202a;eip=0x00026c; 	T(MOV(cx, dx));	// 68862 mov     cx, dx ;~ 202A:026C
cs=0x202a;eip=0x00026e; 	T(TEST(unk_4803c, 1));	// 68863 test    byte ptr unk_4803C, 1 ;~ 202A:026E
	// 68864 nop ;~ 202A:0273
cs=0x202a;eip=0x000274; 	R(JNZ(loc_2eb26));	// 68865 jnz     short loc_2EB26 ;~ 202A:0274
cs=0x202a;eip=0x000276; 	T(MOV(dx, 0x3CE));	// 68866 mov     dx, 3CEh ;~ 202A:0276
cs=0x202a;eip=0x000279; 	T(MOV(ah, unk_4802a));	// 68867 mov     ah, byte ptr unk_4802A ;~ 202A:0279
cs=0x202a;eip=0x00027d; 	T(AND(ah, unk_4802b));	// 68868 and     ah, byte ptr unk_4802B ;~ 202A:027D
cs=0x202a;eip=0x000281; 	R(JZ(loc_2eb26));	// 68869 jz      short loc_2EB26 ;~ 202A:0281
cs=0x202a;eip=0x000283; 	T(MOV(al, 8));	// 68870 mov     al, 8 ;~ 202A:0283
cs=0x202a;eip=0x000285; 	R(OUT(dx, ax));	// 68871 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 202A:0285
cs=0x202a;eip=0x000286; 	T(MOV(al, *(raddr(es,di))));	// 68874 mov     al, es:[di] ;~ 202A:0286
cs=0x202a;eip=0x000289; 	T(MOV(dx, 0x3C4));	// 68875 mov     dx, 3C4h ;~ 202A:0289
cs=0x202a;eip=0x00028c; 	T(MOV(ah, 1));	// 68876 mov     ah, 1 ;~ 202A:028C
cs=0x202a;eip=0x00028e; 	T(MOV(al, 2));	// 68877 mov     al, 2 ;~ 202A:028E
cs=0x202a;eip=0x000290; 	R(OUT(dx, ax));	// 68878 out     dx, ax          ; EGA: sequencer address reg ;~ 202A:0290
cs=0x202a;eip=0x000291; 	X(MOV(*(raddr(es,di)), bl));	// 68880 mov     es:[di], bl ;~ 202A:0291
cs=0x202a;eip=0x000294; 	T(SHL(ah, 1));	// 68881 shl     ah, 1 ;~ 202A:0294
cs=0x202a;eip=0x000296; 	R(OUT(dx, ax));	// 68882 out     dx, ax          ; EGA: sequencer address reg ;~ 202A:0296
cs=0x202a;eip=0x000297; 	X(MOV(*(raddr(es,di)), bh));	// 68884 mov     es:[di], bh ;~ 202A:0297
cs=0x202a;eip=0x00029a; 	T(SHL(ah, 1));	// 68885 shl     ah, 1 ;~ 202A:029A
cs=0x202a;eip=0x00029c; 	R(OUT(dx, ax));	// 68886 out     dx, ax          ; EGA: sequencer address reg ;~ 202A:029C
cs=0x202a;eip=0x00029d; 	X(MOV(*(raddr(es,di)), cl));	// 68888 mov     es:[di], cl ;~ 202A:029D
cs=0x202a;eip=0x0002a0; 	T(SHL(ah, 1));	// 68889 shl     ah, 1 ;~ 202A:02A0
cs=0x202a;eip=0x0002a2; 	R(OUT(dx, ax));	// 68890 out     dx, ax          ; EGA: sequencer address reg ;~ 202A:02A2
cs=0x202a;eip=0x0002a3; 	X(MOV(*(raddr(es,di)), ch));	// 68892 mov     es:[di], ch ;~ 202A:02A3
loc_2eb26:
	// 8838 
cs=0x202a;eip=0x0002a6; 	T(INC(di));	// 68896 inc     di ;~ 202A:02A6
cs=0x202a;eip=0x0002a7; 	T(TEST(unk_4803d, 1));	// 68897 test    byte ptr unk_4803D, 1 ;~ 202A:02A7
	// 68898 nop ;~ 202A:02AC
cs=0x202a;eip=0x0002ad; 	R(JNZ(loc_2eb61));	// 68899 jnz     short loc_2EB61 ;~ 202A:02AD
cs=0x202a;eip=0x0002af; 	T(MOV(dx, 0x3CE));	// 68900 mov     dx, 3CEh ;~ 202A:02AF
cs=0x202a;eip=0x0002b2; 	T(MOV(ah, unk_4802a));	// 68901 mov     ah, byte ptr unk_4802A ;~ 202A:02B2
cs=0x202a;eip=0x0002b6; 	T(NOT(ah));	// 68902 not     ah ;~ 202A:02B6
cs=0x202a;eip=0x0002b8; 	T(AND(ah, unk_4802b));	// 68903 and     ah, byte ptr unk_4802B ;~ 202A:02B8
cs=0x202a;eip=0x0002bc; 	R(JZ(loc_2eb61));	// 68904 jz      short loc_2EB61 ;~ 202A:02BC
cs=0x202a;eip=0x0002be; 	T(MOV(al, 8));	// 68905 mov     al, 8 ;~ 202A:02BE
cs=0x202a;eip=0x0002c0; 	R(OUT(dx, ax));	// 68906 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 202A:02C0
cs=0x202a;eip=0x0002c1; 	T(MOV(al, *(raddr(es,di))));	// 68909 mov     al, es:[di] ;~ 202A:02C1
cs=0x202a;eip=0x0002c4; 	T(MOV(dx, 0x3C4));	// 68910 mov     dx, 3C4h ;~ 202A:02C4
cs=0x202a;eip=0x0002c7; 	T(MOV(ah, 1));	// 68911 mov     ah, 1 ;~ 202A:02C7
cs=0x202a;eip=0x0002c9; 	T(MOV(al, 2));	// 68912 mov     al, 2 ;~ 202A:02C9
cs=0x202a;eip=0x0002cb; 	R(OUT(dx, ax));	// 68913 out     dx, ax          ; EGA: sequencer address reg ;~ 202A:02CB
cs=0x202a;eip=0x0002cc; 	X(MOV(*(raddr(es,di)), bl));	// 68915 mov     es:[di], bl ;~ 202A:02CC
cs=0x202a;eip=0x0002cf; 	T(SHL(ah, 1));	// 68916 shl     ah, 1 ;~ 202A:02CF
cs=0x202a;eip=0x0002d1; 	R(OUT(dx, ax));	// 68917 out     dx, ax          ; EGA: sequencer address reg ;~ 202A:02D1
cs=0x202a;eip=0x0002d2; 	X(MOV(*(raddr(es,di)), bh));	// 68919 mov     es:[di], bh ;~ 202A:02D2
cs=0x202a;eip=0x0002d5; 	T(SHL(ah, 1));	// 68920 shl     ah, 1 ;~ 202A:02D5
cs=0x202a;eip=0x0002d7; 	R(OUT(dx, ax));	// 68921 out     dx, ax          ; EGA: sequencer address reg ;~ 202A:02D7
cs=0x202a;eip=0x0002d8; 	X(MOV(*(raddr(es,di)), cl));	// 68923 mov     es:[di], cl ;~ 202A:02D8
cs=0x202a;eip=0x0002db; 	T(SHL(ah, 1));	// 68924 shl     ah, 1 ;~ 202A:02DB
cs=0x202a;eip=0x0002dd; 	R(OUT(dx, ax));	// 68925 out     dx, ax          ; EGA: sequencer address reg ;~ 202A:02DD
cs=0x202a;eip=0x0002de; 	X(MOV(*(raddr(es,di)), ch));	// 68927 mov     es:[di], ch ;~ 202A:02DE
loc_2eb61:
	// 8839 
cs=0x202a;eip=0x0002e1; 	T(INC(si));	// 68931 inc     si ;~ 202A:02E1
cs=0x202a;eip=0x0002e2; 	T(DEC(bp));	// 68932 dec     bp ;~ 202A:02E2
cs=0x202a;eip=0x0002e3; 	X(MOV(unk_4803c, 0));	// 68933 mov     byte ptr unk_4803C, 0 ;~ 202A:02E3
	// 68934 nop ;~ 202A:02E8
cs=0x202a;eip=0x0002e9; 	R(JNS(loc_2eb8a));	// 68935 jns     short loc_2EB8A ;~ 202A:02E9
cs=0x202a;eip=0x0002eb; 	X(MOV(unk_4803d, 0));	// 68936 mov     byte ptr unk_4803D, 0 ;~ 202A:02EB
	// 68937 nop ;~ 202A:02F0
cs=0x202a;eip=0x0002f1; 	T(MOV(al, unk_4803e));	// 68938 mov     al, byte ptr unk_4803E ;~ 202A:02F1
cs=0x202a;eip=0x0002f4; 	X(MOV(unk_4803c, al));	// 68939 mov     byte ptr unk_4803C, al ;~ 202A:02F4
cs=0x202a;eip=0x0002f7; 	T(MOV(bp, *(dw*)((&unk_48046))));	// 68940 mov     bp, word ptr unk_48046 ;~ 202A:02F7
cs=0x202a;eip=0x0002fb; 	T(ADD(di, *(dw*)((&unk_48024))));	// 68941 add     di, word ptr unk_48024 ;~ 202A:02FB
cs=0x202a;eip=0x0002ff; 	T(ADD(si, *(dw*)((&unk_48026))));	// 68942 add     si, word ptr unk_48026 ;~ 202A:02FF
cs=0x202a;eip=0x000303; 	X(DEC(*(dw*)((&unk_48028))));	// 68943 dec     word ptr unk_48028 ;~ 202A:0303
cs=0x202a;eip=0x000307; 	R(JNZ(loc_2eb8a));	// 68944 jnz     short loc_2EB8A ;~ 202A:0307
cs=0x202a;eip=0x000309; 	R(RETN(0));	// 68945 retn ;~ 202A:0309
loc_2eb8a:
	// 8840 
cs=0x202a;eip=0x00030a; 	R(JMP(loc_2eaa8));	// 68950 jmp     loc_2EAA8 ;~ 202A:030A
ret_202a_30d:
	// 8841 
cs=0x202a;eip=0x00030d; 	T(MOV(cl, unk_4803a));	// 68952 mov     cl, byte ptr unk_4803A ;~ 202A:030D
cs=0x202a;eip=0x000311; 	T(MOV(ch, unk_4802a));	// 68953 mov     ch, byte ptr unk_4802A ;~ 202A:0311
cs=0x202a;eip=0x000315; 	T(MOV(bl, unk_4803d));	// 68954 mov     bl, byte ptr unk_4803D ;~ 202A:0315
cs=0x202a;eip=0x000319; 	T(MOV(bh, unk_4803c));	// 68955 mov     bh, byte ptr unk_4803C ;~ 202A:0319
loc_2eb9d:
	// 8842 
cs=0x202a;eip=0x00031d; 	T(OR(bp, bp));	// 68959 or      bp, bp ;~ 202A:031D
cs=0x202a;eip=0x00031f; 	R(JNZ(loc_2eba5));	// 68960 jnz     short loc_2EBA5 ;~ 202A:031F
cs=0x202a;eip=0x000321; 	T(MOV(bl, unk_4803f));	// 68961 mov     bl, byte ptr unk_4803F ;~ 202A:0321
loc_2eba5:
	// 8843 
cs=0x202a;eip=0x000325; 	T(MOV(es, *(dw*)((&unk_4802c))));	// 68964 mov     es, word ptr unk_4802C ;~ 202A:0325
cs=0x202a;eip=0x000329; 	T(MOV(al, *(raddr(es,si))));	// 68965 mov     al, es:[si] ;~ 202A:0329
cs=0x202a;eip=0x00032c; 	T(ROR(al, cl));	// 68966 ror     al, cl ;~ 202A:032C
cs=0x202a;eip=0x00032e; 	T(MOV(es, *(dw*)((&unk_4802e))));	// 68967 mov     es, word ptr unk_4802E ;~ 202A:032E
cs=0x202a;eip=0x000332; 	T(MOV(dl, al));	// 68968 mov     dl, al ;~ 202A:0332
cs=0x202a;eip=0x000334; 	T(MOV(dh, al));	// 68969 mov     dh, al ;~ 202A:0334
cs=0x202a;eip=0x000336; 	T(SHL(dl, 1));	// 68970 shl     dl, 1 ;~ 202A:0336
cs=0x202a;eip=0x000338; 	T(SHR(dh, 1));	// 68971 shr     dh, 1 ;~ 202A:0338
cs=0x202a;eip=0x00033a; 	T(AND(dx, 0x55AA));	// 68972 and     dx, 55AAh ;~ 202A:033A
cs=0x202a;eip=0x00033e; 	T(OR(dl, al));	// 68973 or      dl, al ;~ 202A:033E
cs=0x202a;eip=0x000340; 	T(OR(dl, dh));	// 68974 or      dl, dh ;~ 202A:0340
cs=0x202a;eip=0x000342; 	T(OR(bh, bh));	// 68975 or      bh, bh ;~ 202A:0342
cs=0x202a;eip=0x000344; 	R(JNZ(loc_2ebda));	// 68976 jnz     short loc_2EBDA ;~ 202A:0344
cs=0x202a;eip=0x000346; 	T(MOV(dh, ch));	// 68977 mov     dh, ch ;~ 202A:0346
cs=0x202a;eip=0x000348; 	T(AND(dh, dl));	// 68978 and     dh, dl ;~ 202A:0348
cs=0x202a;eip=0x00034a; 	R(JZ(loc_2ebda));	// 68979 jz      short loc_2EBDA ;~ 202A:034A
cs=0x202a;eip=0x00034c; 	T(NOT(dh));	// 68980 not     dh ;~ 202A:034C
cs=0x202a;eip=0x00034e; 	T(MOV(ah, *(raddr(es,di))));	// 68981 mov     ah, es:[di] ;~ 202A:034E
cs=0x202a;eip=0x000351; 	T(XOR(ah, al));	// 68982 xor     ah, al ;~ 202A:0351
cs=0x202a;eip=0x000353; 	T(AND(ah, dh));	// 68983 and     ah, dh ;~ 202A:0353
cs=0x202a;eip=0x000355; 	T(XOR(ah, al));	// 68984 xor     ah, al ;~ 202A:0355
cs=0x202a;eip=0x000357; 	X(MOV(*(raddr(es,di)), ah));	// 68985 mov     es:[di], ah ;~ 202A:0357
loc_2ebda:
	// 8844 
cs=0x202a;eip=0x00035a; 	T(INC(di));	// 68989 inc     di ;~ 202A:035A
cs=0x202a;eip=0x00035b; 	T(OR(bl, bl));	// 68990 or      bl, bl ;~ 202A:035B
cs=0x202a;eip=0x00035d; 	R(JNZ(loc_2ebf3));	// 68991 jnz     short loc_2EBF3 ;~ 202A:035D
cs=0x202a;eip=0x00035f; 	T(MOV(dh, ch));	// 68992 mov     dh, ch ;~ 202A:035F
cs=0x202a;eip=0x000361; 	T(NOT(dh));	// 68993 not     dh ;~ 202A:0361
cs=0x202a;eip=0x000363; 	T(AND(dh, dl));	// 68994 and     dh, dl ;~ 202A:0363
cs=0x202a;eip=0x000365; 	R(JZ(loc_2ebf3));	// 68995 jz      short loc_2EBF3 ;~ 202A:0365
cs=0x202a;eip=0x000367; 	T(MOV(ah, *(raddr(es,di))));	// 68996 mov     ah, es:[di] ;~ 202A:0367
cs=0x202a;eip=0x00036a; 	T(XOR(al, ah));	// 68997 xor     al, ah ;~ 202A:036A
cs=0x202a;eip=0x00036c; 	T(AND(al, dh));	// 68998 and     al, dh ;~ 202A:036C
cs=0x202a;eip=0x00036e; 	T(XOR(al, ah));	// 68999 xor     al, ah ;~ 202A:036E
cs=0x202a;eip=0x000370; 	X(MOV(*(raddr(es,di)), al));	// 69000 mov     es:[di], al ;~ 202A:0370
loc_2ebf3:
	// 8845 
cs=0x202a;eip=0x000373; 	T(INC(si));	// 69004 inc     si ;~ 202A:0373
cs=0x202a;eip=0x000374; 	T(XOR(bx, bx));	// 69005 xor     bx, bx ;~ 202A:0374
cs=0x202a;eip=0x000376; 	T(DEC(bp));	// 69006 dec     bp ;~ 202A:0376
cs=0x202a;eip=0x000377; 	R(JNS(loc_2eb9d));	// 69007 jns     short loc_2EB9D ;~ 202A:0377
cs=0x202a;eip=0x000379; 	T(MOV(bh, unk_4803e));	// 69008 mov     bh, byte ptr unk_4803E ;~ 202A:0379
cs=0x202a;eip=0x00037d; 	T(MOV(bp, *(dw*)((&unk_48046))));	// 69009 mov     bp, word ptr unk_48046 ;~ 202A:037D
cs=0x202a;eip=0x000381; 	X(INC(*(dw*)((&unk_48036))));	// 69010 inc     word ptr unk_48036 ;~ 202A:0381
cs=0x202a;eip=0x000385; 	T(MOV(di, *(dw*)((&unk_48036))));	// 69011 mov     di, word ptr unk_48036 ;~ 202A:0385
cs=0x202a;eip=0x000389; 	T(SHL(di, 1));	// 69012 shl     di, 1 ;~ 202A:0389
cs=0x202a;eip=0x00038b; 	T(MOV(di, *(dw*)(raddr(ds,di-0x1492))));	// 69013 mov     di, [di-1492h] ;~ 202A:038B
cs=0x202a;eip=0x00038f; 	T(ADD(di, *(dw*)((&unk_48040))));	// 69014 add     di, word ptr unk_48040 ;~ 202A:038F
cs=0x202a;eip=0x000393; 	T(ADD(si, *(dw*)((&unk_48026))));	// 69015 add     si, word ptr unk_48026 ;~ 202A:0393
cs=0x202a;eip=0x000397; 	X(DEC(*(dw*)((&unk_48028))));	// 69016 dec     word ptr unk_48028 ;~ 202A:0397
cs=0x202a;eip=0x00039b; 	R(JNZ(loc_2eb9d));	// 69017 jnz     short loc_2EB9D ;~ 202A:039B
cs=0x202a;eip=0x00039d; 	R(RETN(0));	// 69018 retn ;~ 202A:039D
ret_202a_39e:
	// 8846 
cs=0x202a;eip=0x00039e; 	T(MOV(bx, *(dw*)((&unk_4802e))));	// 69020 mov     bx, word ptr unk_4802E ;~ 202A:039E
cs=0x202a;eip=0x0003a2; 	T(MOV(dx, *(dw*)((&unk_4802c))));	// 69021 mov     dx, word ptr unk_4802C ;~ 202A:03A2
cs=0x202a;eip=0x0003a6; 	T(MOV(cx, *(dw*)((&unk_48028))));	// 69022 mov     cx, word ptr unk_48028 ;~ 202A:03A6
loc_2ec2a:
	// 8847 
cs=0x202a;eip=0x0003aa; 	T(MOV(es, dx));	// 69026 mov     es, dx ;~ 202A:03AA
cs=0x202a;eip=0x0003ac; 	T(MOV(al, *(raddr(es,si))));	// 69027 mov     al, es:[si] ;~ 202A:03AC
cs=0x202a;eip=0x0003af; 	T(OR(al, al));	// 69028 or      al, al ;~ 202A:03AF
cs=0x202a;eip=0x0003b1; 	R(JZ(loc_2ec38));	// 69029 jz      short loc_2EC38 ;~ 202A:03B1
cs=0x202a;eip=0x0003b3; 	T(MOV(es, bx));	// 69030 mov     es, bx ;~ 202A:03B3
cs=0x202a;eip=0x0003b5; 	X(MOV(*(raddr(es,di)), al));	// 69031 mov     es:[di], al ;~ 202A:03B5
loc_2ec38:
	// 8848 
cs=0x202a;eip=0x0003b8; 	T(INC(di));	// 69034 inc     di ;~ 202A:03B8
cs=0x202a;eip=0x0003b9; 	T(INC(si));	// 69035 inc     si ;~ 202A:03B9
cs=0x202a;eip=0x0003ba; 	T(DEC(bp));	// 69036 dec     bp ;~ 202A:03BA
cs=0x202a;eip=0x0003bb; 	R(JNS(loc_2ec2a));	// 69037 jns     short loc_2EC2A ;~ 202A:03BB
cs=0x202a;eip=0x0003bd; 	T(MOV(bp, *(dw*)((&unk_48046))));	// 69038 mov     bp, word ptr unk_48046 ;~ 202A:03BD
cs=0x202a;eip=0x0003c1; 	T(ADD(di, *(dw*)((&unk_48024))));	// 69039 add     di, word ptr unk_48024 ;~ 202A:03C1
cs=0x202a;eip=0x0003c5; 	T(ADD(si, *(dw*)((&unk_48026))));	// 69040 add     si, word ptr unk_48026 ;~ 202A:03C5
cs=0x202a;eip=0x0003c9; 	R(LOOP(loc_2ec2a));	// 69041 loop    loc_2EC2A ;~ 202A:03C9
cs=0x202a;eip=0x0003cb; 	R(RETN(0));	// 69042 retn ;~ 202A:03CB
loc_2ec4c:
	// 8849 
cs=0x202a;eip=0x0003cc; 	T(OR(bp, bp));	// 69046 or      bp, bp ;~ 202A:03CC
cs=0x202a;eip=0x0003ce; 	R(JNZ(loc_2ec56));	// 69047 jnz     short loc_2EC56 ;~ 202A:03CE
cs=0x202a;eip=0x0003d0; 	T(MOV(al, unk_4803f));	// 69048 mov     al, byte ptr unk_4803F ;~ 202A:03D0
cs=0x202a;eip=0x0003d3; 	X(MOV(unk_4803d, al));	// 69049 mov     byte ptr unk_4803D, al ;~ 202A:03D3
loc_2ec56:
	// 8850 
cs=0x202a;eip=0x0003d6; 	T(MOV(es, *(dw*)((&unk_4802c))));	// 69052 mov     es, word ptr unk_4802C ;~ 202A:03D6
cs=0x202a;eip=0x0003da; 	T(MOV(al, *(raddr(es,si))));	// 69053 mov     al, es:[si] ;~ 202A:03DA
cs=0x202a;eip=0x0003dd; 	T(MOV(cl, unk_4803a));	// 69054 mov     cl, byte ptr unk_4803A ;~ 202A:03DD
cs=0x202a;eip=0x0003e1; 	T(ROR(al, cl));	// 69055 ror     al, cl ;~ 202A:03E1
cs=0x202a;eip=0x0003e3; 	T(MOV(es, *(dw*)((&unk_4802e))));	// 69056 mov     es, word ptr unk_4802E ;~ 202A:03E3
cs=0x202a;eip=0x0003e7; 	T(MOV(dl, 0x0FF));	// 69057 mov     dl, 0FFh ;~ 202A:03E7
cs=0x202a;eip=0x0003e9; 	T(TEST(al, 0x0F));	// 69058 test    al, 0Fh ;~ 202A:03E9
cs=0x202a;eip=0x0003eb; 	R(JNZ(loc_2ec70));	// 69059 jnz     short loc_2EC70 ;~ 202A:03EB
cs=0x202a;eip=0x0003ed; 	T(AND(dl, 0x0F0));	// 69060 and     dl, 0F0h ;~ 202A:03ED
loc_2ec70:
	// 8851 
cs=0x202a;eip=0x0003f0; 	T(TEST(al, 0x0F0));	// 69063 test    al, 0F0h ;~ 202A:03F0
cs=0x202a;eip=0x0003f2; 	R(JNZ(loc_2ec77));	// 69064 jnz     short loc_2EC77 ;~ 202A:03F2
cs=0x202a;eip=0x0003f4; 	T(AND(dl, 0x0F));	// 69065 and     dl, 0Fh ;~ 202A:03F4
loc_2ec77:
	// 8852 
cs=0x202a;eip=0x0003f7; 	T(TEST(unk_4803c, 1));	// 69068 test    byte ptr unk_4803C, 1 ;~ 202A:03F7
	// 69069 nop ;~ 202A:03FC
cs=0x202a;eip=0x0003fd; 	R(JNZ(loc_2ec95));	// 69070 jnz     short loc_2EC95 ;~ 202A:03FD
cs=0x202a;eip=0x0003ff; 	T(MOV(dh, unk_4802a));	// 69071 mov     dh, byte ptr unk_4802A ;~ 202A:03FF
cs=0x202a;eip=0x000403; 	T(AND(dh, dl));	// 69072 and     dh, dl ;~ 202A:0403
cs=0x202a;eip=0x000405; 	R(JZ(loc_2ec95));	// 69073 jz      short loc_2EC95 ;~ 202A:0405
cs=0x202a;eip=0x000407; 	T(NOT(dh));	// 69074 not     dh ;~ 202A:0407
cs=0x202a;eip=0x000409; 	T(MOV(ah, *(raddr(es,di))));	// 69075 mov     ah, es:[di] ;~ 202A:0409
cs=0x202a;eip=0x00040c; 	T(XOR(ah, al));	// 69076 xor     ah, al ;~ 202A:040C
cs=0x202a;eip=0x00040e; 	T(AND(ah, dh));	// 69077 and     ah, dh ;~ 202A:040E
cs=0x202a;eip=0x000410; 	T(XOR(ah, al));	// 69078 xor     ah, al ;~ 202A:0410
cs=0x202a;eip=0x000412; 	X(MOV(*(raddr(es,di)), ah));	// 69079 mov     es:[di], ah ;~ 202A:0412
loc_2ec95:
	// 8853 
cs=0x202a;eip=0x000415; 	T(INC(di));	// 69083 inc     di ;~ 202A:0415
cs=0x202a;eip=0x000416; 	T(TEST(unk_4803d, 1));	// 69084 test    byte ptr unk_4803D, 1 ;~ 202A:0416
	// 69085 nop ;~ 202A:041B
cs=0x202a;eip=0x00041c; 	R(JNZ(loc_2ecb6));	// 69086 jnz     short loc_2ECB6 ;~ 202A:041C
cs=0x202a;eip=0x00041e; 	T(MOV(dh, unk_4802a));	// 69087 mov     dh, byte ptr unk_4802A ;~ 202A:041E
cs=0x202a;eip=0x000422; 	T(NOT(dh));	// 69088 not     dh ;~ 202A:0422
cs=0x202a;eip=0x000424; 	T(AND(dh, dl));	// 69089 and     dh, dl ;~ 202A:0424
cs=0x202a;eip=0x000426; 	R(JZ(loc_2ecb6));	// 69090 jz      short loc_2ECB6 ;~ 202A:0426
cs=0x202a;eip=0x000428; 	T(NOT(dh));	// 69091 not     dh ;~ 202A:0428
cs=0x202a;eip=0x00042a; 	T(MOV(ah, *(raddr(es,di))));	// 69092 mov     ah, es:[di] ;~ 202A:042A
cs=0x202a;eip=0x00042d; 	T(XOR(ah, al));	// 69093 xor     ah, al ;~ 202A:042D
cs=0x202a;eip=0x00042f; 	T(AND(ah, dh));	// 69094 and     ah, dh ;~ 202A:042F
cs=0x202a;eip=0x000431; 	T(XOR(ah, al));	// 69095 xor     ah, al ;~ 202A:0431
cs=0x202a;eip=0x000433; 	X(MOV(*(raddr(es,di)), ah));	// 69096 mov     es:[di], ah ;~ 202A:0433
loc_2ecb6:
	// 8854 
cs=0x202a;eip=0x000436; 	T(INC(si));	// 69100 inc     si ;~ 202A:0436
cs=0x202a;eip=0x000437; 	T(DEC(bp));	// 69101 dec     bp ;~ 202A:0437
cs=0x202a;eip=0x000438; 	X(MOV(unk_4803c, 0));	// 69102 mov     byte ptr unk_4803C, 0 ;~ 202A:0438
	// 69103 nop ;~ 202A:043D
cs=0x202a;eip=0x00043e; 	R(JNS(loc_2eced));	// 69104 jns     short loc_2ECED ;~ 202A:043E
cs=0x202a;eip=0x000440; 	X(MOV(unk_4803d, 0));	// 69105 mov     byte ptr unk_4803D, 0 ;~ 202A:0440
	// 69106 nop ;~ 202A:0445
cs=0x202a;eip=0x000446; 	T(MOV(al, unk_4803e));	// 69107 mov     al, byte ptr unk_4803E ;~ 202A:0446
cs=0x202a;eip=0x000449; 	X(MOV(unk_4803c, al));	// 69108 mov     byte ptr unk_4803C, al ;~ 202A:0449
cs=0x202a;eip=0x00044c; 	T(MOV(bp, *(dw*)((&unk_48046))));	// 69109 mov     bp, word ptr unk_48046 ;~ 202A:044C
cs=0x202a;eip=0x000450; 	X(INC(*(dw*)((&unk_48036))));	// 69110 inc     word ptr unk_48036 ;~ 202A:0450
cs=0x202a;eip=0x000454; 	T(MOV(di, *(dw*)((&unk_48036))));	// 69111 mov     di, word ptr unk_48036 ;~ 202A:0454
cs=0x202a;eip=0x000458; 	T(SHL(di, 1));	// 69112 shl     di, 1 ;~ 202A:0458
cs=0x202a;eip=0x00045a; 	T(MOV(di, *(dw*)(raddr(ds,di-0x1492))));	// 69113 mov     di, [di-1492h] ;~ 202A:045A
cs=0x202a;eip=0x00045e; 	T(ADD(di, *(dw*)((&unk_48040))));	// 69114 add     di, word ptr unk_48040 ;~ 202A:045E
cs=0x202a;eip=0x000462; 	T(ADD(si, *(dw*)((&unk_48026))));	// 69115 add     si, word ptr unk_48026 ;~ 202A:0462
cs=0x202a;eip=0x000466; 	X(DEC(*(dw*)((&unk_48028))));	// 69116 dec     word ptr unk_48028 ;~ 202A:0466
cs=0x202a;eip=0x00046a; 	R(JNZ(loc_2eced));	// 69117 jnz     short loc_2ECED ;~ 202A:046A
cs=0x202a;eip=0x00046c; 	R(RETN(0));	// 69118 retn ;~ 202A:046C
loc_2eced:
	// 8855 
cs=0x202a;eip=0x00046d; 	R(JMP(loc_2ec4c));	// 69123 jmp     loc_2EC4C ;~ 202A:046D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_2e92f: 	goto loc_2e92f;
        case m2c::kloc_2e949: 	goto loc_2e949;
        case m2c::kloc_2e94c: 	goto loc_2e94c;
        case m2c::kloc_2e983: 	goto loc_2e983;
        case m2c::kloc_2e98e: 	goto loc_2e98e;
        case m2c::kloc_2e9af: 	goto loc_2e9af;
        case m2c::kloc_2ea76: 	goto loc_2ea76;
        case m2c::kloc_2ea98: 	goto loc_2ea98;
        case m2c::kloc_2eaa8: 	goto loc_2eaa8;
        case m2c::kloc_2eab2: 	goto loc_2eab2;
        case m2c::kloc_2eb26: 	goto loc_2eb26;
        case m2c::kloc_2eb61: 	goto loc_2eb61;
        case m2c::kloc_2eb8a: 	goto loc_2eb8a;
        case m2c::kloc_2eb9d: 	goto loc_2eb9d;
        case m2c::kloc_2eba5: 	goto loc_2eba5;
        case m2c::kloc_2ebda: 	goto loc_2ebda;
        case m2c::kloc_2ebf3: 	goto loc_2ebf3;
        case m2c::kloc_2ec2a: 	goto loc_2ec2a;
        case m2c::kloc_2ec38: 	goto loc_2ec38;
        case m2c::kloc_2ec4c: 	goto loc_2ec4c;
        case m2c::kloc_2ec56: 	goto loc_2ec56;
        case m2c::kloc_2ec70: 	goto loc_2ec70;
        case m2c::kloc_2ec77: 	goto loc_2ec77;
        case m2c::kloc_2ec95: 	goto loc_2ec95;
        case m2c::kloc_2ecb6: 	goto loc_2ecb6;
        case m2c::kloc_2eced: 	goto loc_2eced;
        case m2c::kret_202a_30d: 	goto ret_202a_30d;
        case m2c::kret_202a_39e: 	goto ret_202a_39e;
        case m2c::kseg007_proc: 	goto seg007_proc;
        case m2c::ksub_2e88a: 	goto sub_2e88a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, _source);m2c::stackDump(_state); abort();
    };
}

