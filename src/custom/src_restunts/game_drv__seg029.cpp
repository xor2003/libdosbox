/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool _group19(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group19:
    _begin:
audioresource_compare_chunknames:
	// 87118 
#undef var_2
#define var_2 -2
	// 87122 var_2           = word ptr -2 ;~ 2B4F:0004
#undef arg_0
#define arg_0 6
	// 87123 arg_0           = word ptr  6 ;~ 2B4F:0004
#undef arg_2
#define arg_2 8
	// 87124 arg_2           = dword ptr  8 ;~ 2B4F:0004
#undef arg_6
#define arg_6 0x0C
	// 87125 arg_6           = dword ptr  0Ch ;~ 2B4F:0004
#undef arg_a
#define arg_a 0x10
	// 87126 arg_A           = word ptr  10h ;~ 2B4F:0004
ret_2b4f_4:
	// 10368 
cs=0x2b4f;eip=0x000004; 	X(PUSH(bp));	// 87128 push    bp ;~ 2B4F:0004
cs=0x2b4f;eip=0x000005; 	T(MOV(bp, sp));	// 87129 mov     bp, sp ;~ 2B4F:0005
cs=0x2b4f;eip=0x000007; 	T(SUB(sp, 2));	// 87130 sub     sp, 2 ;~ 2B4F:0007
cs=0x2b4f;eip=0x00000a; 	X(PUSH(di));	// 87131 push    di ;~ 2B4F:000A
cs=0x2b4f;eip=0x00000b; 	X(PUSH(si));	// 87132 push    si ;~ 2B4F:000B
cs=0x2b4f;eip=0x00000c; 	T(CMP(*(dw*)(raddr(ss,bp+arg_a)), 0));	// 87133 cmp     [bp+arg_A], 0 ;~ 2B4F:000C
cs=0x2b4f;eip=0x000010; 	R(JZ(loc_39b50));	// 87134 jz      short loc_39B50 ;~ 2B4F:0010
cs=0x2b4f;eip=0x000012; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 87135 mov     di, [bp+arg_0] ;~ 2B4F:0012
cs=0x2b4f;eip=0x000015; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_a))));	// 87136 mov     si, [bp+arg_A] ;~ 2B4F:0015
loc_39ae8:
	// 10369 
cs=0x2b4f;eip=0x000018; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 87139 les     bx, [bp+arg_2] ;~ 2B4F:0018
cs=0x2b4f;eip=0x00001b; 	T(CMP(*(raddr(es,bx)), 0));	// 87140 cmp     byte ptr es:[bx], 0 ;~ 2B4F:001B
cs=0x2b4f;eip=0x00001f; 	R(JZ(loc_39b4d));	// 87141 jz      short loc_39B4D ; goto end ;~ 2B4F:001F
cs=0x2b4f;eip=0x000021; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 87142 les     bx, [bp+arg_6] ;~ 2B4F:0021
cs=0x2b4f;eip=0x000024; 	T(CMP(*(raddr(es,bx)), 0));	// 87143 cmp     byte ptr es:[bx], 0 ;~ 2B4F:0024
cs=0x2b4f;eip=0x000028; 	R(JZ(loc_39b4d));	// 87144 jz      short loc_39B4D ; goto end ;~ 2B4F:0028
cs=0x2b4f;eip=0x00002a; 	T(OR(di, di));	// 87145 or      di, di ;~ 2B4F:002A
cs=0x2b4f;eip=0x00002c; 	R(JZ(loc_39b16));	// 87146 jz      short loc_39B16 ;~ 2B4F:002C
cs=0x2b4f;eip=0x00002e; 	T(MOV(al, *(raddr(es,bx))));	// 87147 mov     al, es:[bx]     ; al = arg_foundname[] ;~ 2B4F:002E
cs=0x2b4f;eip=0x000031; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 87148 les     bx, [bp+arg_2] ;~ 2B4F:0031
cs=0x2b4f;eip=0x000034; 	T(CMP(*(raddr(es,bx)), al));	// 87149 cmp     es:[bx], al ;~ 2B4F:0034
cs=0x2b4f;eip=0x000037; 	R(JZ(loc_39b16));	// 87150 jz      short loc_39B16 ;~ 2B4F:0037
loc_39b09:
	// 10370 
cs=0x2b4f;eip=0x000039; 	T(SUB(ax, ax));	// 87153 sub     ax, ax ;~ 2B4F:0039
cs=0x2b4f;eip=0x00003b; 	X(MOV(*(dw*)(raddr(ss,bp+arg_a)), si));	// 87154 mov     [bp+arg_A], si ;~ 2B4F:003B
cs=0x2b4f;eip=0x00003e; 	X(POP(si));	// 87155 pop     si ;~ 2B4F:003E
cs=0x2b4f;eip=0x00003f; 	X(POP(di));	// 87156 pop     di ;~ 2B4F:003F
cs=0x2b4f;eip=0x000040; 	T(MOV(sp, bp));	// 87157 mov     sp, bp ;~ 2B4F:0040
cs=0x2b4f;eip=0x000042; 	X(POP(bp));	// 87158 pop     bp ;~ 2B4F:0042
cs=0x2b4f;eip=0x000043; 	R(RETF(0));	// 87159 retf ;~ 2B4F:0043
loc_39b16:
	// 10371 
