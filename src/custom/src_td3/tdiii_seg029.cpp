/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool _group19(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group19:
    _begin:
sub_28183:
	// 46214 
#undef arg_2
#define arg_2 6
	// 46217 arg_2           = word ptr  6 ;~ 19BA:0003
#undef arg_4
#define arg_4 8
	// 46218 arg_4           = word ptr  8 ;~ 19BA:0003
#undef arg_6
#define arg_6 0x0A
	// 46219 arg_6           = word ptr  0Ah ;~ 19BA:0003
#undef arg_8
#define arg_8 0x0C
	// 46220 arg_8           = word ptr  0Ch ;~ 19BA:0003
#undef arg_a
#define arg_a 0x0E
	// 46221 arg_A           = word ptr  0Eh ;~ 19BA:0003
#undef arg_c
#define arg_c 0x10
	// 46222 arg_C           = word ptr  10h ;~ 19BA:0003
ret_19ba_3:
	// 7718 
cs=0x19ba;eip=0x000003; 	X(PUSH(bp));	// 46224 push    bp ;~ 19BA:0003
cs=0x19ba;eip=0x000004; 	T(MOV(bp, sp));	// 46225 mov     bp, sp ;~ 19BA:0004
cs=0x19ba;eip=0x000006; 	X(PUSH(di));	// 46226 push    di ;~ 19BA:0006
cs=0x19ba;eip=0x000007; 	X(PUSH(si));	// 46227 push    si ;~ 19BA:0007
cs=0x19ba;eip=0x000008; 	T(CLD);	// 46228 cld ;~ 19BA:0008
cs=0x19ba;eip=0x000009; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 46229 mov     si, [bp+arg_2] ;~ 19BA:0009
cs=0x19ba;eip=0x00000c; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_4))));	// 46230 mov     dx, [bp+arg_4] ;~ 19BA:000C
cs=0x19ba;eip=0x00000f; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_8))));	// 46231 mov     di, [bp+arg_8] ;~ 19BA:000F
cs=0x19ba;eip=0x000012; 	T(MOV(cx, di));	// 46232 mov     cx, di ;~ 19BA:0012
cs=0x19ba;eip=0x000014; 	T(INC(cx));	// 46233 inc     cx ;~ 19BA:0014
cs=0x19ba;eip=0x000015; 	T(SUB(cx, *(dw*)(raddr(ss,bp+arg_6))));	// 46234 sub     cx, [bp+arg_6] ;~ 19BA:0015
cs=0x19ba;eip=0x000018; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 46235 mov     ax, [bp+arg_A] ;~ 19BA:0018
cs=0x19ba;eip=0x00001b; 	X(MOV(word_37bb5, ax));	// 46236 mov     word_37BB5, ax ;~ 19BA:001B
cs=0x19ba;eip=0x00001e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_c))));	// 46237 mov     ax, [bp+arg_C] ;~ 19BA:001E
cs=0x19ba;eip=0x000021; 	X(MOV(word_37bb3, ax));	// 46238 mov     word_37BB3, ax ;~ 19BA:0021
cs=0x19ba;eip=0x000024; 	T(bx = offset(dseg,adat_0)+1);	// 46239 lea     bx, aDat_0+1    ; "DAT" ;~ 19BA:0024
cs=0x19ba;eip=0x000028; 	T(ADD(bx, word_37b84));	// 46240 add     bx, word_37B84 ;~ 19BA:0028
cs=0x19ba;eip=0x00002c; __disp=*(dw*)(raddr(cs,bx));
	R(JMP(__dispatch_call));	// 46241 jmp     word ptr cs:[bx] ;~ 19BA:002C
seg029_proc:
	// 46246 
loc_281af:
	// 7719 
cs=0x19ba;eip=0x00002f; 	T(MOV(ax, di));	// 46247 mov     ax, di ;~ 19BA:002F
cs=0x19ba;eip=0x000031; 	T(MOV(bx, si));	// 46248 mov     bx, si ;~ 19BA:0031
cs=0x19ba;eip=0x000033; 	X(MUL1_2(word_38044));	// 46249 mul     word_38044 ;~ 19BA:0033
cs=0x19ba;eip=0x000037; 	T(ADD(bx, ax));	// 46250 add     bx, ax ;~ 19BA:0037
cs=0x19ba;eip=0x000039; 	T(SHL(bx, 1));	// 46251 shl     bx, 1 ;~ 19BA:0039
cs=0x19ba;eip=0x00003b; 	T(MOV(si, bx));	// 46252 mov     si, bx ;~ 19BA:003B
cs=0x19ba;eip=0x00003d; 	T(MOV(ax, word_37bb3));	// 46253 mov     ax, word_37BB3 ;~ 19BA:003D
cs=0x19ba;eip=0x000040; 	T(MOV(bx, word_37bb5));	// 46254 mov     bx, word_37BB5 ;~ 19BA:0040
cs=0x19ba;eip=0x000044; 	X(MUL1_2(word_38044));	// 46255 mul     word_38044 ;~ 19BA:0044
cs=0x19ba;eip=0x000048; 	T(ADD(bx, ax));	// 46256 add     bx, ax ;~ 19BA:0048
cs=0x19ba;eip=0x00004a; 	T(SHL(bx, 1));	// 46257 shl     bx, 1 ;~ 19BA:004A
cs=0x19ba;eip=0x00004c; 	T(MOV(di, bx));	// 46258 mov     di, bx ;~ 19BA:004C
cs=0x19ba;eip=0x00004e; 	T(MOV(dx, *(dw*)(raddr(ss,bp+8))));	// 46259 mov     dx, [bp+8] ;~ 19BA:004E
cs=0x19ba;eip=0x000051; 	T(INC(dx));	// 46260 inc     dx ;~ 19BA:0051
cs=0x19ba;eip=0x000052; 	T(SUB(dx, *(dw*)(raddr(ss,bp+6))));	// 46261 sub     dx, [bp+6] ;~ 19BA:0052
cs=0x19ba;eip=0x000055; 	X(PUSH(ds));	// 46262 push    ds ;~ 19BA:0055
cs=0x19ba;eip=0x000056; 	X(PUSH(word_38044));	// 46263 push    word_38044 ;~ 19BA:0056
cs=0x19ba;eip=0x00005a; 	T(CMP(byte_37b89, 7));	// 46264 cmp     byte_37B89, 7 ;~ 19BA:005A
cs=0x19ba;eip=0x00005f; 	R(JZ(loc_28209));	// 46265 jz      short loc_28209 ;~ 19BA:005F
cs=0x19ba;eip=0x000061; 	X(PUSH(dx));	// 46266 push    dx ;~ 19BA:0061
cs=0x19ba;eip=0x000062; 	T(MOV(dx, word_37fec));	// 46267 mov     dx, word_37FEC ;~ 19BA:0062
cs=0x19ba;eip=0x000066; 	T(SHR(dx, 1));	// 46268 shr     dx, 1 ;~ 19BA:0066
cs=0x19ba;eip=0x000068; 	T(SHR(dx, 1));	// 46269 shr     dx, 1 ;~ 19BA:0068
cs=0x19ba;eip=0x00006a; 	T(SHR(dx, 1));	// 46270 shr     dx, 1 ;~ 19BA:006A
cs=0x19ba;eip=0x00006c; 	T(SHR(dx, 1));	// 46271 shr     dx, 1 ;~ 19BA:006C
cs=0x19ba;eip=0x00006e; 	X(PUSH(dx));	// 46272 push    dx ;~ 19BA:006E
cs=0x19ba;eip=0x00006f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x14))));	// 46273 mov     ax, [bp+14h] ;~ 19BA:006F
cs=0x19ba;eip=0x000072; 	T(MUL1_2(dx));	// 46274 mul     dx ;~ 19BA:0072
cs=0x19ba;eip=0x000074; 	T(ADD(ax, word_38070));	// 46275 add     ax, word_38070 ;~ 19BA:0074
cs=0x19ba;eip=0x000078; 	T(MOV(es, ax));	// 46276 mov     es, ax ;~ 19BA:0078
cs=0x19ba;eip=0x00007a; 	X(POP(dx));	// 46277 pop     dx ;~ 19BA:007A
cs=0x19ba;eip=0x00007b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x12))));	// 46278 mov     ax, [bp+12h] ;~ 19BA:007B
cs=0x19ba;eip=0x00007e; 	T(MUL1_2(dx));	// 46279 mul     dx ;~ 19BA:007E
cs=0x19ba;eip=0x000080; 	T(ADD(ax, word_38070));	// 46280 add     ax, word_38070 ;~ 19BA:0080
cs=0x19ba;eip=0x000084; 	T(MOV(ds, ax));	// 46281 mov     ds, ax ;~ 19BA:0084
cs=0x19ba;eip=0x000086; 	X(POP(dx));	// 46282 pop     dx ;~ 19BA:0086
cs=0x19ba;eip=0x000087; 	R(JMP(loc_28227));	// 46283 jmp     short loc_28227 ;~ 19BA:0087
loc_28209:
	// 7720 
