/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool _group25(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group25:
    _begin:
seg041_0_proc:
	// 118180 
loc_46490:
	// 10573 
cs=0x37eb;eip=0x000000; 	R(JMP(loc_46f0e));	// 118181 jmp     loc_46F0E ;~ 37EB:0000
ret_37eb_3:
	// 10574 
cs=0x37eb;eip=0x000003; 	R(JMP(loc_46f6a));	// 118183 jmp     loc_46F6A ;~ 37EB:0003
ret_37eb_6:
	// 10575 
cs=0x37eb;eip=0x000006; 	R(JMP(loc_464eb));	// 118185 jmp     short loc_464EB ;~ 37EB:0006
ret_37eb_9:
	// 10576 
cs=0x37eb;eip=0x000009; 	R(JMP(loc_4659b));	// 118189 jmp     loc_4659B ;~ 37EB:0009
ret_37eb_c:
	// 10577 
cs=0x37eb;eip=0x00000c; 	R(JMP(loc_4667f));	// 118191 jmp     loc_4667F ;~ 37EB:000C
ret_37eb_f:
	// 10578 
cs=0x37eb;eip=0x00000f; 	R(JMP(loc_466a3));	// 118193 jmp     loc_466A3 ;~ 37EB:000F
ret_37eb_12:
	// 10579 
cs=0x37eb;eip=0x000012; 	R(JMP(loc_46850));	// 118195 jmp     loc_46850 ;~ 37EB:0012
ret_37eb_15:
	// 10580 
cs=0x37eb;eip=0x000015; 	R(JMP(loc_466e0));	// 118197 jmp     loc_466E0 ;~ 37EB:0015
ret_37eb_18:
	// 10581 
cs=0x37eb;eip=0x000018; 	R(JMP(loc_46982));	// 118199 jmp     loc_46982 ;~ 37EB:0018
ret_37eb_1b:
	// 10582 
cs=0x37eb;eip=0x00001b; 	R(JMP(loc_46982));	// 118201 jmp     loc_46982 ;~ 37EB:001B
ret_37eb_1e:
	// 10583 
cs=0x37eb;eip=0x00001e; 	R(JMP(loc_46585));	// 118203 jmp     loc_46585 ;~ 37EB:001E
ret_37eb_21:
	// 10584 
cs=0x37eb;eip=0x000021; 	R(JMP(loc_464fb));	// 118205 jmp     short loc_464FB ;~ 37EB:0021
ret_37eb_24:
	// 10585 
cs=0x37eb;eip=0x000024; 	R(JMP(loc_46938));	// 118208 jmp     loc_46938 ;~ 37EB:0024
ret_37eb_27:
	// 10586 
cs=0x37eb;eip=0x000027; 	R(JMP(loc_46756));	// 118210 jmp     loc_46756 ;~ 37EB:0027
ret_37eb_2a:
	// 10587 
cs=0x37eb;eip=0x00002a; 	R(JMP(loc_468d9));	// 118212 jmp     loc_468D9 ;~ 37EB:002A
ret_37eb_2d:
	// 10588 
cs=0x37eb;eip=0x00002d; 	R(JMP(loc_46879));	// 118214 jmp     loc_46879 ;~ 37EB:002D
ret_37eb_30:
	// 10589 
cs=0x37eb;eip=0x000030; 	R(JMP(loc_46982));	// 118216 jmp     loc_46982 ;~ 37EB:0030
ret_37eb_33:
	// 10590 
cs=0x37eb;eip=0x000033; 	R(JMP(loc_468e7));	// 118218 jmp     loc_468E7 ;~ 37EB:0033
ret_37eb_36:
	// 10591 
cs=0x37eb;eip=0x000036; 	R(JMP(loc_46925));	// 118220 jmp     loc_46925 ;~ 37EB:0036
ret_37eb_39:
	// 10592 
cs=0x37eb;eip=0x000039; 	R(JMP(loc_46982));	// 118222 jmp     loc_46982 ;~ 37EB:0039
ret_37eb_3c:
	// 10593 
cs=0x37eb;eip=0x00003c; 	R(JMP(loc_46982));	// 118224 jmp     loc_46982 ;~ 37EB:003C
sub_464cf:
	// 118229 
cs=0x37eb;eip=0x00003f; 	X(PUSH(si));	// 118230 push    si ;~ 37EB:003F
ret_37eb_40:
	// 10594 
cs=0x37eb;eip=0x000040; 	T(MOV(cx, 0x0FF));	// 118231 mov     cx, 0FFh ;~ 37EB:0040
cs=0x37eb;eip=0x000043; 	T(MOV(ax, 0));	// 118232 mov     ax, 0 ;~ 37EB:0043
cs=0x37eb;eip=0x000046; 	T(MOV(si, ax));	// 118233 mov     si, ax ;~ 37EB:0046
loc_464d8:
	// 10595 
cs=0x37eb;eip=0x000048; 	T(MOV(al, 1));	// 118236 mov     al, 1 ;~ 37EB:0048
cs=0x37eb;eip=0x00004a; 	X(MOV(*(raddr(cs,si+0x97D)), al));	// 118237 mov     cs:[si+97Dh], al ;~ 37EB:004A
cs=0x37eb;eip=0x00004f; 	T(MOV(al, 0));	// 118238 mov     al, 0 ;~ 37EB:004F
cs=0x37eb;eip=0x000051; 	R(CALL(sub_46c57,0));	// 118239 call    sub_46C57 ;~ 37EB:0051
cs=0x37eb;eip=0x000054; 	T(INC(ah));	// 118240 inc     ah ;~ 37EB:0054
cs=0x37eb;eip=0x000056; 	T(INC(si));	// 118241 inc     si ;~ 37EB:0056
cs=0x37eb;eip=0x000057; 	R(LOOP(loc_464d8));	// 118242 loop    loc_464D8 ;~ 37EB:0057
cs=0x37eb;eip=0x000059; 	X(POP(si));	// 118243 pop     si ;~ 37EB:0059
cs=0x37eb;eip=0x00005a; 	R(RETN(0));	// 118244 retn ;~ 37EB:005A
seg041_5b_proc:
	// 118249 
loc_464eb:
	// 10596 
cs=0x37eb;eip=0x00005b; 	T(MOV(ax, 0));	// 118250 mov     ax, 0 ;~ 37EB:005B
loc_464ee:
	// 10597 
cs=0x37eb;eip=0x00005e; 	R(CALL(sub_469b8,0));	// 118253 call    sub_469B8 ;~ 37EB:005E
cs=0x37eb;eip=0x000061; 	T(INC(ax));	// 118254 inc     ax ;~ 37EB:0061
cs=0x37eb;eip=0x000062; 	T(CMP(ax, 9));	// 118255 cmp     ax, 9 ;~ 37EB:0062
cs=0x37eb;eip=0x000065; 	R(JC(loc_464ee));	// 118256 jb      short loc_464EE ;~ 37EB:0065
cs=0x37eb;eip=0x000067; 	R(CALL(sub_47154,0));	// 118257 call    sub_47154 ;~ 37EB:0067
cs=0x37eb;eip=0x00006a; 	R(RETF(0));	// 118258 retf ;~ 37EB:006A
loc_464fb:
	// 10598 
cs=0x37eb;eip=0x00006b; 	X(PUSH(bp));	// 118262 push    bp ;~ 37EB:006B
cs=0x37eb;eip=0x00006c; 	T(MOV(bp, sp));	// 118263 mov     bp, sp ;~ 37EB:006C
cs=0x37eb;eip=0x00006e; 	X(PUSH(di));	// 118264 push    di ;~ 37EB:006E
cs=0x37eb;eip=0x00006f; 	X(PUSH(si));	// 118265 push    si ;~ 37EB:006F
cs=0x37eb;eip=0x000070; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 118266 mov     ax, [bp+6] ;~ 37EB:0070
cs=0x37eb;eip=0x000073; 	T(CMP(ax, 0));	// 118267 cmp     ax, 0 ;~ 37EB:0073
cs=0x37eb;eip=0x000076; 	R(JNZ(loc_4650c));	// 118268 jnz     short loc_4650C ;~ 37EB:0076
cs=0x37eb;eip=0x000078; 	X(POP(si));	// 118269 pop     si ;~ 37EB:0078
cs=0x37eb;eip=0x000079; 	X(POP(di));	// 118270 pop     di ;~ 37EB:0079
cs=0x37eb;eip=0x00007a; 	X(POP(bp));	// 118271 pop     bp ;~ 37EB:007A
cs=0x37eb;eip=0x00007b; 	R(RETF(0));	// 118272 retf ;~ 37EB:007B
loc_4650c:
	// 10599 
cs=0x37eb;eip=0x00007c; 	T(DEC(ax));	// 118276 dec     ax ;~ 37EB:007C
cs=0x37eb;eip=0x00007d; 	T(MOV(si, *(dw*)(raddr(ss,bp+0x0A))));	// 118277 mov     si, [bp+0Ah] ;~ 37EB:007D
cs=0x37eb;eip=0x000080; 	T(LES(bx, *(dw*)(raddr(ss,bp+0x0C))));	// 118278 les     bx, [bp+0Ch] ;~ 37EB:0080
cs=0x37eb;eip=0x000083; 	X(PUSH(ax));	// 118279 push    ax ;~ 37EB:0083
cs=0x37eb;eip=0x000084; 	T(MOV(ah, al));	// 118280 mov     ah, al ;~ 37EB:0084
cs=0x37eb;eip=0x000086; 	T(ADD(ah, 0x0C0));	// 118281 add     ah, 0C0h ; 'À' ;~ 37EB:0086
cs=0x37eb;eip=0x000089; 	T(MOV(al, *(raddr(es,bx+0x45))));	// 118282 mov     al, es:[bx+45h] ;~ 37EB:0089
cs=0x37eb;eip=0x00008d; 	T(MOV(cl, 1));	// 118283 mov     cl, 1 ;~ 37EB:008D
cs=0x37eb;eip=0x00008f; 	T(SHL(al, cl));	// 118284 shl     al, cl ;~ 37EB:008F
cs=0x37eb;eip=0x000091; 	T(OR(al, *(raddr(es,bx+0x44))));	// 118285 or      al, es:[bx+44h] ;~ 37EB:0091
cs=0x37eb;eip=0x000095; 	R(CALL(sub_46c57,0));	// 118286 call    sub_46C57 ;~ 37EB:0095
cs=0x37eb;eip=0x000098; 	X(POP(ax));	// 118287 pop     ax ;~ 37EB:0098
cs=0x37eb;eip=0x000099; 	X(PUSH(ax));	// 118288 push    ax ;~ 37EB:0099
cs=0x37eb;eip=0x00009a; 	X(PUSH(bx));	// 118289 push    bx ;~ 37EB:009A
cs=0x37eb;eip=0x00009b; 	T(SHL(ax, 1));	// 118290 shl     ax, 1 ;~ 37EB:009B
cs=0x37eb;eip=0x00009d; 	T(MOV(di, ax));	// 118291 mov     di, ax ;~ 37EB:009D
cs=0x37eb;eip=0x00009f; 	T(MOV(ah, *(raddr(cs,di+0x870))));	// 118292 mov     ah, cs:[di+870h] ;~ 37EB:009F
cs=0x37eb;eip=0x0000a4; 	T(ADD(bx, 0x46));	// 118293 add     bx, 46h ; 'F' ;~ 37EB:00A4
cs=0x37eb;eip=0x0000a7; 	R(CALL(sub_46a15,0));	// 118294 call    sub_46A15 ;~ 37EB:00A7
cs=0x37eb;eip=0x0000aa; 	X(POP(bx));	// 118295 pop     bx ;~ 37EB:00AA
cs=0x37eb;eip=0x0000ab; 	X(POP(ax));	// 118296 pop     ax ;~ 37EB:00AB
cs=0x37eb;eip=0x0000ac; 	X(PUSH(ax));	// 118297 push    ax ;~ 37EB:00AC
cs=0x37eb;eip=0x0000ad; 	X(PUSH(bx));	// 118298 push    bx ;~ 37EB:00AD
cs=0x37eb;eip=0x0000ae; 	T(SHL(ax, 1));	// 118299 shl     ax, 1 ;~ 37EB:00AE
cs=0x37eb;eip=0x0000b0; 	T(INC(ax));	// 118300 inc     ax ;~ 37EB:00B0
cs=0x37eb;eip=0x0000b1; 	T(MOV(di, ax));	// 118301 mov     di, ax ;~ 37EB:00B1
cs=0x37eb;eip=0x0000b3; 	T(MOV(ah, *(raddr(cs,di+0x870))));	// 118302 mov     ah, cs:[di+870h] ;~ 37EB:00B3
cs=0x37eb;eip=0x0000b8; 	T(ADD(bx, 0x52));	// 118303 add     bx, 52h ; 'R' ;~ 37EB:00B8
cs=0x37eb;eip=0x0000bb; 	R(CALL(sub_46a15,0));	// 118304 call    sub_46A15 ;~ 37EB:00BB
cs=0x37eb;eip=0x0000be; 	X(POP(bx));	// 118305 pop     bx ;~ 37EB:00BE
cs=0x37eb;eip=0x0000bf; 	X(POP(ax));	// 118306 pop     ax ;~ 37EB:00BF
cs=0x37eb;eip=0x0000c0; 	T(XOR(cx, cx));	// 118307 xor     cx, cx ;~ 37EB:00C0
cs=0x37eb;eip=0x0000c2; 	T(XOR(dx, dx));	// 118308 xor     dx, dx ;~ 37EB:00C2
cs=0x37eb;eip=0x0000c4; 	T(MOV(dl, *(raddr(ds,si+0x29))));	// 118309 mov     dl, [si+29h] ;~ 37EB:00C4
cs=0x37eb;eip=0x0000c7; 	T(CMP(dx, 0));	// 118310 cmp     dx, 0 ;~ 37EB:00C7
cs=0x37eb;eip=0x0000ca; 	R(JZ(loc_46563));	// 118311 jz      short loc_46563 ;~ 37EB:00CA
cs=0x37eb;eip=0x0000cc; 	T(MOV(cl, *(raddr(es,bx+0x16))));	// 118312 mov     cl, es:[bx+16h] ;~ 37EB:00CC
cs=0x37eb;eip=0x0000d0; 	R(CALL(sub_46b5b,0));	// 118313 call    sub_46B5B ;~ 37EB:00D0
loc_46563:
	// 10600 
cs=0x37eb;eip=0x0000d3; 	T(MOV(dl, *(raddr(ds,si+0x2B))));	// 118316 mov     dl, [si+2Bh] ;~ 37EB:00D3
cs=0x37eb;eip=0x0000d6; 	T(CMP(dx, 0));	// 118317 cmp     dx, 0 ;~ 37EB:00D6
cs=0x37eb;eip=0x0000d9; 	R(JZ(loc_46572));	// 118318 jz      short loc_46572 ;~ 37EB:00D9
cs=0x37eb;eip=0x0000db; 	T(MOV(cl, *(raddr(es,bx+0x17))));	// 118319 mov     cl, es:[bx+17h] ;~ 37EB:00DB
cs=0x37eb;eip=0x0000df; 	R(CALL(sub_46b5b,0));	// 118320 call    sub_46B5B ;~ 37EB:00DF
loc_46572:
	// 10601 
cs=0x37eb;eip=0x0000e2; 	T(MOV(dl, *(raddr(ds,si+0x2C))));	// 118323 mov     dl, [si+2Ch] ;~ 37EB:00E2
cs=0x37eb;eip=0x0000e5; 	T(CMP(dx, 0));	// 118324 cmp     dx, 0 ;~ 37EB:00E5
cs=0x37eb;eip=0x0000e8; 	R(JZ(loc_46581));	// 118325 jz      short loc_46581 ;~ 37EB:00E8
cs=0x37eb;eip=0x0000ea; 	T(MOV(cl, *(raddr(es,bx+0x18))));	// 118326 mov     cl, es:[bx+18h] ;~ 37EB:00EA
cs=0x37eb;eip=0x0000ee; 	R(CALL(sub_46b5b,0));	// 118327 call    sub_46B5B ;~ 37EB:00EE
loc_46581:
	// 10602 
cs=0x37eb;eip=0x0000f1; 	X(POP(si));	// 118330 pop     si ;~ 37EB:00F1
cs=0x37eb;eip=0x0000f2; 	X(POP(di));	// 118331 pop     di ;~ 37EB:00F2
cs=0x37eb;eip=0x0000f3; 	X(POP(bp));	// 118332 pop     bp ;~ 37EB:00F3
cs=0x37eb;eip=0x0000f4; 	R(RETF(0));	// 118333 retf ;~ 37EB:00F4
loc_46585:
	// 10603 
cs=0x37eb;eip=0x0000f5; 	X(PUSH(bp));	// 118337 push    bp ;~ 37EB:00F5
cs=0x37eb;eip=0x0000f6; 	T(MOV(bp, sp));	// 118338 mov     bp, sp ;~ 37EB:00F6
cs=0x37eb;eip=0x0000f8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 118339 mov     ax, [bp+6] ;~ 37EB:00F8
cs=0x37eb;eip=0x0000fb; 	T(CMP(ax, 0));	// 118340 cmp     ax, 0 ;~ 37EB:00FB
cs=0x37eb;eip=0x0000fe; 	R(JNZ(loc_46595));	// 118341 jnz     short loc_46595 ;~ 37EB:00FE
cs=0x37eb;eip=0x000100; 	R(CALL(sub_47154,0));	// 118342 call    sub_47154 ;~ 37EB:0100
cs=0x37eb;eip=0x000103; 	X(POP(bp));	// 118343 pop     bp ;~ 37EB:0103
cs=0x37eb;eip=0x000104; 	R(RETF(0));	// 118344 retf ;~ 37EB:0104
loc_46595:
	// 10604 
cs=0x37eb;eip=0x000105; 	T(DEC(ax));	// 118348 dec     ax ;~ 37EB:0105
cs=0x37eb;eip=0x000106; 	R(CALL(sub_469b8,0));	// 118349 call    sub_469B8 ;~ 37EB:0106
cs=0x37eb;eip=0x000109; 	X(POP(bp));	// 118350 pop     bp ;~ 37EB:0109
cs=0x37eb;eip=0x00010a; 	R(RETF(0));	// 118351 retf ;~ 37EB:010A
loc_4659b:
	// 10605 
cs=0x37eb;eip=0x00010b; 	X(PUSH(bp));	// 118355 push    bp ;~ 37EB:010B
cs=0x37eb;eip=0x00010c; 	T(MOV(bp, sp));	// 118356 mov     bp, sp ;~ 37EB:010C
cs=0x37eb;eip=0x00010e; 	X(PUSH(di));	// 118357 push    di ;~ 37EB:010E
cs=0x37eb;eip=0x00010f; 	X(PUSH(si));	// 118358 push    si ;~ 37EB:010F
cs=0x37eb;eip=0x000110; 	T(LES(bx, *(dw*)(raddr(ss,bp+0x10))));	// 118359 les     bx, [bp+10h] ;~ 37EB:0110
cs=0x37eb;eip=0x000113; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 118360 mov     di, [bp+8] ;~ 37EB:0113
cs=0x37eb;eip=0x000116; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 118361 mov     ax, [bp+6] ;~ 37EB:0116
cs=0x37eb;eip=0x000119; 	T(CMP(ax, 0));	// 118362 cmp     ax, 0 ;~ 37EB:0119
cs=0x37eb;eip=0x00011c; 	R(JNZ(loc_465fc));	// 118363 jnz     short loc_465FC ;~ 37EB:011C
cs=0x37eb;eip=0x00011e; 	T(CMP(*(raddr(es,bx+0x0A)), 0));	// 118364 cmp     byte ptr es:[bx+0Ah], 0 ;~ 37EB:011E
cs=0x37eb;eip=0x000123; 	R(JZ(loc_465f8));	// 118365 jz      short loc_465F8 ;~ 37EB:0123
cs=0x37eb;eip=0x000125; 	T(MOV(al, *(raddr(ss,bp+0x0C))));	// 118366 mov     al, [bp+0Ch] ;~ 37EB:0125
cs=0x37eb;eip=0x000128; 	X(MOV(*(raddr(ds,di+3)), al));	// 118367 mov     [di+3], al ;~ 37EB:0128
cs=0x37eb;eip=0x00012b; 	R(CALL(sub_46bb0,0));	// 118368 call    sub_46BB0 ;~ 37EB:012B
cs=0x37eb;eip=0x00012e; 	X(MOV(*(dw*)(raddr(ds,di+4)), cx));	// 118369 mov     [di+4], cx ;~ 37EB:012E
cs=0x37eb;eip=0x000131; 	T(MOV(al, *(raddr(es,bx+0x11))));	// 118370 mov     al, es:[bx+11h] ;~ 37EB:0131
cs=0x37eb;eip=0x000135; 	T(CBW);	// 118371 cbw ;~ 37EB:0135
cs=0x37eb;eip=0x000136; 	T(ADD(cx, ax));	// 118372 add     cx, ax ;~ 37EB:0136
cs=0x37eb;eip=0x000138; 	X(MOV(*(dw*)(raddr(ds,di+6)), cx));	// 118373 mov     [di+6], cx ;~ 37EB:0138
cs=0x37eb;eip=0x00013b; 	T(LES(bx, *(dw*)(raddr(es,bx+6))));	// 118374 les     bx, es:[bx+6] ;~ 37EB:013B
cs=0x37eb;eip=0x00013f; 	T(CMP(*(raddr(es,bx+5)), 1));	// 118375 cmp     byte ptr es:[bx+5], 1 ;~ 37EB:013F
cs=0x37eb;eip=0x000144; 	R(JNZ(loc_465f8));	// 118376 jnz     short loc_465F8 ;~ 37EB:0144
cs=0x37eb;eip=0x000146; 	T(CMP(*(raddr(es,bx+4)), 1));	// 118377 cmp     byte ptr es:[bx+4], 1 ;~ 37EB:0146
cs=0x37eb;eip=0x00014b; 	R(JNZ(loc_465f8));	// 118378 jnz     short loc_465F8 ;~ 37EB:014B
cs=0x37eb;eip=0x00014d; 	T(CMP(*(raddr(es,bx+6)), 1));	// 118379 cmp     byte ptr es:[bx+6], 1 ;~ 37EB:014D
cs=0x37eb;eip=0x000152; 	R(JNZ(loc_465f8));	// 118380 jnz     short loc_465F8 ;~ 37EB:0152
cs=0x37eb;eip=0x000154; 	X(PUSH(ds));	// 118381 push    ds ;~ 37EB:0154
cs=0x37eb;eip=0x000155; 	T(LDS(ax, *(dw*)(raddr(es,bx+8))));	// 118382 lds     ax, es:[bx+8] ;~ 37EB:0155
cs=0x37eb;eip=0x000159; 	T(MOV(dx, ds));	// 118383 mov     dx, ds ;~ 37EB:0159
cs=0x37eb;eip=0x00015b; 	X(POP(ds));	// 118384 pop     ds ;~ 37EB:015B
cs=0x37eb;eip=0x00015c; 	T(MOV(bx, 1));	// 118385 mov     bx, 1 ;~ 37EB:015C
cs=0x37eb;eip=0x00015f; 	T(di = bx+0x32);	// 118386 lea     di, [bx+32h] ;~ 37EB:015F
cs=0x37eb;eip=0x000162; 	R(CALL(sub_47154,0));	// 118387 call    sub_47154 ;~ 37EB:0162
cs=0x37eb;eip=0x000165; 	R(CALL(sub_46f7a,0));	// 118388 call    sub_46F7A ;~ 37EB:0165
loc_465f8:
	// 10606 
cs=0x37eb;eip=0x000168; 	X(POP(si));	// 118392 pop     si ;~ 37EB:0168
cs=0x37eb;eip=0x000169; 	X(POP(di));	// 118393 pop     di ;~ 37EB:0169
cs=0x37eb;eip=0x00016a; 	X(POP(bp));	// 118394 pop     bp ;~ 37EB:016A
cs=0x37eb;eip=0x00016b; 	R(RETF(0));	// 118395 retf ;~ 37EB:016B
loc_465fc:
	// 10607 
cs=0x37eb;eip=0x00016c; 	T(MOV(al, *(raddr(ss,bp+0x0C))));	// 118399 mov     al, [bp+0Ch] ;~ 37EB:016C
cs=0x37eb;eip=0x00016f; 	X(MOV(*(raddr(ds,di+3)), al));	// 118400 mov     [di+3], al ;~ 37EB:016F
cs=0x37eb;eip=0x000172; 	T(XOR(ah, ah));	// 118401 xor     ah, ah ;~ 37EB:0172
cs=0x37eb;eip=0x000174; 	T(CMP(al, 0x0FF));	// 118402 cmp     al, 0FFh ;~ 37EB:0174
cs=0x37eb;eip=0x000176; 	R(JZ(loc_4661a));	// 118403 jz      short loc_4661A ;~ 37EB:0176
cs=0x37eb;eip=0x000178; 	R(CALL(sub_46b89,0));	// 118404 call    sub_46B89 ;~ 37EB:0178
cs=0x37eb;eip=0x00017b; 	T(MOV(dx, ax));	// 118405 mov     dx, ax ;~ 37EB:017B
cs=0x37eb;eip=0x00017d; 	X(MOV(*(dw*)(raddr(ds,di+4)), dx));	// 118406 mov     [di+4], dx ;~ 37EB:017D
cs=0x37eb;eip=0x000180; 	T(MOV(al, *(raddr(es,bx+0x11))));	// 118407 mov     al, es:[bx+11h] ;~ 37EB:0180
cs=0x37eb;eip=0x000184; 	T(CBW);	// 118408 cbw ;~ 37EB:0184
cs=0x37eb;eip=0x000185; 	T(ADD(dx, ax));	// 118409 add     dx, ax ;~ 37EB:0185
cs=0x37eb;eip=0x000187; 	X(MOV(*(dw*)(raddr(ds,di+6)), dx));	// 118410 mov     [di+6], dx ;~ 37EB:0187
loc_4661a:
	// 10608 
cs=0x37eb;eip=0x00018a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 118413 mov     ax, [bp+6] ;~ 37EB:018A
cs=0x37eb;eip=0x00018d; 	T(DEC(ax));	// 118414 dec     ax ;~ 37EB:018D
cs=0x37eb;eip=0x00018e; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0A))));	// 118415 mov     di, [bp+0Ah] ;~ 37EB:018E
cs=0x37eb;eip=0x000191; 	X(PUSH(ax));	// 118416 push    ax ;~ 37EB:0191
cs=0x37eb;eip=0x000192; 	T(SHL(ax, 1));	// 118417 shl     ax, 1 ;~ 37EB:0192
cs=0x37eb;eip=0x000194; 	T(MOV(si, ax));	// 118418 mov     si, ax ;~ 37EB:0194
cs=0x37eb;eip=0x000196; 	T(MOV(ah, *(raddr(cs,si+0x870))));	// 118419 mov     ah, cs:[si+870h] ;~ 37EB:0196
cs=0x37eb;eip=0x00019b; 	T(ADD(ah, 0x40));	// 118420 add     ah, 40h ; '@' ;~ 37EB:019B
cs=0x37eb;eip=0x00019e; 	T(MOV(al, 0x3F));	// 118421 mov     al, 3Fh ; '?' ;~ 37EB:019E
cs=0x37eb;eip=0x0001a0; 	R(CALL(sub_46c57,0));	// 118422 call    sub_46C57 ;~ 37EB:01A0
cs=0x37eb;eip=0x0001a3; 	X(POP(ax));	// 118423 pop     ax ;~ 37EB:01A3
cs=0x37eb;eip=0x0001a4; 	X(PUSH(ax));	// 118424 push    ax ;~ 37EB:01A4
cs=0x37eb;eip=0x0001a5; 	T(SHL(ax, 1));	// 118425 shl     ax, 1 ;~ 37EB:01A5
cs=0x37eb;eip=0x0001a7; 	T(INC(ax));	// 118426 inc     ax ;~ 37EB:01A7
cs=0x37eb;eip=0x0001a8; 	T(MOV(si, ax));	// 118427 mov     si, ax ;~ 37EB:01A8
cs=0x37eb;eip=0x0001aa; 	T(MOV(ah, *(raddr(cs,si+0x870))));	// 118428 mov     ah, cs:[si+870h] ;~ 37EB:01AA
cs=0x37eb;eip=0x0001af; 	T(ADD(ah, 0x40));	// 118429 add     ah, 40h ; '@' ;~ 37EB:01AF
cs=0x37eb;eip=0x0001b2; 	T(MOV(al, 0x3F));	// 118430 mov     al, 3Fh ; '?' ;~ 37EB:01B2
cs=0x37eb;eip=0x0001b4; 	R(CALL(sub_46c57,0));	// 118431 call    sub_46C57 ;~ 37EB:01B4
cs=0x37eb;eip=0x0001b7; 	X(POP(ax));	// 118432 pop     ax ;~ 37EB:01B7
cs=0x37eb;eip=0x0001b8; 	X(PUSH(ax));	// 118433 push    ax ;~ 37EB:01B8
cs=0x37eb;eip=0x0001b9; 	T(MOV(ah, al));	// 118434 mov     ah, al ;~ 37EB:01B9
cs=0x37eb;eip=0x0001bb; 	T(ADD(ah, 0x0A0));	// 118435 add     ah, 0A0h ; ' ' ;~ 37EB:01BB
cs=0x37eb;eip=0x0001be; 	T(MOV(al, dl));	// 118436 mov     al, dl ;~ 37EB:01BE
cs=0x37eb;eip=0x0001c0; 	R(CALL(sub_46c57,0));	// 118437 call    sub_46C57 ;~ 37EB:01C0
cs=0x37eb;eip=0x0001c3; 	X(POP(ax));	// 118438 pop     ax ;~ 37EB:01C3
cs=0x37eb;eip=0x0001c4; 	X(PUSH(ax));	// 118439 push    ax ;~ 37EB:01C4
cs=0x37eb;eip=0x0001c5; 	T(MOV(ah, al));	// 118440 mov     ah, al ;~ 37EB:01C5
cs=0x37eb;eip=0x0001c7; 	T(ADD(ah, 0x0B0));	// 118441 add     ah, 0B0h ; '°' ;~ 37EB:01C7
cs=0x37eb;eip=0x0001ca; 	T(MOV(al, 0x20));	// 118442 mov     al, 20h ; ' ' ;~ 37EB:01CA
cs=0x37eb;eip=0x0001cc; 	T(OR(al, dh));	// 118443 or      al, dh ;~ 37EB:01CC
cs=0x37eb;eip=0x0001ce; 	R(CALL(sub_46c57,0));	// 118444 call    sub_46C57 ;~ 37EB:01CE
cs=0x37eb;eip=0x0001d1; 	X(POP(ax));	// 118445 pop     ax ;~ 37EB:01D1
cs=0x37eb;eip=0x0001d2; 	T(MOV(cl, 0x7F));	// 118446 mov     cl, 7Fh ;~ 37EB:01D2
cs=0x37eb;eip=0x0001d4; 	T(CMP(*(raddr(es,bx+0x15)), 0));	// 118447 cmp     byte ptr es:[bx+15h], 0 ;~ 37EB:01D4
cs=0x37eb;eip=0x0001d9; 	R(JZ(loc_4666e));	// 118448 jz      short loc_4666E ;~ 37EB:01D9
cs=0x37eb;eip=0x0001db; 	T(MOV(cl, *(raddr(ss,bp+0x0E))));	// 118449 mov     cl, [bp+0Eh] ;~ 37EB:01DB
loc_4666e:
	// 10609 