cs=0x2b4f;eip=0x000046; 	T(OR(di, di));	// 87166 or      di, di ;~ 2B4F:0046
cs=0x2b4f;eip=0x000048; 	R(JNZ(loc_39b44));	// 87167 jnz     short loc_39B44 ;~ 2B4F:0048
cs=0x2b4f;eip=0x00004a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 87168 les     bx, [bp+arg_6] ;~ 2B4F:004A
cs=0x2b4f;eip=0x00004d; 	T(MOV(al, *(raddr(es,bx))));	// 87169 mov     al, es:[bx] ;~ 2B4F:004D
cs=0x2b4f;eip=0x000050; 	T(SUB(ah, ah));	// 87170 sub     ah, ah ;~ 2B4F:0050
cs=0x2b4f;eip=0x000052; 	X(PUSH(ax));	// 87171 push    ax ;~ 2B4F:0052
cs=0x2b4f;eip=0x000053; 	R(CALLF(toupper_,0));	// 87172 call    toupper_ ;~ 2B4F:0053
cs=0x2b4f;eip=0x000058; 	T(ADD(sp, 2));	// 87173 add     sp, 2 ;~ 2B4F:0058
cs=0x2b4f;eip=0x00005b; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 87174 les     bx, [bp+arg_2] ;~ 2B4F:005B
cs=0x2b4f;eip=0x00005e; 	T(MOV(cl, *(raddr(es,bx))));	// 87175 mov     cl, es:[bx] ;~ 2B4F:005E
cs=0x2b4f;eip=0x000061; 	T(SUB(ch, ch));	// 87176 sub     ch, ch ;~ 2B4F:0061
cs=0x2b4f;eip=0x000063; 	X(PUSH(cx));	// 87177 push    cx ;~ 2B4F:0063
cs=0x2b4f;eip=0x000064; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 87178 mov     [bp+var_2], ax ;~ 2B4F:0064
cs=0x2b4f;eip=0x000067; 	R(CALLF(toupper_,0));	// 87179 call    toupper_ ;~ 2B4F:0067
cs=0x2b4f;eip=0x00006c; 	T(ADD(sp, 2));	// 87180 add     sp, 2 ;~ 2B4F:006C
cs=0x2b4f;eip=0x00006f; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_2))));	// 87181 cmp     ax, [bp+var_2] ;~ 2B4F:006F
cs=0x2b4f;eip=0x000072; 	R(JNZ(loc_39b09));	// 87182 jnz     short loc_39B09 ;~ 2B4F:0072
loc_39b44:
	// 10372 
cs=0x2b4f;eip=0x000074; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 87185 inc     word ptr [bp+arg_2] ;~ 2B4F:0074
cs=0x2b4f;eip=0x000077; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_6)))));	// 87186 inc     word ptr [bp+arg_6] ;~ 2B4F:0077
cs=0x2b4f;eip=0x00007a; 	T(DEC(si));	// 87187 dec     si ;~ 2B4F:007A
cs=0x2b4f;eip=0x00007b; 	R(JNZ(loc_39ae8));	// 87188 jnz     short loc_39AE8 ;~ 2B4F:007B
loc_39b4d:
	// 10373 
cs=0x2b4f;eip=0x00007d; 	X(MOV(*(dw*)(raddr(ss,bp+arg_a)), si));	// 87192 mov     [bp+arg_A], si ;~ 2B4F:007D
loc_39b50:
	// 10374 
cs=0x2b4f;eip=0x000080; 	T(MOV(ax, 1));	// 87195 mov     ax, 1 ;~ 2B4F:0080
cs=0x2b4f;eip=0x000083; 	X(POP(si));	// 87196 pop     si ;~ 2B4F:0083
cs=0x2b4f;eip=0x000084; 	X(POP(di));	// 87197 pop     di ;~ 2B4F:0084
cs=0x2b4f;eip=0x000085; 	T(MOV(sp, bp));	// 87198 mov     sp, bp ;~ 2B4F:0085
cs=0x2b4f;eip=0x000087; 	X(POP(bp));	// 87199 pop     bp ;~ 2B4F:0087
cs=0x2b4f;eip=0x000088; 	R(RETF(0));	// 87200 retf ;~ 2B4F:0088
audioresource_get_chunk_index:
	// 87210 
#undef var_e
#define var_e -0x0E
	// 87213 var_E           = word ptr -0Eh ;~ 2B4F:008A
