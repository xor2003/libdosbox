/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;
db int_num=0;
    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
sub_10000:
	// 32 
cs=0x1a2;eip=0x000000; 	X(POP(cx));	// 33 pop     cx ;~ 01A2:0000
cs=0x1a2;eip=0x000001; 	X(POP(dx));	// 34 pop     dx ;~ 01A2:0001
cs=0x1a2;eip=0x000002; 	T(MOV(bx, sp));	// 35 mov     bx, sp ;~ 01A2:0002
cs=0x1a2;eip=0x000004; 	T(SUB(bx, ax));	// 36 sub     bx, ax ;~ 01A2:0004
cs=0x1a2;eip=0x000006; 	R(JC(loc_10013));	// 37 jb      short loc_10013 ;~ 01A2:0006
cs=0x1a2;eip=0x000008; 	T(CMP(bx, *(dw*)((&unk_479f6))));	// 38 cmp     bx, word ptr unk_479F6 ;~ 01A2:0008
cs=0x1a2;eip=0x00000c; 	R(JC(loc_10013));	// 39 jb      short loc_10013 ;~ 01A2:000C
cs=0x1a2;eip=0x00000e; 	T(MOV(sp, bx));	// 40 mov     sp, bx ;~ 01A2:000E
cs=0x1a2;eip=0x000010; 	X(PUSH(dx));	// 41 push    dx ;~ 01A2:0010
cs=0x1a2;eip=0x000011; 	X(PUSH(cx));	// 42 push    cx ;~ 01A2:0011
cs=0x1a2;eip=0x000012; 	R(RETF(0));	// 43 retf ;~ 01A2:0012
loc_10013:
	// 4369 
cs=0x1a2;eip=0x000013; 	T(XOR(ax, ax));	// 48 xor     ax, ax ;~ 01A2:0013
cs=0x1a2;eip=0x000015; 	R(JMP(loc_100c4));	// 49 jmp     loc_100C4 ;~ 01A2:0015
start:
	// 59 
cs=0x1a2;eip=0x000018; 	T(MOV(ah, 0x30));	// 60 mov     ah, 30h ;~ 01A2:0018
cs=0x1a2;eip=0x00001a; 	R(_INT(0x21));	// 61 int     21h             ; DOS - GET DOS VERSION ;~ 01A2:001A
cs=0x1a2;eip=0x00001c; 	T(CMP(al, 2));	// 63 cmp     al, 2 ;~ 01A2:001C
cs=0x1a2;eip=0x00001e; 	R(JNC(loc_10022));	// 64 jnb     short loc_10022 ;~ 01A2:001E
cs=0x1a2;eip=0x000020; 	R(_INT(0x20));	// 65 int     20h             ; DOS - PROGRAM TERMINATION ;~ 01A2:0020
loc_10022:
	// 4370 
cs=0x1a2;eip=0x000022; 	T(MOV(di, seg_offset(dseg)));	// 70 mov     di, seg dseg ;~ 01A2:0022
cs=0x1a2;eip=0x000025; 	T(MOV(si, *(dw*)(raddr(ds,2))));	// 71 mov     si, ds:2 ;~ 01A2:0025
cs=0x1a2;eip=0x000029; 	T(SUB(si, di));	// 72 sub     si, di ;~ 01A2:0029
cs=0x1a2;eip=0x00002b; 	T(CMP(si, 0x1000));	// 73 cmp     si, 1000h ;~ 01A2:002B
cs=0x1a2;eip=0x00002f; 	R(JC(loc_10034));	// 74 jb      short loc_10034 ;~ 01A2:002F
cs=0x1a2;eip=0x000031; 	T(MOV(si, 0x1000));	// 75 mov     si, 1000h ;~ 01A2:0031
loc_10034:
	// 4371 
cs=0x1a2;eip=0x000034; 	T(CLI);	// 78 cli ;~ 01A2:0034
cs=0x1a2;eip=0x000035; 	R(MOV(ss, di));	// 79 mov     ss, di ;~ 01A2:0035
cs=0x1a2;eip=0x000037; 	T(ADD(sp, 0x0F83E));	// 81 add     sp, 0F83Eh ;~ 01A2:0037
cs=0x1a2;eip=0x00003b; 	T(STI);	// 82 sti ;~ 01A2:003B
cs=0x1a2;eip=0x00003c; 	R(JNC(loc_10052));	// 83 jnb     short loc_10052 ;~ 01A2:003C
cs=0x1a2;eip=0x00003e; 	X(PUSH(ss));	// 84 push    ss ;~ 01A2:003E
cs=0x1a2;eip=0x00003f; 	X(POP(ds));	// 85 pop     ds ;~ 01A2:003F
cs=0x1a2;eip=0x000040; 	R(CALLF(sub_10164,0));	// 87 call    sub_10164 ;~ 01A2:0040
cs=0x1a2;eip=0x000045; 	T(XOR(ax, ax));	// 88 xor     ax, ax ;~ 01A2:0045
cs=0x1a2;eip=0x000047; 	X(PUSH(ax));	// 89 push    ax ;~ 01A2:0047
cs=0x1a2;eip=0x000048; 	R(CALLF(sub_102c9,0));	// 90 call    sub_102C9 ;~ 01A2:0048
cs=0x1a2;eip=0x00004d; 	T(MOV(ax, 0x4CFF));	// 91 mov     ax, 4CFFh ;~ 01A2:004D
cs=0x1a2;eip=0x000050; 	R(_INT(0x21));	// 92 int     21h             ; DOS - 2+ - QUIT WITH EXIT CODE (EXIT) ;~ 01A2:0050
loc_10052:
	// 4372 
cs=0x1a2;eip=0x000052; 	T(AND(sp, 0x0FFFE));	// 97 and     sp, 0FFFEh ;~ 01A2:0052
cs=0x1a2;eip=0x000055; 	X(MOV(*(dw*)(raddr(ss,0x4E)), sp));	// 98 mov     ss:4Eh, sp ;~ 01A2:0055
cs=0x1a2;eip=0x00005a; 	X(MOV(*(dw*)(raddr(ss,0x4A)), sp));	// 99 mov     ss:4Ah, sp ;~ 01A2:005A
cs=0x1a2;eip=0x00005f; 	T(MOV(ax, si));	// 100 mov     ax, si ;~ 01A2:005F
cs=0x1a2;eip=0x000061; 	T(MOV(cl, 4));	// 101 mov     cl, 4 ;~ 01A2:0061
cs=0x1a2;eip=0x000063; 	T(SHL(ax, cl));	// 102 shl     ax, cl ;~ 01A2:0063
cs=0x1a2;eip=0x000065; 	T(DEC(ax));	// 103 dec     ax ;~ 01A2:0065
cs=0x1a2;eip=0x000066; 	X(MOV(*(dw*)(raddr(ss,0x48)), ax));	// 104 mov     ss:48h, ax ;~ 01A2:0066
cs=0x1a2;eip=0x00006a; 	T(ADD(si, di));	// 105 add     si, di ;~ 01A2:006A
cs=0x1a2;eip=0x00006c; 	X(MOV(*(dw*)(raddr(ds,2)), si));	// 106 mov     ds:2, si ;~ 01A2:006C
cs=0x1a2;eip=0x000070; 	T(MOV(bx, es));	// 107 mov     bx, es ;~ 01A2:0070
cs=0x1a2;eip=0x000072; 	T(SUB(bx, si));	// 108 sub     bx, si ;~ 01A2:0072
cs=0x1a2;eip=0x000074; 	T(NEG(bx));	// 109 neg     bx ;~ 01A2:0074
cs=0x1a2;eip=0x000076; 	T(MOV(ah, 0x4A));	// 110 mov     ah, 4Ah ;~ 01A2:0076
cs=0x1a2;eip=0x000078; 	R(_INT(0x21));	// 111 int     21h             ; DOS - 2+ - ADJUST MEMORY BLOCK SIZE (SETBLOCK) ;~ 01A2:0078
cs=0x1a2;eip=0x00007a; 	X(MOV(*(dw*)(raddr(ss,0x0AA)), ds));	// 114 mov     word ptr ss:0AAh, ds ;~ 01A2:007A
cs=0x1a2;eip=0x00007f; 	X(PUSH(ss));	// 115 push    ss ;~ 01A2:007F
cs=0x1a2;eip=0x000080; 	X(POP(es));	// 116 pop     es ;~ 01A2:0080
cs=0x1a2;eip=0x000081; 	T(CLD);	// 118 cld ;~ 01A2:0081
cs=0x1a2;eip=0x000082; 	T(MOV(di, 0x0C44E));	// 119 mov     di, 0C44Eh ;~ 01A2:0082
cs=0x1a2;eip=0x000085; 	T(MOV(cx, 0x0F840));	// 120 mov     cx, 0F840h ;~ 01A2:0085
cs=0x1a2;eip=0x000088; 	T(SUB(cx, di));	// 121 sub     cx, di ;~ 01A2:0088
cs=0x1a2;eip=0x00008a; 	T(XOR(ax, ax));	// 122 xor     ax, ax ;~ 01A2:008A
	// 123 rep stosb ;~ 01A2:008C
cs=0x1a2;eip=0x00008c; 	X(	REP STOSB);	// 123 rep stosb ;~ 01A2:008C
cs=0x1a2;eip=0x00008e; 	X(PUSH(ss));	// 124 push    ss ;~ 01A2:008E
cs=0x1a2;eip=0x00008f; 	X(POP(ds));	// 125 pop     ds ;~ 01A2:008F
cs=0x1a2;eip=0x000090; 	R(CALLF(sub_100d8,0));	// 126 call    sub_100D8 ;~ 01A2:0090
cs=0x1a2;eip=0x000095; 	X(PUSH(ss));	// 127 push    ss ;~ 01A2:0095
cs=0x1a2;eip=0x000096; 	X(POP(ds));	// 128 pop     ds ;~ 01A2:0096
cs=0x1a2;eip=0x000097; 	R(CALLF(sub_1017e,0));	// 129 call    far ptr sub_1017E ;~ 01A2:0097
cs=0x1a2;eip=0x00009c; 	T(XOR(bp, bp));	// 130 xor     bp, bp ;~ 01A2:009C
cs=0x1a2;eip=0x00009e; 	X(PUSH(*(dw*)((&unk_47a7b))));	// 131 push    word ptr unk_47A7B ;~ 01A2:009E
cs=0x1a2;eip=0x0000a2; 	X(PUSH(*(dw*)((&unk_47a79))));	// 132 push    word ptr unk_47A79 ;~ 01A2:00A2
cs=0x1a2;eip=0x0000a6; 	X(PUSH(*(dw*)((&unk_47a77))));	// 133 push    word ptr unk_47A77 ;~ 01A2:00A6
cs=0x1a2;eip=0x0000aa; 	R(CALLF(sub_106cc,0));	// 134 call    sub_106CC ;~ 01A2:00AA
cs=0x1a2;eip=0x0000af; 	X(PUSH(ax));	// 135 push    ax ;~ 01A2:00AF
cs=0x1a2;eip=0x0000b0; 	R(CALLF(sub_100f9,0));	// 136 call    far ptr sub_100F9 ;~ 01A2:00B0
cs=0x1a2;eip=0x0000b5; 	T(MOV(ax, seg_offset(dseg)));	// 138 mov     ax, seg dseg ;~ 01A2:00B5
cs=0x1a2;eip=0x0000b8; 	T(MOV(ds, ax));	// 139 mov     ds, ax ;~ 01A2:00B8
cs=0x1a2;eip=0x0000ba; 	T(MOV(ax, 3));	// 140 mov     ax, 3 ;~ 01A2:00BA
cs=0x1a2;eip=0x0000bd; 	X(MOV(*(dw*)((&unk_479fc)), 0x0F9));	// 141 mov     word ptr ss:unk_479FC, 0F9h ; 'ù' ;~ 01A2:00BD
loc_100c4:
	// 4373 
cs=0x1a2;eip=0x0000c4; 	X(PUSH(ax));	// 144 push    ax ;~ 01A2:00C4
cs=0x1a2;eip=0x0000c5; 	R(CALLF(sub_10164,0));	// 145 call    sub_10164 ;~ 01A2:00C5
cs=0x1a2;eip=0x0000ca; 	R(CALLF(sub_102c9,0));	// 146 call    sub_102C9 ;~ 01A2:00CA
cs=0x1a2;eip=0x0000cf; 	T(MOV(ax, 0x0FF));	// 147 mov     ax, 0FFh ;~ 01A2:00CF
cs=0x1a2;eip=0x0000d2; 	X(PUSH(ax));	// 148 push    ax ;~ 01A2:00D2
cs=0x1a2;eip=0x0000d3; 	X(PUSH(cs));	// 149 push    cs ;~ 01A2:00D3
cs=0x1a2;eip=0x0000d4; 	R(CALL(__dispatch_call,*(dw*)((&unk_479fc))));	// 150 call    word ptr unk_479FC ;~ 01A2:00D4
sub_100d8:
	// 157 
cs=0x1a2;eip=0x0000d8; 	T(MOV(ah, 0x30));	// 158 mov     ah, 30h ;~ 01A2:00D8
cs=0x1a2;eip=0x0000da; 	R(_INT(0x21));	// 159 int     21h             ; DOS - GET DOS VERSION ;~ 01A2:00DA
cs=0x1a2;eip=0x0000dc; 	X(MOV(*(dw*)(raddr(ds,0x0AC)), ax));	// 161 mov     ds:0ACh, ax ;~ 01A2:00DC
cs=0x1a2;eip=0x0000df; 	T(MOV(ax, 0x3500));	// 162 mov     ax, 3500h ;~ 01A2:00DF
cs=0x1a2;eip=0x0000e2; 	R(_INT(0x21));	// 163 int     21h             ; DOS - 2+ - GET INTERRUPT VECTOR ;~ 01A2:00E2
cs=0x1a2;eip=0x0000e4; 	X(MOV(*(dw*)(raddr(ds,0x0A0)), bx));	// 166 mov     ds:0A0h, bx ;~ 01A2:00E4
cs=0x1a2;eip=0x0000e8; 	X(MOV(*(dw*)(raddr(ds,0x0A2)), es));	// 167 mov     word ptr ds:0A2h, es ;~ 01A2:00E8
cs=0x1a2;eip=0x0000ec; 	X(PUSH(cs));	// 168 push    cs ;~ 01A2:00EC
cs=0x1a2;eip=0x0000ed; 	X(POP(ds));	// 169 pop     ds ;~ 01A2:00ED
cs=0x1a2;eip=0x0000ee; 	T(MOV(ax, 0x2500));	// 171 mov     ax, 2500h ;~ 01A2:00EE
cs=0x1a2;eip=0x0000f1; 	T(MOV(dx, 0x0B5));	// 172 mov     dx, 0B5h ; 'µ' ;~ 01A2:00F1
cs=0x1a2;eip=0x0000f4; 	R(_INT(0x21));	// 173 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 01A2:00F4
cs=0x1a2;eip=0x0000f6; 	X(PUSH(ss));	// 176 push    ss ;~ 01A2:00F6
cs=0x1a2;eip=0x0000f7; 	X(POP(ds));	// 177 pop     ds ;~ 01A2:00F7
cs=0x1a2;eip=0x0000f8; 	R(RETF(0));	// 179 retf ;~ 01A2:00F8
sub_100f9:
	// 187 
cs=0x1a2;eip=0x0000f9; 	X(PUSH(bp));	// 189 push    bp ;~ 01A2:00F9
cs=0x1a2;eip=0x0000fa; 	T(MOV(bp, sp));	// 190 mov     bp, sp ;~ 01A2:00FA
cs=0x1a2;eip=0x0000fc; 	R(JMP(loc_10101));	// 191 jmp     short loc_10101 ;~ 01A2:00FC
sub_100fe:
	// 199 
#undef arg_2
#define arg_2 6
	// 201 arg_2           = word ptr  6 ;~ 01A2:00FE
cs=0x1a2;eip=0x0000fe; 	X(PUSH(bp));	// 203 push    bp ;~ 01A2:00FE
cs=0x1a2;eip=0x0000ff; 	T(MOV(bp, sp));	// 204 mov     bp, sp ;~ 01A2:00FF
loc_10101:
	// 4374 