cs=0x37eb;eip=0x0001de; 	T(MOV(si, ax));	// 118452 mov     si, ax ;~ 37EB:01DE
cs=0x37eb;eip=0x0001e0; 	X(MOV(*(raddr(cs,si+0x974)), cl));	// 118453 mov     cs:[si+974h], cl ;~ 37EB:01E0
cs=0x37eb;eip=0x0001e5; 	T(MOV(ch, *(raddr(ds,di+0x28))));	// 118454 mov     ch, [di+28h] ;~ 37EB:01E5
cs=0x37eb;eip=0x0001e8; 	R(CALL(sub_46bc0,0));	// 118455 call    sub_46BC0 ;~ 37EB:01E8
cs=0x37eb;eip=0x0001eb; 	X(POP(si));	// 118456 pop     si ;~ 37EB:01EB
cs=0x37eb;eip=0x0001ec; 	X(POP(di));	// 118457 pop     di ;~ 37EB:01EC
cs=0x37eb;eip=0x0001ed; 	X(POP(bp));	// 118458 pop     bp ;~ 37EB:01ED
cs=0x37eb;eip=0x0001ee; 	R(RETF(0));	// 118459 retf ;~ 37EB:01EE
loc_4667f:
	// 10610 
cs=0x37eb;eip=0x0001ef; 	X(PUSH(bp));	// 118463 push    bp ;~ 37EB:01EF
cs=0x37eb;eip=0x0001f0; 	T(MOV(bp, sp));	// 118464 mov     bp, sp ;~ 37EB:01F0
cs=0x37eb;eip=0x0001f2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 118465 mov     ax, [bp+6] ;~ 37EB:01F2
cs=0x37eb;eip=0x0001f5; 	T(CMP(ax, 0));	// 118466 cmp     ax, 0 ;~ 37EB:01F5
cs=0x37eb;eip=0x0001f8; 	R(JNZ(loc_4668c));	// 118467 jnz     short loc_4668C ;~ 37EB:01F8
cs=0x37eb;eip=0x0001fa; 	X(POP(bp));	// 118468 pop     bp ;~ 37EB:01FA
cs=0x37eb;eip=0x0001fb; 	R(RETF(0));	// 118469 retf ;~ 37EB:01FB
loc_4668c:
	// 10611 
cs=0x37eb;eip=0x0001fc; 	T(DEC(ax));	// 118473 dec     ax ;~ 37EB:01FC
cs=0x37eb;eip=0x0001fd; 	T(MOV(bx, *(dw*)(raddr(ss,bp+8))));	// 118474 mov     bx, [bp+8] ;~ 37EB:01FD
cs=0x37eb;eip=0x000200; 	T(MOV(dx, *(dw*)(raddr(ds,bx+6))));	// 118475 mov     dx, [bx+6] ;~ 37EB:0200
cs=0x37eb;eip=0x000203; 	X(PUSH(ax));	// 118476 push    ax ;~ 37EB:0203
cs=0x37eb;eip=0x000204; 	T(MOV(ah, al));	// 118477 mov     ah, al ;~ 37EB:0204
cs=0x37eb;eip=0x000206; 	T(ADD(ah, 0x0B0));	// 118478 add     ah, 0B0h ; '°' ;~ 37EB:0206
cs=0x37eb;eip=0x000209; 	T(MOV(al, 0));	// 118479 mov     al, 0 ;~ 37EB:0209
cs=0x37eb;eip=0x00020b; 	T(OR(al, dh));	// 118480 or      al, dh ;~ 37EB:020B
cs=0x37eb;eip=0x00020d; 	R(CALL(sub_46c57,0));	// 118481 call    sub_46C57 ;~ 37EB:020D
cs=0x37eb;eip=0x000210; 	X(POP(ax));	// 118482 pop     ax ;~ 37EB:0210
cs=0x37eb;eip=0x000211; 	X(POP(bp));	// 118483 pop     bp ;~ 37EB:0211
cs=0x37eb;eip=0x000212; 	R(RETF(0));	// 118484 retf ;~ 37EB:0212
loc_466a3:
	// 10612 
cs=0x37eb;eip=0x000213; 	X(PUSH(bp));	// 118488 push    bp ;~ 37EB:0213
cs=0x37eb;eip=0x000214; 	T(MOV(bp, sp));	// 118489 mov     bp, sp ;~ 37EB:0214
cs=0x37eb;eip=0x000216; 	X(PUSH(si));	// 118490 push    si ;~ 37EB:0216
cs=0x37eb;eip=0x000217; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 118491 mov     ax, [bp+6] ;~ 37EB:0217
cs=0x37eb;eip=0x00021a; 	T(CMP(ax, 0));	// 118492 cmp     ax, 0 ;~ 37EB:021A
cs=0x37eb;eip=0x00021d; 	R(JNZ(loc_466b5));	// 118493 jnz     short loc_466B5 ;~ 37EB:021D
cs=0x37eb;eip=0x00021f; 	R(CALL(sub_47154,0));	// 118494 call    sub_47154 ;~ 37EB:021F
cs=0x37eb;eip=0x000222; 	X(POP(si));	// 118495 pop     si ;~ 37EB:0222
cs=0x37eb;eip=0x000223; 	X(POP(bp));	// 118496 pop     bp ;~ 37EB:0223
cs=0x37eb;eip=0x000224; 	R(RETF(0));	// 118497 retf ;~ 37EB:0224
loc_466b5:
	// 10613 
cs=0x37eb;eip=0x000225; 	T(DEC(ax));	// 118501 dec     ax ;~ 37EB:0225
cs=0x37eb;eip=0x000226; 	X(PUSH(ax));	// 118502 push    ax ;~ 37EB:0226
cs=0x37eb;eip=0x000227; 	T(SHL(ax, 1));	// 118503 shl     ax, 1 ;~ 37EB:0227
cs=0x37eb;eip=0x000229; 	T(MOV(si, ax));	// 118504 mov     si, ax ;~ 37EB:0229
cs=0x37eb;eip=0x00022b; 	T(MOV(ah, *(raddr(cs,si+0x870))));	// 118505 mov     ah, cs:[si+870h] ;~ 37EB:022B
cs=0x37eb;eip=0x000230; 	T(ADD(ah, 0x40));	// 118506 add     ah, 40h ; '@' ;~ 37EB:0230
cs=0x37eb;eip=0x000233; 	T(MOV(al, 0x3F));	// 118507 mov     al, 3Fh ; '?' ;~ 37EB:0233
cs=0x37eb;eip=0x000235; 	R(CALL(sub_46c57,0));	// 118508 call    sub_46C57 ;~ 37EB:0235
cs=0x37eb;eip=0x000238; 	X(POP(ax));	// 118509 pop     ax ;~ 37EB:0238
cs=0x37eb;eip=0x000239; 	X(PUSH(ax));	// 118510 push    ax ;~ 37EB:0239
cs=0x37eb;eip=0x00023a; 	T(SHL(ax, 1));	// 118511 shl     ax, 1 ;~ 37EB:023A
cs=0x37eb;eip=0x00023c; 	T(INC(ax));	// 118512 inc     ax ;~ 37EB:023C
cs=0x37eb;eip=0x00023d; 	T(MOV(si, ax));	// 118513 mov     si, ax ;~ 37EB:023D
cs=0x37eb;eip=0x00023f; 	T(MOV(ah, *(raddr(cs,si+0x870))));	// 118514 mov     ah, cs:[si+870h] ;~ 37EB:023F
cs=0x37eb;eip=0x000244; 	T(ADD(ah, 0x40));	// 118515 add     ah, 40h ; '@' ;~ 37EB:0244
cs=0x37eb;eip=0x000247; 	T(MOV(al, 0x3F));	// 118516 mov     al, 3Fh ; '?' ;~ 37EB:0247
cs=0x37eb;eip=0x000249; 	R(CALL(sub_46c57,0));	// 118517 call    sub_46C57 ;~ 37EB:0249
cs=0x37eb;eip=0x00024c; 	X(POP(ax));	// 118518 pop     ax ;~ 37EB:024C
cs=0x37eb;eip=0x00024d; 	X(POP(si));	// 118519 pop     si ;~ 37EB:024D
cs=0x37eb;eip=0x00024e; 	X(POP(bp));	// 118520 pop     bp ;~ 37EB:024E
cs=0x37eb;eip=0x00024f; 	R(RETF(0));	// 118521 retf ;~ 37EB:024F
loc_466e0:
	// 10614 
cs=0x37eb;eip=0x000250; 	X(PUSH(bp));	// 118525 push    bp ;~ 37EB:0250
cs=0x37eb;eip=0x000251; 	T(MOV(bp, sp));	// 118526 mov     bp, sp ;~ 37EB:0251
cs=0x37eb;eip=0x000253; 	X(PUSH(di));	// 118527 push    di ;~ 37EB:0253
cs=0x37eb;eip=0x000254; 	X(PUSH(si));	// 118528 push    si ;~ 37EB:0254
cs=0x37eb;eip=0x000255; 	T(MOV(si, *(dw*)(raddr(ss,bp+8))));	// 118529 mov     si, [bp+8] ;~ 37EB:0255
cs=0x37eb;eip=0x000258; 	T(CMP(*(raddr(ds,si+1)), 0));	// 118530 cmp     byte ptr [si+1], 0 ;~ 37EB:0258
cs=0x37eb;eip=0x00025c; 	R(JNZ(loc_466f2));	// 118531 jnz     short loc_466F2 ;~ 37EB:025C
cs=0x37eb;eip=0x00025e; 	X(POP(si));	// 118532 pop     si ;~ 37EB:025E
cs=0x37eb;eip=0x00025f; 	X(POP(di));	// 118533 pop     di ;~ 37EB:025F
cs=0x37eb;eip=0x000260; 	X(POP(bp));	// 118534 pop     bp ;~ 37EB:0260
cs=0x37eb;eip=0x000261; 	R(RETF(0));	// 118535 retf ;~ 37EB:0261
loc_466f2:
	// 10615 
cs=0x37eb;eip=0x000262; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 118539 mov     ax, [bp+6] ;~ 37EB:0262
cs=0x37eb;eip=0x000265; 	T(CMP(ax, 0));	// 118540 cmp     ax, 0 ;~ 37EB:0265
cs=0x37eb;eip=0x000268; 	R(JNZ(loc_466fe));	// 118541 jnz     short loc_466FE ;~ 37EB:0268
cs=0x37eb;eip=0x00026a; 	X(POP(si));	// 118542 pop     si ;~ 37EB:026A
cs=0x37eb;eip=0x00026b; 	X(POP(di));	// 118543 pop     di ;~ 37EB:026B
cs=0x37eb;eip=0x00026c; 	X(POP(bp));	// 118544 pop     bp ;~ 37EB:026C
cs=0x37eb;eip=0x00026d; 	R(RETF(0));	// 118545 retf ;~ 37EB:026D
loc_466fe:
	// 10616 
cs=0x37eb;eip=0x00026e; 	T(DEC(ax));	// 118549 dec     ax ;~ 37EB:026E
cs=0x37eb;eip=0x00026f; 	T(LES(bx, *(dw*)(raddr(ds,si+0x10))));	// 118550 les     bx, [si+10h] ;~ 37EB:026F
cs=0x37eb;eip=0x000272; 	T(MOV(cl, *(raddr(ss,bp+0x0A))));	// 118551 mov     cl, [bp+0Ah] ;~ 37EB:0272
cs=0x37eb;eip=0x000275; 	T(XOR(ch, ch));	// 118552 xor     ch, ch ;~ 37EB:0275
cs=0x37eb;eip=0x000277; 	T(MOV(dl, *(raddr(ss,bp+0x0C))));	// 118553 mov     dl, [bp+0Ch] ;~ 37EB:0277
cs=0x37eb;eip=0x00027a; 	T(XOR(dh, dh));	// 118554 xor     dh, dh ;~ 37EB:027A
cs=0x37eb;eip=0x00027c; 	T(CMP(cx, 1));	// 118555 cmp     cx, 1 ;~ 37EB:027C
cs=0x37eb;eip=0x00027f; 	R(JNZ(loc_4671c));	// 118556 jnz     short loc_4671C ;~ 37EB:027F
cs=0x37eb;eip=0x000281; 	T(MOV(cl, *(raddr(es,bx+0x16))));	// 118557 mov     cl, es:[bx+16h] ;~ 37EB:0281
cs=0x37eb;eip=0x000285; 	R(CALL(sub_46b5b,0));	// 118558 call    sub_46B5B ;~ 37EB:0285
cs=0x37eb;eip=0x000288; 	X(POP(si));	// 118559 pop     si ;~ 37EB:0288
cs=0x37eb;eip=0x000289; 	X(POP(di));	// 118560 pop     di ;~ 37EB:0289
cs=0x37eb;eip=0x00028a; 	X(POP(bp));	// 118561 pop     bp ;~ 37EB:028A
cs=0x37eb;eip=0x00028b; 	R(RETF(0));	// 118562 retf ;~ 37EB:028B
loc_4671c:
	// 10617 
cs=0x37eb;eip=0x00028c; 	T(CMP(cx, 7));	// 118566 cmp     cx, 7 ;~ 37EB:028C
cs=0x37eb;eip=0x00028f; 	R(JNZ(loc_46732));	// 118567 jnz     short loc_46732 ;~ 37EB:028F
cs=0x37eb;eip=0x000291; 	T(MOV(di, ax));	// 118568 mov     di, ax ;~ 37EB:0291
cs=0x37eb;eip=0x000293; 	T(MOV(cl, *(raddr(cs,di+0x974))));	// 118569 mov     cl, cs:[di+974h] ;~ 37EB:0293
cs=0x37eb;eip=0x000298; 	T(MOV(ch, *(raddr(ss,bp+0x0C))));	// 118570 mov     ch, [bp+0Ch] ;~ 37EB:0298
cs=0x37eb;eip=0x00029b; 	R(CALL(sub_46bc0,0));	// 118571 call    sub_46BC0 ;~ 37EB:029B
cs=0x37eb;eip=0x00029e; 	X(POP(si));	// 118572 pop     si ;~ 37EB:029E
cs=0x37eb;eip=0x00029f; 	X(POP(di));	// 118573 pop     di ;~ 37EB:029F
cs=0x37eb;eip=0x0002a0; 	X(POP(bp));	// 118574 pop     bp ;~ 37EB:02A0
cs=0x37eb;eip=0x0002a1; 	R(RETF(0));	// 118575 retf ;~ 37EB:02A1
loc_46732:
	// 10618 
cs=0x37eb;eip=0x0002a2; 	T(CMP(cx, 0x0B));	// 118579 cmp     cx, 0Bh ;~ 37EB:02A2
cs=0x37eb;eip=0x0002a5; 	R(JNZ(loc_46742));	// 118580 jnz     short loc_46742 ;~ 37EB:02A5
cs=0x37eb;eip=0x0002a7; 	T(MOV(cl, *(raddr(es,bx+0x17))));	// 118581 mov     cl, es:[bx+17h] ;~ 37EB:02A7
cs=0x37eb;eip=0x0002ab; 	R(CALL(sub_46b5b,0));	// 118582 call    sub_46B5B ;~ 37EB:02AB
cs=0x37eb;eip=0x0002ae; 	X(POP(si));	// 118583 pop     si ;~ 37EB:02AE
cs=0x37eb;eip=0x0002af; 	X(POP(di));	// 118584 pop     di ;~ 37EB:02AF
cs=0x37eb;eip=0x0002b0; 	X(POP(bp));	// 118585 pop     bp ;~ 37EB:02B0
cs=0x37eb;eip=0x0002b1; 	R(RETF(0));	// 118586 retf ;~ 37EB:02B1
loc_46742:
	// 10619 
cs=0x37eb;eip=0x0002b2; 	T(CMP(cx, 0x0C));	// 118590 cmp     cx, 0Ch ;~ 37EB:02B2
cs=0x37eb;eip=0x0002b5; 	R(JNZ(loc_46752));	// 118591 jnz     short loc_46752 ;~ 37EB:02B5
cs=0x37eb;eip=0x0002b7; 	T(MOV(cl, *(raddr(es,bx+0x18))));	// 118592 mov     cl, es:[bx+18h] ;~ 37EB:02B7
cs=0x37eb;eip=0x0002bb; 	R(CALL(sub_46b5b,0));	// 118593 call    sub_46B5B ;~ 37EB:02BB
cs=0x37eb;eip=0x0002be; 	X(POP(si));	// 118594 pop     si ;~ 37EB:02BE
cs=0x37eb;eip=0x0002bf; 	X(POP(di));	// 118595 pop     di ;~ 37EB:02BF
cs=0x37eb;eip=0x0002c0; 	X(POP(bp));	// 118596 pop     bp ;~ 37EB:02C0
cs=0x37eb;eip=0x0002c1; 	R(RETF(0));	// 118597 retf ;~ 37EB:02C1
loc_46752:
	// 10620 
cs=0x37eb;eip=0x0002c2; 	X(POP(si));	// 118601 pop     si ;~ 37EB:02C2
cs=0x37eb;eip=0x0002c3; 	X(POP(di));	// 118602 pop     di ;~ 37EB:02C3
cs=0x37eb;eip=0x0002c4; 	X(POP(bp));	// 118603 pop     bp ;~ 37EB:02C4
cs=0x37eb;eip=0x0002c5; 	R(RETF(0));	// 118604 retf ;~ 37EB:02C5
loc_46756:
	// 10621 