#undef var_c
#define var_c -0x0C
	// 87214 var_C           = word ptr -0Ch ;~ 2B4F:008A
#undef var_a
#define var_a -0x0A
	// 87215 var_A           = word ptr -0Ah ;~ 2B4F:008A
#undef var_8
#define var_8 -8
	// 87216 var_8           = word ptr -8 ;~ 2B4F:008A
#undef var_6
#define var_6 -6
	// 87217 var_6           = byte ptr -6 ;~ 2B4F:008A
#undef var_2
#define var_2 -2
	// 87218 var_2           = byte ptr -2 ;~ 2B4F:008A
#undef arg_0
#define arg_0 6
	// 87219 arg_0           = word ptr  6 ;~ 2B4F:008A
#undef arg_2
#define arg_2 8
	// 87220 arg_2           = word ptr  8 ;~ 2B4F:008A
#undef arg_4
#define arg_4 0x0A
	// 87221 arg_4           = word ptr  0Ah ;~ 2B4F:008A
#undef arg_6
#define arg_6 0x0C
	// 87222 arg_6           = dword ptr  0Ch ;~ 2B4F:008A
ret_2b4f_8a:
	// 10375 
cs=0x2b4f;eip=0x00008a; 	X(PUSH(bp));	// 87224 push    bp ;~ 2B4F:008A
cs=0x2b4f;eip=0x00008b; 	T(MOV(bp, sp));	// 87225 mov     bp, sp ;~ 2B4F:008B
cs=0x2b4f;eip=0x00008d; 	T(SUB(sp, 0x0E));	// 87226 sub     sp, 0Eh ;~ 2B4F:008D
cs=0x2b4f;eip=0x000090; 	X(PUSH(di));	// 87227 push    di ;~ 2B4F:0090
cs=0x2b4f;eip=0x000091; 	X(PUSH(si));	// 87228 push    si ;~ 2B4F:0091
cs=0x2b4f;eip=0x000092; 	X(MOV(*(raddr(ss,bp+var_2)), 0));	// 87229 mov     [bp+var_2], 0 ;~ 2B4F:0092
cs=0x2b4f;eip=0x000096; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 87230 mov     [bp+var_8], 0 ;~ 2B4F:0096
cs=0x2b4f;eip=0x00009b; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 87231 cmp     [bp+arg_2], 0 ;~ 2B4F:009B
cs=0x2b4f;eip=0x00009f; 	R(JLE(loc_39bd3));	// 87232 jle     short loc_39BD3 ;~ 2B4F:009F
cs=0x2b4f;eip=0x0000a1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 87233 mov     ax, [bp+arg_4] ;~ 2B4F:00A1
cs=0x2b4f;eip=0x0000a4; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 87234 mov     [bp+var_E], ax ;~ 2B4F:00A4
cs=0x2b4f;eip=0x0000a7; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ds));	// 87235 mov     [bp+var_C], ds ;~ 2B4F:00A7
cs=0x2b4f;eip=0x0000aa; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_8))));	// 87236 mov     si, [bp+var_8] ;~ 2B4F:00AA
loc_39b7d:
	// 10376 
cs=0x2b4f;eip=0x0000ad; 	T(SUB(cx, cx));	// 87239 sub     cx, cx ;~ 2B4F:00AD
cs=0x2b4f;eip=0x0000af; 	T(LES(di, *(dd*)(raddr(ss,bp+arg_6))));	// 87240 les     di, [bp+arg_6] ;~ 2B4F:00AF
loc_39b82:
	// 10377 
