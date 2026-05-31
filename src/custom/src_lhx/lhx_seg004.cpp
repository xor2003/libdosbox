/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group4:
    _begin:
sub_2d9cc:
	// 66476 
#undef var_240
#define var_240 -0x240
	// 66478 var_240         = word ptr -240h ;~ 1F3E:000C
#undef var_23e
#define var_23e -0x23E
	// 66479 var_23E         = word ptr -23Eh ;~ 1F3E:000C
#undef var_23c
#define var_23c -0x23C
	// 66480 var_23C         = word ptr -23Ch ;~ 1F3E:000C
#undef var_23a
#define var_23a -0x23A
	// 66481 var_23A         = word ptr -23Ah ;~ 1F3E:000C
#undef var_238
#define var_238 -0x238
	// 66482 var_238         = word ptr -238h ;~ 1F3E:000C
#undef var_234
#define var_234 -0x234
	// 66483 var_234         = byte ptr -234h ;~ 1F3E:000C
#undef var_230
#define var_230 -0x230
	// 66484 var_230         = word ptr -230h ;~ 1F3E:000C
#undef var_22e
#define var_22e -0x22E
	// 66485 var_22E         = byte ptr -22Eh ;~ 1F3E:000C
#undef var_21a
#define var_21a -0x21A
	// 66486 var_21A         = word ptr -21Ah ;~ 1F3E:000C
#undef var_218
#define var_218 -0x218
	// 66487 var_218         = word ptr -218h ;~ 1F3E:000C
#undef var_214
#define var_214 -0x214
	// 66488 var_214         = word ptr -214h ;~ 1F3E:000C
#undef var_10
#define var_10 -0x10
	// 66489 var_10          = dword ptr -10h ;~ 1F3E:000C
#undef var_c
#define var_c -0x0C
	// 66490 var_C           = byte ptr -0Ch ;~ 1F3E:000C
#undef var_a
#define var_a -0x0A
	// 66491 var_A           = word ptr -0Ah ;~ 1F3E:000C
#undef var_8
#define var_8 -8
	// 66492 var_8           = dword ptr -8 ;~ 1F3E:000C
#undef var_4
#define var_4 -4
	// 66493 var_4           = dword ptr -4 ;~ 1F3E:000C
cs=0x1f3e;eip=0x00000c; 	X(PUSH(bp));	// 66495 push    bp ;~ 1F3E:000C
cs=0x1f3e;eip=0x00000d; 	T(MOV(bp, sp));	// 66496 mov     bp, sp ;~ 1F3E:000D
cs=0x1f3e;eip=0x00000f; 	T(SUB(sp, 0x240));	// 66497 sub     sp, 240h ;~ 1F3E:000F
cs=0x1f3e;eip=0x000013; 	X(PUSH(di));	// 66498 push    di ;~ 1F3E:0013
cs=0x1f3e;eip=0x000014; 	X(PUSH(si));	// 66499 push    si ;~ 1F3E:0014
cs=0x1f3e;eip=0x000015; 	X(PUSH(cs));	// 66500 push    cs ;~ 1F3E:0015
cs=0x1f3e;eip=0x000016; 	R(CALL(sub_2db40,0));	// 66501 call    near ptr sub_2DB40 ;~ 1F3E:0016
cs=0x1f3e;eip=0x000019; 	T(MOV(ax, 0x224));	// 66502 mov     ax, 224h ;~ 1F3E:0019
cs=0x1f3e;eip=0x00001c; 	X(PUSH(ax));	// 66503 push    ax ;~ 1F3E:001C
cs=0x1f3e;eip=0x00001d; 	T(ax = bp+var_a);	// 66504 lea     ax, [bp+var_A] ;~ 1F3E:001D
cs=0x1f3e;eip=0x000020; 	X(PUSH(ax));	// 66505 push    ax ;~ 1F3E:0020
cs=0x1f3e;eip=0x000021; 	R(CALLF(sub_31643,0));	// 66506 call    sub_31643 ;~ 1F3E:0021
cs=0x1f3e;eip=0x000026; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10))), ax));	// 66507 mov     word ptr [bp+var_10], ax ;~ 1F3E:0026
cs=0x1f3e;eip=0x000029; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10+2))), dx));	// 66508 mov     word ptr [bp+var_10+2], dx ;~ 1F3E:0029
cs=0x1f3e;eip=0x00002c; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_10))), 0x0D));	// 66509 add     word ptr [bp+var_10], 0Dh ;~ 1F3E:002C
cs=0x1f3e;eip=0x000030; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_10))));	// 66510 les     bx, [bp+var_10] ;~ 1F3E:0030
cs=0x1f3e;eip=0x000033; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_10)))));	// 66511 inc     word ptr [bp+var_10] ;~ 1F3E:0033
cs=0x1f3e;eip=0x000036; 	T(CMP(*(raddr(es,bx)), 2));	// 66512 cmp     byte ptr es:[bx], 2 ;~ 1F3E:0036
cs=0x1f3e;eip=0x00003a; 	R(JZ(loc_2da12));	// 66513 jz      short loc_2DA12 ;~ 1F3E:003A
loc_2d9fc:
	// 8720 
cs=0x1f3e;eip=0x00003c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_10+2)))));	// 66517 push    word ptr [bp+var_10+2] ;~ 1F3E:003C
cs=0x1f3e;eip=0x00003f; 	R(CALLF(sub_2397c,0));	// 66518 call    sub_2397C ;~ 1F3E:003F
cs=0x1f3e;eip=0x000044; 	X(PUSH(*(dw*)(raddr(ss,bp+var_214))));	// 66519 push    [bp+var_214] ;~ 1F3E:0044
cs=0x1f3e;eip=0x000048; 	R(CALLF(sub_2397c,0));	// 66520 call    sub_2397C ;~ 1F3E:0048
cs=0x1f3e;eip=0x00004d; 	T(SUB(ax, ax));	// 66521 sub     ax, ax ;~ 1F3E:004D
cs=0x1f3e;eip=0x00004f; 	R(JMP(loc_2db3a));	// 66522 jmp     loc_2DB3A ;~ 1F3E:004F
loc_2da12:
	// 8721 
