/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool _group26(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group26:
    _begin:
sub_2ace6:
	// 53388 
cs=0x1c70;eip=0x000006; 	X(PUSH(cx));	// 53390 push    cx ;~ 1C70:0006
ret_1c70_7:
	// 8259 
cs=0x1c70;eip=0x000007; 	X(PUSH(es));	// 53391 push    es ;~ 1C70:0007
cs=0x1c70;eip=0x000008; 	X(PUSH(si));	// 53392 push    si ;~ 1C70:0008
cs=0x1c70;eip=0x000009; 	X(AND(byte_38421, 0x0FE));	// 53393 and     byte_38421, 0FEh ;~ 1C70:0009
cs=0x1c70;eip=0x00000e; 	T(MOV(bx, 0x0F));	// 53394 mov     bx, 0Fh ;~ 1C70:000E
loc_2acf1:
	// 8260 
cs=0x1c70;eip=0x000011; 	X(PUSH(bx));	// 53397 push    bx ;~ 1C70:0011
cs=0x1c70;eip=0x000012; 	T(MOV(bl, *(raddr(ds,bx-0x38B8))));	// 53398 mov     bl, [bx-38B8h] ;~ 1C70:0012
cs=0x1c70;eip=0x000016; 	T(CMP(bl, 0x0F));	// 53399 cmp     bl, 0Fh ;~ 1C70:0016
cs=0x1c70;eip=0x000019; 	R(JA(loc_2ad23));	// 53400 ja      short loc_2AD23 ;~ 1C70:0019
cs=0x1c70;eip=0x00001b; 	T(MOV(al, 1));	// 53401 mov     al, 1 ;~ 1C70:001B
cs=0x1c70;eip=0x00001d; 	T(CMP(al, *(raddr(ds,bx-0x3753))));	// 53402 cmp     al, [bx-3753h] ;~ 1C70:001D
cs=0x1c70;eip=0x000021; 	R(JNZ(loc_2ad23));	// 53403 jnz     short loc_2AD23 ;~ 1C70:0021
cs=0x1c70;eip=0x000023; 	T(MOV(si, bx));	// 53404 mov     si, bx ;~ 1C70:0023
cs=0x1c70;eip=0x000025; 	T(SHL(si, 1));	// 53405 shl     si, 1 ;~ 1C70:0025
cs=0x1c70;eip=0x000027; 	X(MOV(byte_387cd, 1));	// 53406 mov     byte_387CD, 1 ;~ 1C70:0027
cs=0x1c70;eip=0x00002c; 	T(MOV(cx, *(dw*)(raddr(ds,si-0x3793))));	// 53407 mov     cx, [si-3793h] ;~ 1C70:002C
cs=0x1c70;eip=0x000030; 	R(CALL(__dispatch_call,off_38748));	// 53408 call    off_38748 ;~ 1C70:0030
cs=0x1c70;eip=0x000034; 	X(MOV(byte_387cd, 0));	// 53409 mov     byte_387CD, 0 ;~ 1C70:0034
cs=0x1c70;eip=0x000039; 	X(MOV(*(raddr(ds,bx-0x3753)), 0));	// 53410 mov     byte ptr [bx-3753h], 0 ;~ 1C70:0039
cs=0x1c70;eip=0x00003e; 	X(MOV(*(raddr(ds,bx-0x3733)), 0));	// 53411 mov     byte ptr [bx-3733h], 0 ;~ 1C70:003E
loc_2ad23:
	// 8261 
cs=0x1c70;eip=0x000043; 	X(POP(bx));	// 53415 pop     bx ;~ 1C70:0043
cs=0x1c70;eip=0x000044; 	T(DEC(bx));	// 53416 dec     bx ;~ 1C70:0044
cs=0x1c70;eip=0x000045; 	R(JNS(loc_2acf1));	// 53417 jns     short loc_2ACF1 ;~ 1C70:0045
cs=0x1c70;eip=0x000047; 	X(POP(si));	// 53418 pop     si ;~ 1C70:0047
cs=0x1c70;eip=0x000048; 	X(POP(es));	// 53419 pop     es ;~ 1C70:0048
cs=0x1c70;eip=0x000049; 	X(POP(cx));	// 53420 pop     cx ;~ 1C70:0049
cs=0x1c70;eip=0x00004a; 	R(RETN(0));	// 53421 retn ;~ 1C70:004A
sub_2ad2b:
	// 53429 
#undef arg_0
#define arg_0 6
	// 53432 arg_0           = dword ptr  6 ;~ 1C70:004B
#undef arg_4
#define arg_4 0x0A
	// 53433 arg_4           = byte ptr  0Ah ;~ 1C70:004B
#undef arg_6
#define arg_6 0x0C
	// 53434 arg_6           = byte ptr  0Ch ;~ 1C70:004B
ret_1c70_4b:
	// 8262 
cs=0x1c70;eip=0x00004b; 	X(PUSH(bp));	// 53436 push    bp ;~ 1C70:004B
cs=0x1c70;eip=0x00004c; 	T(MOV(bp, sp));	// 53437 mov     bp, sp ;~ 1C70:004C
cs=0x1c70;eip=0x00004e; 	X(PUSH(es));	// 53438 push    es ;~ 1C70:004E
cs=0x1c70;eip=0x00004f; 	X(PUSH(ax));	// 53439 push    ax ;~ 1C70:004F
cs=0x1c70;eip=0x000050; 	X(PUSH(bx));	// 53440 push    bx ;~ 1C70:0050
cs=0x1c70;eip=0x000051; 	X(PUSH(cx));	// 53441 push    cx ;~ 1C70:0051
cs=0x1c70;eip=0x000052; 	X(PUSH(dx));	// 53442 push    dx ;~ 1C70:0052
cs=0x1c70;eip=0x000053; 	R(CALL(sub_2ace6,0));	// 53443 call    sub_2ACE6 ;~ 1C70:0053
cs=0x1c70;eip=0x000056; 	T(LES(dx, *(dd*)(raddr(ss,bp+arg_0))));	// 53444 les     dx, [bp+arg_0] ;~ 1C70:0056
cs=0x1c70;eip=0x000059; 	T(MOV(ax, es));	// 53445 mov     ax, es ;~ 1C70:0059
cs=0x1c70;eip=0x00005b; 	T(OR(ax, dx));	// 53446 or      ax, dx ;~ 1C70:005B
cs=0x1c70;eip=0x00005d; 	R(JZ(loc_2ad8d));	// 53447 jz      short loc_2AD8D ;~ 1C70:005D
cs=0x1c70;eip=0x00005f; 	T(ADD(dx, 2));	// 53448 add     dx, 2 ;~ 1C70:005F
cs=0x1c70;eip=0x000062; 	X(MOV(*(dw*)(((db*)&dword_3867d)), dx));	// 53449 mov     word ptr dword_3867D, dx ;~ 1C70:0062
cs=0x1c70;eip=0x000066; 	X(MOV(*(dw*)(((db*)&dword_3867d)+2), es));	// 53450 mov     word ptr dword_3867D+2, es ;~ 1C70:0066
cs=0x1c70;eip=0x00006a; 	X(MOV(byte_38422, 0x10));	// 53451 mov     byte_38422, 10h ;~ 1C70:006A
cs=0x1c70;eip=0x00006f; 	T(MOV(al, *(raddr(ss,bp+arg_4))));	// 53452 mov     al, [bp+arg_4] ;~ 1C70:006F
cs=0x1c70;eip=0x000072; 	T(OR(al, al));	// 53453 or      al, al ;~ 1C70:0072
cs=0x1c70;eip=0x000074; 	R(JZ(loc_2ad6d));	// 53454 jz      short loc_2AD6D ;~ 1C70:0074
cs=0x1c70;eip=0x000076; 	T(AND(al, 0x0F));	// 53455 and     al, 0Fh ;~ 1C70:0076
cs=0x1c70;eip=0x000078; 	T(OR(al, 0x20));	// 53456 or      al, 20h ;~ 1C70:0078
cs=0x1c70;eip=0x00007a; 	X(OR(byte_38422, al));	// 53457 or      byte_38422, al ;~ 1C70:007A
cs=0x1c70;eip=0x00007e; 	T(MOV(al, *(raddr(ss,bp+arg_6))));	// 53458 mov     al, [bp+arg_6] ;~ 1C70:007E
cs=0x1c70;eip=0x000081; 	X(MOV(byte_386ac, al));	// 53459 mov     byte_386AC, al ;~ 1C70:0081
cs=0x1c70;eip=0x000084; 	X(MOV(byte_386ab, 0));	// 53460 mov     byte_386AB, 0 ;~ 1C70:0084
cs=0x1c70;eip=0x000089; 	T(MOV(al, 0x81));	// 53461 mov     al, 81h ; '' ;~ 1C70:0089
cs=0x1c70;eip=0x00008b; 	R(JMP(loc_2ad70));	// 53462 jmp     short loc_2AD70 ;~ 1C70:008B
loc_2ad6d:
	// 8263 
cs=0x1c70;eip=0x00008d; 	T(MOV(al, *(raddr(ss,bp+arg_6))));	// 53466 mov     al, [bp+arg_6] ;~ 1C70:008D
loc_2ad70:
	// 8264 
cs=0x1c70;eip=0x000090; 	X(MOV(byte_3841e, al));	// 53469 mov     byte_3841E, al ;~ 1C70:0090
cs=0x1c70;eip=0x000093; 	X(MOV(word_3867b, 1));	// 53470 mov     word_3867B, 1 ;~ 1C70:0093
cs=0x1c70;eip=0x000099; 	X(MOV(byte_38682, 0));	// 53471 mov     byte_38682, 0 ;~ 1C70:0099
cs=0x1c70;eip=0x00009e; 	R(CALL(sub_2ae31,0));	// 53472 call    sub_2AE31 ;~ 1C70:009E
cs=0x1c70;eip=0x0000a1; 	T(TEST(byte_38420, 1));	// 53473 test    byte_38420, 1 ;~ 1C70:00A1
cs=0x1c70;eip=0x0000a6; 	R(JZ(loc_2ad8d));	// 53474 jz      short loc_2AD8D ;~ 1C70:00A6
cs=0x1c70;eip=0x0000a8; 	X(OR(byte_38421, 1));	// 53475 or      byte_38421, 1 ;~ 1C70:00A8
loc_2ad8d:
	// 8265 
cs=0x1c70;eip=0x0000ad; 	X(POP(dx));	// 53479 pop     dx ;~ 1C70:00AD
cs=0x1c70;eip=0x0000ae; 	X(POP(cx));	// 53480 pop     cx ;~ 1C70:00AE
cs=0x1c70;eip=0x0000af; 	X(POP(bx));	// 53481 pop     bx ;~ 1C70:00AF
cs=0x1c70;eip=0x0000b0; 	X(POP(ax));	// 53482 pop     ax ;~ 1C70:00B0
cs=0x1c70;eip=0x0000b1; 	X(POP(es));	// 53483 pop     es ;~ 1C70:00B1
cs=0x1c70;eip=0x0000b2; 	X(POP(bp));	// 53484 pop     bp ;~ 1C70:00B2
cs=0x1c70;eip=0x0000b3; 	R(RETF(0));	// 53485 retf ;~ 1C70:00B3
sub_2ad94:
	// 53493 
#undef arg_0
#define arg_0 6
	// 53496 arg_0           = byte ptr  6 ;~ 1C70:00B4
ret_1c70_b4:
	// 8266 
cs=0x1c70;eip=0x0000b4; 	X(PUSH(bp));	// 53498 push    bp ;~ 1C70:00B4
cs=0x1c70;eip=0x0000b5; 	T(MOV(bp, sp));	// 53499 mov     bp, sp ;~ 1C70:00B5
cs=0x1c70;eip=0x0000b7; 	X(PUSH(ax));	// 53500 push    ax ;~ 1C70:00B7
cs=0x1c70;eip=0x0000b8; 	X(PUSH(bx));	// 53501 push    bx ;~ 1C70:00B8
cs=0x1c70;eip=0x0000b9; 	X(PUSH(cx));	// 53502 push    cx ;~ 1C70:00B9
cs=0x1c70;eip=0x0000ba; 	X(PUSH(dx));	// 53503 push    dx ;~ 1C70:00BA
cs=0x1c70;eip=0x0000bb; 	T(CMP(*(raddr(ss,bp+arg_0)), 0));	// 53504 cmp     [bp+arg_0], 0 ;~ 1C70:00BB
cs=0x1c70;eip=0x0000bf; 	R(JNZ(loc_2ada6));	// 53505 jnz     short loc_2ADA6 ;~ 1C70:00BF
cs=0x1c70;eip=0x0000c1; 	R(CALL(sub_2ace6,0));	// 53506 call    sub_2ACE6 ;~ 1C70:00C1
cs=0x1c70;eip=0x0000c4; 	R(JMP(loc_2adc6));	// 53507 jmp     short loc_2ADC6 ;~ 1C70:00C4
loc_2ada6:
	// 8267 
cs=0x1c70;eip=0x0000c6; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 53511 mov     al, [bp+arg_0] ;~ 1C70:00C6
cs=0x1c70;eip=0x0000c9; 	T(TEST(al, 0x80));	// 53512 test    al, 80h ;~ 1C70:00C9
cs=0x1c70;eip=0x0000cb; 	R(JZ(loc_2adb4));	// 53513 jz      short loc_2ADB4 ;~ 1C70:00CB
cs=0x1c70;eip=0x0000cd; 	X(MOV(byte_38422, 0x80));	// 53514 mov     byte_38422, 80h ; '€' ;~ 1C70:00CD
cs=0x1c70;eip=0x0000d2; 	R(JMP(loc_2adc6));	// 53515 jmp     short loc_2ADC6 ;~ 1C70:00D2
loc_2adb4:
	// 8268 
cs=0x1c70;eip=0x0000d4; 	T(AND(al, 0x0F));	// 53519 and     al, 0Fh ;~ 1C70:00D4
cs=0x1c70;eip=0x0000d6; 	T(MOV(ah, byte_38422));	// 53520 mov     ah, byte_38422 ;~ 1C70:00D6
cs=0x1c70;eip=0x0000da; 	T(AND(ah, 0x0F0));	// 53521 and     ah, 0F0h ;~ 1C70:00DA
cs=0x1c70;eip=0x0000dd; 	T(OR(ah, al));	// 53522 or      ah, al ;~ 1C70:00DD
cs=0x1c70;eip=0x0000df; 	T(OR(ah, 0x40));	// 53523 or      ah, 40h ;~ 1C70:00DF
cs=0x1c70;eip=0x0000e2; 	X(MOV(byte_38422, ah));	// 53524 mov     byte_38422, ah ;~ 1C70:00E2
loc_2adc6:
	// 8269 
cs=0x1c70;eip=0x0000e6; 	X(POP(dx));	// 53528 pop     dx ;~ 1C70:00E6
cs=0x1c70;eip=0x0000e7; 	X(POP(cx));	// 53529 pop     cx ;~ 1C70:00E7
cs=0x1c70;eip=0x0000e8; 	X(POP(bx));	// 53530 pop     bx ;~ 1C70:00E8
cs=0x1c70;eip=0x0000e9; 	X(POP(ax));	// 53531 pop     ax ;~ 1C70:00E9
cs=0x1c70;eip=0x0000ea; 	X(POP(bp));	// 53532 pop     bp ;~ 1C70:00EA
cs=0x1c70;eip=0x0000eb; 	R(RETF(0));	// 53533 retf ;~ 1C70:00EB
sub_2adcc:
	// 53541 
#undef arg_0
#define arg_0 6
	// 53544 arg_0           = word ptr  6 ;~ 1C70:00EC
ret_1c70_ec:
	// 8270 
cs=0x1c70;eip=0x0000ec; 	X(PUSH(bp));	// 53546 push    bp ;~ 1C70:00EC
cs=0x1c70;eip=0x0000ed; 	T(MOV(bp, sp));	// 53547 mov     bp, sp ;~ 1C70:00ED
cs=0x1c70;eip=0x0000ef; 	X(PUSH(ax));	// 53548 push    ax ;~ 1C70:00EF
cs=0x1c70;eip=0x0000f0; 	X(PUSH(bx));	// 53549 push    bx ;~ 1C70:00F0
cs=0x1c70;eip=0x0000f1; 	X(PUSH(cx));	// 53550 push    cx ;~ 1C70:00F1
cs=0x1c70;eip=0x0000f2; 	X(PUSH(dx));	// 53551 push    dx ;~ 1C70:00F2
cs=0x1c70;eip=0x0000f3; 	X(PUSH(si));	// 53552 push    si ;~ 1C70:00F3
cs=0x1c70;eip=0x0000f4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 53553 mov     bx, [bp+arg_0] ;~ 1C70:00F4
cs=0x1c70;eip=0x0000f7; 	T(CMP(bx, 0x0F));	// 53554 cmp     bx, 0Fh ;~ 1C70:00F7
cs=0x1c70;eip=0x0000fa; 	R(JA(loc_2ae2a));	// 53555 ja      short loc_2AE2A ;~ 1C70:00FA
cs=0x1c70;eip=0x0000fc; 	T(MOV(si, bx));	// 53556 mov     si, bx ;~ 1C70:00FC
cs=0x1c70;eip=0x0000fe; 	T(SHL(si, 1));	// 53557 shl     si, 1 ;~ 1C70:00FE
cs=0x1c70;eip=0x000100; 	T(SUB(ax, ax));	// 53558 sub     ax, ax ;~ 1C70:0100
cs=0x1c70;eip=0x000102; 	T(MOV(al, *(raddr(ds,bx-0x3753))));	// 53559 mov     al, [bx-3753h] ;~ 1C70:0102
cs=0x1c70;eip=0x000106; 	T(CMP(al, 1));	// 53560 cmp     al, 1 ;~ 1C70:0106
cs=0x1c70;eip=0x000108; 	R(JLE(loc_2ae2a));	// 53561 jle     short loc_2AE2A ;~ 1C70:0108
cs=0x1c70;eip=0x00010a; 	X(MOV(*(raddr(ds,bx-0x350B)), 0));	// 53562 mov     byte ptr [bx-350Bh], 0 ;~ 1C70:010A
cs=0x1c70;eip=0x00010f; 	X(PUSH(si));	// 53563 push    si ;~ 1C70:010F
cs=0x1c70;eip=0x000110; 	T(MOV(si, ax));	// 53564 mov     si, ax ;~ 1C70:0110
cs=0x1c70;eip=0x000112; 	T(DEC(si));	// 53565 dec     si ;~ 1C70:0112
cs=0x1c70;eip=0x000113; 	X(MOV(*(raddr(ds,si-0x34C5)), 0x0FF));	// 53566 mov     byte ptr [si-34C5h], 0FFh ;~ 1C70:0113
cs=0x1c70;eip=0x000118; 	T(SHL(si, 1));	// 53567 shl     si, 1 ;~ 1C70:0118
cs=0x1c70;eip=0x00011a; 	X(MOV(*(dw*)(raddr(ds,si-0x34D7)), 0));	// 53568 mov     word ptr [si-34D7h], 0 ;~ 1C70:011A
cs=0x1c70;eip=0x000120; 	X(POP(si));	// 53569 pop     si ;~ 1C70:0120
cs=0x1c70;eip=0x000121; 	X(MOV(byte_387cd, 1));	// 53570 mov     byte_387CD, 1 ;~ 1C70:0121
cs=0x1c70;eip=0x000126; 	T(MOV(ch, *(raddr(ds,bx-0x3743))));	// 53571 mov     ch, [bx-3743h] ;~ 1C70:0126
cs=0x1c70;eip=0x00012a; 	R(CALL(__dispatch_call,off_38748));	// 53572 call    off_38748 ;~ 1C70:012A
cs=0x1c70;eip=0x00012e; 	X(MOV(byte_387cd, 0));	// 53573 mov     byte_387CD, 0 ;~ 1C70:012E
cs=0x1c70;eip=0x000133; 	T(SUB(ax, ax));	// 53574 sub     ax, ax ;~ 1C70:0133
cs=0x1c70;eip=0x000135; 	X(MOV(*(raddr(ds,bx-0x3733)), al));	// 53575 mov     [bx-3733h], al ;~ 1C70:0135
cs=0x1c70;eip=0x000139; 	X(MOV(*(dw*)(raddr(ds,si-0x3793)), ax));	// 53576 mov     [si-3793h], ax ;~ 1C70:0139
cs=0x1c70;eip=0x00013d; 	X(MOV(*(raddr(ds,bx-0x3743)), ah));	// 53577 mov     [bx-3743h], ah ;~ 1C70:013D
cs=0x1c70;eip=0x000141; 	X(MOV(*(raddr(ds,bx-0x3753)), al));	// 53578 mov     [bx-3753h], al ;~ 1C70:0141
cs=0x1c70;eip=0x000145; 	X(AND(byte_38421, 0x0FB));	// 53579 and     byte_38421, 0FBh ;~ 1C70:0145
loc_2ae2a:
	// 8271 
cs=0x1c70;eip=0x00014a; 	X(POP(si));	// 53583 pop     si ;~ 1C70:014A
cs=0x1c70;eip=0x00014b; 	X(POP(dx));	// 53584 pop     dx ;~ 1C70:014B
cs=0x1c70;eip=0x00014c; 	X(POP(cx));	// 53585 pop     cx ;~ 1C70:014C
cs=0x1c70;eip=0x00014d; 	X(POP(bx));	// 53586 pop     bx ;~ 1C70:014D
cs=0x1c70;eip=0x00014e; 	X(POP(ax));	// 53587 pop     ax ;~ 1C70:014E
cs=0x1c70;eip=0x00014f; 	X(POP(bp));	// 53588 pop     bp ;~ 1C70:014F
cs=0x1c70;eip=0x000150; 	R(RETF(0));	// 53589 retf ;~ 1C70:0150
sub_2ae31:
	// 53596 
cs=0x1c70;eip=0x000151; 	X(PUSH(bx));	// 53598 push    bx ;~ 1C70:0151
ret_1c70_152:
	// 8272 
cs=0x1c70;eip=0x000152; 	X(PUSH(cx));	// 53599 push    cx ;~ 1C70:0152
cs=0x1c70;eip=0x000153; 	T(MOV(al, 0x40));	// 53600 mov     al, 40h ; '@' ;~ 1C70:0153
cs=0x1c70;eip=0x000155; 	T(MOV(cx, 0x0F));	// 53601 mov     cx, 0Fh ;~ 1C70:0155
loc_2ae38:
	// 8273 
cs=0x1c70;eip=0x000158; 	T(MOV(bx, cx));	// 53604 mov     bx, cx ;~ 1C70:0158
cs=0x1c70;eip=0x00015a; 	T(CMP(*(raddr(ds,bx-0x3753)), 2));	// 53605 cmp     byte ptr [bx-3753h], 2 ;~ 1C70:015A
cs=0x1c70;eip=0x00015f; 	R(JC(loc_2ae56));	// 53606 jb      short loc_2AE56 ;~ 1C70:015F
cs=0x1c70;eip=0x000161; 	T(CMP(al, *(raddr(ds,bx-0x3733))));	// 53607 cmp     al, [bx-3733h] ;~ 1C70:0161
cs=0x1c70;eip=0x000165; 	R(JC(loc_2ae5f));	// 53608 jb      short loc_2AE5F ;~ 1C70:0165
cs=0x1c70;eip=0x000167; 	X(PUSH(bx));	// 53609 push    bx ;~ 1C70:0167
cs=0x1c70;eip=0x000168; 	T(MOV(bl, *(raddr(ds,bx-0x3753))));	// 53610 mov     bl, [bx-3753h] ;~ 1C70:0168
cs=0x1c70;eip=0x00016c; 	X(PUSH(bx));	// 53611 push    bx ;~ 1C70:016C
cs=0x1c70;eip=0x00016d; 	R(CALLF(sub_2adcc,0));	// 53612 call    sub_2ADCC ;~ 1C70:016D
cs=0x1c70;eip=0x000172; 	T(ADD(sp, 2));	// 53613 add     sp, 2 ;~ 1C70:0172
cs=0x1c70;eip=0x000175; 	X(POP(bx));	// 53614 pop     bx ;~ 1C70:0175
loc_2ae56:
	// 8274 
cs=0x1c70;eip=0x000176; 	X(MOV(*(raddr(ds,bx-0x3753)), 1));	// 53617 mov     byte ptr [bx-3753h], 1 ;~ 1C70:0176
cs=0x1c70;eip=0x00017b; 	X(MOV(*(raddr(ds,bx-0x3733)), al));	// 53618 mov     [bx-3733h], al ;~ 1C70:017B
loc_2ae5f:
	// 8275 
cs=0x1c70;eip=0x00017f; 	T(DEC(cx));	// 53621 dec     cx ;~ 1C70:017F
cs=0x1c70;eip=0x000180; 	R(JNS(loc_2ae38));	// 53622 jns     short loc_2AE38 ;~ 1C70:0180
cs=0x1c70;eip=0x000182; 	X(POP(cx));	// 53623 pop     cx ;~ 1C70:0182
cs=0x1c70;eip=0x000183; 	X(POP(bx));	// 53624 pop     bx ;~ 1C70:0183
cs=0x1c70;eip=0x000184; 	R(RETN(0));	// 53625 retn ;~ 1C70:0184
seg037_proc:
	// 53629 
cs=0x1c70;eip=0x000185; 	X(PUSH(ax));	// 53629 push    ax ;~ 1C70:0185
ret_1c70_186:
	// 8276 
cs=0x1c70;eip=0x000186; 	X(PUSH(bx));	// 53630 push    bx ;~ 1C70:0186
cs=0x1c70;eip=0x000187; 	X(PUSH(cx));	// 53631 push    cx ;~ 1C70:0187
cs=0x1c70;eip=0x000188; 	X(PUSH(dx));	// 53632 push    dx ;~ 1C70:0188
cs=0x1c70;eip=0x000189; 	T(TEST(byte_38422, 0x10));	// 53633 test    byte_38422, 10h ;~ 1C70:0189
cs=0x1c70;eip=0x00018e; 	R(JZ(loc_2ae91));	// 53634 jz      short loc_2AE91 ;~ 1C70:018E
cs=0x1c70;eip=0x000190; 	T(TEST(byte_38421, 1));	// 53635 test    byte_38421, 1 ;~ 1C70:0190
cs=0x1c70;eip=0x000195; 	R(JNZ(loc_2ae91));	// 53636 jnz     short loc_2AE91 ;~ 1C70:0195
cs=0x1c70;eip=0x000197; 	T(TEST(byte_38420, 1));	// 53637 test    byte_38420, 1 ;~ 1C70:0197
cs=0x1c70;eip=0x00019c; 	R(JZ(loc_2ae91));	// 53638 jz      short loc_2AE91 ;~ 1C70:019C
cs=0x1c70;eip=0x00019e; 	X(MOV(word_3867b, 1));	// 53639 mov     word_3867B, 1 ;~ 1C70:019E
cs=0x1c70;eip=0x0001a4; 	X(MOV(byte_38682, 0));	// 53640 mov     byte_38682, 0 ;~ 1C70:01A4
cs=0x1c70;eip=0x0001a9; 	X(OR(byte_38421, 1));	// 53641 or      byte_38421, 1 ;~ 1C70:01A9
cs=0x1c70;eip=0x0001ae; 	R(CALL(sub_2ae31,0));	// 53642 call    sub_2AE31 ;~ 1C70:01AE
loc_2ae91:
	// 8277 
cs=0x1c70;eip=0x0001b1; 	X(POP(dx));	// 53646 pop     dx ;~ 1C70:01B1
cs=0x1c70;eip=0x0001b2; 	X(POP(cx));	// 53647 pop     cx ;~ 1C70:01B2
cs=0x1c70;eip=0x0001b3; 	X(POP(bx));	// 53648 pop     bx ;~ 1C70:01B3
cs=0x1c70;eip=0x0001b4; 	X(POP(ax));	// 53649 pop     ax ;~ 1C70:01B4
cs=0x1c70;eip=0x0001b5; 	R(RETF(0));	// 53650 retf ;~ 1C70:01B5
ret_1c70_1b6:
	// 8278 
cs=0x1c70;eip=0x0001b6; 	X(OR(byte_38420, 1));	// 53652 or      byte_38420, 1 ;~ 1C70:01B6
cs=0x1c70;eip=0x0001bb; 	R(RETF(0));	// 53653 retf ;~ 1C70:01BB
ret_1c70_1bc:
	// 8279 
cs=0x1c70;eip=0x0001bc; 	T(TEST(byte_38421, 1));	// 53655 test    byte_38421, 1 ;~ 1C70:01BC
cs=0x1c70;eip=0x0001c1; 	R(JZ(locret_2aeab));	// 53656 jz      short locret_2AEAB ;~ 1C70:01C1
cs=0x1c70;eip=0x0001c3; 	R(CALL(sub_2ace6,0));	// 53657 call    sub_2ACE6 ;~ 1C70:01C3
cs=0x1c70;eip=0x0001c6; 	X(AND(byte_38420, 0x0FE));	// 53658 and     byte_38420, 0FEh ;~ 1C70:01C6
locret_2aeab:
	// 8280 
cs=0x1c70;eip=0x0001cb; 	R(RETF(0));	// 53661 retf ;~ 1C70:01CB
ret_1c70_3ba:
	// 8300 
cs=0x1c70;eip=0x0003ba; 	X(PUSH(cx));	// 53965 push    cx ;~ 1C70:03BA
cs=0x1c70;eip=0x0003bb; 	X(PUSH(es));	// 53966 push    es ;~ 1C70:03BB
cs=0x1c70;eip=0x0003bc; 	X(PUSH(di));	// 53967 push    di ;~ 1C70:03BC
cs=0x1c70;eip=0x0003bd; 	R(CALL(__dispatch_call,off_3874c));	// 53968 call    off_3874C ;~ 1C70:03BD
cs=0x1c70;eip=0x0003c1; 	T(MOV(ax, seg_offset(dseg)));	// 53969 mov     ax, seg dseg ;~ 1C70:03C1
cs=0x1c70;eip=0x0003c4; 	T(MOV(es, ax));	// 53970 mov     es, ax ;~ 1C70:03C4
cs=0x1c70;eip=0x0003c6; 	T(CLD);	// 53972 cld ;~ 1C70:03C6
cs=0x1c70;eip=0x0003c7; 	T(SUB(ax, ax));	// 53973 sub     ax, ax ;~ 1C70:03C7
cs=0x1c70;eip=0x0003c9; 	T(MOV(cx, 0x0B));	// 53974 mov     cx, 0Bh ;~ 1C70:03C9
cs=0x1c70;eip=0x0003cc; 	T(MOV(di, 0x0C83D));	// 53975 mov     di, 0C83Dh ;~ 1C70:03CC
	// 53976 rep stosw ;~ 1C70:03CF
cs=0x1c70;eip=0x0003cf; 	X(	REP STOSW);	// 53976 rep stosw ;~ 1C70:03CF
cs=0x1c70;eip=0x0003d1; 	X(POP(di));	// 53977 pop     di ;~ 1C70:03D1
cs=0x1c70;eip=0x0003d2; 	X(POP(es));	// 53978 pop     es ;~ 1C70:03D2
cs=0x1c70;eip=0x0003d3; 	X(POP(cx));	// 53980 pop     cx ;~ 1C70:03D3
cs=0x1c70;eip=0x0003d4; 	R(RETN(0));	// 53981 retn ;~ 1C70:03D4
loc_2b1be:
	// 8313 
cs=0x1c70;eip=0x0004de; 	T(CMP(bl, 0x0D));	// 54140 cmp     bl, 0Dh ;~ 1C70:04DE
cs=0x1c70;eip=0x0004e1; 	R(JA(locret_2b1c7));	// 54141 ja      short locret_2B1C7 ;~ 1C70:04E1
cs=0x1c70;eip=0x0004e3; 	R(CALL(__dispatch_call,off_38748));	// 54142 call    off_38748 ;~ 1C70:04E3
locret_2b1c7:
	// 8314 
cs=0x1c70;eip=0x0004e7; 	R(RETN(0));	// 54145 retn ;~ 1C70:04E7
ret_1c70_4e8:
	// 8315 
cs=0x1c70;eip=0x0004e8; 	T(CMP(bl, 0x0D));	// 54147 cmp     bl, 0Dh ;~ 1C70:04E8
cs=0x1c70;eip=0x0004eb; 	R(JA(locret_2b215));	// 54148 ja      short locret_2B215 ;~ 1C70:04EB
cs=0x1c70;eip=0x0004ed; 	T(OR(dl, dl));	// 54149 or      dl, dl ;~ 1C70:04ED
cs=0x1c70;eip=0x0004ef; 	R(JZ(loc_2b1be));	// 54150 jz      short loc_2B1BE ;~ 1C70:04EF
cs=0x1c70;eip=0x0004f1; 	X(MOV(byte_3873f, 1));	// 54151 mov     byte_3873F, 1 ;~ 1C70:04F1
cs=0x1c70;eip=0x0004f6; 	T(MOV(bl, *(raddr(ds,bx-0x37BD))));	// 54152 mov     bl, [bx-37BDh] ;~ 1C70:04F6
cs=0x1c70;eip=0x0004fa; 	T(MOV(al, *(raddr(ds,bx-0x3948))));	// 54153 mov     al, [bx-3948h] ;~ 1C70:04FA
cs=0x1c70;eip=0x0004fe; 	T(CBW);	// 54154 cbw ;~ 1C70:04FE
cs=0x1c70;eip=0x0004ff; 	T(SUB(dh, dh));	// 54155 sub     dh, dh ;~ 1C70:04FF
cs=0x1c70;eip=0x000501; 	T(ADD(ax, dx));	// 54156 add     ax, dx ;~ 1C70:0501
cs=0x1c70;eip=0x000503; 	R(JS(loc_2b1ef));	// 54157 js      short loc_2B1EF ;~ 1C70:0503
cs=0x1c70;eip=0x000505; 	T(CMP(ax, 0x7F));	// 54158 cmp     ax, 7Fh ;~ 1C70:0505
cs=0x1c70;eip=0x000508; 	R(JL(loc_2b1f1));	// 54159 jl      short loc_2B1F1 ;~ 1C70:0508
cs=0x1c70;eip=0x00050a; 	T(MOV(ax, 0x7F));	// 54160 mov     ax, 7Fh ;~ 1C70:050A
cs=0x1c70;eip=0x00050d; 	R(JMP(loc_2b1f1));	// 54161 jmp     short loc_2B1F1 ;~ 1C70:050D
loc_2b1ef:
	// 8316 
cs=0x1c70;eip=0x00050f; 	T(SUB(ax, ax));	// 54165 sub     ax, ax ;~ 1C70:050F
loc_2b1f1:
	// 8317 
cs=0x1c70;eip=0x000511; 	T(MOV(dx, ax));	// 54169 mov     dx, ax ;~ 1C70:0511
cs=0x1c70;eip=0x000513; 	T(MOV(al, byte_3841e));	// 54170 mov     al, byte_3841E ;~ 1C70:0513
cs=0x1c70;eip=0x000516; 	T(CBW);	// 54171 cbw ;~ 1C70:0516
cs=0x1c70;eip=0x000517; 	T(ADD(ax, dx));	// 54172 add     ax, dx ;~ 1C70:0517
cs=0x1c70;eip=0x000519; 	R(JS(loc_2b205));	// 54173 js      short loc_2B205 ;~ 1C70:0519
cs=0x1c70;eip=0x00051b; 	T(CMP(ax, 0x7F));	// 54174 cmp     ax, 7Fh ;~ 1C70:051B
cs=0x1c70;eip=0x00051e; 	R(JL(loc_2b207));	// 54175 jl      short loc_2B207 ;~ 1C70:051E
cs=0x1c70;eip=0x000520; 	T(MOV(ax, 0x7F));	// 54176 mov     ax, 7Fh ;~ 1C70:0520
cs=0x1c70;eip=0x000523; 	R(JMP(loc_2b207));	// 54177 jmp     short loc_2B207 ;~ 1C70:0523
loc_2b205:
	// 8318 
cs=0x1c70;eip=0x000525; 	T(MOV(al, 1));	// 54181 mov     al, 1 ;~ 1C70:0525
loc_2b207:
	// 8319 
cs=0x1c70;eip=0x000527; 	T(MOV(dl, al));	// 54185 mov     dl, al ;~ 1C70:0527
cs=0x1c70;eip=0x000529; 	T(MOV(bx, word_3873d));	// 54186 mov     bx, word_3873D ;~ 1C70:0529
cs=0x1c70;eip=0x00052d; 	T(SUB(cl, cl));	// 54187 sub     cl, cl ;~ 1C70:052D
cs=0x1c70;eip=0x00052f; 	T(MOV(dh, 0x40));	// 54188 mov     dh, 40h ; '@' ;~ 1C70:052F
cs=0x1c70;eip=0x000531; 	R(CALL(__dispatch_call,off_38746));	// 54189 call    off_38746 ;~ 1C70:0531
locret_2b215:
	// 8320 
cs=0x1c70;eip=0x000535; 	R(RETN(0));	// 54192 retn ;~ 1C70:0535
ret_1c70_536:
	// 8321 
cs=0x1c70;eip=0x000536; 	T(AND(bl, 3));	// 54194 and     bl, 3 ;~ 1C70:0536
cs=0x1c70;eip=0x000539; 	T(TEST(byte_38422, 0x80));	// 54195 test    byte_38422, 80h ;~ 1C70:0539
cs=0x1c70;eip=0x00053e; 	R(JZ(loc_2b22f));	// 54196 jz      short loc_2B22F ;~ 1C70:053E
cs=0x1c70;eip=0x000540; 	X(MOV(byte_38682, 1));	// 54197 mov     byte_38682, 1 ;~ 1C70:0540
cs=0x1c70;eip=0x000545; 	X(MOV(byte_38422, 0));	// 54198 mov     byte_38422, 0 ;~ 1C70:0545
cs=0x1c70;eip=0x00054a; 	R(CALL(sub_2ace6,0));	// 54199 call    sub_2ACE6 ;~ 1C70:054A
cs=0x1c70;eip=0x00054d; 	R(JMP(locret_2b270));	// 54200 jmp     short locret_2B270 ;~ 1C70:054D
loc_2b22f:
	// 8322 
cs=0x1c70;eip=0x00054f; 	T(OR(ch, ch));	// 54204 or      ch, ch ;~ 1C70:054F
cs=0x1c70;eip=0x000551; 	R(JNZ(loc_2b240));	// 54205 jnz     short loc_2B240 ;~ 1C70:0551
cs=0x1c70;eip=0x000553; 	X(MOV(*(dw*)(raddr(ds,si-0x37A1)), di));	// 54206 mov     [si-37A1h], di ;~ 1C70:0553
cs=0x1c70;eip=0x000557; 	T(MOV(al, byte_38681));	// 54207 mov     al, byte_38681 ;~ 1C70:0557
cs=0x1c70;eip=0x00055a; 	X(MOV(*(dw*)(raddr(ds,si-0x379B)), ax));	// 54208 mov     [si-379Bh], ax ;~ 1C70:055A
cs=0x1c70;eip=0x00055e; 	R(JMP(locret_2b270));	// 54209 jmp     short locret_2B270 ;~ 1C70:055E
loc_2b240:
	// 8323 
cs=0x1c70;eip=0x000560; 	T(MOV(ax, *(dw*)(raddr(ds,si-0x37AD))));	// 54213 mov     ax, [si-37ADh] ;~ 1C70:0560
cs=0x1c70;eip=0x000564; 	T(OR(ax, ax));	// 54214 or      ax, ax ;~ 1C70:0564
cs=0x1c70;eip=0x000566; 	R(JNZ(loc_2b25d));	// 54215 jnz     short loc_2B25D ;~ 1C70:0566
cs=0x1c70;eip=0x000568; 	T(MOV(ax, *(dw*)(raddr(ds,si-0x37A1))));	// 54216 mov     ax, [si-37A1h] ;~ 1C70:0568
cs=0x1c70;eip=0x00056c; 	T(OR(ax, ax));	// 54217 or      ax, ax ;~ 1C70:056C
cs=0x1c70;eip=0x00056e; 	R(JZ(locret_2b270));	// 54218 jz      short locret_2B270 ;~ 1C70:056E
cs=0x1c70;eip=0x000570; 	T(MOV(al, ch));	// 54219 mov     al, ch ;~ 1C70:0570
cs=0x1c70;eip=0x000572; 	T(CBW);	// 54220 cbw ;~ 1C70:0572
cs=0x1c70;eip=0x000573; 	X(MOV(*(dw*)(raddr(ds,si-0x37AD)), ax));	// 54221 mov     [si-37ADh], ax ;~ 1C70:0573
cs=0x1c70;eip=0x000577; 	X(MOV(*(dw*)(raddr(ds,si-0x37A7)), di));	// 54222 mov     [si-37A7h], di ;~ 1C70:0577
cs=0x1c70;eip=0x00057b; 	R(JMP(loc_2b261));	// 54223 jmp     short loc_2B261 ;~ 1C70:057B
loc_2b25d:
	// 8324 
cs=0x1c70;eip=0x00057d; 	T(CMP(al, 1));	// 54227 cmp     al, 1 ;~ 1C70:057D
cs=0x1c70;eip=0x00057f; 	R(JZ(loc_2b26c));	// 54228 jz      short loc_2B26C ;~ 1C70:057F
loc_2b261:
	// 8325 
cs=0x1c70;eip=0x000581; 	T(MOV(di, *(dw*)(raddr(ds,si-0x37A1))));	// 54231 mov     di, [si-37A1h] ;~ 1C70:0581
cs=0x1c70;eip=0x000585; 	T(MOV(ax, *(dw*)(raddr(ds,si-0x379B))));	// 54232 mov     ax, [si-379Bh] ;~ 1C70:0585
cs=0x1c70;eip=0x000589; 	X(MOV(byte_38681, al));	// 54233 mov     byte_38681, al ;~ 1C70:0589
loc_2b26c:
	// 8326 
cs=0x1c70;eip=0x00058c; 	X(DEC(*(dw*)(raddr(ds,si-0x37AD))));	// 54236 dec     word ptr [si-37ADh] ;~ 1C70:058C
locret_2b270:
	// 8327 
cs=0x1c70;eip=0x000590; 	R(RETN(0));	// 54240 retn ;~ 1C70:0590
ret_1c70_591:
	// 8328 
cs=0x1c70;eip=0x000591; 	T(TEST(byte_38422, 0x80));	// 54242 test    byte_38422, 80h ;~ 1C70:0591
cs=0x1c70;eip=0x000596; 	R(JZ(locret_2b285));	// 54243 jz      short locret_2B285 ;~ 1C70:0596
cs=0x1c70;eip=0x000598; 	X(MOV(byte_38682, 1));	// 54244 mov     byte_38682, 1 ;~ 1C70:0598
cs=0x1c70;eip=0x00059d; 	X(MOV(byte_38422, 0));	// 54245 mov     byte_38422, 0 ;~ 1C70:059D
cs=0x1c70;eip=0x0005a2; 	R(CALL(sub_2ace6,0));	// 54246 call    sub_2ACE6 ;~ 1C70:05A2
locret_2b285:
	// 8329 
cs=0x1c70;eip=0x0005a5; 	R(RETN(0));	// 54249 retn ;~ 1C70:05A5
ret_1c70_5a6:
	// 8330 
cs=0x1c70;eip=0x0005a6; 	T(CMP(bl, 0x0D));	// 54251 cmp     bl, 0Dh ;~ 1C70:05A6
cs=0x1c70;eip=0x0005a9; 	R(JA(locret_2b293));	// 54252 ja      short locret_2B293 ;~ 1C70:05A9
cs=0x1c70;eip=0x0005ab; 	X(MOV(*(raddr(ds,bx-0x37BD)), ch));	// 54253 mov     [bx-37BDh], ch ;~ 1C70:05AB
cs=0x1c70;eip=0x0005af; 	R(CALL(__dispatch_call,off_3874a));	// 54254 call    off_3874A ;~ 1C70:05AF
locret_2b293:
	// 8331 
cs=0x1c70;eip=0x0005b3; 	R(RETN(0));	// 54257 retn ;~ 1C70:05B3
ret_1c70_5b4:
	// 8332 
cs=0x1c70;eip=0x0005b4; 	T(MOV(ax, *(dw*)(raddr(ds,si-0x37A7))));	// 54259 mov     ax, [si-37A7h] ;~ 1C70:05B4
cs=0x1c70;eip=0x0005b8; 	T(OR(ax, ax));	// 54260 or      ax, ax ;~ 1C70:05B8
cs=0x1c70;eip=0x0005ba; 	R(JZ(locret_2b29e));	// 54261 jz      short locret_2B29E ;~ 1C70:05BA
cs=0x1c70;eip=0x0005bc; 	T(MOV(di, ax));	// 54262 mov     di, ax ;~ 1C70:05BC
locret_2b29e:
	// 8333 
cs=0x1c70;eip=0x0005be; 	R(RETN(0));	// 54265 retn ;~ 1C70:05BE
ret_1c70_5bf:
	// 8334 
cs=0x1c70;eip=0x0005bf; 	T(CLI);	// 54267 cli ;~ 1C70:05BF
cs=0x1c70;eip=0x0005c0; 	X(PUSH(bx));	// 54268 push    bx ;~ 1C70:05C0
cs=0x1c70;eip=0x0005c1; 	R(CALL(__dispatch_call,off_38754));	// 54269 call    off_38754 ;~ 1C70:05C1
cs=0x1c70;eip=0x0005c5; 	T(ADD(sp, 2));	// 54270 add     sp, 2 ;~ 1C70:05C5
cs=0x1c70;eip=0x0005c8; 	T(STI);	// 54271 sti ;~ 1C70:05C8
cs=0x1c70;eip=0x0005c9; 	R(RETN(0));	// 54272 retn ;~ 1C70:05C9
ret_1c70_5ca:
	// 8335 
cs=0x1c70;eip=0x0005ca; 	T(MOV(al, byte_38681));	// 54274 mov     al, byte_38681 ;~ 1C70:05CA
cs=0x1c70;eip=0x0005cd; 	T(CMP(al, 0x0FC));	// 54275 cmp     al, 0FCh ; 'ü' ;~ 1C70:05CD
cs=0x1c70;eip=0x0005cf; 	R(JNZ(locret_2b2be));	// 54276 jnz     short locret_2B2BE ;~ 1C70:05CF
cs=0x1c70;eip=0x0005d1; 	X(MOV(byte_38682, 1));	// 54277 mov     byte_38682, 1 ;~ 1C70:05D1
cs=0x1c70;eip=0x0005d6; 	X(MOV(byte_38422, 0));	// 54278 mov     byte_38422, 0 ;~ 1C70:05D6
cs=0x1c70;eip=0x0005db; 	R(CALL(sub_2ace6,0));	// 54279 call    sub_2ACE6 ;~ 1C70:05DB
locret_2b2be:
	// 8336 
cs=0x1c70;eip=0x0005de; 	R(RETN(0));	// 54282 retn ;~ 1C70:05DE
ret_1c70_637:
	// 8343 
cs=0x1c70;eip=0x000637; 	X(PUSH(bx));	// 54346 push    bx ;~ 1C70:0637
cs=0x1c70;eip=0x000638; 	T(MOV(ah, 0x0D0));	// 54347 mov     ah, 0D0h ; 'Ğ' ;~ 1C70:0638
cs=0x1c70;eip=0x00063a; 	R(CALL(sub_2b41d,0));	// 54348 call    sub_2B41D ;~ 1C70:063A
cs=0x1c70;eip=0x00063d; 	T(MOV(al, bl));	// 54349 mov     al, bl ;~ 1C70:063D
cs=0x1c70;eip=0x00063f; 	T(OR(al, 0x0C0));	// 54350 or      al, 0C0h ;~ 1C70:063F
cs=0x1c70;eip=0x000641; 	R(CALL(sub_2b44d,0));	// 54351 call    sub_2B44D ;~ 1C70:0641
cs=0x1c70;eip=0x000644; 	T(MOV(bl, ch));	// 54352 mov     bl, ch ;~ 1C70:0644
cs=0x1c70;eip=0x000646; 	T(MOV(al, *(raddr(ds,bx-0x39C8))));	// 54353 mov     al, [bx-39C8h] ;~ 1C70:0646
cs=0x1c70;eip=0x00064a; 	R(CALL(sub_2b44d,0));	// 54354 call    sub_2B44D ;~ 1C70:064A
cs=0x1c70;eip=0x00064d; 	X(POP(bx));	// 54355 pop     bx ;~ 1C70:064D
cs=0x1c70;eip=0x00064e; 	R(RETN(0));	// 54356 retn ;~ 1C70:064E
ret_1c70_6a3:
	// 8347 
cs=0x1c70;eip=0x0006a3; 	X(PUSH(dx));	// 54403 push    dx ;~ 1C70:06A3
cs=0x1c70;eip=0x0006a4; 	X(PUSH(bx));	// 54404 push    bx ;~ 1C70:06A4
cs=0x1c70;eip=0x0006a5; 	X(PUSH(cx));	// 54405 push    cx ;~ 1C70:06A5
cs=0x1c70;eip=0x0006a6; 	T(MOV(ax, 0x7005));	// 54406 mov     ax, 7005h ;~ 1C70:06A6
cs=0x1c70;eip=0x0006a9; 	R(CALL(sub_2b54d,0));	// 54407 call    sub_2B54D ;~ 1C70:06A9
cs=0x1c70;eip=0x0006ac; 	T(MOV(cx, *(dw*)(raddr(ds,si-0x3793))));	// 54408 mov     cx, [si-3793h] ;~ 1C70:06AC
cs=0x1c70;eip=0x0006b0; 	T(CMP(ch, *(raddr(ds,bx-0x3743))));	// 54409 cmp     ch, [bx-3743h] ;~ 1C70:06B0
cs=0x1c70;eip=0x0006b4; 	R(JZ(loc_2b39b));	// 54410 jz      short loc_2B39B ;~ 1C70:06B4
cs=0x1c70;eip=0x0006b6; 	X(MOV(byte_387cd, 1));	// 54411 mov     byte_387CD, 1 ;~ 1C70:06B6
loc_2b39b:
	// 8348 
cs=0x1c70;eip=0x0006bb; 	T(MOV(ah, 0x0D0));	// 54414 mov     ah, 0D0h ; 'Ğ' ;~ 1C70:06BB
cs=0x1c70;eip=0x0006bd; 	R(CALL(sub_2b41d,0));	// 54415 call    sub_2B41D ;~ 1C70:06BD
cs=0x1c70;eip=0x0006c0; 	T(MOV(al, 0x0E0));	// 54416 mov     al, 0E0h ; 'à' ;~ 1C70:06C0
cs=0x1c70;eip=0x0006c2; 	T(OR(al, bl));	// 54417 or      al, bl ;~ 1C70:06C2
cs=0x1c70;eip=0x0006c4; 	R(CALL(sub_2b44d,0));	// 54418 call    sub_2B44D ;~ 1C70:06C4
cs=0x1c70;eip=0x0006c7; 	T(SUB(ax, ax));	// 54419 sub     ax, ax ;~ 1C70:06C7
cs=0x1c70;eip=0x0006c9; 	T(MOV(al, cl));	// 54420 mov     al, cl ;~ 1C70:06C9
cs=0x1c70;eip=0x0006cb; 	T(MOV(dl, 0x31));	// 54421 mov     dl, 31h ; '1' ;~ 1C70:06CB
cs=0x1c70;eip=0x0006cd; 	T(DIV1(dl));	// 54422 div     dl ;~ 1C70:06CD
cs=0x1c70;eip=0x0006cf; 	T(ADD(al, 0x40));	// 54423 add     al, 40h ; '@' ;~ 1C70:06CF
cs=0x1c70;eip=0x0006d1; 	X(PUSH(ax));	// 54424 push    ax ;~ 1C70:06D1
cs=0x1c70;eip=0x0006d2; 	T(MOV(al, ah));	// 54425 mov     al, ah ;~ 1C70:06D2
cs=0x1c70;eip=0x0006d4; 	R(CALL(sub_2b44d,0));	// 54426 call    sub_2B44D ;~ 1C70:06D4
cs=0x1c70;eip=0x0006d7; 	X(POP(ax));	// 54427 pop     ax ;~ 1C70:06D7
cs=0x1c70;eip=0x0006d8; 	R(CALL(sub_2b44d,0));	// 54428 call    sub_2B44D ;~ 1C70:06D8
cs=0x1c70;eip=0x0006db; 	T(TEST(byte_387cd, 1));	// 54429 test    byte_387CD, 1 ;~ 1C70:06DB
cs=0x1c70;eip=0x0006e0; 	R(JZ(loc_2b3df));	// 54430 jz      short loc_2B3DF ;~ 1C70:06E0
cs=0x1c70;eip=0x0006e2; 	T(MOV(ch, *(raddr(ds,bx-0x3743))));	// 54431 mov     ch, [bx-3743h] ;~ 1C70:06E2
cs=0x1c70;eip=0x0006e6; 	R(CALL(sub_2b3e3,0));	// 54432 call    sub_2B3E3 ;~ 1C70:06E6
cs=0x1c70;eip=0x0006e9; 	X(MOV(byte_387cd, 0));	// 54433 mov     byte_387CD, 0 ;~ 1C70:06E9
cs=0x1c70;eip=0x0006ee; 	T(MOV(cx, *(dw*)(raddr(ds,si-0x3793))));	// 54434 mov     cx, [si-3793h] ;~ 1C70:06EE
cs=0x1c70;eip=0x0006f2; 	T(MOV(dl, *(raddr(ds,bx-0x3773))));	// 54435 mov     dl, [bx-3773h] ;~ 1C70:06F2
cs=0x1c70;eip=0x0006f6; 	X(MOV(*(raddr(ds,bx-0x3743)), ch));	// 54436 mov     [bx-3743h], ch ;~ 1C70:06F6
cs=0x1c70;eip=0x0006fa; 	R(CALL(sub_2b32f,0));	// 54437 call    sub_2B32F ;~ 1C70:06FA
cs=0x1c70;eip=0x0006fd; 	R(
);	// 54438 jmp     short $+2 ;~ 1C70:06FD
loc_2b3df:
	// 8349 
cs=0x1c70;eip=0x0006ff; 	X(POP(cx));	// 54443 pop     cx ;~ 1C70:06FF
cs=0x1c70;eip=0x000700; 	X(POP(bx));	// 54444 pop     bx ;~ 1C70:0700
cs=0x1c70;eip=0x000701; 	X(POP(dx));	// 54445 pop     dx ;~ 1C70:0701
cs=0x1c70;eip=0x000702; 	R(RETN(0));	// 54446 retn ;~ 1C70:0702
ret_1c70_787:
	// 8365 
cs=0x1c70;eip=0x000787; 	T(MOV(ah, 0x0D0));	// 54569 mov     ah, 0D0h ; 'Ğ' ;~ 1C70:0787
cs=0x1c70;eip=0x000789; 	R(CALL(sub_2b41d,0));	// 54570 call    sub_2B41D ;~ 1C70:0789
cs=0x1c70;eip=0x00078c; 	T(MOV(ah, 0x0B9));	// 54571 mov     ah, 0B9h ; '¹' ;~ 1C70:078C
cs=0x1c70;eip=0x00078e; 	R(CALL(sub_2b41d,0));	// 54572 call    sub_2B41D ;~ 1C70:078E
cs=0x1c70;eip=0x000791; 	R(RETN(0));	// 54573 retn ;~ 1C70:0791
ret_1c70_9a1:
	// 8394 
cs=0x1c70;eip=0x0009a1; 	X(PUSH(bx));	// 54891 push    bx ;~ 1C70:09A1
cs=0x1c70;eip=0x0009a2; 	T(CMP(bl, 6));	// 54892 cmp     bl, 6 ;~ 1C70:09A2
cs=0x1c70;eip=0x0009a5; 	R(JGE(loc_2b698));	// 54893 jge     short loc_2B698 ;~ 1C70:09A5
cs=0x1c70;eip=0x0009a7; 	X(MOV(*(raddr(ds,bx-0x37BD)), ch));	// 54894 mov     [bx-37BDh], ch ;~ 1C70:09A7
cs=0x1c70;eip=0x0009ab; 	X(PUSH(bx));	// 54895 push    bx ;~ 1C70:09AB
cs=0x1c70;eip=0x0009ac; 	T(MOV(bl, ch));	// 54896 mov     bl, ch ;~ 1C70:09AC
cs=0x1c70;eip=0x0009ae; 	T(MOV(ch, *(raddr(ds,bx-0x39C8))));	// 54897 mov     ch, [bx-39C8h] ;~ 1C70:09AE
cs=0x1c70;eip=0x0009b2; 	X(POP(bx));	// 54898 pop     bx ;~ 1C70:09B2
cs=0x1c70;eip=0x0009b3; 	R(CALL(sub_2b60a,0));	// 54899 call    sub_2B60A ;~ 1C70:09B3
cs=0x1c70;eip=0x0009b6; 	R(JMP(loc_2b6a0));	// 54900 jmp     short loc_2B6A0 ;~ 1C70:09B6
loc_2b698:
	// 8395 
cs=0x1c70;eip=0x0009b8; 	T(MOV(ch, *(raddr(ds,bx-0x35DB))));	// 54904 mov     ch, [bx-35DBh] ;~ 1C70:09B8
cs=0x1c70;eip=0x0009bc; 	X(MOV(*(raddr(ds,bx-0x37BD)), ch));	// 54905 mov     [bx-37BDh], ch ;~ 1C70:09BC
loc_2b6a0:
	// 8396 
cs=0x1c70;eip=0x0009c0; 	X(POP(bx));	// 54908 pop     bx ;~ 1C70:09C0
cs=0x1c70;eip=0x0009c1; 	R(RETN(0));	// 54909 retn ;~ 1C70:09C1
ret_1c70_9c2:
	// 8397 
cs=0x1c70;eip=0x0009c2; 	X(PUSH(bx));	// 54911 push    bx ;~ 1C70:09C2
cs=0x1c70;eip=0x0009c3; 	X(PUSH(cx));	// 54912 push    cx ;~ 1C70:09C3
cs=0x1c70;eip=0x0009c4; 	T(MOV(cx, 8));	// 54913 mov     cx, 8 ;~ 1C70:09C4
loc_2b6a7:
	// 8398 
cs=0x1c70;eip=0x0009c7; 	T(MOV(al, 0x0B0));	// 54916 mov     al, 0B0h ; '°' ;~ 1C70:09C7
cs=0x1c70;eip=0x0009c9; 	T(ADD(al, cl));	// 54917 add     al, cl ;~ 1C70:09C9
cs=0x1c70;eip=0x0009cb; 	T(MOV(ah, *(raddr(ds,bx-0x3713))));	// 54918 mov     ah, [bx-3713h] ;~ 1C70:09CB
cs=0x1c70;eip=0x0009cf; 	T(AND(ah, 0x1F));	// 54919 and     ah, 1Fh ;~ 1C70:09CF
cs=0x1c70;eip=0x0009d2; 	X(MOV(*(raddr(ds,bx-0x3713)), ah));	// 54920 mov     [bx-3713h], ah ;~ 1C70:09D2
cs=0x1c70;eip=0x0009d6; 	R(CALLF(sub_2bd8e,0));	// 54921 call    sub_2BD8E ;~ 1C70:09D6
cs=0x1c70;eip=0x0009db; 	T(DEC(cx));	// 54922 dec     cx ;~ 1C70:09DB
cs=0x1c70;eip=0x0009dc; 	R(JNS(loc_2b6a7));	// 54923 jns     short loc_2B6A7 ;~ 1C70:09DC
cs=0x1c70;eip=0x0009de; 	T(MOV(ax, 0x20BD));	// 54924 mov     ax, 20BDh ;~ 1C70:09DE
cs=0x1c70;eip=0x0009e1; 	X(MOV(byte_38426, ah));	// 54925 mov     byte_38426, ah ;~ 1C70:09E1
cs=0x1c70;eip=0x0009e5; 	R(CALLF(sub_2bd8e,0));	// 54926 call    sub_2BD8E ;~ 1C70:09E5
cs=0x1c70;eip=0x0009ea; 	X(POP(cx));	// 54927 pop     cx ;~ 1C70:09EA
cs=0x1c70;eip=0x0009eb; 	X(POP(bx));	// 54928 pop     bx ;~ 1C70:09EB
cs=0x1c70;eip=0x0009ec; 	R(RETN(0));	// 54929 retn ;~ 1C70:09EC
ret_1c70_a59:
	// 8407 
cs=0x1c70;eip=0x000a59; 	X(PUSH(bx));	// 55020 push    bx ;~ 1C70:0A59
cs=0x1c70;eip=0x000a5a; 	X(PUSH(cx));	// 55021 push    cx ;~ 1C70:0A5A
cs=0x1c70;eip=0x000a5b; 	X(PUSH(dx));	// 55022 push    dx ;~ 1C70:0A5B
cs=0x1c70;eip=0x000a5c; 	X(PUSH(si));	// 55023 push    si ;~ 1C70:0A5C
cs=0x1c70;eip=0x000a5d; 	T(CMP(bl, 8));	// 55024 cmp     bl, 8 ;~ 1C70:0A5D
cs=0x1c70;eip=0x000a60; 	R(JA(loc_2b79a));	// 55025 ja      short loc_2B79A ;~ 1C70:0A60
cs=0x1c70;eip=0x000a62; 	T(SUB(ch, 0x15));	// 55026 sub     ch, 15h ;~ 1C70:0A62
loc_2b745:
	// 8408 
cs=0x1c70;eip=0x000a65; 	R(JNS(loc_2b74c));	// 55029 jns     short loc_2B74C ;~ 1C70:0A65
cs=0x1c70;eip=0x000a67; 	T(ADD(ch, 0x0C));	// 55030 add     ch, 0Ch ;~ 1C70:0A67
cs=0x1c70;eip=0x000a6a; 	R(JMP(loc_2b745));	// 55031 jmp     short loc_2B745 ;~ 1C70:0A6A
loc_2b74c:
	// 8409 
cs=0x1c70;eip=0x000a6c; 	R(CALL(sub_2b2bf,0));	// 55035 call    sub_2B2BF ;~ 1C70:0A6C
cs=0x1c70;eip=0x000a6f; 	R(JC(loc_2b79a));	// 55036 jb      short loc_2B79A ;~ 1C70:0A6F
cs=0x1c70;eip=0x000a71; 	T(MOV(al, byte_3873f));	// 55037 mov     al, byte_3873F ;~ 1C70:0A71
cs=0x1c70;eip=0x000a74; 	X(MOV(*(raddr(ds,bx-0x3753)), al));	// 55038 mov     [bx-3753h], al ;~ 1C70:0A74
cs=0x1c70;eip=0x000a78; 	X(MOV(*(dw*)(raddr(ds,si-0x3793)), cx));	// 55039 mov     [si-3793h], cx ;~ 1C70:0A78
cs=0x1c70;eip=0x000a7c; 	X(MOV(*(raddr(ds,bx-0x3743)), ch));	// 55040 mov     [bx-3743h], ch ;~ 1C70:0A7C
cs=0x1c70;eip=0x000a80; 	X(PUSH(dx));	// 55041 push    dx ;~ 1C70:0A80
cs=0x1c70;eip=0x000a81; 	R(CALL(sub_2b79f,0));	// 55042 call    sub_2B79F ;~ 1C70:0A81
cs=0x1c70;eip=0x000a84; 	T(MOV(dx, 0x221));	// 55043 mov     dx, 221h ;~ 1C70:0A84
cs=0x1c70;eip=0x000a87; 	T(CMP(bl, 6));	// 55044 cmp     bl, 6 ;~ 1C70:0A87
cs=0x1c70;eip=0x000a8a; 	R(JL(loc_2b772));	// 55045 jl      short loc_2B772 ;~ 1C70:0A8A
cs=0x1c70;eip=0x000a8c; 	T(ADD(dx, 2));	// 55046 add     dx, 2 ;~ 1C70:0A8C
cs=0x1c70;eip=0x000a8f; 	T(SUB(bl, 6));	// 55047 sub     bl, 6 ;~ 1C70:0A8F
loc_2b772:
	// 8410 
cs=0x1c70;eip=0x000a92; 	T(MOV(al, bl));	// 55050 mov     al, bl ;~ 1C70:0A92
cs=0x1c70;eip=0x000a94; 	R(OUT(dx, al));	// 55051 out     dx, al ;~ 1C70:0A94
cs=0x1c70;eip=0x000a95; 	T(DEC(dx));	// 55052 dec     dx ;~ 1C70:0A95
cs=0x1c70;eip=0x000a96; 	X(POP(ax));	// 55053 pop     ax ;~ 1C70:0A96
cs=0x1c70;eip=0x000a97; 	T(MOV(ah, al));	// 55054 mov     ah, al ;~ 1C70:0A97
cs=0x1c70;eip=0x000a99; 	T(SHR(al, 1));	// 55055 shr     al, 1 ;~ 1C70:0A99
cs=0x1c70;eip=0x000a9b; 	T(SHR(al, 1));	// 55056 shr     al, 1 ;~ 1C70:0A9B
cs=0x1c70;eip=0x000a9d; 	T(SHR(al, 1));	// 55057 shr     al, 1 ;~ 1C70:0A9D
cs=0x1c70;eip=0x000a9f; 	T(SHR(al, 1));	// 55058 shr     al, 1 ;~ 1C70:0A9F
cs=0x1c70;eip=0x000aa1; 	T(AND(al, 0x0F));	// 55059 and     al, 0Fh ;~ 1C70:0AA1
cs=0x1c70;eip=0x000aa3; 	T(AND(ah, 0x0F0));	// 55060 and     ah, 0F0h ;~ 1C70:0AA3
cs=0x1c70;eip=0x000aa6; 	T(OR(al, ah));	// 55061 or      al, ah ;~ 1C70:0AA6
cs=0x1c70;eip=0x000aa8; 	R(OUT(dx, al));	// 55062 out     dx, al ;~ 1C70:0AA8
cs=0x1c70;eip=0x000aa9; 	T(INC(dx));	// 55063 inc     dx ;~ 1C70:0AA9
cs=0x1c70;eip=0x000aaa; 	T(MOV(al, 0x14));	// 55064 mov     al, 14h ;~ 1C70:0AAA
cs=0x1c70;eip=0x000aac; 	R(OUT(dx, al));	// 55065 out     dx, al ;~ 1C70:0AAC
cs=0x1c70;eip=0x000aad; 	T(DEC(dx));	// 55066 dec     dx ;~ 1C70:0AAD
cs=0x1c70;eip=0x000aae; 	T(MOV(al, *(raddr(ds,bx-0x3577))));	// 55067 mov     al, [bx-3577h] ;~ 1C70:0AAE
cs=0x1c70;eip=0x000ab2; 	T(OR(al, byte_388c8));	// 55068 or      al, byte_388C8 ;~ 1C70:0AB2
cs=0x1c70;eip=0x000ab6; 	X(MOV(byte_388c8, al));	// 55069 mov     byte_388C8, al ;~ 1C70:0AB6
cs=0x1c70;eip=0x000ab9; 	R(OUT(dx, al));	// 55070 out     dx, al ;~ 1C70:0AB9
loc_2b79a:
	// 8411 
cs=0x1c70;eip=0x000aba; 	X(POP(si));	// 55074 pop     si ;~ 1C70:0ABA
cs=0x1c70;eip=0x000abb; 	X(POP(dx));	// 55075 pop     dx ;~ 1C70:0ABB
cs=0x1c70;eip=0x000abc; 	X(POP(cx));	// 55076 pop     cx ;~ 1C70:0ABC
cs=0x1c70;eip=0x000abd; 	X(POP(bx));	// 55077 pop     bx ;~ 1C70:0ABD
cs=0x1c70;eip=0x000abe; 	R(RETN(0));	// 55078 retn ;~ 1C70:0ABE
ret_1c70_b16:
	// 8416 
cs=0x1c70;eip=0x000b16; 	X(PUSH(bx));	// 55139 push    bx ;~ 1C70:0B16
cs=0x1c70;eip=0x000b17; 	X(PUSH(cx));	// 55140 push    cx ;~ 1C70:0B17
cs=0x1c70;eip=0x000b18; 	X(PUSH(dx));	// 55141 push    dx ;~ 1C70:0B18
cs=0x1c70;eip=0x000b19; 	T(SUB(ch, 0x15));	// 55142 sub     ch, 15h ;~ 1C70:0B19
loc_2b7fc:
	// 8417 
cs=0x1c70;eip=0x000b1c; 	R(JNS(loc_2b803));	// 55145 jns     short loc_2B803 ;~ 1C70:0B1C
cs=0x1c70;eip=0x000b1e; 	T(ADD(ch, 0x0C));	// 55146 add     ch, 0Ch ;~ 1C70:0B1E
cs=0x1c70;eip=0x000b21; 	R(JMP(loc_2b7fc));	// 55147 jmp     short loc_2B7FC ;~ 1C70:0B21
loc_2b803:
	// 8418 
cs=0x1c70;eip=0x000b23; 	T(TEST(byte_387cd, 1));	// 55151 test    byte_387CD, 1 ;~ 1C70:0B23
cs=0x1c70;eip=0x000b28; 	R(JNZ(loc_2b810));	// 55152 jnz     short loc_2B810 ;~ 1C70:0B28
cs=0x1c70;eip=0x000b2a; 	T(CMP(ch, *(raddr(ds,bx-0x3743))));	// 55153 cmp     ch, [bx-3743h] ;~ 1C70:0B2A
cs=0x1c70;eip=0x000b2e; 	R(JNZ(loc_2b83b));	// 55154 jnz     short loc_2B83B ;~ 1C70:0B2E
loc_2b810:
	// 8419 
cs=0x1c70;eip=0x000b30; 	T(MOV(dx, 0x221));	// 55157 mov     dx, 221h ;~ 1C70:0B30
cs=0x1c70;eip=0x000b33; 	T(CMP(bl, 6));	// 55158 cmp     bl, 6 ;~ 1C70:0B33
cs=0x1c70;eip=0x000b36; 	R(JL(loc_2b81e));	// 55159 jl      short loc_2B81E ;~ 1C70:0B36
cs=0x1c70;eip=0x000b38; 	T(ADD(dx, 2));	// 55160 add     dx, 2 ;~ 1C70:0B38
cs=0x1c70;eip=0x000b3b; 	T(SUB(bl, 6));	// 55161 sub     bl, 6 ;~ 1C70:0B3B
loc_2b81e:
	// 8420 
cs=0x1c70;eip=0x000b3e; 	T(MOV(al, 0x14));	// 55164 mov     al, 14h ;~ 1C70:0B3E
cs=0x1c70;eip=0x000b40; 	R(OUT(dx, al));	// 55165 out     dx, al ;~ 1C70:0B40
cs=0x1c70;eip=0x000b41; 	T(DEC(dx));	// 55166 dec     dx ;~ 1C70:0B41
cs=0x1c70;eip=0x000b42; 	T(MOV(al, *(raddr(ds,bx-0x3577))));	// 55167 mov     al, [bx-3577h] ;~ 1C70:0B42
cs=0x1c70;eip=0x000b46; 	T(NOT(al));	// 55168 not     al ;~ 1C70:0B46
cs=0x1c70;eip=0x000b48; 	T(AND(al, byte_388c8));	// 55169 and     al, byte_388C8 ;~ 1C70:0B48
cs=0x1c70;eip=0x000b4c; 	X(MOV(byte_388c8, al));	// 55170 mov     byte_388C8, al ;~ 1C70:0B4C
cs=0x1c70;eip=0x000b4f; 	R(OUT(dx, al));	// 55171 out     dx, al ;~ 1C70:0B4F
cs=0x1c70;eip=0x000b50; 	X(MOV(*(dw*)(raddr(ds,si-0x3793)), 0));	// 55172 mov     word ptr [si-3793h], 0 ;~ 1C70:0B50
cs=0x1c70;eip=0x000b56; 	X(MOV(*(raddr(ds,bx-0x3743)), 0));	// 55173 mov     byte ptr [bx-3743h], 0 ;~ 1C70:0B56
loc_2b83b:
	// 8421 
cs=0x1c70;eip=0x000b5b; 	X(POP(dx));	// 55176 pop     dx ;~ 1C70:0B5B
cs=0x1c70;eip=0x000b5c; 	X(POP(cx));	// 55177 pop     cx ;~ 1C70:0B5C
cs=0x1c70;eip=0x000b5d; 	X(POP(bx));	// 55178 pop     bx ;~ 1C70:0B5D
cs=0x1c70;eip=0x000b5e; 	R(RETN(0));	// 55179 retn ;~ 1C70:0B5E
ret_1c70_b92:
	// 8425 
cs=0x1c70;eip=0x000b92; 	X(PUSH(bx));	// 55225 push    bx ;~ 1C70:0B92
cs=0x1c70;eip=0x000b93; 	X(PUSH(cx));	// 55226 push    cx ;~ 1C70:0B93
cs=0x1c70;eip=0x000b94; 	X(PUSH(si));	// 55227 push    si ;~ 1C70:0B94
cs=0x1c70;eip=0x000b95; 	T(CMP(bl, 2));	// 55228 cmp     bl, 2 ;~ 1C70:0B95
cs=0x1c70;eip=0x000b98; 	R(JA(loc_2b8a5));	// 55229 ja      short loc_2B8A5 ;~ 1C70:0B98
cs=0x1c70;eip=0x000b9a; 	T(SUB(ch, 0x18));	// 55230 sub     ch, 18h ;~ 1C70:0B9A
loc_2b87d:
	// 8426 
cs=0x1c70;eip=0x000b9d; 	R(JNS(loc_2b884));	// 55233 jns     short loc_2B884 ;~ 1C70:0B9D
cs=0x1c70;eip=0x000b9f; 	T(ADD(ch, 0x0C));	// 55234 add     ch, 0Ch ;~ 1C70:0B9F
cs=0x1c70;eip=0x000ba2; 	R(JMP(loc_2b87d));	// 55235 jmp     short loc_2B87D ;~ 1C70:0BA2
loc_2b884:
	// 8427 
cs=0x1c70;eip=0x000ba4; 	T(SUB(bl, bl));	// 55239 sub     bl, bl ;~ 1C70:0BA4
cs=0x1c70;eip=0x000ba6; 	T(SUB(si, si));	// 55240 sub     si, si ;~ 1C70:0BA6
cs=0x1c70;eip=0x000ba8; 	R(CALL(sub_2b2bf,0));	// 55241 call    sub_2B2BF ;~ 1C70:0BA8
cs=0x1c70;eip=0x000bab; 	R(JC(loc_2b8a5));	// 55242 jb      short loc_2B8A5 ;~ 1C70:0BAB
cs=0x1c70;eip=0x000bad; 	T(MOV(al, byte_3873f));	// 55243 mov     al, byte_3873F ;~ 1C70:0BAD
cs=0x1c70;eip=0x000bb0; 	X(MOV(*(raddr(ds,bx-0x3753)), al));	// 55244 mov     [bx-3753h], al ;~ 1C70:0BB0
cs=0x1c70;eip=0x000bb4; 	X(MOV(word_386ad, cx));	// 55245 mov     word_386AD, cx ;~ 1C70:0BB4
cs=0x1c70;eip=0x000bb8; 	X(MOV(byte_386fd, ch));	// 55246 mov     byte_386FD, ch ;~ 1C70:0BB8
cs=0x1c70;eip=0x000bbc; 	R(CALL(sub_2b8a9,0));	// 55247 call    sub_2B8A9 ;~ 1C70:0BBC
cs=0x1c70;eip=0x000bbf; 	R(IN(al, 0x61));	// 55248 in      al, 61h         ; PC/XT PPI port B bits: ;~ 1C70:0BBF
cs=0x1c70;eip=0x000bc1; 	T(OR(al, 3));	// 55256 or      al, 3 ;~ 1C70:0BC1
cs=0x1c70;eip=0x000bc3; 	R(OUT(0x61, al));	// 55257 out     61h, al         ; PC/XT PPI port B bits: ;~ 1C70:0BC3
loc_2b8a5:
	// 8428 
cs=0x1c70;eip=0x000bc5; 	X(POP(si));	// 55268 pop     si ;~ 1C70:0BC5
cs=0x1c70;eip=0x000bc6; 	X(POP(cx));	// 55269 pop     cx ;~ 1C70:0BC6
cs=0x1c70;eip=0x000bc7; 	X(POP(bx));	// 55270 pop     bx ;~ 1C70:0BC7
cs=0x1c70;eip=0x000bc8; 	R(RETN(0));	// 55271 retn ;~ 1C70:0BC8
ret_1c70_bde:
	// 8430 
cs=0x1c70;eip=0x000bde; 	X(PUSH(cx));	// 55291 push    cx ;~ 1C70:0BDE
cs=0x1c70;eip=0x000bdf; 	T(CMP(bl, 2));	// 55292 cmp     bl, 2 ;~ 1C70:0BDF
cs=0x1c70;eip=0x000be2; 	R(JA(loc_2b8ec));	// 55293 ja      short loc_2B8EC ;~ 1C70:0BE2
cs=0x1c70;eip=0x000be4; 	T(SUB(ch, 0x18));	// 55294 sub     ch, 18h ;~ 1C70:0BE4
loc_2b8c7:
	// 8431 
cs=0x1c70;eip=0x000be7; 	R(JNS(loc_2b8ce));	// 55297 jns     short loc_2B8CE ;~ 1C70:0BE7
cs=0x1c70;eip=0x000be9; 	T(ADD(ch, 0x0C));	// 55298 add     ch, 0Ch ;~ 1C70:0BE9
cs=0x1c70;eip=0x000bec; 	R(JMP(loc_2b8c7));	// 55299 jmp     short loc_2B8C7 ;~ 1C70:0BEC
loc_2b8ce:
	// 8432 
cs=0x1c70;eip=0x000bee; 	T(TEST(byte_387cd, 1));	// 55303 test    byte_387CD, 1 ;~ 1C70:0BEE
cs=0x1c70;eip=0x000bf3; 	R(JNZ(loc_2b8db));	// 55304 jnz     short loc_2B8DB ;~ 1C70:0BF3
cs=0x1c70;eip=0x000bf5; 	T(CMP(ch, byte_386fd));	// 55305 cmp     ch, byte_386FD ;~ 1C70:0BF5
cs=0x1c70;eip=0x000bf9; 	R(JNZ(loc_2b8ec));	// 55306 jnz     short loc_2B8EC ;~ 1C70:0BF9
loc_2b8db:
	// 8433 
cs=0x1c70;eip=0x000bfb; 	X(MOV(word_386ad, 0));	// 55309 mov     word_386AD, 0 ;~ 1C70:0BFB
cs=0x1c70;eip=0x000c01; 	X(MOV(byte_386fd, 0));	// 55310 mov     byte_386FD, 0 ;~ 1C70:0C01
cs=0x1c70;eip=0x000c06; 	R(IN(al, 0x61));	// 55311 in      al, 61h         ; PC/XT PPI port B bits: ;~ 1C70:0C06
cs=0x1c70;eip=0x000c08; 	T(AND(al, 0x0FC));	// 55319 and     al, 0FCh ;~ 1C70:0C08
cs=0x1c70;eip=0x000c0a; 	R(OUT(0x61, al));	// 55320 out     61h, al         ; PC/XT PPI port B bits: ;~ 1C70:0C0A
loc_2b8ec:
	// 8434 
cs=0x1c70;eip=0x000c0c; 	X(POP(cx));	// 55331 pop     cx ;~ 1C70:0C0C
cs=0x1c70;eip=0x000c0d; 	R(RETN(0));	// 55332 retn ;~ 1C70:0C0D
ret_1c70_c0e:
	// 8435 
cs=0x1c70;eip=0x000c0e; 	R(IN(al, 0x61));	// 55334 in      al, 61h         ; PC/XT PPI port B bits: ;~ 1C70:0C0E
cs=0x1c70;eip=0x000c10; 	T(AND(al, 0x0FC));	// 55342 and     al, 0FCh ;~ 1C70:0C10
cs=0x1c70;eip=0x000c12; 	R(OUT(0x61, al));	// 55343 out     61h, al         ; PC/XT PPI port B bits: ;~ 1C70:0C12
cs=0x1c70;eip=0x000c14; 	R(RETN(0));	// 55351 retn ;~ 1C70:0C14
ret_1c70_c15:
	// 8436 
cs=0x1c70;eip=0x000c15; 	X(PUSH(bx));	// 55353 push    bx ;~ 1C70:0C15
cs=0x1c70;eip=0x000c16; 	X(PUSH(cx));	// 55354 push    cx ;~ 1C70:0C16
cs=0x1c70;eip=0x000c17; 	X(PUSH(dx));	// 55355 push    dx ;~ 1C70:0C17
cs=0x1c70;eip=0x000c18; 	T(CMP(bl, 2));	// 55356 cmp     bl, 2 ;~ 1C70:0C18
cs=0x1c70;eip=0x000c1b; 	R(JA(loc_2b942));	// 55357 ja      short loc_2B942 ;~ 1C70:0C1B
cs=0x1c70;eip=0x000c1d; 	T(CMP(dl, 0x5F));	// 55358 cmp     dl, 5Fh ; '_' ;~ 1C70:0C1D
cs=0x1c70;eip=0x000c20; 	R(JGE(loc_2b904));	// 55359 jge     short loc_2B904 ;~ 1C70:0C20
cs=0x1c70;eip=0x000c22; 	T(MOV(dl, 0x5F));	// 55360 mov     dl, 5Fh ; '_' ;~ 1C70:0C22
loc_2b904:
	// 8437 
cs=0x1c70;eip=0x000c24; 	T(CMP(dl, 0x68));	// 55363 cmp     dl, 68h ; 'h' ;~ 1C70:0C24
cs=0x1c70;eip=0x000c27; 	R(JLE(loc_2b90b));	// 55364 jle     short loc_2B90B ;~ 1C70:0C27
cs=0x1c70;eip=0x000c29; 	T(MOV(dl, 0x68));	// 55365 mov     dl, 68h ; 'h' ;~ 1C70:0C29
loc_2b90b:
	// 8438 
cs=0x1c70;eip=0x000c2b; 	T(SUB(cl, cl));	// 55368 sub     cl, cl ;~ 1C70:0C2B
cs=0x1c70;eip=0x000c2d; 	T(SUB(ch, 0x18));	// 55369 sub     ch, 18h ;~ 1C70:0C2D
loc_2b910:
	// 8439 
cs=0x1c70;eip=0x000c30; 	R(JNS(loc_2b917));	// 55372 jns     short loc_2B917 ;~ 1C70:0C30
cs=0x1c70;eip=0x000c32; 	T(ADD(ch, 0x0C));	// 55373 add     ch, 0Ch ;~ 1C70:0C32
cs=0x1c70;eip=0x000c35; 	R(JMP(loc_2b910));	// 55374 jmp     short loc_2B910 ;~ 1C70:0C35
loc_2b917:
	// 8440 
cs=0x1c70;eip=0x000c37; 	R(CALL(sub_2b2bf,0));	// 55378 call    sub_2B2BF ;~ 1C70:0C37
cs=0x1c70;eip=0x000c3a; 	R(JC(loc_2b942));	// 55379 jb      short loc_2B942 ;~ 1C70:0C3A
cs=0x1c70;eip=0x000c3c; 	T(MOV(al, byte_3873f));	// 55380 mov     al, byte_3873F ;~ 1C70:0C3C
cs=0x1c70;eip=0x000c3f; 	X(MOV(*(raddr(ds,bx-0x3753)), al));	// 55381 mov     [bx-3753h], al ;~ 1C70:0C3F
cs=0x1c70;eip=0x000c43; 	X(MOV(*(dw*)(raddr(ds,si-0x3793)), cx));	// 55382 mov     [si-3793h], cx ;~ 1C70:0C43
cs=0x1c70;eip=0x000c47; 	X(MOV(*(raddr(ds,bx-0x3743)), ch));	// 55383 mov     [bx-3743h], ch ;~ 1C70:0C47
cs=0x1c70;eip=0x000c4b; 	R(CALL(sub_2b946,0));	// 55384 call    sub_2B946 ;~ 1C70:0C4B
cs=0x1c70;eip=0x000c4e; 	T(MOV(al, dl));	// 55385 mov     al, dl ;~ 1C70:0C4E
cs=0x1c70;eip=0x000c50; 	T(SHR(al, 1));	// 55386 shr     al, 1 ;~ 1C70:0C50
cs=0x1c70;eip=0x000c52; 	T(SHR(al, 1));	// 55387 shr     al, 1 ;~ 1C70:0C52
cs=0x1c70;eip=0x000c54; 	T(SHR(al, 1));	// 55388 shr     al, 1 ;~ 1C70:0C54
cs=0x1c70;eip=0x000c56; 	T(XOR(al, 0x0F));	// 55389 xor     al, 0Fh ;~ 1C70:0C56
cs=0x1c70;eip=0x000c58; 	T(MOV(cl, *(raddr(ds,bx-0x350E))));	// 55390 mov     cl, [bx-350Eh] ;~ 1C70:0C58
cs=0x1c70;eip=0x000c5c; 	T(OR(al, cl));	// 55391 or      al, cl ;~ 1C70:0C5C
cs=0x1c70;eip=0x000c5e; 	T(OR(al, 0x90));	// 55392 or      al, 90h ;~ 1C70:0C5E
cs=0x1c70;eip=0x000c60; 	R(OUT(0x0C0, al));	// 55393 out     0C0h, al        ; DMA controller, 8237A-5. ;~ 1C70:0C60
loc_2b942:
	// 8441 
cs=0x1c70;eip=0x000c62; 	X(POP(dx));	// 55399 pop     dx ;~ 1C70:0C62
cs=0x1c70;eip=0x000c63; 	X(POP(cx));	// 55400 pop     cx ;~ 1C70:0C63
cs=0x1c70;eip=0x000c64; 	X(POP(bx));	// 55401 pop     bx ;~ 1C70:0C64
cs=0x1c70;eip=0x000c65; 	R(RETN(0));	// 55402 retn ;~ 1C70:0C65
ret_1c70_ca0:
	// 8445 
cs=0x1c70;eip=0x000ca0; 	X(PUSH(bx));	// 55450 push    bx ;~ 1C70:0CA0
cs=0x1c70;eip=0x000ca1; 	X(PUSH(cx));	// 55451 push    cx ;~ 1C70:0CA1
cs=0x1c70;eip=0x000ca2; 	T(SUB(ch, 0x18));	// 55452 sub     ch, 18h ;~ 1C70:0CA2
loc_2b985:
	// 8446 
cs=0x1c70;eip=0x000ca5; 	R(JNS(loc_2b98c));	// 55455 jns     short loc_2B98C ;~ 1C70:0CA5
cs=0x1c70;eip=0x000ca7; 	T(ADD(ch, 0x0C));	// 55456 add     ch, 0Ch ;~ 1C70:0CA7
cs=0x1c70;eip=0x000caa; 	R(JMP(loc_2b985));	// 55457 jmp     short loc_2B985 ;~ 1C70:0CAA
loc_2b98c:
	// 8447 
cs=0x1c70;eip=0x000cac; 	T(TEST(byte_387cd, 1));	// 55461 test    byte_387CD, 1 ;~ 1C70:0CAC
cs=0x1c70;eip=0x000cb1; 	R(JNZ(loc_2b999));	// 55462 jnz     short loc_2B999 ;~ 1C70:0CB1
cs=0x1c70;eip=0x000cb3; 	T(CMP(ch, *(raddr(ds,bx-0x3743))));	// 55463 cmp     ch, [bx-3743h] ;~ 1C70:0CB3
cs=0x1c70;eip=0x000cb7; 	R(JNZ(loc_2b9ae));	// 55464 jnz     short loc_2B9AE ;~ 1C70:0CB7
loc_2b999:
	// 8448 
cs=0x1c70;eip=0x000cb9; 	T(MOV(al, *(raddr(ds,bx-0x350E))));	// 55467 mov     al, [bx-350Eh] ;~ 1C70:0CB9
cs=0x1c70;eip=0x000cbd; 	T(ADD(al, 0x10));	// 55468 add     al, 10h ;~ 1C70:0CBD
cs=0x1c70;eip=0x000cbf; 	T(OR(al, 0x8F));	// 55469 or      al, 8Fh ;~ 1C70:0CBF
cs=0x1c70;eip=0x000cc1; 	R(OUT(0x0C0, al));	// 55470 out     0C0h, al        ; DMA controller, 8237A-5. ;~ 1C70:0CC1
cs=0x1c70;eip=0x000cc3; 	X(MOV(*(dw*)(raddr(ds,si-0x3793)), 0));	// 55473 mov     word ptr [si-3793h], 0 ;~ 1C70:0CC3
cs=0x1c70;eip=0x000cc9; 	X(MOV(*(raddr(ds,bx-0x3743)), 0));	// 55474 mov     byte ptr [bx-3743h], 0 ;~ 1C70:0CC9
loc_2b9ae:
	// 8449 
cs=0x1c70;eip=0x000cce; 	X(POP(cx));	// 55477 pop     cx ;~ 1C70:0CCE
cs=0x1c70;eip=0x000ccf; 	X(POP(bx));	// 55478 pop     bx ;~ 1C70:0CCF
cs=0x1c70;eip=0x000cd0; 	R(RETN(0));	// 55479 retn ;~ 1C70:0CD0
ret_1c70_cd1:
	// 8450 
cs=0x1c70;eip=0x000cd1; 	X(PUSH(cx));	// 55481 push    cx ;~ 1C70:0CD1
cs=0x1c70;eip=0x000cd2; 	X(PUSH(dx));	// 55482 push    dx ;~ 1C70:0CD2
cs=0x1c70;eip=0x000cd3; 	T(MOV(cx, 2));	// 55483 mov     cx, 2 ;~ 1C70:0CD3
loc_2b9b6:
	// 8451 
cs=0x1c70;eip=0x000cd6; 	T(MOV(bx, cx));	// 55486 mov     bx, cx ;~ 1C70:0CD6
cs=0x1c70;eip=0x000cd8; 	T(MOV(al, *(raddr(ds,bx-0x350E))));	// 55487 mov     al, [bx-350Eh] ;~ 1C70:0CD8
cs=0x1c70;eip=0x000cdc; 	T(ADD(al, 0x10));	// 55488 add     al, 10h ;~ 1C70:0CDC
cs=0x1c70;eip=0x000cde; 	T(OR(al, 0x8F));	// 55489 or      al, 8Fh ;~ 1C70:0CDE
cs=0x1c70;eip=0x000ce0; 	R(OUT(0x0C0, al));	// 55490 out     0C0h, al        ; DMA controller, 8237A-5. ;~ 1C70:0CE0
cs=0x1c70;eip=0x000ce2; 	T(DEC(cl));	// 55493 dec     cl ;~ 1C70:0CE2
cs=0x1c70;eip=0x000ce4; 	R(JNS(loc_2b9b6));	// 55494 jns     short loc_2B9B6 ;~ 1C70:0CE4
cs=0x1c70;eip=0x000ce6; 	X(POP(dx));	// 55495 pop     dx ;~ 1C70:0CE6
cs=0x1c70;eip=0x000ce7; 	X(POP(cx));	// 55496 pop     cx ;~ 1C70:0CE7
cs=0x1c70;eip=0x000ce8; 	R(RETN(0));	// 55497 retn ;~ 1C70:0CE8
ret_1c70_eab:
	// 8478 
cs=0x1c70;eip=0x000eab; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 55782 mov     ax, [di] ;~ 1C70:0EAB
cs=0x1c70;eip=0x000ead; 	T(MOV(dx, *(dw*)(raddr(ds,di+2))));	// 55783 mov     dx, [di+2] ;~ 1C70:0EAD
cs=0x1c70;eip=0x000eb0; 	T(OR(ax, ax));	// 55784 or      ax, ax ;~ 1C70:0EB0
cs=0x1c70;eip=0x000eb2; 	R(JNZ(loc_2bb96));	// 55785 jnz     short loc_2BB96 ;~ 1C70:0EB2
cs=0x1c70;eip=0x000eb4; 	T(NEG(dx));	// 55786 neg     dx ;~ 1C70:0EB4
loc_2bb96:
	// 8479 
cs=0x1c70;eip=0x000eb6; 	X(MOV(*(dw*)(raddr(ds,si-0x34E3)), dx));	// 55789 mov     [si-34E3h], dx ;~ 1C70:0EB6
cs=0x1c70;eip=0x000eba; 	T(ADD(di, 4));	// 55790 add     di, 4 ;~ 1C70:0EBA
cs=0x1c70;eip=0x000ebd; 	R(RETN(0));	// 55791 retn ;~ 1C70:0EBD
ret_1c70_ebe:
	// 8480 
cs=0x1c70;eip=0x000ebe; 	X(MOV(*(dw*)(raddr(ds,si-0x34E3)), 0));	// 55793 mov     word ptr [si-34E3h], 0 ;~ 1C70:0EBE
cs=0x1c70;eip=0x000ec4; 	R(RETN(0));	// 55794 retn ;~ 1C70:0EC4
ret_1c70_ec5:
	// 8481 
cs=0x1c70;eip=0x000ec5; 	T(MOV(dx, *(dw*)(raddr(ds,di))));	// 55796 mov     dx, [di] ;~ 1C70:0EC5
cs=0x1c70;eip=0x000ec7; 	X(MOV(*(dw*)(raddr(ds,si-0x34E9)), dx));	// 55797 mov     [si-34E9h], dx ;~ 1C70:0EC7
cs=0x1c70;eip=0x000ecb; 	T(SHR(dx, 1));	// 55798 shr     dx, 1 ;~ 1C70:0ECB
cs=0x1c70;eip=0x000ecd; 	T(OR(dl, 1));	// 55799 or      dl, 1 ;~ 1C70:0ECD
cs=0x1c70;eip=0x000ed0; 	X(MOV(*(dw*)(raddr(ds,si-0x34EF)), dx));	// 55800 mov     [si-34EFh], dx ;~ 1C70:0ED0
cs=0x1c70;eip=0x000ed4; 	T(MOV(dx, *(dw*)(raddr(ds,di+2))));	// 55801 mov     dx, [di+2] ;~ 1C70:0ED4
cs=0x1c70;eip=0x000ed7; 	X(MOV(*(dw*)(raddr(ds,si-0x34FB)), dx));	// 55802 mov     [si-34FBh], dx ;~ 1C70:0ED7
cs=0x1c70;eip=0x000edb; 	T(ADD(di, 4));	// 55803 add     di, 4 ;~ 1C70:0EDB
cs=0x1c70;eip=0x000ede; 	R(RETN(0));	// 55804 retn ;~ 1C70:0EDE
ret_1c70_edf:
	// 8482 
cs=0x1c70;eip=0x000edf; 	T(SUB(ax, ax));	// 55806 sub     ax, ax ;~ 1C70:0EDF
cs=0x1c70;eip=0x000ee1; 	X(MOV(*(dw*)(raddr(ds,si-0x34FB)), ax));	// 55807 mov     [si-34FBh], ax ;~ 1C70:0EE1
cs=0x1c70;eip=0x000ee5; 	X(MOV(*(dw*)(raddr(ds,si-0x34E9)), ax));	// 55808 mov     [si-34E9h], ax ;~ 1C70:0EE5
cs=0x1c70;eip=0x000ee9; 	R(RETN(0));	// 55809 retn ;~ 1C70:0EE9
ret_1c70_eea:
	// 8483 
cs=0x1c70;eip=0x000eea; 	T(MOV(dx, *(dw*)(raddr(ds,di))));	// 55811 mov     dx, [di] ;~ 1C70:0EEA
cs=0x1c70;eip=0x000eec; 	X(MOV(*(dw*)(raddr(ds,si-0x34DD)), dx));	// 55812 mov     [si-34DDh], dx ;~ 1C70:0EEC
cs=0x1c70;eip=0x000ef0; 	T(ADD(di, 2));	// 55813 add     di, 2 ;~ 1C70:0EF0
cs=0x1c70;eip=0x000ef3; 	R(RETN(0));	// 55814 retn ;~ 1C70:0EF3
ret_1c70_ef4:
	// 8484 
cs=0x1c70;eip=0x000ef4; 	X(PUSH(bx));	// 55816 push    bx ;~ 1C70:0EF4
cs=0x1c70;eip=0x000ef5; 	X(PUSH(si));	// 55817 push    si ;~ 1C70:0EF5
cs=0x1c70;eip=0x000ef6; 	T(MOV(al, bl));	// 55818 mov     al, bl ;~ 1C70:0EF6
cs=0x1c70;eip=0x000ef8; 	T(INC(al));	// 55819 inc     al ;~ 1C70:0EF8
cs=0x1c70;eip=0x000efa; 	X(MOV(byte_3873f, al));	// 55820 mov     byte_3873F, al ;~ 1C70:0EFA
cs=0x1c70;eip=0x000efd; 	T(MOV(bl, *(raddr(ds,bx-0x34C5))));	// 55821 mov     bl, [bx-34C5h] ;~ 1C70:0EFD
cs=0x1c70;eip=0x000f01; 	T(MOV(si, bx));	// 55822 mov     si, bx ;~ 1C70:0F01
cs=0x1c70;eip=0x000f03; 	T(SHL(si, 1));	// 55823 shl     si, 1 ;~ 1C70:0F03
cs=0x1c70;eip=0x000f05; 	T(MOV(ax, *(dw*)(raddr(ds,si-0x3793))));	// 55824 mov     ax, [si-3793h] ;~ 1C70:0F05
cs=0x1c70;eip=0x000f09; 	T(OR(ax, ax));	// 55825 or      ax, ax ;~ 1C70:0F09
cs=0x1c70;eip=0x000f0b; 	R(JZ(loc_2bbff));	// 55826 jz      short loc_2BBFF ;~ 1C70:0F0B
cs=0x1c70;eip=0x000f0d; 	X(MOV(byte_387cd, 1));	// 55827 mov     byte_387CD, 1 ;~ 1C70:0F0D
cs=0x1c70;eip=0x000f12; 	T(MOV(ch, *(raddr(ds,bx-0x3743))));	// 55828 mov     ch, [bx-3743h] ;~ 1C70:0F12
cs=0x1c70;eip=0x000f16; 	R(CALL(__dispatch_call,off_38748));	// 55829 call    off_38748 ;~ 1C70:0F16
cs=0x1c70;eip=0x000f1a; 	X(MOV(byte_387cd, 0));	// 55830 mov     byte_387CD, 0 ;~ 1C70:0F1A
loc_2bbff:
	// 8485 
cs=0x1c70;eip=0x000f1f; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 55833 mov     ax, [di] ;~ 1C70:0F1F
cs=0x1c70;eip=0x000f21; 	T(MOV(ch, al));	// 55834 mov     ch, al ;~ 1C70:0F21
cs=0x1c70;eip=0x000f23; 	T(SUB(cl, cl));	// 55835 sub     cl, cl ;~ 1C70:0F23
cs=0x1c70;eip=0x000f25; 	T(MOV(dx, *(dw*)(raddr(ds,di+2))));	// 55836 mov     dx, [di+2] ;~ 1C70:0F25
cs=0x1c70;eip=0x000f28; 	X(MOV(*(raddr(ds,bx-0x3773)), dl));	// 55837 mov     [bx-3773h], dl ;~ 1C70:0F28
cs=0x1c70;eip=0x000f2c; 	T(OR(dx, dx));	// 55838 or      dx, dx ;~ 1C70:0F2C
cs=0x1c70;eip=0x000f2e; 	R(JZ(loc_2bc18));	// 55839 jz      short loc_2BC18 ;~ 1C70:0F2E
cs=0x1c70;eip=0x000f30; 	T(MOV(dh, *(raddr(ds,bx-0x3733))));	// 55840 mov     dh, [bx-3733h] ;~ 1C70:0F30
cs=0x1c70;eip=0x000f34; 	R(CALL(__dispatch_call,off_38746));	// 55841 call    off_38746 ;~ 1C70:0F34
loc_2bc18:
	// 8486 
cs=0x1c70;eip=0x000f38; 	T(ADD(di, 4));	// 55844 add     di, 4 ;~ 1C70:0F38
cs=0x1c70;eip=0x000f3b; 	X(POP(si));	// 55845 pop     si ;~ 1C70:0F3B
cs=0x1c70;eip=0x000f3c; 	X(POP(bx));	// 55846 pop     bx ;~ 1C70:0F3C
cs=0x1c70;eip=0x000f3d; 	R(RETN(0));	// 55847 retn ;~ 1C70:0F3D
ret_1c70_f3e:
	// 8487 
cs=0x1c70;eip=0x000f3e; 	T(MOV(ax, *(dw*)(raddr(ds,si-0x34CB))));	// 55849 mov     ax, [si-34CBh] ;~ 1C70:0F3E
cs=0x1c70;eip=0x000f42; 	T(OR(ax, ax));	// 55850 or      ax, ax ;~ 1C70:0F42
cs=0x1c70;eip=0x000f44; 	R(JZ(loc_2bc3f));	// 55851 jz      short loc_2BC3F ;~ 1C70:0F44
cs=0x1c70;eip=0x000f46; 	T(CMP(ax, 0x0FFFF));	// 55852 cmp     ax, 0FFFFh ;~ 1C70:0F46
cs=0x1c70;eip=0x000f49; 	R(JZ(loc_2bc2c));	// 55853 jz      short loc_2BC2C ;~ 1C70:0F49
cs=0x1c70;eip=0x000f4b; 	T(DEC(ax));	// 55854 dec     ax ;~ 1C70:0F4B
loc_2bc2c:
	// 8488 
cs=0x1c70;eip=0x000f4c; 	X(MOV(*(dw*)(raddr(ds,si-0x34CB)), ax));	// 55857 mov     [si-34CBh], ax ;~ 1C70:0F4C
cs=0x1c70;eip=0x000f50; 	T(OR(ax, ax));	// 55858 or      ax, ax ;~ 1C70:0F50
cs=0x1c70;eip=0x000f52; 	R(JZ(loc_2bc3a));	// 55859 jz      short loc_2BC3A ;~ 1C70:0F52
cs=0x1c70;eip=0x000f54; 	T(MOV(di, *(dw*)(raddr(ds,si-0x34D1))));	// 55860 mov     di, [si-34D1h] ;~ 1C70:0F54
cs=0x1c70;eip=0x000f58; 	R(JMP(locret_2bc4f));	// 55861 jmp     short locret_2BC4F ;~ 1C70:0F58
loc_2bc3a:
	// 8489 
cs=0x1c70;eip=0x000f5a; 	T(ADD(di, 4));	// 55865 add     di, 4 ;~ 1C70:0F5A
cs=0x1c70;eip=0x000f5d; 	R(JMP(locret_2bc4f));	// 55866 jmp     short locret_2BC4F ;~ 1C70:0F5D
loc_2bc3f:
	// 8490 
cs=0x1c70;eip=0x000f5f; 	T(MOV(ax, *(dw*)(raddr(ds,di+2))));	// 55870 mov     ax, [di+2] ;~ 1C70:0F5F
cs=0x1c70;eip=0x000f62; 	T(OR(ax, ax));	// 55871 or      ax, ax ;~ 1C70:0F62
cs=0x1c70;eip=0x000f64; 	R(JNZ(loc_2bc47));	// 55872 jnz     short loc_2BC47 ;~ 1C70:0F64
cs=0x1c70;eip=0x000f66; 	T(DEC(ax));	// 55873 dec     ax ;~ 1C70:0F66
loc_2bc47:
	// 8491 
cs=0x1c70;eip=0x000f67; 	X(MOV(*(dw*)(raddr(ds,si-0x34CB)), ax));	// 55876 mov     [si-34CBh], ax ;~ 1C70:0F67
cs=0x1c70;eip=0x000f6b; 	T(MOV(di, *(dw*)(raddr(ds,si-0x34D1))));	// 55877 mov     di, [si-34D1h] ;~ 1C70:0F6B
locret_2bc4f:
	// 8492 
cs=0x1c70;eip=0x000f6f; 	R(RETN(0));	// 55881 retn ;~ 1C70:0F6F
ret_1c70_f70:
	// 8493 
cs=0x1c70;eip=0x000f70; 	T(ADD(di, 2));	// 55883 add     di, 2 ;~ 1C70:0F70
cs=0x1c70;eip=0x000f73; 	X(MOV(*(dw*)(raddr(ds,si-0x34D1)), di));	// 55884 mov     [si-34D1h], di ;~ 1C70:0F73
cs=0x1c70;eip=0x000f77; 	R(RETN(0));	// 55885 retn ;~ 1C70:0F77
loc_2bc58:
	// 8494 
cs=0x1c70;eip=0x000f78; 	T(MOV(al, *(raddr(ds,bx-0x34C5))));	// 55889 mov     al, [bx-34C5h] ;~ 1C70:0F78
cs=0x1c70;eip=0x000f7c; 	T(SUB(ah, ah));	// 55890 sub     ah, ah ;~ 1C70:0F7C
cs=0x1c70;eip=0x000f7e; 	X(PUSH(ax));	// 55891 push    ax ;~ 1C70:0F7E
cs=0x1c70;eip=0x000f7f; 	R(CALLF(sub_2adcc,0));	// 55892 call    sub_2ADCC ;~ 1C70:0F7F
cs=0x1c70;eip=0x000f84; 	T(ADD(sp, 2));	// 55893 add     sp, 2 ;~ 1C70:0F84
cs=0x1c70;eip=0x000f87; 	R(CALL(sub_2bc6d,0));	// 55894 call    sub_2BC6D ;~ 1C70:0F87
cs=0x1c70;eip=0x000f8a; 	T(SUB(di, di));	// 55895 sub     di, di ;~ 1C70:0F8A
cs=0x1c70;eip=0x000f8c; 	R(RETN(0));	// 55896 retn ;~ 1C70:0F8C
ret_1c70_fb1:
	// 8496 
cs=0x1c70;eip=0x000fb1; 	X(PUSH(bx));	// 55916 push    bx ;~ 1C70:0FB1
cs=0x1c70;eip=0x000fb2; 	X(PUSH(si));	// 55917 push    si ;~ 1C70:0FB2
cs=0x1c70;eip=0x000fb3; 	T(MOV(bl, *(raddr(ds,bx-0x34C5))));	// 55918 mov     bl, [bx-34C5h] ;~ 1C70:0FB3
cs=0x1c70;eip=0x000fb7; 	T(MOV(si, *(dw*)(raddr(ds,di))));	// 55919 mov     si, [di] ;~ 1C70:0FB7
cs=0x1c70;eip=0x000fb9; 	T(MOV(ch, *(raddr(ds,si-0x39C8))));	// 55920 mov     ch, [si-39C8h] ;~ 1C70:0FB9
cs=0x1c70;eip=0x000fbd; 	T(MOV(si, bx));	// 55921 mov     si, bx ;~ 1C70:0FBD
cs=0x1c70;eip=0x000fbf; 	T(SHL(si, 1));	// 55922 shl     si, 1 ;~ 1C70:0FBF
cs=0x1c70;eip=0x000fc1; 	R(CALL(__dispatch_call,off_3874a));	// 55923 call    off_3874A ;~ 1C70:0FC1
cs=0x1c70;eip=0x000fc5; 	T(ADD(di, 2));	// 55924 add     di, 2 ;~ 1C70:0FC5
cs=0x1c70;eip=0x000fc8; 	X(POP(si));	// 55925 pop     si ;~ 1C70:0FC8
cs=0x1c70;eip=0x000fc9; 	X(POP(bx));	// 55926 pop     bx ;~ 1C70:0FC9
cs=0x1c70;eip=0x000fca; 	R(RETN(0));	// 55927 retn ;~ 1C70:0FCA
ret_1c70_fcb:
	// 8497 
cs=0x1c70;eip=0x000fcb; 	X(PUSH(bx));	// 55929 push    bx ;~ 1C70:0FCB
cs=0x1c70;eip=0x000fcc; 	X(PUSH(si));	// 55930 push    si ;~ 1C70:0FCC
cs=0x1c70;eip=0x000fcd; 	T(TEST(byte_38740, 0x0FF));	// 55931 test    byte_38740, 0FFh ;~ 1C70:0FCD
cs=0x1c70;eip=0x000fd2; 	R(JNZ(loc_2bcd9));	// 55932 jnz     short loc_2BCD9 ;~ 1C70:0FD2
cs=0x1c70;eip=0x000fd4; 	T(MOV(si, 0x0F));	// 55933 mov     si, 0Fh ;~ 1C70:0FD4
cs=0x1c70;eip=0x000fd7; 	T(MOV(al, 1));	// 55934 mov     al, 1 ;~ 1C70:0FD7
loc_2bcb9:
	// 8498 
cs=0x1c70;eip=0x000fd9; 	T(CMP(al, *(raddr(ds,si-0x350B))));	// 55937 cmp     al, [si-350Bh] ;~ 1C70:0FD9
cs=0x1c70;eip=0x000fdd; 	R(JZ(loc_2bcd9));	// 55938 jz      short loc_2BCD9 ;~ 1C70:0FDD
cs=0x1c70;eip=0x000fdf; 	T(DEC(si));	// 55939 dec     si ;~ 1C70:0FDF
cs=0x1c70;eip=0x000fe0; 	R(JNS(loc_2bcb9));	// 55940 jns     short loc_2BCB9 ;~ 1C70:0FE0
cs=0x1c70;eip=0x000fe2; 	T(MOV(di, *(dw*)(raddr(ds,di))));	// 55941 mov     di, [di] ;~ 1C70:0FE2
cs=0x1c70;eip=0x000fe4; 	T(MOV(bl, *(raddr(ds,bx-0x34C5))));	// 55942 mov     bl, [bx-34C5h] ;~ 1C70:0FE4
cs=0x1c70;eip=0x000fe8; 	X(MOV(*(raddr(ds,bx-0x3733)), 0x60));	// 55943 mov     byte ptr [bx-3733h], 60h ; '`' ;~ 1C70:0FE8
cs=0x1c70;eip=0x000fed; 	X(MOV(*(raddr(ds,bx-0x350B)), 1));	// 55944 mov     byte ptr [bx-350Bh], 1 ;~ 1C70:0FED
cs=0x1c70;eip=0x000ff2; 	X(MOV(byte_34fb7, bl));	// 55945 mov     byte_34FB7, bl ;~ 1C70:0FF2
cs=0x1c70;eip=0x000ff6; 	X(POP(si));	// 55946 pop     si ;~ 1C70:0FF6
cs=0x1c70;eip=0x000ff7; 	X(POP(bx));	// 55947 pop     bx ;~ 1C70:0FF7
cs=0x1c70;eip=0x000ff8; 	R(RETN(0));	// 55948 retn ;~ 1C70:0FF8
loc_2bcd9:
	// 8499 
cs=0x1c70;eip=0x000ff9; 	X(POP(si));	// 55953 pop     si ;~ 1C70:0FF9
cs=0x1c70;eip=0x000ffa; 	X(POP(bx));	// 55954 pop     bx ;~ 1C70:0FFA
cs=0x1c70;eip=0x000ffb; 	R(JMP(loc_2bc58));	// 55955 jmp     loc_2BC58 ;~ 1C70:0FFB
sub_2aeac:
	// 53667 
#undef arg_0
#define arg_0 6
	// 53669 arg_0           = word ptr  6 ;~ 1C70:01CC
ret_1c70_1cc:
	// 8281 
cs=0x1c70;eip=0x0001cc; 	X(PUSH(bp));	// 53671 push    bp ;~ 1C70:01CC
cs=0x1c70;eip=0x0001cd; 	T(MOV(bp, sp));	// 53672 mov     bp, sp ;~ 1C70:01CD
cs=0x1c70;eip=0x0001cf; 	X(PUSH(ax));	// 53673 push    ax ;~ 1C70:01CF
cs=0x1c70;eip=0x0001d0; 	X(PUSH(bx));	// 53674 push    bx ;~ 1C70:01D0
cs=0x1c70;eip=0x0001d1; 	X(PUSH(cx));	// 53675 push    cx ;~ 1C70:01D1
cs=0x1c70;eip=0x0001d2; 	X(PUSH(dx));	// 53676 push    dx ;~ 1C70:01D2
cs=0x1c70;eip=0x0001d3; 	X(PUSH(es));	// 53677 push    es ;~ 1C70:01D3
cs=0x1c70;eip=0x0001d4; 	X(PUSH(si));	// 53678 push    si ;~ 1C70:01D4
cs=0x1c70;eip=0x0001d5; 	X(PUSH(di));	// 53679 push    di ;~ 1C70:01D5
cs=0x1c70;eip=0x0001d6; 	X(MOV(byte_38421, 0));	// 53680 mov     byte_38421, 0 ;~ 1C70:01D6
cs=0x1c70;eip=0x0001db; 	X(MOV(word_38945, 0));	// 53681 mov     word_38945, 0 ;~ 1C70:01DB
cs=0x1c70;eip=0x0001e1; 	X(MOV(word_3895d, 0));	// 53682 mov     word_3895D, 0 ;~ 1C70:01E1
cs=0x1c70;eip=0x0001e7; 	R(CALL(sub_2af5d,0));	// 53683 call    sub_2AF5D ;~ 1C70:01E7
cs=0x1c70;eip=0x0001ea; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 53684 mov     ax, [bp+arg_0] ;~ 1C70:01EA
cs=0x1c70;eip=0x0001ed; 	T(TEST(ax, 0x80));	// 53685 test    ax, 80h ;~ 1C70:01ED
cs=0x1c70;eip=0x0001f0; 	R(JZ(loc_2aee8));	// 53686 jz      short loc_2AEE8 ;~ 1C70:01F0
cs=0x1c70;eip=0x0001f2; 	R(CALL(sub_2b30c,0));	// 53687 call    sub_2B30C ;~ 1C70:01F2
cs=0x1c70;eip=0x0001f5; 	T(OR(ax, ax));	// 53688 or      ax, ax ;~ 1C70:01F5
cs=0x1c70;eip=0x0001f7; 	R(JZ(loc_2af2c));	// 53689 jz      short loc_2AF2C ;~ 1C70:01F7
cs=0x1c70;eip=0x0001f9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 53690 mov     ax, [bp+arg_0] ;~ 1C70:01F9
cs=0x1c70;eip=0x0001fc; 	R(CALL(sub_2b472,0));	// 53691 call    sub_2B472 ;~ 1C70:01FC
cs=0x1c70;eip=0x0001ff; 	T(OR(ax, ax));	// 53692 or      ax, ax ;~ 1C70:01FF
cs=0x1c70;eip=0x000201; 	R(JZ(loc_2af2c));	// 53693 jz      short loc_2AF2C ;~ 1C70:0201
cs=0x1c70;eip=0x000203; 	T(MOV(bx, 4));	// 53694 mov     bx, 4 ;~ 1C70:0203
cs=0x1c70;eip=0x000206; 	R(JMP(loc_2af41));	// 53695 jmp     short loc_2AF41 ;~ 1C70:0206
loc_2aee8:
	// 8282 
cs=0x1c70;eip=0x000208; 	T(CMP(ax, 4));	// 53699 cmp     ax, 4 ;~ 1C70:0208
cs=0x1c70;eip=0x00020b; 	R(JNZ(loc_2af02));	// 53700 jnz     short loc_2AF02 ;~ 1C70:020B
cs=0x1c70;eip=0x00020d; 	R(CALLF(sub_2bda8,0));	// 53701 call    sub_2BDA8 ;~ 1C70:020D
cs=0x1c70;eip=0x000212; 	T(OR(ax, ax));	// 53702 or      ax, ax ;~ 1C70:0212
cs=0x1c70;eip=0x000214; 	R(JZ(loc_2af2c));	// 53703 jz      short loc_2AF2C ;~ 1C70:0214
cs=0x1c70;eip=0x000216; 	R(CALL(sub_2b6cd,0));	// 53704 call    sub_2B6CD ;~ 1C70:0216
cs=0x1c70;eip=0x000219; 	T(OR(ax, ax));	// 53705 or      ax, ax ;~ 1C70:0219
cs=0x1c70;eip=0x00021b; 	R(JZ(loc_2af2c));	// 53706 jz      short loc_2AF2C ;~ 1C70:021B
cs=0x1c70;eip=0x00021d; 	T(MOV(bx, 3));	// 53707 mov     bx, 3 ;~ 1C70:021D
cs=0x1c70;eip=0x000220; 	R(JMP(loc_2af41));	// 53708 jmp     short loc_2AF41 ;~ 1C70:0220
loc_2af02:
	// 8283 
cs=0x1c70;eip=0x000222; 	T(CMP(ax, 2));	// 53712 cmp     ax, 2 ;~ 1C70:0222
cs=0x1c70;eip=0x000225; 	R(JNZ(loc_2af1c));	// 53713 jnz     short loc_2AF1C ;~ 1C70:0225
cs=0x1c70;eip=0x000227; 	R(CALL(sub_2b6f8,0));	// 53714 call    sub_2B6F8 ;~ 1C70:0227
cs=0x1c70;eip=0x00022a; 	T(OR(ax, ax));	// 53715 or      ax, ax ;~ 1C70:022A
cs=0x1c70;eip=0x00022c; 	R(JZ(loc_2af2c));	// 53716 jz      short loc_2AF2C ;~ 1C70:022C
cs=0x1c70;eip=0x00022e; 	R(CALL(sub_2b83f,0));	// 53717 call    sub_2B83F ;~ 1C70:022E
cs=0x1c70;eip=0x000231; 	T(MOV(cx, 5));	// 53718 mov     cx, 5 ;~ 1C70:0231
cs=0x1c70;eip=0x000234; 	R(CALL(sub_2af52,0));	// 53719 call    sub_2AF52 ;~ 1C70:0234
cs=0x1c70;eip=0x000237; 	T(MOV(bx, 2));	// 53720 mov     bx, 2 ;~ 1C70:0237
cs=0x1c70;eip=0x00023a; 	R(JMP(loc_2af41));	// 53721 jmp     short loc_2AF41 ;~ 1C70:023A
loc_2af1c:
	// 8284 
cs=0x1c70;eip=0x00023c; 	T(CMP(ax, 1));	// 53725 cmp     ax, 1 ;~ 1C70:023C
cs=0x1c70;eip=0x00023f; 	R(JNZ(loc_2af2c));	// 53726 jnz     short loc_2AF2C ;~ 1C70:023F
cs=0x1c70;eip=0x000241; 	T(MOV(cx, 2));	// 53727 mov     cx, 2 ;~ 1C70:0241
cs=0x1c70;eip=0x000244; 	R(CALL(sub_2af52,0));	// 53728 call    sub_2AF52 ;~ 1C70:0244
cs=0x1c70;eip=0x000247; 	T(MOV(bx, 1));	// 53729 mov     bx, 1 ;~ 1C70:0247
cs=0x1c70;eip=0x00024a; 	R(JMP(loc_2af41));	// 53730 jmp     short loc_2AF41 ;~ 1C70:024A
loc_2af2c:
	// 8285 
cs=0x1c70;eip=0x00024c; 	T(MOV(bx, 0));	// 53735 mov     bx, 0 ;~ 1C70:024C
cs=0x1c70;eip=0x00024f; 	X(MOV(word_38957, 0x0C));	// 53736 mov     word_38957, 0Ch ;~ 1C70:024F
cs=0x1c70;eip=0x000255; 	X(MOV(word_38945, 1));	// 53737 mov     word_38945, 1 ;~ 1C70:0255
cs=0x1c70;eip=0x00025b; 	T(CLI);	// 53738 cli ;~ 1C70:025B
cs=0x1c70;eip=0x00025c; 	T(MOV(al, 0x0B6));	// 53739 mov     al, 0B6h ; '¶' ;~ 1C70:025C
cs=0x1c70;eip=0x00025e; 	R(OUT(0x43, al));	// 53740 out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 1C70:025E
cs=0x1c70;eip=0x000260; 	T(STI);	// 53741 sti ;~ 1C70:0260
loc_2af41:
	// 8286 
cs=0x1c70;eip=0x000261; 	R(CALL(sub_2af85,0));	// 53745 call    sub_2AF85 ;~ 1C70:0261
cs=0x1c70;eip=0x000264; 	X(OR(byte_38420, 1));	// 53746 or      byte_38420, 1 ;~ 1C70:0264
cs=0x1c70;eip=0x000269; 	X(POP(di));	// 53747 pop     di ;~ 1C70:0269
cs=0x1c70;eip=0x00026a; 	X(POP(si));	// 53748 pop     si ;~ 1C70:026A
cs=0x1c70;eip=0x00026b; 	X(POP(es));	// 53749 pop     es ;~ 1C70:026B
cs=0x1c70;eip=0x00026c; 	X(POP(dx));	// 53750 pop     dx ;~ 1C70:026C
cs=0x1c70;eip=0x00026d; 	X(POP(cx));	// 53751 pop     cx ;~ 1C70:026D
cs=0x1c70;eip=0x00026e; 	X(POP(bx));	// 53752 pop     bx ;~ 1C70:026E
cs=0x1c70;eip=0x00026f; 	X(POP(ax));	// 53753 pop     ax ;~ 1C70:026F
cs=0x1c70;eip=0x000270; 	X(POP(bp));	// 53754 pop     bp ;~ 1C70:0270
cs=0x1c70;eip=0x000271; 	R(RETF(0));	// 53755 retf ;~ 1C70:0271
sub_2af52:
	// 53762 
cs=0x1c70;eip=0x000272; 	X(PUSH(bx));	// 53764 push    bx ;~ 1C70:0272
loc_2af53:
	// 8287 
cs=0x1c70;eip=0x000273; 	T(MOV(bx, cx));	// 53767 mov     bx, cx ;~ 1C70:0273
cs=0x1c70;eip=0x000275; 	X(MOV(*(raddr(ds,bx-0x38B8)), bl));	// 53768 mov     [bx-38B8h], bl ;~ 1C70:0275
cs=0x1c70;eip=0x000279; 	R(LOOP(loc_2af53));	// 53769 loop    loc_2AF53 ;~ 1C70:0279
cs=0x1c70;eip=0x00027b; 	X(POP(bx));	// 53770 pop     bx ;~ 1C70:027B
cs=0x1c70;eip=0x00027c; 	R(RETN(0));	// 53771 retn ;~ 1C70:027C
sub_2af5d:
	// 53778 
cs=0x1c70;eip=0x00027d; 	X(PUSH(cx));	// 53780 push    cx ;~ 1C70:027D
ret_1c70_27e:
	// 8288 
cs=0x1c70;eip=0x00027e; 	X(PUSH(es));	// 53781 push    es ;~ 1C70:027E
cs=0x1c70;eip=0x00027f; 	X(PUSH(ds));	// 53782 push    ds ;~ 1C70:027F
cs=0x1c70;eip=0x000280; 	X(PUSH(di));	// 53783 push    di ;~ 1C70:0280
cs=0x1c70;eip=0x000281; 	X(PUSH(si));	// 53784 push    si ;~ 1C70:0281
cs=0x1c70;eip=0x000282; 	T(CLD);	// 53785 cld ;~ 1C70:0282
cs=0x1c70;eip=0x000283; 	T(MOV(ax, seg_offset(dseg)));	// 53786 mov     ax, seg dseg ;~ 1C70:0283
cs=0x1c70;eip=0x000286; 	T(MOV(ds, ax));	// 53787 mov     ds, ax ;~ 1C70:0286
cs=0x1c70;eip=0x000288; 	T(MOV(es, ax));	// 53788 mov     es, ax ;~ 1C70:0288
cs=0x1c70;eip=0x00028a; 	T(SUB(ax, ax));	// 53790 sub     ax, ax ;~ 1C70:028A
cs=0x1c70;eip=0x00028c; 	T(MOV(cx, 0x162));	// 53791 mov     cx, 162h ;~ 1C70:028C
cs=0x1c70;eip=0x00028f; 	T(MOV(di, 0x0C638));	// 53792 mov     di, 0C638h ;~ 1C70:028F
	// 53793 rep stosb ;~ 1C70:0292
cs=0x1c70;eip=0x000292; 	X(	REP STOSB);	// 53793 rep stosb ;~ 1C70:0292
cs=0x1c70;eip=0x000294; 	T(MOV(cx, 0x0A0));	// 53794 mov     cx, 0A0h ; ' ' ;~ 1C70:0294
cs=0x1c70;eip=0x000297; 	T(MOV(si, 0x0C79A));	// 53795 mov     si, 0C79Ah ;~ 1C70:0297
cs=0x1c70;eip=0x00029a; 	T(MOV(di, 0x0C6B8));	// 53796 mov     di, 0C6B8h ;~ 1C70:029A
	// 53797 rep movsb ;~ 1C70:029D
cs=0x1c70;eip=0x00029d; 	X(	REP MOVSB);	// 53797 rep movsb ;~ 1C70:029D
cs=0x1c70;eip=0x00029f; 	X(POP(si));	// 53798 pop     si ;~ 1C70:029F
cs=0x1c70;eip=0x0002a0; 	X(POP(di));	// 53799 pop     di ;~ 1C70:02A0
cs=0x1c70;eip=0x0002a1; 	X(POP(ds));	// 53800 pop     ds ;~ 1C70:02A1
cs=0x1c70;eip=0x0002a2; 	X(POP(es));	// 53801 pop     es ;~ 1C70:02A2
cs=0x1c70;eip=0x0002a3; 	X(POP(cx));	// 53803 pop     cx ;~ 1C70:02A3
cs=0x1c70;eip=0x0002a4; 	R(RETN(0));	// 53804 retn ;~ 1C70:02A4
sub_2af85:
	// 53811 
cs=0x1c70;eip=0x0002a5; 	T(MOV(al, *(raddr(ds,bx-0x36FF))));	// 53813 mov     al, [bx-36FFh] ;~ 1C70:02A5
ret_1c70_2a9:
	// 8289 
cs=0x1c70;eip=0x0002a9; 	X(MOV(byte_38423, al));	// 53814 mov     byte_38423, al ;~ 1C70:02A9
cs=0x1c70;eip=0x0002ac; 	T(SHL(bx, 1));	// 53815 shl     bx, 1 ;~ 1C70:02AC
cs=0x1c70;eip=0x0002ae; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x36D2))));	// 53816 mov     ax, [bx-36D2h] ;~ 1C70:02AE
cs=0x1c70;eip=0x0002b2; 	X(MOV(off_38746, ax));	// 53817 mov     off_38746, ax ;~ 1C70:02B2
cs=0x1c70;eip=0x0002b5; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x36C8))));	// 53818 mov     ax, [bx-36C8h] ;~ 1C70:02B5
cs=0x1c70;eip=0x0002b9; 	X(MOV(off_38748, ax));	// 53819 mov     off_38748, ax ;~ 1C70:02B9
cs=0x1c70;eip=0x0002bc; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x36BE))));	// 53820 mov     ax, [bx-36BEh] ;~ 1C70:02BC
cs=0x1c70;eip=0x0002c0; 	X(MOV(off_3874a, ax));	// 53821 mov     off_3874A, ax ;~ 1C70:02C0
cs=0x1c70;eip=0x0002c3; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x36B4))));	// 53822 mov     ax, [bx-36B4h] ;~ 1C70:02C3
cs=0x1c70;eip=0x0002c7; 	X(MOV(off_3874c, ax));	// 53823 mov     off_3874C, ax ;~ 1C70:02C7
cs=0x1c70;eip=0x0002ca; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x36AA))));	// 53824 mov     ax, [bx-36AAh] ;~ 1C70:02CA
cs=0x1c70;eip=0x0002ce; 	X(MOV(off_3874e, ax));	// 53825 mov     off_3874E, ax ;~ 1C70:02CE
cs=0x1c70;eip=0x0002d1; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x36E6))));	// 53826 mov     ax, [bx-36E6h] ;~ 1C70:02D1
cs=0x1c70;eip=0x0002d5; 	X(MOV(word_38756, ax));	// 53827 mov     word_38756, ax ;~ 1C70:02D5
cs=0x1c70;eip=0x0002d8; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x36DC))));	// 53828 mov     ax, [bx-36DCh] ;~ 1C70:02D8
cs=0x1c70;eip=0x0002dc; 	X(MOV(word_38758, ax));	// 53829 mov     word_38758, ax ;~ 1C70:02DC
cs=0x1c70;eip=0x0002df; 	T(CMP(byte_38423, 4));	// 53830 cmp     byte_38423, 4 ;~ 1C70:02DF
cs=0x1c70;eip=0x0002e4; 	R(JNZ(locret_2afd9));	// 53831 jnz     short locret_2AFD9 ;~ 1C70:02E4
cs=0x1c70;eip=0x0002e6; 	T(MOV(ch, 0x26));	// 53832 mov     ch, 26h ; '&' ;~ 1C70:02E6
cs=0x1c70;eip=0x0002e8; 	T(MOV(bx, 9));	// 53833 mov     bx, 9 ;~ 1C70:02E8
cs=0x1c70;eip=0x0002eb; 	T(MOV(si, bx));	// 53834 mov     si, bx ;~ 1C70:02EB
cs=0x1c70;eip=0x0002ed; 	T(SHL(si, 1));	// 53835 shl     si, 1 ;~ 1C70:02ED
cs=0x1c70;eip=0x0002ef; 	T(MOV(dl, 0));	// 53836 mov     dl, 0 ;~ 1C70:02EF
cs=0x1c70;eip=0x0002f1; 	R(CALL(sub_2b4bf,0));	// 53837 call    sub_2B4BF ;~ 1C70:02F1
cs=0x1c70;eip=0x0002f4; 	T(MOV(ch, 0x26));	// 53838 mov     ch, 26h ; '&' ;~ 1C70:02F4
cs=0x1c70;eip=0x0002f6; 	R(CALL(sub_2b5a1,0));	// 53839 call    sub_2B5A1 ;~ 1C70:02F6
locret_2afd9:
	// 8290 