cs=0x2b4f;eip=0x0000b2; 	T(MOV(bx, cx));	// 87243 mov     bx, cx ;~ 2B4F:00B2
cs=0x2b4f;eip=0x0000b4; 	T(ADD(bx, bp));	// 87244 add     bx, bp ;~ 2B4F:00B4
cs=0x2b4f;eip=0x0000b6; 	T(MOV(al, *(raddr(es,di))));	// 87245 mov     al, es:[di] ;~ 2B4F:00B6
cs=0x2b4f;eip=0x0000b9; 	X(MOV(*(raddr(ds,bx-6)), al));	// 87246 mov     [bx-6], al ;~ 2B4F:00B9
cs=0x2b4f;eip=0x0000bc; 	T(INC(di));	// 87247 inc     di ;~ 2B4F:00BC
cs=0x2b4f;eip=0x0000bd; 	T(INC(cx));	// 87248 inc     cx ;~ 2B4F:00BD
cs=0x2b4f;eip=0x0000be; 	T(CMP(cx, 4));	// 87249 cmp     cx, 4 ;~ 2B4F:00BE
cs=0x2b4f;eip=0x0000c1; 	R(JL(loc_39b82));	// 87250 jl      short loc_39B82 ;~ 2B4F:00C1
cs=0x2b4f;eip=0x0000c3; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+arg_6))), di));	// 87251 mov     word ptr [bp+arg_6], di ; point at next chunk name ;~ 2B4F:00C3
cs=0x2b4f;eip=0x0000c6; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+arg_6+2))), es));	// 87252 mov     word ptr [bp+arg_6+2], es ;~ 2B4F:00C6
cs=0x2b4f;eip=0x0000c9; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), cx));	// 87253 mov     [bp+var_A], cx ;~ 2B4F:00C9
cs=0x2b4f;eip=0x0000cc; 	T(MOV(ax, 4));	// 87254 mov     ax, 4 ;~ 2B4F:00CC
cs=0x2b4f;eip=0x0000cf; 	X(PUSH(ax));	// 87255 push    ax ;~ 2B4F:00CF
cs=0x2b4f;eip=0x0000d0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 87256 push    [bp+var_C] ;~ 2B4F:00D0
cs=0x2b4f;eip=0x0000d3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_e))));	// 87257 push    [bp+var_E] ;~ 2B4F:00D3
cs=0x2b4f;eip=0x0000d6; 	T(ax = bp+var_6);	// 87258 lea     ax, [bp+var_6] ;~ 2B4F:00D6
cs=0x2b4f;eip=0x0000d9; 	X(PUSH(ss));	// 87259 push    ss ;~ 2B4F:00D9
cs=0x2b4f;eip=0x0000da; 	X(PUSH(ax));	// 87260 push    ax ;~ 2B4F:00DA
cs=0x2b4f;eip=0x0000db; 	T(SUB(ax, ax));	// 87261 sub     ax, ax ;~ 2B4F:00DB
cs=0x2b4f;eip=0x0000dd; 	X(PUSH(ax));	// 87262 push    ax ;~ 2B4F:00DD
cs=0x2b4f;eip=0x0000de; 	X(PUSH(cs));	// 87263 push    cs ;~ 2B4F:00DE
cs=0x2b4f;eip=0x0000df; 	R(CALL(audioresource_compare_chunknames,0));	// 87264 call    near ptr audioresource_compare_chunknames ;~ 2B4F:00DF
cs=0x2b4f;eip=0x0000e2; 	T(ADD(sp, 0x0C));	// 87265 add     sp, 0Ch ;~ 2B4F:00E2
cs=0x2b4f;eip=0x0000e5; 	T(OR(ax, ax));	// 87266 or      ax, ax ;~ 2B4F:00E5
cs=0x2b4f;eip=0x0000e7; 	R(JZ(loc_39bc4));	// 87267 jz      short loc_39BC4 ; if ax = 0, then try next ;~ 2B4F:00E7
cs=0x2b4f;eip=0x0000e9; 	T(MOV(ax, si));	// 87268 mov     ax, si ;~ 2B4F:00E9
cs=0x2b4f;eip=0x0000eb; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), si));	// 87269 mov     [bp+var_8], si ;~ 2B4F:00EB
cs=0x2b4f;eip=0x0000ee; 	X(POP(si));	// 87270 pop     si ;~ 2B4F:00EE
cs=0x2b4f;eip=0x0000ef; 	X(POP(di));	// 87271 pop     di ;~ 2B4F:00EF
cs=0x2b4f;eip=0x0000f0; 	T(MOV(sp, bp));	// 87272 mov     sp, bp ;~ 2B4F:00F0
cs=0x2b4f;eip=0x0000f2; 	X(POP(bp));	// 87273 pop     bp ;~ 2B4F:00F2
cs=0x2b4f;eip=0x0000f3; 	R(RETF(0));	// 87274 retf ;~ 2B4F:00F3
loc_39bc4:
	// 10378 
cs=0x2b4f;eip=0x0000f4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 87278 mov     ax, [bp+arg_0] ;~ 2B4F:00F4
cs=0x2b4f;eip=0x0000f7; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+arg_6))), ax));	// 87279 add     word ptr [bp+arg_6], ax ;~ 2B4F:00F7
cs=0x2b4f;eip=0x0000fa; 	T(INC(si));	// 87280 inc     si ;~ 2B4F:00FA
cs=0x2b4f;eip=0x0000fb; 	T(CMP(si, *(dw*)(raddr(ss,bp+arg_2))));	// 87281 cmp     si, [bp+arg_2] ;~ 2B4F:00FB
cs=0x2b4f;eip=0x0000fe; 	R(JL(loc_39b7d));	// 87282 jl      short loc_39B7D ;~ 2B4F:00FE
cs=0x2b4f;eip=0x000100; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), si));	// 87283 mov     [bp+var_8], si ;~ 2B4F:0100
loc_39bd3:
	// 10379 