cs=0x1f3e;eip=0x000052; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_10+2)))));	// 66526 push    word ptr [bp+var_10+2] ;~ 1F3E:0052
cs=0x1f3e;eip=0x000055; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_10)))));	// 66527 push    word ptr [bp+var_10] ;~ 1F3E:0055
cs=0x1f3e;eip=0x000058; 	T(ax = bp+var_22e);	// 66528 lea     ax, [bp+var_22E] ;~ 1F3E:0058
cs=0x1f3e;eip=0x00005c; 	X(PUSH(ss));	// 66529 push    ss ;~ 1F3E:005C
cs=0x1f3e;eip=0x00005d; 	X(PUSH(ax));	// 66530 push    ax ;~ 1F3E:005D
cs=0x1f3e;eip=0x00005e; 	T(MOV(ax, 0x21E));	// 66531 mov     ax, 21Eh ;~ 1F3E:005E
cs=0x1f3e;eip=0x000061; 	X(PUSH(ax));	// 66532 push    ax ;~ 1F3E:0061
cs=0x1f3e;eip=0x000062; 	R(CALLF(sub_210f1,0));	// 66533 call    sub_210F1 ;~ 1F3E:0062
cs=0x1f3e;eip=0x000067; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_10))), 0x21E));	// 66534 add     word ptr [bp+var_10], 21Eh ;~ 1F3E:0067
cs=0x1f3e;eip=0x00006c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_21a))));	// 66535 mov     ax, [bp+var_21A] ;~ 1F3E:006C
cs=0x1f3e;eip=0x000070; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_218))));	// 66536 imul    [bp+var_218] ;~ 1F3E:0070
cs=0x1f3e;eip=0x000074; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 66537 mov     [bp+var_A], ax ;~ 1F3E:0074
cs=0x1f3e;eip=0x000077; 	X(PUSH(ax));	// 66538 push    ax ;~ 1F3E:0077
cs=0x1f3e;eip=0x000078; 	R(CALLF(sub_23961,0));	// 66539 call    sub_23961 ;~ 1F3E:0078
cs=0x1f3e;eip=0x00007d; 	X(MOV(*(dw*)(raddr(ss,bp+var_214)), ax));	// 66540 mov     [bp+var_214], ax ;~ 1F3E:007D
cs=0x1f3e;eip=0x000081; 	T(OR(ax, ax));	// 66541 or      ax, ax ;~ 1F3E:0081
cs=0x1f3e;eip=0x000083; 	R(JZ(loc_2d9fc));	// 66542 jz      short loc_2D9FC ;~ 1F3E:0083
cs=0x1f3e;eip=0x000085; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_10+2)))));	// 66543 push    word ptr [bp+var_10+2] ;~ 1F3E:0085
cs=0x1f3e;eip=0x000088; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_10)))));	// 66544 push    word ptr [bp+var_10] ;~ 1F3E:0088
cs=0x1f3e;eip=0x00008b; 	T(MOV(dx, ax));	// 66545 mov     dx, ax ;~ 1F3E:008B
cs=0x1f3e;eip=0x00008d; 	T(SUB(ax, ax));	// 66546 sub     ax, ax ;~ 1F3E:008D
cs=0x1f3e;eip=0x00008f; 	X(PUSH(dx));	// 66547 push    dx ;~ 1F3E:008F
cs=0x1f3e;eip=0x000090; 	X(PUSH(ax));	// 66548 push    ax ;~ 1F3E:0090
cs=0x1f3e;eip=0x000091; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 66549 push    [bp+var_A] ;~ 1F3E:0091
cs=0x1f3e;eip=0x000094; 	R(CALLF(sub_210f1,0));	// 66550 call    sub_210F1 ;~ 1F3E:0094
cs=0x1f3e;eip=0x000099; 	T(MOV(ax, 0x27C));	// 66551 mov     ax, 27Ch ;~ 1F3E:0099
cs=0x1f3e;eip=0x00009c; 	X(PUSH(ax));	// 66552 push    ax ;~ 1F3E:009C
cs=0x1f3e;eip=0x00009d; 	R(CALLF(sub_23961,0));	// 66553 call    sub_23961 ;~ 1F3E:009D
cs=0x1f3e;eip=0x0000a2; 	X(MOV(*(dw*)((&unk_47bdc)), ax));	// 66554 mov     word ptr unk_47BDC, ax ;~ 1F3E:00A2
cs=0x1f3e;eip=0x0000a5; 	T(OR(ax, ax));	// 66555 or      ax, ax ;~ 1F3E:00A5
cs=0x1f3e;eip=0x0000a7; 	R(JZ(loc_2d9fc));	// 66556 jz      short loc_2D9FC ;~ 1F3E:00A7
cs=0x1f3e;eip=0x0000a9; 	X(MOV(*(raddr(ss,bp+var_c)), 0x16));	// 66557 mov     [bp+var_C], 16h ;~ 1F3E:00A9
cs=0x1f3e;eip=0x0000ad; 	X(MOV(*(dw*)(raddr(ss,bp+var_230)), 6));	// 66558 mov     [bp+var_230], 6 ;~ 1F3E:00AD
cs=0x1f3e;eip=0x0000b3; 	T(MOV(dx, ax));	// 66559 mov     dx, ax ;~ 1F3E:00B3
cs=0x1f3e;eip=0x0000b5; 	T(SUB(ax, ax));	// 66560 sub     ax, ax ;~ 1F3E:00B5
cs=0x1f3e;eip=0x0000b7; 	X(MOV(*(dw*)(raddr(ss,bp+var_23a)), ax));	// 66561 mov     [bp+var_23A], ax ;~ 1F3E:00B7
cs=0x1f3e;eip=0x0000bb; 	X(MOV(*(dw*)(raddr(ss,bp+var_238)), dx));	// 66562 mov     [bp+var_238], dx ;~ 1F3E:00BB
cs=0x1f3e;eip=0x0000bf; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_214))));	// 66563 mov     dx, [bp+var_214] ;~ 1F3E:00BF
cs=0x1f3e;eip=0x0000c3; 	X(MOV(*(dw*)(raddr(ss,bp+var_23e)), ax));	// 66564 mov     [bp+var_23E], ax ;~ 1F3E:00C3
cs=0x1f3e;eip=0x0000c7; 	X(MOV(*(dw*)(raddr(ss,bp+var_23c)), dx));	// 66565 mov     [bp+var_23C], dx ;~ 1F3E:00C7
cs=0x1f3e;eip=0x0000cb; 	X(MOV(*(dw*)(raddr(ss,bp+var_240)), ax));	// 66566 mov     [bp+var_240], ax ;~ 1F3E:00CB
loc_2da8f:
	// 8722 
cs=0x1f3e;eip=0x0000cf; 	T(MOV(al, *(raddr(ss,bp+var_c))));	// 66569 mov     al, [bp+var_C] ;~ 1F3E:00CF
cs=0x1f3e;eip=0x0000d2; 	T(SUB(ah, ah));	// 66570 sub     ah, ah ;~ 1F3E:00D2
cs=0x1f3e;eip=0x0000d4; 	T(SHR(ax, 1));	// 66571 shr     ax, 1 ;~ 1F3E:00D4
cs=0x1f3e;eip=0x0000d6; 	T(OR(ax, *(dw*)(raddr(ss,bp+var_23e))));	// 66572 or      ax, [bp+var_23E] ;~ 1F3E:00D6
cs=0x1f3e;eip=0x0000da; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_23c))));	// 66573 mov     dx, [bp+var_23C] ;~ 1F3E:00DA
cs=0x1f3e;eip=0x0000de; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8))), ax));	// 66574 mov     word ptr [bp+var_8], ax ;~ 1F3E:00DE
cs=0x1f3e;eip=0x0000e1; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8+2))), dx));	// 66575 mov     word ptr [bp+var_8+2], dx ;~ 1F3E:00E1
cs=0x1f3e;eip=0x0000e4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_240))));	// 66576 mov     ax, [bp+var_240] ;~ 1F3E:00E4
cs=0x1f3e;eip=0x0000e8; 	T(OR(ax, *(dw*)(raddr(ss,bp+var_23a))));	// 66577 or      ax, [bp+var_23A] ;~ 1F3E:00E8
cs=0x1f3e;eip=0x0000ec; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_238))));	// 66578 mov     dx, [bp+var_238] ;~ 1F3E:00EC
cs=0x1f3e;eip=0x0000f0; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 66579 mov     word ptr [bp+var_4], ax ;~ 1F3E:00F0
cs=0x1f3e;eip=0x0000f3; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 66580 mov     word ptr [bp+var_4+2], dx ;~ 1F3E:00F3
cs=0x1f3e;eip=0x0000f6; 	T(MOV(si, 6));	// 66581 mov     si, 6 ;~ 1F3E:00F6
cs=0x1f3e;eip=0x0000f9; 	T(MOV(di, *(dw*)((&byte_47b2e))));	// 66582 mov     di, word ptr byte_47B2E ;~ 1F3E:00F9
loc_2dabd:
	// 8723 
cs=0x1f3e;eip=0x0000fd; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 66585 les     bx, [bp+var_8] ;~ 1F3E:00FD
cs=0x1f3e;eip=0x000100; 	T(MOV(al, *(raddr(es,bx))));	// 66586 mov     al, es:[bx] ;~ 1F3E:0100
cs=0x1f3e;eip=0x000103; 	X(MOV(*(raddr(ss,bp+var_234)), al));	// 66587 mov     [bp+var_234], al ;~ 1F3E:0103
cs=0x1f3e;eip=0x000107; 	T(OR(di, di));	// 66588 or      di, di ;~ 1F3E:0107
cs=0x1f3e;eip=0x000109; 	R(JNZ(loc_2daed));	// 66589 jnz     short loc_2DAED ;~ 1F3E:0109
cs=0x1f3e;eip=0x00010b; 	T(TEST(*(raddr(ss,bp+var_c)), 1));	// 66590 test    [bp+var_C], 1 ;~ 1F3E:010B
cs=0x1f3e;eip=0x00010f; 	R(JZ(loc_2dad8));	// 66591 jz      short loc_2DAD8 ;~ 1F3E:010F
cs=0x1f3e;eip=0x000111; 	X(AND(*(raddr(ss,bp+var_234)), 0x0F));	// 66592 and     [bp+var_234], 0Fh ;~ 1F3E:0111
cs=0x1f3e;eip=0x000116; 	R(JMP(loc_2dade));	// 66593 jmp     short loc_2DADE ;~ 1F3E:0116
loc_2dad8:
	// 8724 
cs=0x1f3e;eip=0x000118; 	T(MOV(cl, 4));	// 66597 mov     cl, 4 ;~ 1F3E:0118
cs=0x1f3e;eip=0x00011a; 	X(SHR(*(raddr(ss,bp+var_234)), cl));	// 66598 shr     [bp+var_234], cl ;~ 1F3E:011A
loc_2dade:
	// 8725 
