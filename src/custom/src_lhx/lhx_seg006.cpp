/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group6:
    _begin:
sub_2e4b0:
	// 68092 
#undef arg_0
#define arg_0 6
	// 68095 arg_0           = word ptr  6 ;~ 1FED:0000
#undef arg_2
#define arg_2 8
	// 68096 arg_2           = word ptr  8 ;~ 1FED:0000
#undef arg_4
#define arg_4 0x0A
	// 68097 arg_4           = word ptr  0Ah ;~ 1FED:0000
cs=0x1fed;eip=0x000000; 	X(PUSH(bp));	// 68099 push    bp ;~ 1FED:0000
cs=0x1fed;eip=0x000001; 	T(MOV(bp, sp));	// 68100 mov     bp, sp ;~ 1FED:0001
cs=0x1fed;eip=0x000003; 	X(PUSH(si));	// 68101 push    si ;~ 1FED:0003
cs=0x1fed;eip=0x000004; 	X(PUSH(di));	// 68102 push    di ;~ 1FED:0004
cs=0x1fed;eip=0x000005; 	T(LES(si, *(dd*)((&unk_5688e))));	// 68103 les     si, dword ptr unk_5688E ;~ 1FED:0005
cs=0x1fed;eip=0x000009; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 68104 mov     bx, [bp+arg_0] ;~ 1FED:0009
cs=0x1fed;eip=0x00000c; 	T(SHL(bx, 1));	// 68105 shl     bx, 1 ;~ 1FED:000C
cs=0x1fed;eip=0x00000e; 	T(MOV(ax, *(dw*)(raddr(es,bx+si+0x1C))));	// 68106 mov     ax, es:[bx+si+1Ch] ;~ 1FED:000E
cs=0x1fed;eip=0x000012; 	X(MOV(*(dw*)((&unk_48004)), ax));	// 68107 mov     word ptr unk_48004, ax ;~ 1FED:0012
cs=0x1fed;eip=0x000015; 	T(MOV(ax, *(dw*)(raddr(es,bx+si+0x1E))));	// 68108 mov     ax, es:[bx+si+1Eh] ;~ 1FED:0015
cs=0x1fed;eip=0x000019; 	T(DEC(ax));	// 68109 dec     ax ;~ 1FED:0019
cs=0x1fed;eip=0x00001a; 	X(MOV(*(dw*)((&unk_48006)), ax));	// 68110 mov     word ptr unk_48006, ax ;~ 1FED:001A
cs=0x1fed;eip=0x00001d; 	T(MOV(ax, *(dw*)(raddr(es,si+0x1A))));	// 68111 mov     ax, es:[si+1Ah] ;~ 1FED:001D
cs=0x1fed;eip=0x000021; 	X(MOV(*(dw*)((&unk_47ff4)), ax));	// 68112 mov     word ptr unk_47FF4, ax ;~ 1FED:0021
cs=0x1fed;eip=0x000024; 	T(MOV(ax, *(dw*)(raddr(es,si+0x14))));	// 68113 mov     ax, es:[si+14h] ;~ 1FED:0024
cs=0x1fed;eip=0x000028; 	X(MOV(*(dw*)((&unk_47ff0)), ax));	// 68114 mov     word ptr unk_47FF0, ax ;~ 1FED:0028
cs=0x1fed;eip=0x00002b; 	T(MOV(ax, *(dw*)(raddr(es,si+0x16))));	// 68115 mov     ax, es:[si+16h] ;~ 1FED:002B
cs=0x1fed;eip=0x00002f; 	X(MOV(*(dw*)((&unk_47ff2)), ax));	// 68116 mov     word ptr unk_47FF2, ax ;~ 1FED:002F
cs=0x1fed;eip=0x000032; 	T(MOV(ax, *(dw*)((&unk_48006))));	// 68117 mov     ax, word ptr unk_48006 ;~ 1FED:0032
cs=0x1fed;eip=0x000035; 	T(SUB(ax, *(dw*)((&unk_48004))));	// 68118 sub     ax, word ptr unk_48004 ;~ 1FED:0035
cs=0x1fed;eip=0x000039; 	T(INC(ax));	// 68119 inc     ax ;~ 1FED:0039
cs=0x1fed;eip=0x00003a; 	X(MOV(*(dw*)((&unk_47fee)), ax));	// 68120 mov     word ptr unk_47FEE, ax ;~ 1FED:003A
cs=0x1fed;eip=0x00003d; 	T(OR(ax, ax));	// 68121 or      ax, ax ;~ 1FED:003D
cs=0x1fed;eip=0x00003f; 	R(JZ(loc_2e562));	// 68122 jz      short loc_2E562 ;~ 1FED:003F
cs=0x1fed;eip=0x000041; 	T(MOV(cl, 3));	// 68123 mov     cl, 3 ;~ 1FED:0041
cs=0x1fed;eip=0x000043; 	T(MOV(ax, *(dw*)((&unk_48004))));	// 68124 mov     ax, word ptr unk_48004 ;~ 1FED:0043
cs=0x1fed;eip=0x000046; 	T(SHR(ax, cl));	// 68125 shr     ax, cl ;~ 1FED:0046
cs=0x1fed;eip=0x000048; 	X(MOV(*(dw*)((&unk_47ffa)), ax));	// 68126 mov     word ptr unk_47FFA, ax ;~ 1FED:0048
cs=0x1fed;eip=0x00004b; 	T(MOV(ax, *(dw*)((&unk_48006))));	// 68127 mov     ax, word ptr unk_48006 ;~ 1FED:004B
cs=0x1fed;eip=0x00004e; 	T(SHR(ax, cl));	// 68128 shr     ax, cl ;~ 1FED:004E
cs=0x1fed;eip=0x000050; 	X(MOV(*(dw*)((&unk_47ffc)), ax));	// 68129 mov     word ptr unk_47FFC, ax ;~ 1FED:0050
cs=0x1fed;eip=0x000053; 	T(MOV(ax, *(dw*)((&unk_48004))));	// 68130 mov     ax, word ptr unk_48004 ;~ 1FED:0053
cs=0x1fed;eip=0x000056; 	T(AND(ax, 7));	// 68131 and     ax, 7 ;~ 1FED:0056
cs=0x1fed;eip=0x000059; 	X(MOV(*(dw*)((&unk_47ff6)), ax));	// 68132 mov     word ptr unk_47FF6, ax ;~ 1FED:0059
cs=0x1fed;eip=0x00005c; 	T(MOV(ax, *(dw*)((&unk_48006))));	// 68133 mov     ax, word ptr unk_48006 ;~ 1FED:005C
cs=0x1fed;eip=0x00005f; 	T(AND(ax, 7));	// 68134 and     ax, 7 ;~ 1FED:005F
cs=0x1fed;eip=0x000062; 	X(MOV(*(dw*)((&unk_47ff8)), ax));	// 68135 mov     word ptr unk_47FF8, ax ;~ 1FED:0062
cs=0x1fed;eip=0x000065; 	T(MOV(ax, *(dw*)((&unk_47ffc))));	// 68136 mov     ax, word ptr unk_47FFC ;~ 1FED:0065
cs=0x1fed;eip=0x000068; 	T(SUB(ax, *(dw*)((&unk_47ffa))));	// 68137 sub     ax, word ptr unk_47FFA ;~ 1FED:0068
cs=0x1fed;eip=0x00006c; 	T(INC(ax));	// 68138 inc     ax ;~ 1FED:006C
cs=0x1fed;eip=0x00006d; 	X(MOV(*(dw*)((&unk_48000)), ax));	// 68139 mov     word ptr unk_48000, ax ;~ 1FED:006D
cs=0x1fed;eip=0x000070; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 68140 mov     ax, [bp+arg_2] ;~ 1FED:0070
cs=0x1fed;eip=0x000073; 	T(CMP(ax, *(dw*)((&unk_5687d))));	// 68141 cmp     ax, word ptr unk_5687D ;~ 1FED:0073
cs=0x1fed;eip=0x000077; 	R(JL(loc_2e562));	// 68142 jl      short loc_2E562 ;~ 1FED:0077
cs=0x1fed;eip=0x000079; 	T(ADD(ax, *(dw*)((&unk_47fee))));	// 68143 add     ax, word ptr unk_47FEE ;~ 1FED:0079
cs=0x1fed;eip=0x00007d; 	T(DEC(ax));	// 68144 dec     ax ;~ 1FED:007D
cs=0x1fed;eip=0x00007e; 	T(CMP(ax, *(dw*)((&unk_5687f))));	// 68145 cmp     ax, word ptr unk_5687F ;~ 1FED:007E
cs=0x1fed;eip=0x000082; 	R(JG(loc_2e562));	// 68146 jg      short loc_2E562 ;~ 1FED:0082
cs=0x1fed;eip=0x000084; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 68147 mov     ax, [bp+arg_4] ;~ 1FED:0084
cs=0x1fed;eip=0x000087; 	T(CMP(ax, *(dw*)((&unk_56881))));	// 68148 cmp     ax, word ptr unk_56881 ;~ 1FED:0087
cs=0x1fed;eip=0x00008b; 	R(JL(loc_2e562));	// 68149 jl      short loc_2E562 ;~ 1FED:008B
cs=0x1fed;eip=0x00008d; 	T(ADD(ax, *(dw*)((&unk_47ff2))));	// 68150 add     ax, word ptr unk_47FF2 ;~ 1FED:008D
cs=0x1fed;eip=0x000091; 	T(DEC(ax));	// 68151 dec     ax ;~ 1FED:0091
cs=0x1fed;eip=0x000092; 	T(CMP(ax, *(dw*)((&unk_56883))));	// 68152 cmp     ax, word ptr unk_56883 ;~ 1FED:0092
cs=0x1fed;eip=0x000096; 	R(JG(loc_2e562));	// 68153 jg      short loc_2E562 ;~ 1FED:0096
cs=0x1fed;eip=0x000098; 	T(MOV(ax, ds));	// 68154 mov     ax, ds ;~ 1FED:0098
cs=0x1fed;eip=0x00009a; 	T(MOV(es, ax));	// 68155 mov     es, ax ;~ 1FED:009A
cs=0x1fed;eip=0x00009c; 	T(MOV(di, 0x0ED3C));	// 68157 mov     di, 0ED3Ch ;~ 1FED:009C
cs=0x1fed;eip=0x00009f; 	T(ADD(di, *(dw*)(raddr(ss,bp+arg_4))));	// 68158 add     di, [bp+arg_4] ;~ 1FED:009F
cs=0x1fed;eip=0x0000a2; 	T(MOV(cx, *(dw*)((&unk_47ff2))));	// 68159 mov     cx, word ptr unk_47FF2 ;~ 1FED:00A2
	// 68160 rep stosb ;~ 1FED:00A6