cs=0x2b4f;eip=0x000103; 	T(MOV(ax, 0x0FFFF));	// 87286 mov     ax, 0FFFFh ;~ 2B4F:0103
cs=0x2b4f;eip=0x000106; 	X(POP(si));	// 87287 pop     si ;~ 2B4F:0106
cs=0x2b4f;eip=0x000107; 	X(POP(di));	// 87288 pop     di ;~ 2B4F:0107
cs=0x2b4f;eip=0x000108; 	T(MOV(sp, bp));	// 87289 mov     sp, bp ;~ 2B4F:0108
cs=0x2b4f;eip=0x00010a; 	X(POP(bp));	// 87290 pop     bp ;~ 2B4F:010A
cs=0x2b4f;eip=0x00010b; 	R(RETF(0));	// 87291 retf ;~ 2B4F:010B
audioresource_find:
	// 87299 
#undef var_10
#define var_10 -0x10
	// 87302 var_10          = word ptr -10h ;~ 2B4F:010C
#undef var_e
#define var_e -0x0E
	// 87303 var_E           = word ptr -0Eh ;~ 2B4F:010C
#undef var_c
#define var_c -0x0C
	// 87304 var_C           = word ptr -0Ch ;~ 2B4F:010C
#undef var_a
#define var_a -0x0A
	// 87305 var_A           = word ptr -0Ah ;~ 2B4F:010C
#undef var_8
#define var_8 -8
	// 87306 var_8           = word ptr -8 ;~ 2B4F:010C
#undef var_6
#define var_6 -6
	// 87307 var_6           = word ptr -6 ;~ 2B4F:010C
#undef var_4
#define var_4 -4
	// 87308 var_4           = word ptr -4 ;~ 2B4F:010C
#undef var_2
#define var_2 -2
	// 87309 var_2           = word ptr -2 ;~ 2B4F:010C
#undef arg_0
#define arg_0 6
	// 87310 arg_0           = word ptr  6 ;~ 2B4F:010C
#undef arg_2
#define arg_2 8
	// 87311 arg_2           = word ptr  8 ;~ 2B4F:010C
#undef arg_4
#define arg_4 0x0A
	// 87312 arg_4           = word ptr  0Ah ;~ 2B4F:010C
ret_2b4f_10c:
	// 10380 