cs=0x1f3e;eip=0x00011e; 	T(MOV(bl, *(raddr(ss,bp+var_234))));	// 66601 mov     bl, [bp+var_234] ;~ 1F3E:011E
cs=0x1f3e;eip=0x000122; 	T(SUB(bh, bh));	// 66602 sub     bh, bh ;~ 1F3E:0122
cs=0x1f3e;eip=0x000124; 	T(MOV(al, *(raddr(ds,bx+0x18C))));	// 66603 mov     al, [bx+18Ch] ;~ 1F3E:0124
cs=0x1f3e;eip=0x000128; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 66604 les     bx, [bp+var_4] ;~ 1F3E:0128
cs=0x1f3e;eip=0x00012b; 	R(JMP(loc_2db05));	// 66605 jmp     short loc_2DB05 ;~ 1F3E:012B
loc_2daed:
	// 8726 
cs=0x1f3e;eip=0x00012d; 	T(TEST(*(raddr(ss,bp+var_c)), 1));	// 66609 test    [bp+var_C], 1 ;~ 1F3E:012D
cs=0x1f3e;eip=0x000131; 	R(JNZ(loc_2daf9));	// 66610 jnz     short loc_2DAF9 ;~ 1F3E:0131
cs=0x1f3e;eip=0x000133; 	T(MOV(cl, 4));	// 66611 mov     cl, 4 ;~ 1F3E:0133
cs=0x1f3e;eip=0x000135; 	X(SHR(*(raddr(ss,bp+var_234)), cl));	// 66612 shr     [bp+var_234], cl ;~ 1F3E:0135
loc_2daf9:
	// 8727 
cs=0x1f3e;eip=0x000139; 	X(AND(*(raddr(ss,bp+var_234)), 0x0F));	// 66615 and     [bp+var_234], 0Fh ;~ 1F3E:0139
cs=0x1f3e;eip=0x00013e; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 66616 les     bx, [bp+var_4] ;~ 1F3E:013E
cs=0x1f3e;eip=0x000141; 	T(MOV(al, *(raddr(ss,bp+var_234))));	// 66617 mov     al, [bp+var_234] ;~ 1F3E:0141
loc_2db05:
	// 8728 
cs=0x1f3e;eip=0x000145; 	X(MOV(*(raddr(es,bx)), al));	// 66620 mov     es:[bx], al ;~ 1F3E:0145
cs=0x1f3e;eip=0x000148; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 66621 inc     word ptr [bp+var_4] ;~ 1F3E:0148
cs=0x1f3e;eip=0x00014b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_21a))));	// 66622 mov     ax, [bp+var_21A] ;~ 1F3E:014B
cs=0x1f3e;eip=0x00014f; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_8))), ax));	// 66623 add     word ptr [bp+var_8], ax ;~ 1F3E:014F
cs=0x1f3e;eip=0x000152; 	T(DEC(si));	// 66624 dec     si ;~ 1F3E:0152
cs=0x1f3e;eip=0x000153; 	R(JNZ(loc_2dabd));	// 66625 jnz     short loc_2DABD ;~ 1F3E:0153
cs=0x1f3e;eip=0x000155; 	X(ADD(*(dw*)(raddr(ss,bp+var_240)), 6));	// 66626 add     [bp+var_240], 6 ;~ 1F3E:0155
cs=0x1f3e;eip=0x00015a; 	X(INC(*(raddr(ss,bp+var_c))));	// 66627 inc     [bp+var_C] ;~ 1F3E:015A
cs=0x1f3e;eip=0x00015d; 	T(CMP(*(raddr(ss,bp+var_c)), 0x7F));	// 66628 cmp     [bp+var_C], 7Fh ;~ 1F3E:015D
cs=0x1f3e;eip=0x000161; 	R(JA(loc_2db26));	// 66629 ja      short loc_2DB26 ;~ 1F3E:0161
cs=0x1f3e;eip=0x000163; 	R(JMP(loc_2da8f));	// 66630 jmp     loc_2DA8F ;~ 1F3E:0163
loc_2db26:
	// 8729 
cs=0x1f3e;eip=0x000166; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_10+2)))));	// 66634 push    word ptr [bp+var_10+2] ;~ 1F3E:0166
cs=0x1f3e;eip=0x000169; 	R(CALLF(sub_2397c,0));	// 66635 call    sub_2397C ;~ 1F3E:0169
cs=0x1f3e;eip=0x00016e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_214))));	// 66636 push    [bp+var_214] ;~ 1F3E:016E
cs=0x1f3e;eip=0x000172; 	R(CALLF(sub_2397c,0));	// 66637 call    sub_2397C ;~ 1F3E:0172
cs=0x1f3e;eip=0x000177; 	T(MOV(ax, 1));	// 66638 mov     ax, 1 ;~ 1F3E:0177
loc_2db3a:
	// 8730 
cs=0x1f3e;eip=0x00017a; 	X(POP(si));	// 66641 pop     si ;~ 1F3E:017A
cs=0x1f3e;eip=0x00017b; 	X(POP(di));	// 66642 pop     di ;~ 1F3E:017B
cs=0x1f3e;eip=0x00017c; 	T(MOV(sp, bp));	// 66643 mov     sp, bp ;~ 1F3E:017C
cs=0x1f3e;eip=0x00017e; 	X(POP(bp));	// 66644 pop     bp ;~ 1F3E:017E
cs=0x1f3e;eip=0x00017f; 	R(RETF(0));	// 66645 retf ;~ 1F3E:017F
sub_2db40:
	// 66652 
cs=0x1f3e;eip=0x000180; 	X(PUSH(*(dw*)((&unk_47bdc))));	// 66654 push    word ptr unk_47BDC ;~ 1F3E:0180
cs=0x1f3e;eip=0x000184; 	R(CALLF(sub_2397c,0));	// 66655 call    sub_2397C ;~ 1F3E:0184
cs=0x1f3e;eip=0x000189; 	X(MOV(*(dw*)((&unk_47bdc)), 0));	// 66656 mov     word ptr unk_47BDC, 0 ;~ 1F3E:0189
cs=0x1f3e;eip=0x00018f; 	R(RETF(0));	// 66657 retf ;~ 1F3E:018F
sub_2db50:
	// 66665 
#undef arg_0
#define arg_0 6
	// 66668 arg_0           = word ptr  6 ;~ 1F3E:0190
#undef arg_2
#define arg_2 8
	// 66669 arg_2           = word ptr  8 ;~ 1F3E:0190
cs=0x1f3e;eip=0x000190; 	X(PUSH(bp));	// 66671 push    bp ;~ 1F3E:0190
cs=0x1f3e;eip=0x000191; 	T(MOV(bp, sp));	// 66672 mov     bp, sp ;~ 1F3E:0191
cs=0x1f3e;eip=0x000193; 	X(PUSH(di));	// 66673 push    di ;~ 1F3E:0193
cs=0x1f3e;eip=0x000194; 	X(PUSH(si));	// 66674 push    si ;~ 1F3E:0194
cs=0x1f3e;eip=0x000195; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 66675 mov     si, [bp+arg_2] ;~ 1F3E:0195
cs=0x1f3e;eip=0x000198; 	X(PUSH(si));	// 66676 push    si ;~ 1F3E:0198
cs=0x1f3e;eip=0x000199; 	T(MOV(ax, *(dw*)((&unk_56502))));	// 66677 mov     ax, word ptr unk_56502 ;~ 1F3E:0199
cs=0x1f3e;eip=0x00019c; 	T(MOV(dx, ax));	// 66678 mov     dx, ax ;~ 1F3E:019C
cs=0x1f3e;eip=0x00019e; 	T(MOV(di, si));	// 66679 mov     di, si ;~ 1F3E:019E
cs=0x1f3e;eip=0x0001a0; 	T(MOV(ax, ds));	// 66680 mov     ax, ds ;~ 1F3E:01A0
cs=0x1f3e;eip=0x0001a2; 	T(MOV(es, ax));	// 66681 mov     es, ax ;~ 1F3E:01A2
cs=0x1f3e;eip=0x0001a4; 	T(MOV(cx, 0x0FFFF));	// 66683 mov     cx, 0FFFFh ;~ 1F3E:01A4
cs=0x1f3e;eip=0x0001a7; 	T(XOR(ax, ax));	// 66684 xor     ax, ax ;~ 1F3E:01A7
	// 66685 repne scasb ;~ 1F3E:01A9