cs=0x19ba;eip=0x000089; 	T(bx = offset(dseg,unk_37bcc));	// 46287 lea     bx, unk_37BCC ;~ 19BA:0089
cs=0x19ba;eip=0x00008d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x14))));	// 46288 mov     ax, [bp+14h] ;~ 19BA:008D
cs=0x19ba;eip=0x000090; 	T(SHL(ax, 1));	// 46289 shl     ax, 1 ;~ 19BA:0090
cs=0x19ba;eip=0x000092; 	T(ADD(bx, ax));	// 46290 add     bx, ax ;~ 19BA:0092
cs=0x19ba;eip=0x000094; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 46291 mov     ax, [bx] ;~ 19BA:0094
cs=0x19ba;eip=0x000096; 	T(MOV(es, ax));	// 46292 mov     es, ax ;~ 19BA:0096
cs=0x19ba;eip=0x000098; 	T(bx = offset(dseg,unk_37bcc));	// 46293 lea     bx, unk_37BCC ;~ 19BA:0098
cs=0x19ba;eip=0x00009c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x12))));	// 46294 mov     ax, [bp+12h] ;~ 19BA:009C
cs=0x19ba;eip=0x00009f; 	T(SHL(ax, 1));	// 46295 shl     ax, 1 ;~ 19BA:009F
cs=0x19ba;eip=0x0000a1; 	T(ADD(bx, ax));	// 46296 add     bx, ax ;~ 19BA:00A1
cs=0x19ba;eip=0x0000a3; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 46297 mov     ax, [bx] ;~ 19BA:00A3
cs=0x19ba;eip=0x0000a5; 	T(MOV(ds, ax));	// 46298 mov     ds, ax ;~ 19BA:00A5
loc_28227:
	// 7721 
cs=0x19ba;eip=0x0000a7; 	X(POP(ax));	// 46301 pop     ax ;~ 19BA:00A7
cs=0x19ba;eip=0x0000a8; 	T(SHL(ax, 1));	// 46302 shl     ax, 1 ;~ 19BA:00A8
cs=0x19ba;eip=0x0000aa; 	T(ADD(ax, dx));	// 46303 add     ax, dx ;~ 19BA:00AA
cs=0x19ba;eip=0x0000ac; 	T(ADD(ax, dx));	// 46304 add     ax, dx ;~ 19BA:00AC
cs=0x19ba;eip=0x0000ae; 	T(MOV(bx, cx));	// 46305 mov     bx, cx ;~ 19BA:00AE
loc_28230:
	// 7722 
cs=0x19ba;eip=0x0000b0; 	T(MOV(cx, dx));	// 46308 mov     cx, dx ;~ 19BA:00B0
	// 46309 rep movsw ;~ 19BA:00B2
cs=0x19ba;eip=0x0000b2; 	X(	REP MOVSW);	// 46309 rep movsw ;~ 19BA:00B2
cs=0x19ba;eip=0x0000b4; 	T(SUB(si, ax));	// 46310 sub     si, ax ;~ 19BA:00B4
cs=0x19ba;eip=0x0000b6; 	T(SUB(di, ax));	// 46311 sub     di, ax ;~ 19BA:00B6
cs=0x19ba;eip=0x0000b8; 	T(DEC(bx));	// 46312 dec     bx ;~ 19BA:00B8
cs=0x19ba;eip=0x0000b9; 	R(JNZ(loc_28230));	// 46313 jnz     short loc_28230 ;~ 19BA:00B9
cs=0x19ba;eip=0x0000bb; 	R(JMP(loc_285ca));	// 46314 jmp     loc_285CA ;~ 19BA:00BB
loc_2823e:
	// 7723 
cs=0x19ba;eip=0x0000be; 	T(MOV(ax, di));	// 46318 mov     ax, di ;~ 19BA:00BE
cs=0x19ba;eip=0x0000c0; 	T(MOV(bx, si));	// 46319 mov     bx, si ;~ 19BA:00C0
cs=0x19ba;eip=0x0000c2; 	T(XCHG(ah, al));	// 46320 xchg    ah, al ;~ 19BA:00C2
cs=0x19ba;eip=0x0000c4; 	T(SHR(ax, 1));	// 46321 shr     ax, 1 ;~ 19BA:00C4
cs=0x19ba;eip=0x0000c6; 	T(ADD(bh, al));	// 46322 add     bh, al ;~ 19BA:00C6
cs=0x19ba;eip=0x0000c8; 	T(XOR(al, al));	// 46323 xor     al, al ;~ 19BA:00C8
cs=0x19ba;eip=0x0000ca; 	T(ADD(bx, ax));	// 46324 add     bx, ax ;~ 19BA:00CA
cs=0x19ba;eip=0x0000cc; 	T(SHR(ax, 1));	// 46325 shr     ax, 1 ;~ 19BA:00CC
cs=0x19ba;eip=0x0000ce; 	T(SHR(ax, 1));	// 46326 shr     ax, 1 ;~ 19BA:00CE
cs=0x19ba;eip=0x0000d0; 	T(ADD(bx, ax));	// 46327 add     bx, ax ;~ 19BA:00D0
cs=0x19ba;eip=0x0000d2; 	T(SHR(bx, 1));	// 46328 shr     bx, 1 ;~ 19BA:00D2
cs=0x19ba;eip=0x0000d4; 	T(SHR(bx, 1));	// 46329 shr     bx, 1 ;~ 19BA:00D4
cs=0x19ba;eip=0x0000d6; 	T(SHR(dx, 1));	// 46330 shr     dx, 1 ;~ 19BA:00D6
cs=0x19ba;eip=0x0000d8; 	T(SHR(dx, 1));	// 46331 shr     dx, 1 ;~ 19BA:00D8
cs=0x19ba;eip=0x0000da; 	T(SHR(si, 1));	// 46332 shr     si, 1 ;~ 19BA:00DA
cs=0x19ba;eip=0x0000dc; 	T(SHR(si, 1));	// 46333 shr     si, 1 ;~ 19BA:00DC
cs=0x19ba;eip=0x0000de; 	T(INC(dx));	// 46334 inc     dx ;~ 19BA:00DE
cs=0x19ba;eip=0x0000df; 	T(SUB(dx, si));	// 46335 sub     dx, si ;~ 19BA:00DF
cs=0x19ba;eip=0x0000e1; 	T(MOV(si, bx));	// 46336 mov     si, bx ;~ 19BA:00E1
cs=0x19ba;eip=0x0000e3; 	T(MOV(ax, word_37bb3));	// 46337 mov     ax, word_37BB3 ;~ 19BA:00E3
cs=0x19ba;eip=0x0000e6; 	T(MOV(bx, word_37bb5));	// 46338 mov     bx, word_37BB5 ;~ 19BA:00E6
cs=0x19ba;eip=0x0000ea; 	T(XCHG(ah, al));	// 46339 xchg    ah, al ;~ 19BA:00EA
cs=0x19ba;eip=0x0000ec; 	T(SHR(ax, 1));	// 46340 shr     ax, 1 ;~ 19BA:00EC
cs=0x19ba;eip=0x0000ee; 	T(ADD(bh, al));	// 46341 add     bh, al ;~ 19BA:00EE
cs=0x19ba;eip=0x0000f0; 	T(XOR(al, al));	// 46342 xor     al, al ;~ 19BA:00F0
cs=0x19ba;eip=0x0000f2; 	T(ADD(bx, ax));	// 46343 add     bx, ax ;~ 19BA:00F2
cs=0x19ba;eip=0x0000f4; 	T(SHR(ax, 1));	// 46344 shr     ax, 1 ;~ 19BA:00F4
cs=0x19ba;eip=0x0000f6; 	T(SHR(ax, 1));	// 46345 shr     ax, 1 ;~ 19BA:00F6
cs=0x19ba;eip=0x0000f8; 	T(ADD(bx, ax));	// 46346 add     bx, ax ;~ 19BA:00F8
cs=0x19ba;eip=0x0000fa; 	T(SHR(bx, 1));	// 46347 shr     bx, 1 ;~ 19BA:00FA
cs=0x19ba;eip=0x0000fc; 	T(SHR(bx, 1));	// 46348 shr     bx, 1 ;~ 19BA:00FC
cs=0x19ba;eip=0x0000fe; 	T(MOV(di, bx));	// 46349 mov     di, bx ;~ 19BA:00FE
cs=0x19ba;eip=0x000100; 	R(JMP(loc_283cd));	// 46350 jmp     loc_283CD ;~ 19BA:0100
loc_28283:
	// 7724 