cs=0x1c70;eip=0x0002f9; 	R(RETN(0));	// 53842 retn ;~ 1C70:02F9
sub_2afda:
	// 53849 
cs=0x1c70;eip=0x0002fa; 	X(PUSH(bx));	// 53851 push    bx ;~ 1C70:02FA
ret_1c70_2fb:
	// 8291 
cs=0x1c70;eip=0x0002fb; 	X(PUSH(cx));	// 53852 push    cx ;~ 1C70:02FB
cs=0x1c70;eip=0x0002fc; 	X(PUSH(dx));	// 53853 push    dx ;~ 1C70:02FC
cs=0x1c70;eip=0x0002fd; 	X(PUSH(ds));	// 53854 push    ds ;~ 1C70:02FD
cs=0x1c70;eip=0x0002fe; 	X(MOV(word_387d0, 0));	// 53855 mov     word_387D0, 0 ;~ 1C70:02FE
cs=0x1c70;eip=0x000304; 	T(MOV(ax, *(dw*)(((db*)&dword_387aa))));	// 53856 mov     ax, word ptr dword_387AA ;~ 1C70:0304
cs=0x1c70;eip=0x000307; 	T(OR(ax, *(dw*)(((db*)&dword_387aa)+2)));	// 53857 or      ax, word ptr dword_387AA+2 ;~ 1C70:0307
cs=0x1c70;eip=0x00030b; 	R(JZ(loc_2affd));	// 53858 jz      short loc_2AFFD ;~ 1C70:030B
cs=0x1c70;eip=0x00030d; 	X(PUSH(*(dw*)(((db*)&dword_387aa)+2)));	// 53859 push    word ptr dword_387AA+2 ;~ 1C70:030D
cs=0x1c70;eip=0x000311; 	X(PUSH(*(dw*)(((db*)&dword_387aa))));	// 53860 push    word ptr dword_387AA ;~ 1C70:0311
cs=0x1c70;eip=0x000315; 	R(CALLF(sub_2bd7c,0));	// 53861 call    sub_2BD7C ;~ 1C70:0315
cs=0x1c70;eip=0x00031a; 	T(ADD(sp, 4));	// 53862 add     sp, 4 ;~ 1C70:031A
loc_2affd:
	// 8292 