cs=0x1fed;eip=0x0000a6; 	X(	REP STOSB);	// 68160 rep stosb ;~ 1FED:00A6
cs=0x1fed;eip=0x0000a8; 	T(MOV(bx, *(dw*)((&byte_47b2e))));	// 68161 mov     bx, word ptr byte_47B2E ;~ 1FED:00A8
cs=0x1fed;eip=0x0000ac; 	T(SHL(bx, 1));	// 68162 shl     bx, 1 ;~ 1FED:00AC
cs=0x1fed;eip=0x0000ae; 	R(CALL(__dispatch_call,*(dw*)(((db*)&off_47fc8)+bx)));	// 68163 call    off_47FC8[bx] ;~ 1FED:00AE
loc_2e562:
	// 8800 
cs=0x1fed;eip=0x0000b2; 	X(POP(di));	// 68167 pop     di ;~ 1FED:00B2
cs=0x1fed;eip=0x0000b3; 	X(POP(si));	// 68168 pop     si ;~ 1FED:00B3
cs=0x1fed;eip=0x0000b4; 	X(POP(bp));	// 68169 pop     bp ;~ 1FED:00B4
cs=0x1fed;eip=0x0000b5; 	R(RETF(0));	// 68170 retf ;~ 1FED:00B5
sub_2e566:
	// 68177 
cs=0x1fed;eip=0x0000b6; 	T(MOV(bl, unk_47bde));	// 68179 mov     bl, byte ptr unk_47BDE ;~ 1FED:00B6
cs=0x1fed;eip=0x0000ba; 	T(XOR(bh, bh));	// 68180 xor     bh, bh ;~ 1FED:00BA
cs=0x1fed;eip=0x0000bc; 	T(SHL(bx, 1));	// 68181 shl     bx, 1 ;~ 1FED:00BC
cs=0x1fed;eip=0x0000be; 	T(MOV(al, *(raddr(ds,bx+0x388))));	// 68182 mov     al, [bx+388h] ;~ 1FED:00BE
cs=0x1fed;eip=0x0000c2; 	X(MOV(unk_48014, al));	// 68183 mov     byte ptr unk_48014, al ;~ 1FED:00C2
cs=0x1fed;eip=0x0000c5; 	T(MOV(dx, *(dw*)((&unk_47ff4))));	// 68184 mov     dx, word ptr unk_47FF4 ;~ 1FED:00C5
cs=0x1fed;eip=0x0000c9; 	T(MOV(si, *(dw*)((&unk_47ffa))));	// 68185 mov     si, word ptr unk_47FFA ;~ 1FED:00C9
cs=0x1fed;eip=0x0000cd; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 68186 mov     ax, [bp+8] ;~ 1FED:00CD
cs=0x1fed;eip=0x0000d0; 	T(SHR(ax, 1));	// 68187 shr     ax, 1 ;~ 1FED:00D0
cs=0x1fed;eip=0x0000d2; 	T(SHR(ax, 1));	// 68188 shr     ax, 1 ;~ 1FED:00D2
cs=0x1fed;eip=0x0000d4; 	X(MOV(*(dw*)((&unk_4800c)), ax));	// 68189 mov     word ptr unk_4800C, ax ;~ 1FED:00D4
cs=0x1fed;eip=0x0000d7; 	T(MOV(es, *(dw*)((&unk_566ae))));	// 68190 mov     es, word ptr unk_566AE ;~ 1FED:00D7
cs=0x1fed;eip=0x0000db; 	X(MOV(*(dw*)((&unk_4800a)), 0));	// 68192 mov     word ptr unk_4800A, 0 ;~ 1FED:00DB
cs=0x1fed;eip=0x0000e1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 68193 mov     ax, [bp+0Ah] ;~ 1FED:00E1
cs=0x1fed;eip=0x0000e4; 	X(MOV(*(dw*)((&unk_4800e)), ax));	// 68194 mov     word ptr unk_4800E, ax ;~ 1FED:00E4
loc_2e597:
	// 8801 