cs=0x19ba;eip=0x000103; 	T(MOV(ax, di));	// 46354 mov     ax, di ;~ 19BA:0103
cs=0x19ba;eip=0x000105; 	T(MOV(bx, si));	// 46355 mov     bx, si ;~ 19BA:0105
cs=0x19ba;eip=0x000107; 	T(XCHG(ah, al));	// 46356 xchg    ah, al ;~ 19BA:0107
cs=0x19ba;eip=0x000109; 	T(SHR(ax, 1));	// 46357 shr     ax, 1 ;~ 19BA:0109
cs=0x19ba;eip=0x00010b; 	T(SHR(bx, 1));	// 46358 shr     bx, 1 ;~ 19BA:010B
cs=0x19ba;eip=0x00010d; 	T(ADD(bh, al));	// 46359 add     bh, al ;~ 19BA:010D
cs=0x19ba;eip=0x00010f; 	T(XOR(al, al));	// 46360 xor     al, al ;~ 19BA:010F
cs=0x19ba;eip=0x000111; 	T(ADD(bx, ax));	// 46361 add     bx, ax ;~ 19BA:0111
cs=0x19ba;eip=0x000113; 	T(SHR(ax, 1));	// 46362 shr     ax, 1 ;~ 19BA:0113
cs=0x19ba;eip=0x000115; 	T(SHR(ax, 1));	// 46363 shr     ax, 1 ;~ 19BA:0115
cs=0x19ba;eip=0x000117; 	T(ADD(bx, ax));	// 46364 add     bx, ax ;~ 19BA:0117
cs=0x19ba;eip=0x000119; 	T(SHR(bx, 1));	// 46365 shr     bx, 1 ;~ 19BA:0119
cs=0x19ba;eip=0x00011b; 	T(SHR(bx, 1));	// 46366 shr     bx, 1 ;~ 19BA:011B
cs=0x19ba;eip=0x00011d; 	T(SHR(dx, 1));	// 46367 shr     dx, 1 ;~ 19BA:011D
cs=0x19ba;eip=0x00011f; 	T(SHR(dx, 1));	// 46368 shr     dx, 1 ;~ 19BA:011F
cs=0x19ba;eip=0x000121; 	T(SHR(dx, 1));	// 46369 shr     dx, 1 ;~ 19BA:0121
cs=0x19ba;eip=0x000123; 	T(SHR(si, 1));	// 46370 shr     si, 1 ;~ 19BA:0123
cs=0x19ba;eip=0x000125; 	T(SHR(si, 1));	// 46371 shr     si, 1 ;~ 19BA:0125
cs=0x19ba;eip=0x000127; 	T(SHR(si, 1));	// 46372 shr     si, 1 ;~ 19BA:0127
cs=0x19ba;eip=0x000129; 	T(INC(dx));	// 46373 inc     dx ;~ 19BA:0129
cs=0x19ba;eip=0x00012a; 	T(SUB(dx, si));	// 46374 sub     dx, si ;~ 19BA:012A
cs=0x19ba;eip=0x00012c; 	T(MOV(si, bx));	// 46375 mov     si, bx ;~ 19BA:012C
cs=0x19ba;eip=0x00012e; 	T(MOV(ax, word_37bb3));	// 46376 mov     ax, word_37BB3 ;~ 19BA:012E
cs=0x19ba;eip=0x000131; 	T(MOV(bx, word_37bb5));	// 46377 mov     bx, word_37BB5 ;~ 19BA:0131
cs=0x19ba;eip=0x000135; 	T(XCHG(ah, al));	// 46378 xchg    ah, al ;~ 19BA:0135
cs=0x19ba;eip=0x000137; 	T(SHR(ax, 1));	// 46379 shr     ax, 1 ;~ 19BA:0137
cs=0x19ba;eip=0x000139; 	T(SHR(bx, 1));	// 46380 shr     bx, 1 ;~ 19BA:0139
cs=0x19ba;eip=0x00013b; 	T(ADD(bh, al));	// 46381 add     bh, al ;~ 19BA:013B
cs=0x19ba;eip=0x00013d; 	T(XOR(al, al));	// 46382 xor     al, al ;~ 19BA:013D
cs=0x19ba;eip=0x00013f; 	T(ADD(bx, ax));	// 46383 add     bx, ax ;~ 19BA:013F
cs=0x19ba;eip=0x000141; 	T(SHR(ax, 1));	// 46384 shr     ax, 1 ;~ 19BA:0141
cs=0x19ba;eip=0x000143; 	T(SHR(ax, 1));	// 46385 shr     ax, 1 ;~ 19BA:0143
cs=0x19ba;eip=0x000145; 	T(ADD(bx, ax));	// 46386 add     bx, ax ;~ 19BA:0145
cs=0x19ba;eip=0x000147; 	T(SHR(bx, 1));	// 46387 shr     bx, 1 ;~ 19BA:0147
cs=0x19ba;eip=0x000149; 	T(SHR(bx, 1));	// 46388 shr     bx, 1 ;~ 19BA:0149
cs=0x19ba;eip=0x00014b; 	T(MOV(di, bx));	// 46389 mov     di, bx ;~ 19BA:014B
cs=0x19ba;eip=0x00014d; 	R(JMP(loc_283cd));	// 46390 jmp     loc_283CD ;~ 19BA:014D
loc_282d0:
	// 7725 
cs=0x19ba;eip=0x000150; 	T(MOV(ax, di));	// 46394 mov     ax, di ;~ 19BA:0150
cs=0x19ba;eip=0x000152; 	T(MOV(bx, si));	// 46395 mov     bx, si ;~ 19BA:0152
cs=0x19ba;eip=0x000154; 	T(SHL(bx, 1));	// 46396 shl     bx, 1 ;~ 19BA:0154
cs=0x19ba;eip=0x000156; 	T(SHL(bx, 1));	// 46397 shl     bx, 1 ;~ 19BA:0156
cs=0x19ba;eip=0x000158; 	T(SHR(ax, 1));	// 46398 shr     ax, 1 ;~ 19BA:0158
cs=0x19ba;eip=0x00015a; 	T(RCR(bx, 1));	// 46399 rcr     bx, 1 ;~ 19BA:015A
cs=0x19ba;eip=0x00015c; 	T(SHR(ax, 1));	// 46400 shr     ax, 1 ;~ 19BA:015C
cs=0x19ba;eip=0x00015e; 	T(RCR(bx, 1));	// 46401 rcr     bx, 1 ;~ 19BA:015E
cs=0x19ba;eip=0x000160; 	T(SHR(bx, 1));	// 46402 shr     bx, 1 ;~ 19BA:0160
cs=0x19ba;eip=0x000162; 	T(XCHG(ah, al));	// 46403 xchg    ah, al ;~ 19BA:0162
cs=0x19ba;eip=0x000164; 	T(SHR(ax, 1));	// 46404 shr     ax, 1 ;~ 19BA:0164
cs=0x19ba;eip=0x000166; 	T(ADD(bx, ax));	// 46405 add     bx, ax ;~ 19BA:0166
cs=0x19ba;eip=0x000168; 	T(SHR(ax, 1));	// 46406 shr     ax, 1 ;~ 19BA:0168
cs=0x19ba;eip=0x00016a; 	T(SHR(ax, 1));	// 46407 shr     ax, 1 ;~ 19BA:016A
cs=0x19ba;eip=0x00016c; 	T(ADD(bx, ax));	// 46408 add     bx, ax ;~ 19BA:016C
cs=0x19ba;eip=0x00016e; 	T(SHR(dx, 1));	// 46409 shr     dx, 1 ;~ 19BA:016E
cs=0x19ba;eip=0x000170; 	T(SHR(si, 1));	// 46410 shr     si, 1 ;~ 19BA:0170
cs=0x19ba;eip=0x000172; 	T(INC(dx));	// 46411 inc     dx ;~ 19BA:0172
cs=0x19ba;eip=0x000173; 	T(SUB(dx, si));	// 46412 sub     dx, si ;~ 19BA:0173
cs=0x19ba;eip=0x000175; 	T(MOV(si, bx));	// 46413 mov     si, bx ;~ 19BA:0175
cs=0x19ba;eip=0x000177; 	T(MOV(ax, word_37bb3));	// 46414 mov     ax, word_37BB3 ;~ 19BA:0177
cs=0x19ba;eip=0x00017a; 	T(MOV(bx, word_37bb5));	// 46415 mov     bx, word_37BB5 ;~ 19BA:017A
cs=0x19ba;eip=0x00017e; 	T(SHL(bx, 1));	// 46416 shl     bx, 1 ;~ 19BA:017E
cs=0x19ba;eip=0x000180; 	T(SHL(bx, 1));	// 46417 shl     bx, 1 ;~ 19BA:0180
cs=0x19ba;eip=0x000182; 	T(SHR(ax, 1));	// 46418 shr     ax, 1 ;~ 19BA:0182
cs=0x19ba;eip=0x000184; 	T(RCR(bx, 1));	// 46419 rcr     bx, 1 ;~ 19BA:0184
cs=0x19ba;eip=0x000186; 	T(SHR(ax, 1));	// 46420 shr     ax, 1 ;~ 19BA:0186
cs=0x19ba;eip=0x000188; 	T(RCR(bx, 1));	// 46421 rcr     bx, 1 ;~ 19BA:0188
cs=0x19ba;eip=0x00018a; 	T(SHR(bx, 1));	// 46422 shr     bx, 1 ;~ 19BA:018A
cs=0x19ba;eip=0x00018c; 	T(XCHG(ah, al));	// 46423 xchg    ah, al ;~ 19BA:018C
cs=0x19ba;eip=0x00018e; 	T(SHR(ax, 1));	// 46424 shr     ax, 1 ;~ 19BA:018E
cs=0x19ba;eip=0x000190; 	T(ADD(bx, ax));	// 46425 add     bx, ax ;~ 19BA:0190
cs=0x19ba;eip=0x000192; 	T(SHR(ax, 1));	// 46426 shr     ax, 1 ;~ 19BA:0192
cs=0x19ba;eip=0x000194; 	T(SHR(ax, 1));	// 46427 shr     ax, 1 ;~ 19BA:0194
cs=0x19ba;eip=0x000196; 	T(ADD(bx, ax));	// 46428 add     bx, ax ;~ 19BA:0196
cs=0x19ba;eip=0x000198; 	T(MOV(di, bx));	// 46429 mov     di, bx ;~ 19BA:0198
cs=0x19ba;eip=0x00019a; 	R(JMP(loc_283cd));	// 46430 jmp     loc_283CD ;~ 19BA:019A
loc_2831d:
	// 7726 
