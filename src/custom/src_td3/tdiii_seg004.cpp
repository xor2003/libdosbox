/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool _group4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group4:
    _begin:
sub_1ab4a:
	// 21133 
cs=0xc56;eip=0x00000a; 	X(PUSH(bp));	// 21134 push    bp ;~ 0C56:000A
ret_c56_b:
	// 5620 
cs=0xc56;eip=0x00000b; 	T(MOV(bp, sp));	// 21135 mov     bp, sp ;~ 0C56:000B
cs=0xc56;eip=0x00000d; 	X(POP(bp));	// 21136 pop     bp ;~ 0C56:000D
cs=0xc56;eip=0x00000e; 	R(RETF(0));	// 21137 retf ;~ 0C56:000E
sub_1ab4f:
	// 21144 
cs=0xc56;eip=0x00000f; 	X(PUSH(si));	// 21145 push    si ;~ 0C56:000F
ret_c56_10:
	// 5621 
cs=0xc56;eip=0x000010; 	X(PUSH(di));	// 21146 push    di ;~ 0C56:0010
cs=0xc56;eip=0x000011; 	X(PUSH(es));	// 21147 push    es ;~ 0C56:0011
cs=0xc56;eip=0x000012; 	X(PUSH(ds));	// 21148 push    ds ;~ 0C56:0012
cs=0xc56;eip=0x000013; 	X(PUSH(bp));	// 21149 push    bp ;~ 0C56:0013
cs=0xc56;eip=0x000014; 	T(MOV(bx, 0x300));	// 21150 mov     bx, 300h ;~ 0C56:0014
cs=0xc56;eip=0x000017; 	T(MOV(ah, 0x48));	// 21151 mov     ah, 48h ;~ 0C56:0017
cs=0xc56;eip=0x000019; 	R(_INT(0x21));	// 21152 int     21h             ; DOS - 2+ - ALLOCATE MEMORY ;~ 0C56:0019
cs=0xc56;eip=0x00001b; 	X(MOV(word_2d4f8, ax));	// 21154 mov     word_2D4F8, ax ;~ 0C56:001B
cs=0xc56;eip=0x00001e; 	X(MOV(word_3a61e, ax));	// 21155 mov     word_3A61E, ax ;~ 0C56:001E
cs=0xc56;eip=0x000021; 	X(MOV(word_3a61c, 0));	// 21156 mov     word_3A61C, 0 ;~ 0C56:0021
cs=0xc56;eip=0x000027; 	T(MOV(ax, 1));	// 21157 mov     ax, 1 ;~ 0C56:0027
cs=0xc56;eip=0x00002a; 	R(JNC(loc_1ab6e));	// 21158 jnb     short loc_1AB6E ;~ 0C56:002A
cs=0xc56;eip=0x00002c; 	T(SUB(ax, ax));	// 21159 sub     ax, ax ;~ 0C56:002C
loc_1ab6e:
	// 5622 
cs=0xc56;eip=0x00002e; 	X(POP(bp));	// 21162 pop     bp ;~ 0C56:002E
cs=0xc56;eip=0x00002f; 	X(POP(ds));	// 21163 pop     ds ;~ 0C56:002F
cs=0xc56;eip=0x000030; 	X(POP(es));	// 21164 pop     es ;~ 0C56:0030
cs=0xc56;eip=0x000031; 	X(POP(di));	// 21165 pop     di ;~ 0C56:0031
cs=0xc56;eip=0x000032; 	X(POP(si));	// 21166 pop     si ;~ 0C56:0032
cs=0xc56;eip=0x000033; 	R(RETF(0));	// 21167 retf ;~ 0C56:0033
sub_1ab74:
	// 21174 
cs=0xc56;eip=0x000034; 	X(PUSH(si));	// 21175 push    si ;~ 0C56:0034
ret_c56_35:
	// 5623 
cs=0xc56;eip=0x000035; 	X(PUSH(di));	// 21176 push    di ;~ 0C56:0035
cs=0xc56;eip=0x000036; 	X(PUSH(es));	// 21177 push    es ;~ 0C56:0036
cs=0xc56;eip=0x000037; 	X(PUSH(ds));	// 21178 push    ds ;~ 0C56:0037
cs=0xc56;eip=0x000038; 	X(PUSH(bp));	// 21179 push    bp ;~ 0C56:0038
cs=0xc56;eip=0x000039; 	T(MOV(es, word_2d4f8));	// 21180 mov     es, word_2D4F8 ;~ 0C56:0039
cs=0xc56;eip=0x00003d; 	T(MOV(ah, 0x49));	// 21181 mov     ah, 49h ;~ 0C56:003D
cs=0xc56;eip=0x00003f; 	R(_INT(0x21));	// 21182 int     21h             ; DOS - 2+ - FREE MEMORY ;~ 0C56:003F
cs=0xc56;eip=0x000041; 	X(POP(bp));	// 21184 pop     bp ;~ 0C56:0041
cs=0xc56;eip=0x000042; 	X(POP(ds));	// 21185 pop     ds ;~ 0C56:0042
cs=0xc56;eip=0x000043; 	X(POP(es));	// 21186 pop     es ;~ 0C56:0043
cs=0xc56;eip=0x000044; 	X(POP(di));	// 21187 pop     di ;~ 0C56:0044
cs=0xc56;eip=0x000045; 	X(POP(si));	// 21188 pop     si ;~ 0C56:0045
cs=0xc56;eip=0x000046; 	R(RETF(0));	// 21189 retf ;~ 0C56:0046
sub_1ab87:
	// 21197 
#undef arg_0
#define arg_0 6
	// 21200 arg_0           = word ptr  6 ;~ 0C56:0047
#undef arg_2
#define arg_2 8
	// 21201 arg_2           = word ptr  8 ;~ 0C56:0047
#undef arg_4
#define arg_4 0x0A
	// 21202 arg_4           = word ptr  0Ah ;~ 0C56:0047
#undef arg_6
#define arg_6 0x0C
	// 21203 arg_6           = word ptr  0Ch ;~ 0C56:0047
ret_c56_47:
	// 5624 
cs=0xc56;eip=0x000047; 	X(MOV(byte_37b7f, 1));	// 21205 mov     byte_37B7F, 1 ;~ 0C56:0047
cs=0xc56;eip=0x00004c; 	X(MOV(word_2d500, 0x102));	// 21206 mov     word_2D500, 102h ;~ 0C56:004C
cs=0xc56;eip=0x000052; 	X(MOV(word_2d502, 0));	// 21207 mov     word_2D502, 0 ;~ 0C56:0052
cs=0xc56;eip=0x000058; 	X(MOV(word_2d504, 9));	// 21208 mov     word_2D504, 9 ;~ 0C56:0058
cs=0xc56;eip=0x00005e; 	X(MOV(word_2d506, 0x200));	// 21209 mov     word_2D506, 200h ;~ 0C56:005E
cs=0xc56;eip=0x000064; 	X(MOV(word_2d512, 0));	// 21210 mov     word_2D512, 0 ;~ 0C56:0064
cs=0xc56;eip=0x00006a; 	X(PUSH(bp));	// 21211 push    bp ;~ 0C56:006A
cs=0xc56;eip=0x00006b; 	T(MOV(bp, sp));	// 21212 mov     bp, sp ;~ 0C56:006B
cs=0xc56;eip=0x00006d; 	X(PUSH(di));	// 21213 push    di ;~ 0C56:006D
cs=0xc56;eip=0x00006e; 	X(PUSH(si));	// 21214 push    si ;~ 0C56:006E
cs=0xc56;eip=0x00006f; 	X(PUSH(ds));	// 21215 push    ds ;~ 0C56:006F
cs=0xc56;eip=0x000070; 	X(PUSH(es));	// 21216 push    es ;~ 0C56:0070
cs=0xc56;eip=0x000071; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 21217 mov     ax, [bp+arg_0] ;~ 0C56:0071
cs=0xc56;eip=0x000074; 	X(MOV(*(dw*)(((db*)&dword_2d0ec)), ax));	// 21218 mov     word ptr dword_2D0EC, ax ;~ 0C56:0074
cs=0xc56;eip=0x000077; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 21219 mov     ax, [bp+arg_2] ;~ 0C56:0077
cs=0xc56;eip=0x00007a; 	X(MOV(*(dw*)(((db*)&dword_2d0ec)+2), ax));	// 21220 mov     word ptr dword_2D0EC+2, ax ;~ 0C56:007A
cs=0xc56;eip=0x00007d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 21221 mov     ax, [bp+arg_4] ;~ 0C56:007D
cs=0xc56;eip=0x000080; 	T(MOV(di, ax));	// 21222 mov     di, ax ;~ 0C56:0080
cs=0xc56;eip=0x000082; 	X(MOV(*(dw*)(((db*)&dword_2d0f0)), ax));	// 21223 mov     word ptr dword_2D0F0, ax ;~ 0C56:0082
cs=0xc56;eip=0x000085; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 21224 mov     ax, [bp+arg_6] ;~ 0C56:0085
cs=0xc56;eip=0x000088; 	T(MOV(es, ax));	// 21225 mov     es, ax ;~ 0C56:0088
cs=0xc56;eip=0x00008a; 	X(MOV(*(dw*)(((db*)&dword_2d0f0)+2), ax));	// 21226 mov     word ptr dword_2D0F0+2, ax ;~ 0C56:008A
cs=0xc56;eip=0x00008d; 	R(CALL(sub_1ac80,0));	// 21227 call    sub_1AC80 ;~ 0C56:008D
loc_1abd0:
	// 5625 
cs=0xc56;eip=0x000090; 	R(CALL(sub_1ac9c,0));	// 21231 call    sub_1AC9C ;~ 0C56:0090
cs=0xc56;eip=0x000093; 	T(CMP(ax, 0x101));	// 21232 cmp     ax, 101h ;~ 0C56:0093
cs=0xc56;eip=0x000096; 	R(JNZ(loc_1abde));	// 21233 jnz     short loc_1ABDE ;~ 0C56:0096
cs=0xc56;eip=0x000098; 	X(POP(es));	// 21234 pop     es ;~ 0C56:0098
cs=0xc56;eip=0x000099; 	X(POP(ds));	// 21235 pop     ds ;~ 0C56:0099
cs=0xc56;eip=0x00009a; 	X(POP(si));	// 21236 pop     si ;~ 0C56:009A
cs=0xc56;eip=0x00009b; 	X(POP(di));	// 21237 pop     di ;~ 0C56:009B
cs=0xc56;eip=0x00009c; 	X(POP(bp));	// 21238 pop     bp ;~ 0C56:009C
cs=0xc56;eip=0x00009d; 	R(RETF(0));	// 21239 retf ;~ 0C56:009D
loc_1abde:
	// 5626 
cs=0xc56;eip=0x00009e; 	T(CMP(ax, 0x100));	// 21243 cmp     ax, 100h ;~ 0C56:009E
cs=0xc56;eip=0x0000a1; 	R(JNZ(loc_1abfd));	// 21244 jnz     short loc_1ABFD ;~ 0C56:00A1
cs=0xc56;eip=0x0000a3; 	R(CALL(sub_1ad0a,0));	// 21245 call    sub_1AD0A ;~ 0C56:00A3
cs=0xc56;eip=0x0000a6; 	R(CALL(sub_1ac9c,0));	// 21246 call    sub_1AC9C ;~ 0C56:00A6
cs=0xc56;eip=0x0000a9; 	X(MOV(word_2d4fa, ax));	// 21247 mov     word_2D4FA, ax ;~ 0C56:00A9
cs=0xc56;eip=0x0000ac; 	X(MOV(word_2d4fc, ax));	// 21248 mov     word_2D4FC, ax ;~ 0C56:00AC
cs=0xc56;eip=0x0000af; 	X(MOV(byte_2d509, al));	// 21249 mov     byte_2D509, al ;~ 0C56:00AF
cs=0xc56;eip=0x0000b2; 	X(MOV(byte_2d508, al));	// 21250 mov     byte_2D508, al ;~ 0C56:00B2
cs=0xc56;eip=0x0000b5; 	T(MOV(al, byte_2d509));	// 21251 mov     al, byte_2D509 ;~ 0C56:00B5
cs=0xc56;eip=0x0000b8; 	R(CALL(sub_1ad1d,0));	// 21252 call    sub_1AD1D ;~ 0C56:00B8
cs=0xc56;eip=0x0000bb; 	R(JMP(loc_1abd0));	// 21253 jmp     short loc_1ABD0 ;~ 0C56:00BB
loc_1abfd:
	// 5627 