cs=0x1c70;eip=0x00031d; 	T(MOV(ax, 0x3D00));	// 53865 mov     ax, 3D00h ;~ 1C70:031D
cs=0x1c70;eip=0x000320; 	T(MOV(dx, 0x0C960));	// 53866 mov     dx, 0C960h ;~ 1C70:0320
cs=0x1c70;eip=0x000323; 	R(_INT(0x21));	// 53867 int     21h             ; DOS - 2+ - OPEN DISK FILE WITH HANDLE ;~ 1C70:0323
cs=0x1c70;eip=0x000325; 	R(JNC(loc_2b00a));	// 53871 jnb     short loc_2B00A ;~ 1C70:0325
cs=0x1c70;eip=0x000327; 	R(JMP(loc_2b092));	// 53872 jmp     loc_2B092 ;~ 1C70:0327
loc_2b00a:
	// 8293 
cs=0x1c70;eip=0x00032a; 	X(MOV(word_387ae, ax));	// 53876 mov     word_387AE, ax ;~ 1C70:032A
loc_2b00d:
	// 8294 
cs=0x1c70;eip=0x00032d; 	T(MOV(ah, 0x3F));	// 53879 mov     ah, 3Fh ; '?' ;~ 1C70:032D
cs=0x1c70;eip=0x00032f; 	T(MOV(bx, word_387ae));	// 53880 mov     bx, word_387AE ;~ 1C70:032F
cs=0x1c70;eip=0x000333; 	T(MOV(cx, 2));	// 53881 mov     cx, 2 ;~ 1C70:0333
cs=0x1c70;eip=0x000336; 	T(MOV(dx, 0x0C970));	// 53882 mov     dx, 0C970h ;~ 1C70:0336
cs=0x1c70;eip=0x000339; 	R(_INT(0x21));	// 53883 int     21h             ; DOS - 2+ - READ FROM FILE WITH HANDLE ;~ 1C70:0339
cs=0x1c70;eip=0x00033b; 	R(JC(loc_2b08e));	// 53886 jb      short loc_2B08E ;~ 1C70:033B
cs=0x1c70;eip=0x00033d; 	T(OR(si, si));	// 53887 or      si, si ;~ 1C70:033D
cs=0x1c70;eip=0x00033f; 	R(JZ(loc_2b035));	// 53888 jz      short loc_2B035 ;~ 1C70:033F
cs=0x1c70;eip=0x000341; 	T(MOV(ax, 0x4201));	// 53889 mov     ax, 4201h ;~ 1C70:0341
cs=0x1c70;eip=0x000344; 	T(SUB(cx, cx));	// 53890 sub     cx, cx ;~ 1C70:0344
cs=0x1c70;eip=0x000346; 	T(MOV(dx, word_387b0));	// 53891 mov     dx, word_387B0 ;~ 1C70:0346
cs=0x1c70;eip=0x00034a; 	T(OR(dx, dx));	// 53892 or      dx, dx ;~ 1C70:034A
cs=0x1c70;eip=0x00034c; 	R(JZ(loc_2b08e));	// 53893 jz      short loc_2B08E ;~ 1C70:034C
cs=0x1c70;eip=0x00034e; 	R(_INT(0x21));	// 53894 int     21h             ; DOS - 2+ - MOVE FILE READ/WRITE POINTER (LSEEK) ;~ 1C70:034E
cs=0x1c70;eip=0x000350; 	R(JC(loc_2b08e));	// 53896 jb      short loc_2B08E ;~ 1C70:0350
cs=0x1c70;eip=0x000352; 	T(DEC(si));	// 53897 dec     si ;~ 1C70:0352
cs=0x1c70;eip=0x000353; 	R(JMP(loc_2b00d));	// 53898 jmp     short loc_2B00D ;~ 1C70:0353
loc_2b035:
	// 8295 