cs=0x1a2;eip=0x000101; 	T(MOV(si, 0x0C39A));	// 207 mov     si, 0C39Ah ;~ 01A2:0101
cs=0x1a2;eip=0x000104; 	T(MOV(di, 0x0C39A));	// 208 mov     di, 0C39Ah ;~ 01A2:0104
cs=0x1a2;eip=0x000107; 	R(CALL(sub_10151,0));	// 209 call    sub_10151 ;~ 01A2:0107
cs=0x1a2;eip=0x00010a; 	T(MOV(si, 0x0C39A));	// 210 mov     si, 0C39Ah ;~ 01A2:010A
cs=0x1a2;eip=0x00010d; 	T(MOV(di, 0x0C39A));	// 211 mov     di, 0C39Ah ;~ 01A2:010D
cs=0x1a2;eip=0x000110; 	R(CALL(sub_10151,0));	// 212 call    sub_10151 ;~ 01A2:0110
cs=0x1a2;eip=0x000113; 	R(CALLF(sub_10278,0));	// 213 call    sub_10278 ;~ 01A2:0113
cs=0x1a2;eip=0x000118; 	T(OR(ax, ax));	// 214 or      ax, ax ;~ 01A2:0118
cs=0x1a2;eip=0x00011a; 	R(JZ(loc_10127));	// 215 jz      short loc_10127 ;~ 01A2:011A
cs=0x1a2;eip=0x00011c; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 216 cmp     [bp+arg_2], 0 ;~ 01A2:011C
cs=0x1a2;eip=0x000120; 	R(JNZ(loc_10127));	// 217 jnz     short loc_10127 ;~ 01A2:0120
cs=0x1a2;eip=0x000122; 	X(MOV(*(dw*)(raddr(ss,bp+arg_2)), 0x0FF));	// 218 mov     [bp+arg_2], 0FFh ;~ 01A2:0122
loc_10127:
	// 4375 
cs=0x1a2;eip=0x000127; 	T(MOV(cx, 0x0F));	// 222 mov     cx, 0Fh ;~ 01A2:0127
cs=0x1a2;eip=0x00012a; 	T(MOV(bx, 5));	// 223 mov     bx, 5 ;~ 01A2:012A
loc_1012d:
	// 4376 
cs=0x1a2;eip=0x00012d; 	T(TEST(*(raddr(ds,bx+0x0B3)), 1));	// 226 test    byte ptr [bx+0B3h], 1 ;~ 01A2:012D
cs=0x1a2;eip=0x000132; 	R(JZ(loc_10138));	// 227 jz      short loc_10138 ;~ 01A2:0132
cs=0x1a2;eip=0x000134; 	T(MOV(ah, 0x3E));	// 228 mov     ah, 3Eh ;~ 01A2:0134
cs=0x1a2;eip=0x000136; 	R(_INT(0x21));	// 229 int     21h             ; DOS - 2+ - CLOSE A FILE WITH HANDLE ;~ 01A2:0136
loc_10138:
	// 4377 
cs=0x1a2;eip=0x000138; 	T(INC(bx));	// 233 inc     bx ;~ 01A2:0138
cs=0x1a2;eip=0x000139; 	R(LOOP(loc_1012d));	// 234 loop    loc_1012D ;~ 01A2:0139
cs=0x1a2;eip=0x00013b; 	R(CALL(sub_10145,0));	// 235 call    sub_10145 ;~ 01A2:013B
cs=0x1a2;eip=0x00013e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 236 mov     ax, [bp+arg_2] ;~ 01A2:013E
cs=0x1a2;eip=0x000141; 	T(MOV(ah, 0x4C));	// 237 mov     ah, 4Ch ;~ 01A2:0141
cs=0x1a2;eip=0x000143; 	R(_INT(0x21));	// 238 int     21h             ; DOS - 2+ - QUIT WITH EXIT CODE (EXIT) ;~ 01A2:0143
sub_10145:
	// 245 
cs=0x1a2;eip=0x000145; 	X(PUSH(ds));	// 246 push    ds ;~ 01A2:0145
cs=0x1a2;eip=0x000146; 	T(LDS(dx, *(dd*)((&unk_47a50))));	// 247 lds     dx, dword ptr unk_47A50 ;~ 01A2:0146
cs=0x1a2;eip=0x00014a; 	T(MOV(ax, 0x2500));	// 248 mov     ax, 2500h ;~ 01A2:014A
cs=0x1a2;eip=0x00014d; 	R(_INT(0x21));	// 249 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 01A2:014D
cs=0x1a2;eip=0x00014f; 	X(POP(ds));	// 252 pop     ds ;~ 01A2:014F
cs=0x1a2;eip=0x000150; 	R(RETN(0));	// 253 retn ;~ 01A2:0150
sub_10151:
	// 260 
cs=0x1a2;eip=0x000151; 	T(CMP(si, di));	// 262 cmp     si, di ;~ 01A2:0151
cs=0x1a2;eip=0x000153; 	R(JNC(locret_10163));	// 263 jnb     short locret_10163 ;~ 01A2:0153
cs=0x1a2;eip=0x000155; 	T(SUB(di, 4));	// 264 sub     di, 4 ;~ 01A2:0155
cs=0x1a2;eip=0x000158; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 265 mov     ax, [di] ;~ 01A2:0158
cs=0x1a2;eip=0x00015a; 	T(OR(ax, *(dw*)(raddr(ds,di+2))));	// 266 or      ax, [di+2] ;~ 01A2:015A
cs=0x1a2;eip=0x00015d; 	R(JZ(sub_10151));	// 267 jz      short sub_10151 ;~ 01A2:015D
cs=0x1a2;eip=0x00015f; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ds,di))));	// 268 call    dword ptr [di] ;~ 01A2:015F
cs=0x1a2;eip=0x000161; 	R(JMP(sub_10151));	// 269 jmp     short sub_10151 ;~ 01A2:0161
locret_10163:
	// 4378 
cs=0x1a2;eip=0x000163; 	R(RETN(0));	// 273 retn ;~ 01A2:0163
sub_10164:
	// 281 
cs=0x1a2;eip=0x000164; 	X(PUSH(bp));	// 283 push    bp ;~ 01A2:0164
cs=0x1a2;eip=0x000165; 	T(MOV(bp, sp));	// 284 mov     bp, sp ;~ 01A2:0165
cs=0x1a2;eip=0x000167; 	T(MOV(ax, 0x0FC));	// 285 mov     ax, 0FCh ; 'ü' ;~ 01A2:0167
cs=0x1a2;eip=0x00016a; 	X(PUSH(ax));	// 286 push    ax ;~ 01A2:016A
cs=0x1a2;eip=0x00016b; 	R(CALLF(sub_102c9,0));	// 287 call    sub_102C9 ;~ 01A2:016B
cs=0x1a2;eip=0x000170; 	T(MOV(ax, 0x0FF));	// 288 mov     ax, 0FFh ;~ 01A2:0170
cs=0x1a2;eip=0x000173; 	X(PUSH(ax));	// 289 push    ax ;~ 01A2:0173
cs=0x1a2;eip=0x000174; 	R(CALLF(sub_102c9,0));	// 290 call    sub_102C9 ;~ 01A2:0174
cs=0x1a2;eip=0x000179; 	T(MOV(sp, bp));	// 291 mov     sp, bp ;~ 01A2:0179
cs=0x1a2;eip=0x00017b; 	X(POP(bp));	// 292 pop     bp ;~ 01A2:017B
cs=0x1a2;eip=0x00017c; 	R(RETF(0));	// 293 retf ;~ 01A2:017C
sub_1017e:
	// 302 
cs=0x1a2;eip=0x00017e; 	X(POP(word_47a84));	// 303 pop     word_47A84 ;~ 01A2:017E
cs=0x1a2;eip=0x000182; 	X(POP(word_47a86));	// 304 pop     word_47A86 ;~ 01A2:0182
cs=0x1a2;eip=0x000186; 	T(MOV(dx, 2));	// 305 mov     dx, 2 ;~ 01A2:0186
cs=0x1a2;eip=0x000189; 	T(MOV(di, 1));	// 306 mov     di, 1 ;~ 01A2:0189
cs=0x1a2;eip=0x00018c; 	T(MOV(si, 0x81));	// 307 mov     si, 81h ; '' ;~ 01A2:018C
cs=0x1a2;eip=0x00018f; 	T(MOV(ds, *(dw*)((&unk_47a5a))));	// 308 mov     ds, word ptr unk_47A5A ;~ 01A2:018F
loc_10193:
	// 4379 
cs=0x1a2;eip=0x000193; 	T(LODSB);	// 312 lodsb ;~ 01A2:0193
cs=0x1a2;eip=0x000194; 	T(CMP(al, 0x20));	// 313 cmp     al, 20h ; ' ' ;~ 01A2:0194
cs=0x1a2;eip=0x000196; 	R(JZ(loc_10193));	// 314 jz      short loc_10193 ;~ 01A2:0196
cs=0x1a2;eip=0x000198; 	T(CMP(al, 9));	// 315 cmp     al, 9 ;~ 01A2:0198
cs=0x1a2;eip=0x00019a; 	R(JZ(loc_10193));	// 316 jz      short loc_10193 ;~ 01A2:019A
cs=0x1a2;eip=0x00019c; 	T(CMP(al, 0x0D));	// 317 cmp     al, 0Dh ;~ 01A2:019C
cs=0x1a2;eip=0x00019e; 	R(JZ(loc_101ba));	// 318 jz      short loc_101BA ;~ 01A2:019E
cs=0x1a2;eip=0x0001a0; 	T(OR(al, al));	// 319 or      al, al ;~ 01A2:01A0
cs=0x1a2;eip=0x0001a2; 	R(JZ(loc_101ba));	// 320 jz      short loc_101BA ;~ 01A2:01A2
cs=0x1a2;eip=0x0001a4; 	T(INC(di));	// 321 inc     di ;~ 01A2:01A4
cs=0x1a2;eip=0x0001a5; 	T(DEC(si));	// 322 dec     si ;~ 01A2:01A5
loc_101a6:
	// 4380 
cs=0x1a2;eip=0x0001a6; 	T(LODSB);	// 325 lodsb ;~ 01A2:01A6
cs=0x1a2;eip=0x0001a7; 	T(CMP(al, 0x20));	// 326 cmp     al, 20h ; ' ' ;~ 01A2:01A7
cs=0x1a2;eip=0x0001a9; 	R(JZ(loc_10193));	// 327 jz      short loc_10193 ;~ 01A2:01A9
cs=0x1a2;eip=0x0001ab; 	T(CMP(al, 9));	// 328 cmp     al, 9 ;~ 01A2:01AB
cs=0x1a2;eip=0x0001ad; 	R(JZ(loc_10193));	// 329 jz      short loc_10193 ;~ 01A2:01AD
cs=0x1a2;eip=0x0001af; 	T(CMP(al, 0x0D));	// 330 cmp     al, 0Dh ;~ 01A2:01AF
cs=0x1a2;eip=0x0001b1; 	R(JZ(loc_101ba));	// 331 jz      short loc_101BA ;~ 01A2:01B1
cs=0x1a2;eip=0x0001b3; 	T(OR(al, al));	// 332 or      al, al ;~ 01A2:01B3
cs=0x1a2;eip=0x0001b5; 	R(JZ(loc_101ba));	// 333 jz      short loc_101BA ;~ 01A2:01B5
cs=0x1a2;eip=0x0001b7; 	T(INC(dx));	// 334 inc     dx ;~ 01A2:01B7
cs=0x1a2;eip=0x0001b8; 	R(JMP(loc_101a6));	// 335 jmp     short loc_101A6 ;~ 01A2:01B8
loc_101ba:
	// 4381 
cs=0x1a2;eip=0x0001ba; 	X(PUSH(ss));	// 340 push    ss ;~ 01A2:01BA
cs=0x1a2;eip=0x0001bb; 	X(POP(ds));	// 341 pop     ds ;~ 01A2:01BB
cs=0x1a2;eip=0x0001bc; 	X(MOV(*(dw*)((&unk_47a77)), di));	// 342 mov     word ptr unk_47A77, di ;~ 01A2:01BC
cs=0x1a2;eip=0x0001c0; 	T(ADD(dx, di));	// 343 add     dx, di ;~ 01A2:01C0
cs=0x1a2;eip=0x0001c2; 	T(INC(di));	// 344 inc     di ;~ 01A2:01C2
cs=0x1a2;eip=0x0001c3; 	T(SHL(di, 1));	// 345 shl     di, 1 ;~ 01A2:01C3
cs=0x1a2;eip=0x0001c5; 	T(ADD(dx, di));	// 346 add     dx, di ;~ 01A2:01C5
cs=0x1a2;eip=0x0001c7; 	T(AND(dl, 0x0FE));	// 347 and     dl, 0FEh ;~ 01A2:01C7
cs=0x1a2;eip=0x0001ca; 	T(SUB(sp, dx));	// 348 sub     sp, dx ;~ 01A2:01CA
cs=0x1a2;eip=0x0001cc; 	T(MOV(ax, sp));	// 349 mov     ax, sp ;~ 01A2:01CC
cs=0x1a2;eip=0x0001ce; 	X(MOV(*(dw*)((&unk_47a79)), ax));	// 350 mov     word ptr unk_47A79, ax ;~ 01A2:01CE
cs=0x1a2;eip=0x0001d1; 	T(MOV(bx, ax));	// 351 mov     bx, ax ;~ 01A2:01D1
cs=0x1a2;eip=0x0001d3; 	T(ADD(di, bx));	// 352 add     di, bx ;~ 01A2:01D3
cs=0x1a2;eip=0x0001d5; 	X(PUSH(ss));	// 353 push    ss ;~ 01A2:01D5
cs=0x1a2;eip=0x0001d6; 	X(POP(es));	// 354 pop     es ;~ 01A2:01D6
cs=0x1a2;eip=0x0001d7; 	X(MOV(*(dw*)(raddr(ss,bx)), di));	// 355 mov     ss:[bx], di ;~ 01A2:01D7
cs=0x1a2;eip=0x0001da; 	T(INC(bx));	// 356 inc     bx ;~ 01A2:01DA
cs=0x1a2;eip=0x0001db; 	T(INC(bx));	// 357 inc     bx ;~ 01A2:01DB
cs=0x1a2;eip=0x0001dc; 	T(LDS(si, off_47a7d));	// 358 lds     si, off_47A7D ;~ 01A2:01DC
loc_101e0:
	// 4382 
cs=0x1a2;eip=0x0001e0; 	T(LODSB);	// 361 lodsb ;~ 01A2:01E0
cs=0x1a2;eip=0x0001e1; 	X(STOSB);	// 362 stosb ;~ 01A2:01E1
cs=0x1a2;eip=0x0001e2; 	T(OR(al, al));	// 363 or      al, al ;~ 01A2:01E2
cs=0x1a2;eip=0x0001e4; 	R(JNZ(loc_101e0));	// 364 jnz     short loc_101E0 ;~ 01A2:01E4
cs=0x1a2;eip=0x0001e6; 	T(MOV(si, 0x81));	// 365 mov     si, 81h ; '' ;~ 01A2:01E6
cs=0x1a2;eip=0x0001e9; 	T(MOV(ds, *(dw*)((&unk_47a5a))));	// 366 mov     ds, word ptr ss:unk_47A5A ;~ 01A2:01E9
cs=0x1a2;eip=0x0001ee; 	R(JMP(loc_101f3));	// 367 jmp     short loc_101F3 ;~ 01A2:01EE
loc_101f0:
	// 4383 
cs=0x1a2;eip=0x0001f0; 	T(XOR(ax, ax));	// 372 xor     ax, ax ;~ 01A2:01F0
cs=0x1a2;eip=0x0001f2; 	X(STOSB);	// 373 stosb ;~ 01A2:01F2
loc_101f3:
	// 4384 