cs=0xc56;eip=0x0000bd; 	X(MOV(word_2d4fa, ax));	// 21257 mov     word_2D4FA, ax ;~ 0C56:00BD
cs=0xc56;eip=0x0000c0; 	X(MOV(word_2d4fe, ax));	// 21258 mov     word_2D4FE, ax ;~ 0C56:00C0
cs=0xc56;eip=0x0000c3; 	T(MOV(es, word_2d4f8));	// 21259 mov     es, word_2D4F8 ;~ 0C56:00C3
cs=0xc56;eip=0x0000c7; 	T(CMP(ax, word_2d500));	// 21260 cmp     ax, word_2D500 ;~ 0C56:00C7
cs=0xc56;eip=0x0000cb; 	R(JL(loc_1ac1b));	// 21261 jl      short loc_1AC1B ;~ 0C56:00CB
cs=0xc56;eip=0x0000cd; 	T(MOV(ax, word_2d4fc));	// 21262 mov     ax, word_2D4FC ;~ 0C56:00CD
cs=0xc56;eip=0x0000d0; 	X(MOV(word_2d4fa, ax));	// 21263 mov     word_2D4FA, ax ;~ 0C56:00D0
cs=0xc56;eip=0x0000d3; 	T(MOV(al, byte_2d508));	// 21264 mov     al, byte_2D508 ;~ 0C56:00D3
cs=0xc56;eip=0x0000d6; 	X(PUSH(ax));	// 21265 push    ax ;~ 0C56:00D6
cs=0xc56;eip=0x0000d7; 	X(INC(word_2d502));	// 21266 inc     word_2D502 ;~ 0C56:00D7
loc_1ac1b:
	// 5628 
cs=0xc56;eip=0x0000db; 	T(CMP(word_2d4fa, 0x0FF));	// 21270 cmp     word_2D4FA, 0FFh ;~ 0C56:00DB
cs=0xc56;eip=0x0000e1; 	R(JLE(loc_1ac3b));	// 21271 jle     short loc_1AC3B ;~ 0C56:00E1
cs=0xc56;eip=0x0000e3; 	T(MOV(bx, word_2d4fa));	// 21272 mov     bx, word_2D4FA ;~ 0C56:00E3
cs=0xc56;eip=0x0000e7; 	R(CALL(sub_1ad29,0));	// 21273 call    sub_1AD29 ;~ 0C56:00E7
cs=0xc56;eip=0x0000ea; 	T(MOV(al, *(raddr(es,bx+2))));	// 21274 mov     al, es:[bx+2] ;~ 0C56:00EA
cs=0xc56;eip=0x0000ee; 	X(PUSH(ax));	// 21275 push    ax ;~ 0C56:00EE
cs=0xc56;eip=0x0000ef; 	X(INC(word_2d502));	// 21276 inc     word_2D502 ;~ 0C56:00EF
cs=0xc56;eip=0x0000f3; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 21277 mov     ax, es:[bx] ;~ 0C56:00F3
cs=0xc56;eip=0x0000f6; 	X(MOV(word_2d4fa, ax));	// 21278 mov     word_2D4FA, ax ;~ 0C56:00F6
cs=0xc56;eip=0x0000f9; 	R(JMP(loc_1ac1b));	// 21279 jmp     short loc_1AC1B ;~ 0C56:00F9
loc_1ac3b:
	// 5629 
cs=0xc56;eip=0x0000fb; 	X(PUSH(ds));	// 21283 push    ds ;~ 0C56:00FB
cs=0xc56;eip=0x0000fc; 	X(POP(es));	// 21284 pop     es ;~ 0C56:00FC
cs=0xc56;eip=0x0000fd; 	T(MOV(ax, word_2d4fa));	// 21286 mov     ax, word_2D4FA ;~ 0C56:00FD
cs=0xc56;eip=0x000100; 	X(MOV(byte_2d508, al));	// 21287 mov     byte_2D508, al ;~ 0C56:0100
cs=0xc56;eip=0x000103; 	X(MOV(byte_2d509, al));	// 21288 mov     byte_2D509, al ;~ 0C56:0103
cs=0xc56;eip=0x000106; 	X(PUSH(ax));	// 21289 push    ax ;~ 0C56:0106
cs=0xc56;eip=0x000107; 	X(INC(word_2d502));	// 21290 inc     word_2D502 ;~ 0C56:0107
cs=0xc56;eip=0x00010b; 	T(MOV(cx, word_2d502));	// 21291 mov     cx, word_2D502 ;~ 0C56:010B
cs=0xc56;eip=0x00010f; 	R(JCXZ(loc_1ac57));	// 21292 jcxz    short loc_1AC57 ;~ 0C56:010F
loc_1ac51:
	// 5630 
cs=0xc56;eip=0x000111; 	X(POP(ax));	// 21295 pop     ax ;~ 0C56:0111
cs=0xc56;eip=0x000112; 	R(CALL(sub_1ad1d,0));	// 21296 call    sub_1AD1D ;~ 0C56:0112
cs=0xc56;eip=0x000115; 	R(LOOP(loc_1ac51));	// 21297 loop    loc_1AC51 ;~ 0C56:0115
loc_1ac57:
	// 5631 
cs=0xc56;eip=0x000117; 	X(MOV(word_2d502, cx));	// 21300 mov     word_2D502, cx ;~ 0C56:0117
cs=0xc56;eip=0x00011b; 	R(CALL(sub_1ad30,0));	// 21301 call    sub_1AD30 ;~ 0C56:011B
cs=0xc56;eip=0x00011e; 	T(MOV(ax, word_2d4fe));	// 21302 mov     ax, word_2D4FE ;~ 0C56:011E
cs=0xc56;eip=0x000121; 	X(MOV(word_2d4fc, ax));	// 21303 mov     word_2D4FC, ax ;~ 0C56:0121
cs=0xc56;eip=0x000124; 	T(MOV(bx, word_2d500));	// 21304 mov     bx, word_2D500 ;~ 0C56:0124
cs=0xc56;eip=0x000128; 	T(CMP(bx, word_2d506));	// 21305 cmp     bx, word_2D506 ;~ 0C56:0128
cs=0xc56;eip=0x00012c; 	R(JL(loc_1ac7d));	// 21306 jl      short loc_1AC7D ;~ 0C56:012C
cs=0xc56;eip=0x00012e; 	T(CMP(word_2d504, 0x0C));	// 21307 cmp     word_2D504, 0Ch ;~ 0C56:012E
cs=0xc56;eip=0x000133; 	R(JZ(loc_1ac7d));	// 21308 jz      short loc_1AC7D ;~ 0C56:0133
cs=0xc56;eip=0x000135; 	X(INC(word_2d504));	// 21309 inc     word_2D504 ;~ 0C56:0135
cs=0xc56;eip=0x000139; 	X(SHL(word_2d506, 1));	// 21310 shl     word_2D506, 1 ;~ 0C56:0139
loc_1ac7d:
	// 5632 
cs=0xc56;eip=0x00013d; 	R(JMP(loc_1abd0));	// 21314 jmp     loc_1ABD0 ;~ 0C56:013D
sub_1ac80:
	// 21321 
cs=0xc56;eip=0x000140; 	X(PUSH(cx));	// 21322 push    cx ;~ 0C56:0140
ret_c56_141:
	// 5633 
cs=0xc56;eip=0x000141; 	X(PUSH(di));	// 21323 push    di ;~ 0C56:0141
cs=0xc56;eip=0x000142; 	X(PUSH(si));	// 21324 push    si ;~ 0C56:0142
cs=0xc56;eip=0x000143; 	X(PUSH(ds));	// 21325 push    ds ;~ 0C56:0143
cs=0xc56;eip=0x000144; 	X(PUSH(es));	// 21326 push    es ;~ 0C56:0144
cs=0xc56;eip=0x000145; 	T(MOV(cx, 0x400));	// 21327 mov     cx, 400h ;~ 0C56:0145
cs=0xc56;eip=0x000148; 	T(LES(di, off_2d4f4));	// 21328 les     di, off_2D4F4 ;~ 0C56:0148
cs=0xc56;eip=0x00014c; 	T(LDS(si, dword_2d0ec));	// 21330 lds     si, dword_2D0EC ;~ 0C56:014C
	// 21331 rep movsb ;~ 0C56:0150
cs=0xc56;eip=0x000150; 	X(	REP MOVSB);	// 21331 rep movsb ;~ 0C56:0150
cs=0xc56;eip=0x000152; 	X(POP(es));	// 21332 pop     es ;~ 0C56:0152
cs=0xc56;eip=0x000153; 	X(POP(ds));	// 21333 pop     ds ;~ 0C56:0153
cs=0xc56;eip=0x000154; 	X(MOV(*(dw*)(((db*)&dword_2d0ec)), si));	// 21334 mov     word ptr dword_2D0EC, si ;~ 0C56:0154
cs=0xc56;eip=0x000158; 	X(POP(si));	// 21335 pop     si ;~ 0C56:0158
cs=0xc56;eip=0x000159; 	X(POP(di));	// 21336 pop     di ;~ 0C56:0159
cs=0xc56;eip=0x00015a; 	X(POP(cx));	// 21337 pop     cx ;~ 0C56:015A
cs=0xc56;eip=0x00015b; 	R(RETN(0));	// 21338 retn ;~ 0C56:015B
sub_1ac9c:
	// 21345 
cs=0xc56;eip=0x00015c; 	T(MOV(ax, word_2d512));	// 21347 mov     ax, word_2D512 ;~ 0C56:015C
ret_c56_15f:
	// 5634 
cs=0xc56;eip=0x00015f; 	T(ADD(ax, word_2d504));	// 21348 add     ax, word_2D504 ;~ 0C56:015F
cs=0xc56;eip=0x000163; 	X(XCHG(ax, word_2d512));	// 21349 xchg    ax, word_2D512 ;~ 0C56:0163
cs=0xc56;eip=0x000167; 	T(MOV(cx, 8));	// 21350 mov     cx, 8 ;~ 0C56:0167
cs=0xc56;eip=0x00016a; 	T(XOR(dx, dx));	// 21351 xor     dx, dx ;~ 0C56:016A
cs=0xc56;eip=0x00016c; 	T(DIV2(cx));	// 21352 div     cx ;~ 0C56:016C
cs=0xc56;eip=0x00016e; 	T(CMP(ax, 0x3FD));	// 21353 cmp     ax, 3FDh ;~ 0C56:016E
cs=0xc56;eip=0x000171; 	R(JL(loc_1ace7));	// 21354 jl      short loc_1ACE7 ;~ 0C56:0171
cs=0xc56;eip=0x000173; 	X(PUSH(dx));	// 21355 push    dx ;~ 0C56:0173
cs=0xc56;eip=0x000174; 	T(ADD(dx, word_2d504));	// 21356 add     dx, word_2D504 ;~ 0C56:0174
cs=0xc56;eip=0x000178; 	X(MOV(word_2d512, dx));	// 21357 mov     word_2D512, dx ;~ 0C56:0178
cs=0xc56;eip=0x00017c; 	T(MOV(cx, 0x400));	// 21358 mov     cx, 400h ;~ 0C56:017C
cs=0xc56;eip=0x00017f; 	T(MOV(bp, ax));	// 21359 mov     bp, ax ;~ 0C56:017F
cs=0xc56;eip=0x000181; 	T(SUB(cx, ax));	// 21360 sub     cx, ax ;~ 0C56:0181
cs=0xc56;eip=0x000183; 	T(ADD(ax, 0x12B4));	// 21361 add     ax, 12B4h ;~ 0C56:0183
cs=0xc56;eip=0x000186; 	T(MOV(si, ax));	// 21362 mov     si, ax ;~ 0C56:0186
cs=0xc56;eip=0x000188; 	T(di = offset(dseg,unk_2d0f4));	// 21363 lea     di, unk_2D0F4 ;~ 0C56:0188
	// 21364 rep movsb ;~ 0C56:018C
cs=0xc56;eip=0x00018c; 	X(	REP MOVSB);	// 21364 rep movsb ;~ 0C56:018C
cs=0xc56;eip=0x00018e; 	T(MOV(cx, bp));	// 21365 mov     cx, bp ;~ 0C56:018E
cs=0xc56;eip=0x000190; 	X(PUSH(si));	// 21366 push    si ;~ 0C56:0190
cs=0xc56;eip=0x000191; 	X(PUSH(es));	// 21367 push    es ;~ 0C56:0191
cs=0xc56;eip=0x000192; 	X(PUSH(ds));	// 21368 push    ds ;~ 0C56:0192
cs=0xc56;eip=0x000193; 	T(MOV(es, *(dw*)(((db*)&off_2d4f4)+2)));	// 21369 mov     es, word ptr off_2D4F4+2 ;~ 0C56:0193
cs=0xc56;eip=0x000197; 	T(LDS(si, dword_2d0ec));	// 21371 lds     si, dword_2D0EC ;~ 0C56:0197
	// 21372 rep movsb ;~ 0C56:019B
cs=0xc56;eip=0x00019b; 	X(	REP MOVSB);	// 21372 rep movsb ;~ 0C56:019B
cs=0xc56;eip=0x00019d; 	X(POP(ds));	// 21373 pop     ds ;~ 0C56:019D
cs=0xc56;eip=0x00019e; 	X(POP(es));	// 21374 pop     es ;~ 0C56:019E
cs=0xc56;eip=0x00019f; 	X(MOV(*(dw*)(((db*)&dword_2d0ec)), si));	// 21376 mov     word ptr dword_2D0EC, si ;~ 0C56:019F
cs=0xc56;eip=0x0001a3; 	X(POP(si));	// 21377 pop     si ;~ 0C56:01A3
cs=0xc56;eip=0x0001a4; 	T(XOR(ax, ax));	// 21378 xor     ax, ax ;~ 0C56:01A4
cs=0xc56;eip=0x0001a6; 	X(POP(dx));	// 21379 pop     dx ;~ 0C56:01A6
loc_1ace7:
	// 5635 