cs=0x37eb;eip=0x0002c6; 	X(PUSH(bp));	// 118608 push    bp ;~ 37EB:02C6
cs=0x37eb;eip=0x0002c7; 	T(MOV(bp, sp));	// 118609 mov     bp, sp ;~ 37EB:02C7
cs=0x37eb;eip=0x0002c9; 	X(PUSH(di));	// 118610 push    di ;~ 37EB:02C9
cs=0x37eb;eip=0x0002ca; 	X(PUSH(si));	// 118611 push    si ;~ 37EB:02CA
cs=0x37eb;eip=0x0002cb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 118612 mov     ax, [bp+6] ;~ 37EB:02CB
cs=0x37eb;eip=0x0002ce; 	T(CMP(ax, 0));	// 118613 cmp     ax, 0 ;~ 37EB:02CE
cs=0x37eb;eip=0x0002d1; 	R(JNZ(loc_46767));	// 118614 jnz     short loc_46767 ;~ 37EB:02D1
cs=0x37eb;eip=0x0002d3; 	X(POP(si));	// 118615 pop     si ;~ 37EB:02D3
cs=0x37eb;eip=0x0002d4; 	X(POP(di));	// 118616 pop     di ;~ 37EB:02D4
cs=0x37eb;eip=0x0002d5; 	X(POP(bp));	// 118617 pop     bp ;~ 37EB:02D5
cs=0x37eb;eip=0x0002d6; 	R(RETF(0));	// 118618 retf ;~ 37EB:02D6
loc_46767:
	// 10622 
cs=0x37eb;eip=0x0002d7; 	T(DEC(ax));	// 118622 dec     ax ;~ 37EB:02D7
cs=0x37eb;eip=0x0002d8; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 118623 mov     di, [bp+8] ;~ 37EB:02D8
cs=0x37eb;eip=0x0002db; 	T(MOV(si, *(dw*)(raddr(ss,bp+0x0A))));	// 118624 mov     si, [bp+0Ah] ;~ 37EB:02DB
cs=0x37eb;eip=0x0002de; 	T(LES(bx, *(dw*)(raddr(ds,di+0x10))));	// 118625 les     bx, [di+10h] ;~ 37EB:02DE
cs=0x37eb;eip=0x0002e1; 	T(CMP(*(raddr(ds,di+1)), 0));	// 118626 cmp     byte ptr [di+1], 0 ;~ 37EB:02E1
cs=0x37eb;eip=0x0002e5; 	R(JNZ(loc_4677b));	// 118627 jnz     short loc_4677B ;~ 37EB:02E5
cs=0x37eb;eip=0x0002e7; 	X(POP(si));	// 118628 pop     si ;~ 37EB:02E7
cs=0x37eb;eip=0x0002e8; 	X(POP(di));	// 118629 pop     di ;~ 37EB:02E8
cs=0x37eb;eip=0x0002e9; 	X(POP(bp));	// 118630 pop     bp ;~ 37EB:02E9
cs=0x37eb;eip=0x0002ea; 	R(RETF(0));	// 118631 retf ;~ 37EB:02EA
loc_4677b:
	// 10623 
cs=0x37eb;eip=0x0002eb; 	T(MOV(dx, *(dw*)(raddr(ds,di+4))));	// 118635 mov     dx, [di+4] ;~ 37EB:02EB
cs=0x37eb;eip=0x0002ee; 	T(CMP(*(raddr(es,bx+0x35)), 0x91));	// 118636 cmp     byte ptr es:[bx+35h], 91h ; '‘' ;~ 37EB:02EE
cs=0x37eb;eip=0x0002f3; 	R(JNZ(loc_46794));	// 118637 jnz     short loc_46794 ;~ 37EB:02F3
cs=0x37eb;eip=0x0002f5; 	X(PUSH(ax));	// 118638 push    ax ;~ 37EB:02F5
cs=0x37eb;eip=0x0002f6; 	T(MOV(al, *(raddr(ds,di+3))));	// 118639 mov     al, [di+3] ;~ 37EB:02F6
cs=0x37eb;eip=0x0002f9; 	T(ADD(al, *(raddr(ds,di+0x22))));	// 118640 add     al, [di+22h] ;~ 37EB:02F9
cs=0x37eb;eip=0x0002fc; 	T(XOR(ah, ah));	// 118641 xor     ah, ah ;~ 37EB:02FC
cs=0x37eb;eip=0x0002fe; 	R(CALL(sub_46b89,0));	// 118642 call    sub_46B89 ;~ 37EB:02FE
cs=0x37eb;eip=0x000301; 	T(MOV(dx, ax));	// 118643 mov     dx, ax ;~ 37EB:0301
cs=0x37eb;eip=0x000303; 	X(POP(ax));	// 118644 pop     ax ;~ 37EB:0303
loc_46794:
	// 10624 
cs=0x37eb;eip=0x000304; 	T(CMP(*(raddr(es,bx+0x28)), 0x90));	// 118647 cmp     byte ptr es:[bx+28h], 90h ; '' ;~ 37EB:0304
cs=0x37eb;eip=0x000309; 	R(JNZ(loc_4679e));	// 118648 jnz     short loc_4679E ;~ 37EB:0309
cs=0x37eb;eip=0x00030b; 	T(ADD(dx, *(dw*)(raddr(ds,di+0x1C))));	// 118649 add     dx, [di+1Ch] ;~ 37EB:030B
loc_4679e:
	// 10625 
cs=0x37eb;eip=0x00030e; 	T(CMP(*(raddr(es,bx+0x19)), 0x90));	// 118652 cmp     byte ptr es:[bx+19h], 90h ; '' ;~ 37EB:030E
cs=0x37eb;eip=0x000313; 	R(JNZ(loc_467a8));	// 118653 jnz     short loc_467A8 ;~ 37EB:0313
cs=0x37eb;eip=0x000315; 	T(ADD(dx, *(dw*)(raddr(ds,di+0x14))));	// 118654 add     dx, [di+14h] ;~ 37EB:0315
loc_467a8:
	// 10626 
cs=0x37eb;eip=0x000318; 	T(MOV(cx, *(dw*)(raddr(ds,si+0x26))));	// 118657 mov     cx, [si+26h] ;~ 37EB:0318
cs=0x37eb;eip=0x00031b; 	T(CMP(cx, 0));	// 118658 cmp     cx, 0 ;~ 37EB:031B
cs=0x37eb;eip=0x00031e; 	R(JLE(loc_467d1));	// 118659 jle     short loc_467D1 ;~ 37EB:031E
cs=0x37eb;eip=0x000320; 	X(PUSH(ax));	// 118660 push    ax ;~ 37EB:0320
cs=0x37eb;eip=0x000321; 	T(MOV(al, *(raddr(ds,di+3))));	// 118661 mov     al, [di+3] ;~ 37EB:0321
cs=0x37eb;eip=0x000324; 	T(MOV(ah, *(raddr(es,bx+0x12))));	// 118662 mov     ah, es:[bx+12h] ;~ 37EB:0324
cs=0x37eb;eip=0x000328; 	R(CALL(sub_46b89,0));	// 118663 call    sub_46B89 ;~ 37EB:0328
cs=0x37eb;eip=0x00032b; 	T(SUB(ax, dx));	// 118664 sub     ax, dx ;~ 37EB:032B
cs=0x37eb;eip=0x00032d; 	X(PUSH(dx));	// 118665 push    dx ;~ 37EB:032D
cs=0x37eb;eip=0x00032e; 	T(IMUL1_2(cx));	// 118666 imul    cx ;~ 37EB:032E
cs=0x37eb;eip=0x000330; 	T(MOV(cx, 5));	// 118667 mov     cx, 5 ;~ 37EB:0330
loc_467c3:
	// 10627 
cs=0x37eb;eip=0x000333; 	T(SAR(dx, 1));	// 118670 sar     dx, 1 ;~ 37EB:0333
cs=0x37eb;eip=0x000335; 	T(RCR(ax, 1));	// 118671 rcr     ax, 1 ;~ 37EB:0335
cs=0x37eb;eip=0x000337; 	R(LOOP(loc_467c3));	// 118672 loop    loc_467C3 ;~ 37EB:0337
cs=0x37eb;eip=0x000339; 	T(MOV(al, ah));	// 118673 mov     al, ah ;~ 37EB:0339
cs=0x37eb;eip=0x00033b; 	T(MOV(ah, dl));	// 118674 mov     ah, dl ;~ 37EB:033B
cs=0x37eb;eip=0x00033d; 	X(POP(dx));	// 118675 pop     dx ;~ 37EB:033D
cs=0x37eb;eip=0x00033e; 	T(ADD(dx, ax));	// 118676 add     dx, ax ;~ 37EB:033E
cs=0x37eb;eip=0x000340; 	X(POP(ax));	// 118677 pop     ax ;~ 37EB:0340
loc_467d1:
	// 10628 
cs=0x37eb;eip=0x000341; 	T(CMP(cx, 0));	// 118680 cmp     cx, 0 ;~ 37EB:0341
cs=0x37eb;eip=0x000344; 	R(JGE(loc_467fd));	// 118681 jge     short loc_467FD ;~ 37EB:0344
cs=0x37eb;eip=0x000346; 	T(NEG(cx));	// 118682 neg     cx ;~ 37EB:0346
cs=0x37eb;eip=0x000348; 	X(PUSH(ax));	// 118683 push    ax ;~ 37EB:0348
cs=0x37eb;eip=0x000349; 	T(MOV(al, *(raddr(ds,di+3))));	// 118684 mov     al, [di+3] ;~ 37EB:0349
cs=0x37eb;eip=0x00034c; 	T(MOV(ah, *(raddr(es,bx+0x12))));	// 118685 mov     ah, es:[bx+12h] ;~ 37EB:034C
cs=0x37eb;eip=0x000350; 	T(NEG(ah));	// 118686 neg     ah ;~ 37EB:0350
cs=0x37eb;eip=0x000352; 	R(CALL(sub_46b89,0));	// 118687 call    sub_46B89 ;~ 37EB:0352
cs=0x37eb;eip=0x000355; 	T(SUB(ax, dx));	// 118688 sub     ax, dx ;~ 37EB:0355
cs=0x37eb;eip=0x000357; 	T(NEG(ax));	// 118689 neg     ax ;~ 37EB:0357
cs=0x37eb;eip=0x000359; 	X(PUSH(dx));	// 118690 push    dx ;~ 37EB:0359
cs=0x37eb;eip=0x00035a; 	T(IMUL1_2(cx));	// 118691 imul    cx ;~ 37EB:035A
cs=0x37eb;eip=0x00035c; 	T(MOV(cx, 5));	// 118692 mov     cx, 5 ;~ 37EB:035C
loc_467ef:
	// 10629 
cs=0x37eb;eip=0x00035f; 	T(SAR(dx, 1));	// 118695 sar     dx, 1 ;~ 37EB:035F
cs=0x37eb;eip=0x000361; 	T(RCR(ax, 1));	// 118696 rcr     ax, 1 ;~ 37EB:0361
cs=0x37eb;eip=0x000363; 	R(LOOP(loc_467ef));	// 118697 loop    loc_467EF ;~ 37EB:0363
cs=0x37eb;eip=0x000365; 	T(MOV(al, ah));	// 118698 mov     al, ah ;~ 37EB:0365
cs=0x37eb;eip=0x000367; 	T(MOV(ah, dl));	// 118699 mov     ah, dl ;~ 37EB:0367
cs=0x37eb;eip=0x000369; 	X(POP(dx));	// 118700 pop     dx ;~ 37EB:0369
cs=0x37eb;eip=0x00036a; 	T(SUB(dx, ax));	// 118701 sub     dx, ax ;~ 37EB:036A
cs=0x37eb;eip=0x00036c; 	X(POP(ax));	// 118702 pop     ax ;~ 37EB:036C
loc_467fd:
	// 10630 
cs=0x37eb;eip=0x00036d; 	X(PUSH(ax));	// 118705 push    ax ;~ 37EB:036D
cs=0x37eb;eip=0x00036e; 	T(MOV(al, *(raddr(es,bx+0x11))));	// 118706 mov     al, es:[bx+11h] ;~ 37EB:036E
cs=0x37eb;eip=0x000372; 	T(CBW);	// 118707 cbw ;~ 37EB:0372
cs=0x37eb;eip=0x000373; 	T(ADD(dx, ax));	// 118708 add     dx, ax ;~ 37EB:0373
cs=0x37eb;eip=0x000375; 	X(MOV(*(dw*)(raddr(ds,di+6)), dx));	// 118709 mov     [di+6], dx ;~ 37EB:0375
cs=0x37eb;eip=0x000378; 	X(POP(ax));	// 118710 pop     ax ;~ 37EB:0378
cs=0x37eb;eip=0x000379; 	X(PUSH(ax));	// 118711 push    ax ;~ 37EB:0379
cs=0x37eb;eip=0x00037a; 	T(MOV(ah, al));	// 118712 mov     ah, al ;~ 37EB:037A
cs=0x37eb;eip=0x00037c; 	T(ADD(ah, 0x0A0));	// 118713 add     ah, 0A0h ; ' ' ;~ 37EB:037C
cs=0x37eb;eip=0x00037f; 	T(MOV(al, dl));	// 118714 mov     al, dl ;~ 37EB:037F
cs=0x37eb;eip=0x000381; 	R(CALL(sub_46c57,0));	// 118715 call    sub_46C57 ;~ 37EB:0381
cs=0x37eb;eip=0x000384; 	X(POP(ax));	// 118716 pop     ax ;~ 37EB:0384
cs=0x37eb;eip=0x000385; 	X(PUSH(ax));	// 118717 push    ax ;~ 37EB:0385
cs=0x37eb;eip=0x000386; 	T(MOV(ah, al));	// 118718 mov     ah, al ;~ 37EB:0386
cs=0x37eb;eip=0x000388; 	T(ADD(ah, 0x0B0));	// 118719 add     ah, 0B0h ; '°' ;~ 37EB:0388
cs=0x37eb;eip=0x00038b; 	T(MOV(al, 2));	// 118720 mov     al, 2 ;~ 37EB:038B
cs=0x37eb;eip=0x00038d; 	T(SUB(al, *(raddr(ds,di+1))));	// 118721 sub     al, [di+1] ;~ 37EB:038D
cs=0x37eb;eip=0x000390; 	T(MOV(cl, 5));	// 118722 mov     cl, 5 ;~ 37EB:0390
cs=0x37eb;eip=0x000392; 	T(SHL(al, cl));	// 118723 shl     al, cl ;~ 37EB:0392
cs=0x37eb;eip=0x000394; 	T(OR(al, dh));	// 118724 or      al, dh ;~ 37EB:0394
cs=0x37eb;eip=0x000396; 	R(CALL(sub_46c57,0));	// 118725 call    sub_46C57 ;~ 37EB:0396
cs=0x37eb;eip=0x000399; 	X(POP(ax));	// 118726 pop     ax ;~ 37EB:0399
cs=0x37eb;eip=0x00039a; 	T(XOR(cx, cx));	// 118727 xor     cx, cx ;~ 37EB:039A
cs=0x37eb;eip=0x00039c; 	T(XOR(dx, dx));	// 118728 xor     dx, dx ;~ 37EB:039C
cs=0x37eb;eip=0x00039e; 	T(MOV(cl, *(raddr(es,bx+0x35))));	// 118729 mov     cl, es:[bx+35h] ;~ 37EB:039E
cs=0x37eb;eip=0x0003a2; 	T(MOV(dl, *(raddr(ds,di+0x22))));	// 118730 mov     dl, [di+22h] ;~ 37EB:03A2
cs=0x37eb;eip=0x0003a5; 	R(CALL(sub_46b5b,0));	// 118731 call    sub_46B5B ;~ 37EB:03A5
cs=0x37eb;eip=0x0003a8; 	T(MOV(cl, *(raddr(es,bx+0x28))));	// 118732 mov     cl, es:[bx+28h] ;~ 37EB:03A8
cs=0x37eb;eip=0x0003ac; 	T(MOV(dx, *(dw*)(raddr(ds,di+0x1C))));	// 118733 mov     dx, [di+1Ch] ;~ 37EB:03AC
cs=0x37eb;eip=0x0003af; 	R(CALL(sub_46b5b,0));	// 118734 call    sub_46B5B ;~ 37EB:03AF
cs=0x37eb;eip=0x0003b2; 	T(MOV(cl, *(raddr(es,bx+0x19))));	// 118735 mov     cl, es:[bx+19h] ;~ 37EB:03B2
cs=0x37eb;eip=0x0003b6; 	T(MOV(dx, *(dw*)(raddr(ds,di+0x14))));	// 118736 mov     dx, [di+14h] ;~ 37EB:03B6
cs=0x37eb;eip=0x0003b9; 	R(CALL(sub_46b5b,0));	// 118737 call    sub_46B5B ;~ 37EB:03B9
cs=0x37eb;eip=0x0003bc; 	X(POP(si));	// 118738 pop     si ;~ 37EB:03BC
cs=0x37eb;eip=0x0003bd; 	X(POP(di));	// 118739 pop     di ;~ 37EB:03BD
cs=0x37eb;eip=0x0003be; 	X(POP(bp));	// 118740 pop     bp ;~ 37EB:03BE
cs=0x37eb;eip=0x0003bf; 	R(RETF(0));	// 118741 retf ;~ 37EB:03BF
loc_46850:
	// 10631 
cs=0x37eb;eip=0x0003c0; 	X(PUSH(bp));	// 118745 push    bp ;~ 37EB:03C0
cs=0x37eb;eip=0x0003c1; 	T(MOV(bp, sp));	// 118746 mov     bp, sp ;~ 37EB:03C1
cs=0x37eb;eip=0x0003c3; 	X(PUSH(di));	// 118747 push    di ;~ 37EB:03C3
cs=0x37eb;eip=0x0003c4; 	X(PUSH(si));	// 118748 push    si ;~ 37EB:03C4
cs=0x37eb;eip=0x0003c5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 118749 mov     ax, [bp+6] ;~ 37EB:03C5
cs=0x37eb;eip=0x0003c8; 	T(CMP(ax, 0));	// 118750 cmp     ax, 0 ;~ 37EB:03C8
cs=0x37eb;eip=0x0003cb; 	R(JNZ(loc_46861));	// 118751 jnz     short loc_46861 ;~ 37EB:03CB
cs=0x37eb;eip=0x0003cd; 	X(POP(si));	// 118752 pop     si ;~ 37EB:03CD
cs=0x37eb;eip=0x0003ce; 	X(POP(di));	// 118753 pop     di ;~ 37EB:03CE
cs=0x37eb;eip=0x0003cf; 	X(POP(bp));	// 118754 pop     bp ;~ 37EB:03CF
cs=0x37eb;eip=0x0003d0; 	R(RETF(0));	// 118755 retf ;~ 37EB:03D0
loc_46861:
	// 10632 
cs=0x37eb;eip=0x0003d1; 	T(DEC(ax));	// 118759 dec     ax ;~ 37EB:03D1
cs=0x37eb;eip=0x0003d2; 	T(MOV(si, *(dw*)(raddr(ss,bp+8))));	// 118760 mov     si, [bp+8] ;~ 37EB:03D2
cs=0x37eb;eip=0x0003d5; 	T(LES(bx, *(dw*)(raddr(ds,si+0x10))));	// 118761 les     bx, [si+10h] ;~ 37EB:03D5
cs=0x37eb;eip=0x0003d8; 	T(MOV(di, ax));	// 118762 mov     di, ax ;~ 37EB:03D8
cs=0x37eb;eip=0x0003da; 	T(MOV(cl, *(raddr(cs,di+0x974))));	// 118763 mov     cl, cs:[di+974h] ;~ 37EB:03DA
cs=0x37eb;eip=0x0003df; 	T(MOV(ch, *(raddr(ss,bp+0x0A))));	// 118764 mov     ch, [bp+0Ah] ;~ 37EB:03DF
cs=0x37eb;eip=0x0003e2; 	R(CALL(sub_46bc0,0));	// 118765 call    sub_46BC0 ;~ 37EB:03E2
cs=0x37eb;eip=0x0003e5; 	X(POP(si));	// 118766 pop     si ;~ 37EB:03E5
cs=0x37eb;eip=0x0003e6; 	X(POP(di));	// 118767 pop     di ;~ 37EB:03E6
cs=0x37eb;eip=0x0003e7; 	X(POP(bp));	// 118768 pop     bp ;~ 37EB:03E7
cs=0x37eb;eip=0x0003e8; 	R(RETF(0));	// 118769 retf ;~ 37EB:03E8
loc_46879:
	// 10633 
cs=0x37eb;eip=0x0003e9; 	X(PUSH(bp));	// 118773 push    bp ;~ 37EB:03E9
cs=0x37eb;eip=0x0003ea; 	T(MOV(bp, sp));	// 118774 mov     bp, sp ;~ 37EB:03EA
cs=0x37eb;eip=0x0003ec; 	T(MOV(al, *(raddr(ss,bp+8))));	// 118775 mov     al, [bp+8] ;~ 37EB:03EC
cs=0x37eb;eip=0x0003ef; 	T(XOR(ah, ah));	// 118776 xor     ah, ah ;~ 37EB:03EF
cs=0x37eb;eip=0x0003f1; 	R(CALL(sub_46b89,0));	// 118777 call    sub_46B89 ;~ 37EB:03F1
cs=0x37eb;eip=0x0003f4; 	T(MOV(dx, ax));	// 118778 mov     dx, ax ;~ 37EB:03F4
cs=0x37eb;eip=0x0003f6; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x0A))));	// 118779 mov     cx, [bp+0Ah] ;~ 37EB:03F6
cs=0x37eb;eip=0x0003f9; 	T(CMP(cx, 0));	// 118780 cmp     cx, 0 ;~ 37EB:03F9
cs=0x37eb;eip=0x0003fc; 	R(JLE(loc_468ac));	// 118781 jle     short loc_468AC ;~ 37EB:03FC
cs=0x37eb;eip=0x0003fe; 	T(MOV(al, *(raddr(ss,bp+8))));	// 118782 mov     al, [bp+8] ;~ 37EB:03FE
cs=0x37eb;eip=0x000401; 	T(MOV(ah, *(raddr(ss,bp+0x0C))));	// 118783 mov     ah, [bp+0Ch] ;~ 37EB:0401
cs=0x37eb;eip=0x000404; 	R(CALL(sub_46b89,0));	// 118784 call    sub_46B89 ;~ 37EB:0404
cs=0x37eb;eip=0x000407; 	T(SUB(ax, dx));	// 118785 sub     ax, dx ;~ 37EB:0407
cs=0x37eb;eip=0x000409; 	X(PUSH(dx));	// 118786 push    dx ;~ 37EB:0409
cs=0x37eb;eip=0x00040a; 	T(IMUL1_2(cx));	// 118787 imul    cx ;~ 37EB:040A
cs=0x37eb;eip=0x00040c; 	T(MOV(cx, 5));	// 118788 mov     cx, 5 ;~ 37EB:040C
loc_4689f:
	// 10634 
cs=0x37eb;eip=0x00040f; 	T(SAR(dx, 1));	// 118791 sar     dx, 1 ;~ 37EB:040F
cs=0x37eb;eip=0x000411; 	T(RCR(ax, 1));	// 118792 rcr     ax, 1 ;~ 37EB:0411
cs=0x37eb;eip=0x000413; 	R(LOOP(loc_4689f));	// 118793 loop    loc_4689F ;~ 37EB:0413
cs=0x37eb;eip=0x000415; 	T(MOV(al, ah));	// 118794 mov     al, ah ;~ 37EB:0415
cs=0x37eb;eip=0x000417; 	T(MOV(ah, dl));	// 118795 mov     ah, dl ;~ 37EB:0417
cs=0x37eb;eip=0x000419; 	X(POP(dx));	// 118796 pop     dx ;~ 37EB:0419
cs=0x37eb;eip=0x00041a; 	T(ADD(dx, ax));	// 118797 add     dx, ax ;~ 37EB:041A
loc_468ac:
	// 10635 
