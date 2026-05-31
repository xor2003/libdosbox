/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool seg033_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg033_proc:
    _begin:
loc_2905b:
	// 7850 
cs=0x1aa7;eip=0x00000b; 	X(PUSH(bp));	// 48299 push    bp ;~ 1AA7:000B
cs=0x1aa7;eip=0x00000c; 	T(MOV(bp, sp));	// 48300 mov     bp, sp ;~ 1AA7:000C
cs=0x1aa7;eip=0x00000e; 	X(PUSH(si));	// 48301 push    si ;~ 1AA7:000E
cs=0x1aa7;eip=0x00000f; 	X(PUSH(di));	// 48302 push    di ;~ 1AA7:000F
cs=0x1aa7;eip=0x000010; 	T(CLD);	// 48303 cld ;~ 1AA7:0010
cs=0x1aa7;eip=0x000011; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 48304 mov     ax, [bp+6] ;~ 1AA7:0011
cs=0x1aa7;eip=0x000014; 	T(CMP(ax, 0x14));	// 48305 cmp     ax, 14h ;~ 1AA7:0014
cs=0x1aa7;eip=0x000017; 	R(JG(loc_29080));	// 48306 jg      short loc_29080 ;~ 1AA7:0017
cs=0x1aa7;eip=0x000019; 	X(MOV(byte_37b89, al));	// 48307 mov     byte_37B89, al ;~ 1AA7:0019
cs=0x1aa7;eip=0x00001c; 	T(OR(ax, ax));	// 48308 or      ax, ax ;~ 1AA7:001C
cs=0x1aa7;eip=0x00001e; 	R(JGE(loc_29075));	// 48309 jge     short loc_29075 ;~ 1AA7:001E
cs=0x1aa7;eip=0x000020; 	T(MOV(ah, 0x0F));	// 48310 mov     ah, 0Fh ;~ 1AA7:0020
cs=0x1aa7;eip=0x000022; 	R(_INT(0x10));	// 48311 int     10h             ; - VIDEO - GET CURRENT VIDEO MODE ;~ 1AA7:0022
cs=0x1aa7;eip=0x000024; 	T(CBW);	// 48315 cbw ;~ 1AA7:0024
loc_29075:
	// 7851 
cs=0x1aa7;eip=0x000025; 	T(bx = offset(dseg,aega320x20016co));	// 48318 lea     bx, aEga320X20016Co ; "      EGA (320 x 200), 16 colors" ;~ 1AA7:0025
cs=0x1aa7;eip=0x000029; 	T(ADD(bx, ax));	// 48319 add     bx, ax ;~ 1AA7:0029
cs=0x1aa7;eip=0x00002b; 	T(ADD(bx, ax));	// 48320 add     bx, ax ;~ 1AA7:002B
cs=0x1aa7;eip=0x00002d; __disp=*(dw*)(raddr(cs,bx));
	R(JMP(__dispatch_call));	// 48321 jmp     word ptr cs:[bx] ;~ 1AA7:002D
loc_29080:
	// 7852 
cs=0x1aa7;eip=0x000030; 	R(JMP(loc_292b5));	// 48325 jmp     loc_292B5 ;~ 1AA7:0030
loc_29083:
	// 7853 
cs=0x1aa7;eip=0x000033; 	T(XOR(ax, ax));	// 48329 xor     ax, ax ;~ 1AA7:0033
cs=0x1aa7;eip=0x000035; 	T(MOV(es, ax));	// 48330 mov     es, ax ;~ 1AA7:0035
cs=0x1aa7;eip=0x000037; 	T(MOV(di, 0x449));	// 48332 mov     di, 449h ;~ 1AA7:0037
cs=0x1aa7;eip=0x00003a; 	T(si = offset(dseg,unk_381d1));	// 48333 lea     si, unk_381D1 ;~ 1AA7:003A
cs=0x1aa7;eip=0x00003e; 	T(MOV(cx, 0x10));	// 48334 mov     cx, 10h ;~ 1AA7:003E
	// 48335 rep movsb ;~ 1AA7:0041
cs=0x1aa7;eip=0x000041; 	X(	REP MOVSB);	// 48335 rep movsb ;~ 1AA7:0041
cs=0x1aa7;eip=0x000043; 	T(MOV(dx, 0x3BF));	// 48336 mov     dx, 3BFh ;~ 1AA7:0043
cs=0x1aa7;eip=0x000046; 	T(MOV(al, 3));	// 48337 mov     al, 3 ;~ 1AA7:0046
cs=0x1aa7;eip=0x000048; 	R(OUT(dx, al));	// 48338 out     dx, al          ; Printer Status Bits: ;~ 1AA7:0048
cs=0x1aa7;eip=0x000049; 	T(MOV(dl, 0x0B8));	// 48344 mov     dl, 0B8h ; '¸' ;~ 1AA7:0049
cs=0x1aa7;eip=0x00004b; 	T(XOR(al, al));	// 48345 xor     al, al ;~ 1AA7:004B
cs=0x1aa7;eip=0x00004d; 	R(OUT(dx, al));	// 48346 out     dx, al ;~ 1AA7:004D
cs=0x1aa7;eip=0x00004e; 	T(MOV(dl, 0x0B4));	// 48347 mov     dl, 0B4h ; '´' ;~ 1AA7:004E
cs=0x1aa7;eip=0x000050; 	T(MOV(cx, 9));	// 48348 mov     cx, 9 ;~ 1AA7:0050
cs=0x1aa7;eip=0x000053; 	T(si = offset(dseg,unk_381ef));	// 48349 lea     si, unk_381EF ;~ 1AA7:0053
loc_290a7:
	// 7854 