cs=0x19ba;eip=0x00019d; 	T(SHL(si, 1));	// 46434 shl     si, 1 ;~ 19BA:019D
cs=0x19ba;eip=0x00019f; 	T(ADD(si, 0x28));	// 46435 add     si, 28h ; '(' ;~ 19BA:019F
cs=0x19ba;eip=0x0001a2; 	T(SHL(dx, 1));	// 46436 shl     dx, 1 ;~ 19BA:01A2
cs=0x19ba;eip=0x0001a4; 	T(ADD(dx, 0x29));	// 46437 add     dx, 29h ; ')' ;~ 19BA:01A4
cs=0x19ba;eip=0x0001a7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 46438 mov     ax, [bp+0Ah] ;~ 19BA:01A7
cs=0x19ba;eip=0x0001aa; 	T(MOV(cx, ax));	// 46439 mov     cx, ax ;~ 19BA:01AA
cs=0x19ba;eip=0x0001ac; 	T(SAR(ax, 1));	// 46440 sar     ax, 1 ;~ 19BA:01AC
cs=0x19ba;eip=0x0001ae; 	T(ADD(ax, cx));	// 46441 add     ax, cx ;~ 19BA:01AE
cs=0x19ba;eip=0x0001b0; 	T(ADD(ax, 0x18));	// 46442 add     ax, 18h ;~ 19BA:01B0
cs=0x19ba;eip=0x0001b3; 	T(MOV(cx, ax));	// 46443 mov     cx, ax ;~ 19BA:01B3
cs=0x19ba;eip=0x0001b5; 	T(MOV(ax, di));	// 46444 mov     ax, di ;~ 19BA:01B5
cs=0x19ba;eip=0x0001b7; 	T(SAR(ax, 1));	// 46445 sar     ax, 1 ;~ 19BA:01B7
cs=0x19ba;eip=0x0001b9; 	T(ADD(ax, di));	// 46446 add     ax, di ;~ 19BA:01B9
cs=0x19ba;eip=0x0001bb; 	T(ADD(ax, 0x18));	// 46447 add     ax, 18h ;~ 19BA:01BB
cs=0x19ba;eip=0x0001be; 	T(AND(di, 1));	// 46448 and     di, 1 ;~ 19BA:01BE
cs=0x19ba;eip=0x0001c1; 	T(ADD(di, ax));	// 46449 add     di, ax ;~ 19BA:01C1
cs=0x19ba;eip=0x0001c3; 	T(NEG(cx));	// 46450 neg     cx ;~ 19BA:01C3
cs=0x19ba;eip=0x0001c5; 	T(ADD(cx, di));	// 46451 add     cx, di ;~ 19BA:01C5
cs=0x19ba;eip=0x0001c7; 	T(INC(cx));	// 46452 inc     cx ;~ 19BA:01C7
cs=0x19ba;eip=0x0001c8; 	T(MOV(ax, word_37bb5));	// 46453 mov     ax, word_37BB5 ;~ 19BA:01C8
cs=0x19ba;eip=0x0001cb; 	T(SHL(ax, 1));	// 46454 shl     ax, 1 ;~ 19BA:01CB
cs=0x19ba;eip=0x0001cd; 	T(ADD(ax, 0x28));	// 46455 add     ax, 28h ; '(' ;~ 19BA:01CD
cs=0x19ba;eip=0x0001d0; 	X(MOV(word_37bb5, ax));	// 46456 mov     word_37BB5, ax ;~ 19BA:01D0
cs=0x19ba;eip=0x0001d3; 	T(MOV(ax, word_37bb3));	// 46457 mov     ax, word_37BB3 ;~ 19BA:01D3
cs=0x19ba;eip=0x0001d6; 	T(MOV(bx, ax));	// 46458 mov     bx, ax ;~ 19BA:01D6
cs=0x19ba;eip=0x0001d8; 	T(SAR(ax, 1));	// 46459 sar     ax, 1 ;~ 19BA:01D8
cs=0x19ba;eip=0x0001da; 	T(ADD(ax, bx));	// 46460 add     ax, bx ;~ 19BA:01DA
cs=0x19ba;eip=0x0001dc; 	T(ADD(ax, 0x18));	// 46461 add     ax, 18h ;~ 19BA:01DC
cs=0x19ba;eip=0x0001df; 	T(AND(bx, 1));	// 46462 and     bx, 1 ;~ 19BA:01DF
cs=0x19ba;eip=0x0001e2; 	T(ADD(ax, bx));	// 46463 add     ax, bx ;~ 19BA:01E2
cs=0x19ba;eip=0x0001e4; 	X(MOV(word_37bb3, ax));	// 46464 mov     word_37BB3, ax ;~ 19BA:01E4
loc_28367:
	// 7727 
cs=0x19ba;eip=0x0001e7; 	T(MOV(ax, di));	// 46467 mov     ax, di ;~ 19BA:01E7
cs=0x19ba;eip=0x0001e9; 	T(MOV(bx, si));	// 46468 mov     bx, si ;~ 19BA:01E9
cs=0x19ba;eip=0x0001eb; 	T(SHR(ax, 1));	// 46469 shr     ax, 1 ;~ 19BA:01EB
cs=0x19ba;eip=0x0001ed; 	T(RCR(bx, 1));	// 46470 rcr     bx, 1 ;~ 19BA:01ED
cs=0x19ba;eip=0x0001ef; 	T(SHR(ax, 1));	// 46471 shr     ax, 1 ;~ 19BA:01EF
cs=0x19ba;eip=0x0001f1; 	T(RCR(bx, 1));	// 46472 rcr     bx, 1 ;~ 19BA:01F1
cs=0x19ba;eip=0x0001f3; 	T(SHR(bx, 1));	// 46473 shr     bx, 1 ;~ 19BA:01F3
cs=0x19ba;eip=0x0001f5; 	T(MOV(ah, 0x5A));	// 46474 mov     ah, 5Ah ; 'Z' ;~ 19BA:01F5
cs=0x19ba;eip=0x0001f7; 	T(MUL1_1(ah));	// 46475 mul     ah ;~ 19BA:01F7
cs=0x19ba;eip=0x0001f9; 	T(ADD(bx, ax));	// 46476 add     bx, ax ;~ 19BA:01F9
cs=0x19ba;eip=0x0001fb; 	T(SHR(dx, 1));	// 46477 shr     dx, 1 ;~ 19BA:01FB
cs=0x19ba;eip=0x0001fd; 	T(SHR(dx, 1));	// 46478 shr     dx, 1 ;~ 19BA:01FD
cs=0x19ba;eip=0x0001ff; 	T(SHR(dx, 1));	// 46479 shr     dx, 1 ;~ 19BA:01FF
cs=0x19ba;eip=0x000201; 	T(SHR(si, 1));	// 46480 shr     si, 1 ;~ 19BA:0201
cs=0x19ba;eip=0x000203; 	T(SHR(si, 1));	// 46481 shr     si, 1 ;~ 19BA:0203
cs=0x19ba;eip=0x000205; 	T(SHR(si, 1));	// 46482 shr     si, 1 ;~ 19BA:0205
cs=0x19ba;eip=0x000207; 	T(INC(dx));	// 46483 inc     dx ;~ 19BA:0207
cs=0x19ba;eip=0x000208; 	T(SUB(dx, si));	// 46484 sub     dx, si ;~ 19BA:0208
cs=0x19ba;eip=0x00020a; 	T(MOV(si, bx));	// 46485 mov     si, bx ;~ 19BA:020A
cs=0x19ba;eip=0x00020c; 	T(MOV(ax, word_37bb3));	// 46486 mov     ax, word_37BB3 ;~ 19BA:020C
cs=0x19ba;eip=0x00020f; 	T(MOV(bx, word_37bb5));	// 46487 mov     bx, word_37BB5 ;~ 19BA:020F
cs=0x19ba;eip=0x000213; 	T(SHR(ax, 1));	// 46488 shr     ax, 1 ;~ 19BA:0213
cs=0x19ba;eip=0x000215; 	T(RCR(bx, 1));	// 46489 rcr     bx, 1 ;~ 19BA:0215
cs=0x19ba;eip=0x000217; 	T(SHR(ax, 1));	// 46490 shr     ax, 1 ;~ 19BA:0217
cs=0x19ba;eip=0x000219; 	T(RCR(bx, 1));	// 46491 rcr     bx, 1 ;~ 19BA:0219
cs=0x19ba;eip=0x00021b; 	T(SHR(bx, 1));	// 46492 shr     bx, 1 ;~ 19BA:021B
cs=0x19ba;eip=0x00021d; 	T(MOV(ah, 0x5A));	// 46493 mov     ah, 5Ah ; 'Z' ;~ 19BA:021D
cs=0x19ba;eip=0x00021f; 	T(MUL1_1(ah));	// 46494 mul     ah ;~ 19BA:021F
cs=0x19ba;eip=0x000221; 	T(ADD(bx, ax));	// 46495 add     bx, ax ;~ 19BA:0221
cs=0x19ba;eip=0x000223; 	T(MOV(di, bx));	// 46496 mov     di, bx ;~ 19BA:0223
cs=0x19ba;eip=0x000225; 	R(JMP(loc_283cd));	// 46497 jmp     short loc_283CD ;~ 19BA:0225
loc_283a7:
	// 7728 