cs=0x37eb;eip=0x00041c; 	T(CMP(cx, 0));	// 118800 cmp     cx, 0 ;~ 37EB:041C
cs=0x37eb;eip=0x00041f; 	R(JGE(loc_468d5));	// 118801 jge     short loc_468D5 ;~ 37EB:041F
cs=0x37eb;eip=0x000421; 	T(NEG(cx));	// 118802 neg     cx ;~ 37EB:0421
cs=0x37eb;eip=0x000423; 	T(MOV(al, *(raddr(ss,bp+8))));	// 118803 mov     al, [bp+8] ;~ 37EB:0423
cs=0x37eb;eip=0x000426; 	T(MOV(ah, *(raddr(ss,bp+0x0C))));	// 118804 mov     ah, [bp+0Ch] ;~ 37EB:0426
cs=0x37eb;eip=0x000429; 	T(NEG(ah));	// 118805 neg     ah ;~ 37EB:0429
cs=0x37eb;eip=0x00042b; 	R(CALL(sub_46b89,0));	// 118806 call    sub_46B89 ;~ 37EB:042B
cs=0x37eb;eip=0x00042e; 	T(SUB(ax, dx));	// 118807 sub     ax, dx ;~ 37EB:042E
cs=0x37eb;eip=0x000430; 	T(NEG(ax));	// 118808 neg     ax ;~ 37EB:0430
cs=0x37eb;eip=0x000432; 	X(PUSH(dx));	// 118809 push    dx ;~ 37EB:0432
cs=0x37eb;eip=0x000433; 	T(IMUL1_2(cx));	// 118810 imul    cx ;~ 37EB:0433
cs=0x37eb;eip=0x000435; 	T(MOV(cx, 5));	// 118811 mov     cx, 5 ;~ 37EB:0435
loc_468c8:
	// 10636 
cs=0x37eb;eip=0x000438; 	T(SAR(dx, 1));	// 118814 sar     dx, 1 ;~ 37EB:0438
cs=0x37eb;eip=0x00043a; 	T(RCR(ax, 1));	// 118815 rcr     ax, 1 ;~ 37EB:043A
cs=0x37eb;eip=0x00043c; 	R(LOOP(loc_468c8));	// 118816 loop    loc_468C8 ;~ 37EB:043C
cs=0x37eb;eip=0x00043e; 	T(MOV(al, ah));	// 118817 mov     al, ah ;~ 37EB:043E
cs=0x37eb;eip=0x000440; 	T(MOV(ah, dl));	// 118818 mov     ah, dl ;~ 37EB:0440
cs=0x37eb;eip=0x000442; 	X(POP(dx));	// 118819 pop     dx ;~ 37EB:0442
cs=0x37eb;eip=0x000443; 	T(SUB(dx, ax));	// 118820 sub     dx, ax ;~ 37EB:0443
loc_468d5:
	// 10637 
cs=0x37eb;eip=0x000445; 	T(MOV(ax, dx));	// 118823 mov     ax, dx ;~ 37EB:0445
cs=0x37eb;eip=0x000447; 	X(POP(bp));	// 118824 pop     bp ;~ 37EB:0447
cs=0x37eb;eip=0x000448; 	R(RETF(0));	// 118825 retf ;~ 37EB:0448
loc_468d9:
	// 10638 
cs=0x37eb;eip=0x000449; 	X(PUSH(bp));	// 118829 push    bp ;~ 37EB:0449
cs=0x37eb;eip=0x00044a; 	T(MOV(bp, sp));	// 118830 mov     bp, sp ;~ 37EB:044A
cs=0x37eb;eip=0x00044c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+8))));	// 118831 mov     bx, [bp+8] ;~ 37EB:044C
cs=0x37eb;eip=0x00044f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 118832 mov     ax, [bp+0Ah] ;~ 37EB:044F
cs=0x37eb;eip=0x000452; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 118833 mov     [bx+4], ax ;~ 37EB:0452
cs=0x37eb;eip=0x000455; 	X(POP(bp));	// 118834 pop     bp ;~ 37EB:0455
cs=0x37eb;eip=0x000456; 	R(RETF(0));	// 118835 retf ;~ 37EB:0456
loc_468e7:
	// 10639 
cs=0x37eb;eip=0x000457; 	X(PUSH(bp));	// 118839 push    bp ;~ 37EB:0457
cs=0x37eb;eip=0x000458; 	T(MOV(bp, sp));	// 118840 mov     bp, sp ;~ 37EB:0458
cs=0x37eb;eip=0x00045a; 	X(PUSH(di));	// 118841 push    di ;~ 37EB:045A
cs=0x37eb;eip=0x00045b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 118842 mov     ax, [bp+6] ;~ 37EB:045B
cs=0x37eb;eip=0x00045e; 	T(CMP(ax, 0));	// 118843 cmp     ax, 0 ;~ 37EB:045E
cs=0x37eb;eip=0x000461; 	R(JNZ(loc_46922));	// 118844 jnz     short loc_46922 ;~ 37EB:0461
cs=0x37eb;eip=0x000463; 	T(LES(bx, *(dw*)(raddr(ss,bp+8))));	// 118845 les     bx, [bp+8] ;~ 37EB:0463
cs=0x37eb;eip=0x000466; 	T(CMP(*(raddr(es,bx+5)), 1));	// 118846 cmp     byte ptr es:[bx+5], 1 ;~ 37EB:0466
cs=0x37eb;eip=0x00046b; 	R(JNZ(loc_46922));	// 118847 jnz     short loc_46922 ;~ 37EB:046B
cs=0x37eb;eip=0x00046d; 	T(CMP(*(raddr(es,bx+4)), 1));	// 118848 cmp     byte ptr es:[bx+4], 1 ;~ 37EB:046D
cs=0x37eb;eip=0x000472; 	R(JNZ(loc_46922));	// 118849 jnz     short loc_46922 ;~ 37EB:0472
cs=0x37eb;eip=0x000474; 	T(CMP(*(raddr(es,bx+6)), 1));	// 118850 cmp     byte ptr es:[bx+6], 1 ;~ 37EB:0474
cs=0x37eb;eip=0x000479; 	R(JNZ(loc_46922));	// 118851 jnz     short loc_46922 ;~ 37EB:0479
cs=0x37eb;eip=0x00047b; 	X(PUSH(ds));	// 118852 push    ds ;~ 37EB:047B
cs=0x37eb;eip=0x00047c; 	T(LDS(ax, *(dw*)(raddr(es,bx+8))));	// 118853 lds     ax, es:[bx+8] ;~ 37EB:047C
cs=0x37eb;eip=0x000480; 	T(MOV(dx, ds));	// 118854 mov     dx, ds ;~ 37EB:0480
cs=0x37eb;eip=0x000482; 	X(POP(ds));	// 118855 pop     ds ;~ 37EB:0482
cs=0x37eb;eip=0x000483; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0E))));	// 118856 mov     bx, [bp+0Eh] ;~ 37EB:0483
cs=0x37eb;eip=0x000486; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x0C))));	// 118857 mov     cx, [bp+0Ch] ;~ 37EB:0486
cs=0x37eb;eip=0x000489; 	T(di = bx+0x32);	// 118858 lea     di, [bx+32h] ;~ 37EB:0489
cs=0x37eb;eip=0x00048c; 	R(CALL(sub_47154,0));	// 118859 call    sub_47154 ;~ 37EB:048C
cs=0x37eb;eip=0x00048f; 	R(CALL(sub_46f7a,0));	// 118860 call    sub_46F7A ;~ 37EB:048F
loc_46922:
	// 10640 
cs=0x37eb;eip=0x000492; 	X(POP(di));	// 118864 pop     di ;~ 37EB:0492
cs=0x37eb;eip=0x000493; 	X(POP(bp));	// 118865 pop     bp ;~ 37EB:0493
cs=0x37eb;eip=0x000494; 	R(RETF(0));	// 118866 retf ;~ 37EB:0494
loc_46925:
	// 10641 
cs=0x37eb;eip=0x000495; 	X(PUSH(bp));	// 118870 push    bp ;~ 37EB:0495
cs=0x37eb;eip=0x000496; 	T(MOV(bp, sp));	// 118871 mov     bp, sp ;~ 37EB:0496
cs=0x37eb;eip=0x000498; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 118872 mov     ax, [bp+6] ;~ 37EB:0498
cs=0x37eb;eip=0x00049b; 	T(CMP(ax, 0));	// 118873 cmp     ax, 0 ;~ 37EB:049B
cs=0x37eb;eip=0x00049e; 	R(JZ(loc_46932));	// 118874 jz      short loc_46932 ;~ 37EB:049E
cs=0x37eb;eip=0x0004a0; 	X(POP(bp));	// 118875 pop     bp ;~ 37EB:04A0
cs=0x37eb;eip=0x0004a1; 	R(RETF(0));	// 118876 retf ;~ 37EB:04A1
loc_46932:
	// 10642 
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x0004a2; 	T(MOV(ax, *(dw*)(((db*)&word_47177))));	// 118880 mov     ax, cs:word_47177 ;~ 37EB:04A2
cs=0x37eb;eip=0x0004a6; 	X(POP(bp));	// 118881 pop     bp ;~ 37EB:04A6
cs=0x37eb;eip=0x0004a7; 	R(RETF(0));	// 118882 retf ;~ 37EB:04A7
loc_46938:
	// 10643 
cs=0x37eb;eip=0x0004a8; 	X(PUSH(bp));	// 118886 push    bp ;~ 37EB:04A8
cs=0x37eb;eip=0x0004a9; 	T(MOV(bp, sp));	// 118887 mov     bp, sp ;~ 37EB:04A9
cs=0x37eb;eip=0x0004ab; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 118888 mov     ax, [bp+6] ;~ 37EB:04AB
cs=0x37eb;eip=0x0004ae; 	T(CMP(ax, 0));	// 118889 cmp     ax, 0 ;~ 37EB:04AE
cs=0x37eb;eip=0x0004b1; 	R(JNZ(loc_46945));	// 118890 jnz     short loc_46945 ;~ 37EB:04B1
cs=0x37eb;eip=0x0004b3; 	X(POP(bp));	// 118891 pop     bp ;~ 37EB:04B3
cs=0x37eb;eip=0x0004b4; 	R(RETF(0));	// 118892 retf ;~ 37EB:04B4
loc_46945:
	// 10644 
cs=0x37eb;eip=0x0004b5; 	T(MOV(ax, 0));	// 118896 mov     ax, 0 ;~ 37EB:04B5
cs=0x37eb;eip=0x0004b8; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x0A))));	// 118897 mov     dx, [bp+0Ah] ;~ 37EB:04B8
cs=0x37eb;eip=0x0004bb; 	T(MOV(cx, 0));	// 118898 mov     cx, 0 ;~ 37EB:04BB
loc_4694e:
	// 10645 
cs=0x37eb;eip=0x0004be; 	T(CMP(dx, 0x185));	// 118901 cmp     dx, 185h ;~ 37EB:04BE
cs=0x37eb;eip=0x0004c2; 	R(JBE(loc_4695b));	// 118902 jbe     short loc_4695B ;~ 37EB:04C2
cs=0x37eb;eip=0x0004c4; 	T(SHR(dx, 1));	// 118903 shr     dx, 1 ;~ 37EB:04C4
cs=0x37eb;eip=0x0004c6; 	T(RCR(ax, 1));	// 118904 rcr     ax, 1 ;~ 37EB:04C6
cs=0x37eb;eip=0x0004c8; 	T(INC(cx));	// 118905 inc     cx ;~ 37EB:04C8
cs=0x37eb;eip=0x0004c9; 	R(JMP(loc_4694e));	// 118906 jmp     short loc_4694E ;~ 37EB:04C9
loc_4695b:
	// 10646 
cs=0x37eb;eip=0x0004cb; 	R(JC(loc_46969));	// 118911 jb      short loc_46969 ;~ 37EB:04CB
cs=0x37eb;eip=0x0004cd; 	T(CMP(ax, 0x0DCB0));	// 118912 cmp     ax, 0DCB0h ;~ 37EB:04CD
cs=0x37eb;eip=0x0004d0; 	R(JBE(loc_46969));	// 118913 jbe     short loc_46969 ;~ 37EB:04D0
cs=0x37eb;eip=0x0004d2; 	T(SHR(dx, 1));	// 118914 shr     dx, 1 ;~ 37EB:04D2
cs=0x37eb;eip=0x0004d4; 	T(RCR(ax, 1));	// 118915 rcr     ax, 1 ;~ 37EB:04D4
cs=0x37eb;eip=0x0004d6; 	T(INC(cx));	// 118916 inc     cx ;~ 37EB:04D6
cs=0x37eb;eip=0x0004d7; 	R(JMP(loc_4695b));	// 118917 jmp     short loc_4695B ;~ 37EB:04D7
loc_46969:
	// 10647 
cs=0x37eb;eip=0x0004d9; 	T(MOV(bx, cx));	// 118922 mov     bx, cx ;~ 37EB:04D9
cs=0x37eb;eip=0x0004db; 	T(MOV(cx, 0x0C350));	// 118923 mov     cx, 0C350h ;~ 37EB:04DB
cs=0x37eb;eip=0x0004de; 	T(DIV2(cx));	// 118924 div     cx ;~ 37EB:04DE
cs=0x37eb;eip=0x0004e0; 	T(MOV(cx, 2));	// 118925 mov     cx, 2 ;~ 37EB:04E0
cs=0x37eb;eip=0x0004e3; 	T(SHL(bl, cl));	// 118926 shl     bl, cl ;~ 37EB:04E3
cs=0x37eb;eip=0x0004e5; 	T(OR(ah, bl));	// 118927 or      ah, bl ;~ 37EB:04E5
cs=0x37eb;eip=0x0004e7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+8))));	// 118928 mov     bx, [bp+8] ;~ 37EB:04E7
cs=0x37eb;eip=0x0004ea; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 118929 mov     [bx+4], ax ;~ 37EB:04EA
cs=0x37eb;eip=0x0004ed; 	X(MOV(*(dw*)(raddr(ds,bx+6)), ax));	// 118930 mov     [bx+6], ax ;~ 37EB:04ED
cs=0x37eb;eip=0x0004f0; 	X(POP(bp));	// 118931 pop     bp ;~ 37EB:04F0
cs=0x37eb;eip=0x0004f1; 	R(RETF(0));	// 118932 retf ;~ 37EB:04F1
loc_46982:
	// 10648 
cs=0x37eb;eip=0x0004f2; 	T(MOV(ax, 0x0FFFF));	// 118937 mov     ax, 0FFFFh ;~ 37EB:04F2
cs=0x37eb;eip=0x0004f5; 	R(RETF(0));	// 118938 retf ;~ 37EB:04F5
sub_46986:
	// 118943 
cs=0x37eb;eip=0x0004f6; 	X(PUSH(ax));	// 118945 push    ax ;~ 37EB:04F6
ret_37eb_4f7:
	// 10649 
cs=0x37eb;eip=0x0004f7; 	X(PUSH(cx));	// 118946 push    cx ;~ 37EB:04F7
cs=0x37eb;eip=0x0004f8; 	T(NEG(ax));	// 118947 neg     ax ;~ 37EB:04F8
cs=0x37eb;eip=0x0004fa; 	T(ADD(ax, 0x0FFFF));	// 118948 add     ax, 0FFFFh ;~ 37EB:04FA
cs=0x37eb;eip=0x0004fd; 	T(MOV(cx, ax));	// 118949 mov     cx, ax ;~ 37EB:04FD
cs=0x37eb;eip=0x0004ff; 	T(MOV(al, 0x0B6));	// 118950 mov     al, 0B6h ; '¶' ;~ 37EB:04FF
cs=0x37eb;eip=0x000501; 	R(OUT(0x43, al));	// 118951 out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 37EB:0501
cs=0x37eb;eip=0x000503; 	T(MOV(al, 0x0FF));	// 118952 mov     al, 0FFh ;~ 37EB:0503
cs=0x37eb;eip=0x000505; 	R(OUT(0x42, al));	// 118953 out     42h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 37EB:0505
cs=0x37eb;eip=0x000507; 	R(OUT(0x42, al));	// 118954 out     42h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 37EB:0507
cs=0x37eb;eip=0x000509; 	R(IN(al, 0x61));	// 118955 in      al, 61h         ; PC/XT PPI port B bits: ;~ 37EB:0509
cs=0x37eb;eip=0x00050b; 	T(OR(al, 1));	// 118963 or      al, 1 ;~ 37EB:050B
cs=0x37eb;eip=0x00050d; 	R(OUT(0x61, al));	// 118964 out     61h, al         ; PC/XT PPI port B bits: ;~ 37EB:050D
loc_4699f:
	// 10650 
cs=0x37eb;eip=0x00050f; 	T(MOV(al, 0x80));	// 118974 mov     al, 80h ; '€' ;~ 37EB:050F
cs=0x37eb;eip=0x000511; 	R(OUT(0x43, al));	// 118975 out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 37EB:0511
cs=0x37eb;eip=0x000513; 	R(IN(al, 0x42));	// 118976 in      al, 42h         ; Timer 8253-5 (AT: 8254.2). ;~ 37EB:0513
cs=0x37eb;eip=0x000515; 	T(XCHG(al, ah));	// 118977 xchg    al, ah ;~ 37EB:0515
cs=0x37eb;eip=0x000517; 	R(IN(al, 0x42));	// 118978 in      al, 42h         ; Timer 8253-5 (AT: 8254.2). ;~ 37EB:0517
cs=0x37eb;eip=0x000519; 	T(XCHG(al, ah));	// 118979 xchg    al, ah ;~ 37EB:0519
cs=0x37eb;eip=0x00051b; 	T(CMP(ax, cx));	// 118980 cmp     ax, cx ;~ 37EB:051B
//cs=0x37eb;eip=0x00051d; 	R(JNC(loc_4699f));	// 118981 jnb     short loc_4699F ;~ 37EB:051D
cs=0x37eb;eip=0x00051f; 	R(IN(al, 0x61));	// 118982 in      al, 61h         ; PC/XT PPI port B bits: ;~ 37EB:051F
cs=0x37eb;eip=0x000521; 	T(AND(al, 0x0FE));	// 118990 and     al, 0FEh ;~ 37EB:0521
cs=0x37eb;eip=0x000523; 	R(OUT(0x61, al));	// 118991 out     61h, al         ; PC/XT PPI port B bits: ;~ 37EB:0523
cs=0x37eb;eip=0x000525; 	X(POP(cx));	// 118999 pop     cx ;~ 37EB:0525
cs=0x37eb;eip=0x000526; 	X(POP(ax));	// 119000 pop     ax ;~ 37EB:0526
cs=0x37eb;eip=0x000527; 	R(RETN(0));	// 119001 retn ;~ 37EB:0527
sub_469b8:
	// 119008 
cs=0x37eb;eip=0x000528; 	X(PUSH(si));	// 119010 push    si ;~ 37EB:0528
ret_37eb_529:
	// 10651 
cs=0x37eb;eip=0x000529; 	X(PUSH(ax));	// 119011 push    ax ;~ 37EB:0529
cs=0x37eb;eip=0x00052a; 	T(SHL(ax, 1));	// 119012 shl     ax, 1 ;~ 37EB:052A
cs=0x37eb;eip=0x00052c; 	T(MOV(si, ax));	// 119013 mov     si, ax ;~ 37EB:052C
cs=0x37eb;eip=0x00052e; 	T(MOV(ah, *(raddr(cs,si+0x870))));	// 119014 mov     ah, cs:[si+870h] ;~ 37EB:052E
cs=0x37eb;eip=0x000533; 	T(ADD(ah, 0x40));	// 119015 add     ah, 40h ; '@' ;~ 37EB:0533
cs=0x37eb;eip=0x000536; 	T(MOV(al, 0x3F));	// 119016 mov     al, 3Fh ; '?' ;~ 37EB:0536
cs=0x37eb;eip=0x000538; 	R(CALL(sub_46c57,0));	// 119017 call    sub_46C57 ;~ 37EB:0538
cs=0x37eb;eip=0x00053b; 	X(POP(ax));	// 119018 pop     ax ;~ 37EB:053B
cs=0x37eb;eip=0x00053c; 	X(PUSH(ax));	// 119019 push    ax ;~ 37EB:053C
cs=0x37eb;eip=0x00053d; 	T(SHL(ax, 1));	// 119020 shl     ax, 1 ;~ 37EB:053D
cs=0x37eb;eip=0x00053f; 	T(INC(ax));	// 119021 inc     ax ;~ 37EB:053F
cs=0x37eb;eip=0x000540; 	T(MOV(si, ax));	// 119022 mov     si, ax ;~ 37EB:0540
cs=0x37eb;eip=0x000542; 	T(MOV(ah, *(raddr(cs,si+0x870))));	// 119023 mov     ah, cs:[si+870h] ;~ 37EB:0542
cs=0x37eb;eip=0x000547; 	T(ADD(ah, 0x40));	// 119024 add     ah, 40h ; '@' ;~ 37EB:0547
cs=0x37eb;eip=0x00054a; 	T(MOV(al, 0x3F));	// 119025 mov     al, 3Fh ; '?' ;~ 37EB:054A
cs=0x37eb;eip=0x00054c; 	R(CALL(sub_46c57,0));	// 119026 call    sub_46C57 ;~ 37EB:054C
cs=0x37eb;eip=0x00054f; 	X(POP(ax));	// 119027 pop     ax ;~ 37EB:054F
cs=0x37eb;eip=0x000550; 	X(PUSH(ax));	// 119028 push    ax ;~ 37EB:0550
cs=0x37eb;eip=0x000551; 	T(SHL(ax, 1));	// 119029 shl     ax, 1 ;~ 37EB:0551
cs=0x37eb;eip=0x000553; 	T(MOV(si, ax));	// 119030 mov     si, ax ;~ 37EB:0553
cs=0x37eb;eip=0x000555; 	T(MOV(ah, *(raddr(cs,si+0x870))));	// 119031 mov     ah, cs:[si+870h] ;~ 37EB:0555
cs=0x37eb;eip=0x00055a; 	T(ADD(ah, 0x80));	// 119032 add     ah, 80h ; '€' ;~ 37EB:055A
cs=0x37eb;eip=0x00055d; 	T(MOV(al, 0x0A));	// 119033 mov     al, 0Ah ;~ 37EB:055D
cs=0x37eb;eip=0x00055f; 	R(CALL(sub_46c57,0));	// 119034 call    sub_46C57 ;~ 37EB:055F
cs=0x37eb;eip=0x000562; 	X(POP(ax));	// 119035 pop     ax ;~ 37EB:0562
cs=0x37eb;eip=0x000563; 	X(PUSH(ax));	// 119036 push    ax ;~ 37EB:0563
cs=0x37eb;eip=0x000564; 	T(SHL(ax, 1));	// 119037 shl     ax, 1 ;~ 37EB:0564
cs=0x37eb;eip=0x000566; 	T(INC(ax));	// 119038 inc     ax ;~ 37EB:0566
cs=0x37eb;eip=0x000567; 	T(MOV(si, ax));	// 119039 mov     si, ax ;~ 37EB:0567
cs=0x37eb;eip=0x000569; 	T(MOV(ah, *(raddr(cs,si+0x870))));	// 119040 mov     ah, cs:[si+870h] ;~ 37EB:0569
cs=0x37eb;eip=0x00056e; 	T(ADD(ah, 0x80));	// 119041 add     ah, 80h ; '€' ;~ 37EB:056E
cs=0x37eb;eip=0x000571; 	T(MOV(al, 0x0A));	// 119042 mov     al, 0Ah ;~ 37EB:0571
cs=0x37eb;eip=0x000573; 	R(CALL(sub_46c57,0));	// 119043 call    sub_46C57 ;~ 37EB:0573
cs=0x37eb;eip=0x000576; 	X(POP(ax));	// 119044 pop     ax ;~ 37EB:0576
cs=0x37eb;eip=0x000577; 	X(PUSH(ax));	// 119045 push    ax ;~ 37EB:0577
cs=0x37eb;eip=0x000578; 	T(MOV(ah, al));	// 119046 mov     ah, al ;~ 37EB:0578
cs=0x37eb;eip=0x00057a; 	T(ADD(ah, 0x0B0));	// 119047 add     ah, 0B0h ; '°' ;~ 37EB:057A
cs=0x37eb;eip=0x00057d; 	T(MOV(al, 1));	// 119048 mov     al, 1 ;~ 37EB:057D
cs=0x37eb;eip=0x00057f; 	R(CALL(sub_46c57,0));	// 119049 call    sub_46C57 ;~ 37EB:057F
cs=0x37eb;eip=0x000582; 	X(POP(ax));	// 119050 pop     ax ;~ 37EB:0582
cs=0x37eb;eip=0x000583; 	X(POP(si));	// 119051 pop     si ;~ 37EB:0583
cs=0x37eb;eip=0x000584; 	R(RETN(0));	// 119052 retn ;~ 37EB:0584
sub_46a15:
	// 119059 
cs=0x37eb;eip=0x000585; 	X(PUSH(cx));	// 119061 push    cx ;~ 37EB:0585
ret_37eb_586:
	// 10652 