cs=0x1aa7;eip=0x000057; 	T(LODSW);	// 48352 lodsw ;~ 1AA7:0057
cs=0x1aa7;eip=0x000058; 	R(OUT(dx, ax));	// 48353 out     dx, ax          ; Video: CRT cntrlr addr ;~ 1AA7:0058
cs=0x1aa7;eip=0x000059; 	R(LOOP(loc_290a7));	// 48355 loop    loc_290A7 ;~ 1AA7:0059
cs=0x1aa7;eip=0x00005b; 	T(MOV(ax, 0x0B000));	// 48356 mov     ax, 0B000h ;~ 1AA7:005B
cs=0x1aa7;eip=0x00005e; 	T(MOV(es, ax));	// 48357 mov     es, ax ;~ 1AA7:005E
cs=0x1aa7;eip=0x000060; 	T(XOR(ax, ax));	// 48359 xor     ax, ax ;~ 1AA7:0060
cs=0x1aa7;eip=0x000062; 	T(MOV(cx, 0x8000));	// 48360 mov     cx, 8000h ;~ 1AA7:0062
cs=0x1aa7;eip=0x000065; 	T(XOR(di, di));	// 48361 xor     di, di ;~ 1AA7:0065
	// 48362 rep stosw ;~ 1AA7:0067
cs=0x1aa7;eip=0x000067; 	X(	REP STOSW);	// 48362 rep stosw ;~ 1AA7:0067
cs=0x1aa7;eip=0x000069; 	T(MOV(dl, 0x0B8));	// 48363 mov     dl, 0B8h ; '¸' ;~ 1AA7:0069
cs=0x1aa7;eip=0x00006b; 	T(MOV(al, 0x0A));	// 48364 mov     al, 0Ah ;~ 1AA7:006B
cs=0x1aa7;eip=0x00006d; 	R(OUT(dx, al));	// 48365 out     dx, al ;~ 1AA7:006D
cs=0x1aa7;eip=0x00006e; 	X(PUSH(ds));	// 48366 push    ds ;~ 1AA7:006E
cs=0x1aa7;eip=0x00006f; 	T(MOV(ax, 0x0F000));	// 48367 mov     ax, 0F000h ;~ 1AA7:006F
cs=0x1aa7;eip=0x000072; 	T(MOV(ds, ax));	// 48368 mov     ds, ax ;~ 1AA7:0072
cs=0x1aa7;eip=0x000074; 	T(MOV(dx, 0x0FA6E));	// 48370 mov     dx, 0FA6Eh ;~ 1AA7:0074
cs=0x1aa7;eip=0x000077; 	T(MOV(al, 0x43));	// 48371 mov     al, 43h ; 'C' ;~ 1AA7:0077
cs=0x1aa7;eip=0x000079; 	T(MOV(ah, 0x25));	// 48372 mov     ah, 25h ;~ 1AA7:0079
cs=0x1aa7;eip=0x00007b; 	R(_INT(0x21));	// 48373 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 1AA7:007B
cs=0x1aa7;eip=0x00007d; 	X(POP(ds));	// 48376 pop     ds ;~ 1AA7:007D
cs=0x1aa7;eip=0x00007e; 	R(JMP(loc_29144));	// 48378 jmp     short loc_29144 ;~ 1AA7:007E
ret_1aa7_80:
	// 7855 