cs=0x19ba;eip=0x000227; 	T(MOV(ax, di));	// 46501 mov     ax, di ;~ 19BA:0227
cs=0x19ba;eip=0x000229; 	T(MOV(bx, si));	// 46502 mov     bx, si ;~ 19BA:0229
cs=0x19ba;eip=0x00022b; 	T(XCHG(ah, al));	// 46503 xchg    ah, al ;~ 19BA:022B
cs=0x19ba;eip=0x00022d; 	T(ADD(bx, ax));	// 46504 add     bx, ax ;~ 19BA:022D
cs=0x19ba;eip=0x00022f; 	T(SHR(ax, 1));	// 46505 shr     ax, 1 ;~ 19BA:022F
cs=0x19ba;eip=0x000231; 	T(SHR(ax, 1));	// 46506 shr     ax, 1 ;~ 19BA:0231
cs=0x19ba;eip=0x000233; 	T(ADD(bx, ax));	// 46507 add     bx, ax ;~ 19BA:0233
cs=0x19ba;eip=0x000235; 	T(INC(dx));	// 46508 inc     dx ;~ 19BA:0235
cs=0x19ba;eip=0x000236; 	T(SUB(dx, si));	// 46509 sub     dx, si ;~ 19BA:0236
cs=0x19ba;eip=0x000238; 	T(MOV(si, bx));	// 46510 mov     si, bx ;~ 19BA:0238
cs=0x19ba;eip=0x00023a; 	T(MOV(ax, word_37bb3));	// 46511 mov     ax, word_37BB3 ;~ 19BA:023A
cs=0x19ba;eip=0x00023d; 	T(MOV(bx, word_37bb5));	// 46512 mov     bx, word_37BB5 ;~ 19BA:023D
cs=0x19ba;eip=0x000241; 	T(XCHG(ah, al));	// 46513 xchg    ah, al ;~ 19BA:0241
cs=0x19ba;eip=0x000243; 	T(ADD(bx, ax));	// 46514 add     bx, ax ;~ 19BA:0243
cs=0x19ba;eip=0x000245; 	T(SHR(ax, 1));	// 46515 shr     ax, 1 ;~ 19BA:0245
cs=0x19ba;eip=0x000247; 	T(SHR(ax, 1));	// 46516 shr     ax, 1 ;~ 19BA:0247
cs=0x19ba;eip=0x000249; 	T(ADD(bx, ax));	// 46517 add     bx, ax ;~ 19BA:0249
cs=0x19ba;eip=0x00024b; 	T(MOV(di, bx));	// 46518 mov     di, bx ;~ 19BA:024B
loc_283cd:
	// 7729 
cs=0x19ba;eip=0x00024d; 	X(PUSH(ds));	// 46522 push    ds ;~ 19BA:024D
cs=0x19ba;eip=0x00024e; 	X(PUSH(word_37f94));	// 46523 push    word_37F94 ;~ 19BA:024E
cs=0x19ba;eip=0x000252; 	X(PUSH(word_38018));	// 46524 push    word_38018 ;~ 19BA:0252
cs=0x19ba;eip=0x000256; 	T(bx = offset(dseg,unk_37bcc));	// 46525 lea     bx, unk_37BCC ;~ 19BA:0256
cs=0x19ba;eip=0x00025a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x14))));	// 46526 mov     ax, [bp+14h] ;~ 19BA:025A
cs=0x19ba;eip=0x00025d; 	T(SHL(ax, 1));	// 46527 shl     ax, 1 ;~ 19BA:025D
cs=0x19ba;eip=0x00025f; 	T(ADD(bx, ax));	// 46528 add     bx, ax ;~ 19BA:025F
cs=0x19ba;eip=0x000261; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 46529 mov     ax, [bx] ;~ 19BA:0261
cs=0x19ba;eip=0x000263; 	T(MOV(es, ax));	// 46530 mov     es, ax ;~ 19BA:0263
cs=0x19ba;eip=0x000265; 	T(bx = offset(dseg,unk_37bcc));	// 46531 lea     bx, unk_37BCC ;~ 19BA:0265
cs=0x19ba;eip=0x000269; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x12))));	// 46532 mov     ax, [bp+12h] ;~ 19BA:0269
cs=0x19ba;eip=0x00026c; 	T(SHL(ax, 1));	// 46533 shl     ax, 1 ;~ 19BA:026C
cs=0x19ba;eip=0x00026e; 	T(ADD(bx, ax));	// 46534 add     bx, ax ;~ 19BA:026E
cs=0x19ba;eip=0x000270; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 46535 mov     ax, [bx] ;~ 19BA:0270
cs=0x19ba;eip=0x000272; 	T(MOV(ds, ax));	// 46536 mov     ds, ax ;~ 19BA:0272
cs=0x19ba;eip=0x000274; 	X(POP(ax));	// 46537 pop     ax ;~ 19BA:0274
cs=0x19ba;eip=0x000275; 	T(MOV(bx, cx));	// 46538 mov     bx, cx ;~ 19BA:0275
cs=0x19ba;eip=0x000277; 	X(POP(cx));	// 46539 pop     cx ;~ 19BA:0277
cs=0x19ba;eip=0x000278; 	T(CMP(cx, 0x6000));	// 46540 cmp     cx, 6000h ;~ 19BA:0278
cs=0x19ba;eip=0x00027c; 	R(JZ(loc_2843a));	// 46541 jz      short loc_2843A ;~ 19BA:027C
cs=0x19ba;eip=0x00027e; 	T(CMP(cx, 0x2000));	// 46542 cmp     cx, 2000h ;~ 19BA:027E
cs=0x19ba;eip=0x000282; 	R(JZ(loc_28414));	// 46543 jz      short loc_28414 ;~ 19BA:0282
cs=0x19ba;eip=0x000284; 	T(ADD(ax, dx));	// 46544 add     ax, dx ;~ 19BA:0284
loc_28406:
	// 7730 
cs=0x19ba;eip=0x000286; 	T(MOV(cx, dx));	// 46547 mov     cx, dx ;~ 19BA:0286
	// 46548 rep movsb ;~ 19BA:0288
cs=0x19ba;eip=0x000288; 	X(	REP MOVSB);	// 46548 rep movsb ;~ 19BA:0288
cs=0x19ba;eip=0x00028a; 	T(SUB(si, ax));	// 46549 sub     si, ax ;~ 19BA:028A
cs=0x19ba;eip=0x00028c; 	T(SUB(di, ax));	// 46550 sub     di, ax ;~ 19BA:028C
cs=0x19ba;eip=0x00028e; 	T(DEC(bx));	// 46551 dec     bx ;~ 19BA:028E
cs=0x19ba;eip=0x00028f; 	R(JNZ(loc_28406));	// 46552 jnz     short loc_28406 ;~ 19BA:028F
cs=0x19ba;eip=0x000291; 	R(JMP(loc_285ca));	// 46553 jmp     loc_285CA ;~ 19BA:0291
loc_28414:
	// 7731 
cs=0x19ba;eip=0x000294; 	T(MOV(cx, dx));	// 46558 mov     cx, dx ;~ 19BA:0294
	// 46559 rep movsb ;~ 19BA:0296
cs=0x19ba;eip=0x000296; 	X(	REP MOVSB);	// 46559 rep movsb ;~ 19BA:0296
cs=0x19ba;eip=0x000298; 	T(SUB(si, dx));	// 46560 sub     si, dx ;~ 19BA:0298
cs=0x19ba;eip=0x00029a; 	T(TEST(si, 0x2000));	// 46561 test    si, 2000h ;~ 19BA:029A
cs=0x19ba;eip=0x00029e; 	R(JNZ(loc_28422));	// 46562 jnz     short loc_28422 ;~ 19BA:029E
cs=0x19ba;eip=0x0002a0; 	T(SUB(si, ax));	// 46563 sub     si, ax ;~ 19BA:02A0
loc_28422:
	// 7732 
cs=0x19ba;eip=0x0002a2; 	T(SUB(di, dx));	// 46566 sub     di, dx ;~ 19BA:02A2
cs=0x19ba;eip=0x0002a4; 	T(TEST(di, 0x2000));	// 46567 test    di, 2000h ;~ 19BA:02A4
cs=0x19ba;eip=0x0002a8; 	R(JNZ(loc_2842c));	// 46568 jnz     short loc_2842C ;~ 19BA:02A8
cs=0x19ba;eip=0x0002aa; 	T(SUB(di, ax));	// 46569 sub     di, ax ;~ 19BA:02AA
loc_2842c:
	// 7733 