cs=0xc56;eip=0x0001a7; 	T(ADD(ax, 0x12B4));	// 21382 add     ax, 12B4h ;~ 0C56:01A7
cs=0xc56;eip=0x0001aa; 	T(MOV(si, ax));	// 21383 mov     si, ax ;~ 0C56:01AA
cs=0xc56;eip=0x0001ac; 	T(LODSW);	// 21384 lodsw ;~ 0C56:01AC
cs=0xc56;eip=0x0001ad; 	T(MOV(bx, ax));	// 21385 mov     bx, ax ;~ 0C56:01AD
cs=0xc56;eip=0x0001af; 	T(LODSB);	// 21386 lodsb ;~ 0C56:01AF
cs=0xc56;eip=0x0001b0; 	T(MOV(cx, dx));	// 21387 mov     cx, dx ;~ 0C56:01B0
cs=0xc56;eip=0x0001b2; 	R(JCXZ(loc_1acfa));	// 21388 jcxz    short loc_1ACFA ;~ 0C56:01B2
loc_1acf4:
	// 5636 
cs=0xc56;eip=0x0001b4; 	T(SHR(al, 1));	// 21391 shr     al, 1 ;~ 0C56:01B4
cs=0xc56;eip=0x0001b6; 	T(RCR(bx, 1));	// 21392 rcr     bx, 1 ;~ 0C56:01B6
cs=0xc56;eip=0x0001b8; 	R(LOOP(loc_1acf4));	// 21393 loop    loc_1ACF4 ;~ 0C56:01B8
loc_1acfa:
	// 5637 
cs=0xc56;eip=0x0001ba; 	T(MOV(ax, bx));	// 21396 mov     ax, bx ;~ 0C56:01BA
cs=0xc56;eip=0x0001bc; 	T(MOV(bx, word_2d504));	// 21397 mov     bx, word_2D504 ;~ 0C56:01BC
cs=0xc56;eip=0x0001c0; 	T(SUB(bx, 9));	// 21398 sub     bx, 9 ;~ 0C56:01C0
cs=0xc56;eip=0x0001c3; 	T(SHL(bx, 1));	// 21399 shl     bx, 1 ;~ 0C56:01C3
cs=0xc56;eip=0x0001c5; 	T(AND(ax, *(dw*)(raddr(ds,bx+0x16CA))));	// 21400 and     ax, [bx+16CAh] ;~ 0C56:01C5
cs=0xc56;eip=0x0001c9; 	R(RETN(0));	// 21401 retn ;~ 0C56:01C9
sub_1ad0a:
	// 21408 
cs=0xc56;eip=0x0001ca; 	X(MOV(word_2d504, 9));	// 21409 mov     word_2D504, 9 ;~ 0C56:01CA
ret_c56_1d0:
	// 5638 
cs=0xc56;eip=0x0001d0; 	X(MOV(word_2d506, 0x200));	// 21410 mov     word_2D506, 200h ;~ 0C56:01D0
cs=0xc56;eip=0x0001d6; 	X(MOV(word_2d500, 0x102));	// 21411 mov     word_2D500, 102h ;~ 0C56:01D6
cs=0xc56;eip=0x0001dc; 	R(RETN(0));	// 21412 retn ;~ 0C56:01DC
sub_1ad1d:
	// 21419 
cs=0xc56;eip=0x0001dd; 	X(PUSH(es));	// 21421 push    es ;~ 0C56:01DD
ret_c56_1de:
	// 5639 
cs=0xc56;eip=0x0001de; 	T(LES(di, dword_2d0f0));	// 21422 les     di, dword_2D0F0 ;~ 0C56:01DE
cs=0xc56;eip=0x0001e2; 	X(STOSB);	// 21423 stosb ;~ 0C56:01E2
cs=0xc56;eip=0x0001e3; 	X(MOV(*(dw*)(((db*)&dword_2d0f0)), di));	// 21424 mov     word ptr dword_2D0F0, di ;~ 0C56:01E3
cs=0xc56;eip=0x0001e7; 	X(POP(es));	// 21425 pop     es ;~ 0C56:01E7
cs=0xc56;eip=0x0001e8; 	R(RETN(0));	// 21426 retn ;~ 0C56:01E8
sub_1ad29:
	// 21433 
cs=0xc56;eip=0x0001e9; 	T(MOV(bp, bx));	// 21435 mov     bp, bx ;~ 0C56:01E9
ret_c56_1eb:
	// 5640 
cs=0xc56;eip=0x0001eb; 	T(SHL(bx, 1));	// 21436 shl     bx, 1 ;~ 0C56:01EB
cs=0xc56;eip=0x0001ed; 	T(ADD(bx, bp));	// 21437 add     bx, bp ;~ 0C56:01ED
cs=0xc56;eip=0x0001ef; 	R(RETN(0));	// 21438 retn ;~ 0C56:01EF
sub_1ad30:
	// 21445 
cs=0xc56;eip=0x0001f0; 	T(MOV(bx, word_2d500));	// 21446 mov     bx, word_2D500 ;~ 0C56:01F0
ret_c56_1f4:
	// 5641 
cs=0xc56;eip=0x0001f4; 	R(CALL(sub_1ad29,0));	// 21447 call    sub_1AD29 ;~ 0C56:01F4
cs=0xc56;eip=0x0001f7; 	X(PUSH(es));	// 21448 push    es ;~ 0C56:01F7
cs=0xc56;eip=0x0001f8; 	T(MOV(es, word_2d4f8));	// 21449 mov     es, word_2D4F8 ;~ 0C56:01F8
cs=0xc56;eip=0x0001fc; 	T(MOV(al, byte_2d509));	// 21450 mov     al, byte_2D509 ;~ 0C56:01FC
cs=0xc56;eip=0x0001ff; 	X(MOV(*(raddr(es,bx+2)), al));	// 21451 mov     es:[bx+2], al ;~ 0C56:01FF
cs=0xc56;eip=0x000203; 	T(MOV(ax, word_2d4fc));	// 21452 mov     ax, word_2D4FC ;~ 0C56:0203
cs=0xc56;eip=0x000206; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 21453 mov     es:[bx], ax ;~ 0C56:0206
cs=0xc56;eip=0x000209; 	X(POP(es));	// 21454 pop     es ;~ 0C56:0209
cs=0xc56;eip=0x00020a; 	X(INC(word_2d500));	// 21455 inc     word_2D500 ;~ 0C56:020A
cs=0xc56;eip=0x00020e; 	R(RETN(0));	// 21456 retn ;~ 0C56:020E
sub_1bd4f:
	// 21465 
cs=0xc56;eip=0x00120f; 	T(MOV(bx, 0x20F));	// 21466 mov     bx, 20Fh ;~ 0C56:120F
ret_c56_1212:
	// 5642 
cs=0xc56;eip=0x001212; 	T(MOV(cx, 0x800));	// 21467 mov     cx, 800h ;~ 0C56:1212
cs=0xc56;eip=0x001215; 	T(SUB(ax, ax));	// 21468 sub     ax, ax ;~ 0C56:1215
loc_1bd57:
	// 5643 
cs=0xc56;eip=0x001217; 	X(MOV(*(dw*)(raddr(cs,bx)), ax));	// 21471 mov     cs:[bx], ax ;~ 0C56:1217
cs=0xc56;eip=0x00121a; 	T(ADD(bx, 2));	// 21472 add     bx, 2 ;~ 0C56:121A
cs=0xc56;eip=0x00121d; 	R(LOOP(loc_1bd57));	// 21473 loop    loc_1BD57 ;~ 0C56:121D
cs=0xc56;eip=0x00121f; 	R(RETF(0));	// 21474 retf ;~ 0C56:121F
sub_1bd60:
	// 21481 
cs=0xc56;eip=0x001220; 	X(PUSH(bp));	// 21482 push    bp ;~ 0C56:1220
ret_c56_1221:
	// 5644 
cs=0xc56;eip=0x001221; 	X(PUSH(si));	// 21483 push    si ;~ 0C56:1221
cs=0xc56;eip=0x001222; 	X(PUSH(di));	// 21484 push    di ;~ 0C56:1222
cs=0xc56;eip=0x001223; 	T(MOV(dx, 0x0FFF));	// 21485 mov     dx, 0FFFh ;~ 0C56:1223
cs=0xc56;eip=0x001226; 	T(MOV(bp, 0x0FFFF));	// 21486 mov     bp, 0FFFFh ;~ 0C56:1226
cs=0xc56;eip=0x001229; 	T(MOV(bx, word_2d514));	// 21487 mov     bx, word_2D514 ;~ 0C56:1229
cs=0xc56;eip=0x00122d; 	T(MOV(di, 0x20F));	// 21488 mov     di, 20Fh ;~ 0C56:122D
cs=0xc56;eip=0x001230; 	T(MOV(al, byte_352f2));	// 21489 mov     al, byte_352F2 ;~ 0C56:1230
cs=0xc56;eip=0x001233; 	T(OR(al, al));	// 21490 or      al, al ;~ 0C56:1233
cs=0xc56;eip=0x001235; 	R(JNZ(loc_1bdde));	// 21491 jnz     short loc_1BDDE ;~ 0C56:1235
cs=0xc56;eip=0x001237; 	X(MOV(*(dw*)(raddr(cs,bx+di)), bp));	// 21492 mov     cs:[bx+di], bp ;~ 0C56:1237
cs=0xc56;eip=0x00123a; 	T(ADD(bx, 2));	// 21493 add     bx, 2 ;~ 0C56:123A
cs=0xc56;eip=0x00123d; 	T(AND(bx, dx));	// 21494 and     bx, dx ;~ 0C56:123D
cs=0xc56;eip=0x00123f; 	T(MOV(ax, word_35b33));	// 21495 mov     ax, word_35B33 ;~ 0C56:123F
cs=0xc56;eip=0x001242; 	T(CMP(ax, bp));	// 21496 cmp     ax, bp ;~ 0C56:1242
cs=0xc56;eip=0x001244; 	R(JNZ(loc_1bd87));	// 21497 jnz     short loc_1BD87 ;~ 0C56:1244
cs=0xc56;eip=0x001246; 	T(DEC(ax));	// 21498 dec     ax ;~ 0C56:1246
loc_1bd87:
	// 5645 
cs=0xc56;eip=0x001247; 	X(MOV(*(dw*)(raddr(cs,bx+di)), ax));	// 21501 mov     cs:[bx+di], ax ;~ 0C56:1247
cs=0xc56;eip=0x00124a; 	T(ADD(bx, 2));	// 21502 add     bx, 2 ;~ 0C56:124A
cs=0xc56;eip=0x00124d; 	T(AND(bx, dx));	// 21503 and     bx, dx ;~ 0C56:124D
cs=0xc56;eip=0x00124f; 	T(MOV(ax, word_35db3));	// 21504 mov     ax, word_35DB3 ;~ 0C56:124F
cs=0xc56;eip=0x001252; 	T(CMP(ax, bp));	// 21505 cmp     ax, bp ;~ 0C56:1252
cs=0xc56;eip=0x001254; 	R(JNZ(loc_1bd97));	// 21506 jnz     short loc_1BD97 ;~ 0C56:1254
cs=0xc56;eip=0x001256; 	T(DEC(ax));	// 21507 dec     ax ;~ 0C56:1256
loc_1bd97:
	// 5646 
cs=0xc56;eip=0x001257; 	X(MOV(*(dw*)(raddr(cs,bx+di)), ax));	// 21510 mov     cs:[bx+di], ax ;~ 0C56:1257
cs=0xc56;eip=0x00125a; 	T(ADD(bx, 2));	// 21511 add     bx, 2 ;~ 0C56:125A
cs=0xc56;eip=0x00125d; 	T(AND(bx, dx));	// 21512 and     bx, dx ;~ 0C56:125D
cs=0xc56;eip=0x00125f; 	T(MOV(ax, word_36033));	// 21513 mov     ax, word_36033 ;~ 0C56:125F
cs=0xc56;eip=0x001262; 	T(CMP(ax, bp));	// 21514 cmp     ax, bp ;~ 0C56:1262
cs=0xc56;eip=0x001264; 	R(JNZ(loc_1bda7));	// 21515 jnz     short loc_1BDA7 ;~ 0C56:1264
cs=0xc56;eip=0x001266; 	T(DEC(ax));	// 21516 dec     ax ;~ 0C56:1266
loc_1bda7:
	// 5647 