cs=0x1f3e;eip=0x0001a9; 	T(	REPNE SCASB);	// 66685 repne scasb ;~ 1F3E:01A9
cs=0x1f3e;eip=0x0001ab; 	T(NOT(cx));	// 66686 not     cx ;~ 1F3E:01AB
cs=0x1f3e;eip=0x0001ad; 	T(DEC(cx));	// 66687 dec     cx ;~ 1F3E:01AD
cs=0x1f3e;eip=0x0001ae; 	T(SHL(cx, 1));	// 66688 shl     cx, 1 ;~ 1F3E:01AE
cs=0x1f3e;eip=0x0001b0; 	T(SUB(dx, cx));	// 66689 sub     dx, cx ;~ 1F3E:01B0
cs=0x1f3e;eip=0x0001b2; 	T(INC(dx));	// 66690 inc     dx ;~ 1F3E:01B2
cs=0x1f3e;eip=0x0001b3; 	T(AND(dl, 0x0FC));	// 66691 and     dl, 0FCh ;~ 1F3E:01B3
cs=0x1f3e;eip=0x0001b6; 	X(PUSH(dx));	// 66692 push    dx ;~ 1F3E:01B6
cs=0x1f3e;eip=0x0001b7; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 66693 push    [bp+arg_0] ;~ 1F3E:01B7
cs=0x1f3e;eip=0x0001ba; 	R(CALLF(sub_2de1a,0));	// 66694 call    sub_2DE1A ;~ 1F3E:01BA
cs=0x1f3e;eip=0x0001bf; 	X(POP(si));	// 66695 pop     si ;~ 1F3E:01BF
cs=0x1f3e;eip=0x0001c0; 	X(POP(di));	// 66696 pop     di ;~ 1F3E:01C0
cs=0x1f3e;eip=0x0001c1; 	X(POP(bp));	// 66697 pop     bp ;~ 1F3E:01C1
cs=0x1f3e;eip=0x0001c2; 	R(RETF(4));	// 66698 retf    4 ;~ 1F3E:01C2
nullsub_10:
	// 66705 
cs=0x1f3e;eip=0x0001c5; 	R(RETF(0));	// 66706 retf ;~ 1F3E:01C5
nullsub_11:
	// 66713 
cs=0x1f3e;eip=0x0001c6; 	R(RETF(0));	// 66714 retf ;~ 1F3E:01C6
sub_2db87:
	// 66722 
#undef arg_0
#define arg_0 6
	// 66725 arg_0           = word ptr  6 ;~ 1F3E:01C7
#undef arg_2
#define arg_2 8
	// 66726 arg_2           = word ptr  8 ;~ 1F3E:01C7
cs=0x1f3e;eip=0x0001c7; 	X(PUSH(bp));	// 66728 push    bp ;~ 1F3E:01C7
cs=0x1f3e;eip=0x0001c8; 	T(MOV(bp, sp));	// 66729 mov     bp, sp ;~ 1F3E:01C8
cs=0x1f3e;eip=0x0001ca; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 66730 mov     ax, [bp+arg_0] ;~ 1F3E:01CA
cs=0x1f3e;eip=0x0001cd; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 66731 mov     dx, [bp+arg_2] ;~ 1F3E:01CD
cs=0x1f3e;eip=0x0001d0; 	X(MOV(*(dw*)((&unk_5688e)), ax));	// 66732 mov     word ptr unk_5688E, ax ;~ 1F3E:01D0
cs=0x1f3e;eip=0x0001d3; 	X(MOV(*(dw*)((&unk_56890)), dx));	// 66733 mov     word ptr unk_56890, dx ;~ 1F3E:01D3
cs=0x1f3e;eip=0x0001d7; 	X(POP(bp));	// 66734 pop     bp ;~ 1F3E:01D7
cs=0x1f3e;eip=0x0001d8; 	R(RETF(4));	// 66735 retf    4 ;~ 1F3E:01D8
seg004_proc:
	// 66739 
cs=0x1f3e;eip=0x0001db; 	T(MOV(ax, *(dw*)((&unk_5688e))));	// 66739 mov     ax, word ptr unk_5688E ;~ 1F3E:01DB
cs=0x1f3e;eip=0x0001de; 	T(MOV(dx, *(dw*)((&unk_56890))));	// 66740 mov     dx, word ptr unk_56890 ;~ 1F3E:01DE
cs=0x1f3e;eip=0x0001e2; 	R(RETF(0));	// 66741 retf ;~ 1F3E:01E2
cs=0x1f3e;eip=0x000362; 	X(PUSH(bp));	// 66984 push    bp ;~ 1F3E:0362
cs=0x1f3e;eip=0x000363; 	T(MOV(bp, sp));	// 66985 mov     bp, sp ;~ 1F3E:0363
cs=0x1f3e;eip=0x000365; 	T(SUB(sp, 4));	// 66986 sub     sp, 4 ;~ 1F3E:0365
cs=0x1f3e;eip=0x000368; 	X(PUSH(di));	// 66987 push    di ;~ 1F3E:0368
cs=0x1f3e;eip=0x000369; 	X(PUSH(si));	// 66988 push    si ;~ 1F3E:0369
cs=0x1f3e;eip=0x00036a; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 66989 mov     di, [bp+8] ;~ 1F3E:036A
cs=0x1f3e;eip=0x00036d; 	T(MOV(si, *(dw*)(raddr(ss,bp-4))));	// 66990 mov     si, [bp-4] ;~ 1F3E:036D
cs=0x1f3e;eip=0x000370; 	R(JMP(loc_2dd4d));	// 66991 jmp     short loc_2DD4D ;~ 1F3E:0370
loc_2dd32:
	// 8739 
cs=0x1f3e;eip=0x000372; 	T(MOV(al, *(raddr(ss,bp-2))));	// 66995 mov     al, [bp-2] ;~ 1F3E:0372
cs=0x1f3e;eip=0x000375; 	T(SUB(ah, ah));	// 66996 sub     ah, ah ;~ 1F3E:0375
cs=0x1f3e;eip=0x000377; 	T(MOV(si, ax));	// 66997 mov     si, ax ;~ 1F3E:0377
cs=0x1f3e;eip=0x000379; 	X(PUSH(*(dw*)(raddr(ss,bp+6))));	// 66998 push    word ptr [bp+6] ;~ 1F3E:0379
cs=0x1f3e;eip=0x00037c; 	X(PUSH(di));	// 66999 push    di ;~ 1F3E:037C
cs=0x1f3e;eip=0x00037d; 	X(PUSH(si));	// 67000 push    si ;~ 1F3E:037D
cs=0x1f3e;eip=0x00037e; 	R(CALLF(sub_2e4b0,0));	// 67001 call    sub_2E4B0 ;~ 1F3E:037E
cs=0x1f3e;eip=0x000383; 	T(ADD(sp, 6));	// 67002 add     sp, 6 ;~ 1F3E:0383
cs=0x1f3e;eip=0x000386; 	X(PUSH(si));	// 67003 push    si ;~ 1F3E:0386
cs=0x1f3e;eip=0x000387; 	X(PUSH(cs));	// 67004 push    cs ;~ 1F3E:0387
cs=0x1f3e;eip=0x000388; 	R(CALL(sub_2dc86,0));	// 67005 call    near ptr sub_2DC86 ;~ 1F3E:0388
cs=0x1f3e;eip=0x00038b; 	T(ADD(di, ax));	// 67006 add     di, ax ;~ 1F3E:038B
loc_2dd4d:
	// 8740 
cs=0x1f3e;eip=0x00038d; 	T(LES(bx, *(dw*)(raddr(ss,bp+0x0A))));	// 67009 les     bx, [bp+0Ah] ;~ 1F3E:038D
cs=0x1f3e;eip=0x000390; 	X(INC(*(dw*)(raddr(ss,bp+0x0A))));	// 67010 inc     word ptr [bp+0Ah] ;~ 1F3E:0390
cs=0x1f3e;eip=0x000393; 	T(MOV(al, *(raddr(es,bx))));	// 67011 mov     al, es:[bx] ;~ 1F3E:0393
cs=0x1f3e;eip=0x000396; 	X(MOV(*(raddr(ss,bp-2)), al));	// 67012 mov     [bp-2], al ;~ 1F3E:0396
cs=0x1f3e;eip=0x000399; 	T(OR(al, al));	// 67013 or      al, al ;~ 1F3E:0399
cs=0x1f3e;eip=0x00039b; 	R(JNZ(loc_2dd32));	// 67014 jnz     short loc_2DD32 ;~ 1F3E:039B
cs=0x1f3e;eip=0x00039d; 	X(MOV(*(dw*)(raddr(ss,bp+8)), di));	// 67015 mov     [bp+8], di ;~ 1F3E:039D
cs=0x1f3e;eip=0x0003a0; 	X(POP(si));	// 67016 pop     si ;~ 1F3E:03A0
cs=0x1f3e;eip=0x0003a1; 	X(POP(di));	// 67017 pop     di ;~ 1F3E:03A1
cs=0x1f3e;eip=0x0003a2; 	T(MOV(sp, bp));	// 67018 mov     sp, bp ;~ 1F3E:03A2
cs=0x1f3e;eip=0x0003a4; 	X(POP(bp));	// 67019 pop     bp ;~ 1F3E:03A4
cs=0x1f3e;eip=0x0003a5; 	R(RETF(8));	// 67020 retf    8 ;~ 1F3E:03A5
sub_2dba3:
	// 66747 