cs=0x1a2;eip=0x0001f3; 	T(LODSB);	// 377 lodsb ;~ 01A2:01F3
cs=0x1a2;eip=0x0001f4; 	T(CMP(al, 0x20));	// 378 cmp     al, 20h ; ' ' ;~ 01A2:01F4
cs=0x1a2;eip=0x0001f6; 	R(JZ(loc_101f3));	// 379 jz      short loc_101F3 ;~ 01A2:01F6
cs=0x1a2;eip=0x0001f8; 	T(CMP(al, 9));	// 380 cmp     al, 9 ;~ 01A2:01F8
cs=0x1a2;eip=0x0001fa; 	R(JZ(loc_101f3));	// 381 jz      short loc_101F3 ;~ 01A2:01FA
cs=0x1a2;eip=0x0001fc; 	T(CMP(al, 0x0D));	// 382 cmp     al, 0Dh ;~ 01A2:01FC
cs=0x1a2;eip=0x0001fe; 	R(JNZ(loc_10203));	// 383 jnz     short loc_10203 ;~ 01A2:01FE
cs=0x1a2;eip=0x000200; 	R(JMP(loc_10227));	// 384 jmp     short loc_10227 ;~ 01A2:0200
loc_10203:
	// 4385 
cs=0x1a2;eip=0x000203; 	T(OR(al, al));	// 390 or      al, al ;~ 01A2:0203
cs=0x1a2;eip=0x000205; 	R(JNZ(loc_1020a));	// 391 jnz     short loc_1020A ;~ 01A2:0205
cs=0x1a2;eip=0x000207; 	R(JMP(loc_10227));	// 392 jmp     short loc_10227 ;~ 01A2:0207
loc_1020a:
	// 4386 
cs=0x1a2;eip=0x00020a; 	X(MOV(*(dw*)(raddr(ss,bx)), di));	// 397 mov     ss:[bx], di ;~ 01A2:020A
cs=0x1a2;eip=0x00020d; 	T(INC(bx));	// 398 inc     bx ;~ 01A2:020D
cs=0x1a2;eip=0x00020e; 	T(INC(bx));	// 399 inc     bx ;~ 01A2:020E
cs=0x1a2;eip=0x00020f; 	T(DEC(si));	// 400 dec     si ;~ 01A2:020F
loc_10210:
	// 4387 
cs=0x1a2;eip=0x000210; 	T(LODSB);	// 403 lodsb ;~ 01A2:0210
cs=0x1a2;eip=0x000211; 	T(CMP(al, 0x20));	// 404 cmp     al, 20h ; ' ' ;~ 01A2:0211
cs=0x1a2;eip=0x000213; 	R(JZ(loc_101f0));	// 405 jz      short loc_101F0 ;~ 01A2:0213
cs=0x1a2;eip=0x000215; 	T(CMP(al, 9));	// 406 cmp     al, 9 ;~ 01A2:0215
cs=0x1a2;eip=0x000217; 	R(JZ(loc_101f0));	// 407 jz      short loc_101F0 ;~ 01A2:0217
cs=0x1a2;eip=0x000219; 	T(CMP(al, 0x0D));	// 408 cmp     al, 0Dh ;~ 01A2:0219
cs=0x1a2;eip=0x00021b; 	R(JZ(loc_10224));	// 409 jz      short loc_10224 ;~ 01A2:021B
cs=0x1a2;eip=0x00021d; 	T(OR(al, al));	// 410 or      al, al ;~ 01A2:021D
cs=0x1a2;eip=0x00021f; 	R(JZ(loc_10224));	// 411 jz      short loc_10224 ;~ 01A2:021F
cs=0x1a2;eip=0x000221; 	X(STOSB);	// 412 stosb ;~ 01A2:0221
cs=0x1a2;eip=0x000222; 	R(JMP(loc_10210));	// 413 jmp     short loc_10210 ;~ 01A2:0222
loc_10224:
	// 4388 
cs=0x1a2;eip=0x000224; 	T(XOR(ax, ax));	// 418 xor     ax, ax ;~ 01A2:0224
cs=0x1a2;eip=0x000226; 	X(STOSB);	// 419 stosb ;~ 01A2:0226
loc_10227:
	// 4389 
cs=0x1a2;eip=0x000227; 	X(PUSH(ss));	// 423 push    ss ;~ 01A2:0227
cs=0x1a2;eip=0x000228; 	X(POP(ds));	// 424 pop     ds ;~ 01A2:0228
cs=0x1a2;eip=0x000229; 	X(MOV(*(dw*)(raddr(ds,bx)), 0));	// 425 mov     word ptr [bx], 0 ;~ 01A2:0229
cs=0x1a2;eip=0x00022d; __disp=*(dd*)(((db*)&word_47a84));
return;
	R(JMP(__dispatch_call));	// 426 jmp     dword ptr word_47A84 ;~ 01A2:022D
sub_10240:
	// 435 
cs=0x1a2;eip=0x000240; 	T(CMP(cl, 8));	// 437 cmp     cl, 8 ;~ 01A2:0240
cs=0x1a2;eip=0x000243; 	R(JNZ(loc_1024f));	// 438 jnz     short loc_1024F ;~ 01A2:0243
cs=0x1a2;eip=0x000245; 	T(MOV(al, ah));	// 439 mov     al, ah ;~ 01A2:0245
cs=0x1a2;eip=0x000247; 	T(MOV(ah, dl));	// 440 mov     ah, dl ;~ 01A2:0247
cs=0x1a2;eip=0x000249; 	T(MOV(dl, dh));	// 441 mov     dl, dh ;~ 01A2:0249
cs=0x1a2;eip=0x00024b; 	T(XCHG(ax, dx));	// 442 xchg    ax, dx ;~ 01A2:024B
cs=0x1a2;eip=0x00024c; 	T(CBW);	// 443 cbw ;~ 01A2:024C
cs=0x1a2;eip=0x00024d; 	T(XCHG(ax, dx));	// 444 xchg    ax, dx ;~ 01A2:024D
cs=0x1a2;eip=0x00024e; 	R(RETF(0));	// 445 retf ;~ 01A2:024E
loc_1024f:
	// 4390 
cs=0x1a2;eip=0x00024f; 	T(XOR(ch, ch));	// 449 xor     ch, ch ;~ 01A2:024F
cs=0x1a2;eip=0x000251; 	R(JCXZ(locret_10273));	// 450 jcxz    short locret_10273 ;~ 01A2:0251
cs=0x1a2;eip=0x000253; 	T(CMP(cl, 0x20));	// 451 cmp     cl, 20h ; ' ' ;~ 01A2:0253
cs=0x1a2;eip=0x000256; 	R(JNC(loc_10274));	// 452 jnb     short loc_10274 ;~ 01A2:0256
loc_10258:
	// 4391 
cs=0x1a2;eip=0x000258; 	T(SAR(dx, 1));	// 456 sar     dx, 1 ;~ 01A2:0258
cs=0x1a2;eip=0x00025a; 	T(RCR(ax, 1));	// 457 rcr     ax, 1 ;~ 01A2:025A
cs=0x1a2;eip=0x00025c; 	T(DEC(cx));	// 458 dec     cx ;~ 01A2:025C
cs=0x1a2;eip=0x00025d; 	R(JZ(locret_10273));	// 459 jz      short locret_10273 ;~ 01A2:025D
cs=0x1a2;eip=0x00025f; 	T(SAR(dx, 1));	// 460 sar     dx, 1 ;~ 01A2:025F
cs=0x1a2;eip=0x000261; 	T(RCR(ax, 1));	// 461 rcr     ax, 1 ;~ 01A2:0261
cs=0x1a2;eip=0x000263; 	T(DEC(cx));	// 462 dec     cx ;~ 01A2:0263
cs=0x1a2;eip=0x000264; 	R(JZ(locret_10273));	// 463 jz      short locret_10273 ;~ 01A2:0264
cs=0x1a2;eip=0x000266; 	T(SAR(dx, 1));	// 464 sar     dx, 1 ;~ 01A2:0266
cs=0x1a2;eip=0x000268; 	T(RCR(ax, 1));	// 465 rcr     ax, 1 ;~ 01A2:0268
cs=0x1a2;eip=0x00026a; 	T(DEC(cx));	// 466 dec     cx ;~ 01A2:026A
cs=0x1a2;eip=0x00026b; 	R(JZ(locret_10273));	// 467 jz      short locret_10273 ;~ 01A2:026B
cs=0x1a2;eip=0x00026d; 	T(SAR(dx, 1));	// 468 sar     dx, 1 ;~ 01A2:026D
cs=0x1a2;eip=0x00026f; 	T(RCR(ax, 1));	// 469 rcr     ax, 1 ;~ 01A2:026F
cs=0x1a2;eip=0x000271; 	R(LOOP(loc_10258));	// 470 loop    loc_10258 ;~ 01A2:0271
locret_10273:
	// 4392 
cs=0x1a2;eip=0x000273; 	R(RETF(0));	// 474 retf ;~ 01A2:0273
loc_10274:
	// 4393 
cs=0x1a2;eip=0x000274; 	T(MOV(cl, 0x20));	// 478 mov     cl, 20h ; ' ' ;~ 01A2:0274
cs=0x1a2;eip=0x000276; 	R(JMP(loc_10258));	// 479 jmp     short loc_10258 ;~ 01A2:0276
sub_10278:
	// 486 
cs=0x1a2;eip=0x000278; 	X(PUSH(si));	// 487 push    si ;~ 01A2:0278
cs=0x1a2;eip=0x000279; 	T(XOR(si, si));	// 488 xor     si, si ;~ 01A2:0279
cs=0x1a2;eip=0x00027b; 	T(MOV(cx, 0x42));	// 489 mov     cx, 42h ; 'B' ;~ 01A2:027B
cs=0x1a2;eip=0x00027e; 	T(XOR(ah, ah));	// 490 xor     ah, ah ;~ 01A2:027E
cs=0x1a2;eip=0x000280; 	T(CLD);	// 491 cld ;~ 01A2:0280
loc_10281:
	// 4394 
cs=0x1a2;eip=0x000281; 	T(LODSB);	// 494 lodsb ;~ 01A2:0281
cs=0x1a2;eip=0x000282; 	T(XOR(ah, al));	// 495 xor     ah, al ;~ 01A2:0282
cs=0x1a2;eip=0x000284; 	R(LOOP(loc_10281));	// 496 loop    loc_10281 ;~ 01A2:0284
cs=0x1a2;eip=0x000286; 	T(XOR(ah, 0x55));	// 497 xor     ah, 55h ;~ 01A2:0286
cs=0x1a2;eip=0x000289; 	R(JZ(loc_1029c));	// 498 jz      short loc_1029C ;~ 01A2:0289
cs=0x1a2;eip=0x00028b; 	R(CALLF(sub_10164,0));	// 499 call    sub_10164 ;~ 01A2:028B
cs=0x1a2;eip=0x000290; 	T(MOV(ax, 1));	// 500 mov     ax, 1 ;~ 01A2:0290
cs=0x1a2;eip=0x000293; 	X(PUSH(ax));	// 501 push    ax ;~ 01A2:0293
cs=0x1a2;eip=0x000294; 	R(CALLF(sub_102c9,0));	// 502 call    sub_102C9 ;~ 01A2:0294
cs=0x1a2;eip=0x000299; 	T(MOV(ax, 1));	// 503 mov     ax, 1 ;~ 01A2:0299
loc_1029c:
	// 4395 
cs=0x1a2;eip=0x00029c; 	X(POP(si));	// 506 pop     si ;~ 01A2:029C
cs=0x1a2;eip=0x00029d; 	R(RETF(0));	// 507 retf ;~ 01A2:029D
sub_1029e:
	// 515 
#undef arg_0
#define arg_0 6
	// 517 arg_0           = word ptr  6 ;~ 01A2:029E
cs=0x1a2;eip=0x00029e; 	X(PUSH(bp));	// 519 push    bp ;~ 01A2:029E
cs=0x1a2;eip=0x00029f; 	T(MOV(bp, sp));	// 520 mov     bp, sp ;~ 01A2:029F
cs=0x1a2;eip=0x0002a1; 	X(PUSH(si));	// 521 push    si ;~ 01A2:02A1
cs=0x1a2;eip=0x0002a2; 	X(PUSH(di));	// 522 push    di ;~ 01A2:02A2
cs=0x1a2;eip=0x0002a3; 	X(PUSH(ds));	// 523 push    ds ;~ 01A2:02A3
cs=0x1a2;eip=0x0002a4; 	X(POP(es));	// 524 pop     es ;~ 01A2:02A4
cs=0x1a2;eip=0x0002a5; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_0))));	// 525 mov     dx, [bp+arg_0] ;~ 01A2:02A5
cs=0x1a2;eip=0x0002a8; 	T(MOV(si, 0x0C3A2));	// 526 mov     si, 0C3A2h ;~ 01A2:02A8
loc_102ab:
	// 4396 
cs=0x1a2;eip=0x0002ab; 	T(LODSW);	// 529 lodsw ;~ 01A2:02AB
cs=0x1a2;eip=0x0002ac; 	T(CMP(ax, dx));	// 530 cmp     ax, dx ;~ 01A2:02AC
cs=0x1a2;eip=0x0002ae; 	R(JZ(loc_102c0));	// 531 jz      short loc_102C0 ;~ 01A2:02AE
cs=0x1a2;eip=0x0002b0; 	T(INC(ax));	// 532 inc     ax ;~ 01A2:02B0
cs=0x1a2;eip=0x0002b1; 	T(XCHG(ax, si));	// 533 xchg    ax, si ;~ 01A2:02B1
cs=0x1a2;eip=0x0002b2; 	R(JZ(loc_102c0));	// 534 jz      short loc_102C0 ;~ 01A2:02B2
cs=0x1a2;eip=0x0002b4; 	T(XCHG(ax, di));	// 535 xchg    ax, di ;~ 01A2:02B4
cs=0x1a2;eip=0x0002b5; 	T(XOR(ax, ax));	// 536 xor     ax, ax ;~ 01A2:02B5
cs=0x1a2;eip=0x0002b7; 	T(MOV(cx, 0x0FFFF));	// 537 mov     cx, 0FFFFh ;~ 01A2:02B7
	// 538 repne scasb ;~ 01A2:02BA
cs=0x1a2;eip=0x0002ba; 	T(	REPNE SCASB);	// 538 repne scasb ;~ 01A2:02BA
cs=0x1a2;eip=0x0002bc; 	T(MOV(si, di));	// 539 mov     si, di ;~ 01A2:02BC
cs=0x1a2;eip=0x0002be; 	R(JMP(loc_102ab));	// 540 jmp     short loc_102AB ;~ 01A2:02BE
loc_102c0:
	// 4397 
cs=0x1a2;eip=0x0002c0; 	T(XCHG(ax, si));	// 545 xchg    ax, si ;~ 01A2:02C0
cs=0x1a2;eip=0x0002c1; 	X(POP(di));	// 546 pop     di ;~ 01A2:02C1
cs=0x1a2;eip=0x0002c2; 	X(POP(si));	// 547 pop     si ;~ 01A2:02C2
cs=0x1a2;eip=0x0002c3; 	T(MOV(sp, bp));	// 548 mov     sp, bp ;~ 01A2:02C3
cs=0x1a2;eip=0x0002c5; 	X(POP(bp));	// 549 pop     bp ;~ 01A2:02C5
cs=0x1a2;eip=0x0002c6; 	R(RETF(2));	// 550 retf    2 ;~ 01A2:02C6
sub_102c9:
	// 558 
#undef arg_0
#define arg_0 6
	// 561 arg_0           = word ptr  6 ;~ 01A2:02C9
cs=0x1a2;eip=0x0002c9; 	X(PUSH(bp));	// 563 push    bp ;~ 01A2:02C9
cs=0x1a2;eip=0x0002ca; 	T(MOV(bp, sp));	// 564 mov     bp, sp ;~ 01A2:02CA
cs=0x1a2;eip=0x0002cc; 	X(PUSH(di));	// 565 push    di ;~ 01A2:02CC
cs=0x1a2;eip=0x0002cd; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 566 push    [bp+arg_0] ;~ 01A2:02CD
cs=0x1a2;eip=0x0002d0; 	R(CALLF(sub_1029e,0));	// 567 call    sub_1029E ;~ 01A2:02D0
cs=0x1a2;eip=0x0002d5; 	T(OR(ax, ax));	// 568 or      ax, ax ;~ 01A2:02D5
cs=0x1a2;eip=0x0002d7; 	R(JZ(loc_102ed));	// 569 jz      short loc_102ED ;~ 01A2:02D7
cs=0x1a2;eip=0x0002d9; 	T(XCHG(ax, dx));	// 570 xchg    ax, dx ;~ 01A2:02D9
cs=0x1a2;eip=0x0002da; 	T(MOV(di, dx));	// 571 mov     di, dx ;~ 01A2:02DA
cs=0x1a2;eip=0x0002dc; 	T(XOR(ax, ax));	// 572 xor     ax, ax ;~ 01A2:02DC
cs=0x1a2;eip=0x0002de; 	T(MOV(cx, 0x0FFFF));	// 573 mov     cx, 0FFFFh ;~ 01A2:02DE
	// 574 repne scasb ;~ 01A2:02E1