cs=0x1c70;eip=0x000355; 	T(MOV(cx, 1));	// 53902 mov     cx, 1 ;~ 1C70:0355
cs=0x1c70;eip=0x000358; 	T(MOV(dx, 0x0C972));	// 53903 mov     dx, 0C972h ;~ 1C70:0358
loc_2b03b:
	// 8296 
cs=0x1c70;eip=0x00035b; 	T(MOV(ah, 0x3F));	// 53906 mov     ah, 3Fh ;~ 1C70:035B
cs=0x1c70;eip=0x00035d; 	R(_INT(0x21));	// 53907 int     21h             ; DOS - 2+ - READ FROM FILE WITH HANDLE ;~ 1C70:035D
cs=0x1c70;eip=0x00035f; 	R(JC(loc_2b08e));	// 53910 jb      short loc_2B08E ;~ 1C70:035F
cs=0x1c70;eip=0x000361; 	T(CMP(word_387b2, 0));	// 53911 cmp     word_387B2, 0 ;~ 1C70:0361
cs=0x1c70;eip=0x000366; 	R(JNZ(loc_2b03b));	// 53912 jnz     short loc_2B03B ;~ 1C70:0366
cs=0x1c70;eip=0x000368; 	T(MOV(ah, 0x3F));	// 53913 mov     ah, 3Fh ; '?' ;~ 1C70:0368
cs=0x1c70;eip=0x00036a; 	T(MOV(cx, 0x162));	// 53914 mov     cx, 162h ;~ 1C70:036A
cs=0x1c70;eip=0x00036d; 	T(MOV(dx, 0x0C638));	// 53915 mov     dx, 0C638h ;~ 1C70:036D
cs=0x1c70;eip=0x000370; 	R(_INT(0x21));	// 53916 int     21h             ; DOS - 2+ - READ FROM FILE WITH HANDLE ;~ 1C70:0370
cs=0x1c70;eip=0x000372; 	R(JC(loc_2b08e));	// 53919 jb      short loc_2B08E ;~ 1C70:0372
cs=0x1c70;eip=0x000374; 	T(MOV(al, byte_385d8));	// 53920 mov     al, byte_385D8 ;~ 1C70:0374
cs=0x1c70;eip=0x000377; 	X(IMUL1_1(byte_385d9));	// 53921 imul    byte_385D9 ;~ 1C70:0377
cs=0x1c70;eip=0x00037b; 	X(MOV(word_387b0, ax));	// 53922 mov     word_387B0, ax ;~ 1C70:037B
cs=0x1c70;eip=0x00037e; 	T(OR(ax, ax));	// 53923 or      ax, ax ;~ 1C70:037E
cs=0x1c70;eip=0x000380; 	R(JZ(loc_2b088));	// 53924 jz      short loc_2B088 ;~ 1C70:0380
cs=0x1c70;eip=0x000382; 	T(MOV(bx, ax));	// 53925 mov     bx, ax ;~ 1C70:0382
cs=0x1c70;eip=0x000384; 	T(SHR(bx, 1));	// 53926 shr     bx, 1 ;~ 1C70:0384
cs=0x1c70;eip=0x000386; 	T(SHR(bx, 1));	// 53927 shr     bx, 1 ;~ 1C70:0386
cs=0x1c70;eip=0x000388; 	T(SHR(bx, 1));	// 53928 shr     bx, 1 ;~ 1C70:0388
cs=0x1c70;eip=0x00038a; 	T(SHR(bx, 1));	// 53929 shr     bx, 1 ;~ 1C70:038A
cs=0x1c70;eip=0x00038c; 	T(INC(bx));	// 53930 inc     bx ;~ 1C70:038C
cs=0x1c70;eip=0x00038d; 	T(MOV(ah, 0x48));	// 53931 mov     ah, 48h ;~ 1C70:038D
cs=0x1c70;eip=0x00038f; 	R(_INT(0x21));	// 53932 int     21h             ; DOS - 2+ - ALLOCATE MEMORY ;~ 1C70:038F
cs=0x1c70;eip=0x000391; 	X(MOV(*(dw*)(((db*)&dword_387aa)+2), ax));	// 53934 mov     word ptr dword_387AA+2, ax ;~ 1C70:0391
cs=0x1c70;eip=0x000394; 	R(JC(loc_2b08e));	// 53935 jb      short loc_2B08E ;~ 1C70:0394
cs=0x1c70;eip=0x000396; 	T(MOV(bx, word_387ae));	// 53936 mov     bx, word_387AE ;~ 1C70:0396
cs=0x1c70;eip=0x00039a; 	T(MOV(cx, word_387b0));	// 53937 mov     cx, word_387B0 ;~ 1C70:039A
cs=0x1c70;eip=0x00039e; 	T(MOV(ds, ax));	// 53938 mov     ds, ax ;~ 1C70:039E
cs=0x1c70;eip=0x0003a0; 	T(MOV(ah, 0x3F));	// 53939 mov     ah, 3Fh ; '?' ;~ 1C70:03A0
cs=0x1c70;eip=0x0003a2; 	T(SUB(dx, dx));	// 53940 sub     dx, dx ;~ 1C70:03A2
cs=0x1c70;eip=0x0003a4; 	R(_INT(0x21));	// 53941 int     21h             ; DOS - 2+ - READ FROM FILE WITH HANDLE ;~ 1C70:03A4
cs=0x1c70;eip=0x0003a6; 	R(JC(loc_2b08e));	// 53944 jb      short loc_2B08E ;~ 1C70:03A6
loc_2b088:
	// 8297 
cs=0x1c70;eip=0x0003a8; 	X(MOV(*(dw*)(raddr(ds,0x0C990)), 1));	// 53947 mov     word ptr ds:0C990h, 1 ;~ 1C70:03A8
loc_2b08e:
	// 8298 
cs=0x1c70;eip=0x0003ae; 	T(MOV(ah, 0x3E));	// 53951 mov     ah, 3Eh ;~ 1C70:03AE
cs=0x1c70;eip=0x0003b0; 	R(_INT(0x21));	// 53952 int     21h             ; DOS - 2+ - CLOSE A FILE WITH HANDLE ;~ 1C70:03B0
loc_2b092:
	// 8299 
cs=0x1c70;eip=0x0003b2; 	T(MOV(ax, *(dw*)(raddr(ds,0x0C990))));	// 53956 mov     ax, ds:0C990h ;~ 1C70:03B2
cs=0x1c70;eip=0x0003b5; 	X(POP(ds));	// 53957 pop     ds ;~ 1C70:03B5
cs=0x1c70;eip=0x0003b6; 	X(POP(dx));	// 53958 pop     dx ;~ 1C70:03B6
cs=0x1c70;eip=0x0003b7; 	X(POP(cx));	// 53959 pop     cx ;~ 1C70:03B7
cs=0x1c70;eip=0x0003b8; 	X(POP(bx));	// 53960 pop     bx ;~ 1C70:03B8
cs=0x1c70;eip=0x0003b9; 	R(RETN(0));	// 53961 retn ;~ 1C70:03B9
nullsub_3:
	// 53986 
cs=0x1c70;eip=0x0003d5; 	R(RETN(0));	// 53988 retn ;~ 1C70:03D5
sub_2b0b6:
	// 53995 
cs=0x1c70;eip=0x0003d6; 	X(PUSH(ax));	// 53996 push    ax ;~ 1C70:03D6
ret_1c70_3d7:
	// 8301 
cs=0x1c70;eip=0x0003d7; 	X(PUSH(bx));	// 53997 push    bx ;~ 1C70:03D7
cs=0x1c70;eip=0x0003d8; 	X(PUSH(cx));	// 53998 push    cx ;~ 1C70:03D8
cs=0x1c70;eip=0x0003d9; 	X(PUSH(dx));	// 53999 push    dx ;~ 1C70:03D9
cs=0x1c70;eip=0x0003da; 	X(PUSH(ds));	// 54000 push    ds ;~ 1C70:03DA
cs=0x1c70;eip=0x0003db; 	X(PUSH(es));	// 54001 push    es ;~ 1C70:03DB
cs=0x1c70;eip=0x0003dc; 	X(PUSH(si));	// 54002 push    si ;~ 1C70:03DC
cs=0x1c70;eip=0x0003dd; 	X(PUSH(di));	// 54003 push    di ;~ 1C70:03DD
cs=0x1c70;eip=0x0003de; 	T(CLD);	// 54004 cld ;~ 1C70:03DE
cs=0x1c70;eip=0x0003df; 	T(MOV(ax, seg_offset(dseg)));	// 54005 mov     ax, seg dseg ;~ 1C70:03DF
cs=0x1c70;eip=0x0003e2; 	T(MOV(ds, ax));	// 54006 mov     ds, ax ;~ 1C70:03E2
cs=0x1c70;eip=0x0003e4; 	T(MOV(cx, 0x10));	// 54007 mov     cx, 10h ;~ 1C70:03E4
cs=0x1c70;eip=0x0003e7; 	T(SUB(al, al));	// 54008 sub     al, al ;~ 1C70:03E7
loc_2b0c9:
	// 8302 
cs=0x1c70;eip=0x0003e9; 	T(MOV(bx, cx));	// 54011 mov     bx, cx ;~ 1C70:03E9
cs=0x1c70;eip=0x0003eb; 	X(MOV(*(raddr(ds,bx-0x3724)), al));	// 54012 mov     [bx-3724h], al ;~ 1C70:03EB
cs=0x1c70;eip=0x0003ef; 	R(LOOP(loc_2b0c9));	// 54013 loop    loc_2B0C9 ;~ 1C70:03EF
cs=0x1c70;eip=0x0003f1; 	R(CALL(__dispatch_call,off_38752));	// 54014 call    off_38752 ;~ 1C70:03F1
cs=0x1c70;eip=0x0003f5; 	R(CALL(__dispatch_call,off_38750));	// 54015 call    off_38750 ;~ 1C70:03F5
cs=0x1c70;eip=0x0003f9; 	T(TEST(byte_38420, 1));	// 54016 test    byte_38420, 1 ;~ 1C70:03F9
cs=0x1c70;eip=0x0003fe; 	R(JNZ(loc_2b0e3));	// 54017 jnz     short loc_2B0E3 ;~ 1C70:03FE
cs=0x1c70;eip=0x000400; 	R(JMP(loc_2b164));	// 54018 jmp     loc_2B164 ;~ 1C70:0400
loc_2b0e3:
	// 8303 
cs=0x1c70;eip=0x000403; 	T(TEST(byte_38421, 1));	// 54022 test    byte_38421, 1 ;~ 1C70:0403
cs=0x1c70;eip=0x000408; 	R(JZ(loc_2b164));	// 54023 jz      short loc_2B164 ;~ 1C70:0408
cs=0x1c70;eip=0x00040a; 	T(SUB(bx, bx));	// 54024 sub     bx, bx ;~ 1C70:040A
cs=0x1c70;eip=0x00040c; 	R(CALL(sub_2b16d,0));	// 54025 call    sub_2B16D ;~ 1C70:040C
cs=0x1c70;eip=0x00040f; 	X(DEC(word_3867b));	// 54026 dec     word_3867B ;~ 1C70:040F
cs=0x1c70;eip=0x000413; 	R(JS(loc_2b0f7));	// 54027 js      short loc_2B0F7 ;~ 1C70:0413
cs=0x1c70;eip=0x000415; 	R(JNZ(loc_2b164));	// 54028 jnz     short loc_2B164 ;~ 1C70:0415
loc_2b0f7:
	// 8304 
cs=0x1c70;eip=0x000417; 	T(LES(di, dword_3867d));	// 54031 les     di, dword_3867D ;~ 1C70:0417
loc_2b0fb:
	// 8305 
cs=0x1c70;eip=0x00041b; 	T(MOV(cx, *(dw*)(raddr(es,di))));	// 54034 mov     cx, es:[di] ;~ 1C70:041B
cs=0x1c70;eip=0x00041e; 	T(MOV(dx, *(dw*)(raddr(es,di+2))));	// 54035 mov     dx, es:[di+2] ;~ 1C70:041E
cs=0x1c70;eip=0x000422; 	T(MOV(al, cl));	// 54036 mov     al, cl ;~ 1C70:0422
cs=0x1c70;eip=0x000424; 	X(MOV(byte_38681, cl));	// 54037 mov     byte_38681, cl ;~ 1C70:0424
cs=0x1c70;eip=0x000428; 	T(AND(cl, 0x0F));	// 54038 and     cl, 0Fh ;~ 1C70:0428
cs=0x1c70;eip=0x00042b; 	T(MOV(bl, cl));	// 54039 mov     bl, cl ;~ 1C70:042B
cs=0x1c70;eip=0x00042d; 	T(MOV(bl, *(raddr(ds,bx-0x38B8))));	// 54040 mov     bl, [bx-38B8h] ;~ 1C70:042D
cs=0x1c70;eip=0x000431; 	X(MOV(word_3873d, bx));	// 54041 mov     word_3873D, bx ;~ 1C70:0431
cs=0x1c70;eip=0x000435; 	T(AND(ax, 0x70));	// 54042 and     ax, 70h ;~ 1C70:0435
cs=0x1c70;eip=0x000438; 	T(MOV(cl, 4));	// 54043 mov     cl, 4 ;~ 1C70:0438
cs=0x1c70;eip=0x00043a; 	T(SHR(al, cl));	// 54044 shr     al, cl ;~ 1C70:043A
cs=0x1c70;eip=0x00043c; 	T(MOV(si, ax));	// 54045 mov     si, ax ;~ 1C70:043C
cs=0x1c70;eip=0x00043e; 	T(MOV(al, *(raddr(ds,si-0x367B))));	// 54046 mov     al, [si-367Bh] ;~ 1C70:043E
cs=0x1c70;eip=0x000442; 	T(SUB(ah, ah));	// 54047 sub     ah, ah ;~ 1C70:0442
cs=0x1c70;eip=0x000444; 	T(ADD(di, ax));	// 54048 add     di, ax ;~ 1C70:0444
cs=0x1c70;eip=0x000446; 	T(SHL(si, 1));	// 54049 shl     si, 1 ;~ 1C70:0446
cs=0x1c70;eip=0x000448; 	X(PUSH(dx));	// 54050 push    dx ;~ 1C70:0448
cs=0x1c70;eip=0x000449; 	T(MOV(dx, *(dw*)(raddr(ds,si-0x368B))));	// 54051 mov     dx, [si-368Bh] ;~ 1C70:0449
cs=0x1c70;eip=0x00044d; 	T(MOV(si, bx));	// 54052 mov     si, bx ;~ 1C70:044D
cs=0x1c70;eip=0x00044f; 	T(SHL(si, 1));	// 54053 shl     si, 1 ;~ 1C70:044F
cs=0x1c70;eip=0x000451; 	X(MOV(word_387ce, dx));	// 54054 mov     word_387CE, dx ;~ 1C70:0451
cs=0x1c70;eip=0x000455; 	X(POP(dx));	// 54055 pop     dx ;~ 1C70:0455
cs=0x1c70;eip=0x000456; 	R(CALL(__dispatch_call,word_387ce));	// 54056 call    word_387CE ;~ 1C70:0456
cs=0x1c70;eip=0x00045a; 	T(TEST(byte_38682, 1));	// 54057 test    byte_38682, 1 ;~ 1C70:045A
cs=0x1c70;eip=0x00045f; 	R(JNZ(loc_2b160));	// 54058 jnz     short loc_2B160 ;~ 1C70:045F
cs=0x1c70;eip=0x000461; 	T(TEST(byte_38681, 0x80));	// 54059 test    byte_38681, 80h ;~ 1C70:0461
cs=0x1c70;eip=0x000466; 	R(JZ(loc_2b0fb));	// 54060 jz      short loc_2B0FB ;~ 1C70:0466
cs=0x1c70;eip=0x000468; 	T(MOV(al, *(raddr(es,di))));	// 54061 mov     al, es:[di] ;~ 1C70:0468
cs=0x1c70;eip=0x00046b; 	T(INC(di));	// 54062 inc     di ;~ 1C70:046B
cs=0x1c70;eip=0x00046c; 	T(CBW);	// 54063 cbw ;~ 1C70:046C
cs=0x1c70;eip=0x00046d; 	T(OR(al, al));	// 54064 or      al, al ;~ 1C70:046D
cs=0x1c70;eip=0x00046f; 	R(JNS(loc_2b15d));	// 54065 jns     short loc_2B15D ;~ 1C70:046F
cs=0x1c70;eip=0x000471; 	T(AND(al, 0x7F));	// 54066 and     al, 7Fh ;~ 1C70:0471
cs=0x1c70;eip=0x000473; 	T(MOV(ah, *(raddr(es,di))));	// 54067 mov     ah, es:[di] ;~ 1C70:0473
cs=0x1c70;eip=0x000476; 	T(INC(di));	// 54068 inc     di ;~ 1C70:0476
cs=0x1c70;eip=0x000477; 	T(SHL(al, 1));	// 54069 shl     al, 1 ;~ 1C70:0477
cs=0x1c70;eip=0x000479; 	T(SHR(ah, 1));	// 54070 shr     ah, 1 ;~ 1C70:0479
cs=0x1c70;eip=0x00047b; 	T(RCR(al, 1));	// 54071 rcr     al, 1 ;~ 1C70:047B
loc_2b15d:
	// 8306 