cs=0x1fed;eip=0x0000e7; 	T(MOV(bx, *(dw*)((&unk_4800e))));	// 68197 mov     bx, word ptr unk_4800E ;~ 1FED:00E7
cs=0x1fed;eip=0x0000eb; 	T(SHL(bx, 1));	// 68198 shl     bx, 1 ;~ 1FED:00EB
cs=0x1fed;eip=0x0000ed; 	T(MOV(di, *(dw*)(raddr(ds,bx-0x1492))));	// 68199 mov     di, [bx-1492h] ;~ 1FED:00ED
cs=0x1fed;eip=0x0000f1; 	T(ADD(di, *(dw*)((&unk_4800c))));	// 68200 add     di, word ptr unk_4800C ;~ 1FED:00F1
cs=0x1fed;eip=0x0000f5; 	T(MOV(bl, unk_47ff6));	// 68201 mov     bl, byte ptr unk_47FF6 ;~ 1FED:00F5
cs=0x1fed;eip=0x0000f9; 	T(MOV(bh, 0x0C0));	// 68202 mov     bh, 0C0h ; 'À' ;~ 1FED:00F9
cs=0x1fed;eip=0x0000fb; 	T(MOV(cl, *(raddr(ss,bp+8))));	// 68203 mov     cl, [bp+8] ;~ 1FED:00FB
cs=0x1fed;eip=0x0000fe; 	T(AND(cl, 3));	// 68204 and     cl, 3 ;~ 1FED:00FE
cs=0x1fed;eip=0x000101; 	T(SHL(cl, 1));	// 68205 shl     cl, 1 ;~ 1FED:0101
cs=0x1fed;eip=0x000103; 	T(SHR(bh, cl));	// 68206 shr     bh, cl ;~ 1FED:0103
cs=0x1fed;eip=0x000105; 	T(MOV(ax, *(dw*)((&unk_47fee))));	// 68207 mov     ax, word ptr unk_47FEE ;~ 1FED:0105
cs=0x1fed;eip=0x000108; 	X(MOV(*(dw*)((&unk_48012)), ax));	// 68208 mov     word ptr unk_48012, ax ;~ 1FED:0108
cs=0x1fed;eip=0x00010b; 	X(MOV(*(dw*)((&unk_48000)), 0));	// 68209 mov     word ptr unk_48000, 0 ;~ 1FED:010B
cs=0x1fed;eip=0x000111; 	T(MOV(ah, unk_48014));	// 68210 mov     ah, byte ptr unk_48014 ;~ 1FED:0111
cs=0x1fed;eip=0x000115; 	T(MOV(ds, dx));	// 68211 mov     ds, dx ;~ 1FED:0115
cs=0x1fed;eip=0x000117; 	T(MOV(al, *(raddr(ds,si))));	// 68212 mov     al, [si] ;~ 1FED:0117
cs=0x1fed;eip=0x000119; 	T(MOV(cl, bl));	// 68213 mov     cl, bl ;~ 1FED:0119
cs=0x1fed;eip=0x00011b; 	T(SHL(al, cl));	// 68214 shl     al, cl ;~ 1FED:011B
loc_2e5cd:
	// 8802 
cs=0x1fed;eip=0x00011d; 	T(SHL(al, 1));	// 68217 shl     al, 1 ;~ 1FED:011D
cs=0x1fed;eip=0x00011f; 	R(JNC(loc_2e5df));	// 68218 jnb     short loc_2E5DF ;~ 1FED:011F
cs=0x1fed;eip=0x000121; 	T(NOT(bh));	// 68219 not     bh ;~ 1FED:0121
cs=0x1fed;eip=0x000123; 	X(AND(*(raddr(es,di)), bh));	// 68220 and     es:[di], bh ;~ 1FED:0123
cs=0x1fed;eip=0x000126; 	T(NOT(bh));	// 68221 not     bh ;~ 1FED:0126
cs=0x1fed;eip=0x000128; 	T(MOV(cl, ah));	// 68222 mov     cl, ah ;~ 1FED:0128
cs=0x1fed;eip=0x00012a; 	T(AND(cl, bh));	// 68223 and     cl, bh ;~ 1FED:012A
cs=0x1fed;eip=0x00012c; 	X(OR(*(raddr(es,di)), cl));	// 68224 or      es:[di], cl ;~ 1FED:012C
loc_2e5df:
	// 8803 
cs=0x1fed;eip=0x00012f; 	T(INC(bl));	// 68227 inc     bl ;~ 1FED:012F
cs=0x1fed;eip=0x000131; 	T(CMP(bl, 8));	// 68228 cmp     bl, 8 ;~ 1FED:0131
cs=0x1fed;eip=0x000134; 	R(JL(loc_2e5f0));	// 68229 jl      short loc_2E5F0 ;~ 1FED:0134
cs=0x1fed;eip=0x000136; 	T(XOR(bl, bl));	// 68230 xor     bl, bl ;~ 1FED:0136
cs=0x1fed;eip=0x000138; 	T(INC(si));	// 68231 inc     si ;~ 1FED:0138
cs=0x1fed;eip=0x000139; 	X(INC(*(dw*)(raddr(ss,0x650))));	// 68232 inc     word ptr ss:650h ;~ 1FED:0139
cs=0x1fed;eip=0x00013e; 	T(MOV(al, *(raddr(ds,si))));	// 68233 mov     al, [si] ;~ 1FED:013E
loc_2e5f0:
	// 8804 
cs=0x1fed;eip=0x000140; 	T(SHR(bh, 1));	// 68236 shr     bh, 1 ;~ 1FED:0140
cs=0x1fed;eip=0x000142; 	T(SHR(bh, 1));	// 68237 shr     bh, 1 ;~ 1FED:0142
cs=0x1fed;eip=0x000144; 	R(JNZ(loc_2e5f9));	// 68238 jnz     short loc_2E5F9 ;~ 1FED:0144
cs=0x1fed;eip=0x000146; 	T(MOV(bh, 0x0C0));	// 68239 mov     bh, 0C0h ; 'À' ;~ 1FED:0146
cs=0x1fed;eip=0x000148; 	T(INC(di));	// 68240 inc     di ;~ 1FED:0148
loc_2e5f9:
	// 8805 
cs=0x1fed;eip=0x000149; 	X(DEC(*(dw*)(raddr(ss,0x662))));	// 68243 dec     word ptr ss:662h ;~ 1FED:0149
cs=0x1fed;eip=0x00014e; 	R(JNZ(loc_2e5cd));	// 68244 jnz     short loc_2E5CD ;~ 1FED:014E
cs=0x1fed;eip=0x000150; 	T(MOV(ax, ss));	// 68245 mov     ax, ss ;~ 1FED:0150
cs=0x1fed;eip=0x000152; 	T(MOV(ds, ax));	// 68246 mov     ds, ax ;~ 1FED:0152
cs=0x1fed;eip=0x000154; 	T(ADD(si, *(dw*)((&unk_47ff0))));	// 68247 add     si, word ptr unk_47FF0 ;~ 1FED:0154
cs=0x1fed;eip=0x000158; 	T(SUB(si, *(dw*)((&unk_48000))));	// 68248 sub     si, word ptr unk_48000 ;~ 1FED:0158
cs=0x1fed;eip=0x00015c; 	X(INC(*(dw*)((&unk_4800a))));	// 68249 inc     word ptr unk_4800A ;~ 1FED:015C
cs=0x1fed;eip=0x000160; 	X(INC(*(dw*)((&unk_4800e))));	// 68250 inc     word ptr unk_4800E ;~ 1FED:0160
cs=0x1fed;eip=0x000164; 	T(MOV(ax, *(dw*)((&unk_4800a))));	// 68251 mov     ax, word ptr unk_4800A ;~ 1FED:0164
cs=0x1fed;eip=0x000167; 	T(CMP(ax, *(dw*)((&unk_47ff2))));	// 68252 cmp     ax, word ptr unk_47FF2 ;~ 1FED:0167
cs=0x1fed;eip=0x00016b; 	R(JGE(locret_2e620));	// 68253 jge     short locret_2E620 ;~ 1FED:016B
cs=0x1fed;eip=0x00016d; 	R(JMP(loc_2e597));	// 68254 jmp     loc_2E597 ;~ 1FED:016D
locret_2e620:
	// 8806 
cs=0x1fed;eip=0x000170; 	R(RETN(0));	// 68258 retn ;~ 1FED:0170
sub_2e621:
	// 68265 