cs=0x1a2;eip=0x0002e1; 	T(	REPNE SCASB);	// 574 repne scasb ;~ 01A2:02E1
cs=0x1a2;eip=0x0002e3; 	T(NOT(cx));	// 575 not     cx ;~ 01A2:02E3
cs=0x1a2;eip=0x0002e5; 	T(DEC(cx));	// 576 dec     cx ;~ 01A2:02E5
cs=0x1a2;eip=0x0002e6; 	T(MOV(bx, 2));	// 577 mov     bx, 2 ;~ 01A2:02E6
cs=0x1a2;eip=0x0002e9; 	T(MOV(ah, 0x40));	// 578 mov     ah, 40h ;~ 01A2:02E9
cs=0x1a2;eip=0x0002eb; 	R(_INT(0x21));	// 579 int     21h             ; DOS - 2+ - WRITE TO FILE WITH HANDLE ;~ 01A2:02EB
loc_102ed:
	// 4398 
cs=0x1a2;eip=0x0002ed; 	X(POP(di));	// 583 pop     di ;~ 01A2:02ED
cs=0x1a2;eip=0x0002ee; 	T(MOV(sp, bp));	// 584 mov     sp, bp ;~ 01A2:02EE
cs=0x1a2;eip=0x0002f0; 	X(POP(bp));	// 585 pop     bp ;~ 01A2:02F0
cs=0x1a2;eip=0x0002f1; 	R(RETF(2));	// 586 retf    2 ;~ 01A2:02F1
sub_102f4:
	// 594 
#undef arg_0
#define arg_0 6
	// 597 arg_0           = word ptr  6 ;~ 01A2:02F4
cs=0x1a2;eip=0x0002f4; 	X(PUSH(bp));	// 599 push    bp ;~ 01A2:02F4
cs=0x1a2;eip=0x0002f5; 	T(MOV(bp, sp));	// 600 mov     bp, sp ;~ 01A2:02F5
cs=0x1a2;eip=0x0002f7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 601 mov     bx, [bp+arg_0] ;~ 01A2:02F7
cs=0x1a2;eip=0x0002fa; 	T(TEST(*(raddr(ds,bx-0x3D7B)), 1));	// 602 test    byte ptr [bx-3D7Bh], 1 ;~ 01A2:02FA
cs=0x1a2;eip=0x0002ff; 	R(JZ(loc_10308));	// 603 jz      short loc_10308 ;~ 01A2:02FF
cs=0x1a2;eip=0x000301; 	T(MOV(ax, bx));	// 604 mov     ax, bx ;~ 01A2:0301
cs=0x1a2;eip=0x000303; 	T(ADD(ax, 0x20));	// 605 add     ax, 20h ; ' ' ;~ 01A2:0303
cs=0x1a2;eip=0x000306; 	R(JMP(loc_1030a));	// 606 jmp     short loc_1030A ;~ 01A2:0306
loc_10308:
	// 4399 
cs=0x1a2;eip=0x000308; 	T(MOV(ax, bx));	// 610 mov     ax, bx ;~ 01A2:0308
loc_1030a:
	// 4400 
cs=0x1a2;eip=0x00030a; 	X(POP(bp));	// 613 pop     bp ;~ 01A2:030A
cs=0x1a2;eip=0x00030b; 	R(RETF(0));	// 614 retf ;~ 01A2:030B
sub_1030c:
	// 622 
#undef var_e
#define var_e -0x0E
	// 625 var_E           = dword ptr -0Eh ;~ 01A2:030C
#undef var_a
#define var_a -0x0A
	// 626 var_A           = byte ptr -0Ah ;~ 01A2:030C
#undef var_9
#define var_9 -9
	// 627 var_9           = byte ptr -9 ;~ 01A2:030C
#undef var_8
#define var_8 -8
	// 628 var_8           = byte ptr -8 ;~ 01A2:030C
#undef var_7
#define var_7 -7
	// 629 var_7           = byte ptr -7 ;~ 01A2:030C
#undef var_6
#define var_6 -6
	// 630 var_6           = byte ptr -6 ;~ 01A2:030C
#undef arg_0
#define arg_0 6
	// 631 arg_0           = word ptr  6 ;~ 01A2:030C
#undef arg_2
#define arg_2 8
	// 632 arg_2           = word ptr  8 ;~ 01A2:030C
#undef arg_4
#define arg_4 0x0A
	// 633 arg_4           = word ptr  0Ah ;~ 01A2:030C
cs=0x1a2;eip=0x00030c; 	X(PUSH(bp));	// 635 push    bp ;~ 01A2:030C
cs=0x1a2;eip=0x00030d; 	T(MOV(bp, sp));	// 636 mov     bp, sp ;~ 01A2:030D
cs=0x1a2;eip=0x00030f; 	X(PUSH(si));	// 637 push    si ;~ 01A2:030F
cs=0x1a2;eip=0x000310; 	X(PUSH(di));	// 638 push    di ;~ 01A2:0310
cs=0x1a2;eip=0x000311; 	T(SUB(sp, 0x0A));	// 639 sub     sp, 0Ah ;~ 01A2:0311
cs=0x1a2;eip=0x000314; 	X(MOV(*(raddr(ss,bp+var_a)), 0x0CD));	// 640 mov     [bp+var_A], 0CDh ; 'Í' ;~ 01A2:0314
cs=0x1a2;eip=0x000318; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 641 mov     ax, [bp+arg_0] ;~ 01A2:0318
cs=0x1a2;eip=0x00031b; 	X(MOV(*(raddr(ss,bp+var_9)), al));	// 642 mov     [bp+var_9], al ;~ 01A2:031B
int_num=al;
cs=0x1a2;eip=0x00031e; 	T(CMP(al, 0x25));	// 643 cmp     al, 25h ; '%' ;~ 01A2:031E
cs=0x1a2;eip=0x000320; 	R(JZ(loc_1032c));	// 644 jz      short loc_1032C ;~ 01A2:0320
cs=0x1a2;eip=0x000322; 	T(CMP(al, 0x26));	// 645 cmp     al, 26h ; '&' ;~ 01A2:0322
cs=0x1a2;eip=0x000324; 	R(JZ(loc_1032c));	// 646 jz      short loc_1032C ;~ 01A2:0324
cs=0x1a2;eip=0x000326; 	X(MOV(*(raddr(ss,bp+var_8)), 0x0CB));	// 647 mov     [bp+var_8], 0CBh ; 'Ë' ;~ 01A2:0326
cs=0x1a2;eip=0x00032a; 	R(JMP(loc_10338));	// 648 jmp     short loc_10338 ;~ 01A2:032A
loc_1032c:
	// 4401 
cs=0x1a2;eip=0x00032c; 	X(MOV(*(raddr(ss,bp+var_6)), 0x0CB));	// 653 mov     [bp+var_6], 0CBh ; 'Ë' ;~ 01A2:032C
cs=0x1a2;eip=0x000330; 	X(MOV(*(raddr(ss,bp+var_7)), 0x44));	// 654 mov     [bp+var_7], 44h ; 'D' ;~ 01A2:0330
cs=0x1a2;eip=0x000334; 	X(MOV(*(raddr(ss,bp+var_8)), 0x44));	// 655 mov     [bp+var_8], 44h ; 'D' ;~ 01A2:0334
loc_10338:
	// 4402 
cs=0x1a2;eip=0x000338; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e +2))), ss));	// 658 mov     word ptr [bp+var_E+2], ss ;~ 01A2:0338
cs=0x1a2;eip=0x00033b; 	T(ax = bp+var_a);	// 659 lea     ax, [bp+var_A] ;~ 01A2:033B
cs=0x1a2;eip=0x00033e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e))), ax));	// 660 mov     word ptr [bp+var_E], ax ;~ 01A2:033E
cs=0x1a2;eip=0x000341; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_2))));	// 661 mov     di, [bp+arg_2] ;~ 01A2:0341
cs=0x1a2;eip=0x000344; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 662 mov     ax, [di] ;~ 01A2:0344
cs=0x1a2;eip=0x000346; 	T(MOV(bx, *(dw*)(raddr(ds,di+2))));	// 663 mov     bx, [di+2] ;~ 01A2:0346
cs=0x1a2;eip=0x000349; 	T(MOV(cx, *(dw*)(raddr(ds,di+4))));	// 664 mov     cx, [di+4] ;~ 01A2:0349
cs=0x1a2;eip=0x00034c; 	T(MOV(dx, *(dw*)(raddr(ds,di+6))));	// 665 mov     dx, [di+6] ;~ 01A2:034C
cs=0x1a2;eip=0x00034f; 	T(MOV(si, *(dw*)(raddr(ds,di+8))));	// 666 mov     si, [di+8] ;~ 01A2:034F
cs=0x1a2;eip=0x000352; 	T(MOV(di, *(dw*)(raddr(ds,di+0x0A))));	// 667 mov     di, [di+0Ah] ;~ 01A2:0352
cs=0x1a2;eip=0x000355; 	X(PUSH(bp));	// 668 push    bp ;~ 01A2:0355
R(_INT(int_num));
if (int_num==0x25 || int_num==0x26) sp+=2;

//cs=0x1a2;eip=0x000356; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+var_e))));	// 669 call    [bp+var_E] ;~ 01A2:0356
cs=0x1a2;eip=0x000359; 	X(POP(bp));	// 670 pop     bp ;~ 01A2:0359
cs=0x1a2;eip=0x00035a; 	T(CLD);	// 671 cld ;~ 01A2:035A
cs=0x1a2;eip=0x00035b; 	X(PUSH(di));	// 672 push    di ;~ 01A2:035B
cs=0x1a2;eip=0x00035c; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_4))));	// 673 mov     di, [bp+arg_4] ;~ 01A2:035C
cs=0x1a2;eip=0x00035f; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 674 mov     [di], ax ;~ 01A2:035F
cs=0x1a2;eip=0x000361; 	X(MOV(*(dw*)(raddr(ds,di+2)), bx));	// 675 mov     [di+2], bx ;~ 01A2:0361
cs=0x1a2;eip=0x000364; 	X(MOV(*(dw*)(raddr(ds,di+4)), cx));	// 676 mov     [di+4], cx ;~ 01A2:0364
cs=0x1a2;eip=0x000367; 	X(MOV(*(dw*)(raddr(ds,di+6)), dx));	// 677 mov     [di+6], dx ;~ 01A2:0367
cs=0x1a2;eip=0x00036a; 	X(MOV(*(dw*)(raddr(ds,di+8)), si));	// 678 mov     [di+8], si ;~ 01A2:036A
cs=0x1a2;eip=0x00036d; 	X(POP(*(dw*)(raddr(ds,di+0x0A))));	// 679 pop     word ptr [di+0Ah] ;~ 01A2:036D
cs=0x1a2;eip=0x000370; 	R(JC(loc_10376));	// 680 jb      short loc_10376 ;~ 01A2:0370
cs=0x1a2;eip=0x000372; 	T(XOR(si, si));	// 681 xor     si, si ;~ 01A2:0372
cs=0x1a2;eip=0x000374; 	R(JMP(loc_10380));	// 682 jmp     short loc_10380 ;~ 01A2:0374
loc_10376:
	// 4403 
cs=0x1a2;eip=0x000376; 	R(CALLF(sub_103ac,0));	// 686 call    sub_103AC ;~ 01A2:0376
cs=0x1a2;eip=0x00037b; 	T(MOV(si, 1));	// 687 mov     si, 1 ;~ 01A2:037B
cs=0x1a2;eip=0x00037e; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 688 mov     ax, [di] ;~ 01A2:037E
loc_10380:
	// 4404 
cs=0x1a2;eip=0x000380; 	X(MOV(*(dw*)(raddr(ds,di+0x0C)), si));	// 691 mov     [di+0Ch], si ;~ 01A2:0380
cs=0x1a2;eip=0x000383; 	T(ADD(sp, 0x0A));	// 692 add     sp, 0Ah ;~ 01A2:0383
cs=0x1a2;eip=0x000386; 	X(POP(di));	// 693 pop     di ;~ 01A2:0386
cs=0x1a2;eip=0x000387; 	X(POP(si));	// 694 pop     si ;~ 01A2:0387
cs=0x1a2;eip=0x000388; 	T(MOV(sp, bp));	// 695 mov     sp, bp ;~ 01A2:0388
cs=0x1a2;eip=0x00038a; 	X(POP(bp));	// 696 pop     bp ;~ 01A2:038A
cs=0x1a2;eip=0x00038b; 	R(RETF(0));	// 697 retf ;~ 01A2:038B
seg000_proc:
	// 701 
cs=0x1a2;eip=0x00038c; 	R(JC(loc_103a1));	// 701 jb      short loc_103A1 ;~ 01A2:038C
loc_1038e:
	// 4405 
cs=0x1a2;eip=0x00038e; 	T(XOR(ax, ax));	// 705 xor     ax, ax ;~ 01A2:038E
cs=0x1a2;eip=0x000390; 	T(MOV(sp, bp));	// 706 mov     sp, bp ;~ 01A2:0390
cs=0x1a2;eip=0x000392; 	X(POP(bp));	// 707 pop     bp ;~ 01A2:0392
cs=0x1a2;eip=0x000393; 	R(RETF(0));	// 708 retf ;~ 01A2:0393
loc_10394:
	// 4406 
cs=0x1a2;eip=0x000394; 	R(JNC(loc_1038e));	// 713 jnb     short loc_1038E ;~ 01A2:0394
cs=0x1a2;eip=0x000396; 	X(PUSH(ax));	// 714 push    ax ;~ 01A2:0396
cs=0x1a2;eip=0x000397; 	R(CALL(sub_103b2,0));	// 715 call    sub_103B2 ;~ 01A2:0397
cs=0x1a2;eip=0x00039a; 	X(POP(ax));	// 716 pop     ax ;~ 01A2:039A
cs=0x1a2;eip=0x00039b; 	T(MOV(sp, bp));	// 717 mov     sp, bp ;~ 01A2:039B
cs=0x1a2;eip=0x00039d; 	X(POP(bp));	// 718 pop     bp ;~ 01A2:039D
cs=0x1a2;eip=0x00039e; 	R(RETF(0));	// 719 retf ;~ 01A2:039E
ret_1a2_39f:
	// 4407 
cs=0x1a2;eip=0x00039f; 	R(JNC(loc_103a8));	// 722 jnb     short loc_103A8 ;~ 01A2:039F
loc_103a1:
	// 4408 
cs=0x1a2;eip=0x0003a1; 	R(CALL(sub_103b2,0));	// 725 call    sub_103B2 ;~ 01A2:03A1
cs=0x1a2;eip=0x0003a4; 	T(MOV(ax, 0x0FFFF));	// 726 mov     ax, 0FFFFh ;~ 01A2:03A4
cs=0x1a2;eip=0x0003a7; 	T(CWD);	// 727 cwd ;~ 01A2:03A7
loc_103a8:
	// 4409 
cs=0x1a2;eip=0x0003a8; 	T(MOV(sp, bp));	// 730 mov     sp, bp ;~ 01A2:03A8
cs=0x1a2;eip=0x0003aa; 	X(POP(bp));	// 731 pop     bp ;~ 01A2:03AA
cs=0x1a2;eip=0x0003ab; 	R(RETF(0));	// 732 retf ;~ 01A2:03AB
sub_103ac:
	// 737 