cs=0x1aa7;eip=0x000080; 	T(MOV(al, 0x13));	// 48380 mov     al, 13h ;~ 1AA7:0080
cs=0x1aa7;eip=0x000082; 	T(XOR(ah, ah));	// 48381 xor     ah, ah ;~ 1AA7:0082
cs=0x1aa7;eip=0x000084; 	R(_INT(0x10));	// 48382 int     10h             ; - VIDEO - SET VIDEO MODE ;~ 1AA7:0084
cs=0x1aa7;eip=0x000086; 	T(MOV(dx, 0x3C4));	// 48384 mov     dx, 3C4h ;~ 1AA7:0086
cs=0x1aa7;eip=0x000089; 	T(MOV(al, 4));	// 48385 mov     al, 4 ;~ 1AA7:0089
cs=0x1aa7;eip=0x00008b; 	R(OUT(dx, al));	// 48386 out     dx, al          ; EGA: sequencer address reg ;~ 1AA7:008B
cs=0x1aa7;eip=0x00008c; 	T(INC(dx));	// 48391 inc     dx ;~ 1AA7:008C
cs=0x1aa7;eip=0x00008d; 	R(IN(al, dx));	// 48392 in      al, dx          ; EGA port: sequencer data register ;~ 1AA7:008D
cs=0x1aa7;eip=0x00008e; 	T(AND(al, 0x0F7));	// 48393 and     al, 0F7h ;~ 1AA7:008E
cs=0x1aa7;eip=0x000090; 	T(OR(al, 4));	// 48394 or      al, 4 ;~ 1AA7:0090
cs=0x1aa7;eip=0x000092; 	R(OUT(dx, al));	// 48395 out     dx, al          ; EGA port: sequencer data register ;~ 1AA7:0092
cs=0x1aa7;eip=0x000093; 	T(MOV(dx, 0x3CE));	// 48396 mov     dx, 3CEh ;~ 1AA7:0093
cs=0x1aa7;eip=0x000096; 	T(MOV(al, 5));	// 48397 mov     al, 5 ;~ 1AA7:0096
cs=0x1aa7;eip=0x000098; 	R(OUT(dx, al));	// 48398 out     dx, al          ; EGA: graph 1 and 2 addr reg: ;~ 1AA7:0098
cs=0x1aa7;eip=0x000099; 	T(INC(dx));	// 48405 inc     dx ;~ 1AA7:0099
cs=0x1aa7;eip=0x00009a; 	R(IN(al, dx));	// 48406 in      al, dx          ; EGA port: graphics controller data register ;~ 1AA7:009A
cs=0x1aa7;eip=0x00009b; 	T(AND(al, 0x0EF));	// 48407 and     al, 0EFh ;~ 1AA7:009B
cs=0x1aa7;eip=0x00009d; 	R(OUT(dx, al));	// 48408 out     dx, al          ; EGA port: graphics controller data register ;~ 1AA7:009D
cs=0x1aa7;eip=0x00009e; 	T(DEC(dx));	// 48409 dec     dx ;~ 1AA7:009E
cs=0x1aa7;eip=0x00009f; 	T(MOV(al, 6));	// 48410 mov     al, 6 ;~ 1AA7:009F
cs=0x1aa7;eip=0x0000a1; 	R(OUT(dx, al));	// 48411 out     dx, al          ; EGA: graph 1 and 2 addr reg: ;~ 1AA7:00A1
cs=0x1aa7;eip=0x0000a2; 	T(INC(dx));	// 48418 inc     dx ;~ 1AA7:00A2
cs=0x1aa7;eip=0x0000a3; 	R(IN(al, dx));	// 48419 in      al, dx          ; EGA port: graphics controller data register ;~ 1AA7:00A3
cs=0x1aa7;eip=0x0000a4; 	T(AND(al, 0x0FD));	// 48420 and     al, 0FDh ;~ 1AA7:00A4
cs=0x1aa7;eip=0x0000a6; 	R(OUT(dx, al));	// 48421 out     dx, al          ; EGA port: graphics controller data register ;~ 1AA7:00A6
cs=0x1aa7;eip=0x0000a7; 	T(MOV(dx, 0x3C4));	// 48422 mov     dx, 3C4h ;~ 1AA7:00A7
cs=0x1aa7;eip=0x0000aa; 	T(MOV(al, 2));	// 48423 mov     al, 2 ;~ 1AA7:00AA
cs=0x1aa7;eip=0x0000ac; 	T(MOV(ah, 0x0F));	// 48424 mov     ah, 0Fh ;~ 1AA7:00AC
cs=0x1aa7;eip=0x0000ae; 	R(OUT(dx, ax));	// 48425 out     dx, ax          ; EGA: sequencer address reg ;~ 1AA7:00AE
cs=0x1aa7;eip=0x0000af; 	T(MOV(ax, 0x0A000));	// 48427 mov     ax, 0A000h ;~ 1AA7:00AF
cs=0x1aa7;eip=0x0000b2; 	T(MOV(es, ax));	// 48428 mov     es, ax ;~ 1AA7:00B2
cs=0x1aa7;eip=0x0000b4; 	T(XOR(ax, ax));	// 48430 xor     ax, ax ;~ 1AA7:00B4
cs=0x1aa7;eip=0x0000b6; 	T(MOV(cx, 0x8000));	// 48431 mov     cx, 8000h ;~ 1AA7:00B6
cs=0x1aa7;eip=0x0000b9; 	T(XOR(di, di));	// 48432 xor     di, di ;~ 1AA7:00B9
	// 48433 rep stosw ;~ 1AA7:00BB
cs=0x1aa7;eip=0x0000bb; 	X(	REP STOSW);	// 48433 rep stosw ;~ 1AA7:00BB
cs=0x1aa7;eip=0x0000bd; 	T(MOV(dx, 0x3D4));	// 48434 mov     dx, 3D4h ;~ 1AA7:00BD
cs=0x1aa7;eip=0x0000c0; 	T(MOV(al, 0x14));	// 48435 mov     al, 14h ;~ 1AA7:00C0
cs=0x1aa7;eip=0x0000c2; 	R(OUT(dx, al));	// 48436 out     dx, al          ; Video: CRT cntrlr addr ;~ 1AA7:00C2
cs=0x1aa7;eip=0x0000c3; 	T(INC(dx));	// 48438 inc     dx ;~ 1AA7:00C3
cs=0x1aa7;eip=0x0000c4; 	R(IN(al, dx));	// 48439 in      al, dx          ; Video: CRT controller internal registers ;~ 1AA7:00C4
cs=0x1aa7;eip=0x0000c5; 	T(AND(al, 0x0BF));	// 48440 and     al, 0BFh ;~ 1AA7:00C5
cs=0x1aa7;eip=0x0000c7; 	R(OUT(dx, al));	// 48441 out     dx, al          ; Video: CRT controller internal registers ;~ 1AA7:00C7
cs=0x1aa7;eip=0x0000c8; 	T(DEC(dx));	// 48442 dec     dx ;~ 1AA7:00C8
cs=0x1aa7;eip=0x0000c9; 	T(MOV(al, 0x17));	// 48443 mov     al, 17h ;~ 1AA7:00C9
cs=0x1aa7;eip=0x0000cb; 	R(OUT(dx, al));	// 48444 out     dx, al          ; Video: CRT cntrlr addr ;~ 1AA7:00CB
cs=0x1aa7;eip=0x0000cc; 	T(INC(dx));	// 48454 inc     dx ;~ 1AA7:00CC
cs=0x1aa7;eip=0x0000cd; 	R(IN(al, dx));	// 48455 in      al, dx          ; Video: CRT controller internal registers ;~ 1AA7:00CD
cs=0x1aa7;eip=0x0000ce; 	T(OR(al, 0x40));	// 48456 or      al, 40h ;~ 1AA7:00CE
cs=0x1aa7;eip=0x0000d0; 	R(OUT(dx, al));	// 48457 out     dx, al          ; Video: CRT controller internal registers ;~ 1AA7:00D0
cs=0x1aa7;eip=0x0000d1; 	R(JMP(loc_29144));	// 48458 jmp     short loc_29144 ;~ 1AA7:00D1
loc_29123:
	// 7856 