cs=0xc56;eip=0x001267; 	X(MOV(*(dw*)(raddr(cs,bx+di)), ax));	// 21519 mov     cs:[bx+di], ax ;~ 0C56:1267
cs=0xc56;eip=0x00126a; 	T(ADD(bx, 2));	// 21520 add     bx, 2 ;~ 0C56:126A
cs=0xc56;eip=0x00126d; 	T(AND(bx, dx));	// 21521 and     bx, dx ;~ 0C56:126D
cs=0xc56;eip=0x00126f; 	T(MOV(ax, word_352d1));	// 21522 mov     ax, word_352D1 ;~ 0C56:126F
cs=0xc56;eip=0x001272; 	T(CMP(ax, bp));	// 21523 cmp     ax, bp ;~ 0C56:1272
cs=0xc56;eip=0x001274; 	R(JNZ(loc_1bdb7));	// 21524 jnz     short loc_1BDB7 ;~ 0C56:1274
cs=0xc56;eip=0x001276; 	T(DEC(ax));	// 21525 dec     ax ;~ 0C56:1276
loc_1bdb7:
	// 5648 
cs=0xc56;eip=0x001277; 	X(MOV(*(dw*)(raddr(cs,bx+di)), ax));	// 21528 mov     cs:[bx+di], ax ;~ 0C56:1277
cs=0xc56;eip=0x00127a; 	T(ADD(bx, 2));	// 21529 add     bx, 2 ;~ 0C56:127A
cs=0xc56;eip=0x00127d; 	T(AND(bx, dx));	// 21530 and     bx, dx ;~ 0C56:127D
cs=0xc56;eip=0x00127f; 	T(MOV(ax, word_352cf));	// 21531 mov     ax, word_352CF ;~ 0C56:127F
cs=0xc56;eip=0x001282; 	T(CMP(ax, bp));	// 21532 cmp     ax, bp ;~ 0C56:1282
cs=0xc56;eip=0x001284; 	R(JNZ(loc_1bdc7));	// 21533 jnz     short loc_1BDC7 ;~ 0C56:1284
cs=0xc56;eip=0x001286; 	T(DEC(ax));	// 21534 dec     ax ;~ 0C56:1286
loc_1bdc7:
	// 5649 
cs=0xc56;eip=0x001287; 	X(MOV(*(dw*)(raddr(cs,bx+di)), ax));	// 21537 mov     cs:[bx+di], ax ;~ 0C56:1287
cs=0xc56;eip=0x00128a; 	T(ADD(bx, 2));	// 21538 add     bx, 2 ;~ 0C56:128A
cs=0xc56;eip=0x00128d; 	T(AND(bx, dx));	// 21539 and     bx, dx ;~ 0C56:128D
cs=0xc56;eip=0x00128f; 	R(CALL(sub_1c084,0));	// 21540 call    sub_1C084 ;~ 0C56:128F
cs=0xc56;eip=0x001292; 	X(MOV(word_2d514, bx));	// 21541 mov     word_2D514, bx ;~ 0C56:1292
cs=0xc56;eip=0x001296; 	X(MOV(word_2d516, bx));	// 21542 mov     word_2D516, bx ;~ 0C56:1296
loc_1bdda:
	// 5650 
cs=0xc56;eip=0x00129a; 	X(POP(di));	// 21545 pop     di ;~ 0C56:129A
cs=0xc56;eip=0x00129b; 	X(POP(si));	// 21546 pop     si ;~ 0C56:129B
cs=0xc56;eip=0x00129c; 	X(POP(bp));	// 21547 pop     bp ;~ 0C56:129C
cs=0xc56;eip=0x00129d; 	R(RETF(0));	// 21548 retf ;~ 0C56:129D
loc_1bdde:
	// 5651 
cs=0xc56;eip=0x00129e; 	X(MOV(byte_37547, 0));	// 21552 mov     byte_37547, 0 ;~ 0C56:129E
cs=0xc56;eip=0x0012a3; 	T(CMP(byte_37514, 0));	// 21553 cmp     byte_37514, 0 ;~ 0C56:12A3
cs=0xc56;eip=0x0012a8; 	R(JNZ(loc_1bdda));	// 21554 jnz     short loc_1BDDA ;~ 0C56:12A8
cs=0xc56;eip=0x0012aa; 	T(CMP(al, 2));	// 21555 cmp     al, 2 ;~ 0C56:12AA
cs=0xc56;eip=0x0012ac; 	R(JC(loc_1be11));	// 21556 jb      short loc_1BE11 ;~ 0C56:12AC
cs=0xc56;eip=0x0012ae; 	X(DEC(byte_352f3));	// 21557 dec     byte_352F3 ;~ 0C56:12AE
cs=0xc56;eip=0x0012b2; 	R(JNZ(loc_1be46));	// 21558 jnz     short loc_1BE46 ;~ 0C56:12B2
cs=0xc56;eip=0x0012b4; 	T(CMP(byte_37515, 0));	// 21559 cmp     byte_37515, 0 ;~ 0C56:12B4
cs=0xc56;eip=0x0012b9; 	R(JNZ(loc_1be14));	// 21560 jnz     short loc_1BE14 ;~ 0C56:12B9
cs=0xc56;eip=0x0012bb; 	T(SUB(ax, ax));	// 21561 sub     ax, ax ;~ 0C56:12BB
cs=0xc56;eip=0x0012bd; 	X(PUSH(ax));	// 21562 push    ax ;~ 0C56:12BD
cs=0xc56;eip=0x0012be; 	R(CALLF(sub_1e56e,0));	// 21563 call    sub_1E56E ;~ 0C56:12BE
cs=0xc56;eip=0x0012c3; 	T(ADD(sp, 2));	// 21564 add     sp, 2 ;~ 0C56:12C3
cs=0xc56;eip=0x0012c6; 	T(CMP(byte_37515, 0));	// 21565 cmp     byte_37515, 0 ;~ 0C56:12C6
cs=0xc56;eip=0x0012cb; 	R(JNZ(loc_1be14));	// 21566 jnz     short loc_1BE14 ;~ 0C56:12CB
cs=0xc56;eip=0x0012cd; 	X(POP(di));	// 21567 pop     di ;~ 0C56:12CD
cs=0xc56;eip=0x0012ce; 	X(POP(si));	// 21568 pop     si ;~ 0C56:12CE
cs=0xc56;eip=0x0012cf; 	X(POP(bp));	// 21569 pop     bp ;~ 0C56:12CF
cs=0xc56;eip=0x0012d0; 	R(RETF(0));	// 21570 retf ;~ 0C56:12D0
loc_1be11:
	// 5652 
cs=0xc56;eip=0x0012d1; 	R(JMP(loc_1beaf));	// 21574 jmp     loc_1BEAF ;~ 0C56:12D1
loc_1be14:
	// 5653 
cs=0xc56;eip=0x0012d4; 	R(CALLF(sub_17f22,0));	// 21579 call    sub_17F22 ;~ 0C56:12D4
cs=0xc56;eip=0x0012d9; 	X(MOV(byte_37515, 0));	// 21580 mov     byte_37515, 0 ;~ 0C56:12D9
cs=0xc56;eip=0x0012de; 	X(MOV(byte_352f2, 1));	// 21581 mov     byte_352F2, 1 ;~ 0C56:12DE
cs=0xc56;eip=0x0012e3; 	T(MOV(bx, word_2d516));	// 21582 mov     bx, word_2D516 ;~ 0C56:12E3
cs=0xc56;eip=0x0012e7; 	T(ADD(bx, 2));	// 21583 add     bx, 2 ;~ 0C56:12E7
cs=0xc56;eip=0x0012ea; 	T(AND(bx, 0x0FFF));	// 21584 and     bx, 0FFFh ;~ 0C56:12EA
cs=0xc56;eip=0x0012ee; 	X(MOV(word_2d514, bx));	// 21585 mov     word_2D514, bx ;~ 0C56:12EE
cs=0xc56;eip=0x0012f2; 	T(SUB(bx, bx));	// 21586 sub     bx, bx ;~ 0C56:12F2
cs=0xc56;eip=0x0012f4; 	T(MOV(cx, 8));	// 21587 mov     cx, 8 ;~ 0C56:12F4
loc_1be37:
	// 5654 
cs=0xc56;eip=0x0012f7; 	X(MOV(*(dw*)(raddr(ds,bx-0x658D)), 0));	// 21590 mov     word ptr [bx-658Dh], 0 ;~ 0C56:12F7
cs=0xc56;eip=0x0012fd; 	T(ADD(bx, 2));	// 21591 add     bx, 2 ;~ 0C56:12FD
cs=0xc56;eip=0x001300; 	R(LOOP(loc_1be37));	// 21592 loop    loc_1BE37 ;~ 0C56:1300
cs=0xc56;eip=0x001302; 	X(POP(di));	// 21593 pop     di ;~ 0C56:1302
cs=0xc56;eip=0x001303; 	X(POP(si));	// 21594 pop     si ;~ 0C56:1303
cs=0xc56;eip=0x001304; 	X(POP(bp));	// 21595 pop     bp ;~ 0C56:1304
cs=0xc56;eip=0x001305; 	R(RETF(0));	// 21596 retf ;~ 0C56:1305
loc_1be46:
	// 5655 
cs=0xc56;eip=0x001306; 	T(CMP(byte_37b7b, 1));	// 21600 cmp     byte_37B7B, 1 ;~ 0C56:1306
cs=0xc56;eip=0x00130b; 	R(JNZ(loc_1be61));	// 21601 jnz     short loc_1BE61 ;~ 0C56:130B
cs=0xc56;eip=0x00130d; 	T(MOV(ax, word_36033));	// 21602 mov     ax, word_36033 ;~ 0C56:130D
cs=0xc56;eip=0x001310; 	T(SUB(ax, word_352ff));	// 21603 sub     ax, word_352FF ;~ 0C56:1310
cs=0xc56;eip=0x001314; 	T(SHL(ax, 1));	// 21604 shl     ax, 1 ;~ 0C56:1314
cs=0xc56;eip=0x001316; 	T(SHL(ax, 1));	// 21605 shl     ax, 1 ;~ 0C56:1316
cs=0xc56;eip=0x001318; 	T(SHL(ax, 1));	// 21606 shl     ax, 1 ;~ 0C56:1318
cs=0xc56;eip=0x00131a; 	X(MOV(word_36679, ax));	// 21607 mov     word_36679, ax ;~ 0C56:131A
cs=0xc56;eip=0x00131d; 	X(POP(di));	// 21608 pop     di ;~ 0C56:131D
cs=0xc56;eip=0x00131e; 	X(POP(si));	// 21609 pop     si ;~ 0C56:131E
cs=0xc56;eip=0x00131f; 	X(POP(bp));	// 21610 pop     bp ;~ 0C56:131F
cs=0xc56;eip=0x001320; 	R(RETF(0));	// 21611 retf ;~ 0C56:1320
loc_1be61:
	// 5656 
cs=0xc56;eip=0x001321; 	T(MOV(bx, word_378eb));	// 21615 mov     bx, word_378EB ;~ 0C56:1321
cs=0xc56;eip=0x001325; 	T(MOV(al, *(db*)(((db*)&word_2d092)+1)));	// 21616 mov     al, byte ptr word_2D092+1 ;~ 0C56:1325
cs=0xc56;eip=0x001328; 	T(MOV(ah, *(db*)(((db*)&word_2d094))));	// 21617 mov     ah, byte ptr word_2D094 ;~ 0C56:1328
cs=0xc56;eip=0x00132c; 	T(MOV(dl, *(db*)(((db*)&word_2d096)+1)));	// 21618 mov     dl, byte ptr word_2D096+1 ;~ 0C56:132C
cs=0xc56;eip=0x001330; 	T(MOV(dh, *(db*)(((db*)&word_2d098))));	// 21619 mov     dh, byte ptr word_2D098 ;~ 0C56:1330
cs=0xc56;eip=0x001334; 	T(OR(bx, bx));	// 21620 or      bx, bx ;~ 0C56:1334
cs=0xc56;eip=0x001336; 	R(JZ(loc_1be91));	// 21621 jz      short loc_1BE91 ;~ 0C56:1336
cs=0xc56;eip=0x001338; 	T(MOV(cl, *(raddr(ds,bx-0x5B87))));	// 21622 mov     cl, [bx-5B87h] ;~ 0C56:1338
cs=0xc56;eip=0x00133c; 	T(AND(cl, 0x3F));	// 21623 and     cl, 3Fh ;~ 0C56:133C
cs=0xc56;eip=0x00133f; 	T(CMP(cl, 0x12));	// 21624 cmp     cl, 12h ;~ 0C56:133F
cs=0xc56;eip=0x001342; 	R(JC(loc_1be89));	// 21625 jb      short loc_1BE89 ;~ 0C56:1342
cs=0xc56;eip=0x001344; 	T(CMP(cl, 0x14));	// 21626 cmp     cl, 14h ;~ 0C56:1344
cs=0xc56;eip=0x001347; 	R(JBE(loc_1be91));	// 21627 jbe     short loc_1BE91 ;~ 0C56:1347
loc_1be89:
	// 5657 
cs=0xc56;eip=0x001349; 	X(ADD(*(dw*)(raddr(ds,bx-0x5A47)), ax));	// 21630 add     [bx-5A47h], ax ;~ 0C56:1349
cs=0xc56;eip=0x00134d; 	X(ADD(*(dw*)(raddr(ds,bx-0x5907)), dx));	// 21631 add     [bx-5907h], dx ;~ 0C56:134D
loc_1be91:
	// 5658 