cs=0x19ba;eip=0x0002ac; 	T(XOR(si, 0x2000));	// 46572 xor     si, 2000h ;~ 19BA:02AC
cs=0x19ba;eip=0x0002b0; 	T(XOR(di, 0x2000));	// 46573 xor     di, 2000h ;~ 19BA:02B0
cs=0x19ba;eip=0x0002b4; 	T(DEC(bx));	// 46574 dec     bx ;~ 19BA:02B4
cs=0x19ba;eip=0x0002b5; 	R(JNZ(loc_28414));	// 46575 jnz     short loc_28414 ;~ 19BA:02B5
cs=0x19ba;eip=0x0002b7; 	R(JMP(loc_285ca));	// 46576 jmp     loc_285CA ;~ 19BA:02B7
loc_2843a:
	// 7734 
cs=0x19ba;eip=0x0002ba; 	T(MOV(cx, dx));	// 46581 mov     cx, dx ;~ 19BA:02BA
	// 46582 rep movsb ;~ 19BA:02BC
cs=0x19ba;eip=0x0002bc; 	X(	REP MOVSB);	// 46582 rep movsb ;~ 19BA:02BC
cs=0x19ba;eip=0x0002be; 	T(SUB(di, dx));	// 46583 sub     di, dx ;~ 19BA:02BE
cs=0x19ba;eip=0x0002c0; 	T(TEST(di, 0x0E000));	// 46584 test    di, 0E000h ;~ 19BA:02C0
cs=0x19ba;eip=0x0002c4; 	R(JNZ(loc_2844c));	// 46585 jnz     short loc_2844C ;~ 19BA:02C4
cs=0x19ba;eip=0x0002c6; 	T(OR(di, 0x8000));	// 46586 or      di, 8000h ;~ 19BA:02C6
cs=0x19ba;eip=0x0002ca; 	T(SUB(di, ax));	// 46587 sub     di, ax ;~ 19BA:02CA
loc_2844c:
	// 7735 
cs=0x19ba;eip=0x0002cc; 	T(SUB(si, dx));	// 46590 sub     si, dx ;~ 19BA:02CC
cs=0x19ba;eip=0x0002ce; 	T(TEST(si, 0x0E000));	// 46591 test    si, 0E000h ;~ 19BA:02CE
cs=0x19ba;eip=0x0002d2; 	R(JNZ(loc_2845a));	// 46592 jnz     short loc_2845A ;~ 19BA:02D2
cs=0x19ba;eip=0x0002d4; 	T(OR(si, 0x8000));	// 46593 or      si, 8000h ;~ 19BA:02D4
cs=0x19ba;eip=0x0002d8; 	T(SUB(si, ax));	// 46594 sub     si, ax ;~ 19BA:02D8
loc_2845a:
	// 7736 
cs=0x19ba;eip=0x0002da; 	T(SUB(di, 0x2000));	// 46597 sub     di, 2000h ;~ 19BA:02DA
cs=0x19ba;eip=0x0002de; 	T(SUB(si, 0x2000));	// 46598 sub     si, 2000h ;~ 19BA:02DE
cs=0x19ba;eip=0x0002e2; 	T(DEC(bx));	// 46599 dec     bx ;~ 19BA:02E2
cs=0x19ba;eip=0x0002e3; 	R(JNZ(loc_2843a));	// 46600 jnz     short loc_2843A ;~ 19BA:02E3
cs=0x19ba;eip=0x0002e5; 	R(JMP(loc_285ca));	// 46601 jmp     loc_285CA ;~ 19BA:02E5
loc_28468:
	// 7737 
cs=0x19ba;eip=0x0002e8; 	X(PUSH(ax));	// 46605 push    ax ;~ 19BA:02E8
cs=0x19ba;eip=0x0002e9; 	T(MOV(al, 5));	// 46606 mov     al, 5 ;~ 19BA:02E9
cs=0x19ba;eip=0x0002eb; 	T(MOV(ah, 1));	// 46607 mov     ah, 1 ;~ 19BA:02EB
cs=0x19ba;eip=0x0002ed; 	X(PUSH(dx));	// 46608 push    dx ;~ 19BA:02ED
cs=0x19ba;eip=0x0002ee; 	T(MOV(dx, 0x3CE));	// 46609 mov     dx, 3CEh ;~ 19BA:02EE
cs=0x19ba;eip=0x0002f1; 	R(OUT(dx, ax));	// 46610 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 19BA:02F1
cs=0x19ba;eip=0x0002f2; 	X(POP(dx));	// 46612 pop     dx ;~ 19BA:02F2
cs=0x19ba;eip=0x0002f3; 	X(POP(ax));	// 46613 pop     ax ;~ 19BA:02F3
cs=0x19ba;eip=0x0002f4; 	T(SHR(si, 1));	// 46614 shr     si, 1 ;~ 19BA:02F4
cs=0x19ba;eip=0x0002f6; 	T(SHR(si, 1));	// 46615 shr     si, 1 ;~ 19BA:02F6
cs=0x19ba;eip=0x0002f8; 	T(SHR(si, 1));	// 46616 shr     si, 1 ;~ 19BA:02F8
cs=0x19ba;eip=0x0002fa; 	T(MOV(bx, dx));	// 46617 mov     bx, dx ;~ 19BA:02FA
cs=0x19ba;eip=0x0002fc; 	T(SHR(bx, 1));	// 46618 shr     bx, 1 ;~ 19BA:02FC
cs=0x19ba;eip=0x0002fe; 	T(SHR(bx, 1));	// 46619 shr     bx, 1 ;~ 19BA:02FE
cs=0x19ba;eip=0x000300; 	T(SHR(bx, 1));	// 46620 shr     bx, 1 ;~ 19BA:0300
cs=0x19ba;eip=0x000302; 	T(INC(bx));	// 46621 inc     bx ;~ 19BA:0302
cs=0x19ba;eip=0x000303; 	T(SUB(bx, si));	// 46622 sub     bx, si ;~ 19BA:0303
cs=0x19ba;eip=0x000305; 	T(MOV(ax, word_38018));	// 46623 mov     ax, word_38018 ;~ 19BA:0305
cs=0x19ba;eip=0x000308; 	T(MUL1_2(di));	// 46624 mul     di ;~ 19BA:0308
cs=0x19ba;eip=0x00030a; 	T(ADD(si, ax));	// 46625 add     si, ax ;~ 19BA:030A
cs=0x19ba;eip=0x00030c; 	T(MOV(di, word_37bb5));	// 46626 mov     di, word_37BB5 ;~ 19BA:030C
cs=0x19ba;eip=0x000310; 	T(SHR(di, 1));	// 46627 shr     di, 1 ;~ 19BA:0310
cs=0x19ba;eip=0x000312; 	T(SHR(di, 1));	// 46628 shr     di, 1 ;~ 19BA:0312
cs=0x19ba;eip=0x000314; 	T(SHR(di, 1));	// 46629 shr     di, 1 ;~ 19BA:0314
cs=0x19ba;eip=0x000316; 	T(MOV(ax, word_37bb3));	// 46630 mov     ax, word_37BB3 ;~ 19BA:0316
cs=0x19ba;eip=0x000319; 	X(MUL1_2(word_38018));	// 46631 mul     word_38018 ;~ 19BA:0319
cs=0x19ba;eip=0x00031d; 	T(ADD(di, ax));	// 46632 add     di, ax ;~ 19BA:031D
cs=0x19ba;eip=0x00031f; 	X(PUSH(ds));	// 46633 push    ds ;~ 19BA:031F
cs=0x19ba;eip=0x000320; 	X(PUSH(word_38018));	// 46634 push    word_38018 ;~ 19BA:0320
cs=0x19ba;eip=0x000324; 	T(MOV(dx, word_37fec));	// 46635 mov     dx, word_37FEC ;~ 19BA:0324
cs=0x19ba;eip=0x000328; 	T(SHR(dx, 1));	// 46636 shr     dx, 1 ;~ 19BA:0328
cs=0x19ba;eip=0x00032a; 	T(SHR(dx, 1));	// 46637 shr     dx, 1 ;~ 19BA:032A
cs=0x19ba;eip=0x00032c; 	T(SHR(dx, 1));	// 46638 shr     dx, 1 ;~ 19BA:032C
cs=0x19ba;eip=0x00032e; 	T(SHR(dx, 1));	// 46639 shr     dx, 1 ;~ 19BA:032E
cs=0x19ba;eip=0x000330; 	X(PUSH(dx));	// 46640 push    dx ;~ 19BA:0330
cs=0x19ba;eip=0x000331; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x14))));	// 46641 mov     ax, [bp+14h] ;~ 19BA:0331
cs=0x19ba;eip=0x000334; 	T(MUL1_2(dx));	// 46642 mul     dx ;~ 19BA:0334
cs=0x19ba;eip=0x000336; 	T(ADD(ax, word_38070));	// 46643 add     ax, word_38070 ;~ 19BA:0336
cs=0x19ba;eip=0x00033a; 	T(MOV(es, ax));	// 46644 mov     es, ax ;~ 19BA:033A
cs=0x19ba;eip=0x00033c; 	X(POP(dx));	// 46645 pop     dx ;~ 19BA:033C
cs=0x19ba;eip=0x00033d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x12))));	// 46646 mov     ax, [bp+12h] ;~ 19BA:033D
cs=0x19ba;eip=0x000340; 	T(MUL1_2(dx));	// 46647 mul     dx ;~ 19BA:0340
cs=0x19ba;eip=0x000342; 	T(ADD(ax, word_38070));	// 46648 add     ax, word_38070 ;~ 19BA:0342
cs=0x19ba;eip=0x000346; 	T(MOV(ds, ax));	// 46649 mov     ds, ax ;~ 19BA:0346
cs=0x19ba;eip=0x000348; 	X(POP(ax));	// 46650 pop     ax ;~ 19BA:0348
cs=0x19ba;eip=0x000349; 	T(ADD(ax, bx));	// 46651 add     ax, bx ;~ 19BA:0349
cs=0x19ba;eip=0x00034b; 	T(MOV(dx, cx));	// 46652 mov     dx, cx ;~ 19BA:034B
loc_284cd:
	// 7738 
