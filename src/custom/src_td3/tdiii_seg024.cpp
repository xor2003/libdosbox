/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool _group14(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group14:
    _begin:
sub_273c5:
	// 44252 
#undef arg_0
#define arg_0 6
	// 44255 arg_0           = word ptr  6 ;~ 18DE:0005
#undef arg_2
#define arg_2 8
	// 44256 arg_2           = word ptr  8 ;~ 18DE:0005
ret_18de_5:
	// 7609 
cs=0x18de;eip=0x000005; 	X(PUSH(bp));	// 44258 push    bp ;~ 18DE:0005
cs=0x18de;eip=0x000006; 	T(MOV(bp, sp));	// 44259 mov     bp, sp ;~ 18DE:0006
cs=0x18de;eip=0x000008; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_0))));	// 44260 mov     dx, [bp+arg_0] ;~ 18DE:0008
cs=0x18de;eip=0x00000b; 	T(CMP(dx, word_37b93));	// 44261 cmp     dx, word_37B93 ;~ 18DE:000B
cs=0x18de;eip=0x00000f; 	R(JL(loc_273f7));	// 44262 jl      short loc_273F7 ;~ 18DE:000F
cs=0x18de;eip=0x000011; 	T(CMP(dx, word_37b91));	// 44263 cmp     dx, word_37B91 ;~ 18DE:0011
cs=0x18de;eip=0x000015; 	R(JG(loc_273f7));	// 44264 jg      short loc_273F7 ;~ 18DE:0015
cs=0x18de;eip=0x000017; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 44265 mov     ax, [bp+arg_2] ;~ 18DE:0017
cs=0x18de;eip=0x00001a; 	T(CMP(ax, word_37b97));	// 44266 cmp     ax, word_37B97 ;~ 18DE:001A
cs=0x18de;eip=0x00001e; 	R(JL(loc_273f7));	// 44267 jl      short loc_273F7 ;~ 18DE:001E
cs=0x18de;eip=0x000020; 	T(CMP(ax, word_37b95));	// 44268 cmp     ax, word_37B95 ;~ 18DE:0020
cs=0x18de;eip=0x000024; 	R(JG(loc_273f7));	// 44269 jg      short loc_273F7 ;~ 18DE:0024
cs=0x18de;eip=0x000026; 	T(MOV(bx, word_37bc8));	// 44270 mov     bx, word_37BC8 ;~ 18DE:0026
cs=0x18de;eip=0x00002a; 	T(MOV(es, bx));	// 44271 mov     es, bx ;~ 18DE:002A
cs=0x18de;eip=0x00002c; 	T(bx = offset(dseg,afailedisyourdi));	// 44273 lea     bx, aFailedIsYourDi ; "failed. Is your disk full?" ;~ 18DE:002C
cs=0x18de;eip=0x000030; 	T(ADD(bx, word_37b84));	// 44274 add     bx, word_37B84 ;~ 18DE:0030
cs=0x18de;eip=0x000034; __disp=*(dw*)(raddr(cs,bx));
	R(JMP(__dispatch_call));	// 44275 jmp     word ptr cs:[bx] ;~ 18DE:0034
loc_273f7:
	// 7610 
cs=0x18de;eip=0x000037; 	R(JMP(loc_2755c));	// 44280 jmp     loc_2755C ;~ 18DE:0037
loc_273fa:
	// 7611 
cs=0x18de;eip=0x00003a; 	T(MOV(bx, dx));	// 44284 mov     bx, dx ;~ 18DE:003A
cs=0x18de;eip=0x00003c; 	T(MOV(cl, bl));	// 44285 mov     cl, bl ;~ 18DE:003C
cs=0x18de;eip=0x00003e; 	T(XCHG(ah, al));	// 44286 xchg    ah, al ;~ 18DE:003E
cs=0x18de;eip=0x000040; 	T(SHR(ax, 1));	// 44287 shr     ax, 1 ;~ 18DE:0040
cs=0x18de;eip=0x000042; 	T(ADD(bh, al));	// 44288 add     bh, al ;~ 18DE:0042
cs=0x18de;eip=0x000044; 	T(XOR(al, al));	// 44289 xor     al, al ;~ 18DE:0044
cs=0x18de;eip=0x000046; 	T(ADD(bx, ax));	// 44290 add     bx, ax ;~ 18DE:0046
cs=0x18de;eip=0x000048; 	T(SHR(ax, 1));	// 44291 shr     ax, 1 ;~ 18DE:0048
cs=0x18de;eip=0x00004a; 	T(SHR(ax, 1));	// 44292 shr     ax, 1 ;~ 18DE:004A
cs=0x18de;eip=0x00004c; 	T(ADD(bx, ax));	// 44293 add     bx, ax ;~ 18DE:004C
cs=0x18de;eip=0x00004e; 	T(SHR(bx, 1));	// 44294 shr     bx, 1 ;~ 18DE:004E
cs=0x18de;eip=0x000050; 	T(SHR(bx, 1));	// 44295 shr     bx, 1 ;~ 18DE:0050
cs=0x18de;eip=0x000052; 	T(AND(cl, 3));	// 44296 and     cl, 3 ;~ 18DE:0052
cs=0x18de;eip=0x000055; 	T(XOR(cl, 3));	// 44297 xor     cl, 3 ;~ 18DE:0055
cs=0x18de;eip=0x000058; 	T(SHL(cl, 1));	// 44298 shl     cl, 1 ;~ 18DE:0058
cs=0x18de;eip=0x00005a; 	T(MOV(ch, 0x0FC));	// 44299 mov     ch, 0FCh ; 'ü' ;~ 18DE:005A
cs=0x18de;eip=0x00005c; 	R(JMP(loc_2748a));	// 44300 jmp     short loc_2748A ;~ 18DE:005C
loc_2741e:
	// 7612 
cs=0x18de;eip=0x00005e; 	T(MOV(bx, dx));	// 44304 mov     bx, dx ;~ 18DE:005E
cs=0x18de;eip=0x000060; 	T(MOV(cl, bl));	// 44305 mov     cl, bl ;~ 18DE:0060
cs=0x18de;eip=0x000062; 	T(XCHG(ah, al));	// 44306 xchg    ah, al ;~ 18DE:0062
cs=0x18de;eip=0x000064; 	T(SHR(ax, 1));	// 44307 shr     ax, 1 ;~ 18DE:0064
cs=0x18de;eip=0x000066; 	T(SHR(bx, 1));	// 44308 shr     bx, 1 ;~ 18DE:0066
cs=0x18de;eip=0x000068; 	T(ADD(bh, al));	// 44309 add     bh, al ;~ 18DE:0068
cs=0x18de;eip=0x00006a; 	T(XOR(al, al));	// 44310 xor     al, al ;~ 18DE:006A
cs=0x18de;eip=0x00006c; 	T(ADD(bx, ax));	// 44311 add     bx, ax ;~ 18DE:006C
cs=0x18de;eip=0x00006e; 	T(SHR(ax, 1));	// 44312 shr     ax, 1 ;~ 18DE:006E
cs=0x18de;eip=0x000070; 	T(SHR(ax, 1));	// 44313 shr     ax, 1 ;~ 18DE:0070
cs=0x18de;eip=0x000072; 	T(ADD(bx, ax));	// 44314 add     bx, ax ;~ 18DE:0072
cs=0x18de;eip=0x000074; 	T(SHR(bx, 1));	// 44315 shr     bx, 1 ;~ 18DE:0074
cs=0x18de;eip=0x000076; 	T(SHR(bx, 1));	// 44316 shr     bx, 1 ;~ 18DE:0076
cs=0x18de;eip=0x000078; 	T(AND(cl, 7));	// 44317 and     cl, 7 ;~ 18DE:0078
cs=0x18de;eip=0x00007b; 	T(XOR(cl, 7));	// 44318 xor     cl, 7 ;~ 18DE:007B
cs=0x18de;eip=0x00007e; 	T(MOV(ch, 0x0FE));	// 44319 mov     ch, 0FEh ; 'ş' ;~ 18DE:007E
cs=0x18de;eip=0x000080; 	R(JMP(loc_2748a));	// 44320 jmp     short loc_2748A ;~ 18DE:0080
loc_27442:
	// 7613 
