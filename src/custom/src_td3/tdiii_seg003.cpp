/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool sub_19778(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_19778:
    _begin:
#undef var_12
#define var_12 -0x12
	// 18386 var_12          = word ptr -12h ;~ 0B19:0008
#undef var_10
#define var_10 -0x10
	// 18387 var_10          = word ptr -10h ;~ 0B19:0008
#undef var_e
#define var_e -0x0E
	// 18388 var_E           = word ptr -0Eh ;~ 0B19:0008
#undef var_c
#define var_c -0x0C
	// 18389 var_C           = word ptr -0Ch ;~ 0B19:0008
#undef var_a
#define var_a -0x0A
	// 18390 var_A           = word ptr -0Ah ;~ 0B19:0008
#undef var_8
#define var_8 -8
	// 18391 var_8           = word ptr -8 ;~ 0B19:0008
#undef var_6
#define var_6 -6
	// 18392 var_6           = word ptr -6 ;~ 0B19:0008
#undef var_4
#define var_4 -4
	// 18393 var_4           = word ptr -4 ;~ 0B19:0008
#undef var_2
#define var_2 -2
	// 18394 var_2           = word ptr -2 ;~ 0B19:0008
ret_b19_8:
	// 5307 
cs=0xb19;eip=0x000008; 	X(PUSH(bp));	// 18396 push    bp ;~ 0B19:0008
cs=0xb19;eip=0x000009; 	T(MOV(bp, sp));	// 18397 mov     bp, sp ;~ 0B19:0009
cs=0xb19;eip=0x00000b; 	T(SUB(sp, 0x12));	// 18398 sub     sp, 12h ;~ 0B19:000B
cs=0xb19;eip=0x00000f; 	X(PUSH(di));	// 18399 push    di ;~ 0B19:000F
cs=0xb19;eip=0x000010; 	X(PUSH(si));	// 18400 push    si ;~ 0B19:0010
cs=0xb19;eip=0x000011; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 18401 mov     [bp+var_8], 0 ;~ 0B19:0011
cs=0xb19;eip=0x000016; 	T(MOV(ax, 4));	// 18402 mov     ax, 4 ;~ 0B19:0016
cs=0xb19;eip=0x000019; 	T(MOV(dx, 0));	// 18403 mov     dx, 0 ;~ 0B19:0019
cs=0xb19;eip=0x00001c; 	X(PUSH(dx));	// 18404 push    dx ;~ 0B19:001C
cs=0xb19;eip=0x00001d; 	X(PUSH(ax));	// 18405 push    ax ;~ 0B19:001D
cs=0xb19;eip=0x00001e; 	T(MOV(ax, 0x12A4));	// 18406 mov     ax, 12A4h ;~ 0B19:001E
cs=0xb19;eip=0x000021; 	X(PUSH(ax));	// 18407 push    ax ;~ 0B19:0021
cs=0xb19;eip=0x000022; 	R(CALLF(sub_29dcc,0));	// 18408 call    sub_29DCC ;~ 0B19:0022
cs=0xb19;eip=0x000027; 	T(MOV(ax, word_2d0de));	// 18409 mov     ax, word_2D0DE ;~ 0B19:0027
cs=0xb19;eip=0x00002a; 	T(SUB(ax, word_2d0dc));	// 18410 sub     ax, word_2D0DC ;~ 0B19:002A
cs=0xb19;eip=0x00002e; 	T(CWD);	// 18411 cwd ;~ 0B19:002E
cs=0xb19;eip=0x00002f; 	T(MOV(cx, ax));	// 18412 mov     cx, ax ;~ 0B19:002F
cs=0xb19;eip=0x000031; 	T(MOV(bx, dx));	// 18413 mov     bx, dx ;~ 0B19:0031
cs=0xb19;eip=0x000033; 	T(SHL(ax, 1));	// 18414 shl     ax, 1 ;~ 0B19:0033
cs=0xb19;eip=0x000035; 	T(RCL(dx, 1));	// 18415 rcl     dx, 1 ;~ 0B19:0035
cs=0xb19;eip=0x000037; 	T(ADD(ax, cx));	// 18416 add     ax, cx ;~ 0B19:0037
cs=0xb19;eip=0x000039; 	T(ADC(dx, bx));	// 18417 adc     dx, bx ;~ 0B19:0039
cs=0xb19;eip=0x00003b; 	T(SHL(ax, 1));	// 18418 shl     ax, 1 ;~ 0B19:003B
cs=0xb19;eip=0x00003d; 	T(RCL(dx, 1));	// 18419 rcl     dx, 1 ;~ 0B19:003D
cs=0xb19;eip=0x00003f; 	X(ADD(word_2d0e4, ax));	// 18420 add     word_2D0E4, ax ;~ 0B19:003F
cs=0xb19;eip=0x000043; 	X(ADC(word_2d0e6, dx));	// 18421 adc     word_2D0E6, dx ;~ 0B19:0043
cs=0xb19;eip=0x000047; 	T(MOV(ax, word_2d0dc));	// 18422 mov     ax, word_2D0DC ;~ 0B19:0047
cs=0xb19;eip=0x00004a; 	X(MOV(word_2d0de, ax));	// 18423 mov     word_2D0DE, ax ;~ 0B19:004A
cs=0xb19;eip=0x00004d; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 18424 mov     [bp+var_2], 0 ;~ 0B19:004D
cs=0xb19;eip=0x000052; 	R(JMP(loc_197c8));	// 18425 jmp     loc_197C8 ;~ 0B19:0052
loc_197c5:
	// 5308 
cs=0xb19;eip=0x000055; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 18429 inc     [bp+var_2] ;~ 0B19:0055
loc_197c8:
	// 5309 
cs=0xb19;eip=0x000058; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 3));	// 18432 cmp     [bp+var_2], 3 ;~ 0B19:0058
cs=0xb19;eip=0x00005c; 	R(JL(loc_197d1));	// 18433 jl      short loc_197D1 ;~ 0B19:005C
cs=0xb19;eip=0x00005e; 	R(JMP(loc_1982e));	// 18434 jmp     loc_1982E ;~ 0B19:005E
loc_197d1:
	// 5310 
cs=0xb19;eip=0x000061; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 18438 mov     bx, [bp+var_2] ;~ 0B19:0061
cs=0xb19;eip=0x000064; 	T(SHL(bx, 1));	// 18439 shl     bx, 1 ;~ 0B19:0064
cs=0xb19;eip=0x000066; 	T(SHL(bx, 1));	// 18440 shl     bx, 1 ;~ 0B19:0066
cs=0xb19;eip=0x000068; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_2))));	// 18441 mov     si, [bp+var_2] ;~ 0B19:0068
cs=0xb19;eip=0x00006b; 	T(SHL(si, 1));	// 18442 shl     si, 1 ;~ 0B19:006B
cs=0xb19;eip=0x00006d; 	T(SHL(si, 1));	// 18443 shl     si, 1 ;~ 0B19:006D
cs=0xb19;eip=0x00006f; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x1276))));	// 18444 mov     ax, [si+1276h] ;~ 0B19:006F
cs=0xb19;eip=0x000073; 	T(MOV(dx, *(dw*)(raddr(ds,si+0x1278))));	// 18445 mov     dx, [si+1278h] ;~ 0B19:0073
cs=0xb19;eip=0x000077; 	X(MOV(*(dw*)(raddr(ds,bx+0x1282)), ax));	// 18446 mov     [bx+1282h], ax ;~ 0B19:0077
cs=0xb19;eip=0x00007b; 	X(MOV(*(dw*)(raddr(ds,bx+0x1284)), dx));	// 18447 mov     [bx+1284h], dx ;~ 0B19:007B
cs=0xb19;eip=0x00007f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 18448 mov     bx, [bp+var_2] ;~ 0B19:007F
cs=0xb19;eip=0x000082; 	T(SHL(bx, 1));	// 18449 shl     bx, 1 ;~ 0B19:0082
cs=0xb19;eip=0x000084; 	T(SHL(bx, 1));	// 18450 shl     bx, 1 ;~ 0B19:0084
cs=0xb19;eip=0x000086; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_2))));	// 18451 mov     si, [bp+var_2] ;~ 0B19:0086
cs=0xb19;eip=0x000089; 	T(SHL(si, 1));	// 18452 shl     si, 1 ;~ 0B19:0089
cs=0xb19;eip=0x00008b; 	T(SHL(si, 1));	// 18453 shl     si, 1 ;~ 0B19:008B
cs=0xb19;eip=0x00008d; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x126A))));	// 18454 mov     ax, [si+126Ah] ;~ 0B19:008D
cs=0xb19;eip=0x000091; 	T(MOV(dx, *(dw*)(raddr(ds,si+0x126C))));	// 18455 mov     dx, [si+126Ch] ;~ 0B19:0091
cs=0xb19;eip=0x000095; 	X(MOV(*(dw*)(raddr(ds,bx+0x1276)), ax));	// 18456 mov     [bx+1276h], ax ;~ 0B19:0095
cs=0xb19;eip=0x000099; 	X(MOV(*(dw*)(raddr(ds,bx+0x1278)), dx));	// 18457 mov     [bx+1278h], dx ;~ 0B19:0099
cs=0xb19;eip=0x00009d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 18458 mov     bx, [bp+var_2] ;~ 0B19:009D
cs=0xb19;eip=0x0000a0; 	T(SHL(bx, 1));	// 18459 shl     bx, 1 ;~ 0B19:00A0
cs=0xb19;eip=0x0000a2; 	T(SHL(bx, 1));	// 18460 shl     bx, 1 ;~ 0B19:00A2
cs=0xb19;eip=0x0000a4; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_2))));	// 18461 mov     si, [bp+var_2] ;~ 0B19:00A4
cs=0xb19;eip=0x0000a7; 	T(SHL(si, 1));	// 18462 shl     si, 1 ;~ 0B19:00A7
cs=0xb19;eip=0x0000a9; 	T(SHL(si, 1));	// 18463 shl     si, 1 ;~ 0B19:00A9
cs=0xb19;eip=0x0000ab; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x125E))));	// 18464 mov     ax, [si+125Eh] ;~ 0B19:00AB
cs=0xb19;eip=0x0000af; 	T(MOV(dx, *(dw*)(raddr(ds,si+0x1260))));	// 18465 mov     dx, [si+1260h] ;~ 0B19:00AF
cs=0xb19;eip=0x0000b3; 	X(MOV(*(dw*)(raddr(ds,bx+0x126A)), ax));	// 18466 mov     [bx+126Ah], ax ;~ 0B19:00B3
cs=0xb19;eip=0x0000b7; 	X(MOV(*(dw*)(raddr(ds,bx+0x126C)), dx));	// 18467 mov     [bx+126Ch], dx ;~ 0B19:00B7
cs=0xb19;eip=0x0000bb; 	R(JMP(loc_197c5));	// 18468 jmp     loc_197C5 ;~ 0B19:00BB
loc_1982e:
	// 5311 
cs=0xb19;eip=0x0000be; 	T(CMP(byte_2d0e0, 0));	// 18472 cmp     byte_2D0E0, 0 ;~ 0B19:00BE
cs=0xb19;eip=0x0000c3; 	R(JNZ(loc_19838));	// 18473 jnz     short loc_19838 ;~ 0B19:00C3
cs=0xb19;eip=0x0000c5; 	R(JMP(loc_198b1));	// 18474 jmp     loc_198B1 ;~ 0B19:00C5
loc_19838:
	// 5312 
cs=0xb19;eip=0x0000c8; 	T(CMP(byte_378db, 0x10));	// 18478 cmp     byte_378DB, 10h ;~ 0B19:00C8
cs=0xb19;eip=0x0000cd; 	R(JNC(loc_19842));	// 18479 jnb     short loc_19842 ;~ 0B19:00CD
cs=0xb19;eip=0x0000cf; 	R(JMP(loc_198b1));	// 18480 jmp     loc_198B1 ;~ 0B19:00CF
loc_19842:
	// 5313 
cs=0xb19;eip=0x0000d2; 	T(CMP(byte_378db, 0x14));	// 18484 cmp     byte_378DB, 14h ;~ 0B19:00D2
cs=0xb19;eip=0x0000d7; 	R(JBE(loc_1984c));	// 18485 jbe     short loc_1984C ;~ 0B19:00D7
cs=0xb19;eip=0x0000d9; 	R(JMP(loc_198b1));	// 18486 jmp     loc_198B1 ;~ 0B19:00D9
loc_1984c:
	// 5314 
cs=0xb19;eip=0x0000dc; 	T(CMP(byte_378db, 0x12));	// 18490 cmp     byte_378DB, 12h ;~ 0B19:00DC
cs=0xb19;eip=0x0000e1; 	R(JNZ(loc_19856));	// 18491 jnz     short loc_19856 ;~ 0B19:00E1
cs=0xb19;eip=0x0000e3; 	R(JMP(loc_198b1));	// 18492 jmp     loc_198B1 ;~ 0B19:00E3
loc_19856:
	// 5315 
cs=0xb19;eip=0x0000e6; 	T(TEST(*(db*)(((db*)&word_37b79)), 1));	// 18496 test    byte ptr word_37B79, 1 ;~ 0B19:00E6
cs=0xb19;eip=0x0000eb; 	R(JZ(loc_19860));	// 18497 jz      short loc_19860 ;~ 0B19:00EB
cs=0xb19;eip=0x0000ed; 	R(JMP(loc_198a8));	// 18498 jmp     loc_198A8 ;~ 0B19:00ED
loc_19860:
	// 5316 
cs=0xb19;eip=0x0000f0; 	T(MOV(ax, word_37803));	// 18502 mov     ax, word_37803 ;~ 0B19:00F0
cs=0xb19;eip=0x0000f3; 	X(MOV(word_3780b, ax));	// 18503 mov     word_3780B, ax ;~ 0B19:00F3
cs=0xb19;eip=0x0000f6; 	T(MOV(ax, word_37805));	// 18504 mov     ax, word_37805 ;~ 0B19:00F6
cs=0xb19;eip=0x0000f9; 	X(MOV(word_3780d, ax));	// 18505 mov     word_3780D, ax ;~ 0B19:00F9
cs=0xb19;eip=0x0000fc; 	T(MOV(ax, word_37807));	// 18506 mov     ax, word_37807 ;~ 0B19:00FC
cs=0xb19;eip=0x0000ff; 	X(MOV(word_3780f, ax));	// 18507 mov     word_3780F, ax ;~ 0B19:00FF
cs=0xb19;eip=0x000102; 	T(MOV(ax, word_37809));	// 18508 mov     ax, word_37809 ;~ 0B19:0102
cs=0xb19;eip=0x000105; 	X(MOV(word_37811, ax));	// 18509 mov     word_37811, ax ;~ 0B19:0105
cs=0xb19;eip=0x000108; 	T(MOV(ax, word_377fb));	// 18510 mov     ax, word_377FB ;~ 0B19:0108
cs=0xb19;eip=0x00010b; 	X(MOV(word_37803, ax));	// 18511 mov     word_37803, ax ;~ 0B19:010B
cs=0xb19;eip=0x00010e; 	T(MOV(ax, word_377fd));	// 18512 mov     ax, word_377FD ;~ 0B19:010E
cs=0xb19;eip=0x000111; 	X(MOV(word_37805, ax));	// 18513 mov     word_37805, ax ;~ 0B19:0111
cs=0xb19;eip=0x000114; 	T(MOV(ax, word_377ff));	// 18514 mov     ax, word_377FF ;~ 0B19:0114
cs=0xb19;eip=0x000117; 	X(MOV(word_37807, ax));	// 18515 mov     word_37807, ax ;~ 0B19:0117
cs=0xb19;eip=0x00011a; 	T(MOV(ax, word_37801));	// 18516 mov     ax, word_37801 ;~ 0B19:011A
cs=0xb19;eip=0x00011d; 	X(MOV(word_37809, ax));	// 18517 mov     word_37809, ax ;~ 0B19:011D
cs=0xb19;eip=0x000120; 	T(MOV(ax, word_35b33));	// 18518 mov     ax, word_35B33 ;~ 0B19:0120
cs=0xb19;eip=0x000123; 	X(MOV(word_377fb, ax));	// 18519 mov     word_377FB, ax ;~ 0B19:0123
cs=0xb19;eip=0x000126; 	T(MOV(ax, word_35db3));	// 18520 mov     ax, word_35DB3 ;~ 0B19:0126
cs=0xb19;eip=0x000129; 	X(MOV(word_377fd, ax));	// 18521 mov     word_377FD, ax ;~ 0B19:0129
cs=0xb19;eip=0x00012c; 	T(MOV(ax, word_36033));	// 18522 mov     ax, word_36033 ;~ 0B19:012C
cs=0xb19;eip=0x00012f; 	X(MOV(word_377ff, ax));	// 18523 mov     word_377FF, ax ;~ 0B19:012F
cs=0xb19;eip=0x000132; 	T(MOV(ax, word_352d1));	// 18524 mov     ax, word_352D1 ;~ 0B19:0132
cs=0xb19;eip=0x000135; 	X(MOV(word_37801, ax));	// 18525 mov     word_37801, ax ;~ 0B19:0135
loc_198a8:
	// 5317 
cs=0xb19;eip=0x000138; 	T(MOV(ax, 0));	// 18528 mov     ax, 0 ;~ 0B19:0138
cs=0xb19;eip=0x00013b; 	X(MOV(word_2d088, ax));	// 18529 mov     word_2D088, ax ;~ 0B19:013B
cs=0xb19;eip=0x00013e; 	X(MOV(byte_37513, al));	// 18530 mov     byte_37513, al ;~ 0B19:013E
loc_198b1:
	// 5318 
cs=0xb19;eip=0x000141; 	T(CMP(word_37ab9, 0));	// 18534 cmp     word_37AB9, 0 ;~ 0B19:0141
cs=0xb19;eip=0x000146; 	R(JZ(loc_198bb));	// 18535 jz      short loc_198BB ;~ 0B19:0146
cs=0xb19;eip=0x000148; 	R(JMP(loc_198c4));	// 18536 jmp     loc_198C4 ;~ 0B19:0148
loc_198bb:
	// 5319 
cs=0xb19;eip=0x00014b; 	X(MOV(word_3a176, 0));	// 18540 mov     word_3A176, 0 ;~ 0B19:014B
cs=0xb19;eip=0x000151; 	R(JMP(loc_1991c));	// 18541 jmp     loc_1991C ;~ 0B19:0151
loc_198c4:
	// 5320 
cs=0xb19;eip=0x000154; 	T(MOV(ax, word_37ab9));	// 18545 mov     ax, word_37AB9 ;~ 0B19:0154
cs=0xb19;eip=0x000157; 	T(MOV(cl, 9));	// 18546 mov     cl, 9 ;~ 0B19:0157
cs=0xb19;eip=0x000159; 	T(SHL(ax, cl));	// 18547 shl     ax, cl ;~ 0B19:0159
cs=0xb19;eip=0x00015b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 18548 mov     [bp+var_2], ax ;~ 0B19:015B
cs=0xb19;eip=0x00015e; 	T(MOV(ax, word_2bf12));	// 18549 mov     ax, word_2BF12 ;~ 0B19:015E
cs=0xb19;eip=0x000161; 	T(AND(ax, 0x9C));	// 18550 and     ax, 9Ch ;~ 0B19:0161
cs=0xb19;eip=0x000164; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 18551 mov     [bp+var_10], ax ;~ 0B19:0164
cs=0xb19;eip=0x000167; 	T(TEST(word_2bf12, 0x4000));	// 18552 test    word_2BF12, 4000h ;~ 0B19:0167
cs=0xb19;eip=0x00016d; 	R(JNZ(loc_198e2));	// 18553 jnz     short loc_198E2 ;~ 0B19:016D
cs=0xb19;eip=0x00016f; 	R(JMP(loc_198ea));	// 18554 jmp     loc_198EA ;~ 0B19:016F
loc_198e2:
	// 5321 
cs=0xb19;eip=0x000172; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 18558 mov     ax, [bp+var_10] ;~ 0B19:0172
cs=0xb19;eip=0x000175; 	T(NEG(ax));	// 18559 neg     ax ;~ 0B19:0175
cs=0xb19;eip=0x000177; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 18560 mov     [bp+var_10], ax ;~ 0B19:0177
loc_198ea:
	// 5322 
cs=0xb19;eip=0x00017a; 	T(MOV(ax, word_3a176));	// 18563 mov     ax, word_3A176 ;~ 0B19:017A
cs=0xb19;eip=0x00017d; 	X(ADD(*(dw*)(raddr(ss,bp+var_10)), ax));	// 18564 add     [bp+var_10], ax ;~ 0B19:017D
cs=0xb19;eip=0x000180; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 18565 mov     ax, [bp+var_2] ;~ 0B19:0180
cs=0xb19;eip=0x000183; 	T(SHL(ax, 1));	// 18566 shl     ax, 1 ;~ 0B19:0183
cs=0xb19;eip=0x000185; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_10))));	// 18567 cmp     ax, [bp+var_10] ;~ 0B19:0185
cs=0xb19;eip=0x000188; 	R(JL(loc_198fd));	// 18568 jl      short loc_198FD ;~ 0B19:0188
cs=0xb19;eip=0x00018a; 	R(JMP(loc_19905));	// 18569 jmp     loc_19905 ;~ 0B19:018A
loc_198fd:
	// 5323 
cs=0xb19;eip=0x00018d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 18573 mov     ax, [bp+var_2] ;~ 0B19:018D
cs=0xb19;eip=0x000190; 	T(SHL(ax, 1));	// 18574 shl     ax, 1 ;~ 0B19:0190
cs=0xb19;eip=0x000192; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 18575 mov     [bp+var_10], ax ;~ 0B19:0192
loc_19905:
	// 5324 
cs=0xb19;eip=0x000195; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 18578 mov     ax, [bp+var_2] ;~ 0B19:0195
cs=0xb19;eip=0x000198; 	T(CMP(*(dw*)(raddr(ss,bp+var_10)), ax));	// 18579 cmp     [bp+var_10], ax ;~ 0B19:0198
cs=0xb19;eip=0x00019b; 	R(JL(loc_19910));	// 18580 jl      short loc_19910 ;~ 0B19:019B
cs=0xb19;eip=0x00019d; 	R(JMP(loc_19916));	// 18581 jmp     loc_19916 ;~ 0B19:019D
loc_19910:
	// 5325 
cs=0xb19;eip=0x0001a0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 18585 mov     ax, [bp+var_2] ;~ 0B19:01A0
cs=0xb19;eip=0x0001a3; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 18586 mov     [bp+var_10], ax ;~ 0B19:01A3
loc_19916:
	// 5326 
cs=0xb19;eip=0x0001a6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 18589 mov     ax, [bp+var_10] ;~ 0B19:01A6
cs=0xb19;eip=0x0001a9; 	X(MOV(word_3a176, ax));	// 18590 mov     word_3A176, ax ;~ 0B19:01A9
loc_1991c:
	// 5327 
cs=0xb19;eip=0x0001ac; 	T(MOV(ax, word_2d08c));	// 18593 mov     ax, word_2D08C ;~ 0B19:01AC
cs=0xb19;eip=0x0001af; 	T(AND(ax, 0x0FFC0));	// 18594 and     ax, 0FFC0h ;~ 0B19:01AF
cs=0xb19;eip=0x0001b2; 	X(MOV(word_352d1, ax));	// 18595 mov     word_352D1, ax ;~ 0B19:01B2
cs=0xb19;eip=0x0001b5; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 18596 mov     [bp+var_A], ax ;~ 0B19:01B5
cs=0xb19;eip=0x0001b8; 	T(MOV(ax, word_2d08a));	// 18597 mov     ax, word_2D08A ;~ 0B19:01B8
cs=0xb19;eip=0x0001bb; 	T(AND(ax, 0x0FC00));	// 18598 and     ax, 0FC00h ;~ 0B19:01BB
cs=0xb19;eip=0x0001be; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 18599 mov     [bp+var_10], ax ;~ 0B19:01BE
cs=0xb19;eip=0x0001c1; 	T(MOV(ax, word_2d0a6));	// 18600 mov     ax, word_2D0A6 ;~ 0B19:01C1
cs=0xb19;eip=0x0001c4; 	T(MOV(dx, word_2d0a8));	// 18601 mov     dx, word_2D0A8 ;~ 0B19:01C4
cs=0xb19;eip=0x0001c8; 	X(MOV(word_38cea, ax));	// 18602 mov     word_38CEA, ax ;~ 0B19:01C8
cs=0xb19;eip=0x0001cb; 	X(MOV(word_38cec, dx));	// 18603 mov     word_38CEC, dx ;~ 0B19:01CB
cs=0xb19;eip=0x0001cf; 	T(CMP(byte_378e7, 0));	// 18604 cmp     byte_378E7, 0 ;~ 0B19:01CF
cs=0xb19;eip=0x0001d4; 	R(JNZ(loc_19949));	// 18605 jnz     short loc_19949 ;~ 0B19:01D4
cs=0xb19;eip=0x0001d6; 	R(JMP(loc_19992));	// 18606 jmp     loc_19992 ;~ 0B19:01D6
loc_19949:
	// 5328 
cs=0xb19;eip=0x0001d9; 	T(MOV(ax, 0x60));	// 18610 mov     ax, 60h ; '`' ;~ 0B19:01D9
cs=0xb19;eip=0x0001dc; 	T(MOV(dx, 0));	// 18611 mov     dx, 0 ;~ 0B19:01DC
cs=0xb19;eip=0x0001df; 	X(PUSH(dx));	// 18612 push    dx ;~ 0B19:01DF
cs=0xb19;eip=0x0001e0; 	X(PUSH(ax));	// 18613 push    ax ;~ 0B19:01E0
cs=0xb19;eip=0x0001e1; 	T(MOV(ax, word_2bf12));	// 18614 mov     ax, word_2BF12 ;~ 0B19:01E1
cs=0xb19;eip=0x0001e4; 	T(MOV(dx, word_2bf14));	// 18615 mov     dx, word_2BF14 ;~ 0B19:01E4
cs=0xb19;eip=0x0001e8; 	T(AND(ax, 0x1C));	// 18616 and     ax, 1Ch ;~ 0B19:01E8
cs=0xb19;eip=0x0001eb; 	T(AND(dx, 0));	// 18617 and     dx, 0 ;~ 0B19:01EB
cs=0xb19;eip=0x0001ee; 	X(PUSH(dx));	// 18618 push    dx ;~ 0B19:01EE
cs=0xb19;eip=0x0001ef; 	X(PUSH(ax));	// 18619 push    ax ;~ 0B19:01EF
cs=0xb19;eip=0x0001f0; 	R(CALLF(sub_29d98,0));	// 18620 call    sub_29D98 ;~ 0B19:01F0
cs=0xb19;eip=0x0001f5; 	T(MOV(cl, 2));	// 18621 mov     cl, 2 ;~ 0B19:01F5
cs=0xb19;eip=0x0001f7; 	T(CMP(cl, 0));	// 18622 cmp     cl, 0 ;~ 0B19:01F7
cs=0xb19;eip=0x0001fa; 	R(JNZ(loc_1996f));	// 18623 jnz     short loc_1996F ;~ 0B19:01FA
cs=0xb19;eip=0x0001fc; 	R(JMP(loc_19980));	// 18624 jmp     loc_19980 ;~ 0B19:01FC
loc_1996f:
	// 5329 
cs=0xb19;eip=0x0001ff; 	T(SHR(dx, 1));	// 18629 shr     dx, 1 ;~ 0B19:01FF
cs=0xb19;eip=0x000201; 	T(RCR(ax, 1));	// 18630 rcr     ax, 1 ;~ 0B19:0201
cs=0xb19;eip=0x000203; 	T(DEC(cl));	// 18631 dec     cl ;~ 0B19:0203
cs=0xb19;eip=0x000205; 	T(CMP(cl, 0));	// 18632 cmp     cl, 0 ;~ 0B19:0205
cs=0xb19;eip=0x000208; 	R(JNZ(loc_1997d));	// 18633 jnz     short loc_1997D ;~ 0B19:0208
cs=0xb19;eip=0x00020a; 	R(JMP(loc_19980));	// 18634 jmp     loc_19980 ;~ 0B19:020A
loc_1997d:
	// 5330 
cs=0xb19;eip=0x00020d; 	R(JMP(loc_1996f));	// 18638 jmp     loc_1996F ;~ 0B19:020D
loc_19980:
	// 5331 
cs=0xb19;eip=0x000210; 	T(SUB(ax, 0x0C0));	// 18643 sub     ax, 0C0h ; '¿' ;~ 0B19:0210
cs=0xb19;eip=0x000213; 	T(SBB(dx, 0));	// 18644 sbb     dx, 0 ;~ 0B19:0213
cs=0xb19;eip=0x000216; 	X(ADD(word_2d0a6, ax));	// 18645 add     word_2D0A6, ax ;~ 0B19:0216
cs=0xb19;eip=0x00021a; 	X(ADC(word_2d0a8, dx));	// 18646 adc     word_2D0A8, dx ;~ 0B19:021A
cs=0xb19;eip=0x00021e; 	X(DEC(byte_378e7));	// 18647 dec     byte_378E7 ;~ 0B19:021E
loc_19992:
	// 5332 
cs=0xb19;eip=0x000222; 	T(MOV(ax, 0x10));	// 18650 mov     ax, 10h ;~ 0B19:0222
cs=0xb19;eip=0x000225; 	T(MOV(dx, 0));	// 18651 mov     dx, 0 ;~ 0B19:0225
cs=0xb19;eip=0x000228; 	X(PUSH(dx));	// 18652 push    dx ;~ 0B19:0228
cs=0xb19;eip=0x000229; 	X(PUSH(ax));	// 18653 push    ax ;~ 0B19:0229
cs=0xb19;eip=0x00022a; 	X(PUSH(word_2d090));	// 18654 push    word_2D090 ;~ 0B19:022A
cs=0xb19;eip=0x00022e; 	X(PUSH(word_2d08e));	// 18655 push    word_2D08E ;~ 0B19:022E
cs=0xb19;eip=0x000232; 	R(CALLF(sub_29cfc,0));	// 18656 call    sub_29CFC ;~ 0B19:0232
cs=0xb19;eip=0x000237; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 18657 mov     [bp+var_2], ax ;~ 0B19:0237
cs=0xb19;eip=0x00023a; 	T(CMP(word_2d090, 0));	// 18658 cmp     word_2D090, 0 ;~ 0B19:023A
cs=0xb19;eip=0x00023f; 	R(JL(loc_199b4));	// 18659 jl      short loc_199B4 ;~ 0B19:023F
cs=0xb19;eip=0x000241; 	R(JMP(loc_199c1));	// 18660 jmp     loc_199C1 ;~ 0B19:0241
loc_199b4:
	// 5333 
cs=0xb19;eip=0x000244; 	X(ADD(*(dw*)(raddr(ss,bp+var_10)), 0x8000));	// 18664 add     [bp+var_10], 8000h ;~ 0B19:0244
cs=0xb19;eip=0x000249; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 18665 mov     ax, [bp+var_2] ;~ 0B19:0249
cs=0xb19;eip=0x00024c; 	T(NEG(ax));	// 18666 neg     ax ;~ 0B19:024C
cs=0xb19;eip=0x00024e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 18667 mov     [bp+var_2], ax ;~ 0B19:024E
loc_199c1:
	// 5334 
cs=0xb19;eip=0x000251; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 18670 push    [bp+var_2] ;~ 0B19:0251
cs=0xb19;eip=0x000254; 	X(PUSH(*(dw*)(raddr(ss,bp+var_10))));	// 18671 push    [bp+var_10] ;~ 0B19:0254
cs=0xb19;eip=0x000257; 	R(CALLF(sub_2046b,0));	// 18672 call    sub_2046B ;~ 0B19:0257
cs=0xb19;eip=0x00025c; 	T(ADD(sp, 4));	// 18673 add     sp, 4 ;~ 0B19:025C
cs=0xb19;eip=0x00025f; 	T(MOV(ax, word_352a0));	// 18674 mov     ax, word_352A0 ;~ 0B19:025F
cs=0xb19;eip=0x000262; 	T(CWD);	// 18675 cwd ;~ 0B19:0262
cs=0xb19;eip=0x000263; 	X(MOV(word_2d092, ax));	// 18676 mov     word_2D092, ax ;~ 0B19:0263
cs=0xb19;eip=0x000266; 	X(MOV(word_2d094, dx));	// 18677 mov     word_2D094, dx ;~ 0B19:0266
cs=0xb19;eip=0x00026a; 	T(MOV(ax, word_352a2));	// 18678 mov     ax, word_352A2 ;~ 0B19:026A
cs=0xb19;eip=0x00026d; 	T(CWD);	// 18679 cwd ;~ 0B19:026D
cs=0xb19;eip=0x00026e; 	X(MOV(word_2d096, ax));	// 18680 mov     word_2D096, ax ;~ 0B19:026E
cs=0xb19;eip=0x000271; 	X(MOV(word_2d098, dx));	// 18681 mov     word_2D098, dx ;~ 0B19:0271
cs=0xb19;eip=0x000275; 	T(CMP(byte_375cd, 0));	// 18682 cmp     byte_375CD, 0 ;~ 0B19:0275
cs=0xb19;eip=0x00027a; 	R(JNZ(loc_199ef));	// 18683 jnz     short loc_199EF ;~ 0B19:027A
cs=0xb19;eip=0x00027c; 	R(JMP(loc_19a0a));	// 18684 jmp     loc_19A0A ;~ 0B19:027C
loc_199ef:
	// 5335 
cs=0xb19;eip=0x00027f; 	T(MOV(ax, 0));	// 18688 mov     ax, 0 ;~ 0B19:027F
cs=0xb19;eip=0x000282; 	T(MOV(dx, 0));	// 18689 mov     dx, 0 ;~ 0B19:0282
cs=0xb19;eip=0x000285; 	X(MOV(word_2d09a, ax));	// 18690 mov     word_2D09A, ax ;~ 0B19:0285
cs=0xb19;eip=0x000288; 	X(MOV(word_2d09c, dx));	// 18691 mov     word_2D09C, dx ;~ 0B19:0288
cs=0xb19;eip=0x00028c; 	X(MOV(word_2d096, ax));	// 18692 mov     word_2D096, ax ;~ 0B19:028C
cs=0xb19;eip=0x00028f; 	X(MOV(word_2d098, dx));	// 18693 mov     word_2D098, dx ;~ 0B19:028F
cs=0xb19;eip=0x000293; 	X(MOV(word_2d092, ax));	// 18694 mov     word_2D092, ax ;~ 0B19:0293
cs=0xb19;eip=0x000296; 	X(MOV(word_2d094, dx));	// 18695 mov     word_2D094, dx ;~ 0B19:0296
loc_19a0a:
	// 5336 
cs=0xb19;eip=0x00029a; 	T(MOV(ax, word_2d092));	// 18698 mov     ax, word_2D092 ;~ 0B19:029A
cs=0xb19;eip=0x00029d; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 18699 mov     [bp+var_10], ax ;~ 0B19:029D
cs=0xb19;eip=0x0002a0; 	T(CMP(ax, 0));	// 18700 cmp     ax, 0 ;~ 0B19:02A0
cs=0xb19;eip=0x0002a3; 	R(JL(loc_19a18));	// 18701 jl      short loc_19A18 ;~ 0B19:02A3
cs=0xb19;eip=0x0002a5; 	R(JMP(loc_19a20));	// 18702 jmp     loc_19A20 ;~ 0B19:02A5
loc_19a18:
	// 5337 
cs=0xb19;eip=0x0002a8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 18706 mov     ax, [bp+var_10] ;~ 0B19:02A8
cs=0xb19;eip=0x0002ab; 	T(NEG(ax));	// 18707 neg     ax ;~ 0B19:02AB
cs=0xb19;eip=0x0002ad; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 18708 mov     [bp+var_10], ax ;~ 0B19:02AD
loc_19a20:
	// 5338 
cs=0xb19;eip=0x0002b0; 	T(MOV(ax, word_2d096));	// 18711 mov     ax, word_2D096 ;~ 0B19:02B0
cs=0xb19;eip=0x0002b3; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 18712 mov     [bp+var_12], ax ;~ 0B19:02B3
cs=0xb19;eip=0x0002b6; 	T(CMP(ax, 0));	// 18713 cmp     ax, 0 ;~ 0B19:02B6
cs=0xb19;eip=0x0002b9; 	R(JL(loc_19a2e));	// 18714 jl      short loc_19A2E ;~ 0B19:02B9
cs=0xb19;eip=0x0002bb; 	R(JMP(loc_19a36));	// 18715 jmp     loc_19A36 ;~ 0B19:02BB
loc_19a2e:
	// 5339 
cs=0xb19;eip=0x0002be; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 18719 mov     ax, [bp+var_12] ;~ 0B19:02BE
cs=0xb19;eip=0x0002c1; 	T(NEG(ax));	// 18720 neg     ax ;~ 0B19:02C1
cs=0xb19;eip=0x0002c3; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 18721 mov     [bp+var_12], ax ;~ 0B19:02C3
loc_19a36:
	// 5340 
cs=0xb19;eip=0x0002c6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 18724 mov     ax, [bp+var_10] ;~ 0B19:02C6
cs=0xb19;eip=0x0002c9; 	X(MOV(word_2d0d6, ax));	// 18725 mov     word_2D0D6, ax ;~ 0B19:02C9
cs=0xb19;eip=0x0002cc; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_12))));	// 18726 cmp     ax, [bp+var_12] ;~ 0B19:02CC
cs=0xb19;eip=0x0002cf; 	R(JC(loc_19a44));	// 18727 jb      short loc_19A44 ;~ 0B19:02CF
cs=0xb19;eip=0x0002d1; 	R(JMP(loc_19a4a));	// 18728 jmp     loc_19A4A ;~ 0B19:02D1
loc_19a44:
	// 5341 