cs=0x1aa7;eip=0x0000d3; 	X(PUSH(ax));	// 48462 push    ax ;~ 1AA7:00D3
cs=0x1aa7;eip=0x0000d4; 	X(PUSH(ds));	// 48463 push    ds ;~ 1AA7:00D4
cs=0x1aa7;eip=0x0000d5; 	T(MOV(ax, 0x0F000));	// 48464 mov     ax, 0F000h ;~ 1AA7:00D5
cs=0x1aa7;eip=0x0000d8; 	T(MOV(ds, ax));	// 48465 mov     ds, ax ;~ 1AA7:00D8
cs=0x1aa7;eip=0x0000da; 	T(MOV(dx, 0x0FA6E));	// 48467 mov     dx, 0FA6Eh ;~ 1AA7:00DA
cs=0x1aa7;eip=0x0000dd; 	T(MOV(al, 0x43));	// 48468 mov     al, 43h ; 'C' ;~ 1AA7:00DD
cs=0x1aa7;eip=0x0000df; 	T(MOV(ah, 0x25));	// 48469 mov     ah, 25h ;~ 1AA7:00DF
cs=0x1aa7;eip=0x0000e1; 	R(_INT(0x21));	// 48470 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 1AA7:00E1
cs=0x1aa7;eip=0x0000e3; 	X(POP(ds));	// 48473 pop     ds ;~ 1AA7:00E3
cs=0x1aa7;eip=0x0000e4; 	X(POP(ax));	// 48475 pop     ax ;~ 1AA7:00E4
loc_29135:
	// 7857 
cs=0x1aa7;eip=0x0000e5; 	T(MOV(bl, byte_37b89));	// 48478 mov     bl, byte_37B89 ;~ 1AA7:00E5
cs=0x1aa7;eip=0x0000e9; 	X(MOV(byte_37b89, al));	// 48479 mov     byte_37B89, al ;~ 1AA7:00E9
cs=0x1aa7;eip=0x0000ec; 	T(OR(bl, bl));	// 48480 or      bl, bl ;~ 1AA7:00EC
cs=0x1aa7;eip=0x0000ee; 	R(JL(loc_29144));	// 48481 jl      short loc_29144 ;~ 1AA7:00EE
cs=0x1aa7;eip=0x0000f0; 	T(XOR(ah, ah));	// 48482 xor     ah, ah ;~ 1AA7:00F0
cs=0x1aa7;eip=0x0000f2; 	R(_INT(0x10));	// 48483 int     10h             ; - VIDEO - SET VIDEO MODE ;~ 1AA7:00F2
loc_29144:
	// 7858 
cs=0x1aa7;eip=0x0000f4; 	T(MOV(bl, byte_37b89));	// 48488 mov     bl, byte_37B89 ;~ 1AA7:00F4
cs=0x1aa7;eip=0x0000f8; 	T(XOR(bh, bh));	// 48489 xor     bh, bh ;~ 1AA7:00F8
cs=0x1aa7;eip=0x0000fa; 	T(SHL(bx, 1));	// 48490 shl     bx, 1 ;~ 1AA7:00FA
cs=0x1aa7;eip=0x0000fc; 	X(MOV(word_37b84, bx));	// 48491 mov     word_37B84, bx ;~ 1AA7:00FC
cs=0x1aa7;eip=0x000100; 	T(ADD(bx, 2));	// 48492 add     bx, 2 ;~ 1AA7:0100
cs=0x1aa7;eip=0x000103; 	T(XOR(ax, ax));	// 48493 xor     ax, ax ;~ 1AA7:0103
cs=0x1aa7;eip=0x000105; 	X(MOV(byte_37b80, al));	// 48494 mov     byte_37B80, al ;~ 1AA7:0105
cs=0x1aa7;eip=0x000108; 	X(MOV(byte_37b83, al));	// 48495 mov     byte_37B83, al ;~ 1AA7:0108
cs=0x1aa7;eip=0x00010b; 	X(MOV(byte_37b8a, al));	// 48496 mov     byte_37B8A, al ;~ 1AA7:010B
cs=0x1aa7;eip=0x00010e; 	X(MOV(byte_37b81, al));	// 48497 mov     byte_37B81, al ;~ 1AA7:010E
cs=0x1aa7;eip=0x000111; 	X(MOV(byte_37b82, al));	// 48498 mov     byte_37B82, al ;~ 1AA7:0111
cs=0x1aa7;eip=0x000114; 	X(MOV(word_38201, ax));	// 48499 mov     word_38201, ax ;~ 1AA7:0114
cs=0x1aa7;eip=0x000117; 	X(MOV(word_37b8b, ax));	// 48500 mov     word_37B8B, ax ;~ 1AA7:0117
cs=0x1aa7;eip=0x00011a; 	X(MOV(word_37b8d, ax));	// 48501 mov     word_37B8D, ax ;~ 1AA7:011A
cs=0x1aa7;eip=0x00011d; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x3E80))));	// 48502 mov     ax, [bx-3E80h] ;~ 1AA7:011D
cs=0x1aa7;eip=0x000121; 	X(MOV(word_37fc0, ax));	// 48503 mov     word_37FC0, ax ;~ 1AA7:0121
cs=0x1aa7;eip=0x000124; 	T(OR(al, al));	// 48504 or      al, al ;~ 1AA7:0124
cs=0x1aa7;eip=0x000126; 	R(JZ(loc_291b9));	// 48505 jz      short loc_291B9 ;~ 1AA7:0126
cs=0x1aa7;eip=0x000128; 	T(MOV(dx, ax));	// 48506 mov     dx, ax ;~ 1AA7:0128
cs=0x1aa7;eip=0x00012a; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x3ED8))));	// 48507 mov     ax, [bx-3ED8h] ;~ 1AA7:012A
cs=0x1aa7;eip=0x00012e; 	X(MOV(word_37f68, ax));	// 48508 mov     word_37F68, ax ;~ 1AA7:012E
cs=0x1aa7;eip=0x000131; 	X(PUSH(bx));	// 48509 push    bx ;~ 1AA7:0131
cs=0x1aa7;eip=0x000132; 	T(MOV(bx, 0x100));	// 48510 mov     bx, 100h ;~ 1AA7:0132
cs=0x1aa7;eip=0x000135; 	T(di = offset(dseg,unk_37bec));	// 48511 lea     di, unk_37BEC ;~ 1AA7:0135
loc_29189:
	// 7859 