cs=0x18de;eip=0x000082; 	T(MOV(bx, dx));	// 44324 mov     bx, dx ;~ 18DE:0082
cs=0x18de;eip=0x000084; 	T(MOV(cl, bl));	// 44325 mov     cl, bl ;~ 18DE:0084
cs=0x18de;eip=0x000086; 	T(SHL(bx, 1));	// 44326 shl     bx, 1 ;~ 18DE:0086
cs=0x18de;eip=0x000088; 	T(SHL(bx, 1));	// 44327 shl     bx, 1 ;~ 18DE:0088
cs=0x18de;eip=0x00008a; 	T(SHR(ax, 1));	// 44328 shr     ax, 1 ;~ 18DE:008A
cs=0x18de;eip=0x00008c; 	T(RCR(bx, 1));	// 44329 rcr     bx, 1 ;~ 18DE:008C
cs=0x18de;eip=0x00008e; 	T(SHR(ax, 1));	// 44330 shr     ax, 1 ;~ 18DE:008E
cs=0x18de;eip=0x000090; 	T(RCR(bx, 1));	// 44331 rcr     bx, 1 ;~ 18DE:0090
cs=0x18de;eip=0x000092; 	T(SHR(bx, 1));	// 44332 shr     bx, 1 ;~ 18DE:0092
cs=0x18de;eip=0x000094; 	T(XCHG(ah, al));	// 44333 xchg    ah, al ;~ 18DE:0094
cs=0x18de;eip=0x000096; 	T(SHR(ax, 1));	// 44334 shr     ax, 1 ;~ 18DE:0096
cs=0x18de;eip=0x000098; 	T(ADD(bx, ax));	// 44335 add     bx, ax ;~ 18DE:0098
cs=0x18de;eip=0x00009a; 	T(SHR(ax, 1));	// 44336 shr     ax, 1 ;~ 18DE:009A
cs=0x18de;eip=0x00009c; 	T(SHR(ax, 1));	// 44337 shr     ax, 1 ;~ 18DE:009C
cs=0x18de;eip=0x00009e; 	T(ADD(bx, ax));	// 44338 add     bx, ax ;~ 18DE:009E
cs=0x18de;eip=0x0000a0; 	T(AND(cl, 1));	// 44339 and     cl, 1 ;~ 18DE:00A0
cs=0x18de;eip=0x0000a3; 	T(XOR(cl, 1));	// 44340 xor     cl, 1 ;~ 18DE:00A3
cs=0x18de;eip=0x0000a6; 	T(SHL(cl, 1));	// 44341 shl     cl, 1 ;~ 18DE:00A6
cs=0x18de;eip=0x0000a8; 	T(SHL(cl, 1));	// 44342 shl     cl, 1 ;~ 18DE:00A8
cs=0x18de;eip=0x0000aa; 	T(MOV(ch, 0x0F0));	// 44343 mov     ch, 0F0h ; 'ğ' ;~ 18DE:00AA
cs=0x18de;eip=0x0000ac; 	R(JMP(loc_2748a));	// 44344 jmp     short loc_2748A ;~ 18DE:00AC
loc_2746e:
	// 7614 
cs=0x18de;eip=0x0000ae; 	T(MOV(bx, dx));	// 44348 mov     bx, dx ;~ 18DE:00AE
cs=0x18de;eip=0x0000b0; 	T(MOV(cl, bl));	// 44349 mov     cl, bl ;~ 18DE:00B0
cs=0x18de;eip=0x0000b2; 	T(SHR(ax, 1));	// 44350 shr     ax, 1 ;~ 18DE:00B2
cs=0x18de;eip=0x0000b4; 	T(RCR(bx, 1));	// 44351 rcr     bx, 1 ;~ 18DE:00B4
cs=0x18de;eip=0x0000b6; 	T(SHR(ax, 1));	// 44352 shr     ax, 1 ;~ 18DE:00B6
cs=0x18de;eip=0x0000b8; 	T(RCR(bx, 1));	// 44353 rcr     bx, 1 ;~ 18DE:00B8
cs=0x18de;eip=0x0000ba; 	T(SHR(bx, 1));	// 44354 shr     bx, 1 ;~ 18DE:00BA
cs=0x18de;eip=0x0000bc; 	T(MOV(ah, 0x5A));	// 44355 mov     ah, 5Ah ; 'Z' ;~ 18DE:00BC
cs=0x18de;eip=0x0000be; 	T(MUL1_1(ah));	// 44356 mul     ah ;~ 18DE:00BE
cs=0x18de;eip=0x0000c0; 	T(ADD(bx, ax));	// 44357 add     bx, ax ;~ 18DE:00C0
cs=0x18de;eip=0x0000c2; 	T(AND(cl, 7));	// 44358 and     cl, 7 ;~ 18DE:00C2
cs=0x18de;eip=0x0000c5; 	T(XOR(cl, 7));	// 44359 xor     cl, 7 ;~ 18DE:00C5
cs=0x18de;eip=0x0000c8; 	T(MOV(ch, 0x0FE));	// 44360 mov     ch, 0FEh ; 'ş' ;~ 18DE:00C8
loc_2748a:
	// 7615 
cs=0x18de;eip=0x0000ca; 	T(MOV(ah, *(raddr(es,bx))));	// 44364 mov     ah, es:[bx] ;~ 18DE:00CA
cs=0x18de;eip=0x0000cd; 	T(ROR(ah, cl));	// 44365 ror     ah, cl ;~ 18DE:00CD
cs=0x18de;eip=0x0000cf; 	T(AND(ah, ch));	// 44366 and     ah, ch ;~ 18DE:00CF
cs=0x18de;eip=0x0000d1; 	T(OR(ah, byte_37b81));	// 44367 or      ah, byte_37B81 ;~ 18DE:00D1
cs=0x18de;eip=0x0000d5; 	T(ROL(ah, cl));	// 44368 rol     ah, cl ;~ 18DE:00D5
cs=0x18de;eip=0x0000d7; 	X(MOV(*(raddr(es,bx)), ah));	// 44369 mov     es:[bx], ah ;~ 18DE:00D7
cs=0x18de;eip=0x0000da; 	R(JMP(loc_2755c));	// 44370 jmp     loc_2755C ;~ 18DE:00DA
loc_2749d:
	// 7616 