cs=0xb19;eip=0x0002d4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 18732 mov     ax, [bp+var_12] ;~ 0B19:02D4
cs=0xb19;eip=0x0002d7; 	X(MOV(word_2d0d6, ax));	// 18733 mov     word_2D0D6, ax ;~ 0B19:02D7
loc_19a4a:
	// 5342 
cs=0xb19;eip=0x0002da; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 18736 mov     ax, [bp+var_10] ;~ 0B19:02DA
cs=0xb19;eip=0x0002dd; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_12))));	// 18737 add     ax, [bp+var_12] ;~ 0B19:02DD
cs=0xb19;eip=0x0002e0; 	T(MOV(cx, word_2d0d6));	// 18738 mov     cx, word_2D0D6 ;~ 0B19:02E0
cs=0xb19;eip=0x0002e4; 	T(SHL(cx, 1));	// 18739 shl     cx, 1 ;~ 0B19:02E4
cs=0xb19;eip=0x0002e6; 	T(ADD(ax, cx));	// 18740 add     ax, cx ;~ 0B19:02E6
cs=0xb19;eip=0x0002e8; 	T(SUB(dx, dx));	// 18741 sub     dx, dx ;~ 0B19:02E8
cs=0xb19;eip=0x0002ea; 	T(MOV(cx, 0x0C));	// 18742 mov     cx, 0Ch ;~ 0B19:02EA
cs=0xb19;eip=0x0002ed; 	T(DIV2(cx));	// 18743 div     cx ;~ 0B19:02ED
cs=0xb19;eip=0x0002ef; 	X(MOV(word_2d0d4, ax));	// 18744 mov     word_2D0D4, ax ;~ 0B19:02EF
cs=0xb19;eip=0x0002f2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 18745 mov     ax, [bp+var_10] ;~ 0B19:02F2
cs=0xb19;eip=0x0002f5; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_12))));	// 18746 add     ax, [bp+var_12] ;~ 0B19:02F5
cs=0xb19;eip=0x0002f8; 	T(MOV(cx, word_2d0d6));	// 18747 mov     cx, word_2D0D6 ;~ 0B19:02F8
cs=0xb19;eip=0x0002fc; 	T(SHL(cx, 1));	// 18748 shl     cx, 1 ;~ 0B19:02FC
cs=0xb19;eip=0x0002fe; 	T(ADD(ax, cx));	// 18749 add     ax, cx ;~ 0B19:02FE
cs=0xb19;eip=0x000300; 	T(SUB(dx, dx));	// 18750 sub     dx, dx ;~ 0B19:0300
cs=0xb19;eip=0x000302; 	T(MOV(cx, 0x180));	// 18751 mov     cx, 180h ;~ 0B19:0302
cs=0xb19;eip=0x000305; 	T(DIV2(cx));	// 18752 div     cx ;~ 0B19:0305
cs=0xb19;eip=0x000307; 	X(MOV(word_2d0d6, ax));	// 18753 mov     word_2D0D6, ax ;~ 0B19:0307
cs=0xb19;eip=0x00030a; 	T(MOV(ax, 0x0C));	// 18754 mov     ax, 0Ch ;~ 0B19:030A
cs=0xb19;eip=0x00030d; 	T(MOV(dx, 0));	// 18755 mov     dx, 0 ;~ 0B19:030D
cs=0xb19;eip=0x000310; 	X(PUSH(dx));	// 18756 push    dx ;~ 0B19:0310
cs=0xb19;eip=0x000311; 	X(PUSH(ax));	// 18757 push    ax ;~ 0B19:0311
cs=0xb19;eip=0x000312; 	T(MOV(ax, word_2d092));	// 18758 mov     ax, word_2D092 ;~ 0B19:0312
cs=0xb19;eip=0x000315; 	T(MOV(dx, word_2d094));	// 18759 mov     dx, word_2D094 ;~ 0B19:0315
cs=0xb19;eip=0x000319; 	T(MOV(cx, ax));	// 18760 mov     cx, ax ;~ 0B19:0319
cs=0xb19;eip=0x00031b; 	T(MOV(bx, dx));	// 18761 mov     bx, dx ;~ 0B19:031B
cs=0xb19;eip=0x00031d; 	T(SHL(ax, 1));	// 18762 shl     ax, 1 ;~ 0B19:031D
cs=0xb19;eip=0x00031f; 	T(RCL(dx, 1));	// 18763 rcl     dx, 1 ;~ 0B19:031F
cs=0xb19;eip=0x000321; 	T(ADD(ax, cx));	// 18764 add     ax, cx ;~ 0B19:0321
cs=0xb19;eip=0x000323; 	T(ADC(dx, bx));	// 18765 adc     dx, bx ;~ 0B19:0323
cs=0xb19;eip=0x000325; 	T(SHL(ax, 1));	// 18766 shl     ax, 1 ;~ 0B19:0325
cs=0xb19;eip=0x000327; 	T(RCL(dx, 1));	// 18767 rcl     dx, 1 ;~ 0B19:0327
cs=0xb19;eip=0x000329; 	X(PUSH(dx));	// 18768 push    dx ;~ 0B19:0329
cs=0xb19;eip=0x00032a; 	X(PUSH(ax));	// 18769 push    ax ;~ 0B19:032A
cs=0xb19;eip=0x00032b; 	R(CALLF(sub_29cfc,0));	// 18770 call    sub_29CFC ;~ 0B19:032B
cs=0xb19;eip=0x000330; 	X(MOV(word_2d092, ax));	// 18771 mov     word_2D092, ax ;~ 0B19:0330
cs=0xb19;eip=0x000333; 	X(MOV(word_2d094, dx));	// 18772 mov     word_2D094, dx ;~ 0B19:0333
cs=0xb19;eip=0x000337; 	T(MOV(ax, 0x0C));	// 18773 mov     ax, 0Ch ;~ 0B19:0337
cs=0xb19;eip=0x00033a; 	T(MOV(dx, 0));	// 18774 mov     dx, 0 ;~ 0B19:033A
cs=0xb19;eip=0x00033d; 	X(PUSH(dx));	// 18775 push    dx ;~ 0B19:033D
cs=0xb19;eip=0x00033e; 	X(PUSH(ax));	// 18776 push    ax ;~ 0B19:033E
cs=0xb19;eip=0x00033f; 	T(MOV(ax, word_2d096));	// 18777 mov     ax, word_2D096 ;~ 0B19:033F
cs=0xb19;eip=0x000342; 	T(MOV(dx, word_2d098));	// 18778 mov     dx, word_2D098 ;~ 0B19:0342
cs=0xb19;eip=0x000346; 	T(MOV(cx, ax));	// 18779 mov     cx, ax ;~ 0B19:0346
cs=0xb19;eip=0x000348; 	T(MOV(bx, dx));	// 18780 mov     bx, dx ;~ 0B19:0348
cs=0xb19;eip=0x00034a; 	T(SHL(ax, 1));	// 18781 shl     ax, 1 ;~ 0B19:034A
cs=0xb19;eip=0x00034c; 	T(RCL(dx, 1));	// 18782 rcl     dx, 1 ;~ 0B19:034C
cs=0xb19;eip=0x00034e; 	T(ADD(ax, cx));	// 18783 add     ax, cx ;~ 0B19:034E
cs=0xb19;eip=0x000350; 	T(ADC(dx, bx));	// 18784 adc     dx, bx ;~ 0B19:0350
cs=0xb19;eip=0x000352; 	T(SHL(ax, 1));	// 18785 shl     ax, 1 ;~ 0B19:0352
cs=0xb19;eip=0x000354; 	T(RCL(dx, 1));	// 18786 rcl     dx, 1 ;~ 0B19:0354
cs=0xb19;eip=0x000356; 	X(PUSH(dx));	// 18787 push    dx ;~ 0B19:0356
cs=0xb19;eip=0x000357; 	X(PUSH(ax));	// 18788 push    ax ;~ 0B19:0357
cs=0xb19;eip=0x000358; 	R(CALLF(sub_29cfc,0));	// 18789 call    sub_29CFC ;~ 0B19:0358
cs=0xb19;eip=0x00035d; 	X(MOV(word_2d096, ax));	// 18790 mov     word_2D096, ax ;~ 0B19:035D
cs=0xb19;eip=0x000360; 	X(MOV(word_2d098, dx));	// 18791 mov     word_2D098, dx ;~ 0B19:0360
cs=0xb19;eip=0x000364; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 18792 mov     [bp+var_2], 0 ;~ 0B19:0364
cs=0xb19;eip=0x000369; 	R(JMP(loc_19adf));	// 18793 jmp     loc_19ADF ;~ 0B19:0369
loc_19adc:
	// 5343 
cs=0xb19;eip=0x00036c; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 18797 inc     [bp+var_2] ;~ 0B19:036C
loc_19adf:
	// 5344 
cs=0xb19;eip=0x00036f; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 3));	// 18800 cmp     [bp+var_2], 3 ;~ 0B19:036F
cs=0xb19;eip=0x000373; 	R(JL(loc_19ae8));	// 18801 jl      short loc_19AE8 ;~ 0B19:0373
cs=0xb19;eip=0x000375; 	R(JMP(loc_19b09));	// 18802 jmp     loc_19B09 ;~ 0B19:0375
loc_19ae8:
	// 5345 
cs=0xb19;eip=0x000378; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 18806 mov     bx, [bp+var_2] ;~ 0B19:0378
cs=0xb19;eip=0x00037b; 	T(SHL(bx, 1));	// 18807 shl     bx, 1 ;~ 0B19:037B
cs=0xb19;eip=0x00037d; 	T(SHL(bx, 1));	// 18808 shl     bx, 1 ;~ 0B19:037D
cs=0xb19;eip=0x00037f; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_2))));	// 18809 mov     si, [bp+var_2] ;~ 0B19:037F
cs=0xb19;eip=0x000382; 	T(SHL(si, 1));	// 18810 shl     si, 1 ;~ 0B19:0382
cs=0xb19;eip=0x000384; 	T(SHL(si, 1));	// 18811 shl     si, 1 ;~ 0B19:0384
cs=0xb19;eip=0x000386; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x1252))));	// 18812 mov     ax, [si+1252h] ;~ 0B19:0386
cs=0xb19;eip=0x00038a; 	T(MOV(dx, *(dw*)(raddr(ds,si+0x1254))));	// 18813 mov     dx, [si+1254h] ;~ 0B19:038A
cs=0xb19;eip=0x00038e; 	X(ADD(*(dw*)(raddr(ds,bx+0x125E)), ax));	// 18814 add     [bx+125Eh], ax ;~ 0B19:038E
cs=0xb19;eip=0x000392; 	X(ADC(*(dw*)(raddr(ds,bx+0x1260)), dx));	// 18815 adc     [bx+1260h], dx ;~ 0B19:0392
cs=0xb19;eip=0x000396; 	R(JMP(loc_19adc));	// 18816 jmp     loc_19ADC ;~ 0B19:0396
loc_19b09:
	// 5346 
cs=0xb19;eip=0x000399; 	T(MOV(ax, word_2d09e));	// 18820 mov     ax, word_2D09E ;~ 0B19:0399
cs=0xb19;eip=0x00039c; 	T(MOV(dx, word_2d0a0));	// 18821 mov     dx, word_2D0A0 ;~ 0B19:039C
cs=0xb19;eip=0x0003a0; 	T(MOV(cl, 7));	// 18822 mov     cl, 7 ;~ 0B19:03A0
cs=0xb19;eip=0x0003a2; 	T(CMP(cl, 0));	// 18823 cmp     cl, 0 ;~ 0B19:03A2
cs=0xb19;eip=0x0003a5; 	R(JNZ(loc_19b1a));	// 18824 jnz     short loc_19B1A ;~ 0B19:03A5
cs=0xb19;eip=0x0003a7; 	R(JMP(loc_19b2b));	// 18825 jmp     loc_19B2B ;~ 0B19:03A7
loc_19b1a:
	// 5347 
cs=0xb19;eip=0x0003aa; 	T(SHR(dx, 1));	// 18830 shr     dx, 1 ;~ 0B19:03AA
cs=0xb19;eip=0x0003ac; 	T(RCR(ax, 1));	// 18831 rcr     ax, 1 ;~ 0B19:03AC
cs=0xb19;eip=0x0003ae; 	T(DEC(cl));	// 18832 dec     cl ;~ 0B19:03AE
cs=0xb19;eip=0x0003b0; 	T(CMP(cl, 0));	// 18833 cmp     cl, 0 ;~ 0B19:03B0
cs=0xb19;eip=0x0003b3; 	R(JNZ(loc_19b28));	// 18834 jnz     short loc_19B28 ;~ 0B19:03B3
cs=0xb19;eip=0x0003b5; 	R(JMP(loc_19b2b));	// 18835 jmp     loc_19B2B ;~ 0B19:03B5
loc_19b28:
	// 5348 
cs=0xb19;eip=0x0003b8; 	R(JMP(loc_19b1a));	// 18839 jmp     loc_19B1A ;~ 0B19:03B8
loc_19b2b:
	// 5349 
cs=0xb19;eip=0x0003bb; 	T(AND(ax, 0x7FFF));	// 18844 and     ax, 7FFFh ;~ 0B19:03BB
cs=0xb19;eip=0x0003be; 	X(MOV(word_35b33, ax));	// 18845 mov     word_35B33, ax ;~ 0B19:03BE
cs=0xb19;eip=0x0003c1; 	X(MOV(word_363f9, ax));	// 18846 mov     word_363F9, ax ;~ 0B19:03C1
cs=0xb19;eip=0x0003c4; 	T(MOV(al, *(db*)(((db*)&word_2d09e))));	// 18847 mov     al, byte ptr word_2D09E ;~ 0B19:03C4
cs=0xb19;eip=0x0003c7; 	T(AND(al, 0x7F));	// 18848 and     al, 7Fh ;~ 0B19:03C7
cs=0xb19;eip=0x0003c9; 	T(SHL(al, 1));	// 18849 shl     al, 1 ;~ 0B19:03C9
cs=0xb19;eip=0x0003cb; 	X(MOV(byte_352d4, al));	// 18850 mov     byte_352D4, al ;~ 0B19:03CB
cs=0xb19;eip=0x0003ce; 	T(MOV(ax, word_2d0a2));	// 18851 mov     ax, word_2D0A2 ;~ 0B19:03CE
cs=0xb19;eip=0x0003d1; 	T(MOV(dx, word_2d0a4));	// 18852 mov     dx, word_2D0A4 ;~ 0B19:03D1
cs=0xb19;eip=0x0003d5; 	T(MOV(cl, 7));	// 18853 mov     cl, 7 ;~ 0B19:03D5
cs=0xb19;eip=0x0003d7; 	T(CMP(cl, 0));	// 18854 cmp     cl, 0 ;~ 0B19:03D7
cs=0xb19;eip=0x0003da; 	R(JNZ(loc_19b4f));	// 18855 jnz     short loc_19B4F ;~ 0B19:03DA
cs=0xb19;eip=0x0003dc; 	R(JMP(loc_19b60));	// 18856 jmp     loc_19B60 ;~ 0B19:03DC
loc_19b4f:
	// 5350 
cs=0xb19;eip=0x0003df; 	T(SHR(dx, 1));	// 18861 shr     dx, 1 ;~ 0B19:03DF
cs=0xb19;eip=0x0003e1; 	T(RCR(ax, 1));	// 18862 rcr     ax, 1 ;~ 0B19:03E1
cs=0xb19;eip=0x0003e3; 	T(DEC(cl));	// 18863 dec     cl ;~ 0B19:03E3
cs=0xb19;eip=0x0003e5; 	T(CMP(cl, 0));	// 18864 cmp     cl, 0 ;~ 0B19:03E5
cs=0xb19;eip=0x0003e8; 	R(JNZ(loc_19b5d));	// 18865 jnz     short loc_19B5D ;~ 0B19:03E8
cs=0xb19;eip=0x0003ea; 	R(JMP(loc_19b60));	// 18866 jmp     loc_19B60 ;~ 0B19:03EA
loc_19b5d:
	// 5351 
cs=0xb19;eip=0x0003ed; 	R(JMP(loc_19b4f));	// 18870 jmp     loc_19B4F ;~ 0B19:03ED
loc_19b60:
	// 5352 
cs=0xb19;eip=0x0003f0; 	T(AND(ax, 0x3FFF));	// 18875 and     ax, 3FFFh ;~ 0B19:03F0
cs=0xb19;eip=0x0003f3; 	X(MOV(word_35db3, ax));	// 18876 mov     word_35DB3, ax ;~ 0B19:03F3
cs=0xb19;eip=0x0003f6; 	X(MOV(word_36539, ax));	// 18877 mov     word_36539, ax ;~ 0B19:03F6
cs=0xb19;eip=0x0003f9; 	T(MOV(al, *(db*)(((db*)&word_2d0a2))));	// 18878 mov     al, byte ptr word_2D0A2 ;~ 0B19:03F9
cs=0xb19;eip=0x0003fc; 	T(AND(al, 0x7F));	// 18879 and     al, 7Fh ;~ 0B19:03FC
cs=0xb19;eip=0x0003fe; 	T(SHL(al, 1));	// 18880 shl     al, 1 ;~ 0B19:03FE
cs=0xb19;eip=0x000400; 	X(MOV(byte_352d5, al));	// 18881 mov     byte_352D5, al ;~ 0B19:0400
cs=0xb19;eip=0x000403; 	T(MOV(ax, word_2d0a6));	// 18882 mov     ax, word_2D0A6 ;~ 0B19:0403
cs=0xb19;eip=0x000406; 	T(MOV(dx, word_2d0a8));	// 18883 mov     dx, word_2D0A8 ;~ 0B19:0406
cs=0xb19;eip=0x00040a; 	T(MOV(cl, 7));	// 18884 mov     cl, 7 ;~ 0B19:040A
cs=0xb19;eip=0x00040c; 	T(CMP(cl, 0));	// 18885 cmp     cl, 0 ;~ 0B19:040C
cs=0xb19;eip=0x00040f; 	R(JNZ(loc_19b84));	// 18886 jnz     short loc_19B84 ;~ 0B19:040F
cs=0xb19;eip=0x000411; 	R(JMP(loc_19b95));	// 18887 jmp     loc_19B95 ;~ 0B19:0411
loc_19b84:
	// 5353 
cs=0xb19;eip=0x000414; 	T(SHR(dx, 1));	// 18892 shr     dx, 1 ;~ 0B19:0414
cs=0xb19;eip=0x000416; 	T(RCR(ax, 1));	// 18893 rcr     ax, 1 ;~ 0B19:0416
cs=0xb19;eip=0x000418; 	T(DEC(cl));	// 18894 dec     cl ;~ 0B19:0418
cs=0xb19;eip=0x00041a; 	T(CMP(cl, 0));	// 18895 cmp     cl, 0 ;~ 0B19:041A
cs=0xb19;eip=0x00041d; 	R(JNZ(loc_19b92));	// 18896 jnz     short loc_19B92 ;~ 0B19:041D
cs=0xb19;eip=0x00041f; 	R(JMP(loc_19b95));	// 18897 jmp     loc_19B95 ;~ 0B19:041F
loc_19b92:
	// 5354 
cs=0xb19;eip=0x000422; 	R(JMP(loc_19b84));	// 18901 jmp     loc_19B84 ;~ 0B19:0422
loc_19b95:
	// 5355 
cs=0xb19;eip=0x000425; 	T(ADD(ax, word_352ff));	// 18906 add     ax, word_352FF ;~ 0B19:0425
cs=0xb19;eip=0x000429; 	X(MOV(word_36033, ax));	// 18907 mov     word_36033, ax ;~ 0B19:0429
cs=0xb19;eip=0x00042c; 	T(MOV(ax, word_36033));	// 18908 mov     ax, word_36033 ;~ 0B19:042C
cs=0xb19;eip=0x00042f; 	T(SUB(ax, word_352ff));	// 18909 sub     ax, word_352FF ;~ 0B19:042F
cs=0xb19;eip=0x000433; 	T(MOV(cl, 3));	// 18910 mov     cl, 3 ;~ 0B19:0433
cs=0xb19;eip=0x000435; 	T(SHL(ax, cl));	// 18911 shl     ax, cl ;~ 0B19:0435
cs=0xb19;eip=0x000437; 	X(MOV(word_36679, ax));	// 18912 mov     word_36679, ax ;~ 0B19:0437
cs=0xb19;eip=0x00043a; 	T(MOV(ax, word_352d1));	// 18913 mov     ax, word_352D1 ;~ 0B19:043A
cs=0xb19;eip=0x00043d; 	T(SUB(ax, 0x4000));	// 18914 sub     ax, 4000h ;~ 0B19:043D
cs=0xb19;eip=0x000440; 	T(AND(ax, 0x0FF00));	// 18915 and     ax, 0FF00h ;~ 0B19:0440
cs=0xb19;eip=0x000443; 	T(MOV(cl, 8));	// 18916 mov     cl, 8 ;~ 0B19:0443
cs=0xb19;eip=0x000445; 	T(SHR(ax, cl));	// 18917 shr     ax, cl ;~ 0B19:0445
cs=0xb19;eip=0x000447; 	T(MOV(cx, 0x101));	// 18918 mov     cx, 101h ;~ 0B19:0447
cs=0xb19;eip=0x00044a; 	T(MUL1_2(cx));	// 18919 mul     cx ;~ 0B19:044A
cs=0xb19;eip=0x00044c; 	X(MOV(word_367b9, ax));	// 18920 mov     word_367B9, ax ;~ 0B19:044C
cs=0xb19;eip=0x00044f; 	T(MOV(ax, word_378c5));	// 18921 mov     ax, word_378C5 ;~ 0B19:044F
cs=0xb19;eip=0x000452; 	T(CWD);	// 18922 cwd ;~ 0B19:0452
cs=0xb19;eip=0x000453; 	T(MOV(cl, 7));	// 18923 mov     cl, 7 ;~ 0B19:0453
cs=0xb19;eip=0x000455; 	T(CMP(cl, 0));	// 18924 cmp     cl, 0 ;~ 0B19:0455
cs=0xb19;eip=0x000458; 	R(JNZ(loc_19bcd));	// 18925 jnz     short loc_19BCD ;~ 0B19:0458
cs=0xb19;eip=0x00045a; 	R(JMP(loc_19bde));	// 18926 jmp     loc_19BDE ;~ 0B19:045A
loc_19bcd:
	// 5356 
cs=0xb19;eip=0x00045d; 	T(SHL(ax, 1));	// 18931 shl     ax, 1 ;~ 0B19:045D
cs=0xb19;eip=0x00045f; 	T(RCL(dx, 1));	// 18932 rcl     dx, 1 ;~ 0B19:045F
cs=0xb19;eip=0x000461; 	T(DEC(cl));	// 18933 dec     cl ;~ 0B19:0461
cs=0xb19;eip=0x000463; 	T(CMP(cl, 0));	// 18934 cmp     cl, 0 ;~ 0B19:0463
cs=0xb19;eip=0x000466; 	R(JNZ(loc_19bdb));	// 18935 jnz     short loc_19BDB ;~ 0B19:0466
cs=0xb19;eip=0x000468; 	R(JMP(loc_19bde));	// 18936 jmp     loc_19BDE ;~ 0B19:0468
loc_19bdb:
	// 5357 
cs=0xb19;eip=0x00046b; 	R(JMP(loc_19bcd));	// 18940 jmp     loc_19BCD ;~ 0B19:046B
loc_19bde:
	// 5358 
cs=0xb19;eip=0x00046e; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 18945 mov     [bp+var_E], ax ;~ 0B19:046E
cs=0xb19;eip=0x000471; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), dx));	// 18946 mov     [bp+var_C], dx ;~ 0B19:0471
cs=0xb19;eip=0x000474; 	X(MOV(byte_2d0e0, 1));	// 18947 mov     byte_2D0E0, 1 ;~ 0B19:0474
cs=0xb19;eip=0x000479; 	T(MOV(ax, word_2d0a6));	// 18948 mov     ax, word_2D0A6 ;~ 0B19:0479
cs=0xb19;eip=0x00047c; 	T(MOV(dx, word_2d0a8));	// 18949 mov     dx, word_2D0A8 ;~ 0B19:047C
cs=0xb19;eip=0x000480; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), dx));	// 18950 cmp     [bp+var_C], dx ;~ 0B19:0480
cs=0xb19;eip=0x000483; 	R(JLE(loc_19bf8));	// 18951 jle     short loc_19BF8 ;~ 0B19:0483
cs=0xb19;eip=0x000485; 	R(JMP(loc_19caa));	// 18952 jmp     loc_19CAA ;~ 0B19:0485
loc_19bf8:
	// 5359 
cs=0xb19;eip=0x000488; 	R(JGE(loc_19bfd));	// 18956 jge     short loc_19BFD ;~ 0B19:0488
cs=0xb19;eip=0x00048a; 	R(JMP(loc_19c05));	// 18957 jmp     loc_19C05 ;~ 0B19:048A
loc_19bfd:
	// 5360 
cs=0xb19;eip=0x00048d; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), ax));	// 18961 cmp     [bp+var_E], ax ;~ 0B19:048D
cs=0xb19;eip=0x000490; 	R(JC(loc_19c05));	// 18962 jb      short loc_19C05 ;~ 0B19:0490
cs=0xb19;eip=0x000492; 	R(JMP(loc_19caa));	// 18963 jmp     loc_19CAA ;~ 0B19:0492
loc_19c05:
	// 5361 
cs=0xb19;eip=0x000495; 	T(MOV(ax, word_353d4));	// 18968 mov     ax, word_353D4 ;~ 0B19:0495
cs=0xb19;eip=0x000498; 	T(SHL(ax, 1));	// 18969 shl     ax, 1 ;~ 0B19:0498
cs=0xb19;eip=0x00049a; 	T(SHL(ax, 1));	// 18970 shl     ax, 1 ;~ 0B19:049A
cs=0xb19;eip=0x00049c; 	T(CWD);	// 18971 cwd ;~ 0B19:049C
cs=0xb19;eip=0x00049d; 	T(MOV(cx, word_2d0a6));	// 18972 mov     cx, word_2D0A6 ;~ 0B19:049D
cs=0xb19;eip=0x0004a1; 	T(MOV(bx, word_2d0a8));	// 18973 mov     bx, word_2D0A8 ;~ 0B19:04A1
cs=0xb19;eip=0x0004a5; 	T(SUB(cx, *(dw*)(raddr(ss,bp+var_e))));	// 18974 sub     cx, [bp+var_E] ;~ 0B19:04A5
cs=0xb19;eip=0x0004a8; 	T(SBB(bx, *(dw*)(raddr(ss,bp+var_c))));	// 18975 sbb     bx, [bp+var_C] ;~ 0B19:04A8
cs=0xb19;eip=0x0004ab; 	T(CMP(bx, dx));	// 18976 cmp     bx, dx ;~ 0B19:04AB
cs=0xb19;eip=0x0004ad; 	R(JLE(loc_19c22));	// 18977 jle     short loc_19C22 ;~ 0B19:04AD
cs=0xb19;eip=0x0004af; 	R(JMP(loc_19c53));	// 18978 jmp     loc_19C53 ;~ 0B19:04AF
loc_19c22:
	// 5362 
cs=0xb19;eip=0x0004b2; 	R(JGE(loc_19c27));	// 18982 jge     short loc_19C27 ;~ 0B19:04B2
cs=0xb19;eip=0x0004b4; 	R(JMP(loc_19c2e));	// 18983 jmp     loc_19C2E ;~ 0B19:04B4
loc_19c27:
	// 5363 
cs=0xb19;eip=0x0004b7; 	T(CMP(cx, ax));	// 18987 cmp     cx, ax ;~ 0B19:04B7
cs=0xb19;eip=0x0004b9; 	R(JBE(loc_19c2e));	// 18988 jbe     short loc_19C2E ;~ 0B19:04B9
cs=0xb19;eip=0x0004bb; 	R(JMP(loc_19c53));	// 18989 jmp     loc_19C53 ;~ 0B19:04BB
loc_19c2e:
	// 5364 
cs=0xb19;eip=0x0004be; 	T(MOV(ax, word_353d4));	// 18994 mov     ax, word_353D4 ;~ 0B19:04BE
cs=0xb19;eip=0x0004c1; 	T(CWD);	// 18995 cwd ;~ 0B19:04C1
cs=0xb19;eip=0x0004c2; 	T(CMP(word_2d09c, dx));	// 18996 cmp     word_2D09C, dx ;~ 0B19:04C2
cs=0xb19;eip=0x0004c6; 	R(JLE(loc_19c3b));	// 18997 jle     short loc_19C3B ;~ 0B19:04C6
cs=0xb19;eip=0x0004c8; 	R(JMP(loc_19c53));	// 18998 jmp     loc_19C53 ;~ 0B19:04C8
loc_19c3b:
	// 5365 
cs=0xb19;eip=0x0004cb; 	R(JGE(loc_19c40));	// 19002 jge     short loc_19C40 ;~ 0B19:04CB
cs=0xb19;eip=0x0004cd; 	R(JMP(loc_19c49));	// 19003 jmp     loc_19C49 ;~ 0B19:04CD
loc_19c40:
	// 5366 
cs=0xb19;eip=0x0004d0; 	T(CMP(word_2d09a, ax));	// 19007 cmp     word_2D09A, ax ;~ 0B19:04D0
cs=0xb19;eip=0x0004d4; 	R(JBE(loc_19c49));	// 19008 jbe     short loc_19C49 ;~ 0B19:04D4
cs=0xb19;eip=0x0004d6; 	R(JMP(loc_19c53));	// 19009 jmp     loc_19C53 ;~ 0B19:04D6
loc_19c49:
	// 5367 
cs=0xb19;eip=0x0004d9; 	T(CMP(word_2d09c, 0));	// 19014 cmp     word_2D09C, 0 ;~ 0B19:04D9
cs=0xb19;eip=0x0004de; 	R(JL(loc_19c53));	// 19015 jl      short loc_19C53 ;~ 0B19:04DE
cs=0xb19;eip=0x0004e0; 	R(JMP(loc_19c8a));	// 19016 jmp     loc_19C8A ;~ 0B19:04E0
loc_19c53:
	// 5368 
cs=0xb19;eip=0x0004e3; 	X(MOV(byte_2d0e0, 0));	// 19021 mov     byte_2D0E0, 0 ;~ 0B19:04E3
cs=0xb19;eip=0x0004e8; 	T(MOV(ax, word_353d4));	// 19022 mov     ax, word_353D4 ;~ 0B19:04E8
cs=0xb19;eip=0x0004eb; 	T(MOV(cx, ax));	// 19023 mov     cx, ax ;~ 0B19:04EB
cs=0xb19;eip=0x0004ed; 	T(SHL(ax, 1));	// 19024 shl     ax, 1 ;~ 0B19:04ED
cs=0xb19;eip=0x0004ef; 	T(ADD(ax, cx));	// 19025 add     ax, cx ;~ 0B19:04EF
cs=0xb19;eip=0x0004f1; 	T(CWD);	// 19026 cwd ;~ 0B19:04F1
cs=0xb19;eip=0x0004f2; 	T(SUB(ax, dx));	// 19027 sub     ax, dx ;~ 0B19:04F2
cs=0xb19;eip=0x0004f4; 	T(SAR(ax, 1));	// 19028 sar     ax, 1 ;~ 0B19:04F4
cs=0xb19;eip=0x0004f6; 	T(CWD);	// 19029 cwd ;~ 0B19:04F6
cs=0xb19;eip=0x0004f7; 	X(SUB(word_2d09a, ax));	// 19030 sub     word_2D09A, ax ;~ 0B19:04F7
cs=0xb19;eip=0x0004fb; 	X(SBB(word_2d09c, dx));	// 19031 sbb     word_2D09C, dx ;~ 0B19:04FB
cs=0xb19;eip=0x0004ff; 	X(MOV(word_352cd, 0x0FFFD));	// 19032 mov     word_352CD, 0FFFDh ;~ 0B19:04FF
cs=0xb19;eip=0x000505; 	T(CMP(word_2d090, 0));	// 19033 cmp     word_2D090, 0 ;~ 0B19:0505
cs=0xb19;eip=0x00050a; 	R(JL(loc_19c7f));	// 19034 jl      short loc_19C7F ;~ 0B19:050A
cs=0xb19;eip=0x00050c; 	R(JMP(loc_19c87));	// 19035 jmp     loc_19C87 ;~ 0B19:050C
loc_19c7f:
	// 5369 
cs=0xb19;eip=0x00050f; 	T(MOV(ax, word_352cd));	// 19039 mov     ax, word_352CD ;~ 0B19:050F
cs=0xb19;eip=0x000512; 	T(NEG(ax));	// 19040 neg     ax ;~ 0B19:0512
cs=0xb19;eip=0x000514; 	X(MOV(word_352cd, ax));	// 19041 mov     word_352CD, ax ;~ 0B19:0514
loc_19c87:
	// 5370 
cs=0xb19;eip=0x000517; 	R(JMP(loc_19caa));	// 19044 jmp     loc_19CAA ;~ 0B19:0517
loc_19c8a:
	// 5371 
cs=0xb19;eip=0x00051a; 	T(CMP(word_2d09c, 0));	// 19048 cmp     word_2D09C, 0 ;~ 0B19:051A
cs=0xb19;eip=0x00051f; 	R(JGE(loc_19c94));	// 19049 jge     short loc_19C94 ;~ 0B19:051F
cs=0xb19;eip=0x000521; 	R(JMP(loc_19caa));	// 19050 jmp     loc_19CAA ;~ 0B19:0521
loc_19c94:
	// 5372 
cs=0xb19;eip=0x000524; 	T(MOV(ax, 0));	// 19054 mov     ax, 0 ;~ 0B19:0524
cs=0xb19;eip=0x000527; 	X(MOV(word_2d09c, ax));	// 19055 mov     word_2D09C, ax ;~ 0B19:0527
cs=0xb19;eip=0x00052a; 	X(MOV(word_2d09a, ax));	// 19056 mov     word_2D09A, ax ;~ 0B19:052A
cs=0xb19;eip=0x00052d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 19057 mov     ax, [bp+var_E] ;~ 0B19:052D
cs=0xb19;eip=0x000530; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_c))));	// 19058 mov     dx, [bp+var_C] ;~ 0B19:0530
cs=0xb19;eip=0x000533; 	X(MOV(word_2d0a6, ax));	// 19059 mov     word_2D0A6, ax ;~ 0B19:0533
cs=0xb19;eip=0x000536; 	X(MOV(word_2d0a8, dx));	// 19060 mov     word_2D0A8, dx ;~ 0B19:0536
loc_19caa:
	// 5373 
cs=0xb19;eip=0x00053a; 	T(MOV(ax, word_2d0a6));	// 19064 mov     ax, word_2D0A6 ;~ 0B19:053A
cs=0xb19;eip=0x00053d; 	T(MOV(dx, word_2d0a8));	// 19065 mov     dx, word_2D0A8 ;~ 0B19:053D
cs=0xb19;eip=0x000541; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), ax));	// 19066 cmp     [bp+var_E], ax ;~ 0B19:0541
cs=0xb19;eip=0x000544; 	R(JZ(loc_19cb9));	// 19067 jz      short loc_19CB9 ;~ 0B19:0544
cs=0xb19;eip=0x000546; 	R(JMP(loc_19cf7));	// 19068 jmp     loc_19CF7 ;~ 0B19:0546
loc_19cb9:
	// 5374 
cs=0xb19;eip=0x000549; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), dx));	// 19072 cmp     [bp+var_C], dx ;~ 0B19:0549
cs=0xb19;eip=0x00054c; 	R(JZ(loc_19cc1));	// 19073 jz      short loc_19CC1 ;~ 0B19:054C
cs=0xb19;eip=0x00054e; 	R(JMP(loc_19cf7));	// 19074 jmp     loc_19CF7 ;~ 0B19:054E
loc_19cc1:
	// 5375 
cs=0xb19;eip=0x000551; 	T(MOV(ax, word_2d09a));	// 19078 mov     ax, word_2D09A ;~ 0B19:0551
cs=0xb19;eip=0x000554; 	T(OR(ax, word_2d09c));	// 19079 or      ax, word_2D09C ;~ 0B19:0554
cs=0xb19;eip=0x000558; 	R(JZ(loc_19ccd));	// 19080 jz      short loc_19CCD ;~ 0B19:0558
cs=0xb19;eip=0x00055a; 	R(JMP(loc_19cf7));	// 19081 jmp     loc_19CF7 ;~ 0B19:055A
loc_19ccd:
	// 5376 
cs=0xb19;eip=0x00055d; 	T(MOV(al, byte_37b1c));	// 19085 mov     al, byte_37B1C ;~ 0B19:055D
cs=0xb19;eip=0x000560; 	X(MOV(byte_352d3, al));	// 19086 mov     byte_352D3, al ;~ 0B19:0560
cs=0xb19;eip=0x000563; 	T(TEST(*(db*)(((db*)&word_352c6)), 4));	// 19087 test    byte ptr word_352C6, 4 ;~ 0B19:0563
cs=0xb19;eip=0x000568; 	R(JZ(loc_19cdd));	// 19088 jz      short loc_19CDD ;~ 0B19:0568
cs=0xb19;eip=0x00056a; 	R(JMP(loc_19cf1));	// 19089 jmp     loc_19CF1 ;~ 0B19:056A
loc_19cdd:
	// 5377 