cs=0x2b4f;eip=0x00010c; 	X(PUSH(bp));	// 87314 push    bp ;~ 2B4F:010C
cs=0x2b4f;eip=0x00010d; 	T(MOV(bp, sp));	// 87315 mov     bp, sp ;~ 2B4F:010D
cs=0x2b4f;eip=0x00010f; 	T(SUB(sp, 0x10));	// 87316 sub     sp, 10h ;~ 2B4F:010F
cs=0x2b4f;eip=0x000112; 	T(SUB(ax, ax));	// 87317 sub     ax, ax ;~ 2B4F:0112
cs=0x2b4f;eip=0x000114; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 87318 mov     [bp+var_8], ax ;~ 2B4F:0114
cs=0x2b4f;eip=0x000117; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 87319 mov     [bp+var_A], ax ;~ 2B4F:0117
cs=0x2b4f;eip=0x00011a; 	T(MOV(ax, 4));	// 87320 mov     ax, 4 ;~ 2B4F:011A
cs=0x2b4f;eip=0x00011d; 	T(CWD);	// 87321 cwd ;~ 2B4F:011D
cs=0x2b4f;eip=0x00011e; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 87322 add     ax, [bp+arg_0] ;~ 2B4F:011E
cs=0x2b4f;eip=0x000121; 	T(ADC(dx, 0));	// 87323 adc     dx, 0 ;~ 2B4F:0121
cs=0x2b4f;eip=0x000124; 	T(MOV(cx, 0x0C));	// 87324 mov     cx, 0Ch ;~ 2B4F:0124
cs=0x2b4f;eip=0x000127; 	T(SHL(dx, cl));	// 87325 shl     dx, cl ;~ 2B4F:0127
cs=0x2b4f;eip=0x000129; 	T(ADD(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 87326 add     dx, [bp+arg_2] ;~ 2B4F:0129
cs=0x2b4f;eip=0x00012c; 	T(MOV(es, dx));	// 87327 mov     es, dx ;~ 2B4F:012C
cs=0x2b4f;eip=0x00012e; 	T(MOV(bx, ax));	// 87328 mov     bx, ax ;~ 2B4F:012E
cs=0x2b4f;eip=0x000130; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 87329 mov     ax, es:[bx]     ; read a word from songfile+4 = number of (sub)chunks? ;~ 2B4F:0130
cs=0x2b4f;eip=0x000133; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 87330 mov     [bp+var_2], ax ;~ 2B4F:0133
cs=0x2b4f;eip=0x000136; 	T(MOV(ax, 6));	// 87331 mov     ax, 6 ;~ 2B4F:0136
cs=0x2b4f;eip=0x000139; 	T(CWD);	// 87332 cwd ;~ 2B4F:0139
cs=0x2b4f;eip=0x00013a; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 87333 add     ax, [bp+arg_0] ;~ 2B4F:013A
cs=0x2b4f;eip=0x00013d; 	T(ADC(dx, 0));	// 87334 adc     dx, 0 ;~ 2B4F:013D
cs=0x2b4f;eip=0x000140; 	T(SHL(dx, cl));	// 87335 shl     dx, cl ;~ 2B4F:0140
cs=0x2b4f;eip=0x000142; 	T(ADD(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 87336 add     dx, [bp+arg_2] ;~ 2B4F:0142
cs=0x2b4f;eip=0x000145; 	X(PUSH(dx));	// 87337 push    dx ;~ 2B4F:0145
cs=0x2b4f;eip=0x000146; 	X(PUSH(ax));	// 87338 push    ax              ; songfile+6 = chunknames ;~ 2B4F:0146
cs=0x2b4f;eip=0x000147; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 87339 push    [bp+arg_4] ;~ 2B4F:0147
cs=0x2b4f;eip=0x00014a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 87340 push    [bp+var_2] ;~ 2B4F:014A
cs=0x2b4f;eip=0x00014d; 	T(SUB(ax, ax));	// 87341 sub     ax, ax ;~ 2B4F:014D
cs=0x2b4f;eip=0x00014f; 	X(PUSH(ax));	// 87342 push    ax ;~ 2B4F:014F
cs=0x2b4f;eip=0x000150; 	X(PUSH(cs));	// 87343 push    cs ;~ 2B4F:0150
cs=0x2b4f;eip=0x000151; 	R(CALL(audioresource_get_chunk_index,0));	// 87344 call    near ptr audioresource_get_chunk_index ;~ 2B4F:0151
cs=0x2b4f;eip=0x000154; 	T(ADD(sp, 0x0A));	// 87345 add     sp, 0Ah ;~ 2B4F:0154
cs=0x2b4f;eip=0x000157; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 87346 mov     [bp+var_10], ax ;~ 2B4F:0157
cs=0x2b4f;eip=0x00015a; 	T(OR(ax, ax));	// 87347 or      ax, ax ;~ 2B4F:015A
cs=0x2b4f;eip=0x00015c; 	R(JL(loc_39c7a));	// 87348 jl      short loc_39C7A ; -1 = not found ;~ 2B4F:015C
cs=0x2b4f;eip=0x00015e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 87349 mov     ax, [bp+arg_0] ;~ 2B4F:015E
cs=0x2b4f;eip=0x000161; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 87350 mov     dx, [bp+arg_2] ;~ 2B4F:0161
cs=0x2b4f;eip=0x000164; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_2))));	// 87351 mov     cx, [bp+var_2] ;~ 2B4F:0164
cs=0x2b4f;eip=0x000167; 	T(SHL(cx, 1));	// 87352 shl     cx, 1 ;~ 2B4F:0167
cs=0x2b4f;eip=0x000169; 	T(SHL(cx, 1));	// 87353 shl     cx, 1 ;~ 2B4F:0169
cs=0x2b4f;eip=0x00016b; 	T(ADD(ax, cx));	// 87354 add     ax, cx ;~ 2B4F:016B
cs=0x2b4f;eip=0x00016d; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_10))));	// 87355 mov     cx, [bp+var_10] ;~ 2B4F:016D
cs=0x2b4f;eip=0x000170; 	T(SHL(cx, 1));	// 87356 shl     cx, 1 ;~ 2B4F:0170
cs=0x2b4f;eip=0x000172; 	T(SHL(cx, 1));	// 87357 shl     cx, 1 ;~ 2B4F:0172
cs=0x2b4f;eip=0x000174; 	T(ADD(ax, cx));	// 87358 add     ax, cx ;~ 2B4F:0174
cs=0x2b4f;eip=0x000176; 	T(ADD(ax, 6));	// 87359 add     ax, 6 ;~ 2B4F:0176
cs=0x2b4f;eip=0x000179; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 87360 mov     [bp+var_6], ax  ; ax = chunkofs + 6 + (chunkindex << 2) + (numchunk << 2) ;~ 2B4F:0179
cs=0x2b4f;eip=0x00017c; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 87361 mov     [bp+var_4], dx ;~ 2B4F:017C
cs=0x2b4f;eip=0x00017f; 	X(PUSH(dx));	// 87362 push    dx ;~ 2B4F:017F
cs=0x2b4f;eip=0x000180; 	X(PUSH(ax));	// 87363 push    ax ;~ 2B4F:0180
cs=0x2b4f;eip=0x000181; 	R(CALLF(audioresource_get_dword,0));	// 87364 call    audioresource_get_dword ; read dword from the audio resource buffer ;~ 2B4F:0181
cs=0x2b4f;eip=0x000186; 	T(ADD(sp, 4));	// 87365 add     sp, 4 ;~ 2B4F:0186
cs=0x2b4f;eip=0x000189; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 87366 mov     [bp+var_E], ax ;~ 2B4F:0189
cs=0x2b4f;eip=0x00018c; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), dx));	// 87367 mov     [bp+var_C], dx ;~ 2B4F:018C
cs=0x2b4f;eip=0x00018f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 87368 mov     ax, [bp+arg_0] ;~ 2B4F:018F
cs=0x2b4f;eip=0x000192; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 87369 mov     dx, [bp+arg_2] ;~ 2B4F:0192
cs=0x2b4f;eip=0x000195; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 87370 mov     bx, [bp+var_2] ;~ 2B4F:0195
cs=0x2b4f;eip=0x000198; 	T(MOV(cl, 3));	// 87371 mov     cl, 3 ;~ 2B4F:0198
cs=0x2b4f;eip=0x00019a; 	T(SHL(bx, cl));	// 87372 shl     bx, cl ;~ 2B4F:019A
cs=0x2b4f;eip=0x00019c; 	T(ADD(ax, bx));	// 87373 add     ax, bx ;~ 2B4F:019C
cs=0x2b4f;eip=0x00019e; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_e))));	// 87374 add     ax, [bp+var_E] ;~ 2B4F:019E
cs=0x2b4f;eip=0x0001a1; 	T(ADD(ax, 6));	// 87375 add     ax, 6 ;~ 2B4F:01A1
cs=0x2b4f;eip=0x0001a4; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 87376 mov     [bp+var_A], ax  ; ax = chunkofs + 6 + readdword + (numchunks << 3) ;~ 2B4F:01A4
cs=0x2b4f;eip=0x0001a7; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), dx));	// 87377 mov     [bp+var_8], dx ;~ 2B4F:01A7
loc_39c7a:
	// 10381 