cs=0x1c70;eip=0x00047d; 	X(MOV(word_3867b, ax));	// 54074 mov     word_3867B, ax ;~ 1C70:047D
loc_2b160:
	// 8307 
cs=0x1c70;eip=0x000480; 	X(MOV(*(dw*)(((db*)&dword_3867d)), di));	// 54077 mov     word ptr dword_3867D, di ;~ 1C70:0480
loc_2b164:
	// 8308 
cs=0x1c70;eip=0x000484; 	X(POP(di));	// 54081 pop     di ;~ 1C70:0484
cs=0x1c70;eip=0x000485; 	X(POP(si));	// 54082 pop     si ;~ 1C70:0485
cs=0x1c70;eip=0x000486; 	X(POP(es));	// 54083 pop     es ;~ 1C70:0486
cs=0x1c70;eip=0x000487; 	X(POP(ds));	// 54084 pop     ds ;~ 1C70:0487
cs=0x1c70;eip=0x000488; 	X(POP(dx));	// 54085 pop     dx ;~ 1C70:0488
cs=0x1c70;eip=0x000489; 	X(POP(cx));	// 54086 pop     cx ;~ 1C70:0489
cs=0x1c70;eip=0x00048a; 	X(POP(bx));	// 54087 pop     bx ;~ 1C70:048A
cs=0x1c70;eip=0x00048b; 	X(POP(ax));	// 54088 pop     ax ;~ 1C70:048B
cs=0x1c70;eip=0x00048c; 	R(RETF(0));	// 54089 retf ;~ 1C70:048C
sub_2b16d:
	// 54096 
cs=0x1c70;eip=0x00048d; 	T(MOV(al, byte_38422));	// 54097 mov     al, byte_38422 ;~ 1C70:048D
ret_1c70_490:
	// 8309 
cs=0x1c70;eip=0x000490; 	T(AND(al, 0x0EF));	// 54098 and     al, 0EFh ;~ 1C70:0490
cs=0x1c70;eip=0x000492; 	T(OR(al, al));	// 54099 or      al, al ;~ 1C70:0492
cs=0x1c70;eip=0x000494; 	R(JZ(locret_2b1bd));	// 54100 jz      short locret_2B1BD ;~ 1C70:0494
cs=0x1c70;eip=0x000496; 	X(DEC(byte_386ab));	// 54101 dec     byte_386AB ;~ 1C70:0496
cs=0x1c70;eip=0x00049a; 	R(JNS(locret_2b1bd));	// 54102 jns     short locret_2B1BD ;~ 1C70:049A
cs=0x1c70;eip=0x00049c; 	T(MOV(ah, al));	// 54103 mov     ah, al ;~ 1C70:049C
cs=0x1c70;eip=0x00049e; 	T(AND(al, 0x0F));	// 54104 and     al, 0Fh ;~ 1C70:049E
cs=0x1c70;eip=0x0004a0; 	X(MOV(byte_386ab, al));	// 54105 mov     byte_386AB, al ;~ 1C70:04A0
cs=0x1c70;eip=0x0004a3; 	T(TEST(ah, 0x80));	// 54106 test    ah, 80h ;~ 1C70:04A3
cs=0x1c70;eip=0x0004a6; 	R(JNZ(locret_2b1bd));	// 54107 jnz     short locret_2B1BD ;~ 1C70:04A6
cs=0x1c70;eip=0x0004a8; 	T(TEST(al, 0x20));	// 54108 test    al, 20h ;~ 1C70:04A8
cs=0x1c70;eip=0x0004aa; 	R(JNZ(loc_2b1a8));	// 54109 jnz     short loc_2B1A8 ;~ 1C70:04AA
cs=0x1c70;eip=0x0004ac; 	X(SUB(byte_3841e, 1));	// 54110 sub     byte_3841E, 1 ;~ 1C70:04AC
cs=0x1c70;eip=0x0004b1; 	T(CMP(byte_3841e, 0x81));	// 54111 cmp     byte_3841E, 81h ; '' ;~ 1C70:04B1
cs=0x1c70;eip=0x0004b6; 	R(JNZ(locret_2b1bd));	// 54112 jnz     short locret_2B1BD ;~ 1C70:04B6
cs=0x1c70;eip=0x0004b8; 	X(MOV(byte_38422, 0));	// 54113 mov     byte_38422, 0 ;~ 1C70:04B8
cs=0x1c70;eip=0x0004bd; 	X(MOV(byte_38682, 1));	// 54114 mov     byte_38682, 1 ;~ 1C70:04BD
cs=0x1c70;eip=0x0004c2; 	R(CALL(sub_2ace6,0));	// 54115 call    sub_2ACE6 ;~ 1C70:04C2
cs=0x1c70;eip=0x0004c5; 	R(JMP(locret_2b1bd));	// 54116 jmp     short locret_2B1BD ;~ 1C70:04C5
loc_2b1a8:
	// 8310 
cs=0x1c70;eip=0x0004c8; 	T(MOV(al, byte_3841e));	// 54121 mov     al, byte_3841E ;~ 1C70:04C8
cs=0x1c70;eip=0x0004cb; 	T(INC(al));	// 54122 inc     al ;~ 1C70:04CB
cs=0x1c70;eip=0x0004cd; 	T(CMP(al, byte_386ac));	// 54123 cmp     al, byte_386AC ;~ 1C70:04CD
cs=0x1c70;eip=0x0004d1; 	R(JG(loc_2b1b8));	// 54124 jg      short loc_2B1B8 ;~ 1C70:04D1
cs=0x1c70;eip=0x0004d3; 	X(MOV(byte_3841e, al));	// 54125 mov     byte_3841E, al ;~ 1C70:04D3
cs=0x1c70;eip=0x0004d6; 	R(JMP(locret_2b1bd));	// 54126 jmp     short locret_2B1BD ;~ 1C70:04D6
loc_2b1b8:
	// 8311 
cs=0x1c70;eip=0x0004d8; 	X(AND(byte_38422, 0x0DF));	// 54130 and     byte_38422, 0DFh ;~ 1C70:04D8
locret_2b1bd:
	// 8312 
cs=0x1c70;eip=0x0004dd; 	R(RETN(0));	// 54134 retn ;~ 1C70:04DD
sub_2b2bf:
	// 54287 
cs=0x1c70;eip=0x0005df; 	X(PUSH(bx));	// 54289 push    bx ;~ 1C70:05DF
ret_1c70_5e0:
	// 8337 
cs=0x1c70;eip=0x0005e0; 	X(PUSH(cx));	// 54290 push    cx ;~ 1C70:05E0
cs=0x1c70;eip=0x0005e1; 	X(PUSH(dx));	// 54291 push    dx ;~ 1C70:05E1
cs=0x1c70;eip=0x0005e2; 	T(MOV(al, byte_3873f));	// 54292 mov     al, byte_3873F ;~ 1C70:05E2
cs=0x1c70;eip=0x0005e5; 	T(CMP(al, 1));	// 54293 cmp     al, 1 ;~ 1C70:05E5
cs=0x1c70;eip=0x0005e7; 	R(JA(loc_2b302));	// 54294 ja      short loc_2B302 ;~ 1C70:05E7
cs=0x1c70;eip=0x0005e9; 	T(CMP(dh, *(raddr(ds,bx-0x3733))));	// 54295 cmp     dh, [bx-3733h] ;~ 1C70:05E9
cs=0x1c70;eip=0x0005ed; 	R(JC(loc_2b2ff));	// 54296 jb      short loc_2B2FF ;~ 1C70:05ED
cs=0x1c70;eip=0x0005ef; 	T(MOV(al, 1));	// 54297 mov     al, 1 ;~ 1C70:05EF
cs=0x1c70;eip=0x0005f1; 	T(CMP(*(raddr(ds,bx-0x3753)), al));	// 54298 cmp     [bx-3753h], al ;~ 1C70:05F1
cs=0x1c70;eip=0x0005f5; 	R(JZ(loc_2b2ea));	// 54299 jz      short loc_2B2EA ;~ 1C70:05F5
cs=0x1c70;eip=0x0005f7; 	X(PUSH(bx));	// 54300 push    bx ;~ 1C70:05F7
cs=0x1c70;eip=0x0005f8; 	R(CALLF(sub_2adcc,0));	// 54301 call    sub_2ADCC ;~ 1C70:05F8
cs=0x1c70;eip=0x0005fd; 	T(ADD(sp, 2));	// 54302 add     sp, 2 ;~ 1C70:05FD
cs=0x1c70;eip=0x000600; 	X(MOV(*(raddr(ds,bx-0x3753)), 1));	// 54303 mov     byte ptr [bx-3753h], 1 ;~ 1C70:0600
cs=0x1c70;eip=0x000605; 	X(MOV(*(raddr(ds,bx-0x3733)), 0x40));	// 54304 mov     byte ptr [bx-3733h], 40h ; '@' ;~ 1C70:0605
loc_2b2ea:
	// 8338 
cs=0x1c70;eip=0x00060a; 	T(MOV(al, 0x80));	// 54307 mov     al, 80h ; '€' ;~ 1C70:060A
cs=0x1c70;eip=0x00060c; 	T(CMP(al, byte_38423));	// 54308 cmp     al, byte_38423 ;~ 1C70:060C
cs=0x1c70;eip=0x000610; 	R(JZ(loc_2b302));	// 54309 jz      short loc_2B302 ;~ 1C70:0610
cs=0x1c70;eip=0x000612; 	T(TEST(*(raddr(ds,bx-0x3723)), 0x0FF));	// 54310 test    byte ptr [bx-3723h], 0FFh ;~ 1C70:0612
cs=0x1c70;eip=0x000617; 	R(JZ(loc_2b302));	// 54311 jz      short loc_2B302 ;~ 1C70:0617
cs=0x1c70;eip=0x000619; 	T(CMP(ch, *(raddr(ds,bx-0x3743))));	// 54312 cmp     ch, [bx-3743h] ;~ 1C70:0619
cs=0x1c70;eip=0x00061d; 	R(JA(loc_2b302));	// 54313 ja      short loc_2B302 ;~ 1C70:061D
loc_2b2ff:
	// 8339 
cs=0x1c70;eip=0x00061f; 	T(STC);	// 54316 stc ;~ 1C70:061F
cs=0x1c70;eip=0x000620; 	R(JMP(loc_2b308));	// 54317 jmp     short loc_2B308 ;~ 1C70:0620
loc_2b302:
	// 8340 
cs=0x1c70;eip=0x000622; 	X(MOV(*(raddr(ds,bx-0x3723)), 1));	// 54322 mov     byte ptr [bx-3723h], 1 ;~ 1C70:0622
cs=0x1c70;eip=0x000627; 	T(CLC);	// 54323 clc ;~ 1C70:0627
loc_2b308:
	// 8341 
cs=0x1c70;eip=0x000628; 	X(POP(dx));	// 54326 pop     dx ;~ 1C70:0628
cs=0x1c70;eip=0x000629; 	X(POP(cx));	// 54327 pop     cx ;~ 1C70:0629
cs=0x1c70;eip=0x00062a; 	X(POP(bx));	// 54328 pop     bx ;~ 1C70:062A
cs=0x1c70;eip=0x00062b; 	R(RETN(0));	// 54329 retn ;~ 1C70:062B
sub_2b30c:
	// 54336 
cs=0x1c70;eip=0x00062c; 	T(MOV(ah, 0x0FF));	// 54338 mov     ah, 0FFh ;~ 1C70:062C
ret_1c70_62e:
	// 8342 
cs=0x1c70;eip=0x00062e; 	R(CALL(sub_2b41d,0));	// 54339 call    sub_2B41D ;~ 1C70:062E
cs=0x1c70;eip=0x000631; 	T(MOV(ah, 0x0FF));	// 54340 mov     ah, 0FFh ;~ 1C70:0631
cs=0x1c70;eip=0x000633; 	R(CALL(sub_2b41d,0));	// 54341 call    sub_2B41D ;~ 1C70:0633
cs=0x1c70;eip=0x000636; 	R(RETN(0));	// 54342 retn ;~ 1C70:0636
sub_2b32f:
	// 54361 
cs=0x1c70;eip=0x00064f; 	X(PUSH(bx));	// 54362 push    bx ;~ 1C70:064F
ret_1c70_650:
	// 8344 
cs=0x1c70;eip=0x000650; 	R(CALL(sub_2b2bf,0));	// 54363 call    sub_2B2BF ;~ 1C70:0650
cs=0x1c70;eip=0x000653; 	R(JC(loc_2b381));	// 54364 jb      short loc_2B381 ;~ 1C70:0653
cs=0x1c70;eip=0x000655; 	T(MOV(al, byte_3873f));	// 54365 mov     al, byte_3873F ;~ 1C70:0655
cs=0x1c70;eip=0x000658; 	X(MOV(*(raddr(ds,bx-0x3753)), al));	// 54366 mov     [bx-3753h], al ;~ 1C70:0658
cs=0x1c70;eip=0x00065c; 	X(MOV(*(dw*)(raddr(ds,si-0x3793)), cx));	// 54367 mov     [si-3793h], cx ;~ 1C70:065C
cs=0x1c70;eip=0x000660; 	X(MOV(*(raddr(ds,bx-0x3743)), ch));	// 54368 mov     [bx-3743h], ch ;~ 1C70:0660
cs=0x1c70;eip=0x000664; 	T(CMP(bl, byte_38591));	// 54369 cmp     bl, byte_38591 ;~ 1C70:0664
cs=0x1c70;eip=0x000668; 	R(JNZ(loc_2b355));	// 54370 jnz     short loc_2B355 ;~ 1C70:0668
cs=0x1c70;eip=0x00066a; 	T(SUB(ch, 0x24));	// 54371 sub     ch, 24h ; '$' ;~ 1C70:066A
cs=0x1c70;eip=0x00066d; 	X(PUSH(bx));	// 54372 push    bx ;~ 1C70:066D
cs=0x1c70;eip=0x00066e; 	T(MOV(bl, ch));	// 54373 mov     bl, ch ;~ 1C70:066E
cs=0x1c70;eip=0x000670; 	T(MOV(ch, *(raddr(ds,bx-0x38A8))));	// 54374 mov     ch, [bx-38A8h] ;~ 1C70:0670
cs=0x1c70;eip=0x000674; 	X(POP(bx));	// 54375 pop     bx ;~ 1C70:0674
loc_2b355:
	// 8345 
cs=0x1c70;eip=0x000675; 	T(MOV(ah, 0x0D0));	// 54378 mov     ah, 0D0h ; 'Ğ' ;~ 1C70:0675
cs=0x1c70;eip=0x000677; 	R(CALL(sub_2b41d,0));	// 54379 call    sub_2B41D ;~ 1C70:0677
cs=0x1c70;eip=0x00067a; 	T(MOV(al, bl));	// 54380 mov     al, bl ;~ 1C70:067A
cs=0x1c70;eip=0x00067c; 	T(OR(al, 0x90));	// 54381 or      al, 90h ;~ 1C70:067C
cs=0x1c70;eip=0x00067e; 	R(CALL(sub_2b44d,0));	// 54382 call    sub_2B44D ;~ 1C70:067E
cs=0x1c70;eip=0x000681; 	T(MOV(al, ch));	// 54383 mov     al, ch ;~ 1C70:0681
cs=0x1c70;eip=0x000683; 	R(CALL(sub_2b44d,0));	// 54384 call    sub_2B44D ;~ 1C70:0683
cs=0x1c70;eip=0x000686; 	T(MOV(al, dl));	// 54385 mov     al, dl ;~ 1C70:0686
cs=0x1c70;eip=0x000688; 	R(CALL(sub_2b44d,0));	// 54386 call    sub_2B44D ;~ 1C70:0688
cs=0x1c70;eip=0x00068b; 	T(MOV(ah, 0x0D0));	// 54387 mov     ah, 0D0h ; 'Ğ' ;~ 1C70:068B
cs=0x1c70;eip=0x00068d; 	R(CALL(sub_2b41d,0));	// 54388 call    sub_2B41D ;~ 1C70:068D
cs=0x1c70;eip=0x000690; 	T(MOV(al, 0x0E0));	// 54389 mov     al, 0E0h ; 'à' ;~ 1C70:0690
cs=0x1c70;eip=0x000692; 	T(OR(al, bl));	// 54390 or      al, bl ;~ 1C70:0692
cs=0x1c70;eip=0x000694; 	R(CALL(sub_2b44d,0));	// 54391 call    sub_2B44D ;~ 1C70:0694
cs=0x1c70;eip=0x000697; 	T(SUB(al, al));	// 54392 sub     al, al ;~ 1C70:0697
cs=0x1c70;eip=0x000699; 	R(CALL(sub_2b44d,0));	// 54393 call    sub_2B44D ;~ 1C70:0699
cs=0x1c70;eip=0x00069c; 	T(MOV(al, 0x40));	// 54394 mov     al, 40h ; '@' ;~ 1C70:069C
cs=0x1c70;eip=0x00069e; 	R(CALL(sub_2b44d,0));	// 54395 call    sub_2B44D ;~ 1C70:069E
loc_2b381:
	// 8346 
cs=0x1c70;eip=0x0006a1; 	X(POP(bx));	// 54398 pop     bx ;~ 1C70:06A1
cs=0x1c70;eip=0x0006a2; 	R(RETN(0));	// 54399 retn ;~ 1C70:06A2
sub_2b3e3:
	// 54451 
cs=0x1c70;eip=0x000703; 	X(PUSH(bx));	// 54452 push    bx ;~ 1C70:0703
ret_1c70_704:
	// 8350 
cs=0x1c70;eip=0x000704; 	T(MOV(ah, 0x0D0));	// 54453 mov     ah, 0D0h ; 'Ğ' ;~ 1C70:0704
cs=0x1c70;eip=0x000706; 	R(CALL(sub_2b41d,0));	// 54454 call    sub_2B41D ;~ 1C70:0706
cs=0x1c70;eip=0x000709; 	T(TEST(byte_387cd, 1));	// 54455 test    byte_387CD, 1 ;~ 1C70:0709
cs=0x1c70;eip=0x00070e; 	R(JZ(loc_2b403));	// 54456 jz      short loc_2B403 ;~ 1C70:070E
cs=0x1c70;eip=0x000710; 	T(MOV(al, bl));	// 54457 mov     al, bl ;~ 1C70:0710
cs=0x1c70;eip=0x000712; 	T(OR(al, 0x0B0));	// 54458 or      al, 0B0h ;~ 1C70:0712
cs=0x1c70;eip=0x000714; 	R(CALL(sub_2b44d,0));	// 54459 call    sub_2B44D ;~ 1C70:0714
cs=0x1c70;eip=0x000717; 	T(MOV(al, 0x7B));	// 54460 mov     al, 7Bh ; '{' ;~ 1C70:0717
cs=0x1c70;eip=0x000719; 	R(CALL(sub_2b44d,0));	// 54461 call    sub_2B44D ;~ 1C70:0719
cs=0x1c70;eip=0x00071c; 	T(SUB(al, al));	// 54462 sub     al, al ;~ 1C70:071C
cs=0x1c70;eip=0x00071e; 	R(CALL(sub_2b44d,0));	// 54463 call    sub_2B44D ;~ 1C70:071E
cs=0x1c70;eip=0x000721; 	R(JMP(loc_2b41b));	// 54464 jmp     short loc_2B41B ;~ 1C70:0721
loc_2b403:
	// 8351 
cs=0x1c70;eip=0x000723; 	T(CMP(*(raddr(ds,bx-0x3753)), 1));	// 54468 cmp     byte ptr [bx-3753h], 1 ;~ 1C70:0723
cs=0x1c70;eip=0x000728; 	R(JA(loc_2b41b));	// 54469 ja      short loc_2B41B ;~ 1C70:0728
cs=0x1c70;eip=0x00072a; 	T(MOV(al, bl));	// 54470 mov     al, bl ;~ 1C70:072A
cs=0x1c70;eip=0x00072c; 	T(OR(al, 0x80));	// 54471 or      al, 80h ;~ 1C70:072C
cs=0x1c70;eip=0x00072e; 	R(CALL(sub_2b44d,0));	// 54472 call    sub_2B44D ;~ 1C70:072E
cs=0x1c70;eip=0x000731; 	T(MOV(al, ch));	// 54473 mov     al, ch ;~ 1C70:0731
cs=0x1c70;eip=0x000733; 	R(CALL(sub_2b44d,0));	// 54474 call    sub_2B44D ;~ 1C70:0733
cs=0x1c70;eip=0x000736; 	T(SUB(al, al));	// 54475 sub     al, al ;~ 1C70:0736
cs=0x1c70;eip=0x000738; 	R(CALL(sub_2b44d,0));	// 54476 call    sub_2B44D ;~ 1C70:0738
loc_2b41b:
	// 8352 
cs=0x1c70;eip=0x00073b; 	X(POP(bx));	// 54480 pop     bx ;~ 1C70:073B
cs=0x1c70;eip=0x00073c; 	R(RETN(0));	// 54481 retn ;~ 1C70:073C
sub_2b41d:
	// 54488 
cs=0x1c70;eip=0x00073d; 	X(PUSH(cx));	// 54490 push    cx ;~ 1C70:073D
ret_1c70_73e:
	// 8353 
cs=0x1c70;eip=0x00073e; 	X(PUSH(dx));	// 54491 push    dx ;~ 1C70:073E
cs=0x1c70;eip=0x00073f; 	T(MOV(dx, 0x331));	// 54492 mov     dx, 331h ;~ 1C70:073F
cs=0x1c70;eip=0x000742; 	T(MOV(cx, 0x4E20));	// 54493 mov     cx, 4E20h ;~ 1C70:0742
loc_2b425:
	// 8354 
cs=0x1c70;eip=0x000745; 	R(IN(al, dx));	// 54496 in      al, dx ;~ 1C70:0745
cs=0x1c70;eip=0x000746; 	T(TEST(al, 0x40));	// 54497 test    al, 40h ;~ 1C70:0746
cs=0x1c70;eip=0x000748; 	R(JZ(loc_2b430));	// 54498 jz      short loc_2B430 ;~ 1C70:0748
cs=0x1c70;eip=0x00074a; 	R(LOOP(loc_2b425));	// 54499 loop    loc_2B425 ;~ 1C70:074A
cs=0x1c70;eip=0x00074c; 	T(SUB(ax, ax));	// 54500 sub     ax, ax ;~ 1C70:074C
cs=0x1c70;eip=0x00074e; 	R(JMP(loc_2b44a));	// 54501 jmp     short loc_2B44A ;~ 1C70:074E
loc_2b430:
	// 8355 
cs=0x1c70;eip=0x000750; 	X(PUSHF);	// 54505 pushf ;~ 1C70:0750
cs=0x1c70;eip=0x000751; 	T(CLI);	// 54506 cli ;~ 1C70:0751
cs=0x1c70;eip=0x000752; 	T(MOV(al, ah));	// 54507 mov     al, ah ;~ 1C70:0752
cs=0x1c70;eip=0x000754; 	R(OUT(dx, al));	// 54508 out     dx, al ;~ 1C70:0754
cs=0x1c70;eip=0x000755; 	T(MOV(cx, 0x4E20));	// 54509 mov     cx, 4E20h ;~ 1C70:0755
loc_2b438:
	// 8356 
cs=0x1c70;eip=0x000758; 	R(IN(al, dx));	// 54512 in      al, dx ;~ 1C70:0758
cs=0x1c70;eip=0x000759; 	T(OR(al, al));	// 54513 or      al, al ;~ 1C70:0759
cs=0x1c70;eip=0x00075b; 	R(JNS(loc_2b441));	// 54514 jns     short loc_2B441 ;~ 1C70:075B
cs=0x1c70;eip=0x00075d; 	R(LOOP(loc_2b438));	// 54515 loop    loc_2B438 ;~ 1C70:075D
cs=0x1c70;eip=0x00075f; 	R(JMP(loc_2b447));	// 54516 jmp     short loc_2B447 ;~ 1C70:075F
loc_2b441:
	// 8357 
cs=0x1c70;eip=0x000761; 	T(DEC(dx));	// 54520 dec     dx ;~ 1C70:0761
cs=0x1c70;eip=0x000762; 	R(IN(al, dx));	// 54521 in      al, dx ;~ 1C70:0762
cs=0x1c70;eip=0x000763; 	T(CMP(al, 0x0FE));	// 54522 cmp     al, 0FEh ; 'ş' ;~ 1C70:0763
cs=0x1c70;eip=0x000765; 	R(JZ(loc_2b449));	// 54523 jz      short loc_2B449 ;~ 1C70:0765
loc_2b447:
	// 8358 
cs=0x1c70;eip=0x000767; 	T(SUB(ax, ax));	// 54526 sub     ax, ax ;~ 1C70:0767
loc_2b449:
	// 8359 
cs=0x1c70;eip=0x000769; 	X(POPF);	// 54529 popf ;~ 1C70:0769
loc_2b44a:
	// 8360 
cs=0x1c70;eip=0x00076a; 	X(POP(dx));	// 54532 pop     dx ;~ 1C70:076A
cs=0x1c70;eip=0x00076b; 	X(POP(cx));	// 54533 pop     cx ;~ 1C70:076B
cs=0x1c70;eip=0x00076c; 	R(RETN(0));	// 54534 retn ;~ 1C70:076C
sub_2b44d:
	// 54541 
cs=0x1c70;eip=0x00076d; 	X(PUSH(cx));	// 54543 push    cx ;~ 1C70:076D
ret_1c70_76e:
	// 8361 
cs=0x1c70;eip=0x00076e; 	X(PUSH(dx));	// 54544 push    dx ;~ 1C70:076E
cs=0x1c70;eip=0x00076f; 	T(MOV(ah, al));	// 54545 mov     ah, al ;~ 1C70:076F
cs=0x1c70;eip=0x000771; 	T(MOV(dx, 0x331));	// 54546 mov     dx, 331h ;~ 1C70:0771
cs=0x1c70;eip=0x000774; 	T(MOV(cx, 0x4E20));	// 54547 mov     cx, 4E20h ;~ 1C70:0774
loc_2b457:
	// 8362 
cs=0x1c70;eip=0x000777; 	R(IN(al, dx));	// 54550 in      al, dx ;~ 1C70:0777
cs=0x1c70;eip=0x000778; 	T(TEST(al, 0x40));	// 54551 test    al, 40h ;~ 1C70:0778
cs=0x1c70;eip=0x00077a; 	R(JZ(loc_2b460));	// 54552 jz      short loc_2B460 ;~ 1C70:077A
cs=0x1c70;eip=0x00077c; 	R(LOOP(loc_2b457));	// 54553 loop    loc_2B457 ;~ 1C70:077C
cs=0x1c70;eip=0x00077e; 	R(JMP(loc_2b464));	// 54554 jmp     short loc_2B464 ;~ 1C70:077E
loc_2b460:
	// 8363 
cs=0x1c70;eip=0x000780; 	T(DEC(dx));	// 54558 dec     dx ;~ 1C70:0780
cs=0x1c70;eip=0x000781; 	T(MOV(al, ah));	// 54559 mov     al, ah ;~ 1C70:0781
cs=0x1c70;eip=0x000783; 	R(OUT(dx, al));	// 54560 out     dx, al ;~ 1C70:0783
loc_2b464:
	// 8364 
cs=0x1c70;eip=0x000784; 	X(POP(dx));	// 54563 pop     dx ;~ 1C70:0784
cs=0x1c70;eip=0x000785; 	X(POP(cx));	// 54564 pop     cx ;~ 1C70:0785
cs=0x1c70;eip=0x000786; 	R(RETN(0));	// 54565 retn ;~ 1C70:0786
sub_2b472:
	// 54578 
cs=0x1c70;eip=0x000792; 	X(PUSH(si));	// 54580 push    si ;~ 1C70:0792
ret_1c70_793:
	// 8366 
cs=0x1c70;eip=0x000793; 	X(MOV(byte_387b4, 0));	// 54581 mov     byte_387B4, 0 ;~ 1C70:0793
cs=0x1c70;eip=0x000798; 	T(AND(ax, 0x7F));	// 54582 and     ax, 7Fh ;~ 1C70:0798
cs=0x1c70;eip=0x00079b; 	R(JZ(loc_2b48b));	// 54583 jz      short loc_2B48B ;~ 1C70:079B
cs=0x1c70;eip=0x00079d; 	T(MOV(si, ax));	// 54584 mov     si, ax ;~ 1C70:079D
cs=0x1c70;eip=0x00079f; 	R(CALL(sub_2afda,0));	// 54585 call    sub_2AFDA ;~ 1C70:079F
cs=0x1c70;eip=0x0007a2; 	T(OR(ax, ax));	// 54586 or      ax, ax ;~ 1C70:07A2
cs=0x1c70;eip=0x0007a4; 	R(JZ(loc_2b48b));	// 54587 jz      short loc_2B48B ;~ 1C70:07A4
cs=0x1c70;eip=0x0007a6; 	X(MOV(byte_387b4, 1));	// 54588 mov     byte_387B4, 1 ;~ 1C70:07A6
loc_2b48b:
	// 8367 
cs=0x1c70;eip=0x0007ab; 	X(POP(si));	// 54592 pop     si ;~ 1C70:07AB
cs=0x1c70;eip=0x0007ac; 	R(RETN(0));	// 54593 retn ;~ 1C70:07AC
sub_2b48d:
	// 54600 
cs=0x1c70;eip=0x0007ad; 	X(PUSH(bx));	// 54602 push    bx ;~ 1C70:07AD
ret_1c70_7ae:
	// 8368 
cs=0x1c70;eip=0x0007ae; 	T(MOV(bl, *(raddr(ds,si-0x3627))));	// 54603 mov     bl, [si-3627h] ;~ 1C70:07AE
cs=0x1c70;eip=0x0007b2; 	T(CMP(*(raddr(ds,bx-0x3611)), 1));	// 54604 cmp     byte ptr [bx-3611h], 1 ;~ 1C70:07B2
cs=0x1c70;eip=0x0007b7; 	R(JZ(loc_2b4ab));	// 54605 jz      short loc_2B4AB ;~ 1C70:07B7
cs=0x1c70;eip=0x0007b9; 	T(CMP(bl, 6));	// 54606 cmp     bl, 6 ;~ 1C70:07B9
cs=0x1c70;eip=0x0007bc; 	R(JG(loc_2b4ab));	// 54607 jg      short loc_2B4AB ;~ 1C70:07BC
cs=0x1c70;eip=0x0007be; 	T(TEST(*(raddr(ds,bx-0x35EB)), 0x0FF));	// 54608 test    byte ptr [bx-35EBh], 0FFh ;~ 1C70:07BE
cs=0x1c70;eip=0x0007c3; 	R(JNZ(loc_2b4ab));	// 54609 jnz     short loc_2B4AB ;~ 1C70:07C3
cs=0x1c70;eip=0x0007c5; 	T(MOV(ah, *(raddr(ds,bx-0x35FB))));	// 54610 mov     ah, [bx-35FBh] ;~ 1C70:07C5
cs=0x1c70;eip=0x0007c9; 	R(JMP(loc_2b4b2));	// 54611 jmp     short loc_2B4B2 ;~ 1C70:07C9
loc_2b4ab:
	// 8369 
cs=0x1c70;eip=0x0007cb; 	T(MOV(ah, 0x3F));	// 54616 mov     ah, 3Fh ; '?' ;~ 1C70:07CB
cs=0x1c70;eip=0x0007cd; 	T(SUB(ah, dl));	// 54617 sub     ah, dl ;~ 1C70:07CD
cs=0x1c70;eip=0x0007cf; 	T(AND(ah, 0x3F));	// 54618 and     ah, 3Fh ;~ 1C70:07CF
loc_2b4b2:
	// 8370 
cs=0x1c70;eip=0x0007d2; 	T(MOV(al, *(raddr(ds,bx-0x3639))));	// 54621 mov     al, [bx-3639h] ;~ 1C70:07D2
cs=0x1c70;eip=0x0007d6; 	T(ADD(al, 0x40));	// 54622 add     al, 40h ; '@' ;~ 1C70:07D6
cs=0x1c70;eip=0x0007d8; 	R(CALLF(sub_2bd8e,0));	// 54623 call    sub_2BD8E ;~ 1C70:07D8
cs=0x1c70;eip=0x0007dd; 	X(POP(bx));	// 54624 pop     bx ;~ 1C70:07DD
cs=0x1c70;eip=0x0007de; 	R(RETN(0));	// 54625 retn ;~ 1C70:07DE
sub_2b4bf:
	// 54632 
cs=0x1c70;eip=0x0007df; 	X(PUSH(bx));	// 54633 push    bx ;~ 1C70:07DF
ret_1c70_7e0:
	// 8371 
cs=0x1c70;eip=0x0007e0; 	X(PUSH(cx));	// 54634 push    cx ;~ 1C70:07E0
cs=0x1c70;eip=0x0007e1; 	X(PUSH(si));	// 54635 push    si ;~ 1C70:07E1
cs=0x1c70;eip=0x0007e2; 	T(CMP(bl, 9));	// 54636 cmp     bl, 9 ;~ 1C70:07E2
cs=0x1c70;eip=0x0007e5; 	R(JNZ(loc_2b509));	// 54637 jnz     short loc_2B509 ;~ 1C70:07E5
cs=0x1c70;eip=0x0007e7; 	T(SUB(ch, 0x24));	// 54638 sub     ch, 24h ; '$' ;~ 1C70:07E7
cs=0x1c70;eip=0x0007ea; 	T(MOV(bl, ch));	// 54639 mov     bl, ch ;~ 1C70:07EA
cs=0x1c70;eip=0x0007ec; 	T(MOV(dh, *(raddr(ds,bx-0x35D0))));	// 54640 mov     dh, [bx-35D0h] ;~ 1C70:07EC
cs=0x1c70;eip=0x0007f0; 	T(CMP(dh, 0x0B));	// 54641 cmp     dh, 0Bh ;~ 1C70:07F0
cs=0x1c70;eip=0x0007f3; 	R(JGE(loc_2b549));	// 54642 jge     short loc_2B549 ;~ 1C70:07F3
cs=0x1c70;eip=0x0007f5; 	T(MOV(ch, *(raddr(ds,bx-0x38A8))));	// 54643 mov     ch, [bx-38A8h] ;~ 1C70:07F5
cs=0x1c70;eip=0x0007f9; 	T(MOV(bl, dh));	// 54644 mov     bl, dh ;~ 1C70:07F9
cs=0x1c70;eip=0x0007fb; 	T(MOV(si, bx));	// 54645 mov     si, bx ;~ 1C70:07FB
cs=0x1c70;eip=0x0007fd; 	T(SHL(si, 1));	// 54646 shl     si, 1 ;~ 1C70:07FD
cs=0x1c70;eip=0x0007ff; 	T(SHR(dl, 1));	// 54647 shr     dl, 1 ;~ 1C70:07FF
cs=0x1c70;eip=0x000801; 	R(CALL(sub_2b48d,0));	// 54648 call    sub_2B48D ;~ 1C70:0801
cs=0x1c70;eip=0x000804; 	T(CMP(bl, 7));	// 54649 cmp     bl, 7 ;~ 1C70:0804
cs=0x1c70;eip=0x000807; 	R(JGE(loc_2b4ed));	// 54650 jge     short loc_2B4ED ;~ 1C70:0807
cs=0x1c70;eip=0x000809; 	T(INC(si));	// 54651 inc     si ;~ 1C70:0809
cs=0x1c70;eip=0x00080a; 	R(CALL(sub_2b48d,0));	// 54652 call    sub_2B48D ;~ 1C70:080A
loc_2b4ed:
	// 8372 