cs=0x1a2;eip=0x0003ac; 	T(XOR(ah, ah));	// 739 xor     ah, ah ;~ 01A2:03AC
cs=0x1a2;eip=0x0003ae; 	R(CALL(sub_103b2,0));	// 740 call    sub_103B2 ;~ 01A2:03AE
cs=0x1a2;eip=0x0003b1; 	R(RETF(0));	// 741 retf ;~ 01A2:03B1
sub_103b2:
	// 748 
cs=0x1a2;eip=0x0003b2; 	X(MOV(unk_47a5f, al));	// 750 mov     byte ptr unk_47A5F, al ;~ 01A2:03B2
cs=0x1a2;eip=0x0003b5; 	T(OR(ah, ah));	// 751 or      ah, ah ;~ 01A2:03B5
cs=0x1a2;eip=0x0003b7; 	R(JNZ(loc_103dc));	// 752 jnz     short loc_103DC ;~ 01A2:03B7
cs=0x1a2;eip=0x0003b9; 	T(CMP(unk_47a5c, 3));	// 753 cmp     byte ptr unk_47A5C, 3 ;~ 01A2:03B9
cs=0x1a2;eip=0x0003be; 	R(JC(loc_103cd));	// 754 jb      short loc_103CD ;~ 01A2:03BE
cs=0x1a2;eip=0x0003c0; 	T(CMP(al, 0x22));	// 755 cmp     al, 22h ; '"' ;~ 01A2:03C0
cs=0x1a2;eip=0x0003c2; 	R(JNC(loc_103d1));	// 756 jnb     short loc_103D1 ;~ 01A2:03C2
cs=0x1a2;eip=0x0003c4; 	T(CMP(al, 0x20));	// 757 cmp     al, 20h ; ' ' ;~ 01A2:03C4
cs=0x1a2;eip=0x0003c6; 	R(JC(loc_103cd));	// 758 jb      short loc_103CD ;~ 01A2:03C6
cs=0x1a2;eip=0x0003c8; 	T(MOV(al, 5));	// 759 mov     al, 5 ;~ 01A2:03C8
cs=0x1a2;eip=0x0003ca; 	R(JMP(loc_103d3));	// 760 jmp     short loc_103D3 ;~ 01A2:03CA
loc_103cd:
	// 4410 
cs=0x1a2;eip=0x0003cd; 	T(CMP(al, 0x13));	// 767 cmp     al, 13h ;~ 01A2:03CD
cs=0x1a2;eip=0x0003cf; 	R(JBE(loc_103d3));	// 768 jbe     short loc_103D3 ;~ 01A2:03CF
loc_103d1:
	// 4411 
cs=0x1a2;eip=0x0003d1; 	T(MOV(al, 0x13));	// 771 mov     al, 13h ;~ 01A2:03D1
loc_103d3:
	// 4412 
cs=0x1a2;eip=0x0003d3; 	T(MOV(bx, 0x0C386));	// 775 mov     bx, 0C386h ;~ 01A2:03D3
cs=0x1a2;eip=0x0003d6; 	T(XLAT);	// 776 xlat ;~ 01A2:03D6
loc_103d7:
	// 4413 
cs=0x1a2;eip=0x0003d7; 	T(CBW);	// 779 cbw ;~ 01A2:03D7
cs=0x1a2;eip=0x0003d8; 	X(MOV(*(dw*)((&unk_47a54)), ax));	// 780 mov     word ptr unk_47A54, ax ;~ 01A2:03D8
cs=0x1a2;eip=0x0003db; 	R(RETN(0));	// 781 retn ;~ 01A2:03DB
loc_103dc:
	// 4414 
cs=0x1a2;eip=0x0003dc; 	T(MOV(al, ah));	// 785 mov     al, ah ;~ 01A2:03DC
cs=0x1a2;eip=0x0003de; 	R(JMP(loc_103d7));	// 786 jmp     short loc_103D7 ;~ 01A2:03DE
sub_103e0:
	// 794 
#undef arg_0
#define arg_0 6
	// 796 arg_0           = word ptr  6 ;~ 01A2:03E0
#undef arg_2
#define arg_2 8
	// 797 arg_2           = word ptr  8 ;~ 01A2:03E0
cs=0x1a2;eip=0x0003e0; 	X(PUSH(bp));	// 799 push    bp ;~ 01A2:03E0
cs=0x1a2;eip=0x0003e1; 	T(MOV(bp, sp));	// 800 mov     bp, sp ;~ 01A2:03E1
cs=0x1a2;eip=0x0003e3; 	X(PUSH(si));	// 801 push    si ;~ 01A2:03E3
cs=0x1a2;eip=0x0003e4; 	X(PUSH(di));	// 802 push    di ;~ 01A2:03E4
cs=0x1a2;eip=0x0003e5; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 803 mov     di, [bp+arg_0] ;~ 01A2:03E5
cs=0x1a2;eip=0x0003e8; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 804 mov     ax, [di] ;~ 01A2:03E8
cs=0x1a2;eip=0x0003ea; 	T(MOV(bx, *(dw*)(raddr(ds,di+2))));	// 805 mov     bx, [di+2] ;~ 01A2:03EA
cs=0x1a2;eip=0x0003ed; 	T(MOV(cx, *(dw*)(raddr(ds,di+4))));	// 806 mov     cx, [di+4] ;~ 01A2:03ED
cs=0x1a2;eip=0x0003f0; 	T(MOV(dx, *(dw*)(raddr(ds,di+6))));	// 807 mov     dx, [di+6] ;~ 01A2:03F0
cs=0x1a2;eip=0x0003f3; 	T(MOV(si, *(dw*)(raddr(ds,di+8))));	// 808 mov     si, [di+8] ;~ 01A2:03F3
cs=0x1a2;eip=0x0003f6; 	T(MOV(di, *(dw*)(raddr(ds,di+0x0A))));	// 809 mov     di, [di+0Ah] ;~ 01A2:03F6
cs=0x1a2;eip=0x0003f9; 	R(_INT(0x21));	// 810 int     21h             ; DOS - ;~ 01A2:03F9
cs=0x1a2;eip=0x0003fb; 	X(PUSH(di));	// 811 push    di ;~ 01A2:03FB
cs=0x1a2;eip=0x0003fc; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_2))));	// 812 mov     di, [bp+arg_2] ;~ 01A2:03FC
cs=0x1a2;eip=0x0003ff; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 813 mov     [di], ax ;~ 01A2:03FF
cs=0x1a2;eip=0x000401; 	X(MOV(*(dw*)(raddr(ds,di+2)), bx));	// 814 mov     [di+2], bx ;~ 01A2:0401
cs=0x1a2;eip=0x000404; 	X(MOV(*(dw*)(raddr(ds,di+4)), cx));	// 815 mov     [di+4], cx ;~ 01A2:0404
cs=0x1a2;eip=0x000407; 	X(MOV(*(dw*)(raddr(ds,di+6)), dx));	// 816 mov     [di+6], dx ;~ 01A2:0407
cs=0x1a2;eip=0x00040a; 	X(MOV(*(dw*)(raddr(ds,di+8)), si));	// 817 mov     [di+8], si ;~ 01A2:040A
cs=0x1a2;eip=0x00040d; 	X(POP(*(dw*)(raddr(ds,di+0x0A))));	// 818 pop     word ptr [di+0Ah] ;~ 01A2:040D
cs=0x1a2;eip=0x000410; 	R(JC(loc_10416));	// 819 jb      short loc_10416 ;~ 01A2:0410
cs=0x1a2;eip=0x000412; 	T(XOR(si, si));	// 820 xor     si, si ;~ 01A2:0412
cs=0x1a2;eip=0x000414; 	R(JMP(loc_10420));	// 821 jmp     short loc_10420 ;~ 01A2:0414
loc_10416:
	// 4415 
cs=0x1a2;eip=0x000416; 	R(CALLF(sub_103ac,0));	// 825 call    sub_103AC ;~ 01A2:0416
cs=0x1a2;eip=0x00041b; 	T(MOV(si, 1));	// 826 mov     si, 1 ;~ 01A2:041B
cs=0x1a2;eip=0x00041e; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 827 mov     ax, [di] ;~ 01A2:041E
loc_10420:
	// 4416 
cs=0x1a2;eip=0x000420; 	X(MOV(*(dw*)(raddr(ds,di+0x0C)), si));	// 830 mov     [di+0Ch], si ;~ 01A2:0420
cs=0x1a2;eip=0x000423; 	X(POP(di));	// 831 pop     di ;~ 01A2:0423
cs=0x1a2;eip=0x000424; 	X(POP(si));	// 832 pop     si ;~ 01A2:0424
cs=0x1a2;eip=0x000425; 	T(MOV(sp, bp));	// 833 mov     sp, bp ;~ 01A2:0425
cs=0x1a2;eip=0x000427; 	X(POP(bp));	// 834 pop     bp ;~ 01A2:0427
cs=0x1a2;eip=0x000428; 	R(RETF(0));	// 835 retf ;~ 01A2:0428
sub_1042a:
	// 845 
#undef arg_0
#define arg_0 6
	// 847 arg_0           = word ptr  6 ;~ 01A2:042A
#undef arg_2
#define arg_2 8
	// 848 arg_2           = byte ptr  8 ;~ 01A2:042A
cs=0x1a2;eip=0x00042a; 	X(PUSH(bp));	// 850 push    bp ;~ 01A2:042A
cs=0x1a2;eip=0x00042b; 	T(MOV(bp, sp));	// 851 mov     bp, sp ;~ 01A2:042B
cs=0x1a2;eip=0x00042d; 	X(PUSH(di));	// 852 push    di ;~ 01A2:042D
cs=0x1a2;eip=0x00042e; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 853 mov     di, [bp+arg_0] ;~ 01A2:042E
cs=0x1a2;eip=0x000431; 	X(PUSH(ds));	// 854 push    ds ;~ 01A2:0431
cs=0x1a2;eip=0x000432; 	X(POP(es));	// 855 pop     es ;~ 01A2:0432
cs=0x1a2;eip=0x000433; 	T(MOV(bx, di));	// 856 mov     bx, di ;~ 01A2:0433
cs=0x1a2;eip=0x000435; 	T(XOR(ax, ax));	// 857 xor     ax, ax ;~ 01A2:0435
cs=0x1a2;eip=0x000437; 	T(MOV(cx, 0x0FFFF));	// 858 mov     cx, 0FFFFh ;~ 01A2:0437
	// 859 repne scasb ;~ 01A2:043A
cs=0x1a2;eip=0x00043a; 	T(	REPNE SCASB);	// 859 repne scasb ;~ 01A2:043A
cs=0x1a2;eip=0x00043c; 	T(INC(cx));	// 860 inc     cx ;~ 01A2:043C
cs=0x1a2;eip=0x00043d; 	T(NEG(cx));	// 861 neg     cx ;~ 01A2:043D
cs=0x1a2;eip=0x00043f; 	T(MOV(al, *(raddr(ss,bp+arg_2))));	// 862 mov     al, [bp+arg_2] ;~ 01A2:043F
cs=0x1a2;eip=0x000442; 	T(MOV(di, bx));	// 863 mov     di, bx ;~ 01A2:0442
	// 864 repne scasb ;~ 01A2:0444
cs=0x1a2;eip=0x000444; 	T(	REPNE SCASB);	// 864 repne scasb ;~ 01A2:0444
cs=0x1a2;eip=0x000446; 	T(DEC(di));	// 865 dec     di ;~ 01A2:0446
cs=0x1a2;eip=0x000447; 	T(CMP(*(raddr(ds,di)), al));	// 866 cmp     [di], al ;~ 01A2:0447
cs=0x1a2;eip=0x000449; 	R(JZ(loc_1044d));	// 867 jz      short loc_1044D ;~ 01A2:0449
cs=0x1a2;eip=0x00044b; 	T(XOR(di, di));	// 868 xor     di, di ;~ 01A2:044B
loc_1044d:
	// 4417 
cs=0x1a2;eip=0x00044d; 	T(MOV(ax, di));	// 871 mov     ax, di ;~ 01A2:044D
cs=0x1a2;eip=0x00044f; 	X(POP(di));	// 872 pop     di ;~ 01A2:044F
cs=0x1a2;eip=0x000450; 	T(MOV(sp, bp));	// 873 mov     sp, bp ;~ 01A2:0450
cs=0x1a2;eip=0x000452; 	X(POP(bp));	// 874 pop     bp ;~ 01A2:0452
cs=0x1a2;eip=0x000453; 	R(RETF(0));	// 875 retf ;~ 01A2:0453
sub_10454:
	// 883 
#undef arg_0
#define arg_0 6
	// 886 arg_0           = word ptr  6 ;~ 01A2:0454
#undef arg_2
#define arg_2 8
	// 887 arg_2           = word ptr  8 ;~ 01A2:0454
cs=0x1a2;eip=0x000454; 	X(PUSH(bp));	// 889 push    bp ;~ 01A2:0454
cs=0x1a2;eip=0x000455; 	T(MOV(bp, sp));	// 890 mov     bp, sp ;~ 01A2:0455
cs=0x1a2;eip=0x000457; 	T(MOV(dx, si));	// 891 mov     dx, si ;~ 01A2:0457
cs=0x1a2;eip=0x000459; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 892 mov     si, [bp+arg_2] ;~ 01A2:0459
cs=0x1a2;eip=0x00045c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 893 mov     bx, [bp+arg_0] ;~ 01A2:045C
cs=0x1a2;eip=0x00045f; 	T(MOV(al, 0x0FF));	// 894 mov     al, 0FFh ;~ 01A2:045F
loc_10461:
	// 4418 
cs=0x1a2;eip=0x000461; 	T(OR(al, al));	// 898 or      al, al ;~ 01A2:0461
cs=0x1a2;eip=0x000463; 	R(JZ(loc_10491));	// 899 jz      short loc_10491 ;~ 01A2:0463
cs=0x1a2;eip=0x000465; 	T(LODSB);	// 900 lodsb ;~ 01A2:0465
cs=0x1a2;eip=0x000466; 	T(MOV(ah, *(raddr(ds,bx))));	// 901 mov     ah, [bx] ;~ 01A2:0466
cs=0x1a2;eip=0x000468; 	T(INC(bx));	// 902 inc     bx ;~ 01A2:0468
cs=0x1a2;eip=0x000469; 	T(CMP(ah, al));	// 903 cmp     ah, al ;~ 01A2:0469
cs=0x1a2;eip=0x00046b; 	R(JZ(loc_10461));	// 904 jz      short loc_10461 ;~ 01A2:046B
cs=0x1a2;eip=0x00046d; 	T(SUB(al, 0x41));	// 905 sub     al, 41h ; 'A' ;~ 01A2:046D
cs=0x1a2;eip=0x00046f; 	T(CMP(al, 0x1A));	// 906 cmp     al, 1Ah ;~ 01A2:046F
cs=0x1a2;eip=0x000471; 	T(SBB(cl, cl));	// 907 sbb     cl, cl ;~ 01A2:0471
cs=0x1a2;eip=0x000473; 	T(AND(cl, 0x20));	// 908 and     cl, 20h ;~ 01A2:0473
cs=0x1a2;eip=0x000476; 	T(ADD(al, cl));	// 909 add     al, cl ;~ 01A2:0476
cs=0x1a2;eip=0x000478; 	T(ADD(al, 0x41));	// 910 add     al, 41h ; 'A' ;~ 01A2:0478
cs=0x1a2;eip=0x00047a; 	T(XCHG(ah, al));	// 911 xchg    ah, al ;~ 01A2:047A
cs=0x1a2;eip=0x00047c; 	T(SUB(al, 0x41));	// 912 sub     al, 41h ; 'A' ;~ 01A2:047C
cs=0x1a2;eip=0x00047e; 	T(CMP(al, 0x1A));	// 913 cmp     al, 1Ah ;~ 01A2:047E
cs=0x1a2;eip=0x000480; 	T(SBB(cl, cl));	// 914 sbb     cl, cl ;~ 01A2:0480
cs=0x1a2;eip=0x000482; 	T(AND(cl, 0x20));	// 915 and     cl, 20h ;~ 01A2:0482
cs=0x1a2;eip=0x000485; 	T(ADD(al, cl));	// 916 add     al, cl ;~ 01A2:0485
cs=0x1a2;eip=0x000487; 	T(ADD(al, 0x41));	// 917 add     al, 41h ; 'A' ;~ 01A2:0487
cs=0x1a2;eip=0x000489; 	T(CMP(al, ah));	// 918 cmp     al, ah ;~ 01A2:0489
cs=0x1a2;eip=0x00048b; 	R(JZ(loc_10461));	// 919 jz      short loc_10461 ;~ 01A2:048B
cs=0x1a2;eip=0x00048d; 	T(SBB(al, al));	// 920 sbb     al, al ;~ 01A2:048D
cs=0x1a2;eip=0x00048f; 	T(SBB(al, 0x0FF));	// 921 sbb     al, 0FFh ;~ 01A2:048F
loc_10491:
	// 4419 