#undef var_a
#define var_a -0x0A
	// 66750 var_A           = dword ptr -0Ah ;~ 1F3E:01E3
#undef var_6
#define var_6 -6
	// 66751 var_6           = dword ptr -6 ;~ 1F3E:01E3
#undef var_2
#define var_2 -2
	// 66752 var_2           = word ptr -2 ;~ 1F3E:01E3
#undef arg_0
#define arg_0 4
	// 66753 arg_0           = word ptr  4 ;~ 1F3E:01E3
cs=0x1f3e;eip=0x0001e3; 	X(PUSH(bp));	// 66755 push    bp ;~ 1F3E:01E3
cs=0x1f3e;eip=0x0001e4; 	T(MOV(bp, sp));	// 66756 mov     bp, sp ;~ 1F3E:01E4
cs=0x1f3e;eip=0x0001e6; 	T(SUB(sp, 0x0A));	// 66757 sub     sp, 0Ah ;~ 1F3E:01E6
cs=0x1f3e;eip=0x0001e9; 	T(SUB(ax, ax));	// 66758 sub     ax, ax ;~ 1F3E:01E9
cs=0x1f3e;eip=0x0001eb; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a+2))), ax));	// 66759 mov     word ptr [bp+var_A+2], ax ;~ 1F3E:01EB
cs=0x1f3e;eip=0x0001ee; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a))), ax));	// 66760 mov     word ptr [bp+var_A], ax ;~ 1F3E:01EE
cs=0x1f3e;eip=0x0001f1; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6+2))), ax));	// 66761 mov     word ptr [bp+var_6+2], ax ;~ 1F3E:01F1
cs=0x1f3e;eip=0x0001f4; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6))), ax));	// 66762 mov     word ptr [bp+var_6], ax ;~ 1F3E:01F4
cs=0x1f3e;eip=0x0001f7; 	T(MOV(ax, 0x21E));	// 66763 mov     ax, 21Eh ;~ 1F3E:01F7
cs=0x1f3e;eip=0x0001fa; 	X(PUSH(ax));	// 66764 push    ax ;~ 1F3E:01FA
cs=0x1f3e;eip=0x0001fb; 	R(CALLF(sub_23961,0));	// 66765 call    sub_23961 ;~ 1F3E:01FB
cs=0x1f3e;eip=0x000200; 	T(MOV(dx, ax));	// 66766 mov     dx, ax ;~ 1F3E:0200
cs=0x1f3e;eip=0x000202; 	T(SUB(ax, ax));	// 66767 sub     ax, ax ;~ 1F3E:0202
cs=0x1f3e;eip=0x000204; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a))), ax));	// 66768 mov     word ptr [bp+var_A], ax ;~ 1F3E:0204
cs=0x1f3e;eip=0x000207; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a+2))), dx));	// 66769 mov     word ptr [bp+var_A+2], dx ;~ 1F3E:0207
cs=0x1f3e;eip=0x00020a; 	T(CMP(dx, ax));	// 66770 cmp     dx, ax ;~ 1F3E:020A
cs=0x1f3e;eip=0x00020c; 	R(JNZ(loc_2dbe4));	// 66771 jnz     short loc_2DBE4 ;~ 1F3E:020C
loc_2dbce:
	// 8731 
cs=0x1f3e;eip=0x00020e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_6+2)))));	// 66775 push    word ptr [bp+var_6+2] ;~ 1F3E:020E
cs=0x1f3e;eip=0x000211; 	R(CALLF(sub_2397c,0));	// 66776 call    sub_2397C ;~ 1F3E:0211
cs=0x1f3e;eip=0x000216; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_a+2)))));	// 66777 push    word ptr [bp+var_A+2] ;~ 1F3E:0216
cs=0x1f3e;eip=0x000219; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_a)))));	// 66778 push    word ptr [bp+var_A] ;~ 1F3E:0219
cs=0x1f3e;eip=0x00021c; 	R(CALL(sub_2dc65,0));	// 66779 call    sub_2DC65 ;~ 1F3E:021C
cs=0x1f3e;eip=0x00021f; 	T(SUB(ax, ax));	// 66780 sub     ax, ax ;~ 1F3E:021F
cs=0x1f3e;eip=0x000221; 	T(CWD);	// 66781 cwd ;~ 1F3E:0221
cs=0x1f3e;eip=0x000222; 	R(JMP(loc_2dc5f));	// 66782 jmp     short loc_2DC5F ;~ 1F3E:0222
loc_2dbe4:
	// 8732 
cs=0x1f3e;eip=0x000224; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 66786 push    [bp+arg_0] ;~ 1F3E:0224
cs=0x1f3e;eip=0x000227; 	T(ax = bp+var_2);	// 66787 lea     ax, [bp+var_2] ;~ 1F3E:0227
cs=0x1f3e;eip=0x00022a; 	X(PUSH(ax));	// 66788 push    ax ;~ 1F3E:022A
cs=0x1f3e;eip=0x00022b; 	R(CALLF(sub_31643,0));	// 66789 call    sub_31643 ;~ 1F3E:022B
cs=0x1f3e;eip=0x000230; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6))), ax));	// 66790 mov     word ptr [bp+var_6], ax ;~ 1F3E:0230
cs=0x1f3e;eip=0x000233; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6+2))), dx));	// 66791 mov     word ptr [bp+var_6+2], dx ;~ 1F3E:0233
cs=0x1f3e;eip=0x000236; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_6))), 0x0D));	// 66792 add     word ptr [bp+var_6], 0Dh ;~ 1F3E:0236
cs=0x1f3e;eip=0x00023a; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_6))));	// 66793 les     bx, [bp+var_6] ;~ 1F3E:023A
cs=0x1f3e;eip=0x00023d; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_6)))));	// 66795 inc     word ptr [bp+var_6] ;~ 1F3E:023D
cs=0x1f3e;eip=0x000240; 	T(CMP(*(raddr(es,bx)), 2));	// 66796 cmp     byte ptr es:[bx], 2 ;~ 1F3E:0240
cs=0x1f3e;eip=0x000244; 	R(JNZ(loc_2dbce));	// 66797 jnz     short loc_2DBCE ;~ 1F3E:0244
cs=0x1f3e;eip=0x000246; 	X(PUSH(dx));	// 66798 push    dx ;~ 1F3E:0246
cs=0x1f3e;eip=0x000247; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_6)))));	// 66799 push    word ptr [bp+var_6] ;~ 1F3E:0247
cs=0x1f3e;eip=0x00024a; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_a+2)))));	// 66800 push    word ptr [bp+var_A+2] ;~ 1F3E:024A
cs=0x1f3e;eip=0x00024d; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_a)))));	// 66801 push    word ptr [bp+var_A] ;~ 1F3E:024D
cs=0x1f3e;eip=0x000250; 	T(MOV(ax, 0x21E));	// 66802 mov     ax, 21Eh ;~ 1F3E:0250
cs=0x1f3e;eip=0x000253; 	X(PUSH(ax));	// 66803 push    ax ;~ 1F3E:0253
cs=0x1f3e;eip=0x000254; 	R(CALLF(sub_210f1,0));	// 66804 call    sub_210F1 ;~ 1F3E:0254
cs=0x1f3e;eip=0x000259; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_6))), 0x21E));	// 66805 add     word ptr [bp+var_6], 21Eh ;~ 1F3E:0259
cs=0x1f3e;eip=0x00025e; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_a))));	// 66806 les     bx, [bp+var_A] ;~ 1F3E:025E
cs=0x1f3e;eip=0x000261; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x14))));	// 66807 mov     ax, es:[bx+14h] ;~ 1F3E:0261
cs=0x1f3e;eip=0x000265; 	X(IMUL1_2(*(dw*)(raddr(es,bx+0x16))));	// 66808 imul    word ptr es:[bx+16h] ;~ 1F3E:0265
cs=0x1f3e;eip=0x000269; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 66809 mov     [bp+var_2], ax ;~ 1F3E:0269
cs=0x1f3e;eip=0x00026c; 	X(PUSH(ax));	// 66810 push    ax ;~ 1F3E:026C
cs=0x1f3e;eip=0x00026d; 	R(CALLF(sub_23961,0));	// 66811 call    sub_23961 ;~ 1F3E:026D
cs=0x1f3e;eip=0x000272; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_a))));	// 66812 les     bx, [bp+var_A] ;~ 1F3E:0272
cs=0x1f3e;eip=0x000275; 	X(MOV(*(dw*)(raddr(es,bx+0x1A)), ax));	// 66813 mov     es:[bx+1Ah], ax ;~ 1F3E:0275
cs=0x1f3e;eip=0x000279; 	T(OR(ax, ax));	// 66814 or      ax, ax ;~ 1F3E:0279
cs=0x1f3e;eip=0x00027b; 	R(JZ(loc_2dbce));	// 66815 jz      short loc_2DBCE ;~ 1F3E:027B
cs=0x1f3e;eip=0x00027d; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_6+2)))));	// 66816 push    word ptr [bp+var_6+2] ;~ 1F3E:027D
cs=0x1f3e;eip=0x000280; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_6)))));	// 66817 push    word ptr [bp+var_6] ;~ 1F3E:0280
cs=0x1f3e;eip=0x000283; 	T(MOV(dx, ax));	// 66818 mov     dx, ax ;~ 1F3E:0283
cs=0x1f3e;eip=0x000285; 	T(SUB(ax, ax));	// 66819 sub     ax, ax ;~ 1F3E:0285
cs=0x1f3e;eip=0x000287; 	X(PUSH(dx));	// 66820 push    dx ;~ 1F3E:0287
cs=0x1f3e;eip=0x000288; 	X(PUSH(ax));	// 66821 push    ax ;~ 1F3E:0288
cs=0x1f3e;eip=0x000289; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 66822 push    [bp+var_2] ;~ 1F3E:0289
cs=0x1f3e;eip=0x00028c; 	R(CALLF(sub_210f1,0));	// 66823 call    sub_210F1 ;~ 1F3E:028C
cs=0x1f3e;eip=0x000291; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_6+2)))));	// 66824 push    word ptr [bp+var_6+2] ;~ 1F3E:0291
cs=0x1f3e;eip=0x000294; 	R(CALLF(sub_2397c,0));	// 66825 call    sub_2397C ;~ 1F3E:0294
cs=0x1f3e;eip=0x000299; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_a)))));	// 66826 mov     ax, word ptr [bp+var_A] ;~ 1F3E:0299
cs=0x1f3e;eip=0x00029c; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_a+2)))));	// 66827 mov     dx, word ptr [bp+var_A+2] ;~ 1F3E:029C
loc_2dc5f:
	// 8733 