cs=0x1c70;eip=0x00080d; 	T(MOV(ah, *(raddr(ds,bx-0x3644))));	// 54655 mov     ah, [bx-3644h] ;~ 1C70:080D
cs=0x1c70;eip=0x000811; 	T(OR(ah, byte_38426));	// 54656 or      ah, byte_38426 ;~ 1C70:0811
cs=0x1c70;eip=0x000815; 	X(MOV(byte_38426, ah));	// 54657 mov     byte_38426, ah ;~ 1C70:0815
cs=0x1c70;eip=0x000819; 	T(MOV(al, 0x0BD));	// 54658 mov     al, 0BDh ; '½' ;~ 1C70:0819
cs=0x1c70;eip=0x00081b; 	R(CALLF(sub_2bd8e,0));	// 54659 call    sub_2BD8E ;~ 1C70:081B
cs=0x1c70;eip=0x000820; 	X(MOV(*(raddr(ds,bx-0x3713)), cl));	// 54660 mov     [bx-3713h], cl ;~ 1C70:0820
cs=0x1c70;eip=0x000824; 	R(CALL(sub_2b564,0));	// 54661 call    sub_2B564 ;~ 1C70:0824
cs=0x1c70;eip=0x000827; 	R(JMP(loc_2b549));	// 54662 jmp     short loc_2B549 ;~ 1C70:0827
loc_2b509:
	// 8373 
cs=0x1c70;eip=0x000829; 	T(CMP(ch, 0x13));	// 54667 cmp     ch, 13h ;~ 1C70:0829
cs=0x1c70;eip=0x00082c; 	R(JGE(loc_2b513));	// 54668 jge     short loc_2B513 ;~ 1C70:082C
cs=0x1c70;eip=0x00082e; 	T(ADD(ch, 0x0C));	// 54669 add     ch, 0Ch ;~ 1C70:082E
cs=0x1c70;eip=0x000831; 	R(JMP(loc_2b509));	// 54670 jmp     short loc_2B509 ;~ 1C70:0831
loc_2b513:
	// 8374 
cs=0x1c70;eip=0x000833; 	T(SUB(ch, 0x13));	// 54674 sub     ch, 13h ;~ 1C70:0833
cs=0x1c70;eip=0x000836; 	R(CALL(sub_2b2bf,0));	// 54675 call    sub_2B2BF ;~ 1C70:0836
cs=0x1c70;eip=0x000839; 	R(JC(loc_2b549));	// 54676 jb      short loc_2B549 ;~ 1C70:0839
cs=0x1c70;eip=0x00083b; 	T(MOV(al, byte_3873f));	// 54677 mov     al, byte_3873F ;~ 1C70:083B
cs=0x1c70;eip=0x00083e; 	X(MOV(*(raddr(ds,bx-0x3753)), al));	// 54678 mov     [bx-3753h], al ;~ 1C70:083E
cs=0x1c70;eip=0x000842; 	X(MOV(byte_387cd, 1));	// 54679 mov     byte_387CD, 1 ;~ 1C70:0842
cs=0x1c70;eip=0x000847; 	R(CALL(sub_2b5a1,0));	// 54680 call    sub_2B5A1 ;~ 1C70:0847
cs=0x1c70;eip=0x00084a; 	X(MOV(byte_387cd, 0));	// 54681 mov     byte_387CD, 0 ;~ 1C70:084A
cs=0x1c70;eip=0x00084f; 	X(MOV(*(dw*)(raddr(ds,si-0x3793)), cx));	// 54682 mov     [si-3793h], cx ;~ 1C70:084F
cs=0x1c70;eip=0x000853; 	X(MOV(*(raddr(ds,bx-0x3743)), ch));	// 54683 mov     [bx-3743h], ch ;~ 1C70:0853
cs=0x1c70;eip=0x000857; 	T(SAR(dl, 1));	// 54684 sar     dl, 1 ;~ 1C70:0857
cs=0x1c70;eip=0x000859; 	R(CALL(sub_2b48d,0));	// 54685 call    sub_2B48D ;~ 1C70:0859
cs=0x1c70;eip=0x00085c; 	T(INC(si));	// 54686 inc     si ;~ 1C70:085C
cs=0x1c70;eip=0x00085d; 	R(CALL(sub_2b48d,0));	// 54687 call    sub_2B48D ;~ 1C70:085D
cs=0x1c70;eip=0x000860; 	T(DEC(si));	// 54688 dec     si ;~ 1C70:0860
cs=0x1c70;eip=0x000861; 	X(MOV(*(raddr(ds,bx-0x3713)), 0x20));	// 54689 mov     byte ptr [bx-3713h], 20h ; ' ' ;~ 1C70:0861
cs=0x1c70;eip=0x000866; 	R(CALL(sub_2b564,0));	// 54690 call    sub_2B564 ;~ 1C70:0866
loc_2b549:
	// 8375 
cs=0x1c70;eip=0x000869; 	X(POP(si));	// 54694 pop     si ;~ 1C70:0869
cs=0x1c70;eip=0x00086a; 	X(POP(cx));	// 54695 pop     cx ;~ 1C70:086A
cs=0x1c70;eip=0x00086b; 	X(POP(bx));	// 54696 pop     bx ;~ 1C70:086B
cs=0x1c70;eip=0x00086c; 	R(RETN(0));	// 54697 retn ;~ 1C70:086C
sub_2b54d:
	// 54704 
cs=0x1c70;eip=0x00086d; 	T(CMP(ch, ah));	// 54706 cmp     ch, ah ;~ 1C70:086D
ret_1c70_86f:
	// 8376 
cs=0x1c70;eip=0x00086f; 	R(JLE(loc_2b556));	// 54707 jle     short loc_2B556 ;~ 1C70:086F
cs=0x1c70;eip=0x000871; 	T(SUB(ch, 0x0C));	// 54708 sub     ch, 0Ch ;~ 1C70:0871
cs=0x1c70;eip=0x000874; 	R(JMP(sub_2b54d));	// 54709 jmp     short sub_2B54D ;~ 1C70:0874
loc_2b556:
	// 8377 
cs=0x1c70;eip=0x000876; 	T(CMP(ch, al));	// 54714 cmp     ch, al ;~ 1C70:0876
cs=0x1c70;eip=0x000878; 	R(JGE(loc_2b55f));	// 54715 jge     short loc_2B55F ;~ 1C70:0878
cs=0x1c70;eip=0x00087a; 	T(ADD(ch, 0x0C));	// 54716 add     ch, 0Ch ;~ 1C70:087A
cs=0x1c70;eip=0x00087d; 	R(JMP(loc_2b556));	// 54717 jmp     short loc_2B556 ;~ 1C70:087D
loc_2b55f:
	// 8378 
cs=0x1c70;eip=0x00087f; 	X(MOV(*(dw*)(raddr(ds,si-0x3793)), cx));	// 54721 mov     [si-3793h], cx ;~ 1C70:087F
cs=0x1c70;eip=0x000883; 	R(RETN(0));	// 54722 retn ;~ 1C70:0883
sub_2b564:
	// 54729 
cs=0x1c70;eip=0x000884; 	X(PUSH(cx));	// 54731 push    cx ;~ 1C70:0884
ret_1c70_885:
	// 8379 
cs=0x1c70;eip=0x000885; 	T(CMP(bl, 9));	// 54732 cmp     bl, 9 ;~ 1C70:0885
cs=0x1c70;eip=0x000888; 	R(JGE(loc_2b59f));	// 54733 jge     short loc_2B59F ;~ 1C70:0888
cs=0x1c70;eip=0x00088a; 	T(MOV(ax, 0x6000));	// 54734 mov     ax, 6000h ;~ 1C70:088A
cs=0x1c70;eip=0x00088d; 	R(CALL(sub_2b54d,0));	// 54735 call    sub_2B54D ;~ 1C70:088D
cs=0x1c70;eip=0x000890; 	R(CALL(sub_2ba66,0));	// 54736 call    sub_2BA66 ;~ 1C70:0890
cs=0x1c70;eip=0x000893; 	X(PUSH(ax));	// 54737 push    ax ;~ 1C70:0893
cs=0x1c70;eip=0x000894; 	T(MOV(ah, al));	// 54738 mov     ah, al ;~ 1C70:0894
cs=0x1c70;eip=0x000896; 	T(MOV(al, 0x0A0));	// 54739 mov     al, 0A0h ; ' ' ;~ 1C70:0896
cs=0x1c70;eip=0x000898; 	T(ADD(al, bl));	// 54740 add     al, bl ;~ 1C70:0898
cs=0x1c70;eip=0x00089a; 	R(CALLF(sub_2bd8e,0));	// 54741 call    sub_2BD8E ;~ 1C70:089A
cs=0x1c70;eip=0x00089f; 	X(POP(ax));	// 54742 pop     ax ;~ 1C70:089F
cs=0x1c70;eip=0x0008a0; 	T(MOV(al, ah));	// 54743 mov     al, ah ;~ 1C70:08A0
cs=0x1c70;eip=0x0008a2; 	T(MOV(ah, cl));	// 54744 mov     ah, cl ;~ 1C70:08A2
cs=0x1c70;eip=0x0008a4; 	T(SHL(ah, 1));	// 54745 shl     ah, 1 ;~ 1C70:08A4
cs=0x1c70;eip=0x0008a6; 	T(SHL(ah, 1));	// 54746 shl     ah, 1 ;~ 1C70:08A6
cs=0x1c70;eip=0x0008a8; 	T(OR(ah, al));	// 54747 or      ah, al ;~ 1C70:08A8
cs=0x1c70;eip=0x0008aa; 	T(MOV(al, *(raddr(ds,bx-0x3713))));	// 54748 mov     al, [bx-3713h] ;~ 1C70:08AA
cs=0x1c70;eip=0x0008ae; 	T(AND(al, 0x20));	// 54749 and     al, 20h ;~ 1C70:08AE
cs=0x1c70;eip=0x0008b0; 	T(OR(ah, al));	// 54750 or      ah, al ;~ 1C70:08B0
cs=0x1c70;eip=0x0008b2; 	X(MOV(*(raddr(ds,bx-0x3713)), ah));	// 54751 mov     [bx-3713h], ah ;~ 1C70:08B2
cs=0x1c70;eip=0x0008b6; 	T(MOV(al, 0x0B0));	// 54752 mov     al, 0B0h ; '°' ;~ 1C70:08B6
cs=0x1c70;eip=0x0008b8; 	T(ADD(al, bl));	// 54753 add     al, bl ;~ 1C70:08B8
cs=0x1c70;eip=0x0008ba; 	R(CALLF(sub_2bd8e,0));	// 54754 call    sub_2BD8E ;~ 1C70:08BA
loc_2b59f:
	// 8380 
cs=0x1c70;eip=0x0008bf; 	X(POP(cx));	// 54757 pop     cx ;~ 1C70:08BF
cs=0x1c70;eip=0x0008c0; 	R(RETN(0));	// 54758 retn ;~ 1C70:08C0
sub_2b5a1:
	// 54765 
cs=0x1c70;eip=0x0008c1; 	X(PUSH(bx));	// 54767 push    bx ;~ 1C70:08C1
ret_1c70_8c2:
	// 8381 
cs=0x1c70;eip=0x0008c2; 	X(PUSH(cx));	// 54768 push    cx ;~ 1C70:08C2
cs=0x1c70;eip=0x0008c3; 	T(CMP(bl, 9));	// 54769 cmp     bl, 9 ;~ 1C70:08C3
cs=0x1c70;eip=0x0008c6; 	R(JA(loc_2b607));	// 54770 ja      short loc_2B607 ;~ 1C70:08C6
cs=0x1c70;eip=0x0008c8; 	R(JZ(loc_2b5d2));	// 54771 jz      short loc_2B5D2 ;~ 1C70:08C8
cs=0x1c70;eip=0x0008ca; 	T(TEST(byte_387cd, 1));	// 54772 test    byte_387CD, 1 ;~ 1C70:08CA
cs=0x1c70;eip=0x0008cf; 	R(JNZ(loc_2b5c1));	// 54773 jnz     short loc_2B5C1 ;~ 1C70:08CF
cs=0x1c70;eip=0x0008d1; 	T(SUB(ch, 0x13));	// 54774 sub     ch, 13h ;~ 1C70:08D1
loc_2b5b4:
	// 8382 
cs=0x1c70;eip=0x0008d4; 	R(JNS(loc_2b5bb));	// 54777 jns     short loc_2B5BB ;~ 1C70:08D4
cs=0x1c70;eip=0x0008d6; 	T(ADD(ch, 0x0C));	// 54778 add     ch, 0Ch ;~ 1C70:08D6
cs=0x1c70;eip=0x0008d9; 	R(JMP(loc_2b5b4));	// 54779 jmp     short loc_2B5B4 ;~ 1C70:08D9
loc_2b5bb:
	// 8383 
cs=0x1c70;eip=0x0008db; 	T(CMP(ch, *(raddr(ds,bx-0x3743))));	// 54783 cmp     ch, [bx-3743h] ;~ 1C70:08DB
cs=0x1c70;eip=0x0008df; 	R(JNZ(loc_2b607));	// 54784 jnz     short loc_2B607 ;~ 1C70:08DF
loc_2b5c1:
	// 8384 
cs=0x1c70;eip=0x0008e1; 	T(MOV(ah, *(raddr(ds,bx-0x3713))));	// 54787 mov     ah, [bx-3713h] ;~ 1C70:08E1
cs=0x1c70;eip=0x0008e5; 	T(AND(ah, 0x1F));	// 54788 and     ah, 1Fh ;~ 1C70:08E5
cs=0x1c70;eip=0x0008e8; 	X(MOV(*(raddr(ds,bx-0x3713)), ah));	// 54789 mov     [bx-3713h], ah ;~ 1C70:08E8
cs=0x1c70;eip=0x0008ec; 	T(MOV(al, 0x0B0));	// 54790 mov     al, 0B0h ; '°' ;~ 1C70:08EC
cs=0x1c70;eip=0x0008ee; 	T(ADD(al, bl));	// 54791 add     al, bl ;~ 1C70:08EE
cs=0x1c70;eip=0x0008f0; 	R(JMP(loc_2b5f7));	// 54792 jmp     short loc_2B5F7 ;~ 1C70:08F0
loc_2b5d2:
	// 8385 
cs=0x1c70;eip=0x0008f2; 	T(CMP(ch, 0x24));	// 54796 cmp     ch, 24h ; '$' ;~ 1C70:08F2
cs=0x1c70;eip=0x0008f5; 	R(JGE(loc_2b5d9));	// 54797 jge     short loc_2B5D9 ;~ 1C70:08F5
cs=0x1c70;eip=0x0008f7; 	T(MOV(ch, 0x24));	// 54798 mov     ch, 24h ; '$' ;~ 1C70:08F7
loc_2b5d9:
	// 8386 
cs=0x1c70;eip=0x0008f9; 	T(SUB(ch, 0x24));	// 54801 sub     ch, 24h ; '$' ;~ 1C70:08F9
cs=0x1c70;eip=0x0008fc; 	T(MOV(bl, ch));	// 54802 mov     bl, ch ;~ 1C70:08FC
cs=0x1c70;eip=0x0008fe; 	T(MOV(bl, *(raddr(ds,bx-0x35D0))));	// 54803 mov     bl, [bx-35D0h] ;~ 1C70:08FE
cs=0x1c70;eip=0x000902; 	T(CMP(bl, 0x0A));	// 54804 cmp     bl, 0Ah ;~ 1C70:0902
cs=0x1c70;eip=0x000905; 	R(JA(loc_2b607));	// 54805 ja      short loc_2B607 ;~ 1C70:0905
cs=0x1c70;eip=0x000907; 	T(MOV(ah, *(raddr(ds,bx-0x3644))));	// 54806 mov     ah, [bx-3644h] ;~ 1C70:0907
cs=0x1c70;eip=0x00090b; 	T(NOT(ah));	// 54807 not     ah ;~ 1C70:090B
cs=0x1c70;eip=0x00090d; 	T(AND(ah, byte_38426));	// 54808 and     ah, byte_38426 ;~ 1C70:090D
cs=0x1c70;eip=0x000911; 	X(MOV(byte_38426, ah));	// 54809 mov     byte_38426, ah ;~ 1C70:0911
cs=0x1c70;eip=0x000915; 	T(MOV(al, 0x0BD));	// 54810 mov     al, 0BDh ; '½' ;~ 1C70:0915
loc_2b5f7:
	// 8387 
cs=0x1c70;eip=0x000917; 	R(CALLF(sub_2bd8e,0));	// 54813 call    sub_2BD8E ;~ 1C70:0917
cs=0x1c70;eip=0x00091c; 	X(MOV(*(dw*)(raddr(ds,si-0x3793)), 0));	// 54814 mov     word ptr [si-3793h], 0 ;~ 1C70:091C
cs=0x1c70;eip=0x000922; 	X(MOV(*(raddr(ds,bx-0x3743)), 0));	// 54815 mov     byte ptr [bx-3743h], 0 ;~ 1C70:0922
loc_2b607:
	// 8388 
cs=0x1c70;eip=0x000927; 	X(POP(cx));	// 54819 pop     cx ;~ 1C70:0927
cs=0x1c70;eip=0x000928; 	X(POP(bx));	// 54820 pop     bx ;~ 1C70:0928
cs=0x1c70;eip=0x000929; 	R(RETN(0));	// 54821 retn ;~ 1C70:0929
sub_2b60a:
	// 54828 
cs=0x1c70;eip=0x00092a; 	X(PUSH(bx));	// 54830 push    bx ;~ 1C70:092A
ret_1c70_92b:
	// 8389 
cs=0x1c70;eip=0x00092b; 	X(PUSH(cx));	// 54831 push    cx ;~ 1C70:092B
cs=0x1c70;eip=0x00092c; 	X(PUSH(dx));	// 54832 push    dx ;~ 1C70:092C
cs=0x1c70;eip=0x00092d; 	X(PUSH(es));	// 54833 push    es ;~ 1C70:092D
cs=0x1c70;eip=0x00092e; 	X(PUSH(si));	// 54834 push    si ;~ 1C70:092E
cs=0x1c70;eip=0x00092f; 	X(PUSH(di));	// 54835 push    di ;~ 1C70:092F
cs=0x1c70;eip=0x000930; 	T(LES(di, dword_387aa));	// 54836 les     di, dword_387AA ;~ 1C70:0930
cs=0x1c70;eip=0x000934; 	T(MOV(al, ch));	// 54837 mov     al, ch ;~ 1C70:0934
cs=0x1c70;eip=0x000936; 	T(CBW);	// 54838 cbw ;~ 1C70:0936
cs=0x1c70;eip=0x000937; 	T(MOV(dl, 9));	// 54839 mov     dl, 9 ;~ 1C70:0937
cs=0x1c70;eip=0x000939; 	T(MUL1_1(dl));	// 54840 mul     dl ;~ 1C70:0939
cs=0x1c70;eip=0x00093b; 	T(ADD(di, ax));	// 54841 add     di, ax ;~ 1C70:093B
cs=0x1c70;eip=0x00093d; 	T(MOV(al, *(raddr(es,di+8))));	// 54842 mov     al, es:[di+8] ;~ 1C70:093D
cs=0x1c70;eip=0x000941; 	T(AND(al, 1));	// 54843 and     al, 1 ;~ 1C70:0941
cs=0x1c70;eip=0x000943; 	X(MOV(*(raddr(ds,bx-0x35EB)), al));	// 54844 mov     [bx-35EBh], al ;~ 1C70:0943
cs=0x1c70;eip=0x000947; 	T(MOV(al, *(raddr(es,di+1))));	// 54845 mov     al, es:[di+1] ;~ 1C70:0947
cs=0x1c70;eip=0x00094b; 	T(MOV(bl, *(raddr(ds,si-0x3627))));	// 54846 mov     bl, [si-3627h] ;~ 1C70:094B
cs=0x1c70;eip=0x00094f; 	X(MOV(*(raddr(ds,bx-0x35FB)), al));	// 54847 mov     [bx-35FBh], al ;~ 1C70:094F
cs=0x1c70;eip=0x000953; 	T(MOV(bl, *(raddr(ds,si-0x3626))));	// 54848 mov     bl, [si-3626h] ;~ 1C70:0953
cs=0x1c70;eip=0x000957; 	T(CMP(bl, 0x0FF));	// 54849 cmp     bl, 0FFh ;~ 1C70:0957
cs=0x1c70;eip=0x00095a; 	R(JZ(loc_2b644));	// 54850 jz      short loc_2B644 ;~ 1C70:095A
cs=0x1c70;eip=0x00095c; 	T(MOV(al, *(raddr(es,di+5))));	// 54851 mov     al, es:[di+5] ;~ 1C70:095C
cs=0x1c70;eip=0x000960; 	X(MOV(*(raddr(ds,bx-0x35FB)), al));	// 54852 mov     [bx-35FBh], al ;~ 1C70:0960
loc_2b644:
	// 8390 
cs=0x1c70;eip=0x000964; 	T(MOV(dx, 2));	// 54855 mov     dx, 2 ;~ 1C70:0964
loc_2b647:
	// 8391 
cs=0x1c70;eip=0x000967; 	T(MOV(cx, 0));	// 54858 mov     cx, 0 ;~ 1C70:0967
loc_2b64a:
	// 8392 
cs=0x1c70;eip=0x00096a; 	T(MOV(bl, *(raddr(ds,si-0x3627))));	// 54861 mov     bl, [si-3627h] ;~ 1C70:096A
cs=0x1c70;eip=0x00096e; 	T(CMP(bl, 0x0FF));	// 54862 cmp     bl, 0FFh ;~ 1C70:096E
cs=0x1c70;eip=0x000971; 	R(JZ(loc_2b67a));	// 54863 jz      short loc_2B67A ;~ 1C70:0971
cs=0x1c70;eip=0x000973; 	T(MOV(ah, *(raddr(es,di))));	// 54864 mov     ah, es:[di] ;~ 1C70:0973
cs=0x1c70;eip=0x000976; 	T(INC(di));	// 54865 inc     di ;~ 1C70:0976
cs=0x1c70;eip=0x000977; 	T(MOV(al, *(raddr(ds,bx-0x3639))));	// 54866 mov     al, [bx-3639h] ;~ 1C70:0977
cs=0x1c70;eip=0x00097b; 	T(MOV(bx, cx));	// 54867 mov     bx, cx ;~ 1C70:097B
cs=0x1c70;eip=0x00097d; 	T(ADD(al, *(raddr(ds,bx-0x35FF))));	// 54868 add     al, [bx-35FFh] ;~ 1C70:097D
cs=0x1c70;eip=0x000981; 	R(CALLF(sub_2bd8e,0));	// 54869 call    sub_2BD8E ;~ 1C70:0981
cs=0x1c70;eip=0x000986; 	T(INC(cx));	// 54870 inc     cx ;~ 1C70:0986
cs=0x1c70;eip=0x000987; 	T(CMP(cx, 4));	// 54871 cmp     cx, 4 ;~ 1C70:0987
cs=0x1c70;eip=0x00098a; 	R(JL(loc_2b64a));	// 54872 jl      short loc_2B64A ;~ 1C70:098A
cs=0x1c70;eip=0x00098c; 	T(INC(si));	// 54873 inc     si ;~ 1C70:098C
cs=0x1c70;eip=0x00098d; 	T(DEC(dx));	// 54874 dec     dx ;~ 1C70:098D
cs=0x1c70;eip=0x00098e; 	R(JNZ(loc_2b647));	// 54875 jnz     short loc_2B647 ;~ 1C70:098E
cs=0x1c70;eip=0x000990; 	T(MOV(ah, *(raddr(es,di))));	// 54876 mov     ah, es:[di] ;~ 1C70:0990
cs=0x1c70;eip=0x000993; 	T(MOV(al, 0x0C0));	// 54877 mov     al, 0C0h ; 'À' ;~ 1C70:0993
cs=0x1c70;eip=0x000995; 	R(CALLF(sub_2bd8e,0));	// 54878 call    sub_2BD8E ;~ 1C70:0995
loc_2b67a:
	// 8393 
cs=0x1c70;eip=0x00099a; 	X(POP(di));	// 54881 pop     di ;~ 1C70:099A
cs=0x1c70;eip=0x00099b; 	X(POP(si));	// 54882 pop     si ;~ 1C70:099B
cs=0x1c70;eip=0x00099c; 	X(POP(es));	// 54883 pop     es ;~ 1C70:099C
cs=0x1c70;eip=0x00099d; 	X(POP(dx));	// 54884 pop     dx ;~ 1C70:099D
cs=0x1c70;eip=0x00099e; 	X(POP(cx));	// 54885 pop     cx ;~ 1C70:099E
cs=0x1c70;eip=0x00099f; 	X(POP(bx));	// 54886 pop     bx ;~ 1C70:099F
cs=0x1c70;eip=0x0009a0; 	R(RETN(0));	// 54887 retn ;~ 1C70:09A0
sub_2b6cd:
	// 54934 
cs=0x1c70;eip=0x0009ed; 	X(PUSH(si));	// 54936 push    si ;~ 1C70:09ED
ret_1c70_9ee:
	// 8399 
cs=0x1c70;eip=0x0009ee; 	X(PUSH(bx));	// 54937 push    bx ;~ 1C70:09EE
cs=0x1c70;eip=0x0009ef; 	X(PUSH(cx));	// 54938 push    cx ;~ 1C70:09EF
cs=0x1c70;eip=0x0009f0; 	X(PUSH(dx));	// 54939 push    dx ;~ 1C70:09F0
cs=0x1c70;eip=0x0009f1; 	T(SUB(si, si));	// 54940 sub     si, si ;~ 1C70:09F1
cs=0x1c70;eip=0x0009f3; 	R(CALL(sub_2afda,0));	// 54941 call    sub_2AFDA ;~ 1C70:09F3
cs=0x1c70;eip=0x0009f6; 	T(OR(ax, ax));	// 54942 or      ax, ax ;~ 1C70:09F6
cs=0x1c70;eip=0x0009f8; 	R(JZ(loc_2b6f3));	// 54943 jz      short loc_2B6F3 ;~ 1C70:09F8
cs=0x1c70;eip=0x0009fa; 	T(MOV(bx, 0x0A));	// 54944 mov     bx, 0Ah ;~ 1C70:09FA
loc_2b6dd:
	// 8400 
cs=0x1c70;eip=0x0009fd; 	T(MOV(ch, *(raddr(ds,bx-0x35DB))));	// 54947 mov     ch, [bx-35DBh] ;~ 1C70:09FD
cs=0x1c70;eip=0x000a01; 	X(MOV(*(raddr(ds,bx-0x37BD)), ch));	// 54948 mov     [bx-37BDh], ch ;~ 1C70:0A01
cs=0x1c70;eip=0x000a05; 	X(MOV(word_3873d, bx));	// 54949 mov     word_3873D, bx ;~ 1C70:0A05
cs=0x1c70;eip=0x000a09; 	T(MOV(si, bx));	// 54950 mov     si, bx ;~ 1C70:0A09
cs=0x1c70;eip=0x000a0b; 	T(SHL(si, 1));	// 54951 shl     si, 1 ;~ 1C70:0A0B
cs=0x1c70;eip=0x000a0d; 	R(CALL(sub_2b60a,0));	// 54952 call    sub_2B60A ;~ 1C70:0A0D
cs=0x1c70;eip=0x000a10; 	T(DEC(bx));	// 54953 dec     bx ;~ 1C70:0A10
cs=0x1c70;eip=0x000a11; 	R(JNS(loc_2b6dd));	// 54954 jns     short loc_2B6DD ;~ 1C70:0A11
loc_2b6f3:
	// 8401 
cs=0x1c70;eip=0x000a13; 	X(POP(dx));	// 54957 pop     dx ;~ 1C70:0A13
cs=0x1c70;eip=0x000a14; 	X(POP(cx));	// 54958 pop     cx ;~ 1C70:0A14
cs=0x1c70;eip=0x000a15; 	X(POP(bx));	// 54959 pop     bx ;~ 1C70:0A15
cs=0x1c70;eip=0x000a16; 	X(POP(si));	// 54960 pop     si ;~ 1C70:0A16
cs=0x1c70;eip=0x000a17; 	R(RETN(0));	// 54961 retn ;~ 1C70:0A17
sub_2b6f8:
	// 54968 
cs=0x1c70;eip=0x000a18; 	X(PUSH(cx));	// 54970 push    cx ;~ 1C70:0A18
ret_1c70_a19:
	// 8402 
cs=0x1c70;eip=0x000a19; 	X(PUSH(dx));	// 54971 push    dx ;~ 1C70:0A19
cs=0x1c70;eip=0x000a1a; 	T(MOV(dx, 0x226));	// 54972 mov     dx, 226h ;~ 1C70:0A1A
cs=0x1c70;eip=0x000a1d; 	T(MOV(al, 0x0A5));	// 54973 mov     al, 0A5h ; '¥' ;~ 1C70:0A1D
cs=0x1c70;eip=0x000a1f; 	R(OUT(dx, al));	// 54974 out     dx, al ;~ 1C70:0A1F
cs=0x1c70;eip=0x000a20; 	T(MOV(dx, 0x22A));	// 54975 mov     dx, 22Ah ;~ 1C70:0A20
cs=0x1c70;eip=0x000a23; 	R(IN(al, dx));	// 54976 in      al, dx ;~ 1C70:0A23
cs=0x1c70;eip=0x000a24; 	R(IN(al, dx));	// 54977 in      al, dx ;~ 1C70:0A24
cs=0x1c70;eip=0x000a25; 	R(IN(al, dx));	// 54978 in      al, dx ;~ 1C70:0A25
cs=0x1c70;eip=0x000a26; 	T(CMP(ax, 0x0A5));	// 54979 cmp     ax, 0A5h ; '¥' ;~ 1C70:0A26
cs=0x1c70;eip=0x000a29; 	R(JZ(loc_2b733));	// 54980 jz      short loc_2B733 ;~ 1C70:0A29
cs=0x1c70;eip=0x000a2b; 	T(MOV(dx, 0x226));	// 54981 mov     dx, 226h ;~ 1C70:0A2B
cs=0x1c70;eip=0x000a2e; 	T(MOV(al, 1));	// 54982 mov     al, 1 ;~ 1C70:0A2E
cs=0x1c70;eip=0x000a30; 	R(OUT(dx, al));	// 54983 out     dx, al ;~ 1C70:0A30
cs=0x1c70;eip=0x000a31; 	R(IN(al, dx));	// 54984 in      al, dx ;~ 1C70:0A31
cs=0x1c70;eip=0x000a32; 	R(IN(al, dx));	// 54985 in      al, dx ;~ 1C70:0A32
cs=0x1c70;eip=0x000a33; 	R(IN(al, dx));	// 54986 in      al, dx ;~ 1C70:0A33
cs=0x1c70;eip=0x000a34; 	R(IN(al, dx));	// 54987 in      al, dx ;~ 1C70:0A34
cs=0x1c70;eip=0x000a35; 	T(SUB(al, al));	// 54988 sub     al, al ;~ 1C70:0A35
cs=0x1c70;eip=0x000a37; 	R(OUT(dx, al));	// 54989 out     dx, al ;~ 1C70:0A37
cs=0x1c70;eip=0x000a38; 	T(MOV(dx, 0x22E));	// 54990 mov     dx, 22Eh ;~ 1C70:0A38
loc_2b71b:
	// 8403 
cs=0x1c70;eip=0x000a3b; 	R(IN(al, dx));	// 54993 in      al, dx ;~ 1C70:0A3B
cs=0x1c70;eip=0x000a3c; 	T(OR(al, al));	// 54994 or      al, al ;~ 1C70:0A3C
cs=0x1c70;eip=0x000a3e; 	R(JNS(loc_2b71b));	// 54995 jns     short loc_2B71B ;~ 1C70:0A3E
cs=0x1c70;eip=0x000a40; 	T(MOV(al, 0x0FF));	// 54996 mov     al, 0FFh ;~ 1C70:0A40
cs=0x1c70;eip=0x000a42; 	T(MOV(dx, 0x22A));	// 54997 mov     dx, 22Ah ;~ 1C70:0A42
cs=0x1c70;eip=0x000a45; 	T(MOV(cx, 0x64));	// 54998 mov     cx, 64h ; 'd' ;~ 1C70:0A45
loc_2b728:
	// 8404 
cs=0x1c70;eip=0x000a48; 	R(IN(al, dx));	// 55001 in      al, dx ;~ 1C70:0A48
cs=0x1c70;eip=0x000a49; 	T(CMP(al, 0x0AA));	// 55002 cmp     al, 0AAh ; 'ª' ;~ 1C70:0A49
cs=0x1c70;eip=0x000a4b; 	R(JZ(loc_2b733));	// 55003 jz      short loc_2B733 ;~ 1C70:0A4B
cs=0x1c70;eip=0x000a4d; 	R(LOOP(loc_2b728));	// 55004 loop    loc_2B728 ;~ 1C70:0A4D
cs=0x1c70;eip=0x000a4f; 	T(SUB(ax, ax));	// 55005 sub     ax, ax ;~ 1C70:0A4F
cs=0x1c70;eip=0x000a51; 	R(JMP(loc_2b736));	// 55006 jmp     short loc_2B736 ;~ 1C70:0A51
loc_2b733:
	// 8405 
cs=0x1c70;eip=0x000a53; 	T(MOV(ax, 1));	// 55011 mov     ax, 1 ;~ 1C70:0A53
loc_2b736:
	// 8406 
cs=0x1c70;eip=0x000a56; 	X(POP(dx));	// 55014 pop     dx ;~ 1C70:0A56
cs=0x1c70;eip=0x000a57; 	X(POP(cx));	// 55015 pop     cx ;~ 1C70:0A57
cs=0x1c70;eip=0x000a58; 	R(RETN(0));	// 55016 retn ;~ 1C70:0A58
sub_2b79f:
	// 55083 
cs=0x1c70;eip=0x000abf; 	X(PUSH(bx));	// 55084 push    bx ;~ 1C70:0ABF
ret_1c70_ac0:
	// 8412 
cs=0x1c70;eip=0x000ac0; 	X(PUSH(cx));	// 55085 push    cx ;~ 1C70:0AC0
cs=0x1c70;eip=0x000ac1; 	X(PUSH(dx));	// 55086 push    dx ;~ 1C70:0AC1
cs=0x1c70;eip=0x000ac2; 	X(PUSH(si));	// 55087 push    si ;~ 1C70:0AC2
cs=0x1c70;eip=0x000ac3; 	X(PUSH(bp));	// 55088 push    bp ;~ 1C70:0AC3
cs=0x1c70;eip=0x000ac4; 	T(MOV(ax, 0x6000));	// 55089 mov     ax, 6000h ;~ 1C70:0AC4
cs=0x1c70;eip=0x000ac7; 	R(CALL(sub_2b54d,0));	// 55090 call    sub_2B54D ;~ 1C70:0AC7
cs=0x1c70;eip=0x000aca; 	R(CALL(sub_2ba66,0));	// 55091 call    sub_2BA66 ;~ 1C70:0ACA
cs=0x1c70;eip=0x000acd; 	T(MOV(dx, 0x221));	// 55092 mov     dx, 221h ;~ 1C70:0ACD
cs=0x1c70;eip=0x000ad0; 	T(CMP(bl, 6));	// 55093 cmp     bl, 6 ;~ 1C70:0AD0
cs=0x1c70;eip=0x000ad3; 	R(JL(loc_2b7bb));	// 55094 jl      short loc_2B7BB ;~ 1C70:0AD3
cs=0x1c70;eip=0x000ad5; 	T(ADD(dx, 2));	// 55095 add     dx, 2 ;~ 1C70:0AD5
cs=0x1c70;eip=0x000ad8; 	T(SUB(bl, 6));	// 55096 sub     bl, 6 ;~ 1C70:0AD8
loc_2b7bb:
	// 8413 
cs=0x1c70;eip=0x000adb; 	T(MOV(bp, ax));	// 55099 mov     bp, ax ;~ 1C70:0ADB
cs=0x1c70;eip=0x000add; 	T(MOV(al, 8));	// 55100 mov     al, 8 ;~ 1C70:0ADD
cs=0x1c70;eip=0x000adf; 	T(ADD(al, bl));	// 55101 add     al, bl ;~ 1C70:0ADF
cs=0x1c70;eip=0x000ae1; 	R(OUT(dx, al));	// 55102 out     dx, al ;~ 1C70:0AE1
cs=0x1c70;eip=0x000ae2; 	T(DEC(dx));	// 55103 dec     dx ;~ 1C70:0AE2
cs=0x1c70;eip=0x000ae3; 	T(MOV(ax, bp));	// 55104 mov     ax, bp ;~ 1C70:0AE3
cs=0x1c70;eip=0x000ae5; 	R(OUT(dx, al));	// 55105 out     dx, al ;~ 1C70:0AE5
cs=0x1c70;eip=0x000ae6; 	T(INC(dx));	// 55106 inc     dx ;~ 1C70:0AE6
cs=0x1c70;eip=0x000ae7; 	T(MOV(si, bx));	// 55107 mov     si, bx ;~ 1C70:0AE7
cs=0x1c70;eip=0x000ae9; 	T(SHR(bl, 1));	// 55108 shr     bl, 1 ;~ 1C70:0AE9
cs=0x1c70;eip=0x000aeb; 	T(MOV(al, bl));	// 55109 mov     al, bl ;~ 1C70:0AEB
cs=0x1c70;eip=0x000aed; 	T(ADD(al, 0x10));	// 55110 add     al, 10h ;~ 1C70:0AED
cs=0x1c70;eip=0x000aef; 	R(OUT(dx, al));	// 55111 out     dx, al ;~ 1C70:0AEF
cs=0x1c70;eip=0x000af0; 	T(DEC(dx));	// 55112 dec     dx ;~ 1C70:0AF0
cs=0x1c70;eip=0x000af1; 	T(MOV(al, cl));	// 55113 mov     al, cl ;~ 1C70:0AF1
cs=0x1c70;eip=0x000af3; 	T(MOV(ah, *(raddr(ds,bx-0x3571))));	// 55114 mov     ah, [bx-3571h] ;~ 1C70:0AF3
cs=0x1c70;eip=0x000af7; 	T(TEST(si, 1));	// 55115 test    si, 1 ;~ 1C70:0AF7
cs=0x1c70;eip=0x000afb; 	R(JZ(loc_2b7e6));	// 55116 jz      short loc_2B7E6 ;~ 1C70:0AFB
cs=0x1c70;eip=0x000afd; 	T(MOV(cl, 4));	// 55117 mov     cl, 4 ;~ 1C70:0AFD
cs=0x1c70;eip=0x000aff; 	T(SHL(al, cl));	// 55118 shl     al, cl ;~ 1C70:0AFF
cs=0x1c70;eip=0x000b01; 	T(AND(ah, 0x0F));	// 55119 and     ah, 0Fh ;~ 1C70:0B01
cs=0x1c70;eip=0x000b04; 	R(JMP(loc_2b7e9));	// 55120 jmp     short loc_2B7E9 ;~ 1C70:0B04
loc_2b7e6:
	// 8414 