cs=0x1a2;eip=0x000491; 	T(CBW);	// 924 cbw ;~ 01A2:0491
cs=0x1a2;eip=0x000492; 	T(MOV(si, dx));	// 925 mov     si, dx ;~ 01A2:0492
cs=0x1a2;eip=0x000494; 	X(POP(bp));	// 926 pop     bp ;~ 01A2:0494
cs=0x1a2;eip=0x000495; 	R(RETF(0));	// 927 retf ;~ 01A2:0495
sub_10496:
	// 935 
#undef arg_0
#define arg_0 6
	// 938 arg_0           = word ptr  6 ;~ 01A2:0496
cs=0x1a2;eip=0x000496; 	X(PUSH(bp));	// 940 push    bp ;~ 01A2:0496
cs=0x1a2;eip=0x000497; 	T(MOV(bp, sp));	// 941 mov     bp, sp ;~ 01A2:0497
cs=0x1a2;eip=0x000499; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 942 mov     bx, [bp+arg_0] ;~ 01A2:0499
cs=0x1a2;eip=0x00049c; 	T(MOV(dx, bx));	// 943 mov     dx, bx ;~ 01A2:049C
cs=0x1a2;eip=0x00049e; 	T(MOV(al, *(raddr(ds,bx))));	// 944 mov     al, [bx] ;~ 01A2:049E
cs=0x1a2;eip=0x0004a0; 	T(OR(al, al));	// 945 or      al, al ;~ 01A2:04A0
cs=0x1a2;eip=0x0004a2; 	R(JZ(loc_104b5));	// 946 jz      short loc_104B5 ;~ 01A2:04A2
loc_104a4:
	// 4420 
cs=0x1a2;eip=0x0004a4; 	T(SUB(al, 0x61));	// 949 sub     al, 61h ; 'a' ;~ 01A2:04A4
cs=0x1a2;eip=0x0004a6; 	T(CMP(al, 0x1A));	// 950 cmp     al, 1Ah ;~ 01A2:04A6
cs=0x1a2;eip=0x0004a8; 	R(JNC(loc_104ae));	// 951 jnb     short loc_104AE ;~ 01A2:04A8
cs=0x1a2;eip=0x0004aa; 	T(ADD(al, 0x41));	// 952 add     al, 41h ; 'A' ;~ 01A2:04AA
cs=0x1a2;eip=0x0004ac; 	X(MOV(*(raddr(ds,bx)), al));	// 953 mov     [bx], al ;~ 01A2:04AC
loc_104ae:
	// 4421 
cs=0x1a2;eip=0x0004ae; 	T(INC(bx));	// 956 inc     bx ;~ 01A2:04AE
cs=0x1a2;eip=0x0004af; 	T(MOV(al, *(raddr(ds,bx))));	// 957 mov     al, [bx] ;~ 01A2:04AF
cs=0x1a2;eip=0x0004b1; 	T(OR(al, al));	// 958 or      al, al ;~ 01A2:04B1
cs=0x1a2;eip=0x0004b3; 	R(JNZ(loc_104a4));	// 959 jnz     short loc_104A4 ;~ 01A2:04B3
loc_104b5:
	// 4422 
cs=0x1a2;eip=0x0004b5; 	T(XCHG(ax, dx));	// 962 xchg    ax, dx ;~ 01A2:04B5
cs=0x1a2;eip=0x0004b6; 	X(POP(bp));	// 963 pop     bp ;~ 01A2:04B6
cs=0x1a2;eip=0x0004b7; 	R(RETF(0));	// 964 retf ;~ 01A2:04B7
sub_104b8:
	// 972 
#undef arg_0
#define arg_0 6
	// 975 arg_0           = word ptr  6 ;~ 01A2:04B8
#undef arg_2
#define arg_2 8
	// 976 arg_2           = word ptr  8 ;~ 01A2:04B8
#undef arg_4
#define arg_4 0x0A
	// 977 arg_4           = word ptr  0Ah ;~ 01A2:04B8
cs=0x1a2;eip=0x0004b8; 	X(PUSH(bp));	// 979 push    bp ;~ 01A2:04B8
cs=0x1a2;eip=0x0004b9; 	T(MOV(bp, sp));	// 980 mov     bp, sp ;~ 01A2:04B9
cs=0x1a2;eip=0x0004bb; 	T(MOV(dx, di));	// 981 mov     dx, di ;~ 01A2:04BB
cs=0x1a2;eip=0x0004bd; 	T(MOV(bx, si));	// 982 mov     bx, si ;~ 01A2:04BD
cs=0x1a2;eip=0x0004bf; 	T(MOV(ax, ds));	// 983 mov     ax, ds ;~ 01A2:04BF
cs=0x1a2;eip=0x0004c1; 	T(MOV(es, ax));	// 984 mov     es, ax ;~ 01A2:04C1
cs=0x1a2;eip=0x0004c3; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 985 mov     si, [bp+arg_2] ;~ 01A2:04C3
cs=0x1a2;eip=0x0004c6; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 986 mov     di, [bp+arg_0] ;~ 01A2:04C6
cs=0x1a2;eip=0x0004c9; 	T(MOV(ax, di));	// 987 mov     ax, di ;~ 01A2:04C9
cs=0x1a2;eip=0x0004cb; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_4))));	// 988 mov     cx, [bp+arg_4] ;~ 01A2:04CB
cs=0x1a2;eip=0x0004ce; 	R(JCXZ(loc_104fa));	// 989 jcxz    short loc_104FA ;~ 01A2:04CE
cs=0x1a2;eip=0x0004d0; 	T(CMP(di, si));	// 990 cmp     di, si ;~ 01A2:04D0
cs=0x1a2;eip=0x0004d2; 	R(JBE(loc_104ea));	// 991 jbe     short loc_104EA ;~ 01A2:04D2
cs=0x1a2;eip=0x0004d4; 	T(MOV(ax, si));	// 992 mov     ax, si ;~ 01A2:04D4
cs=0x1a2;eip=0x0004d6; 	T(ADD(ax, cx));	// 993 add     ax, cx ;~ 01A2:04D6
cs=0x1a2;eip=0x0004d8; 	T(CMP(di, ax));	// 994 cmp     di, ax ;~ 01A2:04D8
cs=0x1a2;eip=0x0004da; 	R(JNC(loc_104ea));	// 995 jnb     short loc_104EA ;~ 01A2:04DA
cs=0x1a2;eip=0x0004dc; 	T(MOV(ax, di));	// 996 mov     ax, di ;~ 01A2:04DC
cs=0x1a2;eip=0x0004de; 	T(ADD(si, cx));	// 997 add     si, cx ;~ 01A2:04DE
cs=0x1a2;eip=0x0004e0; 	T(ADD(di, cx));	// 998 add     di, cx ;~ 01A2:04E0
cs=0x1a2;eip=0x0004e2; 	T(DEC(si));	// 999 dec     si ;~ 01A2:04E2
cs=0x1a2;eip=0x0004e3; 	T(DEC(di));	// 1000 dec     di ;~ 01A2:04E3
cs=0x1a2;eip=0x0004e4; 	T(STD);	// 1001 std ;~ 01A2:04E4
	// 1002 rep movsb ;~ 01A2:04E5
cs=0x1a2;eip=0x0004e5; 	X(	REP MOVSB);	// 1002 rep movsb ;~ 01A2:04E5
cs=0x1a2;eip=0x0004e7; 	T(CLD);	// 1003 cld ;~ 01A2:04E7
cs=0x1a2;eip=0x0004e8; 	R(JMP(loc_104fa));	// 1004 jmp     short loc_104FA ;~ 01A2:04E8
loc_104ea:
	// 4423 
cs=0x1a2;eip=0x0004ea; 	T(MOV(ax, di));	// 1009 mov     ax, di ;~ 01A2:04EA
cs=0x1a2;eip=0x0004ec; 	T(TEST(al, 1));	// 1010 test    al, 1 ;~ 01A2:04EC
cs=0x1a2;eip=0x0004ee; 	R(JZ(loc_104f2));	// 1011 jz      short loc_104F2 ;~ 01A2:04EE
cs=0x1a2;eip=0x0004f0; 	X(MOVSB);	// 1012 movsb ;~ 01A2:04F0
cs=0x1a2;eip=0x0004f1; 	T(DEC(cx));	// 1013 dec     cx ;~ 01A2:04F1
loc_104f2:
	// 4424 
cs=0x1a2;eip=0x0004f2; 	T(SHR(cx, 1));	// 1016 shr     cx, 1 ;~ 01A2:04F2
	// 1017 rep movsw ;~ 01A2:04F4
cs=0x1a2;eip=0x0004f4; 	X(	REP MOVSW);	// 1017 rep movsw ;~ 01A2:04F4
cs=0x1a2;eip=0x0004f6; 	T(ADC(cx, cx));	// 1018 adc     cx, cx ;~ 01A2:04F6
	// 1019 rep movsb ;~ 01A2:04F8
cs=0x1a2;eip=0x0004f8; 	X(	REP MOVSB);	// 1019 rep movsb ;~ 01A2:04F8
loc_104fa:
	// 4425 
cs=0x1a2;eip=0x0004fa; 	T(MOV(si, bx));	// 1023 mov     si, bx ;~ 01A2:04FA
cs=0x1a2;eip=0x0004fc; 	T(MOV(di, dx));	// 1024 mov     di, dx ;~ 01A2:04FC
cs=0x1a2;eip=0x0004fe; 	X(POP(bp));	// 1025 pop     bp ;~ 01A2:04FE
cs=0x1a2;eip=0x0004ff; 	R(RETF(0));	// 1026 retf ;~ 01A2:04FF
sub_10500:
	// 1034 
#undef arg_0
#define arg_0 6
	// 1036 arg_0           = word ptr  6 ;~ 01A2:0500
#undef arg_2
#define arg_2 8
	// 1037 arg_2           = word ptr  8 ;~ 01A2:0500
cs=0x1a2;eip=0x000500; 	X(PUSH(bp));	// 1041 push    bp ;~ 01A2:0500
cs=0x1a2;eip=0x000501; 	T(MOV(bp, sp));	// 1042 mov     bp, sp ;~ 01A2:0501
cs=0x1a2;eip=0x000503; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 1043 mov     bx, [bp+arg_0] ;~ 01A2:0503
cs=0x1a2;eip=0x000506; 	T(MOV(ah, 0x48));	// 1044 mov     ah, 48h ;~ 01A2:0506
cs=0x1a2;eip=0x000508; 	R(_INT(0x21));	// 1045 int     21h             ; DOS - 2+ - ALLOCATE MEMORY ;~ 01A2:0508
cs=0x1a2;eip=0x00050a; 	T(MOV(cx, bx));	// 1047 mov     cx, bx ;~ 01A2:050A
cs=0x1a2;eip=0x00050c; 	R(JC(loc_10510));	// 1048 jb      short loc_10510 ;~ 01A2:050C
cs=0x1a2;eip=0x00050e; 	T(MOV(cx, ax));	// 1049 mov     cx, ax ;~ 01A2:050E
loc_10510:
	// 4426 
cs=0x1a2;eip=0x000510; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 1052 mov     bx, [bp+arg_2] ;~ 01A2:0510
cs=0x1a2;eip=0x000513; 	X(MOV(*(dw*)(raddr(ds,bx)), cx));	// 1053 mov     [bx], cx ;~ 01A2:0513
cs=0x1a2;eip=0x000515; 	R(JMP(loc_10394));	// 1054 jmp     loc_10394 ;~ 01A2:0515
sub_10518:
	// 1062 
#undef arg_2
#define arg_2 6
	// 1065 arg_2           = word ptr  6 ;~ 01A2:0518
cs=0x1a2;eip=0x000518; 	X(PUSH(bp));	// 1067 push    bp ;~ 01A2:0518
cs=0x1a2;eip=0x000519; 	T(MOV(bp, sp));	// 1068 mov     bp, sp ;~ 01A2:0519
cs=0x1a2;eip=0x00051b; 	T(MOV(es, *(dw*)(raddr(ss,bp+arg_2))));	// 1069 mov     es, [bp+arg_2] ;~ 01A2:051B
cs=0x1a2;eip=0x00051e; 	T(MOV(ah, 0x49));	// 1071 mov     ah, 49h ;~ 01A2:051E
cs=0x1a2;eip=0x000520; 	R(_INT(0x21));	// 1072 int     21h             ; DOS - 2+ - FREE MEMORY ;~ 01A2:0520
cs=0x1a2;eip=0x000522; 	R(JMP(loc_10394));	// 1074 jmp     loc_10394 ;~ 01A2:0522
sub_10526:
	// 1084 
#undef arg_0
#define arg_0 6
	// 1087 arg_0           = word ptr  6 ;~ 01A2:0526
#undef arg_2
#define arg_2 8
	// 1088 arg_2           = word ptr  8 ;~ 01A2:0526
#undef arg_4
#define arg_4 0x0A
	// 1089 arg_4           = word ptr  0Ah ;~ 01A2:0526
#undef arg_6
#define arg_6 0x0C
	// 1090 arg_6           = word ptr  0Ch ;~ 01A2:0526
cs=0x1a2;eip=0x000526; 	X(PUSH(bp));	// 1092 push    bp ;~ 01A2:0526
cs=0x1a2;eip=0x000527; 	T(MOV(bp, sp));	// 1093 mov     bp, sp ;~ 01A2:0527
cs=0x1a2;eip=0x000529; 	X(PUSH(di));	// 1094 push    di ;~ 01A2:0529
cs=0x1a2;eip=0x00052a; 	X(PUSH(si));	// 1095 push    si ;~ 01A2:052A
cs=0x1a2;eip=0x00052b; 	X(PUSH(bx));	// 1096 push    bx ;~ 01A2:052B
cs=0x1a2;eip=0x00052c; 	T(XOR(di, di));	// 1097 xor     di, di ;~ 01A2:052C
cs=0x1a2;eip=0x00052e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 1098 mov     ax, [bp+arg_2] ;~ 01A2:052E
cs=0x1a2;eip=0x000531; 	T(OR(ax, ax));	// 1099 or      ax, ax ;~ 01A2:0531
cs=0x1a2;eip=0x000533; 	R(JGE(loc_10546));	// 1100 jge     short loc_10546 ;~ 01A2:0533
cs=0x1a2;eip=0x000535; 	T(INC(di));	// 1101 inc     di ;~ 01A2:0535
cs=0x1a2;eip=0x000536; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_0))));	// 1102 mov     dx, [bp+arg_0] ;~ 01A2:0536
cs=0x1a2;eip=0x000539; 	T(NEG(ax));	// 1103 neg     ax ;~ 01A2:0539
cs=0x1a2;eip=0x00053b; 	T(NEG(dx));	// 1104 neg     dx ;~ 01A2:053B
cs=0x1a2;eip=0x00053d; 	T(SBB(ax, 0));	// 1105 sbb     ax, 0 ;~ 01A2:053D
cs=0x1a2;eip=0x000540; 	X(MOV(*(dw*)(raddr(ss,bp+arg_2)), ax));	// 1106 mov     [bp+arg_2], ax ;~ 01A2:0540
cs=0x1a2;eip=0x000543; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), dx));	// 1107 mov     [bp+arg_0], dx ;~ 01A2:0543
loc_10546:
	// 4427 