cs=0x1aa7;eip=0x000139; 	T(MOV(cx, dx));	// 48514 mov     cx, dx ;~ 1AA7:0139
cs=0x1aa7;eip=0x00013b; 	T(XOR(ax, ax));	// 48515 xor     ax, ax ;~ 1AA7:013B
loc_2918d:
	// 7860 
cs=0x1aa7;eip=0x00013d; 	X(MOV(*(raddr(ds,di)), al));	// 48518 mov     [di], al ;~ 1AA7:013D
cs=0x1aa7;eip=0x00013f; 	T(INC(ax));	// 48519 inc     ax ;~ 1AA7:013F
cs=0x1aa7;eip=0x000140; 	T(INC(di));	// 48520 inc     di ;~ 1AA7:0140
cs=0x1aa7;eip=0x000141; 	T(DEC(bx));	// 48521 dec     bx ;~ 1AA7:0141
cs=0x1aa7;eip=0x000142; 	R(LOOP(loc_2918d));	// 48522 loop    loc_2918D ;~ 1AA7:0142
cs=0x1aa7;eip=0x000144; 	T(OR(bx, bx));	// 48523 or      bx, bx ;~ 1AA7:0144
cs=0x1aa7;eip=0x000146; 	R(JNZ(loc_29189));	// 48524 jnz     short loc_29189 ;~ 1AA7:0146
cs=0x1aa7;eip=0x000148; 	T(MOV(bx, 0x100));	// 48525 mov     bx, 100h ;~ 1AA7:0148
cs=0x1aa7;eip=0x00014b; 	T(di = offset(dseg,unk_37cec));	// 48526 lea     di, unk_37CEC ;~ 1AA7:014B
loc_2919f:
	// 7861 
cs=0x1aa7;eip=0x00014f; 	T(MOV(cx, dx));	// 48529 mov     cx, dx ;~ 1AA7:014F
cs=0x1aa7;eip=0x000151; 	T(si = offset(dseg,word_37f68));	// 48530 lea     si, word_37F68 ;~ 1AA7:0151
cs=0x1aa7;eip=0x000155; 	T(MOV(si, *(dw*)(raddr(ds,si))));	// 48531 mov     si, [si] ;~ 1AA7:0155
loc_291a7:
	// 7862 
cs=0x1aa7;eip=0x000157; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 48534 mov     ax, [si] ;~ 1AA7:0157
cs=0x1aa7;eip=0x000159; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 48535 mov     [di], ax ;~ 1AA7:0159
cs=0x1aa7;eip=0x00015b; 	T(ADD(si, 2));	// 48536 add     si, 2 ;~ 1AA7:015B
cs=0x1aa7;eip=0x00015e; 	T(ADD(di, 2));	// 48537 add     di, 2 ;~ 1AA7:015E
cs=0x1aa7;eip=0x000161; 	T(DEC(bx));	// 48538 dec     bx ;~ 1AA7:0161
cs=0x1aa7;eip=0x000162; 	R(LOOP(loc_291a7));	// 48539 loop    loc_291A7 ;~ 1AA7:0162
cs=0x1aa7;eip=0x000164; 	T(OR(bx, bx));	// 48540 or      bx, bx ;~ 1AA7:0164
cs=0x1aa7;eip=0x000166; 	R(JNZ(loc_2919f));	// 48541 jnz     short loc_2919F ;~ 1AA7:0166
cs=0x1aa7;eip=0x000168; 	X(POP(bx));	// 48542 pop     bx ;~ 1AA7:0168
loc_291b9:
	// 7863 