cs=0x1c70;eip=0x000b06; 	T(AND(ah, 0x0F0));	// 55124 and     ah, 0F0h ;~ 1C70:0B06
loc_2b7e9:
	// 8415 
cs=0x1c70;eip=0x000b09; 	T(OR(al, ah));	// 55127 or      al, ah ;~ 1C70:0B09
cs=0x1c70;eip=0x000b0b; 	X(MOV(*(raddr(ds,bx-0x3571)), al));	// 55128 mov     [bx-3571h], al ;~ 1C70:0B0B
cs=0x1c70;eip=0x000b0f; 	R(OUT(dx, al));	// 55129 out     dx, al ;~ 1C70:0B0F
cs=0x1c70;eip=0x000b10; 	X(POP(bp));	// 55130 pop     bp ;~ 1C70:0B10
cs=0x1c70;eip=0x000b11; 	X(POP(si));	// 55131 pop     si ;~ 1C70:0B11
cs=0x1c70;eip=0x000b12; 	X(POP(dx));	// 55132 pop     dx ;~ 1C70:0B12
cs=0x1c70;eip=0x000b13; 	X(POP(cx));	// 55133 pop     cx ;~ 1C70:0B13
cs=0x1c70;eip=0x000b14; 	X(POP(bx));	// 55134 pop     bx ;~ 1C70:0B14
cs=0x1c70;eip=0x000b15; 	R(RETN(0));	// 55135 retn ;~ 1C70:0B15
sub_2b83f:
	// 55184 
cs=0x1c70;eip=0x000b5f; 	X(PUSH(cx));	// 55186 push    cx ;~ 1C70:0B5F
ret_1c70_b60:
	// 8422 
cs=0x1c70;eip=0x000b60; 	X(PUSH(dx));	// 55187 push    dx ;~ 1C70:0B60
cs=0x1c70;eip=0x000b61; 	T(MOV(dx, 0x221));	// 55188 mov     dx, 221h ;~ 1C70:0B61
loc_2b844:
	// 8423 
cs=0x1c70;eip=0x000b64; 	T(SUB(al, al));	// 55191 sub     al, al ;~ 1C70:0B64
loc_2b846:
	// 8424 
cs=0x1c70;eip=0x000b66; 	R(OUT(dx, al));	// 55194 out     dx, al ;~ 1C70:0B66
cs=0x1c70;eip=0x000b67; 	T(MOV(ah, al));	// 55195 mov     ah, al ;~ 1C70:0B67
cs=0x1c70;eip=0x000b69; 	T(DEC(dx));	// 55196 dec     dx ;~ 1C70:0B69
cs=0x1c70;eip=0x000b6a; 	T(SUB(al, al));	// 55197 sub     al, al ;~ 1C70:0B6A
cs=0x1c70;eip=0x000b6c; 	R(OUT(dx, al));	// 55198 out     dx, al ;~ 1C70:0B6C
cs=0x1c70;eip=0x000b6d; 	T(INC(dx));	// 55199 inc     dx ;~ 1C70:0B6D
cs=0x1c70;eip=0x000b6e; 	T(MOV(al, ah));	// 55200 mov     al, ah ;~ 1C70:0B6E
cs=0x1c70;eip=0x000b70; 	T(INC(al));	// 55201 inc     al ;~ 1C70:0B70
cs=0x1c70;eip=0x000b72; 	T(CMP(al, 0x20));	// 55202 cmp     al, 20h ; ' ' ;~ 1C70:0B72
cs=0x1c70;eip=0x000b74; 	R(JC(loc_2b846));	// 55203 jb      short loc_2B846 ;~ 1C70:0B74
cs=0x1c70;eip=0x000b76; 	T(MOV(al, 0x1C));	// 55204 mov     al, 1Ch ;~ 1C70:0B76
cs=0x1c70;eip=0x000b78; 	R(OUT(dx, al));	// 55205 out     dx, al ;~ 1C70:0B78
cs=0x1c70;eip=0x000b79; 	T(DEC(dx));	// 55206 dec     dx ;~ 1C70:0B79
cs=0x1c70;eip=0x000b7a; 	T(MOV(al, 2));	// 55207 mov     al, 2 ;~ 1C70:0B7A
cs=0x1c70;eip=0x000b7c; 	R(OUT(dx, al));	// 55208 out     dx, al ;~ 1C70:0B7C
cs=0x1c70;eip=0x000b7d; 	T(INC(dx));	// 55209 inc     dx ;~ 1C70:0B7D
cs=0x1c70;eip=0x000b7e; 	T(MOV(al, 0x1C));	// 55210 mov     al, 1Ch ;~ 1C70:0B7E
cs=0x1c70;eip=0x000b80; 	R(OUT(dx, al));	// 55211 out     dx, al ;~ 1C70:0B80
cs=0x1c70;eip=0x000b81; 	T(MOV(al, 1));	// 55212 mov     al, 1 ;~ 1C70:0B81
cs=0x1c70;eip=0x000b83; 	T(DEC(dx));	// 55213 dec     dx ;~ 1C70:0B83
cs=0x1c70;eip=0x000b84; 	R(OUT(dx, al));	// 55214 out     dx, al ;~ 1C70:0B84
cs=0x1c70;eip=0x000b85; 	T(INC(dx));	// 55215 inc     dx ;~ 1C70:0B85
cs=0x1c70;eip=0x000b86; 	T(ADD(dx, 2));	// 55216 add     dx, 2 ;~ 1C70:0B86
cs=0x1c70;eip=0x000b89; 	T(CMP(dx, 0x225));	// 55217 cmp     dx, 225h ;~ 1C70:0B89
cs=0x1c70;eip=0x000b8d; 	R(JC(loc_2b844));	// 55218 jb      short loc_2B844 ;~ 1C70:0B8D
cs=0x1c70;eip=0x000b8f; 	X(POP(dx));	// 55219 pop     dx ;~ 1C70:0B8F
cs=0x1c70;eip=0x000b90; 	X(POP(cx));	// 55220 pop     cx ;~ 1C70:0B90
cs=0x1c70;eip=0x000b91; 	R(RETN(0));	// 55221 retn ;~ 1C70:0B91
sub_2b8a9:
	// 55276 
cs=0x1c70;eip=0x000bc9; 	T(MOV(ax, 0x6000));	// 55277 mov     ax, 6000h ;~ 1C70:0BC9
ret_1c70_bcc:
	// 8429 
cs=0x1c70;eip=0x000bcc; 	R(CALL(sub_2b54d,0));	// 55278 call    sub_2B54D ;~ 1C70:0BCC
cs=0x1c70;eip=0x000bcf; 	R(CALL(sub_2ba66,0));	// 55279 call    sub_2BA66 ;~ 1C70:0BCF
cs=0x1c70;eip=0x000bd2; 	T(SHR(ax, cl));	// 55280 shr     ax, cl ;~ 1C70:0BD2
cs=0x1c70;eip=0x000bd4; 	X(PUSHF);	// 55281 pushf ;~ 1C70:0BD4
cs=0x1c70;eip=0x000bd5; 	T(CLI);	// 55282 cli ;~ 1C70:0BD5
cs=0x1c70;eip=0x000bd6; 	R(OUT(0x42, al));	// 55283 out     42h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 1C70:0BD6
cs=0x1c70;eip=0x000bd8; 	T(MOV(al, ah));	// 55284 mov     al, ah ;~ 1C70:0BD8
cs=0x1c70;eip=0x000bda; 	R(OUT(0x42, al));	// 55285 out     42h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 1C70:0BDA
cs=0x1c70;eip=0x000bdc; 	X(POPF);	// 55286 popf ;~ 1C70:0BDC
cs=0x1c70;eip=0x000bdd; 	R(RETN(0));	// 55287 retn ;~ 1C70:0BDD
sub_2b946:
	// 55407 
cs=0x1c70;eip=0x000c66; 	X(PUSH(bx));	// 55408 push    bx ;~ 1C70:0C66
ret_1c70_c67:
	// 8442 
cs=0x1c70;eip=0x000c67; 	X(PUSH(cx));	// 55409 push    cx ;~ 1C70:0C67
cs=0x1c70;eip=0x000c68; 	X(PUSH(dx));	// 55410 push    dx ;~ 1C70:0C68
cs=0x1c70;eip=0x000c69; 	T(MOV(ax, 0x6000));	// 55411 mov     ax, 6000h ;~ 1C70:0C69
cs=0x1c70;eip=0x000c6c; 	R(CALL(sub_2b54d,0));	// 55412 call    sub_2B54D ;~ 1C70:0C6C
cs=0x1c70;eip=0x000c6f; 	R(CALL(sub_2ba66,0));	// 55413 call    sub_2BA66 ;~ 1C70:0C6F
cs=0x1c70;eip=0x000c72; 	T(SHR(ax, cl));	// 55414 shr     ax, cl ;~ 1C70:0C72
loc_2b954:
	// 8443 
cs=0x1c70;eip=0x000c74; 	T(CMP(ax, 0x3FF));	// 55417 cmp     ax, 3FFh ;~ 1C70:0C74
cs=0x1c70;eip=0x000c77; 	R(JBE(loc_2b95d));	// 55418 jbe     short loc_2B95D ;~ 1C70:0C77
cs=0x1c70;eip=0x000c79; 	T(SHR(ax, 1));	// 55419 shr     ax, 1 ;~ 1C70:0C79
cs=0x1c70;eip=0x000c7b; 	R(JMP(loc_2b954));	// 55420 jmp     short loc_2B954 ;~ 1C70:0C7B
loc_2b95d:
	// 8444 
cs=0x1c70;eip=0x000c7d; 	T(MOV(dx, ax));	// 55424 mov     dx, ax ;~ 1C70:0C7D
cs=0x1c70;eip=0x000c7f; 	T(SHR(ax, 1));	// 55425 shr     ax, 1 ;~ 1C70:0C7F
cs=0x1c70;eip=0x000c81; 	T(SHR(ax, 1));	// 55426 shr     ax, 1 ;~ 1C70:0C81
cs=0x1c70;eip=0x000c83; 	T(SHR(ax, 1));	// 55427 shr     ax, 1 ;~ 1C70:0C83
cs=0x1c70;eip=0x000c85; 	T(SHR(ax, 1));	// 55428 shr     ax, 1 ;~ 1C70:0C85
cs=0x1c70;eip=0x000c87; 	T(MOV(ah, al));	// 55429 mov     ah, al ;~ 1C70:0C87
cs=0x1c70;eip=0x000c89; 	T(MOV(al, dl));	// 55430 mov     al, dl ;~ 1C70:0C89
cs=0x1c70;eip=0x000c8b; 	T(AND(al, 0x0F));	// 55431 and     al, 0Fh ;~ 1C70:0C8B
cs=0x1c70;eip=0x000c8d; 	T(OR(al, *(raddr(ds,bx-0x350E))));	// 55432 or      al, [bx-350Eh] ;~ 1C70:0C8D
cs=0x1c70;eip=0x000c91; 	T(OR(al, 0x80));	// 55433 or      al, 80h ;~ 1C70:0C91
cs=0x1c70;eip=0x000c93; 	X(PUSHF);	// 55434 pushf ;~ 1C70:0C93
cs=0x1c70;eip=0x000c94; 	T(CLI);	// 55435 cli ;~ 1C70:0C94
cs=0x1c70;eip=0x000c95; 	R(OUT(0x0C0, al));	// 55436 out     0C0h, al        ; DMA controller, 8237A-5. ;~ 1C70:0C95
cs=0x1c70;eip=0x000c97; 	T(MOV(al, ah));	// 55439 mov     al, ah ;~ 1C70:0C97
cs=0x1c70;eip=0x000c99; 	R(OUT(0x0C1, al));	// 55440 out     0C1h, al        ; DMA controller, 8237A-5. ;~ 1C70:0C99
cs=0x1c70;eip=0x000c9b; 	X(POPF);	// 55442 popf ;~ 1C70:0C9B
cs=0x1c70;eip=0x000c9c; 	X(POP(dx));	// 55443 pop     dx ;~ 1C70:0C9C
cs=0x1c70;eip=0x000c9d; 	X(POP(cx));	// 55444 pop     cx ;~ 1C70:0C9D
cs=0x1c70;eip=0x000c9e; 	X(POP(bx));	// 55445 pop     bx ;~ 1C70:0C9E
cs=0x1c70;eip=0x000c9f; 	R(RETN(0));	// 55446 retn ;~ 1C70:0C9F
sub_2b9c9:
	// 55502 
cs=0x1c70;eip=0x000ce9; 	X(PUSH(bx));	// 55504 push    bx ;~ 1C70:0CE9
ret_1c70_cea:
	// 8452 
cs=0x1c70;eip=0x000cea; 	X(PUSH(cx));	// 55505 push    cx ;~ 1C70:0CEA
cs=0x1c70;eip=0x000ceb; 	X(PUSH(si));	// 55506 push    si ;~ 1C70:0CEB
cs=0x1c70;eip=0x000cec; 	T(MOV(bl, al));	// 55507 mov     bl, al ;~ 1C70:0CEC
cs=0x1c70;eip=0x000cee; 	T(SHL(bx, 1));	// 55508 shl     bx, 1 ;~ 1C70:0CEE
cs=0x1c70;eip=0x000cf0; 	T(MOV(cx, *(dw*)(raddr(ds,bx-0x3793))));	// 55509 mov     cx, [bx-3793h] ;~ 1C70:0CF0
cs=0x1c70;eip=0x000cf4; 	T(ADD(cx, *(dw*)(raddr(ds,si-0x34E3))));	// 55510 add     cx, [si-34E3h] ;~ 1C70:0CF4
cs=0x1c70;eip=0x000cf8; 	T(ADD(cx, *(dw*)(raddr(ds,si-0x34FB))));	// 55511 add     cx, [si-34FBh] ;~ 1C70:0CF8
cs=0x1c70;eip=0x000cfc; 	T(CMP(cx, *(dw*)(raddr(ds,bx-0x3793))));	// 55512 cmp     cx, [bx-3793h] ;~ 1C70:0CFC
cs=0x1c70;eip=0x000d00; 	R(JNZ(loc_2b9ec));	// 55513 jnz     short loc_2B9EC ;~ 1C70:0D00
cs=0x1c70;eip=0x000d02; 	T(SHR(bx, 1));	// 55514 shr     bx, 1 ;~ 1C70:0D02
cs=0x1c70;eip=0x000d04; 	T(CMP(*(raddr(ds,bx-0x3743)), ch));	// 55515 cmp     [bx-3743h], ch ;~ 1C70:0D04
cs=0x1c70;eip=0x000d08; 	R(JZ(loc_2b9f8));	// 55516 jz      short loc_2B9F8 ;~ 1C70:0D08
cs=0x1c70;eip=0x000d0a; 	T(SHL(bx, 1));	// 55517 shl     bx, 1 ;~ 1C70:0D0A
loc_2b9ec:
	// 8453 
cs=0x1c70;eip=0x000d0c; 	X(MOV(*(dw*)(raddr(ds,bx-0x3793)), cx));	// 55520 mov     [bx-3793h], cx ;~ 1C70:0D0C
cs=0x1c70;eip=0x000d10; 	T(MOV(si, bx));	// 55521 mov     si, bx ;~ 1C70:0D10
cs=0x1c70;eip=0x000d12; 	T(SHR(bx, 1));	// 55522 shr     bx, 1 ;~ 1C70:0D12
cs=0x1c70;eip=0x000d14; 	R(CALL(__dispatch_call,off_3874e));	// 55523 call    off_3874E ;~ 1C70:0D14
loc_2b9f8:
	// 8454 
cs=0x1c70;eip=0x000d18; 	X(POP(si));	// 55526 pop     si ;~ 1C70:0D18
cs=0x1c70;eip=0x000d19; 	X(POP(cx));	// 55527 pop     cx ;~ 1C70:0D19
cs=0x1c70;eip=0x000d1a; 	X(POP(bx));	// 55528 pop     bx ;~ 1C70:0D1A
cs=0x1c70;eip=0x000d1b; 	R(RETN(0));	// 55529 retn ;~ 1C70:0D1B
sub_2b9fc:
	// 55536 
cs=0x1c70;eip=0x000d1c; 	T(MOV(si, 4));	// 55538 mov     si, 4 ;~ 1C70:0D1C
loc_2b9ff:
	// 8455 
cs=0x1c70;eip=0x000d1f; 	X(DEC(*(dw*)(raddr(ds,si-0x34EF))));	// 55541 dec     word ptr [si-34EFh] ;~ 1C70:0D1F
cs=0x1c70;eip=0x000d23; 	R(JNS(loc_2ba11));	// 55542 jns     short loc_2BA11 ;~ 1C70:0D23
cs=0x1c70;eip=0x000d25; 	X(NEG(*(dw*)(raddr(ds,si-0x34FB))));	// 55543 neg     word ptr [si-34FBh] ;~ 1C70:0D25
cs=0x1c70;eip=0x000d29; 	T(MOV(ax, *(dw*)(raddr(ds,si-0x34E9))));	// 55544 mov     ax, [si-34E9h] ;~ 1C70:0D29
cs=0x1c70;eip=0x000d2d; 	X(MOV(*(dw*)(raddr(ds,si-0x34EF)), ax));	// 55545 mov     [si-34EFh], ax ;~ 1C70:0D2D
loc_2ba11:
	// 8456 
cs=0x1c70;eip=0x000d31; 	T(SUB(si, 2));	// 55548 sub     si, 2 ;~ 1C70:0D31
cs=0x1c70;eip=0x000d34; 	R(JNS(loc_2b9ff));	// 55549 jns     short loc_2B9FF ;~ 1C70:0D34
cs=0x1c70;eip=0x000d36; 	T(TEST(byte_38420, 4));	// 55550 test    byte_38420, 4 ;~ 1C70:0D36
cs=0x1c70;eip=0x000d3b; 	R(JZ(loc_2ba39));	// 55551 jz      short loc_2BA39 ;~ 1C70:0D3B
cs=0x1c70;eip=0x000d3d; 	T(MOV(bx, 2));	// 55552 mov     bx, 2 ;~ 1C70:0D3D
loc_2ba20:
	// 8457 
cs=0x1c70;eip=0x000d40; 	T(MOV(si, bx));	// 55555 mov     si, bx ;~ 1C70:0D40
cs=0x1c70;eip=0x000d42; 	T(MOV(al, bl));	// 55556 mov     al, bl ;~ 1C70:0D42
cs=0x1c70;eip=0x000d44; 	T(INC(al));	// 55557 inc     al ;~ 1C70:0D44
cs=0x1c70;eip=0x000d46; 	X(MOV(byte_3873f, al));	// 55558 mov     byte_3873F, al ;~ 1C70:0D46
cs=0x1c70;eip=0x000d49; 	T(SHL(si, 1));	// 55559 shl     si, 1 ;~ 1C70:0D49
cs=0x1c70;eip=0x000d4b; 	T(MOV(al, *(raddr(ds,bx-0x34C5))));	// 55560 mov     al, [bx-34C5h] ;~ 1C70:0D4B
cs=0x1c70;eip=0x000d4f; 	T(CMP(al, 0x0FF));	// 55561 cmp     al, 0FFh ;~ 1C70:0D4F
cs=0x1c70;eip=0x000d51; 	R(JZ(loc_2ba36));	// 55562 jz      short loc_2BA36 ;~ 1C70:0D51
cs=0x1c70;eip=0x000d53; 	R(CALL(sub_2b9c9,0));	// 55563 call    sub_2B9C9 ;~ 1C70:0D53
loc_2ba36:
	// 8458 
cs=0x1c70;eip=0x000d56; 	T(DEC(bx));	// 55566 dec     bx ;~ 1C70:0D56
cs=0x1c70;eip=0x000d57; 	R(JNZ(loc_2ba20));	// 55567 jnz     short loc_2BA20 ;~ 1C70:0D57
loc_2ba39:
	// 8459 
cs=0x1c70;eip=0x000d59; 	X(MOV(byte_3873f, 1));	// 55570 mov     byte_3873F, 1 ;~ 1C70:0D59
cs=0x1c70;eip=0x000d5e; 	T(MOV(bx, 8));	// 55571 mov     bx, 8 ;~ 1C70:0D5E
cs=0x1c70;eip=0x000d61; 	T(SUB(si, si));	// 55572 sub     si, si ;~ 1C70:0D61
loc_2ba43:
	// 8460 
cs=0x1c70;eip=0x000d63; 	X(PUSH(bx));	// 55575 push    bx ;~ 1C70:0D63
cs=0x1c70;eip=0x000d64; 	T(CMP(*(raddr(ds,bx-0x3753)), 1));	// 55576 cmp     byte ptr [bx-3753h], 1 ;~ 1C70:0D64
cs=0x1c70;eip=0x000d69; 	R(JNZ(loc_2ba61));	// 55577 jnz     short loc_2BA61 ;~ 1C70:0D69
cs=0x1c70;eip=0x000d6b; 	T(MOV(bl, *(raddr(ds,bx-0x38B8))));	// 55578 mov     bl, [bx-38B8h] ;~ 1C70:0D6B
cs=0x1c70;eip=0x000d6f; 	T(CMP(bl, 0x0F));	// 55579 cmp     bl, 0Fh ;~ 1C70:0D6F
cs=0x1c70;eip=0x000d72; 	R(JA(loc_2ba61));	// 55580 ja      short loc_2BA61 ;~ 1C70:0D72
cs=0x1c70;eip=0x000d74; 	T(MOV(al, bl));	// 55581 mov     al, bl ;~ 1C70:0D74
cs=0x1c70;eip=0x000d76; 	T(MOV(ch, *(raddr(ds,bx-0x3743))));	// 55582 mov     ch, [bx-3743h] ;~ 1C70:0D76
cs=0x1c70;eip=0x000d7a; 	T(OR(ch, ch));	// 55583 or      ch, ch ;~ 1C70:0D7A
cs=0x1c70;eip=0x000d7c; 	R(JZ(loc_2ba61));	// 55584 jz      short loc_2BA61 ;~ 1C70:0D7C
cs=0x1c70;eip=0x000d7e; 	R(CALL(sub_2b9c9,0));	// 55585 call    sub_2B9C9 ;~ 1C70:0D7E
loc_2ba61:
	// 8461 
cs=0x1c70;eip=0x000d81; 	X(POP(bx));	// 55589 pop     bx ;~ 1C70:0D81
cs=0x1c70;eip=0x000d82; 	T(DEC(bx));	// 55590 dec     bx ;~ 1C70:0D82
cs=0x1c70;eip=0x000d83; 	R(JNS(loc_2ba43));	// 55591 jns     short loc_2BA43 ;~ 1C70:0D83
cs=0x1c70;eip=0x000d85; 	R(RETN(0));	// 55592 retn ;~ 1C70:0D85
sub_2ba66:
	// 55599 
cs=0x1c70;eip=0x000d86; 	X(PUSH(bx));	// 55601 push    bx ;~ 1C70:0D86
ret_1c70_d87:
	// 8462 
cs=0x1c70;eip=0x000d87; 	X(PUSH(si));	// 55602 push    si ;~ 1C70:0D87
cs=0x1c70;eip=0x000d88; 	T(SHR(cl, 1));	// 55603 shr     cl, 1 ;~ 1C70:0D88
cs=0x1c70;eip=0x000d8a; 	T(SHR(cl, 1));	// 55604 shr     cl, 1 ;~ 1C70:0D8A
cs=0x1c70;eip=0x000d8c; 	T(SHR(cl, 1));	// 55605 shr     cl, 1 ;~ 1C70:0D8C
cs=0x1c70;eip=0x000d8e; 	T(SHR(cl, 1));	// 55606 shr     cl, 1 ;~ 1C70:0D8E
cs=0x1c70;eip=0x000d90; 	T(MOV(al, ch));	// 55607 mov     al, ch ;~ 1C70:0D90
cs=0x1c70;eip=0x000d92; 	T(SUB(ah, ah));	// 55608 sub     ah, ah ;~ 1C70:0D92
cs=0x1c70;eip=0x000d94; 	T(MOV(bl, 0x0C));	// 55609 mov     bl, 0Ch ;~ 1C70:0D94
cs=0x1c70;eip=0x000d96; 	T(DIV1(bl));	// 55610 div     bl ;~ 1C70:0D96
cs=0x1c70;eip=0x000d98; 	T(MOV(bl, ah));	// 55611 mov     bl, ah ;~ 1C70:0D98
cs=0x1c70;eip=0x000d9a; 	T(MOV(ch, al));	// 55612 mov     ch, al ;~ 1C70:0D9A
cs=0x1c70;eip=0x000d9c; 	T(SHL(bx, 1));	// 55613 shl     bx, 1 ;~ 1C70:0D9C
cs=0x1c70;eip=0x000d9e; 	T(MOV(si, word_38758));	// 55614 mov     si, word_38758 ;~ 1C70:0D9E
cs=0x1c70;eip=0x000da2; 	T(MOV(dx, *(dw*)(raddr(ds,bx+si))));	// 55615 mov     dx, [bx+si] ;~ 1C70:0DA2
cs=0x1c70;eip=0x000da4; 	T(MOV(si, word_38756));	// 55616 mov     si, word_38756 ;~ 1C70:0DA4
cs=0x1c70;eip=0x000da8; 	T(MOV(ax, *(dw*)(raddr(ds,bx+si))));	// 55617 mov     ax, [bx+si] ;~ 1C70:0DA8
loc_2ba8a:
	// 8463 
cs=0x1c70;eip=0x000daa; 	T(OR(cl, cl));	// 55620 or      cl, cl ;~ 1C70:0DAA
cs=0x1c70;eip=0x000dac; 	R(JZ(loc_2ba94));	// 55621 jz      short loc_2BA94 ;~ 1C70:0DAC
cs=0x1c70;eip=0x000dae; 	T(ADD(ax, dx));	// 55622 add     ax, dx ;~ 1C70:0DAE
cs=0x1c70;eip=0x000db0; 	T(DEC(cl));	// 55623 dec     cl ;~ 1C70:0DB0
cs=0x1c70;eip=0x000db2; 	R(JMP(loc_2ba8a));	// 55624 jmp     short loc_2BA8A ;~ 1C70:0DB2
loc_2ba94:
	// 8464 
cs=0x1c70;eip=0x000db4; 	T(MOV(cl, ch));	// 55628 mov     cl, ch ;~ 1C70:0DB4
cs=0x1c70;eip=0x000db6; 	X(POP(si));	// 55629 pop     si ;~ 1C70:0DB6
cs=0x1c70;eip=0x000db7; 	X(POP(bx));	// 55630 pop     bx ;~ 1C70:0DB7
cs=0x1c70;eip=0x000db8; 	R(RETN(0));	// 55631 retn ;~ 1C70:0DB8
sub_2ba99:
	// 55639 
#undef arg_0
#define arg_0 6
	// 55641 arg_0           = word ptr  6 ;~ 1C70:0DB9
#undef arg_2
#define arg_2 8
	// 55642 arg_2           = word ptr  8 ;~ 1C70:0DB9
ret_1c70_db9:
	// 8465 
cs=0x1c70;eip=0x000db9; 	X(PUSH(bp));	// 55644 push    bp ;~ 1C70:0DB9
cs=0x1c70;eip=0x000dba; 	T(MOV(bp, sp));	// 55645 mov     bp, sp ;~ 1C70:0DBA
cs=0x1c70;eip=0x000dbc; 	X(PUSH(si));	// 55646 push    si ;~ 1C70:0DBC
cs=0x1c70;eip=0x000dbd; 	X(PUSH(bx));	// 55647 push    bx ;~ 1C70:0DBD
cs=0x1c70;eip=0x000dbe; 	X(PUSH(cx));	// 55648 push    cx ;~ 1C70:0DBE
cs=0x1c70;eip=0x000dbf; 	X(PUSH(dx));	// 55649 push    dx ;~ 1C70:0DBF
cs=0x1c70;eip=0x000dc0; 	T(TEST(byte_38420, 4));	// 55650 test    byte_38420, 4 ;~ 1C70:0DC0
cs=0x1c70;eip=0x000dc5; 	R(JNZ(loc_2baaa));	// 55651 jnz     short loc_2BAAA ;~ 1C70:0DC5
cs=0x1c70;eip=0x000dc7; 	R(JMP(loc_2bb2c));	// 55652 jmp     loc_2BB2C ;~ 1C70:0DC7
loc_2baaa:
	// 8466 
cs=0x1c70;eip=0x000dca; 	X(OR(byte_38421, 4));	// 55656 or      byte_38421, 4 ;~ 1C70:0DCA
cs=0x1c70;eip=0x000dcf; 	T(MOV(dx, 3));	// 55657 mov     dx, 3 ;~ 1C70:0DCF
cs=0x1c70;eip=0x000dd2; 	T(MOV(cx, 8));	// 55658 mov     cx, 8 ;~ 1C70:0DD2
cs=0x1c70;eip=0x000dd5; 	T(SUB(ah, ah));	// 55659 sub     ah, ah ;~ 1C70:0DD5
loc_2bab7:
	// 8467 
cs=0x1c70;eip=0x000dd7; 	T(MOV(bx, cx));	// 55662 mov     bx, cx ;~ 1C70:0DD7
cs=0x1c70;eip=0x000dd9; 	T(MOV(al, *(raddr(ds,bx-0x38B8))));	// 55663 mov     al, [bx-38B8h] ;~ 1C70:0DD9
cs=0x1c70;eip=0x000ddd; 	T(CMP(al, 9));	// 55664 cmp     al, 9 ;~ 1C70:0DDD
cs=0x1c70;eip=0x000ddf; 	R(JC(loc_2bac3));	// 55665 jb      short loc_2BAC3 ;~ 1C70:0DDF
cs=0x1c70;eip=0x000de1; 	R(LOOP(loc_2bab7));	// 55666 loop    loc_2BAB7 ;~ 1C70:0DE1
loc_2bac3:
	// 8468 
cs=0x1c70;eip=0x000de3; 	T(MOV(cx, ax));	// 55669 mov     cx, ax ;~ 1C70:0DE3
cs=0x1c70;eip=0x000de5; 	T(MOV(bx, cx));	// 55670 mov     bx, cx ;~ 1C70:0DE5
cs=0x1c70;eip=0x000de7; 	T(OR(cx, cx));	// 55671 or      cx, cx ;~ 1C70:0DE7
cs=0x1c70;eip=0x000de9; 	R(JZ(loc_2bae7));	// 55672 jz      short loc_2BAE7 ;~ 1C70:0DE9
cs=0x1c70;eip=0x000deb; 	T(CMP(dl, *(raddr(ds,bx-0x3753))));	// 55673 cmp     dl, [bx-3753h] ;~ 1C70:0DEB
cs=0x1c70;eip=0x000def; 	R(JNZ(loc_2bae7));	// 55674 jnz     short loc_2BAE7 ;~ 1C70:0DEF
cs=0x1c70;eip=0x000df1; 	T(DEC(bx));	// 55675 dec     bx ;~ 1C70:0DF1
cs=0x1c70;eip=0x000df2; 	T(DEC(dx));	// 55676 dec     dx ;~ 1C70:0DF2
cs=0x1c70;eip=0x000df3; 	T(CMP(dl, *(raddr(ds,bx-0x3753))));	// 55677 cmp     dl, [bx-3753h] ;~ 1C70:0DF3
cs=0x1c70;eip=0x000df7; 	R(JNZ(loc_2bae7));	// 55678 jnz     short loc_2BAE7 ;~ 1C70:0DF7
cs=0x1c70;eip=0x000df9; 	T(MOV(al, *(raddr(ds,bx-0x3733))));	// 55679 mov     al, [bx-3733h] ;~ 1C70:0DF9
cs=0x1c70;eip=0x000dfd; 	T(MOV(ah, *(raddr(ds,bx-0x3732))));	// 55680 mov     ah, [bx-3732h] ;~ 1C70:0DFD
cs=0x1c70;eip=0x000e01; 	T(CMP(al, ah));	// 55681 cmp     al, ah ;~ 1C70:0E01
cs=0x1c70;eip=0x000e03; 	R(JL(loc_2bae7));	// 55682 jl      short loc_2BAE7 ;~ 1C70:0E03
cs=0x1c70;eip=0x000e05; 	T(INC(bx));	// 55683 inc     bx ;~ 1C70:0E05
cs=0x1c70;eip=0x000e06; 	T(INC(dx));	// 55684 inc     dx ;~ 1C70:0E06
loc_2bae7:
	// 8469 
cs=0x1c70;eip=0x000e07; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 55688 mov     ax, [bp+arg_2] ;~ 1C70:0E07
cs=0x1c70;eip=0x000e0a; 	T(CMP(*(raddr(ds,bx-0x3733)), al));	// 55689 cmp     [bx-3733h], al ;~ 1C70:0E0A
cs=0x1c70;eip=0x000e0e; 	R(JG(loc_2bb2c));	// 55690 jg      short loc_2BB2C ;~ 1C70:0E0E
cs=0x1c70;eip=0x000e10; 	T(MOV(si, bx));	// 55691 mov     si, bx ;~ 1C70:0E10
cs=0x1c70;eip=0x000e12; 	T(SHL(si, 1));	// 55692 shl     si, 1 ;~ 1C70:0E12
cs=0x1c70;eip=0x000e14; 	X(MOV(byte_387cd, 1));	// 55693 mov     byte_387CD, 1 ;~ 1C70:0E14
cs=0x1c70;eip=0x000e19; 	T(MOV(ch, *(raddr(ds,bx-0x3743))));	// 55694 mov     ch, [bx-3743h] ;~ 1C70:0E19
cs=0x1c70;eip=0x000e1d; 	R(CALL(__dispatch_call,off_38748));	// 55695 call    off_38748 ;~ 1C70:0E1D
cs=0x1c70;eip=0x000e21; 	X(MOV(byte_387cd, 0));	// 55696 mov     byte_387CD, 0 ;~ 1C70:0E21
cs=0x1c70;eip=0x000e26; 	X(MOV(*(raddr(ds,bx-0x3753)), dl));	// 55697 mov     [bx-3753h], dl ;~ 1C70:0E26
cs=0x1c70;eip=0x000e2a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 55698 mov     ax, [bp+arg_2] ;~ 1C70:0E2A
cs=0x1c70;eip=0x000e2d; 	X(MOV(*(raddr(ds,bx-0x3733)), al));	// 55699 mov     [bx-3733h], al ;~ 1C70:0E2D
cs=0x1c70;eip=0x000e31; 	T(MOV(si, dx));	// 55700 mov     si, dx ;~ 1C70:0E31
cs=0x1c70;eip=0x000e33; 	T(DEC(si));	// 55701 dec     si ;~ 1C70:0E33
cs=0x1c70;eip=0x000e34; 	X(MOV(*(raddr(ds,si-0x34C5)), bl));	// 55702 mov     [si-34C5h], bl ;~ 1C70:0E34
cs=0x1c70;eip=0x000e38; 	T(SHL(si, 1));	// 55703 shl     si, 1 ;~ 1C70:0E38
cs=0x1c70;eip=0x000e3a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 55704 mov     ax, [bp+arg_0] ;~ 1C70:0E3A
cs=0x1c70;eip=0x000e3d; 	X(MOV(*(dw*)(raddr(ds,si-0x34D7)), ax));	// 55705 mov     [si-34D7h], ax ;~ 1C70:0E3D
cs=0x1c70;eip=0x000e41; 	T(MOV(ax, 1));	// 55706 mov     ax, 1 ;~ 1C70:0E41
cs=0x1c70;eip=0x000e44; 	X(MOV(*(dw*)(raddr(ds,si-0x34DD)), ax));	// 55707 mov     [si-34DDh], ax ;~ 1C70:0E44
cs=0x1c70;eip=0x000e48; 	T(MOV(ax, bx));	// 55708 mov     ax, bx ;~ 1C70:0E48
cs=0x1c70;eip=0x000e4a; 	R(JMP(loc_2bb2f));	// 55709 jmp     short loc_2BB2F ;~ 1C70:0E4A
loc_2bb2c:
	// 8470 
cs=0x1c70;eip=0x000e4c; 	T(MOV(ax, 0x0FFFF));	// 55714 mov     ax, 0FFFFh ;~ 1C70:0E4C
loc_2bb2f:
	// 8471 
cs=0x1c70;eip=0x000e4f; 	X(POP(dx));	// 55717 pop     dx ;~ 1C70:0E4F
cs=0x1c70;eip=0x000e50; 	X(POP(cx));	// 55718 pop     cx ;~ 1C70:0E50
cs=0x1c70;eip=0x000e51; 	X(POP(bx));	// 55719 pop     bx ;~ 1C70:0E51
cs=0x1c70;eip=0x000e52; 	X(POP(si));	// 55720 pop     si ;~ 1C70:0E52
cs=0x1c70;eip=0x000e53; 	X(POP(bp));	// 55721 pop     bp ;~ 1C70:0E53
cs=0x1c70;eip=0x000e54; 	R(RETF(0));	// 55722 retf ;~ 1C70:0E54
sub_2bb35:
	// 55729 
cs=0x1c70;eip=0x000e55; 	T(TEST(byte_38420, 4));	// 55731 test    byte_38420, 4 ;~ 1C70:0E55
ret_1c70_e5a:
	// 8472 