cs=0x1a2;eip=0x000546; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 1110 mov     ax, [bp+arg_6] ;~ 01A2:0546
cs=0x1a2;eip=0x000549; 	T(OR(ax, ax));	// 1111 or      ax, ax ;~ 01A2:0549
cs=0x1a2;eip=0x00054b; 	R(JGE(loc_1055e));	// 1112 jge     short loc_1055E ;~ 01A2:054B
cs=0x1a2;eip=0x00054d; 	T(INC(di));	// 1113 inc     di ;~ 01A2:054D
cs=0x1a2;eip=0x00054e; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_4))));	// 1114 mov     dx, [bp+arg_4] ;~ 01A2:054E
cs=0x1a2;eip=0x000551; 	T(NEG(ax));	// 1115 neg     ax ;~ 01A2:0551
cs=0x1a2;eip=0x000553; 	T(NEG(dx));	// 1116 neg     dx ;~ 01A2:0553
cs=0x1a2;eip=0x000555; 	T(SBB(ax, 0));	// 1117 sbb     ax, 0 ;~ 01A2:0555
cs=0x1a2;eip=0x000558; 	X(MOV(*(dw*)(raddr(ss,bp+arg_6)), ax));	// 1118 mov     [bp+arg_6], ax ;~ 01A2:0558
cs=0x1a2;eip=0x00055b; 	X(MOV(*(dw*)(raddr(ss,bp+arg_4)), dx));	// 1119 mov     [bp+arg_4], dx ;~ 01A2:055B
loc_1055e:
	// 4428 
cs=0x1a2;eip=0x00055e; 	T(OR(ax, ax));	// 1122 or      ax, ax ;~ 01A2:055E
cs=0x1a2;eip=0x000560; 	R(JNZ(loc_10577));	// 1123 jnz     short loc_10577 ;~ 01A2:0560
cs=0x1a2;eip=0x000562; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_4))));	// 1124 mov     cx, [bp+arg_4] ;~ 01A2:0562
cs=0x1a2;eip=0x000565; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 1125 mov     ax, [bp+arg_2] ;~ 01A2:0565
cs=0x1a2;eip=0x000568; 	T(XOR(dx, dx));	// 1126 xor     dx, dx ;~ 01A2:0568
cs=0x1a2;eip=0x00056a; 	T(DIV2(cx));	// 1127 div     cx ;~ 01A2:056A
cs=0x1a2;eip=0x00056c; 	T(MOV(bx, ax));	// 1128 mov     bx, ax ;~ 01A2:056C
cs=0x1a2;eip=0x00056e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 1129 mov     ax, [bp+arg_0] ;~ 01A2:056E
cs=0x1a2;eip=0x000571; 	T(DIV2(cx));	// 1130 div     cx ;~ 01A2:0571
cs=0x1a2;eip=0x000573; 	T(MOV(dx, bx));	// 1131 mov     dx, bx ;~ 01A2:0573
cs=0x1a2;eip=0x000575; 	R(JMP(loc_105af));	// 1132 jmp     short loc_105AF ;~ 01A2:0575
loc_10577:
	// 4429 
cs=0x1a2;eip=0x000577; 	T(MOV(bx, ax));	// 1136 mov     bx, ax ;~ 01A2:0577
cs=0x1a2;eip=0x000579; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_4))));	// 1137 mov     cx, [bp+arg_4] ;~ 01A2:0579
cs=0x1a2;eip=0x00057c; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 1138 mov     dx, [bp+arg_2] ;~ 01A2:057C
cs=0x1a2;eip=0x00057f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 1139 mov     ax, [bp+arg_0] ;~ 01A2:057F
loc_10582:
	// 4430 
cs=0x1a2;eip=0x000582; 	T(SHR(bx, 1));	// 1142 shr     bx, 1 ;~ 01A2:0582
cs=0x1a2;eip=0x000584; 	T(RCR(cx, 1));	// 1143 rcr     cx, 1 ;~ 01A2:0584
cs=0x1a2;eip=0x000586; 	T(SHR(dx, 1));	// 1144 shr     dx, 1 ;~ 01A2:0586
cs=0x1a2;eip=0x000588; 	T(RCR(ax, 1));	// 1145 rcr     ax, 1 ;~ 01A2:0588
cs=0x1a2;eip=0x00058a; 	T(OR(bx, bx));	// 1146 or      bx, bx ;~ 01A2:058A
cs=0x1a2;eip=0x00058c; 	R(JNZ(loc_10582));	// 1147 jnz     short loc_10582 ;~ 01A2:058C
cs=0x1a2;eip=0x00058e; 	T(DIV2(cx));	// 1148 div     cx ;~ 01A2:058E
cs=0x1a2;eip=0x000590; 	T(MOV(si, ax));	// 1149 mov     si, ax ;~ 01A2:0590
cs=0x1a2;eip=0x000592; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_6))));	// 1150 mul     [bp+arg_6] ;~ 01A2:0592
cs=0x1a2;eip=0x000595; 	T(XCHG(ax, cx));	// 1151 xchg    ax, cx ;~ 01A2:0595
cs=0x1a2;eip=0x000596; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 1152 mov     ax, [bp+arg_4] ;~ 01A2:0596
cs=0x1a2;eip=0x000599; 	T(MUL1_2(si));	// 1153 mul     si ;~ 01A2:0599
cs=0x1a2;eip=0x00059b; 	T(ADD(dx, cx));	// 1154 add     dx, cx ;~ 01A2:059B
cs=0x1a2;eip=0x00059d; 	R(JC(loc_105ab));	// 1155 jb      short loc_105AB ;~ 01A2:059D
cs=0x1a2;eip=0x00059f; 	T(CMP(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 1156 cmp     dx, [bp+arg_2] ;~ 01A2:059F
cs=0x1a2;eip=0x0005a2; 	R(JA(loc_105ab));	// 1157 ja      short loc_105AB ;~ 01A2:05A2
cs=0x1a2;eip=0x0005a4; 	R(JC(loc_105ac));	// 1158 jb      short loc_105AC ;~ 01A2:05A4
cs=0x1a2;eip=0x0005a6; 	T(CMP(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 1159 cmp     ax, [bp+arg_0] ;~ 01A2:05A6
cs=0x1a2;eip=0x0005a9; 	R(JBE(loc_105ac));	// 1160 jbe     short loc_105AC ;~ 01A2:05A9
loc_105ab:
	// 4431 
cs=0x1a2;eip=0x0005ab; 	T(DEC(si));	// 1164 dec     si ;~ 01A2:05AB
loc_105ac:
	// 4432 
cs=0x1a2;eip=0x0005ac; 	T(XOR(dx, dx));	// 1168 xor     dx, dx ;~ 01A2:05AC
cs=0x1a2;eip=0x0005ae; 	T(XCHG(ax, si));	// 1169 xchg    ax, si ;~ 01A2:05AE
loc_105af:
	// 4433 
cs=0x1a2;eip=0x0005af; 	T(DEC(di));	// 1172 dec     di ;~ 01A2:05AF
cs=0x1a2;eip=0x0005b0; 	R(JNZ(loc_105b9));	// 1173 jnz     short loc_105B9 ;~ 01A2:05B0
cs=0x1a2;eip=0x0005b2; 	T(NEG(dx));	// 1174 neg     dx ;~ 01A2:05B2
cs=0x1a2;eip=0x0005b4; 	T(NEG(ax));	// 1175 neg     ax ;~ 01A2:05B4
cs=0x1a2;eip=0x0005b6; 	T(SBB(dx, 0));	// 1176 sbb     dx, 0 ;~ 01A2:05B6
loc_105b9:
	// 4434 
cs=0x1a2;eip=0x0005b9; 	X(POP(bx));	// 1179 pop     bx ;~ 01A2:05B9
cs=0x1a2;eip=0x0005ba; 	X(POP(si));	// 1180 pop     si ;~ 01A2:05BA
cs=0x1a2;eip=0x0005bb; 	X(POP(di));	// 1181 pop     di ;~ 01A2:05BB
cs=0x1a2;eip=0x0005bc; 	T(MOV(sp, bp));	// 1182 mov     sp, bp ;~ 01A2:05BC
cs=0x1a2;eip=0x0005be; 	X(POP(bp));	// 1183 pop     bp ;~ 01A2:05BE
cs=0x1a2;eip=0x0005bf; 	R(RETF(8));	// 1184 retf    8 ;~ 01A2:05BF
sub_105c2:
	// 1192 
#undef arg_0
#define arg_0 6
	// 1195 arg_0           = word ptr  6 ;~ 01A2:05C2
#undef arg_2
#define arg_2 8
	// 1196 arg_2           = word ptr  8 ;~ 01A2:05C2
#undef arg_4
#define arg_4 0x0A
	// 1197 arg_4           = word ptr  0Ah ;~ 01A2:05C2
#undef arg_6
#define arg_6 0x0C
	// 1198 arg_6           = word ptr  0Ch ;~ 01A2:05C2
cs=0x1a2;eip=0x0005c2; 	X(PUSH(bp));	// 1200 push    bp ;~ 01A2:05C2
cs=0x1a2;eip=0x0005c3; 	T(MOV(bp, sp));	// 1201 mov     bp, sp ;~ 01A2:05C3
cs=0x1a2;eip=0x0005c5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 1202 mov     ax, [bp+arg_2] ;~ 01A2:05C5
cs=0x1a2;eip=0x0005c8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 1203 mov     bx, [bp+arg_6] ;~ 01A2:05C8
cs=0x1a2;eip=0x0005cb; 	T(OR(bx, ax));	// 1204 or      bx, ax ;~ 01A2:05CB
cs=0x1a2;eip=0x0005cd; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 1205 mov     bx, [bp+arg_4] ;~ 01A2:05CD
cs=0x1a2;eip=0x0005d0; 	R(JNZ(loc_105dd));	// 1206 jnz     short loc_105DD ;~ 01A2:05D0
cs=0x1a2;eip=0x0005d2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 1207 mov     ax, [bp+arg_0] ;~ 01A2:05D2
cs=0x1a2;eip=0x0005d5; 	T(MUL1_2(bx));	// 1208 mul     bx ;~ 01A2:05D5
cs=0x1a2;eip=0x0005d7; 	T(MOV(sp, bp));	// 1209 mov     sp, bp ;~ 01A2:05D7
cs=0x1a2;eip=0x0005d9; 	X(POP(bp));	// 1210 pop     bp ;~ 01A2:05D9
cs=0x1a2;eip=0x0005da; 	R(RETF(8));	// 1211 retf    8 ;~ 01A2:05DA
loc_105dd:
	// 4435 
cs=0x1a2;eip=0x0005dd; 	T(MUL1_2(bx));	// 1215 mul     bx ;~ 01A2:05DD
cs=0x1a2;eip=0x0005df; 	T(MOV(cx, ax));	// 1216 mov     cx, ax ;~ 01A2:05DF
cs=0x1a2;eip=0x0005e1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 1217 mov     ax, [bp+arg_0] ;~ 01A2:05E1
cs=0x1a2;eip=0x0005e4; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_6))));	// 1218 mul     [bp+arg_6] ;~ 01A2:05E4
cs=0x1a2;eip=0x0005e7; 	T(ADD(cx, ax));	// 1219 add     cx, ax ;~ 01A2:05E7
cs=0x1a2;eip=0x0005e9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 1220 mov     ax, [bp+arg_0] ;~ 01A2:05E9
cs=0x1a2;eip=0x0005ec; 	T(MUL1_2(bx));	// 1221 mul     bx ;~ 01A2:05EC
cs=0x1a2;eip=0x0005ee; 	T(ADD(dx, cx));	// 1222 add     dx, cx ;~ 01A2:05EE
cs=0x1a2;eip=0x0005f0; 	T(MOV(sp, bp));	// 1223 mov     sp, bp ;~ 01A2:05F0
cs=0x1a2;eip=0x0005f2; 	X(POP(bp));	// 1224 pop     bp ;~ 01A2:05F2
cs=0x1a2;eip=0x0005f3; 	R(RETF(8));	// 1225 retf    8 ;~ 01A2:05F3
sub_105f6:
	// 1232 
cs=0x1a2;eip=0x0005f6; 	T(XOR(ch, ch));	// 1234 xor     ch, ch ;~ 01A2:05F6
cs=0x1a2;eip=0x0005f8; 	R(JCXZ(locret_10600));	// 1235 jcxz    short locret_10600 ;~ 01A2:05F8
loc_105fa:
	// 4436 
cs=0x1a2;eip=0x0005fa; 	T(SHL(ax, 1));	// 1238 shl     ax, 1 ;~ 01A2:05FA
cs=0x1a2;eip=0x0005fc; 	T(RCL(dx, 1));	// 1239 rcl     dx, 1 ;~ 01A2:05FC
cs=0x1a2;eip=0x0005fe; 	R(LOOP(loc_105fa));	// 1240 loop    loc_105FA ;~ 01A2:05FE
locret_10600:
	// 4437 
cs=0x1a2;eip=0x000600; 	R(RETF(0));	// 1243 retf ;~ 01A2:0600
sub_10602:
	// 1253 
#undef arg_0
#define arg_0 6
	// 1255 arg_0           = word ptr  6 ;~ 01A2:0602
#undef arg_2
#define arg_2 8
	// 1256 arg_2           = word ptr  8 ;~ 01A2:0602
#undef arg_4
#define arg_4 0x0A
	// 1257 arg_4           = word ptr  0Ah ;~ 01A2:0602
cs=0x1a2;eip=0x000602; 	X(PUSH(bp));	// 1259 push    bp ;~ 01A2:0602
cs=0x1a2;eip=0x000603; 	T(MOV(bp, sp));	// 1260 mov     bp, sp ;~ 01A2:0603
cs=0x1a2;eip=0x000605; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 1261 mov     bx, [bp+arg_0] ;~ 01A2:0605
cs=0x1a2;eip=0x000608; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 1262 push    [bp+arg_4] ;~ 01A2:0608
cs=0x1a2;eip=0x00060b; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 1263 push    [bp+arg_2] ;~ 01A2:060B
cs=0x1a2;eip=0x00060e; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 1264 push    word ptr [bx+2] ;~ 01A2:060E
cs=0x1a2;eip=0x000611; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 1265 push    word ptr [bx] ;~ 01A2:0611
cs=0x1a2;eip=0x000613; 	R(CALLF(sub_105c2,0));	// 1266 call    sub_105C2 ;~ 01A2:0613
cs=0x1a2;eip=0x000618; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 1267 mov     bx, [bp+arg_0] ;~ 01A2:0618
cs=0x1a2;eip=0x00061b; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 1268 mov     [bx], ax ;~ 01A2:061B
cs=0x1a2;eip=0x00061d; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 1269 mov     [bx+2], dx ;~ 01A2:061D
cs=0x1a2;eip=0x000620; 	T(MOV(sp, bp));	// 1270 mov     sp, bp ;~ 01A2:0620
cs=0x1a2;eip=0x000622; 	X(POP(bp));	// 1271 pop     bp ;~ 01A2:0622
cs=0x1a2;eip=0x000623; 	R(RETF(6));	// 1272 retf    6 ;~ 01A2:0623
sub_10626:
	// 1280 
#undef arg_0
#define arg_0 6
	// 1283 arg_0           = word ptr  6 ;~ 01A2:0626
#undef arg_2
#define arg_2 8
	// 1284 arg_2           = word ptr  8 ;~ 01A2:0626
cs=0x1a2;eip=0x000626; 	X(PUSH(bp));	// 1286 push    bp ;~ 01A2:0626
cs=0x1a2;eip=0x000627; 	T(MOV(bp, sp));	// 1287 mov     bp, sp ;~ 01A2:0627
cs=0x1a2;eip=0x000629; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 1288 mov     bx, [bp+arg_0] ;~ 01A2:0629
cs=0x1a2;eip=0x00062c; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 1289 mov     ax, [bx] ;~ 01A2:062C
cs=0x1a2;eip=0x00062e; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 1290 mov     dx, [bx+2] ;~ 01A2:062E
cs=0x1a2;eip=0x000631; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_2))));	// 1291 mov     cx, [bp+arg_2] ;~ 01A2:0631
cs=0x1a2;eip=0x000634; 	R(CALLF(sub_105f6,0));	// 1292 call    sub_105F6 ;~ 01A2:0634
cs=0x1a2;eip=0x000639; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 1293 mov     bx, [bp+arg_0] ;~ 01A2:0639
cs=0x1a2;eip=0x00063c; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 1294 mov     [bx], ax ;~ 01A2:063C
cs=0x1a2;eip=0x00063e; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 1295 mov     [bx+2], dx ;~ 01A2:063E
cs=0x1a2;eip=0x000641; 	T(MOV(sp, bp));	// 1296 mov     sp, bp ;~ 01A2:0641
cs=0x1a2;eip=0x000643; 	X(POP(bp));	// 1297 pop     bp ;~ 01A2:0643
cs=0x1a2;eip=0x000644; 	R(RETF(4));	// 1298 retf    4 ;~ 01A2:0644
sub_10648:
	// 1308 