cs=0x18de;eip=0x0000dd; 	T(MOV(bx, dx));	// 44374 mov     bx, dx ;~ 18DE:00DD
cs=0x18de;eip=0x0000df; 	T(MOV(cl, bl));	// 44375 mov     cl, bl ;~ 18DE:00DF
cs=0x18de;eip=0x0000e1; 	T(SHL(bx, 1));	// 44376 shl     bx, 1 ;~ 18DE:00E1
cs=0x18de;eip=0x0000e3; 	T(ADD(bx, 0x28));	// 44377 add     bx, 28h ; '(' ;~ 18DE:00E3
cs=0x18de;eip=0x0000e6; 	T(MOV(dx, ax));	// 44378 mov     dx, ax ;~ 18DE:00E6
cs=0x18de;eip=0x0000e8; 	T(SAR(ax, 1));	// 44379 sar     ax, 1 ;~ 18DE:00E8
cs=0x18de;eip=0x0000ea; 	T(ADD(ax, dx));	// 44380 add     ax, dx ;~ 18DE:00EA
cs=0x18de;eip=0x0000ec; 	T(ADD(ax, 0x18));	// 44381 add     ax, 18h ;~ 18DE:00EC
cs=0x18de;eip=0x0000ef; 	T(AND(dx, 1));	// 44382 and     dx, 1 ;~ 18DE:00EF
cs=0x18de;eip=0x0000f2; 	T(ADD(ax, dx));	// 44383 add     ax, dx ;~ 18DE:00F2
cs=0x18de;eip=0x0000f4; 	T(SHR(ax, 1));	// 44384 shr     ax, 1 ;~ 18DE:00F4
cs=0x18de;eip=0x0000f6; 	T(RCR(bx, 1));	// 44385 rcr     bx, 1 ;~ 18DE:00F6
cs=0x18de;eip=0x0000f8; 	T(SHR(ax, 1));	// 44386 shr     ax, 1 ;~ 18DE:00F8
cs=0x18de;eip=0x0000fa; 	T(RCR(bx, 1));	// 44387 rcr     bx, 1 ;~ 18DE:00FA
cs=0x18de;eip=0x0000fc; 	T(SHR(bx, 1));	// 44388 shr     bx, 1 ;~ 18DE:00FC
cs=0x18de;eip=0x0000fe; 	T(MOV(ah, 0x5A));	// 44389 mov     ah, 5Ah ; 'Z' ;~ 18DE:00FE
cs=0x18de;eip=0x000100; 	T(MUL1_1(ah));	// 44390 mul     ah ;~ 18DE:0100
cs=0x18de;eip=0x000102; 	T(ADD(bx, ax));	// 44391 add     bx, ax ;~ 18DE:0102
cs=0x18de;eip=0x000104; 	T(AND(cl, 3));	// 44392 and     cl, 3 ;~ 18DE:0104
cs=0x18de;eip=0x000107; 	T(XOR(cl, 3));	// 44393 xor     cl, 3 ;~ 18DE:0107
cs=0x18de;eip=0x00010a; 	T(SHL(cl, 1));	// 44394 shl     cl, 1 ;~ 18DE:010A
cs=0x18de;eip=0x00010c; 	T(MOV(ch, 0x0FC));	// 44395 mov     ch, 0FCh ; 'ü' ;~ 18DE:010C
loc_274ce:
	// 7617 
cs=0x18de;eip=0x00010e; 	T(MOV(ah, *(raddr(es,bx))));	// 44399 mov     ah, es:[bx] ;~ 18DE:010E
cs=0x18de;eip=0x000111; 	T(ROR(ah, cl));	// 44400 ror     ah, cl ;~ 18DE:0111
cs=0x18de;eip=0x000113; 	T(AND(ah, ch));	// 44401 and     ah, ch ;~ 18DE:0113
cs=0x18de;eip=0x000115; 	T(OR(ah, byte_37b81));	// 44402 or      ah, byte_37B81 ;~ 18DE:0115
cs=0x18de;eip=0x000119; 	T(ROL(ah, cl));	// 44403 rol     ah, cl ;~ 18DE:0119
cs=0x18de;eip=0x00011b; 	X(MOV(*(raddr(es,bx)), ah));	// 44404 mov     es:[bx], ah ;~ 18DE:011B
cs=0x18de;eip=0x00011e; 	T(OR(dl, dl));	// 44405 or      dl, dl ;~ 18DE:011E
cs=0x18de;eip=0x000120; 	R(JZ(loc_2755c));	// 44406 jz      short loc_2755C ;~ 18DE:0120
cs=0x18de;eip=0x000122; 	T(XOR(dl, dl));	// 44407 xor     dl, dl ;~ 18DE:0122
cs=0x18de;eip=0x000124; 	T(TEST(bx, 0x0E000));	// 44408 test    bx, 0E000h ;~ 18DE:0124
cs=0x18de;eip=0x000128; 	R(JZ(loc_274f0));	// 44409 jz      short loc_274F0 ;~ 18DE:0128
cs=0x18de;eip=0x00012a; 	T(SUB(bx, 0x2000));	// 44410 sub     bx, 2000h ;~ 18DE:012A
cs=0x18de;eip=0x00012e; 	R(JMP(loc_274ce));	// 44411 jmp     short loc_274CE ;~ 18DE:012E
loc_274f0:
	// 7618 
cs=0x18de;eip=0x000130; 	T(OR(bx, 0x6000));	// 44415 or      bx, 6000h ;~ 18DE:0130
cs=0x18de;eip=0x000134; 	T(SUB(bx, 0x5A));	// 44416 sub     bx, 5Ah ; 'Z' ;~ 18DE:0134
cs=0x18de;eip=0x000137; 	R(JMP(loc_274ce));	// 44417 jmp     short loc_274CE ;~ 18DE:0137
loc_274f9:
	// 7619 
