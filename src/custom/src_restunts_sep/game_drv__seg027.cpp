/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool init_audio_resources(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    init_audio_resources:
    _begin:
#undef var_c
#define var_c -0x0C
	// 81099 var_C           = dword ptr -0Ch ;~ 28AF:0002
#undef var_8
#define var_8 -8
	// 81100 var_8           = word ptr -8 ;~ 28AF:0002
#undef var_6
#define var_6 -6
	// 81101 var_6           = word ptr -6 ;~ 28AF:0002
#undef var_4
#define var_4 -4
	// 81102 var_4           = dword ptr -4 ;~ 28AF:0002
#undef arg_0
#define arg_0 6
	// 81103 arg_0           = word ptr  6 ;~ 28AF:0002
#undef arg_2
#define arg_2 8
	// 81104 arg_2           = word ptr  8 ;~ 28AF:0002
#undef arg_4
#define arg_4 0x0A
	// 81105 arg_4           = word ptr  0Ah ;~ 28AF:0002
#undef arg_6
#define arg_6 0x0C
	// 81106 arg_6           = word ptr  0Ch ;~ 28AF:0002
#undef arg_8
#define arg_8 0x0E
	// 81107 arg_8           = word ptr  0Eh ;~ 28AF:0002
cs=0x28af;eip=0x000002; 	X(PUSH(bp));	// 81109 push    bp ;~ 28AF:0002
cs=0x28af;eip=0x000003; 	T(MOV(bp, sp));	// 81110 mov     bp, sp ;~ 28AF:0003
cs=0x28af;eip=0x000005; 	T(SUB(sp, 0x0C));	// 81111 sub     sp, 0Ch ;~ 28AF:0005
cs=0x28af;eip=0x000008; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 81112 push    [bp+arg_8]      ; arg_8 is a string, e.g "TITL" ;~ 28AF:0008
cs=0x28af;eip=0x00000b; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 81113 push    [bp+arg_2] ;~ 28AF:000B
cs=0x28af;eip=0x00000e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 81114 push    [bp+arg_0] ;~ 28AF:000E
cs=0x28af;eip=0x000011; 	J(CALLF(audioresource_find,0));	// 81115 call    audioresource_find ; audio_find_resource? ;~ 28AF:0011
cs=0x28af;eip=0x000016; 	T(ADD(sp, 6));	// 81116 add     sp, 6 ;~ 28AF:0016
cs=0x28af;eip=0x000019; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c))), ax));	// 81117 mov     word ptr [bp+var_C], ax ;~ 28AF:0019
cs=0x28af;eip=0x00001c; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c+2))), dx));	// 81118 mov     word ptr [bp+var_C+2], dx ;~ 28AF:001C
cs=0x28af;eip=0x00001f; 	T(OR(dx, ax));	// 81119 or      dx, ax ;~ 28AF:001F
cs=0x28af;eip=0x000021; 	J(JNZ(loc_370fa));	// 81120 jnz     short loc_370FA ;~ 28AF:0021
loc_370f3:
	// 9480 
cs=0x28af;eip=0x000023; 	T(SUB(ax, ax));	// 81123 sub     ax, ax ;~ 28AF:0023
cs=0x28af;eip=0x000025; 	T(CWD);	// 81124 cwd ;~ 28AF:0025
cs=0x28af;eip=0x000026; 	T(MOV(sp, bp));	// 81125 mov     sp, bp ;~ 28AF:0026
cs=0x28af;eip=0x000028; 	X(POP(bp));	// 81126 pop     bp ;~ 28AF:0028
cs=0x28af;eip=0x000029; 	J(RETF(0));	// 81127 retf ;~ 28AF:0029
loc_370fa:
	// 9481 
cs=0x28af;eip=0x00002a; 	T(MOV(ax, offset(dseg,ahdr1)));	// 81131 mov     ax, offset aHdr1 ; "hdr1" ;~ 28AF:002A
cs=0x28af;eip=0x00002d; 	X(PUSH(ax));	// 81132 push    ax ;~ 28AF:002D
cs=0x28af;eip=0x00002e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_c+2)))));	// 81133 push    word ptr [bp+var_C+2] ;~ 28AF:002E
cs=0x28af;eip=0x000031; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_c)))));	// 81134 push    word ptr [bp+var_C] ;~ 28AF:0031
cs=0x28af;eip=0x000034; 	J(CALLF(audioresource_find,0));	// 81135 call    audioresource_find ; audio_find_resource? look up "hdr1" in the "TITL" chunk? ;~ 28AF:0034
cs=0x28af;eip=0x000039; 	T(ADD(sp, 6));	// 81136 add     sp, 6 ;~ 28AF:0039
cs=0x28af;eip=0x00003c; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 81137 mov     word ptr [bp+var_4], ax ;~ 28AF:003C
cs=0x28af;eip=0x00003f; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 81138 mov     word ptr [bp+var_4+2], dx ;~ 28AF:003F
cs=0x28af;eip=0x000042; 	T(OR(ax, dx));	// 81139 or      ax, dx ;~ 28AF:0042
cs=0x28af;eip=0x000044; 	J(JZ(loc_370f3));	// 81140 jz      short loc_370F3 ;~ 28AF:0044
cs=0x28af;eip=0x000046; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 81141 les     bx, [bp+var_4] ;~ 28AF:0046
cs=0x28af;eip=0x000049; 	T(CMP(*(raddr(es,bx+5)), 1));	// 81142 cmp     byte ptr es:[bx+5], 1 ; check header+5 if we already loaded this ;~ 28AF:0049
cs=0x28af;eip=0x00004e; 	J(JZ(loc_37172));	// 81143 jz      short loc_37172 ;~ 28AF:004E
cs=0x28af;eip=0x000050; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 81144 push    [bp+arg_6] ;~ 28AF:0050
cs=0x28af;eip=0x000053; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 81145 push    [bp+arg_4] ;~ 28AF:0053
cs=0x28af;eip=0x000056; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_c+2)))));	// 81146 push    word ptr [bp+var_C+2] ;~ 28AF:0056
cs=0x28af;eip=0x000059; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_c)))));	// 81147 push    word ptr [bp+var_C] ;~ 28AF:0059
cs=0x28af;eip=0x00005c; 	X(PUSH(cs));	// 81148 push    cs ;~ 28AF:005C
cs=0x28af;eip=0x00005d; 	J(CALL(audio_map_song_instruments,0));	// 81149 call    near ptr audio_map_song_instruments ;~ 28AF:005D
cs=0x28af;eip=0x000060; 	T(ADD(sp, 8));	// 81150 add     sp, 8 ;~ 28AF:0060
cs=0x28af;eip=0x000063; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_c+2)))));	// 81151 push    word ptr [bp+var_C+2] ;~ 28AF:0063
cs=0x28af;eip=0x000066; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_c)))));	// 81152 push    word ptr [bp+var_C] ;~ 28AF:0066
cs=0x28af;eip=0x000069; 	X(PUSH(cs));	// 81153 push    cs ;~ 28AF:0069
cs=0x28af;eip=0x00006a; 	J(CALL(audio_map_song_tracks,0));	// 81154 call    near ptr audio_map_song_tracks ;~ 28AF:006A
cs=0x28af;eip=0x00006d; 	T(ADD(sp, 4));	// 81155 add     sp, 4 ;~ 28AF:006D
cs=0x28af;eip=0x000070; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 81156 les     bx, [bp+var_4] ;~ 28AF:0070
cs=0x28af;eip=0x000073; 	X(MOV(*(raddr(es,bx+5)), 1));	// 81157 mov     byte ptr es:[bx+5], 1 ; set header+5 to 1, = loaded ;~ 28AF:0073
cs=0x28af;eip=0x000078; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_c))));	// 81158 les     bx, [bp+var_C] ;~ 28AF:0078
cs=0x28af;eip=0x00007b; 	T(MOV(al, *(raddr(es,bx+4))));	// 81159 mov     al, es:[bx+4] ;~ 28AF:007B
cs=0x28af;eip=0x00007f; 	T(SUB(ah, ah));	// 81160 sub     ah, ah ;~ 28AF:007F
cs=0x28af;eip=0x000081; 	T(MOV(cl, 3));	// 81161 mov     cl, 3 ;~ 28AF:0081
cs=0x28af;eip=0x000083; 	T(SHL(ax, cl));	// 81162 shl     ax, cl ;~ 28AF:0083
cs=0x28af;eip=0x000085; 	T(ADD(ax, bx));	// 81163 add     ax, bx ;~ 28AF:0085
cs=0x28af;eip=0x000087; 	T(MOV(dx, es));	// 81164 mov     dx, es ;~ 28AF:0087
cs=0x28af;eip=0x000089; 	T(INC(ax));	// 81165 inc     ax ;~ 28AF:0089
cs=0x28af;eip=0x00008a; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 81166 mov     [bp+var_8], ax ;~ 28AF:008A
cs=0x28af;eip=0x00008d; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 81167 mov     [bp+var_6], dx ;~ 28AF:008D
cs=0x28af;eip=0x000090; 	T(ax = bp+var_8);	// 81168 lea     ax, [bp+var_8] ;~ 28AF:0090
cs=0x28af;eip=0x000093; 	X(PUSH(ss));	// 81169 push    ss ;~ 28AF:0093
cs=0x28af;eip=0x000094; 	X(PUSH(ax));	// 81170 push    ax ;~ 28AF:0094
cs=0x28af;eip=0x000095; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 81171 push    word ptr [bp+var_4+2] ;~ 28AF:0095
cs=0x28af;eip=0x000098; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 81172 push    word ptr [bp+var_4] ;~ 28AF:0098
cs=0x28af;eip=0x00009b; 	X(PUSH(cs));	// 81173 push    cs ;~ 28AF:009B
cs=0x28af;eip=0x00009c; 	J(CALL(audioresource_copy_4_bytes,0));	// 81174 call    near ptr audioresource_copy_4_bytes ;~ 28AF:009C
cs=0x28af;eip=0x00009f; 	T(ADD(sp, 8));	// 81175 add     sp, 8 ;~ 28AF:009F
loc_37172:
	// 9482 
cs=0x28af;eip=0x0000a2; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 81178 mov     ax, word ptr [bp+var_4] ;~ 28AF:00A2
cs=0x28af;eip=0x0000a5; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 81179 mov     dx, word ptr [bp+var_4+2] ;~ 28AF:00A5
cs=0x28af;eip=0x0000a8; 	T(MOV(sp, bp));	// 81180 mov     sp, bp ;~ 28AF:00A8
cs=0x28af;eip=0x0000aa; 	X(POP(bp));	// 81181 pop     bp ;~ 28AF:00AA
cs=0x28af;eip=0x0000ab; 	J(RETF(0));	// 81182 retf ;~ 28AF:00AB

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kinit_audio_resources: 	goto init_audio_resources;
        case m2c::kloc_370f3: 	goto loc_370f3;
        case m2c::kloc_370fa: 	goto loc_370fa;
        case m2c::kloc_37172: 	goto loc_37172;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool load_audio_finalize(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    load_audio_finalize:
    _begin:
#undef var_6
#define var_6 -6
	// 81192 var_6           = dword ptr -6 ;~ 28AF:00AC
#undef var_2
#define var_2 -2
	// 81193 var_2           = word ptr -2 ;~ 28AF:00AC
#undef arg_0
#define arg_0 6
	// 81194 arg_0           = dword ptr  6 ;~ 28AF:00AC
cs=0x28af;eip=0x0000ac; 	X(PUSH(bp));	// 81196 push    bp ;~ 28AF:00AC
cs=0x28af;eip=0x0000ad; 	T(MOV(bp, sp));	// 81197 mov     bp, sp ;~ 28AF:00AD
cs=0x28af;eip=0x0000af; 	T(SUB(sp, 6));	// 81198 sub     sp, 6 ;~ 28AF:00AF
cs=0x28af;eip=0x0000b2; 	X(PUSH(si));	// 81199 push    si ;~ 28AF:00B2
cs=0x28af;eip=0x0000b3; 	X(MOV(word_4063a, 1));	// 81200 mov     word_4063A, 1 ;~ 28AF:00B3
cs=0x28af;eip=0x0000b9; 	X(PUSH(cs));	// 81201 push    cs ;~ 28AF:00B9
cs=0x28af;eip=0x0000ba; 	J(CALL(sub_3736a,0));	// 81202 call    near ptr sub_3736A ;~ 28AF:00BA
cs=0x28af;eip=0x0000bd; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 81203 mov     ax, word ptr [bp+arg_0] ;~ 28AF:00BD
cs=0x28af;eip=0x0000c0; 	T(OR(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 81204 or      ax, word ptr [bp+arg_0+2] ;~ 28AF:00C0
cs=0x28af;eip=0x0000c3; 	J(JZ(loc_3720f));	// 81205 jz      short loc_3720F ;~ 28AF:00C3
cs=0x28af;eip=0x0000c5; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 81206 les     bx, [bp+arg_0] ;~ 28AF:00C5
cs=0x28af;eip=0x0000c8; 	T(CMP(*(raddr(es,bx+4)), 0));	// 81207 cmp     byte ptr es:[bx+4], 0 ;~ 28AF:00C8
cs=0x28af;eip=0x0000cd; 	J(JNZ(loc_3720f));	// 81208 jnz     short loc_3720F ;~ 28AF:00CD
cs=0x28af;eip=0x0000cf; 	T(CMP(*(raddr(es,bx+5)), 1));	// 81209 cmp     byte ptr es:[bx+5], 1 ;~ 28AF:00CF
cs=0x28af;eip=0x0000d4; 	J(JNZ(loc_3720f));	// 81210 jnz     short loc_3720F ;~ 28AF:00D4
cs=0x28af;eip=0x0000d6; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 81211 mov     ax, word ptr audiodriverbinary ;~ 28AF:00D6
cs=0x28af;eip=0x0000d9; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 81212 mov     dx, word ptr audiodriverbinary+2 ;~ 28AF:00D9
cs=0x28af;eip=0x0000dd; 	T(ADD(ax, 0x18));	// 81213 add     ax, 18h ;~ 28AF:00DD
cs=0x28af;eip=0x0000e0; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6+2))), dx));	// 81214 mov     word ptr [bp+var_6+2], dx ;~ 28AF:00E0
cs=0x28af;eip=0x0000e3; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6))), ax));	// 81215 mov     word ptr [bp+var_6], ax ;~ 28AF:00E3
cs=0x28af;eip=0x0000e6; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_6))));	// 81216 call    [bp+var_6] ;~ 28AF:00E6
cs=0x28af;eip=0x0000e9; 	X(MOV(word_44d48, 0));	// 81217 mov     word_44D48, 0 ;~ 28AF:00E9
cs=0x28af;eip=0x0000ef; 	X(MOV(word_454ba, 0x80));	// 81218 mov     word_454BA, 80h ; '€' ;~ 28AF:00EF
cs=0x28af;eip=0x0000f5; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 81219 les     bx, [bp+arg_0] ;~ 28AF:00F5
cs=0x28af;eip=0x0000f8; 	T(MOV(al, *(raddr(es,bx+6))));	// 81220 mov     al, es:[bx+6] ;~ 28AF:00F8
cs=0x28af;eip=0x0000fc; 	T(SUB(ah, ah));	// 81221 sub     ah, ah ;~ 28AF:00FC
cs=0x28af;eip=0x0000fe; 	T(SHL(ax, 1));	// 81222 shl     ax, 1 ;~ 28AF:00FE
cs=0x28af;eip=0x000100; 	T(SHL(ax, 1));	// 81223 shl     ax, 1 ;~ 28AF:0100
cs=0x28af;eip=0x000102; 	T(ADD(ax, 7));	// 81224 add     ax, 7 ;~ 28AF:0102
cs=0x28af;eip=0x000105; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 81225 mov     [bp+var_2], ax ;~ 28AF:0105
cs=0x28af;eip=0x000108; 	T(MOV(bx, ax));	// 81226 mov     bx, ax ;~ 28AF:0108
cs=0x28af;eip=0x00010a; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 81227 inc     [bp+var_2] ;~ 28AF:010A
cs=0x28af;eip=0x00010d; 	T(MOV(si, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 81228 mov     si, word ptr [bp+arg_0] ;~ 28AF:010D
cs=0x28af;eip=0x000110; 	T(MOV(al, *(raddr(es,bx+si))));	// 81229 mov     al, es:[bx+si] ;~ 28AF:0110
cs=0x28af;eip=0x000113; 	X(MOV(byte_44290, al));	// 81230 mov     byte_44290, al ;~ 28AF:0113
cs=0x28af;eip=0x000116; 	T(MOV(ax, 0x20));	// 81231 mov     ax, 20h ; ' ' ;~ 28AF:0116
cs=0x28af;eip=0x000119; 	X(PUSH(ax));	// 81232 push    ax ;~ 28AF:0119
cs=0x28af;eip=0x00011a; 	T(MOV(al, byte_45950));	// 81233 mov     al, byte_45950 ;~ 28AF:011A
cs=0x28af;eip=0x00011d; 	T(SUB(ah, ah));	// 81234 sub     ah, ah ;~ 28AF:011D
cs=0x28af;eip=0x00011f; 	X(PUSH(ax));	// 81235 push    ax ;~ 28AF:011F
cs=0x28af;eip=0x000120; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 81236 push    [bp+var_2] ;~ 28AF:0120
cs=0x28af;eip=0x000123; 	X(PUSH(es));	// 81237 push    es ;~ 28AF:0123
cs=0x28af;eip=0x000124; 	X(PUSH(si));	// 81238 push    si ;~ 28AF:0124
cs=0x28af;eip=0x000125; 	T(MOV(al, byte_44290));	// 81239 mov     al, byte_44290 ;~ 28AF:0125
cs=0x28af;eip=0x000128; 	T(DEC(ax));	// 81240 dec     ax ;~ 28AF:0128
cs=0x28af;eip=0x000129; 	X(PUSH(ax));	// 81241 push    ax ;~ 28AF:0129
cs=0x28af;eip=0x00012a; 	T(SUB(ax, ax));	// 81242 sub     ax, ax ;~ 28AF:012A
cs=0x28af;eip=0x00012c; 	X(PUSH(ax));	// 81243 push    ax ;~ 28AF:012C
cs=0x28af;eip=0x00012d; 	X(PUSH(cs));	// 81244 push    cs ;~ 28AF:012D
cs=0x28af;eip=0x00012e; 	J(CALL(audio_init_chunk,0));	// 81245 call    near ptr audio_init_chunk ;~ 28AF:012E
cs=0x28af;eip=0x000131; 	T(ADD(sp, 0x0E));	// 81246 add     sp, 0Eh ;~ 28AF:0131
cs=0x28af;eip=0x000134; 	X(MOV(byte_40632, 1));	// 81247 mov     byte_40632, 1 ;~ 28AF:0134
cs=0x28af;eip=0x000139; 	X(MOV(word_4063a, 0));	// 81248 mov     word_4063A, 0 ;~ 28AF:0139
loc_3720f:
	// 9483 
cs=0x28af;eip=0x00013f; 	X(POP(si));	// 81252 pop     si ;~ 28AF:013F
cs=0x28af;eip=0x000140; 	T(MOV(sp, bp));	// 81253 mov     sp, bp ;~ 28AF:0140
cs=0x28af;eip=0x000142; 	X(POP(bp));	// 81254 pop     bp ;~ 28AF:0142
cs=0x28af;eip=0x000143; 	J(RETF(0));	// 81255 retf ;~ 28AF:0143

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kload_audio_finalize: 	goto load_audio_finalize;
        case m2c::kloc_3720f: 	goto loc_3720f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool audio_unk(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    audio_unk:
    _begin:
#undef var_c
#define var_c -0x0C
	// 81268 var_C           = word ptr -0Ch ;~ 28AF:0146
#undef var_a
#define var_a -0x0A
	// 81269 var_A           = dword ptr -0Ah ;~ 28AF:0146
#undef var_4
#define var_4 -4
	// 81270 var_4           = word ptr -4 ;~ 28AF:0146
#undef var_2
#define var_2 -2
	// 81271 var_2           = word ptr -2 ;~ 28AF:0146
cs=0x28af;eip=0x000146; 	X(PUSH(bp));	// 81273 push    bp ;~ 28AF:0146
cs=0x28af;eip=0x000147; 	T(MOV(bp, sp));	// 81274 mov     bp, sp ;~ 28AF:0147
cs=0x28af;eip=0x000149; 	T(SUB(sp, 0x0C));	// 81275 sub     sp, 0Ch ;~ 28AF:0149
cs=0x28af;eip=0x00014c; 	X(PUSH(di));	// 81276 push    di ;~ 28AF:014C
cs=0x28af;eip=0x00014d; 	X(PUSH(si));	// 81277 push    si ;~ 28AF:014D
cs=0x28af;eip=0x00014e; 	X(MOV(byte_40630, 1));	// 81278 mov     byte_40630, 1 ;~ 28AF:014E
cs=0x28af;eip=0x000153; 	X(MOV(word_4063a, 1));	// 81279 mov     word_4063A, 1 ;~ 28AF:0153
cs=0x28af;eip=0x000159; 	T(CMP(byte_40634, 0));	// 81280 cmp     byte_40634, 0 ;~ 28AF:0159
cs=0x28af;eip=0x00015e; 	J(JNZ(loc_37262));	// 81281 jnz     short loc_37262 ;~ 28AF:015E
cs=0x28af;eip=0x000160; 	T(SUB(si, si));	// 81282 sub     si, si ;~ 28AF:0160
cs=0x28af;eip=0x000162; 	T(MOV(di, 0x8224));	// 81283 mov     di, 8224h ;~ 28AF:0162
loc_37235:
	// 9484 
cs=0x28af;eip=0x000165; 	T(CMP(audioflag6, 1));	// 81286 cmp     audioflag6, 1 ;~ 28AF:0165
cs=0x28af;eip=0x00016a; 	J(JZ(loc_37241));	// 81287 jz      short loc_37241 ;~ 28AF:016A
cs=0x28af;eip=0x00016c; 	T(CMP(si, 0x10));	// 81288 cmp     si, 10h ;~ 28AF:016C
cs=0x28af;eip=0x00016f; 	J(JGE(loc_37253));	// 81289 jge     short loc_37253 ;~ 28AF:016F
loc_37241:
	// 9485 
cs=0x28af;eip=0x000171; 	T(MOV(al, *(raddr(ds,di))));	// 81292 mov     al, [di] ;~ 28AF:0171
cs=0x28af;eip=0x000173; 	X(MOV(*((&byte_428be)+si), al));	// 81293 mov     byte_428BE[si], al ;~ 28AF:0173
cs=0x28af;eip=0x000177; 	T(SUB(ax, ax));	// 81294 sub     ax, ax ;~ 28AF:0177
cs=0x28af;eip=0x000179; 	X(PUSH(ax));	// 81295 push    ax ;~ 28AF:0179
cs=0x28af;eip=0x00017a; 	X(PUSH(si));	// 81296 push    si ;~ 28AF:017A
cs=0x28af;eip=0x00017b; 	J(CALLF(audio_unk2,0));	// 81297 call    audio_unk2 ;~ 28AF:017B
cs=0x28af;eip=0x000180; 	T(ADD(sp, 4));	// 81298 add     sp, 4 ;~ 28AF:0180
loc_37253:
	// 9486 
cs=0x28af;eip=0x000183; 	T(ADD(di, 0x4C));	// 81301 add     di, 4Ch ; 'L' ;~ 28AF:0183
cs=0x28af;eip=0x000186; 	T(INC(si));	// 81302 inc     si ;~ 28AF:0186
cs=0x28af;eip=0x000187; 	T(CMP(si, 0x18));	// 81303 cmp     si, 18h ;~ 28AF:0187
cs=0x28af;eip=0x00018a; 	J(JL(loc_37235));	// 81304 jl      short loc_37235 ;~ 28AF:018A
cs=0x28af;eip=0x00018c; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), si));	// 81305 mov     [bp+var_2], si ;~ 28AF:018C
cs=0x28af;eip=0x00018f; 	J(JMP(loc_37286));	// 81306 jmp     short loc_37286 ;~ 28AF:018F
loc_37262:
	// 9487 
cs=0x28af;eip=0x000192; 	X(MOV(byte_40639, 0));	// 81311 mov     byte_40639, 0 ;~ 28AF:0192
cs=0x28af;eip=0x000197; 	T(MOV(ax, offset(dseg,unk_40636)));	// 81312 mov     ax, offset unk_40636 ;~ 28AF:0197
cs=0x28af;eip=0x00019a; 	X(PUSH(ds));	// 81313 push    ds ;~ 28AF:019A
cs=0x28af;eip=0x00019b; 	X(PUSH(ax));	// 81314 push    ax ;~ 28AF:019B
cs=0x28af;eip=0x00019c; 	T(MOV(ax, 4));	// 81315 mov     ax, 4 ;~ 28AF:019C
cs=0x28af;eip=0x00019f; 	X(PUSH(ax));	// 81316 push    ax ;~ 28AF:019F
cs=0x28af;eip=0x0001a0; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 81317 mov     ax, word ptr audiodriverbinary ;~ 28AF:01A0
cs=0x28af;eip=0x0001a3; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 81318 mov     dx, word ptr audiodriverbinary+2 ;~ 28AF:01A3
cs=0x28af;eip=0x0001a7; 	T(ADD(ax, 0x3F));	// 81319 add     ax, 3Fh ; '?' ;~ 28AF:01A7
cs=0x28af;eip=0x0001aa; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a+2))), dx));	// 81320 mov     word ptr [bp+var_A+2], dx ;~ 28AF:01AA
cs=0x28af;eip=0x0001ad; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a))), ax));	// 81321 mov     word ptr [bp+var_A], ax ;~ 28AF:01AD
cs=0x28af;eip=0x0001b0; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_a))));	// 81322 call    [bp+var_A] ;~ 28AF:01B0
cs=0x28af;eip=0x0001b3; 	T(ADD(sp, 6));	// 81323 add     sp, 6 ;~ 28AF:01B3
loc_37286:
	// 9488 
cs=0x28af;eip=0x0001b6; 	T(CMP(byte_40634, 0));	// 81326 cmp     byte_40634, 0 ;~ 28AF:01B6
cs=0x28af;eip=0x0001bb; 	J(JNZ(loc_372e7));	// 81327 jnz     short loc_372E7 ;~ 28AF:01BB
cs=0x28af;eip=0x0001bd; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x10));	// 81328 mov     [bp+var_2], 10h ;~ 28AF:01BD
cs=0x28af;eip=0x0001c2; 	T(MOV(di, 0x0A2B6));	// 81329 mov     di, 0A2B6h ;~ 28AF:01C2
cs=0x28af;eip=0x0001c5; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 0x10));	// 81330 mov     [bp+var_C], 10h ;~ 28AF:01C5
loc_3729a:
	// 9489 
cs=0x28af;eip=0x0001ca; 	T(MOV(si, di));	// 81333 mov     si, di ;~ 28AF:01CA
cs=0x28af;eip=0x0001cc; 	X(PUSH(*(dw*)(raddr(ds,si+0x12))));	// 81334 push    word ptr [si+12h] ;~ 28AF:01CC
cs=0x28af;eip=0x0001cf; 	X(PUSH(*(dw*)(raddr(ds,si+0x10))));	// 81335 push    word ptr [si+10h] ;~ 28AF:01CF
cs=0x28af;eip=0x0001d2; 	X(PUSH(*(dw*)(raddr(ds,si+0x2A))));	// 81336 push    word ptr [si+2Ah] ;~ 28AF:01D2
cs=0x28af;eip=0x0001d5; 	X(PUSH(si));	// 81337 push    si ;~ 28AF:01D5
cs=0x28af;eip=0x0001d6; 	T(MOV(al, *(raddr(ds,si+0x2C))));	// 81338 mov     al, [si+2Ch] ;~ 28AF:01D6
cs=0x28af;eip=0x0001d9; 	T(SUB(ah, ah));	// 81339 sub     ah, ah ;~ 28AF:01D9
cs=0x28af;eip=0x0001db; 	X(PUSH(ax));	// 81340 push    ax ;~ 28AF:01DB
cs=0x28af;eip=0x0001dc; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 81341 mov     ax, word ptr audiodriverbinary ;~ 28AF:01DC
cs=0x28af;eip=0x0001df; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 81342 mov     dx, word ptr audiodriverbinary+2 ;~ 28AF:01DF
cs=0x28af;eip=0x0001e3; 	T(ADD(ax, 0x27));	// 81343 add     ax, 27h ; ''' ;~ 28AF:01E3
cs=0x28af;eip=0x0001e6; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a+2))), dx));	// 81344 mov     word ptr [bp+var_A+2], dx ;~ 28AF:01E6
cs=0x28af;eip=0x0001e9; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a))), ax));	// 81345 mov     word ptr [bp+var_A], ax ;~ 28AF:01E9
cs=0x28af;eip=0x0001ec; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_a))));	// 81346 call    [bp+var_A] ;~ 28AF:01EC
cs=0x28af;eip=0x0001ef; 	T(ADD(sp, 0x0A));	// 81347 add     sp, 0Ah ;~ 28AF:01EF
cs=0x28af;eip=0x0001f2; 	T(ADD(di, 0x2E));	// 81348 add     di, 2Eh ; '.' ;~ 28AF:01F2
cs=0x28af;eip=0x0001f5; 	X(DEC(*(dw*)(raddr(ss,bp+var_c))));	// 81349 dec     [bp+var_C] ;~ 28AF:01F5
cs=0x28af;eip=0x0001f8; 	J(JNZ(loc_3729a));	// 81350 jnz     short loc_3729A ;~ 28AF:01F8
cs=0x28af;eip=0x0001fa; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), si));	// 81351 mov     [bp+var_4], si ;~ 28AF:01FA
cs=0x28af;eip=0x0001fd; 	T(MOV(ax, 0x0A2B6));	// 81352 mov     ax, 0A2B6h ;~ 28AF:01FD
cs=0x28af;eip=0x000200; 	X(PUSH(ax));	// 81353 push    ax ;~ 28AF:0200
cs=0x28af;eip=0x000201; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 81354 mov     ax, word ptr audiodriverbinary ;~ 28AF:0201
cs=0x28af;eip=0x000204; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 81355 mov     dx, word ptr audiodriverbinary+2 ;~ 28AF:0204
cs=0x28af;eip=0x000208; 	T(ADD(ax, 0x30));	// 81356 add     ax, 30h ; '0' ;~ 28AF:0208
cs=0x28af;eip=0x00020b; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a+2))), dx));	// 81357 mov     word ptr [bp+var_A+2], dx ;~ 28AF:020B
cs=0x28af;eip=0x00020e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a))), ax));	// 81358 mov     word ptr [bp+var_A], ax ;~ 28AF:020E
cs=0x28af;eip=0x000211; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_a))));	// 81359 call    [bp+var_A] ;~ 28AF:0211
cs=0x28af;eip=0x000214; 	T(ADD(sp, 2));	// 81360 add     sp, 2 ;~ 28AF:0214
loc_372e7:
	// 9490 
cs=0x28af;eip=0x000217; 	X(MOV(word_4063a, 0));	// 81363 mov     word_4063A, 0 ;~ 28AF:0217
cs=0x28af;eip=0x00021d; 	X(POP(si));	// 81364 pop     si ;~ 28AF:021D
cs=0x28af;eip=0x00021e; 	X(POP(di));	// 81365 pop     di ;~ 28AF:021E
cs=0x28af;eip=0x00021f; 	T(MOV(sp, bp));	// 81366 mov     sp, bp ;~ 28AF:021F
cs=0x28af;eip=0x000221; 	X(POP(bp));	// 81367 pop     bp ;~ 28AF:0221
cs=0x28af;eip=0x000222; 	J(RETF(0));	// 81368 retf ;~ 28AF:0222

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kaudio_unk: 	goto audio_unk;
        case m2c::kloc_37235: 	goto loc_37235;
        case m2c::kloc_37241: 	goto loc_37241;
        case m2c::kloc_37253: 	goto loc_37253;
        case m2c::kloc_37262: 	goto loc_37262;
        case m2c::kloc_37286: 	goto loc_37286;
        case m2c::kloc_3729a: 	goto loc_3729a;
        case m2c::kloc_372e7: 	goto loc_372e7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_372f4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_372f4:
    _begin:
#undef var_6
#define var_6 -6
	// 81381 var_6           = dword ptr -6 ;~ 28AF:0224
#undef var_2
#define var_2 -2
	// 81382 var_2           = word ptr -2 ;~ 28AF:0224
cs=0x28af;eip=0x000224; 	X(PUSH(bp));	// 81384 push    bp ;~ 28AF:0224
cs=0x28af;eip=0x000225; 	T(MOV(bp, sp));	// 81385 mov     bp, sp ;~ 28AF:0225
cs=0x28af;eip=0x000227; 	T(SUB(sp, 6));	// 81386 sub     sp, 6 ;~ 28AF:0227
cs=0x28af;eip=0x00022a; 	X(PUSH(si));	// 81387 push    si ;~ 28AF:022A
cs=0x28af;eip=0x00022b; 	X(MOV(byte_40630, 1));	// 81388 mov     byte_40630, 1 ;~ 28AF:022B
cs=0x28af;eip=0x000230; 	X(MOV(word_4063a, 1));	// 81389 mov     word_4063A, 1 ;~ 28AF:0230
cs=0x28af;eip=0x000236; 	T(CMP(byte_40634, 0));	// 81390 cmp     byte_40634, 0 ;~ 28AF:0236
cs=0x28af;eip=0x00023b; 	J(JNZ(loc_37336));	// 81391 jnz     short loc_37336 ;~ 28AF:023B
cs=0x28af;eip=0x00023d; 	T(SUB(si, si));	// 81392 sub     si, si ;~ 28AF:023D
loc_3730f:
	// 9491 
cs=0x28af;eip=0x00023f; 	T(CMP(audioflag6, 1));	// 81395 cmp     audioflag6, 1 ;~ 28AF:023F
cs=0x28af;eip=0x000244; 	J(JZ(loc_3731b));	// 81396 jz      short loc_3731B ;~ 28AF:0244
cs=0x28af;eip=0x000246; 	T(CMP(si, 0x10));	// 81397 cmp     si, 10h ;~ 28AF:0246
cs=0x28af;eip=0x000249; 	J(JGE(loc_3732b));	// 81398 jge     short loc_3732B ;~ 28AF:0249
loc_3731b:
	// 9492 
cs=0x28af;eip=0x00024b; 	T(MOV(al, *((&byte_428be)+si)));	// 81401 mov     al, byte_428BE[si] ;~ 28AF:024B
cs=0x28af;eip=0x00024f; 	T(SUB(ah, ah));	// 81402 sub     ah, ah ;~ 28AF:024F
cs=0x28af;eip=0x000251; 	X(PUSH(ax));	// 81403 push    ax ;~ 28AF:0251
cs=0x28af;eip=0x000252; 	X(PUSH(si));	// 81404 push    si ;~ 28AF:0252
cs=0x28af;eip=0x000253; 	J(CALLF(audio_unk2,0));	// 81405 call    audio_unk2 ;~ 28AF:0253
cs=0x28af;eip=0x000258; 	T(ADD(sp, 4));	// 81406 add     sp, 4 ;~ 28AF:0258
loc_3732b:
	// 9493 
cs=0x28af;eip=0x00025b; 	T(INC(si));	// 81409 inc     si ;~ 28AF:025B
cs=0x28af;eip=0x00025c; 	T(CMP(si, 0x18));	// 81410 cmp     si, 18h ;~ 28AF:025C
cs=0x28af;eip=0x00025f; 	J(JL(loc_3730f));	// 81411 jl      short loc_3730F ;~ 28AF:025F
cs=0x28af;eip=0x000261; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), si));	// 81412 mov     [bp+var_2], si ;~ 28AF:0261
cs=0x28af;eip=0x000264; 	J(JMP(loc_3735a));	// 81413 jmp     short loc_3735A ;~ 28AF:0264
loc_37336:
	// 9494 
cs=0x28af;eip=0x000266; 	X(MOV(byte_40639, 0x64));	// 81417 mov     byte_40639, 64h ; 'd' ;~ 28AF:0266
cs=0x28af;eip=0x00026b; 	T(MOV(ax, offset(dseg,unk_40636)));	// 81418 mov     ax, offset unk_40636 ;~ 28AF:026B
cs=0x28af;eip=0x00026e; 	X(PUSH(ds));	// 81419 push    ds ;~ 28AF:026E
cs=0x28af;eip=0x00026f; 	X(PUSH(ax));	// 81420 push    ax ;~ 28AF:026F
cs=0x28af;eip=0x000270; 	T(MOV(ax, 4));	// 81421 mov     ax, 4 ;~ 28AF:0270
cs=0x28af;eip=0x000273; 	X(PUSH(ax));	// 81422 push    ax ;~ 28AF:0273
cs=0x28af;eip=0x000274; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 81423 mov     ax, word ptr audiodriverbinary ;~ 28AF:0274
cs=0x28af;eip=0x000277; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 81424 mov     dx, word ptr audiodriverbinary+2 ;~ 28AF:0277
cs=0x28af;eip=0x00027b; 	T(ADD(ax, 0x3F));	// 81425 add     ax, 3Fh ; '?' ;~ 28AF:027B
cs=0x28af;eip=0x00027e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6+2))), dx));	// 81426 mov     word ptr [bp+var_6+2], dx ;~ 28AF:027E
cs=0x28af;eip=0x000281; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6))), ax));	// 81427 mov     word ptr [bp+var_6], ax ;~ 28AF:0281
cs=0x28af;eip=0x000284; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_6))));	// 81428 call    [bp+var_6] ;~ 28AF:0284
cs=0x28af;eip=0x000287; 	T(ADD(sp, 6));	// 81429 add     sp, 6 ;~ 28AF:0287
loc_3735a:
	// 9495 
cs=0x28af;eip=0x00028a; 	X(MOV(word_4063a, 0));	// 81432 mov     word_4063A, 0 ;~ 28AF:028A
cs=0x28af;eip=0x000290; 	X(MOV(byte_40630, 0));	// 81433 mov     byte_40630, 0 ;~ 28AF:0290
cs=0x28af;eip=0x000295; 	X(POP(si));	// 81434 pop     si ;~ 28AF:0295
cs=0x28af;eip=0x000296; 	T(MOV(sp, bp));	// 81435 mov     sp, bp ;~ 28AF:0296
cs=0x28af;eip=0x000298; 	X(POP(bp));	// 81436 pop     bp ;~ 28AF:0298
cs=0x28af;eip=0x000299; 	J(RETF(0));	// 81437 retf ;~ 28AF:0299

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_3730f: 	goto loc_3730f;
        case m2c::kloc_3731b: 	goto loc_3731b;
        case m2c::kloc_3732b: 	goto loc_3732b;
        case m2c::kloc_37336: 	goto loc_37336;
        case m2c::kloc_3735a: 	goto loc_3735a;
        case m2c::ksub_372f4: 	goto sub_372f4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3736a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3736a:
    _begin:
cs=0x28af;eip=0x00029a; 	X(MOV(word_4063a, 1));	// 81446 mov     word_4063A, 1 ;~ 28AF:029A
cs=0x28af;eip=0x0002a0; 	X(MOV(byte_40632, 0));	// 81447 mov     byte_40632, 0 ;~ 28AF:02A0
cs=0x28af;eip=0x0002a5; 	T(MOV(ax, 0x0F));	// 81448 mov     ax, 0Fh ;~ 28AF:02A5
cs=0x28af;eip=0x0002a8; 	X(PUSH(ax));	// 81449 push    ax ;~ 28AF:02A8
cs=0x28af;eip=0x0002a9; 	T(SUB(ax, ax));	// 81450 sub     ax, ax ;~ 28AF:02A9
cs=0x28af;eip=0x0002ab; 	X(PUSH(ax));	// 81451 push    ax ;~ 28AF:02AB
cs=0x28af;eip=0x0002ac; 	J(CALLF(audio_driver_func1e,0));	// 81452 call    audio_driver_func1E ;~ 28AF:02AC
cs=0x28af;eip=0x0002b1; 	T(ADD(sp, 4));	// 81453 add     sp, 4 ;~ 28AF:02B1
cs=0x28af;eip=0x0002b4; 	T(SUB(ax, ax));	// 81454 sub     ax, ax ;~ 28AF:02B4
cs=0x28af;eip=0x0002b6; 	X(PUSH(ax));	// 81455 push    ax ;~ 28AF:02B6
cs=0x28af;eip=0x0002b7; 	T(MOV(al, byte_45950));	// 81456 mov     al, byte_45950 ;~ 28AF:02B7
cs=0x28af;eip=0x0002ba; 	T(SUB(ah, ah));	// 81457 sub     ah, ah ;~ 28AF:02BA
cs=0x28af;eip=0x0002bc; 	X(PUSH(ax));	// 81458 push    ax ;~ 28AF:02BC
cs=0x28af;eip=0x0002bd; 	T(SUB(ax, ax));	// 81459 sub     ax, ax ;~ 28AF:02BD
cs=0x28af;eip=0x0002bf; 	X(PUSH(ax));	// 81460 push    ax ;~ 28AF:02BF
cs=0x28af;eip=0x0002c0; 	X(PUSH(ax));	// 81461 push    ax ;~ 28AF:02C0
cs=0x28af;eip=0x0002c1; 	X(PUSH(ax));	// 81462 push    ax ;~ 28AF:02C1
cs=0x28af;eip=0x0002c2; 	T(MOV(ax, 0x0F));	// 81463 mov     ax, 0Fh ;~ 28AF:02C2
cs=0x28af;eip=0x0002c5; 	X(PUSH(ax));	// 81464 push    ax ;~ 28AF:02C5
cs=0x28af;eip=0x0002c6; 	T(SUB(ax, ax));	// 81465 sub     ax, ax ;~ 28AF:02C6
cs=0x28af;eip=0x0002c8; 	X(PUSH(ax));	// 81466 push    ax ;~ 28AF:02C8
cs=0x28af;eip=0x0002c9; 	X(PUSH(cs));	// 81467 push    cs ;~ 28AF:02C9
cs=0x28af;eip=0x0002ca; 	J(CALL(audio_init_chunk,0));	// 81468 call    near ptr audio_init_chunk ;~ 28AF:02CA
cs=0x28af;eip=0x0002cd; 	T(ADD(sp, 0x0E));	// 81469 add     sp, 0Eh ;~ 28AF:02CD
cs=0x28af;eip=0x0002d0; 	X(MOV(byte_44290, 0));	// 81470 mov     byte_44290, 0 ;~ 28AF:02D0
cs=0x28af;eip=0x0002d5; 	J(CALLF(sub_39700,0));	// 81471 call    sub_39700 ;~ 28AF:02D5
cs=0x28af;eip=0x0002da; 	X(MOV(word_4063a, 0));	// 81472 mov     word_4063A, 0 ;~ 28AF:02DA
cs=0x28af;eip=0x0002e0; 	J(RETF(0));	// 81473 retf ;~ 28AF:02E0

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_3736a: 	goto sub_3736a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool audio_enable_flag2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    audio_enable_flag2:
    _begin:
cs=0x28af;eip=0x0002e2; 	X(MOV(audioflag2, 1));	// 81483 mov     audioflag2, 1 ;~ 28AF:02E2
cs=0x28af;eip=0x0002e7; 	J(RETF(0));	// 81484 retf ;~ 28AF:02E7

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kaudio_enable_flag2: 	goto audio_enable_flag2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool audio_disable_flag2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    audio_disable_flag2:
    _begin:
cs=0x28af;eip=0x0002e8; 	X(MOV(audioflag2, 0));	// 81492 mov     audioflag2, 0 ;~ 28AF:02E8
cs=0x28af;eip=0x0002ed; 	X(MOV(word_4063a, 1));	// 81493 mov     word_4063A, 1 ;~ 28AF:02ED
cs=0x28af;eip=0x0002f3; 	T(CMP(byte_44290, 0));	// 81494 cmp     byte_44290, 0 ;~ 28AF:02F3
cs=0x28af;eip=0x0002f8; 	J(JZ(loc_373dc));	// 81495 jz      short loc_373DC ;~ 28AF:02F8
cs=0x28af;eip=0x0002fa; 	T(MOV(al, byte_44290));	// 81496 mov     al, byte_44290 ;~ 28AF:02FA
cs=0x28af;eip=0x0002fd; 	T(SUB(ah, ah));	// 81497 sub     ah, ah ;~ 28AF:02FD
cs=0x28af;eip=0x0002ff; 	T(DEC(ax));	// 81498 dec     ax ;~ 28AF:02FF
cs=0x28af;eip=0x000300; 	X(PUSH(ax));	// 81499 push    ax ;~ 28AF:0300
cs=0x28af;eip=0x000301; 	T(SUB(ax, ax));	// 81500 sub     ax, ax ;~ 28AF:0301
cs=0x28af;eip=0x000303; 	X(PUSH(ax));	// 81501 push    ax ;~ 28AF:0303
cs=0x28af;eip=0x000304; 	J(CALLF(audio_driver_func1e,0));	// 81502 call    audio_driver_func1E ;~ 28AF:0304
cs=0x28af;eip=0x000309; 	T(ADD(sp, 4));	// 81503 add     sp, 4 ;~ 28AF:0309
loc_373dc:
	// 9496 
cs=0x28af;eip=0x00030c; 	J(CALLF(sub_39700,0));	// 81506 call    sub_39700 ;~ 28AF:030C
cs=0x28af;eip=0x000311; 	X(MOV(word_4063a, 0));	// 81507 mov     word_4063A, 0 ;~ 28AF:0311
cs=0x28af;eip=0x000317; 	J(RETF(0));	// 81508 retf ;~ 28AF:0317

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kaudio_disable_flag2: 	goto audio_disable_flag2;
        case m2c::kloc_373dc: 	goto loc_373dc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool audio_toggle_flag2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    audio_toggle_flag2:
    _begin:
cs=0x28af;eip=0x000318; 	T(CMP(audioflag2, 1));	// 81517 cmp     audioflag2, 1 ;~ 28AF:0318
cs=0x28af;eip=0x00031d; 	J(JNZ(loc_373f6));	// 81518 jnz     short loc_373F6 ;~ 28AF:031D
cs=0x28af;eip=0x00031f; 	X(PUSH(cs));	// 81519 push    cs ;~ 28AF:031F
cs=0x28af;eip=0x000320; 	J(CALL(audio_disable_flag2,0));	// 81520 call    near ptr audio_disable_flag2 ;~ 28AF:0320
cs=0x28af;eip=0x000323; 	T(SUB(ax, ax));	// 81521 sub     ax, ax ;~ 28AF:0323
cs=0x28af;eip=0x000325; 	J(RETF(0));	// 81522 retf ;~ 28AF:0325
loc_373f6:
	// 9497 
cs=0x28af;eip=0x000326; 	X(PUSH(cs));	// 81526 push    cs ;~ 28AF:0326
cs=0x28af;eip=0x000327; 	J(CALL(audio_enable_flag2,0));	// 81527 call    near ptr audio_enable_flag2 ;~ 28AF:0327
cs=0x28af;eip=0x00032a; 	T(MOV(ax, 1));	// 81528 mov     ax, 1 ;~ 28AF:032A
cs=0x28af;eip=0x00032d; 	J(RETF(0));	// 81529 retf ;~ 28AF:032D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kaudio_toggle_flag2: 	goto audio_toggle_flag2;
        case m2c::kloc_373f6: 	goto loc_373f6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool nopsub_373fe(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    nopsub_373fe:
    _begin:
#undef var_2
#define var_2 -2
	// 81539 var_2           = word ptr -2 ;~ 28AF:032E
cs=0x28af;eip=0x00032e; 	X(PUSH(bp));	// 81541 push    bp ;~ 28AF:032E
cs=0x28af;eip=0x00032f; 	T(MOV(bp, sp));	// 81542 mov     bp, sp ;~ 28AF:032F
cs=0x28af;eip=0x000331; 	T(SUB(sp, 6));	// 81543 sub     sp, 6 ;~ 28AF:0331
cs=0x28af;eip=0x000334; 	X(PUSH(di));	// 81544 push    di ;~ 28AF:0334
cs=0x28af;eip=0x000335; 	X(PUSH(si));	// 81545 push    si ;~ 28AF:0335
cs=0x28af;eip=0x000336; 	T(CMP(byte_40630, 1));	// 81546 cmp     byte_40630, 1 ;~ 28AF:0336
cs=0x28af;eip=0x00033b; 	J(JZ(loc_37414));	// 81547 jz      short loc_37414 ;~ 28AF:033B
cs=0x28af;eip=0x00033d; 	T(CMP(audioflag2, 0));	// 81548 cmp     audioflag2, 0 ;~ 28AF:033D
cs=0x28af;eip=0x000342; 	J(JNZ(loc_3741e));	// 81549 jnz     short loc_3741E ;~ 28AF:0342
loc_37414:
	// 9498 
cs=0x28af;eip=0x000344; 	T(MOV(ax, 1));	// 81553 mov     ax, 1 ;~ 28AF:0344
cs=0x28af;eip=0x000347; 	X(POP(si));	// 81554 pop     si ;~ 28AF:0347
cs=0x28af;eip=0x000348; 	X(POP(di));	// 81555 pop     di ;~ 28AF:0348
cs=0x28af;eip=0x000349; 	T(MOV(sp, bp));	// 81556 mov     sp, bp ;~ 28AF:0349
cs=0x28af;eip=0x00034b; 	X(POP(bp));	// 81557 pop     bp ;~ 28AF:034B
cs=0x28af;eip=0x00034c; 	J(RETF(0));	// 81558 retf ;~ 28AF:034C
loc_3741e:
	// 9499 
cs=0x28af;eip=0x00034e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 81563 mov     [bp+var_2], 0 ;~ 28AF:034E
cs=0x28af;eip=0x000353; 	T(MOV(al, byte_44290));	// 81564 mov     al, byte_44290 ;~ 28AF:0353
cs=0x28af;eip=0x000356; 	T(SUB(ah, ah));	// 81565 sub     ah, ah ;~ 28AF:0356
cs=0x28af;eip=0x000358; 	T(OR(ax, ax));	// 81566 or      ax, ax ;~ 28AF:0358
cs=0x28af;eip=0x00035a; 	J(JZ(loc_37414));	// 81567 jz      short loc_37414 ;~ 28AF:035A
cs=0x28af;eip=0x00035c; 	T(MOV(di, ax));	// 81568 mov     di, ax ;~ 28AF:035C
cs=0x28af;eip=0x00035e; 	T(MOV(si, 0x81FC));	// 81569 mov     si, 81FCh ;~ 28AF:035E
cs=0x28af;eip=0x000361; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_2))));	// 81570 mov     cx, [bp+var_2] ;~ 28AF:0361
loc_37434:
	// 9500 
cs=0x28af;eip=0x000364; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 81573 mov     ax, [si] ;~ 28AF:0364
cs=0x28af;eip=0x000366; 	T(OR(ax, *(dw*)(raddr(ds,si+2))));	// 81574 or      ax, [si+2] ;~ 28AF:0366
cs=0x28af;eip=0x000369; 	J(JZ(loc_37446));	// 81575 jz      short loc_37446 ;~ 28AF:0369
cs=0x28af;eip=0x00036b; 	T(SUB(ax, ax));	// 81576 sub     ax, ax ;~ 28AF:036B
cs=0x28af;eip=0x00036d; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), cx));	// 81577 mov     [bp+var_2], cx ;~ 28AF:036D
cs=0x28af;eip=0x000370; 	X(POP(si));	// 81578 pop     si ;~ 28AF:0370
cs=0x28af;eip=0x000371; 	X(POP(di));	// 81579 pop     di ;~ 28AF:0371
cs=0x28af;eip=0x000372; 	T(MOV(sp, bp));	// 81580 mov     sp, bp ;~ 28AF:0372
cs=0x28af;eip=0x000374; 	X(POP(bp));	// 81581 pop     bp ;~ 28AF:0374
cs=0x28af;eip=0x000375; 	J(RETF(0));	// 81582 retf ;~ 28AF:0375
loc_37446:
	// 9501 
cs=0x28af;eip=0x000376; 	T(ADD(si, 0x4C));	// 81586 add     si, 4Ch ; 'L' ;~ 28AF:0376
cs=0x28af;eip=0x000379; 	T(INC(cx));	// 81587 inc     cx ;~ 28AF:0379
cs=0x28af;eip=0x00037a; 	T(MOV(ax, cx));	// 81588 mov     ax, cx ;~ 28AF:037A
cs=0x28af;eip=0x00037c; 	T(CMP(ax, di));	// 81589 cmp     ax, di ;~ 28AF:037C
cs=0x28af;eip=0x00037e; 	J(JC(loc_37434));	// 81590 jb      short loc_37434 ;~ 28AF:037E
cs=0x28af;eip=0x000380; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), cx));	// 81591 mov     [bp+var_2], cx ;~ 28AF:0380
cs=0x28af;eip=0x000383; 	J(JMP(loc_37414));	// 81592 jmp     short loc_37414 ;~ 28AF:0383

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_37414: 	goto loc_37414;
        case m2c::kloc_3741e: 	goto loc_3741e;
        case m2c::kloc_37434: 	goto loc_37434;
        case m2c::kloc_37446: 	goto loc_37446;
        case m2c::knopsub_373fe: 	goto nopsub_373fe;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool nopsub_37456(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    nopsub_37456:
    _begin:
#undef arg_0
#define arg_0 6
	// 81604 arg_0           = word ptr  6 ;~ 28AF:0386
#undef arg_2
#define arg_2 8
	// 81605 arg_2           = word ptr  8 ;~ 28AF:0386
cs=0x28af;eip=0x000386; 	X(PUSH(bp));	// 81607 push    bp ;~ 28AF:0386
cs=0x28af;eip=0x000387; 	T(MOV(bp, sp));	// 81608 mov     bp, sp ;~ 28AF:0387
cs=0x28af;eip=0x000389; 	T(MOV(ax, 0x40));	// 81609 mov     ax, 40h ; '@' ;~ 28AF:0389
cs=0x28af;eip=0x00038c; 	X(PUSH(ax));	// 81610 push    ax ;~ 28AF:038C
cs=0x28af;eip=0x00038d; 	T(MOV(ax, 0x0FFFF));	// 81611 mov     ax, 0FFFFh ;~ 28AF:038D
cs=0x28af;eip=0x000390; 	X(PUSH(ax));	// 81612 push    ax ;~ 28AF:0390
cs=0x28af;eip=0x000391; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 81613 push    [bp+arg_2] ;~ 28AF:0391
cs=0x28af;eip=0x000394; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 81614 push    [bp+arg_0] ;~ 28AF:0394
cs=0x28af;eip=0x000397; 	X(PUSH(cs));	// 81615 push    cs ;~ 28AF:0397
cs=0x28af;eip=0x000398; 	J(CALL(audio_check_flag2,0));	// 81616 call    near ptr audio_check_flag2 ;~ 28AF:0398
cs=0x28af;eip=0x00039b; 	T(ADD(sp, 8));	// 81617 add     sp, 8 ;~ 28AF:039B
cs=0x28af;eip=0x00039e; 	X(POP(bp));	// 81618 pop     bp ;~ 28AF:039E
cs=0x28af;eip=0x00039f; 	J(RETF(0));	// 81619 retf ;~ 28AF:039F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::knopsub_37456: 	goto nopsub_37456;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_37470(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_37470:
    _begin:
#undef var_2
#define var_2 -2
	// 81629 var_2           = word ptr -2 ;~ 28AF:03A0
#undef arg_0
#define arg_0 6
	// 81630 arg_0           = word ptr  6 ;~ 28AF:03A0
#undef arg_2
#define arg_2 8
	// 81631 arg_2           = byte ptr  8 ;~ 28AF:03A0
cs=0x28af;eip=0x0003a0; 	X(PUSH(bp));	// 81633 push    bp ;~ 28AF:03A0
cs=0x28af;eip=0x0003a1; 	T(MOV(bp, sp));	// 81634 mov     bp, sp ;~ 28AF:03A1
cs=0x28af;eip=0x0003a3; 	T(SUB(sp, 4));	// 81635 sub     sp, 4 ;~ 28AF:03A3
cs=0x28af;eip=0x0003a6; 	X(PUSH(di));	// 81636 push    di ;~ 28AF:03A6
cs=0x28af;eip=0x0003a7; 	X(PUSH(si));	// 81637 push    si ;~ 28AF:03A7
cs=0x28af;eip=0x0003a8; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0FFFF));	// 81638 cmp     [bp+arg_0], 0FFFFh ;~ 28AF:03A8
cs=0x28af;eip=0x0003ac; 	J(JNZ(loc_374ce));	// 81639 jnz     short loc_374CE ;~ 28AF:03AC
cs=0x28af;eip=0x0003ae; 	T(MOV(si, 0x10));	// 81640 mov     si, 10h ;~ 28AF:03AE
cs=0x28af;eip=0x0003b1; 	T(MOV(di, 0x86BC));	// 81641 mov     di, 86BCh ;~ 28AF:03B1
cs=0x28af;eip=0x0003b4; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_0))));	// 81642 mov     cx, [bp+arg_0] ;~ 28AF:03B4
loc_37487:
	// 9502 
cs=0x28af;eip=0x0003b7; 	T(CMP(cx, 0x0FFFF));	// 81645 cmp     cx, 0FFFFh ;~ 28AF:03B7
cs=0x28af;eip=0x0003ba; 	J(JNZ(loc_374a5));	// 81646 jnz     short loc_374A5 ;~ 28AF:03BA
cs=0x28af;eip=0x0003bc; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 81647 mov     ax, [di] ;~ 28AF:03BC
cs=0x28af;eip=0x0003be; 	T(OR(ax, *(dw*)(raddr(ds,di+2))));	// 81648 or      ax, [di+2] ;~ 28AF:03BE
cs=0x28af;eip=0x0003c1; 	J(JNZ(loc_3749c));	// 81649 jnz     short loc_3749C ;~ 28AF:03C1
cs=0x28af;eip=0x0003c3; 	T(CMP(*((&byte_45d9a)+si), 0));	// 81650 cmp     byte_45D9A[si], 0 ;~ 28AF:03C3
cs=0x28af;eip=0x0003c8; 	J(JNZ(loc_3749c));	// 81651 jnz     short loc_3749C ;~ 28AF:03C8
cs=0x28af;eip=0x0003ca; 	T(MOV(cx, si));	// 81652 mov     cx, si ;~ 28AF:03CA
loc_3749c:
	// 9503 
cs=0x28af;eip=0x0003cc; 	T(ADD(di, 0x4C));	// 81656 add     di, 4Ch ; 'L' ;~ 28AF:03CC
cs=0x28af;eip=0x0003cf; 	T(INC(si));	// 81657 inc     si ;~ 28AF:03CF
cs=0x28af;eip=0x0003d0; 	T(CMP(si, 0x17));	// 81658 cmp     si, 17h ;~ 28AF:03D0
cs=0x28af;eip=0x0003d3; 	J(JLE(loc_37487));	// 81659 jle     short loc_37487 ;~ 28AF:03D3
loc_374a5:
	// 9504 
cs=0x28af;eip=0x0003d5; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), si));	// 81662 mov     [bp+var_2], si ;~ 28AF:03D5
cs=0x28af;eip=0x0003d8; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), cx));	// 81663 mov     [bp+arg_0], cx ;~ 28AF:03D8
cs=0x28af;eip=0x0003db; 	T(CMP(cx, 0x0FFFF));	// 81664 cmp     cx, 0FFFFh ;~ 28AF:03DB
cs=0x28af;eip=0x0003de; 	J(JZ(loc_374c5));	// 81665 jz      short loc_374C5 ;~ 28AF:03DE
cs=0x28af;eip=0x0003e0; 	T(MOV(bx, cx));	// 81666 mov     bx, cx ;~ 28AF:03E0
cs=0x28af;eip=0x0003e2; 	X(MOV(*((&byte_45d9a)+bx), 1));	// 81667 mov     byte_45D9A[bx], 1 ;~ 28AF:03E2
cs=0x28af;eip=0x0003e7; 	T(MOV(ax, 0x4C));	// 81668 mov     ax, 4Ch ; 'L' ;~ 28AF:03E7
cs=0x28af;eip=0x0003ea; 	T(IMUL1_2(cx));	// 81669 imul    cx ;~ 28AF:03EA
loc_374bc:
	// 9505 
cs=0x28af;eip=0x0003ec; 	T(MOV(bx, ax));	// 81672 mov     bx, ax ;~ 28AF:03EC
cs=0x28af;eip=0x0003ee; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 81673 mov     al, [bp+arg_2] ;~ 28AF:03EE
cs=0x28af;eip=0x0003f1; 	X(MOV(*(((audiochunks_unk)+0x24)+bx), al));	// 81674 mov     (audiochunks_unk+24h)[bx], al ;~ 28AF:03F1
loc_374c5:
	// 9506 
cs=0x28af;eip=0x0003f5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 81677 mov     ax, [bp+arg_0] ;~ 28AF:03F5
cs=0x28af;eip=0x0003f8; 	X(POP(si));	// 81678 pop     si ;~ 28AF:03F8
cs=0x28af;eip=0x0003f9; 	X(POP(di));	// 81679 pop     di ;~ 28AF:03F9
cs=0x28af;eip=0x0003fa; 	T(MOV(sp, bp));	// 81680 mov     sp, bp ;~ 28AF:03FA
cs=0x28af;eip=0x0003fc; 	X(POP(bp));	// 81681 pop     bp ;~ 28AF:03FC
cs=0x28af;eip=0x0003fd; 	J(RETF(0));	// 81682 retf ;~ 28AF:03FD
loc_374ce:
	// 9507 
cs=0x28af;eip=0x0003fe; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 81686 mov     bx, [bp+arg_0] ;~ 28AF:03FE
cs=0x28af;eip=0x000401; 	X(MOV(*((&byte_45d9a)+bx), 1));	// 81687 mov     byte_45D9A[bx], 1 ;~ 28AF:0401
cs=0x28af;eip=0x000406; 	T(MOV(ax, 0x4C));	// 81688 mov     ax, 4Ch ; 'L' ;~ 28AF:0406
cs=0x28af;eip=0x000409; 	T(IMUL1_2(bx));	// 81689 imul    bx ;~ 28AF:0409
cs=0x28af;eip=0x00040b; 	J(JMP(loc_374bc));	// 81690 jmp     short loc_374BC ;~ 28AF:040B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_37487: 	goto loc_37487;
        case m2c::kloc_3749c: 	goto loc_3749c;
        case m2c::kloc_374a5: 	goto loc_374a5;
        case m2c::kloc_374bc: 	goto loc_374bc;
        case m2c::kloc_374c5: 	goto loc_374c5;
        case m2c::kloc_374ce: 	goto loc_374ce;
        case m2c::ksub_37470: 	goto sub_37470;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_374de(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_374de:
    _begin:
#undef arg_0
#define arg_0 6
	// 81702 arg_0           = word ptr  6 ;~ 28AF:040E
cs=0x28af;eip=0x00040e; 	X(PUSH(bp));	// 81704 push    bp ;~ 28AF:040E
cs=0x28af;eip=0x00040f; 	T(MOV(bp, sp));	// 81705 mov     bp, sp ;~ 28AF:040F
cs=0x28af;eip=0x000411; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0FFFF));	// 81706 cmp     [bp+arg_0], 0FFFFh ;~ 28AF:0411
cs=0x28af;eip=0x000415; 	J(JLE(loc_374f7));	// 81707 jle     short loc_374F7 ;~ 28AF:0415
cs=0x28af;eip=0x000417; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 81708 mov     bx, [bp+arg_0] ;~ 28AF:0417
cs=0x28af;eip=0x00041a; 	X(MOV(*((&byte_45d9a)+bx), 0));	// 81709 mov     byte_45D9A[bx], 0 ;~ 28AF:041A
cs=0x28af;eip=0x00041f; 	X(PUSH(bx));	// 81710 push    bx ;~ 28AF:041F
cs=0x28af;eip=0x000420; 	X(PUSH(cs));	// 81711 push    cs ;~ 28AF:0420
cs=0x28af;eip=0x000421; 	J(CALL(audio_init_chunk2,0));	// 81712 call    near ptr audio_init_chunk2 ;~ 28AF:0421
cs=0x28af;eip=0x000424; 	T(ADD(sp, 2));	// 81713 add     sp, 2 ;~ 28AF:0424
loc_374f7:
	// 9508 
cs=0x28af;eip=0x000427; 	X(POP(bp));	// 81716 pop     bp ;~ 28AF:0427
cs=0x28af;eip=0x000428; 	J(RETF(0));	// 81717 retf ;~ 28AF:0428

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_374f7: 	goto loc_374f7;
        case m2c::ksub_374de: 	goto sub_374de;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool audio_check_flag2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    audio_check_flag2:
    _begin:
#undef arg_0
#define arg_0 6
	// 81729 arg_0           = word ptr  6 ;~ 28AF:042A
#undef arg_2
#define arg_2 8
	// 81730 arg_2           = word ptr  8 ;~ 28AF:042A
#undef arg_4
#define arg_4 0x0A
	// 81731 arg_4           = word ptr  0Ah ;~ 28AF:042A
#undef arg_6
#define arg_6 0x0C
	// 81732 arg_6           = byte ptr  0Ch ;~ 28AF:042A
cs=0x28af;eip=0x00042a; 	X(PUSH(bp));	// 81734 push    bp ;~ 28AF:042A
cs=0x28af;eip=0x00042b; 	T(MOV(bp, sp));	// 81735 mov     bp, sp ;~ 28AF:042B
cs=0x28af;eip=0x00042d; 	T(MOV(al, byte_45948));	// 81736 mov     al, byte_45948 ;~ 28AF:042D
cs=0x28af;eip=0x000430; 	T(SUB(ah, ah));	// 81737 sub     ah, ah ;~ 28AF:0430
cs=0x28af;eip=0x000432; 	X(PUSH(ax));	// 81738 push    ax ;~ 28AF:0432
cs=0x28af;eip=0x000433; 	T(MOV(al, *(raddr(ss,bp+arg_6))));	// 81739 mov     al, [bp+arg_6] ;~ 28AF:0433
cs=0x28af;eip=0x000436; 	X(PUSH(ax));	// 81740 push    ax ;~ 28AF:0436
cs=0x28af;eip=0x000437; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 81741 push    [bp+arg_4] ;~ 28AF:0437
cs=0x28af;eip=0x00043a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 81742 push    [bp+arg_2] ;~ 28AF:043A
cs=0x28af;eip=0x00043d; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 81743 push    [bp+arg_0] ;~ 28AF:043D
cs=0x28af;eip=0x000440; 	X(PUSH(cs));	// 81744 push    cs ;~ 28AF:0440
cs=0x28af;eip=0x000441; 	J(CALL(audio_check_flag,0));	// 81745 call    near ptr audio_check_flag ;~ 28AF:0441
cs=0x28af;eip=0x000444; 	T(ADD(sp, 0x0A));	// 81746 add     sp, 0Ah ;~ 28AF:0444
cs=0x28af;eip=0x000447; 	X(POP(bp));	// 81747 pop     bp ;~ 28AF:0447
cs=0x28af;eip=0x000448; 	J(RETF(0));	// 81748 retf ;~ 28AF:0448

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kaudio_check_flag2: 	goto audio_check_flag2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool audio_check_flag(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    audio_check_flag:
    _begin:
#undef var_6
#define var_6 -6
	// 81761 var_6           = word ptr -6 ;~ 28AF:044A
#undef var_4
#define var_4 -4
	// 81762 var_4           = word ptr -4 ;~ 28AF:044A
#undef var_2
#define var_2 -2
	// 81763 var_2           = word ptr -2 ;~ 28AF:044A
#undef arg_0
#define arg_0 6
	// 81764 arg_0           = dword ptr  6 ;~ 28AF:044A
#undef arg_4
#define arg_4 0x0A
	// 81765 arg_4           = word ptr  0Ah ;~ 28AF:044A
#undef arg_6
#define arg_6 0x0C
	// 81766 arg_6           = byte ptr  0Ch ;~ 28AF:044A
#undef arg_8
#define arg_8 0x0E
	// 81767 arg_8           = word ptr  0Eh ;~ 28AF:044A
cs=0x28af;eip=0x00044a; 	X(PUSH(bp));	// 81769 push    bp ;~ 28AF:044A
cs=0x28af;eip=0x00044b; 	T(MOV(bp, sp));	// 81770 mov     bp, sp ;~ 28AF:044B
cs=0x28af;eip=0x00044d; 	T(SUB(sp, 8));	// 81771 sub     sp, 8 ;~ 28AF:044D
cs=0x28af;eip=0x000450; 	X(PUSH(di));	// 81772 push    di ;~ 28AF:0450
cs=0x28af;eip=0x000451; 	X(PUSH(si));	// 81773 push    si ;~ 28AF:0451
cs=0x28af;eip=0x000452; 	T(CMP(audioflag6, 0));	// 81774 cmp     audioflag6, 0 ;~ 28AF:0452
cs=0x28af;eip=0x000457; 	J(JNZ(loc_37532));	// 81775 jnz     short loc_37532 ;~ 28AF:0457
loc_37529:
	// 9509 
cs=0x28af;eip=0x000459; 	T(MOV(ax, 0x0FFFF));	// 81779 mov     ax, 0FFFFh ;~ 28AF:0459
cs=0x28af;eip=0x00045c; 	X(POP(si));	// 81780 pop     si ;~ 28AF:045C
cs=0x28af;eip=0x00045d; 	X(POP(di));	// 81781 pop     di ;~ 28AF:045D
cs=0x28af;eip=0x00045e; 	T(MOV(sp, bp));	// 81782 mov     sp, bp ;~ 28AF:045E
cs=0x28af;eip=0x000460; 	X(POP(bp));	// 81783 pop     bp ;~ 28AF:0460
cs=0x28af;eip=0x000461; 	J(RETF(0));	// 81784 retf ;~ 28AF:0461
loc_37532:
	// 9510 
cs=0x28af;eip=0x000462; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 81788 mov     ax, word ptr [bp+arg_0] ;~ 28AF:0462
cs=0x28af;eip=0x000465; 	T(OR(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 81789 or      ax, word ptr [bp+arg_0+2] ;~ 28AF:0465
cs=0x28af;eip=0x000468; 	J(JZ(loc_37529));	// 81790 jz      short loc_37529 ;~ 28AF:0468
cs=0x28af;eip=0x00046a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 81791 les     bx, [bp+arg_0] ;~ 28AF:046A
cs=0x28af;eip=0x00046d; 	T(CMP(*(raddr(es,bx+5)), 1));	// 81792 cmp     byte ptr es:[bx+5], 1 ;~ 28AF:046D
cs=0x28af;eip=0x000472; 	J(JNZ(loc_37529));	// 81793 jnz     short loc_37529 ;~ 28AF:0472
cs=0x28af;eip=0x000474; 	T(CMP(byte_45948, 0));	// 81794 cmp     byte_45948, 0 ;~ 28AF:0474
cs=0x28af;eip=0x000479; 	J(JZ(loc_37568));	// 81795 jz      short loc_37568 ;~ 28AF:0479
cs=0x28af;eip=0x00047b; 	T(MOV(al, byte_45948));	// 81796 mov     al, byte_45948 ;~ 28AF:047B
cs=0x28af;eip=0x00047e; 	T(SUB(ah, ah));	// 81797 sub     ah, ah ;~ 28AF:047E
cs=0x28af;eip=0x000480; 	T(MOV(cx, ax));	// 81798 mov     cx, ax ;~ 28AF:0480
cs=0x28af;eip=0x000482; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 81799 mov     ax, [bp+arg_8] ;~ 28AF:0482
cs=0x28af;eip=0x000485; 	T(MOV(dx, cx));	// 81800 mov     dx, cx ;~ 28AF:0485
cs=0x28af;eip=0x000487; 	T(MOV(cl, 7));	// 81801 mov     cl, 7 ;~ 28AF:0487
cs=0x28af;eip=0x000489; 	T(SHL(ax, cl));	// 81802 shl     ax, cl ;~ 28AF:0489
cs=0x28af;eip=0x00048b; 	T(MOV(cx, dx));	// 81803 mov     cx, dx ;~ 28AF:048B
cs=0x28af;eip=0x00048d; 	T(SUB(dx, dx));	// 81804 sub     dx, dx ;~ 28AF:048D
cs=0x28af;eip=0x00048f; 	T(DIV2(cx));	// 81805 div     cx ;~ 28AF:048F
cs=0x28af;eip=0x000491; 	T(DEC(ax));	// 81806 dec     ax ;~ 28AF:0491
cs=0x28af;eip=0x000492; 	X(MOV(*(dw*)(raddr(ss,bp+arg_8)), ax));	// 81807 mov     [bp+arg_8], ax ;~ 28AF:0492
cs=0x28af;eip=0x000495; 	J(JMP(loc_3756d));	// 81808 jmp     short loc_3756D ;~ 28AF:0495
loc_37568:
	// 9511 
cs=0x28af;eip=0x000498; 	X(MOV(*(dw*)(raddr(ss,bp+arg_8)), 0));	// 81813 mov     [bp+arg_8], 0 ;~ 28AF:0498
loc_3756d:
	// 9512 
cs=0x28af;eip=0x00049d; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0x0FFFF));	// 81816 cmp     [bp+arg_4], 0FFFFh ;~ 28AF:049D
cs=0x28af;eip=0x0004a1; 	J(JZ(loc_37576));	// 81817 jz      short loc_37576 ;~ 28AF:04A1
cs=0x28af;eip=0x0004a3; 	J(JMP(loc_37609));	// 81818 jmp     loc_37609 ;~ 28AF:04A3
loc_37576:
	// 9513 
cs=0x28af;eip=0x0004a6; 	T(MOV(si, 0x10));	// 81822 mov     si, 10h ;~ 28AF:04A6
cs=0x28af;eip=0x0004a9; 	T(MOV(di, offset(dseg,audiochunks_unk2)));	// 81823 mov     di, offset audiochunks_unk2 ;~ 28AF:04A9
cs=0x28af;eip=0x0004ac; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_4))));	// 81824 mov     cx, [bp+arg_4] ;~ 28AF:04AC
loc_3757f:
	// 9514 
cs=0x28af;eip=0x0004af; 	T(CMP(cx, 0x0FFFF));	// 81827 cmp     cx, 0FFFFh ;~ 28AF:04AF
cs=0x28af;eip=0x0004b2; 	J(JNZ(loc_3759d));	// 81828 jnz     short loc_3759D ;~ 28AF:04B2
cs=0x28af;eip=0x0004b4; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 81829 mov     ax, [di] ;~ 28AF:04B4
cs=0x28af;eip=0x0004b6; 	T(OR(ax, *(dw*)(raddr(ds,di+2))));	// 81830 or      ax, [di+2] ;~ 28AF:04B6
cs=0x28af;eip=0x0004b9; 	J(JNZ(loc_37594));	// 81831 jnz     short loc_37594 ;~ 28AF:04B9
cs=0x28af;eip=0x0004bb; 	T(CMP(*((&byte_45d9a)+si), 0));	// 81832 cmp     byte_45D9A[si], 0 ;~ 28AF:04BB
cs=0x28af;eip=0x0004c0; 	J(JNZ(loc_37594));	// 81833 jnz     short loc_37594 ;~ 28AF:04C0
cs=0x28af;eip=0x0004c2; 	T(MOV(cx, si));	// 81834 mov     cx, si ;~ 28AF:04C2
loc_37594:
	// 9515 
cs=0x28af;eip=0x0004c4; 	T(ADD(di, 0x4C));	// 81838 add     di, 4Ch ; 'L' ;~ 28AF:04C4
cs=0x28af;eip=0x0004c7; 	T(INC(si));	// 81839 inc     si ;~ 28AF:04C7
cs=0x28af;eip=0x0004c8; 	T(CMP(si, 0x17));	// 81840 cmp     si, 17h ;~ 28AF:04C8
cs=0x28af;eip=0x0004cb; 	J(JLE(loc_3757f));	// 81841 jle     short loc_3757F ;~ 28AF:04CB
loc_3759d:
	// 9516 
cs=0x28af;eip=0x0004cd; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), si));	// 81844 mov     [bp+var_4], si ;~ 28AF:04CD
cs=0x28af;eip=0x0004d0; 	X(MOV(*(dw*)(raddr(ss,bp+arg_4)), cx));	// 81845 mov     [bp+arg_4], cx ;~ 28AF:04D0
cs=0x28af;eip=0x0004d3; 	T(CMP(cx, 0x0FFFF));	// 81846 cmp     cx, 0FFFFh ;~ 28AF:04D3
cs=0x28af;eip=0x0004d6; 	J(JNZ(loc_37609));	// 81847 jnz     short loc_37609 ;~ 28AF:04D6
cs=0x28af;eip=0x0004d8; 	T(MOV(cx, 0x0FF));	// 81848 mov     cx, 0FFh ;~ 28AF:04D8
cs=0x28af;eip=0x0004db; 	T(MOV(di, 0x10));	// 81849 mov     di, 10h ;~ 28AF:04DB
cs=0x28af;eip=0x0004de; 	T(MOV(si, 0x86E0));	// 81850 mov     si, 86E0h ;~ 28AF:04DE
cs=0x28af;eip=0x0004e1; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_4))));	// 81851 mov     dx, [bp+arg_4] ;~ 28AF:04E1
loc_375b4:
	// 9517 
cs=0x28af;eip=0x0004e4; 	T(MOV(al, *(raddr(ds,si))));	// 81854 mov     al, [si] ;~ 28AF:04E4
cs=0x28af;eip=0x0004e6; 	T(SUB(ah, ah));	// 81855 sub     ah, ah ;~ 28AF:04E6
cs=0x28af;eip=0x0004e8; 	T(CMP(ax, cx));	// 81856 cmp     ax, cx ;~ 28AF:04E8
cs=0x28af;eip=0x0004ea; 	J(JA(loc_375cb));	// 81857 ja      short loc_375CB ;~ 28AF:04EA
cs=0x28af;eip=0x0004ec; 	T(MOV(ax, offset(dseg,byte_45d9a)));	// 81858 mov     ax, offset byte_45D9A ;~ 28AF:04EC
cs=0x28af;eip=0x0004ef; 	T(OR(ax, ax));	// 81859 or      ax, ax ;~ 28AF:04EF
cs=0x28af;eip=0x0004f1; 	J(JNZ(loc_375cb));	// 81860 jnz     short loc_375CB ;~ 28AF:04F1
cs=0x28af;eip=0x0004f3; 	T(MOV(al, *(raddr(ds,si))));	// 81861 mov     al, [si] ;~ 28AF:04F3
cs=0x28af;eip=0x0004f5; 	T(SUB(ah, ah));	// 81862 sub     ah, ah ;~ 28AF:04F5
cs=0x28af;eip=0x0004f7; 	T(MOV(cx, ax));	// 81863 mov     cx, ax ;~ 28AF:04F7
cs=0x28af;eip=0x0004f9; 	T(MOV(dx, di));	// 81864 mov     dx, di ;~ 28AF:04F9
loc_375cb:
	// 9518 
cs=0x28af;eip=0x0004fb; 	T(ADD(si, 0x4C));	// 81868 add     si, 4Ch ; 'L' ;~ 28AF:04FB
cs=0x28af;eip=0x0004fe; 	T(INC(di));	// 81869 inc     di ;~ 28AF:04FE
cs=0x28af;eip=0x0004ff; 	T(CMP(di, 0x17));	// 81870 cmp     di, 17h ;~ 28AF:04FF
cs=0x28af;eip=0x000502; 	J(JL(loc_375b4));	// 81871 jl      short loc_375B4 ;~ 28AF:0502
cs=0x28af;eip=0x000504; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), di));	// 81872 mov     [bp+var_4], di ;~ 28AF:0504
cs=0x28af;eip=0x000507; 	X(MOV(*(dw*)(raddr(ss,bp+arg_4)), dx));	// 81873 mov     [bp+arg_4], dx ;~ 28AF:0507
cs=0x28af;eip=0x00050a; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), cx));	// 81874 mov     [bp+var_6], cx ;~ 28AF:050A
cs=0x28af;eip=0x00050d; 	T(CMP(dx, 0x0FFFF));	// 81875 cmp     dx, 0FFFFh ;~ 28AF:050D
cs=0x28af;eip=0x000510; 	J(JZ(loc_37609));	// 81876 jz      short loc_37609 ;~ 28AF:0510
cs=0x28af;eip=0x000512; 	T(MOV(ax, 0x4C));	// 81877 mov     ax, 4Ch ; 'L' ;~ 28AF:0512
cs=0x28af;eip=0x000515; 	T(IMUL1_2(dx));	// 81878 imul    dx ;~ 28AF:0515
cs=0x28af;eip=0x000517; 	T(MOV(bx, ax));	// 81879 mov     bx, ax ;~ 28AF:0517
cs=0x28af;eip=0x000519; 	T(MOV(al, *(raddr(ss,bp+arg_6))));	// 81880 mov     al, [bp+arg_6] ;~ 28AF:0519
cs=0x28af;eip=0x00051c; 	T(CMP(*(((audiochunks_unk)+0x24)+bx), al));	// 81881 cmp     (audiochunks_unk+24h)[bx], al ;~ 28AF:051C
cs=0x28af;eip=0x000520; 	J(JA(loc_37609));	// 81882 ja      short loc_37609 ;~ 28AF:0520
cs=0x28af;eip=0x000522; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 81883 mov     bx, [bp+arg_4] ;~ 28AF:0522
cs=0x28af;eip=0x000525; 	T(CMP(*((&byte_45d9a)+bx), 0));	// 81884 cmp     byte_45D9A[bx], 0 ;~ 28AF:0525
cs=0x28af;eip=0x00052a; 	J(JZ(loc_37601));	// 81885 jz      short loc_37601 ;~ 28AF:052A
cs=0x28af;eip=0x00052c; 	X(MOV(*((&byte_45d9a)+bx), 0));	// 81886 mov     byte_45D9A[bx], 0 ;~ 28AF:052C
loc_37601:
	// 9519 
cs=0x28af;eip=0x000531; 	X(PUSH(bx));	// 81889 push    bx ;~ 28AF:0531
cs=0x28af;eip=0x000532; 	X(PUSH(cs));	// 81890 push    cs ;~ 28AF:0532
cs=0x28af;eip=0x000533; 	J(CALL(audio_init_chunk2,0));	// 81891 call    near ptr audio_init_chunk2 ;~ 28AF:0533
cs=0x28af;eip=0x000536; 	T(ADD(sp, 2));	// 81892 add     sp, 2 ;~ 28AF:0536
loc_37609:
	// 9520 
cs=0x28af;eip=0x000539; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0x0FFFF));	// 81896 cmp     [bp+arg_4], 0FFFFh ;~ 28AF:0539
cs=0x28af;eip=0x00053d; 	J(JNZ(loc_37612));	// 81897 jnz     short loc_37612 ;~ 28AF:053D
cs=0x28af;eip=0x00053f; 	J(JMP(loc_37529));	// 81898 jmp     loc_37529 ;~ 28AF:053F
loc_37612:
	// 9521 
cs=0x28af;eip=0x000542; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 81902 les     bx, [bp+arg_0] ;~ 28AF:0542
cs=0x28af;eip=0x000545; 	T(MOV(al, *(raddr(es,bx+6))));	// 81903 mov     al, es:[bx+6] ;~ 28AF:0545
cs=0x28af;eip=0x000549; 	T(SUB(ah, ah));	// 81904 sub     ah, ah ;~ 28AF:0549
cs=0x28af;eip=0x00054b; 	T(SHL(ax, 1));	// 81905 shl     ax, 1 ;~ 28AF:054B
cs=0x28af;eip=0x00054d; 	T(SHL(ax, 1));	// 81906 shl     ax, 1 ;~ 28AF:054D
cs=0x28af;eip=0x00054f; 	T(ADD(ax, 8));	// 81907 add     ax, 8 ;~ 28AF:054F
cs=0x28af;eip=0x000552; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 81908 mov     [bp+var_2], ax ;~ 28AF:0552
cs=0x28af;eip=0x000555; 	T(MOV(al, *(raddr(ss,bp+arg_6))));	// 81909 mov     al, [bp+arg_6] ;~ 28AF:0555
cs=0x28af;eip=0x000558; 	T(SUB(ah, ah));	// 81910 sub     ah, ah ;~ 28AF:0558
cs=0x28af;eip=0x00055a; 	X(PUSH(ax));	// 81911 push    ax ;~ 28AF:055A
cs=0x28af;eip=0x00055b; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 81912 push    [bp+arg_8] ;~ 28AF:055B
cs=0x28af;eip=0x00055e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 81913 push    [bp+var_2] ;~ 28AF:055E
cs=0x28af;eip=0x000561; 	X(PUSH(es));	// 81914 push    es ;~ 28AF:0561
cs=0x28af;eip=0x000562; 	X(PUSH(bx));	// 81915 push    bx ;~ 28AF:0562
cs=0x28af;eip=0x000563; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 81916 push    [bp+arg_4] ;~ 28AF:0563
cs=0x28af;eip=0x000566; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 81917 push    [bp+arg_4] ;~ 28AF:0566
cs=0x28af;eip=0x000569; 	X(PUSH(cs));	// 81918 push    cs ;~ 28AF:0569
cs=0x28af;eip=0x00056a; 	J(CALL(audio_init_chunk,0));	// 81919 call    near ptr audio_init_chunk ;~ 28AF:056A
cs=0x28af;eip=0x00056d; 	T(ADD(sp, 0x0E));	// 81920 add     sp, 0Eh ;~ 28AF:056D
cs=0x28af;eip=0x000570; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 81921 mov     ax, [bp+arg_4] ;~ 28AF:0570
cs=0x28af;eip=0x000573; 	X(POP(si));	// 81922 pop     si ;~ 28AF:0573
cs=0x28af;eip=0x000574; 	X(POP(di));	// 81923 pop     di ;~ 28AF:0574
cs=0x28af;eip=0x000575; 	T(MOV(sp, bp));	// 81924 mov     sp, bp ;~ 28AF:0575
cs=0x28af;eip=0x000577; 	X(POP(bp));	// 81925 pop     bp ;~ 28AF:0577
cs=0x28af;eip=0x000578; 	J(RETF(0));	// 81926 retf ;~ 28AF:0578

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kaudio_check_flag: 	goto audio_check_flag;
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
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool audio_init_chunk2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    audio_init_chunk2:
    _begin:
#undef arg_0
#define arg_0 6
	// 81939 arg_0           = word ptr  6 ;~ 28AF:057A
cs=0x28af;eip=0x00057a; 	X(PUSH(bp));	// 81941 push    bp ;~ 28AF:057A
cs=0x28af;eip=0x00057b; 	T(MOV(bp, sp));	// 81942 mov     bp, sp ;~ 28AF:057B
cs=0x28af;eip=0x00057d; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x10));	// 81943 cmp     [bp+arg_0], 10h ;~ 28AF:057D
cs=0x28af;eip=0x000581; 	J(JL(loc_37694));	// 81944 jl      short loc_37694 ;~ 28AF:0581
cs=0x28af;eip=0x000583; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x17));	// 81945 cmp     [bp+arg_0], 17h ;~ 28AF:0583
cs=0x28af;eip=0x000587; 	J(JG(loc_37694));	// 81946 jg      short loc_37694 ;~ 28AF:0587
cs=0x28af;eip=0x000589; 	T(MOV(ax, 0x4C));	// 81947 mov     ax, 4Ch ; 'L' ;~ 28AF:0589
cs=0x28af;eip=0x00058c; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 81948 imul    [bp+arg_0] ;~ 28AF:058C
cs=0x28af;eip=0x00058f; 	T(MOV(bx, ax));	// 81949 mov     bx, ax ;~ 28AF:058F
cs=0x28af;eip=0x000591; 	T(SUB(ax, ax));	// 81950 sub     ax, ax ;~ 28AF:0591
cs=0x28af;eip=0x000593; 	X(MOV(*(dw*)(((audiochunks_unk)+2)+bx), ax));	// 81951 mov     word ptr (audiochunks_unk+2)[bx], ax ;~ 28AF:0593
cs=0x28af;eip=0x000597; 	X(MOV(*(dw*)((audiochunks_unk)+bx), ax));	// 81952 mov     word ptr audiochunks_unk[bx], ax ;~ 28AF:0597
cs=0x28af;eip=0x00059b; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 81953 push    [bp+arg_0] ;~ 28AF:059B
cs=0x28af;eip=0x00059e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 81954 push    [bp+arg_0] ;~ 28AF:059E
cs=0x28af;eip=0x0005a1; 	J(CALLF(audio_driver_func1e,0));	// 81955 call    audio_driver_func1E ;~ 28AF:05A1
cs=0x28af;eip=0x0005a6; 	T(ADD(sp, 4));	// 81956 add     sp, 4 ;~ 28AF:05A6
cs=0x28af;eip=0x0005a9; 	T(SUB(ax, ax));	// 81957 sub     ax, ax ;~ 28AF:05A9
cs=0x28af;eip=0x0005ab; 	X(PUSH(ax));	// 81958 push    ax ;~ 28AF:05AB
cs=0x28af;eip=0x0005ac; 	T(MOV(al, byte_45948));	// 81959 mov     al, byte_45948 ;~ 28AF:05AC
cs=0x28af;eip=0x0005af; 	T(SUB(ah, ah));	// 81960 sub     ah, ah ;~ 28AF:05AF
cs=0x28af;eip=0x0005b1; 	X(PUSH(ax));	// 81961 push    ax ;~ 28AF:05B1
cs=0x28af;eip=0x0005b2; 	T(SUB(ax, ax));	// 81962 sub     ax, ax ;~ 28AF:05B2
cs=0x28af;eip=0x0005b4; 	X(PUSH(ax));	// 81963 push    ax ;~ 28AF:05B4
cs=0x28af;eip=0x0005b5; 	X(PUSH(ax));	// 81964 push    ax ;~ 28AF:05B5
cs=0x28af;eip=0x0005b6; 	X(PUSH(ax));	// 81965 push    ax ;~ 28AF:05B6
cs=0x28af;eip=0x0005b7; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 81966 push    [bp+arg_0] ;~ 28AF:05B7
cs=0x28af;eip=0x0005ba; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 81967 push    [bp+arg_0] ;~ 28AF:05BA
cs=0x28af;eip=0x0005bd; 	X(PUSH(cs));	// 81968 push    cs ;~ 28AF:05BD
cs=0x28af;eip=0x0005be; 	J(CALL(audio_init_chunk,0));	// 81969 call    near ptr audio_init_chunk ;~ 28AF:05BE
cs=0x28af;eip=0x0005c1; 	T(ADD(sp, 0x0E));	// 81970 add     sp, 0Eh ;~ 28AF:05C1
loc_37694:
	// 9522 
cs=0x28af;eip=0x0005c4; 	X(POP(bp));	// 81974 pop     bp ;~ 28AF:05C4
cs=0x28af;eip=0x0005c5; 	J(RETF(0));	// 81975 retf ;~ 28AF:05C5

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kaudio_init_chunk2: 	goto audio_init_chunk2;
        case m2c::kloc_37694: 	goto loc_37694;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool audio_enable_flag6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    audio_enable_flag6:
    _begin:
#undef var_2
#define var_2 -2
	// 81985 var_2           = word ptr -2 ;~ 28AF:05C6
cs=0x28af;eip=0x0005c6; 	X(PUSH(bp));	// 81987 push    bp ;~ 28AF:05C6
cs=0x28af;eip=0x0005c7; 	T(MOV(bp, sp));	// 81988 mov     bp, sp ;~ 28AF:05C7
cs=0x28af;eip=0x0005c9; 	T(SUB(sp, 2));	// 81989 sub     sp, 2 ;~ 28AF:05C9
cs=0x28af;eip=0x0005cc; 	X(PUSH(si));	// 81990 push    si ;~ 28AF:05CC
cs=0x28af;eip=0x0005cd; 	T(CMP(audioflag6, 1));	// 81991 cmp     audioflag6, 1 ;~ 28AF:05CD
cs=0x28af;eip=0x0005d2; 	J(JZ(loc_376c5));	// 81992 jz      short loc_376C5 ;~ 28AF:05D2
cs=0x28af;eip=0x0005d4; 	T(MOV(si, 0x10));	// 81993 mov     si, 10h ;~ 28AF:05D4
loc_376a7:
	// 9523 
cs=0x28af;eip=0x0005d7; 	T(MOV(al, *((&byte_428d6)+si)));	// 81996 mov     al, byte_428D6[si] ;~ 28AF:05D7
cs=0x28af;eip=0x0005db; 	T(SUB(ah, ah));	// 81997 sub     ah, ah ;~ 28AF:05DB
cs=0x28af;eip=0x0005dd; 	X(PUSH(ax));	// 81998 push    ax ;~ 28AF:05DD
cs=0x28af;eip=0x0005de; 	X(PUSH(si));	// 81999 push    si ;~ 28AF:05DE
cs=0x28af;eip=0x0005df; 	J(CALLF(audio_unk2,0));	// 82000 call    audio_unk2 ;~ 28AF:05DF
cs=0x28af;eip=0x0005e4; 	T(ADD(sp, 4));	// 82001 add     sp, 4 ;~ 28AF:05E4
cs=0x28af;eip=0x0005e7; 	T(INC(si));	// 82002 inc     si ;~ 28AF:05E7
cs=0x28af;eip=0x0005e8; 	T(CMP(si, 0x18));	// 82003 cmp     si, 18h ;~ 28AF:05E8
cs=0x28af;eip=0x0005eb; 	J(JL(loc_376a7));	// 82004 jl      short loc_376A7 ;~ 28AF:05EB
cs=0x28af;eip=0x0005ed; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), si));	// 82005 mov     [bp+var_2], si ;~ 28AF:05ED
cs=0x28af;eip=0x0005f0; 	X(MOV(audioflag6, 1));	// 82006 mov     audioflag6, 1 ;~ 28AF:05F0
loc_376c5:
	// 9524 
cs=0x28af;eip=0x0005f5; 	X(POP(si));	// 82009 pop     si ;~ 28AF:05F5
cs=0x28af;eip=0x0005f6; 	T(MOV(sp, bp));	// 82010 mov     sp, bp ;~ 28AF:05F6
cs=0x28af;eip=0x0005f8; 	X(POP(bp));	// 82011 pop     bp ;~ 28AF:05F8
cs=0x28af;eip=0x0005f9; 	J(RETF(0));	// 82012 retf ;~ 28AF:05F9

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kaudio_enable_flag6: 	goto audio_enable_flag6;
        case m2c::kloc_376a7: 	goto loc_376a7;
        case m2c::kloc_376c5: 	goto loc_376c5;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool audio_disable_flag6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    audio_disable_flag6:
    _begin:
#undef var_2
#define var_2 -2
	// 82022 var_2           = word ptr -2 ;~ 28AF:05FA
cs=0x28af;eip=0x0005fa; 	X(PUSH(bp));	// 82024 push    bp ;~ 28AF:05FA
cs=0x28af;eip=0x0005fb; 	T(MOV(bp, sp));	// 82025 mov     bp, sp ;~ 28AF:05FB
cs=0x28af;eip=0x0005fd; 	T(SUB(sp, 4));	// 82026 sub     sp, 4 ;~ 28AF:05FD
cs=0x28af;eip=0x000600; 	X(PUSH(di));	// 82027 push    di ;~ 28AF:0600
cs=0x28af;eip=0x000601; 	X(PUSH(si));	// 82028 push    si ;~ 28AF:0601
cs=0x28af;eip=0x000602; 	T(CMP(audioflag6, 0));	// 82029 cmp     audioflag6, 0 ;~ 28AF:0602
cs=0x28af;eip=0x000607; 	J(JZ(loc_37702));	// 82030 jz      short loc_37702 ;~ 28AF:0607
cs=0x28af;eip=0x000609; 	T(MOV(si, 0x10));	// 82031 mov     si, 10h ;~ 28AF:0609
cs=0x28af;eip=0x00060c; 	T(MOV(di, offset(dseg,audiochunks_unk2)+0x28));	// 82032 mov     di, (offset audiochunks_unk2+28h) ;~ 28AF:060C
loc_376df:
	// 9525 
cs=0x28af;eip=0x00060f; 	T(MOV(al, *(raddr(ds,di))));	// 82035 mov     al, [di] ;~ 28AF:060F
cs=0x28af;eip=0x000611; 	X(MOV(*((&byte_428d6)+si), al));	// 82036 mov     byte_428D6[si], al ;~ 28AF:0611
cs=0x28af;eip=0x000615; 	T(SUB(ax, ax));	// 82037 sub     ax, ax ;~ 28AF:0615
cs=0x28af;eip=0x000617; 	X(PUSH(ax));	// 82038 push    ax ;~ 28AF:0617
cs=0x28af;eip=0x000618; 	X(PUSH(si));	// 82039 push    si ;~ 28AF:0618
cs=0x28af;eip=0x000619; 	J(CALLF(audio_unk2,0));	// 82040 call    audio_unk2 ;~ 28AF:0619
cs=0x28af;eip=0x00061e; 	T(ADD(sp, 4));	// 82041 add     sp, 4 ;~ 28AF:061E
cs=0x28af;eip=0x000621; 	T(ADD(di, 0x4C));	// 82042 add     di, 4Ch ; 'L' ;~ 28AF:0621
cs=0x28af;eip=0x000624; 	T(INC(si));	// 82043 inc     si ;~ 28AF:0624
cs=0x28af;eip=0x000625; 	T(CMP(si, 0x18));	// 82044 cmp     si, 18h ;~ 28AF:0625
cs=0x28af;eip=0x000628; 	J(JL(loc_376df));	// 82045 jl      short loc_376DF ;~ 28AF:0628
cs=0x28af;eip=0x00062a; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), si));	// 82046 mov     [bp+var_2], si ;~ 28AF:062A
cs=0x28af;eip=0x00062d; 	X(MOV(audioflag6, 0));	// 82047 mov     audioflag6, 0 ;~ 28AF:062D
loc_37702:
	// 9526 
cs=0x28af;eip=0x000632; 	X(POP(si));	// 82050 pop     si ;~ 28AF:0632
cs=0x28af;eip=0x000633; 	X(POP(di));	// 82051 pop     di ;~ 28AF:0633
cs=0x28af;eip=0x000634; 	T(MOV(sp, bp));	// 82052 mov     sp, bp ;~ 28AF:0634
cs=0x28af;eip=0x000636; 	X(POP(bp));	// 82053 pop     bp ;~ 28AF:0636
cs=0x28af;eip=0x000637; 	J(RETF(0));	// 82054 retf ;~ 28AF:0637

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kaudio_disable_flag6: 	goto audio_disable_flag6;
        case m2c::kloc_376df: 	goto loc_376df;
        case m2c::kloc_37702: 	goto loc_37702;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool audio_toggle_flag6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    audio_toggle_flag6:
    _begin:
cs=0x28af;eip=0x000638; 	T(CMP(audioflag6, 1));	// 82063 cmp     audioflag6, 1 ;~ 28AF:0638
cs=0x28af;eip=0x00063d; 	J(JNZ(loc_37716));	// 82064 jnz     short loc_37716 ;~ 28AF:063D
cs=0x28af;eip=0x00063f; 	X(PUSH(cs));	// 82065 push    cs ;~ 28AF:063F
cs=0x28af;eip=0x000640; 	J(CALL(audio_disable_flag6,0));	// 82066 call    near ptr audio_disable_flag6 ;~ 28AF:0640
cs=0x28af;eip=0x000643; 	T(SUB(ax, ax));	// 82067 sub     ax, ax ;~ 28AF:0643
cs=0x28af;eip=0x000645; 	J(RETF(0));	// 82068 retf ;~ 28AF:0645
loc_37716:
	// 9527 
cs=0x28af;eip=0x000646; 	X(PUSH(cs));	// 82072 push    cs ;~ 28AF:0646
cs=0x28af;eip=0x000647; 	J(CALL(audio_enable_flag6,0));	// 82073 call    near ptr audio_enable_flag6 ;~ 28AF:0647
cs=0x28af;eip=0x00064a; 	T(MOV(ax, 1));	// 82074 mov     ax, 1 ;~ 28AF:064A
cs=0x28af;eip=0x00064d; 	J(RETF(0));	// 82075 retf ;~ 28AF:064D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kaudio_toggle_flag6: 	goto audio_toggle_flag6;
        case m2c::kloc_37716: 	goto loc_37716;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3771e(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3771e:
    _begin:
#undef arg_0
#define arg_0 6
	// 82086 arg_0           = word ptr  6 ;~ 28AF:064E
cs=0x28af;eip=0x00064e; 	X(PUSH(bp));	// 82088 push    bp ;~ 28AF:064E
cs=0x28af;eip=0x00064f; 	T(MOV(bp, sp));	// 82089 mov     bp, sp ;~ 28AF:064F
cs=0x28af;eip=0x000651; 	T(CMP(audioflag6, 0));	// 82090 cmp     audioflag6, 0 ;~ 28AF:0651
cs=0x28af;eip=0x000656; 	J(JNZ(loc_3772e));	// 82091 jnz     short loc_3772E ;~ 28AF:0656
loc_37728:
	// 9528 
cs=0x28af;eip=0x000658; 	T(MOV(ax, 1));	// 82095 mov     ax, 1 ;~ 28AF:0658
cs=0x28af;eip=0x00065b; 	X(POP(bp));	// 82096 pop     bp ;~ 28AF:065B
cs=0x28af;eip=0x00065c; 	J(RETF(0));	// 82097 retf ;~ 28AF:065C
loc_3772e:
	// 9529 
cs=0x28af;eip=0x00065e; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x10));	// 82102 cmp     [bp+arg_0], 10h ;~ 28AF:065E
cs=0x28af;eip=0x000662; 	J(JL(loc_37728));	// 82103 jl      short loc_37728 ;~ 28AF:0662
cs=0x28af;eip=0x000664; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x17));	// 82104 cmp     [bp+arg_0], 17h ;~ 28AF:0664
cs=0x28af;eip=0x000668; 	J(JG(loc_37728));	// 82105 jg      short loc_37728 ;~ 28AF:0668
cs=0x28af;eip=0x00066a; 	T(MOV(ax, 0x4C));	// 82106 mov     ax, 4Ch ; 'L' ;~ 28AF:066A
cs=0x28af;eip=0x00066d; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 82107 imul    [bp+arg_0] ;~ 28AF:066D
cs=0x28af;eip=0x000670; 	T(MOV(bx, ax));	// 82108 mov     bx, ax ;~ 28AF:0670
cs=0x28af;eip=0x000672; 	T(MOV(ax, *(dw*)((audiochunks_unk)+bx)));	// 82109 mov     ax, word ptr audiochunks_unk[bx] ;~ 28AF:0672
cs=0x28af;eip=0x000676; 	T(OR(ax, *(dw*)(((audiochunks_unk)+2)+bx)));	// 82110 or      ax, word ptr (audiochunks_unk+2)[bx] ;~ 28AF:0676
cs=0x28af;eip=0x00067a; 	J(JZ(loc_37728));	// 82111 jz      short loc_37728 ;~ 28AF:067A
cs=0x28af;eip=0x00067c; 	T(SUB(ax, ax));	// 82112 sub     ax, ax ;~ 28AF:067C
cs=0x28af;eip=0x00067e; 	X(POP(bp));	// 82113 pop     bp ;~ 28AF:067E
cs=0x28af;eip=0x00067f; 	J(RETF(0));	// 82114 retf ;~ 28AF:067F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_37728: 	goto loc_37728;
        case m2c::kloc_3772e: 	goto loc_3772e;
        case m2c::ksub_3771e: 	goto sub_3771e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool nopsub_37750(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    nopsub_37750:
    _begin:
#undef arg_0
#define arg_0 6
	// 82124 arg_0           = word ptr  6 ;~ 28AF:0680
#undef arg_2
#define arg_2 8
	// 82125 arg_2           = word ptr  8 ;~ 28AF:0680
#undef arg_4
#define arg_4 0x0A
	// 82126 arg_4           = word ptr  0Ah ;~ 28AF:0680
cs=0x28af;eip=0x000680; 	X(PUSH(bp));	// 82128 push    bp ;~ 28AF:0680
cs=0x28af;eip=0x000681; 	T(MOV(bp, sp));	// 82129 mov     bp, sp ;~ 28AF:0681
cs=0x28af;eip=0x000683; 	T(MOV(ax, 0x4C));	// 82130 mov     ax, 4Ch ; 'L' ;~ 28AF:0683
cs=0x28af;eip=0x000686; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 82131 mul     [bp+arg_0] ;~ 28AF:0686
cs=0x28af;eip=0x000689; 	T(MOV(bx, ax));	// 82132 mov     bx, ax ;~ 28AF:0689
cs=0x28af;eip=0x00068b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 82133 mov     ax, [bp+arg_2] ;~ 28AF:068B
cs=0x28af;eip=0x00068e; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_4))));	// 82134 mov     dx, [bp+arg_4] ;~ 28AF:068E
cs=0x28af;eip=0x000691; 	X(MOV(*(dw*)(((audiochunks_unk)+0x48)+bx), ax));	// 82135 mov     word ptr (audiochunks_unk+48h)[bx], ax ;~ 28AF:0691
cs=0x28af;eip=0x000695; 	X(MOV(*(dw*)(((audiochunks_unk)+0x4A)+bx), dx));	// 82136 mov     word ptr (audiochunks_unk+4Ah)[bx], dx ;~ 28AF:0695
cs=0x28af;eip=0x000699; 	X(POP(bp));	// 82137 pop     bp ;~ 28AF:0699
cs=0x28af;eip=0x00069a; 	J(RETF(0));	// 82138 retf ;~ 28AF:069A

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::knopsub_37750: 	goto nopsub_37750;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool audio_driver_func3f(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    audio_driver_func3f:
    _begin:
#undef var_a
#define var_a -0x0A
	// 82150 var_A           = dword ptr -0Ah ;~ 28AF:069C
#undef var_6
#define var_6 -6
	// 82151 var_6           = word ptr -6 ;~ 28AF:069C
#undef var_4
#define var_4 -4
	// 82152 var_4           = word ptr -4 ;~ 28AF:069C
#undef var_2
#define var_2 -2
	// 82153 var_2           = word ptr -2 ;~ 28AF:069C
#undef arg_0
#define arg_0 6
	// 82154 arg_0           = word ptr  6 ;~ 28AF:069C
cs=0x28af;eip=0x00069c; 	X(PUSH(bp));	// 82156 push    bp ;~ 28AF:069C
cs=0x28af;eip=0x00069d; 	T(MOV(bp, sp));	// 82157 mov     bp, sp ;~ 28AF:069D
cs=0x28af;eip=0x00069f; 	T(SUB(sp, 0x0A));	// 82158 sub     sp, 0Ah ;~ 28AF:069F
cs=0x28af;eip=0x0006a2; 	X(PUSH(si));	// 82159 push    si ;~ 28AF:06A2
cs=0x28af;eip=0x0006a3; 	T(CMP(byte_40634, 0));	// 82160 cmp     byte_40634, 0 ;~ 28AF:06A3
cs=0x28af;eip=0x0006a8; 	J(JNZ(loc_377c6));	// 82161 jnz     short loc_377C6 ;~ 28AF:06A8
cs=0x28af;eip=0x0006aa; 	T(MOV(al, byte_45950));	// 82162 mov     al, byte_45950 ;~ 28AF:06AA
cs=0x28af;eip=0x0006ad; 	T(SUB(ah, ah));	// 82163 sub     ah, ah ;~ 28AF:06AD
cs=0x28af;eip=0x0006af; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 82164 mov     [bp+var_2], ax ;~ 28AF:06AF
cs=0x28af;eip=0x0006b2; 	T(OR(ax, ax));	// 82165 or      ax, ax ;~ 28AF:06B2
cs=0x28af;eip=0x0006b4; 	J(JG(loc_37789));	// 82166 jg      short loc_37789 ;~ 28AF:06B4
cs=0x28af;eip=0x0006b6; 	J(JMP(loc_37820));	// 82167 jmp     loc_37820 ;~ 28AF:06B6
loc_37789:
	// 9530 
cs=0x28af;eip=0x0006b9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 82171 mov     ax, [bp+arg_0] ;~ 28AF:06B9
cs=0x28af;eip=0x0006bc; 	T(CWD);	// 82172 cwd ;~ 28AF:06BC
cs=0x28af;eip=0x0006bd; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 82173 mov     [bp+var_6], ax ;~ 28AF:06BD
cs=0x28af;eip=0x0006c0; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 82174 mov     [bp+var_4], dx ;~ 28AF:06C0
cs=0x28af;eip=0x0006c3; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_2))));	// 82175 mov     si, [bp+var_2] ;~ 28AF:06C3
loc_37796:
	// 9531 
cs=0x28af;eip=0x0006c6; 	X(MOV(word_4063a, 1));	// 82178 mov     word_4063A, 1 ;~ 28AF:06C6
cs=0x28af;eip=0x0006cc; 	X(PUSH(si));	// 82179 push    si ;~ 28AF:06CC
cs=0x28af;eip=0x0006cd; 	X(PUSH(cs));	// 82180 push    cs ;~ 28AF:06CD
cs=0x28af;eip=0x0006ce; 	J(CALL(sub_37868,0));	// 82181 call    near ptr sub_37868 ;~ 28AF:06CE
cs=0x28af;eip=0x0006d1; 	T(ADD(sp, 2));	// 82182 add     sp, 2 ;~ 28AF:06D1
cs=0x28af;eip=0x0006d4; 	X(MOV(word_4063a, 0));	// 82183 mov     word_4063A, 0 ;~ 28AF:06D4
cs=0x28af;eip=0x0006da; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 82184 push    [bp+var_4] ;~ 28AF:06DA
cs=0x28af;eip=0x0006dd; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 82185 push    [bp+var_6] ;~ 28AF:06DD
cs=0x28af;eip=0x0006e0; 	J(CALLF(timer_copy_counter,0));	// 82186 call    timer_copy_counter ; Stores a copy of the timer counter with the given ticks added. ;~ 28AF:06E0
cs=0x28af;eip=0x0006e5; 	T(ADD(sp, 4));	// 82187 add     sp, 4 ;~ 28AF:06E5
cs=0x28af;eip=0x0006e8; 	J(CALLF(timer_wait_for_dx,0));	// 82188 call    timer_wait_for_dx ;~ 28AF:06E8
cs=0x28af;eip=0x0006ed; 	T(SUB(si, 2));	// 82189 sub     si, 2 ;~ 28AF:06ED
cs=0x28af;eip=0x0006f0; 	T(OR(si, si));	// 82190 or      si, si ;~ 28AF:06F0
cs=0x28af;eip=0x0006f2; 	J(JG(loc_37796));	// 82191 jg      short loc_37796 ;~ 28AF:06F2
cs=0x28af;eip=0x0006f4; 	J(JMP(loc_3781d));	// 82192 jmp     short loc_3781D ;~ 28AF:06F4
loc_377c6:
	// 9532 
cs=0x28af;eip=0x0006f6; 	T(MOV(si, 0x64));	// 82196 mov     si, 64h ; 'd' ;~ 28AF:06F6
cs=0x28af;eip=0x0006f9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 82197 mov     ax, [bp+arg_0] ;~ 28AF:06F9
cs=0x28af;eip=0x0006fc; 	T(CWD);	// 82198 cwd ;~ 28AF:06FC
cs=0x28af;eip=0x0006fd; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 82199 mov     [bp+var_6], ax ;~ 28AF:06FD
cs=0x28af;eip=0x000700; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 82200 mov     [bp+var_4], dx ;~ 28AF:0700
loc_377d3:
	// 9533 
cs=0x28af;eip=0x000703; 	X(MOV(word_4063a, 1));	// 82203 mov     word_4063A, 1 ;~ 28AF:0703
cs=0x28af;eip=0x000709; 	T(MOV(ax, si));	// 82204 mov     ax, si ;~ 28AF:0709
cs=0x28af;eip=0x00070b; 	X(MOV(byte_40639, al));	// 82205 mov     byte_40639, al ;~ 28AF:070B
cs=0x28af;eip=0x00070e; 	T(MOV(ax, offset(dseg,unk_40636)));	// 82206 mov     ax, offset unk_40636 ;~ 28AF:070E
cs=0x28af;eip=0x000711; 	X(PUSH(ds));	// 82207 push    ds ;~ 28AF:0711
cs=0x28af;eip=0x000712; 	X(PUSH(ax));	// 82208 push    ax ;~ 28AF:0712
cs=0x28af;eip=0x000713; 	T(MOV(ax, 4));	// 82209 mov     ax, 4 ;~ 28AF:0713
cs=0x28af;eip=0x000716; 	X(PUSH(ax));	// 82210 push    ax ;~ 28AF:0716
cs=0x28af;eip=0x000717; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 82211 mov     ax, word ptr audiodriverbinary ;~ 28AF:0717
cs=0x28af;eip=0x00071a; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 82212 mov     dx, word ptr audiodriverbinary+2 ;~ 28AF:071A
cs=0x28af;eip=0x00071e; 	T(ADD(ax, 0x3F));	// 82213 add     ax, 3Fh ; '?' ;~ 28AF:071E
cs=0x28af;eip=0x000721; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a+2))), dx));	// 82214 mov     word ptr [bp+var_A+2], dx ;~ 28AF:0721
cs=0x28af;eip=0x000724; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a))), ax));	// 82215 mov     word ptr [bp+var_A], ax ;~ 28AF:0724
cs=0x28af;eip=0x000727; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_a))));	// 82216 call    [bp+var_A] ;~ 28AF:0727
cs=0x28af;eip=0x00072a; 	T(ADD(sp, 6));	// 82217 add     sp, 6 ;~ 28AF:072A
cs=0x28af;eip=0x00072d; 	X(MOV(word_4063a, 0));	// 82218 mov     word_4063A, 0 ;~ 28AF:072D
cs=0x28af;eip=0x000733; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 82219 push    [bp+var_4] ;~ 28AF:0733
cs=0x28af;eip=0x000736; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 82220 push    [bp+var_6] ;~ 28AF:0736
cs=0x28af;eip=0x000739; 	J(CALLF(timer_copy_counter,0));	// 82221 call    timer_copy_counter ; Stores a copy of the timer counter with the given ticks added. ;~ 28AF:0739
cs=0x28af;eip=0x00073e; 	T(ADD(sp, 4));	// 82222 add     sp, 4 ;~ 28AF:073E
cs=0x28af;eip=0x000741; 	J(CALLF(timer_wait_for_dx,0));	// 82223 call    timer_wait_for_dx ;~ 28AF:0741
cs=0x28af;eip=0x000746; 	T(SUB(si, 2));	// 82224 sub     si, 2 ;~ 28AF:0746
cs=0x28af;eip=0x000749; 	T(OR(si, si));	// 82225 or      si, si ;~ 28AF:0749
cs=0x28af;eip=0x00074b; 	J(JG(loc_377d3));	// 82226 jg      short loc_377D3 ;~ 28AF:074B
loc_3781d:
	// 9534 
cs=0x28af;eip=0x00074d; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), si));	// 82229 mov     [bp+var_2], si ;~ 28AF:074D
loc_37820:
	// 9535 
cs=0x28af;eip=0x000750; 	X(PUSH(cs));	// 82232 push    cs ;~ 28AF:0750
cs=0x28af;eip=0x000751; 	J(CALL(sub_3736a,0));	// 82233 call    near ptr sub_3736A ;~ 28AF:0751
cs=0x28af;eip=0x000754; 	T(CMP(byte_40634, 0));	// 82234 cmp     byte_40634, 0 ;~ 28AF:0754
cs=0x28af;eip=0x000759; 	J(JZ(loc_37862));	// 82235 jz      short loc_37862 ;~ 28AF:0759
cs=0x28af;eip=0x00075b; 	T(MOV(ax, 0x32));	// 82236 mov     ax, 32h ; '2' ;~ 28AF:075B
cs=0x28af;eip=0x00075e; 	T(CWD);	// 82237 cwd ;~ 28AF:075E
cs=0x28af;eip=0x00075f; 	X(PUSH(dx));	// 82238 push    dx ;~ 28AF:075F
cs=0x28af;eip=0x000760; 	X(PUSH(ax));	// 82239 push    ax ;~ 28AF:0760
cs=0x28af;eip=0x000761; 	J(CALLF(timer_copy_counter,0));	// 82240 call    timer_copy_counter ; Stores a copy of the timer counter with the given ticks added. ;~ 28AF:0761
cs=0x28af;eip=0x000766; 	T(ADD(sp, 4));	// 82241 add     sp, 4 ;~ 28AF:0766
cs=0x28af;eip=0x000769; 	J(CALLF(timer_wait_for_dx,0));	// 82242 call    timer_wait_for_dx ;~ 28AF:0769
cs=0x28af;eip=0x00076e; 	X(MOV(byte_40639, 0x64));	// 82243 mov     byte_40639, 64h ; 'd' ;~ 28AF:076E
cs=0x28af;eip=0x000773; 	T(MOV(ax, offset(dseg,unk_40636)));	// 82244 mov     ax, offset unk_40636 ;~ 28AF:0773
cs=0x28af;eip=0x000776; 	X(PUSH(ds));	// 82245 push    ds ;~ 28AF:0776
cs=0x28af;eip=0x000777; 	X(PUSH(ax));	// 82246 push    ax ;~ 28AF:0777
cs=0x28af;eip=0x000778; 	T(MOV(ax, 4));	// 82247 mov     ax, 4 ;~ 28AF:0778
cs=0x28af;eip=0x00077b; 	X(PUSH(ax));	// 82248 push    ax ;~ 28AF:077B
cs=0x28af;eip=0x00077c; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 82249 mov     ax, word ptr audiodriverbinary ;~ 28AF:077C
cs=0x28af;eip=0x00077f; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 82250 mov     dx, word ptr audiodriverbinary+2 ;~ 28AF:077F
cs=0x28af;eip=0x000783; 	T(ADD(ax, 0x3F));	// 82251 add     ax, 3Fh ; '?' ;~ 28AF:0783
cs=0x28af;eip=0x000786; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a+2))), dx));	// 82252 mov     word ptr [bp+var_A+2], dx ;~ 28AF:0786
cs=0x28af;eip=0x000789; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a))), ax));	// 82253 mov     word ptr [bp+var_A], ax ;~ 28AF:0789
cs=0x28af;eip=0x00078c; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_a))));	// 82254 call    [bp+var_A] ;~ 28AF:078C
cs=0x28af;eip=0x00078f; 	T(ADD(sp, 6));	// 82255 add     sp, 6 ;~ 28AF:078F
loc_37862:
	// 9536 
cs=0x28af;eip=0x000792; 	X(POP(si));	// 82258 pop     si ;~ 28AF:0792
cs=0x28af;eip=0x000793; 	T(MOV(sp, bp));	// 82259 mov     sp, bp ;~ 28AF:0793
cs=0x28af;eip=0x000795; 	X(POP(bp));	// 82260 pop     bp ;~ 28AF:0795
cs=0x28af;eip=0x000796; 	J(RETF(0));	// 82261 retf ;~ 28AF:0796

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kaudio_driver_func3f: 	goto audio_driver_func3f;
        case m2c::kloc_37789: 	goto loc_37789;
        case m2c::kloc_37796: 	goto loc_37796;
        case m2c::kloc_377c6: 	goto loc_377c6;
        case m2c::kloc_377d3: 	goto loc_377d3;
        case m2c::kloc_3781d: 	goto loc_3781d;
        case m2c::kloc_37820: 	goto loc_37820;
        case m2c::kloc_37862: 	goto loc_37862;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_37868(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_37868:
    _begin:
#undef var_2
#define var_2 -2
	// 82274 var_2           = word ptr -2 ;~ 28AF:0798
#undef arg_0
#define arg_0 6
	// 82275 arg_0           = word ptr  6 ;~ 28AF:0798
cs=0x28af;eip=0x000798; 	X(PUSH(bp));	// 82277 push    bp ;~ 28AF:0798
cs=0x28af;eip=0x000799; 	T(MOV(bp, sp));	// 82278 mov     bp, sp ;~ 28AF:0799
cs=0x28af;eip=0x00079b; 	T(SUB(sp, 2));	// 82279 sub     sp, 2 ;~ 28AF:079B
cs=0x28af;eip=0x00079e; 	X(PUSH(di));	// 82280 push    di ;~ 28AF:079E
cs=0x28af;eip=0x00079f; 	X(PUSH(si));	// 82281 push    si ;~ 28AF:079F
cs=0x28af;eip=0x0007a0; 	T(SUB(si, si));	// 82282 sub     si, si ;~ 28AF:07A0
cs=0x28af;eip=0x0007a2; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 82283 mov     di, [bp+arg_0] ;~ 28AF:07A2
cs=0x28af;eip=0x0007a5; 	J(JMP(loc_37883));	// 82284 jmp     short loc_37883 ;~ 28AF:07A5
loc_37878:
	// 9537 
cs=0x28af;eip=0x0007a8; 	X(PUSH(di));	// 82289 push    di ;~ 28AF:07A8
cs=0x28af;eip=0x0007a9; 	X(PUSH(si));	// 82290 push    si ;~ 28AF:07A9
cs=0x28af;eip=0x0007aa; 	J(CALLF(audio_unk2,0));	// 82291 call    audio_unk2 ;~ 28AF:07AA
cs=0x28af;eip=0x0007af; 	T(ADD(sp, 4));	// 82292 add     sp, 4 ;~ 28AF:07AF
cs=0x28af;eip=0x0007b2; 	T(INC(si));	// 82293 inc     si ;~ 28AF:07B2
loc_37883:
	// 9538 
cs=0x28af;eip=0x0007b3; 	T(MOV(ax, si));	// 82296 mov     ax, si ;~ 28AF:07B3
cs=0x28af;eip=0x0007b5; 	T(MOV(cl, byte_44290));	// 82297 mov     cl, byte_44290 ;~ 28AF:07B5
cs=0x28af;eip=0x0007b9; 	T(SUB(ch, ch));	// 82298 sub     ch, ch ;~ 28AF:07B9
cs=0x28af;eip=0x0007bb; 	T(CMP(ax, cx));	// 82299 cmp     ax, cx ;~ 28AF:07BB
cs=0x28af;eip=0x0007bd; 	J(JC(loc_37878));	// 82300 jb      short loc_37878 ;~ 28AF:07BD
cs=0x28af;eip=0x0007bf; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), si));	// 82301 mov     [bp+var_2], si ;~ 28AF:07BF
cs=0x28af;eip=0x0007c2; 	X(POP(si));	// 82302 pop     si ;~ 28AF:07C2
cs=0x28af;eip=0x0007c3; 	X(POP(di));	// 82303 pop     di ;~ 28AF:07C3
cs=0x28af;eip=0x0007c4; 	T(MOV(sp, bp));	// 82304 mov     sp, bp ;~ 28AF:07C4
cs=0x28af;eip=0x0007c6; 	X(POP(bp));	// 82305 pop     bp ;~ 28AF:07C6
cs=0x28af;eip=0x0007c7; 	J(RETF(0));	// 82306 retf ;~ 28AF:07C7

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_37878: 	goto loc_37878;
        case m2c::kloc_37883: 	goto loc_37883;
        case m2c::ksub_37868: 	goto sub_37868;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool nopsub_37898(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    nopsub_37898:
    _begin:
#undef arg_0
#define arg_0 6
	// 82316 arg_0           = word ptr  6 ;~ 28AF:07C8
cs=0x28af;eip=0x0007c8; 	X(PUSH(bp));	// 82318 push    bp ;~ 28AF:07C8
cs=0x28af;eip=0x0007c9; 	T(MOV(bp, sp));	// 82319 mov     bp, sp ;~ 28AF:07C9
cs=0x28af;eip=0x0007cb; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_0))));	// 82320 mov     al, byte ptr [bp+arg_0] ;~ 28AF:07CB
cs=0x28af;eip=0x0007ce; 	X(MOV(byte_45950, al));	// 82321 mov     byte_45950, al ;~ 28AF:07CE
cs=0x28af;eip=0x0007d1; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 82322 push    [bp+arg_0] ;~ 28AF:07D1
cs=0x28af;eip=0x0007d4; 	X(PUSH(cs));	// 82323 push    cs ;~ 28AF:07D4
cs=0x28af;eip=0x0007d5; 	J(CALL(sub_37868,0));	// 82324 call    near ptr sub_37868 ;~ 28AF:07D5
cs=0x28af;eip=0x0007d8; 	T(ADD(sp, 2));	// 82325 add     sp, 2 ;~ 28AF:07D8
cs=0x28af;eip=0x0007db; 	X(POP(bp));	// 82326 pop     bp ;~ 28AF:07DB
cs=0x28af;eip=0x0007dc; 	J(RETF(0));	// 82327 retf ;~ 28AF:07DC

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::knopsub_37898: 	goto nopsub_37898;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool nopsub_378ae(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    nopsub_378ae:
    _begin:
#undef arg_0
#define arg_0 6
	// 82339 arg_0           = word ptr  6 ;~ 28AF:07DE
cs=0x28af;eip=0x0007de; 	X(PUSH(bp));	// 82341 push    bp ;~ 28AF:07DE
cs=0x28af;eip=0x0007df; 	T(MOV(bp, sp));	// 82342 mov     bp, sp ;~ 28AF:07DF
cs=0x28af;eip=0x0007e1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 82343 mov     bx, [bp+arg_0] ;~ 28AF:07E1
cs=0x28af;eip=0x0007e4; 	T(MOV(al, *((&byte_44d06)+bx)));	// 82344 mov     al, byte_44D06[bx] ;~ 28AF:07E4
cs=0x28af;eip=0x0007e8; 	T(SUB(ah, ah));	// 82345 sub     ah, ah ;~ 28AF:07E8
cs=0x28af;eip=0x0007ea; 	X(POP(bp));	// 82346 pop     bp ;~ 28AF:07EA
cs=0x28af;eip=0x0007eb; 	J(RETF(0));	// 82347 retf ;~ 28AF:07EB

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::knopsub_378ae: 	goto nopsub_378ae;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool nopsub_378bc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    nopsub_378bc:
    _begin:
#undef arg_0
#define arg_0 6
	// 82357 arg_0           = word ptr  6 ;~ 28AF:07EC
cs=0x28af;eip=0x0007ec; 	X(PUSH(bp));	// 82359 push    bp ;~ 28AF:07EC
cs=0x28af;eip=0x0007ed; 	T(MOV(bp, sp));	// 82360 mov     bp, sp ;~ 28AF:07ED
cs=0x28af;eip=0x0007ef; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 82361 mov     bx, [bp+arg_0] ;~ 28AF:07EF
cs=0x28af;eip=0x0007f2; 	T(MOV(al, *((&byte_44aca)+bx)));	// 82362 mov     al, byte_44ACA[bx] ;~ 28AF:07F2
cs=0x28af;eip=0x0007f6; 	T(SUB(ah, ah));	// 82363 sub     ah, ah ;~ 28AF:07F6
cs=0x28af;eip=0x0007f8; 	X(POP(bp));	// 82364 pop     bp ;~ 28AF:07F8
cs=0x28af;eip=0x0007f9; 	J(RETF(0));	// 82365 retf ;~ 28AF:07F9

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::knopsub_378bc: 	goto nopsub_378bc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group19(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group19:
    _begin:
audio_load_driver:
	// 82374 
#undef var_c
#define var_c -0x0C
	// 82376 var_C           = dword ptr -0Ch ;~ 28AF:07FA
#undef var_4
#define var_4 -4
	// 82377 var_4           = word ptr -4 ;~ 28AF:07FA
#undef var_2
#define var_2 -2
	// 82378 var_2           = word ptr -2 ;~ 28AF:07FA
cs=0x28af;eip=0x0007fa; 	X(PUSH(bp));	// 82380 push    bp ;~ 28AF:07FA
cs=0x28af;eip=0x0007fb; 	T(MOV(bp, sp));	// 82381 mov     bp, sp ;~ 28AF:07FB
cs=0x28af;eip=0x0007fd; 	T(SUB(sp, 0x0C));	// 82382 sub     sp, 0Ch ;~ 28AF:07FD
cs=0x28af;eip=0x000800; 	X(PUSH(di));	// 82383 push    di ;~ 28AF:0800
cs=0x28af;eip=0x000801; 	X(PUSH(si));	// 82384 push    si ;~ 28AF:0801
cs=0x28af;eip=0x000802; 	T(NOP);	// 82385 nop ;~ 28AF:0802
cs=0x28af;eip=0x000803; 	T(NOP);	// 82386 nop ;~ 28AF:0803
cs=0x28af;eip=0x000804; 	T(NOP);	// 82387 nop ;~ 28AF:0804
cs=0x28af;eip=0x000805; 	T(NOP);	// 82388 nop ;~ 28AF:0805
cs=0x28af;eip=0x000806; 	T(NOP);	// 82389 nop ;~ 28AF:0806
cs=0x28af;eip=0x000807; 	T(NOP);	// 82390 nop ;~ 28AF:0807
cs=0x28af;eip=0x000808; 	T(NOP);	// 82391 nop ;~ 28AF:0808
cs=0x28af;eip=0x000809; 	T(NOP);	// 82392 nop ;~ 28AF:0809
cs=0x28af;eip=0x00080a; 	T(NOP);	// 82393 nop ;~ 28AF:080A
cs=0x28af;eip=0x00080b; 	T(NOP);	// 82394 nop ;~ 28AF:080B
cs=0x28af;eip=0x00080c; 	T(NOP);	// 82395 nop ;~ 28AF:080C
cs=0x28af;eip=0x00080d; 	T(NOP);	// 82396 nop ;~ 28AF:080D
cs=0x28af;eip=0x00080e; 	T(NOP);	// 82397 nop ;~ 28AF:080E
cs=0x28af;eip=0x00080f; 	T(NOP);	// 82398 nop ;~ 28AF:080F
cs=0x28af;eip=0x000810; 	T(NOP);	// 82399 nop ;~ 28AF:0810
cs=0x28af;eip=0x000811; 	T(NOP);	// 82400 nop ;~ 28AF:0811
cs=0x28af;eip=0x000812; 	T(NOP);	// 82401 nop ;~ 28AF:0812
cs=0x28af;eip=0x000813; 	T(NOP);	// 82402 nop ;~ 28AF:0813
cs=0x28af;eip=0x000814; 	T(NOP);	// 82403 nop ;~ 28AF:0814
cs=0x28af;eip=0x000815; 	T(NOP);	// 82404 nop ;~ 28AF:0815
cs=0x28af;eip=0x000816; 	T(NOP);	// 82405 nop ;~ 28AF:0816
cs=0x28af;eip=0x000817; 	T(NOP);	// 82406 nop ;~ 28AF:0817
cs=0x28af;eip=0x000818; 	T(NOP);	// 82407 nop ;~ 28AF:0818
cs=0x28af;eip=0x000819; 	T(NOP);	// 82408 nop ;~ 28AF:0819
cs=0x28af;eip=0x00081a; 	T(NOP);	// 82409 nop ;~ 28AF:081A
cs=0x28af;eip=0x00081b; 	T(NOP);	// 82410 nop ;~ 28AF:081B
cs=0x28af;eip=0x00081c; 	T(NOP);	// 82411 nop ;~ 28AF:081C
cs=0x28af;eip=0x00081d; 	T(NOP);	// 82412 nop ;~ 28AF:081D
cs=0x28af;eip=0x00081e; 	T(MOV(ax, m2c::kaudiodrv_atexit));	// 82413 mov     ax, offset audiodrv_atexit ;~ 28AF:081E
cs=0x28af;eip=0x000821; 	T(MOV(dx, seg_offset(seg027)));	// 82414 mov     dx, seg seg027 ;~ 28AF:0821
cs=0x28af;eip=0x000824; 	X(PUSH(dx));	// 82415 push    dx ;~ 28AF:0824
cs=0x28af;eip=0x000825; 	X(PUSH(ax));	// 82416 push    ax ;~ 28AF:0825
cs=0x28af;eip=0x000826; 	J(CALLF(add_exit_handler,0));	// 82417 call    add_exit_handler ;~ 28AF:0826
cs=0x28af;eip=0x00082b; 	T(ADD(sp, 4));	// 82418 add     sp, 4 ;~ 28AF:082B
cs=0x28af;eip=0x00082e; 	T(NOP);	// 82419 nop ;~ 28AF:082E
cs=0x28af;eip=0x00082f; 	T(NOP);	// 82420 nop ;~ 28AF:082F
cs=0x28af;eip=0x000830; 	T(NOP);	// 82421 nop ;~ 28AF:0830
cs=0x28af;eip=0x000831; 	T(NOP);	// 82422 nop ;~ 28AF:0831
cs=0x28af;eip=0x000832; 	T(NOP);	// 82423 nop ;~ 28AF:0832
cs=0x28af;eip=0x000833; 	T(NOP);	// 82424 nop ;~ 28AF:0833
cs=0x28af;eip=0x000834; 	T(NOP);	// 82425 nop ;~ 28AF:0834
cs=0x28af;eip=0x000835; 	T(NOP);	// 82426 nop ;~ 28AF:0835
cs=0x28af;eip=0x000836; 	T(NOP);	// 82427 nop ;~ 28AF:0836
cs=0x28af;eip=0x000837; 	T(NOP);	// 82428 nop ;~ 28AF:0837
cs=0x28af;eip=0x000838; 	T(NOP);	// 82430 nop ;~ 28AF:0838
cs=0x28af;eip=0x000839; 	T(NOP);	// 82431 nop ;~ 28AF:0839
cs=0x28af;eip=0x00083a; 	T(NOP);	// 82432 nop ;~ 28AF:083A
cs=0x28af;eip=0x00083b; 	T(NOP);	// 82433 nop ;~ 28AF:083B
cs=0x28af;eip=0x00083c; 	T(NOP);	// 82434 nop ;~ 28AF:083C
cs=0x28af;eip=0x00083d; 	T(NOP);	// 82435 nop ;~ 28AF:083D
cs=0x28af;eip=0x00083e; 	T(NOP);	// 82436 nop ;~ 28AF:083E
cs=0x28af;eip=0x00083f; 	T(NOP);	// 82437 nop ;~ 28AF:083F
cs=0x28af;eip=0x000840; 	T(NOP);	// 82438 nop ;~ 28AF:0840
cs=0x28af;eip=0x000841; 	T(NOP);	// 82439 nop ;~ 28AF:0841
cs=0x28af;eip=0x000842; 	T(NOP);	// 82440 nop ;~ 28AF:0842
cs=0x28af;eip=0x000843; 	T(NOP);	// 82441 nop ;~ 28AF:0843
cs=0x28af;eip=0x000844; 	T(NOP);	// 82442 nop ;~ 28AF:0844
cs=0x28af;eip=0x000845; 	T(NOP);	// 82443 nop ;~ 28AF:0845
cs=0x28af;eip=0x000846; 	T(NOP);	// 82444 nop ;~ 28AF:0846
cs=0x28af;eip=0x000847; 	T(NOP);	// 82445 nop ;~ 28AF:0847
cs=0x28af;eip=0x000848; 	T(NOP);	// 82446 nop ;~ 28AF:0848
cs=0x28af;eip=0x000849; 	T(NOP);	// 82447 nop ;~ 28AF:0849
cs=0x28af;eip=0x00084a; 	T(NOP);	// 82448 nop ;~ 28AF:084A
cs=0x28af;eip=0x00084b; 	T(NOP);	// 82449 nop ;~ 28AF:084B
cs=0x28af;eip=0x00084c; 	T(NOP);	// 82450 nop ;~ 28AF:084C
cs=0x28af;eip=0x00084d; 	T(NOP);	// 82451 nop ;~ 28AF:084D
cs=0x28af;eip=0x00084e; 	T(NOP);	// 82452 nop ;~ 28AF:084E
cs=0x28af;eip=0x00084f; 	T(NOP);	// 82453 nop ;~ 28AF:084F
cs=0x28af;eip=0x000850; 	T(NOP);	// 82454 nop ;~ 28AF:0850
cs=0x28af;eip=0x000851; 	T(NOP);	// 82455 nop ;~ 28AF:0851
cs=0x28af;eip=0x000852; 	T(NOP);	// 82456 nop ;~ 28AF:0852
cs=0x28af;eip=0x000853; 	T(NOP);	// 82457 nop ;~ 28AF:0853
cs=0x28af;eip=0x000854; 	T(NOP);	// 82458 nop ;~ 28AF:0854
cs=0x28af;eip=0x000855; 	T(NOP);	// 82459 nop ;~ 28AF:0855
cs=0x28af;eip=0x000856; 	T(NOP);	// 82460 nop ;~ 28AF:0856
cs=0x28af;eip=0x000857; 	T(NOP);	// 82461 nop ;~ 28AF:0857
cs=0x28af;eip=0x000858; 	T(NOP);	// 82462 nop ;~ 28AF:0858
cs=0x28af;eip=0x000859; 	T(NOP);	// 82463 nop ;~ 28AF:0859
cs=0x28af;eip=0x00085a; 	T(NOP);	// 82464 nop ;~ 28AF:085A
cs=0x28af;eip=0x00085b; 	T(NOP);	// 82465 nop ;~ 28AF:085B
cs=0x28af;eip=0x00085c; 	T(NOP);	// 82466 nop ;~ 28AF:085C
cs=0x28af;eip=0x00085d; 	T(NOP);	// 82467 nop ;~ 28AF:085D
cs=0x28af;eip=0x00085e; 	T(NOP);	// 82468 nop ;~ 28AF:085E
cs=0x28af;eip=0x00085f; 	T(NOP);	// 82469 nop ;~ 28AF:085F
cs=0x28af;eip=0x000860; 	T(NOP);	// 82470 nop ;~ 28AF:0860
cs=0x28af;eip=0x000861; 	T(NOP);	// 82471 nop ;~ 28AF:0861
cs=0x28af;eip=0x000862; 	T(NOP);	// 82472 nop ;~ 28AF:0862
cs=0x28af;eip=0x000863; 	T(NOP);	// 82473 nop ;~ 28AF:0863
cs=0x28af;eip=0x000864; 	T(NOP);	// 82474 nop ;~ 28AF:0864
cs=0x28af;eip=0x000865; 	T(NOP);	// 82475 nop ;~ 28AF:0865
cs=0x28af;eip=0x000866; 	T(NOP);	// 82476 nop ;~ 28AF:0866
cs=0x28af;eip=0x000867; 	T(NOP);	// 82477 nop ;~ 28AF:0867
cs=0x28af;eip=0x000868; 	T(NOP);	// 82478 nop ;~ 28AF:0868
cs=0x28af;eip=0x000869; 	T(NOP);	// 82479 nop ;~ 28AF:0869
cs=0x28af;eip=0x00086a; 	T(NOP);	// 82480 nop ;~ 28AF:086A
cs=0x28af;eip=0x00086b; 	T(NOP);	// 82481 nop ;~ 28AF:086B
cs=0x28af;eip=0x00086c; 	T(NOP);	// 82482 nop ;~ 28AF:086C
cs=0x28af;eip=0x00086d; 	T(NOP);	// 82483 nop ;~ 28AF:086D
cs=0x28af;eip=0x00086e; 	T(NOP);	// 82484 nop ;~ 28AF:086E
cs=0x28af;eip=0x00086f; 	T(NOP);	// 82485 nop ;~ 28AF:086F
cs=0x28af;eip=0x000870; 	T(NOP);	// 82486 nop ;~ 28AF:0870
cs=0x28af;eip=0x000871; 	T(NOP);	// 82487 nop ;~ 28AF:0871
cs=0x28af;eip=0x000872; 	T(NOP);	// 82488 nop ;~ 28AF:0872
cs=0x28af;eip=0x000873; 	T(NOP);	// 82489 nop ;~ 28AF:0873
cs=0x28af;eip=0x000874; 	T(NOP);	// 82490 nop ;~ 28AF:0874
cs=0x28af;eip=0x000875; 	T(NOP);	// 82491 nop ;~ 28AF:0875
cs=0x28af;eip=0x000876; 	T(NOP);	// 82492 nop ;~ 28AF:0876
cs=0x28af;eip=0x000877; 	T(NOP);	// 82493 nop ;~ 28AF:0877
cs=0x28af;eip=0x000878; 	T(NOP);	// 82494 nop ;~ 28AF:0878
cs=0x28af;eip=0x000879; 	T(NOP);	// 82495 nop ;~ 28AF:0879
cs=0x28af;eip=0x00087a; 	T(NOP);	// 82496 nop ;~ 28AF:087A
cs=0x28af;eip=0x00087b; 	T(NOP);	// 82497 nop ;~ 28AF:087B
cs=0x28af;eip=0x00087c; 	T(NOP);	// 82498 nop ;~ 28AF:087C
cs=0x28af;eip=0x00087d; 	T(NOP);	// 82499 nop ;~ 28AF:087D
cs=0x28af;eip=0x00087e; 	T(NOP);	// 82500 nop ;~ 28AF:087E
cs=0x28af;eip=0x00087f; 	T(NOP);	// 82501 nop ;~ 28AF:087F
cs=0x28af;eip=0x000880; 	T(NOP);	// 82502 nop ;~ 28AF:0880
cs=0x28af;eip=0x000881; 	T(NOP);	// 82503 nop ;~ 28AF:0881
cs=0x28af;eip=0x000882; 	T(NOP);	// 82504 nop ;~ 28AF:0882
cs=0x28af;eip=0x000883; 	T(NOP);	// 82505 nop ;~ 28AF:0883
cs=0x28af;eip=0x000884; 	T(NOP);	// 82506 nop                     ; int ;~ 28AF:0884
cs=0x28af;eip=0x000885; 	T(NOP);	// 82507 nop ;~ 28AF:0885
cs=0x28af;eip=0x000886; 	T(NOP);	// 82508 nop ;~ 28AF:0886
cs=0x28af;eip=0x000887; 	T(NOP);	// 82509 nop ;~ 28AF:0887
cs=0x28af;eip=0x000888; 	T(NOP);	// 82510 nop ;~ 28AF:0888
cs=0x28af;eip=0x000889; 	T(NOP);	// 82511 nop                     ; char * ;~ 28AF:0889
cs=0x28af;eip=0x00088a; 	T(NOP);	// 82512 nop ;~ 28AF:088A
cs=0x28af;eip=0x00088b; 	T(NOP);	// 82513 nop ;~ 28AF:088B
cs=0x28af;eip=0x00088c; 	T(NOP);	// 82514 nop ;~ 28AF:088C
cs=0x28af;eip=0x00088d; 	T(NOP);	// 82515 nop ;~ 28AF:088D
cs=0x28af;eip=0x00088e; 	T(NOP);	// 82516 nop ;~ 28AF:088E
cs=0x28af;eip=0x00088f; 	T(NOP);	// 82517 nop ;~ 28AF:088F
cs=0x28af;eip=0x000890; 	T(NOP);	// 82518 nop ;~ 28AF:0890
cs=0x28af;eip=0x000891; 	T(NOP);	// 82519 nop ;~ 28AF:0891
cs=0x28af;eip=0x000892; 	T(NOP);	// 82520 nop ;~ 28AF:0892
cs=0x28af;eip=0x000893; 	T(NOP);	// 82521 nop ;~ 28AF:0893
cs=0x28af;eip=0x000894; 	T(NOP);	// 82522 nop ;~ 28AF:0894
cs=0x28af;eip=0x000895; 	T(NOP);	// 82523 nop ;~ 28AF:0895
cs=0x28af;eip=0x000896; 	T(NOP);	// 82524 nop ;~ 28AF:0896
cs=0x28af;eip=0x000897; 	T(NOP);	// 82525 nop ;~ 28AF:0897
cs=0x28af;eip=0x000898; 	T(NOP);	// 82526 nop ;~ 28AF:0898
cs=0x28af;eip=0x000899; 	T(NOP);	// 82527 nop ;~ 28AF:0899
cs=0x28af;eip=0x00089a; 	T(NOP);	// 82528 nop ;~ 28AF:089A
cs=0x28af;eip=0x00089b; 	T(NOP);	// 82529 nop ;~ 28AF:089B
cs=0x28af;eip=0x00089c; 	T(NOP);	// 82530 nop ;~ 28AF:089C
cs=0x28af;eip=0x00089d; 	T(NOP);	// 82531 nop ;~ 28AF:089D
cs=0x28af;eip=0x00089e; 	T(NOP);	// 82532 nop ;~ 28AF:089E
cs=0x28af;eip=0x00089f; 	T(NOP);	// 82533 nop ;~ 28AF:089F
cs=0x28af;eip=0x0008a0; 	T(NOP);	// 82534 nop ;~ 28AF:08A0
cs=0x28af;eip=0x0008a1; 	T(NOP);	// 82535 nop ;~ 28AF:08A1
cs=0x28af;eip=0x0008a2; 	T(NOP);	// 82536 nop ;~ 28AF:08A2
cs=0x28af;eip=0x0008a3; 	T(NOP);	// 82537 nop ;~ 28AF:08A3
cs=0x28af;eip=0x0008a4; 	T(NOP);	// 82538 nop ;~ 28AF:08A4
cs=0x28af;eip=0x0008a5; 	T(NOP);	// 82539 nop ;~ 28AF:08A5
cs=0x28af;eip=0x0008a6; 	T(NOP);	// 82540 nop ;~ 28AF:08A6
cs=0x28af;eip=0x0008a7; 	T(NOP);	// 82541 nop ;~ 28AF:08A7
cs=0x28af;eip=0x0008a8; 	T(NOP);	// 82542 nop ;~ 28AF:08A8
cs=0x28af;eip=0x0008a9; 	T(NOP);	// 82543 nop ;~ 28AF:08A9
cs=0x28af;eip=0x0008aa; 	T(NOP);	// 82544 nop ;~ 28AF:08AA
cs=0x28af;eip=0x0008ab; 	T(NOP);	// 82545 nop ;~ 28AF:08AB
cs=0x28af;eip=0x0008ac; 	T(NOP);	// 82546 nop ;~ 28AF:08AC
cs=0x28af;eip=0x0008ad; 	T(NOP);	// 82547 nop ;~ 28AF:08AD
cs=0x28af;eip=0x0008ae; 	T(NOP);	// 82548 nop ;~ 28AF:08AE
cs=0x28af;eip=0x0008af; 	T(NOP);	// 82549 nop ;~ 28AF:08AF
cs=0x28af;eip=0x0008b0; 	T(NOP);	// 82550 nop ;~ 28AF:08B0
cs=0x28af;eip=0x0008b1; 	T(NOP);	// 82551 nop ;~ 28AF:08B1
cs=0x28af;eip=0x0008b2; 	T(NOP);	// 82552 nop ;~ 28AF:08B2
cs=0x28af;eip=0x0008b3; 	T(NOP);	// 82553 nop ;~ 28AF:08B3
cs=0x28af;eip=0x0008b4; 	T(NOP);	// 82554 nop ;~ 28AF:08B4
cs=0x28af;eip=0x0008b5; 	T(NOP);	// 82555 nop ;~ 28AF:08B5
cs=0x28af;eip=0x0008b6; 	T(NOP);	// 82556 nop ;~ 28AF:08B6
cs=0x28af;eip=0x0008b7; 	T(NOP);	// 82557 nop ;~ 28AF:08B7
cs=0x28af;eip=0x0008b8; 	J(CALLF(__dispatch_call,audiodriverbinary));	// 82558 call    audiodriverbinary ;~ 28AF:08B8
cs=0x28af;eip=0x0008bc; 	X(MOV(byte_459d2, al));	// 82559 mov     byte_459D2, al ;~ 28AF:08BC
cs=0x28af;eip=0x0008bf; 	T(OR(al, al));	// 82560 or      al, al ;~ 28AF:08BF
cs=0x28af;eip=0x0008c1; 	J(JZ(loc_37997));	// 82561 jz      short loc_37997 ;~ 28AF:08C1
cs=0x28af;eip=0x0008c3; 	T(CMP(al, 0x0FF));	// 82562 cmp     al, 0FFh ;~ 28AF:08C3
cs=0x28af;eip=0x0008c5; 	J(JNZ(loc_379a2));	// 82563 jnz     short loc_379A2 ;~ 28AF:08C5
loc_37997:
	// 9539 
cs=0x28af;eip=0x0008c7; 	T(MOV(ax, 2));	// 82566 mov     ax, 2 ;~ 28AF:08C7
cs=0x28af;eip=0x0008ca; 	X(POP(si));	// 82567 pop     si ;~ 28AF:08CA
cs=0x28af;eip=0x0008cb; 	X(POP(di));	// 82568 pop     di ;~ 28AF:08CB
cs=0x28af;eip=0x0008cc; 	T(MOV(sp, bp));	// 82569 mov     sp, bp ;~ 28AF:08CC
cs=0x28af;eip=0x0008ce; 	X(POP(bp));	// 82570 pop     bp ;~ 28AF:08CE
cs=0x28af;eip=0x0008cf; 	J(RETF(0));	// 82571 retf ;~ 28AF:08CF
loc_379a2:
	// 9540 
cs=0x28af;eip=0x0008d2; 	T(CMP(byte_459d2, 0x7F));	// 82577 cmp     byte_459D2, 7Fh ;~ 28AF:08D2
cs=0x28af;eip=0x0008d7; 	J(JBE(loc_379b8));	// 82578 jbe     short loc_379B8 ;~ 28AF:08D7
cs=0x28af;eip=0x0008d9; 	X(MOV(byte_459d2, 0x10));	// 82579 mov     byte_459D2, 10h ;~ 28AF:08D9
cs=0x28af;eip=0x0008de; 	X(MOV(byte_40634, 1));	// 82580 mov     byte_40634, 1 ;~ 28AF:08DE
cs=0x28af;eip=0x0008e3; 	X(MOV(byte_40635, 0));	// 82581 mov     byte_40635, 0 ;~ 28AF:08E3
loc_379b8:
	// 9541 
cs=0x28af;eip=0x0008e8; 	X(PUSH(cs));	// 82584 push    cs ;~ 28AF:08E8
cs=0x28af;eip=0x0008e9; 	J(CALL(sub_38178,0));	// 82585 call    near ptr sub_38178 ;~ 28AF:08E9
cs=0x28af;eip=0x0008ec; 	T(MOV(ax, (dw)m2c::kaudiodriver_timer));	// 82586 mov     ax, offset audiodriver_timer ;~ 28AF:08EC
cs=0x28af;eip=0x0008ef; 	T(MOV(dx, seg_offset(seg028)));	// 82587 mov     dx, seg seg028 ;~ 28AF:08EF
cs=0x28af;eip=0x0008f2; 	X(PUSH(dx));	// 82588 push    dx ;~ 28AF:08F2
cs=0x28af;eip=0x0008f3; 	X(PUSH(ax));	// 82589 push    ax ;~ 28AF:08F3
cs=0x28af;eip=0x0008f4; 	J(CALLF(timer_reg_callback,0));	// 82590 call    timer_reg_callback ;~ 28AF:08F4
cs=0x28af;eip=0x0008f9; 	T(ADD(sp, 4));	// 82591 add     sp, 4 ;~ 28AF:08F9
cs=0x28af;eip=0x0008fc; 	T(CMP(byte_40634, 0));	// 82592 cmp     byte_40634, 0 ;~ 28AF:08FC
cs=0x28af;eip=0x000901; 	J(JZ(loc_37a35));	// 82593 jz      short loc_37A35 ;~ 28AF:0901
cs=0x28af;eip=0x000903; 	T(MOV(ax, offset(dseg,amt32_plb)));	// 82594 mov     ax, offset aMt32_plb ; "mt32.plb" ;~ 28AF:0903
cs=0x28af;eip=0x000906; 	X(PUSH(ax));	// 82595 push    ax ;~ 28AF:0906
cs=0x28af;eip=0x000907; 	J(CALLF(file_load_binary_nofatal,0));	// 82596 call    file_load_binary_nofatal ;~ 28AF:0907
cs=0x28af;eip=0x00090c; 	T(ADD(sp, 2));	// 82597 add     sp, 2 ;~ 28AF:090C
cs=0x28af;eip=0x00090f; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 82598 mov     [bp+var_4], ax ;~ 28AF:090F
cs=0x28af;eip=0x000912; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 82599 mov     [bp+var_2], dx ;~ 28AF:0912
cs=0x28af;eip=0x000915; 	T(OR(ax, dx));	// 82600 or      ax, dx ;~ 28AF:0915
cs=0x28af;eip=0x000917; 	J(JZ(loc_37a35));	// 82601 jz      short loc_37A35 ;~ 28AF:0917
cs=0x28af;eip=0x000919; 	X(PUSH(dx));	// 82602 push    dx ;~ 28AF:0919
cs=0x28af;eip=0x00091a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 82603 push    [bp+var_4] ;~ 28AF:091A
cs=0x28af;eip=0x00091d; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 82604 mov     ax, word ptr audiodriverbinary ;~ 28AF:091D
cs=0x28af;eip=0x000920; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 82605 mov     dx, word ptr audiodriverbinary+2 ;~ 28AF:0920
cs=0x28af;eip=0x000924; 	T(ADD(ax, 0x42));	// 82606 add     ax, 42h ; 'B' ;~ 28AF:0924
cs=0x28af;eip=0x000927; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c+2))), dx));	// 82607 mov     word ptr [bp+var_C+2], dx ;~ 28AF:0927
cs=0x28af;eip=0x00092a; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c))), ax));	// 82608 mov     word ptr [bp+var_C], ax ;~ 28AF:092A
cs=0x28af;eip=0x00092d; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_c))));	// 82609 call    [bp+var_C] ;~ 28AF:092D
cs=0x28af;eip=0x000930; 	T(ADD(sp, 4));	// 82610 add     sp, 4 ;~ 28AF:0930
cs=0x28af;eip=0x000933; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 82611 push    [bp+var_2] ;~ 28AF:0933
cs=0x28af;eip=0x000936; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 82612 push    [bp+var_4] ;~ 28AF:0936
cs=0x28af;eip=0x000939; 	J(CALLF(mmgr_release,0));	// 82613 call    mmgr_release ;~ 28AF:0939
cs=0x28af;eip=0x00093e; 	T(ADD(sp, 4));	// 82614 add     sp, 4 ;~ 28AF:093E
cs=0x28af;eip=0x000941; 	X(MOV(byte_40639, 0x64));	// 82615 mov     byte_40639, 64h ; 'd' ;~ 28AF:0941
cs=0x28af;eip=0x000946; 	T(MOV(ax, offset(dseg,unk_40636)));	// 82616 mov     ax, offset unk_40636 ;~ 28AF:0946
cs=0x28af;eip=0x000949; 	X(PUSH(ds));	// 82617 push    ds ;~ 28AF:0949
cs=0x28af;eip=0x00094a; 	X(PUSH(ax));	// 82618 push    ax ;~ 28AF:094A
cs=0x28af;eip=0x00094b; 	T(MOV(ax, 4));	// 82619 mov     ax, 4 ;~ 28AF:094B
cs=0x28af;eip=0x00094e; 	X(PUSH(ax));	// 82620 push    ax ;~ 28AF:094E
cs=0x28af;eip=0x00094f; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 82621 mov     ax, word ptr audiodriverbinary ;~ 28AF:094F
cs=0x28af;eip=0x000952; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 82622 mov     dx, word ptr audiodriverbinary+2 ;~ 28AF:0952
cs=0x28af;eip=0x000956; 	T(ADD(ax, 0x3F));	// 82623 add     ax, 3Fh ; '?' ;~ 28AF:0956
cs=0x28af;eip=0x000959; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c+2))), dx));	// 82624 mov     word ptr [bp+var_C+2], dx ;~ 28AF:0959
cs=0x28af;eip=0x00095c; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c))), ax));	// 82625 mov     word ptr [bp+var_C], ax ;~ 28AF:095C
cs=0x28af;eip=0x00095f; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_c))));	// 82626 call    [bp+var_C] ;~ 28AF:095F
cs=0x28af;eip=0x000962; 	T(ADD(sp, 6));	// 82627 add     sp, 6 ;~ 28AF:0962
loc_37a35:
	// 9542 
cs=0x28af;eip=0x000965; 	X(MOV(byte_40630, 0));	// 82631 mov     byte_40630, 0 ;~ 28AF:0965
cs=0x28af;eip=0x00096a; 	X(MOV(audioflag2, 1));	// 82632 mov     audioflag2, 1 ;~ 28AF:096A
cs=0x28af;eip=0x00096f; 	X(MOV(byte_40632, 0));	// 82633 mov     byte_40632, 0 ;~ 28AF:096F
cs=0x28af;eip=0x000974; 	X(MOV(audioflag6, 1));	// 82634 mov     audioflag6, 1 ;~ 28AF:0974
cs=0x28af;eip=0x000979; 	T(SUB(ax, ax));	// 82635 sub     ax, ax ;~ 28AF:0979
cs=0x28af;eip=0x00097b; 	X(POP(si));	// 82636 pop     si ;~ 28AF:097B
cs=0x28af;eip=0x00097c; 	X(POP(di));	// 82637 pop     di ;~ 28AF:097C
cs=0x28af;eip=0x00097d; 	T(MOV(sp, bp));	// 82638 mov     sp, bp ;~ 28AF:097D
cs=0x28af;eip=0x00097f; 	X(POP(bp));	// 82639 pop     bp ;~ 28AF:097F
cs=0x28af;eip=0x000980; 	J(RETF(0));	// 82640 retf ;~ 28AF:0980
audiodrv_atexit:
	// 82650 
#undef var_4
#define var_4 -4
	// 82653 var_4           = dword ptr -4 ;~ 28AF:0994
cs=0x28af;eip=0x000994; 	X(PUSH(bp));	// 82655 push    bp ;~ 28AF:0994
cs=0x28af;eip=0x000995; 	T(MOV(bp, sp));	// 82656 mov     bp, sp ;~ 28AF:0995
cs=0x28af;eip=0x000997; 	T(SUB(sp, 4));	// 82657 sub     sp, 4 ;~ 28AF:0997
cs=0x28af;eip=0x00099a; 	X(MOV(word_4063a, 1));	// 82658 mov     word_4063A, 1 ;~ 28AF:099A
cs=0x28af;eip=0x0009a0; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 82659 mov     ax, word ptr audiodriverbinary ;~ 28AF:09A0
cs=0x28af;eip=0x0009a3; 	T(OR(ax, *(dw*)(((db*)&audiodriverbinary)+2)));	// 82660 or      ax, word ptr audiodriverbinary+2 ;~ 28AF:09A3
cs=0x28af;eip=0x0009a7; 	J(JNZ(loc_37a7c));	// 82661 jnz     short loc_37A7C ;~ 28AF:09A7
cs=0x28af;eip=0x0009a9; 	J(JMP(loc_37b09));	// 82662 jmp     loc_37B09 ;~ 28AF:09A9
loc_37a7c:
	// 9543 
cs=0x28af;eip=0x0009ac; 	T(MOV(ax, 0x0C));	// 82666 mov     ax, 0Ch ;~ 28AF:09AC
cs=0x28af;eip=0x0009af; 	T(MOV(dx, seg_offset(seg028)));	// 82667 mov     dx, seg seg028 ;~ 28AF:09AF
cs=0x28af;eip=0x0009b2; 	X(PUSH(dx));	// 82668 push    dx ;~ 28AF:09B2
cs=0x28af;eip=0x0009b3; 	X(PUSH(ax));	// 82669 push    ax ;~ 28AF:09B3
cs=0x28af;eip=0x0009b4; 	J(CALLF(timer_remove_callback,0));	// 82670 call    timer_remove_callback ;~ 28AF:09B4
cs=0x28af;eip=0x0009b9; 	T(ADD(sp, 4));	// 82671 add     sp, 4 ;~ 28AF:09B9
cs=0x28af;eip=0x0009bc; 	X(MOV(audioflag2, 0));	// 82672 mov     audioflag2, 0 ;~ 28AF:09BC
cs=0x28af;eip=0x0009c1; 	X(MOV(audioflag6, 0));	// 82673 mov     audioflag6, 0 ;~ 28AF:09C1
cs=0x28af;eip=0x0009c6; 	T(CMP(byte_40634, 0));	// 82674 cmp     byte_40634, 0 ;~ 28AF:09C6
cs=0x28af;eip=0x0009cb; 	J(JZ(loc_37ac1));	// 82675 jz      short loc_37AC1 ;~ 28AF:09CB
cs=0x28af;eip=0x0009cd; 	X(MOV(byte_40639, 0x64));	// 82676 mov     byte_40639, 64h ; 'd' ;~ 28AF:09CD
cs=0x28af;eip=0x0009d2; 	T(MOV(ax, 0x4EC6));	// 82677 mov     ax, 4EC6h ;~ 28AF:09D2
cs=0x28af;eip=0x0009d5; 	X(PUSH(ds));	// 82678 push    ds ;~ 28AF:09D5
cs=0x28af;eip=0x0009d6; 	X(PUSH(ax));	// 82679 push    ax ;~ 28AF:09D6
cs=0x28af;eip=0x0009d7; 	T(MOV(ax, 4));	// 82680 mov     ax, 4 ;~ 28AF:09D7
cs=0x28af;eip=0x0009da; 	X(PUSH(ax));	// 82681 push    ax ;~ 28AF:09DA
cs=0x28af;eip=0x0009db; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 82682 mov     ax, word ptr audiodriverbinary ;~ 28AF:09DB
cs=0x28af;eip=0x0009de; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 82683 mov     dx, word ptr audiodriverbinary+2 ;~ 28AF:09DE
cs=0x28af;eip=0x0009e2; 	T(ADD(ax, 0x3F));	// 82684 add     ax, 3Fh ; '?' ;~ 28AF:09E2
cs=0x28af;eip=0x0009e5; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 82685 mov     word ptr [bp+var_4+2], dx ;~ 28AF:09E5
cs=0x28af;eip=0x0009e8; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 82686 mov     word ptr [bp+var_4], ax ;~ 28AF:09E8
cs=0x28af;eip=0x0009eb; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_4))));	// 82687 call    [bp+var_4] ;~ 28AF:09EB
cs=0x28af;eip=0x0009ee; 	T(ADD(sp, 6));	// 82688 add     sp, 6 ;~ 28AF:09EE
loc_37ac1:
	// 9544 
cs=0x28af;eip=0x0009f1; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 82691 mov     ax, word ptr audiodriverbinary ;~ 28AF:09F1
cs=0x28af;eip=0x0009f4; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 82692 mov     dx, word ptr audiodriverbinary+2 ;~ 28AF:09F4
cs=0x28af;eip=0x0009f8; 	T(ADD(ax, 6));	// 82693 add     ax, 6 ;~ 28AF:09F8
cs=0x28af;eip=0x0009fb; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 82694 mov     word ptr [bp+var_4+2], dx ;~ 28AF:09FB
cs=0x28af;eip=0x0009fe; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 82695 mov     word ptr [bp+var_4], ax ;~ 28AF:09FE
cs=0x28af;eip=0x000a01; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_4))));	// 82696 call    [bp+var_4] ;~ 28AF:0A01
cs=0x28af;eip=0x000a04; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 82697 mov     ax, word ptr audiodriverbinary ;~ 28AF:0A04
cs=0x28af;eip=0x000a07; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 82698 mov     dx, word ptr audiodriverbinary+2 ;~ 28AF:0A07
cs=0x28af;eip=0x000a0b; 	T(ADD(ax, 3));	// 82699 add     ax, 3 ;~ 28AF:0A0B
cs=0x28af;eip=0x000a0e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 82700 mov     word ptr [bp+var_4+2], dx ;~ 28AF:0A0E
cs=0x28af;eip=0x000a11; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 82701 mov     word ptr [bp+var_4], ax ;~ 28AF:0A11
cs=0x28af;eip=0x000a14; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_4))));	// 82702 call    [bp+var_4] ;~ 28AF:0A14
cs=0x28af;eip=0x000a17; 	T(NOP);	// 82703 nop ;~ 28AF:0A17
cs=0x28af;eip=0x000a18; 	T(NOP);	// 82704 nop ;~ 28AF:0A18
cs=0x28af;eip=0x000a19; 	T(NOP);	// 82705 nop ;~ 28AF:0A19
cs=0x28af;eip=0x000a1a; 	T(NOP);	// 82706 nop ;~ 28AF:0A1A
cs=0x28af;eip=0x000a1b; 	T(NOP);	// 82707 nop ;~ 28AF:0A1B
cs=0x28af;eip=0x000a1c; 	T(NOP);	// 82708 nop ;~ 28AF:0A1C
cs=0x28af;eip=0x000a1d; 	T(NOP);	// 82709 nop ;~ 28AF:0A1D
cs=0x28af;eip=0x000a1e; 	T(NOP);	// 82710 nop ;~ 28AF:0A1E
cs=0x28af;eip=0x000a1f; 	T(NOP);	// 82711 nop ;~ 28AF:0A1F
cs=0x28af;eip=0x000a20; 	T(NOP);	// 82712 nop ;~ 28AF:0A20
cs=0x28af;eip=0x000a21; 	T(NOP);	// 82713 nop ;~ 28AF:0A21
cs=0x28af;eip=0x000a22; 	T(NOP);	// 82714 nop ;~ 28AF:0A22
cs=0x28af;eip=0x000a23; 	T(NOP);	// 82715 nop ;~ 28AF:0A23
cs=0x28af;eip=0x000a24; 	T(NOP);	// 82716 nop ;~ 28AF:0A24
cs=0x28af;eip=0x000a25; 	T(NOP);	// 82717 nop ;~ 28AF:0A25
cs=0x28af;eip=0x000a26; 	T(NOP);	// 82718 nop ;~ 28AF:0A26
cs=0x28af;eip=0x000a27; 	T(SUB(ax, ax));	// 82719 sub     ax, ax ;~ 28AF:0A27
cs=0x28af;eip=0x000a29; 	X(MOV(*(dw*)(((db*)&audiodriverbinary)+2), ax));	// 82720 mov     word ptr audiodriverbinary+2, ax ;~ 28AF:0A29
cs=0x28af;eip=0x000a2c; 	X(MOV(*(dw*)(((db*)&audiodriverbinary)), ax));	// 82721 mov     word ptr audiodriverbinary, ax ;~ 28AF:0A2C
cs=0x28af;eip=0x000a2f; 	X(MOV(byte_40634, 0));	// 82722 mov     byte_40634, 0 ;~ 28AF:0A2F
cs=0x28af;eip=0x000a34; 	X(MOV(byte_40635, 0));	// 82723 mov     byte_40635, 0 ;~ 28AF:0A34
loc_37b09:
	// 9545 
cs=0x28af;eip=0x000a39; 	X(MOV(word_4063a, 0));	// 82726 mov     word_4063A, 0 ;~ 28AF:0A39
cs=0x28af;eip=0x000a3f; 	T(MOV(sp, bp));	// 82727 mov     sp, bp ;~ 28AF:0A3F
cs=0x28af;eip=0x000a41; 	X(POP(bp));	// 82728 pop     bp ;~ 28AF:0A41
cs=0x28af;eip=0x000a42; 	J(RETF(0));	// 82729 retf ;~ 28AF:0A42

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kaudio_load_driver: 	goto audio_load_driver;
        case m2c::kaudiodrv_atexit: 	goto audiodrv_atexit;
        case m2c::kloc_37997: 	goto loc_37997;
        case m2c::kloc_379a2: 	goto loc_379a2;
        case m2c::kloc_379b8: 	goto loc_379b8;
        case m2c::kloc_37a35: 	goto loc_37a35;
        case m2c::kloc_37a7c: 	goto loc_37a7c;
        case m2c::kloc_37ac1: 	goto loc_37ac1;
        case m2c::kloc_37b09: 	goto loc_37b09;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool load_sfx_ge(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    load_sfx_ge:
    _begin:
#undef var_8
#define var_8 -8
	// 82743 var_8           = byte ptr -8 ;~ 28AF:0A44
#undef var_7
#define var_7 -7
	// 82744 var_7           = byte ptr -7 ;~ 28AF:0A44
#undef var_6
#define var_6 -6
	// 82745 var_6           = byte ptr -6 ;~ 28AF:0A44
#undef var_5
#define var_5 -5
	// 82746 var_5           = byte ptr -5 ;~ 28AF:0A44
#undef var_4
#define var_4 -4
	// 82747 var_4           = word ptr -4 ;~ 28AF:0A44
#undef var_2
#define var_2 -2
	// 82748 var_2           = word ptr -2 ;~ 28AF:0A44
#undef arg_0
#define arg_0 6
	// 82749 arg_0           = dword ptr  6 ;~ 28AF:0A44
#undef arg_4
#define arg_4 0x0A
	// 82750 arg_4           = dword ptr  0Ah ;~ 28AF:0A44
cs=0x28af;eip=0x000a44; 	X(PUSH(bp));	// 82752 push    bp ;~ 28AF:0A44
cs=0x28af;eip=0x000a45; 	T(MOV(bp, sp));	// 82753 mov     bp, sp ;~ 28AF:0A45
cs=0x28af;eip=0x000a47; 	T(SUB(sp, 8));	// 82754 sub     sp, 8 ;~ 28AF:0A47
cs=0x28af;eip=0x000a4a; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_4)))));	// 82755 push    word ptr [bp+arg_4] ; int ;~ 28AF:0A4A
cs=0x28af;eip=0x000a4d; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 82756 push    word ptr [bp+arg_0+2] ;~ 28AF:0A4D
cs=0x28af;eip=0x000a50; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 82757 push    word ptr [bp+arg_0] ; char * ;~ 28AF:0A50
cs=0x28af;eip=0x000a53; 	J(CALLF(audio_make_filename,0));	// 82758 call    audio_make_filename ;~ 28AF:0A53
cs=0x28af;eip=0x000a58; 	T(ADD(sp, 6));	// 82759 add     sp, 6 ;~ 28AF:0A58
cs=0x28af;eip=0x000a5b; 	X(PUSH(ax));	// 82760 push    ax ;~ 28AF:0A5B
cs=0x28af;eip=0x000a5c; 	J(CALLF(file_load_binary_nofatal,0));	// 82761 call    file_load_binary_nofatal ;~ 28AF:0A5C
cs=0x28af;eip=0x000a61; 	T(ADD(sp, 2));	// 82762 add     sp, 2 ;~ 28AF:0A61
cs=0x28af;eip=0x000a64; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 82763 mov     [bp+var_4], ax ;~ 28AF:0A64
cs=0x28af;eip=0x000a67; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 82764 mov     [bp+var_2], dx ;~ 28AF:0A67
cs=0x28af;eip=0x000a6a; 	T(OR(ax, dx));	// 82765 or      ax, dx ;~ 28AF:0A6A
cs=0x28af;eip=0x000a6c; 	J(JZ(loc_37b48));	// 82766 jz      short loc_37B48 ;~ 28AF:0A6C
loc_37b3e:
	// 9546 
cs=0x28af;eip=0x000a6e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 82770 mov     ax, [bp+var_4] ;~ 28AF:0A6E
cs=0x28af;eip=0x000a71; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 82771 mov     dx, [bp+var_2] ;~ 28AF:0A71
cs=0x28af;eip=0x000a74; 	T(MOV(sp, bp));	// 82772 mov     sp, bp ;~ 28AF:0A74
cs=0x28af;eip=0x000a76; 	X(POP(bp));	// 82773 pop     bp ;~ 28AF:0A76
cs=0x28af;eip=0x000a77; 	J(RETF(0));	// 82774 retf ;~ 28AF:0A77
loc_37b48:
	// 9547 
cs=0x28af;eip=0x000a78; 	X(MOV(*(raddr(ss,bp+var_8)), 0x50));	// 82778 mov     [bp+var_8], 50h ; 'P' ;~ 28AF:0A78
cs=0x28af;eip=0x000a7c; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 82779 mov     bx, word ptr [bp+arg_0+2] ;~ 28AF:0A7C
cs=0x28af;eip=0x000a7f; 	T(MOV(al, *(raddr(ds,bx))));	// 82780 mov     al, [bx] ;~ 28AF:0A7F
cs=0x28af;eip=0x000a81; 	X(MOV(*(raddr(ss,bp+var_7)), al));	// 82781 mov     [bp+var_7], al ;~ 28AF:0A81
cs=0x28af;eip=0x000a84; 	T(MOV(al, *(raddr(ds,bx+1))));	// 82782 mov     al, [bx+1] ;~ 28AF:0A84
cs=0x28af;eip=0x000a87; 	X(MOV(*(raddr(ss,bp+var_6)), al));	// 82783 mov     [bp+var_6], al ;~ 28AF:0A87
cs=0x28af;eip=0x000a8a; 	X(MOV(*(raddr(ss,bp+var_5)), 0));	// 82784 mov     [bp+var_5], 0 ;~ 28AF:0A8A
cs=0x28af;eip=0x000a8e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_4)))));	// 82785 push    word ptr [bp+arg_4] ; int ;~ 28AF:0A8E
cs=0x28af;eip=0x000a91; 	T(ax = bp+var_8);	// 82786 lea     ax, [bp+var_8] ;~ 28AF:0A91
cs=0x28af;eip=0x000a94; 	X(PUSH(ax));	// 82787 push    ax ;~ 28AF:0A94
cs=0x28af;eip=0x000a95; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 82788 push    word ptr [bp+arg_0] ; char * ;~ 28AF:0A95
cs=0x28af;eip=0x000a98; 	J(CALLF(audio_make_filename,0));	// 82789 call    audio_make_filename ;~ 28AF:0A98
cs=0x28af;eip=0x000a9d; 	T(ADD(sp, 6));	// 82790 add     sp, 6 ;~ 28AF:0A9D
cs=0x28af;eip=0x000aa0; 	X(PUSH(ax));	// 82791 push    ax ;~ 28AF:0AA0
cs=0x28af;eip=0x000aa1; 	J(CALLF(file_decomp_nofatal,0));	// 82792 call    file_decomp_nofatal ;~ 28AF:0AA1
cs=0x28af;eip=0x000aa6; 	T(ADD(sp, 2));	// 82793 add     sp, 2 ;~ 28AF:0AA6
cs=0x28af;eip=0x000aa9; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 82794 mov     [bp+var_4], ax ;~ 28AF:0AA9
cs=0x28af;eip=0x000aac; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 82795 mov     [bp+var_2], dx ;~ 28AF:0AAC
cs=0x28af;eip=0x000aaf; 	T(OR(ax, dx));	// 82796 or      ax, dx ;~ 28AF:0AAF
cs=0x28af;eip=0x000ab1; 	J(JNZ(loc_37b3e));	// 82797 jnz     short loc_37B3E ;~ 28AF:0AB1
cs=0x28af;eip=0x000ab3; 	T(MOV(ax, offset(dseg,age)));	// 82798 mov     ax, offset aGe  ; "ge" ;~ 28AF:0AB3
cs=0x28af;eip=0x000ab6; 	X(PUSH(ax));	// 82799 push    ax              ; int ;~ 28AF:0AB6
cs=0x28af;eip=0x000ab7; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 82800 push    word ptr [bp+arg_0+2] ;~ 28AF:0AB7
cs=0x28af;eip=0x000aba; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 82801 push    word ptr [bp+arg_0] ; char * ;~ 28AF:0ABA
cs=0x28af;eip=0x000abd; 	J(CALLF(audio_make_filename,0));	// 82802 call    audio_make_filename ;~ 28AF:0ABD
cs=0x28af;eip=0x000ac2; 	T(ADD(sp, 6));	// 82803 add     sp, 6 ;~ 28AF:0AC2
cs=0x28af;eip=0x000ac5; 	X(PUSH(ax));	// 82804 push    ax ;~ 28AF:0AC5
cs=0x28af;eip=0x000ac6; 	J(CALLF(file_load_binary_nofatal,0));	// 82805 call    file_load_binary_nofatal ;~ 28AF:0AC6
cs=0x28af;eip=0x000acb; 	T(ADD(sp, 2));	// 82806 add     sp, 2 ;~ 28AF:0ACB
cs=0x28af;eip=0x000ace; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 82807 mov     [bp+var_4], ax ;~ 28AF:0ACE
cs=0x28af;eip=0x000ad1; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 82808 mov     [bp+var_2], dx ;~ 28AF:0AD1
cs=0x28af;eip=0x000ad4; 	T(OR(ax, dx));	// 82809 or      ax, dx ;~ 28AF:0AD4
cs=0x28af;eip=0x000ad6; 	J(JNZ(loc_37b3e));	// 82810 jnz     short loc_37B3E ;~ 28AF:0AD6
cs=0x28af;eip=0x000ad8; 	T(MOV(ax, offset(dseg,age_0)));	// 82811 mov     ax, offset aGe_0 ; "ge" ;~ 28AF:0AD8
cs=0x28af;eip=0x000adb; 	X(PUSH(ax));	// 82812 push    ax              ; int ;~ 28AF:0ADB
cs=0x28af;eip=0x000adc; 	T(ax = bp+var_8);	// 82813 lea     ax, [bp+var_8] ;~ 28AF:0ADC
cs=0x28af;eip=0x000adf; 	X(PUSH(ax));	// 82814 push    ax ;~ 28AF:0ADF
cs=0x28af;eip=0x000ae0; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 82815 push    word ptr [bp+arg_0] ; char * ;~ 28AF:0AE0
cs=0x28af;eip=0x000ae3; 	J(CALLF(audio_make_filename,0));	// 82816 call    audio_make_filename ;~ 28AF:0AE3
cs=0x28af;eip=0x000ae8; 	T(ADD(sp, 6));	// 82817 add     sp, 6 ;~ 28AF:0AE8
cs=0x28af;eip=0x000aeb; 	X(PUSH(ax));	// 82818 push    ax ;~ 28AF:0AEB
cs=0x28af;eip=0x000aec; 	J(CALLF(file_decomp_nofatal,0));	// 82819 call    file_decomp_nofatal ;~ 28AF:0AEC
cs=0x28af;eip=0x000af1; 	T(ADD(sp, 2));	// 82820 add     sp, 2 ;~ 28AF:0AF1
cs=0x28af;eip=0x000af4; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 82821 mov     [bp+var_4], ax ;~ 28AF:0AF4
cs=0x28af;eip=0x000af7; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 82822 mov     [bp+var_2], dx ;~ 28AF:0AF7
cs=0x28af;eip=0x000afa; 	T(OR(ax, dx));	// 82823 or      ax, dx ;~ 28AF:0AFA
cs=0x28af;eip=0x000afc; 	J(JZ(loc_37bd1));	// 82824 jz      short loc_37BD1 ;~ 28AF:0AFC
cs=0x28af;eip=0x000afe; 	J(JMP(loc_37b3e));	// 82825 jmp     loc_37B3E ;~ 28AF:0AFE
loc_37bd1:
	// 9548 
cs=0x28af;eip=0x000b01; 	T(MOV(ax, offset(dseg,ablankstr)));	// 82829 mov     ax, offset aBlankstr ;~ 28AF:0B01
cs=0x28af;eip=0x000b04; 	X(PUSH(ax));	// 82830 push    ax              ; int ;~ 28AF:0B04
cs=0x28af;eip=0x000b05; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 82831 push    word ptr [bp+arg_0+2] ;~ 28AF:0B05
cs=0x28af;eip=0x000b08; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 82832 push    word ptr [bp+arg_0] ; char * ;~ 28AF:0B08
cs=0x28af;eip=0x000b0b; 	J(CALLF(audio_make_filename,0));	// 82833 call    audio_make_filename ;~ 28AF:0B0B
cs=0x28af;eip=0x000b10; 	T(ADD(sp, 6));	// 82834 add     sp, 6 ;~ 28AF:0B10
cs=0x28af;eip=0x000b13; 	X(PUSH(ax));	// 82835 push    ax ;~ 28AF:0B13
cs=0x28af;eip=0x000b14; 	J(CALLF(file_load_binary_nofatal,0));	// 82836 call    file_load_binary_nofatal ;~ 28AF:0B14
cs=0x28af;eip=0x000b19; 	T(ADD(sp, 2));	// 82837 add     sp, 2 ;~ 28AF:0B19
cs=0x28af;eip=0x000b1c; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 82838 mov     [bp+var_4], ax ;~ 28AF:0B1C
cs=0x28af;eip=0x000b1f; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 82839 mov     [bp+var_2], dx ;~ 28AF:0B1F
cs=0x28af;eip=0x000b22; 	T(OR(ax, dx));	// 82840 or      ax, dx ;~ 28AF:0B22
cs=0x28af;eip=0x000b24; 	J(JZ(loc_37bf9));	// 82841 jz      short loc_37BF9 ;~ 28AF:0B24
cs=0x28af;eip=0x000b26; 	J(JMP(loc_37b3e));	// 82842 jmp     loc_37B3E ;~ 28AF:0B26
loc_37bf9:
	// 9549 
cs=0x28af;eip=0x000b29; 	T(MOV(ax, offset(dseg,ablankstr2)));	// 82846 mov     ax, offset aBlankstr2 ;~ 28AF:0B29
cs=0x28af;eip=0x000b2c; 	X(PUSH(ax));	// 82847 push    ax              ; int ;~ 28AF:0B2C
cs=0x28af;eip=0x000b2d; 	T(ax = bp+var_8);	// 82848 lea     ax, [bp+var_8] ;~ 28AF:0B2D
cs=0x28af;eip=0x000b30; 	X(PUSH(ax));	// 82849 push    ax ;~ 28AF:0B30
cs=0x28af;eip=0x000b31; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 82850 push    word ptr [bp+arg_0] ; char * ;~ 28AF:0B31
cs=0x28af;eip=0x000b34; 	J(CALLF(audio_make_filename,0));	// 82851 call    audio_make_filename ;~ 28AF:0B34
cs=0x28af;eip=0x000b39; 	T(ADD(sp, 6));	// 82852 add     sp, 6 ;~ 28AF:0B39
cs=0x28af;eip=0x000b3c; 	X(PUSH(ax));	// 82853 push    ax ;~ 28AF:0B3C
cs=0x28af;eip=0x000b3d; 	J(CALLF(file_decomp_nofatal,0));	// 82854 call    file_decomp_nofatal ;~ 28AF:0B3D
cs=0x28af;eip=0x000b42; 	T(ADD(sp, 2));	// 82855 add     sp, 2 ;~ 28AF:0B42
cs=0x28af;eip=0x000b45; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 82856 mov     [bp+var_4], ax ;~ 28AF:0B45
cs=0x28af;eip=0x000b48; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 82857 mov     [bp+var_2], dx ;~ 28AF:0B48
cs=0x28af;eip=0x000b4b; 	T(OR(ax, dx));	// 82858 or      ax, dx ;~ 28AF:0B4B
cs=0x28af;eip=0x000b4d; 	J(JZ(loc_37c22));	// 82859 jz      short loc_37C22 ;~ 28AF:0B4D
cs=0x28af;eip=0x000b4f; 	J(JMP(loc_37b3e));	// 82860 jmp     loc_37B3E ;~ 28AF:0B4F
loc_37c22:
	// 9550 
cs=0x28af;eip=0x000b52; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 82864 push    word ptr [bp+arg_0] ;~ 28AF:0B52
cs=0x28af;eip=0x000b55; 	J(CALLF(file_load_binary_nofatal,0));	// 82865 call    file_load_binary_nofatal ;~ 28AF:0B55
cs=0x28af;eip=0x000b5a; 	T(ADD(sp, 2));	// 82866 add     sp, 2 ;~ 28AF:0B5A
cs=0x28af;eip=0x000b5d; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 82867 mov     [bp+var_4], ax ;~ 28AF:0B5D
cs=0x28af;eip=0x000b60; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 82868 mov     [bp+var_2], dx ;~ 28AF:0B60
cs=0x28af;eip=0x000b63; 	T(OR(ax, dx));	// 82869 or      ax, dx ;~ 28AF:0B63
cs=0x28af;eip=0x000b65; 	J(JMP(loc_37b3e));	// 82870 jmp     loc_37B3E ;~ 28AF:0B65

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kload_sfx_ge: 	goto load_sfx_ge;
        case m2c::kloc_37b3e: 	goto loc_37b3e;
        case m2c::kloc_37b48: 	goto loc_37b48;
        case m2c::kloc_37bd1: 	goto loc_37bd1;
        case m2c::kloc_37bf9: 	goto loc_37bf9;
        case m2c::kloc_37c22: 	goto loc_37c22;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_37c38(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_37c38:
    _begin:
#undef arg_0
#define arg_0 6
	// 82880 arg_0           = word ptr  6 ;~ 28AF:0B68
cs=0x28af;eip=0x000b68; 	X(PUSH(bp));	// 82882 push    bp ;~ 28AF:0B68
cs=0x28af;eip=0x000b69; 	T(MOV(bp, sp));	// 82883 mov     bp, sp ;~ 28AF:0B69
cs=0x28af;eip=0x000b6b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 82884 mov     ax, [bp+arg_0] ;~ 28AF:0B6B
cs=0x28af;eip=0x000b6e; 	X(MOV(word_4063c, ax));	// 82885 mov     word_4063C, ax ;~ 28AF:0B6E
cs=0x28af;eip=0x000b71; 	X(POP(bp));	// 82886 pop     bp ;~ 28AF:0B71
cs=0x28af;eip=0x000b72; 	J(RETF(0));	// 82887 retf ;~ 28AF:0B72

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_37c38: 	goto sub_37c38;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool load_sfx_file(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    load_sfx_file:
    _begin:
#undef var_4
#define var_4 -4
	// 82900 var_4           = word ptr -4 ;~ 28AF:0B74
#undef var_2
#define var_2 -2
	// 82901 var_2           = word ptr -2 ;~ 28AF:0B74
#undef arg_0
#define arg_0 6
	// 82902 arg_0           = dword ptr  6 ;~ 28AF:0B74
cs=0x28af;eip=0x000b74; 	X(PUSH(bp));	// 82904 push    bp ;~ 28AF:0B74
cs=0x28af;eip=0x000b75; 	T(MOV(bp, sp));	// 82905 mov     bp, sp ;~ 28AF:0B75
cs=0x28af;eip=0x000b77; 	T(SUB(sp, 4));	// 82906 sub     sp, 4 ;~ 28AF:0B77
cs=0x28af;eip=0x000b7a; 	T(SUB(ax, ax));	// 82907 sub     ax, ax ;~ 28AF:0B7A
cs=0x28af;eip=0x000b7c; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 82908 mov     [bp+var_2], ax ;~ 28AF:0B7C
cs=0x28af;eip=0x000b7f; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 82909 mov     [bp+var_4], ax ;~ 28AF:0B7F
cs=0x28af;eip=0x000b82; 	T(CMP(byte_40635, 0));	// 82910 cmp     byte_40635, 0 ;~ 28AF:0B82
cs=0x28af;eip=0x000b87; 	J(JZ(loc_37c71));	// 82911 jz      short loc_37C71 ;~ 28AF:0B87
cs=0x28af;eip=0x000b89; 	T(MOV(ax, offset(dseg,audiodriverstring2)));	// 82912 mov     ax, offset audiodriverstring2 ;~ 28AF:0B89
cs=0x28af;eip=0x000b8c; 	X(PUSH(ax));	// 82913 push    ax              ; int ;~ 28AF:0B8C
cs=0x28af;eip=0x000b8d; 	T(MOV(ax, offset(dseg,adsf)));	// 82914 mov     ax, offset aDsf ; "dsf" ;~ 28AF:0B8D
cs=0x28af;eip=0x000b90; 	X(PUSH(ax));	// 82915 push    ax ;~ 28AF:0B90
cs=0x28af;eip=0x000b91; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 82916 push    word ptr [bp+arg_0] ; char * ;~ 28AF:0B91
cs=0x28af;eip=0x000b94; 	X(PUSH(cs));	// 82917 push    cs ;~ 28AF:0B94
cs=0x28af;eip=0x000b95; 	J(CALL(load_sfx_ge,0));	// 82918 call    near ptr load_sfx_ge ;~ 28AF:0B95
cs=0x28af;eip=0x000b98; 	T(ADD(sp, 6));	// 82919 add     sp, 6 ;~ 28AF:0B98
cs=0x28af;eip=0x000b9b; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 82920 mov     [bp+var_4], ax ;~ 28AF:0B9B
cs=0x28af;eip=0x000b9e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 82921 mov     [bp+var_2], dx ;~ 28AF:0B9E
loc_37c71:
	// 9551 
cs=0x28af;eip=0x000ba1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 82924 mov     ax, [bp+var_4] ;~ 28AF:0BA1
cs=0x28af;eip=0x000ba4; 	T(OR(ax, *(dw*)(raddr(ss,bp+var_2))));	// 82925 or      ax, [bp+var_2] ;~ 28AF:0BA4
cs=0x28af;eip=0x000ba7; 	J(JNZ(loc_37c91));	// 82926 jnz     short loc_37C91 ;~ 28AF:0BA7
cs=0x28af;eip=0x000ba9; 	T(MOV(ax, offset(dseg,audiodriverstring2)));	// 82927 mov     ax, offset audiodriverstring2 ;~ 28AF:0BA9
cs=0x28af;eip=0x000bac; 	X(PUSH(ax));	// 82928 push    ax              ; int ;~ 28AF:0BAC
cs=0x28af;eip=0x000bad; 	T(MOV(ax, offset(dseg,asfx)));	// 82929 mov     ax, offset aSfx ; "sfx" ;~ 28AF:0BAD
cs=0x28af;eip=0x000bb0; 	X(PUSH(ax));	// 82930 push    ax ;~ 28AF:0BB0
cs=0x28af;eip=0x000bb1; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 82931 push    word ptr [bp+arg_0] ; char * ;~ 28AF:0BB1
cs=0x28af;eip=0x000bb4; 	X(PUSH(cs));	// 82932 push    cs ;~ 28AF:0BB4
cs=0x28af;eip=0x000bb5; 	J(CALL(load_sfx_ge,0));	// 82933 call    near ptr load_sfx_ge ;~ 28AF:0BB5
cs=0x28af;eip=0x000bb8; 	T(ADD(sp, 6));	// 82934 add     sp, 6 ;~ 28AF:0BB8
cs=0x28af;eip=0x000bbb; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 82935 mov     [bp+var_4], ax ;~ 28AF:0BBB
cs=0x28af;eip=0x000bbe; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 82936 mov     [bp+var_2], dx ;~ 28AF:0BBE
loc_37c91:
	// 9552 
cs=0x28af;eip=0x000bc1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 82939 mov     ax, [bp+var_4] ;~ 28AF:0BC1
cs=0x28af;eip=0x000bc4; 	T(OR(ax, *(dw*)(raddr(ss,bp+var_2))));	// 82940 or      ax, [bp+var_2] ;~ 28AF:0BC4
cs=0x28af;eip=0x000bc7; 	J(JNZ(loc_37caf));	// 82941 jnz     short loc_37CAF ;~ 28AF:0BC7
cs=0x28af;eip=0x000bc9; 	T(CMP(word_4063c, 0));	// 82942 cmp     word_4063C, 0 ;~ 28AF:0BC9
cs=0x28af;eip=0x000bce; 	J(JZ(loc_37caf));	// 82943 jz      short loc_37CAF ;~ 28AF:0BCE
cs=0x28af;eip=0x000bd0; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 82944 push    word ptr [bp+arg_0] ;~ 28AF:0BD0
cs=0x28af;eip=0x000bd3; 	T(MOV(ax, offset(dseg,acannotloadsfxfiles)));	// 82945 mov     ax, offset aCannotLoadSfxFileS ; "cannot load sfx file %s" ;~ 28AF:0BD3
cs=0x28af;eip=0x000bd6; 	X(PUSH(ax));	// 82946 push    ax ;~ 28AF:0BD6
cs=0x28af;eip=0x000bd7; 	J(CALLF(fatal_error,0));	// 82947 call    far ptr fatal_error ;~ 28AF:0BD7
cs=0x28af;eip=0x000bdc; 	T(ADD(sp, 4));	// 82949 add     sp, 4 ;~ 28AF:0BDC
loc_37caf:
	// 9553 
cs=0x28af;eip=0x000bdf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 82953 mov     ax, [bp+var_4] ;~ 28AF:0BDF
cs=0x28af;eip=0x000be2; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 82954 mov     dx, [bp+var_2] ;~ 28AF:0BE2
cs=0x28af;eip=0x000be5; 	T(MOV(sp, bp));	// 82955 mov     sp, bp ;~ 28AF:0BE5
cs=0x28af;eip=0x000be7; 	X(POP(bp));	// 82956 pop     bp ;~ 28AF:0BE7
cs=0x28af;eip=0x000be8; 	J(RETF(0));	// 82957 retf ;~ 28AF:0BE8

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kload_sfx_file: 	goto load_sfx_file;
        case m2c::kloc_37c71: 	goto loc_37c71;
        case m2c::kloc_37c91: 	goto loc_37c91;
        case m2c::kloc_37caf: 	goto loc_37caf;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool load_song_file(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    load_song_file:
    _begin:
#undef var_4
#define var_4 -4
	// 82970 var_4           = word ptr -4 ;~ 28AF:0BEA
#undef var_2
#define var_2 -2
	// 82971 var_2           = word ptr -2 ;~ 28AF:0BEA
#undef arg_0
#define arg_0 6
	// 82972 arg_0           = dword ptr  6 ;~ 28AF:0BEA
cs=0x28af;eip=0x000bea; 	X(PUSH(bp));	// 82974 push    bp ;~ 28AF:0BEA
cs=0x28af;eip=0x000beb; 	T(MOV(bp, sp));	// 82975 mov     bp, sp ;~ 28AF:0BEB
cs=0x28af;eip=0x000bed; 	T(SUB(sp, 4));	// 82976 sub     sp, 4 ;~ 28AF:0BED
cs=0x28af;eip=0x000bf0; 	T(SUB(ax, ax));	// 82977 sub     ax, ax ;~ 28AF:0BF0
cs=0x28af;eip=0x000bf2; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 82978 mov     [bp+var_2], ax ;~ 28AF:0BF2
cs=0x28af;eip=0x000bf5; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 82979 mov     [bp+var_4], ax ;~ 28AF:0BF5
cs=0x28af;eip=0x000bf8; 	T(MOV(ax, offset(dseg,audiodriverstring2)));	// 82980 mov     ax, offset audiodriverstring2 ;~ 28AF:0BF8
cs=0x28af;eip=0x000bfb; 	X(PUSH(ax));	// 82981 push    ax              ; int ;~ 28AF:0BFB
cs=0x28af;eip=0x000bfc; 	T(MOV(ax, offset(dseg,akms)));	// 82982 mov     ax, offset aKms ; "kms" ;~ 28AF:0BFC
cs=0x28af;eip=0x000bff; 	X(PUSH(ax));	// 82983 push    ax ;~ 28AF:0BFF
cs=0x28af;eip=0x000c00; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 82984 push    word ptr [bp+arg_0] ; char * ;~ 28AF:0C00
cs=0x28af;eip=0x000c03; 	X(PUSH(cs));	// 82985 push    cs ;~ 28AF:0C03
cs=0x28af;eip=0x000c04; 	J(CALL(load_sfx_ge,0));	// 82986 call    near ptr load_sfx_ge ;~ 28AF:0C04
cs=0x28af;eip=0x000c07; 	T(ADD(sp, 6));	// 82987 add     sp, 6 ;~ 28AF:0C07
cs=0x28af;eip=0x000c0a; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 82988 mov     [bp+var_4], ax ;~ 28AF:0C0A
cs=0x28af;eip=0x000c0d; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 82989 mov     [bp+var_2], dx ;~ 28AF:0C0D
cs=0x28af;eip=0x000c10; 	T(OR(ax, dx));	// 82990 or      ax, dx ;~ 28AF:0C10
cs=0x28af;eip=0x000c12; 	J(JNZ(loc_37cfa));	// 82991 jnz     short loc_37CFA ;~ 28AF:0C12
cs=0x28af;eip=0x000c14; 	T(CMP(word_4063c, 0));	// 82992 cmp     word_4063C, 0 ;~ 28AF:0C14
cs=0x28af;eip=0x000c19; 	J(JZ(loc_37cfa));	// 82993 jz      short loc_37CFA ;~ 28AF:0C19
cs=0x28af;eip=0x000c1b; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 82994 push    word ptr [bp+arg_0] ;~ 28AF:0C1B
cs=0x28af;eip=0x000c1e; 	T(MOV(ax, offset(dseg,acannotloadsongfiles)));	// 82995 mov     ax, offset aCannotLoadSongFileS ; "cannot load song file %s" ;~ 28AF:0C1E
cs=0x28af;eip=0x000c21; 	X(PUSH(ax));	// 82996 push    ax ;~ 28AF:0C21
cs=0x28af;eip=0x000c22; 	J(CALLF(fatal_error,0));	// 82997 call    far ptr fatal_error ;~ 28AF:0C22
cs=0x28af;eip=0x000c27; 	T(ADD(sp, 4));	// 82999 add     sp, 4 ;~ 28AF:0C27
loc_37cfa:
	// 9554 
cs=0x28af;eip=0x000c2a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 83003 mov     ax, [bp+var_4] ;~ 28AF:0C2A
cs=0x28af;eip=0x000c2d; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 83004 mov     dx, [bp+var_2] ;~ 28AF:0C2D
cs=0x28af;eip=0x000c30; 	T(MOV(sp, bp));	// 83005 mov     sp, bp ;~ 28AF:0C30
cs=0x28af;eip=0x000c32; 	X(POP(bp));	// 83006 pop     bp ;~ 28AF:0C32
cs=0x28af;eip=0x000c33; 	J(RETF(0));	// 83007 retf ;~ 28AF:0C33

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kload_song_file: 	goto load_song_file;
        case m2c::kloc_37cfa: 	goto loc_37cfa;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool load_voice_file(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    load_voice_file:
    _begin:
#undef var_4
#define var_4 -4
	// 83018 var_4           = word ptr -4 ;~ 28AF:0C34
#undef var_2
#define var_2 -2
	// 83019 var_2           = word ptr -2 ;~ 28AF:0C34
#undef arg_0
#define arg_0 6
	// 83020 arg_0           = dword ptr  6 ;~ 28AF:0C34
cs=0x28af;eip=0x000c34; 	X(PUSH(bp));	// 83022 push    bp ;~ 28AF:0C34
cs=0x28af;eip=0x000c35; 	T(MOV(bp, sp));	// 83023 mov     bp, sp ;~ 28AF:0C35
cs=0x28af;eip=0x000c37; 	T(SUB(sp, 4));	// 83024 sub     sp, 4 ;~ 28AF:0C37
cs=0x28af;eip=0x000c3a; 	T(SUB(ax, ax));	// 83025 sub     ax, ax ;~ 28AF:0C3A
cs=0x28af;eip=0x000c3c; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 83026 mov     [bp+var_2], ax ;~ 28AF:0C3C
cs=0x28af;eip=0x000c3f; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 83027 mov     [bp+var_4], ax ;~ 28AF:0C3F
cs=0x28af;eip=0x000c42; 	T(CMP(byte_40635, 0));	// 83028 cmp     byte_40635, 0 ;~ 28AF:0C42
cs=0x28af;eip=0x000c47; 	J(JZ(loc_37d31));	// 83029 jz      short loc_37D31 ;~ 28AF:0C47
cs=0x28af;eip=0x000c49; 	T(MOV(ax, offset(dseg,audiodriverstring2)));	// 83030 mov     ax, offset audiodriverstring2 ;~ 28AF:0C49
cs=0x28af;eip=0x000c4c; 	X(PUSH(ax));	// 83031 push    ax              ; int ;~ 28AF:0C4C
cs=0x28af;eip=0x000c4d; 	T(MOV(ax, offset(dseg,advc)));	// 83032 mov     ax, offset aDvc ; "dvc" ;~ 28AF:0C4D
cs=0x28af;eip=0x000c50; 	X(PUSH(ax));	// 83033 push    ax ;~ 28AF:0C50
cs=0x28af;eip=0x000c51; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 83034 push    word ptr [bp+arg_0] ; char * ;~ 28AF:0C51
cs=0x28af;eip=0x000c54; 	X(PUSH(cs));	// 83035 push    cs ;~ 28AF:0C54
cs=0x28af;eip=0x000c55; 	J(CALL(load_sfx_ge,0));	// 83036 call    near ptr load_sfx_ge ;~ 28AF:0C55
cs=0x28af;eip=0x000c58; 	T(ADD(sp, 6));	// 83037 add     sp, 6 ;~ 28AF:0C58
cs=0x28af;eip=0x000c5b; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 83038 mov     [bp+var_4], ax ;~ 28AF:0C5B
cs=0x28af;eip=0x000c5e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 83039 mov     [bp+var_2], dx ;~ 28AF:0C5E
loc_37d31:
	// 9555 
cs=0x28af;eip=0x000c61; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 83042 mov     ax, [bp+var_4] ;~ 28AF:0C61
cs=0x28af;eip=0x000c64; 	T(OR(ax, *(dw*)(raddr(ss,bp+var_2))));	// 83043 or      ax, [bp+var_2] ;~ 28AF:0C64
cs=0x28af;eip=0x000c67; 	J(JNZ(loc_37d51));	// 83044 jnz     short loc_37D51 ;~ 28AF:0C67
cs=0x28af;eip=0x000c69; 	T(MOV(ax, offset(dseg,audiodriverstring2)));	// 83045 mov     ax, offset audiodriverstring2 ;~ 28AF:0C69
cs=0x28af;eip=0x000c6c; 	X(PUSH(ax));	// 83046 push    ax              ; int ;~ 28AF:0C6C
cs=0x28af;eip=0x000c6d; 	T(MOV(ax, offset(dseg,avce)));	// 83047 mov     ax, offset aVce ; "vce" ;~ 28AF:0C6D
cs=0x28af;eip=0x000c70; 	X(PUSH(ax));	// 83048 push    ax ;~ 28AF:0C70
cs=0x28af;eip=0x000c71; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 83049 push    word ptr [bp+arg_0] ; char * ;~ 28AF:0C71
cs=0x28af;eip=0x000c74; 	X(PUSH(cs));	// 83050 push    cs ;~ 28AF:0C74
cs=0x28af;eip=0x000c75; 	J(CALL(load_sfx_ge,0));	// 83051 call    near ptr load_sfx_ge ;~ 28AF:0C75
cs=0x28af;eip=0x000c78; 	T(ADD(sp, 6));	// 83052 add     sp, 6 ;~ 28AF:0C78
cs=0x28af;eip=0x000c7b; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 83053 mov     [bp+var_4], ax ;~ 28AF:0C7B
cs=0x28af;eip=0x000c7e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 83054 mov     [bp+var_2], dx ;~ 28AF:0C7E
loc_37d51:
	// 9556 
cs=0x28af;eip=0x000c81; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 83057 mov     ax, [bp+var_4] ;~ 28AF:0C81
cs=0x28af;eip=0x000c84; 	T(OR(ax, *(dw*)(raddr(ss,bp+var_2))));	// 83058 or      ax, [bp+var_2] ;~ 28AF:0C84
cs=0x28af;eip=0x000c87; 	J(JNZ(loc_37d6f));	// 83059 jnz     short loc_37D6F ;~ 28AF:0C87
cs=0x28af;eip=0x000c89; 	T(CMP(word_4063c, 0));	// 83060 cmp     word_4063C, 0 ;~ 28AF:0C89
cs=0x28af;eip=0x000c8e; 	J(JZ(loc_37d6f));	// 83061 jz      short loc_37D6F ;~ 28AF:0C8E
cs=0x28af;eip=0x000c90; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 83062 push    word ptr [bp+arg_0] ;~ 28AF:0C90
cs=0x28af;eip=0x000c93; 	T(MOV(ax, offset(dseg,acannotloadvoicefiles)));	// 83063 mov     ax, offset aCannotLoadVoiceFileS ; "cannot load voice file %s" ;~ 28AF:0C93
cs=0x28af;eip=0x000c96; 	X(PUSH(ax));	// 83064 push    ax ;~ 28AF:0C96
cs=0x28af;eip=0x000c97; 	J(CALLF(fatal_error,0));	// 83065 call    far ptr fatal_error ;~ 28AF:0C97
cs=0x28af;eip=0x000c9c; 	T(ADD(sp, 4));	// 83067 add     sp, 4 ;~ 28AF:0C9C
loc_37d6f:
	// 9557 
cs=0x28af;eip=0x000c9f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 83071 mov     ax, [bp+var_4] ;~ 28AF:0C9F
cs=0x28af;eip=0x000ca2; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 83072 mov     dx, [bp+var_2] ;~ 28AF:0CA2
cs=0x28af;eip=0x000ca5; 	T(MOV(sp, bp));	// 83073 mov     sp, bp ;~ 28AF:0CA5
cs=0x28af;eip=0x000ca7; 	X(POP(bp));	// 83074 pop     bp ;~ 28AF:0CA7
cs=0x28af;eip=0x000ca8; 	J(RETF(0));	// 83075 retf ;~ 28AF:0CA8

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kload_voice_file: 	goto load_voice_file;
        case m2c::kloc_37d31: 	goto loc_37d31;
        case m2c::kloc_37d51: 	goto loc_37d51;
        case m2c::kloc_37d6f: 	goto loc_37d6f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool nopsub_37d7a(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    nopsub_37d7a:
    _begin:
#undef var_4
#define var_4 -4
	// 83088 var_4           = word ptr -4 ;~ 28AF:0CAA
#undef var_2
#define var_2 -2
	// 83089 var_2           = word ptr -2 ;~ 28AF:0CAA
#undef arg_0
#define arg_0 6
	// 83090 arg_0           = dword ptr  6 ;~ 28AF:0CAA
cs=0x28af;eip=0x000caa; 	X(PUSH(bp));	// 83092 push    bp ;~ 28AF:0CAA
cs=0x28af;eip=0x000cab; 	T(MOV(bp, sp));	// 83093 mov     bp, sp ;~ 28AF:0CAB
cs=0x28af;eip=0x000cad; 	T(SUB(sp, 4));	// 83094 sub     sp, 4 ;~ 28AF:0CAD
cs=0x28af;eip=0x000cb0; 	T(MOV(ax, offset(dseg,audiodriverstring2)));	// 83095 mov     ax, offset audiodriverstring2 ;~ 28AF:0CB0
cs=0x28af;eip=0x000cb3; 	X(PUSH(ax));	// 83096 push    ax              ; int ;~ 28AF:0CB3
cs=0x28af;eip=0x000cb4; 	T(MOV(ax, offset(dseg,aslb)));	// 83097 mov     ax, offset aSlb ; "slb" ;~ 28AF:0CB4
cs=0x28af;eip=0x000cb7; 	X(PUSH(ax));	// 83098 push    ax ;~ 28AF:0CB7
cs=0x28af;eip=0x000cb8; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 83099 push    word ptr [bp+arg_0] ; char * ;~ 28AF:0CB8
cs=0x28af;eip=0x000cbb; 	X(PUSH(cs));	// 83100 push    cs ;~ 28AF:0CBB
cs=0x28af;eip=0x000cbc; 	J(CALL(load_sfx_ge,0));	// 83101 call    near ptr load_sfx_ge ;~ 28AF:0CBC
cs=0x28af;eip=0x000cbf; 	T(ADD(sp, 6));	// 83102 add     sp, 6 ;~ 28AF:0CBF
cs=0x28af;eip=0x000cc2; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 83103 mov     [bp+var_4], ax ;~ 28AF:0CC2
cs=0x28af;eip=0x000cc5; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 83104 mov     [bp+var_2], dx ;~ 28AF:0CC5
cs=0x28af;eip=0x000cc8; 	T(OR(ax, dx));	// 83105 or      ax, dx ;~ 28AF:0CC8
cs=0x28af;eip=0x000cca; 	J(JNZ(loc_37db2));	// 83106 jnz     short loc_37DB2 ;~ 28AF:0CCA
cs=0x28af;eip=0x000ccc; 	T(CMP(word_4063c, 0));	// 83107 cmp     word_4063C, 0 ;~ 28AF:0CCC
cs=0x28af;eip=0x000cd1; 	J(JZ(loc_37db2));	// 83108 jz      short loc_37DB2 ;~ 28AF:0CD1
cs=0x28af;eip=0x000cd3; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 83109 push    word ptr [bp+arg_0] ;~ 28AF:0CD3
cs=0x28af;eip=0x000cd6; 	T(MOV(ax, offset(dseg,acannotloadsamplefiles)));	// 83110 mov     ax, offset aCannotLoadSampleFileS ; "cannot load sample file %s" ;~ 28AF:0CD6
cs=0x28af;eip=0x000cd9; 	X(PUSH(ax));	// 83111 push    ax ;~ 28AF:0CD9
cs=0x28af;eip=0x000cda; 	J(CALLF(fatal_error,0));	// 83112 call    far ptr fatal_error ;~ 28AF:0CDA
cs=0x28af;eip=0x000cdf; 	T(ADD(sp, 4));	// 83114 add     sp, 4 ;~ 28AF:0CDF
loc_37db2:
	// 9558 
cs=0x28af;eip=0x000ce2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 83118 mov     ax, [bp+var_4] ;~ 28AF:0CE2
cs=0x28af;eip=0x000ce5; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 83119 mov     dx, [bp+var_2] ;~ 28AF:0CE5
cs=0x28af;eip=0x000ce8; 	T(MOV(sp, bp));	// 83120 mov     sp, bp ;~ 28AF:0CE8
cs=0x28af;eip=0x000cea; 	X(POP(bp));	// 83121 pop     bp ;~ 28AF:0CEA
cs=0x28af;eip=0x000ceb; 	J(RETF(0));	// 83122 retf ;~ 28AF:0CEB

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_37db2: 	goto loc_37db2;
        case m2c::knopsub_37d7a: 	goto nopsub_37d7a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool audio_init_chunk(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    audio_init_chunk:
    _begin:
#undef var_a
#define var_a -0x0A
	// 83133 var_A           = word ptr -0Ah ;~ 28AF:0CEC
#undef var_8
#define var_8 -8
	// 83134 var_8           = word ptr -8 ;~ 28AF:0CEC
#undef var_6
#define var_6 -6
	// 83135 var_6           = word ptr -6 ;~ 28AF:0CEC
#undef var_4
#define var_4 -4
	// 83136 var_4           = word ptr -4 ;~ 28AF:0CEC
#undef var_2
#define var_2 -2
	// 83137 var_2           = word ptr -2 ;~ 28AF:0CEC
#undef arg_0
#define arg_0 6
	// 83138 arg_0           = word ptr  6 ;~ 28AF:0CEC
#undef arg_2
#define arg_2 8
	// 83139 arg_2           = word ptr  8 ;~ 28AF:0CEC
#undef arg_4
#define arg_4 0x0A
	// 83140 arg_4           = word ptr  0Ah ;~ 28AF:0CEC
#undef arg_6
#define arg_6 0x0C
	// 83141 arg_6           = word ptr  0Ch ;~ 28AF:0CEC
#undef arg_8
#define arg_8 0x0E
	// 83142 arg_8           = word ptr  0Eh ;~ 28AF:0CEC
#undef arg_a
#define arg_a 0x10
	// 83143 arg_A           = byte ptr  10h ;~ 28AF:0CEC
#undef arg_c
#define arg_c 0x12
	// 83144 arg_C           = byte ptr  12h ;~ 28AF:0CEC
cs=0x28af;eip=0x000cec; 	X(PUSH(bp));	// 83146 push    bp ;~ 28AF:0CEC
cs=0x28af;eip=0x000ced; 	T(MOV(bp, sp));	// 83147 mov     bp, sp ;~ 28AF:0CED
cs=0x28af;eip=0x000cef; 	T(SUB(sp, 0x0A));	// 83148 sub     sp, 0Ah ;~ 28AF:0CEF
cs=0x28af;eip=0x000cf2; 	X(PUSH(di));	// 83149 push    di ;~ 28AF:0CF2
cs=0x28af;eip=0x000cf3; 	X(PUSH(si));	// 83150 push    si ;~ 28AF:0CF3
cs=0x28af;eip=0x000cf4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 83151 mov     ax, [bp+arg_0] ;~ 28AF:0CF4
cs=0x28af;eip=0x000cf7; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 83152 mov     [bp+var_6], ax ;~ 28AF:0CF7
cs=0x28af;eip=0x000cfa; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 83153 mov     ax, [bp+arg_2] ;~ 28AF:0CFA
cs=0x28af;eip=0x000cfd; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), ax));	// 83154 cmp     [bp+var_6], ax ;~ 28AF:0CFD
cs=0x28af;eip=0x000d00; 	J(JLE(loc_37dd5));	// 83155 jle     short loc_37DD5 ;~ 28AF:0D00
cs=0x28af;eip=0x000d02; 	J(JMP(loc_37eba));	// 83156 jmp     loc_37EBA ;~ 28AF:0D02
loc_37dd5:
	// 9559 
cs=0x28af;eip=0x000d05; 	T(MOV(ax, 0x4C));	// 83160 mov     ax, 4Ch ; 'L' ;~ 28AF:0D05
cs=0x28af;eip=0x000d08; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 83161 imul    [bp+arg_0] ;~ 28AF:0D08
cs=0x28af;eip=0x000d0b; 	T(ADD(ax, offset(dseg,audiochunks_unk)));	// 83162 add     ax, offset audiochunks_unk ;~ 28AF:0D0B
cs=0x28af;eip=0x000d0e; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 83163 mov     [bp+var_A], ax ;~ 28AF:0D0E
cs=0x28af;eip=0x000d11; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_6))));	// 83164 mov     di, [bp+var_6] ;~ 28AF:0D11
loc_37de4:
	// 9560 
cs=0x28af;eip=0x000d14; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_a))));	// 83167 mov     si, [bp+var_A] ;~ 28AF:0D14
cs=0x28af;eip=0x000d17; 	T(SUB(ax, ax));	// 83168 sub     ax, ax ;~ 28AF:0D17
cs=0x28af;eip=0x000d19; 	X(MOV(*(dw*)(raddr(ds,si+0x4A)), ax));	// 83169 mov     [si+4Ah], ax ;~ 28AF:0D19
cs=0x28af;eip=0x000d1c; 	X(MOV(*(dw*)(raddr(ds,si+0x48)), ax));	// 83170 mov     [si+48h], ax ;~ 28AF:0D1C
cs=0x28af;eip=0x000d1f; 	X(MOV(*(raddr(ds,si+0x22)), 0x7F));	// 83171 mov     byte ptr [si+22h], 7Fh ;~ 28AF:0D1F
cs=0x28af;eip=0x000d23; 	T(MOV(ax, di));	// 83172 mov     ax, di ;~ 28AF:0D23
cs=0x28af;eip=0x000d25; 	X(MOV(*(raddr(ds,si+0x23)), al));	// 83173 mov     [si+23h], al ;~ 28AF:0D25
cs=0x28af;eip=0x000d28; 	X(MOV(*(raddr(ds,si+0x16)), 0x0F));	// 83174 mov     byte ptr [si+16h], 0Fh ;~ 28AF:0D28
cs=0x28af;eip=0x000d2c; 	X(MOV(*((&byte_44d06)+di), 0));	// 83175 mov     byte_44D06[di], 0 ;~ 28AF:0D2C
cs=0x28af;eip=0x000d31; 	X(MOV(*((&byte_44aca)+di), 0));	// 83176 mov     byte_44ACA[di], 0 ;~ 28AF:0D31
cs=0x28af;eip=0x000d36; 	X(MOV(*(raddr(ds,si+0x32)), 0));	// 83177 mov     byte ptr [si+32h], 0 ;~ 28AF:0D36
cs=0x28af;eip=0x000d3a; 	X(MOV(*(raddr(ds,si+4)), 0));	// 83178 mov     byte ptr [si+4], 0 ;~ 28AF:0D3A
cs=0x28af;eip=0x000d3e; 	T(MOV(al, *(raddr(ss,bp+arg_c))));	// 83179 mov     al, [bp+arg_C] ;~ 28AF:0D3E
cs=0x28af;eip=0x000d41; 	X(MOV(*(raddr(ds,si+0x24)), al));	// 83180 mov     [si+24h], al ;~ 28AF:0D41
cs=0x28af;eip=0x000d44; 	X(MOV(*(raddr(ds,si+0x15)), 0));	// 83181 mov     byte ptr [si+15h], 0 ;~ 28AF:0D44
cs=0x28af;eip=0x000d48; 	T(SUB(ax, ax));	// 83182 sub     ax, ax ;~ 28AF:0D48
cs=0x28af;eip=0x000d4a; 	X(MOV(*(dw*)(raddr(ds,si+0x1A)), ax));	// 83183 mov     [si+1Ah], ax ;~ 28AF:0D4A
cs=0x28af;eip=0x000d4d; 	X(MOV(*(dw*)(raddr(ds,si+0x18)), ax));	// 83184 mov     [si+18h], ax ;~ 28AF:0D4D
cs=0x28af;eip=0x000d50; 	X(MOV(*(raddr(ds,si+0x1C)), 0));	// 83185 mov     byte ptr [si+1Ch], 0 ;~ 28AF:0D50
cs=0x28af;eip=0x000d54; 	X(MOV(*(dw*)(raddr(ds,si+0x20)), ax));	// 83186 mov     [si+20h], ax ;~ 28AF:0D54
cs=0x28af;eip=0x000d57; 	X(MOV(*(dw*)(raddr(ds,si+0x1E)), ax));	// 83187 mov     [si+1Eh], ax ;~ 28AF:0D57
cs=0x28af;eip=0x000d5a; 	T(MOV(al, *(raddr(ss,bp+arg_a))));	// 83188 mov     al, [bp+arg_A] ;~ 28AF:0D5A
cs=0x28af;eip=0x000d5d; 	X(MOV(*(raddr(ds,si+0x28)), al));	// 83189 mov     [si+28h], al ;~ 28AF:0D5D
cs=0x28af;eip=0x000d60; 	X(MOV(*(raddr(ds,si+0x25)), 0));	// 83190 mov     byte ptr [si+25h], 0 ;~ 28AF:0D60
cs=0x28af;eip=0x000d64; 	X(MOV(*(dw*)(raddr(ds,si+0x26)), 0));	// 83191 mov     word ptr [si+26h], 0 ;~ 28AF:0D64
cs=0x28af;eip=0x000d69; 	X(MOV(*(raddr(ds,si+0x29)), 0));	// 83192 mov     byte ptr [si+29h], 0 ;~ 28AF:0D69
cs=0x28af;eip=0x000d6d; 	X(MOV(*(raddr(ds,si+0x2A)), 0));	// 83193 mov     byte ptr [si+2Ah], 0 ;~ 28AF:0D6D
cs=0x28af;eip=0x000d71; 	X(MOV(*(raddr(ds,si+0x2B)), 0));	// 83194 mov     byte ptr [si+2Bh], 0 ;~ 28AF:0D71
cs=0x28af;eip=0x000d75; 	X(MOV(*(raddr(ds,si+0x2C)), 0));	// 83195 mov     byte ptr [si+2Ch], 0 ;~ 28AF:0D75
cs=0x28af;eip=0x000d79; 	X(MOV(*(raddr(ds,si+0x47)), 0x0FF));	// 83196 mov     byte ptr [si+47h], 0FFh ;~ 28AF:0D79
cs=0x28af;eip=0x000d7d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 83197 mov     ax, [bp+arg_4] ;~ 28AF:0D7D
cs=0x28af;eip=0x000d80; 	T(OR(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 83198 or      ax, [bp+arg_6] ;~ 28AF:0D80
cs=0x28af;eip=0x000d83; 	J(JZ(loc_37ea0));	// 83199 jz      short loc_37EA0 ;~ 28AF:0D83
cs=0x28af;eip=0x000d85; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 83200 mov     ax, [bp+arg_8] ;~ 28AF:0D85
cs=0x28af;eip=0x000d88; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 83201 add     ax, [bp+arg_4] ;~ 28AF:0D88
cs=0x28af;eip=0x000d8b; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 83202 mov     dx, [bp+arg_6] ;~ 28AF:0D8B
cs=0x28af;eip=0x000d8e; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 83203 mov     [bp+var_4], ax ;~ 28AF:0D8E
cs=0x28af;eip=0x000d91; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 83204 mov     [bp+var_2], dx ;~ 28AF:0D91
cs=0x28af;eip=0x000d94; 	X(PUSH(dx));	// 83205 push    dx ;~ 28AF:0D94
cs=0x28af;eip=0x000d95; 	X(PUSH(ax));	// 83206 push    ax ;~ 28AF:0D95
cs=0x28af;eip=0x000d96; 	X(PUSH(cs));	// 83207 push    cs ;~ 28AF:0D96
cs=0x28af;eip=0x000d97; 	J(CALL(audioresource_get_dword,0));	// 83208 call    near ptr audioresource_get_dword ;~ 28AF:0D97
cs=0x28af;eip=0x000d9a; 	T(ADD(sp, 4));	// 83209 add     sp, 4 ;~ 28AF:0D9A
cs=0x28af;eip=0x000d9d; 	T(ADD(ax, 4));	// 83210 add     ax, 4 ;~ 28AF:0D9D
cs=0x28af;eip=0x000da0; 	X(MOV(*(dw*)(raddr(ds,si+5)), ax));	// 83211 mov     [si+5], ax ;~ 28AF:0DA0
cs=0x28af;eip=0x000da3; 	X(MOV(*(dw*)(raddr(ds,si+7)), dx));	// 83212 mov     [si+7], dx ;~ 28AF:0DA3
cs=0x28af;eip=0x000da6; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 83213 push    [bp+var_2] ;~ 28AF:0DA6
cs=0x28af;eip=0x000da9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 83214 push    [bp+var_4] ;~ 28AF:0DA9
cs=0x28af;eip=0x000dac; 	X(PUSH(cs));	// 83215 push    cs ;~ 28AF:0DAC
cs=0x28af;eip=0x000dad; 	J(CALL(audioresource_get_dword,0));	// 83216 call    near ptr audioresource_get_dword ;~ 28AF:0DAD
cs=0x28af;eip=0x000db0; 	T(ADD(sp, 4));	// 83217 add     sp, 4 ;~ 28AF:0DB0
cs=0x28af;eip=0x000db3; 	T(ADD(ax, 4));	// 83218 add     ax, 4 ;~ 28AF:0DB3
cs=0x28af;eip=0x000db6; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 83219 mov     [si], ax ;~ 28AF:0DB6
cs=0x28af;eip=0x000db8; 	X(MOV(*(dw*)(raddr(ds,si+2)), dx));	// 83220 mov     [si+2], dx ;~ 28AF:0DB8
cs=0x28af;eip=0x000dbb; 	X(ADD(*(dw*)(raddr(ss,bp+arg_8)), 5));	// 83221 add     [bp+arg_8], 5 ;~ 28AF:0DBB
cs=0x28af;eip=0x000dbf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 83222 mov     ax, [bp+arg_4] ;~ 28AF:0DBF
cs=0x28af;eip=0x000dc2; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 83223 mov     dx, [bp+arg_6] ;~ 28AF:0DC2
cs=0x28af;eip=0x000dc5; 	T(ADD(ax, 7));	// 83224 add     ax, 7 ;~ 28AF:0DC5
cs=0x28af;eip=0x000dc8; 	X(MOV(*(dw*)(raddr(ds,si+0x2E)), ax));	// 83225 mov     [si+2Eh], ax ;~ 28AF:0DC8
cs=0x28af;eip=0x000dcb; 	X(MOV(*(dw*)(raddr(ds,si+0x30)), dx));	// 83226 mov     [si+30h], dx ;~ 28AF:0DCB
cs=0x28af;eip=0x000dce; 	J(JMP(loc_37ea7));	// 83227 jmp     short loc_37EA7 ;~ 28AF:0DCE
loc_37ea0:
	// 9561 
cs=0x28af;eip=0x000dd0; 	T(SUB(ax, ax));	// 83231 sub     ax, ax ;~ 28AF:0DD0
cs=0x28af;eip=0x000dd2; 	X(MOV(*(dw*)(raddr(ds,si+2)), ax));	// 83232 mov     [si+2], ax ;~ 28AF:0DD2
cs=0x28af;eip=0x000dd5; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 83233 mov     [si], ax ;~ 28AF:0DD5
loc_37ea7:
	// 9562 
cs=0x28af;eip=0x000dd7; 	X(ADD(*(dw*)(raddr(ss,bp+var_a)), 0x4C));	// 83236 add     [bp+var_A], 4Ch ; 'L' ;~ 28AF:0DD7
cs=0x28af;eip=0x000ddb; 	T(INC(di));	// 83237 inc     di ;~ 28AF:0DDB
cs=0x28af;eip=0x000ddc; 	T(CMP(di, *(dw*)(raddr(ss,bp+arg_2))));	// 83238 cmp     di, [bp+arg_2] ;~ 28AF:0DDC
cs=0x28af;eip=0x000ddf; 	J(JG(loc_37eb4));	// 83239 jg      short loc_37EB4 ;~ 28AF:0DDF
cs=0x28af;eip=0x000de1; 	J(JMP(loc_37de4));	// 83240 jmp     loc_37DE4 ;~ 28AF:0DE1
loc_37eb4:
	// 9563 
cs=0x28af;eip=0x000de4; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), di));	// 83244 mov     [bp+var_6], di ;~ 28AF:0DE4
cs=0x28af;eip=0x000de7; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), si));	// 83245 mov     [bp+var_8], si ;~ 28AF:0DE7
loc_37eba:
	// 9564 
cs=0x28af;eip=0x000dea; 	X(POP(si));	// 83248 pop     si ;~ 28AF:0DEA
cs=0x28af;eip=0x000deb; 	X(POP(di));	// 83249 pop     di ;~ 28AF:0DEB
cs=0x28af;eip=0x000dec; 	T(MOV(sp, bp));	// 83250 mov     sp, bp ;~ 28AF:0DEC
cs=0x28af;eip=0x000dee; 	X(POP(bp));	// 83251 pop     bp ;~ 28AF:0DEE
cs=0x28af;eip=0x000def; 	J(RETF(0));	// 83252 retf ;~ 28AF:0DEF

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kaudio_init_chunk: 	goto audio_init_chunk;
        case m2c::kloc_37dd5: 	goto loc_37dd5;
        case m2c::kloc_37de4: 	goto loc_37de4;
        case m2c::kloc_37ea0: 	goto loc_37ea0;
        case m2c::kloc_37ea7: 	goto loc_37ea7;
        case m2c::kloc_37eb4: 	goto loc_37eb4;
        case m2c::kloc_37eba: 	goto loc_37eba;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool audio_map_song_instruments(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    audio_map_song_instruments:
    _begin:
#undef var_22
#define var_22 -0x22
	// 83262 var_22          = word ptr -22h ;~ 28AF:0DF0
#undef var_20
#define var_20 -0x20
	// 83263 var_20          = word ptr -20h ;~ 28AF:0DF0
#undef var_1e
#define var_1e -0x1E
	// 83264 var_1E          = word ptr -1Eh ;~ 28AF:0DF0
#undef var_1c
#define var_1c -0x1C
	// 83265 var_1C          = word ptr -1Ch ;~ 28AF:0DF0
#undef var_1a
#define var_1a -0x1A
	// 83266 var_1A          = word ptr -1Ah ;~ 28AF:0DF0
#undef var_16
#define var_16 -0x16
	// 83267 var_16          = dword ptr -16h ;~ 28AF:0DF0
#undef var_12
#define var_12 -0x12
	// 83268 var_12          = word ptr -12h ;~ 28AF:0DF0
#undef var_10
#define var_10 -0x10
	// 83269 var_10          = word ptr -10h ;~ 28AF:0DF0
#undef var_e
#define var_e -0x0E
	// 83270 var_E           = word ptr -0Eh ;~ 28AF:0DF0
#undef var_c
#define var_c -0x0C
	// 83271 var_C           = word ptr -0Ch ;~ 28AF:0DF0
#undef var_a
#define var_a -0x0A
	// 83272 var_A           = byte ptr -0Ah ;~ 28AF:0DF0
#undef var_6
#define var_6 -6
	// 83273 var_6           = byte ptr -6 ;~ 28AF:0DF0
#undef var_4
#define var_4 -4
	// 83274 var_4           = word ptr -4 ;~ 28AF:0DF0
#undef var_2
#define var_2 -2
	// 83275 var_2           = word ptr -2 ;~ 28AF:0DF0
#undef arg_0
#define arg_0 6
	// 83276 arg_0           = word ptr  6 ;~ 28AF:0DF0
#undef arg_2
#define arg_2 8
	// 83277 arg_2           = word ptr  8 ;~ 28AF:0DF0
#undef arg_4
#define arg_4 0x0A
	// 83278 arg_4           = word ptr  0Ah ;~ 28AF:0DF0
#undef arg_6
#define arg_6 0x0C
	// 83279 arg_6           = word ptr  0Ch ;~ 28AF:0DF0
cs=0x28af;eip=0x000df0; 	X(PUSH(bp));	// 83281 push    bp ;~ 28AF:0DF0
cs=0x28af;eip=0x000df1; 	T(MOV(bp, sp));	// 83282 mov     bp, sp ;~ 28AF:0DF1
cs=0x28af;eip=0x000df3; 	T(SUB(sp, 0x22));	// 83283 sub     sp, 22h ;~ 28AF:0DF3
cs=0x28af;eip=0x000df6; 	X(PUSH(di));	// 83284 push    di ;~ 28AF:0DF6
cs=0x28af;eip=0x000df7; 	X(PUSH(si));	// 83285 push    si ;~ 28AF:0DF7
cs=0x28af;eip=0x000df8; 	X(MOV(*(raddr(ss,bp+var_6)), 0));	// 83286 mov     [bp+var_6], 0 ;~ 28AF:0DF8
cs=0x28af;eip=0x000dfc; 	T(MOV(ax, offset(dseg,ahdr1_0)));	// 83287 mov     ax, offset aHdr1_0 ; "hdr1" ;~ 28AF:0DFC
cs=0x28af;eip=0x000dff; 	X(PUSH(ax));	// 83288 push    ax ;~ 28AF:0DFF
cs=0x28af;eip=0x000e00; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 83289 push    [bp+arg_2] ;~ 28AF:0E00
cs=0x28af;eip=0x000e03; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 83290 push    [bp+arg_0] ;~ 28AF:0E03
cs=0x28af;eip=0x000e06; 	J(CALLF(audioresource_find,0));	// 83291 call    audioresource_find ;~ 28AF:0E06
cs=0x28af;eip=0x000e0b; 	T(ADD(sp, 6));	// 83292 add     sp, 6 ;~ 28AF:0E0B
cs=0x28af;eip=0x000e0e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_16))), ax));	// 83293 mov     word ptr [bp+var_16], ax ;~ 28AF:0E0E
cs=0x28af;eip=0x000e11; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_16+2))), dx));	// 83294 mov     word ptr [bp+var_16+2], dx ;~ 28AF:0E11
cs=0x28af;eip=0x000e14; 	T(OR(ax, dx));	// 83295 or      ax, dx ;~ 28AF:0E14
cs=0x28af;eip=0x000e16; 	J(JNZ(loc_37eeb));	// 83296 jnz     short loc_37EEB ;~ 28AF:0E16
cs=0x28af;eip=0x000e18; 	J(JMP(loc_38036));	// 83297 jmp     loc_38036 ;~ 28AF:0E18
loc_37eeb:
	// 9565 
cs=0x28af;eip=0x000e1b; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), 0));	// 83301 mov     [bp+var_10], 0 ;~ 28AF:0E1B
cs=0x28af;eip=0x000e20; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_16))));	// 83302 les     bx, [bp+var_16] ;~ 28AF:0E20
cs=0x28af;eip=0x000e23; 	T(MOV(al, *(raddr(es,bx+6))));	// 83304 mov     al, es:[bx+6]   ; counter is compared to this - numsomething? ;~ 28AF:0E23
cs=0x28af;eip=0x000e27; 	T(SUB(ah, ah));	// 83305 sub     ah, ah ;~ 28AF:0E27
cs=0x28af;eip=0x000e29; 	T(OR(ax, ax));	// 83306 or      ax, ax ;~ 28AF:0E29
cs=0x28af;eip=0x000e2b; 	J(JNZ(loc_37f00));	// 83307 jnz     short loc_37F00 ;~ 28AF:0E2B
cs=0x28af;eip=0x000e2d; 	J(JMP(loc_37f87));	// 83308 jmp     loc_37F87 ;~ 28AF:0E2D
loc_37f00:
	// 9566 
cs=0x28af;eip=0x000e30; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), ax));	// 83312 mov     [bp+var_1C], ax ;~ 28AF:0E30
cs=0x28af;eip=0x000e33; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), 0));	// 83313 mov     [bp+var_1E], 0 ;~ 28AF:0E33
cs=0x28af;eip=0x000e38; 	T(MOV(ax, bx));	// 83314 mov     ax, bx ;~ 28AF:0E38
cs=0x28af;eip=0x000e3a; 	T(ADD(ax, 7));	// 83315 add     ax, 7 ;~ 28AF:0E3A
cs=0x28af;eip=0x000e3d; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 83316 mov     [bp+var_22], ax ; ax = hdrptr + 7 = instrument names; which are to be replaced with pointers to the instruments in the vce? ;~ 28AF:0E3D
cs=0x28af;eip=0x000e40; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), dx));	// 83317 mov     [bp+var_20], dx ;~ 28AF:0E40
loc_37f13:
	// 9567 
cs=0x28af;eip=0x000e43; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), 0));	// 83320 mov     [bp+var_12], 0 ;~ 28AF:0E43
cs=0x28af;eip=0x000e48; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_1e))));	// 83321 mov     di, [bp+var_1E] ;~ 28AF:0E48
cs=0x28af;eip=0x000e4b; 	T(SUB(cx, cx));	// 83322 sub     cx, cx ;~ 28AF:0E4B
cs=0x28af;eip=0x000e4d; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), ds));	// 83323 mov     [bp+var_1A], ds ;~ 28AF:0E4D
cs=0x28af;eip=0x000e50; 	T(LDS(si, *(dd*)(raddr(ss,bp+var_16))));	// 83324 lds     si, [bp+var_16] ;~ 28AF:0E50
loc_37f23:
	// 9568 
cs=0x28af;eip=0x000e53; 	T(MOV(bx, di));	// 83327 mov     bx, di ;~ 28AF:0E53
cs=0x28af;eip=0x000e55; 	T(ADD(bx, cx));	// 83328 add     bx, cx ;~ 28AF:0E55
cs=0x28af;eip=0x000e57; 	T(MOV(al, *(raddr(ds,bx+si+7))));	// 83329 mov     al, [bx+si+7] ;~ 28AF:0E57
cs=0x28af;eip=0x000e5a; 	T(MOV(bx, cx));	// 83330 mov     bx, cx ;~ 28AF:0E5A
cs=0x28af;eip=0x000e5c; 	T(ADD(bx, bp));	// 83331 add     bx, bp ;~ 28AF:0E5C
cs=0x28af;eip=0x000e5e; 	X(MOV(*(raddr(ss,bx-0x0A)), al));	// 83332 mov     ss:[bx-0Ah], al ;~ 28AF:0E5E
cs=0x28af;eip=0x000e62; 	T(INC(cx));	// 83333 inc     cx ;~ 28AF:0E62
cs=0x28af;eip=0x000e63; 	T(CMP(cx, 4));	// 83334 cmp     cx, 4 ;~ 28AF:0E63
cs=0x28af;eip=0x000e66; 	J(JL(loc_37f23));	// 83335 jl      short loc_37F23 ;~ 28AF:0E66
cs=0x28af;eip=0x000e68; 	T(MOV(ds, *(dw*)(raddr(ss,bp+var_1a))));	// 83336 mov     ds, [bp+var_1A] ;~ 28AF:0E68
cs=0x28af;eip=0x000e6b; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), cx));	// 83337 mov     [bp+var_12], cx ;~ 28AF:0E6B
cs=0x28af;eip=0x000e6e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_22))));	// 83338 mov     ax, [bp+var_22] ;~ 28AF:0E6E
cs=0x28af;eip=0x000e71; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_20))));	// 83339 mov     dx, [bp+var_20] ;~ 28AF:0E71
cs=0x28af;eip=0x000e74; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 83340 mov     [bp+var_4], ax ;~ 28AF:0E74
cs=0x28af;eip=0x000e77; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 83341 mov     [bp+var_2], dx ;~ 28AF:0E77
cs=0x28af;eip=0x000e7a; 	T(ax = bp+var_a);	// 83342 lea     ax, [bp+var_A] ;~ 28AF:0E7A
cs=0x28af;eip=0x000e7d; 	X(PUSH(ax));	// 83343 push    ax ;~ 28AF:0E7D
cs=0x28af;eip=0x000e7e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 83344 push    [bp+arg_6] ;~ 28AF:0E7E
cs=0x28af;eip=0x000e81; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 83345 push    [bp+arg_4] ;~ 28AF:0E81
cs=0x28af;eip=0x000e84; 	J(CALLF(audioresource_find,0));	// 83346 call    audioresource_find ;~ 28AF:0E84
cs=0x28af;eip=0x000e89; 	T(ADD(sp, 6));	// 83347 add     sp, 6 ;~ 28AF:0E89
cs=0x28af;eip=0x000e8c; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 83348 mov     [bp+var_E], ax ;~ 28AF:0E8C
cs=0x28af;eip=0x000e8f; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), dx));	// 83349 mov     [bp+var_C], dx ;~ 28AF:0E8F
cs=0x28af;eip=0x000e92; 	T(ax = bp+var_e);	// 83350 lea     ax, [bp+var_E] ;~ 28AF:0E92
cs=0x28af;eip=0x000e95; 	X(PUSH(ss));	// 83351 push    ss ;~ 28AF:0E95
cs=0x28af;eip=0x000e96; 	X(PUSH(ax));	// 83352 push    ax ;~ 28AF:0E96
cs=0x28af;eip=0x000e97; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 83353 push    [bp+var_2] ;~ 28AF:0E97
cs=0x28af;eip=0x000e9a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 83354 push    [bp+var_4] ;~ 28AF:0E9A
cs=0x28af;eip=0x000e9d; 	X(PUSH(cs));	// 83355 push    cs ;~ 28AF:0E9D
cs=0x28af;eip=0x000e9e; 	J(CALL(audioresource_copy_4_bytes,0));	// 83356 call    near ptr audioresource_copy_4_bytes ; looks like it replaces 4-byte names with pointers ;~ 28AF:0E9E
cs=0x28af;eip=0x000ea1; 	T(ADD(sp, 8));	// 83357 add     sp, 8 ;~ 28AF:0EA1
cs=0x28af;eip=0x000ea4; 	X(ADD(*(dw*)(raddr(ss,bp+var_1e)), 4));	// 83358 add     [bp+var_1E], 4 ;~ 28AF:0EA4
cs=0x28af;eip=0x000ea8; 	X(ADD(*(dw*)(raddr(ss,bp+var_22)), 4));	// 83359 add     [bp+var_22], 4 ;~ 28AF:0EA8
cs=0x28af;eip=0x000eac; 	X(INC(*(dw*)(raddr(ss,bp+var_10))));	// 83360 inc     [bp+var_10] ;~ 28AF:0EAC
cs=0x28af;eip=0x000eaf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 83361 mov     ax, [bp+var_1C] ;~ 28AF:0EAF
cs=0x28af;eip=0x000eb2; 	T(CMP(*(dw*)(raddr(ss,bp+var_10)), ax));	// 83362 cmp     [bp+var_10], ax ;~ 28AF:0EB2
cs=0x28af;eip=0x000eb5; 	J(JC(loc_37f13));	// 83363 jb      short loc_37F13 ;~ 28AF:0EB5
loc_37f87:
	// 9569 
cs=0x28af;eip=0x000eb7; 	T(MOV(ax, offset(dseg,abasd)));	// 83366 mov     ax, offset aBasd ; "BASD" ;~ 28AF:0EB7
cs=0x28af;eip=0x000eba; 	X(PUSH(ax));	// 83367 push    ax ;~ 28AF:0EBA
cs=0x28af;eip=0x000ebb; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 83368 push    [bp+arg_6] ;~ 28AF:0EBB
cs=0x28af;eip=0x000ebe; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 83369 push    [bp+arg_4] ;~ 28AF:0EBE
cs=0x28af;eip=0x000ec1; 	J(CALLF(audioresource_find,0));	// 83370 call    audioresource_find ;~ 28AF:0EC1
cs=0x28af;eip=0x000ec6; 	T(ADD(sp, 6));	// 83371 add     sp, 6 ;~ 28AF:0EC6
cs=0x28af;eip=0x000ec9; 	X(MOV(basdres, ax));	// 83372 mov     basdres, ax ;~ 28AF:0EC9
cs=0x28af;eip=0x000ecc; 	X(MOV(word_42a36, dx));	// 83373 mov     word_42A36, dx ;~ 28AF:0ECC
cs=0x28af;eip=0x000ed0; 	T(MOV(ax, offset(dseg,asnar)));	// 83374 mov     ax, offset aSnar ; "SNAR" ;~ 28AF:0ED0
cs=0x28af;eip=0x000ed3; 	X(PUSH(ax));	// 83375 push    ax ;~ 28AF:0ED3
cs=0x28af;eip=0x000ed4; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 83376 push    [bp+arg_6] ;~ 28AF:0ED4
cs=0x28af;eip=0x000ed7; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 83377 push    [bp+arg_4] ;~ 28AF:0ED7
cs=0x28af;eip=0x000eda; 	J(CALLF(audioresource_find,0));	// 83378 call    audioresource_find ;~ 28AF:0EDA
cs=0x28af;eip=0x000edf; 	T(ADD(sp, 6));	// 83379 add     sp, 6 ;~ 28AF:0EDF
cs=0x28af;eip=0x000ee2; 	X(MOV(snarres, ax));	// 83380 mov     snarres, ax ;~ 28AF:0EE2
cs=0x28af;eip=0x000ee5; 	X(MOV(word_43940, dx));	// 83381 mov     word_43940, dx ;~ 28AF:0EE5
cs=0x28af;eip=0x000ee9; 	T(MOV(ax, offset(dseg,atomm)));	// 83382 mov     ax, offset aTomm ; "TOMM" ;~ 28AF:0EE9
cs=0x28af;eip=0x000eec; 	X(PUSH(ax));	// 83383 push    ax ;~ 28AF:0EEC
cs=0x28af;eip=0x000eed; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 83384 push    [bp+arg_6] ;~ 28AF:0EED
cs=0x28af;eip=0x000ef0; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 83385 push    [bp+arg_4] ;~ 28AF:0EF0
cs=0x28af;eip=0x000ef3; 	J(CALLF(audioresource_find,0));	// 83386 call    audioresource_find ;~ 28AF:0EF3
cs=0x28af;eip=0x000ef8; 	T(ADD(sp, 6));	// 83387 add     sp, 6 ;~ 28AF:0EF8
cs=0x28af;eip=0x000efb; 	X(MOV(tommres, ax));	// 83388 mov     tommres, ax ;~ 28AF:0EFB
cs=0x28af;eip=0x000efe; 	X(MOV(word_4394c, dx));	// 83389 mov     word_4394C, dx ;~ 28AF:0EFE
cs=0x28af;eip=0x000f02; 	T(MOV(ax, offset(dseg,aride)));	// 83390 mov     ax, offset aRide ; "RIDE" ;~ 28AF:0F02
cs=0x28af;eip=0x000f05; 	X(PUSH(ax));	// 83391 push    ax ;~ 28AF:0F05
cs=0x28af;eip=0x000f06; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 83392 push    [bp+arg_6] ;~ 28AF:0F06
cs=0x28af;eip=0x000f09; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 83393 push    [bp+arg_4] ;~ 28AF:0F09
cs=0x28af;eip=0x000f0c; 	J(CALLF(audioresource_find,0));	// 83394 call    audioresource_find ;~ 28AF:0F0C
cs=0x28af;eip=0x000f11; 	T(ADD(sp, 6));	// 83395 add     sp, 6 ;~ 28AF:0F11
cs=0x28af;eip=0x000f14; 	X(MOV(rideres, ax));	// 83396 mov     rideres, ax ;~ 28AF:0F14
cs=0x28af;eip=0x000f17; 	X(MOV(word_454cc, dx));	// 83397 mov     word_454CC, dx ;~ 28AF:0F17
cs=0x28af;eip=0x000f1b; 	T(MOV(ax, offset(dseg,acrsh)));	// 83398 mov     ax, offset aCrsh ; "CRSH" ;~ 28AF:0F1B
cs=0x28af;eip=0x000f1e; 	X(PUSH(ax));	// 83399 push    ax ;~ 28AF:0F1E
cs=0x28af;eip=0x000f1f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 83400 push    [bp+arg_6] ;~ 28AF:0F1F
cs=0x28af;eip=0x000f22; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 83401 push    [bp+arg_4] ;~ 28AF:0F22
cs=0x28af;eip=0x000f25; 	J(CALLF(audioresource_find,0));	// 83402 call    audioresource_find ;~ 28AF:0F25
cs=0x28af;eip=0x000f2a; 	T(ADD(sp, 6));	// 83403 add     sp, 6 ;~ 28AF:0F2A
cs=0x28af;eip=0x000f2d; 	X(MOV(crshres, ax));	// 83404 mov     crshres, ax ;~ 28AF:0F2D
cs=0x28af;eip=0x000f30; 	X(MOV(word_4432e, dx));	// 83405 mov     word_4432E, dx ;~ 28AF:0F30
cs=0x28af;eip=0x000f34; 	T(MOV(ax, offset(dseg,achht)));	// 83406 mov     ax, offset aChht ; "CHHT" ;~ 28AF:0F34
cs=0x28af;eip=0x000f37; 	X(PUSH(ax));	// 83407 push    ax ;~ 28AF:0F37
cs=0x28af;eip=0x000f38; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 83408 push    [bp+arg_6] ;~ 28AF:0F38
cs=0x28af;eip=0x000f3b; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 83409 push    [bp+arg_4] ;~ 28AF:0F3B
cs=0x28af;eip=0x000f3e; 	J(CALLF(audioresource_find,0));	// 83410 call    audioresource_find ;~ 28AF:0F3E
cs=0x28af;eip=0x000f43; 	T(ADD(sp, 6));	// 83411 add     sp, 6 ;~ 28AF:0F43
cs=0x28af;eip=0x000f46; 	X(MOV(chhtres, ax));	// 83412 mov     chhtres, ax ;~ 28AF:0F46
cs=0x28af;eip=0x000f49; 	X(MOV(word_4392a, dx));	// 83413 mov     word_4392A, dx ;~ 28AF:0F49
cs=0x28af;eip=0x000f4d; 	T(MOV(ax, offset(dseg,aohht)));	// 83414 mov     ax, offset aOhht ; "OHHT" ;~ 28AF:0F4D
cs=0x28af;eip=0x000f50; 	X(PUSH(ax));	// 83415 push    ax ;~ 28AF:0F50
cs=0x28af;eip=0x000f51; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 83416 push    [bp+arg_6] ;~ 28AF:0F51
cs=0x28af;eip=0x000f54; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 83417 push    [bp+arg_4] ;~ 28AF:0F54
cs=0x28af;eip=0x000f57; 	J(CALLF(audioresource_find,0));	// 83418 call    audioresource_find ;~ 28AF:0F57
cs=0x28af;eip=0x000f5c; 	T(ADD(sp, 6));	// 83419 add     sp, 6 ;~ 28AF:0F5C
cs=0x28af;eip=0x000f5f; 	X(MOV(ohhtres, ax));	// 83420 mov     ohhtres, ax ;~ 28AF:0F5F
cs=0x28af;eip=0x000f62; 	X(MOV(word_4436a, dx));	// 83421 mov     word_4436A, dx ;~ 28AF:0F62
loc_38036:
	// 9570 
cs=0x28af;eip=0x000f66; 	X(POP(si));	// 83424 pop     si ;~ 28AF:0F66
cs=0x28af;eip=0x000f67; 	X(POP(di));	// 83425 pop     di ;~ 28AF:0F67
cs=0x28af;eip=0x000f68; 	T(MOV(sp, bp));	// 83426 mov     sp, bp ;~ 28AF:0F68
cs=0x28af;eip=0x000f6a; 	X(POP(bp));	// 83427 pop     bp ;~ 28AF:0F6A
cs=0x28af;eip=0x000f6b; 	J(RETF(0));	// 83428 retf ;~ 28AF:0F6B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kaudio_map_song_instruments: 	goto audio_map_song_instruments;
        case m2c::kloc_37eeb: 	goto loc_37eeb;
        case m2c::kloc_37f00: 	goto loc_37f00;
        case m2c::kloc_37f13: 	goto loc_37f13;
        case m2c::kloc_37f23: 	goto loc_37f23;
        case m2c::kloc_37f87: 	goto loc_37f87;
        case m2c::kloc_38036: 	goto loc_38036;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_3803c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_3803c:
    _begin:
#undef var_22
#define var_22 -0x22
	// 83438 var_22          = word ptr -22h ;~ 28AF:0F6C
#undef var_20
#define var_20 -0x20
	// 83439 var_20          = word ptr -20h ;~ 28AF:0F6C
#undef var_1c
#define var_1c -0x1C
	// 83440 var_1C          = word ptr -1Ch ;~ 28AF:0F6C
#undef var_18
#define var_18 -0x18
	// 83441 var_18          = word ptr -18h ;~ 28AF:0F6C
#undef var_16
#define var_16 -0x16
	// 83442 var_16          = word ptr -16h ;~ 28AF:0F6C
#undef var_14
#define var_14 -0x14
	// 83443 var_14          = word ptr -14h ;~ 28AF:0F6C
#undef var_12
#define var_12 -0x12
	// 83444 var_12          = word ptr -12h ;~ 28AF:0F6C
#undef var_10
#define var_10 -0x10
	// 83445 var_10          = word ptr -10h ;~ 28AF:0F6C
#undef var_e
#define var_e -0x0E
	// 83446 var_E           = word ptr -0Eh ;~ 28AF:0F6C
#undef var_c
#define var_c -0x0C
	// 83447 var_C           = word ptr -0Ch ;~ 28AF:0F6C
#undef var_a
#define var_a -0x0A
	// 83448 var_A           = byte ptr -0Ah ;~ 28AF:0F6C
#undef var_4
#define var_4 -4
	// 83449 var_4           = dword ptr -4 ;~ 28AF:0F6C
#undef arg_0
#define arg_0 6
	// 83450 arg_0           = dword ptr  6 ;~ 28AF:0F6C
#undef arg_4
#define arg_4 0x0A
	// 83451 arg_4           = word ptr  0Ah ;~ 28AF:0F6C
#undef arg_6
#define arg_6 0x0C
	// 83452 arg_6           = word ptr  0Ch ;~ 28AF:0F6C
cs=0x28af;eip=0x000f6c; 	X(PUSH(bp));	// 83454 push    bp ;~ 28AF:0F6C
cs=0x28af;eip=0x000f6d; 	T(MOV(bp, sp));	// 83455 mov     bp, sp ;~ 28AF:0F6D
cs=0x28af;eip=0x000f6f; 	T(SUB(sp, 0x22));	// 83456 sub     sp, 22h ;~ 28AF:0F6F
cs=0x28af;eip=0x000f72; 	X(PUSH(di));	// 83457 push    di ;~ 28AF:0F72
cs=0x28af;eip=0x000f73; 	X(PUSH(si));	// 83458 push    si ;~ 28AF:0F73
cs=0x28af;eip=0x000f74; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 83459 mov     ax, [bp+arg_4] ;~ 28AF:0F74
cs=0x28af;eip=0x000f77; 	T(OR(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 83460 or      ax, [bp+arg_6] ;~ 28AF:0F77
cs=0x28af;eip=0x000f7a; 	J(JNZ(loc_3804f));	// 83461 jnz     short loc_3804F ;~ 28AF:0F7A
cs=0x28af;eip=0x000f7c; 	J(JMP(loc_3814f));	// 83462 jmp     loc_3814F ;~ 28AF:0F7C
loc_3804f:
	// 9571 
cs=0x28af;eip=0x000f7f; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 83466 mov     ax, word ptr [bp+arg_0] ;~ 28AF:0F7F
cs=0x28af;eip=0x000f82; 	T(OR(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 83467 or      ax, word ptr [bp+arg_0+2] ;~ 28AF:0F82
cs=0x28af;eip=0x000f85; 	J(JNZ(loc_3805a));	// 83468 jnz     short loc_3805A ;~ 28AF:0F85
cs=0x28af;eip=0x000f87; 	J(JMP(loc_3814f));	// 83469 jmp     loc_3814F ;~ 28AF:0F87
loc_3805a:
	// 9572 
cs=0x28af;eip=0x000f8a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 83473 les     bx, [bp+arg_0] ;~ 28AF:0F8A
cs=0x28af;eip=0x000f8d; 	T(MOV(al, *(raddr(es,bx+4))));	// 83474 mov     al, es:[bx+4] ;~ 28AF:0F8D
cs=0x28af;eip=0x000f91; 	T(SUB(ah, ah));	// 83475 sub     ah, ah ;~ 28AF:0F91
cs=0x28af;eip=0x000f93; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 83476 mov     [bp+var_22], ax ;~ 28AF:0F93
cs=0x28af;eip=0x000f96; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 83477 mov     [bp+var_14], ax ;~ 28AF:0F96
cs=0x28af;eip=0x000f99; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), 0));	// 83478 mov     [bp+var_16], 0 ;~ 28AF:0F99
cs=0x28af;eip=0x000f9e; 	T(OR(ax, ax));	// 83479 or      ax, ax ;~ 28AF:0F9E
cs=0x28af;eip=0x000fa0; 	J(JNZ(loc_38075));	// 83480 jnz     short loc_38075 ;~ 28AF:0FA0
cs=0x28af;eip=0x000fa2; 	J(JMP(loc_3814f));	// 83481 jmp     loc_3814F ;~ 28AF:0FA2
loc_38075:
	// 9573 
cs=0x28af;eip=0x000fa5; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), 0));	// 83485 mov     [bp+var_20], 0 ;~ 28AF:0FA5
loc_3807a:
	// 9574 
cs=0x28af;eip=0x000faa; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), 0));	// 83488 mov     [bp+var_18], 0 ;~ 28AF:0FAA
cs=0x28af;eip=0x000faf; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_20))));	// 83489 mov     di, [bp+var_20] ;~ 28AF:0FAF
cs=0x28af;eip=0x000fb2; 	T(SUB(cx, cx));	// 83490 sub     cx, cx ;~ 28AF:0FB2
cs=0x28af;eip=0x000fb4; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), ds));	// 83491 mov     [bp+var_1C], ds ;~ 28AF:0FB4
cs=0x28af;eip=0x000fb7; 	T(LDS(si, *(dd*)(raddr(ss,bp+arg_0))));	// 83492 lds     si, [bp+arg_0] ;~ 28AF:0FB7
loc_3808a:
	// 9575 
cs=0x28af;eip=0x000fba; 	T(MOV(bx, di));	// 83495 mov     bx, di ;~ 28AF:0FBA
cs=0x28af;eip=0x000fbc; 	T(ADD(bx, cx));	// 83496 add     bx, cx ;~ 28AF:0FBC
cs=0x28af;eip=0x000fbe; 	T(MOV(al, *(raddr(ds,bx+si+6))));	// 83497 mov     al, [bx+si+6] ;~ 28AF:0FBE
cs=0x28af;eip=0x000fc1; 	T(MOV(bx, cx));	// 83498 mov     bx, cx ;~ 28AF:0FC1
cs=0x28af;eip=0x000fc3; 	T(ADD(bx, bp));	// 83499 add     bx, bp ;~ 28AF:0FC3
cs=0x28af;eip=0x000fc5; 	X(MOV(*(raddr(ss,bx-0x0A)), al));	// 83500 mov     ss:[bx-0Ah], al ;~ 28AF:0FC5
cs=0x28af;eip=0x000fc9; 	T(INC(cx));	// 83501 inc     cx ;~ 28AF:0FC9
cs=0x28af;eip=0x000fca; 	T(CMP(cx, 4));	// 83502 cmp     cx, 4 ;~ 28AF:0FCA
cs=0x28af;eip=0x000fcd; 	J(JL(loc_3808a));	// 83503 jl      short loc_3808A ;~ 28AF:0FCD
cs=0x28af;eip=0x000fcf; 	T(MOV(ds, *(dw*)(raddr(ss,bp+var_1c))));	// 83504 mov     ds, [bp+var_1C] ;~ 28AF:0FCF
cs=0x28af;eip=0x000fd2; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), cx));	// 83505 mov     [bp+var_18], cx ;~ 28AF:0FD2
cs=0x28af;eip=0x000fd5; 	T(ax = bp+var_a);	// 83506 lea     ax, [bp+var_A] ;~ 28AF:0FD5
cs=0x28af;eip=0x000fd8; 	X(PUSH(ax));	// 83507 push    ax ;~ 28AF:0FD8
cs=0x28af;eip=0x000fd9; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 83508 push    word ptr [bp+arg_0+2] ;~ 28AF:0FD9
cs=0x28af;eip=0x000fdc; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 83509 push    word ptr [bp+arg_0] ;~ 28AF:0FDC
cs=0x28af;eip=0x000fdf; 	J(CALLF(audioresource_find,0));	// 83510 call    audioresource_find ;~ 28AF:0FDF
cs=0x28af;eip=0x000fe4; 	T(ADD(sp, 6));	// 83511 add     sp, 6 ;~ 28AF:0FE4
cs=0x28af;eip=0x000fe7; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 83512 mov     word ptr [bp+var_4], ax ;~ 28AF:0FE7
cs=0x28af;eip=0x000fea; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 83513 mov     word ptr [bp+var_4+2], dx ;~ 28AF:0FEA
cs=0x28af;eip=0x000fed; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 83514 les     bx, [bp+var_4] ;~ 28AF:0FED
cs=0x28af;eip=0x000ff0; 	T(CMP(*(raddr(es,bx+5)), 3));	// 83515 cmp     byte ptr es:[bx+5], 3 ;~ 28AF:0FF0
cs=0x28af;eip=0x000ff5; 	J(JZ(loc_380ce));	// 83516 jz      short loc_380CE ;~ 28AF:0FF5
cs=0x28af;eip=0x000ff7; 	T(CMP(*(raddr(es,bx+5)), 6));	// 83517 cmp     byte ptr es:[bx+5], 6 ;~ 28AF:0FF7
cs=0x28af;eip=0x000ffc; 	J(JNZ(loc_38137));	// 83518 jnz     short loc_38137 ;~ 28AF:0FFC
loc_380ce:
	// 9576 
cs=0x28af;eip=0x000ffe; 	T(CMP(*(raddr(es,bx+0x0A)), 0));	// 83521 cmp     byte ptr es:[bx+0Ah], 0 ;~ 28AF:0FFE
cs=0x28af;eip=0x001003; 	J(JNZ(loc_38137));	// 83522 jnz     short loc_38137 ;~ 28AF:1003
cs=0x28af;eip=0x001005; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), 0));	// 83523 mov     [bp+var_18], 0 ;~ 28AF:1005
cs=0x28af;eip=0x00100a; 	T(MOV(ax, bx));	// 83524 mov     ax, bx ;~ 28AF:100A
cs=0x28af;eip=0x00100c; 	T(MOV(dx, es));	// 83525 mov     dx, es ;~ 28AF:100C
cs=0x28af;eip=0x00100e; 	T(ADD(ax, 6));	// 83526 add     ax, 6 ;~ 28AF:100E
cs=0x28af;eip=0x001011; 	T(MOV(cx, 2));	// 83527 mov     cx, 2 ;~ 28AF:1011
cs=0x28af;eip=0x001014; 	T(di = bp+var_a);	// 83528 lea     di, [bp+var_A] ;~ 28AF:1014
cs=0x28af;eip=0x001017; 	T(MOV(si, ax));	// 83529 mov     si, ax ;~ 28AF:1017
cs=0x28af;eip=0x001019; 	X(PUSH(ss));	// 83530 push    ss ;~ 28AF:1019
cs=0x28af;eip=0x00101a; 	X(POP(es));	// 83531 pop     es ;~ 28AF:101A
cs=0x28af;eip=0x00101b; 	X(PUSH(ds));	// 83532 push    ds ;~ 28AF:101B
cs=0x28af;eip=0x00101c; 	T(MOV(ds, dx));	// 83533 mov     ds, dx ;~ 28AF:101C
	// 83534 repne movsw ;~ 28AF:101E
cs=0x28af;eip=0x00101e; 	X(	REPNE MOVSW);	// 83534 repne movsw ;~ 28AF:101E
cs=0x28af;eip=0x001020; 	X(POP(ds));	// 83535 pop     ds ;~ 28AF:1020
cs=0x28af;eip=0x001021; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), 4));	// 83536 mov     [bp+var_18], 4 ;~ 28AF:1021
cs=0x28af;eip=0x001026; 	T(MOV(ax, bx));	// 83537 mov     ax, bx ;~ 28AF:1026
cs=0x28af;eip=0x001028; 	T(ADD(ax, 6));	// 83538 add     ax, 6 ;~ 28AF:1028
cs=0x28af;eip=0x00102b; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 83539 mov     [bp+var_E], ax ;~ 28AF:102B
cs=0x28af;eip=0x00102e; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), dx));	// 83540 mov     [bp+var_C], dx ;~ 28AF:102E
cs=0x28af;eip=0x001031; 	T(ax = bp+var_a);	// 83541 lea     ax, [bp+var_A] ;~ 28AF:1031
cs=0x28af;eip=0x001034; 	X(PUSH(ax));	// 83542 push    ax ;~ 28AF:1034
cs=0x28af;eip=0x001035; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 83543 push    [bp+arg_6] ;~ 28AF:1035
cs=0x28af;eip=0x001038; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 83544 push    [bp+arg_4] ;~ 28AF:1038
cs=0x28af;eip=0x00103b; 	J(CALLF(locate_shape_nofatal,0));	// 83545 call    locate_shape_nofatal ;~ 28AF:103B
cs=0x28af;eip=0x001040; 	T(ADD(sp, 6));	// 83546 add     sp, 6 ;~ 28AF:1040
cs=0x28af;eip=0x001043; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 83547 mov     [bp+var_12], ax ;~ 28AF:1043
cs=0x28af;eip=0x001046; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), dx));	// 83548 mov     [bp+var_10], dx ;~ 28AF:1046
cs=0x28af;eip=0x001049; 	T(OR(ax, dx));	// 83549 or      ax, dx ;~ 28AF:1049
cs=0x28af;eip=0x00104b; 	J(JZ(loc_38137));	// 83550 jz      short loc_38137 ;~ 28AF:104B
cs=0x28af;eip=0x00104d; 	T(ax = bp+var_12);	// 83551 lea     ax, [bp+var_12] ;~ 28AF:104D
cs=0x28af;eip=0x001050; 	X(PUSH(ss));	// 83552 push    ss ;~ 28AF:1050
cs=0x28af;eip=0x001051; 	X(PUSH(ax));	// 83553 push    ax ;~ 28AF:1051
cs=0x28af;eip=0x001052; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 83554 push    [bp+var_C] ;~ 28AF:1052
cs=0x28af;eip=0x001055; 	X(PUSH(*(dw*)(raddr(ss,bp+var_e))));	// 83555 push    [bp+var_E] ;~ 28AF:1055
cs=0x28af;eip=0x001058; 	X(PUSH(cs));	// 83556 push    cs ;~ 28AF:1058
cs=0x28af;eip=0x001059; 	J(CALL(audioresource_copy_4_bytes,0));	// 83557 call    near ptr audioresource_copy_4_bytes ;~ 28AF:1059
cs=0x28af;eip=0x00105c; 	T(ADD(sp, 8));	// 83558 add     sp, 8 ;~ 28AF:105C
cs=0x28af;eip=0x00105f; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 83559 les     bx, [bp+var_4] ;~ 28AF:105F
cs=0x28af;eip=0x001062; 	X(MOV(*(raddr(es,bx+0x0A)), 0x0FF));	// 83560 mov     byte ptr es:[bx+0Ah], 0FFh ;~ 28AF:1062
loc_38137:
	// 9577 
cs=0x28af;eip=0x001067; 	X(ADD(*(dw*)(raddr(ss,bp+var_20)), 4));	// 83564 add     [bp+var_20], 4 ;~ 28AF:1067
cs=0x28af;eip=0x00106b; 	X(INC(*(dw*)(raddr(ss,bp+var_16))));	// 83565 inc     [bp+var_16] ;~ 28AF:106B
cs=0x28af;eip=0x00106e; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 83566 les     bx, [bp+arg_0] ;~ 28AF:106E
cs=0x28af;eip=0x001071; 	T(MOV(al, *(raddr(es,bx+4))));	// 83567 mov     al, es:[bx+4] ;~ 28AF:1071
cs=0x28af;eip=0x001075; 	T(SUB(ah, ah));	// 83568 sub     ah, ah ;~ 28AF:1075
cs=0x28af;eip=0x001077; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_16))));	// 83569 cmp     ax, [bp+var_16] ;~ 28AF:1077
cs=0x28af;eip=0x00107a; 	J(JBE(loc_3814f));	// 83570 jbe     short loc_3814F ;~ 28AF:107A
cs=0x28af;eip=0x00107c; 	J(JMP(loc_3807a));	// 83571 jmp     loc_3807A ;~ 28AF:107C
loc_3814f:
	// 9578 
cs=0x28af;eip=0x00107f; 	X(POP(si));	// 83576 pop     si ;~ 28AF:107F
cs=0x28af;eip=0x001080; 	X(POP(di));	// 83577 pop     di ;~ 28AF:1080
cs=0x28af;eip=0x001081; 	T(MOV(sp, bp));	// 83578 mov     sp, bp ;~ 28AF:1081
cs=0x28af;eip=0x001083; 	X(POP(bp));	// 83579 pop     bp ;~ 28AF:1083
cs=0x28af;eip=0x001084; 	J(RETF(0));	// 83580 retf ;~ 28AF:1084

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_3804f: 	goto loc_3804f;
        case m2c::kloc_3805a: 	goto loc_3805a;
        case m2c::kloc_38075: 	goto loc_38075;
        case m2c::kloc_3807a: 	goto loc_3807a;
        case m2c::kloc_3808a: 	goto loc_3808a;
        case m2c::kloc_380ce: 	goto loc_380ce;
        case m2c::kloc_38137: 	goto loc_38137;
        case m2c::kloc_3814f: 	goto loc_3814f;
        case m2c::ksub_3803c: 	goto sub_3803c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_38156(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_38156:
    _begin:
#undef var_2
#define var_2 -2
	// 83592 var_2           = word ptr -2 ;~ 28AF:1086
#undef arg_0
#define arg_0 6
	// 83593 arg_0           = word ptr  6 ;~ 28AF:1086
cs=0x28af;eip=0x001086; 	X(PUSH(bp));	// 83595 push    bp ;~ 28AF:1086
cs=0x28af;eip=0x001087; 	T(MOV(bp, sp));	// 83596 mov     bp, sp ;~ 28AF:1087
cs=0x28af;eip=0x001089; 	T(SUB(sp, 2));	// 83597 sub     sp, 2 ;~ 28AF:1089
cs=0x28af;eip=0x00108c; 	T(MOV(ax, 0x2E));	// 83598 mov     ax, 2Eh ; '.' ;~ 28AF:108C
cs=0x28af;eip=0x00108f; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 83599 imul    [bp+arg_0] ;~ 28AF:108F
cs=0x28af;eip=0x001092; 	T(ADD(ax, offset(dseg,unk_45a26)));	// 83600 add     ax, offset unk_45A26 ;~ 28AF:1092
cs=0x28af;eip=0x001095; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 83601 mov     [bp+var_2], ax ;~ 28AF:1095
cs=0x28af;eip=0x001098; 	T(MOV(bx, ax));	// 83602 mov     bx, ax ;~ 28AF:1098
cs=0x28af;eip=0x00109a; 	X(MOV(*(dw*)(raddr(ds,bx+0x0C)), 1));	// 83603 mov     word ptr [bx+0Ch], 1 ;~ 28AF:109A
cs=0x28af;eip=0x00109f; 	X(MOV(*(dw*)(raddr(ds,bx+0x0E)), 0));	// 83604 mov     word ptr [bx+0Eh], 0 ;~ 28AF:109F
cs=0x28af;eip=0x0010a4; 	T(MOV(sp, bp));	// 83605 mov     sp, bp ;~ 28AF:10A4
cs=0x28af;eip=0x0010a6; 	X(POP(bp));	// 83606 pop     bp ;~ 28AF:10A6
cs=0x28af;eip=0x0010a7; 	J(RETF(0));	// 83607 retf ;~ 28AF:10A7

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::ksub_38156: 	goto sub_38156;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_38178(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_38178:
    _begin:
#undef var_10
#define var_10 -0x10
	// 83618 var_10          = dword ptr -10h ;~ 28AF:10A8
#undef var_c
#define var_c -0x0C
	// 83619 var_C           = word ptr -0Ch ;~ 28AF:10A8
#undef var_a
#define var_a -0x0A
	// 83620 var_A           = word ptr -0Ah ;~ 28AF:10A8
#undef var_8
#define var_8 -8
	// 83621 var_8           = word ptr -8 ;~ 28AF:10A8
#undef var_6
#define var_6 -6
	// 83622 var_6           = word ptr -6 ;~ 28AF:10A8
#undef var_2
#define var_2 -2
	// 83623 var_2           = word ptr -2 ;~ 28AF:10A8
cs=0x28af;eip=0x0010a8; 	X(PUSH(bp));	// 83625 push    bp ;~ 28AF:10A8
cs=0x28af;eip=0x0010a9; 	T(MOV(bp, sp));	// 83626 mov     bp, sp ;~ 28AF:10A9
cs=0x28af;eip=0x0010ab; 	T(SUB(sp, 0x10));	// 83627 sub     sp, 10h ;~ 28AF:10AB
cs=0x28af;eip=0x0010ae; 	X(PUSH(di));	// 83628 push    di ;~ 28AF:10AE
cs=0x28af;eip=0x0010af; 	X(PUSH(si));	// 83629 push    si ;~ 28AF:10AF
cs=0x28af;eip=0x0010b0; 	X(MOV(word_4063a, 1));	// 83630 mov     word_4063A, 1 ;~ 28AF:10B0
cs=0x28af;eip=0x0010b6; 	T(SUB(ax, ax));	// 83631 sub     ax, ax ;~ 28AF:10B6
cs=0x28af;eip=0x0010b8; 	X(PUSH(ax));	// 83632 push    ax ;~ 28AF:10B8
cs=0x28af;eip=0x0010b9; 	T(MOV(ax, 0x7F));	// 83633 mov     ax, 7Fh ;~ 28AF:10B9
cs=0x28af;eip=0x0010bc; 	X(PUSH(ax));	// 83634 push    ax ;~ 28AF:10BC
cs=0x28af;eip=0x0010bd; 	T(SUB(ax, ax));	// 83635 sub     ax, ax ;~ 28AF:10BD
cs=0x28af;eip=0x0010bf; 	X(PUSH(ax));	// 83636 push    ax ;~ 28AF:10BF
cs=0x28af;eip=0x0010c0; 	X(PUSH(ax));	// 83637 push    ax ;~ 28AF:10C0
cs=0x28af;eip=0x0010c1; 	X(PUSH(ax));	// 83638 push    ax ;~ 28AF:10C1
cs=0x28af;eip=0x0010c2; 	T(MOV(ax, 0x17));	// 83639 mov     ax, 17h ;~ 28AF:10C2
cs=0x28af;eip=0x0010c5; 	X(PUSH(ax));	// 83640 push    ax ;~ 28AF:10C5
cs=0x28af;eip=0x0010c6; 	T(SUB(ax, ax));	// 83641 sub     ax, ax ;~ 28AF:10C6
cs=0x28af;eip=0x0010c8; 	X(PUSH(ax));	// 83642 push    ax ;~ 28AF:10C8
cs=0x28af;eip=0x0010c9; 	X(PUSH(cs));	// 83643 push    cs ;~ 28AF:10C9
cs=0x28af;eip=0x0010ca; 	J(CALL(audio_init_chunk,0));	// 83644 call    near ptr audio_init_chunk ;~ 28AF:10CA
cs=0x28af;eip=0x0010cd; 	T(ADD(sp, 0x0E));	// 83645 add     sp, 0Eh ;~ 28AF:10CD
cs=0x28af;eip=0x0010d0; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 83646 mov     [bp+var_2], 0 ;~ 28AF:10D0
cs=0x28af;eip=0x0010d5; 	T(MOV(al, byte_459d2));	// 83647 mov     al, byte_459D2 ;~ 28AF:10D5
cs=0x28af;eip=0x0010d8; 	T(SUB(ah, ah));	// 83648 sub     ah, ah ;~ 28AF:10D8
cs=0x28af;eip=0x0010da; 	T(OR(ax, ax));	// 83649 or      ax, ax ;~ 28AF:10DA
cs=0x28af;eip=0x0010dc; 	J(JZ(loc_38221));	// 83650 jz      short loc_38221 ;~ 28AF:10DC
cs=0x28af;eip=0x0010de; 	T(MOV(di, 0x0A2B7));	// 83651 mov     di, 0A2B7h ;~ 28AF:10DE
cs=0x28af;eip=0x0010e1; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0x0A2B6));	// 83652 mov     [bp+var_6], 0A2B6h ;~ 28AF:10E1
cs=0x28af;eip=0x0010e6; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0x0A2B8));	// 83653 mov     [bp+var_8], 0A2B8h ;~ 28AF:10E6
cs=0x28af;eip=0x0010eb; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0x0A2C6));	// 83654 mov     [bp+var_A], 0A2C6h ;~ 28AF:10EB
cs=0x28af;eip=0x0010f0; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 0x0A2E2));	// 83655 mov     [bp+var_C], 0A2E2h ;~ 28AF:10F0
cs=0x28af;eip=0x0010f5; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_2))));	// 83656 mov     si, [bp+var_2] ;~ 28AF:10F5
loc_381c8:
	// 9579 
cs=0x28af;eip=0x0010f8; 	X(PUSH(si));	// 83659 push    si ;~ 28AF:10F8
cs=0x28af;eip=0x0010f9; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 83660 mov     ax, word ptr audiodriverbinary ;~ 28AF:10F9
cs=0x28af;eip=0x0010fc; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 83661 mov     dx, word ptr audiodriverbinary+2 ;~ 28AF:10FC
cs=0x28af;eip=0x001100; 	T(ADD(ax, 0x1E));	// 83662 add     ax, 1Eh ;~ 28AF:1100
cs=0x28af;eip=0x001103; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10+2))), dx));	// 83663 mov     word ptr [bp+var_10+2], dx ;~ 28AF:1103
cs=0x28af;eip=0x001106; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10))), ax));	// 83664 mov     word ptr [bp+var_10], ax ;~ 28AF:1106
cs=0x28af;eip=0x001109; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_10))));	// 83665 call    [bp+var_10] ;~ 28AF:1109
cs=0x28af;eip=0x00110c; 	T(ADD(sp, 2));	// 83666 add     sp, 2 ;~ 28AF:110C
cs=0x28af;eip=0x00110f; 	X(MOV(*(raddr(ds,di)), 0));	// 83667 mov     byte ptr [di], 0 ;~ 28AF:110F
cs=0x28af;eip=0x001112; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_6))));	// 83668 mov     bx, [bp+var_6] ;~ 28AF:1112
cs=0x28af;eip=0x001115; 	X(MOV(*(raddr(ds,bx)), 0x0FF));	// 83669 mov     byte ptr [bx], 0FFh ;~ 28AF:1115
cs=0x28af;eip=0x001118; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_8))));	// 83670 mov     bx, [bp+var_8] ;~ 28AF:1118
cs=0x28af;eip=0x00111b; 	X(MOV(*(raddr(ds,bx)), 0));	// 83671 mov     byte ptr [bx], 0 ;~ 28AF:111B
cs=0x28af;eip=0x00111e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_a))));	// 83672 mov     bx, [bp+var_A] ;~ 28AF:111E
cs=0x28af;eip=0x001121; 	T(SUB(ax, ax));	// 83673 sub     ax, ax ;~ 28AF:1121
cs=0x28af;eip=0x001123; 	X(MOV(*(dw*)(raddr(ds,bx+2)), ax));	// 83674 mov     [bx+2], ax ;~ 28AF:1123
cs=0x28af;eip=0x001126; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 83675 mov     [bx], ax ;~ 28AF:1126
cs=0x28af;eip=0x001128; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_c))));	// 83676 mov     bx, [bp+var_C] ;~ 28AF:1128
cs=0x28af;eip=0x00112b; 	X(MOV(*(raddr(ds,bx)), 0x0FF));	// 83677 mov     byte ptr [bx], 0FFh ;~ 28AF:112B
cs=0x28af;eip=0x00112e; 	T(ADD(di, 0x2E));	// 83678 add     di, 2Eh ; '.' ;~ 28AF:112E
cs=0x28af;eip=0x001131; 	X(ADD(*(dw*)(raddr(ss,bp+var_6)), 0x2E));	// 83679 add     [bp+var_6], 2Eh ; '.' ;~ 28AF:1131
cs=0x28af;eip=0x001135; 	X(ADD(*(dw*)(raddr(ss,bp+var_8)), 0x2E));	// 83680 add     [bp+var_8], 2Eh ; '.' ;~ 28AF:1135
cs=0x28af;eip=0x001139; 	X(ADD(*(dw*)(raddr(ss,bp+var_a)), 0x2E));	// 83681 add     [bp+var_A], 2Eh ; '.' ;~ 28AF:1139
cs=0x28af;eip=0x00113d; 	X(ADD(*(dw*)(raddr(ss,bp+var_c)), 0x2E));	// 83682 add     [bp+var_C], 2Eh ; '.' ;~ 28AF:113D
cs=0x28af;eip=0x001141; 	T(INC(si));	// 83683 inc     si ;~ 28AF:1141
cs=0x28af;eip=0x001142; 	T(MOV(ax, si));	// 83684 mov     ax, si ;~ 28AF:1142
cs=0x28af;eip=0x001144; 	T(MOV(cl, byte_459d2));	// 83685 mov     cl, byte_459D2 ;~ 28AF:1144
cs=0x28af;eip=0x001148; 	T(SUB(ch, ch));	// 83686 sub     ch, ch ;~ 28AF:1148
cs=0x28af;eip=0x00114a; 	T(CMP(ax, cx));	// 83687 cmp     ax, cx ;~ 28AF:114A
cs=0x28af;eip=0x00114c; 	J(JC(loc_381c8));	// 83688 jb      short loc_381C8 ;~ 28AF:114C
cs=0x28af;eip=0x00114e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), si));	// 83689 mov     [bp+var_2], si ;~ 28AF:114E
loc_38221:
	// 9580 
cs=0x28af;eip=0x001151; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 83692 mov     ax, word ptr audiodriverbinary ;~ 28AF:1151
cs=0x28af;eip=0x001154; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 83693 mov     dx, word ptr audiodriverbinary+2 ;~ 28AF:1154
cs=0x28af;eip=0x001158; 	T(ADD(ax, 0x18));	// 83694 add     ax, 18h ;~ 28AF:1158
cs=0x28af;eip=0x00115b; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10+2))), dx));	// 83695 mov     word ptr [bp+var_10+2], dx ;~ 28AF:115B
cs=0x28af;eip=0x00115e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10))), ax));	// 83696 mov     word ptr [bp+var_10], ax ;~ 28AF:115E
cs=0x28af;eip=0x001161; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_10))));	// 83697 call    [bp+var_10] ;~ 28AF:1161
cs=0x28af;eip=0x001164; 	T(MOV(ax, *(dw*)(((db*)&audiodriverbinary))));	// 83698 mov     ax, word ptr audiodriverbinary ;~ 28AF:1164
cs=0x28af;eip=0x001167; 	T(MOV(dx, *(dw*)(((db*)&audiodriverbinary)+2)));	// 83699 mov     dx, word ptr audiodriverbinary+2 ;~ 28AF:1167
cs=0x28af;eip=0x00116b; 	T(ADD(ax, 6));	// 83700 add     ax, 6 ;~ 28AF:116B
cs=0x28af;eip=0x00116e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10+2))), dx));	// 83701 mov     word ptr [bp+var_10+2], dx ;~ 28AF:116E
cs=0x28af;eip=0x001171; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10))), ax));	// 83702 mov     word ptr [bp+var_10], ax ;~ 28AF:1171
cs=0x28af;eip=0x001174; 	J(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_10))));	// 83703 call    [bp+var_10] ;~ 28AF:1174
cs=0x28af;eip=0x001177; 	X(MOV(word_4063a, 0));	// 83704 mov     word_4063A, 0 ;~ 28AF:1177
cs=0x28af;eip=0x00117d; 	X(POP(si));	// 83705 pop     si ;~ 28AF:117D
cs=0x28af;eip=0x00117e; 	X(POP(di));	// 83706 pop     di ;~ 28AF:117E
cs=0x28af;eip=0x00117f; 	T(MOV(sp, bp));	// 83707 mov     sp, bp ;~ 28AF:117F
cs=0x28af;eip=0x001181; 	X(POP(bp));	// 83708 pop     bp ;~ 28AF:1181
cs=0x28af;eip=0x001182; 	J(RETF(0));	// 83709 retf ;~ 28AF:1182

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_381c8: 	goto loc_381c8;
        case m2c::kloc_38221: 	goto loc_38221;
        case m2c::ksub_38178: 	goto sub_38178;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool audio_map_song_tracks(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    audio_map_song_tracks:
    _begin:
#undef var_32
#define var_32 -0x32
	// 83721 var_32          = word ptr -32h ;~ 28AF:1184
#undef var_30
#define var_30 -0x30
	// 83722 var_30          = word ptr -30h ;~ 28AF:1184
#undef var_2e
#define var_2e -0x2E
	// 83723 var_2E          = word ptr -2Eh ;~ 28AF:1184
#undef var_2c
#define var_2c -0x2C
	// 83724 var_2C          = word ptr -2Ch ;~ 28AF:1184
#undef var_2a
#define var_2a -0x2A
	// 83725 var_2A          = word ptr -2Ah ;~ 28AF:1184
#undef var_28
#define var_28 -0x28
	// 83726 var_28          = word ptr -28h ;~ 28AF:1184
#undef var_26
#define var_26 -0x26
	// 83727 var_26          = word ptr -26h ;~ 28AF:1184
#undef var_24
#define var_24 -0x24
	// 83728 var_24          = byte ptr -24h ;~ 28AF:1184
#undef var_22
#define var_22 -0x22
	// 83729 var_22          = word ptr -22h ;~ 28AF:1184
#undef var_20
#define var_20 -0x20
	// 83730 var_20          = word ptr -20h ;~ 28AF:1184
#undef var_1e
#define var_1e -0x1E
	// 83731 var_1E          = word ptr -1Eh ;~ 28AF:1184
#undef var_1c
#define var_1c -0x1C
	// 83732 var_1C          = word ptr -1Ch ;~ 28AF:1184
#undef var_1a
#define var_1a -0x1A
	// 83733 var_1A          = word ptr -1Ah ;~ 28AF:1184
#undef var_18
#define var_18 -0x18
	// 83734 var_18          = word ptr -18h ;~ 28AF:1184
#undef var_16
#define var_16 -0x16
	// 83735 var_16          = word ptr -16h ;~ 28AF:1184
#undef var_14
#define var_14 -0x14
	// 83736 var_14          = dword ptr -14h ;~ 28AF:1184
#undef var_10
#define var_10 -0x10
	// 83737 var_10          = word ptr -10h ;~ 28AF:1184
#undef var_e
#define var_e -0x0E
	// 83738 var_E           = word ptr -0Eh ;~ 28AF:1184
#undef var_c
#define var_c -0x0C
	// 83739 var_C           = byte ptr -0Ch ;~ 28AF:1184
#undef var_8
#define var_8 -8
	// 83740 var_8           = byte ptr -8 ;~ 28AF:1184
#undef var_6
#define var_6 -6
	// 83741 var_6           = word ptr -6 ;~ 28AF:1184
#undef var_4
#define var_4 -4
	// 83742 var_4           = word ptr -4 ;~ 28AF:1184
#undef var_2
#define var_2 -2
	// 83743 var_2           = byte ptr -2 ;~ 28AF:1184
#undef arg_0
#define arg_0 6
	// 83744 arg_0           = word ptr  6 ;~ 28AF:1184
#undef arg_2
#define arg_2 8
	// 83745 arg_2           = word ptr  8 ;~ 28AF:1184
cs=0x28af;eip=0x001184; 	X(PUSH(bp));	// 83747 push    bp ;~ 28AF:1184
cs=0x28af;eip=0x001185; 	T(MOV(bp, sp));	// 83748 mov     bp, sp ;~ 28AF:1185
cs=0x28af;eip=0x001187; 	T(SUB(sp, 0x32));	// 83749 sub     sp, 32h ;~ 28AF:1187
cs=0x28af;eip=0x00118a; 	X(PUSH(di));	// 83750 push    di ;~ 28AF:118A
cs=0x28af;eip=0x00118b; 	X(PUSH(si));	// 83751 push    si ;~ 28AF:118B
cs=0x28af;eip=0x00118c; 	X(MOV(*(raddr(ss,bp+var_8)), 0));	// 83752 mov     [bp+var_8], 0 ;~ 28AF:118C
cs=0x28af;eip=0x001190; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 83753 mov     ax, [bp+arg_0] ;~ 28AF:1190
cs=0x28af;eip=0x001193; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 83754 mov     dx, [bp+arg_2] ;~ 28AF:1193
cs=0x28af;eip=0x001196; 	T(ADD(ax, 4));	// 83755 add     ax, 4 ;~ 28AF:1196
cs=0x28af;eip=0x001199; 	X(PUSH(dx));	// 83756 push    dx ;~ 28AF:1199
cs=0x28af;eip=0x00119a; 	X(PUSH(ax));	// 83757 push    ax ;~ 28AF:119A
cs=0x28af;eip=0x00119b; 	X(PUSH(cs));	// 83758 push    cs ;~ 28AF:119B
cs=0x28af;eip=0x00119c; 	J(CALL(audioresource_get_word,0));	// 83759 call    near ptr audioresource_get_word ;~ 28AF:119C
cs=0x28af;eip=0x00119f; 	T(ADD(sp, 4));	// 83760 add     sp, 4 ;~ 28AF:119F
cs=0x28af;eip=0x0011a2; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 83761 mov     [bp+var_16], ax ;~ 28AF:11A2
cs=0x28af;eip=0x0011a5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 83762 mov     ax, [bp+arg_0] ;~ 28AF:11A5
cs=0x28af;eip=0x0011a8; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 83763 mov     dx, [bp+arg_2] ;~ 28AF:11A8
cs=0x28af;eip=0x0011ab; 	T(ADD(ax, 6));	// 83764 add     ax, 6 ;~ 28AF:11AB
cs=0x28af;eip=0x0011ae; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), ax));	// 83765 mov     [bp+var_28], ax ;~ 28AF:11AE
cs=0x28af;eip=0x0011b1; 	X(MOV(*(dw*)(raddr(ss,bp+var_26)), dx));	// 83766 mov     [bp+var_26], dx ;~ 28AF:11B1
cs=0x28af;eip=0x0011b4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_16))));	// 83767 mov     ax, [bp+var_16] ;~ 28AF:11B4
cs=0x28af;eip=0x0011b7; 	T(SHL(ax, 1));	// 83768 shl     ax, 1 ;~ 28AF:11B7
cs=0x28af;eip=0x0011b9; 	T(SHL(ax, 1));	// 83769 shl     ax, 1 ;~ 28AF:11B9
cs=0x28af;eip=0x0011bb; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_28))));	// 83770 add     ax, [bp+var_28] ;~ 28AF:11BB
cs=0x28af;eip=0x0011be; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 83771 mov     [bp+var_6], ax ;~ 28AF:11BE
cs=0x28af;eip=0x0011c1; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 83772 mov     [bp+var_4], dx ;~ 28AF:11C1
cs=0x28af;eip=0x0011c4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_16))));	// 83773 mov     ax, [bp+var_16] ;~ 28AF:11C4
cs=0x28af;eip=0x0011c7; 	T(MOV(cl, 3));	// 83774 mov     cl, 3 ;~ 28AF:11C7
cs=0x28af;eip=0x0011c9; 	T(SHL(ax, cl));	// 83775 shl     ax, cl ;~ 28AF:11C9
cs=0x28af;eip=0x0011cb; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 83776 add     ax, [bp+arg_0] ;~ 28AF:11CB
cs=0x28af;eip=0x0011ce; 	T(ADD(ax, 6));	// 83777 add     ax, 6 ;~ 28AF:11CE
cs=0x28af;eip=0x0011d1; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 83778 mov     [bp+var_22], ax ;~ 28AF:11D1
cs=0x28af;eip=0x0011d4; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), dx));	// 83779 mov     [bp+var_20], dx ;~ 28AF:11D4
cs=0x28af;eip=0x0011d7; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a)), 0));	// 83780 mov     [bp+var_2A], 0 ;~ 28AF:11D7
cs=0x28af;eip=0x0011dc; 	J(JMP(loc_383c9));	// 83781 jmp     loc_383C9 ;~ 28AF:11DC
loc_382b0:
	// 9581 
cs=0x28af;eip=0x0011e0; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 83786 inc     word ptr [bp+var_14] ;~ 28AF:11E0
loc_382b3:
	// 9582 
cs=0x28af;eip=0x0011e3; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_14))));	// 83789 les     bx, [bp+var_14] ;~ 28AF:11E3
cs=0x28af;eip=0x0011e6; 	T(TEST(*(raddr(es,bx)), 0x80));	// 83790 test    byte ptr es:[bx], 80h ;~ 28AF:11E6
cs=0x28af;eip=0x0011ea; 	J(JNZ(loc_382b0));	// 83791 jnz     short loc_382B0 ;~ 28AF:11EA
cs=0x28af;eip=0x0011ec; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 83792 inc     word ptr [bp+var_14] ;~ 28AF:11EC
cs=0x28af;eip=0x0011ef; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 83793 mov     bx, word ptr [bp+var_14] ;~ 28AF:11EF
cs=0x28af;eip=0x0011f2; 	T(MOV(al, *(raddr(es,bx))));	// 83794 mov     al, es:[bx] ;~ 28AF:11F2
cs=0x28af;eip=0x0011f5; 	T(SUB(ah, ah));	// 83795 sub     ah, ah ;~ 28AF:11F5
cs=0x28af;eip=0x0011f7; 	T(SUB(ax, 0x0D9));	// 83796 sub     ax, 0D9h ; 'Ù'  ; switch 18 cases ;~ 28AF:11F7
cs=0x28af;eip=0x0011fa; 	T(CMP(ax, 0x11));	// 83797 cmp     ax, 11h ;~ 28AF:11FA
cs=0x28af;eip=0x0011fd; 	J(JBE(loc_382d2));	// 83798 jbe     short loc_382D2 ;~ 28AF:11FD
cs=0x28af;eip=0x0011ff; 	J(JMP(def_382d5));	// 83799 jmp     def_382D5       ; jumptable 000382D5 default case ;~ 28AF:11FF
loc_382d2:
	// 9583 
cs=0x28af;eip=0x001202; 	T(ADD(ax, ax));	// 83803 add     ax, ax ;~ 28AF:1202
cs=0x28af;eip=0x001204; 	T(XCHG(ax, bx));	// 83804 xchg    ax, bx ;~ 28AF:1204
	cs=seg_offset(seg027);
cs=0x28af;eip=0x001205; __disp=*(dw*)(((db*)&jpt_382d5)+bx);
	J(return __dispatch_call(__disp, _state););	// 83805 jmp     cs:jpt_382D5[bx] ; switch jump ;~ 28AF:1205
_trkdata_case13:
	// 9584 
cs=0x28af;eip=0x00120a; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_14))), 2));	// 83810 add     word ptr [bp+var_14], 2 ; jumptable 000382D5 case 230 ;~ 28AF:120A
cs=0x28af;eip=0x00120e; 	T(MOV(ax, 4));	// 83811 mov     ax, 4 ;~ 28AF:120E
cs=0x28af;eip=0x001211; 	X(PUSH(ax));	// 83812 push    ax ;~ 28AF:1211
cs=0x28af;eip=0x001212; 	T(ax = bp+var_c);	// 83813 lea     ax, [bp+var_C] ;~ 28AF:1212
cs=0x28af;eip=0x001215; 	X(PUSH(ss));	// 83814 push    ss ;~ 28AF:1215
cs=0x28af;eip=0x001216; 	X(PUSH(ax));	// 83815 push    ax ;~ 28AF:1216
cs=0x28af;eip=0x001217; 	X(PUSH(es));	// 83816 push    es ;~ 28AF:1217
cs=0x28af;eip=0x001218; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 83817 push    word ptr [bp+var_14] ;~ 28AF:1218
cs=0x28af;eip=0x00121b; 	J(CALLF(audioresource_copy_n_bytes,0));	// 83818 call    audioresource_copy_n_bytes ;~ 28AF:121B
cs=0x28af;eip=0x001220; 	T(ADD(sp, 0x0A));	// 83819 add     sp, 0Ah ;~ 28AF:1220
cs=0x28af;eip=0x001223; 	X(PUSH(*(dw*)(raddr(ss,bp+var_26))));	// 83820 push    [bp+var_26] ;~ 28AF:1223
cs=0x28af;eip=0x001226; 	X(PUSH(*(dw*)(raddr(ss,bp+var_28))));	// 83821 push    [bp+var_28] ;~ 28AF:1226
cs=0x28af;eip=0x001229; 	T(ax = bp+var_c);	// 83822 lea     ax, [bp+var_C] ;~ 28AF:1229
cs=0x28af;eip=0x00122c; 	X(PUSH(ax));	// 83823 push    ax ;~ 28AF:122C
cs=0x28af;eip=0x00122d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 83824 push    [bp+var_16] ;~ 28AF:122D
cs=0x28af;eip=0x001230; 	T(SUB(ax, ax));	// 83825 sub     ax, ax ;~ 28AF:1230
cs=0x28af;eip=0x001232; 	X(PUSH(ax));	// 83826 push    ax ;~ 28AF:1232
cs=0x28af;eip=0x001233; 	J(CALLF(audioresource_get_chunk_index,0));	// 83827 call    audioresource_get_chunk_index ;~ 28AF:1233
cs=0x28af;eip=0x001238; 	T(ADD(sp, 0x0A));	// 83828 add     sp, 0Ah ;~ 28AF:1238
cs=0x28af;eip=0x00123b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2e)), ax));	// 83829 mov     [bp+var_2E], ax ;~ 28AF:123B
cs=0x28af;eip=0x00123e; 	T(CMP(ax, 0x0FFFF));	// 83830 cmp     ax, 0FFFFh ;~ 28AF:123E
cs=0x28af;eip=0x001241; 	J(JZ(loc_3834a));	// 83831 jz      short loc_3834A ;~ 28AF:1241
cs=0x28af;eip=0x001243; 	T(SHL(ax, 1));	// 83832 shl     ax, 1 ;~ 28AF:1243
cs=0x28af;eip=0x001245; 	T(SHL(ax, 1));	// 83833 shl     ax, 1 ;~ 28AF:1245
cs=0x28af;eip=0x001247; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_6))));	// 83834 add     ax, [bp+var_6] ;~ 28AF:1247
cs=0x28af;eip=0x00124a; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4))));	// 83835 mov     dx, [bp+var_4] ;~ 28AF:124A
cs=0x28af;eip=0x00124d; 	X(PUSH(dx));	// 83836 push    dx ;~ 28AF:124D
cs=0x28af;eip=0x00124e; 	X(PUSH(ax));	// 83837 push    ax ;~ 28AF:124E
cs=0x28af;eip=0x00124f; 	X(PUSH(cs));	// 83838 push    cs ;~ 28AF:124F
cs=0x28af;eip=0x001250; 	J(CALL(audioresource_get_dword,0));	// 83839 call    near ptr audioresource_get_dword ;~ 28AF:1250
cs=0x28af;eip=0x001253; 	T(ADD(sp, 4));	// 83840 add     sp, 4 ;~ 28AF:1253
cs=0x28af;eip=0x001256; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 83841 mov     [bp+var_1E], ax ;~ 28AF:1256
cs=0x28af;eip=0x001259; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), dx));	// 83842 mov     [bp+var_1C], dx ;~ 28AF:1259
cs=0x28af;eip=0x00125c; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_22))));	// 83843 add     ax, [bp+var_22] ;~ 28AF:125C
cs=0x28af;eip=0x00125f; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_20))));	// 83844 mov     dx, [bp+var_20] ;~ 28AF:125F
cs=0x28af;eip=0x001262; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 83845 mov     [bp+var_10], ax ;~ 28AF:1262
cs=0x28af;eip=0x001265; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), dx));	// 83846 mov     [bp+var_E], dx ;~ 28AF:1265
cs=0x28af;eip=0x001268; 	T(ax = bp+var_10);	// 83847 lea     ax, [bp+var_10] ;~ 28AF:1268
cs=0x28af;eip=0x00126b; 	X(PUSH(ss));	// 83848 push    ss ;~ 28AF:126B
cs=0x28af;eip=0x00126c; 	X(PUSH(ax));	// 83849 push    ax ;~ 28AF:126C
cs=0x28af;eip=0x00126d; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_14+2)))));	// 83850 push    word ptr [bp+var_14+2] ;~ 28AF:126D
cs=0x28af;eip=0x001270; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 83851 push    word ptr [bp+var_14] ;~ 28AF:1270
cs=0x28af;eip=0x001273; 	X(PUSH(cs));	// 83852 push    cs ;~ 28AF:1273
cs=0x28af;eip=0x001274; 	J(CALL(audioresource_copy_4_bytes,0));	// 83853 call    near ptr audioresource_copy_4_bytes ;~ 28AF:1274
cs=0x28af;eip=0x001277; 	T(ADD(sp, 8));	// 83854 add     sp, 8 ;~ 28AF:1277
loc_3834a:
	// 9585 
cs=0x28af;eip=0x00127a; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_14))), 4));	// 83857 add     word ptr [bp+var_14], 4 ;~ 28AF:127A
_parse_trackdata:
	// 9586 
cs=0x28af;eip=0x00127e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 83861 mov     ax, [bp+var_1A] ;~ 28AF:127E
cs=0x28af;eip=0x001281; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_18))));	// 83862 mov     dx, [bp+var_18] ;~ 28AF:1281
cs=0x28af;eip=0x001284; 	T(CMP(*(dw*)((dw*)(raddr(ss,bp+var_14))), ax));	// 83863 cmp     word ptr [bp+var_14], ax ;~ 28AF:1284
cs=0x28af;eip=0x001287; 	J(JNC(loc_383c6));	// 83864 jnb     short loc_383C6 ;~ 28AF:1287
cs=0x28af;eip=0x001289; 	J(JMP(loc_382b3));	// 83865 jmp     loc_382B3 ;~ 28AF:1289
_trkdata_case3__5_7__9_11_16_17:
	// 9587 
cs=0x28af;eip=0x00128c; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_14))), 2));	// 83870 add     word ptr [bp+var_14], 2 ; jumptable 000382D5 cases 220-222,224-226,228,233,234 ;~ 28AF:128C
cs=0x28af;eip=0x001290; 	J(JMP(_parse_trackdata));	// 83871 jmp     short _parse_trackdata ;~ 28AF:1290
_trkdata_case6_12:
	// 9588 
cs=0x28af;eip=0x001292; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_14))), 3));	// 83876 add     word ptr [bp+var_14], 3 ; jumptable 000382D5 cases 223,229 ;~ 28AF:1292
cs=0x28af;eip=0x001296; 	J(JMP(_parse_trackdata));	// 83877 jmp     short _parse_trackdata ;~ 28AF:1296
_trkdata_case14_15:
	// 9589 
cs=0x28af;eip=0x001298; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 83882 inc     word ptr [bp+var_14] ; jumptable 000382D5 cases 231,232 ;~ 28AF:1298
cs=0x28af;eip=0x00129b; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_14))));	// 83883 les     bx, [bp+var_14] ;~ 28AF:129B
cs=0x28af;eip=0x00129e; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 83884 inc     word ptr [bp+var_14] ;~ 28AF:129E
cs=0x28af;eip=0x0012a1; 	T(MOV(al, *(raddr(es,bx))));	// 83885 mov     al, es:[bx] ;~ 28AF:12A1
cs=0x28af;eip=0x0012a4; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 83886 mov     [bp+var_2], al ;~ 28AF:12A4
cs=0x28af;eip=0x0012a7; 	T(SUB(ah, ah));	// 83887 sub     ah, ah ;~ 28AF:12A7
cs=0x28af;eip=0x0012a9; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_14))), ax));	// 83888 add     word ptr [bp+var_14], ax ;~ 28AF:12A9
cs=0x28af;eip=0x0012ac; 	J(JMP(_parse_trackdata));	// 83889 jmp     short _parse_trackdata ;~ 28AF:12AC
def_382d5:
	// 9590 
cs=0x28af;eip=0x0012ae; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 83893 mov     bx, word ptr [bp+var_14] ; jumptable 000382D5 default case ;~ 28AF:12AE
cs=0x28af;eip=0x0012b1; 	T(MOV(al, *(raddr(es,bx))));	// 83894 mov     al, es:[bx] ;~ 28AF:12B1
cs=0x28af;eip=0x0012b4; 	T(SUB(ah, ah));	// 83895 sub     ah, ah ;~ 28AF:12B4
cs=0x28af;eip=0x0012b6; 	T(CMP(ax, 0x80));	// 83896 cmp     ax, 80h ; '€' ;~ 28AF:12B6
cs=0x28af;eip=0x0012b9; 	J(JC(loc_3838e));	// 83897 jb      short loc_3838E ;~ 28AF:12B9
cs=0x28af;eip=0x0012bb; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 83898 inc     word ptr [bp+var_14] ;~ 28AF:12BB
loc_3838e:
	// 9591 
cs=0x28af;eip=0x0012be; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 83902 inc     word ptr [bp+var_14] ;~ 28AF:12BE
cs=0x28af;eip=0x0012c1; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 83903 mov     bx, word ptr [bp+var_14] ;~ 28AF:12C1
cs=0x28af;eip=0x0012c4; 	T(TEST(*(raddr(es,bx)), 0x80));	// 83904 test    byte ptr es:[bx], 80h ;~ 28AF:12C4
cs=0x28af;eip=0x0012c8; 	J(JNZ(loc_3838e));	// 83905 jnz     short loc_3838E ;~ 28AF:12C8
_trkdata_case0_1_2_10:
	// 9592 
cs=0x28af;eip=0x0012ca; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 83909 inc     word ptr [bp+var_14] ; jumptable 000382D5 cases 217-219,227 ;~ 28AF:12CA
cs=0x28af;eip=0x0012cd; 	J(JMP(_parse_trackdata));	// 83910 jmp     short _parse_trackdata ;~ 28AF:12CD
ret_28af_12f4:
	// 9593 
cs=0x28af;eip=0x0012f4; 	J(JMP(_parse_trackdata));	// 83933 jmp     short _parse_trackdata ;~ 28AF:12F4
loc_383c6:
	// 9594 
cs=0x28af;eip=0x0012f6; 	X(INC(*(dw*)(raddr(ss,bp+var_2a))));	// 83938 inc     [bp+var_2A] ;~ 28AF:12F6
loc_383c9:
	// 9595 
cs=0x28af;eip=0x0012f9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_16))));	// 83941 mov     ax, [bp+var_16] ;~ 28AF:12F9
cs=0x28af;eip=0x0012fc; 	T(CMP(*(dw*)(raddr(ss,bp+var_2a)), ax));	// 83942 cmp     [bp+var_2A], ax ;~ 28AF:12FC
cs=0x28af;eip=0x0012ff; 	J(JL(loc_383d4));	// 83943 jl      short loc_383D4 ;~ 28AF:12FF
cs=0x28af;eip=0x001301; 	J(JMP(loc_384f4));	// 83944 jmp     loc_384F4 ;~ 28AF:1301
loc_383d4:
	// 9596 
cs=0x28af;eip=0x001304; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2a))));	// 83948 mov     ax, [bp+var_2A] ;~ 28AF:1304
cs=0x28af;eip=0x001307; 	T(SHL(ax, 1));	// 83949 shl     ax, 1 ;~ 28AF:1307
cs=0x28af;eip=0x001309; 	T(SHL(ax, 1));	// 83950 shl     ax, 1 ;~ 28AF:1309
cs=0x28af;eip=0x00130b; 	X(MOV(*(dw*)(raddr(ss,bp+var_32)), ax));	// 83951 mov     [bp+var_32], ax ;~ 28AF:130B
cs=0x28af;eip=0x00130e; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_6))));	// 83952 add     ax, [bp+var_6] ;~ 28AF:130E
cs=0x28af;eip=0x001311; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4))));	// 83953 mov     dx, [bp+var_4] ;~ 28AF:1311
cs=0x28af;eip=0x001314; 	X(PUSH(dx));	// 83954 push    dx ;~ 28AF:1314
cs=0x28af;eip=0x001315; 	X(PUSH(ax));	// 83955 push    ax ;~ 28AF:1315
cs=0x28af;eip=0x001316; 	X(PUSH(cs));	// 83956 push    cs ;~ 28AF:1316
cs=0x28af;eip=0x001317; 	J(CALL(audioresource_get_dword,0));	// 83957 call    near ptr audioresource_get_dword ;~ 28AF:1317
cs=0x28af;eip=0x00131a; 	T(ADD(sp, 4));	// 83958 add     sp, 4 ;~ 28AF:131A
cs=0x28af;eip=0x00131d; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_22))));	// 83959 add     ax, [bp+var_22] ;~ 28AF:131D
cs=0x28af;eip=0x001320; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_20))));	// 83960 mov     dx, [bp+var_20] ;~ 28AF:1320
cs=0x28af;eip=0x001323; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_14))), ax));	// 83961 mov     word ptr [bp+var_14], ax ;~ 28AF:1323
cs=0x28af;eip=0x001326; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_14+2))), dx));	// 83962 mov     word ptr [bp+var_14+2], dx ;~ 28AF:1326
cs=0x28af;eip=0x001329; 	T(ax = bp+var_14);	// 83963 lea     ax, [bp+var_14] ;~ 28AF:1329
cs=0x28af;eip=0x00132c; 	X(PUSH(ss));	// 83964 push    ss ;~ 28AF:132C
cs=0x28af;eip=0x00132d; 	X(PUSH(ax));	// 83965 push    ax ;~ 28AF:132D
cs=0x28af;eip=0x00132e; 	X(PUSH(cs));	// 83966 push    cs ;~ 28AF:132E
cs=0x28af;eip=0x00132f; 	J(CALL(audioresource_get_dword,0));	// 83967 call    near ptr audioresource_get_dword ;~ 28AF:132F
cs=0x28af;eip=0x001332; 	T(ADD(sp, 4));	// 83968 add     sp, 4 ;~ 28AF:1332
cs=0x28af;eip=0x001335; 	T(ADD(ax, *(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 83969 add     ax, word ptr [bp+var_14] ;~ 28AF:1335
cs=0x28af;eip=0x001338; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_14+2)))));	// 83970 mov     dx, word ptr [bp+var_14+2] ;~ 28AF:1338
cs=0x28af;eip=0x00133b; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), ax));	// 83971 mov     [bp+var_1A], ax ;~ 28AF:133B
cs=0x28af;eip=0x00133e; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), dx));	// 83972 mov     [bp+var_18], dx ;~ 28AF:133E
cs=0x28af;eip=0x001341; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_14))), 4));	// 83973 add     word ptr [bp+var_14], 4 ;~ 28AF:1341
cs=0x28af;eip=0x001345; 	T(MOV(ax, 4));	// 83974 mov     ax, 4 ;~ 28AF:1345
cs=0x28af;eip=0x001348; 	X(PUSH(ax));	// 83975 push    ax ;~ 28AF:1348
cs=0x28af;eip=0x001349; 	T(MOV(ax, offset(dseg,ahdr1_1)));	// 83976 mov     ax, offset aHdr1_1 ; "hdr1" ;~ 28AF:1349
cs=0x28af;eip=0x00134c; 	X(PUSH(ds));	// 83977 push    ds ;~ 28AF:134C
cs=0x28af;eip=0x00134d; 	X(PUSH(ax));	// 83978 push    ax ;~ 28AF:134D
cs=0x28af;eip=0x00134e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_32))));	// 83979 mov     ax, [bp+var_32] ;~ 28AF:134E
cs=0x28af;eip=0x001351; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_28))));	// 83980 add     ax, [bp+var_28] ;~ 28AF:1351
cs=0x28af;eip=0x001354; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_26))));	// 83981 mov     dx, [bp+var_26] ;~ 28AF:1354
cs=0x28af;eip=0x001357; 	X(PUSH(dx));	// 83982 push    dx ;~ 28AF:1357
cs=0x28af;eip=0x001358; 	X(PUSH(ax));	// 83983 push    ax ;~ 28AF:1358
cs=0x28af;eip=0x001359; 	T(SUB(ax, ax));	// 83984 sub     ax, ax ;~ 28AF:1359
cs=0x28af;eip=0x00135b; 	X(PUSH(ax));	// 83985 push    ax ;~ 28AF:135B
cs=0x28af;eip=0x00135c; 	J(CALLF(audioresource_compare_chunknames,0));	// 83986 call    audioresource_compare_chunknames ;~ 28AF:135C
cs=0x28af;eip=0x001361; 	T(ADD(sp, 0x0C));	// 83987 add     sp, 0Ch ;~ 28AF:1361
cs=0x28af;eip=0x001364; 	T(OR(ax, ax));	// 83988 or      ax, ax          ; ax = 1, found hdr1 at the counter index ;~ 28AF:1364
cs=0x28af;eip=0x001366; 	J(JNZ(_patch_hdrdata_trackptrs));	// 83989 jnz     short _patch_hdrdata_trackptrs ;~ 28AF:1366
cs=0x28af;eip=0x001368; 	J(JMP(_parse_trackdata));	// 83990 jmp     _parse_trackdata ;~ 28AF:1368
_patch_hdrdata_trackptrs:
	// 9597 
cs=0x28af;eip=0x00136b; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_14))), 2));	// 83994 add     word ptr [bp+var_14], 2 ;~ 28AF:136B
cs=0x28af;eip=0x00136f; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_14))));	// 83995 les     bx, [bp+var_14] ;~ 28AF:136F
cs=0x28af;eip=0x001372; 	T(MOV(al, *(raddr(es,bx))));	// 83996 mov     al, es:[bx] ;~ 28AF:1372
cs=0x28af;eip=0x001375; 	X(MOV(*(raddr(ss,bp+var_24)), al));	// 83997 mov     [bp+var_24], al ;~ 28AF:1375
cs=0x28af;eip=0x001378; 	T(SUB(ah, ah));	// 83998 sub     ah, ah ;~ 28AF:1378
cs=0x28af;eip=0x00137a; 	T(SHL(ax, 1));	// 83999 shl     ax, 1 ;~ 28AF:137A
cs=0x28af;eip=0x00137c; 	T(SHL(ax, 1));	// 84000 shl     ax, 1 ;~ 28AF:137C
cs=0x28af;eip=0x00137e; 	T(INC(ax));	// 84001 inc     ax ;~ 28AF:137E
cs=0x28af;eip=0x00137f; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_14))), ax));	// 84002 add     word ptr [bp+var_14], ax ;~ 28AF:137F
cs=0x28af;eip=0x001382; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 84003 mov     bx, word ptr [bp+var_14] ;~ 28AF:1382
cs=0x28af;eip=0x001385; 	T(MOV(al, *(raddr(es,bx))));	// 84004 mov     al, es:[bx] ;~ 28AF:1385
cs=0x28af;eip=0x001388; 	X(MOV(*(raddr(ss,bp+var_24)), al));	// 84005 mov     [bp+var_24], al ;~ 28AF:1388
cs=0x28af;eip=0x00138b; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 84006 inc     word ptr [bp+var_14] ;~ 28AF:138B
cs=0x28af;eip=0x00138e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), 0));	// 84007 mov     [bp+var_2C], 0 ;~ 28AF:138E
cs=0x28af;eip=0x001393; 	T(SUB(ah, ah));	// 84008 sub     ah, ah ;~ 28AF:1393
cs=0x28af;eip=0x001395; 	T(OR(ax, ax));	// 84009 or      ax, ax ;~ 28AF:1395
cs=0x28af;eip=0x001397; 	J(JNZ(loc_3846c));	// 84010 jnz     short loc_3846C ;~ 28AF:1397
cs=0x28af;eip=0x001399; 	J(JMP(loc_383c6));	// 84011 jmp     loc_383C6 ;~ 28AF:1399
loc_3846c:
	// 9598 
cs=0x28af;eip=0x00139c; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), ax));	// 84015 mov     [bp+var_30], ax ;~ 28AF:139C
cs=0x28af;eip=0x00139f; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_2c))));	// 84016 mov     di, [bp+var_2C] ;~ 28AF:139F
loc_38472:
	// 9599 
cs=0x28af;eip=0x0013a2; 	T(MOV(ax, 4));	// 84019 mov     ax, 4 ;~ 28AF:13A2
cs=0x28af;eip=0x0013a5; 	X(PUSH(ax));	// 84020 push    ax ;~ 28AF:13A5
cs=0x28af;eip=0x0013a6; 	T(ax = bp+var_c);	// 84021 lea     ax, [bp+var_C] ;~ 28AF:13A6
cs=0x28af;eip=0x0013a9; 	X(PUSH(ss));	// 84022 push    ss ;~ 28AF:13A9
cs=0x28af;eip=0x0013aa; 	X(PUSH(ax));	// 84023 push    ax ;~ 28AF:13AA
cs=0x28af;eip=0x0013ab; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_14+2)))));	// 84024 push    word ptr [bp+var_14+2] ;~ 28AF:13AB
cs=0x28af;eip=0x0013ae; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 84025 push    word ptr [bp+var_14] ;~ 28AF:13AE
cs=0x28af;eip=0x0013b1; 	J(CALLF(audioresource_copy_n_bytes,0));	// 84026 call    audioresource_copy_n_bytes ;~ 28AF:13B1
cs=0x28af;eip=0x0013b6; 	T(ADD(sp, 0x0A));	// 84027 add     sp, 0Ah ;~ 28AF:13B6
cs=0x28af;eip=0x0013b9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_26))));	// 84028 push    [bp+var_26] ;~ 28AF:13B9
cs=0x28af;eip=0x0013bc; 	X(PUSH(*(dw*)(raddr(ss,bp+var_28))));	// 84029 push    [bp+var_28] ;~ 28AF:13BC
cs=0x28af;eip=0x0013bf; 	T(ax = bp+var_c);	// 84030 lea     ax, [bp+var_C] ;~ 28AF:13BF
cs=0x28af;eip=0x0013c2; 	X(PUSH(ax));	// 84031 push    ax ;~ 28AF:13C2
cs=0x28af;eip=0x0013c3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 84032 push    [bp+var_16] ;~ 28AF:13C3
cs=0x28af;eip=0x0013c6; 	T(SUB(ax, ax));	// 84033 sub     ax, ax ;~ 28AF:13C6
cs=0x28af;eip=0x0013c8; 	X(PUSH(ax));	// 84034 push    ax ;~ 28AF:13C8
cs=0x28af;eip=0x0013c9; 	J(CALLF(audioresource_get_chunk_index,0));	// 84035 call    audioresource_get_chunk_index ;~ 28AF:13C9
cs=0x28af;eip=0x0013ce; 	T(ADD(sp, 0x0A));	// 84036 add     sp, 0Ah ;~ 28AF:13CE
cs=0x28af;eip=0x0013d1; 	T(MOV(si, ax));	// 84037 mov     si, ax ;~ 28AF:13D1
cs=0x28af;eip=0x0013d3; 	T(CMP(si, 0x0FFFF));	// 84038 cmp     si, 0FFFFh ;~ 28AF:13D3
cs=0x28af;eip=0x0013d6; 	J(JZ(loc_384df));	// 84039 jz      short loc_384DF ;~ 28AF:13D6
cs=0x28af;eip=0x0013d8; 	T(SHL(ax, 1));	// 84040 shl     ax, 1 ;~ 28AF:13D8
cs=0x28af;eip=0x0013da; 	T(SHL(ax, 1));	// 84041 shl     ax, 1 ;~ 28AF:13DA
cs=0x28af;eip=0x0013dc; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_6))));	// 84042 add     ax, [bp+var_6] ;~ 28AF:13DC
cs=0x28af;eip=0x0013df; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4))));	// 84043 mov     dx, [bp+var_4] ;~ 28AF:13DF
cs=0x28af;eip=0x0013e2; 	X(PUSH(dx));	// 84044 push    dx ;~ 28AF:13E2
cs=0x28af;eip=0x0013e3; 	X(PUSH(ax));	// 84045 push    ax ;~ 28AF:13E3
cs=0x28af;eip=0x0013e4; 	X(PUSH(cs));	// 84046 push    cs ;~ 28AF:13E4
cs=0x28af;eip=0x0013e5; 	J(CALL(audioresource_get_dword,0));	// 84047 call    near ptr audioresource_get_dword ;~ 28AF:13E5
cs=0x28af;eip=0x0013e8; 	T(ADD(sp, 4));	// 84048 add     sp, 4 ;~ 28AF:13E8
cs=0x28af;eip=0x0013eb; 	X(MOV(*(dw*)(raddr(ss,bp+var_1e)), ax));	// 84049 mov     [bp+var_1E], ax ;~ 28AF:13EB
cs=0x28af;eip=0x0013ee; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), dx));	// 84050 mov     [bp+var_1C], dx ;~ 28AF:13EE
cs=0x28af;eip=0x0013f1; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_22))));	// 84051 add     ax, [bp+var_22] ;~ 28AF:13F1
cs=0x28af;eip=0x0013f4; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_20))));	// 84052 mov     dx, [bp+var_20] ;~ 28AF:13F4
cs=0x28af;eip=0x0013f7; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 84053 mov     [bp+var_10], ax ;~ 28AF:13F7
cs=0x28af;eip=0x0013fa; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), dx));	// 84054 mov     [bp+var_E], dx ;~ 28AF:13FA
cs=0x28af;eip=0x0013fd; 	T(ax = bp+var_10);	// 84055 lea     ax, [bp+var_10] ;~ 28AF:13FD
cs=0x28af;eip=0x001400; 	X(PUSH(ss));	// 84056 push    ss ;~ 28AF:1400
cs=0x28af;eip=0x001401; 	X(PUSH(ax));	// 84057 push    ax ;~ 28AF:1401
cs=0x28af;eip=0x001402; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_14+2)))));	// 84058 push    word ptr [bp+var_14+2] ;~ 28AF:1402
cs=0x28af;eip=0x001405; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_14)))));	// 84059 push    word ptr [bp+var_14] ;~ 28AF:1405
cs=0x28af;eip=0x001408; 	X(PUSH(cs));	// 84060 push    cs ;~ 28AF:1408
cs=0x28af;eip=0x001409; 	J(CALL(audioresource_copy_4_bytes,0));	// 84061 call    near ptr audioresource_copy_4_bytes ;~ 28AF:1409
cs=0x28af;eip=0x00140c; 	T(ADD(sp, 8));	// 84062 add     sp, 8 ;~ 28AF:140C
loc_384df:
	// 9600 
cs=0x28af;eip=0x00140f; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_14))), 5));	// 84065 add     word ptr [bp+var_14], 5 ;~ 28AF:140F
cs=0x28af;eip=0x001413; 	T(INC(di));	// 84066 inc     di ;~ 28AF:1413
cs=0x28af;eip=0x001414; 	T(MOV(ax, di));	// 84067 mov     ax, di ;~ 28AF:1414
cs=0x28af;eip=0x001416; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_30))));	// 84068 cmp     ax, [bp+var_30] ;~ 28AF:1416
cs=0x28af;eip=0x001419; 	J(JC(loc_38472));	// 84069 jb      short loc_38472 ;~ 28AF:1419
cs=0x28af;eip=0x00141b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2c)), di));	// 84070 mov     [bp+var_2C], di ;~ 28AF:141B
cs=0x28af;eip=0x00141e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2e)), si));	// 84071 mov     [bp+var_2E], si ;~ 28AF:141E
cs=0x28af;eip=0x001421; 	J(JMP(loc_383c6));	// 84072 jmp     loc_383C6 ;~ 28AF:1421
loc_384f4:
	// 9601 
cs=0x28af;eip=0x001424; 	X(POP(si));	// 84076 pop     si ;~ 28AF:1424
cs=0x28af;eip=0x001425; 	X(POP(di));	// 84077 pop     di ;~ 28AF:1425
cs=0x28af;eip=0x001426; 	T(MOV(sp, bp));	// 84078 mov     sp, bp ;~ 28AF:1426
cs=0x28af;eip=0x001428; 	X(POP(bp));	// 84079 pop     bp ;~ 28AF:1428
cs=0x28af;eip=0x001429; 	J(RETF(0));	// 84080 retf ;~ 28AF:1429

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_parse_trackdata: 	goto _parse_trackdata;
        case m2c::k_patch_hdrdata_trackptrs: 	goto _patch_hdrdata_trackptrs;
        case m2c::k_trkdata_case0_1_2_10: 	goto _trkdata_case0_1_2_10;
        case m2c::k_trkdata_case13: 	goto _trkdata_case13;
        case m2c::k_trkdata_case14_15: 	goto _trkdata_case14_15;
        case m2c::k_trkdata_case3__5_7__9_11_16_17: 	goto _trkdata_case3__5_7__9_11_16_17;
        case m2c::k_trkdata_case6_12: 	goto _trkdata_case6_12;
        case m2c::kaudio_map_song_tracks: 	goto audio_map_song_tracks;
        case m2c::kdef_382d5: 	goto def_382d5;
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
        case m2c::kret_28af_12f4: 	goto ret_28af_12f4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool audioresource_get_dword(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    audioresource_get_dword:
    _begin:
#undef var_4
#define var_4 -4
	// 84091 var_4           = word ptr -4 ;~ 28AF:142A
#undef var_2
#define var_2 -2
	// 84092 var_2           = word ptr -2 ;~ 28AF:142A
#undef arg_0
#define arg_0 6
	// 84093 arg_0           = dword ptr  6 ;~ 28AF:142A
cs=0x28af;eip=0x00142a; 	X(PUSH(bp));	// 84095 push    bp ;~ 28AF:142A
cs=0x28af;eip=0x00142b; 	T(MOV(bp, sp));	// 84096 mov     bp, sp ;~ 28AF:142B
cs=0x28af;eip=0x00142d; 	T(SUB(sp, 4));	// 84097 sub     sp, 4 ;~ 28AF:142D
cs=0x28af;eip=0x001430; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 84098 les     bx, [bp+arg_0] ;~ 28AF:1430
cs=0x28af;eip=0x001433; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 84099 mov     ax, es:[bx] ;~ 28AF:1433
cs=0x28af;eip=0x001436; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 84100 mov     dx, es:[bx+2] ;~ 28AF:1436
cs=0x28af;eip=0x00143a; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 84101 mov     [bp+var_4], ax ;~ 28AF:143A
cs=0x28af;eip=0x00143d; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 84102 mov     [bp+var_2], dx ;~ 28AF:143D
cs=0x28af;eip=0x001440; 	T(MOV(sp, bp));	// 84103 mov     sp, bp ;~ 28AF:1440
cs=0x28af;eip=0x001442; 	X(POP(bp));	// 84104 pop     bp ;~ 28AF:1442
cs=0x28af;eip=0x001443; 	J(RETF(0));	// 84105 retf ;~ 28AF:1443

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kaudioresource_get_dword: 	goto audioresource_get_dword;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool audioresource_get_word(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    audioresource_get_word:
    _begin:
#undef var_2
#define var_2 -2
	// 84116 var_2           = word ptr -2 ;~ 28AF:1444
#undef arg_0
#define arg_0 6
	// 84117 arg_0           = dword ptr  6 ;~ 28AF:1444
cs=0x28af;eip=0x001444; 	X(PUSH(bp));	// 84119 push    bp ;~ 28AF:1444
cs=0x28af;eip=0x001445; 	T(MOV(bp, sp));	// 84120 mov     bp, sp ;~ 28AF:1445
cs=0x28af;eip=0x001447; 	T(SUB(sp, 2));	// 84121 sub     sp, 2 ;~ 28AF:1447
cs=0x28af;eip=0x00144a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 84122 les     bx, [bp+arg_0] ;~ 28AF:144A
cs=0x28af;eip=0x00144d; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 84123 mov     ax, es:[bx] ;~ 28AF:144D
cs=0x28af;eip=0x001450; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 84124 mov     [bp+var_2], ax ;~ 28AF:1450
cs=0x28af;eip=0x001453; 	T(MOV(sp, bp));	// 84125 mov     sp, bp ;~ 28AF:1453
cs=0x28af;eip=0x001455; 	X(POP(bp));	// 84126 pop     bp ;~ 28AF:1455
cs=0x28af;eip=0x001456; 	J(RETF(0));	// 84127 retf ;~ 28AF:1456

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kaudioresource_get_word: 	goto audioresource_get_word;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool audioresource_copy_4_bytes(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    audioresource_copy_4_bytes:
    _begin:
#undef arg_0
#define arg_0 6
	// 84140 arg_0           = dword ptr  6 ;~ 28AF:1458
#undef arg_4
#define arg_4 0x0A
	// 84141 arg_4           = dword ptr  0Ah ;~ 28AF:1458
cs=0x28af;eip=0x001458; 	X(PUSH(bp));	// 84143 push    bp ;~ 28AF:1458
cs=0x28af;eip=0x001459; 	T(MOV(bp, sp));	// 84144 mov     bp, sp ;~ 28AF:1459
cs=0x28af;eip=0x00145b; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 84145 les     bx, [bp+arg_4] ;~ 28AF:145B
cs=0x28af;eip=0x00145e; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_4)))));	// 84146 inc     word ptr [bp+arg_4] ;~ 28AF:145E
cs=0x28af;eip=0x001461; 	T(MOV(al, *(raddr(es,bx))));	// 84147 mov     al, es:[bx] ;~ 28AF:1461
cs=0x28af;eip=0x001464; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 84148 les     bx, [bp+arg_0] ;~ 28AF:1464
cs=0x28af;eip=0x001467; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 84149 inc     word ptr [bp+arg_0] ;~ 28AF:1467
cs=0x28af;eip=0x00146a; 	X(MOV(*(raddr(es,bx)), al));	// 84150 mov     es:[bx], al ;~ 28AF:146A
cs=0x28af;eip=0x00146d; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 84151 les     bx, [bp+arg_4] ;~ 28AF:146D
cs=0x28af;eip=0x001470; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_4)))));	// 84152 inc     word ptr [bp+arg_4] ;~ 28AF:1470
cs=0x28af;eip=0x001473; 	T(MOV(al, *(raddr(es,bx))));	// 84153 mov     al, es:[bx] ;~ 28AF:1473
cs=0x28af;eip=0x001476; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 84154 les     bx, [bp+arg_0] ;~ 28AF:1476
cs=0x28af;eip=0x001479; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 84155 inc     word ptr [bp+arg_0] ;~ 28AF:1479
cs=0x28af;eip=0x00147c; 	X(MOV(*(raddr(es,bx)), al));	// 84156 mov     es:[bx], al ;~ 28AF:147C
cs=0x28af;eip=0x00147f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 84157 les     bx, [bp+arg_4] ;~ 28AF:147F
cs=0x28af;eip=0x001482; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_4)))));	// 84158 inc     word ptr [bp+arg_4] ;~ 28AF:1482
cs=0x28af;eip=0x001485; 	T(MOV(al, *(raddr(es,bx))));	// 84159 mov     al, es:[bx] ;~ 28AF:1485
cs=0x28af;eip=0x001488; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 84160 les     bx, [bp+arg_0] ;~ 28AF:1488
cs=0x28af;eip=0x00148b; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 84161 inc     word ptr [bp+arg_0] ;~ 28AF:148B
cs=0x28af;eip=0x00148e; 	X(MOV(*(raddr(es,bx)), al));	// 84162 mov     es:[bx], al ;~ 28AF:148E
cs=0x28af;eip=0x001491; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 84163 les     bx, [bp+arg_4] ;~ 28AF:1491
cs=0x28af;eip=0x001494; 	T(MOV(al, *(raddr(es,bx))));	// 84164 mov     al, es:[bx] ;~ 28AF:1494
cs=0x28af;eip=0x001497; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 84165 les     bx, [bp+arg_0] ;~ 28AF:1497
cs=0x28af;eip=0x00149a; 	X(MOV(*(raddr(es,bx)), al));	// 84166 mov     es:[bx], al ;~ 28AF:149A
cs=0x28af;eip=0x00149d; 	X(POP(bp));	// 84167 pop     bp ;~ 28AF:149D
cs=0x28af;eip=0x00149e; 	J(RETF(0));	// 84168 retf ;~ 28AF:149E

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kaudioresource_copy_4_bytes: 	goto audioresource_copy_4_bytes;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg027_14a0_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg027_14a0_proc:
    _begin:
cs=0x28af;eip=0x0014a0; 	X(PUSH(bp));	// 84173 push    bp ;~ 28AF:14A0
cs=0x28af;eip=0x0014a1; 	T(MOV(bp, sp));	// 84174 mov     bp, sp ;~ 28AF:14A1
cs=0x28af;eip=0x0014a3; 	T(SUB(sp, 8));	// 84175 sub     sp, 8 ;~ 28AF:14A3
cs=0x28af;eip=0x0014a6; 	X(PUSH(di));	// 84176 push    di ;~ 28AF:14A6
cs=0x28af;eip=0x0014a7; 	X(PUSH(si));	// 84177 push    si ;~ 28AF:14A7
cs=0x28af;eip=0x0014a8; 	T(MOV(al, audioflag6));	// 84178 mov     al, audioflag6 ;~ 28AF:14A8
cs=0x28af;eip=0x0014ab; 	T(SUB(ah, ah));	// 84179 sub     ah, ah ;~ 28AF:14AB
cs=0x28af;eip=0x0014ad; 	X(PUSH(ax));	// 84180 push    ax ;~ 28AF:14AD
cs=0x28af;eip=0x0014ae; 	T(MOV(al, byte_40632));	// 84181 mov     al, byte_40632 ;~ 28AF:14AE
cs=0x28af;eip=0x0014b1; 	X(PUSH(ax));	// 84182 push    ax ;~ 28AF:14B1
cs=0x28af;eip=0x0014b2; 	T(MOV(al, audioflag2));	// 84183 mov     al, audioflag2 ;~ 28AF:14B2
cs=0x28af;eip=0x0014b5; 	X(PUSH(ax));	// 84184 push    ax ;~ 28AF:14B5
cs=0x28af;eip=0x0014b6; 	T(MOV(al, byte_40630));	// 84185 mov     al, byte_40630 ;~ 28AF:14B6
cs=0x28af;eip=0x0014b9; 	X(PUSH(ax));	// 84186 push    ax ;~ 28AF:14B9
cs=0x28af;eip=0x0014ba; 	T(MOV(ax, 0x4FA3));	// 84187 mov     ax, 4FA3h ;~ 28AF:14BA
cs=0x28af;eip=0x0014bd; 	X(PUSH(ax));	// 84188 push    ax ;~ 28AF:14BD
cs=0x28af;eip=0x0014be; 	J(CALLF(nopsub_3219d,0));	// 84189 call    nopsub_3219D ;~ 28AF:14BE
cs=0x28af;eip=0x0014c3; 	T(ADD(sp, 0x0A));	// 84190 add     sp, 0Ah ;~ 28AF:14C3
cs=0x28af;eip=0x0014c6; 	T(MOV(al, byte_45948));	// 84191 mov     al, byte_45948 ;~ 28AF:14C6
cs=0x28af;eip=0x0014c9; 	T(SUB(ah, ah));	// 84192 sub     ah, ah ;~ 28AF:14C9
cs=0x28af;eip=0x0014cb; 	X(PUSH(ax));	// 84193 push    ax ;~ 28AF:14CB
cs=0x28af;eip=0x0014cc; 	T(MOV(al, byte_45950));	// 84194 mov     al, byte_45950 ;~ 28AF:14CC
cs=0x28af;eip=0x0014cf; 	X(PUSH(ax));	// 84195 push    ax ;~ 28AF:14CF
cs=0x28af;eip=0x0014d0; 	T(MOV(ax, 0x4FD5));	// 84196 mov     ax, 4FD5h ;~ 28AF:14D0
cs=0x28af;eip=0x0014d3; 	X(PUSH(ax));	// 84197 push    ax ;~ 28AF:14D3
cs=0x28af;eip=0x0014d4; 	J(CALLF(nopsub_3219d,0));	// 84198 call    nopsub_3219D ;~ 28AF:14D4
cs=0x28af;eip=0x0014d9; 	T(ADD(sp, 6));	// 84199 add     sp, 6 ;~ 28AF:14D9
cs=0x28af;eip=0x0014dc; 	T(SUB(si, si));	// 84200 sub     si, si ;~ 28AF:14DC
cs=0x28af;eip=0x0014de; 	T(MOV(di, 0x8214));	// 84201 mov     di, 8214h ;~ 28AF:14DE
cs=0x28af;eip=0x0014e1; 	X(MOV(*(dw*)(raddr(ss,bp-6)), 0x81FC));	// 84202 mov     word ptr [bp-6], 81FCh ;~ 28AF:14E1
loc_385b6:
	// 9602 
cs=0x28af;eip=0x0014e6; 	X(PUSH(*(dw*)(raddr(ds,di+2))));	// 84205 push    word ptr [di+2] ;~ 28AF:14E6
cs=0x28af;eip=0x0014e9; 	X(PUSH(*(dw*)(raddr(ds,di))));	// 84206 push    word ptr [di] ;~ 28AF:14E9
cs=0x28af;eip=0x0014eb; 	T(MOV(bx, *(dw*)(raddr(ss,bp-6))));	// 84207 mov     bx, [bp-6] ;~ 28AF:14EB
cs=0x28af;eip=0x0014ee; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 84208 push    word ptr [bx+2] ;~ 28AF:14EE
cs=0x28af;eip=0x0014f1; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 84209 push    word ptr [bx] ;~ 28AF:14F1
cs=0x28af;eip=0x0014f3; 	X(PUSH(si));	// 84210 push    si ;~ 28AF:14F3
cs=0x28af;eip=0x0014f4; 	T(MOV(ax, 0x4FFB));	// 84211 mov     ax, 4FFBh ;~ 28AF:14F4
cs=0x28af;eip=0x0014f7; 	X(PUSH(ax));	// 84212 push    ax ;~ 28AF:14F7
cs=0x28af;eip=0x0014f8; 	J(CALLF(nopsub_3219d,0));	// 84213 call    nopsub_3219D ;~ 28AF:14F8
cs=0x28af;eip=0x0014fd; 	T(ADD(sp, 0x0C));	// 84214 add     sp, 0Ch ;~ 28AF:14FD
cs=0x28af;eip=0x001500; 	T(ADD(di, 0x4C));	// 84215 add     di, 4Ch ; 'L' ;~ 28AF:1500
cs=0x28af;eip=0x001503; 	X(ADD(*(dw*)(raddr(ss,bp-6)), 0x4C));	// 84216 add     word ptr [bp-6], 4Ch ; 'L' ;~ 28AF:1503
cs=0x28af;eip=0x001507; 	T(INC(si));	// 84217 inc     si ;~ 28AF:1507
cs=0x28af;eip=0x001508; 	T(CMP(si, 0x18));	// 84218 cmp     si, 18h ;~ 28AF:1508
cs=0x28af;eip=0x00150b; 	J(JL(loc_385b6));	// 84219 jl      short loc_385B6 ;~ 28AF:150B
cs=0x28af;eip=0x00150d; 	X(MOV(*(dw*)(raddr(ss,bp-2)), si));	// 84220 mov     [bp-2], si ;~ 28AF:150D
cs=0x28af;eip=0x001510; 	T(MOV(ax, 0x5010));	// 84221 mov     ax, 5010h ;~ 28AF:1510
cs=0x28af;eip=0x001513; 	X(PUSH(ax));	// 84222 push    ax ;~ 28AF:1513
cs=0x28af;eip=0x001514; 	J(CALLF(nopsub_3219d,0));	// 84223 call    nopsub_3219D ;~ 28AF:1514
cs=0x28af;eip=0x001519; 	T(ADD(sp, 2));	// 84224 add     sp, 2 ;~ 28AF:1519
cs=0x28af;eip=0x00151c; 	J(CALLF(flush_stdin,0));	// 84225 call    flush_stdin ;~ 28AF:151C
cs=0x28af;eip=0x001521; 	T(SUB(si, si));	// 84226 sub     si, si ;~ 28AF:1521
cs=0x28af;eip=0x001523; 	T(MOV(di, 0x0A2C2));	// 84227 mov     di, 0A2C2h ;~ 28AF:1523
cs=0x28af;eip=0x001526; 	X(MOV(*(dw*)(raddr(ss,bp-4)), 0x0A2BE));	// 84228 mov     word ptr [bp-4], 0A2BEh ;~ 28AF:1526
cs=0x28af;eip=0x00152b; 	X(MOV(*(dw*)(raddr(ss,bp-8)), 0x0A2B7));	// 84229 mov     word ptr [bp-8], 0A2B7h ;~ 28AF:152B
loc_38600:
	// 9603 
cs=0x28af;eip=0x001530; 	X(PUSH(*(dw*)(raddr(ds,di+2))));	// 84232 push    word ptr [di+2] ;~ 28AF:1530
cs=0x28af;eip=0x001533; 	X(PUSH(*(dw*)(raddr(ds,di))));	// 84233 push    word ptr [di] ;~ 28AF:1533
cs=0x28af;eip=0x001535; 	T(MOV(bx, *(dw*)(raddr(ss,bp-4))));	// 84234 mov     bx, [bp-4] ;~ 28AF:1535
cs=0x28af;eip=0x001538; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 84235 push    word ptr [bx+2] ;~ 28AF:1538
cs=0x28af;eip=0x00153b; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 84236 push    word ptr [bx] ;~ 28AF:153B
cs=0x28af;eip=0x00153d; 	T(MOV(bx, *(dw*)(raddr(ss,bp-8))));	// 84237 mov     bx, [bp-8] ;~ 28AF:153D
cs=0x28af;eip=0x001540; 	T(MOV(al, *(raddr(ds,bx))));	// 84238 mov     al, [bx] ;~ 28AF:1540
cs=0x28af;eip=0x001542; 	T(SUB(ah, ah));	// 84239 sub     ah, ah ;~ 28AF:1542
cs=0x28af;eip=0x001544; 	X(PUSH(ax));	// 84240 push    ax ;~ 28AF:1544
cs=0x28af;eip=0x001545; 	X(PUSH(si));	// 84241 push    si ;~ 28AF:1545
cs=0x28af;eip=0x001546; 	T(MOV(ax, 0x501D));	// 84242 mov     ax, 501Dh ;~ 28AF:1546
cs=0x28af;eip=0x001549; 	X(PUSH(ax));	// 84243 push    ax ;~ 28AF:1549
cs=0x28af;eip=0x00154a; 	J(CALLF(nopsub_3219d,0));	// 84244 call    nopsub_3219D ;~ 28AF:154A
cs=0x28af;eip=0x00154f; 	T(ADD(sp, 0x0E));	// 84245 add     sp, 0Eh ;~ 28AF:154F
cs=0x28af;eip=0x001552; 	T(ADD(di, 0x2E));	// 84246 add     di, 2Eh ; '.' ;~ 28AF:1552
cs=0x28af;eip=0x001555; 	X(ADD(*(dw*)(raddr(ss,bp-4)), 0x2E));	// 84247 add     word ptr [bp-4], 2Eh ; '.' ;~ 28AF:1555
cs=0x28af;eip=0x001559; 	X(ADD(*(dw*)(raddr(ss,bp-8)), 0x2E));	// 84248 add     word ptr [bp-8], 2Eh ; '.' ;~ 28AF:1559
cs=0x28af;eip=0x00155d; 	T(INC(si));	// 84249 inc     si ;~ 28AF:155D
cs=0x28af;eip=0x00155e; 	T(CMP(si, 0x10));	// 84250 cmp     si, 10h ;~ 28AF:155E
cs=0x28af;eip=0x001561; 	J(JL(loc_38600));	// 84251 jl      short loc_38600 ;~ 28AF:1561
cs=0x28af;eip=0x001563; 	X(MOV(*(dw*)(raddr(ss,bp-2)), si));	// 84252 mov     [bp-2], si ;~ 28AF:1563
cs=0x28af;eip=0x001566; 	X(POP(si));	// 84253 pop     si ;~ 28AF:1566
cs=0x28af;eip=0x001567; 	X(POP(di));	// 84254 pop     di ;~ 28AF:1567
cs=0x28af;eip=0x001568; 	T(MOV(sp, bp));	// 84255 mov     sp, bp ;~ 28AF:1568
cs=0x28af;eip=0x00156a; 	X(POP(bp));	// 84256 pop     bp ;~ 28AF:156A
cs=0x28af;eip=0x00156b; 	J(RETF(0));	// 84257 retf ;~ 28AF:156B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_385b6: 	goto loc_385b6;
        case m2c::kloc_38600: 	goto loc_38600;
        case m2c::kseg027_14a0_proc: 	goto seg027_14a0_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