cs=0xb19;eip=0x00056d; 	T(MOV(ax, word_2d080));	// 19093 mov     ax, word_2D080 ;~ 0B19:056D
cs=0xb19;eip=0x000570; 	X(IMUL1_2(word_37b1d));	// 19094 imul    word_37B1D ;~ 0B19:0570
cs=0xb19;eip=0x000574; 	T(CWD);	// 19095 cwd ;~ 0B19:0574
cs=0xb19;eip=0x000575; 	T(MOV(cx, word_2d082));	// 19096 mov     cx, word_2D082 ;~ 0B19:0575
cs=0xb19;eip=0x000579; 	T(IDIV2(cx));	// 19097 idiv    cx ;~ 0B19:0579
cs=0xb19;eip=0x00057b; 	X(MOV(word_352cd, ax));	// 19098 mov     word_352CD, ax ;~ 0B19:057B
cs=0xb19;eip=0x00057e; 	R(JMP(loc_19cf7));	// 19099 jmp     loc_19CF7 ;~ 0B19:057E
loc_19cf1:
	// 5378 
cs=0xb19;eip=0x000581; 	T(MOV(ax, word_37b1d));	// 19103 mov     ax, word_37B1D ;~ 0B19:0581
cs=0xb19;eip=0x000584; 	X(MOV(word_352cd, ax));	// 19104 mov     word_352CD, ax ;~ 0B19:0584
loc_19cf7:
	// 5379 
cs=0xb19;eip=0x000587; 	T(MOV(ax, word_2d0a6));	// 19108 mov     ax, word_2D0A6 ;~ 0B19:0587
cs=0xb19;eip=0x00058a; 	T(MOV(dx, word_2d0a8));	// 19109 mov     dx, word_2D0A8 ;~ 0B19:058A
cs=0xb19;eip=0x00058e; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), dx));	// 19110 cmp     [bp+var_C], dx ;~ 0B19:058E
cs=0xb19;eip=0x000591; 	R(JGE(loc_19d06));	// 19111 jge     short loc_19D06 ;~ 0B19:0591
cs=0xb19;eip=0x000593; 	R(JMP(loc_19ed8));	// 19112 jmp     loc_19ED8 ;~ 0B19:0593
loc_19d06:
	// 5380 
cs=0xb19;eip=0x000596; 	R(JLE(loc_19d0b));	// 19116 jle     short loc_19D0B ;~ 0B19:0596
cs=0xb19;eip=0x000598; 	R(JMP(loc_19d13));	// 19117 jmp     loc_19D13 ;~ 0B19:0598
loc_19d0b:
	// 5381 
cs=0xb19;eip=0x00059b; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), ax));	// 19121 cmp     [bp+var_E], ax ;~ 0B19:059B
cs=0xb19;eip=0x00059e; 	R(JA(loc_19d13));	// 19122 ja      short loc_19D13 ;~ 0B19:059E
cs=0xb19;eip=0x0005a0; 	R(JMP(loc_19ed8));	// 19123 jmp     loc_19ED8 ;~ 0B19:05A0
loc_19d13:
	// 5382 
cs=0xb19;eip=0x0005a3; 	T(MOV(al, byte_37b1c));	// 19128 mov     al, byte_37B1C ;~ 0B19:05A3
cs=0xb19;eip=0x0005a6; 	X(MOV(byte_352d3, al));	// 19129 mov     byte_352D3, al ;~ 0B19:05A6
cs=0xb19;eip=0x0005a9; 	T(TEST(*(db*)(((db*)&word_352c6)), 4));	// 19130 test    byte ptr word_352C6, 4 ;~ 0B19:05A9
cs=0xb19;eip=0x0005ae; 	R(JZ(loc_19d23));	// 19131 jz      short loc_19D23 ;~ 0B19:05AE
cs=0xb19;eip=0x0005b0; 	R(JMP(loc_19d37));	// 19132 jmp     loc_19D37 ;~ 0B19:05B0
loc_19d23:
	// 5383 
cs=0xb19;eip=0x0005b3; 	T(MOV(ax, word_2d080));	// 19136 mov     ax, word_2D080 ;~ 0B19:05B3
cs=0xb19;eip=0x0005b6; 	X(IMUL1_2(word_37b1d));	// 19137 imul    word_37B1D ;~ 0B19:05B6
cs=0xb19;eip=0x0005ba; 	T(CWD);	// 19138 cwd ;~ 0B19:05BA
cs=0xb19;eip=0x0005bb; 	T(MOV(cx, word_2d082));	// 19139 mov     cx, word_2D082 ;~ 0B19:05BB
cs=0xb19;eip=0x0005bf; 	T(IDIV2(cx));	// 19140 idiv    cx ;~ 0B19:05BF
cs=0xb19;eip=0x0005c1; 	X(MOV(word_352cd, ax));	// 19141 mov     word_352CD, ax ;~ 0B19:05C1
cs=0xb19;eip=0x0005c4; 	R(JMP(loc_19d3d));	// 19142 jmp     loc_19D3D ;~ 0B19:05C4
loc_19d37:
	// 5384 
cs=0xb19;eip=0x0005c7; 	T(MOV(ax, word_37b1d));	// 19146 mov     ax, word_37B1D ;~ 0B19:05C7
cs=0xb19;eip=0x0005ca; 	X(MOV(word_352cd, ax));	// 19147 mov     word_352CD, ax ;~ 0B19:05CA
loc_19d3d:
	// 5385 
cs=0xb19;eip=0x0005cd; 	T(MOV(ax, word_352fd));	// 19150 mov     ax, word_352FD ;~ 0B19:05CD
cs=0xb19;eip=0x0005d0; 	T(CWD);	// 19151 cwd ;~ 0B19:05D0
cs=0xb19;eip=0x0005d1; 	T(XOR(ax, dx));	// 19152 xor     ax, dx ;~ 0B19:05D1
cs=0xb19;eip=0x0005d3; 	T(SUB(ax, dx));	// 19153 sub     ax, dx ;~ 0B19:05D3
cs=0xb19;eip=0x0005d5; 	T(MOV(cx, 4));	// 19154 mov     cx, 4 ;~ 0B19:05D5
cs=0xb19;eip=0x0005d8; 	T(SAR(ax, cl));	// 19155 sar     ax, cl ;~ 0B19:05D8
cs=0xb19;eip=0x0005da; 	T(XOR(ax, dx));	// 19156 xor     ax, dx ;~ 0B19:05DA
cs=0xb19;eip=0x0005dc; 	T(SUB(ax, dx));	// 19157 sub     ax, dx ;~ 0B19:05DC
cs=0xb19;eip=0x0005de; 	T(MOV(cx, ax));	// 19158 mov     cx, ax ;~ 0B19:05DE
cs=0xb19;eip=0x0005e0; 	T(SHL(ax, 1));	// 19159 shl     ax, 1 ;~ 0B19:05E0
cs=0xb19;eip=0x0005e2; 	T(SHL(ax, 1));	// 19160 shl     ax, 1 ;~ 0B19:05E2
cs=0xb19;eip=0x0005e4; 	T(ADD(ax, cx));	// 19161 add     ax, cx ;~ 0B19:05E4
cs=0xb19;eip=0x0005e6; 	T(CWD);	// 19162 cwd ;~ 0B19:05E6
cs=0xb19;eip=0x0005e7; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_e))));	// 19163 mov     cx, [bp+var_E] ;~ 0B19:05E7
cs=0xb19;eip=0x0005ea; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_c))));	// 19164 mov     bx, [bp+var_C] ;~ 0B19:05EA
cs=0xb19;eip=0x0005ed; 	T(SUB(cx, word_2d0a6));	// 19165 sub     cx, word_2D0A6 ;~ 0B19:05ED
cs=0xb19;eip=0x0005f1; 	T(SBB(bx, word_2d0a8));	// 19166 sbb     bx, word_2D0A8 ;~ 0B19:05F1
cs=0xb19;eip=0x0005f5; 	T(SUB(cx, word_2d09a));	// 19167 sub     cx, word_2D09A ;~ 0B19:05F5
cs=0xb19;eip=0x0005f9; 	T(SBB(bx, word_2d09c));	// 19168 sbb     bx, word_2D09C ;~ 0B19:05F9
cs=0xb19;eip=0x0005fd; 	T(CMP(bx, dx));	// 19169 cmp     bx, dx ;~ 0B19:05FD
cs=0xb19;eip=0x0005ff; 	R(JGE(loc_19d74));	// 19170 jge     short loc_19D74 ;~ 0B19:05FF
cs=0xb19;eip=0x000601; 	R(JMP(loc_19d8c));	// 19171 jmp     loc_19D8C ;~ 0B19:0601
loc_19d74:
	// 5386 
cs=0xb19;eip=0x000604; 	R(JLE(loc_19d79));	// 19175 jle     short loc_19D79 ;~ 0B19:0604
cs=0xb19;eip=0x000606; 	R(JMP(loc_19d80));	// 19176 jmp     loc_19D80 ;~ 0B19:0606
loc_19d79:
	// 5387 
cs=0xb19;eip=0x000609; 	T(CMP(cx, ax));	// 19180 cmp     cx, ax ;~ 0B19:0609
cs=0xb19;eip=0x00060b; 	R(JNC(loc_19d80));	// 19181 jnb     short loc_19D80 ;~ 0B19:060B
cs=0xb19;eip=0x00060d; 	R(JMP(loc_19d8c));	// 19182 jmp     loc_19D8C ;~ 0B19:060D
loc_19d80:
	// 5388 
cs=0xb19;eip=0x000610; 	T(MOV(ax, 0x13));	// 19187 mov     ax, 13h ;~ 0B19:0610
cs=0xb19;eip=0x000613; 	X(PUSH(ax));	// 19188 push    ax ;~ 0B19:0613
cs=0xb19;eip=0x000614; 	R(CALLF(sub_1d2d0,0));	// 19189 call    sub_1D2D0 ;~ 0B19:0614
cs=0xb19;eip=0x000619; 	T(ADD(sp, 2));	// 19190 add     sp, 2 ;~ 0B19:0619
loc_19d8c:
	// 5389 
cs=0xb19;eip=0x00061c; 	T(MOV(ax, word_352fd));	// 19194 mov     ax, word_352FD ;~ 0B19:061C
cs=0xb19;eip=0x00061f; 	T(CWD);	// 19195 cwd ;~ 0B19:061F
cs=0xb19;eip=0x000620; 	T(XOR(ax, dx));	// 19196 xor     ax, dx ;~ 0B19:0620
cs=0xb19;eip=0x000622; 	T(SUB(ax, dx));	// 19197 sub     ax, dx ;~ 0B19:0622
cs=0xb19;eip=0x000624; 	T(MOV(cx, 4));	// 19198 mov     cx, 4 ;~ 0B19:0624
cs=0xb19;eip=0x000627; 	T(SAR(ax, cl));	// 19199 sar     ax, cl ;~ 0B19:0627
cs=0xb19;eip=0x000629; 	T(XOR(ax, dx));	// 19200 xor     ax, dx ;~ 0B19:0629
cs=0xb19;eip=0x00062b; 	T(SUB(ax, dx));	// 19201 sub     ax, dx ;~ 0B19:062B
cs=0xb19;eip=0x00062d; 	T(MOV(cx, ax));	// 19202 mov     cx, ax ;~ 0B19:062D
cs=0xb19;eip=0x00062f; 	T(MOV(ax, word_2c944));	// 19203 mov     ax, word_2C944 ;~ 0B19:062F
cs=0xb19;eip=0x000632; 	T(SHL(ax, 1));	// 19204 shl     ax, 1 ;~ 0B19:0632
cs=0xb19;eip=0x000634; 	T(SUB(ax, 0x24));	// 19205 sub     ax, 24h ; '$' ;~ 0B19:0634
cs=0xb19;eip=0x000637; 	T(NEG(ax));	// 19206 neg     ax ;~ 0B19:0637
cs=0xb19;eip=0x000639; 	T(IMUL1_2(cx));	// 19207 imul    cx ;~ 0B19:0639
cs=0xb19;eip=0x00063b; 	T(CWD);	// 19208 cwd ;~ 0B19:063B
cs=0xb19;eip=0x00063c; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_e))));	// 19209 mov     cx, [bp+var_E] ;~ 0B19:063C
cs=0xb19;eip=0x00063f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_c))));	// 19210 mov     bx, [bp+var_C] ;~ 0B19:063F
cs=0xb19;eip=0x000642; 	T(SUB(cx, word_2d0a6));	// 19211 sub     cx, word_2D0A6 ;~ 0B19:0642
cs=0xb19;eip=0x000646; 	T(SBB(bx, word_2d0a8));	// 19212 sbb     bx, word_2D0A8 ;~ 0B19:0646
cs=0xb19;eip=0x00064a; 	T(SUB(cx, word_2d09a));	// 19213 sub     cx, word_2D09A ;~ 0B19:064A
cs=0xb19;eip=0x00064e; 	T(SBB(bx, word_2d09c));	// 19214 sbb     bx, word_2D09C ;~ 0B19:064E
cs=0xb19;eip=0x000652; 	T(CMP(bx, dx));	// 19215 cmp     bx, dx ;~ 0B19:0652
cs=0xb19;eip=0x000654; 	R(JGE(loc_19dc9));	// 19216 jge     short loc_19DC9 ;~ 0B19:0654
cs=0xb19;eip=0x000656; 	R(JMP(loc_19e24));	// 19217 jmp     loc_19E24 ;~ 0B19:0656
loc_19dc9:
	// 5390 
cs=0xb19;eip=0x000659; 	R(JLE(loc_19dce));	// 19221 jle     short loc_19DCE ;~ 0B19:0659
cs=0xb19;eip=0x00065b; 	R(JMP(loc_19dd5));	// 19222 jmp     loc_19DD5 ;~ 0B19:065B
loc_19dce:
	// 5391 
cs=0xb19;eip=0x00065e; 	T(CMP(cx, ax));	// 19226 cmp     cx, ax ;~ 0B19:065E
cs=0xb19;eip=0x000660; 	R(JNC(loc_19dd5));	// 19227 jnb     short loc_19DD5 ;~ 0B19:0660
cs=0xb19;eip=0x000662; 	R(JMP(loc_19e24));	// 19228 jmp     loc_19E24 ;~ 0B19:0662
loc_19dd5:
	// 5392 
cs=0xb19;eip=0x000665; 	X(MOV(byte_378e8, 1));	// 19233 mov     byte_378E8, 1 ;~ 0B19:0665
cs=0xb19;eip=0x00066a; 	T(MOV(ax, 0));	// 19234 mov     ax, 0 ;~ 0B19:066A
cs=0xb19;eip=0x00066d; 	T(MOV(dx, 0));	// 19235 mov     dx, 0 ;~ 0B19:066D
cs=0xb19;eip=0x000670; 	X(MOV(word_2d09a, ax));	// 19236 mov     word_2D09A, ax ;~ 0B19:0670
cs=0xb19;eip=0x000673; 	X(MOV(word_2d09c, dx));	// 19237 mov     word_2D09C, dx ;~ 0B19:0673
cs=0xb19;eip=0x000677; 	X(MOV(word_2d096, ax));	// 19238 mov     word_2D096, ax ;~ 0B19:0677
cs=0xb19;eip=0x00067a; 	X(MOV(word_2d098, dx));	// 19239 mov     word_2D098, dx ;~ 0B19:067A
cs=0xb19;eip=0x00067e; 	X(MOV(word_2d092, ax));	// 19240 mov     word_2D092, ax ;~ 0B19:067E
cs=0xb19;eip=0x000681; 	X(MOV(word_2d094, dx));	// 19241 mov     word_2D094, dx ;~ 0B19:0681
cs=0xb19;eip=0x000685; 	T(MOV(ax, word_2d0a6));	// 19242 mov     ax, word_2D0A6 ;~ 0B19:0685
cs=0xb19;eip=0x000688; 	T(MOV(dx, word_2d0a8));	// 19243 mov     dx, word_2D0A8 ;~ 0B19:0688
cs=0xb19;eip=0x00068c; 	T(MOV(cl, 7));	// 19244 mov     cl, 7 ;~ 0B19:068C
cs=0xb19;eip=0x00068e; 	T(CMP(cl, 0));	// 19245 cmp     cl, 0 ;~ 0B19:068E
cs=0xb19;eip=0x000691; 	R(JNZ(loc_19e06));	// 19246 jnz     short loc_19E06 ;~ 0B19:0691
cs=0xb19;eip=0x000693; 	R(JMP(loc_19e17));	// 19247 jmp     loc_19E17 ;~ 0B19:0693
loc_19e06:
	// 5393 
cs=0xb19;eip=0x000696; 	T(SHR(dx, 1));	// 19252 shr     dx, 1 ;~ 0B19:0696
cs=0xb19;eip=0x000698; 	T(RCR(ax, 1));	// 19253 rcr     ax, 1 ;~ 0B19:0698
cs=0xb19;eip=0x00069a; 	T(DEC(cl));	// 19254 dec     cl ;~ 0B19:069A
cs=0xb19;eip=0x00069c; 	T(CMP(cl, 0));	// 19255 cmp     cl, 0 ;~ 0B19:069C
cs=0xb19;eip=0x00069f; 	R(JNZ(loc_19e14));	// 19256 jnz     short loc_19E14 ;~ 0B19:069F
cs=0xb19;eip=0x0006a1; 	R(JMP(loc_19e17));	// 19257 jmp     loc_19E17 ;~ 0B19:06A1
loc_19e14:
	// 5394 
cs=0xb19;eip=0x0006a4; 	R(JMP(loc_19e06));	// 19261 jmp     loc_19E06 ;~ 0B19:06A4
loc_19e17:
	// 5395 
cs=0xb19;eip=0x0006a7; 	T(ADD(ax, word_352ff));	// 19266 add     ax, word_352FF ;~ 0B19:06A7
cs=0xb19;eip=0x0006ab; 	T(SUB(ax, 0x10));	// 19267 sub     ax, 10h ;~ 0B19:06AB
cs=0xb19;eip=0x0006ae; 	X(MOV(word_36033, ax));	// 19268 mov     word_36033, ax ;~ 0B19:06AE
cs=0xb19;eip=0x0006b1; 	R(JMP(loc_19e6f));	// 19269 jmp     loc_19E6F ;~ 0B19:06B1
loc_19e24:
	// 5396 
cs=0xb19;eip=0x0006b4; 	T(MOV(ax, word_352fd));	// 19274 mov     ax, word_352FD ;~ 0B19:06B4
cs=0xb19;eip=0x0006b7; 	T(CWD);	// 19275 cwd ;~ 0B19:06B7
cs=0xb19;eip=0x0006b8; 	T(XOR(ax, dx));	// 19276 xor     ax, dx ;~ 0B19:06B8
cs=0xb19;eip=0x0006ba; 	T(SUB(ax, dx));	// 19277 sub     ax, dx ;~ 0B19:06BA
cs=0xb19;eip=0x0006bc; 	T(MOV(cx, 4));	// 19278 mov     cx, 4 ;~ 0B19:06BC
cs=0xb19;eip=0x0006bf; 	T(SAR(ax, cl));	// 19279 sar     ax, cl ;~ 0B19:06BF
cs=0xb19;eip=0x0006c1; 	T(XOR(ax, dx));	// 19280 xor     ax, dx ;~ 0B19:06C1
cs=0xb19;eip=0x0006c3; 	T(SUB(ax, dx));	// 19281 sub     ax, dx ;~ 0B19:06C3
cs=0xb19;eip=0x0006c5; 	T(MOV(cx, ax));	// 19282 mov     cx, ax ;~ 0B19:06C5
cs=0xb19;eip=0x0006c7; 	T(MOV(ax, 0x12));	// 19283 mov     ax, 12h ;~ 0B19:06C7
cs=0xb19;eip=0x0006ca; 	T(SUB(ax, word_2c944));	// 19284 sub     ax, word_2C944 ;~ 0B19:06CA
cs=0xb19;eip=0x0006ce; 	T(IMUL1_2(cx));	// 19285 imul    cx ;~ 0B19:06CE
cs=0xb19;eip=0x0006d0; 	T(CWD);	// 19286 cwd ;~ 0B19:06D0
cs=0xb19;eip=0x0006d1; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_e))));	// 19287 mov     cx, [bp+var_E] ;~ 0B19:06D1
cs=0xb19;eip=0x0006d4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_c))));	// 19288 mov     bx, [bp+var_C] ;~ 0B19:06D4
cs=0xb19;eip=0x0006d7; 	T(SUB(cx, word_2d0a6));	// 19289 sub     cx, word_2D0A6 ;~ 0B19:06D7
cs=0xb19;eip=0x0006db; 	T(SBB(bx, word_2d0a8));	// 19290 sbb     bx, word_2D0A8 ;~ 0B19:06DB
cs=0xb19;eip=0x0006df; 	T(SUB(cx, word_2d09a));	// 19291 sub     cx, word_2D09A ;~ 0B19:06DF
cs=0xb19;eip=0x0006e3; 	T(SBB(bx, word_2d09c));	// 19292 sbb     bx, word_2D09C ;~ 0B19:06E3
cs=0xb19;eip=0x0006e7; 	T(CMP(bx, dx));	// 19293 cmp     bx, dx ;~ 0B19:06E7
cs=0xb19;eip=0x0006e9; 	R(JGE(loc_19e5e));	// 19294 jge     short loc_19E5E ;~ 0B19:06E9
cs=0xb19;eip=0x0006eb; 	R(JMP(loc_19e6f));	// 19295 jmp     loc_19E6F ;~ 0B19:06EB
loc_19e5e:
	// 5397 
cs=0xb19;eip=0x0006ee; 	R(JLE(loc_19e63));	// 19299 jle     short loc_19E63 ;~ 0B19:06EE
cs=0xb19;eip=0x0006f0; 	R(JMP(loc_19e6a));	// 19300 jmp     loc_19E6A ;~ 0B19:06F0
loc_19e63:
	// 5398 
cs=0xb19;eip=0x0006f3; 	T(CMP(cx, ax));	// 19304 cmp     cx, ax ;~ 0B19:06F3
cs=0xb19;eip=0x0006f5; 	R(JNC(loc_19e6a));	// 19305 jnb     short loc_19E6A ;~ 0B19:06F5
cs=0xb19;eip=0x0006f7; 	R(JMP(loc_19e6f));	// 19306 jmp     loc_19E6F ;~ 0B19:06F7
loc_19e6a:
	// 5399 
cs=0xb19;eip=0x0006fa; 	R(CALLF(sub_1efe5,0));	// 19311 call    far ptr sub_1EFE5 ;~ 0B19:06FA
loc_19e6f:
	// 5400 
cs=0xb19;eip=0x0006ff; 	T(CMP(word_2d09c, 0));	// 19315 cmp     word_2D09C, 0 ;~ 0B19:06FF
cs=0xb19;eip=0x000704; 	R(JGE(loc_19e79));	// 19316 jge     short loc_19E79 ;~ 0B19:0704
cs=0xb19;eip=0x000706; 	R(JMP(loc_19ea1));	// 19317 jmp     loc_19EA1 ;~ 0B19:0706
loc_19e79:
	// 5401 
cs=0xb19;eip=0x000709; 	T(MOV(ax, 8));	// 19321 mov     ax, 8 ;~ 0B19:0709
cs=0xb19;eip=0x00070c; 	T(MOV(dx, 0));	// 19322 mov     dx, 0 ;~ 0B19:070C
cs=0xb19;eip=0x00070f; 	X(PUSH(dx));	// 19323 push    dx ;~ 0B19:070F
cs=0xb19;eip=0x000710; 	X(PUSH(ax));	// 19324 push    ax ;~ 0B19:0710
cs=0xb19;eip=0x000711; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 19325 mov     ax, [bp+var_E] ;~ 0B19:0711
cs=0xb19;eip=0x000714; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_c))));	// 19326 mov     dx, [bp+var_C] ;~ 0B19:0714
cs=0xb19;eip=0x000717; 	T(SUB(ax, word_2d0a6));	// 19327 sub     ax, word_2D0A6 ;~ 0B19:0717
cs=0xb19;eip=0x00071b; 	T(SBB(dx, word_2d0a8));	// 19328 sbb     dx, word_2D0A8 ;~ 0B19:071B
cs=0xb19;eip=0x00071f; 	X(PUSH(dx));	// 19329 push    dx ;~ 0B19:071F
cs=0xb19;eip=0x000720; 	X(PUSH(ax));	// 19330 push    ax ;~ 0B19:0720
cs=0xb19;eip=0x000721; 	R(CALLF(sub_29cfc,0));	// 19331 call    sub_29CFC ;~ 0B19:0721
cs=0xb19;eip=0x000726; 	X(ADD(word_2d09a, ax));	// 19332 add     word_2D09A, ax ;~ 0B19:0726
cs=0xb19;eip=0x00072a; 	X(ADC(word_2d09c, dx));	// 19333 adc     word_2D09C, dx ;~ 0B19:072A
cs=0xb19;eip=0x00072e; 	R(JMP(loc_19ec5));	// 19334 jmp     loc_19EC5 ;~ 0B19:072E
loc_19ea1:
	// 5402 
cs=0xb19;eip=0x000731; 	T(MOV(ax, 8));	// 19338 mov     ax, 8 ;~ 0B19:0731
cs=0xb19;eip=0x000734; 	T(MOV(dx, 0));	// 19339 mov     dx, 0 ;~ 0B19:0734
cs=0xb19;eip=0x000737; 	X(PUSH(dx));	// 19340 push    dx ;~ 0B19:0737
cs=0xb19;eip=0x000738; 	X(PUSH(ax));	// 19341 push    ax ;~ 0B19:0738
cs=0xb19;eip=0x000739; 	T(MOV(ax, word_2d09a));	// 19342 mov     ax, word_2D09A ;~ 0B19:0739
cs=0xb19;eip=0x00073c; 	T(MOV(dx, word_2d09c));	// 19343 mov     dx, word_2D09C ;~ 0B19:073C
cs=0xb19;eip=0x000740; 	T(NEG(ax));	// 19344 neg     ax ;~ 0B19:0740
cs=0xb19;eip=0x000742; 	T(ADC(dx, 0));	// 19345 adc     dx, 0 ;~ 0B19:0742
cs=0xb19;eip=0x000745; 	T(NEG(dx));	// 19346 neg     dx ;~ 0B19:0745
cs=0xb19;eip=0x000747; 	X(PUSH(dx));	// 19347 push    dx ;~ 0B19:0747
cs=0xb19;eip=0x000748; 	X(PUSH(ax));	// 19348 push    ax ;~ 0B19:0748
cs=0xb19;eip=0x000749; 	R(CALLF(sub_29cfc,0));	// 19349 call    sub_29CFC ;~ 0B19:0749
cs=0xb19;eip=0x00074e; 	X(MOV(word_2d09a, ax));	// 19350 mov     word_2D09A, ax ;~ 0B19:074E
cs=0xb19;eip=0x000751; 	X(MOV(word_2d09c, dx));	// 19351 mov     word_2D09C, dx ;~ 0B19:0751
loc_19ec5:
	// 5403 
cs=0xb19;eip=0x000755; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 19354 mov     ax, [bp+var_E] ;~ 0B19:0755
cs=0xb19;eip=0x000758; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_c))));	// 19355 mov     dx, [bp+var_C] ;~ 0B19:0758
cs=0xb19;eip=0x00075b; 	T(ADD(ax, 1));	// 19356 add     ax, 1 ;~ 0B19:075B
cs=0xb19;eip=0x00075e; 	T(ADC(dx, 0));	// 19357 adc     dx, 0 ;~ 0B19:075E
cs=0xb19;eip=0x000761; 	X(MOV(word_2d0a6, ax));	// 19358 mov     word_2D0A6, ax ;~ 0B19:0761
cs=0xb19;eip=0x000764; 	X(MOV(word_2d0a8, dx));	// 19359 mov     word_2D0A8, dx ;~ 0B19:0764
loc_19ed8:
	// 5404 
cs=0xb19;eip=0x000768; 	T(MOV(ax, word_352cf));	// 19363 mov     ax, word_352CF ;~ 0B19:0768
cs=0xb19;eip=0x00076b; 	T(ADD(ax, word_352cd));	// 19364 add     ax, word_352CD ;~ 0B19:076B
cs=0xb19;eip=0x00076f; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 19365 mov     [bp+var_2], ax ;~ 0B19:076F
cs=0xb19;eip=0x000772; 	T(CMP(byte_2d0e0, 0));	// 19366 cmp     byte_2D0E0, 0 ;~ 0B19:0772
cs=0xb19;eip=0x000777; 	R(JNZ(loc_19eec));	// 19367 jnz     short loc_19EEC ;~ 0B19:0777
cs=0xb19;eip=0x000779; 	R(JMP(loc_19ef2));	// 19368 jmp     loc_19EF2 ;~ 0B19:0779
loc_19eec:
	// 5405 
cs=0xb19;eip=0x00077c; 	T(MOV(ax, word_2d0d0));	// 19372 mov     ax, word_2D0D0 ;~ 0B19:077C
cs=0xb19;eip=0x00077f; 	X(ADD(*(dw*)(raddr(ss,bp+var_2)), ax));	// 19373 add     [bp+var_2], ax ;~ 0B19:077F
loc_19ef2:
	// 5406 
cs=0xb19;eip=0x000782; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x0FF));	// 19376 cmp     [bp+var_2], 0FFh ;~ 0B19:0782
cs=0xb19;eip=0x000787; 	R(JG(loc_19efc));	// 19377 jg      short loc_19EFC ;~ 0B19:0787
cs=0xb19;eip=0x000789; 	R(JMP(loc_19f06));	// 19378 jmp     loc_19F06 ;~ 0B19:0789
loc_19efc:
	// 5407 
cs=0xb19;eip=0x00078c; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x0FF01));	// 19382 cmp     [bp+var_2], 0FF01h ;~ 0B19:078C
cs=0xb19;eip=0x000791; 	R(JGE(loc_19f06));	// 19383 jge     short loc_19F06 ;~ 0B19:0791
cs=0xb19;eip=0x000793; 	R(JMP(loc_19f0c));	// 19384 jmp     loc_19F0C ;~ 0B19:0793
loc_19f06:
	// 5408 
cs=0xb19;eip=0x000796; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 19389 mov     ax, [bp+var_2] ;~ 0B19:0796
cs=0xb19;eip=0x000799; 	X(MOV(word_352cf, ax));	// 19390 mov     word_352CF, ax ;~ 0B19:0799
loc_19f0c:
	// 5409 
cs=0xb19;eip=0x00079c; 	X(PUSH(word_352cf));	// 19393 push    word_352CF ;~ 0B19:079C
cs=0xb19;eip=0x0007a0; 	R(CALLF(sub_247a6,0));	// 19394 call    sub_247A6 ;~ 0B19:07A0
cs=0xb19;eip=0x0007a5; 	T(ADD(sp, 2));	// 19395 add     sp, 2 ;~ 0B19:07A5
cs=0xb19;eip=0x0007a8; 	T(MOV(ch, al));	// 19396 mov     ch, al ;~ 0B19:07A8
cs=0xb19;eip=0x0007aa; 	T(SUB(cl, cl));	// 19397 sub     cl, cl ;~ 0B19:07AA
cs=0xb19;eip=0x0007ac; 	X(MOV(word_368f9, cx));	// 19398 mov     word_368F9, cx ;~ 0B19:07AC
cs=0xb19;eip=0x0007b0; 	T(MOV(ax, word_2d0d6));	// 19399 mov     ax, word_2D0D6 ;~ 0B19:07B0
cs=0xb19;eip=0x0007b3; 	X(MUL1_2(word_2d0d6));	// 19400 mul     word_2D0D6 ;~ 0B19:07B3
cs=0xb19;eip=0x0007b7; 	X(MOV(word_2d0d8, ax));	// 19401 mov     word_2D0D8, ax ;~ 0B19:07B7
cs=0xb19;eip=0x0007ba; 	X(MOV(word_2d0da, 0));	// 19402 mov     word_2D0DA, 0 ;~ 0B19:07BA
cs=0xb19;eip=0x0007c0; 	T(CMP(byte_2d0e0, 0));	// 19403 cmp     byte_2D0E0, 0 ;~ 0B19:07C0
cs=0xb19;eip=0x0007c5; 	R(JNZ(loc_19f3a));	// 19404 jnz     short loc_19F3A ;~ 0B19:07C5
cs=0xb19;eip=0x0007c7; 	R(JMP(loc_19f6f));	// 19405 jmp     loc_19F6F ;~ 0B19:07C7
loc_19f3a:
	// 5410 
cs=0xb19;eip=0x0007ca; 	T(CMP(byte_37517, 1));	// 19409 cmp     byte_37517, 1 ;~ 0B19:07CA
cs=0xb19;eip=0x0007cf; 	R(JNZ(loc_19f44));	// 19410 jnz     short loc_19F44 ;~ 0B19:07CF
cs=0xb19;eip=0x0007d1; 	R(JMP(loc_19f6f));	// 19411 jmp     loc_19F6F ;~ 0B19:07D1
loc_19f44:
	// 5411 
cs=0xb19;eip=0x0007d4; 	T(MOV(ax, word_2d06a));	// 19415 mov     ax, word_2D06A ;~ 0B19:07D4
cs=0xb19;eip=0x0007d7; 	T(CWD);	// 19416 cwd ;~ 0B19:07D7
cs=0xb19;eip=0x0007d8; 	X(PUSH(dx));	// 19417 push    dx ;~ 0B19:07D8
cs=0xb19;eip=0x0007d9; 	X(PUSH(ax));	// 19418 push    ax ;~ 0B19:07D9
cs=0xb19;eip=0x0007da; 	T(SUB(ax, ax));	// 19419 sub     ax, ax ;~ 0B19:07DA
cs=0xb19;eip=0x0007dc; 	X(PUSH(ax));	// 19420 push    ax ;~ 0B19:07DC
cs=0xb19;eip=0x0007dd; 	X(PUSH(word_2d0d6));	// 19421 push    word_2D0D6 ;~ 0B19:07DD
cs=0xb19;eip=0x0007e1; 	T(MOV(bl, byte_37517));	// 19422 mov     bl, byte_37517 ;~ 0B19:07E1
cs=0xb19;eip=0x0007e5; 	T(SUB(bh, bh));	// 19423 sub     bh, bh ;~ 0B19:07E5
cs=0xb19;eip=0x0007e7; 	T(SHL(bx, 1));	// 19424 shl     bx, 1 ;~ 0B19:07E7
cs=0xb19;eip=0x0007e9; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1212))));	// 19425 mov     ax, [bx+1212h] ;~ 0B19:07E9
cs=0xb19;eip=0x0007ed; 	T(CWD);	// 19426 cwd ;~ 0B19:07ED
cs=0xb19;eip=0x0007ee; 	X(PUSH(dx));	// 19427 push    dx ;~ 0B19:07EE
cs=0xb19;eip=0x0007ef; 	X(PUSH(ax));	// 19428 push    ax ;~ 0B19:07EF
cs=0xb19;eip=0x0007f0; 	R(CALLF(sub_29d98,0));	// 19429 call    sub_29D98 ;~ 0B19:07F0
cs=0xb19;eip=0x0007f5; 	X(PUSH(dx));	// 19430 push    dx ;~ 0B19:07F5
cs=0xb19;eip=0x0007f6; 	X(PUSH(ax));	// 19431 push    ax ;~ 0B19:07F6
cs=0xb19;eip=0x0007f7; 	R(CALLF(sub_29e14,0));	// 19432 call    sub_29E14 ;~ 0B19:07F7
cs=0xb19;eip=0x0007fc; 	X(MOV(word_2d0dc, ax));	// 19433 mov     word_2D0DC, ax ;~ 0B19:07FC
loc_19f6f:
	// 5412 
cs=0xb19;eip=0x0007ff; 	T(CMP(byte_2d0e0, 0));	// 19437 cmp     byte_2D0E0, 0 ;~ 0B19:07FF
cs=0xb19;eip=0x000804; 	R(JNZ(loc_19f79));	// 19438 jnz     short loc_19F79 ;~ 0B19:0804
cs=0xb19;eip=0x000806; 	R(JMP(loc_1a0cf));	// 19439 jmp     loc_1A0CF ;~ 0B19:0806
loc_19f79:
	// 5413 