cs=0x18de;eip=0x000139; 	T(MOV(bx, dx));	// 44421 mov     bx, dx ;~ 18DE:0139
cs=0x18de;eip=0x00013b; 	T(MOV(cl, bl));	// 44422 mov     cl, bl ;~ 18DE:013B
cs=0x18de;eip=0x00013d; 	X(MUL1_2(word_38018));	// 44423 mul     word_38018 ;~ 18DE:013D
cs=0x18de;eip=0x000141; 	T(SHR(bx, 1));	// 44424 shr     bx, 1 ;~ 18DE:0141
cs=0x18de;eip=0x000143; 	T(SHR(bx, 1));	// 44425 shr     bx, 1 ;~ 18DE:0143
cs=0x18de;eip=0x000145; 	T(SHR(bx, 1));	// 44426 shr     bx, 1 ;~ 18DE:0145
cs=0x18de;eip=0x000147; 	T(ADD(bx, ax));	// 44427 add     bx, ax ;~ 18DE:0147
cs=0x18de;eip=0x000149; 	T(AND(cl, 7));	// 44428 and     cl, 7 ;~ 18DE:0149
cs=0x18de;eip=0x00014c; 	T(MOV(ah, 0x80));	// 44429 mov     ah, 80h ; '€' ;~ 18DE:014C
cs=0x18de;eip=0x00014e; 	T(SHR(ah, cl));	// 44430 shr     ah, cl ;~ 18DE:014E
cs=0x18de;eip=0x000150; 	X(PUSH(ax));	// 44431 push    ax ;~ 18DE:0150
cs=0x18de;eip=0x000151; 	T(MOV(al, 8));	// 44432 mov     al, 8 ;~ 18DE:0151
cs=0x18de;eip=0x000153; 	T(MOV(ah, ah));	// 44433 mov     ah, ah ;~ 18DE:0153
cs=0x18de;eip=0x000155; 	X(PUSH(dx));	// 44434 push    dx ;~ 18DE:0155
cs=0x18de;eip=0x000156; 	T(MOV(dx, 0x3CE));	// 44435 mov     dx, 3CEh ;~ 18DE:0156
cs=0x18de;eip=0x000159; 	R(OUT(dx, ax));	// 44436 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 18DE:0159
cs=0x18de;eip=0x00015a; 	X(POP(dx));	// 44439 pop     dx ;~ 18DE:015A
cs=0x18de;eip=0x00015b; 	X(POP(ax));	// 44440 pop     ax ;~ 18DE:015B
cs=0x18de;eip=0x00015c; 	X(AND(*(raddr(es,bx)), ah));	// 44441 and     es:[bx], ah ;~ 18DE:015C
cs=0x18de;eip=0x00015f; 	R(JMP(loc_2755c));	// 44442 jmp     short loc_2755C ;~ 18DE:015F
loc_27521:
	// 7620 
cs=0x18de;eip=0x000161; 	T(MOV(bx, dx));	// 44446 mov     bx, dx ;~ 18DE:0161
cs=0x18de;eip=0x000163; 	T(XCHG(ah, al));	// 44447 xchg    ah, al ;~ 18DE:0163
cs=0x18de;eip=0x000165; 	T(ADD(bx, ax));	// 44448 add     bx, ax ;~ 18DE:0165
cs=0x18de;eip=0x000167; 	T(SHR(ax, 1));	// 44449 shr     ax, 1 ;~ 18DE:0167
cs=0x18de;eip=0x000169; 	T(SHR(ax, 1));	// 44450 shr     ax, 1 ;~ 18DE:0169
cs=0x18de;eip=0x00016b; 	T(ADD(bx, ax));	// 44451 add     bx, ax ;~ 18DE:016B
cs=0x18de;eip=0x00016d; 	T(MOV(ah, byte_37b81));	// 44452 mov     ah, byte_37B81 ;~ 18DE:016D
cs=0x18de;eip=0x000171; 	X(MOV(*(raddr(es,bx)), ah));	// 44453 mov     es:[bx], ah ;~ 18DE:0171
cs=0x18de;eip=0x000174; 	R(JMP(loc_2755c));	// 44454 jmp     short loc_2755C ;~ 18DE:0174
loc_27536:
	// 7621 
cs=0x18de;eip=0x000176; 	T(MOV(bx, dx));	// 44458 mov     bx, dx ;~ 18DE:0176
cs=0x18de;eip=0x000178; 	T(XCHG(ah, al));	// 44459 xchg    ah, al ;~ 18DE:0178
cs=0x18de;eip=0x00017a; 	T(ADD(bx, ax));	// 44460 add     bx, ax ;~ 18DE:017A
cs=0x18de;eip=0x00017c; 	T(SHR(ax, 1));	// 44461 shr     ax, 1 ;~ 18DE:017C
cs=0x18de;eip=0x00017e; 	T(SHR(ax, 1));	// 44462 shr     ax, 1 ;~ 18DE:017E
cs=0x18de;eip=0x000180; 	T(ADD(bx, ax));	// 44463 add     bx, ax ;~ 18DE:0180
cs=0x18de;eip=0x000182; 	T(SHR(bx, 1));	// 44464 shr     bx, 1 ;~ 18DE:0182
cs=0x18de;eip=0x000184; 	T(SHR(bx, 1));	// 44465 shr     bx, 1 ;~ 18DE:0184
cs=0x18de;eip=0x000186; 	T(MOV(cx, dx));	// 44466 mov     cx, dx ;~ 18DE:0186
cs=0x18de;eip=0x000188; 	T(MOV(dx, 0x3C4));	// 44467 mov     dx, 3C4h ;~ 18DE:0188
cs=0x18de;eip=0x00018b; 	T(MOV(al, 2));	// 44468 mov     al, 2 ;~ 18DE:018B
cs=0x18de;eip=0x00018d; 	T(AND(cl, 3));	// 44469 and     cl, 3 ;~ 18DE:018D
cs=0x18de;eip=0x000190; 	T(MOV(ah, 1));	// 44470 mov     ah, 1 ;~ 18DE:0190
cs=0x18de;eip=0x000192; 	T(SHL(ah, cl));	// 44471 shl     ah, cl ;~ 18DE:0192
cs=0x18de;eip=0x000194; 	R(OUT(dx, ax));	// 44472 out     dx, ax          ; EGA: sequencer address reg ;~ 18DE:0194
cs=0x18de;eip=0x000195; 	T(MOV(ah, byte_37b81));	// 44475 mov     ah, byte_37B81 ;~ 18DE:0195
cs=0x18de;eip=0x000199; 	X(MOV(*(raddr(es,bx)), ah));	// 44476 mov     es:[bx], ah ;~ 18DE:0199
loc_2755c:
	// 7622 
cs=0x18de;eip=0x00019c; 	T(XOR(ax, ax));	// 44480 xor     ax, ax ;~ 18DE:019C
cs=0x18de;eip=0x00019e; 	X(POP(bp));	// 44481 pop     bp ;~ 18DE:019E
cs=0x18de;eip=0x00019f; 	R(RETF(0));	// 44482 retf ;~ 18DE:019F
seg024_proc:
	// 44494 
cs=0x18de;eip=0x0001ca; 	X(PUSH(bp));	// 44494 push    bp ;~ 18DE:01CA
ret_18de_1cb:
	// 7623 