cs=0x1fed;eip=0x000171; 	T(MOV(dx, *(dw*)((&unk_47ff4))));	// 68267 mov     dx, word ptr unk_47FF4 ;~ 1FED:0171
cs=0x1fed;eip=0x000175; 	T(MOV(si, *(dw*)((&unk_47ffa))));	// 68268 mov     si, word ptr unk_47FFA ;~ 1FED:0175
cs=0x1fed;eip=0x000179; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 68269 mov     ax, [bp+8] ;~ 1FED:0179
cs=0x1fed;eip=0x00017c; 	X(MOV(*(dw*)((&unk_4800c)), ax));	// 68270 mov     word ptr unk_4800C, ax ;~ 1FED:017C
cs=0x1fed;eip=0x00017f; 	T(MOV(es, *(dw*)((&unk_566ae))));	// 68271 mov     es, word ptr unk_566AE ;~ 1FED:017F
cs=0x1fed;eip=0x000183; 	X(MOV(*(dw*)((&unk_4800a)), 0));	// 68272 mov     word ptr unk_4800A, 0 ;~ 1FED:0183
cs=0x1fed;eip=0x000189; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 68273 mov     ax, [bp+0Ah] ;~ 1FED:0189
cs=0x1fed;eip=0x00018c; 	X(MOV(*(dw*)((&unk_4800e)), ax));	// 68274 mov     word ptr unk_4800E, ax ;~ 1FED:018C
loc_2e63f:
	// 8807 
cs=0x1fed;eip=0x00018f; 	T(MOV(bx, *(dw*)((&unk_4800e))));	// 68277 mov     bx, word ptr unk_4800E ;~ 1FED:018F
cs=0x1fed;eip=0x000193; 	T(SHL(bx, 1));	// 68278 shl     bx, 1 ;~ 1FED:0193
cs=0x1fed;eip=0x000195; 	T(MOV(di, *(dw*)(raddr(ds,bx-0x1492))));	// 68279 mov     di, [bx-1492h] ;~ 1FED:0195
cs=0x1fed;eip=0x000199; 	T(ADD(di, *(dw*)((&unk_4800c))));	// 68280 add     di, word ptr unk_4800C ;~ 1FED:0199
cs=0x1fed;eip=0x00019d; 	T(MOV(bl, unk_47ff6));	// 68281 mov     bl, byte ptr unk_47FF6 ;~ 1FED:019D
cs=0x1fed;eip=0x0001a1; 	T(MOV(ax, *(dw*)((&unk_47fee))));	// 68282 mov     ax, word ptr unk_47FEE ;~ 1FED:01A1
cs=0x1fed;eip=0x0001a4; 	X(MOV(*(dw*)((&unk_48012)), ax));	// 68283 mov     word ptr unk_48012, ax ;~ 1FED:01A4
cs=0x1fed;eip=0x0001a7; 	X(MOV(*(dw*)((&unk_48000)), 0));	// 68284 mov     word ptr unk_48000, 0 ;~ 1FED:01A7
cs=0x1fed;eip=0x0001ad; 	T(MOV(ds, dx));	// 68285 mov     ds, dx ;~ 1FED:01AD
cs=0x1fed;eip=0x0001af; 	T(MOV(al, *(raddr(ds,si))));	// 68286 mov     al, [si] ;~ 1FED:01AF
cs=0x1fed;eip=0x0001b1; 	T(MOV(cl, bl));	// 68287 mov     cl, bl ;~ 1FED:01B1
cs=0x1fed;eip=0x0001b3; 	T(SHL(al, cl));	// 68288 shl     al, cl ;~ 1FED:01B3
loc_2e665:
	// 8808 
cs=0x1fed;eip=0x0001b5; 	T(SHL(al, 1));	// 68291 shl     al, 1 ;~ 1FED:01B5
cs=0x1fed;eip=0x0001b7; 	R(JNC(loc_2e671));	// 68292 jnb     short loc_2E671 ;~ 1FED:01B7
cs=0x1fed;eip=0x0001b9; 	T(MOV(cl, *(raddr(ss,0x22E))));	// 68293 mov     cl, ss:22Eh ;~ 1FED:01B9
cs=0x1fed;eip=0x0001be; 	X(MOV(*(raddr(es,di)), cl));	// 68294 mov     es:[di], cl ;~ 1FED:01BE
loc_2e671:
	// 8809 
cs=0x1fed;eip=0x0001c1; 	T(INC(bl));	// 68297 inc     bl ;~ 1FED:01C1
cs=0x1fed;eip=0x0001c3; 	T(CMP(bl, 8));	// 68298 cmp     bl, 8 ;~ 1FED:01C3
cs=0x1fed;eip=0x0001c6; 	R(JL(loc_2e682));	// 68299 jl      short loc_2E682 ;~ 1FED:01C6
cs=0x1fed;eip=0x0001c8; 	T(XOR(bl, bl));	// 68300 xor     bl, bl ;~ 1FED:01C8
cs=0x1fed;eip=0x0001ca; 	T(INC(si));	// 68301 inc     si ;~ 1FED:01CA
cs=0x1fed;eip=0x0001cb; 	X(INC(*(dw*)(raddr(ss,0x650))));	// 68302 inc     word ptr ss:650h ;~ 1FED:01CB
cs=0x1fed;eip=0x0001d0; 	T(MOV(al, *(raddr(ds,si))));	// 68303 mov     al, [si] ;~ 1FED:01D0
loc_2e682:
	// 8810 
cs=0x1fed;eip=0x0001d2; 	T(INC(di));	// 68306 inc     di ;~ 1FED:01D2
cs=0x1fed;eip=0x0001d3; 	X(DEC(*(dw*)(raddr(ss,0x662))));	// 68307 dec     word ptr ss:662h ;~ 1FED:01D3
cs=0x1fed;eip=0x0001d8; 	R(JNZ(loc_2e665));	// 68308 jnz     short loc_2E665 ;~ 1FED:01D8
cs=0x1fed;eip=0x0001da; 	T(MOV(ax, ss));	// 68309 mov     ax, ss ;~ 1FED:01DA
cs=0x1fed;eip=0x0001dc; 	T(MOV(ds, ax));	// 68310 mov     ds, ax ;~ 1FED:01DC
cs=0x1fed;eip=0x0001de; 	T(ADD(si, *(dw*)((&unk_47ff0))));	// 68311 add     si, word ptr unk_47FF0 ;~ 1FED:01DE
cs=0x1fed;eip=0x0001e2; 	T(SUB(si, *(dw*)((&unk_48000))));	// 68312 sub     si, word ptr unk_48000 ;~ 1FED:01E2
cs=0x1fed;eip=0x0001e6; 	X(INC(*(dw*)((&unk_4800a))));	// 68313 inc     word ptr unk_4800A ;~ 1FED:01E6
cs=0x1fed;eip=0x0001ea; 	X(INC(*(dw*)((&unk_4800e))));	// 68314 inc     word ptr unk_4800E ;~ 1FED:01EA
cs=0x1fed;eip=0x0001ee; 	T(MOV(ax, *(dw*)((&unk_4800a))));	// 68315 mov     ax, word ptr unk_4800A ;~ 1FED:01EE
cs=0x1fed;eip=0x0001f1; 	T(CMP(ax, *(dw*)((&unk_47ff2))));	// 68316 cmp     ax, word ptr unk_47FF2 ;~ 1FED:01F1
cs=0x1fed;eip=0x0001f5; 	R(JL(loc_2e63f));	// 68317 jl      short loc_2E63F ;~ 1FED:01F5
cs=0x1fed;eip=0x0001f7; 	R(RETN(0));	// 68318 retn ;~ 1FED:01F7
sub_2e6a8:
	// 68325 