cs=0xb19;eip=0x000809; 	T(MOV(ax, word_37ab7));	// 19443 mov     ax, word_37AB7 ;~ 0B19:0809
cs=0xb19;eip=0x00080c; 	T(MOV(cx, ax));	// 19444 mov     cx, ax ;~ 0B19:080C
cs=0xb19;eip=0x00080e; 	T(SHL(ax, 1));	// 19445 shl     ax, 1 ;~ 0B19:080E
cs=0xb19;eip=0x000810; 	T(ADD(ax, cx));	// 19446 add     ax, cx ;~ 0B19:0810
cs=0xb19;eip=0x000812; 	T(SHL(ax, 1));	// 19447 shl     ax, 1 ;~ 0B19:0812
cs=0xb19;eip=0x000814; 	T(MOV(cx, word_37ab5));	// 19448 mov     cx, word_37AB5 ;~ 0B19:0814
cs=0xb19;eip=0x000818; 	T(MOV(dx, cx));	// 19449 mov     dx, cx ;~ 0B19:0818
cs=0xb19;eip=0x00081a; 	T(SHL(cx, 1));	// 19450 shl     cx, 1 ;~ 0B19:081A
cs=0xb19;eip=0x00081c; 	T(ADD(cx, dx));	// 19451 add     cx, dx ;~ 0B19:081C
cs=0xb19;eip=0x00081e; 	T(ADD(ax, cx));	// 19452 add     ax, cx ;~ 0B19:081E
cs=0xb19;eip=0x000820; 	T(SUB(ax, 0x7D));	// 19453 sub     ax, 7Dh ; '}' ;~ 0B19:0820
cs=0xb19;eip=0x000823; 	T(NEG(ax));	// 19454 neg     ax ;~ 0B19:0823
cs=0xb19;eip=0x000825; 	X(MOV(word_3a628, ax));	// 19455 mov     word_3A628, ax ;~ 0B19:0825
cs=0xb19;eip=0x000828; 	T(MOV(al, *(db*)(((db*)&word_352c6))));	// 19456 mov     al, byte ptr word_352C6 ;~ 0B19:0828
cs=0xb19;eip=0x00082b; 	T(AND(ax, 4));	// 19457 and     ax, 4 ;~ 0B19:082B
cs=0xb19;eip=0x00082e; 	T(SHR(ax, 1));	// 19458 shr     ax, 1 ;~ 0B19:082E
cs=0xb19;eip=0x000830; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 19459 mov     [bp+var_12], ax ;~ 0B19:0830
cs=0xb19;eip=0x000833; 	T(MOV(al, byte_378db));	// 19460 mov     al, byte_378DB ;~ 0B19:0833
cs=0xb19;eip=0x000836; 	T(SUB(ah, ah));	// 19461 sub     ah, ah ;~ 0B19:0836
cs=0xb19;eip=0x000838; 	R(JMP(loc_1a0a4));	// 19462 jmp     loc_1A0A4 ;~ 0B19:0838
loc_19fab:
	// 5414 
cs=0xb19;eip=0x00083b; 	X(MOV(word_3a628, 0));	// 19466 mov     word_3A628, 0 ;~ 0B19:083B
cs=0xb19;eip=0x000841; 	R(JMP(loc_1a0cf));	// 19467 jmp     loc_1A0CF ;~ 0B19:0841
loc_19fb4:
	// 5415 
cs=0xb19;eip=0x000844; 	T(MOV(ax, word_3a628));	// 19472 mov     ax, word_3A628 ;~ 0B19:0844
cs=0xb19;eip=0x000847; 	T(MOV(cx, ax));	// 19473 mov     cx, ax ;~ 0B19:0847
cs=0xb19;eip=0x000849; 	T(SHL(ax, 1));	// 19474 shl     ax, 1 ;~ 0B19:0849
cs=0xb19;eip=0x00084b; 	T(ADD(ax, cx));	// 19475 add     ax, cx ;~ 0B19:084B
cs=0xb19;eip=0x00084d; 	T(SHR(ax, 1));	// 19476 shr     ax, 1 ;~ 0B19:084D
cs=0xb19;eip=0x00084f; 	T(SHR(ax, 1));	// 19477 shr     ax, 1 ;~ 0B19:084F
cs=0xb19;eip=0x000851; 	X(MOV(word_3a628, ax));	// 19478 mov     word_3A628, ax ;~ 0B19:0851
cs=0xb19;eip=0x000854; 	T(TEST(*(db*)(((db*)&word_2bf12)), 0x60));	// 19479 test    byte ptr word_2BF12, 60h ;~ 0B19:0854
cs=0xb19;eip=0x000859; 	R(JZ(loc_19fce));	// 19480 jz      short loc_19FCE ;~ 0B19:0859
cs=0xb19;eip=0x00085b; 	R(JMP(loc_19ff4));	// 19481 jmp     loc_19FF4 ;~ 0B19:085B
loc_19fce:
	// 5416 
cs=0xb19;eip=0x00085e; 	T(CMP(word_2d0d6, 0));	// 19485 cmp     word_2D0D6, 0 ;~ 0B19:085E
cs=0xb19;eip=0x000863; 	R(JNZ(loc_19fd8));	// 19486 jnz     short loc_19FD8 ;~ 0B19:0863
cs=0xb19;eip=0x000865; 	R(JMP(loc_19ff4));	// 19487 jmp     loc_19FF4 ;~ 0B19:0865
loc_19fd8:
	// 5417 
cs=0xb19;eip=0x000868; 	T(CMP(byte_352bc, 0));	// 19491 cmp     byte_352BC, 0 ;~ 0B19:0868
cs=0xb19;eip=0x00086d; 	R(JZ(loc_19fe2));	// 19492 jz      short loc_19FE2 ;~ 0B19:086D
cs=0xb19;eip=0x00086f; 	R(JMP(loc_19ff4));	// 19493 jmp     loc_19FF4 ;~ 0B19:086F
loc_19fe2:
	// 5418 
cs=0xb19;eip=0x000872; 	T(MOV(al, *(db*)(((db*)&word_2bf12))));	// 19497 mov     al, byte ptr word_2BF12 ;~ 0B19:0872
cs=0xb19;eip=0x000875; 	T(AND(ax, 0x1C));	// 19498 and     ax, 1Ch ;~ 0B19:0875
cs=0xb19;eip=0x000878; 	T(SHR(ax, 1));	// 19499 shr     ax, 1 ;~ 0B19:0878
cs=0xb19;eip=0x00087a; 	T(SHR(ax, 1));	// 19500 shr     ax, 1 ;~ 0B19:087A
cs=0xb19;eip=0x00087c; 	T(ADD(al, *(db*)(raddr(ss,bp+var_12))));	// 19501 add     al, byte ptr [bp+var_12] ;~ 0B19:087C
cs=0xb19;eip=0x00087f; 	T(INC(al));	// 19502 inc     al ;~ 0B19:087F
cs=0xb19;eip=0x000881; 	X(MOV(byte_352bc, al));	// 19503 mov     byte_352BC, al ;~ 0B19:0881
loc_19ff4:
	// 5419 
cs=0xb19;eip=0x000884; 	R(JMP(loc_1a0cf));	// 19507 jmp     loc_1A0CF ;~ 0B19:0884
loc_19ff7:
	// 5420 
cs=0xb19;eip=0x000887; 	T(TEST(*(db*)(((db*)&word_37b79)), 1));	// 19511 test    byte ptr word_37B79, 1 ;~ 0B19:0887
cs=0xb19;eip=0x00088c; 	R(JZ(loc_1a001));	// 19512 jz      short loc_1A001 ;~ 0B19:088C
cs=0xb19;eip=0x00088e; 	R(JMP(loc_1a017));	// 19513 jmp     loc_1A017 ;~ 0B19:088E
loc_1a001:
	// 5421 
cs=0xb19;eip=0x000891; 	T(CMP(word_2d0d6, 0));	// 19517 cmp     word_2D0D6, 0 ;~ 0B19:0891
cs=0xb19;eip=0x000896; 	R(JNZ(loc_1a00b));	// 19518 jnz     short loc_1A00B ;~ 0B19:0896
cs=0xb19;eip=0x000898; 	R(JMP(loc_1a017));	// 19519 jmp     loc_1A017 ;~ 0B19:0898
loc_1a00b:
	// 5422 
cs=0xb19;eip=0x00089b; 	T(MOV(ax, 0x11));	// 19523 mov     ax, 11h ;~ 0B19:089B
cs=0xb19;eip=0x00089e; 	X(PUSH(ax));	// 19524 push    ax ;~ 0B19:089E
cs=0xb19;eip=0x00089f; 	R(CALLF(sub_1d2d0,0));	// 19525 call    sub_1D2D0 ;~ 0B19:089F
cs=0xb19;eip=0x0008a4; 	T(ADD(sp, 2));	// 19526 add     sp, 2 ;~ 0B19:08A4
loc_1a017:
	// 5423 
cs=0xb19;eip=0x0008a7; 	T(MOV(ax, word_3a628));	// 19530 mov     ax, word_3A628 ;~ 0B19:08A7
cs=0xb19;eip=0x0008aa; 	T(SHL(ax, 1));	// 19531 shl     ax, 1 ;~ 0B19:08AA
cs=0xb19;eip=0x0008ac; 	T(SHL(ax, 1));	// 19532 shl     ax, 1 ;~ 0B19:08AC
cs=0xb19;eip=0x0008ae; 	T(SUB(dx, dx));	// 19533 sub     dx, dx ;~ 0B19:08AE
cs=0xb19;eip=0x0008b0; 	T(MOV(cx, 5));	// 19534 mov     cx, 5 ;~ 0B19:08B0
cs=0xb19;eip=0x0008b3; 	T(DIV2(cx));	// 19535 div     cx ;~ 0B19:08B3
cs=0xb19;eip=0x0008b5; 	X(MOV(word_3a628, ax));	// 19536 mov     word_3A628, ax ;~ 0B19:08B5
cs=0xb19;eip=0x0008b8; 	T(TEST(*(db*)(((db*)&word_2bf12)), 0x70));	// 19537 test    byte ptr word_2BF12, 70h ;~ 0B19:08B8
cs=0xb19;eip=0x0008bd; 	R(JZ(loc_1a032));	// 19538 jz      short loc_1A032 ;~ 0B19:08BD
cs=0xb19;eip=0x0008bf; 	R(JMP(loc_1a04e));	// 19539 jmp     loc_1A04E ;~ 0B19:08BF
loc_1a032:
	// 5424 
cs=0xb19;eip=0x0008c2; 	T(CMP(word_2d0d6, 0));	// 19543 cmp     word_2D0D6, 0 ;~ 0B19:08C2
cs=0xb19;eip=0x0008c7; 	R(JNZ(loc_1a03c));	// 19544 jnz     short loc_1A03C ;~ 0B19:08C7
cs=0xb19;eip=0x0008c9; 	R(JMP(loc_1a04e));	// 19545 jmp     loc_1A04E ;~ 0B19:08C9
loc_1a03c:
	// 5425 
cs=0xb19;eip=0x0008cc; 	T(CMP(byte_352bc, 0));	// 19549 cmp     byte_352BC, 0 ;~ 0B19:08CC
cs=0xb19;eip=0x0008d1; 	R(JZ(loc_1a046));	// 19550 jz      short loc_1A046 ;~ 0B19:08D1
cs=0xb19;eip=0x0008d3; 	R(JMP(loc_1a04e));	// 19551 jmp     loc_1A04E ;~ 0B19:08D3
loc_1a046:
	// 5426 
cs=0xb19;eip=0x0008d6; 	T(MOV(al, *(db*)(raddr(ss,bp+var_12))));	// 19555 mov     al, byte ptr [bp+var_12] ;~ 0B19:08D6
cs=0xb19;eip=0x0008d9; 	T(INC(al));	// 19556 inc     al ;~ 0B19:08D9
cs=0xb19;eip=0x0008db; 	X(MOV(byte_352bc, al));	// 19557 mov     byte_352BC, al ;~ 0B19:08DB
loc_1a04e:
	// 5427 
cs=0xb19;eip=0x0008de; 	R(JMP(loc_1a0cf));	// 19561 jmp     loc_1A0CF ;~ 0B19:08DE
loc_1a051:
	// 5428 
cs=0xb19;eip=0x0008e1; 	T(TEST(*(db*)(((db*)&word_37b79)), 1));	// 19565 test    byte ptr word_37B79, 1 ;~ 0B19:08E1
cs=0xb19;eip=0x0008e6; 	R(JZ(loc_1a05b));	// 19566 jz      short loc_1A05B ;~ 0B19:08E6
cs=0xb19;eip=0x0008e8; 	R(JMP(loc_1a071));	// 19567 jmp     loc_1A071 ;~ 0B19:08E8
loc_1a05b:
	// 5429 
cs=0xb19;eip=0x0008eb; 	T(CMP(word_2d0d6, 0));	// 19571 cmp     word_2D0D6, 0 ;~ 0B19:08EB
cs=0xb19;eip=0x0008f0; 	R(JNZ(loc_1a065));	// 19572 jnz     short loc_1A065 ;~ 0B19:08F0
cs=0xb19;eip=0x0008f2; 	R(JMP(loc_1a071));	// 19573 jmp     loc_1A071 ;~ 0B19:08F2
loc_1a065:
	// 5430 
cs=0xb19;eip=0x0008f5; 	T(MOV(ax, 0x11));	// 19577 mov     ax, 11h ;~ 0B19:08F5
cs=0xb19;eip=0x0008f8; 	X(PUSH(ax));	// 19578 push    ax ;~ 0B19:08F8
cs=0xb19;eip=0x0008f9; 	R(CALLF(sub_1d2d0,0));	// 19579 call    sub_1D2D0 ;~ 0B19:08F9
cs=0xb19;eip=0x0008fe; 	T(ADD(sp, 2));	// 19580 add     sp, 2 ;~ 0B19:08FE
loc_1a071:
	// 5431 
cs=0xb19;eip=0x000901; 	T(MOV(ax, word_3a628));	// 19584 mov     ax, word_3A628 ;~ 0B19:0901
cs=0xb19;eip=0x000904; 	T(SHL(ax, 1));	// 19585 shl     ax, 1 ;~ 0B19:0904
cs=0xb19;eip=0x000906; 	T(SHL(ax, 1));	// 19586 shl     ax, 1 ;~ 0B19:0906
cs=0xb19;eip=0x000908; 	T(SUB(dx, dx));	// 19587 sub     dx, dx ;~ 0B19:0908
cs=0xb19;eip=0x00090a; 	T(MOV(cx, 5));	// 19588 mov     cx, 5 ;~ 0B19:090A
cs=0xb19;eip=0x00090d; 	T(DIV2(cx));	// 19589 div     cx ;~ 0B19:090D
cs=0xb19;eip=0x00090f; 	X(MOV(word_3a628, ax));	// 19590 mov     word_3A628, ax ;~ 0B19:090F
cs=0xb19;eip=0x000912; 	T(CMP(word_2d0d6, 0));	// 19591 cmp     word_2D0D6, 0 ;~ 0B19:0912
cs=0xb19;eip=0x000917; 	R(JNZ(loc_1a08c));	// 19592 jnz     short loc_1A08C ;~ 0B19:0917
cs=0xb19;eip=0x000919; 	R(JMP(loc_1a09b));	// 19593 jmp     loc_1A09B ;~ 0B19:0919
loc_1a08c:
	// 5432 
cs=0xb19;eip=0x00091c; 	T(CMP(byte_352bc, 0));	// 19597 cmp     byte_352BC, 0 ;~ 0B19:091C
cs=0xb19;eip=0x000921; 	R(JZ(loc_1a096));	// 19598 jz      short loc_1A096 ;~ 0B19:0921
cs=0xb19;eip=0x000923; 	R(JMP(loc_1a09b));	// 19599 jmp     loc_1A09B ;~ 0B19:0923
loc_1a096:
	// 5433 
cs=0xb19;eip=0x000926; 	X(MOV(byte_352bc, 4));	// 19603 mov     byte_352BC, 4 ;~ 0B19:0926
loc_1a09b:
	// 5434 
cs=0xb19;eip=0x00092b; 	R(JMP(loc_1a0cf));	// 19607 jmp     loc_1A0CF ;~ 0B19:092B
loc_1a09e:
	// 5435 
cs=0xb19;eip=0x00092e; 	R(JMP(loc_1a0cf));	// 19611 jmp     loc_1A0CF ;~ 0B19:092E
ret_b19_931:
	// 5436 
cs=0xb19;eip=0x000931; 	R(JMP(loc_1a0cf));	// 19613 jmp     loc_1A0CF ;~ 0B19:0931
loc_1a0a4:
	// 5437 
cs=0xb19;eip=0x000934; 	T(CMP(ax, 0x0E));	// 19617 cmp     ax, 0Eh ;~ 0B19:0934
cs=0xb19;eip=0x000937; 	R(JNZ(loc_1a0ac));	// 19618 jnz     short loc_1A0AC ;~ 0B19:0937
cs=0xb19;eip=0x000939; 	R(JMP(loc_19fab));	// 19619 jmp     loc_19FAB ;~ 0B19:0939
loc_1a0ac:
	// 5438 
cs=0xb19;eip=0x00093c; 	T(CMP(ax, 0x0F));	// 19623 cmp     ax, 0Fh ;~ 0B19:093C
cs=0xb19;eip=0x00093f; 	R(JNZ(loc_1a0b4));	// 19624 jnz     short loc_1A0B4 ;~ 0B19:093F
cs=0xb19;eip=0x000941; 	R(JMP(loc_19fb4));	// 19625 jmp     loc_19FB4 ;~ 0B19:0941
loc_1a0b4:
	// 5439 
cs=0xb19;eip=0x000944; 	T(CMP(ax, 0x11));	// 19629 cmp     ax, 11h ;~ 0B19:0944
cs=0xb19;eip=0x000947; 	R(JNZ(loc_1a0bc));	// 19630 jnz     short loc_1A0BC ;~ 0B19:0947
cs=0xb19;eip=0x000949; 	R(JMP(loc_19ff7));	// 19631 jmp     loc_19FF7 ;~ 0B19:0949
loc_1a0bc:
	// 5440 
cs=0xb19;eip=0x00094c; 	T(CMP(ax, 0x12));	// 19635 cmp     ax, 12h ;~ 0B19:094C
cs=0xb19;eip=0x00094f; 	R(JNZ(loc_1a0c4));	// 19636 jnz     short loc_1A0C4 ;~ 0B19:094F
cs=0xb19;eip=0x000951; 	R(JMP(loc_1a051));	// 19637 jmp     loc_1A051 ;~ 0B19:0951
loc_1a0c4:
	// 5441 
cs=0xb19;eip=0x000954; 	T(CMP(ax, 0x0FF));	// 19641 cmp     ax, 0FFh ;~ 0B19:0954
cs=0xb19;eip=0x000957; 	R(JNZ(loc_1a0cc));	// 19642 jnz     short loc_1A0CC ;~ 0B19:0957
cs=0xb19;eip=0x000959; 	R(JMP(loc_19fb4));	// 19643 jmp     loc_19FB4 ;~ 0B19:0959
loc_1a0cc:
	// 5442 
cs=0xb19;eip=0x00095c; 	R(JMP(loc_1a09e));	// 19647 jmp     loc_1A09E ;~ 0B19:095C
loc_1a0cf:
	// 5443 
cs=0xb19;eip=0x00095f; 	T(MOV(al, byte_37516));	// 19652 mov     al, byte_37516 ;~ 0B19:095F
cs=0xb19;eip=0x000962; 	T(SUB(ah, ah));	// 19653 sub     ah, ah ;~ 0B19:0962
cs=0xb19;eip=0x000964; 	T(SUB(cx, cx));	// 19654 sub     cx, cx ;~ 0B19:0964
cs=0xb19;eip=0x000966; 	X(PUSH(cx));	// 19655 push    cx ;~ 0B19:0966
cs=0xb19;eip=0x000967; 	X(PUSH(ax));	// 19656 push    ax ;~ 0B19:0967
cs=0xb19;eip=0x000968; 	T(MOV(ax, word_2d070));	// 19657 mov     ax, word_2D070 ;~ 0B19:0968
cs=0xb19;eip=0x00096b; 	T(CWD);	// 19658 cwd ;~ 0B19:096B
cs=0xb19;eip=0x00096c; 	X(PUSH(dx));	// 19659 push    dx ;~ 0B19:096C
cs=0xb19;eip=0x00096d; 	X(PUSH(ax));	// 19660 push    ax ;~ 0B19:096D
cs=0xb19;eip=0x00096e; 	R(CALLF(sub_29d98,0));	// 19661 call    sub_29D98 ;~ 0B19:096E
cs=0xb19;eip=0x000973; 	T(MOV(cx, ax));	// 19662 mov     cx, ax ;~ 0B19:0973
cs=0xb19;eip=0x000975; 	T(MOV(ax, word_2d06e));	// 19663 mov     ax, word_2D06E ;~ 0B19:0975
cs=0xb19;eip=0x000978; 	T(MOV(bx, dx));	// 19664 mov     bx, dx ;~ 0B19:0978
cs=0xb19;eip=0x00097a; 	T(CWD);	// 19665 cwd ;~ 0B19:097A
cs=0xb19;eip=0x00097b; 	T(ADD(cx, ax));	// 19666 add     cx, ax ;~ 0B19:097B
cs=0xb19;eip=0x00097d; 	T(ADC(bx, dx));	// 19667 adc     bx, dx ;~ 0B19:097D
cs=0xb19;eip=0x00097f; 	X(MOV(word_3a3e8, cx));	// 19668 mov     word_3A3E8, cx ;~ 0B19:097F
cs=0xb19;eip=0x000983; 	X(MOV(word_3a3ea, bx));	// 19669 mov     word_3A3EA, bx ;~ 0B19:0983
cs=0xb19;eip=0x000987; 	X(PUSH(word_3a3ea));	// 19670 push    word_3A3EA ;~ 0B19:0987
cs=0xb19;eip=0x00098b; 	X(PUSH(word_3a3e8));	// 19671 push    word_3A3E8 ;~ 0B19:098B
cs=0xb19;eip=0x00098f; 	T(MOV(ax, word_2d0dc));	// 19672 mov     ax, word_2D0DC ;~ 0B19:098F
cs=0xb19;eip=0x000992; 	T(SUB(dx, dx));	// 19673 sub     dx, dx ;~ 0B19:0992
cs=0xb19;eip=0x000994; 	T(ADD(ax, 0x200));	// 19674 add     ax, 200h ;~ 0B19:0994
cs=0xb19;eip=0x000997; 	T(ADC(dx, 0));	// 19675 adc     dx, 0 ;~ 0B19:0997
cs=0xb19;eip=0x00099a; 	X(PUSH(dx));	// 19676 push    dx ;~ 0B19:099A
cs=0xb19;eip=0x00099b; 	X(PUSH(ax));	// 19677 push    ax ;~ 0B19:099B
cs=0xb19;eip=0x00099c; 	R(CALLF(sub_29d98,0));	// 19678 call    sub_29D98 ;~ 0B19:099C
cs=0xb19;eip=0x0009a1; 	T(MOV(cl, 0x0A));	// 19679 mov     cl, 0Ah ;~ 0B19:09A1
cs=0xb19;eip=0x0009a3; 	T(CMP(cl, 0));	// 19680 cmp     cl, 0 ;~ 0B19:09A3
cs=0xb19;eip=0x0009a6; 	R(JNZ(loc_1a11b));	// 19681 jnz     short loc_1A11B ;~ 0B19:09A6
cs=0xb19;eip=0x0009a8; 	R(JMP(loc_1a12c));	// 19682 jmp     loc_1A12C ;~ 0B19:09A8
loc_1a11b:
	// 5444 
cs=0xb19;eip=0x0009ab; 	T(SHR(dx, 1));	// 19687 shr     dx, 1 ;~ 0B19:09AB
cs=0xb19;eip=0x0009ad; 	T(RCR(ax, 1));	// 19688 rcr     ax, 1 ;~ 0B19:09AD
cs=0xb19;eip=0x0009af; 	T(DEC(cl));	// 19689 dec     cl ;~ 0B19:09AF
cs=0xb19;eip=0x0009b1; 	T(CMP(cl, 0));	// 19690 cmp     cl, 0 ;~ 0B19:09B1
cs=0xb19;eip=0x0009b4; 	R(JNZ(loc_1a129));	// 19691 jnz     short loc_1A129 ;~ 0B19:09B4
cs=0xb19;eip=0x0009b6; 	R(JMP(loc_1a12c));	// 19692 jmp     loc_1A12C ;~ 0B19:09B6
loc_1a129:
	// 5445 
cs=0xb19;eip=0x0009b9; 	R(JMP(loc_1a11b));	// 19696 jmp     loc_1A11B ;~ 0B19:09B9
loc_1a12c:
	// 5446 
cs=0xb19;eip=0x0009bc; 	T(MOV(cx, ax));	// 19701 mov     cx, ax ;~ 0B19:09BC
cs=0xb19;eip=0x0009be; 	T(MOV(ax, word_2d0dc));	// 19702 mov     ax, word_2D0DC ;~ 0B19:09BE
cs=0xb19;eip=0x0009c1; 	T(MOV(bx, dx));	// 19703 mov     bx, dx ;~ 0B19:09C1
cs=0xb19;eip=0x0009c3; 	X(MUL1_2(word_2d0dc));	// 19704 mul     word_2D0DC ;~ 0B19:09C3
cs=0xb19;eip=0x0009c7; 	T(SUB(dx, dx));	// 19705 sub     dx, dx ;~ 0B19:09C7
cs=0xb19;eip=0x0009c9; 	T(MOV(si, 0x1E));	// 19706 mov     si, 1Eh ;~ 0B19:09C9
cs=0xb19;eip=0x0009cc; 	T(DIV2(si));	// 19707 div     si ;~ 0B19:09CC
cs=0xb19;eip=0x0009ce; 	T(SUB(cx, ax));	// 19708 sub     cx, ax ;~ 0B19:09CE
cs=0xb19;eip=0x0009d0; 	T(SBB(bx, 0));	// 19709 sbb     bx, 0 ;~ 0B19:09D0
cs=0xb19;eip=0x0009d3; 	X(MOV(word_3a3e8, cx));	// 19710 mov     word_3A3E8, cx ;~ 0B19:09D3
cs=0xb19;eip=0x0009d7; 	X(MOV(word_3a3ea, bx));	// 19711 mov     word_3A3EA, bx ;~ 0B19:09D7
cs=0xb19;eip=0x0009db; 	T(MOV(ax, word_2d0e4));	// 19712 mov     ax, word_2D0E4 ;~ 0B19:09DB
cs=0xb19;eip=0x0009de; 	T(MOV(dx, word_2d0e6));	// 19713 mov     dx, word_2D0E6 ;~ 0B19:09DE
cs=0xb19;eip=0x0009e2; 	X(ADD(word_3a3e8, ax));	// 19714 add     word_3A3E8, ax ;~ 0B19:09E2
cs=0xb19;eip=0x0009e6; 	X(ADC(word_3a3ea, dx));	// 19715 adc     word_3A3EA, dx ;~ 0B19:09E6
cs=0xb19;eip=0x0009ea; 	T(MOV(ax, word_2d0d6));	// 19716 mov     ax, word_2D0D6 ;~ 0B19:09EA
cs=0xb19;eip=0x0009ed; 	T(CMP(word_2d084, ax));	// 19717 cmp     word_2D084, ax ;~ 0B19:09ED
cs=0xb19;eip=0x0009f1; 	R(JBE(loc_1a166));	// 19718 jbe     short loc_1A166 ;~ 0B19:09F1
cs=0xb19;eip=0x0009f3; 	R(JMP(loc_1a16f));	// 19719 jmp     loc_1A16F ;~ 0B19:09F3
loc_1a166:
	// 5447 
cs=0xb19;eip=0x0009f6; 	T(MOV(ax, 0));	// 19723 mov     ax, 0 ;~ 0B19:09F6
cs=0xb19;eip=0x0009f9; 	X(MOV(word_3a3ea, ax));	// 19724 mov     word_3A3EA, ax ;~ 0B19:09F9
cs=0xb19;eip=0x0009fc; 	X(MOV(word_3a3e8, ax));	// 19725 mov     word_3A3E8, ax ;~ 0B19:09FC
loc_1a16f:
	// 5448 
cs=0xb19;eip=0x0009ff; 	T(TEST(*(db*)(((db*)&word_352c6)), 0x20));	// 19728 test    byte ptr word_352C6, 20h ;~ 0B19:09FF
cs=0xb19;eip=0x000a04; 	R(JNZ(loc_1a179));	// 19729 jnz     short loc_1A179 ;~ 0B19:0A04
cs=0xb19;eip=0x000a06; 	R(JMP(loc_1a18a));	// 19730 jmp     loc_1A18A ;~ 0B19:0A06
loc_1a179:
	// 5449 
cs=0xb19;eip=0x000a09; 	T(MOV(ax, 4));	// 19734 mov     ax, 4 ;~ 0B19:0A09
cs=0xb19;eip=0x000a0c; 	T(MOV(dx, 0));	// 19735 mov     dx, 0 ;~ 0B19:0A0C
cs=0xb19;eip=0x000a0f; 	X(PUSH(dx));	// 19736 push    dx ;~ 0B19:0A0F
cs=0xb19;eip=0x000a10; 	X(PUSH(ax));	// 19737 push    ax ;~ 0B19:0A10
cs=0xb19;eip=0x000a11; 	T(MOV(ax, 0x0E5A8));	// 19738 mov     ax, 0E5A8h ;~ 0B19:0A11
cs=0xb19;eip=0x000a14; 	X(PUSH(ax));	// 19739 push    ax ;~ 0B19:0A14
cs=0xb19;eip=0x000a15; 	R(CALLF(sub_29dcc,0));	// 19740 call    sub_29DCC ;~ 0B19:0A15
loc_1a18a:
	// 5450 
cs=0xb19;eip=0x000a1a; 	T(MOV(ax, 0x100));	// 19743 mov     ax, 100h ;~ 0B19:0A1A
cs=0xb19;eip=0x000a1d; 	T(MOV(cl, byte_37517));	// 19744 mov     cl, byte_37517 ;~ 0B19:0A1D
cs=0xb19;eip=0x000a21; 	T(SHL(ax, cl));	// 19745 shl     ax, cl ;~ 0B19:0A21
cs=0xb19;eip=0x000a23; 	T(TEST(word_352c6, ax));	// 19746 test    word_352C6, ax ;~ 0B19:0A23
cs=0xb19;eip=0x000a27; 	R(JNZ(loc_1a19c));	// 19747 jnz     short loc_1A19C ;~ 0B19:0A27
cs=0xb19;eip=0x000a29; 	R(JMP(loc_1a1ad));	// 19748 jmp     loc_1A1AD ;~ 0B19:0A29
loc_1a19c:
	// 5451 
cs=0xb19;eip=0x000a2c; 	T(MOV(ax, 4));	// 19752 mov     ax, 4 ;~ 0B19:0A2C
cs=0xb19;eip=0x000a2f; 	T(MOV(dx, 0));	// 19753 mov     dx, 0 ;~ 0B19:0A2F
cs=0xb19;eip=0x000a32; 	X(PUSH(dx));	// 19754 push    dx ;~ 0B19:0A32
cs=0xb19;eip=0x000a33; 	X(PUSH(ax));	// 19755 push    ax ;~ 0B19:0A33
cs=0xb19;eip=0x000a34; 	T(MOV(ax, 0x0E5A8));	// 19756 mov     ax, 0E5A8h ;~ 0B19:0A34
cs=0xb19;eip=0x000a37; 	X(PUSH(ax));	// 19757 push    ax ;~ 0B19:0A37
cs=0xb19;eip=0x000a38; 	R(CALLF(sub_29dcc,0));	// 19758 call    sub_29DCC ;~ 0B19:0A38
loc_1a1ad:
	// 5452 
cs=0xb19;eip=0x000a3d; 	T(SUB(ax, ax));	// 19761 sub     ax, ax ;~ 0B19:0A3D
cs=0xb19;eip=0x000a3f; 	X(PUSH(ax));	// 19762 push    ax ;~ 0B19:0A3F
cs=0xb19;eip=0x000a40; 	X(PUSH(word_2d0dc));	// 19763 push    word_2D0DC ;~ 0B19:0A40
cs=0xb19;eip=0x000a44; 	T(SUB(ax, ax));	// 19764 sub     ax, ax ;~ 0B19:0A44
cs=0xb19;eip=0x000a46; 	X(PUSH(ax));	// 19765 push    ax ;~ 0B19:0A46
cs=0xb19;eip=0x000a47; 	X(PUSH(word_2d0dc));	// 19766 push    word_2D0DC ;~ 0B19:0A47
cs=0xb19;eip=0x000a4b; 	R(CALLF(sub_29d98,0));	// 19767 call    sub_29D98 ;~ 0B19:0A4B
cs=0xb19;eip=0x000a50; 	X(MOV(word_3a388, ax));	// 19768 mov     word_3A388, ax ;~ 0B19:0A50
cs=0xb19;eip=0x000a53; 	X(MOV(word_3a38a, dx));	// 19769 mov     word_3A38A, dx ;~ 0B19:0A53
cs=0xb19;eip=0x000a57; 	T(SUB(ax, ax));	// 19770 sub     ax, ax ;~ 0B19:0A57
cs=0xb19;eip=0x000a59; 	X(PUSH(ax));	// 19771 push    ax ;~ 0B19:0A59
cs=0xb19;eip=0x000a5a; 	X(PUSH(word_2d0dc));	// 19772 push    word_2D0DC ;~ 0B19:0A5A
cs=0xb19;eip=0x000a5e; 	T(MOV(ax, word_2d042));	// 19773 mov     ax, word_2D042 ;~ 0B19:0A5E
cs=0xb19;eip=0x000a61; 	T(CWD);	// 19774 cwd ;~ 0B19:0A61
cs=0xb19;eip=0x000a62; 	X(PUSH(dx));	// 19775 push    dx ;~ 0B19:0A62
cs=0xb19;eip=0x000a63; 	X(PUSH(ax));	// 19776 push    ax ;~ 0B19:0A63
cs=0xb19;eip=0x000a64; 	R(CALLF(sub_29d98,0));	// 19777 call    sub_29D98 ;~ 0B19:0A64
cs=0xb19;eip=0x000a69; 	X(ADD(word_3a388, ax));	// 19778 add     word_3A388, ax ;~ 0B19:0A69
cs=0xb19;eip=0x000a6d; 	X(ADC(word_3a38a, dx));	// 19779 adc     word_3A38A, dx ;~ 0B19:0A6D
cs=0xb19;eip=0x000a71; 	T(MOV(ax, word_2d048));	// 19780 mov     ax, word_2D048 ;~ 0B19:0A71
cs=0xb19;eip=0x000a74; 	T(CWD);	// 19781 cwd ;~ 0B19:0A74
cs=0xb19;eip=0x000a75; 	X(PUSH(dx));	// 19782 push    dx ;~ 0B19:0A75
cs=0xb19;eip=0x000a76; 	X(PUSH(ax));	// 19783 push    ax ;~ 0B19:0A76
cs=0xb19;eip=0x000a77; 	T(MOV(ax, 0x0E548));	// 19784 mov     ax, 0E548h ;~ 0B19:0A77
cs=0xb19;eip=0x000a7a; 	X(PUSH(ax));	// 19785 push    ax ;~ 0B19:0A7A
cs=0xb19;eip=0x000a7b; 	R(CALLF(sub_29dcc,0));	// 19786 call    sub_29DCC ;~ 0B19:0A7B
cs=0xb19;eip=0x000a80; 	T(MOV(ax, word_2d04e));	// 19787 mov     ax, word_2D04E ;~ 0B19:0A80
cs=0xb19;eip=0x000a83; 	T(CWD);	// 19788 cwd ;~ 0B19:0A83
cs=0xb19;eip=0x000a84; 	X(PUSH(dx));	// 19789 push    dx ;~ 0B19:0A84
cs=0xb19;eip=0x000a85; 	X(PUSH(ax));	// 19790 push    ax ;~ 0B19:0A85
cs=0xb19;eip=0x000a86; 	T(SUB(ax, ax));	// 19791 sub     ax, ax ;~ 0B19:0A86
cs=0xb19;eip=0x000a88; 	X(PUSH(ax));	// 19792 push    ax ;~ 0B19:0A88
cs=0xb19;eip=0x000a89; 	X(PUSH(word_2d0d6));	// 19793 push    word_2D0D6 ;~ 0B19:0A89
cs=0xb19;eip=0x000a8d; 	R(CALLF(sub_29e14,0));	// 19794 call    sub_29E14 ;~ 0B19:0A8D
cs=0xb19;eip=0x000a92; 	X(MOV(word_3a172, ax));	// 19795 mov     word_3A172, ax ;~ 0B19:0A92
cs=0xb19;eip=0x000a95; 	X(MOV(word_3a174, dx));	// 19796 mov     word_3A174, dx ;~ 0B19:0A95
cs=0xb19;eip=0x000a99; 	X(PUSH(word_3a176));	// 19797 push    word_3A176 ;~ 0B19:0A99
cs=0xb19;eip=0x000a9d; 	T(MOV(ax, word_2d08c));	// 19798 mov     ax, word_2D08C ;~ 0B19:0A9D
cs=0xb19;eip=0x000aa0; 	T(SUB(ax, word_35417));	// 19799 sub     ax, word_35417 ;~ 0B19:0AA0
cs=0xb19;eip=0x000aa4; 	T(AND(ax, 0x0FFC0));	// 19800 and     ax, 0FFC0h ;~ 0B19:0AA4
cs=0xb19;eip=0x000aa7; 	X(PUSH(ax));	// 19801 push    ax ;~ 0B19:0AA7
cs=0xb19;eip=0x000aa8; 	R(CALLF(sub_2046b,0));	// 19802 call    sub_2046B ;~ 0B19:0AA8
cs=0xb19;eip=0x000aad; 	T(ADD(sp, 4));	// 19803 add     sp, 4 ;~ 0B19:0AAD
cs=0xb19;eip=0x000ab0; 	T(MOV(ax, word_352a2));	// 19804 mov     ax, word_352A2 ;~ 0B19:0AB0
cs=0xb19;eip=0x000ab3; 	T(MOV(cx, ax));	// 19805 mov     cx, ax ;~ 0B19:0AB3
cs=0xb19;eip=0x000ab5; 	T(SHL(ax, 1));	// 19806 shl     ax, 1 ;~ 0B19:0AB5
cs=0xb19;eip=0x000ab7; 	T(ADD(ax, cx));	// 19807 add     ax, cx ;~ 0B19:0AB7
cs=0xb19;eip=0x000ab9; 	T(SHL(ax, 1));	// 19808 shl     ax, 1 ;~ 0B19:0AB9
cs=0xb19;eip=0x000abb; 	T(SHL(ax, 1));	// 19809 shl     ax, 1 ;~ 0B19:0ABB
cs=0xb19;eip=0x000abd; 	T(CWD);	// 19810 cwd ;~ 0B19:0ABD
cs=0xb19;eip=0x000abe; 	T(MOV(cx, word_2d07e));	// 19811 mov     cx, word_2D07E ;~ 0B19:0ABE
cs=0xb19;eip=0x000ac2; 	T(IDIV2(cx));	// 19812 idiv    cx ;~ 0B19:0AC2
cs=0xb19;eip=0x000ac4; 	T(CWD);	// 19813 cwd ;~ 0B19:0AC4
cs=0xb19;eip=0x000ac5; 	X(ADD(word_3a172, ax));	// 19814 add     word_3A172, ax ;~ 0B19:0AC5
cs=0xb19;eip=0x000ac9; 	X(ADC(word_3a174, dx));	// 19815 adc     word_3A174, dx ;~ 0B19:0AC9
cs=0xb19;eip=0x000acd; 	X(MOV(word_39ece, 0));	// 19816 mov     word_39ECE, 0 ;~ 0B19:0ACD
cs=0xb19;eip=0x000ad3; 	T(MOV(ax, word_2d08e));	// 19817 mov     ax, word_2D08E ;~ 0B19:0AD3
cs=0xb19;eip=0x000ad6; 	T(OR(ax, word_2d090));	// 19818 or      ax, word_2D090 ;~ 0B19:0AD6
cs=0xb19;eip=0x000ada; 	R(JNZ(loc_1a24f));	// 19819 jnz     short loc_1A24F ;~ 0B19:0ADA
cs=0xb19;eip=0x000adc; 	R(JMP(loc_1a3e7));	// 19820 jmp     loc_1A3E7 ;~ 0B19:0ADC
loc_1a24f:
	// 5453 