cs=0x18de;eip=0x0001cb; 	T(MOV(bp, sp));	// 44495 mov     bp, sp ;~ 18DE:01CB
cs=0x18de;eip=0x0001cd; 	X(PUSH(si));	// 44496 push    si ;~ 18DE:01CD
cs=0x18de;eip=0x0001ce; 	X(PUSH(di));	// 44497 push    di ;~ 18DE:01CE
cs=0x18de;eip=0x0001cf; 	T(MOV(bx, *(dw*)(raddr(ss,bp+6))));	// 44498 mov     bx, [bp+6] ;~ 18DE:01CF
cs=0x18de;eip=0x0001d2; 	T(MOV(dx, *(dw*)(raddr(ss,bp+8))));	// 44499 mov     dx, [bp+8] ;~ 18DE:01D2
cs=0x18de;eip=0x0001d5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 44500 mov     ax, [bp+0Ah] ;~ 18DE:01D5
cs=0x18de;eip=0x0001d8; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x0C))));	// 44501 mov     cx, [bp+0Ch] ;~ 18DE:01D8
cs=0x18de;eip=0x0001db; 	T(si = offset(dseg,word_2befe));	// 44502 lea     si, word_2BEFE ;~ 18DE:01DB
cs=0x18de;eip=0x0001df; 	T(ADD(si, word_37b84));	// 44503 add     si, word_37B84 ;~ 18DE:01DF
cs=0x18de;eip=0x0001e3; __disp=*(dw*)(raddr(cs,si));
	R(JMP(__dispatch_call));	// 44504 jmp     word ptr cs:[si] ;~ 18DE:01E3
ret_18de_1e6:
	// 7624 
cs=0x18de;eip=0x0001e6; 	T(AND(dx, 1));	// 44506 and     dx, 1 ;~ 18DE:01E6
cs=0x18de;eip=0x0001e9; 	T(AND(ax, 1));	// 44507 and     ax, 1 ;~ 18DE:01E9
cs=0x18de;eip=0x0001ec; 	T(AND(cx, 1));	// 44508 and     cx, 1 ;~ 18DE:01EC
cs=0x18de;eip=0x0001ef; 	T(SHL(dl, 1));	// 44509 shl     dl, 1 ;~ 18DE:01EF
cs=0x18de;eip=0x0001f1; 	T(SHL(dl, 1));	// 44510 shl     dl, 1 ;~ 18DE:01F1
cs=0x18de;eip=0x0001f3; 	T(SHL(al, 1));	// 44511 shl     al, 1 ;~ 18DE:01F3
cs=0x18de;eip=0x0001f5; 	T(OR(cl, al));	// 44512 or      cl, al ;~ 18DE:01F5
cs=0x18de;eip=0x0001f7; 	T(OR(cl, dl));	// 44513 or      cl, dl ;~ 18DE:01F7
cs=0x18de;eip=0x0001f9; 	T(OR(bx, bx));	// 44514 or      bx, bx ;~ 18DE:01F9
cs=0x18de;eip=0x0001fb; 	R(JGE(loc_275c2));	// 44515 jge     short loc_275C2 ;~ 18DE:01FB
cs=0x18de;eip=0x0001fd; 	T(OR(cl, 8));	// 44516 or      cl, 8 ;~ 18DE:01FD
cs=0x18de;eip=0x000200; 	T(NEG(bx));	// 44517 neg     bx ;~ 18DE:0200
loc_275c2:
	// 7625 
cs=0x18de;eip=0x000202; 	T(MOV(dx, 0x3DA));	// 44520 mov     dx, 3DAh ;~ 18DE:0202
cs=0x18de;eip=0x000205; 	R(IN(al, dx));	// 44521 in      al, dx          ; Video status bits: ;~ 18DE:0205
cs=0x18de;eip=0x000206; 	T(MOV(al, bl));	// 44526 mov     al, bl ;~ 18DE:0206
cs=0x18de;eip=0x000208; 	T(OR(al, 0x10));	// 44527 or      al, 10h ;~ 18DE:0208
cs=0x18de;eip=0x00020a; 	R(OUT(dx, al));	// 44528 out     dx, al          ; Video: bits 0-1 control ;~ 18DE:020A
cs=0x18de;eip=0x00020b; 	T(ADD(dl, 4));	// 44530 add     dl, 4 ;~ 18DE:020B
cs=0x18de;eip=0x00020e; 	T(MOV(al, cl));	// 44531 mov     al, cl ;~ 18DE:020E
cs=0x18de;eip=0x000210; 	R(OUT(dx, al));	// 44532 out     dx, al ;~ 18DE:0210
cs=0x18de;eip=0x000211; 	R(JMP(loc_27638));	// 44533 jmp     short loc_27638 ;~ 18DE:0211
ret_18de_213:
	// 7626 
cs=0x18de;eip=0x000213; 	T(AND(dx, 1));	// 44535 and     dx, 1 ;~ 18DE:0213
cs=0x18de;eip=0x000216; 	T(AND(ax, 1));	// 44536 and     ax, 1 ;~ 18DE:0216
cs=0x18de;eip=0x000219; 	T(AND(cx, 1));	// 44537 and     cx, 1 ;~ 18DE:0219
cs=0x18de;eip=0x00021c; 	T(SHL(dl, 1));	// 44538 shl     dl, 1 ;~ 18DE:021C
cs=0x18de;eip=0x00021e; 	T(SHL(dl, 1));	// 44539 shl     dl, 1 ;~ 18DE:021E
cs=0x18de;eip=0x000220; 	T(SHL(al, 1));	// 44540 shl     al, 1 ;~ 18DE:0220
cs=0x18de;eip=0x000222; 	T(OR(cl, al));	// 44541 or      cl, al ;~ 18DE:0222
cs=0x18de;eip=0x000224; 	T(OR(cl, dl));	// 44542 or      cl, dl ;~ 18DE:0224
cs=0x18de;eip=0x000226; 	T(OR(bx, bx));	// 44543 or      bx, bx ;~ 18DE:0226
cs=0x18de;eip=0x000228; 	R(JGE(loc_27624));	// 44544 jge     short loc_27624 ;~ 18DE:0228
cs=0x18de;eip=0x00022a; 	T(OR(cl, 0x10));	// 44545 or      cl, 10h ;~ 18DE:022A
cs=0x18de;eip=0x00022d; 	T(NEG(bx));	// 44546 neg     bx ;~ 18DE:022D
cs=0x18de;eip=0x00022f; 	R(JMP(loc_27624));	// 44547 jmp     short loc_27624 ;~ 18DE:022F
ret_18de_231:
	// 7627 