cs=0xc56;eip=0x001351; 	T(NEG(ax));	// 21635 neg     ax ;~ 0C56:1351
cs=0xc56;eip=0x001353; 	T(ADD(ax, word_35b33));	// 21636 add     ax, word_35B33 ;~ 0C56:1353
cs=0xc56;eip=0x001357; 	X(MOV(word_35b33, ax));	// 21637 mov     word_35B33, ax ;~ 0C56:1357
cs=0xc56;eip=0x00135a; 	X(MOV(word_363f9, ax));	// 21638 mov     word_363F9, ax ;~ 0C56:135A
cs=0xc56;eip=0x00135d; 	T(NEG(dx));	// 21639 neg     dx ;~ 0C56:135D
cs=0xc56;eip=0x00135f; 	T(ADD(dx, word_35db3));	// 21640 add     dx, word_35DB3 ;~ 0C56:135F
cs=0xc56;eip=0x001363; 	X(MOV(word_35db3, dx));	// 21641 mov     word_35DB3, dx ;~ 0C56:1363
cs=0xc56;eip=0x001367; 	X(MOV(word_36539, dx));	// 21642 mov     word_36539, dx ;~ 0C56:1367
cs=0xc56;eip=0x00136b; 	X(POP(di));	// 21643 pop     di ;~ 0C56:136B
cs=0xc56;eip=0x00136c; 	X(POP(si));	// 21644 pop     si ;~ 0C56:136C
cs=0xc56;eip=0x00136d; 	X(POP(bp));	// 21645 pop     bp ;~ 0C56:136D
cs=0xc56;eip=0x00136e; 	R(RETF(0));	// 21646 retf ;~ 0C56:136E
loc_1beaf:
	// 5659 
cs=0xc56;eip=0x00136f; 	T(CMP(byte_2d518, 0));	// 21650 cmp     byte_2D518, 0 ;~ 0C56:136F
cs=0xc56;eip=0x001374; 	R(CALL(sub_1bff9,0));	// 21651 call    sub_1BFF9 ;~ 0C56:1374
cs=0xc56;eip=0x001377; 	T(CMP(bx, word_2d516));	// 21652 cmp     bx, word_2D516 ;~ 0C56:1377
cs=0xc56;eip=0x00137b; 	R(JNZ(loc_1bf28));	// 21653 jnz     short loc_1BF28 ;~ 0C56:137B
cs=0xc56;eip=0x00137d; 	T(CMP(byte_375cd, 0));	// 21654 cmp     byte_375CD, 0 ;~ 0C56:137D
cs=0xc56;eip=0x001382; 	R(JNZ(loc_1bf01));	// 21655 jnz     short loc_1BF01 ;~ 0C56:1382
cs=0xc56;eip=0x001384; 	T(CMP(byte_37515, 0));	// 21656 cmp     byte_37515, 0 ;~ 0C56:1384
cs=0xc56;eip=0x001389; 	R(JNZ(loc_1befe));	// 21657 jnz     short loc_1BEFE ;~ 0C56:1389
cs=0xc56;eip=0x00138b; 	X(MOV(byte_34f9b, 0));	// 21658 mov     byte_34F9B, 0 ;~ 0C56:138B
cs=0xc56;eip=0x001390; 	T(SUB(dx, dx));	// 21659 sub     dx, dx ;~ 0C56:1390
cs=0xc56;eip=0x001392; 	R(CALLF(sub_1e611,0));	// 21660 call    sub_1E611 ;~ 0C56:1392
cs=0xc56;eip=0x001397; 	T(MOV(ax, 0x2B));	// 21661 mov     ax, 2Bh ; '+' ;~ 0C56:1397
cs=0xc56;eip=0x00139a; 	X(PUSH(ax));	// 21662 push    ax ;~ 0C56:139A
cs=0xc56;eip=0x00139b; 	R(CALLF(sub_1179c,0));	// 21663 call    sub_1179C ;~ 0C56:139B
cs=0xc56;eip=0x0013a0; 	T(ADD(sp, 2));	// 21664 add     sp, 2 ;~ 0C56:13A0
cs=0xc56;eip=0x0013a3; 	T(CMP(byte_37515, 0));	// 21665 cmp     byte_37515, 0 ;~ 0C56:13A3
cs=0xc56;eip=0x0013a8; 	R(JNZ(loc_1befe));	// 21666 jnz     short loc_1BEFE ;~ 0C56:13A8
cs=0xc56;eip=0x0013aa; 	X(MOV(byte_352f2, 0));	// 21667 mov     byte_352F2, 0 ;~ 0C56:13AA
cs=0xc56;eip=0x0013af; 	X(MOV(byte_352cb, 0));	// 21668 mov     byte_352CB, 0 ;~ 0C56:13AF
cs=0xc56;eip=0x0013b4; 	X(MOV(word_2beca, 2));	// 21669 mov     word_2BECA, 2 ;~ 0C56:13B4
cs=0xc56;eip=0x0013ba; 	X(POP(di));	// 21670 pop     di ;~ 0C56:13BA
cs=0xc56;eip=0x0013bb; 	X(POP(si));	// 21671 pop     si ;~ 0C56:13BB
cs=0xc56;eip=0x0013bc; 	X(POP(bp));	// 21672 pop     bp ;~ 0C56:13BC
cs=0xc56;eip=0x0013bd; 	R(RETF(0));	// 21673 retf ;~ 0C56:13BD
loc_1befe:
	// 5660 
cs=0xc56;eip=0x0013be; 	R(JMP(loc_1be14));	// 21678 jmp     loc_1BE14 ;~ 0C56:13BE
loc_1bf01:
	// 5661 
cs=0xc56;eip=0x0013c1; 	X(MOV(byte_352f2, 2));	// 21682 mov     byte_352F2, 2 ;~ 0C56:13C1
cs=0xc56;eip=0x0013c6; 	X(MOV(byte_352f3, 0x14));	// 21683 mov     byte_352F3, 14h ;~ 0C56:13C6
cs=0xc56;eip=0x0013cb; 	T(CMP(byte_37b7b, 1));	// 21684 cmp     byte_37B7B, 1 ;~ 0C56:13CB
cs=0xc56;eip=0x0013d0; 	R(JNZ(loc_1bf2c));	// 21685 jnz     short loc_1BF2C ;~ 0C56:13D0
cs=0xc56;eip=0x0013d2; 	T(MOV(ax, word_36033));	// 21686 mov     ax, word_36033 ;~ 0C56:13D2
cs=0xc56;eip=0x0013d5; 	T(SUB(ax, 0x10));	// 21687 sub     ax, 10h ;~ 0C56:13D5
cs=0xc56;eip=0x0013d8; 	X(MOV(word_36033, ax));	// 21688 mov     word_36033, ax ;~ 0C56:13D8
cs=0xc56;eip=0x0013db; 	T(SUB(ax, word_352ff));	// 21689 sub     ax, word_352FF ;~ 0C56:13DB
cs=0xc56;eip=0x0013df; 	T(SHL(ax, 1));	// 21690 shl     ax, 1 ;~ 0C56:13DF
cs=0xc56;eip=0x0013e1; 	T(SHL(ax, 1));	// 21691 shl     ax, 1 ;~ 0C56:13E1
cs=0xc56;eip=0x0013e3; 	T(SHL(ax, 1));	// 21692 shl     ax, 1 ;~ 0C56:13E3
cs=0xc56;eip=0x0013e5; 	X(MOV(word_36679, ax));	// 21693 mov     word_36679, ax ;~ 0C56:13E5
loc_1bf28:
	// 5662 
cs=0xc56;eip=0x0013e8; 	X(POP(di));	// 21696 pop     di ;~ 0C56:13E8
cs=0xc56;eip=0x0013e9; 	X(POP(si));	// 21697 pop     si ;~ 0C56:13E9
cs=0xc56;eip=0x0013ea; 	X(POP(bp));	// 21698 pop     bp ;~ 0C56:13EA
cs=0xc56;eip=0x0013eb; 	R(RETF(0));	// 21699 retf ;~ 0C56:13EB
loc_1bf2c:
	// 5663 
cs=0xc56;eip=0x0013ec; 	X(MOV(word_358b3, 0x10B));	// 21703 mov     word_358B3, 10Bh ;~ 0C56:13EC
cs=0xc56;eip=0x0013f2; 	T(MOV(ax, word_35b33));	// 21704 mov     ax, word_35B33 ;~ 0C56:13F2
cs=0xc56;eip=0x0013f5; 	T(MOV(dx, word_35db3));	// 21705 mov     dx, word_35DB3 ;~ 0C56:13F5
cs=0xc56;eip=0x0013f9; 	T(MOV(cx, word_36033));	// 21706 mov     cx, word_36033 ;~ 0C56:13F9
cs=0xc56;eip=0x0013fd; 	T(SUB(cx, 0x10));	// 21707 sub     cx, 10h ;~ 0C56:13FD
cs=0xc56;eip=0x001400; 	X(MOV(word_36033, cx));	// 21708 mov     word_36033, cx ;~ 0C56:1400
cs=0xc56;eip=0x001404; 	T(ADD(cx, 0x0C));	// 21709 add     cx, 0Ch ;~ 0C56:1404
cs=0xc56;eip=0x001407; 	T(MOV(bx, 2));	// 21710 mov     bx, 2 ;~ 0C56:1407
cs=0xc56;eip=0x00140a; 	R(CALL(sub_1bfa0,0));	// 21711 call    sub_1BFA0 ;~ 0C56:140A
cs=0xc56;eip=0x00140d; 	T(MOV(bx, word_2bf12));	// 21712 mov     bx, word_2BF12 ;~ 0C56:140D
cs=0xc56;eip=0x001411; 	T(SHR(bx, 1));	// 21713 shr     bx, 1 ;~ 0C56:1411
cs=0xc56;eip=0x001413; 	T(AND(bx, 0x7F));	// 21714 and     bx, 7Fh ;~ 0C56:1413
cs=0xc56;eip=0x001416; 	T(SUB(bx, 0x40));	// 21715 sub     bx, 40h ; '@' ;~ 0C56:1416
cs=0xc56;eip=0x001419; 	T(ADD(ax, bx));	// 21716 add     ax, bx ;~ 0C56:1419
cs=0xc56;eip=0x00141b; 	T(MOV(bx, *(dw*)(((db*)&word_2bf12)+1)));	// 21717 mov     bx, word_2BF12+1 ;~ 0C56:141B
cs=0xc56;eip=0x00141f; 	T(AND(bx, 0x7F));	// 21718 and     bx, 7Fh ;~ 0C56:141F
cs=0xc56;eip=0x001422; 	T(SUB(bx, 0x40));	// 21719 sub     bx, 40h ; '@' ;~ 0C56:1422
cs=0xc56;eip=0x001425; 	T(ADD(dx, bx));	// 21720 add     dx, bx ;~ 0C56:1425
cs=0xc56;eip=0x001427; 	T(MOV(bx, 8));	// 21721 mov     bx, 8 ;~ 0C56:1427
cs=0xc56;eip=0x00142a; 	R(CALL(sub_1bfa0,0));	// 21722 call    sub_1BFA0 ;~ 0C56:142A
cs=0xc56;eip=0x00142d; 	T(MOV(bx, word_378eb));	// 21723 mov     bx, word_378EB ;~ 0C56:142D
cs=0xc56;eip=0x001431; 	T(OR(bx, bx));	// 21724 or      bx, bx ;~ 0C56:1431
cs=0xc56;eip=0x001433; 	R(JZ(loc_1bf9c));	// 21725 jz      short loc_1BF9C ;~ 0C56:1433
cs=0xc56;eip=0x001435; 	T(MOV(cx, *(dw*)(raddr(ds,bx-0x5A47))));	// 21726 mov     cx, [bx-5A47h] ;~ 0C56:1435
cs=0xc56;eip=0x001439; 	X(MOV(word_35b41, cx));	// 21727 mov     word_35B41, cx ;~ 0C56:1439
cs=0xc56;eip=0x00143d; 	T(MOV(cx, *(dw*)(raddr(ds,bx-0x5907))));	// 21728 mov     cx, [bx-5907h] ;~ 0C56:143D
cs=0xc56;eip=0x001441; 	X(MOV(word_35dc1, cx));	// 21729 mov     word_35DC1, cx ;~ 0C56:1441
cs=0xc56;eip=0x001445; 	T(MOV(cx, *(dw*)(raddr(ds,bx-0x57C7))));	// 21730 mov     cx, [bx-57C7h] ;~ 0C56:1445
cs=0xc56;eip=0x001449; 	T(SHR(cx, 1));	// 21731 shr     cx, 1 ;~ 0C56:1449
cs=0xc56;eip=0x00144b; 	T(SHR(cx, 1));	// 21732 shr     cx, 1 ;~ 0C56:144B
cs=0xc56;eip=0x00144d; 	T(SHR(cx, 1));	// 21733 shr     cx, 1 ;~ 0C56:144D
cs=0xc56;eip=0x00144f; 	T(ADD(cx, 0x1C));	// 21734 add     cx, 1Ch ;~ 0C56:144F
cs=0xc56;eip=0x001452; 	X(MOV(word_36041, cx));	// 21735 mov     word_36041, cx ;~ 0C56:1452
cs=0xc56;eip=0x001456; 	X(MOV(word_358c1, 0x10B));	// 21736 mov     word_358C1, 10Bh ;~ 0C56:1456
loc_1bf9c:
	// 5664 
