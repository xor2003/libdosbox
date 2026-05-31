/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group22(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group22:
    _begin:
sub_36af4:
	// 87458 
cs=0x2851;eip=0x000004; 	T(CMP(unk_4a2b1, 1));	// 87459 cmp     byte ptr unk_4A2B1, 1 ;~ 2851:0004
cs=0x2851;eip=0x000009; 	R(JNZ(loc_36afc));	// 87460 jnz     short loc_36AFC ;~ 2851:0009
cs=0x2851;eip=0x00000b; 	R(RETF(0));	// 87461 retf ;~ 2851:000B
loc_36afc:
	// 9998 
cs=0x2851;eip=0x00000c; 	X(MOV(unk_4a2b1, 1));	// 87465 mov     byte ptr unk_4A2B1, 1 ;~ 2851:000C
cs=0x2851;eip=0x000011; 	R(CALL(sub_36be7,0));	// 87466 call    sub_36BE7 ;~ 2851:0011
cs=0x2851;eip=0x000014; 	X(PUSH(es));	// 87467 push    es ;~ 2851:0014
cs=0x2851;eip=0x000015; 	T(MOV(ax, 0x3509));	// 87468 mov     ax, 3509h ;~ 2851:0015
cs=0x2851;eip=0x000018; 	R(_INT(0x21));	// 87469 int     21h             ; DOS - 2+ - GET INTERRUPT VECTOR ;~ 2851:0018
	cs=seg_offset(seg024);
cs=0x2851;eip=0x00001a; 	X(MOV(*(dw*)(((db*)&dword_36bb4)+2), es));	// 87472 mov     word ptr cs:dword_36BB4+2, es ;~ 2851:001A
	cs=seg_offset(seg024);
cs=0x2851;eip=0x00001f; 	X(MOV(*(dw*)(((db*)&dword_36bb4)), bx));	// 87473 mov     word ptr cs:dword_36BB4, bx ;~ 2851:001F
cs=0x2851;eip=0x000024; 	X(POP(es));	// 87474 pop     es ;~ 2851:0024
cs=0x2851;eip=0x000025; 	X(PUSH(ds));	// 87475 push    ds ;~ 2851:0025
cs=0x2851;eip=0x000026; 	X(PUSH(cs));	// 87476 push    cs ;~ 2851:0026
cs=0x2851;eip=0x000027; 	X(POP(ds));	// 87477 pop     ds ;~ 2851:0027
cs=0x2851;eip=0x000028; 	T(MOV(dx, 0x4C));	// 87479 mov     dx, 4Ch ; 'L' ;~ 2851:0028
cs=0x2851;eip=0x00002b; 	T(MOV(ax, 0x2509));	// 87480 mov     ax, 2509h ;~ 2851:002B
cs=0x2851;eip=0x00002e; 	R(_INT(0x21));	// 87481 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 2851:002E
cs=0x2851;eip=0x000030; 	X(POP(ds));	// 87484 pop     ds ;~ 2851:0030
cs=0x2851;eip=0x000031; 	R(RETF(0));	// 87486 retf ;~ 2851:0031
sub_36b22:
	// 87493 
cs=0x2851;eip=0x000032; 	T(CMP(unk_4a2b1, 1));	// 87495 cmp     byte ptr unk_4A2B1, 1 ;~ 2851:0032
cs=0x2851;eip=0x000037; 	R(JZ(loc_36b2a));	// 87496 jz      short loc_36B2A ;~ 2851:0037
cs=0x2851;eip=0x000039; 	R(RETF(0));	// 87497 retf ;~ 2851:0039
loc_36b2a:
	// 9999 
cs=0x2851;eip=0x00003a; 	X(MOV(unk_4a2b1, 0));	// 87501 mov     byte ptr unk_4A2B1, 0 ;~ 2851:003A
cs=0x2851;eip=0x00003f; 	X(PUSH(ds));	// 87502 push    ds ;~ 2851:003F
	cs=seg_offset(seg024);
cs=0x2851;eip=0x000040; 	T(LDS(dx, *(dd*)(((db*)&dword_36bb4))));	// 87503 lds     dx, cs:dword_36BB4 ;~ 2851:0040
cs=0x2851;eip=0x000045; 	T(MOV(ax, 0x2509));	// 87504 mov     ax, 2509h ;~ 2851:0045
cs=0x2851;eip=0x000048; 	R(_INT(0x21));	// 87505 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 2851:0048
cs=0x2851;eip=0x00004a; 	X(POP(ds));	// 87508 pop     ds ;~ 2851:004A
cs=0x2851;eip=0x00004b; 	R(RETF(0));	// 87509 retf ;~ 2851:004B
seg024_proc:
	// 87513 
cs=0x2851;eip=0x00004c; 	T(STI);	// 87513 sti ;~ 2851:004C
cs=0x2851;eip=0x00004d; 	X(PUSH(ds));	// 87514 push    ds ;~ 2851:004D
cs=0x2851;eip=0x00004e; 	X(PUSH(ax));	// 87515 push    ax ;~ 2851:004E
	cs=seg_offset(seg024);
cs=0x2851;eip=0x00004f; 	T(TEST(*(&byte_36bb9), 1));	// 87516 test    cs:byte_36BB9, 1 ;~ 2851:004F
cs=0x2851;eip=0x000055; 	R(JZ(loc_36b55));	// 87517 jz      short loc_36B55 ;~ 2851:0055
	cs=seg_offset(seg024);
cs=0x2851;eip=0x000057; 	X(MOV(*(&byte_36bb8), 0));	// 87518 mov     cs:byte_36BB8, 0 ;~ 2851:0057
	// 87519 nop ;~ 2851:005D
cs=0x2851;eip=0x00005e; 	X(POP(ax));	// 87520 pop     ax ;~ 2851:005E
cs=0x2851;eip=0x00005f; 	X(POP(ds));	// 87521 pop     ds ;~ 2851:005F
	cs=seg_offset(seg024);
cs=0x2851;eip=0x000060; __disp=*(dd*)(((db*)&dword_36bb4));
	R(JMP(__dispatch_call));	// 87522 jmp     cs:dword_36BB4 ;~ 2851:0060
loc_36b55:
	// 10000 
cs=0x2851;eip=0x000065; 	X(PUSH(di));	// 87526 push    di ;~ 2851:0065
cs=0x2851;eip=0x000066; 	X(PUSH(bx));	// 87527 push    bx ;~ 2851:0066
cs=0x2851;eip=0x000067; 	X(PUSH(es));	// 87528 push    es ;~ 2851:0067
cs=0x2851;eip=0x000068; 	T(MOV(ax, seg_offset(dseg)));	// 87529 mov     ax, seg dseg ;~ 2851:0068
cs=0x2851;eip=0x00006b; 	T(MOV(ds, ax));	// 87530 mov     ds, ax ;~ 2851:006B
cs=0x2851;eip=0x00006d; 	T(MOV(es, ax));	// 87531 mov     es, ax ;~ 2851:006D
	cs=seg_offset(seg024);
cs=0x2851;eip=0x00006f; 	T(LDS(di, *(dd*)(((db*)&word_36bb0))));	// 87533 lds     di, dword ptr cs:word_36BB0 ;~ 2851:006F
cs=0x2851;eip=0x000074; 	R(IN(al, 0x60));	// 87534 in      al, 60h         ; 8042 keyboard controller data register ;~ 2851:0074
cs=0x2851;eip=0x000076; 	X(MOV(*(raddr(ds,di)), al));	// 87535 mov     [di], al ;~ 2851:0076
cs=0x2851;eip=0x000078; 	T(INC(di));	// 87536 inc     di ;~ 2851:0078
cs=0x2851;eip=0x000079; 	T(bx = offset(dseg,unk_4a2b0));	// 87537 lea     bx, unk_4A2B0 ;~ 2851:0079
cs=0x2851;eip=0x00007d; 	T(CMP(di, bx));	// 87538 cmp     di, bx ;~ 2851:007D
cs=0x2851;eip=0x00007f; 	R(JNZ(loc_36b75));	// 87539 jnz     short loc_36B75 ;~ 2851:007F
cs=0x2851;eip=0x000081; 	T(di = offset(dseg,unk_4a270));	// 87540 lea     di, unk_4A270 ;~ 2851:0081
loc_36b75:
	// 10001 
	cs=seg_offset(seg024);
cs=0x2851;eip=0x000085; 	X(MOV(*(dw*)(((db*)&word_36bb0)), di));	// 87543 mov     cs:word_36BB0, di ;~ 2851:0085
cs=0x2851;eip=0x00008a; 	T(CMP(al, 0x3A));	// 87544 cmp     al, 3Ah ; ':' ;~ 2851:008A
cs=0x2851;eip=0x00008c; 	R(JNZ(loc_36b87));	// 87545 jnz     short loc_36B87 ;~ 2851:008C
cs=0x2851;eip=0x00008e; 	T(SUB(ax, ax));	// 87546 sub     ax, ax ;~ 2851:008E
cs=0x2851;eip=0x000090; 	T(MOV(ds, ax));	// 87547 mov     ds, ax ;~ 2851:0090
cs=0x2851;eip=0x000092; 	X(OR(*(raddr(ds,0x417)), 0x40));	// 87549 or      byte ptr ds:417h, 40h ;~ 2851:0092
loc_36b87:
	// 10002 
cs=0x2851;eip=0x000097; 	R(IN(al, 0x61));	// 87552 in      al, 61h         ; PC/XT PPI port B bits: ;~ 2851:0097
cs=0x2851;eip=0x000099; 	R(
);	// 87560 jmp     short $+2 ;~ 2851:0099
loc_36b8b:
	// 10003 
cs=0x2851;eip=0x00009b; 	T(MOV(ah, al));	// 87564 mov     ah, al ;~ 2851:009B
cs=0x2851;eip=0x00009d; 	T(OR(al, 0x80));	// 87565 or      al, 80h ;~ 2851:009D
cs=0x2851;eip=0x00009f; 	R(OUT(0x61, al));	// 87566 out     61h, al         ; PC/XT PPI port B bits: ;~ 2851:009F
cs=0x2851;eip=0x0000a1; 	R(
);	// 87574 jmp     short $+2 ;~ 2851:00A1
loc_36b93:
	// 10004 
cs=0x2851;eip=0x0000a3; 	T(MOV(al, ah));	// 87578 mov     al, ah ;~ 2851:00A3
cs=0x2851;eip=0x0000a5; 	R(OUT(0x61, al));	// 87579 out     61h, al         ; PC/XT PPI port B bits: ;~ 2851:00A5
	cs=seg_offset(seg024);
cs=0x2851;eip=0x0000a7; 	T(CMP(*(&byte_36bb8), 0));	// 87587 cmp     cs:byte_36BB8, 0 ;~ 2851:00A7
cs=0x2851;eip=0x0000ad; 	R(JNZ(loc_36ba6));	// 87588 jnz     short loc_36BA6 ;~ 2851:00AD
	cs=seg_offset(seg024);
cs=0x2851;eip=0x0000af; 	X(MOV(*(&byte_36bb8), 1));	// 87589 mov     cs:byte_36BB8, 1 ;~ 2851:00AF
	// 87590 nop ;~ 2851:00B5
loc_36ba6:
	// 10005 
cs=0x2851;eip=0x0000b6; 	T(MOV(al, 0x20));	// 87593 mov     al, 20h ; ' ' ;~ 2851:00B6
cs=0x2851;eip=0x0000b8; 	R(OUT(0x20, al));	// 87594 out     20h, al         ; Interrupt controller, 8259A. ;~ 2851:00B8
cs=0x2851;eip=0x0000ba; 	X(POP(es));	// 87595 pop     es ;~ 2851:00BA
cs=0x2851;eip=0x0000bb; 	X(POP(bx));	// 87597 pop     bx ;~ 2851:00BB
cs=0x2851;eip=0x0000bc; 	X(POP(di));	// 87598 pop     di ;~ 2851:00BC
cs=0x2851;eip=0x0000bd; 	X(POP(ax));	// 87599 pop     ax ;~ 2851:00BD
cs=0x2851;eip=0x0000be; 	X(POP(ds));	// 87600 pop     ds ;~ 2851:00BE
cs=0x2851;eip=0x0000bf; 	R(IRET);	// 87602 iret ;~ 2851:00BF
ret_2851_ca:
	// 10006 
	cs=seg_offset(seg024);
cs=0x2851;eip=0x0000ca; 	X(XOR(*(&byte_36bb9), 1));	// 87614 xor     cs:byte_36BB9, 1 ;~ 2851:00CA
cs=0x2851;eip=0x0000d0; 	T(XOR(ah, ah));	// 87615 xor     ah, ah ;~ 2851:00D0
	cs=seg_offset(seg024);
cs=0x2851;eip=0x0000d2; 	T(MOV(al, *(&byte_36bb9)));	// 87616 mov     al, cs:byte_36BB9 ;~ 2851:00D2
cs=0x2851;eip=0x0000d6; 	R(RETF(0));	// 87617 retf ;~ 2851:00D6
ret_2851_d7:
	// 10007 
	cs=seg_offset(seg024);
cs=0x2851;eip=0x0000d7; 	T(MOV(al, *(&byte_36bb9)));	// 87619 mov     al, cs:byte_36BB9 ;~ 2851:00D7
cs=0x2851;eip=0x0000db; 	T(XOR(ah, ah));	// 87620 xor     ah, ah ;~ 2851:00DB
cs=0x2851;eip=0x0000dd; 	R(RETF(0));	// 87621 retf ;~ 2851:00DD
cs=0x2851;eip=0x000278; 	X(PUSH(bp));	// 87908 push    bp ;~ 2851:0278
cs=0x2851;eip=0x000279; 	T(MOV(ah, 1));	// 87909 mov     ah, 1 ;~ 2851:0279
cs=0x2851;eip=0x00027b; 	R(_INT(0x16));	// 87910 int     16h             ; KEYBOARD - CHECK BUFFER, DO NOT CLEAR ;~ 2851:027B
cs=0x2851;eip=0x00027d; 	T(MOV(ax, 0));	// 87914 mov     ax, 0 ;~ 2851:027D
cs=0x2851;eip=0x000280; 	R(JZ(loc_36d77));	// 87915 jz      short loc_36D77 ;~ 2851:0280
cs=0x2851;eip=0x000282; 	R(CALLF(sub_36d61,0));	// 87916 call    sub_36D61 ;~ 2851:0282
loc_36d77:
	// 10030 
cs=0x2851;eip=0x000287; 	X(POP(bp));	// 87919 pop     bp ;~ 2851:0287
cs=0x2851;eip=0x000288; 	R(RETF(0));	// 87920 retf ;~ 2851:0288
sub_36bce:
	// 87626 
cs=0x2851;eip=0x0000de; 	T(MOV(ah, al));	// 87627 mov     ah, al ;~ 2851:00DE
cs=0x2851;eip=0x0000e0; 	T(AND(ah, 0x80));	// 87628 and     ah, 80h ;~ 2851:00E0
cs=0x2851;eip=0x0000e3; 	T(AND(al, 0x7F));	// 87629 and     al, 7Fh ;~ 2851:00E3
cs=0x2851;eip=0x0000e5; 	T(di = offset(dseg,unk_4a341));	// 87630 lea     di, unk_4A341 ;~ 2851:00E5
cs=0x2851;eip=0x0000e9; 	T(MOV(cx, 0x0D));	// 87631 mov     cx, 0Dh ;~ 2851:00E9
cs=0x2851;eip=0x0000ec; 	T(CLD);	// 87632 cld ;~ 2851:00EC
	// 87633 repne scasb ;~ 2851:00ED
cs=0x2851;eip=0x0000ed; 	T(	REPNE SCASB);	// 87633 repne scasb ;~ 2851:00ED
cs=0x2851;eip=0x0000ef; 	R(JNZ(loc_36be4));	// 87634 jnz     short loc_36BE4 ;~ 2851:00EF
cs=0x2851;eip=0x0000f1; 	T(MOV(al, *(raddr(ds,di+0x0C))));	// 87635 mov     al, [di+0Ch] ;~ 2851:00F1
loc_36be4:
	// 10008 
cs=0x2851;eip=0x0000f4; 	T(OR(al, ah));	// 87638 or      al, ah ;~ 2851:00F4
cs=0x2851;eip=0x0000f6; 	R(RETN(0));	// 87639 retn ;~ 2851:00F6
sub_36be7:
	// 87646 
cs=0x2851;eip=0x0000f7; 	T(MOV(ax, *(dw*)((&unk_4a33f))));	// 87647 mov     ax, word ptr unk_4A33F ;~ 2851:00F7
	cs=seg_offset(seg024);
cs=0x2851;eip=0x0000fa; 	X(MOV(*(dw*)(((db*)&word_36bb0)), ax));	// 87648 mov     cs:word_36BB0, ax ;~ 2851:00FA
cs=0x2851;eip=0x0000fe; 	T(MOV(ax, ds));	// 87649 mov     ax, ds ;~ 2851:00FE
	cs=seg_offset(seg024);
cs=0x2851;eip=0x000100; 	X(MOV(*(dw*)(((db*)&seg_36bb2)), ax));	// 87650 mov     cs:seg_36BB2, ax ;~ 2851:0100
cs=0x2851;eip=0x000104; 	T(CMP(*(dw*)((&unk_4a2bc)), 0));	// 87651 cmp     word ptr unk_4A2BC, 0 ;~ 2851:0104
cs=0x2851;eip=0x000109; 	R(JNZ(locret_36c42));	// 87652 jnz     short locret_36C42 ;~ 2851:0109
cs=0x2851;eip=0x00010b; 	T(MOV(ax, 0x0FC00));	// 87653 mov     ax, 0FC00h ;~ 2851:010B
cs=0x2851;eip=0x00010e; 	T(MOV(es, ax));	// 87654 mov     es, ax ;~ 2851:010E
cs=0x2851;eip=0x000110; 	T(CMP(*(raddr(es,0)), 0x21));	// 87656 cmp     byte ptr es:0, 21h ; '!' ;~ 2851:0110
cs=0x2851;eip=0x000116; 	R(JZ(loc_36c11));	// 87657 jz      short loc_36C11 ;~ 2851:0116
cs=0x2851;eip=0x000118; 	X(MOV(*(dw*)((&unk_4a2b2)), 0));	// 87658 mov     word ptr unk_4A2B2, 0 ;~ 2851:0118
cs=0x2851;eip=0x00011e; 	R(JMP(loc_36c17));	// 87659 jmp     short loc_36C17 ;~ 2851:011E
loc_36c11:
	// 10009 
cs=0x2851;eip=0x000121; 	X(MOV(*(dw*)((&unk_4a2b2)), 1));	// 87665 mov     word ptr unk_4A2B2, 1 ;~ 2851:0121
loc_36c17:
	// 10010 
cs=0x2851;eip=0x000127; 	T(SUB(ax, ax));	// 87668 sub     ax, ax ;~ 2851:0127
cs=0x2851;eip=0x000129; 	T(MOV(es, ax));	// 87669 mov     es, ax ;~ 2851:0129
cs=0x2851;eip=0x00012b; 	X(AND(*(raddr(es,0x496)), 0x10));	// 87671 and     byte ptr es:496h, 10h ;~ 2851:012B
cs=0x2851;eip=0x000131; 	R(JNZ(loc_36c3c));	// 87672 jnz     short loc_36C3C ;~ 2851:0131
cs=0x2851;eip=0x000133; 	T(CMP(*(dw*)((&unk_4a2b2)), 0));	// 87673 cmp     word ptr unk_4A2B2, 0 ;~ 2851:0133
cs=0x2851;eip=0x000138; 	R(JNZ(loc_36c33));	// 87674 jnz     short loc_36C33 ;~ 2851:0138
cs=0x2851;eip=0x00013a; 	X(MOV(*(dw*)((&unk_4a2bc)), 0));	// 87675 mov     word ptr unk_4A2BC, 0 ;~ 2851:013A
cs=0x2851;eip=0x000140; 	R(JMP(locret_36c42));	// 87676 jmp     short locret_36C42 ;~ 2851:0140
loc_36c33:
	// 10011 
cs=0x2851;eip=0x000143; 	X(MOV(*(dw*)((&unk_4a2bc)), 4));	// 87682 mov     word ptr unk_4A2BC, 4 ;~ 2851:0143
cs=0x2851;eip=0x000149; 	R(JMP(locret_36c42));	// 87683 jmp     short locret_36C42 ;~ 2851:0149
loc_36c3c:
	// 10012 
cs=0x2851;eip=0x00014c; 	X(MOV(*(dw*)((&unk_4a2bc)), 2));	// 87688 mov     word ptr unk_4A2BC, 2 ;~ 2851:014C
locret_36c42:
	// 10013 
cs=0x2851;eip=0x000152; 	R(RETN(0));	// 87692 retn ;~ 2851:0152
sub_36c43:
	// 87700 
cs=0x2851;eip=0x000153; 	X(PUSH(bp));	// 87701 push    bp ;~ 2851:0153
cs=0x2851;eip=0x000154; 	T(MOV(bp, sp));	// 87702 mov     bp, sp ;~ 2851:0154
cs=0x2851;eip=0x000156; 	X(PUSH(si));	// 87703 push    si ;~ 2851:0156
cs=0x2851;eip=0x000157; 	X(PUSH(di));	// 87704 push    di ;~ 2851:0157
cs=0x2851;eip=0x000158; 	X(PUSH(es));	// 87705 push    es ;~ 2851:0158
cs=0x2851;eip=0x000159; 	X(PUSH(ds));	// 87706 push    ds ;~ 2851:0159
cs=0x2851;eip=0x00015a; 	X(POP(es));	// 87707 pop     es ;~ 2851:015A
loc_36c4b:
	// 10014 
cs=0x2851;eip=0x00015b; 	R(CALL(sub_36d11,0));	// 87712 call    sub_36D11 ;~ 2851:015B
cs=0x2851;eip=0x00015e; 	R(JNC(loc_36c55));	// 87713 jnb     short loc_36C55 ;~ 2851:015E
cs=0x2851;eip=0x000160; 	T(SUB(ax, ax));	// 87714 sub     ax, ax ;~ 2851:0160
cs=0x2851;eip=0x000162; 	R(JMP(loc_36ce8));	// 87715 jmp     loc_36CE8 ;~ 2851:0162
loc_36c55:
	// 10015 
cs=0x2851;eip=0x000165; 	T(CMP(al, 0x0E1));	// 87719 cmp     al, 0E1h ; 'á' ;~ 2851:0165
cs=0x2851;eip=0x000167; 	R(JNZ(loc_36c63));	// 87720 jnz     short loc_36C63 ;~ 2851:0167
cs=0x2851;eip=0x000169; 	R(CALL(sub_36d4a,0));	// 87721 call    sub_36D4A ;~ 2851:0169
cs=0x2851;eip=0x00016c; 	R(CALL(sub_36d4a,0));	// 87722 call    sub_36D4A ;~ 2851:016C
cs=0x2851;eip=0x00016f; 	T(MOV(al, 0x60));	// 87723 mov     al, 60h ; '`' ;~ 2851:016F
cs=0x2851;eip=0x000171; 	R(JMP(loc_36c97));	// 87724 jmp     short loc_36C97 ;~ 2851:0171
loc_36c63:
	// 10016 
cs=0x2851;eip=0x000173; 	T(CMP(al, 0x0E0));	// 87728 cmp     al, 0E0h ; 'à' ;~ 2851:0173
cs=0x2851;eip=0x000175; 	R(JNZ(loc_36c97));	// 87729 jnz     short loc_36C97 ;~ 2851:0175
cs=0x2851;eip=0x000177; 	R(CALL(sub_36d4a,0));	// 87730 call    sub_36D4A ;~ 2851:0177
cs=0x2851;eip=0x00017a; 	X(MOV(unk_4a33e, al));	// 87731 mov     byte ptr unk_4A33E, al ;~ 2851:017A
cs=0x2851;eip=0x00017d; 	T(AND(al, 0x7F));	// 87732 and     al, 7Fh ;~ 2851:017D
cs=0x2851;eip=0x00017f; 	T(CMP(al, 0x2A));	// 87733 cmp     al, 2Ah ; '*' ;~ 2851:017F
cs=0x2851;eip=0x000181; 	R(JZ(loc_36c4b));	// 87734 jz      short loc_36C4B ;~ 2851:0181
cs=0x2851;eip=0x000183; 	T(CMP(al, 0x36));	// 87735 cmp     al, 36h ; '6' ;~ 2851:0183
cs=0x2851;eip=0x000185; 	R(JZ(loc_36c4b));	// 87736 jz      short loc_36C4B ;~ 2851:0185
cs=0x2851;eip=0x000187; 	T(di = offset(dseg,unk_4a35b));	// 87737 lea     di, unk_4A35B ;~ 2851:0187
cs=0x2851;eip=0x00018b; 	T(cx = offset(dseg,unk_4a36b));	// 87738 lea     cx, unk_4A36B ;~ 2851:018B
cs=0x2851;eip=0x00018f; 	T(SUB(cx, di));	// 87739 sub     cx, di ;~ 2851:018F
cs=0x2851;eip=0x000191; 	T(CLD);	// 87740 cld ;~ 2851:0191
	// 87741 repne scasb ;~ 2851:0192
cs=0x2851;eip=0x000192; 	T(	REPNE SCASB);	// 87741 repne scasb ;~ 2851:0192
cs=0x2851;eip=0x000194; 	R(JNZ(loc_36c4b));	// 87742 jnz     short loc_36C4B ;~ 2851:0194
cs=0x2851;eip=0x000196; 	T(cx = offset(dseg,unk_4a35b));	// 87743 lea     cx, unk_4A35B ;~ 2851:0196
cs=0x2851;eip=0x00019a; 	T(INC(cx));	// 87744 inc     cx ;~ 2851:019A
cs=0x2851;eip=0x00019b; 	T(SUB(cx, 0x60));	// 87745 sub     cx, 60h ; '`' ;~ 2851:019B
cs=0x2851;eip=0x00019e; 	T(SUB(di, cx));	// 87746 sub     di, cx ;~ 2851:019E
cs=0x2851;eip=0x0001a0; 	T(MOV(al, unk_4a33e));	// 87747 mov     al, byte ptr unk_4A33E ;~ 2851:01A0
cs=0x2851;eip=0x0001a3; 	T(AND(al, 0x80));	// 87748 and     al, 80h ;~ 2851:01A3
cs=0x2851;eip=0x0001a5; 	T(OR(ax, di));	// 87749 or      ax, di ;~ 2851:01A5
loc_36c97:
	// 10017 
cs=0x2851;eip=0x0001a7; 	T(CMP(*(dw*)((&unk_4a2bc)), 4));	// 87753 cmp     word ptr unk_4A2BC, 4 ;~ 2851:01A7
cs=0x2851;eip=0x0001ac; 	R(JNZ(loc_36ca1));	// 87754 jnz     short loc_36CA1 ;~ 2851:01AC
cs=0x2851;eip=0x0001ae; 	R(CALL(sub_36bce,0));	// 87755 call    sub_36BCE ;~ 2851:01AE
loc_36ca1:
	// 10018 
cs=0x2851;eip=0x0001b1; 	T(SUB(ah, ah));	// 87758 sub     ah, ah ;~ 2851:01B1
cs=0x2851;eip=0x0001b3; 	T(MOV(bx, ax));	// 87759 mov     bx, ax ;~ 2851:01B3
cs=0x2851;eip=0x0001b5; 	T(AND(bl, 0x7F));	// 87760 and     bl, 7Fh ;~ 2851:01B5
cs=0x2851;eip=0x0001b8; 	T(TEST(al, 0x80));	// 87761 test    al, 80h ;~ 2851:01B8
cs=0x2851;eip=0x0001ba; 	R(JZ(loc_36cb6));	// 87762 jz      short loc_36CB6 ;~ 2851:01BA
cs=0x2851;eip=0x0001bc; 	X(MOV(*(raddr(ds,bx+0x290E)), 0));	// 87763 mov     byte ptr [bx+290Eh], 0 ;~ 2851:01BC
cs=0x2851;eip=0x0001c1; 	R(CALL(sub_36cef,0));	// 87764 call    sub_36CEF ;~ 2851:01C1
cs=0x2851;eip=0x0001c4; 	R(JMP(loc_36c4b));	// 87765 jmp     short loc_36C4B ;~ 2851:01C4
loc_36cb6:
	// 10019 
cs=0x2851;eip=0x0001c6; 	T(CMP(*(dw*)((&unk_4a2b4)), 0));	// 87769 cmp     word ptr unk_4A2B4, 0 ;~ 2851:01C6
cs=0x2851;eip=0x0001cb; 	R(JNZ(loc_36cc4));	// 87770 jnz     short loc_36CC4 ;~ 2851:01CB
cs=0x2851;eip=0x0001cd; 	T(CMP(*(raddr(ds,bx+0x290E)), 0));	// 87771 cmp     byte ptr [bx+290Eh], 0 ;~ 2851:01CD
cs=0x2851;eip=0x0001d2; 	R(JNZ(loc_36c4b));	// 87772 jnz     short loc_36C4B ;~ 2851:01D2
loc_36cc4:
	// 10020 
cs=0x2851;eip=0x0001d4; 	X(INC(*(raddr(ds,bx+0x290E))));	// 87775 inc     byte ptr [bx+290Eh] ;~ 2851:01D4
cs=0x2851;eip=0x0001d8; 	T(CMP(unk_4a2b6, 0));	// 87776 cmp     byte ptr unk_4A2B6, 0 ;~ 2851:01D8
cs=0x2851;eip=0x0001dd; 	R(JZ(loc_36cd2));	// 87777 jz      short loc_36CD2 ;~ 2851:01DD
cs=0x2851;eip=0x0001df; 	T(OR(bl, 0x80));	// 87778 or      bl, 80h ;~ 2851:01DF
loc_36cd2:
	// 10021 
cs=0x2851;eip=0x0001e2; 	X(PUSH(es));	// 87781 push    es ;~ 2851:01E2
cs=0x2851;eip=0x0001e3; 	T(MOV(cx, seg_offset(seg040)));	// 87782 mov     cx, seg seg040 ;~ 2851:01E3
cs=0x2851;eip=0x0001e6; 	T(MOV(es, cx));	// 87783 mov     es, cx ;~ 2851:01E6
cs=0x2851;eip=0x0001e8; 	T(MOV(ah, *(raddr(es,bx+0x0A))));	// 87785 mov     ah, es:[bx+0Ah] ;~ 2851:01E8
cs=0x2851;eip=0x0001ed; 	X(POP(es));	// 87786 pop     es ;~ 2851:01ED
cs=0x2851;eip=0x0001ee; 	X(PUSH(ax));	// 87788 push    ax ;~ 2851:01EE
cs=0x2851;eip=0x0001ef; 	R(CALL(sub_36cef,0));	// 87789 call    sub_36CEF ;~ 2851:01EF
cs=0x2851;eip=0x0001f2; 	X(POP(ax));	// 87790 pop     ax ;~ 2851:01F2
cs=0x2851;eip=0x0001f3; 	T(SUB(bx, bx));	// 87791 sub     bx, bx ;~ 2851:01F3
cs=0x2851;eip=0x0001f5; 	T(XCHG(al, ah));	// 87792 xchg    al, ah ;~ 2851:01F5
cs=0x2851;eip=0x0001f7; 	T(INC(bx));	// 87793 inc     bx ;~ 2851:01F7
loc_36ce8:
	// 10022 
cs=0x2851;eip=0x0001f8; 	X(POP(es));	// 87796 pop     es ;~ 2851:01F8
cs=0x2851;eip=0x0001f9; 	X(POP(di));	// 87797 pop     di ;~ 2851:01F9
cs=0x2851;eip=0x0001fa; 	X(POP(si));	// 87798 pop     si ;~ 2851:01FA
cs=0x2851;eip=0x0001fb; 	T(MOV(sp, bp));	// 87799 mov     sp, bp ;~ 2851:01FB
cs=0x2851;eip=0x0001fd; 	X(POP(bp));	// 87800 pop     bp ;~ 2851:01FD
cs=0x2851;eip=0x0001fe; 	R(RETF(0));	// 87801 retf ;~ 2851:01FE
sub_36cef:
	// 87808 
cs=0x2851;eip=0x0001ff; 	T(MOV(cx, 6));	// 87810 mov     cx, 6 ;~ 2851:01FF
cs=0x2851;eip=0x000202; 	T(MOV(bx, *(dw*)((&unk_4a2bc))));	// 87811 mov     bx, word ptr unk_4A2BC ;~ 2851:0202
cs=0x2851;eip=0x000206; 	T(di = offset(dseg,unk_4a2b6));	// 87812 lea     di, unk_4A2B6 ;~ 2851:0206
loc_36cfa:
	// 10023 
cs=0x2851;eip=0x00020a; 	T(MOV(si, *(dw*)(raddr(ds,bx+0x29BC))));	// 87815 mov     si, [bx+29BCh] ;~ 2851:020A
cs=0x2851;eip=0x00020e; 	T(MOV(al, *(raddr(ds,si+0x290E))));	// 87816 mov     al, [si+290Eh] ;~ 2851:020E
cs=0x2851;eip=0x000212; 	T(MOV(si, *(dw*)(raddr(ds,bx+0x29C4))));	// 87817 mov     si, [bx+29C4h] ;~ 2851:0212
cs=0x2851;eip=0x000216; 	T(OR(al, *(raddr(ds,si+0x290E))));	// 87818 or      al, [si+290Eh] ;~ 2851:0216
cs=0x2851;eip=0x00021a; 	X(STOSB);	// 87819 stosb ;~ 2851:021A
cs=0x2851;eip=0x00021b; 	T(ADD(bx, 0x10));	// 87820 add     bx, 10h ;~ 2851:021B
cs=0x2851;eip=0x00021e; 	R(LOOP(loc_36cfa));	// 87821 loop    loc_36CFA ;~ 2851:021E
cs=0x2851;eip=0x000220; 	R(RETN(0));	// 87822 retn ;~ 2851:0220
sub_36d11:
	// 87829 
cs=0x2851;eip=0x000221; 	T(MOV(si, *(dw*)((&unk_4a33f))));	// 87830 mov     si, word ptr unk_4A33F ;~ 2851:0221
	cs=seg_offset(seg024);
cs=0x2851;eip=0x000225; 	T(CMP(si, *(dw*)(((db*)&word_36bb0))));	// 87831 cmp     si, cs:word_36BB0 ;~ 2851:0225
cs=0x2851;eip=0x00022a; 	R(JZ(loc_36d35));	// 87832 jz      short loc_36D35 ;~ 2851:022A
cs=0x2851;eip=0x00022c; 	T(MOV(al, *(raddr(ds,si))));	// 87833 mov     al, [si] ;~ 2851:022C
cs=0x2851;eip=0x00022e; 	T(CMP(al, 0x0E0));	// 87834 cmp     al, 0E0h ; 'à' ;~ 2851:022E
cs=0x2851;eip=0x000230; 	R(JZ(loc_36d2b));	// 87835 jz      short loc_36D2B ;~ 2851:0230
cs=0x2851;eip=0x000232; 	T(CMP(al, 0x0E1));	// 87836 cmp     al, 0E1h ; 'á' ;~ 2851:0232
cs=0x2851;eip=0x000234; 	R(JNZ(loc_36d30));	// 87837 jnz     short loc_36D30 ;~ 2851:0234
cs=0x2851;eip=0x000236; 	R(CALL(sub_36d37,0));	// 87838 call    sub_36D37 ;~ 2851:0236
cs=0x2851;eip=0x000239; 	R(JZ(loc_36d35));	// 87839 jz      short loc_36D35 ;~ 2851:0239
loc_36d2b:
	// 10024 
cs=0x2851;eip=0x00023b; 	R(CALL(sub_36d37,0));	// 87842 call    sub_36D37 ;~ 2851:023B
cs=0x2851;eip=0x00023e; 	R(JZ(loc_36d35));	// 87843 jz      short loc_36D35 ;~ 2851:023E
loc_36d30:
	// 10025 
cs=0x2851;eip=0x000240; 	R(CALL(sub_36d4a,0));	// 87846 call    sub_36D4A ;~ 2851:0240
cs=0x2851;eip=0x000243; 	R(JMP(locret_36d36));	// 87847 jmp     short locret_36D36 ;~ 2851:0243
loc_36d35:
	// 10026 
cs=0x2851;eip=0x000245; 	T(STC);	// 87852 stc ;~ 2851:0245
locret_36d36:
	// 10027 
cs=0x2851;eip=0x000246; 	R(RETN(0));	// 87855 retn ;~ 2851:0246
sub_36d37:
	// 87862 
cs=0x2851;eip=0x000247; 	T(INC(si));	// 87864 inc     si ;~ 2851:0247
cs=0x2851;eip=0x000248; 	T(cx = offset(dseg,unk_4a2b0));	// 87865 lea     cx, unk_4A2B0 ;~ 2851:0248
cs=0x2851;eip=0x00024c; 	T(CMP(si, cx));	// 87866 cmp     si, cx ;~ 2851:024C
cs=0x2851;eip=0x00024e; 	R(JNZ(loc_36d44));	// 87867 jnz     short loc_36D44 ;~ 2851:024E
cs=0x2851;eip=0x000250; 	T(si = offset(dseg,unk_4a270));	// 87868 lea     si, unk_4A270 ;~ 2851:0250
loc_36d44:
	// 10028 
	cs=seg_offset(seg024);
cs=0x2851;eip=0x000254; 	T(CMP(si, *(dw*)(((db*)&word_36bb0))));	// 87871 cmp     si, cs:word_36BB0 ;~ 2851:0254
cs=0x2851;eip=0x000259; 	R(RETN(0));	// 87872 retn ;~ 2851:0259
sub_36d4a:
	// 87879 
cs=0x2851;eip=0x00025a; 	T(MOV(si, *(dw*)((&unk_4a33f))));	// 87881 mov     si, word ptr unk_4A33F ;~ 2851:025A
cs=0x2851;eip=0x00025e; 	T(LODSB);	// 87882 lodsb ;~ 2851:025E
cs=0x2851;eip=0x00025f; 	T(cx = offset(dseg,unk_4a2b0));	// 87883 lea     cx, unk_4A2B0 ;~ 2851:025F
cs=0x2851;eip=0x000263; 	T(CMP(si, cx));	// 87884 cmp     si, cx ;~ 2851:0263
cs=0x2851;eip=0x000265; 	R(JNZ(loc_36d5b));	// 87885 jnz     short loc_36D5B ;~ 2851:0265
cs=0x2851;eip=0x000267; 	T(si = offset(dseg,unk_4a270));	// 87886 lea     si, unk_4A270 ;~ 2851:0267
loc_36d5b:
	// 10029 
cs=0x2851;eip=0x00026b; 	X(MOV(*(dw*)((&unk_4a33f)), si));	// 87889 mov     word ptr unk_4A33F, si ;~ 2851:026B
cs=0x2851;eip=0x00026f; 	T(CLC);	// 87890 clc ;~ 2851:026F
cs=0x2851;eip=0x000270; 	R(RETN(0));	// 87891 retn ;~ 2851:0270
sub_36d61:
	// 87898 
cs=0x2851;eip=0x000271; 	X(PUSH(bp));	// 87899 push    bp ;~ 2851:0271
cs=0x2851;eip=0x000272; 	T(MOV(ah, 0));	// 87900 mov     ah, 0 ;~ 2851:0272
cs=0x2851;eip=0x000274; 	R(_INT(0x16));	// 87901 int     16h             ; KEYBOARD - READ CHAR FROM BUFFER, WAIT IF EMPTY ;~ 2851:0274
cs=0x2851;eip=0x000276; 	X(POP(bp));	// 87903 pop     bp ;~ 2851:0276
cs=0x2851;eip=0x000277; 	R(RETF(0));	// 87904 retf ;~ 2851:0277

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_36afc: 	goto loc_36afc;
        case m2c::kloc_36b2a: 	goto loc_36b2a;
        case m2c::kloc_36b55: 	goto loc_36b55;
        case m2c::kloc_36b75: 	goto loc_36b75;
        case m2c::kloc_36b87: 	goto loc_36b87;
        case m2c::kloc_36b8b: 	goto loc_36b8b;
        case m2c::kloc_36b93: 	goto loc_36b93;
        case m2c::kloc_36ba6: 	goto loc_36ba6;
        case m2c::kloc_36be4: 	goto loc_36be4;
        case m2c::kloc_36c11: 	goto loc_36c11;
        case m2c::kloc_36c17: 	goto loc_36c17;
        case m2c::kloc_36c33: 	goto loc_36c33;
        case m2c::kloc_36c3c: 	goto loc_36c3c;
        case m2c::kloc_36c4b: 	goto loc_36c4b;
        case m2c::kloc_36c55: 	goto loc_36c55;
        case m2c::kloc_36c63: 	goto loc_36c63;
        case m2c::kloc_36c97: 	goto loc_36c97;
        case m2c::kloc_36ca1: 	goto loc_36ca1;
        case m2c::kloc_36cb6: 	goto loc_36cb6;
        case m2c::kloc_36cc4: 	goto loc_36cc4;
        case m2c::kloc_36cd2: 	goto loc_36cd2;
        case m2c::kloc_36ce8: 	goto loc_36ce8;
        case m2c::kloc_36cfa: 	goto loc_36cfa;
        case m2c::kloc_36d2b: 	goto loc_36d2b;
        case m2c::kloc_36d30: 	goto loc_36d30;
        case m2c::kloc_36d35: 	goto loc_36d35;
        case m2c::kloc_36d44: 	goto loc_36d44;
        case m2c::kloc_36d5b: 	goto loc_36d5b;
        case m2c::kloc_36d77: 	goto loc_36d77;
        case m2c::klocret_36c42: 	goto locret_36c42;
        case m2c::klocret_36d36: 	goto locret_36d36;
        case m2c::kret_2851_ca: 	goto ret_2851_ca;
        case m2c::kret_2851_d7: 	goto ret_2851_d7;
        case m2c::kseg024_proc: 	goto seg024_proc;
        case m2c::ksub_36af4: 	goto sub_36af4;
        case m2c::ksub_36b22: 	goto sub_36b22;
        case m2c::ksub_36bce: 	goto sub_36bce;
        case m2c::ksub_36be7: 	goto sub_36be7;
        case m2c::ksub_36c43: 	goto sub_36c43;
        case m2c::ksub_36cef: 	goto sub_36cef;
        case m2c::ksub_36d11: 	goto sub_36d11;
        case m2c::ksub_36d37: 	goto sub_36d37;
        case m2c::ksub_36d4a: 	goto sub_36d4a;
        case m2c::ksub_36d61: 	goto sub_36d61;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, _source);m2c::stackDump(_state); abort();
    };
}