cs=0x18de;eip=0x000231; 	T(MOV(dh, dl));	// 44549 mov     dh, dl ;~ 18DE:0231
cs=0x18de;eip=0x000233; 	T(MOV(ah, al));	// 44550 mov     ah, al ;~ 18DE:0233
cs=0x18de;eip=0x000235; 	T(MOV(ch, cl));	// 44551 mov     ch, cl ;~ 18DE:0235
cs=0x18de;eip=0x000237; 	T(AND(dx, 0x201));	// 44552 and     dx, 201h ;~ 18DE:0237
cs=0x18de;eip=0x00023b; 	T(AND(ax, 0x201));	// 44553 and     ax, 201h ;~ 18DE:023B
cs=0x18de;eip=0x00023e; 	T(AND(cx, 0x201));	// 44554 and     cx, 201h ;~ 18DE:023E
cs=0x18de;eip=0x000242; 	T(SHL(dh, 1));	// 44555 shl     dh, 1 ;~ 18DE:0242
cs=0x18de;eip=0x000244; 	T(ROR(dl, 1));	// 44556 ror     dl, 1 ;~ 18DE:0244
cs=0x18de;eip=0x000246; 	T(ROR(dl, 1));	// 44557 ror     dl, 1 ;~ 18DE:0246
cs=0x18de;eip=0x000248; 	T(ROR(dl, 1));	// 44558 ror     dl, 1 ;~ 18DE:0248
cs=0x18de;eip=0x00024a; 	T(SHL(al, 1));	// 44559 shl     al, 1 ;~ 18DE:024A
cs=0x18de;eip=0x00024c; 	T(SHL(al, 1));	// 44560 shl     al, 1 ;~ 18DE:024C
cs=0x18de;eip=0x00024e; 	T(SHL(al, 1));	// 44561 shl     al, 1 ;~ 18DE:024E
cs=0x18de;eip=0x000250; 	T(SHL(al, 1));	// 44562 shl     al, 1 ;~ 18DE:0250
cs=0x18de;eip=0x000252; 	T(SHR(ch, 1));	// 44563 shr     ch, 1 ;~ 18DE:0252
cs=0x18de;eip=0x000254; 	T(SHL(cl, 1));	// 44564 shl     cl, 1 ;~ 18DE:0254
cs=0x18de;eip=0x000256; 	T(SHL(cl, 1));	// 44565 shl     cl, 1 ;~ 18DE:0256
cs=0x18de;eip=0x000258; 	T(SHL(cl, 1));	// 44566 shl     cl, 1 ;~ 18DE:0258
cs=0x18de;eip=0x00025a; 	T(OR(cl, ch));	// 44567 or      cl, ch ;~ 18DE:025A
cs=0x18de;eip=0x00025c; 	T(OR(cl, dh));	// 44568 or      cl, dh ;~ 18DE:025C
cs=0x18de;eip=0x00025e; 	T(OR(cl, dl));	// 44569 or      cl, dl ;~ 18DE:025E
cs=0x18de;eip=0x000260; 	T(OR(cl, ah));	// 44570 or      cl, ah ;~ 18DE:0260
cs=0x18de;eip=0x000262; 	T(OR(cl, al));	// 44571 or      cl, al ;~ 18DE:0262
loc_27624:
	// 7628 
cs=0x18de;eip=0x000264; 	T(MOV(ah, 0x10));	// 44575 mov     ah, 10h ;~ 18DE:0264
cs=0x18de;eip=0x000266; 	T(XOR(al, al));	// 44576 xor     al, al ;~ 18DE:0266
cs=0x18de;eip=0x000268; 	T(MOV(bh, cl));	// 44577 mov     bh, cl ;~ 18DE:0268
cs=0x18de;eip=0x00026a; 	R(_INT(0x10));	// 44578 int     10h             ; - VIDEO - SET PALETTE REGISTER (Jr, PS, TANDY 1000, EGA, VGA) ;~ 18DE:026A
cs=0x18de;eip=0x00026c; 	R(JMP(loc_27638));	// 44581 jmp     short loc_27638 ;~ 18DE:026C
ret_18de_26e:
	// 7629 
cs=0x18de;eip=0x00026e; 	T(MOV(dh, dl));	// 44583 mov     dh, dl ;~ 18DE:026E
cs=0x18de;eip=0x000270; 	T(MOV(ch, al));	// 44584 mov     ch, al ;~ 18DE:0270
cs=0x18de;eip=0x000272; 	T(MOV(ah, 0x10));	// 44585 mov     ah, 10h ;~ 18DE:0272
cs=0x18de;eip=0x000274; 	T(MOV(al, ah));	// 44586 mov     al, ah ;~ 18DE:0274
cs=0x18de;eip=0x000276; 	R(_INT(0x10));	// 44587 int     10h             ; - VIDEO - SET INDIVIDUAL DAC REGISTER (EGA, VGA/MCGA) ;~ 18DE:0276
loc_27638:
	// 7630 
cs=0x18de;eip=0x000278; 	T(XOR(ax, ax));	// 44593 xor     ax, ax ;~ 18DE:0278
cs=0x18de;eip=0x00027a; 	X(POP(di));	// 44594 pop     di ;~ 18DE:027A
cs=0x18de;eip=0x00027b; 	X(POP(si));	// 44595 pop     si ;~ 18DE:027B
cs=0x18de;eip=0x00027c; 	X(POP(bp));	// 44596 pop     bp ;~ 18DE:027C
cs=0x18de;eip=0x00027d; 	R(RETF(0));	// 44597 retf ;~ 18DE:027D
ret_18de_2a8:
	// 7631 
cs=0x18de;eip=0x0002a8; 	X(PUSH(bp));	// 44603 push    bp ;~ 18DE:02A8
cs=0x18de;eip=0x0002a9; 	T(MOV(bp, sp));	// 44604 mov     bp, sp ;~ 18DE:02A9
cs=0x18de;eip=0x0002ab; 	X(PUSH(si));	// 44605 push    si ;~ 18DE:02AB
cs=0x18de;eip=0x0002ac; 	X(PUSH(di));	// 44606 push    di ;~ 18DE:02AC
cs=0x18de;eip=0x0002ad; 	T(MOV(dx, *(dw*)(raddr(ss,bp+6))));	// 44607 mov     dx, [bp+6] ;~ 18DE:02AD
cs=0x18de;eip=0x0002b0; 	T(MOV(cx, *(dw*)(raddr(ss,bp+8))));	// 44608 mov     cx, [bp+8] ;~ 18DE:02B0
cs=0x18de;eip=0x0002b3; 	T(bx = offset(dseg,unk_2bf1e));	// 44609 lea     bx, unk_2BF1E ;~ 18DE:02B3
cs=0x18de;eip=0x0002b7; 	T(ADD(bx, word_37b84));	// 44610 add     bx, word_37B84 ;~ 18DE:02B7
cs=0x18de;eip=0x0002bb; __disp=*(dw*)(raddr(cs,bx));
	R(JMP(__dispatch_call));	// 44611 jmp     word ptr cs:[bx] ;~ 18DE:02BB
ret_18de_2be:
	// 7632 