cs=0x1aa7;eip=0x000169; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x3E28))));	// 48545 mov     ax, [bx-3E28h] ;~ 1AA7:0169
cs=0x1aa7;eip=0x00016d; 	X(MOV(word_38018, ax));	// 48546 mov     word_38018, ax ;~ 1AA7:016D
cs=0x1aa7;eip=0x000170; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x3DFC))));	// 48547 mov     ax, [bx-3DFCh] ;~ 1AA7:0170
cs=0x1aa7;eip=0x000174; 	X(MOV(word_38044, ax));	// 48548 mov     word_38044, ax ;~ 1AA7:0174
cs=0x1aa7;eip=0x000177; 	X(MOV(byte_38216, 0x19));	// 48549 mov     byte_38216, 19h ;~ 1AA7:0177
cs=0x1aa7;eip=0x00017c; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x3E54))));	// 48550 mov     ax, [bx-3E54h] ;~ 1AA7:017C
cs=0x1aa7;eip=0x000180; 	X(MOV(word_37fec, ax));	// 48551 mov     word_37FEC, ax ;~ 1AA7:0180
cs=0x1aa7;eip=0x000183; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x3DD0))));	// 48552 mov     ax, [bx-3DD0h] ;~ 1AA7:0183
cs=0x1aa7;eip=0x000187; 	X(MOV(word_38070, ax));	// 48553 mov     word_38070, ax ;~ 1AA7:0187
cs=0x1aa7;eip=0x00018a; 	X(MOV(word_37bc8, ax));	// 48554 mov     word_37BC8, ax ;~ 1AA7:018A
cs=0x1aa7;eip=0x00018d; 	X(MOV(word_37bc6, ax));	// 48555 mov     word_37BC6, ax ;~ 1AA7:018D
cs=0x1aa7;eip=0x000190; 	X(MOV(word_37bca, ax));	// 48556 mov     word_37BCA, ax ;~ 1AA7:0190
cs=0x1aa7;eip=0x000193; 	T(di = offset(dseg,unk_37bcc));	// 48557 lea     di, unk_37BCC ;~ 1AA7:0193
cs=0x1aa7;eip=0x000197; 	T(MOV(cx, offset(dseg,unk_2be50)));	// 48558 mov     cx, offset unk_2BE50 ;~ 1AA7:0197
cs=0x1aa7;eip=0x00019a; 	T(MOV(dx, ds));	// 48559 mov     dx, ds ;~ 1AA7:019A
cs=0x1aa7;eip=0x00019c; 	T(MOV(es, dx));	// 48560 mov     es, dx ;~ 1AA7:019C
	// 48562 rep stosw ;~ 1AA7:019E
cs=0x1aa7;eip=0x00019e; 	X(	REP STOSW);	// 48562 rep stosw ;~ 1AA7:019E
cs=0x1aa7;eip=0x0001a0; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x3EAC))));	// 48563 mov     ax, [bx-3EACh] ;~ 1AA7:01A0
cs=0x1aa7;eip=0x0001a4; 	X(MOV(word_37f94, ax));	// 48564 mov     word_37F94, ax ;~ 1AA7:01A4
cs=0x1aa7;eip=0x0001a7; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x3DA4))));	// 48565 mov     ax, [bx-3DA4h] ;~ 1AA7:01A7
cs=0x1aa7;eip=0x0001ab; 	X(MOV(word_3809c, ax));	// 48566 mov     word_3809C, ax ;~ 1AA7:01AB
cs=0x1aa7;eip=0x0001ae; 	T(DEC(ax));	// 48567 dec     ax ;~ 1AA7:01AE
cs=0x1aa7;eip=0x0001af; 	T(XOR(dx, dx));	// 48568 xor     dx, dx ;~ 1AA7:01AF
cs=0x1aa7;eip=0x0001b1; 	X(MOV(word_37b93, dx));	// 48569 mov     word_37B93, dx ;~ 1AA7:01B1
cs=0x1aa7;eip=0x0001b5; 	X(MOV(word_37b91, ax));	// 48570 mov     word_37B91, ax ;~ 1AA7:01B5
cs=0x1aa7;eip=0x0001b8; 	X(MOV(word_37b9b, dx));	// 48571 mov     word_37B9B, dx ;~ 1AA7:01B8
cs=0x1aa7;eip=0x0001bc; 	X(MOV(word_37b99, ax));	// 48572 mov     word_37B99, ax ;~ 1AA7:01BC
cs=0x1aa7;eip=0x0001bf; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x3D78))));	// 48573 mov     ax, [bx-3D78h] ;~ 1AA7:01BF
cs=0x1aa7;eip=0x0001c3; 	X(MOV(word_380c8, ax));	// 48574 mov     word_380C8, ax ;~ 1AA7:01C3
cs=0x1aa7;eip=0x0001c6; 	T(DEC(ax));	// 48575 dec     ax ;~ 1AA7:01C6
cs=0x1aa7;eip=0x0001c7; 	X(MOV(word_37b97, dx));	// 48576 mov     word_37B97, dx ;~ 1AA7:01C7
cs=0x1aa7;eip=0x0001cb; 	X(MOV(word_37b95, ax));	// 48577 mov     word_37B95, ax ;~ 1AA7:01CB
cs=0x1aa7;eip=0x0001ce; 	X(MOV(word_37b9f, dx));	// 48578 mov     word_37B9F, dx ;~ 1AA7:01CE
cs=0x1aa7;eip=0x0001d2; 	X(MOV(word_37b9d, ax));	// 48579 mov     word_37B9D, ax ;~ 1AA7:01D2
cs=0x1aa7;eip=0x0001d5; 	T(MOV(al, byte_37b89));	// 48580 mov     al, byte_37B89 ;~ 1AA7:01D5
cs=0x1aa7;eip=0x0001d8; 	T(CMP(al, 0x0B));	// 48581 cmp     al, 0Bh ;~ 1AA7:01D8
cs=0x1aa7;eip=0x0001da; 	R(JL(loc_29256));	// 48582 jl      short loc_29256 ;~ 1AA7:01DA
cs=0x1aa7;eip=0x0001dc; 	T(CMP(al, 0x0C));	// 48583 cmp     al, 0Ch ;~ 1AA7:01DC
cs=0x1aa7;eip=0x0001de; 	R(JG(loc_29258));	// 48584 jg      short loc_29258 ;~ 1AA7:01DE
cs=0x1aa7;eip=0x0001e0; 	T(di = offset(dseg,unk_37bcc));	// 48585 lea     di, unk_37BCC ;~ 1AA7:01E0
cs=0x1aa7;eip=0x0001e4; 	T(MOV(dx, 0x0B800));	// 48586 mov     dx, 0B800h ;~ 1AA7:01E4
cs=0x1aa7;eip=0x0001e7; 	X(MOV(*(dw*)(raddr(ds,di+2)), dx));	// 48587 mov     [di+2], dx ;~ 1AA7:01E7
cs=0x1aa7;eip=0x0001ea; 	T(CMP(al, 0x0C));	// 48588 cmp     al, 0Ch ;~ 1AA7:01EA
cs=0x1aa7;eip=0x0001ec; 	R(JNZ(loc_29256));	// 48589 jnz     short loc_29256 ;~ 1AA7:01EC
cs=0x1aa7;eip=0x0001ee; 	X(MOV(word_37b9b, 0x28));	// 48590 mov     word_37B9B, 28h ; '(' ;~ 1AA7:01EE
cs=0x1aa7;eip=0x0001f4; 	X(MOV(word_37b99, 0x2A7));	// 48591 mov     word_37B99, 2A7h ;~ 1AA7:01F4
cs=0x1aa7;eip=0x0001fa; 	X(MOV(word_37b9f, 0x18));	// 48592 mov     word_37B9F, 18h ;~ 1AA7:01FA
cs=0x1aa7;eip=0x000200; 	X(MOV(word_37b9d, 0x143));	// 48593 mov     word_37B9D, 143h ;~ 1AA7:0200
loc_29256:
	// 7864 