cs=0xb19;eip=0x000adf; 	T(MOV(ax, word_352a0));	// 19824 mov     ax, word_352A0 ;~ 0B19:0ADF
cs=0xb19;eip=0x000ae2; 	T(CWD);	// 19825 cwd ;~ 0B19:0AE2
cs=0xb19;eip=0x000ae3; 	T(MOV(cx, word_2d07e));	// 19826 mov     cx, word_2D07E ;~ 0B19:0AE3
cs=0xb19;eip=0x000ae7; 	T(IDIV2(cx));	// 19827 idiv    cx ;~ 0B19:0AE7
cs=0xb19;eip=0x000ae9; 	T(CWD);	// 19828 cwd ;~ 0B19:0AE9
cs=0xb19;eip=0x000aea; 	T(XOR(ax, dx));	// 19829 xor     ax, dx ;~ 0B19:0AEA
cs=0xb19;eip=0x000aec; 	T(SUB(ax, dx));	// 19830 sub     ax, dx ;~ 0B19:0AEC
cs=0xb19;eip=0x000aee; 	T(MOV(cx, 4));	// 19831 mov     cx, 4 ;~ 0B19:0AEE
cs=0xb19;eip=0x000af1; 	T(SAR(ax, cl));	// 19832 sar     ax, cl ;~ 0B19:0AF1
cs=0xb19;eip=0x000af3; 	T(XOR(ax, dx));	// 19833 xor     ax, dx ;~ 0B19:0AF3
cs=0xb19;eip=0x000af5; 	T(SUB(ax, dx));	// 19834 sub     ax, dx ;~ 0B19:0AF5
cs=0xb19;eip=0x000af7; 	X(MOV(word_39ece, ax));	// 19835 mov     word_39ECE, ax ;~ 0B19:0AF7
cs=0xb19;eip=0x000afa; 	X(ADD(word_3a172, 0x30));	// 19836 add     word_3A172, 30h ; '0' ;~ 0B19:0AFA
cs=0xb19;eip=0x000aff; 	X(ADC(word_3a174, 0));	// 19837 adc     word_3A174, 0 ;~ 0B19:0AFF
cs=0xb19;eip=0x000b04; 	T(CMP(byte_2d0e1, 0));	// 19838 cmp     byte_2D0E1, 0 ;~ 0B19:0B04
cs=0xb19;eip=0x000b09; 	R(JZ(loc_1a27e));	// 19839 jz      short loc_1A27E ;~ 0B19:0B09
cs=0xb19;eip=0x000b0b; 	R(JMP(loc_1a288));	// 19840 jmp     loc_1A288 ;~ 0B19:0B0B
loc_1a27e:
	// 5454 
cs=0xb19;eip=0x000b0e; 	T(CMP(byte_2d0e2, 0));	// 19844 cmp     byte_2D0E2, 0 ;~ 0B19:0B0E
cs=0xb19;eip=0x000b13; 	R(JNZ(loc_1a288));	// 19845 jnz     short loc_1A288 ;~ 0B19:0B13
cs=0xb19;eip=0x000b15; 	R(JMP(loc_1a2bb));	// 19846 jmp     loc_1A2BB ;~ 0B19:0B15
loc_1a288:
	// 5455 
cs=0xb19;eip=0x000b18; 	X(ADD(word_3a172, 0x280));	// 19851 add     word_3A172, 280h ;~ 0B19:0B18
cs=0xb19;eip=0x000b1e; 	X(ADC(word_3a174, 0));	// 19852 adc     word_3A174, 0 ;~ 0B19:0B1E
cs=0xb19;eip=0x000b23; 	T(CMP(word_37ab7, 0));	// 19853 cmp     word_37AB7, 0 ;~ 0B19:0B23
cs=0xb19;eip=0x000b28; 	R(JNZ(loc_1a29d));	// 19854 jnz     short loc_1A29D ;~ 0B19:0B28
cs=0xb19;eip=0x000b2a; 	R(JMP(loc_1a2a7));	// 19855 jmp     loc_1A2A7 ;~ 0B19:0B2A
loc_1a29d:
	// 5456 
cs=0xb19;eip=0x000b2d; 	X(ADD(word_3a172, 0x28));	// 19859 add     word_3A172, 28h ; '(' ;~ 0B19:0B2D
cs=0xb19;eip=0x000b32; 	X(ADC(word_3a174, 0));	// 19860 adc     word_3A174, 0 ;~ 0B19:0B32
loc_1a2a7:
	// 5457 
cs=0xb19;eip=0x000b37; 	T(CMP(word_37ab5, 0));	// 19863 cmp     word_37AB5, 0 ;~ 0B19:0B37
cs=0xb19;eip=0x000b3c; 	R(JNZ(loc_1a2b1));	// 19864 jnz     short loc_1A2B1 ;~ 0B19:0B3C
cs=0xb19;eip=0x000b3e; 	R(JMP(loc_1a2bb));	// 19865 jmp     loc_1A2BB ;~ 0B19:0B3E
loc_1a2b1:
	// 5458 
cs=0xb19;eip=0x000b41; 	X(ADD(word_3a172, 0x14));	// 19869 add     word_3A172, 14h ;~ 0B19:0B41
cs=0xb19;eip=0x000b46; 	X(ADC(word_3a174, 0));	// 19870 adc     word_3A174, 0 ;~ 0B19:0B46
loc_1a2bb:
	// 5459 
cs=0xb19;eip=0x000b4b; 	T(CMP(byte_2d0e0, 0));	// 19874 cmp     byte_2D0E0, 0 ;~ 0B19:0B4B
cs=0xb19;eip=0x000b50; 	R(JNZ(loc_1a2c5));	// 19875 jnz     short loc_1A2C5 ;~ 0B19:0B50
cs=0xb19;eip=0x000b52; 	R(JMP(loc_1a354));	// 19876 jmp     loc_1A354 ;~ 0B19:0B52
loc_1a2c5:
	// 5460 
cs=0xb19;eip=0x000b55; 	T(TEST(*(db*)(((db*)&word_352c6)), 0x18));	// 19880 test    byte ptr word_352C6, 18h ;~ 0B19:0B55
cs=0xb19;eip=0x000b5a; 	R(JZ(loc_1a2cf));	// 19881 jz      short loc_1A2CF ;~ 0B19:0B5A
cs=0xb19;eip=0x000b5c; 	R(JMP(loc_1a309));	// 19882 jmp     loc_1A309 ;~ 0B19:0B5C
loc_1a2cf:
	// 5461 
cs=0xb19;eip=0x000b5f; 	T(MOV(al, byte_37519));	// 19886 mov     al, byte_37519 ;~ 0B19:0B5F
cs=0xb19;eip=0x000b62; 	T(SUB(ah, ah));	// 19887 sub     ah, ah ;~ 0B19:0B62
cs=0xb19;eip=0x000b64; 	T(SUB(cx, cx));	// 19888 sub     cx, cx ;~ 0B19:0B64
cs=0xb19;eip=0x000b66; 	X(PUSH(cx));	// 19889 push    cx ;~ 0B19:0B66
cs=0xb19;eip=0x000b67; 	X(PUSH(ax));	// 19890 push    ax ;~ 0B19:0B67
cs=0xb19;eip=0x000b68; 	T(MOV(ax, word_2d066));	// 19891 mov     ax, word_2D066 ;~ 0B19:0B68
cs=0xb19;eip=0x000b6b; 	T(CWD);	// 19892 cwd ;~ 0B19:0B6B
cs=0xb19;eip=0x000b6c; 	X(PUSH(dx));	// 19893 push    dx ;~ 0B19:0B6C
cs=0xb19;eip=0x000b6d; 	X(PUSH(ax));	// 19894 push    ax ;~ 0B19:0B6D
cs=0xb19;eip=0x000b6e; 	R(CALLF(sub_29d98,0));	// 19895 call    sub_29D98 ;~ 0B19:0B6E
cs=0xb19;eip=0x000b73; 	T(MOV(cl, 2));	// 19896 mov     cl, 2 ;~ 0B19:0B73
cs=0xb19;eip=0x000b75; 	T(CMP(cl, 0));	// 19897 cmp     cl, 0 ;~ 0B19:0B75
cs=0xb19;eip=0x000b78; 	R(JNZ(loc_1a2ed));	// 19898 jnz     short loc_1A2ED ;~ 0B19:0B78
cs=0xb19;eip=0x000b7a; 	R(JMP(loc_1a2fe));	// 19899 jmp     loc_1A2FE ;~ 0B19:0B7A
loc_1a2ed:
	// 5462 
cs=0xb19;eip=0x000b7d; 	T(SHL(ax, 1));	// 19904 shl     ax, 1 ;~ 0B19:0B7D
cs=0xb19;eip=0x000b7f; 	T(RCL(dx, 1));	// 19905 rcl     dx, 1 ;~ 0B19:0B7F
cs=0xb19;eip=0x000b81; 	T(DEC(cl));	// 19906 dec     cl ;~ 0B19:0B81
cs=0xb19;eip=0x000b83; 	T(CMP(cl, 0));	// 19907 cmp     cl, 0 ;~ 0B19:0B83
cs=0xb19;eip=0x000b86; 	R(JNZ(loc_1a2fb));	// 19908 jnz     short loc_1A2FB ;~ 0B19:0B86
cs=0xb19;eip=0x000b88; 	R(JMP(loc_1a2fe));	// 19909 jmp     loc_1A2FE ;~ 0B19:0B88
loc_1a2fb:
	// 5463 
cs=0xb19;eip=0x000b8b; 	R(JMP(loc_1a2ed));	// 19913 jmp     loc_1A2ED ;~ 0B19:0B8B
loc_1a2fe:
	// 5464 
cs=0xb19;eip=0x000b8e; 	X(ADD(word_3a172, ax));	// 19918 add     word_3A172, ax ;~ 0B19:0B8E
cs=0xb19;eip=0x000b92; 	X(ADC(word_3a174, dx));	// 19919 adc     word_3A174, dx ;~ 0B19:0B92
cs=0xb19;eip=0x000b96; 	R(JMP(loc_1a354));	// 19920 jmp     loc_1A354 ;~ 0B19:0B96
loc_1a309:
	// 5465 
cs=0xb19;eip=0x000b99; 	T(MOV(al, *(db*)(((db*)&word_352c6))));	// 19924 mov     al, byte ptr word_352C6 ;~ 0B19:0B99
cs=0xb19;eip=0x000b9c; 	T(AND(al, 0x18));	// 19925 and     al, 18h ;~ 0B19:0B9C
cs=0xb19;eip=0x000b9e; 	T(CMP(al, 0x18));	// 19926 cmp     al, 18h ;~ 0B19:0B9E
cs=0xb19;eip=0x000ba0; 	R(JZ(loc_1a315));	// 19927 jz      short loc_1A315 ;~ 0B19:0BA0
cs=0xb19;eip=0x000ba2; 	R(JMP(loc_1a334));	// 19928 jmp     loc_1A334 ;~ 0B19:0BA2
loc_1a315:
	// 5466 
cs=0xb19;eip=0x000ba5; 	T(MOV(al, byte_37519));	// 19932 mov     al, byte_37519 ;~ 0B19:0BA5
cs=0xb19;eip=0x000ba8; 	T(SUB(ah, ah));	// 19933 sub     ah, ah ;~ 0B19:0BA8
cs=0xb19;eip=0x000baa; 	T(SUB(cx, cx));	// 19934 sub     cx, cx ;~ 0B19:0BAA
cs=0xb19;eip=0x000bac; 	X(PUSH(cx));	// 19935 push    cx ;~ 0B19:0BAC
cs=0xb19;eip=0x000bad; 	X(PUSH(ax));	// 19936 push    ax ;~ 0B19:0BAD
cs=0xb19;eip=0x000bae; 	T(MOV(ax, word_2d066));	// 19937 mov     ax, word_2D066 ;~ 0B19:0BAE
cs=0xb19;eip=0x000bb1; 	T(CWD);	// 19938 cwd ;~ 0B19:0BB1
cs=0xb19;eip=0x000bb2; 	X(PUSH(dx));	// 19939 push    dx ;~ 0B19:0BB2
cs=0xb19;eip=0x000bb3; 	X(PUSH(ax));	// 19940 push    ax ;~ 0B19:0BB3
cs=0xb19;eip=0x000bb4; 	R(CALLF(sub_29d98,0));	// 19941 call    sub_29D98 ;~ 0B19:0BB4
cs=0xb19;eip=0x000bb9; 	X(ADD(word_3a172, ax));	// 19942 add     word_3A172, ax ;~ 0B19:0BB9
cs=0xb19;eip=0x000bbd; 	X(ADC(word_3a174, dx));	// 19943 adc     word_3A174, dx ;~ 0B19:0BBD
cs=0xb19;eip=0x000bc1; 	R(JMP(loc_1a354));	// 19944 jmp     loc_1A354 ;~ 0B19:0BC1
loc_1a334:
	// 5467 
cs=0xb19;eip=0x000bc4; 	T(MOV(al, byte_37519));	// 19948 mov     al, byte_37519 ;~ 0B19:0BC4
cs=0xb19;eip=0x000bc7; 	T(SUB(ah, ah));	// 19949 sub     ah, ah ;~ 0B19:0BC7
cs=0xb19;eip=0x000bc9; 	T(SUB(cx, cx));	// 19950 sub     cx, cx ;~ 0B19:0BC9
cs=0xb19;eip=0x000bcb; 	X(PUSH(cx));	// 19951 push    cx ;~ 0B19:0BCB
cs=0xb19;eip=0x000bcc; 	X(PUSH(ax));	// 19952 push    ax ;~ 0B19:0BCC
cs=0xb19;eip=0x000bcd; 	T(MOV(ax, word_2d066));	// 19953 mov     ax, word_2D066 ;~ 0B19:0BCD
cs=0xb19;eip=0x000bd0; 	T(CWD);	// 19954 cwd ;~ 0B19:0BD0
cs=0xb19;eip=0x000bd1; 	X(PUSH(dx));	// 19955 push    dx ;~ 0B19:0BD1
cs=0xb19;eip=0x000bd2; 	X(PUSH(ax));	// 19956 push    ax ;~ 0B19:0BD2
cs=0xb19;eip=0x000bd3; 	R(CALLF(sub_29d98,0));	// 19957 call    sub_29D98 ;~ 0B19:0BD3
cs=0xb19;eip=0x000bd8; 	T(SHL(ax, 1));	// 19958 shl     ax, 1 ;~ 0B19:0BD8
cs=0xb19;eip=0x000bda; 	T(RCL(dx, 1));	// 19959 rcl     dx, 1 ;~ 0B19:0BDA
cs=0xb19;eip=0x000bdc; 	X(ADD(word_3a172, ax));	// 19960 add     word_3A172, ax ;~ 0B19:0BDC
cs=0xb19;eip=0x000be0; 	X(ADC(word_3a174, dx));	// 19961 adc     word_3A174, dx ;~ 0B19:0BE0
loc_1a354:
	// 5468 
cs=0xb19;eip=0x000be4; 	T(CMP(byte_2d0e0, 0));	// 19965 cmp     byte_2D0E0, 0 ;~ 0B19:0BE4
cs=0xb19;eip=0x000be9; 	R(JNZ(loc_1a35e));	// 19966 jnz     short loc_1A35E ;~ 0B19:0BE9
cs=0xb19;eip=0x000beb; 	R(JMP(loc_1a3e7));	// 19967 jmp     loc_1A3E7 ;~ 0B19:0BEB
loc_1a35e:
	// 5469 
cs=0xb19;eip=0x000bee; 	T(MOV(al, byte_378db));	// 19971 mov     al, byte_378DB ;~ 0B19:0BEE
cs=0xb19;eip=0x000bf1; 	T(SUB(ah, ah));	// 19972 sub     ah, ah ;~ 0B19:0BF1
cs=0xb19;eip=0x000bf3; 	R(JMP(loc_1a3bc));	// 19973 jmp     loc_1A3BC ;~ 0B19:0BF3
loc_1a366:
	// 5470 
cs=0xb19;eip=0x000bf6; 	T(MOV(ax, 0x0A0));	// 19977 mov     ax, 0A0h ; '†' ;~ 0B19:0BF6
cs=0xb19;eip=0x000bf9; 	X(MUL1_2(word_2d0d6));	// 19978 mul     word_2D0D6 ;~ 0B19:0BF9
cs=0xb19;eip=0x000bfd; 	T(SUB(dx, dx));	// 19979 sub     dx, dx ;~ 0B19:0BFD
cs=0xb19;eip=0x000bff; 	X(ADD(word_3a172, ax));	// 19980 add     word_3A172, ax ;~ 0B19:0BFF
cs=0xb19;eip=0x000c03; 	X(ADC(word_3a174, dx));	// 19981 adc     word_3A174, dx ;~ 0B19:0C03
cs=0xb19;eip=0x000c07; 	R(JMP(loc_1a3e7));	// 19982 jmp     loc_1A3E7 ;~ 0B19:0C07
loc_1a37a:
	// 5471 
cs=0xb19;eip=0x000c0a; 	T(MOV(ax, 0x50));	// 19987 mov     ax, 50h ; 'P' ;~ 0B19:0C0A
cs=0xb19;eip=0x000c0d; 	X(MUL1_2(word_2d0d6));	// 19988 mul     word_2D0D6 ;~ 0B19:0C0D
cs=0xb19;eip=0x000c11; 	T(SUB(dx, dx));	// 19989 sub     dx, dx ;~ 0B19:0C11
cs=0xb19;eip=0x000c13; 	X(ADD(word_3a172, ax));	// 19990 add     word_3A172, ax ;~ 0B19:0C13
cs=0xb19;eip=0x000c17; 	X(ADC(word_3a174, dx));	// 19991 adc     word_3A174, dx ;~ 0B19:0C17
cs=0xb19;eip=0x000c1b; 	R(JMP(loc_1a3e7));	// 19992 jmp     loc_1A3E7 ;~ 0B19:0C1B
loc_1a38e:
	// 5472 
cs=0xb19;eip=0x000c1e; 	T(MOV(ax, 0x1E));	// 19996 mov     ax, 1Eh ;~ 0B19:0C1E
cs=0xb19;eip=0x000c21; 	X(MUL1_2(word_2d0d6));	// 19997 mul     word_2D0D6 ;~ 0B19:0C21
cs=0xb19;eip=0x000c25; 	T(SUB(dx, dx));	// 19998 sub     dx, dx ;~ 0B19:0C25
cs=0xb19;eip=0x000c27; 	X(ADD(word_3a172, ax));	// 19999 add     word_3A172, ax ;~ 0B19:0C27
cs=0xb19;eip=0x000c2b; 	X(ADC(word_3a174, dx));	// 20000 adc     word_3A174, dx ;~ 0B19:0C2B
cs=0xb19;eip=0x000c2f; 	R(JMP(loc_1a3e7));	// 20001 jmp     loc_1A3E7 ;~ 0B19:0C2F
loc_1a3a2:
	// 5473 
cs=0xb19;eip=0x000c32; 	T(MOV(ax, 0x37));	// 20005 mov     ax, 37h ; '7' ;~ 0B19:0C32
cs=0xb19;eip=0x000c35; 	X(MUL1_2(word_2d0d6));	// 20006 mul     word_2D0D6 ;~ 0B19:0C35
cs=0xb19;eip=0x000c39; 	T(SUB(dx, dx));	// 20007 sub     dx, dx ;~ 0B19:0C39
cs=0xb19;eip=0x000c3b; 	X(ADD(word_3a172, ax));	// 20008 add     word_3A172, ax ;~ 0B19:0C3B
cs=0xb19;eip=0x000c3f; 	X(ADC(word_3a174, dx));	// 20009 adc     word_3A174, dx ;~ 0B19:0C3F
cs=0xb19;eip=0x000c43; 	R(JMP(loc_1a3e7));	// 20010 jmp     loc_1A3E7 ;~ 0B19:0C43
loc_1a3b6:
	// 5474 
cs=0xb19;eip=0x000c46; 	R(JMP(loc_1a3e7));	// 20014 jmp     loc_1A3E7 ;~ 0B19:0C46
ret_b19_c49:
	// 5475 
cs=0xb19;eip=0x000c49; 	R(JMP(loc_1a3e7));	// 20016 jmp     loc_1A3E7 ;~ 0B19:0C49
loc_1a3bc:
	// 5476 
cs=0xb19;eip=0x000c4c; 	T(CMP(ax, 0x0E));	// 20020 cmp     ax, 0Eh ;~ 0B19:0C4C
cs=0xb19;eip=0x000c4f; 	R(JNZ(loc_1a3c4));	// 20021 jnz     short loc_1A3C4 ;~ 0B19:0C4F
cs=0xb19;eip=0x000c51; 	R(JMP(loc_1a366));	// 20022 jmp     loc_1A366 ;~ 0B19:0C51
loc_1a3c4:
	// 5477 
cs=0xb19;eip=0x000c54; 	T(CMP(ax, 0x0F));	// 20026 cmp     ax, 0Fh ;~ 0B19:0C54
cs=0xb19;eip=0x000c57; 	R(JNZ(loc_1a3cc));	// 20027 jnz     short loc_1A3CC ;~ 0B19:0C57
cs=0xb19;eip=0x000c59; 	R(JMP(loc_1a37a));	// 20028 jmp     loc_1A37A ;~ 0B19:0C59
loc_1a3cc:
	// 5478 
cs=0xb19;eip=0x000c5c; 	T(CMP(ax, 0x11));	// 20032 cmp     ax, 11h ;~ 0B19:0C5C
cs=0xb19;eip=0x000c5f; 	R(JNZ(loc_1a3d4));	// 20033 jnz     short loc_1A3D4 ;~ 0B19:0C5F
cs=0xb19;eip=0x000c61; 	R(JMP(loc_1a38e));	// 20034 jmp     loc_1A38E ;~ 0B19:0C61
loc_1a3d4:
	// 5479 
cs=0xb19;eip=0x000c64; 	T(CMP(ax, 0x12));	// 20038 cmp     ax, 12h ;~ 0B19:0C64
cs=0xb19;eip=0x000c67; 	R(JNZ(loc_1a3dc));	// 20039 jnz     short loc_1A3DC ;~ 0B19:0C67
cs=0xb19;eip=0x000c69; 	R(JMP(loc_1a3a2));	// 20040 jmp     loc_1A3A2 ;~ 0B19:0C69
loc_1a3dc:
	// 5480 
cs=0xb19;eip=0x000c6c; 	T(CMP(ax, 0x0FF));	// 20044 cmp     ax, 0FFh ;~ 0B19:0C6C
cs=0xb19;eip=0x000c6f; 	R(JNZ(loc_1a3e4));	// 20045 jnz     short loc_1A3E4 ;~ 0B19:0C6F
cs=0xb19;eip=0x000c71; 	R(JMP(loc_1a37a));	// 20046 jmp     loc_1A37A ;~ 0B19:0C71
loc_1a3e4:
	// 5481 
cs=0xb19;eip=0x000c74; 	R(JMP(loc_1a3b6));	// 20050 jmp     loc_1A3B6 ;~ 0B19:0C74
loc_1a3e7:
	// 5482 
cs=0xb19;eip=0x000c77; 	T(CMP(byte_37516, 0));	// 20055 cmp     byte_37516, 0 ;~ 0B19:0C77
cs=0xb19;eip=0x000c7c; 	R(JNZ(loc_1a3f1));	// 20056 jnz     short loc_1A3F1 ;~ 0B19:0C7C
cs=0xb19;eip=0x000c7e; 	R(JMP(loc_1a432));	// 20057 jmp     loc_1A432 ;~ 0B19:0C7E
loc_1a3f1:
	// 5483 
cs=0xb19;eip=0x000c81; 	T(CMP(byte_37546, 0));	// 20061 cmp     byte_37546, 0 ;~ 0B19:0C81
cs=0xb19;eip=0x000c86; 	R(JNZ(loc_1a3fb));	// 20062 jnz     short loc_1A3FB ;~ 0B19:0C86
cs=0xb19;eip=0x000c88; 	R(JMP(loc_1a432));	// 20063 jmp     loc_1A432 ;~ 0B19:0C88
loc_1a3fb:
	// 5484 
cs=0xb19;eip=0x000c8b; 	T(MOV(ax, word_3a3e8));	// 20067 mov     ax, word_3A3E8 ;~ 0B19:0C8B
cs=0xb19;eip=0x000c8e; 	T(SUB(ax, word_3a388));	// 20068 sub     ax, word_3A388 ;~ 0B19:0C8E
cs=0xb19;eip=0x000c92; 	T(SUB(ax, word_3a172));	// 20069 sub     ax, word_3A172 ;~ 0B19:0C92
cs=0xb19;eip=0x000c96; 	X(MOV(word_2d0ce, ax));	// 20070 mov     word_2D0CE, ax ;~ 0B19:0C96
cs=0xb19;eip=0x000c99; 	T(CMP(ax, 0));	// 20071 cmp     ax, 0 ;~ 0B19:0C99
cs=0xb19;eip=0x000c9c; 	R(JG(loc_1a411));	// 20072 jg      short loc_1A411 ;~ 0B19:0C9C
cs=0xb19;eip=0x000c9e; 	R(JMP(loc_1a41b));	// 20073 jmp     loc_1A41B ;~ 0B19:0C9E
loc_1a411:
	// 5485 
cs=0xb19;eip=0x000ca1; 	X(DEC(byte_37516));	// 20077 dec     byte_37516 ;~ 0B19:0CA1
cs=0xb19;eip=0x000ca5; 	R(JMP(loc_1a0cf));	// 20078 jmp     loc_1A0CF ;~ 0B19:0CA5
ret_b19_ca8:
	// 5486 
cs=0xb19;eip=0x000ca8; 	R(JMP(loc_1a432));	// 20080 jmp     loc_1A432 ;~ 0B19:0CA8
loc_1a41b:
	// 5487 
cs=0xb19;eip=0x000cab; 	T(CMP(byte_37516, 0x1D));	// 20084 cmp     byte_37516, 1Dh ;~ 0B19:0CAB
cs=0xb19;eip=0x000cb0; 	R(JC(loc_1a425));	// 20085 jb      short loc_1A425 ;~ 0B19:0CB0
cs=0xb19;eip=0x000cb2; 	R(JMP(loc_1a42a));	// 20086 jmp     loc_1A42A ;~ 0B19:0CB2
loc_1a425:
	// 5488 
cs=0xb19;eip=0x000cb5; 	X(ADD(byte_37516, 2));	// 20090 add     byte_37516, 2 ;~ 0B19:0CB5
loc_1a42a:
	// 5489 
cs=0xb19;eip=0x000cba; 	X(MOV(byte_37546, 0));	// 20093 mov     byte_37546, 0 ;~ 0B19:0CBA
cs=0xb19;eip=0x000cbf; 	R(JMP(loc_1a0cf));	// 20094 jmp     loc_1A0CF ;~ 0B19:0CBF
loc_1a432:
	// 5490 
cs=0xb19;eip=0x000cc2; 	X(MOV(byte_37546, 0));	// 20099 mov     byte_37546, 0 ;~ 0B19:0CC2
cs=0xb19;eip=0x000cc7; 	T(CMP(byte_2d0e0, 0));	// 20100 cmp     byte_2D0E0, 0 ;~ 0B19:0CC7
cs=0xb19;eip=0x000ccc; 	R(JNZ(loc_1a441));	// 20101 jnz     short loc_1A441 ;~ 0B19:0CCC
cs=0xb19;eip=0x000cce; 	R(JMP(loc_1a48a));	// 20102 jmp     loc_1A48A ;~ 0B19:0CCE
loc_1a441:
	// 5491 
cs=0xb19;eip=0x000cd1; 	T(CMP(word_2d0d6, 0));	// 20106 cmp     word_2D0D6, 0 ;~ 0B19:0CD1
cs=0xb19;eip=0x000cd6; 	R(JNZ(loc_1a44b));	// 20107 jnz     short loc_1A44B ;~ 0B19:0CD6
cs=0xb19;eip=0x000cd8; 	R(JMP(loc_1a48a));	// 20108 jmp     loc_1A48A ;~ 0B19:0CD8
loc_1a44b:
	// 5492 
cs=0xb19;eip=0x000cdb; 	T(SUB(ax, ax));	// 20112 sub     ax, ax ;~ 0B19:0CDB
cs=0xb19;eip=0x000cdd; 	X(PUSH(ax));	// 20113 push    ax ;~ 0B19:0CDD
cs=0xb19;eip=0x000cde; 	X(PUSH(word_2d0d6));	// 20114 push    word_2D0D6 ;~ 0B19:0CDE
cs=0xb19;eip=0x000ce2; 	T(MOV(ax, word_2d050));	// 20115 mov     ax, word_2D050 ;~ 0B19:0CE2
cs=0xb19;eip=0x000ce5; 	T(CWD);	// 20116 cwd ;~ 0B19:0CE5
cs=0xb19;eip=0x000ce6; 	X(PUSH(dx));	// 20117 push    dx ;~ 0B19:0CE6
cs=0xb19;eip=0x000ce7; 	X(PUSH(ax));	// 20118 push    ax ;~ 0B19:0CE7
cs=0xb19;eip=0x000ce8; 	R(CALLF(sub_29d98,0));	// 20119 call    sub_29D98 ;~ 0B19:0CE8
cs=0xb19;eip=0x000ced; 	X(PUSH(dx));	// 20120 push    dx ;~ 0B19:0CED
cs=0xb19;eip=0x000cee; 	X(PUSH(ax));	// 20121 push    ax ;~ 0B19:0CEE
cs=0xb19;eip=0x000cef; 	T(MOV(ax, word_353d4));	// 20122 mov     ax, word_353D4 ;~ 0B19:0CEF
cs=0xb19;eip=0x000cf2; 	T(CWD);	// 20123 cwd ;~ 0B19:0CF2
cs=0xb19;eip=0x000cf3; 	X(PUSH(dx));	// 20124 push    dx ;~ 0B19:0CF3
cs=0xb19;eip=0x000cf4; 	X(PUSH(ax));	// 20125 push    ax ;~ 0B19:0CF4
cs=0xb19;eip=0x000cf5; 	T(MOV(ax, word_2d0a6));	// 20126 mov     ax, word_2D0A6 ;~ 0B19:0CF5
cs=0xb19;eip=0x000cf8; 	T(MOV(dx, word_2d0a8));	// 20127 mov     dx, word_2D0A8 ;~ 0B19:0CF8
cs=0xb19;eip=0x000cfc; 	T(SUB(ax, word_38cea));	// 20128 sub     ax, word_38CEA ;~ 0B19:0CFC
cs=0xb19;eip=0x000d00; 	T(SBB(dx, word_38cec));	// 20129 sbb     dx, word_38CEC ;~ 0B19:0D00
cs=0xb19;eip=0x000d04; 	X(PUSH(dx));	// 20130 push    dx ;~ 0B19:0D04
cs=0xb19;eip=0x000d05; 	X(PUSH(ax));	// 20131 push    ax ;~ 0B19:0D05
cs=0xb19;eip=0x000d06; 	R(CALLF(sub_29d98,0));	// 20132 call    sub_29D98 ;~ 0B19:0D06
cs=0xb19;eip=0x000d0b; 	X(PUSH(dx));	// 20133 push    dx ;~ 0B19:0D0B
cs=0xb19;eip=0x000d0c; 	X(PUSH(ax));	// 20134 push    ax ;~ 0B19:0D0C
cs=0xb19;eip=0x000d0d; 	R(CALLF(sub_29cfc,0));	// 20135 call    sub_29CFC ;~ 0B19:0D0D
cs=0xb19;eip=0x000d12; 	X(ADD(word_3a172, ax));	// 20136 add     word_3A172, ax ;~ 0B19:0D12
cs=0xb19;eip=0x000d16; 	X(ADC(word_3a174, dx));	// 20137 adc     word_3A174, dx ;~ 0B19:0D16
loc_1a48a:
	// 5493 
cs=0xb19;eip=0x000d1a; 	T(CMP(byte_37517, 0));	// 20141 cmp     byte_37517, 0 ;~ 0B19:0D1A
cs=0xb19;eip=0x000d1f; 	R(JZ(loc_1a494));	// 20142 jz      short loc_1A494 ;~ 0B19:0D1F
cs=0xb19;eip=0x000d21; 	R(JMP(loc_1a4ac));	// 20143 jmp     loc_1A4AC ;~ 0B19:0D21
loc_1a494:
	// 5494 
cs=0xb19;eip=0x000d24; 	T(MOV(ax, word_2d08e));	// 20147 mov     ax, word_2D08E ;~ 0B19:0D24
cs=0xb19;eip=0x000d27; 	T(OR(ax, word_2d090));	// 20148 or      ax, word_2D090 ;~ 0B19:0D27
cs=0xb19;eip=0x000d2b; 	R(JZ(loc_1a4a0));	// 20149 jz      short loc_1A4A0 ;~ 0B19:0D2B
cs=0xb19;eip=0x000d2d; 	R(JMP(loc_1a4ac));	// 20150 jmp     loc_1A4AC ;~ 0B19:0D2D
loc_1a4a0:
	// 5495 
cs=0xb19;eip=0x000d30; 	X(MOV(word_2d08e, 0x0FFFF));	// 20154 mov     word_2D08E, 0FFFFh ;~ 0B19:0D30
cs=0xb19;eip=0x000d36; 	X(MOV(word_2d090, 0x0FFFF));	// 20155 mov     word_2D090, 0FFFFh ;~ 0B19:0D36
loc_1a4ac:
	// 5496 
cs=0xb19;eip=0x000d3c; 	T(CMP(byte_37517, 1));	// 20159 cmp     byte_37517, 1 ;~ 0B19:0D3C
cs=0xb19;eip=0x000d41; 	R(JNZ(loc_1a4b6));	// 20160 jnz     short loc_1A4B6 ;~ 0B19:0D41
cs=0xb19;eip=0x000d43; 	R(JMP(loc_1a4c0));	// 20161 jmp     loc_1A4C0 ;~ 0B19:0D43
loc_1a4b6:
	// 5497 
cs=0xb19;eip=0x000d46; 	T(CMP(byte_2d0e0, 0));	// 20165 cmp     byte_2D0E0, 0 ;~ 0B19:0D46
cs=0xb19;eip=0x000d4b; 	R(JZ(loc_1a4c0));	// 20166 jz      short loc_1A4C0 ;~ 0B19:0D4B
cs=0xb19;eip=0x000d4d; 	R(JMP(loc_1a52f));	// 20167 jmp     loc_1A52F ;~ 0B19:0D4D
loc_1a4c0:
	// 5498 
