/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool _group17(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group17:
    _begin:
init_audio_resources:
	// 81113 
#undef var_c
#define var_c -0x0C
	// 81116 var_C           = dword ptr -0Ch ;~ 28AF:0002
#undef var_8
#define var_8 -8
	// 81117 var_8           = word ptr -8 ;~ 28AF:0002
#undef var_6
#define var_6 -6
	// 81118 var_6           = word ptr -6 ;~ 28AF:0002
#undef var_4
#define var_4 -4
	// 81119 var_4           = dword ptr -4 ;~ 28AF:0002
#undef arg_0
#define arg_0 6
	// 81120 arg_0           = word ptr  6 ;~ 28AF:0002
#undef arg_2
#define arg_2 8
	// 81121 arg_2           = word ptr  8 ;~ 28AF:0002
#undef arg_4
#define arg_4 0x0A
	// 81122 arg_4           = word ptr  0Ah ;~ 28AF:0002
#undef arg_6
#define arg_6 0x0C
	// 81123 arg_6           = word ptr  0Ch ;~ 28AF:0002
#undef arg_8
#define arg_8 0x0E
	// 81124 arg_8           = word ptr  0Eh ;~ 28AF:0002
ret_28af_2:
	// 10000 
cs=0x28af;eip=0x000002; 	X(PUSH(bp));	// 81126 push    bp ;~ 28AF:0002
cs=0x28af;eip=0x000003; 	T(MOV(bp, sp));	// 81127 mov     bp, sp ;~ 28AF:0003
cs=0x28af;eip=0x000005; 	T(SUB(sp, 0x0C));	// 81128 sub     sp, 0Ch ;~ 28AF:0005
cs=0x28af;eip=0x000008; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 81129 push    [bp+arg_8]      ; arg_8 is a string, e.g "TITL" ;~ 28AF:0008
cs=0x28af;eip=0x00000b; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 81130 push    [bp+arg_2] ;~ 28AF:000B
cs=0x28af;eip=0x00000e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 81131 push    [bp+arg_0] ;~ 28AF:000E
cs=0x28af;eip=0x000011; 	R(CALLF(audioresource_find,0));	// 81132 call    audioresource_find ; audio_find_resource? ;~ 28AF:0011
cs=0x28af;eip=0x000016; 	T(ADD(sp, 6));	// 81133 add     sp, 6 ;~ 28AF:0016
cs=0x28af;eip=0x000019; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c))), ax));	// 81134 mov     word ptr [bp+var_C], ax ;~ 28AF:0019
cs=0x28af;eip=0x00001c; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c+2))), dx));	// 81135 mov     word ptr [bp+var_C+2], dx ;~ 28AF:001C
cs=0x28af;eip=0x00001f; 	T(OR(dx, ax));	// 81136 or      dx, ax ;~ 28AF:001F
cs=0x28af;eip=0x000021; 	R(JNZ(loc_370fa));	// 81137 jnz     short loc_370FA ;~ 28AF:0021
loc_370f3:
	// 10001 
cs=0x28af;eip=0x000023; 	T(SUB(ax, ax));	// 81140 sub     ax, ax ;~ 28AF:0023
cs=0x28af;eip=0x000025; 	T(CWD);	// 81141 cwd ;~ 28AF:0025
cs=0x28af;eip=0x000026; 	T(MOV(sp, bp));	// 81142 mov     sp, bp ;~ 28AF:0026
cs=0x28af;eip=0x000028; 	X(POP(bp));	// 81143 pop     bp ;~ 28AF:0028
cs=0x28af;eip=0x000029; 	R(RETF(0));	// 81144 retf ;~ 28AF:0029
loc_370fa:
	// 10002 
cs=0x28af;eip=0x00002a; 	T(MOV(ax, offset(dseg,ahdr1)));	// 81148 mov     ax, offset aHdr1 ; "hdr1" ;~ 28AF:002A
cs=0x28af;eip=0x00002d; 	X(PUSH(ax));	// 81149 push    ax ;~ 28AF:002D
cs=0x28af;eip=0x00002e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_c+2)))));	// 81150 push    word ptr [bp+var_C+2] ;~ 28AF:002E
cs=0x28af;eip=0x000031; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_c)))));	// 81151 push    word ptr [bp+var_C] ;~ 28AF:0031
cs=0x28af;eip=0x000034; 	R(CALLF(audioresource_find,0));	// 81152 call    audioresource_find ; audio_find_resource? look up "hdr1" in the "TITL" chunk? ;~ 28AF:0034
cs=0x28af;eip=0x000039; 	T(ADD(sp, 6));	// 81153 add     sp, 6 ;~ 28AF:0039
cs=0x28af;eip=0x00003c; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 81154 mov     word ptr [bp+var_4], ax ;~ 28AF:003C
cs=0x28af;eip=0x00003f; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 81155 mov     word ptr [bp+var_4+2], dx ;~ 28AF:003F
cs=0x28af;eip=0x000042; 	T(OR(ax, dx));	// 81156 or      ax, dx ;~ 28AF:0042
cs=0x28af;eip=0x000044; 	R(JZ(loc_370f3));	// 81157 jz      short loc_370F3 ;~ 28AF:0044
cs=0x28af;eip=0x000046; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 81158 les     bx, [bp+var_4] ;~ 28AF:0046
cs=0x28af;eip=0x000049; 	T(CMP(*(raddr(es,bx+5)), 1));	// 81159 cmp     byte ptr es:[bx+5], 1 ; check header+5 if we already loaded this ;~ 28AF:0049
cs=0x28af;eip=0x00004e; 	R(JZ(loc_37172));	// 81160 jz      short loc_37172 ;~ 28AF:004E
cs=0x28af;eip=0x000050; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 81161 push    [bp+arg_6] ;~ 28AF:0050
cs=0x28af;eip=0x000053; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 81162 push    [bp+arg_4] ;~ 28AF:0053
cs=0x28af;eip=0x000056; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_c+2)))));	// 81163 push    word ptr [bp+var_C+2] ;~ 28AF:0056
cs=0x28af;eip=0x000059; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_c)))));	// 81164 push    word ptr [bp+var_C] ;~ 28AF:0059
cs=0x28af;eip=0x00005c; 	X(PUSH(cs));	// 81165 push    cs ;~ 28AF:005C
cs=0x28af;eip=0x00005d; 	R(CALL(audio_map_song_instruments,0));	// 81166 call    near ptr audio_map_song_instruments ;~ 28AF:005D
cs=0x28af;eip=0x000060; 	T(ADD(sp, 8));	// 81167 add     sp, 8 ;~ 28AF:0060
cs=0x28af;eip=0x000063; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_c+2)))));	// 81168 push    word ptr [bp+var_C+2] ;~ 28AF:0063
cs=0x28af;eip=0x000066; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_c)))));	// 81169 push    word ptr [bp+var_C] ;~ 28AF:0066
cs=0x28af;eip=0x000069; 	X(PUSH(cs));	// 81170 push    cs ;~ 28AF:0069
cs=0x28af;eip=0x00006a; 	R(CALL(audio_map_song_tracks,0));	// 81171 call    near ptr audio_map_song_tracks ;~ 28AF:006A
cs=0x28af;eip=0x00006d; 	T(ADD(sp, 4));	// 81172 add     sp, 4 ;~ 28AF:006D
cs=0x28af;eip=0x000070; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 81173 les     bx, [bp+var_4] ;~ 28AF:0070
cs=0x28af;eip=0x000073; 	X(MOV(*(raddr(es,bx+5)), 1));	// 81174 mov     byte ptr es:[bx+5], 1 ; set header+5 to 1, = loaded ;~ 28AF:0073
cs=0x28af;eip=0x000078; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_c))));	// 81175 les     bx, [bp+var_C] ;~ 28AF:0078
cs=0x28af;eip=0x00007b; 	T(MOV(al, *(raddr(es,bx+4))));	// 81176 mov     al, es:[bx+4] ;~ 28AF:007B
cs=0x28af;eip=0x00007f; 	T(SUB(ah, ah));	// 81177 sub     ah, ah ;~ 28AF:007F
cs=0x28af;eip=0x000081; 	T(MOV(cl, 3));	// 81178 mov     cl, 3 ;~ 28AF:0081
cs=0x28af;eip=0x000083; 	T(SHL(ax, cl));	// 81179 shl     ax, cl ;~ 28AF:0083
cs=0x28af;eip=0x000085; 	T(ADD(ax, bx));	// 81180 add     ax, bx ;~ 28AF:0085
cs=0x28af;eip=0x000087; 	T(MOV(dx, es));	// 81181 mov     dx, es ;~ 28AF:0087
cs=0x28af;eip=0x000089; 	T(INC(ax));	// 81182 inc     ax ;~ 28AF:0089
cs=0x28af;eip=0x00008a; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 81183 mov     [bp+var_8], ax ;~ 28AF:008A
cs=0x28af;eip=0x00008d; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 81184 mov     [bp+var_6], dx ;~ 28AF:008D
cs=0x28af;eip=0x000090; 	T(ax = bp+var_8);	// 81185 lea     ax, [bp+var_8] ;~ 28AF:0090
cs=0x28af;eip=0x000093; 	X(PUSH(ss));	// 81186 push    ss ;~ 28AF:0093
cs=0x28af;eip=0x000094; 	X(PUSH(ax));	// 81187 push    ax ;~ 28AF:0094
cs=0x28af;eip=0x000095; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 81188 push    word ptr [bp+var_4+2] ;~ 28AF:0095
cs=0x28af;eip=0x000098; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 81189 push    word ptr [bp+var_4] ;~ 28AF:0098
cs=0x28af;eip=0x00009b; 	X(PUSH(cs));	// 81190 push    cs ;~ 28AF:009B
cs=0x28af;eip=0x00009c; 	R(CALL(audioresource_copy_4_bytes,0));	// 81191 call    near ptr audioresource_copy_4_bytes ;~ 28AF:009C
cs=0x28af;eip=0x00009f; 	T(ADD(sp, 8));	// 81192 add     sp, 8 ;~ 28AF:009F
loc_37172:
	// 10003 
cs=0x28af;eip=0x0000a2; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 81195 mov     ax, word ptr [bp+var_4] ;~ 28AF:00A2
cs=0x28af;eip=0x0000a5; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 81196 mov     dx, word ptr [bp+var_4+2] ;~ 28AF:00A5
cs=0x28af;eip=0x0000a8; 	T(MOV(sp, bp));	// 81197 mov     sp, bp ;~ 28AF:00A8
cs=0x28af;eip=0x0000aa; 	X(POP(bp));	// 81198 pop     bp ;~ 28AF:00AA
cs=0x28af;eip=0x0000ab; 	R(RETF(0));	// 81199 retf ;~ 28AF:00AB
load_audio_finalize:
	// 81207 
#undef var_6
#define var_6 -6
	// 81209 var_6           = dword ptr -6 ;~ 28AF:00AC
#undef var_2
#define var_2 -2
	// 81210 var_2           = word ptr -2 ;~ 28AF:00AC
#undef arg_0
#define arg_0 6
	// 81211 arg_0           = dword ptr  6 ;~ 28AF:00AC
ret_28af_ac:
	// 10004 
cs=0x28af;eip=0x0000ac; 	X(PUSH(bp));	// 81213 push    bp ;~ 28AF:00AC
cs=0x28af;eip=0x0000ad; 	T(MOV(bp, sp));	// 81214 mov     bp, sp ;~ 28AF:00AD
cs=0x28af;eip=0x0000af; 	T(SUB(sp, 6));	// 81215 sub     sp, 6 ;~ 28AF:00AF
cs=0x28af;eip=0x0000b2; 	X(PUSH(si));	// 81216 push    si ;~ 28AF:00B2
cs=0x28af;eip=0x0000b3; 	X(MOV(word_4063a, 1));	// 81217 mov     word_4063A, 1 ;~ 28AF:00B3
cs=0x28af;eip=0x0000b9; 	X(PUSH(cs));	// 81218 push    cs ;~ 28AF:00B9
cs=0x28af;eip=0x0000ba; 	R(CALL(sub_3736a,0));	// 81219 call    near ptr sub_3736A ;~ 28AF:00BA
cs=0x28af;eip=0x0000bd; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 81220 mov     ax, word ptr [bp+arg_0] ;~ 28AF:00BD
cs=0x28af;eip=0x0000c0; 	T(OR(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 81221 or      ax, word ptr [bp+arg_0+2] ;~ 28AF:00C0
cs=0x28af;eip=0x0000c3; 	R(JZ(loc_3720f));	// 81222 jz      short loc_3720F ;~ 28AF:00C3
cs=0x28af;eip=0x0000c5; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 81223 les     bx, [bp+arg_0] ;~ 28AF:00C5
cs=0x28af;eip=0x0000c8; 	T(CMP(*(raddr(es,bx+4)), 0));	// 81224 cmp     byte ptr es:[bx+4], 0 ;~ 28AF:00C8
cs=0x28af;eip=0x0000cd; 	R(JNZ(loc_3720f));	// 81225 jnz     short loc_3720F ;~ 28AF:00CD
cs=0x28af;eip=0x0000cf; 	T(CMP(*(raddr(es,bx+5)), 1));	// 81226 cmp     byte ptr es:[bx+5], 1 ;~ 28AF:00CF
cs=0x28af;eip=0x0000d4; 	R(JNZ(loc_3720f));	// 81227 jnz     short loc_3720F ;~ 28AF:00D4
cs=0x28af;eip=0x0000d6; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 81228 mov     ax, word ptr audiodriverbinary ;~ 28AF:00D6
cs=0x28af;eip=0x0000d9; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 81229 mov     dx, word ptr audiodriverbinary+2 ;~ 28AF:00D9
cs=0x28af;eip=0x0000dd; 	T(ADD(ax, 0x18));	// 81230 add     ax, 18h ;~ 28AF:00DD
cs=0x28af;eip=0x0000e0; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6+2))), dx));	// 81231 mov     word ptr [bp+var_6+2], dx ;~ 28AF:00E0
cs=0x28af;eip=0x0000e3; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6))), ax));	// 81232 mov     word ptr [bp+var_6], ax ;~ 28AF:00E3
cs=0x28af;eip=0x0000e6; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_6))));	// 81233 call    [bp+var_6] ;~ 28AF:00E6
cs=0x28af;eip=0x0000e9; 	X(MOV(word_44d48, 0));	// 81234 mov     word_44D48, 0 ;~ 28AF:00E9
cs=0x28af;eip=0x0000ef; 	X(MOV(word_454ba, 0x80));	// 81235 mov     word_454BA, 80h ; '€' ;~ 28AF:00EF
cs=0x28af;eip=0x0000f5; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 81236 les     bx, [bp+arg_0] ;~ 28AF:00F5
cs=0x28af;eip=0x0000f8; 	T(MOV(al, *(raddr(es,bx+6))));	// 81237 mov     al, es:[bx+6] ;~ 28AF:00F8
cs=0x28af;eip=0x0000fc; 	T(SUB(ah, ah));	// 81238 sub     ah, ah ;~ 28AF:00FC
cs=0x28af;eip=0x0000fe; 	T(SHL(ax, 1));	// 81239 shl     ax, 1 ;~ 28AF:00FE
cs=0x28af;eip=0x000100; 	T(SHL(ax, 1));	// 81240 shl     ax, 1 ;~ 28AF:0100
cs=0x28af;eip=0x000102; 	T(ADD(ax, 7));	// 81241 add     ax, 7 ;~ 28AF:0102
cs=0x28af;eip=0x000105; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 81242 mov     [bp+var_2], ax ;~ 28AF:0105
cs=0x28af;eip=0x000108; 	T(MOV(bx, ax));	// 81243 mov     bx, ax ;~ 28AF:0108
cs=0x28af;eip=0x00010a; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 81244 inc     [bp+var_2] ;~ 28AF:010A
cs=0x28af;eip=0x00010d; 	T(MOV(si, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 81245 mov     si, word ptr [bp+arg_0] ;~ 28AF:010D
cs=0x28af;eip=0x000110; 	T(MOV(al, *(raddr(es,bx+si))));	// 81246 mov     al, es:[bx+si] ;~ 28AF:0110
cs=0x28af;eip=0x000113; 	X(MOV(byte_44290, al));	// 81247 mov     byte_44290, al ;~ 28AF:0113
cs=0x28af;eip=0x000116; 	T(MOV(ax, 0x20));	// 81248 mov     ax, 20h ; ' ' ;~ 28AF:0116
cs=0x28af;eip=0x000119; 	X(PUSH(ax));	// 81249 push    ax ;~ 28AF:0119
cs=0x28af;eip=0x00011a; 	T(MOV(al, byte_45950));	// 81250 mov     al, byte_45950 ;~ 28AF:011A
cs=0x28af;eip=0x00011d; 	T(SUB(ah, ah));	// 81251 sub     ah, ah ;~ 28AF:011D
cs=0x28af;eip=0x00011f; 	X(PUSH(ax));	// 81252 push    ax ;~ 28AF:011F
cs=0x28af;eip=0x000120; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 81253 push    [bp+var_2] ;~ 28AF:0120
cs=0x28af;eip=0x000123; 	X(PUSH(es));	// 81254 push    es ;~ 28AF:0123
cs=0x28af;eip=0x000124; 	X(PUSH(si));	// 81255 push    si ;~ 28AF:0124
cs=0x28af;eip=0x000125; 	T(MOV(al, byte_44290));	// 81256 mov     al, byte_44290 ;~ 28AF:0125
cs=0x28af;eip=0x000128; 	T(DEC(ax));	// 81257 dec     ax ;~ 28AF:0128
cs=0x28af;eip=0x000129; 	X(PUSH(ax));	// 81258 push    ax ;~ 28AF:0129
cs=0x28af;eip=0x00012a; 	T(SUB(ax, ax));	// 81259 sub     ax, ax ;~ 28AF:012A
cs=0x28af;eip=0x00012c; 	X(PUSH(ax));	// 81260 push    ax ;~ 28AF:012C
cs=0x28af;eip=0x00012d; 	X(PUSH(cs));	// 81261 push    cs ;~ 28AF:012D
cs=0x28af;eip=0x00012e; 	R(CALL(audio_init_chunk,0));	// 81262 call    near ptr audio_init_chunk ;~ 28AF:012E
cs=0x28af;eip=0x000131; 	T(ADD(sp, 0x0E));	// 81263 add     sp, 0Eh ;~ 28AF:0131
cs=0x28af;eip=0x000134; 	X(MOV(byte_40632, 1));	// 81264 mov     byte_40632, 1 ;~ 28AF:0134
cs=0x28af;eip=0x000139; 	X(MOV(word_4063a, 0));	// 81265 mov     word_4063A, 0 ;~ 28AF:0139
loc_3720f:
	// 10005 
cs=0x28af;eip=0x00013f; 	X(POP(si));	// 81269 pop     si ;~ 28AF:013F
cs=0x28af;eip=0x000140; 	T(MOV(sp, bp));	// 81270 mov     sp, bp ;~ 28AF:0140
cs=0x28af;eip=0x000142; 	X(POP(bp));	// 81271 pop     bp ;~ 28AF:0142
cs=0x28af;eip=0x000143; 	R(RETF(0));	// 81272 retf ;~ 28AF:0143
audio_unk:
	// 81282 
#undef var_c
#define var_c -0x0C
	// 81285 var_C           = word ptr -0Ch ;~ 28AF:0146
#undef var_a
#define var_a -0x0A
	// 81286 var_A           = dword ptr -0Ah ;~ 28AF:0146
#undef var_4
#define var_4 -4
	// 81287 var_4           = word ptr -4 ;~ 28AF:0146
#undef var_2
#define var_2 -2
	// 81288 var_2           = word ptr -2 ;~ 28AF:0146
ret_28af_146:
	// 10006 
cs=0x28af;eip=0x000146; 	X(PUSH(bp));	// 81290 push    bp ;~ 28AF:0146
cs=0x28af;eip=0x000147; 	T(MOV(bp, sp));	// 81291 mov     bp, sp ;~ 28AF:0147
cs=0x28af;eip=0x000149; 	T(SUB(sp, 0x0C));	// 81292 sub     sp, 0Ch ;~ 28AF:0149
cs=0x28af;eip=0x00014c; 	X(PUSH(di));	// 81293 push    di ;~ 28AF:014C
cs=0x28af;eip=0x00014d; 	X(PUSH(si));	// 81294 push    si ;~ 28AF:014D
cs=0x28af;eip=0x00014e; 	X(MOV(byte_40630, 1));	// 81295 mov     byte_40630, 1 ;~ 28AF:014E
cs=0x28af;eip=0x000153; 	X(MOV(word_4063a, 1));	// 81296 mov     word_4063A, 1 ;~ 28AF:0153
cs=0x28af;eip=0x000159; 	T(CMP(byte_40634, 0));	// 81297 cmp     byte_40634, 0 ;~ 28AF:0159
cs=0x28af;eip=0x00015e; 	R(JNZ(loc_37262));	// 81298 jnz     short loc_37262 ;~ 28AF:015E
cs=0x28af;eip=0x000160; 	T(SUB(si, si));	// 81299 sub     si, si ;~ 28AF:0160
cs=0x28af;eip=0x000162; 	T(MOV(di, 0x8224));	// 81300 mov     di, 8224h ;~ 28AF:0162
loc_37235:
	// 10007 
cs=0x28af;eip=0x000165; 	T(CMP(audioflag6, 1));	// 81303 cmp     audioflag6, 1 ;~ 28AF:0165
cs=0x28af;eip=0x00016a; 	R(JZ(loc_37241));	// 81304 jz      short loc_37241 ;~ 28AF:016A
cs=0x28af;eip=0x00016c; 	T(CMP(si, 0x10));	// 81305 cmp     si, 10h ;~ 28AF:016C
cs=0x28af;eip=0x00016f; 	R(JGE(loc_37253));	// 81306 jge     short loc_37253 ;~ 28AF:016F
loc_37241:
	// 10008 
cs=0x28af;eip=0x000171; 	T(MOV(al, *(raddr(ds,di))));	// 81309 mov     al, [di] ;~ 28AF:0171
cs=0x28af;eip=0x000173; 	X(MOV(*((&byte_428be)+si), al));	// 81310 mov     byte_428BE[si], al ;~ 28AF:0173
cs=0x28af;eip=0x000177; 	T(SUB(ax, ax));	// 81311 sub     ax, ax ;~ 28AF:0177
cs=0x28af;eip=0x000179; 	X(PUSH(ax));	// 81312 push    ax ;~ 28AF:0179
cs=0x28af;eip=0x00017a; 	X(PUSH(si));	// 81313 push    si ;~ 28AF:017A
cs=0x28af;eip=0x00017b; 	R(CALLF(audio_unk2,0));	// 81314 call    audio_unk2 ;~ 28AF:017B
cs=0x28af;eip=0x000180; 	T(ADD(sp, 4));	// 81315 add     sp, 4 ;~ 28AF:0180
loc_37253:
	// 10009 
cs=0x28af;eip=0x000183; 	T(ADD(di, 0x4C));	// 81318 add     di, 4Ch ; 'L' ;~ 28AF:0183
cs=0x28af;eip=0x000186; 	T(INC(si));	// 81319 inc     si ;~ 28AF:0186
cs=0x28af;eip=0x000187; 	T(CMP(si, 0x18));	// 81320 cmp     si, 18h ;~ 28AF:0187
cs=0x28af;eip=0x00018a; 	R(JL(loc_37235));	// 81321 jl      short loc_37235 ;~ 28AF:018A
cs=0x28af;eip=0x00018c; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), si));	// 81322 mov     [bp+var_2], si ;~ 28AF:018C
cs=0x28af;eip=0x00018f; 	R(JMP(loc_37286));	// 81323 jmp     short loc_37286 ;~ 28AF:018F
loc_37262:
	// 10010 
cs=0x28af;eip=0x000192; 	X(MOV(byte_40639, 0));	// 81328 mov     byte_40639, 0 ;~ 28AF:0192
cs=0x28af;eip=0x000197; 	T(MOV(ax, offset(dseg,unk_40636)));	// 81329 mov     ax, offset unk_40636 ;~ 28AF:0197
cs=0x28af;eip=0x00019a; 	X(PUSH(ds));	// 81330 push    ds ;~ 28AF:019A
cs=0x28af;eip=0x00019b; 	X(PUSH(ax));	// 81331 push    ax ;~ 28AF:019B
cs=0x28af;eip=0x00019c; 	T(MOV(ax, 4));	// 81332 mov     ax, 4 ;~ 28AF:019C
cs=0x28af;eip=0x00019f; 	X(PUSH(ax));	// 81333 push    ax ;~ 28AF:019F
cs=0x28af;eip=0x0001a0; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 81334 mov     ax, word ptr audiodriverbinary ;~ 28AF:01A0
cs=0x28af;eip=0x0001a3; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 81335 mov     dx, word ptr audiodriverbinary+2 ;~ 28AF:01A3
cs=0x28af;eip=0x0001a7; 	T(ADD(ax, 0x3F));	// 81336 add     ax, 3Fh ; '?' ;~ 28AF:01A7
cs=0x28af;eip=0x0001aa; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a+2))), dx));	// 81337 mov     word ptr [bp+var_A+2], dx ;~ 28AF:01AA
cs=0x28af;eip=0x0001ad; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a))), ax));	// 81338 mov     word ptr [bp+var_A], ax ;~ 28AF:01AD
cs=0x28af;eip=0x0001b0; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_a))));	// 81339 call    [bp+var_A] ;~ 28AF:01B0
cs=0x28af;eip=0x0001b3; 	T(ADD(sp, 6));	// 81340 add     sp, 6 ;~ 28AF:01B3
loc_37286:
	// 10011 
cs=0x28af;eip=0x0001b6; 	T(CMP(byte_40634, 0));	// 81343 cmp     byte_40634, 0 ;~ 28AF:01B6
cs=0x28af;eip=0x0001bb; 	R(JNZ(loc_372e7));	// 81344 jnz     short loc_372E7 ;~ 28AF:01BB
cs=0x28af;eip=0x0001bd; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x10));	// 81345 mov     [bp+var_2], 10h ;~ 28AF:01BD
cs=0x28af;eip=0x0001c2; 	T(MOV(di, 0x0A2B6));	// 81346 mov     di, 0A2B6h ;~ 28AF:01C2
cs=0x28af;eip=0x0001c5; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 0x10));	// 81347 mov     [bp+var_C], 10h ;~ 28AF:01C5
loc_3729a:
	// 10012 
cs=0x28af;eip=0x0001ca; 	T(MOV(si, di));	// 81350 mov     si, di ;~ 28AF:01CA
cs=0x28af;eip=0x0001cc; 	X(PUSH(*(dw*)(raddr(ds,si+0x12))));	// 81351 push    word ptr [si+12h] ;~ 28AF:01CC
cs=0x28af;eip=0x0001cf; 	X(PUSH(*(dw*)(raddr(ds,si+0x10))));	// 81352 push    word ptr [si+10h] ;~ 28AF:01CF
cs=0x28af;eip=0x0001d2; 	X(PUSH(*(dw*)(raddr(ds,si+0x2A))));	// 81353 push    word ptr [si+2Ah] ;~ 28AF:01D2
cs=0x28af;eip=0x0001d5; 	X(PUSH(si));	// 81354 push    si ;~ 28AF:01D5
cs=0x28af;eip=0x0001d6; 	T(MOV(al, *(raddr(ds,si+0x2C))));	// 81355 mov     al, [si+2Ch] ;~ 28AF:01D6
cs=0x28af;eip=0x0001d9; 	T(SUB(ah, ah));	// 81356 sub     ah, ah ;~ 28AF:01D9
cs=0x28af;eip=0x0001db; 	X(PUSH(ax));	// 81357 push    ax ;~ 28AF:01DB
cs=0x28af;eip=0x0001dc; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 81358 mov     ax, word ptr audiodriverbinary ;~ 28AF:01DC
cs=0x28af;eip=0x0001df; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 81359 mov     dx, word ptr audiodriverbinary+2 ;~ 28AF:01DF
cs=0x28af;eip=0x0001e3; 	T(ADD(ax, 0x27));	// 81360 add     ax, 27h ; ''' ;~ 28AF:01E3
cs=0x28af;eip=0x0001e6; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a+2))), dx));	// 81361 mov     word ptr [bp+var_A+2], dx ;~ 28AF:01E6
cs=0x28af;eip=0x0001e9; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a))), ax));	// 81362 mov     word ptr [bp+var_A], ax ;~ 28AF:01E9
cs=0x28af;eip=0x0001ec; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_a))));	// 81363 call    [bp+var_A] ;~ 28AF:01EC
cs=0x28af;eip=0x0001ef; 	T(ADD(sp, 0x0A));	// 81364 add     sp, 0Ah ;~ 28AF:01EF
cs=0x28af;eip=0x0001f2; 	T(ADD(di, 0x2E));	// 81365 add     di, 2Eh ; '.' ;~ 28AF:01F2
cs=0x28af;eip=0x0001f5; 	X(DEC(*(dw*)(raddr(ss,bp+var_c))));	// 81366 dec     [bp+var_C] ;~ 28AF:01F5
cs=0x28af;eip=0x0001f8; 	R(JNZ(loc_3729a));	// 81367 jnz     short loc_3729A ;~ 28AF:01F8
cs=0x28af;eip=0x0001fa; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), si));	// 81368 mov     [bp+var_4], si ;~ 28AF:01FA
cs=0x28af;eip=0x0001fd; 	T(MOV(ax, 0x0A2B6));	// 81369 mov     ax, 0A2B6h ;~ 28AF:01FD
cs=0x28af;eip=0x000200; 	X(PUSH(ax));	// 81370 push    ax ;~ 28AF:0200
cs=0x28af;eip=0x000201; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 81371 mov     ax, word ptr audiodriverbinary ;~ 28AF:0201
cs=0x28af;eip=0x000204; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 81372 mov     dx, word ptr audiodriverbinary+2 ;~ 28AF:0204
cs=0x28af;eip=0x000208; 	T(ADD(ax, 0x30));	// 81373 add     ax, 30h ; '0' ;~ 28AF:0208
cs=0x28af;eip=0x00020b; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a+2))), dx));	// 81374 mov     word ptr [bp+var_A+2], dx ;~ 28AF:020B
cs=0x28af;eip=0x00020e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a))), ax));	// 81375 mov     word ptr [bp+var_A], ax ;~ 28AF:020E
cs=0x28af;eip=0x000211; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_a))));	// 81376 call    [bp+var_A] ;~ 28AF:0211
cs=0x28af;eip=0x000214; 	T(ADD(sp, 2));	// 81377 add     sp, 2 ;~ 28AF:0214
loc_372e7:
	// 10013 
cs=0x28af;eip=0x000217; 	X(MOV(word_4063a, 0));	// 81380 mov     word_4063A, 0 ;~ 28AF:0217
cs=0x28af;eip=0x00021d; 	X(POP(si));	// 81381 pop     si ;~ 28AF:021D
cs=0x28af;eip=0x00021e; 	X(POP(di));	// 81382 pop     di ;~ 28AF:021E
cs=0x28af;eip=0x00021f; 	T(MOV(sp, bp));	// 81383 mov     sp, bp ;~ 28AF:021F
cs=0x28af;eip=0x000221; 	X(POP(bp));	// 81384 pop     bp ;~ 28AF:0221
cs=0x28af;eip=0x000222; 	R(RETF(0));	// 81385 retf ;~ 28AF:0222
sub_372f4:
	// 81395 
#undef var_6
#define var_6 -6
	// 81398 var_6           = dword ptr -6 ;~ 28AF:0224
#undef var_2
#define var_2 -2
	// 81399 var_2           = word ptr -2 ;~ 28AF:0224
ret_28af_224:
	// 10014 
cs=0x28af;eip=0x000224; 	X(PUSH(bp));	// 81401 push    bp ;~ 28AF:0224
cs=0x28af;eip=0x000225; 	T(MOV(bp, sp));	// 81402 mov     bp, sp ;~ 28AF:0225
cs=0x28af;eip=0x000227; 	T(SUB(sp, 6));	// 81403 sub     sp, 6 ;~ 28AF:0227
cs=0x28af;eip=0x00022a; 	X(PUSH(si));	// 81404 push    si ;~ 28AF:022A
cs=0x28af;eip=0x00022b; 	X(MOV(byte_40630, 1));	// 81405 mov     byte_40630, 1 ;~ 28AF:022B
cs=0x28af;eip=0x000230; 	X(MOV(word_4063a, 1));	// 81406 mov     word_4063A, 1 ;~ 28AF:0230
cs=0x28af;eip=0x000236; 	T(CMP(byte_40634, 0));	// 81407 cmp     byte_40634, 0 ;~ 28AF:0236
cs=0x28af;eip=0x00023b; 	R(JNZ(loc_37336));	// 81408 jnz     short loc_37336 ;~ 28AF:023B
cs=0x28af;eip=0x00023d; 	T(SUB(si, si));	// 81409 sub     si, si ;~ 28AF:023D
loc_3730f:
	// 10015 
cs=0x28af;eip=0x00023f; 	T(CMP(audioflag6, 1));	// 81412 cmp     audioflag6, 1 ;~ 28AF:023F
cs=0x28af;eip=0x000244; 	R(JZ(loc_3731b));	// 81413 jz      short loc_3731B ;~ 28AF:0244
cs=0x28af;eip=0x000246; 	T(CMP(si, 0x10));	// 81414 cmp     si, 10h ;~ 28AF:0246
cs=0x28af;eip=0x000249; 	R(JGE(loc_3732b));	// 81415 jge     short loc_3732B ;~ 28AF:0249
loc_3731b:
	// 10016 
cs=0x28af;eip=0x00024b; 	T(MOV(al, *((&byte_428be)+si)));	// 81418 mov     al, byte_428BE[si] ;~ 28AF:024B
cs=0x28af;eip=0x00024f; 	T(SUB(ah, ah));	// 81419 sub     ah, ah ;~ 28AF:024F
cs=0x28af;eip=0x000251; 	X(PUSH(ax));	// 81420 push    ax ;~ 28AF:0251
cs=0x28af;eip=0x000252; 	X(PUSH(si));	// 81421 push    si ;~ 28AF:0252
cs=0x28af;eip=0x000253; 	R(CALLF(audio_unk2,0));	// 81422 call    audio_unk2 ;~ 28AF:0253
cs=0x28af;eip=0x000258; 	T(ADD(sp, 4));	// 81423 add     sp, 4 ;~ 28AF:0258
loc_3732b:
	// 10017 
cs=0x28af;eip=0x00025b; 	T(INC(si));	// 81426 inc     si ;~ 28AF:025B
cs=0x28af;eip=0x00025c; 	T(CMP(si, 0x18));	// 81427 cmp     si, 18h ;~ 28AF:025C
cs=0x28af;eip=0x00025f; 	R(JL(loc_3730f));	// 81428 jl      short loc_3730F ;~ 28AF:025F
cs=0x28af;eip=0x000261; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), si));	// 81429 mov     [bp+var_2], si ;~ 28AF:0261
cs=0x28af;eip=0x000264; 	R(JMP(loc_3735a));	// 81430 jmp     short loc_3735A ;~ 28AF:0264
loc_37336:
	// 10018 
cs=0x28af;eip=0x000266; 	X(MOV(byte_40639, 0x64));	// 81434 mov     byte_40639, 64h ; 'd' ;~ 28AF:0266
cs=0x28af;eip=0x00026b; 	T(MOV(ax, offset(dseg,unk_40636)));	// 81435 mov     ax, offset unk_40636 ;~ 28AF:026B
cs=0x28af;eip=0x00026e; 	X(PUSH(ds));	// 81436 push    ds ;~ 28AF:026E
cs=0x28af;eip=0x00026f; 	X(PUSH(ax));	// 81437 push    ax ;~ 28AF:026F
cs=0x28af;eip=0x000270; 	T(MOV(ax, 4));	// 81438 mov     ax, 4 ;~ 28AF:0270
cs=0x28af;eip=0x000273; 	X(PUSH(ax));	// 81439 push    ax ;~ 28AF:0273
cs=0x28af;eip=0x000274; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 81440 mov     ax, word ptr audiodriverbinary ;~ 28AF:0274
cs=0x28af;eip=0x000277; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 81441 mov     dx, word ptr audiodriverbinary+2 ;~ 28AF:0277
cs=0x28af;eip=0x00027b; 	T(ADD(ax, 0x3F));	// 81442 add     ax, 3Fh ; '?' ;~ 28AF:027B
cs=0x28af;eip=0x00027e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6+2))), dx));	// 81443 mov     word ptr [bp+var_6+2], dx ;~ 28AF:027E
cs=0x28af;eip=0x000281; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6))), ax));	// 81444 mov     word ptr [bp+var_6], ax ;~ 28AF:0281
cs=0x28af;eip=0x000284; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_6))));	// 81445 call    [bp+var_6] ;~ 28AF:0284
cs=0x28af;eip=0x000287; 	T(ADD(sp, 6));	// 81446 add     sp, 6 ;~ 28AF:0287
loc_3735a:
	// 10019 
cs=0x28af;eip=0x00028a; 	X(MOV(word_4063a, 0));	// 81449 mov     word_4063A, 0 ;~ 28AF:028A
cs=0x28af;eip=0x000290; 	X(MOV(byte_40630, 0));	// 81450 mov     byte_40630, 0 ;~ 28AF:0290
cs=0x28af;eip=0x000295; 	X(POP(si));	// 81451 pop     si ;~ 28AF:0295
cs=0x28af;eip=0x000296; 	T(MOV(sp, bp));	// 81452 mov     sp, bp ;~ 28AF:0296
cs=0x28af;eip=0x000298; 	X(POP(bp));	// 81453 pop     bp ;~ 28AF:0298
cs=0x28af;eip=0x000299; 	R(RETF(0));	// 81454 retf ;~ 28AF:0299
sub_3736a:
	// 81461 
cs=0x28af;eip=0x00029a; 	X(MOV(word_4063a, 1));	// 81463 mov     word_4063A, 1 ;~ 28AF:029A
ret_28af_2a0:
	// 10020 
cs=0x28af;eip=0x0002a0; 	X(MOV(byte_40632, 0));	// 81464 mov     byte_40632, 0 ;~ 28AF:02A0
cs=0x28af;eip=0x0002a5; 	T(MOV(ax, 0x0F));	// 81465 mov     ax, 0Fh ;~ 28AF:02A5
cs=0x28af;eip=0x0002a8; 	X(PUSH(ax));	// 81466 push    ax ;~ 28AF:02A8
cs=0x28af;eip=0x0002a9; 	T(SUB(ax, ax));	// 81467 sub     ax, ax ;~ 28AF:02A9
cs=0x28af;eip=0x0002ab; 	X(PUSH(ax));	// 81468 push    ax ;~ 28AF:02AB
cs=0x28af;eip=0x0002ac; 	R(CALLF(audio_driver_func1e,0));	// 81469 call    audio_driver_func1E ;~ 28AF:02AC
cs=0x28af;eip=0x0002b1; 	T(ADD(sp, 4));	// 81470 add     sp, 4 ;~ 28AF:02B1
cs=0x28af;eip=0x0002b4; 	T(SUB(ax, ax));	// 81471 sub     ax, ax ;~ 28AF:02B4
cs=0x28af;eip=0x0002b6; 	X(PUSH(ax));	// 81472 push    ax ;~ 28AF:02B6
cs=0x28af;eip=0x0002b7; 	T(MOV(al, byte_45950));	// 81473 mov     al, byte_45950 ;~ 28AF:02B7
cs=0x28af;eip=0x0002ba; 	T(SUB(ah, ah));	// 81474 sub     ah, ah ;~ 28AF:02BA
cs=0x28af;eip=0x0002bc; 	X(PUSH(ax));	// 81475 push    ax ;~ 28AF:02BC
cs=0x28af;eip=0x0002bd; 	T(SUB(ax, ax));	// 81476 sub     ax, ax ;~ 28AF:02BD
cs=0x28af;eip=0x0002bf; 	X(PUSH(ax));	// 81477 push    ax ;~ 28AF:02BF
cs=0x28af;eip=0x0002c0; 	X(PUSH(ax));	// 81478 push    ax ;~ 28AF:02C0
cs=0x28af;eip=0x0002c1; 	X(PUSH(ax));	// 81479 push    ax ;~ 28AF:02C1
cs=0x28af;eip=0x0002c2; 	T(MOV(ax, 0x0F));	// 81480 mov     ax, 0Fh ;~ 28AF:02C2
cs=0x28af;eip=0x0002c5; 	X(PUSH(ax));	// 81481 push    ax ;~ 28AF:02C5
cs=0x28af;eip=0x0002c6; 	T(SUB(ax, ax));	// 81482 sub     ax, ax ;~ 28AF:02C6
cs=0x28af;eip=0x0002c8; 	X(PUSH(ax));	// 81483 push    ax ;~ 28AF:02C8
cs=0x28af;eip=0x0002c9; 	X(PUSH(cs));	// 81484 push    cs ;~ 28AF:02C9
cs=0x28af;eip=0x0002ca; 	R(CALL(audio_init_chunk,0));	// 81485 call    near ptr audio_init_chunk ;~ 28AF:02CA
cs=0x28af;eip=0x0002cd; 	T(ADD(sp, 0x0E));	// 81486 add     sp, 0Eh ;~ 28AF:02CD
cs=0x28af;eip=0x0002d0; 	X(MOV(byte_44290, 0));	// 81487 mov     byte_44290, 0 ;~ 28AF:02D0
cs=0x28af;eip=0x0002d5; 	R(CALLF(sub_39700,0));	// 81488 call    sub_39700 ;~ 28AF:02D5
cs=0x28af;eip=0x0002da; 	X(MOV(word_4063a, 0));	// 81489 mov     word_4063A, 0 ;~ 28AF:02DA
cs=0x28af;eip=0x0002e0; 	R(RETF(0));	// 81490 retf ;~ 28AF:02E0
audio_enable_flag2:
	// 81499 
cs=0x28af;eip=0x0002e2; 	X(MOV(audioflag2, 1));	// 81500 mov     audioflag2, 1 ;~ 28AF:02E2
ret_28af_2e7:
	// 10021 
cs=0x28af;eip=0x0002e7; 	R(RETF(0));	// 81501 retf ;~ 28AF:02E7
audio_disable_flag2:
	// 81508 
cs=0x28af;eip=0x0002e8; 	X(MOV(audioflag2, 0));	// 81509 mov     audioflag2, 0 ;~ 28AF:02E8
ret_28af_2ed:
	// 10022 
cs=0x28af;eip=0x0002ed; 	X(MOV(word_4063a, 1));	// 81510 mov     word_4063A, 1 ;~ 28AF:02ED
cs=0x28af;eip=0x0002f3; 	T(CMP(byte_44290, 0));	// 81511 cmp     byte_44290, 0 ;~ 28AF:02F3
cs=0x28af;eip=0x0002f8; 	R(JZ(loc_373dc));	// 81512 jz      short loc_373DC ;~ 28AF:02F8
cs=0x28af;eip=0x0002fa; 	T(MOV(al, byte_44290));	// 81513 mov     al, byte_44290 ;~ 28AF:02FA
cs=0x28af;eip=0x0002fd; 	T(SUB(ah, ah));	// 81514 sub     ah, ah ;~ 28AF:02FD
cs=0x28af;eip=0x0002ff; 	T(DEC(ax));	// 81515 dec     ax ;~ 28AF:02FF
cs=0x28af;eip=0x000300; 	X(PUSH(ax));	// 81516 push    ax ;~ 28AF:0300
cs=0x28af;eip=0x000301; 	T(SUB(ax, ax));	// 81517 sub     ax, ax ;~ 28AF:0301
cs=0x28af;eip=0x000303; 	X(PUSH(ax));	// 81518 push    ax ;~ 28AF:0303
cs=0x28af;eip=0x000304; 	R(CALLF(audio_driver_func1e,0));	// 81519 call    audio_driver_func1E ;~ 28AF:0304
cs=0x28af;eip=0x000309; 	T(ADD(sp, 4));	// 81520 add     sp, 4 ;~ 28AF:0309
loc_373dc:
	// 10023 
cs=0x28af;eip=0x00030c; 	R(CALLF(sub_39700,0));	// 81523 call    sub_39700 ;~ 28AF:030C
cs=0x28af;eip=0x000311; 	X(MOV(word_4063a, 0));	// 81524 mov     word_4063A, 0 ;~ 28AF:0311
cs=0x28af;eip=0x000317; 	R(RETF(0));	// 81525 retf ;~ 28AF:0317
audio_toggle_flag2:
	// 81532 
cs=0x28af;eip=0x000318; 	T(CMP(audioflag2, 1));	// 81534 cmp     audioflag2, 1 ;~ 28AF:0318
ret_28af_31d:
	// 10024 
cs=0x28af;eip=0x00031d; 	R(JNZ(loc_373f6));	// 81535 jnz     short loc_373F6 ;~ 28AF:031D
cs=0x28af;eip=0x00031f; 	X(PUSH(cs));	// 81536 push    cs ;~ 28AF:031F
cs=0x28af;eip=0x000320; 	R(CALL(audio_disable_flag2,0));	// 81537 call    near ptr audio_disable_flag2 ;~ 28AF:0320
cs=0x28af;eip=0x000323; 	T(SUB(ax, ax));	// 81538 sub     ax, ax ;~ 28AF:0323
cs=0x28af;eip=0x000325; 	R(RETF(0));	// 81539 retf ;~ 28AF:0325
loc_373f6:
	// 10025 
cs=0x28af;eip=0x000326; 	X(PUSH(cs));	// 81543 push    cs ;~ 28AF:0326
cs=0x28af;eip=0x000327; 	R(CALL(audio_enable_flag2,0));	// 81544 call    near ptr audio_enable_flag2 ;~ 28AF:0327
cs=0x28af;eip=0x00032a; 	T(MOV(ax, 1));	// 81545 mov     ax, 1 ;~ 28AF:032A
cs=0x28af;eip=0x00032d; 	R(RETF(0));	// 81546 retf ;~ 28AF:032D
nopsub_373fe:
	// 81554 
#undef var_2
#define var_2 -2
	// 81556 var_2           = word ptr -2 ;~ 28AF:032E
ret_28af_32e:
	// 10026 
cs=0x28af;eip=0x00032e; 	X(PUSH(bp));	// 81558 push    bp ;~ 28AF:032E
cs=0x28af;eip=0x00032f; 	T(MOV(bp, sp));	// 81559 mov     bp, sp ;~ 28AF:032F
cs=0x28af;eip=0x000331; 	T(SUB(sp, 6));	// 81560 sub     sp, 6 ;~ 28AF:0331
cs=0x28af;eip=0x000334; 	X(PUSH(di));	// 81561 push    di ;~ 28AF:0334
cs=0x28af;eip=0x000335; 	X(PUSH(si));	// 81562 push    si ;~ 28AF:0335
cs=0x28af;eip=0x000336; 	T(CMP(byte_40630, 1));	// 81563 cmp     byte_40630, 1 ;~ 28AF:0336
cs=0x28af;eip=0x00033b; 	R(JZ(loc_37414));	// 81564 jz      short loc_37414 ;~ 28AF:033B
cs=0x28af;eip=0x00033d; 	T(CMP(audioflag2, 0));	// 81565 cmp     audioflag2, 0 ;~ 28AF:033D
cs=0x28af;eip=0x000342; 	R(JNZ(loc_3741e));	// 81566 jnz     short loc_3741E ;~ 28AF:0342
loc_37414:
	// 10027 
cs=0x28af;eip=0x000344; 	T(MOV(ax, 1));	// 81570 mov     ax, 1 ;~ 28AF:0344
cs=0x28af;eip=0x000347; 	X(POP(si));	// 81571 pop     si ;~ 28AF:0347
cs=0x28af;eip=0x000348; 	X(POP(di));	// 81572 pop     di ;~ 28AF:0348
cs=0x28af;eip=0x000349; 	T(MOV(sp, bp));	// 81573 mov     sp, bp ;~ 28AF:0349
cs=0x28af;eip=0x00034b; 	X(POP(bp));	// 81574 pop     bp ;~ 28AF:034B
cs=0x28af;eip=0x00034c; 	R(RETF(0));	// 81575 retf ;~ 28AF:034C
loc_3741e:
	// 10028 
cs=0x28af;eip=0x00034e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 81580 mov     [bp+var_2], 0 ;~ 28AF:034E
cs=0x28af;eip=0x000353; 	T(MOV(al, byte_44290));	// 81581 mov     al, byte_44290 ;~ 28AF:0353
cs=0x28af;eip=0x000356; 	T(SUB(ah, ah));	// 81582 sub     ah, ah ;~ 28AF:0356
cs=0x28af;eip=0x000358; 	T(OR(ax, ax));	// 81583 or      ax, ax ;~ 28AF:0358
cs=0x28af;eip=0x00035a; 	R(JZ(loc_37414));	// 81584 jz      short loc_37414 ;~ 28AF:035A
cs=0x28af;eip=0x00035c; 	T(MOV(di, ax));	// 81585 mov     di, ax ;~ 28AF:035C
cs=0x28af;eip=0x00035e; 	T(MOV(si, 0x81FC));	// 81586 mov     si, 81FCh ;~ 28AF:035E
cs=0x28af;eip=0x000361; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_2))));	// 81587 mov     cx, [bp+var_2] ;~ 28AF:0361
loc_37434:
	// 10029 
cs=0x28af;eip=0x000364; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 81590 mov     ax, [si] ;~ 28AF:0364
cs=0x28af;eip=0x000366; 	T(OR(ax, *(dw*)(raddr(ds,si+2))));	// 81591 or      ax, [si+2] ;~ 28AF:0366
cs=0x28af;eip=0x000369; 	R(JZ(loc_37446));	// 81592 jz      short loc_37446 ;~ 28AF:0369
cs=0x28af;eip=0x00036b; 	T(SUB(ax, ax));	// 81593 sub     ax, ax ;~ 28AF:036B
cs=0x28af;eip=0x00036d; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), cx));	// 81594 mov     [bp+var_2], cx ;~ 28AF:036D
cs=0x28af;eip=0x000370; 	X(POP(si));	// 81595 pop     si ;~ 28AF:0370
cs=0x28af;eip=0x000371; 	X(POP(di));	// 81596 pop     di ;~ 28AF:0371
cs=0x28af;eip=0x000372; 	T(MOV(sp, bp));	// 81597 mov     sp, bp ;~ 28AF:0372
cs=0x28af;eip=0x000374; 	X(POP(bp));	// 81598 pop     bp ;~ 28AF:0374
cs=0x28af;eip=0x000375; 	R(RETF(0));	// 81599 retf ;~ 28AF:0375
loc_37446:
	// 10030 
cs=0x28af;eip=0x000376; 	T(ADD(si, 0x4C));	// 81603 add     si, 4Ch ; 'L' ;~ 28AF:0376
cs=0x28af;eip=0x000379; 	T(INC(cx));	// 81604 inc     cx ;~ 28AF:0379
cs=0x28af;eip=0x00037a; 	T(MOV(ax, cx));	// 81605 mov     ax, cx ;~ 28AF:037A
cs=0x28af;eip=0x00037c; 	T(CMP(ax, di));	// 81606 cmp     ax, di ;~ 28AF:037C
cs=0x28af;eip=0x00037e; 	R(JC(loc_37434));	// 81607 jb      short loc_37434 ;~ 28AF:037E
cs=0x28af;eip=0x000380; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), cx));	// 81608 mov     [bp+var_2], cx ;~ 28AF:0380
cs=0x28af;eip=0x000383; 	R(JMP(loc_37414));	// 81609 jmp     short loc_37414 ;~ 28AF:0383
nopsub_37456:
	// 81619 
#undef arg_0
#define arg_0 6
	// 81621 arg_0           = word ptr  6 ;~ 28AF:0386
#undef arg_2
#define arg_2 8
	// 81622 arg_2           = word ptr  8 ;~ 28AF:0386
ret_28af_386:
	// 10031 
cs=0x28af;eip=0x000386; 	X(PUSH(bp));	// 81624 push    bp ;~ 28AF:0386
cs=0x28af;eip=0x000387; 	T(MOV(bp, sp));	// 81625 mov     bp, sp ;~ 28AF:0387
cs=0x28af;eip=0x000389; 	T(MOV(ax, 0x40));	// 81626 mov     ax, 40h ; '@' ;~ 28AF:0389
cs=0x28af;eip=0x00038c; 	X(PUSH(ax));	// 81627 push    ax ;~ 28AF:038C
cs=0x28af;eip=0x00038d; 	T(MOV(ax, 0x0FFFF));	// 81628 mov     ax, 0FFFFh ;~ 28AF:038D
cs=0x28af;eip=0x000390; 	X(PUSH(ax));	// 81629 push    ax ;~ 28AF:0390
cs=0x28af;eip=0x000391; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 81630 push    [bp+arg_2] ;~ 28AF:0391
cs=0x28af;eip=0x000394; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 81631 push    [bp+arg_0] ;~ 28AF:0394
cs=0x28af;eip=0x000397; 	X(PUSH(cs));	// 81632 push    cs ;~ 28AF:0397
cs=0x28af;eip=0x000398; 	R(CALL(audio_check_flag2,0));	// 81633 call    near ptr audio_check_flag2 ;~ 28AF:0398
cs=0x28af;eip=0x00039b; 	T(ADD(sp, 8));	// 81634 add     sp, 8 ;~ 28AF:039B
cs=0x28af;eip=0x00039e; 	X(POP(bp));	// 81635 pop     bp ;~ 28AF:039E
cs=0x28af;eip=0x00039f; 	R(RETF(0));	// 81636 retf ;~ 28AF:039F
sub_37470:
	// 81644 
#undef var_2
#define var_2 -2
	// 81646 var_2           = word ptr -2 ;~ 28AF:03A0
#undef arg_0
#define arg_0 6
	// 81647 arg_0           = word ptr  6 ;~ 28AF:03A0
#undef arg_2
#define arg_2 8
	// 81648 arg_2           = byte ptr  8 ;~ 28AF:03A0
ret_28af_3a0:
	// 10032 
cs=0x28af;eip=0x0003a0; 	X(PUSH(bp));	// 81650 push    bp ;~ 28AF:03A0
cs=0x28af;eip=0x0003a1; 	T(MOV(bp, sp));	// 81651 mov     bp, sp ;~ 28AF:03A1
cs=0x28af;eip=0x0003a3; 	T(SUB(sp, 4));	// 81652 sub     sp, 4 ;~ 28AF:03A3
cs=0x28af;eip=0x0003a6; 	X(PUSH(di));	// 81653 push    di ;~ 28AF:03A6
cs=0x28af;eip=0x0003a7; 	X(PUSH(si));	// 81654 push    si ;~ 28AF:03A7
cs=0x28af;eip=0x0003a8; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0FFFF));	// 81655 cmp     [bp+arg_0], 0FFFFh ;~ 28AF:03A8
cs=0x28af;eip=0x0003ac; 	R(JNZ(loc_374ce));	// 81656 jnz     short loc_374CE ;~ 28AF:03AC
cs=0x28af;eip=0x0003ae; 	T(MOV(si, 0x10));	// 81657 mov     si, 10h ;~ 28AF:03AE
cs=0x28af;eip=0x0003b1; 	T(MOV(di, 0x86BC));	// 81658 mov     di, 86BCh ;~ 28AF:03B1
cs=0x28af;eip=0x0003b4; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_0))));	// 81659 mov     cx, [bp+arg_0] ;~ 28AF:03B4
loc_37487:
	// 10033 
cs=0x28af;eip=0x0003b7; 	T(CMP(cx, 0x0FFFF));	// 81662 cmp     cx, 0FFFFh ;~ 28AF:03B7
cs=0x28af;eip=0x0003ba; 	R(JNZ(loc_374a5));	// 81663 jnz     short loc_374A5 ;~ 28AF:03BA
cs=0x28af;eip=0x0003bc; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 81664 mov     ax, [di] ;~ 28AF:03BC
cs=0x28af;eip=0x0003be; 	T(OR(ax, *(dw*)(raddr(ds,di+2))));	// 81665 or      ax, [di+2] ;~ 28AF:03BE
cs=0x28af;eip=0x0003c1; 	R(JNZ(loc_3749c));	// 81666 jnz     short loc_3749C ;~ 28AF:03C1
cs=0x28af;eip=0x0003c3; 	T(CMP(*((&byte_45d9a)+si), 0));	// 81667 cmp     byte_45D9A[si], 0 ;~ 28AF:03C3
cs=0x28af;eip=0x0003c8; 	R(JNZ(loc_3749c));	// 81668 jnz     short loc_3749C ;~ 28AF:03C8
cs=0x28af;eip=0x0003ca; 	T(MOV(cx, si));	// 81669 mov     cx, si ;~ 28AF:03CA
loc_3749c:
	// 10034 
cs=0x28af;eip=0x0003cc; 	T(ADD(di, 0x4C));	// 81673 add     di, 4Ch ; 'L' ;~ 28AF:03CC
cs=0x28af;eip=0x0003cf; 	T(INC(si));	// 81674 inc     si ;~ 28AF:03CF
cs=0x28af;eip=0x0003d0; 	T(CMP(si, 0x17));	// 81675 cmp     si, 17h ;~ 28AF:03D0
cs=0x28af;eip=0x0003d3; 	R(JLE(loc_37487));	// 81676 jle     short loc_37487 ;~ 28AF:03D3
loc_374a5:
	// 10035 
cs=0x28af;eip=0x0003d5; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), si));	// 81679 mov     [bp+var_2], si ;~ 28AF:03D5
cs=0x28af;eip=0x0003d8; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), cx));	// 81680 mov     [bp+arg_0], cx ;~ 28AF:03D8
cs=0x28af;eip=0x0003db; 	T(CMP(cx, 0x0FFFF));	// 81681 cmp     cx, 0FFFFh ;~ 28AF:03DB
cs=0x28af;eip=0x0003de; 	R(JZ(loc_374c5));	// 81682 jz      short loc_374C5 ;~ 28AF:03DE
cs=0x28af;eip=0x0003e0; 	T(MOV(bx, cx));	// 81683 mov     bx, cx ;~ 28AF:03E0
cs=0x28af;eip=0x0003e2; 	X(MOV(*((&byte_45d9a)+bx), 1));	// 81684 mov     byte_45D9A[bx], 1 ;~ 28AF:03E2
cs=0x28af;eip=0x0003e7; 	T(MOV(ax, 0x4C));	// 81685 mov     ax, 4Ch ; 'L' ;~ 28AF:03E7
cs=0x28af;eip=0x0003ea; 	T(IMUL1_2(cx));	// 81686 imul    cx ;~ 28AF:03EA
loc_374bc:
	// 10036 
cs=0x28af;eip=0x0003ec; 	T(MOV(bx, ax));	// 81689 mov     bx, ax ;~ 28AF:03EC
cs=0x28af;eip=0x0003ee; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 81690 mov     al, [bp+arg_2] ;~ 28AF:03EE
cs=0x28af;eip=0x0003f1; 	X(MOV(*(((audiochunks_unk)+0x24)+bx), al));	// 81691 mov     (audiochunks_unk+24h)[bx], al ;~ 28AF:03F1
loc_374c5:
	// 10037 
cs=0x28af;eip=0x0003f5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 81694 mov     ax, [bp+arg_0] ;~ 28AF:03F5
cs=0x28af;eip=0x0003f8; 	X(POP(si));	// 81695 pop     si ;~ 28AF:03F8
cs=0x28af;eip=0x0003f9; 	X(POP(di));	// 81696 pop     di ;~ 28AF:03F9
cs=0x28af;eip=0x0003fa; 	T(MOV(sp, bp));	// 81697 mov     sp, bp ;~ 28AF:03FA
cs=0x28af;eip=0x0003fc; 	X(POP(bp));	// 81698 pop     bp ;~ 28AF:03FC
cs=0x28af;eip=0x0003fd; 	R(RETF(0));	// 81699 retf ;~ 28AF:03FD
loc_374ce:
	// 10038 
cs=0x28af;eip=0x0003fe; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 81703 mov     bx, [bp+arg_0] ;~ 28AF:03FE
cs=0x28af;eip=0x000401; 	X(MOV(*((&byte_45d9a)+bx), 1));	// 81704 mov     byte_45D9A[bx], 1 ;~ 28AF:0401
cs=0x28af;eip=0x000406; 	T(MOV(ax, 0x4C));	// 81705 mov     ax, 4Ch ; 'L' ;~ 28AF:0406
cs=0x28af;eip=0x000409; 	T(IMUL1_2(bx));	// 81706 imul    bx ;~ 28AF:0409
cs=0x28af;eip=0x00040b; 	R(JMP(loc_374bc));	// 81707 jmp     short loc_374BC ;~ 28AF:040B
sub_374de:
	// 81717 
#undef arg_0
#define arg_0 6
	// 81719 arg_0           = word ptr  6 ;~ 28AF:040E
ret_28af_40e:
	// 10039 
cs=0x28af;eip=0x00040e; 	X(PUSH(bp));	// 81721 push    bp ;~ 28AF:040E
cs=0x28af;eip=0x00040f; 	T(MOV(bp, sp));	// 81722 mov     bp, sp ;~ 28AF:040F
cs=0x28af;eip=0x000411; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0FFFF));	// 81723 cmp     [bp+arg_0], 0FFFFh ;~ 28AF:0411
cs=0x28af;eip=0x000415; 	R(JLE(loc_374f7));	// 81724 jle     short loc_374F7 ;~ 28AF:0415
cs=0x28af;eip=0x000417; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 81725 mov     bx, [bp+arg_0] ;~ 28AF:0417
cs=0x28af;eip=0x00041a; 	X(MOV(*((&byte_45d9a)+bx), 0));	// 81726 mov     byte_45D9A[bx], 0 ;~ 28AF:041A
cs=0x28af;eip=0x00041f; 	X(PUSH(bx));	// 81727 push    bx ;~ 28AF:041F
cs=0x28af;eip=0x000420; 	X(PUSH(cs));	// 81728 push    cs ;~ 28AF:0420
cs=0x28af;eip=0x000421; 	R(CALL(audio_init_chunk2,0));	// 81729 call    near ptr audio_init_chunk2 ;~ 28AF:0421
cs=0x28af;eip=0x000424; 	T(ADD(sp, 2));	// 81730 add     sp, 2 ;~ 28AF:0424
loc_374f7:
	// 10040 
cs=0x28af;eip=0x000427; 	X(POP(bp));	// 81733 pop     bp ;~ 28AF:0427
cs=0x28af;eip=0x000428; 	R(RETF(0));	// 81734 retf ;~ 28AF:0428
audio_check_flag2:
	// 81744 
#undef arg_0
#define arg_0 6
	// 81746 arg_0           = word ptr  6 ;~ 28AF:042A
#undef arg_2
#define arg_2 8
	// 81747 arg_2           = word ptr  8 ;~ 28AF:042A
#undef arg_4
#define arg_4 0x0A
	// 81748 arg_4           = word ptr  0Ah ;~ 28AF:042A
#undef arg_6
#define arg_6 0x0C
	// 81749 arg_6           = byte ptr  0Ch ;~ 28AF:042A
ret_28af_42a:
	// 10041 
cs=0x28af;eip=0x00042a; 	X(PUSH(bp));	// 81751 push    bp ;~ 28AF:042A
cs=0x28af;eip=0x00042b; 	T(MOV(bp, sp));	// 81752 mov     bp, sp ;~ 28AF:042B
cs=0x28af;eip=0x00042d; 	T(MOV(al, byte_45948));	// 81753 mov     al, byte_45948 ;~ 28AF:042D
cs=0x28af;eip=0x000430; 	T(SUB(ah, ah));	// 81754 sub     ah, ah ;~ 28AF:0430
cs=0x28af;eip=0x000432; 	X(PUSH(ax));	// 81755 push    ax ;~ 28AF:0432
cs=0x28af;eip=0x000433; 	T(MOV(al, *(raddr(ss,bp+arg_6))));	// 81756 mov     al, [bp+arg_6] ;~ 28AF:0433
cs=0x28af;eip=0x000436; 	X(PUSH(ax));	// 81757 push    ax ;~ 28AF:0436
cs=0x28af;eip=0x000437; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 81758 push    [bp+arg_4] ;~ 28AF:0437
cs=0x28af;eip=0x00043a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 81759 push    [bp+arg_2] ;~ 28AF:043A
cs=0x28af;eip=0x00043d; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 81760 push    [bp+arg_0] ;~ 28AF:043D
cs=0x28af;eip=0x000440; 	X(PUSH(cs));	// 81761 push    cs ;~ 28AF:0440
cs=0x28af;eip=0x000441; 	R(CALL(audio_check_flag,0));	// 81762 call    near ptr audio_check_flag ;~ 28AF:0441
cs=0x28af;eip=0x000444; 	T(ADD(sp, 0x0A));	// 81763 add     sp, 0Ah ;~ 28AF:0444
cs=0x28af;eip=0x000447; 	X(POP(bp));	// 81764 pop     bp ;~ 28AF:0447
cs=0x28af;eip=0x000448; 	R(RETF(0));	// 81765 retf ;~ 28AF:0448
audio_check_flag:
	// 81775 
#undef var_6
#define var_6 -6
	// 81778 var_6           = word ptr -6 ;~ 28AF:044A
#undef var_4
#define var_4 -4
	// 81779 var_4           = word ptr -4 ;~ 28AF:044A
#undef var_2
#define var_2 -2
	// 81780 var_2           = word ptr -2 ;~ 28AF:044A
#undef arg_0
#define arg_0 6
	// 81781 arg_0           = dword ptr  6 ;~ 28AF:044A
#undef arg_4
#define arg_4 0x0A
	// 81782 arg_4           = word ptr  0Ah ;~ 28AF:044A
#undef arg_6
#define arg_6 0x0C
	// 81783 arg_6           = byte ptr  0Ch ;~ 28AF:044A
#undef arg_8
#define arg_8 0x0E
	// 81784 arg_8           = word ptr  0Eh ;~ 28AF:044A
ret_28af_44a:
	// 10042 
cs=0x28af;eip=0x00044a; 	X(PUSH(bp));	// 81786 push    bp ;~ 28AF:044A
cs=0x28af;eip=0x00044b; 	T(MOV(bp, sp));	// 81787 mov     bp, sp ;~ 28AF:044B
cs=0x28af;eip=0x00044d; 	T(SUB(sp, 8));	// 81788 sub     sp, 8 ;~ 28AF:044D
cs=0x28af;eip=0x000450; 	X(PUSH(di));	// 81789 push    di ;~ 28AF:0450
cs=0x28af;eip=0x000451; 	X(PUSH(si));	// 81790 push    si ;~ 28AF:0451
cs=0x28af;eip=0x000452; 	T(CMP(audioflag6, 0));	// 81791 cmp     audioflag6, 0 ;~ 28AF:0452
cs=0x28af;eip=0x000457; 	R(JNZ(loc_37532));	// 81792 jnz     short loc_37532 ;~ 28AF:0457
loc_37529:
	// 10043 
cs=0x28af;eip=0x000459; 	T(MOV(ax, 0x0FFFF));	// 81796 mov     ax, 0FFFFh ;~ 28AF:0459
cs=0x28af;eip=0x00045c; 	X(POP(si));	// 81797 pop     si ;~ 28AF:045C
cs=0x28af;eip=0x00045d; 	X(POP(di));	// 81798 pop     di ;~ 28AF:045D
cs=0x28af;eip=0x00045e; 	T(MOV(sp, bp));	// 81799 mov     sp, bp ;~ 28AF:045E
cs=0x28af;eip=0x000460; 	X(POP(bp));	// 81800 pop     bp ;~ 28AF:0460
cs=0x28af;eip=0x000461; 	R(RETF(0));	// 81801 retf ;~ 28AF:0461
loc_37532:
	// 10044 
cs=0x28af;eip=0x000462; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 81805 mov     ax, word ptr [bp+arg_0] ;~ 28AF:0462
cs=0x28af;eip=0x000465; 	T(OR(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 81806 or      ax, word ptr [bp+arg_0+2] ;~ 28AF:0465
cs=0x28af;eip=0x000468; 	R(JZ(loc_37529));	// 81807 jz      short loc_37529 ;~ 28AF:0468
cs=0x28af;eip=0x00046a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 81808 les     bx, [bp+arg_0] ;~ 28AF:046A
cs=0x28af;eip=0x00046d; 	T(CMP(*(raddr(es,bx+5)), 1));	// 81809 cmp     byte ptr es:[bx+5], 1 ;~ 28AF:046D
cs=0x28af;eip=0x000472; 	R(JNZ(loc_37529));	// 81810 jnz     short loc_37529 ;~ 28AF:0472
cs=0x28af;eip=0x000474; 	T(CMP(byte_45948, 0));	// 81811 cmp     byte_45948, 0 ;~ 28AF:0474
cs=0x28af;eip=0x000479; 	R(JZ(loc_37568));	// 81812 jz      short loc_37568 ;~ 28AF:0479
cs=0x28af;eip=0x00047b; 	T(MOV(al, byte_45948));	// 81813 mov     al, byte_45948 ;~ 28AF:047B
cs=0x28af;eip=0x00047e; 	T(SUB(ah, ah));	// 81814 sub     ah, ah ;~ 28AF:047E
cs=0x28af;eip=0x000480; 	T(MOV(cx, ax));	// 81815 mov     cx, ax ;~ 28AF:0480
cs=0x28af;eip=0x000482; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 81816 mov     ax, [bp+arg_8] ;~ 28AF:0482
cs=0x28af;eip=0x000485; 	T(MOV(dx, cx));	// 81817 mov     dx, cx ;~ 28AF:0485
cs=0x28af;eip=0x000487; 	T(MOV(cl, 7));	// 81818 mov     cl, 7 ;~ 28AF:0487
cs=0x28af;eip=0x000489; 	T(SHL(ax, cl));	// 81819 shl     ax, cl ;~ 28AF:0489
cs=0x28af;eip=0x00048b; 	T(MOV(cx, dx));	// 81820 mov     cx, dx ;~ 28AF:048B
cs=0x28af;eip=0x00048d; 	T(SUB(dx, dx));	// 81821 sub     dx, dx ;~ 28AF:048D
cs=0x28af;eip=0x00048f; 	T(DIV2(cx));	// 81822 div     cx ;~ 28AF:048F
cs=0x28af;eip=0x000491; 	T(DEC(ax));	// 81823 dec     ax ;~ 28AF:0491
cs=0x28af;eip=0x000492; 	X(MOV(*(dw*)(raddr(ss,bp+arg_8)), ax));	// 81824 mov     [bp+arg_8], ax ;~ 28AF:0492
cs=0x28af;eip=0x000495; 	R(JMP(loc_3756d));	// 81825 jmp     short loc_3756D ;~ 28AF:0495
loc_37568:
	// 10045 
cs=0x28af;eip=0x000498; 	X(MOV(*(dw*)(raddr(ss,bp+arg_8)), 0));	// 81830 mov     [bp+arg_8], 0 ;~ 28AF:0498
loc_3756d:
	// 10046 
cs=0x28af;eip=0x00049d; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0x0FFFF));	// 81833 cmp     [bp+arg_4], 0FFFFh ;~ 28AF:049D
cs=0x28af;eip=0x0004a1; 	R(JZ(loc_37576));	// 81834 jz      short loc_37576 ;~ 28AF:04A1
cs=0x28af;eip=0x0004a3; 	R(JMP(loc_37609));	// 81835 jmp     loc_37609 ;~ 28AF:04A3
loc_37576:
	// 10047 
cs=0x28af;eip=0x0004a6; 	T(MOV(si, 0x10));	// 81839 mov     si, 10h ;~ 28AF:04A6
cs=0x28af;eip=0x0004a9; 	T(MOV(di, offset(dseg,audiochunks_unk2)));	// 81840 mov     di, offset audiochunks_unk2 ;~ 28AF:04A9
cs=0x28af;eip=0x0004ac; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_4))));	// 81841 mov     cx, [bp+arg_4] ;~ 28AF:04AC
loc_3757f:
	// 10048 
cs=0x28af;eip=0x0004af; 	T(CMP(cx, 0x0FFFF));	// 81844 cmp     cx, 0FFFFh ;~ 28AF:04AF
cs=0x28af;eip=0x0004b2; 	R(JNZ(loc_3759d));	// 81845 jnz     short loc_3759D ;~ 28AF:04B2
cs=0x28af;eip=0x0004b4; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 81846 mov     ax, [di] ;~ 28AF:04B4
cs=0x28af;eip=0x0004b6; 	T(OR(ax, *(dw*)(raddr(ds,di+2))));	// 81847 or      ax, [di+2] ;~ 28AF:04B6
cs=0x28af;eip=0x0004b9; 	R(JNZ(loc_37594));	// 81848 jnz     short loc_37594 ;~ 28AF:04B9
cs=0x28af;eip=0x0004bb; 	T(CMP(*((&byte_45d9a)+si), 0));	// 81849 cmp     byte_45D9A[si], 0 ;~ 28AF:04BB
cs=0x28af;eip=0x0004c0; 	R(JNZ(loc_37594));	// 81850 jnz     short loc_37594 ;~ 28AF:04C0
cs=0x28af;eip=0x0004c2; 	T(MOV(cx, si));	// 81851 mov     cx, si ;~ 28AF:04C2
loc_37594:
	// 10049 
cs=0x28af;eip=0x0004c4; 	T(ADD(di, 0x4C));	// 81855 add     di, 4Ch ; 'L' ;~ 28AF:04C4
cs=0x28af;eip=0x0004c7; 	T(INC(si));	// 81856 inc     si ;~ 28AF:04C7
cs=0x28af;eip=0x0004c8; 	T(CMP(si, 0x17));	// 81857 cmp     si, 17h ;~ 28AF:04C8
cs=0x28af;eip=0x0004cb; 	R(JLE(loc_3757f));	// 81858 jle     short loc_3757F ;~ 28AF:04CB
loc_3759d:
	// 10050 
cs=0x28af;eip=0x0004cd; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), si));	// 81861 mov     [bp+var_4], si ;~ 28AF:04CD
cs=0x28af;eip=0x0004d0; 	X(MOV(*(dw*)(raddr(ss,bp+arg_4)), cx));	// 81862 mov     [bp+arg_4], cx ;~ 28AF:04D0
cs=0x28af;eip=0x0004d3; 	T(CMP(cx, 0x0FFFF));	// 81863 cmp     cx, 0FFFFh ;~ 28AF:04D3
cs=0x28af;eip=0x0004d6; 	R(JNZ(loc_37609));	// 81864 jnz     short loc_37609 ;~ 28AF:04D6
cs=0x28af;eip=0x0004d8; 	T(MOV(cx, 0x0FF));	// 81865 mov     cx, 0FFh ;~ 28AF:04D8
cs=0x28af;eip=0x0004db; 	T(MOV(di, 0x10));	// 81866 mov     di, 10h ;~ 28AF:04DB
cs=0x28af;eip=0x0004de; 	T(MOV(si, 0x86E0));	// 81867 mov     si, 86E0h ;~ 28AF:04DE
cs=0x28af;eip=0x0004e1; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_4))));	// 81868 mov     dx, [bp+arg_4] ;~ 28AF:04E1
loc_375b4:
	// 10051 
cs=0x28af;eip=0x0004e4; 	T(MOV(al, *(raddr(ds,si))));	// 81871 mov     al, [si] ;~ 28AF:04E4
cs=0x28af;eip=0x0004e6; 	T(SUB(ah, ah));	// 81872 sub     ah, ah ;~ 28AF:04E6
cs=0x28af;eip=0x0004e8; 	T(CMP(ax, cx));	// 81873 cmp     ax, cx ;~ 28AF:04E8
cs=0x28af;eip=0x0004ea; 	R(JA(loc_375cb));	// 81874 ja      short loc_375CB ;~ 28AF:04EA
cs=0x28af;eip=0x0004ec; 	T(MOV(ax, offset(dseg,byte_45d9a)));	// 81875 mov     ax, offset byte_45D9A ;~ 28AF:04EC
cs=0x28af;eip=0x0004ef; 	T(OR(ax, ax));	// 81876 or      ax, ax ;~ 28AF:04EF
cs=0x28af;eip=0x0004f1; 	R(JNZ(loc_375cb));	// 81877 jnz     short loc_375CB ;~ 28AF:04F1
cs=0x28af;eip=0x0004f3; 	T(MOV(al, *(raddr(ds,si))));	// 81878 mov     al, [si] ;~ 28AF:04F3
cs=0x28af;eip=0x0004f5; 	T(SUB(ah, ah));	// 81879 sub     ah, ah ;~ 28AF:04F5
cs=0x28af;eip=0x0004f7; 	T(MOV(cx, ax));	// 81880 mov     cx, ax ;~ 28AF:04F7
cs=0x28af;eip=0x0004f9; 	T(MOV(dx, di));	// 81881 mov     dx, di ;~ 28AF:04F9
loc_375cb:
	// 10052 
cs=0x28af;eip=0x0004fb; 	T(ADD(si, 0x4C));	// 81885 add     si, 4Ch ; 'L' ;~ 28AF:04FB
cs=0x28af;eip=0x0004fe; 	T(INC(di));	// 81886 inc     di ;~ 28AF:04FE
cs=0x28af;eip=0x0004ff; 	T(CMP(di, 0x17));	// 81887 cmp     di, 17h ;~ 28AF:04FF
cs=0x28af;eip=0x000502; 	R(JL(loc_375b4));	// 81888 jl      short loc_375B4 ;~ 28AF:0502
cs=0x28af;eip=0x000504; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), di));	// 81889 mov     [bp+var_4], di ;~ 28AF:0504
cs=0x28af;eip=0x000507; 	X(MOV(*(dw*)(raddr(ss,bp+arg_4)), dx));	// 81890 mov     [bp+arg_4], dx ;~ 28AF:0507
cs=0x28af;eip=0x00050a; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), cx));	// 81891 mov     [bp+var_6], cx ;~ 28AF:050A
cs=0x28af;eip=0x00050d; 	T(CMP(dx, 0x0FFFF));	// 81892 cmp     dx, 0FFFFh ;~ 28AF:050D
cs=0x28af;eip=0x000510; 	R(JZ(loc_37609));	// 81893 jz      short loc_37609 ;~ 28AF:0510
cs=0x28af;eip=0x000512; 	T(MOV(ax, 0x4C));	// 81894 mov     ax, 4Ch ; 'L' ;~ 28AF:0512
cs=0x28af;eip=0x000515; 	T(IMUL1_2(dx));	// 81895 imul    dx ;~ 28AF:0515
cs=0x28af;eip=0x000517; 	T(MOV(bx, ax));	// 81896 mov     bx, ax ;~ 28AF:0517
cs=0x28af;eip=0x000519; 	T(MOV(al, *(raddr(ss,bp+arg_6))));	// 81897 mov     al, [bp+arg_6] ;~ 28AF:0519
cs=0x28af;eip=0x00051c; 	T(CMP(*(((audiochunks_unk)+0x24)+bx), al));	// 81898 cmp     (audiochunks_unk+24h)[bx], al ;~ 28AF:051C
cs=0x28af;eip=0x000520; 	R(JA(loc_37609));	// 81899 ja      short loc_37609 ;~ 28AF:0520
cs=0x28af;eip=0x000522; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 81900 mov     bx, [bp+arg_4] ;~ 28AF:0522
cs=0x28af;eip=0x000525; 	T(CMP(*((&byte_45d9a)+bx), 0));	// 81901 cmp     byte_45D9A[bx], 0 ;~ 28AF:0525
cs=0x28af;eip=0x00052a; 	R(JZ(loc_37601));	// 81902 jz      short loc_37601 ;~ 28AF:052A
cs=0x28af;eip=0x00052c; 	X(MOV(*((&byte_45d9a)+bx), 0));	// 81903 mov     byte_45D9A[bx], 0 ;~ 28AF:052C
loc_37601:
	// 10053 
cs=0x28af;eip=0x000531; 	X(PUSH(bx));	// 81906 push    bx ;~ 28AF:0531
cs=0x28af;eip=0x000532; 	X(PUSH(cs));	// 81907 push    cs ;~ 28AF:0532
cs=0x28af;eip=0x000533; 	R(CALL(audio_init_chunk2,0));	// 81908 call    near ptr audio_init_chunk2 ;~ 28AF:0533
cs=0x28af;eip=0x000536; 	T(ADD(sp, 2));	// 81909 add     sp, 2 ;~ 28AF:0536
loc_37609:
	// 10054 
cs=0x28af;eip=0x000539; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0x0FFFF));	// 81913 cmp     [bp+arg_4], 0FFFFh ;~ 28AF:0539
cs=0x28af;eip=0x00053d; 	R(JNZ(loc_37612));	// 81914 jnz     short loc_37612 ;~ 28AF:053D
cs=0x28af;eip=0x00053f; 	R(JMP(loc_37529));	// 81915 jmp     loc_37529 ;~ 28AF:053F
loc_37612:
	// 10055 
cs=0x28af;eip=0x000542; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 81919 les     bx, [bp+arg_0] ;~ 28AF:0542
cs=0x28af;eip=0x000545; 	T(MOV(al, *(raddr(es,bx+6))));	// 81920 mov     al, es:[bx+6] ;~ 28AF:0545
cs=0x28af;eip=0x000549; 	T(SUB(ah, ah));	// 81921 sub     ah, ah ;~ 28AF:0549
cs=0x28af;eip=0x00054b; 	T(SHL(ax, 1));	// 81922 shl     ax, 1 ;~ 28AF:054B
cs=0x28af;eip=0x00054d; 	T(SHL(ax, 1));	// 81923 shl     ax, 1 ;~ 28AF:054D
cs=0x28af;eip=0x00054f; 	T(ADD(ax, 8));	// 81924 add     ax, 8 ;~ 28AF:054F
cs=0x28af;eip=0x000552; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 81925 mov     [bp+var_2], ax ;~ 28AF:0552
cs=0x28af;eip=0x000555; 	T(MOV(al, *(raddr(ss,bp+arg_6))));	// 81926 mov     al, [bp+arg_6] ;~ 28AF:0555
cs=0x28af;eip=0x000558; 	T(SUB(ah, ah));	// 81927 sub     ah, ah ;~ 28AF:0558
cs=0x28af;eip=0x00055a; 	X(PUSH(ax));	// 81928 push    ax ;~ 28AF:055A
cs=0x28af;eip=0x00055b; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 81929 push    [bp+arg_8] ;~ 28AF:055B
cs=0x28af;eip=0x00055e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 81930 push    [bp+var_2] ;~ 28AF:055E
cs=0x28af;eip=0x000561; 	X(PUSH(es));	// 81931 push    es ;~ 28AF:0561
cs=0x28af;eip=0x000562; 	X(PUSH(bx));	// 81932 push    bx ;~ 28AF:0562
cs=0x28af;eip=0x000563; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 81933 push    [bp+arg_4] ;~ 28AF:0563
cs=0x28af;eip=0x000566; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 81934 push    [bp+arg_4] ;~ 28AF:0566
cs=0x28af;eip=0x000569; 	X(PUSH(cs));	// 81935 push    cs ;~ 28AF:0569
cs=0x28af;eip=0x00056a; 	R(CALL(audio_init_chunk,0));	// 81936 call    near ptr audio_init_chunk ;~ 28AF:056A
cs=0x28af;eip=0x00056d; 	T(ADD(sp, 0x0E));	// 81937 add     sp, 0Eh ;~ 28AF:056D
cs=0x28af;eip=0x000570; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 81938 mov     ax, [bp+arg_4] ;~ 28AF:0570
cs=0x28af;eip=0x000573; 	X(POP(si));	// 81939 pop     si ;~ 28AF:0573
cs=0x28af;eip=0x000574; 	X(POP(di));	// 81940 pop     di ;~ 28AF:0574
cs=0x28af;eip=0x000575; 	T(MOV(sp, bp));	// 81941 mov     sp, bp ;~ 28AF:0575
cs=0x28af;eip=0x000577; 	X(POP(bp));	// 81942 pop     bp ;~ 28AF:0577
cs=0x28af;eip=0x000578; 	R(RETF(0));	// 81943 retf ;~ 28AF:0578
audio_init_chunk2:
	// 81953 
#undef arg_0
#define arg_0 6
	// 81956 arg_0           = word ptr  6 ;~ 28AF:057A
ret_28af_57a:
	// 10056 
cs=0x28af;eip=0x00057a; 	X(PUSH(bp));	// 81958 push    bp ;~ 28AF:057A
cs=0x28af;eip=0x00057b; 	T(MOV(bp, sp));	// 81959 mov     bp, sp ;~ 28AF:057B
cs=0x28af;eip=0x00057d; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x10));	// 81960 cmp     [bp+arg_0], 10h ;~ 28AF:057D
cs=0x28af;eip=0x000581; 	R(JL(loc_37694));	// 81961 jl      short loc_37694 ;~ 28AF:0581
cs=0x28af;eip=0x000583; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x17));	// 81962 cmp     [bp+arg_0], 17h ;~ 28AF:0583
cs=0x28af;eip=0x000587; 	R(JG(loc_37694));	// 81963 jg      short loc_37694 ;~ 28AF:0587
cs=0x28af;eip=0x000589; 	T(MOV(ax, 0x4C));	// 81964 mov     ax, 4Ch ; 'L' ;~ 28AF:0589
cs=0x28af;eip=0x00058c; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 81965 imul    [bp+arg_0] ;~ 28AF:058C
cs=0x28af;eip=0x00058f; 	T(MOV(bx, ax));	// 81966 mov     bx, ax ;~ 28AF:058F
cs=0x28af;eip=0x000591; 	T(SUB(ax, ax));	// 81967 sub     ax, ax ;~ 28AF:0591
cs=0x28af;eip=0x000593; 	X(MOV(*(dw*)(((audiochunks_unk)+2)+bx), ax));	// 81968 mov     word ptr (audiochunks_unk+2)[bx], ax ;~ 28AF:0593
cs=0x28af;eip=0x000597; 	X(MOV(*(dw*)((audiochunks_unk)+bx), ax));	// 81969 mov     word ptr audiochunks_unk[bx], ax ;~ 28AF:0597
cs=0x28af;eip=0x00059b; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 81970 push    [bp+arg_0] ;~ 28AF:059B
cs=0x28af;eip=0x00059e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 81971 push    [bp+arg_0] ;~ 28AF:059E
cs=0x28af;eip=0x0005a1; 	R(CALLF(audio_driver_func1e,0));	// 81972 call    audio_driver_func1E ;~ 28AF:05A1
cs=0x28af;eip=0x0005a6; 	T(ADD(sp, 4));	// 81973 add     sp, 4 ;~ 28AF:05A6
cs=0x28af;eip=0x0005a9; 	T(SUB(ax, ax));	// 81974 sub     ax, ax ;~ 28AF:05A9
cs=0x28af;eip=0x0005ab; 	X(PUSH(ax));	// 81975 push    ax ;~ 28AF:05AB
cs=0x28af;eip=0x0005ac; 	T(MOV(al, byte_45948));	// 81976 mov     al, byte_45948 ;~ 28AF:05AC
cs=0x28af;eip=0x0005af; 	T(SUB(ah, ah));	// 81977 sub     ah, ah ;~ 28AF:05AF
cs=0x28af;eip=0x0005b1; 	X(PUSH(ax));	// 81978 push    ax ;~ 28AF:05B1
cs=0x28af;eip=0x0005b2; 	T(SUB(ax, ax));	// 81979 sub     ax, ax ;~ 28AF:05B2
cs=0x28af;eip=0x0005b4; 	X(PUSH(ax));	// 81980 push    ax ;~ 28AF:05B4
cs=0x28af;eip=0x0005b5; 	X(PUSH(ax));	// 81981 push    ax ;~ 28AF:05B5
cs=0x28af;eip=0x0005b6; 	X(PUSH(ax));	// 81982 push    ax ;~ 28AF:05B6
cs=0x28af;eip=0x0005b7; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 81983 push    [bp+arg_0] ;~ 28AF:05B7
cs=0x28af;eip=0x0005ba; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 81984 push    [bp+arg_0] ;~ 28AF:05BA
cs=0x28af;eip=0x0005bd; 	X(PUSH(cs));	// 81985 push    cs ;~ 28AF:05BD
cs=0x28af;eip=0x0005be; 	R(CALL(audio_init_chunk,0));	// 81986 call    near ptr audio_init_chunk ;~ 28AF:05BE
cs=0x28af;eip=0x0005c1; 	T(ADD(sp, 0x0E));	// 81987 add     sp, 0Eh ;~ 28AF:05C1
loc_37694:
	// 10057 
cs=0x28af;eip=0x0005c4; 	X(POP(bp));	// 81991 pop     bp ;~ 28AF:05C4
cs=0x28af;eip=0x0005c5; 	R(RETF(0));	// 81992 retf ;~ 28AF:05C5
audio_enable_flag6:
	// 82000 
#undef var_2
#define var_2 -2
	// 82002 var_2           = word ptr -2 ;~ 28AF:05C6
ret_28af_5c6:
	// 10058 
cs=0x28af;eip=0x0005c6; 	X(PUSH(bp));	// 82004 push    bp ;~ 28AF:05C6
cs=0x28af;eip=0x0005c7; 	T(MOV(bp, sp));	// 82005 mov     bp, sp ;~ 28AF:05C7
cs=0x28af;eip=0x0005c9; 	T(SUB(sp, 2));	// 82006 sub     sp, 2 ;~ 28AF:05C9
cs=0x28af;eip=0x0005cc; 	X(PUSH(si));	// 82007 push    si ;~ 28AF:05CC
cs=0x28af;eip=0x0005cd; 	T(CMP(audioflag6, 1));	// 82008 cmp     audioflag6, 1 ;~ 28AF:05CD
cs=0x28af;eip=0x0005d2; 	R(JZ(loc_376c5));	// 82009 jz      short loc_376C5 ;~ 28AF:05D2
cs=0x28af;eip=0x0005d4; 	T(MOV(si, 0x10));	// 82010 mov     si, 10h ;~ 28AF:05D4
loc_376a7:
	// 10059 
cs=0x28af;eip=0x0005d7; 	T(MOV(al, *((&byte_428d6)+si)));	// 82013 mov     al, byte_428D6[si] ;~ 28AF:05D7
cs=0x28af;eip=0x0005db; 	T(SUB(ah, ah));	// 82014 sub     ah, ah ;~ 28AF:05DB
cs=0x28af;eip=0x0005dd; 	X(PUSH(ax));	// 82015 push    ax ;~ 28AF:05DD
cs=0x28af;eip=0x0005de; 	X(PUSH(si));	// 82016 push    si ;~ 28AF:05DE
cs=0x28af;eip=0x0005df; 	R(CALLF(audio_unk2,0));	// 82017 call    audio_unk2 ;~ 28AF:05DF
cs=0x28af;eip=0x0005e4; 	T(ADD(sp, 4));	// 82018 add     sp, 4 ;~ 28AF:05E4
cs=0x28af;eip=0x0005e7; 	T(INC(si));	// 82019 inc     si ;~ 28AF:05E7
cs=0x28af;eip=0x0005e8; 	T(CMP(si, 0x18));	// 82020 cmp     si, 18h ;~ 28AF:05E8
cs=0x28af;eip=0x0005eb; 	R(JL(loc_376a7));	// 82021 jl      short loc_376A7 ;~ 28AF:05EB
cs=0x28af;eip=0x0005ed; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), si));	// 82022 mov     [bp+var_2], si ;~ 28AF:05ED
cs=0x28af;eip=0x0005f0; 	X(MOV(audioflag6, 1));	// 82023 mov     audioflag6, 1 ;~ 28AF:05F0
loc_376c5:
	// 10060 
cs=0x28af;eip=0x0005f5; 	X(POP(si));	// 82026 pop     si ;~ 28AF:05F5
cs=0x28af;eip=0x0005f6; 	T(MOV(sp, bp));	// 82027 mov     sp, bp ;~ 28AF:05F6
cs=0x28af;eip=0x0005f8; 	X(POP(bp));	// 82028 pop     bp ;~ 28AF:05F8
cs=0x28af;eip=0x0005f9; 	R(RETF(0));	// 82029 retf ;~ 28AF:05F9
audio_disable_flag6:
	// 82037 
#undef var_2
#define var_2 -2
	// 82039 var_2           = word ptr -2 ;~ 28AF:05FA
ret_28af_5fa:
	// 10061 
cs=0x28af;eip=0x0005fa; 	X(PUSH(bp));	// 82041 push    bp ;~ 28AF:05FA
cs=0x28af;eip=0x0005fb; 	T(MOV(bp, sp));	// 82042 mov     bp, sp ;~ 28AF:05FB
cs=0x28af;eip=0x0005fd; 	T(SUB(sp, 4));	// 82043 sub     sp, 4 ;~ 28AF:05FD
cs=0x28af;eip=0x000600; 	X(PUSH(di));	// 82044 push    di ;~ 28AF:0600
cs=0x28af;eip=0x000601; 	X(PUSH(si));	// 82045 push    si ;~ 28AF:0601
cs=0x28af;eip=0x000602; 	T(CMP(audioflag6, 0));	// 82046 cmp     audioflag6, 0 ;~ 28AF:0602
cs=0x28af;eip=0x000607; 	R(JZ(loc_37702));	// 82047 jz      short loc_37702 ;~ 28AF:0607
cs=0x28af;eip=0x000609; 	T(MOV(si, 0x10));	// 82048 mov     si, 10h ;~ 28AF:0609
cs=0x28af;eip=0x00060c; 	T(MOV(di, offset(dseg,audiochunks_unk2)+0x28));	// 82049 mov     di, (offset audiochunks_unk2+28h) ;~ 28AF:060C
loc_376df:
	// 10062 
cs=0x28af;eip=0x00060f; 	T(MOV(al, *(raddr(ds,di))));	// 82052 mov     al, [di] ;~ 28AF:060F
cs=0x28af;eip=0x000611; 	X(MOV(*((&byte_428d6)+si), al));	// 82053 mov     byte_428D6[si], al ;~ 28AF:0611
cs=0x28af;eip=0x000615; 	T(SUB(ax, ax));	// 82054 sub     ax, ax ;~ 28AF:0615
cs=0x28af;eip=0x000617; 	X(PUSH(ax));	// 82055 push    ax ;~ 28AF:0617
cs=0x28af;eip=0x000618; 	X(PUSH(si));	// 82056 push    si ;~ 28AF:0618
cs=0x28af;eip=0x000619; 	R(CALLF(audio_unk2,0));	// 82057 call    audio_unk2 ;~ 28AF:0619
cs=0x28af;eip=0x00061e; 	T(ADD(sp, 4));	// 82058 add     sp, 4 ;~ 28AF:061E
cs=0x28af;eip=0x000621; 	T(ADD(di, 0x4C));	// 82059 add     di, 4Ch ; 'L' ;~ 28AF:0621
cs=0x28af;eip=0x000624; 	T(INC(si));	// 82060 inc     si ;~ 28AF:0624
cs=0x28af;eip=0x000625; 	T(CMP(si, 0x18));	// 82061 cmp     si, 18h ;~ 28AF:0625
cs=0x28af;eip=0x000628; 	R(JL(loc_376df));	// 82062 jl      short loc_376DF ;~ 28AF:0628
cs=0x28af;eip=0x00062a; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), si));	// 82063 mov     [bp+var_2], si ;~ 28AF:062A
cs=0x28af;eip=0x00062d; 	X(MOV(audioflag6, 0));	// 82064 mov     audioflag6, 0 ;~ 28AF:062D
loc_37702:
	// 10063 
cs=0x28af;eip=0x000632; 	X(POP(si));	// 82067 pop     si ;~ 28AF:0632
cs=0x28af;eip=0x000633; 	X(POP(di));	// 82068 pop     di ;~ 28AF:0633
cs=0x28af;eip=0x000634; 	T(MOV(sp, bp));	// 82069 mov     sp, bp ;~ 28AF:0634
cs=0x28af;eip=0x000636; 	X(POP(bp));	// 82070 pop     bp ;~ 28AF:0636
cs=0x28af;eip=0x000637; 	R(RETF(0));	// 82071 retf ;~ 28AF:0637
audio_toggle_flag6:
	// 82078 
cs=0x28af;eip=0x000638; 	T(CMP(audioflag6, 1));	// 82080 cmp     audioflag6, 1 ;~ 28AF:0638
ret_28af_63d:
	// 10064 
cs=0x28af;eip=0x00063d; 	R(JNZ(loc_37716));	// 82081 jnz     short loc_37716 ;~ 28AF:063D
cs=0x28af;eip=0x00063f; 	X(PUSH(cs));	// 82082 push    cs ;~ 28AF:063F
cs=0x28af;eip=0x000640; 	R(CALL(audio_disable_flag6,0));	// 82083 call    near ptr audio_disable_flag6 ;~ 28AF:0640
cs=0x28af;eip=0x000643; 	T(SUB(ax, ax));	// 82084 sub     ax, ax ;~ 28AF:0643
cs=0x28af;eip=0x000645; 	R(RETF(0));	// 82085 retf ;~ 28AF:0645
loc_37716:
	// 10065 
cs=0x28af;eip=0x000646; 	X(PUSH(cs));	// 82089 push    cs ;~ 28AF:0646
cs=0x28af;eip=0x000647; 	R(CALL(audio_enable_flag6,0));	// 82090 call    near ptr audio_enable_flag6 ;~ 28AF:0647
cs=0x28af;eip=0x00064a; 	T(MOV(ax, 1));	// 82091 mov     ax, 1 ;~ 28AF:064A
cs=0x28af;eip=0x00064d; 	R(RETF(0));	// 82092 retf ;~ 28AF:064D
sub_3771e:
	// 82100 
#undef arg_0
#define arg_0 6
	// 82103 arg_0           = word ptr  6 ;~ 28AF:064E
ret_28af_64e:
	// 10066 
cs=0x28af;eip=0x00064e; 	X(PUSH(bp));	// 82105 push    bp ;~ 28AF:064E
cs=0x28af;eip=0x00064f; 	T(MOV(bp, sp));	// 82106 mov     bp, sp ;~ 28AF:064F
cs=0x28af;eip=0x000651; 	T(CMP(audioflag6, 0));	// 82107 cmp     audioflag6, 0 ;~ 28AF:0651
cs=0x28af;eip=0x000656; 	R(JNZ(loc_3772e));	// 82108 jnz     short loc_3772E ;~ 28AF:0656
loc_37728:
	// 10067 
cs=0x28af;eip=0x000658; 	T(MOV(ax, 1));	// 82112 mov     ax, 1 ;~ 28AF:0658
cs=0x28af;eip=0x00065b; 	X(POP(bp));	// 82113 pop     bp ;~ 28AF:065B
cs=0x28af;eip=0x00065c; 	R(RETF(0));	// 82114 retf ;~ 28AF:065C
loc_3772e:
	// 10068 
cs=0x28af;eip=0x00065e; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x10));	// 82119 cmp     [bp+arg_0], 10h ;~ 28AF:065E
cs=0x28af;eip=0x000662; 	R(JL(loc_37728));	// 82120 jl      short loc_37728 ;~ 28AF:0662
cs=0x28af;eip=0x000664; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x17));	// 82121 cmp     [bp+arg_0], 17h ;~ 28AF:0664
cs=0x28af;eip=0x000668; 	R(JG(loc_37728));	// 82122 jg      short loc_37728 ;~ 28AF:0668
cs=0x28af;eip=0x00066a; 	T(MOV(ax, 0x4C));	// 82123 mov     ax, 4Ch ; 'L' ;~ 28AF:066A
cs=0x28af;eip=0x00066d; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 82124 imul    [bp+arg_0] ;~ 28AF:066D
cs=0x28af;eip=0x000670; 	T(MOV(bx, ax));	// 82125 mov     bx, ax ;~ 28AF:0670
cs=0x28af;eip=0x000672; 	T(MOV(ax, *(dw*)((audiochunks_unk)+bx)));	// 82126 mov     ax, word ptr audiochunks_unk[bx] ;~ 28AF:0672
cs=0x28af;eip=0x000676; 	T(OR(ax, *(dw*)(((audiochunks_unk)+2)+bx)));	// 82127 or      ax, word ptr (audiochunks_unk+2)[bx] ;~ 28AF:0676
cs=0x28af;eip=0x00067a; 	R(JZ(loc_37728));	// 82128 jz      short loc_37728 ;~ 28AF:067A
cs=0x28af;eip=0x00067c; 	T(SUB(ax, ax));	// 82129 sub     ax, ax ;~ 28AF:067C
cs=0x28af;eip=0x00067e; 	X(POP(bp));	// 82130 pop     bp ;~ 28AF:067E
cs=0x28af;eip=0x00067f; 	R(RETF(0));	// 82131 retf ;~ 28AF:067F
nopsub_37750:
	// 82139 
#undef arg_0
#define arg_0 6
	// 82141 arg_0           = word ptr  6 ;~ 28AF:0680
#undef arg_2
#define arg_2 8
	// 82142 arg_2           = word ptr  8 ;~ 28AF:0680
#undef arg_4
#define arg_4 0x0A
	// 82143 arg_4           = word ptr  0Ah ;~ 28AF:0680
ret_28af_680:
	// 10069 
cs=0x28af;eip=0x000680; 	X(PUSH(bp));	// 82145 push    bp ;~ 28AF:0680
cs=0x28af;eip=0x000681; 	T(MOV(bp, sp));	// 82146 mov     bp, sp ;~ 28AF:0681
cs=0x28af;eip=0x000683; 	T(MOV(ax, 0x4C));	// 82147 mov     ax, 4Ch ; 'L' ;~ 28AF:0683
cs=0x28af;eip=0x000686; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 82148 mul     [bp+arg_0] ;~ 28AF:0686
cs=0x28af;eip=0x000689; 	T(MOV(bx, ax));	// 82149 mov     bx, ax ;~ 28AF:0689
cs=0x28af;eip=0x00068b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 82150 mov     ax, [bp+arg_2] ;~ 28AF:068B
cs=0x28af;eip=0x00068e; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_4))));	// 82151 mov     dx, [bp+arg_4] ;~ 28AF:068E
cs=0x28af;eip=0x000691; 	X(MOV(*(dw*)(((audiochunks_unk)+0x48)+bx), ax));	// 82152 mov     word ptr (audiochunks_unk+48h)[bx], ax ;~ 28AF:0691
cs=0x28af;eip=0x000695; 	X(MOV(*(dw*)(((audiochunks_unk)+0x4A)+bx), dx));	// 82153 mov     word ptr (audiochunks_unk+4Ah)[bx], dx ;~ 28AF:0695
cs=0x28af;eip=0x000699; 	X(POP(bp));	// 82154 pop     bp ;~ 28AF:0699
cs=0x28af;eip=0x00069a; 	R(RETF(0));	// 82155 retf ;~ 28AF:069A
audio_driver_func3f:
	// 82165 
#undef var_a
#define var_a -0x0A
	// 82167 var_A           = dword ptr -0Ah ;~ 28AF:069C
#undef var_6
#define var_6 -6
	// 82168 var_6           = word ptr -6 ;~ 28AF:069C
#undef var_4
#define var_4 -4
	// 82169 var_4           = word ptr -4 ;~ 28AF:069C
#undef var_2
#define var_2 -2
	// 82170 var_2           = word ptr -2 ;~ 28AF:069C
#undef arg_0
#define arg_0 6
	// 82171 arg_0           = word ptr  6 ;~ 28AF:069C
ret_28af_69c:
	// 10070 
cs=0x28af;eip=0x00069c; 	X(PUSH(bp));	// 82173 push    bp ;~ 28AF:069C
cs=0x28af;eip=0x00069d; 	T(MOV(bp, sp));	// 82174 mov     bp, sp ;~ 28AF:069D
cs=0x28af;eip=0x00069f; 	T(SUB(sp, 0x0A));	// 82175 sub     sp, 0Ah ;~ 28AF:069F
cs=0x28af;eip=0x0006a2; 	X(PUSH(si));	// 82176 push    si ;~ 28AF:06A2
cs=0x28af;eip=0x0006a3; 	T(CMP(byte_40634, 0));	// 82177 cmp     byte_40634, 0 ;~ 28AF:06A3
cs=0x28af;eip=0x0006a8; 	R(JNZ(loc_377c6));	// 82178 jnz     short loc_377C6 ;~ 28AF:06A8
cs=0x28af;eip=0x0006aa; 	T(MOV(al, byte_45950));	// 82179 mov     al, byte_45950 ;~ 28AF:06AA
cs=0x28af;eip=0x0006ad; 	T(SUB(ah, ah));	// 82180 sub     ah, ah ;~ 28AF:06AD
cs=0x28af;eip=0x0006af; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 82181 mov     [bp+var_2], ax ;~ 28AF:06AF
cs=0x28af;eip=0x0006b2; 	T(OR(ax, ax));	// 82182 or      ax, ax ;~ 28AF:06B2
cs=0x28af;eip=0x0006b4; 	R(JG(loc_37789));	// 82183 jg      short loc_37789 ;~ 28AF:06B4
cs=0x28af;eip=0x0006b6; 	R(JMP(loc_37820));	// 82184 jmp     loc_37820 ;~ 28AF:06B6
loc_37789:
	// 10071 
cs=0x28af;eip=0x0006b9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 82188 mov     ax, [bp+arg_0] ;~ 28AF:06B9
cs=0x28af;eip=0x0006bc; 	T(CWD);	// 82189 cwd ;~ 28AF:06BC
cs=0x28af;eip=0x0006bd; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 82190 mov     [bp+var_6], ax ;~ 28AF:06BD
cs=0x28af;eip=0x0006c0; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 82191 mov     [bp+var_4], dx ;~ 28AF:06C0
cs=0x28af;eip=0x0006c3; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_2))));	// 82192 mov     si, [bp+var_2] ;~ 28AF:06C3
loc_37796:
	// 10072 
cs=0x28af;eip=0x0006c6; 	X(MOV(word_4063a, 1));	// 82195 mov     word_4063A, 1 ;~ 28AF:06C6
cs=0x28af;eip=0x0006cc; 	X(PUSH(si));	// 82196 push    si ;~ 28AF:06CC
cs=0x28af;eip=0x0006cd; 	X(PUSH(cs));	// 82197 push    cs ;~ 28AF:06CD
cs=0x28af;eip=0x0006ce; 	R(CALL(sub_37868,0));	// 82198 call    near ptr sub_37868 ;~ 28AF:06CE
cs=0x28af;eip=0x0006d1; 	T(ADD(sp, 2));	// 82199 add     sp, 2 ;~ 28AF:06D1
cs=0x28af;eip=0x0006d4; 	X(MOV(word_4063a, 0));	// 82200 mov     word_4063A, 0 ;~ 28AF:06D4
cs=0x28af;eip=0x0006da; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 82201 push    [bp+var_4] ;~ 28AF:06DA
cs=0x28af;eip=0x0006dd; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 82202 push    [bp+var_6] ;~ 28AF:06DD
cs=0x28af;eip=0x0006e0; 	R(CALLF(timer_copy_counter,0));	// 82203 call    timer_copy_counter ; Stores a copy of the timer counter with the given ticks added. ;~ 28AF:06E0
cs=0x28af;eip=0x0006e5; 	T(ADD(sp, 4));	// 82204 add     sp, 4 ;~ 28AF:06E5
cs=0x28af;eip=0x0006e8; 	R(CALLF(timer_wait_for_dx,0));	// 82205 call    timer_wait_for_dx ;~ 28AF:06E8
cs=0x28af;eip=0x0006ed; 	T(SUB(si, 2));	// 82206 sub     si, 2 ;~ 28AF:06ED
cs=0x28af;eip=0x0006f0; 	T(OR(si, si));	// 82207 or      si, si ;~ 28AF:06F0
cs=0x28af;eip=0x0006f2; 	R(JG(loc_37796));	// 82208 jg      short loc_37796 ;~ 28AF:06F2
cs=0x28af;eip=0x0006f4; 	R(JMP(loc_3781d));	// 82209 jmp     short loc_3781D ;~ 28AF:06F4
loc_377c6:
	// 10073 
cs=0x28af;eip=0x0006f6; 	T(MOV(si, 0x64));	// 82213 mov     si, 64h ; 'd' ;~ 28AF:06F6
cs=0x28af;eip=0x0006f9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 82214 mov     ax, [bp+arg_0] ;~ 28AF:06F9
cs=0x28af;eip=0x0006fc; 	T(CWD);	// 82215 cwd ;~ 28AF:06FC
cs=0x28af;eip=0x0006fd; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 82216 mov     [bp+var_6], ax ;~ 28AF:06FD
cs=0x28af;eip=0x000700; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 82217 mov     [bp+var_4], dx ;~ 28AF:0700
loc_377d3:
	// 10074 
cs=0x28af;eip=0x000703; 	X(MOV(word_4063a, 1));	// 82220 mov     word_4063A, 1 ;~ 28AF:0703
cs=0x28af;eip=0x000709; 	T(MOV(ax, si));	// 82221 mov     ax, si ;~ 28AF:0709
cs=0x28af;eip=0x00070b; 	X(MOV(byte_40639, al));	// 82222 mov     byte_40639, al ;~ 28AF:070B
cs=0x28af;eip=0x00070e; 	T(MOV(ax, offset(dseg,unk_40636)));	// 82223 mov     ax, offset unk_40636 ;~ 28AF:070E
cs=0x28af;eip=0x000711; 	X(PUSH(ds));	// 82224 push    ds ;~ 28AF:0711
cs=0x28af;eip=0x000712; 	X(PUSH(ax));	// 82225 push    ax ;~ 28AF:0712
cs=0x28af;eip=0x000713; 	T(MOV(ax, 4));	// 82226 mov     ax, 4 ;~ 28AF:0713
cs=0x28af;eip=0x000716; 	X(PUSH(ax));	// 82227 push    ax ;~ 28AF:0716
cs=0x28af;eip=0x000717; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 82228 mov     ax, word ptr audiodriverbinary ;~ 28AF:0717
cs=0x28af;eip=0x00071a; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 82229 mov     dx, word ptr audiodriverbinary+2 ;~ 28AF:071A
cs=0x28af;eip=0x00071e; 	T(ADD(ax, 0x3F));	// 82230 add     ax, 3Fh ; '?' ;~ 28AF:071E
cs=0x28af;eip=0x000721; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a+2))), dx));	// 82231 mov     word ptr [bp+var_A+2], dx ;~ 28AF:0721
cs=0x28af;eip=0x000724; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a))), ax));	// 82232 mov     word ptr [bp+var_A], ax ;~ 28AF:0724
cs=0x28af;eip=0x000727; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_a))));	// 82233 call    [bp+var_A] ;~ 28AF:0727
cs=0x28af;eip=0x00072a; 	T(ADD(sp, 6));	// 82234 add     sp, 6 ;~ 28AF:072A
cs=0x28af;eip=0x00072d; 	X(MOV(word_4063a, 0));	// 82235 mov     word_4063A, 0 ;~ 28AF:072D
cs=0x28af;eip=0x000733; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 82236 push    [bp+var_4] ;~ 28AF:0733
cs=0x28af;eip=0x000736; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 82237 push    [bp+var_6] ;~ 28AF:0736
cs=0x28af;eip=0x000739; 	R(CALLF(timer_copy_counter,0));	// 82238 call    timer_copy_counter ; Stores a copy of the timer counter with the given ticks added. ;~ 28AF:0739
cs=0x28af;eip=0x00073e; 	T(ADD(sp, 4));	// 82239 add     sp, 4 ;~ 28AF:073E
cs=0x28af;eip=0x000741; 	R(CALLF(timer_wait_for_dx,0));	// 82240 call    timer_wait_for_dx ;~ 28AF:0741
cs=0x28af;eip=0x000746; 	T(SUB(si, 2));	// 82241 sub     si, 2 ;~ 28AF:0746
cs=0x28af;eip=0x000749; 	T(OR(si, si));	// 82242 or      si, si ;~ 28AF:0749
cs=0x28af;eip=0x00074b; 	R(JG(loc_377d3));	// 82243 jg      short loc_377D3 ;~ 28AF:074B
loc_3781d:
	// 10075 
cs=0x28af;eip=0x00074d; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), si));	// 82246 mov     [bp+var_2], si ;~ 28AF:074D
loc_37820:
	// 10076 
cs=0x28af;eip=0x000750; 	X(PUSH(cs));	// 82249 push    cs ;~ 28AF:0750
cs=0x28af;eip=0x000751; 	R(CALL(sub_3736a,0));	// 82250 call    near ptr sub_3736A ;~ 28AF:0751
cs=0x28af;eip=0x000754; 	T(CMP(byte_40634, 0));	// 82251 cmp     byte_40634, 0 ;~ 28AF:0754
cs=0x28af;eip=0x000759; 	R(JZ(loc_37862));	// 82252 jz      short loc_37862 ;~ 28AF:0759
cs=0x28af;eip=0x00075b; 	T(MOV(ax, 0x32));	// 82253 mov     ax, 32h ; '2' ;~ 28AF:075B
cs=0x28af;eip=0x00075e; 	T(CWD);	// 82254 cwd ;~ 28AF:075E
cs=0x28af;eip=0x00075f; 	X(PUSH(dx));	// 82255 push    dx ;~ 28AF:075F
cs=0x28af;eip=0x000760; 	X(PUSH(ax));	// 82256 push    ax ;~ 28AF:0760
cs=0x28af;eip=0x000761; 	R(CALLF(timer_copy_counter,0));	// 82257 call    timer_copy_counter ; Stores a copy of the timer counter with the given ticks added. ;~ 28AF:0761
cs=0x28af;eip=0x000766; 	T(ADD(sp, 4));	// 82258 add     sp, 4 ;~ 28AF:0766
cs=0x28af;eip=0x000769; 	R(CALLF(timer_wait_for_dx,0));	// 82259 call    timer_wait_for_dx ;~ 28AF:0769
cs=0x28af;eip=0x00076e; 	X(MOV(byte_40639, 0x64));	// 82260 mov     byte_40639, 64h ; 'd' ;~ 28AF:076E
cs=0x28af;eip=0x000773; 	T(MOV(ax, offset(dseg,unk_40636)));	// 82261 mov     ax, offset unk_40636 ;~ 28AF:0773
cs=0x28af;eip=0x000776; 	X(PUSH(ds));	// 82262 push    ds ;~ 28AF:0776
cs=0x28af;eip=0x000777; 	X(PUSH(ax));	// 82263 push    ax ;~ 28AF:0777
cs=0x28af;eip=0x000778; 	T(MOV(ax, 4));	// 82264 mov     ax, 4 ;~ 28AF:0778
cs=0x28af;eip=0x00077b; 	X(PUSH(ax));	// 82265 push    ax ;~ 28AF:077B
cs=0x28af;eip=0x00077c; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 82266 mov     ax, word ptr audiodriverbinary ;~ 28AF:077C
cs=0x28af;eip=0x00077f; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 82267 mov     dx, word ptr audiodriverbinary+2 ;~ 28AF:077F
cs=0x28af;eip=0x000783; 	T(ADD(ax, 0x3F));	// 82268 add     ax, 3Fh ; '?' ;~ 28AF:0783
cs=0x28af;eip=0x000786; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a+2))), dx));	// 82269 mov     word ptr [bp+var_A+2], dx ;~ 28AF:0786
cs=0x28af;eip=0x000789; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a))), ax));	// 82270 mov     word ptr [bp+var_A], ax ;~ 28AF:0789
cs=0x28af;eip=0x00078c; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_a))));	// 82271 call    [bp+var_A] ;~ 28AF:078C
cs=0x28af;eip=0x00078f; 	T(ADD(sp, 6));	// 82272 add     sp, 6 ;~ 28AF:078F
loc_37862:
	// 10077 
cs=0x28af;eip=0x000792; 	X(POP(si));	// 82275 pop     si ;~ 28AF:0792
cs=0x28af;eip=0x000793; 	T(MOV(sp, bp));	// 82276 mov     sp, bp ;~ 28AF:0793
cs=0x28af;eip=0x000795; 	X(POP(bp));	// 82277 pop     bp ;~ 28AF:0795
cs=0x28af;eip=0x000796; 	R(RETF(0));	// 82278 retf ;~ 28AF:0796
sub_37868:
	// 82288 
#undef var_2
#define var_2 -2
	// 82291 var_2           = word ptr -2 ;~ 28AF:0798
#undef arg_0
#define arg_0 6
	// 82292 arg_0           = word ptr  6 ;~ 28AF:0798
ret_28af_798:
	// 10078 
cs=0x28af;eip=0x000798; 	X(PUSH(bp));	// 82294 push    bp ;~ 28AF:0798
cs=0x28af;eip=0x000799; 	T(MOV(bp, sp));	// 82295 mov     bp, sp ;~ 28AF:0799
cs=0x28af;eip=0x00079b; 	T(SUB(sp, 2));	// 82296 sub     sp, 2 ;~ 28AF:079B
cs=0x28af;eip=0x00079e; 	X(PUSH(di));	// 82297 push    di ;~ 28AF:079E
cs=0x28af;eip=0x00079f; 	X(PUSH(si));	// 82298 push    si ;~ 28AF:079F
cs=0x28af;eip=0x0007a0; 	T(SUB(si, si));	// 82299 sub     si, si ;~ 28AF:07A0
cs=0x28af;eip=0x0007a2; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 82300 mov     di, [bp+arg_0] ;~ 28AF:07A2
cs=0x28af;eip=0x0007a5; 	R(JMP(loc_37883));	// 82301 jmp     short loc_37883 ;~ 28AF:07A5
loc_37878:
	// 10079 
cs=0x28af;eip=0x0007a8; 	X(PUSH(di));	// 82306 push    di ;~ 28AF:07A8
cs=0x28af;eip=0x0007a9; 	X(PUSH(si));	// 82307 push    si ;~ 28AF:07A9
cs=0x28af;eip=0x0007aa; 	R(CALLF(audio_unk2,0));	// 82308 call    audio_unk2 ;~ 28AF:07AA
cs=0x28af;eip=0x0007af; 	T(ADD(sp, 4));	// 82309 add     sp, 4 ;~ 28AF:07AF
cs=0x28af;eip=0x0007b2; 	T(INC(si));	// 82310 inc     si ;~ 28AF:07B2
loc_37883:
	// 10080 
cs=0x28af;eip=0x0007b3; 	T(MOV(ax, si));	// 82313 mov     ax, si ;~ 28AF:07B3
cs=0x28af;eip=0x0007b5; 	T(MOV(cl, byte_44290));	// 82314 mov     cl, byte_44290 ;~ 28AF:07B5
cs=0x28af;eip=0x0007b9; 	T(SUB(ch, ch));	// 82315 sub     ch, ch ;~ 28AF:07B9
cs=0x28af;eip=0x0007bb; 	T(CMP(ax, cx));	// 82316 cmp     ax, cx ;~ 28AF:07BB
cs=0x28af;eip=0x0007bd; 	R(JC(loc_37878));	// 82317 jb      short loc_37878 ;~ 28AF:07BD
cs=0x28af;eip=0x0007bf; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), si));	// 82318 mov     [bp+var_2], si ;~ 28AF:07BF
cs=0x28af;eip=0x0007c2; 	X(POP(si));	// 82319 pop     si ;~ 28AF:07C2
cs=0x28af;eip=0x0007c3; 	X(POP(di));	// 82320 pop     di ;~ 28AF:07C3
cs=0x28af;eip=0x0007c4; 	T(MOV(sp, bp));	// 82321 mov     sp, bp ;~ 28AF:07C4
cs=0x28af;eip=0x0007c6; 	X(POP(bp));	// 82322 pop     bp ;~ 28AF:07C6
cs=0x28af;eip=0x0007c7; 	R(RETF(0));	// 82323 retf ;~ 28AF:07C7
nopsub_37898:
	// 82331 
#undef arg_0
#define arg_0 6
	// 82333 arg_0           = word ptr  6 ;~ 28AF:07C8
ret_28af_7c8:
	// 10081 
cs=0x28af;eip=0x0007c8; 	X(PUSH(bp));	// 82335 push    bp ;~ 28AF:07C8
cs=0x28af;eip=0x0007c9; 	T(MOV(bp, sp));	// 82336 mov     bp, sp ;~ 28AF:07C9
cs=0x28af;eip=0x0007cb; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_0))));	// 82337 mov     al, byte ptr [bp+arg_0] ;~ 28AF:07CB
cs=0x28af;eip=0x0007ce; 	X(MOV(byte_45950, al));	// 82338 mov     byte_45950, al ;~ 28AF:07CE
cs=0x28af;eip=0x0007d1; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 82339 push    [bp+arg_0] ;~ 28AF:07D1
cs=0x28af;eip=0x0007d4; 	X(PUSH(cs));	// 82340 push    cs ;~ 28AF:07D4
cs=0x28af;eip=0x0007d5; 	R(CALL(sub_37868,0));	// 82341 call    near ptr sub_37868 ;~ 28AF:07D5
cs=0x28af;eip=0x0007d8; 	T(ADD(sp, 2));	// 82342 add     sp, 2 ;~ 28AF:07D8
cs=0x28af;eip=0x0007db; 	X(POP(bp));	// 82343 pop     bp ;~ 28AF:07DB
cs=0x28af;eip=0x0007dc; 	R(RETF(0));	// 82344 retf ;~ 28AF:07DC
nopsub_378ae:
	// 82354 
#undef arg_0
#define arg_0 6
	// 82356 arg_0           = word ptr  6 ;~ 28AF:07DE
ret_28af_7de:
	// 10082 
cs=0x28af;eip=0x0007de; 	X(PUSH(bp));	// 82358 push    bp ;~ 28AF:07DE
cs=0x28af;eip=0x0007df; 	T(MOV(bp, sp));	// 82359 mov     bp, sp ;~ 28AF:07DF
cs=0x28af;eip=0x0007e1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 82360 mov     bx, [bp+arg_0] ;~ 28AF:07E1
cs=0x28af;eip=0x0007e4; 	T(MOV(al, *((&byte_44d06)+bx)));	// 82361 mov     al, byte_44D06[bx] ;~ 28AF:07E4
cs=0x28af;eip=0x0007e8; 	T(SUB(ah, ah));	// 82362 sub     ah, ah ;~ 28AF:07E8
cs=0x28af;eip=0x0007ea; 	X(POP(bp));	// 82363 pop     bp ;~ 28AF:07EA
cs=0x28af;eip=0x0007eb; 	R(RETF(0));	// 82364 retf ;~ 28AF:07EB
nopsub_378bc:
	// 82372 
#undef arg_0
#define arg_0 6
	// 82374 arg_0           = word ptr  6 ;~ 28AF:07EC
ret_28af_7ec:
	// 10083 
cs=0x28af;eip=0x0007ec; 	X(PUSH(bp));	// 82376 push    bp ;~ 28AF:07EC
cs=0x28af;eip=0x0007ed; 	T(MOV(bp, sp));	// 82377 mov     bp, sp ;~ 28AF:07ED
cs=0x28af;eip=0x0007ef; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 82378 mov     bx, [bp+arg_0] ;~ 28AF:07EF
cs=0x28af;eip=0x0007f2; 	T(MOV(al, *((&byte_44aca)+bx)));	// 82379 mov     al, byte_44ACA[bx] ;~ 28AF:07F2
cs=0x28af;eip=0x0007f6; 	T(SUB(ah, ah));	// 82380 sub     ah, ah ;~ 28AF:07F6
cs=0x28af;eip=0x0007f8; 	X(POP(bp));	// 82381 pop     bp ;~ 28AF:07F8
cs=0x28af;eip=0x0007f9; 	R(RETF(0));	// 82382 retf ;~ 28AF:07F9
audio_load_driver:
	// 82391 
#undef var_c
#define var_c -0x0C
	// 82393 var_C           = dword ptr -0Ch ;~ 28AF:07FA
#undef var_4
#define var_4 -4
	// 82394 var_4           = word ptr -4 ;~ 28AF:07FA
#undef var_2
#define var_2 -2
	// 82395 var_2           = word ptr -2 ;~ 28AF:07FA
ret_28af_7fa:
	// 10084 
cs=0x28af;eip=0x0007fa; 	X(PUSH(bp));	// 82397 push    bp ;~ 28AF:07FA
cs=0x28af;eip=0x0007fb; 	T(MOV(bp, sp));	// 82398 mov     bp, sp ;~ 28AF:07FB
cs=0x28af;eip=0x0007fd; 	T(SUB(sp, 0x0C));	// 82399 sub     sp, 0Ch ;~ 28AF:07FD
cs=0x28af;eip=0x000800; 	X(PUSH(di));	// 82400 push    di ;~ 28AF:0800
cs=0x28af;eip=0x000801; 	X(PUSH(si));	// 82401 push    si ;~ 28AF:0801
	// 82402 nop ;~ 28AF:0802
	// 82403 nop ;~ 28AF:0803
	// 82404 nop ;~ 28AF:0804
	// 82405 nop ;~ 28AF:0805
	// 82406 nop ;~ 28AF:0806
	// 82407 nop ;~ 28AF:0807
	// 82408 nop ;~ 28AF:0808
	// 82409 nop ;~ 28AF:0809
	// 82410 nop ;~ 28AF:080A
	// 82411 nop ;~ 28AF:080B
	// 82412 nop ;~ 28AF:080C
	// 82413 nop ;~ 28AF:080D
	// 82414 nop ;~ 28AF:080E
	// 82415 nop ;~ 28AF:080F
	// 82416 nop ;~ 28AF:0810
	// 82417 nop ;~ 28AF:0811
	// 82418 nop ;~ 28AF:0812
	// 82419 nop ;~ 28AF:0813
	// 82420 nop ;~ 28AF:0814
	// 82421 nop ;~ 28AF:0815
	// 82422 nop ;~ 28AF:0816
	// 82423 nop ;~ 28AF:0817
	// 82424 nop ;~ 28AF:0818
	// 82425 nop ;~ 28AF:0819
	// 82426 nop ;~ 28AF:081A
	// 82427 nop ;~ 28AF:081B
	// 82428 nop ;~ 28AF:081C
	// 82429 nop ;~ 28AF:081D
cs=0x28af;eip=0x00081e; 	T(MOV(ax, m2c::kaudiodrv_atexit));	// 82430 mov     ax, offset audiodrv_atexit ;~ 28AF:081E
cs=0x28af;eip=0x000821; 	T(MOV(dx, seg_offset(seg027)));	// 82431 mov     dx, seg seg027 ;~ 28AF:0821
cs=0x28af;eip=0x000824; 	X(PUSH(dx));	// 82432 push    dx ;~ 28AF:0824
cs=0x28af;eip=0x000825; 	X(PUSH(ax));	// 82433 push    ax ;~ 28AF:0825
cs=0x28af;eip=0x000826; 	R(CALLF(add_exit_handler,0));	// 82434 call    add_exit_handler ;~ 28AF:0826
cs=0x28af;eip=0x00082b; 	T(ADD(sp, 4));	// 82435 add     sp, 4 ;~ 28AF:082B
	// 82436 nop ;~ 28AF:082E
	// 82437 nop ;~ 28AF:082F
	// 82438 nop ;~ 28AF:0830
	// 82439 nop ;~ 28AF:0831
	// 82440 nop ;~ 28AF:0832
	// 82441 nop ;~ 28AF:0833
	// 82442 nop ;~ 28AF:0834
	// 82443 nop ;~ 28AF:0835
	// 82444 nop ;~ 28AF:0836
	// 82445 nop ;~ 28AF:0837
	// 82447 nop ;~ 28AF:0838
	// 82448 nop ;~ 28AF:0839
	// 82449 nop ;~ 28AF:083A
	// 82450 nop ;~ 28AF:083B
	// 82451 nop ;~ 28AF:083C
	// 82452 nop ;~ 28AF:083D
	// 82453 nop ;~ 28AF:083E
	// 82454 nop ;~ 28AF:083F
	// 82455 nop ;~ 28AF:0840
	// 82456 nop ;~ 28AF:0841
	// 82457 nop ;~ 28AF:0842
	// 82458 nop ;~ 28AF:0843
	// 82459 nop ;~ 28AF:0844
	// 82460 nop ;~ 28AF:0845
	// 82461 nop ;~ 28AF:0846
	// 82462 nop ;~ 28AF:0847
	// 82463 nop ;~ 28AF:0848
	// 82464 nop ;~ 28AF:0849
	// 82465 nop ;~ 28AF:084A
	// 82466 nop ;~ 28AF:084B
	// 82467 nop ;~ 28AF:084C
	// 82468 nop ;~ 28AF:084D
	// 82469 nop ;~ 28AF:084E
	// 82470 nop ;~ 28AF:084F
	// 82471 nop ;~ 28AF:0850
	// 82472 nop ;~ 28AF:0851
	// 82473 nop ;~ 28AF:0852
	// 82474 nop ;~ 28AF:0853
	// 82475 nop ;~ 28AF:0854
	// 82476 nop ;~ 28AF:0855
	// 82477 nop ;~ 28AF:0856
	// 82478 nop ;~ 28AF:0857
	// 82479 nop ;~ 28AF:0858
	// 82480 nop ;~ 28AF:0859
	// 82481 nop ;~ 28AF:085A
	// 82482 nop ;~ 28AF:085B
	// 82483 nop ;~ 28AF:085C
	// 82484 nop ;~ 28AF:085D
	// 82485 nop ;~ 28AF:085E
	// 82486 nop ;~ 28AF:085F
	// 82487 nop ;~ 28AF:0860
	// 82488 nop ;~ 28AF:0861
	// 82489 nop ;~ 28AF:0862
	// 82490 nop ;~ 28AF:0863
	// 82491 nop ;~ 28AF:0864
	// 82492 nop ;~ 28AF:0865
	// 82493 nop ;~ 28AF:0866
	// 82494 nop ;~ 28AF:0867
	// 82495 nop ;~ 28AF:0868
	// 82496 nop ;~ 28AF:0869
	// 82497 nop ;~ 28AF:086A
	// 82498 nop ;~ 28AF:086B
	// 82499 nop ;~ 28AF:086C
	// 82500 nop ;~ 28AF:086D
	// 82501 nop ;~ 28AF:086E
	// 82502 nop ;~ 28AF:086F
	// 82503 nop ;~ 28AF:0870
	// 82504 nop ;~ 28AF:0871
	// 82505 nop ;~ 28AF:0872
	// 82506 nop ;~ 28AF:0873
	// 82507 nop ;~ 28AF:0874
	// 82508 nop ;~ 28AF:0875
	// 82509 nop ;~ 28AF:0876
	// 82510 nop ;~ 28AF:0877
	// 82511 nop ;~ 28AF:0878
	// 82512 nop ;~ 28AF:0879
	// 82513 nop ;~ 28AF:087A
	// 82514 nop ;~ 28AF:087B
	// 82515 nop ;~ 28AF:087C
	// 82516 nop ;~ 28AF:087D
	// 82517 nop ;~ 28AF:087E
	// 82518 nop ;~ 28AF:087F
	// 82519 nop ;~ 28AF:0880
	// 82520 nop ;~ 28AF:0881
	// 82521 nop ;~ 28AF:0882
	// 82522 nop ;~ 28AF:0883
	// 82523 nop                     ; int ;~ 28AF:0884
	// 82524 nop ;~ 28AF:0885
	// 82525 nop ;~ 28AF:0886
	// 82526 nop ;~ 28AF:0887
	// 82527 nop ;~ 28AF:0888
	// 82528 nop                     ; char * ;~ 28AF:0889
	// 82529 nop ;~ 28AF:088A
	// 82530 nop ;~ 28AF:088B
	// 82531 nop ;~ 28AF:088C
	// 82532 nop ;~ 28AF:088D
	// 82533 nop ;~ 28AF:088E
	// 82534 nop ;~ 28AF:088F
	// 82535 nop ;~ 28AF:0890
	// 82536 nop ;~ 28AF:0891
	// 82537 nop ;~ 28AF:0892
	// 82538 nop ;~ 28AF:0893
	// 82539 nop ;~ 28AF:0894
	// 82540 nop ;~ 28AF:0895
	// 82541 nop ;~ 28AF:0896
	// 82542 nop ;~ 28AF:0897
	// 82543 nop ;~ 28AF:0898
	// 82544 nop ;~ 28AF:0899
	// 82545 nop ;~ 28AF:089A
	// 82546 nop ;~ 28AF:089B
	// 82547 nop ;~ 28AF:089C
	// 82548 nop ;~ 28AF:089D
	// 82549 nop ;~ 28AF:089E
	// 82550 nop ;~ 28AF:089F
	// 82551 nop ;~ 28AF:08A0
	// 82552 nop ;~ 28AF:08A1
	// 82553 nop ;~ 28AF:08A2
	// 82554 nop ;~ 28AF:08A3
	// 82555 nop ;~ 28AF:08A4
	// 82556 nop ;~ 28AF:08A5
	// 82557 nop ;~ 28AF:08A6
	// 82558 nop ;~ 28AF:08A7
	// 82559 nop ;~ 28AF:08A8
	// 82560 nop ;~ 28AF:08A9
	// 82561 nop ;~ 28AF:08AA
	// 82562 nop ;~ 28AF:08AB
	// 82563 nop ;~ 28AF:08AC
	// 82564 nop ;~ 28AF:08AD
	// 82565 nop ;~ 28AF:08AE
	// 82566 nop ;~ 28AF:08AF
	// 82567 nop ;~ 28AF:08B0
	// 82568 nop ;~ 28AF:08B1
	// 82569 nop ;~ 28AF:08B2
	// 82570 nop ;~ 28AF:08B3
	// 82571 nop ;~ 28AF:08B4
	// 82572 nop ;~ 28AF:08B5
	// 82573 nop ;~ 28AF:08B6
	// 82574 nop ;~ 28AF:08B7
cs=0x28af;eip=0x0008b8; 	R(CALLF(__dispatch_call,audiodriverbinary));	// 82575 call    audiodriverbinary ;~ 28AF:08B8
cs=0x28af;eip=0x0008bc; 	X(MOV(byte_459d2, al));	// 82576 mov     byte_459D2, al ;~ 28AF:08BC
cs=0x28af;eip=0x0008bf; 	T(OR(al, al));	// 82577 or      al, al ;~ 28AF:08BF
cs=0x28af;eip=0x0008c1; 	R(JZ(loc_37997));	// 82578 jz      short loc_37997 ;~ 28AF:08C1
cs=0x28af;eip=0x0008c3; 	T(CMP(al, 0x0FF));	// 82579 cmp     al, 0FFh ;~ 28AF:08C3
cs=0x28af;eip=0x0008c5; 	R(JNZ(loc_379a2));	// 82580 jnz     short loc_379A2 ;~ 28AF:08C5
loc_37997:
	// 10085 
cs=0x28af;eip=0x0008c7; 	T(MOV(ax, 2));	// 82583 mov     ax, 2 ;~ 28AF:08C7
cs=0x28af;eip=0x0008ca; 	X(POP(si));	// 82584 pop     si ;~ 28AF:08CA
cs=0x28af;eip=0x0008cb; 	X(POP(di));	// 82585 pop     di ;~ 28AF:08CB
cs=0x28af;eip=0x0008cc; 	T(MOV(sp, bp));	// 82586 mov     sp, bp ;~ 28AF:08CC
cs=0x28af;eip=0x0008ce; 	X(POP(bp));	// 82587 pop     bp ;~ 28AF:08CE
cs=0x28af;eip=0x0008cf; 	R(RETF(0));	// 82588 retf ;~ 28AF:08CF
loc_379a2:
	// 10086 
cs=0x28af;eip=0x0008d2; 	T(CMP(byte_459d2, 0x7F));	// 82594 cmp     byte_459D2, 7Fh ;~ 28AF:08D2
cs=0x28af;eip=0x0008d7; 	R(JBE(loc_379b8));	// 82595 jbe     short loc_379B8 ;~ 28AF:08D7
cs=0x28af;eip=0x0008d9; 	X(MOV(byte_459d2, 0x10));	// 82596 mov     byte_459D2, 10h ;~ 28AF:08D9
cs=0x28af;eip=0x0008de; 	X(MOV(byte_40634, 1));	// 82597 mov     byte_40634, 1 ;~ 28AF:08DE
cs=0x28af;eip=0x0008e3; 	X(MOV(byte_40635, 0));	// 82598 mov     byte_40635, 0 ;~ 28AF:08E3
loc_379b8:
	// 10087 
cs=0x28af;eip=0x0008e8; 	X(PUSH(cs));	// 82601 push    cs ;~ 28AF:08E8
cs=0x28af;eip=0x0008e9; 	R(CALL(sub_38178,0));	// 82602 call    near ptr sub_38178 ;~ 28AF:08E9
cs=0x28af;eip=0x0008ec; 	T(MOV(ax, m2c::kaudiodriver_timer));	// 82603 mov     ax, offset audiodriver_timer ;~ 28AF:08EC
cs=0x28af;eip=0x0008ef; 	T(MOV(dx, seg_offset(seg028)));	// 82604 mov     dx, seg seg028 ;~ 28AF:08EF
cs=0x28af;eip=0x0008f2; 	X(PUSH(dx));	// 82605 push    dx ;~ 28AF:08F2
cs=0x28af;eip=0x0008f3; 	X(PUSH(ax));	// 82606 push    ax ;~ 28AF:08F3
cs=0x28af;eip=0x0008f4; 	R(CALLF(timer_reg_callback,0));	// 82607 call    timer_reg_callback ;~ 28AF:08F4
cs=0x28af;eip=0x0008f9; 	T(ADD(sp, 4));	// 82608 add     sp, 4 ;~ 28AF:08F9
cs=0x28af;eip=0x0008fc; 	T(CMP(byte_40634, 0));	// 82609 cmp     byte_40634, 0 ;~ 28AF:08FC
cs=0x28af;eip=0x000901; 	R(JZ(loc_37a35));	// 82610 jz      short loc_37A35 ;~ 28AF:0901
cs=0x28af;eip=0x000903; 	T(MOV(ax, offset(dseg,amt32_plb)));	// 82611 mov     ax, offset aMt32_plb ; "mt32.plb" ;~ 28AF:0903
cs=0x28af;eip=0x000906; 	X(PUSH(ax));	// 82612 push    ax ;~ 28AF:0906
cs=0x28af;eip=0x000907; 	R(CALLF(file_load_binary_nofatal,0));	// 82613 call    file_load_binary_nofatal ;~ 28AF:0907
cs=0x28af;eip=0x00090c; 	T(ADD(sp, 2));	// 82614 add     sp, 2 ;~ 28AF:090C
cs=0x28af;eip=0x00090f; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 82615 mov     [bp+var_4], ax ;~ 28AF:090F
cs=0x28af;eip=0x000912; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 82616 mov     [bp+var_2], dx ;~ 28AF:0912
cs=0x28af;eip=0x000915; 	T(OR(ax, dx));	// 82617 or      ax, dx ;~ 28AF:0915
cs=0x28af;eip=0x000917; 	R(JZ(loc_37a35));	// 82618 jz      short loc_37A35 ;~ 28AF:0917
cs=0x28af;eip=0x000919; 	X(PUSH(dx));	// 82619 push    dx ;~ 28AF:0919
cs=0x28af;eip=0x00091a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 82620 push    [bp+var_4] ;~ 28AF:091A
cs=0x28af;eip=0x00091d; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 82621 mov     ax, word ptr audiodriverbinary ;~ 28AF:091D
cs=0x28af;eip=0x000920; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 82622 mov     dx, word ptr audiodriverbinary+2 ;~ 28AF:0920
cs=0x28af;eip=0x000924; 	T(ADD(ax, 0x42));	// 82623 add     ax, 42h ; 'B' ;~ 28AF:0924
cs=0x28af;eip=0x000927; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c+2))), dx));	// 82624 mov     word ptr [bp+var_C+2], dx ;~ 28AF:0927
cs=0x28af;eip=0x00092a; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c))), ax));	// 82625 mov     word ptr [bp+var_C], ax ;~ 28AF:092A
cs=0x28af;eip=0x00092d; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_c))));	// 82626 call    [bp+var_C] ;~ 28AF:092D
cs=0x28af;eip=0x000930; 	T(ADD(sp, 4));	// 82627 add     sp, 4 ;~ 28AF:0930
cs=0x28af;eip=0x000933; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 82628 push    [bp+var_2] ;~ 28AF:0933
cs=0x28af;eip=0x000936; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 82629 push    [bp+var_4] ;~ 28AF:0936
cs=0x28af;eip=0x000939; 	R(CALLF(mmgr_release,0));	// 82630 call    mmgr_release ;~ 28AF:0939
cs=0x28af;eip=0x00093e; 	T(ADD(sp, 4));	// 82631 add     sp, 4 ;~ 28AF:093E
cs=0x28af;eip=0x000941; 	X(MOV(byte_40639, 0x64));	// 82632 mov     byte_40639, 64h ; 'd' ;~ 28AF:0941
cs=0x28af;eip=0x000946; 	T(MOV(ax, offset(dseg,unk_40636)));	// 82633 mov     ax, offset unk_40636 ;~ 28AF:0946
cs=0x28af;eip=0x000949; 	X(PUSH(ds));	// 82634 push    ds ;~ 28AF:0949
cs=0x28af;eip=0x00094a; 	X(PUSH(ax));	// 82635 push    ax ;~ 28AF:094A
cs=0x28af;eip=0x00094b; 	T(MOV(ax, 4));	// 82636 mov     ax, 4 ;~ 28AF:094B
cs=0x28af;eip=0x00094e; 	X(PUSH(ax));	// 82637 push    ax ;~ 28AF:094E
cs=0x28af;eip=0x00094f; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 82638 mov     ax, word ptr audiodriverbinary ;~ 28AF:094F
cs=0x28af;eip=0x000952; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 82639 mov     dx, word ptr audiodriverbinary+2 ;~ 28AF:0952
cs=0x28af;eip=0x000956; 	T(ADD(ax, 0x3F));	// 82640 add     ax, 3Fh ; '?' ;~ 28AF:0956
cs=0x28af;eip=0x000959; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c+2))), dx));	// 82641 mov     word ptr [bp+var_C+2], dx ;~ 28AF:0959
cs=0x28af;eip=0x00095c; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c))), ax));	// 82642 mov     word ptr [bp+var_C], ax ;~ 28AF:095C
cs=0x28af;eip=0x00095f; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_c))));	// 82643 call    [bp+var_C] ;~ 28AF:095F
cs=0x28af;eip=0x000962; 	T(ADD(sp, 6));	// 82644 add     sp, 6 ;~ 28AF:0962
loc_37a35:
	// 10088 
cs=0x28af;eip=0x000965; 	X(MOV(byte_40630, 0));	// 82648 mov     byte_40630, 0 ;~ 28AF:0965
cs=0x28af;eip=0x00096a; 	X(MOV(audioflag2, 1));	// 82649 mov     audioflag2, 1 ;~ 28AF:096A
cs=0x28af;eip=0x00096f; 	X(MOV(byte_40632, 0));	// 82650 mov     byte_40632, 0 ;~ 28AF:096F
cs=0x28af;eip=0x000974; 	X(MOV(audioflag6, 1));	// 82651 mov     audioflag6, 1 ;~ 28AF:0974
cs=0x28af;eip=0x000979; 	T(SUB(ax, ax));	// 82652 sub     ax, ax ;~ 28AF:0979
cs=0x28af;eip=0x00097b; 	X(POP(si));	// 82653 pop     si ;~ 28AF:097B
cs=0x28af;eip=0x00097c; 	X(POP(di));	// 82654 pop     di ;~ 28AF:097C
cs=0x28af;eip=0x00097d; 	T(MOV(sp, bp));	// 82655 mov     sp, bp ;~ 28AF:097D
cs=0x28af;eip=0x00097f; 	X(POP(bp));	// 82656 pop     bp ;~ 28AF:097F
cs=0x28af;eip=0x000980; 	R(RETF(0));	// 82657 retf ;~ 28AF:0980
audiodrv_atexit:
	// 82667 
#undef var_4
#define var_4 -4
	// 82670 var_4           = dword ptr -4 ;~ 28AF:0994
ret_28af_994:
	// 10089 
cs=0x28af;eip=0x000994; 	X(PUSH(bp));	// 82672 push    bp ;~ 28AF:0994
cs=0x28af;eip=0x000995; 	T(MOV(bp, sp));	// 82673 mov     bp, sp ;~ 28AF:0995
cs=0x28af;eip=0x000997; 	T(SUB(sp, 4));	// 82674 sub     sp, 4 ;~ 28AF:0997
cs=0x28af;eip=0x00099a; 	X(MOV(word_4063a, 1));	// 82675 mov     word_4063A, 1 ;~ 28AF:099A
cs=0x28af;eip=0x0009a0; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 82676 mov     ax, word ptr audiodriverbinary ;~ 28AF:09A0
cs=0x28af;eip=0x0009a3; 	T(OR(ax, *(dw*)(((db*)&audiodriverbinary)+2)));	// 82677 or      ax, word ptr audiodriverbinary+2 ;~ 28AF:09A3
cs=0x28af;eip=0x0009a7; 	R(JNZ(loc_37a7c));	// 82678 jnz     short loc_37A7C ;~ 28AF:09A7
cs=0x28af;eip=0x0009a9; 	R(JMP(loc_37b09));	// 82679 jmp     loc_37B09 ;~ 28AF:09A9
loc_37a7c:
	// 10090 
cs=0x28af;eip=0x0009ac; 	T(MOV(ax, 0x0C));	// 82683 mov     ax, 0Ch ;~ 28AF:09AC
cs=0x28af;eip=0x0009af; 	T(MOV(dx, seg_offset(seg028)));	// 82684 mov     dx, seg seg028 ;~ 28AF:09AF
cs=0x28af;eip=0x0009b2; 	X(PUSH(dx));	// 82685 push    dx ;~ 28AF:09B2
cs=0x28af;eip=0x0009b3; 	X(PUSH(ax));	// 82686 push    ax ;~ 28AF:09B3
cs=0x28af;eip=0x0009b4; 	R(CALLF(timer_remove_callback,0));	// 82687 call    timer_remove_callback ;~ 28AF:09B4
cs=0x28af;eip=0x0009b9; 	T(ADD(sp, 4));	// 82688 add     sp, 4 ;~ 28AF:09B9
cs=0x28af;eip=0x0009bc; 	X(MOV(audioflag2, 0));	// 82689 mov     audioflag2, 0 ;~ 28AF:09BC
cs=0x28af;eip=0x0009c1; 	X(MOV(audioflag6, 0));	// 82690 mov     audioflag6, 0 ;~ 28AF:09C1
cs=0x28af;eip=0x0009c6; 	T(CMP(byte_40634, 0));	// 82691 cmp     byte_40634, 0 ;~ 28AF:09C6
cs=0x28af;eip=0x0009cb; 	R(JZ(loc_37ac1));	// 82692 jz      short loc_37AC1 ;~ 28AF:09CB
cs=0x28af;eip=0x0009cd; 	X(MOV(byte_40639, 0x64));	// 82693 mov     byte_40639, 64h ; 'd' ;~ 28AF:09CD
cs=0x28af;eip=0x0009d2; 	T(MOV(ax, 0x4EC6));	// 82694 mov     ax, 4EC6h ;~ 28AF:09D2
cs=0x28af;eip=0x0009d5; 	X(PUSH(ds));	// 82695 push    ds ;~ 28AF:09D5
cs=0x28af;eip=0x0009d6; 	X(PUSH(ax));	// 82696 push    ax ;~ 28AF:09D6
cs=0x28af;eip=0x0009d7; 	T(MOV(ax, 4));	// 82697 mov     ax, 4 ;~ 28AF:09D7
cs=0x28af;eip=0x0009da; 	X(PUSH(ax));	// 82698 push    ax ;~ 28AF:09DA
cs=0x28af;eip=0x0009db; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 82699 mov     ax, word ptr audiodriverbinary ;~ 28AF:09DB
cs=0x28af;eip=0x0009de; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 82700 mov     dx, word ptr audiodriverbinary+2 ;~ 28AF:09DE
cs=0x28af;eip=0x0009e2; 	T(ADD(ax, 0x3F));	// 82701 add     ax, 3Fh ; '?' ;~ 28AF:09E2
cs=0x28af;eip=0x0009e5; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 82702 mov     word ptr [bp+var_4+2], dx ;~ 28AF:09E5
cs=0x28af;eip=0x0009e8; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 82703 mov     word ptr [bp+var_4], ax ;~ 28AF:09E8
cs=0x28af;eip=0x0009eb; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_4))));	// 82704 call    [bp+var_4] ;~ 28AF:09EB
cs=0x28af;eip=0x0009ee; 	T(ADD(sp, 6));	// 82705 add     sp, 6 ;~ 28AF:09EE
loc_37ac1:
	// 10091 
cs=0x28af;eip=0x0009f1; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 82708 mov     ax, word ptr audiodriverbinary ;~ 28AF:09F1
cs=0x28af;eip=0x0009f4; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 82709 mov     dx, word ptr audiodriverbinary+2 ;~ 28AF:09F4
cs=0x28af;eip=0x0009f8; 	T(ADD(ax, 6));	// 82710 add     ax, 6 ;~ 28AF:09F8
cs=0x28af;eip=0x0009fb; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 82711 mov     word ptr [bp+var_4+2], dx ;~ 28AF:09FB
cs=0x28af;eip=0x0009fe; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 82712 mov     word ptr [bp+var_4], ax ;~ 28AF:09FE
cs=0x28af;eip=0x000a01; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_4))));	// 82713 call    [bp+var_4] ;~ 28AF:0A01
cs=0x28af;eip=0x000a04; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 82714 mov     ax, word ptr audiodriverbinary ;~ 28AF:0A04
cs=0x28af;eip=0x000a07; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 82715 mov     dx, word ptr audiodriverbinary+2 ;~ 28AF:0A07
cs=0x28af;eip=0x000a0b; 	T(ADD(ax, 3));	// 82716 add     ax, 3 ;~ 28AF:0A0B
cs=0x28af;eip=0x000a0e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 82717 mov     word ptr [bp+var_4+2], dx ;~ 28AF:0A0E
cs=0x28af;eip=0x000a11; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 82718 mov     word ptr [bp+var_4], ax ;~ 28AF:0A11
cs=0x28af;eip=0x000a14; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_4))));	// 82719 call    [bp+var_4] ;~ 28AF:0A14
	// 82720 nop ;~ 28AF:0A17
	// 82721 nop ;~ 28AF:0A18
	// 82722 nop ;~ 28AF:0A19
	// 82723 nop ;~ 28AF:0A1A
	// 82724 nop ;~ 28AF:0A1B
	// 82725 nop ;~ 28AF:0A1C
	// 82726 nop ;~ 28AF:0A1D
	// 82727 nop ;~ 28AF:0A1E
	// 82728 nop ;~ 28AF:0A1F
	// 82729 nop ;~ 28AF:0A20
	// 82730 nop ;~ 28AF:0A21
	// 82731 nop ;~ 28AF:0A22
	// 82732 nop ;~ 28AF:0A23
	// 82733 nop ;~ 28AF:0A24
	// 82734 nop ;~ 28AF:0A25
	// 82735 nop ;~ 28AF:0A26
cs=0x28af;eip=0x000a27; 	T(SUB(ax, ax));	// 82736 sub     ax, ax ;~ 28AF:0A27
cs=0x28af;eip=0x000a29; 	X(MOV(*(dw*)(((db*)&audiodriverbinary)+2), ax));	// 82737 mov     word ptr audiodriverbinary+2, ax ;~ 28AF:0A29
cs=0x28af;eip=0x000a2c; 	X(MOV(*(dw*)(((db*)&audiodriverbinary)), ax));	// 82738 mov     word ptr audiodriverbinary, ax ;~ 28AF:0A2C
cs=0x28af;eip=0x000a2f; 	X(MOV(byte_40634, 0));	// 82739 mov     byte_40634, 0 ;~ 28AF:0A2F
cs=0x28af;eip=0x000a34; 	X(MOV(byte_40635, 0));	// 82740 mov     byte_40635, 0 ;~ 28AF:0A34
loc_37b09:
	// 10092 
cs=0x28af;eip=0x000a39; 	X(MOV(word_4063a, 0));	// 82743 mov     word_4063A, 0 ;~ 28AF:0A39
cs=0x28af;eip=0x000a3f; 	T(MOV(sp, bp));	// 82744 mov     sp, bp ;~ 28AF:0A3F
cs=0x28af;eip=0x000a41; 	X(POP(bp));	// 82745 pop     bp ;~ 28AF:0A41
cs=0x28af;eip=0x000a42; 	R(RETF(0));	// 82746 retf ;~ 28AF:0A42
load_sfx_ge:
	// 82757 
#undef var_8
#define var_8 -8
	// 82760 var_8           = byte ptr -8 ;~ 28AF:0A44
#undef var_7
#define var_7 -7
	// 82761 var_7           = byte ptr -7 ;~ 28AF:0A44
#undef var_6
#define var_6 -6
	// 82762 var_6           = byte ptr -6 ;~ 28AF:0A44
#undef var_5
#define var_5 -5
	// 82763 var_5           = byte ptr -5 ;~ 28AF:0A44
#undef var_4
#define var_4 -4
	// 82764 var_4           = word ptr -4 ;~ 28AF:0A44
#undef var_2
#define var_2 -2
	// 82765 var_2           = word ptr -2 ;~ 28AF:0A44
#undef arg_0
#define arg_0 6
	// 82766 arg_0           = dword ptr  6 ;~ 28AF:0A44
#undef arg_4
#define arg_4 0x0A
	// 82767 arg_4           = dword ptr  0Ah ;~ 28AF:0A44
ret_28af_a44:
	// 10093 
cs=0x28af;eip=0x000a44; 	X(PUSH(bp));	// 82769 push    bp ;~ 28AF:0A44
cs=0x28af;eip=0x000a45; 	T(MOV(bp, sp));	// 82770 mov     bp, sp ;~ 28AF:0A45
cs=0x28af;eip=0x000a47; 	T(SUB(sp, 8));	// 82771 sub     sp, 8 ;~ 28AF:0A47
cs=0x28af;eip=0x000a4a; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_4)))));	// 82772 push    word ptr [bp+arg_4] ; int ;~ 28AF:0A4A
cs=0x28af;eip=0x000a4d; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 82773 push    word ptr [bp+arg_0+2] ;~ 28AF:0A4D
cs=0x28af;eip=0x000a50; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 82774 push    word ptr [bp+arg_0] ; char * ;~ 28AF:0A50
cs=0x28af;eip=0x000a53; 	R(CALLF(audio_make_filename,0));	// 82775 call    audio_make_filename ;~ 28AF:0A53
cs=0x28af;eip=0x000a58; 	T(ADD(sp, 6));	// 82776 add     sp, 6 ;~ 28AF:0A58
cs=0x28af;eip=0x000a5b; 	X(PUSH(ax));	// 82777 push    ax ;~ 28AF:0A5B
cs=0x28af;eip=0x000a5c; 	R(CALLF(file_load_binary_nofatal,0));	// 82778 call    file_load_binary_nofatal ;~ 28AF:0A5C
cs=0x28af;eip=0x000a61; 	T(ADD(sp, 2));	// 82779 add     sp, 2 ;~ 28AF:0A61
cs=0x28af;eip=0x000a64; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 82780 mov     [bp+var_4], ax ;~ 28AF:0A64
cs=0x28af;eip=0x000a67; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 82781 mov     [bp+var_2], dx ;~ 28AF:0A67
cs=0x28af;eip=0x000a6a; 	T(OR(ax, dx));	// 82782 or      ax, dx ;~ 28AF:0A6A
cs=0x28af;eip=0x000a6c; 	R(JZ(loc_37b48));	// 82783 jz      short loc_37B48 ;~ 28AF:0A6C
loc_37b3e:
	// 10094 
cs=0x28af;eip=0x000a6e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 82787 mov     ax, [bp+var_4] ;~ 28AF:0A6E
cs=0x28af;eip=0x000a71; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 82788 mov     dx, [bp+var_2] ;~ 28AF:0A71
cs=0x28af;eip=0x000a74; 	T(MOV(sp, bp));	// 82789 mov     sp, bp ;~ 28AF:0A74
cs=0x28af;eip=0x000a76; 	X(POP(bp));	// 82790 pop     bp ;~ 28AF:0A76
cs=0x28af;eip=0x000a77; 	R(RETF(0));	// 82791 retf ;~ 28AF:0A77
loc_37b48:
	// 10095 
cs=0x28af;eip=0x000a78; 	X(MOV(*(raddr(ss,bp+var_8)), 0x50));	// 82795 mov     [bp+var_8], 50h ; 'P' ;~ 28AF:0A78
cs=0x28af;eip=0x000a7c; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 82796 mov     bx, word ptr [bp+arg_0+2] ;~ 28AF:0A7C
cs=0x28af;eip=0x000a7f; 	T(MOV(al, *(raddr(ds,bx))));	// 82797 mov     al, [bx] ;~ 28AF:0A7F
cs=0x28af;eip=0x000a81; 	X(MOV(*(raddr(ss,bp+var_7)), al));	// 82798 mov     [bp+var_7], al ;~ 28AF:0A81
cs=0x28af;eip=0x000a84; 	T(MOV(al, *(raddr(ds,bx+1))));	// 82799 mov     al, [bx+1] ;~ 28AF:0A84
cs=0x28af;eip=0x000a87; 	X(MOV(*(raddr(ss,bp+var_6)), al));	// 82800 mov     [bp+var_6], al ;~ 28AF:0A87
cs=0x28af;eip=0x000a8a; 	X(MOV(*(raddr(ss,bp+var_5)), 0));	// 82801 mov     [bp+var_5], 0 ;~ 28AF:0A8A
cs=0x28af;eip=0x000a8e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_4)))));	// 82802 push    word ptr [bp+arg_4] ; int ;~ 28AF:0A8E
cs=0x28af;eip=0x000a91; 	T(ax = bp+var_8);	// 82803 lea     ax, [bp+var_8] ;~ 28AF:0A91
cs=0x28af;eip=0x000a94; 	X(PUSH(ax));	// 82804 push    ax ;~ 28AF:0A94
cs=0x28af;eip=0x000a95; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 82805 push    word ptr [bp+arg_0] ; char * ;~ 28AF:0A95
cs=0x28af;eip=0x000a98; 	R(CALLF(audio_make_filename,0));	// 82806 call    audio_make_filename ;~ 28AF:0A98
cs=0x28af;eip=0x000a9d; 	T(ADD(sp, 6));	// 82807 add     sp, 6 ;~ 28AF:0A9D
cs=0x28af;eip=0x000aa0; 	X(PUSH(ax));	// 82808 push    ax ;~ 28AF:0AA0
cs=0x28af;eip=0x000aa1; 	R(CALLF(file_decomp_nofatal,0));	// 82809 call    file_decomp_nofatal ;~ 28AF:0AA1
cs=0x28af;eip=0x000aa6; 	T(ADD(sp, 2));	// 82810 add     sp, 2 ;~ 28AF:0AA6
cs=0x28af;eip=0x000aa9; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 82811 mov     [bp+var_4], ax ;~ 28AF:0AA9
cs=0x28af;eip=0x000aac; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 82812 mov     [bp+var_2], dx ;~ 28AF:0AAC
cs=0x28af;eip=0x000aaf; 	T(OR(ax, dx));	// 82813 or      ax, dx ;~ 28AF:0AAF
cs=0x28af;eip=0x000ab1; 	R(JNZ(loc_37b3e));	// 82814 jnz     short loc_37B3E ;~ 28AF:0AB1
cs=0x28af;eip=0x000ab3; 	T(MOV(ax, offset(dseg,age)));	// 82815 mov     ax, offset aGe  ; "ge" ;~ 28AF:0AB3
cs=0x28af;eip=0x000ab6; 	X(PUSH(ax));	// 82816 push    ax              ; int ;~ 28AF:0AB6
cs=0x28af;eip=0x000ab7; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 82817 push    word ptr [bp+arg_0+2] ;~ 28AF:0AB7
cs=0x28af;eip=0x000aba; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 82818 push    word ptr [bp+arg_0] ; char * ;~ 28AF:0ABA
cs=0x28af;eip=0x000abd; 	R(CALLF(audio_make_filename,0));	// 82819 call    audio_make_filename ;~ 28AF:0ABD
cs=0x28af;eip=0x000ac2; 	T(ADD(sp, 6));	// 82820 add     sp, 6 ;~ 28AF:0AC2
cs=0x28af;eip=0x000ac5; 	X(PUSH(ax));	// 82821 push    ax ;~ 28AF:0AC5
cs=0x28af;eip=0x000ac6; 	R(CALLF(file_load_binary_nofatal,0));	// 82822 call    file_load_binary_nofatal ;~ 28AF:0AC6
cs=0x28af;eip=0x000acb; 	T(ADD(sp, 2));	// 82823 add     sp, 2 ;~ 28AF:0ACB
cs=0x28af;eip=0x000ace; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 82824 mov     [bp+var_4], ax ;~ 28AF:0ACE
cs=0x28af;eip=0x000ad1; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 82825 mov     [bp+var_2], dx ;~ 28AF:0AD1
cs=0x28af;eip=0x000ad4; 	T(OR(ax, dx));	// 82826 or      ax, dx ;~ 28AF:0AD4
cs=0x28af;eip=0x000ad6; 	R(JNZ(loc_37b3e));	// 82827 jnz     short loc_37B3E ;~ 28AF:0AD6
cs=0x28af;eip=0x000ad8; 	T(MOV(ax, offset(dseg,age_0)));	// 82828 mov     ax, offset aGe_0 ; "ge" ;~ 28AF:0AD8
cs=0x28af;eip=0x000adb; 	X(PUSH(ax));	// 82829 push    ax              ; int ;~ 28AF:0ADB
cs=0x28af;eip=0x000adc; 	T(ax = bp+var_8);	// 82830 lea     ax, [bp+var_8] ;~ 28AF:0ADC
cs=0x28af;eip=0x000adf; 	X(PUSH(ax));	// 82831 push    ax ;~ 28AF:0ADF
cs=0x28af;eip=0x000ae0; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 82832 push    word ptr [bp+arg_0] ; char * ;~ 28AF:0AE0
cs=0x28af;eip=0x000ae3; 	R(CALLF(audio_make_filename,0));	// 82833 call    audio_make_filename ;~ 28AF:0AE3
cs=0x28af;eip=0x000ae8; 	T(ADD(sp, 6));	// 82834 add     sp, 6 ;~ 28AF:0AE8
cs=0x28af;eip=0x000aeb; 	X(PUSH(ax));	// 82835 push    ax ;~ 28AF:0AEB
cs=0x28af;eip=0x000aec; 	R(CALLF(file_decomp_nofatal,0));	// 82836 call    file_decomp_nofatal ;~ 28AF:0AEC
cs=0x28af;eip=0x000af1; 	T(ADD(sp, 2));	// 82837 add     sp, 2 ;~ 28AF:0AF1
cs=0x28af;eip=0x000af4; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 82838 mov     [bp+var_4], ax ;~ 28AF:0AF4
cs=0x28af;eip=0x000af7; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 82839 mov     [bp+var_2], dx ;~ 28AF:0AF7
cs=0x28af;eip=0x000afa; 	T(OR(ax, dx));	// 82840 or      ax, dx ;~ 28AF:0AFA
cs=0x28af;eip=0x000afc; 	R(JZ(loc_37bd1));	// 82841 jz      short loc_37BD1 ;~ 28AF:0AFC
cs=0x28af;eip=0x000afe; 	R(JMP(loc_37b3e));	// 82842 jmp     loc_37B3E ;~ 28AF:0AFE
loc_37bd1:
	// 10096 
cs=0x28af;eip=0x000b01; 	T(MOV(ax, offset(dseg,ablankstr)));	// 82846 mov     ax, offset aBlankstr ;~ 28AF:0B01
cs=0x28af;eip=0x000b04; 	X(PUSH(ax));	// 82847 push    ax              ; int ;~ 28AF:0B04
cs=0x28af;eip=0x000b05; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 82848 push    word ptr [bp+arg_0+2] ;~ 28AF:0B05
cs=0x28af;eip=0x000b08; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 82849 push    word ptr [bp+arg_0] ; char * ;~ 28AF:0B08
cs=0x28af;eip=0x000b0b; 	R(CALLF(audio_make_filename,0));	// 82850 call    audio_make_filename ;~ 28AF:0B0B
cs=0x28af;eip=0x000b10; 	T(ADD(sp, 6));	// 82851 add     sp, 6 ;~ 28AF:0B10
cs=0x28af;eip=0x000b13; 	X(PUSH(ax));	// 82852 push    ax ;~ 28AF:0B13
cs=0x28af;eip=0x000b14; 	R(CALLF(file_load_binary_nofatal,0));	// 82853 call    file_load_binary_nofatal ;~ 28AF:0B14
cs=0x28af;eip=0x000b19; 	T(ADD(sp, 2));	// 82854 add     sp, 2 ;~ 28AF:0B19
cs=0x28af;eip=0x000b1c; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 82855 mov     [bp+var_4], ax ;~ 28AF:0B1C
cs=0x28af;eip=0x000b1f; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 82856 mov     [bp+var_2], dx ;~ 28AF:0B1F
cs=0x28af;eip=0x000b22; 	T(OR(ax, dx));	// 82857 or      ax, dx ;~ 28AF:0B22
cs=0x28af;eip=0x000b24; 	R(JZ(loc_37bf9));	// 82858 jz      short loc_37BF9 ;~ 28AF:0B24
cs=0x28af;eip=0x000b26; 	R(JMP(loc_37b3e));	// 82859 jmp     loc_37B3E ;~ 28AF:0B26
loc_37bf9:
	// 10097 
cs=0x28af;eip=0x000b29; 	T(MOV(ax, offset(dseg,ablankstr2)));	// 82863 mov     ax, offset aBlankstr2 ;~ 28AF:0B29
cs=0x28af;eip=0x000b2c; 	X(PUSH(ax));	// 82864 push    ax              ; int ;~ 28AF:0B2C
cs=0x28af;eip=0x000b2d; 	T(ax = bp+var_8);	// 82865 lea     ax, [bp+var_8] ;~ 28AF:0B2D
cs=0x28af;eip=0x000b30; 	X(PUSH(ax));	// 82866 push    ax ;~ 28AF:0B30
cs=0x28af;eip=0x000b31; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 82867 push    word ptr [bp+arg_0] ; char * ;~ 28AF:0B31
cs=0x28af;eip=0x000b34; 	R(CALLF(audio_make_filename,0));	// 82868 call    audio_make_filename ;~ 28AF:0B34
cs=0x28af;eip=0x000b39; 	T(ADD(sp, 6));	// 82869 add     sp, 6 ;~ 28AF:0B39
cs=0x28af;eip=0x000b3c; 	X(PUSH(ax));	// 82870 push    ax ;~ 28AF:0B3C
cs=0x28af;eip=0x000b3d; 	R(CALLF(file_decomp_nofatal,0));	// 82871 call    file_decomp_nofatal ;~ 28AF:0B3D
cs=0x28af;eip=0x000b42; 	T(ADD(sp, 2));	// 82872 add     sp, 2 ;~ 28AF:0B42
cs=0x28af;eip=0x000b45; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 82873 mov     [bp+var_4], ax ;~ 28AF:0B45
cs=0x28af;eip=0x000b48; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 82874 mov     [bp+var_2], dx ;~ 28AF:0B48
cs=0x28af;eip=0x000b4b; 	T(OR(ax, dx));	// 82875 or      ax, dx ;~ 28AF:0B4B
cs=0x28af;eip=0x000b4d; 	R(JZ(loc_37c22));	// 82876 jz      short loc_37C22 ;~ 28AF:0B4D
cs=0x28af;eip=0x000b4f; 	R(JMP(loc_37b3e));	// 82877 jmp     loc_37B3E ;~ 28AF:0B4F
loc_37c22:
	// 10098 
cs=0x28af;eip=0x000b52; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 82881 push    word ptr [bp+arg_0] ;~ 28AF:0B52
cs=0x28af;eip=0x000b55; 	R(CALLF(file_load_binary_nofatal,0));	// 82882 call    file_load_binary_nofatal ;~ 28AF:0B55
cs=0x28af;eip=0x000b5a; 	T(ADD(sp, 2));	// 82883 add     sp, 2 ;~ 28AF:0B5A
cs=0x28af;eip=0x000b5d; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 82884 mov     [bp+var_4], ax ;~ 28AF:0B5D
cs=0x28af;eip=0x000b60; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 82885 mov     [bp+var_2], dx ;~ 28AF:0B60
cs=0x28af;eip=0x000b63; 	T(OR(ax, dx));	// 82886 or      ax, dx ;~ 28AF:0B63
cs=0x28af;eip=0x000b65; 	R(JMP(loc_37b3e));	// 82887 jmp     loc_37B3E ;~ 28AF:0B65
sub_37c38:
	// 82895 
#undef arg_0
#define arg_0 6
	// 82897 arg_0           = word ptr  6 ;~ 28AF:0B68
ret_28af_b68:
	// 10099 
cs=0x28af;eip=0x000b68; 	X(PUSH(bp));	// 82899 push    bp ;~ 28AF:0B68
cs=0x28af;eip=0x000b69; 	T(MOV(bp, sp));	// 82900 mov     bp, sp ;~ 28AF:0B69
cs=0x28af;eip=0x000b6b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 82901 mov     ax, [bp+arg_0] ;~ 28AF:0B6B
cs=0x28af;eip=0x000b6e; 	X(MOV(word_4063c, ax));	// 82902 mov     word_4063C, ax ;~ 28AF:0B6E
cs=0x28af;eip=0x000b71; 	X(POP(bp));	// 82903 pop     bp ;~ 28AF:0B71
cs=0x28af;eip=0x000b72; 	R(RETF(0));	// 82904 retf ;~ 28AF:0B72
load_sfx_file:
	// 82915 
#undef var_4
#define var_4 -4
	// 82917 var_4           = word ptr -4 ;~ 28AF:0B74
#undef var_2
#define var_2 -2
	// 82918 var_2           = word ptr -2 ;~ 28AF:0B74
#undef arg_0
#define arg_0 6
	// 82919 arg_0           = dword ptr  6 ;~ 28AF:0B74
ret_28af_b74:
	// 10100 
cs=0x28af;eip=0x000b74; 	X(PUSH(bp));	// 82921 push    bp ;~ 28AF:0B74
cs=0x28af;eip=0x000b75; 	T(MOV(bp, sp));	// 82922 mov     bp, sp ;~ 28AF:0B75
cs=0x28af;eip=0x000b77; 	T(SUB(sp, 4));	// 82923 sub     sp, 4 ;~ 28AF:0B77
cs=0x28af;eip=0x000b7a; 	T(SUB(ax, ax));	// 82924 sub     ax, ax ;~ 28AF:0B7A
cs=0x28af;eip=0x000b7c; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 82925 mov     [bp+var_2], ax ;~ 28AF:0B7C
cs=0x28af;eip=0x000b7f; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 82926 mov     [bp+var_4], ax ;~ 28AF:0B7F
cs=0x28af;eip=0x000b82; 	T(CMP(byte_40635, 0));	// 82927 cmp     byte_40635, 0 ;~ 28AF:0B82
cs=0x28af;eip=0x000b87; 	R(JZ(loc_37c71));	// 82928 jz      short loc_37C71 ;~ 28AF:0B87
cs=0x28af;eip=0x000b89; 	T(MOV(ax, offset(dseg,audiodriverstring2)));	// 82929 mov     ax, offset audiodriverstring2 ;~ 28AF:0B89
cs=0x28af;eip=0x000b8c; 	X(PUSH(ax));	// 82930 push    ax              ; int ;~ 28AF:0B8C
cs=0x28af;eip=0x000b8d; 	T(MOV(ax, offset(dseg,adsf)));	// 82931 mov     ax, offset aDsf ; "dsf" ;~ 28AF:0B8D
cs=0x28af;eip=0x000b90; 	X(PUSH(ax));	// 82932 push    ax ;~ 28AF:0B90
cs=0x28af;eip=0x000b91; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 82933 push    word ptr [bp+arg_0] ; char * ;~ 28AF:0B91
cs=0x28af;eip=0x000b94; 	X(PUSH(cs));	// 82934 push    cs ;~ 28AF:0B94
cs=0x28af;eip=0x000b95; 	R(CALL(load_sfx_ge,0));	// 82935 call    near ptr load_sfx_ge ;~ 28AF:0B95
cs=0x28af;eip=0x000b98; 	T(ADD(sp, 6));	// 82936 add     sp, 6 ;~ 28AF:0B98
cs=0x28af;eip=0x000b9b; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 82937 mov     [bp+var_4], ax ;~ 28AF:0B9B
cs=0x28af;eip=0x000b9e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 82938 mov     [bp+var_2], dx ;~ 28AF:0B9E
loc_37c71:
	// 10101 
cs=0x28af;eip=0x000ba1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 82941 mov     ax, [bp+var_4] ;~ 28AF:0BA1
cs=0x28af;eip=0x000ba4; 	T(OR(ax, *(dw*)(raddr(ss,bp+var_2))));	// 82942 or      ax, [bp+var_2] ;~ 28AF:0BA4
cs=0x28af;eip=0x000ba7; 	R(JNZ(loc_37c91));	// 82943 jnz     short loc_37C91 ;~ 28AF:0BA7
cs=0x28af;eip=0x000ba9; 	T(MOV(ax, offset(dseg,audiodriverstring2)));	// 82944 mov     ax, offset audiodriverstring2 ;~ 28AF:0BA9
cs=0x28af;eip=0x000bac; 	X(PUSH(ax));	// 82945 push    ax              ; int ;~ 28AF:0BAC
cs=0x28af;eip=0x000bad; 	T(MOV(ax, offset(dseg,asfx)));	// 82946 mov     ax, offset aSfx ; "sfx" ;~ 28AF:0BAD
cs=0x28af;eip=0x000bb0; 	X(PUSH(ax));	// 82947 push    ax ;~ 28AF:0BB0
cs=0x28af;eip=0x000bb1; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 82948 push    word ptr [bp+arg_0] ; char * ;~ 28AF:0BB1
cs=0x28af;eip=0x000bb4; 	X(PUSH(cs));	// 82949 push    cs ;~ 28AF:0BB4
cs=0x28af;eip=0x000bb5; 	R(CALL(load_sfx_ge,0));	// 82950 call    near ptr load_sfx_ge ;~ 28AF:0BB5
cs=0x28af;eip=0x000bb8; 	T(ADD(sp, 6));	// 82951 add     sp, 6 ;~ 28AF:0BB8
cs=0x28af;eip=0x000bbb; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 82952 mov     [bp+var_4], ax ;~ 28AF:0BBB
cs=0x28af;eip=0x000bbe; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 82953 mov     [bp+var_2], dx ;~ 28AF:0BBE
loc_37c91:
	// 10102 
cs=0x28af;eip=0x000bc1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 82956 mov     ax, [bp+var_4] ;~ 28AF:0BC1
cs=0x28af;eip=0x000bc4; 	T(OR(ax, *(dw*)(raddr(ss,bp+var_2))));	// 82957 or      ax, [bp+var_2] ;~ 28AF:0BC4
cs=0x28af;eip=0x000bc7; 	R(JNZ(loc_37caf));	// 82958 jnz     short loc_37CAF ;~ 28AF:0BC7
cs=0x28af;eip=0x000bc9; 	T(CMP(word_4063c, 0));	// 82959 cmp     word_4063C, 0 ;~ 28AF:0BC9
cs=0x28af;eip=0x000bce; 	R(JZ(loc_37caf));	// 82960 jz      short loc_37CAF ;~ 28AF:0BCE
cs=0x28af;eip=0x000bd0; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 82961 push    word ptr [bp+arg_0] ;~ 28AF:0BD0
cs=0x28af;eip=0x000bd3; 	T(MOV(ax, offset(dseg,acannotloadsfxfiles)));	// 82962 mov     ax, offset aCannotLoadSfxFileS ; "cannot load sfx file %s" ;~ 28AF:0BD3
cs=0x28af;eip=0x000bd6; 	X(PUSH(ax));	// 82963 push    ax ;~ 28AF:0BD6
cs=0x28af;eip=0x000bd7; 	R(CALLF(fatal_error,0));	// 82964 call    far ptr fatal_error ;~ 28AF:0BD7
cs=0x28af;eip=0x000bdc; 	T(ADD(sp, 4));	// 82966 add     sp, 4 ;~ 28AF:0BDC
loc_37caf:
	// 10103 
cs=0x28af;eip=0x000bdf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 82970 mov     ax, [bp+var_4] ;~ 28AF:0BDF
cs=0x28af;eip=0x000be2; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 82971 mov     dx, [bp+var_2] ;~ 28AF:0BE2
cs=0x28af;eip=0x000be5; 	T(MOV(sp, bp));	// 82972 mov     sp, bp ;~ 28AF:0BE5
cs=0x28af;eip=0x000be7; 	X(POP(bp));	// 82973 pop     bp ;~ 28AF:0BE7
cs=0x28af;eip=0x000be8; 	R(RETF(0));	// 82974 retf ;~ 28AF:0BE8
load_song_file:
	// 82985 
#undef var_4
#define var_4 -4
	// 82987 var_4           = word ptr -4 ;~ 28AF:0BEA
#undef var_2
#define var_2 -2
	// 82988 var_2           = word ptr -2 ;~ 28AF:0BEA
#undef arg_0
#define arg_0 6
	// 82989 arg_0           = dword ptr  6 ;~ 28AF:0BEA
ret_28af_bea:
	// 10104 
cs=0x28af;eip=0x000bea; 	X(PUSH(bp));	// 82991 push    bp ;~ 28AF:0BEA
cs=0x28af;eip=0x000beb; 	T(MOV(bp, sp));	// 82992 mov     bp, sp ;~ 28AF:0BEB
cs=0x28af;eip=0x000bed; 	T(SUB(sp, 4));	// 82993 sub     sp, 4 ;~ 28AF:0BED
cs=0x28af;eip=0x000bf0; 	T(SUB(ax, ax));	// 82994 sub     ax, ax ;~ 28AF:0BF0
cs=0x28af;eip=0x000bf2; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 82995 mov     [bp+var_2], ax ;~ 28AF:0BF2
cs=0x28af;eip=0x000bf5; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 82996 mov     [bp+var_4], ax ;~ 28AF:0BF5
cs=0x28af;eip=0x000bf8; 	T(MOV(ax, offset(dseg,audiodriverstring2)));	// 82997 mov     ax, offset audiodriverstring2 ;~ 28AF:0BF8
cs=0x28af;eip=0x000bfb; 	X(PUSH(ax));	// 82998 push    ax              ; int ;~ 28AF:0BFB
cs=0x28af;eip=0x000bfc; 	T(MOV(ax, offset(dseg,akms)));	// 82999 mov     ax, offset aKms ; "kms" ;~ 28AF:0BFC
cs=0x28af;eip=0x000bff; 	X(PUSH(ax));	// 83000 push    ax ;~ 28AF:0BFF
cs=0x28af;eip=0x000c00; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 83001 push    word ptr [bp+arg_0] ; char * ;~ 28AF:0C00
cs=0x28af;eip=0x000c03; 	X(PUSH(cs));	// 83002 push    cs ;~ 28AF:0C03
cs=0x28af;eip=0x000c04; 	R(CALL(load_sfx_ge,0));	// 83003 call    near ptr load_sfx_ge ;~ 28AF:0C04
cs=0x28af;eip=0x000c07; 	T(ADD(sp, 6));	// 83004 add     sp, 6 ;~ 28AF:0C07
cs=0x28af;eip=0x000c0a; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 83005 mov     [bp+var_4], ax ;~ 28AF:0C0A
cs=0x28af;eip=0x000c0d; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 83006 mov     [bp+var_2], dx ;~ 28AF:0C0D
cs=0x28af;eip=0x000c10; 	T(OR(ax, dx));	// 83007 or      ax, dx ;~ 28AF:0C10
cs=0x28af;eip=0x000c12; 	R(JNZ(loc_37cfa));	// 83008 jnz     short loc_37CFA ;~ 28AF:0C12
cs=0x28af;eip=0x000c14; 	T(CMP(word_4063c, 0));	// 83009 cmp     word_4063C, 0 ;~ 28AF:0C14
cs=0x28af;eip=0x000c19; 	R(JZ(loc_37cfa));	// 83010 jz      short loc_37CFA ;~ 28AF:0C19
cs=0x28af;eip=0x000c1b; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 83011 push    word ptr [bp+arg_0] ;~ 28AF:0C1B
cs=0x28af;eip=0x000c1e; 	T(MOV(ax, offset(dseg,acannotloadsongfiles)));	// 83012 mov     ax, offset aCannotLoadSongFileS ; "cannot load song file %s" ;~ 28AF:0C1E
cs=0x28af;eip=0x000c21; 	X(PUSH(ax));	// 83013 push    ax ;~ 28AF:0C21
cs=0x28af;eip=0x000c22; 	R(CALLF(fatal_error,0));	// 83014 call    far ptr fatal_error ;~ 28AF:0C22
cs=0x28af;eip=0x000c27; 	T(ADD(sp, 4));	// 83016 add     sp, 4 ;~ 28AF:0C27
loc_37cfa:
	// 10105 
cs=0x28af;eip=0x000c2a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 83020 mov     ax, [bp+var_4] ;~ 28AF:0C2A
cs=0x28af;eip=0x000c2d; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 83021 mov     dx, [bp+var_2] ;~ 28AF:0C2D
cs=0x28af;eip=0x000c30; 	T(MOV(sp, bp));	// 83022 mov     sp, bp ;~ 28AF:0C30
cs=0x28af;eip=0x000c32; 	X(POP(bp));	// 83023 pop     bp ;~ 28AF:0C32
cs=0x28af;eip=0x000c33; 	R(RETF(0));	// 83024 retf ;~ 28AF:0C33
load_voice_file:
	// 83033 
#undef var_4
#define var_4 -4
	// 83035 var_4           = word ptr -4 ;~ 28AF:0C34
#undef var_2
#define var_2 -2
	// 83036 var_2           = word ptr -2 ;~ 28AF:0C34
#undef arg_0
#define arg_0 6
	// 83037 arg_0           = dword ptr  6 ;~ 28AF:0C34
ret_28af_c34:
	// 10106 
cs=0x28af;eip=0x000c34; 	X(PUSH(bp));	// 83039 push    bp ;~ 28AF:0C34
cs=0x28af;eip=0x000c35; 	T(MOV(bp, sp));	// 83040 mov     bp, sp ;~ 28AF:0C35
cs=0x28af;eip=0x000c37; 	T(SUB(sp, 4));	// 83041 sub     sp, 4 ;~ 28AF:0C37
cs=0x28af;eip=0x000c3a; 	T(SUB(ax, ax));	// 83042 sub     ax, ax ;~ 28AF:0C3A
cs=0x28af;eip=0x000c3c; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 83043 mov     [bp+var_2], ax ;~ 28AF:0C3C
cs=0x28af;eip=0x000c3f; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 83044 mov     [bp+var_4], ax ;~ 28AF:0C3F
cs=0x28af;eip=0x000c42; 	T(CMP(byte_40635, 0));	// 83045 cmp     byte_40635, 0 ;~ 28AF:0C42
cs=0x28af;eip=0x000c47; 	R(JZ(loc_37d31));	// 83046 jz      short loc_37D31 ;~ 28AF:0C47
cs=0x28af;eip=0x000c49; 	T(MOV(ax, offset(dseg,audiodriverstring2)));	// 83047 mov     ax, offset audiodriverstring2 ;~ 28AF:0C49
cs=0x28af;eip=0x000c4c; 	X(PUSH(ax));	// 83048 push    ax              ; int ;~ 28AF:0C4C
cs=0x28af;eip=0x000c4d; 	T(MOV(ax, offset(dseg,advc)));	// 83049 mov     ax, offset aDvc ; "dvc" ;~ 28AF:0C4D
cs=0x28af;eip=0x000c50; 	X(PUSH(ax));	// 83050 push    ax ;~ 28AF:0C50
cs=0x28af;eip=0x000c51; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 83051 push    word ptr [bp+arg_0] ; char * ;~ 28AF:0C51
cs=0x28af;eip=0x000c54; 	X(PUSH(cs));	// 83052 push    cs ;~ 28AF:0C54
cs=0x28af;eip=0x000c55; 	R(CALL(load_sfx_ge,0));	// 83053 call    near ptr load_sfx_ge ;~ 28AF:0C55
cs=0x28af;eip=0x000c58; 	T(ADD(sp, 6));	// 83054 add     sp, 6 ;~ 28AF:0C58
cs=0x28af;eip=0x000c5b; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 83055 mov     [bp+var_4], ax ;~ 28AF:0C5B
cs=0x28af;eip=0x000c5e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 83056 mov     [bp+var_2], dx ;~ 28AF:0C5E
loc_37d31:
	// 10107 
cs=0x28af;eip=0x000c61; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 83059 mov     ax, [bp+var_4] ;~ 28AF:0C61
cs=0x28af;eip=0x000c64; 	T(OR(ax, *(dw*)(raddr(ss,bp+var_2))));	// 83060 or      ax, [bp+var_2] ;~ 28AF:0C64
cs=0x28af;eip=0x000c67; 	R(JNZ(loc_37d51));	// 83061 jnz     short loc_37D51 ;~ 28AF:0C67
cs=0x28af;eip=0x000c69; 	T(MOV(ax, offset(dseg,audiodriverstring2)));	// 83062 mov     ax, offset audiodriverstring2 ;~ 28AF:0C69
cs=0x28af;eip=0x000c6c; 	X(PUSH(ax));	// 83063 push    ax              ; int ;~ 28AF:0C6C
cs=0x28af;eip=0x000c6d; 	T(MOV(ax, offset(dseg,avce)));	// 83064 mov     ax, offset aVce ; "vce" ;~ 28AF:0C6D
cs=0x28af;eip=0x000c70; 	X(PUSH(ax));	// 83065 push    ax ;~ 28AF:0C70
cs=0x28af;eip=0x000c71; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 83066 push    word ptr [bp+arg_0] ; char * ;~ 28AF:0C71
cs=0x28af;eip=0x000c74; 	X(PUSH(cs));	// 83067 push    cs ;~ 28AF:0C74
cs=0x28af;eip=0x000c75; 	R(CALL(load_sfx_ge,0));	// 83068 call    near ptr load_sfx_ge ;~ 28AF:0C75
cs=0x28af;eip=0x000c78; 	T(ADD(sp, 6));	// 83069 add     sp, 6 ;~ 28AF:0C78
cs=0x28af;eip=0x000c7b; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 83070 mov     [bp+var_4], ax ;~ 28AF:0C7B
cs=0x28af;eip=0x000c7e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 83071 mov     [bp+var_2], dx ;~ 28AF:0C7E
loc_37d51:
	// 10108 
cs=0x28af;eip=0x000c81; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 83074 mov     ax, [bp+var_4] ;~ 28AF:0C81
cs=0x28af;eip=0x000c84; 	T(OR(ax, *(dw*)(raddr(ss,bp+var_2))));	// 83075 or      ax, [bp+var_2] ;~ 28AF:0C84
cs=0x28af;eip=0x000c87; 	R(JNZ(loc_37d6f));	// 83076 jnz     short loc_37D6F ;~ 28AF:0C87
cs=0x28af;eip=0x000c89; 	T(CMP(word_4063c, 0));	// 83077 cmp     word_4063C, 0 ;~ 28AF:0C89
cs=0x28af;eip=0x000c8e; 	R(JZ(loc_37d6f));	// 83078 jz      short loc_37D6F ;~ 28AF:0C8E
cs=0x28af;eip=0x000c90; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 83079 push    word ptr [bp+arg_0] ;~ 28AF:0C90
cs=0x28af;eip=0x000c93; 	T(MOV(ax, offset(dseg,acannotloadvoicefiles)));	// 83080 mov     ax, offset aCannotLoadVoiceFileS ; "cannot load voice file %s" ;~ 28AF:0C93
cs=0x28af;eip=0x000c96; 	X(PUSH(ax));	// 83081 push    ax ;~ 28AF:0C96
cs=0x28af;eip=0x000c97; 	R(CALLF(fatal_error,0));	// 83082 call    far ptr fatal_error ;~ 28AF:0C97
cs=0x28af;eip=0x000c9c; 	T(ADD(sp, 4));	// 83084 add     sp, 4 ;~ 28AF:0C9C
loc_37d6f:
	// 10109 
cs=0x28af;eip=0x000c9f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 83088 mov     ax, [bp+var_4] ;~ 28AF:0C9F
cs=0x28af;eip=0x000ca2; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 83089 mov     dx, [bp+var_2] ;~ 28AF:0CA2
cs=0x28af;eip=0x000ca5; 	T(MOV(sp, bp));	// 83090 mov     sp, bp ;~ 28AF:0CA5
cs=0x28af;eip=0x000ca7; 	X(POP(bp));	// 83091 pop     bp ;~ 28AF:0CA7
cs=0x28af;eip=0x000ca8; 	R(RETF(0));	// 83092 retf ;~ 28AF:0CA8
nopsub_37d7a:
	// 83103 
#undef var_4
#define var_4 -4
	// 83105 var_4           = word ptr -4 ;~ 28AF:0CAA
#undef var_2
#define var_2 -2
	// 83106 var_2           = word ptr -2 ;~ 28AF:0CAA
#undef arg_0
#define arg_0 6
	// 83107 arg_0           = dword ptr  6 ;~ 28AF:0CAA
ret_28af_caa:
	// 10110 
cs=0x28af;eip=0x000caa; 	X(PUSH(bp));	// 83109 push    bp ;~ 28AF:0CAA
cs=0x28af;eip=0x000cab; 	T(MOV(bp, sp));	// 83110 mov     bp, sp ;~ 28AF:0CAB
cs=0x28af;eip=0x000cad; 	T(SUB(sp, 4));	// 83111 sub     sp, 4 ;~ 28AF:0CAD
cs=0x28af;eip=0x000cb0; 	T(MOV(ax, offset(dseg,audiodriverstring2)));	// 83112 mov     ax, offset audiodriverstring2 ;~ 28AF:0CB0
cs=0x28af;eip=0x000cb3; 	X(PUSH(ax));	// 83113 push    ax              ; int ;~ 28AF:0CB3
cs=0x28af;eip=0x000cb4; 	T(MOV(ax, offset(dseg,aslb)));	// 83114 mov     ax, offset aSlb ; "slb" ;~ 28AF:0CB4
cs=0x28af;eip=0x000cb7; 	X(PUSH(ax));	// 83115 push    ax ;~ 28AF:0CB7
cs=0x28af;eip=0x000cb8; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 83116 push    word ptr [bp+arg_0] ; char * ;~ 28AF:0CB8
cs=0x28af;eip=0x000cbb; 	X(PUSH(cs));	// 83117 push    cs ;~ 28AF:0CBB
cs=0x28af;eip=0x000cbc; 	R(CALL(load_sfx_ge,0));	// 83118 call    near ptr load_sfx_ge ;~ 28AF:0CBC
cs=0x28af;eip=0x000cbf; 	T(ADD(sp, 6));	// 83119 add     sp, 6 ;~ 28AF:0CBF
cs=0x28af;eip=0x000cc2; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 83120 mov     [bp+var_4], ax ;~ 28AF:0CC2
cs=0x28af;eip=0x000cc5; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 83121 mov     [bp+var_2], dx ;~ 28AF:0CC5
cs=0x28af;eip=0x000cc8; 	T(OR(ax, dx));	// 83122 or      ax, dx ;~ 28AF:0CC8
cs=0x28af;eip=0x000cca; 	R(JNZ(loc_37db2));	// 83123 jnz     short loc_37DB2 ;~ 28AF:0CCA
cs=0x28af;eip=0x000ccc; 	T(CMP(word_4063c, 0));	// 83124 cmp     word_4063C, 0 ;~ 28AF:0CCC
cs=0x28af;eip=0x000cd1; 	R(JZ(loc_37db2));	// 83125 jz      short loc_37DB2 ;~ 28AF:0CD1
cs=0x28af;eip=0x000cd3; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 83126 push    word ptr [bp+arg_0] ;~ 28AF:0CD3
cs=0x28af;eip=0x000cd6; 	T(MOV(ax, offset(dseg,acannotloadsamplefiles)));	// 83127 mov     ax, offset aCannotLoadSampleFileS ; "cannot load sample file %s" ;~ 28AF:0CD6
cs=0x28af;eip=0x000cd9; 	X(PUSH(ax));	// 83128 push    ax ;~ 28AF:0CD9
cs=0x28af;eip=0x000cda; 	R(CALLF(fatal_error,0));	// 83129 call    far ptr fatal_error ;~ 28AF:0CDA
cs=0x28af;eip=0x000cdf; 	T(ADD(sp, 4));	// 83131 add     sp, 4 ;~ 28AF:0CDF
loc_37db2:
	// 10111 
cs=0x28af;eip=0x000ce2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 83135 mov     ax, [bp+var_4] ;~ 28AF:0CE2
cs=0x28af;eip=0x000ce5; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 83136 mov     dx, [bp+var_2] ;~ 28AF:0CE5
cs=0x28af;eip=0x000ce8; 	T(MOV(sp, bp));	// 83137 mov     sp, bp ;~ 28AF:0CE8
cs=0x28af;eip=0x000cea; 	X(POP(bp));	// 83138 pop     bp ;~ 28AF:0CEA
cs=0x28af;eip=0x000ceb; 	R(RETF(0));	// 83139 retf ;~ 28AF:0CEB
audio_init_chunk:
	// 83147 
#undef var_a
#define var_a -0x0A
	// 83150 var_A           = word ptr -0Ah ;~ 28AF:0CEC
#undef var_8
#define var_8 -8
	// 83151 var_8           = word ptr -8 ;~ 28AF:0CEC
#undef var_6
#define var_6 -6
	// 83152 var_6           = word ptr -6 ;~ 28AF:0CEC
#undef var_4
#define var_4 -4
	// 83153 var_4           = word ptr -4 ;~ 28AF:0CEC
#undef var_2
#define var_2 -2
	// 83154 var_2           = word ptr -2 ;~ 28AF:0CEC
#undef arg_0
#define arg_0 6
	// 83155 arg_0           = word ptr  6 ;~ 28AF:0CEC
#undef arg_2
#define arg_2 8
	// 83156 arg_2           = word ptr  8 ;~ 28AF:0CEC
#undef arg_4
#define arg_4 0x0A
	// 83157 arg_4           = word ptr  0Ah ;~ 28AF:0CEC
#undef arg_6
#define arg_6 0x0C
	// 83158 arg_6           = word ptr  0Ch ;~ 28AF:0CEC
#undef arg_8
#define arg_8 0x0E
	// 83159 arg_8           = word ptr  0Eh ;~ 28AF:0CEC
#undef arg_a
#define arg_a 0x10
	// 83160 arg_A           = byte ptr  10h ;~ 28AF:0CEC
#undef arg_c
#define arg_c 0x12
	// 83161 arg_C           = byte ptr  12h ;~ 28AF:0CEC
ret_28af_cec:
	// 10112 
cs=0x28af;eip=0x000cec; 	X(PUSH(bp));	// 83163 push    bp ;~ 28AF:0CEC
cs=0x28af;eip=0x000ced; 	T(MOV(bp, sp));	// 83164 mov     bp, sp ;~ 28AF:0CED
cs=0x28af;eip=0x000cef; 	T(SUB(sp, 0x0A));	// 83165 sub     sp, 0Ah ;~ 28AF:0CEF
cs=0x28af;eip=0x000cf2; 	X(PUSH(di));	// 83166 push    di ;~ 28AF:0CF2
cs=0x28af;eip=0x000cf3; 	X(PUSH(si));	// 83167 push    si ;~ 28AF:0CF3
cs=0x28af;eip=0x000cf4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 83168 mov     ax, [bp+arg_0] ;~ 28AF:0CF4
cs=0x28af;eip=0x000cf7; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 83169 mov     [bp+var_6], ax ;~ 28AF:0CF7
cs=0x28af;eip=0x000cfa; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 83170 mov     ax, [bp+arg_2] ;~ 28AF:0CFA
cs=0x28af;eip=0x000cfd; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), ax));	// 83171 cmp     [bp+var_6], ax ;~ 28AF:0CFD
cs=0x28af;eip=0x000d00; 	R(JLE(loc_37dd5));	// 83172 jle     short loc_37DD5 ;~ 28AF:0D00
cs=0x28af;eip=0x000d02; 	R(JMP(loc_37eba));	// 83173 jmp     loc_37EBA ;~ 28AF:0D02
loc_37dd5:
	// 10113 
cs=0x28af;eip=0x000d05; 	T(MOV(ax, 0x4C));	// 83177 mov     ax, 4Ch ; 'L' ;~ 28AF:0D05
cs=0x28af;eip=0x000d08; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 83178 imul    [bp+arg_0] ;~ 28AF:0D08
cs=0x28af;eip=0x000d0b; 	T(ADD(ax, offset(dseg,audiochunks_unk)));	// 83179 add     ax, offset audiochunks_unk ;~ 28AF:0D0B
cs=0x28af;eip=0x000d0e; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 83180 mov     [bp+var_A], ax ;~ 28AF:0D0E
cs=0x28af;eip=0x000d11; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_6))));	// 83181 mov     di, [bp+var_6] ;~ 28AF:0D11
loc_37de4:
	// 10114 
cs=0x28af;eip=0x000d14; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_a))));	// 83184 mov     si, [bp+var_A] ;~ 28AF:0D14
cs=0x28af;eip=0x000d17; 	T(SUB(ax, ax));	// 83185 sub     ax, ax ;~ 28AF:0D17
cs=0x28af;eip=0x000d19; 	X(MOV(*(dw*)(raddr(ds,si+0x4A)), ax));	// 83186 mov     [si+4Ah], ax ;~ 28AF:0D19
cs=0x28af;eip=0x000d1c; 	X(MOV(*(dw*)(raddr(ds,si+0x48)), ax));	// 83187 mov     [si+48h], ax ;~ 28AF:0D1C
cs=0x28af;eip=0x000d1f; 	X(MOV(*(raddr(ds,si+0x22)), 0x7F));	// 83188 mov     byte ptr [si+22h], 7Fh ;~ 28AF:0D1F
cs=0x28af;eip=0x000d23; 	T(MOV(ax, di));	// 83189 mov     ax, di ;~ 28AF:0D23
cs=0x28af;eip=0x000d25; 	X(MOV(*(raddr(ds,si+0x23)), al));	// 83190 mov     [si+23h], al ;~ 28AF:0D25
cs=0x28af;eip=0x000d28; 	X(MOV(*(raddr(ds,si+0x16)), 0x0F));	// 83191 mov     byte ptr [si+16h], 0Fh ;~ 28AF:0D28
cs=0x28af;eip=0x000d2c; 	X(MOV(*((&byte_44d06)+di), 0));	// 83192 mov     byte_44D06[di], 0 ;~ 28AF:0D2C
cs=0x28af;eip=0x000d31; 	X(MOV(*((&byte_44aca)+di), 0));	// 83193 mov     byte_44ACA[di], 0 ;~ 28AF:0D31
cs=0x28af;eip=0x000d36; 	X(MOV(*(raddr(ds,si+0x32)), 0));	// 83194 mov     byte ptr [si+32h], 0 ;~ 28AF:0D36
cs=0x28af;eip=0x000d3a; 	X(MOV(*(raddr(ds,si+4)), 0));	// 83195 mov     byte ptr [si+4], 0 ;~ 28AF:0D3A
cs=0x28af;eip=0x000d3e; 	T(MOV(al, *(raddr(ss,bp+arg_c))));	// 83196 mov     al, [bp+arg_C] ;~ 28AF:0D3E
cs=0x28af;eip=0x000d41; 	X(MOV(*(raddr(ds,si+0x24)), al));	// 83197 mov     [si+24h], al ;~ 28AF:0D41
cs=0x28af;eip=0x000d44; 	X(MOV(*(raddr(ds,si+0x15)), 0));	// 83198 mov     byte ptr [si+15h], 0 ;~ 28AF:0D44
cs=0x28af;eip=0x000d48; 	T(SUB(ax, ax));	// 83199 sub     ax, ax ;~ 28AF:0D48
cs=0x28af;eip=0x000d4a; 	X(MOV(*(dw*)(raddr(ds,si+0x1A)), ax));	// 83200 mov     [si+1Ah], ax ;~ 28AF:0D4A
cs=0x28af;eip=0x000d4d; 	X(MOV(*(dw*)(raddr(ds,si+0x18)), ax));	// 83201 mov     [si+18h], ax ;~ 28AF:0D4D
cs=0x28af;eip=0x000d50; 	X(MOV(*(raddr(ds,si+0x1C)), 0));	// 83202 mov     byte ptr [si+1Ch], 0 ;~ 28AF:0D50
cs=0x28af;eip=0x000d54; 	X(MOV(*(dw*)(raddr(ds,si+0x20)), ax));	// 83203 mov     [si+20h], ax ;~ 28AF:0D54
cs=0x28af;eip=0x000d57; 	X(MOV(*(dw*)(raddr(ds,si+0x1E)), ax));	// 83204 mov     [si+1Eh], ax ;~ 28AF:0D57
cs=0x28af;eip=0x000d5a; 	T(MOV(al, *(raddr(ss,bp+arg_a))));	// 83205 mov     al, [bp+arg_A] ;~ 28AF:0D5A
cs=0x28af;eip=0x000d5d; 	X(MOV(*(raddr(ds,si+0x28)), al));	// 83206 mov     [si+28h], al ;~ 28AF:0D5D
cs=0x28af;eip=0x000d60; 	X(MOV(*(raddr(ds,si+0x25)), 0));	// 83207 mov     byte ptr [si+25h], 0 ;~ 28AF:0D60
cs=0x28af;eip=0x000d64; 	X(MOV(*(dw*)(raddr(ds,si+0x26)), 0));	// 83208 mov     word ptr [si+26h], 0 ;~ 28AF:0D64
cs=0x28af;eip=0x000d69; 	X(MOV(*(raddr(ds,si+0x29)), 0));	// 83209 mov     byte ptr [si+29h], 0 ;~ 28AF:0D69
cs=0x28af;eip=0x000d6d; 	X(MOV(*(raddr(ds,si+0x2A)), 0));	// 83210 mov     byte ptr [si+2Ah], 0 ;~ 28AF:0D6D
cs=0x28af;eip=0x000d71; 	X(MOV(*(raddr(ds,si+0x2B)), 0));	// 83211 mov     byte ptr [si+2Bh], 0 ;~ 28AF:0D71
cs=0x28af;eip=0x000d75; 	X(MOV(*(raddr(ds,si+0x2C)), 0));	// 83212 mov     byte ptr [si+2Ch], 0 ;~ 28AF:0D75
cs=0x28af;eip=0x000d79; 	X(MOV(*(raddr(ds,si+0x47)), 0x0FF));	// 83213 mov     byte ptr [si+47h], 0FFh ;~ 28AF:0D79
cs=0x28af;eip=0x000d7d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 83214 mov     ax, [bp+arg_4] ;~ 28AF:0D7D
cs=0x28af;eip=0x000d80; 	T(OR(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 83215 or      ax, [bp+arg_6] ;~ 28AF:0D80
cs=0x28af;eip=0x000d83; 	R(JZ(loc_37ea0));	// 83216 jz      short loc_37EA0 ;~ 28AF:0D83
cs=0x28af;eip=0x000d85; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 83217 mov     ax, [bp+arg_8] ;~ 28AF:0D85
cs=0x28af;eip=0x000d88; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 83218 add     ax, [bp+arg_4] ;~ 28AF:0D88
cs=0x28af;eip=0x000d8b; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 83219 mov     dx, [bp+arg_6] ;~ 28AF:0D8B
cs=0x28af;eip=0x000d8e; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 83220 mov     [bp+var_4], ax ;~ 28AF:0D8E
cs=0x28af;eip=0x000d91; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 83221 mov     [bp+var_2], dx ;~ 28AF:0D91
cs=0x28af;eip=0x000d94; 	X(PUSH(dx));	// 83222 push    dx ;~ 28AF:0D94
cs=0x28af;eip=0x000d95; 	X(PUSH(ax));	// 83223 push    ax ;~ 28AF:0D95
cs=0x28af;eip=0x000d96; 	X(PUSH(cs));	// 83224 push    cs ;~ 28AF:0D96
cs=0x28af;eip=0x000d97; 	R(CALL(audioresource_get_dword,0));	// 83225 call    near ptr audioresource_get_dword ;~ 28AF:0D97
cs=0x28af;eip=0x000d9a; 	T(ADD(sp, 4));	// 83226 add     sp, 4 ;~ 28AF:0D9A
cs=0x28af;eip=0x000d9d; 	T(ADD(ax, 4));	// 83227 add     ax, 4 ;~ 28AF:0D9D
cs=0x28af;eip=0x000da0; 	X(MOV(*(dw*)(raddr(ds,si+5)), ax));	// 83228 mov     [si+5], ax ;~ 28AF:0DA0
cs=0x28af;eip=0x000da3; 	X(MOV(*(dw*)(raddr(ds,si+7)), dx));	// 83229 mov     [si+7], dx ;~ 28AF:0DA3
cs=0x28af;eip=0x000da6; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 83230 push    [bp+var_2] ;~ 28AF:0DA6
cs=0x28af;eip=0x000da9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 83231 push    [bp+var_4] ;~ 28AF:0DA9
cs=0x28af;eip=0x000dac; 	X(PUSH(cs));	// 83232 push    cs ;~ 28AF:0DAC
cs=0x28af;eip=0x000dad; 	R(CALL(audioresource_get_dword,0));	// 83233 call    near ptr audioresource_get_dword ;~ 28AF:0DAD
cs=0x28af;eip=0x000db0; 	T(ADD(sp, 4));	// 83234 add     sp, 4 ;~ 28AF:0DB0
cs=0x28af;eip=0x000db3; 	T(ADD(ax, 4));	// 83235 add     ax, 4 ;~ 28AF:0DB3
cs=0x28af;eip=0x000db6; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 83236 mov     [si], ax ;~ 28AF:0DB6
cs=0x28af;eip=0x000db8; 	X(MOV(*(dw*)(raddr(ds,si+2)), dx));	// 83237 mov     [si+2], dx ;~ 28AF:0DB8
cs=0x28af;eip=0x000dbb; 	X(ADD(*(dw*)(raddr(ss,bp+arg_8)), 5));	// 83238 add     [bp+arg_8], 5 ;~ 28AF:0DBB
cs=0x28af;eip=0x000dbf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 83239 mov     ax, [bp+arg_4] ;~ 28AF:0DBF
cs=0x28af;eip=0x000dc2; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 83240 mov     dx, [bp+arg_6] ;~ 28AF:0DC2
cs=0x28af;eip=0x000dc5; 	T(ADD(ax, 7));	// 83241 add     ax, 7 ;~ 28AF:0DC5
cs=0x28af;eip=0x000dc8; 	X(MOV(*(dw*)(raddr(ds,si+0x2E)), ax));	// 83242 mov     [si+2Eh], ax ;~ 28AF:0DC8
cs=0x28af;eip=0x000dcb; 	X(MOV(*(dw*)(raddr(ds,si+0x30)), dx));	// 83243 mov     [si+30h], dx ;~ 28AF:0DCB
cs=0x28af;eip=0x000dce; 	R(JMP(loc_37ea7));	// 83244 jmp     short loc_37EA7 ;~ 28AF:0DCE
loc_37ea0:
	// 10115 
cs=0x28af;eip=0x000dd0; 	T(SUB(ax, ax));	// 83248 sub     ax, ax ;~ 28AF:0DD0
cs=0x28af;eip=0x000dd2; 	X(MOV(*(dw*)(raddr(ds,si+2)), ax));	// 83249 mov     [si+2], ax ;~ 28AF:0DD2
cs=0x28af;eip=0x000dd5; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 83250 mov     [si], ax ;~ 28AF:0DD5
loc_37ea7:
	// 10116 
cs=0x28af;eip=0x000dd7; 	X(ADD(*(dw*)(raddr(ss,bp+var_a)), 0x4C));	// 83253 add     [bp+var_A], 4Ch ; 'L' ;~ 28AF:0DD7
cs=0x28af;eip=0x000ddb; 	T(INC(di));	// 83254 inc     di ;~ 28AF:0DDB
cs=0x28af;eip=0x000ddc; 	T(CMP(di, *(dw*)(raddr(ss,bp+arg_2))));	// 83255 cmp     di, [bp+arg_2] ;~ 28AF:0DDC
cs=0x28af;eip=0x000ddf; 	R(JG(loc_37eb4));	// 83256 jg      short loc_37EB4 ;~ 28AF:0DDF
cs=0x28af;eip=0x000de1; 	R(JMP(loc_37de4));	// 83257 jmp     loc_37DE4 ;~ 28AF:0DE1
loc_37eb4:
	// 10117 
cs=0x28af;eip=0x000de4; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), di));	// 83261 mov     [bp+var_6], di ;~ 28AF:0DE4
cs=0x28af;eip=0x000de7; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), si));	// 83262 mov     [bp+var_8], si ;~ 28AF:0DE7
loc_37eba:
	// 10118 
cs=0x28af;eip=0x000dea; 	X(POP(si));	// 83265 pop     si ;~ 28AF:0DEA
cs=0x28af;eip=0x000deb; 	X(POP(di));	// 83266 pop     di ;~ 28AF:0DEB
cs=0x28af;eip=0x000dec; 	T(MOV(sp, bp));	// 83267 mov     sp, bp ;~ 28AF:0DEC
cs=0x28af;eip=0x000dee; 	X(POP(bp));	// 83268 pop     bp ;~ 28AF:0DEE
cs=0x28af;eip=0x000def; 	R(RETF(0));	// 83269 retf ;~ 28AF:0DEF
audio_map_song_instruments:
	// 83277 
#undef var_22
#define var_22 -0x22
	// 83279 var_22          = word ptr -22h ;~ 28AF:0DF0
#undef var_20
#define var_20 -0x20
	// 83280 var_20          = word ptr -20h ;~ 28AF:0DF0
#undef var_1e
#define var_1e -0x1E
	// 83281 var_1E          = word ptr -1Eh ;~ 28AF:0DF0
#undef var_1c
#define var_1c -0x1C
	// 83282 var_1C          = word ptr -1Ch ;~ 28AF:0DF0
#undef var_1a
#define var_1a -0x1A
	// 83283 var_1A          = word ptr -1Ah ;~ 28AF:0DF0
#undef var_16
#define var_16 -0x16
	// 83284 var_16          = dword ptr -16h ;~ 28AF:0DF0
#undef var_12
#define var_12 -0x12
	// 83285 var_12          = word ptr -12h ;~ 28AF:0DF0
#undef var_10
#define var_10 -0x10
	// 83286 var_10          = word ptr -10h ;~ 28AF:0DF0
#undef var_e
#define var_e -0x0E
	// 83287 var_E           = word ptr -0Eh ;~ 28AF:0DF0
#undef var_c
#define var_c -0x0C
	// 83288 var_C           = word ptr -0Ch ;~ 28AF:0DF0
#undef var_a
#define var_a -0x0A
	// 83289 var_A           = byte ptr -0Ah ;~ 28AF:0DF0
#undef var_6
#define var_6 -6
	// 83290 var_6           = byte ptr -6 ;~ 28AF:0DF0
#undef var_4
#define var_4 -4
	// 83291 var_4           = word ptr -4 ;~ 28AF:0DF0
#undef var_2
#define var_2 -2
	// 83292 var_2           = word ptr -2 ;~ 28AF:0DF0
#undef arg_0
#define arg_0 6
	// 83293 arg_0           = word ptr  6 ;~ 28AF:0DF0
#undef arg_2
#define arg_2 8
	// 83294 arg_2           = word ptr  8 ;~ 28AF:0DF0
#undef arg_4
#define arg_4 0x0A
	// 83295 arg_4           = word ptr  0Ah ;~ 28AF:0DF0
#undef arg_6
#define arg_6 0x0C
	// 83296 arg_6           = word ptr  0Ch ;~ 28AF:0DF0
ret_28af_df0:
	// 10119 
cs=0x28af;eip=0x000df0; 	X(PUSH(bp));	// 83298 push    bp ;~ 28AF:0DF0
cs=0x28af;eip=0x000df1; 	T(MOV(bp, sp));	// 83299 mov     bp, sp ;~ 28AF:0DF1
cs=0x28af;eip=0x000df3; 	T(SUB(sp, 0x22));	// 83300 sub     sp, 22h ;~ 28AF:0DF3
cs=0x28af;eip=0x000df6; 	X(PUSH(di));	// 83301 push    di ;~ 28AF:0DF6
cs=0x28af;eip=0x000df7; 	X(PUSH(si));	// 83302 push    si ;~ 28AF:0DF7
cs=0x28af;eip=0x000df8; 	X(MOV(*(raddr(ss,bp+var_6)), 0));	// 83303 mov     [bp+var_6], 0 ;~ 28AF:0DF8
cs=0x28af;eip=0x000dfc; 	T(MOV(ax, offset(dseg,ahdr1_0)));	// 83304 mov     ax, offset aHdr1_0 ; "hdr1" ;~ 28AF:0DFC
cs=0x28af;eip=0x000dff; 	X(PUSH(ax));	// 83305 push    ax ;~ 28AF:0DFF
cs=0x28af;eip=0x000e00; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 83306 push    [bp+arg_2] ;~ 28AF:0E00
cs=0x28af;eip=0x000e03; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 83307 push    [bp+arg_0] ;~ 28AF:0E03
cs=0x28af;eip=0x000e06; 	R(CALLF(audioresource_find,0));	// 83308 call    audioresource_find ;~ 28AF:0E06
cs=0x28af;eip=0x000e0b; 	T(ADD(sp, 6));	// 83309 add     sp, 6 ;~ 28AF:0E0B
cs=0x28af;eip=0x000e0e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_16))), ax));	// 83310 mov     word ptr [bp+var_16], ax ;~ 28AF:0E0E
cs=0x28af;eip=0x000e11; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_16+2))), dx));	// 83311 mov     word ptr [bp+var_16+2], dx ;~ 28AF:0E11
cs=0x28af;eip=0x000e14; 	T(OR(ax, dx));	// 83312 or      ax, dx ;~ 28AF:0E14
cs=0x28af;eip=0x000e16; 	R(JNZ(loc_37eeb));	// 83313 jnz     short loc_37EEB ;~ 28AF:0E16
cs=0x28af;eip=0x000e18; 	R(JMP(loc_38036));	// 83314 jmp     loc_38036 ;~ 28AF:0E18
loc_37eeb:
	// 10120 
cs=0x28af;eip=0x000e1b; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), 0));	// 83318 mov     [bp+var_10], 0 ;~ 28AF:0E1B
cs=0x28af;eip=0x000e20; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_16))));	// 83319 les     bx, [bp+var_16] ;~ 28AF:0E20
cs=0x28af;eip=0x000e23; 	T(MOV(al, *(raddr(es,bx+6))));	// 83321 mov     al, es:[bx+6]   ; counter is compared to this - numsomething? ;~ 28AF:0E23
cs=0x28af;eip=0x000e27; 	T(SUB(ah, ah));	// 83322 sub     ah, ah ;~ 28AF:0E27
cs=0x28af;eip=0x000e29; 	T(OR(ax, ax));	// 83323 or      ax, ax ;~ 28AF:0E29
cs=0x28af;eip=0x000e2b; 	R(JNZ(loc_37f00));	// 83324 jnz     short loc_37F00 ;~ 28AF:0E2B
cs=0x28af;eip=0x000e2d; 	R(JMP(loc_37f87));	// 83325 jmp     loc_37F87 ;~ 28AF:0E2D
loc_37f00:
	// 10121 
cs=0x28af;eip=0x000e30; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), ax));	// 83329 mov     [bp+var_1C], ax ;~ 28AF:0E30
cs=0x28af;eip=0x000e33; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 83330 mov     [bp+var_1E], 0 ;~ 28AF:0E33
cs=0x28af;eip=0x000e38; 	T(MOV(ax, bx));	// 83331 mov     ax, bx ;~ 28AF:0E38
cs=0x28af;eip=0x000e3a; 	T(ADD(ax, 7));	// 83332 add     ax, 7 ;~ 28AF:0E3A
cs=0x28af;eip=0x000e3d; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 83333 mov     [bp+var_22], ax ; ax = hdrptr + 7 = instrument names; which are to be replaced with pointers to the instruments in the vce? ;~ 28AF:0E3D
cs=0x28af;eip=0x000e40; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), dx));	// 83334 mov     [bp+var_20], dx ;~ 28AF:0E40
loc_37f13:
	// 10122 
cs=0x28af;eip=0x000e43; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), 0));	// 83337 mov     [bp+var_12], 0 ;~ 28AF:0E43
cs=0x28af;eip=0x000e48; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_1e))));	// 83338 mov     di, [bp+var_1E] ;~ 28AF:0E48
cs=0x28af;eip=0x000e4b; 	T(SUB(cx, cx));	// 83339 sub     cx, cx ;~ 28AF:0E4B
cs=0x28af;eip=0x000e4d; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), ds));	// 83340 mov     [bp+var_1A], ds ;~ 28AF:0E4D
cs=0x28af;eip=0x000e50; 	T(LDS(si, *(dd*)(raddr(ss,bp+var_16))));	// 83341 lds     si, [bp+var_16] ;~ 28AF:0E50
loc_37f23:
	// 10123 
cs=0x28af;eip=0x000e53; 	T(MOV(bx, di));	// 83344 mov     bx, di ;~ 28AF:0E53
cs=0x28af;eip=0x000e55; 	T(ADD(bx, cx));	// 83345 add     bx, cx ;~ 28AF:0E55
cs=0x28af;eip=0x000e57; 	T(MOV(al, *(raddr(ds,bx+si+7))));	// 83346 mov     al, [bx+si+7] ;~ 28AF:0E57
cs=0x28af;eip=0x000e5a; 	T(MOV(bx, cx));	// 83347 mov     bx, cx ;~ 28AF:0E5A
cs=0x28af;eip=0x000e5c; 	T(ADD(bx, bp));	// 83348 add     bx, bp ;~ 28AF:0E5C
cs=0x28af;eip=0x000e5e; 	X(MOV(*(raddr(ss,bx-0x0A)), al));	// 83349 mov     ss:[bx-0Ah], al ;~ 28AF:0E5E
cs=0x28af;eip=0x000e62; 	T(INC(cx));	// 83350 inc     cx ;~ 28AF:0E62
cs=0x28af;eip=0x000e63; 	T(CMP(cx, 4));	// 83351 cmp     cx, 4 ;~ 28AF:0E63
cs=0x28af;eip=0x000e66; 	R(JL(loc_37f23));	// 83352 jl      short loc_37F23 ;~ 28AF:0E66
cs=0x28af;eip=0x000e68; 	T(MOV(ds, *(dw*)(raddr(ss,bp+var_1a))));	// 83353 mov     ds, [bp+var_1A] ;~ 28AF:0E68
cs=0x28af;eip=0x000e6b; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), cx));	// 83354 mov     [bp+var_12], cx ;~ 28AF:0E6B
cs=0x28af;eip=0x000e6e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_22))));	// 83355 mov     ax, [bp+var_22] ;~ 28AF:0E6E
cs=0x28af;eip=0x000e71; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_20))));	// 83356 mov     dx, [bp+var_20] ;~ 28AF:0E71
cs=0x28af;eip=0x000e74; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 83357 mov     [bp+var_4], ax ;~ 28AF:0E74
cs=0x28af;eip=0x000e77; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 83358 mov     [bp+var_2], dx ;~ 28AF:0E77
cs=0x28af;eip=0x000e7a; 	T(ax = bp+var_a);	// 83359 lea     ax, [bp+var_A] ;~ 28AF:0E7A
cs=0x28af;eip=0x000e7d; 	X(PUSH(ax));	// 83360 push    ax ;~ 28AF:0E7D
cs=0x28af;eip=0x000e7e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 83361 push    [bp+arg_6] ;~ 28AF:0E7E
cs=0x28af;eip=0x000e81; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 83362 push    [bp+arg_4] ;~ 28AF:0E81
cs=0x28af;eip=0x000e84; 	R(CALLF(audioresource_find,0));	// 83363 call    audioresource_find ;~ 28AF:0E84
cs=0x28af;eip=0x000e89; 	T(ADD(sp, 6));	// 83364 add     sp, 6 ;~ 28AF:0E89
cs=0x28af;eip=0x000e8c; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 83365 mov     [bp+var_E], ax ;~ 28AF:0E8C
cs=0x28af;eip=0x000e8f; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), dx));	// 83366 mov     [bp+var_C], dx ;~ 28AF:0E8F
cs=0x28af;eip=0x000e92; 	T(ax = bp+var_e);	// 83367 lea     ax, [bp+var_E] ;~ 28AF:0E92
cs=0x28af;eip=0x000e95; 	X(PUSH(ss));	// 83368 push    ss ;~ 28AF:0E95
cs=0x28af;eip=0x000e96; 	X(PUSH(ax));	// 83369 push    ax ;~ 28AF:0E96
cs=0x28af;eip=0x000e97; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 83370 push    [bp+var_2] ;~ 28AF:0E97
cs=0x28af;eip=0x000e9a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 83371 push    [bp+var_4] ;~ 28AF:0E9A
cs=0x28af;eip=0x000e9d; 	X(PUSH(cs));	// 83372 push    cs ;~ 28AF:0E9D
cs=0x28af;eip=0x000e9e; 	R(CALL(audioresource_copy_4_bytes,0));	// 83373 call    near ptr audioresource_copy_4_bytes ; looks like it replaces 4-byte names with pointers ;~ 28AF:0E9E
cs=0x28af;eip=0x000ea1; 	T(ADD(sp, 8));	// 83374 add     sp, 8 ;~ 28AF:0EA1
cs=0x28af;eip=0x000ea4; 	X(ADD(*(dw*)(raddr(ss,bp+var_1e)), 4));	// 83375 add     [bp+var_1E], 4 ;~ 28AF:0EA4
cs=0x28af;eip=0x000ea8; 	X(ADD(*(dw*)(raddr(ss,bp+var_22)), 4));	// 83376 add     [bp+var_22], 4 ;~ 28AF:0EA8
cs=0x28af;eip=0x000eac; 	X(INC(*(dw*)(raddr(ss,bp+var_10))));	// 83377 inc     [bp+var_10] ;~ 28AF:0EAC
cs=0x28af;eip=0x000eaf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 83378 mov     ax, [bp+var_1C] ;~ 28AF:0EAF
cs=0x28af;eip=0x000eb2; 	T(CMP(*(dw*)(raddr(ss,bp+var_10)), ax));	// 83379 cmp     [bp+var_10], ax ;~ 28AF:0EB2
cs=0x28af;eip=0x000eb5; 	R(JC(loc_37f13));	// 83380 jb      short loc_37F13 ;~ 28AF:0EB5
loc_37f87:
	// 10124 
cs=0x28af;eip=0x000eb7; 	T(MOV(ax, offset(dseg,abasd)));	// 83383 mov     ax, offset aBasd ; "BASD" ;~ 28AF:0EB7
cs=0x28af;eip=0x000eba; 	X(PUSH(ax));	// 83384 push    ax ;~ 28AF:0EBA
cs=0x28af;eip=0x000ebb; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 83385 push    [bp+arg_6] ;~ 28AF:0EBB
cs=0x28af;eip=0x000ebe; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 83386 push    [bp+arg_4] ;~ 28AF:0EBE
cs=0x28af;eip=0x000ec1; 	R(CALLF(audioresource_find,0));	// 83387 call    audioresource_find ;~ 28AF:0EC1
cs=0x28af;eip=0x000ec6; 	T(ADD(sp, 6));	// 83388 add     sp, 6 ;~ 28AF:0EC6
cs=0x28af;eip=0x000ec9; 	X(MOV(basdres, ax));	// 83389 mov     basdres, ax ;~ 28AF:0EC9
cs=0x28af;eip=0x000ecc; 	X(MOV(word_42a36, dx));	// 83390 mov     word_42A36, dx ;~ 28AF:0ECC
cs=0x28af;eip=0x000ed0; 	T(MOV(ax, offset(dseg,asnar)));	// 83391 mov     ax, offset aSnar ; "SNAR" ;~ 28AF:0ED0
cs=0x28af;eip=0x000ed3; 	X(PUSH(ax));	// 83392 push    ax ;~ 28AF:0ED3
cs=0x28af;eip=0x000ed4; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 83393 push    [bp+arg_6] ;~ 28AF:0ED4
cs=0x28af;eip=0x000ed7; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 83394 push    [bp+arg_4] ;~ 28AF:0ED7
cs=0x28af;eip=0x000eda; 	R(CALLF(audioresource_find,0));	// 83395 call    audioresource_find ;~ 28AF:0EDA
cs=0x28af;eip=0x000edf; 	T(ADD(sp, 6));	// 83396 add     sp, 6 ;~ 28AF:0EDF
cs=0x28af;eip=0x000ee2; 	X(MOV(snarres, ax));	// 83397 mov     snarres, ax ;~ 28AF:0EE2
cs=0x28af;eip=0x000ee5; 	X(MOV(word_43940, dx));	// 83398 mov     word_43940, dx ;~ 28AF:0EE5
cs=0x28af;eip=0x000ee9; 	T(MOV(ax, offset(dseg,atomm)));	// 83399 mov     ax, offset aTomm ; "TOMM" ;~ 28AF:0EE9
cs=0x28af;eip=0x000eec; 	X(PUSH(ax));	// 83400 push    ax ;~ 28AF:0EEC
cs=0x28af;eip=0x000eed; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 83401 push    [bp+arg_6] ;~ 28AF:0EED
cs=0x28af;eip=0x000ef0; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 83402 push    [bp+arg_4] ;~ 28AF:0EF0
cs=0x28af;eip=0x000ef3; 	R(CALLF(audioresource_find,0));	// 83403 call    audioresource_find ;~ 28AF:0EF3
cs=0x28af;eip=0x000ef8; 	T(ADD(sp, 6));	// 83404 add     sp, 6 ;~ 28AF:0EF8
cs=0x28af;eip=0x000efb; 	X(MOV(tommres, ax));	// 83405 mov     tommres, ax ;~ 28AF:0EFB
cs=0x28af;eip=0x000efe; 	X(MOV(word_4394c, dx));	// 83406 mov     word_4394C, dx ;~ 28AF:0EFE
cs=0x28af;eip=0x000f02; 	T(MOV(ax, offset(dseg,aride)));	// 83407 mov     ax, offset aRide ; "RIDE" ;~ 28AF:0F02
cs=0x28af;eip=0x000f05; 	X(PUSH(ax));	// 83408 push    ax ;~ 28AF:0F05
cs=0x28af;eip=0x000f06; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 83409 push    [bp+arg_6] ;~ 28AF:0F06
cs=0x28af;eip=0x000f09; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 83410 push    [bp+arg_4] ;~ 28AF:0F09
cs=0x28af;eip=0x000f0c; 	R(CALLF(audioresource_find,0));	// 83411 call    audioresource_find ;~ 28AF:0F0C
cs=0x28af;eip=0x000f11; 	T(ADD(sp, 6));	// 83412 add     sp, 6 ;~ 28AF:0F11
cs=0x28af;eip=0x000f14; 	X(MOV(rideres, ax));	// 83413 mov     rideres, ax ;~ 28AF:0F14
cs=0x28af;eip=0x000f17; 	X(MOV(word_454cc, dx));	// 83414 mov     word_454CC, dx ;~ 28AF:0F17
cs=0x28af;eip=0x000f1b; 	T(MOV(ax, offset(dseg,acrsh)));	// 83415 mov     ax, offset aCrsh ; "CRSH" ;~ 28AF:0F1B
cs=0x28af;eip=0x000f1e; 	X(PUSH(ax));	// 83416 push    ax ;~ 28AF:0F1E
cs=0x28af;eip=0x000f1f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 83417 push    [bp+arg_6] ;~ 28AF:0F1F
cs=0x28af;eip=0x000f22; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 83418 push    [bp+arg_4] ;~ 28AF:0F22
cs=0x28af;eip=0x000f25; 	R(CALLF(audioresource_find,0));	// 83419 call    audioresource_find ;~ 28AF:0F25
cs=0x28af;eip=0x000f2a; 	T(ADD(sp, 6));	// 83420 add     sp, 6 ;~ 28AF:0F2A
cs=0x28af;eip=0x000f2d; 	X(MOV(crshres, ax));	// 83421 mov     crshres, ax ;~ 28AF:0F2D
cs=0x28af;eip=0x000f30; 	X(MOV(word_4432e, dx));	// 83422 mov     word_4432E, dx ;~ 28AF:0F30
cs=0x28af;eip=0x000f34; 	T(MOV(ax, offset(dseg,achht)));	// 83423 mov     ax, offset aChht ; "CHHT" ;~ 28AF:0F34
cs=0x28af;eip=0x000f37; 	X(PUSH(ax));	// 83424 push    ax ;~ 28AF:0F37
cs=0x28af;eip=0x000f38; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 83425 push    [bp+arg_6] ;~ 28AF:0F38
cs=0x28af;eip=0x000f3b; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 83426 push    [bp+arg_4] ;~ 28AF:0F3B
cs=0x28af;eip=0x000f3e; 	R(CALLF(audioresource_find,0));	// 83427 call    audioresource_find ;~ 28AF:0F3E
cs=0x28af;eip=0x000f43; 	T(ADD(sp, 6));	// 83428 add     sp, 6 ;~ 28AF:0F43
cs=0x28af;eip=0x000f46; 	X(MOV(chhtres, ax));	// 83429 mov     chhtres, ax ;~ 28AF:0F46
cs=0x28af;eip=0x000f49; 	X(MOV(word_4392a, dx));	// 83430 mov     word_4392A, dx ;~ 28AF:0F49
cs=0x28af;eip=0x000f4d; 	T(MOV(ax, offset(dseg,aohht)));	// 83431 mov     ax, offset aOhht ; "OHHT" ;~ 28AF:0F4D
cs=0x28af;eip=0x000f50; 	X(PUSH(ax));	// 83432 push    ax ;~ 28AF:0F50
cs=0x28af;eip=0x000f51; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 83433 push    [bp+arg_6] ;~ 28AF:0F51
cs=0x28af;eip=0x000f54; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 83434 push    [bp+arg_4] ;~ 28AF:0F54
cs=0x28af;eip=0x000f57; 	R(CALLF(audioresource_find,0));	// 83435 call    audioresource_find ;~ 28AF:0F57
cs=0x28af;eip=0x000f5c; 	T(ADD(sp, 6));	// 83436 add     sp, 6 ;~ 28AF:0F5C
cs=0x28af;eip=0x000f5f; 	X(MOV(ohhtres, ax));	// 83437 mov     ohhtres, ax ;~ 28AF:0F5F
cs=0x28af;eip=0x000f62; 	X(MOV(word_4436a, dx));	// 83438 mov     word_4436A, dx ;~ 28AF:0F62
loc_38036:
	// 10125 
cs=0x28af;eip=0x000f66; 	X(POP(si));	// 83441 pop     si ;~ 28AF:0F66
cs=0x28af;eip=0x000f67; 	X(POP(di));	// 83442 pop     di ;~ 28AF:0F67
cs=0x28af;eip=0x000f68; 	T(MOV(sp, bp));	// 83443 mov     sp, bp ;~ 28AF:0F68
cs=0x28af;eip=0x000f6a; 	X(POP(bp));	// 83444 pop     bp ;~ 28AF:0F6A
cs=0x28af;eip=0x000f6b; 	R(RETF(0));	// 83445 retf ;~ 28AF:0F6B
sub_3803c:
	// 83453 
#undef var_22
#define var_22 -0x22
	// 83455 var_22          = word ptr -22h ;~ 28AF:0F6C
#undef var_20
#define var_20 -0x20
	// 83456 var_20          = word ptr -20h ;~ 28AF:0F6C
#undef var_1c
#define var_1c -0x1C
	// 83457 var_1C          = word ptr -1Ch ;~ 28AF:0F6C
#undef var_18
#define var_18 -0x18
	// 83458 var_18          = word ptr -18h ;~ 28AF:0F6C
#undef var_16
#define var_16 -0x16
	// 83459 var_16          = word ptr -16h ;~ 28AF:0F6C
#undef var_14
#define var_14 -0x14
	// 83460 var_14          = word ptr -14h ;~ 28AF:0F6C
#undef var_12
#define var_12 -0x12
	// 83461 var_12          = word ptr -12h ;~ 28AF:0F6C
#undef var_10
#define var_10 -0x10
	// 83462 var_10          = word ptr -10h ;~ 28AF:0F6C
#undef var_e
#define var_e -0x0E
	// 83463 var_E           = word ptr -0Eh ;~ 28AF:0F6C
#undef var_c
#define var_c -0x0C
	// 83464 var_C           = word ptr -0Ch ;~ 28AF:0F6C
#undef var_a
#define var_a -0x0A
	// 83465 var_A           = byte ptr -0Ah ;~ 28AF:0F6C
#undef var_4
#define var_4 -4
	// 83466 var_4           = dword ptr -4 ;~ 28AF:0F6C
#undef arg_0
#define arg_0 6
	// 83467 arg_0           = dword ptr  6 ;~ 28AF:0F6C
#undef arg_4
#define arg_4 0x0A
	// 83468 arg_4           = word ptr  0Ah ;~ 28AF:0F6C
#undef arg_6
#define arg_6 0x0C
	// 83469 arg_6           = word ptr  0Ch ;~ 28AF:0F6C
ret_28af_f6c:
	// 10126 
cs=0x28af;eip=0x000f6c; 	X(PUSH(bp));	// 83471 push    bp ;~ 28AF:0F6C
cs=0x28af;eip=0x000f6d; 	T(MOV(bp, sp));	// 83472 mov     bp, sp ;~ 28AF:0F6D
cs=0x28af;eip=0x000f6f; 	T(SUB(sp, 0x22));	// 83473 sub     sp, 22h ;~ 28AF:0F6F
cs=0x28af;eip=0x000f72; 	X(PUSH(di));	// 83474 push    di ;~ 28AF:0F72
cs=0x28af;eip=0x000f73; 	X(PUSH(si));	// 83475 push    si ;~ 28AF:0F73
cs=0x28af;eip=0x000f74; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 83476 mov     ax, [bp+arg_4] ;~ 28AF:0F74
cs=0x28af;eip=0x000f77; 	T(OR(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 83477 or      ax, [bp+arg_6] ;~ 28AF:0F77
cs=0x28af;eip=0x000f7a; 	R(JNZ(loc_3804f));	// 83478 jnz     short loc_3804F ;~ 28AF:0F7A
cs=0x28af;eip=0x000f7c; 	R(JMP(loc_3814f));	// 83479 jmp     loc_3814F ;~ 28AF:0F7C
loc_3804f:
	// 10127 
cs=0x28af;eip=0x000f7f; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 83483 mov     ax, word ptr [bp+arg_0] ;~ 28AF:0F7F
cs=0x28af;eip=0x000f82; 	T(OR(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 83484 or      ax, word ptr [bp+arg_0+2] ;~ 28AF:0F82
cs=0x28af;eip=0x000f85; 	R(JNZ(loc_3805a));	// 83485 jnz     short loc_3805A ;~ 28AF:0F85
cs=0x28af;eip=0x000f87; 	R(JMP(loc_3814f));	// 83486 jmp     loc_3814F ;~ 28AF:0F87
loc_3805a:
	// 10128 
cs=0x28af;eip=0x000f8a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 83490 les     bx, [bp+arg_0] ;~ 28AF:0F8A
cs=0x28af;eip=0x000f8d; 	T(MOV(al, *(raddr(es,bx+4))));	// 83491 mov     al, es:[bx+4] ;~ 28AF:0F8D
cs=0x28af;eip=0x000f91; 	T(SUB(ah, ah));	// 83492 sub     ah, ah ;~ 28AF:0F91
cs=0x28af;eip=0x000f93; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 83493 mov     [bp+var_22], ax ;~ 28AF:0F93
cs=0x28af;eip=0x000f96; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 83494 mov     [bp+var_14], ax ;~ 28AF:0F96
cs=0x28af;eip=0x000f99; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), 0));	// 83495 mov     [bp+var_16], 0 ;~ 28AF:0F99
cs=0x28af;eip=0x000f9e; 	T(OR(ax, ax));	// 83496 or      ax, ax ;~ 28AF:0F9E
cs=0x28af;eip=0x000fa0; 	R(JNZ(loc_38075));	// 83497 jnz     short loc_38075 ;~ 28AF:0FA0
cs=0x28af;eip=0x000fa2; 	R(JMP(loc_3814f));	// 83498 jmp     loc_3814F ;~ 28AF:0FA2
loc_38075:
	// 10129 
cs=0x28af;eip=0x000fa5; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), 0));	// 83502 mov     [bp+var_20], 0 ;~ 28AF:0FA5
loc_3807a:
	// 10130 
cs=0x28af;eip=0x000faa; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), 0));	// 83505 mov     [bp+var_18], 0 ;~ 28AF:0FAA
cs=0x28af;eip=0x000faf; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_20))));	// 83506 mov     di, [bp+var_20] ;~ 28AF:0FAF
cs=0x28af;eip=0x000fb2; 	T(SUB(cx, cx));	// 83507 sub     cx, cx ;~ 28AF:0FB2
cs=0x28af;eip=0x000fb4; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), ds));	// 83508 mov     [bp+var_1C], ds ;~ 28AF:0FB4
cs=0x28af;eip=0x000fb7; 	T(LDS(si, *(dd*)(raddr(ss,bp+arg_0))));	// 83509 lds     si, [bp+arg_0] ;~ 28AF:0FB7
loc_3808a:
	// 10131 
cs=0x28af;eip=0x000fba; 	T(MOV(bx, di));	// 83512 mov     bx, di ;~ 28AF:0FBA
cs=0x28af;eip=0x000fbc; 	T(ADD(bx, cx));	// 83513 add     bx, cx ;~ 28AF:0FBC
cs=0x28af;eip=0x000fbe; 	T(MOV(al, *(raddr(ds,bx+si+6))));	// 83514 mov     al, [bx+si+6] ;~ 28AF:0FBE
cs=0x28af;eip=0x000fc1; 	T(MOV(bx, cx));	// 83515 mov     bx, cx ;~ 28AF:0FC1
cs=0x28af;eip=0x000fc3; 	T(ADD(bx, bp));	// 83516 add     bx, bp ;~ 28AF:0FC3
cs=0x28af;eip=0x000fc5; 	X(MOV(*(raddr(ss,bx-0x0A)), al));	// 83517 mov     ss:[bx-0Ah], al ;~ 28AF:0FC5
cs=0x28af;eip=0x000fc9; 	T(INC(cx));	// 83518 inc     cx ;~ 28AF:0FC9
cs=0x28af;eip=0x000fca; 	T(CMP(cx, 4));	// 83519 cmp     cx, 4 ;~ 28AF:0FCA
cs=0x28af;eip=0x000fcd; 	R(JL(loc_3808a));	// 83520 jl      short loc_3808A ;~ 28AF:0FCD
cs=0x28af;eip=0x000fcf; 	T(MOV(ds, *(dw*)(raddr(ss,bp+var_1c))));	// 83521 mov     ds, [bp+var_1C] ;~ 28AF:0FCF
cs=0x28af;eip=0x000fd2; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), cx));	// 83522 mov     [bp+var_18], cx ;~ 28AF:0FD2
cs=0x28af;eip=0x000fd5; 	T(ax = bp+var_a);	// 83523 lea     ax, [bp+var_A] ;~ 28AF:0FD5
cs=0x28af;eip=0x000fd8; 	X(PUSH(ax));	// 83524 push    ax ;~ 28AF:0FD8
cs=0x28af;eip=0x000fd9; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 83525 push    word ptr [bp+arg_0+2] ;~ 28AF:0FD9
cs=0x28af;eip=0x000fdc; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 83526 push    word ptr [bp+arg_0] ;~ 28AF:0FDC
cs=0x28af;eip=0x000fdf; 	R(CALLF(audioresource_find,0));	// 83527 call    audioresource_find ;~ 28AF:0FDF
cs=0x28af;eip=0x000fe4; 	T(ADD(sp, 6));	// 83528 add     sp, 6 ;~ 28AF:0FE4
cs=0x28af;eip=0x000fe7; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 83529 mov     word ptr [bp+var_4], ax ;~ 28AF:0FE7
cs=0x28af;eip=0x000fea; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 83530 mov     word ptr [bp+var_4+2], dx ;~ 28AF:0FEA
cs=0x28af;eip=0x000fed; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 83531 les     bx, [bp+var_4] ;~ 28AF:0FED
cs=0x28af;eip=0x000ff0; 	T(CMP(*(raddr(es,bx+5)), 3));	// 83532 cmp     byte ptr es:[bx+5], 3 ;~ 28AF:0FF0
cs=0x28af;eip=0x000ff5; 	R(JZ(loc_380ce));	// 83533 jz      short loc_380CE ;~ 28AF:0FF5
cs=0x28af;eip=0x000ff7; 	T(CMP(*(raddr(es,bx+5)), 6));	// 83534 cmp     byte ptr es:[bx+5], 6 ;~ 28AF:0FF7
cs=0x28af;eip=0x000ffc; 	R(JNZ(loc_38137));	// 83535 jnz     short loc_38137 ;~ 28AF:0FFC
loc_380ce:
	// 10132 
cs=0x28af;eip=0x000ffe; 	T(CMP(*(raddr(es,bx+0x0A)), 0));	// 83538 cmp     byte ptr es:[bx+0Ah], 0 ;~ 28AF:0FFE
cs=0x28af;eip=0x001003; 	R(JNZ(loc_38137));	// 83539 jnz     short loc_38137 ;~ 28AF:1003
cs=0x28af;eip=0x001005; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), 0));	// 83540 mov     [bp+var_18], 0 ;~ 28AF:1005
cs=0x28af;eip=0x00100a; 	T(MOV(ax, bx));	// 83541 mov     ax, bx ;~ 28AF:100A
cs=0x28af;eip=0x00100c; 	T(MOV(dx, es));	// 83542 mov     dx, es ;~ 28AF:100C
cs=0x28af;eip=0x00100e; 	T(ADD(ax, 6));	// 83543 add     ax, 6 ;~ 28AF:100E
cs=0x28af;eip=0x001011; 	T(MOV(cx, 2));	// 83544 mov     cx, 2 ;~ 28AF:1011
cs=0x28af;eip=0x001014; 	T(di = bp+var_a);	// 83545 lea     di, [bp+var_A] ;~ 28AF:1014
cs=0x28af;eip=0x001017; 	T(MOV(si, ax));	// 83546 mov     si, ax ;~ 28AF:1017
cs=0x28af;eip=0x001019; 	X(PUSH(ss));	// 83547 push    ss ;~ 28AF:1019
cs=0x28af;eip=0x00101a; 	X(POP(es));	// 83548 pop     es ;~ 28AF:101A
cs=0x28af;eip=0x00101b; 	X(PUSH(ds));	// 83549 push    ds ;~ 28AF:101B
cs=0x28af;eip=0x00101c; 	T(MOV(ds, dx));	// 83550 mov     ds, dx ;~ 28AF:101C
	// 83551 repne movsw ;~ 28AF:101E
cs=0x28af;eip=0x00101e; 	X(	REPNE MOVSW);	// 83551 repne movsw ;~ 28AF:101E
cs=0x28af;eip=0x001020; 	X(POP(ds));	// 83552 pop     ds ;~ 28AF:1020
cs=0x28af;eip=0x001021; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), 4));	// 83553 mov     [bp+var_18], 4 ;~ 28AF:1021
cs=0x28af;eip=0x001026; 	T(MOV(ax, bx));	// 83554 mov     ax, bx ;~ 28AF:1026
cs=0x28af;eip=0x001028; 	T(ADD(ax, 6));	// 83555 add     ax, 6 ;~ 28AF:1028
cs=0x28af;eip=0x00102b; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 83556 mov     [bp+var_E], ax ;~ 28AF:102B
cs=0x28af;eip=0x00102e; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), dx));	// 83557 mov     [bp+var_C], dx ;~ 28AF:102E
cs=0x28af;eip=0x001031; 	T(ax = bp+var_a);	// 83558 lea     ax, [bp+var_A] ;~ 28AF:1031
cs=0x28af;eip=0x001034; 	X(PUSH(ax));	// 83559 push    ax ;~ 28AF:1034
cs=0x28af;eip=0x001035; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 83560 push    [bp+arg_6] ;~ 28AF:1035
cs=0x28af;eip=0x001038; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 83561 push    [bp+arg_4] ;~ 28AF:1038
cs=0x28af;eip=0x00103b; 	R(CALLF(locate_shape_nofatal,0));	// 83562 call    locate_shape_nofatal ;~ 28AF:103B
cs=0x28af;eip=0x001040; 	T(ADD(sp, 6));	// 83563 add     sp, 6 ;~ 28AF:1040
cs=0x28af;eip=0x001043; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 83564 mov     [bp+var_12], ax ;~ 28AF:1043
cs=0x28af;eip=0x001046; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), dx));	// 83565 mov     [bp+var_10], dx ;~ 28AF:1046
cs=0x28af;eip=0x001049; 	T(OR(ax, dx));	// 83566 or      ax, dx ;~ 28AF:1049
cs=0x28af;eip=0x00104b; 	R(JZ(loc_38137));	// 83567 jz      short loc_38137 ;~ 28AF:104B
cs=0x28af;eip=0x00104d; 	T(ax = bp+var_12);	// 83568 lea     ax, [bp+var_12] ;~ 28AF:104D
cs=0x28af;eip=0x001050; 	X(PUSH(ss));	// 83569 push    ss ;~ 28AF:1050
cs=0x28af;eip=0x001051; 	X(PUSH(ax));	// 83570 push    ax ;~ 28AF:1051
cs=0x28af;eip=0x001052; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 83571 push    [bp+var_C] ;~ 28AF:1052
cs=0x28af;eip=0x001055; 	X(PUSH(*(dw*)(raddr(ss,bp+var_e))));	// 83572 push    [bp+var_E] ;~ 28AF:1055
cs=0x28af;eip=0x001058; 	X(PUSH(cs));	// 83573 push    cs ;~ 28AF:1058
cs=0x28af;eip=0x001059; 	R(CALL(audioresource_copy_4_bytes,0));	// 83574 call    near ptr audioresource_copy_4_bytes ;~ 28AF:1059
cs=0x28af;eip=0x00105c; 	T(ADD(sp, 8));	// 83575 add     sp, 8 ;~ 28AF:105C
cs=0x28af;eip=0x00105f; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 83576 les     bx, [bp+var_4] ;~ 28AF:105F
cs=0x28af;eip=0x001062; 	X(MOV(*(raddr(es,bx+0x0A)), 0x0FF));	// 83577 mov     byte ptr es:[bx+0Ah], 0FFh ;~ 28AF:1062
loc_38137:
	// 10133 
cs=0x28af;eip=0x001067; 	X(ADD(*(dw*)(raddr(ss,bp+var_20)), 4));	// 83581 add     [bp+var_20], 4 ;~ 28AF:1067
cs=0x28af;eip=0x00106b; 	X(INC(*(dw*)(raddr(ss,bp+var_16))));	// 83582 inc     [bp+var_16] ;~ 28AF:106B
cs=0x28af;eip=0x00106e; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 83583 les     bx, [bp+arg_0] ;~ 28AF:106E
cs=0x28af;eip=0x001071; 	T(MOV(al, *(raddr(es,bx+4))));	// 83584 mov     al, es:[bx+4] ;~ 28AF:1071
cs=0x28af;eip=0x001075; 	T(SUB(ah, ah));	// 83585 sub     ah, ah ;~ 28AF:1075
cs=0x28af;eip=0x001077; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_16))));	// 83586 cmp     ax, [bp+var_16] ;~ 28AF:1077
cs=0x28af;eip=0x00107a; 	R(JBE(loc_3814f));	// 83587 jbe     short loc_3814F ;~ 28AF:107A
cs=0x28af;eip=0x00107c; 	R(JMP(loc_3807a));	// 83588 jmp     loc_3807A ;~ 28AF:107C
loc_3814f:
	// 10134 
cs=0x28af;eip=0x00107f; 	X(POP(si));	// 83593 pop     si ;~ 28AF:107F
cs=0x28af;eip=0x001080; 	X(POP(di));	// 83594 pop     di ;~ 28AF:1080
cs=0x28af;eip=0x001081; 	T(MOV(sp, bp));	// 83595 mov     sp, bp ;~ 28AF:1081
cs=0x28af;eip=0x001083; 	X(POP(bp));	// 83596 pop     bp ;~ 28AF:1083
cs=0x28af;eip=0x001084; 	R(RETF(0));	// 83597 retf ;~ 28AF:1084
sub_38156:
	// 83607 
#undef var_2
#define var_2 -2
	// 83609 var_2           = word ptr -2 ;~ 28AF:1086
#undef arg_0
#define arg_0 6
	// 83610 arg_0           = word ptr  6 ;~ 28AF:1086
ret_28af_1086:
	// 10135 
cs=0x28af;eip=0x001086; 	X(PUSH(bp));	// 83612 push    bp ;~ 28AF:1086
cs=0x28af;eip=0x001087; 	T(MOV(bp, sp));	// 83613 mov     bp, sp ;~ 28AF:1087
cs=0x28af;eip=0x001089; 	T(SUB(sp, 2));	// 83614 sub     sp, 2 ;~ 28AF:1089
cs=0x28af;eip=0x00108c; 	T(MOV(ax, 0x2E));	// 83615 mov     ax, 2Eh ; '.' ;~ 28AF:108C
cs=0x28af;eip=0x00108f; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 83616 imul    [bp+arg_0] ;~ 28AF:108F
cs=0x28af;eip=0x001092; 	T(ADD(ax, offset(dseg,unk_45a26)));	// 83617 add     ax, offset unk_45A26 ;~ 28AF:1092
cs=0x28af;eip=0x001095; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 83618 mov     [bp+var_2], ax ;~ 28AF:1095
cs=0x28af;eip=0x001098; 	T(MOV(bx, ax));	// 83619 mov     bx, ax ;~ 28AF:1098
cs=0x28af;eip=0x00109a; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), 1));	// 83620 mov     word ptr [bx+0Ch], 1 ;~ 28AF:109A
cs=0x28af;eip=0x00109f; 	X(MOV(*(dw*)(raddr(ds,bx+0x0E)), 0));	// 83621 mov     word ptr [bx+0Eh], 0 ;~ 28AF:109F
cs=0x28af;eip=0x0010a4; 	T(MOV(sp, bp));	// 83622 mov     sp, bp ;~ 28AF:10A4
cs=0x28af;eip=0x0010a6; 	X(POP(bp));	// 83623 pop     bp ;~ 28AF:10A6
cs=0x28af;eip=0x0010a7; 	R(RETF(0));	// 83624 retf ;~ 28AF:10A7
sub_38178:
	// 83632 
#undef var_10
#define var_10 -0x10
	// 83635 var_10          = dword ptr -10h ;~ 28AF:10A8
#undef var_c
#define var_c -0x0C
	// 83636 var_C           = word ptr -0Ch ;~ 28AF:10A8
#undef var_a
#define var_a -0x0A
	// 83637 var_A           = word ptr -0Ah ;~ 28AF:10A8
#undef var_8
#define var_8 -8
	// 83638 var_8           = word ptr -8 ;~ 28AF:10A8
#undef var_6
#define var_6 -6
	// 83639 var_6           = word ptr -6 ;~ 28AF:10A8
#undef var_2
#define var_2 -2
	// 83640 var_2           = word ptr -2 ;~ 28AF:10A8
ret_28af_10a8:
	// 10136 
cs=0x28af;eip=0x0010a8; 	X(PUSH(bp));	// 83642 push    bp ;~ 28AF:10A8
cs=0x28af;eip=0x0010a9; 	T(MOV(bp, sp));	// 83643 mov     bp, sp ;~ 28AF:10A9
cs=0x28af;eip=0x0010ab; 	T(SUB(sp, 0x10));	// 83644 sub     sp, 10h ;~ 28AF:10AB
cs=0x28af;eip=0x0010ae; 	X(PUSH(di));	// 83645 push    di ;~ 28AF:10AE
cs=0x28af;eip=0x0010af; 	X(PUSH(si));	// 83646 push    si ;~ 28AF:10AF
cs=0x28af;eip=0x0010b0; 	X(MOV(word_4063a, 1));	// 83647 mov     word_4063A, 1 ;~ 28AF:10B0
cs=0x28af;eip=0x0010b6; 	T(SUB(ax, ax));	// 83648 sub     ax, ax ;~ 28AF:10B6
cs=0x28af;eip=0x0010b8; 	X(PUSH(ax));	// 83649 push    ax ;~ 28AF:10B8
cs=0x28af;eip=0x0010b9; 	T(MOV(ax, 0x7F));	// 83650 mov     ax, 7Fh ;~ 28AF:10B9
cs=0x28af;eip=0x0010bc; 	X(PUSH(ax));	// 83651 push    ax ;~ 28AF:10BC
cs=0x28af;eip=0x0010bd; 	T(SUB(ax, ax));	// 83652 sub     ax, ax ;~ 28AF:10BD
cs=0x28af;eip=0x0010bf; 	X(PUSH(ax));	// 83653 push    ax ;~ 28AF:10BF
cs=0x28af;eip=0x0010c0; 	X(PUSH(ax));	// 83654 push    ax ;~ 28AF:10C0
cs=0x28af;eip=0x0010c1; 	X(PUSH(ax));	// 83655 push    ax ;~ 28AF:10C1
cs=0x28af;eip=0x0010c2; 	T(MOV(ax, 0x17));	// 83656 mov     ax, 17h ;~ 28AF:10C2
cs=0x28af;eip=0x0010c5; 	X(PUSH(ax));	// 83657 push    ax ;~ 28AF:10C5
cs=0x28af;eip=0x0010c6; 	T(SUB(ax, ax));	// 83658 sub     ax, ax ;~ 28AF:10C6
cs=0x28af;eip=0x0010c8; 	X(PUSH(ax));	// 83659 push    ax ;~ 28AF:10C8
cs=0x28af;eip=0x0010c9; 	X(PUSH(cs));	// 83660 push    cs ;~ 28AF:10C9
cs=0x28af;eip=0x0010ca; 	R(CALL(audio_init_chunk,0));	// 83661 call    near ptr audio_init_chunk ;~ 28AF:10CA
cs=0x28af;eip=0x0010cd; 	T(ADD(sp, 0x0E));	// 83662 add     sp, 0Eh ;~ 28AF:10CD
cs=0x28af;eip=0x0010d0; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 83663 mov     [bp+var_2], 0 ;~ 28AF:10D0
cs=0x28af;eip=0x0010d5; 	T(MOV(al, byte_459d2));	// 83664 mov     al, byte_459D2 ;~ 28AF:10D5
cs=0x28af;eip=0x0010d8; 	T(SUB(ah, ah));	// 83665 sub     ah, ah ;~ 28AF:10D8
cs=0x28af;eip=0x0010da; 	T(OR(ax, ax));	// 83666 or      ax, ax ;~ 28AF:10DA
cs=0x28af;eip=0x0010dc; 	R(JZ(loc_38221));	// 83667 jz      short loc_38221 ;~ 28AF:10DC
cs=0x28af;eip=0x0010de; 	T(MOV(di, 0x0A2B7));	// 83668 mov     di, 0A2B7h ;~ 28AF:10DE
cs=0x28af;eip=0x0010e1; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0x0A2B6));	// 83669 mov     [bp+var_6], 0A2B6h ;~ 28AF:10E1
cs=0x28af;eip=0x0010e6; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0x0A2B8));	// 83670 mov     [bp+var_8], 0A2B8h ;~ 28AF:10E6
cs=0x28af;eip=0x0010eb; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0x0A2C6));	// 83671 mov     [bp+var_A], 0A2C6h ;~ 28AF:10EB
cs=0x28af;eip=0x0010f0; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 0x0A2E2));	// 83672 mov     [bp+var_C], 0A2E2h ;~ 28AF:10F0
cs=0x28af;eip=0x0010f5; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_2))));	// 83673 mov     si, [bp+var_2] ;~ 28AF:10F5
loc_381c8:
	// 10137 
cs=0x28af;eip=0x0010f8; 	X(PUSH(si));	// 83676 push    si ;~ 28AF:10F8
cs=0x28af;eip=0x0010f9; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 83677 mov     ax, word ptr audiodriverbinary ;~ 28AF:10F9
cs=0x28af;eip=0x0010fc; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 83678 mov     dx, word ptr audiodriverbinary+2 ;~ 28AF:10FC
cs=0x28af;eip=0x001100; 	T(ADD(ax, 0x1E));	// 83679 add     ax, 1Eh ;~ 28AF:1100
cs=0x28af;eip=0x001103; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10+2))), dx));	// 83680 mov     word ptr [bp+var_10+2], dx ;~ 28AF:1103
cs=0x28af;eip=0x001106; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10))), ax));	// 83681 mov     word ptr [bp+var_10], ax ;~ 28AF:1106
cs=0x28af;eip=0x001109; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_10))));	// 83682 call    [bp+var_10] ;~ 28AF:1109
cs=0x28af;eip=0x00110c; 	T(ADD(sp, 2));	// 83683 add     sp, 2 ;~ 28AF:110C
cs=0x28af;eip=0x00110f; 	X(MOV(*(raddr(ds,di)), 0));	// 83684 mov     byte ptr [di], 0 ;~ 28AF:110F
cs=0x28af;eip=0x001112; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_6))));	// 83685 mov     bx, [bp+var_6] ;~ 28AF:1112
cs=0x28af;eip=0x001115; 	X(MOV(*(raddr(ds,bx)), 0x0FF));	// 83686 mov     byte ptr [bx], 0FFh ;~ 28AF:1115
cs=0x28af;eip=0x001118; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 83687 mov     bx, [bp+var_8] ;~ 28AF:1118
cs=0x28af;eip=0x00111b; 	X(MOV(*(raddr(ds,bx)), 0));	// 83688 mov     byte ptr [bx], 0 ;~ 28AF:111B
cs=0x28af;eip=0x00111e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_a))));	// 83689 mov     bx, [bp+var_A] ;~ 28AF:111E
cs=0x28af;eip=0x001121; 	T(SUB(ax, ax));	// 83690 sub     ax, ax ;~ 28AF:1121
cs=0x28af;eip=0x001123; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 83691 mov     [bx+2], ax ;~ 28AF:1123
cs=0x28af;eip=0x001126; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 83692 mov     [bx], ax ;~ 28AF:1126
cs=0x28af;eip=0x001128; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_c))));	// 83693 mov     bx, [bp+var_C] ;~ 28AF:1128
cs=0x28af;eip=0x00112b; 	X(MOV(*(raddr(ds,bx)), 0x0FF));	// 83694 mov     byte ptr [bx], 0FFh ;~ 28AF:112B
cs=0x28af;eip=0x00112e; 	T(ADD(di, 0x2E));	// 83695 add     di, 2Eh ; '.' ;~ 28AF:112E
cs=0x28af;eip=0x001131; 	X(ADD(*(dw*)(raddr(ss,bp+var_6)), 0x2E));	// 83696 add     [bp+var_6], 2Eh ; '.' ;~ 28AF:1131
cs=0x28af;eip=0x001135; 	X(ADD(*(dw*)(raddr(ss,bp+var_8)), 0x2E));	// 83697 add     [bp+var_8], 2Eh ; '.' ;~ 28AF:1135
cs=0x28af;eip=0x001139; 	X(ADD(*(dw*)(raddr(ss,bp+var_a)), 0x2E));	// 83698 add     [bp+var_A], 2Eh ; '.' ;~ 28AF:1139
cs=0x28af;eip=0x00113d; 	X(ADD(*(dw*)(raddr(ss,bp+var_c)), 0x2E));	// 83699 add     [bp+var_C], 2Eh ; '.' ;~ 28AF:113D
cs=0x28af;eip=0x001141; 	T(INC(si));	// 83700 inc     si ;~ 28AF:1141
cs=0x28af;eip=0x001142; 	T(MOV(ax, si));	// 83701 mov     ax, si ;~ 28AF:1142
cs=0x28af;eip=0x001144; 	T(MOV(cl, byte_459d2));	// 83702 mov     cl, byte_459D2 ;~ 28AF:1144
cs=0x28af;eip=0x001148; 	T(SUB(ch, ch));	// 83703 sub     ch, ch ;~ 28AF:1148
cs=0x28af;eip=0x00114a; 	T(CMP(ax, cx));	// 83704 cmp     ax, cx ;~ 28AF:114A
cs=0x28af;eip=0x00114c; 	R(JC(loc_381c8));	// 83705 jb      short loc_381C8 ;~ 28AF:114C
cs=0x28af;eip=0x00114e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), si));	// 83706 mov     [bp+var_2], si ;~ 28AF:114E
loc_38221:
	// 10138 
cs=0x28af;eip=0x001151; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 83709 mov     ax, word ptr audiodriverbinary ;~ 28AF:1151
cs=0x28af;eip=0x001154; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 83710 mov     dx, word ptr audiodriverbinary+2 ;~ 28AF:1154
cs=0x28af;eip=0x001158; 	T(ADD(ax, 0x18));	// 83711 add     ax, 18h ;~ 28AF:1158
cs=0x28af;eip=0x00115b; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10+2))), dx));	// 83712 mov     word ptr [bp+var_10+2], dx ;~ 28AF:115B
cs=0x28af;eip=0x00115e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10))), ax));	// 83713 mov     word ptr [bp+var_10], ax ;~ 28AF:115E
cs=0x28af;eip=0x001161; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_10))));	// 83714 call    [bp+var_10] ;~ 28AF:1161
cs=0x28af;eip=0x001164; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 83715 mov     ax, word ptr audiodriverbinary ;~ 28AF:1164
cs=0x28af;eip=0x001167; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 83716 mov     dx, word ptr audiodriverbinary+2 ;~ 28AF:1167
cs=0x28af;eip=0x00116b; 	T(ADD(ax, 6));	// 83717 add     ax, 6 ;~ 28AF:116B
cs=0x28af;eip=0x00116e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10+2))), dx));	// 83718 mov     word ptr [bp+var_10+2], dx ;~ 28AF:116E
cs=0x28af;eip=0x001171; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10))), ax));	// 83719 mov     word ptr [bp+var_10], ax ;~ 28AF:1171
cs=0x28af;eip=0x001174; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_10))));	// 83720 call    [bp+var_10] ;~ 28AF:1174
cs=0x28af;eip=0x001177; 	X(MOV(word_4063a, 0));	// 83721 mov     word_4063A, 0 ;~ 28AF:1177
cs=0x28af;eip=0x00117d; 	X(POP(si));	// 83722 pop     si ;~ 28AF:117D
cs=0x28af;eip=0x00117e; 	X(POP(di));	// 83723 pop     di ;~ 28AF:117E
cs=0x28af;eip=0x00117f; 	T(MOV(sp, bp));	// 83724 mov     sp, bp ;~ 28AF:117F
cs=0x28af;eip=0x001181; 	X(POP(bp));	// 83725 pop     bp ;~ 28AF:1181
cs=0x28af;eip=0x001182; 	R(RETF(0));	// 83726 retf ;~ 28AF:1182
audio_map_song_tracks:
	// 83736 
#undef var_32
#define var_32 -0x32
	// 83738 var_32          = word ptr -32h ;~ 28AF:1184
#undef var_30
#define var_30 -0x30
	// 83739 var_30          = word ptr -30h ;~ 28AF:1184
#undef var_2e
#define var_2e -0x2E
	// 83740 var_2E          = word ptr -2Eh ;~ 28AF:1184
#undef var_2c
#define var_2c -0x2C
	// 83741 var_2C          = word ptr -2Ch ;~ 28AF:1184
#undef var_2a
#define var_2a -0x2A
	// 83742 var_2A          = word ptr -2Ah ;~ 28AF:1184
#undef var_28
#define var_28 -0x28
	// 83743 var_28          = word ptr -28h ;~ 28AF:1184
#undef var_26
#define var_26 -0x26
	// 83744 var_26          = word ptr -26h ;~ 28AF:1184
#undef var_24
#define var_24 -0x24
	// 83745 var_24          = byte ptr -24h ;~ 28AF:1184
#undef var_22
#define var_22 -0x22
	// 83746 var_22          = word ptr -22h ;~ 28AF:1184
#undef var_20
#define var_20 -0x20
	// 83747 var_20          = word ptr -20h ;~ 28AF:1184
#undef var_1e
#define var_1e -0x1E
	// 83748 var_1E          = word ptr -1Eh ;~ 28AF:1184
#undef var_1c
#define var_1c -0x1C
	// 83749 var_1C          = word ptr -1Ch ;~ 28AF:1184
#undef var_1a
#define var_1a -0x1A
	// 83750 var_1A          = word ptr -1Ah ;~ 28AF:1184
#undef var_18
#define var_18 -0x18
	// 83751 var_18          = word ptr -18h ;~ 28AF:1184
#undef var_16
#define var_16 -0x16
	// 83752 var_16          = word ptr -16h ;~ 28AF:1184
#undef var_14
#define var_14 -0x14
	// 83753 var_14          = dword ptr -14h ;~ 28AF:1184
#undef var_10
#define var_10 -0x10
	// 83754 var_10          = word ptr -10h ;~ 28AF:1184
#undef var_e
#define var_e -0x0E
	// 83755 var_E           = word ptr -0Eh ;~ 28AF:1184
#undef var_c
#define var_c -0x0C
	// 83756 var_C           = byte ptr -0Ch ;~ 28AF:1184
#undef var_8
#define var_8 -8
	// 83757 var_8           = byte ptr -8 ;~ 28AF:1184
#undef var_6
#define var_6 -6
	// 83758 var_6           = word ptr -6 ;~ 28AF:1184
#undef var_4
#define var_4 -4
	// 83759 var_4           = word ptr -4 ;~ 28AF:1184
#undef var_2
#define var_2 -2
	// 83760 var_2           = byte ptr -2 ;~ 28AF:1184
#undef arg_0
#define arg_0 6
	// 83761 arg_0           = word ptr  6 ;~ 28AF:1184
#undef arg_2
#define arg_2 8
	// 83762 arg_2           = word ptr  8 ;~ 28AF:1184
ret_28af_1184:
	// 10139 
cs=0x28af;eip=0x001184; 	X(PUSH(bp));	// 83764 push    bp ;~ 28AF:1184
cs=0x28af;eip=0x001185; 	T(MOV(bp, sp));	// 83765 mov     bp, sp ;~ 28AF:1185
cs=0x28af;eip=0x001187; 	T(SUB(sp, 0x32));	// 83766 sub     sp, 32h ;~ 28AF:1187
cs=0x28af;eip=0x00118a; 	X(PUSH(di));	// 83767 push    di ;~ 28AF:118A
cs=0x28af;eip=0x00118b; 	X(PUSH(si));	// 83768 push    si ;~ 28AF:118B
cs=0x28af;eip=0x00118c; 	X(MOV(*(raddr(ss,bp+var_8)), 0));	// 83769 mov     [bp+var_8], 0 ;~ 28AF:118C
cs=0x28af;eip=0x001190; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 83770 mov     ax, [bp+arg_0] ;~ 28AF:1190
cs=0x28af;eip=0x001193; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 83771 mov     dx, [bp+arg_2] ;~ 28AF:1193
cs=0x28af;eip=0x001196; 	T(ADD(ax, 4));	// 83772 add     ax, 4 ;~ 28AF:1196
cs=0x28af;eip=0x001199; 	X(PUSH(dx));	// 83773 push    dx ;~ 28AF:1199
cs=0x28af;eip=0x00119a; 	X(PUSH(ax));	// 83774 push    ax ;~ 28AF:119A
cs=0x28af;eip=0x00119b; 	X(PUSH(cs));	// 83775 push    cs ;~ 28AF:119B
cs=0x28af;eip=0x00119c; 	R(CALL(audioresource_get_word,0));	// 83776 call    near ptr audioresource_get_word ;~ 28AF:119C
cs=0x28af;eip=0x00119f; 	T(ADD(sp, 4));	// 83777 add     sp, 4 ;~ 28AF:119F
cs=0x28af;eip=0x0011a2; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 83778 mov     [bp+var_16], ax ;~ 28AF:11A2
cs=0x28af;eip=0x0011a5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 83779 mov     ax, [bp+arg_0] ;~ 28AF:11A5
cs=0x28af;eip=0x0011a8; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 83780 mov     dx, [bp+arg_2] ;~ 28AF:11A8
cs=0x28af;eip=0x0011ab; 	T(ADD(ax, 6));	// 83781 add     ax, 6 ;~ 28AF:11AB
cs=0x28af;eip=0x0011ae; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), ax));	// 83782 mov     [bp+var_28], ax ;~ 28AF:11AE
cs=0x28af;eip=0x0011b1; 	X(MOV(*(dw*)(raddr(ss,bp+var_26)), dx));	// 83783 mov     [bp+var_26], dx ;~ 28AF:11B1
cs=0x28af;eip=0x0011b4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_16))));	// 83784 mov     ax, [bp+var_16] ;~ 28AF:11B4
cs=0x28af;eip=0x0011b7; 	T(SHL(ax, 1));	// 83785 shl     ax, 1 ;~ 28AF:11B7
cs=0x28af;eip=0x0011b9; 	T(SHL(ax, 1));	// 83786 shl     ax, 1 ;~ 28AF:11B9
cs=0x28af;eip=0x0011bb; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_28))));	// 83787 add     ax, [bp+var_28] ;~ 28AF:11BB
cs=0x28af;eip=0x0011be; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 83788 mov     [bp+var_6], ax ;~ 28AF:11BE
cs=0x28af;eip=0x0011c1; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 83789 mov     [bp+var_4], dx ;~ 28AF:11C1
cs=0x28af;eip=0x0011c4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_16))));	// 83790 mov     ax, [bp+var_16] ;~ 28AF:11C4
cs=0x28af;eip=0x0011c7; 	T(MOV(cl, 3));	// 83791 mov     cl, 3 ;~ 28AF:11C7
cs=0x28af;eip=0x0011c9; 	T(SHL(ax, cl));	// 83792 shl     ax, cl ;~ 28AF:11C9
cs=0x28af;eip=0x0011cb; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 83793 add     ax, [bp+arg_0] ;~ 28AF:11CB
cs=0x28af;eip=0x0011ce; 	T(ADD(ax, 6));	// 83794 add     ax, 6 ;~ 28AF:11CE
cs=0x28af;eip=0x0011d1; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 83795 mov     [bp+var_22], ax ;~ 28AF:11D1
cs=0x28af;eip=0x0011d4; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), dx));	// 83796 mov     [bp+var_20], dx ;~ 28AF:11D4
cs=0x28af;eip=0x0011d7; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a)), 0));	// 83797 mov     [bp+var_2A], 0 ;~ 28AF:11D7
cs=0x28af;eip=0x0011dc; 	R(JMP(loc_383c9));	// 83798 jmp     loc_383C9 ;~ 28AF:11DC
loc_382b0:
	// 10140 
cs=0x28af;eip=0x0011e0; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 83803 inc     word ptr [bp+var_14] ;~ 28AF:11E0
loc_382b3:
	// 10141 
cs=0x28af;eip=0x0011e3; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_14))));	// 83806 les     bx, [bp+var_14] ;~ 28AF:11E3
cs=0x28af;eip=0x0011e6; 	T(TEST(*(raddr(es,bx)), 0x80));	// 83807 test    byte ptr es:[bx], 80h ;~ 28AF:11E6
cs=0x28af;eip=0x0011ea; 	R(JNZ(loc_382b0));	// 83808 jnz     short loc_382B0 ;~ 28AF:11EA
cs=0x28af;eip=0x0011ec; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 83809 inc     word ptr [bp+var_14] ;~ 28AF:11EC
cs=0x28af;eip=0x0011ef; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 83810 mov     bx, word ptr [bp+var_14] ;~ 28AF:11EF
cs=0x28af;eip=0x0011f2; 	T(MOV(al, *(raddr(es,bx))));	// 83811 mov     al, es:[bx] ;~ 28AF:11F2
cs=0x28af;eip=0x0011f5; 	T(SUB(ah, ah));	// 83812 sub     ah, ah ;~ 28AF:11F5
cs=0x28af;eip=0x0011f7; 	T(SUB(ax, 0x0D9));	// 83813 sub     ax, 0D9h ; 'Ù'  ; switch 18 cases ;~ 28AF:11F7
cs=0x28af;eip=0x0011fa; 	T(CMP(ax, 0x11));	// 83814 cmp     ax, 11h ;~ 28AF:11FA
cs=0x28af;eip=0x0011fd; 	R(JBE(loc_382d2));	// 83815 jbe     short loc_382D2 ;~ 28AF:11FD
cs=0x28af;eip=0x0011ff; 	R(JMP(def_382d5));	// 83816 jmp     def_382D5       ; jumptable 000382D5 default case ;~ 28AF:11FF
loc_382d2:
	// 10142 
cs=0x28af;eip=0x001202; 	T(ADD(ax, ax));	// 83820 add     ax, ax ;~ 28AF:1202
cs=0x28af;eip=0x001204; 	T(XCHG(ax, bx));	// 83821 xchg    ax, bx ;~ 28AF:1204
	cs=seg_offset(seg027);
cs=0x28af;eip=0x001205; __disp=*(dw*)(((db*)&jpt_382d5)+bx);
	R(JMP(__dispatch_call));	// 83822 jmp     cs:jpt_382D5[bx] ; switch jump ;~ 28AF:1205
_trkdata_case13:
	// 10143 
cs=0x28af;eip=0x00120a; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_14))), 2));	// 83827 add     word ptr [bp+var_14], 2 ; jumptable 000382D5 case 230 ;~ 28AF:120A
cs=0x28af;eip=0x00120e; 	T(MOV(ax, 4));	// 83828 mov     ax, 4 ;~ 28AF:120E
cs=0x28af;eip=0x001211; 	X(PUSH(ax));	// 83829 push    ax ;~ 28AF:1211
cs=0x28af;eip=0x001212; 	T(ax = bp+var_c);	// 83830 lea     ax, [bp+var_C] ;~ 28AF:1212
cs=0x28af;eip=0x001215; 	X(PUSH(ss));	// 83831 push    ss ;~ 28AF:1215
cs=0x28af;eip=0x001216; 	X(PUSH(ax));	// 83832 push    ax ;~ 28AF:1216
cs=0x28af;eip=0x001217; 	X(PUSH(es));	// 83833 push    es ;~ 28AF:1217
cs=0x28af;eip=0x001218; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 83834 push    word ptr [bp+var_14] ;~ 28AF:1218
cs=0x28af;eip=0x00121b; 	R(CALLF(audioresource_copy_n_bytes,0));	// 83835 call    audioresource_copy_n_bytes ;~ 28AF:121B
cs=0x28af;eip=0x001220; 	T(ADD(sp, 0x0A));	// 83836 add     sp, 0Ah ;~ 28AF:1220
cs=0x28af;eip=0x001223; 	X(PUSH(*(dw*)(raddr(ss,bp+var_26))));	// 83837 push    [bp+var_26] ;~ 28AF:1223
cs=0x28af;eip=0x001226; 	X(PUSH(*(dw*)(raddr(ss,bp+var_28))));	// 83838 push    [bp+var_28] ;~ 28AF:1226
cs=0x28af;eip=0x001229; 	T(ax = bp+var_c);	// 83839 lea     ax, [bp+var_C] ;~ 28AF:1229
cs=0x28af;eip=0x00122c; 	X(PUSH(ax));	// 83840 push    ax ;~ 28AF:122C
cs=0x28af;eip=0x00122d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 83841 push    [bp+var_16] ;~ 28AF:122D
cs=0x28af;eip=0x001230; 	T(SUB(ax, ax));	// 83842 sub     ax, ax ;~ 28AF:1230
cs=0x28af;eip=0x001232; 	X(PUSH(ax));	// 83843 push    ax ;~ 28AF:1232
cs=0x28af;eip=0x001233; 	R(CALLF(audioresource_get_chunk_index,0));	// 83844 call    audioresource_get_chunk_index ;~ 28AF:1233
cs=0x28af;eip=0x001238; 	T(ADD(sp, 0x0A));	// 83845 add     sp, 0Ah ;~ 28AF:1238
cs=0x28af;eip=0x00123b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2e)), ax));	// 83846 mov     [bp+var_2E], ax ;~ 28AF:123B
cs=0x28af;eip=0x00123e; 	T(CMP(ax, 0x0FFFF));	// 83847 cmp     ax, 0FFFFh ;~ 28AF:123E
cs=0x28af;eip=0x001241; 	R(JZ(loc_3834a));	// 83848 jz      short loc_3834A ;~ 28AF:1241
cs=0x28af;eip=0x001243; 	T(SHL(ax, 1));	// 83849 shl     ax, 1 ;~ 28AF:1243
cs=0x28af;eip=0x001245; 	T(SHL(ax, 1));	// 83850 shl     ax, 1 ;~ 28AF:1245
cs=0x28af;eip=0x001247; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_6))));	// 83851 add     ax, [bp+var_6] ;~ 28AF:1247
cs=0x28af;eip=0x00124a; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4))));	// 83852 mov     dx, [bp+var_4] ;~ 28AF:124A
cs=0x28af;eip=0x00124d; 	X(PUSH(dx));	// 83853 push    dx ;~ 28AF:124D
cs=0x28af;eip=0x00124e; 	X(PUSH(ax));	// 83854 push    ax ;~ 28AF:124E
cs=0x28af;eip=0x00124f; 	X(PUSH(cs));	// 83855 push    cs ;~ 28AF:124F
cs=0x28af;eip=0x001250; 	R(CALL(audioresource_get_dword,0));	// 83856 call    near ptr audioresource_get_dword ;~ 28AF:1250
cs=0x28af;eip=0x001253; 	T(ADD(sp, 4));	// 83857 add     sp, 4 ;~ 28AF:1253
cs=0x28af;eip=0x001256; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 83858 mov     [bp+var_1E], ax ;~ 28AF:1256
cs=0x28af;eip=0x001259; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), dx));	// 83859 mov     [bp+var_1C], dx ;~ 28AF:1259
cs=0x28af;eip=0x00125c; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_22))));	// 83860 add     ax, [bp+var_22] ;~ 28AF:125C
cs=0x28af;eip=0x00125f; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_20))));	// 83861 mov     dx, [bp+var_20] ;~ 28AF:125F
cs=0x28af;eip=0x001262; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 83862 mov     [bp+var_10], ax ;~ 28AF:1262
cs=0x28af;eip=0x001265; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), dx));	// 83863 mov     [bp+var_E], dx ;~ 28AF:1265
cs=0x28af;eip=0x001268; 	T(ax = bp+var_10);	// 83864 lea     ax, [bp+var_10] ;~ 28AF:1268
cs=0x28af;eip=0x00126b; 	X(PUSH(ss));	// 83865 push    ss ;~ 28AF:126B
cs=0x28af;eip=0x00126c; 	X(PUSH(ax));	// 83866 push    ax ;~ 28AF:126C
cs=0x28af;eip=0x00126d; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_14+2)))));	// 83867 push    word ptr [bp+var_14+2] ;~ 28AF:126D
cs=0x28af;eip=0x001270; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 83868 push    word ptr [bp+var_14] ;~ 28AF:1270
cs=0x28af;eip=0x001273; 	X(PUSH(cs));	// 83869 push    cs ;~ 28AF:1273
cs=0x28af;eip=0x001274; 	R(CALL(audioresource_copy_4_bytes,0));	// 83870 call    near ptr audioresource_copy_4_bytes ;~ 28AF:1274
cs=0x28af;eip=0x001277; 	T(ADD(sp, 8));	// 83871 add     sp, 8 ;~ 28AF:1277
loc_3834a:
	// 10144 
cs=0x28af;eip=0x00127a; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_14))), 4));	// 83874 add     word ptr [bp+var_14], 4 ;~ 28AF:127A
_parse_trackdata:
	// 10145 
cs=0x28af;eip=0x00127e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 83878 mov     ax, [bp+var_1A] ;~ 28AF:127E
cs=0x28af;eip=0x001281; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_18))));	// 83879 mov     dx, [bp+var_18] ;~ 28AF:1281
cs=0x28af;eip=0x001284; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+var_14))), ax));	// 83880 cmp     word ptr [bp+var_14], ax ;~ 28AF:1284
cs=0x28af;eip=0x001287; 	R(JNC(loc_383c6));	// 83881 jnb     short loc_383C6 ;~ 28AF:1287
cs=0x28af;eip=0x001289; 	R(JMP(loc_382b3));	// 83882 jmp     loc_382B3 ;~ 28AF:1289
_trkdata_case3__5_7__9_11_16_17:
	// 10146 
cs=0x28af;eip=0x00128c; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_14))), 2));	// 83887 add     word ptr [bp+var_14], 2 ; jumptable 000382D5 cases 220-222,224-226,228,233,234 ;~ 28AF:128C
cs=0x28af;eip=0x001290; 	R(JMP(_parse_trackdata));	// 83888 jmp     short _parse_trackdata ;~ 28AF:1290
_trkdata_case6_12:
	// 10147 
cs=0x28af;eip=0x001292; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_14))), 3));	// 83893 add     word ptr [bp+var_14], 3 ; jumptable 000382D5 cases 223,229 ;~ 28AF:1292
cs=0x28af;eip=0x001296; 	R(JMP(_parse_trackdata));	// 83894 jmp     short _parse_trackdata ;~ 28AF:1296
_trkdata_case14_15:
	// 10148 
cs=0x28af;eip=0x001298; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 83899 inc     word ptr [bp+var_14] ; jumptable 000382D5 cases 231,232 ;~ 28AF:1298
cs=0x28af;eip=0x00129b; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_14))));	// 83900 les     bx, [bp+var_14] ;~ 28AF:129B
cs=0x28af;eip=0x00129e; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 83901 inc     word ptr [bp+var_14] ;~ 28AF:129E
cs=0x28af;eip=0x0012a1; 	T(MOV(al, *(raddr(es,bx))));	// 83902 mov     al, es:[bx] ;~ 28AF:12A1
cs=0x28af;eip=0x0012a4; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 83903 mov     [bp+var_2], al ;~ 28AF:12A4
cs=0x28af;eip=0x0012a7; 	T(SUB(ah, ah));	// 83904 sub     ah, ah ;~ 28AF:12A7
cs=0x28af;eip=0x0012a9; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_14))), ax));	// 83905 add     word ptr [bp+var_14], ax ;~ 28AF:12A9
cs=0x28af;eip=0x0012ac; 	R(JMP(_parse_trackdata));	// 83906 jmp     short _parse_trackdata ;~ 28AF:12AC
def_382d5:
	// 10149 
cs=0x28af;eip=0x0012ae; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 83910 mov     bx, word ptr [bp+var_14] ; jumptable 000382D5 default case ;~ 28AF:12AE
cs=0x28af;eip=0x0012b1; 	T(MOV(al, *(raddr(es,bx))));	// 83911 mov     al, es:[bx] ;~ 28AF:12B1
cs=0x28af;eip=0x0012b4; 	T(SUB(ah, ah));	// 83912 sub     ah, ah ;~ 28AF:12B4
cs=0x28af;eip=0x0012b6; 	T(CMP(ax, 0x80));	// 83913 cmp     ax, 80h ; '€' ;~ 28AF:12B6
cs=0x28af;eip=0x0012b9; 	R(JC(loc_3838e));	// 83914 jb      short loc_3838E ;~ 28AF:12B9
cs=0x28af;eip=0x0012bb; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 83915 inc     word ptr [bp+var_14] ;~ 28AF:12BB
loc_3838e:
	// 10150 
cs=0x28af;eip=0x0012be; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 83919 inc     word ptr [bp+var_14] ;~ 28AF:12BE
cs=0x28af;eip=0x0012c1; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 83920 mov     bx, word ptr [bp+var_14] ;~ 28AF:12C1
cs=0x28af;eip=0x0012c4; 	T(TEST(*(raddr(es,bx)), 0x80));	// 83921 test    byte ptr es:[bx], 80h ;~ 28AF:12C4
cs=0x28af;eip=0x0012c8; 	R(JNZ(loc_3838e));	// 83922 jnz     short loc_3838E ;~ 28AF:12C8
_trkdata_case0_1_2_10:
	// 10151 
cs=0x28af;eip=0x0012ca; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 83926 inc     word ptr [bp+var_14] ; jumptable 000382D5 cases 217-219,227 ;~ 28AF:12CA
cs=0x28af;eip=0x0012cd; 	R(JMP(_parse_trackdata));	// 83927 jmp     short _parse_trackdata ;~ 28AF:12CD
ret_28af_12f4:
	// 10152 
cs=0x28af;eip=0x0012f4; 	R(JMP(_parse_trackdata));	// 83950 jmp     short _parse_trackdata ;~ 28AF:12F4
loc_383c6:
	// 10153 
cs=0x28af;eip=0x0012f6; 	X(INC(*(dw*)(raddr(ss,bp+var_2a))));	// 83955 inc     [bp+var_2A] ;~ 28AF:12F6
loc_383c9:
	// 10154 
cs=0x28af;eip=0x0012f9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_16))));	// 83958 mov     ax, [bp+var_16] ;~ 28AF:12F9
cs=0x28af;eip=0x0012fc; 	T(CMP(*(dw*)(raddr(ss,bp+var_2a)), ax));	// 83959 cmp     [bp+var_2A], ax ;~ 28AF:12FC
cs=0x28af;eip=0x0012ff; 	R(JL(loc_383d4));	// 83960 jl      short loc_383D4 ;~ 28AF:12FF
cs=0x28af;eip=0x001301; 	R(JMP(loc_384f4));	// 83961 jmp     loc_384F4 ;~ 28AF:1301
loc_383d4:
	// 10155 
cs=0x28af;eip=0x001304; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2a))));	// 83965 mov     ax, [bp+var_2A] ;~ 28AF:1304
cs=0x28af;eip=0x001307; 	T(SHL(ax, 1));	// 83966 shl     ax, 1 ;~ 28AF:1307
cs=0x28af;eip=0x001309; 	T(SHL(ax, 1));	// 83967 shl     ax, 1 ;~ 28AF:1309
cs=0x28af;eip=0x00130b; 	X(MOV(*(dw*)(raddr(ss,bp+var_32)), ax));	// 83968 mov     [bp+var_32], ax ;~ 28AF:130B
cs=0x28af;eip=0x00130e; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_6))));	// 83969 add     ax, [bp+var_6] ;~ 28AF:130E
cs=0x28af;eip=0x001311; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4))));	// 83970 mov     dx, [bp+var_4] ;~ 28AF:1311
cs=0x28af;eip=0x001314; 	X(PUSH(dx));	// 83971 push    dx ;~ 28AF:1314
cs=0x28af;eip=0x001315; 	X(PUSH(ax));	// 83972 push    ax ;~ 28AF:1315
cs=0x28af;eip=0x001316; 	X(PUSH(cs));	// 83973 push    cs ;~ 28AF:1316
cs=0x28af;eip=0x001317; 	R(CALL(audioresource_get_dword,0));	// 83974 call    near ptr audioresource_get_dword ;~ 28AF:1317
cs=0x28af;eip=0x00131a; 	T(ADD(sp, 4));	// 83975 add     sp, 4 ;~ 28AF:131A
cs=0x28af;eip=0x00131d; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_22))));	// 83976 add     ax, [bp+var_22] ;~ 28AF:131D
cs=0x28af;eip=0x001320; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_20))));	// 83977 mov     dx, [bp+var_20] ;~ 28AF:1320
cs=0x28af;eip=0x001323; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_14))), ax));	// 83978 mov     word ptr [bp+var_14], ax ;~ 28AF:1323
cs=0x28af;eip=0x001326; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_14+2))), dx));	// 83979 mov     word ptr [bp+var_14+2], dx ;~ 28AF:1326
cs=0x28af;eip=0x001329; 	T(ax = bp+var_14);	// 83980 lea     ax, [bp+var_14] ;~ 28AF:1329
cs=0x28af;eip=0x00132c; 	X(PUSH(ss));	// 83981 push    ss ;~ 28AF:132C
cs=0x28af;eip=0x00132d; 	X(PUSH(ax));	// 83982 push    ax ;~ 28AF:132D
cs=0x28af;eip=0x00132e; 	X(PUSH(cs));	// 83983 push    cs ;~ 28AF:132E
cs=0x28af;eip=0x00132f; 	R(CALL(audioresource_get_dword,0));	// 83984 call    near ptr audioresource_get_dword ;~ 28AF:132F
cs=0x28af;eip=0x001332; 	T(ADD(sp, 4));	// 83985 add     sp, 4 ;~ 28AF:1332
cs=0x28af;eip=0x001335; 	T(ADD(ax, *(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 83986 add     ax, word ptr [bp+var_14] ;~ 28AF:1335
cs=0x28af;eip=0x001338; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_14+2)))));	// 83987 mov     dx, word ptr [bp+var_14+2] ;~ 28AF:1338
cs=0x28af;eip=0x00133b; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), ax));	// 83988 mov     [bp+var_1A], ax ;~ 28AF:133B
cs=0x28af;eip=0x00133e; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), dx));	// 83989 mov     [bp+var_18], dx ;~ 28AF:133E
cs=0x28af;eip=0x001341; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_14))), 4));	// 83990 add     word ptr [bp+var_14], 4 ;~ 28AF:1341
cs=0x28af;eip=0x001345; 	T(MOV(ax, 4));	// 83991 mov     ax, 4 ;~ 28AF:1345
cs=0x28af;eip=0x001348; 	X(PUSH(ax));	// 83992 push    ax ;~ 28AF:1348
cs=0x28af;eip=0x001349; 	T(MOV(ax, offset(dseg,ahdr1_1)));	// 83993 mov     ax, offset aHdr1_1 ; "hdr1" ;~ 28AF:1349
cs=0x28af;eip=0x00134c; 	X(PUSH(ds));	// 83994 push    ds ;~ 28AF:134C
cs=0x28af;eip=0x00134d; 	X(PUSH(ax));	// 83995 push    ax ;~ 28AF:134D
cs=0x28af;eip=0x00134e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_32))));	// 83996 mov     ax, [bp+var_32] ;~ 28AF:134E
cs=0x28af;eip=0x001351; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_28))));	// 83997 add     ax, [bp+var_28] ;~ 28AF:1351
cs=0x28af;eip=0x001354; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_26))));	// 83998 mov     dx, [bp+var_26] ;~ 28AF:1354
cs=0x28af;eip=0x001357; 	X(PUSH(dx));	// 83999 push    dx ;~ 28AF:1357
cs=0x28af;eip=0x001358; 	X(PUSH(ax));	// 84000 push    ax ;~ 28AF:1358
cs=0x28af;eip=0x001359; 	T(SUB(ax, ax));	// 84001 sub     ax, ax ;~ 28AF:1359
cs=0x28af;eip=0x00135b; 	X(PUSH(ax));	// 84002 push    ax ;~ 28AF:135B
cs=0x28af;eip=0x00135c; 	R(CALLF(audioresource_compare_chunknames,0));	// 84003 call    audioresource_compare_chunknames ;~ 28AF:135C
cs=0x28af;eip=0x001361; 	T(ADD(sp, 0x0C));	// 84004 add     sp, 0Ch ;~ 28AF:1361
cs=0x28af;eip=0x001364; 	T(OR(ax, ax));	// 84005 or      ax, ax          ; ax = 1, found hdr1 at the counter index ;~ 28AF:1364
cs=0x28af;eip=0x001366; 	R(JNZ(_patch_hdrdata_trackptrs));	// 84006 jnz     short _patch_hdrdata_trackptrs ;~ 28AF:1366
cs=0x28af;eip=0x001368; 	R(JMP(_parse_trackdata));	// 84007 jmp     _parse_trackdata ;~ 28AF:1368
_patch_hdrdata_trackptrs:
	// 10156 
cs=0x28af;eip=0x00136b; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_14))), 2));	// 84011 add     word ptr [bp+var_14], 2 ;~ 28AF:136B
cs=0x28af;eip=0x00136f; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_14))));	// 84012 les     bx, [bp+var_14] ;~ 28AF:136F
cs=0x28af;eip=0x001372; 	T(MOV(al, *(raddr(es,bx))));	// 84013 mov     al, es:[bx] ;~ 28AF:1372
cs=0x28af;eip=0x001375; 	X(MOV(*(raddr(ss,bp+var_24)), al));	// 84014 mov     [bp+var_24], al ;~ 28AF:1375
cs=0x28af;eip=0x001378; 	T(SUB(ah, ah));	// 84015 sub     ah, ah ;~ 28AF:1378
cs=0x28af;eip=0x00137a; 	T(SHL(ax, 1));	// 84016 shl     ax, 1 ;~ 28AF:137A
cs=0x28af;eip=0x00137c; 	T(SHL(ax, 1));	// 84017 shl     ax, 1 ;~ 28AF:137C
cs=0x28af;eip=0x00137e; 	T(INC(ax));	// 84018 inc     ax ;~ 28AF:137E
cs=0x28af;eip=0x00137f; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_14))), ax));	// 84019 add     word ptr [bp+var_14], ax ;~ 28AF:137F
cs=0x28af;eip=0x001382; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 84020 mov     bx, word ptr [bp+var_14] ;~ 28AF:1382
cs=0x28af;eip=0x001385; 	T(MOV(al, *(raddr(es,bx))));	// 84021 mov     al, es:[bx] ;~ 28AF:1385
cs=0x28af;eip=0x001388; 	X(MOV(*(raddr(ss,bp+var_24)), al));	// 84022 mov     [bp+var_24], al ;~ 28AF:1388
cs=0x28af;eip=0x00138b; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 84023 inc     word ptr [bp+var_14] ;~ 28AF:138B
cs=0x28af;eip=0x00138e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), 0));	// 84024 mov     [bp+var_2C], 0 ;~ 28AF:138E
cs=0x28af;eip=0x001393; 	T(SUB(ah, ah));	// 84025 sub     ah, ah ;~ 28AF:1393
cs=0x28af;eip=0x001395; 	T(OR(ax, ax));	// 84026 or      ax, ax ;~ 28AF:1395
cs=0x28af;eip=0x001397; 	R(JNZ(loc_3846c));	// 84027 jnz     short loc_3846C ;~ 28AF:1397
cs=0x28af;eip=0x001399; 	R(JMP(loc_383c6));	// 84028 jmp     loc_383C6 ;~ 28AF:1399
loc_3846c:
	// 10157 
cs=0x28af;eip=0x00139c; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), ax));	// 84032 mov     [bp+var_30], ax ;~ 28AF:139C
cs=0x28af;eip=0x00139f; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_2c))));	// 84033 mov     di, [bp+var_2C] ;~ 28AF:139F
loc_38472:
	// 10158 
cs=0x28af;eip=0x0013a2; 	T(MOV(ax, 4));	// 84036 mov     ax, 4 ;~ 28AF:13A2
cs=0x28af;eip=0x0013a5; 	X(PUSH(ax));	// 84037 push    ax ;~ 28AF:13A5
cs=0x28af;eip=0x0013a6; 	T(ax = bp+var_c);	// 84038 lea     ax, [bp+var_C] ;~ 28AF:13A6
cs=0x28af;eip=0x0013a9; 	X(PUSH(ss));	// 84039 push    ss ;~ 28AF:13A9
cs=0x28af;eip=0x0013aa; 	X(PUSH(ax));	// 84040 push    ax ;~ 28AF:13AA
cs=0x28af;eip=0x0013ab; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_14+2)))));	// 84041 push    word ptr [bp+var_14+2] ;~ 28AF:13AB
cs=0x28af;eip=0x0013ae; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 84042 push    word ptr [bp+var_14] ;~ 28AF:13AE
cs=0x28af;eip=0x0013b1; 	R(CALLF(audioresource_copy_n_bytes,0));	// 84043 call    audioresource_copy_n_bytes ;~ 28AF:13B1
cs=0x28af;eip=0x0013b6; 	T(ADD(sp, 0x0A));	// 84044 add     sp, 0Ah ;~ 28AF:13B6
cs=0x28af;eip=0x0013b9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_26))));	// 84045 push    [bp+var_26] ;~ 28AF:13B9
cs=0x28af;eip=0x0013bc; 	X(PUSH(*(dw*)(raddr(ss,bp+var_28))));	// 84046 push    [bp+var_28] ;~ 28AF:13BC
cs=0x28af;eip=0x0013bf; 	T(ax = bp+var_c);	// 84047 lea     ax, [bp+var_C] ;~ 28AF:13BF
cs=0x28af;eip=0x0013c2; 	X(PUSH(ax));	// 84048 push    ax ;~ 28AF:13C2
cs=0x28af;eip=0x0013c3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 84049 push    [bp+var_16] ;~ 28AF:13C3
cs=0x28af;eip=0x0013c6; 	T(SUB(ax, ax));	// 84050 sub     ax, ax ;~ 28AF:13C6
cs=0x28af;eip=0x0013c8; 	X(PUSH(ax));	// 84051 push    ax ;~ 28AF:13C8
cs=0x28af;eip=0x0013c9; 	R(CALLF(audioresource_get_chunk_index,0));	// 84052 call    audioresource_get_chunk_index ;~ 28AF:13C9
cs=0x28af;eip=0x0013ce; 	T(ADD(sp, 0x0A));	// 84053 add     sp, 0Ah ;~ 28AF:13CE
cs=0x28af;eip=0x0013d1; 	T(MOV(si, ax));	// 84054 mov     si, ax ;~ 28AF:13D1
cs=0x28af;eip=0x0013d3; 	T(CMP(si, 0x0FFFF));	// 84055 cmp     si, 0FFFFh ;~ 28AF:13D3
cs=0x28af;eip=0x0013d6; 	R(JZ(loc_384df));	// 84056 jz      short loc_384DF ;~ 28AF:13D6
cs=0x28af;eip=0x0013d8; 	T(SHL(ax, 1));	// 84057 shl     ax, 1 ;~ 28AF:13D8
cs=0x28af;eip=0x0013da; 	T(SHL(ax, 1));	// 84058 shl     ax, 1 ;~ 28AF:13DA
cs=0x28af;eip=0x0013dc; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_6))));	// 84059 add     ax, [bp+var_6] ;~ 28AF:13DC
cs=0x28af;eip=0x0013df; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4))));	// 84060 mov     dx, [bp+var_4] ;~ 28AF:13DF
cs=0x28af;eip=0x0013e2; 	X(PUSH(dx));	// 84061 push    dx ;~ 28AF:13E2
cs=0x28af;eip=0x0013e3; 	X(PUSH(ax));	// 84062 push    ax ;~ 28AF:13E3
cs=0x28af;eip=0x0013e4; 	X(PUSH(cs));	// 84063 push    cs ;~ 28AF:13E4
cs=0x28af;eip=0x0013e5; 	R(CALL(audioresource_get_dword,0));	// 84064 call    near ptr audioresource_get_dword ;~ 28AF:13E5
cs=0x28af;eip=0x0013e8; 	T(ADD(sp, 4));	// 84065 add     sp, 4 ;~ 28AF:13E8
cs=0x28af;eip=0x0013eb; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 84066 mov     [bp+var_1E], ax ;~ 28AF:13EB
cs=0x28af;eip=0x0013ee; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), dx));	// 84067 mov     [bp+var_1C], dx ;~ 28AF:13EE
cs=0x28af;eip=0x0013f1; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_22))));	// 84068 add     ax, [bp+var_22] ;~ 28AF:13F1
cs=0x28af;eip=0x0013f4; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_20))));	// 84069 mov     dx, [bp+var_20] ;~ 28AF:13F4
cs=0x28af;eip=0x0013f7; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 84070 mov     [bp+var_10], ax ;~ 28AF:13F7
cs=0x28af;eip=0x0013fa; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), dx));	// 84071 mov     [bp+var_E], dx ;~ 28AF:13FA
cs=0x28af;eip=0x0013fd; 	T(ax = bp+var_10);	// 84072 lea     ax, [bp+var_10] ;~ 28AF:13FD
cs=0x28af;eip=0x001400; 	X(PUSH(ss));	// 84073 push    ss ;~ 28AF:1400
cs=0x28af;eip=0x001401; 	X(PUSH(ax));	// 84074 push    ax ;~ 28AF:1401
cs=0x28af;eip=0x001402; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_14+2)))));	// 84075 push    word ptr [bp+var_14+2] ;~ 28AF:1402
cs=0x28af;eip=0x001405; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 84076 push    word ptr [bp+var_14] ;~ 28AF:1405
cs=0x28af;eip=0x001408; 	X(PUSH(cs));	// 84077 push    cs ;~ 28AF:1408
cs=0x28af;eip=0x001409; 	R(CALL(audioresource_copy_4_bytes,0));	// 84078 call    near ptr audioresource_copy_4_bytes ;~ 28AF:1409
cs=0x28af;eip=0x00140c; 	T(ADD(sp, 8));	// 84079 add     sp, 8 ;~ 28AF:140C
loc_384df:
	// 10159 
cs=0x28af;eip=0x00140f; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_14))), 5));	// 84082 add     word ptr [bp+var_14], 5 ;~ 28AF:140F
cs=0x28af;eip=0x001413; 	T(INC(di));	// 84083 inc     di ;~ 28AF:1413
cs=0x28af;eip=0x001414; 	T(MOV(ax, di));	// 84084 mov     ax, di ;~ 28AF:1414
cs=0x28af;eip=0x001416; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_30))));	// 84085 cmp     ax, [bp+var_30] ;~ 28AF:1416
cs=0x28af;eip=0x001419; 	R(JC(loc_38472));	// 84086 jb      short loc_38472 ;~ 28AF:1419
cs=0x28af;eip=0x00141b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), di));	// 84087 mov     [bp+var_2C], di ;~ 28AF:141B
cs=0x28af;eip=0x00141e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2e)), si));	// 84088 mov     [bp+var_2E], si ;~ 28AF:141E
cs=0x28af;eip=0x001421; 	R(JMP(loc_383c6));	// 84089 jmp     loc_383C6 ;~ 28AF:1421
loc_384f4:
	// 10160 
cs=0x28af;eip=0x001424; 	X(POP(si));	// 84093 pop     si ;~ 28AF:1424
cs=0x28af;eip=0x001425; 	X(POP(di));	// 84094 pop     di ;~ 28AF:1425
cs=0x28af;eip=0x001426; 	T(MOV(sp, bp));	// 84095 mov     sp, bp ;~ 28AF:1426
cs=0x28af;eip=0x001428; 	X(POP(bp));	// 84096 pop     bp ;~ 28AF:1428
cs=0x28af;eip=0x001429; 	R(RETF(0));	// 84097 retf ;~ 28AF:1429
audioresource_get_dword:
	// 84105 
#undef var_4
#define var_4 -4
	// 84108 var_4           = word ptr -4 ;~ 28AF:142A
#undef var_2
#define var_2 -2
	// 84109 var_2           = word ptr -2 ;~ 28AF:142A
#undef arg_0
#define arg_0 6
	// 84110 arg_0           = dword ptr  6 ;~ 28AF:142A
ret_28af_142a:
	// 10161 
cs=0x28af;eip=0x00142a; 	X(PUSH(bp));	// 84112 push    bp ;~ 28AF:142A
cs=0x28af;eip=0x00142b; 	T(MOV(bp, sp));	// 84113 mov     bp, sp ;~ 28AF:142B
cs=0x28af;eip=0x00142d; 	T(SUB(sp, 4));	// 84114 sub     sp, 4 ;~ 28AF:142D
cs=0x28af;eip=0x001430; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 84115 les     bx, [bp+arg_0] ;~ 28AF:1430
cs=0x28af;eip=0x001433; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 84116 mov     ax, es:[bx] ;~ 28AF:1433
cs=0x28af;eip=0x001436; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 84117 mov     dx, es:[bx+2] ;~ 28AF:1436
cs=0x28af;eip=0x00143a; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 84118 mov     [bp+var_4], ax ;~ 28AF:143A
cs=0x28af;eip=0x00143d; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 84119 mov     [bp+var_2], dx ;~ 28AF:143D
cs=0x28af;eip=0x001440; 	T(MOV(sp, bp));	// 84120 mov     sp, bp ;~ 28AF:1440
cs=0x28af;eip=0x001442; 	X(POP(bp));	// 84121 pop     bp ;~ 28AF:1442
cs=0x28af;eip=0x001443; 	R(RETF(0));	// 84122 retf ;~ 28AF:1443
audioresource_get_word:
	// 84130 
#undef var_2
#define var_2 -2
	// 84133 var_2           = word ptr -2 ;~ 28AF:1444
#undef arg_0
#define arg_0 6
	// 84134 arg_0           = dword ptr  6 ;~ 28AF:1444
ret_28af_1444:
	// 10162 
cs=0x28af;eip=0x001444; 	X(PUSH(bp));	// 84136 push    bp ;~ 28AF:1444
cs=0x28af;eip=0x001445; 	T(MOV(bp, sp));	// 84137 mov     bp, sp ;~ 28AF:1445
cs=0x28af;eip=0x001447; 	T(SUB(sp, 2));	// 84138 sub     sp, 2 ;~ 28AF:1447
cs=0x28af;eip=0x00144a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 84139 les     bx, [bp+arg_0] ;~ 28AF:144A
cs=0x28af;eip=0x00144d; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 84140 mov     ax, es:[bx] ;~ 28AF:144D
cs=0x28af;eip=0x001450; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 84141 mov     [bp+var_2], ax ;~ 28AF:1450
cs=0x28af;eip=0x001453; 	T(MOV(sp, bp));	// 84142 mov     sp, bp ;~ 28AF:1453
cs=0x28af;eip=0x001455; 	X(POP(bp));	// 84143 pop     bp ;~ 28AF:1455
cs=0x28af;eip=0x001456; 	R(RETF(0));	// 84144 retf ;~ 28AF:1456
audioresource_copy_4_bytes:
	// 84154 
#undef arg_0
#define arg_0 6
	// 84157 arg_0           = dword ptr  6 ;~ 28AF:1458
#undef arg_4
#define arg_4 0x0A
	// 84158 arg_4           = dword ptr  0Ah ;~ 28AF:1458
ret_28af_1458:
	// 10163 
cs=0x28af;eip=0x001458; 	X(PUSH(bp));	// 84160 push    bp ;~ 28AF:1458
cs=0x28af;eip=0x001459; 	T(MOV(bp, sp));	// 84161 mov     bp, sp ;~ 28AF:1459
cs=0x28af;eip=0x00145b; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 84162 les     bx, [bp+arg_4] ;~ 28AF:145B
cs=0x28af;eip=0x00145e; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_4)))));	// 84163 inc     word ptr [bp+arg_4] ;~ 28AF:145E
cs=0x28af;eip=0x001461; 	T(MOV(al, *(raddr(es,bx))));	// 84164 mov     al, es:[bx] ;~ 28AF:1461
cs=0x28af;eip=0x001464; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 84165 les     bx, [bp+arg_0] ;~ 28AF:1464
cs=0x28af;eip=0x001467; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 84166 inc     word ptr [bp+arg_0] ;~ 28AF:1467
cs=0x28af;eip=0x00146a; 	X(MOV(*(raddr(es,bx)), al));	// 84167 mov     es:[bx], al ;~ 28AF:146A
cs=0x28af;eip=0x00146d; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 84168 les     bx, [bp+arg_4] ;~ 28AF:146D
cs=0x28af;eip=0x001470; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_4)))));	// 84169 inc     word ptr [bp+arg_4] ;~ 28AF:1470
cs=0x28af;eip=0x001473; 	T(MOV(al, *(raddr(es,bx))));	// 84170 mov     al, es:[bx] ;~ 28AF:1473
cs=0x28af;eip=0x001476; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 84171 les     bx, [bp+arg_0] ;~ 28AF:1476
cs=0x28af;eip=0x001479; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 84172 inc     word ptr [bp+arg_0] ;~ 28AF:1479
cs=0x28af;eip=0x00147c; 	X(MOV(*(raddr(es,bx)), al));	// 84173 mov     es:[bx], al ;~ 28AF:147C
cs=0x28af;eip=0x00147f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 84174 les     bx, [bp+arg_4] ;~ 28AF:147F
cs=0x28af;eip=0x001482; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_4)))));	// 84175 inc     word ptr [bp+arg_4] ;~ 28AF:1482
cs=0x28af;eip=0x001485; 	T(MOV(al, *(raddr(es,bx))));	// 84176 mov     al, es:[bx] ;~ 28AF:1485
cs=0x28af;eip=0x001488; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 84177 les     bx, [bp+arg_0] ;~ 28AF:1488
cs=0x28af;eip=0x00148b; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 84178 inc     word ptr [bp+arg_0] ;~ 28AF:148B
cs=0x28af;eip=0x00148e; 	X(MOV(*(raddr(es,bx)), al));	// 84179 mov     es:[bx], al ;~ 28AF:148E
cs=0x28af;eip=0x001491; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 84180 les     bx, [bp+arg_4] ;~ 28AF:1491
cs=0x28af;eip=0x001494; 	T(MOV(al, *(raddr(es,bx))));	// 84181 mov     al, es:[bx] ;~ 28AF:1494
cs=0x28af;eip=0x001497; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 84182 les     bx, [bp+arg_0] ;~ 28AF:1497
cs=0x28af;eip=0x00149a; 	X(MOV(*(raddr(es,bx)), al));	// 84183 mov     es:[bx], al ;~ 28AF:149A
cs=0x28af;eip=0x00149d; 	X(POP(bp));	// 84184 pop     bp ;~ 28AF:149D
cs=0x28af;eip=0x00149e; 	R(RETF(0));	// 84185 retf ;~ 28AF:149E
seg027_14a0_proc:
	// 84190 
cs=0x28af;eip=0x0014a0; 	X(PUSH(bp));	// 84190 push    bp ;~ 28AF:14A0
ret_28af_14a1:
	// 10164 
cs=0x28af;eip=0x0014a1; 	T(MOV(bp, sp));	// 84191 mov     bp, sp ;~ 28AF:14A1
cs=0x28af;eip=0x0014a3; 	T(SUB(sp, 8));	// 84192 sub     sp, 8 ;~ 28AF:14A3
cs=0x28af;eip=0x0014a6; 	X(PUSH(di));	// 84193 push    di ;~ 28AF:14A6
cs=0x28af;eip=0x0014a7; 	X(PUSH(si));	// 84194 push    si ;~ 28AF:14A7
cs=0x28af;eip=0x0014a8; 	T(MOV(al, audioflag6));	// 84195 mov     al, audioflag6 ;~ 28AF:14A8
cs=0x28af;eip=0x0014ab; 	T(SUB(ah, ah));	// 84196 sub     ah, ah ;~ 28AF:14AB
cs=0x28af;eip=0x0014ad; 	X(PUSH(ax));	// 84197 push    ax ;~ 28AF:14AD
cs=0x28af;eip=0x0014ae; 	T(MOV(al, byte_40632));	// 84198 mov     al, byte_40632 ;~ 28AF:14AE
cs=0x28af;eip=0x0014b1; 	X(PUSH(ax));	// 84199 push    ax ;~ 28AF:14B1
cs=0x28af;eip=0x0014b2; 	T(MOV(al, audioflag2));	// 84200 mov     al, audioflag2 ;~ 28AF:14B2
cs=0x28af;eip=0x0014b5; 	X(PUSH(ax));	// 84201 push    ax ;~ 28AF:14B5
cs=0x28af;eip=0x0014b6; 	T(MOV(al, byte_40630));	// 84202 mov     al, byte_40630 ;~ 28AF:14B6
cs=0x28af;eip=0x0014b9; 	X(PUSH(ax));	// 84203 push    ax ;~ 28AF:14B9
cs=0x28af;eip=0x0014ba; 	T(MOV(ax, 0x4FA3));	// 84204 mov     ax, 4FA3h ;~ 28AF:14BA
cs=0x28af;eip=0x0014bd; 	X(PUSH(ax));	// 84205 push    ax ;~ 28AF:14BD
cs=0x28af;eip=0x0014be; 	R(CALLF(nopsub_3219d,0));	// 84206 call    nopsub_3219D ;~ 28AF:14BE
cs=0x28af;eip=0x0014c3; 	T(ADD(sp, 0x0A));	// 84207 add     sp, 0Ah ;~ 28AF:14C3
cs=0x28af;eip=0x0014c6; 	T(MOV(al, byte_45948));	// 84208 mov     al, byte_45948 ;~ 28AF:14C6
cs=0x28af;eip=0x0014c9; 	T(SUB(ah, ah));	// 84209 sub     ah, ah ;~ 28AF:14C9
cs=0x28af;eip=0x0014cb; 	X(PUSH(ax));	// 84210 push    ax ;~ 28AF:14CB
cs=0x28af;eip=0x0014cc; 	T(MOV(al, byte_45950));	// 84211 mov     al, byte_45950 ;~ 28AF:14CC
cs=0x28af;eip=0x0014cf; 	X(PUSH(ax));	// 84212 push    ax ;~ 28AF:14CF
cs=0x28af;eip=0x0014d0; 	T(MOV(ax, 0x4FD5));	// 84213 mov     ax, 4FD5h ;~ 28AF:14D0
cs=0x28af;eip=0x0014d3; 	X(PUSH(ax));	// 84214 push    ax ;~ 28AF:14D3
cs=0x28af;eip=0x0014d4; 	R(CALLF(nopsub_3219d,0));	// 84215 call    nopsub_3219D ;~ 28AF:14D4
cs=0x28af;eip=0x0014d9; 	T(ADD(sp, 6));	// 84216 add     sp, 6 ;~ 28AF:14D9
cs=0x28af;eip=0x0014dc; 	T(SUB(si, si));	// 84217 sub     si, si ;~ 28AF:14DC
cs=0x28af;eip=0x0014de; 	T(MOV(di, 0x8214));	// 84218 mov     di, 8214h ;~ 28AF:14DE
cs=0x28af;eip=0x0014e1; 	X(MOV(*(dw*)(raddr(ss,bp-6)), 0x81FC));	// 84219 mov     word ptr [bp-6], 81FCh ;~ 28AF:14E1
loc_385b6:
	// 10165 
cs=0x28af;eip=0x0014e6; 	X(PUSH(*(dw*)(raddr(ds,di+2))));	// 84222 push    word ptr [di+2] ;~ 28AF:14E6
cs=0x28af;eip=0x0014e9; 	X(PUSH(*(dw*)(raddr(ds,di))));	// 84223 push    word ptr [di] ;~ 28AF:14E9
cs=0x28af;eip=0x0014eb; 	T(MOV(bx, *(dw*)(raddr(ss,bp-6))));	// 84224 mov     bx, [bp-6] ;~ 28AF:14EB
cs=0x28af;eip=0x0014ee; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 84225 push    word ptr [bx+2] ;~ 28AF:14EE
cs=0x28af;eip=0x0014f1; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 84226 push    word ptr [bx] ;~ 28AF:14F1
cs=0x28af;eip=0x0014f3; 	X(PUSH(si));	// 84227 push    si ;~ 28AF:14F3
cs=0x28af;eip=0x0014f4; 	T(MOV(ax, 0x4FFB));	// 84228 mov     ax, 4FFBh ;~ 28AF:14F4
cs=0x28af;eip=0x0014f7; 	X(PUSH(ax));	// 84229 push    ax ;~ 28AF:14F7
cs=0x28af;eip=0x0014f8; 	R(CALLF(nopsub_3219d,0));	// 84230 call    nopsub_3219D ;~ 28AF:14F8
cs=0x28af;eip=0x0014fd; 	T(ADD(sp, 0x0C));	// 84231 add     sp, 0Ch ;~ 28AF:14FD
cs=0x28af;eip=0x001500; 	T(ADD(di, 0x4C));	// 84232 add     di, 4Ch ; 'L' ;~ 28AF:1500
cs=0x28af;eip=0x001503; 	X(ADD(*(dw*)(raddr(ss,bp-6)), 0x4C));	// 84233 add     word ptr [bp-6], 4Ch ; 'L' ;~ 28AF:1503
cs=0x28af;eip=0x001507; 	T(INC(si));	// 84234 inc     si ;~ 28AF:1507
cs=0x28af;eip=0x001508; 	T(CMP(si, 0x18));	// 84235 cmp     si, 18h ;~ 28AF:1508
cs=0x28af;eip=0x00150b; 	R(JL(loc_385b6));	// 84236 jl      short loc_385B6 ;~ 28AF:150B
cs=0x28af;eip=0x00150d; 	X(MOV(*(dw*)(raddr(ss,bp-2)), si));	// 84237 mov     [bp-2], si ;~ 28AF:150D
cs=0x28af;eip=0x001510; 	T(MOV(ax, 0x5010));	// 84238 mov     ax, 5010h ;~ 28AF:1510
cs=0x28af;eip=0x001513; 	X(PUSH(ax));	// 84239 push    ax ;~ 28AF:1513
cs=0x28af;eip=0x001514; 	R(CALLF(nopsub_3219d,0));	// 84240 call    nopsub_3219D ;~ 28AF:1514
cs=0x28af;eip=0x001519; 	T(ADD(sp, 2));	// 84241 add     sp, 2 ;~ 28AF:1519
cs=0x28af;eip=0x00151c; 	R(CALLF(flush_stdin,0));	// 84242 call    flush_stdin ;~ 28AF:151C
cs=0x28af;eip=0x001521; 	T(SUB(si, si));	// 84243 sub     si, si ;~ 28AF:1521
cs=0x28af;eip=0x001523; 	T(MOV(di, 0x0A2C2));	// 84244 mov     di, 0A2C2h ;~ 28AF:1523
cs=0x28af;eip=0x001526; 	X(MOV(*(dw*)(raddr(ss,bp-4)), 0x0A2BE));	// 84245 mov     word ptr [bp-4], 0A2BEh ;~ 28AF:1526
cs=0x28af;eip=0x00152b; 	X(MOV(*(dw*)(raddr(ss,bp-8)), 0x0A2B7));	// 84246 mov     word ptr [bp-8], 0A2B7h ;~ 28AF:152B
loc_38600:
	// 10166 
cs=0x28af;eip=0x001530; 	X(PUSH(*(dw*)(raddr(ds,di+2))));	// 84249 push    word ptr [di+2] ;~ 28AF:1530
cs=0x28af;eip=0x001533; 	X(PUSH(*(dw*)(raddr(ds,di))));	// 84250 push    word ptr [di] ;~ 28AF:1533
cs=0x28af;eip=0x001535; 	T(MOV(bx, *(dw*)(raddr(ss,bp-4))));	// 84251 mov     bx, [bp-4] ;~ 28AF:1535
cs=0x28af;eip=0x001538; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 84252 push    word ptr [bx+2] ;~ 28AF:1538
cs=0x28af;eip=0x00153b; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 84253 push    word ptr [bx] ;~ 28AF:153B
cs=0x28af;eip=0x00153d; 	T(MOV(bx, *(dw*)(raddr(ss,bp-8))));	// 84254 mov     bx, [bp-8] ;~ 28AF:153D
cs=0x28af;eip=0x001540; 	T(MOV(al, *(raddr(ds,bx))));	// 84255 mov     al, [bx] ;~ 28AF:1540
cs=0x28af;eip=0x001542; 	T(SUB(ah, ah));	// 84256 sub     ah, ah ;~ 28AF:1542
cs=0x28af;eip=0x001544; 	X(PUSH(ax));	// 84257 push    ax ;~ 28AF:1544
cs=0x28af;eip=0x001545; 	X(PUSH(si));	// 84258 push    si ;~ 28AF:1545
cs=0x28af;eip=0x001546; 	T(MOV(ax, 0x501D));	// 84259 mov     ax, 501Dh ;~ 28AF:1546
cs=0x28af;eip=0x001549; 	X(PUSH(ax));	// 84260 push    ax ;~ 28AF:1549
cs=0x28af;eip=0x00154a; 	R(CALLF(nopsub_3219d,0));	// 84261 call    nopsub_3219D ;~ 28AF:154A
cs=0x28af;eip=0x00154f; 	T(ADD(sp, 0x0E));	// 84262 add     sp, 0Eh ;~ 28AF:154F
cs=0x28af;eip=0x001552; 	T(ADD(di, 0x2E));	// 84263 add     di, 2Eh ; '.' ;~ 28AF:1552
cs=0x28af;eip=0x001555; 	X(ADD(*(dw*)(raddr(ss,bp-4)), 0x2E));	// 84264 add     word ptr [bp-4], 2Eh ; '.' ;~ 28AF:1555
cs=0x28af;eip=0x001559; 	X(ADD(*(dw*)(raddr(ss,bp-8)), 0x2E));	// 84265 add     word ptr [bp-8], 2Eh ; '.' ;~ 28AF:1559
cs=0x28af;eip=0x00155d; 	T(INC(si));	// 84266 inc     si ;~ 28AF:155D
cs=0x28af;eip=0x00155e; 	T(CMP(si, 0x10));	// 84267 cmp     si, 10h ;~ 28AF:155E
cs=0x28af;eip=0x001561; 	R(JL(loc_38600));	// 84268 jl      short loc_38600 ;~ 28AF:1561
cs=0x28af;eip=0x001563; 	X(MOV(*(dw*)(raddr(ss,bp-2)), si));	// 84269 mov     [bp-2], si ;~ 28AF:1563
cs=0x28af;eip=0x001566; 	X(POP(si));	// 84270 pop     si ;~ 28AF:1566
cs=0x28af;eip=0x001567; 	X(POP(di));	// 84271 pop     di ;~ 28AF:1567
cs=0x28af;eip=0x001568; 	T(MOV(sp, bp));	// 84272 mov     sp, bp ;~ 28AF:1568
cs=0x28af;eip=0x00156a; 	X(POP(bp));	// 84273 pop     bp ;~ 28AF:156A
cs=0x28af;eip=0x00156b; 	R(RETF(0));	// 84274 retf ;~ 28AF:156B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return true;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::k_parse_trackdata: 	goto _parse_trackdata;
        case m2c::k_patch_hdrdata_trackptrs: 	goto _patch_hdrdata_trackptrs;
        case m2c::k_trkdata_case0_1_2_10: 	goto _trkdata_case0_1_2_10;
        case m2c::k_trkdata_case13: 	goto _trkdata_case13;
        case m2c::k_trkdata_case14_15: 	goto _trkdata_case14_15;
        case m2c::k_trkdata_case3__5_7__9_11_16_17: 	goto _trkdata_case3__5_7__9_11_16_17;
        case m2c::k_trkdata_case6_12: 	goto _trkdata_case6_12;
        case m2c::kaudio_disable_flag2: 	goto audio_disable_flag2;
        case m2c::kaudio_driver_func3f: 	goto audio_driver_func3f;
        case m2c::kaudio_enable_flag2: 	goto audio_enable_flag2;
        case m2c::kaudio_enable_flag6: 	goto audio_enable_flag6;
        case m2c::kaudio_load_driver: 	goto audio_load_driver;
        case m2c::kaudio_map_song_tracks: 	goto audio_map_song_tracks;
        case m2c::kaudio_toggle_flag2: 	goto audio_toggle_flag2;
        case m2c::kaudio_toggle_flag6: 	goto audio_toggle_flag6;
        case m2c::kaudiodrv_atexit: 	goto audiodrv_atexit;
        case m2c::kdef_382d5: 	goto def_382d5;
        case m2c::kinit_audio_resources: 	goto init_audio_resources;
        case m2c::kload_audio_finalize: 	goto load_audio_finalize;
        case m2c::kload_sfx_file: 	goto load_sfx_file;
        case m2c::kload_sfx_ge: 	goto load_sfx_ge;
        case m2c::kload_voice_file: 	goto load_voice_file;
        case m2c::kloc_370f3: 	goto loc_370f3;
        case m2c::kloc_370fa: 	goto loc_370fa;
        case m2c::kloc_37172: 	goto loc_37172;
        case m2c::kloc_3720f: 	goto loc_3720f;
        case m2c::kloc_37235: 	goto loc_37235;
        case m2c::kloc_37241: 	goto loc_37241;
        case m2c::kloc_37253: 	goto loc_37253;
        case m2c::kloc_37262: 	goto loc_37262;
        case m2c::kloc_37286: 	goto loc_37286;
        case m2c::kloc_3729a: 	goto loc_3729a;
        case m2c::kloc_372e7: 	goto loc_372e7;
        case m2c::kloc_3730f: 	goto loc_3730f;
        case m2c::kloc_3731b: 	goto loc_3731b;
        case m2c::kloc_3732b: 	goto loc_3732b;
        case m2c::kloc_37336: 	goto loc_37336;
        case m2c::kloc_3735a: 	goto loc_3735a;
        case m2c::kloc_373dc: 	goto loc_373dc;
        case m2c::kloc_373f6: 	goto loc_373f6;
        case m2c::kloc_37414: 	goto loc_37414;
        case m2c::kloc_3741e: 	goto loc_3741e;
        case m2c::kloc_37434: 	goto loc_37434;
        case m2c::kloc_37446: 	goto loc_37446;
        case m2c::kloc_37487: 	goto loc_37487;
        case m2c::kloc_3749c: 	goto loc_3749c;
        case m2c::kloc_374a5: 	goto loc_374a5;
        case m2c::kloc_374bc: 	goto loc_374bc;
        case m2c::kloc_374c5: 	goto loc_374c5;
        case m2c::kloc_374ce: 	goto loc_374ce;
        case m2c::kloc_374f7: 	goto loc_374f7;
        case m2c::kloc_37529: 	goto loc_37529;
        case m2c::kloc_37532: 	goto loc_37532;
        case m2c::kloc_37568: 	goto loc_37568;
        case m2c::kloc_3756d: 	goto loc_3756d;
        case m2c::kloc_37576: 	goto loc_37576;
        case m2c::kloc_3757f: 	goto loc_3757f;
        case m2c::kloc_37594: 	goto loc_37594;
        case m2c::kloc_3759d: 	goto loc_3759d;
        case m2c::kloc_375b4: 	goto loc_375b4;
        case m2c::kloc_375cb: 	goto loc_375cb;
        case m2c::kloc_37601: 	goto loc_37601;
        case m2c::kloc_37609: 	goto loc_37609;
        case m2c::kloc_37612: 	goto loc_37612;
        case m2c::kloc_37694: 	goto loc_37694;
        case m2c::kloc_376a7: 	goto loc_376a7;
        case m2c::kloc_376c5: 	goto loc_376c5;
        case m2c::kloc_376df: 	goto loc_376df;
        case m2c::kloc_37702: 	goto loc_37702;
        case m2c::kloc_37716: 	goto loc_37716;
        case m2c::kloc_37728: 	goto loc_37728;
        case m2c::kloc_3772e: 	goto loc_3772e;
        case m2c::kloc_37789: 	goto loc_37789;
        case m2c::kloc_37796: 	goto loc_37796;
        case m2c::kloc_377c6: 	goto loc_377c6;
        case m2c::kloc_377d3: 	goto loc_377d3;
        case m2c::kloc_3781d: 	goto loc_3781d;
        case m2c::kloc_37820: 	goto loc_37820;
        case m2c::kloc_37862: 	goto loc_37862;
        case m2c::kloc_37878: 	goto loc_37878;
        case m2c::kloc_37883: 	goto loc_37883;
        case m2c::kloc_37997: 	goto loc_37997;
        case m2c::kloc_379a2: 	goto loc_379a2;
        case m2c::kloc_379b8: 	goto loc_379b8;
        case m2c::kloc_37a35: 	goto loc_37a35;
        case m2c::kloc_37a7c: 	goto loc_37a7c;
        case m2c::kloc_37ac1: 	goto loc_37ac1;
        case m2c::kloc_37b09: 	goto loc_37b09;
        case m2c::kloc_37b3e: 	goto loc_37b3e;
        case m2c::kloc_37b48: 	goto loc_37b48;
        case m2c::kloc_37bd1: 	goto loc_37bd1;
        case m2c::kloc_37bf9: 	goto loc_37bf9;
        case m2c::kloc_37c22: 	goto loc_37c22;
        case m2c::kloc_37c71: 	goto loc_37c71;
        case m2c::kloc_37c91: 	goto loc_37c91;
        case m2c::kloc_37caf: 	goto loc_37caf;
        case m2c::kloc_37cfa: 	goto loc_37cfa;
        case m2c::kloc_37d31: 	goto loc_37d31;
        case m2c::kloc_37d51: 	goto loc_37d51;
        case m2c::kloc_37d6f: 	goto loc_37d6f;
        case m2c::kloc_37db2: 	goto loc_37db2;
        case m2c::kloc_37dd5: 	goto loc_37dd5;
        case m2c::kloc_37de4: 	goto loc_37de4;
        case m2c::kloc_37ea0: 	goto loc_37ea0;
        case m2c::kloc_37ea7: 	goto loc_37ea7;
        case m2c::kloc_37eb4: 	goto loc_37eb4;
        case m2c::kloc_37eba: 	goto loc_37eba;
        case m2c::kloc_37eeb: 	goto loc_37eeb;
        case m2c::kloc_37f00: 	goto loc_37f00;
        case m2c::kloc_37f13: 	goto loc_37f13;
        case m2c::kloc_37f23: 	goto loc_37f23;
        case m2c::kloc_37f87: 	goto loc_37f87;
        case m2c::kloc_38036: 	goto loc_38036;
        case m2c::kloc_3804f: 	goto loc_3804f;
        case m2c::kloc_3805a: 	goto loc_3805a;
        case m2c::kloc_38075: 	goto loc_38075;
        case m2c::kloc_3807a: 	goto loc_3807a;
        case m2c::kloc_3808a: 	goto loc_3808a;
        case m2c::kloc_380ce: 	goto loc_380ce;
        case m2c::kloc_38137: 	goto loc_38137;
        case m2c::kloc_3814f: 	goto loc_3814f;
        case m2c::kloc_381c8: 	goto loc_381c8;
        case m2c::kloc_38221: 	goto loc_38221;
        case m2c::kloc_382b0: 	goto loc_382b0;
        case m2c::kloc_382b3: 	goto loc_382b3;
        case m2c::kloc_382d2: 	goto loc_382d2;
        case m2c::kloc_3834a: 	goto loc_3834a;
        case m2c::kloc_3838e: 	goto loc_3838e;
        case m2c::kloc_383c6: 	goto loc_383c6;
        case m2c::kloc_383c9: 	goto loc_383c9;
        case m2c::kloc_383d4: 	goto loc_383d4;
        case m2c::kloc_3846c: 	goto loc_3846c;
        case m2c::kloc_38472: 	goto loc_38472;
        case m2c::kloc_384df: 	goto loc_384df;
        case m2c::kloc_384f4: 	goto loc_384f4;
        case m2c::kloc_385b6: 	goto loc_385b6;
        case m2c::kloc_38600: 	goto loc_38600;
        case m2c::knopsub_37456: 	goto nopsub_37456;
        case m2c::knopsub_37898: 	goto nopsub_37898;
        case m2c::knopsub_378ae: 	goto nopsub_378ae;
        case m2c::kret_28af_12f4: 	goto ret_28af_12f4;
        case m2c::kret_28af_142a: 	goto ret_28af_142a;
        case m2c::kret_28af_1444: 	goto ret_28af_1444;
        case m2c::kret_28af_1458: 	goto ret_28af_1458;
        case m2c::kret_28af_146: 	goto ret_28af_146;
        case m2c::kret_28af_14a1: 	goto ret_28af_14a1;
        case m2c::kret_28af_224: 	goto ret_28af_224;
        case m2c::kret_28af_2a0: 	goto ret_28af_2a0;
        case m2c::kret_28af_2e7: 	goto ret_28af_2e7;
        case m2c::kret_28af_2ed: 	goto ret_28af_2ed;
        case m2c::kret_28af_31d: 	goto ret_28af_31d;
        case m2c::kret_28af_32e: 	goto ret_28af_32e;
        case m2c::kret_28af_3a0: 	goto ret_28af_3a0;
        case m2c::kret_28af_42a: 	goto ret_28af_42a;
        case m2c::kret_28af_44a: 	goto ret_28af_44a;
        case m2c::kret_28af_57a: 	goto ret_28af_57a;
        case m2c::kret_28af_5fa: 	goto ret_28af_5fa;
        case m2c::kret_28af_63d: 	goto ret_28af_63d;
        case m2c::kret_28af_680: 	goto ret_28af_680;
        case m2c::kret_28af_798: 	goto ret_28af_798;
        case m2c::kret_28af_7ec: 	goto ret_28af_7ec;
        case m2c::kret_28af_b68: 	goto ret_28af_b68;
        case m2c::kret_28af_bea: 	goto ret_28af_bea;
        case m2c::kret_28af_caa: 	goto ret_28af_caa;
        case m2c::kret_28af_cec: 	goto ret_28af_cec;
        case m2c::kret_28af_df0: 	goto ret_28af_df0;
        case m2c::kret_28af_f6c: 	goto ret_28af_f6c;
        case m2c::kseg027_14a0_proc: 	goto seg027_14a0_proc;
        case m2c::ksub_3736a: 	goto sub_3736a;
        case m2c::ksub_374de: 	goto sub_374de;
        case m2c::ksub_3771e: 	goto sub_3771e;
        case m2c::ksub_38156: 	goto sub_38156;
        case m2c::ksub_38178: 	goto sub_38178;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