cs=0x19ba;eip=0x00034d; 	T(MOV(cx, bx));	// 46655 mov     cx, bx ;~ 19BA:034D
	// 46656 rep movsb ;~ 19BA:034F
cs=0x19ba;eip=0x00034f; 	X(	REP MOVSB);	// 46656 rep movsb ;~ 19BA:034F
cs=0x19ba;eip=0x000351; 	T(SUB(si, ax));	// 46657 sub     si, ax ;~ 19BA:0351
cs=0x19ba;eip=0x000353; 	T(SUB(di, ax));	// 46658 sub     di, ax ;~ 19BA:0353
cs=0x19ba;eip=0x000355; 	T(DEC(dx));	// 46659 dec     dx ;~ 19BA:0355
cs=0x19ba;eip=0x000356; 	R(JNZ(loc_284cd));	// 46660 jnz     short loc_284CD ;~ 19BA:0356
cs=0x19ba;eip=0x000358; 	X(PUSH(ax));	// 46661 push    ax ;~ 19BA:0358
cs=0x19ba;eip=0x000359; 	T(MOV(al, 5));	// 46662 mov     al, 5 ;~ 19BA:0359
cs=0x19ba;eip=0x00035b; 	T(MOV(ah, 0));	// 46663 mov     ah, 0 ;~ 19BA:035B
cs=0x19ba;eip=0x00035d; 	X(PUSH(dx));	// 46664 push    dx ;~ 19BA:035D
cs=0x19ba;eip=0x00035e; 	T(MOV(dx, 0x3CE));	// 46665 mov     dx, 3CEh ;~ 19BA:035E
cs=0x19ba;eip=0x000361; 	R(OUT(dx, ax));	// 46666 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 19BA:0361
cs=0x19ba;eip=0x000362; 	X(POP(dx));	// 46673 pop     dx ;~ 19BA:0362
cs=0x19ba;eip=0x000363; 	X(POP(ax));	// 46674 pop     ax ;~ 19BA:0363
cs=0x19ba;eip=0x000364; 	R(JMP(loc_285ca));	// 46675 jmp     loc_285CA ;~ 19BA:0364
loc_284e7:
	// 7739 
cs=0x19ba;eip=0x000367; 	T(MOV(ax, di));	// 46679 mov     ax, di ;~ 19BA:0367
cs=0x19ba;eip=0x000369; 	T(MOV(bx, si));	// 46680 mov     bx, si ;~ 19BA:0369
cs=0x19ba;eip=0x00036b; 	X(MOV(word_37bc4, cx));	// 46681 mov     word_37BC4, cx ;~ 19BA:036B
cs=0x19ba;eip=0x00036f; 	T(XCHG(ah, al));	// 46682 xchg    ah, al ;~ 19BA:036F
cs=0x19ba;eip=0x000371; 	T(ADD(bx, ax));	// 46683 add     bx, ax ;~ 19BA:0371
cs=0x19ba;eip=0x000373; 	T(SHR(ax, 1));	// 46684 shr     ax, 1 ;~ 19BA:0373
cs=0x19ba;eip=0x000375; 	T(SHR(ax, 1));	// 46685 shr     ax, 1 ;~ 19BA:0375
cs=0x19ba;eip=0x000377; 	T(ADD(bx, ax));	// 46686 add     bx, ax ;~ 19BA:0377
cs=0x19ba;eip=0x000379; 	T(SHR(bx, 1));	// 46687 shr     bx, 1 ;~ 19BA:0379
cs=0x19ba;eip=0x00037b; 	T(SHR(bx, 1));	// 46688 shr     bx, 1 ;~ 19BA:037B
cs=0x19ba;eip=0x00037d; 	X(MOV(word_37bb9, bx));	// 46689 mov     word_37BB9, bx ;~ 19BA:037D
cs=0x19ba;eip=0x000381; 	T(MOV(ax, word_37bb3));	// 46690 mov     ax, word_37BB3 ;~ 19BA:0381
cs=0x19ba;eip=0x000384; 	T(MOV(bx, word_37bb5));	// 46691 mov     bx, word_37BB5 ;~ 19BA:0384
cs=0x19ba;eip=0x000388; 	T(XCHG(ah, al));	// 46692 xchg    ah, al ;~ 19BA:0388
cs=0x19ba;eip=0x00038a; 	T(ADD(bx, ax));	// 46693 add     bx, ax ;~ 19BA:038A
cs=0x19ba;eip=0x00038c; 	T(SHR(ax, 1));	// 46694 shr     ax, 1 ;~ 19BA:038C
cs=0x19ba;eip=0x00038e; 	T(SHR(ax, 1));	// 46695 shr     ax, 1 ;~ 19BA:038E
cs=0x19ba;eip=0x000390; 	T(ADD(bx, ax));	// 46696 add     bx, ax ;~ 19BA:0390
cs=0x19ba;eip=0x000392; 	T(SHR(bx, 1));	// 46697 shr     bx, 1 ;~ 19BA:0392
cs=0x19ba;eip=0x000394; 	T(SHR(bx, 1));	// 46698 shr     bx, 1 ;~ 19BA:0394
cs=0x19ba;eip=0x000396; 	X(MOV(word_37bbb, bx));	// 46699 mov     word_37BBB, bx ;~ 19BA:0396
cs=0x19ba;eip=0x00039a; 	T(MOV(cx, si));	// 46700 mov     cx, si ;~ 19BA:039A
cs=0x19ba;eip=0x00039c; 	T(AND(cl, 3));	// 46701 and     cl, 3 ;~ 19BA:039C
cs=0x19ba;eip=0x00039f; 	X(MOV(byte_37bc2, cl));	// 46702 mov     byte_37BC2, cl ;~ 19BA:039F
cs=0x19ba;eip=0x0003a3; 	T(MOV(cx, word_37bb5));	// 46703 mov     cx, word_37BB5 ;~ 19BA:03A3
cs=0x19ba;eip=0x0003a7; 	T(AND(cl, 3));	// 46704 and     cl, 3 ;~ 19BA:03A7
cs=0x19ba;eip=0x0003aa; 	T(MOV(al, 1));	// 46705 mov     al, 1 ;~ 19BA:03AA
cs=0x19ba;eip=0x0003ac; 	T(SHL(al, cl));	// 46706 shl     al, cl ;~ 19BA:03AC
cs=0x19ba;eip=0x0003ae; 	X(MOV(byte_37bc3, cl));	// 46707 mov     byte_37BC3, cl ;~ 19BA:03AE
cs=0x19ba;eip=0x0003b2; 	X(MOV(byte_37bbf, al));	// 46708 mov     byte_37BBF, al ;~ 19BA:03B2
cs=0x19ba;eip=0x0003b5; 	T(NEG(si));	// 46709 neg     si ;~ 19BA:03B5
cs=0x19ba;eip=0x0003b7; 	T(ADD(si, dx));	// 46710 add     si, dx ;~ 19BA:03B7
cs=0x19ba;eip=0x0003b9; 	T(INC(si));	// 46711 inc     si ;~ 19BA:03B9
cs=0x19ba;eip=0x0003ba; 	T(MOV(dx, word_37fec));	// 46712 mov     dx, word_37FEC ;~ 19BA:03BA
cs=0x19ba;eip=0x0003be; 	T(SHR(dx, 1));	// 46713 shr     dx, 1 ;~ 19BA:03BE
cs=0x19ba;eip=0x0003c0; 	T(SHR(dx, 1));	// 46714 shr     dx, 1 ;~ 19BA:03C0
cs=0x19ba;eip=0x0003c2; 	T(SHR(dx, 1));	// 46715 shr     dx, 1 ;~ 19BA:03C2
cs=0x19ba;eip=0x0003c4; 	T(SHR(dx, 1));	// 46716 shr     dx, 1 ;~ 19BA:03C4
cs=0x19ba;eip=0x0003c6; 	T(MOV(bx, dx));	// 46717 mov     bx, dx ;~ 19BA:03C6
cs=0x19ba;eip=0x0003c8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x14))));	// 46718 mov     ax, [bp+14h] ;~ 19BA:03C8
cs=0x19ba;eip=0x0003cb; 	T(MUL1_2(dx));	// 46719 mul     dx ;~ 19BA:03CB
cs=0x19ba;eip=0x0003cd; 	T(ADD(ax, word_38070));	// 46720 add     ax, word_38070 ;~ 19BA:03CD
cs=0x19ba;eip=0x0003d1; 	T(MOV(es, ax));	// 46721 mov     es, ax ;~ 19BA:03D1
cs=0x19ba;eip=0x0003d3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x12))));	// 46722 mov     ax, [bp+12h] ;~ 19BA:03D3
cs=0x19ba;eip=0x0003d6; 	T(MUL1_2(bx));	// 46723 mul     bx ;~ 19BA:03D6
cs=0x19ba;eip=0x0003d8; 	T(ADD(ax, word_38070));	// 46724 add     ax, word_38070 ;~ 19BA:03D8
cs=0x19ba;eip=0x0003dc; 	X(MOV(word_37bc0, ax));	// 46725 mov     word_37BC0, ax ;~ 19BA:03DC
loc_2855f:
	// 7740 
