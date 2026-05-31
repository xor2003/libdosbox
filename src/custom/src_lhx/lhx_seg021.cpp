/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group19(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group19:
    _begin:
sub_318f0:
	// 76464 
#undef arg_0
#define arg_0 6
	// 76467 arg_0           = dword ptr  6 ;~ 2331:0000
#undef arg_4
#define arg_4 0x0A
	// 76468 arg_4           = word ptr  0Ah ;~ 2331:0000
cs=0x2331;eip=0x000000; 	X(PUSH(bp));	// 76470 push    bp ;~ 2331:0000
cs=0x2331;eip=0x000001; 	T(MOV(bp, sp));	// 76471 mov     bp, sp ;~ 2331:0001
cs=0x2331;eip=0x000003; 	X(PUSH(si));	// 76472 push    si ;~ 2331:0003
cs=0x2331;eip=0x000004; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 76473 mov     si, [bp+arg_4] ;~ 2331:0004
loc_318f7:
	// 9312 
cs=0x2331;eip=0x000007; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 76476 les     bx, [bp+arg_0] ;~ 2331:0007
cs=0x2331;eip=0x00000a; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 76477 inc     word ptr [bp+arg_0] ;~ 2331:000A
cs=0x2331;eip=0x00000d; 	T(MOV(al, *(raddr(es,bx))));	// 76478 mov     al, es:[bx] ;~ 2331:000D
cs=0x2331;eip=0x000010; 	X(MOV(*(raddr(ds,si)), al));	// 76479 mov     [si], al ;~ 2331:0010
cs=0x2331;eip=0x000012; 	T(INC(si));	// 76480 inc     si ;~ 2331:0012
cs=0x2331;eip=0x000013; 	T(OR(al, al));	// 76481 or      al, al ;~ 2331:0013
cs=0x2331;eip=0x000015; 	R(JNZ(loc_318f7));	// 76482 jnz     short loc_318F7 ;~ 2331:0015
cs=0x2331;eip=0x000017; 	X(POP(si));	// 76483 pop     si ;~ 2331:0017
cs=0x2331;eip=0x000018; 	X(POP(bp));	// 76484 pop     bp ;~ 2331:0018
cs=0x2331;eip=0x000019; 	R(RETF(6));	// 76485 retf    6 ;~ 2331:0019
sub_3190c:
	// 76493 
#undef var_2
#define var_2 -2
	// 76496 var_2           = word ptr -2 ;~ 2331:001C
#undef arg_0
#define arg_0 6
	// 76497 arg_0           = word ptr  6 ;~ 2331:001C
#undef arg_2
#define arg_2 8
	// 76498 arg_2           = word ptr  8 ;~ 2331:001C
#undef arg_4
#define arg_4 0x0A
	// 76499 arg_4           = byte ptr  0Ah ;~ 2331:001C
cs=0x2331;eip=0x00001c; 	X(PUSH(bp));	// 76501 push    bp ;~ 2331:001C
cs=0x2331;eip=0x00001d; 	T(MOV(bp, sp));	// 76502 mov     bp, sp ;~ 2331:001D
cs=0x2331;eip=0x00001f; 	T(SUB(sp, 2));	// 76503 sub     sp, 2 ;~ 2331:001F
cs=0x2331;eip=0x000022; 	X(PUSH(si));	// 76504 push    si ;~ 2331:0022
cs=0x2331;eip=0x000023; 	T(MOV(al, 0x0C));	// 76505 mov     al, 0Ch ;~ 2331:0023
cs=0x2331;eip=0x000025; 	X(MUL1_1(unk_57043));	// 76506 mul     byte ptr unk_57043 ;~ 2331:0025
cs=0x2331;eip=0x000029; 	T(MOV(si, ax));	// 76507 mov     si, ax ;~ 2331:0029
cs=0x2331;eip=0x00002b; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x24BA))));	// 76508 mov     ax, [si+24BAh] ;~ 2331:002B
cs=0x2331;eip=0x00002f; 	T(MOV(dx, *(dw*)(raddr(ds,si+0x24BC))));	// 76509 mov     dx, [si+24BCh] ;~ 2331:002F
cs=0x2331;eip=0x000033; 	X(MOV(*(dw*)((&unk_5432c)), ax));	// 76510 mov     word ptr unk_5432C, ax ;~ 2331:0033
cs=0x2331;eip=0x000036; 	X(MOV(*(dw*)((&unk_5432e)), dx));	// 76511 mov     word ptr unk_5432E, dx ;~ 2331:0036
cs=0x2331;eip=0x00003a; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x24BE))));	// 76512 mov     ax, [si+24BEh] ;~ 2331:003A
cs=0x2331;eip=0x00003e; 	T(MOV(dx, *(dw*)(raddr(ds,si+0x24C0))));	// 76513 mov     dx, [si+24C0h] ;~ 2331:003E
cs=0x2331;eip=0x000042; 	X(MOV(*(dw*)((&unk_54330)), ax));	// 76514 mov     word ptr unk_54330, ax ;~ 2331:0042
cs=0x2331;eip=0x000045; 	X(MOV(*(dw*)((&unk_54332)), dx));	// 76515 mov     word ptr unk_54332, dx ;~ 2331:0045
cs=0x2331;eip=0x000049; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x24C2))));	// 76516 mov     ax, [si+24C2h] ;~ 2331:0049
cs=0x2331;eip=0x00004d; 	T(MOV(dx, *(dw*)(raddr(ds,si+0x24C4))));	// 76517 mov     dx, [si+24C4h] ;~ 2331:004D
cs=0x2331;eip=0x000051; 	X(MOV(*(dw*)((&unk_54334)), ax));	// 76518 mov     word ptr unk_54334, ax ;~ 2331:0051
cs=0x2331;eip=0x000054; 	X(MOV(*(dw*)((&unk_54336)), dx));	// 76519 mov     word ptr unk_54336, dx ;~ 2331:0054
cs=0x2331;eip=0x000058; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 76520 mov     ax, [bp+arg_0] ;~ 2331:0058
cs=0x2331;eip=0x00005b; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 76521 mov     dx, [bp+arg_2] ;~ 2331:005B
cs=0x2331;eip=0x00005e; 	X(MOV(*(dw*)((&unk_54342)), ax));	// 76522 mov     word ptr unk_54342, ax ;~ 2331:005E
cs=0x2331;eip=0x000061; 	X(MOV(*(dw*)((&unk_54344)), dx));	// 76523 mov     word ptr unk_54344, dx ;~ 2331:0061
cs=0x2331;eip=0x000065; 	X(MOV(*(dw*)((&unk_54338)), 0));	// 76524 mov     word ptr unk_54338, 0 ;~ 2331:0065
cs=0x2331;eip=0x00006b; 	T(MOV(al, *(raddr(ss,bp+arg_4))));	// 76525 mov     al, [bp+arg_4] ;~ 2331:006B
cs=0x2331;eip=0x00006e; 	T(CBW);	// 76526 cbw ;~ 2331:006E
cs=0x2331;eip=0x00006f; 	X(PUSH(ax));	// 76527 push    ax ;~ 2331:006F
cs=0x2331;eip=0x000070; 	R(CALL(sub_31c94,0));	// 76528 call    sub_31C94 ;~ 2331:0070
cs=0x2331;eip=0x000073; 	X(MOV(*(dw*)((&unk_47ab2)), 0x0FFFF));	// 76529 mov     word ptr unk_47AB2, 0FFFFh ;~ 2331:0073
cs=0x2331;eip=0x000079; 	R(CALL(sub_32887,0));	// 76530 call    sub_32887 ;~ 2331:0079
cs=0x2331;eip=0x00007c; 	X(MOV(*(dw*)((&unk_5433c)), 0x0FFFF));	// 76531 mov     word ptr unk_5433C, 0FFFFh ;~ 2331:007C
cs=0x2331;eip=0x000082; 	R(CALL(sub_3321b,0));	// 76532 call    sub_3321B ;~ 2331:0082
cs=0x2331;eip=0x000085; 	T(CMP(*(raddr(ss,bp+arg_4)), 0));	// 76533 cmp     [bp+arg_4], 0 ;~ 2331:0085
cs=0x2331;eip=0x000089; 	R(JNZ(loc_3197e));	// 76534 jnz     short loc_3197E ;~ 2331:0089
cs=0x2331;eip=0x00008b; 	R(JMP(loc_31aad));	// 76535 jmp     loc_31AAD ;~ 2331:008B
loc_3197e:
	// 9313 
cs=0x2331;eip=0x00008e; 	T(MOV(ax, 1));	// 76539 mov     ax, 1 ;~ 2331:008E
cs=0x2331;eip=0x000091; 	X(PUSH(ax));	// 76540 push    ax ;~ 2331:0091
cs=0x2331;eip=0x000092; 	R(CALLF(sub_34b78,0));	// 76541 call    sub_34B78 ;~ 2331:0092
cs=0x2331;eip=0x000097; 	T(ADD(sp, 2));	// 76542 add     sp, 2 ;~ 2331:0097
cs=0x2331;eip=0x00009a; 	T(MOV(ax, 0x24F0));	// 76543 mov     ax, 24F0h ;~ 2331:009A
cs=0x2331;eip=0x00009d; 	X(PUSH(ax));	// 76544 push    ax ;~ 2331:009D
cs=0x2331;eip=0x00009e; 	T(MOV(ax, 0x24E6));	// 76545 mov     ax, 24E6h ;~ 2331:009E
cs=0x2331;eip=0x0000a1; 	X(PUSH(ax));	// 76546 push    ax ;~ 2331:00A1
cs=0x2331;eip=0x0000a2; 	R(CALLF(sub_31673,0));	// 76547 call    sub_31673 ;~ 2331:00A2
cs=0x2331;eip=0x0000a7; 	R(CALLF(sub_29370,0));	// 76548 call    sub_29370 ;~ 2331:00A7
cs=0x2331;eip=0x0000ac; 	T(CMP(ax, 0x96));	// 76549 cmp     ax, 96h ; 'ñ' ;~ 2331:00AC
cs=0x2331;eip=0x0000af; 	R(JGE(loc_319bf));	// 76550 jge     short loc_319BF ;~ 2331:00AF
cs=0x2331;eip=0x0000b1; 	T(MOV(ax, 0x14));	// 76551 mov     ax, 14h ;~ 2331:00B1
cs=0x2331;eip=0x0000b4; 	X(PUSH(ax));	// 76552 push    ax ;~ 2331:00B4
cs=0x2331;eip=0x0000b5; 	R(CALLF(sub_2937a,0));	// 76553 call    sub_2937A ;~ 2331:00B5
cs=0x2331;eip=0x0000ba; 	T(ADD(ax, 0x94));	// 76554 add     ax, 94h ; 'î' ;~ 2331:00BA
cs=0x2331;eip=0x0000bd; 	X(MOV(*(dw*)((&unk_5433c)), ax));	// 76555 mov     word ptr unk_5433C, ax ;~ 2331:00BD
cs=0x2331;eip=0x0000c0; 	T(MOV(ax, 0x18));	// 76556 mov     ax, 18h ;~ 2331:00C0
cs=0x2331;eip=0x0000c3; 	X(PUSH(ax));	// 76557 push    ax ;~ 2331:00C3
cs=0x2331;eip=0x0000c4; 	R(CALLF(sub_2937a,0));	// 76558 call    sub_2937A ;~ 2331:00C4
cs=0x2331;eip=0x0000c9; 	T(ADD(ax, 4));	// 76559 add     ax, 4 ;~ 2331:00C9
cs=0x2331;eip=0x0000cc; 	X(MOV(*(dw*)((&unk_5433e)), ax));	// 76560 mov     word ptr unk_5433E, ax ;~ 2331:00CC
loc_319bf:
	// 9314 
cs=0x2331;eip=0x0000cf; 	R(CALL(sub_32292,0));	// 76564 call    sub_32292 ;~ 2331:00CF
cs=0x2331;eip=0x0000d2; 	X(PUSH(*(dw*)((&unk_5651c))));	// 76565 push    word ptr unk_5651C ;~ 2331:00D2
cs=0x2331;eip=0x0000d6; 	X(PUSH(word_5651a));	// 76566 push    word_5651A ;~ 2331:00D6
cs=0x2331;eip=0x0000da; 	R(CALLF(sub_3174e,0));	// 76567 call    sub_3174E ;~ 2331:00DA
loc_319cf:
	// 9315 
cs=0x2331;eip=0x0000df; 	T(CMP(unk_5432a, 0));	// 76570 cmp     byte ptr unk_5432A, 0 ;~ 2331:00DF
cs=0x2331;eip=0x0000e4; 	R(JZ(loc_319e3));	// 76571 jz      short loc_319E3 ;~ 2331:00E4
cs=0x2331;eip=0x0000e6; 	T(MOV(ax, 0x24FB));	// 76572 mov     ax, 24FBh ;~ 2331:00E6
cs=0x2331;eip=0x0000e9; 	X(PUSH(ax));	// 76573 push    ax ;~ 2331:00E9
cs=0x2331;eip=0x0000ea; 	T(MOV(ax, 0x24A6));	// 76574 mov     ax, 24A6h ;~ 2331:00EA
cs=0x2331;eip=0x0000ed; 	X(PUSH(ax));	// 76575 push    ax ;~ 2331:00ED
cs=0x2331;eip=0x0000ee; 	R(CALLF(sub_316b2,0));	// 76576 call    sub_316B2 ;~ 2331:00EE
loc_319e3:
	// 9316 
cs=0x2331;eip=0x0000f3; 	T(CMP(unk_5436b, 0));	// 76579 cmp     byte ptr unk_5436B, 0 ;~ 2331:00F3
cs=0x2331;eip=0x0000f8; 	R(JZ(loc_319f7));	// 76580 jz      short loc_319F7 ;~ 2331:00F8
cs=0x2331;eip=0x0000fa; 	T(MOV(ax, 0x2502));	// 76581 mov     ax, 2502h ;~ 2331:00FA
cs=0x2331;eip=0x0000fd; 	X(PUSH(ax));	// 76582 push    ax ;~ 2331:00FD
cs=0x2331;eip=0x0000fe; 	T(MOV(ax, 0x24B0));	// 76583 mov     ax, 24B0h ;~ 2331:00FE
cs=0x2331;eip=0x000101; 	X(PUSH(ax));	// 76584 push    ax ;~ 2331:0101
cs=0x2331;eip=0x000102; 	R(CALLF(sub_316b2,0));	// 76585 call    sub_316B2 ;~ 2331:0102
loc_319f7:
	// 9317 
cs=0x2331;eip=0x000107; 	X(PUSH(word_5651a));	// 76588 push    word_5651A ;~ 2331:0107
cs=0x2331;eip=0x00010b; 	X(PUSH(*(dw*)((&unk_5651c))));	// 76589 push    word ptr unk_5651C ;~ 2331:010B
cs=0x2331;eip=0x00010f; 	R(CALLF(sub_2c939,0));	// 76590 call    sub_2C939 ;~ 2331:010F
cs=0x2331;eip=0x000114; 	T(CMP(*(raddr(ss,bp+arg_4)), 0));	// 76591 cmp     [bp+arg_4], 0 ;~ 2331:0114
cs=0x2331;eip=0x000118; 	R(JZ(loc_31a76));	// 76592 jz      short loc_31A76 ;~ 2331:0118
cs=0x2331;eip=0x00011a; 	X(PUSH(word_5651a));	// 76593 push    word_5651A ;~ 2331:011A
cs=0x2331;eip=0x00011e; 	R(CALLF(sub_202f1,0));	// 76594 call    sub_202F1 ;~ 2331:011E
cs=0x2331;eip=0x000123; 	T(MOV(ax, 0x20));	// 76595 mov     ax, 20h ; ' ' ;~ 2331:0123
cs=0x2331;eip=0x000126; 	X(PUSH(ax));	// 76596 push    ax ;~ 2331:0126
cs=0x2331;eip=0x000127; 	T(MOV(ax, 0x0BA));	// 76597 mov     ax, 0BAh ; '∫' ;~ 2331:0127
cs=0x2331;eip=0x00012a; 	X(PUSH(ax));	// 76598 push    ax ;~ 2331:012A
cs=0x2331;eip=0x00012b; 	T(MOV(ax, 0x0C0));	// 76599 mov     ax, 0C0h ; '¿' ;~ 2331:012B
cs=0x2331;eip=0x00012e; 	X(PUSH(ax));	// 76600 push    ax ;~ 2331:012E
cs=0x2331;eip=0x00012f; 	T(MOV(ax, 7));	// 76601 mov     ax, 7 ;~ 2331:012F
cs=0x2331;eip=0x000132; 	X(PUSH(ax));	// 76602 push    ax ;~ 2331:0132
cs=0x2331;eip=0x000133; 	T(MOV(ax, 0x0FF02));	// 76603 mov     ax, 0FF02h ;~ 2331:0133
cs=0x2331;eip=0x000136; 	X(PUSH(ax));	// 76604 push    ax ;~ 2331:0136
cs=0x2331;eip=0x000137; 	R(CALLF(sub_233c4,0));	// 76605 call    sub_233C4 ;~ 2331:0137
cs=0x2331;eip=0x00013c; 	R(CALL(sub_3317c,0));	// 76606 call    sub_3317C ;~ 2331:013C
cs=0x2331;eip=0x00013f; 	X(MOV(*(dw*)((&unk_47bde)), 0x0FF0F));	// 76607 mov     word ptr unk_47BDE, 0FF0Fh ;~ 2331:013F
cs=0x2331;eip=0x000145; 	X(MOV(unk_56885, 0));	// 76608 mov     byte ptr unk_56885, 0 ;~ 2331:0145
cs=0x2331;eip=0x00014a; 	T(MOV(ax, 0x0BB));	// 76609 mov     ax, 0BBh ; 'ª' ;~ 2331:014A
cs=0x2331;eip=0x00014d; 	X(PUSH(ax));	// 76610 push    ax ;~ 2331:014D
cs=0x2331;eip=0x00014e; 	T(MOV(ax, 0x0DF));	// 76611 mov     ax, 0DFh ; 'ﬂ' ;~ 2331:014E
cs=0x2331;eip=0x000151; 	X(PUSH(ax));	// 76612 push    ax ;~ 2331:0151
cs=0x2331;eip=0x000152; 	T(MOV(ax, 0x20));	// 76613 mov     ax, 20h ; ' ' ;~ 2331:0152
cs=0x2331;eip=0x000155; 	X(PUSH(ax));	// 76614 push    ax ;~ 2331:0155
cs=0x2331;eip=0x000156; 	T(MOV(ax, 0x2509));	// 76615 mov     ax, 2509h ;~ 2331:0156
cs=0x2331;eip=0x000159; 	X(PUSH(ax));	// 76616 push    ax ;~ 2331:0159
cs=0x2331;eip=0x00015a; 	R(CALLF(sub_30ffa,0));	// 76617 call    sub_30FFA ;~ 2331:015A
cs=0x2331;eip=0x00015f; 	T(ADD(sp, 8));	// 76618 add     sp, 8 ;~ 2331:015F
cs=0x2331;eip=0x000162; 	R(CALLF(sub_3059c,0));	// 76619 call    sub_3059C ;~ 2331:0162
cs=0x2331;eip=0x000167; 	R(CALLF(sub_35bae,0));	// 76620 call    sub_35BAE ;~ 2331:0167
cs=0x2331;eip=0x00016c; 	T(MOV(ax, 1));	// 76621 mov     ax, 1 ;~ 2331:016C
cs=0x2331;eip=0x00016f; 	T(SUB(ax, word_5651a));	// 76622 sub     ax, word_5651A ;~ 2331:016F
cs=0x2331;eip=0x000173; 	X(PUSH(ax));	// 76623 push    ax ;~ 2331:0173
cs=0x2331;eip=0x000174; 	R(CALLF(sub_202f1,0));	// 76624 call    sub_202F1 ;~ 2331:0174
cs=0x2331;eip=0x000179; 	X(PUSH(*(dw*)((&unk_5651c))));	// 76625 push    word ptr unk_5651C ;~ 2331:0179
cs=0x2331;eip=0x00017d; 	X(PUSH(word_5651a));	// 76626 push    word_5651A ;~ 2331:017D
cs=0x2331;eip=0x000181; 	R(CALLF(sub_2c939,0));	// 76627 call    sub_2C939 ;~ 2331:0181
loc_31a76:
	// 9318 
cs=0x2331;eip=0x000186; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_2))));	// 76630 mov     si, [bp+var_2] ;~ 2331:0186
loc_31a79:
	// 9319 
cs=0x2331;eip=0x000189; 	R(CALL(sub_33248,0));	// 76634 call    sub_33248 ;~ 2331:0189
cs=0x2331;eip=0x00018c; 	T(MOV(si, ax));	// 76635 mov     si, ax ;~ 2331:018C
cs=0x2331;eip=0x00018e; 	T(CMP(ax, 0x4800));	// 76636 cmp     ax, 4800h ;~ 2331:018E
cs=0x2331;eip=0x000191; 	R(JNZ(loc_31a86));	// 76637 jnz     short loc_31A86 ;~ 2331:0191
cs=0x2331;eip=0x000193; 	R(JMP(loc_31bff));	// 76638 jmp     loc_31BFF ;~ 2331:0193
loc_31a86:
	// 9320 
cs=0x2331;eip=0x000196; 	R(JLE(loc_31a8b));	// 76642 jle     short loc_31A8B ;~ 2331:0196
cs=0x2331;eip=0x000198; 	R(JMP(loc_31c1f));	// 76643 jmp     loc_31C1F ;~ 2331:0198
loc_31a8b:
	// 9321 
cs=0x2331;eip=0x00019b; 	T(CMP(ax, 0x0D));	// 76647 cmp     ax, 0Dh ;~ 2331:019B
cs=0x2331;eip=0x00019e; 	R(JNZ(loc_31a93));	// 76648 jnz     short loc_31A93 ;~ 2331:019E
cs=0x2331;eip=0x0001a0; 	R(JMP(loc_31b5c));	// 76649 jmp     loc_31B5C ;~ 2331:01A0
loc_31a93:
	// 9322 
cs=0x2331;eip=0x0001a3; 	T(CMP(ax, 0x1B));	// 76653 cmp     ax, 1Bh ;~ 2331:01A3
cs=0x2331;eip=0x0001a6; 	R(JNZ(loc_31a9b));	// 76654 jnz     short loc_31A9B ;~ 2331:01A6
cs=0x2331;eip=0x0001a8; 	R(JMP(loc_31b25));	// 76655 jmp     loc_31B25 ;~ 2331:01A8
loc_31a9b:
	// 9323 
cs=0x2331;eip=0x0001ab; 	T(CMP(ax, 0x20));	// 76659 cmp     ax, 20h ; ' ' ;~ 2331:01AB
cs=0x2331;eip=0x0001ae; 	R(JNZ(loc_31aa3));	// 76660 jnz     short loc_31AA3 ;~ 2331:01AE
cs=0x2331;eip=0x0001b0; 	R(JMP(loc_31bef));	// 76661 jmp     loc_31BEF ;~ 2331:01B0
loc_31aa3:
	// 9324 
cs=0x2331;eip=0x0001b3; 	T(CMP(ax, 0x4700));	// 76665 cmp     ax, 4700h ;~ 2331:01B3
cs=0x2331;eip=0x0001b6; 	R(JNZ(loc_31aab));	// 76666 jnz     short loc_31AAB ;~ 2331:01B6
cs=0x2331;eip=0x0001b8; 	R(JMP(loc_31b8f));	// 76667 jmp     loc_31B8F ;~ 2331:01B8
loc_31aab:
	// 9325 
cs=0x2331;eip=0x0001bb; 	R(JMP(loc_31a79));	// 76671 jmp     short loc_31A79 ;~ 2331:01BB
loc_31aad:
	// 9326 
cs=0x2331;eip=0x0001bd; 	R(CALL(sub_3317c,0));	// 76675 call    sub_3317C ;~ 2331:01BD
cs=0x2331;eip=0x0001c0; 	R(CALL(sub_33161,0));	// 76676 call    sub_33161 ;~ 2331:01C0
cs=0x2331;eip=0x0001c3; 	T(MOV(ax, 0x32));	// 76677 mov     ax, 32h ; '2' ;~ 2331:01C3
cs=0x2331;eip=0x0001c6; 	X(PUSH(ax));	// 76678 push    ax ;~ 2331:01C6
cs=0x2331;eip=0x0001c7; 	T(MOV(ax, 0x0BB));	// 76679 mov     ax, 0BBh ; 'ª' ;~ 2331:01C7
cs=0x2331;eip=0x0001ca; 	X(PUSH(ax));	// 76680 push    ax ;~ 2331:01CA
cs=0x2331;eip=0x0001cb; 	T(MOV(ax, 0x19));	// 76681 mov     ax, 19h ;~ 2331:01CB
cs=0x2331;eip=0x0001ce; 	X(PUSH(ax));	// 76682 push    ax ;~ 2331:01CE
cs=0x2331;eip=0x0001cf; 	T(MOV(ax, 8));	// 76683 mov     ax, 8 ;~ 2331:01CF
cs=0x2331;eip=0x0001d2; 	X(PUSH(ax));	// 76684 push    ax ;~ 2331:01D2
cs=0x2331;eip=0x0001d3; 	T(MOV(ax, 0x0FF0F));	// 76685 mov     ax, 0FF0Fh ;~ 2331:01D3
cs=0x2331;eip=0x0001d6; 	X(PUSH(ax));	// 76686 push    ax ;~ 2331:01D6
cs=0x2331;eip=0x0001d7; 	R(CALLF(sub_233c4,0));	// 76687 call    sub_233C4 ;~ 2331:01D7
cs=0x2331;eip=0x0001dc; 	T(SUB(ax, ax));	// 76688 sub     ax, ax ;~ 2331:01DC
cs=0x2331;eip=0x0001de; 	X(PUSH(ax));	// 76689 push    ax ;~ 2331:01DE
cs=0x2331;eip=0x0001df; 	R(CALL(sub_326ae,0));	// 76690 call    sub_326AE ;~ 2331:01DF
cs=0x2331;eip=0x0001e2; 	R(CALL(sub_330b9,0));	// 76691 call    sub_330B9 ;~ 2331:01E2
cs=0x2331;eip=0x0001e5; 	R(CALLF(sub_20565,0));	// 76692 call    sub_20565 ;~ 2331:01E5
cs=0x2331;eip=0x0001ea; 	T(MOV(ax, 0x24DE));	// 76693 mov     ax, 24DEh ;~ 2331:01EA
cs=0x2331;eip=0x0001ed; 	X(PUSH(ax));	// 76694 push    ax ;~ 2331:01ED
cs=0x2331;eip=0x0001ee; 	X(PUSH(*(dw*)((&unk_54336))));	// 76695 push    word ptr unk_54336 ;~ 2331:01EE
cs=0x2331;eip=0x0001f2; 	X(PUSH(*(dw*)((&unk_54334))));	// 76696 push    word ptr unk_54334 ;~ 2331:01F2
cs=0x2331;eip=0x0001f6; 	T(MOV(ax, 4));	// 76697 mov     ax, 4 ;~ 2331:01F6
cs=0x2331;eip=0x0001f9; 	T(CWD);	// 76698 cwd ;~ 2331:01F9
cs=0x2331;eip=0x0001fa; 	X(PUSH(dx));	// 76699 push    dx ;~ 2331:01FA
cs=0x2331;eip=0x0001fb; 	X(PUSH(ax));	// 76700 push    ax ;~ 2331:01FB
cs=0x2331;eip=0x0001fc; 	X(PUSH(*(dw*)((&unk_54332))));	// 76701 push    word ptr unk_54332 ;~ 2331:01FC
cs=0x2331;eip=0x000200; 	X(PUSH(*(dw*)((&unk_54330))));	// 76702 push    word ptr unk_54330 ;~ 2331:0200
cs=0x2331;eip=0x000204; 	R(CALLF(sub_10526,0));	// 76703 call    sub_10526 ;~ 2331:0204
cs=0x2331;eip=0x000209; 	X(PUSH(dx));	// 76704 push    dx ;~ 2331:0209
cs=0x2331;eip=0x00020a; 	X(PUSH(ax));	// 76705 push    ax ;~ 2331:020A
cs=0x2331;eip=0x00020b; 	X(PUSH(*(dw*)((&unk_5432e))));	// 76706 push    word ptr unk_5432E ;~ 2331:020B
cs=0x2331;eip=0x00020f; 	X(PUSH(*(dw*)((&unk_5432c))));	// 76707 push    word ptr unk_5432C ;~ 2331:020F
cs=0x2331;eip=0x000213; 	R(CALLF(sub_35707,0));	// 76708 call    sub_35707 ;~ 2331:0213
cs=0x2331;eip=0x000218; 	T(ADD(sp, 0x0E));	// 76709 add     sp, 0Eh ;~ 2331:0218
cs=0x2331;eip=0x00021b; 	R(CALLF(sub_11e04,0));	// 76710 call    sub_11E04 ;~ 2331:021B
cs=0x2331;eip=0x000220; 	R(CALLF(sub_203b0,0));	// 76711 call    sub_203B0 ;~ 2331:0220
cs=0x2331;eip=0x000225; 	T(CMP(unk_47ac2, 0));	// 76712 cmp     byte ptr unk_47AC2, 0 ;~ 2331:0225
cs=0x2331;eip=0x00022a; 	R(JNZ(loc_31b1f));	// 76713 jnz     short loc_31B1F ;~ 2331:022A
cs=0x2331;eip=0x00022c; 	R(JMP(loc_319bf));	// 76714 jmp     loc_319BF ;~ 2331:022C
loc_31b1f:
	// 9327 
cs=0x2331;eip=0x00022f; 	R(CALL(sub_32284,0));	// 76718 call    sub_32284 ;~ 2331:022F
cs=0x2331;eip=0x000232; 	R(JMP(loc_319cf));	// 76719 jmp     loc_319CF ;~ 2331:0232
loc_31b25:
	// 9328 
cs=0x2331;eip=0x000235; 	T(CMP(*(dw*)((&unk_54338)), 0));	// 76723 cmp     word ptr unk_54338, 0 ;~ 2331:0235
cs=0x2331;eip=0x00023a; 	R(JNZ(loc_31b68));	// 76724 jnz     short loc_31B68 ;~ 2331:023A
loc_31b2c:
	// 9329 
cs=0x2331;eip=0x00023c; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), si));	// 76727 mov     [bp+var_2], si ;~ 2331:023C
cs=0x2331;eip=0x00023f; 	R(CALLF(sub_18508,0));	// 76728 call    sub_18508 ;~ 2331:023F
cs=0x2331;eip=0x000244; 	T(MOV(ax, 0x24E6));	// 76729 mov     ax, 24E6h ;~ 2331:0244
cs=0x2331;eip=0x000247; 	X(PUSH(ax));	// 76730 push    ax ;~ 2331:0247
cs=0x2331;eip=0x000248; 	R(CALLF(sub_236fe,0));	// 76731 call    sub_236FE ;~ 2331:0248
cs=0x2331;eip=0x00024d; 	T(MOV(ax, 0x24A6));	// 76732 mov     ax, 24A6h ;~ 2331:024D
cs=0x2331;eip=0x000250; 	X(PUSH(ax));	// 76733 push    ax ;~ 2331:0250
cs=0x2331;eip=0x000251; 	R(CALLF(sub_236fe,0));	// 76734 call    sub_236FE ;~ 2331:0251
cs=0x2331;eip=0x000256; 	T(MOV(ax, 0x24B0));	// 76735 mov     ax, 24B0h ;~ 2331:0256
cs=0x2331;eip=0x000259; 	X(PUSH(ax));	// 76736 push    ax ;~ 2331:0259
cs=0x2331;eip=0x00025a; 	R(CALLF(sub_236fe,0));	// 76737 call    sub_236FE ;~ 2331:025A
cs=0x2331;eip=0x00025f; 	T(CMP(si, 0x1B));	// 76738 cmp     si, 1Bh ;~ 2331:025F
cs=0x2331;eip=0x000262; 	R(JZ(loc_31b57));	// 76739 jz      short loc_31B57 ;~ 2331:0262
cs=0x2331;eip=0x000264; 	R(JMP(loc_31c49));	// 76740 jmp     loc_31C49 ;~ 2331:0264
loc_31b57:
	// 9330 
cs=0x2331;eip=0x000267; 	T(SUB(ax, ax));	// 76744 sub     ax, ax ;~ 2331:0267
cs=0x2331;eip=0x000269; 	R(JMP(loc_31c8f));	// 76745 jmp     loc_31C8F ;~ 2331:0269
loc_31b5c:
	// 9331 
cs=0x2331;eip=0x00026c; 	T(MOV(ax, *(dw*)((&unk_54340))));	// 76749 mov     ax, word ptr unk_54340 ;~ 2331:026C
cs=0x2331;eip=0x00026f; 	T(DEC(ax));	// 76750 dec     ax ;~ 2331:026F
cs=0x2331;eip=0x000270; 	T(CMP(ax, *(dw*)((&unk_54338))));	// 76751 cmp     ax, word ptr unk_54338 ;~ 2331:0270
cs=0x2331;eip=0x000274; 	R(JNZ(loc_31b7c));	// 76752 jnz     short loc_31B7C ;~ 2331:0274
cs=0x2331;eip=0x000276; 	R(JMP(loc_31b2c));	// 76753 jmp     short loc_31B2C ;~ 2331:0276
loc_31b68:
	// 9332 
cs=0x2331;eip=0x000278; 	T(CMP(*(dw*)((&unk_54338)), 0));	// 76758 cmp     word ptr unk_54338, 0 ;~ 2331:0278
cs=0x2331;eip=0x00027d; 	R(JG(loc_31b72));	// 76759 jg      short loc_31B72 ;~ 2331:027D
cs=0x2331;eip=0x00027f; 	R(JMP(loc_31a79));	// 76760 jmp     loc_31A79 ;~ 2331:027F
loc_31b72:
	// 9333 
cs=0x2331;eip=0x000282; 	X(DEC(*(dw*)((&unk_54338))));	// 76764 dec     word ptr unk_54338 ;~ 2331:0282
loc_31b76:
	// 9334 
cs=0x2331;eip=0x000286; 	R(CALL(sub_32284,0));	// 76768 call    sub_32284 ;~ 2331:0286
cs=0x2331;eip=0x000289; 	R(JMP(loc_31a79));	// 76769 jmp     loc_31A79 ;~ 2331:0289
loc_31b7c:
	// 9335 
cs=0x2331;eip=0x00028c; 	T(MOV(ax, *(dw*)((&unk_54340))));	// 76774 mov     ax, word ptr unk_54340 ;~ 2331:028C
cs=0x2331;eip=0x00028f; 	T(DEC(ax));	// 76775 dec     ax ;~ 2331:028F
cs=0x2331;eip=0x000290; 	T(CMP(ax, *(dw*)((&unk_54338))));	// 76776 cmp     ax, word ptr unk_54338 ;~ 2331:0290
cs=0x2331;eip=0x000294; 	R(JG(loc_31b89));	// 76777 jg      short loc_31B89 ;~ 2331:0294
cs=0x2331;eip=0x000296; 	R(JMP(loc_31a79));	// 76778 jmp     loc_31A79 ;~ 2331:0296
loc_31b89:
	// 9336 
cs=0x2331;eip=0x000299; 	X(INC(*(dw*)((&unk_54338))));	// 76782 inc     word ptr unk_54338 ;~ 2331:0299
cs=0x2331;eip=0x00029d; 	R(JMP(loc_31b76));	// 76783 jmp     short loc_31B76 ;~ 2331:029D
loc_31b8f:
	// 9337 
cs=0x2331;eip=0x00029f; 	T(CMP(*(dw*)((&unk_54338)), 0));	// 76787 cmp     word ptr unk_54338, 0 ;~ 2331:029F
cs=0x2331;eip=0x0002a4; 	R(JNZ(loc_31b99));	// 76788 jnz     short loc_31B99 ;~ 2331:02A4
cs=0x2331;eip=0x0002a6; 	R(JMP(loc_31a79));	// 76789 jmp     loc_31A79 ;~ 2331:02A6
loc_31b99:
	// 9338 
cs=0x2331;eip=0x0002a9; 	X(MOV(*(dw*)((&unk_54338)), 0));	// 76793 mov     word ptr unk_54338, 0 ;~ 2331:02A9
cs=0x2331;eip=0x0002af; 	R(JMP(loc_31b76));	// 76794 jmp     short loc_31B76 ;~ 2331:02AF
loc_31ba1:
	// 9339 
cs=0x2331;eip=0x0002b1; 	T(MOV(ax, *(dw*)((&unk_54340))));	// 76798 mov     ax, word ptr unk_54340 ;~ 2331:02B1
cs=0x2331;eip=0x0002b4; 	T(DEC(ax));	// 76799 dec     ax ;~ 2331:02B4
cs=0x2331;eip=0x0002b5; 	T(CMP(ax, *(dw*)((&unk_54338))));	// 76800 cmp     ax, word ptr unk_54338 ;~ 2331:02B5
cs=0x2331;eip=0x0002b9; 	R(JNZ(loc_31bae));	// 76801 jnz     short loc_31BAE ;~ 2331:02B9
cs=0x2331;eip=0x0002bb; 	R(JMP(loc_31a79));	// 76802 jmp     loc_31A79 ;~ 2331:02BB
loc_31bae:
	// 9340 
cs=0x2331;eip=0x0002be; 	T(MOV(ax, *(dw*)((&unk_54340))));	// 76806 mov     ax, word ptr unk_54340 ;~ 2331:02BE
cs=0x2331;eip=0x0002c1; 	T(DEC(ax));	// 76807 dec     ax ;~ 2331:02C1
cs=0x2331;eip=0x0002c2; 	X(MOV(*(dw*)((&unk_54338)), ax));	// 76808 mov     word ptr unk_54338, ax ;~ 2331:02C2
cs=0x2331;eip=0x0002c5; 	R(JMP(loc_31b76));	// 76809 jmp     short loc_31B76 ;~ 2331:02C5
loc_31bb7:
	// 9341 
cs=0x2331;eip=0x0002c7; 	T(CMP(*(dw*)((&unk_5433a)), 0x0FFFF));	// 76813 cmp     word ptr unk_5433A, 0FFFFh ;~ 2331:02C7
cs=0x2331;eip=0x0002cc; 	R(JNZ(loc_31bc1));	// 76814 jnz     short loc_31BC1 ;~ 2331:02CC
cs=0x2331;eip=0x0002ce; 	R(JMP(loc_31a79));	// 76815 jmp     loc_31A79 ;~ 2331:02CE
loc_31bc1:
	// 9342 
cs=0x2331;eip=0x0002d1; 	R(CALL(sub_328b7,0));	// 76819 call    sub_328B7 ;~ 2331:02D1
cs=0x2331;eip=0x0002d4; 	R(JMP(loc_31bd3));	// 76820 jmp     short loc_31BD3 ;~ 2331:02D4
loc_31bc6:
	// 9343 
cs=0x2331;eip=0x0002d6; 	T(CMP(*(dw*)((&unk_5433a)), 0x0FFFF));	// 76824 cmp     word ptr unk_5433A, 0FFFFh ;~ 2331:02D6
cs=0x2331;eip=0x0002db; 	R(JNZ(loc_31bd0));	// 76825 jnz     short loc_31BD0 ;~ 2331:02DB
cs=0x2331;eip=0x0002dd; 	R(JMP(loc_31a79));	// 76826 jmp     loc_31A79 ;~ 2331:02DD
loc_31bd0:
	// 9344 
cs=0x2331;eip=0x0002e0; 	R(CALL(sub_32887,0));	// 76830 call    sub_32887 ;~ 2331:02E0
loc_31bd3:
	// 9345 
cs=0x2331;eip=0x0002e3; 	X(PUSH(word_5651a));	// 76833 push    word_5651A ;~ 2331:02E3
cs=0x2331;eip=0x0002e7; 	R(CALLF(sub_202f1,0));	// 76834 call    sub_202F1 ;~ 2331:02E7
cs=0x2331;eip=0x0002ec; 	R(CALL(sub_327c9,0));	// 76835 call    sub_327C9 ;~ 2331:02EC
cs=0x2331;eip=0x0002ef; 	T(MOV(ax, 1));	// 76836 mov     ax, 1 ;~ 2331:02EF
cs=0x2331;eip=0x0002f2; 	T(SUB(ax, word_5651a));	// 76837 sub     ax, word_5651A ;~ 2331:02F2
cs=0x2331;eip=0x0002f6; 	X(PUSH(ax));	// 76838 push    ax ;~ 2331:02F6
cs=0x2331;eip=0x0002f7; 	R(CALLF(sub_202f1,0));	// 76839 call    sub_202F1 ;~ 2331:02F7
cs=0x2331;eip=0x0002fc; 	R(JMP(loc_31a79));	// 76840 jmp     loc_31A79 ;~ 2331:02FC
loc_31bef:
	// 9346 
cs=0x2331;eip=0x0002ff; 	T(CMP(unk_5436a, 0));	// 76844 cmp     byte ptr unk_5436A, 0 ;~ 2331:02FF
cs=0x2331;eip=0x000304; 	R(JNZ(loc_31bf9));	// 76845 jnz     short loc_31BF9 ;~ 2331:0304
cs=0x2331;eip=0x000306; 	R(JMP(loc_31a79));	// 76846 jmp     loc_31A79 ;~ 2331:0306
loc_31bf9:
	// 9347 
cs=0x2331;eip=0x000309; 	R(CALL(sub_34f55,0));	// 76850 call    sub_34F55 ;~ 2331:0309
cs=0x2331;eip=0x00030c; 	R(JMP(loc_31a79));	// 76851 jmp     loc_31A79 ;~ 2331:030C
loc_31bff:
	// 9348 
cs=0x2331;eip=0x00030f; 	T(CMP(unk_5436a, 0));	// 76855 cmp     byte ptr unk_5436A, 0 ;~ 2331:030F
cs=0x2331;eip=0x000314; 	R(JNZ(loc_31c09));	// 76856 jnz     short loc_31C09 ;~ 2331:0314
cs=0x2331;eip=0x000316; 	R(JMP(loc_31a79));	// 76857 jmp     loc_31A79 ;~ 2331:0316
loc_31c09:
	// 9349 
cs=0x2331;eip=0x000319; 	R(CALL(sub_34f97,0));	// 76861 call    sub_34F97 ;~ 2331:0319
cs=0x2331;eip=0x00031c; 	R(JMP(loc_31a79));	// 76862 jmp     loc_31A79 ;~ 2331:031C
loc_31c0f:
	// 9350 
cs=0x2331;eip=0x00031f; 	T(CMP(unk_5436a, 0));	// 76866 cmp     byte ptr unk_5436A, 0 ;~ 2331:031F
cs=0x2331;eip=0x000324; 	R(JNZ(loc_31c19));	// 76867 jnz     short loc_31C19 ;~ 2331:0324
cs=0x2331;eip=0x000326; 	R(JMP(loc_31a79));	// 76868 jmp     loc_31A79 ;~ 2331:0326
loc_31c19:
	// 9351 
cs=0x2331;eip=0x000329; 	R(CALL(sub_34fdc,0));	// 76872 call    sub_34FDC ;~ 2331:0329
cs=0x2331;eip=0x00032c; 	R(JMP(loc_31a79));	// 76873 jmp     loc_31A79 ;~ 2331:032C
loc_31c1f:
	// 9352 
cs=0x2331;eip=0x00032f; 	T(CMP(ax, 0x4900));	// 76877 cmp     ax, 4900h ;~ 2331:032F
cs=0x2331;eip=0x000332; 	R(JNZ(loc_31c27));	// 76878 jnz     short loc_31C27 ;~ 2331:0332
cs=0x2331;eip=0x000334; 	R(JMP(loc_31b68));	// 76879 jmp     loc_31B68 ;~ 2331:0334
loc_31c27:
	// 9353 
cs=0x2331;eip=0x000337; 	T(CMP(ax, 0x4B00));	// 76883 cmp     ax, 4B00h ;~ 2331:0337
cs=0x2331;eip=0x00033a; 	R(JZ(loc_31bb7));	// 76884 jz      short loc_31BB7 ;~ 2331:033A
cs=0x2331;eip=0x00033c; 	T(CMP(ax, 0x4D00));	// 76885 cmp     ax, 4D00h ;~ 2331:033C
cs=0x2331;eip=0x00033f; 	R(JZ(loc_31bc6));	// 76886 jz      short loc_31BC6 ;~ 2331:033F
cs=0x2331;eip=0x000341; 	T(CMP(ax, 0x4F00));	// 76887 cmp     ax, 4F00h ;~ 2331:0341
cs=0x2331;eip=0x000344; 	R(JNZ(loc_31c39));	// 76888 jnz     short loc_31C39 ;~ 2331:0344
cs=0x2331;eip=0x000346; 	R(JMP(loc_31ba1));	// 76889 jmp     loc_31BA1 ;~ 2331:0346
loc_31c39:
	// 9354 
cs=0x2331;eip=0x000349; 	T(CMP(ax, 0x5000));	// 76893 cmp     ax, 5000h ;~ 2331:0349
cs=0x2331;eip=0x00034c; 	R(JZ(loc_31c0f));	// 76894 jz      short loc_31C0F ;~ 2331:034C
cs=0x2331;eip=0x00034e; 	T(CMP(ax, 0x5100));	// 76895 cmp     ax, 5100h ;~ 2331:034E
cs=0x2331;eip=0x000351; 	R(JNZ(loc_31c46));	// 76896 jnz     short loc_31C46 ;~ 2331:0351
cs=0x2331;eip=0x000353; 	R(JMP(loc_31b7c));	// 76897 jmp     loc_31B7C ;~ 2331:0353
loc_31c46:
	// 9355 
cs=0x2331;eip=0x000356; 	R(JMP(loc_31a79));	// 76901 jmp     loc_31A79 ;~ 2331:0356
loc_31c49:
	// 9356 
cs=0x2331;eip=0x000359; 	T(CMP(*(raddr(ss,bp+arg_4)), 0));	// 76905 cmp     [bp+arg_4], 0 ;~ 2331:0359
cs=0x2331;eip=0x00035d; 	R(JZ(loc_31c8c));	// 76906 jz      short loc_31C8C ;~ 2331:035D
cs=0x2331;eip=0x00035f; 	T(CMP(unk_47ac2, 0));	// 76907 cmp     byte ptr unk_47AC2, 0 ;~ 2331:035F
cs=0x2331;eip=0x000364; 	R(JZ(loc_31c68));	// 76908 jz      short loc_31C68 ;~ 2331:0364
cs=0x2331;eip=0x000366; 	T(MOV(si, *(dw*)((&unk_54340))));	// 76909 mov     si, word ptr unk_54340 ;~ 2331:0366
cs=0x2331;eip=0x00036a; 	T(DEC(si));	// 76910 dec     si ;~ 2331:036A
cs=0x2331;eip=0x00036b; 	T(CMP(*(dw*)((&unk_54338)), si));	// 76911 cmp     word ptr unk_54338, si ;~ 2331:036B
cs=0x2331;eip=0x00036f; 	R(JZ(loc_31c68));	// 76912 jz      short loc_31C68 ;~ 2331:036F
cs=0x2331;eip=0x000371; 	X(MOV(*(dw*)((&unk_54338)), si));	// 76913 mov     word ptr unk_54338, si ;~ 2331:0371
cs=0x2331;eip=0x000375; 	R(CALL(sub_32284,0));	// 76914 call    sub_32284 ;~ 2331:0375
loc_31c68:
	// 9357 
cs=0x2331;eip=0x000378; 	T(MOV(ax, 0x24DE));	// 76918 mov     ax, 24DEh ;~ 2331:0378
cs=0x2331;eip=0x00037b; 	X(PUSH(ax));	// 76919 push    ax ;~ 2331:037B
cs=0x2331;eip=0x00037c; 	X(PUSH(*(dw*)((&unk_54336))));	// 76920 push    word ptr unk_54336 ;~ 2331:037C
cs=0x2331;eip=0x000380; 	X(PUSH(*(dw*)((&unk_54334))));	// 76921 push    word ptr unk_54334 ;~ 2331:0380
cs=0x2331;eip=0x000384; 	X(PUSH(*(dw*)((&unk_54332))));	// 76922 push    word ptr unk_54332 ;~ 2331:0384
cs=0x2331;eip=0x000388; 	X(PUSH(*(dw*)((&unk_54330))));	// 76923 push    word ptr unk_54330 ;~ 2331:0388
cs=0x2331;eip=0x00038c; 	X(PUSH(*(dw*)((&unk_5432e))));	// 76924 push    word ptr unk_5432E ;~ 2331:038C
cs=0x2331;eip=0x000390; 	X(PUSH(*(dw*)((&unk_5432c))));	// 76925 push    word ptr unk_5432C ;~ 2331:0390
cs=0x2331;eip=0x000394; 	R(CALLF(sub_35147,0));	// 76926 call    sub_35147 ;~ 2331:0394
cs=0x2331;eip=0x000399; 	T(ADD(sp, 0x0E));	// 76927 add     sp, 0Eh ;~ 2331:0399
loc_31c8c:
	// 9358 
cs=0x2331;eip=0x00039c; 	T(MOV(ax, 1));	// 76930 mov     ax, 1 ;~ 2331:039C
loc_31c8f:
	// 9359 
cs=0x2331;eip=0x00039f; 	X(POP(si));	// 76933 pop     si ;~ 2331:039F
cs=0x2331;eip=0x0003a0; 	T(MOV(sp, bp));	// 76934 mov     sp, bp ;~ 2331:03A0
cs=0x2331;eip=0x0003a2; 	X(POP(bp));	// 76935 pop     bp ;~ 2331:03A2
cs=0x2331;eip=0x0003a3; 	R(RETF(0));	// 76936 retf ;~ 2331:03A3
sub_31c94:
	// 76944 
#undef var_11c
#define var_11c -0x11C
	// 76946 var_11C         = byte ptr -11Ch ;~ 2331:03A4
#undef var_11a
#define var_11a -0x11A
	// 76947 var_11A         = byte ptr -11Ah ;~ 2331:03A4
#undef var_c8
#define var_c8 -0x0C8
	// 76948 var_C8          = byte ptr -0C8h ;~ 2331:03A4
#undef arg_0
#define arg_0 4
	// 76949 arg_0           = byte ptr  4 ;~ 2331:03A4
cs=0x2331;eip=0x0003a4; 	X(PUSH(bp));	// 76951 push    bp ;~ 2331:03A4
cs=0x2331;eip=0x0003a5; 	T(MOV(bp, sp));	// 76952 mov     bp, sp ;~ 2331:03A5
cs=0x2331;eip=0x0003a7; 	T(SUB(sp, 0x11C));	// 76953 sub     sp, 11Ch ;~ 2331:03A7
cs=0x2331;eip=0x0003ab; 	X(PUSH(di));	// 76954 push    di ;~ 2331:03AB
cs=0x2331;eip=0x0003ac; 	X(PUSH(si));	// 76955 push    si ;~ 2331:03AC
cs=0x2331;eip=0x0003ad; 	T(SUB(al, al));	// 76956 sub     al, al ;~ 2331:03AD
cs=0x2331;eip=0x0003af; 	X(MOV(unk_5436b, al));	// 76957 mov     byte ptr unk_5436B, al ;~ 2331:03AF
cs=0x2331;eip=0x0003b2; 	X(MOV(unk_5432a, al));	// 76958 mov     byte ptr unk_5432A, al ;~ 2331:03B2
cs=0x2331;eip=0x0003b5; 	X(MOV(*(dw*)((&unk_54340)), 1));	// 76959 mov     word ptr unk_54340, 1 ;~ 2331:03B5
cs=0x2331;eip=0x0003bb; 	T(MOV(ax, *(dw*)((&unk_54342))));	// 76960 mov     ax, word ptr unk_54342 ;~ 2331:03BB
cs=0x2331;eip=0x0003be; 	T(MOV(dx, *(dw*)((&unk_54344))));	// 76961 mov     dx, word ptr unk_54344 ;~ 2331:03BE
cs=0x2331;eip=0x0003c2; 	X(MOV(*(dw*)((&unk_5436c)), ax));	// 76962 mov     word ptr unk_5436C, ax ;~ 2331:03C2
cs=0x2331;eip=0x0003c5; 	X(MOV(*(dw*)((&unk_5436e)), dx));	// 76963 mov     word ptr unk_5436E, dx ;~ 2331:03C5
cs=0x2331;eip=0x0003c9; 	T(SUB(ax, ax));	// 76964 sub     ax, ax ;~ 2331:03C9
cs=0x2331;eip=0x0003cb; 	X(PUSH(ax));	// 76965 push    ax ;~ 2331:03CB
cs=0x2331;eip=0x0003cc; 	T(CMP(*(raddr(ss,bp+arg_0)), 0));	// 76966 cmp     [bp+arg_0], 0 ;~ 2331:03CC
cs=0x2331;eip=0x0003d0; 	R(JZ(loc_31cc7));	// 76967 jz      short loc_31CC7 ;~ 2331:03D0
cs=0x2331;eip=0x0003d2; 	T(MOV(ax, 0x57));	// 76968 mov     ax, 57h ; 'W' ;~ 2331:03D2
cs=0x2331;eip=0x0003d5; 	R(JMP(loc_31cca));	// 76969 jmp     short loc_31CCA ;~ 2331:03D5
loc_31cc7:
	// 9360 
cs=0x2331;eip=0x0003d7; 	T(MOV(ax, 0x5A));	// 76973 mov     ax, 5Ah ; 'Z' ;~ 2331:03D7
loc_31cca:
	// 9361 
cs=0x2331;eip=0x0003da; 	X(PUSH(ax));	// 76976 push    ax ;~ 2331:03DA
cs=0x2331;eip=0x0003db; 	R(CALL(sub_33056,0));	// 76977 call    sub_33056 ;~ 2331:03DB
cs=0x2331;eip=0x0003de; 	X(PUSH(ax));	// 76978 push    ax ;~ 2331:03DE
cs=0x2331;eip=0x0003df; 	R(CALL(sub_321b2,0));	// 76979 call    sub_321B2 ;~ 2331:03DF
loc_31cd2:
	// 9362 
cs=0x2331;eip=0x0003e2; 	T(LES(bx, *(dd*)((&unk_5436c))));	// 76982 les     bx, dword ptr unk_5436C ;~ 2331:03E2
cs=0x2331;eip=0x0003e6; 	T(MOV(al, *(raddr(es,bx))));	// 76983 mov     al, es:[bx] ;~ 2331:03E6
cs=0x2331;eip=0x0003e9; 	T(SUB(ah, ah));	// 76984 sub     ah, ah ;~ 2331:03E9
cs=0x2331;eip=0x0003eb; 	T(CMP(ax, 0x0F));	// 76985 cmp     ax, 0Fh ;~ 2331:03EB
cs=0x2331;eip=0x0003ee; 	R(JBE(loc_31ce3));	// 76986 jbe     short loc_31CE3 ;~ 2331:03EE
cs=0x2331;eip=0x0003f0; 	R(JMP(loc_321a3));	// 76987 jmp     loc_321A3 ;~ 2331:03F0
loc_31ce3:
	// 9363 
cs=0x2331;eip=0x0003f3; 	T(ADD(ax, ax));	// 76991 add     ax, ax ;~ 2331:03F3
cs=0x2331;eip=0x0003f5; 	T(XCHG(ax, bx));	// 76992 xchg    ax, bx ;~ 2331:03F5
	cs=seg_offset(seg021);
cs=0x2331;eip=0x0003f6; __disp=*(dw*)(((db*)&off_32183)+bx);
	R(JMP(__dispatch_call));	// 76993 jmp     cs:off_32183[bx] ;~ 2331:03F6
loc_31ceb:
	// 9364 
cs=0x2331;eip=0x0003fb; 	T(MOV(bx, *(dw*)((&unk_54340))));	// 76998 mov     bx, word ptr unk_54340 ;~ 2331:03FB
cs=0x2331;eip=0x0003ff; 	T(SHL(bx, 1));	// 76999 shl     bx, 1 ;~ 2331:03FF
cs=0x2331;eip=0x000401; 	T(SHL(bx, 1));	// 77000 shl     bx, 1 ;~ 2331:0401
cs=0x2331;eip=0x000403; 	T(MOV(ax, *(dw*)((&unk_5436c))));	// 77001 mov     ax, word ptr unk_5436C ;~ 2331:0403
cs=0x2331;eip=0x000406; 	T(MOV(dx, es));	// 77002 mov     dx, es ;~ 2331:0406
cs=0x2331;eip=0x000408; 	X(MOV(*(dw*)(raddr(ds,bx-0x366E)), ax));	// 77003 mov     [bx-366Eh], ax ;~ 2331:0408
cs=0x2331;eip=0x00040c; 	X(MOV(*(dw*)(raddr(ds,bx-0x366C)), dx));	// 77004 mov     [bx-366Ch], dx ;~ 2331:040C
cs=0x2331;eip=0x000410; 	R(JMP(loc_321aa));	// 77005 jmp     loc_321AA ;~ 2331:0410
loc_31d03:
	// 9365 
cs=0x2331;eip=0x000413; 	T(MOV(bx, *(dw*)((&unk_54340))));	// 77010 mov     bx, word ptr unk_54340 ;~ 2331:0413
cs=0x2331;eip=0x000417; 	X(INC(*(dw*)((&unk_54340))));	// 77011 inc     word ptr unk_54340 ;~ 2331:0417
cs=0x2331;eip=0x00041b; 	T(SHL(bx, 1));	// 77012 shl     bx, 1 ;~ 2331:041B
cs=0x2331;eip=0x00041d; 	T(SHL(bx, 1));	// 77013 shl     bx, 1 ;~ 2331:041D
cs=0x2331;eip=0x00041f; 	T(MOV(ax, *(dw*)((&unk_5436c))));	// 77014 mov     ax, word ptr unk_5436C ;~ 2331:041F
cs=0x2331;eip=0x000422; 	T(MOV(dx, es));	// 77015 mov     dx, es ;~ 2331:0422
cs=0x2331;eip=0x000424; 	T(INC(ax));	// 77016 inc     ax ;~ 2331:0424
cs=0x2331;eip=0x000425; 	X(MOV(*(dw*)(raddr(ds,bx-0x366E)), ax));	// 77017 mov     [bx-366Eh], ax ;~ 2331:0425
cs=0x2331;eip=0x000429; 	X(MOV(*(dw*)(raddr(ds,bx-0x366C)), dx));	// 77018 mov     [bx-366Ch], dx ;~ 2331:0429
cs=0x2331;eip=0x00042d; 	R(JMP(loc_321a3));	// 77019 jmp     loc_321A3 ;~ 2331:042D
loc_31d20:
	// 9366 
cs=0x2331;eip=0x000430; 	T(MOV(bx, *(dw*)((&unk_5436c))));	// 77024 mov     bx, word ptr unk_5436C ;~ 2331:0430
cs=0x2331;eip=0x000434; 	T(MOV(bl, *(raddr(es,bx+1))));	// 77025 mov     bl, es:[bx+1] ;~ 2331:0434
cs=0x2331;eip=0x000438; 	T(SUB(bh, bh));	// 77026 sub     bh, bh ;~ 2331:0438
cs=0x2331;eip=0x00043a; 	T(MOV(al, *(raddr(ds,bx-0x0A0F))));	// 77027 mov     al, [bx-0A0Fh] ;~ 2331:043A
cs=0x2331;eip=0x00043e; 	T(SUB(ah, ah));	// 77028 sub     ah, ah ;~ 2331:043E
cs=0x2331;eip=0x000440; 	X(PUSH(ax));	// 77029 push    ax ;~ 2331:0440
cs=0x2331;eip=0x000441; 	T(ax = bp+var_c8);	// 77030 lea     ax, [bp+var_C8] ;~ 2331:0441
cs=0x2331;eip=0x000445; 	X(PUSH(ax));	// 77031 push    ax ;~ 2331:0445
cs=0x2331;eip=0x000446; 	R(CALLF(sub_17def,0));	// 77032 call    sub_17DEF ;~ 2331:0446
cs=0x2331;eip=0x00044b; 	T(MOV(ax, 2));	// 77033 mov     ax, 2 ;~ 2331:044B
cs=0x2331;eip=0x00044e; 	R(JMP(loc_31e5d));	// 77034 jmp     loc_31E5D ;~ 2331:044E
loc_31d41:
	// 9367 
cs=0x2331;eip=0x000451; 	T(MOV(ax, 1));	// 77039 mov     ax, 1 ;~ 2331:0451
cs=0x2331;eip=0x000454; 	X(PUSH(ax));	// 77040 push    ax ;~ 2331:0454
cs=0x2331;eip=0x000455; 	T(MOV(al, unk_57043));	// 77041 mov     al, byte ptr unk_57043 ;~ 2331:0455
cs=0x2331;eip=0x000458; 	T(SUB(ah, ah));	// 77042 sub     ah, ah ;~ 2331:0458
cs=0x2331;eip=0x00045a; 	T(ADD(ax, 0x21));	// 77043 add     ax, 21h ; '!' ;~ 2331:045A
cs=0x2331;eip=0x00045d; 	R(JMP(loc_31ea7));	// 77044 jmp     loc_31EA7 ;~ 2331:045D
loc_31d50:
	// 9368 
cs=0x2331;eip=0x000460; 	T(MOV(ax, 1));	// 77049 mov     ax, 1 ;~ 2331:0460
cs=0x2331;eip=0x000463; 	X(PUSH(ax));	// 77050 push    ax ;~ 2331:0463
cs=0x2331;eip=0x000464; 	T(MOV(ax, *(dw*)((&unk_47ab2))));	// 77051 mov     ax, word ptr unk_47AB2 ;~ 2331:0464
cs=0x2331;eip=0x000467; 	T(ADD(ax, 0x41));	// 77052 add     ax, 41h ; 'A' ;~ 2331:0467
cs=0x2331;eip=0x00046a; 	R(JMP(loc_31ea7));	// 77053 jmp     loc_31EA7 ;~ 2331:046A
loc_31d5d:
	// 9369 
cs=0x2331;eip=0x00046d; 	X(PUSH(*(dw*)((&unk_56fe9))));	// 77058 push    word ptr unk_56FE9 ;~ 2331:046D
cs=0x2331;eip=0x000471; 	X(PUSH(*(dw*)((&unk_56fe7))));	// 77059 push    word ptr unk_56FE7 ;~ 2331:0471
cs=0x2331;eip=0x000475; 	X(PUSH(*(dw*)((&unk_56fe5))));	// 77060 push    word ptr unk_56FE5 ;~ 2331:0475
cs=0x2331;eip=0x000479; 	X(PUSH(*(dw*)((&unk_56fe3))));	// 77061 push    word ptr unk_56FE3 ;~ 2331:0479
cs=0x2331;eip=0x00047d; 	T(MOV(ax, 0x24));	// 77062 mov     ax, 24h ; '$' ;~ 2331:047D
cs=0x2331;eip=0x000480; 	X(PUSH(ax));	// 77063 push    ax ;~ 2331:0480
cs=0x2331;eip=0x000481; 	R(CALL(sub_33056,0));	// 77064 call    sub_33056 ;~ 2331:0481
cs=0x2331;eip=0x000484; 	X(PUSH(ax));	// 77065 push    ax ;~ 2331:0484
cs=0x2331;eip=0x000485; 	T(ax = bp+var_c8);	// 77066 lea     ax, [bp+var_C8] ;~ 2331:0485
cs=0x2331;eip=0x000489; 	X(PUSH(ax));	// 77067 push    ax ;~ 2331:0489
cs=0x2331;eip=0x00048a; 	R(CALLF(sub_2f1d9,0));	// 77068 call    sub_2F1D9 ;~ 2331:048A
cs=0x2331;eip=0x00048f; 	T(ADD(sp, 0x0C));	// 77069 add     sp, 0Ch ;~ 2331:048F
loc_31d82:
	// 9370 
cs=0x2331;eip=0x000492; 	T(MOV(ax, 1));	// 77073 mov     ax, 1 ;~ 2331:0492
cs=0x2331;eip=0x000495; 	R(JMP(loc_31e5d));	// 77074 jmp     loc_31E5D ;~ 2331:0495
loc_31d88:
	// 9371 
cs=0x2331;eip=0x000498; 	T(LES(bx, *(dd*)((&unk_56fd6))));	// 77079 les     bx, dword ptr unk_56FD6 ;~ 2331:0498
cs=0x2331;eip=0x00049c; 	T(CMP(*(dw*)(raddr(es,bx+0x1FE)), 0));	// 77080 cmp     word ptr es:[bx+1FEh], 0 ;~ 2331:049C
cs=0x2331;eip=0x0004a2; 	R(JNZ(loc_31da1));	// 77081 jnz     short loc_31DA1 ;~ 2331:04A2
cs=0x2331;eip=0x0004a4; 	T(MOV(ax, 1));	// 77082 mov     ax, 1 ;~ 2331:04A4
cs=0x2331;eip=0x0004a7; 	X(PUSH(ax));	// 77083 push    ax ;~ 2331:04A7
cs=0x2331;eip=0x0004a8; 	T(MOV(ax, 0x61));	// 77084 mov     ax, 61h ; 'a' ;~ 2331:04A8
cs=0x2331;eip=0x0004ab; 	X(PUSH(ax));	// 77085 push    ax ;~ 2331:04AB
cs=0x2331;eip=0x0004ac; 	R(CALL(sub_33056,0));	// 77086 call    sub_33056 ;~ 2331:04AC
cs=0x2331;eip=0x0004af; 	R(JMP(loc_31dde));	// 77087 jmp     short loc_31DDE ;~ 2331:04AF
loc_31da1:
	// 9372 
cs=0x2331;eip=0x0004b1; 	T(LES(bx, *(dd*)((&unk_56fd6))));	// 77091 les     bx, dword ptr unk_56FD6 ;~ 2331:04B1
cs=0x2331;eip=0x0004b5; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1FC))));	// 77092 mov     ax, es:[bx+1FCh] ;~ 2331:04B5
cs=0x2331;eip=0x0004ba; 	T(CWD);	// 77093 cwd ;~ 2331:04BA
cs=0x2331;eip=0x0004bb; 	T(MOV(cx, 0x168));	// 77094 mov     cx, 168h ;~ 2331:04BB
cs=0x2331;eip=0x0004be; 	T(IDIV2(cx));	// 77095 idiv    cx ;~ 2331:04BE
cs=0x2331;eip=0x0004c0; 	T(MOV(bx, ax));	// 77096 mov     bx, ax ;~ 2331:04C0
cs=0x2331;eip=0x0004c2; 	T(SHL(bx, 1));	// 77097 shl     bx, 1 ;~ 2331:04C2
cs=0x2331;eip=0x0004c4; 	X(PUSH(*(dw*)(raddr(ds,bx+0x257E))));	// 77098 push    word ptr [bx+257Eh] ;~ 2331:04C4
cs=0x2331;eip=0x0004c8; 	T(MOV(bx, *(dw*)((&unk_56fd6))));	// 77099 mov     bx, word ptr unk_56FD6 ;~ 2331:04C8
cs=0x2331;eip=0x0004cc; 	X(PUSH(*(dw*)(raddr(es,bx+0x1FE))));	// 77100 push    word ptr es:[bx+1FEh] ;~ 2331:04CC
cs=0x2331;eip=0x0004d1; 	T(MOV(ax, 0x60));	// 77101 mov     ax, 60h ; '`' ;~ 2331:04D1
cs=0x2331;eip=0x0004d4; 	X(PUSH(ax));	// 77102 push    ax ;~ 2331:04D4
cs=0x2331;eip=0x0004d5; 	R(CALL(sub_33056,0));	// 77103 call    sub_33056 ;~ 2331:04D5
cs=0x2331;eip=0x0004d8; 	X(PUSH(ax));	// 77104 push    ax ;~ 2331:04D8
cs=0x2331;eip=0x0004d9; 	T(ax = bp+var_c8);	// 77105 lea     ax, [bp+var_C8] ;~ 2331:04D9
cs=0x2331;eip=0x0004dd; 	X(PUSH(ax));	// 77106 push    ax ;~ 2331:04DD
cs=0x2331;eip=0x0004de; 	R(CALLF(sub_2f1d9,0));	// 77107 call    sub_2F1D9 ;~ 2331:04DE
cs=0x2331;eip=0x0004e3; 	T(ADD(sp, 8));	// 77108 add     sp, 8 ;~ 2331:04E3
cs=0x2331;eip=0x0004e6; 	T(MOV(ax, 1));	// 77109 mov     ax, 1 ;~ 2331:04E6
cs=0x2331;eip=0x0004e9; 	X(PUSH(ax));	// 77110 push    ax ;~ 2331:04E9
cs=0x2331;eip=0x0004ea; 	T(ax = bp+var_c8);	// 77111 lea     ax, [bp+var_C8] ;~ 2331:04EA
loc_31dde:
	// 9373 
cs=0x2331;eip=0x0004ee; 	X(PUSH(ax));	// 77114 push    ax ;~ 2331:04EE
cs=0x2331;eip=0x0004ef; 	R(CALL(sub_321b2,0));	// 77115 call    sub_321B2 ;~ 2331:04EF
cs=0x2331;eip=0x0004f2; 	T(SUB(ax, ax));	// 77116 sub     ax, ax ;~ 2331:04F2
cs=0x2331;eip=0x0004f4; 	X(PUSH(ax));	// 77117 push    ax ;~ 2331:04F4
cs=0x2331;eip=0x0004f5; 	T(MOV(al, unk_57044));	// 77118 mov     al, byte ptr unk_57044 ;~ 2331:04F5
cs=0x2331;eip=0x0004f8; 	T(SUB(ah, ah));	// 77119 sub     ah, ah ;~ 2331:04F8
cs=0x2331;eip=0x0004fa; 	T(ADD(ax, 0x25));	// 77120 add     ax, 25h ; '%' ;~ 2331:04FA
cs=0x2331;eip=0x0004fd; 	X(PUSH(ax));	// 77121 push    ax ;~ 2331:04FD
cs=0x2331;eip=0x0004fe; 	R(CALL(sub_33056,0));	// 77122 call    sub_33056 ;~ 2331:04FE
cs=0x2331;eip=0x000501; 	X(PUSH(ax));	// 77123 push    ax ;~ 2331:0501
cs=0x2331;eip=0x000502; 	R(CALL(sub_321b2,0));	// 77124 call    sub_321B2 ;~ 2331:0502
cs=0x2331;eip=0x000505; 	T(SUB(ax, ax));	// 77125 sub     ax, ax ;~ 2331:0505
cs=0x2331;eip=0x000507; 	X(PUSH(ax));	// 77126 push    ax ;~ 2331:0507
cs=0x2331;eip=0x000508; 	T(MOV(ax, 0x59));	// 77127 mov     ax, 59h ; 'Y' ;~ 2331:0508
cs=0x2331;eip=0x00050b; 	R(JMP(loc_31ea7));	// 77128 jmp     loc_31EA7 ;~ 2331:050B
loc_31dfe:
	// 9374 
cs=0x2331;eip=0x00050e; 	T(MOV(ax, 1));	// 77133 mov     ax, 1 ;~ 2331:050E
cs=0x2331;eip=0x000511; 	X(PUSH(ax));	// 77134 push    ax ;~ 2331:0511
cs=0x2331;eip=0x000512; 	T(MOV(ax, 0x2561));	// 77135 mov     ax, 2561h ;~ 2331:0512
cs=0x2331;eip=0x000515; 	X(PUSH(ax));	// 77136 push    ax ;~ 2331:0515
cs=0x2331;eip=0x000516; 	R(CALL(sub_321b2,0));	// 77137 call    sub_321B2 ;~ 2331:0516
cs=0x2331;eip=0x000519; 	T(CMP(unk_56eb1, 0));	// 77138 cmp     byte ptr unk_56EB1, 0 ;~ 2331:0519
cs=0x2331;eip=0x00051e; 	R(JNZ(loc_31e1a));	// 77139 jnz     short loc_31E1A ;~ 2331:051E
cs=0x2331;eip=0x000520; 	T(CMP(unk_56eb0, 3));	// 77140 cmp     byte ptr unk_56EB0, 3 ;~ 2331:0520
cs=0x2331;eip=0x000525; 	R(JNZ(loc_31e1a));	// 77141 jnz     short loc_31E1A ;~ 2331:0525
cs=0x2331;eip=0x000527; 	R(JMP(loc_321a3));	// 77142 jmp     loc_321A3 ;~ 2331:0527
loc_31e1a:
	// 9375 
cs=0x2331;eip=0x00052a; 	T(SUB(ax, ax));	// 77147 sub     ax, ax ;~ 2331:052A
cs=0x2331;eip=0x00052c; 	X(PUSH(ax));	// 77148 push    ax ;~ 2331:052C
cs=0x2331;eip=0x00052d; 	T(MOV(ax, 0x257A));	// 77149 mov     ax, 257Ah ;~ 2331:052D
cs=0x2331;eip=0x000530; 	X(PUSH(ax));	// 77150 push    ax ;~ 2331:0530
cs=0x2331;eip=0x000531; 	R(CALL(sub_321b2,0));	// 77151 call    sub_321B2 ;~ 2331:0531
cs=0x2331;eip=0x000534; 	T(CMP(unk_56eb1, 3));	// 77152 cmp     byte ptr unk_56EB1, 3 ;~ 2331:0534
cs=0x2331;eip=0x000539; 	R(JC(loc_31e69));	// 77153 jb      short loc_31E69 ;~ 2331:0539
cs=0x2331;eip=0x00053b; 	T(CMP(unk_56eb1, 7));	// 77154 cmp     byte ptr unk_56EB1, 7 ;~ 2331:053B
cs=0x2331;eip=0x000540; 	R(JNZ(loc_31e37));	// 77155 jnz     short loc_31E37 ;~ 2331:0540
cs=0x2331;eip=0x000542; 	T(MOV(ax, 0x7E));	// 77156 mov     ax, 7Eh ; '~' ;~ 2331:0542
cs=0x2331;eip=0x000545; 	R(JMP(loc_31e3f));	// 77157 jmp     short loc_31E3F ;~ 2331:0545
loc_31e37:
	// 9376 
cs=0x2331;eip=0x000547; 	T(MOV(al, unk_56eb1));	// 77161 mov     al, byte ptr unk_56EB1 ;~ 2331:0547
cs=0x2331;eip=0x00054a; 	T(SUB(ah, ah));	// 77162 sub     ah, ah ;~ 2331:054A
cs=0x2331;eip=0x00054c; 	T(ADD(ax, 0x38));	// 77163 add     ax, 38h ; '8' ;~ 2331:054C
loc_31e3f:
	// 9377 
cs=0x2331;eip=0x00054f; 	T(MOV(si, ax));	// 77166 mov     si, ax ;~ 2331:054F
cs=0x2331;eip=0x000551; 	X(PUSH(si));	// 77167 push    si ;~ 2331:0551
cs=0x2331;eip=0x000552; 	R(CALL(sub_33056,0));	// 77168 call    sub_33056 ;~ 2331:0552
cs=0x2331;eip=0x000555; 	X(PUSH(ax));	// 77169 push    ax ;~ 2331:0555
cs=0x2331;eip=0x000556; 	T(MOV(ax, 0x0F503));	// 77170 mov     ax, 0F503h ;~ 2331:0556
cs=0x2331;eip=0x000559; 	X(PUSH(ax));	// 77171 push    ax ;~ 2331:0559
cs=0x2331;eip=0x00055a; 	T(MOV(ax, 0x2562));	// 77172 mov     ax, 2562h ;~ 2331:055A
cs=0x2331;eip=0x00055d; 	X(PUSH(ax));	// 77173 push    ax ;~ 2331:055D
cs=0x2331;eip=0x00055e; 	T(ax = bp+var_c8);	// 77174 lea     ax, [bp+var_C8] ;~ 2331:055E
cs=0x2331;eip=0x000562; 	X(PUSH(ax));	// 77175 push    ax ;~ 2331:0562
cs=0x2331;eip=0x000563; 	R(CALLF(sub_2f1d9,0));	// 77176 call    sub_2F1D9 ;~ 2331:0563
cs=0x2331;eip=0x000568; 	T(ADD(sp, 8));	// 77177 add     sp, 8 ;~ 2331:0568
cs=0x2331;eip=0x00056b; 	T(SUB(ax, ax));	// 77178 sub     ax, ax ;~ 2331:056B
loc_31e5d:
	// 9378 
cs=0x2331;eip=0x00056d; 	X(PUSH(ax));	// 77182 push    ax ;~ 2331:056D
cs=0x2331;eip=0x00056e; 	T(ax = bp+var_c8);	// 77183 lea     ax, [bp+var_C8] ;~ 2331:056E
loc_31e62:
	// 9379 
cs=0x2331;eip=0x000572; 	X(PUSH(ax));	// 77186 push    ax ;~ 2331:0572
cs=0x2331;eip=0x000573; 	R(CALL(sub_321b2,0));	// 77187 call    sub_321B2 ;~ 2331:0573
cs=0x2331;eip=0x000576; 	R(JMP(loc_321a3));	// 77188 jmp     loc_321A3 ;~ 2331:0576
loc_31e69:
	// 9380 
cs=0x2331;eip=0x000579; 	T(CMP(unk_56eb1, 0));	// 77192 cmp     byte ptr unk_56EB1, 0 ;~ 2331:0579
cs=0x2331;eip=0x00057e; 	R(JZ(loc_31e83));	// 77193 jz      short loc_31E83 ;~ 2331:057E
cs=0x2331;eip=0x000580; 	T(SUB(ax, ax));	// 77194 sub     ax, ax ;~ 2331:0580
cs=0x2331;eip=0x000582; 	X(PUSH(ax));	// 77195 push    ax ;~ 2331:0582
cs=0x2331;eip=0x000583; 	T(MOV(al, unk_56eb1));	// 77196 mov     al, byte ptr unk_56EB1 ;~ 2331:0583
cs=0x2331;eip=0x000586; 	T(SUB(ah, ah));	// 77197 sub     ah, ah ;~ 2331:0586
cs=0x2331;eip=0x000588; 	T(ADD(ax, 0x3E));	// 77198 add     ax, 3Eh ; '>' ;~ 2331:0588
cs=0x2331;eip=0x00058b; 	X(PUSH(ax));	// 77199 push    ax ;~ 2331:058B
cs=0x2331;eip=0x00058c; 	R(CALL(sub_33056,0));	// 77200 call    sub_33056 ;~ 2331:058C
cs=0x2331;eip=0x00058f; 	X(PUSH(ax));	// 77201 push    ax ;~ 2331:058F
cs=0x2331;eip=0x000590; 	R(CALL(sub_321b2,0));	// 77202 call    sub_321B2 ;~ 2331:0590
loc_31e83:
	// 9381 
cs=0x2331;eip=0x000593; 	T(MOV(al, unk_56eb0));	// 77205 mov     al, byte ptr unk_56EB0 ;~ 2331:0593
cs=0x2331;eip=0x000596; 	T(SUB(ah, ah));	// 77206 sub     ah, ah ;~ 2331:0596
cs=0x2331;eip=0x000598; 	T(OR(ax, ax));	// 77207 or      ax, ax ;~ 2331:0598
cs=0x2331;eip=0x00059a; 	R(JZ(loc_31e99));	// 77208 jz      short loc_31E99 ;~ 2331:059A
cs=0x2331;eip=0x00059c; 	T(CMP(ax, 1));	// 77209 cmp     ax, 1 ;~ 2331:059C
cs=0x2331;eip=0x00059f; 	R(JZ(loc_31ead));	// 77210 jz      short loc_31EAD ;~ 2331:059F
cs=0x2331;eip=0x0005a1; 	T(CMP(ax, 2));	// 77211 cmp     ax, 2 ;~ 2331:05A1
cs=0x2331;eip=0x0005a4; 	R(JZ(loc_31eb5));	// 77212 jz      short loc_31EB5 ;~ 2331:05A4
cs=0x2331;eip=0x0005a6; 	R(JMP(loc_321a3));	// 77213 jmp     loc_321A3 ;~ 2331:05A6
loc_31e99:
	// 9382 
cs=0x2331;eip=0x0005a9; 	T(SUB(ax, ax));	// 77217 sub     ax, ax ;~ 2331:05A9
cs=0x2331;eip=0x0005ab; 	X(PUSH(ax));	// 77218 push    ax ;~ 2331:05AB
cs=0x2331;eip=0x0005ac; 	R(CALLF(sub_29370,0));	// 77219 call    sub_29370 ;~ 2331:05AC
cs=0x2331;eip=0x0005b1; 	T(AND(ax, 1));	// 77220 and     ax, 1 ;~ 2331:05B1
cs=0x2331;eip=0x0005b4; 	T(ADD(ax, 0x12));	// 77221 add     ax, 12h ;~ 2331:05B4
loc_31ea7:
	// 9383 
cs=0x2331;eip=0x0005b7; 	X(PUSH(ax));	// 77225 push    ax ;~ 2331:05B7
cs=0x2331;eip=0x0005b8; 	R(CALL(sub_33056,0));	// 77226 call    sub_33056 ;~ 2331:05B8
cs=0x2331;eip=0x0005bb; 	R(JMP(loc_31e62));	// 77227 jmp     short loc_31E62 ;~ 2331:05BB
loc_31ead:
	// 9384 
cs=0x2331;eip=0x0005bd; 	T(SUB(ax, ax));	// 77231 sub     ax, ax ;~ 2331:05BD
cs=0x2331;eip=0x0005bf; 	X(PUSH(ax));	// 77232 push    ax ;~ 2331:05BF
cs=0x2331;eip=0x0005c0; 	T(MOV(ax, 0x14));	// 77233 mov     ax, 14h ;~ 2331:05C0
cs=0x2331;eip=0x0005c3; 	R(JMP(loc_31ea7));	// 77234 jmp     short loc_31EA7 ;~ 2331:05C3
loc_31eb5:
	// 9385 
cs=0x2331;eip=0x0005c5; 	T(SUB(ax, ax));	// 77238 sub     ax, ax ;~ 2331:05C5
cs=0x2331;eip=0x0005c7; 	X(PUSH(ax));	// 77239 push    ax ;~ 2331:05C7
cs=0x2331;eip=0x0005c8; 	T(MOV(ax, 0x15));	// 77240 mov     ax, 15h ;~ 2331:05C8
cs=0x2331;eip=0x0005cb; 	R(JMP(loc_31ea7));	// 77241 jmp     short loc_31EA7 ;~ 2331:05CB
loc_31ebd:
	// 9386 
cs=0x2331;eip=0x0005cd; 	T(MOV(ax, 1));	// 77246 mov     ax, 1 ;~ 2331:05CD
cs=0x2331;eip=0x0005d0; 	X(PUSH(ax));	// 77247 push    ax ;~ 2331:05D0
cs=0x2331;eip=0x0005d1; 	T(MOV(ax, 0x58));	// 77248 mov     ax, 58h ; 'X' ;~ 2331:05D1
cs=0x2331;eip=0x0005d4; 	R(JMP(loc_31ea7));	// 77249 jmp     short loc_31EA7 ;~ 2331:05D4
loc_31ec6:
	// 9387 
cs=0x2331;eip=0x0005d6; 	T(SUB(ax, ax));	// 77254 sub     ax, ax ;~ 2331:05D6
cs=0x2331;eip=0x0005d8; 	X(PUSH(ax));	// 77255 push    ax ;~ 2331:05D8
cs=0x2331;eip=0x0005d9; 	T(MOV(ax, 0x18));	// 77256 mov     ax, 18h ;~ 2331:05D9
cs=0x2331;eip=0x0005dc; 	X(PUSH(ax));	// 77257 push    ax ;~ 2331:05DC
cs=0x2331;eip=0x0005dd; 	R(CALL(sub_33056,0));	// 77258 call    sub_33056 ;~ 2331:05DD
cs=0x2331;eip=0x0005e0; 	X(PUSH(ax));	// 77259 push    ax ;~ 2331:05E0
cs=0x2331;eip=0x0005e1; 	R(CALL(sub_321b2,0));	// 77260 call    sub_321B2 ;~ 2331:05E1
cs=0x2331;eip=0x0005e4; 	X(MOV(unk_5432a, 1));	// 77261 mov     byte ptr unk_5432A, 1 ;~ 2331:05E4
cs=0x2331;eip=0x0005e9; 	T(MOV(ax, 0x18));	// 77262 mov     ax, 18h ;~ 2331:05E9
cs=0x2331;eip=0x0005ec; 	X(PUSH(ax));	// 77263 push    ax ;~ 2331:05EC
cs=0x2331;eip=0x0005ed; 	R(CALL(sub_33056,0));	// 77264 call    sub_33056 ;~ 2331:05ED
cs=0x2331;eip=0x0005f0; 	T(MOV(bx, ax));	// 77265 mov     bx, ax ;~ 2331:05F0
cs=0x2331;eip=0x0005f2; 	T(MOV(di, bx));	// 77266 mov     di, bx ;~ 2331:05F2
cs=0x2331;eip=0x0005f4; 	T(MOV(ax, ds));	// 77267 mov     ax, ds ;~ 2331:05F4
cs=0x2331;eip=0x0005f6; 	T(MOV(es, ax));	// 77268 mov     es, ax ;~ 2331:05F6
cs=0x2331;eip=0x0005f8; 	T(MOV(cx, 0x0FFFF));	// 77270 mov     cx, 0FFFFh ;~ 2331:05F8
cs=0x2331;eip=0x0005fb; 	T(XOR(ax, ax));	// 77271 xor     ax, ax ;~ 2331:05FB
	// 77272 repne scasb ;~ 2331:05FD
cs=0x2331;eip=0x0005fd; 	T(	REPNE SCASB);	// 77272 repne scasb ;~ 2331:05FD
cs=0x2331;eip=0x0005ff; 	T(NOT(cx));	// 77273 not     cx ;~ 2331:05FF
cs=0x2331;eip=0x000601; 	T(DEC(cx));	// 77274 dec     cx ;~ 2331:0601
cs=0x2331;eip=0x000602; 	X(ADD(*(dw*)((&unk_5436c)), cx));	// 77275 add     word ptr unk_5436C, cx ;~ 2331:0602
cs=0x2331;eip=0x000606; 	R(JMP(loc_321a3));	// 77276 jmp     loc_321A3 ;~ 2331:0606
loc_31ef9:
	// 9388 
cs=0x2331;eip=0x000609; 	T(CMP(unk_5436b, 0));	// 77281 cmp     byte ptr unk_5436B, 0 ;~ 2331:0609
cs=0x2331;eip=0x00060e; 	R(JZ(loc_31f03));	// 77282 jz      short loc_31F03 ;~ 2331:060E
cs=0x2331;eip=0x000610; 	R(JMP(loc_321a3));	// 77283 jmp     loc_321A3 ;~ 2331:0610
loc_31f03:
	// 9389 
cs=0x2331;eip=0x000613; 	T(CMP(unk_56feb, 0));	// 77287 cmp     byte ptr unk_56FEB, 0 ;~ 2331:0613
cs=0x2331;eip=0x000618; 	R(JZ(loc_31f0f));	// 77288 jz      short loc_31F0F ;~ 2331:0618
cs=0x2331;eip=0x00061a; 	T(MOV(ax, 0x6C));	// 77289 mov     ax, 6Ch ; 'l' ;~ 2331:061A
cs=0x2331;eip=0x00061d; 	R(JMP(loc_31f12));	// 77290 jmp     short loc_31F12 ;~ 2331:061D
loc_31f0f:
	// 9390 
cs=0x2331;eip=0x00061f; 	T(MOV(ax, 0x6D));	// 77294 mov     ax, 6Dh ; 'm' ;~ 2331:061F
loc_31f12:
	// 9391 
cs=0x2331;eip=0x000622; 	X(PUSH(ax));	// 77297 push    ax ;~ 2331:0622
cs=0x2331;eip=0x000623; 	R(CALL(sub_33056,0));	// 77298 call    sub_33056 ;~ 2331:0623
cs=0x2331;eip=0x000626; 	T(MOV(bx, ax));	// 77299 mov     bx, ax ;~ 2331:0626
cs=0x2331;eip=0x000628; 	X(PUSH(si));	// 77300 push    si ;~ 2331:0628
cs=0x2331;eip=0x000629; 	T(MOV(di, bx));	// 77301 mov     di, bx ;~ 2331:0629
cs=0x2331;eip=0x00062b; 	T(si = bp+var_11a);	// 77302 lea     si, [bp+var_11A] ;~ 2331:062B
cs=0x2331;eip=0x00062f; 	T(MOV(ax, ds));	// 77303 mov     ax, ds ;~ 2331:062F
cs=0x2331;eip=0x000631; 	T(MOV(es, ax));	// 77304 mov     es, ax ;~ 2331:0631
cs=0x2331;eip=0x000633; 	T(MOV(cx, 0x0FFFF));	// 77305 mov     cx, 0FFFFh ;~ 2331:0633
cs=0x2331;eip=0x000636; 	T(XOR(ax, ax));	// 77306 xor     ax, ax ;~ 2331:0636
	// 77307 repne scasb ;~ 2331:0638
cs=0x2331;eip=0x000638; 	T(	REPNE SCASB);	// 77307 repne scasb ;~ 2331:0638
cs=0x2331;eip=0x00063a; 	T(NOT(cx));	// 77308 not     cx ;~ 2331:063A
cs=0x2331;eip=0x00063c; 	T(SUB(di, cx));	// 77309 sub     di, cx ;~ 2331:063C
cs=0x2331;eip=0x00063e; 	T(XCHG(di, si));	// 77310 xchg    di, si ;~ 2331:063E
cs=0x2331;eip=0x000640; 	T(SHR(cx, 1));	// 77311 shr     cx, 1 ;~ 2331:0640
	// 77312 repne movsw ;~ 2331:0642
cs=0x2331;eip=0x000642; 	X(	REPNE MOVSW);	// 77312 repne movsw ;~ 2331:0642
cs=0x2331;eip=0x000644; 	T(ADC(cx, cx));	// 77313 adc     cx, cx ;~ 2331:0644
	// 77314 repne movsb ;~ 2331:0646
cs=0x2331;eip=0x000646; 	X(	REPNE MOVSB);	// 77314 repne movsb ;~ 2331:0646
cs=0x2331;eip=0x000648; 	X(POP(si));	// 77315 pop     si ;~ 2331:0648
cs=0x2331;eip=0x000649; 	R(CALL(sub_334ff,0));	// 77316 call    sub_334FF ;~ 2331:0649
cs=0x2331;eip=0x00064c; 	T(ADD(ax, 0x6E));	// 77317 add     ax, 6Eh ; 'n' ;~ 2331:064C
cs=0x2331;eip=0x00064f; 	X(PUSH(ax));	// 77318 push    ax ;~ 2331:064F
cs=0x2331;eip=0x000650; 	R(CALL(sub_33056,0));	// 77319 call    sub_33056 ;~ 2331:0650
cs=0x2331;eip=0x000653; 	X(PUSH(ax));	// 77320 push    ax ;~ 2331:0653
cs=0x2331;eip=0x000654; 	T(ax = bp+var_11a);	// 77321 lea     ax, [bp+var_11A] ;~ 2331:0654
cs=0x2331;eip=0x000658; 	X(PUSH(ax));	// 77322 push    ax ;~ 2331:0658
cs=0x2331;eip=0x000659; 	T(ax = bp+var_c8);	// 77323 lea     ax, [bp+var_C8] ;~ 2331:0659
cs=0x2331;eip=0x00065d; 	X(PUSH(ax));	// 77324 push    ax ;~ 2331:065D
cs=0x2331;eip=0x00065e; 	R(CALLF(sub_2f1d9,0));	// 77325 call    sub_2F1D9 ;~ 2331:065E
cs=0x2331;eip=0x000663; 	T(ADD(sp, 6));	// 77326 add     sp, 6 ;~ 2331:0663
cs=0x2331;eip=0x000666; 	T(SUB(ax, ax));	// 77327 sub     ax, ax ;~ 2331:0666
cs=0x2331;eip=0x000668; 	X(PUSH(ax));	// 77328 push    ax ;~ 2331:0668
cs=0x2331;eip=0x000669; 	T(ax = bp+var_c8);	// 77329 lea     ax, [bp+var_C8] ;~ 2331:0669
cs=0x2331;eip=0x00066d; 	X(PUSH(ax));	// 77330 push    ax ;~ 2331:066D
cs=0x2331;eip=0x00066e; 	R(CALL(sub_321b2,0));	// 77331 call    sub_321B2 ;~ 2331:066E
cs=0x2331;eip=0x000671; 	T(CMP(unk_56fed, 0));	// 77332 cmp     byte ptr unk_56FED, 0 ;~ 2331:0671
cs=0x2331;eip=0x000676; 	R(JNZ(loc_31f6b));	// 77333 jnz     short loc_31F6B ;~ 2331:0676
cs=0x2331;eip=0x000678; 	R(JMP(loc_32057));	// 77334 jmp     loc_32057 ;~ 2331:0678
loc_31f6b:
	// 9392 
cs=0x2331;eip=0x00067b; 	T(MOV(si, 7));	// 77338 mov     si, 7 ;~ 2331:067B
cs=0x2331;eip=0x00067e; 	X(MOV(*(raddr(ss,bp+var_11c)), 1));	// 77339 mov     [bp+var_11C], 1 ;~ 2331:067E
loc_31f73:
	// 9393 
cs=0x2331;eip=0x000683; 	T(MOV(ax, 1));	// 77342 mov     ax, 1 ;~ 2331:0683
cs=0x2331;eip=0x000686; 	T(MOV(cx, si));	// 77343 mov     cx, si ;~ 2331:0686
cs=0x2331;eip=0x000688; 	T(SHL(ax, cl));	// 77344 shl     ax, cl ;~ 2331:0688
cs=0x2331;eip=0x00068a; 	T(MOV(cl, unk_56fed));	// 77345 mov     cl, byte ptr unk_56FED ;~ 2331:068A
cs=0x2331;eip=0x00068e; 	T(SUB(ch, ch));	// 77346 sub     ch, ch ;~ 2331:068E
cs=0x2331;eip=0x000690; 	T(TEST(ax, cx));	// 77347 test    ax, cx ;~ 2331:0690
cs=0x2331;eip=0x000692; 	R(JZ(loc_31fd4));	// 77348 jz      short loc_31FD4 ;~ 2331:0692
cs=0x2331;eip=0x000694; 	T(CMP(*(raddr(ss,bp+var_11c)), ch));	// 77349 cmp     [bp+var_11C], ch ;~ 2331:0694
cs=0x2331;eip=0x000698; 	R(JZ(loc_31fd9));	// 77350 jz      short loc_31FD9 ;~ 2331:0698
cs=0x2331;eip=0x00069a; 	T(MOV(ax, 0x86));	// 77351 mov     ax, 86h ; 'Ü' ;~ 2331:069A
cs=0x2331;eip=0x00069d; 	X(PUSH(ax));	// 77352 push    ax ;~ 2331:069D
cs=0x2331;eip=0x00069e; 	R(CALL(sub_33056,0));	// 77353 call    sub_33056 ;~ 2331:069E
cs=0x2331;eip=0x0006a1; 	T(MOV(bx, ax));	// 77354 mov     bx, ax ;~ 2331:06A1
cs=0x2331;eip=0x0006a3; 	X(PUSH(si));	// 77355 push    si ;~ 2331:06A3
cs=0x2331;eip=0x0006a4; 	T(MOV(di, bx));	// 77356 mov     di, bx ;~ 2331:06A4
cs=0x2331;eip=0x0006a6; 	T(si = bp+var_11a);	// 77357 lea     si, [bp+var_11A] ;~ 2331:06A6
cs=0x2331;eip=0x0006aa; 	T(MOV(ax, ds));	// 77358 mov     ax, ds ;~ 2331:06AA
cs=0x2331;eip=0x0006ac; 	T(MOV(es, ax));	// 77359 mov     es, ax ;~ 2331:06AC
cs=0x2331;eip=0x0006ae; 	T(MOV(cx, 0x0FFFF));	// 77360 mov     cx, 0FFFFh ;~ 2331:06AE
cs=0x2331;eip=0x0006b1; 	T(XOR(ax, ax));	// 77361 xor     ax, ax ;~ 2331:06B1
	// 77362 repne scasb ;~ 2331:06B3
cs=0x2331;eip=0x0006b3; 	T(	REPNE SCASB);	// 77362 repne scasb ;~ 2331:06B3
cs=0x2331;eip=0x0006b5; 	T(NOT(cx));	// 77363 not     cx ;~ 2331:06B5
cs=0x2331;eip=0x0006b7; 	T(SUB(di, cx));	// 77364 sub     di, cx ;~ 2331:06B7
cs=0x2331;eip=0x0006b9; 	T(XCHG(di, si));	// 77365 xchg    di, si ;~ 2331:06B9
cs=0x2331;eip=0x0006bb; 	T(SHR(cx, 1));	// 77366 shr     cx, 1 ;~ 2331:06BB
	// 77367 repne movsw ;~ 2331:06BD
cs=0x2331;eip=0x0006bd; 	X(	REPNE MOVSW);	// 77367 repne movsw ;~ 2331:06BD
cs=0x2331;eip=0x0006bf; 	T(ADC(cx, cx));	// 77368 adc     cx, cx ;~ 2331:06BF
	// 77369 repne movsb ;~ 2331:06C1
cs=0x2331;eip=0x0006c1; 	X(	REPNE MOVSB);	// 77369 repne movsb ;~ 2331:06C1
cs=0x2331;eip=0x0006c3; 	X(POP(si));	// 77370 pop     si ;~ 2331:06C3
cs=0x2331;eip=0x0006c4; 	T(ax = si+0x87);	// 77371 lea     ax, [si+87h] ;~ 2331:06C4
cs=0x2331;eip=0x0006c8; 	X(PUSH(ax));	// 77372 push    ax ;~ 2331:06C8
cs=0x2331;eip=0x0006c9; 	R(CALL(sub_33056,0));	// 77373 call    sub_33056 ;~ 2331:06C9
cs=0x2331;eip=0x0006cc; 	X(PUSH(ax));	// 77374 push    ax ;~ 2331:06CC
cs=0x2331;eip=0x0006cd; 	T(ax = bp+var_11a);	// 77375 lea     ax, [bp+var_11A] ;~ 2331:06CD
cs=0x2331;eip=0x0006d1; 	X(PUSH(ax));	// 77376 push    ax ;~ 2331:06D1
cs=0x2331;eip=0x0006d2; 	T(ax = bp+var_c8);	// 77377 lea     ax, [bp+var_C8] ;~ 2331:06D2
cs=0x2331;eip=0x0006d6; 	X(PUSH(ax));	// 77378 push    ax ;~ 2331:06D6
cs=0x2331;eip=0x0006d7; 	R(CALLF(sub_2f1d9,0));	// 77379 call    sub_2F1D9 ;~ 2331:06D7
cs=0x2331;eip=0x0006dc; 	T(ADD(sp, 6));	// 77380 add     sp, 6 ;~ 2331:06DC
cs=0x2331;eip=0x0006df; 	X(MOV(*(raddr(ss,bp+var_11c)), 0));	// 77381 mov     [bp+var_11C], 0 ;~ 2331:06DF
loc_31fd4:
	// 9394 
cs=0x2331;eip=0x0006e4; 	T(DEC(si));	// 77384 dec     si ;~ 2331:06E4
cs=0x2331;eip=0x0006e5; 	R(JS(loc_32020));	// 77385 js      short loc_32020 ;~ 2331:06E5
cs=0x2331;eip=0x0006e7; 	R(JMP(loc_31f73));	// 77386 jmp     short loc_31F73 ;~ 2331:06E7
loc_31fd9:
	// 9395 
cs=0x2331;eip=0x0006e9; 	T(ax = si+0x87);	// 77390 lea     ax, [si+87h] ;~ 2331:06E9
cs=0x2331;eip=0x0006ed; 	X(PUSH(ax));	// 77391 push    ax ;~ 2331:06ED
cs=0x2331;eip=0x0006ee; 	R(CALL(sub_33056,0));	// 77392 call    sub_33056 ;~ 2331:06EE
cs=0x2331;eip=0x0006f1; 	X(PUSH(ax));	// 77393 push    ax ;~ 2331:06F1
cs=0x2331;eip=0x0006f2; 	T(MOV(ax, 0x2568));	// 77394 mov     ax, 2568h ;~ 2331:06F2
cs=0x2331;eip=0x0006f5; 	X(PUSH(ax));	// 77395 push    ax ;~ 2331:06F5
cs=0x2331;eip=0x0006f6; 	T(ax = bp+var_11a);	// 77396 lea     ax, [bp+var_11A] ;~ 2331:06F6
cs=0x2331;eip=0x0006fa; 	X(PUSH(ax));	// 77397 push    ax ;~ 2331:06FA
cs=0x2331;eip=0x0006fb; 	R(CALLF(sub_2f1d9,0));	// 77398 call    sub_2F1D9 ;~ 2331:06FB
cs=0x2331;eip=0x000700; 	T(ADD(sp, 6));	// 77399 add     sp, 6 ;~ 2331:0700
cs=0x2331;eip=0x000703; 	X(PUSH(si));	// 77400 push    si ;~ 2331:0703
cs=0x2331;eip=0x000704; 	T(di = bp+var_11a);	// 77401 lea     di, [bp+var_11A] ;~ 2331:0704
cs=0x2331;eip=0x000708; 	T(si = bp+var_c8);	// 77402 lea     si, [bp+var_C8] ;~ 2331:0708
cs=0x2331;eip=0x00070c; 	T(MOV(ax, ss));	// 77403 mov     ax, ss ;~ 2331:070C
cs=0x2331;eip=0x00070e; 	T(MOV(es, ax));	// 77404 mov     es, ax ;~ 2331:070E
cs=0x2331;eip=0x000710; 	T(MOV(cx, 0x0FFFF));	// 77406 mov     cx, 0FFFFh ;~ 2331:0710
cs=0x2331;eip=0x000713; 	T(XOR(ax, ax));	// 77407 xor     ax, ax ;~ 2331:0713
	// 77408 repne scasb ;~ 2331:0715
cs=0x2331;eip=0x000715; 	T(	REPNE SCASB);	// 77408 repne scasb ;~ 2331:0715
cs=0x2331;eip=0x000717; 	T(NOT(cx));	// 77409 not     cx ;~ 2331:0717
cs=0x2331;eip=0x000719; 	T(SUB(di, cx));	// 77410 sub     di, cx ;~ 2331:0719
cs=0x2331;eip=0x00071b; 	T(MOV(bx, cx));	// 77411 mov     bx, cx ;~ 2331:071B
cs=0x2331;eip=0x00071d; 	T(XCHG(di, si));	// 77412 xchg    di, si ;~ 2331:071D
cs=0x2331;eip=0x00071f; 	T(MOV(cx, 0x0FFFF));	// 77413 mov     cx, 0FFFFh ;~ 2331:071F
	// 77414 repne scasb ;~ 2331:0722
cs=0x2331;eip=0x000722; 	T(	REPNE SCASB);	// 77414 repne scasb ;~ 2331:0722
cs=0x2331;eip=0x000724; 	T(DEC(di));	// 77415 dec     di ;~ 2331:0724
cs=0x2331;eip=0x000725; 	T(MOV(cx, bx));	// 77416 mov     cx, bx ;~ 2331:0725
cs=0x2331;eip=0x000727; 	T(SHR(cx, 1));	// 77417 shr     cx, 1 ;~ 2331:0727
	// 77418 repne movsw ;~ 2331:0729
cs=0x2331;eip=0x000729; 	X(	REPNE MOVSW);	// 77418 repne movsw ;~ 2331:0729
cs=0x2331;eip=0x00072b; 	T(ADC(cx, cx));	// 77419 adc     cx, cx ;~ 2331:072B
	// 77420 repne movsb ;~ 2331:072D
cs=0x2331;eip=0x00072d; 	X(	REPNE MOVSB);	// 77420 repne movsb ;~ 2331:072D
cs=0x2331;eip=0x00072f; 	X(POP(si));	// 77421 pop     si ;~ 2331:072F
loc_32020:
	// 9396 
cs=0x2331;eip=0x000730; 	X(PUSH(si));	// 77424 push    si ;~ 2331:0730
cs=0x2331;eip=0x000731; 	T(MOV(di, 0x2574));	// 77425 mov     di, 2574h ;~ 2331:0731
cs=0x2331;eip=0x000734; 	T(si = bp+var_c8);	// 77426 lea     si, [bp+var_C8] ;~ 2331:0734
cs=0x2331;eip=0x000738; 	T(MOV(ax, ds));	// 77427 mov     ax, ds ;~ 2331:0738
cs=0x2331;eip=0x00073a; 	T(MOV(es, ax));	// 77428 mov     es, ax ;~ 2331:073A
cs=0x2331;eip=0x00073c; 	T(MOV(cx, 0x0FFFF));	// 77430 mov     cx, 0FFFFh ;~ 2331:073C
cs=0x2331;eip=0x00073f; 	T(XOR(ax, ax));	// 77431 xor     ax, ax ;~ 2331:073F
	// 77432 repne scasb ;~ 2331:0741
cs=0x2331;eip=0x000741; 	T(	REPNE SCASB);	// 77432 repne scasb ;~ 2331:0741
cs=0x2331;eip=0x000743; 	T(NOT(cx));	// 77433 not     cx ;~ 2331:0743
cs=0x2331;eip=0x000745; 	T(SUB(di, cx));	// 77434 sub     di, cx ;~ 2331:0745
cs=0x2331;eip=0x000747; 	T(MOV(bx, cx));	// 77435 mov     bx, cx ;~ 2331:0747
cs=0x2331;eip=0x000749; 	T(XCHG(di, si));	// 77436 xchg    di, si ;~ 2331:0749
cs=0x2331;eip=0x00074b; 	T(MOV(cx, 0x0FFFF));	// 77437 mov     cx, 0FFFFh ;~ 2331:074B
	// 77438 repne scasb ;~ 2331:074E
cs=0x2331;eip=0x00074e; 	T(	REPNE SCASB);	// 77438 repne scasb ;~ 2331:074E
cs=0x2331;eip=0x000750; 	T(DEC(di));	// 77439 dec     di ;~ 2331:0750
cs=0x2331;eip=0x000751; 	T(MOV(cx, bx));	// 77440 mov     cx, bx ;~ 2331:0751
cs=0x2331;eip=0x000753; 	T(SHR(cx, 1));	// 77441 shr     cx, 1 ;~ 2331:0753
	// 77442 repne movsw ;~ 2331:0755
cs=0x2331;eip=0x000755; 	X(	REPNE MOVSW);	// 77442 repne movsw ;~ 2331:0755
cs=0x2331;eip=0x000757; 	T(ADC(cx, cx));	// 77443 adc     cx, cx ;~ 2331:0757
	// 77444 repne movsb ;~ 2331:0759
cs=0x2331;eip=0x000759; 	X(	REPNE MOVSB);	// 77444 repne movsb ;~ 2331:0759
cs=0x2331;eip=0x00075b; 	X(POP(si));	// 77445 pop     si ;~ 2331:075B
cs=0x2331;eip=0x00075c; 	T(SUB(ax, ax));	// 77446 sub     ax, ax ;~ 2331:075C
cs=0x2331;eip=0x00075e; 	X(PUSH(ax));	// 77447 push    ax ;~ 2331:075E
cs=0x2331;eip=0x00075f; 	T(ax = bp+var_c8);	// 77448 lea     ax, [bp+var_C8] ;~ 2331:075F
cs=0x2331;eip=0x000763; 	X(PUSH(ax));	// 77449 push    ax ;~ 2331:0763
cs=0x2331;eip=0x000764; 	R(CALL(sub_321b2,0));	// 77450 call    sub_321B2 ;~ 2331:0764
loc_32057:
	// 9397 
cs=0x2331;eip=0x000767; 	T(SUB(ax, ax));	// 77453 sub     ax, ax ;~ 2331:0767
cs=0x2331;eip=0x000769; 	X(PUSH(ax));	// 77454 push    ax ;~ 2331:0769
cs=0x2331;eip=0x00076a; 	T(MOV(ax, 0x5C));	// 77455 mov     ax, 5Ch ; '\' ;~ 2331:076A
cs=0x2331;eip=0x00076d; 	X(PUSH(ax));	// 77456 push    ax ;~ 2331:076D
cs=0x2331;eip=0x00076e; 	R(CALL(sub_33056,0));	// 77457 call    sub_33056 ;~ 2331:076E
cs=0x2331;eip=0x000771; 	X(PUSH(ax));	// 77458 push    ax ;~ 2331:0771
cs=0x2331;eip=0x000772; 	R(CALL(sub_321b2,0));	// 77459 call    sub_321B2 ;~ 2331:0772
cs=0x2331;eip=0x000775; 	X(MOV(unk_5436b, 1));	// 77460 mov     byte ptr unk_5436B, 1 ;~ 2331:0775
cs=0x2331;eip=0x00077a; 	R(JMP(loc_321a3));	// 77461 jmp     loc_321A3 ;~ 2331:077A
loc_3206d:
	// 9398 
cs=0x2331;eip=0x00077d; 	T(CMP(*(dw*)((&unk_57169)), 0x3E8));	// 77466 cmp     word ptr unk_57169, 3E8h ;~ 2331:077D
cs=0x2331;eip=0x000783; 	R(JNC(loc_32091));	// 77467 jnb     short loc_32091 ;~ 2331:0783
cs=0x2331;eip=0x000785; 	X(PUSH(*(dw*)((&unk_57169))));	// 77468 push    word ptr unk_57169 ;~ 2331:0785
cs=0x2331;eip=0x000789; 	T(MOV(ax, 0x55));	// 77469 mov     ax, 55h ; 'U' ;~ 2331:0789
cs=0x2331;eip=0x00078c; 	X(PUSH(ax));	// 77470 push    ax ;~ 2331:078C
cs=0x2331;eip=0x00078d; 	R(CALL(sub_33056,0));	// 77471 call    sub_33056 ;~ 2331:078D
cs=0x2331;eip=0x000790; 	X(PUSH(ax));	// 77472 push    ax ;~ 2331:0790
cs=0x2331;eip=0x000791; 	T(ax = bp+var_c8);	// 77473 lea     ax, [bp+var_C8] ;~ 2331:0791
cs=0x2331;eip=0x000795; 	X(PUSH(ax));	// 77474 push    ax ;~ 2331:0795
cs=0x2331;eip=0x000796; 	R(CALLF(sub_2f1d9,0));	// 77475 call    sub_2F1D9 ;~ 2331:0796
cs=0x2331;eip=0x00079b; 	T(ADD(sp, 6));	// 77476 add     sp, 6 ;~ 2331:079B
cs=0x2331;eip=0x00079e; 	R(JMP(loc_31d82));	// 77477 jmp     loc_31D82 ;~ 2331:079E
loc_32091:
	// 9399 
cs=0x2331;eip=0x0007a1; 	T(MOV(ax, *(dw*)((&unk_57169))));	// 77481 mov     ax, word ptr unk_57169 ;~ 2331:07A1
cs=0x2331;eip=0x0007a4; 	T(SUB(dx, dx));	// 77482 sub     dx, dx ;~ 2331:07A4
cs=0x2331;eip=0x0007a6; 	T(MOV(cx, 0x3E8));	// 77483 mov     cx, 3E8h ;~ 2331:07A6
cs=0x2331;eip=0x0007a9; 	T(DIV2(cx));	// 77484 div     cx ;~ 2331:07A9
cs=0x2331;eip=0x0007ab; 	X(PUSH(dx));	// 77485 push    dx ;~ 2331:07AB
cs=0x2331;eip=0x0007ac; 	T(MOV(ax, *(dw*)((&unk_57169))));	// 77486 mov     ax, word ptr unk_57169 ;~ 2331:07AC
cs=0x2331;eip=0x0007af; 	T(SUB(dx, dx));	// 77487 sub     dx, dx ;~ 2331:07AF
cs=0x2331;eip=0x0007b1; 	T(DIV2(cx));	// 77488 div     cx ;~ 2331:07B1
cs=0x2331;eip=0x0007b3; 	X(PUSH(ax));	// 77489 push    ax ;~ 2331:07B3
cs=0x2331;eip=0x0007b4; 	T(MOV(ax, 0x56));	// 77490 mov     ax, 56h ; 'V' ;~ 2331:07B4
cs=0x2331;eip=0x0007b7; 	X(PUSH(ax));	// 77491 push    ax ;~ 2331:07B7
cs=0x2331;eip=0x0007b8; 	R(CALL(sub_33056,0));	// 77492 call    sub_33056 ;~ 2331:07B8
cs=0x2331;eip=0x0007bb; 	X(PUSH(ax));	// 77493 push    ax ;~ 2331:07BB
cs=0x2331;eip=0x0007bc; 	T(ax = bp+var_c8);	// 77494 lea     ax, [bp+var_C8] ;~ 2331:07BC
cs=0x2331;eip=0x0007c0; 	X(PUSH(ax));	// 77495 push    ax ;~ 2331:07C0
cs=0x2331;eip=0x0007c1; 	R(CALLF(sub_2f1d9,0));	// 77496 call    sub_2F1D9 ;~ 2331:07C1
cs=0x2331;eip=0x0007c6; 	T(ADD(sp, 8));	// 77497 add     sp, 8 ;~ 2331:07C6
cs=0x2331;eip=0x0007c9; 	R(JMP(loc_31d82));	// 77498 jmp     loc_31D82 ;~ 2331:07C9
loc_320bc:
	// 9400 
cs=0x2331;eip=0x0007cc; 	T(MOV(ax, 1));	// 77503 mov     ax, 1 ;~ 2331:07CC
cs=0x2331;eip=0x0007cf; 	X(PUSH(ax));	// 77504 push    ax ;~ 2331:07CF
cs=0x2331;eip=0x0007d0; 	T(MOV(ax, 0x2578));	// 77505 mov     ax, 2578h ;~ 2331:07D0
cs=0x2331;eip=0x0007d3; 	X(PUSH(ax));	// 77506 push    ax ;~ 2331:07D3
cs=0x2331;eip=0x0007d4; 	R(CALL(sub_321b2,0));	// 77507 call    sub_321B2 ;~ 2331:07D4
cs=0x2331;eip=0x0007d7; 	T(CMP(*(dw*)((&unk_57167)), 0));	// 77508 cmp     word ptr unk_57167, 0 ;~ 2331:07D7
cs=0x2331;eip=0x0007dc; 	R(JNZ(loc_320f7));	// 77509 jnz     short loc_320F7 ;~ 2331:07DC
cs=0x2331;eip=0x0007de; 	R(CALLF(sub_29370,0));	// 77510 call    sub_29370 ;~ 2331:07DE
cs=0x2331;eip=0x0007e3; 	T(CMP(ax, 0x40));	// 77511 cmp     ax, 40h ; '@' ;~ 2331:07E3
cs=0x2331;eip=0x0007e6; 	R(JGE(loc_320ef));	// 77512 jge     short loc_320EF ;~ 2331:07E6
cs=0x2331;eip=0x0007e8; 	T(SUB(ax, ax));	// 77513 sub     ax, ax ;~ 2331:07E8
cs=0x2331;eip=0x0007ea; 	X(PUSH(ax));	// 77514 push    ax ;~ 2331:07EA
cs=0x2331;eip=0x0007eb; 	T(MOV(ax, 3));	// 77515 mov     ax, 3 ;~ 2331:07EB
cs=0x2331;eip=0x0007ee; 	X(PUSH(ax));	// 77516 push    ax ;~ 2331:07EE
cs=0x2331;eip=0x0007ef; 	R(CALLF(sub_2937a,0));	// 77517 call    sub_2937A ;~ 2331:07EF
cs=0x2331;eip=0x0007f4; 	T(ADD(ax, 0x46));	// 77518 add     ax, 46h ; 'F' ;~ 2331:07F4
cs=0x2331;eip=0x0007f7; 	X(PUSH(ax));	// 77519 push    ax ;~ 2331:07F7
cs=0x2331;eip=0x0007f8; 	R(CALL(sub_33056,0));	// 77520 call    sub_33056 ;~ 2331:07F8
cs=0x2331;eip=0x0007fb; 	X(PUSH(ax));	// 77521 push    ax ;~ 2331:07FB
cs=0x2331;eip=0x0007fc; 	R(CALL(sub_321b2,0));	// 77522 call    sub_321B2 ;~ 2331:07FC
loc_320ef:
	// 9401 
cs=0x2331;eip=0x0007ff; 	T(SUB(ax, ax));	// 77525 sub     ax, ax ;~ 2331:07FF
cs=0x2331;eip=0x000801; 	X(PUSH(ax));	// 77526 push    ax ;~ 2331:0801
cs=0x2331;eip=0x000802; 	T(MOV(ax, 0x45));	// 77527 mov     ax, 45h ; 'E' ;~ 2331:0802
cs=0x2331;eip=0x000805; 	R(JMP(loc_32172));	// 77528 jmp     short loc_32172 ;~ 2331:0805
loc_320f7:
	// 9402 
cs=0x2331;eip=0x000807; 	T(CMP(*(dw*)((&unk_57167)), 5));	// 77532 cmp     word ptr unk_57167, 5 ;~ 2331:0807
cs=0x2331;eip=0x00080c; 	R(JGE(loc_32106));	// 77533 jge     short loc_32106 ;~ 2331:080C
cs=0x2331;eip=0x00080e; 	T(SUB(ax, ax));	// 77534 sub     ax, ax ;~ 2331:080E
cs=0x2331;eip=0x000810; 	X(PUSH(ax));	// 77535 push    ax ;~ 2331:0810
cs=0x2331;eip=0x000811; 	T(MOV(ax, 0x49));	// 77536 mov     ax, 49h ; 'I' ;~ 2331:0811
cs=0x2331;eip=0x000814; 	R(JMP(loc_32172));	// 77537 jmp     short loc_32172 ;~ 2331:0814
loc_32106:
	// 9403 
cs=0x2331;eip=0x000816; 	T(CMP(*(dw*)((&unk_57167)), 0x19));	// 77541 cmp     word ptr unk_57167, 19h ;~ 2331:0816
cs=0x2331;eip=0x00081b; 	R(JGE(loc_32135));	// 77542 jge     short loc_32135 ;~ 2331:081B
cs=0x2331;eip=0x00081d; 	T(SUB(ax, ax));	// 77543 sub     ax, ax ;~ 2331:081D
cs=0x2331;eip=0x00081f; 	X(PUSH(ax));	// 77544 push    ax ;~ 2331:081F
cs=0x2331;eip=0x000820; 	T(MOV(ax, 2));	// 77545 mov     ax, 2 ;~ 2331:0820
cs=0x2331;eip=0x000823; 	X(PUSH(ax));	// 77546 push    ax ;~ 2331:0823
cs=0x2331;eip=0x000824; 	R(CALLF(sub_2937a,0));	// 77547 call    sub_2937A ;~ 2331:0824
cs=0x2331;eip=0x000829; 	T(ADD(ax, 0x4C));	// 77548 add     ax, 4Ch ; 'L' ;~ 2331:0829
cs=0x2331;eip=0x00082c; 	X(PUSH(ax));	// 77549 push    ax ;~ 2331:082C
cs=0x2331;eip=0x00082d; 	R(CALL(sub_33056,0));	// 77550 call    sub_33056 ;~ 2331:082D
cs=0x2331;eip=0x000830; 	X(PUSH(ax));	// 77551 push    ax ;~ 2331:0830
cs=0x2331;eip=0x000831; 	R(CALL(sub_321b2,0));	// 77552 call    sub_321B2 ;~ 2331:0831
cs=0x2331;eip=0x000834; 	T(SUB(ax, ax));	// 77553 sub     ax, ax ;~ 2331:0834
cs=0x2331;eip=0x000836; 	X(PUSH(ax));	// 77554 push    ax ;~ 2331:0836
cs=0x2331;eip=0x000837; 	T(MOV(ax, 2));	// 77555 mov     ax, 2 ;~ 2331:0837
cs=0x2331;eip=0x00083a; 	X(PUSH(ax));	// 77556 push    ax ;~ 2331:083A
cs=0x2331;eip=0x00083b; 	R(CALLF(sub_2937a,0));	// 77557 call    sub_2937A ;~ 2331:083B
cs=0x2331;eip=0x000840; 	T(ADD(ax, 0x4A));	// 77558 add     ax, 4Ah ; 'J' ;~ 2331:0840
cs=0x2331;eip=0x000843; 	R(JMP(loc_32172));	// 77559 jmp     short loc_32172 ;~ 2331:0843
loc_32135:
	// 9404 
cs=0x2331;eip=0x000845; 	T(SUB(ax, ax));	// 77563 sub     ax, ax ;~ 2331:0845
cs=0x2331;eip=0x000847; 	X(PUSH(ax));	// 77564 push    ax ;~ 2331:0847
cs=0x2331;eip=0x000848; 	T(MOV(ax, 2));	// 77565 mov     ax, 2 ;~ 2331:0848
cs=0x2331;eip=0x00084b; 	X(PUSH(ax));	// 77566 push    ax ;~ 2331:084B
cs=0x2331;eip=0x00084c; 	R(CALLF(sub_2937a,0));	// 77567 call    sub_2937A ;~ 2331:084C
cs=0x2331;eip=0x000851; 	T(ADD(ax, 0x53));	// 77568 add     ax, 53h ; 'S' ;~ 2331:0851
cs=0x2331;eip=0x000854; 	X(PUSH(ax));	// 77569 push    ax ;~ 2331:0854
cs=0x2331;eip=0x000855; 	R(CALL(sub_33056,0));	// 77570 call    sub_33056 ;~ 2331:0855
cs=0x2331;eip=0x000858; 	X(PUSH(ax));	// 77571 push    ax ;~ 2331:0858
cs=0x2331;eip=0x000859; 	R(CALL(sub_321b2,0));	// 77572 call    sub_321B2 ;~ 2331:0859
cs=0x2331;eip=0x00085c; 	T(SUB(ax, ax));	// 77573 sub     ax, ax ;~ 2331:085C
cs=0x2331;eip=0x00085e; 	X(PUSH(ax));	// 77574 push    ax ;~ 2331:085E
cs=0x2331;eip=0x00085f; 	T(MOV(ax, 3));	// 77575 mov     ax, 3 ;~ 2331:085F
cs=0x2331;eip=0x000862; 	X(PUSH(ax));	// 77576 push    ax ;~ 2331:0862
cs=0x2331;eip=0x000863; 	R(CALLF(sub_2937a,0));	// 77577 call    sub_2937A ;~ 2331:0863
cs=0x2331;eip=0x000868; 	T(ADD(ax, 0x50));	// 77578 add     ax, 50h ; 'P' ;~ 2331:0868
cs=0x2331;eip=0x00086b; 	X(PUSH(ax));	// 77579 push    ax ;~ 2331:086B
cs=0x2331;eip=0x00086c; 	R(CALL(sub_33056,0));	// 77580 call    sub_33056 ;~ 2331:086C
cs=0x2331;eip=0x00086f; 	X(PUSH(ax));	// 77581 push    ax ;~ 2331:086F
cs=0x2331;eip=0x000870; 	R(CALL(sub_321b2,0));	// 77582 call    sub_321B2 ;~ 2331:0870
cs=0x2331;eip=0x000873; 	T(SUB(ax, ax));	// 77583 sub     ax, ax ;~ 2331:0873
cs=0x2331;eip=0x000875; 	X(PUSH(ax));	// 77584 push    ax ;~ 2331:0875
cs=0x2331;eip=0x000876; 	T(MOV(ax, 2));	// 77585 mov     ax, 2 ;~ 2331:0876
cs=0x2331;eip=0x000879; 	X(PUSH(ax));	// 77586 push    ax ;~ 2331:0879
cs=0x2331;eip=0x00087a; 	R(CALLF(sub_2937a,0));	// 77587 call    sub_2937A ;~ 2331:087A
cs=0x2331;eip=0x00087f; 	T(ADD(ax, 0x4E));	// 77588 add     ax, 4Eh ; 'N' ;~ 2331:087F
loc_32172:
	// 9405 
cs=0x2331;eip=0x000882; 	X(PUSH(ax));	// 77592 push    ax ;~ 2331:0882
cs=0x2331;eip=0x000883; 	R(CALL(sub_33056,0));	// 77593 call    sub_33056 ;~ 2331:0883
cs=0x2331;eip=0x000886; 	X(PUSH(ax));	// 77594 push    ax ;~ 2331:0886
cs=0x2331;eip=0x000887; 	R(CALL(sub_321b2,0));	// 77595 call    sub_321B2 ;~ 2331:0887
cs=0x2331;eip=0x00088a; 	T(SUB(ax, ax));	// 77596 sub     ax, ax ;~ 2331:088A
cs=0x2331;eip=0x00088c; 	X(PUSH(ax));	// 77597 push    ax ;~ 2331:088C
cs=0x2331;eip=0x00088d; 	T(MOV(ax, 0x5B));	// 77598 mov     ax, 5Bh ; '[' ;~ 2331:088D
cs=0x2331;eip=0x000890; 	R(JMP(loc_31ea7));	// 77599 jmp     loc_31EA7 ;~ 2331:0890
loc_321a3:
	// 9406 
cs=0x2331;eip=0x0008b3; 	X(INC(*(dw*)((&unk_5436c))));	// 77621 inc     word ptr unk_5436C ;~ 2331:08B3
cs=0x2331;eip=0x0008b7; 	R(JMP(loc_31cd2));	// 77622 jmp     loc_31CD2 ;~ 2331:08B7
loc_321aa:
	// 9407 
cs=0x2331;eip=0x0008ba; 	X(POP(si));	// 77626 pop     si ;~ 2331:08BA
cs=0x2331;eip=0x0008bb; 	X(POP(di));	// 77627 pop     di ;~ 2331:08BB
cs=0x2331;eip=0x0008bc; 	T(MOV(sp, bp));	// 77628 mov     sp, bp ;~ 2331:08BC
cs=0x2331;eip=0x0008be; 	X(POP(bp));	// 77629 pop     bp ;~ 2331:08BE
cs=0x2331;eip=0x0008bf; 	R(RETN(2));	// 77630 retn    2 ;~ 2331:08BF
sub_321b2:
	// 77638 
#undef var_c
#define var_c -0x0C
	// 77641 var_C           = word ptr -0Ch ;~ 2331:08C2
#undef var_6
#define var_6 -6
	// 77642 var_6           = word ptr -6 ;~ 2331:08C2
#undef var_4
#define var_4 -4
	// 77643 var_4           = word ptr -4 ;~ 2331:08C2
#undef var_2
#define var_2 -2
	// 77644 var_2           = word ptr -2 ;~ 2331:08C2
#undef arg_0
#define arg_0 4
	// 77645 arg_0           = word ptr  4 ;~ 2331:08C2
#undef arg_2
#define arg_2 6
	// 77646 arg_2           = word ptr  6 ;~ 2331:08C2
cs=0x2331;eip=0x0008c2; 	X(PUSH(bp));	// 77648 push    bp ;~ 2331:08C2
cs=0x2331;eip=0x0008c3; 	T(MOV(bp, sp));	// 77649 mov     bp, sp ;~ 2331:08C3
cs=0x2331;eip=0x0008c5; 	T(SUB(sp, 0x0C));	// 77650 sub     sp, 0Ch ;~ 2331:08C5
cs=0x2331;eip=0x0008c8; 	X(PUSH(di));	// 77651 push    di ;~ 2331:08C8
cs=0x2331;eip=0x0008c9; 	X(PUSH(si));	// 77652 push    si ;~ 2331:08C9
cs=0x2331;eip=0x0008ca; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 77653 mov     ax, [bp+arg_2] ;~ 2331:08CA
cs=0x2331;eip=0x0008cd; 	T(ADD(ax, *(dw*)((&unk_5436c))));	// 77654 add     ax, word ptr unk_5436C ;~ 2331:08CD
cs=0x2331;eip=0x0008d1; 	T(MOV(dx, *(dw*)((&unk_5436e))));	// 77655 mov     dx, word ptr unk_5436E ;~ 2331:08D1
cs=0x2331;eip=0x0008d5; 	X(PUSH(dx));	// 77656 push    dx ;~ 2331:08D5
cs=0x2331;eip=0x0008d6; 	X(PUSH(ax));	// 77657 push    ax ;~ 2331:08D6
cs=0x2331;eip=0x0008d7; 	X(PUSH(dx));	// 77658 push    dx ;~ 2331:08D7
cs=0x2331;eip=0x0008d8; 	X(PUSH(*(dw*)((&unk_5436c))));	// 77659 push    word ptr unk_5436C ;~ 2331:08D8
cs=0x2331;eip=0x0008dc; 	T(MOV(ax, *(dw*)((&unk_5436c))));	// 77660 mov     ax, word ptr unk_5436C ;~ 2331:08DC
cs=0x2331;eip=0x0008df; 	T(SUB(ax, *(dw*)((&unk_54342))));	// 77661 sub     ax, word ptr unk_54342 ;~ 2331:08DF
cs=0x2331;eip=0x0008e3; 	T(SUB(ax, 0x4B0));	// 77662 sub     ax, 4B0h ;~ 2331:08E3
cs=0x2331;eip=0x0008e6; 	T(NEG(ax));	// 77663 neg     ax ;~ 2331:08E6
cs=0x2331;eip=0x0008e8; 	X(PUSH(ax));	// 77664 push    ax ;~ 2331:08E8
cs=0x2331;eip=0x0008e9; 	R(CALLF(sub_210f1,0));	// 77665 call    sub_210F1 ;~ 2331:08E9
cs=0x2331;eip=0x0008ee; 	X(PUSH(ds));	// 77666 push    ds ;~ 2331:08EE
cs=0x2331;eip=0x0008ef; 	X(POP(es));	// 77667 pop     es ;~ 2331:08EF
cs=0x2331;eip=0x0008f0; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 77668 mov     di, [bp+arg_0] ;~ 2331:08F0
cs=0x2331;eip=0x0008f3; 	T(MOV(cx, 0x0FFFF));	// 77669 mov     cx, 0FFFFh ;~ 2331:08F3
cs=0x2331;eip=0x0008f6; 	T(XOR(ax, ax));	// 77670 xor     ax, ax ;~ 2331:08F6
	// 77671 repne scasb ;~ 2331:08F8
cs=0x2331;eip=0x0008f8; 	T(	REPNE SCASB);	// 77671 repne scasb ;~ 2331:08F8
cs=0x2331;eip=0x0008fa; 	T(NOT(cx));	// 77672 not     cx ;~ 2331:08FA
cs=0x2331;eip=0x0008fc; 	T(DEC(cx));	// 77673 dec     cx ;~ 2331:08FC
cs=0x2331;eip=0x0008fd; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), cx));	// 77674 mov     [bp+var_6], cx ;~ 2331:08FD
cs=0x2331;eip=0x000900; 	T(MOV(ax, cx));	// 77675 mov     ax, cx ;~ 2331:0900
cs=0x2331;eip=0x000902; 	T(ADD(ax, *(dw*)((&unk_5436c))));	// 77676 add     ax, word ptr unk_5436C ;~ 2331:0902
cs=0x2331;eip=0x000906; 	T(MOV(dx, *(dw*)((&unk_5436e))));	// 77677 mov     dx, word ptr unk_5436E ;~ 2331:0906
cs=0x2331;eip=0x00090a; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 77678 mov     [bp+var_4], ax ;~ 2331:090A
cs=0x2331;eip=0x00090d; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 77679 mov     [bp+var_2], dx ;~ 2331:090D
cs=0x2331;eip=0x000910; 	T(SUB(ax, *(dw*)((&unk_54342))));	// 77680 sub     ax, word ptr unk_54342 ;~ 2331:0910
cs=0x2331;eip=0x000914; 	T(SUB(ax, 0x4AF));	// 77681 sub     ax, 4AFh ;~ 2331:0914
cs=0x2331;eip=0x000917; 	T(NEG(ax));	// 77682 neg     ax ;~ 2331:0917
cs=0x2331;eip=0x000919; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 77683 mov     [bp+var_C], ax ;~ 2331:0919
cs=0x2331;eip=0x00091c; 	T(OR(ax, ax));	// 77684 or      ax, ax ;~ 2331:091C
cs=0x2331;eip=0x00091e; 	R(JL(loc_32228));	// 77685 jl      short loc_32228 ;~ 2331:091E
cs=0x2331;eip=0x000920; 	T(MOV(si, cx));	// 77686 mov     si, cx ;~ 2331:0920
cs=0x2331;eip=0x000922; 	T(MOV(cx, ax));	// 77687 mov     cx, ax ;~ 2331:0922
loc_32214:
	// 9408 
cs=0x2331;eip=0x000924; 	T(MOV(bx, cx));	// 77690 mov     bx, cx ;~ 2331:0924
cs=0x2331;eip=0x000926; 	T(LES(di, *(dd*)((&unk_5436c))));	// 77691 les     di, dword ptr unk_5436C ;~ 2331:0926
cs=0x2331;eip=0x00092a; 	T(MOV(al, *(raddr(es,bx+di))));	// 77693 mov     al, es:[bx+di] ;~ 2331:092A
cs=0x2331;eip=0x00092d; 	T(ADD(bx, si));	// 77694 add     bx, si ;~ 2331:092D
cs=0x2331;eip=0x00092f; 	X(MOV(*(raddr(es,bx+di)), al));	// 77695 mov     es:[bx+di], al ;~ 2331:092F
cs=0x2331;eip=0x000932; 	T(DEC(cx));	// 77696 dec     cx ;~ 2331:0932
cs=0x2331;eip=0x000933; 	R(JNS(loc_32214));	// 77697 jns     short loc_32214 ;~ 2331:0933
cs=0x2331;eip=0x000935; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), cx));	// 77698 mov     [bp+var_C], cx ;~ 2331:0935
loc_32228:
	// 9409 
cs=0x2331;eip=0x000938; 	X(PUSH(ds));	// 77701 push    ds ;~ 2331:0938
cs=0x2331;eip=0x000939; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 77702 push    [bp+arg_0] ;~ 2331:0939
cs=0x2331;eip=0x00093c; 	X(PUSH(*(dw*)((&unk_5436e))));	// 77703 push    word ptr unk_5436E ;~ 2331:093C
cs=0x2331;eip=0x000940; 	X(PUSH(*(dw*)((&unk_5436c))));	// 77704 push    word ptr unk_5436C ;~ 2331:0940
cs=0x2331;eip=0x000944; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 77705 push    [bp+var_6] ;~ 2331:0944
cs=0x2331;eip=0x000947; 	R(CALLF(sub_210f1,0));	// 77706 call    sub_210F1 ;~ 2331:0947
cs=0x2331;eip=0x00094c; 	X(POP(si));	// 77707 pop     si ;~ 2331:094C
cs=0x2331;eip=0x00094d; 	X(POP(di));	// 77708 pop     di ;~ 2331:094D
cs=0x2331;eip=0x00094e; 	T(MOV(sp, bp));	// 77709 mov     sp, bp ;~ 2331:094E
cs=0x2331;eip=0x000950; 	X(POP(bp));	// 77710 pop     bp ;~ 2331:0950
cs=0x2331;eip=0x000951; 	R(RETN(4));	// 77711 retn    4 ;~ 2331:0951
sub_32244:
	// 77719 
cs=0x2331;eip=0x000954; 	X(PUSH(bp));	// 77720 push    bp ;~ 2331:0954
cs=0x2331;eip=0x000955; 	T(MOV(bp, sp));	// 77721 mov     bp, sp ;~ 2331:0955
cs=0x2331;eip=0x000957; 	T(SUB(sp, 2));	// 77722 sub     sp, 2 ;~ 2331:0957
cs=0x2331;eip=0x00095a; 	X(PUSH(si));	// 77723 push    si ;~ 2331:095A
cs=0x2331;eip=0x00095b; 	T(CMP(*(dw*)((&unk_54338)), 0));	// 77724 cmp     word ptr unk_54338, 0 ;~ 2331:095B
cs=0x2331;eip=0x000960; 	R(JNZ(loc_32265));	// 77725 jnz     short loc_32265 ;~ 2331:0960
cs=0x2331;eip=0x000962; 	T(CMP(*(dw*)((&unk_54340)), 1));	// 77726 cmp     word ptr unk_54340, 1 ;~ 2331:0962
cs=0x2331;eip=0x000967; 	R(JNZ(loc_3225e));	// 77727 jnz     short loc_3225E ;~ 2331:0967
cs=0x2331;eip=0x000969; 	T(MOV(ax, 0x7D));	// 77728 mov     ax, 7Dh ; '}' ;~ 2331:0969
cs=0x2331;eip=0x00096c; 	R(JMP(loc_32261));	// 77729 jmp     short loc_32261 ;~ 2331:096C
loc_3225e:
	// 9410 
cs=0x2331;eip=0x00096e; 	T(MOV(ax, 0x75));	// 77733 mov     ax, 75h ; 'u' ;~ 2331:096E
loc_32261:
	// 9411 
cs=0x2331;eip=0x000971; 	T(MOV(si, ax));	// 77736 mov     si, ax ;~ 2331:0971
cs=0x2331;eip=0x000973; 	R(JMP(loc_32277));	// 77737 jmp     short loc_32277 ;~ 2331:0973
loc_32265:
	// 9412 
cs=0x2331;eip=0x000975; 	T(MOV(ax, *(dw*)((&unk_54340))));	// 77741 mov     ax, word ptr unk_54340 ;~ 2331:0975
cs=0x2331;eip=0x000978; 	T(DEC(ax));	// 77742 dec     ax ;~ 2331:0978
cs=0x2331;eip=0x000979; 	T(CMP(ax, *(dw*)((&unk_54338))));	// 77743 cmp     ax, word ptr unk_54338 ;~ 2331:0979
cs=0x2331;eip=0x00097d; 	R(JNZ(loc_32274));	// 77744 jnz     short loc_32274 ;~ 2331:097D
cs=0x2331;eip=0x00097f; 	T(MOV(si, 0x76));	// 77745 mov     si, 76h ; 'v' ;~ 2331:097F
cs=0x2331;eip=0x000982; 	R(JMP(loc_32277));	// 77746 jmp     short loc_32277 ;~ 2331:0982
loc_32274:
	// 9413 
cs=0x2331;eip=0x000984; 	T(MOV(si, 0x77));	// 77750 mov     si, 77h ; 'w' ;~ 2331:0984
loc_32277:
	// 9414 
cs=0x2331;eip=0x000987; 	X(PUSH(si));	// 77754 push    si ;~ 2331:0987
cs=0x2331;eip=0x000988; 	R(CALL(sub_33056,0));	// 77755 call    sub_33056 ;~ 2331:0988
cs=0x2331;eip=0x00098b; 	X(PUSH(ax));	// 77756 push    ax ;~ 2331:098B
cs=0x2331;eip=0x00098c; 	R(CALL(sub_33198,0));	// 77757 call    sub_33198 ;~ 2331:098C
cs=0x2331;eip=0x00098f; 	X(POP(si));	// 77758 pop     si ;~ 2331:098F
cs=0x2331;eip=0x000990; 	T(MOV(sp, bp));	// 77759 mov     sp, bp ;~ 2331:0990
cs=0x2331;eip=0x000992; 	X(POP(bp));	// 77760 pop     bp ;~ 2331:0992
cs=0x2331;eip=0x000993; 	R(RETN(0));	// 77761 retn ;~ 2331:0993
sub_32284:
	// 77768 
cs=0x2331;eip=0x000994; 	R(CALL(sub_32292,0));	// 77770 call    sub_32292 ;~ 2331:0994
cs=0x2331;eip=0x000997; 	T(MOV(ax, 1));	// 77771 mov     ax, 1 ;~ 2331:0997
cs=0x2331;eip=0x00099a; 	X(PUSH(ax));	// 77772 push    ax ;~ 2331:099A
cs=0x2331;eip=0x00099b; 	X(PUSH(ax));	// 77773 push    ax ;~ 2331:099B
cs=0x2331;eip=0x00099c; 	R(CALLF(sub_20275,0));	// 77774 call    sub_20275 ;~ 2331:099C
cs=0x2331;eip=0x0009a1; 	R(RETN(0));	// 77775 retn ;~ 2331:09A1
sub_32292:
	// 77783 
#undef var_6e
#define var_6e -0x6E
	// 77786 var_6E          = word ptr -6Eh ;~ 2331:09A2
#undef var_6c
#define var_6c -0x6C
	// 77787 var_6C          = word ptr -6Ch ;~ 2331:09A2
#undef var_6a
#define var_6a -0x6A
	// 77788 var_6A          = word ptr -6Ah ;~ 2331:09A2
#undef var_68
#define var_68 -0x68
	// 77789 var_68          = word ptr -68h ;~ 2331:09A2
#undef var_64
#define var_64 -0x64
	// 77790 var_64          = dword ptr -64h ;~ 2331:09A2
#undef var_60
#define var_60 -0x60
	// 77791 var_60          = word ptr -60h ;~ 2331:09A2
#undef var_5e
#define var_5e -0x5E
	// 77792 var_5E          = byte ptr -5Eh ;~ 2331:09A2
#undef var_5c
#define var_5c -0x5C
	// 77793 var_5C          = byte ptr -5Ch ;~ 2331:09A2
#undef var_5a
#define var_5a -0x5A
	// 77794 var_5A          = word ptr -5Ah ;~ 2331:09A2
#undef var_58
#define var_58 -0x58
	// 77795 var_58          = word ptr -58h ;~ 2331:09A2
#undef var_56
#define var_56 -0x56
	// 77796 var_56          = byte ptr -56h ;~ 2331:09A2
#undef var_6
#define var_6 -6
	// 77797 var_6           = dword ptr -6 ;~ 2331:09A2
#undef var_2
#define var_2 -2
	// 77798 var_2           = word ptr -2 ;~ 2331:09A2
cs=0x2331;eip=0x0009a2; 	X(PUSH(bp));	// 77800 push    bp ;~ 2331:09A2
cs=0x2331;eip=0x0009a3; 	T(MOV(bp, sp));	// 77801 mov     bp, sp ;~ 2331:09A3
cs=0x2331;eip=0x0009a5; 	T(SUB(sp, 0x6E));	// 77802 sub     sp, 6Eh ;~ 2331:09A5
cs=0x2331;eip=0x0009a8; 	X(PUSH(di));	// 77803 push    di ;~ 2331:09A8
cs=0x2331;eip=0x0009a9; 	X(PUSH(si));	// 77804 push    si ;~ 2331:09A9
cs=0x2331;eip=0x0009aa; 	R(CALL(sub_32244,0));	// 77805 call    sub_32244 ;~ 2331:09AA
cs=0x2331;eip=0x0009ad; 	T(MOV(bx, *(dw*)((&unk_54338))));	// 77806 mov     bx, word ptr unk_54338 ;~ 2331:09AD
cs=0x2331;eip=0x0009b1; 	T(SHL(bx, 1));	// 77807 shl     bx, 1 ;~ 2331:09B1
cs=0x2331;eip=0x0009b3; 	T(SHL(bx, 1));	// 77808 shl     bx, 1 ;~ 2331:09B3
cs=0x2331;eip=0x0009b5; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x366E))));	// 77809 mov     ax, [bx-366Eh] ;~ 2331:09B5
cs=0x2331;eip=0x0009b9; 	T(MOV(dx, *(dw*)(raddr(ds,bx-0x366C))));	// 77810 mov     dx, [bx-366Ch] ;~ 2331:09B9
cs=0x2331;eip=0x0009bd; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_64))), ax));	// 77811 mov     word ptr [bp+var_64], ax ;~ 2331:09BD
cs=0x2331;eip=0x0009c0; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_64+2))), dx));	// 77812 mov     word ptr [bp+var_64+2], dx ;~ 2331:09C0
cs=0x2331;eip=0x0009c3; 	X(MOV(*(dw*)((&unk_5433a)), 0x0FFFF));	// 77813 mov     word ptr unk_5433A, 0FFFFh ;~ 2331:09C3
cs=0x2331;eip=0x0009c9; 	X(MOV(unk_5436a, 0));	// 77814 mov     byte ptr unk_5436A, 0 ;~ 2331:09C9
cs=0x2331;eip=0x0009ce; 	T(MOV(ax, 1));	// 77815 mov     ax, 1 ;~ 2331:09CE
cs=0x2331;eip=0x0009d1; 	X(PUSH(ax));	// 77816 push    ax ;~ 2331:09D1
cs=0x2331;eip=0x0009d2; 	R(CALL(sub_326ae,0));	// 77817 call    sub_326AE ;~ 2331:09D2
cs=0x2331;eip=0x0009d5; 	X(MOV(*(dw*)(raddr(ss,bp+var_58)), ax));	// 77818 mov     [bp+var_58], ax ;~ 2331:09D5
cs=0x2331;eip=0x0009d8; 	X(MOV(*(raddr(ss,bp+var_5e)), 0));	// 77819 mov     [bp+var_5E], 0 ;~ 2331:09D8
loc_322cc:
	// 9415 
cs=0x2331;eip=0x0009dc; 	X(MOV(*(raddr(ss,bp+var_5c)), 0));	// 77822 mov     [bp+var_5C], 0 ;~ 2331:09DC
cs=0x2331;eip=0x0009e0; 	R(CALL(sub_330aa,0));	// 77823 call    sub_330AA ;~ 2331:09E0
cs=0x2331;eip=0x0009e3; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_64)))));	// 77824 mov     ax, word ptr [bp+var_64] ;~ 2331:09E3
cs=0x2331;eip=0x0009e6; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_64+2)))));	// 77825 mov     dx, word ptr [bp+var_64+2] ;~ 2331:09E6
cs=0x2331;eip=0x0009e9; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6))), ax));	// 77826 mov     word ptr [bp+var_6], ax ;~ 2331:09E9
cs=0x2331;eip=0x0009ec; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6+2))), dx));	// 77827 mov     word ptr [bp+var_6+2], dx ;~ 2331:09EC
cs=0x2331;eip=0x0009ef; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 77828 mov     [bp+var_2], 0 ;~ 2331:09EF
loc_322e4:
	// 9416 
cs=0x2331;eip=0x0009f4; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_64)))));	// 77831 mov     ax, word ptr [bp+var_64] ;~ 2331:09F4
cs=0x2331;eip=0x0009f7; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_64+2)))));	// 77832 mov     dx, word ptr [bp+var_64+2] ;~ 2331:09F7
cs=0x2331;eip=0x0009fa; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+var_6))), ax));	// 77833 cmp     word ptr [bp+var_6], ax ;~ 2331:09FA
cs=0x2331;eip=0x0009fd; 	R(JBE(loc_32301));	// 77834 jbe     short loc_32301 ;~ 2331:09FD
cs=0x2331;eip=0x0009ff; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_6))));	// 77835 les     bx, [bp+var_6] ;~ 2331:09FF
cs=0x2331;eip=0x000a02; 	T(MOV(al, *(raddr(es,bx-1))));	// 77836 mov     al, es:[bx-1] ;~ 2331:0A02
cs=0x2331;eip=0x000a06; 	T(SUB(ah, ah));	// 77837 sub     ah, ah ;~ 2331:0A06
cs=0x2331;eip=0x000a08; 	X(PUSH(ax));	// 77838 push    ax ;~ 2331:0A08
cs=0x2331;eip=0x000a09; 	R(CALLF(sub_2dc86,0));	// 77839 call    sub_2DC86 ;~ 2331:0A09
cs=0x2331;eip=0x000a0e; 	X(ADD(*(dw*)(raddr(ss,bp+var_2)), ax));	// 77840 add     [bp+var_2], ax ;~ 2331:0A0E
loc_32301:
	// 9417 
cs=0x2331;eip=0x000a11; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x0BF));	// 77843 cmp     [bp+var_2], 0BFh ; 'ø' ;~ 2331:0A11
cs=0x2331;eip=0x000a16; 	R(JL(loc_32348));	// 77844 jl      short loc_32348 ;~ 2331:0A16
cs=0x2331;eip=0x000a18; 	R(JMP(loc_32317));	// 77845 jmp     short loc_32317 ;~ 2331:0A18
loc_3230a:
	// 9418 
cs=0x2331;eip=0x000a1a; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_6))));	// 77849 les     bx, [bp+var_6] ;~ 2331:0A1A
cs=0x2331;eip=0x000a1d; 	T(CMP(*(raddr(es,bx-1)), 0x20));	// 77850 cmp     byte ptr es:[bx-1], 20h ; ' ' ;~ 2331:0A1D
cs=0x2331;eip=0x000a22; 	R(JZ(loc_32322));	// 77851 jz      short loc_32322 ;~ 2331:0A22
cs=0x2331;eip=0x000a24; 	X(DEC(*(dw*)((dw*)(raddr(ss,bp+var_6)))));	// 77852 dec     word ptr [bp+var_6] ;~ 2331:0A24
loc_32317:
	// 9419 
cs=0x2331;eip=0x000a27; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_64)))));	// 77855 mov     ax, word ptr [bp+var_64] ;~ 2331:0A27
cs=0x2331;eip=0x000a2a; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_64+2)))));	// 77856 mov     dx, word ptr [bp+var_64+2] ;~ 2331:0A2A
cs=0x2331;eip=0x000a2d; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+var_6))), ax));	// 77857 cmp     word ptr [bp+var_6], ax ;~ 2331:0A2D
cs=0x2331;eip=0x000a30; 	R(JA(loc_3230a));	// 77858 ja      short loc_3230A ;~ 2331:0A30
loc_32322:
	// 9420 
cs=0x2331;eip=0x000a32; 	T(CMP(*(dw*)(raddr(ss,bp+var_58)), 0x0AD));	// 77862 cmp     [bp+var_58], 0ADh ; '≠' ;~ 2331:0A32
cs=0x2331;eip=0x000a37; 	R(JG(loc_3232c));	// 77863 jg      short loc_3232C ;~ 2331:0A37
cs=0x2331;eip=0x000a39; 	R(JMP(loc_323ff));	// 77864 jmp     loc_323FF ;~ 2331:0A39
loc_3232c:
	// 9421 
cs=0x2331;eip=0x000a3c; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_6)))));	// 77868 mov     ax, word ptr [bp+var_6] ;~ 2331:0A3C
cs=0x2331;eip=0x000a3f; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+var_64))), ax));	// 77869 cmp     word ptr [bp+var_64], ax ;~ 2331:0A3F
cs=0x2331;eip=0x000a42; 	R(JNZ(loc_32337));	// 77870 jnz     short loc_32337 ;~ 2331:0A42
cs=0x2331;eip=0x000a44; 	R(JMP(loc_323ff));	// 77871 jmp     loc_323FF ;~ 2331:0A44
loc_32337:
	// 9422 
cs=0x2331;eip=0x000a47; 	T(MOV(bx, *(dw*)((&unk_54338))));	// 77875 mov     bx, word ptr unk_54338 ;~ 2331:0A47
cs=0x2331;eip=0x000a4b; 	T(SHL(bx, 1));	// 77876 shl     bx, 1 ;~ 2331:0A4B
cs=0x2331;eip=0x000a4d; 	T(SHL(bx, 1));	// 77877 shl     bx, 1 ;~ 2331:0A4D
cs=0x2331;eip=0x000a4f; 	T(CMP(*(dw*)(raddr(ds,bx-0x366A)), ax));	// 77878 cmp     [bx-366Ah], ax ;~ 2331:0A4F
cs=0x2331;eip=0x000a53; 	R(JA(loc_323a5));	// 77879 ja      short loc_323A5 ;~ 2331:0A53
cs=0x2331;eip=0x000a55; 	R(JMP(loc_326a3));	// 77880 jmp     loc_326A3 ;~ 2331:0A55
loc_32348:
	// 9423 
cs=0x2331;eip=0x000a58; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_6))));	// 77884 les     bx, [bp+var_6] ;~ 2331:0A58
cs=0x2331;eip=0x000a5b; 	T(MOV(al, *(raddr(es,bx))));	// 77885 mov     al, es:[bx] ;~ 2331:0A5B
cs=0x2331;eip=0x000a5e; 	X(MOV(*(db*)(raddr(ss,bp+var_68)), al));	// 77886 mov     byte ptr [bp+var_68], al ;~ 2331:0A5E
cs=0x2331;eip=0x000a61; 	T(CMP(al, 2));	// 77887 cmp     al, 2 ;~ 2331:0A61
cs=0x2331;eip=0x000a63; 	R(JZ(loc_3236a));	// 77888 jz      short loc_3236A ;~ 2331:0A63
cs=0x2331;eip=0x000a65; 	T(OR(al, al));	// 77889 or      al, al ;~ 2331:0A65
cs=0x2331;eip=0x000a67; 	R(JZ(loc_3236a));	// 77890 jz      short loc_3236A ;~ 2331:0A67
cs=0x2331;eip=0x000a69; 	T(MOV(bx, *(dw*)((&unk_54338))));	// 77891 mov     bx, word ptr unk_54338 ;~ 2331:0A69
cs=0x2331;eip=0x000a6d; 	T(SHL(bx, 1));	// 77892 shl     bx, 1 ;~ 2331:0A6D
cs=0x2331;eip=0x000a6f; 	T(SHL(bx, 1));	// 77893 shl     bx, 1 ;~ 2331:0A6F
cs=0x2331;eip=0x000a71; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_6)))));	// 77894 mov     ax, word ptr [bp+var_6] ;~ 2331:0A71
cs=0x2331;eip=0x000a74; 	T(CMP(*(dw*)(raddr(ds,bx-0x366A)), ax));	// 77895 cmp     [bx-366Ah], ax ;~ 2331:0A74
cs=0x2331;eip=0x000a78; 	R(JA(loc_32370));	// 77896 ja      short loc_32370 ;~ 2331:0A78
loc_3236a:
	// 9424 
cs=0x2331;eip=0x000a7a; 	X(MOV(*(raddr(ss,bp+var_5e)), 1));	// 77900 mov     [bp+var_5E], 1 ;~ 2331:0A7A
cs=0x2331;eip=0x000a7e; 	R(JMP(loc_32322));	// 77901 jmp     short loc_32322 ;~ 2331:0A7E
loc_32370:
	// 9425 
cs=0x2331;eip=0x000a80; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_6)))));	// 77905 mov     bx, word ptr [bp+var_6] ;~ 2331:0A80
cs=0x2331;eip=0x000a83; 	T(CMP(*(raddr(es,bx)), 0x0E));	// 77906 cmp     byte ptr es:[bx], 0Eh ;~ 2331:0A83
cs=0x2331;eip=0x000a87; 	R(JNZ(loc_32382));	// 77907 jnz     short loc_32382 ;~ 2331:0A87
cs=0x2331;eip=0x000a89; 	X(MOV(*(raddr(ss,bp+var_5c)), 1));	// 77908 mov     [bp+var_5C], 1 ;~ 2331:0A89
cs=0x2331;eip=0x000a8d; 	R(CALL(sub_330a3,0));	// 77909 call    sub_330A3 ;~ 2331:0A8D
cs=0x2331;eip=0x000a90; 	R(JMP(loc_32322));	// 77910 jmp     short loc_32322 ;~ 2331:0A90
loc_32382:
	// 9426 
cs=0x2331;eip=0x000a92; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_6))));	// 77914 les     bx, [bp+var_6] ;~ 2331:0A92
cs=0x2331;eip=0x000a95; 	T(MOV(al, *(raddr(es,bx))));	// 77915 mov     al, es:[bx] ;~ 2331:0A95
cs=0x2331;eip=0x000a98; 	X(MOV(*(db*)(raddr(ss,bp+var_68)), al));	// 77916 mov     byte ptr [bp+var_68], al ;~ 2331:0A98
cs=0x2331;eip=0x000a9b; 	T(CMP(al, 1));	// 77917 cmp     al, 1 ;~ 2331:0A9B
cs=0x2331;eip=0x000a9d; 	R(JZ(loc_32322));	// 77918 jz      short loc_32322 ;~ 2331:0A9D
cs=0x2331;eip=0x000a9f; 	T(CMP(al, 3));	// 77919 cmp     al, 3 ;~ 2331:0A9F
cs=0x2331;eip=0x000aa1; 	R(JZ(loc_32322));	// 77920 jz      short loc_32322 ;~ 2331:0AA1
cs=0x2331;eip=0x000aa3; 	T(CMP(al, 8));	// 77921 cmp     al, 8 ;~ 2331:0AA3
cs=0x2331;eip=0x000aa5; 	R(JZ(loc_32322));	// 77922 jz      short loc_32322 ;~ 2331:0AA5
cs=0x2331;eip=0x000aa7; 	T(CMP(al, 0x10));	// 77923 cmp     al, 10h ;~ 2331:0AA7
cs=0x2331;eip=0x000aa9; 	R(JZ(loc_32322));	// 77924 jz      short loc_32322 ;~ 2331:0AA9
cs=0x2331;eip=0x000aab; 	T(CMP(al, 4));	// 77925 cmp     al, 4 ;~ 2331:0AAB
cs=0x2331;eip=0x000aad; 	R(JZ(loc_32322));	// 77926 jz      short loc_32322 ;~ 2331:0AAD
cs=0x2331;eip=0x000aaf; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_6)))));	// 77927 inc     word ptr [bp+var_6] ;~ 2331:0AAF
cs=0x2331;eip=0x000ab2; 	R(JMP(loc_322e4));	// 77928 jmp     loc_322E4 ;~ 2331:0AB2
loc_323a5:
	// 9427 
cs=0x2331;eip=0x000ab5; 	T(MOV(ax, *(dw*)((&unk_54340))));	// 77932 mov     ax, word ptr unk_54340 ;~ 2331:0AB5
cs=0x2331;eip=0x000ab8; 	T(DEC(ax));	// 77933 dec     ax ;~ 2331:0AB8
cs=0x2331;eip=0x000ab9; 	T(CMP(ax, *(dw*)((&unk_54338))));	// 77934 cmp     ax, word ptr unk_54338 ;~ 2331:0AB9
cs=0x2331;eip=0x000abd; 	R(JLE(loc_323ff));	// 77935 jle     short loc_323FF ;~ 2331:0ABD
cs=0x2331;eip=0x000abf; 	T(MOV(si, *(dw*)((&unk_54338))));	// 77936 mov     si, word ptr unk_54338 ;~ 2331:0ABF
cs=0x2331;eip=0x000ac3; 	T(MOV(cl, 2));	// 77937 mov     cl, 2 ;~ 2331:0AC3
cs=0x2331;eip=0x000ac5; 	T(SHL(si, cl));	// 77938 shl     si, cl ;~ 2331:0AC5
cs=0x2331;eip=0x000ac7; 	T(MOV(ax, 8));	// 77939 mov     ax, 8 ;~ 2331:0AC7
cs=0x2331;eip=0x000aca; 	T(SUB(ax, *(dw*)((&unk_54338))));	// 77940 sub     ax, word ptr unk_54338 ;~ 2331:0ACA
cs=0x2331;eip=0x000ace; 	T(SHL(ax, 1));	// 77941 shl     ax, 1 ;~ 2331:0ACE
cs=0x2331;eip=0x000ad0; 	T(SHL(ax, 1));	// 77942 shl     ax, 1 ;~ 2331:0AD0
cs=0x2331;eip=0x000ad2; 	X(PUSH(ax));	// 77943 push    ax ;~ 2331:0AD2
cs=0x2331;eip=0x000ad3; 	T(MOV(ax, si));	// 77944 mov     ax, si ;~ 2331:0AD3
cs=0x2331;eip=0x000ad5; 	T(ADD(ax, 0x0C996));	// 77945 add     ax, 0C996h ;~ 2331:0AD5
cs=0x2331;eip=0x000ad8; 	X(PUSH(ax));	// 77946 push    ax ;~ 2331:0AD8
cs=0x2331;eip=0x000ad9; 	T(MOV(ax, si));	// 77947 mov     ax, si ;~ 2331:0AD9
cs=0x2331;eip=0x000adb; 	T(ADD(ax, 0x0C99A));	// 77948 add     ax, 0C99Ah ;~ 2331:0ADB
cs=0x2331;eip=0x000ade; 	X(PUSH(ax));	// 77949 push    ax ;~ 2331:0ADE
cs=0x2331;eip=0x000adf; 	R(CALLF(sub_104b8,0));	// 77950 call    sub_104B8 ;~ 2331:0ADF
cs=0x2331;eip=0x000ae4; 	T(ADD(sp, 6));	// 77951 add     sp, 6 ;~ 2331:0AE4
cs=0x2331;eip=0x000ae7; 	T(MOV(bx, *(dw*)((&unk_54338))));	// 77952 mov     bx, word ptr unk_54338 ;~ 2331:0AE7
cs=0x2331;eip=0x000aeb; 	T(SHL(bx, 1));	// 77953 shl     bx, 1 ;~ 2331:0AEB
cs=0x2331;eip=0x000aed; 	T(SHL(bx, 1));	// 77954 shl     bx, 1 ;~ 2331:0AED
cs=0x2331;eip=0x000aef; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_64)))));	// 77955 mov     ax, word ptr [bp+var_64] ;~ 2331:0AEF
cs=0x2331;eip=0x000af2; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_64+2)))));	// 77956 mov     dx, word ptr [bp+var_64+2] ;~ 2331:0AF2
cs=0x2331;eip=0x000af5; 	X(MOV(*(dw*)(raddr(ds,bx-0x366A)), ax));	// 77957 mov     [bx-366Ah], ax ;~ 2331:0AF5
cs=0x2331;eip=0x000af9; 	X(MOV(*(dw*)(raddr(ds,bx-0x3668)), dx));	// 77958 mov     [bx-3668h], dx ;~ 2331:0AF9
cs=0x2331;eip=0x000afd; 	X(INC(*(dw*)((&unk_54340))));	// 77959 inc     word ptr unk_54340 ;~ 2331:0AFD
cs=0x2331;eip=0x000b01; 	X(PUSH(*(dw*)((&unk_54338))));	// 77960 push    word ptr unk_54338 ;~ 2331:0B01
cs=0x2331;eip=0x000b05; 	X(PUSH(*(dw*)((&unk_54340))));	// 77961 push    word ptr unk_54340 ;~ 2331:0B05
cs=0x2331;eip=0x000b09; 	R(CALL(sub_32fc4,0));	// 77962 call    sub_32FC4 ;~ 2331:0B09
cs=0x2331;eip=0x000b0c; 	R(JMP(loc_326a3));	// 77963 jmp     loc_326A3 ;~ 2331:0B0C
loc_323ff:
	// 9428 
cs=0x2331;eip=0x000b0f; 	T(MOV(si, *(dw*)((dw*)(raddr(ss,bp+var_6)))));	// 77968 mov     si, word ptr [bp+var_6] ;~ 2331:0B0F
cs=0x2331;eip=0x000b12; 	T(SUB(si, *(dw*)((dw*)(raddr(ss,bp+var_64)))));	// 77969 sub     si, word ptr [bp+var_64] ;~ 2331:0B12
cs=0x2331;eip=0x000b15; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_64+2)))));	// 77970 push    word ptr [bp+var_64+2] ;~ 2331:0B15
cs=0x2331;eip=0x000b18; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_64)))));	// 77971 push    word ptr [bp+var_64] ;~ 2331:0B18
cs=0x2331;eip=0x000b1b; 	T(ax = bp+var_56);	// 77972 lea     ax, [bp+var_56] ;~ 2331:0B1B
cs=0x2331;eip=0x000b1e; 	X(PUSH(ss));	// 77973 push    ss ;~ 2331:0B1E
cs=0x2331;eip=0x000b1f; 	X(PUSH(ax));	// 77974 push    ax ;~ 2331:0B1F
cs=0x2331;eip=0x000b20; 	X(PUSH(si));	// 77975 push    si ;~ 2331:0B20
cs=0x2331;eip=0x000b21; 	R(CALLF(sub_210f1,0));	// 77976 call    sub_210F1 ;~ 2331:0B21
cs=0x2331;eip=0x000b26; 	X(MOV(*(raddr(ss,bp+si+var_56)), 0));	// 77977 mov     [bp+si+var_56], 0 ;~ 2331:0B26
cs=0x2331;eip=0x000b2a; 	T(ax = bp+var_56);	// 77978 lea     ax, [bp+var_56] ;~ 2331:0B2A
cs=0x2331;eip=0x000b2d; 	X(PUSH(ax));	// 77979 push    ax ;~ 2331:0B2D
cs=0x2331;eip=0x000b2e; 	T(MOV(ax, 0x20));	// 77980 mov     ax, 20h ; ' ' ;~ 2331:0B2E
cs=0x2331;eip=0x000b31; 	X(PUSH(ax));	// 77981 push    ax ;~ 2331:0B31
cs=0x2331;eip=0x000b32; 	X(PUSH(*(dw*)(raddr(ss,bp+var_58))));	// 77982 push    [bp+var_58] ;~ 2331:0B32
cs=0x2331;eip=0x000b35; 	R(CALLF(sub_2dce4,0));	// 77983 call    sub_2DCE4 ;~ 2331:0B35
cs=0x2331;eip=0x000b3a; 	T(CMP(*(raddr(ss,bp+var_5c)), 0));	// 77984 cmp     [bp+var_5C], 0 ;~ 2331:0B3A
cs=0x2331;eip=0x000b3e; 	R(JZ(loc_32457));	// 77985 jz      short loc_32457 ;~ 2331:0B3E
cs=0x2331;eip=0x000b40; 	T(MOV(ax, 0x20));	// 77986 mov     ax, 20h ; ' ' ;~ 2331:0B40
cs=0x2331;eip=0x000b43; 	X(PUSH(ax));	// 77987 push    ax ;~ 2331:0B43
cs=0x2331;eip=0x000b44; 	T(ax = bp+var_56);	// 77988 lea     ax, [bp+var_56] ;~ 2331:0B44
cs=0x2331;eip=0x000b47; 	X(PUSH(ax));	// 77989 push    ax ;~ 2331:0B47
cs=0x2331;eip=0x000b48; 	R(CALLF(sub_2dcb2,0));	// 77990 call    sub_2DCB2 ;~ 2331:0B48
cs=0x2331;eip=0x000b4d; 	T(ADD(ax, 0x20));	// 77991 add     ax, 20h ; ' ' ;~ 2331:0B4D
cs=0x2331;eip=0x000b50; 	X(PUSH(ax));	// 77992 push    ax ;~ 2331:0B50
cs=0x2331;eip=0x000b51; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_58))));	// 77993 mov     ax, [bp+var_58] ;~ 2331:0B51
cs=0x2331;eip=0x000b54; 	T(ADD(ax, 6));	// 77994 add     ax, 6 ;~ 2331:0B54
cs=0x2331;eip=0x000b57; 	X(PUSH(ax));	// 77995 push    ax ;~ 2331:0B57
cs=0x2331;eip=0x000b58; 	T(MOV(ax, 0x0FF07));	// 77996 mov     ax, 0FF07h ;~ 2331:0B58
cs=0x2331;eip=0x000b5b; 	X(PUSH(ax));	// 77997 push    ax ;~ 2331:0B5B
cs=0x2331;eip=0x000b5c; 	R(CALLF(sub_203c2,0));	// 77998 call    sub_203C2 ;~ 2331:0B5C
cs=0x2331;eip=0x000b61; 	X(ADD(*(dw*)(raddr(ss,bp+var_58)), 9));	// 77999 add     [bp+var_58], 9 ;~ 2331:0B61
cs=0x2331;eip=0x000b65; 	R(JMP(loc_3245b));	// 78000 jmp     short loc_3245B ;~ 2331:0B65
loc_32457:
	// 9429 
cs=0x2331;eip=0x000b67; 	X(ADD(*(dw*)(raddr(ss,bp+var_58)), 0x0A));	// 78004 add     [bp+var_58], 0Ah ;~ 2331:0B67
loc_3245b:
	// 9430 
cs=0x2331;eip=0x000b6b; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_6)))));	// 78007 mov     ax, word ptr [bp+var_6] ;~ 2331:0B6B
cs=0x2331;eip=0x000b6e; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_6+2)))));	// 78008 mov     dx, word ptr [bp+var_6+2] ;~ 2331:0B6E
cs=0x2331;eip=0x000b71; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_64))), ax));	// 78009 mov     word ptr [bp+var_64], ax ;~ 2331:0B71
cs=0x2331;eip=0x000b74; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_64+2))), dx));	// 78010 mov     word ptr [bp+var_64+2], dx ;~ 2331:0B74
cs=0x2331;eip=0x000b77; 	R(JMP(loc_3246c));	// 78011 jmp     short loc_3246C ;~ 2331:0B77
loc_32469:
	// 9431 
cs=0x2331;eip=0x000b79; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_64)))));	// 78015 inc     word ptr [bp+var_64] ;~ 2331:0B79
loc_3246c:
	// 9432 
cs=0x2331;eip=0x000b7c; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_64))));	// 78018 les     bx, [bp+var_64] ;~ 2331:0B7C
cs=0x2331;eip=0x000b7f; 	T(CMP(*(raddr(es,bx)), 0x20));	// 78019 cmp     byte ptr es:[bx], 20h ; ' ' ;~ 2331:0B7F
cs=0x2331;eip=0x000b83; 	R(JZ(loc_32469));	// 78020 jz      short loc_32469 ;~ 2331:0B83
cs=0x2331;eip=0x000b85; 	T(MOV(al, *(raddr(es,bx))));	// 78021 mov     al, es:[bx] ;~ 2331:0B85
cs=0x2331;eip=0x000b88; 	X(MOV(*(db*)(raddr(ss,bp+var_68)), al));	// 78022 mov     byte ptr [bp+var_68], al ;~ 2331:0B88
cs=0x2331;eip=0x000b8b; 	T(CMP(al, 1));	// 78023 cmp     al, 1 ;~ 2331:0B8B
cs=0x2331;eip=0x000b8d; 	R(JZ(loc_32493));	// 78024 jz      short loc_32493 ;~ 2331:0B8D
cs=0x2331;eip=0x000b8f; 	T(CMP(al, 3));	// 78025 cmp     al, 3 ;~ 2331:0B8F
cs=0x2331;eip=0x000b91; 	R(JZ(loc_32493));	// 78026 jz      short loc_32493 ;~ 2331:0B91
cs=0x2331;eip=0x000b93; 	T(CMP(al, 4));	// 78027 cmp     al, 4 ;~ 2331:0B93
cs=0x2331;eip=0x000b95; 	R(JZ(loc_32493));	// 78028 jz      short loc_32493 ;~ 2331:0B95
cs=0x2331;eip=0x000b97; 	T(CMP(al, 0x10));	// 78029 cmp     al, 10h ;~ 2331:0B97
cs=0x2331;eip=0x000b99; 	R(JZ(loc_32493));	// 78030 jz      short loc_32493 ;~ 2331:0B99
cs=0x2331;eip=0x000b9b; 	T(CMP(al, 8));	// 78031 cmp     al, 8 ;~ 2331:0B9B
cs=0x2331;eip=0x000b9d; 	R(JZ(loc_32493));	// 78032 jz      short loc_32493 ;~ 2331:0B9D
cs=0x2331;eip=0x000b9f; 	T(CMP(al, 0x0E));	// 78033 cmp     al, 0Eh ;~ 2331:0B9F
cs=0x2331;eip=0x000ba1; 	R(JNZ(loc_32496));	// 78034 jnz     short loc_32496 ;~ 2331:0BA1
loc_32493:
	// 9433 
cs=0x2331;eip=0x000ba3; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_64)))));	// 78038 inc     word ptr [bp+var_64] ;~ 2331:0BA3
loc_32496:
	// 9434 
cs=0x2331;eip=0x000ba6; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_6))));	// 78041 les     bx, [bp+var_6] ;~ 2331:0BA6
cs=0x2331;eip=0x000ba9; 	T(CMP(*(raddr(es,bx)), 3));	// 78042 cmp     byte ptr es:[bx], 3 ;~ 2331:0BA9
cs=0x2331;eip=0x000bad; 	R(JNZ(loc_32514));	// 78043 jnz     short loc_32514 ;~ 2331:0BAD
cs=0x2331;eip=0x000baf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_58))));	// 78044 mov     ax, [bp+var_58] ;~ 2331:0BAF
cs=0x2331;eip=0x000bb2; 	X(MOV(*(dw*)((&unk_5433a)), ax));	// 78045 mov     word ptr unk_5433A, ax ;~ 2331:0BB2
cs=0x2331;eip=0x000bb5; 	T(MOV(ax, 0x20));	// 78046 mov     ax, 20h ; ' ' ;~ 2331:0BB5
cs=0x2331;eip=0x000bb8; 	X(PUSH(ax));	// 78047 push    ax ;~ 2331:0BB8
cs=0x2331;eip=0x000bb9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_58))));	// 78048 push    [bp+var_58] ;~ 2331:0BB9
cs=0x2331;eip=0x000bbc; 	T(MOV(ax, 0x0C4));	// 78049 mov     ax, 0C4h ; 'ƒ' ;~ 2331:0BBC
cs=0x2331;eip=0x000bbf; 	X(PUSH(ax));	// 78050 push    ax ;~ 2331:0BBF
cs=0x2331;eip=0x000bc0; 	X(PUSH(*(dw*)((&unk_49e5a))));	// 78051 push    word ptr unk_49E5A ;~ 2331:0BC0
cs=0x2331;eip=0x000bc4; 	T(MOV(ax, 0x0FF00));	// 78052 mov     ax, 0FF00h ;~ 2331:0BC4
cs=0x2331;eip=0x000bc7; 	X(PUSH(ax));	// 78053 push    ax ;~ 2331:0BC7
cs=0x2331;eip=0x000bc8; 	R(CALLF(sub_233c4,0));	// 78054 call    sub_233C4 ;~ 2331:0BC8
cs=0x2331;eip=0x000bcd; 	T(MOV(ax, 0x24A6));	// 78055 mov     ax, 24A6h ;~ 2331:0BCD
cs=0x2331;eip=0x000bd0; 	X(PUSH(ax));	// 78056 push    ax ;~ 2331:0BD0
cs=0x2331;eip=0x000bd1; 	T(SUB(ax, ax));	// 78057 sub     ax, ax ;~ 2331:0BD1
cs=0x2331;eip=0x000bd3; 	X(PUSH(ax));	// 78058 push    ax ;~ 2331:0BD3
cs=0x2331;eip=0x000bd4; 	X(PUSH(ax));	// 78059 push    ax ;~ 2331:0BD4
cs=0x2331;eip=0x000bd5; 	T(MOV(ax, 0x0ED08));	// 78060 mov     ax, 0ED08h ;~ 2331:0BD5
cs=0x2331;eip=0x000bd8; 	X(PUSH(ax));	// 78061 push    ax ;~ 2331:0BD8
cs=0x2331;eip=0x000bd9; 	T(MOV(ax, 0x20));	// 78062 mov     ax, 20h ; ' ' ;~ 2331:0BD9
cs=0x2331;eip=0x000bdc; 	X(PUSH(ax));	// 78063 push    ax ;~ 2331:0BDC
cs=0x2331;eip=0x000bdd; 	X(PUSH(*(dw*)(raddr(ss,bp+var_58))));	// 78064 push    [bp+var_58] ;~ 2331:0BDD
cs=0x2331;eip=0x000be0; 	X(PUSH(*(dw*)((&unk_49e58))));	// 78065 push    word ptr unk_49E58 ;~ 2331:0BE0
cs=0x2331;eip=0x000be4; 	X(PUSH(*(dw*)((&unk_49e5a))));	// 78066 push    word ptr unk_49E5A ;~ 2331:0BE4
cs=0x2331;eip=0x000be8; 	R(CALLF(sub_2e88a,0));	// 78067 call    sub_2E88A ;~ 2331:0BE8
cs=0x2331;eip=0x000bed; 	T(SUB(si, si));	// 78068 sub     si, si ;~ 2331:0BED
cs=0x2331;eip=0x000bef; 	T(MOV(di, 0x20));	// 78069 mov     di, 20h ; ' ' ;~ 2331:0BEF
loc_324e2:
	// 9435 
cs=0x2331;eip=0x000bf2; 	T(CMP(*(raddr(ds,si-0x952)), 0));	// 78072 cmp     byte ptr [si-952h], 0 ;~ 2331:0BF2
cs=0x2331;eip=0x000bf7; 	R(JNZ(loc_324fe));	// 78073 jnz     short loc_324FE ;~ 2331:0BF7
cs=0x2331;eip=0x000bf9; 	X(PUSH(di));	// 78074 push    di ;~ 2331:0BF9
cs=0x2331;eip=0x000bfa; 	X(PUSH(*(dw*)(raddr(ss,bp+var_58))));	// 78075 push    [bp+var_58] ;~ 2331:0BFA
cs=0x2331;eip=0x000bfd; 	T(MOV(ax, 0x30));	// 78076 mov     ax, 30h ; '0' ;~ 2331:0BFD
cs=0x2331;eip=0x000c00; 	X(PUSH(ax));	// 78077 push    ax ;~ 2331:0C00
cs=0x2331;eip=0x000c01; 	T(MOV(ax, 0x24));	// 78078 mov     ax, 24h ; '$' ;~ 2331:0C01
cs=0x2331;eip=0x000c04; 	X(PUSH(ax));	// 78079 push    ax ;~ 2331:0C04
cs=0x2331;eip=0x000c05; 	T(MOV(ax, 0x5A0F));	// 78080 mov     ax, 5A0Fh ;~ 2331:0C05
cs=0x2331;eip=0x000c08; 	X(PUSH(ax));	// 78081 push    ax ;~ 2331:0C08
cs=0x2331;eip=0x000c09; 	R(CALLF(sub_233c4,0));	// 78082 call    sub_233C4 ;~ 2331:0C09
loc_324fe:
	// 9436 
cs=0x2331;eip=0x000c0e; 	T(ADD(di, 0x31));	// 78085 add     di, 31h ; '1' ;~ 2331:0C0E
cs=0x2331;eip=0x000c11; 	T(INC(si));	// 78086 inc     si ;~ 2331:0C11
cs=0x2331;eip=0x000c12; 	T(CMP(si, 4));	// 78087 cmp     si, 4 ;~ 2331:0C12
cs=0x2331;eip=0x000c15; 	R(JL(loc_324e2));	// 78088 jl      short loc_324E2 ;~ 2331:0C15
cs=0x2331;eip=0x000c17; 	X(MOV(*(dw*)(raddr(ss,bp+var_5a)), si));	// 78089 mov     [bp+var_5A], si ;~ 2331:0C17
cs=0x2331;eip=0x000c1a; 	R(CALL(sub_327c9,0));	// 78090 call    sub_327C9 ;~ 2331:0C1A
cs=0x2331;eip=0x000c1d; 	X(ADD(*(dw*)(raddr(ss,bp+var_58)), 0x31));	// 78091 add     [bp+var_58], 31h ; '1' ;~ 2331:0C1D
cs=0x2331;eip=0x000c21; 	R(JMP(loc_3269a));	// 78092 jmp     loc_3269A ;~ 2331:0C21
loc_32514:
	// 9437 
cs=0x2331;eip=0x000c24; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_6))));	// 78096 les     bx, [bp+var_6] ;~ 2331:0C24
cs=0x2331;eip=0x000c27; 	T(CMP(*(raddr(es,bx)), 4));	// 78097 cmp     byte ptr es:[bx], 4 ;~ 2331:0C27
cs=0x2331;eip=0x000c2b; 	R(JNZ(loc_32559));	// 78098 jnz     short loc_32559 ;~ 2331:0C2B
cs=0x2331;eip=0x000c2d; 	T(SUB(ax, ax));	// 78099 sub     ax, ax ;~ 2331:0C2D
cs=0x2331;eip=0x000c2f; 	X(PUSH(ax));	// 78100 push    ax ;~ 2331:0C2F
cs=0x2331;eip=0x000c30; 	X(PUSH(ax));	// 78101 push    ax ;~ 2331:0C30
cs=0x2331;eip=0x000c31; 	X(PUSH(ax));	// 78102 push    ax ;~ 2331:0C31
cs=0x2331;eip=0x000c32; 	X(PUSH(ax));	// 78103 push    ax ;~ 2331:0C32
cs=0x2331;eip=0x000c33; 	X(PUSH(ax));	// 78104 push    ax ;~ 2331:0C33
cs=0x2331;eip=0x000c34; 	X(PUSH(ax));	// 78105 push    ax ;~ 2331:0C34
cs=0x2331;eip=0x000c35; 	T(MOV(ax, 0x24DE));	// 78106 mov     ax, 24DEh ;~ 2331:0C35
cs=0x2331;eip=0x000c38; 	X(PUSH(ax));	// 78107 push    ax ;~ 2331:0C38
cs=0x2331;eip=0x000c39; 	T(MOV(ax, 8));	// 78108 mov     ax, 8 ;~ 2331:0C39
cs=0x2331;eip=0x000c3c; 	X(PUSH(ax));	// 78109 push    ax ;~ 2331:0C3C
cs=0x2331;eip=0x000c3d; 	X(PUSH(*(dw*)((&unk_54336))));	// 78110 push    word ptr unk_54336 ;~ 2331:0C3D
cs=0x2331;eip=0x000c41; 	X(PUSH(*(dw*)((&unk_54334))));	// 78111 push    word ptr unk_54334 ;~ 2331:0C41
cs=0x2331;eip=0x000c45; 	X(PUSH(*(dw*)((&unk_54332))));	// 78112 push    word ptr unk_54332 ;~ 2331:0C45
cs=0x2331;eip=0x000c49; 	X(PUSH(*(dw*)((&unk_54330))));	// 78113 push    word ptr unk_54330 ;~ 2331:0C49
cs=0x2331;eip=0x000c4d; 	X(PUSH(*(dw*)((&unk_5432e))));	// 78114 push    word ptr unk_5432E ;~ 2331:0C4D
cs=0x2331;eip=0x000c51; 	X(PUSH(*(dw*)((&unk_5432c))));	// 78115 push    word ptr unk_5432C ;~ 2331:0C51
cs=0x2331;eip=0x000c55; 	R(CALLF(sub_2d1e0,0));	// 78116 call    sub_2D1E0 ;~ 2331:0C55
cs=0x2331;eip=0x000c5a; 	T(ADD(sp, 0x1C));	// 78117 add     sp, 1Ch ;~ 2331:0C5A
cs=0x2331;eip=0x000c5d; 	R(CALL(sub_3317c,0));	// 78118 call    sub_3317C ;~ 2331:0C5D
cs=0x2331;eip=0x000c60; 	R(CALL(sub_32a01,0));	// 78119 call    sub_32A01 ;~ 2331:0C60
cs=0x2331;eip=0x000c63; 	R(CALL(sub_330b9,0));	// 78120 call    sub_330B9 ;~ 2331:0C63
cs=0x2331;eip=0x000c66; 	R(JMP(loc_3269a));	// 78121 jmp     loc_3269A ;~ 2331:0C66
loc_32559:
	// 9438 
cs=0x2331;eip=0x000c69; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_6))));	// 78125 les     bx, [bp+var_6] ;~ 2331:0C69
cs=0x2331;eip=0x000c6c; 	T(CMP(*(raddr(es,bx)), 0x10));	// 78126 cmp     byte ptr es:[bx], 10h ;~ 2331:0C6C
cs=0x2331;eip=0x000c70; 	R(JNZ(loc_3256d));	// 78127 jnz     short loc_3256D ;~ 2331:0C70
cs=0x2331;eip=0x000c72; 	X(MOV(unk_5436a, 1));	// 78128 mov     byte ptr unk_5436A, 1 ;~ 2331:0C72
cs=0x2331;eip=0x000c77; 	R(CALL(sub_34c5b,0));	// 78129 call    sub_34C5B ;~ 2331:0C77
cs=0x2331;eip=0x000c7a; 	R(JMP(loc_3269a));	// 78130 jmp     loc_3269A ;~ 2331:0C7A
loc_3256d:
	// 9439 
cs=0x2331;eip=0x000c7d; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_6))));	// 78134 les     bx, [bp+var_6] ;~ 2331:0C7D
cs=0x2331;eip=0x000c80; 	T(CMP(*(raddr(es,bx)), 8));	// 78135 cmp     byte ptr es:[bx], 8 ;~ 2331:0C80
cs=0x2331;eip=0x000c84; 	R(JZ(loc_32579));	// 78136 jz      short loc_32579 ;~ 2331:0C84
cs=0x2331;eip=0x000c86; 	R(JMP(loc_3269a));	// 78137 jmp     loc_3269A ;~ 2331:0C86
loc_32579:
	// 9440 
cs=0x2331;eip=0x000c89; 	T(MOV(ax, 0x24B0));	// 78141 mov     ax, 24B0h ;~ 2331:0C89
cs=0x2331;eip=0x000c8c; 	X(PUSH(ax));	// 78142 push    ax ;~ 2331:0C8C
cs=0x2331;eip=0x000c8d; 	T(SUB(ax, ax));	// 78143 sub     ax, ax ;~ 2331:0C8D
cs=0x2331;eip=0x000c8f; 	X(PUSH(ax));	// 78144 push    ax ;~ 2331:0C8F
cs=0x2331;eip=0x000c90; 	X(PUSH(ax));	// 78145 push    ax ;~ 2331:0C90
cs=0x2331;eip=0x000c91; 	T(MOV(ax, 0x0ED08));	// 78146 mov     ax, 0ED08h ;~ 2331:0C91
cs=0x2331;eip=0x000c94; 	X(PUSH(ax));	// 78147 push    ax ;~ 2331:0C94
cs=0x2331;eip=0x000c95; 	T(MOV(ax, 0x18));	// 78148 mov     ax, 18h ;~ 2331:0C95
cs=0x2331;eip=0x000c98; 	X(PUSH(ax));	// 78149 push    ax ;~ 2331:0C98
cs=0x2331;eip=0x000c99; 	T(MOV(ax, 0x4E));	// 78150 mov     ax, 4Eh ; 'N' ;~ 2331:0C99
cs=0x2331;eip=0x000c9c; 	X(PUSH(ax));	// 78151 push    ax ;~ 2331:0C9C
cs=0x2331;eip=0x000c9d; 	T(MOV(ax, 0x0D0));	// 78152 mov     ax, 0D0h ; '–' ;~ 2331:0C9D
cs=0x2331;eip=0x000ca0; 	X(PUSH(ax));	// 78153 push    ax ;~ 2331:0CA0
cs=0x2331;eip=0x000ca1; 	T(MOV(ax, 0x64));	// 78154 mov     ax, 64h ; 'd' ;~ 2331:0CA1
cs=0x2331;eip=0x000ca4; 	X(PUSH(ax));	// 78155 push    ax ;~ 2331:0CA4
cs=0x2331;eip=0x000ca5; 	R(CALLF(sub_2c4d3,0));	// 78156 call    sub_2C4D3 ;~ 2331:0CA5
cs=0x2331;eip=0x000caa; 	T(MOV(ax, 0x26));	// 78157 mov     ax, 26h ; '&' ;~ 2331:0CAA
cs=0x2331;eip=0x000cad; 	X(PUSH(ax));	// 78158 push    ax ;~ 2331:0CAD
cs=0x2331;eip=0x000cae; 	T(MOV(ax, 0x59));	// 78159 mov     ax, 59h ; 'Y' ;~ 2331:0CAE
cs=0x2331;eip=0x000cb1; 	X(PUSH(ax));	// 78160 push    ax ;~ 2331:0CB1
cs=0x2331;eip=0x000cb2; 	T(MOV(ax, 0x20));	// 78161 mov     ax, 20h ; ' ' ;~ 2331:0CB2
cs=0x2331;eip=0x000cb5; 	X(PUSH(ax));	// 78162 push    ax ;~ 2331:0CB5
cs=0x2331;eip=0x000cb6; 	T(MOV(ax, 0x1E));	// 78163 mov     ax, 1Eh ;~ 2331:0CB6
cs=0x2331;eip=0x000cb9; 	X(PUSH(ax));	// 78164 push    ax ;~ 2331:0CB9
cs=0x2331;eip=0x000cba; 	T(MOV(ax, 0x0FF01));	// 78165 mov     ax, 0FF01h ;~ 2331:0CBA
cs=0x2331;eip=0x000cbd; 	X(PUSH(ax));	// 78166 push    ax ;~ 2331:0CBD
cs=0x2331;eip=0x000cbe; 	R(CALLF(sub_233c4,0));	// 78167 call    sub_233C4 ;~ 2331:0CBE
cs=0x2331;eip=0x000cc3; 	T(MOV(ax, 0x26));	// 78168 mov     ax, 26h ; '&' ;~ 2331:0CC3
cs=0x2331;eip=0x000cc6; 	X(PUSH(ax));	// 78169 push    ax ;~ 2331:0CC6
cs=0x2331;eip=0x000cc7; 	T(MOV(ax, 0x59));	// 78170 mov     ax, 59h ; 'Y' ;~ 2331:0CC7
cs=0x2331;eip=0x000cca; 	X(PUSH(ax));	// 78171 push    ax ;~ 2331:0CCA
cs=0x2331;eip=0x000ccb; 	T(MOV(ax, 0x20));	// 78172 mov     ax, 20h ; ' ' ;~ 2331:0CCB
cs=0x2331;eip=0x000cce; 	X(PUSH(ax));	// 78173 push    ax ;~ 2331:0CCE
cs=0x2331;eip=0x000ccf; 	T(MOV(ax, 0x1C));	// 78174 mov     ax, 1Ch ;~ 2331:0CCF
cs=0x2331;eip=0x000cd2; 	X(PUSH(ax));	// 78175 push    ax ;~ 2331:0CD2
cs=0x2331;eip=0x000cd3; 	T(MOV(ax, 0x0FF00));	// 78176 mov     ax, 0FF00h ;~ 2331:0CD3
cs=0x2331;eip=0x000cd6; 	X(PUSH(ax));	// 78177 push    ax ;~ 2331:0CD6
cs=0x2331;eip=0x000cd7; 	R(CALLF(sub_233c4,0));	// 78178 call    sub_233C4 ;~ 2331:0CD7
cs=0x2331;eip=0x000cdc; 	T(MOV(ax, 0x24B0));	// 78179 mov     ax, 24B0h ;~ 2331:0CDC
cs=0x2331;eip=0x000cdf; 	X(PUSH(ax));	// 78180 push    ax ;~ 2331:0CDF
cs=0x2331;eip=0x000ce0; 	R(CALL(sub_334ff,0));	// 78181 call    sub_334FF ;~ 2331:0CE0
cs=0x2331;eip=0x000ce3; 	T(MOV(cl, 5));	// 78182 mov     cl, 5 ;~ 2331:0CE3
cs=0x2331;eip=0x000ce5; 	T(SHL(ax, cl));	// 78183 shl     ax, cl ;~ 2331:0CE5
cs=0x2331;eip=0x000ce7; 	X(PUSH(ax));	// 78184 push    ax ;~ 2331:0CE7
cs=0x2331;eip=0x000ce8; 	T(MOV(ax, 0x64));	// 78185 mov     ax, 64h ; 'd' ;~ 2331:0CE8
cs=0x2331;eip=0x000ceb; 	X(PUSH(ax));	// 78186 push    ax ;~ 2331:0CEB
cs=0x2331;eip=0x000cec; 	T(MOV(ax, 0x0ED08));	// 78187 mov     ax, 0ED08h ;~ 2331:0CEC
cs=0x2331;eip=0x000cef; 	X(PUSH(ax));	// 78188 push    ax ;~ 2331:0CEF
cs=0x2331;eip=0x000cf0; 	T(MOV(ax, 0x26));	// 78189 mov     ax, 26h ; '&' ;~ 2331:0CF0
cs=0x2331;eip=0x000cf3; 	X(PUSH(ax));	// 78190 push    ax ;~ 2331:0CF3
cs=0x2331;eip=0x000cf4; 	T(MOV(ax, 0x59));	// 78191 mov     ax, 59h ; 'Y' ;~ 2331:0CF4
cs=0x2331;eip=0x000cf7; 	X(PUSH(ax));	// 78192 push    ax ;~ 2331:0CF7
cs=0x2331;eip=0x000cf8; 	T(MOV(ax, 0x20));	// 78193 mov     ax, 20h ; ' ' ;~ 2331:0CF8
cs=0x2331;eip=0x000cfb; 	X(PUSH(ax));	// 78194 push    ax ;~ 2331:0CFB
cs=0x2331;eip=0x000cfc; 	T(MOV(ax, 0x1C));	// 78195 mov     ax, 1Ch ;~ 2331:0CFC
cs=0x2331;eip=0x000cff; 	X(PUSH(ax));	// 78196 push    ax ;~ 2331:0CFF
cs=0x2331;eip=0x000d00; 	R(CALLF(sub_2e88a,0));	// 78197 call    sub_2E88A ;~ 2331:0D00
cs=0x2331;eip=0x000d05; 	T(CMP(unk_56feb, 0));	// 78198 cmp     byte ptr unk_56FEB, 0 ;~ 2331:0D05
cs=0x2331;eip=0x000d0a; 	R(JNZ(loc_32615));	// 78199 jnz     short loc_32615 ;~ 2331:0D0A
cs=0x2331;eip=0x000d0c; 	T(MOV(ax, 0x26));	// 78200 mov     ax, 26h ; '&' ;~ 2331:0D0C
cs=0x2331;eip=0x000d0f; 	X(PUSH(ax));	// 78201 push    ax ;~ 2331:0D0F
cs=0x2331;eip=0x000d10; 	T(MOV(ax, 0x59));	// 78202 mov     ax, 59h ; 'Y' ;~ 2331:0D10
cs=0x2331;eip=0x000d13; 	X(PUSH(ax));	// 78203 push    ax ;~ 2331:0D13
cs=0x2331;eip=0x000d14; 	T(MOV(ax, 0x20));	// 78204 mov     ax, 20h ; ' ' ;~ 2331:0D14
cs=0x2331;eip=0x000d17; 	X(PUSH(ax));	// 78205 push    ax ;~ 2331:0D17
cs=0x2331;eip=0x000d18; 	T(MOV(ax, 0x1C));	// 78206 mov     ax, 1Ch ;~ 2331:0D18
cs=0x2331;eip=0x000d1b; 	X(PUSH(ax));	// 78207 push    ax ;~ 2331:0D1B
cs=0x2331;eip=0x000d1c; 	T(MOV(ax, 0x5A01));	// 78208 mov     ax, 5A01h ;~ 2331:0D1C
cs=0x2331;eip=0x000d1f; 	X(PUSH(ax));	// 78209 push    ax ;~ 2331:0D1F
cs=0x2331;eip=0x000d20; 	R(CALLF(sub_233c4,0));	// 78210 call    sub_233C4 ;~ 2331:0D20
loc_32615:
	// 9441 
cs=0x2331;eip=0x000d25; 	T(SUB(si, si));	// 78213 sub     si, si ;~ 2331:0D25
cs=0x2331;eip=0x000d27; 	X(MOV(*(dw*)(raddr(ss,bp+var_6a)), 0x258E));	// 78214 mov     [bp+var_6A], 258Eh ;~ 2331:0D27
cs=0x2331;eip=0x000d2c; 	X(MOV(*(dw*)(raddr(ss,bp+var_68)), 0x2590));	// 78215 mov     [bp+var_68], 2590h ;~ 2331:0D2C
cs=0x2331;eip=0x000d31; 	X(MOV(*(dw*)(raddr(ss,bp+var_6c)), 0x2592));	// 78216 mov     [bp+var_6C], 2592h ;~ 2331:0D31
cs=0x2331;eip=0x000d36; 	X(MOV(*(dw*)(raddr(ss,bp+var_6e)), 0x2594));	// 78217 mov     [bp+var_6E], 2594h ;~ 2331:0D36
cs=0x2331;eip=0x000d3b; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_60))));	// 78218 mov     di, [bp+var_60] ;~ 2331:0D3B
loc_3262e:
	// 9442 
cs=0x2331;eip=0x000d3e; 	T(MOV(ax, 1));	// 78221 mov     ax, 1 ;~ 2331:0D3E
cs=0x2331;eip=0x000d41; 	T(MOV(cx, si));	// 78222 mov     cx, si ;~ 2331:0D41
cs=0x2331;eip=0x000d43; 	T(SHL(ax, cl));	// 78223 shl     ax, cl ;~ 2331:0D43
cs=0x2331;eip=0x000d45; 	T(MOV(cl, unk_56fed));	// 78224 mov     cl, byte ptr unk_56FED ;~ 2331:0D45
cs=0x2331;eip=0x000d49; 	T(SUB(ch, ch));	// 78225 sub     ch, ch ;~ 2331:0D49
cs=0x2331;eip=0x000d4b; 	T(TEST(ax, cx));	// 78226 test    ax, cx ;~ 2331:0D4B
cs=0x2331;eip=0x000d4d; 	R(JZ(loc_32643));	// 78227 jz      short loc_32643 ;~ 2331:0D4D
cs=0x2331;eip=0x000d4f; 	T(SUB(di, di));	// 78228 sub     di, di ;~ 2331:0D4F
cs=0x2331;eip=0x000d51; 	R(JMP(loc_3265c));	// 78229 jmp     short loc_3265C ;~ 2331:0D51
loc_32643:
	// 9443 
cs=0x2331;eip=0x000d53; 	T(MOV(ax, 1));	// 78233 mov     ax, 1 ;~ 2331:0D53
cs=0x2331;eip=0x000d56; 	T(MOV(cx, si));	// 78234 mov     cx, si ;~ 2331:0D56
cs=0x2331;eip=0x000d58; 	T(SHL(ax, cl));	// 78235 shl     ax, cl ;~ 2331:0D58
cs=0x2331;eip=0x000d5a; 	T(MOV(cl, unk_56fec));	// 78236 mov     cl, byte ptr unk_56FEC ;~ 2331:0D5A
cs=0x2331;eip=0x000d5e; 	T(SUB(ch, ch));	// 78237 sub     ch, ch ;~ 2331:0D5E
cs=0x2331;eip=0x000d60; 	T(TEST(ax, cx));	// 78238 test    ax, cx ;~ 2331:0D60
cs=0x2331;eip=0x000d62; 	R(JZ(loc_32659));	// 78239 jz      short loc_32659 ;~ 2331:0D62
cs=0x2331;eip=0x000d64; 	T(MOV(di, 0x5A01));	// 78240 mov     di, 5A01h ;~ 2331:0D64
cs=0x2331;eip=0x000d67; 	R(JMP(loc_3265c));	// 78241 jmp     short loc_3265C ;~ 2331:0D67
loc_32659:
	// 9444 
cs=0x2331;eip=0x000d69; 	T(MOV(di, 0x0FF01));	// 78245 mov     di, 0FF01h ;~ 2331:0D69
loc_3265c:
	// 9445 
cs=0x2331;eip=0x000d6c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_6a))));	// 78249 mov     bx, [bp+var_6A] ;~ 2331:0D6C
cs=0x2331;eip=0x000d6f; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 78250 mov     ax, [bx] ;~ 2331:0D6F
cs=0x2331;eip=0x000d71; 	T(ADD(ax, 0x18));	// 78251 add     ax, 18h ;~ 2331:0D71
cs=0x2331;eip=0x000d74; 	X(PUSH(ax));	// 78252 push    ax ;~ 2331:0D74
cs=0x2331;eip=0x000d75; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_68))));	// 78253 mov     bx, [bp+var_68] ;~ 2331:0D75
cs=0x2331;eip=0x000d78; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 78254 mov     ax, [bx] ;~ 2331:0D78
cs=0x2331;eip=0x000d7a; 	T(ADD(ax, 0x4E));	// 78255 add     ax, 4Eh ; 'N' ;~ 2331:0D7A
cs=0x2331;eip=0x000d7d; 	X(PUSH(ax));	// 78256 push    ax ;~ 2331:0D7D
cs=0x2331;eip=0x000d7e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_6c))));	// 78257 mov     bx, [bp+var_6C] ;~ 2331:0D7E
cs=0x2331;eip=0x000d81; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 78258 push    word ptr [bx] ;~ 2331:0D81
cs=0x2331;eip=0x000d83; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_6e))));	// 78259 mov     bx, [bp+var_6E] ;~ 2331:0D83
cs=0x2331;eip=0x000d86; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 78260 push    word ptr [bx] ;~ 2331:0D86
cs=0x2331;eip=0x000d88; 	X(PUSH(di));	// 78261 push    di ;~ 2331:0D88
cs=0x2331;eip=0x000d89; 	R(CALLF(sub_233c4,0));	// 78262 call    sub_233C4 ;~ 2331:0D89
cs=0x2331;eip=0x000d8e; 	X(ADD(*(dw*)(raddr(ss,bp+var_6a)), 8));	// 78263 add     [bp+var_6A], 8 ;~ 2331:0D8E
cs=0x2331;eip=0x000d92; 	X(ADD(*(dw*)(raddr(ss,bp+var_68)), 8));	// 78264 add     [bp+var_68], 8 ;~ 2331:0D92
cs=0x2331;eip=0x000d96; 	X(ADD(*(dw*)(raddr(ss,bp+var_6c)), 8));	// 78265 add     [bp+var_6C], 8 ;~ 2331:0D96
cs=0x2331;eip=0x000d9a; 	X(ADD(*(dw*)(raddr(ss,bp+var_6e)), 8));	// 78266 add     [bp+var_6E], 8 ;~ 2331:0D9A
cs=0x2331;eip=0x000d9e; 	T(INC(si));	// 78267 inc     si ;~ 2331:0D9E
cs=0x2331;eip=0x000d9f; 	T(CMP(si, 8));	// 78268 cmp     si, 8 ;~ 2331:0D9F
cs=0x2331;eip=0x000da2; 	R(JL(loc_3262e));	// 78269 jl      short loc_3262E ;~ 2331:0DA2
cs=0x2331;eip=0x000da4; 	X(MOV(*(dw*)(raddr(ss,bp+var_60)), di));	// 78270 mov     [bp+var_60], di ;~ 2331:0DA4
cs=0x2331;eip=0x000da7; 	X(MOV(*(dw*)(raddr(ss,bp+var_5a)), si));	// 78271 mov     [bp+var_5A], si ;~ 2331:0DA7
loc_3269a:
	// 9446 
cs=0x2331;eip=0x000daa; 	T(CMP(*(raddr(ss,bp+var_5e)), 0));	// 78275 cmp     [bp+var_5E], 0 ;~ 2331:0DAA
cs=0x2331;eip=0x000dae; 	R(JNZ(loc_326a3));	// 78276 jnz     short loc_326A3 ;~ 2331:0DAE
cs=0x2331;eip=0x000db0; 	R(JMP(loc_322cc));	// 78277 jmp     loc_322CC ;~ 2331:0DB0
loc_326a3:
	// 9447 
cs=0x2331;eip=0x000db3; 	R(CALLF(sub_20565,0));	// 78282 call    sub_20565 ;~ 2331:0DB3
cs=0x2331;eip=0x000db8; 	X(POP(si));	// 78283 pop     si ;~ 2331:0DB8
cs=0x2331;eip=0x000db9; 	X(POP(di));	// 78284 pop     di ;~ 2331:0DB9
cs=0x2331;eip=0x000dba; 	T(MOV(sp, bp));	// 78285 mov     sp, bp ;~ 2331:0DBA
cs=0x2331;eip=0x000dbc; 	X(POP(bp));	// 78286 pop     bp ;~ 2331:0DBC
cs=0x2331;eip=0x000dbd; 	R(RETN(0));	// 78287 retn ;~ 2331:0DBD
sub_326ae:
	// 78295 
#undef var_6c
#define var_6c -0x6C
	// 78298 var_6C          = byte ptr -6Ch ;~ 2331:0DBE
#undef var_68
#define var_68 -0x68
	// 78299 var_68          = word ptr -68h ;~ 2331:0DBE
#undef var_66
#define var_66 -0x66
	// 78300 var_66          = byte ptr -66h ;~ 2331:0DBE
#undef var_65
#define var_65 -0x65
	// 78301 var_65          = byte ptr -65h ;~ 2331:0DBE
#undef var_5e
#define var_5e -0x5E
	// 78302 var_5E          = byte ptr -5Eh ;~ 2331:0DBE
#undef var_5d
#define var_5d -0x5D
	// 78303 var_5D          = byte ptr -5Dh ;~ 2331:0DBE
#undef var_50
#define var_50 -0x50
	// 78304 var_50          = byte ptr -50h ;~ 2331:0DBE
#undef arg_0
#define arg_0 4
	// 78305 arg_0           = byte ptr  4 ;~ 2331:0DBE
cs=0x2331;eip=0x000dbe; 	X(PUSH(bp));	// 78307 push    bp ;~ 2331:0DBE
cs=0x2331;eip=0x000dbf; 	T(MOV(bp, sp));	// 78308 mov     bp, sp ;~ 2331:0DBF
cs=0x2331;eip=0x000dc1; 	T(SUB(sp, 0x6E));	// 78309 sub     sp, 6Eh ;~ 2331:0DC1
cs=0x2331;eip=0x000dc4; 	X(PUSH(si));	// 78310 push    si ;~ 2331:0DC4
cs=0x2331;eip=0x000dc5; 	R(CALL(sub_3317c,0));	// 78311 call    sub_3317C ;~ 2331:0DC5
cs=0x2331;eip=0x000dc8; 	X(PUSH(*(dw*)((&unk_54340))));	// 78312 push    word ptr unk_54340 ;~ 2331:0DC8
cs=0x2331;eip=0x000dcc; 	X(PUSH(*(dw*)((&unk_54338))));	// 78313 push    word ptr unk_54338 ;~ 2331:0DCC
cs=0x2331;eip=0x000dd0; 	X(PUSH(cs));	// 78314 push    cs ;~ 2331:0DD0
cs=0x2331;eip=0x000dd1; 	R(CALL(sub_32f79,0));	// 78315 call    near ptr sub_32F79 ;~ 2331:0DD1
cs=0x2331;eip=0x000dd4; 	T(ADD(sp, 4));	// 78316 add     sp, 4 ;~ 2331:0DD4
cs=0x2331;eip=0x000dd7; 	T(MOV(si, 0x11));	// 78317 mov     si, 11h ;~ 2331:0DD7
cs=0x2331;eip=0x000dda; 	T(CMP(*(dw*)((&unk_54338)), 0));	// 78318 cmp     word ptr unk_54338, 0 ;~ 2331:0DDA
cs=0x2331;eip=0x000ddf; 	R(JZ(loc_326d4));	// 78319 jz      short loc_326D4 ;~ 2331:0DDF
cs=0x2331;eip=0x000de1; 	R(JMP(loc_327c0));	// 78320 jmp     loc_327C0 ;~ 2331:0DE1
loc_326d4:
	// 9448 
cs=0x2331;eip=0x000de4; 	T(CMP(*(raddr(ss,bp+arg_0)), 0));	// 78324 cmp     [bp+arg_0], 0 ;~ 2331:0DE4
cs=0x2331;eip=0x000de8; 	R(JNZ(loc_326dd));	// 78325 jnz     short loc_326DD ;~ 2331:0DE8
cs=0x2331;eip=0x000dea; 	R(JMP(loc_327c0));	// 78326 jmp     loc_327C0 ;~ 2331:0DEA
loc_326dd:
	// 9449 
cs=0x2331;eip=0x000ded; 	X(PUSH(*(dw*)((&unk_56ff5))));	// 78330 push    word ptr unk_56FF5 ;~ 2331:0DED
cs=0x2331;eip=0x000df1; 	T(MOV(ax, 0x0F4E6));	// 78331 mov     ax, 0F4E6h ;~ 2331:0DF1
cs=0x2331;eip=0x000df4; 	X(PUSH(ax));	// 78332 push    ax ;~ 2331:0DF4
cs=0x2331;eip=0x000df5; 	T(MOV(ax, 5));	// 78333 mov     ax, 5 ;~ 2331:0DF5
cs=0x2331;eip=0x000df8; 	X(PUSH(ax));	// 78334 push    ax ;~ 2331:0DF8
cs=0x2331;eip=0x000df9; 	R(CALL(sub_33056,0));	// 78335 call    sub_33056 ;~ 2331:0DF9
cs=0x2331;eip=0x000dfc; 	X(PUSH(ax));	// 78336 push    ax ;~ 2331:0DFC
cs=0x2331;eip=0x000dfd; 	T(ax = bp+var_50);	// 78337 lea     ax, [bp+var_50] ;~ 2331:0DFD
cs=0x2331;eip=0x000e00; 	X(PUSH(ax));	// 78338 push    ax ;~ 2331:0E00
cs=0x2331;eip=0x000e01; 	R(CALLF(sub_2f1d9,0));	// 78339 call    sub_2F1D9 ;~ 2331:0E01
cs=0x2331;eip=0x000e06; 	T(ADD(sp, 8));	// 78340 add     sp, 8 ;~ 2331:0E06
cs=0x2331;eip=0x000e09; 	T(ax = bp+var_50);	// 78341 lea     ax, [bp+var_50] ;~ 2331:0E09
cs=0x2331;eip=0x000e0c; 	X(PUSH(ax));	// 78342 push    ax ;~ 2331:0E0C
cs=0x2331;eip=0x000e0d; 	T(MOV(ax, 0x20));	// 78343 mov     ax, 20h ; ' ' ;~ 2331:0E0D
cs=0x2331;eip=0x000e10; 	X(PUSH(ax));	// 78344 push    ax ;~ 2331:0E10
cs=0x2331;eip=0x000e11; 	T(MOV(ax, si));	// 78345 mov     ax, si ;~ 2331:0E11
cs=0x2331;eip=0x000e13; 	X(PUSH(ax));	// 78346 push    ax ;~ 2331:0E13
cs=0x2331;eip=0x000e14; 	R(CALLF(sub_2dce4,0));	// 78347 call    sub_2DCE4 ;~ 2331:0E14
cs=0x2331;eip=0x000e19; 	T(ADD(si, 6));	// 78348 add     si, 6 ;~ 2331:0E19
cs=0x2331;eip=0x000e1c; 	X(MOV(*(raddr(ss,bp+var_5d)), 0x2A));	// 78349 mov     [bp+var_5D], 2Ah ; '*' ;~ 2331:0E1C
cs=0x2331;eip=0x000e20; 	T(ax = bp+var_6c);	// 78350 lea     ax, [bp+var_6C] ;~ 2331:0E20
cs=0x2331;eip=0x000e23; 	X(PUSH(ax));	// 78351 push    ax ;~ 2331:0E23
cs=0x2331;eip=0x000e24; 	T(ax = bp+var_5e);	// 78352 lea     ax, [bp+var_5E] ;~ 2331:0E24
cs=0x2331;eip=0x000e27; 	X(PUSH(ax));	// 78353 push    ax ;~ 2331:0E27
cs=0x2331;eip=0x000e28; 	R(CALLF(sub_103e0,0));	// 78354 call    sub_103E0 ;~ 2331:0E28
cs=0x2331;eip=0x000e2d; 	T(ADD(sp, 4));	// 78355 add     sp, 4 ;~ 2331:0E2D
cs=0x2331;eip=0x000e30; 	X(PUSH(*(dw*)(raddr(ss,bp+var_68))));	// 78356 push    [bp+var_68] ;~ 2331:0E30
cs=0x2331;eip=0x000e33; 	T(MOV(al, *(raddr(ss,bp+var_65))));	// 78357 mov     al, [bp+var_65] ;~ 2331:0E33
cs=0x2331;eip=0x000e36; 	T(SUB(ah, ah));	// 78358 sub     ah, ah ;~ 2331:0E36
cs=0x2331;eip=0x000e38; 	T(ADD(ax, 5));	// 78359 add     ax, 5 ;~ 2331:0E38
cs=0x2331;eip=0x000e3b; 	X(PUSH(ax));	// 78360 push    ax ;~ 2331:0E3B
cs=0x2331;eip=0x000e3c; 	R(CALL(sub_33056,0));	// 78361 call    sub_33056 ;~ 2331:0E3C
cs=0x2331;eip=0x000e3f; 	X(PUSH(ax));	// 78362 push    ax ;~ 2331:0E3F
cs=0x2331;eip=0x000e40; 	T(MOV(al, *(raddr(ss,bp+var_66))));	// 78363 mov     al, [bp+var_66] ;~ 2331:0E40
cs=0x2331;eip=0x000e43; 	T(SUB(ah, ah));	// 78364 sub     ah, ah ;~ 2331:0E43
cs=0x2331;eip=0x000e45; 	X(PUSH(ax));	// 78365 push    ax ;~ 2331:0E45
cs=0x2331;eip=0x000e46; 	T(MOV(ax, 0x25CE));	// 78366 mov     ax, 25CEh ;~ 2331:0E46
cs=0x2331;eip=0x000e49; 	X(PUSH(ax));	// 78367 push    ax ;~ 2331:0E49
cs=0x2331;eip=0x000e4a; 	T(ax = bp+var_50);	// 78368 lea     ax, [bp+var_50] ;~ 2331:0E4A
cs=0x2331;eip=0x000e4d; 	X(PUSH(ax));	// 78369 push    ax ;~ 2331:0E4D
cs=0x2331;eip=0x000e4e; 	R(CALLF(sub_2f1d9,0));	// 78370 call    sub_2F1D9 ;~ 2331:0E4E
cs=0x2331;eip=0x000e53; 	T(ADD(sp, 0x0A));	// 78371 add     sp, 0Ah ;~ 2331:0E53
cs=0x2331;eip=0x000e56; 	T(ax = bp+var_50);	// 78372 lea     ax, [bp+var_50] ;~ 2331:0E56
cs=0x2331;eip=0x000e59; 	X(PUSH(ax));	// 78373 push    ax ;~ 2331:0E59
cs=0x2331;eip=0x000e5a; 	T(MOV(ax, 0x20));	// 78374 mov     ax, 20h ; ' ' ;~ 2331:0E5A
cs=0x2331;eip=0x000e5d; 	X(PUSH(ax));	// 78375 push    ax ;~ 2331:0E5D
cs=0x2331;eip=0x000e5e; 	X(PUSH(si));	// 78376 push    si ;~ 2331:0E5E
cs=0x2331;eip=0x000e5f; 	R(CALLF(sub_2dce4,0));	// 78377 call    sub_2DCE4 ;~ 2331:0E5F
cs=0x2331;eip=0x000e64; 	T(ADD(si, 6));	// 78378 add     si, 6 ;~ 2331:0E64
cs=0x2331;eip=0x000e67; 	T(CMP(unk_56eb3, 0));	// 78379 cmp     byte ptr unk_56EB3, 0 ;~ 2331:0E67
cs=0x2331;eip=0x000e6c; 	R(JZ(loc_32763));	// 78380 jz      short loc_32763 ;~ 2331:0E6C
cs=0x2331;eip=0x000e6e; 	T(MOV(ax, 0x0F503));	// 78381 mov     ax, 0F503h ;~ 2331:0E6E
cs=0x2331;eip=0x000e71; 	R(JMP(loc_3276a));	// 78382 jmp     short loc_3276A ;~ 2331:0E71
loc_32763:
	// 9450 
cs=0x2331;eip=0x000e73; 	T(MOV(ax, 0x78));	// 78386 mov     ax, 78h ; 'x' ;~ 2331:0E73
cs=0x2331;eip=0x000e76; 	X(PUSH(ax));	// 78387 push    ax ;~ 2331:0E76
cs=0x2331;eip=0x000e77; 	R(CALL(sub_33056,0));	// 78388 call    sub_33056 ;~ 2331:0E77
loc_3276a:
	// 9451 
cs=0x2331;eip=0x000e7a; 	X(PUSH(ax));	// 78391 push    ax ;~ 2331:0E7A
cs=0x2331;eip=0x000e7b; 	T(MOV(ax, 0x25EA));	// 78392 mov     ax, 25EAh ;~ 2331:0E7B
cs=0x2331;eip=0x000e7e; 	X(PUSH(ax));	// 78393 push    ax ;~ 2331:0E7E
cs=0x2331;eip=0x000e7f; 	T(ax = bp+var_50);	// 78394 lea     ax, [bp+var_50] ;~ 2331:0E7F
cs=0x2331;eip=0x000e82; 	X(PUSH(ax));	// 78395 push    ax ;~ 2331:0E82
cs=0x2331;eip=0x000e83; 	R(CALLF(sub_2f1d9,0));	// 78396 call    sub_2F1D9 ;~ 2331:0E83
cs=0x2331;eip=0x000e88; 	T(ADD(sp, 6));	// 78397 add     sp, 6 ;~ 2331:0E88
cs=0x2331;eip=0x000e8b; 	T(ax = bp+var_50);	// 78398 lea     ax, [bp+var_50] ;~ 2331:0E8B
cs=0x2331;eip=0x000e8e; 	X(PUSH(ax));	// 78399 push    ax ;~ 2331:0E8E
cs=0x2331;eip=0x000e8f; 	R(CALLF(sub_10496,0));	// 78400 call    sub_10496 ;~ 2331:0E8F
cs=0x2331;eip=0x000e94; 	T(ADD(sp, 2));	// 78401 add     sp, 2 ;~ 2331:0E94
cs=0x2331;eip=0x000e97; 	T(ax = bp+var_50);	// 78402 lea     ax, [bp+var_50] ;~ 2331:0E97
cs=0x2331;eip=0x000e9a; 	X(PUSH(ax));	// 78403 push    ax ;~ 2331:0E9A
cs=0x2331;eip=0x000e9b; 	T(MOV(ax, 0x20));	// 78404 mov     ax, 20h ; ' ' ;~ 2331:0E9B
cs=0x2331;eip=0x000e9e; 	X(PUSH(ax));	// 78405 push    ax ;~ 2331:0E9E
cs=0x2331;eip=0x000e9f; 	X(PUSH(si));	// 78406 push    si ;~ 2331:0E9F
cs=0x2331;eip=0x000ea0; 	R(CALLF(sub_2dce4,0));	// 78407 call    sub_2DCE4 ;~ 2331:0EA0
cs=0x2331;eip=0x000ea5; 	T(ADD(si, 0x0F));	// 78408 add     si, 0Fh ;~ 2331:0EA5
cs=0x2331;eip=0x000ea8; 	T(CMP(*(dw*)((&unk_5433c)), 0x0FFFF));	// 78409 cmp     word ptr unk_5433C, 0FFFFh ;~ 2331:0EA8
cs=0x2331;eip=0x000ead; 	R(JZ(loc_327c0));	// 78410 jz      short loc_327C0 ;~ 2331:0EAD
cs=0x2331;eip=0x000eaf; 	T(MOV(ax, 0x24E6));	// 78411 mov     ax, 24E6h ;~ 2331:0EAF
cs=0x2331;eip=0x000eb2; 	X(PUSH(ax));	// 78412 push    ax ;~ 2331:0EB2
cs=0x2331;eip=0x000eb3; 	T(SUB(ax, ax));	// 78413 sub     ax, ax ;~ 2331:0EB3
cs=0x2331;eip=0x000eb5; 	X(PUSH(ax));	// 78414 push    ax ;~ 2331:0EB5
cs=0x2331;eip=0x000eb6; 	X(PUSH(ax));	// 78415 push    ax ;~ 2331:0EB6
cs=0x2331;eip=0x000eb7; 	T(MOV(ax, 0x0ED08));	// 78416 mov     ax, 0ED08h ;~ 2331:0EB7
cs=0x2331;eip=0x000eba; 	X(PUSH(ax));	// 78417 push    ax ;~ 2331:0EBA
cs=0x2331;eip=0x000ebb; 	X(PUSH(*(dw*)((&unk_5433c))));	// 78418 push    word ptr unk_5433C ;~ 2331:0EBB
cs=0x2331;eip=0x000ebf; 	X(PUSH(*(dw*)((&unk_5433e))));	// 78419 push    word ptr unk_5433E ;~ 2331:0EBF
cs=0x2331;eip=0x000ec3; 	T(MOV(ax, 0x30));	// 78420 mov     ax, 30h ; '0' ;~ 2331:0EC3
cs=0x2331;eip=0x000ec6; 	X(PUSH(ax));	// 78421 push    ax ;~ 2331:0EC6
cs=0x2331;eip=0x000ec7; 	T(MOV(ax, 0x0E));	// 78422 mov     ax, 0Eh ;~ 2331:0EC7
cs=0x2331;eip=0x000eca; 	X(PUSH(ax));	// 78423 push    ax ;~ 2331:0ECA
cs=0x2331;eip=0x000ecb; 	R(CALLF(sub_2e88a,0));	// 78424 call    sub_2E88A ;~ 2331:0ECB
loc_327c0:
	// 9452 
cs=0x2331;eip=0x000ed0; 	T(MOV(ax, si));	// 78428 mov     ax, si ;~ 2331:0ED0
cs=0x2331;eip=0x000ed2; 	X(POP(si));	// 78429 pop     si ;~ 2331:0ED2
cs=0x2331;eip=0x000ed3; 	T(MOV(sp, bp));	// 78430 mov     sp, bp ;~ 2331:0ED3
cs=0x2331;eip=0x000ed5; 	X(POP(bp));	// 78431 pop     bp ;~ 2331:0ED5
cs=0x2331;eip=0x000ed6; 	R(RETN(2));	// 78432 retn    2 ;~ 2331:0ED6
sub_327c9:
	// 78440 
cs=0x2331;eip=0x000ed9; 	X(PUSH(bp));	// 78442 push    bp ;~ 2331:0ED9
cs=0x2331;eip=0x000eda; 	T(MOV(bp, sp));	// 78443 mov     bp, sp ;~ 2331:0EDA
cs=0x2331;eip=0x000edc; 	T(SUB(sp, 2));	// 78444 sub     sp, 2 ;~ 2331:0EDC
cs=0x2331;eip=0x000edf; 	X(PUSH(si));	// 78445 push    si ;~ 2331:0EDF
cs=0x2331;eip=0x000ee0; 	T(SUB(si, si));	// 78446 sub     si, si ;~ 2331:0EE0
loc_327d2:
	// 9453 
cs=0x2331;eip=0x000ee2; 	X(PUSH(si));	// 78449 push    si ;~ 2331:0EE2
cs=0x2331;eip=0x000ee3; 	R(CALL(sub_327e8,0));	// 78450 call    sub_327E8 ;~ 2331:0EE3
cs=0x2331;eip=0x000ee6; 	T(INC(si));	// 78451 inc     si ;~ 2331:0EE6
cs=0x2331;eip=0x000ee7; 	T(CMP(si, 4));	// 78452 cmp     si, 4 ;~ 2331:0EE7
cs=0x2331;eip=0x000eea; 	R(JL(loc_327d2));	// 78453 jl      short loc_327D2 ;~ 2331:0EEA
cs=0x2331;eip=0x000eec; 	X(PUSH(*(dw*)((&unk_47ab2))));	// 78454 push    word ptr unk_47AB2 ;~ 2331:0EEC
cs=0x2331;eip=0x000ef0; 	R(CALL(sub_327e8,0));	// 78455 call    sub_327E8 ;~ 2331:0EF0
cs=0x2331;eip=0x000ef3; 	X(POP(si));	// 78456 pop     si ;~ 2331:0EF3
cs=0x2331;eip=0x000ef4; 	T(MOV(sp, bp));	// 78457 mov     sp, bp ;~ 2331:0EF4
cs=0x2331;eip=0x000ef6; 	X(POP(bp));	// 78458 pop     bp ;~ 2331:0EF6
cs=0x2331;eip=0x000ef7; 	R(RETN(0));	// 78459 retn ;~ 2331:0EF7
sub_327e8:
	// 78467 
#undef var_8
#define var_8 -8
	// 78470 var_8           = word ptr -8 ;~ 2331:0EF8
#undef var_4
#define var_4 -4
	// 78471 var_4           = word ptr -4 ;~ 2331:0EF8
#undef var_2
#define var_2 -2
	// 78472 var_2           = word ptr -2 ;~ 2331:0EF8
#undef arg_0
#define arg_0 4
	// 78473 arg_0           = word ptr  4 ;~ 2331:0EF8
cs=0x2331;eip=0x000ef8; 	X(PUSH(bp));	// 78475 push    bp ;~ 2331:0EF8
cs=0x2331;eip=0x000ef9; 	T(MOV(bp, sp));	// 78476 mov     bp, sp ;~ 2331:0EF9
cs=0x2331;eip=0x000efb; 	T(SUB(sp, 8));	// 78477 sub     sp, 8 ;~ 2331:0EFB
cs=0x2331;eip=0x000efe; 	X(PUSH(si));	// 78478 push    si ;~ 2331:0EFE
cs=0x2331;eip=0x000eff; 	T(CMP(*(dw*)((&byte_47b2e)), 0));	// 78479 cmp     word ptr byte_47B2E, 0 ;~ 2331:0EFF
cs=0x2331;eip=0x000f04; 	R(JNZ(loc_327fb));	// 78480 jnz     short loc_327FB ;~ 2331:0F04
cs=0x2331;eip=0x000f06; 	T(MOV(ax, 0x0FF0D));	// 78481 mov     ax, 0FF0Dh ;~ 2331:0F06
cs=0x2331;eip=0x000f09; 	R(JMP(loc_327fe));	// 78482 jmp     short loc_327FE ;~ 2331:0F09
loc_327fb:
	// 9454 
cs=0x2331;eip=0x000f0b; 	T(MOV(ax, 0x0FF02));	// 78486 mov     ax, 0FF02h ;~ 2331:0F0B
loc_327fe:
	// 9455 
cs=0x2331;eip=0x000f0e; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 78489 mov     [bp+var_8], ax ;~ 2331:0F0E
cs=0x2331;eip=0x000f11; 	T(MOV(ax, 0x31));	// 78490 mov     ax, 31h ; '1' ;~ 2331:0F11
cs=0x2331;eip=0x000f14; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 78491 imul    [bp+arg_0] ;~ 2331:0F14
cs=0x2331;eip=0x000f17; 	T(MOV(si, ax));	// 78492 mov     si, ax ;~ 2331:0F17
cs=0x2331;eip=0x000f19; 	T(ADD(si, 0x20));	// 78493 add     si, 20h ; ' ' ;~ 2331:0F19
cs=0x2331;eip=0x000f1c; 	R(CALL(sub_3318a,0));	// 78494 call    sub_3318A ;~ 2331:0F1C
cs=0x2331;eip=0x000f1f; 	T(MOV(ax, *(dw*)((&unk_47ab2))));	// 78495 mov     ax, word ptr unk_47AB2 ;~ 2331:0F1F
cs=0x2331;eip=0x000f22; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 78496 cmp     [bp+arg_0], ax ;~ 2331:0F22
cs=0x2331;eip=0x000f25; 	R(JNZ(loc_3281e));	// 78497 jnz     short loc_3281E ;~ 2331:0F25
cs=0x2331;eip=0x000f27; 	T(MOV(al, *(db*)(raddr(ss,bp+var_8))));	// 78498 mov     al, byte ptr [bp+var_8] ;~ 2331:0F27
cs=0x2331;eip=0x000f2a; 	T(SUB(ah, ah));	// 78499 sub     ah, ah ;~ 2331:0F2A
cs=0x2331;eip=0x000f2c; 	R(JMP(loc_32820));	// 78500 jmp     short loc_32820 ;~ 2331:0F2C
loc_3281e:
	// 9456 
cs=0x2331;eip=0x000f2e; 	T(SUB(ax, ax));	// 78504 sub     ax, ax ;~ 2331:0F2E
loc_32820:
	// 9457 
cs=0x2331;eip=0x000f30; 	T(OR(ah, 0x0FF));	// 78507 or      ah, 0FFh ;~ 2331:0F30
cs=0x2331;eip=0x000f33; 	X(MOV(*(dw*)((&unk_47bde)), ax));	// 78508 mov     word ptr unk_47BDE, ax ;~ 2331:0F33
cs=0x2331;eip=0x000f36; 	X(MOV(unk_56885, 0));	// 78509 mov     byte ptr unk_56885, 0 ;~ 2331:0F36
cs=0x2331;eip=0x000f3b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 78510 mov     ax, [bp+arg_0] ;~ 2331:0F3B
cs=0x2331;eip=0x000f3e; 	T(ADD(ax, 0x1D));	// 78511 add     ax, 1Dh ;~ 2331:0F3E
cs=0x2331;eip=0x000f41; 	X(PUSH(ax));	// 78512 push    ax ;~ 2331:0F41
cs=0x2331;eip=0x000f42; 	R(CALL(sub_33056,0));	// 78513 call    sub_33056 ;~ 2331:0F42
cs=0x2331;eip=0x000f45; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 78514 mov     [bp+var_2], ax ;~ 2331:0F45
cs=0x2331;eip=0x000f48; 	X(PUSH(ax));	// 78515 push    ax ;~ 2331:0F48
cs=0x2331;eip=0x000f49; 	R(CALLF(sub_2dcb2,0));	// 78516 call    sub_2DCB2 ;~ 2331:0F49
cs=0x2331;eip=0x000f4e; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 78517 mov     [bp+var_4], ax ;~ 2331:0F4E
cs=0x2331;eip=0x000f51; 	T(MOV(ax, 0x30));	// 78518 mov     ax, 30h ; '0' ;~ 2331:0F51
cs=0x2331;eip=0x000f54; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_4))));	// 78519 sub     ax, [bp+var_4] ;~ 2331:0F54
cs=0x2331;eip=0x000f57; 	T(SAR(ax, 1));	// 78520 sar     ax, 1 ;~ 2331:0F57
cs=0x2331;eip=0x000f59; 	T(ADD(si, ax));	// 78521 add     si, ax ;~ 2331:0F59
cs=0x2331;eip=0x000f5b; 	X(PUSH(si));	// 78522 push    si ;~ 2331:0F5B
cs=0x2331;eip=0x000f5c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 78523 mov     ax, [bp+var_4] ;~ 2331:0F5C
cs=0x2331;eip=0x000f5f; 	T(ADD(ax, si));	// 78524 add     ax, si ;~ 2331:0F5F
cs=0x2331;eip=0x000f61; 	T(DEC(ax));	// 78525 dec     ax ;~ 2331:0F61
cs=0x2331;eip=0x000f62; 	X(PUSH(ax));	// 78526 push    ax ;~ 2331:0F62
cs=0x2331;eip=0x000f63; 	T(MOV(ax, *(dw*)((&unk_5433a))));	// 78527 mov     ax, word ptr unk_5433A ;~ 2331:0F63
cs=0x2331;eip=0x000f66; 	T(ADD(ax, 0x2F));	// 78528 add     ax, 2Fh ; '/' ;~ 2331:0F66
cs=0x2331;eip=0x000f69; 	X(PUSH(ax));	// 78529 push    ax ;~ 2331:0F69
cs=0x2331;eip=0x000f6a; 	T(MOV(ax, *(dw*)((&unk_47ab2))));	// 78530 mov     ax, word ptr unk_47AB2 ;~ 2331:0F6A
cs=0x2331;eip=0x000f6d; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 78531 cmp     [bp+arg_0], ax ;~ 2331:0F6D
cs=0x2331;eip=0x000f70; 	R(JNZ(loc_32867));	// 78532 jnz     short loc_32867 ;~ 2331:0F70
cs=0x2331;eip=0x000f72; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 78533 mov     ax, [bp+var_8] ;~ 2331:0F72
cs=0x2331;eip=0x000f75; 	R(JMP(loc_3286a));	// 78534 jmp     short loc_3286A ;~ 2331:0F75
loc_32867:
	// 9458 
cs=0x2331;eip=0x000f77; 	T(MOV(ax, 0x0FF0F));	// 78538 mov     ax, 0FF0Fh ;~ 2331:0F77
loc_3286a:
	// 9459 
cs=0x2331;eip=0x000f7a; 	X(PUSH(ax));	// 78541 push    ax ;~ 2331:0F7A
cs=0x2331;eip=0x000f7b; 	R(CALLF(sub_203c2,0));	// 78542 call    sub_203C2 ;~ 2331:0F7B
cs=0x2331;eip=0x000f80; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 78543 push    [bp+var_2] ;~ 2331:0F80
cs=0x2331;eip=0x000f83; 	X(PUSH(si));	// 78544 push    si ;~ 2331:0F83
cs=0x2331;eip=0x000f84; 	T(MOV(ax, *(dw*)((&unk_5433a))));	// 78545 mov     ax, word ptr unk_5433A ;~ 2331:0F84
cs=0x2331;eip=0x000f87; 	T(ADD(ax, 0x27));	// 78546 add     ax, 27h ; ''' ;~ 2331:0F87
cs=0x2331;eip=0x000f8a; 	X(PUSH(ax));	// 78547 push    ax ;~ 2331:0F8A
cs=0x2331;eip=0x000f8b; 	R(CALLF(sub_2dce4,0));	// 78548 call    sub_2DCE4 ;~ 2331:0F8B
cs=0x2331;eip=0x000f90; 	X(POP(si));	// 78549 pop     si ;~ 2331:0F90
cs=0x2331;eip=0x000f91; 	T(MOV(sp, bp));	// 78550 mov     sp, bp ;~ 2331:0F91
cs=0x2331;eip=0x000f93; 	X(POP(bp));	// 78551 pop     bp ;~ 2331:0F93
cs=0x2331;eip=0x000f94; 	R(RETN(2));	// 78552 retn    2 ;~ 2331:0F94
sub_32887:
	// 78560 
cs=0x2331;eip=0x000f97; 	X(PUSH(bp));	// 78562 push    bp ;~ 2331:0F97
cs=0x2331;eip=0x000f98; 	T(MOV(bp, sp));	// 78563 mov     bp, sp ;~ 2331:0F98
cs=0x2331;eip=0x000f9a; 	T(SUB(sp, 2));	// 78564 sub     sp, 2 ;~ 2331:0F9A
cs=0x2331;eip=0x000f9d; 	X(PUSH(di));	// 78565 push    di ;~ 2331:0F9D
cs=0x2331;eip=0x000f9e; 	X(PUSH(si));	// 78566 push    si ;~ 2331:0F9E
cs=0x2331;eip=0x000f9f; 	T(MOV(si, *(dw*)((&unk_47ab2))));	// 78567 mov     si, word ptr unk_47AB2 ;~ 2331:0F9F
cs=0x2331;eip=0x000fa3; 	T(MOV(di, si));	// 78568 mov     di, si ;~ 2331:0FA3
loc_32895:
	// 9460 
cs=0x2331;eip=0x000fa5; 	T(INC(di));	// 78571 inc     di ;~ 2331:0FA5
cs=0x2331;eip=0x000fa6; 	T(CMP(di, 4));	// 78572 cmp     di, 4 ;~ 2331:0FA6
cs=0x2331;eip=0x000fa9; 	R(JL(loc_3289d));	// 78573 jl      short loc_3289D ;~ 2331:0FA9
cs=0x2331;eip=0x000fab; 	T(SUB(di, di));	// 78574 sub     di, di ;~ 2331:0FAB
loc_3289d:
	// 9461 
cs=0x2331;eip=0x000fad; 	T(CMP(*(raddr(ds,di-0x952)), 0));	// 78577 cmp     byte ptr [di-952h], 0 ;~ 2331:0FAD
cs=0x2331;eip=0x000fb2; 	R(JZ(loc_32895));	// 78578 jz      short loc_32895 ;~ 2331:0FB2
cs=0x2331;eip=0x000fb4; 	X(MOV(*(dw*)((&unk_47ab2)), di));	// 78579 mov     word ptr unk_47AB2, di ;~ 2331:0FB4
cs=0x2331;eip=0x000fb8; 	T(CMP(di, si));	// 78580 cmp     di, si ;~ 2331:0FB8
cs=0x2331;eip=0x000fba; 	R(JZ(loc_328b1));	// 78581 jz      short loc_328B1 ;~ 2331:0FBA
cs=0x2331;eip=0x000fbc; 	R(CALLF(sub_35067,0));	// 78582 call    sub_35067 ;~ 2331:0FBC
loc_328b1:
	// 9462 
cs=0x2331;eip=0x000fc1; 	X(POP(si));	// 78585 pop     si ;~ 2331:0FC1
cs=0x2331;eip=0x000fc2; 	X(POP(di));	// 78586 pop     di ;~ 2331:0FC2
cs=0x2331;eip=0x000fc3; 	T(MOV(sp, bp));	// 78587 mov     sp, bp ;~ 2331:0FC3
cs=0x2331;eip=0x000fc5; 	X(POP(bp));	// 78588 pop     bp ;~ 2331:0FC5
cs=0x2331;eip=0x000fc6; 	R(RETN(0));	// 78589 retn ;~ 2331:0FC6
sub_328b7:
	// 78597 
cs=0x2331;eip=0x000fc7; 	X(PUSH(bp));	// 78598 push    bp ;~ 2331:0FC7
cs=0x2331;eip=0x000fc8; 	T(MOV(bp, sp));	// 78599 mov     bp, sp ;~ 2331:0FC8
cs=0x2331;eip=0x000fca; 	T(SUB(sp, 2));	// 78600 sub     sp, 2 ;~ 2331:0FCA
cs=0x2331;eip=0x000fcd; 	X(PUSH(di));	// 78601 push    di ;~ 2331:0FCD
cs=0x2331;eip=0x000fce; 	X(PUSH(si));	// 78602 push    si ;~ 2331:0FCE
cs=0x2331;eip=0x000fcf; 	T(MOV(si, *(dw*)((&unk_47ab2))));	// 78603 mov     si, word ptr unk_47AB2 ;~ 2331:0FCF
cs=0x2331;eip=0x000fd3; 	T(MOV(di, si));	// 78604 mov     di, si ;~ 2331:0FD3
loc_328c5:
	// 9463 
cs=0x2331;eip=0x000fd5; 	T(DEC(di));	// 78607 dec     di ;~ 2331:0FD5
cs=0x2331;eip=0x000fd6; 	R(JNS(loc_328cb));	// 78608 jns     short loc_328CB ;~ 2331:0FD6
cs=0x2331;eip=0x000fd8; 	T(MOV(di, 3));	// 78609 mov     di, 3 ;~ 2331:0FD8
loc_328cb:
	// 9464 
cs=0x2331;eip=0x000fdb; 	T(CMP(*(raddr(ds,di-0x952)), 0));	// 78612 cmp     byte ptr [di-952h], 0 ;~ 2331:0FDB
cs=0x2331;eip=0x000fe0; 	R(JZ(loc_328c5));	// 78613 jz      short loc_328C5 ;~ 2331:0FE0
cs=0x2331;eip=0x000fe2; 	X(MOV(*(dw*)((&unk_47ab2)), di));	// 78614 mov     word ptr unk_47AB2, di ;~ 2331:0FE2
cs=0x2331;eip=0x000fe6; 	T(CMP(di, si));	// 78615 cmp     di, si ;~ 2331:0FE6
cs=0x2331;eip=0x000fe8; 	R(JZ(loc_328df));	// 78616 jz      short loc_328DF ;~ 2331:0FE8
cs=0x2331;eip=0x000fea; 	R(CALLF(sub_35067,0));	// 78617 call    sub_35067 ;~ 2331:0FEA
loc_328df:
	// 9465 
cs=0x2331;eip=0x000fef; 	X(POP(si));	// 78620 pop     si ;~ 2331:0FEF
cs=0x2331;eip=0x000ff0; 	X(POP(di));	// 78621 pop     di ;~ 2331:0FF0
cs=0x2331;eip=0x000ff1; 	T(MOV(sp, bp));	// 78622 mov     sp, bp ;~ 2331:0FF1
cs=0x2331;eip=0x000ff3; 	X(POP(bp));	// 78623 pop     bp ;~ 2331:0FF3
cs=0x2331;eip=0x000ff4; 	R(RETN(0));	// 78624 retn ;~ 2331:0FF4
sub_328e5:
	// 78632 
#undef var_1c
#define var_1c -0x1C
	// 78634 var_1C          = byte ptr -1Ch ;~ 2331:0FF5
#undef var_8
#define var_8 -8
	// 78635 var_8           = byte ptr -8 ;~ 2331:0FF5
#undef var_4
#define var_4 -4
	// 78636 var_4           = word ptr -4 ;~ 2331:0FF5
#undef var_2
#define var_2 -2
	// 78637 var_2           = word ptr -2 ;~ 2331:0FF5
cs=0x2331;eip=0x000ff5; 	X(PUSH(bp));	// 78639 push    bp ;~ 2331:0FF5
cs=0x2331;eip=0x000ff6; 	T(MOV(bp, sp));	// 78640 mov     bp, sp ;~ 2331:0FF6
cs=0x2331;eip=0x000ff8; 	T(SUB(sp, 0x1E));	// 78641 sub     sp, 1Eh ;~ 2331:0FF8
cs=0x2331;eip=0x000ffb; 	X(PUSH(di));	// 78642 push    di ;~ 2331:0FFB
cs=0x2331;eip=0x000ffc; 	X(PUSH(si));	// 78643 push    si ;~ 2331:0FFC
cs=0x2331;eip=0x000ffd; 	T(MOV(si, 0x19));	// 78644 mov     si, 19h ;~ 2331:0FFD
cs=0x2331;eip=0x001000; 	X(MOV(*(raddr(ss,bp+var_8)), 1));	// 78645 mov     [bp+var_8], 1 ;~ 2331:1000
loc_328f4:
	// 9466 
cs=0x2331;eip=0x001004; 	T(MOV(ax, *(dw*)((&unk_54330))));	// 78649 mov     ax, word ptr unk_54330 ;~ 2331:1004
cs=0x2331;eip=0x001007; 	T(MOV(dx, *(dw*)((&unk_54332))));	// 78650 mov     dx, word ptr unk_54332 ;~ 2331:1007
cs=0x2331;eip=0x00100b; 	T(MOV(cl, 8));	// 78651 mov     cl, 8 ;~ 2331:100B
cs=0x2331;eip=0x00100d; 	R(CALLF(sub_10240,0));	// 78652 call    sub_10240 ;~ 2331:100D
cs=0x2331;eip=0x001012; 	X(PUSH(dx));	// 78653 push    dx ;~ 2331:1012
cs=0x2331;eip=0x001013; 	X(PUSH(ax));	// 78654 push    ax ;~ 2331:1013
cs=0x2331;eip=0x001014; 	X(PUSH(si));	// 78655 push    si ;~ 2331:1014
cs=0x2331;eip=0x001015; 	T(CMP(*(raddr(ss,bp+var_8)), 0));	// 78656 cmp     [bp+var_8], 0 ;~ 2331:1015
cs=0x2331;eip=0x001019; 	R(JZ(loc_32910));	// 78657 jz      short loc_32910 ;~ 2331:1019
cs=0x2331;eip=0x00101b; 	T(MOV(ax, 0x14A0));	// 78658 mov     ax, 14A0h ;~ 2331:101B
cs=0x2331;eip=0x00101e; 	R(JMP(loc_32913));	// 78659 jmp     short loc_32913 ;~ 2331:101E
loc_32910:
	// 9467 
cs=0x2331;eip=0x001020; 	T(MOV(ax, 1));	// 78663 mov     ax, 1 ;~ 2331:1020
loc_32913:
	// 9468 
cs=0x2331;eip=0x001023; 	X(PUSH(ax));	// 78666 push    ax ;~ 2331:1023
cs=0x2331;eip=0x001024; 	R(CALLF(sub_2f002,0));	// 78667 call    sub_2F002 ;~ 2331:1024
cs=0x2331;eip=0x001029; 	T(MOV(dh, dl));	// 78668 mov     dh, dl ;~ 2331:1029
cs=0x2331;eip=0x00102b; 	T(MOV(dl, ah));	// 78669 mov     dl, ah ;~ 2331:102B
cs=0x2331;eip=0x00102d; 	T(MOV(ah, al));	// 78670 mov     ah, al ;~ 2331:102D
cs=0x2331;eip=0x00102f; 	T(SUB(al, al));	// 78671 sub     al, al ;~ 2331:102F
cs=0x2331;eip=0x001031; 	X(PUSH(dx));	// 78672 push    dx ;~ 2331:1031
cs=0x2331;eip=0x001032; 	X(PUSH(ax));	// 78673 push    ax ;~ 2331:1032
cs=0x2331;eip=0x001033; 	R(CALLF(sub_10526,0));	// 78674 call    sub_10526 ;~ 2331:1033
cs=0x2331;eip=0x001038; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 78675 mov     [bp+var_4], ax ;~ 2331:1038
cs=0x2331;eip=0x00103b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 78676 mov     [bp+var_2], dx ;~ 2331:103B
cs=0x2331;eip=0x00103e; 	T(OR(dx, dx));	// 78677 or      dx, dx ;~ 2331:103E
cs=0x2331;eip=0x001040; 	R(JG(loc_3293d));	// 78678 jg      short loc_3293D ;~ 2331:1040
cs=0x2331;eip=0x001042; 	R(JL(loc_32939));	// 78679 jl      short loc_32939 ;~ 2331:1042
cs=0x2331;eip=0x001044; 	T(CMP(ax, 0x28));	// 78680 cmp     ax, 28h ; '(' ;~ 2331:1044
cs=0x2331;eip=0x001047; 	R(JNC(loc_3293d));	// 78681 jnb     short loc_3293D ;~ 2331:1047
loc_32939:
	// 9469 
cs=0x2331;eip=0x001049; 	T(SHL(si, 1));	// 78684 shl     si, 1 ;~ 2331:1049
cs=0x2331;eip=0x00104b; 	R(JMP(loc_328f4));	// 78685 jmp     short loc_328F4 ;~ 2331:104B
loc_3293d:
	// 9470 
cs=0x2331;eip=0x00104d; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0));	// 78690 cmp     [bp+var_2], 0 ;~ 2331:104D
cs=0x2331;eip=0x001051; 	R(JL(loc_32960));	// 78691 jl      short loc_32960 ;~ 2331:1051
cs=0x2331;eip=0x001053; 	R(JG(loc_3294b));	// 78692 jg      short loc_3294B ;~ 2331:1053
cs=0x2331;eip=0x001055; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0x7F));	// 78693 cmp     [bp+var_4], 7Fh ;~ 2331:1055
cs=0x2331;eip=0x001059; 	R(JBE(loc_32960));	// 78694 jbe     short loc_32960 ;~ 2331:1059
loc_3294b:
	// 9471 
cs=0x2331;eip=0x00105b; 	T(SAR(si, 1));	// 78697 sar     si, 1 ;~ 2331:105B
cs=0x2331;eip=0x00105d; 	T(OR(si, si));	// 78698 or      si, si ;~ 2331:105D
cs=0x2331;eip=0x00105f; 	R(JNZ(loc_328f4));	// 78699 jnz     short loc_328F4 ;~ 2331:105F
cs=0x2331;eip=0x001061; 	T(CMP(*(raddr(ss,bp+var_8)), 0));	// 78700 cmp     [bp+var_8], 0 ;~ 2331:1061
cs=0x2331;eip=0x001065; 	R(JZ(loc_32960));	// 78701 jz      short loc_32960 ;~ 2331:1065
cs=0x2331;eip=0x001067; 	X(MOV(*(raddr(ss,bp+var_8)), 0));	// 78702 mov     [bp+var_8], 0 ;~ 2331:1067
cs=0x2331;eip=0x00106b; 	T(MOV(si, 0x0FA0));	// 78703 mov     si, 0FA0h ;~ 2331:106B
cs=0x2331;eip=0x00106e; 	R(JMP(loc_328f4));	// 78704 jmp     short loc_328F4 ;~ 2331:106E
loc_32960:
	// 9472 
cs=0x2331;eip=0x001070; 	T(MOV(ax, 0x0DF));	// 78709 mov     ax, 0DFh ; 'ﬂ' ;~ 2331:1070
cs=0x2331;eip=0x001073; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_4))));	// 78710 sub     ax, [bp+var_4] ;~ 2331:1073
cs=0x2331;eip=0x001076; 	T(MOV(di, ax));	// 78711 mov     di, ax ;~ 2331:1076
cs=0x2331;eip=0x001078; 	X(PUSH(di));	// 78712 push    di ;~ 2331:1078
cs=0x2331;eip=0x001079; 	T(MOV(ax, 0x0DF));	// 78713 mov     ax, 0DFh ; 'ﬂ' ;~ 2331:1079
cs=0x2331;eip=0x00107c; 	X(PUSH(ax));	// 78714 push    ax ;~ 2331:107C
cs=0x2331;eip=0x00107d; 	T(MOV(ax, 0x18));	// 78715 mov     ax, 18h ;~ 2331:107D
cs=0x2331;eip=0x001080; 	X(PUSH(ax));	// 78716 push    ax ;~ 2331:1080
cs=0x2331;eip=0x001081; 	T(MOV(ax, 0x0FF00));	// 78717 mov     ax, 0FF00h ;~ 2331:1081
cs=0x2331;eip=0x001084; 	X(PUSH(ax));	// 78718 push    ax ;~ 2331:1084
cs=0x2331;eip=0x001085; 	R(CALLF(sub_203c2,0));	// 78719 call    sub_203C2 ;~ 2331:1085
cs=0x2331;eip=0x00108a; 	X(PUSH(di));	// 78720 push    di ;~ 2331:108A
cs=0x2331;eip=0x00108b; 	T(MOV(ax, 0x17));	// 78721 mov     ax, 17h ;~ 2331:108B
cs=0x2331;eip=0x00108e; 	X(PUSH(ax));	// 78722 push    ax ;~ 2331:108E
cs=0x2331;eip=0x00108f; 	T(MOV(ax, 0x0FF00));	// 78723 mov     ax, 0FF00h ;~ 2331:108F
cs=0x2331;eip=0x001092; 	X(PUSH(ax));	// 78724 push    ax ;~ 2331:1092
cs=0x2331;eip=0x001093; 	R(CALLF(sub_22ab7,0));	// 78725 call    sub_22AB7 ;~ 2331:1093
cs=0x2331;eip=0x001098; 	T(MOV(ax, 0x0DF));	// 78726 mov     ax, 0DFh ; 'ﬂ' ;~ 2331:1098
cs=0x2331;eip=0x00109b; 	X(PUSH(ax));	// 78727 push    ax ;~ 2331:109B
cs=0x2331;eip=0x00109c; 	T(MOV(ax, 0x17));	// 78728 mov     ax, 17h ;~ 2331:109C
cs=0x2331;eip=0x00109f; 	X(PUSH(ax));	// 78729 push    ax ;~ 2331:109F
cs=0x2331;eip=0x0010a0; 	T(MOV(ax, 0x0FF00));	// 78730 mov     ax, 0FF00h ;~ 2331:10A0
cs=0x2331;eip=0x0010a3; 	X(PUSH(ax));	// 78731 push    ax ;~ 2331:10A3
cs=0x2331;eip=0x0010a4; 	R(CALLF(sub_22ab7,0));	// 78732 call    sub_22AB7 ;~ 2331:10A4
cs=0x2331;eip=0x0010a9; 	X(MOV(*(dw*)((&unk_47bde)), 0x0FF00));	// 78733 mov     word ptr unk_47BDE, 0FF00h ;~ 2331:10A9
cs=0x2331;eip=0x0010af; 	X(MOV(unk_56885, 0));	// 78734 mov     byte ptr unk_56885, 0 ;~ 2331:10AF
cs=0x2331;eip=0x0010b4; 	R(CALL(sub_3317c,0));	// 78735 call    sub_3317C ;~ 2331:10B4
cs=0x2331;eip=0x0010b7; 	T(MOV(ax, 0x25FB));	// 78736 mov     ax, 25FBh ;~ 2331:10B7
cs=0x2331;eip=0x0010ba; 	X(PUSH(ax));	// 78737 push    ax ;~ 2331:10BA
cs=0x2331;eip=0x0010bb; 	X(PUSH(di));	// 78738 push    di ;~ 2331:10BB
cs=0x2331;eip=0x0010bc; 	T(MOV(ax, 0x11));	// 78739 mov     ax, 11h ;~ 2331:10BC
cs=0x2331;eip=0x0010bf; 	X(PUSH(ax));	// 78740 push    ax ;~ 2331:10BF
cs=0x2331;eip=0x0010c0; 	R(CALLF(sub_2dce4,0));	// 78741 call    sub_2DCE4 ;~ 2331:10C0
cs=0x2331;eip=0x0010c5; 	X(PUSH(si));	// 78742 push    si ;~ 2331:10C5
cs=0x2331;eip=0x0010c6; 	T(ax = bp+var_1c);	// 78743 lea     ax, [bp+var_1C] ;~ 2331:10C6
cs=0x2331;eip=0x0010c9; 	X(PUSH(ax));	// 78744 push    ax ;~ 2331:10C9
cs=0x2331;eip=0x0010ca; 	R(CALLF(sub_312c7,0));	// 78745 call    sub_312C7 ;~ 2331:10CA
cs=0x2331;eip=0x0010cf; 	T(ax = bp+var_1c);	// 78746 lea     ax, [bp+var_1C] ;~ 2331:10CF
cs=0x2331;eip=0x0010d2; 	X(PUSH(ax));	// 78747 push    ax ;~ 2331:10D2
cs=0x2331;eip=0x0010d3; 	T(ax = bp+var_1c);	// 78748 lea     ax, [bp+var_1C] ;~ 2331:10D3
cs=0x2331;eip=0x0010d6; 	X(PUSH(ax));	// 78749 push    ax ;~ 2331:10D6
cs=0x2331;eip=0x0010d7; 	R(CALLF(sub_2dcb2,0));	// 78750 call    sub_2DCB2 ;~ 2331:10D7
cs=0x2331;eip=0x0010dc; 	T(SUB(ax, 0x0E1));	// 78751 sub     ax, 0E1h ; '·' ;~ 2331:10DC
cs=0x2331;eip=0x0010df; 	T(NEG(ax));	// 78752 neg     ax ;~ 2331:10DF
cs=0x2331;eip=0x0010e1; 	X(PUSH(ax));	// 78753 push    ax ;~ 2331:10E1
cs=0x2331;eip=0x0010e2; 	T(MOV(ax, 0x11));	// 78754 mov     ax, 11h ;~ 2331:10E2
cs=0x2331;eip=0x0010e5; 	X(PUSH(ax));	// 78755 push    ax ;~ 2331:10E5
cs=0x2331;eip=0x0010e6; 	R(CALLF(sub_2dce4,0));	// 78756 call    sub_2DCE4 ;~ 2331:10E6
cs=0x2331;eip=0x0010eb; 	T(MOV(ax, 0x11));	// 78757 mov     ax, 11h ;~ 2331:10EB
cs=0x2331;eip=0x0010ee; 	X(PUSH(ax));	// 78758 push    ax ;~ 2331:10EE
cs=0x2331;eip=0x0010ef; 	T(MOV(ax, 0x0DF));	// 78759 mov     ax, 0DFh ; 'ﬂ' ;~ 2331:10EF
cs=0x2331;eip=0x0010f2; 	X(PUSH(ax));	// 78760 push    ax ;~ 2331:10F2
cs=0x2331;eip=0x0010f3; 	X(PUSH(di));	// 78761 push    di ;~ 2331:10F3
cs=0x2331;eip=0x0010f4; 	T(CMP(*(raddr(ss,bp+var_8)), 0));	// 78762 cmp     [bp+var_8], 0 ;~ 2331:10F4
cs=0x2331;eip=0x0010f8; 	R(JZ(loc_329ef));	// 78763 jz      short loc_329EF ;~ 2331:10F8
cs=0x2331;eip=0x0010fa; 	T(MOV(ax, 0x25FD));	// 78764 mov     ax, 25FDh ;~ 2331:10FA
cs=0x2331;eip=0x0010fd; 	R(JMP(loc_329f2));	// 78765 jmp     short loc_329F2 ;~ 2331:10FD
loc_329ef:
	// 9473 
cs=0x2331;eip=0x0010ff; 	T(MOV(ax, 0x2603));	// 78769 mov     ax, 2603h ;~ 2331:10FF
loc_329f2:
	// 9474 
cs=0x2331;eip=0x001102; 	X(PUSH(ax));	// 78772 push    ax ;~ 2331:1102
cs=0x2331;eip=0x001103; 	R(CALLF(sub_30ffa,0));	// 78773 call    sub_30FFA ;~ 2331:1103
cs=0x2331;eip=0x001108; 	T(ADD(sp, 8));	// 78774 add     sp, 8 ;~ 2331:1108
cs=0x2331;eip=0x00110b; 	X(POP(si));	// 78775 pop     si ;~ 2331:110B
cs=0x2331;eip=0x00110c; 	X(POP(di));	// 78776 pop     di ;~ 2331:110C
cs=0x2331;eip=0x00110d; 	T(MOV(sp, bp));	// 78777 mov     sp, bp ;~ 2331:110D
cs=0x2331;eip=0x00110f; 	X(POP(bp));	// 78778 pop     bp ;~ 2331:110F
cs=0x2331;eip=0x001110; 	R(RETN(0));	// 78779 retn ;~ 2331:1110
sub_32a01:
	// 78787 
#undef var_f0
#define var_f0 -0x0F0
	// 78789 var_F0          = word ptr -0F0h ;~ 2331:1111
#undef var_ee
#define var_ee -0x0EE
	// 78790 var_EE          = word ptr -0EEh ;~ 2331:1111
#undef var_ec
#define var_ec -0x0EC
	// 78791 var_EC          = word ptr -0ECh ;~ 2331:1111
#undef var_de
#define var_de -0x0DE
	// 78792 var_DE          = byte ptr -0DEh ;~ 2331:1111
#undef var_84
#define var_84 -0x84
	// 78793 var_84          = word ptr -84h ;~ 2331:1111
#undef var_82
#define var_82 -0x82
	// 78794 var_82          = word ptr -82h ;~ 2331:1111
#undef var_80
#define var_80 -0x80
	// 78795 var_80          = word ptr -80h ;~ 2331:1111
#undef var_7e
#define var_7e -0x7E
	// 78796 var_7E          = word ptr -7Eh ;~ 2331:1111
#undef var_7c
#define var_7c -0x7C
	// 78797 var_7C          = word ptr -7Ch ;~ 2331:1111
#undef var_7a
#define var_7a -0x7A
	// 78798 var_7A          = word ptr -7Ah ;~ 2331:1111
#undef var_72
#define var_72 -0x72
	// 78799 var_72          = word ptr -72h ;~ 2331:1111
#undef var_70
#define var_70 -0x70
	// 78800 var_70          = byte ptr -70h ;~ 2331:1111
#undef var_6c
#define var_6c -0x6C
	// 78801 var_6C          = byte ptr -6Ch ;~ 2331:1111
#undef var_1c
#define var_1c -0x1C
	// 78802 var_1C          = word ptr -1Ch ;~ 2331:1111
#undef var_1a
#define var_1a -0x1A
	// 78803 var_1A          = word ptr -1Ah ;~ 2331:1111
#undef var_16
#define var_16 -0x16
	// 78804 var_16          = byte ptr -16h ;~ 2331:1111
#undef var_e
#define var_e -0x0E
	// 78805 var_E           = word ptr -0Eh ;~ 2331:1111
#undef var_c
#define var_c -0x0C
	// 78806 var_C           = word ptr -0Ch ;~ 2331:1111
#undef var_a
#define var_a -0x0A
	// 78807 var_A           = word ptr -0Ah ;~ 2331:1111
#undef var_8
#define var_8 -8
	// 78808 var_8           = word ptr -8 ;~ 2331:1111
#undef var_6
#define var_6 -6
	// 78809 var_6           = word ptr -6 ;~ 2331:1111
#undef var_4
#define var_4 -4
	// 78810 var_4           = dword ptr -4 ;~ 2331:1111
cs=0x2331;eip=0x001111; 	X(PUSH(bp));	// 78812 push    bp ;~ 2331:1111
cs=0x2331;eip=0x001112; 	T(MOV(bp, sp));	// 78813 mov     bp, sp ;~ 2331:1112
cs=0x2331;eip=0x001114; 	T(SUB(sp, 0x0F0));	// 78814 sub     sp, 0F0h ;~ 2331:1114
cs=0x2331;eip=0x001118; 	X(PUSH(di));	// 78815 push    di ;~ 2331:1118
cs=0x2331;eip=0x001119; 	X(PUSH(si));	// 78816 push    si ;~ 2331:1119
cs=0x2331;eip=0x00111a; 	X(MOV(byte_56ba8, 0));	// 78817 mov     byte_56BA8, 0 ;~ 2331:111A
cs=0x2331;eip=0x00111f; 	T(MOV(ax, *(dw*)((&unk_5687d))));	// 78818 mov     ax, word ptr unk_5687D ;~ 2331:111F
cs=0x2331;eip=0x001122; 	T(INC(ax));	// 78819 inc     ax ;~ 2331:1122
cs=0x2331;eip=0x001123; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 78820 mov     [bp+var_C], ax ;~ 2331:1123
cs=0x2331;eip=0x001126; 	T(MOV(ax, *(dw*)((&unk_56881))));	// 78821 mov     ax, word ptr unk_56881 ;~ 2331:1126
cs=0x2331;eip=0x001129; 	T(INC(ax));	// 78822 inc     ax ;~ 2331:1129
cs=0x2331;eip=0x00112a; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 78823 mov     [bp+var_A], ax ;~ 2331:112A
cs=0x2331;eip=0x00112d; 	T(MOV(ax, *(dw*)((&unk_564fe))));	// 78824 mov     ax, word ptr unk_564FE ;~ 2331:112D
cs=0x2331;eip=0x001130; 	T(DEC(ax));	// 78825 dec     ax ;~ 2331:1130
cs=0x2331;eip=0x001131; 	T(DEC(ax));	// 78826 dec     ax ;~ 2331:1131
cs=0x2331;eip=0x001132; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 78827 mov     [bp+var_8], ax ;~ 2331:1132
cs=0x2331;eip=0x001135; 	T(MOV(ax, *(dw*)((&unk_56500))));	// 78828 mov     ax, word ptr unk_56500 ;~ 2331:1135
cs=0x2331;eip=0x001138; 	T(DEC(ax));	// 78829 dec     ax ;~ 2331:1138
cs=0x2331;eip=0x001139; 	T(DEC(ax));	// 78830 dec     ax ;~ 2331:1139
cs=0x2331;eip=0x00113a; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 78831 mov     [bp+var_6], ax ;~ 2331:113A
cs=0x2331;eip=0x00113d; 	T(MOV(ax, 0x2710));	// 78832 mov     ax, 2710h ;~ 2331:113D
cs=0x2331;eip=0x001140; 	X(MOV(*(dw*)(raddr(ss,bp+var_7a)), ax));	// 78833 mov     [bp+var_7A], ax ;~ 2331:1140
cs=0x2331;eip=0x001143; 	X(MOV(*(dw*)(raddr(ss,bp+var_7c)), ax));	// 78834 mov     [bp+var_7C], ax ;~ 2331:1143
cs=0x2331;eip=0x001146; 	X(MOV(*(dw*)(raddr(ss,bp+var_82)), ax));	// 78835 mov     [bp+var_82], ax ;~ 2331:1146
cs=0x2331;eip=0x00114a; 	X(MOV(*(dw*)(raddr(ss,bp+var_84)), ax));	// 78836 mov     [bp+var_84], ax ;~ 2331:114A
cs=0x2331;eip=0x00114e; 	T(SUB(ax, ax));	// 78837 sub     ax, ax ;~ 2331:114E
cs=0x2331;eip=0x001150; 	X(MOV(*(dw*)(raddr(ss,bp+var_7e)), ax));	// 78838 mov     [bp+var_7E], ax ;~ 2331:1150
cs=0x2331;eip=0x001153; 	X(MOV(*(dw*)(raddr(ss,bp+var_80)), ax));	// 78839 mov     [bp+var_80], ax ;~ 2331:1153
cs=0x2331;eip=0x001156; 	T(MOV(ax, *(dw*)((&unk_488dc))));	// 78840 mov     ax, word ptr unk_488DC ;~ 2331:1156
cs=0x2331;eip=0x001159; 	T(MOV(dx, *(dw*)((&unk_488de))));	// 78841 mov     dx, word ptr unk_488DE ;~ 2331:1159
cs=0x2331;eip=0x00115d; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 78842 mov     word ptr [bp+var_4], ax ;~ 2331:115D
cs=0x2331;eip=0x001160; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 78843 mov     word ptr [bp+var_4+2], dx ;~ 2331:1160
cs=0x2331;eip=0x001163; 	T(ax = bp+var_de);	// 78844 lea     ax, [bp+var_DE] ;~ 2331:1163
cs=0x2331;eip=0x001167; 	T(MOV(di, ax));	// 78845 mov     di, ax ;~ 2331:1167
cs=0x2331;eip=0x001169; 	R(JMP(loc_32aef));	// 78846 jmp     loc_32AEF ;~ 2331:1169
loc_32a5c:
	// 9475 
cs=0x2331;eip=0x00116c; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 78850 les     bx, [bp+var_4] ;~ 2331:116C
cs=0x2331;eip=0x00116f; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 78851 mov     ax, es:[bx] ;~ 2331:116F
cs=0x2331;eip=0x001172; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 78852 mov     dx, es:[bx+2] ;~ 2331:1172
cs=0x2331;eip=0x001176; 	T(MOV(cl, 8));	// 78853 mov     cl, 8 ;~ 2331:1176
cs=0x2331;eip=0x001178; 	R(CALLF(sub_10240,0));	// 78854 call    sub_10240 ;~ 2331:1178
cs=0x2331;eip=0x00117d; 	X(PUSH(dx));	// 78855 push    dx ;~ 2331:117D
cs=0x2331;eip=0x00117e; 	X(PUSH(ax));	// 78856 push    ax ;~ 2331:117E
cs=0x2331;eip=0x00117f; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 78857 les     bx, [bp+var_4] ;~ 2331:117F
cs=0x2331;eip=0x001182; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 78858 mov     ax, es:[bx+8] ;~ 2331:1182
cs=0x2331;eip=0x001186; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0A))));	// 78859 mov     dx, es:[bx+0Ah] ;~ 2331:1186
cs=0x2331;eip=0x00118a; 	T(MOV(cl, 8));	// 78860 mov     cl, 8 ;~ 2331:118A
cs=0x2331;eip=0x00118c; 	R(CALLF(sub_10240,0));	// 78861 call    sub_10240 ;~ 2331:118C
cs=0x2331;eip=0x001191; 	X(PUSH(dx));	// 78862 push    dx ;~ 2331:1191
cs=0x2331;eip=0x001192; 	X(PUSH(ax));	// 78863 push    ax ;~ 2331:1192
cs=0x2331;eip=0x001193; 	T(ax = di+8);	// 78864 lea     ax, [di+8] ;~ 2331:1193
cs=0x2331;eip=0x001196; 	X(PUSH(ax));	// 78865 push    ax ;~ 2331:1196
cs=0x2331;eip=0x001197; 	T(ax = di+0x0A);	// 78866 lea     ax, [di+0Ah] ;~ 2331:1197
cs=0x2331;eip=0x00119a; 	X(PUSH(ax));	// 78867 push    ax ;~ 2331:119A
cs=0x2331;eip=0x00119b; 	R(CALLF(sub_2d6a3,0));	// 78868 call    sub_2D6A3 ;~ 2331:119B
cs=0x2331;eip=0x0011a0; 	X(MOV(*(dw*)(raddr(ds,di+0x0E)), 0));	// 78869 mov     word ptr [di+0Eh], 0 ;~ 2331:11A0
cs=0x2331;eip=0x0011a5; 	X(MOV(*(dw*)(raddr(ds,di+0x10)), 0x14));	// 78870 mov     word ptr [di+10h], 14h ;~ 2331:11A5
cs=0x2331;eip=0x0011aa; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 78871 mov     ax, word ptr [bp+var_4] ;~ 2331:11AA
cs=0x2331;eip=0x0011ad; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 78872 mov     dx, word ptr [bp+var_4+2] ;~ 2331:11AD
cs=0x2331;eip=0x0011b0; 	T(ADD(ax, 0x0C));	// 78873 add     ax, 0Ch ;~ 2331:11B0
cs=0x2331;eip=0x0011b3; 	X(PUSH(dx));	// 78874 push    dx ;~ 2331:11B3
cs=0x2331;eip=0x0011b4; 	X(PUSH(ax));	// 78875 push    ax ;~ 2331:11B4
cs=0x2331;eip=0x0011b5; 	T(ax = bp+var_6c);	// 78876 lea     ax, [bp+var_6C] ;~ 2331:11B5
cs=0x2331;eip=0x0011b8; 	X(PUSH(ss));	// 78877 push    ss ;~ 2331:11B8
cs=0x2331;eip=0x0011b9; 	X(PUSH(ax));	// 78878 push    ax ;~ 2331:11B9
cs=0x2331;eip=0x0011ba; 	T(MOV(ax, 0x1F));	// 78879 mov     ax, 1Fh ;~ 2331:11BA
cs=0x2331;eip=0x0011bd; 	X(PUSH(ax));	// 78880 push    ax ;~ 2331:11BD
cs=0x2331;eip=0x0011be; 	R(CALLF(sub_210f1,0));	// 78881 call    sub_210F1 ;~ 2331:11BE
cs=0x2331;eip=0x0011c3; 	T(ax = bp+var_6c);	// 78882 lea     ax, [bp+var_6C] ;~ 2331:11C3
cs=0x2331;eip=0x0011c6; 	X(PUSH(ax));	// 78883 push    ax ;~ 2331:11C6
cs=0x2331;eip=0x0011c7; 	R(CALLF(sub_2dcb2,0));	// 78884 call    sub_2DCB2 ;~ 2331:11C7
cs=0x2331;eip=0x0011cc; 	T(ADD(ax, 7));	// 78885 add     ax, 7 ;~ 2331:11CC
cs=0x2331;eip=0x0011cf; 	X(MOV(*(dw*)(raddr(ds,di+4)), ax));	// 78886 mov     [di+4], ax ;~ 2331:11CF
cs=0x2331;eip=0x0011d2; 	X(MOV(*(dw*)(raddr(ds,di+6)), 0x0B));	// 78887 mov     word ptr [di+6], 0Bh ;~ 2331:11D2
cs=0x2331;eip=0x0011d7; 	T(MOV(ax, *(dw*)(raddr(ds,di+8))));	// 78888 mov     ax, [di+8] ;~ 2331:11D7
cs=0x2331;eip=0x0011da; 	T(ADD(ax, 0x14));	// 78889 add     ax, 14h ;~ 2331:11DA
cs=0x2331;eip=0x0011dd; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 78890 mov     [di], ax ;~ 2331:11DD
cs=0x2331;eip=0x0011df; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x0A))));	// 78891 mov     ax, [di+0Ah] ;~ 2331:11DF
cs=0x2331;eip=0x0011e2; 	T(SUB(ax, 5));	// 78892 sub     ax, 5 ;~ 2331:11E2
cs=0x2331;eip=0x0011e5; 	X(MOV(*(dw*)(raddr(ds,di+2)), ax));	// 78893 mov     [di+2], ax ;~ 2331:11E5
cs=0x2331;eip=0x0011e8; 	T(ax = di+8);	// 78894 lea     ax, [di+8] ;~ 2331:11E8
cs=0x2331;eip=0x0011eb; 	X(PUSH(ax));	// 78895 push    ax ;~ 2331:11EB
cs=0x2331;eip=0x0011ec; 	T(ax = bp+var_c);	// 78896 lea     ax, [bp+var_C] ;~ 2331:11EC
cs=0x2331;eip=0x0011ef; 	X(PUSH(ax));	// 78897 push    ax ;~ 2331:11EF
cs=0x2331;eip=0x0011f0; 	R(CALLF(sub_23532,0));	// 78898 call    sub_23532 ;~ 2331:11F0
cs=0x2331;eip=0x0011f5; 	X(MOV(*(raddr(ds,di+0x0C)), al));	// 78899 mov     [di+0Ch], al ;~ 2331:11F5
cs=0x2331;eip=0x0011f8; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_4))), 0x2B));	// 78900 add     word ptr [bp+var_4], 2Bh ; '+' ;~ 2331:11F8
cs=0x2331;eip=0x0011fc; 	T(ADD(di, 0x12));	// 78901 add     di, 12h ;~ 2331:11FC
loc_32aef:
	// 9476 
cs=0x2331;eip=0x0011ff; 	T(MOV(ax, 0x12));	// 78904 mov     ax, 12h ;~ 2331:11FF
cs=0x2331;eip=0x001202; 	X(IMUL1_2(*(dw*)((&unk_56fa6))));	// 78905 imul    word ptr unk_56FA6 ;~ 2331:1202
cs=0x2331;eip=0x001206; 	T(ADD(ax, bp));	// 78906 add     ax, bp ;~ 2331:1206
cs=0x2331;eip=0x001208; 	T(SUB(ax, 0x0DE));	// 78907 sub     ax, 0DEh ; 'ﬁ' ;~ 2331:1208
cs=0x2331;eip=0x00120b; 	T(CMP(ax, di));	// 78908 cmp     ax, di ;~ 2331:120B
cs=0x2331;eip=0x00120d; 	R(JBE(loc_32b02));	// 78909 jbe     short loc_32B02 ;~ 2331:120D
cs=0x2331;eip=0x00120f; 	R(JMP(loc_32a5c));	// 78910 jmp     loc_32A5C ;~ 2331:120F
loc_32b02:
	// 9477 
cs=0x2331;eip=0x001212; 	R(CALLF(sub_1bbee,0));	// 78914 call    sub_1BBEE ;~ 2331:1212
loc_32b07:
	// 9478 
cs=0x2331;eip=0x001217; 	X(MOV(*(raddr(ss,bp+var_70)), 0));	// 78917 mov     [bp+var_70], 0 ;~ 2331:1217
cs=0x2331;eip=0x00121b; 	T(SUB(si, si));	// 78918 sub     si, si ;~ 2331:121B
cs=0x2331;eip=0x00121d; 	T(MOV(ax, *(dw*)((&unk_488dc))));	// 78919 mov     ax, word ptr unk_488DC ;~ 2331:121D
cs=0x2331;eip=0x001220; 	T(MOV(dx, *(dw*)((&unk_488de))));	// 78920 mov     dx, word ptr unk_488DE ;~ 2331:1220
cs=0x2331;eip=0x001224; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 78921 mov     word ptr [bp+var_4], ax ;~ 2331:1224
cs=0x2331;eip=0x001227; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 78922 mov     word ptr [bp+var_4+2], dx ;~ 2331:1227
cs=0x2331;eip=0x00122a; 	T(ax = bp+var_de);	// 78923 lea     ax, [bp+var_DE] ;~ 2331:122A
cs=0x2331;eip=0x00122e; 	T(MOV(di, ax));	// 78924 mov     di, ax ;~ 2331:122E
cs=0x2331;eip=0x001230; 	T(CMP(*(dw*)((&unk_56fa6)), si));	// 78925 cmp     word ptr unk_56FA6, si ;~ 2331:1230
cs=0x2331;eip=0x001234; 	R(JG(loc_32b29));	// 78926 jg      short loc_32B29 ;~ 2331:1234
cs=0x2331;eip=0x001236; 	R(JMP(loc_32c3a));	// 78927 jmp     loc_32C3A ;~ 2331:1236
loc_32b29:
	// 9479 
cs=0x2331;eip=0x001239; 	T(MOV(ax, 0x12));	// 78931 mov     ax, 12h ;~ 2331:1239
cs=0x2331;eip=0x00123c; 	T(IMUL1_2(si));	// 78932 imul    si ;~ 2331:123C
cs=0x2331;eip=0x00123e; 	T(ADD(ax, bp));	// 78933 add     ax, bp ;~ 2331:123E
cs=0x2331;eip=0x001240; 	T(SUB(ax, 0x0D6));	// 78934 sub     ax, 0D6h ; '÷' ;~ 2331:1240
cs=0x2331;eip=0x001243; 	X(MOV(*(dw*)(raddr(ss,bp+var_f0)), ax));	// 78935 mov     [bp+var_F0], ax ;~ 2331:1243
loc_32b37:
	// 9480 
cs=0x2331;eip=0x001247; 	T(CMP(*(raddr(ds,di+0x0C)), 0));	// 78938 cmp     byte ptr [di+0Ch], 0 ;~ 2331:1247
cs=0x2331;eip=0x00124b; 	R(JNZ(loc_32b40));	// 78939 jnz     short loc_32B40 ;~ 2331:124B
cs=0x2331;eip=0x00124d; 	R(JMP(loc_32c24));	// 78940 jmp     loc_32C24 ;~ 2331:124D
loc_32b40:
	// 9481 
cs=0x2331;eip=0x001250; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0));	// 78944 mov     [bp+var_E], 0 ;~ 2331:1250
cs=0x2331;eip=0x001255; 	T(CMP(*(dw*)((&unk_56fa6)), 0));	// 78945 cmp     word ptr unk_56FA6, 0 ;~ 2331:1255
cs=0x2331;eip=0x00125a; 	R(JG(loc_32b4f));	// 78946 jg      short loc_32B4F ;~ 2331:125A
cs=0x2331;eip=0x00125c; 	R(JMP(loc_32c24));	// 78947 jmp     loc_32C24 ;~ 2331:125C
loc_32b4f:
	// 9482 
cs=0x2331;eip=0x00125f; 	X(PUSH(di));	// 78952 push    di ;~ 2331:125F
cs=0x2331;eip=0x001260; 	T(ax = bp+var_c);	// 78953 lea     ax, [bp+var_C] ;~ 2331:1260
cs=0x2331;eip=0x001263; 	X(PUSH(ax));	// 78954 push    ax ;~ 2331:1263
cs=0x2331;eip=0x001264; 	R(CALLF(sub_23450,0));	// 78955 call    sub_23450 ;~ 2331:1264
cs=0x2331;eip=0x001269; 	T(OR(al, al));	// 78956 or      al, al ;~ 2331:1269
cs=0x2331;eip=0x00126b; 	R(JZ(loc_32b60));	// 78957 jz      short loc_32B60 ;~ 2331:126B
cs=0x2331;eip=0x00126d; 	R(JMP(loc_32bfd));	// 78958 jmp     loc_32BFD ;~ 2331:126D
loc_32b60:
	// 9483 
cs=0x2331;eip=0x001270; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 5));	// 78962 mov     [bp+var_E], 5 ;~ 2331:1270
loc_32b65:
	// 9484 
cs=0x2331;eip=0x001275; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_f0))));	// 78965 mov     ax, [bp+var_F0] ;~ 2331:1275
cs=0x2331;eip=0x001279; 	X(MOV(*(dw*)(raddr(ss,bp+var_ec)), ax));	// 78966 mov     [bp+var_EC], ax ;~ 2331:1279
cs=0x2331;eip=0x00127d; 	T(MOV(ax, 0x12));	// 78967 mov     ax, 12h ;~ 2331:127D
cs=0x2331;eip=0x001280; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_e))));	// 78968 imul    [bp+var_E] ;~ 2331:1280
cs=0x2331;eip=0x001283; 	T(ADD(ax, bp));	// 78969 add     ax, bp ;~ 2331:1283
cs=0x2331;eip=0x001285; 	T(SUB(ax, 0x0DE));	// 78970 sub     ax, 0DEh ; 'ﬁ' ;~ 2331:1285
cs=0x2331;eip=0x001288; 	X(MOV(*(dw*)(raddr(ss,bp+var_ee)), ax));	// 78971 mov     [bp+var_EE], ax ;~ 2331:1288
loc_32b7c:
	// 9485 
cs=0x2331;eip=0x00128c; 	T(ax = bp+var_16);	// 78974 lea     ax, [bp+var_16] ;~ 2331:128C
cs=0x2331;eip=0x00128f; 	X(PUSH(ax));	// 78975 push    ax ;~ 2331:128F
cs=0x2331;eip=0x001290; 	X(PUSH(di));	// 78976 push    di ;~ 2331:1290
cs=0x2331;eip=0x001291; 	X(PUSH(*(dw*)(raddr(ss,bp+var_ee))));	// 78977 push    [bp+var_EE] ;~ 2331:1291
cs=0x2331;eip=0x001295; 	R(CALLF(sub_23492,0));	// 78978 call    sub_23492 ;~ 2331:1295
cs=0x2331;eip=0x00129a; 	T(OR(al, al));	// 78979 or      al, al ;~ 2331:129A
cs=0x2331;eip=0x00129c; 	R(JNZ(loc_32baa));	// 78980 jnz     short loc_32BAA ;~ 2331:129C
cs=0x2331;eip=0x00129e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_ec))));	// 78981 push    [bp+var_EC] ;~ 2331:129E
cs=0x2331;eip=0x0012a2; 	X(PUSH(di));	// 78982 push    di ;~ 2331:12A2
cs=0x2331;eip=0x0012a3; 	R(CALLF(sub_23532,0));	// 78983 call    sub_23532 ;~ 2331:12A3
cs=0x2331;eip=0x0012a8; 	T(OR(al, al));	// 78984 or      al, al ;~ 2331:12A8
cs=0x2331;eip=0x0012aa; 	R(JNZ(loc_32baa));	// 78985 jnz     short loc_32BAA ;~ 2331:12AA
cs=0x2331;eip=0x0012ac; 	X(PUSH(di));	// 78986 push    di ;~ 2331:12AC
cs=0x2331;eip=0x0012ad; 	T(ax = bp+var_c);	// 78987 lea     ax, [bp+var_C] ;~ 2331:12AD
cs=0x2331;eip=0x0012b0; 	X(PUSH(ax));	// 78988 push    ax ;~ 2331:12B0
cs=0x2331;eip=0x0012b1; 	R(CALLF(sub_23450,0));	// 78989 call    sub_23450 ;~ 2331:12B1
cs=0x2331;eip=0x0012b6; 	T(OR(al, al));	// 78990 or      al, al ;~ 2331:12B6
cs=0x2331;eip=0x0012b8; 	R(JNZ(loc_32c16));	// 78991 jnz     short loc_32C16 ;~ 2331:12B8
loc_32baa:
	// 9486 
cs=0x2331;eip=0x0012ba; 	X(MOV(*(raddr(ss,bp+var_70)), 1));	// 78995 mov     [bp+var_70], 1 ;~ 2331:12BA
cs=0x2331;eip=0x0012be; 	X(ADD(*(dw*)(raddr(ds,di+0x0E)), 0x28));	// 78996 add     word ptr [di+0Eh], 28h ; '(' ;~ 2331:12BE
cs=0x2331;eip=0x0012c2; 	T(CMP(*(dw*)(raddr(ds,di+0x0E)), 0x0B40));	// 78997 cmp     word ptr [di+0Eh], 0B40h ;~ 2331:12C2
cs=0x2331;eip=0x0012c7; 	R(JL(loc_32bce));	// 78998 jl      short loc_32BCE ;~ 2331:12C7
cs=0x2331;eip=0x0012c9; 	X(MOV(*(dw*)(raddr(ds,di+0x0E)), 0));	// 78999 mov     word ptr [di+0Eh], 0 ;~ 2331:12C9
cs=0x2331;eip=0x0012ce; 	X(ADD(*(dw*)(raddr(ds,di+0x10)), 5));	// 79000 add     word ptr [di+10h], 5 ;~ 2331:12CE
cs=0x2331;eip=0x0012d2; 	T(CMP(*(dw*)(raddr(ds,di+0x10)), 0x96));	// 79001 cmp     word ptr [di+10h], 96h ; 'ñ' ;~ 2331:12D2
cs=0x2331;eip=0x0012d7; 	R(JL(loc_32bce));	// 79002 jl      short loc_32BCE ;~ 2331:12D7
cs=0x2331;eip=0x0012d9; 	X(MOV(*(dw*)(raddr(ds,di+0x10)), 0x14));	// 79003 mov     word ptr [di+10h], 14h ;~ 2331:12D9
loc_32bce:
	// 9487 
cs=0x2331;eip=0x0012de; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x10))));	// 79007 mov     ax, [di+10h] ;~ 2331:12DE
cs=0x2331;eip=0x0012e1; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), ax));	// 79008 mov     [bp+var_1C], ax ;~ 2331:12E1
cs=0x2331;eip=0x0012e4; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), 0));	// 79009 mov     [bp+var_1A], 0 ;~ 2331:12E4
cs=0x2331;eip=0x0012e9; 	T(ax = bp+var_1c);	// 79010 lea     ax, [bp+var_1C] ;~ 2331:12E9
cs=0x2331;eip=0x0012ec; 	X(PUSH(ax));	// 79011 push    ax ;~ 2331:12EC
cs=0x2331;eip=0x0012ed; 	T(MOV(ax, 0x106));	// 79012 mov     ax, 106h ;~ 2331:12ED
cs=0x2331;eip=0x0012f0; 	X(PUSH(ax));	// 79013 push    ax ;~ 2331:12F0
cs=0x2331;eip=0x0012f1; 	X(PUSH(*(dw*)(raddr(ds,di+0x0E))));	// 79014 push    word ptr [di+0Eh] ;~ 2331:12F1
cs=0x2331;eip=0x0012f4; 	R(CALLF(sub_25c7d,0));	// 79015 call    sub_25C7D ;~ 2331:12F4
cs=0x2331;eip=0x0012f9; 	T(MOV(ax, *(dw*)(raddr(ds,di+8))));	// 79016 mov     ax, [di+8] ;~ 2331:12F9
cs=0x2331;eip=0x0012fc; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 79017 add     ax, [bp+var_1C] ;~ 2331:12FC
cs=0x2331;eip=0x0012ff; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 79018 mov     [di], ax ;~ 2331:12FF
cs=0x2331;eip=0x001301; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x0A))));	// 79019 mov     ax, [di+0Ah] ;~ 2331:1301
cs=0x2331;eip=0x001304; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 79020 add     ax, [bp+var_1A] ;~ 2331:1304
cs=0x2331;eip=0x001307; 	X(MOV(*(dw*)(raddr(ds,di+2)), ax));	// 79021 mov     [di+2], ax ;~ 2331:1307
cs=0x2331;eip=0x00130a; 	R(JMP(loc_32b7c));	// 79022 jmp     loc_32B7C ;~ 2331:130A
loc_32bfd:
	// 9488 
cs=0x2331;eip=0x00130d; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), si));	// 79026 cmp     [bp+var_E], si ;~ 2331:130D
cs=0x2331;eip=0x001310; 	R(JZ(loc_32c16));	// 79027 jz      short loc_32C16 ;~ 2331:1310
cs=0x2331;eip=0x001312; 	T(MOV(ax, 0x12));	// 79028 mov     ax, 12h ;~ 2331:1312
cs=0x2331;eip=0x001315; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_e))));	// 79029 imul    [bp+var_E] ;~ 2331:1315
cs=0x2331;eip=0x001318; 	T(MOV(bx, ax));	// 79030 mov     bx, ax ;~ 2331:1318
cs=0x2331;eip=0x00131a; 	T(ADD(bx, bp));	// 79031 add     bx, bp ;~ 2331:131A
cs=0x2331;eip=0x00131c; 	T(CMP(*(raddr(ds,bx-0x0D2)), 0));	// 79032 cmp     byte ptr [bx-0D2h], 0 ;~ 2331:131C
cs=0x2331;eip=0x001321; 	R(JZ(loc_32c16));	// 79033 jz      short loc_32C16 ;~ 2331:1321
cs=0x2331;eip=0x001323; 	R(JMP(loc_32b65));	// 79034 jmp     loc_32B65 ;~ 2331:1323
loc_32c16:
	// 9489 
cs=0x2331;eip=0x001326; 	X(INC(*(dw*)(raddr(ss,bp+var_e))));	// 79039 inc     [bp+var_E] ;~ 2331:1326
cs=0x2331;eip=0x001329; 	T(MOV(ax, *(dw*)((&unk_56fa6))));	// 79040 mov     ax, word ptr unk_56FA6 ;~ 2331:1329
cs=0x2331;eip=0x00132c; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), ax));	// 79041 cmp     [bp+var_E], ax ;~ 2331:132C
cs=0x2331;eip=0x00132f; 	R(JGE(loc_32c24));	// 79042 jge     short loc_32C24 ;~ 2331:132F
cs=0x2331;eip=0x001331; 	R(JMP(loc_32b4f));	// 79043 jmp     loc_32B4F ;~ 2331:1331
loc_32c24:
	// 9490 
cs=0x2331;eip=0x001334; 	X(ADD(*(dw*)(raddr(ss,bp+var_f0)), 0x12));	// 79048 add     [bp+var_F0], 12h ;~ 2331:1334
cs=0x2331;eip=0x001339; 	T(INC(si));	// 79049 inc     si ;~ 2331:1339
cs=0x2331;eip=0x00133a; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_4))), 0x2B));	// 79050 add     word ptr [bp+var_4], 2Bh ; '+' ;~ 2331:133A
cs=0x2331;eip=0x00133e; 	T(ADD(di, 0x12));	// 79051 add     di, 12h ;~ 2331:133E
cs=0x2331;eip=0x001341; 	T(CMP(*(dw*)((&unk_56fa6)), si));	// 79052 cmp     word ptr unk_56FA6, si ;~ 2331:1341
cs=0x2331;eip=0x001345; 	R(JLE(loc_32c3a));	// 79053 jle     short loc_32C3A ;~ 2331:1345
cs=0x2331;eip=0x001347; 	R(JMP(loc_32b37));	// 79054 jmp     loc_32B37 ;~ 2331:1347
loc_32c3a:
	// 9491 
cs=0x2331;eip=0x00134a; 	R(CALLF(sub_1bc16,0));	// 79059 call    sub_1BC16 ;~ 2331:134A
cs=0x2331;eip=0x00134f; 	T(CMP(*(raddr(ss,bp+var_70)), 0));	// 79060 cmp     [bp+var_70], 0 ;~ 2331:134F
cs=0x2331;eip=0x001353; 	R(JZ(loc_32c4f));	// 79061 jz      short loc_32C4F ;~ 2331:1353
cs=0x2331;eip=0x001355; 	T(CMP(*(dw*)((&unk_57058)), 0x0A));	// 79062 cmp     word ptr unk_57058, 0Ah ;~ 2331:1355
cs=0x2331;eip=0x00135a; 	R(JNC(loc_32c4f));	// 79063 jnb     short loc_32C4F ;~ 2331:135A
cs=0x2331;eip=0x00135c; 	R(JMP(loc_32b07));	// 79064 jmp     loc_32B07 ;~ 2331:135C
loc_32c4f:
	// 9492 
cs=0x2331;eip=0x00135f; 	X(MOV(*(dw*)((&unk_47bde)), 0x0FF0F));	// 79069 mov     word ptr unk_47BDE, 0FF0Fh ;~ 2331:135F
cs=0x2331;eip=0x001365; 	X(MOV(unk_56885, 0));	// 79070 mov     byte ptr unk_56885, 0 ;~ 2331:1365
cs=0x2331;eip=0x00136a; 	T(CMP(*(dw*)((&byte_47b2e)), 0));	// 79071 cmp     word ptr byte_47B2E, 0 ;~ 2331:136A
cs=0x2331;eip=0x00136f; 	R(JNZ(loc_32c66));	// 79072 jnz     short loc_32C66 ;~ 2331:136F
cs=0x2331;eip=0x001371; 	T(MOV(ax, 0x0FF00));	// 79073 mov     ax, 0FF00h ;~ 2331:1371
cs=0x2331;eip=0x001374; 	R(JMP(loc_32c69));	// 79074 jmp     short loc_32C69 ;~ 2331:1374
loc_32c66:
	// 9493 
cs=0x2331;eip=0x001376; 	T(MOV(ax, 0x0FF0C));	// 79078 mov     ax, 0FF0Ch ;~ 2331:1376
loc_32c69:
	// 9494 
cs=0x2331;eip=0x001379; 	X(MOV(*(dw*)(raddr(ss,bp+var_72)), ax));	// 79081 mov     [bp+var_72], ax ;~ 2331:1379
cs=0x2331;eip=0x00137c; 	T(SUB(si, si));	// 79082 sub     si, si ;~ 2331:137C
loc_32c6e:
	// 9495 
cs=0x2331;eip=0x00137e; 	T(MOV(ax, *(dw*)((&unk_488dc))));	// 79085 mov     ax, word ptr unk_488DC ;~ 2331:137E
cs=0x2331;eip=0x001381; 	T(MOV(dx, *(dw*)((&unk_488de))));	// 79086 mov     dx, word ptr unk_488DE ;~ 2331:1381
cs=0x2331;eip=0x001385; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 79087 mov     word ptr [bp+var_4], ax ;~ 2331:1385
cs=0x2331;eip=0x001388; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 79088 mov     word ptr [bp+var_4+2], dx ;~ 2331:1388
cs=0x2331;eip=0x00138b; 	T(ax = bp+var_de);	// 79089 lea     ax, [bp+var_DE] ;~ 2331:138B
cs=0x2331;eip=0x00138f; 	T(MOV(di, ax));	// 79090 mov     di, ax ;~ 2331:138F
cs=0x2331;eip=0x001391; 	R(JMP(loc_32d14));	// 79091 jmp     loc_32D14 ;~ 2331:1391
loc_32c84:
	// 9496 
cs=0x2331;eip=0x001394; 	T(OR(si, si));	// 79095 or      si, si ;~ 2331:1394
cs=0x2331;eip=0x001396; 	R(JNZ(loc_32cbd));	// 79096 jnz     short loc_32CBD ;~ 2331:1396
cs=0x2331;eip=0x001398; 	X(PUSH(*(dw*)(raddr(ds,di+8))));	// 79097 push    word ptr [di+8] ;~ 2331:1398
cs=0x2331;eip=0x00139b; 	X(PUSH(*(dw*)(raddr(ds,di+0x0A))));	// 79098 push    word ptr [di+0Ah] ;~ 2331:139B
cs=0x2331;eip=0x00139e; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 79099 mov     ax, [di] ;~ 2331:139E
cs=0x2331;eip=0x0013a0; 	T(INC(ax));	// 79100 inc     ax ;~ 2331:13A0
cs=0x2331;eip=0x0013a1; 	T(INC(ax));	// 79101 inc     ax ;~ 2331:13A1
cs=0x2331;eip=0x0013a2; 	X(PUSH(ax));	// 79102 push    ax ;~ 2331:13A2
cs=0x2331;eip=0x0013a3; 	T(MOV(ax, *(dw*)(raddr(ds,di+6))));	// 79103 mov     ax, [di+6] ;~ 2331:13A3
cs=0x2331;eip=0x0013a6; 	T(SAR(ax, 1));	// 79104 sar     ax, 1 ;~ 2331:13A6
cs=0x2331;eip=0x0013a8; 	T(ADD(ax, *(dw*)(raddr(ds,di+2))));	// 79105 add     ax, [di+2] ;~ 2331:13A8
cs=0x2331;eip=0x0013ab; 	X(PUSH(ax));	// 79106 push    ax ;~ 2331:13AB
cs=0x2331;eip=0x0013ac; 	X(PUSH(*(dw*)(raddr(ss,bp+var_72))));	// 79107 push    [bp+var_72] ;~ 2331:13AC
cs=0x2331;eip=0x0013af; 	R(CALLF(sub_21f4b,0));	// 79108 call    sub_21F4B ;~ 2331:13AF
cs=0x2331;eip=0x0013b4; 	T(MOV(ax, *(dw*)(raddr(ds,di+8))));	// 79109 mov     ax, [di+8] ;~ 2331:13B4
cs=0x2331;eip=0x0013b7; 	T(DEC(ax));	// 79110 dec     ax ;~ 2331:13B7
cs=0x2331;eip=0x0013b8; 	X(PUSH(ax));	// 79111 push    ax ;~ 2331:13B8
cs=0x2331;eip=0x0013b9; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x0A))));	// 79112 mov     ax, [di+0Ah] ;~ 2331:13B9
cs=0x2331;eip=0x0013bc; 	T(DEC(ax));	// 79113 dec     ax ;~ 2331:13BC
cs=0x2331;eip=0x0013bd; 	X(PUSH(ax));	// 79114 push    ax ;~ 2331:13BD
cs=0x2331;eip=0x0013be; 	T(MOV(ax, 3));	// 79115 mov     ax, 3 ;~ 2331:13BE
cs=0x2331;eip=0x0013c1; 	X(PUSH(ax));	// 79116 push    ax ;~ 2331:13C1
cs=0x2331;eip=0x0013c2; 	X(PUSH(ax));	// 79117 push    ax ;~ 2331:13C2
cs=0x2331;eip=0x0013c3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_72))));	// 79118 push    [bp+var_72] ;~ 2331:13C3
cs=0x2331;eip=0x0013c6; 	R(CALLF(sub_233c4,0));	// 79119 call    sub_233C4 ;~ 2331:13C6
cs=0x2331;eip=0x0013cb; 	R(JMP(loc_32d0d));	// 79120 jmp     short loc_32D0D ;~ 2331:13CB
loc_32cbd:
	// 9497 
cs=0x2331;eip=0x0013cd; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 79124 mov     ax, [di] ;~ 2331:13CD
cs=0x2331;eip=0x0013cf; 	T(INC(ax));	// 79125 inc     ax ;~ 2331:13CF
cs=0x2331;eip=0x0013d0; 	T(INC(ax));	// 79126 inc     ax ;~ 2331:13D0
cs=0x2331;eip=0x0013d1; 	X(PUSH(ax));	// 79127 push    ax ;~ 2331:13D1
cs=0x2331;eip=0x0013d2; 	T(MOV(ax, *(dw*)(raddr(ds,di+2))));	// 79128 mov     ax, [di+2] ;~ 2331:13D2
cs=0x2331;eip=0x0013d5; 	T(INC(ax));	// 79129 inc     ax ;~ 2331:13D5
cs=0x2331;eip=0x0013d6; 	T(INC(ax));	// 79130 inc     ax ;~ 2331:13D6
cs=0x2331;eip=0x0013d7; 	X(PUSH(ax));	// 79131 push    ax ;~ 2331:13D7
cs=0x2331;eip=0x0013d8; 	T(MOV(ax, *(dw*)(raddr(ds,di+4))));	// 79132 mov     ax, [di+4] ;~ 2331:13D8
cs=0x2331;eip=0x0013db; 	T(SUB(ax, 4));	// 79133 sub     ax, 4 ;~ 2331:13DB
cs=0x2331;eip=0x0013de; 	X(PUSH(ax));	// 79134 push    ax ;~ 2331:13DE
cs=0x2331;eip=0x0013df; 	T(MOV(ax, *(dw*)(raddr(ds,di+6))));	// 79135 mov     ax, [di+6] ;~ 2331:13DF
cs=0x2331;eip=0x0013e2; 	T(SUB(ax, 4));	// 79136 sub     ax, 4 ;~ 2331:13E2
cs=0x2331;eip=0x0013e5; 	X(PUSH(ax));	// 79137 push    ax ;~ 2331:13E5
cs=0x2331;eip=0x0013e6; 	X(PUSH(*(dw*)(raddr(ss,bp+var_72))));	// 79138 push    [bp+var_72] ;~ 2331:13E6
cs=0x2331;eip=0x0013e9; 	R(CALLF(sub_233c4,0));	// 79139 call    sub_233C4 ;~ 2331:13E9
cs=0x2331;eip=0x0013ee; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 79140 mov     ax, word ptr [bp+var_4] ;~ 2331:13EE
cs=0x2331;eip=0x0013f1; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 79141 mov     dx, word ptr [bp+var_4+2] ;~ 2331:13F1
cs=0x2331;eip=0x0013f4; 	T(ADD(ax, 0x0C));	// 79142 add     ax, 0Ch ;~ 2331:13F4
cs=0x2331;eip=0x0013f7; 	X(PUSH(dx));	// 79143 push    dx ;~ 2331:13F7
cs=0x2331;eip=0x0013f8; 	X(PUSH(ax));	// 79144 push    ax ;~ 2331:13F8
cs=0x2331;eip=0x0013f9; 	T(ax = bp+var_6c);	// 79145 lea     ax, [bp+var_6C] ;~ 2331:13F9
cs=0x2331;eip=0x0013fc; 	X(PUSH(ss));	// 79146 push    ss ;~ 2331:13FC
cs=0x2331;eip=0x0013fd; 	X(PUSH(ax));	// 79147 push    ax ;~ 2331:13FD
cs=0x2331;eip=0x0013fe; 	T(MOV(ax, 0x1F));	// 79148 mov     ax, 1Fh ;~ 2331:13FE
cs=0x2331;eip=0x001401; 	X(PUSH(ax));	// 79149 push    ax ;~ 2331:1401
cs=0x2331;eip=0x001402; 	R(CALLF(sub_210f1,0));	// 79150 call    sub_210F1 ;~ 2331:1402
cs=0x2331;eip=0x001407; 	T(ax = bp+var_6c);	// 79151 lea     ax, [bp+var_6C] ;~ 2331:1407
cs=0x2331;eip=0x00140a; 	X(PUSH(ax));	// 79152 push    ax ;~ 2331:140A
cs=0x2331;eip=0x00140b; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 79153 mov     ax, [di] ;~ 2331:140B
cs=0x2331;eip=0x00140d; 	T(ADD(ax, 4));	// 79154 add     ax, 4 ;~ 2331:140D
cs=0x2331;eip=0x001410; 	X(PUSH(ax));	// 79155 push    ax ;~ 2331:1410
cs=0x2331;eip=0x001411; 	T(MOV(ax, *(dw*)(raddr(ds,di+2))));	// 79156 mov     ax, [di+2] ;~ 2331:1411
cs=0x2331;eip=0x001414; 	T(ADD(ax, 3));	// 79157 add     ax, 3 ;~ 2331:1414
cs=0x2331;eip=0x001417; 	X(PUSH(ax));	// 79158 push    ax ;~ 2331:1417
cs=0x2331;eip=0x001418; 	R(CALLF(sub_2dce4,0));	// 79159 call    sub_2DCE4 ;~ 2331:1418
loc_32d0d:
	// 9498 
cs=0x2331;eip=0x00141d; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_4))), 0x2B));	// 79163 add     word ptr [bp+var_4], 2Bh ; '+' ;~ 2331:141D
cs=0x2331;eip=0x001421; 	T(ADD(di, 0x12));	// 79164 add     di, 12h ;~ 2331:1421
loc_32d14:
	// 9499 
cs=0x2331;eip=0x001424; 	T(MOV(ax, 0x12));	// 79167 mov     ax, 12h ;~ 2331:1424
cs=0x2331;eip=0x001427; 	X(IMUL1_2(*(dw*)((&unk_56fa6))));	// 79168 imul    word ptr unk_56FA6 ;~ 2331:1427
cs=0x2331;eip=0x00142b; 	T(ADD(ax, bp));	// 79169 add     ax, bp ;~ 2331:142B
cs=0x2331;eip=0x00142d; 	T(SUB(ax, 0x0DE));	// 79170 sub     ax, 0DEh ; 'ﬁ' ;~ 2331:142D
cs=0x2331;eip=0x001430; 	T(CMP(ax, di));	// 79171 cmp     ax, di ;~ 2331:1430
cs=0x2331;eip=0x001432; 	R(JBE(loc_32d3d));	// 79172 jbe     short loc_32D3D ;~ 2331:1432
cs=0x2331;eip=0x001434; 	T(CMP(*(raddr(ds,di+0x0C)), 0));	// 79173 cmp     byte ptr [di+0Ch], 0 ;~ 2331:1434
cs=0x2331;eip=0x001438; 	R(JZ(loc_32d0d));	// 79174 jz      short loc_32D0D ;~ 2331:1438
cs=0x2331;eip=0x00143a; 	X(PUSH(di));	// 79175 push    di ;~ 2331:143A
cs=0x2331;eip=0x00143b; 	T(ax = bp+var_c);	// 79176 lea     ax, [bp+var_C] ;~ 2331:143B
cs=0x2331;eip=0x00143e; 	X(PUSH(ax));	// 79177 push    ax ;~ 2331:143E
cs=0x2331;eip=0x00143f; 	R(CALLF(sub_23450,0));	// 79178 call    sub_23450 ;~ 2331:143F
cs=0x2331;eip=0x001444; 	T(OR(al, al));	// 79179 or      al, al ;~ 2331:1444
cs=0x2331;eip=0x001446; 	R(JZ(loc_32d3b));	// 79180 jz      short loc_32D3B ;~ 2331:1446
cs=0x2331;eip=0x001448; 	R(JMP(loc_32c84));	// 79181 jmp     loc_32C84 ;~ 2331:1448
loc_32d3b:
	// 9500 
cs=0x2331;eip=0x00144b; 	R(JMP(loc_32d0d));	// 79185 jmp     short loc_32D0D ;~ 2331:144B
loc_32d3d:
	// 9501 
cs=0x2331;eip=0x00144d; 	T(INC(si));	// 79189 inc     si ;~ 2331:144D
cs=0x2331;eip=0x00144e; 	T(CMP(si, 2));	// 79190 cmp     si, 2 ;~ 2331:144E
cs=0x2331;eip=0x001451; 	R(JGE(loc_32d46));	// 79191 jge     short loc_32D46 ;~ 2331:1451
cs=0x2331;eip=0x001453; 	R(JMP(loc_32c6e));	// 79192 jmp     loc_32C6E ;~ 2331:1453
loc_32d46:
	// 9502 
cs=0x2331;eip=0x001456; 	X(POP(si));	// 79196 pop     si ;~ 2331:1456
cs=0x2331;eip=0x001457; 	X(POP(di));	// 79197 pop     di ;~ 2331:1457
cs=0x2331;eip=0x001458; 	T(MOV(sp, bp));	// 79198 mov     sp, bp ;~ 2331:1458
cs=0x2331;eip=0x00145a; 	X(POP(bp));	// 79199 pop     bp ;~ 2331:145A
cs=0x2331;eip=0x00145b; 	R(RETN(0));	// 79200 retn ;~ 2331:145B
sub_32d4c:
	// 79208 
cs=0x2331;eip=0x00145c; 	X(PUSH(bp));	// 79209 push    bp ;~ 2331:145C
cs=0x2331;eip=0x00145d; 	T(MOV(bp, sp));	// 79210 mov     bp, sp ;~ 2331:145D
cs=0x2331;eip=0x00145f; 	T(SUB(sp, 4));	// 79211 sub     sp, 4 ;~ 2331:145F
cs=0x2331;eip=0x001462; 	X(PUSH(di));	// 79212 push    di ;~ 2331:1462
cs=0x2331;eip=0x001463; 	X(PUSH(si));	// 79213 push    si ;~ 2331:1463
cs=0x2331;eip=0x001464; 	T(CMP(unk_56ff9, 0));	// 79214 cmp     byte ptr unk_56FF9, 0 ;~ 2331:1464
cs=0x2331;eip=0x001469; 	R(JZ(loc_32d70));	// 79215 jz      short loc_32D70 ;~ 2331:1469
cs=0x2331;eip=0x00146b; 	X(MOV(unk_56eb0, 2));	// 79216 mov     byte ptr unk_56EB0, 2 ;~ 2331:146B
cs=0x2331;eip=0x001470; 	X(MOV(unk_56eb1, 0));	// 79217 mov     byte ptr unk_56EB1, 0 ;~ 2331:1470
cs=0x2331;eip=0x001475; 	T(SUB(ax, ax));	// 79218 sub     ax, ax ;~ 2331:1475
cs=0x2331;eip=0x001477; 	X(MOV(*(dw*)((&unk_56fe5)), ax));	// 79219 mov     word ptr unk_56FE5, ax ;~ 2331:1477
cs=0x2331;eip=0x00147a; 	X(MOV(*(dw*)((&unk_56fe3)), ax));	// 79220 mov     word ptr unk_56FE3, ax ;~ 2331:147A
cs=0x2331;eip=0x00147d; 	R(JMP(loc_32e62));	// 79221 jmp     loc_32E62 ;~ 2331:147D
loc_32d70:
	// 9503 
cs=0x2331;eip=0x001480; 	T(CMP(unk_56eb1, 3));	// 79225 cmp     byte ptr unk_56EB1, 3 ;~ 2331:1480
cs=0x2331;eip=0x001485; 	R(JC(loc_32d7a));	// 79226 jb      short loc_32D7A ;~ 2331:1485
cs=0x2331;eip=0x001487; 	R(JMP(loc_32e51));	// 79227 jmp     loc_32E51 ;~ 2331:1487
loc_32d7a:
	// 9504 
cs=0x2331;eip=0x00148a; 	R(CALLF(sub_1822c,0));	// 79231 call    sub_1822C ;~ 2331:148A
cs=0x2331;eip=0x00148f; 	T(OR(ax, ax));	// 79232 or      ax, ax ;~ 2331:148F
cs=0x2331;eip=0x001491; 	R(JZ(loc_32d97));	// 79233 jz      short loc_32D97 ;~ 2331:1491
cs=0x2331;eip=0x001493; 	T(LES(bx, *(dd*)((&unk_56fd6))));	// 79234 les     bx, dword ptr unk_56FD6 ;~ 2331:1493
cs=0x2331;eip=0x001497; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 1));	// 79235 cmp     word ptr es:[bx+332h], 1 ;~ 2331:1497
cs=0x2331;eip=0x00149d; 	R(JNZ(loc_32d97));	// 79236 jnz     short loc_32D97 ;~ 2331:149D
cs=0x2331;eip=0x00149f; 	X(MOV(unk_56eb0, 3));	// 79237 mov     byte ptr unk_56EB0, 3 ;~ 2331:149F
cs=0x2331;eip=0x0014a4; 	R(JMP(loc_32e62));	// 79238 jmp     loc_32E62 ;~ 2331:14A4
loc_32d97:
	// 9505 
cs=0x2331;eip=0x0014a7; 	R(CALLF(sub_182cf,0));	// 79243 call    sub_182CF ;~ 2331:14A7
cs=0x2331;eip=0x0014ac; 	T(MOV(ax, dx));	// 79244 mov     ax, dx ;~ 2331:14AC
cs=0x2331;eip=0x0014ae; 	T(CWD);	// 79245 cwd ;~ 2331:14AE
cs=0x2331;eip=0x0014af; 	T(MOV(si, ax));	// 79246 mov     si, ax ;~ 2331:14AF
cs=0x2331;eip=0x0014b1; 	T(CMP(si, 1));	// 79247 cmp     si, 1 ;~ 2331:14B1
cs=0x2331;eip=0x0014b4; 	R(JA(loc_32dba));	// 79248 ja      short loc_32DBA ;~ 2331:14B4
cs=0x2331;eip=0x0014b6; 	T(LES(bx, *(dd*)((&unk_56fd6))));	// 79249 les     bx, dword ptr unk_56FD6 ;~ 2331:14B6
cs=0x2331;eip=0x0014ba; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 1));	// 79250 cmp     word ptr es:[bx+332h], 1 ;~ 2331:14BA
cs=0x2331;eip=0x0014c0; 	R(JNZ(loc_32dba));	// 79251 jnz     short loc_32DBA ;~ 2331:14C0
cs=0x2331;eip=0x0014c2; 	X(MOV(unk_56eb0, 2));	// 79252 mov     byte ptr unk_56EB0, 2 ;~ 2331:14C2
cs=0x2331;eip=0x0014c7; 	R(JMP(loc_32e62));	// 79253 jmp     loc_32E62 ;~ 2331:14C7
loc_32dba:
	// 9506 
cs=0x2331;eip=0x0014ca; 	T(MOV(ax, 0x7FFF));	// 79258 mov     ax, 7FFFh ;~ 2331:14CA
cs=0x2331;eip=0x0014cd; 	X(MOV(*(dw*)((&unk_54372)), ax));	// 79259 mov     word ptr unk_54372, ax ;~ 2331:14CD
cs=0x2331;eip=0x0014d0; 	X(MOV(*(dw*)((&unk_54370)), ax));	// 79260 mov     word ptr unk_54370, ax ;~ 2331:14D0
cs=0x2331;eip=0x0014d3; 	T(MOV(di, *(dw*)((&unk_47a98))));	// 79261 mov     di, word ptr unk_47A98 ;~ 2331:14D3
cs=0x2331;eip=0x0014d7; 	R(JMP(loc_32de0));	// 79262 jmp     short loc_32DE0 ;~ 2331:14D7
loc_32dc9:
	// 9507 
cs=0x2331;eip=0x0014d9; 	T(MOV(dx, *(dw*)((&unk_47a9e))));	// 79266 mov     dx, word ptr unk_47A9E ;~ 2331:14D9
cs=0x2331;eip=0x0014dd; 	T(MOV(ax, di));	// 79267 mov     ax, di ;~ 2331:14DD
cs=0x2331;eip=0x0014df; 	T(MOV(es, dx));	// 79268 mov     es, dx ;~ 2331:14DF
cs=0x2331;eip=0x0014e1; 	T(MOV(bx, ax));	// 79270 mov     bx, ax ;~ 2331:14E1
cs=0x2331;eip=0x0014e3; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 79271 push    word ptr es:[bx] ;~ 2331:14E3
cs=0x2331;eip=0x0014e6; 	X(PUSH(cs));	// 79272 push    cs ;~ 2331:14E6
cs=0x2331;eip=0x0014e7; 	R(CALL(sub_32e68,0));	// 79273 call    near ptr sub_32E68 ;~ 2331:14E7
cs=0x2331;eip=0x0014ea; 	T(ADD(sp, 2));	// 79274 add     sp, 2 ;~ 2331:14EA
cs=0x2331;eip=0x0014ed; 	T(ADD(di, 4));	// 79275 add     di, 4 ;~ 2331:14ED
loc_32de0:
	// 9508 
cs=0x2331;eip=0x0014f0; 	T(MOV(ax, *(dw*)((&unk_47a94))));	// 79278 mov     ax, word ptr unk_47A94 ;~ 2331:14F0
cs=0x2331;eip=0x0014f3; 	X(IMUL1_2(*(dw*)((&unk_47a96))));	// 79279 imul    word ptr unk_47A96 ;~ 2331:14F3
cs=0x2331;eip=0x0014f7; 	T(SHL(ax, 1));	// 79280 shl     ax, 1 ;~ 2331:14F7
cs=0x2331;eip=0x0014f9; 	T(SHL(ax, 1));	// 79281 shl     ax, 1 ;~ 2331:14F9
cs=0x2331;eip=0x0014fb; 	T(ADD(ax, *(dw*)((&unk_47a98))));	// 79282 add     ax, word ptr unk_47A98 ;~ 2331:14FB
cs=0x2331;eip=0x0014ff; 	T(CMP(ax, di));	// 79283 cmp     ax, di ;~ 2331:14FF
cs=0x2331;eip=0x001501; 	R(JA(loc_32dc9));	// 79284 ja      short loc_32DC9 ;~ 2331:1501
cs=0x2331;eip=0x001503; 	T(CMP(*(dw*)((&unk_54370)), si));	// 79285 cmp     word ptr unk_54370, si ;~ 2331:1503
cs=0x2331;eip=0x001507; 	R(JBE(loc_32dfd));	// 79286 jbe     short loc_32DFD ;~ 2331:1507
cs=0x2331;eip=0x001509; 	X(MOV(*(dw*)((&unk_54370)), si));	// 79287 mov     word ptr unk_54370, si ;~ 2331:1509
loc_32dfd:
	// 9509 
cs=0x2331;eip=0x00150d; 	T(MOV(ax, *(dw*)((&unk_54372))));	// 79290 mov     ax, word ptr unk_54372 ;~ 2331:150D
cs=0x2331;eip=0x001510; 	T(ADD(ax, 4));	// 79291 add     ax, 4 ;~ 2331:1510
cs=0x2331;eip=0x001513; 	T(CMP(ax, *(dw*)((&unk_54370))));	// 79292 cmp     ax, word ptr unk_54370 ;~ 2331:1513
cs=0x2331;eip=0x001517; 	R(JNC(loc_32e1a));	// 79293 jnb     short loc_32E1A ;~ 2331:1517
cs=0x2331;eip=0x001519; 	T(CMP(unk_56ff4, 0));	// 79294 cmp     byte ptr unk_56FF4, 0 ;~ 2331:1519
cs=0x2331;eip=0x00151e; 	R(JZ(loc_32e1a));	// 79295 jz      short loc_32E1A ;~ 2331:151E
cs=0x2331;eip=0x001520; 	R(CALLF(sub_29370,0));	// 79296 call    sub_29370 ;~ 2331:1520
cs=0x2331;eip=0x001525; 	T(CMP(ax, 0x40));	// 79297 cmp     ax, 40h ; '@' ;~ 2331:1525
cs=0x2331;eip=0x001528; 	R(JGE(loc_32e21));	// 79298 jge     short loc_32E21 ;~ 2331:1528
loc_32e1a:
	// 9510 
cs=0x2331;eip=0x00152a; 	X(MOV(unk_56eb0, 1));	// 79302 mov     byte ptr unk_56EB0, 1 ;~ 2331:152A
cs=0x2331;eip=0x00152f; 	R(JMP(loc_32e30));	// 79303 jmp     short loc_32E30 ;~ 2331:152F
loc_32e21:
	// 9511 
cs=0x2331;eip=0x001531; 	R(CALLF(sub_29370,0));	// 79307 call    sub_29370 ;~ 2331:1531
cs=0x2331;eip=0x001536; 	T(CMP(ax, 0x64));	// 79308 cmp     ax, 64h ; 'd' ;~ 2331:1536
cs=0x2331;eip=0x001539; 	R(JGE(loc_32e5b));	// 79309 jge     short loc_32E5B ;~ 2331:1539
cs=0x2331;eip=0x00153b; 	X(MOV(unk_56eb0, 0));	// 79310 mov     byte ptr unk_56EB0, 0 ;~ 2331:153B
loc_32e30:
	// 9512 
cs=0x2331;eip=0x001540; 	T(CMP(unk_56eb1, 1));	// 79313 cmp     byte ptr unk_56EB1, 1 ;~ 2331:1540
cs=0x2331;eip=0x001545; 	R(JZ(loc_32e3e));	// 79314 jz      short loc_32E3E ;~ 2331:1545
cs=0x2331;eip=0x001547; 	T(CMP(unk_56eb1, 2));	// 79315 cmp     byte ptr unk_56EB1, 2 ;~ 2331:1547
cs=0x2331;eip=0x00154c; 	R(JNZ(loc_32e4a));	// 79316 jnz     short loc_32E4A ;~ 2331:154C
loc_32e3e:
	// 9513 
cs=0x2331;eip=0x00154e; 	T(CMP(unk_56eb0, 2));	// 79319 cmp     byte ptr unk_56EB0, 2 ;~ 2331:154E
cs=0x2331;eip=0x001553; 	R(JNC(loc_32e4a));	// 79320 jnb     short loc_32E4A ;~ 2331:1553
cs=0x2331;eip=0x001555; 	X(MOV(unk_56eb1, 6));	// 79321 mov     byte ptr unk_56EB1, 6 ;~ 2331:1555
loc_32e4a:
	// 9514 
cs=0x2331;eip=0x00155a; 	T(CMP(unk_56eb1, 3));	// 79325 cmp     byte ptr unk_56EB1, 3 ;~ 2331:155A
cs=0x2331;eip=0x00155f; 	R(JC(loc_32e62));	// 79326 jb      short loc_32E62 ;~ 2331:155F
loc_32e51:
	// 9515 
cs=0x2331;eip=0x001561; 	T(SUB(al, al));	// 79330 sub     al, al ;~ 2331:1561
cs=0x2331;eip=0x001563; 	X(MOV(unk_56ed2, al));	// 79331 mov     byte ptr unk_56ED2, al ;~ 2331:1563
cs=0x2331;eip=0x001566; 	X(MOV(unk_56eb2, al));	// 79332 mov     byte ptr unk_56EB2, al ;~ 2331:1566
cs=0x2331;eip=0x001569; 	R(JMP(loc_32e62));	// 79333 jmp     short loc_32E62 ;~ 2331:1569
loc_32e5b:
	// 9516 
cs=0x2331;eip=0x00156b; 	X(MOV(unk_56eb1, 7));	// 79337 mov     byte ptr unk_56EB1, 7 ;~ 2331:156B
cs=0x2331;eip=0x001570; 	R(JMP(loc_32e51));	// 79338 jmp     short loc_32E51 ;~ 2331:1570
loc_32e62:
	// 9517 
cs=0x2331;eip=0x001572; 	X(POP(si));	// 79343 pop     si ;~ 2331:1572
cs=0x2331;eip=0x001573; 	X(POP(di));	// 79344 pop     di ;~ 2331:1573
cs=0x2331;eip=0x001574; 	T(MOV(sp, bp));	// 79345 mov     sp, bp ;~ 2331:1574
cs=0x2331;eip=0x001576; 	X(POP(bp));	// 79346 pop     bp ;~ 2331:1576
cs=0x2331;eip=0x001577; 	R(RETF(0));	// 79347 retf ;~ 2331:1577
sub_32e68:
	// 79355 
#undef var_a
#define var_a -0x0A
	// 79358 var_A           = dword ptr -0Ah ;~ 2331:1578
#undef var_6
#define var_6 -6
	// 79359 var_6           = word ptr -6 ;~ 2331:1578
#undef var_2
#define var_2 -2
	// 79360 var_2           = word ptr -2 ;~ 2331:1578
#undef arg_0
#define arg_0 6
	// 79361 arg_0           = word ptr  6 ;~ 2331:1578
cs=0x2331;eip=0x001578; 	X(PUSH(bp));	// 79363 push    bp ;~ 2331:1578
cs=0x2331;eip=0x001579; 	T(MOV(bp, sp));	// 79364 mov     bp, sp ;~ 2331:1579
cs=0x2331;eip=0x00157b; 	T(SUB(sp, 0x0A));	// 79365 sub     sp, 0Ah ;~ 2331:157B
cs=0x2331;eip=0x00157e; 	X(PUSH(di));	// 79366 push    di ;~ 2331:157E
cs=0x2331;eip=0x00157f; 	X(PUSH(si));	// 79367 push    si ;~ 2331:157F
cs=0x2331;eip=0x001580; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 79368 mov     si, [bp+arg_0] ;~ 2331:1580
cs=0x2331;eip=0x001583; 	R(JMP(loc_32efc));	// 79369 jmp     loc_32EFC ;~ 2331:1583
loc_32e76:
	// 9518 
cs=0x2331;eip=0x001586; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 79373 mov     ax, [bp+var_6] ;~ 2331:1586
cs=0x2331;eip=0x001589; 	T(AND(ax, 0x801));	// 79374 and     ax, 801h ;~ 2331:1589
cs=0x2331;eip=0x00158c; 	T(CMP(ax, 0x801));	// 79375 cmp     ax, 801h ;~ 2331:158C
cs=0x2331;eip=0x00158f; 	R(JNZ(loc_32eee));	// 79376 jnz     short loc_32EEE ;~ 2331:158F
cs=0x2331;eip=0x001591; 	X(PUSH(si));	// 79377 push    si ;~ 2331:1591
cs=0x2331;eip=0x001592; 	R(CALLF(sub_17a0c,0));	// 79378 call    sub_17A0C ;~ 2331:1592
cs=0x2331;eip=0x001597; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 79379 mov     [bp+var_2], ax ;~ 2331:1597
cs=0x2331;eip=0x00159a; 	T(MOV(bx, ax));	// 79380 mov     bx, ax ;~ 2331:159A
cs=0x2331;eip=0x00159c; 	T(TEST(*(raddr(ds,bx+0x16)), 4));	// 79381 test    byte ptr [bx+16h], 4 ;~ 2331:159C
cs=0x2331;eip=0x0015a0; 	R(JZ(loc_32eee));	// 79382 jz      short loc_32EEE ;~ 2331:15A0
cs=0x2331;eip=0x0015a2; 	T(MOV(dx, *(dw*)((&unk_47a9a))));	// 79383 mov     dx, word ptr unk_47A9A ;~ 2331:15A2
cs=0x2331;eip=0x0015a6; 	T(MOV(ax, si));	// 79384 mov     ax, si ;~ 2331:15A6
cs=0x2331;eip=0x0015a8; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a))), ax));	// 79385 mov     word ptr [bp+var_A], ax ;~ 2331:15A8
cs=0x2331;eip=0x0015ab; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a+2))), dx));	// 79386 mov     word ptr [bp+var_A+2], dx ;~ 2331:15AB
cs=0x2331;eip=0x0015ae; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_a))));	// 79387 les     bx, [bp+var_A] ;~ 2331:15AE
cs=0x2331;eip=0x0015b1; 	X(PUSH(*(dw*)(raddr(es,bx+8))));	// 79389 push    word ptr es:[bx+8] ;~ 2331:15B1
cs=0x2331;eip=0x0015b5; 	X(PUSH(*(dw*)(raddr(es,bx+6))));	// 79390 push    word ptr es:[bx+6] ;~ 2331:15B5
cs=0x2331;eip=0x0015b9; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 79391 push    word ptr es:[bx+10h] ;~ 2331:15B9
cs=0x2331;eip=0x0015bd; 	X(PUSH(*(dw*)(raddr(es,bx+0x0E))));	// 79392 push    word ptr es:[bx+0Eh] ;~ 2331:15BD
cs=0x2331;eip=0x0015c1; 	T(LES(bx, *(dd*)((&unk_47ad0))));	// 79393 les     bx, dword ptr unk_47AD0 ;~ 2331:15C1
cs=0x2331;eip=0x0015c5; 	X(PUSH(*(dw*)(raddr(es,bx+8))));	// 79394 push    word ptr es:[bx+8] ;~ 2331:15C5
cs=0x2331;eip=0x0015c9; 	X(PUSH(*(dw*)(raddr(es,bx+6))));	// 79395 push    word ptr es:[bx+6] ;~ 2331:15C9
cs=0x2331;eip=0x0015cd; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 79396 push    word ptr es:[bx+10h] ;~ 2331:15CD
cs=0x2331;eip=0x0015d1; 	X(PUSH(*(dw*)(raddr(es,bx+0x0E))));	// 79397 push    word ptr es:[bx+0Eh] ;~ 2331:15D1
cs=0x2331;eip=0x0015d5; 	R(CALLF(sub_1a264,0));	// 79398 call    sub_1A264 ;~ 2331:15D5
cs=0x2331;eip=0x0015da; 	T(MOV(ax, dx));	// 79399 mov     ax, dx ;~ 2331:15DA
cs=0x2331;eip=0x0015dc; 	T(CWD);	// 79400 cwd ;~ 2331:15DC
cs=0x2331;eip=0x0015dd; 	T(MOV(di, ax));	// 79401 mov     di, ax ;~ 2331:15DD
cs=0x2331;eip=0x0015df; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 79402 mov     bx, [bp+var_2] ;~ 2331:15DF
cs=0x2331;eip=0x0015e2; 	T(TEST(*(raddr(ds,bx+0x16)), 2));	// 79403 test    byte ptr [bx+16h], 2 ;~ 2331:15E2
cs=0x2331;eip=0x0015e6; 	R(JZ(loc_32ee4));	// 79404 jz      short loc_32EE4 ;~ 2331:15E6
cs=0x2331;eip=0x0015e8; 	T(CMP(*(dw*)((&unk_54372)), di));	// 79405 cmp     word ptr unk_54372, di ;~ 2331:15E8
cs=0x2331;eip=0x0015ec; 	R(JBE(loc_32eee));	// 79406 jbe     short loc_32EEE ;~ 2331:15EC
cs=0x2331;eip=0x0015ee; 	X(MOV(*(dw*)((&unk_54372)), di));	// 79407 mov     word ptr unk_54372, di ;~ 2331:15EE
cs=0x2331;eip=0x0015f2; 	R(JMP(loc_32eee));	// 79408 jmp     short loc_32EEE ;~ 2331:15F2
loc_32ee4:
	// 9519 
cs=0x2331;eip=0x0015f4; 	T(CMP(*(dw*)((&unk_54370)), di));	// 79412 cmp     word ptr unk_54370, di ;~ 2331:15F4
cs=0x2331;eip=0x0015f8; 	R(JBE(loc_32eee));	// 79413 jbe     short loc_32EEE ;~ 2331:15F8
cs=0x2331;eip=0x0015fa; 	X(MOV(*(dw*)((&unk_54370)), di));	// 79414 mov     word ptr unk_54370, di ;~ 2331:15FA
loc_32eee:
	// 9520 
cs=0x2331;eip=0x0015fe; 	T(MOV(dx, *(dw*)((&unk_47a9a))));	// 79418 mov     dx, word ptr unk_47A9A ;~ 2331:15FE
cs=0x2331;eip=0x001602; 	T(MOV(ax, si));	// 79419 mov     ax, si ;~ 2331:1602
cs=0x2331;eip=0x001604; 	T(MOV(es, dx));	// 79420 mov     es, dx ;~ 2331:1604
cs=0x2331;eip=0x001606; 	T(MOV(bx, ax));	// 79422 mov     bx, ax ;~ 2331:1606
cs=0x2331;eip=0x001608; 	T(MOV(si, *(dw*)(raddr(es,bx+4))));	// 79423 mov     si, es:[bx+4] ;~ 2331:1608
loc_32efc:
	// 9521 
cs=0x2331;eip=0x00160c; 	T(OR(si, si));	// 79426 or      si, si ;~ 2331:160C
cs=0x2331;eip=0x00160e; 	R(JZ(loc_32f27));	// 79427 jz      short loc_32F27 ;~ 2331:160E
cs=0x2331;eip=0x001610; 	T(MOV(dx, *(dw*)((&unk_47a9a))));	// 79428 mov     dx, word ptr unk_47A9A ;~ 2331:1610
cs=0x2331;eip=0x001614; 	T(MOV(ax, si));	// 79429 mov     ax, si ;~ 2331:1614
cs=0x2331;eip=0x001616; 	T(MOV(es, dx));	// 79430 mov     es, dx ;~ 2331:1616
cs=0x2331;eip=0x001618; 	T(MOV(bx, ax));	// 79431 mov     bx, ax ;~ 2331:1618
cs=0x2331;eip=0x00161a; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 79432 mov     ax, es:[bx+2] ;~ 2331:161A
cs=0x2331;eip=0x00161e; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 79433 mov     [bp+var_6], ax ;~ 2331:161E
cs=0x2331;eip=0x001621; 	T(TEST(*(db*)(raddr(ss,bp+var_6)), 0x20));	// 79434 test    byte ptr [bp+var_6], 20h ;~ 2331:1621
cs=0x2331;eip=0x001625; 	R(JNZ(loc_32f1a));	// 79435 jnz     short loc_32F1A ;~ 2331:1625
cs=0x2331;eip=0x001627; 	R(JMP(loc_32e76));	// 79436 jmp     loc_32E76 ;~ 2331:1627
loc_32f1a:
	// 9522 
cs=0x2331;eip=0x00162a; 	X(PUSH(*(dw*)(raddr(es,bx+0x18))));	// 79440 push    word ptr es:[bx+18h] ;~ 2331:162A
cs=0x2331;eip=0x00162e; 	X(PUSH(cs));	// 79441 push    cs ;~ 2331:162E
cs=0x2331;eip=0x00162f; 	R(CALL(sub_32e68,0));	// 79442 call    near ptr sub_32E68 ;~ 2331:162F
cs=0x2331;eip=0x001632; 	T(ADD(sp, 2));	// 79443 add     sp, 2 ;~ 2331:1632
cs=0x2331;eip=0x001635; 	R(JMP(loc_32eee));	// 79444 jmp     short loc_32EEE ;~ 2331:1635
loc_32f27:
	// 9523 
cs=0x2331;eip=0x001637; 	X(POP(si));	// 79448 pop     si ;~ 2331:1637
cs=0x2331;eip=0x001638; 	X(POP(di));	// 79449 pop     di ;~ 2331:1638
cs=0x2331;eip=0x001639; 	T(MOV(sp, bp));	// 79450 mov     sp, bp ;~ 2331:1639
cs=0x2331;eip=0x00163b; 	X(POP(bp));	// 79451 pop     bp ;~ 2331:163B
cs=0x2331;eip=0x00163c; 	R(RETF(0));	// 79452 retf ;~ 2331:163C
sub_32f2d:
	// 79459 
cs=0x2331;eip=0x00163d; 	T(MOV(ax, 0x18));	// 79461 mov     ax, 18h ;~ 2331:163D
cs=0x2331;eip=0x001640; 	X(PUSH(ax));	// 79462 push    ax ;~ 2331:1640
cs=0x2331;eip=0x001641; 	T(MOV(ax, 2));	// 79463 mov     ax, 2 ;~ 2331:1641
cs=0x2331;eip=0x001644; 	X(PUSH(ax));	// 79464 push    ax ;~ 2331:1644
cs=0x2331;eip=0x001645; 	T(MOV(ax, 0x0CB));	// 79465 mov     ax, 0CBh ; 'À' ;~ 2331:1645
cs=0x2331;eip=0x001648; 	X(PUSH(ax));	// 79466 push    ax ;~ 2331:1648
cs=0x2331;eip=0x001649; 	T(MOV(ax, 0x0B8));	// 79467 mov     ax, 0B8h ; '∏' ;~ 2331:1649
cs=0x2331;eip=0x00164c; 	X(PUSH(ax));	// 79468 push    ax ;~ 2331:164C
cs=0x2331;eip=0x00164d; 	T(MOV(ax, 0x0FF0F));	// 79469 mov     ax, 0FF0Fh ;~ 2331:164D
cs=0x2331;eip=0x001650; 	X(PUSH(ax));	// 79470 push    ax ;~ 2331:1650
cs=0x2331;eip=0x001651; 	R(CALLF(sub_233c4,0));	// 79471 call    sub_233C4 ;~ 2331:1651
cs=0x2331;eip=0x001656; 	T(MOV(ax, 0x0AF));	// 79472 mov     ax, 0AFh ; 'Ø' ;~ 2331:1656
cs=0x2331;eip=0x001659; 	X(PUSH(ax));	// 79473 push    ax ;~ 2331:1659
cs=0x2331;eip=0x00165a; 	T(MOV(ax, 0x0BA));	// 79474 mov     ax, 0BAh ; '∫' ;~ 2331:165A
cs=0x2331;eip=0x00165d; 	X(PUSH(ax));	// 79475 push    ax ;~ 2331:165D
cs=0x2331;eip=0x00165e; 	T(MOV(ax, 0x3D));	// 79476 mov     ax, 3Dh ; '=' ;~ 2331:165E
cs=0x2331;eip=0x001661; 	X(PUSH(ax));	// 79477 push    ax ;~ 2331:1661
cs=0x2331;eip=0x001662; 	T(MOV(ax, 9));	// 79478 mov     ax, 9 ;~ 2331:1662
cs=0x2331;eip=0x001665; 	X(PUSH(ax));	// 79479 push    ax ;~ 2331:1665
cs=0x2331;eip=0x001666; 	T(MOV(ax, 0x0FF0F));	// 79480 mov     ax, 0FF0Fh ;~ 2331:1666
cs=0x2331;eip=0x001669; 	X(PUSH(ax));	// 79481 push    ax ;~ 2331:1669
cs=0x2331;eip=0x00166a; 	R(CALLF(sub_233c4,0));	// 79482 call    sub_233C4 ;~ 2331:166A
cs=0x2331;eip=0x00166f; 	T(MOV(ax, 0x0E3));	// 79483 mov     ax, 0E3h ; '„' ;~ 2331:166F
cs=0x2331;eip=0x001672; 	X(PUSH(ax));	// 79484 push    ax ;~ 2331:1672
cs=0x2331;eip=0x001673; 	T(MOV(ax, 0x18));	// 79485 mov     ax, 18h ;~ 2331:1673
cs=0x2331;eip=0x001676; 	X(PUSH(ax));	// 79486 push    ax ;~ 2331:1676
cs=0x2331;eip=0x001677; 	T(MOV(ax, 9));	// 79487 mov     ax, 9 ;~ 2331:1677
cs=0x2331;eip=0x00167a; 	X(PUSH(ax));	// 79488 push    ax ;~ 2331:167A
cs=0x2331;eip=0x00167b; 	T(MOV(ax, 0x0A2));	// 79489 mov     ax, 0A2h ; '¢' ;~ 2331:167B
cs=0x2331;eip=0x00167e; 	X(PUSH(ax));	// 79490 push    ax ;~ 2331:167E
cs=0x2331;eip=0x00167f; 	T(MOV(ax, 0x0FF0F));	// 79491 mov     ax, 0FF0Fh ;~ 2331:167F
cs=0x2331;eip=0x001682; 	X(PUSH(ax));	// 79492 push    ax ;~ 2331:1682
cs=0x2331;eip=0x001683; 	R(CALLF(sub_233c4,0));	// 79493 call    sub_233C4 ;~ 2331:1683
cs=0x2331;eip=0x001688; 	R(RETN(0));	// 79494 retn ;~ 2331:1688
sub_32f79:
	// 79502 
#undef var_2
#define var_2 -2
	// 79505 var_2           = word ptr -2 ;~ 2331:1689
#undef arg_0
#define arg_0 6
	// 79506 arg_0           = word ptr  6 ;~ 2331:1689
#undef arg_2
#define arg_2 8
	// 79507 arg_2           = word ptr  8 ;~ 2331:1689
cs=0x2331;eip=0x001689; 	X(PUSH(bp));	// 79509 push    bp ;~ 2331:1689
cs=0x2331;eip=0x00168a; 	T(MOV(bp, sp));	// 79510 mov     bp, sp ;~ 2331:168A
cs=0x2331;eip=0x00168c; 	T(SUB(sp, 0x2A));	// 79511 sub     sp, 2Ah ;~ 2331:168C
cs=0x2331;eip=0x00168f; 	R(CALL(sub_32f2d,0));	// 79512 call    sub_32F2D ;~ 2331:168F
cs=0x2331;eip=0x001692; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 79513 push    [bp+arg_0] ;~ 2331:1692
cs=0x2331;eip=0x001695; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 79514 push    [bp+arg_2] ;~ 2331:1695
cs=0x2331;eip=0x001698; 	R(CALL(sub_32fc4,0));	// 79515 call    sub_32FC4 ;~ 2331:1698
cs=0x2331;eip=0x00169b; 	T(MOV(ax, 1));	// 79516 mov     ax, 1 ;~ 2331:169B
cs=0x2331;eip=0x00169e; 	X(PUSH(ax));	// 79517 push    ax ;~ 2331:169E
cs=0x2331;eip=0x00169f; 	R(CALL(sub_33056,0));	// 79518 call    sub_33056 ;~ 2331:169F
cs=0x2331;eip=0x0016a2; 	X(PUSH(ax));	// 79519 push    ax ;~ 2331:16A2
cs=0x2331;eip=0x0016a3; 	T(MOV(ax, 0x20));	// 79520 mov     ax, 20h ; ' ' ;~ 2331:16A3
cs=0x2331;eip=0x0016a6; 	X(PUSH(ax));	// 79521 push    ax ;~ 2331:16A6
cs=0x2331;eip=0x0016a7; 	T(MOV(ax, 4));	// 79522 mov     ax, 4 ;~ 2331:16A7
cs=0x2331;eip=0x0016aa; 	X(PUSH(ax));	// 79523 push    ax ;~ 2331:16AA
cs=0x2331;eip=0x0016ab; 	R(CALLF(sub_2dce4,0));	// 79524 call    sub_2DCE4 ;~ 2331:16AB
cs=0x2331;eip=0x0016b0; 	T(MOV(ax, 2));	// 79525 mov     ax, 2 ;~ 2331:16B0
cs=0x2331;eip=0x0016b3; 	X(PUSH(ax));	// 79526 push    ax ;~ 2331:16B3
cs=0x2331;eip=0x0016b4; 	R(CALL(sub_33056,0));	// 79527 call    sub_33056 ;~ 2331:16B4
cs=0x2331;eip=0x0016b7; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 79528 mov     [bp+var_2], ax ;~ 2331:16B7
cs=0x2331;eip=0x0016ba; 	X(PUSH(ax));	// 79529 push    ax ;~ 2331:16BA
cs=0x2331;eip=0x0016bb; 	X(PUSH(ax));	// 79530 push    ax ;~ 2331:16BB
cs=0x2331;eip=0x0016bc; 	R(CALLF(sub_2dcb2,0));	// 79531 call    sub_2DCB2 ;~ 2331:16BC
cs=0x2331;eip=0x0016c1; 	T(SUB(ax, 0x0DF));	// 79532 sub     ax, 0DFh ; 'ﬂ' ;~ 2331:16C1
cs=0x2331;eip=0x0016c4; 	T(NEG(ax));	// 79533 neg     ax ;~ 2331:16C4
cs=0x2331;eip=0x0016c6; 	X(PUSH(ax));	// 79534 push    ax ;~ 2331:16C6
cs=0x2331;eip=0x0016c7; 	T(MOV(ax, 4));	// 79535 mov     ax, 4 ;~ 2331:16C7
cs=0x2331;eip=0x0016ca; 	X(PUSH(ax));	// 79536 push    ax ;~ 2331:16CA
cs=0x2331;eip=0x0016cb; 	R(CALLF(sub_2dce4,0));	// 79537 call    sub_2DCE4 ;~ 2331:16CB
cs=0x2331;eip=0x0016d0; 	T(MOV(sp, bp));	// 79538 mov     sp, bp ;~ 2331:16D0
cs=0x2331;eip=0x0016d2; 	X(POP(bp));	// 79539 pop     bp ;~ 2331:16D2
cs=0x2331;eip=0x0016d3; 	R(RETF(0));	// 79540 retf ;~ 2331:16D3
sub_32fc4:
	// 79548 
#undef var_28
#define var_28 -0x28
	// 79551 var_28          = byte ptr -28h ;~ 2331:16D4
#undef arg_0
#define arg_0 4
	// 79552 arg_0           = word ptr  4 ;~ 2331:16D4
#undef arg_2
#define arg_2 6
	// 79553 arg_2           = word ptr  6 ;~ 2331:16D4
cs=0x2331;eip=0x0016d4; 	X(PUSH(bp));	// 79555 push    bp ;~ 2331:16D4
cs=0x2331;eip=0x0016d5; 	T(MOV(bp, sp));	// 79556 mov     bp, sp ;~ 2331:16D5
cs=0x2331;eip=0x0016d7; 	T(SUB(sp, 0x2A));	// 79557 sub     sp, 2Ah ;~ 2331:16D7
cs=0x2331;eip=0x0016da; 	X(PUSH(di));	// 79558 push    di ;~ 2331:16DA
cs=0x2331;eip=0x0016db; 	X(PUSH(si));	// 79559 push    si ;~ 2331:16DB
cs=0x2331;eip=0x0016dc; 	R(CALL(sub_330a3,0));	// 79560 call    sub_330A3 ;~ 2331:16DC
cs=0x2331;eip=0x0016df; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 79561 push    [bp+arg_0] ;~ 2331:16DF
cs=0x2331;eip=0x0016e2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 79562 mov     ax, [bp+arg_2] ;~ 2331:16E2
cs=0x2331;eip=0x0016e5; 	T(INC(ax));	// 79563 inc     ax ;~ 2331:16E5
cs=0x2331;eip=0x0016e6; 	X(PUSH(ax));	// 79564 push    ax ;~ 2331:16E6
cs=0x2331;eip=0x0016e7; 	T(MOV(ax, 3));	// 79565 mov     ax, 3 ;~ 2331:16E7
cs=0x2331;eip=0x0016ea; 	X(PUSH(ax));	// 79566 push    ax ;~ 2331:16EA
cs=0x2331;eip=0x0016eb; 	R(CALL(sub_33056,0));	// 79567 call    sub_33056 ;~ 2331:16EB
cs=0x2331;eip=0x0016ee; 	X(PUSH(ax));	// 79568 push    ax ;~ 2331:16EE
cs=0x2331;eip=0x0016ef; 	T(ax = bp+var_28);	// 79569 lea     ax, [bp+var_28] ;~ 2331:16EF
cs=0x2331;eip=0x0016f2; 	X(PUSH(ax));	// 79570 push    ax ;~ 2331:16F2
cs=0x2331;eip=0x0016f3; 	R(CALLF(sub_2f1d9,0));	// 79571 call    sub_2F1D9 ;~ 2331:16F3
cs=0x2331;eip=0x0016f8; 	T(ADD(sp, 8));	// 79572 add     sp, 8 ;~ 2331:16F8
cs=0x2331;eip=0x0016fb; 	T(ax = bp+var_28);	// 79573 lea     ax, [bp+var_28] ;~ 2331:16FB
cs=0x2331;eip=0x0016fe; 	X(PUSH(ax));	// 79574 push    ax ;~ 2331:16FE
cs=0x2331;eip=0x0016ff; 	R(CALLF(sub_2dcb2,0));	// 79575 call    sub_2DCB2 ;~ 2331:16FF
cs=0x2331;eip=0x001704; 	T(MOV(si, ax));	// 79576 mov     si, ax ;~ 2331:1704
cs=0x2331;eip=0x001706; 	T(MOV(ax, 0x0DF));	// 79577 mov     ax, 0DFh ; 'ﬂ' ;~ 2331:1706
cs=0x2331;eip=0x001709; 	T(SUB(ax, si));	// 79578 sub     ax, si ;~ 2331:1709
cs=0x2331;eip=0x00170b; 	T(MOV(di, ax));	// 79579 mov     di, ax ;~ 2331:170B
cs=0x2331;eip=0x00170d; 	X(PUSH(di));	// 79580 push    di ;~ 2331:170D
cs=0x2331;eip=0x00170e; 	T(MOV(ax, 0x0BB));	// 79581 mov     ax, 0BBh ; 'ª' ;~ 2331:170E
cs=0x2331;eip=0x001711; 	X(PUSH(ax));	// 79582 push    ax ;~ 2331:1711
cs=0x2331;eip=0x001712; 	X(PUSH(si));	// 79583 push    si ;~ 2331:1712
cs=0x2331;eip=0x001713; 	T(MOV(ax, 6));	// 79584 mov     ax, 6 ;~ 2331:1713
cs=0x2331;eip=0x001716; 	X(PUSH(ax));	// 79585 push    ax ;~ 2331:1716
cs=0x2331;eip=0x001717; 	T(MOV(ax, 0x0FF0F));	// 79586 mov     ax, 0FF0Fh ;~ 2331:1717
cs=0x2331;eip=0x00171a; 	X(PUSH(ax));	// 79587 push    ax ;~ 2331:171A
cs=0x2331;eip=0x00171b; 	R(CALLF(sub_233c4,0));	// 79588 call    sub_233C4 ;~ 2331:171B
cs=0x2331;eip=0x001720; 	T(ax = bp+var_28);	// 79589 lea     ax, [bp+var_28] ;~ 2331:1720
cs=0x2331;eip=0x001723; 	X(PUSH(ax));	// 79590 push    ax ;~ 2331:1723
cs=0x2331;eip=0x001724; 	X(PUSH(di));	// 79591 push    di ;~ 2331:1724
cs=0x2331;eip=0x001725; 	T(MOV(ax, 0x0BB));	// 79592 mov     ax, 0BBh ; 'ª' ;~ 2331:1725
cs=0x2331;eip=0x001728; 	X(PUSH(ax));	// 79593 push    ax ;~ 2331:1728
cs=0x2331;eip=0x001729; 	R(CALLF(sub_2dce4,0));	// 79594 call    sub_2DCE4 ;~ 2331:1729
cs=0x2331;eip=0x00172e; 	X(POP(si));	// 79595 pop     si ;~ 2331:172E
cs=0x2331;eip=0x00172f; 	X(POP(di));	// 79596 pop     di ;~ 2331:172F
cs=0x2331;eip=0x001730; 	T(MOV(sp, bp));	// 79597 mov     sp, bp ;~ 2331:1730
cs=0x2331;eip=0x001732; 	X(POP(bp));	// 79598 pop     bp ;~ 2331:1732
cs=0x2331;eip=0x001733; 	R(RETN(4));	// 79599 retn    4 ;~ 2331:1733
sub_33026:
	// 79607 
#undef var_2
#define var_2 -2
	// 79610 var_2           = byte ptr -2 ;~ 2331:1736
cs=0x2331;eip=0x001736; 	X(PUSH(bp));	// 79612 push    bp ;~ 2331:1736
cs=0x2331;eip=0x001737; 	T(MOV(bp, sp));	// 79613 mov     bp, sp ;~ 2331:1737
cs=0x2331;eip=0x001739; 	T(SUB(sp, 2));	// 79614 sub     sp, 2 ;~ 2331:1739
cs=0x2331;eip=0x00173c; 	T(MOV(ax, 0x2608));	// 79615 mov     ax, 2608h ;~ 2331:173C
cs=0x2331;eip=0x00173f; 	X(PUSH(ax));	// 79616 push    ax ;~ 2331:173F
cs=0x2331;eip=0x001740; 	T(ax = bp+var_2);	// 79617 lea     ax, [bp+var_2] ;~ 2331:1740
cs=0x2331;eip=0x001743; 	X(PUSH(ax));	// 79618 push    ax ;~ 2331:1743
cs=0x2331;eip=0x001744; 	R(CALLF(sub_31643,0));	// 79619 call    sub_31643 ;~ 2331:1744
cs=0x2331;eip=0x001749; 	X(MOV(*(dw*)((&unk_54374)), ax));	// 79620 mov     word ptr unk_54374, ax ;~ 2331:1749
cs=0x2331;eip=0x00174c; 	X(MOV(*(dw*)((&unk_54376)), dx));	// 79621 mov     word ptr unk_54376, dx ;~ 2331:174C
cs=0x2331;eip=0x001750; 	T(MOV(sp, bp));	// 79622 mov     sp, bp ;~ 2331:1750
cs=0x2331;eip=0x001752; 	X(POP(bp));	// 79623 pop     bp ;~ 2331:1752
cs=0x2331;eip=0x001753; 	R(RETF(0));	// 79624 retf ;~ 2331:1753
sub_33044:
	// 79631 
cs=0x2331;eip=0x001754; 	X(PUSH(*(dw*)((&unk_54376))));	// 79633 push    word ptr unk_54376 ;~ 2331:1754
cs=0x2331;eip=0x001758; 	R(CALLF(sub_2397c,0));	// 79634 call    sub_2397C ;~ 2331:1758
cs=0x2331;eip=0x00175d; 	T(SUB(ax, ax));	// 79635 sub     ax, ax ;~ 2331:175D
cs=0x2331;eip=0x00175f; 	X(MOV(*(dw*)((&unk_54376)), ax));	// 79636 mov     word ptr unk_54376, ax ;~ 2331:175F
cs=0x2331;eip=0x001762; 	X(MOV(*(dw*)((&unk_54374)), ax));	// 79637 mov     word ptr unk_54374, ax ;~ 2331:1762
cs=0x2331;eip=0x001765; 	R(RETF(0));	// 79638 retf ;~ 2331:1765
sub_33056:
	// 79646 
#undef var_4
#define var_4 -4
	// 79649 var_4           = dword ptr -4 ;~ 2331:1766
#undef arg_0
#define arg_0 4
	// 79650 arg_0           = word ptr  4 ;~ 2331:1766
cs=0x2331;eip=0x001766; 	X(PUSH(bp));	// 79652 push    bp ;~ 2331:1766
cs=0x2331;eip=0x001767; 	T(MOV(bp, sp));	// 79653 mov     bp, sp ;~ 2331:1767
cs=0x2331;eip=0x001769; 	T(SUB(sp, 4));	// 79654 sub     sp, 4 ;~ 2331:1769
cs=0x2331;eip=0x00176c; 	X(PUSH(di));	// 79655 push    di ;~ 2331:176C
cs=0x2331;eip=0x00176d; 	T(MOV(ax, *(dw*)((&unk_54374))));	// 79656 mov     ax, word ptr unk_54374 ;~ 2331:176D
cs=0x2331;eip=0x001770; 	T(MOV(dx, *(dw*)((&unk_54376))));	// 79657 mov     dx, word ptr unk_54376 ;~ 2331:1770
cs=0x2331;eip=0x001774; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 79658 mov     word ptr [bp+var_4], ax ;~ 2331:1774
cs=0x2331;eip=0x001777; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 79659 mov     word ptr [bp+var_4+2], dx ;~ 2331:1777
cs=0x2331;eip=0x00177a; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 79660 cmp     [bp+arg_0], 0 ;~ 2331:177A
cs=0x2331;eip=0x00177e; 	R(JLE(loc_3308b));	// 79661 jle     short loc_3308B ;~ 2331:177E
cs=0x2331;eip=0x001780; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_0))));	// 79662 mov     cx, [bp+arg_0] ;~ 2331:1780
cs=0x2331;eip=0x001783; 	T(LES(di, *(dd*)(raddr(ss,bp+var_4))));	// 79663 les     di, [bp+var_4] ;~ 2331:1783
loc_33076:
	// 9524 
cs=0x2331;eip=0x001786; 	T(CMP(*(raddr(es,di)), 0));	// 79667 cmp     byte ptr es:[di], 0 ;~ 2331:1786
cs=0x2331;eip=0x00178a; 	R(JNZ(loc_3307d));	// 79668 jnz     short loc_3307D ;~ 2331:178A
cs=0x2331;eip=0x00178c; 	T(DEC(cx));	// 79669 dec     cx ;~ 2331:178C
loc_3307d:
	// 9525 
cs=0x2331;eip=0x00178d; 	T(INC(di));	// 79672 inc     di ;~ 2331:178D
cs=0x2331;eip=0x00178e; 	T(OR(cx, cx));	// 79673 or      cx, cx ;~ 2331:178E
cs=0x2331;eip=0x001790; 	R(JG(loc_33076));	// 79674 jg      short loc_33076 ;~ 2331:1790
cs=0x2331;eip=0x001792; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), di));	// 79675 mov     word ptr [bp+var_4], di ;~ 2331:1792
cs=0x2331;eip=0x001795; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), es));	// 79676 mov     word ptr [bp+var_4+2], es ;~ 2331:1795
cs=0x2331;eip=0x001798; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), cx));	// 79677 mov     [bp+arg_0], cx ;~ 2331:1798
loc_3308b:
	// 9526 
cs=0x2331;eip=0x00179b; 	T(MOV(ax, 0x0C9C8));	// 79680 mov     ax, 0C9C8h ;~ 2331:179B
cs=0x2331;eip=0x00179e; 	X(PUSH(ax));	// 79681 push    ax ;~ 2331:179E
cs=0x2331;eip=0x00179f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 79682 push    word ptr [bp+var_4+2] ;~ 2331:179F
cs=0x2331;eip=0x0017a2; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 79683 push    word ptr [bp+var_4] ;~ 2331:17A2
cs=0x2331;eip=0x0017a5; 	X(PUSH(cs));	// 79684 push    cs ;~ 2331:17A5
cs=0x2331;eip=0x0017a6; 	R(CALL(sub_318f0,0));	// 79685 call    near ptr sub_318F0 ;~ 2331:17A6
cs=0x2331;eip=0x0017a9; 	T(MOV(ax, 0x0C9C8));	// 79686 mov     ax, 0C9C8h ;~ 2331:17A9
cs=0x2331;eip=0x0017ac; 	X(POP(di));	// 79687 pop     di ;~ 2331:17AC
cs=0x2331;eip=0x0017ad; 	T(MOV(sp, bp));	// 79688 mov     sp, bp ;~ 2331:17AD
cs=0x2331;eip=0x0017af; 	X(POP(bp));	// 79689 pop     bp ;~ 2331:17AF
cs=0x2331;eip=0x0017b0; 	R(RETN(2));	// 79690 retn    2 ;~ 2331:17B0
sub_330a3:
	// 79697 
cs=0x2331;eip=0x0017b3; 	R(CALL(sub_3317c,0));	// 79699 call    sub_3317C ;~ 2331:17B3
cs=0x2331;eip=0x0017b6; 	R(CALL(sub_33161,0));	// 79700 call    sub_33161 ;~ 2331:17B6
cs=0x2331;eip=0x0017b9; 	R(RETN(0));	// 79701 retn ;~ 2331:17B9
sub_330aa:
	// 79708 
cs=0x2331;eip=0x0017ba; 	R(CALL(sub_3318a,0));	// 79709 call    sub_3318A ;~ 2331:17BA
cs=0x2331;eip=0x0017bd; 	X(MOV(*(dw*)((&unk_47bde)), 0x0FF00));	// 79710 mov     word ptr unk_47BDE, 0FF00h ;~ 2331:17BD
cs=0x2331;eip=0x0017c3; 	X(MOV(unk_56885, 0));	// 79711 mov     byte ptr unk_56885, 0 ;~ 2331:17C3
cs=0x2331;eip=0x0017c8; 	R(RETN(0));	// 79712 retn ;~ 2331:17C8
sub_330b9:
	// 79720 
cs=0x2331;eip=0x0017c9; 	X(PUSH(bp));	// 79722 push    bp ;~ 2331:17C9
cs=0x2331;eip=0x0017ca; 	T(MOV(bp, sp));	// 79723 mov     bp, sp ;~ 2331:17CA
cs=0x2331;eip=0x0017cc; 	T(SUB(sp, 2));	// 79724 sub     sp, 2 ;~ 2331:17CC
cs=0x2331;eip=0x0017cf; 	X(PUSH(si));	// 79725 push    si ;~ 2331:17CF
cs=0x2331;eip=0x0017d0; 	R(CALL(sub_3317c,0));	// 79726 call    sub_3317C ;~ 2331:17D0
cs=0x2331;eip=0x0017d3; 	R(CALLF(sub_203b0,0));	// 79727 call    sub_203B0 ;~ 2331:17D3
cs=0x2331;eip=0x0017d8; 	R(CALL(sub_328e5,0));	// 79728 call    sub_328E5 ;~ 2331:17D8
cs=0x2331;eip=0x0017db; 	X(MOV(*(dw*)((&unk_47bde)), 0x0FF00));	// 79729 mov     word ptr unk_47BDE, 0FF00h ;~ 2331:17DB
cs=0x2331;eip=0x0017e1; 	X(MOV(unk_56885, 0));	// 79730 mov     byte ptr unk_56885, 0 ;~ 2331:17E1
cs=0x2331;eip=0x0017e6; 	T(MOV(al, unk_57043));	// 79731 mov     al, byte ptr unk_57043 ;~ 2331:17E6
cs=0x2331;eip=0x0017e9; 	T(SUB(ah, ah));	// 79732 sub     ah, ah ;~ 2331:17E9
cs=0x2331;eip=0x0017eb; 	T(ADD(ax, 0x5D));	// 79733 add     ax, 5Dh ; ']' ;~ 2331:17EB
cs=0x2331;eip=0x0017ee; 	X(PUSH(ax));	// 79734 push    ax ;~ 2331:17EE
cs=0x2331;eip=0x0017ef; 	R(CALL(sub_33056,0));	// 79735 call    sub_33056 ;~ 2331:17EF
cs=0x2331;eip=0x0017f2; 	X(PUSH(ax));	// 79736 push    ax ;~ 2331:17F2
cs=0x2331;eip=0x0017f3; 	T(MOV(ax, 0x20));	// 79737 mov     ax, 20h ; ' ' ;~ 2331:17F3
cs=0x2331;eip=0x0017f6; 	X(PUSH(ax));	// 79738 push    ax ;~ 2331:17F6
cs=0x2331;eip=0x0017f7; 	T(MOV(ax, 0x11));	// 79739 mov     ax, 11h ;~ 2331:17F7
cs=0x2331;eip=0x0017fa; 	X(PUSH(ax));	// 79740 push    ax ;~ 2331:17FA
cs=0x2331;eip=0x0017fb; 	R(CALLF(sub_2dce4,0));	// 79741 call    sub_2DCE4 ;~ 2331:17FB
cs=0x2331;eip=0x001800; 	R(CALL(sub_33161,0));	// 79742 call    sub_33161 ;~ 2331:1800
cs=0x2331;eip=0x001803; 	T(MOV(ax, 0x19));	// 79743 mov     ax, 19h ;~ 2331:1803
cs=0x2331;eip=0x001806; 	X(PUSH(ax));	// 79744 push    ax ;~ 2331:1806
cs=0x2331;eip=0x001807; 	R(CALL(sub_33056,0));	// 79745 call    sub_33056 ;~ 2331:1807
cs=0x2331;eip=0x00180a; 	X(PUSH(ax));	// 79746 push    ax ;~ 2331:180A
cs=0x2331;eip=0x00180b; 	X(PUSH(*(dw*)((&unk_49e8e))));	// 79747 push    word ptr unk_49E8E ;~ 2331:180B
cs=0x2331;eip=0x00180f; 	T(MOV(ax, *(dw*)((&unk_49e90))));	// 79748 mov     ax, word ptr unk_49E90 ;~ 2331:180F
cs=0x2331;eip=0x001812; 	T(ADD(ax, *(dw*)((&unk_49e94))));	// 79749 add     ax, word ptr unk_49E94 ;~ 2331:1812
cs=0x2331;eip=0x001816; 	T(ADD(ax, 3));	// 79750 add     ax, 3 ;~ 2331:1816
cs=0x2331;eip=0x001819; 	X(PUSH(ax));	// 79751 push    ax ;~ 2331:1819
cs=0x2331;eip=0x00181a; 	R(CALLF(sub_2dce4,0));	// 79752 call    sub_2DCE4 ;~ 2331:181A
cs=0x2331;eip=0x00181f; 	T(CMP(*(dw*)((&byte_47b2e)), 0));	// 79753 cmp     word ptr byte_47B2E, 0 ;~ 2331:181F
cs=0x2331;eip=0x001824; 	R(JNZ(loc_3311b));	// 79754 jnz     short loc_3311B ;~ 2331:1824
cs=0x2331;eip=0x001826; 	T(MOV(ax, 0x0FF00));	// 79755 mov     ax, 0FF00h ;~ 2331:1826
cs=0x2331;eip=0x001829; 	R(JMP(loc_3311e));	// 79756 jmp     short loc_3311E ;~ 2331:1829
loc_3311b:
	// 9527 
cs=0x2331;eip=0x00182b; 	T(MOV(ax, 0x0FF07));	// 79760 mov     ax, 0FF07h ;~ 2331:182B
loc_3311e:
	// 9528 
cs=0x2331;eip=0x00182e; 	T(MOV(si, ax));	// 79763 mov     si, ax ;~ 2331:182E
cs=0x2331;eip=0x001830; 	T(MOV(ax, *(dw*)((&unk_49e8e))));	// 79764 mov     ax, word ptr unk_49E8E ;~ 2331:1830
cs=0x2331;eip=0x001833; 	T(DEC(ax));	// 79765 dec     ax ;~ 2331:1833
cs=0x2331;eip=0x001834; 	X(PUSH(ax));	// 79766 push    ax ;~ 2331:1834
cs=0x2331;eip=0x001835; 	T(MOV(ax, *(dw*)((&unk_49e90))));	// 79767 mov     ax, word ptr unk_49E90 ;~ 2331:1835
cs=0x2331;eip=0x001838; 	T(DEC(ax));	// 79768 dec     ax ;~ 2331:1838
cs=0x2331;eip=0x001839; 	X(PUSH(ax));	// 79769 push    ax ;~ 2331:1839
cs=0x2331;eip=0x00183a; 	T(MOV(ax, *(dw*)((&unk_49e92))));	// 79770 mov     ax, word ptr unk_49E92 ;~ 2331:183A
cs=0x2331;eip=0x00183d; 	T(INC(ax));	// 79771 inc     ax ;~ 2331:183D
cs=0x2331;eip=0x00183e; 	T(INC(ax));	// 79772 inc     ax ;~ 2331:183E
cs=0x2331;eip=0x00183f; 	X(PUSH(ax));	// 79773 push    ax ;~ 2331:183F
cs=0x2331;eip=0x001840; 	T(MOV(ax, *(dw*)((&unk_49e94))));	// 79774 mov     ax, word ptr unk_49E94 ;~ 2331:1840
cs=0x2331;eip=0x001843; 	T(INC(ax));	// 79775 inc     ax ;~ 2331:1843
cs=0x2331;eip=0x001844; 	T(INC(ax));	// 79776 inc     ax ;~ 2331:1844
cs=0x2331;eip=0x001845; 	X(PUSH(ax));	// 79777 push    ax ;~ 2331:1845
cs=0x2331;eip=0x001846; 	X(PUSH(si));	// 79778 push    si ;~ 2331:1846
cs=0x2331;eip=0x001847; 	R(CALLF(sub_20453,0));	// 79779 call    sub_20453 ;~ 2331:1847
cs=0x2331;eip=0x00184c; 	T(MOV(ax, *(dw*)((&unk_49e8e))));	// 79780 mov     ax, word ptr unk_49E8E ;~ 2331:184C
cs=0x2331;eip=0x00184f; 	T(DEC(ax));	// 79781 dec     ax ;~ 2331:184F
cs=0x2331;eip=0x001850; 	T(DEC(ax));	// 79782 dec     ax ;~ 2331:1850
cs=0x2331;eip=0x001851; 	X(PUSH(ax));	// 79783 push    ax ;~ 2331:1851
cs=0x2331;eip=0x001852; 	T(MOV(ax, *(dw*)((&unk_49e90))));	// 79784 mov     ax, word ptr unk_49E90 ;~ 2331:1852
cs=0x2331;eip=0x001855; 	T(DEC(ax));	// 79785 dec     ax ;~ 2331:1855
cs=0x2331;eip=0x001856; 	T(DEC(ax));	// 79786 dec     ax ;~ 2331:1856
cs=0x2331;eip=0x001857; 	X(PUSH(ax));	// 79787 push    ax ;~ 2331:1857
cs=0x2331;eip=0x001858; 	T(MOV(ax, *(dw*)((&unk_49e92))));	// 79788 mov     ax, word ptr unk_49E92 ;~ 2331:1858
cs=0x2331;eip=0x00185b; 	T(ADD(ax, 4));	// 79789 add     ax, 4 ;~ 2331:185B
cs=0x2331;eip=0x00185e; 	X(PUSH(ax));	// 79790 push    ax ;~ 2331:185E
cs=0x2331;eip=0x00185f; 	T(MOV(ax, *(dw*)((&unk_49e94))));	// 79791 mov     ax, word ptr unk_49E94 ;~ 2331:185F
cs=0x2331;eip=0x001862; 	T(ADD(ax, 4));	// 79792 add     ax, 4 ;~ 2331:1862
cs=0x2331;eip=0x001865; 	X(PUSH(ax));	// 79793 push    ax ;~ 2331:1865
cs=0x2331;eip=0x001866; 	X(PUSH(si));	// 79794 push    si ;~ 2331:1866
cs=0x2331;eip=0x001867; 	R(CALLF(sub_20453,0));	// 79795 call    sub_20453 ;~ 2331:1867
cs=0x2331;eip=0x00186c; 	X(POP(si));	// 79796 pop     si ;~ 2331:186C
cs=0x2331;eip=0x00186d; 	T(MOV(sp, bp));	// 79797 mov     sp, bp ;~ 2331:186D
cs=0x2331;eip=0x00186f; 	X(POP(bp));	// 79798 pop     bp ;~ 2331:186F
cs=0x2331;eip=0x001870; 	R(RETN(0));	// 79799 retn ;~ 2331:1870
sub_33161:
	// 79806 
cs=0x2331;eip=0x001871; 	T(CMP(*(dw*)((&byte_47b2e)), 0));	// 79808 cmp     word ptr byte_47B2E, 0 ;~ 2331:1871
cs=0x2331;eip=0x001876; 	R(JNZ(loc_3316d));	// 79809 jnz     short loc_3316D ;~ 2331:1876
cs=0x2331;eip=0x001878; 	T(MOV(ax, 0x0D));	// 79810 mov     ax, 0Dh ;~ 2331:1878
cs=0x2331;eip=0x00187b; 	R(JMP(loc_33170));	// 79811 jmp     short loc_33170 ;~ 2331:187B
loc_3316d:
	// 9529 
cs=0x2331;eip=0x00187d; 	T(MOV(ax, 7));	// 79815 mov     ax, 7 ;~ 2331:187D
loc_33170:
	// 9530 
cs=0x2331;eip=0x001880; 	T(OR(ah, 0x0FF));	// 79818 or      ah, 0FFh ;~ 2331:1880
cs=0x2331;eip=0x001883; 	X(MOV(*(dw*)((&unk_47bde)), ax));	// 79819 mov     word ptr unk_47BDE, ax ;~ 2331:1883
cs=0x2331;eip=0x001886; 	X(MOV(unk_56885, 0));	// 79820 mov     byte ptr unk_56885, 0 ;~ 2331:1886
cs=0x2331;eip=0x00188b; 	R(RETN(0));	// 79821 retn ;~ 2331:188B
sub_3317c:
	// 79828 
cs=0x2331;eip=0x00188c; 	X(PUSH(*(dw*)((&unk_56888))));	// 79830 push    word ptr unk_56888 ;~ 2331:188C
cs=0x2331;eip=0x001890; 	X(PUSH(*(dw*)((&unk_56886))));	// 79831 push    word ptr unk_56886 ;~ 2331:1890
cs=0x2331;eip=0x001894; 	R(CALLF(sub_2db87,0));	// 79832 call    sub_2DB87 ;~ 2331:1894
cs=0x2331;eip=0x001899; 	R(RETN(0));	// 79833 retn ;~ 2331:1899
sub_3318a:
	// 79840 
cs=0x2331;eip=0x00189a; 	X(PUSH(*(dw*)((&unk_5688c))));	// 79842 push    word ptr unk_5688C ;~ 2331:189A
cs=0x2331;eip=0x00189e; 	X(PUSH(*(dw*)((&unk_5688a))));	// 79843 push    word ptr unk_5688A ;~ 2331:189E
cs=0x2331;eip=0x0018a2; 	R(CALLF(sub_2db87,0));	// 79844 call    sub_2DB87 ;~ 2331:18A2
cs=0x2331;eip=0x0018a7; 	R(RETN(0));	// 79845 retn ;~ 2331:18A7
sub_33198:
	// 79853 
#undef var_4
#define var_4 -4
	// 79856 var_4           = word ptr -4 ;~ 2331:18A8
#undef arg_0
#define arg_0 4
	// 79857 arg_0           = word ptr  4 ;~ 2331:18A8
cs=0x2331;eip=0x0018a8; 	X(PUSH(bp));	// 79859 push    bp ;~ 2331:18A8
cs=0x2331;eip=0x0018a9; 	T(MOV(bp, sp));	// 79860 mov     bp, sp ;~ 2331:18A9
cs=0x2331;eip=0x0018ab; 	T(SUB(sp, 4));	// 79861 sub     sp, 4 ;~ 2331:18AB
cs=0x2331;eip=0x0018ae; 	X(PUSH(di));	// 79862 push    di ;~ 2331:18AE
cs=0x2331;eip=0x0018af; 	X(PUSH(si));	// 79863 push    si ;~ 2331:18AF
cs=0x2331;eip=0x0018b0; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 79864 mov     si, [bp+arg_0] ;~ 2331:18B0
cs=0x2331;eip=0x0018b3; 	T(MOV(ax, 0x20));	// 79865 mov     ax, 20h ; ' ' ;~ 2331:18B3
cs=0x2331;eip=0x0018b6; 	X(PUSH(ax));	// 79866 push    ax ;~ 2331:18B6
cs=0x2331;eip=0x0018b7; 	T(MOV(ax, 0x0BA));	// 79867 mov     ax, 0BAh ; '∫' ;~ 2331:18B7
cs=0x2331;eip=0x0018ba; 	X(PUSH(ax));	// 79868 push    ax ;~ 2331:18BA
cs=0x2331;eip=0x0018bb; 	T(MOV(ax, 0x90));	// 79869 mov     ax, 90h ; 'ê' ;~ 2331:18BB
cs=0x2331;eip=0x0018be; 	X(PUSH(ax));	// 79870 push    ax ;~ 2331:18BE
cs=0x2331;eip=0x0018bf; 	T(MOV(ax, 7));	// 79871 mov     ax, 7 ;~ 2331:18BF
cs=0x2331;eip=0x0018c2; 	X(PUSH(ax));	// 79872 push    ax ;~ 2331:18C2
cs=0x2331;eip=0x0018c3; 	T(MOV(ax, 0x0FF0F));	// 79873 mov     ax, 0FF0Fh ;~ 2331:18C3
cs=0x2331;eip=0x0018c6; 	X(PUSH(ax));	// 79874 push    ax ;~ 2331:18C6
cs=0x2331;eip=0x0018c7; 	R(CALLF(sub_233c4,0));	// 79875 call    sub_233C4 ;~ 2331:18C7
cs=0x2331;eip=0x0018cc; 	R(CALL(sub_3317c,0));	// 79876 call    sub_3317C ;~ 2331:18CC
cs=0x2331;eip=0x0018cf; 	R(CALL(sub_33161,0));	// 79877 call    sub_33161 ;~ 2331:18CF
cs=0x2331;eip=0x0018d2; 	T(MOV(di, 0x20));	// 79878 mov     di, 20h ; ' ' ;~ 2331:18D2
cs=0x2331;eip=0x0018d5; 	R(JMP(loc_331fb));	// 79879 jmp     short loc_331FB ;~ 2331:18D5
loc_331c7:
	// 9531 
cs=0x2331;eip=0x0018d7; 	R(CALL(sub_3317c,0));	// 79883 call    sub_3317C ;~ 2331:18D7
cs=0x2331;eip=0x0018da; 	R(JMP(loc_331fa));	// 79884 jmp     short loc_331FA ;~ 2331:18DA
loc_331cc:
	// 9532 
cs=0x2331;eip=0x0018dc; 	T(MOV(al, *(raddr(ds,si))));	// 79888 mov     al, [si] ;~ 2331:18DC
cs=0x2331;eip=0x0018de; 	T(CBW);	// 79889 cbw ;~ 2331:18DE
cs=0x2331;eip=0x0018df; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 79890 mov     [bp+var_4], ax ;~ 2331:18DF
cs=0x2331;eip=0x0018e2; 	T(MOV(ax, *(dw*)((&unk_5688c))));	// 79891 mov     ax, word ptr unk_5688C ;~ 2331:18E2
cs=0x2331;eip=0x0018e5; 	T(CMP(*(dw*)((&unk_56890)), ax));	// 79892 cmp     word ptr unk_56890, ax ;~ 2331:18E5
cs=0x2331;eip=0x0018e9; 	R(JNZ(loc_331e0));	// 79893 jnz     short loc_331E0 ;~ 2331:18E9
cs=0x2331;eip=0x0018eb; 	T(MOV(ax, 0x0BA));	// 79894 mov     ax, 0BAh ; '∫' ;~ 2331:18EB
cs=0x2331;eip=0x0018ee; 	R(JMP(loc_331e3));	// 79895 jmp     short loc_331E3 ;~ 2331:18EE
loc_331e0:
	// 9533 
cs=0x2331;eip=0x0018f0; 	T(MOV(ax, 0x0BB));	// 79899 mov     ax, 0BBh ; 'ª' ;~ 2331:18F0
loc_331e3:
	// 9534 
cs=0x2331;eip=0x0018f3; 	X(PUSH(ax));	// 79902 push    ax ;~ 2331:18F3
cs=0x2331;eip=0x0018f4; 	X(PUSH(di));	// 79903 push    di ;~ 2331:18F4
cs=0x2331;eip=0x0018f5; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 79904 push    [bp+var_4] ;~ 2331:18F5
cs=0x2331;eip=0x0018f8; 	R(CALLF(sub_2e4b0,0));	// 79905 call    sub_2E4B0 ;~ 2331:18F8
cs=0x2331;eip=0x0018fd; 	T(ADD(sp, 6));	// 79906 add     sp, 6 ;~ 2331:18FD
cs=0x2331;eip=0x001900; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 79907 push    [bp+var_4] ;~ 2331:1900
cs=0x2331;eip=0x001903; 	R(CALLF(sub_2dc86,0));	// 79908 call    sub_2DC86 ;~ 2331:1903
cs=0x2331;eip=0x001908; 	T(ADD(di, ax));	// 79909 add     di, ax ;~ 2331:1908
loc_331fa:
	// 9535 
cs=0x2331;eip=0x00190a; 	T(INC(si));	// 79913 inc     si ;~ 2331:190A
loc_331fb:
	// 9536 
cs=0x2331;eip=0x00190b; 	T(CMP(*(raddr(ds,si)), 0));	// 79916 cmp     byte ptr [si], 0 ;~ 2331:190B
cs=0x2331;eip=0x00190e; 	R(JZ(loc_33213));	// 79917 jz      short loc_33213 ;~ 2331:190E
cs=0x2331;eip=0x001910; 	T(CMP(*(raddr(ds,si)), 0x2A));	// 79918 cmp     byte ptr [si], 2Ah ; '*' ;~ 2331:1910
cs=0x2331;eip=0x001913; 	R(JNZ(loc_331cc));	// 79919 jnz     short loc_331CC ;~ 2331:1913
cs=0x2331;eip=0x001915; 	T(MOV(ax, *(dw*)((&unk_56888))));	// 79920 mov     ax, word ptr unk_56888 ;~ 2331:1915
cs=0x2331;eip=0x001918; 	T(CMP(*(dw*)((&unk_56890)), ax));	// 79921 cmp     word ptr unk_56890, ax ;~ 2331:1918
cs=0x2331;eip=0x00191c; 	R(JNZ(loc_331c7));	// 79922 jnz     short loc_331C7 ;~ 2331:191C
cs=0x2331;eip=0x00191e; 	R(CALL(sub_3318a,0));	// 79923 call    sub_3318A ;~ 2331:191E
cs=0x2331;eip=0x001921; 	R(JMP(loc_331fa));	// 79924 jmp     short loc_331FA ;~ 2331:1921
loc_33213:
	// 9537 
cs=0x2331;eip=0x001923; 	X(POP(si));	// 79928 pop     si ;~ 2331:1923
cs=0x2331;eip=0x001924; 	X(POP(di));	// 79929 pop     di ;~ 2331:1924
cs=0x2331;eip=0x001925; 	T(MOV(sp, bp));	// 79930 mov     sp, bp ;~ 2331:1925
cs=0x2331;eip=0x001927; 	X(POP(bp));	// 79931 pop     bp ;~ 2331:1927
cs=0x2331;eip=0x001928; 	R(RETN(2));	// 79932 retn    2 ;~ 2331:1928
sub_3321b:
	// 79939 
cs=0x2331;eip=0x00192b; 	R(CALLF(sub_203b0,0));	// 79941 call    sub_203B0 ;~ 2331:192B
cs=0x2331;eip=0x001930; 	R(CALLF(sub_20565,0));	// 79942 call    sub_20565 ;~ 2331:1930
cs=0x2331;eip=0x001935; 	T(CMP(unk_49fc9, 0));	// 79943 cmp     byte ptr unk_49FC9, 0 ;~ 2331:1935
cs=0x2331;eip=0x00193a; 	R(JNZ(loc_3323e));	// 79944 jnz     short loc_3323E ;~ 2331:193A
cs=0x2331;eip=0x00193c; 	X(MOV(unk_49fc9, 1));	// 79945 mov     byte ptr unk_49FC9, 1 ;~ 2331:193C
cs=0x2331;eip=0x001941; 	T(MOV(ax, 0x2614));	// 79946 mov     ax, 2614h ;~ 2331:1941
cs=0x2331;eip=0x001944; 	X(PUSH(ax));	// 79947 push    ax ;~ 2331:1944
cs=0x2331;eip=0x001945; 	T(MOV(ax, 0x0ED08));	// 79948 mov     ax, 0ED08h ;~ 2331:1945
cs=0x2331;eip=0x001948; 	X(PUSH(ax));	// 79949 push    ax ;~ 2331:1948
cs=0x2331;eip=0x001949; 	R(CALLF(sub_316b2,0));	// 79950 call    sub_316B2 ;~ 2331:1949
loc_3323e:
	// 9538 
cs=0x2331;eip=0x00194e; 	R(CALL(sub_32f2d,0));	// 79953 call    sub_32F2D ;~ 2331:194E
cs=0x2331;eip=0x001951; 	R(RETN(0));	// 79954 retn ;~ 2331:1951
sub_33242:
	// 79961 
cs=0x2331;eip=0x001952; 	X(MOV(unk_49fc9, 0));	// 79963 mov     byte ptr unk_49FC9, 0 ;~ 2331:1952
cs=0x2331;eip=0x001957; 	R(RETF(0));	// 79964 retf ;~ 2331:1957
sub_33248:
	// 79972 
cs=0x2331;eip=0x001958; 	X(PUSH(bp));	// 79974 push    bp ;~ 2331:1958
cs=0x2331;eip=0x001959; 	T(MOV(bp, sp));	// 79975 mov     bp, sp ;~ 2331:1959
cs=0x2331;eip=0x00195b; 	T(SUB(sp, 2));	// 79976 sub     sp, 2 ;~ 2331:195B
cs=0x2331;eip=0x00195e; 	X(PUSH(si));	// 79977 push    si ;~ 2331:195E
cs=0x2331;eip=0x00195f; 	R(JMP(loc_33256));	// 79978 jmp     short loc_33256 ;~ 2331:195F
loc_33251:
	// 9539 
cs=0x2331;eip=0x001961; 	R(CALLF(sub_318b6,0));	// 79982 call    sub_318B6 ;~ 2331:1961
loc_33256:
	// 9540 
cs=0x2331;eip=0x001966; 	R(CALLF(sub_2eee2,0));	// 79985 call    sub_2EEE2 ;~ 2331:1966
cs=0x2331;eip=0x00196b; 	T(MOV(si, ax));	// 79986 mov     si, ax ;~ 2331:196B
cs=0x2331;eip=0x00196d; 	T(CMP(si, 3));	// 79987 cmp     si, 3 ;~ 2331:196D
cs=0x2331;eip=0x001970; 	R(JZ(loc_33251));	// 79988 jz      short loc_33251 ;~ 2331:1970
cs=0x2331;eip=0x001972; 	X(POP(si));	// 79989 pop     si ;~ 2331:1972
cs=0x2331;eip=0x001973; 	T(MOV(sp, bp));	// 79990 mov     sp, bp ;~ 2331:1973
cs=0x2331;eip=0x001975; 	X(POP(bp));	// 79991 pop     bp ;~ 2331:1975
cs=0x2331;eip=0x001976; 	R(RETN(0));	// 79992 retn ;~ 2331:1976
sub_33267:
	// 80000 
#undef var_4
#define var_4 -4
	// 80002 var_4           = word ptr -4 ;~ 2331:1977
#undef var_2
#define var_2 -2
	// 80003 var_2           = byte ptr -2 ;~ 2331:1977
#undef arg_0
#define arg_0 6
	// 80004 arg_0           = word ptr  6 ;~ 2331:1977
#undef arg_2
#define arg_2 8
	// 80005 arg_2           = word ptr  8 ;~ 2331:1977
cs=0x2331;eip=0x001977; 	X(PUSH(bp));	// 80007 push    bp ;~ 2331:1977
cs=0x2331;eip=0x001978; 	T(MOV(bp, sp));	// 80008 mov     bp, sp ;~ 2331:1978
cs=0x2331;eip=0x00197a; 	T(SUB(sp, 4));	// 80009 sub     sp, 4 ;~ 2331:197A
cs=0x2331;eip=0x00197d; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 80010 cmp     [bp+arg_2], 0 ;~ 2331:197D
cs=0x2331;eip=0x001981; 	R(JL(loc_33280));	// 80011 jl      short loc_33280 ;~ 2331:1981
cs=0x2331;eip=0x001983; 	R(JG(loc_3327c));	// 80012 jg      short loc_3327C ;~ 2331:1983
cs=0x2331;eip=0x001985; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x3E8));	// 80013 cmp     [bp+arg_0], 3E8h ;~ 2331:1985
cs=0x2331;eip=0x00198a; 	R(JC(loc_33280));	// 80014 jb      short loc_33280 ;~ 2331:198A
loc_3327c:
	// 9541 
cs=0x2331;eip=0x00198c; 	T(MOV(al, 1));	// 80017 mov     al, 1 ;~ 2331:198C
cs=0x2331;eip=0x00198e; 	R(JMP(loc_33282));	// 80018 jmp     short loc_33282 ;~ 2331:198E
loc_33280:
	// 9542 
cs=0x2331;eip=0x001990; 	T(SUB(al, al));	// 80023 sub     al, al ;~ 2331:1990
loc_33282:
	// 9543 
cs=0x2331;eip=0x001992; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 80026 mov     [bp+var_2], al ;~ 2331:1992
cs=0x2331;eip=0x001995; 	T(OR(al, al));	// 80027 or      al, al ;~ 2331:1995
cs=0x2331;eip=0x001997; 	R(JZ(loc_3329b));	// 80028 jz      short loc_3329B ;~ 2331:1997
cs=0x2331;eip=0x001999; 	X(INC(unk_56fee));	// 80029 inc     byte ptr unk_56FEE ;~ 2331:1999
cs=0x2331;eip=0x00199d; 	T(MOV(al, 1));	// 80030 mov     al, 1 ;~ 2331:199D
cs=0x2331;eip=0x00199f; 	T(MOV(cl, unk_57043));	// 80031 mov     cl, byte ptr unk_57043 ;~ 2331:199F
cs=0x2331;eip=0x0019a3; 	T(SHL(al, cl));	// 80032 shl     al, cl ;~ 2331:19A3
cs=0x2331;eip=0x0019a5; 	X(OR(unk_56fef, al));	// 80033 or      byte ptr unk_56FEF, al ;~ 2331:19A5
cs=0x2331;eip=0x0019a9; 	R(JMP(loc_332a0));	// 80034 jmp     short loc_332A0 ;~ 2331:19A9
loc_3329b:
	// 9544 
cs=0x2331;eip=0x0019ab; 	X(MOV(unk_56fee, 0));	// 80038 mov     byte ptr unk_56FEE, 0 ;~ 2331:19AB
loc_332a0:
	// 9545 
cs=0x2331;eip=0x0019b0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 80041 mov     ax, [bp+arg_0] ;~ 2331:19B0
cs=0x2331;eip=0x0019b3; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 80042 mov     dx, [bp+arg_2] ;~ 2331:19B3
cs=0x2331;eip=0x0019b6; 	X(ADD(*(dw*)((&unk_56fe3)), ax));	// 80043 add     word ptr unk_56FE3, ax ;~ 2331:19B6
cs=0x2331;eip=0x0019ba; 	X(ADC(*(dw*)((&unk_56fe5)), dx));	// 80044 adc     word ptr unk_56FE5, dx ;~ 2331:19BA
cs=0x2331;eip=0x0019be; 	T(CMP(*(dw*)((&unk_56fe5)), 0));	// 80045 cmp     word ptr unk_56FE5, 0 ;~ 2331:19BE
cs=0x2331;eip=0x0019c3; 	R(JGE(loc_332bd));	// 80046 jge     short loc_332BD ;~ 2331:19C3
cs=0x2331;eip=0x0019c5; 	T(SUB(ax, ax));	// 80047 sub     ax, ax ;~ 2331:19C5
cs=0x2331;eip=0x0019c7; 	X(MOV(*(dw*)((&unk_56fe5)), ax));	// 80048 mov     word ptr unk_56FE5, ax ;~ 2331:19C7
cs=0x2331;eip=0x0019ca; 	X(MOV(*(dw*)((&unk_56fe3)), ax));	// 80049 mov     word ptr unk_56FE3, ax ;~ 2331:19CA
loc_332bd:
	// 9546 
cs=0x2331;eip=0x0019cd; 	T(MOV(al, unk_56eb0));	// 80052 mov     al, byte ptr unk_56EB0 ;~ 2331:19CD
cs=0x2331;eip=0x0019d0; 	T(SUB(ah, ah));	// 80053 sub     ah, ah ;~ 2331:19D0
cs=0x2331;eip=0x0019d2; 	T(OR(ax, ax));	// 80054 or      ax, ax ;~ 2331:19D2
cs=0x2331;eip=0x0019d4; 	R(JZ(loc_332d8));	// 80055 jz      short loc_332D8 ;~ 2331:19D4
cs=0x2331;eip=0x0019d6; 	T(CMP(ax, 1));	// 80056 cmp     ax, 1 ;~ 2331:19D6
cs=0x2331;eip=0x0019d9; 	R(JNZ(loc_332ce));	// 80057 jnz     short loc_332CE ;~ 2331:19D9
cs=0x2331;eip=0x0019db; 	R(JMP(loc_333d5));	// 80058 jmp     loc_333D5 ;~ 2331:19DB
loc_332ce:
	// 9547 
cs=0x2331;eip=0x0019de; 	T(CMP(ax, 2));	// 80062 cmp     ax, 2 ;~ 2331:19DE
cs=0x2331;eip=0x0019e1; 	R(JNZ(loc_332d6));	// 80063 jnz     short loc_332D6 ;~ 2331:19E1
cs=0x2331;eip=0x0019e3; 	R(JMP(loc_333f1));	// 80064 jmp     loc_333F1 ;~ 2331:19E3
loc_332d6:
	// 9548 
cs=0x2331;eip=0x0019e6; 	R(JMP(loc_332e4));	// 80068 jmp     short loc_332E4 ;~ 2331:19E6
loc_332d8:
	// 9549 
cs=0x2331;eip=0x0019e8; 	T(MOV(al, 2));	// 80072 mov     al, 2 ;~ 2331:19E8
cs=0x2331;eip=0x0019ea; 	X(PUSH(ax));	// 80073 push    ax ;~ 2331:19EA
cs=0x2331;eip=0x0019eb; 	T(MOV(ax, 0x0F633));	// 80074 mov     ax, 0F633h ;~ 2331:19EB
cs=0x2331;eip=0x0019ee; 	X(PUSH(ax));	// 80075 push    ax ;~ 2331:19EE
cs=0x2331;eip=0x0019ef; 	R(CALLF(sub_10648,0));	// 80076 call    sub_10648 ;~ 2331:19EF
loc_332e4:
	// 9550 
cs=0x2331;eip=0x0019f4; 	T(MOV(ax, 5));	// 80080 mov     ax, 5 ;~ 2331:19F4
cs=0x2331;eip=0x0019f7; 	T(CWD);	// 80081 cwd ;~ 2331:19F7
cs=0x2331;eip=0x0019f8; 	X(PUSH(dx));	// 80082 push    dx ;~ 2331:19F8
cs=0x2331;eip=0x0019f9; 	X(PUSH(ax));	// 80083 push    ax ;~ 2331:19F9
cs=0x2331;eip=0x0019fa; 	X(PUSH(*(dw*)((&unk_56fe5))));	// 80084 push    word ptr unk_56FE5 ;~ 2331:19FA
cs=0x2331;eip=0x0019fe; 	X(PUSH(*(dw*)((&unk_56fe3))));	// 80085 push    word ptr unk_56FE3 ;~ 2331:19FE
cs=0x2331;eip=0x001a02; 	T(MOV(al, unk_57042));	// 80086 mov     al, byte ptr unk_57042 ;~ 2331:1A02
cs=0x2331;eip=0x001a05; 	T(SUB(ah, ah));	// 80087 sub     ah, ah ;~ 2331:1A05
cs=0x2331;eip=0x001a07; 	T(INC(ax));	// 80088 inc     ax ;~ 2331:1A07
cs=0x2331;eip=0x001a08; 	T(INC(ax));	// 80089 inc     ax ;~ 2331:1A08
cs=0x2331;eip=0x001a09; 	T(SUB(cx, cx));	// 80090 sub     cx, cx ;~ 2331:1A09
cs=0x2331;eip=0x001a0b; 	X(PUSH(cx));	// 80091 push    cx ;~ 2331:1A0B
cs=0x2331;eip=0x001a0c; 	X(PUSH(ax));	// 80092 push    ax ;~ 2331:1A0C
cs=0x2331;eip=0x001a0d; 	R(CALLF(sub_105c2,0));	// 80093 call    sub_105C2 ;~ 2331:1A0D
cs=0x2331;eip=0x001a12; 	X(PUSH(dx));	// 80094 push    dx ;~ 2331:1A12
cs=0x2331;eip=0x001a13; 	X(PUSH(ax));	// 80095 push    ax ;~ 2331:1A13
cs=0x2331;eip=0x001a14; 	R(CALLF(sub_1066a,0));	// 80096 call    sub_1066A ;~ 2331:1A14
cs=0x2331;eip=0x001a19; 	X(MOV(*(dw*)((&unk_56fe3)), ax));	// 80097 mov     word ptr unk_56FE3, ax ;~ 2331:1A19
cs=0x2331;eip=0x001a1c; 	X(MOV(*(dw*)((&unk_56fe5)), dx));	// 80098 mov     word ptr unk_56FE5, dx ;~ 2331:1A1C
cs=0x2331;eip=0x001a20; 	T(MOV(ax, 0x64));	// 80099 mov     ax, 64h ; 'd' ;~ 2331:1A20
cs=0x2331;eip=0x001a23; 	T(CWD);	// 80100 cwd ;~ 2331:1A23
cs=0x2331;eip=0x001a24; 	X(PUSH(dx));	// 80101 push    dx ;~ 2331:1A24
cs=0x2331;eip=0x001a25; 	X(PUSH(ax));	// 80102 push    ax ;~ 2331:1A25
cs=0x2331;eip=0x001a26; 	X(PUSH(*(dw*)((&unk_56fe5))));	// 80103 push    word ptr unk_56FE5 ;~ 2331:1A26
cs=0x2331;eip=0x001a2a; 	X(PUSH(*(dw*)((&unk_56fe3))));	// 80104 push    word ptr unk_56FE3 ;~ 2331:1A2A
cs=0x2331;eip=0x001a2e; 	T(MOV(bx, *(dw*)((&unk_47ab2))));	// 80105 mov     bx, word ptr unk_47AB2 ;~ 2331:1A2E
cs=0x2331;eip=0x001a32; 	T(MOV(al, *(raddr(ds,bx+0x261A))));	// 80106 mov     al, [bx+261Ah] ;~ 2331:1A32
cs=0x2331;eip=0x001a36; 	T(SUB(ah, ah));	// 80107 sub     ah, ah ;~ 2331:1A36
cs=0x2331;eip=0x001a38; 	T(SUB(cx, cx));	// 80108 sub     cx, cx ;~ 2331:1A38
cs=0x2331;eip=0x001a3a; 	X(PUSH(cx));	// 80109 push    cx ;~ 2331:1A3A
cs=0x2331;eip=0x001a3b; 	X(PUSH(ax));	// 80110 push    ax ;~ 2331:1A3B
cs=0x2331;eip=0x001a3c; 	R(CALLF(sub_105c2,0));	// 80111 call    sub_105C2 ;~ 2331:1A3C
cs=0x2331;eip=0x001a41; 	X(PUSH(dx));	// 80112 push    dx ;~ 2331:1A41
cs=0x2331;eip=0x001a42; 	X(PUSH(ax));	// 80113 push    ax ;~ 2331:1A42
cs=0x2331;eip=0x001a43; 	R(CALLF(sub_1066a,0));	// 80114 call    sub_1066A ;~ 2331:1A43
cs=0x2331;eip=0x001a48; 	X(MOV(*(dw*)((&unk_56fe3)), ax));	// 80115 mov     word ptr unk_56FE3, ax ;~ 2331:1A48
cs=0x2331;eip=0x001a4b; 	X(MOV(*(dw*)((&unk_56fe5)), dx));	// 80116 mov     word ptr unk_56FE5, dx ;~ 2331:1A4B
cs=0x2331;eip=0x001a4f; 	T(MOV(ax, 0x64));	// 80117 mov     ax, 64h ; 'd' ;~ 2331:1A4F
cs=0x2331;eip=0x001a52; 	T(CWD);	// 80118 cwd ;~ 2331:1A52
cs=0x2331;eip=0x001a53; 	X(PUSH(dx));	// 80119 push    dx ;~ 2331:1A53
cs=0x2331;eip=0x001a54; 	X(PUSH(ax));	// 80120 push    ax ;~ 2331:1A54
cs=0x2331;eip=0x001a55; 	X(PUSH(*(dw*)((&unk_56fe5))));	// 80121 push    word ptr unk_56FE5 ;~ 2331:1A55
cs=0x2331;eip=0x001a59; 	X(PUSH(*(dw*)((&unk_56fe3))));	// 80122 push    word ptr unk_56FE3 ;~ 2331:1A59
cs=0x2331;eip=0x001a5d; 	T(MOV(bl, unk_57043));	// 80123 mov     bl, byte ptr unk_57043 ;~ 2331:1A5D
cs=0x2331;eip=0x001a61; 	T(SUB(bh, bh));	// 80124 sub     bh, bh ;~ 2331:1A61
cs=0x2331;eip=0x001a63; 	T(MOV(al, *(raddr(ds,bx+0x261E))));	// 80125 mov     al, [bx+261Eh] ;~ 2331:1A63
cs=0x2331;eip=0x001a67; 	T(SUB(ah, ah));	// 80126 sub     ah, ah ;~ 2331:1A67
cs=0x2331;eip=0x001a69; 	T(SUB(cx, cx));	// 80127 sub     cx, cx ;~ 2331:1A69
cs=0x2331;eip=0x001a6b; 	X(PUSH(cx));	// 80128 push    cx ;~ 2331:1A6B
cs=0x2331;eip=0x001a6c; 	X(PUSH(ax));	// 80129 push    ax ;~ 2331:1A6C
cs=0x2331;eip=0x001a6d; 	R(CALLF(sub_105c2,0));	// 80130 call    sub_105C2 ;~ 2331:1A6D
cs=0x2331;eip=0x001a72; 	X(PUSH(dx));	// 80131 push    dx ;~ 2331:1A72
cs=0x2331;eip=0x001a73; 	X(PUSH(ax));	// 80132 push    ax ;~ 2331:1A73
cs=0x2331;eip=0x001a74; 	R(CALLF(sub_1066a,0));	// 80133 call    sub_1066A ;~ 2331:1A74
cs=0x2331;eip=0x001a79; 	X(MOV(*(dw*)((&unk_56fe3)), ax));	// 80134 mov     word ptr unk_56FE3, ax ;~ 2331:1A79
cs=0x2331;eip=0x001a7c; 	X(MOV(*(dw*)((&unk_56fe5)), dx));	// 80135 mov     word ptr unk_56FE5, dx ;~ 2331:1A7C
cs=0x2331;eip=0x001a80; 	T(CMP(unk_55207, 0));	// 80136 cmp     byte ptr unk_55207, 0 ;~ 2331:1A80
cs=0x2331;eip=0x001a85; 	R(JZ(loc_33396));	// 80137 jz      short loc_33396 ;~ 2331:1A85
cs=0x2331;eip=0x001a87; 	T(MOV(ax, 3));	// 80138 mov     ax, 3 ;~ 2331:1A87
cs=0x2331;eip=0x001a8a; 	T(CWD);	// 80139 cwd ;~ 2331:1A8A
cs=0x2331;eip=0x001a8b; 	X(PUSH(dx));	// 80140 push    dx ;~ 2331:1A8B
cs=0x2331;eip=0x001a8c; 	X(PUSH(ax));	// 80141 push    ax ;~ 2331:1A8C
cs=0x2331;eip=0x001a8d; 	T(MOV(ax, *(dw*)((&unk_56fe3))));	// 80142 mov     ax, word ptr unk_56FE3 ;~ 2331:1A8D
cs=0x2331;eip=0x001a90; 	T(MOV(dx, *(dw*)((&unk_56fe5))));	// 80143 mov     dx, word ptr unk_56FE5 ;~ 2331:1A90
cs=0x2331;eip=0x001a94; 	T(SHL(ax, 1));	// 80144 shl     ax, 1 ;~ 2331:1A94
cs=0x2331;eip=0x001a96; 	T(RCL(dx, 1));	// 80145 rcl     dx, 1 ;~ 2331:1A96
cs=0x2331;eip=0x001a98; 	X(PUSH(dx));	// 80146 push    dx ;~ 2331:1A98
cs=0x2331;eip=0x001a99; 	X(PUSH(ax));	// 80147 push    ax ;~ 2331:1A99
cs=0x2331;eip=0x001a9a; 	R(CALLF(sub_10526,0));	// 80148 call    sub_10526 ;~ 2331:1A9A
cs=0x2331;eip=0x001a9f; 	X(MOV(*(dw*)((&unk_56fe3)), ax));	// 80149 mov     word ptr unk_56FE3, ax ;~ 2331:1A9F
cs=0x2331;eip=0x001aa2; 	X(MOV(*(dw*)((&unk_56fe5)), dx));	// 80150 mov     word ptr unk_56FE5, dx ;~ 2331:1AA2
loc_33396:
	// 9551 
cs=0x2331;eip=0x001aa6; 	T(CMP(unk_55208, 0));	// 80153 cmp     byte ptr unk_55208, 0 ;~ 2331:1AA6
cs=0x2331;eip=0x001aab; 	R(JZ(loc_333a5));	// 80154 jz      short loc_333A5 ;~ 2331:1AAB
cs=0x2331;eip=0x001aad; 	T(SUB(ax, ax));	// 80155 sub     ax, ax ;~ 2331:1AAD
cs=0x2331;eip=0x001aaf; 	X(MOV(*(dw*)((&unk_56fe5)), ax));	// 80156 mov     word ptr unk_56FE5, ax ;~ 2331:1AAF
cs=0x2331;eip=0x001ab2; 	X(MOV(*(dw*)((&unk_56fe3)), ax));	// 80157 mov     word ptr unk_56FE3, ax ;~ 2331:1AB2
loc_333a5:
	// 9552 
cs=0x2331;eip=0x001ab5; 	T(CMP(*(dw*)((&unk_56fe5)), 0));	// 80160 cmp     word ptr unk_56FE5, 0 ;~ 2331:1AB5
cs=0x2331;eip=0x001aba; 	R(JGE(loc_333b4));	// 80161 jge     short loc_333B4 ;~ 2331:1ABA
cs=0x2331;eip=0x001abc; 	T(SUB(ax, ax));	// 80162 sub     ax, ax ;~ 2331:1ABC
cs=0x2331;eip=0x001abe; 	X(MOV(*(dw*)((&unk_56fe5)), ax));	// 80163 mov     word ptr unk_56FE5, ax ;~ 2331:1ABE
cs=0x2331;eip=0x001ac1; 	X(MOV(*(dw*)((&unk_56fe3)), ax));	// 80164 mov     word ptr unk_56FE3, ax ;~ 2331:1AC1
loc_333b4:
	// 9553 
cs=0x2331;eip=0x001ac4; 	R(CALL(sub_334ff,0));	// 80167 call    sub_334FF ;~ 2331:1AC4
cs=0x2331;eip=0x001ac7; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 80168 mov     [bp+var_4], ax ;~ 2331:1AC7
cs=0x2331;eip=0x001aca; 	T(MOV(ax, *(dw*)((&unk_56fe3))));	// 80169 mov     ax, word ptr unk_56FE3 ;~ 2331:1ACA
cs=0x2331;eip=0x001acd; 	T(MOV(dx, *(dw*)((&unk_56fe5))));	// 80170 mov     dx, word ptr unk_56FE5 ;~ 2331:1ACD
cs=0x2331;eip=0x001ad1; 	X(ADD(*(dw*)((&unk_56fe7)), ax));	// 80171 add     word ptr unk_56FE7, ax ;~ 2331:1AD1
cs=0x2331;eip=0x001ad5; 	X(ADC(*(dw*)((&unk_56fe9)), dx));	// 80172 adc     word ptr unk_56FE9, dx ;~ 2331:1AD5
cs=0x2331;eip=0x001ad9; 	R(CALL(sub_334ff,0));	// 80173 call    sub_334FF ;~ 2331:1AD9
cs=0x2331;eip=0x001adc; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_4))));	// 80174 cmp     ax, [bp+var_4] ;~ 2331:1ADC
cs=0x2331;eip=0x001adf; 	R(JZ(loc_333fc));	// 80175 jz      short loc_333FC ;~ 2331:1ADF
cs=0x2331;eip=0x001ae1; 	T(MOV(al, 1));	// 80176 mov     al, 1 ;~ 2331:1AE1
cs=0x2331;eip=0x001ae3; 	R(JMP(loc_333fe));	// 80177 jmp     short loc_333FE ;~ 2331:1AE3
loc_333d5:
	// 9554 
cs=0x2331;eip=0x001ae5; 	X(PUSH(*(dw*)((&unk_56fe3))));	// 80181 push    word ptr unk_56FE3 ;~ 2331:1AE5
cs=0x2331;eip=0x001ae9; 	T(MOV(ax, 0x23));	// 80182 mov     ax, 23h ; '#' ;~ 2331:1AE9
cs=0x2331;eip=0x001aec; 	X(PUSH(ax));	// 80183 push    ax ;~ 2331:1AEC
cs=0x2331;eip=0x001aed; 	T(MOV(ax, 0x64));	// 80184 mov     ax, 64h ; 'd' ;~ 2331:1AED
cs=0x2331;eip=0x001af0; 	X(PUSH(ax));	// 80185 push    ax ;~ 2331:1AF0
cs=0x2331;eip=0x001af1; 	R(CALLF(sub_2f01c,0));	// 80186 call    sub_2F01C ;~ 2331:1AF1
cs=0x2331;eip=0x001af6; 	T(CWD);	// 80187 cwd ;~ 2331:1AF6
cs=0x2331;eip=0x001af7; 	X(MOV(*(dw*)((&unk_56fe3)), ax));	// 80188 mov     word ptr unk_56FE3, ax ;~ 2331:1AF7
cs=0x2331;eip=0x001afa; 	X(MOV(*(dw*)((&unk_56fe5)), dx));	// 80189 mov     word ptr unk_56FE5, dx ;~ 2331:1AFA
cs=0x2331;eip=0x001afe; 	R(JMP(loc_332e4));	// 80190 jmp     loc_332E4 ;~ 2331:1AFE
loc_333f1:
	// 9555 
cs=0x2331;eip=0x001b01; 	X(SAR(*(dw*)((&unk_56fe5)), 1));	// 80194 sar     word ptr unk_56FE5, 1 ;~ 2331:1B01
cs=0x2331;eip=0x001b05; 	X(RCR(*(dw*)((&unk_56fe3)), 1));	// 80195 rcr     word ptr unk_56FE3, 1 ;~ 2331:1B05
cs=0x2331;eip=0x001b09; 	R(JMP(loc_332e4));	// 80196 jmp     loc_332E4 ;~ 2331:1B09
loc_333fc:
	// 9556 
cs=0x2331;eip=0x001b0c; 	T(SUB(al, al));	// 80200 sub     al, al ;~ 2331:1B0C
loc_333fe:
	// 9557 
cs=0x2331;eip=0x001b0e; 	X(MOV(unk_56feb, al));	// 80203 mov     byte ptr unk_56FEB, al ;~ 2331:1B0E
cs=0x2331;eip=0x001b11; 	X(MOV(unk_56fed, 0));	// 80204 mov     byte ptr unk_56FED, 0 ;~ 2331:1B11
cs=0x2331;eip=0x001b16; 	T(CMP(unk_55208, 0));	// 80205 cmp     byte ptr unk_55208, 0 ;~ 2331:1B16
cs=0x2331;eip=0x001b1b; 	R(JZ(loc_33410));	// 80206 jz      short loc_33410 ;~ 2331:1B1B
cs=0x2331;eip=0x001b1d; 	R(JMP(loc_334fb));	// 80207 jmp     loc_334FB ;~ 2331:1B1D
loc_33410:
	// 9558 
cs=0x2331;eip=0x001b20; 	T(CMP(unk_57166, 0));	// 80211 cmp     byte ptr unk_57166, 0 ;~ 2331:1B20
cs=0x2331;eip=0x001b25; 	R(JZ(loc_3341c));	// 80212 jz      short loc_3341C ;~ 2331:1B25
cs=0x2331;eip=0x001b27; 	X(OR(unk_56fed, 4));	// 80213 or      byte ptr unk_56FED, 4 ;~ 2331:1B27
loc_3341c:
	// 9559 
cs=0x2331;eip=0x001b2c; 	T(CMP(unk_57042, 4));	// 80216 cmp     byte ptr unk_57042, 4 ;~ 2331:1B2C
cs=0x2331;eip=0x001b31; 	R(JC(loc_33449));	// 80217 jb      short loc_33449 ;~ 2331:1B31
cs=0x2331;eip=0x001b33; 	T(CMP(unk_57166, 0));	// 80218 cmp     byte ptr unk_57166, 0 ;~ 2331:1B33
cs=0x2331;eip=0x001b38; 	R(JZ(loc_33449));	// 80219 jz      short loc_33449 ;~ 2331:1B38
cs=0x2331;eip=0x001b3a; 	T(CMP(*(dw*)((&unk_56fe5)), 0));	// 80220 cmp     word ptr unk_56FE5, 0 ;~ 2331:1B3A
cs=0x2331;eip=0x001b3f; 	R(JL(loc_33449));	// 80221 jl      short loc_33449 ;~ 2331:1B3F
cs=0x2331;eip=0x001b41; 	R(JG(loc_3343b));	// 80222 jg      short loc_3343B ;~ 2331:1B41
cs=0x2331;eip=0x001b43; 	T(CMP(*(dw*)((&unk_56fe3)), 0x0FA0));	// 80223 cmp     word ptr unk_56FE3, 0FA0h ;~ 2331:1B43
cs=0x2331;eip=0x001b49; 	R(JC(loc_33449));	// 80224 jb      short loc_33449 ;~ 2331:1B49
loc_3343b:
	// 9560 
cs=0x2331;eip=0x001b4b; 	T(CMP(*(raddr(ss,bp+var_2)), 0));	// 80227 cmp     [bp+var_2], 0 ;~ 2331:1B4B
cs=0x2331;eip=0x001b4f; 	R(JZ(loc_33449));	// 80228 jz      short loc_33449 ;~ 2331:1B4F
cs=0x2331;eip=0x001b51; 	X(OR(unk_56fed, 0x80));	// 80229 or      byte ptr unk_56FED, 80h ;~ 2331:1B51
cs=0x2331;eip=0x001b56; 	R(JMP(loc_334cc));	// 80230 jmp     loc_334CC ;~ 2331:1B56
loc_33449:
	// 9561 
cs=0x2331;eip=0x001b59; 	T(CMP(unk_57042, 3));	// 80235 cmp     byte ptr unk_57042, 3 ;~ 2331:1B59
cs=0x2331;eip=0x001b5e; 	R(JC(loc_3346e));	// 80236 jb      short loc_3346E ;~ 2331:1B5E
cs=0x2331;eip=0x001b60; 	T(CMP(*(dw*)((&unk_56fe5)), 0));	// 80237 cmp     word ptr unk_56FE5, 0 ;~ 2331:1B60
cs=0x2331;eip=0x001b65; 	R(JL(loc_3346e));	// 80238 jl      short loc_3346E ;~ 2331:1B65
cs=0x2331;eip=0x001b67; 	R(JG(loc_33461));	// 80239 jg      short loc_33461 ;~ 2331:1B67
cs=0x2331;eip=0x001b69; 	T(CMP(*(dw*)((&unk_56fe3)), 0x0BB8));	// 80240 cmp     word ptr unk_56FE3, 0BB8h ;~ 2331:1B69
cs=0x2331;eip=0x001b6f; 	R(JC(loc_3346e));	// 80241 jb      short loc_3346E ;~ 2331:1B6F
loc_33461:
	// 9562 
cs=0x2331;eip=0x001b71; 	T(CMP(*(raddr(ss,bp+var_2)), 0));	// 80244 cmp     [bp+var_2], 0 ;~ 2331:1B71
cs=0x2331;eip=0x001b75; 	R(JZ(loc_3346e));	// 80245 jz      short loc_3346E ;~ 2331:1B75
cs=0x2331;eip=0x001b77; 	X(OR(unk_56fed, 8));	// 80246 or      byte ptr unk_56FED, 8 ;~ 2331:1B77
cs=0x2331;eip=0x001b7c; 	R(JMP(loc_334cc));	// 80247 jmp     short loc_334CC ;~ 2331:1B7C
loc_3346e:
	// 9563 
cs=0x2331;eip=0x001b7e; 	T(CMP(unk_57042, 2));	// 80252 cmp     byte ptr unk_57042, 2 ;~ 2331:1B7E
cs=0x2331;eip=0x001b83; 	R(JC(loc_33493));	// 80253 jb      short loc_33493 ;~ 2331:1B83
cs=0x2331;eip=0x001b85; 	T(CMP(*(dw*)((&unk_56fe5)), 0));	// 80254 cmp     word ptr unk_56FE5, 0 ;~ 2331:1B85
cs=0x2331;eip=0x001b8a; 	R(JL(loc_33493));	// 80255 jl      short loc_33493 ;~ 2331:1B8A
cs=0x2331;eip=0x001b8c; 	R(JG(loc_33486));	// 80256 jg      short loc_33486 ;~ 2331:1B8C
cs=0x2331;eip=0x001b8e; 	T(CMP(*(dw*)((&unk_56fe3)), 0x7D0));	// 80257 cmp     word ptr unk_56FE3, 7D0h ;~ 2331:1B8E
cs=0x2331;eip=0x001b94; 	R(JC(loc_33493));	// 80258 jb      short loc_33493 ;~ 2331:1B94
loc_33486:
	// 9564 
cs=0x2331;eip=0x001b96; 	T(CMP(*(raddr(ss,bp+var_2)), 0));	// 80261 cmp     [bp+var_2], 0 ;~ 2331:1B96
cs=0x2331;eip=0x001b9a; 	R(JZ(loc_33493));	// 80262 jz      short loc_33493 ;~ 2331:1B9A
cs=0x2331;eip=0x001b9c; 	X(OR(unk_56fed, 1));	// 80263 or      byte ptr unk_56FED, 1 ;~ 2331:1B9C
cs=0x2331;eip=0x001ba1; 	R(JMP(loc_334cc));	// 80264 jmp     short loc_334CC ;~ 2331:1BA1
loc_33493:
	// 9565 
cs=0x2331;eip=0x001ba3; 	T(CMP(unk_57042, 2));	// 80269 cmp     byte ptr unk_57042, 2 ;~ 2331:1BA3
cs=0x2331;eip=0x001ba8; 	R(JC(loc_334ae));	// 80270 jb      short loc_334AE ;~ 2331:1BA8
cs=0x2331;eip=0x001baa; 	T(CMP(*(dw*)((&unk_56ff0)), 6));	// 80271 cmp     word ptr unk_56FF0, 6 ;~ 2331:1BAA
cs=0x2331;eip=0x001baf; 	R(JL(loc_334ae));	// 80272 jl      short loc_334AE ;~ 2331:1BAF
cs=0x2331;eip=0x001bb1; 	T(CMP(*(raddr(ss,bp+var_2)), 0));	// 80273 cmp     [bp+var_2], 0 ;~ 2331:1BB1
cs=0x2331;eip=0x001bb5; 	R(JZ(loc_334ae));	// 80274 jz      short loc_334AE ;~ 2331:1BB5
cs=0x2331;eip=0x001bb7; 	X(OR(unk_56fed, 0x20));	// 80275 or      byte ptr unk_56FED, 20h ;~ 2331:1BB7
cs=0x2331;eip=0x001bbc; 	R(JMP(loc_334cc));	// 80276 jmp     short loc_334CC ;~ 2331:1BBC
loc_334ae:
	// 9566 
cs=0x2331;eip=0x001bbe; 	T(CMP(unk_57042, 1));	// 80281 cmp     byte ptr unk_57042, 1 ;~ 2331:1BBE
cs=0x2331;eip=0x001bc3; 	R(JC(loc_334cc));	// 80282 jb      short loc_334CC ;~ 2331:1BC3
cs=0x2331;eip=0x001bc5; 	T(MOV(ax, *(dw*)((&unk_56ff0))));	// 80283 mov     ax, word ptr unk_56FF0 ;~ 2331:1BC5
cs=0x2331;eip=0x001bc8; 	T(ADD(ax, *(dw*)((&unk_56ff2))));	// 80284 add     ax, word ptr unk_56FF2 ;~ 2331:1BC8
cs=0x2331;eip=0x001bcc; 	T(CMP(ax, 6));	// 80285 cmp     ax, 6 ;~ 2331:1BCC
cs=0x2331;eip=0x001bcf; 	R(JL(loc_334cc));	// 80286 jl      short loc_334CC ;~ 2331:1BCF
cs=0x2331;eip=0x001bd1; 	T(CMP(*(raddr(ss,bp+var_2)), 0));	// 80287 cmp     [bp+var_2], 0 ;~ 2331:1BD1
cs=0x2331;eip=0x001bd5; 	R(JZ(loc_334cc));	// 80288 jz      short loc_334CC ;~ 2331:1BD5
cs=0x2331;eip=0x001bd7; 	X(OR(unk_56fed, 0x10));	// 80289 or      byte ptr unk_56FED, 10h ;~ 2331:1BD7
loc_334cc:
	// 9567 
cs=0x2331;eip=0x001bdc; 	T(CMP(unk_56fee, 4));	// 80293 cmp     byte ptr unk_56FEE, 4 ;~ 2331:1BDC
cs=0x2331;eip=0x001be1; 	R(JC(loc_334df));	// 80294 jb      short loc_334DF ;~ 2331:1BE1
cs=0x2331;eip=0x001be3; 	T(TEST(unk_56fec, 2));	// 80295 test    byte ptr unk_56FEC, 2 ;~ 2331:1BE3
cs=0x2331;eip=0x001be8; 	R(JNZ(loc_334df));	// 80296 jnz     short loc_334DF ;~ 2331:1BE8
cs=0x2331;eip=0x001bea; 	X(OR(unk_56fed, 2));	// 80297 or      byte ptr unk_56FED, 2 ;~ 2331:1BEA
loc_334df:
	// 9568 
cs=0x2331;eip=0x001bef; 	T(MOV(al, unk_56fef));	// 80301 mov     al, byte ptr unk_56FEF ;~ 2331:1BEF
cs=0x2331;eip=0x001bf2; 	T(AND(al, 7));	// 80302 and     al, 7 ;~ 2331:1BF2
cs=0x2331;eip=0x001bf4; 	T(CMP(al, 7));	// 80303 cmp     al, 7 ;~ 2331:1BF4
cs=0x2331;eip=0x001bf6; 	R(JNZ(loc_334f4));	// 80304 jnz     short loc_334F4 ;~ 2331:1BF6
cs=0x2331;eip=0x001bf8; 	T(TEST(unk_56fec, 0x40));	// 80305 test    byte ptr unk_56FEC, 40h ;~ 2331:1BF8
cs=0x2331;eip=0x001bfd; 	R(JNZ(loc_334f4));	// 80306 jnz     short loc_334F4 ;~ 2331:1BFD
cs=0x2331;eip=0x001bff; 	X(OR(unk_56fed, 0x40));	// 80307 or      byte ptr unk_56FED, 40h ;~ 2331:1BFF
loc_334f4:
	// 9569 
cs=0x2331;eip=0x001c04; 	T(MOV(al, unk_56fed));	// 80311 mov     al, byte ptr unk_56FED ;~ 2331:1C04
cs=0x2331;eip=0x001c07; 	X(OR(unk_56fec, al));	// 80312 or      byte ptr unk_56FEC, al ;~ 2331:1C07
loc_334fb:
	// 9570 
cs=0x2331;eip=0x001c0b; 	T(MOV(sp, bp));	// 80315 mov     sp, bp ;~ 2331:1C0B
cs=0x2331;eip=0x001c0d; 	X(POP(bp));	// 80316 pop     bp ;~ 2331:1C0D
cs=0x2331;eip=0x001c0e; 	R(RETF(0));	// 80317 retf ;~ 2331:1C0E
sub_334ff:
	// 80324 
cs=0x2331;eip=0x001c0f; 	T(CMP(*(dw*)((&unk_56fe9)), 0));	// 80326 cmp     word ptr unk_56FE9, 0 ;~ 2331:1C0F
cs=0x2331;eip=0x001c14; 	R(JL(loc_33515));	// 80327 jl      short loc_33515 ;~ 2331:1C14
cs=0x2331;eip=0x001c16; 	R(JG(loc_33510));	// 80328 jg      short loc_33510 ;~ 2331:1C16
cs=0x2331;eip=0x001c18; 	T(CMP(*(dw*)((&unk_56fe7)), 0x61A8));	// 80329 cmp     word ptr unk_56FE7, 61A8h ;~ 2331:1C18
cs=0x2331;eip=0x001c1e; 	R(JC(loc_33515));	// 80330 jb      short loc_33515 ;~ 2331:1C1E
loc_33510:
	// 9571 
cs=0x2331;eip=0x001c20; 	T(MOV(ax, 5));	// 80333 mov     ax, 5 ;~ 2331:1C20
cs=0x2331;eip=0x001c23; 	R(JMP(locret_3354b));	// 80334 jmp     short locret_3354B ;~ 2331:1C23
loc_33515:
	// 9572 
cs=0x2331;eip=0x001c25; 	T(CMP(*(dw*)((&unk_56fe7)), 0x3E80));	// 80339 cmp     word ptr unk_56FE7, 3E80h ;~ 2331:1C25
cs=0x2331;eip=0x001c2b; 	R(JC(loc_33522));	// 80340 jb      short loc_33522 ;~ 2331:1C2B
cs=0x2331;eip=0x001c2d; 	T(MOV(ax, 4));	// 80341 mov     ax, 4 ;~ 2331:1C2D
cs=0x2331;eip=0x001c30; 	R(JMP(locret_3354b));	// 80342 jmp     short locret_3354B ;~ 2331:1C30
loc_33522:
	// 9573 
cs=0x2331;eip=0x001c32; 	T(CMP(*(dw*)((&unk_56fe7)), 0x2710));	// 80346 cmp     word ptr unk_56FE7, 2710h ;~ 2331:1C32
cs=0x2331;eip=0x001c38; 	R(JC(loc_3352f));	// 80347 jb      short loc_3352F ;~ 2331:1C38
cs=0x2331;eip=0x001c3a; 	T(MOV(ax, 3));	// 80348 mov     ax, 3 ;~ 2331:1C3A
cs=0x2331;eip=0x001c3d; 	R(JMP(locret_3354b));	// 80349 jmp     short locret_3354B ;~ 2331:1C3D
loc_3352f:
	// 9574 
cs=0x2331;eip=0x001c3f; 	T(CMP(*(dw*)((&unk_56fe7)), 0x1770));	// 80353 cmp     word ptr unk_56FE7, 1770h ;~ 2331:1C3F
cs=0x2331;eip=0x001c45; 	R(JC(loc_3353c));	// 80354 jb      short loc_3353C ;~ 2331:1C45
cs=0x2331;eip=0x001c47; 	T(MOV(ax, 2));	// 80355 mov     ax, 2 ;~ 2331:1C47
cs=0x2331;eip=0x001c4a; 	R(JMP(locret_3354b));	// 80356 jmp     short locret_3354B ;~ 2331:1C4A
loc_3353c:
	// 9575 
cs=0x2331;eip=0x001c4c; 	T(CMP(*(dw*)((&unk_56fe7)), 0x7D0));	// 80360 cmp     word ptr unk_56FE7, 7D0h ;~ 2331:1C4C
cs=0x2331;eip=0x001c52; 	R(JC(loc_33549));	// 80361 jb      short loc_33549 ;~ 2331:1C52
cs=0x2331;eip=0x001c54; 	T(MOV(ax, 1));	// 80362 mov     ax, 1 ;~ 2331:1C54
cs=0x2331;eip=0x001c57; 	R(JMP(locret_3354b));	// 80363 jmp     short locret_3354B ;~ 2331:1C57
loc_33549:
	// 9576 
cs=0x2331;eip=0x001c59; 	T(SUB(ax, ax));	// 80367 sub     ax, ax ;~ 2331:1C59
locret_3354b:
	// 9577 
cs=0x2331;eip=0x001c5b; 	R(RETN(0));	// 80371 retn ;~ 2331:1C5B
sub_3354c:
	// 80379 
#undef var_2
#define var_2 -2
	// 80381 var_2           = word ptr -2 ;~ 2331:1C5C
cs=0x2331;eip=0x001c5c; 	X(PUSH(bp));	// 80383 push    bp ;~ 2331:1C5C
cs=0x2331;eip=0x001c5d; 	T(MOV(bp, sp));	// 80384 mov     bp, sp ;~ 2331:1C5D
cs=0x2331;eip=0x001c5f; 	T(SUB(sp, 6));	// 80385 sub     sp, 6 ;~ 2331:1C5F
cs=0x2331;eip=0x001c62; 	X(PUSH(di));	// 80386 push    di ;~ 2331:1C62
cs=0x2331;eip=0x001c63; 	X(PUSH(si));	// 80387 push    si ;~ 2331:1C63
cs=0x2331;eip=0x001c64; 	T(MOV(ax, 0x2622));	// 80388 mov     ax, 2622h ;~ 2331:1C64
cs=0x2331;eip=0x001c67; 	X(PUSH(ax));	// 80389 push    ax ;~ 2331:1C67
cs=0x2331;eip=0x001c68; 	T(ax = bp+var_2);	// 80390 lea     ax, [bp+var_2] ;~ 2331:1C68
cs=0x2331;eip=0x001c6b; 	X(PUSH(ax));	// 80391 push    ax ;~ 2331:1C6B
cs=0x2331;eip=0x001c6c; 	R(CALLF(sub_31643,0));	// 80392 call    sub_31643 ;~ 2331:1C6C
cs=0x2331;eip=0x001c71; 	X(MOV(*(dw*)((&unk_5444a)), ax));	// 80393 mov     word ptr unk_5444A, ax ;~ 2331:1C71
cs=0x2331;eip=0x001c74; 	X(MOV(*(dw*)((&unk_5444c)), dx));	// 80394 mov     word ptr unk_5444C, dx ;~ 2331:1C74
cs=0x2331;eip=0x001c78; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 80395 push    [bp+var_2] ;~ 2331:1C78
cs=0x2331;eip=0x001c7b; 	R(CALL(sub_3368f,0));	// 80396 call    sub_3368F ;~ 2331:1C7B
cs=0x2331;eip=0x001c7e; 	X(MOV(*(dw*)((&unk_54440)), 0x0FF0A));	// 80397 mov     word ptr unk_54440, 0FF0Ah ;~ 2331:1C7E
cs=0x2331;eip=0x001c84; 	T(SUB(ax, ax));	// 80398 sub     ax, ax ;~ 2331:1C84
cs=0x2331;eip=0x001c86; 	X(MOV(*(dw*)((&unk_54448)), ax));	// 80399 mov     word ptr unk_54448, ax ;~ 2331:1C86
cs=0x2331;eip=0x001c89; 	X(MOV(*(dw*)((&unk_54442)), ax));	// 80400 mov     word ptr unk_54442, ax ;~ 2331:1C89
cs=0x2331;eip=0x001c8c; 	R(CALL(sub_3321b,0));	// 80401 call    sub_3321B ;~ 2331:1C8C
cs=0x2331;eip=0x001c8f; 	T(MOV(ax, 0x79));	// 80402 mov     ax, 79h ; 'y' ;~ 2331:1C8F
cs=0x2331;eip=0x001c92; 	X(PUSH(ax));	// 80403 push    ax ;~ 2331:1C92
cs=0x2331;eip=0x001c93; 	R(CALL(sub_33056,0));	// 80404 call    sub_33056 ;~ 2331:1C93
cs=0x2331;eip=0x001c96; 	X(PUSH(ax));	// 80405 push    ax ;~ 2331:1C96
cs=0x2331;eip=0x001c97; 	R(CALL(sub_33198,0));	// 80406 call    sub_33198 ;~ 2331:1C97
cs=0x2331;eip=0x001c9a; 	R(CALL(sub_33713,0));	// 80407 call    sub_33713 ;~ 2331:1C9A
cs=0x2331;eip=0x001c9d; 	X(PUSH(*(dw*)((&unk_5651c))));	// 80408 push    word ptr unk_5651C ;~ 2331:1C9D
cs=0x2331;eip=0x001ca1; 	X(PUSH(word_5651a));	// 80409 push    word_5651A ;~ 2331:1CA1
cs=0x2331;eip=0x001ca5; 	R(CALLF(sub_3174e,0));	// 80410 call    sub_3174E ;~ 2331:1CA5
loc_3359a:
	// 9578 
cs=0x2331;eip=0x001caa; 	T(MOV(ax, *(dw*)((&unk_54448))));	// 80414 mov     ax, word ptr unk_54448 ;~ 2331:1CAA
cs=0x2331;eip=0x001cad; 	T(CWD);	// 80415 cwd ;~ 2331:1CAD
cs=0x2331;eip=0x001cae; 	T(MOV(cx, 0x0C));	// 80416 mov     cx, 0Ch ;~ 2331:1CAE
cs=0x2331;eip=0x001cb1; 	T(IDIV2(cx));	// 80417 idiv    cx ;~ 2331:1CB1
cs=0x2331;eip=0x001cb3; 	T(MOV(si, dx));	// 80418 mov     si, dx ;~ 2331:1CB3
cs=0x2331;eip=0x001cb5; 	R(CALL(sub_33248,0));	// 80419 call    sub_33248 ;~ 2331:1CB5
cs=0x2331;eip=0x001cb8; 	T(MOV(di, ax));	// 80420 mov     di, ax ;~ 2331:1CB8
cs=0x2331;eip=0x001cba; 	T(CMP(ax, 0x4900));	// 80421 cmp     ax, 4900h ;~ 2331:1CBA
cs=0x2331;eip=0x001cbd; 	R(JZ(loc_335df));	// 80422 jz      short loc_335DF ;~ 2331:1CBD
cs=0x2331;eip=0x001cbf; 	R(JG(loc_33621));	// 80423 jg      short loc_33621 ;~ 2331:1CBF
cs=0x2331;eip=0x001cc1; 	T(CMP(ax, 0x0D));	// 80424 cmp     ax, 0Dh ;~ 2331:1CC1
cs=0x2331;eip=0x001cc4; 	R(JZ(loc_335ca));	// 80425 jz      short loc_335CA ;~ 2331:1CC4
cs=0x2331;eip=0x001cc6; 	T(CMP(ax, 0x1B));	// 80426 cmp     ax, 1Bh ;~ 2331:1CC6
cs=0x2331;eip=0x001cc9; 	R(JNZ(loc_335be));	// 80427 jnz     short loc_335BE ;~ 2331:1CC9
cs=0x2331;eip=0x001ccb; 	R(JMP(loc_33674));	// 80428 jmp     loc_33674 ;~ 2331:1CCB
loc_335be:
	// 9579 
cs=0x2331;eip=0x001cce; 	T(CMP(ax, 0x4700));	// 80432 cmp     ax, 4700h ;~ 2331:1CCE
cs=0x2331;eip=0x001cd1; 	R(JZ(loc_3360b));	// 80433 jz      short loc_3360B ;~ 2331:1CD1
cs=0x2331;eip=0x001cd3; 	T(CMP(ax, 0x4800));	// 80434 cmp     ax, 4800h ;~ 2331:1CD3
cs=0x2331;eip=0x001cd6; 	R(JZ(loc_33615));	// 80435 jz      short loc_33615 ;~ 2331:1CD6
cs=0x2331;eip=0x001cd8; 	R(JMP(loc_3359a));	// 80436 jmp     short loc_3359A ;~ 2331:1CD8
loc_335ca:
	// 9580 
cs=0x2331;eip=0x001cda; 	X(PUSH(word_5651a));	// 80440 push    word_5651A ;~ 2331:1CDA
cs=0x2331;eip=0x001cde; 	R(CALLF(sub_202f1,0));	// 80441 call    sub_202F1 ;~ 2331:1CDE
cs=0x2331;eip=0x001ce3; 	T(CMP(*(dw*)((&byte_47b2e)), 0));	// 80442 cmp     word ptr byte_47B2E, 0 ;~ 2331:1CE3
cs=0x2331;eip=0x001ce8; 	R(JNZ(loc_3363d));	// 80443 jnz     short loc_3363D ;~ 2331:1CE8
cs=0x2331;eip=0x001cea; 	T(MOV(ax, 0x5A0F));	// 80444 mov     ax, 5A0Fh ;~ 2331:1CEA
cs=0x2331;eip=0x001ced; 	R(JMP(loc_33640));	// 80445 jmp     short loc_33640 ;~ 2331:1CED
loc_335df:
	// 9581 
cs=0x2331;eip=0x001cef; 	T(OR(si, si));	// 80449 or      si, si ;~ 2331:1CEF
cs=0x2331;eip=0x001cf1; 	R(JLE(loc_335e7));	// 80450 jle     short loc_335E7 ;~ 2331:1CF1
cs=0x2331;eip=0x001cf3; 	T(MOV(ax, si));	// 80451 mov     ax, si ;~ 2331:1CF3
cs=0x2331;eip=0x001cf5; 	R(JMP(loc_335ea));	// 80452 jmp     short loc_335EA ;~ 2331:1CF5
loc_335e7:
	// 9582 
cs=0x2331;eip=0x001cf7; 	T(MOV(ax, 0x0C));	// 80456 mov     ax, 0Ch ;~ 2331:1CF7
loc_335ea:
	// 9583 
cs=0x2331;eip=0x001cfa; 	T(MOV(cx, *(dw*)((&unk_54448))));	// 80459 mov     cx, word ptr unk_54448 ;~ 2331:1CFA
cs=0x2331;eip=0x001cfe; 	T(SUB(cx, ax));	// 80460 sub     cx, ax ;~ 2331:1CFE
cs=0x2331;eip=0x001d00; 	X(PUSH(cx));	// 80461 push    cx ;~ 2331:1D00
loc_335f1:
	// 9584 
cs=0x2331;eip=0x001d01; 	R(CALL(sub_33825,0));	// 80464 call    sub_33825 ;~ 2331:1D01
cs=0x2331;eip=0x001d04; 	R(JMP(loc_3359a));	// 80465 jmp     short loc_3359A ;~ 2331:1D04
loc_335f6:
	// 9585 
cs=0x2331;eip=0x001d06; 	T(CMP(si, 0x0B));	// 80469 cmp     si, 0Bh ;~ 2331:1D06
cs=0x2331;eip=0x001d09; 	R(JGE(loc_33602));	// 80470 jge     short loc_33602 ;~ 2331:1D09
cs=0x2331;eip=0x001d0b; 	T(MOV(ax, 0x0B));	// 80471 mov     ax, 0Bh ;~ 2331:1D0B
cs=0x2331;eip=0x001d0e; 	T(SUB(ax, si));	// 80472 sub     ax, si ;~ 2331:1D0E
cs=0x2331;eip=0x001d10; 	R(JMP(loc_33605));	// 80473 jmp     short loc_33605 ;~ 2331:1D10
loc_33602:
	// 9586 
cs=0x2331;eip=0x001d12; 	T(MOV(ax, 0x0C));	// 80477 mov     ax, 0Ch ;~ 2331:1D12
loc_33605:
	// 9587 
cs=0x2331;eip=0x001d15; 	T(ADD(ax, *(dw*)((&unk_54448))));	// 80480 add     ax, word ptr unk_54448 ;~ 2331:1D15
cs=0x2331;eip=0x001d19; 	R(JMP(loc_3361e));	// 80481 jmp     short loc_3361E ;~ 2331:1D19
loc_3360b:
	// 9588 
cs=0x2331;eip=0x001d1b; 	T(SUB(ax, ax));	// 80485 sub     ax, ax ;~ 2331:1D1B
cs=0x2331;eip=0x001d1d; 	R(JMP(loc_3361e));	// 80486 jmp     short loc_3361E ;~ 2331:1D1D
loc_3360f:
	// 9589 
cs=0x2331;eip=0x001d1f; 	T(MOV(ax, *(dw*)((&unk_54446))));	// 80490 mov     ax, word ptr unk_54446 ;~ 2331:1D1F
loc_33612:
	// 9590 
cs=0x2331;eip=0x001d22; 	T(DEC(ax));	// 80493 dec     ax ;~ 2331:1D22
cs=0x2331;eip=0x001d23; 	R(JMP(loc_3361e));	// 80494 jmp     short loc_3361E ;~ 2331:1D23
loc_33615:
	// 9591 
cs=0x2331;eip=0x001d25; 	T(MOV(ax, *(dw*)((&unk_54448))));	// 80499 mov     ax, word ptr unk_54448 ;~ 2331:1D25
cs=0x2331;eip=0x001d28; 	R(JMP(loc_33612));	// 80500 jmp     short loc_33612 ;~ 2331:1D28
loc_3361a:
	// 9592 
cs=0x2331;eip=0x001d2a; 	T(MOV(ax, *(dw*)((&unk_54448))));	// 80505 mov     ax, word ptr unk_54448 ;~ 2331:1D2A
cs=0x2331;eip=0x001d2d; 	T(INC(ax));	// 80506 inc     ax ;~ 2331:1D2D
loc_3361e:
	// 9593 
cs=0x2331;eip=0x001d2e; 	X(PUSH(ax));	// 80510 push    ax ;~ 2331:1D2E
cs=0x2331;eip=0x001d2f; 	R(JMP(loc_335f1));	// 80511 jmp     short loc_335F1 ;~ 2331:1D2F
loc_33621:
	// 9594 
cs=0x2331;eip=0x001d31; 	T(CMP(ax, 0x4B00));	// 80515 cmp     ax, 4B00h ;~ 2331:1D31
cs=0x2331;eip=0x001d34; 	R(JZ(loc_33615));	// 80516 jz      short loc_33615 ;~ 2331:1D34
cs=0x2331;eip=0x001d36; 	T(CMP(ax, 0x4D00));	// 80517 cmp     ax, 4D00h ;~ 2331:1D36
cs=0x2331;eip=0x001d39; 	R(JZ(loc_3361a));	// 80518 jz      short loc_3361A ;~ 2331:1D39
cs=0x2331;eip=0x001d3b; 	T(CMP(ax, 0x4F00));	// 80519 cmp     ax, 4F00h ;~ 2331:1D3B
cs=0x2331;eip=0x001d3e; 	R(JZ(loc_3360f));	// 80520 jz      short loc_3360F ;~ 2331:1D3E
cs=0x2331;eip=0x001d40; 	T(CMP(ax, 0x5000));	// 80521 cmp     ax, 5000h ;~ 2331:1D40
cs=0x2331;eip=0x001d43; 	R(JZ(loc_3361a));	// 80522 jz      short loc_3361A ;~ 2331:1D43
cs=0x2331;eip=0x001d45; 	T(CMP(ax, 0x5100));	// 80523 cmp     ax, 5100h ;~ 2331:1D45
cs=0x2331;eip=0x001d48; 	R(JZ(loc_335f6));	// 80524 jz      short loc_335F6 ;~ 2331:1D48
cs=0x2331;eip=0x001d4a; 	R(JMP(loc_3359a));	// 80525 jmp     loc_3359A ;~ 2331:1D4A
loc_3363d:
	// 9595 
cs=0x2331;eip=0x001d4d; 	T(MOV(ax, 0x0FF02));	// 80529 mov     ax, 0FF02h ;~ 2331:1D4D
loc_33640:
	// 9596 
cs=0x2331;eip=0x001d50; 	X(MOV(*(dw*)((&unk_54440)), ax));	// 80532 mov     word ptr unk_54440, ax ;~ 2331:1D50
cs=0x2331;eip=0x001d53; 	X(PUSH(*(dw*)((&unk_54448))));	// 80533 push    word ptr unk_54448 ;~ 2331:1D53
cs=0x2331;eip=0x001d57; 	R(CALL(sub_338a1,0));	// 80534 call    sub_338A1 ;~ 2331:1D57
cs=0x2331;eip=0x001d5a; 	T(MOV(ax, 1));	// 80535 mov     ax, 1 ;~ 2331:1D5A
cs=0x2331;eip=0x001d5d; 	T(SUB(ax, word_5651a));	// 80536 sub     ax, word_5651A ;~ 2331:1D5D
cs=0x2331;eip=0x001d61; 	X(PUSH(ax));	// 80537 push    ax ;~ 2331:1D61
cs=0x2331;eip=0x001d62; 	R(CALLF(sub_202f1,0));	// 80538 call    sub_202F1 ;~ 2331:1D62
cs=0x2331;eip=0x001d67; 	T(MOV(ax, 0x0F615));	// 80539 mov     ax, 0F615h ;~ 2331:1D67
cs=0x2331;eip=0x001d6a; 	X(PUSH(ax));	// 80540 push    ax ;~ 2331:1D6A
cs=0x2331;eip=0x001d6b; 	T(MOV(ax, 0x37));	// 80541 mov     ax, 37h ; '7' ;~ 2331:1D6B
cs=0x2331;eip=0x001d6e; 	X(IMUL1_2(*(dw*)((&unk_54448))));	// 80542 imul    word ptr unk_54448 ;~ 2331:1D6E
cs=0x2331;eip=0x001d72; 	T(ADD(ax, *(dw*)((&unk_5444a))));	// 80543 add     ax, word ptr unk_5444A ;~ 2331:1D72
cs=0x2331;eip=0x001d76; 	T(MOV(dx, *(dw*)((&unk_5444c))));	// 80544 mov     dx, word ptr unk_5444C ;~ 2331:1D76
cs=0x2331;eip=0x001d7a; 	T(ADD(ax, 0x28));	// 80545 add     ax, 28h ; '(' ;~ 2331:1D7A
cs=0x2331;eip=0x001d7d; 	X(PUSH(dx));	// 80546 push    dx ;~ 2331:1D7D
cs=0x2331;eip=0x001d7e; 	X(PUSH(ax));	// 80547 push    ax ;~ 2331:1D7E
cs=0x2331;eip=0x001d7f; 	R(CALLF(sub_318f0,0));	// 80548 call    sub_318F0 ;~ 2331:1D7F
loc_33674:
	// 9597 
cs=0x2331;eip=0x001d84; 	X(PUSH(*(dw*)((&unk_5444c))));	// 80551 push    word ptr unk_5444C ;~ 2331:1D84
cs=0x2331;eip=0x001d88; 	R(CALLF(sub_2397c,0));	// 80552 call    sub_2397C ;~ 2331:1D88
cs=0x2331;eip=0x001d8d; 	T(CMP(di, 0x1B));	// 80553 cmp     di, 1Bh ;~ 2331:1D8D
cs=0x2331;eip=0x001d90; 	R(JZ(loc_33687));	// 80554 jz      short loc_33687 ;~ 2331:1D90
cs=0x2331;eip=0x001d92; 	T(MOV(ax, 1));	// 80555 mov     ax, 1 ;~ 2331:1D92
cs=0x2331;eip=0x001d95; 	R(JMP(loc_33689));	// 80556 jmp     short loc_33689 ;~ 2331:1D95
loc_33687:
	// 9598 
cs=0x2331;eip=0x001d97; 	T(SUB(ax, ax));	// 80560 sub     ax, ax ;~ 2331:1D97
loc_33689:
	// 9599 
cs=0x2331;eip=0x001d99; 	X(POP(si));	// 80563 pop     si ;~ 2331:1D99
cs=0x2331;eip=0x001d9a; 	X(POP(di));	// 80564 pop     di ;~ 2331:1D9A
cs=0x2331;eip=0x001d9b; 	T(MOV(sp, bp));	// 80565 mov     sp, bp ;~ 2331:1D9B
cs=0x2331;eip=0x001d9d; 	X(POP(bp));	// 80566 pop     bp ;~ 2331:1D9D
cs=0x2331;eip=0x001d9e; 	R(RETF(0));	// 80567 retf ;~ 2331:1D9E
sub_3368f:
	// 80575 
#undef var_4
#define var_4 -4
	// 80577 var_4           = dword ptr -4 ;~ 2331:1D9F
#undef arg_0
#define arg_0 4
	// 80578 arg_0           = word ptr  4 ;~ 2331:1D9F
cs=0x2331;eip=0x001d9f; 	X(PUSH(bp));	// 80580 push    bp ;~ 2331:1D9F
cs=0x2331;eip=0x001da0; 	T(MOV(bp, sp));	// 80581 mov     bp, sp ;~ 2331:1DA0
cs=0x2331;eip=0x001da2; 	T(SUB(sp, 6));	// 80582 sub     sp, 6 ;~ 2331:1DA2
cs=0x2331;eip=0x001da5; 	X(PUSH(di));	// 80583 push    di ;~ 2331:1DA5
cs=0x2331;eip=0x001da6; 	X(PUSH(si));	// 80584 push    si ;~ 2331:1DA6
cs=0x2331;eip=0x001da7; 	T(MOV(cx, 0x37));	// 80585 mov     cx, 37h ; '7' ;~ 2331:1DA7
cs=0x2331;eip=0x001daa; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 80586 mov     ax, [bp+arg_0] ;~ 2331:1DAA
cs=0x2331;eip=0x001dad; 	T(CWD);	// 80587 cwd ;~ 2331:1DAD
cs=0x2331;eip=0x001dae; 	T(IDIV2(cx));	// 80588 idiv    cx ;~ 2331:1DAE
cs=0x2331;eip=0x001db0; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 80589 mov     [bp+arg_0], ax ;~ 2331:1DB0
cs=0x2331;eip=0x001db3; 	X(MOV(*(dw*)((&unk_54446)), 0));	// 80590 mov     word ptr unk_54446, 0 ;~ 2331:1DB3
cs=0x2331;eip=0x001db9; 	T(SUB(si, si));	// 80591 sub     si, si ;~ 2331:1DB9
cs=0x2331;eip=0x001dbb; 	T(MOV(ax, *(dw*)((&unk_5444a))));	// 80592 mov     ax, word ptr unk_5444A ;~ 2331:1DBB
cs=0x2331;eip=0x001dbe; 	T(MOV(dx, *(dw*)((&unk_5444c))));	// 80593 mov     dx, word ptr unk_5444C ;~ 2331:1DBE
cs=0x2331;eip=0x001dc2; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 80594 mov     word ptr [bp+var_4], ax ;~ 2331:1DC2
cs=0x2331;eip=0x001dc5; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 80595 mov     word ptr [bp+var_4+2], dx ;~ 2331:1DC5
cs=0x2331;eip=0x001dc8; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 80596 mov     di, [bp+arg_0] ;~ 2331:1DC8
cs=0x2331;eip=0x001dcb; 	R(JMP(loc_33704));	// 80597 jmp     short loc_33704 ;~ 2331:1DCB
loc_336bd:
	// 9600 
cs=0x2331;eip=0x001dcd; 	T(DEC(di));	// 80601 dec     di ;~ 2331:1DCD
cs=0x2331;eip=0x001dce; 	T(CMP(di, *(dw*)((&unk_54446))));	// 80602 cmp     di, word ptr unk_54446 ;~ 2331:1DCE
cs=0x2331;eip=0x001dd2; 	R(JLE(loc_33704));	// 80603 jle     short loc_33704 ;~ 2331:1DD2
cs=0x2331;eip=0x001dd4; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 80604 mov     ax, word ptr [bp+var_4] ;~ 2331:1DD4
cs=0x2331;eip=0x001dd7; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 80605 mov     dx, word ptr [bp+var_4+2] ;~ 2331:1DD7
cs=0x2331;eip=0x001dda; 	T(ADD(ax, 0x37));	// 80606 add     ax, 37h ; '7' ;~ 2331:1DDA
cs=0x2331;eip=0x001ddd; 	X(PUSH(dx));	// 80607 push    dx ;~ 2331:1DDD
cs=0x2331;eip=0x001dde; 	X(PUSH(ax));	// 80608 push    ax ;~ 2331:1DDE
cs=0x2331;eip=0x001ddf; 	X(PUSH(dx));	// 80609 push    dx ;~ 2331:1DDF
cs=0x2331;eip=0x001de0; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 80610 push    word ptr [bp+var_4] ;~ 2331:1DE0
cs=0x2331;eip=0x001de3; 	T(MOV(ax, di));	// 80611 mov     ax, di ;~ 2331:1DE3
cs=0x2331;eip=0x001de5; 	T(SUB(ax, *(dw*)((&unk_54446))));	// 80612 sub     ax, word ptr unk_54446 ;~ 2331:1DE5
cs=0x2331;eip=0x001de9; 	T(MOV(cx, 0x37));	// 80613 mov     cx, 37h ; '7' ;~ 2331:1DE9
cs=0x2331;eip=0x001dec; 	T(IMUL1_2(cx));	// 80614 imul    cx ;~ 2331:1DEC
cs=0x2331;eip=0x001dee; 	X(PUSH(ax));	// 80615 push    ax ;~ 2331:1DEE
cs=0x2331;eip=0x001def; 	R(CALLF(sub_210f1,0));	// 80616 call    sub_210F1 ;~ 2331:1DEF
cs=0x2331;eip=0x001df4; 	R(JMP(loc_33704));	// 80617 jmp     short loc_33704 ;~ 2331:1DF4
loc_336e6:
	// 9601 
cs=0x2331;eip=0x001df6; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 80621 les     bx, [bp+var_4] ;~ 2331:1DF6
cs=0x2331;eip=0x001df9; 	T(MOV(al, *(raddr(es,bx+0x36))));	// 80622 mov     al, es:[bx+36h] ;~ 2331:1DF9
cs=0x2331;eip=0x001dfd; 	T(CBW);	// 80623 cbw ;~ 2331:1DFD
cs=0x2331;eip=0x001dfe; 	T(MOV(dx, 1));	// 80624 mov     dx, 1 ;~ 2331:1DFE
cs=0x2331;eip=0x001e01; 	T(MOV(cl, unk_57043));	// 80625 mov     cl, byte ptr unk_57043 ;~ 2331:1E01
cs=0x2331;eip=0x001e05; 	T(SHL(dx, cl));	// 80626 shl     dx, cl ;~ 2331:1E05
cs=0x2331;eip=0x001e07; 	T(TEST(ax, dx));	// 80627 test    ax, dx ;~ 2331:1E07
cs=0x2331;eip=0x001e09; 	R(JZ(loc_336bd));	// 80628 jz      short loc_336BD ;~ 2331:1E09
cs=0x2331;eip=0x001e0b; 	X(INC(*(dw*)((&unk_54446))));	// 80629 inc     word ptr unk_54446 ;~ 2331:1E0B
cs=0x2331;eip=0x001e0f; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_4))), 0x37));	// 80630 add     word ptr [bp+var_4], 37h ; '7' ;~ 2331:1E0F
cs=0x2331;eip=0x001e13; 	T(INC(si));	// 80631 inc     si ;~ 2331:1E13
loc_33704:
	// 9602 
cs=0x2331;eip=0x001e14; 	T(CMP(di, si));	// 80635 cmp     di, si ;~ 2331:1E14
cs=0x2331;eip=0x001e16; 	R(JG(loc_336e6));	// 80636 jg      short loc_336E6 ;~ 2331:1E16
cs=0x2331;eip=0x001e18; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), di));	// 80637 mov     [bp+arg_0], di ;~ 2331:1E18
cs=0x2331;eip=0x001e1b; 	X(POP(si));	// 80638 pop     si ;~ 2331:1E1B
cs=0x2331;eip=0x001e1c; 	X(POP(di));	// 80639 pop     di ;~ 2331:1E1C
cs=0x2331;eip=0x001e1d; 	T(MOV(sp, bp));	// 80640 mov     sp, bp ;~ 2331:1E1D
cs=0x2331;eip=0x001e1f; 	X(POP(bp));	// 80641 pop     bp ;~ 2331:1E1F
cs=0x2331;eip=0x001e20; 	R(RETN(2));	// 80642 retn    2 ;~ 2331:1E20
sub_33713:
	// 80650 
#undef var_56
#define var_56 -0x56
	// 80653 var_56          = word ptr -56h ;~ 2331:1E23
#undef var_50
#define var_50 -0x50
	// 80654 var_50          = byte ptr -50h ;~ 2331:1E23
cs=0x2331;eip=0x001e23; 	X(PUSH(bp));	// 80656 push    bp ;~ 2331:1E23
cs=0x2331;eip=0x001e24; 	T(MOV(bp, sp));	// 80657 mov     bp, sp ;~ 2331:1E24
cs=0x2331;eip=0x001e26; 	T(SUB(sp, 0x56));	// 80658 sub     sp, 56h ;~ 2331:1E26
cs=0x2331;eip=0x001e29; 	X(PUSH(di));	// 80659 push    di ;~ 2331:1E29
cs=0x2331;eip=0x001e2a; 	X(PUSH(si));	// 80660 push    si ;~ 2331:1E2A
cs=0x2331;eip=0x001e2b; 	R(CALL(sub_3317c,0));	// 80661 call    sub_3317C ;~ 2331:1E2B
cs=0x2331;eip=0x001e2e; 	T(MOV(ax, *(dw*)((&unk_54446))));	// 80662 mov     ax, word ptr unk_54446 ;~ 2331:1E2E
cs=0x2331;eip=0x001e31; 	T(ADD(ax, 0x0B));	// 80663 add     ax, 0Bh ;~ 2331:1E31
cs=0x2331;eip=0x001e34; 	T(CWD);	// 80664 cwd ;~ 2331:1E34
cs=0x2331;eip=0x001e35; 	T(MOV(cx, 0x0C));	// 80665 mov     cx, 0Ch ;~ 2331:1E35
cs=0x2331;eip=0x001e38; 	T(IDIV2(cx));	// 80666 idiv    cx ;~ 2331:1E38
cs=0x2331;eip=0x001e3a; 	X(PUSH(ax));	// 80667 push    ax ;~ 2331:1E3A
cs=0x2331;eip=0x001e3b; 	T(MOV(ax, *(dw*)((&unk_54448))));	// 80668 mov     ax, word ptr unk_54448 ;~ 2331:1E3B
cs=0x2331;eip=0x001e3e; 	T(CWD);	// 80669 cwd ;~ 2331:1E3E
cs=0x2331;eip=0x001e3f; 	T(IDIV2(cx));	// 80670 idiv    cx ;~ 2331:1E3F
cs=0x2331;eip=0x001e41; 	X(PUSH(ax));	// 80671 push    ax ;~ 2331:1E41
cs=0x2331;eip=0x001e42; 	R(CALLF(sub_32f79,0));	// 80672 call    sub_32F79 ;~ 2331:1E42
cs=0x2331;eip=0x001e47; 	T(ADD(sp, 4));	// 80673 add     sp, 4 ;~ 2331:1E47
cs=0x2331;eip=0x001e4a; 	T(MOV(al, unk_57043));	// 80674 mov     al, byte ptr unk_57043 ;~ 2331:1E4A
cs=0x2331;eip=0x001e4d; 	T(SUB(ah, ah));	// 80675 sub     ah, ah ;~ 2331:1E4D
cs=0x2331;eip=0x001e4f; 	T(ADD(ax, 0x38));	// 80676 add     ax, 38h ; '8' ;~ 2331:1E4F
cs=0x2331;eip=0x001e52; 	X(PUSH(ax));	// 80677 push    ax ;~ 2331:1E52
cs=0x2331;eip=0x001e53; 	R(CALL(sub_33056,0));	// 80678 call    sub_33056 ;~ 2331:1E53
cs=0x2331;eip=0x001e56; 	X(PUSH(ax));	// 80679 push    ax ;~ 2331:1E56
cs=0x2331;eip=0x001e57; 	T(MOV(ax, 0x262F));	// 80680 mov     ax, 262Fh ;~ 2331:1E57
cs=0x2331;eip=0x001e5a; 	X(PUSH(ax));	// 80681 push    ax ;~ 2331:1E5A
cs=0x2331;eip=0x001e5b; 	T(ax = bp+var_50);	// 80682 lea     ax, [bp+var_50] ;~ 2331:1E5B
cs=0x2331;eip=0x001e5e; 	X(PUSH(ax));	// 80683 push    ax ;~ 2331:1E5E
cs=0x2331;eip=0x001e5f; 	R(CALLF(sub_2f1d9,0));	// 80684 call    sub_2F1D9 ;~ 2331:1E5F
cs=0x2331;eip=0x001e64; 	T(ADD(sp, 6));	// 80685 add     sp, 6 ;~ 2331:1E64
cs=0x2331;eip=0x001e67; 	T(MOV(al, unk_57042));	// 80686 mov     al, byte ptr unk_57042 ;~ 2331:1E67
cs=0x2331;eip=0x001e6a; 	T(SUB(ah, ah));	// 80687 sub     ah, ah ;~ 2331:1E6A
cs=0x2331;eip=0x001e6c; 	T(ADD(ax, 0x2B));	// 80688 add     ax, 2Bh ; '+' ;~ 2331:1E6C
cs=0x2331;eip=0x001e6f; 	X(PUSH(ax));	// 80689 push    ax ;~ 2331:1E6F
cs=0x2331;eip=0x001e70; 	R(CALL(sub_33056,0));	// 80690 call    sub_33056 ;~ 2331:1E70
cs=0x2331;eip=0x001e73; 	X(PUSH(ax));	// 80691 push    ax ;~ 2331:1E73
cs=0x2331;eip=0x001e74; 	T(MOV(ax, 0x2639));	// 80692 mov     ax, 2639h ;~ 2331:1E74
cs=0x2331;eip=0x001e77; 	X(PUSH(ax));	// 80693 push    ax ;~ 2331:1E77
cs=0x2331;eip=0x001e78; 	X(PUSH(di));	// 80694 push    di ;~ 2331:1E78
cs=0x2331;eip=0x001e79; 	T(di = bp+var_50);	// 80695 lea     di, [bp+var_50] ;~ 2331:1E79
cs=0x2331;eip=0x001e7c; 	T(MOV(ax, ss));	// 80696 mov     ax, ss ;~ 2331:1E7C
cs=0x2331;eip=0x001e7e; 	T(MOV(es, ax));	// 80697 mov     es, ax ;~ 2331:1E7E
cs=0x2331;eip=0x001e80; 	T(MOV(cx, 0x0FFFF));	// 80698 mov     cx, 0FFFFh ;~ 2331:1E80
cs=0x2331;eip=0x001e83; 	T(XOR(ax, ax));	// 80699 xor     ax, ax ;~ 2331:1E83
	// 80700 repne scasb ;~ 2331:1E85
cs=0x2331;eip=0x001e85; 	T(	REPNE SCASB);	// 80700 repne scasb ;~ 2331:1E85
cs=0x2331;eip=0x001e87; 	T(NOT(cx));	// 80701 not     cx ;~ 2331:1E87
cs=0x2331;eip=0x001e89; 	T(DEC(cx));	// 80702 dec     cx ;~ 2331:1E89
cs=0x2331;eip=0x001e8a; 	X(POP(di));	// 80703 pop     di ;~ 2331:1E8A
cs=0x2331;eip=0x001e8b; 	T(ADD(cx, bp));	// 80704 add     cx, bp ;~ 2331:1E8B
cs=0x2331;eip=0x001e8d; 	T(SUB(cx, 0x50));	// 80705 sub     cx, 50h ; 'P' ;~ 2331:1E8D
cs=0x2331;eip=0x001e90; 	X(PUSH(cx));	// 80706 push    cx ;~ 2331:1E90
cs=0x2331;eip=0x001e91; 	R(CALLF(sub_2f1d9,0));	// 80707 call    sub_2F1D9 ;~ 2331:1E91
cs=0x2331;eip=0x001e96; 	T(ADD(sp, 6));	// 80708 add     sp, 6 ;~ 2331:1E96
cs=0x2331;eip=0x001e99; 	T(ax = bp+var_50);	// 80709 lea     ax, [bp+var_50] ;~ 2331:1E99
cs=0x2331;eip=0x001e9c; 	X(PUSH(ax));	// 80710 push    ax ;~ 2331:1E9C
cs=0x2331;eip=0x001e9d; 	R(CALLF(sub_10496,0));	// 80711 call    sub_10496 ;~ 2331:1E9D
cs=0x2331;eip=0x001ea2; 	T(ADD(sp, 2));	// 80712 add     sp, 2 ;~ 2331:1EA2
cs=0x2331;eip=0x001ea5; 	T(MOV(ax, 0x19));	// 80713 mov     ax, 19h ;~ 2331:1EA5
cs=0x2331;eip=0x001ea8; 	X(PUSH(ax));	// 80714 push    ax ;~ 2331:1EA8
cs=0x2331;eip=0x001ea9; 	T(MOV(ax, 0x0DF));	// 80715 mov     ax, 0DFh ; 'ﬂ' ;~ 2331:1EA9
cs=0x2331;eip=0x001eac; 	X(PUSH(ax));	// 80716 push    ax ;~ 2331:1EAC
cs=0x2331;eip=0x001ead; 	T(MOV(ax, 0x20));	// 80717 mov     ax, 20h ; ' ' ;~ 2331:1EAD
cs=0x2331;eip=0x001eb0; 	X(PUSH(ax));	// 80718 push    ax ;~ 2331:1EB0
cs=0x2331;eip=0x001eb1; 	T(ax = bp+var_50);	// 80719 lea     ax, [bp+var_50] ;~ 2331:1EB1
cs=0x2331;eip=0x001eb4; 	X(PUSH(ax));	// 80720 push    ax ;~ 2331:1EB4
cs=0x2331;eip=0x001eb5; 	R(CALLF(sub_30ffa,0));	// 80721 call    sub_30FFA ;~ 2331:1EB5
cs=0x2331;eip=0x001eba; 	T(ADD(sp, 8));	// 80722 add     sp, 8 ;~ 2331:1EBA
cs=0x2331;eip=0x001ebd; 	T(MOV(ax, 0x1F));	// 80723 mov     ax, 1Fh ;~ 2331:1EBD
cs=0x2331;eip=0x001ec0; 	X(PUSH(ax));	// 80724 push    ax ;~ 2331:1EC0
cs=0x2331;eip=0x001ec1; 	T(MOV(ax, 0x0DF));	// 80725 mov     ax, 0DFh ; 'ﬂ' ;~ 2331:1EC1
cs=0x2331;eip=0x001ec4; 	X(PUSH(ax));	// 80726 push    ax ;~ 2331:1EC4
cs=0x2331;eip=0x001ec5; 	T(MOV(ax, 0x20));	// 80727 mov     ax, 20h ; ' ' ;~ 2331:1EC5
cs=0x2331;eip=0x001ec8; 	X(PUSH(ax));	// 80728 push    ax ;~ 2331:1EC8
cs=0x2331;eip=0x001ec9; 	T(MOV(ax, 0x36));	// 80729 mov     ax, 36h ; '6' ;~ 2331:1EC9
cs=0x2331;eip=0x001ecc; 	X(PUSH(ax));	// 80730 push    ax ;~ 2331:1ECC
cs=0x2331;eip=0x001ecd; 	R(CALL(sub_33056,0));	// 80731 call    sub_33056 ;~ 2331:1ECD
cs=0x2331;eip=0x001ed0; 	X(PUSH(ax));	// 80732 push    ax ;~ 2331:1ED0
cs=0x2331;eip=0x001ed1; 	R(CALLF(sub_30ffa,0));	// 80733 call    sub_30FFA ;~ 2331:1ED1
cs=0x2331;eip=0x001ed6; 	T(ADD(sp, 8));	// 80734 add     sp, 8 ;~ 2331:1ED6
cs=0x2331;eip=0x001ed9; 	R(CALL(sub_3318a,0));	// 80735 call    sub_3318A ;~ 2331:1ED9
cs=0x2331;eip=0x001edc; 	T(MOV(ax, 0x11));	// 80736 mov     ax, 11h ;~ 2331:1EDC
cs=0x2331;eip=0x001edf; 	X(PUSH(ax));	// 80737 push    ax ;~ 2331:1EDF
cs=0x2331;eip=0x001ee0; 	T(MOV(ax, 0x0DF));	// 80738 mov     ax, 0DFh ; 'ﬂ' ;~ 2331:1EE0
cs=0x2331;eip=0x001ee3; 	X(PUSH(ax));	// 80739 push    ax ;~ 2331:1EE3
cs=0x2331;eip=0x001ee4; 	T(MOV(ax, 0x20));	// 80740 mov     ax, 20h ; ' ' ;~ 2331:1EE4
cs=0x2331;eip=0x001ee7; 	X(PUSH(ax));	// 80741 push    ax ;~ 2331:1EE7
cs=0x2331;eip=0x001ee8; 	T(MOV(ax, 0x37));	// 80742 mov     ax, 37h ; '7' ;~ 2331:1EE8
cs=0x2331;eip=0x001eeb; 	X(PUSH(ax));	// 80743 push    ax ;~ 2331:1EEB
cs=0x2331;eip=0x001eec; 	R(CALL(sub_33056,0));	// 80744 call    sub_33056 ;~ 2331:1EEC
cs=0x2331;eip=0x001eef; 	X(PUSH(ax));	// 80745 push    ax ;~ 2331:1EEF
cs=0x2331;eip=0x001ef0; 	R(CALLF(sub_30ffa,0));	// 80746 call    sub_30FFA ;~ 2331:1EF0
cs=0x2331;eip=0x001ef5; 	T(ADD(sp, 8));	// 80747 add     sp, 8 ;~ 2331:1EF5
cs=0x2331;eip=0x001ef8; 	X(MOV(*(dw*)((&unk_47bde)), 0x0FF00));	// 80748 mov     word ptr unk_47BDE, 0FF00h ;~ 2331:1EF8
cs=0x2331;eip=0x001efe; 	X(MOV(unk_56885, 0));	// 80749 mov     byte ptr unk_56885, 0 ;~ 2331:1EFE
cs=0x2331;eip=0x001f03; 	T(MOV(di, *(dw*)((&unk_54448))));	// 80750 mov     di, word ptr unk_54448 ;~ 2331:1F03
cs=0x2331;eip=0x001f07; 	T(MOV(ax, di));	// 80751 mov     ax, di ;~ 2331:1F07
cs=0x2331;eip=0x001f09; 	T(CWD);	// 80752 cwd ;~ 2331:1F09
cs=0x2331;eip=0x001f0a; 	T(MOV(cx, 0x0C));	// 80753 mov     cx, 0Ch ;~ 2331:1F0A
cs=0x2331;eip=0x001f0d; 	T(IDIV2(cx));	// 80754 idiv    cx ;~ 2331:1F0D
cs=0x2331;eip=0x001f0f; 	T(SUB(di, dx));	// 80755 sub     di, dx ;~ 2331:1F0F
cs=0x2331;eip=0x001f11; 	T(MOV(si, di));	// 80756 mov     si, di ;~ 2331:1F11
cs=0x2331;eip=0x001f13; 	T(ax = di+0x0C);	// 80757 lea     ax, [di+0Ch] ;~ 2331:1F13
cs=0x2331;eip=0x001f16; 	T(CMP(ax, si));	// 80758 cmp     ax, si ;~ 2331:1F16
cs=0x2331;eip=0x001f18; 	R(JLE(loc_3381a));	// 80759 jle     short loc_3381A ;~ 2331:1F18
cs=0x2331;eip=0x001f1a; 	T(ax = di+0x0C);	// 80760 lea     ax, [di+0Ch] ;~ 2331:1F1A
cs=0x2331;eip=0x001f1d; 	X(MOV(*(dw*)(raddr(ss,bp+var_56)), ax));	// 80761 mov     [bp+var_56], ax ;~ 2331:1F1D
loc_33810:
	// 9603 
cs=0x2331;eip=0x001f20; 	X(PUSH(si));	// 80764 push    si ;~ 2331:1F20
cs=0x2331;eip=0x001f21; 	R(CALL(sub_338a1,0));	// 80765 call    sub_338A1 ;~ 2331:1F21
cs=0x2331;eip=0x001f24; 	T(INC(si));	// 80766 inc     si ;~ 2331:1F24
cs=0x2331;eip=0x001f25; 	T(CMP(*(dw*)(raddr(ss,bp+var_56)), si));	// 80767 cmp     [bp+var_56], si ;~ 2331:1F25
cs=0x2331;eip=0x001f28; 	R(JG(loc_33810));	// 80768 jg      short loc_33810 ;~ 2331:1F28
loc_3381a:
	// 9604 
cs=0x2331;eip=0x001f2a; 	R(CALLF(sub_20565,0));	// 80771 call    sub_20565 ;~ 2331:1F2A
cs=0x2331;eip=0x001f2f; 	X(POP(si));	// 80772 pop     si ;~ 2331:1F2F
cs=0x2331;eip=0x001f30; 	X(POP(di));	// 80773 pop     di ;~ 2331:1F30
cs=0x2331;eip=0x001f31; 	T(MOV(sp, bp));	// 80774 mov     sp, bp ;~ 2331:1F31
cs=0x2331;eip=0x001f33; 	X(POP(bp));	// 80775 pop     bp ;~ 2331:1F33
cs=0x2331;eip=0x001f34; 	R(RETN(0));	// 80776 retn ;~ 2331:1F34
sub_33825:
	// 80784 
#undef arg_0
#define arg_0 4
	// 80786 arg_0           = word ptr  4 ;~ 2331:1F35
cs=0x2331;eip=0x001f35; 	X(PUSH(bp));	// 80788 push    bp ;~ 2331:1F35
cs=0x2331;eip=0x001f36; 	T(MOV(bp, sp));	// 80789 mov     bp, sp ;~ 2331:1F36
cs=0x2331;eip=0x001f38; 	T(SUB(sp, 2));	// 80790 sub     sp, 2 ;~ 2331:1F38
cs=0x2331;eip=0x001f3b; 	X(PUSH(si));	// 80791 push    si ;~ 2331:1F3B
cs=0x2331;eip=0x001f3c; 	T(MOV(si, *(dw*)((&unk_54448))));	// 80792 mov     si, word ptr unk_54448 ;~ 2331:1F3C
cs=0x2331;eip=0x001f40; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 80793 mov     ax, [bp+arg_0] ;~ 2331:1F40
cs=0x2331;eip=0x001f43; 	X(MOV(*(dw*)((&unk_54448)), ax));	// 80794 mov     word ptr unk_54448, ax ;~ 2331:1F43
cs=0x2331;eip=0x001f46; 	T(OR(ax, ax));	// 80795 or      ax, ax ;~ 2331:1F46
cs=0x2331;eip=0x001f48; 	R(JGE(loc_33840));	// 80796 jge     short loc_33840 ;~ 2331:1F48
cs=0x2331;eip=0x001f4a; 	X(MOV(*(dw*)((&unk_54448)), 0));	// 80797 mov     word ptr unk_54448, 0 ;~ 2331:1F4A
loc_33840:
	// 9605 
cs=0x2331;eip=0x001f50; 	T(MOV(ax, *(dw*)((&unk_54446))));	// 80800 mov     ax, word ptr unk_54446 ;~ 2331:1F50
cs=0x2331;eip=0x001f53; 	T(CMP(*(dw*)((&unk_54448)), ax));	// 80801 cmp     word ptr unk_54448, ax ;~ 2331:1F53
cs=0x2331;eip=0x001f57; 	R(JL(loc_3384d));	// 80802 jl      short loc_3384D ;~ 2331:1F57
cs=0x2331;eip=0x001f59; 	T(DEC(ax));	// 80803 dec     ax ;~ 2331:1F59
cs=0x2331;eip=0x001f5a; 	X(MOV(*(dw*)((&unk_54448)), ax));	// 80804 mov     word ptr unk_54448, ax ;~ 2331:1F5A
loc_3384d:
	// 9606 
cs=0x2331;eip=0x001f5d; 	T(CMP(*(dw*)((&unk_54448)), si));	// 80807 cmp     word ptr unk_54448, si ;~ 2331:1F5D
cs=0x2331;eip=0x001f61; 	R(JZ(loc_3389a));	// 80808 jz      short loc_3389A ;~ 2331:1F61
cs=0x2331;eip=0x001f63; 	T(MOV(ax, si));	// 80809 mov     ax, si ;~ 2331:1F63
cs=0x2331;eip=0x001f65; 	T(CWD);	// 80810 cwd ;~ 2331:1F65
cs=0x2331;eip=0x001f66; 	T(MOV(cx, 0x0C));	// 80811 mov     cx, 0Ch ;~ 2331:1F66
cs=0x2331;eip=0x001f69; 	T(IDIV2(cx));	// 80812 idiv    cx ;~ 2331:1F69
cs=0x2331;eip=0x001f6b; 	T(MOV(cx, ax));	// 80813 mov     cx, ax ;~ 2331:1F6B
cs=0x2331;eip=0x001f6d; 	T(MOV(ax, *(dw*)((&unk_54448))));	// 80814 mov     ax, word ptr unk_54448 ;~ 2331:1F6D
cs=0x2331;eip=0x001f70; 	T(CWD);	// 80815 cwd ;~ 2331:1F70
cs=0x2331;eip=0x001f71; 	T(MOV(bx, 0x0C));	// 80816 mov     bx, 0Ch ;~ 2331:1F71
cs=0x2331;eip=0x001f74; 	T(IDIV2(bx));	// 80817 idiv    bx ;~ 2331:1F74
cs=0x2331;eip=0x001f76; 	T(CMP(ax, cx));	// 80818 cmp     ax, cx ;~ 2331:1F76
cs=0x2331;eip=0x001f78; 	R(JNZ(loc_3388d));	// 80819 jnz     short loc_3388D ;~ 2331:1F78
cs=0x2331;eip=0x001f7a; 	X(PUSH(word_5651a));	// 80820 push    word_5651A ;~ 2331:1F7A
cs=0x2331;eip=0x001f7e; 	R(CALLF(sub_202f1,0));	// 80821 call    sub_202F1 ;~ 2331:1F7E
cs=0x2331;eip=0x001f83; 	X(PUSH(si));	// 80822 push    si ;~ 2331:1F83
cs=0x2331;eip=0x001f84; 	R(CALL(sub_338a1,0));	// 80823 call    sub_338A1 ;~ 2331:1F84
cs=0x2331;eip=0x001f87; 	X(PUSH(*(dw*)((&unk_54448))));	// 80824 push    word ptr unk_54448 ;~ 2331:1F87
cs=0x2331;eip=0x001f8b; 	R(CALL(sub_338a1,0));	// 80825 call    sub_338A1 ;~ 2331:1F8B
cs=0x2331;eip=0x001f8e; 	T(MOV(ax, 1));	// 80826 mov     ax, 1 ;~ 2331:1F8E
cs=0x2331;eip=0x001f91; 	T(SUB(ax, word_5651a));	// 80827 sub     ax, word_5651A ;~ 2331:1F91
cs=0x2331;eip=0x001f95; 	X(PUSH(ax));	// 80828 push    ax ;~ 2331:1F95
cs=0x2331;eip=0x001f96; 	R(CALLF(sub_202f1,0));	// 80829 call    sub_202F1 ;~ 2331:1F96
cs=0x2331;eip=0x001f9b; 	R(JMP(loc_3389a));	// 80830 jmp     short loc_3389A ;~ 2331:1F9B
loc_3388d:
	// 9607 
cs=0x2331;eip=0x001f9d; 	R(CALL(sub_33713,0));	// 80834 call    sub_33713 ;~ 2331:1F9D
cs=0x2331;eip=0x001fa0; 	T(MOV(ax, 1));	// 80835 mov     ax, 1 ;~ 2331:1FA0
cs=0x2331;eip=0x001fa3; 	X(PUSH(ax));	// 80836 push    ax ;~ 2331:1FA3
cs=0x2331;eip=0x001fa4; 	X(PUSH(ax));	// 80837 push    ax ;~ 2331:1FA4
cs=0x2331;eip=0x001fa5; 	R(CALLF(sub_20275,0));	// 80838 call    sub_20275 ;~ 2331:1FA5
loc_3389a:
	// 9608 
cs=0x2331;eip=0x001faa; 	X(POP(si));	// 80842 pop     si ;~ 2331:1FAA
cs=0x2331;eip=0x001fab; 	T(MOV(sp, bp));	// 80843 mov     sp, bp ;~ 2331:1FAB
cs=0x2331;eip=0x001fad; 	X(POP(bp));	// 80844 pop     bp ;~ 2331:1FAD
cs=0x2331;eip=0x001fae; 	R(RETN(2));	// 80845 retn    2 ;~ 2331:1FAE
sub_338a1:
	// 80853 
#undef var_50
#define var_50 -0x50
	// 80856 var_50          = byte ptr -50h ;~ 2331:1FB1
#undef arg_0
#define arg_0 4
	// 80857 arg_0           = word ptr  4 ;~ 2331:1FB1
cs=0x2331;eip=0x001fb1; 	X(PUSH(bp));	// 80859 push    bp ;~ 2331:1FB1
cs=0x2331;eip=0x001fb2; 	T(MOV(bp, sp));	// 80860 mov     bp, sp ;~ 2331:1FB2
cs=0x2331;eip=0x001fb4; 	T(SUB(sp, 0x52));	// 80861 sub     sp, 52h ;~ 2331:1FB4
cs=0x2331;eip=0x001fb7; 	X(PUSH(di));	// 80862 push    di ;~ 2331:1FB7
cs=0x2331;eip=0x001fb8; 	X(PUSH(si));	// 80863 push    si ;~ 2331:1FB8
cs=0x2331;eip=0x001fb9; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 80864 mov     si, [bp+arg_0] ;~ 2331:1FB9
cs=0x2331;eip=0x001fbc; 	T(CMP(*(dw*)((&unk_54446)), si));	// 80865 cmp     word ptr unk_54446, si ;~ 2331:1FBC
cs=0x2331;eip=0x001fc0; 	R(JLE(loc_33913));	// 80866 jle     short loc_33913 ;~ 2331:1FC0
cs=0x2331;eip=0x001fc2; 	R(CALL(sub_3318a,0));	// 80867 call    sub_3318A ;~ 2331:1FC2
cs=0x2331;eip=0x001fc5; 	T(MOV(ax, si));	// 80868 mov     ax, si ;~ 2331:1FC5
cs=0x2331;eip=0x001fc7; 	T(CWD);	// 80869 cwd ;~ 2331:1FC7
cs=0x2331;eip=0x001fc8; 	T(MOV(cx, 0x0C));	// 80870 mov     cx, 0Ch ;~ 2331:1FC8
cs=0x2331;eip=0x001fcb; 	T(IDIV2(cx));	// 80871 idiv    cx ;~ 2331:1FCB
cs=0x2331;eip=0x001fcd; 	T(MOV(ax, dx));	// 80872 mov     ax, dx ;~ 2331:1FCD
cs=0x2331;eip=0x001fcf; 	T(MOV(cx, 0x0B));	// 80873 mov     cx, 0Bh ;~ 2331:1FCF
cs=0x2331;eip=0x001fd2; 	T(IMUL1_2(cx));	// 80874 imul    cx ;~ 2331:1FD2
cs=0x2331;eip=0x001fd4; 	T(MOV(di, ax));	// 80875 mov     di, ax ;~ 2331:1FD4
cs=0x2331;eip=0x001fd6; 	T(ADD(di, 0x2F));	// 80876 add     di, 2Fh ; '/' ;~ 2331:1FD6
cs=0x2331;eip=0x001fd9; 	T(MOV(ax, 0x1F));	// 80877 mov     ax, 1Fh ;~ 2331:1FD9
cs=0x2331;eip=0x001fdc; 	X(PUSH(ax));	// 80878 push    ax ;~ 2331:1FDC
cs=0x2331;eip=0x001fdd; 	T(ax = di-1);	// 80879 lea     ax, [di-1] ;~ 2331:1FDD
cs=0x2331;eip=0x001fe0; 	X(PUSH(ax));	// 80880 push    ax ;~ 2331:1FE0
cs=0x2331;eip=0x001fe1; 	T(MOV(ax, 0x0C2));	// 80881 mov     ax, 0C2h ; '¬' ;~ 2331:1FE1
cs=0x2331;eip=0x001fe4; 	X(PUSH(ax));	// 80882 push    ax ;~ 2331:1FE4
cs=0x2331;eip=0x001fe5; 	T(MOV(ax, 0x0A));	// 80883 mov     ax, 0Ah ;~ 2331:1FE5
cs=0x2331;eip=0x001fe8; 	X(PUSH(ax));	// 80884 push    ax ;~ 2331:1FE8
cs=0x2331;eip=0x001fe9; 	T(CMP(*(dw*)((&unk_54448)), si));	// 80885 cmp     word ptr unk_54448, si ;~ 2331:1FE9
cs=0x2331;eip=0x001fed; 	R(JNZ(loc_338e4));	// 80886 jnz     short loc_338E4 ;~ 2331:1FED
cs=0x2331;eip=0x001fef; 	T(MOV(ax, *(dw*)((&unk_54440))));	// 80887 mov     ax, word ptr unk_54440 ;~ 2331:1FEF
cs=0x2331;eip=0x001ff2; 	R(JMP(loc_338e7));	// 80888 jmp     short loc_338E7 ;~ 2331:1FF2
loc_338e4:
	// 9609 
cs=0x2331;eip=0x001ff4; 	T(MOV(ax, 0x0FF0F));	// 80892 mov     ax, 0FF0Fh ;~ 2331:1FF4
loc_338e7:
	// 9610 
cs=0x2331;eip=0x001ff7; 	X(PUSH(ax));	// 80895 push    ax ;~ 2331:1FF7
cs=0x2331;eip=0x001ff8; 	R(CALLF(sub_233c4,0));	// 80896 call    sub_233C4 ;~ 2331:1FF8
cs=0x2331;eip=0x001ffd; 	T(ax = bp+var_50);	// 80897 lea     ax, [bp+var_50] ;~ 2331:1FFD
cs=0x2331;eip=0x002000; 	X(PUSH(ax));	// 80898 push    ax ;~ 2331:2000
cs=0x2331;eip=0x002001; 	T(MOV(ax, 0x37));	// 80899 mov     ax, 37h ; '7' ;~ 2331:2001
cs=0x2331;eip=0x002004; 	T(IMUL1_2(si));	// 80900 imul    si ;~ 2331:2004
cs=0x2331;eip=0x002006; 	T(ADD(ax, *(dw*)((&unk_5444a))));	// 80901 add     ax, word ptr unk_5444A ;~ 2331:2006
cs=0x2331;eip=0x00200a; 	T(MOV(dx, *(dw*)((&unk_5444c))));	// 80902 mov     dx, word ptr unk_5444C ;~ 2331:200A
cs=0x2331;eip=0x00200e; 	X(PUSH(dx));	// 80903 push    dx ;~ 2331:200E
cs=0x2331;eip=0x00200f; 	X(PUSH(ax));	// 80904 push    ax ;~ 2331:200F
cs=0x2331;eip=0x002010; 	R(CALLF(sub_318f0,0));	// 80905 call    sub_318F0 ;~ 2331:2010
cs=0x2331;eip=0x002015; 	T(ax = bp+var_50);	// 80906 lea     ax, [bp+var_50] ;~ 2331:2015
cs=0x2331;eip=0x002018; 	X(PUSH(ax));	// 80907 push    ax ;~ 2331:2018
cs=0x2331;eip=0x002019; 	T(MOV(ax, 0x28));	// 80908 mov     ax, 28h ; '(' ;~ 2331:2019
cs=0x2331;eip=0x00201c; 	X(PUSH(ax));	// 80909 push    ax ;~ 2331:201C
cs=0x2331;eip=0x00201d; 	X(PUSH(di));	// 80910 push    di ;~ 2331:201D
cs=0x2331;eip=0x00201e; 	R(CALLF(sub_2dce4,0));	// 80911 call    sub_2DCE4 ;~ 2331:201E
loc_33913:
	// 9611 
cs=0x2331;eip=0x002023; 	X(POP(si));	// 80914 pop     si ;~ 2331:2023
cs=0x2331;eip=0x002024; 	X(POP(di));	// 80915 pop     di ;~ 2331:2024
cs=0x2331;eip=0x002025; 	T(MOV(sp, bp));	// 80916 mov     sp, bp ;~ 2331:2025
cs=0x2331;eip=0x002027; 	X(POP(bp));	// 80917 pop     bp ;~ 2331:2027
cs=0x2331;eip=0x002028; 	R(RETN(2));	// 80918 retn    2 ;~ 2331:2028
sub_3391c:
	// 80928 
#undef var_2
#define var_2 -2
	// 80930 var_2           = word ptr -2 ;~ 2331:202C
cs=0x2331;eip=0x00202c; 	X(PUSH(bp));	// 80932 push    bp ;~ 2331:202C
cs=0x2331;eip=0x00202d; 	T(MOV(bp, sp));	// 80933 mov     bp, sp ;~ 2331:202D
cs=0x2331;eip=0x00202f; 	T(SUB(sp, 2));	// 80934 sub     sp, 2 ;~ 2331:202F
cs=0x2331;eip=0x002032; 	X(PUSH(si));	// 80935 push    si ;~ 2331:2032
cs=0x2331;eip=0x002033; 	R(CALL(sub_3318a,0));	// 80936 call    sub_3318A ;~ 2331:2033
cs=0x2331;eip=0x002036; 	X(MOV(*(dw*)((&unk_47bde)), 0x0FF00));	// 80937 mov     word ptr unk_47BDE, 0FF00h ;~ 2331:2036
cs=0x2331;eip=0x00203c; 	X(MOV(unk_56885, 0));	// 80938 mov     byte ptr unk_56885, 0 ;~ 2331:203C
cs=0x2331;eip=0x002041; 	T(CMP(*(dw*)((&byte_47b2e)), 4));	// 80939 cmp     word ptr byte_47B2E, 4 ;~ 2331:2041
cs=0x2331;eip=0x002046; 	R(JNZ(loc_3393d));	// 80940 jnz     short loc_3393D ;~ 2331:2046
cs=0x2331;eip=0x002048; 	T(MOV(ax, 0x2880));	// 80941 mov     ax, 2880h ;~ 2331:2048
cs=0x2331;eip=0x00204b; 	R(JMP(loc_33940));	// 80942 jmp     short loc_33940 ;~ 2331:204B
loc_3393d:
	// 9612 
cs=0x2331;eip=0x00204d; 	T(MOV(ax, 0x2874));	// 80946 mov     ax, 2874h ;~ 2331:204D
loc_33940:
	// 9613 
cs=0x2331;eip=0x002050; 	X(MOV(*(dw*)((&unk_544d0)), ax));	// 80949 mov     word ptr unk_544D0, ax ;~ 2331:2050
cs=0x2331;eip=0x002053; 	R(CALLF(sub_203b0,0));	// 80950 call    sub_203B0 ;~ 2331:2053
cs=0x2331;eip=0x002058; 	R(CALLF(sub_20565,0));	// 80951 call    sub_20565 ;~ 2331:2058
cs=0x2331;eip=0x00205d; 	T(CMP(word_5651a, 1));	// 80952 cmp     word_5651A, 1 ;~ 2331:205D
cs=0x2331;eip=0x002062; 	R(JNZ(loc_33960));	// 80953 jnz     short loc_33960 ;~ 2331:2062
cs=0x2331;eip=0x002064; 	T(MOV(ax, 1));	// 80954 mov     ax, 1 ;~ 2331:2064
cs=0x2331;eip=0x002067; 	X(PUSH(ax));	// 80955 push    ax ;~ 2331:2067
cs=0x2331;eip=0x002068; 	T(SUB(ax, ax));	// 80956 sub     ax, ax ;~ 2331:2068
cs=0x2331;eip=0x00206a; 	X(PUSH(ax));	// 80957 push    ax ;~ 2331:206A
cs=0x2331;eip=0x00206b; 	R(CALLF(sub_2c939,0));	// 80958 call    sub_2C939 ;~ 2331:206B
loc_33960:
	// 9614 
cs=0x2331;eip=0x002070; 	T(SUB(ax, ax));	// 80961 sub     ax, ax ;~ 2331:2070
cs=0x2331;eip=0x002072; 	X(PUSH(ax));	// 80962 push    ax ;~ 2331:2072
cs=0x2331;eip=0x002073; 	R(CALLF(sub_20347,0));	// 80963 call    sub_20347 ;~ 2331:2073
cs=0x2331;eip=0x002078; 	T(MOV(ax, 1));	// 80964 mov     ax, 1 ;~ 2331:2078
cs=0x2331;eip=0x00207b; 	X(PUSH(ax));	// 80965 push    ax ;~ 2331:207B
cs=0x2331;eip=0x00207c; 	R(CALLF(sub_202f1,0));	// 80966 call    sub_202F1 ;~ 2331:207C
cs=0x2331;eip=0x002081; 	T(MOV(ax, 0x2841));	// 80967 mov     ax, 2841h ;~ 2331:2081
cs=0x2331;eip=0x002084; 	X(PUSH(ax));	// 80968 push    ax ;~ 2331:2084
cs=0x2331;eip=0x002085; 	T(MOV(ax, 0x0ED08));	// 80969 mov     ax, 0ED08h ;~ 2331:2085
cs=0x2331;eip=0x002088; 	X(PUSH(ax));	// 80970 push    ax ;~ 2331:2088
cs=0x2331;eip=0x002089; 	R(CALLF(sub_316b2,0));	// 80971 call    sub_316B2 ;~ 2331:2089
cs=0x2331;eip=0x00208e; 	T(MOV(ax, 0x2846));	// 80972 mov     ax, 2846h ;~ 2331:208E
cs=0x2331;eip=0x002091; 	X(PUSH(ax));	// 80973 push    ax ;~ 2331:2091
cs=0x2331;eip=0x002092; 	T(MOV(ax, 0x2856));	// 80974 mov     ax, 2856h ;~ 2331:2092
cs=0x2331;eip=0x002095; 	X(PUSH(ax));	// 80975 push    ax ;~ 2331:2095
cs=0x2331;eip=0x002096; 	R(CALLF(sub_316b2,0));	// 80976 call    sub_316B2 ;~ 2331:2096
cs=0x2331;eip=0x00209b; 	T(MOV(ax, 0x284E));	// 80977 mov     ax, 284Eh ;~ 2331:209B
cs=0x2331;eip=0x00209e; 	X(PUSH(ax));	// 80978 push    ax ;~ 2331:209E
cs=0x2331;eip=0x00209f; 	T(MOV(ax, 0x286A));	// 80979 mov     ax, 286Ah ;~ 2331:209F
cs=0x2331;eip=0x0020a2; 	X(PUSH(ax));	// 80980 push    ax ;~ 2331:20A2
cs=0x2331;eip=0x0020a3; 	R(CALLF(sub_316b2,0));	// 80981 call    sub_316B2 ;~ 2331:20A3
cs=0x2331;eip=0x0020a8; 	T(MOV(ax, 0x2860));	// 80982 mov     ax, 2860h ;~ 2331:20A8
cs=0x2331;eip=0x0020ab; 	X(PUSH(ax));	// 80983 push    ax ;~ 2331:20AB
cs=0x2331;eip=0x0020ac; 	T(MOV(ax, 0x60));	// 80984 mov     ax, 60h ; '`' ;~ 2331:20AC
cs=0x2331;eip=0x0020af; 	X(PUSH(ax));	// 80985 push    ax ;~ 2331:20AF
cs=0x2331;eip=0x0020b0; 	T(MOV(ax, 0x46));	// 80986 mov     ax, 46h ; 'F' ;~ 2331:20B0
cs=0x2331;eip=0x0020b3; 	X(PUSH(ax));	// 80987 push    ax ;~ 2331:20B3
cs=0x2331;eip=0x0020b4; 	R(CALLF(sub_31695,0));	// 80988 call    sub_31695 ;~ 2331:20B4
cs=0x2331;eip=0x0020b9; 	X(MOV(*(dw*)((&unk_544ca)), 1));	// 80989 mov     word ptr unk_544CA, 1 ;~ 2331:20B9
cs=0x2331;eip=0x0020bf; 	X(MOV(*(dw*)((&unk_544cc)), 1));	// 80990 mov     word ptr unk_544CC, 1 ;~ 2331:20BF
cs=0x2331;eip=0x0020c5; 	R(CALL(sub_33aae,0));	// 80991 call    sub_33AAE ;~ 2331:20C5
cs=0x2331;eip=0x0020c8; 	R(CALL(sub_33b69,0));	// 80992 call    sub_33B69 ;~ 2331:20C8
cs=0x2331;eip=0x0020cb; 	T(MOV(ax, 1));	// 80993 mov     ax, 1 ;~ 2331:20CB
cs=0x2331;eip=0x0020ce; 	X(PUSH(ax));	// 80994 push    ax ;~ 2331:20CE
cs=0x2331;eip=0x0020cf; 	T(SUB(ax, ax));	// 80995 sub     ax, ax ;~ 2331:20CF
cs=0x2331;eip=0x0020d1; 	X(PUSH(ax));	// 80996 push    ax ;~ 2331:20D1
cs=0x2331;eip=0x0020d2; 	R(CALLF(sub_3174e,0));	// 80997 call    sub_3174E ;~ 2331:20D2
cs=0x2331;eip=0x0020d7; 	X(MOV(*(dw*)((&unk_544ca)), 1));	// 80998 mov     word ptr unk_544CA, 1 ;~ 2331:20D7
cs=0x2331;eip=0x0020dd; 	X(MOV(*(dw*)((&unk_544cc)), 0));	// 80999 mov     word ptr unk_544CC, 0 ;~ 2331:20DD
cs=0x2331;eip=0x0020e3; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_2))));	// 81000 mov     si, [bp+var_2] ;~ 2331:20E3
loc_339d6:
	// 9615 
cs=0x2331;eip=0x0020e6; 	R(CALL(sub_33248,0));	// 81004 call    sub_33248 ;~ 2331:20E6
cs=0x2331;eip=0x0020e9; 	T(MOV(si, ax));	// 81005 mov     si, ax ;~ 2331:20E9
cs=0x2331;eip=0x0020eb; 	T(CMP(ax, 0x5F));	// 81006 cmp     ax, 5Fh ; '_' ;~ 2331:20EB
cs=0x2331;eip=0x0020ee; 	R(JNZ(loc_339e3));	// 81007 jnz     short loc_339E3 ;~ 2331:20EE
cs=0x2331;eip=0x0020f0; 	R(JMP(loc_33a70));	// 81008 jmp     loc_33A70 ;~ 2331:20F0
loc_339e3:
	// 9616 
cs=0x2331;eip=0x0020f3; 	R(JLE(loc_339e8));	// 81012 jle     short loc_339E8 ;~ 2331:20F3
cs=0x2331;eip=0x0020f5; 	R(JMP(loc_33a80));	// 81013 jmp     loc_33A80 ;~ 2331:20F5
loc_339e8:
	// 9617 
cs=0x2331;eip=0x0020f8; 	T(CMP(ax, 0x0D));	// 81017 cmp     ax, 0Dh ;~ 2331:20F8
cs=0x2331;eip=0x0020fb; 	R(JZ(loc_33a03));	// 81018 jz      short loc_33A03 ;~ 2331:20FB
cs=0x2331;eip=0x0020fd; 	T(CMP(ax, 0x1B));	// 81019 cmp     ax, 1Bh ;~ 2331:20FD
cs=0x2331;eip=0x002100; 	R(JZ(loc_33a03));	// 81020 jz      short loc_33A03 ;~ 2331:2100
cs=0x2331;eip=0x002102; 	T(CMP(ax, 0x2B));	// 81021 cmp     ax, 2Bh ; '+' ;~ 2331:2102
cs=0x2331;eip=0x002105; 	R(JZ(loc_33a5c));	// 81022 jz      short loc_33A5C ;~ 2331:2105
cs=0x2331;eip=0x002107; 	T(CMP(ax, 0x2D));	// 81023 cmp     ax, 2Dh ; '-' ;~ 2331:2107
cs=0x2331;eip=0x00210a; 	R(JZ(loc_33a70));	// 81024 jz      short loc_33A70 ;~ 2331:210A
cs=0x2331;eip=0x00210c; 	T(CMP(ax, 0x3D));	// 81025 cmp     ax, 3Dh ; '=' ;~ 2331:210C
cs=0x2331;eip=0x00210f; 	R(JZ(loc_33a5c));	// 81026 jz      short loc_33A5C ;~ 2331:210F
cs=0x2331;eip=0x002111; 	R(JMP(loc_339d6));	// 81027 jmp     short loc_339D6 ;~ 2331:2111
loc_33a03:
	// 9618 
cs=0x2331;eip=0x002113; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), si));	// 81032 mov     [bp+var_2], si ;~ 2331:2113
cs=0x2331;eip=0x002116; 	T(MOV(ax, 0x2860));	// 81033 mov     ax, 2860h ;~ 2331:2116
cs=0x2331;eip=0x002119; 	X(PUSH(ax));	// 81034 push    ax ;~ 2331:2119
cs=0x2331;eip=0x00211a; 	R(CALLF(sub_236fe,0));	// 81035 call    sub_236FE ;~ 2331:211A
cs=0x2331;eip=0x00211f; 	T(MOV(ax, 0x2856));	// 81036 mov     ax, 2856h ;~ 2331:211F
cs=0x2331;eip=0x002122; 	X(PUSH(ax));	// 81037 push    ax ;~ 2331:2122
cs=0x2331;eip=0x002123; 	R(CALLF(sub_236fe,0));	// 81038 call    sub_236FE ;~ 2331:2123
cs=0x2331;eip=0x002128; 	T(MOV(ax, 0x286A));	// 81039 mov     ax, 286Ah ;~ 2331:2128
cs=0x2331;eip=0x00212b; 	X(PUSH(ax));	// 81040 push    ax ;~ 2331:212B
cs=0x2331;eip=0x00212c; 	R(CALLF(sub_236fe,0));	// 81041 call    sub_236FE ;~ 2331:212C
cs=0x2331;eip=0x002131; 	T(MOV(ax, 1));	// 81042 mov     ax, 1 ;~ 2331:2131
cs=0x2331;eip=0x002134; 	X(PUSH(ax));	// 81043 push    ax ;~ 2331:2134
cs=0x2331;eip=0x002135; 	R(CALLF(sub_202f1,0));	// 81044 call    sub_202F1 ;~ 2331:2135
cs=0x2331;eip=0x00213a; 	T(CMP(si, 0x1B));	// 81045 cmp     si, 1Bh ;~ 2331:213A
cs=0x2331;eip=0x00213d; 	R(JNZ(loc_33aa1));	// 81046 jnz     short loc_33AA1 ;~ 2331:213D
cs=0x2331;eip=0x00213f; 	T(SUB(ax, ax));	// 81047 sub     ax, ax ;~ 2331:213F
cs=0x2331;eip=0x002141; 	R(JMP(loc_33aa9));	// 81048 jmp     short loc_33AA9 ;~ 2331:2141
loc_33a33:
	// 9619 
cs=0x2331;eip=0x002143; 	R(CALL(sub_33b29,0));	// 81053 call    sub_33B29 ;~ 2331:2143
cs=0x2331;eip=0x002146; 	X(SUB(unk_57043, 1));	// 81054 sub     byte ptr unk_57043, 1 ;~ 2331:2146
cs=0x2331;eip=0x00214b; 	R(JNC(loc_33a42));	// 81055 jnb     short loc_33A42 ;~ 2331:214B
cs=0x2331;eip=0x00214d; 	X(MOV(unk_57043, 2));	// 81056 mov     byte ptr unk_57043, 2 ;~ 2331:214D
loc_33a42:
	// 9620 
cs=0x2331;eip=0x002152; 	R(CALL(sub_33aae,0));	// 81060 call    sub_33AAE ;~ 2331:2152
cs=0x2331;eip=0x002155; 	R(JMP(loc_339d6));	// 81061 jmp     short loc_339D6 ;~ 2331:2155
loc_33a47:
	// 9621 
cs=0x2331;eip=0x002157; 	R(CALL(sub_33b29,0));	// 81066 call    sub_33B29 ;~ 2331:2157
cs=0x2331;eip=0x00215a; 	X(INC(unk_57043));	// 81067 inc     byte ptr unk_57043 ;~ 2331:215A
cs=0x2331;eip=0x00215e; 	T(CMP(unk_57043, 3));	// 81068 cmp     byte ptr unk_57043, 3 ;~ 2331:215E
cs=0x2331;eip=0x002163; 	R(JC(loc_33a42));	// 81069 jb      short loc_33A42 ;~ 2331:2163
cs=0x2331;eip=0x002165; 	X(MOV(unk_57043, 0));	// 81070 mov     byte ptr unk_57043, 0 ;~ 2331:2165
cs=0x2331;eip=0x00216a; 	R(JMP(loc_33a42));	// 81071 jmp     short loc_33A42 ;~ 2331:216A
loc_33a5c:
	// 9622 
cs=0x2331;eip=0x00216c; 	T(CMP(unk_57042, 4));	// 81076 cmp     byte ptr unk_57042, 4 ;~ 2331:216C
cs=0x2331;eip=0x002171; 	R(JC(loc_33a66));	// 81077 jb      short loc_33A66 ;~ 2331:2171
cs=0x2331;eip=0x002173; 	R(JMP(loc_339d6));	// 81078 jmp     loc_339D6 ;~ 2331:2173
loc_33a66:
	// 9623 
cs=0x2331;eip=0x002176; 	X(INC(unk_57042));	// 81082 inc     byte ptr unk_57042 ;~ 2331:2176
loc_33a6a:
	// 9624 
cs=0x2331;eip=0x00217a; 	R(CALL(sub_33b69,0));	// 81085 call    sub_33B69 ;~ 2331:217A
cs=0x2331;eip=0x00217d; 	R(JMP(loc_339d6));	// 81086 jmp     loc_339D6 ;~ 2331:217D
loc_33a70:
	// 9625 
cs=0x2331;eip=0x002180; 	T(CMP(unk_57042, 0));	// 81091 cmp     byte ptr unk_57042, 0 ;~ 2331:2180
cs=0x2331;eip=0x002185; 	R(JNZ(loc_33a7a));	// 81092 jnz     short loc_33A7A ;~ 2331:2185
cs=0x2331;eip=0x002187; 	R(JMP(loc_339d6));	// 81093 jmp     loc_339D6 ;~ 2331:2187
loc_33a7a:
	// 9626 
cs=0x2331;eip=0x00218a; 	X(DEC(unk_57042));	// 81097 dec     byte ptr unk_57042 ;~ 2331:218A
cs=0x2331;eip=0x00218e; 	R(JMP(loc_33a6a));	// 81098 jmp     short loc_33A6A ;~ 2331:218E
loc_33a80:
	// 9627 
cs=0x2331;eip=0x002190; 	T(CMP(ax, 0x4800));	// 81102 cmp     ax, 4800h ;~ 2331:2190
cs=0x2331;eip=0x002193; 	R(JZ(loc_33a33));	// 81103 jz      short loc_33A33 ;~ 2331:2193
cs=0x2331;eip=0x002195; 	T(CMP(ax, 0x4A00));	// 81104 cmp     ax, 4A00h ;~ 2331:2195
cs=0x2331;eip=0x002198; 	R(JZ(loc_33a70));	// 81105 jz      short loc_33A70 ;~ 2331:2198
cs=0x2331;eip=0x00219a; 	T(CMP(ax, 0x4B00));	// 81106 cmp     ax, 4B00h ;~ 2331:219A
cs=0x2331;eip=0x00219d; 	R(JZ(loc_33a33));	// 81107 jz      short loc_33A33 ;~ 2331:219D
cs=0x2331;eip=0x00219f; 	T(CMP(ax, 0x4D00));	// 81108 cmp     ax, 4D00h ;~ 2331:219F
cs=0x2331;eip=0x0021a2; 	R(JZ(loc_33a47));	// 81109 jz      short loc_33A47 ;~ 2331:21A2
cs=0x2331;eip=0x0021a4; 	T(CMP(ax, 0x4E00));	// 81110 cmp     ax, 4E00h ;~ 2331:21A4
cs=0x2331;eip=0x0021a7; 	R(JZ(loc_33a5c));	// 81111 jz      short loc_33A5C ;~ 2331:21A7
cs=0x2331;eip=0x0021a9; 	T(CMP(ax, 0x5000));	// 81112 cmp     ax, 5000h ;~ 2331:21A9
cs=0x2331;eip=0x0021ac; 	R(JZ(loc_33a47));	// 81113 jz      short loc_33A47 ;~ 2331:21AC
cs=0x2331;eip=0x0021ae; 	R(JMP(loc_339d6));	// 81114 jmp     loc_339D6 ;~ 2331:21AE
loc_33aa1:
	// 9628 
cs=0x2331;eip=0x0021b1; 	X(MOV(unk_56ed2, 1));	// 81118 mov     byte ptr unk_56ED2, 1 ;~ 2331:21B1
cs=0x2331;eip=0x0021b6; 	T(MOV(ax, 1));	// 81119 mov     ax, 1 ;~ 2331:21B6
loc_33aa9:
	// 9629 
cs=0x2331;eip=0x0021b9; 	X(POP(si));	// 81122 pop     si ;~ 2331:21B9
cs=0x2331;eip=0x0021ba; 	T(MOV(sp, bp));	// 81123 mov     sp, bp ;~ 2331:21BA
cs=0x2331;eip=0x0021bc; 	X(POP(bp));	// 81124 pop     bp ;~ 2331:21BC
cs=0x2331;eip=0x0021bd; 	R(RETF(0));	// 81125 retf ;~ 2331:21BD
sub_33aae:
	// 81133 
cs=0x2331;eip=0x0021be; 	X(PUSH(bp));	// 81135 push    bp ;~ 2331:21BE
cs=0x2331;eip=0x0021bf; 	T(MOV(bp, sp));	// 81136 mov     bp, sp ;~ 2331:21BF
cs=0x2331;eip=0x0021c1; 	T(SUB(sp, 2));	// 81137 sub     sp, 2 ;~ 2331:21C1
cs=0x2331;eip=0x0021c4; 	X(PUSH(si));	// 81138 push    si ;~ 2331:21C4
cs=0x2331;eip=0x0021c5; 	T(MOV(al, unk_57043));	// 81139 mov     al, byte ptr unk_57043 ;~ 2331:21C5
cs=0x2331;eip=0x0021c8; 	T(SUB(ah, ah));	// 81140 sub     ah, ah ;~ 2331:21C8
cs=0x2331;eip=0x0021ca; 	T(MOV(si, ax));	// 81141 mov     si, ax ;~ 2331:21CA
cs=0x2331;eip=0x0021cc; 	T(MOV(cl, 2));	// 81142 mov     cl, 2 ;~ 2331:21CC
cs=0x2331;eip=0x0021ce; 	T(SHL(si, cl));	// 81143 shl     si, cl ;~ 2331:21CE
cs=0x2331;eip=0x0021d0; 	T(ADD(si, *(dw*)((&unk_544d0))));	// 81144 add     si, word ptr unk_544D0 ;~ 2331:21D0
cs=0x2331;eip=0x0021d4; 	T(MOV(ax, 0x0A));	// 81145 mov     ax, 0Ah ;~ 2331:21D4
cs=0x2331;eip=0x0021d7; 	X(IMUL1_2(*(dw*)((&unk_544cc))));	// 81146 imul    word ptr unk_544CC ;~ 2331:21D7
cs=0x2331;eip=0x0021db; 	T(ADD(ax, 0x0ED12));	// 81147 add     ax, 0ED12h ;~ 2331:21DB
cs=0x2331;eip=0x0021de; 	X(PUSH(ax));	// 81148 push    ax ;~ 2331:21DE
cs=0x2331;eip=0x0021df; 	X(PUSH(*(dw*)(raddr(ds,si))));	// 81149 push    word ptr [si] ;~ 2331:21DF
cs=0x2331;eip=0x0021e1; 	X(PUSH(*(dw*)(raddr(ds,si+2))));	// 81150 push    word ptr [si+2] ;~ 2331:21E1
cs=0x2331;eip=0x0021e4; 	T(MOV(ax, 0x2860));	// 81151 mov     ax, 2860h ;~ 2331:21E4
cs=0x2331;eip=0x0021e7; 	X(PUSH(ax));	// 81152 push    ax ;~ 2331:21E7
cs=0x2331;eip=0x0021e8; 	T(SUB(ax, ax));	// 81153 sub     ax, ax ;~ 2331:21E8
cs=0x2331;eip=0x0021ea; 	X(PUSH(ax));	// 81154 push    ax ;~ 2331:21EA
cs=0x2331;eip=0x0021eb; 	X(PUSH(ax));	// 81155 push    ax ;~ 2331:21EB
cs=0x2331;eip=0x0021ec; 	T(MOV(ax, 0x60));	// 81156 mov     ax, 60h ; '`' ;~ 2331:21EC
cs=0x2331;eip=0x0021ef; 	X(PUSH(ax));	// 81157 push    ax ;~ 2331:21EF
cs=0x2331;eip=0x0021f0; 	T(MOV(ax, 0x46));	// 81158 mov     ax, 46h ; 'F' ;~ 2331:21F0
cs=0x2331;eip=0x0021f3; 	X(PUSH(ax));	// 81159 push    ax ;~ 2331:21F3
cs=0x2331;eip=0x0021f4; 	R(CALLF(sub_2c4d3,0));	// 81160 call    sub_2C4D3 ;~ 2331:21F4
cs=0x2331;eip=0x0021f9; 	T(MOV(ax, 0x2856));	// 81161 mov     ax, 2856h ;~ 2331:21F9
cs=0x2331;eip=0x0021fc; 	X(PUSH(ax));	// 81162 push    ax ;~ 2331:21FC
cs=0x2331;eip=0x0021fd; 	T(SUB(ax, ax));	// 81163 sub     ax, ax ;~ 2331:21FD
cs=0x2331;eip=0x0021ff; 	X(PUSH(ax));	// 81164 push    ax ;~ 2331:21FF
cs=0x2331;eip=0x002200; 	T(MOV(al, 0x46));	// 81165 mov     al, 46h ; 'F' ;~ 2331:2200
cs=0x2331;eip=0x002202; 	X(MUL1_1(unk_57043));	// 81166 mul     byte ptr unk_57043 ;~ 2331:2202
cs=0x2331;eip=0x002206; 	X(PUSH(ax));	// 81167 push    ax ;~ 2331:2206
cs=0x2331;eip=0x002207; 	T(MOV(ax, 0x0A));	// 81168 mov     ax, 0Ah ;~ 2331:2207
cs=0x2331;eip=0x00220a; 	X(IMUL1_2(*(dw*)((&unk_544cc))));	// 81169 imul    word ptr unk_544CC ;~ 2331:220A
cs=0x2331;eip=0x00220e; 	T(ADD(ax, 0x0ED12));	// 81170 add     ax, 0ED12h ;~ 2331:220E
cs=0x2331;eip=0x002211; 	X(PUSH(ax));	// 81171 push    ax ;~ 2331:2211
cs=0x2331;eip=0x002212; 	X(PUSH(*(dw*)(raddr(ds,si))));	// 81172 push    word ptr [si] ;~ 2331:2212
cs=0x2331;eip=0x002214; 	X(PUSH(*(dw*)(raddr(ds,si+2))));	// 81173 push    word ptr [si+2] ;~ 2331:2214
cs=0x2331;eip=0x002217; 	T(MOV(ax, 0x60));	// 81174 mov     ax, 60h ; '`' ;~ 2331:2217
cs=0x2331;eip=0x00221a; 	X(PUSH(ax));	// 81175 push    ax ;~ 2331:221A
cs=0x2331;eip=0x00221b; 	T(MOV(ax, 0x46));	// 81176 mov     ax, 46h ; 'F' ;~ 2331:221B
cs=0x2331;eip=0x00221e; 	X(PUSH(ax));	// 81177 push    ax ;~ 2331:221E
cs=0x2331;eip=0x00221f; 	R(CALLF(sub_2c4d3,0));	// 81178 call    sub_2C4D3 ;~ 2331:221F
cs=0x2331;eip=0x002224; 	T(MOV(al, unk_57043));	// 81179 mov     al, byte ptr unk_57043 ;~ 2331:2224
cs=0x2331;eip=0x002227; 	T(SUB(ah, ah));	// 81180 sub     ah, ah ;~ 2331:2227
cs=0x2331;eip=0x002229; 	T(ADD(ax, 0x1A));	// 81181 add     ax, 1Ah ;~ 2331:2229
cs=0x2331;eip=0x00222c; 	X(PUSH(ax));	// 81182 push    ax ;~ 2331:222C
cs=0x2331;eip=0x00222d; 	R(CALL(sub_33056,0));	// 81183 call    sub_33056 ;~ 2331:222D
cs=0x2331;eip=0x002230; 	X(PUSH(ax));	// 81184 push    ax ;~ 2331:2230
cs=0x2331;eip=0x002231; 	R(CALL(sub_33c72,0));	// 81185 call    sub_33C72 ;~ 2331:2231
cs=0x2331;eip=0x002234; 	X(POP(si));	// 81186 pop     si ;~ 2331:2234
cs=0x2331;eip=0x002235; 	T(MOV(sp, bp));	// 81187 mov     sp, bp ;~ 2331:2235
cs=0x2331;eip=0x002237; 	X(POP(bp));	// 81188 pop     bp ;~ 2331:2237
cs=0x2331;eip=0x002238; 	R(RETN(0));	// 81189 retn ;~ 2331:2238
sub_33b29:
	// 81197 
cs=0x2331;eip=0x002239; 	X(PUSH(bp));	// 81199 push    bp ;~ 2331:2239
cs=0x2331;eip=0x00223a; 	T(MOV(bp, sp));	// 81200 mov     bp, sp ;~ 2331:223A
cs=0x2331;eip=0x00223c; 	T(SUB(sp, 2));	// 81201 sub     sp, 2 ;~ 2331:223C
cs=0x2331;eip=0x00223f; 	X(PUSH(si));	// 81202 push    si ;~ 2331:223F
cs=0x2331;eip=0x002240; 	T(MOV(al, unk_57043));	// 81203 mov     al, byte ptr unk_57043 ;~ 2331:2240
cs=0x2331;eip=0x002243; 	T(SUB(ah, ah));	// 81204 sub     ah, ah ;~ 2331:2243
cs=0x2331;eip=0x002245; 	T(MOV(si, ax));	// 81205 mov     si, ax ;~ 2331:2245
cs=0x2331;eip=0x002247; 	T(MOV(cl, 2));	// 81206 mov     cl, 2 ;~ 2331:2247
cs=0x2331;eip=0x002249; 	T(SHL(si, cl));	// 81207 shl     si, cl ;~ 2331:2249
cs=0x2331;eip=0x00224b; 	T(ADD(si, *(dw*)((&unk_544d0))));	// 81208 add     si, word ptr unk_544D0 ;~ 2331:224B
cs=0x2331;eip=0x00224f; 	T(MOV(ax, 0x2860));	// 81209 mov     ax, 2860h ;~ 2331:224F
cs=0x2331;eip=0x002252; 	X(PUSH(ax));	// 81210 push    ax ;~ 2331:2252
cs=0x2331;eip=0x002253; 	T(SUB(ax, ax));	// 81211 sub     ax, ax ;~ 2331:2253
cs=0x2331;eip=0x002255; 	X(PUSH(ax));	// 81212 push    ax ;~ 2331:2255
cs=0x2331;eip=0x002256; 	X(PUSH(ax));	// 81213 push    ax ;~ 2331:2256
cs=0x2331;eip=0x002257; 	T(MOV(ax, 0x0A));	// 81214 mov     ax, 0Ah ;~ 2331:2257
cs=0x2331;eip=0x00225a; 	X(IMUL1_2(*(dw*)((&unk_544cc))));	// 81215 imul    word ptr unk_544CC ;~ 2331:225A
cs=0x2331;eip=0x00225e; 	T(ADD(ax, 0x0ED12));	// 81216 add     ax, 0ED12h ;~ 2331:225E
cs=0x2331;eip=0x002261; 	X(PUSH(ax));	// 81217 push    ax ;~ 2331:2261
cs=0x2331;eip=0x002262; 	X(PUSH(*(dw*)(raddr(ds,si))));	// 81218 push    word ptr [si] ;~ 2331:2262
cs=0x2331;eip=0x002264; 	X(PUSH(*(dw*)(raddr(ds,si+2))));	// 81219 push    word ptr [si+2] ;~ 2331:2264
cs=0x2331;eip=0x002267; 	T(MOV(ax, 0x60));	// 81220 mov     ax, 60h ; '`' ;~ 2331:2267
cs=0x2331;eip=0x00226a; 	X(PUSH(ax));	// 81221 push    ax ;~ 2331:226A
cs=0x2331;eip=0x00226b; 	T(MOV(ax, 0x46));	// 81222 mov     ax, 46h ; 'F' ;~ 2331:226B
cs=0x2331;eip=0x00226e; 	X(PUSH(ax));	// 81223 push    ax ;~ 2331:226E
cs=0x2331;eip=0x00226f; 	R(CALLF(sub_2c4d3,0));	// 81224 call    sub_2C4D3 ;~ 2331:226F
cs=0x2331;eip=0x002274; 	X(POP(si));	// 81225 pop     si ;~ 2331:2274
cs=0x2331;eip=0x002275; 	T(MOV(sp, bp));	// 81226 mov     sp, bp ;~ 2331:2275
cs=0x2331;eip=0x002277; 	X(POP(bp));	// 81227 pop     bp ;~ 2331:2277
cs=0x2331;eip=0x002278; 	R(RETN(0));	// 81228 retn ;~ 2331:2278
sub_33b69:
	// 81236 
#undef var_50
#define var_50 -0x50
	// 81239 var_50          = byte ptr -50h ;~ 2331:2279
cs=0x2331;eip=0x002279; 	X(PUSH(bp));	// 81241 push    bp ;~ 2331:2279
cs=0x2331;eip=0x00227a; 	T(MOV(bp, sp));	// 81242 mov     bp, sp ;~ 2331:227A
cs=0x2331;eip=0x00227c; 	T(SUB(sp, 0x52));	// 81243 sub     sp, 52h ;~ 2331:227C
cs=0x2331;eip=0x00227f; 	X(PUSH(*(dw*)((&unk_544ca))));	// 81244 push    word ptr unk_544CA ;~ 2331:227F
cs=0x2331;eip=0x002283; 	R(CALLF(sub_202f1,0));	// 81245 call    sub_202F1 ;~ 2331:2283
cs=0x2331;eip=0x002288; 	T(MOV(ax, 0x0C9));	// 81246 mov     ax, 0C9h ; '…' ;~ 2331:2288
cs=0x2331;eip=0x00228b; 	X(PUSH(ax));	// 81247 push    ax ;~ 2331:228B
cs=0x2331;eip=0x00228c; 	T(MOV(ax, 0x82));	// 81248 mov     ax, 82h ; 'Ç' ;~ 2331:228C
cs=0x2331;eip=0x00228f; 	X(PUSH(ax));	// 81249 push    ax ;~ 2331:228F
cs=0x2331;eip=0x002290; 	T(MOV(ax, 0x6C));	// 81250 mov     ax, 6Ch ; 'l' ;~ 2331:2290
cs=0x2331;eip=0x002293; 	X(PUSH(ax));	// 81251 push    ax ;~ 2331:2293
cs=0x2331;eip=0x002294; 	T(MOV(ax, 0x3F));	// 81252 mov     ax, 3Fh ; '?' ;~ 2331:2294
cs=0x2331;eip=0x002297; 	X(PUSH(ax));	// 81253 push    ax ;~ 2331:2297
cs=0x2331;eip=0x002298; 	T(MOV(ax, 0x0FF0F));	// 81254 mov     ax, 0FF0Fh ;~ 2331:2298
cs=0x2331;eip=0x00229b; 	X(PUSH(ax));	// 81255 push    ax ;~ 2331:229B
cs=0x2331;eip=0x00229c; 	R(CALLF(sub_233c4,0));	// 81256 call    sub_233C4 ;~ 2331:229C
cs=0x2331;eip=0x0022a1; 	T(MOV(al, unk_57042));	// 81257 mov     al, byte ptr unk_57042 ;~ 2331:22A1
cs=0x2331;eip=0x0022a4; 	T(SUB(ah, ah));	// 81258 sub     ah, ah ;~ 2331:22A4
cs=0x2331;eip=0x0022a6; 	T(ADD(ax, 0x2B));	// 81259 add     ax, 2Bh ; '+' ;~ 2331:22A6
cs=0x2331;eip=0x0022a9; 	X(PUSH(ax));	// 81260 push    ax ;~ 2331:22A9
cs=0x2331;eip=0x0022aa; 	R(CALL(sub_33056,0));	// 81261 call    sub_33056 ;~ 2331:22AA
cs=0x2331;eip=0x0022ad; 	X(PUSH(ax));	// 81262 push    ax ;~ 2331:22AD
cs=0x2331;eip=0x0022ae; 	T(MOV(al, unk_57042));	// 81263 mov     al, byte ptr unk_57042 ;~ 2331:22AE
cs=0x2331;eip=0x0022b1; 	T(SUB(ah, ah));	// 81264 sub     ah, ah ;~ 2331:22B1
cs=0x2331;eip=0x0022b3; 	T(INC(ax));	// 81265 inc     ax ;~ 2331:22B3
cs=0x2331;eip=0x0022b4; 	X(PUSH(ax));	// 81266 push    ax ;~ 2331:22B4
cs=0x2331;eip=0x0022b5; 	T(MOV(ax, 0x2892));	// 81267 mov     ax, 2892h ;~ 2331:22B5
cs=0x2331;eip=0x0022b8; 	X(PUSH(ax));	// 81268 push    ax ;~ 2331:22B8
cs=0x2331;eip=0x0022b9; 	T(ax = bp+var_50);	// 81269 lea     ax, [bp+var_50] ;~ 2331:22B9
cs=0x2331;eip=0x0022bc; 	X(PUSH(ax));	// 81270 push    ax ;~ 2331:22BC
cs=0x2331;eip=0x0022bd; 	R(CALLF(sub_2f1d9,0));	// 81271 call    sub_2F1D9 ;~ 2331:22BD
cs=0x2331;eip=0x0022c2; 	T(ADD(sp, 8));	// 81272 add     sp, 8 ;~ 2331:22C2
cs=0x2331;eip=0x0022c5; 	T(MOV(ax, 0x83));	// 81273 mov     ax, 83h ; 'É' ;~ 2331:22C5
cs=0x2331;eip=0x0022c8; 	X(PUSH(ax));	// 81274 push    ax ;~ 2331:22C8
cs=0x2331;eip=0x0022c9; 	T(MOV(ax, 0x135));	// 81275 mov     ax, 135h ;~ 2331:22C9
cs=0x2331;eip=0x0022cc; 	X(PUSH(ax));	// 81276 push    ax ;~ 2331:22CC
cs=0x2331;eip=0x0022cd; 	T(MOV(ax, 0x0C9));	// 81277 mov     ax, 0C9h ; '…' ;~ 2331:22CD
cs=0x2331;eip=0x0022d0; 	X(PUSH(ax));	// 81278 push    ax ;~ 2331:22D0
cs=0x2331;eip=0x0022d1; 	T(ax = bp+var_50);	// 81279 lea     ax, [bp+var_50] ;~ 2331:22D1
cs=0x2331;eip=0x0022d4; 	X(PUSH(ax));	// 81280 push    ax ;~ 2331:22D4
cs=0x2331;eip=0x0022d5; 	R(CALLF(sub_30ffa,0));	// 81281 call    sub_30FFA ;~ 2331:22D5
cs=0x2331;eip=0x0022da; 	T(ADD(sp, 8));	// 81282 add     sp, 8 ;~ 2331:22DA
cs=0x2331;eip=0x0022dd; 	T(MOV(al, unk_57042));	// 81283 mov     al, byte ptr unk_57042 ;~ 2331:22DD
cs=0x2331;eip=0x0022e0; 	T(SUB(ah, ah));	// 81284 sub     ah, ah ;~ 2331:22E0
cs=0x2331;eip=0x0022e2; 	T(ADD(ax, 0x30));	// 81285 add     ax, 30h ; '0' ;~ 2331:22E2
cs=0x2331;eip=0x0022e5; 	X(PUSH(ax));	// 81286 push    ax ;~ 2331:22E5
cs=0x2331;eip=0x0022e6; 	R(CALL(sub_33056,0));	// 81287 call    sub_33056 ;~ 2331:22E6
cs=0x2331;eip=0x0022e9; 	X(PUSH(ax));	// 81288 push    ax ;~ 2331:22E9
cs=0x2331;eip=0x0022ea; 	T(MOV(ax, 0x28A5));	// 81289 mov     ax, 28A5h ;~ 2331:22EA
cs=0x2331;eip=0x0022ed; 	X(PUSH(ax));	// 81290 push    ax ;~ 2331:22ED
cs=0x2331;eip=0x0022ee; 	T(ax = bp+var_50);	// 81291 lea     ax, [bp+var_50] ;~ 2331:22EE
cs=0x2331;eip=0x0022f1; 	X(PUSH(ax));	// 81292 push    ax ;~ 2331:22F1
cs=0x2331;eip=0x0022f2; 	R(CALLF(sub_2f1d9,0));	// 81293 call    sub_2F1D9 ;~ 2331:22F2
cs=0x2331;eip=0x0022f7; 	T(ADD(sp, 6));	// 81294 add     sp, 6 ;~ 2331:22F7
cs=0x2331;eip=0x0022fa; 	T(MOV(ax, 0x0B7));	// 81295 mov     ax, 0B7h ; '∑' ;~ 2331:22FA
cs=0x2331;eip=0x0022fd; 	X(PUSH(ax));	// 81296 push    ax ;~ 2331:22FD
cs=0x2331;eip=0x0022fe; 	T(MOV(ax, 0x135));	// 81297 mov     ax, 135h ;~ 2331:22FE
cs=0x2331;eip=0x002301; 	X(PUSH(ax));	// 81298 push    ax ;~ 2331:2301
cs=0x2331;eip=0x002302; 	T(MOV(ax, 0x0C9));	// 81299 mov     ax, 0C9h ; '…' ;~ 2331:2302
cs=0x2331;eip=0x002305; 	X(PUSH(ax));	// 81300 push    ax ;~ 2331:2305
cs=0x2331;eip=0x002306; 	T(ax = bp+var_50);	// 81301 lea     ax, [bp+var_50] ;~ 2331:2306
cs=0x2331;eip=0x002309; 	X(PUSH(ax));	// 81302 push    ax ;~ 2331:2309
cs=0x2331;eip=0x00230a; 	R(CALLF(sub_30ffa,0));	// 81303 call    sub_30FFA ;~ 2331:230A
cs=0x2331;eip=0x00230f; 	T(ADD(sp, 8));	// 81304 add     sp, 8 ;~ 2331:230F
cs=0x2331;eip=0x002312; 	T(MOV(ax, 0x0CE));	// 81305 mov     ax, 0CEh ; 'Œ' ;~ 2331:2312
cs=0x2331;eip=0x002315; 	X(PUSH(ax));	// 81306 push    ax ;~ 2331:2315
cs=0x2331;eip=0x002316; 	T(MOV(ax, 0x8D));	// 81307 mov     ax, 8Dh ; 'ç' ;~ 2331:2316
cs=0x2331;eip=0x002319; 	X(PUSH(ax));	// 81308 push    ax ;~ 2331:2319
cs=0x2331;eip=0x00231a; 	T(MOV(ax, 0x62));	// 81309 mov     ax, 62h ; 'b' ;~ 2331:231A
cs=0x2331;eip=0x00231d; 	X(PUSH(ax));	// 81310 push    ax ;~ 2331:231D
cs=0x2331;eip=0x00231e; 	T(MOV(ax, 0x29));	// 81311 mov     ax, 29h ; ')' ;~ 2331:231E
cs=0x2331;eip=0x002321; 	X(PUSH(ax));	// 81312 push    ax ;~ 2331:2321
cs=0x2331;eip=0x002322; 	T(MOV(ax, 0x0FF00));	// 81313 mov     ax, 0FF00h ;~ 2331:2322
cs=0x2331;eip=0x002325; 	X(PUSH(ax));	// 81314 push    ax ;~ 2331:2325
cs=0x2331;eip=0x002326; 	R(CALLF(sub_233c4,0));	// 81315 call    sub_233C4 ;~ 2331:2326
cs=0x2331;eip=0x00232b; 	T(MOV(ax, 0x286A));	// 81316 mov     ax, 286Ah ;~ 2331:232B
cs=0x2331;eip=0x00232e; 	X(PUSH(ax));	// 81317 push    ax ;~ 2331:232E
cs=0x2331;eip=0x00232f; 	T(SUB(ax, ax));	// 81318 sub     ax, ax ;~ 2331:232F
cs=0x2331;eip=0x002331; 	X(PUSH(ax));	// 81319 push    ax ;~ 2331:2331
cs=0x2331;eip=0x002332; 	T(MOV(al, 0x28));	// 81320 mov     al, 28h ; '(' ;~ 2331:2332
cs=0x2331;eip=0x002334; 	X(MUL1_1(unk_57042));	// 81321 mul     byte ptr unk_57042 ;~ 2331:2334
cs=0x2331;eip=0x002338; 	X(PUSH(ax));	// 81322 push    ax ;~ 2331:2338
cs=0x2331;eip=0x002339; 	T(MOV(ax, 0x0ED08));	// 81323 mov     ax, 0ED08h ;~ 2331:2339
cs=0x2331;eip=0x00233c; 	X(PUSH(ax));	// 81324 push    ax ;~ 2331:233C
cs=0x2331;eip=0x00233d; 	T(MOV(ax, 0x0CF));	// 81325 mov     ax, 0CFh ; 'œ' ;~ 2331:233D
cs=0x2331;eip=0x002340; 	X(PUSH(ax));	// 81326 push    ax ;~ 2331:2340
cs=0x2331;eip=0x002341; 	T(MOV(ax, 0x8E));	// 81327 mov     ax, 8Eh ; 'é' ;~ 2331:2341
cs=0x2331;eip=0x002344; 	X(PUSH(ax));	// 81328 push    ax ;~ 2331:2344
cs=0x2331;eip=0x002345; 	X(PUSH(*(dw*)((&unk_4a21c))));	// 81329 push    word ptr unk_4A21C ;~ 2331:2345
cs=0x2331;eip=0x002349; 	T(MOV(ax, 0x27));	// 81330 mov     ax, 27h ; ''' ;~ 2331:2349
cs=0x2331;eip=0x00234c; 	X(PUSH(ax));	// 81331 push    ax ;~ 2331:234C
cs=0x2331;eip=0x00234d; 	R(CALLF(sub_2e88a,0));	// 81332 call    sub_2E88A ;~ 2331:234D
cs=0x2331;eip=0x002352; 	T(MOV(ax, 0x0ED08));	// 81333 mov     ax, 0ED08h ;~ 2331:2352
cs=0x2331;eip=0x002355; 	X(PUSH(ax));	// 81334 push    ax ;~ 2331:2355
cs=0x2331;eip=0x002356; 	T(MOV(ax, 0x0C0));	// 81335 mov     ax, 0C0h ; '¿' ;~ 2331:2356
cs=0x2331;eip=0x002359; 	X(PUSH(ax));	// 81336 push    ax ;~ 2331:2359
cs=0x2331;eip=0x00235a; 	T(MOV(ax, 0x82));	// 81337 mov     ax, 82h ; 'Ç' ;~ 2331:235A
cs=0x2331;eip=0x00235d; 	X(PUSH(ax));	// 81338 push    ax ;~ 2331:235D
cs=0x2331;eip=0x00235e; 	T(MOV(ax, 0x0A));	// 81339 mov     ax, 0Ah ;~ 2331:235E
cs=0x2331;eip=0x002361; 	X(IMUL1_2(*(dw*)((&unk_544cc))));	// 81340 imul    word ptr unk_544CC ;~ 2331:2361
cs=0x2331;eip=0x002365; 	T(ADD(ax, 0x0ED12));	// 81341 add     ax, 0ED12h ;~ 2331:2365
cs=0x2331;eip=0x002368; 	X(PUSH(ax));	// 81342 push    ax ;~ 2331:2368
cs=0x2331;eip=0x002369; 	T(MOV(ax, 0x0C0));	// 81343 mov     ax, 0C0h ; '¿' ;~ 2331:2369
cs=0x2331;eip=0x00236c; 	X(PUSH(ax));	// 81344 push    ax ;~ 2331:236C
cs=0x2331;eip=0x00236d; 	T(MOV(ax, 0x82));	// 81345 mov     ax, 82h ; 'Ç' ;~ 2331:236D
cs=0x2331;eip=0x002370; 	X(PUSH(ax));	// 81346 push    ax ;~ 2331:2370
cs=0x2331;eip=0x002371; 	T(MOV(ax, 0x70));	// 81347 mov     ax, 70h ; 'p' ;~ 2331:2371
cs=0x2331;eip=0x002374; 	X(PUSH(ax));	// 81348 push    ax ;~ 2331:2374
cs=0x2331;eip=0x002375; 	T(MOV(ax, 0x3F));	// 81349 mov     ax, 3Fh ; '?' ;~ 2331:2375
cs=0x2331;eip=0x002378; 	X(PUSH(ax));	// 81350 push    ax ;~ 2331:2378
cs=0x2331;eip=0x002379; 	R(CALLF(sub_2c4d3,0));	// 81351 call    sub_2C4D3 ;~ 2331:2379
cs=0x2331;eip=0x00237e; 	T(MOV(sp, bp));	// 81352 mov     sp, bp ;~ 2331:237E
cs=0x2331;eip=0x002380; 	X(POP(bp));	// 81353 pop     bp ;~ 2331:2380
cs=0x2331;eip=0x002381; 	R(RETN(0));	// 81354 retn ;~ 2331:2381
sub_33c72:
	// 81362 
#undef var_c
#define var_c -0x0C
	// 81364 var_C           = byte ptr -0Ch ;~ 2331:2382
#undef var_8
#define var_8 -8
	// 81365 var_8           = word ptr -8 ;~ 2331:2382
#undef var_4
#define var_4 -4
	// 81366 var_4           = byte ptr -4 ;~ 2331:2382
#undef var_2
#define var_2 -2
	// 81367 var_2           = word ptr -2 ;~ 2331:2382
#undef arg_0
#define arg_0 4
	// 81368 arg_0           = word ptr  4 ;~ 2331:2382
cs=0x2331;eip=0x002382; 	X(PUSH(bp));	// 81370 push    bp ;~ 2331:2382
cs=0x2331;eip=0x002383; 	T(MOV(bp, sp));	// 81371 mov     bp, sp ;~ 2331:2383
cs=0x2331;eip=0x002385; 	T(SUB(sp, 0x0C));	// 81372 sub     sp, 0Ch ;~ 2331:2385
cs=0x2331;eip=0x002388; 	X(PUSH(di));	// 81373 push    di ;~ 2331:2388
cs=0x2331;eip=0x002389; 	X(PUSH(si));	// 81374 push    si ;~ 2331:2389
cs=0x2331;eip=0x00238a; 	X(PUSH(*(dw*)((&unk_544ca))));	// 81375 push    word ptr unk_544CA ;~ 2331:238A
cs=0x2331;eip=0x00238e; 	R(CALLF(sub_202f1,0));	// 81376 call    sub_202F1 ;~ 2331:238E
cs=0x2331;eip=0x002393; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 81377 mov     si, [bp+arg_0] ;~ 2331:2393
cs=0x2331;eip=0x002396; 	T(MOV(ax, 0x0C));	// 81378 mov     ax, 0Ch ;~ 2331:2396
cs=0x2331;eip=0x002399; 	X(PUSH(ax));	// 81379 push    ax ;~ 2331:2399
cs=0x2331;eip=0x00239a; 	T(MOV(ax, 0x4F));	// 81380 mov     ax, 4Fh ; 'O' ;~ 2331:239A
cs=0x2331;eip=0x00239d; 	X(PUSH(ax));	// 81381 push    ax ;~ 2331:239D
cs=0x2331;eip=0x00239e; 	T(MOV(ax, 0x5F));	// 81382 mov     ax, 5Fh ; '_' ;~ 2331:239E
cs=0x2331;eip=0x0023a1; 	X(PUSH(ax));	// 81383 push    ax ;~ 2331:23A1
cs=0x2331;eip=0x0023a2; 	T(MOV(ax, 0x6A));	// 81384 mov     ax, 6Ah ; 'j' ;~ 2331:23A2
cs=0x2331;eip=0x0023a5; 	X(PUSH(ax));	// 81385 push    ax ;~ 2331:23A5
cs=0x2331;eip=0x0023a6; 	T(MOV(ax, 0x0FF0F));	// 81386 mov     ax, 0FF0Fh ;~ 2331:23A6
cs=0x2331;eip=0x0023a9; 	X(PUSH(ax));	// 81387 push    ax ;~ 2331:23A9
cs=0x2331;eip=0x0023aa; 	R(CALLF(sub_233c4,0));	// 81388 call    sub_233C4 ;~ 2331:23AA
cs=0x2331;eip=0x0023af; 	T(CMP(*(dw*)((&byte_47b2e)), 0));	// 81389 cmp     word ptr byte_47B2E, 0 ;~ 2331:23AF
cs=0x2331;eip=0x0023b4; 	R(JNZ(loc_33cab));	// 81390 jnz     short loc_33CAB ;~ 2331:23B4
cs=0x2331;eip=0x0023b6; 	T(MOV(ax, 0x0D));	// 81391 mov     ax, 0Dh ;~ 2331:23B6
cs=0x2331;eip=0x0023b9; 	R(JMP(loc_33cae));	// 81392 jmp     short loc_33CAE ;~ 2331:23B9
loc_33cab:
	// 9630 
cs=0x2331;eip=0x0023bb; 	T(MOV(ax, 0x0C));	// 81396 mov     ax, 0Ch ;~ 2331:23BB
loc_33cae:
	// 9631 
cs=0x2331;eip=0x0023be; 	T(OR(ah, 0x0FF));	// 81399 or      ah, 0FFh ;~ 2331:23BE
cs=0x2331;eip=0x0023c1; 	X(MOV(*(dw*)((&unk_47bde)), ax));	// 81400 mov     word ptr unk_47BDE, ax ;~ 2331:23C1
cs=0x2331;eip=0x0023c4; 	X(MOV(unk_56885, 0));	// 81401 mov     byte ptr unk_56885, 0 ;~ 2331:23C4
cs=0x2331;eip=0x0023c9; 	T(MOV(bl, unk_57043));	// 81402 mov     bl, byte ptr unk_57043 ;~ 2331:23C9
cs=0x2331;eip=0x0023cd; 	T(SUB(bh, bh));	// 81403 sub     bh, bh ;~ 2331:23CD
cs=0x2331;eip=0x0023cf; 	T(SHL(bx, 1));	// 81404 shl     bx, 1 ;~ 2331:23CF
cs=0x2331;eip=0x0023d1; 	X(PUSH(*(dw*)(raddr(ds,bx+0x288C))));	// 81405 push    word ptr [bx+288Ch] ;~ 2331:23D1
cs=0x2331;eip=0x0023d5; 	T(MOV(ax, 0x0C));	// 81406 mov     ax, 0Ch ;~ 2331:23D5
cs=0x2331;eip=0x0023d8; 	X(PUSH(ax));	// 81407 push    ax ;~ 2331:23D8
cs=0x2331;eip=0x0023d9; 	T(MOV(ax, 0x4F));	// 81408 mov     ax, 4Fh ; 'O' ;~ 2331:23D9
cs=0x2331;eip=0x0023dc; 	X(PUSH(ax));	// 81409 push    ax ;~ 2331:23DC
cs=0x2331;eip=0x0023dd; 	R(CALLF(sub_2dce4,0));	// 81410 call    sub_2DCE4 ;~ 2331:23DD
cs=0x2331;eip=0x0023e2; 	T(MOV(ax, 0x0C));	// 81411 mov     ax, 0Ch ;~ 2331:23E2
cs=0x2331;eip=0x0023e5; 	X(PUSH(ax));	// 81412 push    ax ;~ 2331:23E5
cs=0x2331;eip=0x0023e6; 	T(MOV(ax, 0x69));	// 81413 mov     ax, 69h ; 'i' ;~ 2331:23E6
cs=0x2331;eip=0x0023e9; 	X(PUSH(ax));	// 81414 push    ax ;~ 2331:23E9
cs=0x2331;eip=0x0023ea; 	T(MOV(ax, 0x59));	// 81415 mov     ax, 59h ; 'Y' ;~ 2331:23EA
cs=0x2331;eip=0x0023ed; 	X(PUSH(ax));	// 81416 push    ax ;~ 2331:23ED
cs=0x2331;eip=0x0023ee; 	T(MOV(ax, 0x0FF0C));	// 81417 mov     ax, 0FF0Ch ;~ 2331:23EE
cs=0x2331;eip=0x0023f1; 	X(PUSH(ax));	// 81418 push    ax ;~ 2331:23F1
cs=0x2331;eip=0x0023f2; 	R(CALLF(sub_203c2,0));	// 81419 call    sub_203C2 ;~ 2331:23F2
cs=0x2331;eip=0x0023f7; 	R(CALL(sub_3318a,0));	// 81420 call    sub_3318A ;~ 2331:23F7
cs=0x2331;eip=0x0023fa; 	X(MOV(*(dw*)((&unk_47bde)), 0x0FF00));	// 81421 mov     word ptr unk_47BDE, 0FF00h ;~ 2331:23FA
cs=0x2331;eip=0x002400; 	X(MOV(unk_56885, 0));	// 81422 mov     byte ptr unk_56885, 0 ;~ 2331:2400
cs=0x2331;eip=0x002405; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0x5C));	// 81423 mov     [bp+var_8], 5Ch ; '\' ;~ 2331:2405
cs=0x2331;eip=0x00240a; 	X(MOV(*(raddr(ss,bp+var_4)), 0));	// 81424 mov     [bp+var_4], 0 ;~ 2331:240A
loc_33cfe:
	// 9632 
cs=0x2331;eip=0x00240e; 	T(MOV(di, si));	// 81427 mov     di, si ;~ 2331:240E
cs=0x2331;eip=0x002410; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 81428 mov     [bp+var_2], 0 ;~ 2331:2410
loc_33d05:
	// 9633 
cs=0x2331;eip=0x002415; 	T(CMP(di, si));	// 81431 cmp     di, si ;~ 2331:2415
cs=0x2331;eip=0x002417; 	R(JBE(loc_33d17));	// 81432 jbe     short loc_33D17 ;~ 2331:2417
cs=0x2331;eip=0x002419; 	T(MOV(al, *(raddr(ds,di-1))));	// 81433 mov     al, [di-1] ;~ 2331:2419
cs=0x2331;eip=0x00241c; 	T(SUB(ah, ah));	// 81434 sub     ah, ah ;~ 2331:241C
cs=0x2331;eip=0x00241e; 	X(PUSH(ax));	// 81435 push    ax ;~ 2331:241E
cs=0x2331;eip=0x00241f; 	R(CALLF(sub_2dc86,0));	// 81436 call    sub_2DC86 ;~ 2331:241F
cs=0x2331;eip=0x002424; 	X(ADD(*(dw*)(raddr(ss,bp+var_2)), ax));	// 81437 add     [bp+var_2], ax ;~ 2331:2424
loc_33d17:
	// 9634 
cs=0x2331;eip=0x002427; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x5E));	// 81440 cmp     [bp+var_2], 5Eh ; '^' ;~ 2331:2427
cs=0x2331;eip=0x00242b; 	R(JL(loc_33d4c));	// 81441 jl      short loc_33D4C ;~ 2331:242B
cs=0x2331;eip=0x00242d; 	R(JMP(loc_33d26));	// 81442 jmp     short loc_33D26 ;~ 2331:242D
loc_33d1f:
	// 9635 
cs=0x2331;eip=0x00242f; 	T(CMP(*(raddr(ds,di-1)), 0x20));	// 81446 cmp     byte ptr [di-1], 20h ; ' ' ;~ 2331:242F
cs=0x2331;eip=0x002433; 	R(JZ(loc_33d2a));	// 81447 jz      short loc_33D2A ;~ 2331:2433
cs=0x2331;eip=0x002435; 	T(DEC(di));	// 81448 dec     di ;~ 2331:2435
loc_33d26:
	// 9636 
cs=0x2331;eip=0x002436; 	T(CMP(di, si));	// 81451 cmp     di, si ;~ 2331:2436
cs=0x2331;eip=0x002438; 	R(JA(loc_33d1f));	// 81452 ja      short loc_33D1F ;~ 2331:2438
loc_33d2a:
	// 9637 
cs=0x2331;eip=0x00243a; 	T(MOV(al, *(raddr(ds,di))));	// 81456 mov     al, [di] ;~ 2331:243A
cs=0x2331;eip=0x00243c; 	X(MOV(*(raddr(ss,bp+var_c)), al));	// 81457 mov     [bp+var_C], al ;~ 2331:243C
cs=0x2331;eip=0x00243f; 	X(MOV(*(raddr(ds,di)), 0));	// 81458 mov     byte ptr [di], 0 ;~ 2331:243F
cs=0x2331;eip=0x002442; 	X(PUSH(si));	// 81459 push    si ;~ 2331:2442
cs=0x2331;eip=0x002443; 	T(MOV(ax, 0x0C));	// 81460 mov     ax, 0Ch ;~ 2331:2443
cs=0x2331;eip=0x002446; 	X(PUSH(ax));	// 81461 push    ax ;~ 2331:2446
cs=0x2331;eip=0x002447; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 81462 push    [bp+var_8] ;~ 2331:2447
cs=0x2331;eip=0x00244a; 	R(CALLF(sub_2dce4,0));	// 81463 call    sub_2DCE4 ;~ 2331:244A
cs=0x2331;eip=0x00244f; 	T(MOV(al, *(raddr(ss,bp+var_c))));	// 81464 mov     al, [bp+var_C] ;~ 2331:244F
cs=0x2331;eip=0x002452; 	X(MOV(*(raddr(ds,di)), al));	// 81465 mov     [di], al ;~ 2331:2452
cs=0x2331;eip=0x002454; 	X(ADD(*(dw*)(raddr(ss,bp+var_8)), 0x0A));	// 81466 add     [bp+var_8], 0Ah ;~ 2331:2454
cs=0x2331;eip=0x002458; 	T(MOV(si, di));	// 81467 mov     si, di ;~ 2331:2458
cs=0x2331;eip=0x00245a; 	R(JMP(loc_33d5b));	// 81468 jmp     short loc_33D5B ;~ 2331:245A
loc_33d4c:
	// 9638 
cs=0x2331;eip=0x00245c; 	T(CMP(*(raddr(ds,di)), 0));	// 81472 cmp     byte ptr [di], 0 ;~ 2331:245C
cs=0x2331;eip=0x00245f; 	R(JNZ(loc_33d57));	// 81473 jnz     short loc_33D57 ;~ 2331:245F
cs=0x2331;eip=0x002461; 	X(MOV(*(raddr(ss,bp+var_4)), 1));	// 81474 mov     [bp+var_4], 1 ;~ 2331:2461
cs=0x2331;eip=0x002465; 	R(JMP(loc_33d2a));	// 81475 jmp     short loc_33D2A ;~ 2331:2465
loc_33d57:
	// 9639 
cs=0x2331;eip=0x002467; 	T(INC(di));	// 81479 inc     di ;~ 2331:2467
cs=0x2331;eip=0x002468; 	R(JMP(loc_33d05));	// 81480 jmp     short loc_33D05 ;~ 2331:2468
loc_33d5a:
	// 9640 
cs=0x2331;eip=0x00246a; 	T(INC(si));	// 81484 inc     si ;~ 2331:246A
loc_33d5b:
	// 9641 
cs=0x2331;eip=0x00246b; 	T(CMP(*(raddr(ds,si)), 0x20));	// 81487 cmp     byte ptr [si], 20h ; ' ' ;~ 2331:246B
cs=0x2331;eip=0x00246e; 	R(JZ(loc_33d5a));	// 81488 jz      short loc_33D5A ;~ 2331:246E
cs=0x2331;eip=0x002470; 	T(CMP(*(raddr(ss,bp+var_4)), 0));	// 81489 cmp     [bp+var_4], 0 ;~ 2331:2470
cs=0x2331;eip=0x002474; 	R(JZ(loc_33cfe));	// 81490 jz      short loc_33CFE ;~ 2331:2474
cs=0x2331;eip=0x002476; 	T(MOV(ax, 0x0ED08));	// 81491 mov     ax, 0ED08h ;~ 2331:2476
cs=0x2331;eip=0x002479; 	X(PUSH(ax));	// 81492 push    ax ;~ 2331:2479
cs=0x2331;eip=0x00247a; 	T(SUB(ax, ax));	// 81493 sub     ax, ax ;~ 2331:247A
cs=0x2331;eip=0x00247c; 	X(PUSH(ax));	// 81494 push    ax ;~ 2331:247C
cs=0x2331;eip=0x00247d; 	T(MOV(ax, 0x4F));	// 81495 mov     ax, 4Fh ; 'O' ;~ 2331:247D
cs=0x2331;eip=0x002480; 	X(PUSH(ax));	// 81496 push    ax ;~ 2331:2480
cs=0x2331;eip=0x002481; 	T(MOV(ax, 0x0A));	// 81497 mov     ax, 0Ah ;~ 2331:2481
cs=0x2331;eip=0x002484; 	X(IMUL1_2(*(dw*)((&unk_544cc))));	// 81498 imul    word ptr unk_544CC ;~ 2331:2484
cs=0x2331;eip=0x002488; 	T(ADD(ax, 0x0ED12));	// 81499 add     ax, 0ED12h ;~ 2331:2488
cs=0x2331;eip=0x00248b; 	X(PUSH(ax));	// 81500 push    ax ;~ 2331:248B
cs=0x2331;eip=0x00248c; 	T(SUB(ax, ax));	// 81501 sub     ax, ax ;~ 2331:248C
cs=0x2331;eip=0x00248e; 	X(PUSH(ax));	// 81502 push    ax ;~ 2331:248E
cs=0x2331;eip=0x00248f; 	T(MOV(ax, 0x4F));	// 81503 mov     ax, 4Fh ; 'O' ;~ 2331:248F
cs=0x2331;eip=0x002492; 	X(PUSH(ax));	// 81504 push    ax ;~ 2331:2492
cs=0x2331;eip=0x002493; 	T(MOV(ax, 0x70));	// 81505 mov     ax, 70h ; 'p' ;~ 2331:2493
cs=0x2331;eip=0x002496; 	X(PUSH(ax));	// 81506 push    ax ;~ 2331:2496
cs=0x2331;eip=0x002497; 	T(MOV(ax, 0x6A));	// 81507 mov     ax, 6Ah ; 'j' ;~ 2331:2497
cs=0x2331;eip=0x00249a; 	X(PUSH(ax));	// 81508 push    ax ;~ 2331:249A
cs=0x2331;eip=0x00249b; 	R(CALLF(sub_2c4d3,0));	// 81509 call    sub_2C4D3 ;~ 2331:249B
cs=0x2331;eip=0x0024a0; 	X(POP(si));	// 81510 pop     si ;~ 2331:24A0
cs=0x2331;eip=0x0024a1; 	X(POP(di));	// 81511 pop     di ;~ 2331:24A1
cs=0x2331;eip=0x0024a2; 	T(MOV(sp, bp));	// 81512 mov     sp, bp ;~ 2331:24A2
cs=0x2331;eip=0x0024a4; 	X(POP(bp));	// 81513 pop     bp ;~ 2331:24A4
cs=0x2331;eip=0x0024a5; 	R(RETN(2));	// 81514 retn    2 ;~ 2331:24A5
sub_33d98:
	// 81522 
cs=0x2331;eip=0x0024a8; 	X(PUSH(bp));	// 81523 push    bp ;~ 2331:24A8
cs=0x2331;eip=0x0024a9; 	T(MOV(bp, sp));	// 81524 mov     bp, sp ;~ 2331:24A9
cs=0x2331;eip=0x0024ab; 	T(SUB(sp, 4));	// 81525 sub     sp, 4 ;~ 2331:24AB
cs=0x2331;eip=0x0024ae; 	X(PUSH(di));	// 81526 push    di ;~ 2331:24AE
cs=0x2331;eip=0x0024af; 	X(PUSH(si));	// 81527 push    si ;~ 2331:24AF
cs=0x2331;eip=0x0024b0; 	R(CALLF(sub_203b0,0));	// 81528 call    sub_203B0 ;~ 2331:24B0
cs=0x2331;eip=0x0024b5; 	R(CALL(sub_3321b,0));	// 81529 call    sub_3321B ;~ 2331:24B5
cs=0x2331;eip=0x0024b8; 	R(CALL(sub_3318a,0));	// 81530 call    sub_3318A ;~ 2331:24B8
cs=0x2331;eip=0x0024bb; 	R(CALL(sub_33161,0));	// 81531 call    sub_33161 ;~ 2331:24BB
cs=0x2331;eip=0x0024be; 	T(MOV(ax, 0x11));	// 81532 mov     ax, 11h ;~ 2331:24BE
cs=0x2331;eip=0x0024c1; 	X(PUSH(ax));	// 81533 push    ax ;~ 2331:24C1
cs=0x2331;eip=0x0024c2; 	T(MOV(ax, 0x0DF));	// 81534 mov     ax, 0DFh ; 'ﬂ' ;~ 2331:24C2
cs=0x2331;eip=0x0024c5; 	X(PUSH(ax));	// 81535 push    ax ;~ 2331:24C5
cs=0x2331;eip=0x0024c6; 	T(MOV(ax, 0x20));	// 81536 mov     ax, 20h ; ' ' ;~ 2331:24C6
cs=0x2331;eip=0x0024c9; 	X(PUSH(ax));	// 81537 push    ax ;~ 2331:24C9
cs=0x2331;eip=0x0024ca; 	T(MOV(ax, 0x62));	// 81538 mov     ax, 62h ; 'b' ;~ 2331:24CA
cs=0x2331;eip=0x0024cd; 	X(PUSH(ax));	// 81539 push    ax ;~ 2331:24CD
cs=0x2331;eip=0x0024ce; 	R(CALL(sub_33056,0));	// 81540 call    sub_33056 ;~ 2331:24CE
cs=0x2331;eip=0x0024d1; 	X(PUSH(ax));	// 81541 push    ax ;~ 2331:24D1
cs=0x2331;eip=0x0024d2; 	R(CALLF(sub_30ffa,0));	// 81542 call    sub_30FFA ;~ 2331:24D2
cs=0x2331;eip=0x0024d7; 	T(ADD(sp, 8));	// 81543 add     sp, 8 ;~ 2331:24D7
cs=0x2331;eip=0x0024da; 	R(CALL(sub_3317c,0));	// 81544 call    sub_3317C ;~ 2331:24DA
cs=0x2331;eip=0x0024dd; 	T(MOV(ax, 0x19));	// 81545 mov     ax, 19h ;~ 2331:24DD
cs=0x2331;eip=0x0024e0; 	X(PUSH(ax));	// 81546 push    ax ;~ 2331:24E0
cs=0x2331;eip=0x0024e1; 	T(MOV(ax, 0x0DF));	// 81547 mov     ax, 0DFh ; 'ﬂ' ;~ 2331:24E1
cs=0x2331;eip=0x0024e4; 	X(PUSH(ax));	// 81548 push    ax ;~ 2331:24E4
cs=0x2331;eip=0x0024e5; 	T(MOV(ax, 0x20));	// 81549 mov     ax, 20h ; ' ' ;~ 2331:24E5
cs=0x2331;eip=0x0024e8; 	X(PUSH(ax));	// 81550 push    ax ;~ 2331:24E8
cs=0x2331;eip=0x0024e9; 	T(MOV(ax, 0x81));	// 81551 mov     ax, 81h ; 'Å' ;~ 2331:24E9
cs=0x2331;eip=0x0024ec; 	X(PUSH(ax));	// 81552 push    ax ;~ 2331:24EC
cs=0x2331;eip=0x0024ed; 	R(CALL(sub_33056,0));	// 81553 call    sub_33056 ;~ 2331:24ED
cs=0x2331;eip=0x0024f0; 	X(PUSH(ax));	// 81554 push    ax ;~ 2331:24F0
cs=0x2331;eip=0x0024f1; 	R(CALLF(sub_30ffa,0));	// 81555 call    sub_30FFA ;~ 2331:24F1
cs=0x2331;eip=0x0024f6; 	T(ADD(sp, 8));	// 81556 add     sp, 8 ;~ 2331:24F6
cs=0x2331;eip=0x0024f9; 	T(MOV(si, 0x65));	// 81557 mov     si, 65h ; 'e' ;~ 2331:24F9
cs=0x2331;eip=0x0024fc; 	T(MOV(di, 0x88));	// 81558 mov     di, 88h ; 'à' ;~ 2331:24FC
loc_33def:
	// 9642 
cs=0x2331;eip=0x0024ff; 	X(PUSH(si));	// 81561 push    si ;~ 2331:24FF
cs=0x2331;eip=0x002500; 	R(CALL(sub_33056,0));	// 81562 call    sub_33056 ;~ 2331:2500
cs=0x2331;eip=0x002503; 	X(PUSH(ax));	// 81563 push    ax ;~ 2331:2503
cs=0x2331;eip=0x002504; 	T(MOV(ax, 0x20));	// 81564 mov     ax, 20h ; ' ' ;~ 2331:2504
cs=0x2331;eip=0x002507; 	X(PUSH(ax));	// 81565 push    ax ;~ 2331:2507
cs=0x2331;eip=0x002508; 	X(PUSH(di));	// 81566 push    di ;~ 2331:2508
cs=0x2331;eip=0x002509; 	R(CALLF(sub_2dce4,0));	// 81567 call    sub_2DCE4 ;~ 2331:2509
cs=0x2331;eip=0x00250e; 	T(ADD(di, 6));	// 81568 add     di, 6 ;~ 2331:250E
cs=0x2331;eip=0x002511; 	T(INC(si));	// 81569 inc     si ;~ 2331:2511
cs=0x2331;eip=0x002512; 	T(CMP(si, 0x6B));	// 81570 cmp     si, 6Bh ; 'k' ;~ 2331:2512
cs=0x2331;eip=0x002515; 	R(JLE(loc_33def));	// 81571 jle     short loc_33DEF ;~ 2331:2515
cs=0x2331;eip=0x002517; 	R(CALL(sub_3318a,0));	// 81572 call    sub_3318A ;~ 2331:2517
cs=0x2331;eip=0x00251a; 	T(CMP(unk_56eb2, 0));	// 81573 cmp     byte ptr unk_56EB2, 0 ;~ 2331:251A
cs=0x2331;eip=0x00251f; 	R(JZ(loc_33e70));	// 81574 jz      short loc_33E70 ;~ 2331:251F
cs=0x2331;eip=0x002521; 	X(MOV(*(dw*)((&unk_47bde)), 0x0FF00));	// 81575 mov     word ptr unk_47BDE, 0FF00h ;~ 2331:2521
cs=0x2331;eip=0x002527; 	X(MOV(unk_56885, 0));	// 81576 mov     byte ptr unk_56885, 0 ;~ 2331:2527
cs=0x2331;eip=0x00252c; 	T(MOV(ax, 0x83));	// 81577 mov     ax, 83h ; 'É' ;~ 2331:252C
cs=0x2331;eip=0x00252f; 	X(PUSH(ax));	// 81578 push    ax ;~ 2331:252F
cs=0x2331;eip=0x002530; 	R(CALL(sub_33056,0));	// 81579 call    sub_33056 ;~ 2331:2530
cs=0x2331;eip=0x002533; 	X(PUSH(ds));	// 81580 push    ds ;~ 2331:2533
cs=0x2331;eip=0x002534; 	X(PUSH(ax));	// 81581 push    ax ;~ 2331:2534
cs=0x2331;eip=0x002535; 	T(MOV(ax, 0x3D));	// 81582 mov     ax, 3Dh ; '=' ;~ 2331:2535
cs=0x2331;eip=0x002538; 	X(PUSH(ax));	// 81583 push    ax ;~ 2331:2538
cs=0x2331;eip=0x002539; 	R(CALL(sub_33f01,0));	// 81584 call    sub_33F01 ;~ 2331:2539
cs=0x2331;eip=0x00253c; 	R(CALL(sub_33161,0));	// 81585 call    sub_33161 ;~ 2331:253C
cs=0x2331;eip=0x00253f; 	T(MOV(ax, 0x0F503));	// 81586 mov     ax, 0F503h ;~ 2331:253F
cs=0x2331;eip=0x002542; 	X(PUSH(ax));	// 81587 push    ax ;~ 2331:2542
cs=0x2331;eip=0x002543; 	T(MOV(ax, 0x20));	// 81588 mov     ax, 20h ; ' ' ;~ 2331:2543
cs=0x2331;eip=0x002546; 	X(PUSH(ax));	// 81589 push    ax ;~ 2331:2546
cs=0x2331;eip=0x002547; 	T(MOV(ax, 0x58));	// 81590 mov     ax, 58h ; 'X' ;~ 2331:2547
cs=0x2331;eip=0x00254a; 	X(PUSH(ax));	// 81591 push    ax ;~ 2331:254A
cs=0x2331;eip=0x00254b; 	R(CALLF(sub_2dce4,0));	// 81592 call    sub_2DCE4 ;~ 2331:254B
cs=0x2331;eip=0x002550; 	T(MOV(ax, 0x20));	// 81593 mov     ax, 20h ; ' ' ;~ 2331:2550
cs=0x2331;eip=0x002553; 	X(PUSH(ax));	// 81594 push    ax ;~ 2331:2553
cs=0x2331;eip=0x002554; 	T(MOV(ax, 0x0DF));	// 81595 mov     ax, 0DFh ; 'ﬂ' ;~ 2331:2554
cs=0x2331;eip=0x002557; 	X(PUSH(ax));	// 81596 push    ax ;~ 2331:2557
cs=0x2331;eip=0x002558; 	T(MOV(ax, 0x61));	// 81597 mov     ax, 61h ; 'a' ;~ 2331:2558
cs=0x2331;eip=0x00255b; 	X(PUSH(ax));	// 81598 push    ax ;~ 2331:255B
cs=0x2331;eip=0x00255c; 	T(MOV(ax, 0x0FF00));	// 81599 mov     ax, 0FF00h ;~ 2331:255C
cs=0x2331;eip=0x00255f; 	X(PUSH(ax));	// 81600 push    ax ;~ 2331:255F
cs=0x2331;eip=0x002560; 	R(CALLF(sub_203c2,0));	// 81601 call    sub_203C2 ;~ 2331:2560
cs=0x2331;eip=0x002565; 	X(PUSH(*(dw*)((&unk_5651c))));	// 81602 push    word ptr unk_5651C ;~ 2331:2565
cs=0x2331;eip=0x002569; 	X(PUSH(word_5651a));	// 81603 push    word_5651A ;~ 2331:2569
cs=0x2331;eip=0x00256d; 	R(CALLF(sub_3174e,0));	// 81604 call    sub_3174E ;~ 2331:256D
cs=0x2331;eip=0x002572; 	R(CALL(sub_33248,0));	// 81605 call    sub_33248 ;~ 2331:2572
cs=0x2331;eip=0x002575; 	T(CMP(ax, 0x1B));	// 81606 cmp     ax, 1Bh ;~ 2331:2575
cs=0x2331;eip=0x002578; 	R(JZ(loc_33e70));	// 81607 jz      short loc_33E70 ;~ 2331:2578
cs=0x2331;eip=0x00257a; 	T(MOV(ax, 1));	// 81608 mov     ax, 1 ;~ 2331:257A
cs=0x2331;eip=0x00257d; 	R(JMP(loc_33efb));	// 81609 jmp     loc_33EFB ;~ 2331:257D
loc_33e70:
	// 9643 
cs=0x2331;eip=0x002580; 	R(CALLF(sub_3d981,0));	// 81614 call    sub_3D981 ;~ 2331:2580
cs=0x2331;eip=0x002585; 	T(MOV(ax, 0x20));	// 81615 mov     ax, 20h ; ' ' ;~ 2331:2585
cs=0x2331;eip=0x002588; 	X(PUSH(ax));	// 81616 push    ax ;~ 2331:2588
cs=0x2331;eip=0x002589; 	T(MOV(ax, 0x3D));	// 81617 mov     ax, 3Dh ; '=' ;~ 2331:2589
cs=0x2331;eip=0x00258c; 	X(PUSH(ax));	// 81618 push    ax ;~ 2331:258C
cs=0x2331;eip=0x00258d; 	T(MOV(ax, 0x0C0));	// 81619 mov     ax, 0C0h ; '¿' ;~ 2331:258D
cs=0x2331;eip=0x002590; 	X(PUSH(ax));	// 81620 push    ax ;~ 2331:2590
cs=0x2331;eip=0x002591; 	T(MOV(ax, 0x1E));	// 81621 mov     ax, 1Eh ;~ 2331:2591
cs=0x2331;eip=0x002594; 	X(PUSH(ax));	// 81622 push    ax ;~ 2331:2594
cs=0x2331;eip=0x002595; 	T(MOV(ax, 0x0FF0F));	// 81623 mov     ax, 0FF0Fh ;~ 2331:2595
cs=0x2331;eip=0x002598; 	X(PUSH(ax));	// 81624 push    ax ;~ 2331:2598
cs=0x2331;eip=0x002599; 	R(CALLF(sub_233c4,0));	// 81625 call    sub_233C4 ;~ 2331:2599
cs=0x2331;eip=0x00259e; 	X(MOV(*(dw*)((&unk_47bde)), 0x0FF00));	// 81626 mov     word ptr unk_47BDE, 0FF00h ;~ 2331:259E
cs=0x2331;eip=0x0025a4; 	X(MOV(unk_56885, 0));	// 81627 mov     byte ptr unk_56885, 0 ;~ 2331:25A4
cs=0x2331;eip=0x0025a9; 	T(MOV(ax, 0x82));	// 81628 mov     ax, 82h ; 'Ç' ;~ 2331:25A9
cs=0x2331;eip=0x0025ac; 	X(PUSH(ax));	// 81629 push    ax ;~ 2331:25AC
cs=0x2331;eip=0x0025ad; 	R(CALL(sub_33056,0));	// 81630 call    sub_33056 ;~ 2331:25AD
cs=0x2331;eip=0x0025b0; 	X(PUSH(ds));	// 81631 push    ds ;~ 2331:25B0
cs=0x2331;eip=0x0025b1; 	X(PUSH(ax));	// 81632 push    ax ;~ 2331:25B1
cs=0x2331;eip=0x0025b2; 	T(MOV(ax, 0x3D));	// 81633 mov     ax, 3Dh ; '=' ;~ 2331:25B2
cs=0x2331;eip=0x0025b5; 	X(PUSH(ax));	// 81634 push    ax ;~ 2331:25B5
cs=0x2331;eip=0x0025b6; 	R(CALL(sub_33f01,0));	// 81635 call    sub_33F01 ;~ 2331:25B6
cs=0x2331;eip=0x0025b9; 	T(MOV(ax, 0x84));	// 81636 mov     ax, 84h ; 'Ñ' ;~ 2331:25B9
cs=0x2331;eip=0x0025bc; 	X(PUSH(ax));	// 81637 push    ax ;~ 2331:25BC
cs=0x2331;eip=0x0025bd; 	R(CALL(sub_33056,0));	// 81638 call    sub_33056 ;~ 2331:25BD
cs=0x2331;eip=0x0025c0; 	X(PUSH(ax));	// 81639 push    ax ;~ 2331:25C0
cs=0x2331;eip=0x0025c1; 	R(CALL(sub_33198,0));	// 81640 call    sub_33198 ;~ 2331:25C1
cs=0x2331;eip=0x0025c4; 	X(PUSH(*(dw*)((&unk_5651c))));	// 81641 push    word ptr unk_5651C ;~ 2331:25C4
cs=0x2331;eip=0x0025c8; 	X(PUSH(word_5651a));	// 81642 push    word_5651A ;~ 2331:25C8
cs=0x2331;eip=0x0025cc; 	R(CALLF(sub_3174e,0));	// 81643 call    sub_3174E ;~ 2331:25CC
cs=0x2331;eip=0x0025d1; 	T(MOV(ax, 0x0F503));	// 81644 mov     ax, 0F503h ;~ 2331:25D1
cs=0x2331;eip=0x0025d4; 	X(PUSH(ax));	// 81645 push    ax ;~ 2331:25D4
cs=0x2331;eip=0x0025d5; 	T(MOV(ax, 0x58));	// 81646 mov     ax, 58h ; 'X' ;~ 2331:25D5
cs=0x2331;eip=0x0025d8; 	X(PUSH(ax));	// 81647 push    ax ;~ 2331:25D8
cs=0x2331;eip=0x0025d9; 	T(SUB(ax, ax));	// 81648 sub     ax, ax ;~ 2331:25D9
cs=0x2331;eip=0x0025db; 	X(PUSH(ax));	// 81649 push    ax ;~ 2331:25DB
cs=0x2331;eip=0x0025dc; 	R(CALL(sub_34078,0));	// 81650 call    sub_34078 ;~ 2331:25DC
cs=0x2331;eip=0x0025df; 	T(CBW);	// 81651 cbw ;~ 2331:25DF
cs=0x2331;eip=0x0025e0; 	T(MOV(si, ax));	// 81652 mov     si, ax ;~ 2331:25E0
cs=0x2331;eip=0x0025e2; 	T(OR(si, si));	// 81653 or      si, si ;~ 2331:25E2
cs=0x2331;eip=0x0025e4; 	R(JZ(loc_33edb));	// 81654 jz      short loc_33EDB ;~ 2331:25E4
cs=0x2331;eip=0x0025e6; 	X(MOV(unk_56eb2, 1));	// 81655 mov     byte ptr unk_56EB2, 1 ;~ 2331:25E6
loc_33edb:
	// 9644 
cs=0x2331;eip=0x0025eb; 	T(CMP(unk_56eb3, 0));	// 81658 cmp     byte ptr unk_56EB3, 0 ;~ 2331:25EB
cs=0x2331;eip=0x0025f0; 	R(JNZ(loc_33ef9));	// 81659 jnz     short loc_33EF9 ;~ 2331:25F0
cs=0x2331;eip=0x0025f2; 	T(MOV(cx, 0x0B));	// 81660 mov     cx, 0Bh ;~ 2331:25F2
cs=0x2331;eip=0x0025f5; 	X(PUSH(si));	// 81661 push    si ;~ 2331:25F5
cs=0x2331;eip=0x0025f6; 	T(MOV(di, 0x0F503));	// 81662 mov     di, 0F503h ;~ 2331:25F6
cs=0x2331;eip=0x0025f9; 	T(MOV(si, 0x28B4));	// 81663 mov     si, 28B4h ;~ 2331:25F9
cs=0x2331;eip=0x0025fc; 	T(MOV(ax, ds));	// 81664 mov     ax, ds ;~ 2331:25FC
cs=0x2331;eip=0x0025fe; 	T(MOV(es, ax));	// 81665 mov     es, ax ;~ 2331:25FE
cs=0x2331;eip=0x002600; 	T(SHR(cx, 1));	// 81667 shr     cx, 1 ;~ 2331:2600
	// 81668 repne movsw ;~ 2331:2602
cs=0x2331;eip=0x002602; 	X(	REPNE MOVSW);	// 81668 repne movsw ;~ 2331:2602
cs=0x2331;eip=0x002604; 	T(ADC(cx, cx));	// 81669 adc     cx, cx ;~ 2331:2604
	// 81670 repne movsb ;~ 2331:2606
cs=0x2331;eip=0x002606; 	X(	REPNE MOVSB);	// 81670 repne movsb ;~ 2331:2606
cs=0x2331;eip=0x002608; 	X(POP(si));	// 81671 pop     si ;~ 2331:2608
loc_33ef9:
	// 9645 
cs=0x2331;eip=0x002609; 	T(MOV(ax, si));	// 81674 mov     ax, si ;~ 2331:2609
loc_33efb:
	// 9646 
cs=0x2331;eip=0x00260b; 	X(POP(si));	// 81677 pop     si ;~ 2331:260B
cs=0x2331;eip=0x00260c; 	X(POP(di));	// 81678 pop     di ;~ 2331:260C
cs=0x2331;eip=0x00260d; 	T(MOV(sp, bp));	// 81679 mov     sp, bp ;~ 2331:260D
cs=0x2331;eip=0x00260f; 	X(POP(bp));	// 81680 pop     bp ;~ 2331:260F
cs=0x2331;eip=0x002610; 	R(RETF(0));	// 81681 retf ;~ 2331:2610
sub_33f01:
	// 81689 
#undef var_10
#define var_10 -0x10
	// 81692 var_10          = word ptr -10h ;~ 2331:2611
#undef var_e
#define var_e -0x0E
	// 81693 var_E           = dword ptr -0Eh ;~ 2331:2611
#undef var_a
#define var_a -0x0A
	// 81694 var_A           = byte ptr -0Ah ;~ 2331:2611
#undef var_8
#define var_8 -8
	// 81695 var_8           = word ptr -8 ;~ 2331:2611
#undef var_6
#define var_6 -6
	// 81696 var_6           = dword ptr -6 ;~ 2331:2611
#undef var_2
#define var_2 -2
	// 81697 var_2           = word ptr -2 ;~ 2331:2611
#undef arg_0
#define arg_0 4
	// 81698 arg_0           = word ptr  4 ;~ 2331:2611
#undef arg_2
#define arg_2 6
	// 81699 arg_2           = word ptr  6 ;~ 2331:2611
#undef arg_4
#define arg_4 8
	// 81700 arg_4           = word ptr  8 ;~ 2331:2611
cs=0x2331;eip=0x002611; 	X(PUSH(bp));	// 81702 push    bp ;~ 2331:2611
cs=0x2331;eip=0x002612; 	T(MOV(bp, sp));	// 81703 mov     bp, sp ;~ 2331:2612
cs=0x2331;eip=0x002614; 	T(SUB(sp, 0x12));	// 81704 sub     sp, 12h ;~ 2331:2614
cs=0x2331;eip=0x002617; 	X(PUSH(di));	// 81705 push    di ;~ 2331:2617
cs=0x2331;eip=0x002618; 	X(PUSH(si));	// 81706 push    si ;~ 2331:2618
cs=0x2331;eip=0x002619; 	R(CALL(sub_3318a,0));	// 81707 call    sub_3318A ;~ 2331:2619
cs=0x2331;eip=0x00261c; 	X(MOV(*(dw*)((&unk_47bde)), 0x0FF00));	// 81708 mov     word ptr unk_47BDE, 0FF00h ;~ 2331:261C
cs=0x2331;eip=0x002622; 	X(MOV(unk_56885, 0));	// 81709 mov     byte ptr unk_56885, 0 ;~ 2331:2622
cs=0x2331;eip=0x002627; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 81710 mov     ax, [bp+arg_2] ;~ 2331:2627
cs=0x2331;eip=0x00262a; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_4))));	// 81711 mov     dx, [bp+arg_4] ;~ 2331:262A
cs=0x2331;eip=0x00262d; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e))), ax));	// 81712 mov     word ptr [bp+var_E], ax ;~ 2331:262D
cs=0x2331;eip=0x002630; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e +2))), dx));	// 81713 mov     word ptr [bp+var_E+2], dx ;~ 2331:2630
cs=0x2331;eip=0x002633; 	X(MOV(*(raddr(ss,bp+var_a)), 0));	// 81714 mov     [bp+var_A], 0 ;~ 2331:2633
loc_33f27:
	// 9647 
cs=0x2331;eip=0x002637; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_e)))));	// 81717 mov     ax, word ptr [bp+var_E] ;~ 2331:2637
cs=0x2331;eip=0x00263a; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_e +2)))));	// 81718 mov     dx, word ptr [bp+var_E+2] ;~ 2331:263A
cs=0x2331;eip=0x00263d; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6))), ax));	// 81719 mov     word ptr [bp+var_6], ax ;~ 2331:263D
cs=0x2331;eip=0x002640; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6+2))), dx));	// 81720 mov     word ptr [bp+var_6+2], dx ;~ 2331:2640
cs=0x2331;eip=0x002643; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 81721 mov     [bp+var_2], 0 ;~ 2331:2643
cs=0x2331;eip=0x002648; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_10))));	// 81722 mov     di, [bp+var_10] ;~ 2331:2648
loc_33f3b:
	// 9648 
cs=0x2331;eip=0x00264b; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_e)))));	// 81725 mov     ax, word ptr [bp+var_E] ;~ 2331:264B
cs=0x2331;eip=0x00264e; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_e +2)))));	// 81726 mov     dx, word ptr [bp+var_E+2] ;~ 2331:264E
cs=0x2331;eip=0x002651; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+var_6))), ax));	// 81727 cmp     word ptr [bp+var_6], ax ;~ 2331:2651
cs=0x2331;eip=0x002654; 	R(JBE(loc_33f58));	// 81728 jbe     short loc_33F58 ;~ 2331:2654
cs=0x2331;eip=0x002656; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_6))));	// 81729 les     bx, [bp+var_6] ;~ 2331:2656
cs=0x2331;eip=0x002659; 	T(MOV(al, *(raddr(es,bx-1))));	// 81731 mov     al, es:[bx-1] ;~ 2331:2659
cs=0x2331;eip=0x00265d; 	T(SUB(ah, ah));	// 81732 sub     ah, ah ;~ 2331:265D
cs=0x2331;eip=0x00265f; 	X(PUSH(ax));	// 81733 push    ax ;~ 2331:265F
cs=0x2331;eip=0x002660; 	R(CALLF(sub_2dc86,0));	// 81734 call    sub_2DC86 ;~ 2331:2660
cs=0x2331;eip=0x002665; 	X(ADD(*(dw*)(raddr(ss,bp+var_2)), ax));	// 81735 add     [bp+var_2], ax ;~ 2331:2665
loc_33f58:
	// 9649 
cs=0x2331;eip=0x002668; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x0BF));	// 81738 cmp     [bp+var_2], 0BFh ; 'ø' ;~ 2331:2668
cs=0x2331;eip=0x00266d; 	R(JL(loc_33fc5));	// 81739 jl      short loc_33FC5 ;~ 2331:266D
cs=0x2331;eip=0x00266f; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ds));	// 81740 mov     [bp+var_10], ds ;~ 2331:266F
cs=0x2331;eip=0x002672; 	T(LDS(si, *(dd*)(raddr(ss,bp+var_6))));	// 81741 lds     si, [bp+var_6] ;~ 2331:2672
cs=0x2331;eip=0x002675; 	R(JMP(loc_33f6e));	// 81742 jmp     short loc_33F6E ;~ 2331:2675
loc_33f67:
	// 9650 
cs=0x2331;eip=0x002677; 	T(CMP(*(raddr(ds,si-1)), 0x20));	// 81746 cmp     byte ptr [si-1], 20h ; ' ' ;~ 2331:2677
cs=0x2331;eip=0x00267b; 	R(JZ(loc_33f75));	// 81747 jz      short loc_33F75 ;~ 2331:267B
cs=0x2331;eip=0x00267d; 	T(DEC(si));	// 81748 dec     si ;~ 2331:267D
loc_33f6e:
	// 9651 
cs=0x2331;eip=0x00267e; 	T(MOV(ax, ds));	// 81751 mov     ax, ds ;~ 2331:267E
cs=0x2331;eip=0x002680; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+var_e))), si));	// 81752 cmp     word ptr [bp+var_E], si ;~ 2331:2680
cs=0x2331;eip=0x002683; 	R(JC(loc_33f67));	// 81753 jb      short loc_33F67 ;~ 2331:2683
loc_33f75:
	// 9652 
cs=0x2331;eip=0x002685; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6))), si));	// 81756 mov     word ptr [bp+var_6], si ;~ 2331:2685
cs=0x2331;eip=0x002688; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6+2))), ds));	// 81757 mov     word ptr [bp+var_6+2], ds ;~ 2331:2688
cs=0x2331;eip=0x00268b; 	T(MOV(ds, *(dw*)(raddr(ss,bp+var_10))));	// 81758 mov     ds, [bp+var_10] ;~ 2331:268B
loc_33f7e:
	// 9653 
cs=0x2331;eip=0x00268e; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0x20));	// 81762 mov     [bp+var_8], 20h ; ' ' ;~ 2331:268E
cs=0x2331;eip=0x002693; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_6)))));	// 81763 mov     ax, word ptr [bp+var_6] ;~ 2331:2693
cs=0x2331;eip=0x002696; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_6+2)))));	// 81764 mov     dx, word ptr [bp+var_6+2] ;~ 2331:2696
cs=0x2331;eip=0x002699; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+var_e))), ax));	// 81765 cmp     word ptr [bp+var_E], ax ;~ 2331:2699
cs=0x2331;eip=0x00269c; 	R(JNC(loc_33fe3));	// 81766 jnb     short loc_33FE3 ;~ 2331:269C
cs=0x2331;eip=0x00269e; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_8))));	// 81767 mov     di, [bp+var_8] ;~ 2331:269E
loc_33f91:
	// 9654 
cs=0x2331;eip=0x0026a1; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 81771 les     bx, [bp+var_E] ;~ 2331:26A1
cs=0x2331;eip=0x0026a4; 	T(MOV(al, *(raddr(es,bx))));	// 81772 mov     al, es:[bx] ;~ 2331:26A4
cs=0x2331;eip=0x0026a7; 	T(SUB(ah, ah));	// 81773 sub     ah, ah ;~ 2331:26A7
cs=0x2331;eip=0x0026a9; 	T(MOV(si, ax));	// 81774 mov     si, ax ;~ 2331:26A9
cs=0x2331;eip=0x0026ab; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 81775 push    [bp+arg_0] ;~ 2331:26AB
cs=0x2331;eip=0x0026ae; 	X(PUSH(di));	// 81776 push    di ;~ 2331:26AE
cs=0x2331;eip=0x0026af; 	X(PUSH(si));	// 81777 push    si ;~ 2331:26AF
cs=0x2331;eip=0x0026b0; 	R(CALLF(sub_2e4b0,0));	// 81778 call    sub_2E4B0 ;~ 2331:26B0
cs=0x2331;eip=0x0026b5; 	T(ADD(sp, 6));	// 81779 add     sp, 6 ;~ 2331:26B5
cs=0x2331;eip=0x0026b8; 	X(PUSH(si));	// 81780 push    si ;~ 2331:26B8
cs=0x2331;eip=0x0026b9; 	R(CALLF(sub_2dc86,0));	// 81781 call    sub_2DC86 ;~ 2331:26B9
cs=0x2331;eip=0x0026be; 	T(ADD(di, ax));	// 81782 add     di, ax ;~ 2331:26BE
cs=0x2331;eip=0x0026c0; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_e)))));	// 81783 inc     word ptr [bp+var_E] ;~ 2331:26C0
cs=0x2331;eip=0x0026c3; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_6)))));	// 81784 mov     ax, word ptr [bp+var_6] ;~ 2331:26C3
cs=0x2331;eip=0x0026c6; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_6+2)))));	// 81785 mov     dx, word ptr [bp+var_6+2] ;~ 2331:26C6
cs=0x2331;eip=0x0026c9; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+var_e))), ax));	// 81786 cmp     word ptr [bp+var_E], ax ;~ 2331:26C9
cs=0x2331;eip=0x0026cc; 	R(JNZ(loc_33f91));	// 81787 jnz     short loc_33F91 ;~ 2331:26CC
cs=0x2331;eip=0x0026ce; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+var_e +2))), dx));	// 81788 cmp     word ptr [bp+var_E+2], dx ;~ 2331:26CE
cs=0x2331;eip=0x0026d1; 	R(JZ(loc_33fe0));	// 81789 jz      short loc_33FE0 ;~ 2331:26D1
cs=0x2331;eip=0x0026d3; 	R(JMP(loc_33f91));	// 81790 jmp     short loc_33F91 ;~ 2331:26D3
loc_33fc5:
	// 9655 
cs=0x2331;eip=0x0026d5; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_6))));	// 81794 les     bx, [bp+var_6] ;~ 2331:26D5
cs=0x2331;eip=0x0026d8; 	T(CMP(*(raddr(es,bx)), 0x0A));	// 81795 cmp     byte ptr es:[bx], 0Ah ;~ 2331:26D8
cs=0x2331;eip=0x0026dc; 	R(JZ(loc_33f7e));	// 81796 jz      short loc_33F7E ;~ 2331:26DC
cs=0x2331;eip=0x0026de; 	T(CMP(*(raddr(es,bx)), 0));	// 81797 cmp     byte ptr es:[bx], 0 ;~ 2331:26DE
cs=0x2331;eip=0x0026e2; 	R(JNZ(loc_33fda));	// 81798 jnz     short loc_33FDA ;~ 2331:26E2
cs=0x2331;eip=0x0026e4; 	X(MOV(*(raddr(ss,bp+var_a)), 1));	// 81799 mov     [bp+var_A], 1 ;~ 2331:26E4
cs=0x2331;eip=0x0026e8; 	R(JMP(loc_33f7e));	// 81800 jmp     short loc_33F7E ;~ 2331:26E8
loc_33fda:
	// 9656 
cs=0x2331;eip=0x0026ea; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_6)))));	// 81804 inc     word ptr [bp+var_6] ;~ 2331:26EA
cs=0x2331;eip=0x0026ed; 	R(JMP(loc_33f3b));	// 81805 jmp     loc_33F3B ;~ 2331:26ED
loc_33fe0:
	// 9657 
cs=0x2331;eip=0x0026f0; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), di));	// 81809 mov     [bp+var_8], di ;~ 2331:26F0
loc_33fe3:
	// 9658 
cs=0x2331;eip=0x0026f3; 	X(ADD(*(dw*)(raddr(ss,bp+arg_0)), 0x0A));	// 81812 add     [bp+arg_0], 0Ah ;~ 2331:26F3
cs=0x2331;eip=0x0026f7; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_6)))));	// 81813 mov     ax, word ptr [bp+var_6] ;~ 2331:26F7
cs=0x2331;eip=0x0026fa; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_6+2)))));	// 81814 mov     dx, word ptr [bp+var_6+2] ;~ 2331:26FA
cs=0x2331;eip=0x0026fd; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e))), ax));	// 81815 mov     word ptr [bp+var_E], ax ;~ 2331:26FD
cs=0x2331;eip=0x002700; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e +2))), dx));	// 81816 mov     word ptr [bp+var_E+2], dx ;~ 2331:2700
cs=0x2331;eip=0x002703; 	T(LES(di, *(dd*)(raddr(ss,bp+var_e))));	// 81817 les     di, [bp+var_E] ;~ 2331:2703
cs=0x2331;eip=0x002706; 	R(JMP(loc_33ff9));	// 81818 jmp     short loc_33FF9 ;~ 2331:2706
loc_33ff8:
	// 9659 
cs=0x2331;eip=0x002708; 	T(INC(di));	// 81822 inc     di ;~ 2331:2708
loc_33ff9:
	// 9660 
cs=0x2331;eip=0x002709; 	T(CMP(*(raddr(es,di)), 0x20));	// 81825 cmp     byte ptr es:[di], 20h ; ' ' ;~ 2331:2709
cs=0x2331;eip=0x00270d; 	R(JZ(loc_33ff8));	// 81826 jz      short loc_33FF8 ;~ 2331:270D
cs=0x2331;eip=0x00270f; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e))), di));	// 81827 mov     word ptr [bp+var_E], di ;~ 2331:270F
cs=0x2331;eip=0x002712; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e +2))), es));	// 81828 mov     word ptr [bp+var_E+2], es ;~ 2331:2712
cs=0x2331;eip=0x002715; 	T(MOV(bx, di));	// 81829 mov     bx, di ;~ 2331:2715
cs=0x2331;eip=0x002717; 	T(CMP(*(raddr(es,bx)), 0x0A));	// 81830 cmp     byte ptr es:[bx], 0Ah ;~ 2331:2717
cs=0x2331;eip=0x00271b; 	R(JNZ(loc_34010));	// 81831 jnz     short loc_34010 ;~ 2331:271B
cs=0x2331;eip=0x00271d; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_e)))));	// 81832 inc     word ptr [bp+var_E] ;~ 2331:271D
loc_34010:
	// 9661 
cs=0x2331;eip=0x002720; 	T(CMP(*(raddr(ss,bp+var_a)), 0));	// 81835 cmp     [bp+var_A], 0 ;~ 2331:2720
cs=0x2331;eip=0x002724; 	R(JNZ(loc_34019));	// 81836 jnz     short loc_34019 ;~ 2331:2724
cs=0x2331;eip=0x002726; 	R(JMP(loc_33f27));	// 81837 jmp     loc_33F27 ;~ 2331:2726
loc_34019:
	// 9662 
cs=0x2331;eip=0x002729; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 81841 mov     ax, [bp+arg_0] ;~ 2331:2729
cs=0x2331;eip=0x00272c; 	X(POP(si));	// 81842 pop     si ;~ 2331:272C
cs=0x2331;eip=0x00272d; 	X(POP(di));	// 81843 pop     di ;~ 2331:272D
cs=0x2331;eip=0x00272e; 	T(MOV(sp, bp));	// 81844 mov     sp, bp ;~ 2331:272E
cs=0x2331;eip=0x002730; 	X(POP(bp));	// 81845 pop     bp ;~ 2331:2730
cs=0x2331;eip=0x002731; 	R(RETN(6));	// 81846 retn    6 ;~ 2331:2731
sub_34024:
	// 81854 
#undef arg_0
#define arg_0 4
	// 81857 arg_0           = byte ptr  4 ;~ 2331:2734
#undef arg_2
#define arg_2 6
	// 81858 arg_2           = word ptr  6 ;~ 2331:2734
cs=0x2331;eip=0x002734; 	X(PUSH(bp));	// 81860 push    bp ;~ 2331:2734
cs=0x2331;eip=0x002735; 	T(MOV(bp, sp));	// 81861 mov     bp, sp ;~ 2331:2735
cs=0x2331;eip=0x002737; 	X(ADD(*(dw*)(raddr(ss,bp+arg_2)), 0x20));	// 81862 add     [bp+arg_2], 20h ; ' ' ;~ 2331:2737
cs=0x2331;eip=0x00273b; 	T(CMP(*(raddr(ss,bp+arg_0)), 0));	// 81863 cmp     [bp+arg_0], 0 ;~ 2331:273B
cs=0x2331;eip=0x00273f; 	R(JZ(loc_34059));	// 81864 jz      short loc_34059 ;~ 2331:273F
cs=0x2331;eip=0x002741; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 81865 push    [bp+arg_2] ;~ 2331:2741
cs=0x2331;eip=0x002744; 	X(PUSH(*(dw*)((&unk_544d2))));	// 81866 push    word ptr unk_544D2 ;~ 2331:2744
cs=0x2331;eip=0x002748; 	T(MOV(ax, 8));	// 81867 mov     ax, 8 ;~ 2331:2748
cs=0x2331;eip=0x00274b; 	X(PUSH(ax));	// 81868 push    ax ;~ 2331:274B
cs=0x2331;eip=0x00274c; 	T(MOV(ax, 9));	// 81869 mov     ax, 9 ;~ 2331:274C
cs=0x2331;eip=0x00274f; 	X(PUSH(ax));	// 81870 push    ax ;~ 2331:274F
cs=0x2331;eip=0x002750; 	T(CMP(*(dw*)((&byte_47b2e)), 0));	// 81871 cmp     word ptr byte_47B2E, 0 ;~ 2331:2750
cs=0x2331;eip=0x002755; 	R(JNZ(loc_3404c));	// 81872 jnz     short loc_3404C ;~ 2331:2755
cs=0x2331;eip=0x002757; 	T(MOV(ax, 0x0FF0D));	// 81873 mov     ax, 0FF0Dh ;~ 2331:2757
cs=0x2331;eip=0x00275a; 	R(JMP(loc_3404f));	// 81874 jmp     short loc_3404F ;~ 2331:275A
loc_3404c:
	// 9663 
cs=0x2331;eip=0x00275c; 	T(MOV(ax, 0x0FF07));	// 81878 mov     ax, 0FF07h ;~ 2331:275C
loc_3404f:
	// 9664 
cs=0x2331;eip=0x00275f; 	X(PUSH(ax));	// 81881 push    ax ;~ 2331:275F
cs=0x2331;eip=0x002760; 	R(CALLF(sub_233c4,0));	// 81882 call    sub_233C4 ;~ 2331:2760
cs=0x2331;eip=0x002765; 	X(ADD(*(dw*)(raddr(ss,bp+arg_2)), 8));	// 81883 add     [bp+arg_2], 8 ;~ 2331:2765
loc_34059:
	// 9665 
cs=0x2331;eip=0x002769; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 81886 push    [bp+arg_2] ;~ 2331:2769
cs=0x2331;eip=0x00276c; 	X(PUSH(*(dw*)((&unk_544d2))));	// 81887 push    word ptr unk_544D2 ;~ 2331:276C
cs=0x2331;eip=0x002770; 	T(MOV(ax, 0x0E0));	// 81888 mov     ax, 0E0h ; '‡' ;~ 2331:2770
cs=0x2331;eip=0x002773; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 81889 sub     ax, [bp+arg_2] ;~ 2331:2773
cs=0x2331;eip=0x002776; 	X(PUSH(ax));	// 81890 push    ax ;~ 2331:2776
cs=0x2331;eip=0x002777; 	T(MOV(ax, 9));	// 81891 mov     ax, 9 ;~ 2331:2777
cs=0x2331;eip=0x00277a; 	X(PUSH(ax));	// 81892 push    ax ;~ 2331:277A
cs=0x2331;eip=0x00277b; 	T(MOV(ax, 0x0FF0F));	// 81893 mov     ax, 0FF0Fh ;~ 2331:277B
cs=0x2331;eip=0x00277e; 	X(PUSH(ax));	// 81894 push    ax ;~ 2331:277E
cs=0x2331;eip=0x00277f; 	R(CALLF(sub_233c4,0));	// 81895 call    sub_233C4 ;~ 2331:277F
cs=0x2331;eip=0x002784; 	X(POP(bp));	// 81896 pop     bp ;~ 2331:2784
cs=0x2331;eip=0x002785; 	R(RETN(4));	// 81897 retn    4 ;~ 2331:2785
sub_34078:
	// 81905 
#undef var_c
#define var_c -0x0C
	// 81908 var_C           = word ptr -0Ch ;~ 2331:2788
#undef var_a
#define var_a -0x0A
	// 81909 var_A           = word ptr -0Ah ;~ 2331:2788
#undef var_8
#define var_8 -8
	// 81910 var_8           = word ptr -8 ;~ 2331:2788
#undef var_6
#define var_6 -6
	// 81911 var_6           = word ptr -6 ;~ 2331:2788
#undef var_4
#define var_4 -4
	// 81912 var_4           = word ptr -4 ;~ 2331:2788
#undef var_2
#define var_2 -2
	// 81913 var_2           = word ptr -2 ;~ 2331:2788
#undef arg_0
#define arg_0 4
	// 81914 arg_0           = byte ptr  4 ;~ 2331:2788
#undef arg_2
#define arg_2 6
	// 81915 arg_2           = word ptr  6 ;~ 2331:2788
#undef arg_4
#define arg_4 8
	// 81916 arg_4           = word ptr  8 ;~ 2331:2788
cs=0x2331;eip=0x002788; 	X(PUSH(bp));	// 81918 push    bp ;~ 2331:2788
cs=0x2331;eip=0x002789; 	T(MOV(bp, sp));	// 81919 mov     bp, sp ;~ 2331:2789
cs=0x2331;eip=0x00278b; 	T(SUB(sp, 0x0C));	// 81920 sub     sp, 0Ch ;~ 2331:278B
cs=0x2331;eip=0x00278e; 	X(PUSH(di));	// 81921 push    di ;~ 2331:278E
cs=0x2331;eip=0x00278f; 	X(PUSH(si));	// 81922 push    si ;~ 2331:278F
cs=0x2331;eip=0x002790; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 81923 mov     si, [bp+arg_4] ;~ 2331:2790
cs=0x2331;eip=0x002793; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 81924 mov     ax, [bp+arg_2] ;~ 2331:2793
cs=0x2331;eip=0x002796; 	X(MOV(*(dw*)((&unk_544d2)), ax));	// 81925 mov     word ptr unk_544D2, ax ;~ 2331:2796
cs=0x2331;eip=0x002799; 	X(MOV(*(raddr(ds,si)), 0));	// 81926 mov     byte ptr [si], 0 ;~ 2331:2799
cs=0x2331;eip=0x00279c; 	T(MOV(ax, *(dw*)((&unk_5651c))));	// 81927 mov     ax, word ptr unk_5651C ;~ 2331:279C
cs=0x2331;eip=0x00279f; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 81928 mov     [bp+var_A], ax ;~ 2331:279F
cs=0x2331;eip=0x0027a2; 	X(PUSH(word_5651a));	// 81929 push    word_5651A ;~ 2331:27A2
cs=0x2331;eip=0x0027a6; 	R(CALLF(sub_202f1,0));	// 81930 call    sub_202F1 ;~ 2331:27A6
cs=0x2331;eip=0x0027ab; 	T(MOV(ax, 0x20));	// 81931 mov     ax, 20h ; ' ' ;~ 2331:27AB
cs=0x2331;eip=0x0027ae; 	X(PUSH(ax));	// 81932 push    ax ;~ 2331:27AE
cs=0x2331;eip=0x0027af; 	T(MOV(ax, 0x0DF));	// 81933 mov     ax, 0DFh ; 'ﬂ' ;~ 2331:27AF
cs=0x2331;eip=0x0027b2; 	X(PUSH(ax));	// 81934 push    ax ;~ 2331:27B2
cs=0x2331;eip=0x0027b3; 	T(MOV(ax, *(dw*)((&unk_544d2))));	// 81935 mov     ax, word ptr unk_544D2 ;~ 2331:27B3
cs=0x2331;eip=0x0027b6; 	T(ADD(ax, 9));	// 81936 add     ax, 9 ;~ 2331:27B6
cs=0x2331;eip=0x0027b9; 	X(PUSH(ax));	// 81937 push    ax ;~ 2331:27B9
cs=0x2331;eip=0x0027ba; 	T(MOV(ax, 0x0FF00));	// 81938 mov     ax, 0FF00h ;~ 2331:27BA
cs=0x2331;eip=0x0027bd; 	X(PUSH(ax));	// 81939 push    ax ;~ 2331:27BD
cs=0x2331;eip=0x0027be; 	R(CALLF(sub_203c2,0));	// 81940 call    sub_203C2 ;~ 2331:27BE
cs=0x2331;eip=0x0027c3; 	R(CALL(sub_3318a,0));	// 81941 call    sub_3318A ;~ 2331:27C3
cs=0x2331;eip=0x0027c6; 	R(CALL(sub_33161,0));	// 81942 call    sub_33161 ;~ 2331:27C6
cs=0x2331;eip=0x0027c9; 	T(SUB(ax, ax));	// 81943 sub     ax, ax ;~ 2331:27C9
cs=0x2331;eip=0x0027cb; 	X(PUSH(ax));	// 81944 push    ax ;~ 2331:27CB
cs=0x2331;eip=0x0027cc; 	T(MOV(ax, 1));	// 81945 mov     ax, 1 ;~ 2331:27CC
cs=0x2331;eip=0x0027cf; 	X(PUSH(ax));	// 81946 push    ax ;~ 2331:27CF
cs=0x2331;eip=0x0027d0; 	R(CALL(sub_34024,0));	// 81947 call    sub_34024 ;~ 2331:27D0
cs=0x2331;eip=0x0027d3; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_6))));	// 81948 mov     di, [bp+var_6] ;~ 2331:27D3
loc_340c6:
	// 9666 
cs=0x2331;eip=0x0027d6; 	R(CALL(sub_33248,0));	// 81952 call    sub_33248 ;~ 2331:27D6
cs=0x2331;eip=0x0027d9; 	T(MOV(di, ax));	// 81953 mov     di, ax ;~ 2331:27D9
cs=0x2331;eip=0x0027db; 	T(CMP(ax, 8));	// 81954 cmp     ax, 8 ;~ 2331:27DB
cs=0x2331;eip=0x0027de; 	R(JNZ(loc_340d3));	// 81955 jnz     short loc_340D3 ;~ 2331:27DE
cs=0x2331;eip=0x0027e0; 	R(JMP(loc_341bb));	// 81956 jmp     loc_341BB ;~ 2331:27E0
loc_340d3:
	// 9667 
cs=0x2331;eip=0x0027e3; 	T(CMP(ax, 0x0D));	// 81960 cmp     ax, 0Dh ;~ 2331:27E3
cs=0x2331;eip=0x0027e6; 	R(JNZ(loc_340db));	// 81961 jnz     short loc_340DB ;~ 2331:27E6
cs=0x2331;eip=0x0027e8; 	R(JMP(loc_34180));	// 81962 jmp     loc_34180 ;~ 2331:27E8
loc_340db:
	// 9668 
cs=0x2331;eip=0x0027eb; 	T(CMP(ax, 0x1B));	// 81966 cmp     ax, 1Bh ;~ 2331:27EB
cs=0x2331;eip=0x0027ee; 	R(JNZ(loc_340e3));	// 81967 jnz     short loc_340E3 ;~ 2331:27EE
cs=0x2331;eip=0x0027f0; 	R(JMP(loc_341a6));	// 81968 jmp     loc_341A6 ;~ 2331:27F0
loc_340e3:
	// 9669 
cs=0x2331;eip=0x0027f3; 	T(CMP(ax, 0x4B00));	// 81972 cmp     ax, 4B00h ;~ 2331:27F3
cs=0x2331;eip=0x0027f6; 	R(JNZ(loc_340eb));	// 81973 jnz     short loc_340EB ;~ 2331:27F6
cs=0x2331;eip=0x0027f8; 	R(JMP(loc_341bb));	// 81974 jmp     loc_341BB ;~ 2331:27F8
loc_340eb:
	// 9670 
cs=0x2331;eip=0x0027fb; 	T(CMP(*(raddr(ss,bp+arg_0)), 0));	// 81978 cmp     [bp+arg_0], 0 ;~ 2331:27FB
cs=0x2331;eip=0x0027ff; 	R(JZ(loc_340fd));	// 81979 jz      short loc_340FD ;~ 2331:27FF
cs=0x2331;eip=0x002801; 	T(TEST(*(raddr(ds,di-0x3D7B)), 4));	// 81980 test    byte ptr [di-3D7Bh], 4 ;~ 2331:2801
cs=0x2331;eip=0x002806; 	R(JNZ(loc_340fd));	// 81981 jnz     short loc_340FD ;~ 2331:2806
cs=0x2331;eip=0x002808; 	T(CMP(di, 0x2E));	// 81982 cmp     di, 2Eh ; '.' ;~ 2331:2808
cs=0x2331;eip=0x00280b; 	R(JNZ(loc_340c6));	// 81983 jnz     short loc_340C6 ;~ 2331:280B
loc_340fd:
	// 9671 
cs=0x2331;eip=0x00280d; 	X(PUSH(di));	// 81987 push    di ;~ 2331:280D
cs=0x2331;eip=0x00280e; 	T(MOV(di, si));	// 81988 mov     di, si ;~ 2331:280E
cs=0x2331;eip=0x002810; 	T(MOV(ax, ds));	// 81989 mov     ax, ds ;~ 2331:2810
cs=0x2331;eip=0x002812; 	T(MOV(es, ax));	// 81990 mov     es, ax ;~ 2331:2812
cs=0x2331;eip=0x002814; 	T(MOV(cx, 0x0FFFF));	// 81992 mov     cx, 0FFFFh ;~ 2331:2814
cs=0x2331;eip=0x002817; 	T(XOR(ax, ax));	// 81993 xor     ax, ax ;~ 2331:2817
	// 81994 repne scasb ;~ 2331:2819
cs=0x2331;eip=0x002819; 	T(	REPNE SCASB);	// 81994 repne scasb ;~ 2331:2819
cs=0x2331;eip=0x00281b; 	T(NOT(cx));	// 81995 not     cx ;~ 2331:281B
cs=0x2331;eip=0x00281d; 	T(DEC(cx));	// 81996 dec     cx ;~ 2331:281D
cs=0x2331;eip=0x00281e; 	X(POP(di));	// 81997 pop     di ;~ 2331:281E
cs=0x2331;eip=0x00281f; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), cx));	// 81998 mov     [bp+var_8], cx ;~ 2331:281F
cs=0x2331;eip=0x002822; 	X(PUSH(si));	// 81999 push    si ;~ 2331:2822
cs=0x2331;eip=0x002823; 	R(CALLF(sub_2dcb2,0));	// 82000 call    sub_2DCB2 ;~ 2331:2823
cs=0x2331;eip=0x002828; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 82001 mov     [bp+var_4], ax ;~ 2331:2828
cs=0x2331;eip=0x00282b; 	X(PUSH(di));	// 82002 push    di ;~ 2331:282B
cs=0x2331;eip=0x00282c; 	R(CALLF(sub_2dc86,0));	// 82003 call    sub_2DC86 ;~ 2331:282C
cs=0x2331;eip=0x002831; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 82004 mov     [bp+var_2], ax ;~ 2331:2831
cs=0x2331;eip=0x002834; 	T(CMP(di, 0x20));	// 82005 cmp     di, 20h ; ' ' ;~ 2331:2834
cs=0x2331;eip=0x002837; 	R(JL(loc_340c6));	// 82006 jl      short loc_340C6 ;~ 2331:2837
cs=0x2331;eip=0x002839; 	T(CMP(di, 0x7F));	// 82007 cmp     di, 7Fh ;~ 2331:2839
cs=0x2331;eip=0x00283c; 	R(JG(loc_340c6));	// 82008 jg      short loc_340C6 ;~ 2331:283C
cs=0x2331;eip=0x00283e; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0x1E));	// 82009 cmp     [bp+var_8], 1Eh ;~ 2331:283E
cs=0x2331;eip=0x002842; 	R(JGE(loc_340c6));	// 82010 jge     short loc_340C6 ;~ 2331:2842
cs=0x2331;eip=0x002844; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 82011 mov     ax, [bp+var_4] ;~ 2331:2844
cs=0x2331;eip=0x002847; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_2))));	// 82012 add     ax, [bp+var_2] ;~ 2331:2847
cs=0x2331;eip=0x00284a; 	T(CMP(ax, 0x0B8));	// 82013 cmp     ax, 0B8h ; '∏' ;~ 2331:284A
cs=0x2331;eip=0x00284d; 	R(JGE(loc_340c6));	// 82014 jge     short loc_340C6 ;~ 2331:284D
cs=0x2331;eip=0x00284f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 82015 mov     bx, [bp+var_8] ;~ 2331:284F
cs=0x2331;eip=0x002852; 	T(MOV(ax, di));	// 82016 mov     ax, di ;~ 2331:2852
cs=0x2331;eip=0x002854; 	X(MOV(*(raddr(ds,bx+si)), al));	// 82017 mov     [bx+si], al ;~ 2331:2854
cs=0x2331;eip=0x002856; 	X(MOV(*(raddr(ds,bx+si+1)), 0));	// 82018 mov     byte ptr [bx+si+1], 0 ;~ 2331:2856
cs=0x2331;eip=0x00285a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 82019 mov     ax, [bp+var_4] ;~ 2331:285A
cs=0x2331;eip=0x00285d; 	T(ADD(ax, 0x20));	// 82020 add     ax, 20h ; ' ' ;~ 2331:285D
cs=0x2331;eip=0x002860; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 82021 mov     [bp+var_C], ax ;~ 2331:2860
cs=0x2331;eip=0x002863; 	X(PUSH(ax));	// 82022 push    ax ;~ 2331:2863
cs=0x2331;eip=0x002864; 	X(PUSH(*(dw*)((&unk_544d2))));	// 82023 push    word ptr unk_544D2 ;~ 2331:2864
cs=0x2331;eip=0x002868; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 82024 push    [bp+var_2] ;~ 2331:2868
cs=0x2331;eip=0x00286b; 	T(MOV(ax, 9));	// 82025 mov     ax, 9 ;~ 2331:286B
cs=0x2331;eip=0x00286e; 	X(PUSH(ax));	// 82026 push    ax ;~ 2331:286E
cs=0x2331;eip=0x00286f; 	T(MOV(ax, 0x0FF0F));	// 82027 mov     ax, 0FF0Fh ;~ 2331:286F
cs=0x2331;eip=0x002872; 	X(PUSH(ax));	// 82028 push    ax ;~ 2331:2872
cs=0x2331;eip=0x002873; 	R(CALLF(sub_233c4,0));	// 82029 call    sub_233C4 ;~ 2331:2873
cs=0x2331;eip=0x002878; 	X(PUSH(*(dw*)((&unk_544d2))));	// 82030 push    word ptr unk_544D2 ;~ 2331:2878
cs=0x2331;eip=0x00287c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 82031 push    [bp+var_C] ;~ 2331:287C
cs=0x2331;eip=0x00287f; 	X(PUSH(di));	// 82032 push    di ;~ 2331:287F
cs=0x2331;eip=0x002880; 	R(CALLF(sub_2e4b0,0));	// 82033 call    sub_2E4B0 ;~ 2331:2880
cs=0x2331;eip=0x002885; 	T(ADD(sp, 6));	// 82034 add     sp, 6 ;~ 2331:2885
cs=0x2331;eip=0x002888; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 82035 mov     ax, [bp+var_4] ;~ 2331:2888
cs=0x2331;eip=0x00288b; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_2))));	// 82036 add     ax, [bp+var_2] ;~ 2331:288B
cs=0x2331;eip=0x00288e; 	R(JMP(loc_341f0));	// 82037 jmp     short loc_341F0 ;~ 2331:288E
loc_34180:
	// 9672 
cs=0x2331;eip=0x002890; 	X(MOV(*(dw*)((&unk_47bde)), 0x0FF00));	// 82041 mov     word ptr unk_47BDE, 0FF00h ;~ 2331:2890
cs=0x2331;eip=0x002896; 	X(MOV(unk_56885, 0));	// 82042 mov     byte ptr unk_56885, 0 ;~ 2331:2896
cs=0x2331;eip=0x00289b; 	X(PUSH(si));	// 82043 push    si ;~ 2331:289B
cs=0x2331;eip=0x00289c; 	T(MOV(ax, 0x20));	// 82044 mov     ax, 20h ; ' ' ;~ 2331:289C
cs=0x2331;eip=0x00289f; 	X(PUSH(ax));	// 82045 push    ax ;~ 2331:289F
cs=0x2331;eip=0x0028a0; 	X(PUSH(*(dw*)((&unk_544d2))));	// 82046 push    word ptr unk_544D2 ;~ 2331:28A0
cs=0x2331;eip=0x0028a4; 	R(CALLF(sub_2dce4,0));	// 82047 call    sub_2DCE4 ;~ 2331:28A4
cs=0x2331;eip=0x0028a9; 	X(PUSH(si));	// 82048 push    si ;~ 2331:28A9
cs=0x2331;eip=0x0028aa; 	R(CALLF(sub_2dcb2,0));	// 82049 call    sub_2DCB2 ;~ 2331:28AA
cs=0x2331;eip=0x0028af; 	X(PUSH(ax));	// 82050 push    ax ;~ 2331:28AF
cs=0x2331;eip=0x0028b0; 	T(SUB(ax, ax));	// 82051 sub     ax, ax ;~ 2331:28B0
cs=0x2331;eip=0x0028b2; 	X(PUSH(ax));	// 82052 push    ax ;~ 2331:28B2
cs=0x2331;eip=0x0028b3; 	R(CALL(sub_34024,0));	// 82053 call    sub_34024 ;~ 2331:28B3
loc_341a6:
	// 9673 
cs=0x2331;eip=0x0028b6; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), di));	// 82056 mov     [bp+var_6], di ;~ 2331:28B6
cs=0x2331;eip=0x0028b9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 82057 push    [bp+var_A] ;~ 2331:28B9
cs=0x2331;eip=0x0028bc; 	R(CALLF(sub_202f1,0));	// 82058 call    sub_202F1 ;~ 2331:28BC
cs=0x2331;eip=0x0028c1; 	T(CMP(di, 0x1B));	// 82059 cmp     di, 1Bh ;~ 2331:28C1
cs=0x2331;eip=0x0028c4; 	R(JZ(loc_341fb));	// 82060 jz      short loc_341FB ;~ 2331:28C4
cs=0x2331;eip=0x0028c6; 	T(MOV(ax, 1));	// 82061 mov     ax, 1 ;~ 2331:28C6
cs=0x2331;eip=0x0028c9; 	R(JMP(loc_341fd));	// 82062 jmp     short loc_341FD ;~ 2331:28C9
loc_341bb:
	// 9674 
cs=0x2331;eip=0x0028cb; 	X(PUSH(di));	// 82067 push    di ;~ 2331:28CB
cs=0x2331;eip=0x0028cc; 	T(MOV(di, si));	// 82068 mov     di, si ;~ 2331:28CC
cs=0x2331;eip=0x0028ce; 	T(MOV(ax, ds));	// 82069 mov     ax, ds ;~ 2331:28CE
cs=0x2331;eip=0x0028d0; 	T(MOV(es, ax));	// 82070 mov     es, ax ;~ 2331:28D0
cs=0x2331;eip=0x0028d2; 	T(MOV(cx, 0x0FFFF));	// 82071 mov     cx, 0FFFFh ;~ 2331:28D2
cs=0x2331;eip=0x0028d5; 	T(XOR(ax, ax));	// 82072 xor     ax, ax ;~ 2331:28D5
	// 82073 repne scasb ;~ 2331:28D7
cs=0x2331;eip=0x0028d7; 	T(	REPNE SCASB);	// 82073 repne scasb ;~ 2331:28D7
cs=0x2331;eip=0x0028d9; 	T(NOT(cx));	// 82074 not     cx ;~ 2331:28D9
cs=0x2331;eip=0x0028db; 	T(DEC(cx));	// 82075 dec     cx ;~ 2331:28DB
cs=0x2331;eip=0x0028dc; 	X(POP(di));	// 82076 pop     di ;~ 2331:28DC
cs=0x2331;eip=0x0028dd; 	T(OR(cx, cx));	// 82077 or      cx, cx ;~ 2331:28DD
cs=0x2331;eip=0x0028df; 	R(JNZ(loc_341d4));	// 82078 jnz     short loc_341D4 ;~ 2331:28DF
cs=0x2331;eip=0x0028e1; 	R(JMP(loc_340c6));	// 82079 jmp     loc_340C6 ;~ 2331:28E1
loc_341d4:
	// 9675 
cs=0x2331;eip=0x0028e4; 	X(PUSH(di));	// 82083 push    di ;~ 2331:28E4
cs=0x2331;eip=0x0028e5; 	T(MOV(di, si));	// 82084 mov     di, si ;~ 2331:28E5
cs=0x2331;eip=0x0028e7; 	T(MOV(ax, ds));	// 82085 mov     ax, ds ;~ 2331:28E7
cs=0x2331;eip=0x0028e9; 	T(MOV(cx, 0x0FFFF));	// 82086 mov     cx, 0FFFFh ;~ 2331:28E9
cs=0x2331;eip=0x0028ec; 	T(XOR(ax, ax));	// 82087 xor     ax, ax ;~ 2331:28EC
	// 82088 repne scasb ;~ 2331:28EE
cs=0x2331;eip=0x0028ee; 	T(	REPNE SCASB);	// 82088 repne scasb ;~ 2331:28EE
cs=0x2331;eip=0x0028f0; 	T(NOT(cx));	// 82089 not     cx ;~ 2331:28F0
cs=0x2331;eip=0x0028f2; 	T(DEC(cx));	// 82090 dec     cx ;~ 2331:28F2
cs=0x2331;eip=0x0028f3; 	X(POP(di));	// 82091 pop     di ;~ 2331:28F3
cs=0x2331;eip=0x0028f4; 	T(MOV(bx, cx));	// 82092 mov     bx, cx ;~ 2331:28F4
cs=0x2331;eip=0x0028f6; 	X(MOV(*(raddr(ds,bx+si-1)), 0));	// 82093 mov     byte ptr [bx+si-1], 0 ;~ 2331:28F6
cs=0x2331;eip=0x0028fa; 	X(PUSH(si));	// 82094 push    si ;~ 2331:28FA
cs=0x2331;eip=0x0028fb; 	R(CALLF(sub_2dcb2,0));	// 82095 call    sub_2DCB2 ;~ 2331:28FB
loc_341f0:
	// 9676 
cs=0x2331;eip=0x002900; 	X(PUSH(ax));	// 82098 push    ax ;~ 2331:2900
cs=0x2331;eip=0x002901; 	T(MOV(ax, 1));	// 82099 mov     ax, 1 ;~ 2331:2901
cs=0x2331;eip=0x002904; 	X(PUSH(ax));	// 82100 push    ax ;~ 2331:2904
cs=0x2331;eip=0x002905; 	R(CALL(sub_34024,0));	// 82101 call    sub_34024 ;~ 2331:2905
cs=0x2331;eip=0x002908; 	R(JMP(loc_340c6));	// 82102 jmp     loc_340C6 ;~ 2331:2908
loc_341fb:
	// 9677 
cs=0x2331;eip=0x00290b; 	T(SUB(ax, ax));	// 82106 sub     ax, ax ;~ 2331:290B
loc_341fd:
	// 9678 
cs=0x2331;eip=0x00290d; 	X(POP(si));	// 82109 pop     si ;~ 2331:290D
cs=0x2331;eip=0x00290e; 	X(POP(di));	// 82110 pop     di ;~ 2331:290E
cs=0x2331;eip=0x00290f; 	T(MOV(sp, bp));	// 82111 mov     sp, bp ;~ 2331:290F
cs=0x2331;eip=0x002911; 	X(POP(bp));	// 82112 pop     bp ;~ 2331:2911
cs=0x2331;eip=0x002912; 	R(RETN(6));	// 82113 retn    6 ;~ 2331:2912
sub_34206:
	// 82123 
#undef arg_0
#define arg_0 4
	// 82126 arg_0           = byte ptr  4 ;~ 2331:2916
#undef arg_2
#define arg_2 6
	// 82127 arg_2           = byte ptr  6 ;~ 2331:2916
cs=0x2331;eip=0x002916; 	X(PUSH(bp));	// 82129 push    bp ;~ 2331:2916
cs=0x2331;eip=0x002917; 	T(MOV(bp, sp));	// 82130 mov     bp, sp ;~ 2331:2917
cs=0x2331;eip=0x002919; 	T(CMP(*(raddr(ss,bp+arg_2)), 0));	// 82131 cmp     [bp+arg_2], 0 ;~ 2331:2919
cs=0x2331;eip=0x00291d; 	R(JZ(loc_34231));	// 82132 jz      short loc_34231 ;~ 2331:291D
cs=0x2331;eip=0x00291f; 	T(MOV(ax, 0x2A1C));	// 82133 mov     ax, 2A1Ch ;~ 2331:291F
cs=0x2331;eip=0x002922; 	X(PUSH(ax));	// 82134 push    ax ;~ 2331:2922
cs=0x2331;eip=0x002923; 	T(MOV(ax, 0x4C));	// 82135 mov     ax, 4Ch ; 'L' ;~ 2331:2923
cs=0x2331;eip=0x002926; 	X(PUSH(ax));	// 82136 push    ax ;~ 2331:2926
cs=0x2331;eip=0x002927; 	T(MOV(ax, 0x4D));	// 82137 mov     ax, 4Dh ; 'M' ;~ 2331:2927
cs=0x2331;eip=0x00292a; 	X(PUSH(ax));	// 82138 push    ax ;~ 2331:292A
cs=0x2331;eip=0x00292b; 	R(CALLF(sub_2de1a,0));	// 82139 call    sub_2DE1A ;~ 2331:292B
cs=0x2331;eip=0x002930; 	T(MOV(ax, 0x2A2D));	// 82140 mov     ax, 2A2Dh ;~ 2331:2930
cs=0x2331;eip=0x002933; 	X(PUSH(ax));	// 82141 push    ax ;~ 2331:2933
cs=0x2331;eip=0x002934; 	T(MOV(ax, 0x0B0));	// 82142 mov     ax, 0B0h ; '∞' ;~ 2331:2934
cs=0x2331;eip=0x002937; 	X(PUSH(ax));	// 82143 push    ax ;~ 2331:2937
cs=0x2331;eip=0x002938; 	T(MOV(ax, 0x4D));	// 82144 mov     ax, 4Dh ; 'M' ;~ 2331:2938
cs=0x2331;eip=0x00293b; 	X(PUSH(ax));	// 82145 push    ax ;~ 2331:293B
cs=0x2331;eip=0x00293c; 	R(CALLF(sub_2de1a,0));	// 82146 call    sub_2DE1A ;~ 2331:293C
loc_34231:
	// 9679 
cs=0x2331;eip=0x002941; 	T(CMP(*(raddr(ss,bp+arg_0)), 0));	// 82149 cmp     [bp+arg_0], 0 ;~ 2331:2941
cs=0x2331;eip=0x002945; 	R(JZ(loc_34251));	// 82150 jz      short loc_34251 ;~ 2331:2945
cs=0x2331;eip=0x002947; 	T(MOV(ax, 0x2A41));	// 82151 mov     ax, 2A41h ;~ 2331:2947
cs=0x2331;eip=0x00294a; 	X(PUSH(ax));	// 82152 push    ax ;~ 2331:294A
cs=0x2331;eip=0x00294b; 	T(MOV(ax, 0x0B8));	// 82153 mov     ax, 0B8h ; '∏' ;~ 2331:294B
cs=0x2331;eip=0x00294e; 	X(PUSH(ax));	// 82154 push    ax ;~ 2331:294E
cs=0x2331;eip=0x00294f; 	R(CALLF(sub_2db50,0));	// 82155 call    sub_2DB50 ;~ 2331:294F
cs=0x2331;eip=0x002954; 	T(MOV(ax, 0x2A52));	// 82156 mov     ax, 2A52h ;~ 2331:2954
cs=0x2331;eip=0x002957; 	X(PUSH(ax));	// 82157 push    ax ;~ 2331:2957
cs=0x2331;eip=0x002958; 	T(MOV(ax, 0x0BF));	// 82158 mov     ax, 0BFh ; 'ø' ;~ 2331:2958
cs=0x2331;eip=0x00295b; 	X(PUSH(ax));	// 82159 push    ax ;~ 2331:295B
cs=0x2331;eip=0x00295c; 	R(CALLF(sub_2db50,0));	// 82160 call    sub_2DB50 ;~ 2331:295C
loc_34251:
	// 9680 
cs=0x2331;eip=0x002961; 	X(POP(bp));	// 82163 pop     bp ;~ 2331:2961
cs=0x2331;eip=0x002962; 	R(RETN(4));	// 82164 retn    4 ;~ 2331:2962
sub_34255:
	// 82172 
#undef arg_0
#define arg_0 4
	// 82175 arg_0           = word ptr  4 ;~ 2331:2965
#undef arg_2
#define arg_2 6
	// 82176 arg_2           = word ptr  6 ;~ 2331:2965
cs=0x2331;eip=0x002965; 	X(PUSH(bp));	// 82178 push    bp ;~ 2331:2965
cs=0x2331;eip=0x002966; 	T(MOV(bp, sp));	// 82179 mov     bp, sp ;~ 2331:2966
cs=0x2331;eip=0x002968; 	T(MOV(ax, *(dw*)((&unk_57056))));	// 82180 mov     ax, word ptr unk_57056 ;~ 2331:2968
cs=0x2331;eip=0x00296b; 	T(CWD);	// 82181 cwd ;~ 2331:296B
cs=0x2331;eip=0x00296c; 	X(PUSH(dx));	// 82182 push    dx ;~ 2331:296C
cs=0x2331;eip=0x00296d; 	X(PUSH(ax));	// 82183 push    ax ;~ 2331:296D
cs=0x2331;eip=0x00296e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 82184 mov     ax, [bp+arg_0] ;~ 2331:296E
cs=0x2331;eip=0x002971; 	T(CWD);	// 82185 cwd ;~ 2331:2971
cs=0x2331;eip=0x002972; 	T(MOV(dh, dl));	// 82186 mov     dh, dl ;~ 2331:2972
cs=0x2331;eip=0x002974; 	T(MOV(dl, ah));	// 82187 mov     dl, ah ;~ 2331:2974
cs=0x2331;eip=0x002976; 	T(MOV(ah, al));	// 82188 mov     ah, al ;~ 2331:2976
cs=0x2331;eip=0x002978; 	T(SUB(al, al));	// 82189 sub     al, al ;~ 2331:2978
cs=0x2331;eip=0x00297a; 	X(PUSH(dx));	// 82190 push    dx ;~ 2331:297A
cs=0x2331;eip=0x00297b; 	X(PUSH(ax));	// 82191 push    ax ;~ 2331:297B
cs=0x2331;eip=0x00297c; 	R(CALLF(sub_105c2,0));	// 82192 call    sub_105C2 ;~ 2331:297C
cs=0x2331;eip=0x002981; 	T(MOV(cl, 8));	// 82193 mov     cl, 8 ;~ 2331:2981
cs=0x2331;eip=0x002983; 	R(CALLF(sub_10240,0));	// 82194 call    sub_10240 ;~ 2331:2983
cs=0x2331;eip=0x002988; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 82195 mov     bx, [bp+arg_2] ;~ 2331:2988
cs=0x2331;eip=0x00298b; 	X(ADD(*(dw*)(raddr(ds,bx)), ax));	// 82196 add     [bx], ax ;~ 2331:298B
cs=0x2331;eip=0x00298d; 	X(ADC(*(dw*)(raddr(ds,bx+2)), dx));	// 82197 adc     [bx+2], dx ;~ 2331:298D
cs=0x2331;eip=0x002990; 	X(POP(bp));	// 82198 pop     bp ;~ 2331:2990
cs=0x2331;eip=0x002991; 	R(RETN(4));	// 82199 retn    4 ;~ 2331:2991
sub_34284:
	// 82207 
#undef var_c8
#define var_c8 -0x0C8
	// 82209 var_C8          = word ptr -0C8h ;~ 2331:2994
#undef var_c6
#define var_c6 -0x0C6
	// 82210 var_C6          = byte ptr -0C6h ;~ 2331:2994
#undef var_6c
#define var_6c -0x6C
	// 82211 var_6C          = word ptr -6Ch ;~ 2331:2994
#undef var_6a
#define var_6a -0x6A
	// 82212 var_6A          = word ptr -6Ah ;~ 2331:2994
#undef var_68
#define var_68 -0x68
	// 82213 var_68          = byte ptr -68h ;~ 2331:2994
#undef var_66
#define var_66 -0x66
	// 82214 var_66          = byte ptr -66h ;~ 2331:2994
#undef var_64
#define var_64 -0x64
	// 82215 var_64          = word ptr -64h ;~ 2331:2994
#undef var_62
#define var_62 -0x62
	// 82216 var_62          = word ptr -62h ;~ 2331:2994
#undef var_60
#define var_60 -0x60
	// 82217 var_60          = word ptr -60h ;~ 2331:2994
#undef var_5e
#define var_5e -0x5E
	// 82218 var_5E          = word ptr -5Eh ;~ 2331:2994
#undef var_5c
#define var_5c -0x5C
	// 82219 var_5C          = word ptr -5Ch ;~ 2331:2994
#undef var_5a
#define var_5a -0x5A
	// 82220 var_5A          = word ptr -5Ah ;~ 2331:2994
#undef var_58
#define var_58 -0x58
	// 82221 var_58          = word ptr -58h ;~ 2331:2994
#undef var_56
#define var_56 -0x56
	// 82222 var_56          = word ptr -56h ;~ 2331:2994
#undef var_54
#define var_54 -0x54
	// 82223 var_54          = word ptr -54h ;~ 2331:2994
#undef var_52
#define var_52 -0x52
	// 82224 var_52          = word ptr -52h ;~ 2331:2994
#undef var_50
#define var_50 -0x50
	// 82225 var_50          = word ptr -50h ;~ 2331:2994
#undef var_4e
#define var_4e -0x4E
	// 82226 var_4E          = word ptr -4Eh ;~ 2331:2994
#undef var_4c
#define var_4c -0x4C
	// 82227 var_4C          = word ptr -4Ch ;~ 2331:2994
#undef var_4a
#define var_4a -0x4A
	// 82228 var_4A          = word ptr -4Ah ;~ 2331:2994
#undef var_48
#define var_48 -0x48
	// 82229 var_48          = word ptr -48h ;~ 2331:2994
#undef var_46
#define var_46 -0x46
	// 82230 var_46          = word ptr -46h ;~ 2331:2994
#undef var_42
#define var_42 -0x42
	// 82231 var_42          = word ptr -42h ;~ 2331:2994
#undef var_40
#define var_40 -0x40
	// 82232 var_40          = word ptr -40h ;~ 2331:2994
#undef var_3e
#define var_3e -0x3E
	// 82233 var_3E          = word ptr -3Eh ;~ 2331:2994
#undef var_3c
#define var_3c -0x3C
	// 82234 var_3C          = word ptr -3Ch ;~ 2331:2994
#undef var_3a
#define var_3a -0x3A
	// 82235 var_3A          = word ptr -3Ah ;~ 2331:2994
#undef var_38
#define var_38 -0x38
	// 82236 var_38          = word ptr -38h ;~ 2331:2994
#undef var_36
#define var_36 -0x36
	// 82237 var_36          = word ptr -36h ;~ 2331:2994
#undef var_34
#define var_34 -0x34
	// 82238 var_34          = word ptr -34h ;~ 2331:2994
#undef var_32
#define var_32 -0x32
	// 82239 var_32          = word ptr -32h ;~ 2331:2994
#undef var_30
#define var_30 -0x30
	// 82240 var_30          = word ptr -30h ;~ 2331:2994
#undef var_2e
#define var_2e -0x2E
	// 82241 var_2E          = word ptr -2Eh ;~ 2331:2994
#undef var_2c
#define var_2c -0x2C
	// 82242 var_2C          = word ptr -2Ch ;~ 2331:2994
#undef var_2a
#define var_2a -0x2A
	// 82243 var_2A          = word ptr -2Ah ;~ 2331:2994
#undef var_28
#define var_28 -0x28
	// 82244 var_28          = word ptr -28h ;~ 2331:2994
#undef var_26
#define var_26 -0x26
	// 82245 var_26          = word ptr -26h ;~ 2331:2994
#undef var_24
#define var_24 -0x24
	// 82246 var_24          = word ptr -24h ;~ 2331:2994
#undef var_22
#define var_22 -0x22
	// 82247 var_22          = word ptr -22h ;~ 2331:2994
#undef var_20
#define var_20 -0x20
	// 82248 var_20          = byte ptr -20h ;~ 2331:2994
#undef var_1e
#define var_1e -0x1E
	// 82249 var_1E          = word ptr -1Eh ;~ 2331:2994
#undef var_1c
#define var_1c -0x1C
	// 82250 var_1C          = word ptr -1Ch ;~ 2331:2994
#undef var_1a
#define var_1a -0x1A
	// 82251 var_1A          = word ptr -1Ah ;~ 2331:2994
#undef var_10
#define var_10 -0x10
	// 82252 var_10          = word ptr -10h ;~ 2331:2994
#undef var_e
#define var_e -0x0E
	// 82253 var_E           = word ptr -0Eh ;~ 2331:2994
#undef var_a
#define var_a -0x0A
	// 82254 var_A           = word ptr -0Ah ;~ 2331:2994
#undef var_6
#define var_6 -6
	// 82255 var_6           = word ptr -6 ;~ 2331:2994
#undef var_4
#define var_4 -4
	// 82256 var_4           = word ptr -4 ;~ 2331:2994
#undef var_2
#define var_2 -2
	// 82257 var_2           = word ptr -2 ;~ 2331:2994
cs=0x2331;eip=0x002994; 	X(PUSH(bp));	// 82259 push    bp ;~ 2331:2994
cs=0x2331;eip=0x002995; 	T(MOV(bp, sp));	// 82260 mov     bp, sp ;~ 2331:2995
cs=0x2331;eip=0x002997; 	T(SUB(sp, 0x0C8));	// 82261 sub     sp, 0C8h ;~ 2331:2997
cs=0x2331;eip=0x00299b; 	X(PUSH(di));	// 82262 push    di ;~ 2331:299B
cs=0x2331;eip=0x00299c; 	T(MOV(cx, 0x18));	// 82263 mov     cx, 18h ;~ 2331:299C
cs=0x2331;eip=0x00299f; 	T(di = bp+var_48);	// 82264 lea     di, [bp+var_48] ;~ 2331:299F
cs=0x2331;eip=0x0029a2; 	T(MOV(ax, ss));	// 82265 mov     ax, ss ;~ 2331:29A2
cs=0x2331;eip=0x0029a4; 	T(MOV(es, ax));	// 82266 mov     es, ax ;~ 2331:29A4
cs=0x2331;eip=0x0029a6; 	T(SUB(ax, ax));	// 82268 sub     ax, ax ;~ 2331:29A6
	// 82269 repne stosb ;~ 2331:29A8
cs=0x2331;eip=0x0029a8; 	R(REPNE STOSB);	// 82269 repne stosb ;~ 2331:29A8
cs=0x2331;eip=0x0029aa; 	X(MOV(*(dw*)(raddr(ss,bp+var_36)), 0x5A0));	// 82270 mov     [bp+var_36], 5A0h ;~ 2331:29AA
cs=0x2331;eip=0x0029af; 	X(MOV(*(dw*)(raddr(ss,bp+var_48)), 0x0A200));	// 82271 mov     [bp+var_48], 0A200h ;~ 2331:29AF
cs=0x2331;eip=0x0029b4; 	X(MOV(*(dw*)(raddr(ss,bp+var_46)), 1));	// 82272 mov     [bp+var_46], 1 ;~ 2331:29B4
cs=0x2331;eip=0x0029b9; 	T(MOV(cx, 0x18));	// 82273 mov     cx, 18h ;~ 2331:29B9
cs=0x2331;eip=0x0029bc; 	T(di = bp+var_62);	// 82274 lea     di, [bp+var_62] ;~ 2331:29BC
cs=0x2331;eip=0x0029bf; 	T(MOV(ax, ss));	// 82275 mov     ax, ss ;~ 2331:29BF
cs=0x2331;eip=0x0029c1; 	T(SUB(ax, ax));	// 82276 sub     ax, ax ;~ 2331:29C1
	// 82277 repne stosb ;~ 2331:29C3
cs=0x2331;eip=0x0029c3; 	R(REPNE STOSB);	// 82277 repne stosb ;~ 2331:29C3
cs=0x2331;eip=0x0029c5; 	X(MOV(*(dw*)(raddr(ss,bp+var_50)), 0x5A0));	// 82278 mov     [bp+var_50], 5A0h ;~ 2331:29C5
cs=0x2331;eip=0x0029ca; 	X(MOV(*(dw*)(raddr(ss,bp+var_62)), 0x4664));	// 82279 mov     [bp+var_62], 4664h ;~ 2331:29CA
cs=0x2331;eip=0x0029cf; 	X(MOV(*(dw*)(raddr(ss,bp+var_60)), 1));	// 82280 mov     [bp+var_60], 1 ;~ 2331:29CF
cs=0x2331;eip=0x0029d4; 	T(ax = bp+var_48);	// 82281 lea     ax, [bp+var_48] ;~ 2331:29D4
cs=0x2331;eip=0x0029d7; 	X(MOV(*(dw*)(raddr(ss,bp+var_5e)), ax));	// 82282 mov     [bp+var_5E], ax ;~ 2331:29D7
cs=0x2331;eip=0x0029da; 	T(MOV(cx, 0x18));	// 82283 mov     cx, 18h ;~ 2331:29DA
cs=0x2331;eip=0x0029dd; 	T(di = bp+var_1e);	// 82284 lea     di, [bp+var_1E] ;~ 2331:29DD
cs=0x2331;eip=0x0029e0; 	T(MOV(ax, ss));	// 82285 mov     ax, ss ;~ 2331:29E0
cs=0x2331;eip=0x0029e2; 	T(SUB(ax, ax));	// 82286 sub     ax, ax ;~ 2331:29E2
	// 82287 repne stosb ;~ 2331:29E4
cs=0x2331;eip=0x0029e4; 	R(REPNE STOSB);	// 82287 repne stosb ;~ 2331:29E4
cs=0x2331;eip=0x0029e6; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0x2D0));	// 82288 mov     [bp+var_A], 2D0h ;~ 2331:29E6
cs=0x2331;eip=0x0029eb; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), 0x3734));	// 82289 mov     [bp+var_1E], 3734h ;~ 2331:29EB
cs=0x2331;eip=0x0029f0; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), 1));	// 82290 mov     [bp+var_1C], 1 ;~ 2331:29F0
cs=0x2331;eip=0x0029f5; 	T(ax = bp+var_62);	// 82291 lea     ax, [bp+var_62] ;~ 2331:29F5
cs=0x2331;eip=0x0029f8; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), ax));	// 82292 mov     [bp+var_1A], ax ;~ 2331:29F8
cs=0x2331;eip=0x0029fb; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), 0x0C00));	// 82293 mov     [bp+var_10], 0C00h ;~ 2331:29FB
cs=0x2331;eip=0x002a00; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0x0FFFE));	// 82294 mov     [bp+var_E], 0FFFEh ;~ 2331:2A00
cs=0x2331;eip=0x002a05; 	X(MOV(unk_4b0e4, 0));	// 82295 mov     byte ptr unk_4B0E4, 0 ;~ 2331:2A05
cs=0x2331;eip=0x002a0a; 	R(CALLF(sub_2ee6e,0));	// 82296 call    sub_2EE6E ;~ 2331:2A0A
cs=0x2331;eip=0x002a0f; 	X(MOV(*(dw*)((&unk_4a448)), ax));	// 82297 mov     word ptr unk_4A448, ax ;~ 2331:2A0F
cs=0x2331;eip=0x002a12; 	X(MOV(*(dw*)((&unk_4a44c)), ax));	// 82298 mov     word ptr unk_4A44C, ax ;~ 2331:2A12
cs=0x2331;eip=0x002a15; 	T(ax = bp+var_1e);	// 82299 lea     ax, [bp+var_1E] ;~ 2331:2A15
cs=0x2331;eip=0x002a18; 	X(MOV(*(dw*)((&unk_4a44a)), ax));	// 82300 mov     word ptr unk_4A44A, ax ;~ 2331:2A18
cs=0x2331;eip=0x002a1b; 	T(SUB(al, al));	// 82301 sub     al, al ;~ 2331:2A1B
cs=0x2331;eip=0x002a1d; 	X(MOV(unk_4a43f, al));	// 82302 mov     byte ptr unk_4A43F, al ;~ 2331:2A1D
cs=0x2331;eip=0x002a20; 	X(MOV(unk_4a43e, al));	// 82303 mov     byte ptr unk_4A43E, al ;~ 2331:2A20
cs=0x2331;eip=0x002a23; 	T(SUB(ax, ax));	// 82304 sub     ax, ax ;~ 2331:2A23
cs=0x2331;eip=0x002a25; 	X(MOV(*(dw*)(raddr(ss,bp+var_2e)), ax));	// 82305 mov     [bp+var_2E], ax ;~ 2331:2A25
cs=0x2331;eip=0x002a28; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), ax));	// 82306 mov     [bp+var_30], ax ;~ 2331:2A28
cs=0x2331;eip=0x002a2b; 	T(MOV(ax, *(dw*)((&unk_47b34))));	// 82307 mov     ax, word ptr unk_47B34 ;~ 2331:2A2B
cs=0x2331;eip=0x002a2e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), ax));	// 82308 mov     [bp+var_2C], ax ;~ 2331:2A2E
cs=0x2331;eip=0x002a31; 	T(MOV(ax, *(dw*)((&unk_47b36))));	// 82309 mov     ax, word ptr unk_47B36 ;~ 2331:2A31
cs=0x2331;eip=0x002a34; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a)), ax));	// 82310 mov     [bp+var_2A], ax ;~ 2331:2A34
cs=0x2331;eip=0x002a37; 	T(ax = bp+var_c6);	// 82311 lea     ax, [bp+var_C6] ;~ 2331:2A37
cs=0x2331;eip=0x002a3b; 	X(PUSH(ax));	// 82312 push    ax ;~ 2331:2A3B
cs=0x2331;eip=0x002a3c; 	T(MOV(ax, 0x2A8E));	// 82313 mov     ax, 2A8Eh ;~ 2331:2A3C
cs=0x2331;eip=0x002a3f; 	X(PUSH(ax));	// 82314 push    ax ;~ 2331:2A3F
cs=0x2331;eip=0x002a40; 	T(MOV(ax, 1));	// 82315 mov     ax, 1 ;~ 2331:2A40
cs=0x2331;eip=0x002a43; 	X(PUSH(ax));	// 82316 push    ax ;~ 2331:2A43
cs=0x2331;eip=0x002a44; 	X(PUSH(ax));	// 82317 push    ax ;~ 2331:2A44
cs=0x2331;eip=0x002a45; 	T(SUB(ax, ax));	// 82318 sub     ax, ax ;~ 2331:2A45
cs=0x2331;eip=0x002a47; 	X(PUSH(ax));	// 82319 push    ax ;~ 2331:2A47
cs=0x2331;eip=0x002a48; 	T(MOV(ax, 1));	// 82320 mov     ax, 1 ;~ 2331:2A48
cs=0x2331;eip=0x002a4b; 	X(PUSH(ax));	// 82321 push    ax ;~ 2331:2A4B
cs=0x2331;eip=0x002a4c; 	T(MOV(ax, 0x19));	// 82322 mov     ax, 19h ;~ 2331:2A4C
cs=0x2331;eip=0x002a4f; 	X(PUSH(ax));	// 82323 push    ax ;~ 2331:2A4F
cs=0x2331;eip=0x002a50; 	T(MOV(ax, 0x50));	// 82324 mov     ax, 50h ; 'P' ;~ 2331:2A50
cs=0x2331;eip=0x002a53; 	X(PUSH(ax));	// 82325 push    ax ;~ 2331:2A53
cs=0x2331;eip=0x002a54; 	R(CALLF(sub_2588d,0));	// 82326 call    sub_2588D ;~ 2331:2A54
cs=0x2331;eip=0x002a59; 	T(OR(al, al));	// 82327 or      al, al ;~ 2331:2A59
cs=0x2331;eip=0x002a5b; 	R(JNZ(loc_34352));	// 82328 jnz     short loc_34352 ;~ 2331:2A5B
cs=0x2331;eip=0x002a5d; 	R(CALLF(sub_315c9,0));	// 82329 call    sub_315C9 ;~ 2331:2A5D
loc_34352:
	// 9681 
cs=0x2331;eip=0x002a62; 	R(CALL(sub_3318a,0));	// 82333 call    sub_3318A ;~ 2331:2A62
cs=0x2331;eip=0x002a65; 	X(MOV(*(dw*)((&unk_47bde)), 0x0FF07));	// 82334 mov     word ptr unk_47BDE, 0FF07h ;~ 2331:2A65
cs=0x2331;eip=0x002a6b; 	X(MOV(unk_56885, 0));	// 82335 mov     byte ptr unk_56885, 0 ;~ 2331:2A6B
cs=0x2331;eip=0x002a70; 	R(CALLF(sub_3101f,0));	// 82336 call    sub_3101F ;~ 2331:2A70
cs=0x2331;eip=0x002a75; 	R(CALLF(sub_1bbee,0));	// 82337 call    sub_1BBEE ;~ 2331:2A75
cs=0x2331;eip=0x002a7a; 	R(CALLF(sub_3d324,0));	// 82338 call    sub_3D324 ;~ 2331:2A7A
cs=0x2331;eip=0x002a7f; 	X(MOV(*(raddr(ss,bp+var_68)), 0));	// 82339 mov     [bp+var_68], 0 ;~ 2331:2A7F
cs=0x2331;eip=0x002a83; 	T(MOV(ax, 1));	// 82340 mov     ax, 1 ;~ 2331:2A83
cs=0x2331;eip=0x002a86; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 82341 mov     [bp+var_6], ax ;~ 2331:2A86
cs=0x2331;eip=0x002a89; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 82342 mov     [bp+var_4], ax ;~ 2331:2A89
cs=0x2331;eip=0x002a8c; 	T(SUB(ax, ax));	// 82343 sub     ax, ax ;~ 2331:2A8C
cs=0x2331;eip=0x002a8e; 	X(MOV(*(dw*)(raddr(ss,bp+var_40)), ax));	// 82344 mov     [bp+var_40], ax ;~ 2331:2A8E
cs=0x2331;eip=0x002a91; 	X(MOV(*(dw*)(raddr(ss,bp+var_42)), ax));	// 82345 mov     [bp+var_42], ax ;~ 2331:2A91
cs=0x2331;eip=0x002a94; 	X(MOV(*(dw*)(raddr(ss,bp+var_3a)), 0x0F600));	// 82346 mov     [bp+var_3A], 0F600h ;~ 2331:2A94
cs=0x2331;eip=0x002a99; 	X(MOV(*(dw*)(raddr(ss,bp+var_38)), 0x0FFFF));	// 82347 mov     [bp+var_38], 0FFFFh ;~ 2331:2A99
cs=0x2331;eip=0x002a9e; 	X(MOV(*(dw*)(raddr(ss,bp+var_5c)), 0x0C00));	// 82348 mov     [bp+var_5C], 0C00h ;~ 2331:2A9E
cs=0x2331;eip=0x002aa3; 	X(MOV(*(dw*)(raddr(ss,bp+var_5a)), ax));	// 82349 mov     [bp+var_5A], ax ;~ 2331:2AA3
cs=0x2331;eip=0x002aa6; 	X(MOV(*(dw*)(raddr(ss,bp+var_54)), 0x3800));	// 82350 mov     [bp+var_54], 3800h ;~ 2331:2AA6
cs=0x2331;eip=0x002aab; 	X(MOV(*(dw*)(raddr(ss,bp+var_52)), 0x0FFFF));	// 82351 mov     [bp+var_52], 0FFFFh ;~ 2331:2AAB
cs=0x2331;eip=0x002ab0; 	R(CALLF(sub_36e33,0));	// 82352 call    sub_36E33 ;~ 2331:2AB0
cs=0x2331;eip=0x002ab5; 	R(CALLF(sub_36d7a,0));	// 82353 call    sub_36D7A ;~ 2331:2AB5
cs=0x2331;eip=0x002aba; 	R(CALLF(sub_36e89,0));	// 82354 call    sub_36E89 ;~ 2331:2ABA
loc_343af:
	// 9682 
cs=0x2331;eip=0x002abf; 	R(CALLF(sub_2ee71,0));	// 82357 call    sub_2EE71 ;~ 2331:2ABF
cs=0x2331;eip=0x002ac4; 	T(OR(ax, ax));	// 82358 or      ax, ax ;~ 2331:2AC4
cs=0x2331;eip=0x002ac6; 	R(JNZ(loc_343af));	// 82359 jnz     short loc_343AF ;~ 2331:2AC6
loc_343b8:
	// 9683 
cs=0x2331;eip=0x002ac8; 	T(SUB(al, al));	// 82363 sub     al, al ;~ 2331:2AC8
cs=0x2331;eip=0x002aca; 	X(MOV(*(raddr(ss,bp+var_20)), al));	// 82364 mov     [bp+var_20], al ;~ 2331:2ACA
cs=0x2331;eip=0x002acd; 	X(MOV(*(raddr(ss,bp+var_66)), al));	// 82365 mov     [bp+var_66], al ;~ 2331:2ACD
cs=0x2331;eip=0x002ad0; 	R(CALLF(sub_3db22,0));	// 82366 call    sub_3DB22 ;~ 2331:2AD0
cs=0x2331;eip=0x002ad5; 	R(CALLF(sub_1bc16,0));	// 82367 call    sub_1BC16 ;~ 2331:2AD5
cs=0x2331;eip=0x002ada; 	T(CMP(*(raddr(ss,bp+var_68)), 0));	// 82368 cmp     [bp+var_68], 0 ;~ 2331:2ADA
cs=0x2331;eip=0x002ade; 	R(JZ(loc_343d3));	// 82369 jz      short loc_343D3 ;~ 2331:2ADE
cs=0x2331;eip=0x002ae0; 	R(JMP(loc_34467));	// 82370 jmp     loc_34467 ;~ 2331:2AE0
loc_343d3:
	// 9684 
cs=0x2331;eip=0x002ae3; 	T(ax = bp+var_3a);	// 82374 lea     ax, [bp+var_3A] ;~ 2331:2AE3
cs=0x2331;eip=0x002ae6; 	X(PUSH(ax));	// 82375 push    ax ;~ 2331:2AE6
cs=0x2331;eip=0x002ae7; 	T(MOV(ax, 0x37));	// 82376 mov     ax, 37h ; '7' ;~ 2331:2AE7
cs=0x2331;eip=0x002aea; 	X(PUSH(ax));	// 82377 push    ax ;~ 2331:2AEA
cs=0x2331;eip=0x002aeb; 	R(CALL(sub_34255,0));	// 82378 call    sub_34255 ;~ 2331:2AEB
cs=0x2331;eip=0x002aee; 	T(CMP(*(dw*)(raddr(ss,bp+var_38)), 1));	// 82379 cmp     [bp+var_38], 1 ;~ 2331:2AEE
cs=0x2331;eip=0x002af2; 	R(JL(loc_343fb));	// 82380 jl      short loc_343FB ;~ 2331:2AF2
cs=0x2331;eip=0x002af4; 	R(JG(loc_343ed));	// 82381 jg      short loc_343ED ;~ 2331:2AF4
cs=0x2331;eip=0x002af6; 	T(CMP(*(dw*)(raddr(ss,bp+var_3a)), 0x3100));	// 82382 cmp     [bp+var_3A], 3100h ;~ 2331:2AF6
cs=0x2331;eip=0x002afb; 	R(JC(loc_343fb));	// 82383 jb      short loc_343FB ;~ 2331:2AFB
loc_343ed:
	// 9685 
cs=0x2331;eip=0x002afd; 	X(MOV(*(dw*)(raddr(ss,bp+var_3a)), 0x3100));	// 82386 mov     [bp+var_3A], 3100h ;~ 2331:2AFD
cs=0x2331;eip=0x002b02; 	X(MOV(*(dw*)(raddr(ss,bp+var_38)), 1));	// 82387 mov     [bp+var_38], 1 ;~ 2331:2B02
cs=0x2331;eip=0x002b07; 	X(MOV(*(raddr(ss,bp+var_20)), 1));	// 82388 mov     [bp+var_20], 1 ;~ 2331:2B07
loc_343fb:
	// 9686 
cs=0x2331;eip=0x002b0b; 	T(MOV(ax, 3));	// 82392 mov     ax, 3 ;~ 2331:2B0B
cs=0x2331;eip=0x002b0e; 	T(CWD);	// 82393 cwd ;~ 2331:2B0E
cs=0x2331;eip=0x002b0f; 	X(PUSH(dx));	// 82394 push    dx ;~ 2331:2B0F
cs=0x2331;eip=0x002b10; 	X(PUSH(ax));	// 82395 push    ax ;~ 2331:2B10
cs=0x2331;eip=0x002b11; 	X(PUSH(*(dw*)(raddr(ss,bp+var_38))));	// 82396 push    [bp+var_38] ;~ 2331:2B11
cs=0x2331;eip=0x002b14; 	X(PUSH(*(dw*)(raddr(ss,bp+var_3a))));	// 82397 push    [bp+var_3A] ;~ 2331:2B14
cs=0x2331;eip=0x002b17; 	R(CALLF(sub_10526,0));	// 82398 call    sub_10526 ;~ 2331:2B17
cs=0x2331;eip=0x002b1c; 	T(SUB(ax, 0x1900));	// 82399 sub     ax, 1900h ;~ 2331:2B1C
cs=0x2331;eip=0x002b1f; 	T(SBB(dx, 0));	// 82400 sbb     dx, 0 ;~ 2331:2B1F
cs=0x2331;eip=0x002b22; 	X(MOV(*(dw*)(raddr(ss,bp+var_3e)), ax));	// 82401 mov     [bp+var_3E], ax ;~ 2331:2B22
cs=0x2331;eip=0x002b25; 	X(MOV(*(dw*)(raddr(ss,bp+var_3c)), dx));	// 82402 mov     [bp+var_3C], dx ;~ 2331:2B25
cs=0x2331;eip=0x002b28; 	T(ax = bp+var_54);	// 82403 lea     ax, [bp+var_54] ;~ 2331:2B28
cs=0x2331;eip=0x002b2b; 	X(PUSH(ax));	// 82404 push    ax ;~ 2331:2B2B
cs=0x2331;eip=0x002b2c; 	T(MOV(ax, 0x41));	// 82405 mov     ax, 41h ; 'A' ;~ 2331:2B2C
cs=0x2331;eip=0x002b2f; 	X(PUSH(ax));	// 82406 push    ax ;~ 2331:2B2F
cs=0x2331;eip=0x002b30; 	R(CALL(sub_34255,0));	// 82407 call    sub_34255 ;~ 2331:2B30
cs=0x2331;eip=0x002b33; 	T(CMP(*(dw*)(raddr(ss,bp+var_52)), 1));	// 82408 cmp     [bp+var_52], 1 ;~ 2331:2B33
cs=0x2331;eip=0x002b37; 	R(JL(loc_34440));	// 82409 jl      short loc_34440 ;~ 2331:2B37
cs=0x2331;eip=0x002b39; 	R(JG(loc_34432));	// 82410 jg      short loc_34432 ;~ 2331:2B39
cs=0x2331;eip=0x002b3b; 	T(CMP(*(dw*)(raddr(ss,bp+var_54)), 0x9000));	// 82411 cmp     [bp+var_54], 9000h ;~ 2331:2B3B
cs=0x2331;eip=0x002b40; 	R(JC(loc_34440));	// 82412 jb      short loc_34440 ;~ 2331:2B40
loc_34432:
	// 9687 
cs=0x2331;eip=0x002b42; 	X(MOV(*(dw*)(raddr(ss,bp+var_54)), 0x9000));	// 82415 mov     [bp+var_54], 9000h ;~ 2331:2B42
cs=0x2331;eip=0x002b47; 	X(MOV(*(dw*)(raddr(ss,bp+var_52)), 1));	// 82416 mov     [bp+var_52], 1 ;~ 2331:2B47
cs=0x2331;eip=0x002b4c; 	X(MOV(*(raddr(ss,bp+var_66)), 1));	// 82417 mov     [bp+var_66], 1 ;~ 2331:2B4C
loc_34440:
	// 9688 
cs=0x2331;eip=0x002b50; 	T(MOV(ax, 7));	// 82421 mov     ax, 7 ;~ 2331:2B50
cs=0x2331;eip=0x002b53; 	T(CWD);	// 82422 cwd ;~ 2331:2B53
cs=0x2331;eip=0x002b54; 	X(PUSH(dx));	// 82423 push    dx ;~ 2331:2B54
cs=0x2331;eip=0x002b55; 	X(PUSH(ax));	// 82424 push    ax ;~ 2331:2B55
cs=0x2331;eip=0x002b56; 	X(PUSH(*(dw*)(raddr(ss,bp+var_52))));	// 82425 push    [bp+var_52] ;~ 2331:2B56
cs=0x2331;eip=0x002b59; 	X(PUSH(*(dw*)(raddr(ss,bp+var_54))));	// 82426 push    [bp+var_54] ;~ 2331:2B59
cs=0x2331;eip=0x002b5c; 	R(CALLF(sub_10526,0));	// 82427 call    sub_10526 ;~ 2331:2B5C
cs=0x2331;eip=0x002b61; 	T(SUB(ax, 0x0CE00));	// 82428 sub     ax, 0CE00h ;~ 2331:2B61
cs=0x2331;eip=0x002b64; 	T(SBB(dx, 0x0FFFF));	// 82429 sbb     dx, 0FFFFh ;~ 2331:2B64
cs=0x2331;eip=0x002b67; 	T(NEG(ax));	// 82430 neg     ax ;~ 2331:2B67
cs=0x2331;eip=0x002b69; 	T(ADC(dx, 0));	// 82431 adc     dx, 0 ;~ 2331:2B69
cs=0x2331;eip=0x002b6c; 	T(NEG(dx));	// 82432 neg     dx ;~ 2331:2B6C
cs=0x2331;eip=0x002b6e; 	X(MOV(*(dw*)(raddr(ss,bp+var_58)), ax));	// 82433 mov     [bp+var_58], ax ;~ 2331:2B6E
cs=0x2331;eip=0x002b71; 	X(MOV(*(dw*)(raddr(ss,bp+var_56)), dx));	// 82434 mov     [bp+var_56], dx ;~ 2331:2B71
cs=0x2331;eip=0x002b74; 	R(JMP(loc_3476d));	// 82435 jmp     loc_3476D ;~ 2331:2B74
loc_34467:
	// 9689 
cs=0x2331;eip=0x002b77; 	T(CMP(*(raddr(ss,bp+var_68)), 3));	// 82439 cmp     [bp+var_68], 3 ;~ 2331:2B77
cs=0x2331;eip=0x002b7b; 	R(JZ(loc_34470));	// 82440 jz      short loc_34470 ;~ 2331:2B7B
cs=0x2331;eip=0x002b7d; 	R(JMP(loc_3450c));	// 82441 jmp     loc_3450C ;~ 2331:2B7D
loc_34470:
	// 9690 
cs=0x2331;eip=0x002b80; 	T(MOV(al, 8));	// 82445 mov     al, 8 ;~ 2331:2B80
cs=0x2331;eip=0x002b82; 	X(MOV(unk_4a43f, al));	// 82446 mov     byte ptr unk_4A43F, al ;~ 2331:2B82
cs=0x2331;eip=0x002b85; 	X(MOV(unk_4a43e, al));	// 82447 mov     byte ptr unk_4A43E, al ;~ 2331:2B85
cs=0x2331;eip=0x002b88; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 82448 mov     ax, [bp+var_10] ;~ 2331:2B88
cs=0x2331;eip=0x002b8b; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_e))));	// 82449 mov     dx, [bp+var_E] ;~ 2331:2B8B
cs=0x2331;eip=0x002b8e; 	T(MOV(cl, 8));	// 82450 mov     cl, 8 ;~ 2331:2B8E
cs=0x2331;eip=0x002b90; 	R(CALLF(sub_10240,0));	// 82451 call    sub_10240 ;~ 2331:2B90
cs=0x2331;eip=0x002b95; 	X(MOV(*(dw*)(raddr(ss,bp+var_26)), ax));	// 82452 mov     [bp+var_26], ax ;~ 2331:2B95
cs=0x2331;eip=0x002b98; 	T(CWD);	// 82453 cwd ;~ 2331:2B98
cs=0x2331;eip=0x002b99; 	T(XOR(ax, dx));	// 82454 xor     ax, dx ;~ 2331:2B99
cs=0x2331;eip=0x002b9b; 	T(SUB(ax, dx));	// 82455 sub     ax, dx ;~ 2331:2B9B
cs=0x2331;eip=0x002b9d; 	T(MOV(cx, 2));	// 82456 mov     cx, 2 ;~ 2331:2B9D
cs=0x2331;eip=0x002ba0; 	T(SAR(ax, cl));	// 82457 sar     ax, cl ;~ 2331:2BA0
cs=0x2331;eip=0x002ba2; 	T(XOR(ax, dx));	// 82458 xor     ax, dx ;~ 2331:2BA2
cs=0x2331;eip=0x002ba4; 	T(SUB(ax, dx));	// 82459 sub     ax, dx ;~ 2331:2BA4
cs=0x2331;eip=0x002ba6; 	T(INC(ax));	// 82460 inc     ax ;~ 2331:2BA6
cs=0x2331;eip=0x002ba7; 	X(MOV(*(dw*)(raddr(ss,bp+var_26)), ax));	// 82461 mov     [bp+var_26], ax ;~ 2331:2BA7
cs=0x2331;eip=0x002baa; 	T(ax = bp+var_10);	// 82462 lea     ax, [bp+var_10] ;~ 2331:2BAA
cs=0x2331;eip=0x002bad; 	X(PUSH(ax));	// 82463 push    ax ;~ 2331:2BAD
cs=0x2331;eip=0x002bae; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_26))));	// 82464 mov     ax, [bp+var_26] ;~ 2331:2BAE
cs=0x2331;eip=0x002bb1; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_4))));	// 82465 imul    [bp+var_4] ;~ 2331:2BB1
cs=0x2331;eip=0x002bb4; 	X(PUSH(ax));	// 82466 push    ax ;~ 2331:2BB4
cs=0x2331;eip=0x002bb5; 	R(CALL(sub_34255,0));	// 82467 call    sub_34255 ;~ 2331:2BB5
cs=0x2331;eip=0x002bb8; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), 1));	// 82468 cmp     [bp+var_E], 1 ;~ 2331:2BB8
cs=0x2331;eip=0x002bbc; 	R(JL(loc_344d5));	// 82469 jl      short loc_344D5 ;~ 2331:2BBC
cs=0x2331;eip=0x002bbe; 	R(JG(loc_344b7));	// 82470 jg      short loc_344B7 ;~ 2331:2BBE
cs=0x2331;eip=0x002bc0; 	T(CMP(*(dw*)(raddr(ss,bp+var_10)), 0x2C00));	// 82471 cmp     [bp+var_10], 2C00h ;~ 2331:2BC0
cs=0x2331;eip=0x002bc5; 	R(JC(loc_344d5));	// 82472 jb      short loc_344D5 ;~ 2331:2BC5
loc_344b7:
	// 9691 
cs=0x2331;eip=0x002bc7; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 1));	// 82475 cmp     [bp+var_4], 1 ;~ 2331:2BC7
cs=0x2331;eip=0x002bcb; 	R(JNZ(loc_344d5));	// 82476 jnz     short loc_344D5 ;~ 2331:2BCB
cs=0x2331;eip=0x002bcd; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), 0x2C00));	// 82477 mov     [bp+var_10], 2C00h ;~ 2331:2BCD
cs=0x2331;eip=0x002bd2; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 1));	// 82478 mov     [bp+var_E], 1 ;~ 2331:2BD2
cs=0x2331;eip=0x002bd7; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 82479 mov     [bp+var_4], 0 ;~ 2331:2BD7
cs=0x2331;eip=0x002bdc; 	T(MOV(ax, *(dw*)((&unk_57058))));	// 82480 mov     ax, word ptr unk_57058 ;~ 2331:2BDC
cs=0x2331;eip=0x002bdf; 	T(ADD(ax, 8));	// 82481 add     ax, 8 ;~ 2331:2BDF
cs=0x2331;eip=0x002be2; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 82482 mov     [bp+var_22], ax ;~ 2331:2BE2
loc_344d5:
	// 9692 
cs=0x2331;eip=0x002be5; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), 0));	// 82486 cmp     [bp+var_E], 0 ;~ 2331:2BE5
cs=0x2331;eip=0x002be9; 	R(JG(loc_344ee));	// 82487 jg      short loc_344EE ;~ 2331:2BE9
cs=0x2331;eip=0x002beb; 	R(JL(loc_344e4));	// 82488 jl      short loc_344E4 ;~ 2331:2BEB
cs=0x2331;eip=0x002bed; 	T(CMP(*(dw*)(raddr(ss,bp+var_10)), 0x700));	// 82489 cmp     [bp+var_10], 700h ;~ 2331:2BED
cs=0x2331;eip=0x002bf2; 	R(JA(loc_344ee));	// 82490 ja      short loc_344EE ;~ 2331:2BF2
loc_344e4:
	// 9693 
cs=0x2331;eip=0x002bf4; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), 0x700));	// 82493 mov     [bp+var_10], 700h ;~ 2331:2BF4
cs=0x2331;eip=0x002bf9; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0));	// 82494 mov     [bp+var_E], 0 ;~ 2331:2BF9
loc_344ee:
	// 9694 
cs=0x2331;eip=0x002bfe; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 82498 cmp     [bp+var_4], 0 ;~ 2331:2BFE
cs=0x2331;eip=0x002c02; 	R(JNZ(loc_34501));	// 82499 jnz     short loc_34501 ;~ 2331:2C02
cs=0x2331;eip=0x002c04; 	T(MOV(ax, *(dw*)((&unk_57058))));	// 82500 mov     ax, word ptr unk_57058 ;~ 2331:2C04
cs=0x2331;eip=0x002c07; 	T(CMP(*(dw*)(raddr(ss,bp+var_22)), ax));	// 82501 cmp     [bp+var_22], ax ;~ 2331:2C07
cs=0x2331;eip=0x002c0a; 	R(JA(loc_34501));	// 82502 ja      short loc_34501 ;~ 2331:2C0A
cs=0x2331;eip=0x002c0c; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0x0FFFF));	// 82503 mov     [bp+var_4], 0FFFFh ;~ 2331:2C0C
loc_34501:
	// 9695 
cs=0x2331;eip=0x002c11; 	T(MOV(al, 1));	// 82507 mov     al, 1 ;~ 2331:2C11
cs=0x2331;eip=0x002c13; 	X(MOV(*(raddr(ss,bp+var_20)), al));	// 82508 mov     [bp+var_20], al ;~ 2331:2C13
cs=0x2331;eip=0x002c16; 	X(MOV(*(raddr(ss,bp+var_66)), al));	// 82509 mov     [bp+var_66], al ;~ 2331:2C16
cs=0x2331;eip=0x002c19; 	R(JMP(loc_3476d));	// 82510 jmp     loc_3476D ;~ 2331:2C19
loc_3450c:
	// 9696 
cs=0x2331;eip=0x002c1c; 	T(CMP(*(raddr(ss,bp+var_68)), 1));	// 82514 cmp     [bp+var_68], 1 ;~ 2331:2C1C
cs=0x2331;eip=0x002c20; 	R(JZ(loc_34501));	// 82515 jz      short loc_34501 ;~ 2331:2C20
cs=0x2331;eip=0x002c22; 	T(CMP(*(raddr(ss,bp+var_68)), 4));	// 82516 cmp     [bp+var_68], 4 ;~ 2331:2C22
cs=0x2331;eip=0x002c26; 	R(JZ(loc_34501));	// 82517 jz      short loc_34501 ;~ 2331:2C26
cs=0x2331;eip=0x002c28; 	T(CMP(*(raddr(ss,bp+var_68)), 5));	// 82518 cmp     [bp+var_68], 5 ;~ 2331:2C28
cs=0x2331;eip=0x002c2c; 	R(JZ(loc_34521));	// 82519 jz      short loc_34521 ;~ 2331:2C2C
cs=0x2331;eip=0x002c2e; 	R(JMP(loc_3476d));	// 82520 jmp     loc_3476D ;~ 2331:2C2E
loc_34521:
	// 9697 
cs=0x2331;eip=0x002c31; 	T(ax = bp+var_42);	// 82524 lea     ax, [bp+var_42] ;~ 2331:2C31
cs=0x2331;eip=0x002c34; 	X(PUSH(ax));	// 82525 push    ax ;~ 2331:2C34
cs=0x2331;eip=0x002c35; 	T(MOV(ax, 0x50));	// 82526 mov     ax, 50h ; 'P' ;~ 2331:2C35
cs=0x2331;eip=0x002c38; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_4a))));	// 82527 imul    [bp+var_4A] ;~ 2331:2C38
cs=0x2331;eip=0x002c3b; 	X(PUSH(ax));	// 82528 push    ax ;~ 2331:2C3B
cs=0x2331;eip=0x002c3c; 	R(CALL(sub_34255,0));	// 82529 call    sub_34255 ;~ 2331:2C3C
cs=0x2331;eip=0x002c3f; 	T(ax = bp+var_3e);	// 82530 lea     ax, [bp+var_3E] ;~ 2331:2C3F
cs=0x2331;eip=0x002c42; 	X(PUSH(ax));	// 82531 push    ax ;~ 2331:2C42
cs=0x2331;eip=0x002c43; 	T(MOV(ax, 0x50));	// 82532 mov     ax, 50h ; 'P' ;~ 2331:2C43
cs=0x2331;eip=0x002c46; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_64))));	// 82533 imul    [bp+var_64] ;~ 2331:2C46
cs=0x2331;eip=0x002c49; 	X(PUSH(ax));	// 82534 push    ax ;~ 2331:2C49
cs=0x2331;eip=0x002c4a; 	R(CALL(sub_34255,0));	// 82535 call    sub_34255 ;~ 2331:2C4A
cs=0x2331;eip=0x002c4d; 	T(ax = bp+var_3a);	// 82536 lea     ax, [bp+var_3A] ;~ 2331:2C4D
cs=0x2331;eip=0x002c50; 	X(PUSH(ax));	// 82537 push    ax ;~ 2331:2C50
cs=0x2331;eip=0x002c51; 	T(MOV(ax, 0x50));	// 82538 mov     ax, 50h ; 'P' ;~ 2331:2C51
cs=0x2331;eip=0x002c54; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_6c))));	// 82539 imul    [bp+var_6C] ;~ 2331:2C54
cs=0x2331;eip=0x002c57; 	X(PUSH(ax));	// 82540 push    ax ;~ 2331:2C57
cs=0x2331;eip=0x002c58; 	R(CALL(sub_34255,0));	// 82541 call    sub_34255 ;~ 2331:2C58
cs=0x2331;eip=0x002c5b; 	T(CMP(*(dw*)(raddr(ss,bp+var_40)), 0x0FFFF));	// 82542 cmp     [bp+var_40], 0FFFFh ;~ 2331:2C5B
cs=0x2331;eip=0x002c5f; 	R(JG(loc_34569));	// 82543 jg      short loc_34569 ;~ 2331:2C5F
cs=0x2331;eip=0x002c61; 	R(JL(loc_3455a));	// 82544 jl      short loc_3455A ;~ 2331:2C61
cs=0x2331;eip=0x002c63; 	T(CMP(*(dw*)(raddr(ss,bp+var_42)), 0x0B500));	// 82545 cmp     [bp+var_42], 0B500h ;~ 2331:2C63
cs=0x2331;eip=0x002c68; 	R(JNC(loc_34569));	// 82546 jnb     short loc_34569 ;~ 2331:2C68
loc_3455a:
	// 9698 
cs=0x2331;eip=0x002c6a; 	X(MOV(*(dw*)(raddr(ss,bp+var_42)), 0x0B500));	// 82549 mov     [bp+var_42], 0B500h ;~ 2331:2C6A
cs=0x2331;eip=0x002c6f; 	X(MOV(*(dw*)(raddr(ss,bp+var_40)), 0x0FFFF));	// 82550 mov     [bp+var_40], 0FFFFh ;~ 2331:2C6F
cs=0x2331;eip=0x002c74; 	X(MOV(*(dw*)(raddr(ss,bp+var_4a)), 1));	// 82551 mov     [bp+var_4A], 1 ;~ 2331:2C74
loc_34569:
	// 9699 
cs=0x2331;eip=0x002c79; 	T(CMP(*(dw*)(raddr(ss,bp+var_40)), 0));	// 82555 cmp     [bp+var_40], 0 ;~ 2331:2C79
cs=0x2331;eip=0x002c7d; 	R(JL(loc_34587));	// 82556 jl      short loc_34587 ;~ 2331:2C7D
cs=0x2331;eip=0x002c7f; 	R(JG(loc_34578));	// 82557 jg      short loc_34578 ;~ 2331:2C7F
cs=0x2331;eip=0x002c81; 	T(CMP(*(dw*)(raddr(ss,bp+var_42)), 0x4B00));	// 82558 cmp     [bp+var_42], 4B00h ;~ 2331:2C81
cs=0x2331;eip=0x002c86; 	R(JBE(loc_34587));	// 82559 jbe     short loc_34587 ;~ 2331:2C86
loc_34578:
	// 9700 
cs=0x2331;eip=0x002c88; 	X(MOV(*(dw*)(raddr(ss,bp+var_42)), 0x4B00));	// 82562 mov     [bp+var_42], 4B00h ;~ 2331:2C88
cs=0x2331;eip=0x002c8d; 	X(MOV(*(dw*)(raddr(ss,bp+var_40)), 0));	// 82563 mov     [bp+var_40], 0 ;~ 2331:2C8D
cs=0x2331;eip=0x002c92; 	X(MOV(*(dw*)(raddr(ss,bp+var_4a)), 0x0FFFF));	// 82564 mov     [bp+var_4A], 0FFFFh ;~ 2331:2C92
loc_34587:
	// 9701 
cs=0x2331;eip=0x002c97; 	T(CMP(*(dw*)(raddr(ss,bp+var_3c)), 0x0FFFF));	// 82568 cmp     [bp+var_3C], 0FFFFh ;~ 2331:2C97
cs=0x2331;eip=0x002c9b; 	R(JG(loc_345a5));	// 82569 jg      short loc_345A5 ;~ 2331:2C9B
cs=0x2331;eip=0x002c9d; 	R(JL(loc_34596));	// 82570 jl      short loc_34596 ;~ 2331:2C9D
cs=0x2331;eip=0x002c9f; 	T(CMP(*(dw*)(raddr(ss,bp+var_3e)), 0x0B500));	// 82571 cmp     [bp+var_3E], 0B500h ;~ 2331:2C9F
cs=0x2331;eip=0x002ca4; 	R(JNC(loc_345a5));	// 82572 jnb     short loc_345A5 ;~ 2331:2CA4
loc_34596:
	// 9702 
cs=0x2331;eip=0x002ca6; 	X(MOV(*(dw*)(raddr(ss,bp+var_3e)), 0x0B500));	// 82575 mov     [bp+var_3E], 0B500h ;~ 2331:2CA6
cs=0x2331;eip=0x002cab; 	X(MOV(*(dw*)(raddr(ss,bp+var_3c)), 0x0FFFF));	// 82576 mov     [bp+var_3C], 0FFFFh ;~ 2331:2CAB
cs=0x2331;eip=0x002cb0; 	X(MOV(*(dw*)(raddr(ss,bp+var_64)), 1));	// 82577 mov     [bp+var_64], 1 ;~ 2331:2CB0
loc_345a5:
	// 9703 
cs=0x2331;eip=0x002cb5; 	T(CMP(*(dw*)(raddr(ss,bp+var_3c)), 0));	// 82581 cmp     [bp+var_3C], 0 ;~ 2331:2CB5
cs=0x2331;eip=0x002cb9; 	R(JL(loc_345c3));	// 82582 jl      short loc_345C3 ;~ 2331:2CB9
cs=0x2331;eip=0x002cbb; 	R(JG(loc_345b4));	// 82583 jg      short loc_345B4 ;~ 2331:2CBB
cs=0x2331;eip=0x002cbd; 	T(CMP(*(dw*)(raddr(ss,bp+var_3e)), 0x4B00));	// 82584 cmp     [bp+var_3E], 4B00h ;~ 2331:2CBD
cs=0x2331;eip=0x002cc2; 	R(JBE(loc_345c3));	// 82585 jbe     short loc_345C3 ;~ 2331:2CC2
loc_345b4:
	// 9704 
cs=0x2331;eip=0x002cc4; 	X(MOV(*(dw*)(raddr(ss,bp+var_3e)), 0x4B00));	// 82588 mov     [bp+var_3E], 4B00h ;~ 2331:2CC4
cs=0x2331;eip=0x002cc9; 	X(MOV(*(dw*)(raddr(ss,bp+var_3c)), 0));	// 82589 mov     [bp+var_3C], 0 ;~ 2331:2CC9
cs=0x2331;eip=0x002cce; 	X(MOV(*(dw*)(raddr(ss,bp+var_64)), 0x0FFFF));	// 82590 mov     [bp+var_64], 0FFFFh ;~ 2331:2CCE
loc_345c3:
	// 9705 
cs=0x2331;eip=0x002cd3; 	T(CMP(*(dw*)(raddr(ss,bp+var_38)), 0));	// 82594 cmp     [bp+var_38], 0 ;~ 2331:2CD3
cs=0x2331;eip=0x002cd7; 	R(JG(loc_345e9));	// 82595 jg      short loc_345E9 ;~ 2331:2CD7
cs=0x2331;eip=0x002cd9; 	R(JL(loc_345d2));	// 82596 jl      short loc_345D2 ;~ 2331:2CD9
cs=0x2331;eip=0x002cdb; 	T(CMP(*(dw*)(raddr(ss,bp+var_3a)), 0x4B00));	// 82597 cmp     [bp+var_3A], 4B00h ;~ 2331:2CDB
cs=0x2331;eip=0x002ce0; 	R(JNC(loc_345e9));	// 82598 jnb     short loc_345E9 ;~ 2331:2CE0
loc_345d2:
	// 9706 
cs=0x2331;eip=0x002ce2; 	T(MOV(ax, *(dw*)((&unk_57058))));	// 82601 mov     ax, word ptr unk_57058 ;~ 2331:2CE2
cs=0x2331;eip=0x002ce5; 	T(CMP(*(dw*)(raddr(ss,bp+var_24)), ax));	// 82602 cmp     [bp+var_24], ax ;~ 2331:2CE5
cs=0x2331;eip=0x002ce8; 	R(JBE(loc_345e9));	// 82603 jbe     short loc_345E9 ;~ 2331:2CE8
cs=0x2331;eip=0x002cea; 	X(MOV(*(dw*)(raddr(ss,bp+var_3a)), 0x4B00));	// 82604 mov     [bp+var_3A], 4B00h ;~ 2331:2CEA
cs=0x2331;eip=0x002cef; 	X(MOV(*(dw*)(raddr(ss,bp+var_38)), 0));	// 82605 mov     [bp+var_38], 0 ;~ 2331:2CEF
cs=0x2331;eip=0x002cf4; 	X(MOV(*(dw*)(raddr(ss,bp+var_6c)), 1));	// 82606 mov     [bp+var_6C], 1 ;~ 2331:2CF4
loc_345e9:
	// 9707 
cs=0x2331;eip=0x002cf9; 	T(CMP(*(dw*)(raddr(ss,bp+var_38)), 1));	// 82610 cmp     [bp+var_38], 1 ;~ 2331:2CF9
cs=0x2331;eip=0x002cfd; 	R(JL(loc_34607));	// 82611 jl      short loc_34607 ;~ 2331:2CFD
cs=0x2331;eip=0x002cff; 	R(JG(loc_345f8));	// 82612 jg      short loc_345F8 ;~ 2331:2CFF
cs=0x2331;eip=0x002d01; 	T(CMP(*(dw*)(raddr(ss,bp+var_3a)), 0x0C200));	// 82613 cmp     [bp+var_3A], 0C200h ;~ 2331:2D01
cs=0x2331;eip=0x002d06; 	R(JBE(loc_34607));	// 82614 jbe     short loc_34607 ;~ 2331:2D06
loc_345f8:
	// 9708 
cs=0x2331;eip=0x002d08; 	X(MOV(*(dw*)(raddr(ss,bp+var_3a)), 0x0C200));	// 82617 mov     [bp+var_3A], 0C200h ;~ 2331:2D08
cs=0x2331;eip=0x002d0d; 	X(MOV(*(dw*)(raddr(ss,bp+var_38)), 1));	// 82618 mov     [bp+var_38], 1 ;~ 2331:2D0D
cs=0x2331;eip=0x002d12; 	X(MOV(*(dw*)(raddr(ss,bp+var_6c)), 0x0FFFF));	// 82619 mov     [bp+var_6C], 0FFFFh ;~ 2331:2D12
loc_34607:
	// 9709 
cs=0x2331;eip=0x002d17; 	T(ax = bp+var_5c);	// 82623 lea     ax, [bp+var_5C] ;~ 2331:2D17
cs=0x2331;eip=0x002d1a; 	X(PUSH(ax));	// 82624 push    ax ;~ 2331:2D1A
cs=0x2331;eip=0x002d1b; 	T(MOV(ax, 0x37));	// 82625 mov     ax, 37h ; '7' ;~ 2331:2D1B
cs=0x2331;eip=0x002d1e; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_6a))));	// 82626 imul    [bp+var_6A] ;~ 2331:2D1E
cs=0x2331;eip=0x002d21; 	X(PUSH(ax));	// 82627 push    ax ;~ 2331:2D21
cs=0x2331;eip=0x002d22; 	R(CALL(sub_34255,0));	// 82628 call    sub_34255 ;~ 2331:2D22
cs=0x2331;eip=0x002d25; 	T(ax = bp+var_58);	// 82629 lea     ax, [bp+var_58] ;~ 2331:2D25
cs=0x2331;eip=0x002d28; 	X(PUSH(ax));	// 82630 push    ax ;~ 2331:2D28
cs=0x2331;eip=0x002d29; 	T(MOV(ax, 0x37));	// 82631 mov     ax, 37h ; '7' ;~ 2331:2D29
cs=0x2331;eip=0x002d2c; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_c8))));	// 82632 imul    [bp+var_C8] ;~ 2331:2D2C
cs=0x2331;eip=0x002d30; 	X(PUSH(ax));	// 82633 push    ax ;~ 2331:2D30
cs=0x2331;eip=0x002d31; 	R(CALL(sub_34255,0));	// 82634 call    sub_34255 ;~ 2331:2D31
cs=0x2331;eip=0x002d34; 	T(ax = bp+var_54);	// 82635 lea     ax, [bp+var_54] ;~ 2331:2D34
cs=0x2331;eip=0x002d37; 	X(PUSH(ax));	// 82636 push    ax ;~ 2331:2D37
cs=0x2331;eip=0x002d38; 	T(MOV(ax, 0x37));	// 82637 mov     ax, 37h ; '7' ;~ 2331:2D38
cs=0x2331;eip=0x002d3b; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_2))));	// 82638 imul    [bp+var_2] ;~ 2331:2D3B
cs=0x2331;eip=0x002d3e; 	X(PUSH(ax));	// 82639 push    ax ;~ 2331:2D3E
cs=0x2331;eip=0x002d3f; 	R(CALL(sub_34255,0));	// 82640 call    sub_34255 ;~ 2331:2D3F
cs=0x2331;eip=0x002d42; 	T(CMP(*(dw*)(raddr(ss,bp+var_5a)), 0x0FFFF));	// 82641 cmp     [bp+var_5A], 0FFFFh ;~ 2331:2D42
cs=0x2331;eip=0x002d46; 	R(JG(loc_34650));	// 82642 jg      short loc_34650 ;~ 2331:2D46
cs=0x2331;eip=0x002d48; 	R(JL(loc_34641));	// 82643 jl      short loc_34641 ;~ 2331:2D48
cs=0x2331;eip=0x002d4a; 	T(CMP(*(dw*)(raddr(ss,bp+var_5c)), 0x9C00));	// 82644 cmp     [bp+var_5C], 9C00h ;~ 2331:2D4A
cs=0x2331;eip=0x002d4f; 	R(JNC(loc_34650));	// 82645 jnb     short loc_34650 ;~ 2331:2D4F
loc_34641:
	// 9710 
cs=0x2331;eip=0x002d51; 	X(MOV(*(dw*)(raddr(ss,bp+var_5c)), 0x9C00));	// 82648 mov     [bp+var_5C], 9C00h ;~ 2331:2D51
cs=0x2331;eip=0x002d56; 	X(MOV(*(dw*)(raddr(ss,bp+var_5a)), 0x0FFFF));	// 82649 mov     [bp+var_5A], 0FFFFh ;~ 2331:2D56
cs=0x2331;eip=0x002d5b; 	X(MOV(*(dw*)(raddr(ss,bp+var_6a)), 1));	// 82650 mov     [bp+var_6A], 1 ;~ 2331:2D5B
loc_34650:
	// 9711 
cs=0x2331;eip=0x002d60; 	T(CMP(*(dw*)(raddr(ss,bp+var_5a)), 0));	// 82654 cmp     [bp+var_5A], 0 ;~ 2331:2D60
cs=0x2331;eip=0x002d64; 	R(JL(loc_3466e));	// 82655 jl      short loc_3466E ;~ 2331:2D64
cs=0x2331;eip=0x002d66; 	R(JG(loc_3465f));	// 82656 jg      short loc_3465F ;~ 2331:2D66
cs=0x2331;eip=0x002d68; 	T(CMP(*(dw*)(raddr(ss,bp+var_5c)), 0x6400));	// 82657 cmp     [bp+var_5C], 6400h ;~ 2331:2D68
cs=0x2331;eip=0x002d6d; 	R(JBE(loc_3466e));	// 82658 jbe     short loc_3466E ;~ 2331:2D6D
loc_3465f:
	// 9712 
cs=0x2331;eip=0x002d6f; 	X(MOV(*(dw*)(raddr(ss,bp+var_5c)), 0x6400));	// 82661 mov     [bp+var_5C], 6400h ;~ 2331:2D6F
cs=0x2331;eip=0x002d74; 	X(MOV(*(dw*)(raddr(ss,bp+var_5a)), 0));	// 82662 mov     [bp+var_5A], 0 ;~ 2331:2D74
cs=0x2331;eip=0x002d79; 	X(MOV(*(dw*)(raddr(ss,bp+var_6a)), 0x0FFFF));	// 82663 mov     [bp+var_6A], 0FFFFh ;~ 2331:2D79
loc_3466e:
	// 9713 
cs=0x2331;eip=0x002d7e; 	T(CMP(*(dw*)(raddr(ss,bp+var_56)), 0x0FFFF));	// 82667 cmp     [bp+var_56], 0FFFFh ;~ 2331:2D7E
cs=0x2331;eip=0x002d82; 	R(JG(loc_3468d));	// 82668 jg      short loc_3468D ;~ 2331:2D82
cs=0x2331;eip=0x002d84; 	R(JL(loc_3467d));	// 82669 jl      short loc_3467D ;~ 2331:2D84
cs=0x2331;eip=0x002d86; 	T(CMP(*(dw*)(raddr(ss,bp+var_58)), 0x9C00));	// 82670 cmp     [bp+var_58], 9C00h ;~ 2331:2D86
cs=0x2331;eip=0x002d8b; 	R(JNC(loc_3468d));	// 82671 jnb     short loc_3468D ;~ 2331:2D8B
loc_3467d:
	// 9714 
cs=0x2331;eip=0x002d8d; 	X(MOV(*(dw*)(raddr(ss,bp+var_58)), 0x9C00));	// 82674 mov     [bp+var_58], 9C00h ;~ 2331:2D8D
cs=0x2331;eip=0x002d92; 	X(MOV(*(dw*)(raddr(ss,bp+var_56)), 0x0FFFF));	// 82675 mov     [bp+var_56], 0FFFFh ;~ 2331:2D92
cs=0x2331;eip=0x002d97; 	X(MOV(*(dw*)(raddr(ss,bp+var_c8)), 1));	// 82676 mov     [bp+var_C8], 1 ;~ 2331:2D97
loc_3468d:
	// 9715 
cs=0x2331;eip=0x002d9d; 	T(CMP(*(dw*)(raddr(ss,bp+var_56)), 0));	// 82680 cmp     [bp+var_56], 0 ;~ 2331:2D9D
cs=0x2331;eip=0x002da1; 	R(JL(loc_346ac));	// 82681 jl      short loc_346AC ;~ 2331:2DA1
cs=0x2331;eip=0x002da3; 	R(JG(loc_3469c));	// 82682 jg      short loc_3469C ;~ 2331:2DA3
cs=0x2331;eip=0x002da5; 	T(CMP(*(dw*)(raddr(ss,bp+var_58)), 0x6400));	// 82683 cmp     [bp+var_58], 6400h ;~ 2331:2DA5
cs=0x2331;eip=0x002daa; 	R(JBE(loc_346ac));	// 82684 jbe     short loc_346AC ;~ 2331:2DAA
loc_3469c:
	// 9716 
cs=0x2331;eip=0x002dac; 	X(MOV(*(dw*)(raddr(ss,bp+var_58)), 0x6400));	// 82687 mov     [bp+var_58], 6400h ;~ 2331:2DAC
cs=0x2331;eip=0x002db1; 	X(MOV(*(dw*)(raddr(ss,bp+var_56)), 0));	// 82688 mov     [bp+var_56], 0 ;~ 2331:2DB1
cs=0x2331;eip=0x002db6; 	X(MOV(*(dw*)(raddr(ss,bp+var_c8)), 0x0FFFF));	// 82689 mov     [bp+var_C8], 0FFFFh ;~ 2331:2DB6
loc_346ac:
	// 9717 
cs=0x2331;eip=0x002dbc; 	T(CMP(*(dw*)(raddr(ss,bp+var_52)), 0));	// 82693 cmp     [bp+var_52], 0 ;~ 2331:2DBC
cs=0x2331;eip=0x002dc0; 	R(JG(loc_346d2));	// 82694 jg      short loc_346D2 ;~ 2331:2DC0
cs=0x2331;eip=0x002dc2; 	R(JL(loc_346bb));	// 82695 jl      short loc_346BB ;~ 2331:2DC2
cs=0x2331;eip=0x002dc4; 	T(CMP(*(dw*)(raddr(ss,bp+var_54)), 0x3200));	// 82696 cmp     [bp+var_54], 3200h ;~ 2331:2DC4
cs=0x2331;eip=0x002dc9; 	R(JNC(loc_346d2));	// 82697 jnb     short loc_346D2 ;~ 2331:2DC9
loc_346bb:
	// 9718 
cs=0x2331;eip=0x002dcb; 	T(MOV(ax, *(dw*)((&unk_57058))));	// 82700 mov     ax, word ptr unk_57058 ;~ 2331:2DCB
cs=0x2331;eip=0x002dce; 	T(CMP(*(dw*)(raddr(ss,bp+var_24)), ax));	// 82701 cmp     [bp+var_24], ax ;~ 2331:2DCE
cs=0x2331;eip=0x002dd1; 	R(JBE(loc_346d2));	// 82702 jbe     short loc_346D2 ;~ 2331:2DD1
cs=0x2331;eip=0x002dd3; 	X(MOV(*(dw*)(raddr(ss,bp+var_54)), 0x3200));	// 82703 mov     [bp+var_54], 3200h ;~ 2331:2DD3
cs=0x2331;eip=0x002dd8; 	X(MOV(*(dw*)(raddr(ss,bp+var_52)), 0));	// 82704 mov     [bp+var_52], 0 ;~ 2331:2DD8
cs=0x2331;eip=0x002ddd; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 1));	// 82705 mov     [bp+var_2], 1 ;~ 2331:2DDD
loc_346d2:
	// 9719 
cs=0x2331;eip=0x002de2; 	T(CMP(*(dw*)(raddr(ss,bp+var_52)), 1));	// 82709 cmp     [bp+var_52], 1 ;~ 2331:2DE2
cs=0x2331;eip=0x002de6; 	R(JL(loc_346f0));	// 82710 jl      short loc_346F0 ;~ 2331:2DE6
cs=0x2331;eip=0x002de8; 	R(JG(loc_346e1));	// 82711 jg      short loc_346E1 ;~ 2331:2DE8
cs=0x2331;eip=0x002dea; 	T(CMP(*(dw*)(raddr(ss,bp+var_54)), 0x0C200));	// 82712 cmp     [bp+var_54], 0C200h ;~ 2331:2DEA
cs=0x2331;eip=0x002def; 	R(JBE(loc_346f0));	// 82713 jbe     short loc_346F0 ;~ 2331:2DEF
loc_346e1:
	// 9720 
cs=0x2331;eip=0x002df1; 	X(MOV(*(dw*)(raddr(ss,bp+var_54)), 0x0C200));	// 82716 mov     [bp+var_54], 0C200h ;~ 2331:2DF1
cs=0x2331;eip=0x002df6; 	X(MOV(*(dw*)(raddr(ss,bp+var_52)), 1));	// 82717 mov     [bp+var_52], 1 ;~ 2331:2DF6
cs=0x2331;eip=0x002dfb; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x0FFFF));	// 82718 mov     [bp+var_2], 0FFFFh ;~ 2331:2DFB
loc_346f0:
	// 9721 
cs=0x2331;eip=0x002e00; 	T(MOV(ax, 0x280));	// 82722 mov     ax, 280h ;~ 2331:2E00
cs=0x2331;eip=0x002e03; 	X(PUSH(ax));	// 82723 push    ax ;~ 2331:2E03
cs=0x2331;eip=0x002e04; 	X(PUSH(*(dw*)((&unk_57056))));	// 82724 push    word ptr unk_57056 ;~ 2331:2E04
cs=0x2331;eip=0x002e08; 	R(CALLF(sub_2f002,0));	// 82725 call    sub_2F002 ;~ 2331:2E08
cs=0x2331;eip=0x002e0d; 	T(MOV(cl, 8));	// 82726 mov     cl, 8 ;~ 2331:2E0D
cs=0x2331;eip=0x002e0f; 	R(CALLF(sub_10240,0));	// 82727 call    sub_10240 ;~ 2331:2E0F
cs=0x2331;eip=0x002e14; 	X(MOV(*(dw*)(raddr(ss,bp+var_26)), ax));	// 82728 mov     [bp+var_26], ax ;~ 2331:2E14
cs=0x2331;eip=0x002e17; 	T(ax = bp+var_36);	// 82729 lea     ax, [bp+var_36] ;~ 2331:2E17
cs=0x2331;eip=0x002e1a; 	X(PUSH(ax));	// 82730 push    ax ;~ 2331:2E1A
cs=0x2331;eip=0x002e1b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_26))));	// 82731 push    [bp+var_26] ;~ 2331:2E1B
cs=0x2331;eip=0x002e1e; 	R(CALLF(sub_24cde,0));	// 82732 call    sub_24CDE ;~ 2331:2E1E
cs=0x2331;eip=0x002e23; 	T(ax = bp+var_34);	// 82733 lea     ax, [bp+var_34] ;~ 2331:2E23
cs=0x2331;eip=0x002e26; 	X(PUSH(ax));	// 82734 push    ax ;~ 2331:2E26
cs=0x2331;eip=0x002e27; 	X(PUSH(*(dw*)(raddr(ss,bp+var_26))));	// 82735 push    [bp+var_26] ;~ 2331:2E27
cs=0x2331;eip=0x002e2a; 	R(CALLF(sub_24cde,0));	// 82736 call    sub_24CDE ;~ 2331:2E2A
cs=0x2331;eip=0x002e2f; 	T(ax = bp+var_32);	// 82737 lea     ax, [bp+var_32] ;~ 2331:2E2F
cs=0x2331;eip=0x002e32; 	X(PUSH(ax));	// 82738 push    ax ;~ 2331:2E32
cs=0x2331;eip=0x002e33; 	X(PUSH(*(dw*)(raddr(ss,bp+var_26))));	// 82739 push    [bp+var_26] ;~ 2331:2E33
cs=0x2331;eip=0x002e36; 	R(CALLF(sub_24cde,0));	// 82740 call    sub_24CDE ;~ 2331:2E36
cs=0x2331;eip=0x002e3b; 	T(MOV(ax, 0x1E0));	// 82741 mov     ax, 1E0h ;~ 2331:2E3B
cs=0x2331;eip=0x002e3e; 	X(PUSH(ax));	// 82742 push    ax ;~ 2331:2E3E
cs=0x2331;eip=0x002e3f; 	X(PUSH(*(dw*)((&unk_57056))));	// 82743 push    word ptr unk_57056 ;~ 2331:2E3F
cs=0x2331;eip=0x002e43; 	R(CALLF(sub_2f002,0));	// 82744 call    sub_2F002 ;~ 2331:2E43
cs=0x2331;eip=0x002e48; 	T(MOV(cl, 8));	// 82745 mov     cl, 8 ;~ 2331:2E48
cs=0x2331;eip=0x002e4a; 	R(CALLF(sub_10240,0));	// 82746 call    sub_10240 ;~ 2331:2E4A
cs=0x2331;eip=0x002e4f; 	T(NEG(ax));	// 82747 neg     ax ;~ 2331:2E4F
cs=0x2331;eip=0x002e51; 	T(ADC(dx, 0));	// 82748 adc     dx, 0 ;~ 2331:2E51
cs=0x2331;eip=0x002e54; 	T(NEG(dx));	// 82749 neg     dx ;~ 2331:2E54
cs=0x2331;eip=0x002e56; 	X(MOV(*(dw*)(raddr(ss,bp+var_26)), ax));	// 82750 mov     [bp+var_26], ax ;~ 2331:2E56
cs=0x2331;eip=0x002e59; 	T(ax = bp+var_50);	// 82751 lea     ax, [bp+var_50] ;~ 2331:2E59
cs=0x2331;eip=0x002e5c; 	X(PUSH(ax));	// 82752 push    ax ;~ 2331:2E5C
cs=0x2331;eip=0x002e5d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_26))));	// 82753 push    [bp+var_26] ;~ 2331:2E5D
cs=0x2331;eip=0x002e60; 	R(CALLF(sub_24cde,0));	// 82754 call    sub_24CDE ;~ 2331:2E60
cs=0x2331;eip=0x002e65; 	T(ax = bp+var_4e);	// 82755 lea     ax, [bp+var_4E] ;~ 2331:2E65
cs=0x2331;eip=0x002e68; 	X(PUSH(ax));	// 82756 push    ax ;~ 2331:2E68
cs=0x2331;eip=0x002e69; 	X(PUSH(*(dw*)(raddr(ss,bp+var_26))));	// 82757 push    [bp+var_26] ;~ 2331:2E69
cs=0x2331;eip=0x002e6c; 	R(CALLF(sub_24cde,0));	// 82758 call    sub_24CDE ;~ 2331:2E6C
cs=0x2331;eip=0x002e71; 	T(ax = bp+var_4c);	// 82759 lea     ax, [bp+var_4C] ;~ 2331:2E71
cs=0x2331;eip=0x002e74; 	X(PUSH(ax));	// 82760 push    ax ;~ 2331:2E74
cs=0x2331;eip=0x002e75; 	X(PUSH(*(dw*)(raddr(ss,bp+var_26))));	// 82761 push    [bp+var_26] ;~ 2331:2E75
cs=0x2331;eip=0x002e78; 	R(CALLF(sub_24cde,0));	// 82762 call    sub_24CDE ;~ 2331:2E78
loc_3476d:
	// 9722 
cs=0x2331;eip=0x002e7d; 	T(MOV(ax, 0x2A8E));	// 82766 mov     ax, 2A8Eh ;~ 2331:2E7D
cs=0x2331;eip=0x002e80; 	X(PUSH(ax));	// 82767 push    ax ;~ 2331:2E80
cs=0x2331;eip=0x002e81; 	T(SUB(ax, ax));	// 82768 sub     ax, ax ;~ 2331:2E81
cs=0x2331;eip=0x002e83; 	X(PUSH(ax));	// 82769 push    ax ;~ 2331:2E83
cs=0x2331;eip=0x002e84; 	X(PUSH(ax));	// 82770 push    ax ;~ 2331:2E84
cs=0x2331;eip=0x002e85; 	X(PUSH(ax));	// 82771 push    ax ;~ 2331:2E85
cs=0x2331;eip=0x002e86; 	X(PUSH(ax));	// 82772 push    ax ;~ 2331:2E86
cs=0x2331;eip=0x002e87; 	X(PUSH(ax));	// 82773 push    ax ;~ 2331:2E87
cs=0x2331;eip=0x002e88; 	X(PUSH(ax));	// 82774 push    ax ;~ 2331:2E88
cs=0x2331;eip=0x002e89; 	X(PUSH(ax));	// 82775 push    ax ;~ 2331:2E89
cs=0x2331;eip=0x002e8a; 	X(PUSH(ax));	// 82776 push    ax ;~ 2331:2E8A
cs=0x2331;eip=0x002e8b; 	X(PUSH(ax));	// 82777 push    ax ;~ 2331:2E8B
cs=0x2331;eip=0x002e8c; 	T(ax = bp+var_30);	// 82778 lea     ax, [bp+var_30] ;~ 2331:2E8C
cs=0x2331;eip=0x002e8f; 	X(PUSH(ax));	// 82779 push    ax ;~ 2331:2E8F
cs=0x2331;eip=0x002e90; 	T(MOV(ax, 8));	// 82780 mov     ax, 8 ;~ 2331:2E90
cs=0x2331;eip=0x002e93; 	X(PUSH(ax));	// 82781 push    ax ;~ 2331:2E93
cs=0x2331;eip=0x002e94; 	T(MOV(ax, 0x0CC9C));	// 82782 mov     ax, 0CC9Ch ;~ 2331:2E94
cs=0x2331;eip=0x002e97; 	X(PUSH(ax));	// 82783 push    ax ;~ 2331:2E97
cs=0x2331;eip=0x002e98; 	T(MOV(ax, 0x0BB8));	// 82784 mov     ax, 0BB8h ;~ 2331:2E98
cs=0x2331;eip=0x002e9b; 	X(PUSH(ax));	// 82785 push    ax ;~ 2331:2E9B
cs=0x2331;eip=0x002e9c; 	T(ax = bp+var_c6);	// 82786 lea     ax, [bp+var_C6] ;~ 2331:2E9C
cs=0x2331;eip=0x002ea0; 	X(PUSH(ax));	// 82787 push    ax ;~ 2331:2EA0
cs=0x2331;eip=0x002ea1; 	T(SUB(ax, ax));	// 82788 sub     ax, ax ;~ 2331:2EA1
cs=0x2331;eip=0x002ea3; 	X(PUSH(ax));	// 82789 push    ax ;~ 2331:2EA3
cs=0x2331;eip=0x002ea4; 	T(MOV(ax, 1));	// 82790 mov     ax, 1 ;~ 2331:2EA4
cs=0x2331;eip=0x002ea7; 	X(PUSH(ax));	// 82791 push    ax ;~ 2331:2EA7
cs=0x2331;eip=0x002ea8; 	R(CALLF(sub_240ce,0));	// 82792 call    sub_240CE ;~ 2331:2EA8
cs=0x2331;eip=0x002ead; 	T(MOV(al, *(raddr(ss,bp+var_20))));	// 82793 mov     al, [bp+var_20] ;~ 2331:2EAD
cs=0x2331;eip=0x002eb0; 	T(CBW);	// 82794 cbw ;~ 2331:2EB0
cs=0x2331;eip=0x002eb1; 	X(PUSH(ax));	// 82795 push    ax ;~ 2331:2EB1
cs=0x2331;eip=0x002eb2; 	T(MOV(al, *(raddr(ss,bp+var_66))));	// 82796 mov     al, [bp+var_66] ;~ 2331:2EB2
cs=0x2331;eip=0x002eb5; 	T(CBW);	// 82797 cbw ;~ 2331:2EB5
cs=0x2331;eip=0x002eb6; 	X(PUSH(ax));	// 82798 push    ax ;~ 2331:2EB6
cs=0x2331;eip=0x002eb7; 	R(CALL(sub_34206,0));	// 82799 call    sub_34206 ;~ 2331:2EB7
cs=0x2331;eip=0x002eba; 	T(MOV(ax, 1));	// 82800 mov     ax, 1 ;~ 2331:2EBA
cs=0x2331;eip=0x002ebd; 	X(PUSH(ax));	// 82801 push    ax ;~ 2331:2EBD
cs=0x2331;eip=0x002ebe; 	T(SUB(ax, ax));	// 82802 sub     ax, ax ;~ 2331:2EBE
cs=0x2331;eip=0x002ec0; 	X(PUSH(ax));	// 82803 push    ax ;~ 2331:2EC0
cs=0x2331;eip=0x002ec1; 	R(CALLF(sub_20275,0));	// 82804 call    sub_20275 ;~ 2331:2EC1
cs=0x2331;eip=0x002ec6; 	R(CALLF(sub_3d480,0));	// 82805 call    sub_3D480 ;~ 2331:2EC6
cs=0x2331;eip=0x002ecb; 	R(CALLF(sub_2ee71,0));	// 82806 call    sub_2EE71 ;~ 2331:2ECB
cs=0x2331;eip=0x002ed0; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), ax));	// 82807 mov     [bp+var_28], ax ;~ 2331:2ED0
cs=0x2331;eip=0x002ed3; 	T(OR(ax, ax));	// 82808 or      ax, ax ;~ 2331:2ED3
cs=0x2331;eip=0x002ed5; 	R(JZ(loc_347d9));	// 82809 jz      short loc_347D9 ;~ 2331:2ED5
cs=0x2331;eip=0x002ed7; 	T(CMP(ax, 3));	// 82810 cmp     ax, 3 ;~ 2331:2ED7
cs=0x2331;eip=0x002eda; 	R(JZ(loc_347d4));	// 82811 jz      short loc_347D4 ;~ 2331:2EDA
cs=0x2331;eip=0x002edc; 	T(CMP(ax, 0x1B));	// 82812 cmp     ax, 1Bh ;~ 2331:2EDC
cs=0x2331;eip=0x002edf; 	R(JZ(loc_347d4));	// 82813 jz      short loc_347D4 ;~ 2331:2EDF
cs=0x2331;eip=0x002ee1; 	R(JMP(loc_3495e));	// 82814 jmp     loc_3495E ;~ 2331:2EE1
loc_347d4:
	// 9723 
cs=0x2331;eip=0x002ee4; 	R(CALLF(sub_318b6,0));	// 82819 call    sub_318B6 ;~ 2331:2EE4
loc_347d9:
	// 9724 
cs=0x2331;eip=0x002ee9; 	T(CMP(*(raddr(ss,bp+var_68)), 0));	// 82822 cmp     [bp+var_68], 0 ;~ 2331:2EE9
cs=0x2331;eip=0x002eed; 	R(JNZ(loc_3483b));	// 82823 jnz     short loc_3483B ;~ 2331:2EED
cs=0x2331;eip=0x002eef; 	T(CMP(*(dw*)(raddr(ss,bp+var_38)), 1));	// 82824 cmp     [bp+var_38], 1 ;~ 2331:2EEF
cs=0x2331;eip=0x002ef3; 	R(JGE(loc_347e8));	// 82825 jge     short loc_347E8 ;~ 2331:2EF3
cs=0x2331;eip=0x002ef5; 	R(JMP(loc_343b8));	// 82826 jmp     loc_343B8 ;~ 2331:2EF5
loc_347e8:
	// 9725 
cs=0x2331;eip=0x002ef8; 	R(JG(loc_347f4));	// 82830 jg      short loc_347F4 ;~ 2331:2EF8
cs=0x2331;eip=0x002efa; 	T(CMP(*(dw*)(raddr(ss,bp+var_3a)), 0x3100));	// 82831 cmp     [bp+var_3A], 3100h ;~ 2331:2EFA
cs=0x2331;eip=0x002eff; 	R(JNC(loc_347f4));	// 82832 jnb     short loc_347F4 ;~ 2331:2EFF
cs=0x2331;eip=0x002f01; 	R(JMP(loc_343b8));	// 82833 jmp     loc_343B8 ;~ 2331:2F01
loc_347f4:
	// 9726 
cs=0x2331;eip=0x002f04; 	T(CMP(*(dw*)(raddr(ss,bp+var_52)), 1));	// 82838 cmp     [bp+var_52], 1 ;~ 2331:2F04
cs=0x2331;eip=0x002f08; 	R(JGE(loc_347fd));	// 82839 jge     short loc_347FD ;~ 2331:2F08
cs=0x2331;eip=0x002f0a; 	R(JMP(loc_343b8));	// 82840 jmp     loc_343B8 ;~ 2331:2F0A
loc_347fd:
	// 9727 
cs=0x2331;eip=0x002f0d; 	R(JG(loc_34809));	// 82844 jg      short loc_34809 ;~ 2331:2F0D
cs=0x2331;eip=0x002f0f; 	T(CMP(*(dw*)(raddr(ss,bp+var_54)), 0x9000));	// 82845 cmp     [bp+var_54], 9000h ;~ 2331:2F0F
cs=0x2331;eip=0x002f14; 	R(JNC(loc_34809));	// 82846 jnb     short loc_34809 ;~ 2331:2F14
cs=0x2331;eip=0x002f16; 	R(JMP(loc_343b8));	// 82847 jmp     loc_343B8 ;~ 2331:2F16
loc_34809:
	// 9728 
cs=0x2331;eip=0x002f19; 	X(PUSH(word_5651a));	// 82852 push    word_5651A ;~ 2331:2F19
cs=0x2331;eip=0x002f1d; 	X(PUSH(*(dw*)((&unk_5651c))));	// 82853 push    word ptr unk_5651C ;~ 2331:2F1D
cs=0x2331;eip=0x002f21; 	R(CALLF(sub_2c939,0));	// 82854 call    sub_2C939 ;~ 2331:2F21
cs=0x2331;eip=0x002f26; 	T(MOV(ax, 1));	// 82855 mov     ax, 1 ;~ 2331:2F26
cs=0x2331;eip=0x002f29; 	X(PUSH(ax));	// 82856 push    ax ;~ 2331:2F29
cs=0x2331;eip=0x002f2a; 	X(PUSH(ax));	// 82857 push    ax ;~ 2331:2F2A
cs=0x2331;eip=0x002f2b; 	R(CALL(sub_34206,0));	// 82858 call    sub_34206 ;~ 2331:2F2B
cs=0x2331;eip=0x002f2e; 	X(PUSH(*(dw*)((&unk_5651c))));	// 82859 push    word ptr unk_5651C ;~ 2331:2F2E
cs=0x2331;eip=0x002f32; 	X(PUSH(word_5651a));	// 82860 push    word_5651A ;~ 2331:2F32
cs=0x2331;eip=0x002f36; 	R(CALLF(sub_2c939,0));	// 82861 call    sub_2C939 ;~ 2331:2F36
cs=0x2331;eip=0x002f3b; 	X(MOV(*(raddr(ss,bp+var_68)), 1));	// 82862 mov     [bp+var_68], 1 ;~ 2331:2F3B
loc_3482f:
	// 9729 
cs=0x2331;eip=0x002f3f; 	T(MOV(ax, *(dw*)((&unk_57058))));	// 82865 mov     ax, word ptr unk_57058 ;~ 2331:2F3F
cs=0x2331;eip=0x002f42; 	T(ADD(ax, 5));	// 82866 add     ax, 5 ;~ 2331:2F42
cs=0x2331;eip=0x002f45; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), ax));	// 82867 mov     [bp+var_24], ax ;~ 2331:2F45
cs=0x2331;eip=0x002f48; 	R(JMP(loc_343b8));	// 82868 jmp     loc_343B8 ;~ 2331:2F48
loc_3483b:
	// 9730 
cs=0x2331;eip=0x002f4b; 	T(CMP(*(raddr(ss,bp+var_68)), 1));	// 82872 cmp     [bp+var_68], 1 ;~ 2331:2F4B
cs=0x2331;eip=0x002f4f; 	R(JNZ(loc_34867));	// 82873 jnz     short loc_34867 ;~ 2331:2F4F
cs=0x2331;eip=0x002f51; 	T(MOV(ax, *(dw*)((&unk_57058))));	// 82874 mov     ax, word ptr unk_57058 ;~ 2331:2F51
cs=0x2331;eip=0x002f54; 	T(CMP(*(dw*)(raddr(ss,bp+var_24)), ax));	// 82875 cmp     [bp+var_24], ax ;~ 2331:2F54
cs=0x2331;eip=0x002f57; 	R(JBE(loc_3484c));	// 82876 jbe     short loc_3484C ;~ 2331:2F57
cs=0x2331;eip=0x002f59; 	R(JMP(loc_343b8));	// 82877 jmp     loc_343B8 ;~ 2331:2F59
loc_3484c:
	// 9731 
cs=0x2331;eip=0x002f5c; 	R(CALLF(sub_20565,0));	// 82881 call    sub_20565 ;~ 2331:2F5C
cs=0x2331;eip=0x002f61; 	X(MOV(*(raddr(ss,bp+var_68)), 3));	// 82882 mov     [bp+var_68], 3 ;~ 2331:2F61
cs=0x2331;eip=0x002f65; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 1));	// 82883 mov     [bp+var_4], 1 ;~ 2331:2F65
cs=0x2331;eip=0x002f6a; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), 0x700));	// 82884 mov     [bp+var_10], 700h ;~ 2331:2F6A
cs=0x2331;eip=0x002f6f; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0));	// 82885 mov     [bp+var_E], 0 ;~ 2331:2F6F
cs=0x2331;eip=0x002f74; 	R(JMP(loc_343b8));	// 82886 jmp     loc_343B8 ;~ 2331:2F74
loc_34867:
	// 9732 
cs=0x2331;eip=0x002f77; 	T(CMP(*(raddr(ss,bp+var_68)), 3));	// 82890 cmp     [bp+var_68], 3 ;~ 2331:2F77
cs=0x2331;eip=0x002f7b; 	R(JNZ(loc_34891));	// 82891 jnz     short loc_34891 ;~ 2331:2F7B
cs=0x2331;eip=0x002f7d; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), 0));	// 82892 cmp     [bp+var_E], 0 ;~ 2331:2F7D
cs=0x2331;eip=0x002f81; 	R(JLE(loc_34876));	// 82893 jle     short loc_34876 ;~ 2331:2F81
cs=0x2331;eip=0x002f83; 	R(JMP(loc_343b8));	// 82894 jmp     loc_343B8 ;~ 2331:2F83
loc_34876:
	// 9733 
cs=0x2331;eip=0x002f86; 	R(JL(loc_34882));	// 82898 jl      short loc_34882 ;~ 2331:2F86
cs=0x2331;eip=0x002f88; 	T(CMP(*(dw*)(raddr(ss,bp+var_10)), 0x700));	// 82899 cmp     [bp+var_10], 700h ;~ 2331:2F88
cs=0x2331;eip=0x002f8d; 	R(JBE(loc_34882));	// 82900 jbe     short loc_34882 ;~ 2331:2F8D
cs=0x2331;eip=0x002f8f; 	R(JMP(loc_343b8));	// 82901 jmp     loc_343B8 ;~ 2331:2F8F
loc_34882:
	// 9734 
cs=0x2331;eip=0x002f92; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0x0FFFF));	// 82906 cmp     [bp+var_4], 0FFFFh ;~ 2331:2F92
cs=0x2331;eip=0x002f96; 	R(JZ(loc_3488b));	// 82907 jz      short loc_3488B ;~ 2331:2F96
cs=0x2331;eip=0x002f98; 	R(JMP(loc_343b8));	// 82908 jmp     loc_343B8 ;~ 2331:2F98
loc_3488b:
	// 9735 
cs=0x2331;eip=0x002f9b; 	X(MOV(*(raddr(ss,bp+var_68)), 4));	// 82912 mov     [bp+var_68], 4 ;~ 2331:2F9B
cs=0x2331;eip=0x002f9f; 	R(JMP(loc_3482f));	// 82913 jmp     short loc_3482F ;~ 2331:2F9F
loc_34891:
	// 9736 
cs=0x2331;eip=0x002fa1; 	T(CMP(*(raddr(ss,bp+var_68)), 4));	// 82917 cmp     [bp+var_68], 4 ;~ 2331:2FA1
cs=0x2331;eip=0x002fa5; 	R(JNZ(loc_348e2));	// 82918 jnz     short loc_348E2 ;~ 2331:2FA5
cs=0x2331;eip=0x002fa7; 	T(MOV(ax, *(dw*)((&unk_57058))));	// 82919 mov     ax, word ptr unk_57058 ;~ 2331:2FA7
cs=0x2331;eip=0x002faa; 	T(CMP(*(dw*)(raddr(ss,bp+var_24)), ax));	// 82920 cmp     [bp+var_24], ax ;~ 2331:2FAA
cs=0x2331;eip=0x002fad; 	R(JBE(loc_348a2));	// 82921 jbe     short loc_348A2 ;~ 2331:2FAD
cs=0x2331;eip=0x002faf; 	R(JMP(loc_343b8));	// 82922 jmp     loc_343B8 ;~ 2331:2FAF
loc_348a2:
	// 9737 
cs=0x2331;eip=0x002fb2; 	X(MOV(*(raddr(ss,bp+var_68)), 5));	// 82926 mov     [bp+var_68], 5 ;~ 2331:2FB2
cs=0x2331;eip=0x002fb6; 	T(MOV(ax, 0x0FFFF));	// 82927 mov     ax, 0FFFFh ;~ 2331:2FB6
cs=0x2331;eip=0x002fb9; 	X(MOV(*(dw*)(raddr(ss,bp+var_6c)), ax));	// 82928 mov     [bp+var_6C], ax ;~ 2331:2FB9
cs=0x2331;eip=0x002fbc; 	X(MOV(*(dw*)(raddr(ss,bp+var_64)), ax));	// 82929 mov     [bp+var_64], ax ;~ 2331:2FBC
cs=0x2331;eip=0x002fbf; 	X(MOV(*(dw*)(raddr(ss,bp+var_4a)), ax));	// 82930 mov     [bp+var_4A], ax ;~ 2331:2FBF
cs=0x2331;eip=0x002fc2; 	T(MOV(ax, 1));	// 82931 mov     ax, 1 ;~ 2331:2FC2
cs=0x2331;eip=0x002fc5; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 82932 mov     [bp+var_2], ax ;~ 2331:2FC5
cs=0x2331;eip=0x002fc8; 	X(MOV(*(dw*)(raddr(ss,bp+var_c8)), ax));	// 82933 mov     [bp+var_C8], ax ;~ 2331:2FC8
cs=0x2331;eip=0x002fcc; 	X(MOV(*(dw*)(raddr(ss,bp+var_6a)), ax));	// 82934 mov     [bp+var_6A], ax ;~ 2331:2FCC
cs=0x2331;eip=0x002fcf; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), 0x0C00));	// 82935 mov     [bp+var_10], 0C00h ;~ 2331:2FCF
cs=0x2331;eip=0x002fd4; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0x0FFFE));	// 82936 mov     [bp+var_E], 0FFFEh ;~ 2331:2FD4
cs=0x2331;eip=0x002fd9; 	T(SUB(al, al));	// 82937 sub     al, al ;~ 2331:2FD9
cs=0x2331;eip=0x002fdb; 	X(MOV(unk_4a43f, al));	// 82938 mov     byte ptr unk_4A43F, al ;~ 2331:2FDB
cs=0x2331;eip=0x002fde; 	X(MOV(unk_4a43e, al));	// 82939 mov     byte ptr unk_4A43E, al ;~ 2331:2FDE
cs=0x2331;eip=0x002fe1; 	T(MOV(ax, *(dw*)((&unk_57058))));	// 82940 mov     ax, word ptr unk_57058 ;~ 2331:2FE1
cs=0x2331;eip=0x002fe4; 	T(ADD(ax, 0x14));	// 82941 add     ax, 14h ;~ 2331:2FE4
cs=0x2331;eip=0x002fe7; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), ax));	// 82942 mov     [bp+var_24], ax ;~ 2331:2FE7
cs=0x2331;eip=0x002fea; 	R(CALLF(sub_20565,0));	// 82943 call    sub_20565 ;~ 2331:2FEA
cs=0x2331;eip=0x002fef; 	R(JMP(loc_343b8));	// 82944 jmp     loc_343B8 ;~ 2331:2FEF
loc_348e2:
	// 9738 
cs=0x2331;eip=0x002ff2; 	T(CMP(*(raddr(ss,bp+var_68)), 5));	// 82948 cmp     [bp+var_68], 5 ;~ 2331:2FF2
cs=0x2331;eip=0x002ff6; 	R(JZ(loc_348eb));	// 82949 jz      short loc_348EB ;~ 2331:2FF6
cs=0x2331;eip=0x002ff8; 	R(JMP(loc_343b8));	// 82950 jmp     loc_343B8 ;~ 2331:2FF8
loc_348eb:
	// 9739 
cs=0x2331;eip=0x002ffb; 	T(CMP(*(dw*)(raddr(ss,bp+var_38)), 0x0FFFF));	// 82954 cmp     [bp+var_38], 0FFFFh ;~ 2331:2FFB
cs=0x2331;eip=0x002fff; 	R(JLE(loc_348f4));	// 82955 jle     short loc_348F4 ;~ 2331:2FFF
cs=0x2331;eip=0x003001; 	R(JMP(loc_343b8));	// 82956 jmp     loc_343B8 ;~ 2331:3001
loc_348f4:
	// 9740 
cs=0x2331;eip=0x003004; 	R(JL(loc_34900));	// 82960 jl      short loc_34900 ;~ 2331:3004
cs=0x2331;eip=0x003006; 	T(CMP(*(dw*)(raddr(ss,bp+var_3a)), 0x9C00));	// 82961 cmp     [bp+var_3A], 9C00h ;~ 2331:3006
cs=0x2331;eip=0x00300b; 	R(JC(loc_34900));	// 82962 jb      short loc_34900 ;~ 2331:300B
cs=0x2331;eip=0x00300d; 	R(JMP(loc_343b8));	// 82963 jmp     loc_343B8 ;~ 2331:300D
loc_34900:
	// 9741 
cs=0x2331;eip=0x003010; 	T(CMP(*(dw*)(raddr(ss,bp+var_52)), 0x0FFFF));	// 82968 cmp     [bp+var_52], 0FFFFh ;~ 2331:3010
cs=0x2331;eip=0x003014; 	R(JLE(loc_34909));	// 82969 jle     short loc_34909 ;~ 2331:3014
cs=0x2331;eip=0x003016; 	R(JMP(loc_343b8));	// 82970 jmp     loc_343B8 ;~ 2331:3016
loc_34909:
	// 9742 
cs=0x2331;eip=0x003019; 	R(JL(loc_34915));	// 82974 jl      short loc_34915 ;~ 2331:3019
cs=0x2331;eip=0x00301b; 	T(CMP(*(dw*)(raddr(ss,bp+var_54)), 0x9C00));	// 82975 cmp     [bp+var_54], 9C00h ;~ 2331:301B
cs=0x2331;eip=0x003020; 	R(JC(loc_34915));	// 82976 jb      short loc_34915 ;~ 2331:3020
cs=0x2331;eip=0x003022; 	R(JMP(loc_343b8));	// 82977 jmp     loc_343B8 ;~ 2331:3022
loc_34915:
	// 9743 
cs=0x2331;eip=0x003025; 	X(MOV(*(raddr(ss,bp+var_68)), 0));	// 82982 mov     [bp+var_68], 0 ;~ 2331:3025
cs=0x2331;eip=0x003029; 	T(MOV(ax, 1));	// 82983 mov     ax, 1 ;~ 2331:3029
cs=0x2331;eip=0x00302c; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 82984 mov     [bp+var_6], ax ;~ 2331:302C
cs=0x2331;eip=0x00302f; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 82985 mov     [bp+var_4], ax ;~ 2331:302F
cs=0x2331;eip=0x003032; 	T(MOV(ax, 0x5A0));	// 82986 mov     ax, 5A0h ;~ 2331:3032
cs=0x2331;eip=0x003035; 	X(MOV(*(dw*)(raddr(ss,bp+var_50)), ax));	// 82987 mov     [bp+var_50], ax ;~ 2331:3035
cs=0x2331;eip=0x003038; 	X(MOV(*(dw*)(raddr(ss,bp+var_36)), ax));	// 82988 mov     [bp+var_36], ax ;~ 2331:3038
cs=0x2331;eip=0x00303b; 	T(SUB(ax, ax));	// 82989 sub     ax, ax ;~ 2331:303B
cs=0x2331;eip=0x00303d; 	X(MOV(*(dw*)(raddr(ss,bp+var_4c)), ax));	// 82990 mov     [bp+var_4C], ax ;~ 2331:303D
cs=0x2331;eip=0x003040; 	X(MOV(*(dw*)(raddr(ss,bp+var_4e)), ax));	// 82991 mov     [bp+var_4E], ax ;~ 2331:3040
cs=0x2331;eip=0x003043; 	X(MOV(*(dw*)(raddr(ss,bp+var_32)), ax));	// 82992 mov     [bp+var_32], ax ;~ 2331:3043
cs=0x2331;eip=0x003046; 	X(MOV(*(dw*)(raddr(ss,bp+var_34)), ax));	// 82993 mov     [bp+var_34], ax ;~ 2331:3046
cs=0x2331;eip=0x003049; 	X(MOV(*(dw*)(raddr(ss,bp+var_40)), ax));	// 82994 mov     [bp+var_40], ax ;~ 2331:3049
cs=0x2331;eip=0x00304c; 	X(MOV(*(dw*)(raddr(ss,bp+var_42)), ax));	// 82995 mov     [bp+var_42], ax ;~ 2331:304C
cs=0x2331;eip=0x00304f; 	X(MOV(*(dw*)(raddr(ss,bp+var_3a)), 0x0F600));	// 82996 mov     [bp+var_3A], 0F600h ;~ 2331:304F
cs=0x2331;eip=0x003054; 	X(MOV(*(dw*)(raddr(ss,bp+var_38)), 0x0FFFF));	// 82997 mov     [bp+var_38], 0FFFFh ;~ 2331:3054
cs=0x2331;eip=0x003059; 	X(MOV(*(dw*)(raddr(ss,bp+var_5c)), 0x0C00));	// 82998 mov     [bp+var_5C], 0C00h ;~ 2331:3059
cs=0x2331;eip=0x00305e; 	X(MOV(*(dw*)(raddr(ss,bp+var_5a)), ax));	// 82999 mov     [bp+var_5A], ax ;~ 2331:305E
cs=0x2331;eip=0x003061; 	X(MOV(*(dw*)(raddr(ss,bp+var_54)), 0x3800));	// 83000 mov     [bp+var_54], 3800h ;~ 2331:3061
cs=0x2331;eip=0x003066; 	X(MOV(*(dw*)(raddr(ss,bp+var_52)), 0x0FFFF));	// 83001 mov     [bp+var_52], 0FFFFh ;~ 2331:3066
cs=0x2331;eip=0x00306b; 	R(JMP(loc_343b8));	// 83002 jmp     loc_343B8 ;~ 2331:306B
loc_3495e:
	// 9744 
cs=0x2331;eip=0x00306e; 	X(MOV(unk_4b0e4, 0x80));	// 83006 mov     byte ptr unk_4B0E4, 80h ; 'Ä' ;~ 2331:306E
cs=0x2331;eip=0x003073; 	R(CALLF(sub_3102a,0));	// 83007 call    sub_3102A ;~ 2331:3073
cs=0x2331;eip=0x003078; 	T(ax = bp+var_c6);	// 83008 lea     ax, [bp+var_C6] ;~ 2331:3078
cs=0x2331;eip=0x00307c; 	X(PUSH(ax));	// 83009 push    ax ;~ 2331:307C
cs=0x2331;eip=0x00307d; 	R(CALLF(sub_2592e,0));	// 83010 call    sub_2592E ;~ 2331:307D
cs=0x2331;eip=0x003082; 	R(CALLF(sub_36e60,0));	// 83011 call    sub_36E60 ;~ 2331:3082
cs=0x2331;eip=0x003087; 	R(CALLF(sub_36df7,0));	// 83012 call    sub_36DF7 ;~ 2331:3087
cs=0x2331;eip=0x00308c; 	X(POP(di));	// 83013 pop     di ;~ 2331:308C
cs=0x2331;eip=0x00308d; 	T(MOV(sp, bp));	// 83014 mov     sp, bp ;~ 2331:308D
cs=0x2331;eip=0x00308f; 	X(POP(bp));	// 83015 pop     bp ;~ 2331:308F
cs=0x2331;eip=0x003090; 	R(RETF(0));	// 83016 retf ;~ 2331:3090
sub_34981:
	// 83024 
#undef var_2
#define var_2 -2
	// 83026 var_2           = byte ptr -2 ;~ 2331:3091
cs=0x2331;eip=0x003091; 	X(PUSH(bp));	// 83028 push    bp ;~ 2331:3091
cs=0x2331;eip=0x003092; 	T(MOV(bp, sp));	// 83029 mov     bp, sp ;~ 2331:3092
cs=0x2331;eip=0x003094; 	T(SUB(sp, 2));	// 83030 sub     sp, 2 ;~ 2331:3094
cs=0x2331;eip=0x003097; 	T(MOV(ax, 0x2A9E));	// 83031 mov     ax, 2A9Eh ;~ 2331:3097
cs=0x2331;eip=0x00309a; 	X(PUSH(ax));	// 83032 push    ax ;~ 2331:309A
cs=0x2331;eip=0x00309b; 	T(ax = bp+var_2);	// 83033 lea     ax, [bp+var_2] ;~ 2331:309B
cs=0x2331;eip=0x00309e; 	X(PUSH(ax));	// 83034 push    ax ;~ 2331:309E
cs=0x2331;eip=0x00309f; 	R(CALLF(sub_31643,0));	// 83035 call    sub_31643 ;~ 2331:309F
cs=0x2331;eip=0x0030a4; 	X(MOV(*(dw*)((&unk_544d4)), ax));	// 83036 mov     word ptr unk_544D4, ax ;~ 2331:30A4
cs=0x2331;eip=0x0030a7; 	X(MOV(*(dw*)((&unk_544d6)), dx));	// 83037 mov     word ptr unk_544D6, dx ;~ 2331:30A7
cs=0x2331;eip=0x0030ab; 	T(MOV(sp, bp));	// 83038 mov     sp, bp ;~ 2331:30AB
cs=0x2331;eip=0x0030ad; 	X(POP(bp));	// 83039 pop     bp ;~ 2331:30AD
cs=0x2331;eip=0x0030ae; 	R(RETF(0));	// 83040 retf ;~ 2331:30AE
sub_3499f:
	// 83047 
cs=0x2331;eip=0x0030af; 	X(PUSH(*(dw*)((&unk_544d6))));	// 83048 push    word ptr unk_544D6 ;~ 2331:30AF
cs=0x2331;eip=0x0030b3; 	R(CALLF(sub_2397c,0));	// 83049 call    sub_2397C ;~ 2331:30B3
cs=0x2331;eip=0x0030b8; 	T(SUB(ax, ax));	// 83050 sub     ax, ax ;~ 2331:30B8
cs=0x2331;eip=0x0030ba; 	X(MOV(*(dw*)((&unk_544d6)), ax));	// 83051 mov     word ptr unk_544D6, ax ;~ 2331:30BA
cs=0x2331;eip=0x0030bd; 	X(MOV(*(dw*)((&unk_544d4)), ax));	// 83052 mov     word ptr unk_544D4, ax ;~ 2331:30BD
cs=0x2331;eip=0x0030c0; 	R(RETF(0));	// 83053 retf ;~ 2331:30C0
sub_349b1:
	// 83061 
#undef var_4
#define var_4 -4
	// 83064 var_4           = dword ptr -4 ;~ 2331:30C1
#undef arg_0
#define arg_0 4
	// 83065 arg_0           = word ptr  4 ;~ 2331:30C1
cs=0x2331;eip=0x0030c1; 	X(PUSH(bp));	// 83067 push    bp ;~ 2331:30C1
cs=0x2331;eip=0x0030c2; 	T(MOV(bp, sp));	// 83068 mov     bp, sp ;~ 2331:30C2
cs=0x2331;eip=0x0030c4; 	T(SUB(sp, 4));	// 83069 sub     sp, 4 ;~ 2331:30C4
cs=0x2331;eip=0x0030c7; 	X(PUSH(di));	// 83070 push    di ;~ 2331:30C7
cs=0x2331;eip=0x0030c8; 	T(MOV(ax, *(dw*)((&unk_544d4))));	// 83071 mov     ax, word ptr unk_544D4 ;~ 2331:30C8
cs=0x2331;eip=0x0030cb; 	T(MOV(dx, *(dw*)((&unk_544d6))));	// 83072 mov     dx, word ptr unk_544D6 ;~ 2331:30CB
cs=0x2331;eip=0x0030cf; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 83073 mov     word ptr [bp+var_4], ax ;~ 2331:30CF
cs=0x2331;eip=0x0030d2; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 83074 mov     word ptr [bp+var_4+2], dx ;~ 2331:30D2
cs=0x2331;eip=0x0030d5; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 83075 cmp     [bp+arg_0], 0 ;~ 2331:30D5
cs=0x2331;eip=0x0030d9; 	R(JLE(loc_349e6));	// 83076 jle     short loc_349E6 ;~ 2331:30D9
cs=0x2331;eip=0x0030db; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_0))));	// 83077 mov     cx, [bp+arg_0] ;~ 2331:30DB
cs=0x2331;eip=0x0030de; 	T(LES(di, *(dd*)(raddr(ss,bp+var_4))));	// 83078 les     di, [bp+var_4] ;~ 2331:30DE
loc_349d1:
	// 9745 
cs=0x2331;eip=0x0030e1; 	T(CMP(*(raddr(es,di)), 0));	// 83081 cmp     byte ptr es:[di], 0 ;~ 2331:30E1
cs=0x2331;eip=0x0030e5; 	R(JNZ(loc_349d8));	// 83082 jnz     short loc_349D8 ;~ 2331:30E5
cs=0x2331;eip=0x0030e7; 	T(DEC(cx));	// 83083 dec     cx ;~ 2331:30E7
loc_349d8:
	// 9746 
cs=0x2331;eip=0x0030e8; 	T(INC(di));	// 83086 inc     di ;~ 2331:30E8
cs=0x2331;eip=0x0030e9; 	T(OR(cx, cx));	// 83087 or      cx, cx ;~ 2331:30E9
cs=0x2331;eip=0x0030eb; 	R(JG(loc_349d1));	// 83088 jg      short loc_349D1 ;~ 2331:30EB
cs=0x2331;eip=0x0030ed; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), di));	// 83089 mov     word ptr [bp+var_4], di ;~ 2331:30ED
cs=0x2331;eip=0x0030f0; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), es));	// 83090 mov     word ptr [bp+var_4+2], es ;~ 2331:30F0
cs=0x2331;eip=0x0030f3; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), cx));	// 83091 mov     [bp+arg_0], cx ;~ 2331:30F3
loc_349e6:
	// 9747 
cs=0x2331;eip=0x0030f6; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 83094 mov     ax, word ptr [bp+var_4] ;~ 2331:30F6
cs=0x2331;eip=0x0030f9; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 83095 mov     dx, word ptr [bp+var_4+2] ;~ 2331:30F9
cs=0x2331;eip=0x0030fc; 	X(POP(di));	// 83096 pop     di ;~ 2331:30FC
cs=0x2331;eip=0x0030fd; 	T(MOV(sp, bp));	// 83097 mov     sp, bp ;~ 2331:30FD
cs=0x2331;eip=0x0030ff; 	X(POP(bp));	// 83098 pop     bp ;~ 2331:30FF
cs=0x2331;eip=0x003100; 	R(RETN(2));	// 83099 retn    2 ;~ 2331:3100
sub_349f3:
	// 83107 
#undef arg_0
#define arg_0 4
	// 83110 arg_0           = word ptr  4 ;~ 2331:3103
cs=0x2331;eip=0x003103; 	X(PUSH(bp));	// 83112 push    bp ;~ 2331:3103
cs=0x2331;eip=0x003104; 	T(MOV(bp, sp));	// 83113 mov     bp, sp ;~ 2331:3104
cs=0x2331;eip=0x003106; 	X(PUSH(di));	// 83114 push    di ;~ 2331:3106
cs=0x2331;eip=0x003107; 	X(PUSH(si));	// 83115 push    si ;~ 2331:3107
cs=0x2331;eip=0x003108; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 83116 mov     si, [bp+arg_0] ;~ 2331:3108
cs=0x2331;eip=0x00310b; 	T(MOV(ax, 0x2E));	// 83117 mov     ax, 2Eh ; '.' ;~ 2331:310B
cs=0x2331;eip=0x00310e; 	X(PUSH(ax));	// 83118 push    ax ;~ 2331:310E
cs=0x2331;eip=0x00310f; 	X(PUSH(si));	// 83119 push    si ;~ 2331:310F
cs=0x2331;eip=0x003110; 	R(CALLF(sub_1042a,0));	// 83120 call    sub_1042A ;~ 2331:3110
cs=0x2331;eip=0x003115; 	T(ADD(sp, 4));	// 83121 add     sp, 4 ;~ 2331:3115
cs=0x2331;eip=0x003118; 	T(OR(ax, ax));	// 83122 or      ax, ax ;~ 2331:3118
cs=0x2331;eip=0x00311a; 	R(JZ(loc_34a2a));	// 83123 jz      short loc_34A2A ;~ 2331:311A
cs=0x2331;eip=0x00311c; 	T(MOV(di, si));	// 83124 mov     di, si ;~ 2331:311C
cs=0x2331;eip=0x00311e; 	T(MOV(ax, ds));	// 83125 mov     ax, ds ;~ 2331:311E
cs=0x2331;eip=0x003120; 	T(MOV(es, ax));	// 83126 mov     es, ax ;~ 2331:3120
cs=0x2331;eip=0x003122; 	T(MOV(cx, 0x0FFFF));	// 83128 mov     cx, 0FFFFh ;~ 2331:3122
cs=0x2331;eip=0x003125; 	T(XOR(ax, ax));	// 83129 xor     ax, ax ;~ 2331:3125
	// 83130 repne scasb ;~ 2331:3127
cs=0x2331;eip=0x003127; 	T(	REPNE SCASB);	// 83130 repne scasb ;~ 2331:3127
cs=0x2331;eip=0x003129; 	T(NOT(cx));	// 83131 not     cx ;~ 2331:3129
cs=0x2331;eip=0x00312b; 	T(DEC(cx));	// 83132 dec     cx ;~ 2331:312B
cs=0x2331;eip=0x00312c; 	T(DEC(cx));	// 83133 dec     cx ;~ 2331:312C
cs=0x2331;eip=0x00312d; 	T(ADD(si, cx));	// 83134 add     si, cx ;~ 2331:312D
cs=0x2331;eip=0x00312f; 	R(JMP(loc_34a25));	// 83135 jmp     short loc_34A25 ;~ 2331:312F
loc_34a21:
	// 9748 
cs=0x2331;eip=0x003131; 	X(MOV(*(raddr(ds,si)), 0));	// 83139 mov     byte ptr [si], 0 ;~ 2331:3131
cs=0x2331;eip=0x003134; 	T(DEC(si));	// 83140 dec     si ;~ 2331:3134
loc_34a25:
	// 9749 
cs=0x2331;eip=0x003135; 	T(CMP(*(raddr(ds,si)), 0x30));	// 83143 cmp     byte ptr [si], 30h ; '0' ;~ 2331:3135
cs=0x2331;eip=0x003138; 	R(JZ(loc_34a21));	// 83144 jz      short loc_34A21 ;~ 2331:3138
loc_34a2a:
	// 9750 
cs=0x2331;eip=0x00313a; 	T(CMP(*(raddr(ds,si)), 0x2E));	// 83147 cmp     byte ptr [si], 2Eh ; '.' ;~ 2331:313A
cs=0x2331;eip=0x00313d; 	R(JNZ(loc_34a32));	// 83148 jnz     short loc_34A32 ;~ 2331:313D
cs=0x2331;eip=0x00313f; 	X(MOV(*(raddr(ds,si)), 0));	// 83149 mov     byte ptr [si], 0 ;~ 2331:313F
loc_34a32:
	// 9751 
cs=0x2331;eip=0x003142; 	X(POP(si));	// 83152 pop     si ;~ 2331:3142
cs=0x2331;eip=0x003143; 	X(POP(di));	// 83153 pop     di ;~ 2331:3143
cs=0x2331;eip=0x003144; 	X(POP(bp));	// 83154 pop     bp ;~ 2331:3144
cs=0x2331;eip=0x003145; 	R(RETN(2));	// 83155 retn    2 ;~ 2331:3145
sub_34a38:
	// 83163 
#undef var_ae
#define var_ae -0x0AE
	// 83165 var_AE          = word ptr -0AEh ;~ 2331:3148
#undef var_aa
#define var_aa -0x0AA
	// 83166 var_AA          = byte ptr -0AAh ;~ 2331:3148
#undef var_a8
#define var_a8 -0x0A8
	// 83167 var_A8          = byte ptr -0A8h ;~ 2331:3148
#undef var_58
#define var_58 -0x58
	// 83168 var_58          = word ptr -58h ;~ 2331:3148
#undef var_54
#define var_54 -0x54
	// 83169 var_54          = word ptr -54h ;~ 2331:3148
#undef var_52
#define var_52 -0x52
	// 83170 var_52          = byte ptr -52h ;~ 2331:3148
#undef var_2
#define var_2 -2
	// 83171 var_2           = word ptr -2 ;~ 2331:3148
cs=0x2331;eip=0x003148; 	X(PUSH(bp));	// 83173 push    bp ;~ 2331:3148
cs=0x2331;eip=0x003149; 	T(MOV(bp, sp));	// 83174 mov     bp, sp ;~ 2331:3149
cs=0x2331;eip=0x00314b; 	T(SUB(sp, 0x0AE));	// 83175 sub     sp, 0AEh ;~ 2331:314B
cs=0x2331;eip=0x00314f; 	X(PUSH(di));	// 83176 push    di ;~ 2331:314F
cs=0x2331;eip=0x003150; 	X(PUSH(si));	// 83177 push    si ;~ 2331:3150
cs=0x2331;eip=0x003151; 	T(CMP(unk_4a45b, 0));	// 83178 cmp     byte ptr unk_4A45B, 0 ;~ 2331:3151
cs=0x2331;eip=0x003156; 	R(JZ(loc_34a4e));	// 83179 jz      short loc_34A4E ;~ 2331:3156
loc_34a48:
	// 9752 
cs=0x2331;eip=0x003158; 	T(MOV(ax, 1));	// 83182 mov     ax, 1 ;~ 2331:3158
cs=0x2331;eip=0x00315b; 	R(JMP(loc_34b72));	// 83183 jmp     loc_34B72 ;~ 2331:315B
loc_34a4e:
	// 9753 
cs=0x2331;eip=0x00315e; 	X(PUSH(cs));	// 83187 push    cs ;~ 2331:315E
cs=0x2331;eip=0x00315f; 	R(CALL(sub_34981,0));	// 83188 call    near ptr sub_34981 ;~ 2331:315F
cs=0x2331;eip=0x003162; 	R(CALL(sub_3321b,0));	// 83189 call    sub_3321B ;~ 2331:3162
cs=0x2331;eip=0x003165; 	R(CALL(sub_33161,0));	// 83190 call    sub_33161 ;~ 2331:3165
cs=0x2331;eip=0x003168; 	R(CALL(sub_3317c,0));	// 83191 call    sub_3317C ;~ 2331:3168
cs=0x2331;eip=0x00316b; 	T(MOV(ax, 0x19));	// 83192 mov     ax, 19h ;~ 2331:316B
cs=0x2331;eip=0x00316e; 	X(PUSH(ax));	// 83193 push    ax ;~ 2331:316E
cs=0x2331;eip=0x00316f; 	T(MOV(ax, 0x0DF));	// 83194 mov     ax, 0DFh ; 'ﬂ' ;~ 2331:316F
cs=0x2331;eip=0x003172; 	X(PUSH(ax));	// 83195 push    ax ;~ 2331:3172
cs=0x2331;eip=0x003173; 	T(MOV(ax, 0x20));	// 83196 mov     ax, 20h ; ' ' ;~ 2331:3173
cs=0x2331;eip=0x003176; 	X(PUSH(ax));	// 83197 push    ax ;~ 2331:3176
cs=0x2331;eip=0x003177; 	T(MOV(ax, 0x64));	// 83198 mov     ax, 64h ; 'd' ;~ 2331:3177
cs=0x2331;eip=0x00317a; 	X(PUSH(ax));	// 83199 push    ax ;~ 2331:317A
cs=0x2331;eip=0x00317b; 	R(CALL(sub_33056,0));	// 83200 call    sub_33056 ;~ 2331:317B
cs=0x2331;eip=0x00317e; 	X(PUSH(ax));	// 83201 push    ax ;~ 2331:317E
cs=0x2331;eip=0x00317f; 	R(CALLF(sub_30ffa,0));	// 83202 call    sub_30FFA ;~ 2331:317F
cs=0x2331;eip=0x003184; 	T(ADD(sp, 8));	// 83203 add     sp, 8 ;~ 2331:3184
cs=0x2331;eip=0x003187; 	R(CALL(sub_3318a,0));	// 83204 call    sub_3318A ;~ 2331:3187
cs=0x2331;eip=0x00318a; 	T(MOV(ax, 0x11));	// 83205 mov     ax, 11h ;~ 2331:318A
cs=0x2331;eip=0x00318d; 	X(PUSH(ax));	// 83206 push    ax ;~ 2331:318D
cs=0x2331;eip=0x00318e; 	T(MOV(ax, 0x0DF));	// 83207 mov     ax, 0DFh ; 'ﬂ' ;~ 2331:318E
cs=0x2331;eip=0x003191; 	X(PUSH(ax));	// 83208 push    ax ;~ 2331:3191
cs=0x2331;eip=0x003192; 	T(MOV(ax, 0x20));	// 83209 mov     ax, 20h ; ' ' ;~ 2331:3192
cs=0x2331;eip=0x003195; 	X(PUSH(ax));	// 83210 push    ax ;~ 2331:3195
cs=0x2331;eip=0x003196; 	T(MOV(ax, 0x63));	// 83211 mov     ax, 63h ; 'c' ;~ 2331:3196
cs=0x2331;eip=0x003199; 	X(PUSH(ax));	// 83212 push    ax ;~ 2331:3199
cs=0x2331;eip=0x00319a; 	R(CALL(sub_33056,0));	// 83213 call    sub_33056 ;~ 2331:319A
cs=0x2331;eip=0x00319d; 	X(PUSH(ax));	// 83214 push    ax ;~ 2331:319D
cs=0x2331;eip=0x00319e; 	R(CALLF(sub_30ffa,0));	// 83215 call    sub_30FFA ;~ 2331:319E
cs=0x2331;eip=0x0031a3; 	T(ADD(sp, 8));	// 83216 add     sp, 8 ;~ 2331:31A3
cs=0x2331;eip=0x0031a6; 	T(MOV(ax, 0x84));	// 83217 mov     ax, 84h ; 'Ñ' ;~ 2331:31A6
cs=0x2331;eip=0x0031a9; 	X(PUSH(ax));	// 83218 push    ax ;~ 2331:31A9
cs=0x2331;eip=0x0031aa; 	R(CALL(sub_33056,0));	// 83219 call    sub_33056 ;~ 2331:31AA
cs=0x2331;eip=0x0031ad; 	X(PUSH(ax));	// 83220 push    ax ;~ 2331:31AD
cs=0x2331;eip=0x0031ae; 	R(CALL(sub_33198,0));	// 83221 call    sub_33198 ;~ 2331:31AE
cs=0x2331;eip=0x0031b1; 	X(MOV(*(dw*)((&unk_47bde)), 0x0FF00));	// 83222 mov     word ptr unk_47BDE, 0FF00h ;~ 2331:31B1
cs=0x2331;eip=0x0031b7; 	X(MOV(unk_56885, 0));	// 83223 mov     byte ptr unk_56885, 0 ;~ 2331:31B7
cs=0x2331;eip=0x0031bc; 	T(SUB(ax, ax));	// 83224 sub     ax, ax ;~ 2331:31BC
cs=0x2331;eip=0x0031be; 	X(PUSH(ax));	// 83225 push    ax ;~ 2331:31BE
cs=0x2331;eip=0x0031bf; 	R(CALL(sub_349b1,0));	// 83226 call    sub_349B1 ;~ 2331:31BF
cs=0x2331;eip=0x0031c2; 	X(PUSH(dx));	// 83227 push    dx ;~ 2331:31C2
cs=0x2331;eip=0x0031c3; 	X(PUSH(ax));	// 83228 push    ax ;~ 2331:31C3
cs=0x2331;eip=0x0031c4; 	T(MOV(ax, 0x28));	// 83229 mov     ax, 28h ; '(' ;~ 2331:31C4
cs=0x2331;eip=0x0031c7; 	X(PUSH(ax));	// 83230 push    ax ;~ 2331:31C7
cs=0x2331;eip=0x0031c8; 	R(CALL(sub_33f01,0));	// 83231 call    sub_33F01 ;~ 2331:31C8
cs=0x2331;eip=0x0031cb; 	X(MOV(*(dw*)(raddr(ss,bp+var_54)), ax));	// 83232 mov     [bp+var_54], ax ;~ 2331:31CB
cs=0x2331;eip=0x0031ce; 	T(MOV(ax, 0x81));	// 83233 mov     ax, 81h ; 'Å' ;~ 2331:31CE
cs=0x2331;eip=0x0031d1; 	X(PUSH(ax));	// 83234 push    ax ;~ 2331:31D1
cs=0x2331;eip=0x0031d2; 	R(CALLF(sub_2937a,0));	// 83235 call    sub_2937A ;~ 2331:31D2
cs=0x2331;eip=0x0031d7; 	T(SHL(ax, 1));	// 83236 shl     ax, 1 ;~ 2331:31D7
cs=0x2331;eip=0x0031d9; 	T(INC(ax));	// 83237 inc     ax ;~ 2331:31D9
cs=0x2331;eip=0x0031da; 	X(MOV(*(dw*)(raddr(ss,bp+var_58)), ax));	// 83238 mov     [bp+var_58], ax ;~ 2331:31DA
cs=0x2331;eip=0x0031dd; 	X(PUSH(ax));	// 83239 push    ax ;~ 2331:31DD
cs=0x2331;eip=0x0031de; 	R(CALL(sub_349b1,0));	// 83240 call    sub_349B1 ;~ 2331:31DE
cs=0x2331;eip=0x0031e1; 	X(PUSH(dx));	// 83241 push    dx ;~ 2331:31E1
cs=0x2331;eip=0x0031e2; 	X(PUSH(ax));	// 83242 push    ax ;~ 2331:31E2
cs=0x2331;eip=0x0031e3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_54))));	// 83243 mov     ax, [bp+var_54] ;~ 2331:31E3
cs=0x2331;eip=0x0031e6; 	T(ADD(ax, 0x0A));	// 83244 add     ax, 0Ah ;~ 2331:31E6
cs=0x2331;eip=0x0031e9; 	X(PUSH(ax));	// 83245 push    ax ;~ 2331:31E9
cs=0x2331;eip=0x0031ea; 	R(CALL(sub_33f01,0));	// 83246 call    sub_33F01 ;~ 2331:31EA
cs=0x2331;eip=0x0031ed; 	X(MOV(*(dw*)(raddr(ss,bp+var_54)), ax));	// 83247 mov     [bp+var_54], ax ;~ 2331:31ED
cs=0x2331;eip=0x0031f0; 	X(PUSH(*(dw*)((&unk_5651c))));	// 83248 push    word ptr unk_5651C ;~ 2331:31F0
cs=0x2331;eip=0x0031f4; 	X(PUSH(word_5651a));	// 83249 push    word_5651A ;~ 2331:31F4
cs=0x2331;eip=0x0031f8; 	R(CALLF(sub_3174e,0));	// 83250 call    sub_3174E ;~ 2331:31F8
cs=0x2331;eip=0x0031fd; 	T(SUB(si, si));	// 83251 sub     si, si ;~ 2331:31FD
cs=0x2331;eip=0x0031ff; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_58))));	// 83252 mov     di, [bp+var_58] ;~ 2331:31FF
cs=0x2331;eip=0x003202; 	T(INC(di));	// 83253 inc     di ;~ 2331:3202
cs=0x2331;eip=0x003203; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_54))));	// 83254 mov     ax, [bp+var_54] ;~ 2331:3203
cs=0x2331;eip=0x003206; 	T(ADD(ax, 0x0A));	// 83255 add     ax, 0Ah ;~ 2331:3206
cs=0x2331;eip=0x003209; 	X(MOV(*(dw*)(raddr(ss,bp+var_ae)), ax));	// 83256 mov     [bp+var_AE], ax ;~ 2331:3209
loc_34afd:
	// 9754 
cs=0x2331;eip=0x00320d; 	T(ax = bp+var_52);	// 83260 lea     ax, [bp+var_52] ;~ 2331:320D
cs=0x2331;eip=0x003210; 	X(PUSH(ax));	// 83261 push    ax ;~ 2331:3210
cs=0x2331;eip=0x003211; 	X(PUSH(*(dw*)(raddr(ss,bp+var_ae))));	// 83262 push    [bp+var_AE] ;~ 2331:3211
cs=0x2331;eip=0x003215; 	T(MOV(ax, 1));	// 83263 mov     ax, 1 ;~ 2331:3215
cs=0x2331;eip=0x003218; 	X(PUSH(ax));	// 83264 push    ax ;~ 2331:3218
cs=0x2331;eip=0x003219; 	R(CALL(sub_34078,0));	// 83265 call    sub_34078 ;~ 2331:3219
cs=0x2331;eip=0x00321c; 	X(MOV(*(raddr(ss,bp+var_aa)), al));	// 83266 mov     [bp+var_AA], al ;~ 2331:321C
cs=0x2331;eip=0x003220; 	T(OR(al, al));	// 83267 or      al, al ;~ 2331:3220
cs=0x2331;eip=0x003222; 	R(JZ(loc_34afd));	// 83268 jz      short loc_34AFD ;~ 2331:3222
cs=0x2331;eip=0x003224; 	T(CMP(*(raddr(ss,bp+var_52)), 0));	// 83269 cmp     [bp+var_52], 0 ;~ 2331:3224
cs=0x2331;eip=0x003228; 	R(JZ(loc_34afd));	// 83270 jz      short loc_34AFD ;~ 2331:3228
cs=0x2331;eip=0x00322a; 	T(ax = bp+var_a8);	// 83271 lea     ax, [bp+var_A8] ;~ 2331:322A
cs=0x2331;eip=0x00322e; 	X(PUSH(ax));	// 83272 push    ax ;~ 2331:322E
cs=0x2331;eip=0x00322f; 	X(PUSH(di));	// 83273 push    di ;~ 2331:322F
cs=0x2331;eip=0x003230; 	R(CALL(sub_349b1,0));	// 83274 call    sub_349B1 ;~ 2331:3230
cs=0x2331;eip=0x003233; 	X(PUSH(dx));	// 83275 push    dx ;~ 2331:3233
cs=0x2331;eip=0x003234; 	X(PUSH(ax));	// 83276 push    ax ;~ 2331:3234
cs=0x2331;eip=0x003235; 	R(CALLF(sub_318f0,0));	// 83277 call    sub_318F0 ;~ 2331:3235
cs=0x2331;eip=0x00323a; 	T(ax = bp+var_52);	// 83278 lea     ax, [bp+var_52] ;~ 2331:323A
cs=0x2331;eip=0x00323d; 	X(PUSH(ax));	// 83279 push    ax ;~ 2331:323D
cs=0x2331;eip=0x00323e; 	R(CALL(sub_349f3,0));	// 83280 call    sub_349F3 ;~ 2331:323E
cs=0x2331;eip=0x003241; 	T(ax = bp+var_a8);	// 83281 lea     ax, [bp+var_A8] ;~ 2331:3241
cs=0x2331;eip=0x003245; 	X(PUSH(ax));	// 83282 push    ax ;~ 2331:3245
cs=0x2331;eip=0x003246; 	R(CALL(sub_349f3,0));	// 83283 call    sub_349F3 ;~ 2331:3246
cs=0x2331;eip=0x003249; 	T(ax = bp+var_a8);	// 83284 lea     ax, [bp+var_A8] ;~ 2331:3249
cs=0x2331;eip=0x00324d; 	X(PUSH(ax));	// 83285 push    ax ;~ 2331:324D
cs=0x2331;eip=0x00324e; 	T(ax = bp+var_52);	// 83286 lea     ax, [bp+var_52] ;~ 2331:324E
cs=0x2331;eip=0x003251; 	X(PUSH(ax));	// 83287 push    ax ;~ 2331:3251
cs=0x2331;eip=0x003252; 	R(CALLF(sub_10454,0));	// 83288 call    sub_10454 ;~ 2331:3252
cs=0x2331;eip=0x003257; 	T(ADD(sp, 4));	// 83289 add     sp, 4 ;~ 2331:3257
cs=0x2331;eip=0x00325a; 	T(OR(ax, ax));	// 83290 or      ax, ax ;~ 2331:325A
cs=0x2331;eip=0x00325c; 	R(JNZ(loc_34b5d));	// 83291 jnz     short loc_34B5D ;~ 2331:325C
cs=0x2331;eip=0x00325e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), si));	// 83292 mov     [bp+var_2], si ;~ 2331:325E
cs=0x2331;eip=0x003261; 	X(PUSH(cs));	// 83293 push    cs ;~ 2331:3261
cs=0x2331;eip=0x003262; 	R(CALL(sub_3499f,0));	// 83294 call    near ptr sub_3499F ;~ 2331:3262
cs=0x2331;eip=0x003265; 	X(MOV(unk_4a45b, 1));	// 83295 mov     byte ptr unk_4A45B, 1 ;~ 2331:3265
cs=0x2331;eip=0x00326a; 	R(JMP(loc_34a48));	// 83296 jmp     loc_34A48 ;~ 2331:326A
loc_34b5d:
	// 9755 
cs=0x2331;eip=0x00326d; 	T(INC(si));	// 83300 inc     si ;~ 2331:326D
cs=0x2331;eip=0x00326e; 	T(CMP(si, 3));	// 83301 cmp     si, 3 ;~ 2331:326E
cs=0x2331;eip=0x003271; 	R(JL(loc_34afd));	// 83302 jl      short loc_34AFD ;~ 2331:3271
cs=0x2331;eip=0x003273; 	T(MOV(ax, 0x85));	// 83303 mov     ax, 85h ; 'Ö' ;~ 2331:3273
cs=0x2331;eip=0x003276; 	X(PUSH(ax));	// 83304 push    ax ;~ 2331:3276
cs=0x2331;eip=0x003277; 	R(CALL(sub_33056,0));	// 83305 call    sub_33056 ;~ 2331:3277
cs=0x2331;eip=0x00327a; 	X(PUSH(ax));	// 83306 push    ax ;~ 2331:327A
cs=0x2331;eip=0x00327b; 	R(CALLF(sub_2f7e0,0));	// 83307 call    sub_2F7E0 ;~ 2331:327B
cs=0x2331;eip=0x003280; 	R(JMP(loc_34afd));	// 83309 jmp     short loc_34AFD ;~ 2331:3280
loc_34b72:
	// 9756 
cs=0x2331;eip=0x003282; 	X(POP(si));	// 83313 pop     si ;~ 2331:3282
cs=0x2331;eip=0x003283; 	X(POP(di));	// 83314 pop     di ;~ 2331:3283
cs=0x2331;eip=0x003284; 	T(MOV(sp, bp));	// 83315 mov     sp, bp ;~ 2331:3284
cs=0x2331;eip=0x003286; 	X(POP(bp));	// 83316 pop     bp ;~ 2331:3286
cs=0x2331;eip=0x003287; 	R(RETF(0));	// 83317 retf ;~ 2331:3287
sub_34b78:
	// 83325 
#undef var_c
#define var_c -0x0C
	// 83328 var_C           = word ptr -0Ch ;~ 2331:3288
#undef var_a
#define var_a -0x0A
	// 83329 var_A           = word ptr -0Ah ;~ 2331:3288
#undef var_8
#define var_8 -8
	// 83330 var_8           = word ptr -8 ;~ 2331:3288
#undef var_6
#define var_6 -6
	// 83331 var_6           = word ptr -6 ;~ 2331:3288
#undef arg_0
#define arg_0 6
	// 83332 arg_0           = byte ptr  6 ;~ 2331:3288
cs=0x2331;eip=0x003288; 	X(PUSH(bp));	// 83334 push    bp ;~ 2331:3288
cs=0x2331;eip=0x003289; 	T(MOV(bp, sp));	// 83335 mov     bp, sp ;~ 2331:3289
cs=0x2331;eip=0x00328b; 	T(SUB(sp, 0x0C));	// 83336 sub     sp, 0Ch ;~ 2331:328B
cs=0x2331;eip=0x00328e; 	X(PUSH(di));	// 83337 push    di ;~ 2331:328E
cs=0x2331;eip=0x00328f; 	X(PUSH(si));	// 83338 push    si ;~ 2331:328F
cs=0x2331;eip=0x003290; 	T(MOV(bx, *(dw*)((&unk_47ab2))));	// 83339 mov     bx, word ptr unk_47AB2 ;~ 2331:3290
cs=0x2331;eip=0x003294; 	T(MOV(al, *(raddr(ds,bx+0x335C))));	// 83340 mov     al, [bx+335Ch] ;~ 2331:3294
cs=0x2331;eip=0x003298; 	T(SUB(ah, ah));	// 83341 sub     ah, ah ;~ 2331:3298
cs=0x2331;eip=0x00329a; 	X(MOV(*(dw*)((&unk_56d0e)), ax));	// 83342 mov     word ptr unk_56D0E, ax ;~ 2331:329A
cs=0x2331;eip=0x00329d; 	T(SUB(si, si));	// 83343 sub     si, si ;~ 2331:329D
cs=0x2331;eip=0x00329f; 	T(CMP(ax, si));	// 83344 cmp     ax, si ;~ 2331:329F
cs=0x2331;eip=0x0032a1; 	R(JLE(loc_34be4));	// 83345 jle     short loc_34BE4 ;~ 2331:32A1
cs=0x2331;eip=0x0032a3; 	T(MOV(ax, si));	// 83346 mov     ax, si ;~ 2331:32A3
cs=0x2331;eip=0x0032a5; 	T(SHL(ax, 1));	// 83347 shl     ax, 1 ;~ 2331:32A5
cs=0x2331;eip=0x0032a7; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 83348 mov     [bp+var_C], ax ;~ 2331:32A7
cs=0x2331;eip=0x0032aa; 	T(ADD(ax, 0x0F360));	// 83349 add     ax, 0F360h ;~ 2331:32AA
cs=0x2331;eip=0x0032ad; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 83350 mov     [bp+var_6], ax ;~ 2331:32AD
cs=0x2331;eip=0x0032b0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 83351 mov     ax, [bp+var_C] ;~ 2331:32B0
cs=0x2331;eip=0x0032b3; 	T(ADD(ax, 0x0F36A));	// 83352 add     ax, 0F36Ah ;~ 2331:32B3
cs=0x2331;eip=0x0032b6; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 83353 mov     [bp+var_8], ax ;~ 2331:32B6
cs=0x2331;eip=0x0032b9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 83354 mov     ax, [bp+var_C] ;~ 2331:32B9
cs=0x2331;eip=0x0032bc; 	T(ADD(ax, 0x0F372));	// 83355 add     ax, 0F372h ;~ 2331:32BC
cs=0x2331;eip=0x0032bf; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 83356 mov     [bp+var_A], ax ;~ 2331:32BF
loc_34bb2:
	// 9757 
cs=0x2331;eip=0x0032c2; 	X(PUSH(si));	// 83359 push    si ;~ 2331:32C2
cs=0x2331;eip=0x0032c3; 	R(CALL(sub_34c2f,0));	// 83360 call    sub_34C2F ;~ 2331:32C3
cs=0x2331;eip=0x0032c6; 	T(MOV(di, ax));	// 83361 mov     di, ax ;~ 2331:32C6
cs=0x2331;eip=0x0032c8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_6))));	// 83362 mov     bx, [bp+var_6] ;~ 2331:32C8
cs=0x2331;eip=0x0032cb; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 83363 mov     ax, [di] ;~ 2331:32CB
cs=0x2331;eip=0x0032cd; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 83364 mov     [bx], ax ;~ 2331:32CD
cs=0x2331;eip=0x0032cf; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 83365 mov     bx, [bp+var_8] ;~ 2331:32CF
cs=0x2331;eip=0x0032d2; 	T(MOV(ax, *(dw*)(raddr(ds,di+2))));	// 83366 mov     ax, [di+2] ;~ 2331:32D2
cs=0x2331;eip=0x0032d5; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 83367 mov     [bx], ax ;~ 2331:32D5
cs=0x2331;eip=0x0032d7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_a))));	// 83368 mov     bx, [bp+var_A] ;~ 2331:32D7
cs=0x2331;eip=0x0032da; 	T(MOV(al, *(raddr(ds,di+4))));	// 83369 mov     al, [di+4] ;~ 2331:32DA
cs=0x2331;eip=0x0032dd; 	T(SUB(ah, ah));	// 83370 sub     ah, ah ;~ 2331:32DD
cs=0x2331;eip=0x0032df; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 83371 mov     [bx], ax ;~ 2331:32DF
cs=0x2331;eip=0x0032e1; 	X(ADD(*(dw*)(raddr(ss,bp+var_6)), 2));	// 83372 add     [bp+var_6], 2 ;~ 2331:32E1
cs=0x2331;eip=0x0032e5; 	X(ADD(*(dw*)(raddr(ss,bp+var_8)), 2));	// 83373 add     [bp+var_8], 2 ;~ 2331:32E5
cs=0x2331;eip=0x0032e9; 	X(ADD(*(dw*)(raddr(ss,bp+var_a)), 2));	// 83374 add     [bp+var_A], 2 ;~ 2331:32E9
cs=0x2331;eip=0x0032ed; 	T(INC(si));	// 83375 inc     si ;~ 2331:32ED
cs=0x2331;eip=0x0032ee; 	T(CMP(*(dw*)((&unk_56d0e)), si));	// 83376 cmp     word ptr unk_56D0E, si ;~ 2331:32EE
cs=0x2331;eip=0x0032f2; 	R(JG(loc_34bb2));	// 83377 jg      short loc_34BB2 ;~ 2331:32F2
loc_34be4:
	// 9758 
cs=0x2331;eip=0x0032f4; 	T(CMP(*(raddr(ss,bp+arg_0)), 0));	// 83380 cmp     [bp+arg_0], 0 ;~ 2331:32F4
cs=0x2331;eip=0x0032f8; 	R(JZ(loc_34bf6));	// 83381 jz      short loc_34BF6 ;~ 2331:32F8
cs=0x2331;eip=0x0032fa; 	X(MOV(*(dw*)((&unk_56d18)), 0));	// 83382 mov     word ptr unk_56D18, 0 ;~ 2331:32FA
cs=0x2331;eip=0x003300; 	T(MOV(ax, *(dw*)((&unk_56d10))));	// 83383 mov     ax, word ptr unk_56D10 ;~ 2331:3300
cs=0x2331;eip=0x003303; 	X(MOV(*(dw*)((&unk_56d0a)), ax));	// 83384 mov     word ptr unk_56D0A, ax ;~ 2331:3303
loc_34bf6:
	// 9759 
cs=0x2331;eip=0x003306; 	T(MOV(al, 0x0F));	// 83387 mov     al, 0Fh ;~ 2331:3306
cs=0x2331;eip=0x003308; 	X(MOV(unk_56d2b, al));	// 83388 mov     byte ptr unk_56D2B, al ;~ 2331:3308
cs=0x2331;eip=0x00330b; 	X(MOV(unk_56d2a, al));	// 83389 mov     byte ptr unk_56D2A, al ;~ 2331:330B
cs=0x2331;eip=0x00330e; 	X(POP(si));	// 83390 pop     si ;~ 2331:330E
cs=0x2331;eip=0x00330f; 	X(POP(di));	// 83391 pop     di ;~ 2331:330F
cs=0x2331;eip=0x003310; 	T(MOV(sp, bp));	// 83392 mov     sp, bp ;~ 2331:3310
cs=0x2331;eip=0x003312; 	X(POP(bp));	// 83393 pop     bp ;~ 2331:3312
cs=0x2331;eip=0x003313; 	R(RETF(0));	// 83394 retf ;~ 2331:3313
sub_34c04:
	// 83402 
#undef arg_0
#define arg_0 4
	// 83404 arg_0           = word ptr  4 ;~ 2331:3314
#undef arg_2
#define arg_2 6
	// 83405 arg_2           = word ptr  6 ;~ 2331:3314
cs=0x2331;eip=0x003314; 	X(PUSH(bp));	// 83407 push    bp ;~ 2331:3314
cs=0x2331;eip=0x003315; 	T(MOV(bp, sp));	// 83408 mov     bp, sp ;~ 2331:3315
cs=0x2331;eip=0x003317; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 83409 mov     bx, [bp+arg_2] ;~ 2331:3317
cs=0x2331;eip=0x00331a; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 83410 push    word ptr [bx] ;~ 2331:331A
cs=0x2331;eip=0x00331c; 	T(MOV(ax, 1));	// 83411 mov     ax, 1 ;~ 2331:331C
cs=0x2331;eip=0x00331f; 	X(PUSH(ax));	// 83412 push    ax ;~ 2331:331F
cs=0x2331;eip=0x003320; 	R(CALLF(sub_311d0,0));	// 83413 call    sub_311D0 ;~ 2331:3320
cs=0x2331;eip=0x003325; 	X(PUSH(ax));	// 83414 push    ax ;~ 2331:3325
cs=0x2331;eip=0x003326; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 83415 mov     bx, [bp+arg_2] ;~ 2331:3326
cs=0x2331;eip=0x003329; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 83416 push    word ptr [bx+2] ;~ 2331:3329
cs=0x2331;eip=0x00332c; 	T(MOV(ax, 0x347C));	// 83417 mov     ax, 347Ch ;~ 2331:332C
cs=0x2331;eip=0x00332f; 	X(PUSH(ax));	// 83418 push    ax ;~ 2331:332F
cs=0x2331;eip=0x003330; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 83419 push    [bp+arg_0] ;~ 2331:3330
cs=0x2331;eip=0x003333; 	R(CALLF(sub_2f1d9,0));	// 83420 call    sub_2F1D9 ;~ 2331:3333
cs=0x2331;eip=0x003338; 	T(ADD(sp, 8));	// 83421 add     sp, 8 ;~ 2331:3338
cs=0x2331;eip=0x00333b; 	X(POP(bp));	// 83422 pop     bp ;~ 2331:333B
cs=0x2331;eip=0x00333c; 	R(RETN(4));	// 83423 retn    4 ;~ 2331:333C
sub_34c2f:
	// 83431 
#undef arg_0
#define arg_0 4
	// 83434 arg_0           = word ptr  4 ;~ 2331:333F
cs=0x2331;eip=0x00333f; 	X(PUSH(bp));	// 83436 push    bp ;~ 2331:333F
cs=0x2331;eip=0x003340; 	T(MOV(bp, sp));	// 83437 mov     bp, sp ;~ 2331:3340
cs=0x2331;eip=0x003342; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 83438 mov     bx, [bp+arg_0] ;~ 2331:3342
cs=0x2331;eip=0x003345; 	T(SHL(bx, 1));	// 83439 shl     bx, 1 ;~ 2331:3345
cs=0x2331;eip=0x003347; 	T(MOV(ax, 5));	// 83440 mov     ax, 5 ;~ 2331:3347
cs=0x2331;eip=0x00334a; 	X(IMUL1_2(*(dw*)(raddr(ds,bx+0x346C))));	// 83441 imul    word ptr [bx+346Ch] ;~ 2331:334A
cs=0x2331;eip=0x00334e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 83442 mov     bx, [bp+arg_0] ;~ 2331:334E
cs=0x2331;eip=0x003351; 	T(MOV(cx, *(dw*)((&unk_47ab2))));	// 83443 mov     cx, word ptr unk_47AB2 ;~ 2331:3351
cs=0x2331;eip=0x003355; 	T(SHL(cx, 1));	// 83444 shl     cx, 1 ;~ 2331:3355
cs=0x2331;eip=0x003357; 	T(SHL(cx, 1));	// 83445 shl     cx, 1 ;~ 2331:3357
cs=0x2331;eip=0x003359; 	T(ADD(bx, cx));	// 83446 add     bx, cx ;~ 2331:3359
cs=0x2331;eip=0x00335b; 	T(SHL(bx, 1));	// 83447 shl     bx, 1 ;~ 2331:335B
cs=0x2331;eip=0x00335d; 	T(SHL(bx, 1));	// 83448 shl     bx, 1 ;~ 2331:335D
cs=0x2331;eip=0x00335f; 	T(MOV(cx, ax));	// 83449 mov     cx, ax ;~ 2331:335F
cs=0x2331;eip=0x003361; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x342E))));	// 83450 mov     ax, [bx+342Eh] ;~ 2331:3361
cs=0x2331;eip=0x003365; 	T(ADD(ax, cx));	// 83451 add     ax, cx ;~ 2331:3365
cs=0x2331;eip=0x003367; 	X(POP(bp));	// 83452 pop     bp ;~ 2331:3367
cs=0x2331;eip=0x003368; 	R(RETN(2));	// 83453 retn    2 ;~ 2331:3368
sub_34c5b:
	// 83461 
#undef var_6
#define var_6 -6
	// 83463 var_6           = word ptr -6 ;~ 2331:336B
cs=0x2331;eip=0x00336b; 	X(PUSH(bp));	// 83465 push    bp ;~ 2331:336B
cs=0x2331;eip=0x00336c; 	T(MOV(bp, sp));	// 83466 mov     bp, sp ;~ 2331:336C
cs=0x2331;eip=0x00336e; 	T(SUB(sp, 6));	// 83467 sub     sp, 6 ;~ 2331:336E
cs=0x2331;eip=0x003371; 	X(PUSH(di));	// 83468 push    di ;~ 2331:3371
cs=0x2331;eip=0x003372; 	X(PUSH(si));	// 83469 push    si ;~ 2331:3372
cs=0x2331;eip=0x003373; 	X(MOV(*(dw*)((&unk_47bde)), 0x0FF00));	// 83470 mov     word ptr unk_47BDE, 0FF00h ;~ 2331:3373
cs=0x2331;eip=0x003379; 	X(MOV(unk_56885, 0));	// 83471 mov     byte ptr unk_56885, 0 ;~ 2331:3379
cs=0x2331;eip=0x00337e; 	R(CALL(sub_3318a,0));	// 83472 call    sub_3318A ;~ 2331:337E
cs=0x2331;eip=0x003381; 	T(MOV(ax, 0x7B));	// 83473 mov     ax, 7Bh ; '{' ;~ 2331:3381
cs=0x2331;eip=0x003384; 	X(PUSH(ax));	// 83474 push    ax ;~ 2331:3384
cs=0x2331;eip=0x003385; 	R(CALL(sub_33056,0));	// 83475 call    sub_33056 ;~ 2331:3385
cs=0x2331;eip=0x003388; 	X(PUSH(ds));	// 83476 push    ds ;~ 2331:3388
cs=0x2331;eip=0x003389; 	X(PUSH(ax));	// 83477 push    ax ;~ 2331:3389
cs=0x2331;eip=0x00338a; 	T(MOV(ax, 0x1A));	// 83478 mov     ax, 1Ah ;~ 2331:338A
cs=0x2331;eip=0x00338d; 	X(PUSH(ax));	// 83479 push    ax ;~ 2331:338D
cs=0x2331;eip=0x00338e; 	R(CALL(sub_33f01,0));	// 83480 call    sub_33F01 ;~ 2331:338E
cs=0x2331;eip=0x003391; 	R(CALL(sub_3317c,0));	// 83481 call    sub_3317C ;~ 2331:3391
cs=0x2331;eip=0x003394; 	R(CALL(sub_33161,0));	// 83482 call    sub_33161 ;~ 2331:3394
cs=0x2331;eip=0x003397; 	T(MOV(ax, 0x7A));	// 83483 mov     ax, 7Ah ; 'z' ;~ 2331:3397
cs=0x2331;eip=0x00339a; 	X(PUSH(ax));	// 83484 push    ax ;~ 2331:339A
cs=0x2331;eip=0x00339b; 	R(CALL(sub_33056,0));	// 83485 call    sub_33056 ;~ 2331:339B
cs=0x2331;eip=0x00339e; 	X(PUSH(ax));	// 83486 push    ax ;~ 2331:339E
cs=0x2331;eip=0x00339f; 	T(MOV(ax, 0x20));	// 83487 mov     ax, 20h ; ' ' ;~ 2331:339F
cs=0x2331;eip=0x0033a2; 	X(PUSH(ax));	// 83488 push    ax ;~ 2331:33A2
cs=0x2331;eip=0x0033a3; 	T(MOV(ax, 0x11));	// 83489 mov     ax, 11h ;~ 2331:33A3
cs=0x2331;eip=0x0033a6; 	X(PUSH(ax));	// 83490 push    ax ;~ 2331:33A6
cs=0x2331;eip=0x0033a7; 	R(CALLF(sub_2dce4,0));	// 83491 call    sub_2DCE4 ;~ 2331:33A7
cs=0x2331;eip=0x0033ac; 	T(MOV(ax, 0x20));	// 83492 mov     ax, 20h ; ' ' ;~ 2331:33AC
cs=0x2331;eip=0x0033af; 	X(PUSH(ax));	// 83493 push    ax ;~ 2331:33AF
cs=0x2331;eip=0x0033b0; 	T(MOV(ax, 0x6F));	// 83494 mov     ax, 6Fh ; 'o' ;~ 2331:33B0
cs=0x2331;eip=0x0033b3; 	X(PUSH(ax));	// 83495 push    ax ;~ 2331:33B3
cs=0x2331;eip=0x0033b4; 	T(MOV(ax, 0x17));	// 83496 mov     ax, 17h ;~ 2331:33B4
cs=0x2331;eip=0x0033b7; 	X(PUSH(ax));	// 83497 push    ax ;~ 2331:33B7
cs=0x2331;eip=0x0033b8; 	T(MOV(ax, 0x0FF07));	// 83498 mov     ax, 0FF07h ;~ 2331:33B8
cs=0x2331;eip=0x0033bb; 	X(PUSH(ax));	// 83499 push    ax ;~ 2331:33BB
cs=0x2331;eip=0x0033bc; 	R(CALLF(sub_203c2,0));	// 83500 call    sub_203C2 ;~ 2331:33BC
cs=0x2331;eip=0x0033c1; 	X(MOV(*(dw*)((&unk_545f0)), 1));	// 83501 mov     word ptr unk_545F0, 1 ;~ 2331:33C1
cs=0x2331;eip=0x0033c7; 	T(MOV(di, 0x37));	// 83502 mov     di, 37h ; '7' ;~ 2331:33C7
cs=0x2331;eip=0x0033ca; 	T(SUB(si, si));	// 83503 sub     si, si ;~ 2331:33CA
cs=0x2331;eip=0x0033cc; 	T(MOV(bx, *(dw*)((&unk_47ab2))));	// 83504 mov     bx, word ptr unk_47AB2 ;~ 2331:33CC
cs=0x2331;eip=0x0033d0; 	T(MOV(al, *(raddr(ds,bx+0x335C))));	// 83505 mov     al, [bx+335Ch] ;~ 2331:33D0
cs=0x2331;eip=0x0033d4; 	T(SUB(ah, ah));	// 83506 sub     ah, ah ;~ 2331:33D4
cs=0x2331;eip=0x0033d6; 	T(OR(ax, ax));	// 83507 or      ax, ax ;~ 2331:33D6
cs=0x2331;eip=0x0033d8; 	R(JZ(loc_34cfe));	// 83508 jz      short loc_34CFE ;~ 2331:33D8
cs=0x2331;eip=0x0033da; 	T(MOV(ax, si));	// 83509 mov     ax, si ;~ 2331:33DA
cs=0x2331;eip=0x0033dc; 	T(SHL(ax, 1));	// 83510 shl     ax, 1 ;~ 2331:33DC
cs=0x2331;eip=0x0033de; 	T(ADD(ax, 0x0CC42));	// 83511 add     ax, 0CC42h ;~ 2331:33DE
cs=0x2331;eip=0x0033e1; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 83512 mov     [bp+var_6], ax ;~ 2331:33E1
loc_34cd4:
	// 9760 
cs=0x2331;eip=0x0033e4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_6))));	// 83515 mov     bx, [bp+var_6] ;~ 2331:33E4
cs=0x2331;eip=0x0033e7; 	X(MOV(*(dw*)(raddr(ds,bx)), di));	// 83516 mov     [bx], di ;~ 2331:33E7
cs=0x2331;eip=0x0033e9; 	X(PUSH(si));	// 83517 push    si ;~ 2331:33E9
cs=0x2331;eip=0x0033ea; 	R(CALL(sub_34d59,0));	// 83518 call    sub_34D59 ;~ 2331:33EA
cs=0x2331;eip=0x0033ed; 	X(PUSH(si));	// 83519 push    si ;~ 2331:33ED
cs=0x2331;eip=0x0033ee; 	R(CALL(sub_34d04,0));	// 83520 call    sub_34D04 ;~ 2331:33EE
cs=0x2331;eip=0x0033f1; 	T(MOV(cx, 7));	// 83521 mov     cx, 7 ;~ 2331:33F1
cs=0x2331;eip=0x0033f4; 	T(IMUL1_2(cx));	// 83522 imul    cx ;~ 2331:33F4
cs=0x2331;eip=0x0033f6; 	T(ADD(ax, 0x11));	// 83523 add     ax, 11h ;~ 2331:33F6
cs=0x2331;eip=0x0033f9; 	T(ADD(di, ax));	// 83524 add     di, ax ;~ 2331:33F9
cs=0x2331;eip=0x0033fb; 	X(ADD(*(dw*)(raddr(ss,bp+var_6)), 2));	// 83525 add     [bp+var_6], 2 ;~ 2331:33FB
cs=0x2331;eip=0x0033ff; 	T(INC(si));	// 83526 inc     si ;~ 2331:33FF
cs=0x2331;eip=0x003400; 	T(MOV(bx, *(dw*)((&unk_47ab2))));	// 83527 mov     bx, word ptr unk_47AB2 ;~ 2331:3400
cs=0x2331;eip=0x003404; 	T(MOV(al, *(raddr(ds,bx+0x335C))));	// 83528 mov     al, [bx+335Ch] ;~ 2331:3404
cs=0x2331;eip=0x003408; 	T(SUB(ah, ah));	// 83529 sub     ah, ah ;~ 2331:3408
cs=0x2331;eip=0x00340a; 	T(CMP(ax, si));	// 83530 cmp     ax, si ;~ 2331:340A
cs=0x2331;eip=0x00340c; 	R(JA(loc_34cd4));	// 83531 ja      short loc_34CD4 ;~ 2331:340C
loc_34cfe:
	// 9761 
cs=0x2331;eip=0x00340e; 	X(POP(si));	// 83534 pop     si ;~ 2331:340E
cs=0x2331;eip=0x00340f; 	X(POP(di));	// 83535 pop     di ;~ 2331:340F
cs=0x2331;eip=0x003410; 	T(MOV(sp, bp));	// 83536 mov     sp, bp ;~ 2331:3410
cs=0x2331;eip=0x003412; 	X(POP(bp));	// 83537 pop     bp ;~ 2331:3412
cs=0x2331;eip=0x003413; 	R(RETN(0));	// 83538 retn ;~ 2331:3413
sub_34d04:
	// 83546 
#undef var_4
#define var_4 -4
	// 83549 var_4           = word ptr -4 ;~ 2331:3414
#undef arg_0
#define arg_0 4
	// 83550 arg_0           = word ptr  4 ;~ 2331:3414
cs=0x2331;eip=0x003414; 	X(PUSH(bp));	// 83552 push    bp ;~ 2331:3414
cs=0x2331;eip=0x003415; 	T(MOV(bp, sp));	// 83553 mov     bp, sp ;~ 2331:3415
cs=0x2331;eip=0x003417; 	T(SUB(sp, 6));	// 83554 sub     sp, 6 ;~ 2331:3417
cs=0x2331;eip=0x00341a; 	X(PUSH(di));	// 83555 push    di ;~ 2331:341A
cs=0x2331;eip=0x00341b; 	X(PUSH(si));	// 83556 push    si ;~ 2331:341B
cs=0x2331;eip=0x00341c; 	T(SUB(si, si));	// 83557 sub     si, si ;~ 2331:341C
cs=0x2331;eip=0x00341e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 83558 mov     bx, [bp+arg_0] ;~ 2331:341E
cs=0x2331;eip=0x003421; 	T(MOV(ax, *(dw*)((&unk_47ab2))));	// 83559 mov     ax, word ptr unk_47AB2 ;~ 2331:3421
cs=0x2331;eip=0x003424; 	T(SHL(ax, 1));	// 83560 shl     ax, 1 ;~ 2331:3424
cs=0x2331;eip=0x003426; 	T(SHL(ax, 1));	// 83561 shl     ax, 1 ;~ 2331:3426
cs=0x2331;eip=0x003428; 	T(ADD(bx, ax));	// 83562 add     bx, ax ;~ 2331:3428
cs=0x2331;eip=0x00342a; 	T(SHL(bx, 1));	// 83563 shl     bx, 1 ;~ 2331:342A
cs=0x2331;eip=0x00342c; 	T(SHL(bx, 1));	// 83564 shl     bx, 1 ;~ 2331:342C
cs=0x2331;eip=0x00342e; 	T(MOV(bx, *(dw*)(raddr(ds,bx+0x342E))));	// 83565 mov     bx, [bx+342Eh] ;~ 2331:342E
cs=0x2331;eip=0x003432; 	T(CMP(*(dw*)(raddr(ds,bx)), si));	// 83566 cmp     [bx], si ;~ 2331:3432
cs=0x2331;eip=0x003434; 	R(JZ(loc_34d4f));	// 83567 jz      short loc_34D4F ;~ 2331:3434
cs=0x2331;eip=0x003436; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 83568 mov     bx, [bp+arg_0] ;~ 2331:3436
cs=0x2331;eip=0x003439; 	T(MOV(ax, *(dw*)((&unk_47ab2))));	// 83569 mov     ax, word ptr unk_47AB2 ;~ 2331:3439
cs=0x2331;eip=0x00343c; 	T(SHL(ax, 1));	// 83570 shl     ax, 1 ;~ 2331:343C
cs=0x2331;eip=0x00343e; 	T(SHL(ax, 1));	// 83571 shl     ax, 1 ;~ 2331:343E
cs=0x2331;eip=0x003440; 	T(ADD(bx, ax));	// 83572 add     bx, ax ;~ 2331:3440
cs=0x2331;eip=0x003442; 	T(SHL(bx, 1));	// 83573 shl     bx, 1 ;~ 2331:3442
cs=0x2331;eip=0x003444; 	T(SHL(bx, 1));	// 83574 shl     bx, 1 ;~ 2331:3444
cs=0x2331;eip=0x003446; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x342E))));	// 83575 mov     ax, [bx+342Eh] ;~ 2331:3446
cs=0x2331;eip=0x00344a; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 83576 mov     [bp+var_4], ax ;~ 2331:344A
cs=0x2331;eip=0x00344d; 	T(MOV(di, ax));	// 83577 mov     di, ax ;~ 2331:344D
cs=0x2331;eip=0x00344f; 	T(MOV(ax, 5));	// 83578 mov     ax, 5 ;~ 2331:344F
cs=0x2331;eip=0x003452; 	T(IMUL1_2(si));	// 83579 imul    si ;~ 2331:3452
cs=0x2331;eip=0x003454; 	T(ADD(di, ax));	// 83580 add     di, ax ;~ 2331:3454
loc_34d46:
	// 9762 
cs=0x2331;eip=0x003456; 	T(ADD(di, 5));	// 83583 add     di, 5 ;~ 2331:3456
cs=0x2331;eip=0x003459; 	T(INC(si));	// 83584 inc     si ;~ 2331:3459
cs=0x2331;eip=0x00345a; 	T(CMP(*(dw*)(raddr(ds,di)), 0));	// 83585 cmp     word ptr [di], 0 ;~ 2331:345A
cs=0x2331;eip=0x00345d; 	R(JNZ(loc_34d46));	// 83586 jnz     short loc_34D46 ;~ 2331:345D
loc_34d4f:
	// 9763 
cs=0x2331;eip=0x00345f; 	T(MOV(ax, si));	// 83589 mov     ax, si ;~ 2331:345F
cs=0x2331;eip=0x003461; 	X(POP(si));	// 83590 pop     si ;~ 2331:3461
cs=0x2331;eip=0x003462; 	X(POP(di));	// 83591 pop     di ;~ 2331:3462
cs=0x2331;eip=0x003463; 	T(MOV(sp, bp));	// 83592 mov     sp, bp ;~ 2331:3463
cs=0x2331;eip=0x003465; 	X(POP(bp));	// 83593 pop     bp ;~ 2331:3465
cs=0x2331;eip=0x003466; 	R(RETN(2));	// 83594 retn    2 ;~ 2331:3466
sub_34d59:
	// 83602 
#undef var_62
#define var_62 -0x62
	// 83605 var_62          = word ptr -62h ;~ 2331:3469
#undef var_60
#define var_60 -0x60
	// 83606 var_60          = word ptr -60h ;~ 2331:3469
#undef var_5e
#define var_5e -0x5E
	// 83607 var_5E          = word ptr -5Eh ;~ 2331:3469
#undef var_5c
#define var_5c -0x5C
	// 83608 var_5C          = word ptr -5Ch ;~ 2331:3469
#undef var_5a
#define var_5a -0x5A
	// 83609 var_5A          = byte ptr -5Ah ;~ 2331:3469
#undef var_58
#define var_58 -0x58
	// 83610 var_58          = word ptr -58h ;~ 2331:3469
#undef var_56
#define var_56 -0x56
	// 83611 var_56          = word ptr -56h ;~ 2331:3469
#undef var_54
#define var_54 -0x54
	// 83612 var_54          = word ptr -54h ;~ 2331:3469
#undef var_52
#define var_52 -0x52
	// 83613 var_52          = byte ptr -52h ;~ 2331:3469
#undef var_2
#define var_2 -2
	// 83614 var_2           = word ptr -2 ;~ 2331:3469
#undef arg_0
#define arg_0 4
	// 83615 arg_0           = word ptr  4 ;~ 2331:3469
cs=0x2331;eip=0x003469; 	X(PUSH(bp));	// 83617 push    bp ;~ 2331:3469
cs=0x2331;eip=0x00346a; 	T(MOV(bp, sp));	// 83618 mov     bp, sp ;~ 2331:346A
cs=0x2331;eip=0x00346c; 	T(SUB(sp, 0x62));	// 83619 sub     sp, 62h ;~ 2331:346C
cs=0x2331;eip=0x00346f; 	X(PUSH(di));	// 83620 push    di ;~ 2331:346F
cs=0x2331;eip=0x003470; 	X(PUSH(si));	// 83621 push    si ;~ 2331:3470
cs=0x2331;eip=0x003471; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 83622 mov     bx, [bp+arg_0] ;~ 2331:3471
cs=0x2331;eip=0x003474; 	T(SHL(bx, 1));	// 83623 shl     bx, 1 ;~ 2331:3474
cs=0x2331;eip=0x003476; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x33BE))));	// 83624 mov     ax, [bx-33BEh] ;~ 2331:3476
cs=0x2331;eip=0x00347a; 	X(MOV(*(dw*)(raddr(ss,bp+var_54)), ax));	// 83625 mov     [bp+var_54], ax ;~ 2331:347A
cs=0x2331;eip=0x00347d; 	R(CALL(sub_3318a,0));	// 83626 call    sub_3318A ;~ 2331:347D
cs=0x2331;eip=0x003480; 	T(CMP(*(dw*)((&byte_47b2e)), 0));	// 83627 cmp     word ptr byte_47B2E, 0 ;~ 2331:3480
cs=0x2331;eip=0x003485; 	R(JNZ(loc_34d7b));	// 83628 jnz     short loc_34D7B ;~ 2331:3485
cs=0x2331;eip=0x003487; 	T(MOV(al, 0x0D));	// 83629 mov     al, 0Dh ;~ 2331:3487
cs=0x2331;eip=0x003489; 	R(JMP(loc_34d7d));	// 83630 jmp     short loc_34D7D ;~ 2331:3489
loc_34d7b:
	// 9764 
cs=0x2331;eip=0x00348b; 	T(MOV(al, 2));	// 83634 mov     al, 2 ;~ 2331:348B
loc_34d7d:
	// 9765 
cs=0x2331;eip=0x00348d; 	X(MOV(*(raddr(ss,bp+var_5a)), al));	// 83637 mov     [bp+var_5A], al ;~ 2331:348D
cs=0x2331;eip=0x003490; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 83638 mov     bx, [bp+arg_0] ;~ 2331:3490
cs=0x2331;eip=0x003493; 	T(MOV(ax, *(dw*)((&unk_47ab2))));	// 83639 mov     ax, word ptr unk_47AB2 ;~ 2331:3493
cs=0x2331;eip=0x003496; 	T(SHL(ax, 1));	// 83640 shl     ax, 1 ;~ 2331:3496
cs=0x2331;eip=0x003498; 	T(SHL(ax, 1));	// 83641 shl     ax, 1 ;~ 2331:3498
cs=0x2331;eip=0x00349a; 	T(ADD(bx, ax));	// 83642 add     bx, ax ;~ 2331:349A
cs=0x2331;eip=0x00349c; 	T(SHL(bx, 1));	// 83643 shl     bx, 1 ;~ 2331:349C
cs=0x2331;eip=0x00349e; 	T(SHL(bx, 1));	// 83644 shl     bx, 1 ;~ 2331:349E
cs=0x2331;eip=0x0034a0; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x342C))));	// 83645 mov     ax, [bx+342Ch] ;~ 2331:34A0
cs=0x2331;eip=0x0034a4; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 83646 mov     [bp+var_2], ax ;~ 2331:34A4
cs=0x2331;eip=0x0034a7; 	X(PUSH(ax));	// 83647 push    ax ;~ 2331:34A7
cs=0x2331;eip=0x0034a8; 	R(CALL(sub_35027,0));	// 83648 call    sub_35027 ;~ 2331:34A8
cs=0x2331;eip=0x0034ab; 	T(MOV(ax, 0x20));	// 83649 mov     ax, 20h ; ' ' ;~ 2331:34AB
cs=0x2331;eip=0x0034ae; 	X(PUSH(ax));	// 83650 push    ax ;~ 2331:34AE
cs=0x2331;eip=0x0034af; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 83651 push    [bp+var_2] ;~ 2331:34AF
cs=0x2331;eip=0x0034b2; 	R(CALLF(sub_2dcb2,0));	// 83652 call    sub_2DCB2 ;~ 2331:34B2
cs=0x2331;eip=0x0034b7; 	T(ADD(ax, 0x1F));	// 83653 add     ax, 1Fh ;~ 2331:34B7
cs=0x2331;eip=0x0034ba; 	X(PUSH(ax));	// 83654 push    ax ;~ 2331:34BA
cs=0x2331;eip=0x0034bb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_54))));	// 83655 mov     ax, [bp+var_54] ;~ 2331:34BB
cs=0x2331;eip=0x0034be; 	T(ADD(ax, 8));	// 83656 add     ax, 8 ;~ 2331:34BE
cs=0x2331;eip=0x0034c1; 	X(PUSH(ax));	// 83657 push    ax ;~ 2331:34C1
cs=0x2331;eip=0x0034c2; 	T(MOV(ax, *(dw*)((&unk_545f0))));	// 83658 mov     ax, word ptr unk_545F0 ;~ 2331:34C2
cs=0x2331;eip=0x0034c5; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 83659 cmp     [bp+arg_0], ax ;~ 2331:34C5
cs=0x2331;eip=0x0034c8; 	R(JNZ(loc_34dc1));	// 83660 jnz     short loc_34DC1 ;~ 2331:34C8
cs=0x2331;eip=0x0034ca; 	T(MOV(al, *(raddr(ss,bp+var_5a))));	// 83661 mov     al, [bp+var_5A] ;~ 2331:34CA
cs=0x2331;eip=0x0034cd; 	T(MOV(ah, 0x0FF));	// 83662 mov     ah, 0FFh ;~ 2331:34CD
cs=0x2331;eip=0x0034cf; 	R(JMP(loc_34dc4));	// 83663 jmp     short loc_34DC4 ;~ 2331:34CF
loc_34dc1:
	// 9766 
cs=0x2331;eip=0x0034d1; 	T(MOV(ax, 0x0FF0F));	// 83667 mov     ax, 0FF0Fh ;~ 2331:34D1
loc_34dc4:
	// 9767 
cs=0x2331;eip=0x0034d4; 	X(PUSH(ax));	// 83670 push    ax ;~ 2331:34D4
cs=0x2331;eip=0x0034d5; 	R(CALLF(sub_203c2,0));	// 83671 call    sub_203C2 ;~ 2331:34D5
cs=0x2331;eip=0x0034da; 	T(MOV(ax, *(dw*)((&unk_545f0))));	// 83672 mov     ax, word ptr unk_545F0 ;~ 2331:34DA
cs=0x2331;eip=0x0034dd; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 83673 cmp     [bp+arg_0], ax ;~ 2331:34DD
cs=0x2331;eip=0x0034e0; 	R(JNZ(loc_34dd9));	// 83674 jnz     short loc_34DD9 ;~ 2331:34E0
cs=0x2331;eip=0x0034e2; 	T(MOV(al, *(raddr(ss,bp+var_5a))));	// 83675 mov     al, [bp+var_5A] ;~ 2331:34E2
cs=0x2331;eip=0x0034e5; 	T(SUB(ah, ah));	// 83676 sub     ah, ah ;~ 2331:34E5
cs=0x2331;eip=0x0034e7; 	R(JMP(loc_34ddb));	// 83677 jmp     short loc_34DDB ;~ 2331:34E7
loc_34dd9:
	// 9768 
cs=0x2331;eip=0x0034e9; 	T(SUB(ax, ax));	// 83681 sub     ax, ax ;~ 2331:34E9
loc_34ddb:
	// 9769 
cs=0x2331;eip=0x0034eb; 	T(OR(ah, 0x0FF));	// 83684 or      ah, 0FFh ;~ 2331:34EB
cs=0x2331;eip=0x0034ee; 	X(MOV(*(dw*)((&unk_47bde)), ax));	// 83685 mov     word ptr unk_47BDE, ax ;~ 2331:34EE
cs=0x2331;eip=0x0034f1; 	X(MOV(unk_56885, 0));	// 83686 mov     byte ptr unk_56885, 0 ;~ 2331:34F1
cs=0x2331;eip=0x0034f6; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 83687 push    [bp+var_2] ;~ 2331:34F6
cs=0x2331;eip=0x0034f9; 	T(MOV(ax, 0x20));	// 83688 mov     ax, 20h ; ' ' ;~ 2331:34F9
cs=0x2331;eip=0x0034fc; 	X(PUSH(ax));	// 83689 push    ax ;~ 2331:34FC
cs=0x2331;eip=0x0034fd; 	X(PUSH(*(dw*)(raddr(ss,bp+var_54))));	// 83690 push    [bp+var_54] ;~ 2331:34FD
cs=0x2331;eip=0x003500; 	R(CALLF(sub_2dce4,0));	// 83691 call    sub_2DCE4 ;~ 2331:3500
cs=0x2331;eip=0x003505; 	R(CALL(sub_3317c,0));	// 83692 call    sub_3317C ;~ 2331:3505
cs=0x2331;eip=0x003508; 	X(ADD(*(dw*)(raddr(ss,bp+var_54)), 0x0B));	// 83693 add     [bp+var_54], 0Bh ;~ 2331:3508
cs=0x2331;eip=0x00350c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 83694 push    [bp+arg_0] ;~ 2331:350C
cs=0x2331;eip=0x00350f; 	R(CALL(sub_34d04,0));	// 83695 call    sub_34D04 ;~ 2331:350F
cs=0x2331;eip=0x003512; 	X(MOV(*(dw*)(raddr(ss,bp+var_58)), ax));	// 83696 mov     [bp+var_58], ax ;~ 2331:3512
cs=0x2331;eip=0x003515; 	X(MOV(*(dw*)(raddr(ss,bp+var_56)), 0));	// 83697 mov     [bp+var_56], 0 ;~ 2331:3515
cs=0x2331;eip=0x00351a; 	T(OR(ax, ax));	// 83698 or      ax, ax ;~ 2331:351A
cs=0x2331;eip=0x00351c; 	R(JG(loc_34e11));	// 83699 jg      short loc_34E11 ;~ 2331:351C
cs=0x2331;eip=0x00351e; 	R(JMP(loc_34f09));	// 83700 jmp     loc_34F09 ;~ 2331:351E
loc_34e11:
	// 9770 
cs=0x2331;eip=0x003521; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 83704 mov     ax, [bp+arg_0] ;~ 2331:3521
cs=0x2331;eip=0x003524; 	T(SHL(ax, 1));	// 83705 shl     ax, 1 ;~ 2331:3524
cs=0x2331;eip=0x003526; 	T(ADD(ax, 0x346C));	// 83706 add     ax, 346Ch ;~ 2331:3526
cs=0x2331;eip=0x003529; 	X(MOV(*(dw*)(raddr(ss,bp+var_5c)), ax));	// 83707 mov     [bp+var_5C], ax ;~ 2331:3529
cs=0x2331;eip=0x00352c; 	X(MOV(*(dw*)(raddr(ss,bp+var_5e)), 0));	// 83708 mov     [bp+var_5E], 0 ;~ 2331:352C
cs=0x2331;eip=0x003531; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_56))));	// 83709 mov     di, [bp+var_56] ;~ 2331:3531
cs=0x2331;eip=0x003534; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_54))));	// 83710 mov     si, [bp+var_54] ;~ 2331:3534
loc_34e27:
	// 9771 
cs=0x2331;eip=0x003537; 	T(MOV(ax, 0x20));	// 83713 mov     ax, 20h ; ' ' ;~ 2331:3537
cs=0x2331;eip=0x00353a; 	X(PUSH(ax));	// 83714 push    ax ;~ 2331:353A
cs=0x2331;eip=0x00353b; 	T(ax = si-1);	// 83715 lea     ax, [si-1] ;~ 2331:353B
cs=0x2331;eip=0x00353e; 	X(PUSH(ax));	// 83716 push    ax ;~ 2331:353E
cs=0x2331;eip=0x00353f; 	T(MOV(ax, 0x0A));	// 83717 mov     ax, 0Ah ;~ 2331:353F
cs=0x2331;eip=0x003542; 	X(PUSH(ax));	// 83718 push    ax ;~ 2331:3542
cs=0x2331;eip=0x003543; 	T(MOV(ax, 8));	// 83719 mov     ax, 8 ;~ 2331:3543
cs=0x2331;eip=0x003546; 	X(PUSH(ax));	// 83720 push    ax ;~ 2331:3546
cs=0x2331;eip=0x003547; 	T(MOV(ax, 0x0FF0F));	// 83721 mov     ax, 0FF0Fh ;~ 2331:3547
cs=0x2331;eip=0x00354a; 	X(PUSH(ax));	// 83722 push    ax ;~ 2331:354A
cs=0x2331;eip=0x00354b; 	R(CALLF(sub_233c4,0));	// 83723 call    sub_233C4 ;~ 2331:354B
cs=0x2331;eip=0x003550; 	T(MOV(ax, 0x20));	// 83724 mov     ax, 20h ; ' ' ;~ 2331:3550
cs=0x2331;eip=0x003553; 	X(PUSH(ax));	// 83725 push    ax ;~ 2331:3553
cs=0x2331;eip=0x003554; 	X(PUSH(si));	// 83726 push    si ;~ 2331:3554
cs=0x2331;eip=0x003555; 	T(MOV(ax, 6));	// 83727 mov     ax, 6 ;~ 2331:3555
cs=0x2331;eip=0x003558; 	X(PUSH(ax));	// 83728 push    ax ;~ 2331:3558
cs=0x2331;eip=0x003559; 	T(MOV(ax, 5));	// 83729 mov     ax, 5 ;~ 2331:3559
cs=0x2331;eip=0x00355c; 	X(PUSH(ax));	// 83730 push    ax ;~ 2331:355C
cs=0x2331;eip=0x00355d; 	T(MOV(ax, 0x0FF07));	// 83731 mov     ax, 0FF07h ;~ 2331:355D
cs=0x2331;eip=0x003560; 	X(PUSH(ax));	// 83732 push    ax ;~ 2331:3560
cs=0x2331;eip=0x003561; 	R(CALLF(sub_20453,0));	// 83733 call    sub_20453 ;~ 2331:3561
cs=0x2331;eip=0x003566; 	X(MOV(*(dw*)((&unk_47bde)), 0x0FF07));	// 83734 mov     word ptr unk_47BDE, 0FF07h ;~ 2331:3566
cs=0x2331;eip=0x00356c; 	X(MOV(unk_56885, 0));	// 83735 mov     byte ptr unk_56885, 0 ;~ 2331:356C
cs=0x2331;eip=0x003571; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_5c))));	// 83736 mov     bx, [bp+var_5C] ;~ 2331:3571
cs=0x2331;eip=0x003574; 	T(CMP(*(dw*)(raddr(ds,bx)), di));	// 83737 cmp     [bx], di ;~ 2331:3574
cs=0x2331;eip=0x003576; 	R(JNZ(loc_34ec6));	// 83738 jnz     short loc_34EC6 ;~ 2331:3576
cs=0x2331;eip=0x003578; 	X(MOV(*(dw*)((&unk_47bde)), 0x0FF00));	// 83739 mov     word ptr unk_47BDE, 0FF00h ;~ 2331:3578
cs=0x2331;eip=0x00357e; 	X(MOV(unk_56885, 0));	// 83740 mov     byte ptr unk_56885, 0 ;~ 2331:357E
cs=0x2331;eip=0x003583; 	T(MOV(ax, 0x21));	// 83741 mov     ax, 21h ; '!' ;~ 2331:3583
cs=0x2331;eip=0x003586; 	X(PUSH(ax));	// 83742 push    ax ;~ 2331:3586
cs=0x2331;eip=0x003587; 	T(ax = si+1);	// 83743 lea     ax, [si+1] ;~ 2331:3587
cs=0x2331;eip=0x00358a; 	X(PUSH(ax));	// 83744 push    ax ;~ 2331:358A
cs=0x2331;eip=0x00358b; 	T(MOV(ax, 2));	// 83745 mov     ax, 2 ;~ 2331:358B
cs=0x2331;eip=0x00358e; 	X(PUSH(ax));	// 83746 push    ax ;~ 2331:358E
cs=0x2331;eip=0x00358f; 	T(MOV(ax, 3));	// 83747 mov     ax, 3 ;~ 2331:358F
cs=0x2331;eip=0x003592; 	X(PUSH(ax));	// 83748 push    ax ;~ 2331:3592
cs=0x2331;eip=0x003593; 	T(MOV(ax, 0x0FF00));	// 83749 mov     ax, 0FF00h ;~ 2331:3593
cs=0x2331;eip=0x003596; 	X(PUSH(ax));	// 83750 push    ax ;~ 2331:3596
cs=0x2331;eip=0x003597; 	R(CALLF(sub_233c4,0));	// 83751 call    sub_233C4 ;~ 2331:3597
cs=0x2331;eip=0x00359c; 	T(ax = si-1);	// 83752 lea     ax, [si-1] ;~ 2331:359C
cs=0x2331;eip=0x00359f; 	X(MOV(*(dw*)(raddr(ss,bp+var_60)), ax));	// 83753 mov     [bp+var_60], ax ;~ 2331:359F
cs=0x2331;eip=0x0035a2; 	T(ax = si+4);	// 83754 lea     ax, [si+4] ;~ 2331:35A2
cs=0x2331;eip=0x0035a5; 	X(MOV(*(dw*)(raddr(ss,bp+var_62)), ax));	// 83755 mov     [bp+var_62], ax ;~ 2331:35A5
cs=0x2331;eip=0x0035a8; 	T(MOV(ax, 0x21));	// 83756 mov     ax, 21h ; '!' ;~ 2331:35A8
cs=0x2331;eip=0x0035ab; 	X(PUSH(ax));	// 83757 push    ax ;~ 2331:35AB
cs=0x2331;eip=0x0035ac; 	X(PUSH(*(dw*)(raddr(ss,bp+var_62))));	// 83758 push    [bp+var_62] ;~ 2331:35AC
cs=0x2331;eip=0x0035af; 	T(MOV(ax, 0x26));	// 83759 mov     ax, 26h ; '&' ;~ 2331:35AF
cs=0x2331;eip=0x0035b2; 	X(PUSH(ax));	// 83760 push    ax ;~ 2331:35B2
cs=0x2331;eip=0x0035b3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_60))));	// 83761 push    [bp+var_60] ;~ 2331:35B3
cs=0x2331;eip=0x0035b6; 	T(MOV(ax, 0x0FF00));	// 83762 mov     ax, 0FF00h ;~ 2331:35B6
cs=0x2331;eip=0x0035b9; 	X(PUSH(ax));	// 83763 push    ax ;~ 2331:35B9
cs=0x2331;eip=0x0035ba; 	R(CALLF(sub_21f4b,0));	// 83764 call    sub_21F4B ;~ 2331:35BA
cs=0x2331;eip=0x0035bf; 	T(MOV(ax, 0x22));	// 83765 mov     ax, 22h ; '"' ;~ 2331:35BF
cs=0x2331;eip=0x0035c2; 	X(PUSH(ax));	// 83766 push    ax ;~ 2331:35C2
cs=0x2331;eip=0x0035c3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_62))));	// 83767 push    [bp+var_62] ;~ 2331:35C3
cs=0x2331;eip=0x0035c6; 	T(MOV(ax, 0x27));	// 83768 mov     ax, 27h ; ''' ;~ 2331:35C6
cs=0x2331;eip=0x0035c9; 	X(PUSH(ax));	// 83769 push    ax ;~ 2331:35C9
cs=0x2331;eip=0x0035ca; 	X(PUSH(*(dw*)(raddr(ss,bp+var_60))));	// 83770 push    [bp+var_60] ;~ 2331:35CA
cs=0x2331;eip=0x0035cd; 	T(MOV(ax, 0x0FF00));	// 83771 mov     ax, 0FF00h ;~ 2331:35CD
cs=0x2331;eip=0x0035d0; 	X(PUSH(ax));	// 83772 push    ax ;~ 2331:35D0
cs=0x2331;eip=0x0035d1; 	R(CALLF(sub_21f4b,0));	// 83773 call    sub_21F4B ;~ 2331:35D1
loc_34ec6:
	// 9772 
cs=0x2331;eip=0x0035d6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 83776 mov     bx, [bp+arg_0] ;~ 2331:35D6
cs=0x2331;eip=0x0035d9; 	T(MOV(ax, *(dw*)((&unk_47ab2))));	// 83777 mov     ax, word ptr unk_47AB2 ;~ 2331:35D9
cs=0x2331;eip=0x0035dc; 	T(SHL(ax, 1));	// 83778 shl     ax, 1 ;~ 2331:35DC
cs=0x2331;eip=0x0035de; 	T(SHL(ax, 1));	// 83779 shl     ax, 1 ;~ 2331:35DE
cs=0x2331;eip=0x0035e0; 	T(ADD(bx, ax));	// 83780 add     bx, ax ;~ 2331:35E0
cs=0x2331;eip=0x0035e2; 	T(SHL(bx, 1));	// 83781 shl     bx, 1 ;~ 2331:35E2
cs=0x2331;eip=0x0035e4; 	T(SHL(bx, 1));	// 83782 shl     bx, 1 ;~ 2331:35E4
cs=0x2331;eip=0x0035e6; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x342E))));	// 83783 mov     ax, [bx+342Eh] ;~ 2331:35E6
cs=0x2331;eip=0x0035ea; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_5e))));	// 83784 add     ax, [bp+var_5E] ;~ 2331:35EA
cs=0x2331;eip=0x0035ed; 	X(PUSH(ax));	// 83785 push    ax ;~ 2331:35ED
cs=0x2331;eip=0x0035ee; 	T(ax = bp+var_52);	// 83786 lea     ax, [bp+var_52] ;~ 2331:35EE
cs=0x2331;eip=0x0035f1; 	X(PUSH(ax));	// 83787 push    ax ;~ 2331:35F1
cs=0x2331;eip=0x0035f2; 	R(CALL(sub_34c04,0));	// 83788 call    sub_34C04 ;~ 2331:35F2
cs=0x2331;eip=0x0035f5; 	T(ax = bp+var_52);	// 83789 lea     ax, [bp+var_52] ;~ 2331:35F5
cs=0x2331;eip=0x0035f8; 	X(PUSH(ax));	// 83790 push    ax ;~ 2331:35F8
cs=0x2331;eip=0x0035f9; 	T(MOV(ax, 0x30));	// 83791 mov     ax, 30h ; '0' ;~ 2331:35F9
cs=0x2331;eip=0x0035fc; 	X(PUSH(ax));	// 83792 push    ax ;~ 2331:35FC
cs=0x2331;eip=0x0035fd; 	X(PUSH(si));	// 83793 push    si ;~ 2331:35FD
cs=0x2331;eip=0x0035fe; 	R(CALLF(sub_2de1a,0));	// 83794 call    sub_2DE1A ;~ 2331:35FE
cs=0x2331;eip=0x003603; 	T(ADD(si, 7));	// 83795 add     si, 7 ;~ 2331:3603
cs=0x2331;eip=0x003606; 	X(ADD(*(dw*)(raddr(ss,bp+var_5e)), 5));	// 83796 add     [bp+var_5E], 5 ;~ 2331:3606
cs=0x2331;eip=0x00360a; 	T(INC(di));	// 83797 inc     di ;~ 2331:360A
cs=0x2331;eip=0x00360b; 	T(CMP(di, *(dw*)(raddr(ss,bp+var_58))));	// 83798 cmp     di, [bp+var_58] ;~ 2331:360B
cs=0x2331;eip=0x00360e; 	R(JGE(loc_34f03));	// 83799 jge     short loc_34F03 ;~ 2331:360E
cs=0x2331;eip=0x003610; 	R(JMP(loc_34e27));	// 83800 jmp     loc_34E27 ;~ 2331:3610
loc_34f03:
	// 9773 
cs=0x2331;eip=0x003613; 	X(MOV(*(dw*)(raddr(ss,bp+var_56)), di));	// 83804 mov     [bp+var_56], di ;~ 2331:3613
cs=0x2331;eip=0x003616; 	X(MOV(*(dw*)(raddr(ss,bp+var_54)), si));	// 83805 mov     [bp+var_54], si ;~ 2331:3616
loc_34f09:
	// 9774 
cs=0x2331;eip=0x003619; 	X(POP(si));	// 83808 pop     si ;~ 2331:3619
cs=0x2331;eip=0x00361a; 	X(POP(di));	// 83809 pop     di ;~ 2331:361A
cs=0x2331;eip=0x00361b; 	T(MOV(sp, bp));	// 83810 mov     sp, bp ;~ 2331:361B
cs=0x2331;eip=0x00361d; 	X(POP(bp));	// 83811 pop     bp ;~ 2331:361D
cs=0x2331;eip=0x00361e; 	R(RETN(2));	// 83812 retn    2 ;~ 2331:361E
seg021_proc:
	// 83816 
cs=0x2331;eip=0x003621; 	X(PUSH(word_5651a));	// 83816 push    word_5651A ;~ 2331:3621
cs=0x2331;eip=0x003625; 	R(CALLF(sub_202f1,0));	// 83817 call    sub_202F1 ;~ 2331:3625
cs=0x2331;eip=0x00362a; 	R(JMP(loc_34f34));	// 83818 jmp     short loc_34F34 ;~ 2331:362A
loc_34f1c:
	// 9775 
cs=0x2331;eip=0x00362c; 	T(MOV(bx, *(dw*)((&unk_545f0))));	// 83823 mov     bx, word ptr unk_545F0 ;~ 2331:362C
cs=0x2331;eip=0x003630; 	T(SHL(bx, 1));	// 83824 shl     bx, 1 ;~ 2331:3630
cs=0x2331;eip=0x003632; 	X(INC(*(dw*)(raddr(ds,bx+0x346C))));	// 83825 inc     word ptr [bx+346Ch] ;~ 2331:3632
cs=0x2331;eip=0x003636; 	X(PUSH(*(dw*)((&unk_545f0))));	// 83826 push    word ptr unk_545F0 ;~ 2331:3636
cs=0x2331;eip=0x00363a; 	R(CALL(sub_34c2f,0));	// 83827 call    sub_34C2F ;~ 2331:363A
cs=0x2331;eip=0x00363d; 	T(MOV(bx, ax));	// 83828 mov     bx, ax ;~ 2331:363D
cs=0x2331;eip=0x00363f; 	T(CMP(*(dw*)(raddr(ds,bx)), 0));	// 83829 cmp     word ptr [bx], 0 ;~ 2331:363F
cs=0x2331;eip=0x003642; 	R(JNZ(loc_34f1c));	// 83830 jnz     short loc_34F1C ;~ 2331:3642
loc_34f34:
	// 9776 
cs=0x2331;eip=0x003644; 	T(MOV(bx, *(dw*)((&unk_545f0))));	// 83833 mov     bx, word ptr unk_545F0 ;~ 2331:3644
cs=0x2331;eip=0x003648; 	T(SHL(bx, 1));	// 83834 shl     bx, 1 ;~ 2331:3648
cs=0x2331;eip=0x00364a; 	X(DEC(*(dw*)(raddr(ds,bx+0x346C))));	// 83835 dec     word ptr [bx+346Ch] ;~ 2331:364A
cs=0x2331;eip=0x00364e; 	R(JS(loc_34f1c));	// 83836 js      short loc_34F1C ;~ 2331:364E
cs=0x2331;eip=0x003650; 	X(PUSH(*(dw*)((&unk_545f0))));	// 83837 push    word ptr unk_545F0 ;~ 2331:3650
cs=0x2331;eip=0x003654; 	R(CALL(sub_34d59,0));	// 83838 call    sub_34D59 ;~ 2331:3654
cs=0x2331;eip=0x003657; 	T(MOV(ax, 1));	// 83839 mov     ax, 1 ;~ 2331:3657
cs=0x2331;eip=0x00365a; 	T(SUB(ax, word_5651a));	// 83840 sub     ax, word_5651A ;~ 2331:365A
cs=0x2331;eip=0x00365e; 	X(PUSH(ax));	// 83841 push    ax ;~ 2331:365E
cs=0x2331;eip=0x00365f; 	R(CALLF(sub_202f1,0));	// 83842 call    sub_202F1 ;~ 2331:365F
cs=0x2331;eip=0x003664; 	R(RETN(0));	// 83843 retn ;~ 2331:3664
sub_34f55:
	// 83848 
cs=0x2331;eip=0x003665; 	X(PUSH(word_5651a));	// 83849 push    word_5651A ;~ 2331:3665
cs=0x2331;eip=0x003669; 	R(CALLF(sub_202f1,0));	// 83850 call    sub_202F1 ;~ 2331:3669
cs=0x2331;eip=0x00366e; 	T(MOV(bx, *(dw*)((&unk_545f0))));	// 83851 mov     bx, word ptr unk_545F0 ;~ 2331:366E
cs=0x2331;eip=0x003672; 	T(SHL(bx, 1));	// 83852 shl     bx, 1 ;~ 2331:3672
cs=0x2331;eip=0x003674; 	X(INC(*(dw*)(raddr(ds,bx+0x346C))));	// 83853 inc     word ptr [bx+346Ch] ;~ 2331:3674
cs=0x2331;eip=0x003678; 	X(PUSH(*(dw*)((&unk_545f0))));	// 83854 push    word ptr unk_545F0 ;~ 2331:3678
cs=0x2331;eip=0x00367c; 	R(CALL(sub_34c2f,0));	// 83855 call    sub_34C2F ;~ 2331:367C
cs=0x2331;eip=0x00367f; 	T(MOV(bx, ax));	// 83856 mov     bx, ax ;~ 2331:367F
cs=0x2331;eip=0x003681; 	T(CMP(*(dw*)(raddr(ds,bx)), 0));	// 83857 cmp     word ptr [bx], 0 ;~ 2331:3681
cs=0x2331;eip=0x003684; 	R(JNZ(loc_34f82));	// 83858 jnz     short loc_34F82 ;~ 2331:3684
cs=0x2331;eip=0x003686; 	T(MOV(bx, *(dw*)((&unk_545f0))));	// 83859 mov     bx, word ptr unk_545F0 ;~ 2331:3686
cs=0x2331;eip=0x00368a; 	T(SHL(bx, 1));	// 83860 shl     bx, 1 ;~ 2331:368A
cs=0x2331;eip=0x00368c; 	X(MOV(*(dw*)(raddr(ds,bx+0x346C)), 0));	// 83861 mov     word ptr [bx+346Ch], 0 ;~ 2331:368C
loc_34f82:
	// 9777 
cs=0x2331;eip=0x003692; 	X(PUSH(*(dw*)((&unk_545f0))));	// 83864 push    word ptr unk_545F0 ;~ 2331:3692
cs=0x2331;eip=0x003696; 	R(CALL(sub_34d59,0));	// 83865 call    sub_34D59 ;~ 2331:3696
cs=0x2331;eip=0x003699; 	T(MOV(ax, 1));	// 83866 mov     ax, 1 ;~ 2331:3699
cs=0x2331;eip=0x00369c; 	T(SUB(ax, word_5651a));	// 83867 sub     ax, word_5651A ;~ 2331:369C
cs=0x2331;eip=0x0036a0; 	X(PUSH(ax));	// 83868 push    ax ;~ 2331:36A0
cs=0x2331;eip=0x0036a1; 	R(CALLF(sub_202f1,0));	// 83869 call    sub_202F1 ;~ 2331:36A1
cs=0x2331;eip=0x0036a6; 	R(RETN(0));	// 83870 retn ;~ 2331:36A6
sub_34f97:
	// 83878 
cs=0x2331;eip=0x0036a7; 	X(PUSH(bp));	// 83879 push    bp ;~ 2331:36A7
cs=0x2331;eip=0x0036a8; 	T(MOV(bp, sp));	// 83880 mov     bp, sp ;~ 2331:36A8
cs=0x2331;eip=0x0036aa; 	T(SUB(sp, 2));	// 83881 sub     sp, 2 ;~ 2331:36AA
cs=0x2331;eip=0x0036ad; 	X(PUSH(si));	// 83882 push    si ;~ 2331:36AD
cs=0x2331;eip=0x0036ae; 	X(PUSH(word_5651a));	// 83883 push    word_5651A ;~ 2331:36AE
cs=0x2331;eip=0x0036b2; 	R(CALLF(sub_202f1,0));	// 83884 call    sub_202F1 ;~ 2331:36B2
cs=0x2331;eip=0x0036b7; 	T(MOV(si, *(dw*)((&unk_545f0))));	// 83885 mov     si, word ptr unk_545F0 ;~ 2331:36B7
cs=0x2331;eip=0x0036bb; 	X(DEC(*(dw*)((&unk_545f0))));	// 83886 dec     word ptr unk_545F0 ;~ 2331:36BB
cs=0x2331;eip=0x0036bf; 	R(JNS(loc_34fbf));	// 83887 jns     short loc_34FBF ;~ 2331:36BF
cs=0x2331;eip=0x0036c1; 	T(MOV(bx, *(dw*)((&unk_47ab2))));	// 83888 mov     bx, word ptr unk_47AB2 ;~ 2331:36C1
cs=0x2331;eip=0x0036c5; 	T(MOV(al, *(raddr(ds,bx+0x335C))));	// 83889 mov     al, [bx+335Ch] ;~ 2331:36C5
cs=0x2331;eip=0x0036c9; 	T(SUB(ah, ah));	// 83890 sub     ah, ah ;~ 2331:36C9
cs=0x2331;eip=0x0036cb; 	T(DEC(ax));	// 83891 dec     ax ;~ 2331:36CB
cs=0x2331;eip=0x0036cc; 	X(MOV(*(dw*)((&unk_545f0)), ax));	// 83892 mov     word ptr unk_545F0, ax ;~ 2331:36CC
loc_34fbf:
	// 9778 
cs=0x2331;eip=0x0036cf; 	X(PUSH(*(dw*)((&unk_545f0))));	// 83895 push    word ptr unk_545F0 ;~ 2331:36CF
cs=0x2331;eip=0x0036d3; 	R(CALL(sub_34d59,0));	// 83896 call    sub_34D59 ;~ 2331:36D3
cs=0x2331;eip=0x0036d6; 	X(PUSH(si));	// 83897 push    si ;~ 2331:36D6
cs=0x2331;eip=0x0036d7; 	R(CALL(sub_34d59,0));	// 83898 call    sub_34D59 ;~ 2331:36D7
cs=0x2331;eip=0x0036da; 	T(MOV(ax, 1));	// 83899 mov     ax, 1 ;~ 2331:36DA
cs=0x2331;eip=0x0036dd; 	T(SUB(ax, word_5651a));	// 83900 sub     ax, word_5651A ;~ 2331:36DD
cs=0x2331;eip=0x0036e1; 	X(PUSH(ax));	// 83901 push    ax ;~ 2331:36E1
cs=0x2331;eip=0x0036e2; 	R(CALLF(sub_202f1,0));	// 83902 call    sub_202F1 ;~ 2331:36E2
cs=0x2331;eip=0x0036e7; 	X(POP(si));	// 83903 pop     si ;~ 2331:36E7
cs=0x2331;eip=0x0036e8; 	T(MOV(sp, bp));	// 83904 mov     sp, bp ;~ 2331:36E8
cs=0x2331;eip=0x0036ea; 	X(POP(bp));	// 83905 pop     bp ;~ 2331:36EA
cs=0x2331;eip=0x0036eb; 	R(RETN(0));	// 83906 retn ;~ 2331:36EB
sub_34fdc:
	// 83914 
cs=0x2331;eip=0x0036ec; 	X(PUSH(bp));	// 83915 push    bp ;~ 2331:36EC
cs=0x2331;eip=0x0036ed; 	T(MOV(bp, sp));	// 83916 mov     bp, sp ;~ 2331:36ED
cs=0x2331;eip=0x0036ef; 	T(SUB(sp, 2));	// 83917 sub     sp, 2 ;~ 2331:36EF
cs=0x2331;eip=0x0036f2; 	X(PUSH(si));	// 83918 push    si ;~ 2331:36F2
cs=0x2331;eip=0x0036f3; 	X(PUSH(word_5651a));	// 83919 push    word_5651A ;~ 2331:36F3
cs=0x2331;eip=0x0036f7; 	R(CALLF(sub_202f1,0));	// 83920 call    sub_202F1 ;~ 2331:36F7
cs=0x2331;eip=0x0036fc; 	T(MOV(si, *(dw*)((&unk_545f0))));	// 83921 mov     si, word ptr unk_545F0 ;~ 2331:36FC
cs=0x2331;eip=0x003700; 	T(MOV(bx, *(dw*)((&unk_47ab2))));	// 83922 mov     bx, word ptr unk_47AB2 ;~ 2331:3700
cs=0x2331;eip=0x003704; 	T(MOV(al, *(raddr(ds,bx+0x335C))));	// 83923 mov     al, [bx+335Ch] ;~ 2331:3704
cs=0x2331;eip=0x003708; 	T(SUB(ah, ah));	// 83924 sub     ah, ah ;~ 2331:3708
cs=0x2331;eip=0x00370a; 	X(INC(*(dw*)((&unk_545f0))));	// 83925 inc     word ptr unk_545F0 ;~ 2331:370A
cs=0x2331;eip=0x00370e; 	T(CMP(ax, *(dw*)((&unk_545f0))));	// 83926 cmp     ax, word ptr unk_545F0 ;~ 2331:370E
cs=0x2331;eip=0x003712; 	R(JA(loc_3500a));	// 83927 ja      short loc_3500A ;~ 2331:3712
cs=0x2331;eip=0x003714; 	X(MOV(*(dw*)((&unk_545f0)), 0));	// 83928 mov     word ptr unk_545F0, 0 ;~ 2331:3714
loc_3500a:
	// 9779 
cs=0x2331;eip=0x00371a; 	X(PUSH(*(dw*)((&unk_545f0))));	// 83931 push    word ptr unk_545F0 ;~ 2331:371A
cs=0x2331;eip=0x00371e; 	R(CALL(sub_34d59,0));	// 83932 call    sub_34D59 ;~ 2331:371E
cs=0x2331;eip=0x003721; 	X(PUSH(si));	// 83933 push    si ;~ 2331:3721
cs=0x2331;eip=0x003722; 	R(CALL(sub_34d59,0));	// 83934 call    sub_34D59 ;~ 2331:3722
cs=0x2331;eip=0x003725; 	T(MOV(ax, 1));	// 83935 mov     ax, 1 ;~ 2331:3725
cs=0x2331;eip=0x003728; 	T(SUB(ax, word_5651a));	// 83936 sub     ax, word_5651A ;~ 2331:3728
cs=0x2331;eip=0x00372c; 	X(PUSH(ax));	// 83937 push    ax ;~ 2331:372C
cs=0x2331;eip=0x00372d; 	R(CALLF(sub_202f1,0));	// 83938 call    sub_202F1 ;~ 2331:372D
cs=0x2331;eip=0x003732; 	X(POP(si));	// 83939 pop     si ;~ 2331:3732
cs=0x2331;eip=0x003733; 	T(MOV(sp, bp));	// 83940 mov     sp, bp ;~ 2331:3733
cs=0x2331;eip=0x003735; 	X(POP(bp));	// 83941 pop     bp ;~ 2331:3735
cs=0x2331;eip=0x003736; 	R(RETN(0));	// 83942 retn ;~ 2331:3736
sub_35027:
	// 83950 
#undef var_2
#define var_2 -2
	// 83952 var_2           = byte ptr -2 ;~ 2331:3737
#undef arg_0
#define arg_0 4
	// 83953 arg_0           = word ptr  4 ;~ 2331:3737
cs=0x2331;eip=0x003737; 	X(PUSH(bp));	// 83955 push    bp ;~ 2331:3737
cs=0x2331;eip=0x003738; 	T(MOV(bp, sp));	// 83956 mov     bp, sp ;~ 2331:3738
cs=0x2331;eip=0x00373a; 	T(SUB(sp, 2));	// 83957 sub     sp, 2 ;~ 2331:373A
cs=0x2331;eip=0x00373d; 	X(PUSH(si));	// 83958 push    si ;~ 2331:373D
cs=0x2331;eip=0x00373e; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 83959 mov     si, [bp+arg_0] ;~ 2331:373E
cs=0x2331;eip=0x003741; 	X(MOV(*(raddr(ss,bp+var_2)), 1));	// 83960 mov     [bp+var_2], 1 ;~ 2331:3741
cs=0x2331;eip=0x003745; 	R(JMP(loc_3503d));	// 83961 jmp     short loc_3503D ;~ 2331:3745
loc_35037:
	// 9780 
cs=0x2331;eip=0x003747; 	T(SUB(al, al));	// 83965 sub     al, al ;~ 2331:3747
loc_35039:
	// 9781 
cs=0x2331;eip=0x003749; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 83968 mov     [bp+var_2], al ;~ 2331:3749
cs=0x2331;eip=0x00374c; 	T(INC(si));	// 83969 inc     si ;~ 2331:374C
loc_3503d:
	// 9782 
cs=0x2331;eip=0x00374d; 	T(CMP(*(raddr(ds,si)), 0));	// 83972 cmp     byte ptr [si], 0 ;~ 2331:374D
cs=0x2331;eip=0x003750; 	R(JZ(loc_35060));	// 83973 jz      short loc_35060 ;~ 2331:3750
cs=0x2331;eip=0x003752; 	T(CMP(*(raddr(ss,bp+var_2)), 0));	// 83974 cmp     [bp+var_2], 0 ;~ 2331:3752
cs=0x2331;eip=0x003756; 	R(JNZ(loc_35057));	// 83975 jnz     short loc_35057 ;~ 2331:3756
cs=0x2331;eip=0x003758; 	T(MOV(al, *(raddr(ds,si))));	// 83976 mov     al, [si] ;~ 2331:3758
cs=0x2331;eip=0x00375a; 	T(SUB(ah, ah));	// 83977 sub     ah, ah ;~ 2331:375A
cs=0x2331;eip=0x00375c; 	X(PUSH(ax));	// 83978 push    ax ;~ 2331:375C
cs=0x2331;eip=0x00375d; 	R(CALLF(sub_102f4,0));	// 83979 call    sub_102F4 ;~ 2331:375D
cs=0x2331;eip=0x003762; 	T(ADD(sp, 2));	// 83980 add     sp, 2 ;~ 2331:3762
cs=0x2331;eip=0x003765; 	X(MOV(*(raddr(ds,si)), al));	// 83981 mov     [si], al ;~ 2331:3765
loc_35057:
	// 9783 
cs=0x2331;eip=0x003767; 	T(CMP(*(raddr(ds,si)), 0x20));	// 83984 cmp     byte ptr [si], 20h ; ' ' ;~ 2331:3767
cs=0x2331;eip=0x00376a; 	R(JNZ(loc_35037));	// 83985 jnz     short loc_35037 ;~ 2331:376A
cs=0x2331;eip=0x00376c; 	T(MOV(al, 1));	// 83986 mov     al, 1 ;~ 2331:376C
cs=0x2331;eip=0x00376e; 	R(JMP(loc_35039));	// 83987 jmp     short loc_35039 ;~ 2331:376E
loc_35060:
	// 9784 
cs=0x2331;eip=0x003770; 	X(POP(si));	// 83991 pop     si ;~ 2331:3770
cs=0x2331;eip=0x003771; 	T(MOV(sp, bp));	// 83992 mov     sp, bp ;~ 2331:3771
cs=0x2331;eip=0x003773; 	X(POP(bp));	// 83993 pop     bp ;~ 2331:3773
cs=0x2331;eip=0x003774; 	R(RETN(2));	// 83994 retn    2 ;~ 2331:3774
sub_35067:
	// 84001 
cs=0x2331;eip=0x003777; 	X(PUSH(di));	// 84003 push    di ;~ 2331:3777
cs=0x2331;eip=0x003778; 	T(MOV(cx, 8));	// 84004 mov     cx, 8 ;~ 2331:3778
cs=0x2331;eip=0x00377b; 	T(MOV(di, 0x346C));	// 84005 mov     di, 346Ch ;~ 2331:377B
cs=0x2331;eip=0x00377e; 	T(MOV(ax, ds));	// 84006 mov     ax, ds ;~ 2331:377E
cs=0x2331;eip=0x003780; 	T(MOV(es, ax));	// 84007 mov     es, ax ;~ 2331:3780
cs=0x2331;eip=0x003782; 	T(SUB(ax, ax));	// 84008 sub     ax, ax ;~ 2331:3782
	// 84009 repne stosb ;~ 2331:3784
cs=0x2331;eip=0x003784; 	R(REPNE STOSB);	// 84009 repne stosb ;~ 2331:3784
cs=0x2331;eip=0x003786; 	X(POP(di));	// 84010 pop     di ;~ 2331:3786
cs=0x2331;eip=0x003787; 	R(RETF(0));	// 84011 retf ;~ 2331:3787

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_318f7: 	goto loc_318f7;
        case m2c::kloc_3197e: 	goto loc_3197e;
        case m2c::kloc_319bf: 	goto loc_319bf;
        case m2c::kloc_319cf: 	goto loc_319cf;
        case m2c::kloc_319e3: 	goto loc_319e3;
        case m2c::kloc_319f7: 	goto loc_319f7;
        case m2c::kloc_31a76: 	goto loc_31a76;
        case m2c::kloc_31a79: 	goto loc_31a79;
        case m2c::kloc_31a86: 	goto loc_31a86;
        case m2c::kloc_31a8b: 	goto loc_31a8b;
        case m2c::kloc_31a93: 	goto loc_31a93;
        case m2c::kloc_31a9b: 	goto loc_31a9b;
        case m2c::kloc_31aa3: 	goto loc_31aa3;
        case m2c::kloc_31aab: 	goto loc_31aab;
        case m2c::kloc_31aad: 	goto loc_31aad;
        case m2c::kloc_31b1f: 	goto loc_31b1f;
        case m2c::kloc_31b25: 	goto loc_31b25;
        case m2c::kloc_31b2c: 	goto loc_31b2c;
        case m2c::kloc_31b57: 	goto loc_31b57;
        case m2c::kloc_31b5c: 	goto loc_31b5c;
        case m2c::kloc_31b68: 	goto loc_31b68;
        case m2c::kloc_31b72: 	goto loc_31b72;
        case m2c::kloc_31b76: 	goto loc_31b76;
        case m2c::kloc_31b7c: 	goto loc_31b7c;
        case m2c::kloc_31b89: 	goto loc_31b89;
        case m2c::kloc_31b8f: 	goto loc_31b8f;
        case m2c::kloc_31b99: 	goto loc_31b99;
        case m2c::kloc_31ba1: 	goto loc_31ba1;
        case m2c::kloc_31bae: 	goto loc_31bae;
        case m2c::kloc_31bb7: 	goto loc_31bb7;
        case m2c::kloc_31bc1: 	goto loc_31bc1;
        case m2c::kloc_31bc6: 	goto loc_31bc6;
        case m2c::kloc_31bd0: 	goto loc_31bd0;
        case m2c::kloc_31bd3: 	goto loc_31bd3;
        case m2c::kloc_31bef: 	goto loc_31bef;
        case m2c::kloc_31bf9: 	goto loc_31bf9;
        case m2c::kloc_31bff: 	goto loc_31bff;
        case m2c::kloc_31c09: 	goto loc_31c09;
        case m2c::kloc_31c0f: 	goto loc_31c0f;
        case m2c::kloc_31c19: 	goto loc_31c19;
        case m2c::kloc_31c1f: 	goto loc_31c1f;
        case m2c::kloc_31c27: 	goto loc_31c27;
        case m2c::kloc_31c39: 	goto loc_31c39;
        case m2c::kloc_31c46: 	goto loc_31c46;
        case m2c::kloc_31c49: 	goto loc_31c49;
        case m2c::kloc_31c68: 	goto loc_31c68;
        case m2c::kloc_31c8c: 	goto loc_31c8c;
        case m2c::kloc_31c8f: 	goto loc_31c8f;
        case m2c::kloc_31cc7: 	goto loc_31cc7;
        case m2c::kloc_31cca: 	goto loc_31cca;
        case m2c::kloc_31cd2: 	goto loc_31cd2;
        case m2c::kloc_31ce3: 	goto loc_31ce3;
        case m2c::kloc_31ceb: 	goto loc_31ceb;
        case m2c::kloc_31d03: 	goto loc_31d03;
        case m2c::kloc_31d20: 	goto loc_31d20;
        case m2c::kloc_31d41: 	goto loc_31d41;
        case m2c::kloc_31d50: 	goto loc_31d50;
        case m2c::kloc_31d5d: 	goto loc_31d5d;
        case m2c::kloc_31d82: 	goto loc_31d82;
        case m2c::kloc_31d88: 	goto loc_31d88;
        case m2c::kloc_31da1: 	goto loc_31da1;
        case m2c::kloc_31dde: 	goto loc_31dde;
        case m2c::kloc_31dfe: 	goto loc_31dfe;
        case m2c::kloc_31e1a: 	goto loc_31e1a;
        case m2c::kloc_31e37: 	goto loc_31e37;
        case m2c::kloc_31e3f: 	goto loc_31e3f;
        case m2c::kloc_31e5d: 	goto loc_31e5d;
        case m2c::kloc_31e62: 	goto loc_31e62;
        case m2c::kloc_31e69: 	goto loc_31e69;
        case m2c::kloc_31e83: 	goto loc_31e83;
        case m2c::kloc_31e99: 	goto loc_31e99;
        case m2c::kloc_31ea7: 	goto loc_31ea7;
        case m2c::kloc_31ead: 	goto loc_31ead;
        case m2c::kloc_31eb5: 	goto loc_31eb5;
        case m2c::kloc_31ebd: 	goto loc_31ebd;
        case m2c::kloc_31ec6: 	goto loc_31ec6;
        case m2c::kloc_31ef9: 	goto loc_31ef9;
        case m2c::kloc_31f03: 	goto loc_31f03;
        case m2c::kloc_31f0f: 	goto loc_31f0f;
        case m2c::kloc_31f12: 	goto loc_31f12;
        case m2c::kloc_31f6b: 	goto loc_31f6b;
        case m2c::kloc_31f73: 	goto loc_31f73;
        case m2c::kloc_31fd4: 	goto loc_31fd4;
        case m2c::kloc_31fd9: 	goto loc_31fd9;
        case m2c::kloc_32020: 	goto loc_32020;
        case m2c::kloc_32057: 	goto loc_32057;
        case m2c::kloc_3206d: 	goto loc_3206d;
        case m2c::kloc_32091: 	goto loc_32091;
        case m2c::kloc_320bc: 	goto loc_320bc;
        case m2c::kloc_320ef: 	goto loc_320ef;
        case m2c::kloc_320f7: 	goto loc_320f7;
        case m2c::kloc_32106: 	goto loc_32106;
        case m2c::kloc_32135: 	goto loc_32135;
        case m2c::kloc_32172: 	goto loc_32172;
        case m2c::kloc_321a3: 	goto loc_321a3;
        case m2c::kloc_321aa: 	goto loc_321aa;
        case m2c::kloc_32214: 	goto loc_32214;
        case m2c::kloc_32228: 	goto loc_32228;
        case m2c::kloc_3225e: 	goto loc_3225e;
        case m2c::kloc_32261: 	goto loc_32261;
        case m2c::kloc_32265: 	goto loc_32265;
        case m2c::kloc_32274: 	goto loc_32274;
        case m2c::kloc_32277: 	goto loc_32277;
        case m2c::kloc_322cc: 	goto loc_322cc;
        case m2c::kloc_322e4: 	goto loc_322e4;
        case m2c::kloc_32301: 	goto loc_32301;
        case m2c::kloc_3230a: 	goto loc_3230a;
        case m2c::kloc_32317: 	goto loc_32317;
        case m2c::kloc_32322: 	goto loc_32322;
        case m2c::kloc_3232c: 	goto loc_3232c;
        case m2c::kloc_32337: 	goto loc_32337;
        case m2c::kloc_32348: 	goto loc_32348;
        case m2c::kloc_3236a: 	goto loc_3236a;
        case m2c::kloc_32370: 	goto loc_32370;
        case m2c::kloc_32382: 	goto loc_32382;
        case m2c::kloc_323a5: 	goto loc_323a5;
        case m2c::kloc_323ff: 	goto loc_323ff;
        case m2c::kloc_32457: 	goto loc_32457;
        case m2c::kloc_3245b: 	goto loc_3245b;
        case m2c::kloc_32469: 	goto loc_32469;
        case m2c::kloc_3246c: 	goto loc_3246c;
        case m2c::kloc_32493: 	goto loc_32493;
        case m2c::kloc_32496: 	goto loc_32496;
        case m2c::kloc_324e2: 	goto loc_324e2;
        case m2c::kloc_324fe: 	goto loc_324fe;
        case m2c::kloc_32514: 	goto loc_32514;
        case m2c::kloc_32559: 	goto loc_32559;
        case m2c::kloc_3256d: 	goto loc_3256d;
        case m2c::kloc_32579: 	goto loc_32579;
        case m2c::kloc_32615: 	goto loc_32615;
        case m2c::kloc_3262e: 	goto loc_3262e;
        case m2c::kloc_32643: 	goto loc_32643;
        case m2c::kloc_32659: 	goto loc_32659;
        case m2c::kloc_3265c: 	goto loc_3265c;
        case m2c::kloc_3269a: 	goto loc_3269a;
        case m2c::kloc_326a3: 	goto loc_326a3;
        case m2c::kloc_326d4: 	goto loc_326d4;
        case m2c::kloc_326dd: 	goto loc_326dd;
        case m2c::kloc_32763: 	goto loc_32763;
        case m2c::kloc_3276a: 	goto loc_3276a;
        case m2c::kloc_327c0: 	goto loc_327c0;
        case m2c::kloc_327d2: 	goto loc_327d2;
        case m2c::kloc_327fb: 	goto loc_327fb;
        case m2c::kloc_327fe: 	goto loc_327fe;
        case m2c::kloc_3281e: 	goto loc_3281e;
        case m2c::kloc_32820: 	goto loc_32820;
        case m2c::kloc_32867: 	goto loc_32867;
        case m2c::kloc_3286a: 	goto loc_3286a;
        case m2c::kloc_32895: 	goto loc_32895;
        case m2c::kloc_3289d: 	goto loc_3289d;
        case m2c::kloc_328b1: 	goto loc_328b1;
        case m2c::kloc_328c5: 	goto loc_328c5;
        case m2c::kloc_328cb: 	goto loc_328cb;
        case m2c::kloc_328df: 	goto loc_328df;
        case m2c::kloc_328f4: 	goto loc_328f4;
        case m2c::kloc_32910: 	goto loc_32910;
        case m2c::kloc_32913: 	goto loc_32913;
        case m2c::kloc_32939: 	goto loc_32939;
        case m2c::kloc_3293d: 	goto loc_3293d;
        case m2c::kloc_3294b: 	goto loc_3294b;
        case m2c::kloc_32960: 	goto loc_32960;
        case m2c::kloc_329ef: 	goto loc_329ef;
        case m2c::kloc_329f2: 	goto loc_329f2;
        case m2c::kloc_32a5c: 	goto loc_32a5c;
        case m2c::kloc_32aef: 	goto loc_32aef;
        case m2c::kloc_32b02: 	goto loc_32b02;
        case m2c::kloc_32b07: 	goto loc_32b07;
        case m2c::kloc_32b29: 	goto loc_32b29;
        case m2c::kloc_32b37: 	goto loc_32b37;
        case m2c::kloc_32b40: 	goto loc_32b40;
        case m2c::kloc_32b4f: 	goto loc_32b4f;
        case m2c::kloc_32b60: 	goto loc_32b60;
        case m2c::kloc_32b65: 	goto loc_32b65;
        case m2c::kloc_32b7c: 	goto loc_32b7c;
        case m2c::kloc_32baa: 	goto loc_32baa;
        case m2c::kloc_32bce: 	goto loc_32bce;
        case m2c::kloc_32bfd: 	goto loc_32bfd;
        case m2c::kloc_32c16: 	goto loc_32c16;
        case m2c::kloc_32c24: 	goto loc_32c24;
        case m2c::kloc_32c3a: 	goto loc_32c3a;
        case m2c::kloc_32c4f: 	goto loc_32c4f;
        case m2c::kloc_32c66: 	goto loc_32c66;
        case m2c::kloc_32c69: 	goto loc_32c69;
        case m2c::kloc_32c6e: 	goto loc_32c6e;
        case m2c::kloc_32c84: 	goto loc_32c84;
        case m2c::kloc_32cbd: 	goto loc_32cbd;
        case m2c::kloc_32d0d: 	goto loc_32d0d;
        case m2c::kloc_32d14: 	goto loc_32d14;
        case m2c::kloc_32d3b: 	goto loc_32d3b;
        case m2c::kloc_32d3d: 	goto loc_32d3d;
        case m2c::kloc_32d46: 	goto loc_32d46;
        case m2c::kloc_32d70: 	goto loc_32d70;
        case m2c::kloc_32d7a: 	goto loc_32d7a;
        case m2c::kloc_32d97: 	goto loc_32d97;
        case m2c::kloc_32dba: 	goto loc_32dba;
        case m2c::kloc_32dc9: 	goto loc_32dc9;
        case m2c::kloc_32de0: 	goto loc_32de0;
        case m2c::kloc_32dfd: 	goto loc_32dfd;
        case m2c::kloc_32e1a: 	goto loc_32e1a;
        case m2c::kloc_32e21: 	goto loc_32e21;
        case m2c::kloc_32e30: 	goto loc_32e30;
        case m2c::kloc_32e3e: 	goto loc_32e3e;
        case m2c::kloc_32e4a: 	goto loc_32e4a;
        case m2c::kloc_32e51: 	goto loc_32e51;
        case m2c::kloc_32e5b: 	goto loc_32e5b;
        case m2c::kloc_32e62: 	goto loc_32e62;
        case m2c::kloc_32e76: 	goto loc_32e76;
        case m2c::kloc_32ee4: 	goto loc_32ee4;
        case m2c::kloc_32eee: 	goto loc_32eee;
        case m2c::kloc_32efc: 	goto loc_32efc;
        case m2c::kloc_32f1a: 	goto loc_32f1a;
        case m2c::kloc_32f27: 	goto loc_32f27;
        case m2c::kloc_33076: 	goto loc_33076;
        case m2c::kloc_3307d: 	goto loc_3307d;
        case m2c::kloc_3308b: 	goto loc_3308b;
        case m2c::kloc_3311b: 	goto loc_3311b;
        case m2c::kloc_3311e: 	goto loc_3311e;
        case m2c::kloc_3316d: 	goto loc_3316d;
        case m2c::kloc_33170: 	goto loc_33170;
        case m2c::kloc_331c7: 	goto loc_331c7;
        case m2c::kloc_331cc: 	goto loc_331cc;
        case m2c::kloc_331e0: 	goto loc_331e0;
        case m2c::kloc_331e3: 	goto loc_331e3;
        case m2c::kloc_331fa: 	goto loc_331fa;
        case m2c::kloc_331fb: 	goto loc_331fb;
        case m2c::kloc_33213: 	goto loc_33213;
        case m2c::kloc_3323e: 	goto loc_3323e;
        case m2c::kloc_33251: 	goto loc_33251;
        case m2c::kloc_33256: 	goto loc_33256;
        case m2c::kloc_3327c: 	goto loc_3327c;
        case m2c::kloc_33280: 	goto loc_33280;
        case m2c::kloc_33282: 	goto loc_33282;
        case m2c::kloc_3329b: 	goto loc_3329b;
        case m2c::kloc_332a0: 	goto loc_332a0;
        case m2c::kloc_332bd: 	goto loc_332bd;
        case m2c::kloc_332ce: 	goto loc_332ce;
        case m2c::kloc_332d6: 	goto loc_332d6;
        case m2c::kloc_332d8: 	goto loc_332d8;
        case m2c::kloc_332e4: 	goto loc_332e4;
        case m2c::kloc_33396: 	goto loc_33396;
        case m2c::kloc_333a5: 	goto loc_333a5;
        case m2c::kloc_333b4: 	goto loc_333b4;
        case m2c::kloc_333d5: 	goto loc_333d5;
        case m2c::kloc_333f1: 	goto loc_333f1;
        case m2c::kloc_333fc: 	goto loc_333fc;
        case m2c::kloc_333fe: 	goto loc_333fe;
        case m2c::kloc_33410: 	goto loc_33410;
        case m2c::kloc_3341c: 	goto loc_3341c;
        case m2c::kloc_3343b: 	goto loc_3343b;
        case m2c::kloc_33449: 	goto loc_33449;
        case m2c::kloc_33461: 	goto loc_33461;
        case m2c::kloc_3346e: 	goto loc_3346e;
        case m2c::kloc_33486: 	goto loc_33486;
        case m2c::kloc_33493: 	goto loc_33493;
        case m2c::kloc_334ae: 	goto loc_334ae;
        case m2c::kloc_334cc: 	goto loc_334cc;
        case m2c::kloc_334df: 	goto loc_334df;
        case m2c::kloc_334f4: 	goto loc_334f4;
        case m2c::kloc_334fb: 	goto loc_334fb;
        case m2c::kloc_33510: 	goto loc_33510;
        case m2c::kloc_33515: 	goto loc_33515;
        case m2c::kloc_33522: 	goto loc_33522;
        case m2c::kloc_3352f: 	goto loc_3352f;
        case m2c::kloc_3353c: 	goto loc_3353c;
        case m2c::kloc_33549: 	goto loc_33549;
        case m2c::kloc_3359a: 	goto loc_3359a;
        case m2c::kloc_335be: 	goto loc_335be;
        case m2c::kloc_335ca: 	goto loc_335ca;
        case m2c::kloc_335df: 	goto loc_335df;
        case m2c::kloc_335e7: 	goto loc_335e7;
        case m2c::kloc_335ea: 	goto loc_335ea;
        case m2c::kloc_335f1: 	goto loc_335f1;
        case m2c::kloc_335f6: 	goto loc_335f6;
        case m2c::kloc_33602: 	goto loc_33602;
        case m2c::kloc_33605: 	goto loc_33605;
        case m2c::kloc_3360b: 	goto loc_3360b;
        case m2c::kloc_3360f: 	goto loc_3360f;
        case m2c::kloc_33612: 	goto loc_33612;
        case m2c::kloc_33615: 	goto loc_33615;
        case m2c::kloc_3361a: 	goto loc_3361a;
        case m2c::kloc_3361e: 	goto loc_3361e;
        case m2c::kloc_33621: 	goto loc_33621;
        case m2c::kloc_3363d: 	goto loc_3363d;
        case m2c::kloc_33640: 	goto loc_33640;
        case m2c::kloc_33674: 	goto loc_33674;
        case m2c::kloc_33687: 	goto loc_33687;
        case m2c::kloc_33689: 	goto loc_33689;
        case m2c::kloc_336bd: 	goto loc_336bd;
        case m2c::kloc_336e6: 	goto loc_336e6;
        case m2c::kloc_33704: 	goto loc_33704;
        case m2c::kloc_33810: 	goto loc_33810;
        case m2c::kloc_3381a: 	goto loc_3381a;
        case m2c::kloc_33840: 	goto loc_33840;
        case m2c::kloc_3384d: 	goto loc_3384d;
        case m2c::kloc_3388d: 	goto loc_3388d;
        case m2c::kloc_3389a: 	goto loc_3389a;
        case m2c::kloc_338e4: 	goto loc_338e4;
        case m2c::kloc_338e7: 	goto loc_338e7;
        case m2c::kloc_33913: 	goto loc_33913;
        case m2c::kloc_3393d: 	goto loc_3393d;
        case m2c::kloc_33940: 	goto loc_33940;
        case m2c::kloc_33960: 	goto loc_33960;
        case m2c::kloc_339d6: 	goto loc_339d6;
        case m2c::kloc_339e3: 	goto loc_339e3;
        case m2c::kloc_339e8: 	goto loc_339e8;
        case m2c::kloc_33a03: 	goto loc_33a03;
        case m2c::kloc_33a33: 	goto loc_33a33;
        case m2c::kloc_33a42: 	goto loc_33a42;
        case m2c::kloc_33a47: 	goto loc_33a47;
        case m2c::kloc_33a5c: 	goto loc_33a5c;
        case m2c::kloc_33a66: 	goto loc_33a66;
        case m2c::kloc_33a6a: 	goto loc_33a6a;
        case m2c::kloc_33a70: 	goto loc_33a70;
        case m2c::kloc_33a7a: 	goto loc_33a7a;
        case m2c::kloc_33a80: 	goto loc_33a80;
        case m2c::kloc_33aa1: 	goto loc_33aa1;
        case m2c::kloc_33aa9: 	goto loc_33aa9;
        case m2c::kloc_33cab: 	goto loc_33cab;
        case m2c::kloc_33cae: 	goto loc_33cae;
        case m2c::kloc_33cfe: 	goto loc_33cfe;
        case m2c::kloc_33d05: 	goto loc_33d05;
        case m2c::kloc_33d17: 	goto loc_33d17;
        case m2c::kloc_33d1f: 	goto loc_33d1f;
        case m2c::kloc_33d26: 	goto loc_33d26;
        case m2c::kloc_33d2a: 	goto loc_33d2a;
        case m2c::kloc_33d4c: 	goto loc_33d4c;
        case m2c::kloc_33d57: 	goto loc_33d57;
        case m2c::kloc_33d5a: 	goto loc_33d5a;
        case m2c::kloc_33d5b: 	goto loc_33d5b;
        case m2c::kloc_33def: 	goto loc_33def;
        case m2c::kloc_33e70: 	goto loc_33e70;
        case m2c::kloc_33edb: 	goto loc_33edb;
        case m2c::kloc_33ef9: 	goto loc_33ef9;
        case m2c::kloc_33efb: 	goto loc_33efb;
        case m2c::kloc_33f27: 	goto loc_33f27;
        case m2c::kloc_33f3b: 	goto loc_33f3b;
        case m2c::kloc_33f58: 	goto loc_33f58;
        case m2c::kloc_33f67: 	goto loc_33f67;
        case m2c::kloc_33f6e: 	goto loc_33f6e;
        case m2c::kloc_33f75: 	goto loc_33f75;
        case m2c::kloc_33f7e: 	goto loc_33f7e;
        case m2c::kloc_33f91: 	goto loc_33f91;
        case m2c::kloc_33fc5: 	goto loc_33fc5;
        case m2c::kloc_33fda: 	goto loc_33fda;
        case m2c::kloc_33fe0: 	goto loc_33fe0;
        case m2c::kloc_33fe3: 	goto loc_33fe3;
        case m2c::kloc_33ff8: 	goto loc_33ff8;
        case m2c::kloc_33ff9: 	goto loc_33ff9;
        case m2c::kloc_34010: 	goto loc_34010;
        case m2c::kloc_34019: 	goto loc_34019;
        case m2c::kloc_3404c: 	goto loc_3404c;
        case m2c::kloc_3404f: 	goto loc_3404f;
        case m2c::kloc_34059: 	goto loc_34059;
        case m2c::kloc_340c6: 	goto loc_340c6;
        case m2c::kloc_340d3: 	goto loc_340d3;
        case m2c::kloc_340db: 	goto loc_340db;
        case m2c::kloc_340e3: 	goto loc_340e3;
        case m2c::kloc_340eb: 	goto loc_340eb;
        case m2c::kloc_340fd: 	goto loc_340fd;
        case m2c::kloc_34180: 	goto loc_34180;
        case m2c::kloc_341a6: 	goto loc_341a6;
        case m2c::kloc_341bb: 	goto loc_341bb;
        case m2c::kloc_341d4: 	goto loc_341d4;
        case m2c::kloc_341f0: 	goto loc_341f0;
        case m2c::kloc_341fb: 	goto loc_341fb;
        case m2c::kloc_341fd: 	goto loc_341fd;
        case m2c::kloc_34231: 	goto loc_34231;
        case m2c::kloc_34251: 	goto loc_34251;
        case m2c::kloc_34352: 	goto loc_34352;
        case m2c::kloc_343af: 	goto loc_343af;
        case m2c::kloc_343b8: 	goto loc_343b8;
        case m2c::kloc_343d3: 	goto loc_343d3;
        case m2c::kloc_343ed: 	goto loc_343ed;
        case m2c::kloc_343fb: 	goto loc_343fb;
        case m2c::kloc_34432: 	goto loc_34432;
        case m2c::kloc_34440: 	goto loc_34440;
        case m2c::kloc_34467: 	goto loc_34467;
        case m2c::kloc_34470: 	goto loc_34470;
        case m2c::kloc_344b7: 	goto loc_344b7;
        case m2c::kloc_344d5: 	goto loc_344d5;
        case m2c::kloc_344e4: 	goto loc_344e4;
        case m2c::kloc_344ee: 	goto loc_344ee;
        case m2c::kloc_34501: 	goto loc_34501;
        case m2c::kloc_3450c: 	goto loc_3450c;
        case m2c::kloc_34521: 	goto loc_34521;
        case m2c::kloc_3455a: 	goto loc_3455a;
        case m2c::kloc_34569: 	goto loc_34569;
        case m2c::kloc_34578: 	goto loc_34578;
        case m2c::kloc_34587: 	goto loc_34587;
        case m2c::kloc_34596: 	goto loc_34596;
        case m2c::kloc_345a5: 	goto loc_345a5;
        case m2c::kloc_345b4: 	goto loc_345b4;
        case m2c::kloc_345c3: 	goto loc_345c3;
        case m2c::kloc_345d2: 	goto loc_345d2;
        case m2c::kloc_345e9: 	goto loc_345e9;
        case m2c::kloc_345f8: 	goto loc_345f8;
        case m2c::kloc_34607: 	goto loc_34607;
        case m2c::kloc_34641: 	goto loc_34641;
        case m2c::kloc_34650: 	goto loc_34650;
        case m2c::kloc_3465f: 	goto loc_3465f;
        case m2c::kloc_3466e: 	goto loc_3466e;
        case m2c::kloc_3467d: 	goto loc_3467d;
        case m2c::kloc_3468d: 	goto loc_3468d;
        case m2c::kloc_3469c: 	goto loc_3469c;
        case m2c::kloc_346ac: 	goto loc_346ac;
        case m2c::kloc_346bb: 	goto loc_346bb;
        case m2c::kloc_346d2: 	goto loc_346d2;
        case m2c::kloc_346e1: 	goto loc_346e1;
        case m2c::kloc_346f0: 	goto loc_346f0;
        case m2c::kloc_3476d: 	goto loc_3476d;
        case m2c::kloc_347d4: 	goto loc_347d4;
        case m2c::kloc_347d9: 	goto loc_347d9;
        case m2c::kloc_347e8: 	goto loc_347e8;
        case m2c::kloc_347f4: 	goto loc_347f4;
        case m2c::kloc_347fd: 	goto loc_347fd;
        case m2c::kloc_34809: 	goto loc_34809;
        case m2c::kloc_3482f: 	goto loc_3482f;
        case m2c::kloc_3483b: 	goto loc_3483b;
        case m2c::kloc_3484c: 	goto loc_3484c;
        case m2c::kloc_34867: 	goto loc_34867;
        case m2c::kloc_34876: 	goto loc_34876;
        case m2c::kloc_34882: 	goto loc_34882;
        case m2c::kloc_3488b: 	goto loc_3488b;
        case m2c::kloc_34891: 	goto loc_34891;
        case m2c::kloc_348a2: 	goto loc_348a2;
        case m2c::kloc_348e2: 	goto loc_348e2;
        case m2c::kloc_348eb: 	goto loc_348eb;
        case m2c::kloc_348f4: 	goto loc_348f4;
        case m2c::kloc_34900: 	goto loc_34900;
        case m2c::kloc_34909: 	goto loc_34909;
        case m2c::kloc_34915: 	goto loc_34915;
        case m2c::kloc_3495e: 	goto loc_3495e;
        case m2c::kloc_349d1: 	goto loc_349d1;
        case m2c::kloc_349d8: 	goto loc_349d8;
        case m2c::kloc_349e6: 	goto loc_349e6;
        case m2c::kloc_34a21: 	goto loc_34a21;
        case m2c::kloc_34a25: 	goto loc_34a25;
        case m2c::kloc_34a2a: 	goto loc_34a2a;
        case m2c::kloc_34a32: 	goto loc_34a32;
        case m2c::kloc_34a48: 	goto loc_34a48;
        case m2c::kloc_34a4e: 	goto loc_34a4e;
        case m2c::kloc_34afd: 	goto loc_34afd;
        case m2c::kloc_34b5d: 	goto loc_34b5d;
        case m2c::kloc_34b72: 	goto loc_34b72;
        case m2c::kloc_34bb2: 	goto loc_34bb2;
        case m2c::kloc_34be4: 	goto loc_34be4;
        case m2c::kloc_34bf6: 	goto loc_34bf6;
        case m2c::kloc_34cd4: 	goto loc_34cd4;
        case m2c::kloc_34cfe: 	goto loc_34cfe;
        case m2c::kloc_34d46: 	goto loc_34d46;
        case m2c::kloc_34d4f: 	goto loc_34d4f;
        case m2c::kloc_34d7b: 	goto loc_34d7b;
        case m2c::kloc_34d7d: 	goto loc_34d7d;
        case m2c::kloc_34dc1: 	goto loc_34dc1;
        case m2c::kloc_34dc4: 	goto loc_34dc4;
        case m2c::kloc_34dd9: 	goto loc_34dd9;
        case m2c::kloc_34ddb: 	goto loc_34ddb;
        case m2c::kloc_34e11: 	goto loc_34e11;
        case m2c::kloc_34e27: 	goto loc_34e27;
        case m2c::kloc_34ec6: 	goto loc_34ec6;
        case m2c::kloc_34f03: 	goto loc_34f03;
        case m2c::kloc_34f09: 	goto loc_34f09;
        case m2c::kloc_34f1c: 	goto loc_34f1c;
        case m2c::kloc_34f34: 	goto loc_34f34;
        case m2c::kloc_34f82: 	goto loc_34f82;
        case m2c::kloc_34fbf: 	goto loc_34fbf;
        case m2c::kloc_3500a: 	goto loc_3500a;
        case m2c::kloc_35037: 	goto loc_35037;
        case m2c::kloc_35039: 	goto loc_35039;
        case m2c::kloc_3503d: 	goto loc_3503d;
        case m2c::kloc_35057: 	goto loc_35057;
        case m2c::kloc_35060: 	goto loc_35060;
        case m2c::klocret_3354b: 	goto locret_3354b;
        case m2c::kseg021_proc: 	goto seg021_proc;
        case m2c::ksub_318f0: 	goto sub_318f0;
        case m2c::ksub_3190c: 	goto sub_3190c;
        case m2c::ksub_31c94: 	goto sub_31c94;
        case m2c::ksub_321b2: 	goto sub_321b2;
        case m2c::ksub_32244: 	goto sub_32244;
        case m2c::ksub_32284: 	goto sub_32284;
        case m2c::ksub_32292: 	goto sub_32292;
        case m2c::ksub_326ae: 	goto sub_326ae;
        case m2c::ksub_327c9: 	goto sub_327c9;
        case m2c::ksub_327e8: 	goto sub_327e8;
        case m2c::ksub_32887: 	goto sub_32887;
        case m2c::ksub_328b7: 	goto sub_328b7;
        case m2c::ksub_328e5: 	goto sub_328e5;
        case m2c::ksub_32a01: 	goto sub_32a01;
        case m2c::ksub_32d4c: 	goto sub_32d4c;
        case m2c::ksub_32e68: 	goto sub_32e68;
        case m2c::ksub_32f2d: 	goto sub_32f2d;
        case m2c::ksub_32f79: 	goto sub_32f79;
        case m2c::ksub_32fc4: 	goto sub_32fc4;
        case m2c::ksub_33026: 	goto sub_33026;
        case m2c::ksub_33044: 	goto sub_33044;
        case m2c::ksub_33056: 	goto sub_33056;
        case m2c::ksub_330a3: 	goto sub_330a3;
        case m2c::ksub_330aa: 	goto sub_330aa;
        case m2c::ksub_330b9: 	goto sub_330b9;
        case m2c::ksub_33161: 	goto sub_33161;
        case m2c::ksub_3317c: 	goto sub_3317c;
        case m2c::ksub_3318a: 	goto sub_3318a;
        case m2c::ksub_33198: 	goto sub_33198;
        case m2c::ksub_3321b: 	goto sub_3321b;
        case m2c::ksub_33242: 	goto sub_33242;
        case m2c::ksub_33248: 	goto sub_33248;
        case m2c::ksub_33267: 	goto sub_33267;
        case m2c::ksub_334ff: 	goto sub_334ff;
        case m2c::ksub_3354c: 	goto sub_3354c;
        case m2c::ksub_3368f: 	goto sub_3368f;
        case m2c::ksub_33713: 	goto sub_33713;
        case m2c::ksub_33825: 	goto sub_33825;
        case m2c::ksub_338a1: 	goto sub_338a1;
        case m2c::ksub_3391c: 	goto sub_3391c;
        case m2c::ksub_33aae: 	goto sub_33aae;
        case m2c::ksub_33b29: 	goto sub_33b29;
        case m2c::ksub_33b69: 	goto sub_33b69;
        case m2c::ksub_33c72: 	goto sub_33c72;
        case m2c::ksub_33d98: 	goto sub_33d98;
        case m2c::ksub_33f01: 	goto sub_33f01;
        case m2c::ksub_34024: 	goto sub_34024;
        case m2c::ksub_34078: 	goto sub_34078;
        case m2c::ksub_34206: 	goto sub_34206;
        case m2c::ksub_34255: 	goto sub_34255;
        case m2c::ksub_34284: 	goto sub_34284;
        case m2c::ksub_34981: 	goto sub_34981;
        case m2c::ksub_3499f: 	goto sub_3499f;
        case m2c::ksub_349b1: 	goto sub_349b1;
        case m2c::ksub_349f3: 	goto sub_349f3;
        case m2c::ksub_34a38: 	goto sub_34a38;
        case m2c::ksub_34b78: 	goto sub_34b78;
        case m2c::ksub_34c04: 	goto sub_34c04;
        case m2c::ksub_34c2f: 	goto sub_34c2f;
        case m2c::ksub_34c5b: 	goto sub_34c5b;
        case m2c::ksub_34d04: 	goto sub_34d04;
        case m2c::ksub_34d59: 	goto sub_34d59;
        case m2c::ksub_34f55: 	goto sub_34f55;
        case m2c::ksub_34f97: 	goto sub_34f97;
        case m2c::ksub_34fdc: 	goto sub_34fdc;
        case m2c::ksub_35027: 	goto sub_35027;
        case m2c::ksub_35067: 	goto sub_35067;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, _source);m2c::stackDump(_state); abort();
    };
}