cs=0x1fed;eip=0x0001f8; 	T(MOV(dx, *(dw*)((&unk_47ff4))));	// 68327 mov     dx, word ptr unk_47FF4 ;~ 1FED:01F8
cs=0x1fed;eip=0x0001fc; 	T(MOV(si, *(dw*)((&unk_47ffa))));	// 68328 mov     si, word ptr unk_47FFA ;~ 1FED:01FC
cs=0x1fed;eip=0x000200; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 68329 mov     ax, [bp+8] ;~ 1FED:0200
cs=0x1fed;eip=0x000203; 	T(SHR(ax, 1));	// 68330 shr     ax, 1 ;~ 1FED:0203
cs=0x1fed;eip=0x000205; 	X(MOV(*(dw*)((&unk_4800c)), ax));	// 68331 mov     word ptr unk_4800C, ax ;~ 1FED:0205
cs=0x1fed;eip=0x000208; 	T(MOV(es, *(dw*)((&unk_566ae))));	// 68332 mov     es, word ptr unk_566AE ;~ 1FED:0208
cs=0x1fed;eip=0x00020c; 	X(MOV(*(dw*)((&unk_4800a)), 0));	// 68333 mov     word ptr unk_4800A, 0 ;~ 1FED:020C
cs=0x1fed;eip=0x000212; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 68334 mov     ax, [bp+0Ah] ;~ 1FED:0212
cs=0x1fed;eip=0x000215; 	X(MOV(*(dw*)((&unk_4800e)), ax));	// 68335 mov     word ptr unk_4800E, ax ;~ 1FED:0215
loc_2e6c8:
	// 8811 
cs=0x1fed;eip=0x000218; 	T(MOV(bx, *(dw*)((&unk_4800e))));	// 68338 mov     bx, word ptr unk_4800E ;~ 1FED:0218
cs=0x1fed;eip=0x00021c; 	T(SHL(bx, 1));	// 68339 shl     bx, 1 ;~ 1FED:021C
cs=0x1fed;eip=0x00021e; 	T(MOV(di, *(dw*)(raddr(ds,bx-0x1492))));	// 68340 mov     di, [bx-1492h] ;~ 1FED:021E
cs=0x1fed;eip=0x000222; 	T(ADD(di, *(dw*)((&unk_4800c))));	// 68341 add     di, word ptr unk_4800C ;~ 1FED:0222
cs=0x1fed;eip=0x000226; 	T(MOV(bl, unk_47ff6));	// 68342 mov     bl, byte ptr unk_47FF6 ;~ 1FED:0226
cs=0x1fed;eip=0x00022a; 	T(MOV(bh, 0x0F0));	// 68343 mov     bh, 0F0h ; 'ğ' ;~ 1FED:022A
cs=0x1fed;eip=0x00022c; 	T(TEST(*(raddr(ss,bp+8)), 1));	// 68344 test    byte ptr [bp+8], 1 ;~ 1FED:022C
cs=0x1fed;eip=0x000230; 	R(JZ(loc_2e6e4));	// 68345 jz      short loc_2E6E4 ;~ 1FED:0230
cs=0x1fed;eip=0x000232; 	T(NOT(bh));	// 68346 not     bh ;~ 1FED:0232
loc_2e6e4:
	// 8812 
cs=0x1fed;eip=0x000234; 	T(MOV(ax, *(dw*)((&unk_47fee))));	// 68349 mov     ax, word ptr unk_47FEE ;~ 1FED:0234
cs=0x1fed;eip=0x000237; 	X(MOV(*(dw*)((&unk_48012)), ax));	// 68350 mov     word ptr unk_48012, ax ;~ 1FED:0237
cs=0x1fed;eip=0x00023a; 	X(MOV(*(dw*)((&unk_48000)), 0));	// 68351 mov     word ptr unk_48000, 0 ;~ 1FED:023A
cs=0x1fed;eip=0x000240; 	T(MOV(ah, unk_47bde));	// 68352 mov     ah, byte ptr unk_47BDE ;~ 1FED:0240
cs=0x1fed;eip=0x000244; 	T(MOV(cl, 4));	// 68353 mov     cl, 4 ;~ 1FED:0244
cs=0x1fed;eip=0x000246; 	T(SHL(ah, cl));	// 68354 shl     ah, cl ;~ 1FED:0246
cs=0x1fed;eip=0x000248; 	T(OR(ah, unk_47bde));	// 68355 or      ah, byte ptr unk_47BDE ;~ 1FED:0248
cs=0x1fed;eip=0x00024c; 	T(MOV(ds, dx));	// 68356 mov     ds, dx ;~ 1FED:024C
cs=0x1fed;eip=0x00024e; 	T(MOV(al, *(raddr(ds,si))));	// 68357 mov     al, [si] ;~ 1FED:024E
cs=0x1fed;eip=0x000250; 	T(MOV(cl, bl));	// 68358 mov     cl, bl ;~ 1FED:0250
cs=0x1fed;eip=0x000252; 	T(SHL(al, cl));	// 68359 shl     al, cl ;~ 1FED:0252
loc_2e704:
	// 8813 
cs=0x1fed;eip=0x000254; 	T(SHL(al, 1));	// 68362 shl     al, 1 ;~ 1FED:0254
cs=0x1fed;eip=0x000256; 	R(JNC(loc_2e716));	// 68363 jnb     short loc_2E716 ;~ 1FED:0256
cs=0x1fed;eip=0x000258; 	T(NOT(bh));	// 68364 not     bh ;~ 1FED:0258
cs=0x1fed;eip=0x00025a; 	X(AND(*(raddr(es,di)), bh));	// 68365 and     es:[di], bh ;~ 1FED:025A
cs=0x1fed;eip=0x00025d; 	T(NOT(bh));	// 68366 not     bh ;~ 1FED:025D
cs=0x1fed;eip=0x00025f; 	T(MOV(cl, ah));	// 68367 mov     cl, ah ;~ 1FED:025F
cs=0x1fed;eip=0x000261; 	T(AND(cl, bh));	// 68368 and     cl, bh ;~ 1FED:0261
cs=0x1fed;eip=0x000263; 	X(OR(*(raddr(es,di)), cl));	// 68369 or      es:[di], cl ;~ 1FED:0263
loc_2e716:
	// 8814 
cs=0x1fed;eip=0x000266; 	T(INC(bl));	// 68372 inc     bl ;~ 1FED:0266
cs=0x1fed;eip=0x000268; 	T(CMP(bl, 8));	// 68373 cmp     bl, 8 ;~ 1FED:0268
cs=0x1fed;eip=0x00026b; 	R(JL(loc_2e727));	// 68374 jl      short loc_2E727 ;~ 1FED:026B
cs=0x1fed;eip=0x00026d; 	T(XOR(bl, bl));	// 68375 xor     bl, bl ;~ 1FED:026D
cs=0x1fed;eip=0x00026f; 	T(INC(si));	// 68376 inc     si ;~ 1FED:026F
cs=0x1fed;eip=0x000270; 	X(INC(*(dw*)(raddr(ss,0x650))));	// 68377 inc     word ptr ss:650h ;~ 1FED:0270
cs=0x1fed;eip=0x000275; 	T(MOV(al, *(raddr(ds,si))));	// 68378 mov     al, [si] ;~ 1FED:0275
loc_2e727:
	// 8815 
cs=0x1fed;eip=0x000277; 	T(NOT(bh));	// 68381 not     bh ;~ 1FED:0277
cs=0x1fed;eip=0x000279; 	T(CMP(bh, 0x0F0));	// 68382 cmp     bh, 0F0h ; 'ğ' ;~ 1FED:0279
cs=0x1fed;eip=0x00027c; 	R(JNZ(loc_2e72f));	// 68383 jnz     short loc_2E72F ;~ 1FED:027C
cs=0x1fed;eip=0x00027e; 	T(INC(di));	// 68384 inc     di ;~ 1FED:027E
loc_2e72f:
	// 8816 
