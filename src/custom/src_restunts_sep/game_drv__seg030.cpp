/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool audio_make_filename(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    audio_make_filename:
    _begin:
#undef var_2
#define var_2 -2
	// 87441 var_2           = word ptr -2 ;~ 2B6E:000E
#undef arg_0
#define arg_0 6
	// 87442 arg_0           = dword ptr  6 ;~ 2B6E:000E
#undef arg_4
#define arg_4 0x0A
	// 87443 arg_4           = word ptr  0Ah ;~ 2B6E:000E
cs=0x2b6e;eip=0x00000e; 	X(PUSH(bp));	// 87445 push    bp ;~ 2B6E:000E
cs=0x2b6e;eip=0x00000f; 	T(MOV(bp, sp));	// 87446 mov     bp, sp ;~ 2B6E:000F
cs=0x2b6e;eip=0x000011; 	T(SUB(sp, 2));	// 87447 sub     sp, 2 ;~ 2B6E:0011
cs=0x2b6e;eip=0x000014; 	X(PUSH(di));	// 87448 push    di ;~ 2B6E:0014
cs=0x2b6e;eip=0x000015; 	X(PUSH(si));	// 87449 push    si              ; int ;~ 2B6E:0015
cs=0x2b6e;eip=0x000016; 	T(MOV(si, offset(dseg,audio_filetemp)));	// 87450 mov     si, offset audio_filetemp ;~ 2B6E:0016
cs=0x2b6e;eip=0x000019; 	X(PUSH(ds));	// 87451 push    ds ;~ 2B6E:0019
cs=0x2b6e;eip=0x00001a; 	X(POP(es));	// 87452 pop     es ;~ 2B6E:001A
cs=0x2b6e;eip=0x00001b; 	T(MOV(di, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 87454 mov     di, word ptr [bp+arg_0] ;~ 2B6E:001B
cs=0x2b6e;eip=0x00001e; 	T(MOV(cx, 0x0FFFF));	// 87455 mov     cx, 0FFFFh ;~ 2B6E:001E
cs=0x2b6e;eip=0x000021; 	T(XOR(ax, ax));	// 87456 xor     ax, ax ;~ 2B6E:0021
	// 87457 repne scasb ;~ 2B6E:0023
cs=0x2b6e;eip=0x000023; 	T(	REPNE SCASB);	// 87457 repne scasb ;~ 2B6E:0023
cs=0x2b6e;eip=0x000025; 	T(NOT(cx));	// 87458 not     cx ;~ 2B6E:0025
cs=0x2b6e;eip=0x000027; 	T(SUB(di, cx));	// 87459 sub     di, cx ;~ 2B6E:0027
cs=0x2b6e;eip=0x000029; 	T(XCHG(di, si));	// 87460 xchg    di, si ;~ 2B6E:0029
cs=0x2b6e;eip=0x00002b; 	T(SHR(cx, 1));	// 87461 shr     cx, 1 ;~ 2B6E:002B
	// 87462 repne movsw ;~ 2B6E:002D
cs=0x2b6e;eip=0x00002d; 	X(	REPNE MOVSW);	// 87462 repne movsw ;~ 2B6E:002D
cs=0x2b6e;eip=0x00002f; 	T(ADC(cx, cx));	// 87463 adc     cx, cx ;~ 2B6E:002F
	// 87464 repne movsb ;~ 2B6E:0031
cs=0x2b6e;eip=0x000031; 	X(	REPNE MOVSB);	// 87464 repne movsb ;~ 2B6E:0031
cs=0x2b6e;eip=0x000033; 	T(MOV(ax, 0x5C));	// 87465 mov     ax, 5Ch ; '\' ;~ 2B6E:0033
cs=0x2b6e;eip=0x000036; 	X(PUSH(ax));	// 87466 push    ax ;~ 2B6E:0036
cs=0x2b6e;eip=0x000037; 	T(MOV(ax, offset(dseg,audio_filetemp)));	// 87467 mov     ax, offset audio_filetemp ;~ 2B6E:0037
cs=0x2b6e;eip=0x00003a; 	X(PUSH(ax));	// 87468 push    ax              ; char * ;~ 2B6E:003A
cs=0x2b6e;eip=0x00003b; 	J(CALLF(_strrchr,0));	// 87469 call    _strrchr ;~ 2B6E:003B
cs=0x2b6e;eip=0x000040; 	T(ADD(sp, 4));	// 87470 add     sp, 4 ;~ 2B6E:0040
cs=0x2b6e;eip=0x000043; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 87471 mov     [bp+var_2], ax ;~ 2B6E:0043
cs=0x2b6e;eip=0x000046; 	T(OR(ax, ax));	// 87472 or      ax, ax ;~ 2B6E:0046
cs=0x2b6e;eip=0x000048; 	J(JZ(loc_39d16));	// 87473 jz      short loc_39D16 ;~ 2B6E:0048
cs=0x2b6e;eip=0x00004a; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 87474 inc     [bp+var_2] ;~ 2B6E:004A
cs=0x2b6e;eip=0x00004d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 87475 mov     bx, [bp+var_2] ;~ 2B6E:004D
cs=0x2b6e;eip=0x000050; 	X(MOV(*(raddr(ds,bx)), 0));	// 87476 mov     byte ptr [bx], 0 ;~ 2B6E:0050
cs=0x2b6e;eip=0x000053; 	J(JMP(loc_39d1b));	// 87477 jmp     short loc_39D1B ;~ 2B6E:0053
loc_39d16:
	// 9800 
cs=0x2b6e;eip=0x000056; 	X(MOV(*(audio_filetemp), 0));	// 87482 mov     audio_filetemp, 0 ;~ 2B6E:0056
loc_39d1b:
	// 9801 
cs=0x2b6e;eip=0x00005b; 	T(MOV(si, offset(dseg,audio_filetemp)));	// 87485 mov     si, offset audio_filetemp ;~ 2B6E:005B
cs=0x2b6e;eip=0x00005e; 	X(PUSH(ds));	// 87486 push    ds ;~ 2B6E:005E
cs=0x2b6e;eip=0x00005f; 	X(POP(es));	// 87487 pop     es ;~ 2B6E:005F
cs=0x2b6e;eip=0x000060; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_4))));	// 87488 mov     di, [bp+arg_4] ;~ 2B6E:0060
cs=0x2b6e;eip=0x000063; 	T(MOV(cx, 0x0FFFF));	// 87489 mov     cx, 0FFFFh ;~ 2B6E:0063
cs=0x2b6e;eip=0x000066; 	T(XOR(ax, ax));	// 87490 xor     ax, ax ;~ 2B6E:0066
	// 87491 repne scasb ;~ 2B6E:0068