cs=0xc56;eip=0x00145c; 	X(POP(di));	// 21739 pop     di ;~ 0C56:145C
cs=0xc56;eip=0x00145d; 	X(POP(si));	// 21740 pop     si ;~ 0C56:145D
cs=0xc56;eip=0x00145e; 	X(POP(bp));	// 21741 pop     bp ;~ 0C56:145E
cs=0xc56;eip=0x00145f; 	R(RETF(0));	// 21742 retf ;~ 0C56:145F
sub_1bfa0:
	// 21749 
cs=0xc56;eip=0x001460; 	T(MOV(di, bx));	// 21751 mov     di, bx ;~ 0C56:1460
ret_c56_1462:
	// 5665 
cs=0xc56;eip=0x001462; 	X(MOV(*(dw*)(raddr(ds,di-0x658D)), 8));	// 21752 mov     word ptr [di-658Dh], 8 ;~ 0C56:1462
cs=0xc56;eip=0x001468; 	T(ADD(bx, 2));	// 21753 add     bx, 2 ;~ 0C56:1468
cs=0xc56;eip=0x00146b; 	T(MOV(si, bx));	// 21754 mov     si, bx ;~ 0C56:146B
cs=0xc56;eip=0x00146d; 	X(MOV(*(dw*)(raddr(ds,si-0x658D)), 7));	// 21755 mov     word ptr [si-658Dh], 7 ;~ 0C56:146D
cs=0xc56;eip=0x001473; 	T(ADD(bx, 2));	// 21756 add     bx, 2 ;~ 0C56:1473
cs=0xc56;eip=0x001476; 	X(MOV(*(dw*)(raddr(ds,bx-0x658D)), 6));	// 21757 mov     word ptr [bx-658Dh], 6 ;~ 0C56:1476
cs=0xc56;eip=0x00147c; 	T(ADD(ax, 8));	// 21758 add     ax, 8 ;~ 0C56:147C
cs=0xc56;eip=0x00147f; 	X(MOV(*(dw*)(raddr(ds,bx-0x630D)), ax));	// 21759 mov     [bx-630Dh], ax ;~ 0C56:147F
cs=0xc56;eip=0x001483; 	T(SUB(ax, 6));	// 21760 sub     ax, 6 ;~ 0C56:1483
cs=0xc56;eip=0x001486; 	X(MOV(*(dw*)(raddr(ds,si-0x630D)), ax));	// 21761 mov     [si-630Dh], ax ;~ 0C56:1486
cs=0xc56;eip=0x00148a; 	T(SUB(ax, 4));	// 21762 sub     ax, 4 ;~ 0C56:148A
cs=0xc56;eip=0x00148d; 	X(MOV(*(dw*)(raddr(ds,di-0x630D)), ax));	// 21763 mov     [di-630Dh], ax ;~ 0C56:148D
cs=0xc56;eip=0x001491; 	X(MOV(*(dw*)(raddr(ds,bx-0x608D)), dx));	// 21764 mov     [bx-608Dh], dx ;~ 0C56:1491
cs=0xc56;eip=0x001495; 	T(ADD(dx, 3));	// 21765 add     dx, 3 ;~ 0C56:1495
cs=0xc56;eip=0x001498; 	X(MOV(*(dw*)(raddr(ds,si-0x608D)), dx));	// 21766 mov     [si-608Dh], dx ;~ 0C56:1498
cs=0xc56;eip=0x00149c; 	T(SUB(dx, 7));	// 21767 sub     dx, 7 ;~ 0C56:149C
cs=0xc56;eip=0x00149f; 	X(MOV(*(dw*)(raddr(ds,di-0x608D)), dx));	// 21768 mov     [di-608Dh], dx ;~ 0C56:149F
cs=0xc56;eip=0x0014a3; 	T(ADD(cx, 4));	// 21769 add     cx, 4 ;~ 0C56:14A3
cs=0xc56;eip=0x0014a6; 	X(MOV(*(dw*)(raddr(ds,bx-0x5E0D)), cx));	// 21770 mov     [bx-5E0Dh], cx ;~ 0C56:14A6
cs=0xc56;eip=0x0014aa; 	T(SUB(cx, 8));	// 21771 sub     cx, 8 ;~ 0C56:14AA
cs=0xc56;eip=0x0014ad; 	X(MOV(*(dw*)(raddr(ds,si-0x5E0D)), cx));	// 21772 mov     [si-5E0Dh], cx ;~ 0C56:14AD
cs=0xc56;eip=0x0014b1; 	T(ADD(cx, 0x14));	// 21773 add     cx, 14h ;~ 0C56:14B1
cs=0xc56;eip=0x0014b4; 	X(MOV(*(dw*)(raddr(ds,di-0x5E0D)), cx));	// 21774 mov     [di-5E0Dh], cx ;~ 0C56:14B4
cs=0xc56;eip=0x0014b8; 	R(RETN(0));	// 21775 retn ;~ 0C56:14B8
sub_1bff9:
	// 21782 
cs=0xc56;eip=0x0014b9; 	X(PUSH(bp));	// 21783 push    bp ;~ 0C56:14B9
ret_c56_14ba:
	// 5666 
cs=0xc56;eip=0x0014ba; 	X(PUSH(di));	// 21784 push    di ;~ 0C56:14BA
cs=0xc56;eip=0x0014bb; 	T(MOV(di, 0x20F));	// 21785 mov     di, 20Fh ;~ 0C56:14BB
cs=0xc56;eip=0x0014be; 	T(MOV(dx, 0x0FFF));	// 21786 mov     dx, 0FFFh ;~ 0C56:14BE
cs=0xc56;eip=0x0014c1; 	T(MOV(bp, 0x0FFFF));	// 21787 mov     bp, 0FFFFh ;~ 0C56:14C1
cs=0xc56;eip=0x0014c4; 	T(MOV(bx, word_2d514));	// 21788 mov     bx, word_2D514 ;~ 0C56:14C4
loc_1c008:
	// 5667 
cs=0xc56;eip=0x0014c8; 	T(MOV(ax, *(dw*)(raddr(cs,bx+di))));	// 21791 mov     ax, cs:[bx+di] ;~ 0C56:14C8
cs=0xc56;eip=0x0014cb; 	T(ADD(bx, 2));	// 21792 add     bx, 2 ;~ 0C56:14CB
cs=0xc56;eip=0x0014ce; 	T(AND(bx, dx));	// 21793 and     bx, dx ;~ 0C56:14CE
cs=0xc56;eip=0x0014d0; 	T(CMP(ax, bp));	// 21794 cmp     ax, bp ;~ 0C56:14D0
cs=0xc56;eip=0x0014d2; 	R(JNZ(loc_1c008));	// 21795 jnz     short loc_1C008 ;~ 0C56:14D2
cs=0xc56;eip=0x0014d4; 	T(MOV(ax, *(dw*)(raddr(cs,bx+di))));	// 21796 mov     ax, cs:[bx+di] ;~ 0C56:14D4
cs=0xc56;eip=0x0014d7; 	X(MOV(word_35b33, ax));	// 21797 mov     word_35B33, ax ;~ 0C56:14D7
cs=0xc56;eip=0x0014da; 	X(MOV(word_363f9, ax));	// 21798 mov     word_363F9, ax ;~ 0C56:14DA
cs=0xc56;eip=0x0014dd; 	T(ADD(bx, 2));	// 21799 add     bx, 2 ;~ 0C56:14DD
cs=0xc56;eip=0x0014e0; 	T(AND(bx, dx));	// 21800 and     bx, dx ;~ 0C56:14E0
cs=0xc56;eip=0x0014e2; 	T(MOV(ax, *(dw*)(raddr(cs,bx+di))));	// 21801 mov     ax, cs:[bx+di] ;~ 0C56:14E2
cs=0xc56;eip=0x0014e5; 	X(MOV(word_35db3, ax));	// 21802 mov     word_35DB3, ax ;~ 0C56:14E5
cs=0xc56;eip=0x0014e8; 	X(MOV(word_36539, ax));	// 21803 mov     word_36539, ax ;~ 0C56:14E8
cs=0xc56;eip=0x0014eb; 	T(ADD(bx, 2));	// 21804 add     bx, 2 ;~ 0C56:14EB
cs=0xc56;eip=0x0014ee; 	T(AND(bx, dx));	// 21805 and     bx, dx ;~ 0C56:14EE
cs=0xc56;eip=0x0014f0; 	T(MOV(ax, *(dw*)(raddr(cs,bx+di))));	// 21806 mov     ax, cs:[bx+di] ;~ 0C56:14F0
cs=0xc56;eip=0x0014f3; 	X(MOV(word_36033, ax));	// 21807 mov     word_36033, ax ;~ 0C56:14F3
cs=0xc56;eip=0x0014f6; 	T(SUB(ax, word_352ff));	// 21808 sub     ax, word_352FF ;~ 0C56:14F6
cs=0xc56;eip=0x0014fa; 	T(SHL(ax, 1));	// 21809 shl     ax, 1 ;~ 0C56:14FA
cs=0xc56;eip=0x0014fc; 	T(SHL(ax, 1));	// 21810 shl     ax, 1 ;~ 0C56:14FC
cs=0xc56;eip=0x0014fe; 	T(SHL(ax, 1));	// 21811 shl     ax, 1 ;~ 0C56:14FE
cs=0xc56;eip=0x001500; 	X(MOV(word_36679, ax));	// 21812 mov     word_36679, ax ;~ 0C56:1500
cs=0xc56;eip=0x001503; 	T(ADD(bx, 2));	// 21813 add     bx, 2 ;~ 0C56:1503
cs=0xc56;eip=0x001506; 	T(AND(bx, dx));	// 21814 and     bx, dx ;~ 0C56:1506
cs=0xc56;eip=0x001508; 	T(MOV(ax, *(dw*)(raddr(cs,bx+di))));	// 21815 mov     ax, cs:[bx+di] ;~ 0C56:1508
cs=0xc56;eip=0x00150b; 	X(MOV(word_352d1, ax));	// 21816 mov     word_352D1, ax ;~ 0C56:150B
cs=0xc56;eip=0x00150e; 	T(SUB(ah, 0x40));	// 21817 sub     ah, 40h ; '@' ;~ 0C56:150E
cs=0xc56;eip=0x001511; 	T(MOV(al, ah));	// 21818 mov     al, ah ;~ 0C56:1511
cs=0xc56;eip=0x001513; 	X(MOV(word_367b9, ax));	// 21819 mov     word_367B9, ax ;~ 0C56:1513
cs=0xc56;eip=0x001516; 	T(ADD(bx, 2));	// 21820 add     bx, 2 ;~ 0C56:1516
cs=0xc56;eip=0x001519; 	T(AND(bx, dx));	// 21821 and     bx, dx ;~ 0C56:1519
cs=0xc56;eip=0x00151b; 	T(MOV(ax, *(dw*)(raddr(cs,bx+di))));	// 21822 mov     ax, cs:[bx+di] ;~ 0C56:151B
cs=0xc56;eip=0x00151e; 	X(MOV(word_352cf, ax));	// 21823 mov     word_352CF, ax ;~ 0C56:151E
cs=0xc56;eip=0x001521; 	T(ADD(bx, 2));	// 21824 add     bx, 2 ;~ 0C56:1521
cs=0xc56;eip=0x001524; 	T(AND(bx, dx));	// 21825 and     bx, dx ;~ 0C56:1524
cs=0xc56;eip=0x001526; 	X(PUSH(bx));	// 21826 push    bx ;~ 0C56:1526
cs=0xc56;eip=0x001527; 	X(PUSH(dx));	// 21827 push    dx ;~ 0C56:1527
cs=0xc56;eip=0x001528; 	X(PUSH(ax));	// 21828 push    ax ;~ 0C56:1528
cs=0xc56;eip=0x001529; 	R(CALLF(sub_247a6,0));	// 21829 call    sub_247A6 ;~ 0C56:1529
cs=0xc56;eip=0x00152e; 	T(ADD(sp, 2));	// 21830 add     sp, 2 ;~ 0C56:152E
cs=0xc56;eip=0x001531; 	T(MOV(ah, al));	// 21831 mov     ah, al ;~ 0C56:1531
cs=0xc56;eip=0x001533; 	T(SUB(al, al));	// 21832 sub     al, al ;~ 0C56:1533
cs=0xc56;eip=0x001535; 	X(MOV(word_368f9, ax));	// 21833 mov     word_368F9, ax ;~ 0C56:1535
cs=0xc56;eip=0x001538; 	X(POP(dx));	// 21834 pop     dx ;~ 0C56:1538
cs=0xc56;eip=0x001539; 	X(POP(bx));	// 21835 pop     bx ;~ 0C56:1539
cs=0xc56;eip=0x00153a; 	R(CALL(sub_1c144,0));	// 21836 call    sub_1C144 ;~ 0C56:153A
cs=0xc56;eip=0x00153d; 	X(MOV(word_2d514, bx));	// 21837 mov     word_2D514, bx ;~ 0C56:153D
cs=0xc56;eip=0x001541; 	X(POP(di));	// 21838 pop     di ;~ 0C56:1541
cs=0xc56;eip=0x001542; 	X(POP(bp));	// 21839 pop     bp ;~ 0C56:1542
cs=0xc56;eip=0x001543; 	R(RETN(0));	// 21840 retn ;~ 0C56:1543
sub_1c084:
	// 21847 