cs=0x1fed;eip=0x00027f; 	X(DEC(*(dw*)(raddr(ss,0x662))));	// 68387 dec     word ptr ss:662h ;~ 1FED:027F
cs=0x1fed;eip=0x000284; 	R(JNZ(loc_2e704));	// 68388 jnz     short loc_2E704 ;~ 1FED:0284
cs=0x1fed;eip=0x000286; 	T(MOV(ax, ss));	// 68389 mov     ax, ss ;~ 1FED:0286
cs=0x1fed;eip=0x000288; 	T(MOV(ds, ax));	// 68390 mov     ds, ax ;~ 1FED:0288
cs=0x1fed;eip=0x00028a; 	T(ADD(si, *(dw*)((&unk_47ff0))));	// 68391 add     si, word ptr unk_47FF0 ;~ 1FED:028A
cs=0x1fed;eip=0x00028e; 	T(SUB(si, *(dw*)((&unk_48000))));	// 68392 sub     si, word ptr unk_48000 ;~ 1FED:028E
cs=0x1fed;eip=0x000292; 	X(INC(*(dw*)((&unk_4800a))));	// 68393 inc     word ptr unk_4800A ;~ 1FED:0292
cs=0x1fed;eip=0x000296; 	X(INC(*(dw*)((&unk_4800e))));	// 68394 inc     word ptr unk_4800E ;~ 1FED:0296
cs=0x1fed;eip=0x00029a; 	T(MOV(ax, *(dw*)((&unk_4800a))));	// 68395 mov     ax, word ptr unk_4800A ;~ 1FED:029A
cs=0x1fed;eip=0x00029d; 	T(CMP(ax, *(dw*)((&unk_47ff2))));	// 68396 cmp     ax, word ptr unk_47FF2 ;~ 1FED:029D
cs=0x1fed;eip=0x0002a1; 	R(JGE(locret_2e756));	// 68397 jge     short locret_2E756 ;~ 1FED:02A1
cs=0x1fed;eip=0x0002a3; 	R(JMP(loc_2e6c8));	// 68398 jmp     loc_2E6C8 ;~ 1FED:02A3
locret_2e756:
	// 8817 
cs=0x1fed;eip=0x0002a6; 	R(RETN(0));	// 68402 retn ;~ 1FED:02A6
sub_2e757:
	// 68409 
cs=0x1fed;eip=0x0002a7; 	T(MOV(dx, 0x3CE));	// 68411 mov     dx, 3CEh ;~ 1FED:02A7
cs=0x1fed;eip=0x0002aa; 	T(MOV(ax, 0x0A05));	// 68412 mov     ax, 0A05h ;~ 1FED:02AA
cs=0x1fed;eip=0x0002ad; 	R(OUT(dx, ax));	// 68413 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1FED:02AD
cs=0x1fed;eip=0x0002ae; 	T(MOV(ax, 3));	// 68415 mov     ax, 3 ;~ 1FED:02AE
cs=0x1fed;eip=0x0002b1; 	R(OUT(dx, ax));	// 68416 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1FED:02B1
cs=0x1fed;eip=0x0002b2; 	T(MOV(ax, 7));	// 68421 mov     ax, 7 ;~ 1FED:02B2
cs=0x1fed;eip=0x0002b5; 	R(OUT(dx, ax));	// 68422 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1FED:02B5
cs=0x1fed;eip=0x0002b6; 	T(MOV(si, *(dw*)((&unk_47ffa))));	// 68425 mov     si, word ptr unk_47FFA ;~ 1FED:02B6
cs=0x1fed;eip=0x0002ba; 	T(MOV(ax, si));	// 68426 mov     ax, si ;~ 1FED:02BA
cs=0x1fed;eip=0x0002bc; 	T(ADD(ax, *(dw*)((&unk_47ff0))));	// 68427 add     ax, word ptr unk_47FF0 ;~ 1FED:02BC
cs=0x1fed;eip=0x0002c0; 	X(MOV(*(dw*)((&unk_47ffe)), ax));	// 68428 mov     word ptr unk_47FFE, ax ;~ 1FED:02C0
cs=0x1fed;eip=0x0002c3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 68429 mov     ax, [bp+8] ;~ 1FED:02C3
cs=0x1fed;eip=0x0002c6; 	T(MOV(cl, 3));	// 68430 mov     cl, 3 ;~ 1FED:02C6
cs=0x1fed;eip=0x0002c8; 	T(SHR(ax, cl));	// 68431 shr     ax, cl ;~ 1FED:02C8
cs=0x1fed;eip=0x0002ca; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0A))));	// 68432 mov     bx, [bp+0Ah] ;~ 1FED:02CA
cs=0x1fed;eip=0x0002cd; 	T(SHL(bx, 1));	// 68433 shl     bx, 1 ;~ 1FED:02CD
cs=0x1fed;eip=0x0002cf; 	T(ADD(ax, *(dw*)(raddr(ds,bx-0x1492))));	// 68434 add     ax, [bx-1492h] ;~ 1FED:02CF
cs=0x1fed;eip=0x0002d3; 	X(MOV(*(dw*)((&unk_48010)), ax));	// 68435 mov     word ptr unk_48010, ax ;~ 1FED:02D3
cs=0x1fed;eip=0x0002d6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 68436 mov     ax, [bp+8] ;~ 1FED:02D6
cs=0x1fed;eip=0x0002d9; 	T(AND(ax, 7));	// 68437 and     ax, 7 ;~ 1FED:02D9
cs=0x1fed;eip=0x0002dc; 	T(SUB(ax, *(dw*)((&unk_47ff6))));	// 68438 sub     ax, word ptr unk_47FF6 ;~ 1FED:02DC
cs=0x1fed;eip=0x0002e0; 	X(MOV(unk_48015, al));	// 68439 mov     byte ptr unk_48015, al ;~ 1FED:02E0
cs=0x1fed;eip=0x0002e3; 	T(MOV(bx, *(dw*)((&unk_48000))));	// 68440 mov     bx, word ptr unk_48000 ;~ 1FED:02E3
cs=0x1fed;eip=0x0002e7; 	T(CBW);	// 68441 cbw ;~ 1FED:02E7
cs=0x1fed;eip=0x0002e8; 	T(ADD(ax, *(dw*)((&unk_47ff8))));	// 68442 add     ax, word ptr unk_47FF8 ;~ 1FED:02E8
cs=0x1fed;eip=0x0002ec; 	T(CMP(ax, 7));	// 68443 cmp     ax, 7 ;~ 1FED:02EC
cs=0x1fed;eip=0x0002ef; 	R(JL(loc_2e7a2));	// 68444 jl      short loc_2E7A2 ;~ 1FED:02EF
cs=0x1fed;eip=0x0002f1; 	T(INC(bx));	// 68445 inc     bx ;~ 1FED:02F1
loc_2e7a2:
	// 8818 
cs=0x1fed;eip=0x0002f2; 	X(MOV(*(dw*)((&unk_48002)), bx));	// 68448 mov     word ptr unk_48002, bx ;~ 1FED:02F2
cs=0x1fed;eip=0x0002f6; 	X(MOV(*(dw*)((&unk_4800a)), 0));	// 68449 mov     word ptr unk_4800A, 0 ;~ 1FED:02F6
loc_2e7ac:
	// 8819 
cs=0x1fed;eip=0x0002fc; 	T(MOV(cx, *(dw*)((&unk_48000))));	// 68452 mov     cx, word ptr unk_48000 ;~ 1FED:02FC
cs=0x1fed;eip=0x000300; 	T(MOV(ax, ds));	// 68453 mov     ax, ds ;~ 1FED:0300
cs=0x1fed;eip=0x000302; 	T(MOV(es, ax));	// 68454 mov     es, ax ;~ 1FED:0302
cs=0x1fed;eip=0x000304; 	T(MOV(ds, *(dw*)((&unk_47ff4))));	// 68456 mov     ds, word ptr unk_47FF4 ;~ 1FED:0304
cs=0x1fed;eip=0x000308; 	T(MOV(di, 0x624));	// 68457 mov     di, 624h ;~ 1FED:0308
	// 68458 rep movsb ;~ 1FED:030B