cs=0x1f3e;eip=0x00029f; 	T(MOV(sp, bp));	// 66830 mov     sp, bp ;~ 1F3E:029F
cs=0x1f3e;eip=0x0002a1; 	X(POP(bp));	// 66831 pop     bp ;~ 1F3E:02A1
cs=0x1f3e;eip=0x0002a2; 	R(RETN(2));	// 66832 retn    2 ;~ 1F3E:02A2
sub_2dc65:
	// 66840 
#undef arg_2
#define arg_2 6
	// 66843 arg_2           = word ptr  6 ;~ 1F3E:02A5
cs=0x1f3e;eip=0x0002a5; 	X(PUSH(bp));	// 66845 push    bp ;~ 1F3E:02A5
cs=0x1f3e;eip=0x0002a6; 	T(MOV(bp, sp));	// 66846 mov     bp, sp ;~ 1F3E:02A6
cs=0x1f3e;eip=0x0002a8; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 66847 cmp     [bp+arg_2], 0 ;~ 1F3E:02A8
cs=0x1f3e;eip=0x0002ac; 	R(JZ(loc_2dc82));	// 66848 jz      short loc_2DC82 ;~ 1F3E:02AC
cs=0x1f3e;eip=0x0002ae; 	T(LES(bx, *(dw*)(raddr(ss,bp+4))));	// 66849 les     bx, [bp+4] ;~ 1F3E:02AE
cs=0x1f3e;eip=0x0002b1; 	X(PUSH(*(dw*)(raddr(es,bx+0x1A))));	// 66850 push    word ptr es:[bx+1Ah] ;~ 1F3E:02B1
cs=0x1f3e;eip=0x0002b5; 	R(CALLF(sub_2397c,0));	// 66851 call    sub_2397C ;~ 1F3E:02B5
cs=0x1f3e;eip=0x0002ba; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 66852 push    [bp+arg_2] ;~ 1F3E:02BA
cs=0x1f3e;eip=0x0002bd; 	R(CALLF(sub_2397c,0));	// 66853 call    sub_2397C ;~ 1F3E:02BD
loc_2dc82:
	// 8734 
cs=0x1f3e;eip=0x0002c2; 	X(POP(bp));	// 66856 pop     bp ;~ 1F3E:02C2
cs=0x1f3e;eip=0x0002c3; 	R(RETN(4));	// 66857 retn    4 ;~ 1F3E:02C3
sub_2dc86:
	// 66865 
#undef var_4
#define var_4 -4
	// 66868 var_4           = dword ptr -4 ;~ 1F3E:02C6
#undef arg_0
#define arg_0 6
	// 66869 arg_0           = byte ptr  6 ;~ 1F3E:02C6
cs=0x1f3e;eip=0x0002c6; 	X(PUSH(bp));	// 66871 push    bp ;~ 1F3E:02C6
cs=0x1f3e;eip=0x0002c7; 	T(MOV(bp, sp));	// 66872 mov     bp, sp ;~ 1F3E:02C7
cs=0x1f3e;eip=0x0002c9; 	T(SUB(sp, 4));	// 66873 sub     sp, 4 ;~ 1F3E:02C9
cs=0x1f3e;eip=0x0002cc; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 66874 mov     al, [bp+arg_0] ;~ 1F3E:02CC
cs=0x1f3e;eip=0x0002cf; 	T(SUB(ah, ah));	// 66875 sub     ah, ah ;~ 1F3E:02CF
cs=0x1f3e;eip=0x0002d1; 	T(SHL(ax, 1));	// 66876 shl     ax, 1 ;~ 1F3E:02D1
cs=0x1f3e;eip=0x0002d3; 	T(ADD(ax, *(dw*)((&unk_5688e))));	// 66877 add     ax, word ptr unk_5688E ;~ 1F3E:02D3
cs=0x1f3e;eip=0x0002d7; 	T(MOV(dx, *(dw*)((&unk_56890))));	// 66878 mov     dx, word ptr unk_56890 ;~ 1F3E:02D7
cs=0x1f3e;eip=0x0002db; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 66879 mov     word ptr [bp+var_4], ax ;~ 1F3E:02DB
cs=0x1f3e;eip=0x0002de; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 66880 mov     word ptr [bp+var_4+2], dx ;~ 1F3E:02DE
cs=0x1f3e;eip=0x0002e1; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 66881 les     bx, [bp+var_4] ;~ 1F3E:02E1
cs=0x1f3e;eip=0x0002e4; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1E))));	// 66882 mov     ax, es:[bx+1Eh] ;~ 1F3E:02E4
cs=0x1f3e;eip=0x0002e8; 	T(SUB(ax, *(dw*)(raddr(es,bx+0x1C))));	// 66883 sub     ax, es:[bx+1Ch] ;~ 1F3E:02E8
cs=0x1f3e;eip=0x0002ec; 	T(MOV(sp, bp));	// 66884 mov     sp, bp ;~ 1F3E:02EC
cs=0x1f3e;eip=0x0002ee; 	X(POP(bp));	// 66885 pop     bp ;~ 1F3E:02EE
cs=0x1f3e;eip=0x0002ef; 	R(RETF(2));	// 66886 retf    2 ;~ 1F3E:02EF
sub_2dcb2:
	// 66894 
#undef var_2
#define var_2 -2
	// 66897 var_2           = byte ptr -2 ;~ 1F3E:02F2
#undef arg_0
#define arg_0 6
	// 66898 arg_0           = word ptr  6 ;~ 1F3E:02F2
cs=0x1f3e;eip=0x0002f2; 	X(PUSH(bp));	// 66900 push    bp ;~ 1F3E:02F2
cs=0x1f3e;eip=0x0002f3; 	T(MOV(bp, sp));	// 66901 mov     bp, sp ;~ 1F3E:02F3
cs=0x1f3e;eip=0x0002f5; 	T(SUB(sp, 4));	// 66902 sub     sp, 4 ;~ 1F3E:02F5
cs=0x1f3e;eip=0x0002f8; 	X(PUSH(di));	// 66903 push    di ;~ 1F3E:02F8
cs=0x1f3e;eip=0x0002f9; 	X(PUSH(si));	// 66904 push    si ;~ 1F3E:02F9
cs=0x1f3e;eip=0x0002fa; 	T(SUB(si, si));	// 66905 sub     si, si ;~ 1F3E:02FA
cs=0x1f3e;eip=0x0002fc; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 66906 mov     di, [bp+arg_0] ;~ 1F3E:02FC
cs=0x1f3e;eip=0x0002ff; 	R(JMP(loc_2dccd));	// 66907 jmp     short loc_2DCCD ;~ 1F3E:02FF
loc_2dcc1:
	// 8735 