cs=0xb19;eip=0x000d50; 	T(MOV(ax, word_3a172));	// 20172 mov     ax, word_3A172 ;~ 0B19:0D50
cs=0xb19;eip=0x000d53; 	T(MOV(dx, word_3a174));	// 20173 mov     dx, word_3A174 ;~ 0B19:0D53
cs=0xb19;eip=0x000d57; 	T(NEG(ax));	// 20174 neg     ax ;~ 0B19:0D57
cs=0xb19;eip=0x000d59; 	T(ADC(dx, 0));	// 20175 adc     dx, 0 ;~ 0B19:0D59
cs=0xb19;eip=0x000d5c; 	T(NEG(dx));	// 20176 neg     dx ;~ 0B19:0D5C
cs=0xb19;eip=0x000d5e; 	X(MOV(word_2d0ce, ax));	// 20177 mov     word_2D0CE, ax ;~ 0B19:0D5E
cs=0xb19;eip=0x000d61; 	T(MOV(ax, word_3a3e8));	// 20178 mov     ax, word_3A3E8 ;~ 0B19:0D61
cs=0xb19;eip=0x000d64; 	T(OR(ax, word_3a3ea));	// 20179 or      ax, word_3A3EA ;~ 0B19:0D64
cs=0xb19;eip=0x000d68; 	R(JNZ(loc_1a4dd));	// 20180 jnz     short loc_1A4DD ;~ 0B19:0D68
cs=0xb19;eip=0x000d6a; 	R(JMP(loc_1a52c));	// 20181 jmp     loc_1A52C ;~ 0B19:0D6A
loc_1a4dd:
	// 5499 
cs=0xb19;eip=0x000d6d; 	T(CMP(byte_37517, 1));	// 20185 cmp     byte_37517, 1 ;~ 0B19:0D6D
cs=0xb19;eip=0x000d72; 	R(JZ(loc_1a4e7));	// 20186 jz      short loc_1A4E7 ;~ 0B19:0D72
cs=0xb19;eip=0x000d74; 	R(JMP(loc_1a50a));	// 20187 jmp     loc_1A50A ;~ 0B19:0D74
loc_1a4e7:
	// 5500 
cs=0xb19;eip=0x000d77; 	T(MOV(ax, word_2d076));	// 20191 mov     ax, word_2D076 ;~ 0B19:0D77
cs=0xb19;eip=0x000d7a; 	T(CWD);	// 20192 cwd ;~ 0B19:0D7A
cs=0xb19;eip=0x000d7b; 	X(PUSH(dx));	// 20193 push    dx ;~ 0B19:0D7B
cs=0xb19;eip=0x000d7c; 	X(PUSH(ax));	// 20194 push    ax ;~ 0B19:0D7C
cs=0xb19;eip=0x000d7d; 	T(MOV(ax, word_3a3e8));	// 20195 mov     ax, word_3A3E8 ;~ 0B19:0D7D
cs=0xb19;eip=0x000d80; 	T(MOV(dx, word_3a3ea));	// 20196 mov     dx, word_3A3EA ;~ 0B19:0D80
cs=0xb19;eip=0x000d84; 	T(SUB(ax, word_3a388));	// 20197 sub     ax, word_3A388 ;~ 0B19:0D84
cs=0xb19;eip=0x000d88; 	T(SBB(dx, word_3a38a));	// 20198 sbb     dx, word_3A38A ;~ 0B19:0D88
cs=0xb19;eip=0x000d8c; 	X(PUSH(dx));	// 20199 push    dx ;~ 0B19:0D8C
cs=0xb19;eip=0x000d8d; 	X(PUSH(ax));	// 20200 push    ax ;~ 0B19:0D8D
cs=0xb19;eip=0x000d8e; 	R(CALLF(sub_29cfc,0));	// 20201 call    sub_29CFC ;~ 0B19:0D8E
cs=0xb19;eip=0x000d93; 	X(ADD(word_2d0dc, ax));	// 20202 add     word_2D0DC, ax ;~ 0B19:0D93
cs=0xb19;eip=0x000d97; 	R(JMP(loc_1a52c));	// 20203 jmp     loc_1A52C ;~ 0B19:0D97
loc_1a50a:
	// 5501 
cs=0xb19;eip=0x000d9a; 	T(MOV(ax, word_2d076));	// 20207 mov     ax, word_2D076 ;~ 0B19:0D9A
cs=0xb19;eip=0x000d9d; 	T(SHL(ax, 1));	// 20208 shl     ax, 1 ;~ 0B19:0D9D
cs=0xb19;eip=0x000d9f; 	T(CWD);	// 20209 cwd ;~ 0B19:0D9F
cs=0xb19;eip=0x000da0; 	X(PUSH(dx));	// 20210 push    dx ;~ 0B19:0DA0
cs=0xb19;eip=0x000da1; 	X(PUSH(ax));	// 20211 push    ax ;~ 0B19:0DA1
cs=0xb19;eip=0x000da2; 	T(MOV(ax, word_3a3e8));	// 20212 mov     ax, word_3A3E8 ;~ 0B19:0DA2
cs=0xb19;eip=0x000da5; 	T(MOV(dx, word_3a3ea));	// 20213 mov     dx, word_3A3EA ;~ 0B19:0DA5
cs=0xb19;eip=0x000da9; 	T(SUB(ax, word_3a388));	// 20214 sub     ax, word_3A388 ;~ 0B19:0DA9
cs=0xb19;eip=0x000dad; 	T(SBB(dx, word_3a38a));	// 20215 sbb     dx, word_3A38A ;~ 0B19:0DAD
cs=0xb19;eip=0x000db1; 	X(PUSH(dx));	// 20216 push    dx ;~ 0B19:0DB1
cs=0xb19;eip=0x000db2; 	X(PUSH(ax));	// 20217 push    ax ;~ 0B19:0DB2
cs=0xb19;eip=0x000db3; 	R(CALLF(sub_29cfc,0));	// 20218 call    sub_29CFC ;~ 0B19:0DB3
cs=0xb19;eip=0x000db8; 	X(ADD(word_2d0dc, ax));	// 20219 add     word_2D0DC, ax ;~ 0B19:0DB8
loc_1a52c:
	// 5502 
cs=0xb19;eip=0x000dbc; 	R(JMP(loc_1a58d));	// 20223 jmp     loc_1A58D ;~ 0B19:0DBC
loc_1a52f:
	// 5503 
cs=0xb19;eip=0x000dbf; 	T(MOV(ax, word_3a3e8));	// 20227 mov     ax, word_3A3E8 ;~ 0B19:0DBF
cs=0xb19;eip=0x000dc2; 	T(SUB(ax, word_3a388));	// 20228 sub     ax, word_3A388 ;~ 0B19:0DC2
cs=0xb19;eip=0x000dc6; 	T(SUB(ax, word_3a172));	// 20229 sub     ax, word_3A172 ;~ 0B19:0DC6
cs=0xb19;eip=0x000dca; 	X(MOV(word_2d0ce, ax));	// 20230 mov     word_2D0CE, ax ;~ 0B19:0DCA
cs=0xb19;eip=0x000dcd; 	T(CMP(byte_37517, 0));	// 20231 cmp     byte_37517, 0 ;~ 0B19:0DCD
cs=0xb19;eip=0x000dd2; 	R(JZ(loc_1a547));	// 20232 jz      short loc_1A547 ;~ 0B19:0DD2
cs=0xb19;eip=0x000dd4; 	R(JMP(loc_1a560));	// 20233 jmp     loc_1A560 ;~ 0B19:0DD4
loc_1a547:
	// 5504 
cs=0xb19;eip=0x000dd7; 	T(CMP(word_2d090, 0));	// 20237 cmp     word_2D090, 0 ;~ 0B19:0DD7
cs=0xb19;eip=0x000ddc; 	R(JLE(loc_1a551));	// 20238 jle     short loc_1A551 ;~ 0B19:0DDC
cs=0xb19;eip=0x000dde; 	R(JMP(loc_1a574));	// 20239 jmp     loc_1A574 ;~ 0B19:0DDE
loc_1a551:
	// 5505 
cs=0xb19;eip=0x000de1; 	R(JGE(loc_1a556));	// 20243 jge     short loc_1A556 ;~ 0B19:0DE1
cs=0xb19;eip=0x000de3; 	R(JMP(loc_1a560));	// 20244 jmp     loc_1A560 ;~ 0B19:0DE3
loc_1a556:
	// 5506 
cs=0xb19;eip=0x000de6; 	T(CMP(word_2d08e, 0));	// 20248 cmp     word_2D08E, 0 ;~ 0B19:0DE6
cs=0xb19;eip=0x000deb; 	R(JBE(loc_1a560));	// 20249 jbe     short loc_1A560 ;~ 0B19:0DEB
cs=0xb19;eip=0x000ded; 	R(JMP(loc_1a574));	// 20250 jmp     loc_1A574 ;~ 0B19:0DED
loc_1a560:
	// 5507 
cs=0xb19;eip=0x000df0; 	T(CMP(byte_37517, 0));	// 20255 cmp     byte_37517, 0 ;~ 0B19:0DF0
cs=0xb19;eip=0x000df5; 	R(JNZ(loc_1a56a));	// 20256 jnz     short loc_1A56A ;~ 0B19:0DF5
cs=0xb19;eip=0x000df7; 	R(JMP(loc_1a58d));	// 20257 jmp     loc_1A58D ;~ 0B19:0DF7
loc_1a56a:
	// 5508 
cs=0xb19;eip=0x000dfa; 	T(CMP(word_2d090, 0));	// 20261 cmp     word_2D090, 0 ;~ 0B19:0DFA
cs=0xb19;eip=0x000dff; 	R(JL(loc_1a574));	// 20262 jl      short loc_1A574 ;~ 0B19:0DFF
cs=0xb19;eip=0x000e01; 	R(JMP(loc_1a58d));	// 20263 jmp     loc_1A58D ;~ 0B19:0E01
loc_1a574:
	// 5509 
cs=0xb19;eip=0x000e04; 	T(MOV(ax, word_3a388));	// 20268 mov     ax, word_3A388 ;~ 0B19:0E04
cs=0xb19;eip=0x000e07; 	T(MOV(dx, word_3a38a));	// 20269 mov     dx, word_3A38A ;~ 0B19:0E07
cs=0xb19;eip=0x000e0b; 	T(NEG(ax));	// 20270 neg     ax ;~ 0B19:0E0B
cs=0xb19;eip=0x000e0d; 	T(ADC(dx, 0));	// 20271 adc     dx, 0 ;~ 0B19:0E0D
cs=0xb19;eip=0x000e10; 	T(NEG(dx));	// 20272 neg     dx ;~ 0B19:0E10
cs=0xb19;eip=0x000e12; 	T(SUB(ax, word_3a3e8));	// 20273 sub     ax, word_3A3E8 ;~ 0B19:0E12
cs=0xb19;eip=0x000e16; 	T(SUB(ax, word_3a172));	// 20274 sub     ax, word_3A172 ;~ 0B19:0E16
cs=0xb19;eip=0x000e1a; 	X(MOV(word_2d0ce, ax));	// 20275 mov     word_2D0CE, ax ;~ 0B19:0E1A
loc_1a58d:
	// 5510 
cs=0xb19;eip=0x000e1d; 	T(CMP(byte_2d0e0, 0));	// 20279 cmp     byte_2D0E0, 0 ;~ 0B19:0E1D
cs=0xb19;eip=0x000e22; 	R(JNZ(loc_1a597));	// 20280 jnz     short loc_1A597 ;~ 0B19:0E22
cs=0xb19;eip=0x000e24; 	R(JMP(loc_1a613));	// 20281 jmp     loc_1A613 ;~ 0B19:0E24
loc_1a597:
	// 5511 
cs=0xb19;eip=0x000e27; 	T(MOV(ax, 0x101));	// 20285 mov     ax, 101h ;~ 0B19:0E27
cs=0xb19;eip=0x000e2a; 	X(PUSH(ax));	// 20286 push    ax ;~ 0B19:0E2A
cs=0xb19;eip=0x000e2b; 	T(MOV(ax, word_2d08a));	// 20287 mov     ax, word_2D08A ;~ 0B19:0E2B
cs=0xb19;eip=0x000e2e; 	T(SUB(ax, word_2d08c));	// 20288 sub     ax, word_2D08C ;~ 0B19:0E2E
cs=0xb19;eip=0x000e32; 	X(PUSH(ax));	// 20289 push    ax ;~ 0B19:0E32
cs=0xb19;eip=0x000e33; 	R(CALLF(sub_2046b,0));	// 20290 call    sub_2046B ;~ 0B19:0E33
cs=0xb19;eip=0x000e38; 	T(ADD(sp, 4));	// 20291 add     sp, 4 ;~ 0B19:0E38
cs=0xb19;eip=0x000e3b; 	T(MOV(ax, word_352a2));	// 20292 mov     ax, word_352A2 ;~ 0B19:0E3B
cs=0xb19;eip=0x000e3e; 	T(CWD);	// 20293 cwd ;~ 0B19:0E3E
cs=0xb19;eip=0x000e3f; 	X(PUSH(dx));	// 20294 push    dx ;~ 0B19:0E3F
cs=0xb19;eip=0x000e40; 	X(PUSH(ax));	// 20295 push    ax ;~ 0B19:0E40
cs=0xb19;eip=0x000e41; 	T(MOV(ax, word_2d0ce));	// 20296 mov     ax, word_2D0CE ;~ 0B19:0E41
cs=0xb19;eip=0x000e44; 	T(CWD);	// 20297 cwd ;~ 0B19:0E44
cs=0xb19;eip=0x000e45; 	X(PUSH(dx));	// 20298 push    dx ;~ 0B19:0E45
cs=0xb19;eip=0x000e46; 	X(PUSH(ax));	// 20299 push    ax ;~ 0B19:0E46
cs=0xb19;eip=0x000e47; 	R(CALLF(sub_29d98,0));	// 20300 call    sub_29D98 ;~ 0B19:0E47
cs=0xb19;eip=0x000e4c; 	T(MOV(cl, 8));	// 20301 mov     cl, 8 ;~ 0B19:0E4C
cs=0xb19;eip=0x000e4e; 	T(CMP(cl, 0));	// 20302 cmp     cl, 0 ;~ 0B19:0E4E
cs=0xb19;eip=0x000e51; 	R(JNZ(loc_1a5c6));	// 20303 jnz     short loc_1A5C6 ;~ 0B19:0E51
cs=0xb19;eip=0x000e53; 	R(JMP(loc_1a5d7));	// 20304 jmp     loc_1A5D7 ;~ 0B19:0E53
loc_1a5c6:
	// 5512 
cs=0xb19;eip=0x000e56; 	T(SAR(dx, 1));	// 20309 sar     dx, 1 ;~ 0B19:0E56
cs=0xb19;eip=0x000e58; 	T(RCR(ax, 1));	// 20310 rcr     ax, 1 ;~ 0B19:0E58
cs=0xb19;eip=0x000e5a; 	T(DEC(cl));	// 20311 dec     cl ;~ 0B19:0E5A
cs=0xb19;eip=0x000e5c; 	T(CMP(cl, 0));	// 20312 cmp     cl, 0 ;~ 0B19:0E5C
cs=0xb19;eip=0x000e5f; 	R(JNZ(loc_1a5d4));	// 20313 jnz     short loc_1A5D4 ;~ 0B19:0E5F
cs=0xb19;eip=0x000e61; 	R(JMP(loc_1a5d7));	// 20314 jmp     loc_1A5D7 ;~ 0B19:0E61
loc_1a5d4:
	// 5513 
cs=0xb19;eip=0x000e64; 	R(JMP(loc_1a5c6));	// 20318 jmp     loc_1A5C6 ;~ 0B19:0E64
loc_1a5d7:
	// 5514 
cs=0xb19;eip=0x000e67; 	X(MOV(word_2d0ce, ax));	// 20323 mov     word_2D0CE, ax ;~ 0B19:0E67
cs=0xb19;eip=0x000e6a; 	T(MOV(ax, word_2d08a));	// 20324 mov     ax, word_2D08A ;~ 0B19:0E6A
cs=0xb19;eip=0x000e6d; 	T(SUB(ax, word_2d08c));	// 20325 sub     ax, word_2D08C ;~ 0B19:0E6D
cs=0xb19;eip=0x000e71; 	T(ADD(ax, 0x2000));	// 20326 add     ax, 2000h ;~ 0B19:0E71
cs=0xb19;eip=0x000e74; 	T(AND(ax, 0x7F00));	// 20327 and     ax, 7F00h ;~ 0B19:0E74
cs=0xb19;eip=0x000e77; 	T(CMP(ax, 0x4000));	// 20328 cmp     ax, 4000h ;~ 0B19:0E77
cs=0xb19;eip=0x000e7a; 	R(JA(loc_1a5ef));	// 20329 ja      short loc_1A5EF ;~ 0B19:0E7A
cs=0xb19;eip=0x000e7c; 	R(JMP(loc_1a613));	// 20330 jmp     loc_1A613 ;~ 0B19:0E7C
loc_1a5ef:
	// 5515 
cs=0xb19;eip=0x000e7f; 	X(SUB(word_2d0ce, 0x0F0));	// 20334 sub     word_2D0CE, 0F0h ; '' ;~ 0B19:0E7F
cs=0xb19;eip=0x000e85; 	T(CMP(word_37ab7, 0));	// 20335 cmp     word_37AB7, 0 ;~ 0B19:0E85
cs=0xb19;eip=0x000e8a; 	R(JNZ(loc_1a5ff));	// 20336 jnz     short loc_1A5FF ;~ 0B19:0E8A
cs=0xb19;eip=0x000e8c; 	R(JMP(loc_1a604));	// 20337 jmp     loc_1A604 ;~ 0B19:0E8C
loc_1a5ff:
	// 5516 
cs=0xb19;eip=0x000e8f; 	X(ADD(word_2d0ce, 0x28));	// 20341 add     word_2D0CE, 28h ; '(' ;~ 0B19:0E8F
loc_1a604:
	// 5517 
cs=0xb19;eip=0x000e94; 	T(CMP(word_37ab5, 0));	// 20344 cmp     word_37AB5, 0 ;~ 0B19:0E94
cs=0xb19;eip=0x000e99; 	R(JNZ(loc_1a60e));	// 20345 jnz     short loc_1A60E ;~ 0B19:0E99
cs=0xb19;eip=0x000e9b; 	R(JMP(loc_1a613));	// 20346 jmp     loc_1A613 ;~ 0B19:0E9B
loc_1a60e:
	// 5518 
cs=0xb19;eip=0x000e9e; 	X(ADD(word_2d0ce, 0x14));	// 20350 add     word_2D0CE, 14h ;~ 0B19:0E9E
loc_1a613:
	// 5519 
cs=0xb19;eip=0x000ea3; 	T(MOV(ax, word_2d0ce));	// 20354 mov     ax, word_2D0CE ;~ 0B19:0EA3
cs=0xb19;eip=0x000ea6; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 20355 mov     [bp+var_2], ax ;~ 0B19:0EA6
cs=0xb19;eip=0x000ea9; 	T(CMP(ax, 0));	// 20356 cmp     ax, 0 ;~ 0B19:0EA9
cs=0xb19;eip=0x000eac; 	R(JL(loc_1a621));	// 20357 jl      short loc_1A621 ;~ 0B19:0EAC
cs=0xb19;eip=0x000eae; 	R(JMP(loc_1a629));	// 20358 jmp     loc_1A629 ;~ 0B19:0EAE
loc_1a621:
	// 5520 
cs=0xb19;eip=0x000eb1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 20362 mov     ax, [bp+var_2] ;~ 0B19:0EB1
cs=0xb19;eip=0x000eb4; 	T(NEG(ax));	// 20363 neg     ax ;~ 0B19:0EB4
cs=0xb19;eip=0x000eb6; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 20364 mov     [bp+var_2], ax ;~ 0B19:0EB6
loc_1a629:
	// 5521 
cs=0xb19;eip=0x000eb9; 	T(CMP(byte_2d0e0, 0));	// 20367 cmp     byte_2D0E0, 0 ;~ 0B19:0EB9
cs=0xb19;eip=0x000ebe; 	R(JNZ(loc_1a633));	// 20368 jnz     short loc_1A633 ;~ 0B19:0EBE
cs=0xb19;eip=0x000ec0; 	R(JMP(loc_1a6e5));	// 20369 jmp     loc_1A6E5 ;~ 0B19:0EC0
loc_1a633:
	// 5522 
cs=0xb19;eip=0x000ec3; 	T(MOV(ax, 0x4B0));	// 20373 mov     ax, 4B0h ;~ 0B19:0EC3
cs=0xb19;eip=0x000ec6; 	T(MOV(dx, 0));	// 20374 mov     dx, 0 ;~ 0B19:0EC6
cs=0xb19;eip=0x000ec9; 	X(PUSH(dx));	// 20375 push    dx ;~ 0B19:0EC9
cs=0xb19;eip=0x000eca; 	X(PUSH(ax));	// 20376 push    ax ;~ 0B19:0ECA
cs=0xb19;eip=0x000ecb; 	T(SUB(ax, ax));	// 20377 sub     ax, ax ;~ 0B19:0ECB
cs=0xb19;eip=0x000ecd; 	X(PUSH(ax));	// 20378 push    ax ;~ 0B19:0ECD
cs=0xb19;eip=0x000ece; 	X(PUSH(word_3a628));	// 20379 push    word_3A628 ;~ 0B19:0ECE
cs=0xb19;eip=0x000ed2; 	T(MOV(ax, word_353d4));	// 20380 mov     ax, word_353D4 ;~ 0B19:0ED2
cs=0xb19;eip=0x000ed5; 	T(CWD);	// 20381 cwd ;~ 0B19:0ED5
cs=0xb19;eip=0x000ed6; 	X(PUSH(dx));	// 20382 push    dx ;~ 0B19:0ED6
cs=0xb19;eip=0x000ed7; 	X(PUSH(ax));	// 20383 push    ax ;~ 0B19:0ED7
cs=0xb19;eip=0x000ed8; 	T(MOV(ax, word_2d044));	// 20384 mov     ax, word_2D044 ;~ 0B19:0ED8
cs=0xb19;eip=0x000edb; 	T(CWD);	// 20385 cwd ;~ 0B19:0EDB
cs=0xb19;eip=0x000edc; 	X(PUSH(dx));	// 20386 push    dx ;~ 0B19:0EDC
cs=0xb19;eip=0x000edd; 	X(PUSH(ax));	// 20387 push    ax ;~ 0B19:0EDD
cs=0xb19;eip=0x000ede; 	R(CALLF(sub_29d98,0));	// 20388 call    sub_29D98 ;~ 0B19:0EDE
cs=0xb19;eip=0x000ee3; 	X(PUSH(dx));	// 20389 push    dx ;~ 0B19:0EE3
cs=0xb19;eip=0x000ee4; 	X(PUSH(ax));	// 20390 push    ax ;~ 0B19:0EE4
cs=0xb19;eip=0x000ee5; 	R(CALLF(sub_29d98,0));	// 20391 call    sub_29D98 ;~ 0B19:0EE5
cs=0xb19;eip=0x000eea; 	X(PUSH(dx));	// 20392 push    dx ;~ 0B19:0EEA
cs=0xb19;eip=0x000eeb; 	X(PUSH(ax));	// 20393 push    ax ;~ 0B19:0EEB
cs=0xb19;eip=0x000eec; 	R(CALLF(sub_29e14,0));	// 20394 call    sub_29E14 ;~ 0B19:0EEC
cs=0xb19;eip=0x000ef1; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 20395 mov     [bp+var_4], ax ;~ 0B19:0EF1
cs=0xb19;eip=0x000ef4; 	T(MOV(ax, 0x4B0));	// 20396 mov     ax, 4B0h ;~ 0B19:0EF4
cs=0xb19;eip=0x000ef7; 	T(MOV(dx, 0));	// 20397 mov     dx, 0 ;~ 0B19:0EF7
cs=0xb19;eip=0x000efa; 	X(PUSH(dx));	// 20398 push    dx ;~ 0B19:0EFA
cs=0xb19;eip=0x000efb; 	X(PUSH(ax));	// 20399 push    ax ;~ 0B19:0EFB
cs=0xb19;eip=0x000efc; 	T(SUB(ax, ax));	// 20400 sub     ax, ax ;~ 0B19:0EFC
cs=0xb19;eip=0x000efe; 	X(PUSH(ax));	// 20401 push    ax ;~ 0B19:0EFE
cs=0xb19;eip=0x000eff; 	X(PUSH(word_3a628));	// 20402 push    word_3A628 ;~ 0B19:0EFF
cs=0xb19;eip=0x000f03; 	T(MOV(ax, word_353d4));	// 20403 mov     ax, word_353D4 ;~ 0B19:0F03
cs=0xb19;eip=0x000f06; 	T(CWD);	// 20404 cwd ;~ 0B19:0F06
cs=0xb19;eip=0x000f07; 	X(PUSH(dx));	// 20405 push    dx ;~ 0B19:0F07
cs=0xb19;eip=0x000f08; 	X(PUSH(ax));	// 20406 push    ax ;~ 0B19:0F08
cs=0xb19;eip=0x000f09; 	T(MOV(ax, word_2d046));	// 20407 mov     ax, word_2D046 ;~ 0B19:0F09
cs=0xb19;eip=0x000f0c; 	T(CWD);	// 20408 cwd ;~ 0B19:0F0C
cs=0xb19;eip=0x000f0d; 	X(PUSH(dx));	// 20409 push    dx ;~ 0B19:0F0D
cs=0xb19;eip=0x000f0e; 	X(PUSH(ax));	// 20410 push    ax ;~ 0B19:0F0E
cs=0xb19;eip=0x000f0f; 	R(CALLF(sub_29d98,0));	// 20411 call    sub_29D98 ;~ 0B19:0F0F
cs=0xb19;eip=0x000f14; 	X(PUSH(dx));	// 20412 push    dx ;~ 0B19:0F14
cs=0xb19;eip=0x000f15; 	X(PUSH(ax));	// 20413 push    ax ;~ 0B19:0F15
cs=0xb19;eip=0x000f16; 	R(CALLF(sub_29d98,0));	// 20414 call    sub_29D98 ;~ 0B19:0F16
cs=0xb19;eip=0x000f1b; 	X(PUSH(dx));	// 20415 push    dx ;~ 0B19:0F1B
cs=0xb19;eip=0x000f1c; 	X(PUSH(ax));	// 20416 push    ax ;~ 0B19:0F1C
cs=0xb19;eip=0x000f1d; 	R(CALLF(sub_29e14,0));	// 20417 call    sub_29E14 ;~ 0B19:0F1D
cs=0xb19;eip=0x000f22; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 20418 mov     [bp+var_6], ax ;~ 0B19:0F22
cs=0xb19;eip=0x000f25; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 20419 mov     ax, [bp+var_4] ;~ 0B19:0F25
cs=0xb19;eip=0x000f28; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), ax));	// 20420 cmp     [bp+var_2], ax ;~ 0B19:0F28
cs=0xb19;eip=0x000f2b; 	R(JG(loc_1a6a0));	// 20421 jg      short loc_1A6A0 ;~ 0B19:0F2B
cs=0xb19;eip=0x000f2d; 	R(JMP(loc_1a6a8));	// 20422 jmp     loc_1A6A8 ;~ 0B19:0F2D
loc_1a6a0:
	// 5523 
cs=0xb19;eip=0x000f30; 	X(MOV(byte_2d0e2, 1));	// 20426 mov     byte_2D0E2, 1 ;~ 0B19:0F30
cs=0xb19;eip=0x000f35; 	R(JMP(loc_1a6b8));	// 20427 jmp     loc_1A6B8 ;~ 0B19:0F35
loc_1a6a8:
	// 5524 
cs=0xb19;eip=0x000f38; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 20431 mov     ax, [bp+var_6] ;~ 0B19:0F38
cs=0xb19;eip=0x000f3b; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), ax));	// 20432 cmp     [bp+var_2], ax ;~ 0B19:0F3B
cs=0xb19;eip=0x000f3e; 	R(JLE(loc_1a6b3));	// 20433 jle     short loc_1A6B3 ;~ 0B19:0F3E
cs=0xb19;eip=0x000f40; 	R(JMP(loc_1a6b8));	// 20434 jmp     loc_1A6B8 ;~ 0B19:0F40
loc_1a6b3:
	// 5525 
cs=0xb19;eip=0x000f43; 	X(MOV(byte_2d0e2, 0));	// 20438 mov     byte_2D0E2, 0 ;~ 0B19:0F43
loc_1a6b8:
	// 5526 
cs=0xb19;eip=0x000f48; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 20442 mov     ax, [bp+var_6] ;~ 0B19:0F48
cs=0xb19;eip=0x000f4b; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), ax));	// 20443 cmp     [bp+var_2], ax ;~ 0B19:0F4B
cs=0xb19;eip=0x000f4e; 	R(JGE(loc_1a6c3));	// 20444 jge     short loc_1A6C3 ;~ 0B19:0F4E
cs=0xb19;eip=0x000f50; 	R(JMP(loc_1a6c8));	// 20445 jmp     loc_1A6C8 ;~ 0B19:0F50
loc_1a6c3:
	// 5527 
cs=0xb19;eip=0x000f53; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 1));	// 20449 mov     [bp+var_8], 1 ;~ 0B19:0F53
loc_1a6c8:
	// 5528 
cs=0xb19;eip=0x000f58; 	T(CMP(byte_2d0e1, 1));	// 20452 cmp     byte_2D0E1, 1 ;~ 0B19:0F58
cs=0xb19;eip=0x000f5d; 	R(JNZ(loc_1a6d2));	// 20453 jnz     short loc_1A6D2 ;~ 0B19:0F5D
cs=0xb19;eip=0x000f5f; 	R(JMP(loc_1a6dc));	// 20454 jmp     loc_1A6DC ;~ 0B19:0F5F
loc_1a6d2:
	// 5529 
cs=0xb19;eip=0x000f62; 	T(CMP(byte_2d0e2, 1));	// 20458 cmp     byte_2D0E2, 1 ;~ 0B19:0F62
cs=0xb19;eip=0x000f67; 	R(JZ(loc_1a6dc));	// 20459 jz      short loc_1A6DC ;~ 0B19:0F67
cs=0xb19;eip=0x000f69; 	R(JMP(loc_1a6e2));	// 20460 jmp     loc_1A6E2 ;~ 0B19:0F69
loc_1a6dc:
	// 5530 
cs=0xb19;eip=0x000f6c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 20465 mov     ax, [bp+var_6] ;~ 0B19:0F6C
cs=0xb19;eip=0x000f6f; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 20466 mov     [bp+var_2], ax ;~ 0B19:0F6F
loc_1a6e2:
	// 5531 
cs=0xb19;eip=0x000f72; 	R(JMP(loc_1a6ea));	// 20469 jmp     loc_1A6EA ;~ 0B19:0F72
loc_1a6e5:
	// 5532 
cs=0xb19;eip=0x000f75; 	X(MOV(byte_2d0e2, 0));	// 20473 mov     byte_2D0E2, 0 ;~ 0B19:0F75
loc_1a6ea:
	// 5533 
cs=0xb19;eip=0x000f7a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 20476 mov     ax, [bp+var_2] ;~ 0B19:0F7A
cs=0xb19;eip=0x000f7d; 	T(CWD);	// 20477 cwd ;~ 0B19:0F7D
cs=0xb19;eip=0x000f7e; 	T(XOR(ax, dx));	// 20478 xor     ax, dx ;~ 0B19:0F7E
cs=0xb19;eip=0x000f80; 	T(SUB(ax, dx));	// 20479 sub     ax, dx ;~ 0B19:0F80
cs=0xb19;eip=0x000f82; 	T(MOV(cx, 9));	// 20480 mov     cx, 9 ;~ 0B19:0F82
cs=0xb19;eip=0x000f85; 	T(SAR(ax, cl));	// 20481 sar     ax, cl ;~ 0B19:0F85
cs=0xb19;eip=0x000f87; 	T(XOR(ax, dx));	// 20482 xor     ax, dx ;~ 0B19:0F87
cs=0xb19;eip=0x000f89; 	T(SUB(ax, dx));	// 20483 sub     ax, dx ;~ 0B19:0F89
cs=0xb19;eip=0x000f8b; 	X(MOV(word_2d0d2, ax));	// 20484 mov     word_2D0D2, ax ;~ 0B19:0F8B
cs=0xb19;eip=0x000f8e; 	T(CMP(byte_37517, 0));	// 20485 cmp     byte_37517, 0 ;~ 0B19:0F8E
cs=0xb19;eip=0x000f93; 	R(JNZ(loc_1a708));	// 20486 jnz     short loc_1A708 ;~ 0B19:0F93
cs=0xb19;eip=0x000f95; 	R(JMP(loc_1a712));	// 20487 jmp     loc_1A712 ;~ 0B19:0F95
loc_1a708:
	// 5534 
cs=0xb19;eip=0x000f98; 	T(CMP(word_2d0ce, 0));	// 20491 cmp     word_2D0CE, 0 ;~ 0B19:0F98
cs=0xb19;eip=0x000f9d; 	R(JGE(loc_1a712));	// 20492 jge     short loc_1A712 ;~ 0B19:0F9D
cs=0xb19;eip=0x000f9f; 	R(JMP(loc_1a726));	// 20493 jmp     loc_1A726 ;~ 0B19:0F9F
loc_1a712:
	// 5535 
cs=0xb19;eip=0x000fa2; 	T(CMP(byte_37517, 0));	// 20498 cmp     byte_37517, 0 ;~ 0B19:0FA2
cs=0xb19;eip=0x000fa7; 	R(JZ(loc_1a71c));	// 20499 jz      short loc_1A71C ;~ 0B19:0FA7
cs=0xb19;eip=0x000fa9; 	R(JMP(loc_1a72e));	// 20500 jmp     loc_1A72E ;~ 0B19:0FA9
loc_1a71c:
	// 5536 
cs=0xb19;eip=0x000fac; 	T(CMP(word_2d0ce, 0));	// 20504 cmp     word_2D0CE, 0 ;~ 0B19:0FAC
cs=0xb19;eip=0x000fb1; 	R(JG(loc_1a726));	// 20505 jg      short loc_1A726 ;~ 0B19:0FB1
cs=0xb19;eip=0x000fb3; 	R(JMP(loc_1a72e));	// 20506 jmp     loc_1A72E ;~ 0B19:0FB3
loc_1a726:
	// 5537 
cs=0xb19;eip=0x000fb6; 	T(MOV(ax, word_2d0d2));	// 20511 mov     ax, word_2D0D2 ;~ 0B19:0FB6
cs=0xb19;eip=0x000fb9; 	T(NEG(ax));	// 20512 neg     ax ;~ 0B19:0FB9
cs=0xb19;eip=0x000fbb; 	X(MOV(word_2d0d2, ax));	// 20513 mov     word_2D0D2, ax ;~ 0B19:0FBB
loc_1a72e:
	// 5538 
cs=0xb19;eip=0x000fbe; 	T(MOV(ax, word_2d0d2));	// 20517 mov     ax, word_2D0D2 ;~ 0B19:0FBE
cs=0xb19;eip=0x000fc1; 	T(SUB(ax, word_2d0d0));	// 20518 sub     ax, word_2D0D0 ;~ 0B19:0FC1
cs=0xb19;eip=0x000fc5; 	T(CWD);	// 20519 cwd ;~ 0B19:0FC5
cs=0xb19;eip=0x000fc6; 	T(SUB(ax, dx));	// 20520 sub     ax, dx ;~ 0B19:0FC6
cs=0xb19;eip=0x000fc8; 	T(SAR(ax, 1));	// 20521 sar     ax, 1 ;~ 0B19:0FC8
cs=0xb19;eip=0x000fca; 	X(ADD(word_2d0d0, ax));	// 20522 add     word_2D0D0, ax ;~ 0B19:0FCA
cs=0xb19;eip=0x000fce; 	T(MOV(ax, word_2d0ce));	// 20523 mov     ax, word_2D0CE ;~ 0B19:0FCE
cs=0xb19;eip=0x000fd1; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 20524 mov     [bp+var_4], ax ;~ 0B19:0FD1
cs=0xb19;eip=0x000fd4; 	T(MOV(ax, 4));	// 20525 mov     ax, 4 ;~ 0B19:0FD4
cs=0xb19;eip=0x000fd7; 	T(MOV(dx, 0));	// 20526 mov     dx, 0 ;~ 0B19:0FD7
cs=0xb19;eip=0x000fda; 	X(PUSH(dx));	// 20527 push    dx ;~ 0B19:0FDA
cs=0xb19;eip=0x000fdb; 	X(PUSH(ax));	// 20528 push    ax ;~ 0B19:0FDB
cs=0xb19;eip=0x000fdc; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 20529 mov     ax, [bp+var_2] ;~ 0B19:0FDC
cs=0xb19;eip=0x000fdf; 	X(IMUL1_2(word_2d068));	// 20530 imul    word_2D068 ;~ 0B19:0FDF
cs=0xb19;eip=0x000fe3; 	X(PUSH(dx));	// 20531 push    dx ;~ 0B19:0FE3
cs=0xb19;eip=0x000fe4; 	X(PUSH(ax));	// 20532 push    ax ;~ 0B19:0FE4
cs=0xb19;eip=0x000fe5; 	R(CALLF(sub_29cfc,0));	// 20533 call    sub_29CFC ;~ 0B19:0FE5
cs=0xb19;eip=0x000fea; 	X(MOV(word_2d0ce, ax));	// 20534 mov     word_2D0CE, ax ;~ 0B19:0FEA
cs=0xb19;eip=0x000fed; 	T(CMP(word_2d090, 0));	// 20535 cmp     word_2D090, 0 ;~ 0B19:0FED
cs=0xb19;eip=0x000ff2; 	R(JGE(loc_1a767));	// 20536 jge     short loc_1A767 ;~ 0B19:0FF2
cs=0xb19;eip=0x000ff4; 	R(JMP(loc_1a7b5));	// 20537 jmp     loc_1A7B5 ;~ 0B19:0FF4
loc_1a767:
	// 5539 