cs=0x2b6e;eip=0x000068; 	T(	REPNE SCASB);	// 87491 repne scasb ;~ 2B6E:0068
cs=0x2b6e;eip=0x00006a; 	T(NOT(cx));	// 87492 not     cx ;~ 2B6E:006A
cs=0x2b6e;eip=0x00006c; 	T(SUB(di, cx));	// 87493 sub     di, cx ;~ 2B6E:006C
cs=0x2b6e;eip=0x00006e; 	T(MOV(bx, cx));	// 87494 mov     bx, cx ;~ 2B6E:006E
cs=0x2b6e;eip=0x000070; 	T(XCHG(di, si));	// 87495 xchg    di, si ;~ 2B6E:0070
cs=0x2b6e;eip=0x000072; 	T(MOV(cx, 0x0FFFF));	// 87496 mov     cx, 0FFFFh ;~ 2B6E:0072
	// 87497 repne scasb ;~ 2B6E:0075
cs=0x2b6e;eip=0x000075; 	T(	REPNE SCASB);	// 87497 repne scasb ;~ 2B6E:0075
cs=0x2b6e;eip=0x000077; 	T(DEC(di));	// 87498 dec     di ;~ 2B6E:0077
cs=0x2b6e;eip=0x000078; 	T(MOV(cx, bx));	// 87499 mov     cx, bx ;~ 2B6E:0078
cs=0x2b6e;eip=0x00007a; 	T(SHR(cx, 1));	// 87500 shr     cx, 1 ;~ 2B6E:007A
	// 87501 repne movsw ;~ 2B6E:007C