cs=0x37eb;eip=0x000586; 	X(PUSH(ax));	// 119062 push    ax ;~ 37EB:0586
cs=0x37eb;eip=0x000587; 	T(ADD(ah, 0x20));	// 119063 add     ah, 20h ; ' ' ;~ 37EB:0587
cs=0x37eb;eip=0x00058a; 	T(MOV(al, *(raddr(es,bx+0x0A))));	// 119064 mov     al, es:[bx+0Ah] ;~ 37EB:058A
cs=0x37eb;eip=0x00058e; 	T(MOV(cl, 1));	// 119065 mov     cl, 1 ;~ 37EB:058E
cs=0x37eb;eip=0x000590; 	T(SHL(al, cl));	// 119066 shl     al, cl ;~ 37EB:0590
cs=0x37eb;eip=0x000592; 	T(OR(al, *(raddr(es,bx+9))));	// 119067 or      al, es:[bx+9] ;~ 37EB:0592
cs=0x37eb;eip=0x000596; 	T(MOV(cl, 1));	// 119068 mov     cl, 1 ;~ 37EB:0596
cs=0x37eb;eip=0x000598; 	T(SHL(al, cl));	// 119069 shl     al, cl ;~ 37EB:0598
cs=0x37eb;eip=0x00059a; 	T(OR(al, *(raddr(es,bx+8))));	// 119070 or      al, es:[bx+8] ;~ 37EB:059A
cs=0x37eb;eip=0x00059e; 	T(MOV(cl, 1));	// 119071 mov     cl, 1 ;~ 37EB:059E
cs=0x37eb;eip=0x0005a0; 	T(SHL(al, cl));	// 119072 shl     al, cl ;~ 37EB:05A0
cs=0x37eb;eip=0x0005a2; 	T(OR(al, *(raddr(es,bx+7))));	// 119073 or      al, es:[bx+7] ;~ 37EB:05A2
cs=0x37eb;eip=0x0005a6; 	T(MOV(cl, 4));	// 119074 mov     cl, 4 ;~ 37EB:05A6
cs=0x37eb;eip=0x0005a8; 	T(SHL(al, cl));	// 119075 shl     al, cl ;~ 37EB:05A8
cs=0x37eb;eip=0x0005aa; 	T(OR(al, *(raddr(es,bx+6))));	// 119076 or      al, es:[bx+6] ;~ 37EB:05AA
cs=0x37eb;eip=0x0005ae; 	R(CALL(sub_46c57,0));	// 119077 call    sub_46C57 ;~ 37EB:05AE
cs=0x37eb;eip=0x0005b1; 	X(POP(ax));	// 119078 pop     ax ;~ 37EB:05B1
cs=0x37eb;eip=0x0005b2; 	X(PUSH(ax));	// 119079 push    ax ;~ 37EB:05B2
cs=0x37eb;eip=0x0005b3; 	T(ADD(ah, 0x40));	// 119080 add     ah, 40h ; '@' ;~ 37EB:05B3
cs=0x37eb;eip=0x0005b6; 	T(MOV(al, *(raddr(es,bx+5))));	// 119081 mov     al, es:[bx+5] ;~ 37EB:05B6
cs=0x37eb;eip=0x0005ba; 	T(MOV(cl, 6));	// 119082 mov     cl, 6 ;~ 37EB:05BA
cs=0x37eb;eip=0x0005bc; 	T(SHL(al, cl));	// 119083 shl     al, cl ;~ 37EB:05BC
cs=0x37eb;eip=0x0005be; 	T(OR(al, *(raddr(es,bx+4))));	// 119084 or      al, es:[bx+4] ;~ 37EB:05BE
cs=0x37eb;eip=0x0005c2; 	R(CALL(sub_46c57,0));	// 119085 call    sub_46C57 ;~ 37EB:05C2
cs=0x37eb;eip=0x0005c5; 	X(POP(ax));	// 119086 pop     ax ;~ 37EB:05C5
cs=0x37eb;eip=0x0005c6; 	X(PUSH(ax));	// 119087 push    ax ;~ 37EB:05C6
cs=0x37eb;eip=0x0005c7; 	T(ADD(ah, 0x60));	// 119088 add     ah, 60h ; '`' ;~ 37EB:05C7
cs=0x37eb;eip=0x0005ca; 	T(MOV(al, *(raddr(es,bx))));	// 119089 mov     al, es:[bx] ;~ 37EB:05CA
cs=0x37eb;eip=0x0005cd; 	T(MOV(cl, 4));	// 119090 mov     cl, 4 ;~ 37EB:05CD
cs=0x37eb;eip=0x0005cf; 	T(SHL(al, cl));	// 119091 shl     al, cl ;~ 37EB:05CF
cs=0x37eb;eip=0x0005d1; 	T(OR(al, *(raddr(es,bx+1))));	// 119092 or      al, es:[bx+1] ;~ 37EB:05D1
cs=0x37eb;eip=0x0005d5; 	R(CALL(sub_46c57,0));	// 119093 call    sub_46C57 ;~ 37EB:05D5
cs=0x37eb;eip=0x0005d8; 	X(POP(ax));	// 119094 pop     ax ;~ 37EB:05D8
cs=0x37eb;eip=0x0005d9; 	X(PUSH(ax));	// 119095 push    ax ;~ 37EB:05D9
cs=0x37eb;eip=0x0005da; 	T(ADD(ah, 0x80));	// 119096 add     ah, 80h ; '€' ;~ 37EB:05DA
cs=0x37eb;eip=0x0005dd; 	T(MOV(al, *(raddr(es,bx+2))));	// 119097 mov     al, es:[bx+2] ;~ 37EB:05DD
cs=0x37eb;eip=0x0005e1; 	T(MOV(cl, 4));	// 119098 mov     cl, 4 ;~ 37EB:05E1
cs=0x37eb;eip=0x0005e3; 	T(SHL(al, cl));	// 119099 shl     al, cl ;~ 37EB:05E3
cs=0x37eb;eip=0x0005e5; 	T(OR(al, *(raddr(es,bx+3))));	// 119100 or      al, es:[bx+3] ;~ 37EB:05E5
cs=0x37eb;eip=0x0005e9; 	R(CALL(sub_46c57,0));	// 119101 call    sub_46C57 ;~ 37EB:05E9
cs=0x37eb;eip=0x0005ec; 	X(POP(ax));	// 119102 pop     ax ;~ 37EB:05EC
cs=0x37eb;eip=0x0005ed; 	X(PUSH(ax));	// 119103 push    ax ;~ 37EB:05ED
cs=0x37eb;eip=0x0005ee; 	T(ADD(ah, 0x0E0));	// 119104 add     ah, 0E0h ; 'à' ;~ 37EB:05EE
cs=0x37eb;eip=0x0005f1; 	T(MOV(al, *(raddr(es,bx+0x0B))));	// 119105 mov     al, es:[bx+0Bh] ;~ 37EB:05F1
cs=0x37eb;eip=0x0005f5; 	R(CALL(sub_46c57,0));	// 119106 call    sub_46C57 ;~ 37EB:05F5
cs=0x37eb;eip=0x0005f8; 	X(POP(ax));	// 119107 pop     ax ;~ 37EB:05F8
cs=0x37eb;eip=0x0005f9; 	X(POP(cx));	// 119108 pop     cx ;~ 37EB:05F9
cs=0x37eb;eip=0x0005fa; 	R(RETN(0));	// 119109 retn ;~ 37EB:05FA
sub_46a8b:
	// 119116 
cs=0x37eb;eip=0x0005fb; 	X(PUSH(ax));	// 119118 push    ax ;~ 37EB:05FB
ret_37eb_5fc:
	// 10653 
cs=0x37eb;eip=0x0005fc; 	X(PUSH(cx));	// 119119 push    cx ;~ 37EB:05FC
cs=0x37eb;eip=0x0005fd; 	X(PUSH(dx));	// 119120 push    dx ;~ 37EB:05FD
cs=0x37eb;eip=0x0005fe; 	T(ADD(ah, 0x20));	// 119121 add     ah, 20h ; ' ' ;~ 37EB:05FE
cs=0x37eb;eip=0x000601; 	T(MOV(al, *(raddr(es,bx+0x0A))));	// 119122 mov     al, es:[bx+0Ah] ;~ 37EB:0601
cs=0x37eb;eip=0x000605; 	T(MOV(cl, 1));	// 119123 mov     cl, 1 ;~ 37EB:0605
cs=0x37eb;eip=0x000607; 	T(SHL(al, cl));	// 119124 shl     al, cl ;~ 37EB:0607
cs=0x37eb;eip=0x000609; 	T(OR(al, *(raddr(es,bx+9))));	// 119125 or      al, es:[bx+9] ;~ 37EB:0609
cs=0x37eb;eip=0x00060d; 	T(MOV(cl, 1));	// 119126 mov     cl, 1 ;~ 37EB:060D
cs=0x37eb;eip=0x00060f; 	T(SHL(al, cl));	// 119127 shl     al, cl ;~ 37EB:060F
cs=0x37eb;eip=0x000611; 	T(OR(al, *(raddr(es,bx+8))));	// 119128 or      al, es:[bx+8] ;~ 37EB:0611
cs=0x37eb;eip=0x000615; 	T(MOV(cl, 1));	// 119129 mov     cl, 1 ;~ 37EB:0615
cs=0x37eb;eip=0x000617; 	T(SHL(al, cl));	// 119130 shl     al, cl ;~ 37EB:0617
cs=0x37eb;eip=0x000619; 	T(OR(al, *(raddr(es,bx+7))));	// 119131 or      al, es:[bx+7] ;~ 37EB:0619
cs=0x37eb;eip=0x00061d; 	T(MOV(cl, 4));	// 119132 mov     cl, 4 ;~ 37EB:061D
cs=0x37eb;eip=0x00061f; 	T(SHL(al, cl));	// 119133 shl     al, cl ;~ 37EB:061F
cs=0x37eb;eip=0x000621; 	T(MOV(cl, 3));	// 119134 mov     cl, 3 ;~ 37EB:0621
cs=0x37eb;eip=0x000623; 	T(SHR(dl, cl));	// 119135 shr     dl, cl ;~ 37EB:0623
cs=0x37eb;eip=0x000625; 	T(AND(dl, 7));	// 119136 and     dl, 7 ;~ 37EB:0625
cs=0x37eb;eip=0x000628; 	T(OR(al, dl));	// 119137 or      al, dl ;~ 37EB:0628
cs=0x37eb;eip=0x00062a; 	R(CALL(sub_46c57,0));	// 119138 call    sub_46C57 ;~ 37EB:062A
cs=0x37eb;eip=0x00062d; 	X(POP(dx));	// 119139 pop     dx ;~ 37EB:062D
cs=0x37eb;eip=0x00062e; 	X(POP(cx));	// 119140 pop     cx ;~ 37EB:062E
cs=0x37eb;eip=0x00062f; 	X(POP(ax));	// 119141 pop     ax ;~ 37EB:062F
cs=0x37eb;eip=0x000630; 	R(RETN(0));	// 119142 retn ;~ 37EB:0630
sub_46ac1:
	// 119149 
cs=0x37eb;eip=0x000631; 	X(PUSH(ax));	// 119151 push    ax ;~ 37EB:0631
ret_37eb_632:
	// 10654 
cs=0x37eb;eip=0x000632; 	X(PUSH(bx));	// 119152 push    bx ;~ 37EB:0632
cs=0x37eb;eip=0x000633; 	X(PUSH(si));	// 119153 push    si ;~ 37EB:0633
cs=0x37eb;eip=0x000634; 	T(SHL(ax, 1));	// 119154 shl     ax, 1 ;~ 37EB:0634
cs=0x37eb;eip=0x000636; 	T(MOV(si, ax));	// 119155 mov     si, ax ;~ 37EB:0636
cs=0x37eb;eip=0x000638; 	T(MOV(ah, *(raddr(cs,si+0x870))));	// 119156 mov     ah, cs:[si+870h] ;~ 37EB:0638
cs=0x37eb;eip=0x00063d; 	T(ADD(bx, 0x46));	// 119157 add     bx, 46h ; 'F' ;~ 37EB:063D
cs=0x37eb;eip=0x000640; 	R(CALL(sub_46a8b,0));	// 119158 call    sub_46A8B ;~ 37EB:0640
cs=0x37eb;eip=0x000643; 	X(POP(si));	// 119159 pop     si ;~ 37EB:0643
cs=0x37eb;eip=0x000644; 	X(POP(bx));	// 119160 pop     bx ;~ 37EB:0644
cs=0x37eb;eip=0x000645; 	X(POP(ax));	// 119161 pop     ax ;~ 37EB:0645
cs=0x37eb;eip=0x000646; 	R(RETN(0));	// 119162 retn ;~ 37EB:0646
sub_46ad7:
	// 119169 
cs=0x37eb;eip=0x000647; 	X(PUSH(ax));	// 119171 push    ax ;~ 37EB:0647
ret_37eb_648:
	// 10655 
cs=0x37eb;eip=0x000648; 	X(PUSH(bx));	// 119172 push    bx ;~ 37EB:0648
cs=0x37eb;eip=0x000649; 	X(PUSH(si));	// 119173 push    si ;~ 37EB:0649
cs=0x37eb;eip=0x00064a; 	T(SHL(ax, 1));	// 119174 shl     ax, 1 ;~ 37EB:064A
cs=0x37eb;eip=0x00064c; 	T(INC(ax));	// 119175 inc     ax ;~ 37EB:064C
cs=0x37eb;eip=0x00064d; 	T(MOV(si, ax));	// 119176 mov     si, ax ;~ 37EB:064D
cs=0x37eb;eip=0x00064f; 	T(MOV(ah, *(raddr(cs,si+0x870))));	// 119177 mov     ah, cs:[si+870h] ;~ 37EB:064F
cs=0x37eb;eip=0x000654; 	T(ADD(bx, 0x52));	// 119178 add     bx, 52h ; 'R' ;~ 37EB:0654
cs=0x37eb;eip=0x000657; 	R(CALL(sub_46a8b,0));	// 119179 call    sub_46A8B ;~ 37EB:0657
cs=0x37eb;eip=0x00065a; 	X(POP(si));	// 119180 pop     si ;~ 37EB:065A
cs=0x37eb;eip=0x00065b; 	X(POP(bx));	// 119181 pop     bx ;~ 37EB:065B
cs=0x37eb;eip=0x00065c; 	X(POP(ax));	// 119182 pop     ax ;~ 37EB:065C
cs=0x37eb;eip=0x00065d; 	R(RETN(0));	// 119183 retn ;~ 37EB:065D
sub_46aee:
	// 119190 
cs=0x37eb;eip=0x00065e; 	X(PUSH(ax));	// 119192 push    ax ;~ 37EB:065E
ret_37eb_65f:
	// 10656 
cs=0x37eb;eip=0x00065f; 	X(PUSH(cx));	// 119193 push    cx ;~ 37EB:065F
cs=0x37eb;eip=0x000660; 	X(PUSH(dx));	// 119194 push    dx ;~ 37EB:0660
cs=0x37eb;eip=0x000661; 	T(ADD(ah, 0x40));	// 119195 add     ah, 40h ; '@' ;~ 37EB:0661
cs=0x37eb;eip=0x000664; 	T(MOV(al, *(raddr(es,bx+5))));	// 119196 mov     al, es:[bx+5] ;~ 37EB:0664
cs=0x37eb;eip=0x000668; 	T(MOV(cl, 6));	// 119197 mov     cl, 6 ;~ 37EB:0668
cs=0x37eb;eip=0x00066a; 	T(SHL(al, cl));	// 119198 shl     al, cl ;~ 37EB:066A
cs=0x37eb;eip=0x00066c; 	T(MOV(dh, 0x7F));	// 119199 mov     dh, 7Fh ;~ 37EB:066C
cs=0x37eb;eip=0x00066e; 	T(SUB(dh, dl));	// 119200 sub     dh, dl ;~ 37EB:066E
cs=0x37eb;eip=0x000670; 	T(SHR(dh, 1));	// 119201 shr     dh, 1 ;~ 37EB:0670
cs=0x37eb;eip=0x000672; 	T(AND(dh, 0x3F));	// 119202 and     dh, 3Fh ;~ 37EB:0672
cs=0x37eb;eip=0x000675; 	T(OR(al, dh));	// 119203 or      al, dh ;~ 37EB:0675
cs=0x37eb;eip=0x000677; 	R(CALL(sub_46c57,0));	// 119204 call    sub_46C57 ;~ 37EB:0677
cs=0x37eb;eip=0x00067a; 	X(POP(dx));	// 119205 pop     dx ;~ 37EB:067A
cs=0x37eb;eip=0x00067b; 	X(POP(cx));	// 119206 pop     cx ;~ 37EB:067B
cs=0x37eb;eip=0x00067c; 	X(POP(ax));	// 119207 pop     ax ;~ 37EB:067C
cs=0x37eb;eip=0x00067d; 	R(RETN(0));	// 119208 retn ;~ 37EB:067D
sub_46b0e:
	// 119215 
cs=0x37eb;eip=0x00067e; 	X(PUSH(ax));	// 119217 push    ax ;~ 37EB:067E
ret_37eb_67f:
	// 10657 
cs=0x37eb;eip=0x00067f; 	X(PUSH(bx));	// 119218 push    bx ;~ 37EB:067F
cs=0x37eb;eip=0x000680; 	X(PUSH(si));	// 119219 push    si ;~ 37EB:0680
cs=0x37eb;eip=0x000681; 	T(SHL(ax, 1));	// 119220 shl     ax, 1 ;~ 37EB:0681
cs=0x37eb;eip=0x000683; 	T(MOV(si, ax));	// 119221 mov     si, ax ;~ 37EB:0683
cs=0x37eb;eip=0x000685; 	T(MOV(ah, *(raddr(cs,si+0x870))));	// 119222 mov     ah, cs:[si+870h] ;~ 37EB:0685
cs=0x37eb;eip=0x00068a; 	T(ADD(bx, 0x46));	// 119223 add     bx, 46h ; 'F' ;~ 37EB:068A
cs=0x37eb;eip=0x00068d; 	R(CALL(sub_46aee,0));	// 119224 call    sub_46AEE ;~ 37EB:068D
cs=0x37eb;eip=0x000690; 	X(POP(si));	// 119225 pop     si ;~ 37EB:0690
cs=0x37eb;eip=0x000691; 	X(POP(bx));	// 119226 pop     bx ;~ 37EB:0691
cs=0x37eb;eip=0x000692; 	X(POP(ax));	// 119227 pop     ax ;~ 37EB:0692
cs=0x37eb;eip=0x000693; 	R(RETN(0));	// 119228 retn ;~ 37EB:0693
sub_46b24:
	// 119235 
cs=0x37eb;eip=0x000694; 	X(PUSH(ax));	// 119237 push    ax ;~ 37EB:0694
ret_37eb_695:
	// 10658 
cs=0x37eb;eip=0x000695; 	X(PUSH(bx));	// 119238 push    bx ;~ 37EB:0695
cs=0x37eb;eip=0x000696; 	X(PUSH(si));	// 119239 push    si ;~ 37EB:0696
cs=0x37eb;eip=0x000697; 	T(SHL(ax, 1));	// 119240 shl     ax, 1 ;~ 37EB:0697
cs=0x37eb;eip=0x000699; 	T(INC(ax));	// 119241 inc     ax ;~ 37EB:0699
cs=0x37eb;eip=0x00069a; 	T(MOV(si, ax));	// 119242 mov     si, ax ;~ 37EB:069A
cs=0x37eb;eip=0x00069c; 	T(MOV(ah, *(raddr(cs,si+0x870))));	// 119243 mov     ah, cs:[si+870h] ;~ 37EB:069C
cs=0x37eb;eip=0x0006a1; 	T(ADD(bx, 0x52));	// 119244 add     bx, 52h ; 'R' ;~ 37EB:06A1
cs=0x37eb;eip=0x0006a4; 	R(CALL(sub_46aee,0));	// 119245 call    sub_46AEE ;~ 37EB:06A4
cs=0x37eb;eip=0x0006a7; 	X(POP(si));	// 119246 pop     si ;~ 37EB:06A7
cs=0x37eb;eip=0x0006a8; 	X(POP(bx));	// 119247 pop     bx ;~ 37EB:06A8
cs=0x37eb;eip=0x0006a9; 	X(POP(ax));	// 119248 pop     ax ;~ 37EB:06A9
cs=0x37eb;eip=0x0006aa; 	R(RETN(0));	// 119249 retn ;~ 37EB:06AA
sub_46b3b:
	// 119256 
cs=0x37eb;eip=0x0006ab; 	X(PUSH(ax));	// 119258 push    ax ;~ 37EB:06AB
ret_37eb_6ac:
	// 10659 
cs=0x37eb;eip=0x0006ac; 	X(PUSH(cx));	// 119259 push    cx ;~ 37EB:06AC
cs=0x37eb;eip=0x0006ad; 	X(PUSH(dx));	// 119260 push    dx ;~ 37EB:06AD
cs=0x37eb;eip=0x0006ae; 	T(MOV(ah, al));	// 119261 mov     ah, al ;~ 37EB:06AE
cs=0x37eb;eip=0x0006b0; 	T(ADD(ah, 0x0C0));	// 119262 add     ah, 0C0h ; 'À' ;~ 37EB:06B0
cs=0x37eb;eip=0x0006b3; 	T(MOV(cl, 4));	// 119263 mov     cl, 4 ;~ 37EB:06B3
cs=0x37eb;eip=0x0006b5; 	T(SHR(dl, cl));	// 119264 shr     dl, cl ;~ 37EB:06B5
cs=0x37eb;eip=0x0006b7; 	T(AND(dl, 7));	// 119265 and     dl, 7 ;~ 37EB:06B7
cs=0x37eb;eip=0x0006ba; 	T(MOV(al, dl));	// 119266 mov     al, dl ;~ 37EB:06BA
cs=0x37eb;eip=0x0006bc; 	T(MOV(cl, 1));	// 119267 mov     cl, 1 ;~ 37EB:06BC
cs=0x37eb;eip=0x0006be; 	T(SHL(al, cl));	// 119268 shl     al, cl ;~ 37EB:06BE
cs=0x37eb;eip=0x0006c0; 	T(OR(al, *(raddr(es,bx+0x44))));	// 119269 or      al, es:[bx+44h] ;~ 37EB:06C0
cs=0x37eb;eip=0x0006c4; 	R(CALL(sub_46c57,0));	// 119270 call    sub_46C57 ;~ 37EB:06C4
cs=0x37eb;eip=0x0006c7; 	X(POP(dx));	// 119271 pop     dx ;~ 37EB:06C7
cs=0x37eb;eip=0x0006c8; 	X(POP(cx));	// 119272 pop     cx ;~ 37EB:06C8
cs=0x37eb;eip=0x0006c9; 	X(POP(ax));	// 119273 pop     ax ;~ 37EB:06C9
cs=0x37eb;eip=0x0006ca; 	R(RETN(0));	// 119274 retn ;~ 37EB:06CA
sub_46b5b:
	// 119281 
cs=0x37eb;eip=0x0006cb; 	X(PUSH(cx));	// 119283 push    cx ;~ 37EB:06CB
ret_37eb_6cc:
	// 10660 
cs=0x37eb;eip=0x0006cc; 	X(PUSH(si));	// 119284 push    si ;~ 37EB:06CC
cs=0x37eb;eip=0x0006cd; 	T(CMP(cx, 0x81));	// 119285 cmp     cx, 81h ; '' ;~ 37EB:06CD
cs=0x37eb;eip=0x0006d1; 	R(JNC(loc_46b66));	// 119286 jnb     short loc_46B66 ;~ 37EB:06D1
cs=0x37eb;eip=0x0006d3; 	X(POP(si));	// 119287 pop     si ;~ 37EB:06D3
cs=0x37eb;eip=0x0006d4; 	X(POP(cx));	// 119288 pop     cx ;~ 37EB:06D4
cs=0x37eb;eip=0x0006d5; 	R(RETN(0));	// 119289 retn ;~ 37EB:06D5
loc_46b66:
	// 10661 
cs=0x37eb;eip=0x0006d6; 	T(CMP(cx, 0x85));	// 119293 cmp     cx, 85h ; '…' ;~ 37EB:06D6
cs=0x37eb;eip=0x0006da; 	R(JBE(loc_46b6f));	// 119294 jbe     short loc_46B6F ;~ 37EB:06DA
cs=0x37eb;eip=0x0006dc; 	X(POP(si));	// 119295 pop     si ;~ 37EB:06DC
cs=0x37eb;eip=0x0006dd; 	X(POP(cx));	// 119296 pop     cx ;~ 37EB:06DD
cs=0x37eb;eip=0x0006de; 	R(RETN(0));	// 119297 retn ;~ 37EB:06DE
loc_46b6f:
	// 10662 