cs=0x1aa7;eip=0x000206; 	R(JMP(loc_292b5));	// 48597 jmp     short loc_292B5 ;~ 1AA7:0206
loc_29258:
	// 7865 
cs=0x1aa7;eip=0x000208; 	T(CMP(al, 0x12));	// 48601 cmp     al, 12h ;~ 1AA7:0208
cs=0x1aa7;eip=0x00020a; 	R(JG(loc_292b5));	// 48602 jg      short loc_292B5 ;~ 1AA7:020A
cs=0x1aa7;eip=0x00020c; 	X(PUSH(ax));	// 48603 push    ax ;~ 1AA7:020C
cs=0x1aa7;eip=0x00020d; 	T(MOV(al, 1));	// 48604 mov     al, 1 ;~ 1AA7:020D
cs=0x1aa7;eip=0x00020f; 	T(MOV(ah, 0x0F));	// 48605 mov     ah, 0Fh ;~ 1AA7:020F
cs=0x1aa7;eip=0x000211; 	X(PUSH(dx));	// 48606 push    dx ;~ 1AA7:0211
cs=0x1aa7;eip=0x000212; 	T(MOV(dx, 0x3CE));	// 48607 mov     dx, 3CEh ;~ 1AA7:0212
cs=0x1aa7;eip=0x000215; 	R(OUT(dx, ax));	// 48608 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1AA7:0215
cs=0x1aa7;eip=0x000216; 	X(POP(dx));	// 48610 pop     dx ;~ 1AA7:0216
cs=0x1aa7;eip=0x000217; 	X(POP(ax));	// 48611 pop     ax ;~ 1AA7:0217
cs=0x1aa7;eip=0x000218; 	T(CMP(al, 0x10));	// 48612 cmp     al, 10h ;~ 1AA7:0218
cs=0x1aa7;eip=0x00021a; 	R(JLE(loc_292b5));	// 48613 jle     short loc_292B5 ;~ 1AA7:021A
cs=0x1aa7;eip=0x00021c; 	X(MOV(byte_38216, 0x1E));	// 48614 mov     byte_38216, 1Eh ;~ 1AA7:021C
cs=0x1aa7;eip=0x000221; 	T(CMP(al, 0x12));	// 48615 cmp     al, 12h ;~ 1AA7:0221
cs=0x1aa7;eip=0x000223; 	R(JZ(loc_29294));	// 48616 jz      short loc_29294 ;~ 1AA7:0223
cs=0x1aa7;eip=0x000225; 	T(MOV(ah, 0x10));	// 48617 mov     ah, 10h ;~ 1AA7:0225
cs=0x1aa7;eip=0x000227; 	T(MOV(al, ah));	// 48618 mov     al, ah ;~ 1AA7:0227
cs=0x1aa7;eip=0x000229; 	T(MOV(bx, 1));	// 48619 mov     bx, 1 ;~ 1AA7:0229
cs=0x1aa7;eip=0x00022c; 	T(MOV(ch, 0x3F));	// 48620 mov     ch, 3Fh ; '?' ;~ 1AA7:022C
cs=0x1aa7;eip=0x00022e; 	T(MOV(cl, ch));	// 48621 mov     cl, ch ;~ 1AA7:022E
cs=0x1aa7;eip=0x000230; 	T(MOV(dh, ch));	// 48622 mov     dh, ch ;~ 1AA7:0230
cs=0x1aa7;eip=0x000232; 	R(_INT(0x10));	// 48623 int     10h             ; - VIDEO - SET INDIVIDUAL DAC REGISTER (EGA, VGA/MCGA) ;~ 1AA7:0232
cs=0x1aa7;eip=0x000234; 	T(dx = offset(dseg,unk_37f18));	// 48626 lea     dx, unk_37F18 ;~ 1AA7:0234
cs=0x1aa7;eip=0x000238; 	T(MOV(ax, ds));	// 48627 mov     ax, ds ;~ 1AA7:0238
cs=0x1aa7;eip=0x00023a; 	T(MOV(es, ax));	// 48628 mov     es, ax ;~ 1AA7:023A
cs=0x1aa7;eip=0x00023c; 	T(MOV(ah, 0x10));	// 48629 mov     ah, 10h ;~ 1AA7:023C
cs=0x1aa7;eip=0x00023e; 	T(MOV(al, 2));	// 48630 mov     al, 2 ;~ 1AA7:023E
cs=0x1aa7;eip=0x000240; 	R(_INT(0x10));	// 48631 int     10h             ; - VIDEO - SET ALL PALETTE REGISTERS (Jr, PS, TANDY 1000, EGA, VGA) ;~ 1AA7:0240
cs=0x1aa7;eip=0x000242; 	R(JMP(loc_292b5));	// 48633 jmp     short loc_292B5 ;~ 1AA7:0242
loc_29294:
	// 7866 