cs=0x2b6e;eip=0x00007c; 	X(	REPNE MOVSW);	// 87501 repne movsw ;~ 2B6E:007C
cs=0x2b6e;eip=0x00007e; 	T(ADC(cx, cx));	// 87502 adc     cx, cx ;~ 2B6E:007E
	// 87503 repne movsb ;~ 2B6E:0080
cs=0x2b6e;eip=0x000080; 	X(	REPNE MOVSB);	// 87503 repne movsb ;~ 2B6E:0080
cs=0x2b6e;eip=0x000082; 	T(MOV(ax, 0x5C));	// 87504 mov     ax, 5Ch ; '\' ;~ 2B6E:0082
cs=0x2b6e;eip=0x000085; 	X(PUSH(ax));	// 87505 push    ax ;~ 2B6E:0085
cs=0x2b6e;eip=0x000086; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 87506 push    word ptr [bp+arg_0] ; char * ;~ 2B6E:0086
cs=0x2b6e;eip=0x000089; 	J(CALLF(_strrchr,0));	// 87507 call    _strrchr ;~ 2B6E:0089
cs=0x2b6e;eip=0x00008e; 	T(ADD(sp, 4));	// 87508 add     sp, 4 ;~ 2B6E:008E
cs=0x2b6e;eip=0x000091; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 87509 mov     [bp+var_2], ax ;~ 2B6E:0091
cs=0x2b6e;eip=0x000094; 	T(OR(ax, ax));	// 87510 or      ax, ax ;~ 2B6E:0094
cs=0x2b6e;eip=0x000096; 	J(JZ(loc_39d6a));	// 87511 jz      short loc_39D6A ;~ 2B6E:0096
cs=0x2b6e;eip=0x000098; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 87512 inc     [bp+var_2] ;~ 2B6E:0098
cs=0x2b6e;eip=0x00009b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 87513 mov     bx, [bp+var_2] ;~ 2B6E:009B
cs=0x2b6e;eip=0x00009e; 	T(MOV(di, bx));	// 87514 mov     di, bx ;~ 2B6E:009E
cs=0x2b6e;eip=0x0000a0; 	T(MOV(si, offset(dseg,audio_filetemp)));	// 87515 mov     si, offset audio_filetemp ;~ 2B6E:00A0
cs=0x2b6e;eip=0x0000a3; 	T(MOV(ax, ds));	// 87516 mov     ax, ds ;~ 2B6E:00A3
cs=0x2b6e;eip=0x0000a5; 	T(MOV(es, ax));	// 87517 mov     es, ax ;~ 2B6E:00A5
cs=0x2b6e;eip=0x0000a7; 	J(JMP(loc_39d72));	// 87518 jmp     short loc_39D72 ;~ 2B6E:00A7
loc_39d6a:
	// 9802 