cs=0x37eb;eip=0x0006df; 	T(SUB(cx, 0x81));	// 119301 sub     cx, 81h ; '' ;~ 37EB:06DF
cs=0x37eb;eip=0x0006e3; 	T(SHL(cx, 1));	// 119302 shl     cx, 1 ;~ 37EB:06E3
cs=0x37eb;eip=0x0006e5; 	T(MOV(si, cx));	// 119303 mov     si, cx ;~ 37EB:06E5
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x0006e7; 	R(CALL(__dispatch_call,*(dw*)(((db*)&funcs_46b77)+si)));	// 119304 call    cs:funcs_46B77[si] ;~ 37EB:06E7
cs=0x37eb;eip=0x0006ec; 	X(POP(si));	// 119305 pop     si ;~ 37EB:06EC
cs=0x37eb;eip=0x0006ed; 	X(POP(cx));	// 119306 pop     cx ;~ 37EB:06ED
cs=0x37eb;eip=0x0006ee; 	R(RETN(0));	// 119307 retn ;~ 37EB:06EE
sub_46b89:
	// 119320 
cs=0x37eb;eip=0x0006f9; 	X(PUSH(bx));	// 119322 push    bx ;~ 37EB:06F9
ret_37eb_6fa:
	// 10663 
cs=0x37eb;eip=0x0006fa; 	X(PUSH(cx));	// 119323 push    cx ;~ 37EB:06FA
cs=0x37eb;eip=0x0006fb; 	X(PUSH(dx));	// 119324 push    dx ;~ 37EB:06FB
cs=0x37eb;eip=0x0006fc; 	T(MOV(dh, ah));	// 119325 mov     dh, ah ;~ 37EB:06FC
cs=0x37eb;eip=0x0006fe; 	T(XOR(ah, ah));	// 119326 xor     ah, ah ;~ 37EB:06FE
cs=0x37eb;eip=0x000700; 	T(MOV(cl, 0x0C));	// 119327 mov     cl, 0Ch ;~ 37EB:0700
cs=0x37eb;eip=0x000702; 	T(DIV1(cl));	// 119328 div     cl ;~ 37EB:0702
cs=0x37eb;eip=0x000704; 	T(MOV(dl, al));	// 119329 mov     dl, al ;~ 37EB:0704
cs=0x37eb;eip=0x000706; 	T(MOV(al, ah));	// 119330 mov     al, ah ;~ 37EB:0706
cs=0x37eb;eip=0x000708; 	T(ADD(al, dh));	// 119331 add     al, dh ;~ 37EB:0708
cs=0x37eb;eip=0x00070a; 	T(CBW);	// 119332 cbw ;~ 37EB:070A
cs=0x37eb;eip=0x00070b; 	T(SHL(ax, 1));	// 119333 shl     ax, 1 ;~ 37EB:070B
cs=0x37eb;eip=0x00070d; 	T(MOV(bx, ax));	// 119334 mov     bx, ax ;~ 37EB:070D
cs=0x37eb;eip=0x00070f; 	T(MOV(ax, *(dw*)(raddr(cs,bx+0x8B2))));	// 119335 mov     ax, cs:[bx+8B2h] ;~ 37EB:070F
cs=0x37eb;eip=0x000714; 	T(XOR(dh, dh));	// 119336 xor     dh, dh ;~ 37EB:0714
cs=0x37eb;eip=0x000716; 	T(MOV(cl, 0x0A));	// 119337 mov     cl, 0Ah ;~ 37EB:0716
cs=0x37eb;eip=0x000718; 	T(SHL(dx, cl));	// 119338 shl     dx, cl ;~ 37EB:0718
cs=0x37eb;eip=0x00071a; 	T(OR(ax, dx));	// 119339 or      ax, dx ;~ 37EB:071A
cs=0x37eb;eip=0x00071c; 	X(POP(dx));	// 119340 pop     dx ;~ 37EB:071C
cs=0x37eb;eip=0x00071d; 	X(POP(cx));	// 119341 pop     cx ;~ 37EB:071D
cs=0x37eb;eip=0x00071e; 	X(POP(bx));	// 119342 pop     bx ;~ 37EB:071E
cs=0x37eb;eip=0x00071f; 	R(RETN(0));	// 119343 retn ;~ 37EB:071F
sub_46bb0:
	// 119350 
cs=0x37eb;eip=0x000720; 	X(PUSH(ax));	// 119351 push    ax ;~ 37EB:0720
ret_37eb_721:
	// 10664 
cs=0x37eb;eip=0x000721; 	X(PUSH(si));	// 119352 push    si ;~ 37EB:0721
cs=0x37eb;eip=0x000722; 	T(XOR(ah, ah));	// 119353 xor     ah, ah ;~ 37EB:0722
cs=0x37eb;eip=0x000724; 	T(SHL(ax, 1));	// 119354 shl     ax, 1 ;~ 37EB:0724
cs=0x37eb;eip=0x000726; 	T(MOV(si, ax));	// 119355 mov     si, ax ;~ 37EB:0726
cs=0x37eb;eip=0x000728; 	T(MOV(cx, *(dw*)(raddr(cs,si+0x8FA))));	// 119356 mov     cx, cs:[si+8FAh] ;~ 37EB:0728
cs=0x37eb;eip=0x00072d; 	X(POP(si));	// 119357 pop     si ;~ 37EB:072D
cs=0x37eb;eip=0x00072e; 	X(POP(ax));	// 119358 pop     ax ;~ 37EB:072E
cs=0x37eb;eip=0x00072f; 	R(RETN(0));	// 119359 retn ;~ 37EB:072F
sub_46bc0:
	// 119366 
cs=0x37eb;eip=0x000730; 	X(PUSH(cx));	// 119368 push    cx ;~ 37EB:0730
ret_37eb_731:
	// 10665 
cs=0x37eb;eip=0x000731; 	X(PUSH(dx));	// 119369 push    dx ;~ 37EB:0731
cs=0x37eb;eip=0x000732; 	X(PUSH(si));	// 119370 push    si ;~ 37EB:0732
cs=0x37eb;eip=0x000733; 	T(MOV(dx, cx));	// 119371 mov     dx, cx ;~ 37EB:0733
cs=0x37eb;eip=0x000735; 	X(PUSH(ax));	// 119372 push    ax ;~ 37EB:0735
cs=0x37eb;eip=0x000736; 	T(SHL(ax, 1));	// 119373 shl     ax, 1 ;~ 37EB:0736
cs=0x37eb;eip=0x000738; 	T(MOV(si, ax));	// 119374 mov     si, ax ;~ 37EB:0738
cs=0x37eb;eip=0x00073a; 	T(MOV(ah, *(raddr(cs,si+0x870))));	// 119375 mov     ah, cs:[si+870h] ;~ 37EB:073A
cs=0x37eb;eip=0x00073f; 	T(ADD(ah, 0x40));	// 119376 add     ah, 40h ; '@' ;~ 37EB:073F
cs=0x37eb;eip=0x000742; 	T(MOV(al, *(raddr(es,bx+0x4B))));	// 119377 mov     al, es:[bx+4Bh] ;~ 37EB:0742
cs=0x37eb;eip=0x000746; 	T(MOV(cl, 6));	// 119378 mov     cl, 6 ;~ 37EB:0746
cs=0x37eb;eip=0x000748; 	T(SHL(al, cl));	// 119379 shl     al, cl ;~ 37EB:0748
cs=0x37eb;eip=0x00074a; 	T(MOV(cl, *(raddr(es,bx+0x4A))));	// 119380 mov     cl, es:[bx+4Ah] ;~ 37EB:074A
cs=0x37eb;eip=0x00074e; 	T(CMP(*(raddr(es,bx+0x44)), 1));	// 119381 cmp     byte ptr es:[bx+44h], 1 ;~ 37EB:074E
cs=0x37eb;eip=0x000753; 	R(JNZ(loc_46c0b));	// 119382 jnz     short loc_46C0B ;~ 37EB:0753
cs=0x37eb;eip=0x000755; 	X(PUSH(ax));	// 119383 push    ax ;~ 37EB:0755
cs=0x37eb;eip=0x000756; 	T(MOV(al, dh));	// 119384 mov     al, dh ;~ 37EB:0756
cs=0x37eb;eip=0x000758; 	T(XOR(ah, ah));	// 119385 xor     ah, ah ;~ 37EB:0758
cs=0x37eb;eip=0x00075a; 	T(MUL1_1(dl));	// 119386 mul     dl ;~ 37EB:075A
cs=0x37eb;eip=0x00075c; 	T(MOV(cl, 6));	// 119387 mov     cl, 6 ;~ 37EB:075C
cs=0x37eb;eip=0x00075e; 	T(SHR(ax, cl));	// 119388 shr     ax, cl ;~ 37EB:075E
cs=0x37eb;eip=0x000760; 	T(INC(ax));	// 119389 inc     ax ;~ 37EB:0760
cs=0x37eb;eip=0x000761; 	T(SHR(ax, 1));	// 119390 shr     ax, 1 ;~ 37EB:0761
cs=0x37eb;eip=0x000763; 	T(MOV(cl, 0x3F));	// 119391 mov     cl, 3Fh ; '?' ;~ 37EB:0763
cs=0x37eb;eip=0x000765; 	T(SUB(cl, *(raddr(es,bx+0x4A))));	// 119392 sub     cl, es:[bx+4Ah] ;~ 37EB:0765
cs=0x37eb;eip=0x000769; 	T(MUL1_1(cl));	// 119393 mul     cl ;~ 37EB:0769
cs=0x37eb;eip=0x00076b; 	T(MOV(cl, 6));	// 119394 mov     cl, 6 ;~ 37EB:076B
cs=0x37eb;eip=0x00076d; 	T(SHR(ax, cl));	// 119395 shr     ax, cl ;~ 37EB:076D
cs=0x37eb;eip=0x00076f; 	T(INC(ax));	// 119396 inc     ax ;~ 37EB:076F
cs=0x37eb;eip=0x000770; 	T(SHR(ax, 1));	// 119397 shr     ax, 1 ;~ 37EB:0770
cs=0x37eb;eip=0x000772; 	T(AND(ax, 0x3F));	// 119398 and     ax, 3Fh ;~ 37EB:0772
cs=0x37eb;eip=0x000775; 	T(MOV(cx, 0x3F));	// 119399 mov     cx, 3Fh ; '?' ;~ 37EB:0775
cs=0x37eb;eip=0x000778; 	T(SUB(cx, ax));	// 119400 sub     cx, ax ;~ 37EB:0778
cs=0x37eb;eip=0x00077a; 	X(POP(ax));	// 119401 pop     ax ;~ 37EB:077A
loc_46c0b:
	// 10666 
cs=0x37eb;eip=0x00077b; 	T(OR(al, cl));	// 119404 or      al, cl ;~ 37EB:077B
cs=0x37eb;eip=0x00077d; 	R(CALL(sub_46c57,0));	// 119405 call    sub_46C57 ;~ 37EB:077D
cs=0x37eb;eip=0x000780; 	X(POP(ax));	// 119406 pop     ax ;~ 37EB:0780
cs=0x37eb;eip=0x000781; 	X(PUSH(ax));	// 119407 push    ax ;~ 37EB:0781
cs=0x37eb;eip=0x000782; 	T(SHL(ax, 1));	// 119408 shl     ax, 1 ;~ 37EB:0782
cs=0x37eb;eip=0x000784; 	T(INC(ax));	// 119409 inc     ax ;~ 37EB:0784
cs=0x37eb;eip=0x000785; 	T(MOV(si, ax));	// 119410 mov     si, ax ;~ 37EB:0785
cs=0x37eb;eip=0x000787; 	T(MOV(ah, *(raddr(cs,si+0x870))));	// 119411 mov     ah, cs:[si+870h] ;~ 37EB:0787
cs=0x37eb;eip=0x00078c; 	T(ADD(ah, 0x40));	// 119412 add     ah, 40h ; '@' ;~ 37EB:078C
cs=0x37eb;eip=0x00078f; 	T(MOV(al, *(raddr(es,bx+0x57))));	// 119413 mov     al, es:[bx+57h] ;~ 37EB:078F
cs=0x37eb;eip=0x000793; 	T(MOV(cl, 6));	// 119414 mov     cl, 6 ;~ 37EB:0793
cs=0x37eb;eip=0x000795; 	T(SHL(al, cl));	// 119415 shl     al, cl ;~ 37EB:0795
cs=0x37eb;eip=0x000797; 	X(PUSH(ax));	// 119416 push    ax ;~ 37EB:0797
cs=0x37eb;eip=0x000798; 	T(MOV(al, dh));	// 119417 mov     al, dh ;~ 37EB:0798
cs=0x37eb;eip=0x00079a; 	T(XOR(ah, ah));	// 119418 xor     ah, ah ;~ 37EB:079A
cs=0x37eb;eip=0x00079c; 	T(MUL1_1(dl));	// 119419 mul     dl ;~ 37EB:079C
cs=0x37eb;eip=0x00079e; 	T(MOV(cl, 6));	// 119420 mov     cl, 6 ;~ 37EB:079E
cs=0x37eb;eip=0x0007a0; 	T(SHR(ax, cl));	// 119421 shr     ax, cl ;~ 37EB:07A0
cs=0x37eb;eip=0x0007a2; 	T(INC(ax));	// 119422 inc     ax ;~ 37EB:07A2
cs=0x37eb;eip=0x0007a3; 	T(SHR(ax, 1));	// 119423 shr     ax, 1 ;~ 37EB:07A3
cs=0x37eb;eip=0x0007a5; 	T(MOV(cl, 0x3F));	// 119424 mov     cl, 3Fh ; '?' ;~ 37EB:07A5
cs=0x37eb;eip=0x0007a7; 	T(SUB(cl, *(raddr(es,bx+0x56))));	// 119425 sub     cl, es:[bx+56h] ;~ 37EB:07A7
cs=0x37eb;eip=0x0007ab; 	T(MUL1_1(cl));	// 119426 mul     cl ;~ 37EB:07AB
cs=0x37eb;eip=0x0007ad; 	T(MOV(cl, 6));	// 119427 mov     cl, 6 ;~ 37EB:07AD
cs=0x37eb;eip=0x0007af; 	T(SHR(ax, cl));	// 119428 shr     ax, cl ;~ 37EB:07AF
cs=0x37eb;eip=0x0007b1; 	T(INC(ax));	// 119429 inc     ax ;~ 37EB:07B1
cs=0x37eb;eip=0x0007b2; 	T(SHR(ax, 1));	// 119430 shr     ax, 1 ;~ 37EB:07B2
cs=0x37eb;eip=0x0007b4; 	T(AND(ax, 0x3F));	// 119431 and     ax, 3Fh ;~ 37EB:07B4
cs=0x37eb;eip=0x0007b7; 	T(MOV(cx, 0x3F));	// 119432 mov     cx, 3Fh ; '?' ;~ 37EB:07B7
cs=0x37eb;eip=0x0007ba; 	T(SUB(cx, ax));	// 119433 sub     cx, ax ;~ 37EB:07BA
cs=0x37eb;eip=0x0007bc; 	X(POP(ax));	// 119434 pop     ax ;~ 37EB:07BC
cs=0x37eb;eip=0x0007bd; 	T(OR(al, cl));	// 119435 or      al, cl ;~ 37EB:07BD
cs=0x37eb;eip=0x0007bf; 	R(CALL(sub_46c57,0));	// 119436 call    sub_46C57 ;~ 37EB:07BF
cs=0x37eb;eip=0x0007c2; 	X(POP(ax));	// 119437 pop     ax ;~ 37EB:07C2
cs=0x37eb;eip=0x0007c3; 	X(POP(si));	// 119438 pop     si ;~ 37EB:07C3
cs=0x37eb;eip=0x0007c4; 	X(POP(dx));	// 119439 pop     dx ;~ 37EB:07C4
cs=0x37eb;eip=0x0007c5; 	X(POP(cx));	// 119440 pop     cx ;~ 37EB:07C5
cs=0x37eb;eip=0x0007c6; 	R(RETN(0));	// 119441 retn ;~ 37EB:07C6
sub_46c57:
	// 119448 
cs=0x37eb;eip=0x0007c7; 	X(PUSH(si));	// 119450 push    si ;~ 37EB:07C7
ret_37eb_7c8:
	// 10667 
cs=0x37eb;eip=0x0007c8; 	X(PUSH(dx));	// 119451 push    dx ;~ 37EB:07C8
cs=0x37eb;eip=0x0007c9; 	X(PUSH(cx));	// 119452 push    cx ;~ 37EB:07C9
cs=0x37eb;eip=0x0007ca; 	X(PUSH(ax));	// 119453 push    ax ;~ 37EB:07CA
cs=0x37eb;eip=0x0007cb; 	T(MOV(cx, ax));	// 119454 mov     cx, ax ;~ 37EB:07CB
cs=0x37eb;eip=0x0007cd; 	T(MOV(al, ah));	// 119455 mov     al, ah ;~ 37EB:07CD
cs=0x37eb;eip=0x0007cf; 	T(XOR(ah, ah));	// 119456 xor     ah, ah ;~ 37EB:07CF
cs=0x37eb;eip=0x0007d1; 	T(MOV(si, ax));	// 119457 mov     si, ax ;~ 37EB:07D1
cs=0x37eb;eip=0x0007d3; 	T(MOV(al, *(raddr(cs,si+0x97D))));	// 119458 mov     al, cs:[si+97Dh] ;~ 37EB:07D3
cs=0x37eb;eip=0x0007d8; 	T(CMP(al, cl));	// 119459 cmp     al, cl ;~ 37EB:07D8
cs=0x37eb;eip=0x0007da; 	R(JNZ(loc_46c71));	// 119460 jnz     short loc_46C71 ;~ 37EB:07DA
cs=0x37eb;eip=0x0007dc; 	X(POP(ax));	// 119461 pop     ax ;~ 37EB:07DC
cs=0x37eb;eip=0x0007dd; 	X(POP(cx));	// 119462 pop     cx ;~ 37EB:07DD
cs=0x37eb;eip=0x0007de; 	X(POP(dx));	// 119463 pop     dx ;~ 37EB:07DE
cs=0x37eb;eip=0x0007df; 	X(POP(si));	// 119464 pop     si ;~ 37EB:07DF
cs=0x37eb;eip=0x0007e0; 	R(RETN(0));	// 119465 retn ;~ 37EB:07E0
loc_46c71:
	// 10668 
cs=0x37eb;eip=0x0007e1; 	T(MOV(ax, cx));	// 119469 mov     ax, cx ;~ 37EB:07E1
cs=0x37eb;eip=0x0007e3; 	X(MOV(*(raddr(cs,si+0x97D)), al));	// 119470 mov     cs:[si+97Dh], al ;~ 37EB:07E3
cs=0x37eb;eip=0x0007e8; 	T(MOV(al, ah));	// 119471 mov     al, ah ;~ 37EB:07E8
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x0007ea; 	T(MOV(dx, *(dw*)(((db*)&word_46e02))));	// 119472 mov     dx, cs:word_46E02 ;~ 37EB:07EA
cs=0x37eb;eip=0x0007ef; 	R(OUT(dx, al));	// 119473 out     dx, al ;~ 37EB:07EF
cs=0x37eb;eip=0x0007f0; 	T(MOV(ax, 1));	// 119474 mov     ax, 1 ;~ 37EB:07F0
cs=0x37eb;eip=0x0007f3; 	R(CALL(sub_46986,0));	// 119475 call    sub_46986 ;~ 37EB:07F3
cs=0x37eb;eip=0x0007f6; 	X(POP(ax));	// 119476 pop     ax ;~ 37EB:07F6
cs=0x37eb;eip=0x0007f7; 	T(INC(dx));	// 119477 inc     dx ;~ 37EB:07F7
cs=0x37eb;eip=0x0007f8; 	R(OUT(dx, al));	// 119478 out     dx, al ;~ 37EB:07F8
cs=0x37eb;eip=0x0007f9; 	X(PUSH(ax));	// 119479 push    ax ;~ 37EB:07F9
cs=0x37eb;eip=0x0007fa; 	T(MOV(ax, 1));	// 119480 mov     ax, 1 ;~ 37EB:07FA
cs=0x37eb;eip=0x0007fd; 	R(CALL(sub_46986,0));	// 119481 call    sub_46986 ;~ 37EB:07FD
cs=0x37eb;eip=0x000800; 	X(POP(ax));	// 119482 pop     ax ;~ 37EB:0800
cs=0x37eb;eip=0x000801; 	X(POP(cx));	// 119483 pop     cx ;~ 37EB:0801
cs=0x37eb;eip=0x000802; 	X(POP(dx));	// 119484 pop     dx ;~ 37EB:0802
cs=0x37eb;eip=0x000803; 	X(POP(si));	// 119485 pop     si ;~ 37EB:0803
cs=0x37eb;eip=0x000804; 	R(RETN(0));	// 119486 retn ;~ 37EB:0804
sub_46c95:
	// 119493 
cs=0x37eb;eip=0x000805; 	X(PUSH(dx));	// 119495 push    dx ;~ 37EB:0805
ret_37eb_806:
	// 10669 
cs=0x37eb;eip=0x000806; 	T(XOR(ax, ax));	// 119496 xor     ax, ax ;~ 37EB:0806
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000808; 	T(MOV(dx, *(dw*)(((db*)&word_46e02))));	// 119497 mov     dx, cs:word_46E02 ;~ 37EB:0808
cs=0x37eb;eip=0x00080d; 	R(IN(al, dx));	// 119498 in      al, dx ;~ 37EB:080D
cs=0x37eb;eip=0x00080e; 	X(POP(dx));	// 119499 pop     dx ;~ 37EB:080E
cs=0x37eb;eip=0x00080f; 	R(RETN(0));	// 119500 retn ;~ 37EB:080F
sub_46ca0:
	// 119507 
cs=0x37eb;eip=0x000810; 	X(PUSH(ax));	// 119509 push    ax ;~ 37EB:0810
ret_37eb_811:
	// 10670 
cs=0x37eb;eip=0x000811; 	X(PUSH(cx));	// 119510 push    cx ;~ 37EB:0811
cs=0x37eb;eip=0x000812; 	X(PUSH(dx));	// 119511 push    dx ;~ 37EB:0812
cs=0x37eb;eip=0x000813; 	T(MOV(ah, 1));	// 119512 mov     ah, 1 ;~ 37EB:0813
cs=0x37eb;eip=0x000815; 	T(MOV(al, 0));	// 119513 mov     al, 0 ;~ 37EB:0815
cs=0x37eb;eip=0x000817; 	R(CALL(sub_46c57,0));	// 119514 call    sub_46C57 ;~ 37EB:0817
cs=0x37eb;eip=0x00081a; 	T(MOV(ah, 4));	// 119515 mov     ah, 4 ;~ 37EB:081A
cs=0x37eb;eip=0x00081c; 	T(MOV(al, 0x60));	// 119516 mov     al, 60h ; '`' ;~ 37EB:081C
cs=0x37eb;eip=0x00081e; 	R(CALL(sub_46c57,0));	// 119517 call    sub_46C57 ;~ 37EB:081E
cs=0x37eb;eip=0x000821; 	T(MOV(ah, 4));	// 119518 mov     ah, 4 ;~ 37EB:0821
cs=0x37eb;eip=0x000823; 	T(MOV(al, 0x80));	// 119519 mov     al, 80h ; '€' ;~ 37EB:0823
cs=0x37eb;eip=0x000825; 	R(CALL(sub_46c57,0));	// 119520 call    sub_46C57 ;~ 37EB:0825
cs=0x37eb;eip=0x000828; 	R(CALL(sub_46c95,0));	// 119521 call    sub_46C95 ;~ 37EB:0828
cs=0x37eb;eip=0x00082b; 	T(MOV(dx, ax));	// 119522 mov     dx, ax ;~ 37EB:082B
cs=0x37eb;eip=0x00082d; 	T(MOV(ah, 2));	// 119523 mov     ah, 2 ;~ 37EB:082D
cs=0x37eb;eip=0x00082f; 	T(MOV(al, 0x0FF));	// 119524 mov     al, 0FFh ;~ 37EB:082F
cs=0x37eb;eip=0x000831; 	R(CALL(sub_46c57,0));	// 119525 call    sub_46C57 ;~ 37EB:0831
cs=0x37eb;eip=0x000834; 	T(MOV(ah, 4));	// 119526 mov     ah, 4 ;~ 37EB:0834
cs=0x37eb;eip=0x000836; 	T(MOV(al, 0x21));	// 119527 mov     al, 21h ; '!' ;~ 37EB:0836
cs=0x37eb;eip=0x000838; 	R(CALL(sub_46c57,0));	// 119528 call    sub_46C57 ;~ 37EB:0838
cs=0x37eb;eip=0x00083b; 	T(MOV(cx, 0x12C));	// 119529 mov     cx, 12Ch ;~ 37EB:083B
loc_46cce:
	// 10671 