cs=0x1f3e;eip=0x000301; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 66911 mov     al, [bp+var_2] ;~ 1F3E:0301
cs=0x1f3e;eip=0x000304; 	T(SUB(ah, ah));	// 66912 sub     ah, ah ;~ 1F3E:0304
cs=0x1f3e;eip=0x000306; 	X(PUSH(ax));	// 66913 push    ax ;~ 1F3E:0306
cs=0x1f3e;eip=0x000307; 	X(PUSH(cs));	// 66914 push    cs ;~ 1F3E:0307
cs=0x1f3e;eip=0x000308; 	R(CALL(sub_2dc86,0));	// 66915 call    near ptr sub_2DC86 ;~ 1F3E:0308
cs=0x1f3e;eip=0x00030b; 	T(ADD(si, ax));	// 66916 add     si, ax ;~ 1F3E:030B
loc_2dccd:
	// 8736 
cs=0x1f3e;eip=0x00030d; 	T(MOV(al, *(raddr(ds,di))));	// 66919 mov     al, [di] ;~ 1F3E:030D
cs=0x1f3e;eip=0x00030f; 	T(INC(di));	// 66920 inc     di ;~ 1F3E:030F
cs=0x1f3e;eip=0x000310; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 66921 mov     [bp+var_2], al ;~ 1F3E:0310
cs=0x1f3e;eip=0x000313; 	T(OR(al, al));	// 66922 or      al, al ;~ 1F3E:0313
cs=0x1f3e;eip=0x000315; 	R(JNZ(loc_2dcc1));	// 66923 jnz     short loc_2DCC1 ;~ 1F3E:0315
cs=0x1f3e;eip=0x000317; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), di));	// 66924 mov     [bp+arg_0], di ;~ 1F3E:0317
cs=0x1f3e;eip=0x00031a; 	T(MOV(ax, si));	// 66925 mov     ax, si ;~ 1F3E:031A
cs=0x1f3e;eip=0x00031c; 	X(POP(si));	// 66926 pop     si ;~ 1F3E:031C
cs=0x1f3e;eip=0x00031d; 	X(POP(di));	// 66927 pop     di ;~ 1F3E:031D
cs=0x1f3e;eip=0x00031e; 	T(MOV(sp, bp));	// 66928 mov     sp, bp ;~ 1F3E:031E
cs=0x1f3e;eip=0x000320; 	X(POP(bp));	// 66929 pop     bp ;~ 1F3E:0320
cs=0x1f3e;eip=0x000321; 	R(RETF(2));	// 66930 retf    2 ;~ 1F3E:0321
sub_2dce4:
	// 66938 
#undef var_4
#define var_4 -4
	// 66941 var_4           = word ptr -4 ;~ 1F3E:0324
#undef var_2
#define var_2 -2
	// 66942 var_2           = byte ptr -2 ;~ 1F3E:0324
#undef arg_0
#define arg_0 6
	// 66943 arg_0           = word ptr  6 ;~ 1F3E:0324
#undef arg_2
#define arg_2 8
	// 66944 arg_2           = word ptr  8 ;~ 1F3E:0324
#undef arg_4
#define arg_4 0x0A
	// 66945 arg_4           = word ptr  0Ah ;~ 1F3E:0324
cs=0x1f3e;eip=0x000324; 	X(PUSH(bp));	// 66947 push    bp ;~ 1F3E:0324
cs=0x1f3e;eip=0x000325; 	T(MOV(bp, sp));	// 66948 mov     bp, sp ;~ 1F3E:0325
cs=0x1f3e;eip=0x000327; 	T(SUB(sp, 4));	// 66949 sub     sp, 4 ;~ 1F3E:0327
cs=0x1f3e;eip=0x00032a; 	X(PUSH(di));	// 66950 push    di ;~ 1F3E:032A
cs=0x1f3e;eip=0x00032b; 	X(PUSH(si));	// 66951 push    si ;~ 1F3E:032B
cs=0x1f3e;eip=0x00032c; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 66952 mov     si, [bp+arg_4] ;~ 1F3E:032C
cs=0x1f3e;eip=0x00032f; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_4))));	// 66953 mov     di, [bp+var_4] ;~ 1F3E:032F
cs=0x1f3e;eip=0x000332; 	R(JMP(loc_2dd12));	// 66954 jmp     short loc_2DD12 ;~ 1F3E:0332
loc_2dcf4:
	// 8737 
cs=0x1f3e;eip=0x000334; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 66958 mov     al, [bp+var_2] ;~ 1F3E:0334
cs=0x1f3e;eip=0x000337; 	T(SUB(ah, ah));	// 66959 sub     ah, ah ;~ 1F3E:0337
cs=0x1f3e;eip=0x000339; 	T(MOV(di, ax));	// 66960 mov     di, ax ;~ 1F3E:0339
cs=0x1f3e;eip=0x00033b; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 66961 push    [bp+arg_0] ;~ 1F3E:033B
cs=0x1f3e;eip=0x00033e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 66962 push    [bp+arg_2] ;~ 1F3E:033E
cs=0x1f3e;eip=0x000341; 	X(PUSH(di));	// 66963 push    di ;~ 1F3E:0341
cs=0x1f3e;eip=0x000342; 	R(CALLF(sub_2e4b0,0));	// 66964 call    sub_2E4B0 ;~ 1F3E:0342
cs=0x1f3e;eip=0x000347; 	T(ADD(sp, 6));	// 66965 add     sp, 6 ;~ 1F3E:0347
cs=0x1f3e;eip=0x00034a; 	X(PUSH(di));	// 66966 push    di ;~ 1F3E:034A
cs=0x1f3e;eip=0x00034b; 	X(PUSH(cs));	// 66967 push    cs ;~ 1F3E:034B
cs=0x1f3e;eip=0x00034c; 	R(CALL(sub_2dc86,0));	// 66968 call    near ptr sub_2DC86 ;~ 1F3E:034C
cs=0x1f3e;eip=0x00034f; 	X(ADD(*(dw*)(raddr(ss,bp+arg_2)), ax));	// 66969 add     [bp+arg_2], ax ;~ 1F3E:034F
loc_2dd12:
	// 8738 
cs=0x1f3e;eip=0x000352; 	T(LODSB);	// 66972 lodsb ;~ 1F3E:0352
cs=0x1f3e;eip=0x000353; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 66973 mov     [bp+var_2], al ;~ 1F3E:0353
cs=0x1f3e;eip=0x000356; 	T(OR(al, al));	// 66974 or      al, al ;~ 1F3E:0356
cs=0x1f3e;eip=0x000358; 	R(JNZ(loc_2dcf4));	// 66975 jnz     short loc_2DCF4 ;~ 1F3E:0358
cs=0x1f3e;eip=0x00035a; 	X(POP(si));	// 66976 pop     si ;~ 1F3E:035A
cs=0x1f3e;eip=0x00035b; 	X(POP(di));	// 66977 pop     di ;~ 1F3E:035B
cs=0x1f3e;eip=0x00035c; 	T(MOV(sp, bp));	// 66978 mov     sp, bp ;~ 1F3E:035C
cs=0x1f3e;eip=0x00035e; 	X(POP(bp));	// 66979 pop     bp ;~ 1F3E:035E
cs=0x1f3e;eip=0x00035f; 	R(RETF(6));	// 66980 retf    6 ;~ 1F3E:035F
sub_2dd68:
	// 67026 
#undef var_2
#define var_2 -2
	// 67029 var_2           = byte ptr -2 ;~ 1F3E:03A8
#undef arg_0
#define arg_0 6
	// 67030 arg_0           = word ptr  6 ;~ 1F3E:03A8
#undef arg_2
#define arg_2 8
	// 67031 arg_2           = word ptr  8 ;~ 1F3E:03A8
#undef arg_4
#define arg_4 0x0A
	// 67032 arg_4           = word ptr  0Ah ;~ 1F3E:03A8
cs=0x1f3e;eip=0x0003a8; 	X(PUSH(bp));	// 67034 push    bp ;~ 1F3E:03A8
cs=0x1f3e;eip=0x0003a9; 	T(MOV(bp, sp));	// 67035 mov     bp, sp ;~ 1F3E:03A9
cs=0x1f3e;eip=0x0003ab; 	T(SUB(sp, 2));	// 67036 sub     sp, 2 ;~ 1F3E:03AB
cs=0x1f3e;eip=0x0003ae; 	X(PUSH(di));	// 67037 push    di ;~ 1F3E:03AE
cs=0x1f3e;eip=0x0003af; 	X(PUSH(si));	// 67038 push    si ;~ 1F3E:03AF
cs=0x1f3e;eip=0x0003b0; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 67039 mov     si, [bp+arg_4] ;~ 1F3E:03B0
cs=0x1f3e;eip=0x0003b3; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_2))));	// 67040 mov     di, [bp+arg_2] ;~ 1F3E:03B3
cs=0x1f3e;eip=0x0003b6; 	R(JMP(loc_2dd8a));	// 67041 jmp     short loc_2DD8A ;~ 1F3E:03B6
loc_2dd78:
	// 8741 