cs=0x18de;eip=0x0002be; 	T(MOV(ah, 0x0B));	// 44613 mov     ah, 0Bh ;~ 18DE:02BE
cs=0x18de;eip=0x0002c0; 	T(bx = offset(dseg,unk_381ae));	// 44614 lea     bx, unk_381AE ;~ 18DE:02C0
cs=0x18de;eip=0x0002c4; 	T(ADD(bx, dx));	// 44615 add     bx, dx ;~ 18DE:02C4
cs=0x18de;eip=0x0002c6; 	T(MOV(bl, *(raddr(ds,bx))));	// 44616 mov     bl, [bx] ;~ 18DE:02C6
cs=0x18de;eip=0x0002c8; 	T(OR(bl, cl));	// 44617 or      bl, cl ;~ 18DE:02C8
cs=0x18de;eip=0x0002ca; 	T(XOR(bh, bh));	// 44618 xor     bh, bh ;~ 18DE:02CA
cs=0x18de;eip=0x0002cc; 	R(_INT(0x10));	// 44619 int     10h             ; - VIDEO - SET COLOR PALETTE ;~ 18DE:02CC
cs=0x18de;eip=0x0002ce; 	T(MOV(ah, 0x0B));	// 44622 mov     ah, 0Bh ;~ 18DE:02CE
cs=0x18de;eip=0x0002d0; 	T(bx = offset(dseg,unk_381ba));	// 44623 lea     bx, unk_381BA ;~ 18DE:02D0
cs=0x18de;eip=0x0002d4; 	T(ADD(bx, *(dw*)(raddr(ss,bp+6))));	// 44624 add     bx, [bp+6] ;~ 18DE:02D4
cs=0x18de;eip=0x0002d7; 	T(MOV(bl, *(raddr(ds,bx))));	// 44625 mov     bl, [bx] ;~ 18DE:02D7
cs=0x18de;eip=0x0002d9; 	T(MOV(bh, 1));	// 44626 mov     bh, 1 ;~ 18DE:02D9
cs=0x18de;eip=0x0002db; 	R(_INT(0x10));	// 44627 int     10h             ; - VIDEO - SET COLOR PALETTE ;~ 18DE:02DB
cs=0x18de;eip=0x0002dd; 	T(XOR(ax, ax));	// 44630 xor     ax, ax ;~ 18DE:02DD
cs=0x18de;eip=0x0002df; 	T(MOV(es, ax));	// 44631 mov     es, ax ;~ 18DE:02DF
cs=0x18de;eip=0x0002e1; 	T(MOV(al, *(raddr(es,0x465))));	// 44632 mov     al, es:465h ;~ 18DE:02E1
cs=0x18de;eip=0x0002e5; 	T(AND(al, 0x0FB));	// 44633 and     al, 0FBh ;~ 18DE:02E5
cs=0x18de;eip=0x0002e7; 	T(bx = offset(dseg,unk_381b4));	// 44634 lea     bx, unk_381B4 ;~ 18DE:02E7
cs=0x18de;eip=0x0002eb; 	T(ADD(bx, *(dw*)(raddr(ss,bp+6))));	// 44635 add     bx, [bp+6] ;~ 18DE:02EB
cs=0x18de;eip=0x0002ee; 	T(MOV(ah, *(raddr(ds,bx))));	// 44636 mov     ah, [bx] ;~ 18DE:02EE
cs=0x18de;eip=0x0002f0; 	T(OR(al, ah));	// 44637 or      al, ah ;~ 18DE:02F0
cs=0x18de;eip=0x0002f2; 	T(MOV(dx, 0x3D8));	// 44638 mov     dx, 3D8h ;~ 18DE:02F2
cs=0x18de;eip=0x0002f5; 	R(OUT(dx, al));	// 44639 out     dx, al ;~ 18DE:02F5
cs=0x18de;eip=0x0002f6; 	X(MOV(*(raddr(es,0x465)), al));	// 44640 mov     es:465h, al ;~ 18DE:02F6
cs=0x18de;eip=0x0002fa; 	R(JMP(loc_27738));	// 44641 jmp     short loc_27738 ;~ 18DE:02FA
ret_18de_2fc:
	// 7633 
cs=0x18de;eip=0x0002fc; 	T(MOV(ah, 0x0B));	// 44643 mov     ah, 0Bh ;~ 18DE:02FC
cs=0x18de;eip=0x0002fe; 	T(XOR(bh, bh));	// 44644 xor     bh, bh ;~ 18DE:02FE
cs=0x18de;eip=0x000300; 	T(MOV(bl, cl));	// 44645 mov     bl, cl ;~ 18DE:0300
cs=0x18de;eip=0x000302; 	R(_INT(0x10));	// 44646 int     10h             ; - VIDEO - SET COLOR PALETTE ;~ 18DE:0302
cs=0x18de;eip=0x000304; 	R(JMP(loc_27738));	// 44649 jmp     short loc_27738 ;~ 18DE:0304
ret_18de_306:
	// 7634 
cs=0x18de;eip=0x000306; 	T(MOV(bl, dl));	// 44651 mov     bl, dl ;~ 18DE:0306
cs=0x18de;eip=0x000308; 	T(MOV(dx, 0x3DA));	// 44652 mov     dx, 3DAh ;~ 18DE:0308
cs=0x18de;eip=0x00030b; 	R(IN(al, dx));	// 44653 in      al, dx          ; Video status bits: ;~ 18DE:030B
cs=0x18de;eip=0x00030c; 	T(MOV(al, bl));	// 44658 mov     al, bl ;~ 18DE:030C
cs=0x18de;eip=0x00030e; 	T(OR(al, 0x10));	// 44659 or      al, 10h ;~ 18DE:030E
cs=0x18de;eip=0x000310; 	R(OUT(dx, al));	// 44660 out     dx, al          ; Video: bits 0-1 control ;~ 18DE:0310
cs=0x18de;eip=0x000311; 	T(ADD(dl, 4));	// 44662 add     dl, 4 ;~ 18DE:0311
cs=0x18de;eip=0x000314; 	T(MOV(al, cl));	// 44663 mov     al, cl ;~ 18DE:0314
cs=0x18de;eip=0x000316; 	R(OUT(dx, al));	// 44664 out     dx, al ;~ 18DE:0316
cs=0x18de;eip=0x000317; 	R(JMP(loc_27738));	// 44665 jmp     short loc_27738 ;~ 18DE:0317
ret_18de_319:
	// 7635 
cs=0x18de;eip=0x000319; 	T(MOV(ah, 0x10));	// 44667 mov     ah, 10h ;~ 18DE:0319
cs=0x18de;eip=0x00031b; 	T(XOR(al, al));	// 44668 xor     al, al ;~ 18DE:031B
cs=0x18de;eip=0x00031d; 	T(MOV(bh, cl));	// 44669 mov     bh, cl ;~ 18DE:031D
cs=0x18de;eip=0x00031f; 	T(MOV(bl, dl));	// 44670 mov     bl, dl ;~ 18DE:031F
cs=0x18de;eip=0x000321; 	R(_INT(0x10));	// 44671 int     10h             ; - VIDEO - SET PALETTE REGISTER (Jr, PS, TANDY 1000, EGA, VGA) ;~ 18DE:0321
cs=0x18de;eip=0x000323; 	R(JMP(loc_27738));	// 44674 jmp     short loc_27738 ;~ 18DE:0323
ret_18de_325:
	// 7636 