cs=0x2b4f;eip=0x0001aa; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 87380 mov     ax, [bp+var_A] ;~ 2B4F:01AA
cs=0x2b4f;eip=0x0001ad; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_8))));	// 87381 mov     dx, [bp+var_8] ;~ 2B4F:01AD
cs=0x2b4f;eip=0x0001b0; 	T(MOV(sp, bp));	// 87382 mov     sp, bp ;~ 2B4F:01B0
cs=0x2b4f;eip=0x0001b2; 	X(POP(bp));	// 87383 pop     bp ;~ 2B4F:01B2
cs=0x2b4f;eip=0x0001b3; 	R(RETF(0));	// 87384 retf ;~ 2B4F:01B3
audioresource_copy_n_bytes:
	// 87392 
#undef var_6
#define var_6 -6
	// 87395 var_6           = word ptr -6 ;~ 2B4F:01B4
#undef var_2
#define var_2 -2
	// 87396 var_2           = word ptr -2 ;~ 2B4F:01B4
#undef arg_0
#define arg_0 6
	// 87397 arg_0           = dword ptr  6 ;~ 2B4F:01B4
#undef arg_4
#define arg_4 0x0A
	// 87398 arg_4           = dword ptr  0Ah ;~ 2B4F:01B4
#undef arg_8
#define arg_8 0x0E
	// 87399 arg_8           = word ptr  0Eh ;~ 2B4F:01B4
ret_2b4f_1b4:
	// 10382 
cs=0x2b4f;eip=0x0001b4; 	X(PUSH(bp));	// 87401 push    bp ;~ 2B4F:01B4
cs=0x2b4f;eip=0x0001b5; 	T(MOV(bp, sp));	// 87402 mov     bp, sp ;~ 2B4F:01B5
cs=0x2b4f;eip=0x0001b7; 	T(SUB(sp, 6));	// 87403 sub     sp, 6 ;~ 2B4F:01B7
cs=0x2b4f;eip=0x0001ba; 	X(PUSH(di));	// 87404 push    di ;~ 2B4F:01BA
cs=0x2b4f;eip=0x0001bb; 	X(PUSH(si));	// 87405 push    si ;~ 2B4F:01BB
cs=0x2b4f;eip=0x0001bc; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 87406 mov     [bp+var_2], 0 ;~ 2B4F:01BC
cs=0x2b4f;eip=0x0001c1; 	T(CMP(*(dw*)(raddr(ss,bp+arg_8)), 0));	// 87407 cmp     [bp+arg_8], 0 ;~ 2B4F:01C1
cs=0x2b4f;eip=0x0001c5; 	R(JLE(loc_39cc4));	// 87408 jle     short loc_39CC4 ;~ 2B4F:01C5
cs=0x2b4f;eip=0x0001c7; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_8))));	// 87409 mov     cx, [bp+arg_8] ;~ 2B4F:01C7
cs=0x2b4f;eip=0x0001ca; 	T(MOV(ax, cx));	// 87410 mov     ax, cx ;~ 2B4F:01CA
cs=0x2b4f;eip=0x0001cc; 	X(ADD(*(dw*)(raddr(ss,bp+var_2)), ax));	// 87411 add     [bp+var_2], ax ;~ 2B4F:01CC
cs=0x2b4f;eip=0x0001cf; 	T(LES(di, *(dd*)(raddr(ss,bp+arg_4))));	// 87412 les     di, [bp+arg_4] ;~ 2B4F:01CF
cs=0x2b4f;eip=0x0001d2; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ds));	// 87413 mov     [bp+var_6], ds ;~ 2B4F:01D2
cs=0x2b4f;eip=0x0001d5; 	T(LDS(si, *(dd*)(raddr(ss,bp+arg_0))));	// 87414 lds     si, [bp+arg_0] ;~ 2B4F:01D5
loc_39ca8:
	// 10383 