cs=0xb19;eip=0x000ff7; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 20541 cmp     [bp+var_4], 0 ;~ 0B19:0FF7
cs=0xb19;eip=0x000ffb; 	R(JL(loc_1a770));	// 20542 jl      short loc_1A770 ;~ 0B19:0FFB
cs=0xb19;eip=0x000ffd; 	R(JMP(loc_1a7a6));	// 20543 jmp     loc_1A7A6 ;~ 0B19:0FFD
loc_1a770:
	// 5540 
cs=0xb19;eip=0x001000; 	T(MOV(ax, word_2d0ce));	// 20547 mov     ax, word_2D0CE ;~ 0B19:1000
cs=0xb19;eip=0x001003; 	T(CWD);	// 20548 cwd ;~ 0B19:1003
cs=0xb19;eip=0x001004; 	T(CMP(dx, word_2d090));	// 20549 cmp     dx, word_2D090 ;~ 0B19:1004
cs=0xb19;eip=0x001008; 	R(JGE(loc_1a77d));	// 20550 jge     short loc_1A77D ;~ 0B19:1008
cs=0xb19;eip=0x00100a; 	R(JMP(loc_1a797));	// 20551 jmp     loc_1A797 ;~ 0B19:100A
loc_1a77d:
	// 5541 
cs=0xb19;eip=0x00100d; 	R(JLE(loc_1a782));	// 20555 jle     short loc_1A782 ;~ 0B19:100D
cs=0xb19;eip=0x00100f; 	R(JMP(loc_1a78b));	// 20556 jmp     loc_1A78B ;~ 0B19:100F
loc_1a782:
	// 5542 
cs=0xb19;eip=0x001012; 	T(CMP(ax, word_2d08e));	// 20560 cmp     ax, word_2D08E ;~ 0B19:1012
cs=0xb19;eip=0x001016; 	R(JNC(loc_1a78b));	// 20561 jnb     short loc_1A78B ;~ 0B19:1016
cs=0xb19;eip=0x001018; 	R(JMP(loc_1a797));	// 20562 jmp     loc_1A797 ;~ 0B19:1018
loc_1a78b:
	// 5543 
cs=0xb19;eip=0x00101b; 	T(MOV(ax, 0));	// 20567 mov     ax, 0 ;~ 0B19:101B
cs=0xb19;eip=0x00101e; 	X(MOV(word_2d090, ax));	// 20568 mov     word_2D090, ax ;~ 0B19:101E
cs=0xb19;eip=0x001021; 	X(MOV(word_2d08e, ax));	// 20569 mov     word_2D08E, ax ;~ 0B19:1021
cs=0xb19;eip=0x001024; 	R(JMP(loc_1a7a3));	// 20570 jmp     loc_1A7A3 ;~ 0B19:1024
loc_1a797:
	// 5544 
cs=0xb19;eip=0x001027; 	T(MOV(ax, word_2d0ce));	// 20575 mov     ax, word_2D0CE ;~ 0B19:1027
cs=0xb19;eip=0x00102a; 	T(CWD);	// 20576 cwd ;~ 0B19:102A
cs=0xb19;eip=0x00102b; 	X(SUB(word_2d08e, ax));	// 20577 sub     word_2D08E, ax ;~ 0B19:102B
cs=0xb19;eip=0x00102f; 	X(SBB(word_2d090, dx));	// 20578 sbb     word_2D090, dx ;~ 0B19:102F
loc_1a7a3:
	// 5545 
cs=0xb19;eip=0x001033; 	R(JMP(loc_1a7b2));	// 20581 jmp     loc_1A7B2 ;~ 0B19:1033
loc_1a7a6:
	// 5546 
cs=0xb19;eip=0x001036; 	T(MOV(ax, word_2d0ce));	// 20585 mov     ax, word_2D0CE ;~ 0B19:1036
cs=0xb19;eip=0x001039; 	T(CWD);	// 20586 cwd ;~ 0B19:1039
cs=0xb19;eip=0x00103a; 	X(ADD(word_2d08e, ax));	// 20587 add     word_2D08E, ax ;~ 0B19:103A
cs=0xb19;eip=0x00103e; 	X(ADC(word_2d090, dx));	// 20588 adc     word_2D090, dx ;~ 0B19:103E
loc_1a7b2:
	// 5547 
cs=0xb19;eip=0x001042; 	R(JMP(loc_1a80b));	// 20591 jmp     loc_1A80B ;~ 0B19:1042
loc_1a7b5:
	// 5548 
cs=0xb19;eip=0x001045; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 20595 cmp     [bp+var_4], 0 ;~ 0B19:1045
cs=0xb19;eip=0x001049; 	R(JL(loc_1a7be));	// 20596 jl      short loc_1A7BE ;~ 0B19:1049
cs=0xb19;eip=0x00104b; 	R(JMP(loc_1a7ff));	// 20597 jmp     loc_1A7FF ;~ 0B19:104B
loc_1a7be:
	// 5549 
cs=0xb19;eip=0x00104e; 	T(MOV(ax, word_2d0ce));	// 20601 mov     ax, word_2D0CE ;~ 0B19:104E
cs=0xb19;eip=0x001051; 	T(CWD);	// 20602 cwd ;~ 0B19:1051
cs=0xb19;eip=0x001052; 	T(MOV(cx, word_2d08e));	// 20603 mov     cx, word_2D08E ;~ 0B19:1052
cs=0xb19;eip=0x001056; 	T(MOV(bx, word_2d090));	// 20604 mov     bx, word_2D090 ;~ 0B19:1056
cs=0xb19;eip=0x00105a; 	T(NEG(cx));	// 20605 neg     cx ;~ 0B19:105A
cs=0xb19;eip=0x00105c; 	T(ADC(bx, 0));	// 20606 adc     bx, 0 ;~ 0B19:105C
cs=0xb19;eip=0x00105f; 	T(NEG(bx));	// 20607 neg     bx ;~ 0B19:105F
cs=0xb19;eip=0x001061; 	T(CMP(bx, dx));	// 20608 cmp     bx, dx ;~ 0B19:1061
cs=0xb19;eip=0x001063; 	R(JLE(loc_1a7d8));	// 20609 jle     short loc_1A7D8 ;~ 0B19:1063
cs=0xb19;eip=0x001065; 	R(JMP(loc_1a7f0));	// 20610 jmp     loc_1A7F0 ;~ 0B19:1065
loc_1a7d8:
	// 5550 
cs=0xb19;eip=0x001068; 	R(JGE(loc_1a7dd));	// 20614 jge     short loc_1A7DD ;~ 0B19:1068
cs=0xb19;eip=0x00106a; 	R(JMP(loc_1a7e4));	// 20615 jmp     loc_1A7E4 ;~ 0B19:106A
loc_1a7dd:
	// 5551 
cs=0xb19;eip=0x00106d; 	T(CMP(cx, ax));	// 20619 cmp     cx, ax ;~ 0B19:106D
cs=0xb19;eip=0x00106f; 	R(JBE(loc_1a7e4));	// 20620 jbe     short loc_1A7E4 ;~ 0B19:106F
cs=0xb19;eip=0x001071; 	R(JMP(loc_1a7f0));	// 20621 jmp     loc_1A7F0 ;~ 0B19:1071
loc_1a7e4:
	// 5552 
cs=0xb19;eip=0x001074; 	T(MOV(ax, 0));	// 20626 mov     ax, 0 ;~ 0B19:1074
cs=0xb19;eip=0x001077; 	X(MOV(word_2d090, ax));	// 20627 mov     word_2D090, ax ;~ 0B19:1077
cs=0xb19;eip=0x00107a; 	X(MOV(word_2d08e, ax));	// 20628 mov     word_2D08E, ax ;~ 0B19:107A
cs=0xb19;eip=0x00107d; 	R(JMP(loc_1a7fc));	// 20629 jmp     loc_1A7FC ;~ 0B19:107D
loc_1a7f0:
	// 5553 
cs=0xb19;eip=0x001080; 	T(MOV(ax, word_2d0ce));	// 20634 mov     ax, word_2D0CE ;~ 0B19:1080
cs=0xb19;eip=0x001083; 	T(CWD);	// 20635 cwd ;~ 0B19:1083
cs=0xb19;eip=0x001084; 	X(ADD(word_2d08e, ax));	// 20636 add     word_2D08E, ax ;~ 0B19:1084
cs=0xb19;eip=0x001088; 	X(ADC(word_2d090, dx));	// 20637 adc     word_2D090, dx ;~ 0B19:1088
loc_1a7fc:
	// 5554 
cs=0xb19;eip=0x00108c; 	R(JMP(loc_1a80b));	// 20640 jmp     loc_1A80B ;~ 0B19:108C
loc_1a7ff:
	// 5555 
cs=0xb19;eip=0x00108f; 	T(MOV(ax, word_2d0ce));	// 20644 mov     ax, word_2D0CE ;~ 0B19:108F
cs=0xb19;eip=0x001092; 	T(CWD);	// 20645 cwd ;~ 0B19:1092
cs=0xb19;eip=0x001093; 	X(SUB(word_2d08e, ax));	// 20646 sub     word_2D08E, ax ;~ 0B19:1093
cs=0xb19;eip=0x001097; 	X(SBB(word_2d090, dx));	// 20647 sbb     word_2D090, dx ;~ 0B19:1097
loc_1a80b:
	// 5556 
cs=0xb19;eip=0x00109b; 	T(MOV(al, byte_3a17a));	// 20651 mov     al, byte_3A17A ;~ 0B19:109B
cs=0xb19;eip=0x00109e; 	T(SUB(ah, ah));	// 20652 sub     ah, ah ;~ 0B19:109E
cs=0xb19;eip=0x0010a0; 	T(SHL(ax, 1));	// 20653 shl     ax, 1 ;~ 0B19:10A0
cs=0xb19;eip=0x0010a2; 	T(SUB(ax, 0x20));	// 20654 sub     ax, 20h ; ' ' ;~ 0B19:10A2
cs=0xb19;eip=0x0010a5; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 20655 mov     [bp+var_2], ax ;~ 0B19:10A5
cs=0xb19;eip=0x0010a8; 	T(MOV(al, byte_37519));	// 20656 mov     al, byte_37519 ;~ 0B19:10A8
cs=0xb19;eip=0x0010ab; 	T(SUB(ah, ah));	// 20657 sub     ah, ah ;~ 0B19:10AB
cs=0xb19;eip=0x0010ad; 	T(MOV(cx, ax));	// 20658 mov     cx, ax ;~ 0B19:10AD
cs=0xb19;eip=0x0010af; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 20659 mov     ax, [bp+var_2] ;~ 0B19:10AF
cs=0xb19;eip=0x0010b2; 	T(IMUL1_2(cx));	// 20660 imul    cx ;~ 0B19:10B2
cs=0xb19;eip=0x0010b4; 	X(IMUL1_2(word_2d07a));	// 20661 imul    word_2D07A ;~ 0B19:10B4
cs=0xb19;eip=0x0010b8; 	T(CWD);	// 20662 cwd ;~ 0B19:10B8
cs=0xb19;eip=0x0010b9; 	T(MOV(cx, word_2d07c));	// 20663 mov     cx, word_2D07C ;~ 0B19:10B9
cs=0xb19;eip=0x0010bd; 	T(IDIV2(cx));	// 20664 idiv    cx ;~ 0B19:10BD
cs=0xb19;eip=0x0010bf; 	X(ADD(*(dw*)(raddr(ss,bp+var_2)), ax));	// 20665 add     [bp+var_2], ax ;~ 0B19:10BF
cs=0xb19;eip=0x0010c2; 	T(MOV(ax, word_39ece));	// 20666 mov     ax, word_39ECE ;~ 0B19:10C2
cs=0xb19;eip=0x0010c5; 	X(ADD(*(dw*)(raddr(ss,bp+var_2)), ax));	// 20667 add     [bp+var_2], ax ;~ 0B19:10C5
cs=0xb19;eip=0x0010c8; 	T(TEST(*(db*)(((db*)&word_352c6)), 1));	// 20668 test    byte ptr word_352C6, 1 ;~ 0B19:10C8
cs=0xb19;eip=0x0010cd; 	R(JNZ(loc_1a842));	// 20669 jnz     short loc_1A842 ;~ 0B19:10CD
cs=0xb19;eip=0x0010cf; 	R(JMP(loc_1a849));	// 20670 jmp     loc_1A849 ;~ 0B19:10CF
loc_1a842:
	// 5557 
cs=0xb19;eip=0x0010d2; 	X(ADD(*(dw*)(raddr(ss,bp+var_2)), 4));	// 20674 add     [bp+var_2], 4 ;~ 0B19:10D2
cs=0xb19;eip=0x0010d6; 	R(JMP(loc_1a857));	// 20675 jmp     loc_1A857 ;~ 0B19:10D6
loc_1a849:
	// 5558 
cs=0xb19;eip=0x0010d9; 	T(TEST(*(db*)(((db*)&word_352c6)), 2));	// 20679 test    byte ptr word_352C6, 2 ;~ 0B19:10D9
cs=0xb19;eip=0x0010de; 	R(JNZ(loc_1a853));	// 20680 jnz     short loc_1A853 ;~ 0B19:10DE
cs=0xb19;eip=0x0010e0; 	R(JMP(loc_1a857));	// 20681 jmp     loc_1A857 ;~ 0B19:10E0
loc_1a853:
	// 5559 
cs=0xb19;eip=0x0010e3; 	X(SUB(*(dw*)(raddr(ss,bp+var_2)), 4));	// 20685 sub     [bp+var_2], 4 ;~ 0B19:10E3
loc_1a857:
	// 5560 
cs=0xb19;eip=0x0010e7; 	T(CMP(word_2d090, 0));	// 20689 cmp     word_2D090, 0 ;~ 0B19:10E7
cs=0xb19;eip=0x0010ec; 	R(JGE(loc_1a861));	// 20690 jge     short loc_1A861 ;~ 0B19:10EC
cs=0xb19;eip=0x0010ee; 	R(JMP(loc_1a86e));	// 20691 jmp     loc_1A86E ;~ 0B19:10EE
loc_1a861:
	// 5561 
cs=0xb19;eip=0x0010f1; 	T(MOV(ax, word_2d0d6));	// 20695 mov     ax, word_2D0D6 ;~ 0B19:10F1
cs=0xb19;eip=0x0010f4; 	T(SHR(ax, 1));	// 20696 shr     ax, 1 ;~ 0B19:10F4
cs=0xb19;eip=0x0010f6; 	T(SHR(ax, 1));	// 20697 shr     ax, 1 ;~ 0B19:10F6
cs=0xb19;eip=0x0010f8; 	X(MOV(byte_3a39f, al));	// 20698 mov     byte_3A39F, al ;~ 0B19:10F8
cs=0xb19;eip=0x0010fb; 	R(JMP(loc_1a873));	// 20699 jmp     loc_1A873 ;~ 0B19:10FB
loc_1a86e:
	// 5562 
cs=0xb19;eip=0x0010fe; 	X(MOV(byte_3a39f, 0));	// 20703 mov     byte_3A39F, 0 ;~ 0B19:10FE
loc_1a873:
	// 5563 
cs=0xb19;eip=0x001103; 	T(MOV(ax, 0x2B8));	// 20706 mov     ax, 2B8h ;~ 0B19:1103
cs=0xb19;eip=0x001106; 	X(IMUL1_2(word_2d064));	// 20707 imul    word_2D064 ;~ 0B19:1106
cs=0xb19;eip=0x00110a; 	T(CWD);	// 20708 cwd ;~ 0B19:110A
cs=0xb19;eip=0x00110b; 	X(PUSH(dx));	// 20709 push    dx ;~ 0B19:110B
cs=0xb19;eip=0x00110c; 	X(PUSH(ax));	// 20710 push    ax ;~ 0B19:110C
cs=0xb19;eip=0x00110d; 	T(MOV(ax, 0x50));	// 20711 mov     ax, 50h ; 'P' ;~ 0B19:110D
cs=0xb19;eip=0x001110; 	T(MOV(dx, 0));	// 20712 mov     dx, 0 ;~ 0B19:1110
cs=0xb19;eip=0x001113; 	X(PUSH(dx));	// 20713 push    dx ;~ 0B19:1113
cs=0xb19;eip=0x001114; 	X(PUSH(ax));	// 20714 push    ax ;~ 0B19:1114
cs=0xb19;eip=0x001115; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 20715 mov     ax, [bp+var_2] ;~ 0B19:1115
cs=0xb19;eip=0x001118; 	T(CWD);	// 20716 cwd ;~ 0B19:1118
cs=0xb19;eip=0x001119; 	X(PUSH(dx));	// 20717 push    dx ;~ 0B19:1119
cs=0xb19;eip=0x00111a; 	X(PUSH(ax));	// 20718 push    ax ;~ 0B19:111A
cs=0xb19;eip=0x00111b; 	T(MOV(al, byte_3754e));	// 20719 mov     al, byte_3754E ;~ 0B19:111B
cs=0xb19;eip=0x00111e; 	T(SUB(ah, ah));	// 20720 sub     ah, ah ;~ 0B19:111E
cs=0xb19;eip=0x001120; 	T(ADD(ax, 0x11));	// 20721 add     ax, 11h ;~ 0B19:1120
cs=0xb19;eip=0x001123; 	X(MUL1_2(word_2d062));	// 20722 mul     word_2D062 ;~ 0B19:1123
cs=0xb19;eip=0x001127; 	T(MOV(cx, ax));	// 20723 mov     cx, ax ;~ 0B19:1127
cs=0xb19;eip=0x001129; 	T(SHL(ax, 1));	// 20724 shl     ax, 1 ;~ 0B19:1129
cs=0xb19;eip=0x00112b; 	T(ADD(ax, cx));	// 20725 add     ax, cx ;~ 0B19:112B
cs=0xb19;eip=0x00112d; 	T(SHL(ax, 1));	// 20726 shl     ax, 1 ;~ 0B19:112D
cs=0xb19;eip=0x00112f; 	T(ADD(ax, cx));	// 20727 add     ax, cx ;~ 0B19:112F
cs=0xb19;eip=0x001131; 	T(SUB(cx, cx));	// 20728 sub     cx, cx ;~ 0B19:1131
cs=0xb19;eip=0x001133; 	X(PUSH(cx));	// 20729 push    cx ;~ 0B19:1133
cs=0xb19;eip=0x001134; 	X(PUSH(ax));	// 20730 push    ax ;~ 0B19:1134
cs=0xb19;eip=0x001135; 	R(CALLF(sub_29d98,0));	// 20731 call    sub_29D98 ;~ 0B19:1135
cs=0xb19;eip=0x00113a; 	X(PUSH(dx));	// 20732 push    dx ;~ 0B19:113A
cs=0xb19;eip=0x00113b; 	X(PUSH(ax));	// 20733 push    ax ;~ 0B19:113B
cs=0xb19;eip=0x00113c; 	R(CALLF(sub_29d98,0));	// 20734 call    sub_29D98 ;~ 0B19:113C
cs=0xb19;eip=0x001141; 	X(PUSH(dx));	// 20735 push    dx ;~ 0B19:1141
cs=0xb19;eip=0x001142; 	X(PUSH(ax));	// 20736 push    ax ;~ 0B19:1142
cs=0xb19;eip=0x001143; 	R(CALLF(sub_29cfc,0));	// 20737 call    sub_29CFC ;~ 0B19:1143
cs=0xb19;eip=0x001148; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 20738 mov     [bp+var_2], ax ;~ 0B19:1148
cs=0xb19;eip=0x00114b; 	T(MOV(ax, 0x24));	// 20739 mov     ax, 24h ; '$' ;~ 0B19:114B
cs=0xb19;eip=0x00114e; 	T(MOV(dx, 0));	// 20740 mov     dx, 0 ;~ 0B19:114E
cs=0xb19;eip=0x001151; 	X(PUSH(dx));	// 20741 push    dx ;~ 0B19:1151
cs=0xb19;eip=0x001152; 	X(PUSH(ax));	// 20742 push    ax ;~ 0B19:1152
cs=0xb19;eip=0x001153; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 20743 mov     ax, [bp+var_2] ;~ 0B19:1153
cs=0xb19;eip=0x001156; 	T(CWD);	// 20744 cwd ;~ 0B19:1156
cs=0xb19;eip=0x001157; 	X(PUSH(dx));	// 20745 push    dx ;~ 0B19:1157
cs=0xb19;eip=0x001158; 	X(PUSH(ax));	// 20746 push    ax ;~ 0B19:1158
cs=0xb19;eip=0x001159; 	T(MOV(al, 3));	// 20747 mov     al, 3 ;~ 0B19:1159
cs=0xb19;eip=0x00115b; 	X(IMUL1_1(byte_2c802));	// 20748 imul    byte_2C802 ;~ 0B19:115B
cs=0xb19;eip=0x00115f; 	T(ADD(ax, 0x10));	// 20749 add     ax, 10h ;~ 0B19:115F
cs=0xb19;eip=0x001162; 	T(CWD);	// 20750 cwd ;~ 0B19:1162
cs=0xb19;eip=0x001163; 	X(PUSH(dx));	// 20751 push    dx ;~ 0B19:1163
cs=0xb19;eip=0x001164; 	X(PUSH(ax));	// 20752 push    ax ;~ 0B19:1164
cs=0xb19;eip=0x001165; 	R(CALLF(sub_29d98,0));	// 20753 call    sub_29D98 ;~ 0B19:1165
cs=0xb19;eip=0x00116a; 	X(PUSH(dx));	// 20754 push    dx ;~ 0B19:116A
cs=0xb19;eip=0x00116b; 	X(PUSH(ax));	// 20755 push    ax ;~ 0B19:116B
cs=0xb19;eip=0x00116c; 	R(CALLF(sub_29cfc,0));	// 20756 call    sub_29CFC ;~ 0B19:116C
cs=0xb19;eip=0x001171; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 20757 mov     [bp+var_2], ax ;~ 0B19:1171
cs=0xb19;eip=0x001174; 	T(CMP(word_2d0d6, 0x0C));	// 20758 cmp     word_2D0D6, 0Ch ;~ 0B19:1174
cs=0xb19;eip=0x001179; 	R(JC(loc_1a8ee));	// 20759 jb      short loc_1A8EE ;~ 0B19:1179
cs=0xb19;eip=0x00117b; 	R(JMP(loc_1a912));	// 20760 jmp     loc_1A912 ;~ 0B19:117B
loc_1a8ee:
	// 5564 
cs=0xb19;eip=0x00117e; 	T(MOV(ax, 0x0C));	// 20764 mov     ax, 0Ch ;~ 0B19:117E
cs=0xb19;eip=0x001181; 	T(MOV(dx, 0));	// 20765 mov     dx, 0 ;~ 0B19:1181
cs=0xb19;eip=0x001184; 	X(PUSH(dx));	// 20766 push    dx ;~ 0B19:1184
cs=0xb19;eip=0x001185; 	X(PUSH(ax));	// 20767 push    ax ;~ 0B19:1185
cs=0xb19;eip=0x001186; 	T(SUB(ax, ax));	// 20768 sub     ax, ax ;~ 0B19:1186
cs=0xb19;eip=0x001188; 	X(PUSH(ax));	// 20769 push    ax ;~ 0B19:1188
cs=0xb19;eip=0x001189; 	X(PUSH(word_2d0d6));	// 20770 push    word_2D0D6 ;~ 0B19:1189
cs=0xb19;eip=0x00118d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 20771 mov     ax, [bp+var_2] ;~ 0B19:118D
cs=0xb19;eip=0x001190; 	T(CWD);	// 20772 cwd ;~ 0B19:1190
cs=0xb19;eip=0x001191; 	X(PUSH(dx));	// 20773 push    dx ;~ 0B19:1191
cs=0xb19;eip=0x001192; 	X(PUSH(ax));	// 20774 push    ax ;~ 0B19:1192
cs=0xb19;eip=0x001193; 	R(CALLF(sub_29d98,0));	// 20775 call    sub_29D98 ;~ 0B19:1193
cs=0xb19;eip=0x001198; 	X(PUSH(dx));	// 20776 push    dx ;~ 0B19:1198
cs=0xb19;eip=0x001199; 	X(PUSH(ax));	// 20777 push    ax ;~ 0B19:1199
cs=0xb19;eip=0x00119a; 	R(CALLF(sub_29cfc,0));	// 20778 call    sub_29CFC ;~ 0B19:119A
cs=0xb19;eip=0x00119f; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 20779 mov     [bp+var_2], ax ;~ 0B19:119F
loc_1a912:
	// 5565 
cs=0xb19;eip=0x0011a2; 	T(CMP(byte_3a17a, 0x20));	// 20782 cmp     byte_3A17A, 20h ; ' ' ;~ 0B19:11A2
cs=0xb19;eip=0x0011a7; 	R(JNZ(loc_1a91c));	// 20783 jnz     short loc_1A91C ;~ 0B19:11A7
cs=0xb19;eip=0x0011a9; 	R(JMP(loc_1a926));	// 20784 jmp     loc_1A926 ;~ 0B19:11A9
loc_1a91c:
	// 5566 
cs=0xb19;eip=0x0011ac; 	T(CMP(byte_3a17a, 0));	// 20788 cmp     byte_3A17A, 0 ;~ 0B19:11AC
cs=0xb19;eip=0x0011b1; 	R(JZ(loc_1a926));	// 20789 jz      short loc_1A926 ;~ 0B19:11B1
cs=0xb19;eip=0x0011b3; 	R(JMP(loc_1a929));	// 20790 jmp     loc_1A929 ;~ 0B19:11B3
loc_1a926:
	// 5567 
cs=0xb19;eip=0x0011b6; 	X(SHL(*(dw*)(raddr(ss,bp+var_2)), 1));	// 20795 shl     [bp+var_2], 1 ;~ 0B19:11B6
loc_1a929:
	// 5568 
cs=0xb19;eip=0x0011b9; 	T(CMP(byte_2d0e0, 0));	// 20798 cmp     byte_2D0E0, 0 ;~ 0B19:11B9
cs=0xb19;eip=0x0011be; 	R(JNZ(loc_1a933));	// 20799 jnz     short loc_1A933 ;~ 0B19:11BE
cs=0xb19;eip=0x0011c0; 	R(JMP(loc_1a9ea));	// 20800 jmp     loc_1A9EA ;~ 0B19:11C0
loc_1a933:
	// 5569 
cs=0xb19;eip=0x0011c3; 	T(MOV(ax, word_2d08e));	// 20804 mov     ax, word_2D08E ;~ 0B19:11C3
cs=0xb19;eip=0x0011c6; 	T(OR(ax, word_2d090));	// 20805 or      ax, word_2D090 ;~ 0B19:11C6
cs=0xb19;eip=0x0011ca; 	R(JNZ(loc_1a93f));	// 20806 jnz     short loc_1A93F ;~ 0B19:11CA
cs=0xb19;eip=0x0011cc; 	R(JMP(loc_1a9ea));	// 20807 jmp     loc_1A9EA ;~ 0B19:11CC
loc_1a93f:
	// 5570 
cs=0xb19;eip=0x0011cf; 	T(CMP(word_2d090, 0));	// 20811 cmp     word_2D090, 0 ;~ 0B19:11CF
cs=0xb19;eip=0x0011d4; 	R(JGE(loc_1a949));	// 20812 jge     short loc_1A949 ;~ 0B19:11D4
cs=0xb19;eip=0x0011d6; 	R(JMP(loc_1a953));	// 20813 jmp     loc_1A953 ;~ 0B19:11D6
loc_1a949:
	// 5571 
cs=0xb19;eip=0x0011d9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 20817 mov     ax, [bp+var_2] ;~ 0B19:11D9
cs=0xb19;eip=0x0011dc; 	X(ADD(word_2d08c, ax));	// 20818 add     word_2D08C, ax ;~ 0B19:11DC
cs=0xb19;eip=0x0011e0; 	R(JMP(loc_1a95a));	// 20819 jmp     loc_1A95A ;~ 0B19:11E0
loc_1a953:
	// 5572 
cs=0xb19;eip=0x0011e3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 20823 mov     ax, [bp+var_2] ;~ 0B19:11E3
cs=0xb19;eip=0x0011e6; 	X(SUB(word_2d08c, ax));	// 20824 sub     word_2D08C, ax ;~ 0B19:11E6
loc_1a95a:
	// 5573 
cs=0xb19;eip=0x0011ea; 	T(MOV(ax, word_2d08c));	// 20827 mov     ax, word_2D08C ;~ 0B19:11EA
cs=0xb19;eip=0x0011ed; 	T(SUB(ax, word_2d08a));	// 20828 sub     ax, word_2D08A ;~ 0B19:11ED
cs=0xb19;eip=0x0011f1; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 20829 mov     [bp+var_4], ax ;~ 0B19:11F1
cs=0xb19;eip=0x0011f4; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 20830 mov     [bp+var_6], ax ;~ 0B19:11F4
cs=0xb19;eip=0x0011f7; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 20831 cmp     [bp+var_4], 0 ;~ 0B19:11F7
cs=0xb19;eip=0x0011fb; 	R(JL(loc_1a970));	// 20832 jl      short loc_1A970 ;~ 0B19:11FB
cs=0xb19;eip=0x0011fd; 	R(JMP(loc_1a978));	// 20833 jmp     loc_1A978 ;~ 0B19:11FD
loc_1a970:
	// 5574 
cs=0xb19;eip=0x001200; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 20837 mov     ax, [bp+var_6] ;~ 0B19:1200
cs=0xb19;eip=0x001203; 	T(NEG(ax));	// 20838 neg     ax ;~ 0B19:1203
cs=0xb19;eip=0x001205; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 20839 mov     [bp+var_6], ax ;~ 0B19:1205
loc_1a978:
	// 5575 
cs=0xb19;eip=0x001208; 	X(PUSH(word_2d044));	// 20842 push    word_2D044 ;~ 0B19:1208
cs=0xb19;eip=0x00120c; 	R(CALLF(sub_204d1,0));	// 20843 call    sub_204D1 ;~ 0B19:120C
cs=0xb19;eip=0x001211; 	T(ADD(sp, 2));	// 20844 add     sp, 2 ;~ 0B19:1211
cs=0xb19;eip=0x001214; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 20845 mov     [bp+var_2], ax ;~ 0B19:1214
cs=0xb19;eip=0x001217; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_6))));	// 20846 cmp     ax, [bp+var_6] ;~ 0B19:1217
cs=0xb19;eip=0x00121a; 	R(JL(loc_1a98f));	// 20847 jl      short loc_1A98F ;~ 0B19:121A
cs=0xb19;eip=0x00121c; 	R(JMP(loc_1a994));	// 20848 jmp     loc_1A994 ;~ 0B19:121C
loc_1a98f:
	// 5576 
cs=0xb19;eip=0x00121f; 	X(MOV(byte_2d0e1, 1));	// 20852 mov     byte_2D0E1, 1 ;~ 0B19:121F
loc_1a994:
	// 5577 
cs=0xb19;eip=0x001224; 	X(PUSH(word_2d046));	// 20855 push    word_2D046 ;~ 0B19:1224
cs=0xb19;eip=0x001228; 	R(CALLF(sub_204d1,0));	// 20856 call    sub_204D1 ;~ 0B19:1228
cs=0xb19;eip=0x00122d; 	T(ADD(sp, 2));	// 20857 add     sp, 2 ;~ 0B19:122D
cs=0xb19;eip=0x001230; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 20858 mov     [bp+var_2], ax ;~ 0B19:1230
cs=0xb19;eip=0x001233; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_6))));	// 20859 cmp     ax, [bp+var_6] ;~ 0B19:1233
cs=0xb19;eip=0x001236; 	R(JGE(loc_1a9ab));	// 20860 jge     short loc_1A9AB ;~ 0B19:1236
cs=0xb19;eip=0x001238; 	R(JMP(loc_1a9b0));	// 20861 jmp     loc_1A9B0 ;~ 0B19:1238
loc_1a9ab:
	// 5578 
cs=0xb19;eip=0x00123b; 	X(MOV(byte_2d0e1, 0));	// 20865 mov     byte_2D0E1, 0 ;~ 0B19:123B
loc_1a9b0:
	// 5579 
cs=0xb19;eip=0x001240; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 20868 mov     ax, [bp+var_2] ;~ 0B19:1240
cs=0xb19;eip=0x001243; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), ax));	// 20869 cmp     [bp+var_6], ax ;~ 0B19:1243
cs=0xb19;eip=0x001246; 	R(JGE(loc_1a9bb));	// 20870 jge     short loc_1A9BB ;~ 0B19:1246
cs=0xb19;eip=0x001248; 	R(JMP(loc_1a9c0));	// 20871 jmp     loc_1A9C0 ;~ 0B19:1248
loc_1a9bb:
	// 5580 
cs=0xb19;eip=0x00124b; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 1));	// 20875 mov     [bp+var_8], 1 ;~ 0B19:124B
loc_1a9c0:
	// 5581 
cs=0xb19;eip=0x001250; 	T(CMP(byte_2d0e1, 0));	// 20878 cmp     byte_2D0E1, 0 ;~ 0B19:1250
cs=0xb19;eip=0x001255; 	R(JNZ(loc_1a9ca));	// 20879 jnz     short loc_1A9CA ;~ 0B19:1255
cs=0xb19;eip=0x001257; 	R(JMP(loc_1a9d0));	// 20880 jmp     loc_1A9D0 ;~ 0B19:1257
loc_1a9ca:
	// 5582 
cs=0xb19;eip=0x00125a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 20884 mov     ax, [bp+var_2] ;~ 0B19:125A
cs=0xb19;eip=0x00125d; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 20885 mov     [bp+var_6], ax ;~ 0B19:125D
loc_1a9d0:
	// 5583 
cs=0xb19;eip=0x001260; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 20888 cmp     [bp+var_4], 0 ;~ 0B19:1260
cs=0xb19;eip=0x001264; 	R(JL(loc_1a9d9));	// 20889 jl      short loc_1A9D9 ;~ 0B19:1264
cs=0xb19;eip=0x001266; 	R(JMP(loc_1a9e3));	// 20890 jmp     loc_1A9E3 ;~ 0B19:1266
loc_1a9d9:
	// 5584 
cs=0xb19;eip=0x001269; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 20894 mov     ax, [bp+var_6] ;~ 0B19:1269
cs=0xb19;eip=0x00126c; 	X(SUB(word_2d08a, ax));	// 20895 sub     word_2D08A, ax ;~ 0B19:126C
cs=0xb19;eip=0x001270; 	R(JMP(loc_1a9ea));	// 20896 jmp     loc_1A9EA ;~ 0B19:1270
loc_1a9e3:
	// 5585 
cs=0xb19;eip=0x001273; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 20900 mov     ax, [bp+var_6] ;~ 0B19:1273
cs=0xb19;eip=0x001276; 	X(ADD(word_2d08a, ax));	// 20901 add     word_2D08A, ax ;~ 0B19:1276
loc_1a9ea:
	// 5586 
cs=0xb19;eip=0x00127a; 	T(MOV(ax, word_2d0dc));	// 20905 mov     ax, word_2D0DC ;~ 0B19:127A
cs=0xb19;eip=0x00127d; 	T(MOV(cl, 5));	// 20906 mov     cl, 5 ;~ 0B19:127D
cs=0xb19;eip=0x00127f; 	T(SHR(ax, cl));	// 20907 shr     ax, cl ;~ 0B19:127F
cs=0xb19;eip=0x001281; 	X(MOV(byte_3a3ee, al));	// 20908 mov     byte_3A3EE, al ;~ 0B19:1281
cs=0xb19;eip=0x001284; 	T(CMP(byte_3a39f, 0x1F));	// 20909 cmp     byte_3A39F, 1Fh ;~ 0B19:1284
cs=0xb19;eip=0x001289; 	R(JA(loc_1a9fe));	// 20910 ja      short loc_1A9FE ;~ 0B19:1289
cs=0xb19;eip=0x00128b; 	R(JMP(loc_1aa03));	// 20911 jmp     loc_1AA03 ;~ 0B19:128B
loc_1a9fe:
	// 5587 
cs=0xb19;eip=0x00128e; 	X(MOV(byte_3a39f, 0x1F));	// 20915 mov     byte_3A39F, 1Fh ;~ 0B19:128E
loc_1aa03:
	// 5588 
cs=0xb19;eip=0x001293; 	T(MOV(al, byte_3a3ee));	// 20918 mov     al, byte_3A3EE ;~ 0B19:1293
cs=0xb19;eip=0x001296; 	T(SUB(ah, ah));	// 20919 sub     ah, ah ;~ 0B19:1296
cs=0xb19;eip=0x001298; 	T(CMP(word_38ab6, ax));	// 20920 cmp     word_38AB6, ax ;~ 0B19:1298
cs=0xb19;eip=0x00129c; 	R(JC(loc_1aa11));	// 20921 jb      short loc_1AA11 ;~ 0B19:129C
cs=0xb19;eip=0x00129e; 	R(JMP(loc_1aa17));	// 20922 jmp     loc_1AA17 ;~ 0B19:129E
loc_1aa11:
	// 5589 
cs=0xb19;eip=0x0012a1; 	T(MOV(al, *(db*)(((db*)&word_38ab6))));	// 20926 mov     al, byte ptr word_38AB6 ;~ 0B19:12A1
cs=0xb19;eip=0x0012a4; 	X(MOV(byte_3a3ee, al));	// 20927 mov     byte_3A3EE, al ;~ 0B19:12A4
loc_1aa17:
	// 5590 