#undef arg_0
#define arg_0 6
	// 1311 arg_0           = word ptr  6 ;~ 01A2:0648
#undef arg_2
#define arg_2 8
	// 1312 arg_2           = word ptr  8 ;~ 01A2:0648
cs=0x1a2;eip=0x000648; 	X(PUSH(bp));	// 1314 push    bp ;~ 01A2:0648
cs=0x1a2;eip=0x000649; 	T(MOV(bp, sp));	// 1315 mov     bp, sp ;~ 01A2:0649
cs=0x1a2;eip=0x00064b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 1316 mov     bx, [bp+arg_0] ;~ 01A2:064B
cs=0x1a2;eip=0x00064e; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 1317 mov     ax, [bx] ;~ 01A2:064E
cs=0x1a2;eip=0x000650; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 1318 mov     dx, [bx+2] ;~ 01A2:0650
cs=0x1a2;eip=0x000653; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_2))));	// 1319 mov     cx, [bp+arg_2] ;~ 01A2:0653
cs=0x1a2;eip=0x000656; 	R(CALLF(sub_10240,0));	// 1320 call    sub_10240 ;~ 01A2:0656
cs=0x1a2;eip=0x00065b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 1321 mov     bx, [bp+arg_0] ;~ 01A2:065B
cs=0x1a2;eip=0x00065e; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 1322 mov     [bx], ax ;~ 01A2:065E
cs=0x1a2;eip=0x000660; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 1323 mov     [bx+2], dx ;~ 01A2:0660
cs=0x1a2;eip=0x000663; 	T(MOV(sp, bp));	// 1324 mov     sp, bp ;~ 01A2:0663
cs=0x1a2;eip=0x000665; 	X(POP(bp));	// 1325 pop     bp ;~ 01A2:0665
cs=0x1a2;eip=0x000666; 	R(RETF(4));	// 1326 retf    4 ;~ 01A2:0666
sub_1066a:
	// 1336 
#undef arg_0
#define arg_0 6
	// 1339 arg_0           = word ptr  6 ;~ 01A2:066A
#undef arg_2
#define arg_2 8
	// 1340 arg_2           = word ptr  8 ;~ 01A2:066A
#undef arg_4
#define arg_4 0x0A
	// 1341 arg_4           = word ptr  0Ah ;~ 01A2:066A
#undef arg_6
#define arg_6 0x0C
	// 1342 arg_6           = word ptr  0Ch ;~ 01A2:066A
cs=0x1a2;eip=0x00066a; 	X(PUSH(bp));	// 1344 push    bp ;~ 01A2:066A
cs=0x1a2;eip=0x00066b; 	T(MOV(bp, sp));	// 1345 mov     bp, sp ;~ 01A2:066B
cs=0x1a2;eip=0x00066d; 	X(PUSH(bx));	// 1346 push    bx ;~ 01A2:066D
cs=0x1a2;eip=0x00066e; 	X(PUSH(si));	// 1347 push    si ;~ 01A2:066E
cs=0x1a2;eip=0x00066f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 1348 mov     ax, [bp+arg_6] ;~ 01A2:066F
cs=0x1a2;eip=0x000672; 	T(OR(ax, ax));	// 1349 or      ax, ax ;~ 01A2:0672
cs=0x1a2;eip=0x000674; 	R(JNZ(loc_1068b));	// 1350 jnz     short loc_1068B ;~ 01A2:0674
cs=0x1a2;eip=0x000676; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_4))));	// 1351 mov     cx, [bp+arg_4] ;~ 01A2:0676
cs=0x1a2;eip=0x000679; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 1352 mov     ax, [bp+arg_2] ;~ 01A2:0679
cs=0x1a2;eip=0x00067c; 	T(XOR(dx, dx));	// 1353 xor     dx, dx ;~ 01A2:067C
cs=0x1a2;eip=0x00067e; 	T(DIV2(cx));	// 1354 div     cx ;~ 01A2:067E
cs=0x1a2;eip=0x000680; 	T(MOV(bx, ax));	// 1355 mov     bx, ax ;~ 01A2:0680
cs=0x1a2;eip=0x000682; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 1356 mov     ax, [bp+arg_0] ;~ 01A2:0682
cs=0x1a2;eip=0x000685; 	T(DIV2(cx));	// 1357 div     cx ;~ 01A2:0685
cs=0x1a2;eip=0x000687; 	T(MOV(dx, bx));	// 1358 mov     dx, bx ;~ 01A2:0687
cs=0x1a2;eip=0x000689; 	R(JMP(loc_106c3));	// 1359 jmp     short loc_106C3 ;~ 01A2:0689
loc_1068b:
	// 4438 
cs=0x1a2;eip=0x00068b; 	T(MOV(cx, ax));	// 1363 mov     cx, ax ;~ 01A2:068B
cs=0x1a2;eip=0x00068d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 1364 mov     bx, [bp+arg_4] ;~ 01A2:068D
cs=0x1a2;eip=0x000690; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 1365 mov     dx, [bp+arg_2] ;~ 01A2:0690
cs=0x1a2;eip=0x000693; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 1366 mov     ax, [bp+arg_0] ;~ 01A2:0693
loc_10696:
	// 4439 
cs=0x1a2;eip=0x000696; 	T(SHR(cx, 1));	// 1369 shr     cx, 1 ;~ 01A2:0696
cs=0x1a2;eip=0x000698; 	T(RCR(bx, 1));	// 1370 rcr     bx, 1 ;~ 01A2:0698
cs=0x1a2;eip=0x00069a; 	T(SHR(dx, 1));	// 1371 shr     dx, 1 ;~ 01A2:069A
cs=0x1a2;eip=0x00069c; 	T(RCR(ax, 1));	// 1372 rcr     ax, 1 ;~ 01A2:069C
cs=0x1a2;eip=0x00069e; 	T(OR(cx, cx));	// 1373 or      cx, cx ;~ 01A2:069E
cs=0x1a2;eip=0x0006a0; 	R(JNZ(loc_10696));	// 1374 jnz     short loc_10696 ;~ 01A2:06A0
cs=0x1a2;eip=0x0006a2; 	T(DIV2(bx));	// 1375 div     bx ;~ 01A2:06A2
cs=0x1a2;eip=0x0006a4; 	T(MOV(si, ax));	// 1376 mov     si, ax ;~ 01A2:06A4
cs=0x1a2;eip=0x0006a6; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_6))));	// 1377 mul     [bp+arg_6] ;~ 01A2:06A6
cs=0x1a2;eip=0x0006a9; 	T(XCHG(ax, cx));	// 1378 xchg    ax, cx ;~ 01A2:06A9
cs=0x1a2;eip=0x0006aa; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 1379 mov     ax, [bp+arg_4] ;~ 01A2:06AA
cs=0x1a2;eip=0x0006ad; 	T(MUL1_2(si));	// 1380 mul     si ;~ 01A2:06AD
cs=0x1a2;eip=0x0006af; 	T(ADD(dx, cx));	// 1381 add     dx, cx ;~ 01A2:06AF
cs=0x1a2;eip=0x0006b1; 	R(JC(loc_106bf));	// 1382 jb      short loc_106BF ;~ 01A2:06B1
cs=0x1a2;eip=0x0006b3; 	T(CMP(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 1383 cmp     dx, [bp+arg_2] ;~ 01A2:06B3
cs=0x1a2;eip=0x0006b6; 	R(JA(loc_106bf));	// 1384 ja      short loc_106BF ;~ 01A2:06B6
cs=0x1a2;eip=0x0006b8; 	R(JC(loc_106c0));	// 1385 jb      short loc_106C0 ;~ 01A2:06B8
cs=0x1a2;eip=0x0006ba; 	T(CMP(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 1386 cmp     ax, [bp+arg_0] ;~ 01A2:06BA
cs=0x1a2;eip=0x0006bd; 	R(JBE(loc_106c0));	// 1387 jbe     short loc_106C0 ;~ 01A2:06BD
loc_106bf:
	// 4440 
cs=0x1a2;eip=0x0006bf; 	T(DEC(si));	// 1391 dec     si ;~ 01A2:06BF
loc_106c0:
	// 4441 
cs=0x1a2;eip=0x0006c0; 	T(XOR(dx, dx));	// 1395 xor     dx, dx ;~ 01A2:06C0
cs=0x1a2;eip=0x0006c2; 	T(XCHG(ax, si));	// 1396 xchg    ax, si ;~ 01A2:06C2
loc_106c3:
	// 4442 
cs=0x1a2;eip=0x0006c3; 	X(POP(si));	// 1399 pop     si ;~ 01A2:06C3
cs=0x1a2;eip=0x0006c4; 	X(POP(bx));	// 1400 pop     bx ;~ 01A2:06C4
cs=0x1a2;eip=0x0006c5; 	T(MOV(sp, bp));	// 1401 mov     sp, bp ;~ 01A2:06C5
cs=0x1a2;eip=0x0006c7; 	X(POP(bp));	// 1402 pop     bp ;~ 01A2:06C7
cs=0x1a2;eip=0x0006c8; 	R(RETF(8));	// 1403 retf    8 ;~ 01A2:06C8

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_10013: 	goto loc_10013;
        case m2c::kloc_10022: 	goto loc_10022;
        case m2c::kloc_10034: 	goto loc_10034;
        case m2c::kloc_10052: 	goto loc_10052;
        case m2c::kloc_100c4: 	goto loc_100c4;
        case m2c::kloc_10101: 	goto loc_10101;
        case m2c::kloc_10127: 	goto loc_10127;
        case m2c::kloc_1012d: 	goto loc_1012d;
        case m2c::kloc_10138: 	goto loc_10138;
        case m2c::kloc_10193: 	goto loc_10193;
        case m2c::kloc_101a6: 	goto loc_101a6;
        case m2c::kloc_101ba: 	goto loc_101ba;
        case m2c::kloc_101e0: 	goto loc_101e0;
        case m2c::kloc_101f0: 	goto loc_101f0;
        case m2c::kloc_101f3: 	goto loc_101f3;
        case m2c::kloc_10203: 	goto loc_10203;
        case m2c::kloc_1020a: 	goto loc_1020a;
        case m2c::kloc_10210: 	goto loc_10210;
        case m2c::kloc_10224: 	goto loc_10224;
        case m2c::kloc_10227: 	goto loc_10227;
        case m2c::kloc_1024f: 	goto loc_1024f;
        case m2c::kloc_10258: 	goto loc_10258;
        case m2c::kloc_10274: 	goto loc_10274;
        case m2c::kloc_10281: 	goto loc_10281;
        case m2c::kloc_1029c: 	goto loc_1029c;
        case m2c::kloc_102ab: 	goto loc_102ab;
        case m2c::kloc_102c0: 	goto loc_102c0;
        case m2c::kloc_102ed: 	goto loc_102ed;
        case m2c::kloc_10308: 	goto loc_10308;
        case m2c::kloc_1030a: 	goto loc_1030a;
        case m2c::kloc_1032c: 	goto loc_1032c;
        case m2c::kloc_10338: 	goto loc_10338;
        case m2c::kloc_10376: 	goto loc_10376;
        case m2c::kloc_10380: 	goto loc_10380;
        case m2c::kloc_1038e: 	goto loc_1038e;
        case m2c::kloc_10394: 	goto loc_10394;
        case m2c::kloc_103a1: 	goto loc_103a1;
        case m2c::kloc_103a8: 	goto loc_103a8;
        case m2c::kloc_103cd: 	goto loc_103cd;
        case m2c::kloc_103d1: 	goto loc_103d1;
        case m2c::kloc_103d3: 	goto loc_103d3;
        case m2c::kloc_103d7: 	goto loc_103d7;
        case m2c::kloc_103dc: 	goto loc_103dc;
        case m2c::kloc_10416: 	goto loc_10416;
        case m2c::kloc_10420: 	goto loc_10420;
        case m2c::kloc_1044d: 	goto loc_1044d;
        case m2c::kloc_10461: 	goto loc_10461;
        case m2c::kloc_10491: 	goto loc_10491;
        case m2c::kloc_104a4: 	goto loc_104a4;
        case m2c::kloc_104ae: 	goto loc_104ae;
        case m2c::kloc_104b5: 	goto loc_104b5;
        case m2c::kloc_104ea: 	goto loc_104ea;
        case m2c::kloc_104f2: 	goto loc_104f2;
        case m2c::kloc_104fa: 	goto loc_104fa;
        case m2c::kloc_10510: 	goto loc_10510;
        case m2c::kloc_10546: 	goto loc_10546;
        case m2c::kloc_1055e: 	goto loc_1055e;
        case m2c::kloc_10577: 	goto loc_10577;
        case m2c::kloc_10582: 	goto loc_10582;
        case m2c::kloc_105ab: 	goto loc_105ab;
        case m2c::kloc_105ac: 	goto loc_105ac;
        case m2c::kloc_105af: 	goto loc_105af;
        case m2c::kloc_105b9: 	goto loc_105b9;
        case m2c::kloc_105dd: 	goto loc_105dd;
        case m2c::kloc_105fa: 	goto loc_105fa;
        case m2c::kloc_1068b: 	goto loc_1068b;
        case m2c::kloc_10696: 	goto loc_10696;
        case m2c::kloc_106bf: 	goto loc_106bf;
        case m2c::kloc_106c0: 	goto loc_106c0;
        case m2c::kloc_106c3: 	goto loc_106c3;
        case m2c::klocret_10163: 	goto locret_10163;
        case m2c::klocret_10273: 	goto locret_10273;
        case m2c::klocret_10600: 	goto locret_10600;
        case m2c::kret_1a2_39f: 	goto ret_1a2_39f;
        case m2c::kseg000_proc: 	goto seg000_proc;
        case m2c::kstart: 	goto start;
        case m2c::ksub_10000: 	goto sub_10000;
        case m2c::ksub_100d8: 	goto sub_100d8;
        case m2c::ksub_100f9: 	goto sub_100f9;
        case m2c::ksub_100fe: 	goto sub_100fe;
        case m2c::ksub_10145: 	goto sub_10145;
        case m2c::ksub_10151: 	goto sub_10151;
        case m2c::ksub_10164: 	goto sub_10164;
        case m2c::ksub_1017e: 	goto sub_1017e;
        case m2c::ksub_10240: 	goto sub_10240;
        case m2c::ksub_10278: 	goto sub_10278;
        case m2c::ksub_1029e: 	goto sub_1029e;
        case m2c::ksub_102c9: 	goto sub_102c9;
        case m2c::ksub_102f4: 	goto sub_102f4;
        case m2c::ksub_1030c: 	goto sub_1030c;
        case m2c::ksub_103ac: 	goto sub_103ac;
        case m2c::ksub_103b2: 	goto sub_103b2;
        case m2c::ksub_103e0: 	goto sub_103e0;
        case m2c::ksub_1042a: 	goto sub_1042a;
        case m2c::ksub_10454: 	goto sub_10454;
        case m2c::ksub_10496: 	goto sub_10496;
        case m2c::ksub_104b8: 	goto sub_104b8;
        case m2c::ksub_10500: 	goto sub_10500;
        case m2c::ksub_10518: 	goto sub_10518;
        case m2c::ksub_10526: 	goto sub_10526;
        case m2c::ksub_105c2: 	goto sub_105c2;
        case m2c::ksub_105f6: 	goto sub_105f6;
        case m2c::ksub_10602: 	goto sub_10602;
        case m2c::ksub_10626: 	goto sub_10626;
        case m2c::ksub_10648: 	goto sub_10648;
        case m2c::ksub_1066a: 	goto sub_1066a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, _source);m2c::stackDump(_state); abort();
    };
}