cs=0x1aa7;eip=0x000244; 	T(dx = offset(dseg,unk_37f38));	// 48637 lea     dx, unk_37F38 ;~ 1AA7:0244
cs=0x1aa7;eip=0x000248; 	T(MOV(ax, ds));	// 48638 mov     ax, ds ;~ 1AA7:0248
cs=0x1aa7;eip=0x00024a; 	T(MOV(es, ax));	// 48639 mov     es, ax ;~ 1AA7:024A
cs=0x1aa7;eip=0x00024c; 	T(MOV(ah, 0x10));	// 48640 mov     ah, 10h ;~ 1AA7:024C
cs=0x1aa7;eip=0x00024e; 	T(MOV(al, 0x12));	// 48641 mov     al, 12h ;~ 1AA7:024E
cs=0x1aa7;eip=0x000250; 	T(XOR(bx, bx));	// 48642 xor     bx, bx ;~ 1AA7:0250
cs=0x1aa7;eip=0x000252; 	T(MOV(cx, 0x10));	// 48643 mov     cx, 10h ;~ 1AA7:0252
cs=0x1aa7;eip=0x000255; 	R(_INT(0x10));	// 48644 int     10h             ; - VIDEO - SET BLOCK OF DAC REGISTERS (EGA, VGA/MCGA) ;~ 1AA7:0255
cs=0x1aa7;eip=0x000257; 	T(dx = offset(dseg,unk_37f28));	// 48648 lea     dx, unk_37F28 ;~ 1AA7:0257
cs=0x1aa7;eip=0x00025b; 	T(MOV(ax, ds));	// 48649 mov     ax, ds ;~ 1AA7:025B
cs=0x1aa7;eip=0x00025d; 	T(MOV(es, ax));	// 48650 mov     es, ax ;~ 1AA7:025D
cs=0x1aa7;eip=0x00025f; 	T(MOV(ah, 0x10));	// 48651 mov     ah, 10h ;~ 1AA7:025F
cs=0x1aa7;eip=0x000261; 	T(MOV(al, 2));	// 48652 mov     al, 2 ;~ 1AA7:0261
cs=0x1aa7;eip=0x000263; 	R(_INT(0x10));	// 48653 int     10h             ; - VIDEO - SET ALL PALETTE REGISTERS (Jr, PS, TANDY 1000, EGA, VGA) ;~ 1AA7:0263
loc_292b5:
	// 7867 
cs=0x1aa7;eip=0x000265; 	T(XOR(ax, ax));	// 48658 xor     ax, ax ;~ 1AA7:0265
cs=0x1aa7;eip=0x000267; 	X(POP(di));	// 48659 pop     di ;~ 1AA7:0267
cs=0x1aa7;eip=0x000268; 	X(POP(si));	// 48660 pop     si ;~ 1AA7:0268
cs=0x1aa7;eip=0x000269; 	X(POP(bp));	// 48661 pop     bp ;~ 1AA7:0269
cs=0x1aa7;eip=0x00026a; 	R(RETF(0));	// 48662 retf ;~ 1AA7:026A

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_29075: 	goto loc_29075;
        case m2c::kloc_29080: 	goto loc_29080;
        case m2c::kloc_29083: 	goto loc_29083;
        case m2c::kloc_290a7: 	goto loc_290a7;
        case m2c::kloc_29123: 	goto loc_29123;
        case m2c::kloc_29135: 	goto loc_29135;
        case m2c::kloc_29144: 	goto loc_29144;
        case m2c::kloc_29189: 	goto loc_29189;
        case m2c::kloc_2918d: 	goto loc_2918d;
        case m2c::kloc_2919f: 	goto loc_2919f;
        case m2c::kloc_291a7: 	goto loc_291a7;
        case m2c::kloc_291b9: 	goto loc_291b9;
        case m2c::kloc_29256: 	goto loc_29256;
        case m2c::kloc_29258: 	goto loc_29258;
        case m2c::kloc_29294: 	goto loc_29294;
        case m2c::kloc_292b5: 	goto loc_292b5;
        case m2c::kret_1aa7_80: 	goto ret_1aa7_80;
        case m2c::kseg033_proc: 	goto seg033_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

