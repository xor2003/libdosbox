/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group29(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group29:
    _begin:
sub_3e446:
	// 102588 
#undef arg_0
#define arg_0 6
	// 102591 arg_0           = byte ptr  6 ;~ 2FE6:0006
cs=0x2fe6;eip=0x000006; 	X(PUSH(bp));	// 102593 push    bp ;~ 2FE6:0006
cs=0x2fe6;eip=0x000007; 	T(MOV(bp, sp));	// 102594 mov     bp, sp ;~ 2FE6:0007
cs=0x2fe6;eip=0x000009; 	X(PUSH(ds));	// 102595 push    ds ;~ 2FE6:0009
cs=0x2fe6;eip=0x00000a; 	T(CMP(*(raddr(ss,bp+arg_0)), 0));	// 102596 cmp     [bp+arg_0], 0 ;~ 2FE6:000A
cs=0x2fe6;eip=0x00000e; 	R(JZ(loc_3e47b));	// 102597 jz      short loc_3E47B ;~ 2FE6:000E
cs=0x2fe6;eip=0x000010; 	T(CMP(byte_4b09e, 0));	// 102598 cmp     byte_4B09E, 0 ;~ 2FE6:0010
cs=0x2fe6;eip=0x000015; 	R(JNZ(loc_3e496));	// 102599 jnz     short loc_3E496 ;~ 2FE6:0015
cs=0x2fe6;eip=0x000017; 	X(MOV(byte_4b09e, 1));	// 102600 mov     byte_4B09E, 1 ;~ 2FE6:0017
cs=0x2fe6;eip=0x00001c; 	T(MOV(ah, 0x35));	// 102601 mov     ah, 35h ; '5' ;~ 2FE6:001C
cs=0x2fe6;eip=0x00001e; 	T(MOV(al, 0x24));	// 102602 mov     al, 24h ; '$' ;~ 2FE6:001E
cs=0x2fe6;eip=0x000020; 	R(_INT(0x21));	// 102603 int     21h             ; DOS - 2+ - GET INTERRUPT VECTOR ;~ 2FE6:0020
cs=0x2fe6;eip=0x000022; 	X(MOV(word_4b09a, es));	// 102606 mov     word_4B09A, es ;~ 2FE6:0022
cs=0x2fe6;eip=0x000026; 	X(MOV(word_4b09c, bx));	// 102607 mov     word_4B09C, bx ;~ 2FE6:0026
cs=0x2fe6;eip=0x00002a; 	T(MOV(dx, 0x5B));	// 102608 mov     dx, 5Bh ; '[' ;~ 2FE6:002A
cs=0x2fe6;eip=0x00002d; 	T(MOV(ax, seg_offset(seg031)));	// 102609 mov     ax, seg seg031 ;~ 2FE6:002D
cs=0x2fe6;eip=0x000030; 	T(MOV(ds, ax));	// 102610 mov     ds, ax ;~ 2FE6:0030
cs=0x2fe6;eip=0x000032; 	T(MOV(ah, 0x25));	// 102612 mov     ah, 25h ; '%' ;~ 2FE6:0032
cs=0x2fe6;eip=0x000034; 	T(MOV(al, 0x24));	// 102613 mov     al, 24h ; '$' ;~ 2FE6:0034
cs=0x2fe6;eip=0x000036; 	R(_INT(0x21));	// 102614 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 2FE6:0036
cs=0x2fe6;eip=0x000038; 	R(JMP(loc_3e496));	// 102617 jmp     short loc_3E496 ;~ 2FE6:0038
loc_3e47b:
	// 10938 
cs=0x2fe6;eip=0x00003b; 	T(CMP(byte_4b09e, 0));	// 102624 cmp     byte_4B09E, 0 ;~ 2FE6:003B
cs=0x2fe6;eip=0x000040; 	R(JZ(loc_3e496));	// 102625 jz      short loc_3E496 ;~ 2FE6:0040
cs=0x2fe6;eip=0x000042; 	X(MOV(byte_4b09e, 0));	// 102626 mov     byte_4B09E, 0 ;~ 2FE6:0042
cs=0x2fe6;eip=0x000047; 	T(MOV(dx, word_4b09c));	// 102627 mov     dx, word_4B09C ;~ 2FE6:0047
cs=0x2fe6;eip=0x00004b; 	T(MOV(ax, word_4b09a));	// 102628 mov     ax, word_4B09A ;~ 2FE6:004B
cs=0x2fe6;eip=0x00004e; 	T(MOV(ds, ax));	// 102629 mov     ds, ax ;~ 2FE6:004E
cs=0x2fe6;eip=0x000050; 	T(MOV(ah, 0x25));	// 102630 mov     ah, 25h ; '%' ;~ 2FE6:0050
cs=0x2fe6;eip=0x000052; 	T(MOV(al, 0x24));	// 102631 mov     al, 24h ; '$' ;~ 2FE6:0052
cs=0x2fe6;eip=0x000054; 	R(_INT(0x21));	// 102632 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 2FE6:0054
loc_3e496:
	// 10939 
cs=0x2fe6;eip=0x000056; 	X(POP(ds));	// 102638 pop     ds ;~ 2FE6:0056
cs=0x2fe6;eip=0x000057; 	X(POP(bp));	// 102639 pop     bp ;~ 2FE6:0057
cs=0x2fe6;eip=0x000058; 	R(RETF(2));	// 102640 retf    2 ;~ 2FE6:0058
seg031_proc:
	// 102644 
cs=0x2fe6;eip=0x00005b; 	X(PUSH(ax));	// 102644 push    ax ;~ 2FE6:005B
cs=0x2fe6;eip=0x00005c; 	X(PUSH(ds));	// 102645 push    ds ;~ 2FE6:005C
cs=0x2fe6;eip=0x00005d; 	T(MOV(ax, seg_offset(dseg)));	// 102646 mov     ax, seg dseg ;~ 2FE6:005D
cs=0x2fe6;eip=0x000060; 	T(MOV(ds, ax));	// 102647 mov     ds, ax ;~ 2FE6:0060
cs=0x2fe6;eip=0x000062; 	T(MOV(ax, di));	// 102648 mov     ax, di ;~ 2FE6:0062
cs=0x2fe6;eip=0x000064; 	T(INC(ax));	// 102649 inc     ax ;~ 2FE6:0064
cs=0x2fe6;eip=0x000065; 	X(MOV(*(dw*)((&unk_571e7)), ax));	// 102650 mov     word ptr unk_571E7, ax ;~ 2FE6:0065
cs=0x2fe6;eip=0x000068; 	X(POP(ds));	// 102651 pop     ds ;~ 2FE6:0068
cs=0x2fe6;eip=0x000069; 	X(POP(ax));	// 102652 pop     ax ;~ 2FE6:0069
cs=0x2fe6;eip=0x00006a; 	T(XOR(al, al));	// 102653 xor     al, al ;~ 2FE6:006A
cs=0x2fe6;eip=0x00006c; 	R(IRET);	// 102654 iret ;~ 2FE6:006C
cs=0x2fe6;eip=0x000bbb; 	X(PUSH(bp));	// 104199 push    bp ;~ 2FE6:0BBB
cs=0x2fe6;eip=0x000bbc; 	T(MOV(bp, sp));	// 104200 mov     bp, sp ;~ 2FE6:0BBC
cs=0x2fe6;eip=0x000bbe; 	T(SUB(sp, 0x0A));	// 104201 sub     sp, 0Ah ;~ 2FE6:0BBE
cs=0x2fe6;eip=0x000bc1; 	X(PUSH(di));	// 104202 push    di ;~ 2FE6:0BC1
cs=0x2fe6;eip=0x000bc2; 	X(PUSH(si));	// 104203 push    si ;~ 2FE6:0BC2
cs=0x2fe6;eip=0x000bc3; 	T(MOV(si, *(dw*)(raddr(ss,bp+8))));	// 104204 mov     si, [bp+8] ;~ 2FE6:0BC3
cs=0x2fe6;eip=0x000bc6; 	T(CMP(*(dw*)((&unk_571e3)), 0));	// 104205 cmp     word ptr unk_571E3, 0 ;~ 2FE6:0BC6
cs=0x2fe6;eip=0x000bcb; 	R(JNZ(loc_3f012));	// 104206 jnz     short loc_3F012 ;~ 2FE6:0BCB
loc_3f00d:
	// 11046 
cs=0x2fe6;eip=0x000bcd; 	T(SUB(ax, ax));	// 104210 sub     ax, ax ;~ 2FE6:0BCD
cs=0x2fe6;eip=0x000bcf; 	R(JMP(loc_3f09d));	// 104211 jmp     loc_3F09D ;~ 2FE6:0BCF
loc_3f012:
	// 11047 
cs=0x2fe6;eip=0x000bd2; 	X(MOV(unk_571e9, 0));	// 104215 mov     byte ptr unk_571E9, 0 ;~ 2FE6:0BD2
cs=0x2fe6;eip=0x000bd7; 	T(CMP(*(dw*)((&unk_571e5)), 0));	// 104216 cmp     word ptr unk_571E5, 0 ;~ 2FE6:0BD7
cs=0x2fe6;eip=0x000bdc; 	R(JZ(loc_3f00d));	// 104217 jz      short loc_3F00D ;~ 2FE6:0BDC
cs=0x2fe6;eip=0x000bde; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 104218 mov     ax, [bp+6] ;~ 2FE6:0BDE
cs=0x2fe6;eip=0x000be1; 	X(MOV(*(dw*)(raddr(ss,bp-6)), ax));	// 104219 mov     [bp-6], ax ;~ 2FE6:0BE1
cs=0x2fe6;eip=0x000be4; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ds));	// 104220 mov     word ptr [bp-4], ds ;~ 2FE6:0BE4
loc_3f027:
	// 11048 
cs=0x2fe6;eip=0x000be7; 	T(MOV(al, 0x12));	// 104223 mov     al, 12h ;~ 2FE6:0BE7
cs=0x2fe6;eip=0x000be9; 	X(MUL1_1(unk_571e9));	// 104224 mul     byte ptr unk_571E9 ;~ 2FE6:0BE9
cs=0x2fe6;eip=0x000bed; 	T(ADD(ax, *(dw*)((&unk_571c6))));	// 104225 add     ax, word ptr unk_571C6 ;~ 2FE6:0BED
cs=0x2fe6;eip=0x000bf1; 	T(MOV(dx, *(dw*)((&unk_571c8))));	// 104226 mov     dx, word ptr unk_571C8 ;~ 2FE6:0BF1
cs=0x2fe6;eip=0x000bf5; 	X(PUSH(dx));	// 104227 push    dx ;~ 2FE6:0BF5
cs=0x2fe6;eip=0x000bf6; 	X(PUSH(ax));	// 104228 push    ax ;~ 2FE6:0BF6
cs=0x2fe6;eip=0x000bf7; 	X(PUSH(*(dw*)(raddr(ss,bp-4))));	// 104229 push    word ptr [bp-4] ;~ 2FE6:0BF7
cs=0x2fe6;eip=0x000bfa; 	X(PUSH(*(dw*)(raddr(ss,bp-6))));	// 104230 push    word ptr [bp-6] ;~ 2FE6:0BFA
cs=0x2fe6;eip=0x000bfd; 	R(CALL(sub_3f14e,0));	// 104231 call    sub_3F14E ;~ 2FE6:0BFD
cs=0x2fe6;eip=0x000c00; 	T(MOV(di, ax));	// 104232 mov     di, ax ;~ 2FE6:0C00
cs=0x2fe6;eip=0x000c02; 	T(OR(di, di));	// 104233 or      di, di ;~ 2FE6:0C02
cs=0x2fe6;eip=0x000c04; 	R(JNZ(loc_3f089));	// 104234 jnz     short loc_3F089 ;~ 2FE6:0C04
cs=0x2fe6;eip=0x000c06; 	T(MOV(al, 0x12));	// 104235 mov     al, 12h ;~ 2FE6:0C06
cs=0x2fe6;eip=0x000c08; 	X(MUL1_1(unk_571e9));	// 104236 mul     byte ptr unk_571E9 ;~ 2FE6:0C08
cs=0x2fe6;eip=0x000c0c; 	T(ADD(ax, *(dw*)((&unk_571c6))));	// 104237 add     ax, word ptr unk_571C6 ;~ 2FE6:0C0C
cs=0x2fe6;eip=0x000c10; 	T(MOV(dx, *(dw*)((&unk_571c8))));	// 104238 mov     dx, word ptr unk_571C8 ;~ 2FE6:0C10
cs=0x2fe6;eip=0x000c14; 	T(MOV(bx, ax));	// 104239 mov     bx, ax ;~ 2FE6:0C14
cs=0x2fe6;eip=0x000c16; 	X(MOV(*(dw*)(raddr(ss,bp-0x0A)), bx));	// 104240 mov     [bp-0Ah], bx ;~ 2FE6:0C16
cs=0x2fe6;eip=0x000c19; 	X(MOV(*(dw*)(raddr(ss,bp-8)), dx));	// 104241 mov     [bp-8], dx ;~ 2FE6:0C19
cs=0x2fe6;eip=0x000c1c; 	X(PUSH(di));	// 104242 push    di ;~ 2FE6:0C1C
cs=0x2fe6;eip=0x000c1d; 	X(PUSH(si));	// 104243 push    si ;~ 2FE6:0C1D
cs=0x2fe6;eip=0x000c1e; 	T(LES(di, *(dw*)(raddr(ss,bp-0x0A))));	// 104244 les     di, [bp-0Ah] ;~ 2FE6:0C1E
cs=0x2fe6;eip=0x000c21; 	T(MOV(cx, 0x0FFFF));	// 104245 mov     cx, 0FFFFh ;~ 2FE6:0C21
cs=0x2fe6;eip=0x000c24; 	T(XOR(ax, ax));	// 104246 xor     ax, ax ;~ 2FE6:0C24
	// 104247 repne scasb ;~ 2FE6:0C26
cs=0x2fe6;eip=0x000c26; 	T(	REPNE SCASB);	// 104247 repne scasb ;~ 2FE6:0C26
cs=0x2fe6;eip=0x000c28; 	T(NOT(cx));	// 104248 not     cx ;~ 2FE6:0C28
cs=0x2fe6;eip=0x000c2a; 	T(SUB(di, cx));	// 104249 sub     di, cx ;~ 2FE6:0C2A
cs=0x2fe6;eip=0x000c2c; 	T(XCHG(di, si));	// 104250 xchg    di, si ;~ 2FE6:0C2C
cs=0x2fe6;eip=0x000c2e; 	T(MOV(dx, ds));	// 104251 mov     dx, ds ;~ 2FE6:0C2E
cs=0x2fe6;eip=0x000c30; 	X(PUSH(es));	// 104252 push    es ;~ 2FE6:0C30
cs=0x2fe6;eip=0x000c31; 	T(MOV(es, dx));	// 104253 mov     es, dx ;~ 2FE6:0C31
cs=0x2fe6;eip=0x000c33; 	X(POP(ds));	// 104255 pop     ds ;~ 2FE6:0C33
cs=0x2fe6;eip=0x000c34; 	T(SHR(cx, 1));	// 104256 shr     cx, 1 ;~ 2FE6:0C34
	// 104257 repne movsw ;~ 2FE6:0C36
cs=0x2fe6;eip=0x000c36; 	X(	REPNE MOVSW);	// 104257 repne movsw ;~ 2FE6:0C36
cs=0x2fe6;eip=0x000c38; 	T(ADC(cx, cx));	// 104258 adc     cx, cx ;~ 2FE6:0C38
	// 104259 repne movsb ;~ 2FE6:0C3A
cs=0x2fe6;eip=0x000c3a; 	X(	REPNE MOVSB);	// 104259 repne movsb ;~ 2FE6:0C3A
cs=0x2fe6;eip=0x000c3c; 	T(MOV(ds, dx));	// 104260 mov     ds, dx ;~ 2FE6:0C3C
cs=0x2fe6;eip=0x000c3e; 	X(POP(si));	// 104261 pop     si ;~ 2FE6:0C3E
cs=0x2fe6;eip=0x000c3f; 	X(POP(di));	// 104262 pop     di ;~ 2FE6:0C3F
cs=0x2fe6;eip=0x000c40; 	X(INC(unk_571e9));	// 104263 inc     byte ptr unk_571E9 ;~ 2FE6:0C40
cs=0x2fe6;eip=0x000c44; 	T(MOV(ax, 1));	// 104264 mov     ax, 1 ;~ 2FE6:0C44
cs=0x2fe6;eip=0x000c47; 	R(JMP(loc_3f09d));	// 104265 jmp     short loc_3F09D ;~ 2FE6:0C47
loc_3f089:
	// 11049 
cs=0x2fe6;eip=0x000c49; 	X(INC(unk_571e9));	// 104269 inc     byte ptr unk_571E9 ;~ 2FE6:0C49
cs=0x2fe6;eip=0x000c4d; 	T(MOV(al, unk_571e9));	// 104270 mov     al, byte ptr unk_571E9 ;~ 2FE6:0C4D
cs=0x2fe6;eip=0x000c50; 	T(SUB(ah, ah));	// 104271 sub     ah, ah ;~ 2FE6:0C50
cs=0x2fe6;eip=0x000c52; 	T(CMP(ax, *(dw*)((&unk_571e5))));	// 104272 cmp     ax, word ptr unk_571E5 ;~ 2FE6:0C52
cs=0x2fe6;eip=0x000c56; 	R(JC(loc_3f09b));	// 104273 jb      short loc_3F09B ;~ 2FE6:0C56
cs=0x2fe6;eip=0x000c58; 	R(JMP(loc_3f00d));	// 104274 jmp     loc_3F00D ;~ 2FE6:0C58
loc_3f09b:
	// 11050 
cs=0x2fe6;eip=0x000c5b; 	R(JMP(loc_3f027));	// 104278 jmp     short loc_3F027 ;~ 2FE6:0C5B
loc_3f09d:
	// 11051 
cs=0x2fe6;eip=0x000c5d; 	X(POP(si));	// 104283 pop     si ;~ 2FE6:0C5D
cs=0x2fe6;eip=0x000c5e; 	X(POP(di));	// 104284 pop     di ;~ 2FE6:0C5E
cs=0x2fe6;eip=0x000c5f; 	T(MOV(sp, bp));	// 104285 mov     sp, bp ;~ 2FE6:0C5F
cs=0x2fe6;eip=0x000c61; 	X(POP(bp));	// 104286 pop     bp ;~ 2FE6:0C61
cs=0x2fe6;eip=0x000c62; 	R(RETF(4));	// 104287 retf    4 ;~ 2FE6:0C62
ret_2fe6_c65:
	// 11052 
cs=0x2fe6;eip=0x000c65; 	X(PUSH(bp));	// 104289 push    bp ;~ 2FE6:0C65
cs=0x2fe6;eip=0x000c66; 	T(MOV(bp, sp));	// 104290 mov     bp, sp ;~ 2FE6:0C66
cs=0x2fe6;eip=0x000c68; 	T(SUB(sp, 0x0A));	// 104291 sub     sp, 0Ah ;~ 2FE6:0C68
cs=0x2fe6;eip=0x000c6b; 	X(PUSH(di));	// 104292 push    di ;~ 2FE6:0C6B
cs=0x2fe6;eip=0x000c6c; 	X(PUSH(si));	// 104293 push    si ;~ 2FE6:0C6C
cs=0x2fe6;eip=0x000c6d; 	T(MOV(si, *(dw*)(raddr(ss,bp+8))));	// 104294 mov     si, [bp+8] ;~ 2FE6:0C6D
cs=0x2fe6;eip=0x000c70; 	T(CMP(*(dw*)((&unk_571e3)), 0));	// 104295 cmp     word ptr unk_571E3, 0 ;~ 2FE6:0C70
cs=0x2fe6;eip=0x000c75; 	R(JNZ(loc_3f0bc));	// 104296 jnz     short loc_3F0BC ;~ 2FE6:0C75
loc_3f0b7:
	// 11053 
cs=0x2fe6;eip=0x000c77; 	T(SUB(ax, ax));	// 104300 sub     ax, ax ;~ 2FE6:0C77
cs=0x2fe6;eip=0x000c79; 	R(JMP(loc_3f146));	// 104301 jmp     loc_3F146 ;~ 2FE6:0C79
loc_3f0bc:
	// 11054 
cs=0x2fe6;eip=0x000c7c; 	T(MOV(al, unk_571e9));	// 104305 mov     al, byte ptr unk_571E9 ;~ 2FE6:0C7C
cs=0x2fe6;eip=0x000c7f; 	T(SUB(ah, ah));	// 104306 sub     ah, ah ;~ 2FE6:0C7F
cs=0x2fe6;eip=0x000c81; 	T(CMP(ax, *(dw*)((&unk_571e5))));	// 104307 cmp     ax, word ptr unk_571E5 ;~ 2FE6:0C81
cs=0x2fe6;eip=0x000c85; 	R(JNC(loc_3f0b7));	// 104308 jnb     short loc_3F0B7 ;~ 2FE6:0C85
cs=0x2fe6;eip=0x000c87; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 104309 mov     ax, [bp+6] ;~ 2FE6:0C87
cs=0x2fe6;eip=0x000c8a; 	X(MOV(*(dw*)(raddr(ss,bp-6)), ax));	// 104310 mov     [bp-6], ax ;~ 2FE6:0C8A
cs=0x2fe6;eip=0x000c8d; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ds));	// 104311 mov     word ptr [bp-4], ds ;~ 2FE6:0C8D
loc_3f0d0:
	// 11055 
cs=0x2fe6;eip=0x000c90; 	T(MOV(al, 0x12));	// 104314 mov     al, 12h ;~ 2FE6:0C90
cs=0x2fe6;eip=0x000c92; 	X(MUL1_1(unk_571e9));	// 104315 mul     byte ptr unk_571E9 ;~ 2FE6:0C92
cs=0x2fe6;eip=0x000c96; 	T(ADD(ax, *(dw*)((&unk_571c6))));	// 104316 add     ax, word ptr unk_571C6 ;~ 2FE6:0C96
cs=0x2fe6;eip=0x000c9a; 	T(MOV(dx, *(dw*)((&unk_571c8))));	// 104317 mov     dx, word ptr unk_571C8 ;~ 2FE6:0C9A
cs=0x2fe6;eip=0x000c9e; 	X(PUSH(dx));	// 104318 push    dx ;~ 2FE6:0C9E
cs=0x2fe6;eip=0x000c9f; 	X(PUSH(ax));	// 104319 push    ax ;~ 2FE6:0C9F
cs=0x2fe6;eip=0x000ca0; 	X(PUSH(*(dw*)(raddr(ss,bp-4))));	// 104320 push    word ptr [bp-4] ;~ 2FE6:0CA0
cs=0x2fe6;eip=0x000ca3; 	X(PUSH(*(dw*)(raddr(ss,bp-6))));	// 104321 push    word ptr [bp-6] ;~ 2FE6:0CA3
cs=0x2fe6;eip=0x000ca6; 	R(CALL(sub_3f14e,0));	// 104322 call    sub_3F14E ;~ 2FE6:0CA6
cs=0x2fe6;eip=0x000ca9; 	T(MOV(di, ax));	// 104323 mov     di, ax ;~ 2FE6:0CA9
cs=0x2fe6;eip=0x000cab; 	T(OR(di, di));	// 104324 or      di, di ;~ 2FE6:0CAB
cs=0x2fe6;eip=0x000cad; 	R(JNZ(loc_3f132));	// 104325 jnz     short loc_3F132 ;~ 2FE6:0CAD
cs=0x2fe6;eip=0x000caf; 	T(MOV(al, 0x12));	// 104326 mov     al, 12h ;~ 2FE6:0CAF
cs=0x2fe6;eip=0x000cb1; 	X(MUL1_1(unk_571e9));	// 104327 mul     byte ptr unk_571E9 ;~ 2FE6:0CB1
cs=0x2fe6;eip=0x000cb5; 	T(ADD(ax, *(dw*)((&unk_571c6))));	// 104328 add     ax, word ptr unk_571C6 ;~ 2FE6:0CB5
cs=0x2fe6;eip=0x000cb9; 	T(MOV(dx, *(dw*)((&unk_571c8))));	// 104329 mov     dx, word ptr unk_571C8 ;~ 2FE6:0CB9
cs=0x2fe6;eip=0x000cbd; 	T(MOV(bx, ax));	// 104330 mov     bx, ax ;~ 2FE6:0CBD
cs=0x2fe6;eip=0x000cbf; 	X(MOV(*(dw*)(raddr(ss,bp-0x0A)), bx));	// 104331 mov     [bp-0Ah], bx ;~ 2FE6:0CBF
cs=0x2fe6;eip=0x000cc2; 	X(MOV(*(dw*)(raddr(ss,bp-8)), dx));	// 104332 mov     [bp-8], dx ;~ 2FE6:0CC2
cs=0x2fe6;eip=0x000cc5; 	X(PUSH(di));	// 104333 push    di ;~ 2FE6:0CC5
cs=0x2fe6;eip=0x000cc6; 	X(PUSH(si));	// 104334 push    si ;~ 2FE6:0CC6
cs=0x2fe6;eip=0x000cc7; 	T(LES(di, *(dw*)(raddr(ss,bp-0x0A))));	// 104335 les     di, [bp-0Ah] ;~ 2FE6:0CC7
cs=0x2fe6;eip=0x000cca; 	T(MOV(cx, 0x0FFFF));	// 104337 mov     cx, 0FFFFh ;~ 2FE6:0CCA
cs=0x2fe6;eip=0x000ccd; 	T(XOR(ax, ax));	// 104338 xor     ax, ax ;~ 2FE6:0CCD
	// 104339 repne scasb ;~ 2FE6:0CCF
cs=0x2fe6;eip=0x000ccf; 	T(	REPNE SCASB);	// 104339 repne scasb ;~ 2FE6:0CCF
cs=0x2fe6;eip=0x000cd1; 	T(NOT(cx));	// 104340 not     cx ;~ 2FE6:0CD1
cs=0x2fe6;eip=0x000cd3; 	T(SUB(di, cx));	// 104341 sub     di, cx ;~ 2FE6:0CD3
cs=0x2fe6;eip=0x000cd5; 	T(XCHG(di, si));	// 104342 xchg    di, si ;~ 2FE6:0CD5
cs=0x2fe6;eip=0x000cd7; 	T(MOV(dx, ds));	// 104343 mov     dx, ds ;~ 2FE6:0CD7
cs=0x2fe6;eip=0x000cd9; 	X(PUSH(es));	// 104344 push    es ;~ 2FE6:0CD9
cs=0x2fe6;eip=0x000cda; 	T(MOV(es, dx));	// 104345 mov     es, dx ;~ 2FE6:0CDA
cs=0x2fe6;eip=0x000cdc; 	X(POP(ds));	// 104347 pop     ds ;~ 2FE6:0CDC
cs=0x2fe6;eip=0x000cdd; 	T(SHR(cx, 1));	// 104348 shr     cx, 1 ;~ 2FE6:0CDD
	// 104349 repne movsw ;~ 2FE6:0CDF
cs=0x2fe6;eip=0x000cdf; 	X(	REPNE MOVSW);	// 104349 repne movsw ;~ 2FE6:0CDF
cs=0x2fe6;eip=0x000ce1; 	T(ADC(cx, cx));	// 104350 adc     cx, cx ;~ 2FE6:0CE1
	// 104351 repne movsb ;~ 2FE6:0CE3
cs=0x2fe6;eip=0x000ce3; 	X(	REPNE MOVSB);	// 104351 repne movsb ;~ 2FE6:0CE3
cs=0x2fe6;eip=0x000ce5; 	T(MOV(ds, dx));	// 104352 mov     ds, dx ;~ 2FE6:0CE5
cs=0x2fe6;eip=0x000ce7; 	X(POP(si));	// 104353 pop     si ;~ 2FE6:0CE7
cs=0x2fe6;eip=0x000ce8; 	X(POP(di));	// 104354 pop     di ;~ 2FE6:0CE8
cs=0x2fe6;eip=0x000ce9; 	X(INC(unk_571e9));	// 104355 inc     byte ptr unk_571E9 ;~ 2FE6:0CE9
cs=0x2fe6;eip=0x000ced; 	T(MOV(ax, 1));	// 104356 mov     ax, 1 ;~ 2FE6:0CED
cs=0x2fe6;eip=0x000cf0; 	R(JMP(loc_3f146));	// 104357 jmp     short loc_3F146 ;~ 2FE6:0CF0
loc_3f132:
	// 11056 
cs=0x2fe6;eip=0x000cf2; 	X(INC(unk_571e9));	// 104361 inc     byte ptr unk_571E9 ;~ 2FE6:0CF2
cs=0x2fe6;eip=0x000cf6; 	T(MOV(al, unk_571e9));	// 104362 mov     al, byte ptr unk_571E9 ;~ 2FE6:0CF6
cs=0x2fe6;eip=0x000cf9; 	T(SUB(ah, ah));	// 104363 sub     ah, ah ;~ 2FE6:0CF9
cs=0x2fe6;eip=0x000cfb; 	T(CMP(ax, *(dw*)((&unk_571e5))));	// 104364 cmp     ax, word ptr unk_571E5 ;~ 2FE6:0CFB
cs=0x2fe6;eip=0x000cff; 	R(JC(loc_3f144));	// 104365 jb      short loc_3F144 ;~ 2FE6:0CFF
cs=0x2fe6;eip=0x000d01; 	R(JMP(loc_3f0b7));	// 104366 jmp     loc_3F0B7 ;~ 2FE6:0D01
loc_3f144:
	// 11057 
cs=0x2fe6;eip=0x000d04; 	R(JMP(loc_3f0d0));	// 104370 jmp     short loc_3F0D0 ;~ 2FE6:0D04
loc_3f146:
	// 11058 
cs=0x2fe6;eip=0x000d06; 	X(POP(si));	// 104375 pop     si ;~ 2FE6:0D06
cs=0x2fe6;eip=0x000d07; 	X(POP(di));	// 104376 pop     di ;~ 2FE6:0D07
cs=0x2fe6;eip=0x000d08; 	T(MOV(sp, bp));	// 104377 mov     sp, bp ;~ 2FE6:0D08
cs=0x2fe6;eip=0x000d0a; 	X(POP(bp));	// 104378 pop     bp ;~ 2FE6:0D0A
cs=0x2fe6;eip=0x000d0b; 	R(RETF(4));	// 104379 retf    4 ;~ 2FE6:0D0B
loc_3f295:
	// 11066 
cs=0x2fe6;eip=0x000e55; 	X(PUSH(bp));	// 104625 push    bp ;~ 2FE6:0E55
cs=0x2fe6;eip=0x000e56; 	T(MOV(bp, sp));	// 104626 mov     bp, sp ;~ 2FE6:0E56
cs=0x2fe6;eip=0x000e58; 	X(PUSH(si));	// 104627 push    si ;~ 2FE6:0E58
cs=0x2fe6;eip=0x000e59; 	X(PUSH(di));	// 104628 push    di ;~ 2FE6:0E59
cs=0x2fe6;eip=0x000e5a; 	T(MOV(ax, *(dw*)((&unk_5717b))));	// 104629 mov     ax, word ptr unk_5717B ;~ 2FE6:0E5A
	cs=seg_offset(seg031);
cs=0x2fe6;eip=0x000e5d; 	X(MOV(*(dw*)(((db*)&word_3f307)), ax));	// 104630 mov     cs:word_3F307, ax ;~ 2FE6:0E5D
	cs=seg_offset(seg031);
cs=0x2fe6;eip=0x000e61; 	X(MOV(*(dw*)(((db*)&word_3f33a)), ax));	// 104631 mov     cs:word_3F33A, ax ;~ 2FE6:0E61
	cs=seg_offset(seg031);
cs=0x2fe6;eip=0x000e65; 	X(MOV(*(dw*)(((db*)&word_3f33f)), ax));	// 104632 mov     cs:word_3F33F, ax ;~ 2FE6:0E65
cs=0x2fe6;eip=0x000e69; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 104633 mov     ax, [bp+8] ;~ 2FE6:0E69
cs=0x2fe6;eip=0x000e6c; 	X(MOV(*(dw*)((&unk_4b0b6)), ax));	// 104634 mov     word ptr unk_4B0B6, ax ;~ 2FE6:0E6C
cs=0x2fe6;eip=0x000e6f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 104635 mov     ax, [bp+0Ah] ;~ 2FE6:0E6F
cs=0x2fe6;eip=0x000e72; 	X(MOV(*(dw*)((&unk_4b0b8)), ax));	// 104636 mov     word ptr unk_4B0B8, ax ;~ 2FE6:0E72
cs=0x2fe6;eip=0x000e75; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 104637 mov     ax, [bp+6] ;~ 2FE6:0E75
cs=0x2fe6;eip=0x000e78; 	X(MOV(*(dw*)((&unk_4b0ae)), ax));	// 104638 mov     word ptr unk_4B0AE, ax ;~ 2FE6:0E78
cs=0x2fe6;eip=0x000e7b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+4))));	// 104639 mov     ax, [bp+4] ;~ 2FE6:0E7B
cs=0x2fe6;eip=0x000e7e; 	X(MOV(*(dw*)((&unk_4b0ac)), ax));	// 104640 mov     word ptr unk_4B0AC, ax ;~ 2FE6:0E7E
cs=0x2fe6;eip=0x000e81; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0C))));	// 104641 mov     bx, [bp+0Ch] ;~ 2FE6:0E81
cs=0x2fe6;eip=0x000e84; 	X(MOV(*(dw*)((&unk_4b0b0)), bx));	// 104642 mov     word ptr unk_4B0B0, bx ;~ 2FE6:0E84
cs=0x2fe6;eip=0x000e88; 	R(CALL(sub_3f382,0));	// 104643 call    sub_3F382 ;~ 2FE6:0E88
cs=0x2fe6;eip=0x000e8b; 	X(DEC(*(dw*)((&unk_4b0b2))));	// 104644 dec     word ptr unk_4B0B2 ;~ 2FE6:0E8B
cs=0x2fe6;eip=0x000e8f; 	T(LES(di, *(dd*)((&unk_5717b))));	// 104645 les     di, dword ptr unk_5717B ;~ 2FE6:0E8F
cs=0x2fe6;eip=0x000e93; 	T(MOV(cx, 0x0FEE));	// 104647 mov     cx, 0FEEh ;~ 2FE6:0E93
cs=0x2fe6;eip=0x000e96; 	T(SHR(cx, 1));	// 104648 shr     cx, 1 ;~ 2FE6:0E96
cs=0x2fe6;eip=0x000e98; 	T(MOV(ax, 0x2020));	// 104649 mov     ax, 2020h ;~ 2FE6:0E98
	// 104650 rep stosw ;~ 2FE6:0E9B
cs=0x2fe6;eip=0x000e9b; 	X(	REP STOSW);	// 104650 rep stosw ;~ 2FE6:0E9B
cs=0x2fe6;eip=0x000e9d; 	T(MOV(si, 0x0FEE));	// 104651 mov     si, 0FEEh ;~ 2FE6:0E9D
cs=0x2fe6;eip=0x000ea0; 	T(XOR(dx, dx));	// 104652 xor     dx, dx ;~ 2FE6:0EA0
loc_3f2e2:
	// 11067 
cs=0x2fe6;eip=0x000ea2; 	T(SHR(dx, 1));	// 104656 shr     dx, 1 ;~ 2FE6:0EA2
cs=0x2fe6;eip=0x000ea4; 	T(TEST(dx, 0x100));	// 104657 test    dx, 100h ;~ 2FE6:0EA4
cs=0x2fe6;eip=0x000ea8; 	R(JNZ(loc_3f2f4));	// 104658 jnz     short loc_3F2F4 ;~ 2FE6:0EA8
cs=0x2fe6;eip=0x000eaa; 	R(CALL(sub_3f356,0));	// 104659 call    sub_3F356 ;~ 2FE6:0EAA
cs=0x2fe6;eip=0x000ead; 	R(JC(loc_3f31a));	// 104660 jb      short loc_3F31A ;~ 2FE6:0EAD
cs=0x2fe6;eip=0x000eaf; 	T(OR(ah, 0x0FF));	// 104661 or      ah, 0FFh ;~ 2FE6:0EAF
cs=0x2fe6;eip=0x000eb2; 	T(MOV(dx, ax));	// 104662 mov     dx, ax ;~ 2FE6:0EB2
loc_3f2f4:
	// 11068 
cs=0x2fe6;eip=0x000eb4; 	T(TEST(dx, 1));	// 104665 test    dx, 1 ;~ 2FE6:0EB4
cs=0x2fe6;eip=0x000eb8; 	R(JZ(loc_3f310));	// 104666 jz      short loc_3F310 ;~ 2FE6:0EB8
cs=0x2fe6;eip=0x000eba; 	R(CALL(sub_3f356,0));	// 104667 call    sub_3F356 ;~ 2FE6:0EBA
cs=0x2fe6;eip=0x000ebd; 	R(JC(loc_3f31a));	// 104668 jb      short loc_3F31A ;~ 2FE6:0EBD
cs=0x2fe6;eip=0x000ebf; 	R(CALL(sub_3f3ce,0));	// 104669 call    sub_3F3CE ;~ 2FE6:0EBF
cs=0x2fe6;eip=0x000ec2; 	R(JC(loc_3f350));	// 104670 jb      short loc_3F350 ;~ 2FE6:0EC2
cs=0x2fe6;eip=0x000ec9; 	T(INC(si));	// 104677 inc     si ;~ 2FE6:0EC9
cs=0x2fe6;eip=0x000eca; 	T(AND(si, 0x0FFF));	// 104678 and     si, 0FFFh ;~ 2FE6:0ECA
cs=0x2fe6;eip=0x000ece; 	R(JMP(loc_3f2e2));	// 104679 jmp     short loc_3F2E2 ;~ 2FE6:0ECE
loc_3f310:
	// 11069 
cs=0x2fe6;eip=0x000ed0; 	R(CALL(sub_3f356,0));	// 104683 call    sub_3F356 ;~ 2FE6:0ED0
cs=0x2fe6;eip=0x000ed3; 	R(JC(loc_3f31a));	// 104684 jb      short loc_3F31A ;~ 2FE6:0ED3
cs=0x2fe6;eip=0x000ed5; 	T(MOV(di, ax));	// 104685 mov     di, ax ;~ 2FE6:0ED5
cs=0x2fe6;eip=0x000ed7; 	R(CALL(sub_3f356,0));	// 104686 call    sub_3F356 ;~ 2FE6:0ED7
loc_3f31a:
	// 11070 
cs=0x2fe6;eip=0x000eda; 	R(JC(loc_3f350));	// 104690 jb      short loc_3F350 ;~ 2FE6:0EDA
cs=0x2fe6;eip=0x000edc; 	T(MOV(cx, ax));	// 104691 mov     cx, ax ;~ 2FE6:0EDC
cs=0x2fe6;eip=0x000ede; 	T(AND(ax, 0x0F0));	// 104692 and     ax, 0F0h ;~ 2FE6:0EDE
cs=0x2fe6;eip=0x000ee1; 	T(SHL(ax, 1));	// 104693 shl     ax, 1 ;~ 2FE6:0EE1
cs=0x2fe6;eip=0x000ee3; 	T(SHL(ax, 1));	// 104694 shl     ax, 1 ;~ 2FE6:0EE3
cs=0x2fe6;eip=0x000ee5; 	T(SHL(ax, 1));	// 104695 shl     ax, 1 ;~ 2FE6:0EE5
cs=0x2fe6;eip=0x000ee7; 	T(SHL(ax, 1));	// 104696 shl     ax, 1 ;~ 2FE6:0EE7
cs=0x2fe6;eip=0x000ee9; 	T(OR(di, ax));	// 104697 or      di, ax ;~ 2FE6:0EE9
cs=0x2fe6;eip=0x000eeb; 	T(AND(cx, 0x0F));	// 104698 and     cx, 0Fh ;~ 2FE6:0EEB
cs=0x2fe6;eip=0x000eee; 	T(ADD(cx, 3));	// 104699 add     cx, 3 ;~ 2FE6:0EEE
loc_3f331:
	// 11071 
cs=0x2fe6;eip=0x000ef1; 	T(MOV(bx, di));	// 104702 mov     bx, di ;~ 2FE6:0EF1
cs=0x2fe6;eip=0x000ef3; 	T(AND(bx, 0x0FFF));	// 104703 and     bx, 0FFFh ;~ 2FE6:0EF3
cs=0x2fe6;eip=0x000f01; 	T(INC(si));	// 104710 inc     si ;~ 2FE6:0F01
cs=0x2fe6;eip=0x000f02; 	T(AND(si, 0x0FFF));	// 104711 and     si, 0FFFh ;~ 2FE6:0F02
cs=0x2fe6;eip=0x000f06; 	R(CALL(sub_3f3ce,0));	// 104712 call    sub_3F3CE ;~ 2FE6:0F06
cs=0x2fe6;eip=0x000f09; 	R(JC(loc_3f350));	// 104713 jb      short loc_3F350 ;~ 2FE6:0F09
cs=0x2fe6;eip=0x000f0b; 	T(INC(di));	// 104714 inc     di ;~ 2FE6:0F0B
cs=0x2fe6;eip=0x000f0c; 	R(LOOP(loc_3f331));	// 104715 loop    loc_3F331 ;~ 2FE6:0F0C
cs=0x2fe6;eip=0x000f0e; 	R(JMP(loc_3f2e2));	// 104716 jmp     short loc_3F2E2 ;~ 2FE6:0F0E
loc_3f350:
	// 11072 
cs=0x2fe6;eip=0x000f10; 	X(POP(di));	// 104721 pop     di ;~ 2FE6:0F10
cs=0x2fe6;eip=0x000f11; 	X(POP(si));	// 104722 pop     si ;~ 2FE6:0F11
cs=0x2fe6;eip=0x000f12; 	X(POP(bp));	// 104723 pop     bp ;~ 2FE6:0F12
cs=0x2fe6;eip=0x000f13; 	R(RETN(0x0A));	// 104724 retn    0Ah ;~ 2FE6:0F13
loc_3f405:
	// 11080 
cs=0x2fe6;eip=0x000fc5; 	X(PUSH(bp));	// 104856 push    bp ;~ 2FE6:0FC5
cs=0x2fe6;eip=0x000fc6; 	T(MOV(bp, sp));	// 104857 mov     bp, sp ;~ 2FE6:0FC6
cs=0x2fe6;eip=0x000fc8; 	X(PUSH(si));	// 104858 push    si ;~ 2FE6:0FC8
cs=0x2fe6;eip=0x000fc9; 	X(PUSH(di));	// 104859 push    di ;~ 2FE6:0FC9
cs=0x2fe6;eip=0x000fca; 	T(MOV(ax, *(dw*)(raddr(ss,bp+4))));	// 104860 mov     ax, [bp+4] ;~ 2FE6:0FCA
cs=0x2fe6;eip=0x000fcd; 	X(MOV(*(dw*)((&unk_4b0c9)), ax));	// 104861 mov     word ptr unk_4B0C9, ax ;~ 2FE6:0FCD
cs=0x2fe6;eip=0x000fd0; 	T(CMP(ax, 0x1172));	// 104862 cmp     ax, 1172h ;~ 2FE6:0FD0
cs=0x2fe6;eip=0x000fd3; 	R(JNZ(loc_3f43f));	// 104863 jnz     short loc_3F43F ;~ 2FE6:0FD3
cs=0x2fe6;eip=0x000fd5; 	T(MOV(dx, 0x3CE));	// 104864 mov     dx, 3CEh ;~ 2FE6:0FD5
cs=0x2fe6;eip=0x000fd8; 	T(MOV(ax, 0x0FF08));	// 104865 mov     ax, 0FF08h ;~ 2FE6:0FD8
cs=0x2fe6;eip=0x000fdb; 	R(OUT(dx, ax));	// 104866 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 2FE6:0FDB
cs=0x2fe6;eip=0x000fdc; 	T(MOV(ax, 0x0F02));	// 104868 mov     ax, 0F02h ;~ 2FE6:0FDC
cs=0x2fe6;eip=0x000fdf; 	R(OUT(dx, ax));	// 104869 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 2FE6:0FDF
cs=0x2fe6;eip=0x000fe0; 	T(MOV(ax, 3));	// 104871 mov     ax, 3 ;~ 2FE6:0FE0
cs=0x2fe6;eip=0x000fe3; 	R(OUT(dx, ax));	// 104872 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 2FE6:0FE3
cs=0x2fe6;eip=0x000fe4; 	T(MOV(ax, 0x0F07));	// 104877 mov     ax, 0F07h ;~ 2FE6:0FE4
cs=0x2fe6;eip=0x000fe7; 	R(OUT(dx, ax));	// 104878 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 2FE6:0FE7
cs=0x2fe6;eip=0x000fe8; 	T(MOV(ax, 5));	// 104880 mov     ax, 5 ;~ 2FE6:0FE8
cs=0x2fe6;eip=0x000feb; 	R(OUT(dx, ax));	// 104881 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 2FE6:0FEB
cs=0x2fe6;eip=0x000fec; 	T(MOV(dx, 0x3C4));	// 104888 mov     dx, 3C4h ;~ 2FE6:0FEC
cs=0x2fe6;eip=0x000fef; 	T(MOV(ax, 0x0F02));	// 104889 mov     ax, 0F02h ;~ 2FE6:0FEF
cs=0x2fe6;eip=0x000ff2; 	R(OUT(dx, ax));	// 104890 out     dx, ax          ; EGA: sequencer address reg ;~ 2FE6:0FF2
cs=0x2fe6;eip=0x000ff3; 	T(SUB(sp, 0x100));	// 104892 sub     sp, 100h ;~ 2FE6:0FF3
cs=0x2fe6;eip=0x000ff7; 	T(MOV(ax, sp));	// 104893 mov     ax, sp ;~ 2FE6:0FF7
cs=0x2fe6;eip=0x000ff9; 	X(MOV(*(dw*)((&unk_4b0db)), ax));	// 104894 mov     word ptr unk_4B0DB, ax ;~ 2FE6:0FF9
cs=0x2fe6;eip=0x000ffc; 	R(CALL(sub_3f7da,0));	// 104895 call    sub_3F7DA ;~ 2FE6:0FFC
loc_3f43f:
	// 11081 
cs=0x2fe6;eip=0x000fff; 	T(MOV(ax, *(dw*)((&unk_5717b))));	// 104898 mov     ax, word ptr unk_5717B ;~ 2FE6:0FFF
	cs=seg_offset(seg031);
cs=0x2fe6;eip=0x001002; 	X(MOV(*(dw*)(((db*)&word_3f4e4)), ax));	// 104899 mov     cs:word_3F4E4, ax ;~ 2FE6:1002
	cs=seg_offset(seg031);
cs=0x2fe6;eip=0x001006; 	X(MOV(*(dw*)(((db*)&word_3f517)), ax));	// 104900 mov     cs:word_3F517, ax ;~ 2FE6:1006
	cs=seg_offset(seg031);
cs=0x2fe6;eip=0x00100a; 	X(MOV(*(dw*)(((db*)&word_3f51c)), ax));	// 104901 mov     cs:word_3F51C, ax ;~ 2FE6:100A
cs=0x2fe6;eip=0x00100e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 104902 mov     ax, [bp+8] ;~ 2FE6:100E
cs=0x2fe6;eip=0x001011; 	X(MOV(*(dw*)((&unk_4b0b6)), ax));	// 104903 mov     word ptr unk_4B0B6, ax ;~ 2FE6:1011
cs=0x2fe6;eip=0x001014; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 104904 mov     ax, [bp+0Ah] ;~ 2FE6:1014
cs=0x2fe6;eip=0x001017; 	X(MOV(*(dw*)((&unk_4b0b8)), ax));	// 104905 mov     word ptr unk_4B0B8, ax ;~ 2FE6:1017
cs=0x2fe6;eip=0x00101a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 104906 mov     ax, [bp+6] ;~ 2FE6:101A
cs=0x2fe6;eip=0x00101d; 	T(MOV(si, ax));	// 104907 mov     si, ax ;~ 2FE6:101D
cs=0x2fe6;eip=0x00101f; 	T(MOV(al, *(raddr(ds,si))));	// 104908 mov     al, [si] ;~ 2FE6:101F
cs=0x2fe6;eip=0x001021; 	T(AND(al, 1));	// 104909 and     al, 1 ;~ 2FE6:1021
cs=0x2fe6;eip=0x001023; 	X(MOV(unk_4b0ba, al));	// 104910 mov     byte ptr unk_4B0BA, al ;~ 2FE6:1023
cs=0x2fe6;eip=0x001026; 	T(MOV(ax, *(dw*)(raddr(ds,si+2))));	// 104911 mov     ax, [si+2] ;~ 2FE6:1026
cs=0x2fe6;eip=0x001029; 	X(MOV(*(dw*)((&unk_4b0bb)), ax));	// 104912 mov     word ptr unk_4B0BB, ax ;~ 2FE6:1029
cs=0x2fe6;eip=0x00102c; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 104913 mov     ax, [si+4] ;~ 2FE6:102C
cs=0x2fe6;eip=0x00102f; 	X(MOV(*(dw*)((&unk_4b0bd)), ax));	// 104914 mov     word ptr unk_4B0BD, ax ;~ 2FE6:102F
cs=0x2fe6;eip=0x001032; 	T(MOV(ax, *(dw*)(raddr(ds,si+6))));	// 104915 mov     ax, [si+6] ;~ 2FE6:1032
cs=0x2fe6;eip=0x001035; 	X(MOV(*(dw*)((&unk_4b0c1)), ax));	// 104916 mov     word ptr unk_4B0C1, ax ;~ 2FE6:1035
cs=0x2fe6;eip=0x001038; 	X(MOV(*(dw*)((&unk_4b0c3)), ax));	// 104917 mov     word ptr unk_4B0C3, ax ;~ 2FE6:1038
cs=0x2fe6;eip=0x00103b; 	T(MOV(ax, *(dw*)(raddr(ds,si+8))));	// 104918 mov     ax, [si+8] ;~ 2FE6:103B
cs=0x2fe6;eip=0x00103e; 	X(MOV(*(dw*)((&unk_4b0c5)), ax));	// 104919 mov     word ptr unk_4B0C5, ax ;~ 2FE6:103E
cs=0x2fe6;eip=0x001041; 	T(XOR(ax, ax));	// 104920 xor     ax, ax ;~ 2FE6:1041
cs=0x2fe6;eip=0x001043; 	X(MOV(*(dw*)((&unk_4b0c7)), ax));	// 104921 mov     word ptr unk_4B0C7, ax ;~ 2FE6:1043
cs=0x2fe6;eip=0x001046; 	X(MOV(*(dw*)((&unk_4b0bf)), ax));	// 104922 mov     word ptr unk_4B0BF, ax ;~ 2FE6:1046
cs=0x2fe6;eip=0x001049; 	X(MOV(*(dw*)((&unk_4b0ae)), ax));	// 104923 mov     word ptr unk_4B0AE, ax ;~ 2FE6:1049
cs=0x2fe6;eip=0x00104c; 	T(XOR(ax, ax));	// 104924 xor     ax, ax ;~ 2FE6:104C
cs=0x2fe6;eip=0x00104e; 	X(MOV(*(dw*)((&unk_4b0ac)), ax));	// 104925 mov     word ptr unk_4B0AC, ax ;~ 2FE6:104E
cs=0x2fe6;eip=0x001051; 	T(MOV(ax, *(dw*)(raddr(ds,si+6))));	// 104926 mov     ax, [si+6] ;~ 2FE6:1051
cs=0x2fe6;eip=0x001054; 	T(SUB(sp, ax));	// 104927 sub     sp, ax ;~ 2FE6:1054
cs=0x2fe6;eip=0x001056; 	T(MOV(ax, sp));	// 104928 mov     ax, sp ;~ 2FE6:1056
cs=0x2fe6;eip=0x001058; 	X(MOV(*(dw*)((&unk_4b0dd)), ax));	// 104929 mov     word ptr unk_4B0DD, ax ;~ 2FE6:1058
cs=0x2fe6;eip=0x00105b; 	X(MOV(*(dw*)((&unk_4b0df)), ax));	// 104930 mov     word ptr unk_4B0DF, ax ;~ 2FE6:105B
cs=0x2fe6;eip=0x00105e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0C))));	// 104931 mov     bx, [bp+0Ch] ;~ 2FE6:105E
cs=0x2fe6;eip=0x001061; 	X(MOV(*(dw*)((&unk_4b0b0)), bx));	// 104932 mov     word ptr unk_4B0B0, bx ;~ 2FE6:1061
cs=0x2fe6;eip=0x001065; 	R(CALL(sub_3f382,0));	// 104933 call    sub_3F382 ;~ 2FE6:1065
cs=0x2fe6;eip=0x001068; 	X(DEC(*(dw*)((&unk_4b0b2))));	// 104934 dec     word ptr unk_4B0B2 ;~ 2FE6:1068
cs=0x2fe6;eip=0x00106c; 	T(LES(di, *(dd*)((&unk_5717b))));	// 104935 les     di, dword ptr unk_5717B ;~ 2FE6:106C
cs=0x2fe6;eip=0x001070; 	T(MOV(cx, 0x0FEE));	// 104936 mov     cx, 0FEEh ;~ 2FE6:1070
cs=0x2fe6;eip=0x001073; 	T(SHR(cx, 1));	// 104937 shr     cx, 1 ;~ 2FE6:1073
cs=0x2fe6;eip=0x001075; 	T(MOV(ax, 0x2020));	// 104938 mov     ax, 2020h ;~ 2FE6:1075
	// 104939 rep stosw ;~ 2FE6:1078
cs=0x2fe6;eip=0x001078; 	X(	REP STOSW);	// 104939 rep stosw ;~ 2FE6:1078
cs=0x2fe6;eip=0x00107a; 	T(MOV(si, 0x0FEE));	// 104940 mov     si, 0FEEh ;~ 2FE6:107A
cs=0x2fe6;eip=0x00107d; 	T(XOR(dx, dx));	// 104941 xor     dx, dx ;~ 2FE6:107D
loc_3f4bf:
	// 11082 
cs=0x2fe6;eip=0x00107f; 	T(SHR(dx, 1));	// 104945 shr     dx, 1 ;~ 2FE6:107F
cs=0x2fe6;eip=0x001081; 	T(TEST(dx, 0x100));	// 104946 test    dx, 100h ;~ 2FE6:1081
cs=0x2fe6;eip=0x001085; 	R(JNZ(loc_3f4d1));	// 104947 jnz     short loc_3F4D1 ;~ 2FE6:1085
cs=0x2fe6;eip=0x001087; 	R(CALL(sub_3f356,0));	// 104948 call    sub_3F356 ;~ 2FE6:1087
cs=0x2fe6;eip=0x00108a; 	R(JC(loc_3f4f7));	// 104949 jb      short loc_3F4F7 ;~ 2FE6:108A
cs=0x2fe6;eip=0x00108c; 	T(OR(ah, 0x0FF));	// 104950 or      ah, 0FFh ;~ 2FE6:108C
cs=0x2fe6;eip=0x00108f; 	T(MOV(dx, ax));	// 104951 mov     dx, ax ;~ 2FE6:108F
loc_3f4d1:
	// 11083 
cs=0x2fe6;eip=0x001091; 	T(TEST(dx, 1));	// 104954 test    dx, 1 ;~ 2FE6:1091
cs=0x2fe6;eip=0x001095; 	R(JZ(loc_3f4ed));	// 104955 jz      short loc_3F4ED ;~ 2FE6:1095
cs=0x2fe6;eip=0x001097; 	R(CALL(sub_3f356,0));	// 104956 call    sub_3F356 ;~ 2FE6:1097
cs=0x2fe6;eip=0x00109a; 	R(JC(loc_3f4f7));	// 104957 jb      short loc_3F4F7 ;~ 2FE6:109A
cs=0x2fe6;eip=0x00109c; 	R(CALL(sub_3f563,0));	// 104958 call    sub_3F563 ;~ 2FE6:109C
cs=0x2fe6;eip=0x00109f; 	R(JC(loc_3f52d));	// 104959 jb      short loc_3F52D ;~ 2FE6:109F
cs=0x2fe6;eip=0x0010a6; 	T(INC(si));	// 104964 inc     si ;~ 2FE6:10A6
cs=0x2fe6;eip=0x0010a7; 	T(AND(si, 0x0FFF));	// 104965 and     si, 0FFFh ;~ 2FE6:10A7
cs=0x2fe6;eip=0x0010ab; 	R(JMP(loc_3f4bf));	// 104966 jmp     short loc_3F4BF ;~ 2FE6:10AB
loc_3f4ed:
	// 11084 
cs=0x2fe6;eip=0x0010ad; 	R(CALL(sub_3f356,0));	// 104970 call    sub_3F356 ;~ 2FE6:10AD
cs=0x2fe6;eip=0x0010b0; 	R(JC(loc_3f4f7));	// 104971 jb      short loc_3F4F7 ;~ 2FE6:10B0
cs=0x2fe6;eip=0x0010b2; 	T(MOV(di, ax));	// 104972 mov     di, ax ;~ 2FE6:10B2
cs=0x2fe6;eip=0x0010b4; 	R(CALL(sub_3f356,0));	// 104973 call    sub_3F356 ;~ 2FE6:10B4
loc_3f4f7:
	// 11085 
cs=0x2fe6;eip=0x0010b7; 	R(JC(loc_3f52d));	// 104977 jb      short loc_3F52D ;~ 2FE6:10B7
cs=0x2fe6;eip=0x0010b9; 	T(MOV(cx, ax));	// 104978 mov     cx, ax ;~ 2FE6:10B9
cs=0x2fe6;eip=0x0010bb; 	T(AND(ax, 0x0F0));	// 104979 and     ax, 0F0h ;~ 2FE6:10BB
cs=0x2fe6;eip=0x0010be; 	T(SHL(ax, 1));	// 104980 shl     ax, 1 ;~ 2FE6:10BE
cs=0x2fe6;eip=0x0010c0; 	T(SHL(ax, 1));	// 104981 shl     ax, 1 ;~ 2FE6:10C0
cs=0x2fe6;eip=0x0010c2; 	T(SHL(ax, 1));	// 104982 shl     ax, 1 ;~ 2FE6:10C2
cs=0x2fe6;eip=0x0010c4; 	T(SHL(ax, 1));	// 104983 shl     ax, 1 ;~ 2FE6:10C4
cs=0x2fe6;eip=0x0010c6; 	T(OR(di, ax));	// 104984 or      di, ax ;~ 2FE6:10C6
cs=0x2fe6;eip=0x0010c8; 	T(AND(cx, 0x0F));	// 104985 and     cx, 0Fh ;~ 2FE6:10C8
cs=0x2fe6;eip=0x0010cb; 	T(ADD(cx, 3));	// 104986 add     cx, 3 ;~ 2FE6:10CB
loc_3f50e:
	// 11086 
cs=0x2fe6;eip=0x0010ce; 	T(MOV(bx, di));	// 104989 mov     bx, di ;~ 2FE6:10CE
cs=0x2fe6;eip=0x0010d0; 	T(AND(bx, 0x0FFF));	// 104990 and     bx, 0FFFh ;~ 2FE6:10D0
cs=0x2fe6;eip=0x0010de; 	T(INC(si));	// 104997 inc     si ;~ 2FE6:10DE
cs=0x2fe6;eip=0x0010df; 	T(AND(si, 0x0FFF));	// 104998 and     si, 0FFFh ;~ 2FE6:10DF
cs=0x2fe6;eip=0x0010e3; 	R(CALL(sub_3f563,0));	// 104999 call    sub_3F563 ;~ 2FE6:10E3
cs=0x2fe6;eip=0x0010e6; 	R(JC(loc_3f52d));	// 105000 jb      short loc_3F52D ;~ 2FE6:10E6
cs=0x2fe6;eip=0x0010e8; 	T(INC(di));	// 105001 inc     di ;~ 2FE6:10E8
cs=0x2fe6;eip=0x0010e9; 	R(LOOP(loc_3f50e));	// 105002 loop    loc_3F50E ;~ 2FE6:10E9
cs=0x2fe6;eip=0x0010eb; 	R(JMP(loc_3f4bf));	// 105003 jmp     short loc_3F4BF ;~ 2FE6:10EB
loc_3f52d:
	// 11087 
cs=0x2fe6;eip=0x0010ed; 	T(MOV(bx, *(dw*)((&unk_4b0c1))));	// 105008 mov     bx, word ptr unk_4B0C1 ;~ 2FE6:10ED
cs=0x2fe6;eip=0x0010f1; 	T(CMP(*(dw*)((&unk_4b0c9)), 0x1172));	// 105009 cmp     word ptr unk_4B0C9, 1172h ;~ 2FE6:10F1
cs=0x2fe6;eip=0x0010f7; 	R(JNZ(loc_3f55b));	// 105010 jnz     short loc_3F55B ;~ 2FE6:10F7
cs=0x2fe6;eip=0x0010f9; 	T(MOV(dx, 0x3CE));	// 105011 mov     dx, 3CEh ;~ 2FE6:10F9
cs=0x2fe6;eip=0x0010fc; 	T(MOV(ax, 0x0FF08));	// 105012 mov     ax, 0FF08h ;~ 2FE6:10FC
cs=0x2fe6;eip=0x0010ff; 	R(OUT(dx, ax));	// 105013 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 2FE6:10FF
cs=0x2fe6;eip=0x001100; 	T(MOV(ax, 0x0F02));	// 105015 mov     ax, 0F02h ;~ 2FE6:1100
cs=0x2fe6;eip=0x001103; 	R(OUT(dx, ax));	// 105016 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 2FE6:1103
cs=0x2fe6;eip=0x001104; 	T(MOV(ax, 3));	// 105018 mov     ax, 3 ;~ 2FE6:1104
cs=0x2fe6;eip=0x001107; 	R(OUT(dx, ax));	// 105019 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 2FE6:1107
cs=0x2fe6;eip=0x001108; 	T(MOV(ax, 0x0F07));	// 105024 mov     ax, 0F07h ;~ 2FE6:1108
cs=0x2fe6;eip=0x00110b; 	R(OUT(dx, ax));	// 105025 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 2FE6:110B
cs=0x2fe6;eip=0x00110c; 	T(MOV(ax, 5));	// 105027 mov     ax, 5 ;~ 2FE6:110C
cs=0x2fe6;eip=0x00110f; 	R(OUT(dx, ax));	// 105028 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 2FE6:110F
cs=0x2fe6;eip=0x001110; 	T(MOV(dx, 0x3C4));	// 105035 mov     dx, 3C4h ;~ 2FE6:1110
cs=0x2fe6;eip=0x001113; 	T(MOV(ax, 0x0F02));	// 105036 mov     ax, 0F02h ;~ 2FE6:1113
cs=0x2fe6;eip=0x001116; 	R(OUT(dx, ax));	// 105037 out     dx, ax          ; EGA: sequencer address reg ;~ 2FE6:1116
cs=0x2fe6;eip=0x001117; 	T(ADD(bx, 0x100));	// 105039 add     bx, 100h ;~ 2FE6:1117
loc_3f55b:
	// 11088 
cs=0x2fe6;eip=0x00111b; 	T(ADD(sp, bx));	// 105042 add     sp, bx ;~ 2FE6:111B
cs=0x2fe6;eip=0x00111d; 	X(POP(di));	// 105043 pop     di ;~ 2FE6:111D
cs=0x2fe6;eip=0x00111e; 	X(POP(si));	// 105044 pop     si ;~ 2FE6:111E
cs=0x2fe6;eip=0x00111f; 	X(POP(bp));	// 105045 pop     bp ;~ 2FE6:111F
cs=0x2fe6;eip=0x001120; 	R(RETN(0x0A));	// 105046 retn    0Ah ;~ 2FE6:1120
cs=0x2fe6;eip=0x001172; 	X(PUSH(dx));	// 105099 push    dx ;~ 2FE6:1172
cs=0x2fe6;eip=0x001173; 	X(PUSH(ds));	// 105100 push    ds ;~ 2FE6:1173
cs=0x2fe6;eip=0x001174; 	X(PUSH(di));	// 105101 push    di ;~ 2FE6:1174
cs=0x2fe6;eip=0x001175; 	X(PUSH(bp));	// 105102 push    bp ;~ 2FE6:1175
cs=0x2fe6;eip=0x001176; 	T(CLD);	// 105103 cld ;~ 2FE6:1176
cs=0x2fe6;eip=0x001177; 	T(MOV(ax, *(dw*)((&unk_4b0dd))));	// 105104 mov     ax, word ptr unk_4B0DD ;~ 2FE6:1177
cs=0x2fe6;eip=0x00117a; 	T(MOV(si, ax));	// 105105 mov     si, ax ;~ 2FE6:117A
cs=0x2fe6;eip=0x00117c; 	T(MOV(ax, *(dw*)((&unk_4b0c5))));	// 105106 mov     ax, word ptr unk_4B0C5 ;~ 2FE6:117C
cs=0x2fe6;eip=0x00117f; 	T(MOV(es, ax));	// 105107 mov     es, ax ;~ 2FE6:117F
cs=0x2fe6;eip=0x001181; 	T(MOV(ax, *(dw*)((&unk_4b0c7))));	// 105108 mov     ax, word ptr unk_4B0C7 ;~ 2FE6:1181
cs=0x2fe6;eip=0x001184; 	T(MOV(di, ax));	// 105109 mov     di, ax ;~ 2FE6:1184
cs=0x2fe6;eip=0x001186; 	T(MOV(ax, *(dw*)((&unk_4b0c1))));	// 105110 mov     ax, word ptr unk_4B0C1 ;~ 2FE6:1186
cs=0x2fe6;eip=0x001189; 	T(SHR(ax, 1));	// 105111 shr     ax, 1 ;~ 2FE6:1189
cs=0x2fe6;eip=0x00118b; 	T(SHR(ax, 1));	// 105112 shr     ax, 1 ;~ 2FE6:118B
cs=0x2fe6;eip=0x00118d; 	T(MOV(bp, ax));	// 105113 mov     bp, ax ;~ 2FE6:118D
cs=0x2fe6;eip=0x00118f; 	T(MOV(bx, *(dw*)((&unk_4b0db))));	// 105114 mov     bx, word ptr unk_4B0DB ;~ 2FE6:118F
loc_3f5d3:
	// 11091 
cs=0x2fe6;eip=0x001193; 	T(LODSW);	// 105117 lodsw ;~ 2FE6:1193
cs=0x2fe6;eip=0x001194; 	T(XLAT);	// 105118 xlat ;~ 2FE6:1194
cs=0x2fe6;eip=0x001195; 	T(XCHG(ah, al));	// 105119 xchg    ah, al ;~ 2FE6:1195
cs=0x2fe6;eip=0x001197; 	T(XLAT);	// 105120 xlat ;~ 2FE6:1197
cs=0x2fe6;eip=0x001198; 	T(MOV(cx, ax));	// 105121 mov     cx, ax ;~ 2FE6:1198
cs=0x2fe6;eip=0x00119a; 	T(LODSW);	// 105122 lodsw ;~ 2FE6:119A
cs=0x2fe6;eip=0x00119b; 	T(XLAT);	// 105123 xlat ;~ 2FE6:119B
cs=0x2fe6;eip=0x00119c; 	T(XCHG(ah, al));	// 105124 xchg    ah, al ;~ 2FE6:119C
cs=0x2fe6;eip=0x00119e; 	T(XLAT);	// 105125 xlat ;~ 2FE6:119E
cs=0x2fe6;eip=0x00119f; 	T(ROL(ch, 1));	// 105126 rol     ch, 1 ;~ 2FE6:119F
cs=0x2fe6;eip=0x0011a1; 	T(ROL(ch, 1));	// 105127 rol     ch, 1 ;~ 2FE6:11A1
cs=0x2fe6;eip=0x0011a3; 	T(ROL(cx, 1));	// 105128 rol     cx, 1 ;~ 2FE6:11A3
cs=0x2fe6;eip=0x0011a5; 	T(ROL(cx, 1));	// 105129 rol     cx, 1 ;~ 2FE6:11A5
cs=0x2fe6;eip=0x0011a7; 	T(ROL(cl, 1));	// 105130 rol     cl, 1 ;~ 2FE6:11A7
cs=0x2fe6;eip=0x0011a9; 	T(ROL(cl, 1));	// 105131 rol     cl, 1 ;~ 2FE6:11A9
cs=0x2fe6;eip=0x0011ab; 	T(XCHG(cl, ah));	// 105132 xchg    cl, ah ;~ 2FE6:11AB
cs=0x2fe6;eip=0x0011ad; 	T(ROL(cx, 1));	// 105133 rol     cx, 1 ;~ 2FE6:11AD
cs=0x2fe6;eip=0x0011af; 	T(ROL(cx, 1));	// 105134 rol     cx, 1 ;~ 2FE6:11AF
cs=0x2fe6;eip=0x0011b1; 	T(XCHG(ch, ah));	// 105135 xchg    ch, ah ;~ 2FE6:11B1
cs=0x2fe6;eip=0x0011b3; 	T(ROL(cx, 1));	// 105136 rol     cx, 1 ;~ 2FE6:11B3
cs=0x2fe6;eip=0x0011b5; 	T(ROL(cx, 1));	// 105137 rol     cx, 1 ;~ 2FE6:11B5
cs=0x2fe6;eip=0x0011b7; 	T(ROL(cl, 1));	// 105138 rol     cl, 1 ;~ 2FE6:11B7
cs=0x2fe6;eip=0x0011b9; 	T(ROL(cl, 1));	// 105139 rol     cl, 1 ;~ 2FE6:11B9
cs=0x2fe6;eip=0x0011bb; 	T(ROL(ax, 1));	// 105140 rol     ax, 1 ;~ 2FE6:11BB
cs=0x2fe6;eip=0x0011bd; 	T(ROL(ax, 1));	// 105141 rol     ax, 1 ;~ 2FE6:11BD
cs=0x2fe6;eip=0x0011bf; 	T(XCHG(ah, ch));	// 105142 xchg    ah, ch ;~ 2FE6:11BF
cs=0x2fe6;eip=0x0011c1; 	T(ROL(ax, 1));	// 105143 rol     ax, 1 ;~ 2FE6:11C1
cs=0x2fe6;eip=0x0011c3; 	T(ROL(ax, 1));	// 105144 rol     ax, 1 ;~ 2FE6:11C3
cs=0x2fe6;eip=0x0011c5; 	T(XCHG(ah, cl));	// 105145 xchg    ah, cl ;~ 2FE6:11C5
cs=0x2fe6;eip=0x0011c7; 	T(ROL(ax, 1));	// 105146 rol     ax, 1 ;~ 2FE6:11C7
cs=0x2fe6;eip=0x0011c9; 	T(ROL(ax, 1));	// 105147 rol     ax, 1 ;~ 2FE6:11C9
cs=0x2fe6;eip=0x0011cb; 	T(ROL(al, 1));	// 105148 rol     al, 1 ;~ 2FE6:11CB
cs=0x2fe6;eip=0x0011cd; 	T(ROL(al, 1));	// 105149 rol     al, 1 ;~ 2FE6:11CD
cs=0x2fe6;eip=0x0011cf; 	X(PUSH(bx));	// 105150 push    bx ;~ 2FE6:11CF
cs=0x2fe6;eip=0x0011d0; 	T(MOV(bx, ax));	// 105151 mov     bx, ax ;~ 2FE6:11D0
cs=0x2fe6;eip=0x0011d2; 	T(MOV(ax, 0x102));	// 105152 mov     ax, 102h ;~ 2FE6:11D2
cs=0x2fe6;eip=0x0011d5; 	T(MOV(dx, 0x3C4));	// 105153 mov     dx, 3C4h ;~ 2FE6:11D5
cs=0x2fe6;eip=0x0011d8; 	R(OUT(dx, ax));	// 105154 out     dx, ax          ; EGA: sequencer address reg ;~ 2FE6:11D8
cs=0x2fe6;eip=0x0011d9; 	X(MOV(*(raddr(es,di)), ch));	// 105156 mov     es:[di], ch ;~ 2FE6:11D9
cs=0x2fe6;eip=0x0011dc; 	T(SHL(ah, 1));	// 105157 shl     ah, 1 ;~ 2FE6:11DC
cs=0x2fe6;eip=0x0011de; 	R(OUT(dx, ax));	// 105158 out     dx, ax          ; EGA: sequencer address reg ;~ 2FE6:11DE
cs=0x2fe6;eip=0x0011df; 	X(MOV(*(raddr(es,di)), cl));	// 105160 mov     es:[di], cl ;~ 2FE6:11DF
cs=0x2fe6;eip=0x0011e2; 	T(SHL(ah, 1));	// 105161 shl     ah, 1 ;~ 2FE6:11E2
cs=0x2fe6;eip=0x0011e4; 	R(OUT(dx, ax));	// 105162 out     dx, ax          ; EGA: sequencer address reg ;~ 2FE6:11E4
cs=0x2fe6;eip=0x0011e5; 	X(MOV(*(raddr(es,di)), bh));	// 105164 mov     es:[di], bh ;~ 2FE6:11E5
cs=0x2fe6;eip=0x0011e8; 	T(SHL(ah, 1));	// 105165 shl     ah, 1 ;~ 2FE6:11E8
cs=0x2fe6;eip=0x0011ea; 	R(OUT(dx, ax));	// 105166 out     dx, ax          ; EGA: sequencer address reg ;~ 2FE6:11EA
cs=0x2fe6;eip=0x0011eb; 	X(MOV(*(raddr(es,di)), bl));	// 105168 mov     es:[di], bl ;~ 2FE6:11EB
cs=0x2fe6;eip=0x0011ee; 	X(POP(bx));	// 105169 pop     bx ;~ 2FE6:11EE
cs=0x2fe6;eip=0x0011ef; 	T(INC(di));	// 105170 inc     di ;~ 2FE6:11EF
cs=0x2fe6;eip=0x0011f0; 	T(DEC(bp));	// 105171 dec     bp ;~ 2FE6:11F0
cs=0x2fe6;eip=0x0011f1; 	R(JZ(loc_3f635));	// 105172 jz      short loc_3F635 ;~ 2FE6:11F1
cs=0x2fe6;eip=0x0011f3; 	R(JMP(loc_3f5d3));	// 105173 jmp     short loc_3F5D3 ;~ 2FE6:11F3
loc_3f635:
	// 11092 
cs=0x2fe6;eip=0x0011f5; 	T(MOV(ax, *(dw*)((&unk_4b0c1))));	// 105177 mov     ax, word ptr unk_4B0C1 ;~ 2FE6:11F5
cs=0x2fe6;eip=0x0011f8; 	T(CMP(unk_4b0ba, 1));	// 105178 cmp     byte ptr unk_4B0BA, 1 ;~ 2FE6:11F8
cs=0x2fe6;eip=0x0011fd; 	R(JZ(loc_3f64a));	// 105179 jz      short loc_3F64A ;~ 2FE6:11FD
cs=0x2fe6;eip=0x0011ff; 	T(SHR(ax, 1));	// 105180 shr     ax, 1 ;~ 2FE6:11FF
cs=0x2fe6;eip=0x001201; 	T(SHR(ax, 1));	// 105181 shr     ax, 1 ;~ 2FE6:1201
cs=0x2fe6;eip=0x001203; 	X(ADD(*(dw*)((&unk_4b0c7)), ax));	// 105182 add     word ptr unk_4B0C7, ax ;~ 2FE6:1203
cs=0x2fe6;eip=0x001207; 	R(JMP(loc_3f65c));	// 105183 jmp     short loc_3F65C ;~ 2FE6:1207
loc_3f64a:
	// 11093 
cs=0x2fe6;eip=0x00120a; 	X(INC(*(dw*)((&unk_4b0bf))));	// 105188 inc     word ptr unk_4B0BF ;~ 2FE6:120A
cs=0x2fe6;eip=0x00120e; 	T(MOV(ax, *(dw*)((&unk_4b0bf))));	// 105189 mov     ax, word ptr unk_4B0BF ;~ 2FE6:120E
cs=0x2fe6;eip=0x001211; 	T(SHL(ax, 1));	// 105190 shl     ax, 1 ;~ 2FE6:1211
cs=0x2fe6;eip=0x001213; 	T(MOV(si, ax));	// 105191 mov     si, ax ;~ 2FE6:1213
cs=0x2fe6;eip=0x001215; 	T(MOV(ax, *(dw*)(raddr(ds,si-0x1492))));	// 105192 mov     ax, [si-1492h] ;~ 2FE6:1215
cs=0x2fe6;eip=0x001219; 	X(MOV(*(dw*)((&unk_4b0c7)), ax));	// 105193 mov     word ptr unk_4B0C7, ax ;~ 2FE6:1219
loc_3f65c:
	// 11094 
cs=0x2fe6;eip=0x00121c; 	X(POP(bp));	// 105196 pop     bp ;~ 2FE6:121C
cs=0x2fe6;eip=0x00121d; 	X(POP(di));	// 105197 pop     di ;~ 2FE6:121D
cs=0x2fe6;eip=0x00121e; 	X(POP(ds));	// 105198 pop     ds ;~ 2FE6:121E
cs=0x2fe6;eip=0x00121f; 	X(POP(dx));	// 105199 pop     dx ;~ 2FE6:121F
cs=0x2fe6;eip=0x001220; 	R(RETN(0));	// 105200 retn ;~ 2FE6:1220
ret_2fe6_1221:
	// 11095 
cs=0x2fe6;eip=0x001221; 	X(PUSH(dx));	// 105202 push    dx ;~ 2FE6:1221
cs=0x2fe6;eip=0x001222; 	X(PUSH(di));	// 105203 push    di ;~ 2FE6:1222
cs=0x2fe6;eip=0x001223; 	T(CLD);	// 105204 cld ;~ 2FE6:1223
cs=0x2fe6;eip=0x001224; 	T(MOV(ax, *(dw*)((&unk_4b0dd))));	// 105205 mov     ax, word ptr unk_4B0DD ;~ 2FE6:1224
cs=0x2fe6;eip=0x001227; 	T(MOV(si, ax));	// 105206 mov     si, ax ;~ 2FE6:1227
cs=0x2fe6;eip=0x001229; 	T(MOV(ax, *(dw*)((&unk_4b0c5))));	// 105207 mov     ax, word ptr unk_4B0C5 ;~ 2FE6:1229
cs=0x2fe6;eip=0x00122c; 	T(MOV(es, ax));	// 105208 mov     es, ax ;~ 2FE6:122C
cs=0x2fe6;eip=0x00122e; 	T(MOV(ax, *(dw*)((&unk_4b0c7))));	// 105209 mov     ax, word ptr unk_4B0C7 ;~ 2FE6:122E
cs=0x2fe6;eip=0x001231; 	T(MOV(di, ax));	// 105210 mov     di, ax ;~ 2FE6:1231
cs=0x2fe6;eip=0x001233; 	T(MOV(cx, *(dw*)((&unk_4b0c1))));	// 105211 mov     cx, word ptr unk_4B0C1 ;~ 2FE6:1233
cs=0x2fe6;eip=0x001237; 	T(SHR(cx, 1));	// 105212 shr     cx, 1 ;~ 2FE6:1237
cs=0x2fe6;eip=0x001239; 	T(XOR(bh, bh));	// 105213 xor     bh, bh ;~ 2FE6:1239
cs=0x2fe6;eip=0x00123b; 	T(MOV(ax, *(dw*)((&unk_4b0bf))));	// 105214 mov     ax, word ptr unk_4B0BF ;~ 2FE6:123B
cs=0x2fe6;eip=0x00123e; 	T(SHR(ax, 1));	// 105215 shr     ax, 1 ;~ 2FE6:123E
cs=0x2fe6;eip=0x001240; 	R(JC(loc_3f6d6));	// 105216 jb      short loc_3F6D6 ;~ 2FE6:1240
loc_3f682:
	// 11096 
cs=0x2fe6;eip=0x001242; 	T(LODSB);	// 105219 lodsb ;~ 2FE6:1242
cs=0x2fe6;eip=0x001243; 	T(MOV(ah, al));	// 105220 mov     ah, al ;~ 2FE6:1243
cs=0x2fe6;eip=0x001245; 	T(SHR(al, 1));	// 105221 shr     al, 1 ;~ 2FE6:1245
cs=0x2fe6;eip=0x001247; 	T(SHR(al, 1));	// 105222 shr     al, 1 ;~ 2FE6:1247
cs=0x2fe6;eip=0x001249; 	T(SHR(al, 1));	// 105223 shr     al, 1 ;~ 2FE6:1249
cs=0x2fe6;eip=0x00124b; 	T(SHR(al, 1));	// 105224 shr     al, 1 ;~ 2FE6:124B
cs=0x2fe6;eip=0x00124d; 	T(SHL(al, 1));	// 105225 shl     al, 1 ;~ 2FE6:124D
cs=0x2fe6;eip=0x00124f; 	T(MOV(bl, al));	// 105226 mov     bl, al ;~ 2FE6:124F
cs=0x2fe6;eip=0x001251; 	T(MOV(al, *(raddr(ds,bx+0x388))));	// 105227 mov     al, [bx+388h] ;~ 2FE6:1251
cs=0x2fe6;eip=0x001255; 	T(AND(al, 0x0C0));	// 105228 and     al, 0C0h ;~ 2FE6:1255
cs=0x2fe6;eip=0x001257; 	T(AND(ah, 0x0F));	// 105229 and     ah, 0Fh ;~ 2FE6:1257
cs=0x2fe6;eip=0x00125a; 	T(SHL(ah, 1));	// 105230 shl     ah, 1 ;~ 2FE6:125A
cs=0x2fe6;eip=0x00125c; 	T(MOV(bl, ah));	// 105231 mov     bl, ah ;~ 2FE6:125C
cs=0x2fe6;eip=0x00125e; 	T(MOV(ah, *(raddr(ds,bx+0x388))));	// 105232 mov     ah, [bx+388h] ;~ 2FE6:125E
cs=0x2fe6;eip=0x001262; 	T(AND(ah, 0x30));	// 105233 and     ah, 30h ;~ 2FE6:1262
cs=0x2fe6;eip=0x001265; 	T(OR(al, ah));	// 105234 or      al, ah ;~ 2FE6:1265
cs=0x2fe6;eip=0x001267; 	T(MOV(dl, al));	// 105235 mov     dl, al ;~ 2FE6:1267
cs=0x2fe6;eip=0x001269; 	T(LODSB);	// 105236 lodsb ;~ 2FE6:1269
cs=0x2fe6;eip=0x00126a; 	T(MOV(ah, al));	// 105237 mov     ah, al ;~ 2FE6:126A
cs=0x2fe6;eip=0x00126c; 	T(SHR(al, 1));	// 105238 shr     al, 1 ;~ 2FE6:126C
cs=0x2fe6;eip=0x00126e; 	T(SHR(al, 1));	// 105239 shr     al, 1 ;~ 2FE6:126E
cs=0x2fe6;eip=0x001270; 	T(SHR(al, 1));	// 105240 shr     al, 1 ;~ 2FE6:1270
cs=0x2fe6;eip=0x001272; 	T(SHR(al, 1));	// 105241 shr     al, 1 ;~ 2FE6:1272
cs=0x2fe6;eip=0x001274; 	T(SHL(al, 1));	// 105242 shl     al, 1 ;~ 2FE6:1274
cs=0x2fe6;eip=0x001276; 	T(MOV(bl, al));	// 105243 mov     bl, al ;~ 2FE6:1276
cs=0x2fe6;eip=0x001278; 	T(MOV(al, *(raddr(ds,bx+0x388))));	// 105244 mov     al, [bx+388h] ;~ 2FE6:1278
cs=0x2fe6;eip=0x00127c; 	T(AND(al, 0x0C));	// 105245 and     al, 0Ch ;~ 2FE6:127C
cs=0x2fe6;eip=0x00127e; 	T(AND(ah, 0x0F));	// 105246 and     ah, 0Fh ;~ 2FE6:127E
cs=0x2fe6;eip=0x001281; 	T(SHL(ah, 1));	// 105247 shl     ah, 1 ;~ 2FE6:1281
cs=0x2fe6;eip=0x001283; 	T(MOV(bl, ah));	// 105248 mov     bl, ah ;~ 2FE6:1283
cs=0x2fe6;eip=0x001285; 	T(MOV(ah, *(raddr(ds,bx+0x388))));	// 105249 mov     ah, [bx+388h] ;~ 2FE6:1285
cs=0x2fe6;eip=0x001289; 	T(AND(ah, 3));	// 105250 and     ah, 3 ;~ 2FE6:1289
cs=0x2fe6;eip=0x00128c; 	T(OR(al, ah));	// 105251 or      al, ah ;~ 2FE6:128C
cs=0x2fe6;eip=0x00128e; 	T(OR(al, dl));	// 105252 or      al, dl ;~ 2FE6:128E
cs=0x2fe6;eip=0x001290; 	X(STOSB);	// 105253 stosb ;~ 2FE6:1290
cs=0x2fe6;eip=0x001291; 	R(LOOP(loc_3f682));	// 105254 loop    loc_3F682 ;~ 2FE6:1291
cs=0x2fe6;eip=0x001293; 	R(JMP(loc_3f727));	// 105255 jmp     short loc_3F727 ;~ 2FE6:1293
loc_3f6d6:
	// 11097 
cs=0x2fe6;eip=0x001296; 	T(LODSB);	// 105261 lodsb ;~ 2FE6:1296
cs=0x2fe6;eip=0x001297; 	T(MOV(ah, al));	// 105262 mov     ah, al ;~ 2FE6:1297
cs=0x2fe6;eip=0x001299; 	T(SHR(al, 1));	// 105263 shr     al, 1 ;~ 2FE6:1299
cs=0x2fe6;eip=0x00129b; 	T(SHR(al, 1));	// 105264 shr     al, 1 ;~ 2FE6:129B
cs=0x2fe6;eip=0x00129d; 	T(SHR(al, 1));	// 105265 shr     al, 1 ;~ 2FE6:129D
cs=0x2fe6;eip=0x00129f; 	T(SHR(al, 1));	// 105266 shr     al, 1 ;~ 2FE6:129F
cs=0x2fe6;eip=0x0012a1; 	T(SHL(al, 1));	// 105267 shl     al, 1 ;~ 2FE6:12A1
cs=0x2fe6;eip=0x0012a3; 	T(MOV(bl, al));	// 105268 mov     bl, al ;~ 2FE6:12A3
cs=0x2fe6;eip=0x0012a5; 	T(MOV(al, *(raddr(ds,bx+0x389))));	// 105269 mov     al, [bx+389h] ;~ 2FE6:12A5
cs=0x2fe6;eip=0x0012a9; 	T(AND(al, 0x0C0));	// 105270 and     al, 0C0h ;~ 2FE6:12A9
cs=0x2fe6;eip=0x0012ab; 	T(AND(ah, 0x0F));	// 105271 and     ah, 0Fh ;~ 2FE6:12AB
cs=0x2fe6;eip=0x0012ae; 	T(SHL(ah, 1));	// 105272 shl     ah, 1 ;~ 2FE6:12AE
cs=0x2fe6;eip=0x0012b0; 	T(MOV(bl, ah));	// 105273 mov     bl, ah ;~ 2FE6:12B0
cs=0x2fe6;eip=0x0012b2; 	T(MOV(ah, *(raddr(ds,bx+0x389))));	// 105274 mov     ah, [bx+389h] ;~ 2FE6:12B2
cs=0x2fe6;eip=0x0012b6; 	T(AND(ah, 0x30));	// 105275 and     ah, 30h ;~ 2FE6:12B6
cs=0x2fe6;eip=0x0012b9; 	T(OR(al, ah));	// 105276 or      al, ah ;~ 2FE6:12B9
cs=0x2fe6;eip=0x0012bb; 	T(MOV(dl, al));	// 105277 mov     dl, al ;~ 2FE6:12BB
cs=0x2fe6;eip=0x0012bd; 	T(LODSB);	// 105278 lodsb ;~ 2FE6:12BD
cs=0x2fe6;eip=0x0012be; 	T(MOV(ah, al));	// 105279 mov     ah, al ;~ 2FE6:12BE
cs=0x2fe6;eip=0x0012c0; 	T(SHR(al, 1));	// 105280 shr     al, 1 ;~ 2FE6:12C0
cs=0x2fe6;eip=0x0012c2; 	T(SHR(al, 1));	// 105281 shr     al, 1 ;~ 2FE6:12C2
cs=0x2fe6;eip=0x0012c4; 	T(SHR(al, 1));	// 105282 shr     al, 1 ;~ 2FE6:12C4
cs=0x2fe6;eip=0x0012c6; 	T(SHR(al, 1));	// 105283 shr     al, 1 ;~ 2FE6:12C6
cs=0x2fe6;eip=0x0012c8; 	T(SHL(al, 1));	// 105284 shl     al, 1 ;~ 2FE6:12C8
cs=0x2fe6;eip=0x0012ca; 	T(MOV(bl, al));	// 105285 mov     bl, al ;~ 2FE6:12CA
cs=0x2fe6;eip=0x0012cc; 	T(MOV(al, *(raddr(ds,bx+0x389))));	// 105286 mov     al, [bx+389h] ;~ 2FE6:12CC
cs=0x2fe6;eip=0x0012d0; 	T(AND(al, 0x0C));	// 105287 and     al, 0Ch ;~ 2FE6:12D0
cs=0x2fe6;eip=0x0012d2; 	T(AND(ah, 0x0F));	// 105288 and     ah, 0Fh ;~ 2FE6:12D2
cs=0x2fe6;eip=0x0012d5; 	T(SHL(ah, 1));	// 105289 shl     ah, 1 ;~ 2FE6:12D5
cs=0x2fe6;eip=0x0012d7; 	T(MOV(bl, ah));	// 105290 mov     bl, ah ;~ 2FE6:12D7
cs=0x2fe6;eip=0x0012d9; 	T(MOV(ah, *(raddr(ds,bx+0x389))));	// 105291 mov     ah, [bx+389h] ;~ 2FE6:12D9
cs=0x2fe6;eip=0x0012dd; 	T(AND(ah, 3));	// 105292 and     ah, 3 ;~ 2FE6:12DD
cs=0x2fe6;eip=0x0012e0; 	T(OR(al, ah));	// 105293 or      al, ah ;~ 2FE6:12E0
cs=0x2fe6;eip=0x0012e2; 	T(OR(al, dl));	// 105294 or      al, dl ;~ 2FE6:12E2
cs=0x2fe6;eip=0x0012e4; 	X(STOSB);	// 105295 stosb ;~ 2FE6:12E4
cs=0x2fe6;eip=0x0012e5; 	R(LOOP(loc_3f6d6));	// 105296 loop    loc_3F6D6 ;~ 2FE6:12E5
loc_3f727:
	// 11098 
cs=0x2fe6;eip=0x0012e7; 	X(INC(*(dw*)((&unk_4b0bf))));	// 105299 inc     word ptr unk_4B0BF ;~ 2FE6:12E7
cs=0x2fe6;eip=0x0012eb; 	T(MOV(ax, *(dw*)((&unk_4b0c1))));	// 105300 mov     ax, word ptr unk_4B0C1 ;~ 2FE6:12EB
cs=0x2fe6;eip=0x0012ee; 	T(CMP(unk_4b0ba, 1));	// 105301 cmp     byte ptr unk_4B0BA, 1 ;~ 2FE6:12EE
cs=0x2fe6;eip=0x0012f3; 	R(JZ(loc_3f73e));	// 105302 jz      short loc_3F73E ;~ 2FE6:12F3
cs=0x2fe6;eip=0x0012f5; 	T(SHR(ax, 1));	// 105303 shr     ax, 1 ;~ 2FE6:12F5
cs=0x2fe6;eip=0x0012f7; 	X(ADD(*(dw*)((&unk_4b0c7)), ax));	// 105304 add     word ptr unk_4B0C7, ax ;~ 2FE6:12F7
cs=0x2fe6;eip=0x0012fb; 	R(JMP(loc_3f74c));	// 105305 jmp     short loc_3F74C ;~ 2FE6:12FB
loc_3f73e:
	// 11099 
cs=0x2fe6;eip=0x0012fe; 	T(MOV(ax, *(dw*)((&unk_4b0bf))));	// 105310 mov     ax, word ptr unk_4B0BF ;~ 2FE6:12FE
cs=0x2fe6;eip=0x001301; 	T(SHL(ax, 1));	// 105311 shl     ax, 1 ;~ 2FE6:1301
cs=0x2fe6;eip=0x001303; 	T(MOV(si, ax));	// 105312 mov     si, ax ;~ 2FE6:1303
cs=0x2fe6;eip=0x001305; 	T(MOV(ax, *(dw*)(raddr(ds,si-0x1492))));	// 105313 mov     ax, [si-1492h] ;~ 2FE6:1305
cs=0x2fe6;eip=0x001309; 	X(MOV(*(dw*)((&unk_4b0c7)), ax));	// 105314 mov     word ptr unk_4B0C7, ax ;~ 2FE6:1309
loc_3f74c:
	// 11100 
cs=0x2fe6;eip=0x00130c; 	X(POP(di));	// 105317 pop     di ;~ 2FE6:130C
cs=0x2fe6;eip=0x00130d; 	X(POP(dx));	// 105318 pop     dx ;~ 2FE6:130D
cs=0x2fe6;eip=0x00130e; 	R(RETN(0));	// 105319 retn ;~ 2FE6:130E
ret_2fe6_130f:
	// 11101 
cs=0x2fe6;eip=0x00130f; 	X(PUSH(di));	// 105321 push    di ;~ 2FE6:130F
cs=0x2fe6;eip=0x001310; 	T(CLD);	// 105322 cld ;~ 2FE6:1310
cs=0x2fe6;eip=0x001311; 	T(MOV(ax, *(dw*)((&unk_4b0dd))));	// 105323 mov     ax, word ptr unk_4B0DD ;~ 2FE6:1311
cs=0x2fe6;eip=0x001314; 	T(MOV(si, ax));	// 105324 mov     si, ax ;~ 2FE6:1314
cs=0x2fe6;eip=0x001316; 	T(MOV(ax, *(dw*)((&unk_4b0c5))));	// 105325 mov     ax, word ptr unk_4B0C5 ;~ 2FE6:1316
cs=0x2fe6;eip=0x001319; 	T(MOV(es, ax));	// 105326 mov     es, ax ;~ 2FE6:1319
cs=0x2fe6;eip=0x00131b; 	T(MOV(ax, *(dw*)((&unk_4b0c7))));	// 105327 mov     ax, word ptr unk_4B0C7 ;~ 2FE6:131B
cs=0x2fe6;eip=0x00131e; 	T(MOV(di, ax));	// 105328 mov     di, ax ;~ 2FE6:131E
cs=0x2fe6;eip=0x001320; 	T(MOV(cx, *(dw*)((&unk_4b0c1))));	// 105329 mov     cx, word ptr unk_4B0C1 ;~ 2FE6:1320
loc_3f764:
	// 11102 
cs=0x2fe6;eip=0x001324; 	T(LODSB);	// 105332 lodsb ;~ 2FE6:1324
cs=0x2fe6;eip=0x001325; 	T(MOV(ah, al));	// 105333 mov     ah, al ;~ 2FE6:1325
cs=0x2fe6;eip=0x001327; 	T(SHR(al, 1));	// 105334 shr     al, 1 ;~ 2FE6:1327
cs=0x2fe6;eip=0x001329; 	T(SHR(al, 1));	// 105335 shr     al, 1 ;~ 2FE6:1329
cs=0x2fe6;eip=0x00132b; 	T(SHR(al, 1));	// 105336 shr     al, 1 ;~ 2FE6:132B
cs=0x2fe6;eip=0x00132d; 	T(SHR(al, 1));	// 105337 shr     al, 1 ;~ 2FE6:132D
cs=0x2fe6;eip=0x00132f; 	T(AND(ah, 0x0F));	// 105338 and     ah, 0Fh ;~ 2FE6:132F
cs=0x2fe6;eip=0x001332; 	X(STOSW);	// 105339 stosw ;~ 2FE6:1332
cs=0x2fe6;eip=0x001333; 	R(LOOP(loc_3f764));	// 105340 loop    loc_3F764 ;~ 2FE6:1333
cs=0x2fe6;eip=0x001335; 	T(MOV(ax, *(dw*)((&unk_4b0c1))));	// 105341 mov     ax, word ptr unk_4B0C1 ;~ 2FE6:1335
cs=0x2fe6;eip=0x001338; 	T(CMP(unk_4b0ba, 1));	// 105342 cmp     byte ptr unk_4B0BA, 1 ;~ 2FE6:1338
cs=0x2fe6;eip=0x00133d; 	R(JZ(loc_3f788));	// 105343 jz      short loc_3F788 ;~ 2FE6:133D
cs=0x2fe6;eip=0x00133f; 	T(SHL(ax, 1));	// 105344 shl     ax, 1 ;~ 2FE6:133F
cs=0x2fe6;eip=0x001341; 	X(ADD(*(dw*)((&unk_4b0c7)), ax));	// 105345 add     word ptr unk_4B0C7, ax ;~ 2FE6:1341
cs=0x2fe6;eip=0x001345; 	R(JMP(loc_3f79a));	// 105346 jmp     short loc_3F79A ;~ 2FE6:1345
loc_3f788:
	// 11103 
cs=0x2fe6;eip=0x001348; 	X(INC(*(dw*)((&unk_4b0bf))));	// 105351 inc     word ptr unk_4B0BF ;~ 2FE6:1348
cs=0x2fe6;eip=0x00134c; 	T(MOV(ax, *(dw*)((&unk_4b0bf))));	// 105352 mov     ax, word ptr unk_4B0BF ;~ 2FE6:134C
cs=0x2fe6;eip=0x00134f; 	T(SHL(ax, 1));	// 105353 shl     ax, 1 ;~ 2FE6:134F
cs=0x2fe6;eip=0x001351; 	T(MOV(si, ax));	// 105354 mov     si, ax ;~ 2FE6:1351
cs=0x2fe6;eip=0x001353; 	T(MOV(ax, *(dw*)(raddr(ds,si-0x1492))));	// 105355 mov     ax, [si-1492h] ;~ 2FE6:1353
cs=0x2fe6;eip=0x001357; 	X(MOV(*(dw*)((&unk_4b0c7)), ax));	// 105356 mov     word ptr unk_4B0C7, ax ;~ 2FE6:1357
loc_3f79a:
	// 11104 
cs=0x2fe6;eip=0x00135a; 	X(POP(di));	// 105359 pop     di ;~ 2FE6:135A
cs=0x2fe6;eip=0x00135b; 	R(RETN(0));	// 105360 retn ;~ 2FE6:135B
ret_2fe6_135c:
	// 11105 
cs=0x2fe6;eip=0x00135c; 	X(PUSH(di));	// 105362 push    di ;~ 2FE6:135C
cs=0x2fe6;eip=0x00135d; 	T(CLD);	// 105363 cld ;~ 2FE6:135D
cs=0x2fe6;eip=0x00135e; 	T(MOV(ax, *(dw*)((&unk_4b0dd))));	// 105364 mov     ax, word ptr unk_4B0DD ;~ 2FE6:135E
cs=0x2fe6;eip=0x001361; 	T(MOV(si, ax));	// 105365 mov     si, ax ;~ 2FE6:1361
cs=0x2fe6;eip=0x001363; 	T(MOV(ax, *(dw*)((&unk_4b0c5))));	// 105366 mov     ax, word ptr unk_4B0C5 ;~ 2FE6:1363
cs=0x2fe6;eip=0x001366; 	T(MOV(es, ax));	// 105367 mov     es, ax ;~ 2FE6:1366
cs=0x2fe6;eip=0x001368; 	T(MOV(ax, *(dw*)((&unk_4b0c7))));	// 105368 mov     ax, word ptr unk_4B0C7 ;~ 2FE6:1368
cs=0x2fe6;eip=0x00136b; 	T(MOV(di, ax));	// 105369 mov     di, ax ;~ 2FE6:136B
cs=0x2fe6;eip=0x00136d; 	T(MOV(cx, *(dw*)((&unk_4b0c1))));	// 105370 mov     cx, word ptr unk_4B0C1 ;~ 2FE6:136D
cs=0x2fe6;eip=0x001371; 	T(SHR(cx, 1));	// 105371 shr     cx, 1 ;~ 2FE6:1371
	// 105372 rep movsw ;~ 2FE6:1373
cs=0x2fe6;eip=0x001373; 	X(	REP MOVSW);	// 105372 rep movsw ;~ 2FE6:1373
cs=0x2fe6;eip=0x001375; 	T(MOV(ax, *(dw*)((&unk_4b0c1))));	// 105373 mov     ax, word ptr unk_4B0C1 ;~ 2FE6:1375
cs=0x2fe6;eip=0x001378; 	T(CMP(unk_4b0ba, 1));	// 105374 cmp     byte ptr unk_4B0BA, 1 ;~ 2FE6:1378
cs=0x2fe6;eip=0x00137d; 	R(JZ(loc_3f7c6));	// 105375 jz      short loc_3F7C6 ;~ 2FE6:137D
cs=0x2fe6;eip=0x00137f; 	X(ADD(*(dw*)((&unk_4b0c7)), ax));	// 105376 add     word ptr unk_4B0C7, ax ;~ 2FE6:137F
cs=0x2fe6;eip=0x001383; 	R(JMP(loc_3f7d8));	// 105377 jmp     short loc_3F7D8 ;~ 2FE6:1383
loc_3f7c6:
	// 11106 
cs=0x2fe6;eip=0x001386; 	X(INC(*(dw*)((&unk_4b0bf))));	// 105382 inc     word ptr unk_4B0BF ;~ 2FE6:1386
cs=0x2fe6;eip=0x00138a; 	T(MOV(ax, *(dw*)((&unk_4b0bf))));	// 105383 mov     ax, word ptr unk_4B0BF ;~ 2FE6:138A
cs=0x2fe6;eip=0x00138d; 	T(SHL(ax, 1));	// 105384 shl     ax, 1 ;~ 2FE6:138D
cs=0x2fe6;eip=0x00138f; 	T(MOV(si, ax));	// 105385 mov     si, ax ;~ 2FE6:138F
cs=0x2fe6;eip=0x001391; 	T(MOV(ax, *(dw*)(raddr(ds,si-0x1492))));	// 105386 mov     ax, [si-1492h] ;~ 2FE6:1391
cs=0x2fe6;eip=0x001395; 	X(MOV(*(dw*)((&unk_4b0c7)), ax));	// 105387 mov     word ptr unk_4B0C7, ax ;~ 2FE6:1395
loc_3f7d8:
	// 11107 
cs=0x2fe6;eip=0x001398; 	X(POP(di));	// 105390 pop     di ;~ 2FE6:1398
cs=0x2fe6;eip=0x001399; 	R(RETN(0));	// 105391 retn ;~ 2FE6:1399
sub_3e4ae:
	// 102662 
#undef arg_0
#define arg_0 4
	// 102665 arg_0           = word ptr  4 ;~ 2FE6:006E
cs=0x2fe6;eip=0x00006e; 	X(PUSH(bp));	// 102667 push    bp ;~ 2FE6:006E
cs=0x2fe6;eip=0x00006f; 	T(MOV(bp, sp));	// 102668 mov     bp, sp ;~ 2FE6:006F
cs=0x2fe6;eip=0x000071; 	T(SUB(sp, 2));	// 102669 sub     sp, 2 ;~ 2FE6:0071
cs=0x2fe6;eip=0x000074; 	X(PUSH(si));	// 102670 push    si ;~ 2FE6:0074
cs=0x2fe6;eip=0x000075; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 102671 push    [bp+arg_0] ;~ 2FE6:0075
cs=0x2fe6;eip=0x000078; 	R(CALLF(sub_23961,0));	// 102672 call    sub_23961 ;~ 2FE6:0078
cs=0x2fe6;eip=0x00007d; 	T(MOV(si, ax));	// 102673 mov     si, ax ;~ 2FE6:007D
cs=0x2fe6;eip=0x00007f; 	T(OR(si, si));	// 102674 or      si, si ;~ 2FE6:007F
cs=0x2fe6;eip=0x000081; 	R(JNZ(loc_3e4c8));	// 102675 jnz     short loc_3E4C8 ;~ 2FE6:0081
cs=0x2fe6;eip=0x000083; 	R(CALLF(sub_315c9,0));	// 102676 call    sub_315C9 ;~ 2FE6:0083
loc_3e4c8:
	// 10940 
cs=0x2fe6;eip=0x000088; 	T(MOV(ax, si));	// 102680 mov     ax, si ;~ 2FE6:0088
cs=0x2fe6;eip=0x00008a; 	X(POP(si));	// 102681 pop     si ;~ 2FE6:008A
cs=0x2fe6;eip=0x00008b; 	T(MOV(sp, bp));	// 102682 mov     sp, bp ;~ 2FE6:008B
cs=0x2fe6;eip=0x00008d; 	X(POP(bp));	// 102683 pop     bp ;~ 2FE6:008D
cs=0x2fe6;eip=0x00008e; 	R(RETN(2));	// 102684 retn    2 ;~ 2FE6:008E
sub_3e4d1:
	// 102692 
#undef arg_0
#define arg_0 4
	// 102694 arg_0           = word ptr  4 ;~ 2FE6:0091
cs=0x2fe6;eip=0x000091; 	X(PUSH(bp));	// 102696 push    bp ;~ 2FE6:0091
cs=0x2fe6;eip=0x000092; 	T(MOV(bp, sp));	// 102697 mov     bp, sp ;~ 2FE6:0092
cs=0x2fe6;eip=0x000094; 	T(SUB(sp, 2));	// 102698 sub     sp, 2 ;~ 2FE6:0094
cs=0x2fe6;eip=0x000097; 	X(PUSH(si));	// 102699 push    si ;~ 2FE6:0097
cs=0x2fe6;eip=0x000098; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 102700 push    [bp+arg_0] ;~ 2FE6:0098
cs=0x2fe6;eip=0x00009b; 	R(CALLF(sub_239ff,0));	// 102701 call    sub_239FF ;~ 2FE6:009B
cs=0x2fe6;eip=0x0000a0; 	T(MOV(si, ax));	// 102702 mov     si, ax ;~ 2FE6:00A0
cs=0x2fe6;eip=0x0000a2; 	T(OR(si, si));	// 102703 or      si, si ;~ 2FE6:00A2
cs=0x2fe6;eip=0x0000a4; 	R(JNZ(loc_3e4eb));	// 102704 jnz     short loc_3E4EB ;~ 2FE6:00A4
cs=0x2fe6;eip=0x0000a6; 	R(CALLF(sub_315c9,0));	// 102705 call    sub_315C9 ;~ 2FE6:00A6
loc_3e4eb:
	// 10941 
cs=0x2fe6;eip=0x0000ab; 	T(MOV(ax, si));	// 102709 mov     ax, si ;~ 2FE6:00AB
cs=0x2fe6;eip=0x0000ad; 	X(POP(si));	// 102710 pop     si ;~ 2FE6:00AD
cs=0x2fe6;eip=0x0000ae; 	T(MOV(sp, bp));	// 102711 mov     sp, bp ;~ 2FE6:00AE
cs=0x2fe6;eip=0x0000b0; 	X(POP(bp));	// 102712 pop     bp ;~ 2FE6:00B0
cs=0x2fe6;eip=0x0000b1; 	R(RETN(2));	// 102713 retn    2 ;~ 2FE6:00B1
sub_3e4f4:
	// 102721 
#undef arg_0
#define arg_0 6
	// 102723 arg_0           = word ptr  6 ;~ 2FE6:00B4
#undef arg_2
#define arg_2 8
	// 102724 arg_2           = word ptr  8 ;~ 2FE6:00B4
#undef arg_4
#define arg_4 0x0A
	// 102725 arg_4           = word ptr  0Ah ;~ 2FE6:00B4
#undef arg_6
#define arg_6 0x0C
	// 102726 arg_6           = word ptr  0Ch ;~ 2FE6:00B4
#undef arg_8
#define arg_8 0x0E
	// 102727 arg_8           = word ptr  0Eh ;~ 2FE6:00B4
#undef arg_a
#define arg_a 0x10
	// 102728 arg_A           = word ptr  10h ;~ 2FE6:00B4
#undef arg_c
#define arg_c 0x12
	// 102729 arg_C           = word ptr  12h ;~ 2FE6:00B4
cs=0x2fe6;eip=0x0000b4; 	X(PUSH(bp));	// 102731 push    bp ;~ 2FE6:00B4
cs=0x2fe6;eip=0x0000b5; 	T(MOV(bp, sp));	// 102732 mov     bp, sp ;~ 2FE6:00B5
cs=0x2fe6;eip=0x0000b7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 102733 mov     ax, [bp+arg_8] ;~ 2FE6:00B7
cs=0x2fe6;eip=0x0000ba; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_a))));	// 102734 mov     dx, [bp+arg_A] ;~ 2FE6:00BA
cs=0x2fe6;eip=0x0000bd; 	X(MOV(*(dw*)((&unk_571d0)), ax));	// 102735 mov     word ptr unk_571D0, ax ;~ 2FE6:00BD
cs=0x2fe6;eip=0x0000c0; 	X(MOV(*(dw*)((&unk_571d2)), dx));	// 102736 mov     word ptr unk_571D2, dx ;~ 2FE6:00C0
cs=0x2fe6;eip=0x0000c4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 102737 mov     ax, [bp+arg_6] ;~ 2FE6:00C4
cs=0x2fe6;eip=0x0000c7; 	X(MOV(*(dw*)((&unk_571d4)), ax));	// 102738 mov     word ptr unk_571D4, ax ;~ 2FE6:00C7
cs=0x2fe6;eip=0x0000ca; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 102739 mov     ax, [bp+arg_2] ;~ 2FE6:00CA
cs=0x2fe6;eip=0x0000cd; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_4))));	// 102740 mov     dx, [bp+arg_4] ;~ 2FE6:00CD
cs=0x2fe6;eip=0x0000d0; 	X(MOV(*(dw*)((&unk_571ca)), ax));	// 102741 mov     word ptr unk_571CA, ax ;~ 2FE6:00D0
cs=0x2fe6;eip=0x0000d3; 	X(MOV(*(dw*)((&unk_571cc)), dx));	// 102742 mov     word ptr unk_571CC, dx ;~ 2FE6:00D3
cs=0x2fe6;eip=0x0000d7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 102743 mov     ax, [bp+arg_0] ;~ 2FE6:00D7
cs=0x2fe6;eip=0x0000da; 	X(MOV(*(dw*)((&unk_571ce)), ax));	// 102744 mov     word ptr unk_571CE, ax ;~ 2FE6:00DA
cs=0x2fe6;eip=0x0000dd; 	X(MOV(*(dw*)((&unk_571e5)), 0));	// 102745 mov     word ptr unk_571E5, 0 ;~ 2FE6:00DD
cs=0x2fe6;eip=0x0000e3; 	X(MOV(unk_571d6, 0));	// 102746 mov     byte ptr unk_571D6, 0 ;~ 2FE6:00E3
cs=0x2fe6;eip=0x0000e8; 	X(MOV(*(dw*)((&unk_571e3)), 0));	// 102747 mov     word ptr unk_571E3, 0 ;~ 2FE6:00E8
cs=0x2fe6;eip=0x0000ee; 	X(MOV(unk_571e9, 0));	// 102748 mov     byte ptr unk_571E9, 0 ;~ 2FE6:00EE
cs=0x2fe6;eip=0x0000f3; 	T(MOV(ax, 0x0F7CF));	// 102749 mov     ax, 0F7CFh ;~ 2FE6:00F3
cs=0x2fe6;eip=0x0000f6; 	X(PUSH(ax));	// 102750 push    ax ;~ 2FE6:00F6
cs=0x2fe6;eip=0x0000f7; 	R(CALLF(sub_3f24b,0));	// 102751 call    far ptr sub_3F24B ;~ 2FE6:00F7
cs=0x2fe6;eip=0x0000fc; 	R(CALLF(sub_3f234,0));	// 102752 call    far ptr sub_3F234 ;~ 2FE6:00FC
cs=0x2fe6;eip=0x000101; 	X(MOV(unk_571c5, al));	// 102753 mov     byte ptr unk_571C5, al ;~ 2FE6:0101
cs=0x2fe6;eip=0x000104; 	T(MOV(ax, 0x12));	// 102754 mov     ax, 12h ;~ 2FE6:0104
cs=0x2fe6;eip=0x000107; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_c))));	// 102755 mul     [bp+arg_C] ;~ 2FE6:0107
cs=0x2fe6;eip=0x00010a; 	T(ADD(ax, 0x12));	// 102756 add     ax, 12h ;~ 2FE6:010A
cs=0x2fe6;eip=0x00010d; 	X(PUSH(ax));	// 102757 push    ax ;~ 2FE6:010D
cs=0x2fe6;eip=0x00010e; 	R(CALL(sub_3e4ae,0));	// 102758 call    sub_3E4AE ;~ 2FE6:010E
cs=0x2fe6;eip=0x000111; 	T(MOV(dx, ax));	// 102759 mov     dx, ax ;~ 2FE6:0111
cs=0x2fe6;eip=0x000113; 	T(SUB(ax, ax));	// 102760 sub     ax, ax ;~ 2FE6:0113
cs=0x2fe6;eip=0x000115; 	X(MOV(*(dw*)((&unk_571c6)), ax));	// 102761 mov     word ptr unk_571C6, ax ;~ 2FE6:0115
cs=0x2fe6;eip=0x000118; 	X(MOV(*(dw*)((&unk_571c8)), dx));	// 102762 mov     word ptr unk_571C8, dx ;~ 2FE6:0118
cs=0x2fe6;eip=0x00011c; 	T(OR(ax, dx));	// 102763 or      ax, dx ;~ 2FE6:011C
cs=0x2fe6;eip=0x00011e; 	R(JNZ(loc_3e564));	// 102764 jnz     short loc_3E564 ;~ 2FE6:011E
cs=0x2fe6;eip=0x000120; 	T(SUB(ax, ax));	// 102765 sub     ax, ax ;~ 2FE6:0120
cs=0x2fe6;eip=0x000122; 	R(JMP(loc_3e567));	// 102766 jmp     short loc_3E567 ;~ 2FE6:0122
loc_3e564:
	// 10942 
cs=0x2fe6;eip=0x000124; 	T(MOV(ax, 1));	// 102770 mov     ax, 1 ;~ 2FE6:0124
loc_3e567:
	// 10943 
cs=0x2fe6;eip=0x000127; 	X(POP(bp));	// 102773 pop     bp ;~ 2FE6:0127
cs=0x2fe6;eip=0x000128; 	R(RETF(0x0E));	// 102774 retf    0Eh ;~ 2FE6:0128
sub_3e56b:
	// 102781 
cs=0x2fe6;eip=0x00012b; 	X(MOV(unk_5717f, 0));	// 102782 mov     byte ptr unk_5717F, 0 ;~ 2FE6:012B
cs=0x2fe6;eip=0x000130; 	X(MOV(unk_571c5, 0));	// 102783 mov     byte ptr unk_571C5, 0 ;~ 2FE6:0130
cs=0x2fe6;eip=0x000135; 	X(PUSH(*(dw*)((&unk_571c8))));	// 102784 push    word ptr unk_571C8 ;~ 2FE6:0135
cs=0x2fe6;eip=0x000139; 	R(CALLF(sub_2397c,0));	// 102785 call    sub_2397C ;~ 2FE6:0139
cs=0x2fe6;eip=0x00013e; 	T(CMP(*(dw*)((&unk_571e3)), 0));	// 102786 cmp     word ptr unk_571E3, 0 ;~ 2FE6:013E
cs=0x2fe6;eip=0x000143; 	R(JZ(locret_3e594));	// 102787 jz      short locret_3E594 ;~ 2FE6:0143
cs=0x2fe6;eip=0x000145; 	X(PUSH(*(dw*)((&unk_571e3))));	// 102788 push    word ptr unk_571E3 ;~ 2FE6:0145
cs=0x2fe6;eip=0x000149; 	R(CALLF(sub_30b72,0));	// 102789 call    sub_30B72 ;~ 2FE6:0149
cs=0x2fe6;eip=0x00014e; 	X(MOV(*(dw*)((&unk_571e3)), 0));	// 102790 mov     word ptr unk_571E3, 0 ;~ 2FE6:014E
locret_3e594:
	// 10944 
cs=0x2fe6;eip=0x000154; 	R(RETF(0));	// 102793 retf ;~ 2FE6:0154
sub_3e595:
	// 102801 
#undef arg_0
#define arg_0 6
	// 102803 arg_0           = word ptr  6 ;~ 2FE6:0155
#undef arg_2
#define arg_2 8
	// 102804 arg_2           = word ptr  8 ;~ 2FE6:0155
cs=0x2fe6;eip=0x000155; 	X(PUSH(bp));	// 102806 push    bp ;~ 2FE6:0155
cs=0x2fe6;eip=0x000156; 	T(MOV(bp, sp));	// 102807 mov     bp, sp ;~ 2FE6:0156
cs=0x2fe6;eip=0x000158; 	X(PUSH(di));	// 102808 push    di ;~ 2FE6:0158
cs=0x2fe6;eip=0x000159; 	X(PUSH(si));	// 102809 push    si ;~ 2FE6:0159
cs=0x2fe6;eip=0x00015a; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 102810 mov     si, [bp+arg_2] ;~ 2FE6:015A
cs=0x2fe6;eip=0x00015d; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 102811 mov     di, [bp+arg_0] ;~ 2FE6:015D
cs=0x2fe6;eip=0x000160; 	X(PUSH(si));	// 102812 push    si ;~ 2FE6:0160
cs=0x2fe6;eip=0x000161; 	X(PUSH(di));	// 102813 push    di ;~ 2FE6:0161
cs=0x2fe6;eip=0x000162; 	T(MOV(ax, 1));	// 102814 mov     ax, 1 ;~ 2FE6:0162
cs=0x2fe6;eip=0x000165; 	X(PUSH(ax));	// 102815 push    ax ;~ 2FE6:0165
cs=0x2fe6;eip=0x000166; 	R(CALL(sub_3e5af,0));	// 102816 call    sub_3E5AF ;~ 2FE6:0166
cs=0x2fe6;eip=0x000169; 	X(POP(si));	// 102817 pop     si ;~ 2FE6:0169
cs=0x2fe6;eip=0x00016a; 	X(POP(di));	// 102818 pop     di ;~ 2FE6:016A
cs=0x2fe6;eip=0x00016b; 	X(POP(bp));	// 102819 pop     bp ;~ 2FE6:016B
cs=0x2fe6;eip=0x00016c; 	R(RETF(4));	// 102820 retf    4 ;~ 2FE6:016C
sub_3e5af:
	// 102828 
#undef var_e
#define var_e -0x0E
	// 102830 var_E           = dword ptr -0Eh ;~ 2FE6:016F
#undef var_a
#define var_a -0x0A
	// 102831 var_A           = word ptr -0Ah ;~ 2FE6:016F
#undef var_8
#define var_8 -8
	// 102832 var_8           = word ptr -8 ;~ 2FE6:016F
#undef var_6
#define var_6 -6
	// 102833 var_6           = word ptr -6 ;~ 2FE6:016F
#undef var_4
#define var_4 -4
	// 102834 var_4           = word ptr -4 ;~ 2FE6:016F
#undef var_2
#define var_2 -2
	// 102835 var_2           = word ptr -2 ;~ 2FE6:016F
#undef arg_0
#define arg_0 4
	// 102836 arg_0           = byte ptr  4 ;~ 2FE6:016F
#undef arg_2
#define arg_2 6
	// 102837 arg_2           = word ptr  6 ;~ 2FE6:016F
#undef arg_4
#define arg_4 8
	// 102838 arg_4           = word ptr  8 ;~ 2FE6:016F
cs=0x2fe6;eip=0x00016f; 	X(PUSH(bp));	// 102840 push    bp ;~ 2FE6:016F
cs=0x2fe6;eip=0x000170; 	T(MOV(bp, sp));	// 102841 mov     bp, sp ;~ 2FE6:0170
cs=0x2fe6;eip=0x000172; 	T(SUB(sp, 0x0E));	// 102842 sub     sp, 0Eh ;~ 2FE6:0172
cs=0x2fe6;eip=0x000175; 	X(PUSH(di));	// 102843 push    di ;~ 2FE6:0175
cs=0x2fe6;eip=0x000176; 	X(PUSH(si));	// 102844 push    si ;~ 2FE6:0176
cs=0x2fe6;eip=0x000177; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 102845 mov     si, [bp+arg_4] ;~ 2FE6:0177
cs=0x2fe6;eip=0x00017a; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_2))));	// 102846 mov     di, [bp+arg_2] ;~ 2FE6:017A
cs=0x2fe6;eip=0x00017d; 	T(SUB(ax, ax));	// 102847 sub     ax, ax ;~ 2FE6:017D
cs=0x2fe6;eip=0x00017f; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 102848 mov     [bp+var_8], ax ;~ 2FE6:017F
cs=0x2fe6;eip=0x000182; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 102849 mov     [bp+var_A], ax ;~ 2FE6:0182
cs=0x2fe6;eip=0x000185; 	X(MOV(*(dw*)((&unk_57179)), ax));	// 102850 mov     word ptr unk_57179, ax ;~ 2FE6:0185
cs=0x2fe6;eip=0x000188; 	X(MOV(*(dw*)((&unk_57177)), ax));	// 102851 mov     word ptr unk_57177, ax ;~ 2FE6:0188
cs=0x2fe6;eip=0x00018b; 	X(MOV(*(dw*)((&unk_5717d)), ax));	// 102852 mov     word ptr unk_5717D, ax ;~ 2FE6:018B
cs=0x2fe6;eip=0x00018e; 	X(MOV(*(dw*)((&unk_5717b)), ax));	// 102853 mov     word ptr unk_5717B, ax ;~ 2FE6:018E
cs=0x2fe6;eip=0x000191; 	X(MOV(*(dw*)((&unk_571e7)), ax));	// 102854 mov     word ptr unk_571E7, ax ;~ 2FE6:0191
cs=0x2fe6;eip=0x000194; 	X(PUSH(si));	// 102855 push    si ;~ 2FE6:0194
cs=0x2fe6;eip=0x000195; 	R(CALL(sub_3eab6,0));	// 102856 call    sub_3EAB6 ;~ 2FE6:0195
cs=0x2fe6;eip=0x000198; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 102857 mov     [bp+var_2], ax ;~ 2FE6:0198
cs=0x2fe6;eip=0x00019b; 	T(CMP(ax, 0x0FFFF));	// 102858 cmp     ax, 0FFFFh ;~ 2FE6:019B
cs=0x2fe6;eip=0x00019e; 	R(JNZ(loc_3e5ff));	// 102859 jnz     short loc_3E5FF ;~ 2FE6:019E
loc_3e5e0:
	// 10945 
cs=0x2fe6;eip=0x0001a0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 102863 mov     ax, [bp+var_A] ;~ 2FE6:01A0
cs=0x2fe6;eip=0x0001a3; 	T(OR(ax, *(dw*)(raddr(ss,bp+var_8))));	// 102864 or      ax, [bp+var_8] ;~ 2FE6:01A3
cs=0x2fe6;eip=0x0001a6; 	R(JNZ(loc_3e5eb));	// 102865 jnz     short loc_3E5EB ;~ 2FE6:01A6
cs=0x2fe6;eip=0x0001a8; 	R(JMP(loc_3e78d));	// 102866 jmp     loc_3E78D ;~ 2FE6:01A8
loc_3e5eb:
	// 10946 
cs=0x2fe6;eip=0x0001ab; 	T(CMP(*(raddr(ss,bp+arg_0)), 0));	// 102870 cmp     [bp+arg_0], 0 ;~ 2FE6:01AB
cs=0x2fe6;eip=0x0001af; 	R(JNZ(loc_3e5f4));	// 102871 jnz     short loc_3E5F4 ;~ 2FE6:01AF
cs=0x2fe6;eip=0x0001b1; 	R(JMP(loc_3e785));	// 102872 jmp     loc_3E785 ;~ 2FE6:01B1
loc_3e5f4:
	// 10947 
cs=0x2fe6;eip=0x0001b4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 102876 push    [bp+var_8] ;~ 2FE6:01B4
cs=0x2fe6;eip=0x0001b7; 	R(CALLF(sub_2397c,0));	// 102877 call    sub_2397C ;~ 2FE6:01B7
cs=0x2fe6;eip=0x0001bc; 	R(JMP(loc_3e78d));	// 102878 jmp     loc_3E78D ;~ 2FE6:01BC
loc_3e5ff:
	// 10948 
cs=0x2fe6;eip=0x0001bf; 	T(MOV(ax, 0x12));	// 102882 mov     ax, 12h ;~ 2FE6:01BF
cs=0x2fe6;eip=0x0001c2; 	X(MUL1_2(*(dw*)(raddr(ss,bp+var_2))));	// 102883 mul     [bp+var_2] ;~ 2FE6:01C2
cs=0x2fe6;eip=0x0001c5; 	T(ADD(ax, *(dw*)((&unk_571c6))));	// 102884 add     ax, word ptr unk_571C6 ;~ 2FE6:01C5
cs=0x2fe6;eip=0x0001c9; 	T(MOV(dx, *(dw*)((&unk_571c8))));	// 102885 mov     dx, word ptr unk_571C8 ;~ 2FE6:01C9
cs=0x2fe6;eip=0x0001cd; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e))), ax));	// 102886 mov     word ptr [bp+var_E], ax ;~ 2FE6:01CD
cs=0x2fe6;eip=0x0001d0; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e +2))), dx));	// 102887 mov     word ptr [bp+var_E+2], dx ;~ 2FE6:01D0
cs=0x2fe6;eip=0x0001d3; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 102888 les     bx, [bp+var_E] ;~ 2FE6:01D3
cs=0x2fe6;eip=0x0001d6; 	T(CMP(*(raddr(es,bx+0x0D)), 1));	// 102889 cmp     byte ptr es:[bx+0Dh], 1 ;~ 2FE6:01D6
cs=0x2fe6;eip=0x0001db; 	R(JNZ(loc_3e64f));	// 102890 jnz     short loc_3E64F ;~ 2FE6:01DB
cs=0x2fe6;eip=0x0001dd; 	X(PUSH(*(dw*)((&unk_571e3))));	// 102891 push    word ptr unk_571E3 ;~ 2FE6:01DD
cs=0x2fe6;eip=0x0001e1; 	T(SUB(ax, ax));	// 102892 sub     ax, ax ;~ 2FE6:01E1
cs=0x2fe6;eip=0x0001e3; 	X(PUSH(ax));	// 102893 push    ax ;~ 2FE6:01E3
cs=0x2fe6;eip=0x0001e4; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 102894 push    word ptr es:[bx+10h] ;~ 2FE6:01E4
cs=0x2fe6;eip=0x0001e8; 	X(PUSH(*(dw*)(raddr(es,bx+0x0E))));	// 102895 push    word ptr es:[bx+0Eh] ;~ 2FE6:01E8
cs=0x2fe6;eip=0x0001ec; 	R(CALLF(sub_30bca,0));	// 102896 call    sub_30BCA ;~ 2FE6:01EC
cs=0x2fe6;eip=0x0001f1; 	T(CMP(ax, 0x0FFFF));	// 102897 cmp     ax, 0FFFFh ;~ 2FE6:01F1
cs=0x2fe6;eip=0x0001f4; 	R(JZ(loc_3e5e0));	// 102898 jz      short loc_3E5E0 ;~ 2FE6:01F4
cs=0x2fe6;eip=0x0001f6; 	X(PUSH(*(dw*)((&unk_571e3))));	// 102899 push    word ptr unk_571E3 ;~ 2FE6:01F6
cs=0x2fe6;eip=0x0001fa; 	T(ax = bp+var_6);	// 102900 lea     ax, [bp+var_6] ;~ 2FE6:01FA
cs=0x2fe6;eip=0x0001fd; 	X(PUSH(ss));	// 102901 push    ss ;~ 2FE6:01FD
cs=0x2fe6;eip=0x0001fe; 	X(PUSH(ax));	// 102902 push    ax ;~ 2FE6:01FE
cs=0x2fe6;eip=0x0001ff; 	T(MOV(ax, 4));	// 102903 mov     ax, 4 ;~ 2FE6:01FF
cs=0x2fe6;eip=0x000202; 	X(PUSH(ax));	// 102904 push    ax ;~ 2FE6:0202
cs=0x2fe6;eip=0x000203; 	R(CALLF(sub_30b8e,0));	// 102905 call    sub_30B8E ;~ 2FE6:0203
cs=0x2fe6;eip=0x000208; 	T(CMP(ax, 0x0FFFF));	// 102906 cmp     ax, 0FFFFh ;~ 2FE6:0208
cs=0x2fe6;eip=0x00020b; 	R(JNZ(loc_3e67c));	// 102907 jnz     short loc_3E67C ;~ 2FE6:020B
cs=0x2fe6;eip=0x00020d; 	R(JMP(loc_3e5e0));	// 102908 jmp     short loc_3E5E0 ;~ 2FE6:020D
loc_3e64f:
	// 10949 
cs=0x2fe6;eip=0x00020f; 	T(MOV(ax, 0x12));	// 102912 mov     ax, 12h ;~ 2FE6:020F
cs=0x2fe6;eip=0x000212; 	X(MUL1_2(*(dw*)(raddr(ss,bp+var_2))));	// 102913 mul     [bp+var_2] ;~ 2FE6:0212
cs=0x2fe6;eip=0x000215; 	T(ADD(ax, *(dw*)((&unk_571c6))));	// 102914 add     ax, word ptr unk_571C6 ;~ 2FE6:0215
cs=0x2fe6;eip=0x000219; 	T(MOV(dx, *(dw*)((&unk_571c8))));	// 102915 mov     dx, word ptr unk_571C8 ;~ 2FE6:0219
cs=0x2fe6;eip=0x00021d; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e))), ax));	// 102916 mov     word ptr [bp+var_E], ax ;~ 2FE6:021D
cs=0x2fe6;eip=0x000220; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e +2))), dx));	// 102917 mov     word ptr [bp+var_E+2], dx ;~ 2FE6:0220
cs=0x2fe6;eip=0x000223; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 102918 les     bx, [bp+var_E] ;~ 2FE6:0223
cs=0x2fe6;eip=0x000226; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x20))));	// 102919 mov     ax, es:[bx+20h] ;~ 2FE6:0226
cs=0x2fe6;eip=0x00022a; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x22))));	// 102920 mov     dx, es:[bx+22h] ;~ 2FE6:022A
cs=0x2fe6;eip=0x00022e; 	T(SUB(ax, *(dw*)(raddr(es,bx+0x0E))));	// 102921 sub     ax, es:[bx+0Eh] ;~ 2FE6:022E
cs=0x2fe6;eip=0x000232; 	T(SBB(dx, *(dw*)(raddr(es,bx+0x10))));	// 102922 sbb     dx, es:[bx+10h] ;~ 2FE6:0232
cs=0x2fe6;eip=0x000236; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 102923 mov     [bp+var_6], ax ;~ 2FE6:0236
cs=0x2fe6;eip=0x000239; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 102924 mov     [bp+var_4], dx ;~ 2FE6:0239
loc_3e67c:
	// 10950 
cs=0x2fe6;eip=0x00023c; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 1));	// 102927 cmp     [bp+var_4], 1 ;~ 2FE6:023C
cs=0x2fe6;eip=0x000240; 	R(JC(loc_3e685));	// 102928 jb      short loc_3E685 ;~ 2FE6:0240
cs=0x2fe6;eip=0x000242; 	R(JMP(loc_3e5e0));	// 102929 jmp     loc_3E5E0 ;~ 2FE6:0242
loc_3e685:
	// 10951 
cs=0x2fe6;eip=0x000245; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 102933 mov     ax, [bp+var_6] ;~ 2FE6:0245
cs=0x2fe6;eip=0x000248; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 102934 mov     [di], ax ;~ 2FE6:0248
cs=0x2fe6;eip=0x00024a; 	T(CMP(*(raddr(ss,bp+arg_0)), 0));	// 102935 cmp     [bp+arg_0], 0 ;~ 2FE6:024A
cs=0x2fe6;eip=0x00024e; 	R(JZ(loc_3e6a5));	// 102936 jz      short loc_3E6A5 ;~ 2FE6:024E
cs=0x2fe6;eip=0x000250; 	X(PUSH(ax));	// 102937 push    ax ;~ 2FE6:0250
cs=0x2fe6;eip=0x000251; 	R(CALL(sub_3e4ae,0));	// 102938 call    sub_3E4AE ;~ 2FE6:0251
cs=0x2fe6;eip=0x000254; 	T(MOV(dx, ax));	// 102939 mov     dx, ax ;~ 2FE6:0254
cs=0x2fe6;eip=0x000256; 	T(SUB(ax, ax));	// 102940 sub     ax, ax ;~ 2FE6:0256
cs=0x2fe6;eip=0x000258; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 102941 mov     [bp+var_A], ax ;~ 2FE6:0258
cs=0x2fe6;eip=0x00025b; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), dx));	// 102942 mov     [bp+var_8], dx ;~ 2FE6:025B
cs=0x2fe6;eip=0x00025e; 	T(CMP(dx, ax));	// 102943 cmp     dx, ax ;~ 2FE6:025E
cs=0x2fe6;eip=0x000260; 	R(JNZ(loc_3e6b8));	// 102944 jnz     short loc_3E6B8 ;~ 2FE6:0260
cs=0x2fe6;eip=0x000262; 	R(JMP(loc_3e5e0));	// 102945 jmp     loc_3E5E0 ;~ 2FE6:0262
loc_3e6a5:
	// 10952 
cs=0x2fe6;eip=0x000265; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 102949 push    [bp+var_6] ;~ 2FE6:0265
cs=0x2fe6;eip=0x000268; 	R(CALL(sub_3e4d1,0));	// 102950 call    sub_3E4D1 ;~ 2FE6:0268
cs=0x2fe6;eip=0x00026b; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 102951 mov     [bp+var_A], ax ;~ 2FE6:026B
cs=0x2fe6;eip=0x00026e; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ds));	// 102952 mov     [bp+var_8], ds ;~ 2FE6:026E
cs=0x2fe6;eip=0x000271; 	T(OR(ax, ax));	// 102953 or      ax, ax ;~ 2FE6:0271
cs=0x2fe6;eip=0x000273; 	R(JNZ(loc_3e6b8));	// 102954 jnz     short loc_3E6B8 ;~ 2FE6:0273
cs=0x2fe6;eip=0x000275; 	R(JMP(loc_3e5e0));	// 102955 jmp     loc_3E5E0 ;~ 2FE6:0275
loc_3e6b8:
	// 10953 
cs=0x2fe6;eip=0x000278; 	T(MOV(ax, 0x12));	// 102960 mov     ax, 12h ;~ 2FE6:0278
cs=0x2fe6;eip=0x00027b; 	X(MUL1_2(*(dw*)(raddr(ss,bp+var_2))));	// 102961 mul     [bp+var_2] ;~ 2FE6:027B
cs=0x2fe6;eip=0x00027e; 	T(MOV(bx, ax));	// 102962 mov     bx, ax ;~ 2FE6:027E
cs=0x2fe6;eip=0x000280; 	T(ADD(bx, *(dw*)((&unk_571c6))));	// 102963 add     bx, word ptr unk_571C6 ;~ 2FE6:0280
cs=0x2fe6;eip=0x000284; 	T(MOV(es, *(dw*)((&unk_571c8))));	// 102964 mov     es, word ptr unk_571C8 ;~ 2FE6:0284
cs=0x2fe6;eip=0x000288; 	T(CMP(*(raddr(es,bx+0x0D)), 1));	// 102965 cmp     byte ptr es:[bx+0Dh], 1 ;~ 2FE6:0288
cs=0x2fe6;eip=0x00028d; 	R(JNZ(loc_3e737));	// 102966 jnz     short loc_3E737 ;~ 2FE6:028D
cs=0x2fe6;eip=0x00028f; 	T(MOV(ax, 0x400));	// 102967 mov     ax, 400h ;~ 2FE6:028F
cs=0x2fe6;eip=0x000292; 	X(PUSH(ax));	// 102968 push    ax ;~ 2FE6:0292
cs=0x2fe6;eip=0x000293; 	R(CALL(sub_3e4ae,0));	// 102969 call    sub_3E4AE ;~ 2FE6:0293
cs=0x2fe6;eip=0x000296; 	T(MOV(dx, ax));	// 102970 mov     dx, ax ;~ 2FE6:0296
cs=0x2fe6;eip=0x000298; 	T(SUB(ax, ax));	// 102971 sub     ax, ax ;~ 2FE6:0298
cs=0x2fe6;eip=0x00029a; 	X(MOV(*(dw*)((&unk_57177)), ax));	// 102972 mov     word ptr unk_57177, ax ;~ 2FE6:029A
cs=0x2fe6;eip=0x00029d; 	X(MOV(*(dw*)((&unk_57179)), dx));	// 102973 mov     word ptr unk_57179, dx ;~ 2FE6:029D
cs=0x2fe6;eip=0x0002a1; 	T(MOV(ax, 0x1011));	// 102974 mov     ax, 1011h ;~ 2FE6:02A1
cs=0x2fe6;eip=0x0002a4; 	X(PUSH(ax));	// 102975 push    ax ;~ 2FE6:02A4
cs=0x2fe6;eip=0x0002a5; 	R(CALL(sub_3e4ae,0));	// 102976 call    sub_3E4AE ;~ 2FE6:02A5
cs=0x2fe6;eip=0x0002a8; 	T(MOV(dx, ax));	// 102977 mov     dx, ax ;~ 2FE6:02A8
cs=0x2fe6;eip=0x0002aa; 	T(SUB(ax, ax));	// 102978 sub     ax, ax ;~ 2FE6:02AA
cs=0x2fe6;eip=0x0002ac; 	X(MOV(*(dw*)((&unk_5717b)), ax));	// 102979 mov     word ptr unk_5717B, ax ;~ 2FE6:02AC
cs=0x2fe6;eip=0x0002af; 	X(MOV(*(dw*)((&unk_5717d)), dx));	// 102980 mov     word ptr unk_5717D, dx ;~ 2FE6:02AF
cs=0x2fe6;eip=0x0002b3; 	T(MOV(ax, *(dw*)((&unk_57177))));	// 102981 mov     ax, word ptr unk_57177 ;~ 2FE6:02B3
cs=0x2fe6;eip=0x0002b6; 	T(OR(ax, *(dw*)((&unk_57179))));	// 102982 or      ax, word ptr unk_57179 ;~ 2FE6:02B6
cs=0x2fe6;eip=0x0002ba; 	R(JNZ(loc_3e6ff));	// 102983 jnz     short loc_3E6FF ;~ 2FE6:02BA
cs=0x2fe6;eip=0x0002bc; 	R(JMP(loc_3e5e0));	// 102984 jmp     loc_3E5E0 ;~ 2FE6:02BC
loc_3e6ff:
	// 10954 
cs=0x2fe6;eip=0x0002bf; 	T(MOV(ax, *(dw*)((&unk_5717b))));	// 102988 mov     ax, word ptr unk_5717B ;~ 2FE6:02BF
cs=0x2fe6;eip=0x0002c2; 	T(OR(ax, dx));	// 102989 or      ax, dx ;~ 2FE6:02C2
cs=0x2fe6;eip=0x0002c4; 	R(JNZ(loc_3e709));	// 102990 jnz     short loc_3E709 ;~ 2FE6:02C4
cs=0x2fe6;eip=0x0002c6; 	R(JMP(loc_3e5e0));	// 102991 jmp     loc_3E5E0 ;~ 2FE6:02C6
loc_3e709:
	// 10955 
cs=0x2fe6;eip=0x0002c9; 	X(PUSH(*(dw*)((&unk_571e3))));	// 102995 push    word ptr unk_571E3 ;~ 2FE6:02C9
cs=0x2fe6;eip=0x0002cd; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 102996 push    [bp+var_4] ;~ 2FE6:02CD
cs=0x2fe6;eip=0x0002d0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 102997 push    [bp+var_6] ;~ 2FE6:02D0
cs=0x2fe6;eip=0x0002d3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 102998 push    [bp+var_8] ;~ 2FE6:02D3
cs=0x2fe6;eip=0x0002d6; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 102999 push    [bp+var_A] ;~ 2FE6:02D6
cs=0x2fe6;eip=0x0002d9; 	R(CALL(_group29,m2c::kloc_3f295));	// 103000 call    loc_3F295 ;~ 2FE6:02D9
cs=0x2fe6;eip=0x0002dc; 	T(OR(al, al));	// 103001 or      al, al ;~ 2FE6:02DC
cs=0x2fe6;eip=0x0002de; 	R(JNZ(loc_3e723));	// 103002 jnz     short loc_3E723 ;~ 2FE6:02DE
cs=0x2fe6;eip=0x0002e0; 	R(JMP(loc_3e5e0));	// 103003 jmp     loc_3E5E0 ;~ 2FE6:02E0
loc_3e723:
	// 10956 
cs=0x2fe6;eip=0x0002e3; 	X(PUSH(*(dw*)((&unk_57179))));	// 103007 push    word ptr unk_57179 ;~ 2FE6:02E3
cs=0x2fe6;eip=0x0002e7; 	R(CALLF(sub_2397c,0));	// 103008 call    sub_2397C ;~ 2FE6:02E7
cs=0x2fe6;eip=0x0002ec; 	X(PUSH(*(dw*)((&unk_5717d))));	// 103009 push    word ptr unk_5717D ;~ 2FE6:02EC
cs=0x2fe6;eip=0x0002f0; 	R(CALLF(sub_2397c,0));	// 103010 call    sub_2397C ;~ 2FE6:02F0
cs=0x2fe6;eip=0x0002f5; 	R(JMP(loc_3e77d));	// 103011 jmp     short loc_3E77D ;~ 2FE6:02F5
loc_3e737:
	// 10957 
cs=0x2fe6;eip=0x0002f7; 	X(PUSH(*(dw*)((&unk_571e3))));	// 103015 push    word ptr unk_571E3 ;~ 2FE6:02F7
cs=0x2fe6;eip=0x0002fb; 	T(SUB(ax, ax));	// 103016 sub     ax, ax ;~ 2FE6:02FB
cs=0x2fe6;eip=0x0002fd; 	X(PUSH(ax));	// 103017 push    ax ;~ 2FE6:02FD
cs=0x2fe6;eip=0x0002fe; 	T(MOV(ax, 0x12));	// 103018 mov     ax, 12h ;~ 2FE6:02FE
cs=0x2fe6;eip=0x000301; 	X(MUL1_2(*(dw*)(raddr(ss,bp+var_2))));	// 103019 mul     [bp+var_2] ;~ 2FE6:0301
cs=0x2fe6;eip=0x000304; 	T(MOV(bx, ax));	// 103020 mov     bx, ax ;~ 2FE6:0304
cs=0x2fe6;eip=0x000306; 	T(ADD(bx, *(dw*)((&unk_571c6))));	// 103021 add     bx, word ptr unk_571C6 ;~ 2FE6:0306
cs=0x2fe6;eip=0x00030a; 	T(MOV(es, *(dw*)((&unk_571c8))));	// 103022 mov     es, word ptr unk_571C8 ;~ 2FE6:030A
cs=0x2fe6;eip=0x00030e; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 103023 push    word ptr es:[bx+10h] ;~ 2FE6:030E
cs=0x2fe6;eip=0x000312; 	X(PUSH(*(dw*)(raddr(es,bx+0x0E))));	// 103024 push    word ptr es:[bx+0Eh] ;~ 2FE6:0312
cs=0x2fe6;eip=0x000316; 	R(CALLF(sub_30bca,0));	// 103025 call    sub_30BCA ;~ 2FE6:0316
cs=0x2fe6;eip=0x00031b; 	T(CMP(ax, 0x0FFFF));	// 103026 cmp     ax, 0FFFFh ;~ 2FE6:031B
cs=0x2fe6;eip=0x00031e; 	R(JNZ(loc_3e763));	// 103027 jnz     short loc_3E763 ;~ 2FE6:031E
cs=0x2fe6;eip=0x000320; 	R(JMP(loc_3e5e0));	// 103028 jmp     loc_3E5E0 ;~ 2FE6:0320
loc_3e763:
	// 10958 
cs=0x2fe6;eip=0x000323; 	X(PUSH(*(dw*)((&unk_571e3))));	// 103032 push    word ptr unk_571E3 ;~ 2FE6:0323
cs=0x2fe6;eip=0x000327; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 103033 push    [bp+var_8] ;~ 2FE6:0327
cs=0x2fe6;eip=0x00032a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 103034 push    [bp+var_A] ;~ 2FE6:032A
cs=0x2fe6;eip=0x00032d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 103035 push    [bp+var_6] ;~ 2FE6:032D
cs=0x2fe6;eip=0x000330; 	R(CALLF(sub_30b8e,0));	// 103036 call    sub_30B8E ;~ 2FE6:0330
cs=0x2fe6;eip=0x000335; 	T(CMP(ax, 0x0FFFF));	// 103037 cmp     ax, 0FFFFh ;~ 2FE6:0335
cs=0x2fe6;eip=0x000338; 	R(JNZ(loc_3e77d));	// 103038 jnz     short loc_3E77D ;~ 2FE6:0338
cs=0x2fe6;eip=0x00033a; 	R(JMP(loc_3e5e0));	// 103039 jmp     loc_3E5E0 ;~ 2FE6:033A
loc_3e77d:
	// 10959 
cs=0x2fe6;eip=0x00033d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 103044 mov     ax, [bp+var_A] ;~ 2FE6:033D
cs=0x2fe6;eip=0x000340; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_8))));	// 103045 mov     dx, [bp+var_8] ;~ 2FE6:0340
cs=0x2fe6;eip=0x000343; 	R(JMP(loc_3e7cb));	// 103046 jmp     short loc_3E7CB ;~ 2FE6:0343
loc_3e785:
	// 10960 
cs=0x2fe6;eip=0x000345; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 103050 push    [bp+var_A] ;~ 2FE6:0345
cs=0x2fe6;eip=0x000348; 	R(CALLF(sub_23a33,0));	// 103051 call    sub_23A33 ;~ 2FE6:0348
loc_3e78d:
	// 10961 
cs=0x2fe6;eip=0x00034d; 	T(MOV(ax, 0x12));	// 103055 mov     ax, 12h ;~ 2FE6:034D
cs=0x2fe6;eip=0x000350; 	X(MUL1_2(*(dw*)(raddr(ss,bp+var_2))));	// 103056 mul     [bp+var_2] ;~ 2FE6:0350
cs=0x2fe6;eip=0x000353; 	T(MOV(bx, ax));	// 103057 mov     bx, ax ;~ 2FE6:0353
cs=0x2fe6;eip=0x000355; 	T(ADD(bx, *(dw*)((&unk_571c6))));	// 103058 add     bx, word ptr unk_571C6 ;~ 2FE6:0355
cs=0x2fe6;eip=0x000359; 	T(MOV(es, *(dw*)((&unk_571c8))));	// 103059 mov     es, word ptr unk_571C8 ;~ 2FE6:0359
cs=0x2fe6;eip=0x00035d; 	T(CMP(*(raddr(es,bx+0x0D)), 1));	// 103060 cmp     byte ptr es:[bx+0Dh], 1 ;~ 2FE6:035D
cs=0x2fe6;eip=0x000362; 	R(JNZ(loc_3e7c8));	// 103061 jnz     short loc_3E7C8 ;~ 2FE6:0362
cs=0x2fe6;eip=0x000364; 	T(MOV(ax, *(dw*)((&unk_57177))));	// 103062 mov     ax, word ptr unk_57177 ;~ 2FE6:0364
cs=0x2fe6;eip=0x000367; 	T(OR(ax, *(dw*)((&unk_57179))));	// 103063 or      ax, word ptr unk_57179 ;~ 2FE6:0367
cs=0x2fe6;eip=0x00036b; 	R(JZ(loc_3e7b6));	// 103064 jz      short loc_3E7B6 ;~ 2FE6:036B
cs=0x2fe6;eip=0x00036d; 	X(PUSH(*(dw*)((&unk_57179))));	// 103065 push    word ptr unk_57179 ;~ 2FE6:036D
cs=0x2fe6;eip=0x000371; 	R(CALLF(sub_2397c,0));	// 103066 call    sub_2397C ;~ 2FE6:0371
loc_3e7b6:
	// 10962 
cs=0x2fe6;eip=0x000376; 	T(MOV(ax, *(dw*)((&unk_5717b))));	// 103069 mov     ax, word ptr unk_5717B ;~ 2FE6:0376
cs=0x2fe6;eip=0x000379; 	T(OR(ax, *(dw*)((&unk_5717d))));	// 103070 or      ax, word ptr unk_5717D ;~ 2FE6:0379
cs=0x2fe6;eip=0x00037d; 	R(JZ(loc_3e7c8));	// 103071 jz      short loc_3E7C8 ;~ 2FE6:037D
cs=0x2fe6;eip=0x00037f; 	X(PUSH(*(dw*)((&unk_5717d))));	// 103072 push    word ptr unk_5717D ;~ 2FE6:037F
cs=0x2fe6;eip=0x000383; 	R(CALLF(sub_2397c,0));	// 103073 call    sub_2397C ;~ 2FE6:0383
loc_3e7c8:
	// 10963 
cs=0x2fe6;eip=0x000388; 	T(SUB(ax, ax));	// 103077 sub     ax, ax ;~ 2FE6:0388
cs=0x2fe6;eip=0x00038a; 	T(CWD);	// 103078 cwd ;~ 2FE6:038A
loc_3e7cb:
	// 10964 
cs=0x2fe6;eip=0x00038b; 	X(POP(si));	// 103081 pop     si ;~ 2FE6:038B
cs=0x2fe6;eip=0x00038c; 	X(POP(di));	// 103082 pop     di ;~ 2FE6:038C
cs=0x2fe6;eip=0x00038d; 	T(MOV(sp, bp));	// 103083 mov     sp, bp ;~ 2FE6:038D
cs=0x2fe6;eip=0x00038f; 	X(POP(bp));	// 103084 pop     bp ;~ 2FE6:038F
cs=0x2fe6;eip=0x000390; 	R(RETN(6));	// 103085 retn    6 ;~ 2FE6:0390
sub_3e7d3:
	// 103093 
#undef var_1a
#define var_1a -0x1A
	// 103096 var_1A          = word ptr -1Ah ;~ 2FE6:0393
#undef var_18
#define var_18 -0x18
	// 103097 var_18          = word ptr -18h ;~ 2FE6:0393
#undef var_16
#define var_16 -0x16
	// 103098 var_16          = word ptr -16h ;~ 2FE6:0393
#undef var_14
#define var_14 -0x14
	// 103099 var_14          = word ptr -14h ;~ 2FE6:0393
#undef var_12
#define var_12 -0x12
	// 103100 var_12          = word ptr -12h ;~ 2FE6:0393
#undef var_10
#define var_10 -0x10
	// 103101 var_10          = word ptr -10h ;~ 2FE6:0393
#undef var_e
#define var_e -0x0E
	// 103102 var_E           = word ptr -0Eh ;~ 2FE6:0393
#undef var_c
#define var_c -0x0C
	// 103103 var_C           = byte ptr -0Ch ;~ 2FE6:0393
#undef var_8
#define var_8 -8
	// 103104 var_8           = byte ptr -8 ;~ 2FE6:0393
#undef var_6
#define var_6 -6
	// 103105 var_6           = word ptr -6 ;~ 2FE6:0393
#undef var_4
#define var_4 -4
	// 103106 var_4           = word ptr -4 ;~ 2FE6:0393
#undef var_2
#define var_2 -2
	// 103107 var_2           = word ptr -2 ;~ 2FE6:0393
#undef arg_0
#define arg_0 6
	// 103108 arg_0           = word ptr  6 ;~ 2FE6:0393
#undef arg_2
#define arg_2 8
	// 103109 arg_2           = word ptr  8 ;~ 2FE6:0393
cs=0x2fe6;eip=0x000393; 	X(PUSH(bp));	// 103111 push    bp ;~ 2FE6:0393
cs=0x2fe6;eip=0x000394; 	T(MOV(bp, sp));	// 103112 mov     bp, sp ;~ 2FE6:0394
cs=0x2fe6;eip=0x000396; 	T(SUB(sp, 0x1A));	// 103113 sub     sp, 1Ah ;~ 2FE6:0396
cs=0x2fe6;eip=0x000399; 	X(PUSH(di));	// 103114 push    di ;~ 2FE6:0399
cs=0x2fe6;eip=0x00039a; 	X(PUSH(si));	// 103115 push    si ;~ 2FE6:039A
cs=0x2fe6;eip=0x00039b; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 103116 mov     si, [bp+arg_2] ;~ 2FE6:039B
cs=0x2fe6;eip=0x00039e; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 103117 mov     di, [bp+arg_0] ;~ 2FE6:039E
cs=0x2fe6;eip=0x0003a1; 	T(SUB(ax, ax));	// 103118 sub     ax, ax ;~ 2FE6:03A1
cs=0x2fe6;eip=0x0003a3; 	X(MOV(*(dw*)((&unk_57179)), ax));	// 103119 mov     word ptr unk_57179, ax ;~ 2FE6:03A3
cs=0x2fe6;eip=0x0003a6; 	X(MOV(*(dw*)((&unk_57177)), ax));	// 103120 mov     word ptr unk_57177, ax ;~ 2FE6:03A6
cs=0x2fe6;eip=0x0003a9; 	X(MOV(*(dw*)((&unk_5717d)), ax));	// 103121 mov     word ptr unk_5717D, ax ;~ 2FE6:03A9
cs=0x2fe6;eip=0x0003ac; 	X(MOV(*(dw*)((&unk_5717b)), ax));	// 103122 mov     word ptr unk_5717B, ax ;~ 2FE6:03AC
cs=0x2fe6;eip=0x0003af; 	X(MOV(*(dw*)((&unk_571e7)), ax));	// 103123 mov     word ptr unk_571E7, ax ;~ 2FE6:03AF
cs=0x2fe6;eip=0x0003b2; 	T(CMP(*(dw*)((&unk_571e3)), ax));	// 103124 cmp     word ptr unk_571E3, ax ;~ 2FE6:03B2
cs=0x2fe6;eip=0x0003b6; 	R(JZ(loc_3e7fc));	// 103125 jz      short loc_3E7FC ;~ 2FE6:03B6
cs=0x2fe6;eip=0x0003b8; 	X(PUSH(cs));	// 103126 push    cs ;~ 2FE6:03B8
cs=0x2fe6;eip=0x0003b9; 	R(CALL(sub_3ee5b,0));	// 103127 call    near ptr sub_3EE5B ;~ 2FE6:03B9
loc_3e7fc:
	// 10965 
cs=0x2fe6;eip=0x0003bc; 	X(PUSH(si));	// 103130 push    si ;~ 2FE6:03BC
cs=0x2fe6;eip=0x0003bd; 	R(CALL(sub_3eab6,0));	// 103131 call    sub_3EAB6 ;~ 2FE6:03BD
cs=0x2fe6;eip=0x0003c0; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 103132 mov     [bp+var_2], ax ;~ 2FE6:03C0
cs=0x2fe6;eip=0x0003c3; 	T(CMP(ax, 0x0FFFF));	// 103133 cmp     ax, 0FFFFh ;~ 2FE6:03C3
cs=0x2fe6;eip=0x0003c6; 	R(JNZ(loc_3e831));	// 103134 jnz     short loc_3E831 ;~ 2FE6:03C6
loc_3e808:
	// 10966 
cs=0x2fe6;eip=0x0003c8; 	T(MOV(ax, *(dw*)((&unk_57177))));	// 103138 mov     ax, word ptr unk_57177 ;~ 2FE6:03C8
cs=0x2fe6;eip=0x0003cb; 	T(OR(ax, *(dw*)((&unk_57179))));	// 103139 or      ax, word ptr unk_57179 ;~ 2FE6:03CB
cs=0x2fe6;eip=0x0003cf; 	R(JZ(loc_3e81a));	// 103140 jz      short loc_3E81A ;~ 2FE6:03CF
cs=0x2fe6;eip=0x0003d1; 	X(PUSH(*(dw*)((&unk_57179))));	// 103141 push    word ptr unk_57179 ;~ 2FE6:03D1
cs=0x2fe6;eip=0x0003d5; 	R(CALLF(sub_2397c,0));	// 103142 call    sub_2397C ;~ 2FE6:03D5
loc_3e81a:
	// 10967 
cs=0x2fe6;eip=0x0003da; 	T(MOV(ax, *(dw*)((&unk_5717b))));	// 103145 mov     ax, word ptr unk_5717B ;~ 2FE6:03DA
cs=0x2fe6;eip=0x0003dd; 	T(OR(ax, *(dw*)((&unk_5717d))));	// 103146 or      ax, word ptr unk_5717D ;~ 2FE6:03DD
cs=0x2fe6;eip=0x0003e1; 	R(JZ(loc_3e82c));	// 103147 jz      short loc_3E82C ;~ 2FE6:03E1
cs=0x2fe6;eip=0x0003e3; 	X(PUSH(*(dw*)((&unk_5717d))));	// 103148 push    word ptr unk_5717D ;~ 2FE6:03E3
cs=0x2fe6;eip=0x0003e7; 	R(CALLF(sub_2397c,0));	// 103149 call    sub_2397C ;~ 2FE6:03E7
loc_3e82c:
	// 10968 
cs=0x2fe6;eip=0x0003ec; 	T(SUB(ax, ax));	// 103152 sub     ax, ax ;~ 2FE6:03EC
cs=0x2fe6;eip=0x0003ee; 	R(JMP(loc_3eaae));	// 103153 jmp     loc_3EAAE ;~ 2FE6:03EE
loc_3e831:
	// 10969 
cs=0x2fe6;eip=0x0003f1; 	T(MOV(ax, 0x12));	// 103157 mov     ax, 12h ;~ 2FE6:03F1
cs=0x2fe6;eip=0x0003f4; 	X(MUL1_2(*(dw*)(raddr(ss,bp+var_2))));	// 103158 mul     [bp+var_2] ;~ 2FE6:03F4
cs=0x2fe6;eip=0x0003f7; 	T(MOV(bx, ax));	// 103159 mov     bx, ax ;~ 2FE6:03F7
cs=0x2fe6;eip=0x0003f9; 	T(ADD(bx, *(dw*)((&unk_571c6))));	// 103160 add     bx, word ptr unk_571C6 ;~ 2FE6:03F9
cs=0x2fe6;eip=0x0003fd; 	T(MOV(es, *(dw*)((&unk_571c8))));	// 103161 mov     es, word ptr unk_571C8 ;~ 2FE6:03FD
cs=0x2fe6;eip=0x000401; 	T(CMP(*(raddr(es,bx+0x0D)), 3));	// 103162 cmp     byte ptr es:[bx+0Dh], 3 ;~ 2FE6:0401
cs=0x2fe6;eip=0x000406; 	R(JNZ(loc_3e808));	// 103163 jnz     short loc_3E808 ;~ 2FE6:0406
cs=0x2fe6;eip=0x000408; 	X(PUSH(*(dw*)((&unk_571e3))));	// 103164 push    word ptr unk_571E3 ;~ 2FE6:0408
cs=0x2fe6;eip=0x00040c; 	T(SUB(ax, ax));	// 103165 sub     ax, ax ;~ 2FE6:040C
cs=0x2fe6;eip=0x00040e; 	X(PUSH(ax));	// 103166 push    ax ;~ 2FE6:040E
cs=0x2fe6;eip=0x00040f; 	T(MOV(ax, 0x12));	// 103167 mov     ax, 12h ;~ 2FE6:040F
cs=0x2fe6;eip=0x000412; 	X(MUL1_2(*(dw*)(raddr(ss,bp+var_2))));	// 103168 mul     [bp+var_2] ;~ 2FE6:0412
cs=0x2fe6;eip=0x000415; 	T(MOV(bx, ax));	// 103169 mov     bx, ax ;~ 2FE6:0415
cs=0x2fe6;eip=0x000417; 	T(ADD(bx, *(dw*)((&unk_571c6))));	// 103170 add     bx, word ptr unk_571C6 ;~ 2FE6:0417
cs=0x2fe6;eip=0x00041b; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 103171 push    word ptr es:[bx+10h] ;~ 2FE6:041B
cs=0x2fe6;eip=0x00041f; 	X(PUSH(*(dw*)(raddr(es,bx+0x0E))));	// 103172 push    word ptr es:[bx+0Eh] ;~ 2FE6:041F
cs=0x2fe6;eip=0x000423; 	R(CALLF(sub_30bca,0));	// 103173 call    sub_30BCA ;~ 2FE6:0423
cs=0x2fe6;eip=0x000428; 	T(CMP(ax, 0x0FFFF));	// 103174 cmp     ax, 0FFFFh ;~ 2FE6:0428
cs=0x2fe6;eip=0x00042b; 	R(JZ(loc_3e808));	// 103175 jz      short loc_3E808 ;~ 2FE6:042B
cs=0x2fe6;eip=0x00042d; 	X(PUSH(*(dw*)((&unk_571e3))));	// 103176 push    word ptr unk_571E3 ;~ 2FE6:042D
cs=0x2fe6;eip=0x000431; 	T(ax = bp+var_c);	// 103177 lea     ax, [bp+var_C] ;~ 2FE6:0431
cs=0x2fe6;eip=0x000434; 	X(PUSH(ss));	// 103178 push    ss ;~ 2FE6:0434
cs=0x2fe6;eip=0x000435; 	X(PUSH(ax));	// 103179 push    ax ;~ 2FE6:0435
cs=0x2fe6;eip=0x000436; 	T(MOV(ax, 4));	// 103180 mov     ax, 4 ;~ 2FE6:0436
cs=0x2fe6;eip=0x000439; 	X(PUSH(ax));	// 103181 push    ax ;~ 2FE6:0439
cs=0x2fe6;eip=0x00043a; 	R(CALLF(sub_30b8e,0));	// 103182 call    sub_30B8E ;~ 2FE6:043A
cs=0x2fe6;eip=0x00043f; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 103183 mov     [bp+var_18], ax ;~ 2FE6:043F
cs=0x2fe6;eip=0x000442; 	X(MOV(*(raddr(ss,bp+var_8)), 0));	// 103184 mov     [bp+var_8], 0 ;~ 2FE6:0442
cs=0x2fe6;eip=0x000446; 	T(ax = bp+var_c);	// 103185 lea     ax, [bp+var_C] ;~ 2FE6:0446
cs=0x2fe6;eip=0x000449; 	X(PUSH(ss));	// 103186 push    ss ;~ 2FE6:0449
cs=0x2fe6;eip=0x00044a; 	X(PUSH(ax));	// 103187 push    ax ;~ 2FE6:044A
cs=0x2fe6;eip=0x00044b; 	T(MOV(ax, 0x36F0));	// 103188 mov     ax, 36F0h ;~ 2FE6:044B
cs=0x2fe6;eip=0x00044e; 	X(PUSH(ds));	// 103189 push    ds ;~ 2FE6:044E
cs=0x2fe6;eip=0x00044f; 	X(PUSH(ax));	// 103190 push    ax ;~ 2FE6:044F
cs=0x2fe6;eip=0x000450; 	R(CALLF(sub_3f1c0,0));	// 103191 call    sub_3F1C0 ;~ 2FE6:0450
cs=0x2fe6;eip=0x000455; 	T(OR(ax, ax));	// 103192 or      ax, ax ;~ 2FE6:0455
cs=0x2fe6;eip=0x000457; 	R(JZ(loc_3e89c));	// 103193 jz      short loc_3E89C ;~ 2FE6:0457
cs=0x2fe6;eip=0x000459; 	R(JMP(loc_3e808));	// 103194 jmp     loc_3E808 ;~ 2FE6:0459
loc_3e89c:
	// 10970 
cs=0x2fe6;eip=0x00045c; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0FFFF));	// 103198 cmp     [bp+var_18], 0FFFFh ;~ 2FE6:045C
cs=0x2fe6;eip=0x000460; 	R(JNZ(loc_3e8a5));	// 103199 jnz     short loc_3E8A5 ;~ 2FE6:0460
cs=0x2fe6;eip=0x000462; 	R(JMP(loc_3e808));	// 103200 jmp     loc_3E808 ;~ 2FE6:0462
loc_3e8a5:
	// 10971 
cs=0x2fe6;eip=0x000465; 	X(PUSH(*(dw*)((&unk_571e3))));	// 103204 push    word ptr unk_571E3 ;~ 2FE6:0465
cs=0x2fe6;eip=0x000469; 	T(ax = bp+var_16);	// 103205 lea     ax, [bp+var_16] ;~ 2FE6:0469
cs=0x2fe6;eip=0x00046c; 	X(PUSH(ss));	// 103206 push    ss ;~ 2FE6:046C
cs=0x2fe6;eip=0x00046d; 	X(PUSH(ax));	// 103207 push    ax ;~ 2FE6:046D
cs=0x2fe6;eip=0x00046e; 	T(MOV(ax, 2));	// 103208 mov     ax, 2 ;~ 2FE6:046E
cs=0x2fe6;eip=0x000471; 	X(PUSH(ax));	// 103209 push    ax ;~ 2FE6:0471
cs=0x2fe6;eip=0x000472; 	R(CALLF(sub_30b8e,0));	// 103210 call    sub_30B8E ;~ 2FE6:0472
cs=0x2fe6;eip=0x000477; 	T(CMP(ax, 0x0FFFF));	// 103211 cmp     ax, 0FFFFh ;~ 2FE6:0477
cs=0x2fe6;eip=0x00047a; 	R(JNZ(loc_3e8bf));	// 103212 jnz     short loc_3E8BF ;~ 2FE6:047A
cs=0x2fe6;eip=0x00047c; 	R(JMP(loc_3e808));	// 103213 jmp     loc_3E808 ;~ 2FE6:047C
loc_3e8bf:
	// 10972 
cs=0x2fe6;eip=0x00047f; 	X(PUSH(*(dw*)((&unk_571e3))));	// 103217 push    word ptr unk_571E3 ;~ 2FE6:047F
cs=0x2fe6;eip=0x000483; 	T(ax = bp+var_4);	// 103218 lea     ax, [bp+var_4] ;~ 2FE6:0483
cs=0x2fe6;eip=0x000486; 	X(PUSH(ss));	// 103219 push    ss ;~ 2FE6:0486
cs=0x2fe6;eip=0x000487; 	X(PUSH(ax));	// 103220 push    ax ;~ 2FE6:0487
cs=0x2fe6;eip=0x000488; 	T(MOV(ax, 2));	// 103221 mov     ax, 2 ;~ 2FE6:0488
cs=0x2fe6;eip=0x00048b; 	X(PUSH(ax));	// 103222 push    ax ;~ 2FE6:048B
cs=0x2fe6;eip=0x00048c; 	R(CALLF(sub_30b8e,0));	// 103223 call    sub_30B8E ;~ 2FE6:048C
cs=0x2fe6;eip=0x000491; 	T(CMP(ax, 0x0FFFF));	// 103224 cmp     ax, 0FFFFh ;~ 2FE6:0491
cs=0x2fe6;eip=0x000494; 	R(JNZ(loc_3e8d9));	// 103225 jnz     short loc_3E8D9 ;~ 2FE6:0494
cs=0x2fe6;eip=0x000496; 	R(JMP(loc_3e808));	// 103226 jmp     loc_3E808 ;~ 2FE6:0496
loc_3e8d9:
	// 10973 
cs=0x2fe6;eip=0x000499; 	X(PUSH(*(dw*)((&unk_571e3))));	// 103230 push    word ptr unk_571E3 ;~ 2FE6:0499
cs=0x2fe6;eip=0x00049d; 	T(ax = bp+var_1a);	// 103231 lea     ax, [bp+var_1A] ;~ 2FE6:049D
cs=0x2fe6;eip=0x0004a0; 	X(PUSH(ss));	// 103232 push    ss ;~ 2FE6:04A0
cs=0x2fe6;eip=0x0004a1; 	X(PUSH(ax));	// 103233 push    ax ;~ 2FE6:04A1
cs=0x2fe6;eip=0x0004a2; 	T(MOV(ax, 2));	// 103234 mov     ax, 2 ;~ 2FE6:04A2
cs=0x2fe6;eip=0x0004a5; 	X(PUSH(ax));	// 103235 push    ax ;~ 2FE6:04A5
cs=0x2fe6;eip=0x0004a6; 	R(CALLF(sub_30b8e,0));	// 103236 call    sub_30B8E ;~ 2FE6:04A6
cs=0x2fe6;eip=0x0004ab; 	T(CMP(ax, 0x0FFFF));	// 103237 cmp     ax, 0FFFFh ;~ 2FE6:04AB
cs=0x2fe6;eip=0x0004ae; 	R(JNZ(loc_3e8f3));	// 103238 jnz     short loc_3E8F3 ;~ 2FE6:04AE
cs=0x2fe6;eip=0x0004b0; 	R(JMP(loc_3e808));	// 103239 jmp     loc_3E808 ;~ 2FE6:04B0
loc_3e8f3:
	// 10974 
cs=0x2fe6;eip=0x0004b3; 	X(PUSH(*(dw*)((&unk_571e3))));	// 103243 push    word ptr unk_571E3 ;~ 2FE6:04B3
cs=0x2fe6;eip=0x0004b7; 	T(ax = bp+var_10);	// 103244 lea     ax, [bp+var_10] ;~ 2FE6:04B7
cs=0x2fe6;eip=0x0004ba; 	X(PUSH(ss));	// 103245 push    ss ;~ 2FE6:04BA
cs=0x2fe6;eip=0x0004bb; 	X(PUSH(ax));	// 103246 push    ax ;~ 2FE6:04BB
cs=0x2fe6;eip=0x0004bc; 	T(MOV(ax, 2));	// 103247 mov     ax, 2 ;~ 2FE6:04BC
cs=0x2fe6;eip=0x0004bf; 	X(PUSH(ax));	// 103248 push    ax ;~ 2FE6:04BF
cs=0x2fe6;eip=0x0004c0; 	R(CALLF(sub_30b8e,0));	// 103249 call    sub_30B8E ;~ 2FE6:04C0
cs=0x2fe6;eip=0x0004c5; 	T(CMP(ax, 0x0FFFF));	// 103250 cmp     ax, 0FFFFh ;~ 2FE6:04C5
cs=0x2fe6;eip=0x0004c8; 	R(JNZ(loc_3e90d));	// 103251 jnz     short loc_3E90D ;~ 2FE6:04C8
cs=0x2fe6;eip=0x0004ca; 	R(JMP(loc_3e808));	// 103252 jmp     loc_3E808 ;~ 2FE6:04CA
loc_3e90d:
	// 10975 
cs=0x2fe6;eip=0x0004cd; 	X(PUSH(*(dw*)((&unk_571e3))));	// 103256 push    word ptr unk_571E3 ;~ 2FE6:04CD
cs=0x2fe6;eip=0x0004d1; 	T(MOV(ax, 1));	// 103257 mov     ax, 1 ;~ 2FE6:04D1
cs=0x2fe6;eip=0x0004d4; 	X(PUSH(ax));	// 103258 push    ax ;~ 2FE6:04D4
cs=0x2fe6;eip=0x0004d5; 	T(MOV(ax, 4));	// 103259 mov     ax, 4 ;~ 2FE6:04D5
cs=0x2fe6;eip=0x0004d8; 	T(CWD);	// 103260 cwd ;~ 2FE6:04D8
cs=0x2fe6;eip=0x0004d9; 	X(PUSH(dx));	// 103261 push    dx ;~ 2FE6:04D9
cs=0x2fe6;eip=0x0004da; 	X(PUSH(ax));	// 103262 push    ax ;~ 2FE6:04DA
cs=0x2fe6;eip=0x0004db; 	R(CALLF(sub_30bca,0));	// 103263 call    sub_30BCA ;~ 2FE6:04DB
cs=0x2fe6;eip=0x0004e0; 	T(CMP(ax, 0x0FFFF));	// 103264 cmp     ax, 0FFFFh ;~ 2FE6:04E0
cs=0x2fe6;eip=0x0004e3; 	R(JNZ(loc_3e928));	// 103265 jnz     short loc_3E928 ;~ 2FE6:04E3
cs=0x2fe6;eip=0x0004e5; 	R(JMP(loc_3e808));	// 103266 jmp     loc_3E808 ;~ 2FE6:04E5
loc_3e928:
	// 10976 
cs=0x2fe6;eip=0x0004e8; 	X(PUSH(*(dw*)((&unk_571e3))));	// 103270 push    word ptr unk_571E3 ;~ 2FE6:04E8
cs=0x2fe6;eip=0x0004ec; 	T(ax = bp+var_14);	// 103271 lea     ax, [bp+var_14] ;~ 2FE6:04EC
cs=0x2fe6;eip=0x0004ef; 	X(PUSH(ss));	// 103272 push    ss ;~ 2FE6:04EF
cs=0x2fe6;eip=0x0004f0; 	X(PUSH(ax));	// 103273 push    ax ;~ 2FE6:04F0
cs=0x2fe6;eip=0x0004f1; 	T(MOV(ax, 4));	// 103274 mov     ax, 4 ;~ 2FE6:04F1
cs=0x2fe6;eip=0x0004f4; 	X(PUSH(ax));	// 103275 push    ax ;~ 2FE6:04F4
cs=0x2fe6;eip=0x0004f5; 	R(CALLF(sub_30b8e,0));	// 103276 call    sub_30B8E ;~ 2FE6:04F5
cs=0x2fe6;eip=0x0004fa; 	T(CMP(ax, 0x0FFFF));	// 103277 cmp     ax, 0FFFFh ;~ 2FE6:04FA
cs=0x2fe6;eip=0x0004fd; 	R(JNZ(loc_3e942));	// 103278 jnz     short loc_3E942 ;~ 2FE6:04FD
cs=0x2fe6;eip=0x0004ff; 	R(JMP(loc_3e808));	// 103279 jmp     loc_3E808 ;~ 2FE6:04FF
loc_3e942:
	// 10977 
cs=0x2fe6;eip=0x000502; 	T(CMP(*(dw*)(raddr(ss,bp+var_12)), 1));	// 103283 cmp     [bp+var_12], 1 ;~ 2FE6:0502
cs=0x2fe6;eip=0x000506; 	R(JC(loc_3e94b));	// 103284 jb      short loc_3E94B ;~ 2FE6:0506
cs=0x2fe6;eip=0x000508; 	R(JMP(loc_3e808));	// 103285 jmp     loc_3E808 ;~ 2FE6:0508
loc_3e94b:
	// 10978 
cs=0x2fe6;eip=0x00050b; 	T(CMP(*(dw*)(raddr(ds,di+8)), 0));	// 103289 cmp     word ptr [di+8], 0 ;~ 2FE6:050B
cs=0x2fe6;eip=0x00050f; 	R(JNZ(loc_3e997));	// 103290 jnz     short loc_3E997 ;~ 2FE6:050F
cs=0x2fe6;eip=0x000511; 	X(PUSH(di));	// 103291 push    di ;~ 2FE6:0511
cs=0x2fe6;eip=0x000512; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 103292 push    [bp+var_4] ;~ 2FE6:0512
cs=0x2fe6;eip=0x000515; 	X(PUSH(*(dw*)(raddr(ss,bp+var_10))));	// 103293 push    [bp+var_10] ;~ 2FE6:0515
cs=0x2fe6;eip=0x000518; 	R(CALLF(sub_31695,0));	// 103294 call    sub_31695 ;~ 2FE6:0518
loc_3e95d:
	// 10979 
cs=0x2fe6;eip=0x00051d; 	T(MOV(ax, 0x400));	// 103297 mov     ax, 400h ;~ 2FE6:051D
cs=0x2fe6;eip=0x000520; 	X(PUSH(ax));	// 103298 push    ax ;~ 2FE6:0520
cs=0x2fe6;eip=0x000521; 	R(CALL(sub_3e4ae,0));	// 103299 call    sub_3E4AE ;~ 2FE6:0521
cs=0x2fe6;eip=0x000524; 	T(MOV(dx, ax));	// 103300 mov     dx, ax ;~ 2FE6:0524
cs=0x2fe6;eip=0x000526; 	T(SUB(ax, ax));	// 103301 sub     ax, ax ;~ 2FE6:0526
cs=0x2fe6;eip=0x000528; 	X(MOV(*(dw*)((&unk_57177)), ax));	// 103302 mov     word ptr unk_57177, ax ;~ 2FE6:0528
cs=0x2fe6;eip=0x00052b; 	X(MOV(*(dw*)((&unk_57179)), dx));	// 103303 mov     word ptr unk_57179, dx ;~ 2FE6:052B
cs=0x2fe6;eip=0x00052f; 	T(MOV(ax, 0x1011));	// 103304 mov     ax, 1011h ;~ 2FE6:052F
cs=0x2fe6;eip=0x000532; 	X(PUSH(ax));	// 103305 push    ax ;~ 2FE6:0532
cs=0x2fe6;eip=0x000533; 	R(CALL(sub_3e4ae,0));	// 103306 call    sub_3E4AE ;~ 2FE6:0533
cs=0x2fe6;eip=0x000536; 	T(MOV(dx, ax));	// 103307 mov     dx, ax ;~ 2FE6:0536
cs=0x2fe6;eip=0x000538; 	T(SUB(ax, ax));	// 103308 sub     ax, ax ;~ 2FE6:0538
cs=0x2fe6;eip=0x00053a; 	X(MOV(*(dw*)((&unk_5717b)), ax));	// 103309 mov     word ptr unk_5717B, ax ;~ 2FE6:053A
cs=0x2fe6;eip=0x00053d; 	X(MOV(*(dw*)((&unk_5717d)), dx));	// 103310 mov     word ptr unk_5717D, dx ;~ 2FE6:053D
cs=0x2fe6;eip=0x000541; 	T(MOV(ax, *(dw*)((&unk_57177))));	// 103311 mov     ax, word ptr unk_57177 ;~ 2FE6:0541
cs=0x2fe6;eip=0x000544; 	T(OR(ax, *(dw*)((&unk_57179))));	// 103312 or      ax, word ptr unk_57179 ;~ 2FE6:0544
cs=0x2fe6;eip=0x000548; 	R(JNZ(loc_3e98d));	// 103313 jnz     short loc_3E98D ;~ 2FE6:0548
cs=0x2fe6;eip=0x00054a; 	R(JMP(loc_3e808));	// 103314 jmp     loc_3E808 ;~ 2FE6:054A
loc_3e98d:
	// 10980 
cs=0x2fe6;eip=0x00054d; 	T(MOV(ax, *(dw*)((&unk_5717b))));	// 103318 mov     ax, word ptr unk_5717B ;~ 2FE6:054D
cs=0x2fe6;eip=0x000550; 	T(OR(ax, dx));	// 103319 or      ax, dx ;~ 2FE6:0550
cs=0x2fe6;eip=0x000552; 	R(JNZ(loc_3e9ad));	// 103320 jnz     short loc_3E9AD ;~ 2FE6:0552
cs=0x2fe6;eip=0x000554; 	R(JMP(loc_3e808));	// 103321 jmp     loc_3E808 ;~ 2FE6:0554
loc_3e997:
	// 10981 
cs=0x2fe6;eip=0x000557; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 103325 mov     ax, [bp+var_4] ;~ 2FE6:0557
cs=0x2fe6;eip=0x00055a; 	T(CMP(*(dw*)(raddr(ds,di+2)), ax));	// 103326 cmp     [di+2], ax ;~ 2FE6:055A
cs=0x2fe6;eip=0x00055d; 	R(JZ(loc_3e9a2));	// 103327 jz      short loc_3E9A2 ;~ 2FE6:055D
cs=0x2fe6;eip=0x00055f; 	R(JMP(loc_3e808));	// 103328 jmp     loc_3E808 ;~ 2FE6:055F
loc_3e9a2:
	// 10982 
cs=0x2fe6;eip=0x000562; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 103332 mov     ax, [bp+var_10] ;~ 2FE6:0562
cs=0x2fe6;eip=0x000565; 	T(CMP(*(dw*)(raddr(ds,di+4)), ax));	// 103333 cmp     [di+4], ax ;~ 2FE6:0565
cs=0x2fe6;eip=0x000568; 	R(JZ(loc_3e95d));	// 103334 jz      short loc_3E95D ;~ 2FE6:0568
cs=0x2fe6;eip=0x00056a; 	R(JMP(loc_3e808));	// 103335 jmp     loc_3E808 ;~ 2FE6:056A
loc_3e9ad:
	// 10983 
cs=0x2fe6;eip=0x00056d; 	T(CMP(*(dw*)((&byte_47b2e)), 0));	// 103339 cmp     word ptr byte_47B2E, 0 ;~ 2FE6:056D
cs=0x2fe6;eip=0x000572; 	R(JNZ(loc_3e9e1));	// 103340 jnz     short loc_3E9E1 ;~ 2FE6:0572
cs=0x2fe6;eip=0x000574; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 4));	// 103341 cmp     [bp+var_16], 4 ;~ 2FE6:0574
cs=0x2fe6;eip=0x000578; 	R(JNZ(loc_3e9c3));	// 103342 jnz     short loc_3E9C3 ;~ 2FE6:0578
cs=0x2fe6;eip=0x00057a; 	T(MOV(ax, 0x135C));	// 103343 mov     ax, 135Ch ;~ 2FE6:057A
cs=0x2fe6;eip=0x00057d; 	T(MOV(dx, seg_offset(seg031)));	// 103344 mov     dx, seg seg031 ;~ 2FE6:057D
cs=0x2fe6;eip=0x000580; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 103345 mov     [bp+var_E], ax ;~ 2FE6:0580
loc_3e9c3:
	// 10984 
cs=0x2fe6;eip=0x000583; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0x10));	// 103348 cmp     [bp+var_16], 10h ;~ 2FE6:0583
cs=0x2fe6;eip=0x000587; 	R(JNZ(loc_3e9d2));	// 103349 jnz     short loc_3E9D2 ;~ 2FE6:0587
cs=0x2fe6;eip=0x000589; 	T(MOV(ax, 0x1221));	// 103350 mov     ax, 1221h ;~ 2FE6:0589
cs=0x2fe6;eip=0x00058c; 	T(MOV(dx, seg_offset(seg031)));	// 103351 mov     dx, seg seg031 ;~ 2FE6:058C
cs=0x2fe6;eip=0x00058f; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 103352 mov     [bp+var_E], ax ;~ 2FE6:058F
loc_3e9d2:
	// 10985 
cs=0x2fe6;eip=0x000592; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 4));	// 103355 cmp     [bp+var_16], 4 ;~ 2FE6:0592
cs=0x2fe6;eip=0x000596; 	R(JZ(loc_3e9e1));	// 103356 jz      short loc_3E9E1 ;~ 2FE6:0596
cs=0x2fe6;eip=0x000598; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0x10));	// 103357 cmp     [bp+var_16], 10h ;~ 2FE6:0598
cs=0x2fe6;eip=0x00059c; 	R(JZ(loc_3e9e1));	// 103358 jz      short loc_3E9E1 ;~ 2FE6:059C
cs=0x2fe6;eip=0x00059e; 	R(JMP(loc_3e808));	// 103359 jmp     loc_3E808 ;~ 2FE6:059E
loc_3e9e1:
	// 10986 
cs=0x2fe6;eip=0x0005a1; 	T(CMP(*(dw*)((&byte_47b2e)), 1));	// 103364 cmp     word ptr byte_47B2E, 1 ;~ 2FE6:05A1
cs=0x2fe6;eip=0x0005a6; 	R(JZ(loc_3e9f6));	// 103365 jz      short loc_3E9F6 ;~ 2FE6:05A6
cs=0x2fe6;eip=0x0005a8; 	T(CMP(*(dw*)((&byte_47b2e)), 2));	// 103366 cmp     word ptr byte_47B2E, 2 ;~ 2FE6:05A8
cs=0x2fe6;eip=0x0005ad; 	R(JZ(loc_3e9f6));	// 103367 jz      short loc_3E9F6 ;~ 2FE6:05AD
cs=0x2fe6;eip=0x0005af; 	T(CMP(*(dw*)((&byte_47b2e)), 3));	// 103368 cmp     word ptr byte_47B2E, 3 ;~ 2FE6:05AF
cs=0x2fe6;eip=0x0005b4; 	R(JNZ(loc_3ea08));	// 103369 jnz     short loc_3EA08 ;~ 2FE6:05B4
loc_3e9f6:
	// 10987 
cs=0x2fe6;eip=0x0005b6; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0x10));	// 103373 cmp     [bp+var_16], 10h ;~ 2FE6:05B6
cs=0x2fe6;eip=0x0005ba; 	R(JZ(loc_3e9ff));	// 103374 jz      short loc_3E9FF ;~ 2FE6:05BA
cs=0x2fe6;eip=0x0005bc; 	R(JMP(loc_3e808));	// 103375 jmp     loc_3E808 ;~ 2FE6:05BC
loc_3e9ff:
	// 10988 
cs=0x2fe6;eip=0x0005bf; 	T(MOV(ax, 0x1172));	// 103379 mov     ax, 1172h ;~ 2FE6:05BF
cs=0x2fe6;eip=0x0005c2; 	T(MOV(dx, seg_offset(seg031)));	// 103380 mov     dx, seg seg031 ;~ 2FE6:05C2
cs=0x2fe6;eip=0x0005c5; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 103381 mov     [bp+var_E], ax ;~ 2FE6:05C5
loc_3ea08:
	// 10989 
cs=0x2fe6;eip=0x0005c8; 	T(CMP(*(dw*)((&byte_47b2e)), 5));	// 103384 cmp     word ptr byte_47B2E, 5 ;~ 2FE6:05C8
cs=0x2fe6;eip=0x0005cd; 	R(JNZ(loc_3ea21));	// 103385 jnz     short loc_3EA21 ;~ 2FE6:05CD
cs=0x2fe6;eip=0x0005cf; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0x10));	// 103386 cmp     [bp+var_16], 10h ;~ 2FE6:05CF
cs=0x2fe6;eip=0x0005d3; 	R(JZ(loc_3ea18));	// 103387 jz      short loc_3EA18 ;~ 2FE6:05D3
cs=0x2fe6;eip=0x0005d5; 	R(JMP(loc_3e808));	// 103388 jmp     loc_3E808 ;~ 2FE6:05D5
loc_3ea18:
	// 10990 
cs=0x2fe6;eip=0x0005d8; 	T(MOV(ax, 0x135C));	// 103392 mov     ax, 135Ch ;~ 2FE6:05D8
cs=0x2fe6;eip=0x0005db; 	T(MOV(dx, seg_offset(seg031)));	// 103393 mov     dx, seg seg031 ;~ 2FE6:05DB
cs=0x2fe6;eip=0x0005de; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 103394 mov     [bp+var_E], ax ;~ 2FE6:05DE
loc_3ea21:
	// 10991 
cs=0x2fe6;eip=0x0005e1; 	T(CMP(*(dw*)((&byte_47b2e)), 4));	// 103397 cmp     word ptr byte_47B2E, 4 ;~ 2FE6:05E1
cs=0x2fe6;eip=0x0005e6; 	R(JNZ(loc_3ea57));	// 103398 jnz     short loc_3EA57 ;~ 2FE6:05E6
cs=0x2fe6;eip=0x0005e8; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0x100));	// 103399 cmp     [bp+var_16], 100h ;~ 2FE6:05E8
cs=0x2fe6;eip=0x0005ed; 	R(JNZ(loc_3ea38));	// 103400 jnz     short loc_3EA38 ;~ 2FE6:05ED
cs=0x2fe6;eip=0x0005ef; 	T(MOV(ax, 0x135C));	// 103401 mov     ax, 135Ch ;~ 2FE6:05EF
cs=0x2fe6;eip=0x0005f2; 	T(MOV(dx, seg_offset(seg031)));	// 103402 mov     dx, seg seg031 ;~ 2FE6:05F2
cs=0x2fe6;eip=0x0005f5; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 103403 mov     [bp+var_E], ax ;~ 2FE6:05F5
loc_3ea38:
	// 10992 
cs=0x2fe6;eip=0x0005f8; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0x10));	// 103406 cmp     [bp+var_16], 10h ;~ 2FE6:05F8
cs=0x2fe6;eip=0x0005fc; 	R(JNZ(loc_3ea47));	// 103407 jnz     short loc_3EA47 ;~ 2FE6:05FC
cs=0x2fe6;eip=0x0005fe; 	T(MOV(ax, 0x130F));	// 103408 mov     ax, 130Fh ;~ 2FE6:05FE
cs=0x2fe6;eip=0x000601; 	T(MOV(dx, seg_offset(seg031)));	// 103409 mov     dx, seg seg031 ;~ 2FE6:0601
cs=0x2fe6;eip=0x000604; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 103410 mov     [bp+var_E], ax ;~ 2FE6:0604
loc_3ea47:
	// 10993 
cs=0x2fe6;eip=0x000607; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0x10));	// 103413 cmp     [bp+var_16], 10h ;~ 2FE6:0607
cs=0x2fe6;eip=0x00060b; 	R(JZ(loc_3ea57));	// 103414 jz      short loc_3EA57 ;~ 2FE6:060B
cs=0x2fe6;eip=0x00060d; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0x100));	// 103415 cmp     [bp+var_16], 100h ;~ 2FE6:060D
cs=0x2fe6;eip=0x000612; 	R(JZ(loc_3ea57));	// 103416 jz      short loc_3EA57 ;~ 2FE6:0612
cs=0x2fe6;eip=0x000614; 	R(JMP(loc_3e808));	// 103417 jmp     loc_3E808 ;~ 2FE6:0614
loc_3ea57:
	// 10994 
cs=0x2fe6;eip=0x000617; 	T(MOV(ax, *(dw*)(raddr(ds,di+6))));	// 103422 mov     ax, [di+6] ;~ 2FE6:0617
cs=0x2fe6;eip=0x00061a; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 103423 mov     [bp+var_6], ax ;~ 2FE6:061A
cs=0x2fe6;eip=0x00061d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 103424 mov     ax, [bp+var_1A] ;~ 2FE6:061D
cs=0x2fe6;eip=0x000620; 	T(SHL(ax, 1));	// 103425 shl     ax, 1 ;~ 2FE6:0620
cs=0x2fe6;eip=0x000622; 	X(MOV(*(dw*)(raddr(ds,di+6)), ax));	// 103426 mov     [di+6], ax ;~ 2FE6:0622
cs=0x2fe6;eip=0x000625; 	X(PUSH(*(dw*)((&unk_571e3))));	// 103427 push    word ptr unk_571E3 ;~ 2FE6:0625
cs=0x2fe6;eip=0x000629; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 103428 push    [bp+var_12] ;~ 2FE6:0629
cs=0x2fe6;eip=0x00062c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_14))));	// 103429 push    [bp+var_14] ;~ 2FE6:062C
cs=0x2fe6;eip=0x00062f; 	X(PUSH(di));	// 103430 push    di ;~ 2FE6:062F
cs=0x2fe6;eip=0x000630; 	X(PUSH(*(dw*)(raddr(ss,bp+var_e))));	// 103431 push    [bp+var_E] ;~ 2FE6:0630
cs=0x2fe6;eip=0x000633; 	R(CALL(_group29,m2c::kloc_3f405));	// 103432 call    loc_3F405 ;~ 2FE6:0633
cs=0x2fe6;eip=0x000636; 	T(OR(al, al));	// 103433 or      al, al ;~ 2FE6:0636
cs=0x2fe6;eip=0x000638; 	R(JNZ(loc_3ea7d));	// 103434 jnz     short loc_3EA7D ;~ 2FE6:0638
cs=0x2fe6;eip=0x00063a; 	R(JMP(loc_3e808));	// 103435 jmp     loc_3E808 ;~ 2FE6:063A
loc_3ea7d:
	// 10995 
cs=0x2fe6;eip=0x00063d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 103439 mov     ax, [bp+var_6] ;~ 2FE6:063D
cs=0x2fe6;eip=0x000640; 	X(MOV(*(dw*)(raddr(ds,di+6)), ax));	// 103440 mov     [di+6], ax ;~ 2FE6:0640
cs=0x2fe6;eip=0x000643; 	T(MOV(ax, 0x1172));	// 103441 mov     ax, 1172h ;~ 2FE6:0643
cs=0x2fe6;eip=0x000646; 	T(MOV(dx, seg_offset(seg031)));	// 103442 mov     dx, seg seg031 ;~ 2FE6:0646
cs=0x2fe6;eip=0x000649; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), ax));	// 103443 cmp     [bp+var_E], ax ;~ 2FE6:0649
cs=0x2fe6;eip=0x00064c; 	R(JNZ(loc_3ea99));	// 103444 jnz     short loc_3EA99 ;~ 2FE6:064C
cs=0x2fe6;eip=0x00064e; 	T(SUB(ax, ax));	// 103445 sub     ax, ax ;~ 2FE6:064E
cs=0x2fe6;eip=0x000650; 	X(PUSH(ax));	// 103446 push    ax ;~ 2FE6:0650
cs=0x2fe6;eip=0x000651; 	R(CALLF(sub_2064a,0));	// 103447 call    sub_2064A ;~ 2FE6:0651
cs=0x2fe6;eip=0x000656; 	T(ADD(sp, 2));	// 103448 add     sp, 2 ;~ 2FE6:0656
loc_3ea99:
	// 10996 
cs=0x2fe6;eip=0x000659; 	X(PUSH(*(dw*)((&unk_57179))));	// 103451 push    word ptr unk_57179 ;~ 2FE6:0659
cs=0x2fe6;eip=0x00065d; 	R(CALLF(sub_2397c,0));	// 103452 call    sub_2397C ;~ 2FE6:065D
cs=0x2fe6;eip=0x000662; 	X(PUSH(*(dw*)((&unk_5717d))));	// 103453 push    word ptr unk_5717D ;~ 2FE6:0662
cs=0x2fe6;eip=0x000666; 	R(CALLF(sub_2397c,0));	// 103454 call    sub_2397C ;~ 2FE6:0666
cs=0x2fe6;eip=0x00066b; 	T(MOV(ax, 1));	// 103455 mov     ax, 1 ;~ 2FE6:066B
loc_3eaae:
	// 10997 
cs=0x2fe6;eip=0x00066e; 	X(POP(si));	// 103458 pop     si ;~ 2FE6:066E
cs=0x2fe6;eip=0x00066f; 	X(POP(di));	// 103459 pop     di ;~ 2FE6:066F
cs=0x2fe6;eip=0x000670; 	T(MOV(sp, bp));	// 103460 mov     sp, bp ;~ 2FE6:0670
cs=0x2fe6;eip=0x000672; 	X(POP(bp));	// 103461 pop     bp ;~ 2FE6:0672
cs=0x2fe6;eip=0x000673; 	R(RETF(4));	// 103462 retf    4 ;~ 2FE6:0673
sub_3eab6:
	// 103470 
#undef var_a
#define var_a -0x0A
	// 103473 var_A           = word ptr -0Ah ;~ 2FE6:0676
#undef var_8
#define var_8 -8
	// 103474 var_8           = dword ptr -8 ;~ 2FE6:0676
#undef arg_0
#define arg_0 4
	// 103475 arg_0           = word ptr  4 ;~ 2FE6:0676
cs=0x2fe6;eip=0x000676; 	X(PUSH(bp));	// 103477 push    bp ;~ 2FE6:0676
cs=0x2fe6;eip=0x000677; 	T(MOV(bp, sp));	// 103478 mov     bp, sp ;~ 2FE6:0677
cs=0x2fe6;eip=0x000679; 	T(SUB(sp, 0x0A));	// 103479 sub     sp, 0Ah ;~ 2FE6:0679
cs=0x2fe6;eip=0x00067c; 	X(PUSH(di));	// 103480 push    di ;~ 2FE6:067C
cs=0x2fe6;eip=0x00067d; 	X(PUSH(si));	// 103481 push    si ;~ 2FE6:067D
cs=0x2fe6;eip=0x00067e; 	T(SUB(si, si));	// 103482 sub     si, si ;~ 2FE6:067E
cs=0x2fe6;eip=0x000680; 	T(CMP(*(dw*)((&unk_571d4)), si));	// 103483 cmp     word ptr unk_571D4, si ;~ 2FE6:0680
cs=0x2fe6;eip=0x000684; 	R(JZ(loc_3eaef));	// 103484 jz      short loc_3EAEF ;~ 2FE6:0684
cs=0x2fe6;eip=0x000686; 	T(MOV(ax, 0x1C));	// 103485 mov     ax, 1Ch ;~ 2FE6:0686
cs=0x2fe6;eip=0x000689; 	T(MUL1_2(si));	// 103486 mul     si ;~ 2FE6:0689
cs=0x2fe6;eip=0x00068b; 	T(ADD(ax, *(dw*)((&unk_571d0))));	// 103487 add     ax, word ptr unk_571D0 ;~ 2FE6:068B
cs=0x2fe6;eip=0x00068f; 	T(MOV(dx, *(dw*)((&unk_571d2))));	// 103488 mov     dx, word ptr unk_571D2 ;~ 2FE6:068F
cs=0x2fe6;eip=0x000693; 	T(ADD(ax, 0x1A));	// 103489 add     ax, 1Ah ;~ 2FE6:0693
cs=0x2fe6;eip=0x000696; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8))), ax));	// 103490 mov     word ptr [bp+var_8], ax ;~ 2FE6:0696
cs=0x2fe6;eip=0x000699; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8+2))), dx));	// 103491 mov     word ptr [bp+var_8+2], dx ;~ 2FE6:0699
cs=0x2fe6;eip=0x00069c; 	T(MOV(cx, *(dw*)((&unk_571d4))));	// 103492 mov     cx, word ptr unk_571D4 ;~ 2FE6:069C
cs=0x2fe6;eip=0x0006a0; 	T(ADD(si, cx));	// 103493 add     si, cx ;~ 2FE6:06A0
loc_3eae2:
	// 10998 
cs=0x2fe6;eip=0x0006a2; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 103496 les     bx, [bp+var_8] ;~ 2FE6:06A2
cs=0x2fe6;eip=0x0006a5; 	X(MOV(*(raddr(es,bx)), 0));	// 103497 mov     byte ptr es:[bx], 0 ;~ 2FE6:06A5
cs=0x2fe6;eip=0x0006a9; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_8))), 0x1C));	// 103498 add     word ptr [bp+var_8], 1Ch ;~ 2FE6:06A9
cs=0x2fe6;eip=0x0006ad; 	R(LOOP(loc_3eae2));	// 103499 loop    loc_3EAE2 ;~ 2FE6:06AD
loc_3eaef:
	// 10999 
cs=0x2fe6;eip=0x0006af; 	T(CMP(*(dw*)((&unk_571e3)), 0));	// 103502 cmp     word ptr unk_571E3, 0 ;~ 2FE6:06AF
cs=0x2fe6;eip=0x0006b4; 	R(JZ(loc_3eb2e));	// 103503 jz      short loc_3EB2E ;~ 2FE6:06B4
cs=0x2fe6;eip=0x0006b6; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 103504 push    [bp+arg_0] ;~ 2FE6:06B6
cs=0x2fe6;eip=0x0006b9; 	R(CALL(sub_3ee91,0));	// 103505 call    sub_3EE91 ;~ 2FE6:06B9
cs=0x2fe6;eip=0x0006bc; 	T(MOV(di, ax));	// 103506 mov     di, ax ;~ 2FE6:06BC
cs=0x2fe6;eip=0x0006be; 	T(CMP(di, 0x0FFFF));	// 103507 cmp     di, 0FFFFh ;~ 2FE6:06BE
cs=0x2fe6;eip=0x0006c1; 	R(JZ(loc_3eb08));	// 103508 jz      short loc_3EB08 ;~ 2FE6:06C1
loc_3eb03:
	// 11000 
cs=0x2fe6;eip=0x0006c3; 	T(MOV(ax, di));	// 103512 mov     ax, di ;~ 2FE6:06C3
cs=0x2fe6;eip=0x0006c5; 	R(JMP(loc_3ebc4));	// 103513 jmp     loc_3EBC4 ;~ 2FE6:06C5
loc_3eb08:
	// 11001 
cs=0x2fe6;eip=0x0006c8; 	T(MOV(ax, 0x0F826));	// 103517 mov     ax, 0F826h ;~ 2FE6:06C8
cs=0x2fe6;eip=0x0006cb; 	X(PUSH(ax));	// 103518 push    ax ;~ 2FE6:06CB
cs=0x2fe6;eip=0x0006cc; 	R(CALL(sub_3efa2,0));	// 103519 call    sub_3EFA2 ;~ 2FE6:06CC
cs=0x2fe6;eip=0x0006cf; 	T(MOV(di, ax));	// 103520 mov     di, ax ;~ 2FE6:06CF
cs=0x2fe6;eip=0x0006d1; 	T(CMP(di, 0x0FFFF));	// 103521 cmp     di, 0FFFFh ;~ 2FE6:06D1
cs=0x2fe6;eip=0x0006d4; 	R(JZ(loc_3eb2a));	// 103522 jz      short loc_3EB2A ;~ 2FE6:06D4
cs=0x2fe6;eip=0x0006d6; 	T(MOV(ax, 0x1C));	// 103523 mov     ax, 1Ch ;~ 2FE6:06D6
cs=0x2fe6;eip=0x0006d9; 	T(MUL1_2(di));	// 103524 mul     di ;~ 2FE6:06D9
cs=0x2fe6;eip=0x0006db; 	T(MOV(bx, ax));	// 103525 mov     bx, ax ;~ 2FE6:06DB
cs=0x2fe6;eip=0x0006dd; 	T(ADD(bx, *(dw*)((&unk_571d0))));	// 103526 add     bx, word ptr unk_571D0 ;~ 2FE6:06DD
cs=0x2fe6;eip=0x0006e1; 	T(MOV(es, *(dw*)((&unk_571d2))));	// 103527 mov     es, word ptr unk_571D2 ;~ 2FE6:06E1
cs=0x2fe6;eip=0x0006e5; 	X(MOV(*(raddr(es,bx+0x1A)), 1));	// 103528 mov     byte ptr es:[bx+1Ah], 1 ;~ 2FE6:06E5
loc_3eb2a:
	// 11002 
cs=0x2fe6;eip=0x0006ea; 	X(PUSH(cs));	// 103531 push    cs ;~ 2FE6:06EA
cs=0x2fe6;eip=0x0006eb; 	R(CALL(sub_3ee5b,0));	// 103532 call    near ptr sub_3EE5B ;~ 2FE6:06EB
loc_3eb2e:
	// 11003 
cs=0x2fe6;eip=0x0006ee; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 103535 push    [bp+arg_0] ;~ 2FE6:06EE
cs=0x2fe6;eip=0x0006f1; 	R(CALL(sub_3eeea,0));	// 103536 call    sub_3EEEA ;~ 2FE6:06F1
cs=0x2fe6;eip=0x0006f4; 	T(MOV(si, ax));	// 103537 mov     si, ax ;~ 2FE6:06F4
cs=0x2fe6;eip=0x0006f6; 	T(CMP(si, 0x0FFFF));	// 103538 cmp     si, 0FFFFh ;~ 2FE6:06F6
cs=0x2fe6;eip=0x0006f9; 	R(JZ(loc_3eb59));	// 103539 jz      short loc_3EB59 ;~ 2FE6:06F9
cs=0x2fe6;eip=0x0006fb; 	X(PUSH(si));	// 103540 push    si ;~ 2FE6:06FB
cs=0x2fe6;eip=0x0006fc; 	X(PUSH(cs));	// 103541 push    cs ;~ 2FE6:06FC
cs=0x2fe6;eip=0x0006fd; 	R(CALL(sub_3ebcc,0));	// 103542 call    near ptr sub_3EBCC ;~ 2FE6:06FD
cs=0x2fe6;eip=0x000700; 	T(MOV(di, ax));	// 103543 mov     di, ax ;~ 2FE6:0700
cs=0x2fe6;eip=0x000702; 	T(CMP(di, 0x0FFFF));	// 103544 cmp     di, 0FFFFh ;~ 2FE6:0702
cs=0x2fe6;eip=0x000705; 	R(JZ(loc_3eb59));	// 103545 jz      short loc_3EB59 ;~ 2FE6:0705
cs=0x2fe6;eip=0x000707; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 103546 push    [bp+arg_0] ;~ 2FE6:0707
cs=0x2fe6;eip=0x00070a; 	R(CALL(sub_3ee91,0));	// 103547 call    sub_3EE91 ;~ 2FE6:070A
cs=0x2fe6;eip=0x00070d; 	T(MOV(di, ax));	// 103548 mov     di, ax ;~ 2FE6:070D
cs=0x2fe6;eip=0x00070f; 	T(CMP(di, 0x0FFFF));	// 103549 cmp     di, 0FFFFh ;~ 2FE6:070F
cs=0x2fe6;eip=0x000712; 	R(JNZ(loc_3eb03));	// 103550 jnz     short loc_3EB03 ;~ 2FE6:0712
loc_3eb54:
	// 11004 
cs=0x2fe6;eip=0x000714; 	T(MOV(ax, 0x0FFFF));	// 103554 mov     ax, 0FFFFh ;~ 2FE6:0714
cs=0x2fe6;eip=0x000717; 	R(JMP(loc_3ebc4));	// 103555 jmp     short loc_3EBC4 ;~ 2FE6:0717
loc_3eb59:
	// 11005 
cs=0x2fe6;eip=0x000719; 	T(SUB(si, si));	// 103560 sub     si, si ;~ 2FE6:0719
cs=0x2fe6;eip=0x00071b; 	T(CMP(*(dw*)((&unk_571d4)), si));	// 103561 cmp     word ptr unk_571D4, si ;~ 2FE6:071B
cs=0x2fe6;eip=0x00071f; 	R(JZ(loc_3eb54));	// 103562 jz      short loc_3EB54 ;~ 2FE6:071F
cs=0x2fe6;eip=0x000721; 	T(MOV(ax, 0x1C));	// 103563 mov     ax, 1Ch ;~ 2FE6:0721
cs=0x2fe6;eip=0x000724; 	T(MUL1_2(si));	// 103564 mul     si ;~ 2FE6:0724
cs=0x2fe6;eip=0x000726; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 103565 mov     [bp+var_A], ax ;~ 2FE6:0726
loc_3eb69:
	// 11006 
cs=0x2fe6;eip=0x000729; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_a))));	// 103568 mov     bx, [bp+var_A] ;~ 2FE6:0729
cs=0x2fe6;eip=0x00072c; 	T(ADD(bx, *(dw*)((&unk_571d0))));	// 103569 add     bx, word ptr unk_571D0 ;~ 2FE6:072C
cs=0x2fe6;eip=0x000730; 	T(MOV(es, *(dw*)((&unk_571d2))));	// 103570 mov     es, word ptr unk_571D2 ;~ 2FE6:0730
cs=0x2fe6;eip=0x000734; 	T(CMP(*(raddr(es,bx+0x1A)), 0));	// 103571 cmp     byte ptr es:[bx+1Ah], 0 ;~ 2FE6:0734
cs=0x2fe6;eip=0x000739; 	R(JNZ(loc_3ebb7));	// 103572 jnz     short loc_3EBB7 ;~ 2FE6:0739
cs=0x2fe6;eip=0x00073b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_a))));	// 103573 mov     bx, [bp+var_A] ;~ 2FE6:073B
cs=0x2fe6;eip=0x00073e; 	T(ADD(bx, *(dw*)((&unk_571d0))));	// 103574 add     bx, word ptr unk_571D0 ;~ 2FE6:073E
cs=0x2fe6;eip=0x000742; 	T(CMP(*(raddr(es,bx+0x1A)), 1));	// 103575 cmp     byte ptr es:[bx+1Ah], 1 ;~ 2FE6:0742
cs=0x2fe6;eip=0x000747; 	R(JNZ(loc_3eb8e));	// 103576 jnz     short loc_3EB8E ;~ 2FE6:0747
cs=0x2fe6;eip=0x000749; 	T(MOV(ax, 1));	// 103577 mov     ax, 1 ;~ 2FE6:0749
cs=0x2fe6;eip=0x00074c; 	R(JMP(loc_3eb90));	// 103578 jmp     short loc_3EB90 ;~ 2FE6:074C
loc_3eb8e:
	// 11007 
cs=0x2fe6;eip=0x00074e; 	T(SUB(ax, ax));	// 103582 sub     ax, ax ;~ 2FE6:074E
loc_3eb90:
	// 11008 
cs=0x2fe6;eip=0x000750; 	T(CMP(*(dw*)((&unk_571e3)), 0));	// 103585 cmp     word ptr unk_571E3, 0 ;~ 2FE6:0750
cs=0x2fe6;eip=0x000755; 	R(JZ(loc_3eb9b));	// 103586 jz      short loc_3EB9B ;~ 2FE6:0755
cs=0x2fe6;eip=0x000757; 	X(PUSH(cs));	// 103587 push    cs ;~ 2FE6:0757
cs=0x2fe6;eip=0x000758; 	R(CALL(sub_3ee5b,0));	// 103588 call    near ptr sub_3EE5B ;~ 2FE6:0758
loc_3eb9b:
	// 11009 
cs=0x2fe6;eip=0x00075b; 	X(PUSH(si));	// 103591 push    si ;~ 2FE6:075B
cs=0x2fe6;eip=0x00075c; 	X(PUSH(cs));	// 103592 push    cs ;~ 2FE6:075C
cs=0x2fe6;eip=0x00075d; 	R(CALL(sub_3ebcc,0));	// 103593 call    near ptr sub_3EBCC ;~ 2FE6:075D
cs=0x2fe6;eip=0x000760; 	T(MOV(di, ax));	// 103594 mov     di, ax ;~ 2FE6:0760
cs=0x2fe6;eip=0x000762; 	T(CMP(di, 0x0FFFF));	// 103595 cmp     di, 0FFFFh ;~ 2FE6:0762
cs=0x2fe6;eip=0x000765; 	R(JZ(loc_3ebb7));	// 103596 jz      short loc_3EBB7 ;~ 2FE6:0765
cs=0x2fe6;eip=0x000767; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 103597 push    [bp+arg_0] ;~ 2FE6:0767
cs=0x2fe6;eip=0x00076a; 	R(CALL(sub_3ee91,0));	// 103598 call    sub_3EE91 ;~ 2FE6:076A
cs=0x2fe6;eip=0x00076d; 	T(MOV(di, ax));	// 103599 mov     di, ax ;~ 2FE6:076D
cs=0x2fe6;eip=0x00076f; 	T(CMP(di, 0x0FFFF));	// 103600 cmp     di, 0FFFFh ;~ 2FE6:076F
cs=0x2fe6;eip=0x000772; 	R(JZ(loc_3ebb7));	// 103601 jz      short loc_3EBB7 ;~ 2FE6:0772
cs=0x2fe6;eip=0x000774; 	R(JMP(loc_3eb03));	// 103602 jmp     loc_3EB03 ;~ 2FE6:0774
loc_3ebb7:
	// 11010 
cs=0x2fe6;eip=0x000777; 	X(ADD(*(dw*)(raddr(ss,bp+var_a)), 0x1C));	// 103607 add     [bp+var_A], 1Ch ;~ 2FE6:0777
cs=0x2fe6;eip=0x00077b; 	T(INC(si));	// 103608 inc     si ;~ 2FE6:077B
cs=0x2fe6;eip=0x00077c; 	T(CMP(*(dw*)((&unk_571d4)), si));	// 103609 cmp     word ptr unk_571D4, si ;~ 2FE6:077C
cs=0x2fe6;eip=0x000780; 	R(JBE(loc_3eb54));	// 103610 jbe     short loc_3EB54 ;~ 2FE6:0780
cs=0x2fe6;eip=0x000782; 	R(JMP(loc_3eb69));	// 103611 jmp     short loc_3EB69 ;~ 2FE6:0782
loc_3ebc4:
	// 11011 
cs=0x2fe6;eip=0x000784; 	X(POP(si));	// 103616 pop     si ;~ 2FE6:0784
cs=0x2fe6;eip=0x000785; 	X(POP(di));	// 103617 pop     di ;~ 2FE6:0785
cs=0x2fe6;eip=0x000786; 	T(MOV(sp, bp));	// 103618 mov     sp, bp ;~ 2FE6:0786
cs=0x2fe6;eip=0x000788; 	X(POP(bp));	// 103619 pop     bp ;~ 2FE6:0788
cs=0x2fe6;eip=0x000789; 	R(RETN(2));	// 103620 retn    2 ;~ 2FE6:0789
sub_3ebcc:
	// 103628 
#undef var_28
#define var_28 -0x28
	// 103631 var_28          = dword ptr -28h ;~ 2FE6:078C
#undef var_24
#define var_24 -0x24
	// 103632 var_24          = word ptr -24h ;~ 2FE6:078C
#undef var_22
#define var_22 -0x22
	// 103633 var_22          = word ptr -22h ;~ 2FE6:078C
#undef var_20
#define var_20 -0x20
	// 103634 var_20          = word ptr -20h ;~ 2FE6:078C
#undef var_1c
#define var_1c -0x1C
	// 103635 var_1C          = byte ptr -1Ch ;~ 2FE6:078C
#undef var_1a
#define var_1a -0x1A
	// 103636 var_1A          = word ptr -1Ah ;~ 2FE6:078C
#undef var_18
#define var_18 -0x18
	// 103637 var_18          = byte ptr -18h ;~ 2FE6:078C
#undef var_16
#define var_16 -0x16
	// 103638 var_16          = byte ptr -16h ;~ 2FE6:078C
#undef var_15
#define var_15 -0x15
	// 103639 var_15          = byte ptr -15h ;~ 2FE6:078C
#undef var_14
#define var_14 -0x14
	// 103640 var_14          = byte ptr -14h ;~ 2FE6:078C
#undef var_6
#define var_6 -6
	// 103641 var_6           = byte ptr -6 ;~ 2FE6:078C
#undef var_1
#define var_1 -1
	// 103642 var_1           = byte ptr -1 ;~ 2FE6:078C
#undef arg_0
#define arg_0 6
	// 103643 arg_0           = word ptr  6 ;~ 2FE6:078C
cs=0x2fe6;eip=0x00078c; 	X(PUSH(bp));	// 103645 push    bp ;~ 2FE6:078C
cs=0x2fe6;eip=0x00078d; 	T(MOV(bp, sp));	// 103646 mov     bp, sp ;~ 2FE6:078D
cs=0x2fe6;eip=0x00078f; 	T(SUB(sp, 0x28));	// 103647 sub     sp, 28h ;~ 2FE6:078F
cs=0x2fe6;eip=0x000792; 	X(PUSH(di));	// 103648 push    di ;~ 2FE6:0792
cs=0x2fe6;eip=0x000793; 	X(PUSH(si));	// 103649 push    si ;~ 2FE6:0793
cs=0x2fe6;eip=0x000794; 	T(CMP(*(dw*)((&unk_571e3)), 0));	// 103650 cmp     word ptr unk_571E3, 0 ;~ 2FE6:0794
cs=0x2fe6;eip=0x000799; 	R(JZ(loc_3ebdf));	// 103651 jz      short loc_3EBDF ;~ 2FE6:0799
cs=0x2fe6;eip=0x00079b; 	X(PUSH(cs));	// 103652 push    cs ;~ 2FE6:079B
cs=0x2fe6;eip=0x00079c; 	R(CALL(sub_3ee5b,0));	// 103653 call    near ptr sub_3EE5B ;~ 2FE6:079C
loc_3ebdf:
	// 11012 
cs=0x2fe6;eip=0x00079f; 	X(MOV(*(dw*)((&unk_571e7)), 0));	// 103656 mov     word ptr unk_571E7, 0 ;~ 2FE6:079F
cs=0x2fe6;eip=0x0007a5; 	T(MOV(ax, 0x1C));	// 103657 mov     ax, 1Ch ;~ 2FE6:07A5
cs=0x2fe6;eip=0x0007a8; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 103658 mul     [bp+arg_0] ;~ 2FE6:07A8
cs=0x2fe6;eip=0x0007ab; 	T(MOV(si, ax));	// 103659 mov     si, ax ;~ 2FE6:07AB
cs=0x2fe6;eip=0x0007ad; 	T(LES(bx, *(dd*)((&unk_571d0))));	// 103660 les     bx, dword ptr unk_571D0 ;~ 2FE6:07AD
cs=0x2fe6;eip=0x0007b1; 	T(MOV(al, *(raddr(es,bx+si+0x1B))));	// 103661 mov     al, es:[bx+si+1Bh] ;~ 2FE6:07B1
cs=0x2fe6;eip=0x0007b5; 	X(MOV(*(raddr(ss,bp+var_1c)), al));	// 103662 mov     [bp+var_1C], al ;~ 2FE6:07B5
cs=0x2fe6;eip=0x0007b8; 	T(OR(al, al));	// 103663 or      al, al ;~ 2FE6:07B8
cs=0x2fe6;eip=0x0007ba; 	R(JZ(loc_3ec09));	// 103664 jz      short loc_3EC09 ;~ 2FE6:07BA
cs=0x2fe6;eip=0x0007bc; 	X(MOV(*(raddr(ss,bp+var_16)), al));	// 103665 mov     [bp+var_16], al ;~ 2FE6:07BC
cs=0x2fe6;eip=0x0007bf; 	X(MOV(*(raddr(ss,bp+var_15)), 0x3A));	// 103666 mov     [bp+var_15], 3Ah ; ':' ;~ 2FE6:07BF
cs=0x2fe6;eip=0x0007c3; 	X(MOV(*(raddr(ss,bp+var_14)), 0));	// 103667 mov     [bp+var_14], 0 ;~ 2FE6:07C3
cs=0x2fe6;eip=0x0007c7; 	R(JMP(loc_3ec0d));	// 103668 jmp     short loc_3EC0D ;~ 2FE6:07C7
loc_3ec09:
	// 11013 
cs=0x2fe6;eip=0x0007c9; 	X(MOV(*(raddr(ss,bp+var_16)), 0));	// 103672 mov     [bp+var_16], 0 ;~ 2FE6:07C9
loc_3ec0d:
	// 11014 
cs=0x2fe6;eip=0x0007cd; 	T(MOV(ax, 0x1C));	// 103675 mov     ax, 1Ch ;~ 2FE6:07CD
cs=0x2fe6;eip=0x0007d0; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 103676 mul     [bp+arg_0] ;~ 2FE6:07D0
cs=0x2fe6;eip=0x0007d3; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), ax));	// 103677 mov     [bp+var_20], ax ;~ 2FE6:07D3
cs=0x2fe6;eip=0x0007d6; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 103678 mov     [bp+var_22], ax ;~ 2FE6:07D6
cs=0x2fe6;eip=0x0007d9; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), ax));	// 103679 mov     [bp+var_24], ax ;~ 2FE6:07D9
loc_3ec1c:
	// 11015 
cs=0x2fe6;eip=0x0007dc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_24))));	// 103683 mov     bx, [bp+var_24] ;~ 2FE6:07DC
cs=0x2fe6;eip=0x0007df; 	T(ADD(bx, *(dw*)((&unk_571d0))));	// 103684 add     bx, word ptr unk_571D0 ;~ 2FE6:07DF
cs=0x2fe6;eip=0x0007e3; 	T(MOV(cx, *(dw*)((&unk_571d2))));	// 103685 mov     cx, word ptr unk_571D2 ;~ 2FE6:07E3
cs=0x2fe6;eip=0x0007e7; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_28))), bx));	// 103686 mov     word ptr [bp+var_28], bx ;~ 2FE6:07E7
cs=0x2fe6;eip=0x0007ea; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_28+2))), cx));	// 103687 mov     word ptr [bp+var_28+2], cx ;~ 2FE6:07EA
cs=0x2fe6;eip=0x0007ed; 	X(PUSH(si));	// 103688 push    si ;~ 2FE6:07ED
cs=0x2fe6;eip=0x0007ee; 	T(si = bp+var_16);	// 103689 lea     si, [bp+var_16] ;~ 2FE6:07EE
cs=0x2fe6;eip=0x0007f1; 	T(LES(di, *(dd*)(raddr(ss,bp+var_28))));	// 103690 les     di, [bp+var_28] ;~ 2FE6:07F1
cs=0x2fe6;eip=0x0007f4; 	T(MOV(cx, 0x0FFFF));	// 103691 mov     cx, 0FFFFh ;~ 2FE6:07F4
cs=0x2fe6;eip=0x0007f7; 	T(XOR(ax, ax));	// 103692 xor     ax, ax ;~ 2FE6:07F7
	// 103693 repne scasb ;~ 2FE6:07F9
cs=0x2fe6;eip=0x0007f9; 	T(	REPNE SCASB);	// 103693 repne scasb ;~ 2FE6:07F9
cs=0x2fe6;eip=0x0007fb; 	T(NOT(cx));	// 103694 not     cx ;~ 2FE6:07FB
cs=0x2fe6;eip=0x0007fd; 	T(SUB(di, cx));	// 103695 sub     di, cx ;~ 2FE6:07FD
cs=0x2fe6;eip=0x0007ff; 	T(MOV(bx, cx));	// 103696 mov     bx, cx ;~ 2FE6:07FF
cs=0x2fe6;eip=0x000801; 	T(XCHG(di, si));	// 103697 xchg    di, si ;~ 2FE6:0801
cs=0x2fe6;eip=0x000803; 	T(MOV(dx, ds));	// 103698 mov     dx, ds ;~ 2FE6:0803
cs=0x2fe6;eip=0x000805; 	X(PUSH(es));	// 103699 push    es ;~ 2FE6:0805
cs=0x2fe6;eip=0x000806; 	T(MOV(es, dx));	// 103700 mov     es, dx ;~ 2FE6:0806
cs=0x2fe6;eip=0x000808; 	X(POP(ds));	// 103702 pop     ds ;~ 2FE6:0808
cs=0x2fe6;eip=0x000809; 	T(MOV(cx, 0x0FFFF));	// 103703 mov     cx, 0FFFFh ;~ 2FE6:0809
	// 103704 repne scasb ;~ 2FE6:080C
cs=0x2fe6;eip=0x00080c; 	T(	REPNE SCASB);	// 103704 repne scasb ;~ 2FE6:080C
cs=0x2fe6;eip=0x00080e; 	T(DEC(di));	// 103705 dec     di ;~ 2FE6:080E
cs=0x2fe6;eip=0x00080f; 	T(MOV(cx, bx));	// 103706 mov     cx, bx ;~ 2FE6:080F
cs=0x2fe6;eip=0x000811; 	T(SHR(cx, 1));	// 103707 shr     cx, 1 ;~ 2FE6:0811
	// 103708 repne movsw ;~ 2FE6:0813
cs=0x2fe6;eip=0x000813; 	X(	REPNE MOVSW);	// 103708 repne movsw ;~ 2FE6:0813
cs=0x2fe6;eip=0x000815; 	T(ADC(cx, cx));	// 103709 adc     cx, cx ;~ 2FE6:0815
	// 103710 repne movsb ;~ 2FE6:0817
cs=0x2fe6;eip=0x000817; 	X(	REPNE MOVSB);	// 103710 repne movsb ;~ 2FE6:0817
cs=0x2fe6;eip=0x000819; 	T(MOV(ds, dx));	// 103711 mov     ds, dx ;~ 2FE6:0819
cs=0x2fe6;eip=0x00081b; 	X(POP(si));	// 103712 pop     si ;~ 2FE6:081B
cs=0x2fe6;eip=0x00081c; 	X(MOV(*(dw*)((&unk_571e7)), 0));	// 103713 mov     word ptr unk_571E7, 0 ;~ 2FE6:081C
cs=0x2fe6;eip=0x000822; 	T(ax = bp+var_16);	// 103714 lea     ax, [bp+var_16] ;~ 2FE6:0822
cs=0x2fe6;eip=0x000825; 	X(PUSH(ax));	// 103715 push    ax ;~ 2FE6:0825
cs=0x2fe6;eip=0x000826; 	T(SUB(ax, ax));	// 103716 sub     ax, ax ;~ 2FE6:0826
cs=0x2fe6;eip=0x000828; 	X(PUSH(ax));	// 103717 push    ax ;~ 2FE6:0828
cs=0x2fe6;eip=0x000829; 	R(CALLF(sub_30b47,0));	// 103718 call    sub_30B47 ;~ 2FE6:0829
cs=0x2fe6;eip=0x00082e; 	T(MOV(si, ax));	// 103719 mov     si, ax ;~ 2FE6:082E
cs=0x2fe6;eip=0x000830; 	T(CMP(si, 0x0FFFF));	// 103720 cmp     si, 0FFFFh ;~ 2FE6:0830
cs=0x2fe6;eip=0x000833; 	R(JZ(loc_3ec7f));	// 103721 jz      short loc_3EC7F ;~ 2FE6:0833
cs=0x2fe6;eip=0x000835; 	T(CMP(*(dw*)((&unk_571e7)), 0));	// 103722 cmp     word ptr unk_571E7, 0 ;~ 2FE6:0835
cs=0x2fe6;eip=0x00083a; 	R(JNZ(loc_3ec7f));	// 103723 jnz     short loc_3EC7F ;~ 2FE6:083A
cs=0x2fe6;eip=0x00083c; 	R(JMP(loc_3ed0c));	// 103724 jmp     loc_3ED0C ;~ 2FE6:083C
loc_3ec7f:
	// 11016 
cs=0x2fe6;eip=0x00083f; 	X(MOV(*(dw*)((&unk_571e7)), 0));	// 103729 mov     word ptr unk_571E7, 0 ;~ 2FE6:083F
cs=0x2fe6;eip=0x000845; 	X(MOV(*(raddr(ss,bp+var_18)), 0x41));	// 103730 mov     [bp+var_18], 41h ; 'A' ;~ 2FE6:0845
cs=0x2fe6;eip=0x000849; 	T(MOV(al, unk_571c5));	// 103731 mov     al, byte ptr unk_571C5 ;~ 2FE6:0849
cs=0x2fe6;eip=0x00084c; 	T(SUB(ah, ah));	// 103732 sub     ah, ah ;~ 2FE6:084C
cs=0x2fe6;eip=0x00084e; 	T(ADD(ax, 0x41));	// 103733 add     ax, 41h ; 'A' ;~ 2FE6:084E
cs=0x2fe6;eip=0x000851; 	T(CMP(ax, 0x41));	// 103734 cmp     ax, 41h ; 'A' ;~ 2FE6:0851
cs=0x2fe6;eip=0x000854; 	R(JBE(loc_3ed0c));	// 103735 jbe     short loc_3ED0C ;~ 2FE6:0854
cs=0x2fe6;eip=0x000856; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_22))));	// 103736 mov     di, [bp+var_22] ;~ 2FE6:0856
loc_3ec99:
	// 11017 
cs=0x2fe6;eip=0x000859; 	X(MOV(*(dw*)((&unk_571e7)), 0));	// 103739 mov     word ptr unk_571E7, 0 ;~ 2FE6:0859
cs=0x2fe6;eip=0x00085f; 	T(MOV(al, *(raddr(ss,bp+var_18))));	// 103740 mov     al, [bp+var_18] ;~ 2FE6:085F
cs=0x2fe6;eip=0x000862; 	X(MOV(*(raddr(ss,bp+var_16)), al));	// 103741 mov     [bp+var_16], al ;~ 2FE6:0862
cs=0x2fe6;eip=0x000865; 	X(MOV(*(raddr(ss,bp+var_15)), 0x3A));	// 103742 mov     [bp+var_15], 3Ah ; ':' ;~ 2FE6:0865
cs=0x2fe6;eip=0x000869; 	X(MOV(*(raddr(ss,bp+var_14)), 0));	// 103743 mov     [bp+var_14], 0 ;~ 2FE6:0869
cs=0x2fe6;eip=0x00086d; 	T(MOV(bx, *(dw*)((&unk_571d0))));	// 103744 mov     bx, word ptr unk_571D0 ;~ 2FE6:086D
cs=0x2fe6;eip=0x000871; 	T(MOV(cx, *(dw*)((&unk_571d2))));	// 103745 mov     cx, word ptr unk_571D2 ;~ 2FE6:0871
cs=0x2fe6;eip=0x000875; 	T(ADD(bx, di));	// 103746 add     bx, di ;~ 2FE6:0875
cs=0x2fe6;eip=0x000877; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_28))), bx));	// 103747 mov     word ptr [bp+var_28], bx ;~ 2FE6:0877
cs=0x2fe6;eip=0x00087a; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_28+2))), cx));	// 103748 mov     word ptr [bp+var_28+2], cx ;~ 2FE6:087A
cs=0x2fe6;eip=0x00087d; 	X(PUSH(di));	// 103749 push    di ;~ 2FE6:087D
cs=0x2fe6;eip=0x00087e; 	X(PUSH(si));	// 103750 push    si ;~ 2FE6:087E
cs=0x2fe6;eip=0x00087f; 	T(si = bp+var_16);	// 103751 lea     si, [bp+var_16] ;~ 2FE6:087F
cs=0x2fe6;eip=0x000882; 	T(LES(di, *(dd*)(raddr(ss,bp+var_28))));	// 103752 les     di, [bp+var_28] ;~ 2FE6:0882
cs=0x2fe6;eip=0x000885; 	T(MOV(cx, 0x0FFFF));	// 103754 mov     cx, 0FFFFh ;~ 2FE6:0885
cs=0x2fe6;eip=0x000888; 	T(XOR(ax, ax));	// 103755 xor     ax, ax ;~ 2FE6:0888
	// 103756 repne scasb ;~ 2FE6:088A
cs=0x2fe6;eip=0x00088a; 	T(	REPNE SCASB);	// 103756 repne scasb ;~ 2FE6:088A
cs=0x2fe6;eip=0x00088c; 	T(NOT(cx));	// 103757 not     cx ;~ 2FE6:088C
cs=0x2fe6;eip=0x00088e; 	T(SUB(di, cx));	// 103758 sub     di, cx ;~ 2FE6:088E
cs=0x2fe6;eip=0x000890; 	T(MOV(bx, cx));	// 103759 mov     bx, cx ;~ 2FE6:0890
cs=0x2fe6;eip=0x000892; 	T(XCHG(di, si));	// 103760 xchg    di, si ;~ 2FE6:0892
cs=0x2fe6;eip=0x000894; 	T(MOV(dx, ds));	// 103761 mov     dx, ds ;~ 2FE6:0894
cs=0x2fe6;eip=0x000896; 	X(PUSH(es));	// 103762 push    es ;~ 2FE6:0896
cs=0x2fe6;eip=0x000897; 	T(MOV(es, dx));	// 103763 mov     es, dx ;~ 2FE6:0897
cs=0x2fe6;eip=0x000899; 	X(POP(ds));	// 103765 pop     ds ;~ 2FE6:0899
cs=0x2fe6;eip=0x00089a; 	T(MOV(cx, 0x0FFFF));	// 103766 mov     cx, 0FFFFh ;~ 2FE6:089A
	// 103767 repne scasb ;~ 2FE6:089D
cs=0x2fe6;eip=0x00089d; 	T(	REPNE SCASB);	// 103767 repne scasb ;~ 2FE6:089D
cs=0x2fe6;eip=0x00089f; 	T(DEC(di));	// 103768 dec     di ;~ 2FE6:089F
cs=0x2fe6;eip=0x0008a0; 	T(MOV(cx, bx));	// 103769 mov     cx, bx ;~ 2FE6:08A0
cs=0x2fe6;eip=0x0008a2; 	T(SHR(cx, 1));	// 103770 shr     cx, 1 ;~ 2FE6:08A2
	// 103771 repne movsw ;~ 2FE6:08A4
cs=0x2fe6;eip=0x0008a4; 	X(	REPNE MOVSW);	// 103771 repne movsw ;~ 2FE6:08A4
cs=0x2fe6;eip=0x0008a6; 	T(ADC(cx, cx));	// 103772 adc     cx, cx ;~ 2FE6:08A6
	// 103773 repne movsb ;~ 2FE6:08A8
cs=0x2fe6;eip=0x0008a8; 	X(	REPNE MOVSB);	// 103773 repne movsb ;~ 2FE6:08A8
cs=0x2fe6;eip=0x0008aa; 	T(MOV(ds, dx));	// 103774 mov     ds, dx ;~ 2FE6:08AA
cs=0x2fe6;eip=0x0008ac; 	X(POP(si));	// 103775 pop     si ;~ 2FE6:08AC
cs=0x2fe6;eip=0x0008ad; 	X(POP(di));	// 103776 pop     di ;~ 2FE6:08AD
cs=0x2fe6;eip=0x0008ae; 	T(ax = bp+var_16);	// 103777 lea     ax, [bp+var_16] ;~ 2FE6:08AE
cs=0x2fe6;eip=0x0008b1; 	X(PUSH(ax));	// 103778 push    ax ;~ 2FE6:08B1
cs=0x2fe6;eip=0x0008b2; 	T(SUB(ax, ax));	// 103779 sub     ax, ax ;~ 2FE6:08B2
cs=0x2fe6;eip=0x0008b4; 	X(PUSH(ax));	// 103780 push    ax ;~ 2FE6:08B4
cs=0x2fe6;eip=0x0008b5; 	R(CALLF(sub_30b47,0));	// 103781 call    sub_30B47 ;~ 2FE6:08B5
cs=0x2fe6;eip=0x0008ba; 	T(MOV(si, ax));	// 103782 mov     si, ax ;~ 2FE6:08BA
cs=0x2fe6;eip=0x0008bc; 	T(CMP(si, 0x0FFFF));	// 103783 cmp     si, 0FFFFh ;~ 2FE6:08BC
cs=0x2fe6;eip=0x0008bf; 	R(JZ(loc_3ed3d));	// 103784 jz      short loc_3ED3D ;~ 2FE6:08BF
cs=0x2fe6;eip=0x0008c1; 	T(LES(bx, *(dd*)((&unk_571d0))));	// 103785 les     bx, dword ptr unk_571D0 ;~ 2FE6:08C1
cs=0x2fe6;eip=0x0008c5; 	T(MOV(al, *(raddr(ss,bp+var_18))));	// 103787 mov     al, [bp+var_18] ;~ 2FE6:08C5
cs=0x2fe6;eip=0x0008c8; 	X(MOV(*(raddr(es,bx+di+0x1B)), al));	// 103788 mov     es:[bx+di+1Bh], al ;~ 2FE6:08C8
loc_3ed0c:
	// 11018 
cs=0x2fe6;eip=0x0008cc; 	T(CMP(si, 0x0FFFF));	// 103792 cmp     si, 0FFFFh ;~ 2FE6:08CC
cs=0x2fe6;eip=0x0008cf; 	R(JZ(loc_3ed18));	// 103793 jz      short loc_3ED18 ;~ 2FE6:08CF
cs=0x2fe6;eip=0x0008d1; 	T(CMP(*(dw*)((&unk_571e7)), 0));	// 103794 cmp     word ptr unk_571E7, 0 ;~ 2FE6:08D1
cs=0x2fe6;eip=0x0008d6; 	R(JZ(loc_3ed68));	// 103795 jz      short loc_3ED68 ;~ 2FE6:08D6
loc_3ed18:
	// 11019 
cs=0x2fe6;eip=0x0008d8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_20))));	// 103798 mov     ax, [bp+var_20] ;~ 2FE6:08D8
cs=0x2fe6;eip=0x0008db; 	T(ADD(ax, *(dw*)((&unk_571d0))));	// 103799 add     ax, word ptr unk_571D0 ;~ 2FE6:08DB
cs=0x2fe6;eip=0x0008df; 	T(MOV(dx, *(dw*)((&unk_571d2))));	// 103800 mov     dx, word ptr unk_571D2 ;~ 2FE6:08DF
cs=0x2fe6;eip=0x0008e3; 	T(ADD(ax, 0x0D));	// 103801 add     ax, 0Dh ;~ 2FE6:08E3
cs=0x2fe6;eip=0x0008e6; 	X(PUSH(dx));	// 103802 push    dx ;~ 2FE6:08E6
cs=0x2fe6;eip=0x0008e7; 	X(PUSH(ax));	// 103803 push    ax ;~ 2FE6:08E7
cs=0x2fe6;eip=0x0008e8; 	R(CALLF(sub_314f5,0));	// 103804 call    sub_314F5 ;~ 2FE6:08E8
cs=0x2fe6;eip=0x0008ed; 	X(MOV(*(raddr(ss,bp+var_16)), al));	// 103805 mov     [bp+var_16], al ;~ 2FE6:08ED
cs=0x2fe6;eip=0x0008f0; 	T(CMP(al, 0x0FF));	// 103806 cmp     al, 0FFh ;~ 2FE6:08F0
cs=0x2fe6;eip=0x0008f2; 	R(JNZ(loc_3ed54));	// 103807 jnz     short loc_3ED54 ;~ 2FE6:08F2
cs=0x2fe6;eip=0x0008f4; 	T(MOV(ax, 0x0FFFF));	// 103808 mov     ax, 0FFFFh ;~ 2FE6:08F4
cs=0x2fe6;eip=0x0008f7; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), si));	// 103809 mov     [bp+var_1A], si ;~ 2FE6:08F7
cs=0x2fe6;eip=0x0008fa; 	R(JMP(loc_3ee53));	// 103810 jmp     loc_3EE53 ;~ 2FE6:08FA
loc_3ed3d:
	// 11020 
cs=0x2fe6;eip=0x0008fd; 	X(INC(*(raddr(ss,bp+var_18))));	// 103814 inc     [bp+var_18] ;~ 2FE6:08FD
cs=0x2fe6;eip=0x000900; 	T(MOV(al, *(raddr(ss,bp+var_18))));	// 103815 mov     al, [bp+var_18] ;~ 2FE6:0900
cs=0x2fe6;eip=0x000903; 	T(CBW);	// 103816 cbw ;~ 2FE6:0903
cs=0x2fe6;eip=0x000904; 	T(MOV(cl, unk_571c5));	// 103817 mov     cl, byte ptr unk_571C5 ;~ 2FE6:0904
cs=0x2fe6;eip=0x000908; 	T(SUB(ch, ch));	// 103818 sub     ch, ch ;~ 2FE6:0908
cs=0x2fe6;eip=0x00090a; 	T(ADD(cx, 0x41));	// 103819 add     cx, 41h ; 'A' ;~ 2FE6:090A
cs=0x2fe6;eip=0x00090d; 	T(CMP(ax, cx));	// 103820 cmp     ax, cx ;~ 2FE6:090D
cs=0x2fe6;eip=0x00090f; 	R(JNC(loc_3ed0c));	// 103821 jnb     short loc_3ED0C ;~ 2FE6:090F
cs=0x2fe6;eip=0x000911; 	R(JMP(loc_3ec99));	// 103822 jmp     loc_3EC99 ;~ 2FE6:0911
loc_3ed54:
	// 11021 
cs=0x2fe6;eip=0x000914; 	T(CMP(*(raddr(ss,bp+var_16)), 0));	// 103826 cmp     [bp+var_16], 0 ;~ 2FE6:0914
cs=0x2fe6;eip=0x000918; 	R(JNZ(loc_3ed5d));	// 103827 jnz     short loc_3ED5D ;~ 2FE6:0918
cs=0x2fe6;eip=0x00091a; 	R(JMP(loc_3ec1c));	// 103828 jmp     loc_3EC1C ;~ 2FE6:091A
loc_3ed5d:
	// 11022 
cs=0x2fe6;eip=0x00091d; 	X(MOV(*(raddr(ss,bp+var_15)), 0x3A));	// 103832 mov     [bp+var_15], 3Ah ; ':' ;~ 2FE6:091D
cs=0x2fe6;eip=0x000921; 	X(MOV(*(raddr(ss,bp+var_14)), 0));	// 103833 mov     [bp+var_14], 0 ;~ 2FE6:0921
cs=0x2fe6;eip=0x000925; 	R(JMP(loc_3ec1c));	// 103834 jmp     loc_3EC1C ;~ 2FE6:0925
loc_3ed68:
	// 11023 
cs=0x2fe6;eip=0x000928; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), si));	// 103838 mov     [bp+var_1A], si ;~ 2FE6:0928
cs=0x2fe6;eip=0x00092b; 	T(CMP(*(raddr(ss,bp+var_15)), 0x3A));	// 103839 cmp     [bp+var_15], 3Ah ; ':' ;~ 2FE6:092B
cs=0x2fe6;eip=0x00092f; 	R(JNZ(loc_3ed84));	// 103840 jnz     short loc_3ED84 ;~ 2FE6:092F
cs=0x2fe6;eip=0x000931; 	T(MOV(ax, 0x1C));	// 103841 mov     ax, 1Ch ;~ 2FE6:0931
cs=0x2fe6;eip=0x000934; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 103842 mul     [bp+arg_0] ;~ 2FE6:0934
cs=0x2fe6;eip=0x000937; 	T(MOV(si, ax));	// 103843 mov     si, ax ;~ 2FE6:0937
cs=0x2fe6;eip=0x000939; 	T(LES(bx, *(dd*)((&unk_571d0))));	// 103844 les     bx, dword ptr unk_571D0 ;~ 2FE6:0939
cs=0x2fe6;eip=0x00093d; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 103845 mov     al, [bp+var_16] ;~ 2FE6:093D
cs=0x2fe6;eip=0x000940; 	X(MOV(*(raddr(es,bx+si+0x1B)), al));	// 103846 mov     es:[bx+si+1Bh], al ;~ 2FE6:0940
loc_3ed84:
	// 11024 
cs=0x2fe6;eip=0x000944; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 103849 mov     ax, [bp+var_1A] ;~ 2FE6:0944
cs=0x2fe6;eip=0x000947; 	X(MOV(*(dw*)((&unk_571e3)), ax));	// 103850 mov     word ptr unk_571E3, ax ;~ 2FE6:0947
cs=0x2fe6;eip=0x00094a; 	X(PUSH(ax));	// 103851 push    ax ;~ 2FE6:094A
cs=0x2fe6;eip=0x00094b; 	T(ax = bp+var_6);	// 103852 lea     ax, [bp+var_6] ;~ 2FE6:094B
cs=0x2fe6;eip=0x00094e; 	X(PUSH(ss));	// 103853 push    ss ;~ 2FE6:094E
cs=0x2fe6;eip=0x00094f; 	X(PUSH(ax));	// 103854 push    ax ;~ 2FE6:094F
cs=0x2fe6;eip=0x000950; 	T(MOV(ax, 5));	// 103855 mov     ax, 5 ;~ 2FE6:0950
cs=0x2fe6;eip=0x000953; 	X(PUSH(ax));	// 103856 push    ax ;~ 2FE6:0953
cs=0x2fe6;eip=0x000954; 	R(CALLF(sub_30b8e,0));	// 103857 call    sub_30B8E ;~ 2FE6:0954
cs=0x2fe6;eip=0x000959; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), ax));	// 103858 mov     [bp+var_1A], ax ;~ 2FE6:0959
cs=0x2fe6;eip=0x00095c; 	X(MOV(*(raddr(ss,bp+var_1)), 0));	// 103859 mov     [bp+var_1], 0 ;~ 2FE6:095C
cs=0x2fe6;eip=0x000960; 	T(ax = bp+var_6);	// 103860 lea     ax, [bp+var_6] ;~ 2FE6:0960
cs=0x2fe6;eip=0x000963; 	X(PUSH(ss));	// 103861 push    ss ;~ 2FE6:0963
cs=0x2fe6;eip=0x000964; 	X(PUSH(ax));	// 103862 push    ax ;~ 2FE6:0964
cs=0x2fe6;eip=0x000965; 	T(MOV(ax, 0x36F5));	// 103863 mov     ax, 36F5h ;~ 2FE6:0965
cs=0x2fe6;eip=0x000968; 	X(PUSH(ds));	// 103864 push    ds ;~ 2FE6:0968
cs=0x2fe6;eip=0x000969; 	X(PUSH(ax));	// 103865 push    ax ;~ 2FE6:0969
cs=0x2fe6;eip=0x00096a; 	R(CALLF(sub_3f1c0,0));	// 103866 call    sub_3F1C0 ;~ 2FE6:096A
cs=0x2fe6;eip=0x00096f; 	T(OR(ax, ax));	// 103867 or      ax, ax ;~ 2FE6:096F
cs=0x2fe6;eip=0x000971; 	R(JNZ(loc_3edb9));	// 103868 jnz     short loc_3EDB9 ;~ 2FE6:0971
cs=0x2fe6;eip=0x000973; 	T(CMP(*(dw*)(raddr(ss,bp+var_1a)), 0x0FFFF));	// 103869 cmp     [bp+var_1A], 0FFFFh ;~ 2FE6:0973
cs=0x2fe6;eip=0x000977; 	R(JNZ(loc_3edce));	// 103870 jnz     short loc_3EDCE ;~ 2FE6:0977
loc_3edb9:
	// 11025 
cs=0x2fe6;eip=0x000979; 	X(PUSH(*(dw*)((&unk_571e3))));	// 103874 push    word ptr unk_571E3 ;~ 2FE6:0979
cs=0x2fe6;eip=0x00097d; 	R(CALLF(sub_30b72,0));	// 103875 call    sub_30B72 ;~ 2FE6:097D
cs=0x2fe6;eip=0x000982; 	X(MOV(*(dw*)((&unk_571e3)), 0));	// 103876 mov     word ptr unk_571E3, 0 ;~ 2FE6:0982
cs=0x2fe6;eip=0x000988; 	T(MOV(ax, 0x0FFFF));	// 103877 mov     ax, 0FFFFh ;~ 2FE6:0988
cs=0x2fe6;eip=0x00098b; 	R(JMP(loc_3ee53));	// 103878 jmp     loc_3EE53 ;~ 2FE6:098B
loc_3edce:
	// 11026 
cs=0x2fe6;eip=0x00098e; 	X(PUSH(*(dw*)((&unk_571e3))));	// 103882 push    word ptr unk_571E3 ;~ 2FE6:098E
cs=0x2fe6;eip=0x000992; 	T(MOV(ax, 0x0F835));	// 103883 mov     ax, 0F835h ;~ 2FE6:0992
cs=0x2fe6;eip=0x000995; 	X(PUSH(ds));	// 103884 push    ds ;~ 2FE6:0995
cs=0x2fe6;eip=0x000996; 	X(PUSH(ax));	// 103885 push    ax ;~ 2FE6:0996
cs=0x2fe6;eip=0x000997; 	T(MOV(ax, 2));	// 103886 mov     ax, 2 ;~ 2FE6:0997
cs=0x2fe6;eip=0x00099a; 	X(PUSH(ax));	// 103887 push    ax ;~ 2FE6:099A
cs=0x2fe6;eip=0x00099b; 	R(CALLF(sub_30b8e,0));	// 103888 call    sub_30B8E ;~ 2FE6:099B
cs=0x2fe6;eip=0x0009a0; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), ax));	// 103889 mov     [bp+var_1A], ax ;~ 2FE6:09A0
cs=0x2fe6;eip=0x0009a3; 	T(CMP(ax, 0x0FFFF));	// 103890 cmp     ax, 0FFFFh ;~ 2FE6:09A3
cs=0x2fe6;eip=0x0009a6; 	R(JZ(loc_3edb9));	// 103891 jz      short loc_3EDB9 ;~ 2FE6:09A6
cs=0x2fe6;eip=0x0009a8; 	T(CMP(*(dw*)((&unk_571e5)), 0));	// 103892 cmp     word ptr unk_571E5, 0 ;~ 2FE6:09A8
cs=0x2fe6;eip=0x0009ad; 	R(JZ(loc_3edb9));	// 103893 jz      short loc_3EDB9 ;~ 2FE6:09AD
cs=0x2fe6;eip=0x0009af; 	X(PUSH(*(dw*)((&unk_571e3))));	// 103894 push    word ptr unk_571E3 ;~ 2FE6:09AF
cs=0x2fe6;eip=0x0009b3; 	X(PUSH(*(dw*)((&unk_571c8))));	// 103895 push    word ptr unk_571C8 ;~ 2FE6:09B3
cs=0x2fe6;eip=0x0009b7; 	X(PUSH(*(dw*)((&unk_571c6))));	// 103896 push    word ptr unk_571C6 ;~ 2FE6:09B7
cs=0x2fe6;eip=0x0009bb; 	T(MOV(ax, 0x12));	// 103897 mov     ax, 12h ;~ 2FE6:09BB
cs=0x2fe6;eip=0x0009be; 	X(MUL1_2(*(dw*)((&unk_571e5))));	// 103898 mul     word ptr unk_571E5 ;~ 2FE6:09BE
cs=0x2fe6;eip=0x0009c2; 	T(ADD(ax, 0x12));	// 103899 add     ax, 12h ;~ 2FE6:09C2
cs=0x2fe6;eip=0x0009c5; 	X(PUSH(ax));	// 103900 push    ax ;~ 2FE6:09C5
cs=0x2fe6;eip=0x0009c6; 	R(CALLF(sub_30b8e,0));	// 103901 call    sub_30B8E ;~ 2FE6:09C6
cs=0x2fe6;eip=0x0009cb; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), ax));	// 103902 mov     [bp+var_1A], ax ;~ 2FE6:09CB
cs=0x2fe6;eip=0x0009ce; 	T(CMP(ax, 0x0FFFF));	// 103903 cmp     ax, 0FFFFh ;~ 2FE6:09CE
cs=0x2fe6;eip=0x0009d1; 	R(JZ(loc_3edb9));	// 103904 jz      short loc_3EDB9 ;~ 2FE6:09D1
cs=0x2fe6;eip=0x0009d3; 	T(MOV(ax, 0x1C));	// 103905 mov     ax, 1Ch ;~ 2FE6:09D3
cs=0x2fe6;eip=0x0009d6; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 103906 mul     [bp+arg_0] ;~ 2FE6:09D6
cs=0x2fe6;eip=0x0009d9; 	T(ADD(ax, *(dw*)((&unk_571d0))));	// 103907 add     ax, word ptr unk_571D0 ;~ 2FE6:09D9
cs=0x2fe6;eip=0x0009dd; 	T(MOV(dx, *(dw*)((&unk_571d2))));	// 103908 mov     dx, word ptr unk_571D2 ;~ 2FE6:09DD
cs=0x2fe6;eip=0x0009e1; 	T(MOV(bx, ax));	// 103909 mov     bx, ax ;~ 2FE6:09E1
cs=0x2fe6;eip=0x0009e3; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_28))), bx));	// 103910 mov     word ptr [bp+var_28], bx ;~ 2FE6:09E3
cs=0x2fe6;eip=0x0009e6; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_28+2))), dx));	// 103911 mov     word ptr [bp+var_28+2], dx ;~ 2FE6:09E6
cs=0x2fe6;eip=0x0009e9; 	T(MOV(si, 0x0F826));	// 103912 mov     si, 0F826h ;~ 2FE6:09E9
cs=0x2fe6;eip=0x0009ec; 	T(LES(di, *(dd*)(raddr(ss,bp+var_28))));	// 103913 les     di, [bp+var_28] ;~ 2FE6:09EC
cs=0x2fe6;eip=0x0009ef; 	T(MOV(cx, 0x0FFFF));	// 103914 mov     cx, 0FFFFh ;~ 2FE6:09EF
cs=0x2fe6;eip=0x0009f2; 	T(XOR(ax, ax));	// 103915 xor     ax, ax ;~ 2FE6:09F2
	// 103916 repne scasb ;~ 2FE6:09F4
cs=0x2fe6;eip=0x0009f4; 	T(	REPNE SCASB);	// 103916 repne scasb ;~ 2FE6:09F4
cs=0x2fe6;eip=0x0009f6; 	T(NOT(cx));	// 103917 not     cx ;~ 2FE6:09F6
cs=0x2fe6;eip=0x0009f8; 	T(SUB(di, cx));	// 103918 sub     di, cx ;~ 2FE6:09F8
cs=0x2fe6;eip=0x0009fa; 	T(XCHG(di, si));	// 103919 xchg    di, si ;~ 2FE6:09FA
cs=0x2fe6;eip=0x0009fc; 	T(MOV(dx, ds));	// 103920 mov     dx, ds ;~ 2FE6:09FC
cs=0x2fe6;eip=0x0009fe; 	X(PUSH(es));	// 103921 push    es ;~ 2FE6:09FE
cs=0x2fe6;eip=0x0009ff; 	T(MOV(es, dx));	// 103922 mov     es, dx ;~ 2FE6:09FF
cs=0x2fe6;eip=0x000a01; 	X(POP(ds));	// 103924 pop     ds ;~ 2FE6:0A01
cs=0x2fe6;eip=0x000a02; 	T(SHR(cx, 1));	// 103925 shr     cx, 1 ;~ 2FE6:0A02
	// 103926 repne movsw ;~ 2FE6:0A04
cs=0x2fe6;eip=0x000a04; 	X(	REPNE MOVSW);	// 103926 repne movsw ;~ 2FE6:0A04
cs=0x2fe6;eip=0x000a06; 	T(ADC(cx, cx));	// 103927 adc     cx, cx ;~ 2FE6:0A06
	// 103928 repne movsb ;~ 2FE6:0A08
cs=0x2fe6;eip=0x000a08; 	X(	REPNE MOVSB);	// 103928 repne movsb ;~ 2FE6:0A08
cs=0x2fe6;eip=0x000a0a; 	T(MOV(ds, dx));	// 103929 mov     ds, dx ;~ 2FE6:0A0A
cs=0x2fe6;eip=0x000a0c; 	X(MOV(unk_571e9, 0));	// 103930 mov     byte ptr unk_571E9, 0 ;~ 2FE6:0A0C
cs=0x2fe6;eip=0x000a11; 	T(SUB(ax, ax));	// 103931 sub     ax, ax ;~ 2FE6:0A11
loc_3ee53:
	// 11027 
cs=0x2fe6;eip=0x000a13; 	X(POP(si));	// 103935 pop     si ;~ 2FE6:0A13
cs=0x2fe6;eip=0x000a14; 	X(POP(di));	// 103936 pop     di ;~ 2FE6:0A14
cs=0x2fe6;eip=0x000a15; 	T(MOV(sp, bp));	// 103937 mov     sp, bp ;~ 2FE6:0A15
cs=0x2fe6;eip=0x000a17; 	X(POP(bp));	// 103938 pop     bp ;~ 2FE6:0A17
cs=0x2fe6;eip=0x000a18; 	R(RETF(2));	// 103939 retf    2 ;~ 2FE6:0A18
sub_3ee5b:
	// 103946 
cs=0x2fe6;eip=0x000a1b; 	X(MOV(*(dw*)((&unk_571e7)), 0));	// 103948 mov     word ptr unk_571E7, 0 ;~ 2FE6:0A1B
cs=0x2fe6;eip=0x000a21; 	T(CMP(*(dw*)((&unk_571e3)), 0));	// 103949 cmp     word ptr unk_571E3, 0 ;~ 2FE6:0A21
cs=0x2fe6;eip=0x000a26; 	R(JZ(loc_3ee71));	// 103950 jz      short loc_3EE71 ;~ 2FE6:0A26
cs=0x2fe6;eip=0x000a28; 	X(PUSH(*(dw*)((&unk_571e3))));	// 103951 push    word ptr unk_571E3 ;~ 2FE6:0A28
cs=0x2fe6;eip=0x000a2c; 	R(CALLF(sub_30b72,0));	// 103952 call    sub_30B72 ;~ 2FE6:0A2C
loc_3ee71:
	// 11028 
cs=0x2fe6;eip=0x000a31; 	X(MOV(*(dw*)((&unk_571e3)), 0));	// 103955 mov     word ptr unk_571E3, 0 ;~ 2FE6:0A31
cs=0x2fe6;eip=0x000a37; 	X(MOV(*(dw*)((&unk_571e5)), 0));	// 103956 mov     word ptr unk_571E5, 0 ;~ 2FE6:0A37
cs=0x2fe6;eip=0x000a3d; 	X(MOV(unk_571d6, 0));	// 103957 mov     byte ptr unk_571D6, 0 ;~ 2FE6:0A3D
cs=0x2fe6;eip=0x000a42; 	T(CMP(*(dw*)((&unk_571e7)), 0));	// 103958 cmp     word ptr unk_571E7, 0 ;~ 2FE6:0A42
cs=0x2fe6;eip=0x000a47; 	R(JZ(loc_3ee8e));	// 103959 jz      short loc_3EE8E ;~ 2FE6:0A47
cs=0x2fe6;eip=0x000a49; 	T(MOV(ax, 0x0FFFF));	// 103960 mov     ax, 0FFFFh ;~ 2FE6:0A49
cs=0x2fe6;eip=0x000a4c; 	R(JMP(locret_3ee90));	// 103961 jmp     short locret_3EE90 ;~ 2FE6:0A4C
loc_3ee8e:
	// 11029 
cs=0x2fe6;eip=0x000a4e; 	T(SUB(ax, ax));	// 103965 sub     ax, ax ;~ 2FE6:0A4E
locret_3ee90:
	// 11030 
cs=0x2fe6;eip=0x000a50; 	R(RETF(0));	// 103968 retf ;~ 2FE6:0A50
sub_3ee91:
	// 103976 
#undef var_a
#define var_a -0x0A
	// 103979 var_A           = word ptr -0Ah ;~ 2FE6:0A51
#undef var_8
#define var_8 -8
	// 103980 var_8           = word ptr -8 ;~ 2FE6:0A51
#undef var_6
#define var_6 -6
	// 103981 var_6           = word ptr -6 ;~ 2FE6:0A51
#undef arg_0
#define arg_0 4
	// 103982 arg_0           = word ptr  4 ;~ 2FE6:0A51
cs=0x2fe6;eip=0x000a51; 	X(PUSH(bp));	// 103984 push    bp ;~ 2FE6:0A51
cs=0x2fe6;eip=0x000a52; 	T(MOV(bp, sp));	// 103985 mov     bp, sp ;~ 2FE6:0A52
cs=0x2fe6;eip=0x000a54; 	T(SUB(sp, 0x0A));	// 103986 sub     sp, 0Ah ;~ 2FE6:0A54
cs=0x2fe6;eip=0x000a57; 	X(PUSH(di));	// 103987 push    di ;~ 2FE6:0A57
cs=0x2fe6;eip=0x000a58; 	X(PUSH(si));	// 103988 push    si ;~ 2FE6:0A58
cs=0x2fe6;eip=0x000a59; 	T(SUB(si, si));	// 103989 sub     si, si ;~ 2FE6:0A59
cs=0x2fe6;eip=0x000a5b; 	T(CMP(*(dw*)((&unk_571e5)), si));	// 103990 cmp     word ptr unk_571E5, si ;~ 2FE6:0A5B
cs=0x2fe6;eip=0x000a5f; 	R(JZ(loc_3eedf));	// 103991 jz      short loc_3EEDF ;~ 2FE6:0A5F
cs=0x2fe6;eip=0x000a61; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 103992 mov     ax, [bp+arg_0] ;~ 2FE6:0A61
cs=0x2fe6;eip=0x000a64; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 103993 mov     [bp+var_8], ax ;~ 2FE6:0A64
cs=0x2fe6;eip=0x000a67; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ds));	// 103994 mov     [bp+var_6], ds ;~ 2FE6:0A67
cs=0x2fe6;eip=0x000a6a; 	T(MOV(ax, 0x12));	// 103995 mov     ax, 12h ;~ 2FE6:0A6A
cs=0x2fe6;eip=0x000a6d; 	T(MUL1_2(si));	// 103996 mul     si ;~ 2FE6:0A6D
cs=0x2fe6;eip=0x000a6f; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 103997 mov     [bp+var_A], ax ;~ 2FE6:0A6F
loc_3eeb2:
	// 11031 
cs=0x2fe6;eip=0x000a72; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 104000 push    [bp+var_6] ;~ 2FE6:0A72
cs=0x2fe6;eip=0x000a75; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 104001 push    [bp+var_8] ;~ 2FE6:0A75
cs=0x2fe6;eip=0x000a78; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 104002 mov     ax, [bp+var_A] ;~ 2FE6:0A78
cs=0x2fe6;eip=0x000a7b; 	T(ADD(ax, *(dw*)((&unk_571c6))));	// 104003 add     ax, word ptr unk_571C6 ;~ 2FE6:0A7B
cs=0x2fe6;eip=0x000a7f; 	T(MOV(dx, *(dw*)((&unk_571c8))));	// 104004 mov     dx, word ptr unk_571C8 ;~ 2FE6:0A7F
cs=0x2fe6;eip=0x000a83; 	X(PUSH(dx));	// 104005 push    dx ;~ 2FE6:0A83
cs=0x2fe6;eip=0x000a84; 	X(PUSH(ax));	// 104006 push    ax ;~ 2FE6:0A84
cs=0x2fe6;eip=0x000a85; 	R(CALLF(sub_3f1ec,0));	// 104007 call    sub_3F1EC ;~ 2FE6:0A85
cs=0x2fe6;eip=0x000a8a; 	T(MOV(di, ax));	// 104008 mov     di, ax ;~ 2FE6:0A8A
cs=0x2fe6;eip=0x000a8c; 	T(OR(di, di));	// 104009 or      di, di ;~ 2FE6:0A8C
cs=0x2fe6;eip=0x000a8e; 	R(JNZ(loc_3eed4));	// 104010 jnz     short loc_3EED4 ;~ 2FE6:0A8E
cs=0x2fe6;eip=0x000a90; 	T(MOV(ax, si));	// 104011 mov     ax, si ;~ 2FE6:0A90
cs=0x2fe6;eip=0x000a92; 	R(JMP(loc_3eee2));	// 104012 jmp     short loc_3EEE2 ;~ 2FE6:0A92
loc_3eed4:
	// 11032 
cs=0x2fe6;eip=0x000a94; 	X(ADD(*(dw*)(raddr(ss,bp+var_a)), 0x12));	// 104016 add     [bp+var_A], 12h ;~ 2FE6:0A94
cs=0x2fe6;eip=0x000a98; 	T(INC(si));	// 104017 inc     si ;~ 2FE6:0A98
cs=0x2fe6;eip=0x000a99; 	T(CMP(*(dw*)((&unk_571e5)), si));	// 104018 cmp     word ptr unk_571E5, si ;~ 2FE6:0A99
cs=0x2fe6;eip=0x000a9d; 	R(JA(loc_3eeb2));	// 104019 ja      short loc_3EEB2 ;~ 2FE6:0A9D
loc_3eedf:
	// 11033 
cs=0x2fe6;eip=0x000a9f; 	T(MOV(ax, 0x0FFFF));	// 104022 mov     ax, 0FFFFh ;~ 2FE6:0A9F
loc_3eee2:
	// 11034 
cs=0x2fe6;eip=0x000aa2; 	X(POP(si));	// 104025 pop     si ;~ 2FE6:0AA2
cs=0x2fe6;eip=0x000aa3; 	X(POP(di));	// 104026 pop     di ;~ 2FE6:0AA3
cs=0x2fe6;eip=0x000aa4; 	T(MOV(sp, bp));	// 104027 mov     sp, bp ;~ 2FE6:0AA4
cs=0x2fe6;eip=0x000aa6; 	X(POP(bp));	// 104028 pop     bp ;~ 2FE6:0AA6
cs=0x2fe6;eip=0x000aa7; 	R(RETN(2));	// 104029 retn    2 ;~ 2FE6:0AA7
sub_3eeea:
	// 104037 
#undef var_12
#define var_12 -0x12
	// 104039 var_12          = word ptr -12h ;~ 2FE6:0AAA
#undef var_10
#define var_10 -0x10
	// 104040 var_10          = word ptr -10h ;~ 2FE6:0AAA
#undef var_e
#define var_e -0x0E
	// 104041 var_E           = word ptr -0Eh ;~ 2FE6:0AAA
#undef var_c
#define var_c -0x0C
	// 104042 var_C           = word ptr -0Ch ;~ 2FE6:0AAA
#undef var_a
#define var_a -0x0A
	// 104043 var_A           = word ptr -0Ah ;~ 2FE6:0AAA
#undef var_8
#define var_8 -8
	// 104044 var_8           = word ptr -8 ;~ 2FE6:0AAA
#undef var_6
#define var_6 -6
	// 104045 var_6           = word ptr -6 ;~ 2FE6:0AAA
#undef arg_0
#define arg_0 4
	// 104046 arg_0           = word ptr  4 ;~ 2FE6:0AAA
cs=0x2fe6;eip=0x000aaa; 	X(PUSH(bp));	// 104048 push    bp ;~ 2FE6:0AAA
cs=0x2fe6;eip=0x000aab; 	T(MOV(bp, sp));	// 104049 mov     bp, sp ;~ 2FE6:0AAB
cs=0x2fe6;eip=0x000aad; 	T(SUB(sp, 0x12));	// 104050 sub     sp, 12h ;~ 2FE6:0AAD
cs=0x2fe6;eip=0x000ab0; 	X(PUSH(di));	// 104051 push    di ;~ 2FE6:0AB0
cs=0x2fe6;eip=0x000ab1; 	X(PUSH(si));	// 104052 push    si ;~ 2FE6:0AB1
cs=0x2fe6;eip=0x000ab2; 	T(SUB(si, si));	// 104053 sub     si, si ;~ 2FE6:0AB2
cs=0x2fe6;eip=0x000ab4; 	T(CMP(*(dw*)((&unk_571ce)), si));	// 104054 cmp     word ptr unk_571CE, si ;~ 2FE6:0AB4
cs=0x2fe6;eip=0x000ab8; 	R(JNZ(loc_3eefd));	// 104055 jnz     short loc_3EEFD ;~ 2FE6:0AB8
cs=0x2fe6;eip=0x000aba; 	R(JMP(loc_3ef97));	// 104056 jmp     loc_3EF97 ;~ 2FE6:0ABA
loc_3eefd:
	// 11035 
cs=0x2fe6;eip=0x000abd; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 104060 mov     ax, [bp+arg_0] ;~ 2FE6:0ABD
cs=0x2fe6;eip=0x000ac0; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 104061 mov     [bp+var_8], ax ;~ 2FE6:0AC0
cs=0x2fe6;eip=0x000ac3; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ds));	// 104062 mov     [bp+var_6], ds ;~ 2FE6:0AC3
cs=0x2fe6;eip=0x000ac6; 	T(MOV(dx, ds));	// 104063 mov     dx, ds ;~ 2FE6:0AC6
cs=0x2fe6;eip=0x000ac8; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 104064 mov     [bp+var_C], ax ;~ 2FE6:0AC8
cs=0x2fe6;eip=0x000acb; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), dx));	// 104065 mov     [bp+var_A], dx ;~ 2FE6:0ACB
cs=0x2fe6;eip=0x000ace; 	T(MOV(ax, 0x0E));	// 104066 mov     ax, 0Eh ;~ 2FE6:0ACE
cs=0x2fe6;eip=0x000ad1; 	T(MUL1_2(si));	// 104067 mul     si ;~ 2FE6:0AD1
cs=0x2fe6;eip=0x000ad3; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 104068 mov     [bp+var_E], ax ;~ 2FE6:0AD3
cs=0x2fe6;eip=0x000ad6; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 104069 mov     [bp+var_10], ax ;~ 2FE6:0AD6
cs=0x2fe6;eip=0x000ad9; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 104070 mov     [bp+var_12], ax ;~ 2FE6:0AD9
loc_3ef1c:
	// 11036 
cs=0x2fe6;eip=0x000adc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_e))));	// 104073 mov     bx, [bp+var_E] ;~ 2FE6:0ADC
cs=0x2fe6;eip=0x000adf; 	T(ADD(bx, *(dw*)((&unk_571ca))));	// 104074 add     bx, word ptr unk_571CA ;~ 2FE6:0ADF
cs=0x2fe6;eip=0x000ae3; 	T(MOV(es, *(dw*)((&unk_571cc))));	// 104075 mov     es, word ptr unk_571CC ;~ 2FE6:0AE3
cs=0x2fe6;eip=0x000ae7; 	T(CMP(*(raddr(es,bx+1)), 0x2A));	// 104077 cmp     byte ptr es:[bx+1], 2Ah ; '*' ;~ 2FE6:0AE7
cs=0x2fe6;eip=0x000aec; 	R(JNZ(loc_3ef53));	// 104078 jnz     short loc_3EF53 ;~ 2FE6:0AEC
cs=0x2fe6;eip=0x000aee; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_e))));	// 104079 mov     bx, [bp+var_E] ;~ 2FE6:0AEE
cs=0x2fe6;eip=0x000af1; 	T(ADD(bx, *(dw*)((&unk_571ca))));	// 104080 add     bx, word ptr unk_571CA ;~ 2FE6:0AF1
cs=0x2fe6;eip=0x000af5; 	T(CMP(*(raddr(es,bx+2)), 0x2E));	// 104081 cmp     byte ptr es:[bx+2], 2Eh ; '.' ;~ 2FE6:0AF5
cs=0x2fe6;eip=0x000afa; 	R(JNZ(loc_3ef53));	// 104082 jnz     short loc_3EF53 ;~ 2FE6:0AFA
cs=0x2fe6;eip=0x000afc; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 104083 push    [bp+var_A] ;~ 2FE6:0AFC
cs=0x2fe6;eip=0x000aff; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 104084 push    [bp+var_C] ;~ 2FE6:0AFF
cs=0x2fe6;eip=0x000b02; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 104085 mov     ax, [bp+var_E] ;~ 2FE6:0B02
cs=0x2fe6;eip=0x000b05; 	T(ADD(ax, *(dw*)((&unk_571ca))));	// 104086 add     ax, word ptr unk_571CA ;~ 2FE6:0B05
cs=0x2fe6;eip=0x000b09; 	T(MOV(dx, es));	// 104087 mov     dx, es ;~ 2FE6:0B09
cs=0x2fe6;eip=0x000b0b; 	T(INC(ax));	// 104088 inc     ax ;~ 2FE6:0B0B
cs=0x2fe6;eip=0x000b0c; 	X(PUSH(dx));	// 104089 push    dx ;~ 2FE6:0B0C
cs=0x2fe6;eip=0x000b0d; 	X(PUSH(ax));	// 104090 push    ax ;~ 2FE6:0B0D
cs=0x2fe6;eip=0x000b0e; 	R(CALL(sub_3f14e,0));	// 104091 call    sub_3F14E ;~ 2FE6:0B0E
cs=0x2fe6;eip=0x000b11; 	R(JMP(loc_3ef6c));	// 104092 jmp     short loc_3EF6C ;~ 2FE6:0B11
loc_3ef53:
	// 11037 
cs=0x2fe6;eip=0x000b13; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 104097 push    [bp+var_6] ;~ 2FE6:0B13
cs=0x2fe6;eip=0x000b16; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 104098 push    [bp+var_8] ;~ 2FE6:0B16
cs=0x2fe6;eip=0x000b19; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 104099 mov     ax, [bp+var_10] ;~ 2FE6:0B19
cs=0x2fe6;eip=0x000b1c; 	T(ADD(ax, *(dw*)((&unk_571ca))));	// 104100 add     ax, word ptr unk_571CA ;~ 2FE6:0B1C
cs=0x2fe6;eip=0x000b20; 	T(MOV(dx, *(dw*)((&unk_571cc))));	// 104101 mov     dx, word ptr unk_571CC ;~ 2FE6:0B20
cs=0x2fe6;eip=0x000b24; 	T(INC(ax));	// 104102 inc     ax ;~ 2FE6:0B24
cs=0x2fe6;eip=0x000b25; 	X(PUSH(dx));	// 104103 push    dx ;~ 2FE6:0B25
cs=0x2fe6;eip=0x000b26; 	X(PUSH(ax));	// 104104 push    ax ;~ 2FE6:0B26
cs=0x2fe6;eip=0x000b27; 	R(CALLF(sub_3f1ec,0));	// 104105 call    sub_3F1EC ;~ 2FE6:0B27
loc_3ef6c:
	// 11038 
cs=0x2fe6;eip=0x000b2c; 	T(MOV(di, ax));	// 104108 mov     di, ax ;~ 2FE6:0B2C
cs=0x2fe6;eip=0x000b2e; 	T(OR(di, di));	// 104109 or      di, di ;~ 2FE6:0B2E
cs=0x2fe6;eip=0x000b30; 	R(JNZ(loc_3ef84));	// 104110 jnz     short loc_3EF84 ;~ 2FE6:0B30
cs=0x2fe6;eip=0x000b32; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_12))));	// 104111 mov     bx, [bp+var_12] ;~ 2FE6:0B32
cs=0x2fe6;eip=0x000b35; 	T(ADD(bx, *(dw*)((&unk_571ca))));	// 104112 add     bx, word ptr unk_571CA ;~ 2FE6:0B35
cs=0x2fe6;eip=0x000b39; 	T(MOV(es, *(dw*)((&unk_571cc))));	// 104113 mov     es, word ptr unk_571CC ;~ 2FE6:0B39
cs=0x2fe6;eip=0x000b3d; 	T(MOV(al, *(raddr(es,bx))));	// 104114 mov     al, es:[bx] ;~ 2FE6:0B3D
cs=0x2fe6;eip=0x000b40; 	T(SUB(ah, ah));	// 104115 sub     ah, ah ;~ 2FE6:0B40
cs=0x2fe6;eip=0x000b42; 	R(JMP(loc_3ef9a));	// 104116 jmp     short loc_3EF9A ;~ 2FE6:0B42
loc_3ef84:
	// 11039 
cs=0x2fe6;eip=0x000b44; 	X(ADD(*(dw*)(raddr(ss,bp+var_e)), 0x0E));	// 104120 add     [bp+var_E], 0Eh ;~ 2FE6:0B44
cs=0x2fe6;eip=0x000b48; 	X(ADD(*(dw*)(raddr(ss,bp+var_10)), 0x0E));	// 104121 add     [bp+var_10], 0Eh ;~ 2FE6:0B48
cs=0x2fe6;eip=0x000b4c; 	X(ADD(*(dw*)(raddr(ss,bp+var_12)), 0x0E));	// 104122 add     [bp+var_12], 0Eh ;~ 2FE6:0B4C
cs=0x2fe6;eip=0x000b50; 	T(INC(si));	// 104123 inc     si ;~ 2FE6:0B50
cs=0x2fe6;eip=0x000b51; 	T(CMP(*(dw*)((&unk_571ce)), si));	// 104124 cmp     word ptr unk_571CE, si ;~ 2FE6:0B51
cs=0x2fe6;eip=0x000b55; 	R(JA(loc_3ef1c));	// 104125 ja      short loc_3EF1C ;~ 2FE6:0B55
loc_3ef97:
	// 11040 
cs=0x2fe6;eip=0x000b57; 	T(MOV(ax, 0x0FFFF));	// 104128 mov     ax, 0FFFFh ;~ 2FE6:0B57
loc_3ef9a:
	// 11041 
cs=0x2fe6;eip=0x000b5a; 	X(POP(si));	// 104131 pop     si ;~ 2FE6:0B5A
cs=0x2fe6;eip=0x000b5b; 	X(POP(di));	// 104132 pop     di ;~ 2FE6:0B5B
cs=0x2fe6;eip=0x000b5c; 	T(MOV(sp, bp));	// 104133 mov     sp, bp ;~ 2FE6:0B5C
cs=0x2fe6;eip=0x000b5e; 	X(POP(bp));	// 104134 pop     bp ;~ 2FE6:0B5E
cs=0x2fe6;eip=0x000b5f; 	R(RETN(2));	// 104135 retn    2 ;~ 2FE6:0B5F
sub_3efa2:
	// 104143 
#undef var_a
#define var_a -0x0A
	// 104145 var_A           = word ptr -0Ah ;~ 2FE6:0B62
#undef var_8
#define var_8 -8
	// 104146 var_8           = word ptr -8 ;~ 2FE6:0B62
#undef var_6
#define var_6 -6
	// 104147 var_6           = word ptr -6 ;~ 2FE6:0B62
#undef arg_0
#define arg_0 4
	// 104148 arg_0           = word ptr  4 ;~ 2FE6:0B62
cs=0x2fe6;eip=0x000b62; 	X(PUSH(bp));	// 104150 push    bp ;~ 2FE6:0B62
cs=0x2fe6;eip=0x000b63; 	T(MOV(bp, sp));	// 104151 mov     bp, sp ;~ 2FE6:0B63
cs=0x2fe6;eip=0x000b65; 	T(SUB(sp, 0x0A));	// 104152 sub     sp, 0Ah ;~ 2FE6:0B65
cs=0x2fe6;eip=0x000b68; 	X(PUSH(di));	// 104153 push    di ;~ 2FE6:0B68
cs=0x2fe6;eip=0x000b69; 	X(PUSH(si));	// 104154 push    si ;~ 2FE6:0B69
cs=0x2fe6;eip=0x000b6a; 	T(SUB(si, si));	// 104155 sub     si, si ;~ 2FE6:0B6A
cs=0x2fe6;eip=0x000b6c; 	T(CMP(*(dw*)((&unk_571d4)), si));	// 104156 cmp     word ptr unk_571D4, si ;~ 2FE6:0B6C
cs=0x2fe6;eip=0x000b70; 	R(JZ(loc_3eff0));	// 104157 jz      short loc_3EFF0 ;~ 2FE6:0B70
cs=0x2fe6;eip=0x000b72; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 104158 mov     ax, [bp+arg_0] ;~ 2FE6:0B72
cs=0x2fe6;eip=0x000b75; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 104159 mov     [bp+var_8], ax ;~ 2FE6:0B75
cs=0x2fe6;eip=0x000b78; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ds));	// 104160 mov     [bp+var_6], ds ;~ 2FE6:0B78
cs=0x2fe6;eip=0x000b7b; 	T(MOV(ax, 0x1C));	// 104161 mov     ax, 1Ch ;~ 2FE6:0B7B
cs=0x2fe6;eip=0x000b7e; 	T(MUL1_2(si));	// 104162 mul     si ;~ 2FE6:0B7E
cs=0x2fe6;eip=0x000b80; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 104163 mov     [bp+var_A], ax ;~ 2FE6:0B80
loc_3efc3:
	// 11042 
cs=0x2fe6;eip=0x000b83; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 104166 push    [bp+var_6] ;~ 2FE6:0B83
cs=0x2fe6;eip=0x000b86; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 104167 push    [bp+var_8] ;~ 2FE6:0B86
cs=0x2fe6;eip=0x000b89; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 104168 mov     ax, [bp+var_A] ;~ 2FE6:0B89
cs=0x2fe6;eip=0x000b8c; 	T(ADD(ax, *(dw*)((&unk_571d0))));	// 104169 add     ax, word ptr unk_571D0 ;~ 2FE6:0B8C
cs=0x2fe6;eip=0x000b90; 	T(MOV(dx, *(dw*)((&unk_571d2))));	// 104170 mov     dx, word ptr unk_571D2 ;~ 2FE6:0B90
cs=0x2fe6;eip=0x000b94; 	X(PUSH(dx));	// 104171 push    dx ;~ 2FE6:0B94
cs=0x2fe6;eip=0x000b95; 	X(PUSH(ax));	// 104172 push    ax ;~ 2FE6:0B95
cs=0x2fe6;eip=0x000b96; 	R(CALLF(sub_3f1ec,0));	// 104173 call    sub_3F1EC ;~ 2FE6:0B96
cs=0x2fe6;eip=0x000b9b; 	T(MOV(di, ax));	// 104174 mov     di, ax ;~ 2FE6:0B9B
cs=0x2fe6;eip=0x000b9d; 	T(OR(di, di));	// 104175 or      di, di ;~ 2FE6:0B9D
cs=0x2fe6;eip=0x000b9f; 	R(JNZ(loc_3efe5));	// 104176 jnz     short loc_3EFE5 ;~ 2FE6:0B9F
cs=0x2fe6;eip=0x000ba1; 	T(MOV(ax, si));	// 104177 mov     ax, si ;~ 2FE6:0BA1
cs=0x2fe6;eip=0x000ba3; 	R(JMP(loc_3eff3));	// 104178 jmp     short loc_3EFF3 ;~ 2FE6:0BA3
loc_3efe5:
	// 11043 
cs=0x2fe6;eip=0x000ba5; 	X(ADD(*(dw*)(raddr(ss,bp+var_a)), 0x1C));	// 104182 add     [bp+var_A], 1Ch ;~ 2FE6:0BA5
cs=0x2fe6;eip=0x000ba9; 	T(INC(si));	// 104183 inc     si ;~ 2FE6:0BA9
cs=0x2fe6;eip=0x000baa; 	T(CMP(*(dw*)((&unk_571d4)), si));	// 104184 cmp     word ptr unk_571D4, si ;~ 2FE6:0BAA
cs=0x2fe6;eip=0x000bae; 	R(JA(loc_3efc3));	// 104185 ja      short loc_3EFC3 ;~ 2FE6:0BAE
loc_3eff0:
	// 11044 
cs=0x2fe6;eip=0x000bb0; 	T(MOV(ax, 0x0FFFF));	// 104188 mov     ax, 0FFFFh ;~ 2FE6:0BB0
loc_3eff3:
	// 11045 
cs=0x2fe6;eip=0x000bb3; 	X(POP(si));	// 104191 pop     si ;~ 2FE6:0BB3
cs=0x2fe6;eip=0x000bb4; 	X(POP(di));	// 104192 pop     di ;~ 2FE6:0BB4
cs=0x2fe6;eip=0x000bb5; 	T(MOV(sp, bp));	// 104193 mov     sp, bp ;~ 2FE6:0BB5
cs=0x2fe6;eip=0x000bb7; 	X(POP(bp));	// 104194 pop     bp ;~ 2FE6:0BB7
cs=0x2fe6;eip=0x000bb8; 	R(RETN(2));	// 104195 retn    2 ;~ 2FE6:0BB8
sub_3f14e:
	// 104385 
#undef arg_0
#define arg_0 4
	// 104388 arg_0           = dword ptr  4 ;~ 2FE6:0D0E
#undef arg_4
#define arg_4 8
	// 104389 arg_4           = dword ptr  8 ;~ 2FE6:0D0E
cs=0x2fe6;eip=0x000d0e; 	X(PUSH(bp));	// 104391 push    bp ;~ 2FE6:0D0E
cs=0x2fe6;eip=0x000d0f; 	T(MOV(bp, sp));	// 104392 mov     bp, sp ;~ 2FE6:0D0F
cs=0x2fe6;eip=0x000d11; 	T(SUB(sp, 4));	// 104393 sub     sp, 4 ;~ 2FE6:0D11
cs=0x2fe6;eip=0x000d14; 	X(PUSH(di));	// 104394 push    di ;~ 2FE6:0D14
cs=0x2fe6;eip=0x000d15; 	X(PUSH(si));	// 104395 push    si ;~ 2FE6:0D15
cs=0x2fe6;eip=0x000d16; 	X(PUSH(di));	// 104396 push    di ;~ 2FE6:0D16
cs=0x2fe6;eip=0x000d17; 	T(LES(di, *(dd*)(raddr(ss,bp+arg_0))));	// 104397 les     di, [bp+arg_0] ;~ 2FE6:0D17
cs=0x2fe6;eip=0x000d1a; 	T(MOV(cx, 0x0FFFF));	// 104399 mov     cx, 0FFFFh ;~ 2FE6:0D1A
cs=0x2fe6;eip=0x000d1d; 	T(XOR(ax, ax));	// 104400 xor     ax, ax ;~ 2FE6:0D1D
	// 104401 repne scasb ;~ 2FE6:0D1F
cs=0x2fe6;eip=0x000d1f; 	T(	REPNE SCASB);	// 104401 repne scasb ;~ 2FE6:0D1F
cs=0x2fe6;eip=0x000d21; 	T(NOT(cx));	// 104402 not     cx ;~ 2FE6:0D21
cs=0x2fe6;eip=0x000d23; 	T(DEC(cx));	// 104403 dec     cx ;~ 2FE6:0D23
cs=0x2fe6;eip=0x000d24; 	X(POP(di));	// 104404 pop     di ;~ 2FE6:0D24
cs=0x2fe6;eip=0x000d25; 	T(MOV(ax, cx));	// 104405 mov     ax, cx ;~ 2FE6:0D25
cs=0x2fe6;eip=0x000d27; 	T(MOV(dx, ax));	// 104406 mov     dx, ax ;~ 2FE6:0D27
cs=0x2fe6;eip=0x000d29; 	X(PUSH(di));	// 104407 push    di ;~ 2FE6:0D29
cs=0x2fe6;eip=0x000d2a; 	T(LES(di, *(dd*)(raddr(ss,bp+arg_4))));	// 104408 les     di, [bp+arg_4] ;~ 2FE6:0D2A
cs=0x2fe6;eip=0x000d2d; 	T(MOV(cx, 0x0FFFF));	// 104409 mov     cx, 0FFFFh ;~ 2FE6:0D2D
cs=0x2fe6;eip=0x000d30; 	T(XOR(ax, ax));	// 104410 xor     ax, ax ;~ 2FE6:0D30
	// 104411 repne scasb ;~ 2FE6:0D32
cs=0x2fe6;eip=0x000d32; 	T(	REPNE SCASB);	// 104411 repne scasb ;~ 2FE6:0D32
cs=0x2fe6;eip=0x000d34; 	T(NOT(cx));	// 104412 not     cx ;~ 2FE6:0D34
cs=0x2fe6;eip=0x000d36; 	T(DEC(cx));	// 104413 dec     cx ;~ 2FE6:0D36
cs=0x2fe6;eip=0x000d37; 	X(POP(di));	// 104414 pop     di ;~ 2FE6:0D37
cs=0x2fe6;eip=0x000d38; 	T(SUB(cx, dx));	// 104415 sub     cx, dx ;~ 2FE6:0D38
cs=0x2fe6;eip=0x000d3a; 	T(INC(cx));	// 104416 inc     cx ;~ 2FE6:0D3A
cs=0x2fe6;eip=0x000d3b; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+arg_4))), cx));	// 104417 add     word ptr [bp+arg_4], cx ;~ 2FE6:0D3B
cs=0x2fe6;eip=0x000d3e; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 104418 inc     word ptr [bp+arg_0] ;~ 2FE6:0D3E
loc_3f181:
	// 11059 
cs=0x2fe6;eip=0x000d41; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 104421 les     bx, [bp+arg_0] ;~ 2FE6:0D41
cs=0x2fe6;eip=0x000d44; 	T(MOV(al, *(raddr(es,bx))));	// 104422 mov     al, es:[bx] ;~ 2FE6:0D44
cs=0x2fe6;eip=0x000d47; 	T(CBW);	// 104423 cbw ;~ 2FE6:0D47
cs=0x2fe6;eip=0x000d48; 	X(PUSH(ax));	// 104424 push    ax ;~ 2FE6:0D48
cs=0x2fe6;eip=0x000d49; 	R(CALLF(sub_102f4,0));	// 104425 call    sub_102F4 ;~ 2FE6:0D49
cs=0x2fe6;eip=0x000d4e; 	T(ADD(sp, 2));	// 104426 add     sp, 2 ;~ 2FE6:0D4E
cs=0x2fe6;eip=0x000d51; 	T(MOV(si, ax));	// 104427 mov     si, ax ;~ 2FE6:0D51
cs=0x2fe6;eip=0x000d53; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 104428 les     bx, [bp+arg_4] ;~ 2FE6:0D53
cs=0x2fe6;eip=0x000d56; 	T(MOV(al, *(raddr(es,bx))));	// 104429 mov     al, es:[bx] ;~ 2FE6:0D56
cs=0x2fe6;eip=0x000d59; 	T(CBW);	// 104430 cbw ;~ 2FE6:0D59
cs=0x2fe6;eip=0x000d5a; 	X(PUSH(ax));	// 104431 push    ax ;~ 2FE6:0D5A
cs=0x2fe6;eip=0x000d5b; 	R(CALLF(sub_102f4,0));	// 104432 call    sub_102F4 ;~ 2FE6:0D5B
cs=0x2fe6;eip=0x000d60; 	T(ADD(sp, 2));	// 104433 add     sp, 2 ;~ 2FE6:0D60
cs=0x2fe6;eip=0x000d63; 	T(MOV(di, ax));	// 104434 mov     di, ax ;~ 2FE6:0D63
cs=0x2fe6;eip=0x000d65; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 104435 inc     word ptr [bp+arg_0] ;~ 2FE6:0D65
cs=0x2fe6;eip=0x000d68; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_4)))));	// 104436 inc     word ptr [bp+arg_4] ;~ 2FE6:0D68
cs=0x2fe6;eip=0x000d6b; 	T(OR(si, si));	// 104437 or      si, si ;~ 2FE6:0D6B
cs=0x2fe6;eip=0x000d6d; 	R(JZ(loc_3f1b3));	// 104438 jz      short loc_3F1B3 ;~ 2FE6:0D6D
cs=0x2fe6;eip=0x000d6f; 	T(CMP(si, di));	// 104439 cmp     si, di ;~ 2FE6:0D6F
cs=0x2fe6;eip=0x000d71; 	R(JZ(loc_3f181));	// 104440 jz      short loc_3F181 ;~ 2FE6:0D71
loc_3f1b3:
	// 11060 
cs=0x2fe6;eip=0x000d73; 	T(MOV(ax, si));	// 104443 mov     ax, si ;~ 2FE6:0D73
cs=0x2fe6;eip=0x000d75; 	T(SUB(ax, di));	// 104444 sub     ax, di ;~ 2FE6:0D75
cs=0x2fe6;eip=0x000d77; 	X(POP(si));	// 104445 pop     si ;~ 2FE6:0D77
cs=0x2fe6;eip=0x000d78; 	X(POP(di));	// 104446 pop     di ;~ 2FE6:0D78
cs=0x2fe6;eip=0x000d79; 	T(MOV(sp, bp));	// 104447 mov     sp, bp ;~ 2FE6:0D79
cs=0x2fe6;eip=0x000d7b; 	X(POP(bp));	// 104448 pop     bp ;~ 2FE6:0D7B
cs=0x2fe6;eip=0x000d7c; 	R(RETN(8));	// 104449 retn    8 ;~ 2FE6:0D7C
sub_3f1c0:
	// 104459 
#undef arg_0
#define arg_0 6
	// 104462 arg_0           = dword ptr  6 ;~ 2FE6:0D80
#undef arg_4
#define arg_4 0x0A
	// 104463 arg_4           = dword ptr  0Ah ;~ 2FE6:0D80
cs=0x2fe6;eip=0x000d80; 	X(PUSH(bp));	// 104465 push    bp ;~ 2FE6:0D80
cs=0x2fe6;eip=0x000d81; 	T(MOV(bp, sp));	// 104466 mov     bp, sp ;~ 2FE6:0D81
cs=0x2fe6;eip=0x000d83; 	T(MOV(dx, di));	// 104467 mov     dx, di ;~ 2FE6:0D83
cs=0x2fe6;eip=0x000d85; 	T(MOV(bx, si));	// 104468 mov     bx, si ;~ 2FE6:0D85
cs=0x2fe6;eip=0x000d87; 	X(PUSH(ds));	// 104469 push    ds ;~ 2FE6:0D87
cs=0x2fe6;eip=0x000d88; 	T(LDS(si, *(dd*)(raddr(ss,bp+arg_4))));	// 104470 lds     si, [bp+arg_4] ;~ 2FE6:0D88
cs=0x2fe6;eip=0x000d8b; 	T(LES(di, *(dd*)(raddr(ss,bp+arg_0))));	// 104471 les     di, [bp+arg_0] ;~ 2FE6:0D8B
cs=0x2fe6;eip=0x000d8e; 	T(XOR(ax, ax));	// 104472 xor     ax, ax ;~ 2FE6:0D8E
cs=0x2fe6;eip=0x000d90; 	T(MOV(cx, 0x0FFFF));	// 104473 mov     cx, 0FFFFh ;~ 2FE6:0D90
cs=0x2fe6;eip=0x000d93; 	T(CLD);	// 104474 cld ;~ 2FE6:0D93
	// 104475 repne scasb ;~ 2FE6:0D94
cs=0x2fe6;eip=0x000d94; 	T(	REPNE SCASB);	// 104475 repne scasb ;~ 2FE6:0D94
cs=0x2fe6;eip=0x000d96; 	T(NOT(cx));	// 104476 not     cx ;~ 2FE6:0D96
cs=0x2fe6;eip=0x000d98; 	T(SUB(di, cx));	// 104477 sub     di, cx ;~ 2FE6:0D98
	// 104478 repe cmpsb ;~ 2FE6:0D9A
cs=0x2fe6;eip=0x000d9a; 	T(	REPE CMPSB);	// 104478 repe cmpsb ;~ 2FE6:0D9A
cs=0x2fe6;eip=0x000d9c; 	R(JZ(loc_3f1e3));	// 104479 jz      short loc_3F1E3 ;~ 2FE6:0D9C
cs=0x2fe6;eip=0x000d9e; 	T(SBB(ax, ax));	// 104480 sbb     ax, ax ;~ 2FE6:0D9E
cs=0x2fe6;eip=0x000da0; 	T(SBB(ax, 0x0FFFF));	// 104481 sbb     ax, 0FFFFh ;~ 2FE6:0DA0
loc_3f1e3:
	// 11061 
cs=0x2fe6;eip=0x000da3; 	X(POP(ds));	// 104484 pop     ds ;~ 2FE6:0DA3
cs=0x2fe6;eip=0x000da4; 	T(MOV(si, bx));	// 104485 mov     si, bx ;~ 2FE6:0DA4
cs=0x2fe6;eip=0x000da6; 	T(MOV(di, dx));	// 104486 mov     di, dx ;~ 2FE6:0DA6
cs=0x2fe6;eip=0x000da8; 	X(POP(bp));	// 104487 pop     bp ;~ 2FE6:0DA8
cs=0x2fe6;eip=0x000da9; 	R(RETF(8));	// 104488 retf    8 ;~ 2FE6:0DA9
sub_3f1ec:
	// 104496 
#undef arg_0
#define arg_0 6
	// 104499 arg_0           = dword ptr  6 ;~ 2FE6:0DAC
#undef arg_4
#define arg_4 0x0A
	// 104500 arg_4           = dword ptr  0Ah ;~ 2FE6:0DAC
cs=0x2fe6;eip=0x000dac; 	X(PUSH(bp));	// 104502 push    bp ;~ 2FE6:0DAC
cs=0x2fe6;eip=0x000dad; 	T(MOV(bp, sp));	// 104503 mov     bp, sp ;~ 2FE6:0DAD
cs=0x2fe6;eip=0x000daf; 	T(MOV(dx, si));	// 104504 mov     dx, si ;~ 2FE6:0DAF
cs=0x2fe6;eip=0x000db1; 	X(PUSH(ds));	// 104505 push    ds ;~ 2FE6:0DB1
cs=0x2fe6;eip=0x000db2; 	T(LDS(si, *(dd*)(raddr(ss,bp+arg_4))));	// 104506 lds     si, [bp+arg_4] ;~ 2FE6:0DB2
cs=0x2fe6;eip=0x000db5; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 104507 les     bx, [bp+arg_0] ;~ 2FE6:0DB5
cs=0x2fe6;eip=0x000db8; 	T(MOV(al, 0x0FF));	// 104508 mov     al, 0FFh ;~ 2FE6:0DB8
cs=0x2fe6;eip=0x000dba; 	T(CLD);	// 104509 cld ;~ 2FE6:0DBA
loc_3f1fb:
	// 11062 
cs=0x2fe6;eip=0x000dbb; 	T(OR(al, al));	// 104513 or      al, al ;~ 2FE6:0DBB
cs=0x2fe6;eip=0x000dbd; 	R(JZ(loc_3f22c));	// 104514 jz      short loc_3F22C ;~ 2FE6:0DBD
cs=0x2fe6;eip=0x000dbf; 	T(LODSB);	// 104515 lodsb ;~ 2FE6:0DBF
cs=0x2fe6;eip=0x000dc0; 	T(MOV(ah, *(raddr(es,bx))));	// 104516 mov     ah, es:[bx] ;~ 2FE6:0DC0
cs=0x2fe6;eip=0x000dc3; 	T(INC(bx));	// 104517 inc     bx ;~ 2FE6:0DC3
cs=0x2fe6;eip=0x000dc4; 	T(CMP(ah, al));	// 104518 cmp     ah, al ;~ 2FE6:0DC4
cs=0x2fe6;eip=0x000dc6; 	R(JZ(loc_3f1fb));	// 104519 jz      short loc_3F1FB ;~ 2FE6:0DC6
cs=0x2fe6;eip=0x000dc8; 	T(SUB(al, 0x41));	// 104520 sub     al, 41h ; 'A' ;~ 2FE6:0DC8
cs=0x2fe6;eip=0x000dca; 	T(CMP(al, 0x1A));	// 104521 cmp     al, 1Ah ;~ 2FE6:0DCA
cs=0x2fe6;eip=0x000dcc; 	T(SBB(cl, cl));	// 104522 sbb     cl, cl ;~ 2FE6:0DCC
cs=0x2fe6;eip=0x000dce; 	T(AND(cl, 0x20));	// 104523 and     cl, 20h ;~ 2FE6:0DCE
cs=0x2fe6;eip=0x000dd1; 	T(ADD(al, cl));	// 104524 add     al, cl ;~ 2FE6:0DD1
cs=0x2fe6;eip=0x000dd3; 	T(ADD(al, 0x41));	// 104525 add     al, 41h ; 'A' ;~ 2FE6:0DD3
cs=0x2fe6;eip=0x000dd5; 	T(XCHG(ah, al));	// 104526 xchg    ah, al ;~ 2FE6:0DD5
cs=0x2fe6;eip=0x000dd7; 	T(SUB(al, 0x41));	// 104527 sub     al, 41h ; 'A' ;~ 2FE6:0DD7
cs=0x2fe6;eip=0x000dd9; 	T(CMP(al, 0x1A));	// 104528 cmp     al, 1Ah ;~ 2FE6:0DD9
cs=0x2fe6;eip=0x000ddb; 	T(SBB(cl, cl));	// 104529 sbb     cl, cl ;~ 2FE6:0DDB
cs=0x2fe6;eip=0x000ddd; 	T(AND(cl, 0x20));	// 104530 and     cl, 20h ;~ 2FE6:0DDD
cs=0x2fe6;eip=0x000de0; 	T(ADD(al, cl));	// 104531 add     al, cl ;~ 2FE6:0DE0
cs=0x2fe6;eip=0x000de2; 	T(ADD(al, 0x41));	// 104532 add     al, 41h ; 'A' ;~ 2FE6:0DE2
cs=0x2fe6;eip=0x000de4; 	T(CMP(al, ah));	// 104533 cmp     al, ah ;~ 2FE6:0DE4
cs=0x2fe6;eip=0x000de6; 	R(JZ(loc_3f1fb));	// 104534 jz      short loc_3F1FB ;~ 2FE6:0DE6
cs=0x2fe6;eip=0x000de8; 	T(SBB(al, al));	// 104535 sbb     al, al ;~ 2FE6:0DE8
cs=0x2fe6;eip=0x000dea; 	T(SBB(al, 0x0FF));	// 104536 sbb     al, 0FFh ;~ 2FE6:0DEA
loc_3f22c:
	// 11063 
cs=0x2fe6;eip=0x000dec; 	T(CBW);	// 104539 cbw ;~ 2FE6:0DEC
cs=0x2fe6;eip=0x000ded; 	X(POP(ds));	// 104540 pop     ds ;~ 2FE6:0DED
cs=0x2fe6;eip=0x000dee; 	T(MOV(si, dx));	// 104541 mov     si, dx ;~ 2FE6:0DEE
cs=0x2fe6;eip=0x000df0; 	X(POP(bp));	// 104542 pop     bp ;~ 2FE6:0DF0
cs=0x2fe6;eip=0x000df1; 	R(RETF(8));	// 104543 retf    8 ;~ 2FE6:0DF1
sub_3f234:
	// 104550 
cs=0x2fe6;eip=0x000df4; 	R(_INT(0x11));	// 104551 int     11h             ; EQUIPMENT DETERMINATION ;~ 2FE6:0DF4
cs=0x2fe6;eip=0x000df6; 	T(TEST(ax, 1));	// 104553 test    ax, 1 ;~ 2FE6:0DF6
cs=0x2fe6;eip=0x000df9; 	R(JNZ(loc_3f240));	// 104554 jnz     short loc_3F240 ;~ 2FE6:0DF9
cs=0x2fe6;eip=0x000dfb; 	T(XOR(ax, ax));	// 104555 xor     ax, ax ;~ 2FE6:0DFB
cs=0x2fe6;eip=0x000dfd; 	R(RETN(2));	// 104556 retn    2 ;~ 2FE6:0DFD
loc_3f240:
	// 11064 
cs=0x2fe6;eip=0x000e00; 	T(MOV(cl, 6));	// 104560 mov     cl, 6 ;~ 2FE6:0E00
cs=0x2fe6;eip=0x000e02; 	T(SHR(ax, cl));	// 104561 shr     ax, cl ;~ 2FE6:0E02
cs=0x2fe6;eip=0x000e04; 	T(AND(ax, 3));	// 104562 and     ax, 3 ;~ 2FE6:0E04
cs=0x2fe6;eip=0x000e07; 	T(INC(ax));	// 104563 inc     ax ;~ 2FE6:0E07
cs=0x2fe6;eip=0x000e08; 	R(RETN(2));	// 104564 retn    2 ;~ 2FE6:0E08
sub_3f24b:
	// 104572 
#undef arg_2
#define arg_2 6
	// 104574 arg_2           = word ptr  6 ;~ 2FE6:0E0B
cs=0x2fe6;eip=0x000e0b; 	X(PUSH(bp));	// 104576 push    bp ;~ 2FE6:0E0B
cs=0x2fe6;eip=0x000e0c; 	T(MOV(bp, sp));	// 104577 mov     bp, sp ;~ 2FE6:0E0C
cs=0x2fe6;eip=0x000e0e; 	T(MOV(bx, si));	// 104578 mov     bx, si ;~ 2FE6:0E0E
cs=0x2fe6;eip=0x000e10; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 104579 mov     si, [bp+arg_2] ;~ 2FE6:0E10
cs=0x2fe6;eip=0x000e13; 	T(MOV(ah, 0x19));	// 104580 mov     ah, 19h ;~ 2FE6:0E13
cs=0x2fe6;eip=0x000e15; 	R(_INT(0x21));	// 104581 int     21h             ; DOS - GET DEFAULT DISK NUMBER ;~ 2FE6:0E15
cs=0x2fe6;eip=0x000e17; 	T(ADD(al, 0x41));	// 104582 add     al, 41h ; 'A' ;~ 2FE6:0E17
cs=0x2fe6;eip=0x000e19; 	X(MOV(*(raddr(ds,si)), al));	// 104583 mov     [si], al ;~ 2FE6:0E19
cs=0x2fe6;eip=0x000e1b; 	T(INC(si));	// 104584 inc     si ;~ 2FE6:0E1B
cs=0x2fe6;eip=0x000e1c; 	X(MOV(*(raddr(ds,si)), 0x3A));	// 104585 mov     byte ptr [si], 3Ah ; ':' ;~ 2FE6:0E1C
cs=0x2fe6;eip=0x000e1f; 	T(INC(si));	// 104586 inc     si ;~ 2FE6:0E1F
cs=0x2fe6;eip=0x000e20; 	X(MOV(*(raddr(ds,si)), 0x5C));	// 104587 mov     byte ptr [si], 5Ch ; '\' ;~ 2FE6:0E20
cs=0x2fe6;eip=0x000e23; 	T(INC(si));	// 104588 inc     si ;~ 2FE6:0E23
cs=0x2fe6;eip=0x000e24; 	T(MOV(ah, 0x47));	// 104589 mov     ah, 47h ; 'G' ;~ 2FE6:0E24
cs=0x2fe6;eip=0x000e26; 	T(XOR(dl, dl));	// 104590 xor     dl, dl ;~ 2FE6:0E26
cs=0x2fe6;eip=0x000e28; 	R(_INT(0x21));	// 104591 int     21h             ; DOS - 2+ - GET CURRENT DIRECTORY ;~ 2FE6:0E28
cs=0x2fe6;eip=0x000e2a; 	R(JC(loc_3f28c));	// 104594 jb      short loc_3F28C ;~ 2FE6:0E2A
cs=0x2fe6;eip=0x000e2c; 	T(MOV(dx, di));	// 104595 mov     dx, di ;~ 2FE6:0E2C
cs=0x2fe6;eip=0x000e2e; 	T(MOV(di, si));	// 104596 mov     di, si ;~ 2FE6:0E2E
cs=0x2fe6;eip=0x000e30; 	X(PUSH(ds));	// 104597 push    ds ;~ 2FE6:0E30
cs=0x2fe6;eip=0x000e31; 	X(POP(es));	// 104598 pop     es ;~ 2FE6:0E31
cs=0x2fe6;eip=0x000e32; 	T(XOR(ax, ax));	// 104600 xor     ax, ax ;~ 2FE6:0E32
cs=0x2fe6;eip=0x000e34; 	T(MOV(cx, 0x43));	// 104601 mov     cx, 43h ; 'C' ;~ 2FE6:0E34
cs=0x2fe6;eip=0x000e37; 	T(CLD);	// 104602 cld ;~ 2FE6:0E37
	// 104603 repne scasb ;~ 2FE6:0E38
cs=0x2fe6;eip=0x000e38; 	T(	REPNE SCASB);	// 104603 repne scasb ;~ 2FE6:0E38
cs=0x2fe6;eip=0x000e3a; 	T(MOV(si, di));	// 104604 mov     si, di ;~ 2FE6:0E3A
cs=0x2fe6;eip=0x000e3c; 	T(DEC(si));	// 104605 dec     si ;~ 2FE6:0E3C
cs=0x2fe6;eip=0x000e3d; 	X(MOV(*(raddr(ds,si)), 0x5C));	// 104606 mov     byte ptr [si], 5Ch ; '\' ;~ 2FE6:0E3D
cs=0x2fe6;eip=0x000e40; 	T(INC(si));	// 104607 inc     si ;~ 2FE6:0E40
cs=0x2fe6;eip=0x000e41; 	X(MOV(*(raddr(ds,si)), 0));	// 104608 mov     byte ptr [si], 0 ;~ 2FE6:0E41
cs=0x2fe6;eip=0x000e44; 	T(MOV(si, bx));	// 104609 mov     si, bx ;~ 2FE6:0E44
cs=0x2fe6;eip=0x000e46; 	T(MOV(di, dx));	// 104610 mov     di, dx ;~ 2FE6:0E46
cs=0x2fe6;eip=0x000e48; 	X(POP(bp));	// 104611 pop     bp ;~ 2FE6:0E48
cs=0x2fe6;eip=0x000e49; 	R(RETN(4));	// 104612 retn    4 ;~ 2FE6:0E49
loc_3f28c:
	// 11065 
cs=0x2fe6;eip=0x000e4c; 	T(MOV(ax, 0x0FFFF));	// 104616 mov     ax, 0FFFFh ;~ 2FE6:0E4C
cs=0x2fe6;eip=0x000e4f; 	T(MOV(si, bx));	// 104617 mov     si, bx ;~ 2FE6:0E4F
cs=0x2fe6;eip=0x000e51; 	X(POP(bp));	// 104618 pop     bp ;~ 2FE6:0E51
cs=0x2fe6;eip=0x000e52; 	R(RETN(4));	// 104619 retn    4 ;~ 2FE6:0E52
sub_3f356:
	// 104729 
cs=0x2fe6;eip=0x000f16; 	X(PUSH(si));	// 104731 push    si ;~ 2FE6:0F16
cs=0x2fe6;eip=0x000f17; 	X(PUSH(es));	// 104732 push    es ;~ 2FE6:0F17
cs=0x2fe6;eip=0x000f18; 	X(PUSH(cx));	// 104733 push    cx ;~ 2FE6:0F18
cs=0x2fe6;eip=0x000f19; 	X(PUSH(dx));	// 104734 push    dx ;~ 2FE6:0F19
cs=0x2fe6;eip=0x000f1a; 	T(MOV(si, *(dw*)((&unk_4b0b2))));	// 104735 mov     si, word ptr unk_4B0B2 ;~ 2FE6:0F1A
cs=0x2fe6;eip=0x000f1e; 	T(INC(si));	// 104736 inc     si ;~ 2FE6:0F1E
cs=0x2fe6;eip=0x000f1f; 	X(MOV(*(dw*)((&unk_4b0b2)), si));	// 104737 mov     word ptr unk_4B0B2, si ;~ 2FE6:0F1F
cs=0x2fe6;eip=0x000f23; 	T(CMP(si, *(dw*)((&unk_4b0b4))));	// 104738 cmp     si, word ptr unk_4B0B4 ;~ 2FE6:0F23
cs=0x2fe6;eip=0x000f27; 	R(JNC(loc_3f386));	// 104739 jnb     short loc_3F386 ;~ 2FE6:0F27
cs=0x2fe6;eip=0x000f29; 	T(MOV(ax, *(dw*)((&unk_57179))));	// 104740 mov     ax, word ptr unk_57179 ;~ 2FE6:0F29
cs=0x2fe6;eip=0x000f2c; 	T(ADD(si, *(dw*)((&unk_57177))));	// 104741 add     si, word ptr unk_57177 ;~ 2FE6:0F2C
cs=0x2fe6;eip=0x000f30; 	R(JNC(loc_3f375));	// 104742 jnb     short loc_3F375 ;~ 2FE6:0F30
cs=0x2fe6;eip=0x000f32; 	T(ADD(ax, 0x1000));	// 104743 add     ax, 1000h ;~ 2FE6:0F32
loc_3f375:
	// 11073 
cs=0x2fe6;eip=0x000f35; 	T(MOV(es, ax));	// 104746 mov     es, ax ;~ 2FE6:0F35
cs=0x2fe6;eip=0x000f37; 	T(MOV(al, *(raddr(es,si))));	// 104747 mov     al, es:[si] ;~ 2FE6:0F37
cs=0x2fe6;eip=0x000f3a; 	T(XOR(ah, ah));	// 104748 xor     ah, ah ;~ 2FE6:0F3A
cs=0x2fe6;eip=0x000f3c; 	T(CLC);	// 104749 clc ;~ 2FE6:0F3C
cs=0x2fe6;eip=0x000f3d; 	X(POP(dx));	// 104750 pop     dx ;~ 2FE6:0F3D
cs=0x2fe6;eip=0x000f3e; 	X(POP(cx));	// 104751 pop     cx ;~ 2FE6:0F3E
cs=0x2fe6;eip=0x000f3f; 	X(POP(es));	// 104752 pop     es ;~ 2FE6:0F3F
cs=0x2fe6;eip=0x000f40; 	X(POP(si));	// 104753 pop     si ;~ 2FE6:0F40
cs=0x2fe6;eip=0x000f41; 	R(RETN(0));	// 104754 retn ;~ 2FE6:0F41
sub_3f382:
	// 104761 
cs=0x2fe6;eip=0x000f42; 	X(PUSH(si));	// 104763 push    si ;~ 2FE6:0F42
cs=0x2fe6;eip=0x000f43; 	X(PUSH(es));	// 104764 push    es ;~ 2FE6:0F43
cs=0x2fe6;eip=0x000f44; 	X(PUSH(cx));	// 104765 push    cx ;~ 2FE6:0F44
cs=0x2fe6;eip=0x000f45; 	X(PUSH(dx));	// 104766 push    dx ;~ 2FE6:0F45
loc_3f386:
	// 11074 
cs=0x2fe6;eip=0x000f46; 	T(MOV(bx, *(dw*)((&unk_4b0b0))));	// 104769 mov     bx, word ptr unk_4B0B0 ;~ 2FE6:0F46
cs=0x2fe6;eip=0x000f4a; 	T(MOV(cx, 0x400));	// 104770 mov     cx, 400h ;~ 2FE6:0F4A
cs=0x2fe6;eip=0x000f4d; 	T(MOV(si, ds));	// 104771 mov     si, ds ;~ 2FE6:0F4D
cs=0x2fe6;eip=0x000f4f; 	T(LDS(dx, *(dd*)((&unk_57177))));	// 104772 lds     dx, dword ptr unk_57177 ;~ 2FE6:0F4F
cs=0x2fe6;eip=0x000f53; 	T(MOV(ah, 0x3F));	// 104773 mov     ah, 3Fh ;~ 2FE6:0F53
cs=0x2fe6;eip=0x000f55; 	R(_INT(0x21));	// 104774 int     21h             ; DOS - 2+ - READ FROM FILE WITH HANDLE ;~ 2FE6:0F55
cs=0x2fe6;eip=0x000f57; 	T(MOV(bx, dx));	// 104777 mov     bx, dx ;~ 2FE6:0F57
cs=0x2fe6;eip=0x000f59; 	T(MOV(cl, *(raddr(ds,bx))));	// 104778 mov     cl, [bx] ;~ 2FE6:0F59
cs=0x2fe6;eip=0x000f5b; 	R(JNC(loc_3f3ad));	// 104779 jnb     short loc_3F3AD ;~ 2FE6:0F5B
cs=0x2fe6;eip=0x000f5d; 	T(ADD(ax, 0x0D));	// 104780 add     ax, 0Dh ;~ 2FE6:0F5D
cs=0x2fe6;eip=0x000f60; 	T(MOV(dx, seg_offset(dseg)));	// 104781 mov     dx, seg dseg ;~ 2FE6:0F60
cs=0x2fe6;eip=0x000f63; 	T(MOV(ds, dx));	// 104782 mov     ds, dx ;~ 2FE6:0F63
cs=0x2fe6;eip=0x000f65; 	X(MOV(*(dw*)((&unk_571e7)), ax));	// 104783 mov     word ptr unk_571E7, ax ;~ 2FE6:0F65
cs=0x2fe6;eip=0x000f68; 	T(MOV(ds, si));	// 104784 mov     ds, si ;~ 2FE6:0F68
cs=0x2fe6;eip=0x000f6a; 	R(JMP(loc_3f3c0));	// 104785 jmp     short loc_3F3C0 ;~ 2FE6:0F6A
loc_3f3ad:
	// 11075 
cs=0x2fe6;eip=0x000f6d; 	T(MOV(ds, si));	// 104791 mov     ds, si ;~ 2FE6:0F6D
cs=0x2fe6;eip=0x000f6f; 	T(CMP(ax, 0));	// 104792 cmp     ax, 0 ;~ 2FE6:0F6F
cs=0x2fe6;eip=0x000f72; 	R(JZ(loc_3f3c7));	// 104793 jz      short loc_3F3C7 ;~ 2FE6:0F72
cs=0x2fe6;eip=0x000f74; 	X(MOV(*(dw*)((&unk_4b0b4)), ax));	// 104794 mov     word ptr unk_4B0B4, ax ;~ 2FE6:0F74
cs=0x2fe6;eip=0x000f77; 	X(MOV(*(dw*)((&unk_4b0b2)), 0));	// 104795 mov     word ptr unk_4B0B2, 0 ;~ 2FE6:0F77
cs=0x2fe6;eip=0x000f7d; 	T(MOV(al, cl));	// 104796 mov     al, cl ;~ 2FE6:0F7D
cs=0x2fe6;eip=0x000f7f; 	T(CLC);	// 104797 clc ;~ 2FE6:0F7F
loc_3f3c0:
	// 11076 
cs=0x2fe6;eip=0x000f80; 	T(XOR(ah, ah));	// 104800 xor     ah, ah ;~ 2FE6:0F80
cs=0x2fe6;eip=0x000f82; 	X(POP(dx));	// 104801 pop     dx ;~ 2FE6:0F82
cs=0x2fe6;eip=0x000f83; 	X(POP(cx));	// 104802 pop     cx ;~ 2FE6:0F83
cs=0x2fe6;eip=0x000f84; 	X(POP(es));	// 104803 pop     es ;~ 2FE6:0F84
cs=0x2fe6;eip=0x000f85; 	X(POP(si));	// 104804 pop     si ;~ 2FE6:0F85
cs=0x2fe6;eip=0x000f86; 	R(RETN(0));	// 104805 retn ;~ 2FE6:0F86
loc_3f3c7:
	// 11077 
cs=0x2fe6;eip=0x000f87; 	T(DEC(ax));	// 104809 dec     ax ;~ 2FE6:0F87
cs=0x2fe6;eip=0x000f88; 	T(STC);	// 104810 stc ;~ 2FE6:0F88
cs=0x2fe6;eip=0x000f89; 	X(POP(dx));	// 104811 pop     dx ;~ 2FE6:0F89
cs=0x2fe6;eip=0x000f8a; 	X(POP(cx));	// 104812 pop     cx ;~ 2FE6:0F8A
cs=0x2fe6;eip=0x000f8b; 	X(POP(es));	// 104813 pop     es ;~ 2FE6:0F8B
cs=0x2fe6;eip=0x000f8c; 	X(POP(si));	// 104814 pop     si ;~ 2FE6:0F8C
cs=0x2fe6;eip=0x000f8d; 	R(RETN(0));	// 104815 retn ;~ 2FE6:0F8D
sub_3f3ce:
	// 104822 
cs=0x2fe6;eip=0x000f8e; 	X(PUSH(es));	// 104824 push    es ;~ 2FE6:0F8E
cs=0x2fe6;eip=0x000f8f; 	X(PUSH(si));	// 104825 push    si ;~ 2FE6:0F8F
cs=0x2fe6;eip=0x000f90; 	T(LES(si, *(dd*)((&unk_4b0ac))));	// 104826 les     si, dword ptr unk_4B0AC ;~ 2FE6:0F90
cs=0x2fe6;eip=0x000f94; 	X(MOV(*(raddr(es,si)), al));	// 104827 mov     es:[si], al ;~ 2FE6:0F94
cs=0x2fe6;eip=0x000f97; 	T(ADD(si, 1));	// 104828 add     si, 1 ;~ 2FE6:0F97
cs=0x2fe6;eip=0x000f9a; 	R(JNC(loc_3f3e2));	// 104829 jnb     short loc_3F3E2 ;~ 2FE6:0F9A
cs=0x2fe6;eip=0x000f9c; 	X(ADD(*(dw*)((&unk_4b0ae)), 0x1000));	// 104830 add     word ptr unk_4B0AE, 1000h ;~ 2FE6:0F9C
loc_3f3e2:
	// 11078 
cs=0x2fe6;eip=0x000fa2; 	X(MOV(*(dw*)((&unk_4b0ac)), si));	// 104833 mov     word ptr unk_4B0AC, si ;~ 2FE6:0FA2
cs=0x2fe6;eip=0x000fa6; 	X(SUB(*(dw*)((&unk_4b0b6)), 1));	// 104834 sub     word ptr unk_4B0B6, 1 ;~ 2FE6:0FA6
cs=0x2fe6;eip=0x000fab; 	X(SBB(*(dw*)((&unk_4b0b8)), 0));	// 104835 sbb     word ptr unk_4B0B8, 0 ;~ 2FE6:0FAB
cs=0x2fe6;eip=0x000fb0; 	T(MOV(si, *(dw*)((&unk_4b0b6))));	// 104836 mov     si, word ptr unk_4B0B6 ;~ 2FE6:0FB0
cs=0x2fe6;eip=0x000fb4; 	T(OR(si, *(dw*)((&unk_4b0b8))));	// 104837 or      si, word ptr unk_4B0B8 ;~ 2FE6:0FB4
cs=0x2fe6;eip=0x000fb8; 	R(JNZ(loc_3f401));	// 104838 jnz     short loc_3F401 ;~ 2FE6:0FB8
cs=0x2fe6;eip=0x000fba; 	T(STC);	// 104839 stc ;~ 2FE6:0FBA
cs=0x2fe6;eip=0x000fbb; 	T(MOV(ax, 0x0FFFF));	// 104840 mov     ax, 0FFFFh ;~ 2FE6:0FBB
cs=0x2fe6;eip=0x000fbe; 	X(POP(si));	// 104841 pop     si ;~ 2FE6:0FBE
cs=0x2fe6;eip=0x000fbf; 	X(POP(es));	// 104842 pop     es ;~ 2FE6:0FBF
cs=0x2fe6;eip=0x000fc0; 	R(RETN(0));	// 104843 retn ;~ 2FE6:0FC0
loc_3f401:
	// 11079 
cs=0x2fe6;eip=0x000fc1; 	T(CLC);	// 104847 clc ;~ 2FE6:0FC1
cs=0x2fe6;eip=0x000fc2; 	X(POP(si));	// 104848 pop     si ;~ 2FE6:0FC2
cs=0x2fe6;eip=0x000fc3; 	X(POP(es));	// 104849 pop     es ;~ 2FE6:0FC3
cs=0x2fe6;eip=0x000fc4; 	R(RETN(0));	// 104850 retn ;~ 2FE6:0FC4
sub_3f563:
	// 105051 
cs=0x2fe6;eip=0x001123; 	X(PUSH(es));	// 105053 push    es ;~ 2FE6:1123
cs=0x2fe6;eip=0x001124; 	X(PUSH(si));	// 105054 push    si ;~ 2FE6:1124
cs=0x2fe6;eip=0x001125; 	X(PUSH(cx));	// 105055 push    cx ;~ 2FE6:1125
cs=0x2fe6;eip=0x001126; 	X(PUSH(bx));	// 105056 push    bx ;~ 2FE6:1126
cs=0x2fe6;eip=0x001127; 	X(PUSH(ax));	// 105057 push    ax ;~ 2FE6:1127
cs=0x2fe6;eip=0x001128; 	T(MOV(bx, *(dw*)((&unk_4b0df))));	// 105058 mov     bx, word ptr unk_4B0DF ;~ 2FE6:1128
cs=0x2fe6;eip=0x00112c; 	T(MOV(si, bx));	// 105059 mov     si, bx ;~ 2FE6:112C
cs=0x2fe6;eip=0x00112e; 	X(MOV(*(raddr(ss,si)), al));	// 105060 mov     ss:[si], al ;~ 2FE6:112E
cs=0x2fe6;eip=0x001131; 	X(INC(*(dw*)((&unk_4b0df))));	// 105061 inc     word ptr unk_4B0DF ;~ 2FE6:1131
cs=0x2fe6;eip=0x001135; 	X(SUB(*(dw*)((&unk_4b0b6)), 1));	// 105062 sub     word ptr unk_4B0B6, 1 ;~ 2FE6:1135
cs=0x2fe6;eip=0x00113a; 	X(SBB(*(dw*)((&unk_4b0b8)), 0));	// 105063 sbb     word ptr unk_4B0B8, 0 ;~ 2FE6:113A
cs=0x2fe6;eip=0x00113f; 	T(CLC);	// 105064 clc ;~ 2FE6:113F
cs=0x2fe6;eip=0x001140; 	X(DEC(*(dw*)((&unk_4b0c3))));	// 105065 dec     word ptr unk_4B0C3 ;~ 2FE6:1140
cs=0x2fe6;eip=0x001144; 	R(JNZ(loc_3f597));	// 105066 jnz     short loc_3F597 ;~ 2FE6:1144
cs=0x2fe6;eip=0x001146; 	T(MOV(ax, *(dw*)((&unk_4b0c9))));	// 105067 mov     ax, word ptr unk_4B0C9 ;~ 2FE6:1146
cs=0x2fe6;eip=0x001149; 	R(CALL(__dispatch_call,ax));	// 105068 call    ax ; unk_4B0C9 ;~ 2FE6:1149
cs=0x2fe6;eip=0x00114b; 	T(MOV(ax, *(dw*)((&unk_4b0dd))));	// 105069 mov     ax, word ptr unk_4B0DD ;~ 2FE6:114B
cs=0x2fe6;eip=0x00114e; 	X(MOV(*(dw*)((&unk_4b0df)), ax));	// 105070 mov     word ptr unk_4B0DF, ax ;~ 2FE6:114E
cs=0x2fe6;eip=0x001151; 	T(MOV(ax, *(dw*)((&unk_4b0c1))));	// 105071 mov     ax, word ptr unk_4B0C1 ;~ 2FE6:1151
cs=0x2fe6;eip=0x001154; 	X(MOV(*(dw*)((&unk_4b0c3)), ax));	// 105072 mov     word ptr unk_4B0C3, ax ;~ 2FE6:1154
loc_3f597:
	// 11089 
cs=0x2fe6;eip=0x001157; 	T(MOV(si, *(dw*)((&unk_4b0b6))));	// 105075 mov     si, word ptr unk_4B0B6 ;~ 2FE6:1157
cs=0x2fe6;eip=0x00115b; 	T(OR(si, *(dw*)((&unk_4b0b8))));	// 105076 or      si, word ptr unk_4B0B8 ;~ 2FE6:115B
cs=0x2fe6;eip=0x00115f; 	R(JNZ(loc_3f5ab));	// 105077 jnz     short loc_3F5AB ;~ 2FE6:115F
cs=0x2fe6;eip=0x001161; 	T(STC);	// 105078 stc ;~ 2FE6:1161
cs=0x2fe6;eip=0x001162; 	X(POP(ax));	// 105079 pop     ax ;~ 2FE6:1162
cs=0x2fe6;eip=0x001163; 	T(MOV(ax, 0x0FFFF));	// 105080 mov     ax, 0FFFFh ;~ 2FE6:1163
cs=0x2fe6;eip=0x001166; 	X(POP(bx));	// 105081 pop     bx ;~ 2FE6:1166
cs=0x2fe6;eip=0x001167; 	X(POP(cx));	// 105082 pop     cx ;~ 2FE6:1167
cs=0x2fe6;eip=0x001168; 	X(POP(si));	// 105083 pop     si ;~ 2FE6:1168
cs=0x2fe6;eip=0x001169; 	X(POP(es));	// 105084 pop     es ;~ 2FE6:1169
cs=0x2fe6;eip=0x00116a; 	R(RETN(0));	// 105085 retn ;~ 2FE6:116A
loc_3f5ab:
	// 11090 
cs=0x2fe6;eip=0x00116b; 	T(CLC);	// 105089 clc ;~ 2FE6:116B
cs=0x2fe6;eip=0x00116c; 	X(POP(ax));	// 105090 pop     ax ;~ 2FE6:116C
cs=0x2fe6;eip=0x00116d; 	X(POP(bx));	// 105091 pop     bx ;~ 2FE6:116D
cs=0x2fe6;eip=0x00116e; 	X(POP(cx));	// 105092 pop     cx ;~ 2FE6:116E
cs=0x2fe6;eip=0x00116f; 	X(POP(si));	// 105093 pop     si ;~ 2FE6:116F
cs=0x2fe6;eip=0x001170; 	X(POP(es));	// 105094 pop     es ;~ 2FE6:1170
cs=0x2fe6;eip=0x001171; 	R(RETN(0));	// 105095 retn ;~ 2FE6:1171
sub_3f7da:
	// 105396 
cs=0x2fe6;eip=0x00139a; 	X(PUSH(ax));	// 105397 push    ax ;~ 2FE6:139A
cs=0x2fe6;eip=0x00139b; 	X(PUSH(cx));	// 105398 push    cx ;~ 2FE6:139B
cs=0x2fe6;eip=0x00139c; 	X(PUSH(bx));	// 105399 push    bx ;~ 2FE6:139C
cs=0x2fe6;eip=0x00139d; 	X(PUSH(dx));	// 105400 push    dx ;~ 2FE6:139D
cs=0x2fe6;eip=0x00139e; 	X(PUSH(di));	// 105401 push    di ;~ 2FE6:139E
cs=0x2fe6;eip=0x00139f; 	T(MOV(ax, *(dw*)((&unk_4b0db))));	// 105402 mov     ax, word ptr unk_4B0DB ;~ 2FE6:139F
cs=0x2fe6;eip=0x0013a2; 	T(MOV(di, ax));	// 105403 mov     di, ax ;~ 2FE6:13A2
cs=0x2fe6;eip=0x0013a4; 	T(MOV(cx, 0x0FF));	// 105404 mov     cx, 0FFh ;~ 2FE6:13A4
loc_3f7e7:
	// 11108 
cs=0x2fe6;eip=0x0013a7; 	T(MOV(bx, cx));	// 105407 mov     bx, cx ;~ 2FE6:13A7
cs=0x2fe6;eip=0x0013a9; 	T(AND(bl, 0x0F));	// 105408 and     bl, 0Fh ;~ 2FE6:13A9
cs=0x2fe6;eip=0x0013ac; 	T(MOV(dl, *(raddr(ds,bx+0x371B))));	// 105409 mov     dl, [bx+371Bh] ;~ 2FE6:13AC
cs=0x2fe6;eip=0x0013b0; 	T(SHR(dl, 1));	// 105410 shr     dl, 1 ;~ 2FE6:13B0
cs=0x2fe6;eip=0x0013b2; 	T(MOV(bx, cx));	// 105411 mov     bx, cx ;~ 2FE6:13B2
cs=0x2fe6;eip=0x0013b4; 	T(SHR(bl, 1));	// 105412 shr     bl, 1 ;~ 2FE6:13B4
cs=0x2fe6;eip=0x0013b6; 	T(SHR(bl, 1));	// 105413 shr     bl, 1 ;~ 2FE6:13B6
cs=0x2fe6;eip=0x0013b8; 	T(SHR(bl, 1));	// 105414 shr     bl, 1 ;~ 2FE6:13B8
cs=0x2fe6;eip=0x0013ba; 	T(SHR(bl, 1));	// 105415 shr     bl, 1 ;~ 2FE6:13BA
cs=0x2fe6;eip=0x0013bc; 	T(OR(dl, *(raddr(ds,bx+0x371B))));	// 105416 or      dl, [bx+371Bh] ;~ 2FE6:13BC
cs=0x2fe6;eip=0x0013c0; 	T(MOV(bx, cx));	// 105417 mov     bx, cx ;~ 2FE6:13C0
cs=0x2fe6;eip=0x0013c2; 	X(MOV(*(raddr(ds,bx+di)), dl));	// 105418 mov     [bx+di], dl ;~ 2FE6:13C2
cs=0x2fe6;eip=0x0013c4; 	R(LOOP(loc_3f7e7));	// 105419 loop    loc_3F7E7 ;~ 2FE6:13C4
cs=0x2fe6;eip=0x0013c6; 	X(MOV(*(raddr(ds,di)), cl));	// 105420 mov     [di], cl ;~ 2FE6:13C6
cs=0x2fe6;eip=0x0013c8; 	X(POP(di));	// 105421 pop     di ;~ 2FE6:13C8
cs=0x2fe6;eip=0x0013c9; 	X(POP(dx));	// 105422 pop     dx ;~ 2FE6:13C9
cs=0x2fe6;eip=0x0013ca; 	X(POP(bx));	// 105423 pop     bx ;~ 2FE6:13CA
cs=0x2fe6;eip=0x0013cb; 	X(POP(cx));	// 105424 pop     cx ;~ 2FE6:13CB
cs=0x2fe6;eip=0x0013cc; 	X(POP(ax));	// 105425 pop     ax ;~ 2FE6:13CC
cs=0x2fe6;eip=0x0013cd; 	R(RETN(0));	// 105426 retn ;~ 2FE6:13CD

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_3e47b: 	goto loc_3e47b;
        case m2c::kloc_3e496: 	goto loc_3e496;
        case m2c::kloc_3e4c8: 	goto loc_3e4c8;
        case m2c::kloc_3e4eb: 	goto loc_3e4eb;
        case m2c::kloc_3e564: 	goto loc_3e564;
        case m2c::kloc_3e567: 	goto loc_3e567;
        case m2c::kloc_3e5e0: 	goto loc_3e5e0;
        case m2c::kloc_3e5eb: 	goto loc_3e5eb;
        case m2c::kloc_3e5f4: 	goto loc_3e5f4;
        case m2c::kloc_3e5ff: 	goto loc_3e5ff;
        case m2c::kloc_3e64f: 	goto loc_3e64f;
        case m2c::kloc_3e67c: 	goto loc_3e67c;
        case m2c::kloc_3e685: 	goto loc_3e685;
        case m2c::kloc_3e6a5: 	goto loc_3e6a5;
        case m2c::kloc_3e6b8: 	goto loc_3e6b8;
        case m2c::kloc_3e6ff: 	goto loc_3e6ff;
        case m2c::kloc_3e709: 	goto loc_3e709;
        case m2c::kloc_3e723: 	goto loc_3e723;
        case m2c::kloc_3e737: 	goto loc_3e737;
        case m2c::kloc_3e763: 	goto loc_3e763;
        case m2c::kloc_3e77d: 	goto loc_3e77d;
        case m2c::kloc_3e785: 	goto loc_3e785;
        case m2c::kloc_3e78d: 	goto loc_3e78d;
        case m2c::kloc_3e7b6: 	goto loc_3e7b6;
        case m2c::kloc_3e7c8: 	goto loc_3e7c8;
        case m2c::kloc_3e7cb: 	goto loc_3e7cb;
        case m2c::kloc_3e7fc: 	goto loc_3e7fc;
        case m2c::kloc_3e808: 	goto loc_3e808;
        case m2c::kloc_3e81a: 	goto loc_3e81a;
        case m2c::kloc_3e82c: 	goto loc_3e82c;
        case m2c::kloc_3e831: 	goto loc_3e831;
        case m2c::kloc_3e89c: 	goto loc_3e89c;
        case m2c::kloc_3e8a5: 	goto loc_3e8a5;
        case m2c::kloc_3e8bf: 	goto loc_3e8bf;
        case m2c::kloc_3e8d9: 	goto loc_3e8d9;
        case m2c::kloc_3e8f3: 	goto loc_3e8f3;
        case m2c::kloc_3e90d: 	goto loc_3e90d;
        case m2c::kloc_3e928: 	goto loc_3e928;
        case m2c::kloc_3e942: 	goto loc_3e942;
        case m2c::kloc_3e94b: 	goto loc_3e94b;
        case m2c::kloc_3e95d: 	goto loc_3e95d;
        case m2c::kloc_3e98d: 	goto loc_3e98d;
        case m2c::kloc_3e997: 	goto loc_3e997;
        case m2c::kloc_3e9a2: 	goto loc_3e9a2;
        case m2c::kloc_3e9ad: 	goto loc_3e9ad;
        case m2c::kloc_3e9c3: 	goto loc_3e9c3;
        case m2c::kloc_3e9d2: 	goto loc_3e9d2;
        case m2c::kloc_3e9e1: 	goto loc_3e9e1;
        case m2c::kloc_3e9f6: 	goto loc_3e9f6;
        case m2c::kloc_3e9ff: 	goto loc_3e9ff;
        case m2c::kloc_3ea08: 	goto loc_3ea08;
        case m2c::kloc_3ea18: 	goto loc_3ea18;
        case m2c::kloc_3ea21: 	goto loc_3ea21;
        case m2c::kloc_3ea38: 	goto loc_3ea38;
        case m2c::kloc_3ea47: 	goto loc_3ea47;
        case m2c::kloc_3ea57: 	goto loc_3ea57;
        case m2c::kloc_3ea7d: 	goto loc_3ea7d;
        case m2c::kloc_3ea99: 	goto loc_3ea99;
        case m2c::kloc_3eaae: 	goto loc_3eaae;
        case m2c::kloc_3eae2: 	goto loc_3eae2;
        case m2c::kloc_3eaef: 	goto loc_3eaef;
        case m2c::kloc_3eb03: 	goto loc_3eb03;
        case m2c::kloc_3eb08: 	goto loc_3eb08;
        case m2c::kloc_3eb2a: 	goto loc_3eb2a;
        case m2c::kloc_3eb2e: 	goto loc_3eb2e;
        case m2c::kloc_3eb54: 	goto loc_3eb54;
        case m2c::kloc_3eb59: 	goto loc_3eb59;
        case m2c::kloc_3eb69: 	goto loc_3eb69;
        case m2c::kloc_3eb8e: 	goto loc_3eb8e;
        case m2c::kloc_3eb90: 	goto loc_3eb90;
        case m2c::kloc_3eb9b: 	goto loc_3eb9b;
        case m2c::kloc_3ebb7: 	goto loc_3ebb7;
        case m2c::kloc_3ebc4: 	goto loc_3ebc4;
        case m2c::kloc_3ebdf: 	goto loc_3ebdf;
        case m2c::kloc_3ec09: 	goto loc_3ec09;
        case m2c::kloc_3ec0d: 	goto loc_3ec0d;
        case m2c::kloc_3ec1c: 	goto loc_3ec1c;
        case m2c::kloc_3ec7f: 	goto loc_3ec7f;
        case m2c::kloc_3ec99: 	goto loc_3ec99;
        case m2c::kloc_3ed0c: 	goto loc_3ed0c;
        case m2c::kloc_3ed18: 	goto loc_3ed18;
        case m2c::kloc_3ed3d: 	goto loc_3ed3d;
        case m2c::kloc_3ed54: 	goto loc_3ed54;
        case m2c::kloc_3ed5d: 	goto loc_3ed5d;
        case m2c::kloc_3ed68: 	goto loc_3ed68;
        case m2c::kloc_3ed84: 	goto loc_3ed84;
        case m2c::kloc_3edb9: 	goto loc_3edb9;
        case m2c::kloc_3edce: 	goto loc_3edce;
        case m2c::kloc_3ee53: 	goto loc_3ee53;
        case m2c::kloc_3ee71: 	goto loc_3ee71;
        case m2c::kloc_3ee8e: 	goto loc_3ee8e;
        case m2c::kloc_3eeb2: 	goto loc_3eeb2;
        case m2c::kloc_3eed4: 	goto loc_3eed4;
        case m2c::kloc_3eedf: 	goto loc_3eedf;
        case m2c::kloc_3eee2: 	goto loc_3eee2;
        case m2c::kloc_3eefd: 	goto loc_3eefd;
        case m2c::kloc_3ef1c: 	goto loc_3ef1c;
        case m2c::kloc_3ef53: 	goto loc_3ef53;
        case m2c::kloc_3ef6c: 	goto loc_3ef6c;
        case m2c::kloc_3ef84: 	goto loc_3ef84;
        case m2c::kloc_3ef97: 	goto loc_3ef97;
        case m2c::kloc_3ef9a: 	goto loc_3ef9a;
        case m2c::kloc_3efc3: 	goto loc_3efc3;
        case m2c::kloc_3efe5: 	goto loc_3efe5;
        case m2c::kloc_3eff0: 	goto loc_3eff0;
        case m2c::kloc_3eff3: 	goto loc_3eff3;
        case m2c::kloc_3f00d: 	goto loc_3f00d;
        case m2c::kloc_3f012: 	goto loc_3f012;
        case m2c::kloc_3f027: 	goto loc_3f027;
        case m2c::kloc_3f089: 	goto loc_3f089;
        case m2c::kloc_3f09b: 	goto loc_3f09b;
        case m2c::kloc_3f09d: 	goto loc_3f09d;
        case m2c::kloc_3f0b7: 	goto loc_3f0b7;
        case m2c::kloc_3f0bc: 	goto loc_3f0bc;
        case m2c::kloc_3f0d0: 	goto loc_3f0d0;
        case m2c::kloc_3f132: 	goto loc_3f132;
        case m2c::kloc_3f144: 	goto loc_3f144;
        case m2c::kloc_3f146: 	goto loc_3f146;
        case m2c::kloc_3f181: 	goto loc_3f181;
        case m2c::kloc_3f1b3: 	goto loc_3f1b3;
        case m2c::kloc_3f1e3: 	goto loc_3f1e3;
        case m2c::kloc_3f1fb: 	goto loc_3f1fb;
        case m2c::kloc_3f22c: 	goto loc_3f22c;
        case m2c::kloc_3f240: 	goto loc_3f240;
        case m2c::kloc_3f28c: 	goto loc_3f28c;
        case m2c::kloc_3f295: 	goto loc_3f295;
        case m2c::kloc_3f2e2: 	goto loc_3f2e2;
        case m2c::kloc_3f2f4: 	goto loc_3f2f4;
        case m2c::kloc_3f310: 	goto loc_3f310;
        case m2c::kloc_3f31a: 	goto loc_3f31a;
        case m2c::kloc_3f331: 	goto loc_3f331;
        case m2c::kloc_3f350: 	goto loc_3f350;
        case m2c::kloc_3f375: 	goto loc_3f375;
        case m2c::kloc_3f386: 	goto loc_3f386;
        case m2c::kloc_3f3ad: 	goto loc_3f3ad;
        case m2c::kloc_3f3c0: 	goto loc_3f3c0;
        case m2c::kloc_3f3c7: 	goto loc_3f3c7;
        case m2c::kloc_3f3e2: 	goto loc_3f3e2;
        case m2c::kloc_3f401: 	goto loc_3f401;
        case m2c::kloc_3f405: 	goto loc_3f405;
        case m2c::kloc_3f43f: 	goto loc_3f43f;
        case m2c::kloc_3f4bf: 	goto loc_3f4bf;
        case m2c::kloc_3f4d1: 	goto loc_3f4d1;
        case m2c::kloc_3f4ed: 	goto loc_3f4ed;
        case m2c::kloc_3f4f7: 	goto loc_3f4f7;
        case m2c::kloc_3f50e: 	goto loc_3f50e;
        case m2c::kloc_3f52d: 	goto loc_3f52d;
        case m2c::kloc_3f55b: 	goto loc_3f55b;
        case m2c::kloc_3f597: 	goto loc_3f597;
        case m2c::kloc_3f5ab: 	goto loc_3f5ab;
        case m2c::kloc_3f5d3: 	goto loc_3f5d3;
        case m2c::kloc_3f635: 	goto loc_3f635;
        case m2c::kloc_3f64a: 	goto loc_3f64a;
        case m2c::kloc_3f65c: 	goto loc_3f65c;
        case m2c::kloc_3f682: 	goto loc_3f682;
        case m2c::kloc_3f6d6: 	goto loc_3f6d6;
        case m2c::kloc_3f727: 	goto loc_3f727;
        case m2c::kloc_3f73e: 	goto loc_3f73e;
        case m2c::kloc_3f74c: 	goto loc_3f74c;
        case m2c::kloc_3f764: 	goto loc_3f764;
        case m2c::kloc_3f788: 	goto loc_3f788;
        case m2c::kloc_3f79a: 	goto loc_3f79a;
        case m2c::kloc_3f7c6: 	goto loc_3f7c6;
        case m2c::kloc_3f7d8: 	goto loc_3f7d8;
        case m2c::kloc_3f7e7: 	goto loc_3f7e7;
        case m2c::klocret_3e594: 	goto locret_3e594;
        case m2c::klocret_3ee90: 	goto locret_3ee90;
        case m2c::kret_2fe6_1221: 	goto ret_2fe6_1221;
        case m2c::kret_2fe6_130f: 	goto ret_2fe6_130f;
        case m2c::kret_2fe6_135c: 	goto ret_2fe6_135c;
        case m2c::kret_2fe6_c65: 	goto ret_2fe6_c65;
        case m2c::kseg031_proc: 	goto seg031_proc;
        case m2c::ksub_3e446: 	goto sub_3e446;
        case m2c::ksub_3e4ae: 	goto sub_3e4ae;
        case m2c::ksub_3e4d1: 	goto sub_3e4d1;
        case m2c::ksub_3e4f4: 	goto sub_3e4f4;
        case m2c::ksub_3e56b: 	goto sub_3e56b;
        case m2c::ksub_3e595: 	goto sub_3e595;
        case m2c::ksub_3e5af: 	goto sub_3e5af;
        case m2c::ksub_3e7d3: 	goto sub_3e7d3;
        case m2c::ksub_3eab6: 	goto sub_3eab6;
        case m2c::ksub_3ebcc: 	goto sub_3ebcc;
        case m2c::ksub_3ee5b: 	goto sub_3ee5b;
        case m2c::ksub_3ee91: 	goto sub_3ee91;
        case m2c::ksub_3eeea: 	goto sub_3eeea;
        case m2c::ksub_3efa2: 	goto sub_3efa2;
        case m2c::ksub_3f14e: 	goto sub_3f14e;
        case m2c::ksub_3f1c0: 	goto sub_3f1c0;
        case m2c::ksub_3f1ec: 	goto sub_3f1ec;
        case m2c::ksub_3f234: 	goto sub_3f234;
        case m2c::ksub_3f24b: 	goto sub_3f24b;
        case m2c::ksub_3f356: 	goto sub_3f356;
        case m2c::ksub_3f382: 	goto sub_3f382;
        case m2c::ksub_3f3ce: 	goto sub_3f3ce;
        case m2c::ksub_3f563: 	goto sub_3f563;
        case m2c::ksub_3f7da: 	goto sub_3f7da;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, _source);m2c::stackDump(_state); abort();
    };
}