cs=0xb19;eip=0x0012a7; 	T(CMP(byte_2d0e1, 1));	// 20930 cmp     byte_2D0E1, 1 ;~ 0B19:12A7
cs=0xb19;eip=0x0012ac; 	R(JNZ(loc_1aa21));	// 20931 jnz     short loc_1AA21 ;~ 0B19:12AC
cs=0xb19;eip=0x0012ae; 	R(JMP(loc_1aa3e));	// 20932 jmp     loc_1AA3E ;~ 0B19:12AE
loc_1aa21:
	// 5591 
cs=0xb19;eip=0x0012b1; 	T(CMP(byte_2d0e2, 1));	// 20936 cmp     byte_2D0E2, 1 ;~ 0B19:12B1
cs=0xb19;eip=0x0012b6; 	R(JNZ(loc_1aa2b));	// 20937 jnz     short loc_1AA2B ;~ 0B19:12B6
cs=0xb19;eip=0x0012b8; 	R(JMP(loc_1aa3e));	// 20938 jmp     loc_1AA3E ;~ 0B19:12B8
loc_1aa2b:
	// 5592 
cs=0xb19;eip=0x0012bb; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0));	// 20942 cmp     [bp+var_8], 0 ;~ 0B19:12BB
cs=0xb19;eip=0x0012bf; 	R(JNZ(loc_1aa34));	// 20943 jnz     short loc_1AA34 ;~ 0B19:12BF
cs=0xb19;eip=0x0012c1; 	R(JMP(loc_1aaa4));	// 20944 jmp     loc_1AAA4 ;~ 0B19:12C1
loc_1aa34:
	// 5593 
cs=0xb19;eip=0x0012c4; 	T(CMP(byte_2d0e0, 0));	// 20948 cmp     byte_2D0E0, 0 ;~ 0B19:12C4
cs=0xb19;eip=0x0012c9; 	R(JNZ(loc_1aa3e));	// 20949 jnz     short loc_1AA3E ;~ 0B19:12C9
cs=0xb19;eip=0x0012cb; 	R(JMP(loc_1aaa4));	// 20950 jmp     loc_1AAA4 ;~ 0B19:12CB
loc_1aa3e:
	// 5594 
cs=0xb19;eip=0x0012ce; 	T(MOV(al, byte_378db));	// 20955 mov     al, byte_378DB ;~ 0B19:12CE
cs=0xb19;eip=0x0012d1; 	T(SUB(ah, ah));	// 20956 sub     ah, ah ;~ 0B19:12D1
cs=0xb19;eip=0x0012d3; 	R(JMP(loc_1aa76));	// 20957 jmp     loc_1AA76 ;~ 0B19:12D3
loc_1aa46:
	// 5595 
cs=0xb19;eip=0x0012d6; 	T(MOV(ax, 0x10));	// 20962 mov     ax, 10h ;~ 0B19:12D6
cs=0xb19;eip=0x0012d9; 	X(PUSH(ax));	// 20963 push    ax ;~ 0B19:12D9
cs=0xb19;eip=0x0012da; 	R(CALLF(sub_1d2d0,0));	// 20964 call    sub_1D2D0 ;~ 0B19:12DA
cs=0xb19;eip=0x0012df; 	T(ADD(sp, 2));	// 20965 add     sp, 2 ;~ 0B19:12DF
cs=0xb19;eip=0x0012e2; 	R(JMP(loc_1aaa1));	// 20966 jmp     loc_1AAA1 ;~ 0B19:12E2
loc_1aa55:
	// 5596 
cs=0xb19;eip=0x0012e5; 	T(MOV(ax, 0x11));	// 20970 mov     ax, 11h ;~ 0B19:12E5
cs=0xb19;eip=0x0012e8; 	X(PUSH(ax));	// 20971 push    ax ;~ 0B19:12E8
cs=0xb19;eip=0x0012e9; 	R(CALLF(sub_1d2d0,0));	// 20972 call    sub_1D2D0 ;~ 0B19:12E9
cs=0xb19;eip=0x0012ee; 	T(ADD(sp, 2));	// 20973 add     sp, 2 ;~ 0B19:12EE
cs=0xb19;eip=0x0012f1; 	R(JMP(loc_1aaa1));	// 20974 jmp     loc_1AAA1 ;~ 0B19:12F1
loc_1aa64:
	// 5597 
cs=0xb19;eip=0x0012f4; 	T(MOV(ax, 0x0F));	// 20979 mov     ax, 0Fh ;~ 0B19:12F4
cs=0xb19;eip=0x0012f7; 	X(PUSH(ax));	// 20980 push    ax ;~ 0B19:12F7
cs=0xb19;eip=0x0012f8; 	R(CALLF(sub_1d2d0,0));	// 20981 call    sub_1D2D0 ;~ 0B19:12F8
cs=0xb19;eip=0x0012fd; 	T(ADD(sp, 2));	// 20982 add     sp, 2 ;~ 0B19:12FD
cs=0xb19;eip=0x001300; 	R(JMP(loc_1aaa1));	// 20983 jmp     loc_1AAA1 ;~ 0B19:1300
ret_b19_1303:
	// 5598 
cs=0xb19;eip=0x001303; 	R(JMP(loc_1aaa1));	// 20985 jmp     loc_1AAA1 ;~ 0B19:1303
loc_1aa76:
	// 5599 
cs=0xb19;eip=0x001306; 	T(CMP(ax, 0x0E));	// 20989 cmp     ax, 0Eh ;~ 0B19:1306
cs=0xb19;eip=0x001309; 	R(JNC(loc_1aa7e));	// 20990 jnb     short loc_1AA7E ;~ 0B19:1309
cs=0xb19;eip=0x00130b; 	R(JMP(loc_1aa64));	// 20991 jmp     loc_1AA64 ;~ 0B19:130B
loc_1aa7e:
	// 5600 
cs=0xb19;eip=0x00130e; 	T(CMP(ax, 0x0F));	// 20995 cmp     ax, 0Fh ;~ 0B19:130E
cs=0xb19;eip=0x001311; 	R(JA(loc_1aa86));	// 20996 ja      short loc_1AA86 ;~ 0B19:1311
cs=0xb19;eip=0x001313; 	R(JMP(loc_1aa46));	// 20997 jmp     loc_1AA46 ;~ 0B19:1313
loc_1aa86:
	// 5601 
cs=0xb19;eip=0x001316; 	T(CMP(ax, 0x11));	// 21001 cmp     ax, 11h ;~ 0B19:1316
cs=0xb19;eip=0x001319; 	R(JNC(loc_1aa8e));	// 21002 jnb     short loc_1AA8E ;~ 0B19:1319
cs=0xb19;eip=0x00131b; 	R(JMP(loc_1aa64));	// 21003 jmp     loc_1AA64 ;~ 0B19:131B
loc_1aa8e:
	// 5602 
cs=0xb19;eip=0x00131e; 	T(CMP(ax, 0x12));	// 21007 cmp     ax, 12h ;~ 0B19:131E
cs=0xb19;eip=0x001321; 	R(JA(loc_1aa96));	// 21008 ja      short loc_1AA96 ;~ 0B19:1321
cs=0xb19;eip=0x001323; 	R(JMP(loc_1aa55));	// 21009 jmp     loc_1AA55 ;~ 0B19:1323
loc_1aa96:
	// 5603 
cs=0xb19;eip=0x001326; 	T(CMP(ax, 0x0FF));	// 21013 cmp     ax, 0FFh ;~ 0B19:1326
cs=0xb19;eip=0x001329; 	R(JNZ(loc_1aa9e));	// 21014 jnz     short loc_1AA9E ;~ 0B19:1329
cs=0xb19;eip=0x00132b; 	R(JMP(loc_1aa46));	// 21015 jmp     loc_1AA46 ;~ 0B19:132B
loc_1aa9e:
	// 5604 
cs=0xb19;eip=0x00132e; 	R(JMP(loc_1aa64));	// 21019 jmp     loc_1AA64 ;~ 0B19:132E
loc_1aaa1:
	// 5605 
cs=0xb19;eip=0x001331; 	R(JMP(loc_1aacb));	// 21024 jmp     loc_1AACB ;~ 0B19:1331
loc_1aaa4:
	// 5606 
cs=0xb19;eip=0x001334; 	T(CMP(byte_34f1e, 0));	// 21029 cmp     byte_34F1E, 0 ;~ 0B19:1334
cs=0xb19;eip=0x001339; 	R(JNZ(loc_1aaae));	// 21030 jnz     short loc_1AAAE ;~ 0B19:1339
cs=0xb19;eip=0x00133b; 	R(JMP(loc_1aacb));	// 21031 jmp     loc_1AACB ;~ 0B19:133B
loc_1aaae:
	// 5607 
cs=0xb19;eip=0x00133e; 	T(MOV(ax, 0x8F));	// 21035 mov     ax, 8Fh ; 'è' ;~ 0B19:133E
cs=0xb19;eip=0x001341; 	X(PUSH(ax));	// 21036 push    ax ;~ 0B19:1341
cs=0xb19;eip=0x001342; 	R(CALLF(sub_1d2d0,0));	// 21037 call    sub_1D2D0 ;~ 0B19:1342
cs=0xb19;eip=0x001347; 	T(ADD(sp, 2));	// 21038 add     sp, 2 ;~ 0B19:1347
cs=0xb19;eip=0x00134a; 	T(MOV(ax, 0x90));	// 21039 mov     ax, 90h ; 'ê' ;~ 0B19:134A
cs=0xb19;eip=0x00134d; 	X(PUSH(ax));	// 21040 push    ax ;~ 0B19:134D
cs=0xb19;eip=0x00134e; 	R(CALLF(sub_1d2d0,0));	// 21041 call    sub_1D2D0 ;~ 0B19:134E
cs=0xb19;eip=0x001353; 	T(ADD(sp, 2));	// 21042 add     sp, 2 ;~ 0B19:1353
cs=0xb19;eip=0x001356; 	X(MOV(byte_34f1e, 0));	// 21043 mov     byte_34F1E, 0 ;~ 0B19:1356
loc_1aacb:
	// 5608 
cs=0xb19;eip=0x00135b; 	T(MOV(ax, word_2d088));	// 21047 mov     ax, word_2D088 ;~ 0B19:135B
cs=0xb19;eip=0x00135e; 	T(INC(ax));	// 21048 inc     ax ;~ 0B19:135E
cs=0xb19;eip=0x00135f; 	T(AND(ax, 0x1FF));	// 21049 and     ax, 1FFh ;~ 0B19:135F
cs=0xb19;eip=0x001362; 	X(MOV(word_2d088, ax));	// 21050 mov     word_2D088, ax ;~ 0B19:1362
cs=0xb19;eip=0x001365; 	T(CMP(ax, 0x40));	// 21051 cmp     ax, 40h ; '@' ;~ 0B19:1365
cs=0xb19;eip=0x001368; 	R(JZ(loc_1aadd));	// 21052 jz      short loc_1AADD ;~ 0B19:1368
cs=0xb19;eip=0x00136a; 	R(JMP(loc_1aaee));	// 21053 jmp     loc_1AAEE ;~ 0B19:136A
loc_1aadd:
	// 5609 
cs=0xb19;eip=0x00136d; 	T(MOV(ax, 0x0C));	// 21057 mov     ax, 0Ch ;~ 0B19:136D
cs=0xb19;eip=0x001370; 	X(PUSH(ax));	// 21058 push    ax ;~ 0B19:1370
cs=0xb19;eip=0x001371; 	R(CALLF(sub_1179c,0));	// 21059 call    sub_1179C ;~ 0B19:1371
cs=0xb19;eip=0x001376; 	T(ADD(sp, 2));	// 21060 add     sp, 2 ;~ 0B19:1376
cs=0xb19;eip=0x001379; 	X(MOV(byte_37513, 1));	// 21061 mov     byte_37513, 1 ;~ 0B19:1379
loc_1aaee:
	// 5610 
cs=0xb19;eip=0x00137e; 	T(MOV(ax, word_2d0dc));	// 21064 mov     ax, word_2D0DC ;~ 0B19:137E
cs=0xb19;eip=0x001381; 	T(CMP(word_2d06c, ax));	// 21065 cmp     word_2D06C, ax ;~ 0B19:1381
cs=0xb19;eip=0x001385; 	R(JC(loc_1aafa));	// 21066 jb      short loc_1AAFA ;~ 0B19:1385
cs=0xb19;eip=0x001387; 	R(JMP(loc_1ab3d));	// 21067 jmp     loc_1AB3D ;~ 0B19:1387
loc_1aafa:
	// 5611 
cs=0xb19;eip=0x00138a; 	X(INC(word_2d086));	// 21071 inc     word_2D086 ;~ 0B19:138A
cs=0xb19;eip=0x00138e; 	T(MOV(ax, word_2d06c));	// 21072 mov     ax, word_2D06C ;~ 0B19:138E
cs=0xb19;eip=0x001391; 	T(ADD(ax, 0x1E));	// 21073 add     ax, 1Eh ;~ 0B19:1391
cs=0xb19;eip=0x001394; 	T(CMP(ax, word_2d0dc));	// 21074 cmp     ax, word_2D0DC ;~ 0B19:1394
cs=0xb19;eip=0x001398; 	R(JC(loc_1ab0d));	// 21075 jb      short loc_1AB0D ;~ 0B19:1398
cs=0xb19;eip=0x00139a; 	R(JMP(loc_1ab11));	// 21076 jmp     loc_1AB11 ;~ 0B19:139A
loc_1ab0d:
	// 5612 
cs=0xb19;eip=0x00139d; 	X(INC(word_2d086));	// 21080 inc     word_2D086 ;~ 0B19:139D
loc_1ab11:
	// 5613 
cs=0xb19;eip=0x0013a1; 	T(MOV(ax, word_2d06c));	// 21083 mov     ax, word_2D06C ;~ 0B19:13A1
cs=0xb19;eip=0x0013a4; 	T(ADD(ax, 0x3C));	// 21084 add     ax, 3Ch ; '<' ;~ 0B19:13A4
cs=0xb19;eip=0x0013a7; 	T(CMP(ax, word_2d0dc));	// 21085 cmp     ax, word_2D0DC ;~ 0B19:13A7
cs=0xb19;eip=0x0013ab; 	R(JC(loc_1ab20));	// 21086 jb      short loc_1AB20 ;~ 0B19:13AB
cs=0xb19;eip=0x0013ad; 	R(JMP(loc_1ab25));	// 21087 jmp     loc_1AB25 ;~ 0B19:13AD
loc_1ab20:
	// 5614 
cs=0xb19;eip=0x0013b0; 	X(ADD(word_2d086, 2));	// 21091 add     word_2D086, 2 ;~ 0B19:13B0
loc_1ab25:
	// 5615 
cs=0xb19;eip=0x0013b5; 	T(CMP(word_2d086, 0x10));	// 21094 cmp     word_2D086, 10h ;~ 0B19:13B5
cs=0xb19;eip=0x0013ba; 	R(JGE(loc_1ab2f));	// 21095 jge     short loc_1AB2F ;~ 0B19:13BA
cs=0xb19;eip=0x0013bc; 	R(JMP(loc_1ab3a));	// 21096 jmp     loc_1AB3A ;~ 0B19:13BC
loc_1ab2f:
	// 5616 
cs=0xb19;eip=0x0013bf; 	X(MOV(word_2d086, 0));	// 21100 mov     word_2D086, 0 ;~ 0B19:13BF
cs=0xb19;eip=0x0013c5; 	R(CALLF(sub_1ef94,0));	// 21101 call    sub_1EF94 ;~ 0B19:13C5
loc_1ab3a:
	// 5617 
cs=0xb19;eip=0x0013ca; 	R(JMP(loc_1ab43));	// 21104 jmp     loc_1AB43 ;~ 0B19:13CA
loc_1ab3d:
	// 5618 
cs=0xb19;eip=0x0013cd; 	X(MOV(word_2d086, 0));	// 21108 mov     word_2D086, 0 ;~ 0B19:13CD
loc_1ab43:
	// 5619 
cs=0xb19;eip=0x0013d3; 	X(POP(si));	// 21111 pop     si ;~ 0B19:13D3
cs=0xb19;eip=0x0013d4; 	X(POP(di));	// 21112 pop     di ;~ 0B19:13D4
cs=0xb19;eip=0x0013d5; 	T(MOV(sp, bp));	// 21113 mov     sp, bp ;~ 0B19:13D5
cs=0xb19;eip=0x0013d7; 	X(POP(bp));	// 21114 pop     bp ;~ 0B19:13D7
cs=0xb19;eip=0x0013d8; 	R(RETF(0));	// 21115 retf ;~ 0B19:13D8

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_197c5: 	goto loc_197c5;
        case m2c::kloc_197c8: 	goto loc_197c8;
        case m2c::kloc_197d1: 	goto loc_197d1;
        case m2c::kloc_1982e: 	goto loc_1982e;
        case m2c::kloc_19838: 	goto loc_19838;
        case m2c::kloc_19842: 	goto loc_19842;
        case m2c::kloc_1984c: 	goto loc_1984c;
        case m2c::kloc_19856: 	goto loc_19856;
        case m2c::kloc_19860: 	goto loc_19860;
        case m2c::kloc_198a8: 	goto loc_198a8;
        case m2c::kloc_198b1: 	goto loc_198b1;
        case m2c::kloc_198bb: 	goto loc_198bb;
        case m2c::kloc_198c4: 	goto loc_198c4;
        case m2c::kloc_198e2: 	goto loc_198e2;
        case m2c::kloc_198ea: 	goto loc_198ea;
        case m2c::kloc_198fd: 	goto loc_198fd;
        case m2c::kloc_19905: 	goto loc_19905;
        case m2c::kloc_19910: 	goto loc_19910;
        case m2c::kloc_19916: 	goto loc_19916;
        case m2c::kloc_1991c: 	goto loc_1991c;
        case m2c::kloc_19949: 	goto loc_19949;
        case m2c::kloc_1996f: 	goto loc_1996f;
        case m2c::kloc_1997d: 	goto loc_1997d;
        case m2c::kloc_19980: 	goto loc_19980;
        case m2c::kloc_19992: 	goto loc_19992;
        case m2c::kloc_199b4: 	goto loc_199b4;
        case m2c::kloc_199c1: 	goto loc_199c1;
        case m2c::kloc_199ef: 	goto loc_199ef;
        case m2c::kloc_19a0a: 	goto loc_19a0a;
        case m2c::kloc_19a18: 	goto loc_19a18;
        case m2c::kloc_19a20: 	goto loc_19a20;
        case m2c::kloc_19a2e: 	goto loc_19a2e;
        case m2c::kloc_19a36: 	goto loc_19a36;
        case m2c::kloc_19a44: 	goto loc_19a44;
        case m2c::kloc_19a4a: 	goto loc_19a4a;
        case m2c::kloc_19adc: 	goto loc_19adc;
        case m2c::kloc_19adf: 	goto loc_19adf;
        case m2c::kloc_19ae8: 	goto loc_19ae8;
        case m2c::kloc_19b09: 	goto loc_19b09;
        case m2c::kloc_19b1a: 	goto loc_19b1a;
        case m2c::kloc_19b28: 	goto loc_19b28;
        case m2c::kloc_19b2b: 	goto loc_19b2b;
        case m2c::kloc_19b4f: 	goto loc_19b4f;
        case m2c::kloc_19b5d: 	goto loc_19b5d;
        case m2c::kloc_19b60: 	goto loc_19b60;
        case m2c::kloc_19b84: 	goto loc_19b84;
        case m2c::kloc_19b92: 	goto loc_19b92;
        case m2c::kloc_19b95: 	goto loc_19b95;
        case m2c::kloc_19bcd: 	goto loc_19bcd;
        case m2c::kloc_19bdb: 	goto loc_19bdb;
        case m2c::kloc_19bde: 	goto loc_19bde;
        case m2c::kloc_19bf8: 	goto loc_19bf8;
        case m2c::kloc_19bfd: 	goto loc_19bfd;
        case m2c::kloc_19c05: 	goto loc_19c05;
        case m2c::kloc_19c22: 	goto loc_19c22;
        case m2c::kloc_19c27: 	goto loc_19c27;
        case m2c::kloc_19c2e: 	goto loc_19c2e;
        case m2c::kloc_19c3b: 	goto loc_19c3b;
        case m2c::kloc_19c40: 	goto loc_19c40;
        case m2c::kloc_19c49: 	goto loc_19c49;
        case m2c::kloc_19c53: 	goto loc_19c53;
        case m2c::kloc_19c7f: 	goto loc_19c7f;
        case m2c::kloc_19c87: 	goto loc_19c87;
        case m2c::kloc_19c8a: 	goto loc_19c8a;
        case m2c::kloc_19c94: 	goto loc_19c94;
        case m2c::kloc_19caa: 	goto loc_19caa;
        case m2c::kloc_19cb9: 	goto loc_19cb9;
        case m2c::kloc_19cc1: 	goto loc_19cc1;
        case m2c::kloc_19ccd: 	goto loc_19ccd;
        case m2c::kloc_19cdd: 	goto loc_19cdd;
        case m2c::kloc_19cf1: 	goto loc_19cf1;
        case m2c::kloc_19cf7: 	goto loc_19cf7;
        case m2c::kloc_19d06: 	goto loc_19d06;
        case m2c::kloc_19d0b: 	goto loc_19d0b;
        case m2c::kloc_19d13: 	goto loc_19d13;
        case m2c::kloc_19d23: 	goto loc_19d23;
        case m2c::kloc_19d37: 	goto loc_19d37;
        case m2c::kloc_19d3d: 	goto loc_19d3d;
        case m2c::kloc_19d74: 	goto loc_19d74;
        case m2c::kloc_19d79: 	goto loc_19d79;
        case m2c::kloc_19d80: 	goto loc_19d80;
        case m2c::kloc_19d8c: 	goto loc_19d8c;
        case m2c::kloc_19dc9: 	goto loc_19dc9;
        case m2c::kloc_19dce: 	goto loc_19dce;
        case m2c::kloc_19dd5: 	goto loc_19dd5;
        case m2c::kloc_19e06: 	goto loc_19e06;
        case m2c::kloc_19e14: 	goto loc_19e14;
        case m2c::kloc_19e17: 	goto loc_19e17;
        case m2c::kloc_19e24: 	goto loc_19e24;
        case m2c::kloc_19e5e: 	goto loc_19e5e;
        case m2c::kloc_19e63: 	goto loc_19e63;
        case m2c::kloc_19e6a: 	goto loc_19e6a;
        case m2c::kloc_19e6f: 	goto loc_19e6f;
        case m2c::kloc_19e79: 	goto loc_19e79;
        case m2c::kloc_19ea1: 	goto loc_19ea1;
        case m2c::kloc_19ec5: 	goto loc_19ec5;
        case m2c::kloc_19ed8: 	goto loc_19ed8;
        case m2c::kloc_19eec: 	goto loc_19eec;
        case m2c::kloc_19ef2: 	goto loc_19ef2;
        case m2c::kloc_19efc: 	goto loc_19efc;
        case m2c::kloc_19f06: 	goto loc_19f06;
        case m2c::kloc_19f0c: 	goto loc_19f0c;
        case m2c::kloc_19f3a: 	goto loc_19f3a;
        case m2c::kloc_19f44: 	goto loc_19f44;
        case m2c::kloc_19f6f: 	goto loc_19f6f;
        case m2c::kloc_19f79: 	goto loc_19f79;
        case m2c::kloc_19fab: 	goto loc_19fab;
        case m2c::kloc_19fb4: 	goto loc_19fb4;
        case m2c::kloc_19fce: 	goto loc_19fce;
        case m2c::kloc_19fd8: 	goto loc_19fd8;
        case m2c::kloc_19fe2: 	goto loc_19fe2;
        case m2c::kloc_19ff4: 	goto loc_19ff4;
        case m2c::kloc_19ff7: 	goto loc_19ff7;
        case m2c::kloc_1a001: 	goto loc_1a001;
        case m2c::kloc_1a00b: 	goto loc_1a00b;
        case m2c::kloc_1a017: 	goto loc_1a017;
        case m2c::kloc_1a032: 	goto loc_1a032;
        case m2c::kloc_1a03c: 	goto loc_1a03c;
        case m2c::kloc_1a046: 	goto loc_1a046;
        case m2c::kloc_1a04e: 	goto loc_1a04e;
        case m2c::kloc_1a051: 	goto loc_1a051;
        case m2c::kloc_1a05b: 	goto loc_1a05b;
        case m2c::kloc_1a065: 	goto loc_1a065;
        case m2c::kloc_1a071: 	goto loc_1a071;
        case m2c::kloc_1a08c: 	goto loc_1a08c;
        case m2c::kloc_1a096: 	goto loc_1a096;
        case m2c::kloc_1a09b: 	goto loc_1a09b;
        case m2c::kloc_1a09e: 	goto loc_1a09e;
        case m2c::kloc_1a0a4: 	goto loc_1a0a4;
        case m2c::kloc_1a0ac: 	goto loc_1a0ac;
        case m2c::kloc_1a0b4: 	goto loc_1a0b4;
        case m2c::kloc_1a0bc: 	goto loc_1a0bc;
        case m2c::kloc_1a0c4: 	goto loc_1a0c4;
        case m2c::kloc_1a0cc: 	goto loc_1a0cc;
        case m2c::kloc_1a0cf: 	goto loc_1a0cf;
        case m2c::kloc_1a11b: 	goto loc_1a11b;
        case m2c::kloc_1a129: 	goto loc_1a129;
        case m2c::kloc_1a12c: 	goto loc_1a12c;
        case m2c::kloc_1a166: 	goto loc_1a166;
        case m2c::kloc_1a16f: 	goto loc_1a16f;
        case m2c::kloc_1a179: 	goto loc_1a179;
        case m2c::kloc_1a18a: 	goto loc_1a18a;
        case m2c::kloc_1a19c: 	goto loc_1a19c;
        case m2c::kloc_1a1ad: 	goto loc_1a1ad;
        case m2c::kloc_1a24f: 	goto loc_1a24f;
        case m2c::kloc_1a27e: 	goto loc_1a27e;
        case m2c::kloc_1a288: 	goto loc_1a288;
        case m2c::kloc_1a29d: 	goto loc_1a29d;
        case m2c::kloc_1a2a7: 	goto loc_1a2a7;
        case m2c::kloc_1a2b1: 	goto loc_1a2b1;
        case m2c::kloc_1a2bb: 	goto loc_1a2bb;
        case m2c::kloc_1a2c5: 	goto loc_1a2c5;
        case m2c::kloc_1a2cf: 	goto loc_1a2cf;
        case m2c::kloc_1a2ed: 	goto loc_1a2ed;
        case m2c::kloc_1a2fb: 	goto loc_1a2fb;
        case m2c::kloc_1a2fe: 	goto loc_1a2fe;
        case m2c::kloc_1a309: 	goto loc_1a309;
        case m2c::kloc_1a315: 	goto loc_1a315;
        case m2c::kloc_1a334: 	goto loc_1a334;
        case m2c::kloc_1a354: 	goto loc_1a354;
        case m2c::kloc_1a35e: 	goto loc_1a35e;
        case m2c::kloc_1a366: 	goto loc_1a366;
        case m2c::kloc_1a37a: 	goto loc_1a37a;
        case m2c::kloc_1a38e: 	goto loc_1a38e;
        case m2c::kloc_1a3a2: 	goto loc_1a3a2;
        case m2c::kloc_1a3b6: 	goto loc_1a3b6;
        case m2c::kloc_1a3bc: 	goto loc_1a3bc;
        case m2c::kloc_1a3c4: 	goto loc_1a3c4;
        case m2c::kloc_1a3cc: 	goto loc_1a3cc;
        case m2c::kloc_1a3d4: 	goto loc_1a3d4;
        case m2c::kloc_1a3dc: 	goto loc_1a3dc;
        case m2c::kloc_1a3e4: 	goto loc_1a3e4;
        case m2c::kloc_1a3e7: 	goto loc_1a3e7;
        case m2c::kloc_1a3f1: 	goto loc_1a3f1;
        case m2c::kloc_1a3fb: 	goto loc_1a3fb;
        case m2c::kloc_1a411: 	goto loc_1a411;
        case m2c::kloc_1a41b: 	goto loc_1a41b;
        case m2c::kloc_1a425: 	goto loc_1a425;
        case m2c::kloc_1a42a: 	goto loc_1a42a;
        case m2c::kloc_1a432: 	goto loc_1a432;
        case m2c::kloc_1a441: 	goto loc_1a441;
        case m2c::kloc_1a44b: 	goto loc_1a44b;
        case m2c::kloc_1a48a: 	goto loc_1a48a;
        case m2c::kloc_1a494: 	goto loc_1a494;
        case m2c::kloc_1a4a0: 	goto loc_1a4a0;
        case m2c::kloc_1a4ac: 	goto loc_1a4ac;
        case m2c::kloc_1a4b6: 	goto loc_1a4b6;
        case m2c::kloc_1a4c0: 	goto loc_1a4c0;
        case m2c::kloc_1a4dd: 	goto loc_1a4dd;
        case m2c::kloc_1a4e7: 	goto loc_1a4e7;
        case m2c::kloc_1a50a: 	goto loc_1a50a;
        case m2c::kloc_1a52c: 	goto loc_1a52c;
        case m2c::kloc_1a52f: 	goto loc_1a52f;
        case m2c::kloc_1a547: 	goto loc_1a547;
        case m2c::kloc_1a551: 	goto loc_1a551;
        case m2c::kloc_1a556: 	goto loc_1a556;
        case m2c::kloc_1a560: 	goto loc_1a560;
        case m2c::kloc_1a56a: 	goto loc_1a56a;
        case m2c::kloc_1a574: 	goto loc_1a574;
        case m2c::kloc_1a58d: 	goto loc_1a58d;
        case m2c::kloc_1a597: 	goto loc_1a597;
        case m2c::kloc_1a5c6: 	goto loc_1a5c6;
        case m2c::kloc_1a5d4: 	goto loc_1a5d4;
        case m2c::kloc_1a5d7: 	goto loc_1a5d7;
        case m2c::kloc_1a5ef: 	goto loc_1a5ef;
        case m2c::kloc_1a5ff: 	goto loc_1a5ff;
        case m2c::kloc_1a604: 	goto loc_1a604;
        case m2c::kloc_1a60e: 	goto loc_1a60e;
        case m2c::kloc_1a613: 	goto loc_1a613;
        case m2c::kloc_1a621: 	goto loc_1a621;
        case m2c::kloc_1a629: 	goto loc_1a629;
        case m2c::kloc_1a633: 	goto loc_1a633;
        case m2c::kloc_1a6a0: 	goto loc_1a6a0;
        case m2c::kloc_1a6a8: 	goto loc_1a6a8;
        case m2c::kloc_1a6b3: 	goto loc_1a6b3;
        case m2c::kloc_1a6b8: 	goto loc_1a6b8;
        case m2c::kloc_1a6c3: 	goto loc_1a6c3;
        case m2c::kloc_1a6c8: 	goto loc_1a6c8;
        case m2c::kloc_1a6d2: 	goto loc_1a6d2;
        case m2c::kloc_1a6dc: 	goto loc_1a6dc;
        case m2c::kloc_1a6e2: 	goto loc_1a6e2;
        case m2c::kloc_1a6e5: 	goto loc_1a6e5;
        case m2c::kloc_1a6ea: 	goto loc_1a6ea;
        case m2c::kloc_1a708: 	goto loc_1a708;
        case m2c::kloc_1a712: 	goto loc_1a712;
        case m2c::kloc_1a71c: 	goto loc_1a71c;
        case m2c::kloc_1a726: 	goto loc_1a726;
        case m2c::kloc_1a72e: 	goto loc_1a72e;
        case m2c::kloc_1a767: 	goto loc_1a767;
        case m2c::kloc_1a770: 	goto loc_1a770;
        case m2c::kloc_1a77d: 	goto loc_1a77d;
        case m2c::kloc_1a782: 	goto loc_1a782;
        case m2c::kloc_1a78b: 	goto loc_1a78b;
        case m2c::kloc_1a797: 	goto loc_1a797;
        case m2c::kloc_1a7a3: 	goto loc_1a7a3;
        case m2c::kloc_1a7a6: 	goto loc_1a7a6;
        case m2c::kloc_1a7b2: 	goto loc_1a7b2;
        case m2c::kloc_1a7b5: 	goto loc_1a7b5;
        case m2c::kloc_1a7be: 	goto loc_1a7be;
        case m2c::kloc_1a7d8: 	goto loc_1a7d8;
        case m2c::kloc_1a7dd: 	goto loc_1a7dd;
        case m2c::kloc_1a7e4: 	goto loc_1a7e4;
        case m2c::kloc_1a7f0: 	goto loc_1a7f0;
        case m2c::kloc_1a7fc: 	goto loc_1a7fc;
        case m2c::kloc_1a7ff: 	goto loc_1a7ff;
        case m2c::kloc_1a80b: 	goto loc_1a80b;
        case m2c::kloc_1a842: 	goto loc_1a842;
        case m2c::kloc_1a849: 	goto loc_1a849;
        case m2c::kloc_1a853: 	goto loc_1a853;
        case m2c::kloc_1a857: 	goto loc_1a857;
        case m2c::kloc_1a861: 	goto loc_1a861;
        case m2c::kloc_1a86e: 	goto loc_1a86e;
        case m2c::kloc_1a873: 	goto loc_1a873;
        case m2c::kloc_1a8ee: 	goto loc_1a8ee;
        case m2c::kloc_1a912: 	goto loc_1a912;
        case m2c::kloc_1a91c: 	goto loc_1a91c;
        case m2c::kloc_1a926: 	goto loc_1a926;
        case m2c::kloc_1a929: 	goto loc_1a929;
        case m2c::kloc_1a933: 	goto loc_1a933;
        case m2c::kloc_1a93f: 	goto loc_1a93f;
        case m2c::kloc_1a949: 	goto loc_1a949;
        case m2c::kloc_1a953: 	goto loc_1a953;
        case m2c::kloc_1a95a: 	goto loc_1a95a;
        case m2c::kloc_1a970: 	goto loc_1a970;
        case m2c::kloc_1a978: 	goto loc_1a978;
        case m2c::kloc_1a98f: 	goto loc_1a98f;
        case m2c::kloc_1a994: 	goto loc_1a994;
        case m2c::kloc_1a9ab: 	goto loc_1a9ab;
        case m2c::kloc_1a9b0: 	goto loc_1a9b0;
        case m2c::kloc_1a9bb: 	goto loc_1a9bb;
        case m2c::kloc_1a9c0: 	goto loc_1a9c0;
        case m2c::kloc_1a9ca: 	goto loc_1a9ca;
        case m2c::kloc_1a9d0: 	goto loc_1a9d0;
        case m2c::kloc_1a9d9: 	goto loc_1a9d9;
        case m2c::kloc_1a9e3: 	goto loc_1a9e3;
        case m2c::kloc_1a9ea: 	goto loc_1a9ea;
        case m2c::kloc_1a9fe: 	goto loc_1a9fe;
        case m2c::kloc_1aa03: 	goto loc_1aa03;
        case m2c::kloc_1aa11: 	goto loc_1aa11;
        case m2c::kloc_1aa17: 	goto loc_1aa17;
        case m2c::kloc_1aa21: 	goto loc_1aa21;
        case m2c::kloc_1aa2b: 	goto loc_1aa2b;
        case m2c::kloc_1aa34: 	goto loc_1aa34;
        case m2c::kloc_1aa3e: 	goto loc_1aa3e;
        case m2c::kloc_1aa46: 	goto loc_1aa46;
        case m2c::kloc_1aa55: 	goto loc_1aa55;
        case m2c::kloc_1aa64: 	goto loc_1aa64;
        case m2c::kloc_1aa76: 	goto loc_1aa76;
        case m2c::kloc_1aa7e: 	goto loc_1aa7e;
        case m2c::kloc_1aa86: 	goto loc_1aa86;
        case m2c::kloc_1aa8e: 	goto loc_1aa8e;
        case m2c::kloc_1aa96: 	goto loc_1aa96;
        case m2c::kloc_1aa9e: 	goto loc_1aa9e;
        case m2c::kloc_1aaa1: 	goto loc_1aaa1;
        case m2c::kloc_1aaa4: 	goto loc_1aaa4;
        case m2c::kloc_1aaae: 	goto loc_1aaae;
        case m2c::kloc_1aacb: 	goto loc_1aacb;
        case m2c::kloc_1aadd: 	goto loc_1aadd;
        case m2c::kloc_1aaee: 	goto loc_1aaee;
        case m2c::kloc_1aafa: 	goto loc_1aafa;
        case m2c::kloc_1ab0d: 	goto loc_1ab0d;
        case m2c::kloc_1ab11: 	goto loc_1ab11;
        case m2c::kloc_1ab20: 	goto loc_1ab20;
        case m2c::kloc_1ab25: 	goto loc_1ab25;
        case m2c::kloc_1ab2f: 	goto loc_1ab2f;
        case m2c::kloc_1ab3a: 	goto loc_1ab3a;
        case m2c::kloc_1ab3d: 	goto loc_1ab3d;
        case m2c::kloc_1ab43: 	goto loc_1ab43;
        case m2c::kret_b19_1303: 	goto ret_b19_1303;
        case m2c::kret_b19_8: 	goto ret_b19_8;
        case m2c::kret_b19_931: 	goto ret_b19_931;
        case m2c::kret_b19_c49: 	goto ret_b19_c49;
        case m2c::kret_b19_ca8: 	goto ret_b19_ca8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