cs=0x1f3e;eip=0x0003b8; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 67045 mov     al, [bp+var_2] ;~ 1F3E:03B8
cs=0x1f3e;eip=0x0003bb; 	T(SUB(ah, ah));	// 67046 sub     ah, ah ;~ 1F3E:03BB
cs=0x1f3e;eip=0x0003bd; 	X(PUSH(ax));	// 67047 push    ax ;~ 1F3E:03BD
cs=0x1f3e;eip=0x0003be; 	X(PUSH(di));	// 67048 push    di ;~ 1F3E:03BE
cs=0x1f3e;eip=0x0003bf; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 67049 push    [bp+arg_0] ;~ 1F3E:03BF
cs=0x1f3e;eip=0x0003c2; 	R(CALLF(sub_2e285,0));	// 67050 call    sub_2E285 ;~ 1F3E:03C2
cs=0x1f3e;eip=0x0003c7; 	T(ADD(di, 4));	// 67051 add     di, 4 ;~ 1F3E:03C7
loc_2dd8a:
	// 8742 
cs=0x1f3e;eip=0x0003ca; 	T(LODSB);	// 67054 lodsb ;~ 1F3E:03CA
cs=0x1f3e;eip=0x0003cb; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 67055 mov     [bp+var_2], al ;~ 1F3E:03CB
cs=0x1f3e;eip=0x0003ce; 	T(OR(al, al));	// 67056 or      al, al ;~ 1F3E:03CE
cs=0x1f3e;eip=0x0003d0; 	R(JNZ(loc_2dd78));	// 67057 jnz     short loc_2DD78 ;~ 1F3E:03D0
cs=0x1f3e;eip=0x0003d2; 	X(MOV(*(dw*)(raddr(ss,bp+arg_2)), di));	// 67058 mov     [bp+arg_2], di ;~ 1F3E:03D2
cs=0x1f3e;eip=0x0003d5; 	X(POP(si));	// 67059 pop     si ;~ 1F3E:03D5
cs=0x1f3e;eip=0x0003d6; 	X(POP(di));	// 67060 pop     di ;~ 1F3E:03D6
cs=0x1f3e;eip=0x0003d7; 	T(MOV(sp, bp));	// 67061 mov     sp, bp ;~ 1F3E:03D7
cs=0x1f3e;eip=0x0003d9; 	X(POP(bp));	// 67062 pop     bp ;~ 1F3E:03D9
cs=0x1f3e;eip=0x0003da; 	R(RETF(6));	// 67063 retf    6 ;~ 1F3E:03DA
sub_2dd9d:
	// 67070 
cs=0x1f3e;eip=0x0003dd; 	T(MOV(ax, 0x230));	// 67072 mov     ax, 230h ;~ 1F3E:03DD
cs=0x1f3e;eip=0x0003e0; 	X(PUSH(ax));	// 67073 push    ax ;~ 1F3E:03E0
cs=0x1f3e;eip=0x0003e1; 	R(CALL(sub_2dba3,0));	// 67074 call    sub_2DBA3 ;~ 1F3E:03E1
cs=0x1f3e;eip=0x0003e4; 	X(MOV(*(dw*)((&unk_5688a)), ax));	// 67075 mov     word ptr unk_5688A, ax ;~ 1F3E:03E4
cs=0x1f3e;eip=0x0003e7; 	X(MOV(*(dw*)((&unk_5688c)), dx));	// 67076 mov     word ptr unk_5688C, dx ;~ 1F3E:03E7
cs=0x1f3e;eip=0x0003eb; 	T(MOV(ax, 0x239));	// 67077 mov     ax, 239h ;~ 1F3E:03EB
cs=0x1f3e;eip=0x0003ee; 	X(PUSH(ax));	// 67078 push    ax ;~ 1F3E:03EE
cs=0x1f3e;eip=0x0003ef; 	R(CALL(sub_2dba3,0));	// 67079 call    sub_2DBA3 ;~ 1F3E:03EF
cs=0x1f3e;eip=0x0003f2; 	X(MOV(*(dw*)((&unk_56886)), ax));	// 67080 mov     word ptr unk_56886, ax ;~ 1F3E:03F2
cs=0x1f3e;eip=0x0003f5; 	X(MOV(*(dw*)((&unk_56888)), dx));	// 67081 mov     word ptr unk_56888, dx ;~ 1F3E:03F5
cs=0x1f3e;eip=0x0003f9; 	R(RETF(0));	// 67082 retf ;~ 1F3E:03F9
sub_2ddba:
	// 67089 
cs=0x1f3e;eip=0x0003fa; 	X(PUSH(*(dw*)((&unk_56888))));	// 67091 push    word ptr unk_56888 ;~ 1F3E:03FA
cs=0x1f3e;eip=0x0003fe; 	X(PUSH(*(dw*)((&unk_56886))));	// 67092 push    word ptr unk_56886 ;~ 1F3E:03FE
cs=0x1f3e;eip=0x000402; 	R(CALL(sub_2dc65,0));	// 67093 call    sub_2DC65 ;~ 1F3E:0402
cs=0x1f3e;eip=0x000405; 	X(PUSH(*(dw*)((&unk_5688c))));	// 67094 push    word ptr unk_5688C ;~ 1F3E:0405
cs=0x1f3e;eip=0x000409; 	X(PUSH(*(dw*)((&unk_5688a))));	// 67095 push    word ptr unk_5688A ;~ 1F3E:0409
cs=0x1f3e;eip=0x00040d; 	R(CALL(sub_2dc65,0));	// 67096 call    sub_2DC65 ;~ 1F3E:040D
cs=0x1f3e;eip=0x000410; 	R(RETF(0));	// 67097 retf ;~ 1F3E:0410

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_2d9fc: 	goto loc_2d9fc;
        case m2c::kloc_2da12: 	goto loc_2da12;
        case m2c::kloc_2da8f: 	goto loc_2da8f;
        case m2c::kloc_2dabd: 	goto loc_2dabd;
        case m2c::kloc_2dad8: 	goto loc_2dad8;
        case m2c::kloc_2dade: 	goto loc_2dade;
        case m2c::kloc_2daed: 	goto loc_2daed;
        case m2c::kloc_2daf9: 	goto loc_2daf9;
        case m2c::kloc_2db05: 	goto loc_2db05;
        case m2c::kloc_2db26: 	goto loc_2db26;
        case m2c::kloc_2db3a: 	goto loc_2db3a;
        case m2c::kloc_2dbce: 	goto loc_2dbce;
        case m2c::kloc_2dbe4: 	goto loc_2dbe4;
        case m2c::kloc_2dc5f: 	goto loc_2dc5f;
        case m2c::kloc_2dc82: 	goto loc_2dc82;
        case m2c::kloc_2dcc1: 	goto loc_2dcc1;
        case m2c::kloc_2dccd: 	goto loc_2dccd;
        case m2c::kloc_2dcf4: 	goto loc_2dcf4;
        case m2c::kloc_2dd12: 	goto loc_2dd12;
        case m2c::kloc_2dd32: 	goto loc_2dd32;
        case m2c::kloc_2dd4d: 	goto loc_2dd4d;
        case m2c::kloc_2dd78: 	goto loc_2dd78;
        case m2c::kloc_2dd8a: 	goto loc_2dd8a;
        case m2c::knullsub_10: 	goto nullsub_10;
        case m2c::knullsub_11: 	goto nullsub_11;
        case m2c::kseg004_proc: 	goto seg004_proc;
        case m2c::ksub_2d9cc: 	goto sub_2d9cc;
        case m2c::ksub_2db40: 	goto sub_2db40;
        case m2c::ksub_2db50: 	goto sub_2db50;
        case m2c::ksub_2db87: 	goto sub_2db87;
        case m2c::ksub_2dba3: 	goto sub_2dba3;
        case m2c::ksub_2dc65: 	goto sub_2dc65;
        case m2c::ksub_2dc86: 	goto sub_2dc86;
        case m2c::ksub_2dcb2: 	goto sub_2dcb2;
        case m2c::ksub_2dce4: 	goto sub_2dce4;
        case m2c::ksub_2dd68: 	goto sub_2dd68;
        case m2c::ksub_2dd9d: 	goto sub_2dd9d;
        case m2c::ksub_2ddba: 	goto sub_2ddba;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, _source);m2c::stackDump(_state); abort();
    };
}