cs=0x37eb;eip=0x00083e; 	R(CALL(sub_46c95,0));	// 119532 call    sub_46C95 ;~ 37EB:083E
cs=0x37eb;eip=0x000841; 	T(AND(al, 0x0E0));	// 119533 and     al, 0E0h ;~ 37EB:0841
cs=0x37eb;eip=0x000843; 	T(CMP(al, 0x0C0));	// 119534 cmp     al, 0C0h ; 'À' ;~ 37EB:0843
cs=0x37eb;eip=0x000845; 	R(JZ(loc_46cd9));	// 119535 jz      short loc_46CD9 ;~ 37EB:0845
cs=0x37eb;eip=0x000847; 	R(LOOP(loc_46cce));	// 119536 loop    loc_46CCE ;~ 37EB:0847
loc_46cd9:
	// 10672 
cs=0x37eb;eip=0x000849; 	T(MOV(cx, ax));	// 119539 mov     cx, ax ;~ 37EB:0849
cs=0x37eb;eip=0x00084b; 	T(MOV(ah, 4));	// 119540 mov     ah, 4 ;~ 37EB:084B
cs=0x37eb;eip=0x00084d; 	T(MOV(al, 0x60));	// 119541 mov     al, 60h ; '`' ;~ 37EB:084D
cs=0x37eb;eip=0x00084f; 	R(CALL(sub_46c57,0));	// 119542 call    sub_46C57 ;~ 37EB:084F
cs=0x37eb;eip=0x000852; 	T(MOV(ah, 4));	// 119543 mov     ah, 4 ;~ 37EB:0852
cs=0x37eb;eip=0x000854; 	T(MOV(al, 0x80));	// 119544 mov     al, 80h ; '€' ;~ 37EB:0854
cs=0x37eb;eip=0x000856; 	R(CALL(sub_46c57,0));	// 119545 call    sub_46C57 ;~ 37EB:0856
cs=0x37eb;eip=0x000859; 	T(AND(dl, 0x0E0));	// 119546 and     dl, 0E0h ;~ 37EB:0859
cs=0x37eb;eip=0x00085c; 	T(CMP(dl, 0));	// 119547 cmp     dl, 0 ;~ 37EB:085C
cs=0x37eb;eip=0x00085f; 	T(STC);	// 119548 stc ;~ 37EB:085F
cs=0x37eb;eip=0x000860; 	R(JNZ(loc_46cfc));	// 119549 jnz     short loc_46CFC ;~ 37EB:0860
cs=0x37eb;eip=0x000862; 	T(AND(cl, 0x0E0));	// 119550 and     cl, 0E0h ;~ 37EB:0862
cs=0x37eb;eip=0x000865; 	T(CMP(cl, 0x0C0));	// 119551 cmp     cl, 0C0h ; 'À' ;~ 37EB:0865
cs=0x37eb;eip=0x000868; 	T(STC);	// 119552 stc ;~ 37EB:0868
cs=0x37eb;eip=0x000869; 	R(JNZ(loc_46cfc));	// 119553 jnz     short loc_46CFC ;~ 37EB:0869
cs=0x37eb;eip=0x00086b; 	T(CLC);	// 119554 clc ;~ 37EB:086B
loc_46cfc:
	// 10673 
cs=0x37eb;eip=0x00086c; 	X(POP(dx));	// 119558 pop     dx ;~ 37EB:086C
cs=0x37eb;eip=0x00086d; 	X(POP(cx));	// 119559 pop     cx ;~ 37EB:086D
cs=0x37eb;eip=0x00086e; 	X(POP(ax));	// 119560 pop     ax ;~ 37EB:086E
cs=0x37eb;eip=0x00086f; 	R(RETN(0));	// 119561 retn ;~ 37EB:086F
seg041_a7e_proc:
	// 119592 
loc_46f0e:
	// 10674 
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000a7e; 	X(MOV(*(dw*)(((db*)&word_46e02)), 0x388));	// 119593 mov     cs:word_46E02, 388h ;~ 37EB:0A7E
cs=0x37eb;eip=0x000a85; 	R(CALL(sub_46ca0,0));	// 119594 call    sub_46CA0 ;~ 37EB:0A85
cs=0x37eb;eip=0x000a88; 	R(JNC(loc_46f42));	// 119595 jnb     short loc_46F42 ;~ 37EB:0A88
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000a8a; 	X(MOV(*(dw*)(((db*)&word_46e02)), 0x318));	// 119596 mov     cs:word_46E02, 318h ;~ 37EB:0A8A
cs=0x37eb;eip=0x000a91; 	R(CALL(sub_46ca0,0));	// 119597 call    sub_46CA0 ;~ 37EB:0A91
cs=0x37eb;eip=0x000a94; 	R(JNC(loc_46f42));	// 119598 jnb     short loc_46F42 ;~ 37EB:0A94
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000a96; 	X(MOV(*(dw*)(((db*)&word_46e02)), 0x288));	// 119599 mov     cs:word_46E02, 288h ;~ 37EB:0A96
cs=0x37eb;eip=0x000a9d; 	R(CALL(sub_46ca0,0));	// 119600 call    sub_46CA0 ;~ 37EB:0A9D
cs=0x37eb;eip=0x000aa0; 	R(JNC(loc_46f42));	// 119601 jnb     short loc_46F42 ;~ 37EB:0AA0
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000aa2; 	X(MOV(*(dw*)(((db*)&word_46e02)), 0x218));	// 119602 mov     cs:word_46E02, 218h ;~ 37EB:0AA2
cs=0x37eb;eip=0x000aa9; 	R(CALL(sub_46ca0,0));	// 119603 call    sub_46CA0 ;~ 37EB:0AA9
cs=0x37eb;eip=0x000aac; 	R(JNC(loc_46f42));	// 119604 jnb     short loc_46F42 ;~ 37EB:0AAC
cs=0x37eb;eip=0x000aae; 	T(MOV(ax, 0));	// 119605 mov     ax, 0 ;~ 37EB:0AAE
cs=0x37eb;eip=0x000ab1; 	R(RETF(0));	// 119606 retf ;~ 37EB:0AB1
loc_46f42:
	// 10675 
cs=0x37eb;eip=0x000ab2; 	R(CALL(sub_464cf,0));	// 119611 call    sub_464CF ;~ 37EB:0AB2
cs=0x37eb;eip=0x000ab5; 	T(MOV(ah, 1));	// 119612 mov     ah, 1 ;~ 37EB:0AB5
cs=0x37eb;eip=0x000ab7; 	T(MOV(al, 0x20));	// 119613 mov     al, 20h ; ' ' ;~ 37EB:0AB7
cs=0x37eb;eip=0x000ab9; 	R(CALL(sub_46c57,0));	// 119614 call    sub_46C57 ;~ 37EB:0AB9
cs=0x37eb;eip=0x000abc; 	T(MOV(ah, 8));	// 119615 mov     ah, 8 ;~ 37EB:0ABC
cs=0x37eb;eip=0x000abe; 	T(MOV(al, 0));	// 119616 mov     al, 0 ;~ 37EB:0ABE
cs=0x37eb;eip=0x000ac0; 	R(CALL(sub_46c57,0));	// 119617 call    sub_46C57 ;~ 37EB:0AC0
cs=0x37eb;eip=0x000ac3; 	T(MOV(ah, 0x0BD));	// 119618 mov     ah, 0BDh ; '½' ;~ 37EB:0AC3
cs=0x37eb;eip=0x000ac5; 	T(MOV(al, 0));	// 119619 mov     al, 0 ;~ 37EB:0AC5
cs=0x37eb;eip=0x000ac7; 	R(CALL(sub_46c57,0));	// 119620 call    sub_46C57 ;~ 37EB:0AC7
cs=0x37eb;eip=0x000aca; 	T(MOV(ax, 0));	// 119621 mov     ax, 0 ;~ 37EB:0ACA
loc_46f5d:
	// 10676 
cs=0x37eb;eip=0x000acd; 	R(CALL(sub_469b8,0));	// 119624 call    sub_469B8 ;~ 37EB:0ACD
cs=0x37eb;eip=0x000ad0; 	T(INC(ax));	// 119625 inc     ax ;~ 37EB:0AD0
cs=0x37eb;eip=0x000ad1; 	T(CMP(ax, 9));	// 119626 cmp     ax, 9 ;~ 37EB:0AD1
cs=0x37eb;eip=0x000ad4; 	R(JC(loc_46f5d));	// 119627 jb      short loc_46F5D ;~ 37EB:0AD4
cs=0x37eb;eip=0x000ad6; 	T(MOV(ax, 0x0A));	// 119628 mov     ax, 0Ah ;~ 37EB:0AD6
cs=0x37eb;eip=0x000ad9; 	R(RETF(0));	// 119629 retf ;~ 37EB:0AD9
loc_46f6a:
	// 10677 
cs=0x37eb;eip=0x000ada; 	T(MOV(ax, 0));	// 119633 mov     ax, 0 ;~ 37EB:0ADA
loc_46f6d:
	// 10678 
cs=0x37eb;eip=0x000add; 	R(CALL(sub_469b8,0));	// 119636 call    sub_469B8 ;~ 37EB:0ADD
cs=0x37eb;eip=0x000ae0; 	T(INC(ax));	// 119637 inc     ax ;~ 37EB:0AE0
cs=0x37eb;eip=0x000ae1; 	T(CMP(ax, 9));	// 119638 cmp     ax, 9 ;~ 37EB:0AE1
cs=0x37eb;eip=0x000ae4; 	R(JC(loc_46f6d));	// 119639 jb      short loc_46F6D ;~ 37EB:0AE4
cs=0x37eb;eip=0x000ae6; 	R(CALL(sub_47154,0));	// 119640 call    sub_47154 ;~ 37EB:0AE6
cs=0x37eb;eip=0x000ae9; 	R(RETF(0));	// 119641 retf ;~ 37EB:0AE9
sub_46f7a:
	// 119646 
cs=0x37eb;eip=0x000aea; 	X(PUSH(ax));	// 119648 push    ax ;~ 37EB:0AEA
ret_37eb_aeb:
	// 10679 
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000aeb; 	X(MOV(*(dw*)(((db*)&dword_47167)), di));	// 119649 mov     word ptr cs:dword_47167, di ;~ 37EB:0AEB
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000af0; 	X(MOV(*(dw*)(((db*)&dword_47167)+2), es));	// 119650 mov     word ptr cs:dword_47167+2, es ;~ 37EB:0AF0
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000af5; 	X(MOV(*(dw*)(((db*)&dword_47173)), di));	// 119651 mov     word ptr cs:dword_47173, di ;~ 37EB:0AF5
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000afa; 	X(MOV(*(dw*)(((db*)&dword_47173)+2), es));	// 119652 mov     word ptr cs:dword_47173+2, es ;~ 37EB:0AFA
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000aff; 	X(MOV(*(dw*)(((db*)&dword_4716b)), ax));	// 119653 mov     word ptr cs:dword_4716B, ax ;~ 37EB:0AFF
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000b03; 	X(MOV(*(dw*)(((db*)&dword_4716b)+2), dx));	// 119654 mov     word ptr cs:dword_4716B+2, dx ;~ 37EB:0B03
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000b08; 	X(MOV(*(dw*)(((db*)&word_4716f)), ax));	// 119655 mov     cs:word_4716F, ax ;~ 37EB:0B08
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000b0c; 	X(MOV(*(dw*)(((db*)&word_47171)), dx));	// 119656 mov     cs:word_47171, dx ;~ 37EB:0B0C
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000b11; 	X(MOV(*(dw*)(((db*)&word_47179)), bx));	// 119657 mov     cs:word_47179, bx ;~ 37EB:0B11
cs=0x37eb;eip=0x000b16; 	X(PUSH(cx));	// 119658 push    cx ;~ 37EB:0B16
cs=0x37eb;eip=0x000b17; 	T(MOV(ax, 0x120));	// 119659 mov     ax, 120h ;~ 37EB:0B17
cs=0x37eb;eip=0x000b1a; 	R(CALL(sub_46c57,0));	// 119660 call    sub_46C57 ;~ 37EB:0B1A
cs=0x37eb;eip=0x000b1d; 	T(MOV(ax, 0x2021));	// 119661 mov     ax, 2021h ;~ 37EB:0B1D
cs=0x37eb;eip=0x000b20; 	R(CALL(sub_46c57,0));	// 119662 call    sub_46C57 ;~ 37EB:0B20
cs=0x37eb;eip=0x000b23; 	T(MOV(ax, 0x60F0));	// 119663 mov     ax, 60F0h ;~ 37EB:0B23
cs=0x37eb;eip=0x000b26; 	R(CALL(sub_46c57,0));	// 119664 call    sub_46C57 ;~ 37EB:0B26
cs=0x37eb;eip=0x000b29; 	T(MOV(ax, 0x80F0));	// 119665 mov     ax, 80F0h ;~ 37EB:0B29
cs=0x37eb;eip=0x000b2c; 	R(CALL(sub_46c57,0));	// 119666 call    sub_46C57 ;~ 37EB:0B2C
cs=0x37eb;eip=0x000b2f; 	T(MOV(ax, 0x0C001));	// 119667 mov     ax, 0C001h ;~ 37EB:0B2F
cs=0x37eb;eip=0x000b32; 	R(CALL(sub_46c57,0));	// 119668 call    sub_46C57 ;~ 37EB:0B32
cs=0x37eb;eip=0x000b35; 	T(MOV(ax, 0x0E000));	// 119669 mov     ax, 0E000h ;~ 37EB:0B35
cs=0x37eb;eip=0x000b38; 	R(CALL(sub_46c57,0));	// 119670 call    sub_46C57 ;~ 37EB:0B38
cs=0x37eb;eip=0x000b3b; 	T(MOV(ax, 0x433F));	// 119671 mov     ax, 433Fh ;~ 37EB:0B3B
cs=0x37eb;eip=0x000b3e; 	R(CALL(sub_46c57,0));	// 119672 call    sub_46C57 ;~ 37EB:0B3E
cs=0x37eb;eip=0x000b41; 	T(MOV(ax, 0x0B001));	// 119673 mov     ax, 0B001h ;~ 37EB:0B41
cs=0x37eb;eip=0x000b44; 	T(CLI);	// 119674 cli ;~ 37EB:0B44
cs=0x37eb;eip=0x000b45; 	T(MOV(ax, 0x0A08F));	// 119675 mov     ax, 0A08Fh ;~ 37EB:0B45
cs=0x37eb;eip=0x000b48; 	R(CALL(sub_46c57,0));	// 119676 call    sub_46C57 ;~ 37EB:0B48
cs=0x37eb;eip=0x000b4b; 	T(MOV(ax, 0x0B02E));	// 119677 mov     ax, 0B02Eh ;~ 37EB:0B4B
cs=0x37eb;eip=0x000b4e; 	R(CALL(sub_46c57,0));	// 119678 call    sub_46C57 ;~ 37EB:0B4E
cs=0x37eb;eip=0x000b51; 	T(MOV(al, 0x36));	// 119679 mov     al, 36h ; '6' ;~ 37EB:0B51
cs=0x37eb;eip=0x000b53; 	R(OUT(0x43, al));	// 119680 out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 37EB:0B53
cs=0x37eb;eip=0x000b55; 	T(XOR(al, al));	// 119681 xor     al, al ;~ 37EB:0B55
cs=0x37eb;eip=0x000b57; 	R(OUT(0x40, al));	// 119682 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 37EB:0B57
cs=0x37eb;eip=0x000b59; 	R(OUT(0x40, al));	// 119683 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 37EB:0B59
loc_46feb:
	// 10680 
cs=0x37eb;eip=0x000b5b; 	T(MOV(al, 6));	// 119686 mov     al, 6 ;~ 37EB:0B5B
cs=0x37eb;eip=0x000b5d; 	R(OUT(0x43, al));	// 119687 out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 37EB:0B5D
cs=0x37eb;eip=0x000b5f; 	R(IN(al, 0x40));	// 119688 in      al, 40h         ; Timer 8253-5 (AT: 8254.2). ;~ 37EB:0B5F
cs=0x37eb;eip=0x000b61; 	T(MOV(cl, al));	// 119689 mov     cl, al ;~ 37EB:0B61
cs=0x37eb;eip=0x000b63; 	R(IN(al, 0x40));	// 119690 in      al, 40h         ; Timer 8253-5 (AT: 8254.2). ;~ 37EB:0B63
cs=0x37eb;eip=0x000b65; 	T(MOV(ch, al));	// 119691 mov     ch, al ;~ 37EB:0B65
cs=0x37eb;eip=0x000b67; 	T(CMP(cx, 0x0F6AD));	// 119692 cmp     cx, 0F6ADh ;~ 37EB:0B67
cs=0x37eb;eip=0x000b6b; 	R(JG(loc_46feb));	// 119693 jg      short loc_46FEB ;~ 37EB:0B6B
cs=0x37eb;eip=0x000b6d; 	T(MOV(ax, 0x0B020));	// 119694 mov     ax, 0B020h ;~ 37EB:0B6D
cs=0x37eb;eip=0x000b70; 	R(CALL(sub_46c57,0));	// 119695 call    sub_46C57 ;~ 37EB:0B70
cs=0x37eb;eip=0x000b73; 	T(MOV(ax, 0x0A000));	// 119696 mov     ax, 0A000h ;~ 37EB:0B73
cs=0x37eb;eip=0x000b76; 	R(CALL(sub_46c57,0));	// 119697 call    sub_46C57 ;~ 37EB:0B76
cs=0x37eb;eip=0x000b79; 	X(POP(cx));	// 119698 pop     cx ;~ 37EB:0B79
cs=0x37eb;eip=0x000b7a; 	R(CALL(sub_47017,0));	// 119699 call    sub_47017 ;~ 37EB:0B7A
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000b7d; 	X(MOV(*(dw*)(((db*)&word_47177)), 0));	// 119700 mov     cs:word_47177, 0 ;~ 37EB:0B7D
cs=0x37eb;eip=0x000b84; 	T(STI);	// 119701 sti ;~ 37EB:0B84
cs=0x37eb;eip=0x000b85; 	X(POP(ax));	// 119702 pop     ax ;~ 37EB:0B85
cs=0x37eb;eip=0x000b86; 	R(RETN(0));	// 119703 retn ;~ 37EB:0B86
sub_47017:
	// 119710 
cs=0x37eb;eip=0x000b87; 	X(PUSH(ax));	// 119711 push    ax ;~ 37EB:0B87
ret_37eb_b88:
	// 10681 
cs=0x37eb;eip=0x000b88; 	X(PUSH(cx));	// 119712 push    cx ;~ 37EB:0B88
cs=0x37eb;eip=0x000b89; 	X(PUSH(dx));	// 119713 push    dx ;~ 37EB:0B89
cs=0x37eb;eip=0x000b8a; 	X(PUSH(si));	// 119714 push    si ;~ 37EB:0B8A
cs=0x37eb;eip=0x000b8b; 	X(PUSH(ds));	// 119715 push    ds ;~ 37EB:0B8B
cs=0x37eb;eip=0x000b8c; 	T(MOV(dx, 0x12));	// 119716 mov     dx, 12h ;~ 37EB:0B8C
cs=0x37eb;eip=0x000b8f; 	T(MOV(ax, 0x34DC));	// 119717 mov     ax, 34DCh ;~ 37EB:0B8F
cs=0x37eb;eip=0x000b92; 	T(DIV2(cx));	// 119718 div     cx ;~ 37EB:0B92
cs=0x37eb;eip=0x000b94; 	T(SHR(cx, 1));	// 119719 shr     cx, 1 ;~ 37EB:0B94
cs=0x37eb;eip=0x000b96; 	T(CMP(cx, dx));	// 119720 cmp     cx, dx ;~ 37EB:0B96
cs=0x37eb;eip=0x000b98; 	T(ADC(ax, 0));	// 119721 adc     ax, 0 ;~ 37EB:0B98
cs=0x37eb;eip=0x000b9b; 	T(MOV(cx, ax));	// 119722 mov     cx, ax ;~ 37EB:0B9B
cs=0x37eb;eip=0x000b9d; 	T(MOV(al, 0x36));	// 119723 mov     al, 36h ; '6' ;~ 37EB:0B9D
cs=0x37eb;eip=0x000b9f; 	R(OUT(0x43, al));	// 119724 out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 37EB:0B9F
cs=0x37eb;eip=0x000ba1; 	T(MOV(al, cl));	// 119725 mov     al, cl ;~ 37EB:0BA1
cs=0x37eb;eip=0x000ba3; 	R(OUT(0x40, al));	// 119726 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 37EB:0BA3
cs=0x37eb;eip=0x000ba5; 	T(MOV(al, ch));	// 119727 mov     al, ch ;~ 37EB:0BA5
cs=0x37eb;eip=0x000ba7; 	R(OUT(0x40, al));	// 119728 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 37EB:0BA7
cs=0x37eb;eip=0x000ba9; 	T(MOV(ax, 0x2E9C));	// 119729 mov     ax, 2E9Ch ;~ 37EB:0BA9
cs=0x37eb;eip=0x000bac; 	T(XOR(dx, dx));	// 119730 xor     dx, dx ;~ 37EB:0BAC
cs=0x37eb;eip=0x000bae; 	T(DIV2(cx));	// 119731 div     cx ;~ 37EB:0BAE
cs=0x37eb;eip=0x000bb0; 	T(SHR(cx, 1));	// 119732 shr     cx, 1 ;~ 37EB:0BB0
cs=0x37eb;eip=0x000bb2; 	T(CMP(cx, dx));	// 119733 cmp     cx, dx ;~ 37EB:0BB2
cs=0x37eb;eip=0x000bb4; 	T(ADC(ax, 0));	// 119734 adc     ax, 0 ;~ 37EB:0BB4
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000bb7; 	X(MOV(*(dw*)(((db*)&word_4717f)), ax));	// 119735 mov     cs:word_4717F, ax ;~ 37EB:0BB7
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000bbb; 	X(MOV(*(dw*)(((db*)&word_47181)), ax));	// 119736 mov     cs:word_47181, ax ;~ 37EB:0BBB
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000bbf; 	T(MOV(ax, *(dw*)(((db*)&dword_4717b)+2)));	// 119737 mov     ax, word ptr cs:dword_4717B+2 ;~ 37EB:0BBF
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000bc3; 	T(OR(ax, *(dw*)(((db*)&dword_4717b))));	// 119738 or      ax, word ptr cs:dword_4717B ;~ 37EB:0BC3
cs=0x37eb;eip=0x000bc8; 	R(JNZ(loc_47075));	// 119739 jnz     short loc_47075 ;~ 37EB:0BC8
cs=0x37eb;eip=0x000bca; 	T(XOR(ax, ax));	// 119740 xor     ax, ax ;~ 37EB:0BCA
cs=0x37eb;eip=0x000bcc; 	T(MOV(ds, ax));	// 119741 mov     ds, ax ;~ 37EB:0BCC
cs=0x37eb;eip=0x000bce; 	T(MOV(si, 0x20));	// 119743 mov     si, 20h ; ' ' ;~ 37EB:0BCE
cs=0x37eb;eip=0x000bd1; 	T(MOV(ax, *(dw*)(raddr(ds,si+2))));	// 119744 mov     ax, [si+2] ;~ 37EB:0BD1
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000bd4; 	X(MOV(*(dw*)(((db*)&dword_4717b)+2), ax));	// 119745 mov     word ptr cs:dword_4717B+2, ax ;~ 37EB:0BD4
cs=0x37eb;eip=0x000bd8; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 119746 mov     ax, [si] ;~ 37EB:0BD8
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000bda; 	X(MOV(*(dw*)(((db*)&dword_4717b)), ax));	// 119747 mov     word ptr cs:dword_4717B, ax ;~ 37EB:0BDA
cs=0x37eb;eip=0x000bde; 	X(MOV(*(dw*)(raddr(ds,si)), 0x0C2E));	// 119748 mov     word ptr [si], 0C2Eh ;~ 37EB:0BDE
cs=0x37eb;eip=0x000be2; 	X(MOV(*(dw*)(raddr(ds,si+2)), cs));	// 119749 mov     word ptr [si+2], cs ;~ 37EB:0BE2
loc_47075:
	// 10682 