cs=0x1fed;eip=0x00030b; 	X(	REP MOVSB);	// 68458 rep movsb ;~ 1FED:030B
cs=0x1fed;eip=0x00030d; 	T(MOV(ax, ss));	// 68459 mov     ax, ss ;~ 1FED:030D
cs=0x1fed;eip=0x00030f; 	T(MOV(ds, ax));	// 68460 mov     ds, ax ;~ 1FED:030F
cs=0x1fed;eip=0x000311; 	T(MOV(bx, *(dw*)((&unk_47ff6))));	// 68461 mov     bx, word ptr unk_47FF6 ;~ 1FED:0311
cs=0x1fed;eip=0x000315; 	T(AND(bx, 7));	// 68462 and     bx, 7 ;~ 1FED:0315
cs=0x1fed;eip=0x000318; 	T(MOV(al, *(raddr(ds,bx+0x62E))));	// 68463 mov     al, [bx+62Eh] ;~ 1FED:0318
cs=0x1fed;eip=0x00031c; 	X(AND(unk_47fd4, al));	// 68464 and     byte ptr unk_47FD4, al ;~ 1FED:031C
cs=0x1fed;eip=0x000320; 	T(MOV(bx, *(dw*)((&unk_47ff8))));	// 68465 mov     bx, word ptr unk_47FF8 ;~ 1FED:0320
cs=0x1fed;eip=0x000324; 	T(AND(bx, 7));	// 68466 and     bx, 7 ;~ 1FED:0324
cs=0x1fed;eip=0x000327; 	T(MOV(al, *(raddr(ds,bx+0x636))));	// 68467 mov     al, [bx+636h] ;~ 1FED:0327
cs=0x1fed;eip=0x00032b; 	T(MOV(bx, *(dw*)((&unk_48000))));	// 68468 mov     bx, word ptr unk_48000 ;~ 1FED:032B
cs=0x1fed;eip=0x00032f; 	T(DEC(bx));	// 68469 dec     bx ;~ 1FED:032F
cs=0x1fed;eip=0x000330; 	X(AND(*(raddr(ds,bx+0x624)), al));	// 68470 and     [bx+624h], al ;~ 1FED:0330
cs=0x1fed;eip=0x000334; 	X(MOV(*(raddr(ds,bx+0x625)), 0));	// 68471 mov     byte ptr [bx+625h], 0 ;~ 1FED:0334
cs=0x1fed;eip=0x000339; 	T(MOV(bl, unk_48015));	// 68472 mov     bl, byte ptr unk_48015 ;~ 1FED:0339
cs=0x1fed;eip=0x00033d; 	T(OR(bl, bl));	// 68473 or      bl, bl ;~ 1FED:033D
cs=0x1fed;eip=0x00033f; 	R(JG(loc_2e7f5));	// 68474 jg      short loc_2E7F5 ;~ 1FED:033F
cs=0x1fed;eip=0x000341; 	R(JL(loc_2e814));	// 68475 jl      short loc_2E814 ;~ 1FED:0341
cs=0x1fed;eip=0x000343; 	R(JMP(loc_2e835));	// 68476 jmp     short loc_2E835 ;~ 1FED:0343
loc_2e7f5:
	// 8820 
cs=0x1fed;eip=0x000345; 	T(MOV(si, 0x624));	// 68481 mov     si, 624h ;~ 1FED:0345
cs=0x1fed;eip=0x000348; 	T(MOV(cx, *(dw*)((&unk_48002))));	// 68482 mov     cx, word ptr unk_48002 ;~ 1FED:0348
cs=0x1fed;eip=0x00034c; 	T(XOR(ah, ah));	// 68483 xor     ah, ah ;~ 1FED:034C
loc_2e7fe:
	// 8821 
cs=0x1fed;eip=0x00034e; 	T(MOV(al, *(raddr(ds,si))));	// 68486 mov     al, [si] ;~ 1FED:034E
cs=0x1fed;eip=0x000350; 	T(MOV(bh, al));	// 68487 mov     bh, al ;~ 1FED:0350
cs=0x1fed;eip=0x000352; 	T(SHR(ah, 1));	// 68488 shr     ah, 1 ;~ 1FED:0352
cs=0x1fed;eip=0x000354; 	T(RCR(al, 1));	// 68489 rcr     al, 1 ;~ 1FED:0354
cs=0x1fed;eip=0x000356; 	T(MOV(ah, bh));	// 68490 mov     ah, bh ;~ 1FED:0356
cs=0x1fed;eip=0x000358; 	X(MOV(*(raddr(ds,si)), al));	// 68491 mov     [si], al ;~ 1FED:0358
cs=0x1fed;eip=0x00035a; 	T(INC(si));	// 68492 inc     si ;~ 1FED:035A
cs=0x1fed;eip=0x00035b; 	R(LOOP(loc_2e7fe));	// 68493 loop    loc_2E7FE ;~ 1FED:035B
cs=0x1fed;eip=0x00035d; 	T(DEC(bl));	// 68494 dec     bl ;~ 1FED:035D
cs=0x1fed;eip=0x00035f; 	R(JNZ(loc_2e7f5));	// 68495 jnz     short loc_2E7F5 ;~ 1FED:035F
cs=0x1fed;eip=0x000361; 	R(JMP(loc_2e835));	// 68496 jmp     short loc_2E835 ;~ 1FED:0361
loc_2e814:
	// 8822 
cs=0x1fed;eip=0x000364; 	T(NEG(bl));	// 68501 neg     bl ;~ 1FED:0364
loc_2e816:
	// 8823 
cs=0x1fed;eip=0x000366; 	T(MOV(cx, *(dw*)((&unk_48000))));	// 68504 mov     cx, word ptr unk_48000 ;~ 1FED:0366
cs=0x1fed;eip=0x00036a; 	T(MOV(si, cx));	// 68505 mov     si, cx ;~ 1FED:036A
cs=0x1fed;eip=0x00036c; 	T(ADD(si, 0x623));	// 68506 add     si, 623h ;~ 1FED:036C
cs=0x1fed;eip=0x000370; 	T(XOR(ah, ah));	// 68507 xor     ah, ah ;~ 1FED:0370
loc_2e822:
	// 8824 
cs=0x1fed;eip=0x000372; 	T(MOV(al, *(raddr(ds,si))));	// 68510 mov     al, [si] ;~ 1FED:0372
cs=0x1fed;eip=0x000374; 	T(MOV(bh, al));	// 68511 mov     bh, al ;~ 1FED:0374
cs=0x1fed;eip=0x000376; 	T(SHL(ah, 1));	// 68512 shl     ah, 1 ;~ 1FED:0376
cs=0x1fed;eip=0x000378; 	T(RCL(al, 1));	// 68513 rcl     al, 1 ;~ 1FED:0378
cs=0x1fed;eip=0x00037a; 	T(MOV(ah, bh));	// 68514 mov     ah, bh ;~ 1FED:037A
cs=0x1fed;eip=0x00037c; 	X(MOV(*(raddr(ds,si)), al));	// 68515 mov     [si], al ;~ 1FED:037C
cs=0x1fed;eip=0x00037e; 	T(DEC(si));	// 68516 dec     si ;~ 1FED:037E
cs=0x1fed;eip=0x00037f; 	R(LOOP(loc_2e822));	// 68517 loop    loc_2E822 ;~ 1FED:037F
cs=0x1fed;eip=0x000381; 	T(DEC(bl));	// 68518 dec     bl ;~ 1FED:0381
cs=0x1fed;eip=0x000383; 	R(JNZ(loc_2e816));	// 68519 jnz     short loc_2E816 ;~ 1FED:0383
loc_2e835:
	// 8825 