cs=0x2b4f;eip=0x0001d8; 	T(MOV(al, *(raddr(ds,si))));	// 87417 mov     al, [si] ;~ 2B4F:01D8
cs=0x2b4f;eip=0x0001da; 	X(MOV(*(raddr(es,di)), al));	// 87418 mov     es:[di], al ;~ 2B4F:01DA
cs=0x2b4f;eip=0x0001dd; 	T(MOV(ax, si));	// 87419 mov     ax, si ;~ 2B4F:01DD
cs=0x2b4f;eip=0x0001df; 	T(MOV(dx, ds));	// 87420 mov     dx, ds ;~ 2B4F:01DF
cs=0x2b4f;eip=0x0001e1; 	T(INC(si));	// 87421 inc     si ;~ 2B4F:01E1
cs=0x2b4f;eip=0x0001e2; 	T(INC(di));	// 87422 inc     di ;~ 2B4F:01E2
cs=0x2b4f;eip=0x0001e3; 	R(LOOP(loc_39ca8));	// 87423 loop    loc_39CA8 ;~ 2B4F:01E3
cs=0x2b4f;eip=0x0001e5; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+arg_0))), si));	// 87424 mov     word ptr [bp+arg_0], si ; ?? ;~ 2B4F:01E5
cs=0x2b4f;eip=0x0001e8; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+arg_0+2))), ds));	// 87425 mov     word ptr [bp+arg_0+2], ds ; ?? ;~ 2B4F:01E8
cs=0x2b4f;eip=0x0001eb; 	T(MOV(ds, *(dw*)(raddr(ss,bp+var_6))));	// 87426 mov     ds, [bp+var_6] ;~ 2B4F:01EB
cs=0x2b4f;eip=0x0001ee; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+arg_4))), di));	// 87427 mov     word ptr [bp+arg_4], di ; ?? ;~ 2B4F:01EE
cs=0x2b4f;eip=0x0001f1; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+arg_4+2))), es));	// 87428 mov     word ptr [bp+arg_4+2], es ; ?? ;~ 2B4F:01F1
loc_39cc4:
	// 10384 
cs=0x2b4f;eip=0x0001f4; 	X(POP(si));	// 87431 pop     si ;~ 2B4F:01F4
cs=0x2b4f;eip=0x0001f5; 	X(POP(di));	// 87432 pop     di ;~ 2B4F:01F5
cs=0x2b4f;eip=0x0001f6; 	T(MOV(sp, bp));	// 87433 mov     sp, bp ;~ 2B4F:01F6
cs=0x2b4f;eip=0x0001f8; 	X(POP(bp));	// 87434 pop     bp ;~ 2B4F:01F8
cs=0x2b4f;eip=0x0001f9; 	R(RETF(0));	// 87435 retf ;~ 2B4F:01F9

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return true;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kaudioresource_compare_chunknames: 	goto audioresource_compare_chunknames;
        case m2c::kaudioresource_copy_n_bytes: 	goto audioresource_copy_n_bytes;
        case m2c::kaudioresource_get_chunk_index: 	goto audioresource_get_chunk_index;
        case m2c::kloc_39ae8: 	goto loc_39ae8;
        case m2c::kloc_39b09: 	goto loc_39b09;
        case m2c::kloc_39b16: 	goto loc_39b16;
        case m2c::kloc_39b44: 	goto loc_39b44;
        case m2c::kloc_39b4d: 	goto loc_39b4d;
        case m2c::kloc_39b50: 	goto loc_39b50;
        case m2c::kloc_39b7d: 	goto loc_39b7d;
        case m2c::kloc_39b82: 	goto loc_39b82;
        case m2c::kloc_39bc4: 	goto loc_39bc4;
        case m2c::kloc_39bd3: 	goto loc_39bd3;
        case m2c::kloc_39c7a: 	goto loc_39c7a;
        case m2c::kloc_39ca8: 	goto loc_39ca8;
        case m2c::kloc_39cc4: 	goto loc_39cc4;
        case m2c::kret_2b4f_10c: 	goto ret_2b4f_10c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