cs=0x37eb;eip=0x000be5; 	X(POP(ds));	// 119752 pop     ds ;~ 37EB:0BE5
cs=0x37eb;eip=0x000be6; 	X(POP(si));	// 119754 pop     si ;~ 37EB:0BE6
cs=0x37eb;eip=0x000be7; 	X(POP(dx));	// 119755 pop     dx ;~ 37EB:0BE7
cs=0x37eb;eip=0x000be8; 	X(POP(cx));	// 119756 pop     cx ;~ 37EB:0BE8
cs=0x37eb;eip=0x000be9; 	X(POP(ax));	// 119757 pop     ax ;~ 37EB:0BE9
cs=0x37eb;eip=0x000bea; 	R(RETN(0));	// 119758 retn ;~ 37EB:0BEA
sub_4707b:
	// 119765 
cs=0x37eb;eip=0x000beb; 	X(PUSH(ax));	// 119766 push    ax ;~ 37EB:0BEB
ret_37eb_bec:
	// 10683 
cs=0x37eb;eip=0x000bec; 	X(PUSH(di));	// 119767 push    di ;~ 37EB:0BEC
cs=0x37eb;eip=0x000bed; 	X(PUSH(ds));	// 119768 push    ds ;~ 37EB:0BED
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000bee; 	T(MOV(ax, *(dw*)(((db*)&dword_4717b)+2)));	// 119769 mov     ax, word ptr cs:dword_4717B+2 ;~ 37EB:0BEE
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000bf2; 	T(OR(ax, *(dw*)(((db*)&dword_4717b))));	// 119770 or      ax, word ptr cs:dword_4717B ;~ 37EB:0BF2
cs=0x37eb;eip=0x000bf7; 	R(JZ(loc_470ba));	// 119771 jz      short loc_470BA ;~ 37EB:0BF7
cs=0x37eb;eip=0x000bf9; 	T(CLI);	// 119772 cli ;~ 37EB:0BF9
cs=0x37eb;eip=0x000bfa; 	T(MOV(al, 0x36));	// 119773 mov     al, 36h ; '6' ;~ 37EB:0BFA
cs=0x37eb;eip=0x000bfc; 	R(OUT(0x43, al));	// 119774 out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 37EB:0BFC
cs=0x37eb;eip=0x000bfe; 	T(MOV(ax, 0x2E9C));	// 119775 mov     ax, 2E9Ch ;~ 37EB:0BFE
cs=0x37eb;eip=0x000c01; 	R(OUT(0x40, al));	// 119776 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 37EB:0C01
cs=0x37eb;eip=0x000c03; 	T(MOV(al, ah));	// 119777 mov     al, ah ;~ 37EB:0C03
cs=0x37eb;eip=0x000c05; 	R(OUT(0x40, al));	// 119778 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 37EB:0C05
cs=0x37eb;eip=0x000c07; 	T(XOR(ax, ax));	// 119779 xor     ax, ax ;~ 37EB:0C07
cs=0x37eb;eip=0x000c09; 	T(MOV(ds, ax));	// 119780 mov     ds, ax ;~ 37EB:0C09
cs=0x37eb;eip=0x000c0b; 	T(MOV(di, 0x20));	// 119782 mov     di, 20h ; ' ' ;~ 37EB:0C0B
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000c0e; 	T(MOV(ax, *(dw*)(((db*)&dword_4717b)+2)));	// 119783 mov     ax, word ptr cs:dword_4717B+2 ;~ 37EB:0C0E
cs=0x37eb;eip=0x000c12; 	X(MOV(*(dw*)(raddr(ds,di+2)), ax));	// 119784 mov     [di+2], ax ;~ 37EB:0C12
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000c15; 	T(MOV(ax, *(dw*)(((db*)&dword_4717b))));	// 119785 mov     ax, word ptr cs:dword_4717B ;~ 37EB:0C15
cs=0x37eb;eip=0x000c19; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 119786 mov     [di], ax ;~ 37EB:0C19
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000c1b; 	X(MOV(*(dw*)(((db*)&dword_4717b)+2), 0));	// 119787 mov     word ptr cs:dword_4717B+2, 0 ;~ 37EB:0C1B
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000c22; 	X(MOV(*(dw*)(((db*)&dword_4717b)), 0));	// 119788 mov     word ptr cs:dword_4717B, 0 ;~ 37EB:0C22
cs=0x37eb;eip=0x000c29; 	T(STI);	// 119789 sti ;~ 37EB:0C29
loc_470ba:
	// 10684 
cs=0x37eb;eip=0x000c2a; 	X(POP(ds));	// 119792 pop     ds ;~ 37EB:0C2A
cs=0x37eb;eip=0x000c2b; 	X(POP(di));	// 119794 pop     di ;~ 37EB:0C2B
cs=0x37eb;eip=0x000c2c; 	X(POP(ax));	// 119795 pop     ax ;~ 37EB:0C2C
cs=0x37eb;eip=0x000c2d; 	R(RETN(0));	// 119796 retn ;~ 37EB:0C2D
seg041_c2e_proc:
	// 119800 
cs=0x37eb;eip=0x000c2e; 	X(PUSH(ax));	// 119800 push    ax ;~ 37EB:0C2E
ret_37eb_c2f:
	// 10685 
cs=0x37eb;eip=0x000c2f; 	X(PUSH(bx));	// 119801 push    bx ;~ 37EB:0C2F
cs=0x37eb;eip=0x000c30; 	X(PUSH(cx));	// 119802 push    cx ;~ 37EB:0C30
cs=0x37eb;eip=0x000c31; 	X(PUSH(dx));	// 119803 push    dx ;~ 37EB:0C31
cs=0x37eb;eip=0x000c32; 	X(PUSH(si));	// 119804 push    si ;~ 37EB:0C32
cs=0x37eb;eip=0x000c33; 	X(PUSH(es));	// 119805 push    es ;~ 37EB:0C33
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000c34; 	T(MOV(ax, *(dw*)(((db*)&word_4716f))));	// 119806 mov     ax, cs:word_4716F ;~ 37EB:0C34
cs=0x37eb;eip=0x000c38; 	T(OR(ax, ax));	// 119807 or      ax, ax ;~ 37EB:0C38
cs=0x37eb;eip=0x000c3a; 	R(JZ(loc_470fb));	// 119808 jz      short loc_470FB ;~ 37EB:0C3A
cs=0x37eb;eip=0x000c3c; 	T(MOV(al, 0x40));	// 119809 mov     al, 40h ; '@' ;~ 37EB:0C3C
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000c3e; 	T(MOV(dx, *(dw*)(((db*)&word_46e02))));	// 119810 mov     dx, cs:word_46E02 ;~ 37EB:0C3E
cs=0x37eb;eip=0x000c43; 	R(OUT(dx, al));	// 119811 out     dx, al ;~ 37EB:0C43
cs=0x37eb;eip=0x000c44; 	T(MOV(cx, 0x0A));	// 119812 mov     cx, 0Ah ;~ 37EB:0C44
loc_470d7:
	// 10686 
cs=0x37eb;eip=0x000c47; 	R(IN(al, dx));	// 119815 in      al, dx ;~ 37EB:0C47
cs=0x37eb;eip=0x000c48; 	R(LOOP(loc_470d7));	// 119816 loop    loc_470D7 ;~ 37EB:0C48
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000c4a; 	T(LES(bx, *(dd*)(((db*)&dword_47173))));	// 119817 les     bx, cs:dword_47173 ;~ 37EB:0C4A
cs=0x37eb;eip=0x000c4f; 	T(MOV(al, *(raddr(es,bx))));	// 119818 mov     al, es:[bx] ;~ 37EB:0C4F
cs=0x37eb;eip=0x000c52; 	T(XOR(ah, ah));	// 119819 xor     ah, ah ;~ 37EB:0C52
cs=0x37eb;eip=0x000c54; 	T(MOV(si, ax));	// 119820 mov     si, ax ;~ 37EB:0C54
cs=0x37eb;eip=0x000c56; 	T(MOV(al, *(raddr(cs,si+0x0CF3))));	// 119821 mov     al, cs:[si+0CF3h] ;~ 37EB:0C56
cs=0x37eb;eip=0x000c5b; 	T(INC(dx));	// 119822 inc     dx ;~ 37EB:0C5B
cs=0x37eb;eip=0x000c5c; 	R(OUT(dx, al));	// 119823 out     dx, al ;~ 37EB:0C5C
cs=0x37eb;eip=0x000c5d; 	T(INC(bx));	// 119824 inc     bx ;~ 37EB:0C5D
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000c5e; 	X(MOV(*(dw*)(((db*)&dword_47173)), bx));	// 119825 mov     word ptr cs:dword_47173, bx ;~ 37EB:0C5E
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000c63; 	X(SUB(*(dw*)(((db*)&word_4716f)), 1));	// 119826 sub     cs:word_4716F, 1 ;~ 37EB:0C63
cs=0x37eb;eip=0x000c69; 	R(JMP(loc_4712f));	// 119827 jmp     short loc_4712F ;~ 37EB:0C69
loc_470fb:
	// 10687 
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000c6b; 	T(CMP(*(dw*)(((db*)&word_47179)), 0));	// 119831 cmp     cs:word_47179, 0 ;~ 37EB:0C6B
cs=0x37eb;eip=0x000c71; 	R(JZ(loc_4710a));	// 119832 jz      short loc_4710A ;~ 37EB:0C71
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000c73; 	X(DEC(*(dw*)(((db*)&word_47179))));	// 119833 dec     cs:word_47179 ;~ 37EB:0C73
cs=0x37eb;eip=0x000c78; 	R(JZ(loc_4712a));	// 119834 jz      short loc_4712A ;~ 37EB:0C78
loc_4710a:
	// 10688 
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000c7a; 	T(LES(bx, *(dd*)(((db*)&dword_47167))));	// 119837 les     bx, cs:dword_47167 ;~ 37EB:0C7A
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000c7f; 	X(MOV(*(dw*)(((db*)&dword_47173)), bx));	// 119838 mov     word ptr cs:dword_47173, bx ;~ 37EB:0C7F
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000c84; 	X(MOV(*(dw*)(((db*)&dword_47173)+2), es));	// 119839 mov     word ptr cs:dword_47173+2, es ;~ 37EB:0C84
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000c89; 	T(LES(bx, *(dd*)(((db*)&dword_4716b))));	// 119840 les     bx, cs:dword_4716B ;~ 37EB:0C89
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000c8e; 	X(MOV(*(dw*)(((db*)&word_4716f)), bx));	// 119841 mov     cs:word_4716F, bx ;~ 37EB:0C8E
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000c93; 	X(MOV(*(dw*)(((db*)&word_47171)), es));	// 119842 mov     cs:word_47171, es ;~ 37EB:0C93
cs=0x37eb;eip=0x000c98; 	R(JMP(loc_4712f));	// 119843 jmp     short loc_4712F ;~ 37EB:0C98
loc_4712a:
	// 10689 
cs=0x37eb;eip=0x000c9a; 	R(CALL(sub_47154,0));	// 119847 call    sub_47154 ;~ 37EB:0C9A
cs=0x37eb;eip=0x000c9d; 	R(JMP(loc_47149));	// 119848 jmp     short loc_47149 ;~ 37EB:0C9D
loc_4712f:
	// 10690 
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000c9f; 	X(DEC(*(dw*)(((db*)&word_47181))));	// 119853 dec     cs:word_47181 ;~ 37EB:0C9F
cs=0x37eb;eip=0x000ca4; 	R(JNZ(loc_47149));	// 119854 jnz     short loc_47149 ;~ 37EB:0CA4
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000ca6; 	T(MOV(ax, *(dw*)(((db*)&word_4717f))));	// 119855 mov     ax, cs:word_4717F ;~ 37EB:0CA6
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000caa; 	X(MOV(*(dw*)(((db*)&word_47181)), ax));	// 119856 mov     cs:word_47181, ax ;~ 37EB:0CAA
cs=0x37eb;eip=0x000cae; 	X(POP(es));	// 119857 pop     es ;~ 37EB:0CAE
cs=0x37eb;eip=0x000caf; 	X(POP(si));	// 119858 pop     si ;~ 37EB:0CAF
cs=0x37eb;eip=0x000cb0; 	X(POP(dx));	// 119859 pop     dx ;~ 37EB:0CB0
cs=0x37eb;eip=0x000cb1; 	X(POP(cx));	// 119860 pop     cx ;~ 37EB:0CB1
cs=0x37eb;eip=0x000cb2; 	X(POP(bx));	// 119861 pop     bx ;~ 37EB:0CB2
cs=0x37eb;eip=0x000cb3; 	X(POP(ax));	// 119862 pop     ax ;~ 37EB:0CB3
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000cb4; __disp=*(dd*)(((db*)&dword_4717b));
	R(JMP(__dispatch_call));	// 119863 jmp     cs:dword_4717B ;~ 37EB:0CB4
loc_47149:
	// 10691 
cs=0x37eb;eip=0x000cb9; 	T(MOV(al, 0x20));	// 119868 mov     al, 20h ; ' ' ;~ 37EB:0CB9
cs=0x37eb;eip=0x000cbb; 	R(OUT(0x20, al));	// 119869 out     20h, al         ; Interrupt controller, 8259A. ;~ 37EB:0CBB
cs=0x37eb;eip=0x000cbd; 	X(POP(es));	// 119870 pop     es ;~ 37EB:0CBD
cs=0x37eb;eip=0x000cbe; 	X(POP(si));	// 119871 pop     si ;~ 37EB:0CBE
cs=0x37eb;eip=0x000cbf; 	X(POP(dx));	// 119872 pop     dx ;~ 37EB:0CBF
cs=0x37eb;eip=0x000cc0; 	X(POP(cx));	// 119873 pop     cx ;~ 37EB:0CC0
cs=0x37eb;eip=0x000cc1; 	X(POP(bx));	// 119874 pop     bx ;~ 37EB:0CC1
cs=0x37eb;eip=0x000cc2; 	X(POP(ax));	// 119875 pop     ax ;~ 37EB:0CC2
cs=0x37eb;eip=0x000cc3; 	R(IRET);	// 119876 iret ;~ 37EB:0CC3
sub_47154:
	// 119881 
cs=0x37eb;eip=0x000cc4; 	X(PUSH(ax));	// 119883 push    ax ;~ 37EB:0CC4
ret_37eb_cc5:
	// 10692 
cs=0x37eb;eip=0x000cc5; 	R(CALL(sub_4707b,0));	// 119884 call    sub_4707B ;~ 37EB:0CC5
cs=0x37eb;eip=0x000cc8; 	T(MOV(ax, 0x0B001));	// 119885 mov     ax, 0B001h ;~ 37EB:0CC8
cs=0x37eb;eip=0x000ccb; 	R(CALL(sub_46c57,0));	// 119886 call    sub_46C57 ;~ 37EB:0CCB
	cs=seg_offset(seg041);
cs=0x37eb;eip=0x000cce; 	X(MOV(*(dw*)(((db*)&word_47177)), 1));	// 119887 mov     cs:word_47177, 1 ;~ 37EB:0CCE
cs=0x37eb;eip=0x000cd5; 	X(POP(ax));	// 119888 pop     ax ;~ 37EB:0CD5
cs=0x37eb;eip=0x000cd6; 	R(RETN(0));	// 119889 retn ;~ 37EB:0CD6

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return true;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_46490: 	goto loc_46490;
        case m2c::kloc_464d8: 	goto loc_464d8;
        case m2c::kloc_464eb: 	goto loc_464eb;
        case m2c::kloc_464ee: 	goto loc_464ee;
        case m2c::kloc_464fb: 	goto loc_464fb;
        case m2c::kloc_4650c: 	goto loc_4650c;
        case m2c::kloc_46563: 	goto loc_46563;
        case m2c::kloc_46572: 	goto loc_46572;
        case m2c::kloc_46581: 	goto loc_46581;
        case m2c::kloc_46585: 	goto loc_46585;
        case m2c::kloc_46595: 	goto loc_46595;
        case m2c::kloc_4659b: 	goto loc_4659b;
        case m2c::kloc_465f8: 	goto loc_465f8;
        case m2c::kloc_465fc: 	goto loc_465fc;
        case m2c::kloc_4661a: 	goto loc_4661a;
        case m2c::kloc_4666e: 	goto loc_4666e;
        case m2c::kloc_4667f: 	goto loc_4667f;
        case m2c::kloc_4668c: 	goto loc_4668c;
        case m2c::kloc_466a3: 	goto loc_466a3;
        case m2c::kloc_466b5: 	goto loc_466b5;
        case m2c::kloc_466e0: 	goto loc_466e0;
        case m2c::kloc_466f2: 	goto loc_466f2;
        case m2c::kloc_466fe: 	goto loc_466fe;
        case m2c::kloc_4671c: 	goto loc_4671c;
        case m2c::kloc_46732: 	goto loc_46732;
        case m2c::kloc_46742: 	goto loc_46742;
        case m2c::kloc_46752: 	goto loc_46752;
        case m2c::kloc_46756: 	goto loc_46756;
        case m2c::kloc_46767: 	goto loc_46767;
        case m2c::kloc_4677b: 	goto loc_4677b;
        case m2c::kloc_46794: 	goto loc_46794;
        case m2c::kloc_4679e: 	goto loc_4679e;
        case m2c::kloc_467a8: 	goto loc_467a8;
        case m2c::kloc_467c3: 	goto loc_467c3;
        case m2c::kloc_467d1: 	goto loc_467d1;
        case m2c::kloc_467ef: 	goto loc_467ef;
        case m2c::kloc_467fd: 	goto loc_467fd;
        case m2c::kloc_46850: 	goto loc_46850;
        case m2c::kloc_46861: 	goto loc_46861;
        case m2c::kloc_46879: 	goto loc_46879;
        case m2c::kloc_4689f: 	goto loc_4689f;
        case m2c::kloc_468ac: 	goto loc_468ac;
        case m2c::kloc_468c8: 	goto loc_468c8;
        case m2c::kloc_468d5: 	goto loc_468d5;
        case m2c::kloc_468d9: 	goto loc_468d9;
        case m2c::kloc_468e7: 	goto loc_468e7;
        case m2c::kloc_46922: 	goto loc_46922;
        case m2c::kloc_46925: 	goto loc_46925;
        case m2c::kloc_46932: 	goto loc_46932;
        case m2c::kloc_46938: 	goto loc_46938;
        case m2c::kloc_46945: 	goto loc_46945;
        case m2c::kloc_4694e: 	goto loc_4694e;
        case m2c::kloc_4695b: 	goto loc_4695b;
        case m2c::kloc_46969: 	goto loc_46969;
        case m2c::kloc_46982: 	goto loc_46982;
        case m2c::kloc_4699f: 	goto loc_4699f;
        case m2c::kloc_46b66: 	goto loc_46b66;
        case m2c::kloc_46b6f: 	goto loc_46b6f;
        case m2c::kloc_46c0b: 	goto loc_46c0b;
        case m2c::kloc_46c71: 	goto loc_46c71;
        case m2c::kloc_46cce: 	goto loc_46cce;
        case m2c::kloc_46cd9: 	goto loc_46cd9;
        case m2c::kloc_46cfc: 	goto loc_46cfc;
        case m2c::kloc_46f0e: 	goto loc_46f0e;
        case m2c::kloc_46f42: 	goto loc_46f42;
        case m2c::kloc_46f5d: 	goto loc_46f5d;
        case m2c::kloc_46f6a: 	goto loc_46f6a;
        case m2c::kloc_46f6d: 	goto loc_46f6d;
        case m2c::kloc_46feb: 	goto loc_46feb;
        case m2c::kloc_47075: 	goto loc_47075;
        case m2c::kloc_470ba: 	goto loc_470ba;
        case m2c::kloc_470d7: 	goto loc_470d7;
        case m2c::kloc_470fb: 	goto loc_470fb;
        case m2c::kloc_4710a: 	goto loc_4710a;
        case m2c::kloc_4712a: 	goto loc_4712a;
        case m2c::kloc_4712f: 	goto loc_4712f;
        case m2c::kloc_47149: 	goto loc_47149;
        case m2c::kret_37eb_12: 	goto ret_37eb_12;
        case m2c::kret_37eb_15: 	goto ret_37eb_15;
        case m2c::kret_37eb_18: 	goto ret_37eb_18;
        case m2c::kret_37eb_1b: 	goto ret_37eb_1b;
        case m2c::kret_37eb_1e: 	goto ret_37eb_1e;
        case m2c::kret_37eb_21: 	goto ret_37eb_21;
        case m2c::kret_37eb_24: 	goto ret_37eb_24;
        case m2c::kret_37eb_27: 	goto ret_37eb_27;
        case m2c::kret_37eb_2a: 	goto ret_37eb_2a;
        case m2c::kret_37eb_2d: 	goto ret_37eb_2d;
        case m2c::kret_37eb_3: 	goto ret_37eb_3;
        case m2c::kret_37eb_30: 	goto ret_37eb_30;
        case m2c::kret_37eb_33: 	goto ret_37eb_33;
        case m2c::kret_37eb_36: 	goto ret_37eb_36;
        case m2c::kret_37eb_39: 	goto ret_37eb_39;
        case m2c::kret_37eb_3c: 	goto ret_37eb_3c;
        case m2c::kret_37eb_40: 	goto ret_37eb_40;
        case m2c::kret_37eb_4f7: 	goto ret_37eb_4f7;
        case m2c::kret_37eb_529: 	goto ret_37eb_529;
        case m2c::kret_37eb_586: 	goto ret_37eb_586;
        case m2c::kret_37eb_5fc: 	goto ret_37eb_5fc;
        case m2c::kret_37eb_6: 	goto ret_37eb_6;
        case m2c::kret_37eb_632: 	goto ret_37eb_632;
        case m2c::kret_37eb_648: 	goto ret_37eb_648;
        case m2c::kret_37eb_65f: 	goto ret_37eb_65f;
        case m2c::kret_37eb_67f: 	goto ret_37eb_67f;
        case m2c::kret_37eb_695: 	goto ret_37eb_695;
        case m2c::kret_37eb_6ac: 	goto ret_37eb_6ac;
        case m2c::kret_37eb_6cc: 	goto ret_37eb_6cc;
        case m2c::kret_37eb_6fa: 	goto ret_37eb_6fa;
        case m2c::kret_37eb_721: 	goto ret_37eb_721;
        case m2c::kret_37eb_731: 	goto ret_37eb_731;
        case m2c::kret_37eb_7c8: 	goto ret_37eb_7c8;
        case m2c::kret_37eb_806: 	goto ret_37eb_806;
        case m2c::kret_37eb_811: 	goto ret_37eb_811;
        case m2c::kret_37eb_9: 	goto ret_37eb_9;
        case m2c::kret_37eb_aeb: 	goto ret_37eb_aeb;
        case m2c::kret_37eb_b88: 	goto ret_37eb_b88;
        case m2c::kret_37eb_bec: 	goto ret_37eb_bec;
        case m2c::kret_37eb_c: 	goto ret_37eb_c;
        case m2c::kret_37eb_c2f: 	goto ret_37eb_c2f;
        case m2c::kret_37eb_cc5: 	goto ret_37eb_cc5;
        case m2c::kret_37eb_f: 	goto ret_37eb_f;
        case m2c::kseg041_c2e_proc: 	goto seg041_c2e_proc;
        case m2c::ksub_464cf: 	goto sub_464cf;
        case m2c::ksub_46986: 	goto sub_46986;
        case m2c::ksub_469b8: 	goto sub_469b8;
        case m2c::ksub_46a15: 	goto sub_46a15;
        case m2c::ksub_46a8b: 	goto sub_46a8b;
        case m2c::ksub_46ac1: 	goto sub_46ac1;
        case m2c::ksub_46ad7: 	goto sub_46ad7;
        case m2c::ksub_46aee: 	goto sub_46aee;
        case m2c::ksub_46b0e: 	goto sub_46b0e;
        case m2c::ksub_46b24: 	goto sub_46b24;
        case m2c::ksub_46b3b: 	goto sub_46b3b;
        case m2c::ksub_46b5b: 	goto sub_46b5b;
        case m2c::ksub_46b89: 	goto sub_46b89;
        case m2c::ksub_46bb0: 	goto sub_46bb0;
        case m2c::ksub_46bc0: 	goto sub_46bc0;
        case m2c::ksub_46c57: 	goto sub_46c57;
        case m2c::ksub_46c95: 	goto sub_46c95;
        case m2c::ksub_46ca0: 	goto sub_46ca0;
        case m2c::ksub_46f7a: 	goto sub_46f7a;
        case m2c::ksub_47017: 	goto sub_47017;
        case m2c::ksub_4707b: 	goto sub_4707b;
        case m2c::ksub_47154: 	goto sub_47154;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