cs=0x1fed;eip=0x000385; 	T(MOV(si, 0x624));	// 68523 mov     si, 624h ;~ 1FED:0385
cs=0x1fed;eip=0x000388; 	T(MOV(di, *(dw*)((&unk_48010))));	// 68524 mov     di, word ptr unk_48010 ;~ 1FED:0388
cs=0x1fed;eip=0x00038c; 	T(MOV(es, *(dw*)((&unk_566ae))));	// 68525 mov     es, word ptr unk_566AE ;~ 1FED:038C
cs=0x1fed;eip=0x000390; 	T(MOV(bl, unk_47bde));	// 68527 mov     bl, byte ptr unk_47BDE ;~ 1FED:0390
cs=0x1fed;eip=0x000394; 	T(MOV(dx, 0x3CE));	// 68528 mov     dx, 3CEh ;~ 1FED:0394
cs=0x1fed;eip=0x000397; 	T(MOV(al, 8));	// 68529 mov     al, 8 ;~ 1FED:0397
cs=0x1fed;eip=0x000399; 	R(OUT(dx, al));	// 68530 out     dx, al          ; EGA: graph 1 and 2 addr reg: ;~ 1FED:0399
cs=0x1fed;eip=0x00039a; 	T(INC(dx));	// 68533 inc     dx ;~ 1FED:039A
cs=0x1fed;eip=0x00039b; 	T(MOV(cx, *(dw*)((&unk_48002))));	// 68534 mov     cx, word ptr unk_48002 ;~ 1FED:039B
loc_2e84f:
	// 8826 
cs=0x1fed;eip=0x00039f; 	T(LODSB);	// 68537 lodsb ;~ 1FED:039F
cs=0x1fed;eip=0x0003a0; 	R(OUT(dx, al));	// 68538 out     dx, al          ; EGA port: graphics controller data register ;~ 1FED:03A0
cs=0x1fed;eip=0x0003a1; 	X(AND(*(raddr(es,di)), bl));	// 68539 and     es:[di], bl ;~ 1FED:03A1
cs=0x1fed;eip=0x0003a4; 	T(INC(di));	// 68540 inc     di ;~ 1FED:03A4
cs=0x1fed;eip=0x0003a5; 	R(LOOP(loc_2e84f));	// 68541 loop    loc_2E84F ;~ 1FED:03A5
cs=0x1fed;eip=0x0003a7; 	T(MOV(si, *(dw*)((&unk_47ffe))));	// 68542 mov     si, word ptr unk_47FFE ;~ 1FED:03A7
cs=0x1fed;eip=0x0003ab; 	T(MOV(ax, si));	// 68543 mov     ax, si ;~ 1FED:03AB
cs=0x1fed;eip=0x0003ad; 	T(ADD(ax, *(dw*)((&unk_47ff0))));	// 68544 add     ax, word ptr unk_47FF0 ;~ 1FED:03AD
cs=0x1fed;eip=0x0003b1; 	X(MOV(*(dw*)((&unk_47ffe)), ax));	// 68545 mov     word ptr unk_47FFE, ax ;~ 1FED:03B1
cs=0x1fed;eip=0x0003b4; 	T(MOV(ax, word_5650e));	// 68546 mov     ax, word_5650E ;~ 1FED:03B4
cs=0x1fed;eip=0x0003b7; 	X(ADD(*(dw*)((&unk_48010)), ax));	// 68547 add     word ptr unk_48010, ax ;~ 1FED:03B7
cs=0x1fed;eip=0x0003bb; 	X(INC(*(dw*)((&unk_4800a))));	// 68548 inc     word ptr unk_4800A ;~ 1FED:03BB
cs=0x1fed;eip=0x0003bf; 	T(MOV(ax, *(dw*)((&unk_4800a))));	// 68549 mov     ax, word ptr unk_4800A ;~ 1FED:03BF
cs=0x1fed;eip=0x0003c2; 	T(CMP(ax, *(dw*)((&unk_47ff2))));	// 68550 cmp     ax, word ptr unk_47FF2 ;~ 1FED:03C2
cs=0x1fed;eip=0x0003c6; 	R(JGE(loc_2e87b));	// 68551 jge     short loc_2E87B ;~ 1FED:03C6
cs=0x1fed;eip=0x0003c8; 	R(JMP(loc_2e7ac));	// 68552 jmp     loc_2E7AC ;~ 1FED:03C8
loc_2e87b:
	// 8827 
cs=0x1fed;eip=0x0003cb; 	T(MOV(dx, 0x3CE));	// 68556 mov     dx, 3CEh ;~ 1FED:03CB
cs=0x1fed;eip=0x0003ce; 	T(MOV(ax, 5));	// 68557 mov     ax, 5 ;~ 1FED:03CE
cs=0x1fed;eip=0x0003d1; 	R(OUT(dx, ax));	// 68558 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1FED:03D1
cs=0x1fed;eip=0x0003d2; 	T(MOV(dx, 0x3CE));	// 68565 mov     dx, 3CEh ;~ 1FED:03D2
cs=0x1fed;eip=0x0003d5; 	T(MOV(ax, 0x0FF08));	// 68566 mov     ax, 0FF08h ;~ 1FED:03D5
cs=0x1fed;eip=0x0003d8; 	R(OUT(dx, ax));	// 68567 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1FED:03D8
cs=0x1fed;eip=0x0003d9; 	R(RETN(0));	// 68569 retn ;~ 1FED:03D9

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_2e562: 	goto loc_2e562;
        case m2c::kloc_2e597: 	goto loc_2e597;
        case m2c::kloc_2e5cd: 	goto loc_2e5cd;
        case m2c::kloc_2e5df: 	goto loc_2e5df;
        case m2c::kloc_2e5f0: 	goto loc_2e5f0;
        case m2c::kloc_2e5f9: 	goto loc_2e5f9;
        case m2c::kloc_2e63f: 	goto loc_2e63f;
        case m2c::kloc_2e665: 	goto loc_2e665;
        case m2c::kloc_2e671: 	goto loc_2e671;
        case m2c::kloc_2e682: 	goto loc_2e682;
        case m2c::kloc_2e6c8: 	goto loc_2e6c8;
        case m2c::kloc_2e6e4: 	goto loc_2e6e4;
        case m2c::kloc_2e704: 	goto loc_2e704;
        case m2c::kloc_2e716: 	goto loc_2e716;
        case m2c::kloc_2e727: 	goto loc_2e727;
        case m2c::kloc_2e72f: 	goto loc_2e72f;
        case m2c::kloc_2e7a2: 	goto loc_2e7a2;
        case m2c::kloc_2e7ac: 	goto loc_2e7ac;
        case m2c::kloc_2e7f5: 	goto loc_2e7f5;
        case m2c::kloc_2e7fe: 	goto loc_2e7fe;
        case m2c::kloc_2e814: 	goto loc_2e814;
        case m2c::kloc_2e816: 	goto loc_2e816;
        case m2c::kloc_2e822: 	goto loc_2e822;
        case m2c::kloc_2e835: 	goto loc_2e835;
        case m2c::kloc_2e84f: 	goto loc_2e84f;
        case m2c::kloc_2e87b: 	goto loc_2e87b;
        case m2c::klocret_2e620: 	goto locret_2e620;
        case m2c::klocret_2e756: 	goto locret_2e756;
        case m2c::ksub_2e4b0: 	goto sub_2e4b0;
        case m2c::ksub_2e566: 	goto sub_2e566;
        case m2c::ksub_2e621: 	goto sub_2e621;
        case m2c::ksub_2e6a8: 	goto sub_2e6a8;
        case m2c::ksub_2e757: 	goto sub_2e757;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, _source);m2c::stackDump(_state); abort();
    };
}