cs=0xc56;eip=0x001544; 	T(MOV(si, word_362b5));	// 21848 mov     si, word_362B5 ;~ 0C56:1544
ret_c56_1548:
	// 5668 
cs=0xc56;eip=0x001548; 	T(SHL(si, 1));	// 21849 shl     si, 1 ;~ 0C56:1548
cs=0xc56;eip=0x00154a; 	R(JMP(loc_1c09c));	// 21850 jmp     short loc_1C09C ;~ 0C56:154A
loc_1c08d:
	// 5669 
cs=0xc56;eip=0x00154d; 	T(TEST(*(dw*)(raddr(ds,si-0x5B87)), 0x2000));	// 21856 test    word ptr [si-5B87h], 2000h ;~ 0C56:154D
cs=0xc56;eip=0x001553; 	R(JZ(loc_1c09c));	// 21857 jz      short loc_1C09C ;~ 0C56:1553
cs=0xc56;eip=0x001555; 	T(CMP(*(dw*)(raddr(ds,si-0x4C87)), 0));	// 21858 cmp     word ptr [si-4C87h], 0 ;~ 0C56:1555
cs=0xc56;eip=0x00155a; 	R(JNZ(loc_1c0a2));	// 21859 jnz     short loc_1C0A2 ;~ 0C56:155A
loc_1c09c:
	// 5670 
cs=0xc56;eip=0x00155c; 	T(SUB(si, 2));	// 21863 sub     si, 2 ;~ 0C56:155C
cs=0xc56;eip=0x00155f; 	R(JNZ(loc_1c08d));	// 21864 jnz     short loc_1C08D ;~ 0C56:155F
cs=0xc56;eip=0x001561; 	R(RETN(0));	// 21865 retn ;~ 0C56:1561
loc_1c0a2:
	// 5671 
cs=0xc56;eip=0x001562; 	T(MOV(cx, si));	// 21869 mov     cx, si ;~ 0C56:1562
cs=0xc56;eip=0x001564; 	T(SHR(cx, 1));	// 21870 shr     cx, 1 ;~ 0C56:1564
cs=0xc56;eip=0x001566; 	T(MOV(ax, *(dw*)(raddr(ds,si-0x5547))));	// 21871 mov     ax, [si-5547h] ;~ 0C56:1566
cs=0xc56;eip=0x00156a; 	T(MOV(al, cl));	// 21872 mov     al, cl ;~ 0C56:156A
cs=0xc56;eip=0x00156c; 	T(CMP(ax, bp));	// 21873 cmp     ax, bp ;~ 0C56:156C
cs=0xc56;eip=0x00156e; 	R(JNZ(loc_1c0b1));	// 21874 jnz     short loc_1C0B1 ;~ 0C56:156E
cs=0xc56;eip=0x001570; 	T(DEC(ax));	// 21875 dec     ax ;~ 0C56:1570
loc_1c0b1:
	// 5672 
cs=0xc56;eip=0x001571; 	X(MOV(*(dw*)(raddr(cs,bx+di)), ax));	// 21878 mov     cs:[bx+di], ax ;~ 0C56:1571
cs=0xc56;eip=0x001574; 	T(ADD(bx, 2));	// 21879 add     bx, 2 ;~ 0C56:1574
cs=0xc56;eip=0x001577; 	T(AND(bx, dx));	// 21880 and     bx, dx ;~ 0C56:1577
cs=0xc56;eip=0x001579; 	T(MOV(ax, *(dw*)(raddr(ds,si-0x5B87))));	// 21881 mov     ax, [si-5B87h] ;~ 0C56:1579
cs=0xc56;eip=0x00157d; 	T(CMP(ax, bp));	// 21882 cmp     ax, bp ;~ 0C56:157D
cs=0xc56;eip=0x00157f; 	R(JNZ(loc_1c0c2));	// 21883 jnz     short loc_1C0C2 ;~ 0C56:157F
cs=0xc56;eip=0x001581; 	T(DEC(ax));	// 21884 dec     ax ;~ 0C56:1581
loc_1c0c2:
	// 5673 
cs=0xc56;eip=0x001582; 	X(MOV(*(dw*)(raddr(cs,bx+di)), ax));	// 21887 mov     cs:[bx+di], ax ;~ 0C56:1582
cs=0xc56;eip=0x001585; 	T(ADD(bx, 2));	// 21888 add     bx, 2 ;~ 0C56:1585
cs=0xc56;eip=0x001588; 	T(AND(bx, dx));	// 21889 and     bx, dx ;~ 0C56:1588
cs=0xc56;eip=0x00158a; 	T(MOV(ax, *(dw*)(raddr(ds,si-0x5A47))));	// 21890 mov     ax, [si-5A47h] ;~ 0C56:158A
cs=0xc56;eip=0x00158e; 	T(CMP(ax, bp));	// 21891 cmp     ax, bp ;~ 0C56:158E
cs=0xc56;eip=0x001590; 	R(JNZ(loc_1c0d3));	// 21892 jnz     short loc_1C0D3 ;~ 0C56:1590
cs=0xc56;eip=0x001592; 	T(DEC(ax));	// 21893 dec     ax ;~ 0C56:1592
loc_1c0d3:
	// 5674 
cs=0xc56;eip=0x001593; 	X(MOV(*(dw*)(raddr(cs,bx+di)), ax));	// 21896 mov     cs:[bx+di], ax ;~ 0C56:1593
cs=0xc56;eip=0x001596; 	T(ADD(bx, 2));	// 21897 add     bx, 2 ;~ 0C56:1596
cs=0xc56;eip=0x001599; 	T(AND(bx, dx));	// 21898 and     bx, dx ;~ 0C56:1599
cs=0xc56;eip=0x00159b; 	T(MOV(ax, *(dw*)(raddr(ds,si-0x5907))));	// 21899 mov     ax, [si-5907h] ;~ 0C56:159B
cs=0xc56;eip=0x00159f; 	T(CMP(ax, bp));	// 21900 cmp     ax, bp ;~ 0C56:159F
cs=0xc56;eip=0x0015a1; 	R(JNZ(loc_1c0e4));	// 21901 jnz     short loc_1C0E4 ;~ 0C56:15A1
cs=0xc56;eip=0x0015a3; 	T(DEC(ax));	// 21902 dec     ax ;~ 0C56:15A3
loc_1c0e4:
	// 5675 
cs=0xc56;eip=0x0015a4; 	X(MOV(*(dw*)(raddr(cs,bx+di)), ax));	// 21905 mov     cs:[bx+di], ax ;~ 0C56:15A4
cs=0xc56;eip=0x0015a7; 	T(ADD(bx, 2));	// 21906 add     bx, 2 ;~ 0C56:15A7
cs=0xc56;eip=0x0015aa; 	T(AND(bx, dx));	// 21907 and     bx, dx ;~ 0C56:15AA
cs=0xc56;eip=0x0015ac; 	T(MOV(ax, *(dw*)(raddr(ds,si-0x57C7))));	// 21908 mov     ax, [si-57C7h] ;~ 0C56:15AC
cs=0xc56;eip=0x0015b0; 	T(CMP(ax, bp));	// 21909 cmp     ax, bp ;~ 0C56:15B0
cs=0xc56;eip=0x0015b2; 	R(JNZ(loc_1c0f5));	// 21910 jnz     short loc_1C0F5 ;~ 0C56:15B2
cs=0xc56;eip=0x0015b4; 	T(DEC(ax));	// 21911 dec     ax ;~ 0C56:15B4
loc_1c0f5:
	// 5676 
cs=0xc56;eip=0x0015b5; 	X(MOV(*(dw*)(raddr(cs,bx+di)), ax));	// 21914 mov     cs:[bx+di], ax ;~ 0C56:15B5
cs=0xc56;eip=0x0015b8; 	T(ADD(bx, 2));	// 21915 add     bx, 2 ;~ 0C56:15B8
cs=0xc56;eip=0x0015bb; 	T(AND(bx, dx));	// 21916 and     bx, dx ;~ 0C56:15BB
cs=0xc56;eip=0x0015bd; 	T(MOV(ax, *(dw*)(raddr(ds,si-0x5687))));	// 21917 mov     ax, [si-5687h] ;~ 0C56:15BD
cs=0xc56;eip=0x0015c1; 	T(CMP(ax, bp));	// 21918 cmp     ax, bp ;~ 0C56:15C1
cs=0xc56;eip=0x0015c3; 	R(JNZ(loc_1c106));	// 21919 jnz     short loc_1C106 ;~ 0C56:15C3
cs=0xc56;eip=0x0015c5; 	T(DEC(ax));	// 21920 dec     ax ;~ 0C56:15C5
loc_1c106:
	// 5677 
cs=0xc56;eip=0x0015c6; 	X(MOV(*(dw*)(raddr(cs,bx+di)), ax));	// 21923 mov     cs:[bx+di], ax ;~ 0C56:15C6
cs=0xc56;eip=0x0015c9; 	T(ADD(bx, 2));	// 21924 add     bx, 2 ;~ 0C56:15C9
cs=0xc56;eip=0x0015cc; 	T(AND(bx, dx));	// 21925 and     bx, dx ;~ 0C56:15CC
cs=0xc56;eip=0x0015ce; 	T(MOV(ax, *(dw*)(raddr(ds,si-0x5407))));	// 21926 mov     ax, [si-5407h] ;~ 0C56:15CE
cs=0xc56;eip=0x0015d2; 	T(CMP(ax, bp));	// 21927 cmp     ax, bp ;~ 0C56:15D2
cs=0xc56;eip=0x0015d4; 	R(JNZ(loc_1c117));	// 21928 jnz     short loc_1C117 ;~ 0C56:15D4
cs=0xc56;eip=0x0015d6; 	T(DEC(ax));	// 21929 dec     ax ;~ 0C56:15D6
loc_1c117:
	// 5678 
cs=0xc56;eip=0x0015d7; 	X(MOV(*(dw*)(raddr(cs,bx+di)), ax));	// 21932 mov     cs:[bx+di], ax ;~ 0C56:15D7
cs=0xc56;eip=0x0015da; 	T(ADD(bx, 2));	// 21933 add     bx, 2 ;~ 0C56:15DA
cs=0xc56;eip=0x0015dd; 	T(AND(bx, dx));	// 21934 and     bx, dx ;~ 0C56:15DD
cs=0xc56;eip=0x0015df; 	T(MOV(ax, *(dw*)(raddr(ds,si-0x52C7))));	// 21935 mov     ax, [si-52C7h] ;~ 0C56:15DF
cs=0xc56;eip=0x0015e3; 	T(CMP(ax, bp));	// 21936 cmp     ax, bp ;~ 0C56:15E3
cs=0xc56;eip=0x0015e5; 	R(JNZ(loc_1c128));	// 21937 jnz     short loc_1C128 ;~ 0C56:15E5
cs=0xc56;eip=0x0015e7; 	T(DEC(ax));	// 21938 dec     ax ;~ 0C56:15E7
loc_1c128:
	// 5679 
cs=0xc56;eip=0x0015e8; 	X(MOV(*(dw*)(raddr(cs,bx+di)), ax));	// 21941 mov     cs:[bx+di], ax ;~ 0C56:15E8
cs=0xc56;eip=0x0015eb; 	T(ADD(bx, 2));	// 21942 add     bx, 2 ;~ 0C56:15EB
cs=0xc56;eip=0x0015ee; 	T(AND(bx, dx));	// 21943 and     bx, dx ;~ 0C56:15EE
cs=0xc56;eip=0x0015f0; 	T(MOV(ax, *(dw*)(raddr(ds,si-0x5187))));	// 21944 mov     ax, [si-5187h] ;~ 0C56:15F0
cs=0xc56;eip=0x0015f4; 	T(CMP(ax, bp));	// 21945 cmp     ax, bp ;~ 0C56:15F4
cs=0xc56;eip=0x0015f6; 	R(JNZ(loc_1c139));	// 21946 jnz     short loc_1C139 ;~ 0C56:15F6
cs=0xc56;eip=0x0015f8; 	T(DEC(ax));	// 21947 dec     ax ;~ 0C56:15F8
loc_1c139:
	// 5680 