cs=0x19ba;eip=0x0003df; 	T(MOV(dx, 0x3C4));	// 46728 mov     dx, 3C4h ;~ 19BA:03DF
cs=0x19ba;eip=0x0003e2; 	T(MOV(al, 2));	// 46729 mov     al, 2 ;~ 19BA:03E2
cs=0x19ba;eip=0x0003e4; 	T(MOV(ah, byte_37bbf));	// 46730 mov     ah, byte_37BBF ;~ 19BA:03E4
cs=0x19ba;eip=0x0003e8; 	R(OUT(dx, ax));	// 46731 out     dx, ax          ; EGA: sequencer address reg ;~ 19BA:03E8
cs=0x19ba;eip=0x0003e9; 	T(MOV(dl, 0x0CE));	// 46734 mov     dl, 0CEh ; 'Î' ;~ 19BA:03E9
cs=0x19ba;eip=0x0003eb; 	T(MOV(al, 4));	// 46735 mov     al, 4 ;~ 19BA:03EB
cs=0x19ba;eip=0x0003ed; 	T(MOV(ah, byte_37bc2));	// 46736 mov     ah, byte_37BC2 ;~ 19BA:03ED
cs=0x19ba;eip=0x0003f1; 	R(OUT(dx, ax));	// 46737 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 19BA:03F1
cs=0x19ba;eip=0x0003f2; 	T(MOV(bx, word_37bb9));	// 46740 mov     bx, word_37BB9 ;~ 19BA:03F2
cs=0x19ba;eip=0x0003f6; 	T(MOV(di, word_37bbb));	// 46741 mov     di, word_37BBB ;~ 19BA:03F6
cs=0x19ba;eip=0x0003fa; 	T(MOV(cx, word_37bc4));	// 46742 mov     cx, word_37BC4 ;~ 19BA:03FA
cs=0x19ba;eip=0x0003fe; 	T(MOV(dx, 0x50));	// 46743 mov     dx, 50h ; 'P' ;~ 19BA:03FE
cs=0x19ba;eip=0x000401; 	X(PUSH(ds));	// 46744 push    ds ;~ 19BA:0401
cs=0x19ba;eip=0x000402; 	T(MOV(ax, word_37bc0));	// 46745 mov     ax, word_37BC0 ;~ 19BA:0402
cs=0x19ba;eip=0x000405; 	T(MOV(ds, ax));	// 46746 mov     ds, ax ;~ 19BA:0405
loc_28587:
	// 7741 
cs=0x19ba;eip=0x000407; 	T(MOV(al, *(raddr(ds,bx))));	// 46749 mov     al, [bx] ;~ 19BA:0407
cs=0x19ba;eip=0x000409; 	X(MOV(*(raddr(es,di)), al));	// 46750 mov     es:[di], al ;~ 19BA:0409
cs=0x19ba;eip=0x00040c; 	T(SUB(bx, dx));	// 46751 sub     bx, dx ;~ 19BA:040C
cs=0x19ba;eip=0x00040e; 	T(SUB(di, dx));	// 46752 sub     di, dx ;~ 19BA:040E
cs=0x19ba;eip=0x000410; 	R(LOOP(loc_28587));	// 46753 loop    loc_28587 ;~ 19BA:0410
cs=0x19ba;eip=0x000412; 	T(DEC(si));	// 46754 dec     si ;~ 19BA:0412
cs=0x19ba;eip=0x000413; 	R(JZ(loc_285ca));	// 46755 jz      short loc_285CA ;~ 19BA:0413
cs=0x19ba;eip=0x000415; 	X(POP(ds));	// 46756 pop     ds ;~ 19BA:0415
cs=0x19ba;eip=0x000416; 	T(MOV(cl, byte_37bc2));	// 46757 mov     cl, byte_37BC2 ;~ 19BA:0416
cs=0x19ba;eip=0x00041a; 	T(INC(cl));	// 46758 inc     cl ;~ 19BA:041A
cs=0x19ba;eip=0x00041c; 	T(AND(cl, 3));	// 46759 and     cl, 3 ;~ 19BA:041C
cs=0x19ba;eip=0x00041f; 	X(MOV(byte_37bc2, cl));	// 46760 mov     byte_37BC2, cl ;~ 19BA:041F
cs=0x19ba;eip=0x000423; 	T(MOV(ax, 1));	// 46761 mov     ax, 1 ;~ 19BA:0423
cs=0x19ba;eip=0x000426; 	T(SHR(ax, cl));	// 46762 shr     ax, cl ;~ 19BA:0426
cs=0x19ba;eip=0x000428; 	X(ADD(word_37bb9, ax));	// 46763 add     word_37BB9, ax ;~ 19BA:0428
cs=0x19ba;eip=0x00042c; 	T(MOV(cl, byte_37bc3));	// 46764 mov     cl, byte_37BC3 ;~ 19BA:042C
cs=0x19ba;eip=0x000430; 	T(INC(cl));	// 46765 inc     cl ;~ 19BA:0430
cs=0x19ba;eip=0x000432; 	T(AND(cl, 3));	// 46766 and     cl, 3 ;~ 19BA:0432
cs=0x19ba;eip=0x000435; 	T(MOV(al, 1));	// 46767 mov     al, 1 ;~ 19BA:0435
cs=0x19ba;eip=0x000437; 	T(SHL(al, cl));	// 46768 shl     al, cl ;~ 19BA:0437
cs=0x19ba;eip=0x000439; 	X(MOV(byte_37bc3, cl));	// 46769 mov     byte_37BC3, cl ;~ 19BA:0439
cs=0x19ba;eip=0x00043d; 	X(MOV(byte_37bbf, al));	// 46770 mov     byte_37BBF, al ;~ 19BA:043D
cs=0x19ba;eip=0x000440; 	T(MOV(al, 1));	// 46771 mov     al, 1 ;~ 19BA:0440
cs=0x19ba;eip=0x000442; 	T(SHR(ax, cl));	// 46772 shr     ax, cl ;~ 19BA:0442
cs=0x19ba;eip=0x000444; 	X(ADD(word_37bbb, ax));	// 46773 add     word_37BBB, ax ;~ 19BA:0444
cs=0x19ba;eip=0x000448; 	R(JMP(loc_2855f));	// 46774 jmp     short loc_2855F ;~ 19BA:0448
loc_285ca:
	// 7742 
cs=0x19ba;eip=0x00044a; 	X(POP(ds));	// 46779 pop     ds ;~ 19BA:044A
loc_285cb:
	// 7743 
cs=0x19ba;eip=0x00044b; 	T(XOR(ax, ax));	// 46782 xor     ax, ax ;~ 19BA:044B
cs=0x19ba;eip=0x00044d; 	X(POP(si));	// 46783 pop     si ;~ 19BA:044D
cs=0x19ba;eip=0x00044e; 	X(POP(di));	// 46784 pop     di ;~ 19BA:044E
cs=0x19ba;eip=0x00044f; 	X(POP(bp));	// 46785 pop     bp ;~ 19BA:044F
cs=0x19ba;eip=0x000450; 	R(RETF(0));	// 46786 retf ;~ 19BA:0450

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_281af: 	goto loc_281af;
        case m2c::kloc_28209: 	goto loc_28209;
        case m2c::kloc_28227: 	goto loc_28227;
        case m2c::kloc_28230: 	goto loc_28230;
        case m2c::kloc_2823e: 	goto loc_2823e;
        case m2c::kloc_28283: 	goto loc_28283;
        case m2c::kloc_282d0: 	goto loc_282d0;
        case m2c::kloc_2831d: 	goto loc_2831d;
        case m2c::kloc_28367: 	goto loc_28367;
        case m2c::kloc_283a7: 	goto loc_283a7;
        case m2c::kloc_283cd: 	goto loc_283cd;
        case m2c::kloc_28406: 	goto loc_28406;
        case m2c::kloc_28414: 	goto loc_28414;
        case m2c::kloc_28422: 	goto loc_28422;
        case m2c::kloc_2842c: 	goto loc_2842c;
        case m2c::kloc_2843a: 	goto loc_2843a;
        case m2c::kloc_2844c: 	goto loc_2844c;
        case m2c::kloc_2845a: 	goto loc_2845a;
        case m2c::kloc_28468: 	goto loc_28468;
        case m2c::kloc_284cd: 	goto loc_284cd;
        case m2c::kloc_284e7: 	goto loc_284e7;
        case m2c::kloc_2855f: 	goto loc_2855f;
        case m2c::kloc_28587: 	goto loc_28587;
        case m2c::kloc_285ca: 	goto loc_285ca;
        case m2c::kloc_285cb: 	goto loc_285cb;
        case m2c::ksub_28183: 	goto sub_28183;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