cs=0x18de;eip=0x000325; 	T(MOV(ax, cx));	// 44676 mov     ax, cx ;~ 18DE:0325
cs=0x18de;eip=0x000327; 	T(MOV(bx, dx));	// 44677 mov     bx, dx ;~ 18DE:0327
cs=0x18de;eip=0x000329; 	T(MOV(cl, al));	// 44678 mov     cl, al ;~ 18DE:0329
cs=0x18de;eip=0x00032b; 	T(AND(cl, 1));	// 44679 and     cl, 1 ;~ 18DE:032B
cs=0x18de;eip=0x00032e; 	T(SHR(al, 1));	// 44680 shr     al, 1 ;~ 18DE:032E
cs=0x18de;eip=0x000330; 	T(MOV(ch, al));	// 44681 mov     ch, al ;~ 18DE:0330
cs=0x18de;eip=0x000332; 	T(AND(ch, 1));	// 44682 and     ch, 1 ;~ 18DE:0332
cs=0x18de;eip=0x000335; 	T(SHR(al, 1));	// 44683 shr     al, 1 ;~ 18DE:0335
cs=0x18de;eip=0x000337; 	T(MOV(dh, al));	// 44684 mov     dh, al ;~ 18DE:0337
cs=0x18de;eip=0x000339; 	T(AND(dh, 1));	// 44685 and     dh, 1 ;~ 18DE:0339
cs=0x18de;eip=0x00033c; 	T(AND(al, 0x0FE));	// 44686 and     al, 0FEh ;~ 18DE:033C
cs=0x18de;eip=0x00033e; 	T(OR(cl, al));	// 44687 or      cl, al ;~ 18DE:033E
cs=0x18de;eip=0x000340; 	T(AND(cl, 3));	// 44688 and     cl, 3 ;~ 18DE:0340
cs=0x18de;eip=0x000343; 	T(SHR(al, 1));	// 44689 shr     al, 1 ;~ 18DE:0343
cs=0x18de;eip=0x000345; 	T(AND(al, 0x0FE));	// 44690 and     al, 0FEh ;~ 18DE:0345
cs=0x18de;eip=0x000347; 	T(OR(ch, al));	// 44691 or      ch, al ;~ 18DE:0347
cs=0x18de;eip=0x000349; 	T(AND(ch, 3));	// 44692 and     ch, 3 ;~ 18DE:0349
cs=0x18de;eip=0x00034c; 	T(SHR(al, 1));	// 44693 shr     al, 1 ;~ 18DE:034C
cs=0x18de;eip=0x00034e; 	T(AND(al, 0x0FE));	// 44694 and     al, 0FEh ;~ 18DE:034E
cs=0x18de;eip=0x000350; 	T(OR(dh, al));	// 44695 or      dh, al ;~ 18DE:0350
cs=0x18de;eip=0x000352; 	T(AND(dh, 3));	// 44696 and     dh, 3 ;~ 18DE:0352
cs=0x18de;eip=0x000355; 	T(di = offset(dseg,unk_381c0));	// 44697 lea     di, unk_381C0 ;~ 18DE:0355
cs=0x18de;eip=0x000359; 	T(MOV(si, di));	// 44698 mov     si, di ;~ 18DE:0359
cs=0x18de;eip=0x00035b; 	T(MOV(al, cl));	// 44699 mov     al, cl ;~ 18DE:035B
cs=0x18de;eip=0x00035d; 	T(CBW);	// 44700 cbw ;~ 18DE:035D
cs=0x18de;eip=0x00035e; 	T(ADD(si, ax));	// 44701 add     si, ax ;~ 18DE:035E
cs=0x18de;eip=0x000360; 	T(MOV(cl, *(raddr(ds,si))));	// 44702 mov     cl, [si] ;~ 18DE:0360
cs=0x18de;eip=0x000362; 	T(MOV(si, di));	// 44703 mov     si, di ;~ 18DE:0362
cs=0x18de;eip=0x000364; 	T(MOV(al, ch));	// 44704 mov     al, ch ;~ 18DE:0364
cs=0x18de;eip=0x000366; 	T(ADD(si, ax));	// 44705 add     si, ax ;~ 18DE:0366
cs=0x18de;eip=0x000368; 	T(MOV(ch, *(raddr(ds,si))));	// 44706 mov     ch, [si] ;~ 18DE:0368
cs=0x18de;eip=0x00036a; 	T(MOV(si, di));	// 44707 mov     si, di ;~ 18DE:036A
cs=0x18de;eip=0x00036c; 	T(MOV(al, dh));	// 44708 mov     al, dh ;~ 18DE:036C
cs=0x18de;eip=0x00036e; 	T(ADD(si, ax));	// 44709 add     si, ax ;~ 18DE:036E
cs=0x18de;eip=0x000370; 	T(MOV(dh, *(raddr(ds,si))));	// 44710 mov     dh, [si] ;~ 18DE:0370
cs=0x18de;eip=0x000372; 	T(MOV(ah, 0x10));	// 44711 mov     ah, 10h ;~ 18DE:0372
cs=0x18de;eip=0x000374; 	T(MOV(al, ah));	// 44712 mov     al, ah ;~ 18DE:0374
cs=0x18de;eip=0x000376; 	R(_INT(0x10));	// 44713 int     10h             ; - VIDEO - SET INDIVIDUAL DAC REGISTER (EGA, VGA/MCGA) ;~ 18DE:0376
loc_27738:
	// 7637 
cs=0x18de;eip=0x000378; 	T(XOR(ax, ax));	// 44719 xor     ax, ax ;~ 18DE:0378
cs=0x18de;eip=0x00037a; 	X(POP(di));	// 44720 pop     di ;~ 18DE:037A
cs=0x18de;eip=0x00037b; 	X(POP(si));	// 44721 pop     si ;~ 18DE:037B
cs=0x18de;eip=0x00037c; 	X(POP(bp));	// 44722 pop     bp ;~ 18DE:037C
cs=0x18de;eip=0x00037d; 	R(RETF(0));	// 44723 retf ;~ 18DE:037D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_273f7: 	goto loc_273f7;
        case m2c::kloc_273fa: 	goto loc_273fa;
        case m2c::kloc_2741e: 	goto loc_2741e;
        case m2c::kloc_27442: 	goto loc_27442;
        case m2c::kloc_2746e: 	goto loc_2746e;
        case m2c::kloc_2748a: 	goto loc_2748a;
        case m2c::kloc_2749d: 	goto loc_2749d;
        case m2c::kloc_274ce: 	goto loc_274ce;
        case m2c::kloc_274f0: 	goto loc_274f0;
        case m2c::kloc_274f9: 	goto loc_274f9;
        case m2c::kloc_27521: 	goto loc_27521;
        case m2c::kloc_27536: 	goto loc_27536;
        case m2c::kloc_2755c: 	goto loc_2755c;
        case m2c::kloc_275c2: 	goto loc_275c2;
        case m2c::kloc_27624: 	goto loc_27624;
        case m2c::kloc_27638: 	goto loc_27638;
        case m2c::kloc_27738: 	goto loc_27738;
        case m2c::kret_18de_1cb: 	goto ret_18de_1cb;
        case m2c::kret_18de_1e6: 	goto ret_18de_1e6;
        case m2c::kret_18de_213: 	goto ret_18de_213;
        case m2c::kret_18de_231: 	goto ret_18de_231;
        case m2c::kret_18de_26e: 	goto ret_18de_26e;
        case m2c::kret_18de_2a8: 	goto ret_18de_2a8;
        case m2c::kret_18de_2be: 	goto ret_18de_2be;
        case m2c::kret_18de_2fc: 	goto ret_18de_2fc;
        case m2c::kret_18de_306: 	goto ret_18de_306;
        case m2c::kret_18de_319: 	goto ret_18de_319;
        case m2c::kret_18de_325: 	goto ret_18de_325;
        case m2c::kret_18de_5: 	goto ret_18de_5;
        case m2c::kseg024_proc: 	goto seg024_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