cs=0xc56;eip=0x0015f9; 	X(MOV(*(dw*)(raddr(cs,bx+di)), ax));	// 21950 mov     cs:[bx+di], ax ;~ 0C56:15F9
cs=0xc56;eip=0x0015fc; 	T(ADD(bx, 2));	// 21951 add     bx, 2 ;~ 0C56:15FC
cs=0xc56;eip=0x0015ff; 	T(AND(bx, dx));	// 21952 and     bx, dx ;~ 0C56:15FF
cs=0xc56;eip=0x001601; 	R(JMP(loc_1c09c));	// 21953 jmp     loc_1C09C ;~ 0C56:1601
sub_1c144:
	// 21960 
cs=0xc56;eip=0x001604; 	T(MOV(ax, *(dw*)(raddr(cs,bx+di))));	// 21962 mov     ax, cs:[bx+di] ;~ 0C56:1604
ret_c56_1607:
	// 5681 
cs=0xc56;eip=0x001607; 	T(CMP(ax, bp));	// 21963 cmp     ax, bp ;~ 0C56:1607
cs=0xc56;eip=0x001609; 	R(JNZ(loc_1c14c));	// 21964 jnz     short loc_1C14C ;~ 0C56:1609
cs=0xc56;eip=0x00160b; 	R(RETN(0));	// 21965 retn ;~ 0C56:160B
loc_1c14c:
	// 5682 
cs=0xc56;eip=0x00160c; 	T(MOV(cl, al));	// 21969 mov     cl, al ;~ 0C56:160C
cs=0xc56;eip=0x00160e; 	T(SUB(ch, ch));	// 21970 sub     ch, ch ;~ 0C56:160E
cs=0xc56;eip=0x001610; 	T(SHL(cx, 1));	// 21971 shl     cx, 1 ;~ 0C56:1610
cs=0xc56;eip=0x001612; 	T(MOV(si, cx));	// 21972 mov     si, cx ;~ 0C56:1612
cs=0xc56;eip=0x001614; 	T(SUB(al, al));	// 21973 sub     al, al ;~ 0C56:1614
cs=0xc56;eip=0x001616; 	X(MOV(*(dw*)(raddr(ds,si-0x5547)), ax));	// 21974 mov     [si-5547h], ax ;~ 0C56:1616
cs=0xc56;eip=0x00161a; 	T(ADD(bx, 2));	// 21975 add     bx, 2 ;~ 0C56:161A
cs=0xc56;eip=0x00161d; 	T(AND(bx, dx));	// 21976 and     bx, dx ;~ 0C56:161D
cs=0xc56;eip=0x00161f; 	T(MOV(ax, *(dw*)(raddr(cs,bx+di))));	// 21977 mov     ax, cs:[bx+di] ;~ 0C56:161F
cs=0xc56;eip=0x001622; 	X(MOV(*(dw*)(raddr(ds,si-0x5B87)), ax));	// 21978 mov     [si-5B87h], ax ;~ 0C56:1622
cs=0xc56;eip=0x001626; 	T(ADD(bx, 2));	// 21979 add     bx, 2 ;~ 0C56:1626
cs=0xc56;eip=0x001629; 	T(AND(bx, dx));	// 21980 and     bx, dx ;~ 0C56:1629
cs=0xc56;eip=0x00162b; 	T(MOV(ax, *(dw*)(raddr(cs,bx+di))));	// 21981 mov     ax, cs:[bx+di] ;~ 0C56:162B
cs=0xc56;eip=0x00162e; 	X(MOV(*(dw*)(raddr(ds,si-0x5A47)), ax));	// 21982 mov     [si-5A47h], ax ;~ 0C56:162E
cs=0xc56;eip=0x001632; 	T(ADD(bx, 2));	// 21983 add     bx, 2 ;~ 0C56:1632
cs=0xc56;eip=0x001635; 	T(AND(bx, dx));	// 21984 and     bx, dx ;~ 0C56:1635
cs=0xc56;eip=0x001637; 	T(MOV(ax, *(dw*)(raddr(cs,bx+di))));	// 21985 mov     ax, cs:[bx+di] ;~ 0C56:1637
cs=0xc56;eip=0x00163a; 	X(MOV(*(dw*)(raddr(ds,si-0x5907)), ax));	// 21986 mov     [si-5907h], ax ;~ 0C56:163A
cs=0xc56;eip=0x00163e; 	T(ADD(bx, 2));	// 21987 add     bx, 2 ;~ 0C56:163E
cs=0xc56;eip=0x001641; 	T(AND(bx, dx));	// 21988 and     bx, dx ;~ 0C56:1641
cs=0xc56;eip=0x001643; 	T(MOV(ax, *(dw*)(raddr(cs,bx+di))));	// 21989 mov     ax, cs:[bx+di] ;~ 0C56:1643
cs=0xc56;eip=0x001646; 	X(MOV(*(dw*)(raddr(ds,si-0x57C7)), ax));	// 21990 mov     [si-57C7h], ax ;~ 0C56:1646
cs=0xc56;eip=0x00164a; 	T(ADD(bx, 2));	// 21991 add     bx, 2 ;~ 0C56:164A
cs=0xc56;eip=0x00164d; 	T(AND(bx, dx));	// 21992 and     bx, dx ;~ 0C56:164D
cs=0xc56;eip=0x00164f; 	T(MOV(ax, *(dw*)(raddr(cs,bx+di))));	// 21993 mov     ax, cs:[bx+di] ;~ 0C56:164F
cs=0xc56;eip=0x001652; 	X(MOV(*(dw*)(raddr(ds,si-0x5687)), ax));	// 21994 mov     [si-5687h], ax ;~ 0C56:1652
cs=0xc56;eip=0x001656; 	T(ADD(bx, 2));	// 21995 add     bx, 2 ;~ 0C56:1656
cs=0xc56;eip=0x001659; 	T(AND(bx, dx));	// 21996 and     bx, dx ;~ 0C56:1659
cs=0xc56;eip=0x00165b; 	T(MOV(ax, *(dw*)(raddr(cs,bx+di))));	// 21997 mov     ax, cs:[bx+di] ;~ 0C56:165B
cs=0xc56;eip=0x00165e; 	X(MOV(*(dw*)(raddr(ds,si-0x5407)), ax));	// 21998 mov     [si-5407h], ax ;~ 0C56:165E
cs=0xc56;eip=0x001662; 	T(ADD(bx, 2));	// 21999 add     bx, 2 ;~ 0C56:1662
cs=0xc56;eip=0x001665; 	T(AND(bx, dx));	// 22000 and     bx, dx ;~ 0C56:1665
cs=0xc56;eip=0x001667; 	T(MOV(ax, *(dw*)(raddr(cs,bx+di))));	// 22001 mov     ax, cs:[bx+di] ;~ 0C56:1667
cs=0xc56;eip=0x00166a; 	X(MOV(*(dw*)(raddr(ds,si-0x52C7)), ax));	// 22002 mov     [si-52C7h], ax ;~ 0C56:166A
cs=0xc56;eip=0x00166e; 	T(ADD(bx, 2));	// 22003 add     bx, 2 ;~ 0C56:166E
cs=0xc56;eip=0x001671; 	T(AND(bx, dx));	// 22004 and     bx, dx ;~ 0C56:1671
cs=0xc56;eip=0x001673; 	T(MOV(ax, *(dw*)(raddr(cs,bx+di))));	// 22005 mov     ax, cs:[bx+di] ;~ 0C56:1673
cs=0xc56;eip=0x001676; 	X(MOV(*(dw*)(raddr(ds,si-0x5187)), ax));	// 22006 mov     [si-5187h], ax ;~ 0C56:1676
cs=0xc56;eip=0x00167a; 	T(ADD(bx, 2));	// 22007 add     bx, 2 ;~ 0C56:167A
cs=0xc56;eip=0x00167d; 	T(AND(bx, dx));	// 22008 and     bx, dx ;~ 0C56:167D
cs=0xc56;eip=0x00167f; 	R(JMP(sub_1c144));	// 22009 jmp     short sub_1C144 ;~ 0C56:167F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_1ab6e: 	goto loc_1ab6e;
        case m2c::kloc_1abd0: 	goto loc_1abd0;
        case m2c::kloc_1abde: 	goto loc_1abde;
        case m2c::kloc_1abfd: 	goto loc_1abfd;
        case m2c::kloc_1ac1b: 	goto loc_1ac1b;
        case m2c::kloc_1ac3b: 	goto loc_1ac3b;
        case m2c::kloc_1ac51: 	goto loc_1ac51;
        case m2c::kloc_1ac57: 	goto loc_1ac57;
        case m2c::kloc_1ac7d: 	goto loc_1ac7d;
        case m2c::kloc_1ace7: 	goto loc_1ace7;
        case m2c::kloc_1acf4: 	goto loc_1acf4;
        case m2c::kloc_1acfa: 	goto loc_1acfa;
        case m2c::kloc_1bd57: 	goto loc_1bd57;
        case m2c::kloc_1bd87: 	goto loc_1bd87;
        case m2c::kloc_1bd97: 	goto loc_1bd97;
        case m2c::kloc_1bda7: 	goto loc_1bda7;
        case m2c::kloc_1bdb7: 	goto loc_1bdb7;
        case m2c::kloc_1bdc7: 	goto loc_1bdc7;
        case m2c::kloc_1bdda: 	goto loc_1bdda;
        case m2c::kloc_1bdde: 	goto loc_1bdde;
        case m2c::kloc_1be11: 	goto loc_1be11;
        case m2c::kloc_1be14: 	goto loc_1be14;
        case m2c::kloc_1be37: 	goto loc_1be37;
        case m2c::kloc_1be46: 	goto loc_1be46;
        case m2c::kloc_1be61: 	goto loc_1be61;
        case m2c::kloc_1be89: 	goto loc_1be89;
        case m2c::kloc_1be91: 	goto loc_1be91;
        case m2c::kloc_1beaf: 	goto loc_1beaf;
        case m2c::kloc_1befe: 	goto loc_1befe;
        case m2c::kloc_1bf01: 	goto loc_1bf01;
        case m2c::kloc_1bf28: 	goto loc_1bf28;
        case m2c::kloc_1bf2c: 	goto loc_1bf2c;
        case m2c::kloc_1bf9c: 	goto loc_1bf9c;
        case m2c::kloc_1c008: 	goto loc_1c008;
        case m2c::kloc_1c08d: 	goto loc_1c08d;
        case m2c::kloc_1c09c: 	goto loc_1c09c;
        case m2c::kloc_1c0a2: 	goto loc_1c0a2;
        case m2c::kloc_1c0b1: 	goto loc_1c0b1;
        case m2c::kloc_1c0c2: 	goto loc_1c0c2;
        case m2c::kloc_1c0d3: 	goto loc_1c0d3;
        case m2c::kloc_1c0e4: 	goto loc_1c0e4;
        case m2c::kloc_1c0f5: 	goto loc_1c0f5;
        case m2c::kloc_1c106: 	goto loc_1c106;
        case m2c::kloc_1c117: 	goto loc_1c117;
        case m2c::kloc_1c128: 	goto loc_1c128;
        case m2c::kloc_1c139: 	goto loc_1c139;
        case m2c::kloc_1c14c: 	goto loc_1c14c;
        case m2c::kret_c56_10: 	goto ret_c56_10;
        case m2c::kret_c56_1212: 	goto ret_c56_1212;
        case m2c::kret_c56_1221: 	goto ret_c56_1221;
        case m2c::kret_c56_141: 	goto ret_c56_141;
        case m2c::kret_c56_1462: 	goto ret_c56_1462;
        case m2c::kret_c56_14ba: 	goto ret_c56_14ba;
        case m2c::kret_c56_1548: 	goto ret_c56_1548;
        case m2c::kret_c56_15f: 	goto ret_c56_15f;
        case m2c::kret_c56_1607: 	goto ret_c56_1607;
        case m2c::kret_c56_1d0: 	goto ret_c56_1d0;
        case m2c::kret_c56_1de: 	goto ret_c56_1de;
        case m2c::kret_c56_1eb: 	goto ret_c56_1eb;
        case m2c::kret_c56_1f4: 	goto ret_c56_1f4;
        case m2c::kret_c56_35: 	goto ret_c56_35;
        case m2c::kret_c56_47: 	goto ret_c56_47;
        case m2c::kret_c56_b: 	goto ret_c56_b;
        case m2c::ksub_1ab4a: 	goto sub_1ab4a;
        case m2c::ksub_1ab4f: 	goto sub_1ab4f;
        case m2c::ksub_1ab74: 	goto sub_1ab74;
        case m2c::ksub_1ac80: 	goto sub_1ac80;
        case m2c::ksub_1ac9c: 	goto sub_1ac9c;
        case m2c::ksub_1ad0a: 	goto sub_1ad0a;
        case m2c::ksub_1ad1d: 	goto sub_1ad1d;
        case m2c::ksub_1ad29: 	goto sub_1ad29;
        case m2c::ksub_1ad30: 	goto sub_1ad30;
        case m2c::ksub_1bd4f: 	goto sub_1bd4f;
        case m2c::ksub_1bd60: 	goto sub_1bd60;
        case m2c::ksub_1bfa0: 	goto sub_1bfa0;
        case m2c::ksub_1bff9: 	goto sub_1bff9;
        case m2c::ksub_1c084: 	goto sub_1c084;
        case m2c::ksub_1c144: 	goto sub_1c144;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