cs=0x2b6e;eip=0x0000aa; 	T(MOV(si, offset(dseg,audio_filetemp)));	// 87523 mov     si, offset audio_filetemp ;~ 2B6E:00AA
cs=0x2b6e;eip=0x0000ad; 	X(PUSH(ds));	// 87524 push    ds ;~ 2B6E:00AD
cs=0x2b6e;eip=0x0000ae; 	X(POP(es));	// 87525 pop     es ;~ 2B6E:00AE
cs=0x2b6e;eip=0x0000af; 	T(MOV(di, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 87526 mov     di, word ptr [bp+arg_0] ;~ 2B6E:00AF
loc_39d72:
	// 9803 
cs=0x2b6e;eip=0x0000b2; 	T(MOV(cx, 0x0FFFF));	// 87529 mov     cx, 0FFFFh ;~ 2B6E:00B2
cs=0x2b6e;eip=0x0000b5; 	T(XOR(ax, ax));	// 87530 xor     ax, ax ;~ 2B6E:00B5
	// 87531 repne scasb ;~ 2B6E:00B7
cs=0x2b6e;eip=0x0000b7; 	T(	REPNE SCASB);	// 87531 repne scasb ;~ 2B6E:00B7
cs=0x2b6e;eip=0x0000b9; 	T(NOT(cx));	// 87532 not     cx ;~ 2B6E:00B9
cs=0x2b6e;eip=0x0000bb; 	T(SUB(di, cx));	// 87533 sub     di, cx ;~ 2B6E:00BB
cs=0x2b6e;eip=0x0000bd; 	T(MOV(bx, cx));	// 87534 mov     bx, cx ;~ 2B6E:00BD
cs=0x2b6e;eip=0x0000bf; 	T(XCHG(di, si));	// 87535 xchg    di, si ;~ 2B6E:00BF
cs=0x2b6e;eip=0x0000c1; 	T(MOV(cx, 0x0FFFF));	// 87536 mov     cx, 0FFFFh ;~ 2B6E:00C1
	// 87537 repne scasb ;~ 2B6E:00C4
cs=0x2b6e;eip=0x0000c4; 	T(	REPNE SCASB);	// 87537 repne scasb ;~ 2B6E:00C4
cs=0x2b6e;eip=0x0000c6; 	T(DEC(di));	// 87538 dec     di ;~ 2B6E:00C6
cs=0x2b6e;eip=0x0000c7; 	T(MOV(cx, bx));	// 87539 mov     cx, bx ;~ 2B6E:00C7
cs=0x2b6e;eip=0x0000c9; 	T(SHR(cx, 1));	// 87540 shr     cx, 1 ;~ 2B6E:00C9
	// 87541 repne movsw ;~ 2B6E:00CB
cs=0x2b6e;eip=0x0000cb; 	X(	REPNE MOVSW);	// 87541 repne movsw ;~ 2B6E:00CB
cs=0x2b6e;eip=0x0000cd; 	T(ADC(cx, cx));	// 87542 adc     cx, cx ;~ 2B6E:00CD
	// 87543 repne movsb ;~ 2B6E:00CF
cs=0x2b6e;eip=0x0000cf; 	X(	REPNE MOVSB);	// 87543 repne movsb ;~ 2B6E:00CF
cs=0x2b6e;eip=0x0000d1; 	T(MOV(di, offset(dseg,audio_filetemp)));	// 87544 mov     di, offset audio_filetemp ;~ 2B6E:00D1
cs=0x2b6e;eip=0x0000d4; 	T(MOV(ax, ds));	// 87545 mov     ax, ds ;~ 2B6E:00D4
cs=0x2b6e;eip=0x0000d6; 	T(MOV(es, ax));	// 87546 mov     es, ax ;~ 2B6E:00D6
cs=0x2b6e;eip=0x0000d8; 	T(MOV(cx, 0x0FFFF));	// 87547 mov     cx, 0FFFFh ;~ 2B6E:00D8
cs=0x2b6e;eip=0x0000db; 	T(XOR(ax, ax));	// 87548 xor     ax, ax ;~ 2B6E:00DB
	// 87549 repne scasb ;~ 2B6E:00DD
cs=0x2b6e;eip=0x0000dd; 	T(	REPNE SCASB);	// 87549 repne scasb ;~ 2B6E:00DD
cs=0x2b6e;eip=0x0000df; 	T(NOT(cx));	// 87550 not     cx ;~ 2B6E:00DF
cs=0x2b6e;eip=0x0000e1; 	T(DEC(cx));	// 87551 dec     cx ;~ 2B6E:00E1
cs=0x2b6e;eip=0x0000e2; 	T(MOV(bx, cx));	// 87552 mov     bx, cx ;~ 2B6E:00E2
cs=0x2b6e;eip=0x0000e4; 	T(CMP(*((&byte_42d2a)+bx), 0x2E));	// 87553 cmp     byte_42D2A[bx], 2Eh ; '.' ;~ 2B6E:00E4
cs=0x2b6e;eip=0x0000e9; 	J(JNZ(loc_39dbf));	// 87554 jnz     short loc_39DBF ;~ 2B6E:00E9
cs=0x2b6e;eip=0x0000eb; 	T(MOV(di, offset(dseg,audio_filetemp)));	// 87555 mov     di, offset audio_filetemp ;~ 2B6E:00EB
cs=0x2b6e;eip=0x0000ee; 	T(MOV(ax, ds));	// 87556 mov     ax, ds ;~ 2B6E:00EE
cs=0x2b6e;eip=0x0000f0; 	T(MOV(cx, 0x0FFFF));	// 87557 mov     cx, 0FFFFh ;~ 2B6E:00F0
cs=0x2b6e;eip=0x0000f3; 	T(XOR(ax, ax));	// 87558 xor     ax, ax ;~ 2B6E:00F3
	// 87559 repne scasb ;~ 2B6E:00F5
cs=0x2b6e;eip=0x0000f5; 	T(	REPNE SCASB);	// 87559 repne scasb ;~ 2B6E:00F5
cs=0x2b6e;eip=0x0000f7; 	T(NOT(cx));	// 87560 not     cx ;~ 2B6E:00F7
cs=0x2b6e;eip=0x0000f9; 	T(DEC(cx));	// 87561 dec     cx ;~ 2B6E:00F9
cs=0x2b6e;eip=0x0000fa; 	T(CMP(cx, 4));	// 87562 cmp     cx, 4 ;~ 2B6E:00FA
cs=0x2b6e;eip=0x0000fd; 	J(JA(loc_39e0b));	// 87563 ja      short loc_39E0B ;~ 2B6E:00FD
loc_39dbf:
	// 9804 
cs=0x2b6e;eip=0x0000ff; 	T(MOV(di, offset(dseg,unk_407ac)));	// 87566 mov     di, offset unk_407AC ;~ 2B6E:00FF
cs=0x2b6e;eip=0x000102; 	T(MOV(si, offset(dseg,audio_filetemp)));	// 87567 mov     si, offset audio_filetemp ;~ 2B6E:0102
cs=0x2b6e;eip=0x000105; 	T(MOV(ax, ds));	// 87568 mov     ax, ds ;~ 2B6E:0105
cs=0x2b6e;eip=0x000107; 	T(MOV(cx, 0x0FFFF));	// 87569 mov     cx, 0FFFFh ;~ 2B6E:0107
cs=0x2b6e;eip=0x00010a; 	T(XOR(ax, ax));	// 87570 xor     ax, ax ;~ 2B6E:010A
	// 87571 repne scasb ;~ 2B6E:010C
cs=0x2b6e;eip=0x00010c; 	T(	REPNE SCASB);	// 87571 repne scasb ;~ 2B6E:010C
cs=0x2b6e;eip=0x00010e; 	T(NOT(cx));	// 87572 not     cx ;~ 2B6E:010E
cs=0x2b6e;eip=0x000110; 	T(SUB(di, cx));	// 87573 sub     di, cx ;~ 2B6E:0110
cs=0x2b6e;eip=0x000112; 	T(MOV(bx, cx));	// 87574 mov     bx, cx ;~ 2B6E:0112
cs=0x2b6e;eip=0x000114; 	T(XCHG(di, si));	// 87575 xchg    di, si ;~ 2B6E:0114
cs=0x2b6e;eip=0x000116; 	T(MOV(cx, 0x0FFFF));	// 87576 mov     cx, 0FFFFh ;~ 2B6E:0116
	// 87577 repne scasb ;~ 2B6E:0119
cs=0x2b6e;eip=0x000119; 	T(	REPNE SCASB);	// 87577 repne scasb ;~ 2B6E:0119
cs=0x2b6e;eip=0x00011b; 	T(DEC(di));	// 87578 dec     di ;~ 2B6E:011B
cs=0x2b6e;eip=0x00011c; 	T(MOV(cx, bx));	// 87579 mov     cx, bx ;~ 2B6E:011C
cs=0x2b6e;eip=0x00011e; 	T(SHR(cx, 1));	// 87580 shr     cx, 1 ;~ 2B6E:011E
	// 87581 repne movsw ;~ 2B6E:0120
cs=0x2b6e;eip=0x000120; 	X(	REPNE MOVSW);	// 87581 repne movsw ;~ 2B6E:0120
cs=0x2b6e;eip=0x000122; 	T(ADC(cx, cx));	// 87582 adc     cx, cx ;~ 2B6E:0122
	// 87583 repne movsb ;~ 2B6E:0124
cs=0x2b6e;eip=0x000124; 	X(	REPNE MOVSB);	// 87583 repne movsb ;~ 2B6E:0124
cs=0x2b6e;eip=0x000126; 	T(MOV(si, offset(dseg,audio_filetemp)));	// 87584 mov     si, offset audio_filetemp ;~ 2B6E:0126
cs=0x2b6e;eip=0x000129; 	T(MOV(di, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 87585 mov     di, word ptr [bp+arg_0+2] ;~ 2B6E:0129
cs=0x2b6e;eip=0x00012c; 	T(MOV(cx, 0x0FFFF));	// 87586 mov     cx, 0FFFFh ;~ 2B6E:012C
cs=0x2b6e;eip=0x00012f; 	T(XOR(ax, ax));	// 87587 xor     ax, ax ;~ 2B6E:012F
	// 87588 repne scasb ;~ 2B6E:0131
cs=0x2b6e;eip=0x000131; 	T(	REPNE SCASB);	// 87588 repne scasb ;~ 2B6E:0131
cs=0x2b6e;eip=0x000133; 	T(NOT(cx));	// 87589 not     cx ;~ 2B6E:0133
cs=0x2b6e;eip=0x000135; 	T(SUB(di, cx));	// 87590 sub     di, cx ;~ 2B6E:0135
cs=0x2b6e;eip=0x000137; 	T(MOV(bx, cx));	// 87591 mov     bx, cx ;~ 2B6E:0137
cs=0x2b6e;eip=0x000139; 	T(XCHG(di, si));	// 87592 xchg    di, si ;~ 2B6E:0139
cs=0x2b6e;eip=0x00013b; 	T(MOV(cx, 0x0FFFF));	// 87593 mov     cx, 0FFFFh ;~ 2B6E:013B
	// 87594 repne scasb ;~ 2B6E:013E
cs=0x2b6e;eip=0x00013e; 	T(	REPNE SCASB);	// 87594 repne scasb ;~ 2B6E:013E
cs=0x2b6e;eip=0x000140; 	T(DEC(di));	// 87595 dec     di ;~ 2B6E:0140
cs=0x2b6e;eip=0x000141; 	T(MOV(cx, bx));	// 87596 mov     cx, bx ;~ 2B6E:0141
cs=0x2b6e;eip=0x000143; 	T(SHR(cx, 1));	// 87597 shr     cx, 1 ;~ 2B6E:0143
	// 87598 repne movsw ;~ 2B6E:0145
cs=0x2b6e;eip=0x000145; 	X(	REPNE MOVSW);	// 87598 repne movsw ;~ 2B6E:0145
cs=0x2b6e;eip=0x000147; 	T(ADC(cx, cx));	// 87599 adc     cx, cx ;~ 2B6E:0147
	// 87600 repne movsb ;~ 2B6E:0149
cs=0x2b6e;eip=0x000149; 	X(	REPNE MOVSB);	// 87600 repne movsb ;~ 2B6E:0149
loc_39e0b:
	// 9805 
cs=0x2b6e;eip=0x00014b; 	T(MOV(ax, offset(dseg,audio_filetemp)));	// 87603 mov     ax, offset audio_filetemp ;~ 2B6E:014B
cs=0x2b6e;eip=0x00014e; 	X(POP(si));	// 87604 pop     si ;~ 2B6E:014E
cs=0x2b6e;eip=0x00014f; 	X(POP(di));	// 87605 pop     di ;~ 2B6E:014F
cs=0x2b6e;eip=0x000150; 	T(MOV(sp, bp));	// 87606 mov     sp, bp ;~ 2B6E:0150
cs=0x2b6e;eip=0x000152; 	X(POP(bp));	// 87607 pop     bp ;~ 2B6E:0152
cs=0x2b6e;eip=0x000153; 	J(RETF(0));	// 87608 retf ;~ 2B6E:0153

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kaudio_make_filename: 	goto audio_make_filename;
        case m2c::kloc_39d16: 	goto loc_39d16;
        case m2c::kloc_39d1b: 	goto loc_39d1b;
        case m2c::kloc_39d6a: 	goto loc_39d6a;
        case m2c::kloc_39d72: 	goto loc_39d72;
        case m2c::kloc_39dbf: 	goto loc_39dbf;
        case m2c::kloc_39e0b: 	goto loc_39e0b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