cs=0x1c70;eip=0x000e5a; 	R(JZ(locret_2bb8a));	// 55732 jz      short locret_2BB8A ;~ 1C70:0E5A
cs=0x1c70;eip=0x000e5c; 	T(MOV(bx, 2));	// 55733 mov     bx, 2 ;~ 1C70:0E5C
loc_2bb3f:
	// 8473 
cs=0x1c70;eip=0x000e5f; 	T(MOV(al, *(raddr(ds,bx-0x34C5))));	// 55736 mov     al, [bx-34C5h] ;~ 1C70:0E5F
cs=0x1c70;eip=0x000e63; 	T(CMP(al, 0x0FF));	// 55737 cmp     al, 0FFh ;~ 1C70:0E63
cs=0x1c70;eip=0x000e65; 	R(JZ(loc_2bb81));	// 55738 jz      short loc_2BB81 ;~ 1C70:0E65
cs=0x1c70;eip=0x000e67; 	T(MOV(si, bx));	// 55739 mov     si, bx ;~ 1C70:0E67
cs=0x1c70;eip=0x000e69; 	T(SHL(si, 1));	// 55740 shl     si, 1 ;~ 1C70:0E69
cs=0x1c70;eip=0x000e6b; 	T(MOV(di, *(dw*)(raddr(ds,si-0x34D7))));	// 55741 mov     di, [si-34D7h] ;~ 1C70:0E6B
cs=0x1c70;eip=0x000e6f; 	T(OR(di, di));	// 55742 or      di, di ;~ 1C70:0E6F
cs=0x1c70;eip=0x000e71; 	R(JZ(loc_2bb81));	// 55743 jz      short loc_2BB81 ;~ 1C70:0E71
cs=0x1c70;eip=0x000e73; 	T(MOV(ax, *(dw*)(raddr(ds,si-0x34DD))));	// 55744 mov     ax, [si-34DDh] ;~ 1C70:0E73
cs=0x1c70;eip=0x000e77; 	T(OR(ax, ax));	// 55745 or      ax, ax ;~ 1C70:0E77
cs=0x1c70;eip=0x000e79; 	R(JZ(loc_2bb62));	// 55746 jz      short loc_2BB62 ;~ 1C70:0E79
cs=0x1c70;eip=0x000e7b; 	T(DEC(ax));	// 55747 dec     ax ;~ 1C70:0E7B
cs=0x1c70;eip=0x000e7c; 	X(MOV(*(dw*)(raddr(ds,si-0x34DD)), ax));	// 55748 mov     [si-34DDh], ax ;~ 1C70:0E7C
cs=0x1c70;eip=0x000e80; 	R(JMP(loc_2bb81));	// 55749 jmp     short loc_2BB81 ;~ 1C70:0E80
loc_2bb62:
	// 8474 
cs=0x1c70;eip=0x000e82; 	T(MOV(dx, *(dw*)(raddr(ds,di))));	// 55753 mov     dx, [di] ;~ 1C70:0E82
cs=0x1c70;eip=0x000e84; 	T(CMP(dx, 0x0C));	// 55754 cmp     dx, 0Ch ;~ 1C70:0E84
cs=0x1c70;eip=0x000e87; 	R(JLE(loc_2bb6c));	// 55755 jle     short loc_2BB6C ;~ 1C70:0E87
cs=0x1c70;eip=0x000e89; 	T(MOV(dx, 9));	// 55756 mov     dx, 9 ;~ 1C70:0E89
loc_2bb6c:
	// 8475 
cs=0x1c70;eip=0x000e8c; 	T(ADD(di, 2));	// 55759 add     di, 2 ;~ 1C70:0E8C
cs=0x1c70;eip=0x000e8f; 	T(SHL(dx, 1));	// 55760 shl     dx, 1 ;~ 1C70:0E8F
cs=0x1c70;eip=0x000e91; 	X(PUSH(si));	// 55761 push    si ;~ 1C70:0E91
cs=0x1c70;eip=0x000e92; 	T(MOV(si, dx));	// 55762 mov     si, dx ;~ 1C70:0E92
cs=0x1c70;eip=0x000e94; 	T(MOV(dx, *(dw*)(raddr(ds,si-0x34C4))));	// 55763 mov     dx, [si-34C4h] ;~ 1C70:0E94
cs=0x1c70;eip=0x000e98; 	X(POP(si));	// 55764 pop     si ;~ 1C70:0E98
cs=0x1c70;eip=0x000e99; 	X(MOV(word_387ce, dx));	// 55765 mov     word_387CE, dx ;~ 1C70:0E99
cs=0x1c70;eip=0x000e9d; 	R(CALL(__dispatch_call,word_387ce));	// 55766 call    word_387CE ;~ 1C70:0E9D
loc_2bb81:
	// 8476 
cs=0x1c70;eip=0x000ea1; 	X(MOV(*(dw*)(raddr(ds,si-0x34D7)), di));	// 55770 mov     [si-34D7h], di ;~ 1C70:0EA1
cs=0x1c70;eip=0x000ea5; 	T(DEC(bx));	// 55771 dec     bx ;~ 1C70:0EA5
cs=0x1c70;eip=0x000ea6; 	R(JS(locret_2bb8a));	// 55772 js      short locret_2BB8A ;~ 1C70:0EA6
cs=0x1c70;eip=0x000ea8; 	R(JMP(loc_2bb3f));	// 55773 jmp     short loc_2BB3F ;~ 1C70:0EA8
locret_2bb8a:
	// 8477 
cs=0x1c70;eip=0x000eaa; 	R(RETN(0));	// 55778 retn ;~ 1C70:0EAA
sub_2bc6d:
	// 55901 
cs=0x1c70;eip=0x000f8d; 	T(SUB(ax, ax));	// 55902 sub     ax, ax ;~ 1C70:0F8D
ret_1c70_f8f:
	// 8495 
cs=0x1c70;eip=0x000f8f; 	X(MOV(*(dw*)(raddr(ds,si-0x34D1)), ax));	// 55903 mov     [si-34D1h], ax ;~ 1C70:0F8F
cs=0x1c70;eip=0x000f93; 	X(MOV(*(dw*)(raddr(ds,si-0x34CB)), ax));	// 55904 mov     [si-34CBh], ax ;~ 1C70:0F93
cs=0x1c70;eip=0x000f97; 	X(MOV(*(dw*)(raddr(ds,si-0x34FB)), ax));	// 55905 mov     [si-34FBh], ax ;~ 1C70:0F97
cs=0x1c70;eip=0x000f9b; 	X(MOV(*(dw*)(raddr(ds,si-0x34E9)), ax));	// 55906 mov     [si-34E9h], ax ;~ 1C70:0F9B
cs=0x1c70;eip=0x000f9f; 	X(MOV(*(dw*)(raddr(ds,si-0x34F5)), ax));	// 55907 mov     [si-34F5h], ax ;~ 1C70:0F9F
cs=0x1c70;eip=0x000fa3; 	X(MOV(*(dw*)(raddr(ds,si-0x34E3)), ax));	// 55908 mov     [si-34E3h], ax ;~ 1C70:0FA3
cs=0x1c70;eip=0x000fa7; 	T(INC(ax));	// 55909 inc     ax ;~ 1C70:0FA7
cs=0x1c70;eip=0x000fa8; 	X(MOV(*(dw*)(raddr(ds,si-0x34EF)), ax));	// 55910 mov     [si-34EFh], ax ;~ 1C70:0FA8
cs=0x1c70;eip=0x000fac; 	X(MOV(*(dw*)(raddr(ds,si-0x34DD)), ax));	// 55911 mov     [si-34DDh], ax ;~ 1C70:0FAC
cs=0x1c70;eip=0x000fb0; 	R(RETN(0));	// 55912 retn ;~ 1C70:0FB0
sub_2bcde:
	// 55961 
#undef arg_0
#define arg_0 6
	// 55963 arg_0           = byte ptr  6 ;~ 1C70:0FFE
ret_1c70_ffe:
	// 8500 
cs=0x1c70;eip=0x000ffe; 	X(PUSH(bp));	// 55965 push    bp ;~ 1C70:0FFE
cs=0x1c70;eip=0x000fff; 	T(MOV(bp, sp));	// 55966 mov     bp, sp ;~ 1C70:0FFF
cs=0x1c70;eip=0x001001; 	R(CALL(sub_2af5d,0));	// 55967 call    sub_2AF5D ;~ 1C70:1001
cs=0x1c70;eip=0x001004; 	T(MOV(bx, 0));	// 55968 mov     bx, 0 ;~ 1C70:1004
cs=0x1c70;eip=0x001007; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 55969 mov     al, [bp+arg_0] ;~ 1C70:1007
cs=0x1c70;eip=0x00100a; 	T(TEST(al, 0x80));	// 55970 test    al, 80h ;~ 1C70:100A
cs=0x1c70;eip=0x00100c; 	R(JZ(loc_2bd04));	// 55971 jz      short loc_2BD04 ;~ 1C70:100C
cs=0x1c70;eip=0x00100e; 	R(CALL(sub_2b30c,0));	// 55972 call    sub_2B30C ;~ 1C70:100E
cs=0x1c70;eip=0x001011; 	T(OR(ax, ax));	// 55973 or      ax, ax ;~ 1C70:1011
cs=0x1c70;eip=0x001013; 	R(JZ(loc_2bd45));	// 55974 jz      short loc_2BD45 ;~ 1C70:1013
cs=0x1c70;eip=0x001015; 	T(MOV(ax, 1));	// 55975 mov     ax, 1 ;~ 1C70:1015
cs=0x1c70;eip=0x001018; 	R(CALL(sub_2b472,0));	// 55976 call    sub_2B472 ;~ 1C70:1018
cs=0x1c70;eip=0x00101b; 	T(OR(ax, ax));	// 55977 or      ax, ax ;~ 1C70:101B
cs=0x1c70;eip=0x00101d; 	R(JZ(loc_2bd45));	// 55978 jz      short loc_2BD45 ;~ 1C70:101D
cs=0x1c70;eip=0x00101f; 	T(MOV(bx, 4));	// 55979 mov     bx, 4 ;~ 1C70:101F
cs=0x1c70;eip=0x001022; 	R(JMP(loc_2bd45));	// 55980 jmp     short loc_2BD45 ;~ 1C70:1022
loc_2bd04:
	// 8501 
cs=0x1c70;eip=0x001024; 	T(CMP(al, 4));	// 55984 cmp     al, 4 ;~ 1C70:1024
cs=0x1c70;eip=0x001026; 	R(JNZ(loc_2bd1d));	// 55985 jnz     short loc_2BD1D ;~ 1C70:1026
cs=0x1c70;eip=0x001028; 	R(CALLF(sub_2bda8,0));	// 55986 call    sub_2BDA8 ;~ 1C70:1028
cs=0x1c70;eip=0x00102d; 	T(OR(ax, ax));	// 55987 or      ax, ax ;~ 1C70:102D
cs=0x1c70;eip=0x00102f; 	R(JZ(loc_2bd45));	// 55988 jz      short loc_2BD45 ;~ 1C70:102F
cs=0x1c70;eip=0x001031; 	R(CALL(sub_2b6cd,0));	// 55989 call    sub_2B6CD ;~ 1C70:1031
cs=0x1c70;eip=0x001034; 	T(OR(ax, ax));	// 55990 or      ax, ax ;~ 1C70:1034
cs=0x1c70;eip=0x001036; 	R(JZ(loc_2bd45));	// 55991 jz      short loc_2BD45 ;~ 1C70:1036
cs=0x1c70;eip=0x001038; 	T(MOV(bx, 3));	// 55992 mov     bx, 3 ;~ 1C70:1038
cs=0x1c70;eip=0x00103b; 	R(JMP(loc_2bd45));	// 55993 jmp     short loc_2BD45 ;~ 1C70:103B
loc_2bd1d:
	// 8502 
cs=0x1c70;eip=0x00103d; 	T(CMP(al, 2));	// 55997 cmp     al, 2 ;~ 1C70:103D
cs=0x1c70;eip=0x00103f; 	R(JNZ(loc_2bd36));	// 55998 jnz     short loc_2BD36 ;~ 1C70:103F
cs=0x1c70;eip=0x001041; 	R(CALL(sub_2b6f8,0));	// 55999 call    sub_2B6F8 ;~ 1C70:1041
cs=0x1c70;eip=0x001044; 	T(OR(ax, ax));	// 56000 or      ax, ax ;~ 1C70:1044
cs=0x1c70;eip=0x001046; 	R(JZ(loc_2bd45));	// 56001 jz      short loc_2BD45 ;~ 1C70:1046
cs=0x1c70;eip=0x001048; 	R(CALL(sub_2b83f,0));	// 56002 call    sub_2B83F ;~ 1C70:1048
cs=0x1c70;eip=0x00104b; 	T(MOV(cx, 5));	// 56003 mov     cx, 5 ;~ 1C70:104B
cs=0x1c70;eip=0x00104e; 	R(CALL(sub_2af52,0));	// 56004 call    sub_2AF52 ;~ 1C70:104E
cs=0x1c70;eip=0x001051; 	T(MOV(bx, 2));	// 56005 mov     bx, 2 ;~ 1C70:1051
cs=0x1c70;eip=0x001054; 	R(JMP(loc_2bd45));	// 56006 jmp     short loc_2BD45 ;~ 1C70:1054
loc_2bd36:
	// 8503 
cs=0x1c70;eip=0x001056; 	T(CMP(al, 1));	// 56010 cmp     al, 1 ;~ 1C70:1056
cs=0x1c70;eip=0x001058; 	R(JNZ(loc_2bd45));	// 56011 jnz     short loc_2BD45 ;~ 1C70:1058
cs=0x1c70;eip=0x00105a; 	T(MOV(cx, 2));	// 56012 mov     cx, 2 ;~ 1C70:105A
cs=0x1c70;eip=0x00105d; 	R(CALL(sub_2af52,0));	// 56013 call    sub_2AF52 ;~ 1C70:105D
cs=0x1c70;eip=0x001060; 	T(MOV(bx, 1));	// 56014 mov     bx, 1 ;~ 1C70:1060
cs=0x1c70;eip=0x001063; 	R(
);	// 56015 jmp     short $+2 ;~ 1C70:1063
loc_2bd45:
	// 8504 
cs=0x1c70;eip=0x001065; 	R(CALL(sub_2af85,0));	// 56020 call    sub_2AF85 ;~ 1C70:1065
cs=0x1c70;eip=0x001068; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 56021 mov     al, [bp+arg_0] ;~ 1C70:1068
cs=0x1c70;eip=0x00106b; 	X(OR(byte_38420, 4));	// 56022 or      byte_38420, 4 ;~ 1C70:106B
cs=0x1c70;eip=0x001070; 	X(POP(bp));	// 56023 pop     bp ;~ 1C70:1070
cs=0x1c70;eip=0x001071; 	R(RETF(0));	// 56024 retf ;~ 1C70:1071
sub_2bd52:
	// 56031 
cs=0x1c70;eip=0x001072; 	X(PUSH(ax));	// 56033 push    ax ;~ 1C70:1072
ret_1c70_1073:
	// 8505 
cs=0x1c70;eip=0x001073; 	X(PUSH(bx));	// 56034 push    bx ;~ 1C70:1073
cs=0x1c70;eip=0x001074; 	X(PUSH(cx));	// 56035 push    cx ;~ 1C70:1074
cs=0x1c70;eip=0x001075; 	X(PUSH(dx));	// 56036 push    dx ;~ 1C70:1075
cs=0x1c70;eip=0x001076; 	X(PUSH(es));	// 56037 push    es ;~ 1C70:1076
cs=0x1c70;eip=0x001077; 	X(PUSH(di));	// 56038 push    di ;~ 1C70:1077
cs=0x1c70;eip=0x001078; 	X(AND(byte_38421, 0x0FB));	// 56039 and     byte_38421, 0FBh ;~ 1C70:1078
cs=0x1c70;eip=0x00107d; 	T(MOV(cx, 2));	// 56040 mov     cx, 2 ;~ 1C70:107D
loc_2bd60:
	// 8506 
cs=0x1c70;eip=0x001080; 	T(MOV(bx, cx));	// 56043 mov     bx, cx ;~ 1C70:1080
cs=0x1c70;eip=0x001082; 	T(MOV(al, *(raddr(ds,bx-0x34C5))));	// 56044 mov     al, [bx-34C5h] ;~ 1C70:1082
cs=0x1c70;eip=0x001086; 	T(SUB(ah, ah));	// 56045 sub     ah, ah ;~ 1C70:1086
cs=0x1c70;eip=0x001088; 	X(PUSH(ax));	// 56046 push    ax ;~ 1C70:1088
cs=0x1c70;eip=0x001089; 	R(CALLF(sub_2adcc,0));	// 56047 call    sub_2ADCC ;~ 1C70:1089
cs=0x1c70;eip=0x00108e; 	T(ADD(sp, 2));	// 56048 add     sp, 2 ;~ 1C70:108E
cs=0x1c70;eip=0x001091; 	T(DEC(cx));	// 56049 dec     cx ;~ 1C70:1091
cs=0x1c70;eip=0x001092; 	R(JNS(loc_2bd60));	// 56050 jns     short loc_2BD60 ;~ 1C70:1092
cs=0x1c70;eip=0x001094; 	X(POP(di));	// 56051 pop     di ;~ 1C70:1094
cs=0x1c70;eip=0x001095; 	X(POP(es));	// 56052 pop     es ;~ 1C70:1095
cs=0x1c70;eip=0x001096; 	X(POP(dx));	// 56053 pop     dx ;~ 1C70:1096
cs=0x1c70;eip=0x001097; 	X(POP(cx));	// 56054 pop     cx ;~ 1C70:1097
cs=0x1c70;eip=0x001098; 	X(POP(bx));	// 56055 pop     bx ;~ 1C70:1098
cs=0x1c70;eip=0x001099; 	X(POP(ax));	// 56056 pop     ax ;~ 1C70:1099
cs=0x1c70;eip=0x00109a; 	R(RETF(0));	// 56057 retf ;~ 1C70:109A

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_2acf1: 	goto loc_2acf1;
        case m2c::kloc_2ad23: 	goto loc_2ad23;
        case m2c::kloc_2ad6d: 	goto loc_2ad6d;
        case m2c::kloc_2ad70: 	goto loc_2ad70;
        case m2c::kloc_2ad8d: 	goto loc_2ad8d;
        case m2c::kloc_2ada6: 	goto loc_2ada6;
        case m2c::kloc_2adb4: 	goto loc_2adb4;
        case m2c::kloc_2adc6: 	goto loc_2adc6;
        case m2c::kloc_2ae2a: 	goto loc_2ae2a;
        case m2c::kloc_2ae38: 	goto loc_2ae38;
        case m2c::kloc_2ae56: 	goto loc_2ae56;
        case m2c::kloc_2ae5f: 	goto loc_2ae5f;
        case m2c::kloc_2ae91: 	goto loc_2ae91;
        case m2c::kloc_2aee8: 	goto loc_2aee8;
        case m2c::kloc_2af02: 	goto loc_2af02;
        case m2c::kloc_2af1c: 	goto loc_2af1c;
        case m2c::kloc_2af2c: 	goto loc_2af2c;
        case m2c::kloc_2af41: 	goto loc_2af41;
        case m2c::kloc_2af53: 	goto loc_2af53;
        case m2c::kloc_2affd: 	goto loc_2affd;
        case m2c::kloc_2b00a: 	goto loc_2b00a;
        case m2c::kloc_2b00d: 	goto loc_2b00d;
        case m2c::kloc_2b035: 	goto loc_2b035;
        case m2c::kloc_2b03b: 	goto loc_2b03b;
        case m2c::kloc_2b088: 	goto loc_2b088;
        case m2c::kloc_2b08e: 	goto loc_2b08e;
        case m2c::kloc_2b092: 	goto loc_2b092;
        case m2c::kloc_2b0c9: 	goto loc_2b0c9;
        case m2c::kloc_2b0e3: 	goto loc_2b0e3;
        case m2c::kloc_2b0f7: 	goto loc_2b0f7;
        case m2c::kloc_2b0fb: 	goto loc_2b0fb;
        case m2c::kloc_2b15d: 	goto loc_2b15d;
        case m2c::kloc_2b160: 	goto loc_2b160;
        case m2c::kloc_2b164: 	goto loc_2b164;
        case m2c::kloc_2b1a8: 	goto loc_2b1a8;
        case m2c::kloc_2b1b8: 	goto loc_2b1b8;
        case m2c::kloc_2b1be: 	goto loc_2b1be;
        case m2c::kloc_2b1ef: 	goto loc_2b1ef;
        case m2c::kloc_2b1f1: 	goto loc_2b1f1;
        case m2c::kloc_2b205: 	goto loc_2b205;
        case m2c::kloc_2b207: 	goto loc_2b207;
        case m2c::kloc_2b22f: 	goto loc_2b22f;
        case m2c::kloc_2b240: 	goto loc_2b240;
        case m2c::kloc_2b25d: 	goto loc_2b25d;
        case m2c::kloc_2b261: 	goto loc_2b261;
        case m2c::kloc_2b26c: 	goto loc_2b26c;
        case m2c::kloc_2b2ea: 	goto loc_2b2ea;
        case m2c::kloc_2b2ff: 	goto loc_2b2ff;
        case m2c::kloc_2b302: 	goto loc_2b302;
        case m2c::kloc_2b308: 	goto loc_2b308;
        case m2c::kloc_2b355: 	goto loc_2b355;
        case m2c::kloc_2b381: 	goto loc_2b381;
        case m2c::kloc_2b39b: 	goto loc_2b39b;
        case m2c::kloc_2b3df: 	goto loc_2b3df;
        case m2c::kloc_2b403: 	goto loc_2b403;
        case m2c::kloc_2b41b: 	goto loc_2b41b;
        case m2c::kloc_2b425: 	goto loc_2b425;
        case m2c::kloc_2b430: 	goto loc_2b430;
        case m2c::kloc_2b438: 	goto loc_2b438;
        case m2c::kloc_2b441: 	goto loc_2b441;
        case m2c::kloc_2b447: 	goto loc_2b447;
        case m2c::kloc_2b449: 	goto loc_2b449;
        case m2c::kloc_2b44a: 	goto loc_2b44a;
        case m2c::kloc_2b457: 	goto loc_2b457;
        case m2c::kloc_2b460: 	goto loc_2b460;
        case m2c::kloc_2b464: 	goto loc_2b464;
        case m2c::kloc_2b48b: 	goto loc_2b48b;
        case m2c::kloc_2b4ab: 	goto loc_2b4ab;
        case m2c::kloc_2b4b2: 	goto loc_2b4b2;
        case m2c::kloc_2b4ed: 	goto loc_2b4ed;
        case m2c::kloc_2b509: 	goto loc_2b509;
        case m2c::kloc_2b513: 	goto loc_2b513;
        case m2c::kloc_2b549: 	goto loc_2b549;
        case m2c::kloc_2b556: 	goto loc_2b556;
        case m2c::kloc_2b55f: 	goto loc_2b55f;
        case m2c::kloc_2b59f: 	goto loc_2b59f;
        case m2c::kloc_2b5b4: 	goto loc_2b5b4;
        case m2c::kloc_2b5bb: 	goto loc_2b5bb;
        case m2c::kloc_2b5c1: 	goto loc_2b5c1;
        case m2c::kloc_2b5d2: 	goto loc_2b5d2;
        case m2c::kloc_2b5d9: 	goto loc_2b5d9;
        case m2c::kloc_2b5f7: 	goto loc_2b5f7;
        case m2c::kloc_2b607: 	goto loc_2b607;
        case m2c::kloc_2b644: 	goto loc_2b644;
        case m2c::kloc_2b647: 	goto loc_2b647;
        case m2c::kloc_2b64a: 	goto loc_2b64a;
        case m2c::kloc_2b67a: 	goto loc_2b67a;
        case m2c::kloc_2b698: 	goto loc_2b698;
        case m2c::kloc_2b6a0: 	goto loc_2b6a0;
        case m2c::kloc_2b6a7: 	goto loc_2b6a7;
        case m2c::kloc_2b6dd: 	goto loc_2b6dd;
        case m2c::kloc_2b6f3: 	goto loc_2b6f3;
        case m2c::kloc_2b71b: 	goto loc_2b71b;
        case m2c::kloc_2b728: 	goto loc_2b728;
        case m2c::kloc_2b733: 	goto loc_2b733;
        case m2c::kloc_2b736: 	goto loc_2b736;
        case m2c::kloc_2b745: 	goto loc_2b745;
        case m2c::kloc_2b74c: 	goto loc_2b74c;
        case m2c::kloc_2b772: 	goto loc_2b772;
        case m2c::kloc_2b79a: 	goto loc_2b79a;
        case m2c::kloc_2b7bb: 	goto loc_2b7bb;
        case m2c::kloc_2b7e6: 	goto loc_2b7e6;
        case m2c::kloc_2b7e9: 	goto loc_2b7e9;
        case m2c::kloc_2b7fc: 	goto loc_2b7fc;
        case m2c::kloc_2b803: 	goto loc_2b803;
        case m2c::kloc_2b810: 	goto loc_2b810;
        case m2c::kloc_2b81e: 	goto loc_2b81e;
        case m2c::kloc_2b83b: 	goto loc_2b83b;
        case m2c::kloc_2b844: 	goto loc_2b844;
        case m2c::kloc_2b846: 	goto loc_2b846;
        case m2c::kloc_2b87d: 	goto loc_2b87d;
        case m2c::kloc_2b884: 	goto loc_2b884;
        case m2c::kloc_2b8a5: 	goto loc_2b8a5;
        case m2c::kloc_2b8c7: 	goto loc_2b8c7;
        case m2c::kloc_2b8ce: 	goto loc_2b8ce;
        case m2c::kloc_2b8db: 	goto loc_2b8db;
        case m2c::kloc_2b8ec: 	goto loc_2b8ec;
        case m2c::kloc_2b904: 	goto loc_2b904;
        case m2c::kloc_2b90b: 	goto loc_2b90b;
        case m2c::kloc_2b910: 	goto loc_2b910;
        case m2c::kloc_2b917: 	goto loc_2b917;
        case m2c::kloc_2b942: 	goto loc_2b942;
        case m2c::kloc_2b954: 	goto loc_2b954;
        case m2c::kloc_2b95d: 	goto loc_2b95d;
        case m2c::kloc_2b985: 	goto loc_2b985;
        case m2c::kloc_2b98c: 	goto loc_2b98c;
        case m2c::kloc_2b999: 	goto loc_2b999;
        case m2c::kloc_2b9ae: 	goto loc_2b9ae;
        case m2c::kloc_2b9b6: 	goto loc_2b9b6;
        case m2c::kloc_2b9ec: 	goto loc_2b9ec;
        case m2c::kloc_2b9f8: 	goto loc_2b9f8;
        case m2c::kloc_2b9ff: 	goto loc_2b9ff;
        case m2c::kloc_2ba11: 	goto loc_2ba11;
        case m2c::kloc_2ba20: 	goto loc_2ba20;
        case m2c::kloc_2ba36: 	goto loc_2ba36;
        case m2c::kloc_2ba39: 	goto loc_2ba39;
        case m2c::kloc_2ba43: 	goto loc_2ba43;
        case m2c::kloc_2ba61: 	goto loc_2ba61;
        case m2c::kloc_2ba8a: 	goto loc_2ba8a;
        case m2c::kloc_2ba94: 	goto loc_2ba94;
        case m2c::kloc_2baaa: 	goto loc_2baaa;
        case m2c::kloc_2bab7: 	goto loc_2bab7;
        case m2c::kloc_2bac3: 	goto loc_2bac3;
        case m2c::kloc_2bae7: 	goto loc_2bae7;
        case m2c::kloc_2bb2c: 	goto loc_2bb2c;
        case m2c::kloc_2bb2f: 	goto loc_2bb2f;
        case m2c::kloc_2bb3f: 	goto loc_2bb3f;
        case m2c::kloc_2bb62: 	goto loc_2bb62;
        case m2c::kloc_2bb6c: 	goto loc_2bb6c;
        case m2c::kloc_2bb81: 	goto loc_2bb81;
        case m2c::kloc_2bb96: 	goto loc_2bb96;
        case m2c::kloc_2bbff: 	goto loc_2bbff;
        case m2c::kloc_2bc18: 	goto loc_2bc18;
        case m2c::kloc_2bc2c: 	goto loc_2bc2c;
        case m2c::kloc_2bc3a: 	goto loc_2bc3a;
        case m2c::kloc_2bc3f: 	goto loc_2bc3f;
        case m2c::kloc_2bc47: 	goto loc_2bc47;
        case m2c::kloc_2bc58: 	goto loc_2bc58;
        case m2c::kloc_2bcb9: 	goto loc_2bcb9;
        case m2c::kloc_2bcd9: 	goto loc_2bcd9;
        case m2c::kloc_2bd04: 	goto loc_2bd04;
        case m2c::kloc_2bd1d: 	goto loc_2bd1d;
        case m2c::kloc_2bd36: 	goto loc_2bd36;
        case m2c::kloc_2bd45: 	goto loc_2bd45;
        case m2c::kloc_2bd60: 	goto loc_2bd60;
        case m2c::klocret_2aeab: 	goto locret_2aeab;
        case m2c::klocret_2afd9: 	goto locret_2afd9;
        case m2c::klocret_2b1bd: 	goto locret_2b1bd;
        case m2c::klocret_2b1c7: 	goto locret_2b1c7;
        case m2c::klocret_2b215: 	goto locret_2b215;
        case m2c::klocret_2b270: 	goto locret_2b270;
        case m2c::klocret_2b285: 	goto locret_2b285;
        case m2c::klocret_2b293: 	goto locret_2b293;
        case m2c::klocret_2b29e: 	goto locret_2b29e;
        case m2c::klocret_2b2be: 	goto locret_2b2be;
        case m2c::klocret_2bb8a: 	goto locret_2bb8a;
        case m2c::klocret_2bc4f: 	goto locret_2bc4f;
        case m2c::knullsub_3: 	goto nullsub_3;
        case m2c::kret_1c70_1073: 	goto ret_1c70_1073;
        case m2c::kret_1c70_152: 	goto ret_1c70_152;
        case m2c::kret_1c70_186: 	goto ret_1c70_186;
        case m2c::kret_1c70_1b6: 	goto ret_1c70_1b6;
        case m2c::kret_1c70_1bc: 	goto ret_1c70_1bc;
        case m2c::kret_1c70_1cc: 	goto ret_1c70_1cc;
        case m2c::kret_1c70_27e: 	goto ret_1c70_27e;
        case m2c::kret_1c70_2a9: 	goto ret_1c70_2a9;
        case m2c::kret_1c70_2fb: 	goto ret_1c70_2fb;
        case m2c::kret_1c70_3ba: 	goto ret_1c70_3ba;
        case m2c::kret_1c70_3d7: 	goto ret_1c70_3d7;
        case m2c::kret_1c70_490: 	goto ret_1c70_490;
        case m2c::kret_1c70_4e8: 	goto ret_1c70_4e8;
        case m2c::kret_1c70_536: 	goto ret_1c70_536;
        case m2c::kret_1c70_591: 	goto ret_1c70_591;
        case m2c::kret_1c70_5a6: 	goto ret_1c70_5a6;
        case m2c::kret_1c70_5b4: 	goto ret_1c70_5b4;
        case m2c::kret_1c70_5bf: 	goto ret_1c70_5bf;
        case m2c::kret_1c70_5ca: 	goto ret_1c70_5ca;
        case m2c::kret_1c70_5e0: 	goto ret_1c70_5e0;
        case m2c::kret_1c70_62e: 	goto ret_1c70_62e;
        case m2c::kret_1c70_637: 	goto ret_1c70_637;
        case m2c::kret_1c70_650: 	goto ret_1c70_650;
        case m2c::kret_1c70_6a3: 	goto ret_1c70_6a3;
        case m2c::kret_1c70_7: 	goto ret_1c70_7;
        case m2c::kret_1c70_704: 	goto ret_1c70_704;
        case m2c::kret_1c70_73e: 	goto ret_1c70_73e;
        case m2c::kret_1c70_76e: 	goto ret_1c70_76e;
        case m2c::kret_1c70_787: 	goto ret_1c70_787;
        case m2c::kret_1c70_793: 	goto ret_1c70_793;
        case m2c::kret_1c70_7ae: 	goto ret_1c70_7ae;
        case m2c::kret_1c70_7e0: 	goto ret_1c70_7e0;
        case m2c::kret_1c70_86f: 	goto ret_1c70_86f;
        case m2c::kret_1c70_885: 	goto ret_1c70_885;
        case m2c::kret_1c70_8c2: 	goto ret_1c70_8c2;
        case m2c::kret_1c70_92b: 	goto ret_1c70_92b;
        case m2c::kret_1c70_9a1: 	goto ret_1c70_9a1;
        case m2c::kret_1c70_9c2: 	goto ret_1c70_9c2;
        case m2c::kret_1c70_9ee: 	goto ret_1c70_9ee;
        case m2c::kret_1c70_a19: 	goto ret_1c70_a19;
        case m2c::kret_1c70_a59: 	goto ret_1c70_a59;
        case m2c::kret_1c70_ac0: 	goto ret_1c70_ac0;
        case m2c::kret_1c70_b16: 	goto ret_1c70_b16;
        case m2c::kret_1c70_b4: 	goto ret_1c70_b4;
        case m2c::kret_1c70_b60: 	goto ret_1c70_b60;
        case m2c::kret_1c70_b92: 	goto ret_1c70_b92;
        case m2c::kret_1c70_bcc: 	goto ret_1c70_bcc;
        case m2c::kret_1c70_bde: 	goto ret_1c70_bde;
        case m2c::kret_1c70_c0e: 	goto ret_1c70_c0e;
        case m2c::kret_1c70_c15: 	goto ret_1c70_c15;
        case m2c::kret_1c70_c67: 	goto ret_1c70_c67;
        case m2c::kret_1c70_ca0: 	goto ret_1c70_ca0;
        case m2c::kret_1c70_cd1: 	goto ret_1c70_cd1;
        case m2c::kret_1c70_cea: 	goto ret_1c70_cea;
        case m2c::kret_1c70_d87: 	goto ret_1c70_d87;
        case m2c::kret_1c70_e5a: 	goto ret_1c70_e5a;
        case m2c::kret_1c70_eab: 	goto ret_1c70_eab;
        case m2c::kret_1c70_ebe: 	goto ret_1c70_ebe;
        case m2c::kret_1c70_ec: 	goto ret_1c70_ec;
        case m2c::kret_1c70_ec5: 	goto ret_1c70_ec5;
        case m2c::kret_1c70_edf: 	goto ret_1c70_edf;
        case m2c::kret_1c70_eea: 	goto ret_1c70_eea;
        case m2c::kret_1c70_ef4: 	goto ret_1c70_ef4;
        case m2c::kret_1c70_f3e: 	goto ret_1c70_f3e;
        case m2c::kret_1c70_f70: 	goto ret_1c70_f70;
        case m2c::kret_1c70_f8f: 	goto ret_1c70_f8f;
        case m2c::kret_1c70_fb1: 	goto ret_1c70_fb1;
        case m2c::kret_1c70_fcb: 	goto ret_1c70_fcb;
        case m2c::kseg037_proc: 	goto seg037_proc;
        case m2c::ksub_2ace6: 	goto sub_2ace6;
        case m2c::ksub_2ad2b: 	goto sub_2ad2b;
        case m2c::ksub_2ae31: 	goto sub_2ae31;
        case m2c::ksub_2af52: 	goto sub_2af52;
        case m2c::ksub_2af5d: 	goto sub_2af5d;
        case m2c::ksub_2af85: 	goto sub_2af85;
        case m2c::ksub_2afda: 	goto sub_2afda;
        case m2c::ksub_2b0b6: 	goto sub_2b0b6;
        case m2c::ksub_2b16d: 	goto sub_2b16d;
        case m2c::ksub_2b2bf: 	goto sub_2b2bf;
        case m2c::ksub_2b30c: 	goto sub_2b30c;
        case m2c::ksub_2b32f: 	goto sub_2b32f;
        case m2c::ksub_2b3e3: 	goto sub_2b3e3;
        case m2c::ksub_2b41d: 	goto sub_2b41d;
        case m2c::ksub_2b44d: 	goto sub_2b44d;
        case m2c::ksub_2b472: 	goto sub_2b472;
        case m2c::ksub_2b48d: 	goto sub_2b48d;
        case m2c::ksub_2b4bf: 	goto sub_2b4bf;
        case m2c::ksub_2b54d: 	goto sub_2b54d;
        case m2c::ksub_2b564: 	goto sub_2b564;
        case m2c::ksub_2b5a1: 	goto sub_2b5a1;
        case m2c::ksub_2b60a: 	goto sub_2b60a;
        case m2c::ksub_2b6cd: 	goto sub_2b6cd;
        case m2c::ksub_2b6f8: 	goto sub_2b6f8;
        case m2c::ksub_2b79f: 	goto sub_2b79f;
        case m2c::ksub_2b83f: 	goto sub_2b83f;
        case m2c::ksub_2b8a9: 	goto sub_2b8a9;
        case m2c::ksub_2b946: 	goto sub_2b946;
        case m2c::ksub_2b9c9: 	goto sub_2b9c9;
        case m2c::ksub_2b9fc: 	goto sub_2b9fc;
        case m2c::ksub_2ba66: 	goto sub_2ba66;
        case m2c::ksub_2ba99: 	goto sub_2ba99;
        case m2c::ksub_2bb35: 	goto sub_2bb35;
        case m2c::ksub_2bc6d: 	goto sub_2bc6d;
        case m2c::ksub_2bcde: 	goto sub_2bcde;
        case m2c::ksub_2bd52: 	goto sub_2bd52;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

