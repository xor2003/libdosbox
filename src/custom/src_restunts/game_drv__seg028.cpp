/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool _group18(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group18:
    _begin:
audiodriver_timer:
	// 84288 
cs=0x2a05;eip=0x00000c; 	X(PUSH(ds));	// 84289 push    ds ;~ 2A05:000C
ret_2a05_d:
	// 10167 
cs=0x2a05;eip=0x00000d; 	T(MOV(ax, seg_offset(dseg)));	// 84290 mov     ax, seg dseg ;~ 2A05:000D
cs=0x2a05;eip=0x000010; 	T(MOV(ds, ax));	// 84291 mov     ds, ax ;~ 2A05:0010
cs=0x2a05;eip=0x000012; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 84292 mov     ax, word ptr audiodriverbinary ;~ 2A05:0012
cs=0x2a05;eip=0x000015; 	T(OR(ax, *(dw*)(((db*)&audiodriverbinary)+2)));	// 84293 or      ax, word ptr audiodriverbinary+2 ;~ 2A05:0015
cs=0x2a05;eip=0x000019; 	R(JZ(loc_38688));	// 84294 jz      short loc_38688 ;~ 2A05:0019
cs=0x2a05;eip=0x00001b; 	T(CMP(word_4063a, 0));	// 84295 cmp     word_4063A, 0 ;~ 2A05:001B
cs=0x2a05;eip=0x000020; 	R(JNZ(loc_38688));	// 84296 jnz     short loc_38688 ;~ 2A05:0020
cs=0x2a05;eip=0x000022; 	T(CMP(word_407aa, 0));	// 84297 cmp     word_407AA, 0 ;~ 2A05:0022
cs=0x2a05;eip=0x000027; 	R(JNZ(loc_38688));	// 84298 jnz     short loc_38688 ;~ 2A05:0027
cs=0x2a05;eip=0x000029; 	X(INC(word_407aa));	// 84299 inc     word_407AA ;~ 2A05:0029
cs=0x2a05;eip=0x00002d; 	X(PUSH(cs));	// 84300 push    cs ;~ 2A05:002D
cs=0x2a05;eip=0x00002e; 	R(CALL(sub_39700,0));	// 84301 call    near ptr sub_39700 ;~ 2A05:002E
cs=0x2a05;eip=0x000031; 	T(CMP(byte_40632, 1));	// 84302 cmp     byte_40632, 1 ;~ 2A05:0031
cs=0x2a05;eip=0x000036; 	R(JNZ(loc_3867c));	// 84303 jnz     short loc_3867C ;~ 2A05:0036
cs=0x2a05;eip=0x000038; 	T(CMP(audioflag2, 1));	// 84304 cmp     audioflag2, 1 ;~ 2A05:0038
cs=0x2a05;eip=0x00003d; 	R(JNZ(loc_3867c));	// 84305 jnz     short loc_3867C ;~ 2A05:003D
cs=0x2a05;eip=0x00003f; 	T(CMP(byte_40630, 0));	// 84306 cmp     byte_40630, 0 ;~ 2A05:003F
cs=0x2a05;eip=0x000044; 	R(JNZ(loc_3867c));	// 84307 jnz     short loc_3867C ;~ 2A05:0044
cs=0x2a05;eip=0x000046; 	X(PUSH(cs));	// 84308 push    cs ;~ 2A05:0046
cs=0x2a05;eip=0x000047; 	R(CALL(sub_3868a,0));	// 84309 call    near ptr sub_3868A ;~ 2A05:0047
cs=0x2a05;eip=0x00004a; 	R(JMP(loc_38680));	// 84310 jmp     short loc_38680 ;~ 2A05:004A
loc_3867c:
	// 10168 
cs=0x2a05;eip=0x00004c; 	X(PUSH(cs));	// 84315 push    cs ;~ 2A05:004C
cs=0x2a05;eip=0x00004d; 	R(CALL(sub_3963c,0));	// 84316 call    near ptr sub_3963C ;~ 2A05:004D
loc_38680:
	// 10169 
cs=0x2a05;eip=0x000050; 	X(PUSH(cs));	// 84319 push    cs ;~ 2A05:0050
cs=0x2a05;eip=0x000051; 	R(CALL(sub_386d6,0));	// 84320 call    near ptr sub_386D6 ;~ 2A05:0051
cs=0x2a05;eip=0x000054; 	X(DEC(word_407aa));	// 84321 dec     word_407AA ;~ 2A05:0054
loc_38688:
	// 10170 
cs=0x2a05;eip=0x000058; 	X(POP(ds));	// 84325 pop     ds ;~ 2A05:0058
cs=0x2a05;eip=0x000059; 	R(RETF(0));	// 84326 retf ;~ 2A05:0059
sub_3868a:
	// 84334 
#undef var_2
#define var_2 -2
	// 84336 var_2           = byte ptr -2 ;~ 2A05:005A
ret_2a05_5a:
	// 10171 
cs=0x2a05;eip=0x00005a; 	X(PUSH(bp));	// 84338 push    bp ;~ 2A05:005A
cs=0x2a05;eip=0x00005b; 	T(MOV(bp, sp));	// 84339 mov     bp, sp ;~ 2A05:005B
cs=0x2a05;eip=0x00005d; 	T(SUB(sp, 2));	// 84340 sub     sp, 2 ;~ 2A05:005D
cs=0x2a05;eip=0x000060; 	X(PUSH(ds));	// 84341 push    ds ;~ 2A05:0060
cs=0x2a05;eip=0x000061; 	T(MOV(ax, seg_offset(dseg)));	// 84342 mov     ax, seg dseg ;~ 2A05:0061
cs=0x2a05;eip=0x000064; 	T(MOV(ds, ax));	// 84343 mov     ds, ax ;~ 2A05:0064
cs=0x2a05;eip=0x000066; 	X(ADD(word_44d48, 0x80));	// 84344 add     word_44D48, 80h ; '€' ;~ 2A05:0066
cs=0x2a05;eip=0x00006c; 	R(JMP(loc_386b6));	// 84345 jmp     short loc_386B6 ;~ 2A05:006C
loc_3869e:
	// 10172 
cs=0x2a05;eip=0x00006e; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 84349 mov     al, [bp+var_2] ;~ 2A05:006E
cs=0x2a05;eip=0x000071; 	T(SUB(ah, ah));	// 84350 sub     ah, ah ;~ 2A05:0071
cs=0x2a05;eip=0x000073; 	X(PUSH(ax));	// 84351 push    ax ;~ 2A05:0073
cs=0x2a05;eip=0x000074; 	X(PUSH(cs));	// 84352 push    cs ;~ 2A05:0074
cs=0x2a05;eip=0x000075; 	R(CALL(sub_38702,0));	// 84353 call    near ptr sub_38702 ;~ 2A05:0075
cs=0x2a05;eip=0x000078; 	T(ADD(sp, 2));	// 84354 add     sp, 2 ;~ 2A05:0078
cs=0x2a05;eip=0x00007b; 	X(INC(*(raddr(ss,bp+var_2))));	// 84355 inc     [bp+var_2] ;~ 2A05:007B
loc_386ae:
	// 10173 
cs=0x2a05;eip=0x00007e; 	T(MOV(al, byte_44290));	// 84358 mov     al, byte_44290 ;~ 2A05:007E
cs=0x2a05;eip=0x000081; 	T(CMP(*(raddr(ss,bp+var_2)), al));	// 84359 cmp     [bp+var_2], al ;~ 2A05:0081
cs=0x2a05;eip=0x000084; 	R(JC(loc_3869e));	// 84360 jb      short loc_3869E ;~ 2A05:0084
loc_386b6:
	// 10174 
cs=0x2a05;eip=0x000086; 	T(MOV(ax, word_454ba));	// 84363 mov     ax, word_454BA ;~ 2A05:0086
cs=0x2a05;eip=0x000089; 	T(CMP(word_44d48, ax));	// 84364 cmp     word_44D48, ax ;~ 2A05:0089
cs=0x2a05;eip=0x00008d; 	R(JC(loc_386d0));	// 84365 jb      short loc_386D0 ;~ 2A05:008D
cs=0x2a05;eip=0x00008f; 	X(PUSH(cs));	// 84366 push    cs ;~ 2A05:008F
cs=0x2a05;eip=0x000090; 	R(CALL(sub_3963c,0));	// 84367 call    near ptr sub_3963C ;~ 2A05:0090
cs=0x2a05;eip=0x000093; 	T(MOV(ax, word_454ba));	// 84368 mov     ax, word_454BA ;~ 2A05:0093
cs=0x2a05;eip=0x000096; 	X(SUB(word_44d48, ax));	// 84369 sub     word_44D48, ax ;~ 2A05:0096
cs=0x2a05;eip=0x00009a; 	X(MOV(*(raddr(ss,bp+var_2)), 0));	// 84370 mov     [bp+var_2], 0 ;~ 2A05:009A
cs=0x2a05;eip=0x00009e; 	R(JMP(loc_386ae));	// 84371 jmp     short loc_386AE ;~ 2A05:009E
loc_386d0:
	// 10175 
cs=0x2a05;eip=0x0000a0; 	X(POP(ds));	// 84375 pop     ds ;~ 2A05:00A0
cs=0x2a05;eip=0x0000a1; 	T(MOV(sp, bp));	// 84376 mov     sp, bp ;~ 2A05:00A1
cs=0x2a05;eip=0x0000a3; 	X(POP(bp));	// 84377 pop     bp ;~ 2A05:00A3
cs=0x2a05;eip=0x0000a4; 	R(RETF(0));	// 84378 retf ;~ 2A05:00A4
sub_386d6:
	// 84388 
#undef var_2
#define var_2 -2
	// 84390 var_2           = byte ptr -2 ;~ 2A05:00A6
ret_2a05_a6:
	// 10176 
cs=0x2a05;eip=0x0000a6; 	X(PUSH(bp));	// 84392 push    bp ;~ 2A05:00A6
cs=0x2a05;eip=0x0000a7; 	T(MOV(bp, sp));	// 84393 mov     bp, sp ;~ 2A05:00A7
cs=0x2a05;eip=0x0000a9; 	T(SUB(sp, 2));	// 84394 sub     sp, 2 ;~ 2A05:00A9
cs=0x2a05;eip=0x0000ac; 	X(PUSH(ds));	// 84395 push    ds ;~ 2A05:00AC
cs=0x2a05;eip=0x0000ad; 	T(MOV(ax, seg_offset(dseg)));	// 84396 mov     ax, seg dseg ;~ 2A05:00AD
cs=0x2a05;eip=0x0000b0; 	T(MOV(ds, ax));	// 84397 mov     ds, ax ;~ 2A05:00B0
cs=0x2a05;eip=0x0000b2; 	X(MOV(*(raddr(ss,bp+var_2)), 0x10));	// 84398 mov     [bp+var_2], 10h ;~ 2A05:00B2
loc_386e6:
	// 10177 
cs=0x2a05;eip=0x0000b6; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 84401 mov     al, [bp+var_2] ;~ 2A05:00B6
cs=0x2a05;eip=0x0000b9; 	T(SUB(ah, ah));	// 84402 sub     ah, ah ;~ 2A05:00B9
cs=0x2a05;eip=0x0000bb; 	X(PUSH(ax));	// 84403 push    ax ;~ 2A05:00BB
cs=0x2a05;eip=0x0000bc; 	X(PUSH(cs));	// 84404 push    cs ;~ 2A05:00BC
cs=0x2a05;eip=0x0000bd; 	R(CALL(sub_38702,0));	// 84405 call    near ptr sub_38702 ;~ 2A05:00BD
cs=0x2a05;eip=0x0000c0; 	T(ADD(sp, 2));	// 84406 add     sp, 2 ;~ 2A05:00C0
cs=0x2a05;eip=0x0000c3; 	X(INC(*(raddr(ss,bp+var_2))));	// 84407 inc     [bp+var_2] ;~ 2A05:00C3
cs=0x2a05;eip=0x0000c6; 	T(CMP(*(raddr(ss,bp+var_2)), 0x17));	// 84408 cmp     [bp+var_2], 17h ;~ 2A05:00C6
cs=0x2a05;eip=0x0000ca; 	R(JC(loc_386e6));	// 84409 jb      short loc_386E6 ;~ 2A05:00CA
cs=0x2a05;eip=0x0000cc; 	X(POP(ds));	// 84410 pop     ds ;~ 2A05:00CC
cs=0x2a05;eip=0x0000cd; 	T(MOV(sp, bp));	// 84411 mov     sp, bp ;~ 2A05:00CD
cs=0x2a05;eip=0x0000cf; 	X(POP(bp));	// 84412 pop     bp ;~ 2A05:00CF
cs=0x2a05;eip=0x0000d0; 	R(RETF(0));	// 84413 retf ;~ 2A05:00D0
sub_38702:
	// 84423 
#undef var_e
#define var_e -0x0E
	// 84426 var_E           = byte ptr -0Eh ;~ 2A05:00D2
#undef var_c
#define var_c -0x0C
	// 84427 var_C           = dword ptr -0Ch ;~ 2A05:00D2
#undef var_8
#define var_8 -8
	// 84428 var_8           = dword ptr -8 ;~ 2A05:00D2
#undef var_4
#define var_4 -4
	// 84429 var_4           = word ptr -4 ;~ 2A05:00D2
#undef var_2
#define var_2 -2
	// 84430 var_2           = byte ptr -2 ;~ 2A05:00D2
#undef arg_0
#define arg_0 6
	// 84431 arg_0           = word ptr  6 ;~ 2A05:00D2
ret_2a05_d2:
	// 10178 
cs=0x2a05;eip=0x0000d2; 	X(PUSH(bp));	// 84433 push    bp ;~ 2A05:00D2
cs=0x2a05;eip=0x0000d3; 	T(MOV(bp, sp));	// 84434 mov     bp, sp ;~ 2A05:00D3
cs=0x2a05;eip=0x0000d5; 	T(SUB(sp, 0x0E));	// 84435 sub     sp, 0Eh ;~ 2A05:00D5
cs=0x2a05;eip=0x0000d8; 	X(PUSH(di));	// 84436 push    di ;~ 2A05:00D8
cs=0x2a05;eip=0x0000d9; 	X(PUSH(si));	// 84437 push    si ;~ 2A05:00D9
cs=0x2a05;eip=0x0000da; 	X(PUSH(ds));	// 84438 push    ds ;~ 2A05:00DA
cs=0x2a05;eip=0x0000db; 	T(MOV(ax, seg_offset(dseg)));	// 84439 mov     ax, seg dseg ;~ 2A05:00DB
cs=0x2a05;eip=0x0000de; 	T(MOV(ds, ax));	// 84440 mov     ds, ax ;~ 2A05:00DE
cs=0x2a05;eip=0x0000e0; 	X(MOV(*(raddr(ss,bp+var_2)), 0));	// 84441 mov     [bp+var_2], 0 ;~ 2A05:00E0
cs=0x2a05;eip=0x0000e4; 	T(MOV(ax, 0x4C));	// 84442 mov     ax, 4Ch ; 'L' ;~ 2A05:00E4
cs=0x2a05;eip=0x0000e7; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 84443 imul    [bp+arg_0] ;~ 2A05:00E7
cs=0x2a05;eip=0x0000ea; 	T(ADD(ax, 0x81FC));	// 84444 add     ax, 81FCh ;~ 2A05:00EA
cs=0x2a05;eip=0x0000ed; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 84445 mov     [bp+var_4], ax ;~ 2A05:00ED
cs=0x2a05;eip=0x0000f0; 	T(MOV(bx, ax));	// 84446 mov     bx, ax ;~ 2A05:00F0
cs=0x2a05;eip=0x0000f2; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x18))));	// 84447 mov     ax, [bx+18h] ;~ 2A05:00F2
cs=0x2a05;eip=0x0000f5; 	T(OR(ax, *(dw*)(raddr(ds,bx+0x1A))));	// 84448 or      ax, [bx+1Ah] ;~ 2A05:00F5
cs=0x2a05;eip=0x0000f8; 	R(JZ(loc_3872d));	// 84449 jz      short loc_3872D ;~ 2A05:00F8
cs=0x2a05;eip=0x0000fa; 	R(JMP(loc_38a98));	// 84450 jmp     loc_38A98 ;~ 2A05:00FA
loc_3872d:
	// 10179 
cs=0x2a05;eip=0x0000fd; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 84454 mov     ax, [bx] ;~ 2A05:00FD
cs=0x2a05;eip=0x0000ff; 	T(OR(ax, *(dw*)(raddr(ds,bx+2))));	// 84455 or      ax, [bx+2] ;~ 2A05:00FF
cs=0x2a05;eip=0x000102; 	R(JNZ(loc_38737));	// 84456 jnz     short loc_38737 ;~ 2A05:0102
cs=0x2a05;eip=0x000104; 	R(JMP(loc_38aa0));	// 84457 jmp     loc_38AA0 ;~ 2A05:0104
loc_38737:
	// 10180 
cs=0x2a05;eip=0x000107; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x18))));	// 84462 mov     ax, [bx+18h] ;~ 2A05:0107
cs=0x2a05;eip=0x00010a; 	T(OR(ax, *(dw*)(raddr(ds,bx+0x1A))));	// 84463 or      ax, [bx+1Ah] ;~ 2A05:010A
cs=0x2a05;eip=0x00010d; 	R(JZ(loc_38742));	// 84464 jz      short loc_38742 ;~ 2A05:010D
cs=0x2a05;eip=0x00010f; 	R(JMP(loc_38a98));	// 84465 jmp     loc_38A98 ;~ 2A05:010F
loc_38742:
	// 10181 
cs=0x2a05;eip=0x000112; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 84469 mov     ax, [bx] ;~ 2A05:0112
cs=0x2a05;eip=0x000114; 	T(OR(ax, *(dw*)(raddr(ds,bx+2))));	// 84470 or      ax, [bx+2] ;~ 2A05:0114
cs=0x2a05;eip=0x000117; 	R(JNZ(loc_3874c));	// 84471 jnz     short loc_3874C ;~ 2A05:0117
cs=0x2a05;eip=0x000119; 	R(JMP(loc_38a98));	// 84472 jmp     loc_38A98 ;~ 2A05:0119
loc_3874c:
	// 10182 
cs=0x2a05;eip=0x00011c; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 84476 push    word ptr [bx+2] ;~ 2A05:011C
cs=0x2a05;eip=0x00011f; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 84477 push    word ptr [bx] ;~ 2A05:011F
cs=0x2a05;eip=0x000121; 	T(MOV(ax, 0x728E));	// 84478 mov     ax, 728Eh ;~ 2A05:0121
cs=0x2a05;eip=0x000124; 	X(PUSH(ax));	// 84479 push    ax ;~ 2A05:0124
cs=0x2a05;eip=0x000125; 	X(PUSH(cs));	// 84480 push    cs ;~ 2A05:0125
cs=0x2a05;eip=0x000126; 	R(CALL(sub_3945a,0));	// 84481 call    near ptr sub_3945A ;~ 2A05:0126
cs=0x2a05;eip=0x000129; 	T(ADD(sp, 6));	// 84482 add     sp, 6 ;~ 2A05:0129
cs=0x2a05;eip=0x00012c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 84483 mov     bx, [bp+var_4] ;~ 2A05:012C
cs=0x2a05;eip=0x00012f; 	T(MOV(al, byte_42a08));	// 84484 mov     al, byte_42A08 ;~ 2A05:012F
cs=0x2a05;eip=0x000132; 	T(SUB(ah, ah));	// 84485 sub     ah, ah ;~ 2A05:0132
cs=0x2a05;eip=0x000134; 	X(ADD(*(dw*)(raddr(ds,bx)), ax));	// 84486 add     [bx], ax ;~ 2A05:0134
cs=0x2a05;eip=0x000136; 	T(CMP(byte_42a02, 0x0D9));	// 84487 cmp     byte_42A02, 0D9h ; 'Ù' ;~ 2A05:0136
cs=0x2a05;eip=0x00013b; 	R(JNC(loc_38770));	// 84488 jnb     short loc_38770 ;~ 2A05:013B
cs=0x2a05;eip=0x00013d; 	R(JMP(loc_38a44));	// 84489 jmp     loc_38A44 ;~ 2A05:013D
loc_38770:
	// 10183 
cs=0x2a05;eip=0x000140; 	T(MOV(al, byte_42a03));	// 84493 mov     al, byte_42A03 ;~ 2A05:0140
cs=0x2a05;eip=0x000143; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 84494 mov     [bp+var_2], al ;~ 2A05:0143
cs=0x2a05;eip=0x000146; 	T(MOV(al, byte_42a02));	// 84495 mov     al, byte_42A02 ;~ 2A05:0146
cs=0x2a05;eip=0x000149; 	T(SUB(ax, 0x0D9));	// 84496 sub     ax, 0D9h ; 'Ù'  ; switch 18 cases ;~ 2A05:0149
cs=0x2a05;eip=0x00014c; 	T(CMP(ax, 0x11));	// 84497 cmp     ax, 11h ;~ 2A05:014C
cs=0x2a05;eip=0x00014f; 	R(JBE(loc_38784));	// 84498 jbe     short loc_38784 ;~ 2A05:014F
cs=0x2a05;eip=0x000151; 	R(JMP(def_38787));	// 84499 jmp     def_38787       ; jumptable 00038787 default case, case 231 ;~ 2A05:0151
loc_38784:
	// 10184 
cs=0x2a05;eip=0x000154; 	T(ADD(ax, ax));	// 84503 add     ax, ax ;~ 2A05:0154
cs=0x2a05;eip=0x000156; 	T(XCHG(ax, bx));	// 84504 xchg    ax, bx ;~ 2A05:0156
	cs=seg_offset(seg028);
cs=0x2a05;eip=0x000157; __disp=*(dw*)(((db*)&jpt_38787)+bx);
	R(JMP(__dispatch_call));	// 84505 jmp     cs:jpt_38787[bx] ; switch jump ;~ 2A05:0157
loc_3878c:
	// 10185 
cs=0x2a05;eip=0x00015c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 84510 mov     bx, [bp+var_4]  ; jumptable 00038787 case 217 ;~ 2A05:015C
cs=0x2a05;eip=0x00015f; 	T(CMP(*(raddr(ds,bx+4)), 0));	// 84511 cmp     byte ptr [bx+4], 0 ;~ 2A05:015F
cs=0x2a05;eip=0x000163; 	R(JZ(loc_387b2));	// 84512 jz      short loc_387B2 ;~ 2A05:0163
cs=0x2a05;eip=0x000165; 	T(MOV(si, *(dw*)(raddr(ds,bx+4))));	// 84513 mov     si, [bx+4] ;~ 2A05:0165
cs=0x2a05;eip=0x000168; 	T(AND(si, 0x0FF));	// 84514 and     si, 0FFh ;~ 2A05:0168
cs=0x2a05;eip=0x00016c; 	T(SHL(si, 1));	// 84515 shl     si, 1 ;~ 2A05:016C
cs=0x2a05;eip=0x00016e; 	T(SHL(si, 1));	// 84516 shl     si, 1 ;~ 2A05:016E
cs=0x2a05;eip=0x000170; 	T(MOV(ax, *(dw*)(raddr(ds,bx+si+5))));	// 84517 mov     ax, [bx+si+5] ;~ 2A05:0170
cs=0x2a05;eip=0x000173; 	T(MOV(dx, *(dw*)(raddr(ds,bx+si+7))));	// 84518 mov     dx, [bx+si+7] ;~ 2A05:0173
cs=0x2a05;eip=0x000176; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 84519 mov     [bx], ax ;~ 2A05:0176
cs=0x2a05;eip=0x000178; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 84520 mov     [bx+2], dx ;~ 2A05:0178
cs=0x2a05;eip=0x00017b; 	X(DEC(*(raddr(ds,bx+4))));	// 84521 dec     byte ptr [bx+4] ;~ 2A05:017B
cs=0x2a05;eip=0x00017e; 	R(JMP(def_38787));	// 84522 jmp     def_38787       ; jumptable 00038787 default case, case 231 ;~ 2A05:017E
loc_387b2:
	// 10186 
cs=0x2a05;eip=0x000182; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x48))));	// 84527 mov     ax, [bx+48h] ;~ 2A05:0182
cs=0x2a05;eip=0x000185; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x4A))));	// 84528 mov     dx, [bx+4Ah] ;~ 2A05:0185
cs=0x2a05;eip=0x000188; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8))), ax));	// 84529 mov     word ptr [bp+var_8], ax ;~ 2A05:0188
cs=0x2a05;eip=0x00018b; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8+2))), dx));	// 84530 mov     word ptr [bp+var_8+2], dx ;~ 2A05:018B
cs=0x2a05;eip=0x00018e; 	T(SUB(ax, ax));	// 84531 sub     ax, ax ;~ 2A05:018E
cs=0x2a05;eip=0x000190; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 84532 mov     [bx+2], ax ;~ 2A05:0190
cs=0x2a05;eip=0x000193; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 84533 mov     [bx], ax ;~ 2A05:0193
cs=0x2a05;eip=0x000195; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 84534 push    [bp+arg_0] ;~ 2A05:0195
cs=0x2a05;eip=0x000198; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 84535 push    [bp+arg_0] ;~ 2A05:0198
cs=0x2a05;eip=0x00019b; 	X(PUSH(cs));	// 84536 push    cs ;~ 2A05:019B
cs=0x2a05;eip=0x00019c; 	R(CALL(audio_driver_func1e,0));	// 84537 call    near ptr audio_driver_func1E ;~ 2A05:019C
cs=0x2a05;eip=0x00019f; 	T(ADD(sp, 4));	// 84538 add     sp, 4 ;~ 2A05:019F
loc_387d2:
	// 10187 
cs=0x2a05;eip=0x0001a2; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_8)))));	// 84541 mov     ax, word ptr [bp+var_8] ;~ 2A05:01A2
cs=0x2a05;eip=0x0001a5; 	T(OR(ax, *(dw*)((dw*)(raddr(ss,bp+var_8+2)))));	// 84542 or      ax, word ptr [bp+var_8+2] ;~ 2A05:01A5
cs=0x2a05;eip=0x0001a8; 	R(JNZ(loc_387dd));	// 84543 jnz     short loc_387DD ;~ 2A05:01A8
cs=0x2a05;eip=0x0001aa; 	R(JMP(def_38787));	// 84544 jmp     def_38787       ; jumptable 00038787 default case, case 231 ;~ 2A05:01AA
loc_387dd:
	// 10188 
cs=0x2a05;eip=0x0001ad; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 84548 push    [bp+arg_0] ;~ 2A05:01AD
cs=0x2a05;eip=0x0001b0; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_8))));	// 84549 call    [bp+var_8] ;~ 2A05:01B0
cs=0x2a05;eip=0x0001b3; 	T(ADD(sp, 2));	// 84550 add     sp, 2 ;~ 2A05:01B3
cs=0x2a05;eip=0x0001b6; 	R(JMP(def_38787));	// 84551 jmp     def_38787       ; jumptable 00038787 default case, case 231 ;~ 2A05:01B6
loc_387ea:
	// 10189 
cs=0x2a05;eip=0x0001ba; 	T(MOV(ax, 0x717E));	// 84557 mov     ax, 717Eh       ; jumptable 00038787 case 232 ;~ 2A05:01BA
cs=0x2a05;eip=0x0001bd; 	X(PUSH(ax));	// 84558 push    ax ;~ 2A05:01BD
cs=0x2a05;eip=0x0001be; 	T(MOV(al, byte_42a08));	// 84559 mov     al, byte_42A08 ;~ 2A05:01BE
cs=0x2a05;eip=0x0001c1; 	T(SUB(ah, ah));	// 84560 sub     ah, ah ;~ 2A05:01C1
cs=0x2a05;eip=0x0001c3; 	T(SUB(ax, 4));	// 84561 sub     ax, 4 ;~ 2A05:01C3
cs=0x2a05;eip=0x0001c6; 	X(PUSH(ax));	// 84562 push    ax ;~ 2A05:01C6
cs=0x2a05;eip=0x0001c7; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 84563 mov     ax, word ptr audiodriverbinary ;~ 2A05:01C7
cs=0x2a05;eip=0x0001ca; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 84564 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:01CA
cs=0x2a05;eip=0x0001ce; 	T(ADD(ax, 0x39));	// 84565 add     ax, 39h ; '9' ;~ 2A05:01CE
cs=0x2a05;eip=0x0001d1; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c+2))), dx));	// 84566 mov     word ptr [bp+var_C+2], dx ;~ 2A05:01D1
cs=0x2a05;eip=0x0001d4; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c))), ax));	// 84567 mov     word ptr [bp+var_C], ax ;~ 2A05:01D4
cs=0x2a05;eip=0x0001d7; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_c))));	// 84568 call    [bp+var_C] ;~ 2A05:01D7
cs=0x2a05;eip=0x0001da; 	R(JMP(loc_38a64));	// 84569 jmp     loc_38A64 ;~ 2A05:01DA
loc_3880e:
	// 10190 
cs=0x2a05;eip=0x0001de; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 84575 mov     bx, [bp+arg_0]  ; jumptable 00038787 case 234 ;~ 2A05:01DE
cs=0x2a05;eip=0x0001e1; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 84576 mov     al, [bp+var_2] ;~ 2A05:01E1
cs=0x2a05;eip=0x0001e4; 	X(MOV(*(raddr(ds,bx-0x6A6A)), al));	// 84577 mov     [bx-6A6Ah], al ;~ 2A05:01E4
cs=0x2a05;eip=0x0001e8; 	R(JMP(def_38787));	// 84578 jmp     def_38787       ; jumptable 00038787 default case, case 231 ;~ 2A05:01E8
loc_3881c:
	// 10191 
cs=0x2a05;eip=0x0001ec; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 84584 mov     bx, [bp+var_4]  ; jumptable 00038787 case 230 ;~ 2A05:01EC
cs=0x2a05;eip=0x0001ef; 	X(INC(*(raddr(ds,bx+4))));	// 84585 inc     byte ptr [bx+4] ;~ 2A05:01EF
cs=0x2a05;eip=0x0001f2; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 84586 mov     ax, [bx] ;~ 2A05:01F2
cs=0x2a05;eip=0x0001f4; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 84587 mov     dx, [bx+2] ;~ 2A05:01F4
cs=0x2a05;eip=0x0001f7; 	T(MOV(si, *(dw*)(raddr(ds,bx+4))));	// 84588 mov     si, [bx+4] ;~ 2A05:01F7
cs=0x2a05;eip=0x0001fa; 	T(AND(si, 0x0FF));	// 84589 and     si, 0FFh ;~ 2A05:01FA
cs=0x2a05;eip=0x0001fe; 	T(SHL(si, 1));	// 84590 shl     si, 1 ;~ 2A05:01FE
cs=0x2a05;eip=0x000200; 	T(SHL(si, 1));	// 84591 shl     si, 1 ;~ 2A05:0200
cs=0x2a05;eip=0x000202; 	X(MOV(*(dw*)(raddr(ds,bx+si+5)), ax));	// 84592 mov     [bx+si+5], ax ;~ 2A05:0202
cs=0x2a05;eip=0x000205; 	X(MOV(*(dw*)(raddr(ds,bx+si+7)), dx));	// 84593 mov     [bx+si+7], dx ;~ 2A05:0205
cs=0x2a05;eip=0x000208; 	T(MOV(ax, word_42a04));	// 84594 mov     ax, word_42A04 ;~ 2A05:0208
cs=0x2a05;eip=0x00020b; 	T(MOV(dx, word_42a06));	// 84595 mov     dx, word_42A06 ;~ 2A05:020B
cs=0x2a05;eip=0x00020f; 	T(ADD(ax, 4));	// 84596 add     ax, 4 ;~ 2A05:020F
cs=0x2a05;eip=0x000212; 	R(JMP(loc_38899));	// 84597 jmp     short loc_38899 ;~ 2A05:0212
loc_38844:
	// 10192 
cs=0x2a05;eip=0x000214; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 84602 mov     bx, [bp+var_4]  ; jumptable 00038787 case 218 ;~ 2A05:0214
cs=0x2a05;eip=0x000217; 	T(SUB(ax, ax));	// 84603 sub     ax, ax ;~ 2A05:0217
cs=0x2a05;eip=0x000219; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 84604 mov     [bx+2], ax ;~ 2A05:0219
cs=0x2a05;eip=0x00021c; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 84605 mov     [bx], ax ;~ 2A05:021C
cs=0x2a05;eip=0x00021e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x48))));	// 84606 mov     ax, [bx+48h] ;~ 2A05:021E
cs=0x2a05;eip=0x000221; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x4A))));	// 84607 mov     dx, [bx+4Ah] ;~ 2A05:0221
cs=0x2a05;eip=0x000224; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8))), ax));	// 84608 mov     word ptr [bp+var_8], ax ;~ 2A05:0224
cs=0x2a05;eip=0x000227; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8+2))), dx));	// 84609 mov     word ptr [bp+var_8+2], dx ;~ 2A05:0227
cs=0x2a05;eip=0x00022a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 84610 push    [bp+arg_0] ;~ 2A05:022A
cs=0x2a05;eip=0x00022d; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 84611 push    [bp+arg_0] ;~ 2A05:022D
cs=0x2a05;eip=0x000230; 	X(PUSH(cs));	// 84612 push    cs ;~ 2A05:0230
cs=0x2a05;eip=0x000231; 	R(CALL(audio_driver_func1e,0));	// 84613 call    near ptr audio_driver_func1E ;~ 2A05:0231
cs=0x2a05;eip=0x000234; 	T(ADD(sp, 4));	// 84614 add     sp, 4 ;~ 2A05:0234
cs=0x2a05;eip=0x000237; 	T(SUB(ax, ax));	// 84615 sub     ax, ax ;~ 2A05:0237
cs=0x2a05;eip=0x000239; 	X(PUSH(ax));	// 84616 push    ax ;~ 2A05:0239
cs=0x2a05;eip=0x00023a; 	T(MOV(al, byte_45950));	// 84617 mov     al, byte_45950 ;~ 2A05:023A
cs=0x2a05;eip=0x00023d; 	T(SUB(ah, ah));	// 84618 sub     ah, ah ;~ 2A05:023D
cs=0x2a05;eip=0x00023f; 	X(PUSH(ax));	// 84619 push    ax ;~ 2A05:023F
cs=0x2a05;eip=0x000240; 	T(SUB(ax, ax));	// 84620 sub     ax, ax ;~ 2A05:0240
cs=0x2a05;eip=0x000242; 	X(PUSH(ax));	// 84621 push    ax ;~ 2A05:0242
cs=0x2a05;eip=0x000243; 	X(PUSH(ax));	// 84622 push    ax ;~ 2A05:0243
cs=0x2a05;eip=0x000244; 	X(PUSH(ax));	// 84623 push    ax ;~ 2A05:0244
cs=0x2a05;eip=0x000245; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 84624 push    [bp+arg_0] ;~ 2A05:0245
cs=0x2a05;eip=0x000248; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 84625 push    [bp+arg_0] ;~ 2A05:0248
cs=0x2a05;eip=0x00024b; 	R(CALLF(audio_init_chunk,0));	// 84626 call    audio_init_chunk ;~ 2A05:024B
cs=0x2a05;eip=0x000250; 	T(ADD(sp, 0x0E));	// 84627 add     sp, 0Eh ;~ 2A05:0250
cs=0x2a05;eip=0x000253; 	R(JMP(loc_387d2));	// 84628 jmp     loc_387D2 ;~ 2A05:0253
loc_38886:
	// 10193 
cs=0x2a05;eip=0x000256; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 84633 mov     bx, [bp+var_4]  ; jumptable 00038787 case 219 ;~ 2A05:0256
cs=0x2a05;eip=0x000259; 	X(MOV(*(raddr(ds,bx+4)), 0));	// 84634 mov     byte ptr [bx+4], 0 ;~ 2A05:0259
cs=0x2a05;eip=0x00025d; 	X(MOV(*(raddr(ds,bx+0x32)), 0));	// 84635 mov     byte ptr [bx+32h], 0 ;~ 2A05:025D
cs=0x2a05;eip=0x000261; 	T(MOV(si, bx));	// 84636 mov     si, bx ;~ 2A05:0261
cs=0x2a05;eip=0x000263; 	T(MOV(ax, *(dw*)(raddr(ds,si+5))));	// 84637 mov     ax, [si+5] ;~ 2A05:0263
cs=0x2a05;eip=0x000266; 	T(MOV(dx, *(dw*)(raddr(ds,si+7))));	// 84638 mov     dx, [si+7] ;~ 2A05:0266
loc_38899:
	// 10194 
cs=0x2a05;eip=0x000269; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 84641 mov     [bx], ax ;~ 2A05:0269
cs=0x2a05;eip=0x00026b; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 84642 mov     [bx+2], dx ;~ 2A05:026B
cs=0x2a05;eip=0x00026e; 	R(JMP(def_38787));	// 84643 jmp     def_38787       ; jumptable 00038787 default case, case 231 ;~ 2A05:026E
loc_388a2:
	// 10195 
cs=0x2a05;eip=0x000272; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 84649 push    [bp+var_4]      ; jumptable 00038787 case 220 ;~ 2A05:0272
cs=0x2a05;eip=0x000275; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 84650 mov     al, [bp+var_2] ;~ 2A05:0275
cs=0x2a05;eip=0x000278; 	T(SUB(ah, ah));	// 84651 sub     ah, ah ;~ 2A05:0278
cs=0x2a05;eip=0x00027a; 	X(PUSH(ax));	// 84652 push    ax ;~ 2A05:027A
cs=0x2a05;eip=0x00027b; 	X(PUSH(cs));	// 84653 push    cs ;~ 2A05:027B
cs=0x2a05;eip=0x00027c; 	R(CALL(sub_38ac4,0));	// 84654 call    near ptr sub_38AC4 ;~ 2A05:027C
cs=0x2a05;eip=0x00027f; 	T(ADD(sp, 4));	// 84655 add     sp, 4 ;~ 2A05:027F
cs=0x2a05;eip=0x000282; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 84656 mov     bx, [bp+var_4] ;~ 2A05:0282
cs=0x2a05;eip=0x000285; 	X(MOV(*(dw*)(raddr(ds,bx+0x1E)), ax));	// 84657 mov     [bx+1Eh], ax ;~ 2A05:0285
cs=0x2a05;eip=0x000288; 	X(MOV(*(dw*)(raddr(ds,bx+0x20)), dx));	// 84658 mov     [bx+20h], dx ;~ 2A05:0288
cs=0x2a05;eip=0x00028b; 	T(CMP(byte_40634, 0));	// 84659 cmp     byte_40634, 0 ;~ 2A05:028B
cs=0x2a05;eip=0x000290; 	R(JNZ(loc_388c5));	// 84660 jnz     short loc_388C5 ;~ 2A05:0290
cs=0x2a05;eip=0x000292; 	R(JMP(def_38787));	// 84661 jmp     def_38787       ; jumptable 00038787 default case, case 231 ;~ 2A05:0292
loc_388c5:
	// 10196 
cs=0x2a05;eip=0x000295; 	T(LES(bx, *(dw*)(raddr(ds,bx+0x1E))));	// 84665 les     bx, [bx+1Eh] ;~ 2A05:0295
cs=0x2a05;eip=0x000298; 	T(MOV(al, *(raddr(es,bx+0x43))));	// 84666 mov     al, es:[bx+43h] ;~ 2A05:0298
cs=0x2a05;eip=0x00029c; 	X(MOV(*(raddr(ss,bp+var_e)), al));	// 84667 mov     [bp+var_E], al ;~ 2A05:029C
cs=0x2a05;eip=0x00029f; 	T(CMP(al, 0x10));	// 84668 cmp     al, 10h ;~ 2A05:029F
cs=0x2a05;eip=0x0002a1; 	R(JNC(loc_388d8));	// 84669 jnb     short loc_388D8 ;~ 2A05:02A1
cs=0x2a05;eip=0x0002a3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 84670 mov     bx, [bp+var_4] ;~ 2A05:02A3
cs=0x2a05;eip=0x0002a6; 	R(JMP(loc_388e2));	// 84671 jmp     short loc_388E2 ;~ 2A05:02A6
loc_388d8:
	// 10197 
cs=0x2a05;eip=0x0002a8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 84675 mov     bx, [bp+var_4] ;~ 2A05:02A8
cs=0x2a05;eip=0x0002ab; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_0))));	// 84676 mov     al, byte ptr [bp+arg_0] ;~ 2A05:02AB
cs=0x2a05;eip=0x0002ae; 	T(AND(al, 0x0F));	// 84677 and     al, 0Fh ;~ 2A05:02AE
cs=0x2a05;eip=0x0002b0; 	T(INC(al));	// 84678 inc     al ;~ 2A05:02B0
loc_388e2:
	// 10198 
cs=0x2a05;eip=0x0002b2; 	X(MOV(*(raddr(ds,bx+0x47)), al));	// 84681 mov     [bx+47h], al ;~ 2A05:02B2
cs=0x2a05;eip=0x0002b5; 	T(MOV(al, *(raddr(ds,bx+0x28))));	// 84682 mov     al, [bx+28h] ;~ 2A05:02B5
cs=0x2a05;eip=0x0002b8; 	T(SUB(ah, ah));	// 84683 sub     ah, ah ;~ 2A05:02B8
cs=0x2a05;eip=0x0002ba; 	X(PUSH(ax));	// 84684 push    ax ;~ 2A05:02BA
cs=0x2a05;eip=0x0002bb; 	T(SUB(ax, ax));	// 84685 sub     ax, ax ;~ 2A05:02BB
cs=0x2a05;eip=0x0002bd; 	X(PUSH(ax));	// 84686 push    ax ;~ 2A05:02BD
cs=0x2a05;eip=0x0002be; 	T(MOV(al, *(raddr(ds,bx+0x47))));	// 84687 mov     al, [bx+47h] ;~ 2A05:02BE
cs=0x2a05;eip=0x0002c1; 	T(SUB(ah, ah));	// 84688 sub     ah, ah ;~ 2A05:02C1
cs=0x2a05;eip=0x0002c3; 	X(PUSH(ax));	// 84689 push    ax ;~ 2A05:02C3
cs=0x2a05;eip=0x0002c4; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 84690 mov     ax, word ptr audiodriverbinary ;~ 2A05:02C4
cs=0x2a05;eip=0x0002c7; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 84691 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:02C7
cs=0x2a05;eip=0x0002cb; 	T(ADD(ax, 0x12));	// 84692 add     ax, 12h ;~ 2A05:02CB
cs=0x2a05;eip=0x0002ce; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c+2))), dx));	// 84693 mov     word ptr [bp+var_C+2], dx ;~ 2A05:02CE
cs=0x2a05;eip=0x0002d1; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c))), ax));	// 84694 mov     word ptr [bp+var_C], ax ;~ 2A05:02D1
cs=0x2a05;eip=0x0002d4; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_c))));	// 84695 call    [bp+var_C] ;~ 2A05:02D4
cs=0x2a05;eip=0x0002d7; 	T(ADD(sp, 6));	// 84696 add     sp, 6 ;~ 2A05:02D7
cs=0x2a05;eip=0x0002da; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 84697 mov     bx, [bp+var_4] ;~ 2A05:02DA
cs=0x2a05;eip=0x0002dd; 	X(PUSH(*(dw*)(raddr(ds,bx+0x20))));	// 84698 push    word ptr [bx+20h] ;~ 2A05:02DD
cs=0x2a05;eip=0x0002e0; 	X(PUSH(*(dw*)(raddr(ds,bx+0x1E))));	// 84699 push    word ptr [bx+1Eh] ;~ 2A05:02E0
cs=0x2a05;eip=0x0002e3; 	X(PUSH(bx));	// 84700 push    bx ;~ 2A05:02E3
cs=0x2a05;eip=0x0002e4; 	T(SUB(ax, ax));	// 84701 sub     ax, ax ;~ 2A05:02E4
cs=0x2a05;eip=0x0002e6; 	X(PUSH(ax));	// 84702 push    ax ;~ 2A05:02E6
cs=0x2a05;eip=0x0002e7; 	T(MOV(al, *(raddr(ds,bx+0x47))));	// 84703 mov     al, [bx+47h] ;~ 2A05:02E7
cs=0x2a05;eip=0x0002ea; 	T(SUB(ah, ah));	// 84704 sub     ah, ah ;~ 2A05:02EA
cs=0x2a05;eip=0x0002ec; 	X(PUSH(ax));	// 84705 push    ax ;~ 2A05:02EC
cs=0x2a05;eip=0x0002ed; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 84706 mov     ax, word ptr audiodriverbinary ;~ 2A05:02ED
cs=0x2a05;eip=0x0002f0; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 84707 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:02F0
cs=0x2a05;eip=0x0002f4; 	T(ADD(ax, 0x21));	// 84708 add     ax, 21h ; '!' ;~ 2A05:02F4
cs=0x2a05;eip=0x0002f7; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c+2))), dx));	// 84709 mov     word ptr [bp+var_C+2], dx ;~ 2A05:02F7
cs=0x2a05;eip=0x0002fa; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c))), ax));	// 84710 mov     word ptr [bp+var_C], ax ;~ 2A05:02FA
cs=0x2a05;eip=0x0002fd; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_c))));	// 84711 call    [bp+var_C] ;~ 2A05:02FD
cs=0x2a05;eip=0x000300; 	T(ADD(sp, 0x0A));	// 84712 add     sp, 0Ah ;~ 2A05:0300
cs=0x2a05;eip=0x000303; 	R(JMP(def_38787));	// 84713 jmp     def_38787       ; jumptable 00038787 default case, case 231 ;~ 2A05:0303
loc_38936:
	// 10199 
cs=0x2a05;eip=0x000306; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x10));	// 84718 cmp     [bp+arg_0], 10h ; jumptable 00038787 case 221 ;~ 2A05:0306
cs=0x2a05;eip=0x00030a; 	R(JL(loc_3893f));	// 84719 jl      short loc_3893F ;~ 2A05:030A
cs=0x2a05;eip=0x00030c; 	R(JMP(def_38787));	// 84720 jmp     def_38787       ; jumptable 00038787 default case, case 231 ;~ 2A05:030C
loc_3893f:
	// 10200 
cs=0x2a05;eip=0x00030f; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 84724 mov     al, [bp+var_2] ;~ 2A05:030F
cs=0x2a05;eip=0x000312; 	T(SUB(ah, ah));	// 84725 sub     ah, ah ;~ 2A05:0312
cs=0x2a05;eip=0x000314; 	T(MOV(cx, ax));	// 84726 mov     cx, ax ;~ 2A05:0314
cs=0x2a05;eip=0x000316; 	T(MOV(ax, 0x7D00));	// 84727 mov     ax, 7D00h ;~ 2A05:0316
cs=0x2a05;eip=0x000319; 	T(CWD);	// 84728 cwd ;~ 2A05:0319
cs=0x2a05;eip=0x00031a; 	T(DIV2(cx));	// 84729 div     cx ;~ 2A05:031A
cs=0x2a05;eip=0x00031c; 	X(MOV(word_454ba, ax));	// 84730 mov     word_454BA, ax ;~ 2A05:031C
cs=0x2a05;eip=0x00031f; 	R(JMP(def_38787));	// 84731 jmp     def_38787       ; jumptable 00038787 default case, case 231 ;~ 2A05:031F
loc_38952:
	// 10201 
cs=0x2a05;eip=0x000322; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 84736 mov     al, [bp+var_2]  ; jumptable 00038787 case 222 ;~ 2A05:0322
cs=0x2a05;eip=0x000325; 	T(SUB(ah, ah));	// 84737 sub     ah, ah ;~ 2A05:0325
cs=0x2a05;eip=0x000327; 	X(PUSH(ax));	// 84738 push    ax ;~ 2A05:0327
cs=0x2a05;eip=0x000328; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 84739 push    [bp+arg_0] ;~ 2A05:0328
cs=0x2a05;eip=0x00032b; 	X(PUSH(cs));	// 84740 push    cs ;~ 2A05:032B
cs=0x2a05;eip=0x00032c; 	R(CALL(audio_unk2,0));	// 84741 call    near ptr audio_unk2 ;~ 2A05:032C
cs=0x2a05;eip=0x00032f; 	R(JMP(loc_38a64));	// 84742 jmp     loc_38A64 ;~ 2A05:032F
loc_38962:
	// 10202 
cs=0x2a05;eip=0x000332; 	X(PUSH(word_42a04));	// 84747 push    word_42A04      ; jumptable 00038787 case 223 ;~ 2A05:0332
cs=0x2a05;eip=0x000336; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 84748 mov     al, [bp+var_2] ;~ 2A05:0336
cs=0x2a05;eip=0x000339; 	T(SUB(ah, ah));	// 84749 sub     ah, ah ;~ 2A05:0339
cs=0x2a05;eip=0x00033b; 	X(PUSH(ax));	// 84750 push    ax ;~ 2A05:033B
cs=0x2a05;eip=0x00033c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 84751 push    [bp+arg_0] ;~ 2A05:033C
cs=0x2a05;eip=0x00033f; 	X(PUSH(cs));	// 84752 push    cs ;~ 2A05:033F
cs=0x2a05;eip=0x000340; 	R(CALL(sub_38aea,0));	// 84753 call    near ptr sub_38AEA ;~ 2A05:0340
cs=0x2a05;eip=0x000343; 	T(ADD(sp, 6));	// 84754 add     sp, 6 ;~ 2A05:0343
cs=0x2a05;eip=0x000346; 	R(JMP(def_38787));	// 84755 jmp     def_38787       ; jumptable 00038787 default case, case 231 ;~ 2A05:0346
loc_3897a:
	// 10203 
cs=0x2a05;eip=0x00034a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 84761 mov     bx, [bp+var_4]  ; jumptable 00038787 case 224 ;~ 2A05:034A
cs=0x2a05;eip=0x00034d; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 84762 mov     al, [bp+var_2] ;~ 2A05:034D
cs=0x2a05;eip=0x000350; 	X(MOV(*(raddr(ds,bx+0x16)), al));	// 84763 mov     [bx+16h], al ;~ 2A05:0350
cs=0x2a05;eip=0x000353; 	R(JMP(def_38787));	// 84764 jmp     def_38787       ; jumptable 00038787 default case, case 231 ;~ 2A05:0353
loc_38986:
	// 10204 
cs=0x2a05;eip=0x000356; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 84769 mov     bx, [bp+var_4]  ; jumptable 00038787 case 225 ;~ 2A05:0356
cs=0x2a05;eip=0x000359; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 84770 mov     al, [bp+var_2] ;~ 2A05:0359
cs=0x2a05;eip=0x00035c; 	X(MOV(*(raddr(ds,bx+0x24)), al));	// 84771 mov     [bx+24h], al ;~ 2A05:035C
cs=0x2a05;eip=0x00035f; 	R(JMP(def_38787));	// 84772 jmp     def_38787       ; jumptable 00038787 default case, case 231 ;~ 2A05:035F
loc_38992:
	// 10205 
cs=0x2a05;eip=0x000362; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 84777 mov     bx, [bp+var_4]  ; jumptable 00038787 case 226 ;~ 2A05:0362
cs=0x2a05;eip=0x000365; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 84778 mov     ax, [bx] ;~ 2A05:0365
cs=0x2a05;eip=0x000367; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 84779 mov     dx, [bx+2] ;~ 2A05:0367
cs=0x2a05;eip=0x00036a; 	T(MOV(si, *(dw*)(raddr(ds,bx+0x32))));	// 84780 mov     si, [bx+32h] ;~ 2A05:036A
cs=0x2a05;eip=0x00036d; 	T(AND(si, 0x0FF));	// 84781 and     si, 0FFh ;~ 2A05:036D
cs=0x2a05;eip=0x000371; 	T(SHL(si, 1));	// 84782 shl     si, 1 ;~ 2A05:0371
cs=0x2a05;eip=0x000373; 	T(SHL(si, 1));	// 84783 shl     si, 1 ;~ 2A05:0373
cs=0x2a05;eip=0x000375; 	X(MOV(*(dw*)(raddr(ds,bx+si+0x33)), ax));	// 84784 mov     [bx+si+33h], ax ;~ 2A05:0375
cs=0x2a05;eip=0x000378; 	X(MOV(*(dw*)(raddr(ds,bx+si+0x35)), dx));	// 84785 mov     [bx+si+35h], dx ;~ 2A05:0378
cs=0x2a05;eip=0x00037b; 	T(MOV(si, *(dw*)(raddr(ds,bx+0x32))));	// 84786 mov     si, [bx+32h] ;~ 2A05:037B
cs=0x2a05;eip=0x00037e; 	T(AND(si, 0x0FF));	// 84787 and     si, 0FFh ;~ 2A05:037E
cs=0x2a05;eip=0x000382; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 84788 mov     al, [bp+var_2] ;~ 2A05:0382
cs=0x2a05;eip=0x000385; 	T(DEC(al));	// 84789 dec     al ;~ 2A05:0385
cs=0x2a05;eip=0x000387; 	X(MOV(*(raddr(ds,bx+si+0x43)), al));	// 84790 mov     [bx+si+43h], al ;~ 2A05:0387
cs=0x2a05;eip=0x00038a; 	X(INC(*(raddr(ds,bx+0x32))));	// 84791 inc     byte ptr [bx+32h] ;~ 2A05:038A
cs=0x2a05;eip=0x00038d; 	R(JMP(def_38787));	// 84792 jmp     def_38787       ; jumptable 00038787 default case, case 231 ;~ 2A05:038D
loc_389c0:
	// 10206 
cs=0x2a05;eip=0x000390; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 84797 mov     bx, [bp+var_4]  ; jumptable 00038787 case 227 ;~ 2A05:0390
cs=0x2a05;eip=0x000393; 	T(CMP(*(raddr(ds,bx+0x32)), 0));	// 84798 cmp     byte ptr [bx+32h], 0 ;~ 2A05:0393
cs=0x2a05;eip=0x000397; 	R(JNZ(loc_389cc));	// 84799 jnz     short loc_389CC ;~ 2A05:0397
cs=0x2a05;eip=0x000399; 	R(JMP(def_38787));	// 84800 jmp     def_38787       ; jumptable 00038787 default case, case 231 ;~ 2A05:0399
loc_389cc:
	// 10207 
cs=0x2a05;eip=0x00039c; 	T(MOV(al, *(raddr(ds,bx+0x32))));	// 84804 mov     al, [bx+32h] ;~ 2A05:039C
cs=0x2a05;eip=0x00039f; 	T(SUB(ah, ah));	// 84805 sub     ah, ah ;~ 2A05:039F
cs=0x2a05;eip=0x0003a1; 	T(MOV(si, ax));	// 84806 mov     si, ax ;~ 2A05:03A1
cs=0x2a05;eip=0x0003a3; 	T(MOV(di, bx));	// 84807 mov     di, bx ;~ 2A05:03A3
cs=0x2a05;eip=0x0003a5; 	T(MOV(bx, si));	// 84808 mov     bx, si ;~ 2A05:03A5
cs=0x2a05;eip=0x0003a7; 	T(SHL(bx, 1));	// 84809 shl     bx, 1 ;~ 2A05:03A7
cs=0x2a05;eip=0x0003a9; 	T(SHL(bx, 1));	// 84810 shl     bx, 1 ;~ 2A05:03A9
cs=0x2a05;eip=0x0003ab; 	T(MOV(ax, *(dw*)(raddr(ds,bx+di+0x2F))));	// 84811 mov     ax, [bx+di+2Fh] ;~ 2A05:03AB
cs=0x2a05;eip=0x0003ae; 	T(MOV(dx, *(dw*)(raddr(ds,bx+di+0x31))));	// 84812 mov     dx, [bx+di+31h] ;~ 2A05:03AE
cs=0x2a05;eip=0x0003b1; 	T(MOV(bx, di));	// 84813 mov     bx, di ;~ 2A05:03B1
cs=0x2a05;eip=0x0003b3; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 84814 mov     [bx], ax ;~ 2A05:03B3
cs=0x2a05;eip=0x0003b5; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 84815 mov     [bx+2], dx ;~ 2A05:03B5
cs=0x2a05;eip=0x0003b8; 	T(MOV(al, *(raddr(ds,bx+si+0x42))));	// 84816 mov     al, [bx+si+42h] ;~ 2A05:03B8
cs=0x2a05;eip=0x0003bb; 	X(DEC(*(raddr(ds,bx+si+0x42))));	// 84817 dec     byte ptr [bx+si+42h] ;~ 2A05:03BB
cs=0x2a05;eip=0x0003be; 	T(OR(al, al));	// 84818 or      al, al ;~ 2A05:03BE
cs=0x2a05;eip=0x0003c0; 	R(JNZ(def_38787));	// 84819 jnz     short def_38787 ; jumptable 00038787 default case, case 231 ;~ 2A05:03C0
cs=0x2a05;eip=0x0003c2; 	X(DEC(*(raddr(ds,bx+0x32))));	// 84820 dec     byte ptr [bx+32h] ;~ 2A05:03C2
cs=0x2a05;eip=0x0003c5; 	R(JMP(def_38787));	// 84821 jmp     short def_38787 ; jumptable 00038787 default case, case 231 ;~ 2A05:03C5
loc_389f8:
	// 10208 
cs=0x2a05;eip=0x0003c8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 84827 mov     bx, [bp+var_4]  ; jumptable 00038787 case 228 ;~ 2A05:03C8
cs=0x2a05;eip=0x0003cb; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 84828 mov     al, [bp+var_2] ;~ 2A05:03CB
cs=0x2a05;eip=0x0003ce; 	X(MOV(*(raddr(ds,bx+0x22)), al));	// 84829 mov     [bx+22h], al ;~ 2A05:03CE
cs=0x2a05;eip=0x0003d1; 	R(JMP(def_38787));	// 84830 jmp     short def_38787 ; jumptable 00038787 default case, case 231 ;~ 2A05:03D1
loc_38a04:
	// 10209 
cs=0x2a05;eip=0x0003d4; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 84836 mov     bx, [bp+var_4]  ; jumptable 00038787 case 233 ;~ 2A05:03D4
cs=0x2a05;eip=0x0003d7; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 84837 mov     al, [bp+var_2] ;~ 2A05:03D7
cs=0x2a05;eip=0x0003da; 	X(MOV(*(raddr(ds,bx+0x47)), al));	// 84838 mov     [bx+47h], al ;~ 2A05:03DA
cs=0x2a05;eip=0x0003dd; 	R(JMP(def_38787));	// 84839 jmp     short def_38787 ; jumptable 00038787 default case, case 231 ;~ 2A05:03DD
loc_38a10:
	// 10210 
cs=0x2a05;eip=0x0003e0; 	X(PUSH(word_42a04));	// 84845 push    word_42A04      ; jumptable 00038787 case 229 ;~ 2A05:03E0
cs=0x2a05;eip=0x0003e4; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 84846 push    [bp+arg_0] ;~ 2A05:03E4
cs=0x2a05;eip=0x0003e7; 	X(PUSH(cs));	// 84847 push    cs ;~ 2A05:03E7
cs=0x2a05;eip=0x0003e8; 	R(CALL(sub_38bea,0));	// 84848 call    near ptr sub_38BEA ;~ 2A05:03E8
cs=0x2a05;eip=0x0003eb; 	R(JMP(loc_38a64));	// 84849 jmp     short loc_38A64 ;~ 2A05:03EB
ret_2a05_412:
	// 10211 
cs=0x2a05;eip=0x000412; 	R(JMP(def_38787));	// 84871 jmp     short def_38787 ; jumptable 00038787 default case, case 231 ;~ 2A05:0412
loc_38a44:
	// 10212 
cs=0x2a05;eip=0x000414; 	T(CMP(byte_42a02, 0x80));	// 84875 cmp     byte_42A02, 80h ; '€' ;~ 2A05:0414
cs=0x2a05;eip=0x000419; 	R(JNC(loc_38a54));	// 84876 jnb     short loc_38A54 ;~ 2A05:0419
cs=0x2a05;eip=0x00041b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 84877 mov     bx, [bp+var_4] ;~ 2A05:041B
cs=0x2a05;eip=0x00041e; 	T(MOV(al, *(raddr(ds,bx+0x22))));	// 84878 mov     al, [bx+22h] ;~ 2A05:041E
cs=0x2a05;eip=0x000421; 	X(MOV(byte_42a03, al));	// 84879 mov     byte_42A03, al ;~ 2A05:0421
loc_38a54:
	// 10213 
cs=0x2a05;eip=0x000424; 	X(AND(byte_42a02, 0x7F));	// 84882 and     byte_42A02, 7Fh ;~ 2A05:0424
cs=0x2a05;eip=0x000429; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 84883 push    [bp+arg_0] ;~ 2A05:0429
cs=0x2a05;eip=0x00042c; 	T(MOV(ax, 0x728E));	// 84884 mov     ax, 728Eh ;~ 2A05:042C
cs=0x2a05;eip=0x00042f; 	X(PUSH(ax));	// 84885 push    ax ;~ 2A05:042F
cs=0x2a05;eip=0x000430; 	X(PUSH(cs));	// 84886 push    cs ;~ 2A05:0430
cs=0x2a05;eip=0x000431; 	R(CALL(sub_38de6,0));	// 84887 call    near ptr sub_38DE6 ;~ 2A05:0431
loc_38a64:
	// 10214 
cs=0x2a05;eip=0x000434; 	T(ADD(sp, 4));	// 84891 add     sp, 4 ;~ 2A05:0434
def_38787:
	// 10215 
cs=0x2a05;eip=0x000437; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 84895 mov     bx, [bp+var_4]  ; jumptable 00038787 default case, case 231 ;~ 2A05:0437
cs=0x2a05;eip=0x00043a; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 84896 mov     ax, [bx] ;~ 2A05:043A
cs=0x2a05;eip=0x00043c; 	T(OR(ax, *(dw*)(raddr(ds,bx+2))));	// 84897 or      ax, [bx+2] ;~ 2A05:043C
cs=0x2a05;eip=0x00043f; 	R(JNZ(loc_38a74));	// 84898 jnz     short loc_38A74 ;~ 2A05:043F
cs=0x2a05;eip=0x000441; 	R(JMP(loc_38737));	// 84899 jmp     loc_38737 ;~ 2A05:0441
loc_38a74:
	// 10216 
cs=0x2a05;eip=0x000444; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 84903 push    word ptr [bx+2] ;~ 2A05:0444
cs=0x2a05;eip=0x000447; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 84904 push    word ptr [bx] ;~ 2A05:0447
cs=0x2a05;eip=0x000449; 	T(MOV(ax, 0x7282));	// 84905 mov     ax, 7282h ;~ 2A05:0449
cs=0x2a05;eip=0x00044c; 	X(PUSH(ax));	// 84906 push    ax ;~ 2A05:044C
cs=0x2a05;eip=0x00044d; 	X(PUSH(cs));	// 84907 push    cs ;~ 2A05:044D
cs=0x2a05;eip=0x00044e; 	R(CALL(sub_3945a,0));	// 84908 call    near ptr sub_3945A ;~ 2A05:044E
cs=0x2a05;eip=0x000451; 	T(ADD(sp, 6));	// 84909 add     sp, 6 ;~ 2A05:0451
cs=0x2a05;eip=0x000454; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 84910 mov     bx, [bp+var_4] ;~ 2A05:0454
cs=0x2a05;eip=0x000457; 	T(MOV(ax, word_429f2));	// 84911 mov     ax, word_429F2 ;~ 2A05:0457
cs=0x2a05;eip=0x00045a; 	T(MOV(dx, word_429f4));	// 84912 mov     dx, word_429F4 ;~ 2A05:045A
cs=0x2a05;eip=0x00045e; 	X(MOV(*(dw*)(raddr(ds,bx+0x18)), ax));	// 84913 mov     [bx+18h], ax ;~ 2A05:045E
cs=0x2a05;eip=0x000461; 	X(MOV(*(dw*)(raddr(ds,bx+0x1A)), dx));	// 84914 mov     [bx+1Ah], dx ;~ 2A05:0461
cs=0x2a05;eip=0x000464; 	R(JMP(loc_38737));	// 84915 jmp     loc_38737 ;~ 2A05:0464
loc_38a98:
	// 10217 
cs=0x2a05;eip=0x000468; 	X(SUB(*(dw*)(raddr(ds,bx+0x18)), 1));	// 84921 sub     word ptr [bx+18h], 1 ;~ 2A05:0468
cs=0x2a05;eip=0x00046c; 	X(SBB(*(dw*)(raddr(ds,bx+0x1A)), 0));	// 84922 sbb     word ptr [bx+1Ah], 0 ;~ 2A05:046C
loc_38aa0:
	// 10218 
cs=0x2a05;eip=0x000470; 	X(POP(ds));	// 84925 pop     ds ;~ 2A05:0470
cs=0x2a05;eip=0x000471; 	X(POP(si));	// 84926 pop     si ;~ 2A05:0471
cs=0x2a05;eip=0x000472; 	X(POP(di));	// 84927 pop     di ;~ 2A05:0472
cs=0x2a05;eip=0x000473; 	T(MOV(sp, bp));	// 84928 mov     sp, bp ;~ 2A05:0473
cs=0x2a05;eip=0x000475; 	X(POP(bp));	// 84929 pop     bp ;~ 2A05:0475

//exit(0);

cs=0x2a05;eip=0x000476; 	R(RETF(0));	// 84930 retf ;~ 2A05:0476
seg028_478_proc:
	// 84935 
cs=0x2a05;eip=0x000478; 	X(PUSH(bp));	// 84935 push    bp ;~ 2A05:0478
ret_2a05_479:
	// 10219 
cs=0x2a05;eip=0x000479; 	T(MOV(bp, sp));	// 84936 mov     bp, sp ;~ 2A05:0479
cs=0x2a05;eip=0x00047b; 	X(PUSH(ds));	// 84937 push    ds ;~ 2A05:047B
cs=0x2a05;eip=0x00047c; 	T(MOV(ax, seg_offset(dseg)));	// 84938 mov     ax, seg dseg ;~ 2A05:047C
cs=0x2a05;eip=0x00047f; 	T(MOV(ds, ax));	// 84939 mov     ds, ax ;~ 2A05:047F
cs=0x2a05;eip=0x000481; 	T(MOV(ax, 0x4C));	// 84940 mov     ax, 4Ch ; 'L' ;~ 2A05:0481
cs=0x2a05;eip=0x000484; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+6))));	// 84941 imul    word ptr [bp+6] ;~ 2A05:0484
cs=0x2a05;eip=0x000487; 	T(MOV(bx, ax));	// 84942 mov     bx, ax ;~ 2A05:0487
cs=0x2a05;eip=0x000489; 	T(MOV(al, *(raddr(ss,bp+8))));	// 84943 mov     al, [bp+8] ;~ 2A05:0489
cs=0x2a05;eip=0x00048c; 	X(MOV(*(raddr(ds,bx-0x7DBD)), al));	// 84944 mov     [bx-7DBDh], al ;~ 2A05:048C
cs=0x2a05;eip=0x000490; 	X(POP(ds));	// 84945 pop     ds ;~ 2A05:0490
cs=0x2a05;eip=0x000491; 	X(POP(bp));	// 84946 pop     bp ;~ 2A05:0491
cs=0x2a05;eip=0x000492; 	R(RETF(0));	// 84947 retf ;~ 2A05:0492
sub_38ac4:
	// 84955 
#undef arg_0
#define arg_0 6
	// 84957 arg_0           = word ptr  6 ;~ 2A05:0494
#undef arg_2
#define arg_2 8
	// 84958 arg_2           = word ptr  8 ;~ 2A05:0494
ret_2a05_494:
	// 10220 
cs=0x2a05;eip=0x000494; 	X(PUSH(bp));	// 84960 push    bp ;~ 2A05:0494
cs=0x2a05;eip=0x000495; 	T(MOV(bp, sp));	// 84961 mov     bp, sp ;~ 2A05:0495
cs=0x2a05;eip=0x000497; 	X(PUSH(si));	// 84962 push    si ;~ 2A05:0497
cs=0x2a05;eip=0x000498; 	X(PUSH(ds));	// 84963 push    ds ;~ 2A05:0498
cs=0x2a05;eip=0x000499; 	T(MOV(ax, seg_offset(dseg)));	// 84964 mov     ax, seg dseg ;~ 2A05:0499
cs=0x2a05;eip=0x00049c; 	T(MOV(ds, ax));	// 84965 mov     ds, ax ;~ 2A05:049C
cs=0x2a05;eip=0x00049e; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 84966 mov     si, [bp+arg_0] ;~ 2A05:049E
cs=0x2a05;eip=0x0004a1; 	T(AND(si, 0x0FF));	// 84967 and     si, 0FFh ;~ 2A05:04A1
cs=0x2a05;eip=0x0004a5; 	T(SHL(si, 1));	// 84968 shl     si, 1 ;~ 2A05:04A5
cs=0x2a05;eip=0x0004a7; 	T(SHL(si, 1));	// 84969 shl     si, 1 ;~ 2A05:04A7
cs=0x2a05;eip=0x0004a9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 84970 mov     bx, [bp+arg_2] ;~ 2A05:04A9
cs=0x2a05;eip=0x0004ac; 	T(LES(bx, *(dw*)(raddr(ds,bx+0x2E))));	// 84971 les     bx, [bx+2Eh] ;~ 2A05:04AC
cs=0x2a05;eip=0x0004af; 	T(MOV(ax, *(dw*)(raddr(es,bx+si))));	// 84972 mov     ax, es:[bx+si] ;~ 2A05:04AF
cs=0x2a05;eip=0x0004b2; 	T(MOV(dx, *(dw*)(raddr(es,bx+si+2))));	// 84973 mov     dx, es:[bx+si+2] ;~ 2A05:04B2
cs=0x2a05;eip=0x0004b6; 	X(POP(ds));	// 84974 pop     ds ;~ 2A05:04B6
cs=0x2a05;eip=0x0004b7; 	X(POP(si));	// 84975 pop     si ;~ 2A05:04B7
cs=0x2a05;eip=0x0004b8; 	X(POP(bp));	// 84976 pop     bp ;~ 2A05:04B8
cs=0x2a05;eip=0x0004b9; 	R(RETF(0));	// 84977 retf ;~ 2A05:04B9
sub_38aea:
	// 84985 
#undef var_12
#define var_12 -0x12
	// 84987 var_12          = word ptr -12h ;~ 2A05:04BA
#undef var_10
#define var_10 -0x10
	// 84988 var_10          = word ptr -10h ;~ 2A05:04BA
#undef var_e
#define var_e -0x0E
	// 84989 var_E           = word ptr -0Eh ;~ 2A05:04BA
#undef var_a
#define var_a -0x0A
	// 84990 var_A           = word ptr -0Ah ;~ 2A05:04BA
#undef var_8
#define var_8 -8
	// 84991 var_8           = dword ptr -8 ;~ 2A05:04BA
#undef var_4
#define var_4 -4
	// 84992 var_4           = word ptr -4 ;~ 2A05:04BA
#undef var_2
#define var_2 -2
	// 84993 var_2           = word ptr -2 ;~ 2A05:04BA
#undef arg_0
#define arg_0 6
	// 84994 arg_0           = word ptr  6 ;~ 2A05:04BA
#undef arg_2
#define arg_2 8
	// 84995 arg_2           = byte ptr  8 ;~ 2A05:04BA
#undef arg_4
#define arg_4 0x0A
	// 84996 arg_4           = word ptr  0Ah ;~ 2A05:04BA
ret_2a05_4ba:
	// 10221 
cs=0x2a05;eip=0x0004ba; 	X(PUSH(bp));	// 84998 push    bp ;~ 2A05:04BA
cs=0x2a05;eip=0x0004bb; 	T(MOV(bp, sp));	// 84999 mov     bp, sp ;~ 2A05:04BB
cs=0x2a05;eip=0x0004bd; 	T(SUB(sp, 0x12));	// 85000 sub     sp, 12h ;~ 2A05:04BD
cs=0x2a05;eip=0x0004c0; 	X(PUSH(di));	// 85001 push    di ;~ 2A05:04C0
cs=0x2a05;eip=0x0004c1; 	X(PUSH(si));	// 85002 push    si ;~ 2A05:04C1
cs=0x2a05;eip=0x0004c2; 	X(PUSH(ds));	// 85003 push    ds ;~ 2A05:04C2
cs=0x2a05;eip=0x0004c3; 	T(MOV(ax, seg_offset(dseg)));	// 85004 mov     ax, seg dseg ;~ 2A05:04C3
cs=0x2a05;eip=0x0004c6; 	T(MOV(ds, ax));	// 85005 mov     ds, ax ;~ 2A05:04C6
cs=0x2a05;eip=0x0004c8; 	T(MOV(ax, 0x4C));	// 85006 mov     ax, 4Ch ; 'L' ;~ 2A05:04C8
cs=0x2a05;eip=0x0004cb; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 85007 imul    [bp+arg_0] ;~ 2A05:04CB
cs=0x2a05;eip=0x0004ce; 	T(ADD(ax, 0x81FC));	// 85008 add     ax, 81FCh ;~ 2A05:04CE
cs=0x2a05;eip=0x0004d1; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 85009 mov     [bp+var_4], ax ;~ 2A05:04D1
cs=0x2a05;eip=0x0004d4; 	T(CMP(*(raddr(ss,bp+arg_2)), 0x40));	// 85010 cmp     [bp+arg_2], 40h ; '@' ;~ 2A05:04D4
cs=0x2a05;eip=0x0004d8; 	R(JNZ(loc_38b12));	// 85011 jnz     short loc_38B12 ;~ 2A05:04D8
cs=0x2a05;eip=0x0004da; 	T(MOV(bx, ax));	// 85012 mov     bx, ax ;~ 2A05:04DA
cs=0x2a05;eip=0x0004dc; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_4))));	// 85013 mov     al, byte ptr [bp+arg_4] ;~ 2A05:04DC
cs=0x2a05;eip=0x0004df; 	X(MOV(*(raddr(ds,bx+0x25)), al));	// 85014 mov     [bx+25h], al ;~ 2A05:04DF
loc_38b12:
	// 10222 
cs=0x2a05;eip=0x0004e2; 	T(CMP(byte_40634, 0));	// 85017 cmp     byte_40634, 0 ;~ 2A05:04E2
cs=0x2a05;eip=0x0004e7; 	R(JZ(loc_38b44));	// 85018 jz      short loc_38B44 ;~ 2A05:04E7
cs=0x2a05;eip=0x0004e9; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 85019 push    [bp+arg_4] ;~ 2A05:04E9
cs=0x2a05;eip=0x0004ec; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 85020 mov     al, [bp+arg_2] ;~ 2A05:04EC
cs=0x2a05;eip=0x0004ef; 	T(SUB(ah, ah));	// 85021 sub     ah, ah ;~ 2A05:04EF
cs=0x2a05;eip=0x0004f1; 	X(PUSH(ax));	// 85022 push    ax ;~ 2A05:04F1
cs=0x2a05;eip=0x0004f2; 	T(SUB(ax, ax));	// 85023 sub     ax, ax ;~ 2A05:04F2
cs=0x2a05;eip=0x0004f4; 	X(PUSH(ax));	// 85024 push    ax ;~ 2A05:04F4
cs=0x2a05;eip=0x0004f5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 85025 mov     bx, [bp+var_4] ;~ 2A05:04F5
cs=0x2a05;eip=0x0004f8; 	T(MOV(al, *(raddr(ds,bx+0x47))));	// 85026 mov     al, [bx+47h] ;~ 2A05:04F8
cs=0x2a05;eip=0x0004fb; 	T(SUB(ah, ah));	// 85027 sub     ah, ah ;~ 2A05:04FB
cs=0x2a05;eip=0x0004fd; 	X(PUSH(ax));	// 85028 push    ax ;~ 2A05:04FD
cs=0x2a05;eip=0x0004fe; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 85029 mov     ax, word ptr audiodriverbinary ;~ 2A05:04FE
cs=0x2a05;eip=0x000501; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 85030 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:0501
cs=0x2a05;eip=0x000505; 	T(ADD(ax, 0x15));	// 85031 add     ax, 15h ;~ 2A05:0505
cs=0x2a05;eip=0x000508; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8+2))), dx));	// 85032 mov     word ptr [bp+var_8+2], dx ;~ 2A05:0508
cs=0x2a05;eip=0x00050b; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8))), ax));	// 85033 mov     word ptr [bp+var_8], ax ;~ 2A05:050B
cs=0x2a05;eip=0x00050e; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_8))));	// 85034 call    [bp+var_8] ;~ 2A05:050E
cs=0x2a05;eip=0x000511; 	T(ADD(sp, 8));	// 85035 add     sp, 8 ;~ 2A05:0511
loc_38b44:
	// 10223 
cs=0x2a05;eip=0x000514; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 85038 mov     [bp+var_2], 0 ;~ 2A05:0514
cs=0x2a05;eip=0x000519; 	T(MOV(al, byte_459d2));	// 85039 mov     al, byte_459D2 ;~ 2A05:0519
cs=0x2a05;eip=0x00051c; 	T(SUB(ah, ah));	// 85040 sub     ah, ah ;~ 2A05:051C
cs=0x2a05;eip=0x00051e; 	T(OR(ax, ax));	// 85041 or      ax, ax ;~ 2A05:051E
cs=0x2a05;eip=0x000520; 	R(JNZ(loc_38b55));	// 85042 jnz     short loc_38B55 ;~ 2A05:0520
cs=0x2a05;eip=0x000522; 	R(JMP(loc_38be3));	// 85043 jmp     loc_38BE3 ;~ 2A05:0522
loc_38b55:
	// 10224 
cs=0x2a05;eip=0x000525; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 85047 mov     al, [bp+arg_2] ;~ 2A05:0525
cs=0x2a05;eip=0x000528; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 85048 mov     [bp+var_A], ax ;~ 2A05:0528
cs=0x2a05;eip=0x00052b; 	T(MOV(si, 0x0A2B6));	// 85049 mov     si, 0A2B6h ;~ 2A05:052B
cs=0x2a05;eip=0x00052e; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0x0A2B7));	// 85050 mov     [bp+var_E], 0A2B7h ;~ 2A05:052E
cs=0x2a05;eip=0x000533; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), si));	// 85051 mov     [bp+var_10], si ;~ 2A05:0533
cs=0x2a05;eip=0x000536; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), 0x0A2CC));	// 85052 mov     [bp+var_12], 0A2CCh ;~ 2A05:0536
cs=0x2a05;eip=0x00053b; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_2))));	// 85053 mov     di, [bp+var_2] ;~ 2A05:053B
loc_38b6e:
	// 10225 
cs=0x2a05;eip=0x00053e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 85056 mov     bx, [bp+var_4] ;~ 2A05:053E
cs=0x2a05;eip=0x000541; 	T(MOV(al, *(raddr(ds,si))));	// 85057 mov     al, [si] ;~ 2A05:0541
cs=0x2a05;eip=0x000543; 	T(CMP(*(raddr(ds,bx+0x23)), al));	// 85058 cmp     [bx+23h], al ;~ 2A05:0543
cs=0x2a05;eip=0x000546; 	R(JNZ(loc_38b9d));	// 85059 jnz     short loc_38B9D ;~ 2A05:0546
cs=0x2a05;eip=0x000548; 	T(CMP(byte_40634, 0));	// 85060 cmp     byte_40634, 0 ;~ 2A05:0548
cs=0x2a05;eip=0x00054d; 	R(JNZ(loc_38b9d));	// 85061 jnz     short loc_38B9D ;~ 2A05:054D
cs=0x2a05;eip=0x00054f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 85062 push    [bp+arg_4] ;~ 2A05:054F
cs=0x2a05;eip=0x000552; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 85063 push    [bp+var_A] ;~ 2A05:0552
cs=0x2a05;eip=0x000555; 	X(PUSH(si));	// 85064 push    si ;~ 2A05:0555
cs=0x2a05;eip=0x000556; 	X(PUSH(di));	// 85065 push    di ;~ 2A05:0556
cs=0x2a05;eip=0x000557; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 85066 mov     ax, word ptr audiodriverbinary ;~ 2A05:0557
cs=0x2a05;eip=0x00055a; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 85067 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:055A
cs=0x2a05;eip=0x00055e; 	T(ADD(ax, 0x15));	// 85068 add     ax, 15h ;~ 2A05:055E
cs=0x2a05;eip=0x000561; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8+2))), dx));	// 85069 mov     word ptr [bp+var_8+2], dx ;~ 2A05:0561
cs=0x2a05;eip=0x000564; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8))), ax));	// 85070 mov     word ptr [bp+var_8], ax ;~ 2A05:0564
cs=0x2a05;eip=0x000567; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_8))));	// 85071 call    [bp+var_8] ;~ 2A05:0567
cs=0x2a05;eip=0x00056a; 	T(ADD(sp, 8));	// 85072 add     sp, 8 ;~ 2A05:056A
loc_38b9d:
	// 10226 
cs=0x2a05;eip=0x00056d; 	T(CMP(*(raddr(ss,bp+arg_2)), 0x40));	// 85076 cmp     [bp+arg_2], 40h ; '@' ;~ 2A05:056D
cs=0x2a05;eip=0x000571; 	R(JNZ(loc_38bc4));	// 85077 jnz     short loc_38BC4 ;~ 2A05:0571
cs=0x2a05;eip=0x000573; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0));	// 85078 cmp     [bp+arg_4], 0 ;~ 2A05:0573
cs=0x2a05;eip=0x000577; 	R(JNZ(loc_38bc4));	// 85079 jnz     short loc_38BC4 ;~ 2A05:0577
cs=0x2a05;eip=0x000579; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_e))));	// 85080 mov     bx, [bp+var_E] ;~ 2A05:0579
cs=0x2a05;eip=0x00057c; 	T(CMP(*(raddr(ds,bx)), 2));	// 85081 cmp     byte ptr [bx], 2 ;~ 2A05:057C
cs=0x2a05;eip=0x00057f; 	R(JNZ(loc_38bc4));	// 85082 jnz     short loc_38BC4 ;~ 2A05:057F
cs=0x2a05;eip=0x000581; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_10))));	// 85083 mov     bx, [bp+var_10] ;~ 2A05:0581
cs=0x2a05;eip=0x000584; 	T(MOV(al, *(raddr(ds,bx))));	// 85084 mov     al, [bx] ;~ 2A05:0584
cs=0x2a05;eip=0x000586; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 85085 mov     bx, [bp+var_4] ;~ 2A05:0586
cs=0x2a05;eip=0x000589; 	T(CMP(*(raddr(ds,bx+0x23)), al));	// 85086 cmp     [bx+23h], al ;~ 2A05:0589
cs=0x2a05;eip=0x00058c; 	R(JNZ(loc_38bc4));	// 85087 jnz     short loc_38BC4 ;~ 2A05:058C
cs=0x2a05;eip=0x00058e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_12))));	// 85088 mov     bx, [bp+var_12] ;~ 2A05:058E
cs=0x2a05;eip=0x000591; 	X(MOV(*(raddr(ds,bx)), 4));	// 85089 mov     byte ptr [bx], 4 ;~ 2A05:0591
loc_38bc4:
	// 10227 
cs=0x2a05;eip=0x000594; 	T(ADD(si, 0x2E));	// 85093 add     si, 2Eh ; '.' ;~ 2A05:0594
cs=0x2a05;eip=0x000597; 	X(ADD(*(dw*)(raddr(ss,bp+var_e)), 0x2E));	// 85094 add     [bp+var_E], 2Eh ; '.' ;~ 2A05:0597
cs=0x2a05;eip=0x00059b; 	X(ADD(*(dw*)(raddr(ss,bp+var_10)), 0x2E));	// 85095 add     [bp+var_10], 2Eh ; '.' ;~ 2A05:059B
cs=0x2a05;eip=0x00059f; 	X(ADD(*(dw*)(raddr(ss,bp+var_12)), 0x2E));	// 85096 add     [bp+var_12], 2Eh ; '.' ;~ 2A05:059F
cs=0x2a05;eip=0x0005a3; 	T(INC(di));	// 85097 inc     di ;~ 2A05:05A3
cs=0x2a05;eip=0x0005a4; 	T(MOV(ax, di));	// 85098 mov     ax, di ;~ 2A05:05A4
cs=0x2a05;eip=0x0005a6; 	T(MOV(cl, byte_459d2));	// 85099 mov     cl, byte_459D2 ;~ 2A05:05A6
cs=0x2a05;eip=0x0005aa; 	T(SUB(ch, ch));	// 85100 sub     ch, ch ;~ 2A05:05AA
cs=0x2a05;eip=0x0005ac; 	T(CMP(ax, cx));	// 85101 cmp     ax, cx ;~ 2A05:05AC
cs=0x2a05;eip=0x0005ae; 	R(JC(loc_38b6e));	// 85102 jb      short loc_38B6E ;~ 2A05:05AE
cs=0x2a05;eip=0x0005b0; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), di));	// 85103 mov     [bp+var_2], di ;~ 2A05:05B0
loc_38be3:
	// 10228 
cs=0x2a05;eip=0x0005b3; 	X(POP(ds));	// 85106 pop     ds ;~ 2A05:05B3
cs=0x2a05;eip=0x0005b4; 	X(POP(si));	// 85107 pop     si ;~ 2A05:05B4
cs=0x2a05;eip=0x0005b5; 	X(POP(di));	// 85108 pop     di ;~ 2A05:05B5
cs=0x2a05;eip=0x0005b6; 	T(MOV(sp, bp));	// 85109 mov     sp, bp ;~ 2A05:05B6
cs=0x2a05;eip=0x0005b8; 	X(POP(bp));	// 85110 pop     bp ;~ 2A05:05B8
cs=0x2a05;eip=0x0005b9; 	R(RETF(0));	// 85111 retf ;~ 2A05:05B9
sub_38bea:
	// 85119 
#undef var_6
#define var_6 -6
	// 85121 var_6           = dword ptr -6 ;~ 2A05:05BA
#undef var_2
#define var_2 -2
	// 85122 var_2           = word ptr -2 ;~ 2A05:05BA
#undef arg_0
#define arg_0 6
	// 85123 arg_0           = word ptr  6 ;~ 2A05:05BA
#undef arg_2
#define arg_2 8
	// 85124 arg_2           = word ptr  8 ;~ 2A05:05BA
ret_2a05_5ba:
	// 10229 
cs=0x2a05;eip=0x0005ba; 	X(PUSH(bp));	// 85126 push    bp ;~ 2A05:05BA
cs=0x2a05;eip=0x0005bb; 	T(MOV(bp, sp));	// 85127 mov     bp, sp ;~ 2A05:05BB
cs=0x2a05;eip=0x0005bd; 	T(SUB(sp, 6));	// 85128 sub     sp, 6 ;~ 2A05:05BD
cs=0x2a05;eip=0x0005c0; 	X(PUSH(ds));	// 85129 push    ds ;~ 2A05:05C0
cs=0x2a05;eip=0x0005c1; 	T(MOV(ax, seg_offset(dseg)));	// 85130 mov     ax, seg dseg ;~ 2A05:05C1
cs=0x2a05;eip=0x0005c4; 	T(MOV(ds, ax));	// 85131 mov     ds, ax ;~ 2A05:05C4
cs=0x2a05;eip=0x0005c6; 	T(MOV(ax, 0x4C));	// 85132 mov     ax, 4Ch ; 'L' ;~ 2A05:05C6
cs=0x2a05;eip=0x0005c9; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 85133 imul    [bp+arg_0] ;~ 2A05:05C9
cs=0x2a05;eip=0x0005cc; 	T(ADD(ax, 0x81FC));	// 85134 add     ax, 81FCh ;~ 2A05:05CC
cs=0x2a05;eip=0x0005cf; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 85135 mov     [bp+var_2], ax ;~ 2A05:05CF
cs=0x2a05;eip=0x0005d2; 	T(TEST(*(dw*)(raddr(ss,bp+arg_2)), 0x100));	// 85136 test    [bp+arg_2], 100h ;~ 2A05:05D2
cs=0x2a05;eip=0x0005d7; 	R(JZ(loc_38c0d));	// 85137 jz      short loc_38C0D ;~ 2A05:05D7
cs=0x2a05;eip=0x0005d9; 	X(OR(*(db*)(raddr(ss,bp+arg_2)), 0x80));	// 85138 or      byte ptr [bp+arg_2], 80h ;~ 2A05:05D9
loc_38c0d:
	// 10230 
cs=0x2a05;eip=0x0005dd; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_2))));	// 85141 mov     al, byte ptr [bp+arg_2] ;~ 2A05:05DD
cs=0x2a05;eip=0x0005e0; 	T(CBW);	// 85142 cbw ;~ 2A05:05E0
cs=0x2a05;eip=0x0005e1; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_2))));	// 85143 mov     cx, [bp+arg_2] ;~ 2A05:05E1
cs=0x2a05;eip=0x0005e4; 	T(SUB(cl, cl));	// 85144 sub     cl, cl ;~ 2A05:05E4
cs=0x2a05;eip=0x0005e6; 	T(SHR(cx, 1));	// 85145 shr     cx, 1 ;~ 2A05:05E6
cs=0x2a05;eip=0x0005e8; 	T(ADD(cx, ax));	// 85146 add     cx, ax ;~ 2A05:05E8
cs=0x2a05;eip=0x0005ea; 	T(SUB(cx, 0x2000));	// 85147 sub     cx, 2000h ;~ 2A05:05EA
cs=0x2a05;eip=0x0005ee; 	X(MOV(*(dw*)(raddr(ss,bp+arg_2)), cx));	// 85148 mov     [bp+arg_2], cx ;~ 2A05:05EE
cs=0x2a05;eip=0x0005f1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 85149 mov     bx, [bp+var_2] ;~ 2A05:05F1
cs=0x2a05;eip=0x0005f4; 	T(MOV(ax, cx));	// 85150 mov     ax, cx ;~ 2A05:05F4
cs=0x2a05;eip=0x0005f6; 	X(MOV(*(dw*)(raddr(ds,bx+0x26)), ax));	// 85151 mov     [bx+26h], ax ;~ 2A05:05F6
cs=0x2a05;eip=0x0005f9; 	T(MOV(al, *(raddr(ds,bx+0x47))));	// 85152 mov     al, [bx+47h] ;~ 2A05:05F9
cs=0x2a05;eip=0x0005fc; 	T(SUB(ah, ah));	// 85153 sub     ah, ah ;~ 2A05:05FC
cs=0x2a05;eip=0x0005fe; 	X(PUSH(ax));	// 85154 push    ax ;~ 2A05:05FE
cs=0x2a05;eip=0x0005ff; 	X(PUSH(cx));	// 85155 push    cx ;~ 2A05:05FF
cs=0x2a05;eip=0x000600; 	X(PUSH(bx));	// 85156 push    bx ;~ 2A05:0600
cs=0x2a05;eip=0x000601; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 85157 mov     ax, word ptr audiodriverbinary ;~ 2A05:0601
cs=0x2a05;eip=0x000604; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 85158 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:0604
cs=0x2a05;eip=0x000608; 	T(ADD(ax, 0x1B));	// 85159 add     ax, 1Bh ;~ 2A05:0608
cs=0x2a05;eip=0x00060b; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6+2))), dx));	// 85160 mov     word ptr [bp+var_6+2], dx ;~ 2A05:060B
cs=0x2a05;eip=0x00060e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6))), ax));	// 85161 mov     word ptr [bp+var_6], ax ;~ 2A05:060E
cs=0x2a05;eip=0x000611; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_6))));	// 85162 call    [bp+var_6] ;~ 2A05:0611
cs=0x2a05;eip=0x000614; 	T(ADD(sp, 6));	// 85163 add     sp, 6 ;~ 2A05:0614
cs=0x2a05;eip=0x000617; 	X(POP(ds));	// 85164 pop     ds ;~ 2A05:0617
cs=0x2a05;eip=0x000618; 	T(MOV(sp, bp));	// 85165 mov     sp, bp ;~ 2A05:0618
cs=0x2a05;eip=0x00061a; 	X(POP(bp));	// 85166 pop     bp ;~ 2A05:061A
cs=0x2a05;eip=0x00061b; 	R(RETF(0));	// 85167 retf ;~ 2A05:061B
audio_unk2:
	// 85175 
#undef var_c
#define var_c -0x0C
	// 85178 var_C           = dword ptr -0Ch ;~ 2A05:061C
#undef var_6
#define var_6 -6
	// 85179 var_6           = word ptr -6 ;~ 2A05:061C
#undef var_4
#define var_4 -4
	// 85180 var_4           = word ptr -4 ;~ 2A05:061C
#undef var_2
#define var_2 -2
	// 85181 var_2           = word ptr -2 ;~ 2A05:061C
#undef arg_0
#define arg_0 6
	// 85182 arg_0           = word ptr  6 ;~ 2A05:061C
#undef arg_2
#define arg_2 8
	// 85183 arg_2           = byte ptr  8 ;~ 2A05:061C
ret_2a05_61c:
	// 10231 
cs=0x2a05;eip=0x00061c; 	X(PUSH(bp));	// 85185 push    bp ;~ 2A05:061C
cs=0x2a05;eip=0x00061d; 	T(MOV(bp, sp));	// 85186 mov     bp, sp ;~ 2A05:061D
cs=0x2a05;eip=0x00061f; 	T(SUB(sp, 0x0C));	// 85187 sub     sp, 0Ch ;~ 2A05:061F
cs=0x2a05;eip=0x000622; 	X(PUSH(di));	// 85188 push    di ;~ 2A05:0622
cs=0x2a05;eip=0x000623; 	X(PUSH(si));	// 85189 push    si ;~ 2A05:0623
cs=0x2a05;eip=0x000624; 	X(PUSH(ds));	// 85190 push    ds ;~ 2A05:0624
cs=0x2a05;eip=0x000625; 	T(MOV(ax, seg_offset(dseg)));	// 85191 mov     ax, seg dseg ;~ 2A05:0625
cs=0x2a05;eip=0x000628; 	T(MOV(ds, ax));	// 85192 mov     ds, ax ;~ 2A05:0628
cs=0x2a05;eip=0x00062a; 	T(MOV(ax, 0x4C));	// 85193 mov     ax, 4Ch ; 'L' ;~ 2A05:062A
cs=0x2a05;eip=0x00062d; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 85194 imul    [bp+arg_0] ;~ 2A05:062D
cs=0x2a05;eip=0x000630; 	T(ADD(ax, offset(dseg,audiochunks_unk)));	// 85195 add     ax, offset audiochunks_unk ;~ 2A05:0630
cs=0x2a05;eip=0x000633; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 85196 mov     [bp+var_4], ax ;~ 2A05:0633
cs=0x2a05;eip=0x000636; 	T(MOV(bx, ax));	// 85197 mov     bx, ax ;~ 2A05:0636
cs=0x2a05;eip=0x000638; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 85198 mov     al, [bp+arg_2] ;~ 2A05:0638
cs=0x2a05;eip=0x00063b; 	X(MOV(*(raddr(ds,bx+0x28)), al));	// 85199 mov     [bx+28h], al ;~ 2A05:063B
cs=0x2a05;eip=0x00063e; 	T(CMP(byte_40634, 0));	// 85200 cmp     byte_40634, 0 ;~ 2A05:063E
cs=0x2a05;eip=0x000643; 	R(JNZ(loc_38cc8));	// 85201 jnz     short loc_38CC8 ;~ 2A05:0643
cs=0x2a05;eip=0x000645; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 85202 mov     [bp+var_2], 0 ;~ 2A05:0645
cs=0x2a05;eip=0x00064a; 	T(MOV(al, byte_459d2));	// 85203 mov     al, byte_459D2 ;~ 2A05:064A
cs=0x2a05;eip=0x00064d; 	T(SUB(ah, ah));	// 85204 sub     ah, ah ;~ 2A05:064D
cs=0x2a05;eip=0x00064f; 	T(OR(ax, ax));	// 85205 or      ax, ax ;~ 2A05:064F
cs=0x2a05;eip=0x000651; 	R(JZ(loc_38cf0));	// 85206 jz      short loc_38CF0 ;~ 2A05:0651
cs=0x2a05;eip=0x000653; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 85207 mov     al, [bp+arg_2] ;~ 2A05:0653
cs=0x2a05;eip=0x000656; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 85208 mov     [bp+var_6], ax ;~ 2A05:0656
cs=0x2a05;eip=0x000659; 	T(MOV(si, offset(dseg,unk_45a26)));	// 85209 mov     si, offset unk_45A26 ;~ 2A05:0659
cs=0x2a05;eip=0x00065c; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_2))));	// 85210 mov     di, [bp+var_2] ;~ 2A05:065C
loc_38c8f:
	// 10232 
cs=0x2a05;eip=0x00065f; 	T(MOV(al, *(raddr(ds,si))));	// 85213 mov     al, [si] ;~ 2A05:065F
cs=0x2a05;eip=0x000661; 	T(SUB(ah, ah));	// 85214 sub     ah, ah ;~ 2A05:0661
cs=0x2a05;eip=0x000663; 	T(CMP(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 85215 cmp     ax, [bp+arg_0] ;~ 2A05:0663
cs=0x2a05;eip=0x000666; 	R(JNZ(loc_38cb3));	// 85216 jnz     short loc_38CB3 ;~ 2A05:0666
cs=0x2a05;eip=0x000668; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 85217 push    [bp+var_6] ;~ 2A05:0668
cs=0x2a05;eip=0x00066b; 	X(PUSH(si));	// 85218 push    si ;~ 2A05:066B
cs=0x2a05;eip=0x00066c; 	X(PUSH(di));	// 85219 push    di ;~ 2A05:066C
cs=0x2a05;eip=0x00066d; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 85220 mov     ax, word ptr audiodriverbinary ;~ 2A05:066D
cs=0x2a05;eip=0x000670; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 85221 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:0670
cs=0x2a05;eip=0x000674; 	T(ADD(ax, 0x12));	// 85222 add     ax, 12h ;~ 2A05:0674
cs=0x2a05;eip=0x000677; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c+2))), dx));	// 85223 mov     word ptr [bp+var_C+2], dx ;~ 2A05:0677
cs=0x2a05;eip=0x00067a; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c))), ax));	// 85224 mov     word ptr [bp+var_C], ax ;~ 2A05:067A
cs=0x2a05;eip=0x00067d; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_c))));	// 85225 call    [bp+var_C] ;~ 2A05:067D
cs=0x2a05;eip=0x000680; 	T(ADD(sp, 6));	// 85226 add     sp, 6 ;~ 2A05:0680
loc_38cb3:
	// 10233 
cs=0x2a05;eip=0x000683; 	T(ADD(si, 0x2E));	// 85229 add     si, 2Eh ; '.' ;~ 2A05:0683
cs=0x2a05;eip=0x000686; 	T(INC(di));	// 85230 inc     di ;~ 2A05:0686
cs=0x2a05;eip=0x000687; 	T(MOV(ax, di));	// 85231 mov     ax, di ;~ 2A05:0687
cs=0x2a05;eip=0x000689; 	T(MOV(cl, byte_459d2));	// 85232 mov     cl, byte_459D2 ;~ 2A05:0689
cs=0x2a05;eip=0x00068d; 	T(SUB(ch, ch));	// 85233 sub     ch, ch ;~ 2A05:068D
cs=0x2a05;eip=0x00068f; 	T(CMP(ax, cx));	// 85234 cmp     ax, cx ;~ 2A05:068F
cs=0x2a05;eip=0x000691; 	R(JC(loc_38c8f));	// 85235 jb      short loc_38C8F ;~ 2A05:0691
cs=0x2a05;eip=0x000693; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), di));	// 85236 mov     [bp+var_2], di ;~ 2A05:0693
cs=0x2a05;eip=0x000696; 	R(JMP(loc_38cf0));	// 85237 jmp     short loc_38CF0 ;~ 2A05:0696
loc_38cc8:
	// 10234 
cs=0x2a05;eip=0x000698; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 85241 mov     al, [bp+arg_2] ;~ 2A05:0698
cs=0x2a05;eip=0x00069b; 	T(SUB(ah, ah));	// 85242 sub     ah, ah ;~ 2A05:069B
cs=0x2a05;eip=0x00069d; 	X(PUSH(ax));	// 85243 push    ax ;~ 2A05:069D
cs=0x2a05;eip=0x00069e; 	T(SUB(ax, ax));	// 85244 sub     ax, ax ;~ 2A05:069E
cs=0x2a05;eip=0x0006a0; 	X(PUSH(ax));	// 85245 push    ax ;~ 2A05:06A0
cs=0x2a05;eip=0x0006a1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_4))));	// 85246 mov     bx, [bp+var_4] ;~ 2A05:06A1
cs=0x2a05;eip=0x0006a4; 	T(MOV(al, *(raddr(ds,bx+0x47))));	// 85247 mov     al, [bx+47h] ;~ 2A05:06A4
cs=0x2a05;eip=0x0006a7; 	T(SUB(ah, ah));	// 85248 sub     ah, ah ;~ 2A05:06A7
cs=0x2a05;eip=0x0006a9; 	X(PUSH(ax));	// 85249 push    ax ;~ 2A05:06A9
cs=0x2a05;eip=0x0006aa; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 85250 mov     ax, word ptr audiodriverbinary ;~ 2A05:06AA
cs=0x2a05;eip=0x0006ad; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 85251 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:06AD
cs=0x2a05;eip=0x0006b1; 	T(ADD(ax, 0x12));	// 85252 add     ax, 12h ;~ 2A05:06B1
cs=0x2a05;eip=0x0006b4; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c+2))), dx));	// 85253 mov     word ptr [bp+var_C+2], dx ;~ 2A05:06B4
cs=0x2a05;eip=0x0006b7; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c))), ax));	// 85254 mov     word ptr [bp+var_C], ax ;~ 2A05:06B7
cs=0x2a05;eip=0x0006ba; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_c))));	// 85255 call    [bp+var_C] ;~ 2A05:06BA
cs=0x2a05;eip=0x0006bd; 	T(ADD(sp, 6));	// 85256 add     sp, 6 ;~ 2A05:06BD
loc_38cf0:
	// 10235 
cs=0x2a05;eip=0x0006c0; 	X(POP(ds));	// 85260 pop     ds ;~ 2A05:06C0
cs=0x2a05;eip=0x0006c1; 	X(POP(si));	// 85261 pop     si ;~ 2A05:06C1
cs=0x2a05;eip=0x0006c2; 	X(POP(di));	// 85262 pop     di ;~ 2A05:06C2
cs=0x2a05;eip=0x0006c3; 	T(MOV(sp, bp));	// 85263 mov     sp, bp ;~ 2A05:06C3
cs=0x2a05;eip=0x0006c5; 	X(POP(bp));	// 85264 pop     bp ;~ 2A05:06C5
cs=0x2a05;eip=0x0006c6; 	R(RETF(0));	// 85265 retf ;~ 2A05:06C6
sub_38cf8:
	// 85275 
#undef var_a
#define var_a -0x0A
	// 85277 var_A           = dword ptr -0Ah ;~ 2A05:06C8
#undef var_4
#define var_4 -4
	// 85278 var_4           = word ptr -4 ;~ 2A05:06C8
#undef var_2
#define var_2 -2
	// 85279 var_2           = word ptr -2 ;~ 2A05:06C8
#undef arg_0
#define arg_0 6
	// 85280 arg_0           = word ptr  6 ;~ 2A05:06C8
#undef arg_2
#define arg_2 8
	// 85281 arg_2           = dword ptr  8 ;~ 2A05:06C8
ret_2a05_6c8:
	// 10236 
cs=0x2a05;eip=0x0006c8; 	X(PUSH(bp));	// 85283 push    bp ;~ 2A05:06C8
cs=0x2a05;eip=0x0006c9; 	T(MOV(bp, sp));	// 85284 mov     bp, sp ;~ 2A05:06C9
cs=0x2a05;eip=0x0006cb; 	T(SUB(sp, 0x0A));	// 85285 sub     sp, 0Ah ;~ 2A05:06CB
cs=0x2a05;eip=0x0006ce; 	X(PUSH(di));	// 85286 push    di ;~ 2A05:06CE
cs=0x2a05;eip=0x0006cf; 	X(PUSH(si));	// 85287 push    si ;~ 2A05:06CF
cs=0x2a05;eip=0x0006d0; 	X(PUSH(ds));	// 85288 push    ds ;~ 2A05:06D0
cs=0x2a05;eip=0x0006d1; 	T(MOV(ax, seg_offset(dseg)));	// 85289 mov     ax, seg dseg ;~ 2A05:06D1
cs=0x2a05;eip=0x0006d4; 	T(MOV(ds, ax));	// 85290 mov     ds, ax ;~ 2A05:06D4
cs=0x2a05;eip=0x0006d6; 	T(MOV(ax, 0x4C));	// 85291 mov     ax, 4Ch ; 'L' ;~ 2A05:06D6
cs=0x2a05;eip=0x0006d9; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 85292 imul    [bp+arg_0] ;~ 2A05:06D9
cs=0x2a05;eip=0x0006dc; 	T(MOV(si, ax));	// 85293 mov     si, ax ;~ 2A05:06DC
cs=0x2a05;eip=0x0006de; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 85294 mov     ax, word ptr [bp+arg_2] ;~ 2A05:06DE
cs=0x2a05;eip=0x0006e1; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 85295 mov     dx, word ptr [bp+arg_2+2] ;~ 2A05:06E1
cs=0x2a05;eip=0x0006e4; 	X(MOV(*(dw*)(raddr(ds,si-0x7DE6)), ax));	// 85296 mov     [si-7DE6h], ax ;~ 2A05:06E4
cs=0x2a05;eip=0x0006e8; 	X(MOV(*(dw*)(raddr(ds,si-0x7DE4)), dx));	// 85297 mov     [si-7DE4h], dx ;~ 2A05:06E8
cs=0x2a05;eip=0x0006ec; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 85298 les     bx, [bp+arg_2] ;~ 2A05:06EC
cs=0x2a05;eip=0x0006ef; 	T(CMP(*(raddr(es,bx+0x43)), 0x10));	// 85299 cmp     byte ptr es:[bx+43h], 10h ;~ 2A05:06EF
cs=0x2a05;eip=0x0006f4; 	R(JNC(loc_38d30));	// 85300 jnb     short loc_38D30 ;~ 2A05:06F4
cs=0x2a05;eip=0x0006f6; 	T(MOV(al, *(raddr(es,bx+0x43))));	// 85301 mov     al, es:[bx+43h] ;~ 2A05:06F6
cs=0x2a05;eip=0x0006fa; 	X(MOV(*(raddr(ds,si-0x7DBD)), al));	// 85302 mov     [si-7DBDh], al ;~ 2A05:06FA
cs=0x2a05;eip=0x0006fe; 	R(JMP(loc_38d43));	// 85303 jmp     short loc_38D43 ;~ 2A05:06FE
loc_38d30:
	// 10237 
cs=0x2a05;eip=0x000700; 	T(MOV(ax, 0x4C));	// 85307 mov     ax, 4Ch ; 'L' ;~ 2A05:0700
cs=0x2a05;eip=0x000703; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 85308 imul    [bp+arg_0] ;~ 2A05:0703
cs=0x2a05;eip=0x000706; 	T(MOV(bx, ax));	// 85309 mov     bx, ax ;~ 2A05:0706
cs=0x2a05;eip=0x000708; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_0))));	// 85310 mov     al, byte ptr [bp+arg_0] ;~ 2A05:0708
cs=0x2a05;eip=0x00070b; 	T(AND(al, 0x0F));	// 85311 and     al, 0Fh ;~ 2A05:070B
cs=0x2a05;eip=0x00070d; 	T(INC(al));	// 85312 inc     al ;~ 2A05:070D
cs=0x2a05;eip=0x00070f; 	X(MOV(*(raddr(ds,bx-0x7DBD)), al));	// 85313 mov     [bx-7DBDh], al ;~ 2A05:070F
loc_38d43:
	// 10238 
cs=0x2a05;eip=0x000713; 	T(CMP(byte_40634, 0));	// 85316 cmp     byte_40634, 0 ;~ 2A05:0713
cs=0x2a05;eip=0x000718; 	R(JNZ(loc_38dac));	// 85317 jnz     short loc_38DAC ;~ 2A05:0718
cs=0x2a05;eip=0x00071a; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 85318 mov     [bp+var_2], 0 ;~ 2A05:071A
cs=0x2a05;eip=0x00071f; 	T(MOV(al, byte_459d2));	// 85319 mov     al, byte_459D2 ;~ 2A05:071F
cs=0x2a05;eip=0x000722; 	T(SUB(ah, ah));	// 85320 sub     ah, ah ;~ 2A05:0722
cs=0x2a05;eip=0x000724; 	T(OR(ax, ax));	// 85321 or      ax, ax ;~ 2A05:0724
cs=0x2a05;eip=0x000726; 	R(JNZ(loc_38d5b));	// 85322 jnz     short loc_38D5B ;~ 2A05:0726
cs=0x2a05;eip=0x000728; 	R(JMP(loc_38dde));	// 85323 jmp     loc_38DDE ;~ 2A05:0728
loc_38d5b:
	// 10239 
cs=0x2a05;eip=0x00072b; 	T(MOV(ax, 0x4C));	// 85327 mov     ax, 4Ch ; 'L' ;~ 2A05:072B
cs=0x2a05;eip=0x00072e; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 85328 imul    [bp+arg_0] ;~ 2A05:072E
cs=0x2a05;eip=0x000731; 	T(ADD(ax, 0x81FC));	// 85329 add     ax, 81FCh ;~ 2A05:0731
cs=0x2a05;eip=0x000734; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 85330 mov     [bp+var_4], ax ;~ 2A05:0734
cs=0x2a05;eip=0x000737; 	T(MOV(si, 0x0A2B6));	// 85331 mov     si, 0A2B6h ;~ 2A05:0737
cs=0x2a05;eip=0x00073a; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_2))));	// 85332 mov     di, [bp+var_2] ;~ 2A05:073A
loc_38d6d:
	// 10240 
cs=0x2a05;eip=0x00073d; 	T(MOV(al, *(raddr(ds,si))));	// 85335 mov     al, [si] ;~ 2A05:073D
cs=0x2a05;eip=0x00073f; 	T(SUB(ah, ah));	// 85336 sub     ah, ah ;~ 2A05:073F
cs=0x2a05;eip=0x000741; 	T(CMP(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 85337 cmp     ax, [bp+arg_0] ;~ 2A05:0741
cs=0x2a05;eip=0x000744; 	R(JNZ(loc_38d97));	// 85338 jnz     short loc_38D97 ;~ 2A05:0744
cs=0x2a05;eip=0x000746; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 85339 push    word ptr [bp+arg_2+2] ;~ 2A05:0746
cs=0x2a05;eip=0x000749; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 85340 push    word ptr [bp+arg_2] ;~ 2A05:0749
cs=0x2a05;eip=0x00074c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 85341 push    [bp+var_4] ;~ 2A05:074C
cs=0x2a05;eip=0x00074f; 	X(PUSH(si));	// 85342 push    si ;~ 2A05:074F
cs=0x2a05;eip=0x000750; 	X(PUSH(di));	// 85343 push    di ;~ 2A05:0750
cs=0x2a05;eip=0x000751; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 85344 mov     ax, word ptr audiodriverbinary ;~ 2A05:0751
cs=0x2a05;eip=0x000754; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 85345 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:0754
cs=0x2a05;eip=0x000758; 	T(ADD(ax, 0x21));	// 85346 add     ax, 21h ; '!' ;~ 2A05:0758
cs=0x2a05;eip=0x00075b; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a+2))), dx));	// 85347 mov     word ptr [bp+var_A+2], dx ;~ 2A05:075B
cs=0x2a05;eip=0x00075e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a))), ax));	// 85348 mov     word ptr [bp+var_A], ax ;~ 2A05:075E
cs=0x2a05;eip=0x000761; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_a))));	// 85349 call    [bp+var_A] ;~ 2A05:0761
cs=0x2a05;eip=0x000764; 	T(ADD(sp, 0x0A));	// 85350 add     sp, 0Ah ;~ 2A05:0764
loc_38d97:
	// 10241 
cs=0x2a05;eip=0x000767; 	T(ADD(si, 0x2E));	// 85353 add     si, 2Eh ; '.' ;~ 2A05:0767
cs=0x2a05;eip=0x00076a; 	T(INC(di));	// 85354 inc     di ;~ 2A05:076A
cs=0x2a05;eip=0x00076b; 	T(MOV(ax, di));	// 85355 mov     ax, di ;~ 2A05:076B
cs=0x2a05;eip=0x00076d; 	T(MOV(cl, byte_459d2));	// 85356 mov     cl, byte_459D2 ;~ 2A05:076D
cs=0x2a05;eip=0x000771; 	T(SUB(ch, ch));	// 85357 sub     ch, ch ;~ 2A05:0771
cs=0x2a05;eip=0x000773; 	T(CMP(ax, cx));	// 85358 cmp     ax, cx ;~ 2A05:0773
cs=0x2a05;eip=0x000775; 	R(JC(loc_38d6d));	// 85359 jb      short loc_38D6D ;~ 2A05:0775
cs=0x2a05;eip=0x000777; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), di));	// 85360 mov     [bp+var_2], di ;~ 2A05:0777
cs=0x2a05;eip=0x00077a; 	R(JMP(loc_38dde));	// 85361 jmp     short loc_38DDE ;~ 2A05:077A
loc_38dac:
	// 10242 
cs=0x2a05;eip=0x00077c; 	T(MOV(ax, 0x4C));	// 85365 mov     ax, 4Ch ; 'L' ;~ 2A05:077C
cs=0x2a05;eip=0x00077f; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 85366 imul    [bp+arg_0] ;~ 2A05:077F
cs=0x2a05;eip=0x000782; 	T(MOV(si, ax));	// 85367 mov     si, ax ;~ 2A05:0782
cs=0x2a05;eip=0x000784; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 85368 push    word ptr [bp+arg_2+2] ;~ 2A05:0784
cs=0x2a05;eip=0x000787; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 85369 push    word ptr [bp+arg_2] ;~ 2A05:0787
cs=0x2a05;eip=0x00078a; 	T(ADD(ax, 0x81FC));	// 85370 add     ax, 81FCh ;~ 2A05:078A
cs=0x2a05;eip=0x00078d; 	X(PUSH(ax));	// 85371 push    ax ;~ 2A05:078D
cs=0x2a05;eip=0x00078e; 	T(SUB(ax, ax));	// 85372 sub     ax, ax ;~ 2A05:078E
cs=0x2a05;eip=0x000790; 	X(PUSH(ax));	// 85373 push    ax ;~ 2A05:0790
cs=0x2a05;eip=0x000791; 	T(MOV(al, *(raddr(ds,si-0x7DBD))));	// 85374 mov     al, [si-7DBDh] ;~ 2A05:0791
cs=0x2a05;eip=0x000795; 	T(SUB(ah, ah));	// 85375 sub     ah, ah ;~ 2A05:0795
cs=0x2a05;eip=0x000797; 	X(PUSH(ax));	// 85376 push    ax ;~ 2A05:0797
cs=0x2a05;eip=0x000798; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 85377 mov     ax, word ptr audiodriverbinary ;~ 2A05:0798
cs=0x2a05;eip=0x00079b; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 85378 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:079B
cs=0x2a05;eip=0x00079f; 	T(ADD(ax, 0x21));	// 85379 add     ax, 21h ; '!' ;~ 2A05:079F
cs=0x2a05;eip=0x0007a2; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a+2))), dx));	// 85380 mov     word ptr [bp+var_A+2], dx ;~ 2A05:07A2
cs=0x2a05;eip=0x0007a5; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a))), ax));	// 85381 mov     word ptr [bp+var_A], ax ;~ 2A05:07A5
cs=0x2a05;eip=0x0007a8; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_a))));	// 85382 call    [bp+var_A] ;~ 2A05:07A8
cs=0x2a05;eip=0x0007ab; 	T(ADD(sp, 0x0A));	// 85383 add     sp, 0Ah ;~ 2A05:07AB
loc_38dde:
	// 10243 
cs=0x2a05;eip=0x0007ae; 	X(POP(ds));	// 85387 pop     ds ;~ 2A05:07AE
cs=0x2a05;eip=0x0007af; 	X(POP(si));	// 85388 pop     si ;~ 2A05:07AF
cs=0x2a05;eip=0x0007b0; 	X(POP(di));	// 85389 pop     di ;~ 2A05:07B0
cs=0x2a05;eip=0x0007b1; 	T(MOV(sp, bp));	// 85390 mov     sp, bp ;~ 2A05:07B1
cs=0x2a05;eip=0x0007b3; 	X(POP(bp));	// 85391 pop     bp ;~ 2A05:07B3
cs=0x2a05;eip=0x0007b4; 	R(RETF(0));	// 85392 retf ;~ 2A05:07B4
sub_38de6:
	// 85402 
#undef var_12
#define var_12 -0x12
	// 85405 var_12          = dword ptr -12h ;~ 2A05:07B6
#undef var_e
#define var_e -0x0E
	// 85406 var_E           = dword ptr -0Eh ;~ 2A05:07B6
#undef var_a
#define var_a -0x0A
	// 85407 var_A           = word ptr -0Ah ;~ 2A05:07B6
#undef var_8
#define var_8 -8
	// 85408 var_8           = word ptr -8 ;~ 2A05:07B6
#undef var_6
#define var_6 -6
	// 85409 var_6           = word ptr -6 ;~ 2A05:07B6
#undef var_4
#define var_4 -4
	// 85410 var_4           = dword ptr -4 ;~ 2A05:07B6
#undef arg_0
#define arg_0 6
	// 85411 arg_0           = word ptr  6 ;~ 2A05:07B6
#undef arg_2
#define arg_2 8
	// 85412 arg_2           = word ptr  8 ;~ 2A05:07B6
ret_2a05_7b6:
	// 10244 
cs=0x2a05;eip=0x0007b6; 	X(PUSH(bp));	// 85414 push    bp ;~ 2A05:07B6
cs=0x2a05;eip=0x0007b7; 	T(MOV(bp, sp));	// 85415 mov     bp, sp ;~ 2A05:07B7
cs=0x2a05;eip=0x0007b9; 	T(SUB(sp, 0x12));	// 85416 sub     sp, 12h ;~ 2A05:07B9
cs=0x2a05;eip=0x0007bc; 	X(PUSH(si));	// 85417 push    si ;~ 2A05:07BC
cs=0x2a05;eip=0x0007bd; 	X(PUSH(ds));	// 85418 push    ds ;~ 2A05:07BD
cs=0x2a05;eip=0x0007be; 	T(MOV(ax, seg_offset(dseg)));	// 85419 mov     ax, seg dseg ;~ 2A05:07BE
cs=0x2a05;eip=0x0007c1; 	T(MOV(ds, ax));	// 85420 mov     ds, ax ;~ 2A05:07C1
cs=0x2a05;eip=0x0007c3; 	T(MOV(ax, 0x4C));	// 85421 mov     ax, 4Ch ; 'L' ;~ 2A05:07C3
cs=0x2a05;eip=0x0007c6; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_2))));	// 85422 imul    [bp+arg_2] ;~ 2A05:07C6
cs=0x2a05;eip=0x0007c9; 	T(ADD(ax, 0x81FC));	// 85423 add     ax, 81FCh ;~ 2A05:07C9
cs=0x2a05;eip=0x0007cc; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 85424 mov     [bp+var_8], ax ;~ 2A05:07CC
cs=0x2a05;eip=0x0007cf; 	T(MOV(bx, ax));	// 85425 mov     bx, ax ;~ 2A05:07CF
cs=0x2a05;eip=0x0007d1; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1E))));	// 85426 mov     ax, [bx+1Eh] ;~ 2A05:07D1
cs=0x2a05;eip=0x0007d4; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x20))));	// 85427 mov     dx, [bx+20h] ;~ 2A05:07D4
cs=0x2a05;eip=0x0007d7; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 85428 mov     word ptr [bp+var_4], ax ;~ 2A05:07D7
cs=0x2a05;eip=0x0007da; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 85429 mov     word ptr [bp+var_4+2], dx ;~ 2A05:07DA
cs=0x2a05;eip=0x0007dd; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 85430 les     bx, [bp+var_4] ;~ 2A05:07DD
cs=0x2a05;eip=0x0007e0; 	T(CMP(*(raddr(es,bx+5)), 5));	// 85431 cmp     byte ptr es:[bx+5], 5 ;~ 2A05:07E0
cs=0x2a05;eip=0x0007e5; 	R(JZ(loc_38e1a));	// 85432 jz      short loc_38E1A ;~ 2A05:07E5
cs=0x2a05;eip=0x0007e7; 	R(JMP(loc_38e9e));	// 85433 jmp     loc_38E9E ;~ 2A05:07E7
loc_38e1a:
	// 10245 
cs=0x2a05;eip=0x0007ea; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 85437 mov     bx, [bp+arg_0] ;~ 2A05:07EA
cs=0x2a05;eip=0x0007ed; 	T(MOV(al, *(raddr(ds,bx+4))));	// 85438 mov     al, [bx+4] ;~ 2A05:07ED
cs=0x2a05;eip=0x0007f0; 	T(SUB(ah, ah));	// 85439 sub     ah, ah ;~ 2A05:07F0
cs=0x2a05;eip=0x0007f2; 	T(SUB(ax, 0x18));	// 85440 sub     ax, 18h         ; switch 16 cases ;~ 2A05:07F2
cs=0x2a05;eip=0x0007f5; 	T(CMP(ax, 0x0F));	// 85441 cmp     ax, 0Fh ;~ 2A05:07F5
cs=0x2a05;eip=0x0007f8; 	R(JA(def_38e2d));	// 85442 ja      short def_38E2D ; jumptable 00038E2D default case, cases 25,27-29,31,33,35,36,38 ;~ 2A05:07F8
cs=0x2a05;eip=0x0007fa; 	T(ADD(ax, ax));	// 85443 add     ax, ax ;~ 2A05:07FA
cs=0x2a05;eip=0x0007fc; 	T(XCHG(ax, bx));	// 85444 xchg    ax, bx ;~ 2A05:07FC
	cs=seg_offset(seg028);
cs=0x2a05;eip=0x0007fd; __disp=*(dw*)(((db*)&jpt_38e2d)+bx);
	R(JMP(__dispatch_call));	// 85445 jmp     cs:jpt_38E2D[bx] ; switch jump ;~ 2A05:07FD
loc_38e32:
	// 10246 
cs=0x2a05;eip=0x000802; 	T(MOV(ax, basdres));	// 85450 mov     ax, basdres     ; jumptable 00038E2D case 24 ;~ 2A05:0802
cs=0x2a05;eip=0x000805; 	T(MOV(dx, word_42a36));	// 85451 mov     dx, word_42A36 ;~ 2A05:0805
loc_38e39:
	// 10247 
cs=0x2a05;eip=0x000809; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 85455 mov     word ptr [bp+var_4], ax ;~ 2A05:0809
cs=0x2a05;eip=0x00080c; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 85456 mov     word ptr [bp+var_4+2], dx ;~ 2A05:080C
cs=0x2a05;eip=0x00080f; 	R(JMP(loc_38e9e));	// 85457 jmp     short loc_38E9E ;~ 2A05:080F
loc_38e42:
	// 10248 
cs=0x2a05;eip=0x000812; 	T(MOV(ax, snarres));	// 85463 mov     ax, snarres     ; jumptable 00038E2D case 26 ;~ 2A05:0812
cs=0x2a05;eip=0x000815; 	T(MOV(dx, word_43940));	// 85464 mov     dx, word_43940 ;~ 2A05:0815
cs=0x2a05;eip=0x000819; 	R(JMP(loc_38e39));	// 85465 jmp     short loc_38E39 ;~ 2A05:0819
loc_38e4c:
	// 10249 
cs=0x2a05;eip=0x00081c; 	T(MOV(ax, rideres));	// 85471 mov     ax, rideres     ; jumptable 00038E2D case 37 ;~ 2A05:081C
cs=0x2a05;eip=0x00081f; 	T(MOV(dx, word_454cc));	// 85472 mov     dx, word_454CC ;~ 2A05:081F
cs=0x2a05;eip=0x000823; 	R(JMP(loc_38e39));	// 85473 jmp     short loc_38E39 ;~ 2A05:0823
loc_38e56:
	// 10250 
cs=0x2a05;eip=0x000826; 	T(MOV(ax, crshres));	// 85479 mov     ax, crshres     ; jumptable 00038E2D case 39 ;~ 2A05:0826
cs=0x2a05;eip=0x000829; 	T(MOV(dx, word_4432e));	// 85480 mov     dx, word_4432E ;~ 2A05:0829
cs=0x2a05;eip=0x00082d; 	R(JMP(loc_38e39));	// 85481 jmp     short loc_38E39 ;~ 2A05:082D
loc_38e60:
	// 10251 
cs=0x2a05;eip=0x000830; 	T(MOV(ax, chhtres));	// 85487 mov     ax, chhtres     ; jumptable 00038E2D case 30 ;~ 2A05:0830
cs=0x2a05;eip=0x000833; 	T(MOV(dx, word_4392a));	// 85488 mov     dx, word_4392A ;~ 2A05:0833
cs=0x2a05;eip=0x000837; 	R(JMP(loc_38e39));	// 85489 jmp     short loc_38E39 ;~ 2A05:0837
loc_38e6a:
	// 10252 
cs=0x2a05;eip=0x00083a; 	T(MOV(ax, ohhtres));	// 85495 mov     ax, ohhtres     ; jumptable 00038E2D cases 32,34 ;~ 2A05:083A
cs=0x2a05;eip=0x00083d; 	T(MOV(dx, word_4436a));	// 85496 mov     dx, word_4436A ;~ 2A05:083D
cs=0x2a05;eip=0x000841; 	R(JMP(loc_38e39));	// 85497 jmp     short loc_38E39 ;~ 2A05:0841
def_38e2d:
	// 10253 
cs=0x2a05;eip=0x000844; 	T(MOV(ax, tommres));	// 85504 mov     ax, tommres     ; jumptable 00038E2D default case, cases 25,27-29,31,33,35,36,38 ;~ 2A05:0844
cs=0x2a05;eip=0x000847; 	T(MOV(dx, word_4394c));	// 85505 mov     dx, word_4394C ;~ 2A05:0847
cs=0x2a05;eip=0x00084b; 	R(JMP(loc_38e39));	// 85506 jmp     short loc_38E39 ;~ 2A05:084B
loc_38e9e:
	// 10254 
cs=0x2a05;eip=0x00086e; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 85529 mov     ax, word ptr [bp+var_4] ;~ 2A05:086E
cs=0x2a05;eip=0x000871; 	T(OR(ax, *(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 85530 or      ax, word ptr [bp+var_4+2] ;~ 2A05:0871
cs=0x2a05;eip=0x000874; 	R(JNZ(loc_38eb0));	// 85531 jnz     short loc_38EB0 ;~ 2A05:0874
loc_38ea6:
	// 10255 
cs=0x2a05;eip=0x000876; 	T(MOV(ax, 0x0FFFF));	// 85534 mov     ax, 0FFFFh ;~ 2A05:0876
cs=0x2a05;eip=0x000879; 	X(POP(ds));	// 85535 pop     ds ;~ 2A05:0879
cs=0x2a05;eip=0x00087a; 	X(POP(si));	// 85536 pop     si ;~ 2A05:087A
cs=0x2a05;eip=0x00087b; 	T(MOV(sp, bp));	// 85537 mov     sp, bp ;~ 2A05:087B
cs=0x2a05;eip=0x00087d; 	X(POP(bp));	// 85538 pop     bp ;~ 2A05:087D
cs=0x2a05;eip=0x00087e; 	R(RETF(0));	// 85539 retf ;~ 2A05:087E
loc_38eb0:
	// 10256 
cs=0x2a05;eip=0x000880; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 85544 push    [bp+var_8] ;~ 2A05:0880
cs=0x2a05;eip=0x000883; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 85545 push    word ptr [bp+var_4+2] ;~ 2A05:0883
cs=0x2a05;eip=0x000886; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 85546 push    word ptr [bp+var_4] ;~ 2A05:0886
cs=0x2a05;eip=0x000889; 	X(PUSH(cs));	// 85547 push    cs ;~ 2A05:0889
cs=0x2a05;eip=0x00088a; 	R(CALL(_group18,m2c::kloc_390c8));	// 85548 call    loc_390C8 ;~ 2A05:088A
cs=0x2a05;eip=0x00088d; 	T(ADD(sp, 6));	// 85549 add     sp, 6 ;~ 2A05:088D
cs=0x2a05;eip=0x000890; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 85550 mov     [bp+var_6], ax ;~ 2A05:0890
cs=0x2a05;eip=0x000893; 	T(CMP(ax, 0x0FFFF));	// 85551 cmp     ax, 0FFFFh ;~ 2A05:0893
cs=0x2a05;eip=0x000896; 	R(JZ(loc_38ea6));	// 85552 jz      short loc_38EA6 ;~ 2A05:0896
cs=0x2a05;eip=0x000898; 	T(MOV(ax, 0x2E));	// 85553 mov     ax, 2Eh ; '.' ;~ 2A05:0898
cs=0x2a05;eip=0x00089b; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_6))));	// 85554 imul    [bp+var_6] ;~ 2A05:089B
cs=0x2a05;eip=0x00089e; 	T(ADD(ax, 0x0A2B6));	// 85555 add     ax, 0A2B6h ;~ 2A05:089E
cs=0x2a05;eip=0x0008a1; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 85556 mov     [bp+var_A], ax ;~ 2A05:08A1
cs=0x2a05;eip=0x0008a4; 	T(MOV(bx, ax));	// 85557 mov     bx, ax ;~ 2A05:08A4
cs=0x2a05;eip=0x0008a6; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 85558 mov     ax, word ptr [bp+var_4] ;~ 2A05:08A6
cs=0x2a05;eip=0x0008a9; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 85559 mov     dx, word ptr [bp+var_4+2] ;~ 2A05:08A9
cs=0x2a05;eip=0x0008ac; 	T(CMP(*(dw*)(raddr(ds,bx+0x10)), ax));	// 85560 cmp     [bx+10h], ax ;~ 2A05:08AC
cs=0x2a05;eip=0x0008af; 	R(JNZ(loc_38ee6));	// 85561 jnz     short loc_38EE6 ;~ 2A05:08AF
cs=0x2a05;eip=0x0008b1; 	T(CMP(*(dw*)(raddr(ds,bx+0x12)), dx));	// 85562 cmp     [bx+12h], dx ;~ 2A05:08B1
cs=0x2a05;eip=0x0008b4; 	R(JZ(loc_38f18));	// 85563 jz      short loc_38F18 ;~ 2A05:08B4
loc_38ee6:
	// 10257 
cs=0x2a05;eip=0x0008b6; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 85566 mov     ax, word ptr [bp+var_4] ;~ 2A05:08B6
cs=0x2a05;eip=0x0008b9; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 85567 mov     dx, word ptr [bp+var_4+2] ;~ 2A05:08B9
cs=0x2a05;eip=0x0008bc; 	X(MOV(*(dw*)(raddr(ds,bx+0x10)), ax));	// 85568 mov     [bx+10h], ax ;~ 2A05:08BC
cs=0x2a05;eip=0x0008bf; 	X(MOV(*(dw*)(raddr(ds,bx+0x12)), dx));	// 85569 mov     [bx+12h], dx ;~ 2A05:08BF
cs=0x2a05;eip=0x0008c2; 	T(CMP(byte_40634, 0));	// 85570 cmp     byte_40634, 0 ;~ 2A05:08C2
cs=0x2a05;eip=0x0008c7; 	R(JNZ(loc_38f18));	// 85571 jnz     short loc_38F18 ;~ 2A05:08C7
cs=0x2a05;eip=0x0008c9; 	X(PUSH(dx));	// 85572 push    dx ;~ 2A05:08C9
cs=0x2a05;eip=0x0008ca; 	X(PUSH(ax));	// 85573 push    ax ;~ 2A05:08CA
cs=0x2a05;eip=0x0008cb; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 85574 push    [bp+var_8] ;~ 2A05:08CB
cs=0x2a05;eip=0x0008ce; 	X(PUSH(bx));	// 85575 push    bx ;~ 2A05:08CE
cs=0x2a05;eip=0x0008cf; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 85576 push    [bp+var_6] ;~ 2A05:08CF
cs=0x2a05;eip=0x0008d2; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 85577 mov     ax, word ptr audiodriverbinary ;~ 2A05:08D2
cs=0x2a05;eip=0x0008d5; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 85578 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:08D5
cs=0x2a05;eip=0x0008d9; 	T(ADD(ax, 0x21));	// 85579 add     ax, 21h ; '!' ;~ 2A05:08D9
cs=0x2a05;eip=0x0008dc; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e +2))), dx));	// 85580 mov     word ptr [bp+var_E+2], dx ;~ 2A05:08DC
cs=0x2a05;eip=0x0008df; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e))), ax));	// 85581 mov     word ptr [bp+var_E], ax ;~ 2A05:08DF
cs=0x2a05;eip=0x0008e2; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_e))));	// 85582 call    [bp+var_E] ;~ 2A05:08E2
cs=0x2a05;eip=0x0008e5; 	T(ADD(sp, 0x0A));	// 85583 add     sp, 0Ah ;~ 2A05:08E5
loc_38f18:
	// 10258 
cs=0x2a05;eip=0x0008e8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_a))));	// 85587 mov     bx, [bp+var_A] ;~ 2A05:08E8
cs=0x2a05;eip=0x0008eb; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_2))));	// 85588 mov     al, byte ptr [bp+arg_2] ;~ 2A05:08EB
cs=0x2a05;eip=0x0008ee; 	X(MOV(*(raddr(ds,bx)), al));	// 85589 mov     [bx], al ;~ 2A05:08EE
cs=0x2a05;eip=0x0008f0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 85590 mov     ax, [bp+var_8] ;~ 2A05:08F0
cs=0x2a05;eip=0x0008f3; 	X(MOV(*(dw*)(raddr(ds,bx+0x2A)), ax));	// 85591 mov     [bx+2Ah], ax ;~ 2A05:08F3
cs=0x2a05;eip=0x0008f6; 	X(MOV(*(raddr(ds,bx+1)), 1));	// 85592 mov     byte ptr [bx+1], 1 ;~ 2A05:08F6
cs=0x2a05;eip=0x0008fa; 	X(MOV(*(raddr(ds,bx+0x16)), 1));	// 85593 mov     byte ptr [bx+16h], 1 ;~ 2A05:08FA
cs=0x2a05;eip=0x0008fe; 	T(MOV(si, bx));	// 85594 mov     si, bx ;~ 2A05:08FE
cs=0x2a05;eip=0x000900; 	T(LES(si, *(dw*)(raddr(ds,si+0x10))));	// 85595 les     si, [si+10h] ;~ 2A05:0900
cs=0x2a05;eip=0x000903; 	T(MOV(ax, *(dw*)(raddr(es,si+0x1C))));	// 85596 mov     ax, es:[si+1Ch] ;~ 2A05:0903
cs=0x2a05;eip=0x000907; 	X(MOV(*(dw*)(raddr(ds,bx+0x14)), ax));	// 85597 mov     [bx+14h], ax ;~ 2A05:0907
cs=0x2a05;eip=0x00090a; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_8))));	// 85598 mov     si, [bp+var_8] ;~ 2A05:090A
cs=0x2a05;eip=0x00090d; 	T(MOV(al, *(raddr(ds,si+0x24))));	// 85599 mov     al, [si+24h] ;~ 2A05:090D
cs=0x2a05;eip=0x000910; 	X(MOV(*(raddr(ds,bx+2)), al));	// 85600 mov     [bx+2], al ;~ 2A05:0910
cs=0x2a05;eip=0x000913; 	T(SUB(ax, ax));	// 85601 sub     ax, ax ;~ 2A05:0913
cs=0x2a05;eip=0x000915; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), ax));	// 85602 mov     [bx+0Ah], ax ;~ 2A05:0915
cs=0x2a05;eip=0x000918; 	X(MOV(*(dw*)(raddr(ds,bx+8)), ax));	// 85603 mov     [bx+8], ax ;~ 2A05:0918
cs=0x2a05;eip=0x00091b; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 85604 mov     si, [bp+arg_0] ;~ 2A05:091B
cs=0x2a05;eip=0x00091e; 	T(MOV(ax, *(dw*)(raddr(ds,si+6))));	// 85605 mov     ax, [si+6] ;~ 2A05:091E
cs=0x2a05;eip=0x000921; 	T(MOV(dx, *(dw*)(raddr(ds,si+8))));	// 85606 mov     dx, [si+8] ;~ 2A05:0921
cs=0x2a05;eip=0x000924; 	T(SUB(ax, 1));	// 85607 sub     ax, 1 ;~ 2A05:0924
cs=0x2a05;eip=0x000927; 	T(SBB(dx, 0));	// 85608 sbb     dx, 0 ;~ 2A05:0927
cs=0x2a05;eip=0x00092a; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), ax));	// 85609 mov     [bx+0Ch], ax ;~ 2A05:092A
cs=0x2a05;eip=0x00092d; 	X(MOV(*(dw*)(raddr(ds,bx+0x0E)), dx));	// 85610 mov     [bx+0Eh], dx ;~ 2A05:092D
cs=0x2a05;eip=0x000930; 	T(LES(si, *(dd*)(raddr(ss,bp+var_4))));	// 85611 les     si, [bp+var_4] ;~ 2A05:0930
cs=0x2a05;eip=0x000933; 	T(MOV(ax, *(dw*)(raddr(es,si+0x2A))));	// 85612 mov     ax, es:[si+2Ah] ;~ 2A05:0933
cs=0x2a05;eip=0x000937; 	X(MOV(*(dw*)(raddr(ds,bx+0x18)), ax));	// 85613 mov     [bx+18h], ax ;~ 2A05:0937
cs=0x2a05;eip=0x00093a; 	T(MOV(ax, *(dw*)(raddr(es,si+0x2C))));	// 85614 mov     ax, es:[si+2Ch] ;~ 2A05:093A
cs=0x2a05;eip=0x00093e; 	X(MOV(*(dw*)(raddr(ds,bx+0x1A)), ax));	// 85615 mov     [bx+1Ah], ax ;~ 2A05:093E
cs=0x2a05;eip=0x000941; 	T(MOV(ax, *(dw*)(raddr(es,si+0x30))));	// 85616 mov     ax, es:[si+30h] ;~ 2A05:0941
cs=0x2a05;eip=0x000945; 	X(MOV(*(dw*)(raddr(ds,bx+0x24)), ax));	// 85617 mov     [bx+24h], ax ;~ 2A05:0945
cs=0x2a05;eip=0x000948; 	X(MOV(*(dw*)(raddr(ds,bx+0x1C)), 0));	// 85618 mov     word ptr [bx+1Ch], 0 ;~ 2A05:0948
cs=0x2a05;eip=0x00094d; 	T(MOV(al, *(raddr(es,si+0x34))));	// 85619 mov     al, es:[si+34h] ;~ 2A05:094D
cs=0x2a05;eip=0x000951; 	X(MOV(*(raddr(ds,bx+0x26)), al));	// 85620 mov     [bx+26h], al ;~ 2A05:0951
cs=0x2a05;eip=0x000954; 	X(MOV(*(raddr(ds,bx+0x27)), 0));	// 85621 mov     byte ptr [bx+27h], 0 ;~ 2A05:0954
cs=0x2a05;eip=0x000958; 	T(MOV(ax, *(dw*)(raddr(es,si+0x36))));	// 85622 mov     ax, es:[si+36h] ;~ 2A05:0958
cs=0x2a05;eip=0x00095c; 	X(MOV(*(dw*)(raddr(ds,bx+0x1E)), ax));	// 85623 mov     [bx+1Eh], ax ;~ 2A05:095C
cs=0x2a05;eip=0x00095f; 	T(MOV(ax, *(dw*)(raddr(es,si+0x38))));	// 85624 mov     ax, es:[si+38h] ;~ 2A05:095F
cs=0x2a05;eip=0x000963; 	X(MOV(*(dw*)(raddr(ds,bx+0x20)), ax));	// 85625 mov     [bx+20h], ax ;~ 2A05:0963
cs=0x2a05;eip=0x000966; 	X(MOV(*(raddr(ds,bx+0x28)), 0));	// 85626 mov     byte ptr [bx+28h], 0 ;~ 2A05:0966
cs=0x2a05;eip=0x00096a; 	X(MOV(*(raddr(ds,bx+0x22)), 0));	// 85627 mov     byte ptr [bx+22h], 0 ;~ 2A05:096A
cs=0x2a05;eip=0x00096e; 	X(MOV(*(raddr(ds,bx+0x29)), 0));	// 85628 mov     byte ptr [bx+29h], 0 ;~ 2A05:096E
cs=0x2a05;eip=0x000972; 	T(CMP(byte_40634, 0));	// 85629 cmp     byte_40634, 0 ;~ 2A05:0972
cs=0x2a05;eip=0x000977; 	R(JNZ(loc_38fae));	// 85630 jnz     short loc_38FAE ;~ 2A05:0977
cs=0x2a05;eip=0x000979; 	T(MOV(al, *(db*)(raddr(ss,bp+var_6))));	// 85631 mov     al, byte ptr [bp+var_6] ;~ 2A05:0979
cs=0x2a05;eip=0x00097c; 	R(JMP(loc_38fb4));	// 85632 jmp     short loc_38FB4 ;~ 2A05:097C
loc_38fae:
	// 10259 
cs=0x2a05;eip=0x00097e; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_8))));	// 85636 mov     si, [bp+var_8] ;~ 2A05:097E
cs=0x2a05;eip=0x000981; 	T(MOV(al, *(raddr(ds,si+0x47))));	// 85637 mov     al, [si+47h] ;~ 2A05:0981
loc_38fb4:
	// 10260 
cs=0x2a05;eip=0x000984; 	X(MOV(*(raddr(ds,bx+0x2C)), al));	// 85640 mov     [bx+2Ch], al ;~ 2A05:0984
cs=0x2a05;eip=0x000987; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 85641 mov     bx, [bp+arg_0] ;~ 2A05:0987
cs=0x2a05;eip=0x00098a; 	T(CMP(*(raddr(ds,bx+4)), 0x0FF));	// 85642 cmp     byte ptr [bx+4], 0FFh ;~ 2A05:098A
cs=0x2a05;eip=0x00098e; 	R(JNZ(loc_38ff2));	// 85643 jnz     short loc_38FF2 ;~ 2A05:098E
cs=0x2a05;eip=0x000990; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 85644 push    word ptr [bx] ;~ 2A05:0990
cs=0x2a05;eip=0x000992; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 85645 push    [bp+var_A] ;~ 2A05:0992
cs=0x2a05;eip=0x000995; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_a))));	// 85646 mov     bx, [bp+var_A] ;~ 2A05:0995
cs=0x2a05;eip=0x000998; 	T(MOV(al, *(raddr(ds,bx+0x2C))));	// 85647 mov     al, [bx+2Ch] ;~ 2A05:0998
cs=0x2a05;eip=0x00099b; 	T(SUB(ah, ah));	// 85648 sub     ah, ah ;~ 2A05:099B
cs=0x2a05;eip=0x00099d; 	X(PUSH(ax));	// 85649 push    ax ;~ 2A05:099D
cs=0x2a05;eip=0x00099e; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 85650 mov     ax, word ptr audiodriverbinary ;~ 2A05:099E
cs=0x2a05;eip=0x0009a1; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 85651 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:09A1
cs=0x2a05;eip=0x0009a5; 	T(ADD(ax, 0x24));	// 85652 add     ax, 24h ; '$' ;~ 2A05:09A5
cs=0x2a05;eip=0x0009a8; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e +2))), dx));	// 85653 mov     word ptr [bp+var_E+2], dx ;~ 2A05:09A8
cs=0x2a05;eip=0x0009ab; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e))), ax));	// 85654 mov     word ptr [bp+var_E], ax ;~ 2A05:09AB
cs=0x2a05;eip=0x0009ae; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_e))));	// 85655 call    [bp+var_E] ;~ 2A05:09AE
cs=0x2a05;eip=0x0009b1; 	T(ADD(sp, 6));	// 85656 add     sp, 6 ;~ 2A05:09B1
cs=0x2a05;eip=0x0009b4; 	T(CMP(byte_40634, 0));	// 85657 cmp     byte_40634, 0 ;~ 2A05:09B4
cs=0x2a05;eip=0x0009b9; 	R(JZ(loc_38ff2));	// 85658 jz      short loc_38FF2 ;~ 2A05:09B9
cs=0x2a05;eip=0x0009bb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 85659 mov     bx, [bp+arg_0] ;~ 2A05:09BB
cs=0x2a05;eip=0x0009be; 	X(MOV(*(raddr(ds,bx+4)), 0x3C));	// 85660 mov     byte ptr [bx+4], 3Ch ; '<' ;~ 2A05:09BE
loc_38ff2:
	// 10261 
cs=0x2a05;eip=0x0009c2; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 85664 push    word ptr [bp+var_4+2] ;~ 2A05:09C2
cs=0x2a05;eip=0x0009c5; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 85665 push    word ptr [bp+var_4] ;~ 2A05:09C5
cs=0x2a05;eip=0x0009c8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 85666 mov     bx, [bp+arg_0] ;~ 2A05:09C8
cs=0x2a05;eip=0x0009cb; 	T(MOV(al, *(raddr(ds,bx+5))));	// 85667 mov     al, [bx+5] ;~ 2A05:09CB
cs=0x2a05;eip=0x0009ce; 	T(SUB(ah, ah));	// 85668 sub     ah, ah ;~ 2A05:09CE
cs=0x2a05;eip=0x0009d0; 	X(PUSH(ax));	// 85669 push    ax ;~ 2A05:09D0
cs=0x2a05;eip=0x0009d1; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 85670 les     bx, [bp+var_4] ;~ 2A05:09D1
cs=0x2a05;eip=0x0009d4; 	T(MOV(al, *(raddr(es,bx+0x10))));	// 85671 mov     al, es:[bx+10h] ;~ 2A05:09D4
cs=0x2a05;eip=0x0009d8; 	T(CBW);	// 85672 cbw ;~ 2A05:09D8
cs=0x2a05;eip=0x0009d9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 85673 mov     bx, [bp+arg_0] ;~ 2A05:09D9
cs=0x2a05;eip=0x0009dc; 	T(MOV(cx, ax));	// 85674 mov     cx, ax ;~ 2A05:09DC
cs=0x2a05;eip=0x0009de; 	T(MOV(al, *(raddr(ds,bx+4))));	// 85675 mov     al, [bx+4] ;~ 2A05:09DE
cs=0x2a05;eip=0x0009e1; 	T(CBW);	// 85676 cbw ;~ 2A05:09E1
cs=0x2a05;eip=0x0009e2; 	T(ADD(ax, cx));	// 85677 add     ax, cx ;~ 2A05:09E2
cs=0x2a05;eip=0x0009e4; 	X(PUSH(ax));	// 85678 push    ax ;~ 2A05:09E4
cs=0x2a05;eip=0x0009e5; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 85679 push    [bp+var_8] ;~ 2A05:09E5
cs=0x2a05;eip=0x0009e8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 85680 push    [bp+var_A] ;~ 2A05:09E8
cs=0x2a05;eip=0x0009eb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_a))));	// 85681 mov     bx, [bp+var_A] ;~ 2A05:09EB
cs=0x2a05;eip=0x0009ee; 	T(MOV(al, *(raddr(ds,bx+0x2C))));	// 85682 mov     al, [bx+2Ch] ;~ 2A05:09EE
cs=0x2a05;eip=0x0009f1; 	T(SUB(ah, ah));	// 85683 sub     ah, ah ;~ 2A05:09F1
cs=0x2a05;eip=0x0009f3; 	X(PUSH(ax));	// 85684 push    ax ;~ 2A05:09F3
cs=0x2a05;eip=0x0009f4; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 85685 mov     ax, word ptr audiodriverbinary ;~ 2A05:09F4
cs=0x2a05;eip=0x0009f7; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 85686 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:09F7
cs=0x2a05;eip=0x0009fb; 	T(ADD(ax, 9));	// 85687 add     ax, 9 ;~ 2A05:09FB
cs=0x2a05;eip=0x0009fe; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_12+2))), dx));	// 85688 mov     word ptr [bp+var_12+2], dx ;~ 2A05:09FE
cs=0x2a05;eip=0x000a01; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_12))), ax));	// 85689 mov     word ptr [bp+var_12], ax ;~ 2A05:0A01
cs=0x2a05;eip=0x000a04; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_12))));	// 85690 call    [bp+var_12] ;~ 2A05:0A04
cs=0x2a05;eip=0x000a07; 	T(ADD(sp, 0x0E));	// 85691 add     sp, 0Eh ;~ 2A05:0A07
cs=0x2a05;eip=0x000a0a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 85692 mov     bx, [bp+arg_2] ;~ 2A05:0A0A
cs=0x2a05;eip=0x000a0d; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 85693 mov     si, [bp+arg_0] ;~ 2A05:0A0D
cs=0x2a05;eip=0x000a10; 	T(MOV(al, *(raddr(ds,si+4))));	// 85694 mov     al, [si+4] ;~ 2A05:0A10
cs=0x2a05;eip=0x000a13; 	X(MOV(*((&byte_44aca)+bx), al));	// 85695 mov     byte_44ACA[bx], al ;~ 2A05:0A13
cs=0x2a05;eip=0x000a17; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 85696 mov     ax, [bp+var_6] ;~ 2A05:0A17
cs=0x2a05;eip=0x000a1a; 	X(POP(ds));	// 85697 pop     ds ;~ 2A05:0A1A
cs=0x2a05;eip=0x000a1b; 	X(POP(si));	// 85698 pop     si ;~ 2A05:0A1B
cs=0x2a05;eip=0x000a1c; 	T(MOV(sp, bp));	// 85699 mov     sp, bp ;~ 2A05:0A1C
cs=0x2a05;eip=0x000a1e; 	X(POP(bp));	// 85700 pop     bp ;~ 2A05:0A1E
cs=0x2a05;eip=0x000a1f; 	R(RETF(0));	// 85701 retf ;~ 2A05:0A1F
sub_39050:
	// 85709 
#undef arg_0
#define arg_0 6
	// 85711 arg_0           = word ptr  6 ;~ 2A05:0A20
#undef arg_2
#define arg_2 8
	// 85712 arg_2           = word ptr  8 ;~ 2A05:0A20
ret_2a05_a20:
	// 10262 
cs=0x2a05;eip=0x000a20; 	X(PUSH(bp));	// 85714 push    bp ;~ 2A05:0A20
cs=0x2a05;eip=0x000a21; 	T(MOV(bp, sp));	// 85715 mov     bp, sp ;~ 2A05:0A21
cs=0x2a05;eip=0x000a23; 	X(PUSH(ds));	// 85716 push    ds ;~ 2A05:0A23
cs=0x2a05;eip=0x000a24; 	T(MOV(ax, seg_offset(dseg)));	// 85717 mov     ax, seg dseg ;~ 2A05:0A24
cs=0x2a05;eip=0x000a27; 	T(MOV(ds, ax));	// 85718 mov     ds, ax ;~ 2A05:0A27
cs=0x2a05;eip=0x000a29; 	X(MOV(byte_42a0e, 0x0FF));	// 85719 mov     byte_42A0E, 0FFh ;~ 2A05:0A29
cs=0x2a05;eip=0x000a2e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 85720 mov     ax, [bp+arg_0] ;~ 2A05:0A2E
cs=0x2a05;eip=0x000a31; 	X(MOV(word_42a0a, ax));	// 85721 mov     word_42A0A, ax ;~ 2A05:0A31
cs=0x2a05;eip=0x000a34; 	X(MOV(word_42a0c, 0));	// 85722 mov     word_42A0C, 0 ;~ 2A05:0A34
cs=0x2a05;eip=0x000a3a; 	X(MOV(word_42a10, 0x0FFE0));	// 85723 mov     word_42A10, 0FFE0h ;~ 2A05:0A3A
cs=0x2a05;eip=0x000a40; 	X(MOV(word_42a12, 0x0FFFF));	// 85724 mov     word_42A12, 0FFFFh ;~ 2A05:0A40
cs=0x2a05;eip=0x000a46; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 85725 push    [bp+arg_2] ;~ 2A05:0A46
cs=0x2a05;eip=0x000a49; 	T(MOV(ax, 0x729A));	// 85726 mov     ax, 729Ah ;~ 2A05:0A49
cs=0x2a05;eip=0x000a4c; 	X(PUSH(ax));	// 85727 push    ax ;~ 2A05:0A4C
cs=0x2a05;eip=0x000a4d; 	X(PUSH(cs));	// 85728 push    cs ;~ 2A05:0A4D
cs=0x2a05;eip=0x000a4e; 	R(CALL(sub_38de6,0));	// 85729 call    near ptr sub_38DE6 ;~ 2A05:0A4E
cs=0x2a05;eip=0x000a51; 	T(ADD(sp, 4));	// 85730 add     sp, 4 ;~ 2A05:0A51
cs=0x2a05;eip=0x000a54; 	X(POP(ds));	// 85731 pop     ds ;~ 2A05:0A54
cs=0x2a05;eip=0x000a55; 	X(POP(bp));	// 85732 pop     bp ;~ 2A05:0A55
cs=0x2a05;eip=0x000a56; 	R(RETF(0));	// 85733 retf ;~ 2A05:0A56
sub_39088:
	// 85743 
#undef var_4
#define var_4 -4
	// 85745 var_4           = dword ptr -4 ;~ 2A05:0A58
#undef arg_0
#define arg_0 6
	// 85746 arg_0           = word ptr  6 ;~ 2A05:0A58
#undef arg_2
#define arg_2 8
	// 85747 arg_2           = word ptr  8 ;~ 2A05:0A58
ret_2a05_a58:
	// 10263 
cs=0x2a05;eip=0x000a58; 	X(PUSH(bp));	// 85749 push    bp ;~ 2A05:0A58
cs=0x2a05;eip=0x000a59; 	T(MOV(bp, sp));	// 85750 mov     bp, sp ;~ 2A05:0A59
cs=0x2a05;eip=0x000a5b; 	T(SUB(sp, 4));	// 85751 sub     sp, 4 ;~ 2A05:0A5B
cs=0x2a05;eip=0x000a5e; 	X(PUSH(si));	// 85752 push    si ;~ 2A05:0A5E
cs=0x2a05;eip=0x000a5f; 	X(PUSH(ds));	// 85753 push    ds ;~ 2A05:0A5F
cs=0x2a05;eip=0x000a60; 	T(MOV(ax, seg_offset(dseg)));	// 85754 mov     ax, seg dseg ;~ 2A05:0A60
cs=0x2a05;eip=0x000a63; 	T(MOV(ds, ax));	// 85755 mov     ds, ax ;~ 2A05:0A63
cs=0x2a05;eip=0x000a65; 	T(MOV(ax, 0x2E));	// 85756 mov     ax, 2Eh ; '.' ;~ 2A05:0A65
cs=0x2a05;eip=0x000a68; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 85757 imul    [bp+arg_0] ;~ 2A05:0A68
cs=0x2a05;eip=0x000a6b; 	T(MOV(si, ax));	// 85758 mov     si, ax ;~ 2A05:0A6B
cs=0x2a05;eip=0x000a6d; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 85759 push    [bp+arg_2] ;~ 2A05:0A6D
cs=0x2a05;eip=0x000a70; 	T(ADD(ax, 0x0A2B6));	// 85760 add     ax, 0A2B6h ;~ 2A05:0A70
cs=0x2a05;eip=0x000a73; 	X(PUSH(ax));	// 85761 push    ax ;~ 2A05:0A73
cs=0x2a05;eip=0x000a74; 	T(MOV(al, *(raddr(ds,si-0x5D1E))));	// 85762 mov     al, [si-5D1Eh] ;~ 2A05:0A74
cs=0x2a05;eip=0x000a78; 	T(SUB(ah, ah));	// 85763 sub     ah, ah ;~ 2A05:0A78
cs=0x2a05;eip=0x000a7a; 	X(PUSH(ax));	// 85764 push    ax ;~ 2A05:0A7A
cs=0x2a05;eip=0x000a7b; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 85765 mov     ax, word ptr audiodriverbinary ;~ 2A05:0A7B
cs=0x2a05;eip=0x000a7e; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 85766 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:0A7E
cs=0x2a05;eip=0x000a82; 	T(ADD(ax, 0x24));	// 85767 add     ax, 24h ; '$' ;~ 2A05:0A82
cs=0x2a05;eip=0x000a85; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 85768 mov     word ptr [bp+var_4+2], dx ;~ 2A05:0A85
cs=0x2a05;eip=0x000a88; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 85769 mov     word ptr [bp+var_4], ax ;~ 2A05:0A88
cs=0x2a05;eip=0x000a8b; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_4))));	// 85770 call    [bp+var_4] ;~ 2A05:0A8B
cs=0x2a05;eip=0x000a8e; 	T(ADD(sp, 6));	// 85771 add     sp, 6 ;~ 2A05:0A8E
cs=0x2a05;eip=0x000a91; 	X(POP(ds));	// 85772 pop     ds ;~ 2A05:0A91
cs=0x2a05;eip=0x000a92; 	X(POP(si));	// 85773 pop     si ;~ 2A05:0A92
cs=0x2a05;eip=0x000a93; 	T(MOV(sp, bp));	// 85774 mov     sp, bp ;~ 2A05:0A93
cs=0x2a05;eip=0x000a95; 	X(POP(bp));	// 85775 pop     bp ;~ 2A05:0A95
cs=0x2a05;eip=0x000a96; 	R(RETF(0));	// 85776 retf ;~ 2A05:0A96
seg028_a98_proc:
	// 85782 
loc_390c8:
	// 10264 
cs=0x2a05;eip=0x000a98; 	X(PUSH(bp));	// 85783 push    bp ;~ 2A05:0A98
cs=0x2a05;eip=0x000a99; 	T(MOV(bp, sp));	// 85784 mov     bp, sp ;~ 2A05:0A99
cs=0x2a05;eip=0x000a9b; 	T(SUB(sp, 0x1A));	// 85785 sub     sp, 1Ah ;~ 2A05:0A9B
cs=0x2a05;eip=0x000a9e; 	X(PUSH(di));	// 85786 push    di ;~ 2A05:0A9E
cs=0x2a05;eip=0x000a9f; 	X(PUSH(si));	// 85787 push    si ;~ 2A05:0A9F
cs=0x2a05;eip=0x000aa0; 	X(PUSH(ds));	// 85788 push    ds ;~ 2A05:0AA0
cs=0x2a05;eip=0x000aa1; 	T(MOV(ax, seg_offset(dseg)));	// 85789 mov     ax, seg dseg ;~ 2A05:0AA1
cs=0x2a05;eip=0x000aa4; 	T(MOV(ds, ax));	// 85790 mov     ds, ax ;~ 2A05:0AA4
cs=0x2a05;eip=0x000aa6; 	X(MOV(*(dw*)(raddr(ss,bp-0x10)), 0x0FFFF));	// 85791 mov     word ptr [bp-10h], 0FFFFh ;~ 2A05:0AA6
cs=0x2a05;eip=0x000aab; 	X(MOV(*(dw*)(raddr(ss,bp-0x0E)), 0x0FFFF));	// 85792 mov     word ptr [bp-0Eh], 0FFFFh ;~ 2A05:0AAB
cs=0x2a05;eip=0x000ab0; 	T(SUB(ax, ax));	// 85793 sub     ax, ax ;~ 2A05:0AB0
cs=0x2a05;eip=0x000ab2; 	X(MOV(*(dw*)(raddr(ss,bp-8)), ax));	// 85794 mov     [bp-8], ax ;~ 2A05:0AB2
cs=0x2a05;eip=0x000ab5; 	X(MOV(*(dw*)(raddr(ss,bp-0x0A)), ax));	// 85795 mov     [bp-0Ah], ax ;~ 2A05:0AB5
cs=0x2a05;eip=0x000ab8; 	X(MOV(*(dw*)(raddr(ss,bp-2)), ax));	// 85796 mov     [bp-2], ax ;~ 2A05:0AB8
cs=0x2a05;eip=0x000abb; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 85797 mov     [bp-4], ax ;~ 2A05:0ABB
cs=0x2a05;eip=0x000abe; 	T(LES(bx, *(dw*)(raddr(ss,bp+6))));	// 85798 les     bx, [bp+6] ;~ 2A05:0ABE
cs=0x2a05;eip=0x000ac1; 	T(CMP(*(dw*)(raddr(es,bx+0x0C)), ax));	// 85799 cmp     es:[bx+0Ch], ax ;~ 2A05:0AC1
cs=0x2a05;eip=0x000ac5; 	R(JNZ(loc_390fe));	// 85800 jnz     short loc_390FE ;~ 2A05:0AC5
loc_390f7:
	// 10265 
cs=0x2a05;eip=0x000ac7; 	T(MOV(ax, 0x0FFFF));	// 85804 mov     ax, 0FFFFh ;~ 2A05:0AC7
cs=0x2a05;eip=0x000aca; 	R(JMP(loc_39452));	// 85805 jmp     loc_39452 ;~ 2A05:0ACA
loc_390fe:
	// 10266 
cs=0x2a05;eip=0x000ace; 	T(CMP(byte_40634, 0));	// 85810 cmp     byte_40634, 0 ;~ 2A05:0ACE
cs=0x2a05;eip=0x000ad3; 	R(JNZ(loc_39108));	// 85811 jnz     short loc_39108 ;~ 2A05:0AD3
cs=0x2a05;eip=0x000ad5; 	R(JMP(loc_391f0));	// 85812 jmp     loc_391F0 ;~ 2A05:0AD5
loc_39108:
	// 10267 
cs=0x2a05;eip=0x000ad8; 	T(SUB(si, si));	// 85816 sub     si, si ;~ 2A05:0AD8
cs=0x2a05;eip=0x000ada; 	T(MOV(di, 0x0A2B6));	// 85817 mov     di, 0A2B6h ;~ 2A05:0ADA
loc_3910d:
	// 10268 
cs=0x2a05;eip=0x000add; 	T(MOV(cx, di));	// 85820 mov     cx, di ;~ 2A05:0ADD
cs=0x2a05;eip=0x000adf; 	T(MOV(bx, cx));	// 85821 mov     bx, cx ;~ 2A05:0ADF
cs=0x2a05;eip=0x000ae1; 	T(CMP(*(raddr(ds,bx+1)), 0));	// 85822 cmp     byte ptr [bx+1], 0 ;~ 2A05:0AE1
cs=0x2a05;eip=0x000ae5; 	R(JNZ(loc_39122));	// 85823 jnz     short loc_39122 ;~ 2A05:0AE5
loc_39117:
	// 10269 
cs=0x2a05;eip=0x000ae7; 	T(MOV(ax, si));	// 85826 mov     ax, si ;~ 2A05:0AE7
cs=0x2a05;eip=0x000ae9; 	X(MOV(*(dw*)(raddr(ss,bp-6)), si));	// 85827 mov     [bp-6], si ;~ 2A05:0AE9
cs=0x2a05;eip=0x000aec; 	X(MOV(*(dw*)(raddr(ss,bp-0x0C)), cx));	// 85828 mov     [bp-0Ch], cx ;~ 2A05:0AEC
cs=0x2a05;eip=0x000aef; 	R(JMP(loc_39452));	// 85829 jmp     loc_39452 ;~ 2A05:0AEF
loc_39122:
	// 10270 
cs=0x2a05;eip=0x000af2; 	T(MOV(bx, cx));	// 85833 mov     bx, cx ;~ 2A05:0AF2
cs=0x2a05;eip=0x000af4; 	T(CMP(*(raddr(ds,bx+1)), 1));	// 85834 cmp     byte ptr [bx+1], 1 ;~ 2A05:0AF4
cs=0x2a05;eip=0x000af8; 	R(JNZ(loc_3914d));	// 85835 jnz     short loc_3914D ;~ 2A05:0AF8
cs=0x2a05;eip=0x000afa; 	T(MOV(ax, *(dw*)(raddr(ss,bp-0x0A))));	// 85836 mov     ax, [bp-0Ah] ;~ 2A05:0AFA
cs=0x2a05;eip=0x000afd; 	T(MOV(dx, *(dw*)(raddr(ss,bp-8))));	// 85837 mov     dx, [bp-8] ;~ 2A05:0AFD
cs=0x2a05;eip=0x000b00; 	T(CMP(*(dw*)(raddr(ds,bx+0x0A)), dx));	// 85838 cmp     [bx+0Ah], dx ;~ 2A05:0B00
cs=0x2a05;eip=0x000b03; 	R(JC(loc_3914d));	// 85839 jb      short loc_3914D ;~ 2A05:0B03
cs=0x2a05;eip=0x000b05; 	R(JA(loc_3913c));	// 85840 ja      short loc_3913C ;~ 2A05:0B05
cs=0x2a05;eip=0x000b07; 	T(CMP(*(dw*)(raddr(ds,bx+8)), ax));	// 85841 cmp     [bx+8], ax ;~ 2A05:0B07
cs=0x2a05;eip=0x000b0a; 	R(JBE(loc_3914d));	// 85842 jbe     short loc_3914D ;~ 2A05:0B0A
loc_3913c:
	// 10271 
cs=0x2a05;eip=0x000b0c; 	T(MOV(bx, cx));	// 85845 mov     bx, cx ;~ 2A05:0B0C
cs=0x2a05;eip=0x000b0e; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 85846 mov     ax, [bx+8] ;~ 2A05:0B0E
cs=0x2a05;eip=0x000b11; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 85847 mov     dx, [bx+0Ah] ;~ 2A05:0B11
cs=0x2a05;eip=0x000b14; 	X(MOV(*(dw*)(raddr(ss,bp-0x0A)), ax));	// 85848 mov     [bp-0Ah], ax ;~ 2A05:0B14
cs=0x2a05;eip=0x000b17; 	X(MOV(*(dw*)(raddr(ss,bp-8)), dx));	// 85849 mov     [bp-8], dx ;~ 2A05:0B17
cs=0x2a05;eip=0x000b1a; 	X(MOV(*(dw*)(raddr(ss,bp-0x10)), si));	// 85850 mov     [bp-10h], si ;~ 2A05:0B1A
loc_3914d:
	// 10272 
cs=0x2a05;eip=0x000b1d; 	T(MOV(bx, cx));	// 85854 mov     bx, cx ;~ 2A05:0B1D
cs=0x2a05;eip=0x000b1f; 	T(CMP(*(raddr(ds,bx+1)), 2));	// 85855 cmp     byte ptr [bx+1], 2 ;~ 2A05:0B1F
cs=0x2a05;eip=0x000b23; 	R(JNZ(loc_39178));	// 85856 jnz     short loc_39178 ;~ 2A05:0B23
cs=0x2a05;eip=0x000b25; 	T(MOV(ax, *(dw*)(raddr(ss,bp-4))));	// 85857 mov     ax, [bp-4] ;~ 2A05:0B25
cs=0x2a05;eip=0x000b28; 	T(MOV(dx, *(dw*)(raddr(ss,bp-2))));	// 85858 mov     dx, [bp-2] ;~ 2A05:0B28
cs=0x2a05;eip=0x000b2b; 	T(CMP(*(dw*)(raddr(ds,bx+0x0A)), dx));	// 85859 cmp     [bx+0Ah], dx ;~ 2A05:0B2B
cs=0x2a05;eip=0x000b2e; 	R(JC(loc_39178));	// 85860 jb      short loc_39178 ;~ 2A05:0B2E
cs=0x2a05;eip=0x000b30; 	R(JA(loc_39167));	// 85861 ja      short loc_39167 ;~ 2A05:0B30
cs=0x2a05;eip=0x000b32; 	T(CMP(*(dw*)(raddr(ds,bx+8)), ax));	// 85862 cmp     [bx+8], ax ;~ 2A05:0B32
cs=0x2a05;eip=0x000b35; 	R(JBE(loc_39178));	// 85863 jbe     short loc_39178 ;~ 2A05:0B35
loc_39167:
	// 10273 
cs=0x2a05;eip=0x000b37; 	T(MOV(bx, cx));	// 85866 mov     bx, cx ;~ 2A05:0B37
cs=0x2a05;eip=0x000b39; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 85867 mov     ax, [bx+8] ;~ 2A05:0B39
cs=0x2a05;eip=0x000b3c; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 85868 mov     dx, [bx+0Ah] ;~ 2A05:0B3C
cs=0x2a05;eip=0x000b3f; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 85869 mov     [bp-4], ax ;~ 2A05:0B3F
cs=0x2a05;eip=0x000b42; 	X(MOV(*(dw*)(raddr(ss,bp-2)), dx));	// 85870 mov     [bp-2], dx ;~ 2A05:0B42
cs=0x2a05;eip=0x000b45; 	X(MOV(*(dw*)(raddr(ss,bp-0x0E)), si));	// 85871 mov     [bp-0Eh], si ;~ 2A05:0B45
loc_39178:
	// 10274 
cs=0x2a05;eip=0x000b48; 	T(ADD(di, 0x2E));	// 85875 add     di, 2Eh ; '.' ;~ 2A05:0B48
cs=0x2a05;eip=0x000b4b; 	T(INC(si));	// 85876 inc     si ;~ 2A05:0B4B
cs=0x2a05;eip=0x000b4c; 	T(CMP(si, 0x10));	// 85877 cmp     si, 10h ;~ 2A05:0B4C
cs=0x2a05;eip=0x000b4f; 	R(JL(loc_3910d));	// 85878 jl      short loc_3910D ;~ 2A05:0B4F
cs=0x2a05;eip=0x000b51; 	X(MOV(*(dw*)(raddr(ss,bp-6)), si));	// 85879 mov     [bp-6], si ;~ 2A05:0B51
cs=0x2a05;eip=0x000b54; 	X(MOV(*(dw*)(raddr(ss,bp-0x0C)), cx));	// 85880 mov     [bp-0Ch], cx ;~ 2A05:0B54
cs=0x2a05;eip=0x000b57; 	T(CMP(*(dw*)(raddr(ss,bp-0x0E)), 0x0FFFF));	// 85881 cmp     word ptr [bp-0Eh], 0FFFFh ;~ 2A05:0B57
cs=0x2a05;eip=0x000b5b; 	R(JZ(loc_39194));	// 85882 jz      short loc_39194 ;~ 2A05:0B5B
loc_3918d:
	// 10275 
cs=0x2a05;eip=0x000b5d; 	T(MOV(ax, *(dw*)(raddr(ss,bp-0x0E))));	// 85885 mov     ax, [bp-0Eh] ;~ 2A05:0B5D
cs=0x2a05;eip=0x000b60; 	R(JMP(loc_39452));	// 85886 jmp     loc_39452 ;~ 2A05:0B60
loc_39194:
	// 10276 
cs=0x2a05;eip=0x000b64; 	T(CMP(*(dw*)(raddr(ss,bp-0x10)), 0x0FFFF));	// 85891 cmp     word ptr [bp-10h], 0FFFFh ;~ 2A05:0B64
cs=0x2a05;eip=0x000b68; 	R(JNZ(loc_3919d));	// 85892 jnz     short loc_3919D ;~ 2A05:0B68
cs=0x2a05;eip=0x000b6a; 	R(JMP(loc_390f7));	// 85893 jmp     loc_390F7 ;~ 2A05:0B6A
loc_3919d:
	// 10277 
cs=0x2a05;eip=0x000b6d; 	T(MOV(ax, 0x2E));	// 85897 mov     ax, 2Eh ; '.' ;~ 2A05:0B6D
cs=0x2a05;eip=0x000b70; 	X(IMUL1_2(*(dw*)(raddr(ss,bp-0x10))));	// 85898 imul    word ptr [bp-10h] ;~ 2A05:0B70
cs=0x2a05;eip=0x000b73; 	T(MOV(si, ax));	// 85899 mov     si, ax ;~ 2A05:0B73
cs=0x2a05;eip=0x000b75; 	T(ADD(ax, 0x0A2B6));	// 85900 add     ax, 0A2B6h ;~ 2A05:0B75
cs=0x2a05;eip=0x000b78; 	X(PUSH(ax));	// 85901 push    ax ;~ 2A05:0B78
cs=0x2a05;eip=0x000b79; 	T(MOV(al, *(raddr(ds,si-0x5D1E))));	// 85902 mov     al, [si-5D1Eh] ;~ 2A05:0B79
cs=0x2a05;eip=0x000b7d; 	T(SUB(ah, ah));	// 85903 sub     ah, ah ;~ 2A05:0B7D
cs=0x2a05;eip=0x000b7f; 	X(PUSH(ax));	// 85904 push    ax ;~ 2A05:0B7F
cs=0x2a05;eip=0x000b80; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 85905 mov     ax, word ptr audiodriverbinary ;~ 2A05:0B80
cs=0x2a05;eip=0x000b83; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 85906 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:0B83
cs=0x2a05;eip=0x000b87; 	T(ADD(ax, 0x0C));	// 85907 add     ax, 0Ch ;~ 2A05:0B87
cs=0x2a05;eip=0x000b8a; 	X(MOV(*(dw*)(raddr(ss,bp-0x14)), dx));	// 85908 mov     [bp-14h], dx ;~ 2A05:0B8A
cs=0x2a05;eip=0x000b8d; 	X(MOV(*(dw*)(raddr(ss,bp-0x16)), ax));	// 85909 mov     [bp-16h], ax ;~ 2A05:0B8D
cs=0x2a05;eip=0x000b90; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp-0x16))));	// 85910 call    dword ptr [bp-16h] ;~ 2A05:0B90
cs=0x2a05;eip=0x000b93; 	T(ADD(sp, 4));	// 85911 add     sp, 4 ;~ 2A05:0B93
cs=0x2a05;eip=0x000b96; 	T(MOV(ax, si));	// 85912 mov     ax, si ;~ 2A05:0B96
cs=0x2a05;eip=0x000b98; 	T(ADD(ax, 0x0A2B6));	// 85913 add     ax, 0A2B6h ;~ 2A05:0B98
cs=0x2a05;eip=0x000b9b; 	X(PUSH(ax));	// 85914 push    ax ;~ 2A05:0B9B
cs=0x2a05;eip=0x000b9c; 	T(MOV(al, *(raddr(ds,si-0x5D1E))));	// 85915 mov     al, [si-5D1Eh] ;~ 2A05:0B9C
cs=0x2a05;eip=0x000ba0; 	T(SUB(ah, ah));	// 85916 sub     ah, ah ;~ 2A05:0BA0
cs=0x2a05;eip=0x000ba2; 	X(PUSH(ax));	// 85917 push    ax ;~ 2A05:0BA2
loc_391d3:
	// 10278 
cs=0x2a05;eip=0x000ba3; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 85920 mov     ax, word ptr audiodriverbinary ;~ 2A05:0BA3
cs=0x2a05;eip=0x000ba6; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 85921 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:0BA6
cs=0x2a05;eip=0x000baa; 	T(ADD(ax, 0x0F));	// 85922 add     ax, 0Fh ;~ 2A05:0BAA
cs=0x2a05;eip=0x000bad; 	X(MOV(*(dw*)(raddr(ss,bp-0x14)), dx));	// 85923 mov     [bp-14h], dx ;~ 2A05:0BAD
cs=0x2a05;eip=0x000bb0; 	X(MOV(*(dw*)(raddr(ss,bp-0x16)), ax));	// 85924 mov     [bp-16h], ax ;~ 2A05:0BB0
cs=0x2a05;eip=0x000bb3; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp-0x16))));	// 85925 call    dword ptr [bp-16h] ;~ 2A05:0BB3
cs=0x2a05;eip=0x000bb6; 	T(ADD(sp, 4));	// 85926 add     sp, 4 ;~ 2A05:0BB6
cs=0x2a05;eip=0x000bb9; 	T(MOV(ax, *(dw*)(raddr(ss,bp-0x10))));	// 85927 mov     ax, [bp-10h] ;~ 2A05:0BB9
cs=0x2a05;eip=0x000bbc; 	R(JMP(loc_39452));	// 85928 jmp     loc_39452 ;~ 2A05:0BBC
loc_391f0:
	// 10279 
cs=0x2a05;eip=0x000bc0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0A))));	// 85933 mov     bx, [bp+0Ah] ;~ 2A05:0BC0
cs=0x2a05;eip=0x000bc3; 	T(MOV(si, bx));	// 85934 mov     si, bx ;~ 2A05:0BC3
cs=0x2a05;eip=0x000bc5; 	T(MOV(al, *(raddr(ds,si+0x16))));	// 85935 mov     al, [si+16h] ;~ 2A05:0BC5
cs=0x2a05;eip=0x000bc8; 	T(CMP(*(raddr(ds,bx+0x15)), al));	// 85936 cmp     [bx+15h], al ;~ 2A05:0BC8
cs=0x2a05;eip=0x000bcb; 	R(JNC(loc_39200));	// 85937 jnb     short loc_39200 ;~ 2A05:0BCB
cs=0x2a05;eip=0x000bcd; 	R(JMP(loc_39344));	// 85938 jmp     loc_39344 ;~ 2A05:0BCD
loc_39200:
	// 10280 
cs=0x2a05;eip=0x000bd0; 	X(MOV(*(dw*)(raddr(ss,bp-6)), 0));	// 85942 mov     word ptr [bp-6], 0 ;~ 2A05:0BD0
cs=0x2a05;eip=0x000bd5; 	T(MOV(al, byte_459d2));	// 85943 mov     al, byte_459D2 ;~ 2A05:0BD5
cs=0x2a05;eip=0x000bd8; 	T(SUB(ah, ah));	// 85944 sub     ah, ah ;~ 2A05:0BD8
cs=0x2a05;eip=0x000bda; 	T(OR(ax, ax));	// 85945 or      ax, ax ;~ 2A05:0BDA
cs=0x2a05;eip=0x000bdc; 	R(JNZ(loc_39211));	// 85946 jnz     short loc_39211 ;~ 2A05:0BDC
cs=0x2a05;eip=0x000bde; 	R(JMP(loc_392c5));	// 85947 jmp     loc_392C5 ;~ 2A05:0BDE
loc_39211:
	// 10281 
cs=0x2a05;eip=0x000be1; 	X(MOV(*(dw*)(raddr(ss,bp-0x12)), ax));	// 85951 mov     [bp-12h], ax ;~ 2A05:0BE1
cs=0x2a05;eip=0x000be4; 	X(MOV(*(dw*)(raddr(ss,bp-0x18)), 0x4E9E));	// 85952 mov     word ptr [bp-18h], 4E9Eh ;~ 2A05:0BE4
cs=0x2a05;eip=0x000be9; 	X(MOV(*(dw*)(raddr(ss,bp-0x1A)), 0x0A2B6));	// 85953 mov     word ptr [bp-1Ah], 0A2B6h ;~ 2A05:0BE9
cs=0x2a05;eip=0x000bee; 	T(MOV(di, *(dw*)(raddr(ss,bp-6))));	// 85954 mov     di, [bp-6] ;~ 2A05:0BEE
cs=0x2a05;eip=0x000bf1; 	T(MOV(si, *(dw*)(raddr(ss,bp-0x0C))));	// 85955 mov     si, [bp-0Ch] ;~ 2A05:0BF1
cs=0x2a05;eip=0x000bf4; 	T(MOV(cx, bx));	// 85956 mov     cx, bx ;~ 2A05:0BF4
loc_39226:
	// 10282 
cs=0x2a05;eip=0x000bf6; 	T(MOV(bx, *(dw*)(raddr(ss,bp-0x18))));	// 85959 mov     bx, [bp-18h] ;~ 2A05:0BF6
cs=0x2a05;eip=0x000bf9; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 85960 mov     ax, [bx] ;~ 2A05:0BF9
cs=0x2a05;eip=0x000bfb; 	T(LES(bx, *(dw*)(raddr(ss,bp+6))));	// 85961 les     bx, [bp+6] ;~ 2A05:0BFB
cs=0x2a05;eip=0x000bfe; 	T(TEST(*(dw*)(raddr(es,bx+0x0C)), ax));	// 85962 test    es:[bx+0Ch], ax ;~ 2A05:0BFE
cs=0x2a05;eip=0x000c02; 	R(JZ(loc_392ac));	// 85963 jz      short loc_392AC ;~ 2A05:0C02
cs=0x2a05;eip=0x000c04; 	T(MOV(si, *(dw*)(raddr(ss,bp-0x1A))));	// 85964 mov     si, [bp-1Ah] ;~ 2A05:0C04
cs=0x2a05;eip=0x000c07; 	T(MOV(bx, cx));	// 85965 mov     bx, cx ;~ 2A05:0C07
cs=0x2a05;eip=0x000c09; 	T(MOV(al, *(raddr(ds,si))));	// 85966 mov     al, [si] ;~ 2A05:0C09
cs=0x2a05;eip=0x000c0b; 	T(CMP(*(raddr(ds,bx+0x23)), al));	// 85967 cmp     [bx+23h], al ;~ 2A05:0C0B
cs=0x2a05;eip=0x000c0e; 	R(JNZ(loc_392ac));	// 85968 jnz     short loc_392AC ;~ 2A05:0C0E
cs=0x2a05;eip=0x000c10; 	T(CMP(*(raddr(ds,si+1)), 0));	// 85969 cmp     byte ptr [si+1], 0 ;~ 2A05:0C10
cs=0x2a05;eip=0x000c14; 	R(JNZ(loc_39254));	// 85970 jnz     short loc_39254 ;~ 2A05:0C14
cs=0x2a05;eip=0x000c16; 	X(INC(*(raddr(ds,bx+0x15))));	// 85971 inc     byte ptr [bx+15h] ;~ 2A05:0C16
cs=0x2a05;eip=0x000c19; 	T(MOV(ax, di));	// 85972 mov     ax, di ;~ 2A05:0C19
cs=0x2a05;eip=0x000c1b; 	X(MOV(*(dw*)(raddr(ss,bp-6)), di));	// 85973 mov     [bp-6], di ;~ 2A05:0C1B
cs=0x2a05;eip=0x000c1e; 	X(MOV(*(dw*)(raddr(ss,bp-0x0C)), si));	// 85974 mov     [bp-0Ch], si ;~ 2A05:0C1E
cs=0x2a05;eip=0x000c21; 	R(JMP(loc_39452));	// 85975 jmp     loc_39452 ;~ 2A05:0C21
loc_39254:
	// 10283 
cs=0x2a05;eip=0x000c24; 	T(MOV(bx, cx));	// 85979 mov     bx, cx ;~ 2A05:0C24
cs=0x2a05;eip=0x000c26; 	T(MOV(al, *(raddr(ds,si+2))));	// 85980 mov     al, [si+2] ;~ 2A05:0C26
cs=0x2a05;eip=0x000c29; 	T(CMP(*(raddr(ds,bx+0x24)), al));	// 85981 cmp     [bx+24h], al ;~ 2A05:0C29
cs=0x2a05;eip=0x000c2c; 	R(JC(loc_392ac));	// 85982 jb      short loc_392AC ;~ 2A05:0C2C
cs=0x2a05;eip=0x000c2e; 	T(CMP(*(raddr(ds,si+1)), 1));	// 85983 cmp     byte ptr [si+1], 1 ;~ 2A05:0C2E
cs=0x2a05;eip=0x000c32; 	R(JNZ(loc_39285));	// 85984 jnz     short loc_39285 ;~ 2A05:0C32
cs=0x2a05;eip=0x000c34; 	T(MOV(ax, *(dw*)(raddr(ss,bp-0x0A))));	// 85985 mov     ax, [bp-0Ah] ;~ 2A05:0C34
cs=0x2a05;eip=0x000c37; 	T(MOV(dx, *(dw*)(raddr(ss,bp-8))));	// 85986 mov     dx, [bp-8] ;~ 2A05:0C37
cs=0x2a05;eip=0x000c3a; 	T(CMP(*(dw*)(raddr(ds,si+0x0A)), dx));	// 85987 cmp     [si+0Ah], dx ;~ 2A05:0C3A
cs=0x2a05;eip=0x000c3d; 	R(JC(loc_39285));	// 85988 jb      short loc_39285 ;~ 2A05:0C3D
cs=0x2a05;eip=0x000c3f; 	R(JA(loc_39276));	// 85989 ja      short loc_39276 ;~ 2A05:0C3F
cs=0x2a05;eip=0x000c41; 	T(CMP(*(dw*)(raddr(ds,si+8)), ax));	// 85990 cmp     [si+8], ax ;~ 2A05:0C41
cs=0x2a05;eip=0x000c44; 	R(JBE(loc_39285));	// 85991 jbe     short loc_39285 ;~ 2A05:0C44
loc_39276:
	// 10284 
cs=0x2a05;eip=0x000c46; 	T(MOV(ax, *(dw*)(raddr(ds,si+8))));	// 85994 mov     ax, [si+8] ;~ 2A05:0C46
cs=0x2a05;eip=0x000c49; 	T(MOV(dx, *(dw*)(raddr(ds,si+0x0A))));	// 85995 mov     dx, [si+0Ah] ;~ 2A05:0C49
cs=0x2a05;eip=0x000c4c; 	X(MOV(*(dw*)(raddr(ss,bp-0x0A)), ax));	// 85996 mov     [bp-0Ah], ax ;~ 2A05:0C4C
cs=0x2a05;eip=0x000c4f; 	X(MOV(*(dw*)(raddr(ss,bp-8)), dx));	// 85997 mov     [bp-8], dx ;~ 2A05:0C4F
cs=0x2a05;eip=0x000c52; 	X(MOV(*(dw*)(raddr(ss,bp-0x10)), di));	// 85998 mov     [bp-10h], di ;~ 2A05:0C52
loc_39285:
	// 10285 
cs=0x2a05;eip=0x000c55; 	T(CMP(*(raddr(ds,si+1)), 2));	// 86002 cmp     byte ptr [si+1], 2 ;~ 2A05:0C55
cs=0x2a05;eip=0x000c59; 	R(JNZ(loc_392ac));	// 86003 jnz     short loc_392AC ;~ 2A05:0C59
cs=0x2a05;eip=0x000c5b; 	T(MOV(ax, *(dw*)(raddr(ss,bp-4))));	// 86004 mov     ax, [bp-4] ;~ 2A05:0C5B
cs=0x2a05;eip=0x000c5e; 	T(MOV(dx, *(dw*)(raddr(ss,bp-2))));	// 86005 mov     dx, [bp-2] ;~ 2A05:0C5E
cs=0x2a05;eip=0x000c61; 	T(CMP(*(dw*)(raddr(ds,si+0x0A)), dx));	// 86006 cmp     [si+0Ah], dx ;~ 2A05:0C61
cs=0x2a05;eip=0x000c64; 	R(JC(loc_392ac));	// 86007 jb      short loc_392AC ;~ 2A05:0C64
cs=0x2a05;eip=0x000c66; 	R(JA(loc_3929d));	// 86008 ja      short loc_3929D ;~ 2A05:0C66
cs=0x2a05;eip=0x000c68; 	T(CMP(*(dw*)(raddr(ds,si+8)), ax));	// 86009 cmp     [si+8], ax ;~ 2A05:0C68
cs=0x2a05;eip=0x000c6b; 	R(JBE(loc_392ac));	// 86010 jbe     short loc_392AC ;~ 2A05:0C6B
loc_3929d:
	// 10286 
cs=0x2a05;eip=0x000c6d; 	T(MOV(ax, *(dw*)(raddr(ds,si+8))));	// 86013 mov     ax, [si+8] ;~ 2A05:0C6D
cs=0x2a05;eip=0x000c70; 	T(MOV(dx, *(dw*)(raddr(ds,si+0x0A))));	// 86014 mov     dx, [si+0Ah] ;~ 2A05:0C70
cs=0x2a05;eip=0x000c73; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 86015 mov     [bp-4], ax ;~ 2A05:0C73
cs=0x2a05;eip=0x000c76; 	X(MOV(*(dw*)(raddr(ss,bp-2)), dx));	// 86016 mov     [bp-2], dx ;~ 2A05:0C76
cs=0x2a05;eip=0x000c79; 	X(MOV(*(dw*)(raddr(ss,bp-0x0E)), di));	// 86017 mov     [bp-0Eh], di ;~ 2A05:0C79
loc_392ac:
	// 10287 
cs=0x2a05;eip=0x000c7c; 	X(ADD(*(dw*)(raddr(ss,bp-0x18)), 2));	// 86021 add     word ptr [bp-18h], 2 ;~ 2A05:0C7C
cs=0x2a05;eip=0x000c80; 	X(ADD(*(dw*)(raddr(ss,bp-0x1A)), 0x2E));	// 86022 add     word ptr [bp-1Ah], 2Eh ; '.' ;~ 2A05:0C80
cs=0x2a05;eip=0x000c84; 	T(INC(di));	// 86023 inc     di ;~ 2A05:0C84
cs=0x2a05;eip=0x000c85; 	T(MOV(ax, di));	// 86024 mov     ax, di ;~ 2A05:0C85
cs=0x2a05;eip=0x000c87; 	T(CMP(ax, *(dw*)(raddr(ss,bp-0x12))));	// 86025 cmp     ax, [bp-12h] ;~ 2A05:0C87
cs=0x2a05;eip=0x000c8a; 	R(JNC(loc_392bf));	// 86026 jnb     short loc_392BF ;~ 2A05:0C8A
cs=0x2a05;eip=0x000c8c; 	R(JMP(loc_39226));	// 86027 jmp     loc_39226 ;~ 2A05:0C8C
loc_392bf:
	// 10288 
cs=0x2a05;eip=0x000c8f; 	X(MOV(*(dw*)(raddr(ss,bp-6)), di));	// 86031 mov     [bp-6], di ;~ 2A05:0C8F
cs=0x2a05;eip=0x000c92; 	X(MOV(*(dw*)(raddr(ss,bp-0x0C)), si));	// 86032 mov     [bp-0Ch], si ;~ 2A05:0C92
loc_392c5:
	// 10289 
cs=0x2a05;eip=0x000c95; 	T(CMP(*(dw*)(raddr(ss,bp-0x0E)), 0x0FFFF));	// 86035 cmp     word ptr [bp-0Eh], 0FFFFh ;~ 2A05:0C95
cs=0x2a05;eip=0x000c99; 	R(JZ(loc_3930e));	// 86036 jz      short near ptr byte_3930E ;~ 2A05:0C99
loc_392cb:
	// 10290 
cs=0x2a05;eip=0x000c9b; 	T(MOV(ax, 0x2E));	// 86040 mov     ax, 2Eh ; '.' ;~ 2A05:0C9B
cs=0x2a05;eip=0x000c9e; 	X(IMUL1_2(*(dw*)(raddr(ss,bp-0x0E))));	// 86041 imul    word ptr [bp-0Eh] ;~ 2A05:0C9E
cs=0x2a05;eip=0x000ca1; 	T(MOV(si, ax));	// 86042 mov     si, ax ;~ 2A05:0CA1
cs=0x2a05;eip=0x000ca3; 	T(ADD(si, 0x0A2B6));	// 86043 add     si, 0A2B6h ;~ 2A05:0CA3
cs=0x2a05;eip=0x000ca7; 	X(PUSH(si));	// 86044 push    si ;~ 2A05:0CA7
cs=0x2a05;eip=0x000ca8; 	X(PUSH(*(dw*)(raddr(ss,bp-0x0E))));	// 86045 push    word ptr [bp-0Eh] ;~ 2A05:0CA8
cs=0x2a05;eip=0x000cab; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 86046 mov     ax, word ptr audiodriverbinary ;~ 2A05:0CAB
cs=0x2a05;eip=0x000cae; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 86047 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:0CAE
cs=0x2a05;eip=0x000cb2; 	T(ADD(ax, 0x0C));	// 86048 add     ax, 0Ch ;~ 2A05:0CB2
cs=0x2a05;eip=0x000cb5; 	X(MOV(*(dw*)(raddr(ss,bp-0x14)), dx));	// 86049 mov     [bp-14h], dx ;~ 2A05:0CB5
cs=0x2a05;eip=0x000cb8; 	X(MOV(*(dw*)(raddr(ss,bp-0x16)), ax));	// 86050 mov     [bp-16h], ax ;~ 2A05:0CB8
cs=0x2a05;eip=0x000cbb; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp-0x16))));	// 86051 call    dword ptr [bp-16h] ;~ 2A05:0CBB
cs=0x2a05;eip=0x000cbe; 	T(ADD(sp, 4));	// 86052 add     sp, 4 ;~ 2A05:0CBE
cs=0x2a05;eip=0x000cc1; 	X(PUSH(si));	// 86053 push    si ;~ 2A05:0CC1
cs=0x2a05;eip=0x000cc2; 	X(PUSH(*(dw*)(raddr(ss,bp-0x0E))));	// 86054 push    word ptr [bp-0Eh] ;~ 2A05:0CC2
cs=0x2a05;eip=0x000cc5; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 86055 mov     ax, word ptr audiodriverbinary ;~ 2A05:0CC5
cs=0x2a05;eip=0x000cc8; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 86056 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:0CC8
cs=0x2a05;eip=0x000ccc; 	T(ADD(ax, 0x0F));	// 86057 add     ax, 0Fh ;~ 2A05:0CCC
cs=0x2a05;eip=0x000ccf; 	X(MOV(*(dw*)(raddr(ss,bp-0x14)), dx));	// 86058 mov     [bp-14h], dx ;~ 2A05:0CCF
cs=0x2a05;eip=0x000cd2; 	X(MOV(*(dw*)(raddr(ss,bp-0x16)), ax));	// 86059 mov     [bp-16h], ax ;~ 2A05:0CD2
cs=0x2a05;eip=0x000cd5; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp-0x16))));	// 86060 call    dword ptr [bp-16h] ;~ 2A05:0CD5
cs=0x2a05;eip=0x000cd8; 	T(ADD(sp, 4));	// 86061 add     sp, 4 ;~ 2A05:0CD8
cs=0x2a05;eip=0x000cdb; 	R(JMP(loc_3918d));	// 86062 jmp     loc_3918D ;~ 2A05:0CDB

loc_3930e:
cs = 0x2a05; eip = 0x000cde;                 T(CMP(*(dw*)raddr(ss, bp - 0x10), 0xFFFF));
cs = 0x2a05; eip = 0x000ce2;                 R(JNZ(loc_39317));
cs = 0x2a05; eip = 0x000ce4;                 R(JMP(loc_390f7));

ret_2a05_ce1:
	// 10291 
cs=0x2a05;eip=0x000ce1; 	X(PUSH(*(dw*)(raddr(ds,di+3))));	// 86067 push    word ptr [di+3] ;~ 2A05:0CE1
cs=0x2a05;eip=0x000ce4; 	R(JMP(loc_390f7));	// 86068 jmp     loc_390F7 ;~ 2A05:0CE4
loc_39317:
	// 10292 
cs=0x2a05;eip=0x000ce7; 	T(MOV(ax, 0x2E));	// 86073 mov     ax, 2Eh ; '.' ;~ 2A05:0CE7
cs=0x2a05;eip=0x000cea; 	X(IMUL1_2(*(dw*)(raddr(ss,bp-0x10))));	// 86074 imul    word ptr [bp-10h] ;~ 2A05:0CEA
cs=0x2a05;eip=0x000ced; 	T(MOV(si, ax));	// 86075 mov     si, ax ;~ 2A05:0CED
cs=0x2a05;eip=0x000cef; 	T(ADD(si, 0x0A2B6));	// 86076 add     si, 0A2B6h ;~ 2A05:0CEF
cs=0x2a05;eip=0x000cf3; 	X(PUSH(si));	// 86077 push    si ;~ 2A05:0CF3
cs=0x2a05;eip=0x000cf4; 	X(PUSH(*(dw*)(raddr(ss,bp-0x10))));	// 86078 push    word ptr [bp-10h] ;~ 2A05:0CF4
cs=0x2a05;eip=0x000cf7; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 86079 mov     ax, word ptr audiodriverbinary ;~ 2A05:0CF7
cs=0x2a05;eip=0x000cfa; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 86080 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:0CFA
cs=0x2a05;eip=0x000cfe; 	T(ADD(ax, 0x0C));	// 86081 add     ax, 0Ch ;~ 2A05:0CFE
cs=0x2a05;eip=0x000d01; 	X(MOV(*(dw*)(raddr(ss,bp-0x14)), dx));	// 86082 mov     [bp-14h], dx ;~ 2A05:0D01
cs=0x2a05;eip=0x000d04; 	X(MOV(*(dw*)(raddr(ss,bp-0x16)), ax));	// 86083 mov     [bp-16h], ax ;~ 2A05:0D04
cs=0x2a05;eip=0x000d07; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp-0x16))));	// 86084 call    dword ptr [bp-16h] ;~ 2A05:0D07
cs=0x2a05;eip=0x000d0a; 	T(ADD(sp, 4));	// 86085 add     sp, 4 ;~ 2A05:0D0A
cs=0x2a05;eip=0x000d0d; 	X(PUSH(si));	// 86086 push    si ;~ 2A05:0D0D
cs=0x2a05;eip=0x000d0e; 	X(PUSH(*(dw*)(raddr(ss,bp-0x10))));	// 86087 push    word ptr [bp-10h] ;~ 2A05:0D0E
cs=0x2a05;eip=0x000d11; 	R(JMP(loc_391d3));	// 86088 jmp     loc_391D3 ;~ 2A05:0D11
loc_39344:
	// 10293 
cs=0x2a05;eip=0x000d14; 	X(MOV(*(dw*)(raddr(ss,bp-6)), 0));	// 86092 mov     word ptr [bp-6], 0 ;~ 2A05:0D14
cs=0x2a05;eip=0x000d19; 	T(MOV(al, byte_459d2));	// 86093 mov     al, byte_459D2 ;~ 2A05:0D19
cs=0x2a05;eip=0x000d1c; 	T(SUB(ah, ah));	// 86094 sub     ah, ah ;~ 2A05:0D1C
cs=0x2a05;eip=0x000d1e; 	T(OR(ax, ax));	// 86095 or      ax, ax ;~ 2A05:0D1E
cs=0x2a05;eip=0x000d20; 	R(JNZ(loc_39355));	// 86096 jnz     short loc_39355 ;~ 2A05:0D20
cs=0x2a05;eip=0x000d22; 	R(JMP(loc_39401));	// 86097 jmp     loc_39401 ;~ 2A05:0D22
loc_39355:
	// 10294 
cs=0x2a05;eip=0x000d25; 	X(MOV(*(dw*)(raddr(ss,bp-0x1A)), ax));	// 86101 mov     [bp-1Ah], ax ;~ 2A05:0D25
cs=0x2a05;eip=0x000d28; 	T(MOV(di, 0x0A2B6));	// 86102 mov     di, 0A2B6h ;~ 2A05:0D28
cs=0x2a05;eip=0x000d2b; 	X(MOV(*(dw*)(raddr(ss,bp-0x12)), 0x4E9E));	// 86103 mov     word ptr [bp-12h], 4E9Eh ;~ 2A05:0D2B
cs=0x2a05;eip=0x000d30; 	T(MOV(si, *(dw*)(raddr(ss,bp-6))));	// 86104 mov     si, [bp-6] ;~ 2A05:0D30
loc_39363:
	// 10295 
cs=0x2a05;eip=0x000d33; 	T(MOV(cx, di));	// 86107 mov     cx, di ;~ 2A05:0D33
cs=0x2a05;eip=0x000d35; 	T(MOV(bx, *(dw*)(raddr(ss,bp-0x12))));	// 86108 mov     bx, [bp-12h] ;~ 2A05:0D35
cs=0x2a05;eip=0x000d38; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 86109 mov     ax, [bx] ;~ 2A05:0D38
cs=0x2a05;eip=0x000d3a; 	T(LES(bx, *(dw*)(raddr(ss,bp+6))));	// 86110 les     bx, [bp+6] ;~ 2A05:0D3A
cs=0x2a05;eip=0x000d3d; 	T(TEST(*(dw*)(raddr(es,bx+0x0C)), ax));	// 86111 test    es:[bx+0Ch], ax ;~ 2A05:0D3D
cs=0x2a05;eip=0x000d41; 	R(JZ(loc_393e9));	// 86112 jz      short loc_393E9 ;~ 2A05:0D41
cs=0x2a05;eip=0x000d43; 	T(MOV(bx, cx));	// 86113 mov     bx, cx ;~ 2A05:0D43
cs=0x2a05;eip=0x000d45; 	T(CMP(*(raddr(ds,bx+1)), 0));	// 86114 cmp     byte ptr [bx+1], 0 ;~ 2A05:0D45
cs=0x2a05;eip=0x000d49; 	R(JNZ(loc_39386));	// 86115 jnz     short loc_39386 ;~ 2A05:0D49
cs=0x2a05;eip=0x000d4b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0A))));	// 86116 mov     bx, [bp+0Ah] ;~ 2A05:0D4B
cs=0x2a05;eip=0x000d4e; 	X(INC(*(raddr(ds,bx+0x15))));	// 86117 inc     byte ptr [bx+15h] ;~ 2A05:0D4E
cs=0x2a05;eip=0x000d51; 	R(JMP(loc_39117));	// 86118 jmp     loc_39117 ;~ 2A05:0D51
loc_39386:
	// 10296 
cs=0x2a05;eip=0x000d56; 	T(MOV(bx, cx));	// 86124 mov     bx, cx ;~ 2A05:0D56
cs=0x2a05;eip=0x000d58; 	T(MOV(al, *(raddr(ds,bx+2))));	// 86125 mov     al, [bx+2] ;~ 2A05:0D58
cs=0x2a05;eip=0x000d5b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0A))));	// 86126 mov     bx, [bp+0Ah] ;~ 2A05:0D5B
cs=0x2a05;eip=0x000d5e; 	T(CMP(*(raddr(ds,bx+0x24)), al));	// 86127 cmp     [bx+24h], al ;~ 2A05:0D5E
cs=0x2a05;eip=0x000d61; 	R(JC(loc_393e9));	// 86128 jb      short loc_393E9 ;~ 2A05:0D61
cs=0x2a05;eip=0x000d63; 	T(MOV(bx, cx));	// 86129 mov     bx, cx ;~ 2A05:0D63
cs=0x2a05;eip=0x000d65; 	T(CMP(*(raddr(ds,bx+1)), 1));	// 86130 cmp     byte ptr [bx+1], 1 ;~ 2A05:0D65
cs=0x2a05;eip=0x000d69; 	R(JNZ(loc_393be));	// 86131 jnz     short loc_393BE ;~ 2A05:0D69
cs=0x2a05;eip=0x000d6b; 	T(MOV(ax, *(dw*)(raddr(ss,bp-0x0A))));	// 86132 mov     ax, [bp-0Ah] ;~ 2A05:0D6B
cs=0x2a05;eip=0x000d6e; 	T(MOV(dx, *(dw*)(raddr(ss,bp-8))));	// 86133 mov     dx, [bp-8] ;~ 2A05:0D6E
cs=0x2a05;eip=0x000d71; 	T(CMP(*(dw*)(raddr(ds,bx+0x0A)), dx));	// 86134 cmp     [bx+0Ah], dx ;~ 2A05:0D71
cs=0x2a05;eip=0x000d74; 	R(JC(loc_393be));	// 86135 jb      short loc_393BE ;~ 2A05:0D74
cs=0x2a05;eip=0x000d76; 	R(JA(loc_393ad));	// 86136 ja      short loc_393AD ;~ 2A05:0D76
cs=0x2a05;eip=0x000d78; 	T(CMP(*(dw*)(raddr(ds,bx+8)), ax));	// 86137 cmp     [bx+8], ax ;~ 2A05:0D78
cs=0x2a05;eip=0x000d7b; 	R(JBE(loc_393be));	// 86138 jbe     short loc_393BE ;~ 2A05:0D7B
loc_393ad:
	// 10297 
cs=0x2a05;eip=0x000d7d; 	T(MOV(bx, cx));	// 86141 mov     bx, cx ;~ 2A05:0D7D
cs=0x2a05;eip=0x000d7f; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 86142 mov     ax, [bx+8] ;~ 2A05:0D7F
cs=0x2a05;eip=0x000d82; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 86143 mov     dx, [bx+0Ah] ;~ 2A05:0D82
cs=0x2a05;eip=0x000d85; 	X(MOV(*(dw*)(raddr(ss,bp-0x0A)), ax));	// 86144 mov     [bp-0Ah], ax ;~ 2A05:0D85
cs=0x2a05;eip=0x000d88; 	X(MOV(*(dw*)(raddr(ss,bp-8)), dx));	// 86145 mov     [bp-8], dx ;~ 2A05:0D88
cs=0x2a05;eip=0x000d8b; 	X(MOV(*(dw*)(raddr(ss,bp-0x10)), si));	// 86146 mov     [bp-10h], si ;~ 2A05:0D8B
loc_393be:
	// 10298 
cs=0x2a05;eip=0x000d8e; 	T(MOV(bx, cx));	// 86150 mov     bx, cx ;~ 2A05:0D8E
cs=0x2a05;eip=0x000d90; 	T(CMP(*(raddr(ds,bx+1)), 2));	// 86151 cmp     byte ptr [bx+1], 2 ;~ 2A05:0D90
cs=0x2a05;eip=0x000d94; 	R(JNZ(loc_393e9));	// 86152 jnz     short loc_393E9 ;~ 2A05:0D94
cs=0x2a05;eip=0x000d96; 	T(MOV(ax, *(dw*)(raddr(ss,bp-4))));	// 86153 mov     ax, [bp-4] ;~ 2A05:0D96
cs=0x2a05;eip=0x000d99; 	T(MOV(dx, *(dw*)(raddr(ss,bp-2))));	// 86154 mov     dx, [bp-2] ;~ 2A05:0D99
cs=0x2a05;eip=0x000d9c; 	T(CMP(*(dw*)(raddr(ds,bx+0x0A)), dx));	// 86155 cmp     [bx+0Ah], dx ;~ 2A05:0D9C
cs=0x2a05;eip=0x000d9f; 	R(JC(loc_393e9));	// 86156 jb      short loc_393E9 ;~ 2A05:0D9F
cs=0x2a05;eip=0x000da1; 	R(JA(loc_393d8));	// 86157 ja      short loc_393D8 ;~ 2A05:0DA1
cs=0x2a05;eip=0x000da3; 	T(CMP(*(dw*)(raddr(ds,bx+8)), ax));	// 86158 cmp     [bx+8], ax ;~ 2A05:0DA3
cs=0x2a05;eip=0x000da6; 	R(JBE(loc_393e9));	// 86159 jbe     short loc_393E9 ;~ 2A05:0DA6
loc_393d8:
	// 10299 
cs=0x2a05;eip=0x000da8; 	T(MOV(bx, cx));	// 86162 mov     bx, cx ;~ 2A05:0DA8
cs=0x2a05;eip=0x000daa; 	T(MOV(ax, *(dw*)(raddr(ds,bx+8))));	// 86163 mov     ax, [bx+8] ;~ 2A05:0DAA
cs=0x2a05;eip=0x000dad; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x0A))));	// 86164 mov     dx, [bx+0Ah] ;~ 2A05:0DAD
cs=0x2a05;eip=0x000db0; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 86165 mov     [bp-4], ax ;~ 2A05:0DB0
cs=0x2a05;eip=0x000db3; 	X(MOV(*(dw*)(raddr(ss,bp-2)), dx));	// 86166 mov     [bp-2], dx ;~ 2A05:0DB3
cs=0x2a05;eip=0x000db6; 	X(MOV(*(dw*)(raddr(ss,bp-0x0E)), si));	// 86167 mov     [bp-0Eh], si ;~ 2A05:0DB6
loc_393e9:
	// 10300 
cs=0x2a05;eip=0x000db9; 	T(ADD(di, 0x2E));	// 86171 add     di, 2Eh ; '.' ;~ 2A05:0DB9
cs=0x2a05;eip=0x000dbc; 	X(ADD(*(dw*)(raddr(ss,bp-0x12)), 2));	// 86172 add     word ptr [bp-12h], 2 ;~ 2A05:0DBC
cs=0x2a05;eip=0x000dc0; 	T(INC(si));	// 86173 inc     si ;~ 2A05:0DC0
cs=0x2a05;eip=0x000dc1; 	T(MOV(ax, si));	// 86174 mov     ax, si ;~ 2A05:0DC1
cs=0x2a05;eip=0x000dc3; 	T(CMP(ax, *(dw*)(raddr(ss,bp-0x1A))));	// 86175 cmp     ax, [bp-1Ah] ;~ 2A05:0DC3
cs=0x2a05;eip=0x000dc6; 	R(JNC(loc_393fb));	// 86176 jnb     short loc_393FB ;~ 2A05:0DC6
cs=0x2a05;eip=0x000dc8; 	R(JMP(loc_39363));	// 86177 jmp     loc_39363 ;~ 2A05:0DC8
loc_393fb:
	// 10301 
cs=0x2a05;eip=0x000dcb; 	X(MOV(*(dw*)(raddr(ss,bp-6)), si));	// 86181 mov     [bp-6], si ;~ 2A05:0DCB
cs=0x2a05;eip=0x000dce; 	X(MOV(*(dw*)(raddr(ss,bp-0x0C)), cx));	// 86182 mov     [bp-0Ch], cx ;~ 2A05:0DCE
loc_39401:
	// 10302 
cs=0x2a05;eip=0x000dd1; 	T(CMP(*(dw*)(raddr(ss,bp-0x0E)), 0x0FFFF));	// 86185 cmp     word ptr [bp-0Eh], 0FFFFh ;~ 2A05:0DD1
cs=0x2a05;eip=0x000dd5; 	R(JZ(loc_39428));	// 86186 jz      short loc_39428 ;~ 2A05:0DD5
cs=0x2a05;eip=0x000dd7; 	T(MOV(ax, 0x2E));	// 86187 mov     ax, 2Eh ; '.' ;~ 2A05:0DD7
cs=0x2a05;eip=0x000dda; 	X(IMUL1_2(*(dw*)(raddr(ss,bp-0x0E))));	// 86188 imul    word ptr [bp-0Eh] ;~ 2A05:0DDA
cs=0x2a05;eip=0x000ddd; 	T(MOV(bx, ax));	// 86189 mov     bx, ax ;~ 2A05:0DDD
cs=0x2a05;eip=0x000ddf; 	T(MOV(si, *(dw*)(raddr(ds,bx-0x5D20))));	// 86190 mov     si, [bx-5D20h] ;~ 2A05:0DDF
cs=0x2a05;eip=0x000de3; 	T(CMP(*(dw*)(raddr(ss,bp+0x0A)), si));	// 86191 cmp     [bp+0Ah], si ;~ 2A05:0DE3
cs=0x2a05;eip=0x000de6; 	R(JNZ(loc_3941b));	// 86192 jnz     short loc_3941B ;~ 2A05:0DE6
cs=0x2a05;eip=0x000de8; 	R(JMP(loc_392cb));	// 86193 jmp     loc_392CB ;~ 2A05:0DE8
loc_3941b:
	// 10303 
cs=0x2a05;eip=0x000deb; 	X(DEC(*(raddr(ds,si+0x15))));	// 86197 dec     byte ptr [si+15h] ;~ 2A05:0DEB
cs=0x2a05;eip=0x000dee; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0A))));	// 86198 mov     bx, [bp+0Ah] ;~ 2A05:0DEE
cs=0x2a05;eip=0x000df1; 	X(INC(*(raddr(ds,bx+0x15))));	// 86199 inc     byte ptr [bx+15h] ;~ 2A05:0DF1
cs=0x2a05;eip=0x000df4; 	R(JMP(loc_392cb));	// 86200 jmp     loc_392CB ;~ 2A05:0DF4
loc_39428:
	// 10304 
cs=0x2a05;eip=0x000df8; 	T(CMP(*(dw*)(raddr(ss,bp-0x10)), 0x0FFFF));	// 86205 cmp     word ptr [bp-10h], 0FFFFh ;~ 2A05:0DF8
cs=0x2a05;eip=0x000dfc; 	R(JNZ(loc_39431));	// 86206 jnz     short loc_39431 ;~ 2A05:0DFC
cs=0x2a05;eip=0x000dfe; 	R(JMP(loc_390f7));	// 86207 jmp     loc_390F7 ;~ 2A05:0DFE
loc_39431:
	// 10305 
cs=0x2a05;eip=0x000e01; 	T(MOV(ax, 0x2E));	// 86211 mov     ax, 2Eh ; '.' ;~ 2A05:0E01
cs=0x2a05;eip=0x000e04; 	X(IMUL1_2(*(dw*)(raddr(ss,bp-0x10))));	// 86212 imul    word ptr [bp-10h] ;~ 2A05:0E04
cs=0x2a05;eip=0x000e07; 	T(MOV(bx, ax));	// 86213 mov     bx, ax ;~ 2A05:0E07
cs=0x2a05;eip=0x000e09; 	T(MOV(si, *(dw*)(raddr(ds,bx-0x5D20))));	// 86214 mov     si, [bx-5D20h] ;~ 2A05:0E09
cs=0x2a05;eip=0x000e0d; 	T(CMP(*(dw*)(raddr(ss,bp+0x0A)), si));	// 86215 cmp     [bp+0Ah], si ;~ 2A05:0E0D
cs=0x2a05;eip=0x000e10; 	R(JNZ(loc_39445));	// 86216 jnz     short loc_39445 ;~ 2A05:0E10
cs=0x2a05;eip=0x000e12; 	R(JMP(loc_39317));	// 86217 jmp     loc_39317 ;~ 2A05:0E12
loc_39445:
	// 10306 
cs=0x2a05;eip=0x000e15; 	X(DEC(*(raddr(ds,si+0x15))));	// 86221 dec     byte ptr [si+15h] ;~ 2A05:0E15
cs=0x2a05;eip=0x000e18; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0A))));	// 86222 mov     bx, [bp+0Ah] ;~ 2A05:0E18
cs=0x2a05;eip=0x000e1b; 	X(INC(*(raddr(ds,bx+0x15))));	// 86223 inc     byte ptr [bx+15h] ;~ 2A05:0E1B
cs=0x2a05;eip=0x000e1e; 	R(JMP(loc_39317));	// 86224 jmp     loc_39317 ;~ 2A05:0E1E
loc_39452:
	// 10307 
cs=0x2a05;eip=0x000e22; 	X(POP(ds));	// 86230 pop     ds ;~ 2A05:0E22
cs=0x2a05;eip=0x000e23; 	X(POP(si));	// 86231 pop     si ;~ 2A05:0E23
cs=0x2a05;eip=0x000e24; 	X(POP(di));	// 86232 pop     di ;~ 2A05:0E24
cs=0x2a05;eip=0x000e25; 	T(MOV(sp, bp));	// 86233 mov     sp, bp ;~ 2A05:0E25
cs=0x2a05;eip=0x000e27; 	X(POP(bp));	// 86234 pop     bp ;~ 2A05:0E27
cs=0x2a05;eip=0x000e28; 	R(RETF(0));	// 86235 retf ;~ 2A05:0E28
sub_3945a:
	// 86243 
#undef var_c
#define var_c -0x0C
	// 86246 var_C           = word ptr -0Ch ;~ 2A05:0E2A
#undef var_a
#define var_a -0x0A
	// 86247 var_A           = word ptr -0Ah ;~ 2A05:0E2A
#undef var_8
#define var_8 -8
	// 86248 var_8           = byte ptr -8 ;~ 2A05:0E2A
#undef var_6
#define var_6 -6
	// 86249 var_6           = word ptr -6 ;~ 2A05:0E2A
#undef var_4
#define var_4 -4
	// 86250 var_4           = word ptr -4 ;~ 2A05:0E2A
#undef var_2
#define var_2 -2
	// 86251 var_2           = word ptr -2 ;~ 2A05:0E2A
#undef arg_0
#define arg_0 6
	// 86252 arg_0           = word ptr  6 ;~ 2A05:0E2A
#undef arg_2
#define arg_2 8
	// 86253 arg_2           = dword ptr  8 ;~ 2A05:0E2A
ret_2a05_e2a:
	// 10308 
cs=0x2a05;eip=0x000e2a; 	X(PUSH(bp));	// 86255 push    bp ;~ 2A05:0E2A
cs=0x2a05;eip=0x000e2b; 	T(MOV(bp, sp));	// 86256 mov     bp, sp ;~ 2A05:0E2B
cs=0x2a05;eip=0x000e2d; 	T(SUB(sp, 0x0C));	// 86257 sub     sp, 0Ch ;~ 2A05:0E2D
cs=0x2a05;eip=0x000e30; 	X(PUSH(di));	// 86258 push    di ;~ 2A05:0E30
cs=0x2a05;eip=0x000e31; 	X(PUSH(si));	// 86259 push    si ;~ 2A05:0E31
cs=0x2a05;eip=0x000e32; 	X(PUSH(ds));	// 86260 push    ds ;~ 2A05:0E32
cs=0x2a05;eip=0x000e33; 	T(MOV(ax, seg_offset(dseg)));	// 86261 mov     ax, seg dseg ;~ 2A05:0E33
cs=0x2a05;eip=0x000e36; 	T(MOV(ds, ax));	// 86262 mov     ds, ax ;~ 2A05:0E36
cs=0x2a05;eip=0x000e38; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86263 mov     ax, word ptr [bp+arg_2] ;~ 2A05:0E38
cs=0x2a05;eip=0x000e3b; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 86264 mov     dx, word ptr [bp+arg_2+2] ;~ 2A05:0E3B
cs=0x2a05;eip=0x000e3e; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 86265 mov     [bp+var_6], ax ;~ 2A05:0E3E
cs=0x2a05;eip=0x000e41; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 86266 mov     [bp+var_4], dx ;~ 2A05:0E41
cs=0x2a05;eip=0x000e44; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 86267 mov     bx, [bp+arg_0] ;~ 2A05:0E44
cs=0x2a05;eip=0x000e47; 	T(SUB(ax, ax));	// 86268 sub     ax, ax ;~ 2A05:0E47
cs=0x2a05;eip=0x000e49; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 86269 mov     [bx+2], ax ;~ 2A05:0E49
cs=0x2a05;eip=0x000e4c; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 86270 mov     [bx], ax ;~ 2A05:0E4C
cs=0x2a05;eip=0x000e4e; 	T(MOV(si, bx));	// 86271 mov     si, bx ;~ 2A05:0E4E
loc_39480:
	// 10309 
cs=0x2a05;eip=0x000e50; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 86274 les     bx, [bp+arg_2] ;~ 2A05:0E50
cs=0x2a05;eip=0x000e53; 	T(MOV(al, *(raddr(es,bx))));	// 86275 mov     al, es:[bx] ;~ 2A05:0E53
cs=0x2a05;eip=0x000e56; 	T(SUB(ah, ah));	// 86276 sub     ah, ah ;~ 2A05:0E56
cs=0x2a05;eip=0x000e58; 	T(AND(ax, 0x7F));	// 86277 and     ax, 7Fh ;~ 2A05:0E58
cs=0x2a05;eip=0x000e5b; 	T(SUB(dx, dx));	// 86278 sub     dx, dx ;~ 2A05:0E5B
cs=0x2a05;eip=0x000e5d; 	T(MOV(cx, *(dw*)(raddr(ds,si))));	// 86279 mov     cx, [si] ;~ 2A05:0E5D
cs=0x2a05;eip=0x000e5f; 	T(MOV(bx, *(dw*)(raddr(ds,si+2))));	// 86280 mov     bx, [si+2] ;~ 2A05:0E5F
cs=0x2a05;eip=0x000e62; 	T(MOV(di, cx));	// 86281 mov     di, cx ;~ 2A05:0E62
cs=0x2a05;eip=0x000e64; 	T(MOV(cl, 7));	// 86282 mov     cl, 7 ;~ 2A05:0E64
loc_39496:
	// 10310 
cs=0x2a05;eip=0x000e66; 	T(SHL(di, 1));	// 86285 shl     di, 1 ;~ 2A05:0E66
cs=0x2a05;eip=0x000e68; 	T(RCL(bx, 1));	// 86286 rcl     bx, 1 ;~ 2A05:0E68
cs=0x2a05;eip=0x000e6a; 	T(DEC(cl));	// 86287 dec     cl ;~ 2A05:0E6A
cs=0x2a05;eip=0x000e6c; 	R(JNZ(loc_39496));	// 86288 jnz     short loc_39496 ;~ 2A05:0E6C
cs=0x2a05;eip=0x000e6e; 	T(ADD(ax, di));	// 86289 add     ax, di ;~ 2A05:0E6E
cs=0x2a05;eip=0x000e70; 	T(ADC(dx, bx));	// 86290 adc     dx, bx ;~ 2A05:0E70
cs=0x2a05;eip=0x000e72; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 86291 mov     [si], ax ;~ 2A05:0E72
cs=0x2a05;eip=0x000e74; 	X(MOV(*(dw*)(raddr(ds,si+2)), dx));	// 86292 mov     [si+2], dx ;~ 2A05:0E74
cs=0x2a05;eip=0x000e77; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 86293 les     bx, [bp+arg_2] ;~ 2A05:0E77
cs=0x2a05;eip=0x000e7a; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86294 inc     word ptr [bp+arg_2] ;~ 2A05:0E7A
cs=0x2a05;eip=0x000e7d; 	T(TEST(*(raddr(es,bx)), 0x80));	// 86295 test    byte ptr es:[bx], 80h ;~ 2A05:0E7D
cs=0x2a05;eip=0x000e81; 	R(JNZ(loc_39480));	// 86296 jnz     short loc_39480 ;~ 2A05:0E81
cs=0x2a05;eip=0x000e83; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 86297 mov     bx, [bp+arg_0] ;~ 2A05:0E83
cs=0x2a05;eip=0x000e86; 	T(MOV(si, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86298 mov     si, word ptr [bp+arg_2] ;~ 2A05:0E86
cs=0x2a05;eip=0x000e89; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86299 inc     word ptr [bp+arg_2] ;~ 2A05:0E89
cs=0x2a05;eip=0x000e8c; 	T(MOV(al, *(raddr(es,si))));	// 86300 mov     al, es:[si] ;~ 2A05:0E8C
cs=0x2a05;eip=0x000e8f; 	X(MOV(*(raddr(ds,bx+4)), al));	// 86301 mov     [bx+4], al ;~ 2A05:0E8F
cs=0x2a05;eip=0x000e92; 	X(MOV(*(raddr(ss,bp+var_8)), al));	// 86302 mov     [bp+var_8], al ;~ 2A05:0E92
cs=0x2a05;eip=0x000e95; 	T(SUB(ah, ah));	// 86303 sub     ah, ah ;~ 2A05:0E95
cs=0x2a05;eip=0x000e97; 	T(SUB(ax, 0x0D9));	// 86304 sub     ax, 0D9h ; 'Ù'  ; switch 18 cases ;~ 2A05:0E97
cs=0x2a05;eip=0x000e9a; 	T(CMP(ax, 0x11));	// 86305 cmp     ax, 11h ;~ 2A05:0E9A
cs=0x2a05;eip=0x000e9d; 	R(JBE(loc_394d2));	// 86306 jbe     short loc_394D2 ;~ 2A05:0E9D
cs=0x2a05;eip=0x000e9f; 	R(JMP(def_394d5));	// 86307 jmp     def_394D5       ; jumptable 000394D5 default case, cases 217-219,227 ;~ 2A05:0E9F
loc_394d2:
	// 10311 
cs=0x2a05;eip=0x000ea2; 	T(ADD(ax, ax));	// 86311 add     ax, ax ;~ 2A05:0EA2
cs=0x2a05;eip=0x000ea4; 	T(XCHG(ax, bx));	// 86312 xchg    ax, bx ;~ 2A05:0EA4
	cs=seg_offset(seg028);
cs=0x2a05;eip=0x000ea5; __disp=*(dw*)(((db*)&jpt_394d5)+bx);
	R(JMP(__dispatch_call));	// 86313 jmp     cs:jpt_394D5[bx] ; switch jump ;~ 2A05:0EA5
loc_394da:
	// 10312 
cs=0x2a05;eip=0x000eaa; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 86318 mov     [bp+var_2], 0   ; jumptable 000394D5 case 232 ;~ 2A05:0EAA
cs=0x2a05;eip=0x000eaf; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86319 mov     bx, word ptr [bp+arg_2] ;~ 2A05:0EAF
cs=0x2a05;eip=0x000eb2; 	T(MOV(al, *(raddr(es,bx))));	// 86320 mov     al, es:[bx] ;~ 2A05:0EB2
cs=0x2a05;eip=0x000eb5; 	T(SUB(ah, ah));	// 86321 sub     ah, ah ;~ 2A05:0EB5
cs=0x2a05;eip=0x000eb7; 	T(OR(ax, ax));	// 86322 or      ax, ax ;~ 2A05:0EB7
cs=0x2a05;eip=0x000eb9; 	R(JZ(loc_39518));	// 86323 jz      short loc_39518 ; jumptable 000394D5 case 231 ;~ 2A05:0EB9
cs=0x2a05;eip=0x000ebb; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 86324 mov     [bp+var_A], ax ;~ 2A05:0EBB
cs=0x2a05;eip=0x000ebe; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 86325 mov     [bp+var_C], ax ;~ 2A05:0EBE
cs=0x2a05;eip=0x000ec1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 86326 mov     bx, [bp+var_2] ;~ 2A05:0EC1
cs=0x2a05;eip=0x000ec4; 	T(MOV(ax, bx));	// 86327 mov     ax, bx ;~ 2A05:0EC4
cs=0x2a05;eip=0x000ec6; 	T(ADD(ax, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86328 add     ax, word ptr [bp+arg_2] ;~ 2A05:0EC6
cs=0x2a05;eip=0x000ec9; 	T(MOV(dx, es));	// 86329 mov     dx, es ;~ 2A05:0EC9
cs=0x2a05;eip=0x000ecb; 	T(INC(ax));	// 86330 inc     ax ;~ 2A05:0ECB
cs=0x2a05;eip=0x000ecc; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_c))));	// 86331 mov     cx, [bp+var_C] ;~ 2A05:0ECC
cs=0x2a05;eip=0x000ecf; 	T(SHR(cx, 1));	// 86332 shr     cx, 1 ;~ 2A05:0ECF
cs=0x2a05;eip=0x000ed1; 	T(di = bx+0x717E);	// 86333 lea     di, [bx+717Eh] ;~ 2A05:0ED1
cs=0x2a05;eip=0x000ed5; 	T(MOV(si, ax));	// 86334 mov     si, ax ;~ 2A05:0ED5
cs=0x2a05;eip=0x000ed7; 	X(PUSH(ds));	// 86335 push    ds ;~ 2A05:0ED7
cs=0x2a05;eip=0x000ed8; 	X(POP(es));	// 86336 pop     es ;~ 2A05:0ED8
cs=0x2a05;eip=0x000ed9; 	X(PUSH(ds));	// 86338 push    ds ;~ 2A05:0ED9
cs=0x2a05;eip=0x000eda; 	T(MOV(ds, dx));	// 86339 mov     ds, dx ;~ 2A05:0EDA
	// 86340 repne movsw ;~ 2A05:0EDC
cs=0x2a05;eip=0x000edc; 	X(	REPNE MOVSW);	// 86340 repne movsw ;~ 2A05:0EDC
cs=0x2a05;eip=0x000ede; 	R(JNC(loc_39511));	// 86341 jnb     short loc_39511 ;~ 2A05:0EDE
cs=0x2a05;eip=0x000ee0; 	X(MOVSB);	// 86342 movsb ;~ 2A05:0EE0
loc_39511:
	// 10313 
cs=0x2a05;eip=0x000ee1; 	X(POP(ds));	// 86345 pop     ds ;~ 2A05:0EE1
cs=0x2a05;eip=0x000ee2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 86346 mov     ax, [bp+var_C] ;~ 2A05:0EE2
cs=0x2a05;eip=0x000ee5; 	X(ADD(*(dw*)(raddr(ss,bp+var_2)), ax));	// 86347 add     [bp+var_2], ax ;~ 2A05:0EE5
loc_39518:
	// 10314 
cs=0x2a05;eip=0x000ee8; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 86352 les     bx, [bp+arg_2]  ; jumptable 000394D5 case 231 ;~ 2A05:0EE8
cs=0x2a05;eip=0x000eeb; 	T(MOV(al, *(raddr(es,bx))));	// 86354 mov     al, es:[bx] ;~ 2A05:0EEB
cs=0x2a05;eip=0x000eee; 	T(SUB(ah, ah));	// 86355 sub     ah, ah ;~ 2A05:0EEE
cs=0x2a05;eip=0x000ef0; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+arg_2))), ax));	// 86356 add     word ptr [bp+arg_2], ax ;~ 2A05:0EF0
cs=0x2a05;eip=0x000ef3; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86357 inc     word ptr [bp+arg_2] ;~ 2A05:0EF3
cs=0x2a05;eip=0x000ef6; 	R(JMP(def_394d5));	// 86358 jmp     def_394D5       ; jumptable 000394D5 default case, cases 217-219,227 ;~ 2A05:0EF6
loc_3952a:
	// 10315 
cs=0x2a05;eip=0x000efa; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 86364 mov     bx, [bp+arg_0]  ; jumptable 000394D5 case 230 ;~ 2A05:0EFA
cs=0x2a05;eip=0x000efd; 	T(MOV(si, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86365 mov     si, word ptr [bp+arg_2] ;~ 2A05:0EFD
cs=0x2a05;eip=0x000f00; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86366 inc     word ptr [bp+arg_2] ;~ 2A05:0F00
cs=0x2a05;eip=0x000f03; 	T(MOV(al, *(raddr(es,si))));	// 86367 mov     al, es:[si] ;~ 2A05:0F03
cs=0x2a05;eip=0x000f06; 	X(MOV(*(raddr(ds,bx+5)), al));	// 86368 mov     [bx+5], al ;~ 2A05:0F06
cs=0x2a05;eip=0x000f09; 	X(PUSH(es));	// 86369 push    es ;~ 2A05:0F09
cs=0x2a05;eip=0x000f0a; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86370 push    word ptr [bp+arg_2] ;~ 2A05:0F0A
cs=0x2a05;eip=0x000f0d; 	R(CALLF(audioresource_get_dword,0));	// 86371 call    audioresource_get_dword ;~ 2A05:0F0D
cs=0x2a05;eip=0x000f12; 	T(ADD(sp, 4));	// 86372 add     sp, 4 ;~ 2A05:0F12
cs=0x2a05;eip=0x000f15; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 86373 mov     bx, [bp+arg_0] ;~ 2A05:0F15
cs=0x2a05;eip=0x000f18; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 86374 mov     [bx+6], ax ;~ 2A05:0F18
cs=0x2a05;eip=0x000f1b; 	X(MOV(*(dw*)(raddr(ds,bx+8)), dx));	// 86375 mov     [bx+8], dx ;~ 2A05:0F1B
cs=0x2a05;eip=0x000f1e; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+arg_2))), 4));	// 86376 add     word ptr [bp+arg_2], 4 ;~ 2A05:0F1E
cs=0x2a05;eip=0x000f22; 	R(JMP(def_394d5));	// 86377 jmp     short def_394D5 ; jumptable 000394D5 default case, cases 217-219,227 ;~ 2A05:0F22
loc_39554:
	// 10316 
cs=0x2a05;eip=0x000f24; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 86382 mov     bx, [bp+arg_0]  ; jumptable 000394D5 cases 220-222,224-226,228,233,234 ;~ 2A05:0F24
cs=0x2a05;eip=0x000f27; 	T(LES(si, *(dd*)(raddr(ss,bp+arg_2))));	// 86383 les     si, [bp+arg_2] ;~ 2A05:0F27
cs=0x2a05;eip=0x000f2a; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86384 inc     word ptr [bp+arg_2] ;~ 2A05:0F2A
cs=0x2a05;eip=0x000f2d; 	T(MOV(al, *(raddr(es,si))));	// 86385 mov     al, es:[si] ;~ 2A05:0F2D
cs=0x2a05;eip=0x000f30; 	X(MOV(*(raddr(ds,bx+5)), al));	// 86386 mov     [bx+5], al ;~ 2A05:0F30
cs=0x2a05;eip=0x000f33; 	R(JMP(def_394d5));	// 86387 jmp     short def_394D5 ; jumptable 000394D5 default case, cases 217-219,227 ;~ 2A05:0F33
loc_39566:
	// 10317 
cs=0x2a05;eip=0x000f36; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 86393 mov     bx, [bp+arg_0]  ; jumptable 000394D5 case 223 ;~ 2A05:0F36
cs=0x2a05;eip=0x000f39; 	T(MOV(si, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86394 mov     si, word ptr [bp+arg_2] ;~ 2A05:0F39
cs=0x2a05;eip=0x000f3c; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86395 inc     word ptr [bp+arg_2] ;~ 2A05:0F3C
cs=0x2a05;eip=0x000f3f; 	T(MOV(al, *(raddr(es,si))));	// 86396 mov     al, es:[si] ;~ 2A05:0F3F
cs=0x2a05;eip=0x000f42; 	X(MOV(*(raddr(ds,bx+5)), al));	// 86397 mov     [bx+5], al ;~ 2A05:0F42
cs=0x2a05;eip=0x000f45; 	T(MOV(si, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86398 mov     si, word ptr [bp+arg_2] ;~ 2A05:0F45
cs=0x2a05;eip=0x000f48; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86399 inc     word ptr [bp+arg_2] ;~ 2A05:0F48
cs=0x2a05;eip=0x000f4b; 	T(MOV(al, *(raddr(es,si))));	// 86400 mov     al, es:[si] ;~ 2A05:0F4B
cs=0x2a05;eip=0x000f4e; 	T(SUB(ah, ah));	// 86401 sub     ah, ah ;~ 2A05:0F4E
cs=0x2a05;eip=0x000f50; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 86402 mov     [bx+6], ax ;~ 2A05:0F50
cs=0x2a05;eip=0x000f53; 	X(MOV(*(dw*)(raddr(ds,bx+8)), 0));	// 86403 mov     word ptr [bx+8], 0 ;~ 2A05:0F53
cs=0x2a05;eip=0x000f58; 	R(JMP(def_394d5));	// 86404 jmp     short def_394D5 ; jumptable 000394D5 default case, cases 217-219,227 ;~ 2A05:0F58
loc_3958a:
	// 10318 
cs=0x2a05;eip=0x000f5a; 	X(PUSH(es));	// 86409 push    es              ; jumptable 000394D5 case 229 ;~ 2A05:0F5A
cs=0x2a05;eip=0x000f5b; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86410 push    word ptr [bp+arg_2] ;~ 2A05:0F5B
cs=0x2a05;eip=0x000f5e; 	R(CALLF(audioresource_get_word,0));	// 86411 call    audioresource_get_word ;~ 2A05:0F5E
cs=0x2a05;eip=0x000f63; 	T(ADD(sp, 4));	// 86412 add     sp, 4 ;~ 2A05:0F63
cs=0x2a05;eip=0x000f66; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 86413 mov     bx, [bp+arg_0] ;~ 2A05:0F66
cs=0x2a05;eip=0x000f69; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 86414 mov     [bx+6], ax ;~ 2A05:0F69
cs=0x2a05;eip=0x000f6c; 	X(MOV(*(dw*)(raddr(ds,bx+8)), 0));	// 86415 mov     word ptr [bx+8], 0 ;~ 2A05:0F6C
cs=0x2a05;eip=0x000f71; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+arg_2))), 2));	// 86416 add     word ptr [bp+arg_2], 2 ;~ 2A05:0F71
cs=0x2a05;eip=0x000f75; 	R(JMP(def_394d5));	// 86417 jmp     short def_394D5 ; jumptable 000394D5 default case, cases 217-219,227 ;~ 2A05:0F75
def_394d5:
	// 10319 
cs=0x2a05;eip=0x000f9c; 	T(CMP(*(raddr(ss,bp+var_8)), 0x0D9));	// 86442 cmp     [bp+var_8], 0D9h ; 'Ù' ; jumptable 000394D5 default case, cases 217-219,227 ;~ 2A05:0F9C
cs=0x2a05;eip=0x000fa0; 	R(JNC(loc_39629));	// 86443 jnb     short loc_39629 ;~ 2A05:0FA0
cs=0x2a05;eip=0x000fa2; 	T(CMP(*(raddr(ss,bp+var_8)), 0x80));	// 86444 cmp     [bp+var_8], 80h ; '€' ;~ 2A05:0FA2
cs=0x2a05;eip=0x000fa6; 	R(JBE(loc_395e7));	// 86445 jbe     short loc_395E7 ;~ 2A05:0FA6
cs=0x2a05;eip=0x000fa8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 86446 mov     bx, [bp+arg_0] ;~ 2A05:0FA8
cs=0x2a05;eip=0x000fab; 	T(LES(si, *(dd*)(raddr(ss,bp+arg_2))));	// 86447 les     si, [bp+arg_2] ;~ 2A05:0FAB
cs=0x2a05;eip=0x000fae; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86448 inc     word ptr [bp+arg_2] ;~ 2A05:0FAE
cs=0x2a05;eip=0x000fb1; 	T(MOV(al, *(raddr(es,si))));	// 86449 mov     al, es:[si] ;~ 2A05:0FB1
cs=0x2a05;eip=0x000fb4; 	X(MOV(*(raddr(ds,bx+5)), al));	// 86450 mov     [bx+5], al ;~ 2A05:0FB4
loc_395e7:
	// 10320 
cs=0x2a05;eip=0x000fb7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 86453 mov     bx, [bp+arg_0] ;~ 2A05:0FB7
cs=0x2a05;eip=0x000fba; 	T(SUB(ax, ax));	// 86454 sub     ax, ax ;~ 2A05:0FBA
cs=0x2a05;eip=0x000fbc; 	X(MOV(*(dw*)(raddr(ds,bx+8)), ax));	// 86455 mov     [bx+8], ax ;~ 2A05:0FBC
cs=0x2a05;eip=0x000fbf; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 86456 mov     [bx+6], ax ;~ 2A05:0FBF
cs=0x2a05;eip=0x000fc2; 	T(MOV(si, bx));	// 86457 mov     si, bx ;~ 2A05:0FC2
loc_395f4:
	// 10321 
cs=0x2a05;eip=0x000fc4; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 86460 les     bx, [bp+arg_2] ;~ 2A05:0FC4
cs=0x2a05;eip=0x000fc7; 	T(MOV(al, *(raddr(es,bx))));	// 86461 mov     al, es:[bx] ;~ 2A05:0FC7
cs=0x2a05;eip=0x000fca; 	T(SUB(ah, ah));	// 86462 sub     ah, ah ;~ 2A05:0FCA
cs=0x2a05;eip=0x000fcc; 	T(AND(ax, 0x7F));	// 86463 and     ax, 7Fh ;~ 2A05:0FCC
cs=0x2a05;eip=0x000fcf; 	T(SUB(dx, dx));	// 86464 sub     dx, dx ;~ 2A05:0FCF
cs=0x2a05;eip=0x000fd1; 	T(MOV(cx, *(dw*)(raddr(ds,si+6))));	// 86465 mov     cx, [si+6] ;~ 2A05:0FD1
cs=0x2a05;eip=0x000fd4; 	T(MOV(bx, *(dw*)(raddr(ds,si+8))));	// 86466 mov     bx, [si+8] ;~ 2A05:0FD4
cs=0x2a05;eip=0x000fd7; 	T(MOV(di, cx));	// 86467 mov     di, cx ;~ 2A05:0FD7
cs=0x2a05;eip=0x000fd9; 	T(MOV(cl, 7));	// 86468 mov     cl, 7 ;~ 2A05:0FD9
loc_3960b:
	// 10322 
cs=0x2a05;eip=0x000fdb; 	T(SHL(di, 1));	// 86471 shl     di, 1 ;~ 2A05:0FDB
cs=0x2a05;eip=0x000fdd; 	T(RCL(bx, 1));	// 86472 rcl     bx, 1 ;~ 2A05:0FDD
cs=0x2a05;eip=0x000fdf; 	T(DEC(cl));	// 86473 dec     cl ;~ 2A05:0FDF
cs=0x2a05;eip=0x000fe1; 	R(JNZ(loc_3960b));	// 86474 jnz     short loc_3960B ;~ 2A05:0FE1
cs=0x2a05;eip=0x000fe3; 	T(ADD(ax, di));	// 86475 add     ax, di ;~ 2A05:0FE3
cs=0x2a05;eip=0x000fe5; 	T(ADC(dx, bx));	// 86476 adc     dx, bx ;~ 2A05:0FE5
cs=0x2a05;eip=0x000fe7; 	X(MOV(*(dw*)(raddr(ds,si+6)), ax));	// 86477 mov     [si+6], ax ;~ 2A05:0FE7
cs=0x2a05;eip=0x000fea; 	X(MOV(*(dw*)(raddr(ds,si+8)), dx));	// 86478 mov     [si+8], dx ;~ 2A05:0FEA
cs=0x2a05;eip=0x000fed; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 86479 les     bx, [bp+arg_2] ;~ 2A05:0FED
cs=0x2a05;eip=0x000ff0; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86480 inc     word ptr [bp+arg_2] ;~ 2A05:0FF0
cs=0x2a05;eip=0x000ff3; 	T(TEST(*(raddr(es,bx)), 0x80));	// 86481 test    byte ptr es:[bx], 80h ;~ 2A05:0FF3
cs=0x2a05;eip=0x000ff7; 	R(JNZ(loc_395f4));	// 86482 jnz     short loc_395F4 ;~ 2A05:0FF7
loc_39629:
	// 10323 
cs=0x2a05;eip=0x000ff9; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 86485 mov     bx, [bp+arg_0] ;~ 2A05:0FF9
cs=0x2a05;eip=0x000ffc; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 86486 mov     ax, word ptr [bp+arg_2] ;~ 2A05:0FFC
cs=0x2a05;eip=0x000fff; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_6))));	// 86487 sub     ax, [bp+var_6] ;~ 2A05:0FFF
cs=0x2a05;eip=0x001002; 	X(MOV(*(raddr(ds,bx+0x0A)), al));	// 86488 mov     [bx+0Ah], al ;~ 2A05:1002
cs=0x2a05;eip=0x001005; 	X(POP(ds));	// 86489 pop     ds ;~ 2A05:1005
cs=0x2a05;eip=0x001006; 	X(POP(si));	// 86490 pop     si ;~ 2A05:1006
cs=0x2a05;eip=0x001007; 	X(POP(di));	// 86491 pop     di ;~ 2A05:1007
cs=0x2a05;eip=0x001008; 	T(MOV(sp, bp));	// 86492 mov     sp, bp ;~ 2A05:1008
cs=0x2a05;eip=0x00100a; 	X(POP(bp));	// 86493 pop     bp ;~ 2A05:100A
cs=0x2a05;eip=0x00100b; 	R(RETF(0));	// 86494 retf ;~ 2A05:100B
sub_3963c:
	// 86502 
#undef var_4
#define var_4 -4
	// 86505 var_4           = word ptr -4 ;~ 2A05:100C
#undef var_2
#define var_2 -2
	// 86506 var_2           = word ptr -2 ;~ 2A05:100C
ret_2a05_100c:
	// 10324 
cs=0x2a05;eip=0x00100c; 	X(PUSH(bp));	// 86508 push    bp ;~ 2A05:100C
cs=0x2a05;eip=0x00100d; 	T(MOV(bp, sp));	// 86509 mov     bp, sp ;~ 2A05:100D
cs=0x2a05;eip=0x00100f; 	T(SUB(sp, 6));	// 86510 sub     sp, 6 ;~ 2A05:100F
cs=0x2a05;eip=0x001012; 	X(PUSH(di));	// 86511 push    di ;~ 2A05:1012
cs=0x2a05;eip=0x001013; 	X(PUSH(si));	// 86512 push    si ;~ 2A05:1013
cs=0x2a05;eip=0x001014; 	X(PUSH(ds));	// 86513 push    ds ;~ 2A05:1014
cs=0x2a05;eip=0x001015; 	T(MOV(ax, seg_offset(dseg)));	// 86514 mov     ax, seg dseg ;~ 2A05:1015
cs=0x2a05;eip=0x001018; 	T(MOV(ds, ax));	// 86515 mov     ds, ax ;~ 2A05:1018
cs=0x2a05;eip=0x00101a; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 86516 mov     [bp+var_2], 0 ;~ 2A05:101A
cs=0x2a05;eip=0x00101f; 	T(MOV(al, byte_459d2));	// 86517 mov     al, byte_459D2 ;~ 2A05:101F
cs=0x2a05;eip=0x001022; 	T(SUB(ah, ah));	// 86518 sub     ah, ah ;~ 2A05:1022
cs=0x2a05;eip=0x001024; 	T(OR(ax, ax));	// 86519 or      ax, ax ;~ 2A05:1024
cs=0x2a05;eip=0x001026; 	R(JZ(loc_39683));	// 86520 jz      short loc_39683 ;~ 2A05:1026
cs=0x2a05;eip=0x001028; 	T(MOV(di, 0x0A2B6));	// 86521 mov     di, 0A2B6h ;~ 2A05:1028
loc_3965b:
	// 10325 
cs=0x2a05;eip=0x00102b; 	T(MOV(si, di));	// 86524 mov     si, di ;~ 2A05:102B
cs=0x2a05;eip=0x00102d; 	T(CMP(*(raddr(ds,si+1)), 0));	// 86525 cmp     byte ptr [si+1], 0 ;~ 2A05:102D
cs=0x2a05;eip=0x001031; 	R(JZ(loc_39670));	// 86526 jz      short loc_39670 ;~ 2A05:1031
cs=0x2a05;eip=0x001033; 	T(CMP(*(raddr(ds,si)), 0x10));	// 86527 cmp     byte ptr [si], 10h ;~ 2A05:1033
cs=0x2a05;eip=0x001036; 	R(JNC(loc_39670));	// 86528 jnb     short loc_39670 ;~ 2A05:1036
cs=0x2a05;eip=0x001038; 	X(PUSH(si));	// 86529 push    si ;~ 2A05:1038
cs=0x2a05;eip=0x001039; 	X(PUSH(cs));	// 86530 push    cs ;~ 2A05:1039
cs=0x2a05;eip=0x00103a; 	R(CALL(sub_3968a,0));	// 86531 call    near ptr sub_3968A ;~ 2A05:103A
cs=0x2a05;eip=0x00103d; 	T(ADD(sp, 2));	// 86532 add     sp, 2 ;~ 2A05:103D
loc_39670:
	// 10326 
cs=0x2a05;eip=0x001040; 	T(ADD(di, 0x2E));	// 86536 add     di, 2Eh ; '.' ;~ 2A05:1040
cs=0x2a05;eip=0x001043; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 86537 inc     [bp+var_2] ;~ 2A05:1043
cs=0x2a05;eip=0x001046; 	T(MOV(al, byte_459d2));	// 86538 mov     al, byte_459D2 ;~ 2A05:1046
cs=0x2a05;eip=0x001049; 	T(SUB(ah, ah));	// 86539 sub     ah, ah ;~ 2A05:1049
cs=0x2a05;eip=0x00104b; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), ax));	// 86540 cmp     [bp+var_2], ax ;~ 2A05:104B
cs=0x2a05;eip=0x00104e; 	R(JC(loc_3965b));	// 86541 jb      short loc_3965B ;~ 2A05:104E
cs=0x2a05;eip=0x001050; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), si));	// 86542 mov     [bp+var_4], si ;~ 2A05:1050
loc_39683:
	// 10327 
cs=0x2a05;eip=0x001053; 	X(POP(ds));	// 86545 pop     ds ;~ 2A05:1053
cs=0x2a05;eip=0x001054; 	X(POP(si));	// 86546 pop     si ;~ 2A05:1054
cs=0x2a05;eip=0x001055; 	X(POP(di));	// 86547 pop     di ;~ 2A05:1055
cs=0x2a05;eip=0x001056; 	T(MOV(sp, bp));	// 86548 mov     sp, bp ;~ 2A05:1056
cs=0x2a05;eip=0x001058; 	X(POP(bp));	// 86549 pop     bp ;~ 2A05:1058
cs=0x2a05;eip=0x001059; 	R(RETF(0));	// 86550 retf ;~ 2A05:1059
sub_3968a:
	// 86558 
#undef var_4
#define var_4 -4
	// 86561 var_4           = dword ptr -4 ;~ 2A05:105A
#undef arg_0
#define arg_0 6
	// 86562 arg_0           = word ptr  6 ;~ 2A05:105A
ret_2a05_105a:
	// 10328 
cs=0x2a05;eip=0x00105a; 	X(PUSH(bp));	// 86564 push    bp ;~ 2A05:105A
cs=0x2a05;eip=0x00105b; 	T(MOV(bp, sp));	// 86565 mov     bp, sp ;~ 2A05:105B
cs=0x2a05;eip=0x00105d; 	T(SUB(sp, 4));	// 86566 sub     sp, 4 ;~ 2A05:105D
cs=0x2a05;eip=0x001060; 	X(PUSH(ds));	// 86567 push    ds ;~ 2A05:1060
cs=0x2a05;eip=0x001061; 	T(MOV(ax, seg_offset(dseg)));	// 86568 mov     ax, seg dseg ;~ 2A05:1061
cs=0x2a05;eip=0x001064; 	T(MOV(ds, ax));	// 86569 mov     ds, ax ;~ 2A05:1064
cs=0x2a05;eip=0x001066; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 86570 mov     bx, [bp+arg_0] ;~ 2A05:1066
cs=0x2a05;eip=0x001069; 	X(ADD(*(dw*)(raddr(ds,bx+8)), 1));	// 86571 add     word ptr [bx+8], 1 ;~ 2A05:1069
cs=0x2a05;eip=0x00106d; 	X(ADC(*(dw*)(raddr(ds,bx+0x0A)), 0));	// 86572 adc     word ptr [bx+0Ah], 0 ;~ 2A05:106D
cs=0x2a05;eip=0x001071; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x0C))));	// 86573 mov     ax, [bx+0Ch] ;~ 2A05:1071
cs=0x2a05;eip=0x001074; 	T(OR(ax, *(dw*)(raddr(ds,bx+0x0E))));	// 86574 or      ax, [bx+0Eh] ;~ 2A05:1074
cs=0x2a05;eip=0x001077; 	R(JNZ(loc_396f2));	// 86575 jnz     short loc_396F2 ;~ 2A05:1077
cs=0x2a05;eip=0x001079; 	X(PUSH(bx));	// 86576 push    bx ;~ 2A05:1079
cs=0x2a05;eip=0x00107a; 	T(MOV(al, *(raddr(ds,bx+0x2C))));	// 86577 mov     al, [bx+2Ch] ;~ 2A05:107A
cs=0x2a05;eip=0x00107d; 	T(SUB(ah, ah));	// 86578 sub     ah, ah ;~ 2A05:107D
cs=0x2a05;eip=0x00107f; 	X(PUSH(ax));	// 86579 push    ax ;~ 2A05:107F
cs=0x2a05;eip=0x001080; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 86580 mov     ax, word ptr audiodriverbinary ;~ 2A05:1080
cs=0x2a05;eip=0x001083; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 86581 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:1083
cs=0x2a05;eip=0x001087; 	T(ADD(ax, 0x0C));	// 86582 add     ax, 0Ch ;~ 2A05:1087
cs=0x2a05;eip=0x00108a; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 86583 mov     word ptr [bp+var_4+2], dx ;~ 2A05:108A
cs=0x2a05;eip=0x00108d; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 86584 mov     word ptr [bp+var_4], ax ;~ 2A05:108D
cs=0x2a05;eip=0x001090; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_4))));	// 86585 call    [bp+var_4] ;~ 2A05:1090
cs=0x2a05;eip=0x001093; 	T(ADD(sp, 4));	// 86586 add     sp, 4 ;~ 2A05:1093
cs=0x2a05;eip=0x001096; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 86587 mov     bx, [bp+arg_0] ;~ 2A05:1096
cs=0x2a05;eip=0x001099; 	X(MOV(*(raddr(ds,bx+1)), 2));	// 86588 mov     byte ptr [bx+1], 2 ;~ 2A05:1099
cs=0x2a05;eip=0x00109d; 	T(MOV(al, 0x4C));	// 86589 mov     al, 4Ch ; 'L' ;~ 2A05:109D
cs=0x2a05;eip=0x00109f; 	X(MUL1_1(*(raddr(ds,bx))));	// 86590 mul     byte ptr [bx] ;~ 2A05:109F
cs=0x2a05;eip=0x0010a1; 	T(MOV(bx, ax));	// 86591 mov     bx, ax ;~ 2A05:10A1
cs=0x2a05;eip=0x0010a3; 	T(CMP(*(raddr(ds,bx-0x7DDF)), 0));	// 86592 cmp     byte ptr [bx-7DDFh], 0 ;~ 2A05:10A3
cs=0x2a05;eip=0x0010a8; 	R(JZ(loc_396e6));	// 86593 jz      short loc_396E6 ;~ 2A05:10A8
cs=0x2a05;eip=0x0010aa; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 86594 mov     bx, [bp+arg_0] ;~ 2A05:10AA
cs=0x2a05;eip=0x0010ad; 	X(MOV(*(raddr(ds,bx+0x16)), 3));	// 86595 mov     byte ptr [bx+16h], 3 ;~ 2A05:10AD
cs=0x2a05;eip=0x0010b1; 	X(POP(ds));	// 86596 pop     ds ;~ 2A05:10B1
cs=0x2a05;eip=0x0010b2; 	T(MOV(sp, bp));	// 86597 mov     sp, bp ;~ 2A05:10B2
cs=0x2a05;eip=0x0010b4; 	X(POP(bp));	// 86598 pop     bp ;~ 2A05:10B4
cs=0x2a05;eip=0x0010b5; 	R(RETF(0));	// 86599 retf ;~ 2A05:10B5
loc_396e6:
	// 10329 
cs=0x2a05;eip=0x0010b6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 86603 mov     bx, [bp+arg_0] ;~ 2A05:10B6
cs=0x2a05;eip=0x0010b9; 	X(MOV(*(raddr(ds,bx+0x16)), 4));	// 86604 mov     byte ptr [bx+16h], 4 ;~ 2A05:10B9
cs=0x2a05;eip=0x0010bd; 	X(POP(ds));	// 86605 pop     ds ;~ 2A05:10BD
cs=0x2a05;eip=0x0010be; 	T(MOV(sp, bp));	// 86606 mov     sp, bp ;~ 2A05:10BE
cs=0x2a05;eip=0x0010c0; 	X(POP(bp));	// 86607 pop     bp ;~ 2A05:10C0
cs=0x2a05;eip=0x0010c1; 	R(RETF(0));	// 86608 retf ;~ 2A05:10C1
loc_396f2:
	// 10330 
cs=0x2a05;eip=0x0010c2; 	X(SUB(*(dw*)(raddr(ds,bx+0x0C)), 1));	// 86612 sub     word ptr [bx+0Ch], 1 ;~ 2A05:10C2
cs=0x2a05;eip=0x0010c6; 	X(SBB(*(dw*)(raddr(ds,bx+0x0E)), 0));	// 86613 sbb     word ptr [bx+0Eh], 0 ;~ 2A05:10C6
cs=0x2a05;eip=0x0010ca; 	X(POP(ds));	// 86614 pop     ds ;~ 2A05:10CA
cs=0x2a05;eip=0x0010cb; 	T(MOV(sp, bp));	// 86615 mov     sp, bp ;~ 2A05:10CB
cs=0x2a05;eip=0x0010cd; 	X(POP(bp));	// 86616 pop     bp ;~ 2A05:10CD
cs=0x2a05;eip=0x0010ce; 	R(RETF(0));	// 86617 retf ;~ 2A05:10CE
sub_39700:
	// 86627 
#undef var_c
#define var_c -0x0C
	// 86630 var_C           = dword ptr -0Ch ;~ 2A05:10D0
#undef var_8
#define var_8 -8
	// 86631 var_8           = word ptr -8 ;~ 2A05:10D0
#undef var_6
#define var_6 -6
	// 86632 var_6           = dword ptr -6 ;~ 2A05:10D0
#undef var_2
#define var_2 -2
	// 86633 var_2           = word ptr -2 ;~ 2A05:10D0
ret_2a05_10d0:
	// 10331 
cs=0x2a05;eip=0x0010d0; 	X(PUSH(bp));	// 86635 push    bp ;~ 2A05:10D0
cs=0x2a05;eip=0x0010d1; 	T(MOV(bp, sp));	// 86636 mov     bp, sp ;~ 2A05:10D1
cs=0x2a05;eip=0x0010d3; 	T(SUB(sp, 0x0C));	// 86637 sub     sp, 0Ch ;~ 2A05:10D3
cs=0x2a05;eip=0x0010d6; 	X(PUSH(si));	// 86638 push    si ;~ 2A05:10D6
cs=0x2a05;eip=0x0010d7; 	X(PUSH(ds));	// 86639 push    ds ;~ 2A05:10D7
cs=0x2a05;eip=0x0010d8; 	T(MOV(ax, seg_offset(dseg)));	// 86640 mov     ax, seg dseg ;~ 2A05:10D8
cs=0x2a05;eip=0x0010db; 	T(MOV(ds, ax));	// 86641 mov     ds, ax ;~ 2A05:10DB
cs=0x2a05;eip=0x0010dd; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 86642 mov     [bp+var_2], 0 ;~ 2A05:10DD
cs=0x2a05;eip=0x0010e2; 	R(JMP(loc_398d0));	// 86643 jmp     loc_398D0 ;~ 2A05:10E2
loc_39716:
	// 10332 
cs=0x2a05;eip=0x0010e6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 86648 mov     bx, [bp+var_8] ;~ 2A05:10E6
cs=0x2a05;eip=0x0010e9; 	X(MOV(*(raddr(ds,bx+0x16)), 2));	// 86649 mov     byte ptr [bx+16h], 2 ;~ 2A05:10E9
loc_3971d:
	// 10333 
cs=0x2a05;eip=0x0010ed; 	T(CMP(*(raddr(ds,bx+0x16)), 2));	// 86653 cmp     byte ptr [bx+16h], 2 ;~ 2A05:10ED
cs=0x2a05;eip=0x0010f1; 	R(JNZ(loc_3973d));	// 86654 jnz     short loc_3973D ;~ 2A05:10F1
cs=0x2a05;eip=0x0010f3; 	T(LES(si, *(dd*)(raddr(ss,bp+var_6))));	// 86655 les     si, [bp+var_6] ;~ 2A05:10F3
cs=0x2a05;eip=0x0010f6; 	T(MOV(ax, *(dw*)(raddr(es,si+0x22))));	// 86656 mov     ax, es:[si+22h] ;~ 2A05:10F6
cs=0x2a05;eip=0x0010fa; 	X(SUB(*(dw*)(raddr(ds,bx+0x14)), ax));	// 86657 sub     [bx+14h], ax ;~ 2A05:10FA
cs=0x2a05;eip=0x0010fd; 	T(MOV(ax, *(dw*)(raddr(es,si+0x24))));	// 86658 mov     ax, es:[si+24h] ;~ 2A05:10FD
cs=0x2a05;eip=0x001101; 	T(CMP(*(dw*)(raddr(ds,bx+0x14)), ax));	// 86659 cmp     [bx+14h], ax ;~ 2A05:1101
cs=0x2a05;eip=0x001104; 	R(JG(loc_3973d));	// 86660 jg      short loc_3973D ;~ 2A05:1104
cs=0x2a05;eip=0x001106; 	X(MOV(*(raddr(ds,bx+0x16)), 3));	// 86661 mov     byte ptr [bx+16h], 3 ;~ 2A05:1106
cs=0x2a05;eip=0x00110a; 	X(MOV(*(dw*)(raddr(ds,bx+0x14)), ax));	// 86662 mov     [bx+14h], ax ;~ 2A05:110A
loc_3973d:
	// 10334 
cs=0x2a05;eip=0x00110d; 	T(CMP(*(raddr(ds,bx+0x16)), 3));	// 86666 cmp     byte ptr [bx+16h], 3 ;~ 2A05:110D
cs=0x2a05;eip=0x001111; 	R(JNZ(loc_39754));	// 86667 jnz     short loc_39754 ;~ 2A05:1111
cs=0x2a05;eip=0x001113; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_6))));	// 86668 les     bx, [bp+var_6] ;~ 2A05:1113
cs=0x2a05;eip=0x001116; 	T(CMP(*(dw*)(raddr(es,bx+0x24)), 0));	// 86669 cmp     word ptr es:[bx+24h], 0 ;~ 2A05:1116
cs=0x2a05;eip=0x00111b; 	R(JNZ(loc_39754));	// 86670 jnz     short loc_39754 ;~ 2A05:111B
cs=0x2a05;eip=0x00111d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 86671 mov     bx, [bp+var_8] ;~ 2A05:111D
cs=0x2a05;eip=0x001120; 	X(MOV(*(raddr(ds,bx+0x16)), 4));	// 86672 mov     byte ptr [bx+16h], 4 ;~ 2A05:1120
loc_39754:
	// 10335 
cs=0x2a05;eip=0x001124; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 86676 mov     bx, [bp+var_8] ;~ 2A05:1124
cs=0x2a05;eip=0x001127; 	T(CMP(*(raddr(ds,bx+0x16)), 4));	// 86677 cmp     byte ptr [bx+16h], 4 ;~ 2A05:1127
cs=0x2a05;eip=0x00112b; 	R(JNZ(loc_397b1));	// 86678 jnz     short loc_397B1 ;~ 2A05:112B
cs=0x2a05;eip=0x00112d; 	T(LES(si, *(dd*)(raddr(ss,bp+var_6))));	// 86679 les     si, [bp+var_6] ;~ 2A05:112D
cs=0x2a05;eip=0x001130; 	T(MOV(ax, *(dw*)(raddr(es,si+0x26))));	// 86680 mov     ax, es:[si+26h] ;~ 2A05:1130
cs=0x2a05;eip=0x001134; 	X(SUB(*(dw*)(raddr(ds,bx+0x14)), ax));	// 86681 sub     [bx+14h], ax ;~ 2A05:1134
cs=0x2a05;eip=0x001137; 	T(CMP(*(dw*)(raddr(ds,bx+0x14)), 0));	// 86682 cmp     word ptr [bx+14h], 0 ;~ 2A05:1137
cs=0x2a05;eip=0x00113b; 	R(JG(loc_397b1));	// 86683 jg      short loc_397B1 ;~ 2A05:113B
cs=0x2a05;eip=0x00113d; 	X(MOV(*(dw*)(raddr(ds,bx+0x14)), 0));	// 86684 mov     word ptr [bx+14h], 0 ;~ 2A05:113D
cs=0x2a05;eip=0x001142; 	X(MOV(*(raddr(ds,bx+0x16)), 0));	// 86685 mov     byte ptr [bx+16h], 0 ;~ 2A05:1142
cs=0x2a05;eip=0x001146; 	X(MOV(*(raddr(ds,bx+1)), 0));	// 86686 mov     byte ptr [bx+1], 0 ;~ 2A05:1146
cs=0x2a05;eip=0x00114a; 	T(MOV(al, 0x4C));	// 86687 mov     al, 4Ch ; 'L' ;~ 2A05:114A
cs=0x2a05;eip=0x00114c; 	X(MUL1_1(*(raddr(ds,bx))));	// 86688 mul     byte ptr [bx] ;~ 2A05:114C
cs=0x2a05;eip=0x00114e; 	T(MOV(bx, ax));	// 86689 mov     bx, ax ;~ 2A05:114E
cs=0x2a05;eip=0x001150; 	X(DEC(*(((audiochunks_unk)+0x15)+bx)));	// 86690 dec     (audiochunks_unk+15h)[bx] ;~ 2A05:1150
cs=0x2a05;eip=0x001154; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 86691 push    [bp+var_8] ;~ 2A05:1154
cs=0x2a05;eip=0x001157; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 86692 mov     bx, [bp+var_8] ;~ 2A05:1157
cs=0x2a05;eip=0x00115a; 	T(MOV(al, *(raddr(ds,bx+0x2C))));	// 86693 mov     al, [bx+2Ch] ;~ 2A05:115A
cs=0x2a05;eip=0x00115d; 	T(SUB(ah, ah));	// 86694 sub     ah, ah ;~ 2A05:115D
cs=0x2a05;eip=0x00115f; 	X(PUSH(ax));	// 86695 push    ax ;~ 2A05:115F
cs=0x2a05;eip=0x001160; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 86696 mov     ax, word ptr audiodriverbinary ;~ 2A05:1160
cs=0x2a05;eip=0x001163; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 86697 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:1163
cs=0x2a05;eip=0x001167; 	T(ADD(ax, 0x0F));	// 86698 add     ax, 0Fh ;~ 2A05:1167
cs=0x2a05;eip=0x00116a; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c+2))), dx));	// 86699 mov     word ptr [bp+var_C+2], dx ;~ 2A05:116A
cs=0x2a05;eip=0x00116d; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c))), ax));	// 86700 mov     word ptr [bp+var_C], ax ;~ 2A05:116D
cs=0x2a05;eip=0x001170; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_c))));	// 86701 call    [bp+var_C] ;~ 2A05:1170
cs=0x2a05;eip=0x001173; 	T(ADD(sp, 4));	// 86702 add     sp, 4 ;~ 2A05:1173
cs=0x2a05;eip=0x001176; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 86703 mov     bx, [bp+var_8] ;~ 2A05:1176
cs=0x2a05;eip=0x001179; 	T(MOV(bl, *(raddr(ds,bx))));	// 86704 mov     bl, [bx] ;~ 2A05:1179
cs=0x2a05;eip=0x00117b; 	T(SUB(bh, bh));	// 86705 sub     bh, bh ;~ 2A05:117B
cs=0x2a05;eip=0x00117d; 	X(MOV(*((&byte_44aca)+bx), bh));	// 86706 mov     byte_44ACA[bx], bh ;~ 2A05:117D
loc_397b1:
	// 10336 
cs=0x2a05;eip=0x001181; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_6))));	// 86710 les     bx, [bp+var_6] ;~ 2A05:1181
cs=0x2a05;eip=0x001184; 	T(CMP(*(raddr(es,bx+0x28)), 0));	// 86711 cmp     byte ptr es:[bx+28h], 0 ;~ 2A05:1184
cs=0x2a05;eip=0x001189; 	R(JNZ(loc_397be));	// 86712 jnz     short loc_397BE ;~ 2A05:1189
cs=0x2a05;eip=0x00118b; 	R(JMP(loc_39853));	// 86713 jmp     loc_39853 ;~ 2A05:118B
loc_397be:
	// 10337 
cs=0x2a05;eip=0x00118e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 86717 mov     bx, [bp+var_8] ;~ 2A05:118E
cs=0x2a05;eip=0x001191; 	T(CMP(*(dw*)(raddr(ds,bx+0x18)), 0));	// 86718 cmp     word ptr [bx+18h], 0 ;~ 2A05:1191
cs=0x2a05;eip=0x001195; 	R(JZ(loc_397ce));	// 86719 jz      short loc_397CE ;~ 2A05:1195
cs=0x2a05;eip=0x001197; 	X(DEC(*(dw*)(raddr(ds,bx+0x18))));	// 86720 dec     word ptr [bx+18h] ;~ 2A05:1197
cs=0x2a05;eip=0x00119a; 	R(JMP(loc_39853));	// 86721 jmp     loc_39853 ;~ 2A05:119A
loc_397ce:
	// 10338 
cs=0x2a05;eip=0x00119e; 	T(CMP(*(dw*)(raddr(ds,bx+0x1A)), 0));	// 86726 cmp     word ptr [bx+1Ah], 0 ;~ 2A05:119E
cs=0x2a05;eip=0x0011a2; 	R(JZ(loc_39853));	// 86727 jz      short loc_39853 ;~ 2A05:11A2
cs=0x2a05;eip=0x0011a4; 	T(CMP(*(dw*)(raddr(ds,bx+0x1A)), 0x7FFF));	// 86728 cmp     word ptr [bx+1Ah], 7FFFh ;~ 2A05:11A4
cs=0x2a05;eip=0x0011a9; 	R(JZ(loc_397de));	// 86729 jz      short loc_397DE ;~ 2A05:11A9
cs=0x2a05;eip=0x0011ab; 	X(DEC(*(dw*)(raddr(ds,bx+0x1A))));	// 86730 dec     word ptr [bx+1Ah] ;~ 2A05:11AB
loc_397de:
	// 10339 
cs=0x2a05;eip=0x0011ae; 	T(CMP(*(raddr(ds,bx+0x27)), 0));	// 86733 cmp     byte ptr [bx+27h], 0 ;~ 2A05:11AE
cs=0x2a05;eip=0x0011b2; 	R(JNZ(loc_39850));	// 86734 jnz     short loc_39850 ;~ 2A05:11B2
cs=0x2a05;eip=0x0011b4; 	T(LES(si, *(dd*)(raddr(ss,bp+var_6))));	// 86735 les     si, [bp+var_6] ;~ 2A05:11B4
cs=0x2a05;eip=0x0011b7; 	T(MOV(al, *(raddr(es,si+0x29))));	// 86736 mov     al, es:[si+29h] ;~ 2A05:11B7
cs=0x2a05;eip=0x0011bb; 	X(MOV(*(raddr(ds,bx+0x27)), al));	// 86737 mov     [bx+27h], al ;~ 2A05:11BB
cs=0x2a05;eip=0x0011be; 	T(CMP(*(raddr(ds,bx+0x26)), 2));	// 86738 cmp     byte ptr [bx+26h], 2 ;~ 2A05:11BE
cs=0x2a05;eip=0x0011c2; 	R(JNZ(loc_39828));	// 86739 jnz     short loc_39828 ;~ 2A05:11C2
cs=0x2a05;eip=0x0011c4; 	T(MOV(si, bx));	// 86740 mov     si, bx ;~ 2A05:11C4
cs=0x2a05;eip=0x0011c6; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x24))));	// 86741 mov     ax, [si+24h] ;~ 2A05:11C6
cs=0x2a05;eip=0x0011c9; 	X(SUB(*(dw*)(raddr(ds,bx+0x1C)), ax));	// 86742 sub     [bx+1Ch], ax ;~ 2A05:11C9
cs=0x2a05;eip=0x0011cc; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1C))));	// 86743 mov     ax, [bx+1Ch] ;~ 2A05:11CC
cs=0x2a05;eip=0x0011cf; 	T(CWD);	// 86744 cwd ;~ 2A05:11CF
cs=0x2a05;eip=0x0011d0; 	T(XOR(ax, dx));	// 86745 xor     ax, dx ;~ 2A05:11D0
cs=0x2a05;eip=0x0011d2; 	T(SUB(ax, dx));	// 86746 sub     ax, dx ;~ 2A05:11D2
cs=0x2a05;eip=0x0011d4; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_6)))));	// 86747 mov     bx, word ptr [bp+var_6] ;~ 2A05:11D4
cs=0x2a05;eip=0x0011d7; 	T(CMP(*(dw*)(raddr(es,bx+0x2E)), ax));	// 86748 cmp     es:[bx+2Eh], ax ;~ 2A05:11D7
cs=0x2a05;eip=0x0011db; 	R(JA(loc_39853));	// 86749 ja      short loc_39853 ;~ 2A05:11DB
cs=0x2a05;eip=0x0011dd; 	T(TEST(*(raddr(es,bx+0x34)), 1));	// 86750 test    byte ptr es:[bx+34h], 1 ;~ 2A05:11DD
cs=0x2a05;eip=0x0011e2; 	R(JZ(loc_3981e));	// 86751 jz      short loc_3981E ;~ 2A05:11E2
cs=0x2a05;eip=0x0011e4; 	T(MOV(bx, si));	// 86752 mov     bx, si ;~ 2A05:11E4
cs=0x2a05;eip=0x0011e6; 	X(MOV(*(raddr(ds,bx+0x26)), 1));	// 86753 mov     byte ptr [bx+26h], 1 ;~ 2A05:11E6
cs=0x2a05;eip=0x0011ea; 	R(JMP(loc_39853));	// 86754 jmp     short loc_39853 ;~ 2A05:11EA
loc_3981e:
	// 10340 
cs=0x2a05;eip=0x0011ee; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 86761 mov     bx, [bp+var_8] ;~ 2A05:11EE
cs=0x2a05;eip=0x0011f1; 	X(MOV(*(dw*)(raddr(ds,bx+0x1C)), 0));	// 86762 mov     word ptr [bx+1Ch], 0 ;~ 2A05:11F1
cs=0x2a05;eip=0x0011f6; 	R(JMP(loc_39853));	// 86763 jmp     short loc_39853 ;~ 2A05:11F6
loc_39828:
	// 10341 
cs=0x2a05;eip=0x0011f8; 	T(MOV(si, bx));	// 86767 mov     si, bx ;~ 2A05:11F8
cs=0x2a05;eip=0x0011fa; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x24))));	// 86768 mov     ax, [si+24h] ;~ 2A05:11FA
cs=0x2a05;eip=0x0011fd; 	X(ADD(*(dw*)(raddr(ds,bx+0x1C)), ax));	// 86769 add     [bx+1Ch], ax ;~ 2A05:11FD
cs=0x2a05;eip=0x001200; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1C))));	// 86770 mov     ax, [bx+1Ch] ;~ 2A05:1200
cs=0x2a05;eip=0x001203; 	T(CWD);	// 86771 cwd ;~ 2A05:1203
cs=0x2a05;eip=0x001204; 	T(XOR(ax, dx));	// 86772 xor     ax, dx ;~ 2A05:1204
cs=0x2a05;eip=0x001206; 	T(SUB(ax, dx));	// 86773 sub     ax, dx ;~ 2A05:1206
cs=0x2a05;eip=0x001208; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_6)))));	// 86774 mov     bx, word ptr [bp+var_6] ;~ 2A05:1208
cs=0x2a05;eip=0x00120b; 	T(CMP(*(dw*)(raddr(es,bx+0x2E)), ax));	// 86775 cmp     es:[bx+2Eh], ax ;~ 2A05:120B
cs=0x2a05;eip=0x00120f; 	R(JA(loc_39853));	// 86776 ja      short loc_39853 ;~ 2A05:120F
cs=0x2a05;eip=0x001211; 	T(TEST(*(raddr(es,bx+0x34)), 2));	// 86777 test    byte ptr es:[bx+34h], 2 ;~ 2A05:1211
cs=0x2a05;eip=0x001216; 	R(JZ(loc_3981e));	// 86778 jz      short loc_3981E ;~ 2A05:1216
cs=0x2a05;eip=0x001218; 	T(MOV(bx, si));	// 86779 mov     bx, si ;~ 2A05:1218
cs=0x2a05;eip=0x00121a; 	X(MOV(*(raddr(ds,bx+0x26)), 2));	// 86780 mov     byte ptr [bx+26h], 2 ;~ 2A05:121A
cs=0x2a05;eip=0x00121e; 	R(JMP(loc_39853));	// 86781 jmp     short loc_39853 ;~ 2A05:121E
loc_39850:
	// 10342 
cs=0x2a05;eip=0x001220; 	X(DEC(*(raddr(ds,bx+0x27))));	// 86785 dec     byte ptr [bx+27h] ;~ 2A05:1220
loc_39853:
	// 10343 
cs=0x2a05;eip=0x001223; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_6))));	// 86789 les     bx, [bp+var_6] ;~ 2A05:1223
cs=0x2a05;eip=0x001226; 	T(CMP(*(raddr(es,bx+0x35)), 0));	// 86790 cmp     byte ptr es:[bx+35h], 0 ;~ 2A05:1226
cs=0x2a05;eip=0x00122b; 	R(JZ(loc_398a4));	// 86791 jz      short loc_398A4 ;~ 2A05:122B
cs=0x2a05;eip=0x00122d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 86792 mov     bx, [bp+var_8] ;~ 2A05:122D
cs=0x2a05;eip=0x001230; 	T(CMP(*(dw*)(raddr(ds,bx+0x1E)), 0));	// 86793 cmp     word ptr [bx+1Eh], 0 ;~ 2A05:1230
cs=0x2a05;eip=0x001234; 	R(JZ(loc_3986c));	// 86794 jz      short loc_3986C ;~ 2A05:1234
cs=0x2a05;eip=0x001236; 	X(DEC(*(dw*)(raddr(ds,bx+0x1E))));	// 86795 dec     word ptr [bx+1Eh] ;~ 2A05:1236
cs=0x2a05;eip=0x001239; 	R(JMP(loc_398a4));	// 86796 jmp     short loc_398A4 ;~ 2A05:1239
loc_3986c:
	// 10344 
cs=0x2a05;eip=0x00123c; 	T(CMP(*(dw*)(raddr(ds,bx+0x20)), 0));	// 86801 cmp     word ptr [bx+20h], 0 ;~ 2A05:123C
cs=0x2a05;eip=0x001240; 	R(JZ(loc_398a4));	// 86802 jz      short loc_398A4 ;~ 2A05:1240
cs=0x2a05;eip=0x001242; 	X(DEC(*(dw*)(raddr(ds,bx+0x20))));	// 86803 dec     word ptr [bx+20h] ;~ 2A05:1242
cs=0x2a05;eip=0x001245; 	T(CMP(*(raddr(ds,bx+0x28)), 0));	// 86804 cmp     byte ptr [bx+28h], 0 ;~ 2A05:1245
cs=0x2a05;eip=0x001249; 	R(JZ(loc_39880));	// 86805 jz      short loc_39880 ;~ 2A05:1249
cs=0x2a05;eip=0x00124b; 	X(DEC(*(raddr(ds,bx+0x28))));	// 86806 dec     byte ptr [bx+28h] ;~ 2A05:124B
cs=0x2a05;eip=0x00124e; 	R(JMP(loc_398a4));	// 86807 jmp     short loc_398A4 ;~ 2A05:124E
loc_39880:
	// 10345 
cs=0x2a05;eip=0x001250; 	T(LES(si, *(dd*)(raddr(ss,bp+var_6))));	// 86811 les     si, [bp+var_6] ;~ 2A05:1250
cs=0x2a05;eip=0x001253; 	T(MOV(al, *(raddr(es,si+0x3A))));	// 86812 mov     al, es:[si+3Ah] ;~ 2A05:1253
cs=0x2a05;eip=0x001257; 	X(MOV(*(raddr(ds,bx+0x28)), al));	// 86813 mov     [bx+28h], al ;~ 2A05:1257
cs=0x2a05;eip=0x00125a; 	T(MOV(al, *(raddr(ds,bx+0x29))));	// 86814 mov     al, [bx+29h] ;~ 2A05:125A
cs=0x2a05;eip=0x00125d; 	X(INC(*(raddr(ds,bx+0x29))));	// 86815 inc     byte ptr [bx+29h] ;~ 2A05:125D
cs=0x2a05;eip=0x001260; 	T(SUB(ah, ah));	// 86816 sub     ah, ah ;~ 2A05:1260
cs=0x2a05;eip=0x001262; 	T(MOV(si, ax));	// 86817 mov     si, ax ;~ 2A05:1262
cs=0x2a05;eip=0x001264; 	T(AND(si, 7));	// 86818 and     si, 7 ;~ 2A05:1264
cs=0x2a05;eip=0x001267; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_6)))));	// 86819 mov     bx, word ptr [bp+var_6] ;~ 2A05:1267
cs=0x2a05;eip=0x00126a; 	T(MOV(al, *(raddr(es,bx+si+0x3B))));	// 86820 mov     al, es:[bx+si+3Bh] ;~ 2A05:126A
cs=0x2a05;eip=0x00126e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 86821 mov     bx, [bp+var_8] ;~ 2A05:126E
cs=0x2a05;eip=0x001271; 	X(MOV(*(raddr(ds,bx+0x22)), al));	// 86822 mov     [bx+22h], al ;~ 2A05:1271
loc_398a4:
	// 10346 
cs=0x2a05;eip=0x001274; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 86826 mov     bx, [bp+var_8] ;~ 2A05:1274
cs=0x2a05;eip=0x001277; 	X(PUSH(*(dw*)(raddr(ds,bx+0x12))));	// 86827 push    word ptr [bx+12h] ;~ 2A05:1277
cs=0x2a05;eip=0x00127a; 	X(PUSH(*(dw*)(raddr(ds,bx+0x10))));	// 86828 push    word ptr [bx+10h] ;~ 2A05:127A
cs=0x2a05;eip=0x00127d; 	X(PUSH(*(dw*)(raddr(ds,bx+0x2A))));	// 86829 push    word ptr [bx+2Ah] ;~ 2A05:127D
cs=0x2a05;eip=0x001280; 	X(PUSH(bx));	// 86830 push    bx ;~ 2A05:1280
cs=0x2a05;eip=0x001281; 	T(MOV(al, *(raddr(ds,bx+0x2C))));	// 86831 mov     al, [bx+2Ch] ;~ 2A05:1281
cs=0x2a05;eip=0x001284; 	T(SUB(ah, ah));	// 86832 sub     ah, ah ;~ 2A05:1284
cs=0x2a05;eip=0x001286; 	X(PUSH(ax));	// 86833 push    ax ;~ 2A05:1286
cs=0x2a05;eip=0x001287; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 86834 mov     ax, word ptr audiodriverbinary ;~ 2A05:1287
cs=0x2a05;eip=0x00128a; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 86835 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:128A
cs=0x2a05;eip=0x00128e; 	T(ADD(ax, 0x27));	// 86836 add     ax, 27h ; ''' ;~ 2A05:128E
cs=0x2a05;eip=0x001291; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c+2))), dx));	// 86837 mov     word ptr [bp+var_C+2], dx ;~ 2A05:1291
cs=0x2a05;eip=0x001294; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c))), ax));	// 86838 mov     word ptr [bp+var_C], ax ;~ 2A05:1294
cs=0x2a05;eip=0x001297; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_c))));	// 86839 call    [bp+var_C] ;~ 2A05:1297
cs=0x2a05;eip=0x00129a; 	T(ADD(sp, 0x0A));	// 86840 add     sp, 0Ah ;~ 2A05:129A
loc_398cd:
	// 10347 
cs=0x2a05;eip=0x00129d; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 86843 inc     [bp+var_2] ;~ 2A05:129D
loc_398d0:
	// 10348 
cs=0x2a05;eip=0x0012a0; 	T(MOV(al, byte_459d2));	// 86846 mov     al, byte_459D2 ;~ 2A05:12A0
cs=0x2a05;eip=0x0012a3; 	T(SUB(ah, ah));	// 86847 sub     ah, ah ;~ 2A05:12A3
cs=0x2a05;eip=0x0012a5; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), ax));	// 86848 cmp     [bp+var_2], ax ;~ 2A05:12A5
cs=0x2a05;eip=0x0012a8; 	R(JNC(loc_39946));	// 86849 jnb     short loc_39946 ;~ 2A05:12A8
cs=0x2a05;eip=0x0012aa; 	T(MOV(ax, 0x2E));	// 86850 mov     ax, 2Eh ; '.' ;~ 2A05:12AA
cs=0x2a05;eip=0x0012ad; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_2))));	// 86851 imul    [bp+var_2] ;~ 2A05:12AD
cs=0x2a05;eip=0x0012b0; 	T(ADD(ax, 0x0A2B6));	// 86852 add     ax, 0A2B6h ;~ 2A05:12B0
cs=0x2a05;eip=0x0012b3; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 86853 mov     [bp+var_8], ax ;~ 2A05:12B3
cs=0x2a05;eip=0x0012b6; 	T(MOV(bx, ax));	// 86854 mov     bx, ax ;~ 2A05:12B6
cs=0x2a05;eip=0x0012b8; 	T(CMP(*(raddr(ds,bx+1)), 0));	// 86855 cmp     byte ptr [bx+1], 0 ;~ 2A05:12B8
cs=0x2a05;eip=0x0012bc; 	R(JZ(loc_398cd));	// 86856 jz      short loc_398CD ;~ 2A05:12BC
cs=0x2a05;eip=0x0012be; 	T(CMP(*(raddr(ds,bx)), 0x0F));	// 86857 cmp     byte ptr [bx], 0Fh ;~ 2A05:12BE
cs=0x2a05;eip=0x0012c1; 	R(JBE(loc_398fb));	// 86858 jbe     short loc_398FB ;~ 2A05:12C1
cs=0x2a05;eip=0x0012c3; 	X(PUSH(ax));	// 86859 push    ax ;~ 2A05:12C3
cs=0x2a05;eip=0x0012c4; 	X(PUSH(cs));	// 86860 push    cs ;~ 2A05:12C4
cs=0x2a05;eip=0x0012c5; 	R(CALL(sub_3968a,0));	// 86861 call    near ptr sub_3968A ;~ 2A05:12C5
cs=0x2a05;eip=0x0012c8; 	T(ADD(sp, 2));	// 86862 add     sp, 2 ;~ 2A05:12C8
loc_398fb:
	// 10349 
cs=0x2a05;eip=0x0012cb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 86865 mov     bx, [bp+var_8] ;~ 2A05:12CB
cs=0x2a05;eip=0x0012ce; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x10))));	// 86866 mov     ax, [bx+10h] ;~ 2A05:12CE
cs=0x2a05;eip=0x0012d1; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x12))));	// 86867 mov     dx, [bx+12h] ;~ 2A05:12D1
cs=0x2a05;eip=0x0012d4; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6))), ax));	// 86868 mov     word ptr [bp+var_6], ax ;~ 2A05:12D4
cs=0x2a05;eip=0x0012d7; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6+2))), dx));	// 86869 mov     word ptr [bp+var_6+2], dx ;~ 2A05:12D7
cs=0x2a05;eip=0x0012da; 	T(CMP(*(raddr(ds,bx+0x16)), 1));	// 86870 cmp     byte ptr [bx+16h], 1 ;~ 2A05:12DA
cs=0x2a05;eip=0x0012de; 	R(JZ(loc_39913));	// 86871 jz      short loc_39913 ;~ 2A05:12DE
cs=0x2a05;eip=0x0012e0; 	R(JMP(loc_3971d));	// 86872 jmp     loc_3971D ;~ 2A05:12E0
loc_39913:
	// 10350 
cs=0x2a05;eip=0x0012e3; 	T(LES(si, *(dd*)(raddr(ss,bp+var_6))));	// 86876 les     si, [bp+var_6] ;~ 2A05:12E3
cs=0x2a05;eip=0x0012e6; 	T(MOV(ax, *(dw*)(raddr(es,si+0x20))));	// 86877 mov     ax, es:[si+20h] ;~ 2A05:12E6
cs=0x2a05;eip=0x0012ea; 	X(ADD(*(dw*)(raddr(ds,bx+0x14)), ax));	// 86878 add     [bx+14h], ax ;~ 2A05:12EA
cs=0x2a05;eip=0x0012ed; 	T(MOV(ax, *(dw*)(raddr(es,si+0x1E))));	// 86879 mov     ax, es:[si+1Eh] ;~ 2A05:12ED
cs=0x2a05;eip=0x0012f1; 	T(CMP(*(dw*)(raddr(ds,bx+0x14)), ax));	// 86880 cmp     [bx+14h], ax ;~ 2A05:12F1
cs=0x2a05;eip=0x0012f4; 	R(JGE(loc_39929));	// 86881 jge     short loc_39929 ;~ 2A05:12F4
cs=0x2a05;eip=0x0012f6; 	R(JMP(loc_3971d));	// 86882 jmp     loc_3971D ;~ 2A05:12F6
loc_39929:
	// 10351 
cs=0x2a05;eip=0x0012f9; 	X(MOV(*(dw*)(raddr(ds,bx+0x14)), ax));	// 86886 mov     [bx+14h], ax ;~ 2A05:12F9
cs=0x2a05;eip=0x0012fc; 	T(MOV(bx, si));	// 86887 mov     bx, si ;~ 2A05:12FC
cs=0x2a05;eip=0x0012fe; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1E))));	// 86888 mov     ax, es:[bx+1Eh] ;~ 2A05:12FE
cs=0x2a05;eip=0x001302; 	T(CMP(*(dw*)(raddr(es,bx+0x24)), ax));	// 86889 cmp     es:[bx+24h], ax ;~ 2A05:1302
cs=0x2a05;eip=0x001306; 	R(JGE(loc_3993b));	// 86890 jge     short loc_3993B ;~ 2A05:1306
cs=0x2a05;eip=0x001308; 	R(JMP(loc_39716));	// 86891 jmp     loc_39716 ;~ 2A05:1308
loc_3993b:
	// 10352 
cs=0x2a05;eip=0x00130b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 86895 mov     bx, [bp+var_8] ;~ 2A05:130B
cs=0x2a05;eip=0x00130e; 	X(MOV(*(raddr(ds,bx+0x16)), 3));	// 86896 mov     byte ptr [bx+16h], 3 ;~ 2A05:130E
cs=0x2a05;eip=0x001312; 	R(JMP(loc_3971d));	// 86897 jmp     loc_3971D ;~ 2A05:1312
loc_39946:
	// 10353 
cs=0x2a05;eip=0x001316; 	T(MOV(ax, 0x0A2B6));	// 86902 mov     ax, 0A2B6h ;~ 2A05:1316
cs=0x2a05;eip=0x001319; 	X(PUSH(ax));	// 86903 push    ax ;~ 2A05:1319
cs=0x2a05;eip=0x00131a; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 86904 mov     ax, word ptr audiodriverbinary ;~ 2A05:131A
cs=0x2a05;eip=0x00131d; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 86905 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:131D
cs=0x2a05;eip=0x001321; 	T(ADD(ax, 0x30));	// 86906 add     ax, 30h ; '0' ;~ 2A05:1321
cs=0x2a05;eip=0x001324; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c+2))), dx));	// 86907 mov     word ptr [bp+var_C+2], dx ;~ 2A05:1324
cs=0x2a05;eip=0x001327; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c))), ax));	// 86908 mov     word ptr [bp+var_C], ax ;~ 2A05:1327
cs=0x2a05;eip=0x00132a; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_c))));	// 86909 call    [bp+var_C] ;~ 2A05:132A
cs=0x2a05;eip=0x00132d; 	T(ADD(sp, 2));	// 86910 add     sp, 2 ;~ 2A05:132D
cs=0x2a05;eip=0x001330; 	X(POP(ds));	// 86911 pop     ds ;~ 2A05:1330
cs=0x2a05;eip=0x001331; 	X(POP(si));	// 86912 pop     si ;~ 2A05:1331
cs=0x2a05;eip=0x001332; 	T(MOV(sp, bp));	// 86913 mov     sp, bp ;~ 2A05:1332
cs=0x2a05;eip=0x001334; 	X(POP(bp));	// 86914 pop     bp ;~ 2A05:1334
cs=0x2a05;eip=0x001335; 	R(RETF(0));	// 86915 retf ;~ 2A05:1335
audio_driver_func1e:
	// 86923 
#undef var_16
#define var_16 -0x16
	// 86926 var_16          = dword ptr -16h ;~ 2A05:1336
#undef var_12
#define var_12 -0x12
	// 86927 var_12          = word ptr -12h ;~ 2A05:1336
#undef var_10
#define var_10 -0x10
	// 86928 var_10          = dword ptr -10h ;~ 2A05:1336
#undef var_c
#define var_c -0x0C
	// 86929 var_C           = word ptr -0Ch ;~ 2A05:1336
#undef var_a
#define var_a -0x0A
	// 86930 var_A           = word ptr -0Ah ;~ 2A05:1336
#undef var_8
#define var_8 -8
	// 86931 var_8           = word ptr -8 ;~ 2A05:1336
#undef var_6
#define var_6 -6
	// 86932 var_6           = word ptr -6 ;~ 2A05:1336
#undef var_4
#define var_4 -4
	// 86933 var_4           = word ptr -4 ;~ 2A05:1336
#undef var_2
#define var_2 -2
	// 86934 var_2           = word ptr -2 ;~ 2A05:1336
#undef arg_0
#define arg_0 6
	// 86935 arg_0           = word ptr  6 ;~ 2A05:1336
#undef arg_2
#define arg_2 8
	// 86936 arg_2           = word ptr  8 ;~ 2A05:1336
ret_2a05_1336:
	// 10354 
cs=0x2a05;eip=0x001336; 	X(PUSH(bp));	// 86938 push    bp ;~ 2A05:1336
cs=0x2a05;eip=0x001337; 	T(MOV(bp, sp));	// 86939 mov     bp, sp ;~ 2A05:1337
cs=0x2a05;eip=0x001339; 	T(SUB(sp, 0x16));	// 86940 sub     sp, 16h ;~ 2A05:1339
cs=0x2a05;eip=0x00133c; 	X(PUSH(di));	// 86941 push    di ;~ 2A05:133C
cs=0x2a05;eip=0x00133d; 	X(PUSH(si));	// 86942 push    si ;~ 2A05:133D
cs=0x2a05;eip=0x00133e; 	X(PUSH(ds));	// 86943 push    ds ;~ 2A05:133E
cs=0x2a05;eip=0x00133f; 	T(MOV(ax, seg_offset(dseg)));	// 86944 mov     ax, seg dseg ;~ 2A05:133F
cs=0x2a05;eip=0x001342; 	T(MOV(ds, ax));	// 86945 mov     ds, ax ;~ 2A05:1342
cs=0x2a05;eip=0x001344; 	T(CMP(byte_40634, 0));	// 86946 cmp     byte_40634, 0 ;~ 2A05:1344
cs=0x2a05;eip=0x001349; 	R(JZ(loc_3997e));	// 86947 jz      short loc_3997E ;~ 2A05:1349
cs=0x2a05;eip=0x00134b; 	R(JMP(loc_39a04));	// 86948 jmp     loc_39A04 ;~ 2A05:134B
loc_3997e:
	// 10355 
cs=0x2a05;eip=0x00134e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 86952 mov     [bp+var_2], 0 ;~ 2A05:134E
cs=0x2a05;eip=0x001353; 	T(MOV(al, byte_459d2));	// 86953 mov     al, byte_459D2 ;~ 2A05:1353
cs=0x2a05;eip=0x001356; 	T(SUB(ah, ah));	// 86954 sub     ah, ah ;~ 2A05:1356
cs=0x2a05;eip=0x001358; 	T(OR(ax, ax));	// 86955 or      ax, ax ;~ 2A05:1358
cs=0x2a05;eip=0x00135a; 	R(JNZ(loc_3998f));	// 86956 jnz     short loc_3998F ;~ 2A05:135A
cs=0x2a05;eip=0x00135c; 	R(JMP(loc_39a9e));	// 86957 jmp     loc_39A9E ;~ 2A05:135C
loc_3998f:
	// 10356 
cs=0x2a05;eip=0x00135f; 	T(MOV(si, 0x0A2B6));	// 86961 mov     si, 0A2B6h ;~ 2A05:135F
cs=0x2a05;eip=0x001362; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0x0A2B7));	// 86962 mov     [bp+var_8], 0A2B7h ;~ 2A05:1362
cs=0x2a05;eip=0x001367; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0x0A2C6));	// 86963 mov     [bp+var_A], 0A2C6h ;~ 2A05:1367
cs=0x2a05;eip=0x00136c; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 0x0A2B8));	// 86964 mov     [bp+var_C], 0A2B8h ;~ 2A05:136C
cs=0x2a05;eip=0x001371; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_2))));	// 86965 mov     di, [bp+var_2] ;~ 2A05:1371
loc_399a4:
	// 10357 
cs=0x2a05;eip=0x001374; 	T(MOV(al, *(raddr(ds,si))));	// 86968 mov     al, [si] ;~ 2A05:1374
cs=0x2a05;eip=0x001376; 	T(SUB(ah, ah));	// 86969 sub     ah, ah ;~ 2A05:1376
cs=0x2a05;eip=0x001378; 	T(CMP(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 86970 cmp     ax, [bp+arg_2] ;~ 2A05:1378
cs=0x2a05;eip=0x00137b; 	R(JA(loc_399e2));	// 86971 ja      short loc_399E2 ;~ 2A05:137B
cs=0x2a05;eip=0x00137d; 	T(CMP(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 86972 cmp     ax, [bp+arg_0] ;~ 2A05:137D
cs=0x2a05;eip=0x001380; 	R(JC(loc_399e2));	// 86973 jb      short loc_399E2 ;~ 2A05:1380
cs=0x2a05;eip=0x001382; 	X(PUSH(di));	// 86974 push    di ;~ 2A05:1382
cs=0x2a05;eip=0x001383; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 86975 mov     ax, word ptr audiodriverbinary ;~ 2A05:1383
cs=0x2a05;eip=0x001386; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 86976 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:1386
cs=0x2a05;eip=0x00138a; 	T(ADD(ax, 0x1E));	// 86977 add     ax, 1Eh ;~ 2A05:138A
cs=0x2a05;eip=0x00138d; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10+2))), dx));	// 86978 mov     word ptr [bp+var_10+2], dx ;~ 2A05:138D
cs=0x2a05;eip=0x001390; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10))), ax));	// 86979 mov     word ptr [bp+var_10], ax ;~ 2A05:1390
cs=0x2a05;eip=0x001393; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_10))));	// 86980 call    [bp+var_10] ;~ 2A05:1393
cs=0x2a05;eip=0x001396; 	T(ADD(sp, 2));	// 86981 add     sp, 2 ;~ 2A05:1396
cs=0x2a05;eip=0x001399; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 86982 mov     bx, [bp+var_8] ;~ 2A05:1399
cs=0x2a05;eip=0x00139c; 	X(MOV(*(raddr(ds,bx)), 0));	// 86983 mov     byte ptr [bx], 0 ;~ 2A05:139C
cs=0x2a05;eip=0x00139f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_a))));	// 86984 mov     bx, [bp+var_A] ;~ 2A05:139F
cs=0x2a05;eip=0x0013a2; 	T(SUB(ax, ax));	// 86985 sub     ax, ax ;~ 2A05:13A2
cs=0x2a05;eip=0x0013a4; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 86986 mov     [bx+2], ax ;~ 2A05:13A4
cs=0x2a05;eip=0x0013a7; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 86987 mov     [bx], ax ;~ 2A05:13A7
cs=0x2a05;eip=0x0013a9; 	X(MOV(*(raddr(ds,si)), 0x0FF));	// 86988 mov     byte ptr [si], 0FFh ;~ 2A05:13A9
cs=0x2a05;eip=0x0013ac; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_c))));	// 86989 mov     bx, [bp+var_C] ;~ 2A05:13AC
cs=0x2a05;eip=0x0013af; 	X(MOV(*(raddr(ds,bx)), 0));	// 86990 mov     byte ptr [bx], 0 ;~ 2A05:13AF
loc_399e2:
	// 10358 
cs=0x2a05;eip=0x0013b2; 	T(ADD(si, 0x2E));	// 86994 add     si, 2Eh ; '.' ;~ 2A05:13B2
cs=0x2a05;eip=0x0013b5; 	X(ADD(*(dw*)(raddr(ss,bp+var_8)), 0x2E));	// 86995 add     [bp+var_8], 2Eh ; '.' ;~ 2A05:13B5
cs=0x2a05;eip=0x0013b9; 	X(ADD(*(dw*)(raddr(ss,bp+var_a)), 0x2E));	// 86996 add     [bp+var_A], 2Eh ; '.' ;~ 2A05:13B9
cs=0x2a05;eip=0x0013bd; 	X(ADD(*(dw*)(raddr(ss,bp+var_c)), 0x2E));	// 86997 add     [bp+var_C], 2Eh ; '.' ;~ 2A05:13BD
cs=0x2a05;eip=0x0013c1; 	T(INC(di));	// 86998 inc     di ;~ 2A05:13C1
cs=0x2a05;eip=0x0013c2; 	T(MOV(ax, di));	// 86999 mov     ax, di ;~ 2A05:13C2
cs=0x2a05;eip=0x0013c4; 	T(MOV(cl, byte_459d2));	// 87000 mov     cl, byte_459D2 ;~ 2A05:13C4
cs=0x2a05;eip=0x0013c8; 	T(SUB(ch, ch));	// 87001 sub     ch, ch ;~ 2A05:13C8
cs=0x2a05;eip=0x0013ca; 	T(CMP(ax, cx));	// 87002 cmp     ax, cx ;~ 2A05:13CA
cs=0x2a05;eip=0x0013cc; 	R(JC(loc_399a4));	// 87003 jb      short loc_399A4 ;~ 2A05:13CC
cs=0x2a05;eip=0x0013ce; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), di));	// 87004 mov     [bp+var_2], di ;~ 2A05:13CE
cs=0x2a05;eip=0x0013d1; 	R(JMP(loc_39a9e));	// 87005 jmp     loc_39A9E ;~ 2A05:13D1
loc_39a04:
	// 10359 
cs=0x2a05;eip=0x0013d4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 87009 mov     ax, [bp+arg_0] ;~ 2A05:13D4
cs=0x2a05;eip=0x0013d7; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 87010 mov     [bp+var_2], ax ;~ 2A05:13D7
cs=0x2a05;eip=0x0013da; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 87011 mov     ax, [bp+arg_2] ;~ 2A05:13DA
cs=0x2a05;eip=0x0013dd; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), ax));	// 87012 cmp     [bp+var_2], ax ;~ 2A05:13DD
cs=0x2a05;eip=0x0013e0; 	R(JLE(loc_39a15));	// 87013 jle     short loc_39A15 ;~ 2A05:13E0
cs=0x2a05;eip=0x0013e2; 	R(JMP(loc_39a9e));	// 87014 jmp     loc_39A9E ;~ 2A05:13E2
loc_39a15:
	// 10360 
cs=0x2a05;eip=0x0013e5; 	T(MOV(ax, 0x4C));	// 87018 mov     ax, 4Ch ; 'L' ;~ 2A05:13E5
cs=0x2a05;eip=0x0013e8; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 87019 imul    [bp+arg_0] ;~ 2A05:13E8
cs=0x2a05;eip=0x0013eb; 	T(ADD(ax, 0x8243));	// 87020 add     ax, 8243h ;~ 2A05:13EB
cs=0x2a05;eip=0x0013ee; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 87021 mov     [bp+var_12], ax ;~ 2A05:13EE
loc_39a21:
	// 10361 
cs=0x2a05;eip=0x0013f1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_12))));	// 87024 mov     bx, [bp+var_12] ;~ 2A05:13F1
cs=0x2a05;eip=0x0013f4; 	T(CMP(*(raddr(ds,bx)), 0x10));	// 87025 cmp     byte ptr [bx], 10h ;~ 2A05:13F4
cs=0x2a05;eip=0x0013f7; 	R(JNC(loc_39a8f));	// 87026 jnb     short loc_39A8F ;~ 2A05:13F7
cs=0x2a05;eip=0x0013f9; 	T(MOV(al, *(raddr(ds,bx))));	// 87027 mov     al, [bx] ;~ 2A05:13F9
cs=0x2a05;eip=0x0013fb; 	T(SUB(ah, ah));	// 87028 sub     ah, ah ;~ 2A05:13FB
cs=0x2a05;eip=0x0013fd; 	X(PUSH(ax));	// 87029 push    ax ;~ 2A05:13FD
cs=0x2a05;eip=0x0013fe; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 87030 mov     ax, word ptr audiodriverbinary ;~ 2A05:13FE
cs=0x2a05;eip=0x001401; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 87031 mov     dx, word ptr audiodriverbinary+2 ;~ 2A05:1401
cs=0x2a05;eip=0x001405; 	T(ADD(ax, 0x1E));	// 87032 add     ax, 1Eh ;~ 2A05:1405
cs=0x2a05;eip=0x001408; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_16+2))), dx));	// 87033 mov     word ptr [bp+var_16+2], dx ;~ 2A05:1408
cs=0x2a05;eip=0x00140b; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_16))), ax));	// 87034 mov     word ptr [bp+var_16], ax ;~ 2A05:140B
cs=0x2a05;eip=0x00140e; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_16))));	// 87035 call    [bp+var_16] ;~ 2A05:140E
cs=0x2a05;eip=0x001411; 	T(ADD(sp, 2));	// 87036 add     sp, 2 ;~ 2A05:1411
cs=0x2a05;eip=0x001414; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0x10));	// 87037 mov     [bp+var_4], 10h ;~ 2A05:1414
cs=0x2a05;eip=0x001419; 	T(MOV(si, 0x0A2B6));	// 87038 mov     si, 0A2B6h ;~ 2A05:1419
cs=0x2a05;eip=0x00141c; 	T(MOV(di, 0x0A2B7));	// 87039 mov     di, 0A2B7h ;~ 2A05:141C
cs=0x2a05;eip=0x00141f; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0x0A2C6));	// 87040 mov     [bp+var_A], 0A2C6h ;~ 2A05:141F
cs=0x2a05;eip=0x001424; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0x0A2B8));	// 87041 mov     [bp+var_8], 0A2B8h ;~ 2A05:1424
cs=0x2a05;eip=0x001429; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0x10));	// 87042 mov     [bp+var_6], 10h ;~ 2A05:1429
cs=0x2a05;eip=0x00142e; 	T(MOV(cx, 0x10));	// 87043 mov     cx, 10h ;~ 2A05:142E
loc_39a61:
	// 10362 
cs=0x2a05;eip=0x001431; 	T(MOV(al, *(raddr(ds,si))));	// 87046 mov     al, [si] ;~ 2A05:1431
cs=0x2a05;eip=0x001433; 	T(SUB(ah, ah));	// 87047 sub     ah, ah ;~ 2A05:1433
cs=0x2a05;eip=0x001435; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), ax));	// 87048 cmp     [bp+var_2], ax ;~ 2A05:1435
cs=0x2a05;eip=0x001438; 	R(JNZ(loc_39a7f));	// 87049 jnz     short loc_39A7F ;~ 2A05:1438
cs=0x2a05;eip=0x00143a; 	X(MOV(*(raddr(ds,di)), ah));	// 87050 mov     [di], ah ;~ 2A05:143A
cs=0x2a05;eip=0x00143c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_a))));	// 87051 mov     bx, [bp+var_A] ;~ 2A05:143C
cs=0x2a05;eip=0x00143f; 	T(SUB(ax, ax));	// 87052 sub     ax, ax ;~ 2A05:143F
cs=0x2a05;eip=0x001441; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 87053 mov     [bx+2], ax ;~ 2A05:1441
cs=0x2a05;eip=0x001444; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 87054 mov     [bx], ax ;~ 2A05:1444
cs=0x2a05;eip=0x001446; 	X(MOV(*(raddr(ds,si)), 0x0FF));	// 87055 mov     byte ptr [si], 0FFh ;~ 2A05:1446
cs=0x2a05;eip=0x001449; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 87056 mov     bx, [bp+var_8] ;~ 2A05:1449
cs=0x2a05;eip=0x00144c; 	X(MOV(*(raddr(ds,bx)), 0));	// 87057 mov     byte ptr [bx], 0 ;~ 2A05:144C
loc_39a7f:
	// 10363 
cs=0x2a05;eip=0x00144f; 	T(ADD(si, 0x2E));	// 87060 add     si, 2Eh ; '.' ;~ 2A05:144F
cs=0x2a05;eip=0x001452; 	T(ADD(di, 0x2E));	// 87061 add     di, 2Eh ; '.' ;~ 2A05:1452
cs=0x2a05;eip=0x001455; 	X(ADD(*(dw*)(raddr(ss,bp+var_a)), 0x2E));	// 87062 add     [bp+var_A], 2Eh ; '.' ;~ 2A05:1455
cs=0x2a05;eip=0x001459; 	X(ADD(*(dw*)(raddr(ss,bp+var_8)), 0x2E));	// 87063 add     [bp+var_8], 2Eh ; '.' ;~ 2A05:1459
cs=0x2a05;eip=0x00145d; 	R(LOOP(loc_39a61));	// 87064 loop    loc_39A61 ;~ 2A05:145D
loc_39a8f:
	// 10364 
cs=0x2a05;eip=0x00145f; 	X(ADD(*(dw*)(raddr(ss,bp+var_12)), 0x4C));	// 87067 add     [bp+var_12], 4Ch ; 'L' ;~ 2A05:145F
cs=0x2a05;eip=0x001463; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 87068 inc     [bp+var_2] ;~ 2A05:1463
cs=0x2a05;eip=0x001466; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 87069 mov     ax, [bp+arg_2] ;~ 2A05:1466
cs=0x2a05;eip=0x001469; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), ax));	// 87070 cmp     [bp+var_2], ax ;~ 2A05:1469
cs=0x2a05;eip=0x00146c; 	R(JLE(loc_39a21));	// 87071 jle     short loc_39A21 ;~ 2A05:146C
loc_39a9e:
	// 10365 
cs=0x2a05;eip=0x00146e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 87075 mov     ax, [bp+arg_0] ;~ 2A05:146E
cs=0x2a05;eip=0x001471; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 87076 mov     [bp+var_2], ax ;~ 2A05:1471
cs=0x2a05;eip=0x001474; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 87077 mov     ax, [bp+arg_2] ;~ 2A05:1474
cs=0x2a05;eip=0x001477; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), ax));	// 87078 cmp     [bp+var_2], ax ;~ 2A05:1477
cs=0x2a05;eip=0x00147a; 	R(JG(loc_39aca));	// 87079 jg      short loc_39ACA ;~ 2A05:147A
cs=0x2a05;eip=0x00147c; 	T(MOV(ax, 0x4C));	// 87080 mov     ax, 4Ch ; 'L' ;~ 2A05:147C
cs=0x2a05;eip=0x00147f; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 87081 imul    [bp+arg_0] ;~ 2A05:147F
cs=0x2a05;eip=0x001482; 	T(MOV(si, ax));	// 87082 mov     si, ax ;~ 2A05:1482
cs=0x2a05;eip=0x001484; 	T(ADD(si, 0x8211));	// 87083 add     si, 8211h ;~ 2A05:1484
cs=0x2a05;eip=0x001488; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_2))));	// 87084 mov     cx, [bp+arg_2] ;~ 2A05:1488
cs=0x2a05;eip=0x00148b; 	T(SUB(cx, *(dw*)(raddr(ss,bp+arg_0))));	// 87085 sub     cx, [bp+arg_0] ;~ 2A05:148B
cs=0x2a05;eip=0x00148e; 	T(INC(cx));	// 87086 inc     cx ;~ 2A05:148E
cs=0x2a05;eip=0x00148f; 	X(ADD(*(dw*)(raddr(ss,bp+var_2)), cx));	// 87087 add     [bp+var_2], cx ;~ 2A05:148F
loc_39ac2:
	// 10366 
cs=0x2a05;eip=0x001492; 	X(MOV(*(raddr(ds,si)), 0));	// 87090 mov     byte ptr [si], 0 ;~ 2A05:1492
cs=0x2a05;eip=0x001495; 	T(ADD(si, 0x4C));	// 87091 add     si, 4Ch ; 'L' ;~ 2A05:1495
cs=0x2a05;eip=0x001498; 	R(LOOP(loc_39ac2));	// 87092 loop    loc_39AC2 ;~ 2A05:1498
loc_39aca:
	// 10367 
cs=0x2a05;eip=0x00149a; 	X(POP(ds));	// 87095 pop     ds ;~ 2A05:149A
cs=0x2a05;eip=0x00149b; 	X(POP(si));	// 87096 pop     si ;~ 2A05:149B
cs=0x2a05;eip=0x00149c; 	X(POP(di));	// 87097 pop     di ;~ 2A05:149C
cs=0x2a05;eip=0x00149d; 	T(MOV(sp, bp));	// 87098 mov     sp, bp ;~ 2A05:149D
cs=0x2a05;eip=0x00149f; 	X(POP(bp));	// 87099 pop     bp ;~ 2A05:149F
cs=0x2a05;eip=0x0014a0; 	R(RETF(0));	// 87100 retf ;~ 2A05:14A0

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return true;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kaudio_driver_func1e: 	goto audio_driver_func1e;
        case m2c::kaudio_unk2: 	goto audio_unk2;
        case m2c::kaudiodriver_timer: 	goto audiodriver_timer;
        case m2c::kdef_38787: 	goto def_38787;
        case m2c::kdef_38e2d: 	goto def_38e2d;
        case m2c::kdef_394d5: 	goto def_394d5;
        case m2c::kloc_3867c: 	goto loc_3867c;
        case m2c::kloc_38680: 	goto loc_38680;
        case m2c::kloc_38688: 	goto loc_38688;
        case m2c::kloc_3869e: 	goto loc_3869e;
        case m2c::kloc_386ae: 	goto loc_386ae;
        case m2c::kloc_386b6: 	goto loc_386b6;
        case m2c::kloc_386d0: 	goto loc_386d0;
        case m2c::kloc_386e6: 	goto loc_386e6;
        case m2c::kloc_3872d: 	goto loc_3872d;
        case m2c::kloc_38737: 	goto loc_38737;
        case m2c::kloc_38742: 	goto loc_38742;
        case m2c::kloc_3874c: 	goto loc_3874c;
        case m2c::kloc_38770: 	goto loc_38770;
        case m2c::kloc_38784: 	goto loc_38784;
        case m2c::kloc_3878c: 	goto loc_3878c;
        case m2c::kloc_387b2: 	goto loc_387b2;
        case m2c::kloc_387d2: 	goto loc_387d2;
        case m2c::kloc_387dd: 	goto loc_387dd;
        case m2c::kloc_387ea: 	goto loc_387ea;
        case m2c::kloc_3880e: 	goto loc_3880e;
        case m2c::kloc_3881c: 	goto loc_3881c;
        case m2c::kloc_38844: 	goto loc_38844;
        case m2c::kloc_38886: 	goto loc_38886;
        case m2c::kloc_38899: 	goto loc_38899;
        case m2c::kloc_388a2: 	goto loc_388a2;
        case m2c::kloc_388c5: 	goto loc_388c5;
        case m2c::kloc_388d8: 	goto loc_388d8;
        case m2c::kloc_388e2: 	goto loc_388e2;
        case m2c::kloc_38936: 	goto loc_38936;
        case m2c::kloc_3893f: 	goto loc_3893f;
        case m2c::kloc_38952: 	goto loc_38952;
        case m2c::kloc_38962: 	goto loc_38962;
        case m2c::kloc_3897a: 	goto loc_3897a;
        case m2c::kloc_38986: 	goto loc_38986;
        case m2c::kloc_38992: 	goto loc_38992;
        case m2c::kloc_389c0: 	goto loc_389c0;
        case m2c::kloc_389cc: 	goto loc_389cc;
        case m2c::kloc_389f8: 	goto loc_389f8;
        case m2c::kloc_38a04: 	goto loc_38a04;
        case m2c::kloc_38a10: 	goto loc_38a10;
        case m2c::kloc_38a44: 	goto loc_38a44;
        case m2c::kloc_38a54: 	goto loc_38a54;
        case m2c::kloc_38a64: 	goto loc_38a64;
        case m2c::kloc_38a74: 	goto loc_38a74;
        case m2c::kloc_38a98: 	goto loc_38a98;
        case m2c::kloc_38aa0: 	goto loc_38aa0;
        case m2c::kloc_38b12: 	goto loc_38b12;
        case m2c::kloc_38b44: 	goto loc_38b44;
        case m2c::kloc_38b55: 	goto loc_38b55;
        case m2c::kloc_38b6e: 	goto loc_38b6e;
        case m2c::kloc_38b9d: 	goto loc_38b9d;
        case m2c::kloc_38bc4: 	goto loc_38bc4;
        case m2c::kloc_38be3: 	goto loc_38be3;
        case m2c::kloc_38c0d: 	goto loc_38c0d;
        case m2c::kloc_38c8f: 	goto loc_38c8f;
        case m2c::kloc_38cb3: 	goto loc_38cb3;
        case m2c::kloc_38cc8: 	goto loc_38cc8;
        case m2c::kloc_38cf0: 	goto loc_38cf0;
        case m2c::kloc_38d30: 	goto loc_38d30;
        case m2c::kloc_38d43: 	goto loc_38d43;
        case m2c::kloc_38d5b: 	goto loc_38d5b;
        case m2c::kloc_38d6d: 	goto loc_38d6d;
        case m2c::kloc_38d97: 	goto loc_38d97;
        case m2c::kloc_38dac: 	goto loc_38dac;
        case m2c::kloc_38dde: 	goto loc_38dde;
        case m2c::kloc_38e1a: 	goto loc_38e1a;
        case m2c::kloc_38e32: 	goto loc_38e32;
        case m2c::kloc_38e39: 	goto loc_38e39;
        case m2c::kloc_38e42: 	goto loc_38e42;
        case m2c::kloc_38e4c: 	goto loc_38e4c;
        case m2c::kloc_38e56: 	goto loc_38e56;
        case m2c::kloc_38e60: 	goto loc_38e60;
        case m2c::kloc_38e6a: 	goto loc_38e6a;
        case m2c::kloc_38e9e: 	goto loc_38e9e;
        case m2c::kloc_38ea6: 	goto loc_38ea6;
        case m2c::kloc_38eb0: 	goto loc_38eb0;
        case m2c::kloc_38ee6: 	goto loc_38ee6;
        case m2c::kloc_38f18: 	goto loc_38f18;
        case m2c::kloc_38fae: 	goto loc_38fae;
        case m2c::kloc_38fb4: 	goto loc_38fb4;
        case m2c::kloc_38ff2: 	goto loc_38ff2;
        case m2c::kloc_390c8: 	goto loc_390c8;
        case m2c::kloc_390f7: 	goto loc_390f7;
        case m2c::kloc_390fe: 	goto loc_390fe;
        case m2c::kloc_39108: 	goto loc_39108;
        case m2c::kloc_3910d: 	goto loc_3910d;
        case m2c::kloc_39117: 	goto loc_39117;
        case m2c::kloc_39122: 	goto loc_39122;
        case m2c::kloc_3913c: 	goto loc_3913c;
        case m2c::kloc_3914d: 	goto loc_3914d;
        case m2c::kloc_39167: 	goto loc_39167;
        case m2c::kloc_39178: 	goto loc_39178;
        case m2c::kloc_3918d: 	goto loc_3918d;
        case m2c::kloc_39194: 	goto loc_39194;
        case m2c::kloc_3919d: 	goto loc_3919d;
        case m2c::kloc_391d3: 	goto loc_391d3;
        case m2c::kloc_391f0: 	goto loc_391f0;
        case m2c::kloc_39200: 	goto loc_39200;
        case m2c::kloc_39211: 	goto loc_39211;
        case m2c::kloc_39226: 	goto loc_39226;
        case m2c::kloc_39254: 	goto loc_39254;
        case m2c::kloc_39276: 	goto loc_39276;
        case m2c::kloc_39285: 	goto loc_39285;
        case m2c::kloc_3929d: 	goto loc_3929d;
        case m2c::kloc_392ac: 	goto loc_392ac;
        case m2c::kloc_392bf: 	goto loc_392bf;
        case m2c::kloc_392c5: 	goto loc_392c5;
        case m2c::kloc_392cb: 	goto loc_392cb;
        case m2c::kloc_39317: 	goto loc_39317;
        case m2c::kloc_39344: 	goto loc_39344;
        case m2c::kloc_39355: 	goto loc_39355;
        case m2c::kloc_39363: 	goto loc_39363;
        case m2c::kloc_39386: 	goto loc_39386;
        case m2c::kloc_393ad: 	goto loc_393ad;
        case m2c::kloc_393be: 	goto loc_393be;
        case m2c::kloc_393d8: 	goto loc_393d8;
        case m2c::kloc_393e9: 	goto loc_393e9;
        case m2c::kloc_393fb: 	goto loc_393fb;
        case m2c::kloc_39401: 	goto loc_39401;
        case m2c::kloc_3941b: 	goto loc_3941b;
        case m2c::kloc_39428: 	goto loc_39428;
        case m2c::kloc_39431: 	goto loc_39431;
        case m2c::kloc_39445: 	goto loc_39445;
        case m2c::kloc_39452: 	goto loc_39452;
        case m2c::kloc_39480: 	goto loc_39480;
        case m2c::kloc_39496: 	goto loc_39496;
        case m2c::kloc_394d2: 	goto loc_394d2;
        case m2c::kloc_394da: 	goto loc_394da;
        case m2c::kloc_39511: 	goto loc_39511;
        case m2c::kloc_39518: 	goto loc_39518;
        case m2c::kloc_3952a: 	goto loc_3952a;
        case m2c::kloc_39554: 	goto loc_39554;
        case m2c::kloc_39566: 	goto loc_39566;
        case m2c::kloc_3958a: 	goto loc_3958a;
        case m2c::kloc_395e7: 	goto loc_395e7;
        case m2c::kloc_395f4: 	goto loc_395f4;
        case m2c::kloc_3960b: 	goto loc_3960b;
        case m2c::kloc_39629: 	goto loc_39629;
        case m2c::kloc_3965b: 	goto loc_3965b;
        case m2c::kloc_39670: 	goto loc_39670;
        case m2c::kloc_39683: 	goto loc_39683;
        case m2c::kloc_396e6: 	goto loc_396e6;
        case m2c::kloc_396f2: 	goto loc_396f2;
        case m2c::kloc_39716: 	goto loc_39716;
        case m2c::kloc_3971d: 	goto loc_3971d;
        case m2c::kloc_3973d: 	goto loc_3973d;
        case m2c::kloc_39754: 	goto loc_39754;
        case m2c::kloc_397b1: 	goto loc_397b1;
        case m2c::kloc_397be: 	goto loc_397be;
        case m2c::kloc_397ce: 	goto loc_397ce;
        case m2c::kloc_397de: 	goto loc_397de;
        case m2c::kloc_3981e: 	goto loc_3981e;
        case m2c::kloc_39828: 	goto loc_39828;
        case m2c::kloc_39850: 	goto loc_39850;
        case m2c::kloc_39853: 	goto loc_39853;
        case m2c::kloc_3986c: 	goto loc_3986c;
        case m2c::kloc_39880: 	goto loc_39880;
        case m2c::kloc_398a4: 	goto loc_398a4;
        case m2c::kloc_398cd: 	goto loc_398cd;
        case m2c::kloc_398d0: 	goto loc_398d0;
        case m2c::kloc_398fb: 	goto loc_398fb;
        case m2c::kloc_39913: 	goto loc_39913;
        case m2c::kloc_39929: 	goto loc_39929;
        case m2c::kloc_3993b: 	goto loc_3993b;
        case m2c::kloc_39946: 	goto loc_39946;
        case m2c::kloc_3997e: 	goto loc_3997e;
        case m2c::kloc_3998f: 	goto loc_3998f;
        case m2c::kloc_399a4: 	goto loc_399a4;
        case m2c::kloc_399e2: 	goto loc_399e2;
        case m2c::kloc_39a04: 	goto loc_39a04;
        case m2c::kloc_39a15: 	goto loc_39a15;
        case m2c::kloc_39a21: 	goto loc_39a21;
        case m2c::kloc_39a61: 	goto loc_39a61;
        case m2c::kloc_39a7f: 	goto loc_39a7f;
        case m2c::kloc_39a8f: 	goto loc_39a8f;
        case m2c::kloc_39a9e: 	goto loc_39a9e;
        case m2c::kloc_39ac2: 	goto loc_39ac2;
        case m2c::kloc_39aca: 	goto loc_39aca;
        case m2c::kret_2a05_100c: 	goto ret_2a05_100c;
        case m2c::kret_2a05_105a: 	goto ret_2a05_105a;
        case m2c::kret_2a05_412: 	goto ret_2a05_412;
        case m2c::kret_2a05_479: 	goto ret_2a05_479;
        case m2c::kret_2a05_494: 	goto ret_2a05_494;
        case m2c::kret_2a05_5a: 	goto ret_2a05_5a;
        case m2c::kret_2a05_6c8: 	goto ret_2a05_6c8;
        case m2c::kret_2a05_7b6: 	goto ret_2a05_7b6;
        case m2c::kret_2a05_a20: 	goto ret_2a05_a20;
        case m2c::kret_2a05_a6: 	goto ret_2a05_a6;
        case m2c::kret_2a05_ce1: 	goto ret_2a05_ce1;
        case m2c::kret_2a05_d: 	goto ret_2a05_d;
        case m2c::kret_2a05_d2: 	goto ret_2a05_d2;
        case m2c::kret_2a05_e2a: 	goto ret_2a05_e2a;
        case m2c::kseg028_478_proc: 	goto seg028_478_proc;
        case m2c::ksub_38aea: 	goto sub_38aea;
        case m2c::ksub_38bea: 	goto sub_38bea;
        case m2c::ksub_39088: 	goto sub_39088;
        case m2c::ksub_39700: 	goto sub_39700;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

