/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "sab2.h"

                

 bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
start:
	// 34 
cs=0x192;eip=0x000100; 	X(PUSH(cs));	// 42 push    cs ;~ 00D0:0100
ret_d0_101:
	// 4369 
cs=0x192;eip=0x000101; 	X(POP(ax));	// 43 pop     ax ;~ 00D0:0101
cs=0x192;eip=0x000102; 	T(MOV(bx, 0x2E61));	// 44 mov     bx, 2E61h ;~ 00D0:0102
cs=0x192;eip=0x000105; 	T(SHR(bx, 1));	// 45 shr     bx, 1 ;~ 00D0:0105
cs=0x192;eip=0x000107; 	T(SHR(bx, 1));	// 46 shr     bx, 1 ;~ 00D0:0107
cs=0x192;eip=0x000109; 	T(SHR(bx, 1));	// 47 shr     bx, 1 ;~ 00D0:0109
cs=0x192;eip=0x00010b; 	T(SHR(bx, 1));	// 48 shr     bx, 1 ;~ 00D0:010B
cs=0x192;eip=0x00010d; 	T(ADD(ax, bx));	// 49 add     ax, bx ;~ 00D0:010D
cs=0x192;eip=0x00010f; 	T(MOV(ds, ax));	// 50 mov     ds, ax ;~ 00D0:010F
cs=0x192;eip=0x000111; 	T(MOV(es, ax));	// 52 mov     es, ax ;~ 00D0:0111
cs=0x192;eip=0x000113; 	X(MOV(byte_14a2c, 0));	// 54 mov     byte_14A2C, 0 ;~ 00D0:0113
cs=0x192;eip=0x000118; 	T(MOV(ah, 0x0F));	// 55 mov     ah, 0Fh ;~ 00D0:0118
cs=0x192;eip=0x00011a; 	S(_INT(0x10));	// 56 int     10h             ; - VIDEO - GET CURRENT VIDEO MODE ;~ 00D0:011A
cs=0x192;eip=0x00011c; 	X(MOV(byte_14a23, al));	// 60 mov     byte_14A23, al ;~ 00D0:011C
cs=0x192;eip=0x00011f; 	T(CMP(al, 7));	// 61 cmp     al, 7 ;~ 00D0:011F
cs=0x192;eip=0x000121; 	J(JC(loc_10196));	// 62 jb      short loc_10196 ;~ 00D0:0121
cs=0x192;eip=0x000123; 	T(MOV(dx, 0x1B82));	// 63 mov     dx, 1B82h ;~ 00D0:0123
cs=0x192;eip=0x000126; 	T(MOV(ah, 9));	// 64 mov     ah, 9 ;~ 00D0:0126
cs=0x192;eip=0x000128; 	S(_INT(0x21));	// 65 int     21h             ; DOS - PRINT STRING ;~ 00D0:0128
cs=0x192;eip=0x00012a; 	J(JMP(loc_10191));	// 67 jmp     short loc_10191 ;~ 00D0:012A
loc_1012d:
	// 4370 
cs=0x192;eip=0x00012d; 	T(MOV(al, byte_14a23));	// 74 mov     al, byte_14A23 ;~ 00D0:012D
cs=0x192;eip=0x000130; 	T(MOV(ah, 0));	// 75 mov     ah, 0 ;~ 00D0:0130
cs=0x192;eip=0x000132; 	S(_INT(0x10));	// 76 int     10h             ; - VIDEO - SET VIDEO MODE ;~ 00D0:0132
cs=0x192;eip=0x000134; 	J(CALL(sub_105f2,0));	// 78 call    sub_105F2 ;~ 00D0:0134
cs=0x192;eip=0x000137; 	T(MOV(dx, 0x0D8C));	// 79 mov     dx, 0D8Ch ;~ 00D0:0137
cs=0x192;eip=0x00013a; 	T(MOV(ah, 0x13));	// 80 mov     ah, 13h ;~ 00D0:013A
cs=0x192;eip=0x00013c; 	S(_INT(0x21));	// 81 int     21h             ; DOS - DELETE FILE via FCB ;~ 00D0:013C
cs=0x192;eip=0x00013e; 	X(MOV(byte_1a60d, 0x1A));	// 85 mov     byte_1A60D, 1Ah ;~ 00D0:013E
cs=0x192;eip=0x000143; 	T(MOV(dx, 0x0D8C));	// 86 mov     dx, 0D8Ch ;~ 00D0:0143
cs=0x192;eip=0x000146; 	T(MOV(ah, 0x16));	// 87 mov     ah, 16h ;~ 00D0:0146
cs=0x192;eip=0x000148; 	S(_INT(0x21));	// 88 int     21h             ; DOS - CREATE A DISK FILE ;~ 00D0:0148
cs=0x192;eip=0x00014a; 	T(OR(al, al));	// 90 or      al, al ;~ 00D0:014A
cs=0x192;eip=0x00014c; 	J(JNZ(loc_1018a));	// 91 jnz     short loc_1018A ;~ 00D0:014C
cs=0x192;eip=0x00014e; 	X(MOV(*(db*)(((db*)&word_13bf8)), 0));	// 92 mov     byte ptr word_13BF8, 0 ;~ 00D0:014E
cs=0x192;eip=0x000153; 	X(MOV(byte_13c0c, 0));	// 93 mov     byte_13C0C, 0 ;~ 00D0:0153
cs=0x192;eip=0x000158; 	J(CALL(sub_1062d,0));	// 94 call    sub_1062D ;~ 00D0:0158
cs=0x192;eip=0x00015b; 	T(MOV(dx, 0x76AE));	// 95 mov     dx, 76AEh ;~ 00D0:015B
cs=0x192;eip=0x00015e; 	T(MOV(ah, 0x1A));	// 96 mov     ah, 1Ah ;~ 00D0:015E
cs=0x192;eip=0x000160; 	S(_INT(0x21));	// 97 int     21h             ; DOS - SET DISK TRANSFER AREA ADDRESS ;~ 00D0:0160
cs=0x192;eip=0x000162; 	T(MOV(dx, 0x0D8C));	// 99 mov     dx, 0D8Ch ;~ 00D0:0162
cs=0x192;eip=0x000165; 	T(MOV(ah, 0x15));	// 100 mov     ah, 15h ;~ 00D0:0165
cs=0x192;eip=0x000167; 	S(_INT(0x21));	// 101 int     21h             ; DOS - SEQUENTIAL DISK RECORD WRITE ;~ 00D0:0167
cs=0x192;eip=0x000169; 	T(OR(al, al));	// 103 or      al, al ;~ 00D0:0169
cs=0x192;eip=0x00016b; 	J(JNZ(loc_1018a));	// 104 jnz     short loc_1018A ;~ 00D0:016B
cs=0x192;eip=0x00016d; 	T(MOV(dx, 0x772E));	// 105 mov     dx, 772Eh ;~ 00D0:016D
cs=0x192;eip=0x000170; 	T(MOV(ah, 0x1A));	// 106 mov     ah, 1Ah ;~ 00D0:0170
cs=0x192;eip=0x000172; 	S(_INT(0x21));	// 107 int     21h             ; DOS - SET DISK TRANSFER AREA ADDRESS ;~ 00D0:0172
cs=0x192;eip=0x000174; 	T(MOV(dx, 0x0D8C));	// 109 mov     dx, 0D8Ch ;~ 00D0:0174
cs=0x192;eip=0x000177; 	T(MOV(ah, 0x15));	// 110 mov     ah, 15h ;~ 00D0:0177
cs=0x192;eip=0x000179; 	S(_INT(0x21));	// 111 int     21h             ; DOS - SEQUENTIAL DISK RECORD WRITE ;~ 00D0:0179
cs=0x192;eip=0x00017b; 	T(OR(al, al));	// 113 or      al, al ;~ 00D0:017B
cs=0x192;eip=0x00017d; 	J(JNZ(loc_1018a));	// 114 jnz     short loc_1018A ;~ 00D0:017D
cs=0x192;eip=0x00017f; 	T(MOV(dx, 0x0D8C));	// 115 mov     dx, 0D8Ch ;~ 00D0:017F
cs=0x192;eip=0x000182; 	T(MOV(ah, 0x10));	// 116 mov     ah, 10h ;~ 00D0:0182
cs=0x192;eip=0x000184; 	S(_INT(0x21));	// 117 int     21h             ; DOS - CLOSE DISK FILE ;~ 00D0:0184
cs=0x192;eip=0x000186; 	T(OR(al, al));	// 121 or      al, al ;~ 00D0:0186
cs=0x192;eip=0x000188; 	J(JZ(loc_10191));	// 122 jz      short loc_10191 ;~ 00D0:0188
loc_1018a:
	// 4371 
cs=0x192;eip=0x00018a; 	T(MOV(dx, 0x0D8C));	// 126 mov     dx, 0D8Ch ;~ 00D0:018A
cs=0x192;eip=0x00018d; 	T(MOV(ah, 0x13));	// 127 mov     ah, 13h ;~ 00D0:018D
cs=0x192;eip=0x00018f; 	S(_INT(0x21));	// 128 int     21h             ; DOS - DELETE FILE via FCB ;~ 00D0:018F
loc_10191:
	// 4372 
cs=0x192;eip=0x000191; 	T(MOV(ax, 0x4C00));	// 135 mov     ax, 4C00h ;~ 00D0:0191
cs=0x192;eip=0x000194; 	S(_INT(0x21));	// 136 int     21h             ; DOS - 2+ - QUIT WITH EXIT CODE (EXIT) ;~ 00D0:0194
loc_10196:
	// 4373 
cs=0x192;eip=0x000196; 	T(MOV(dx, 5));	// 141 mov     dx, 5 ;~ 00D0:0196
cs=0x192;eip=0x000199; 	T(CMP(al, 0));	// 142 cmp     al, 0 ;~ 00D0:0199
cs=0x192;eip=0x00019b; 	J(JZ(loc_101a8));	// 143 jz      short loc_101A8 ;~ 00D0:019B
cs=0x192;eip=0x00019d; 	T(CMP(al, 2));	// 144 cmp     al, 2 ;~ 00D0:019D
cs=0x192;eip=0x00019f; 	J(JZ(loc_101a8));	// 145 jz      short loc_101A8 ;~ 00D0:019F
cs=0x192;eip=0x0001a1; 	T(CMP(al, 5));	// 146 cmp     al, 5 ;~ 00D0:01A1
cs=0x192;eip=0x0001a3; 	J(JZ(loc_101a8));	// 147 jz      short loc_101A8 ;~ 00D0:01A3
cs=0x192;eip=0x0001a5; 	T(MOV(dx, 0x104));	// 148 mov     dx, 104h ;~ 00D0:01A5
loc_101a8:
	// 4374 
cs=0x192;eip=0x0001a8; 	X(PUSH(dx));	// 152 push    dx ;~ 00D0:01A8
cs=0x192;eip=0x0001a9; 	T(MOV(ah, 0));	// 153 mov     ah, 0 ;~ 00D0:01A9
cs=0x192;eip=0x0001ab; 	S(_INT(0x1A));	// 154 int     1Ah             ; CLOCK - GET TIME OF DAY ;~ 00D0:01AB
cs=0x192;eip=0x0001ad; 	X(MOV(word_14a1e, dx));	// 159 mov     word_14A1E, dx ;~ 00D0:01AD
cs=0x192;eip=0x0001b1; 	T(MOV(dx, 0x0D8C));	// 160 mov     dx, 0D8Ch ;~ 00D0:01B1
cs=0x192;eip=0x0001b4; 	T(MOV(ah, 0x0F));	// 161 mov     ah, 0Fh ;~ 00D0:01B4
cs=0x192;eip=0x0001b6; 	S(_INT(0x21));	// 162 int     21h             ; DOS - OPEN DISK FILE ;~ 00D0:01B6
cs=0x192;eip=0x0001b8; 	T(OR(al, al));	// 165 or      al, al ;~ 00D0:01B8
cs=0x192;eip=0x0001ba; 	J(JNZ(loc_101fb));	// 166 jnz     short loc_101FB ;~ 00D0:01BA
cs=0x192;eip=0x0001bc; 	T(MOV(dx, 0x0BA2));	// 167 mov     dx, 0BA2h ;~ 00D0:01BC
cs=0x192;eip=0x0001bf; 	T(MOV(ah, 0x1A));	// 168 mov     ah, 1Ah ;~ 00D0:01BF
cs=0x192;eip=0x0001c1; 	S(_INT(0x21));	// 169 int     21h             ; DOS - SET DISK TRANSFER AREA ADDRESS ;~ 00D0:01C1
cs=0x192;eip=0x0001c3; 	T(MOV(dx, 0x0D8C));	// 171 mov     dx, 0D8Ch ;~ 00D0:01C3
cs=0x192;eip=0x0001c6; 	X(MOV(*(db*)(((db*)&word_13bf8)), 0));	// 172 mov     byte ptr word_13BF8, 0 ;~ 00D0:01C6
cs=0x192;eip=0x0001cb; 	X(MOV(byte_13c0c, 0));	// 173 mov     byte_13C0C, 0 ;~ 00D0:01CB
cs=0x192;eip=0x0001d0; 	T(MOV(ah, 0x14));	// 174 mov     ah, 14h ;~ 00D0:01D0
cs=0x192;eip=0x0001d2; 	S(_INT(0x21));	// 175 int     21h             ; DOS - SEQUENTIAL DISK FILE READ ;~ 00D0:01D2
cs=0x192;eip=0x0001d4; 	T(OR(al, al));	// 177 or      al, al ;~ 00D0:01D4
cs=0x192;eip=0x0001d6; 	J(JNZ(loc_101fb));	// 178 jnz     short loc_101FB ;~ 00D0:01D6
cs=0x192;eip=0x0001d8; 	T(MOV(dx, 0x0C22));	// 179 mov     dx, 0C22h ;~ 00D0:01D8
cs=0x192;eip=0x0001db; 	T(MOV(ah, 0x1A));	// 180 mov     ah, 1Ah ;~ 00D0:01DB
cs=0x192;eip=0x0001dd; 	S(_INT(0x21));	// 181 int     21h             ; DOS - SET DISK TRANSFER AREA ADDRESS ;~ 00D0:01DD
cs=0x192;eip=0x0001df; 	T(MOV(dx, 0x0D8C));	// 183 mov     dx, 0D8Ch ;~ 00D0:01DF
cs=0x192;eip=0x0001e2; 	T(MOV(ah, 0x14));	// 184 mov     ah, 14h ;~ 00D0:01E2
cs=0x192;eip=0x0001e4; 	S(_INT(0x21));	// 185 int     21h             ; DOS - SEQUENTIAL DISK FILE READ ;~ 00D0:01E4
cs=0x192;eip=0x0001e6; 	T(OR(al, al));	// 187 or      al, al ;~ 00D0:01E6
cs=0x192;eip=0x0001e8; 	J(JNZ(loc_101fb));	// 188 jnz     short loc_101FB ;~ 00D0:01E8
cs=0x192;eip=0x0001ea; 	T(MOV(si, 0x0BA2));	// 189 mov     si, 0BA2h ;~ 00D0:01EA
cs=0x192;eip=0x0001ed; 	T(MOV(di, 0x76AE));	// 190 mov     di, 76AEh ;~ 00D0:01ED
cs=0x192;eip=0x0001f0; 	T(MOV(cx, 0x80));	// 191 mov     cx, 80h ; '€' ;~ 00D0:01F0
cs=0x192;eip=0x0001f3; 	T(CLD);	// 192 cld ;~ 00D0:01F3
	// 193 rep movsw ;~ 00D0:01F4
cs=0x192;eip=0x0001f4; 	X(	REP MOVSW);	// 193 rep movsw ;~ 00D0:01F4
cs=0x192;eip=0x0001f6; 	J(CALL(sub_10640,0));	// 194 call    sub_10640 ;~ 00D0:01F6
cs=0x192;eip=0x0001f9; 	J(JZ(loc_10216));	// 195 jz      short loc_10216 ;~ 00D0:01F9
loc_101fb:
	// 4375 
cs=0x192;eip=0x0001fb; 	J(CALL(sub_1107c,0));	// 199 call    sub_1107C ;~ 00D0:01FB
cs=0x192;eip=0x0001fe; 	T(AND(al, 7));	// 200 and     al, 7 ;~ 00D0:01FE
cs=0x192;eip=0x000200; 	J(JZ(loc_10216));	// 201 jz      short loc_10216 ;~ 00D0:0200
cs=0x192;eip=0x000202; 	T(MOV(si, 0x0FF05));	// 202 mov     si, 0FF05h ;~ 00D0:0202
loc_10205:
	// 4376 
cs=0x192;eip=0x000205; 	T(ADD(si, 0x0FF));	// 205 add     si, 0FFh ;~ 00D0:0205
cs=0x192;eip=0x000209; 	T(DEC(al));	// 206 dec     al ;~ 00D0:0209
cs=0x192;eip=0x00020b; 	J(JNZ(loc_10205));	// 207 jnz     short loc_10205 ;~ 00D0:020B
cs=0x192;eip=0x00020d; 	T(MOV(di, 0x76AE));	// 208 mov     di, 76AEh ;~ 00D0:020D
cs=0x192;eip=0x000210; 	T(MOV(cx, 0x0FF));	// 209 mov     cx, 0FFh ;~ 00D0:0210
cs=0x192;eip=0x000213; 	T(CLD);	// 210 cld ;~ 00D0:0213
	// 211 rep movsb ;~ 00D0:0214
cs=0x192;eip=0x000214; 	X(	REP MOVSB);	// 211 rep movsb ;~ 00D0:0214
loc_10216:
	// 4377 
cs=0x192;eip=0x000216; 	X(POP(dx));	// 215 pop     dx ;~ 00D0:0216
cs=0x192;eip=0x000217; 	X(PUSH(dx));	// 216 push    dx ;~ 00D0:0217
cs=0x192;eip=0x000218; 	T(MOV(ah, 0));	// 217 mov     ah, 0 ;~ 00D0:0218
cs=0x192;eip=0x00021a; 	T(MOV(al, dh));	// 218 mov     al, dh ;~ 00D0:021A
cs=0x192;eip=0x00021c; 	S(_INT(0x10));	// 219 int     10h             ; - VIDEO - SET VIDEO MODE ;~ 00D0:021C
cs=0x192;eip=0x00021e; 	T(MOV(bx, 0));	// 221 mov     bx, 0 ;~ 00D0:021E
cs=0x192;eip=0x000221; 	T(MOV(ah, 0x0B));	// 222 mov     ah, 0Bh ;~ 00D0:0221
cs=0x192;eip=0x000223; 	S(_INT(0x10));	// 223 int     10h             ; - VIDEO - SET COLOR PALETTE ;~ 00D0:0223
cs=0x192;eip=0x000225; 	T(MOV(si, 0x6FD));	// 226 mov     si, 6FDh ;~ 00D0:0225
cs=0x192;eip=0x000228; 	J(CALL(sub_104b7,0));	// 227 call    sub_104B7 ;~ 00D0:0228
cs=0x192;eip=0x00022b; 	T(MOV(di, 0x3F3D));	// 228 mov     di, 3F3Dh ;~ 00D0:022B
cs=0x192;eip=0x00022e; 	T(MOV(cx, 0x100));	// 229 mov     cx, 100h ;~ 00D0:022E
cs=0x192;eip=0x000231; 	T(STD);	// 230 std ;~ 00D0:0231
loc_10232:
	// 4378 
cs=0x192;eip=0x000232; 	T(MOV(ah, cl));	// 233 mov     ah, cl ;~ 00D0:0232
cs=0x192;eip=0x000234; 	X(PUSH(cx));	// 234 push    cx ;~ 00D0:0234
cs=0x192;eip=0x000235; 	T(MOV(cx, 8));	// 235 mov     cx, 8 ;~ 00D0:0235
cs=0x192;eip=0x000238; 	T(DEC(ah));	// 236 dec     ah ;~ 00D0:0238
cs=0x192;eip=0x00023a; 	T(MOV(al, 0));	// 237 mov     al, 0 ;~ 00D0:023A
loc_1023c:
	// 4379 
cs=0x192;eip=0x00023c; 	T(SHR(ah, 1));	// 240 shr     ah, 1 ;~ 00D0:023C
cs=0x192;eip=0x00023e; 	T(RCL(al, 1));	// 241 rcl     al, 1 ;~ 00D0:023E
cs=0x192;eip=0x000240; 	J(LOOP(loc_1023c));	// 242 loop    loc_1023C ;~ 00D0:0240
cs=0x192;eip=0x000242; 	X(STOSB);	// 243 stosb ;~ 00D0:0242
cs=0x192;eip=0x000243; 	X(POP(cx));	// 244 pop     cx ;~ 00D0:0243
cs=0x192;eip=0x000244; 	J(LOOP(loc_10232));	// 245 loop    loc_10232 ;~ 00D0:0244
cs=0x192;eip=0x000246; 	T(CLD);	// 246 cld ;~ 00D0:0246
cs=0x192;eip=0x000247; 	J(CALL(sub_105c6,0));	// 247 call    sub_105C6 ;~ 00D0:0247
cs=0x192;eip=0x00024a; 	J(CALL(sub_105bb,0));	// 248 call    sub_105BB ;~ 00D0:024A
cs=0x192;eip=0x00024d; 	X(POP(ax));	// 249 pop     ax ;~ 00D0:024D
cs=0x192;eip=0x00024e; 	T(CBW);	// 250 cbw ;~ 00D0:024E
cs=0x192;eip=0x00024f; 	X(MOV(word_14a10, ax));	// 251 mov     word_14A10, ax ;~ 00D0:024F
cs=0x192;eip=0x000252; 	S(_INT(0x10));	// 252 int     10h             ; - VIDEO - ;~ 00D0:0252
cs=0x192;eip=0x000254; 	T(MOV(bx, 0));	// 253 mov     bx, 0 ;~ 00D0:0254
cs=0x192;eip=0x000257; 	T(MOV(ah, 0x0B));	// 254 mov     ah, 0Bh ;~ 00D0:0257
cs=0x192;eip=0x000259; 	S(_INT(0x10));	// 255 int     10h             ; - VIDEO - SET COLOR PALETTE ;~ 00D0:0259
cs=0x192;eip=0x00025b; 	T(MOV(bx, 0x100));	// 258 mov     bx, 100h ;~ 00D0:025B
cs=0x192;eip=0x00025e; 	T(MOV(ah, 0x0B));	// 259 mov     ah, 0Bh ;~ 00D0:025E
cs=0x192;eip=0x000260; 	S(_INT(0x10));	// 260 int     10h             ; - VIDEO - SET COLOR PALETTE ;~ 00D0:0260
cs=0x192;eip=0x000262; 	X(MOV(byte_14a2c, 1));	// 263 mov     byte_14A2C, 1 ;~ 00D0:0262
cs=0x192;eip=0x000267; 	J(CALL(sub_105cd,0));	// 264 call    sub_105CD ;~ 00D0:0267
cs=0x192;eip=0x00026a; 	J(CALL(sub_10620,0));	// 265 call    sub_10620 ;~ 00D0:026A
cs=0x192;eip=0x00026d; 	J(CALL(sub_10620,0));	// 266 call    sub_10620 ;~ 00D0:026D
cs=0x192;eip=0x000270; 	T(MOV(bx, 0));	// 267 mov     bx, 0 ;~ 00D0:0270
loc_10273:
	// 4380 
cs=0x192;eip=0x000273; 	T(INC(bx));	// 270 inc     bx ;~ 00D0:0273
cs=0x192;eip=0x000274; 	T(MOV(cx, 0x0A));	// 271 mov     cx, 0Ah ;~ 00D0:0274
loc_10277:
	// 4381 
cs=0x192;eip=0x000277; 	S(LOOP(loc_10277));	// 274 loop    loc_10277 ;~ 00D0:0277
cs=0x192;eip=0x000279; 	T(CMP(byte_14a22, 1));	// 275 cmp     byte_14A22, 1 ;~ 00D0:0279
cs=0x192;eip=0x00027e; 	J(JNZ(loc_10273));	// 276 jnz     short loc_10273 ;~ 00D0:027E
cs=0x192;eip=0x000280; 	T(CMP(bx, 0x600));	// 277 cmp     bx, 600h ;~ 00D0:0280
cs=0x192;eip=0x000284; 	J(JNC(loc_1028b));	// 278 jnb     short loc_1028B ;~ 00D0:0284
cs=0x192;eip=0x000286; 	X(ADD(byte_1a809, 8));	// 279 add     byte_1A809, 8 ;~ 00D0:0286
loc_1028b:
	// 4382 
cs=0x192;eip=0x00028b; 	J(JMP(loc_12736));	// 282 jmp     loc_12736 ;~ 00D0:028B
loc_1028e:
	// 4383 
cs=0x192;eip=0x00028e; 	J(CALL(sub_12a8c,0));	// 286 call    sub_12A8C ;~ 00D0:028E
cs=0x192;eip=0x000291; 	T(MOV(al, byte_14a26));	// 287 mov     al, byte_14A26 ;~ 00D0:0291
cs=0x192;eip=0x000294; 	T(ADD(al, 0x30));	// 288 add     al, 30h ; '0' ;~ 00D0:0294
cs=0x192;eip=0x000296; 	X(MOV(byte_14584, al));	// 289 mov     byte_14584, al ;~ 00D0:0296
cs=0x192;eip=0x000299; 	T(MOV(si, 0x1704));	// 290 mov     si, 1704h ;~ 00D0:0299
cs=0x192;eip=0x00029c; 	J(CALL(sub_104b7,0));	// 291 call    sub_104B7 ;~ 00D0:029C
cs=0x192;eip=0x00029f; 	T(MOV(al, byte_14a26));	// 292 mov     al, byte_14A26 ;~ 00D0:029F
cs=0x192;eip=0x0002a2; 	T(DEC(al));	// 293 dec     al ;~ 00D0:02A2
cs=0x192;eip=0x0002a4; 	T(ADD(al, al));	// 294 add     al, al ;~ 00D0:02A4
cs=0x192;eip=0x0002a6; 	T(CBW);	// 295 cbw ;~ 00D0:02A6
cs=0x192;eip=0x0002a7; 	T(MOV(bx, 0x16F2));	// 296 mov     bx, 16F2h ;~ 00D0:02A7
cs=0x192;eip=0x0002aa; 	T(ADD(bx, ax));	// 297 add     bx, ax ;~ 00D0:02AA
cs=0x192;eip=0x0002ac; 	T(MOV(si, *(dw*)(raddr(ds,bx))));	// 298 mov     si, [bx] ;~ 00D0:02AC
cs=0x192;eip=0x0002ae; 	J(CALL(sub_104b7,0));	// 299 call    sub_104B7 ;~ 00D0:02AE
cs=0x192;eip=0x0002b1; 	T(CLD);	// 300 cld ;~ 00D0:02B1
cs=0x192;eip=0x0002b2; 	T(MOV(di, 0x1BE6));	// 301 mov     di, 1BE6h ;~ 00D0:02B2
cs=0x192;eip=0x0002b5; 	T(MOV(cx, 3));	// 302 mov     cx, 3 ;~ 00D0:02B5
	// 303 rep movsb ;~ 00D0:02B8
cs=0x192;eip=0x0002b8; 	X(	REP MOVSB);	// 303 rep movsb ;~ 00D0:02B8
cs=0x192;eip=0x0002ba; 	X(PUSH(si));	// 304 push    si ;~ 00D0:02BA
cs=0x192;eip=0x0002bb; 	T(MOV(si, 0x173A));	// 305 mov     si, 173Ah ;~ 00D0:02BB
cs=0x192;eip=0x0002be; 	J(CALL(sub_104b7,0));	// 306 call    sub_104B7 ;~ 00D0:02BE
cs=0x192;eip=0x0002c1; 	X(POP(si));	// 307 pop     si ;~ 00D0:02C1
cs=0x192;eip=0x0002c2; 	J(CALL(sub_104b7,0));	// 308 call    sub_104B7 ;~ 00D0:02C2
cs=0x192;eip=0x0002c5; 	X(MOV(byte_14a24, 2));	// 309 mov     byte_14A24, 2 ;~ 00D0:02C5
cs=0x192;eip=0x0002ca; 	T(LODSW);	// 310 lodsw ;~ 00D0:02CA
cs=0x192;eip=0x0002cb; 	X(MOV(word_14614, ax));	// 311 mov     word_14614, ax ;~ 00D0:02CB
cs=0x192;eip=0x0002ce; 	X(MOV(word_14a04, si));	// 312 mov     word_14A04, si ;~ 00D0:02CE
cs=0x192;eip=0x0002d2; 	T(MOV(bx, si));	// 313 mov     bx, si ;~ 00D0:02D2
cs=0x192;eip=0x0002d4; 	T(MOV(al, *(raddr(ds,bx))));	// 314 mov     al, [bx] ;~ 00D0:02D4
cs=0x192;eip=0x0002d6; 	T(OR(al, al));	// 315 or      al, al ;~ 00D0:02D6
cs=0x192;eip=0x0002d8; 	X(MOV(byte_14a27, al));	// 316 mov     byte_14A27, al ;~ 00D0:02D8
cs=0x192;eip=0x0002db; 	J(JZ(loc_102e5));	// 317 jz      short loc_102E5 ;~ 00D0:02DB
cs=0x192;eip=0x0002dd; 	T(MOV(si, 0x17A9));	// 318 mov     si, 17A9h ;~ 00D0:02DD
cs=0x192;eip=0x0002e0; 	X(PUSH(bx));	// 319 push    bx ;~ 00D0:02E0
cs=0x192;eip=0x0002e1; 	J(CALL(sub_104b7,0));	// 320 call    sub_104B7 ;~ 00D0:02E1
cs=0x192;eip=0x0002e4; 	X(POP(bx));	// 321 pop     bx ;~ 00D0:02E4
loc_102e5:
	// 4384 
cs=0x192;eip=0x0002e5; 	T(MOV(al, *(raddr(ds,bx+3))));	// 324 mov     al, [bx+3] ;~ 00D0:02E5
cs=0x192;eip=0x0002e8; 	X(MOV(byte_14a28, al));	// 325 mov     byte_14A28, al ;~ 00D0:02E8
cs=0x192;eip=0x0002eb; 	T(INC(al));	// 326 inc     al ;~ 00D0:02EB
cs=0x192;eip=0x0002ed; 	T(MOV(al, 0x0FF));	// 327 mov     al, 0FFh ;~ 00D0:02ED
cs=0x192;eip=0x0002ef; 	J(JNZ(loc_102fb));	// 328 jnz     short loc_102FB ;~ 00D0:02EF
cs=0x192;eip=0x0002f1; 	T(MOV(si, 0x180B));	// 329 mov     si, 180Bh ;~ 00D0:02F1
cs=0x192;eip=0x0002f4; 	X(PUSH(bx));	// 330 push    bx ;~ 00D0:02F4
cs=0x192;eip=0x0002f5; 	J(CALL(sub_104b7,0));	// 331 call    sub_104B7 ;~ 00D0:02F5
cs=0x192;eip=0x0002f8; 	X(POP(bx));	// 332 pop     bx ;~ 00D0:02F8
cs=0x192;eip=0x0002f9; 	T(MOV(al, 1));	// 333 mov     al, 1 ;~ 00D0:02F9
loc_102fb:
	// 4385 
cs=0x192;eip=0x0002fb; 	X(MOV(byte_14a2b, al));	// 336 mov     byte_14A2B, al ;~ 00D0:02FB
cs=0x192;eip=0x0002fe; 	T(MOV(al, *(raddr(ds,bx+1))));	// 337 mov     al, [bx+1] ;~ 00D0:02FE
cs=0x192;eip=0x000301; 	X(MOV(byte_14a29, al));	// 338 mov     byte_14A29, al ;~ 00D0:0301
cs=0x192;eip=0x000304; 	T(OR(al, al));	// 339 or      al, al ;~ 00D0:0304
cs=0x192;eip=0x000306; 	J(JZ(loc_10310));	// 340 jz      short loc_10310 ;~ 00D0:0306
cs=0x192;eip=0x000308; 	T(MOV(si, 0x17CC));	// 341 mov     si, 17CCh ;~ 00D0:0308
cs=0x192;eip=0x00030b; 	X(PUSH(bx));	// 342 push    bx ;~ 00D0:030B
cs=0x192;eip=0x00030c; 	J(CALL(sub_104b7,0));	// 343 call    sub_104B7 ;~ 00D0:030C
cs=0x192;eip=0x00030f; 	X(POP(bx));	// 344 pop     bx ;~ 00D0:030F
loc_10310:
	// 4386 
cs=0x192;eip=0x000310; 	T(MOV(al, *(raddr(ds,bx+2))));	// 347 mov     al, [bx+2] ;~ 00D0:0310
cs=0x192;eip=0x000313; 	X(MOV(byte_14a2a, al));	// 348 mov     byte_14A2A, al ;~ 00D0:0313
cs=0x192;eip=0x000316; 	T(INC(al));	// 349 inc     al ;~ 00D0:0316
cs=0x192;eip=0x000318; 	J(JZ(loc_10322));	// 350 jz      short loc_10322 ;~ 00D0:0318
cs=0x192;eip=0x00031a; 	T(MOV(si, 0x17EE));	// 351 mov     si, 17EEh ;~ 00D0:031A
cs=0x192;eip=0x00031d; 	X(PUSH(bx));	// 352 push    bx ;~ 00D0:031D
cs=0x192;eip=0x00031e; 	J(CALL(sub_104b7,0));	// 353 call    sub_104B7 ;~ 00D0:031E
cs=0x192;eip=0x000321; 	X(POP(bx));	// 354 pop     bx ;~ 00D0:0321
loc_10322:
	// 4387 
cs=0x192;eip=0x000322; 	T(MOV(si, 0x173E));	// 357 mov     si, 173Eh ;~ 00D0:0322
cs=0x192;eip=0x000325; 	J(CALL(sub_104b7,0));	// 358 call    sub_104B7 ;~ 00D0:0325
cs=0x192;eip=0x000328; 	T(MOV(si, 0x1537));	// 359 mov     si, 1537h ;~ 00D0:0328
cs=0x192;eip=0x00032b; 	J(CALL(sub_104b7,0));	// 360 call    sub_104B7 ;~ 00D0:032B
cs=0x192;eip=0x00032e; 	J(CALL(sub_105c6,0));	// 361 call    sub_105C6 ;~ 00D0:032E
cs=0x192;eip=0x000331; 	J(CALL(sub_105bb,0));	// 362 call    sub_105BB ;~ 00D0:0331
cs=0x192;eip=0x000334; 	T(MOV(ax, word_14a10));	// 363 mov     ax, word_14A10 ;~ 00D0:0334
cs=0x192;eip=0x000337; 	S(_INT(0x10));	// 364 int     10h             ; - VIDEO - ;~ 00D0:0337
cs=0x192;eip=0x000339; 	T(MOV(bx, 0));	// 365 mov     bx, 0 ;~ 00D0:0339
cs=0x192;eip=0x00033c; 	T(MOV(ah, 0x0B));	// 366 mov     ah, 0Bh ;~ 00D0:033C
cs=0x192;eip=0x00033e; 	S(_INT(0x10));	// 367 int     10h             ; - VIDEO - SET COLOR PALETTE ;~ 00D0:033E
cs=0x192;eip=0x000340; 	T(MOV(bx, 0x100));	// 370 mov     bx, 100h ;~ 00D0:0340
cs=0x192;eip=0x000343; 	T(MOV(ah, 0x0B));	// 371 mov     ah, 0Bh ;~ 00D0:0343
cs=0x192;eip=0x000345; 	S(_INT(0x10));	// 372 int     10h             ; - VIDEO - SET COLOR PALETTE ;~ 00D0:0345
cs=0x192;eip=0x000347; 	X(MOV(byte_14a2c, 1));	// 375 mov     byte_14A2C, 1 ;~ 00D0:0347
cs=0x192;eip=0x00034c; 	T(MOV(di, 0x1688));	// 376 mov     di, 1688h ;~ 00D0:034C
cs=0x192;eip=0x00034f; 	T(MOV(bx, 0x182F));	// 377 mov     bx, 182Fh ;~ 00D0:034F
loc_10352:
	// 4388 
cs=0x192;eip=0x000352; 	T(MOV(al, *(raddr(ds,bx))));	// 380 mov     al, [bx] ;~ 00D0:0352
cs=0x192;eip=0x000354; 	T(INC(bx));	// 381 inc     bx ;~ 00D0:0354
cs=0x192;eip=0x000355; 	T(INC(al));	// 382 inc     al ;~ 00D0:0355
cs=0x192;eip=0x000357; 	J(JZ(loc_10397));	// 383 jz      short loc_10397 ;~ 00D0:0357
cs=0x192;eip=0x000359; 	T(DEC(al));	// 384 dec     al ;~ 00D0:0359
cs=0x192;eip=0x00035b; 	T(MOV(cl, al));	// 385 mov     cl, al ;~ 00D0:035B
cs=0x192;eip=0x00035d; 	T(ADD(al, al));	// 386 add     al, al ;~ 00D0:035D
cs=0x192;eip=0x00035f; 	T(ADD(al, al));	// 387 add     al, al ;~ 00D0:035F
cs=0x192;eip=0x000361; 	T(ADD(al, al));	// 388 add     al, al ;~ 00D0:0361
cs=0x192;eip=0x000363; 	T(ADD(al, cl));	// 389 add     al, cl ;~ 00D0:0363
cs=0x192;eip=0x000365; 	T(MOV(ah, 0));	// 390 mov     ah, 0 ;~ 00D0:0365
cs=0x192;eip=0x000367; 	T(MOV(si, 0x1886));	// 391 mov     si, 1886h ;~ 00D0:0367
cs=0x192;eip=0x00036a; 	T(ADD(si, ax));	// 392 add     si, ax ;~ 00D0:036A
cs=0x192;eip=0x00036c; 	T(CMP(cl, 0x10));	// 393 cmp     cl, 10h ;~ 00D0:036C
cs=0x192;eip=0x00036f; 	T(MOV(cx, 1));	// 394 mov     cx, 1 ;~ 00D0:036F
cs=0x192;eip=0x000372; 	J(JC(loc_10377));	// 395 jb      short loc_10377 ;~ 00D0:0372
cs=0x192;eip=0x000374; 	T(MOV(cl, *(raddr(ds,bx))));	// 396 mov     cl, [bx] ;~ 00D0:0374
cs=0x192;eip=0x000376; 	T(INC(bx));	// 397 inc     bx ;~ 00D0:0376
loc_10377:
	// 4389 
cs=0x192;eip=0x000377; 	X(PUSH(bx));	// 400 push    bx ;~ 00D0:0377
loc_10378:
	// 4390 
cs=0x192;eip=0x000378; 	X(PUSH(cx));	// 403 push    cx ;~ 00D0:0378
cs=0x192;eip=0x000379; 	X(PUSH(si));	// 404 push    si ;~ 00D0:0379
cs=0x192;eip=0x00037a; 	X(PUSH(di));	// 405 push    di ;~ 00D0:037A
cs=0x192;eip=0x00037b; 	J(CALL(sub_10547,0));	// 406 call    sub_10547 ;~ 00D0:037B
cs=0x192;eip=0x00037e; 	X(POP(di));	// 407 pop     di ;~ 00D0:037E
cs=0x192;eip=0x00037f; 	T(INC(di));	// 408 inc     di ;~ 00D0:037F
cs=0x192;eip=0x000380; 	T(INC(di));	// 409 inc     di ;~ 00D0:0380
cs=0x192;eip=0x000381; 	T(MOV(ax, di));	// 410 mov     ax, di ;~ 00D0:0381
cs=0x192;eip=0x000383; 	T(MOV(cl, 0x50));	// 411 mov     cl, 50h ; 'P' ;~ 00D0:0383
cs=0x192;eip=0x000385; 	T(DIV1(cl));	// 412 div     cl ;~ 00D0:0385
cs=0x192;eip=0x000387; 	T(CMP(ah, 0x48));	// 413 cmp     ah, 48h ; 'H' ;~ 00D0:0387
cs=0x192;eip=0x00038a; 	J(JC(loc_10390));	// 414 jb      short loc_10390 ;~ 00D0:038A
cs=0x192;eip=0x00038c; 	T(ADD(di, 0x100));	// 415 add     di, 100h ;~ 00D0:038C
loc_10390:
	// 4391 
cs=0x192;eip=0x000390; 	X(POP(si));	// 418 pop     si ;~ 00D0:0390
cs=0x192;eip=0x000391; 	X(POP(cx));	// 419 pop     cx ;~ 00D0:0391
cs=0x192;eip=0x000392; 	J(LOOP(loc_10378));	// 420 loop    loc_10378 ;~ 00D0:0392
cs=0x192;eip=0x000394; 	X(POP(bx));	// 421 pop     bx ;~ 00D0:0394
cs=0x192;eip=0x000395; 	J(JMP(loc_10352));	// 422 jmp     short loc_10352 ;~ 00D0:0395
loc_10397:
	// 4392 
cs=0x192;eip=0x000397; 	T(MOV(si, 0x193A));	// 426 mov     si, 193Ah ;~ 00D0:0397
cs=0x192;eip=0x00039a; 	J(CALL(sub_104b7,0));	// 427 call    sub_104B7 ;~ 00D0:039A
cs=0x192;eip=0x00039d; 	T(MOV(bx, 0x195E));	// 428 mov     bx, 195Eh ;~ 00D0:039D
cs=0x192;eip=0x0003a0; 	T(MOV(cx, 6));	// 429 mov     cx, 6 ;~ 00D0:03A0
loc_103a3:
	// 4393 
cs=0x192;eip=0x0003a3; 	X(MOV(*(raddr(ds,bx)), 0x30));	// 432 mov     byte ptr [bx], 30h ; '0' ;~ 00D0:03A3
cs=0x192;eip=0x0003a6; 	T(INC(bx));	// 433 inc     bx ;~ 00D0:03A6
cs=0x192;eip=0x0003a7; 	J(LOOP(loc_103a3));	// 434 loop    loc_103A3 ;~ 00D0:03A7
cs=0x192;eip=0x0003a9; 	T(MOV(si, 0x1953));	// 435 mov     si, 1953h ;~ 00D0:03A9
cs=0x192;eip=0x0003ac; 	J(CALL(sub_104b7,0));	// 436 call    sub_104B7 ;~ 00D0:03AC
cs=0x192;eip=0x0003af; 	T(MOV(cx, 0x21));	// 437 mov     cx, 21h ; '!' ;~ 00D0:03AF
cs=0x192;eip=0x0003b2; 	T(CLD);	// 438 cld ;~ 00D0:03B2
cs=0x192;eip=0x0003b3; 	T(MOV(di, 0x136D));	// 439 mov     di, 136Dh ;~ 00D0:03B3
cs=0x192;eip=0x0003b6; 	T(MOV(si, 0x1372));	// 440 mov     si, 1372h ;~ 00D0:03B6
loc_103b9:
	// 4394 
cs=0x192;eip=0x0003b9; 	X(PUSH(cx));	// 443 push    cx ;~ 00D0:03B9
cs=0x192;eip=0x0003ba; 	T(MOV(cx, 5));	// 444 mov     cx, 5 ;~ 00D0:03BA
	// 445 rep movsb ;~ 00D0:03BD
cs=0x192;eip=0x0003bd; 	X(	REP MOVSB);	// 445 rep movsb ;~ 00D0:03BD
cs=0x192;eip=0x0003bf; 	T(ADD(si, 9));	// 446 add     si, 9 ;~ 00D0:03BF
cs=0x192;eip=0x0003c2; 	T(ADD(di, 9));	// 447 add     di, 9 ;~ 00D0:03C2
cs=0x192;eip=0x0003c5; 	X(POP(cx));	// 448 pop     cx ;~ 00D0:03C5
cs=0x192;eip=0x0003c6; 	J(LOOP(loc_103b9));	// 449 loop    loc_103B9 ;~ 00D0:03C6
cs=0x192;eip=0x0003c8; 	X(MOV(word_14a20, 0x1A6F));	// 450 mov     word_14A20, 1A6Fh ;~ 00D0:03C8
cs=0x192;eip=0x0003ce; 	X(MOV(byte_14a2d, 7));	// 451 mov     byte_14A2D, 7 ;~ 00D0:03CE
cs=0x192;eip=0x0003d3; 	X(MOV(byte_14a2e, 0x1D));	// 452 mov     byte_14A2E, 1Dh ;~ 00D0:03D3
cs=0x192;eip=0x0003d8; 	X(MOV(word_14a14, 0x0FD));	// 453 mov     word_14A14, 0FDh ; 'ý' ;~ 00D0:03D8
cs=0x192;eip=0x0003de; 	X(MOV(*(db*)(((db*)&word_14a36)+1), 0x11));	// 454 mov     byte ptr word_14A36+1, 11h ;~ 00D0:03DE
cs=0x192;eip=0x0003e3; 	X(MOV(byte_18e0a, 5));	// 455 mov     byte_18E0A, 5 ;~ 00D0:03E3
cs=0x192;eip=0x0003e8; 	T(XOR(al, al));	// 456 xor     al, al ;~ 00D0:03E8
cs=0x192;eip=0x0003ea; 	X(MOV(byte_14a2f, al));	// 457 mov     byte_14A2F, al ;~ 00D0:03EA
cs=0x192;eip=0x0003ed; 	X(MOV(byte_14a30, al));	// 458 mov     byte_14A30, al ;~ 00D0:03ED
cs=0x192;eip=0x0003f0; 	X(MOV(byte_14a31, al));	// 459 mov     byte_14A31, al ;~ 00D0:03F0
cs=0x192;eip=0x0003f3; 	X(MOV(byte_14a32, al));	// 460 mov     byte_14A32, al ;~ 00D0:03F3
cs=0x192;eip=0x0003f6; 	X(MOV(byte_14a33, al));	// 461 mov     byte_14A33, al ;~ 00D0:03F6
cs=0x192;eip=0x0003f9; 	X(MOV(byte_14a34, 2));	// 462 mov     byte_14A34, 2 ;~ 00D0:03F9
cs=0x192;eip=0x0003fe; 	X(MOV(byte_14a35, al));	// 463 mov     byte_14A35, al ;~ 00D0:03FE
cs=0x192;eip=0x000401; 	X(MOV(*(db*)(((db*)&word_14a36)), al));	// 464 mov     byte ptr word_14A36, al ;~ 00D0:0401
cs=0x192;eip=0x000404; 	X(MOV(byte_18e08, 2));	// 465 mov     byte_18E08, 2 ;~ 00D0:0404
cs=0x192;eip=0x000409; 	X(MOV(word_14a16, 0x136D));	// 466 mov     word_14A16, 136Dh ;~ 00D0:0409
cs=0x192;eip=0x00040f; 	X(MOV(word_14a18, 0x5BC0));	// 467 mov     word_14A18, 5BC0h ;~ 00D0:040F
cs=0x192;eip=0x000415; 	X(MOV(word_14a1a, 0x11D7));	// 468 mov     word_14A1A, 11D7h ;~ 00D0:0415
cs=0x192;eip=0x00041b; 	X(MOV(byte_14a38, al));	// 469 mov     byte_14A38, al ;~ 00D0:041B
cs=0x192;eip=0x00041e; 	X(MOV(byte_14a39, al));	// 470 mov     byte_14A39, al ;~ 00D0:041E
cs=0x192;eip=0x000421; 	X(MOV(byte_14a3a, al));	// 471 mov     byte_14A3A, al ;~ 00D0:0421
cs=0x192;eip=0x000424; 	X(MOV(word_14a1c, 0x0F7A));	// 472 mov     word_14A1C, 0F7Ah ;~ 00D0:0424
cs=0x192;eip=0x00042a; 	T(INC(al));	// 473 inc     al ;~ 00D0:042A
cs=0x192;eip=0x00042c; 	X(MOV(byte_14a3b, 2));	// 474 mov     byte_14A3B, 2 ;~ 00D0:042C
cs=0x192;eip=0x000431; 	X(MOV(byte_14a3c, al));	// 475 mov     byte_14A3C, al ;~ 00D0:0431
cs=0x192;eip=0x000434; 	X(MOV(byte_14a3d, al));	// 476 mov     byte_14A3D, al ;~ 00D0:0434
cs=0x192;eip=0x000437; 	X(MOV(byte_14a3e, al));	// 477 mov     byte_14A3E, al ;~ 00D0:0437
cs=0x192;eip=0x00043a; 	X(MOV(byte_14a3f, al));	// 478 mov     byte_14A3F, al ;~ 00D0:043A
cs=0x192;eip=0x00043d; 	X(MOV(byte_14a40, al));	// 479 mov     byte_14A40, al ;~ 00D0:043D
cs=0x192;eip=0x000440; 	T(MOV(bx, 0x68ED));	// 480 mov     bx, 68EDh ;~ 00D0:0440
cs=0x192;eip=0x000443; 	T(MOV(cx, 0x65));	// 481 mov     cx, 65h ; 'e' ;~ 00D0:0443
loc_10446:
	// 4395 
cs=0x192;eip=0x000446; 	T(MOV(al, *(raddr(ds,bx))));	// 484 mov     al, [bx] ;~ 00D0:0446
cs=0x192;eip=0x000448; 	T(CMP(al, 5));	// 485 cmp     al, 5 ;~ 00D0:0448
cs=0x192;eip=0x00044a; 	J(JNZ(loc_1044f));	// 486 jnz     short loc_1044F ;~ 00D0:044A
cs=0x192;eip=0x00044c; 	X(MOV(*(raddr(ds,bx)), 0));	// 487 mov     byte ptr [bx], 0 ;~ 00D0:044C
loc_1044f:
	// 4396 
cs=0x192;eip=0x00044f; 	T(CMP(al, 6));	// 490 cmp     al, 6 ;~ 00D0:044F
cs=0x192;eip=0x000451; 	J(JNZ(loc_10456));	// 491 jnz     short loc_10456 ;~ 00D0:0451
cs=0x192;eip=0x000453; 	X(MOV(*(raddr(ds,bx)), 1));	// 492 mov     byte ptr [bx], 1 ;~ 00D0:0453
loc_10456:
	// 4397 
cs=0x192;eip=0x000456; 	T(ADD(bx, 0x0C));	// 495 add     bx, 0Ch ;~ 00D0:0456
cs=0x192;eip=0x000459; 	J(LOOP(loc_10446));	// 496 loop    loc_10446 ;~ 00D0:0459
cs=0x192;eip=0x00045b; 	J(CALL(sub_11f32,0));	// 497 call    sub_11F32 ;~ 00D0:045B
loc_1045e:
	// 4398 
cs=0x192;eip=0x00045e; 	J(CALL(sub_10660,0));	// 501 call    sub_10660 ;~ 00D0:045E
cs=0x192;eip=0x000461; 	J(JMP(loc_1049a));	// 502 jmp     short loc_1049A ;~ 00D0:0461
seg000_464_proc:
	// 508 
loc_10464:
	// 4399 
cs=0x192;eip=0x000464; 	J(CALL(sub_10620,0));	// 509 call    sub_10620 ;~ 00D0:0464
cs=0x192;eip=0x000467; 	J(CALL(sub_10ebc,0));	// 510 call    sub_10EBC ;~ 00D0:0467
cs=0x192;eip=0x00046a; 	J(CALL(sub_12032,0));	// 511 call    sub_12032 ;~ 00D0:046A
cs=0x192;eip=0x00046d; 	J(CALL(sub_1269b,0));	// 512 call    sub_1269B ;~ 00D0:046D
cs=0x192;eip=0x000470; 	J(CALL(sub_1259e,0));	// 513 call    sub_1259E ;~ 00D0:0470
cs=0x192;eip=0x000473; 	J(CALL(sub_10c0d,0));	// 514 call    sub_10C0D ;~ 00D0:0473
cs=0x192;eip=0x000476; 	T(MOV(ah, 1));	// 515 mov     ah, 1 ;~ 00D0:0476
cs=0x192;eip=0x000478; 	S(_INT(0x16));	// 516 int     16h             ; KEYBOARD - CHECK BUFFER, DO NOT CLEAR ;~ 00D0:0478
cs=0x192;eip=0x00047a; 	J(JZ(loc_10464));	// 520 jz      short loc_10464 ;~ 00D0:047A
cs=0x192;eip=0x00047c; 	T(MOV(ah, 0));	// 521 mov     ah, 0 ;~ 00D0:047C
cs=0x192;eip=0x00047e; 	S(_INT(0x16));	// 522 int     16h             ; KEYBOARD - READ CHAR FROM BUFFER, WAIT IF EMPTY ;~ 00D0:047E
cs=0x192;eip=0x000480; 	X(INC(*(db*)(((db*)&word_14a36)+1)));	// 524 inc     byte ptr word_14A36+1 ;~ 00D0:0480
cs=0x192;eip=0x000484; 	X(INC(word_14a1c));	// 525 inc     word_14A1C ;~ 00D0:0484
cs=0x192;eip=0x000488; 	T(CMP(*(db*)(((db*)&word_14a36)+1), 0x20));	// 526 cmp     byte ptr word_14A36+1, 20h ; ' ' ;~ 00D0:0488
cs=0x192;eip=0x00048d; 	J(JNZ(loc_1045e));	// 527 jnz     short loc_1045E ;~ 00D0:048D
cs=0x192;eip=0x00048f; 	X(MOV(*(db*)(((db*)&word_14a36)+1), 0));	// 528 mov     byte ptr word_14A36+1, 0 ;~ 00D0:048F
cs=0x192;eip=0x000494; 	X(INC(*(db*)(((db*)&word_14a36))));	// 529 inc     byte ptr word_14A36 ;~ 00D0:0494
cs=0x192;eip=0x000498; 	J(JMP(loc_1045e));	// 530 jmp     short loc_1045E ;~ 00D0:0498
loc_1049a:
	// 4400 
cs=0x192;eip=0x00049a; 	J(CALL(sub_10ebc,0));	// 536 call    sub_10EBC ;~ 00D0:049A
cs=0x192;eip=0x00049d; 	J(CALL(sub_110a4,0));	// 537 call    sub_110A4 ;~ 00D0:049D
cs=0x192;eip=0x0004a0; 	J(CALL(sub_11162,0));	// 538 call    sub_11162 ;~ 00D0:04A0
cs=0x192;eip=0x0004a3; 	J(CALL(sub_1104a,0));	// 539 call    sub_1104A ;~ 00D0:04A3
cs=0x192;eip=0x0004a6; 	J(CALL(sub_12032,0));	// 540 call    sub_12032 ;~ 00D0:04A6
cs=0x192;eip=0x0004a9; 	J(CALL(sub_1269b,0));	// 541 call    sub_1269B ;~ 00D0:04A9
cs=0x192;eip=0x0004ac; 	J(CALL(sub_1259e,0));	// 542 call    sub_1259E ;~ 00D0:04AC
cs=0x192;eip=0x0004af; 	J(CALL(sub_10c0d,0));	// 543 call    sub_10C0D ;~ 00D0:04AF
cs=0x192;eip=0x0004b2; 	J(CALL(sub_10620,0));	// 544 call    sub_10620 ;~ 00D0:04B2
cs=0x192;eip=0x0004b5; 	J(JMP(loc_1049a));	// 545 jmp     short loc_1049A ;~ 00D0:04B5
sub_104b7:
	// 551 
cs=0x192;eip=0x0004b7; 	T(MOV(al, *(raddr(ds,si))));	// 553 mov     al, [si] ;~ 00D0:04B7
ret_d0_4b9:
	// 4401 
cs=0x192;eip=0x0004b9; 	T(INC(si));	// 554 inc     si ;~ 00D0:04B9
cs=0x192;eip=0x0004ba; 	T(CMP(al, 0x0FD));	// 555 cmp     al, 0FDh ; 'ý' ;~ 00D0:04BA
cs=0x192;eip=0x0004bc; 	J(JNC(loc_1052e));	// 556 jnb     short loc_1052E ;~ 00D0:04BC
cs=0x192;eip=0x0004be; 	X(PUSH(si));	// 557 push    si ;~ 00D0:04BE
cs=0x192;eip=0x0004bf; 	T(TEST(byte_14a2c, 1));	// 558 test    byte_14A2C, 1 ;~ 00D0:04BF
cs=0x192;eip=0x0004c4; 	J(JZ(loc_104f7));	// 559 jz      short loc_104F7 ;~ 00D0:04C4
cs=0x192;eip=0x0004c6; 	X(PUSH(ax));	// 560 push    ax ;~ 00D0:04C6
cs=0x192;eip=0x0004c7; 	T(MOV(ax, word_14a02));	// 561 mov     ax, word_14A02 ;~ 00D0:04C7
cs=0x192;eip=0x0004ca; 	T(ADD(al, al));	// 562 add     al, al ;~ 00D0:04CA
cs=0x192;eip=0x0004cc; 	T(ADD(al, 8));	// 563 add     al, 8 ;~ 00D0:04CC
cs=0x192;eip=0x0004ce; 	T(MOV(cl, al));	// 564 mov     cl, al ;~ 00D0:04CE
cs=0x192;eip=0x0004d0; 	T(MOV(al, ah));	// 565 mov     al, ah ;~ 00D0:04D0
cs=0x192;eip=0x0004d2; 	T(MOV(ch, 0x0A0));	// 566 mov     ch, 0A0h ; ' ' ;~ 00D0:04D2
cs=0x192;eip=0x0004d4; 	T(MUL1_1(ch));	// 567 mul     ch ;~ 00D0:04D4
cs=0x192;eip=0x0004d6; 	T(ADD(ax, ax));	// 568 add     ax, ax ;~ 00D0:04D6
cs=0x192;eip=0x0004d8; 	T(MOV(ch, 0));	// 569 mov     ch, 0 ;~ 00D0:04D8
cs=0x192;eip=0x0004da; 	T(ADD(ax, cx));	// 570 add     ax, cx ;~ 00D0:04DA
cs=0x192;eip=0x0004dc; 	T(MOV(di, ax));	// 571 mov     di, ax ;~ 00D0:04DC
cs=0x192;eip=0x0004de; 	X(POP(ax));	// 572 pop     ax ;~ 00D0:04DE
cs=0x192;eip=0x0004df; 	T(MOV(ah, 0));	// 573 mov     ah, 0 ;~ 00D0:04DF
cs=0x192;eip=0x0004e1; 	T(ADD(ax, ax));	// 574 add     ax, ax ;~ 00D0:04E1
cs=0x192;eip=0x0004e3; 	T(ADD(ax, ax));	// 575 add     ax, ax ;~ 00D0:04E3
cs=0x192;eip=0x0004e5; 	T(ADD(ax, ax));	// 576 add     ax, ax ;~ 00D0:04E5
cs=0x192;eip=0x0004e7; 	T(ADD(ax, 0x0CB1));	// 577 add     ax, 0CB1h ;~ 00D0:04E7
cs=0x192;eip=0x0004ea; 	T(MOV(si, ax));	// 578 mov     si, ax ;~ 00D0:04EA
cs=0x192;eip=0x0004ec; 	T(MOV(al, byte_14a24));	// 579 mov     al, byte_14A24 ;~ 00D0:04EC
cs=0x192;eip=0x0004ef; 	T(MOV(bx, 0x1B72));	// 580 mov     bx, 1B72h ;~ 00D0:04EF
cs=0x192;eip=0x0004f2; 	J(CALL(sub_1054a,0));	// 581 call    sub_1054A ;~ 00D0:04F2
cs=0x192;eip=0x0004f5; 	J(JMP(loc_10504));	// 582 jmp     short loc_10504 ;~ 00D0:04F5
loc_104f7:
	// 4402 
cs=0x192;eip=0x0004f7; 	T(MOV(cx, 1));	// 586 mov     cx, 1 ;~ 00D0:04F7
cs=0x192;eip=0x0004fa; 	T(MOV(bl, byte_14a24));	// 587 mov     bl, byte_14A24 ;~ 00D0:04FA
cs=0x192;eip=0x0004fe; 	T(MOV(bh, 0));	// 588 mov     bh, 0 ;~ 00D0:04FE
cs=0x192;eip=0x000500; 	T(MOV(ah, 9));	// 589 mov     ah, 9 ;~ 00D0:0500
cs=0x192;eip=0x000502; 	S(_INT(0x10));	// 590 int     10h             ; - VIDEO - WRITE ATTRIBUTES/CHARACTERS AT CURSOR POSITION ;~ 00D0:0502
loc_10504:
	// 4403 
cs=0x192;eip=0x000504; 	T(MOV(dx, word_14a02));	// 596 mov     dx, word_14A02 ;~ 00D0:0504
cs=0x192;eip=0x000508; 	T(TEST(byte_14a25, 0x20));	// 597 test    byte_14A25, 20h ;~ 00D0:0508
cs=0x192;eip=0x00050d; 	J(JZ(loc_10513));	// 598 jz      short loc_10513 ;~ 00D0:050D
cs=0x192;eip=0x00050f; 	T(INC(dh));	// 599 inc     dh ;~ 00D0:050F
cs=0x192;eip=0x000511; 	J(JMP(loc_1051e));	// 600 jmp     short loc_1051E ;~ 00D0:0511
loc_10513:
	// 4404 
cs=0x192;eip=0x000513; 	T(INC(dl));	// 604 inc     dl ;~ 00D0:0513
cs=0x192;eip=0x000515; 	T(CMP(dl, 0x20));	// 605 cmp     dl, 20h ; ' ' ;~ 00D0:0515
cs=0x192;eip=0x000518; 	J(JNZ(loc_1051e));	// 606 jnz     short loc_1051E ;~ 00D0:0518
cs=0x192;eip=0x00051a; 	T(MOV(dl, 0));	// 607 mov     dl, 0 ;~ 00D0:051A
cs=0x192;eip=0x00051c; 	T(INC(dh));	// 608 inc     dh ;~ 00D0:051C
loc_1051e:
	// 4405 
cs=0x192;eip=0x00051e; 	X(MOV(word_14a02, dx));	// 612 mov     word_14A02, dx ;~ 00D0:051E
cs=0x192;eip=0x000522; 	T(ADD(dx, 4));	// 613 add     dx, 4 ;~ 00D0:0522
cs=0x192;eip=0x000525; 	T(MOV(bh, 0));	// 614 mov     bh, 0 ;~ 00D0:0525
cs=0x192;eip=0x000527; 	T(MOV(ah, 2));	// 615 mov     ah, 2 ;~ 00D0:0527
cs=0x192;eip=0x000529; 	S(_INT(0x10));	// 616 int     10h             ; - VIDEO - SET CURSOR POSITION ;~ 00D0:0529
cs=0x192;eip=0x00052b; 	X(POP(si));	// 619 pop     si ;~ 00D0:052B
cs=0x192;eip=0x00052c; 	J(JMP(sub_104b7));	// 620 jmp     short sub_104B7 ;~ 00D0:052C
loc_1052e:
	// 4406 
cs=0x192;eip=0x00052e; 	T(INC(al));	// 624 inc     al ;~ 00D0:052E
cs=0x192;eip=0x000530; 	J(JNZ(loc_10533));	// 625 jnz     short loc_10533 ;~ 00D0:0530
cs=0x192;eip=0x000532; 	J(RETN(0));	// 626 retn ;~ 00D0:0532
loc_10533:
	// 4407 
cs=0x192;eip=0x000533; 	T(INC(al));	// 630 inc     al ;~ 00D0:0533
cs=0x192;eip=0x000535; 	J(JNZ(loc_10540));	// 631 jnz     short loc_10540 ;~ 00D0:0535
cs=0x192;eip=0x000537; 	T(MOV(al, *(raddr(ds,si))));	// 632 mov     al, [si] ;~ 00D0:0537
cs=0x192;eip=0x000539; 	T(INC(si));	// 633 inc     si ;~ 00D0:0539
cs=0x192;eip=0x00053a; 	X(MOV(byte_14a24, al));	// 634 mov     byte_14A24, al ;~ 00D0:053A
cs=0x192;eip=0x00053d; 	J(JMP(sub_104b7));	// 635 jmp     sub_104B7 ;~ 00D0:053D
loc_10540:
	// 4408 
cs=0x192;eip=0x000540; 	T(MOV(dx, *(dw*)(raddr(ds,si))));	// 639 mov     dx, [si] ;~ 00D0:0540
cs=0x192;eip=0x000542; 	T(INC(si));	// 640 inc     si ;~ 00D0:0542
cs=0x192;eip=0x000543; 	T(INC(si));	// 641 inc     si ;~ 00D0:0543
cs=0x192;eip=0x000544; 	X(PUSH(si));	// 642 push    si ;~ 00D0:0544
cs=0x192;eip=0x000545; 	J(JMP(loc_1051e));	// 643 jmp     short loc_1051E ;~ 00D0:0545
sub_10547:
	// 650 
cs=0x192;eip=0x000547; 	T(MOV(al, *(raddr(ds,si+8))));	// 652 mov     al, [si+8] ;~ 00D0:0547
sub_1054a:
	// 659 
cs=0x192;eip=0x00054a; 	T(MOV(bx, 0x1B72));	// 661 mov     bx, 1B72h ;~ 00D0:054A
ret_d0_54d:
	// 4409 
cs=0x192;eip=0x00054d; 	T(MOV(cl, al));	// 662 mov     cl, al ;~ 00D0:054D
cs=0x192;eip=0x00054f; 	T(AND(al, 7));	// 663 and     al, 7 ;~ 00D0:054F
cs=0x192;eip=0x000551; 	T(ADD(al, al));	// 664 add     al, al ;~ 00D0:0551
cs=0x192;eip=0x000553; 	T(CBW);	// 665 cbw ;~ 00D0:0553
cs=0x192;eip=0x000554; 	X(PUSH(bx));	// 666 push    bx ;~ 00D0:0554
cs=0x192;eip=0x000555; 	T(ADD(bx, ax));	// 667 add     bx, ax ;~ 00D0:0555
cs=0x192;eip=0x000557; 	T(MOV(dx, *(dw*)(raddr(ds,bx))));	// 668 mov     dx, [bx] ;~ 00D0:0557
cs=0x192;eip=0x000559; 	X(MOV(word_14a06, dx));	// 669 mov     word_14A06, dx ;~ 00D0:0559
cs=0x192;eip=0x00055d; 	X(POP(bx));	// 670 pop     bx ;~ 00D0:055D
cs=0x192;eip=0x00055e; 	T(MOV(al, cl));	// 671 mov     al, cl ;~ 00D0:055E
cs=0x192;eip=0x000560; 	T(SHR(al, 1));	// 672 shr     al, 1 ;~ 00D0:0560
cs=0x192;eip=0x000562; 	T(SHR(al, 1));	// 673 shr     al, 1 ;~ 00D0:0562
cs=0x192;eip=0x000564; 	T(AND(al, 0x0E));	// 674 and     al, 0Eh ;~ 00D0:0564
cs=0x192;eip=0x000566; 	T(ADD(bx, ax));	// 675 add     bx, ax ;~ 00D0:0566
cs=0x192;eip=0x000568; 	T(MOV(dx, *(dw*)(raddr(ds,bx))));	// 676 mov     dx, [bx] ;~ 00D0:0568
cs=0x192;eip=0x00056a; 	X(MOV(word_14a08, dx));	// 677 mov     word_14A08, dx ;~ 00D0:056A
cs=0x192;eip=0x00056e; 	X(PUSH(es));	// 678 push    es ;~ 00D0:056E
cs=0x192;eip=0x00056f; 	T(MOV(ax, 0x0B800));	// 679 mov     ax, 0B800h ;~ 00D0:056F
cs=0x192;eip=0x000572; 	T(MOV(es, ax));	// 680 mov     es, ax ;~ 00D0:0572
cs=0x192;eip=0x000574; 	T(CLD);	// 682 cld ;~ 00D0:0574
cs=0x192;eip=0x000575; 	T(MOV(cx, 4));	// 683 mov     cx, 4 ;~ 00D0:0575
cs=0x192;eip=0x000578; 	T(MOV(dx, 0x1972));	// 684 mov     dx, 1972h ;~ 00D0:0578
loc_1057b:
	// 4410 
cs=0x192;eip=0x00057b; 	T(LODSB);	// 687 lodsb ;~ 00D0:057B
cs=0x192;eip=0x00057c; 	T(MOV(ah, 0));	// 688 mov     ah, 0 ;~ 00D0:057C
cs=0x192;eip=0x00057e; 	T(MOV(bx, dx));	// 689 mov     bx, dx ;~ 00D0:057E
cs=0x192;eip=0x000580; 	T(ADD(bx, ax));	// 690 add     bx, ax ;~ 00D0:0580
cs=0x192;eip=0x000582; 	T(ADD(bx, ax));	// 691 add     bx, ax ;~ 00D0:0582
cs=0x192;eip=0x000584; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 692 mov     ax, [bx] ;~ 00D0:0584
cs=0x192;eip=0x000586; 	T(MOV(bx, ax));	// 693 mov     bx, ax ;~ 00D0:0586
cs=0x192;eip=0x000588; 	T(NOT(bx));	// 694 not     bx ;~ 00D0:0588
cs=0x192;eip=0x00058a; 	T(AND(ax, word_14a06));	// 695 and     ax, word_14A06 ;~ 00D0:058A
cs=0x192;eip=0x00058e; 	T(AND(bx, word_14a08));	// 696 and     bx, word_14A08 ;~ 00D0:058E
cs=0x192;eip=0x000592; 	T(OR(ax, bx));	// 697 or      ax, bx ;~ 00D0:0592
cs=0x192;eip=0x000594; 	X(STOSW);	// 698 stosw ;~ 00D0:0594
cs=0x192;eip=0x000595; 	T(ADD(di, 0x1FFE));	// 699 add     di, 1FFEh ;~ 00D0:0595
cs=0x192;eip=0x000599; 	T(LODSB);	// 700 lodsb ;~ 00D0:0599
cs=0x192;eip=0x00059a; 	T(MOV(ah, 0));	// 701 mov     ah, 0 ;~ 00D0:059A
cs=0x192;eip=0x00059c; 	T(MOV(bx, dx));	// 702 mov     bx, dx ;~ 00D0:059C
cs=0x192;eip=0x00059e; 	T(ADD(bx, ax));	// 703 add     bx, ax ;~ 00D0:059E
cs=0x192;eip=0x0005a0; 	T(ADD(bx, ax));	// 704 add     bx, ax ;~ 00D0:05A0
cs=0x192;eip=0x0005a2; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 705 mov     ax, [bx] ;~ 00D0:05A2
cs=0x192;eip=0x0005a4; 	T(MOV(bx, ax));	// 706 mov     bx, ax ;~ 00D0:05A4
cs=0x192;eip=0x0005a6; 	T(NOT(bx));	// 707 not     bx ;~ 00D0:05A6
cs=0x192;eip=0x0005a8; 	T(AND(ax, word_14a06));	// 708 and     ax, word_14A06 ;~ 00D0:05A8
cs=0x192;eip=0x0005ac; 	T(AND(bx, word_14a08));	// 709 and     bx, word_14A08 ;~ 00D0:05AC
cs=0x192;eip=0x0005b0; 	T(OR(ax, bx));	// 710 or      ax, bx ;~ 00D0:05B0
cs=0x192;eip=0x0005b2; 	X(STOSW);	// 711 stosw ;~ 00D0:05B2
cs=0x192;eip=0x0005b3; 	T(SUB(di, 0x1FB2));	// 712 sub     di, 1FB2h ;~ 00D0:05B3
cs=0x192;eip=0x0005b7; 	J(LOOP(loc_1057b));	// 713 loop    loc_1057B ;~ 00D0:05B7
cs=0x192;eip=0x0005b9; 	X(POP(es));	// 714 pop     es ;~ 00D0:05B9
cs=0x192;eip=0x0005ba; 	J(RETN(0));	// 716 retn ;~ 00D0:05BA
sub_105bb:
	// 723 
cs=0x192;eip=0x0005bb; 	T(MOV(ah, 1));	// 725 mov     ah, 1 ;~ 00D0:05BB
ret_d0_5bd:
	// 4411 
cs=0x192;eip=0x0005bd; 	S(_INT(0x16));	// 726 int     16h             ; KEYBOARD - CHECK BUFFER, DO NOT CLEAR ;~ 00D0:05BD
cs=0x192;eip=0x0005bf; 	J(JZ(sub_105bb));	// 730 jz      short sub_105BB ;~ 00D0:05BF
cs=0x192;eip=0x0005c1; 	T(MOV(ah, 0));	// 731 mov     ah, 0 ;~ 00D0:05C1
cs=0x192;eip=0x0005c3; 	S(_INT(0x16));	// 732 int     16h             ; KEYBOARD - READ CHAR FROM BUFFER, WAIT IF EMPTY ;~ 00D0:05C3
cs=0x192;eip=0x0005c5; 	J(RETN(0));	// 734 retn ;~ 00D0:05C5
sub_105c6:
	// 741 
cs=0x192;eip=0x0005c6; 	T(MOV(ch, 0x20));	// 743 mov     ch, 20h ; ' ' ;~ 00D0:05C6
ret_d0_5c8:
	// 4412 
cs=0x192;eip=0x0005c8; 	T(MOV(ah, 1));	// 744 mov     ah, 1 ;~ 00D0:05C8
cs=0x192;eip=0x0005ca; 	S(_INT(0x10));	// 745 int     10h             ; - VIDEO - SET CURSOR CHARACTERISTICS ;~ 00D0:05CA
cs=0x192;eip=0x0005cc; 	J(RETN(0));	// 749 retn ;~ 00D0:05CC
sub_105cd:
	// 756 
cs=0x192;eip=0x0005cd; 	X(PUSH(es));	// 757 push    es ;~ 00D0:05CD
ret_d0_5ce:
	// 4413 
cs=0x192;eip=0x0005ce; 	T(XOR(ax, ax));	// 758 xor     ax, ax ;~ 00D0:05CE
cs=0x192;eip=0x0005d0; 	T(MOV(es, ax));	// 759 mov     es, ax ;~ 00D0:05D0
cs=0x192;eip=0x0005d2; 	T(MOV(ax, *(dw*)(raddr(es,0x70))));	// 761 mov     ax, es:70h ;~ 00D0:05D2
cs=0x192;eip=0x0005d6; 	X(MOV(word_14a0a, ax));	// 762 mov     word_14A0A, ax ;~ 00D0:05D6
cs=0x192;eip=0x0005d9; 	T(MOV(ax, *(dw*)(raddr(es,0x72))));	// 763 mov     ax, es:72h ;~ 00D0:05D9
cs=0x192;eip=0x0005dd; 	X(MOV(word_14a0c, ax));	// 764 mov     word_14A0C, ax ;~ 00D0:05DD
cs=0x192;eip=0x0005e0; 	T(MOV(ax, 0x600));	// 765 mov     ax, 600h ;~ 00D0:05E0
cs=0x192;eip=0x0005e3; 	X(PUSH(cs));	// 766 push    cs ;~ 00D0:05E3
cs=0x192;eip=0x0005e4; 	X(POP(dx));	// 767 pop     dx ;~ 00D0:05E4
loc_105e5:
	// 4414 
cs=0x192;eip=0x0005e5; 	T(CLI);	// 770 cli ;~ 00D0:05E5
cs=0x192;eip=0x0005e6; 	X(MOV(*(dw*)(raddr(es,0x70)), ax));	// 771 mov     es:70h, ax ;~ 00D0:05E6
cs=0x192;eip=0x0005ea; 	X(MOV(*(dw*)(raddr(es,0x72)), dx));	// 772 mov     es:72h, dx ;~ 00D0:05EA
cs=0x192;eip=0x0005ef; 	T(STI);	// 773 sti ;~ 00D0:05EF
cs=0x192;eip=0x0005f0; 	X(POP(es));	// 774 pop     es ;~ 00D0:05F0
cs=0x192;eip=0x0005f1; 	J(RETN(0));	// 776 retn ;~ 00D0:05F1
sub_105f2:
	// 783 
cs=0x192;eip=0x0005f2; 	T(MOV(ax, word_14a0a));	// 784 mov     ax, word_14A0A ;~ 00D0:05F2
ret_d0_5f5:
	// 4415 
cs=0x192;eip=0x0005f5; 	T(MOV(dx, word_14a0c));	// 785 mov     dx, word_14A0C ;~ 00D0:05F5
cs=0x192;eip=0x0005f9; 	X(PUSH(es));	// 786 push    es ;~ 00D0:05F9
cs=0x192;eip=0x0005fa; 	T(XOR(bx, bx));	// 787 xor     bx, bx ;~ 00D0:05FA
cs=0x192;eip=0x0005fc; 	T(MOV(es, bx));	// 788 mov     es, bx ;~ 00D0:05FC
cs=0x192;eip=0x0005fe; 	J(JMP(loc_105e5));	// 790 jmp     short loc_105E5 ;~ 00D0:05FE
seg000_600_proc:
	// 795 
cs=0x192;eip=0x000600; 	X(PUSH(ax));	// 795 push    ax ;~ 00D0:0600
ret_d0_601:
	// 4416 
cs=0x192;eip=0x000601; 	X(PUSH(ds));	// 796 push    ds ;~ 00D0:0601
cs=0x192;eip=0x000602; 	T(MOV(ax, 0x2E61));	// 797 mov     ax, 2E61h ;~ 00D0:0602
cs=0x192;eip=0x000605; 	T(SHR(ax, 1));	// 798 shr     ax, 1 ;~ 00D0:0605
cs=0x192;eip=0x000607; 	T(SHR(ax, 1));	// 799 shr     ax, 1 ;~ 00D0:0607
cs=0x192;eip=0x000609; 	T(SHR(ax, 1));	// 800 shr     ax, 1 ;~ 00D0:0609
cs=0x192;eip=0x00060b; 	T(SHR(ax, 1));	// 801 shr     ax, 1 ;~ 00D0:060B
cs=0x192;eip=0x00060d; 	X(PUSH(bx));	// 802 push    bx ;~ 00D0:060D
cs=0x192;eip=0x00060e; 	T(MOV(bx, cs));	// 803 mov     bx, cs ;~ 00D0:060E
cs=0x192;eip=0x000610; 	T(ADD(ax, bx));	// 804 add     ax, bx ;~ 00D0:0610
cs=0x192;eip=0x000612; 	X(POP(bx));	// 805 pop     bx ;~ 00D0:0612
cs=0x192;eip=0x000613; 	T(MOV(ds, ax));	// 806 mov     ds, ax ;~ 00D0:0613
cs=0x192;eip=0x000615; 	X(INC(byte_14a22));	// 807 inc     byte_14A22 ;~ 00D0:0615
cs=0x192;eip=0x000619; 	X(INC(byte_14a13));	// 808 inc     byte_14A13 ;~ 00D0:0619
cs=0x192;eip=0x00061d; 	X(POP(ds));	// 809 pop     ds ;~ 00D0:061D
cs=0x192;eip=0x00061e; 	X(POP(ax));	// 810 pop     ax ;~ 00D0:061E
cs=0x192;eip=0x00061f; 	J(IRET);	// 811 iret ;~ 00D0:061F
sub_10620:
	// 816 
cs=0x192;eip=0x000620; 	T(CMP(byte_14a22, 2));	// 818 cmp     byte_14A22, 2 ;~ 00D0:0620
ret_d0_625:
	// 4417 
cs=0x192;eip=0x000625; 	J(JC(sub_10620));	// 819 jb      short sub_10620 ;~ 00D0:0625
cs=0x192;eip=0x000627; 	X(MOV(byte_14a22, 0));	// 820 mov     byte_14A22, 0 ;~ 00D0:0627
cs=0x192;eip=0x00062c; 	J(RETN(0));	// 821 retn ;~ 00D0:062C
sub_1062d:
	// 828 
cs=0x192;eip=0x00062d; 	T(MOV(si, 0x77AC));	// 829 mov     si, 77ACh ;~ 00D0:062D
ret_d0_630:
	// 4418 
cs=0x192;eip=0x000630; 	T(MOV(cx, 0x0FF));	// 830 mov     cx, 0FFh ;~ 00D0:0630
cs=0x192;eip=0x000633; 	T(MOV(al, *(raddr(ds,si+1))));	// 831 mov     al, [si+1] ;~ 00D0:0633
loc_10636:
	// 4419 
cs=0x192;eip=0x000636; 	T(MOV(ah, *(raddr(ds,si))));	// 834 mov     ah, [si] ;~ 00D0:0636
cs=0x192;eip=0x000638; 	X(XOR(*(raddr(ds,si)), al));	// 835 xor     [si], al ;~ 00D0:0638
cs=0x192;eip=0x00063a; 	T(MOV(al, ah));	// 836 mov     al, ah ;~ 00D0:063A
cs=0x192;eip=0x00063c; 	T(DEC(si));	// 837 dec     si ;~ 00D0:063C
cs=0x192;eip=0x00063d; 	J(LOOP(loc_10636));	// 838 loop    loc_10636 ;~ 00D0:063D
cs=0x192;eip=0x00063f; 	J(RETN(0));	// 839 retn ;~ 00D0:063F
sub_10640:
	// 846 
cs=0x192;eip=0x000640; 	T(MOV(si, 0x77AC));	// 847 mov     si, 77ACh ;~ 00D0:0640
ret_d0_643:
	// 4420 
cs=0x192;eip=0x000643; 	T(MOV(cx, 0x0FF));	// 848 mov     cx, 0FFh ;~ 00D0:0643
cs=0x192;eip=0x000646; 	T(MOV(al, *(raddr(ds,si+1))));	// 849 mov     al, [si+1] ;~ 00D0:0646
loc_10649:
	// 4421 
cs=0x192;eip=0x000649; 	X(XOR(*(raddr(ds,si)), al));	// 852 xor     [si], al ;~ 00D0:0649
cs=0x192;eip=0x00064b; 	T(MOV(al, *(raddr(ds,si))));	// 853 mov     al, [si] ;~ 00D0:064B
cs=0x192;eip=0x00064d; 	T(CMP(al, 0x20));	// 854 cmp     al, 20h ; ' ' ;~ 00D0:064D
cs=0x192;eip=0x00064f; 	J(JC(loc_1065b));	// 855 jb      short loc_1065B ;~ 00D0:064F
cs=0x192;eip=0x000651; 	T(CMP(al, 0x80));	// 856 cmp     al, 80h ; '€' ;~ 00D0:0651
cs=0x192;eip=0x000653; 	J(JNC(loc_1065b));	// 857 jnb     short loc_1065B ;~ 00D0:0653
cs=0x192;eip=0x000655; 	T(DEC(si));	// 858 dec     si ;~ 00D0:0655
cs=0x192;eip=0x000656; 	J(LOOP(loc_10649));	// 859 loop    loc_10649 ;~ 00D0:0656
cs=0x192;eip=0x000658; 	T(XOR(al, al));	// 860 xor     al, al ;~ 00D0:0658
cs=0x192;eip=0x00065a; 	J(RETN(0));	// 861 retn ;~ 00D0:065A
loc_1065b:
	// 4422 
cs=0x192;eip=0x00065b; 	T(XOR(al, al));	// 866 xor     al, al ;~ 00D0:065B
cs=0x192;eip=0x00065d; 	T(INC(al));	// 867 inc     al ;~ 00D0:065D
cs=0x192;eip=0x00065f; 	J(RETN(0));	// 868 retn ;~ 00D0:065F
sub_10660:
	// 875 
cs=0x192;eip=0x000660; 	X(MOV(byte_16b9a, 5));	// 876 mov     byte_16B9A, 5 ;~ 00D0:0660
ret_d0_665:
	// 4423 
cs=0x192;eip=0x000665; 	X(MOV(byte_16b9b, 3));	// 877 mov     byte_16B9B, 3 ;~ 00D0:0665
cs=0x192;eip=0x00066a; 	X(MOV(byte_14cd4, 0));	// 878 mov     byte_14CD4, 0 ;~ 00D0:066A
cs=0x192;eip=0x00066f; 	X(MOV(byte_14a3a, 0));	// 879 mov     byte_14A3A, 0 ;~ 00D0:066F
cs=0x192;eip=0x000674; 	T(MOV(al, byte_14a28));	// 880 mov     al, byte_14A28 ;~ 00D0:0674
cs=0x192;eip=0x000677; 	T(INC(al));	// 881 inc     al ;~ 00D0:0677
cs=0x192;eip=0x000679; 	J(JNZ(loc_10694));	// 882 jnz     short loc_10694 ;~ 00D0:0679
cs=0x192;eip=0x00067b; 	T(MOV(al, *(db*)(((db*)&word_14a36))));	// 883 mov     al, byte ptr word_14A36 ;~ 00D0:067B
cs=0x192;eip=0x00067e; 	T(CMP(al, 0x13));	// 884 cmp     al, 13h ;~ 00D0:067E
cs=0x192;eip=0x000680; 	J(JNZ(loc_10694));	// 885 jnz     short loc_10694 ;~ 00D0:0680
cs=0x192;eip=0x000682; 	T(MOV(bx, 0x1BD2));	// 886 mov     bx, 1BD2h ;~ 00D0:0682
cs=0x192;eip=0x000685; 	T(XOR(al, al));	// 887 xor     al, al ;~ 00D0:0685
cs=0x192;eip=0x000687; 	T(CMP(al, *(raddr(ds,bx))));	// 888 cmp     al, [bx] ;~ 00D0:0687
cs=0x192;eip=0x000689; 	J(JNZ(loc_10694));	// 889 jnz     short loc_10694 ;~ 00D0:0689
cs=0x192;eip=0x00068b; 	X(MOV(*(raddr(ds,bx)), 1));	// 890 mov     byte ptr [bx], 1 ;~ 00D0:068B
cs=0x192;eip=0x00068e; 	T(MOV(si, 0x2069));	// 891 mov     si, 2069h ;~ 00D0:068E
cs=0x192;eip=0x000691; 	J(CALL(sub_104b7,0));	// 892 call    sub_104B7 ;~ 00D0:0691
loc_10694:
	// 4424 
cs=0x192;eip=0x000694; 	T(MOV(cx, 6));	// 896 mov     cx, 6 ;~ 00D0:0694
cs=0x192;eip=0x000697; 	T(MOV(bx, 0x6FAB));	// 897 mov     bx, 6FABh ;~ 00D0:0697
loc_1069a:
	// 4425 
cs=0x192;eip=0x00069a; 	X(MOV(*(raddr(ds,bx)), 0));	// 900 mov     byte ptr [bx], 0 ;~ 00D0:069A
cs=0x192;eip=0x00069d; 	T(ADD(bx, 7));	// 901 add     bx, 7 ;~ 00D0:069D
cs=0x192;eip=0x0006a0; 	J(LOOP(loc_1069a));	// 902 loop    loc_1069A ;~ 00D0:06A0
cs=0x192;eip=0x0006a2; 	T(MOV(al, *(db*)(((db*)&word_14a36)+1)));	// 903 mov     al, byte ptr word_14A36+1 ;~ 00D0:06A2
cs=0x192;eip=0x0006a5; 	T(DEC(al));	// 904 dec     al ;~ 00D0:06A5
cs=0x192;eip=0x0006a7; 	T(MOV(al, 1));	// 905 mov     al, 1 ;~ 00D0:06A7
cs=0x192;eip=0x0006a9; 	J(JNZ(loc_106ae));	// 906 jnz     short loc_106AE ;~ 00D0:06A9
cs=0x192;eip=0x0006ab; 	T(MOV(al, byte_14a2b));	// 907 mov     al, byte_14A2B ;~ 00D0:06AB
loc_106ae:
	// 4426 
cs=0x192;eip=0x0006ae; 	X(MOV(byte_168f2, al));	// 910 mov     byte_168F2, al ;~ 00D0:06AE
cs=0x192;eip=0x0006b1; 	X(MOV(byte_16b9c, 0));	// 911 mov     byte_16B9C, 0 ;~ 00D0:06B1
cs=0x192;eip=0x0006b6; 	J(CALL(sub_10bdd,0));	// 912 call    sub_10BDD ;~ 00D0:06B6
cs=0x192;eip=0x0006b9; 	J(CALL(sub_10bea,0));	// 913 call    sub_10BEA ;~ 00D0:06B9
cs=0x192;eip=0x0006bc; 	T(MOV(di, 0x244));	// 914 mov     di, 244h ;~ 00D0:06BC
cs=0x192;eip=0x0006bf; 	T(CLD);	// 915 cld ;~ 00D0:06BF
cs=0x192;eip=0x0006c0; 	T(XOR(ax, ax));	// 916 xor     ax, ax ;~ 00D0:06C0
cs=0x192;eip=0x0006c2; 	T(MOV(cx, 0x120));	// 917 mov     cx, 120h ;~ 00D0:06C2
	// 918 rep stosw ;~ 00D0:06C5
cs=0x192;eip=0x0006c5; 	X(	REP STOSW);	// 918 rep stosw ;~ 00D0:06C5
cs=0x192;eip=0x0006c7; 	T(DEC(ax));	// 919 dec     ax ;~ 00D0:06C7
cs=0x192;eip=0x0006c8; 	T(MOV(cx, 0x120));	// 920 mov     cx, 120h ;~ 00D0:06C8
	// 921 rep stosw ;~ 00D0:06CB
cs=0x192;eip=0x0006cb; 	X(	REP STOSW);	// 921 rep stosw ;~ 00D0:06CB
cs=0x192;eip=0x0006cd; 	T(MOV(di, 4));	// 922 mov     di, 4 ;~ 00D0:06CD
cs=0x192;eip=0x0006d0; 	T(MOV(ax, 0x101));	// 923 mov     ax, 101h ;~ 00D0:06D0
cs=0x192;eip=0x0006d3; 	T(MOV(cx, 0x120));	// 924 mov     cx, 120h ;~ 00D0:06D3
	// 925 rep stosw ;~ 00D0:06D6
cs=0x192;eip=0x0006d6; 	X(	REP STOSW);	// 925 rep stosw ;~ 00D0:06D6
cs=0x192;eip=0x0006d8; 	T(MOV(al, *(db*)(((db*)&word_14a36))));	// 926 mov     al, byte ptr word_14A36 ;~ 00D0:06D8
cs=0x192;eip=0x0006db; 	T(OR(al, al));	// 927 or      al, al ;~ 00D0:06DB
cs=0x192;eip=0x0006dd; 	J(JZ(loc_106e5));	// 928 jz      short loc_106E5 ;~ 00D0:06DD
cs=0x192;eip=0x0006df; 	T(MOV(bx, word_14a1c));	// 929 mov     bx, word_14A1C ;~ 00D0:06DF
cs=0x192;eip=0x0006e3; 	T(MOV(al, *(raddr(ds,bx))));	// 930 mov     al, [bx] ;~ 00D0:06E3
loc_106e5:
	// 4427 
cs=0x192;eip=0x0006e5; 	T(MOV(ah, 0));	// 933 mov     ah, 0 ;~ 00D0:06E5
cs=0x192;eip=0x0006e7; 	T(ADD(ax, ax));	// 934 add     ax, ax ;~ 00D0:06E7
cs=0x192;eip=0x0006e9; 	T(MOV(bx, 0x3B4C));	// 935 mov     bx, 3B4Ch ;~ 00D0:06E9
cs=0x192;eip=0x0006ec; 	T(ADD(bx, ax));	// 936 add     bx, ax ;~ 00D0:06EC
cs=0x192;eip=0x0006ee; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 937 mov     bx, [bx] ;~ 00D0:06EE
loc_106f0:
	// 4428 
cs=0x192;eip=0x0006f0; 	T(MOV(al, *(raddr(ds,bx))));	// 940 mov     al, [bx] ;~ 00D0:06F0
cs=0x192;eip=0x0006f2; 	T(INC(al));	// 941 inc     al ;~ 00D0:06F2
cs=0x192;eip=0x0006f4; 	J(JNZ(loc_106f8));	// 942 jnz     short loc_106F8 ;~ 00D0:06F4
cs=0x192;eip=0x0006f6; 	J(JMP(loc_1070b));	// 943 jmp     short loc_1070B ;~ 00D0:06F6
loc_106f8:
	// 4429 
cs=0x192;eip=0x0006f8; 	T(INC(bx));	// 947 inc     bx ;~ 00D0:06F8
cs=0x192;eip=0x0006f9; 	X(PUSH(bx));	// 948 push    bx ;~ 00D0:06F9
cs=0x192;eip=0x0006fa; 	T(MOV(ah, 0));	// 949 mov     ah, 0 ;~ 00D0:06FA
cs=0x192;eip=0x0006fc; 	T(ADD(ax, ax));	// 950 add     ax, ax ;~ 00D0:06FC
cs=0x192;eip=0x0006fe; 	T(MOV(bx, 0x1BE8));	// 951 mov     bx, 1BE8h ;~ 00D0:06FE
cs=0x192;eip=0x000701; 	T(ADD(bx, ax));	// 952 add     bx, ax ;~ 00D0:0701
cs=0x192;eip=0x000703; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 953 mov     bx, [bx] ;~ 00D0:0703
cs=0x192;eip=0x000705; __disp=bx;
	J(JMP(__dispatch_call));	// 954 jmp     bx ;~ 00D0:0705
ret_d0_707:
	// 4430 
cs=0x192;eip=0x000707; 	X(POP(bx));	// 956 pop     bx ;~ 00D0:0707
cs=0x192;eip=0x000708; 	T(INC(bx));	// 957 inc     bx ;~ 00D0:0708
cs=0x192;eip=0x000709; 	J(JMP(loc_106f0));	// 958 jmp     short loc_106F0 ;~ 00D0:0709
loc_1070b:
	// 4431 
cs=0x192;eip=0x00070b; 	X(MOV(word_16b98, 0x730));	// 962 mov     word_16B98, 730h ;~ 00D0:070B
cs=0x192;eip=0x000711; 	T(MOV(bx, 0x2567));	// 963 mov     bx, 2567h ;~ 00D0:0711
cs=0x192;eip=0x000714; 	T(MOV(cx, 0x16));	// 964 mov     cx, 16h ;~ 00D0:0714
loc_10717:
	// 4432 
cs=0x192;eip=0x000717; 	T(MOV(ax, word_14a36));	// 967 mov     ax, word_14A36 ;~ 00D0:0717
cs=0x192;eip=0x00071a; 	T(CMP(ax, *(dw*)(raddr(ds,bx))));	// 968 cmp     ax, [bx] ;~ 00D0:071A
cs=0x192;eip=0x00071c; 	J(JNZ(loc_10733));	// 969 jnz     short loc_10733 ;~ 00D0:071C
cs=0x192;eip=0x00071e; 	X(PUSH(bx));	// 970 push    bx ;~ 00D0:071E
cs=0x192;eip=0x00071f; 	T(MOV(bl, *(raddr(ds,bx+2))));	// 971 mov     bl, [bx+2] ;~ 00D0:071F
cs=0x192;eip=0x000722; 	T(MOV(bh, 0));	// 972 mov     bh, 0 ;~ 00D0:0722
cs=0x192;eip=0x000724; 	T(ADD(bx, bx));	// 973 add     bx, bx ;~ 00D0:0724
cs=0x192;eip=0x000726; 	T(ADD(bx, 0x1BEA));	// 974 add     bx, 1BEAh ;~ 00D0:0726
cs=0x192;eip=0x00072a; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 975 mov     bx, [bx] ;~ 00D0:072A
cs=0x192;eip=0x00072c; 	X(PUSH(cx));	// 976 push    cx ;~ 00D0:072C
cs=0x192;eip=0x00072d; 	X(PUSH(bx));	// 977 push    bx ;~ 00D0:072D
cs=0x192;eip=0x00072e; __disp=bx;
	J(JMP(__dispatch_call));	// 978 jmp     bx ;~ 00D0:072E
ret_d0_730:
	// 4433 
cs=0x192;eip=0x000730; 	X(POP(bx));	// 980 pop     bx ;~ 00D0:0730
cs=0x192;eip=0x000731; 	X(POP(cx));	// 981 pop     cx ;~ 00D0:0731
cs=0x192;eip=0x000732; 	X(POP(bx));	// 982 pop     bx ;~ 00D0:0732
loc_10733:
	// 4434 
cs=0x192;eip=0x000733; 	T(ADD(bx, 3));	// 985 add     bx, 3 ;~ 00D0:0733
cs=0x192;eip=0x000736; 	J(LOOP(loc_10717));	// 986 loop    loc_10717 ;~ 00D0:0736
cs=0x192;eip=0x000738; 	X(MOV(word_16b98, 0x707));	// 987 mov     word_16B98, 707h ;~ 00D0:0738
cs=0x192;eip=0x00073e; 	T(MOV(al, *(db*)(((db*)&word_14a36))));	// 988 mov     al, byte ptr word_14A36 ;~ 00D0:073E
cs=0x192;eip=0x000741; 	T(CMP(al, 0x1F));	// 989 cmp     al, 1Fh ;~ 00D0:0741
cs=0x192;eip=0x000743; 	J(JNZ(loc_10759));	// 990 jnz     short loc_10759 ;~ 00D0:0743
cs=0x192;eip=0x000745; 	T(MOV(cx, 0x100));	// 991 mov     cx, 100h ;~ 00D0:0745
cs=0x192;eip=0x000748; 	T(MOV(di, 0x6A3));	// 992 mov     di, 6A3h ;~ 00D0:0748
loc_1074b:
	// 4435 
cs=0x192;eip=0x00074b; 	T(MOV(al, *(raddr(ds,di-0x240))));	// 995 mov     al, [di-240h] ;~ 00D0:074B
cs=0x192;eip=0x00074f; 	T(CMP(al, 0x0C7));	// 996 cmp     al, 0C7h ; 'Ç' ;~ 00D0:074F
cs=0x192;eip=0x000751; 	J(JNC(loc_10756));	// 997 jnb     short loc_10756 ;~ 00D0:0751
cs=0x192;eip=0x000753; 	X(MOV(*(raddr(ds,di)), 0));	// 998 mov     byte ptr [di], 0 ;~ 00D0:0753
loc_10756:
	// 4436 
cs=0x192;eip=0x000756; 	T(DEC(di));	// 1001 dec     di ;~ 00D0:0756
cs=0x192;eip=0x000757; 	J(LOOP(loc_1074b));	// 1002 loop    loc_1074B ;~ 00D0:0757
loc_10759:
	// 4437 
cs=0x192;eip=0x000759; 	T(MOV(si, 0x1369));	// 1005 mov     si, 1369h ;~ 00D0:0759
cs=0x192;eip=0x00075c; 	T(MOV(cx, 0x21));	// 1006 mov     cx, 21h ; '!' ;~ 00D0:075C
loc_1075f:
	// 4438 
cs=0x192;eip=0x00075f; 	T(MOV(ax, word_14a36));	// 1009 mov     ax, word_14A36 ;~ 00D0:075F
cs=0x192;eip=0x000762; 	T(CMP(ax, *(dw*)(raddr(ds,si))));	// 1010 cmp     ax, [si] ;~ 00D0:0762
cs=0x192;eip=0x000764; 	J(JNZ(loc_10783));	// 1011 jnz     short loc_10783 ;~ 00D0:0764
cs=0x192;eip=0x000766; 	T(MOV(bx, *(dw*)(raddr(ds,si+2))));	// 1012 mov     bx, [si+2] ;~ 00D0:0766
cs=0x192;eip=0x000769; 	T(MOV(al, *(raddr(ds,bx))));	// 1013 mov     al, [bx] ;~ 00D0:0769
cs=0x192;eip=0x00076b; 	T(INC(al));	// 1014 inc     al ;~ 00D0:076B
cs=0x192;eip=0x00076d; 	J(JNZ(loc_10773));	// 1015 jnz     short loc_10773 ;~ 00D0:076D
cs=0x192;eip=0x00076f; 	X(MOV(*(dw*)(raddr(ds,bx)), 0x2A29));	// 1016 mov     word ptr [bx], 2A29h ;~ 00D0:076F
loc_10773:
	// 4439 
cs=0x192;eip=0x000773; 	T(SUB(bx, 0x240));	// 1019 sub     bx, 240h ;~ 00D0:0773
cs=0x192;eip=0x000777; 	X(MOV(*(dw*)(raddr(ds,bx)), 0x6464));	// 1020 mov     word ptr [bx], 6464h ;~ 00D0:0777
cs=0x192;eip=0x00077b; 	T(MOV(ax, si));	// 1021 mov     ax, si ;~ 00D0:077B
cs=0x192;eip=0x00077d; 	T(ADD(ax, 4));	// 1022 add     ax, 4 ;~ 00D0:077D
cs=0x192;eip=0x000780; 	X(MOV(word_14a16, ax));	// 1023 mov     word_14A16, ax ;~ 00D0:0780
loc_10783:
	// 4440 
cs=0x192;eip=0x000783; 	T(ADD(si, 0x0E));	// 1026 add     si, 0Eh ;~ 00D0:0783
cs=0x192;eip=0x000786; 	J(LOOP(loc_1075f));	// 1027 loop    loc_1075F ;~ 00D0:0786
cs=0x192;eip=0x000788; 	J(CALL(sub_10c0d,0));	// 1028 call    sub_10C0D ;~ 00D0:0788
cs=0x192;eip=0x00078b; 	T(MOV(al, byte_16b9c));	// 1029 mov     al, byte_16B9C ;~ 00D0:078B
cs=0x192;eip=0x00078e; 	T(DEC(al));	// 1030 dec     al ;~ 00D0:078E
cs=0x192;eip=0x000790; 	J(JNZ(loc_10797));	// 1031 jnz     short loc_10797 ;~ 00D0:0790
cs=0x192;eip=0x000792; 	T(MOV(si, 0x203E));	// 1032 mov     si, 203Eh ;~ 00D0:0792
cs=0x192;eip=0x000795; 	J(JMP(loc_107b1));	// 1033 jmp     short loc_107B1 ;~ 00D0:0795
loc_10797:
	// 4441 
cs=0x192;eip=0x000797; 	T(DEC(al));	// 1037 dec     al ;~ 00D0:0797
cs=0x192;eip=0x000799; 	J(JNZ(loc_107a5));	// 1038 jnz     short loc_107A5 ;~ 00D0:0799
cs=0x192;eip=0x00079b; 	X(MOV(byte_14a25, 0x20));	// 1039 mov     byte_14A25, 20h ; ' ' ;~ 00D0:079B
cs=0x192;eip=0x0007a0; 	T(MOV(si, 0x2045));	// 1040 mov     si, 2045h ;~ 00D0:07A0
cs=0x192;eip=0x0007a3; 	J(JMP(loc_107b1));	// 1041 jmp     short loc_107B1 ;~ 00D0:07A3
loc_107a5:
	// 4442 
cs=0x192;eip=0x0007a5; 	T(DEC(al));	// 1045 dec     al ;~ 00D0:07A5
cs=0x192;eip=0x0007a7; 	J(JNZ(locret_107b9));	// 1046 jnz     short locret_107B9 ;~ 00D0:07A7
cs=0x192;eip=0x0007a9; 	X(MOV(byte_14a25, 0x20));	// 1047 mov     byte_14A25, 20h ; ' ' ;~ 00D0:07A9
cs=0x192;eip=0x0007ae; 	T(MOV(si, 0x205D));	// 1048 mov     si, 205Dh ;~ 00D0:07AE
loc_107b1:
	// 4443 
cs=0x192;eip=0x0007b1; 	J(CALL(sub_104b7,0));	// 1052 call    sub_104B7 ;~ 00D0:07B1
cs=0x192;eip=0x0007b4; 	X(MOV(byte_14a25, 1));	// 1053 mov     byte_14A25, 1 ;~ 00D0:07B4
locret_107b9:
	// 4444 
cs=0x192;eip=0x0007b9; 	J(RETN(0));	// 1056 retn ;~ 00D0:07B9
seg000_7ba_proc:
	// 1060 
cs=0x192;eip=0x0007ba; 	X(MOV(byte_14cd4, 1));	// 1060 mov     byte_14CD4, 1 ;~ 00D0:07BA
ret_d0_7bf:
	// 4445 
cs=0x192;eip=0x0007bf; 	T(MOV(bx, 0x2A8));	// 1061 mov     bx, 2A8h ;~ 00D0:07BF
cs=0x192;eip=0x0007c2; 	T(MOV(si, 0x1DF0));	// 1062 mov     si, 1DF0h ;~ 00D0:07C2
cs=0x192;eip=0x0007c5; 	T(MOV(cl, 6));	// 1063 mov     cl, 6 ;~ 00D0:07C5
cs=0x192;eip=0x0007c7; 	T(MOV(ch, 6));	// 1064 mov     ch, 6 ;~ 00D0:07C7
cs=0x192;eip=0x0007c9; 	J(JMP(loc_107ee));	// 1065 jmp     short loc_107EE ;~ 00D0:07C9
ret_d0_7cb:
	// 4446 
cs=0x192;eip=0x0007cb; 	T(MOV(bx, 0x275));	// 1067 mov     bx, 275h ;~ 00D0:07CB
cs=0x192;eip=0x0007ce; 	J(JMP(loc_107dd));	// 1068 jmp     short loc_107DD ;~ 00D0:07CE
ret_d0_7d0:
	// 4447 
cs=0x192;eip=0x0007d0; 	T(MOV(bx, 0x267));	// 1070 mov     bx, 267h ;~ 00D0:07D0
cs=0x192;eip=0x0007d3; 	J(JMP(loc_107dd));	// 1071 jmp     short loc_107DD ;~ 00D0:07D3
ret_d0_7d5:
	// 4448 
cs=0x192;eip=0x0007d5; 	T(MOV(bx, 0x26C));	// 1073 mov     bx, 26Ch ;~ 00D0:07D5
cs=0x192;eip=0x0007d8; 	J(JMP(loc_107dd));	// 1074 jmp     short loc_107DD ;~ 00D0:07D8
ret_d0_7da:
	// 4449 
cs=0x192;eip=0x0007da; 	T(MOV(bx, 0x277));	// 1076 mov     bx, 277h ;~ 00D0:07DA
loc_107dd:
	// 4450 
cs=0x192;eip=0x0007dd; 	T(MOV(al, *(db*)(((db*)&word_14a36))));	// 1080 mov     al, byte ptr word_14A36 ;~ 00D0:07DD
cs=0x192;eip=0x0007e0; 	T(CMP(al, 0x0C));	// 1081 cmp     al, 0Ch ;~ 00D0:07E0
cs=0x192;eip=0x0007e2; 	J(JC(loc_107e7));	// 1082 jb      short loc_107E7 ;~ 00D0:07E2
cs=0x192;eip=0x0007e4; 	J(JMP(loc_109e4));	// 1083 jmp     loc_109E4 ;~ 00D0:07E4
loc_107e7:
	// 4451 
cs=0x192;eip=0x0007e7; 	T(MOV(si, 0x1DBA));	// 1087 mov     si, 1DBAh ;~ 00D0:07E7
cs=0x192;eip=0x0007ea; 	T(MOV(cl, 9));	// 1088 mov     cl, 9 ;~ 00D0:07EA
cs=0x192;eip=0x0007ec; 	T(MOV(ch, 6));	// 1089 mov     ch, 6 ;~ 00D0:07EC
loc_107ee:
	// 4452 
cs=0x192;eip=0x0007ee; 	J(JMP(loc_109d1));	// 1092 jmp     loc_109D1 ;~ 00D0:07EE
ret_d0_7f1:
	// 4453 
cs=0x192;eip=0x0007f1; 	T(MOV(bx, 0x36C));	// 1094 mov     bx, 36Ch ;~ 00D0:07F1
cs=0x192;eip=0x0007f4; 	J(JMP(loc_10849));	// 1095 jmp     short loc_10849 ;~ 00D0:07F4
ret_d0_7f6:
	// 4454 
cs=0x192;eip=0x0007f6; 	T(MOV(bx, 0x37A));	// 1097 mov     bx, 37Ah ;~ 00D0:07F6
cs=0x192;eip=0x0007f9; 	J(JMP(loc_10849));	// 1098 jmp     short loc_10849 ;~ 00D0:07F9
ret_d0_7fb:
	// 4455 
cs=0x192;eip=0x0007fb; 	T(MOV(bx, 0x373));	// 1100 mov     bx, 373h ;~ 00D0:07FB
cs=0x192;eip=0x0007fe; 	J(JMP(loc_10849));	// 1101 jmp     short loc_10849 ;~ 00D0:07FE
ret_d0_800:
	// 4456 
cs=0x192;eip=0x000800; 	T(MOV(bx, 0x365));	// 1103 mov     bx, 365h ;~ 00D0:0800
cs=0x192;eip=0x000803; 	J(JMP(loc_10849));	// 1104 jmp     short loc_10849 ;~ 00D0:0803
ret_d0_805:
	// 4457 
cs=0x192;eip=0x000805; 	T(MOV(bx, 0x391));	// 1106 mov     bx, 391h ;~ 00D0:0805
cs=0x192;eip=0x000808; 	J(JMP(loc_10849));	// 1107 jmp     short loc_10849 ;~ 00D0:0808
ret_d0_80a:
	// 4458 
cs=0x192;eip=0x00080a; 	T(MOV(bx, 0x386));	// 1109 mov     bx, 386h ;~ 00D0:080A
cs=0x192;eip=0x00080d; 	J(JMP(loc_10849));	// 1110 jmp     short loc_10849 ;~ 00D0:080D
ret_d0_80f:
	// 4459 
cs=0x192;eip=0x00080f; 	T(MOV(bx, 0x3DB));	// 1112 mov     bx, 3DBh ;~ 00D0:080F
cs=0x192;eip=0x000812; 	J(JMP(loc_10849));	// 1113 jmp     short loc_10849 ;~ 00D0:0812
ret_d0_814:
	// 4460 
cs=0x192;eip=0x000814; 	T(MOV(bx, 0x3D3));	// 1115 mov     bx, 3D3h ;~ 00D0:0814
cs=0x192;eip=0x000817; 	J(JMP(loc_10849));	// 1116 jmp     short loc_10849 ;~ 00D0:0817
ret_d0_819:
	// 4461 
cs=0x192;eip=0x000819; 	T(MOV(bx, 0x3CB));	// 1118 mov     bx, 3CBh ;~ 00D0:0819
cs=0x192;eip=0x00081c; 	J(JMP(loc_10849));	// 1119 jmp     short loc_10849 ;~ 00D0:081C
ret_d0_81e:
	// 4462 
cs=0x192;eip=0x00081e; 	T(MOV(bx, 0x3BD));	// 1121 mov     bx, 3BDh ;~ 00D0:081E
cs=0x192;eip=0x000821; 	J(JMP(loc_10849));	// 1122 jmp     short loc_10849 ;~ 00D0:0821
ret_d0_823:
	// 4463 
cs=0x192;eip=0x000823; 	T(MOV(bx, 0x3B5));	// 1124 mov     bx, 3B5h ;~ 00D0:0823
cs=0x192;eip=0x000826; 	J(JMP(loc_10849));	// 1125 jmp     short loc_10849 ;~ 00D0:0826
ret_d0_828:
	// 4464 
cs=0x192;eip=0x000828; 	T(MOV(bx, 0x3AB));	// 1127 mov     bx, 3ABh ;~ 00D0:0828
cs=0x192;eip=0x00082b; 	J(JMP(loc_10849));	// 1128 jmp     short loc_10849 ;~ 00D0:082B
ret_d0_82d:
	// 4465 
cs=0x192;eip=0x00082d; 	T(MOV(bx, 0x3A4));	// 1130 mov     bx, 3A4h ;~ 00D0:082D
cs=0x192;eip=0x000830; 	J(JMP(loc_10849));	// 1131 jmp     short loc_10849 ;~ 00D0:0830
ret_d0_832:
	// 4466 
cs=0x192;eip=0x000832; 	T(MOV(bx, 0x35A));	// 1133 mov     bx, 35Ah ;~ 00D0:0832
cs=0x192;eip=0x000835; 	J(JMP(loc_10849));	// 1134 jmp     short loc_10849 ;~ 00D0:0835
ret_d0_837:
	// 4467 
cs=0x192;eip=0x000837; 	T(MOV(bx, 0x352));	// 1136 mov     bx, 352h ;~ 00D0:0837
cs=0x192;eip=0x00083a; 	J(JMP(loc_10849));	// 1137 jmp     short loc_10849 ;~ 00D0:083A
ret_d0_83c:
	// 4468 
cs=0x192;eip=0x00083c; 	T(MOV(bx, 0x345));	// 1139 mov     bx, 345h ;~ 00D0:083C
cs=0x192;eip=0x00083f; 	J(JMP(loc_10849));	// 1140 jmp     short loc_10849 ;~ 00D0:083F
ret_d0_841:
	// 4469 
cs=0x192;eip=0x000841; 	T(MOV(bx, 0x398));	// 1142 mov     bx, 398h ;~ 00D0:0841
cs=0x192;eip=0x000844; 	J(JMP(loc_10849));	// 1143 jmp     short loc_10849 ;~ 00D0:0844
ret_d0_846:
	// 4470 
cs=0x192;eip=0x000846; 	T(MOV(bx, 0x38D));	// 1145 mov     bx, 38Dh ;~ 00D0:0846
loc_10849:
	// 4471 
cs=0x192;eip=0x000849; 	T(MOV(si, 0x1D9C));	// 1149 mov     si, 1D9Ch ;~ 00D0:0849
cs=0x192;eip=0x00084c; 	T(MOV(cl, 6));	// 1150 mov     cl, 6 ;~ 00D0:084C
cs=0x192;eip=0x00084e; 	T(MOV(ch, 5));	// 1151 mov     ch, 5 ;~ 00D0:084E
cs=0x192;eip=0x000850; 	J(JMP(loc_109d1));	// 1152 jmp     loc_109D1 ;~ 00D0:0850
ret_d0_853:
	// 4472 
cs=0x192;eip=0x000853; 	T(MOV(bx, 0x2DA));	// 1154 mov     bx, 2DAh ;~ 00D0:0853
cs=0x192;eip=0x000856; 	T(MOV(si, 0x1D96));	// 1155 mov     si, 1D96h ;~ 00D0:0856
cs=0x192;eip=0x000859; 	T(MOV(cl, 3));	// 1156 mov     cl, 3 ;~ 00D0:0859
cs=0x192;eip=0x00085b; 	T(MOV(ch, 2));	// 1157 mov     ch, 2 ;~ 00D0:085B
cs=0x192;eip=0x00085d; 	J(JMP(loc_109d1));	// 1158 jmp     loc_109D1 ;~ 00D0:085D
ret_d0_860:
	// 4473 
cs=0x192;eip=0x000860; 	T(MOV(bx, 0x60E));	// 1160 mov     bx, 60Eh ;~ 00D0:0860
cs=0x192;eip=0x000863; 	J(JMP(loc_10868));	// 1161 jmp     short loc_10868 ;~ 00D0:0863
ret_d0_865:
	// 4474 
cs=0x192;eip=0x000865; 	T(MOV(bx, 0x608));	// 1163 mov     bx, 608h ;~ 00D0:0865
loc_10868:
	// 4475 
cs=0x192;eip=0x000868; 	T(MOV(si, 0x1CBA));	// 1166 mov     si, 1CBAh ;~ 00D0:0868
cs=0x192;eip=0x00086b; 	J(JMP(loc_108b7));	// 1167 jmp     short loc_108B7 ;~ 00D0:086B
ret_d0_86d:
	// 4476 
cs=0x192;eip=0x00086d; 	T(MOV(bx, 0x2EC));	// 1169 mov     bx, 2ECh ;~ 00D0:086D
cs=0x192;eip=0x000870; 	J(JMP(loc_1088e));	// 1170 jmp     short loc_1088E ;~ 00D0:0870
ret_d0_872:
	// 4477 
cs=0x192;eip=0x000872; 	T(MOV(bx, 0x35E));	// 1172 mov     bx, 35Eh ;~ 00D0:0872
cs=0x192;eip=0x000875; 	J(JMP(loc_1088e));	// 1173 jmp     short loc_1088E ;~ 00D0:0875
ret_d0_877:
	// 4478 
cs=0x192;eip=0x000877; 	T(MOV(bx, 0x352));	// 1175 mov     bx, 352h ;~ 00D0:0877
cs=0x192;eip=0x00087a; 	J(JMP(loc_1088e));	// 1176 jmp     short loc_1088E ;~ 00D0:087A
ret_d0_87c:
	// 4479 
cs=0x192;eip=0x00087c; 	T(MOV(bx, 0x346));	// 1178 mov     bx, 346h ;~ 00D0:087C
cs=0x192;eip=0x00087f; 	J(JMP(loc_1088e));	// 1179 jmp     short loc_1088E ;~ 00D0:087F
ret_d0_881:
	// 4480 
cs=0x192;eip=0x000881; 	T(MOV(bx, 0x338));	// 1181 mov     bx, 338h ;~ 00D0:0881
cs=0x192;eip=0x000884; 	J(JMP(loc_1088e));	// 1182 jmp     short loc_1088E ;~ 00D0:0884
ret_d0_886:
	// 4481 
cs=0x192;eip=0x000886; 	T(MOV(bx, 0x2F9));	// 1184 mov     bx, 2F9h ;~ 00D0:0886
cs=0x192;eip=0x000889; 	J(JMP(loc_1088e));	// 1185 jmp     short loc_1088E ;~ 00D0:0889
ret_d0_88b:
	// 4482 
cs=0x192;eip=0x00088b; 	T(MOV(bx, 0x347));	// 1187 mov     bx, 347h ;~ 00D0:088B
loc_1088e:
	// 4483 
cs=0x192;eip=0x00088e; 	T(MOV(si, 0x1CF2));	// 1191 mov     si, 1CF2h ;~ 00D0:088E
cs=0x192;eip=0x000891; 	T(MOV(cl, 5));	// 1192 mov     cl, 5 ;~ 00D0:0891
cs=0x192;eip=0x000893; 	T(MOV(ch, 8));	// 1193 mov     ch, 8 ;~ 00D0:0893
cs=0x192;eip=0x000895; 	J(JMP(loc_109d1));	// 1194 jmp     loc_109D1 ;~ 00D0:0895
ret_d0_898:
	// 4484 
cs=0x192;eip=0x000898; 	T(MOV(bx, 0x3CE));	// 1196 mov     bx, 3CEh ;~ 00D0:0898
cs=0x192;eip=0x00089b; 	J(JMP(loc_108b4));	// 1197 jmp     short loc_108B4 ;~ 00D0:089B
ret_d0_89d:
	// 4485 
cs=0x192;eip=0x00089d; 	T(MOV(bx, 0x3D2));	// 1199 mov     bx, 3D2h ;~ 00D0:089D
cs=0x192;eip=0x0008a0; 	J(JMP(loc_108b4));	// 1200 jmp     short loc_108B4 ;~ 00D0:08A0
ret_d0_8a2:
	// 4486 
cs=0x192;eip=0x0008a2; 	T(MOV(bx, 0x3D5));	// 1202 mov     bx, 3D5h ;~ 00D0:08A2
cs=0x192;eip=0x0008a5; 	J(JMP(loc_108b4));	// 1203 jmp     short loc_108B4 ;~ 00D0:08A5
ret_d0_8a7:
	// 4487 
cs=0x192;eip=0x0008a7; 	T(MOV(bx, 0x3D5));	// 1205 mov     bx, 3D5h ;~ 00D0:08A7
cs=0x192;eip=0x0008aa; 	T(MOV(si, 0x1D81));	// 1206 mov     si, 1D81h ;~ 00D0:08AA
cs=0x192;eip=0x0008ad; 	T(MOV(cl, 5));	// 1207 mov     cl, 5 ;~ 00D0:08AD
cs=0x192;eip=0x0008af; 	J(JMP(loc_108b9));	// 1208 jmp     short loc_108B9 ;~ 00D0:08AF
ret_d0_8b1:
	// 4488 
cs=0x192;eip=0x0008b1; 	T(MOV(bx, 0x3AD));	// 1210 mov     bx, 3ADh ;~ 00D0:08B1
loc_108b4:
	// 4489 
cs=0x192;eip=0x0008b4; 	T(MOV(si, 0x1D90));	// 1214 mov     si, 1D90h ;~ 00D0:08B4
loc_108b7:
	// 4490 
cs=0x192;eip=0x0008b7; 	T(MOV(cl, 2));	// 1217 mov     cl, 2 ;~ 00D0:08B7
loc_108b9:
	// 4491 
cs=0x192;eip=0x0008b9; 	T(MOV(ch, 3));	// 1220 mov     ch, 3 ;~ 00D0:08B9
cs=0x192;eip=0x0008bb; 	J(JMP(loc_109d1));	// 1221 jmp     loc_109D1 ;~ 00D0:08BB
ret_d0_8be:
	// 4492 
cs=0x192;eip=0x0008be; 	T(MOV(bx, 0x331));	// 1223 mov     bx, 331h ;~ 00D0:08BE
loc_108c1:
	// 4493 
cs=0x192;eip=0x0008c1; 	T(MOV(si, 0x1D42));	// 1227 mov     si, 1D42h ;~ 00D0:08C1
cs=0x192;eip=0x0008c4; 	T(MOV(cl, 7));	// 1228 mov     cl, 7 ;~ 00D0:08C4
cs=0x192;eip=0x0008c6; 	T(MOV(ch, 9));	// 1229 mov     ch, 9 ;~ 00D0:08C6
cs=0x192;eip=0x0008c8; 	J(JMP(loc_109d1));	// 1230 jmp     loc_109D1 ;~ 00D0:08C8
ret_d0_8cb:
	// 4494 
cs=0x192;eip=0x0008cb; 	T(MOV(bx, 0x53E));	// 1232 mov     bx, 53Eh ;~ 00D0:08CB
cs=0x192;eip=0x0008ce; 	J(JMP(loc_108d8));	// 1233 jmp     short loc_108D8 ;~ 00D0:08CE
ret_d0_8d0:
	// 4495 
cs=0x192;eip=0x0008d0; 	T(MOV(bx, 0x535));	// 1235 mov     bx, 535h ;~ 00D0:08D0
cs=0x192;eip=0x0008d3; 	J(JMP(loc_108d8));	// 1236 jmp     short loc_108D8 ;~ 00D0:08D3
ret_d0_8d5:
	// 4496 
cs=0x192;eip=0x0008d5; 	T(MOV(bx, 0x529));	// 1238 mov     bx, 529h ;~ 00D0:08D5
loc_108d8:
	// 4497 
cs=0x192;eip=0x0008d8; 	T(MOV(si, 0x1CC0));	// 1242 mov     si, 1CC0h ;~ 00D0:08D8
cs=0x192;eip=0x0008db; 	T(MOV(cl, 5));	// 1243 mov     cl, 5 ;~ 00D0:08DB
cs=0x192;eip=0x0008dd; 	T(MOV(ch, 0x0A));	// 1244 mov     ch, 0Ah ;~ 00D0:08DD
cs=0x192;eip=0x0008df; 	J(JMP(loc_109d1));	// 1245 jmp     loc_109D1 ;~ 00D0:08DF
ret_d0_8e2:
	// 4498 
cs=0x192;eip=0x0008e2; 	T(MOV(bx, 0x326));	// 1247 mov     bx, 326h ;~ 00D0:08E2
cs=0x192;eip=0x0008e5; 	J(JMP(loc_108c1));	// 1248 jmp     short loc_108C1 ;~ 00D0:08E5
ret_d0_8e7:
	// 4499 
cs=0x192;eip=0x0008e7; 	T(MOV(bx, 0x33B));	// 1250 mov     bx, 33Bh ;~ 00D0:08E7
cs=0x192;eip=0x0008ea; 	J(JMP(loc_108c1));	// 1251 jmp     short loc_108C1 ;~ 00D0:08EA
ret_d0_8ec:
	// 4500 
cs=0x192;eip=0x0008ec; 	T(MOV(bx, 0x1BD6));	// 1253 mov     bx, 1BD6h ;~ 00D0:08EC
cs=0x192;eip=0x0008ef; 	T(MOV(al, 0x5C));	// 1254 mov     al, 5Ch ; '\' ;~ 00D0:08EF
cs=0x192;eip=0x0008f1; 	T(SUB(al, *(raddr(ds,bx))));	// 1255 sub     al, [bx] ;~ 00D0:08F1
cs=0x192;eip=0x0008f3; 	X(MOV(byte_14cde, al));	// 1256 mov     byte_14CDE, al ;~ 00D0:08F3
cs=0x192;eip=0x0008f6; 	T(MOV(cx, 9));	// 1257 mov     cx, 9 ;~ 00D0:08F6
cs=0x192;eip=0x0008f9; 	T(MOV(si, 0x1E77));	// 1258 mov     si, 1E77h ;~ 00D0:08F9
cs=0x192;eip=0x0008fc; 	T(MOV(bx, 0x575));	// 1259 mov     bx, 575h ;~ 00D0:08FC
cs=0x192;eip=0x0008ff; 	J(CALL(sub_10bf7,0));	// 1260 call    sub_10BF7 ;~ 00D0:08FF
cs=0x192;eip=0x000902; 	X(POP(bx));	// 1261 pop     bx ;~ 00D0:0902
cs=0x192;eip=0x000903; 	T(DEC(bx));	// 1262 dec     bx ;~ 00D0:0903
cs=0x192;eip=0x000904; 	X(PUSH(bx));	// 1263 push    bx ;~ 00D0:0904
cs=0x192;eip=0x000905; 	T(MOV(bx, word_16b98));	// 1264 mov     bx, word_16B98 ;~ 00D0:0905
cs=0x192;eip=0x000909; __disp=bx;
	J(JMP(__dispatch_call));	// 1265 jmp     bx ;~ 00D0:0909
ret_d0_90b:
	// 4501 
cs=0x192;eip=0x00090b; 	T(MOV(si, 0x1E80));	// 1267 mov     si, 1E80h ;~ 00D0:090B
cs=0x192;eip=0x00090e; 	T(MOV(cl, 5));	// 1268 mov     cl, 5 ;~ 00D0:090E
cs=0x192;eip=0x000910; 	T(MOV(ch, 4));	// 1269 mov     ch, 4 ;~ 00D0:0910
cs=0x192;eip=0x000912; 	T(MOV(bx, 0x537));	// 1270 mov     bx, 537h ;~ 00D0:0912
cs=0x192;eip=0x000915; 	J(JMP(loc_109d1));	// 1271 jmp     loc_109D1 ;~ 00D0:0915
ret_d0_918:
	// 4502 
cs=0x192;eip=0x000918; 	T(MOV(si, 0x1E94));	// 1273 mov     si, 1E94h ;~ 00D0:0918
cs=0x192;eip=0x00091b; 	T(MOV(cl, 2));	// 1274 mov     cl, 2 ;~ 00D0:091B
cs=0x192;eip=0x00091d; 	T(MOV(ch, 3));	// 1275 mov     ch, 3 ;~ 00D0:091D
cs=0x192;eip=0x00091f; 	T(MOV(bx, 0x370));	// 1276 mov     bx, 370h ;~ 00D0:091F
cs=0x192;eip=0x000922; 	J(JMP(loc_109d1));	// 1277 jmp     loc_109D1 ;~ 00D0:0922
ret_d0_925:
	// 4503 
cs=0x192;eip=0x000925; 	T(MOV(si, 0x1E9A));	// 1279 mov     si, 1E9Ah ;~ 00D0:0925
cs=0x192;eip=0x000928; 	T(MOV(cl, 2));	// 1280 mov     cl, 2 ;~ 00D0:0928
cs=0x192;eip=0x00092a; 	T(MOV(ch, 3));	// 1281 mov     ch, 3 ;~ 00D0:092A
cs=0x192;eip=0x00092c; 	T(MOV(bx, 0x379));	// 1282 mov     bx, 379h ;~ 00D0:092C
cs=0x192;eip=0x00092f; 	J(JMP(loc_109d1));	// 1283 jmp     loc_109D1 ;~ 00D0:092F
ret_d0_932:
	// 4504 
cs=0x192;eip=0x000932; 	T(MOV(si, 0x1EA0));	// 1285 mov     si, 1EA0h ;~ 00D0:0932
cs=0x192;eip=0x000935; 	T(MOV(cl, 3));	// 1286 mov     cl, 3 ;~ 00D0:0935
cs=0x192;eip=0x000937; 	T(MOV(ch, 3));	// 1287 mov     ch, 3 ;~ 00D0:0937
cs=0x192;eip=0x000939; 	T(MOV(bx, 0x3D1));	// 1288 mov     bx, 3D1h ;~ 00D0:0939
cs=0x192;eip=0x00093c; 	J(JMP(loc_109d1));	// 1289 jmp     loc_109D1 ;~ 00D0:093C
ret_d0_93f:
	// 4505 
cs=0x192;eip=0x00093f; 	T(MOV(si, 0x1EA9));	// 1291 mov     si, 1EA9h ;~ 00D0:093F
cs=0x192;eip=0x000942; 	T(MOV(cl, 3));	// 1292 mov     cl, 3 ;~ 00D0:0942
cs=0x192;eip=0x000944; 	T(MOV(ch, 3));	// 1293 mov     ch, 3 ;~ 00D0:0944
cs=0x192;eip=0x000946; 	T(MOV(bx, 0x3D7));	// 1294 mov     bx, 3D7h ;~ 00D0:0946
cs=0x192;eip=0x000949; 	J(JMP(loc_109d1));	// 1295 jmp     loc_109D1 ;~ 00D0:0949
ret_d0_94c:
	// 4506 
cs=0x192;eip=0x00094c; 	T(MOV(si, 0x3B40));	// 1297 mov     si, 3B40h ;~ 00D0:094C
cs=0x192;eip=0x00094f; 	T(MOV(cl, 3));	// 1298 mov     cl, 3 ;~ 00D0:094F
cs=0x192;eip=0x000951; 	T(MOV(ch, 4));	// 1299 mov     ch, 4 ;~ 00D0:0951
cs=0x192;eip=0x000953; 	T(MOV(bx, 0x2D4));	// 1300 mov     bx, 2D4h ;~ 00D0:0953
cs=0x192;eip=0x000956; 	J(JMP(loc_109d1));	// 1301 jmp     short loc_109D1 ;~ 00D0:0956
ret_d0_959:
	// 4507 
cs=0x192;eip=0x000959; 	T(MOV(si, 0x1EC1));	// 1305 mov     si, 1EC1h ;~ 00D0:0959
cs=0x192;eip=0x00095c; 	T(MOV(dl, 3));	// 1306 mov     dl, 3 ;~ 00D0:095C
cs=0x192;eip=0x00095e; 	T(MOV(ch, 2));	// 1307 mov     ch, 2 ;~ 00D0:095E
cs=0x192;eip=0x000960; 	J(JMP(loc_10984));	// 1308 jmp     short loc_10984 ;~ 00D0:0960
ret_d0_962:
	// 4508 
cs=0x192;eip=0x000962; 	T(MOV(si, 0x1EB2));	// 1310 mov     si, 1EB2h ;~ 00D0:0962
cs=0x192;eip=0x000965; 	T(MOV(dl, 5));	// 1311 mov     dl, 5 ;~ 00D0:0965
cs=0x192;eip=0x000967; 	T(MOV(ch, 3));	// 1312 mov     ch, 3 ;~ 00D0:0967
cs=0x192;eip=0x000969; 	J(JMP(loc_10984));	// 1313 jmp     short loc_10984 ;~ 00D0:0969
ret_d0_96b:
	// 4509 
cs=0x192;eip=0x00096b; 	T(MOV(si, 0x1EC7));	// 1315 mov     si, 1EC7h ;~ 00D0:096B
cs=0x192;eip=0x00096e; 	T(MOV(dl, 2));	// 1316 mov     dl, 2 ;~ 00D0:096E
cs=0x192;eip=0x000970; 	T(MOV(ch, 6));	// 1317 mov     ch, 6 ;~ 00D0:0970
cs=0x192;eip=0x000972; 	J(JMP(loc_10984));	// 1318 jmp     short loc_10984 ;~ 00D0:0972
ret_d0_974:
	// 4510 
cs=0x192;eip=0x000974; 	T(MOV(si, 0x1ED3));	// 1320 mov     si, 1ED3h ;~ 00D0:0974
cs=0x192;eip=0x000977; 	T(MOV(dl, 2));	// 1321 mov     dl, 2 ;~ 00D0:0977
cs=0x192;eip=0x000979; 	T(MOV(ch, 6));	// 1322 mov     ch, 6 ;~ 00D0:0979
cs=0x192;eip=0x00097b; 	J(JMP(loc_10984));	// 1323 jmp     short loc_10984 ;~ 00D0:097B
ret_d0_97d:
	// 4511 
cs=0x192;eip=0x00097d; 	T(MOV(si, 0x3B34));	// 1325 mov     si, 3B34h ;~ 00D0:097D
cs=0x192;eip=0x000980; 	T(MOV(dl, 6));	// 1326 mov     dl, 6 ;~ 00D0:0980
cs=0x192;eip=0x000982; 	T(MOV(ch, 1));	// 1327 mov     ch, 1 ;~ 00D0:0982
loc_10984:
	// 4512 
cs=0x192;eip=0x000984; 	X(POP(bx));	// 1331 pop     bx ;~ 00D0:0984
cs=0x192;eip=0x000985; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 1332 mov     ax, [bx] ;~ 00D0:0985
cs=0x192;eip=0x000987; 	T(INC(bx));	// 1333 inc     bx ;~ 00D0:0987
cs=0x192;eip=0x000988; 	X(PUSH(bx));	// 1334 push    bx ;~ 00D0:0988
cs=0x192;eip=0x000989; 	T(MOV(bx, ax));	// 1335 mov     bx, ax ;~ 00D0:0989
loc_1098b:
	// 4513 
cs=0x192;eip=0x00098b; 	X(PUSH(dx));	// 1338 push    dx ;~ 00D0:098B
cs=0x192;eip=0x00098c; 	X(PUSH(bx));	// 1339 push    bx ;~ 00D0:098C
loc_1098d:
	// 4514 
cs=0x192;eip=0x00098d; 	T(LODSB);	// 1342 lodsb ;~ 00D0:098D
cs=0x192;eip=0x00098e; 	X(MOV(*(raddr(ds,bx)), al));	// 1343 mov     [bx], al ;~ 00D0:098E
cs=0x192;eip=0x000990; 	T(INC(bx));	// 1344 inc     bx ;~ 00D0:0990
cs=0x192;eip=0x000991; 	T(DEC(dl));	// 1345 dec     dl ;~ 00D0:0991
cs=0x192;eip=0x000993; 	J(JNZ(loc_1098d));	// 1346 jnz     short loc_1098D ;~ 00D0:0993
cs=0x192;eip=0x000995; 	X(POP(bx));	// 1347 pop     bx ;~ 00D0:0995
cs=0x192;eip=0x000996; 	T(ADD(bx, 0x20));	// 1348 add     bx, 20h ; ' ' ;~ 00D0:0996
cs=0x192;eip=0x000999; 	X(POP(dx));	// 1349 pop     dx ;~ 00D0:0999
cs=0x192;eip=0x00099a; 	T(DEC(ch));	// 1350 dec     ch ;~ 00D0:099A
cs=0x192;eip=0x00099c; 	J(JNZ(loc_1098b));	// 1351 jnz     short loc_1098B ;~ 00D0:099C
cs=0x192;eip=0x00099e; 	T(MOV(bx, word_16b98));	// 1352 mov     bx, word_16B98 ;~ 00D0:099E
cs=0x192;eip=0x0009a2; __disp=bx;
	J(JMP(__dispatch_call));	// 1353 jmp     bx ;~ 00D0:09A2
ret_d0_9a4:
	// 4515 
cs=0x192;eip=0x0009a4; 	T(MOV(si, 0x1EE8));	// 1355 mov     si, 1EE8h ;~ 00D0:09A4
cs=0x192;eip=0x0009a7; 	T(MOV(cl, 2));	// 1356 mov     cl, 2 ;~ 00D0:09A7
cs=0x192;eip=0x0009a9; 	T(MOV(ch, 2));	// 1357 mov     ch, 2 ;~ 00D0:09A9
cs=0x192;eip=0x0009ab; 	T(MOV(bx, 0x695));	// 1358 mov     bx, 695h ;~ 00D0:09AB
cs=0x192;eip=0x0009ae; 	J(JMP(loc_109d1));	// 1359 jmp     short loc_109D1 ;~ 00D0:09AE
ret_d0_9b0:
	// 4516 
cs=0x192;eip=0x0009b0; 	X(MOV(byte_14a3c, 0));	// 1361 mov     byte_14A3C, 0 ;~ 00D0:09B0
cs=0x192;eip=0x0009b5; 	T(MOV(si, 0x1EDF));	// 1362 mov     si, 1EDFh ;~ 00D0:09B5
cs=0x192;eip=0x0009b8; 	T(MOV(cl, 3));	// 1363 mov     cl, 3 ;~ 00D0:09B8
cs=0x192;eip=0x0009ba; 	T(MOV(ch, 3));	// 1364 mov     ch, 3 ;~ 00D0:09BA
cs=0x192;eip=0x0009bc; 	T(MOV(bx, 0x618));	// 1365 mov     bx, 618h ;~ 00D0:09BC
cs=0x192;eip=0x0009bf; 	J(JMP(loc_109d1));	// 1366 jmp     short loc_109D1 ;~ 00D0:09BF
ret_d0_9c1:
	// 4517 
cs=0x192;eip=0x0009c1; 	T(MOV(bx, 0x29D));	// 1368 mov     bx, 29Dh ;~ 00D0:09C1
cs=0x192;eip=0x0009c4; 	T(MOV(al, *(raddr(ds,bx))));	// 1369 mov     al, [bx] ;~ 00D0:09C4
cs=0x192;eip=0x0009c6; 	T(DEC(al));	// 1370 dec     al ;~ 00D0:09C6
cs=0x192;eip=0x0009c8; 	J(JNZ(loc_109e4));	// 1371 jnz     short loc_109E4 ;~ 00D0:09C8
cs=0x192;eip=0x0009ca; 	T(MOV(si, 0x1EEC));	// 1372 mov     si, 1EECh ;~ 00D0:09CA
cs=0x192;eip=0x0009cd; 	T(MOV(cl, 2));	// 1373 mov     cl, 2 ;~ 00D0:09CD
cs=0x192;eip=0x0009cf; 	T(MOV(ch, 2));	// 1374 mov     ch, 2 ;~ 00D0:09CF
loc_109d1:
	// 4518 
cs=0x192;eip=0x0009d1; 	X(PUSH(cx));	// 1378 push    cx ;~ 00D0:09D1
cs=0x192;eip=0x0009d2; 	X(PUSH(bx));	// 1379 push    bx ;~ 00D0:09D2
cs=0x192;eip=0x0009d3; 	T(MOV(ch, 0));	// 1380 mov     ch, 0 ;~ 00D0:09D3
loc_109d5:
	// 4519 
cs=0x192;eip=0x0009d5; 	T(LODSB);	// 1383 lodsb ;~ 00D0:09D5
cs=0x192;eip=0x0009d6; 	X(MOV(*(raddr(ds,bx)), al));	// 1384 mov     [bx], al ;~ 00D0:09D6
cs=0x192;eip=0x0009d8; 	T(INC(bx));	// 1385 inc     bx ;~ 00D0:09D8
cs=0x192;eip=0x0009d9; 	J(LOOP(loc_109d5));	// 1386 loop    loc_109D5 ;~ 00D0:09D9
cs=0x192;eip=0x0009db; 	X(POP(bx));	// 1387 pop     bx ;~ 00D0:09DB
cs=0x192;eip=0x0009dc; 	T(ADD(bx, 0x20));	// 1388 add     bx, 20h ; ' ' ;~ 00D0:09DC
cs=0x192;eip=0x0009df; 	X(POP(cx));	// 1389 pop     cx ;~ 00D0:09DF
cs=0x192;eip=0x0009e0; 	T(DEC(ch));	// 1390 dec     ch ;~ 00D0:09E0
cs=0x192;eip=0x0009e2; 	J(JNZ(loc_109d1));	// 1391 jnz     short loc_109D1 ;~ 00D0:09E2
loc_109e4:
	// 4520 
cs=0x192;eip=0x0009e4; 	X(POP(bx));	// 1395 pop     bx ;~ 00D0:09E4
cs=0x192;eip=0x0009e5; 	T(DEC(bx));	// 1396 dec     bx ;~ 00D0:09E5
cs=0x192;eip=0x0009e6; 	X(PUSH(bx));	// 1397 push    bx ;~ 00D0:09E6
cs=0x192;eip=0x0009e7; 	T(MOV(bx, word_16b98));	// 1398 mov     bx, word_16B98 ;~ 00D0:09E7
cs=0x192;eip=0x0009eb; __disp=bx;
	J(JMP(__dispatch_call));	// 1399 jmp     bx ;~ 00D0:09EB
ret_d0_9ed:
	// 4521 
cs=0x192;eip=0x0009ed; 	T(MOV(si, 0x1D1A));	// 1401 mov     si, 1D1Ah ;~ 00D0:09ED
cs=0x192;eip=0x0009f0; 	T(MOV(cl, 5));	// 1402 mov     cl, 5 ;~ 00D0:09F0
cs=0x192;eip=0x0009f2; 	T(MOV(ch, 8));	// 1403 mov     ch, 8 ;~ 00D0:09F2
cs=0x192;eip=0x0009f4; 	T(MOV(bx, 0x358));	// 1404 mov     bx, 358h ;~ 00D0:09F4
cs=0x192;eip=0x0009f7; 	J(JMP(loc_109d1));	// 1405 jmp     short loc_109D1 ;~ 00D0:09F7
ret_d0_9f9:
	// 4522 
cs=0x192;eip=0x0009f9; 	T(MOV(bx, 0x5CB));	// 1407 mov     bx, 5CBh ;~ 00D0:09F9
cs=0x192;eip=0x0009fc; 	J(JMP(loc_10a3f));	// 1408 jmp     short loc_10A3F ;~ 00D0:09FC
ret_d0_9fe:
	// 4523 
cs=0x192;eip=0x0009fe; 	T(MOV(bx, 0x60E));	// 1410 mov     bx, 60Eh ;~ 00D0:09FE
cs=0x192;eip=0x000a01; 	J(JMP(loc_10a33));	// 1411 jmp     short loc_10A33 ;~ 00D0:0A01
ret_d0_a03:
	// 4524 
cs=0x192;eip=0x000a03; 	T(MOV(bx, 0x4AB));	// 1413 mov     bx, 4ABh ;~ 00D0:0A03
cs=0x192;eip=0x000a06; 	J(JMP(loc_10a1f));	// 1414 jmp     short loc_10A1F ;~ 00D0:0A06
ret_d0_a08:
	// 4525 
cs=0x192;eip=0x000a08; 	T(MOV(bx, 0x5A5));	// 1416 mov     bx, 5A5h ;~ 00D0:0A08
cs=0x192;eip=0x000a0b; 	J(JMP(loc_10a3f));	// 1417 jmp     short loc_10A3F ;~ 00D0:0A0B
ret_d0_a0d:
	// 4526 
cs=0x192;eip=0x000a0d; 	T(MOV(bx, 0x4A5));	// 1419 mov     bx, 4A5h ;~ 00D0:0A0D
cs=0x192;eip=0x000a10; 	J(JMP(loc_10a1f));	// 1420 jmp     short loc_10A1F ;~ 00D0:0A10
ret_d0_a12:
	// 4527 
cs=0x192;eip=0x000a12; 	T(MOV(bx, 0x593));	// 1422 mov     bx, 593h ;~ 00D0:0A12
cs=0x192;eip=0x000a15; 	J(JMP(loc_10a3f));	// 1423 jmp     short loc_10A3F ;~ 00D0:0A15
ret_d0_a17:
	// 4528 
cs=0x192;eip=0x000a17; 	T(MOV(bx, 0x585));	// 1425 mov     bx, 585h ;~ 00D0:0A17
cs=0x192;eip=0x000a1a; 	J(JMP(loc_10a3f));	// 1426 jmp     short loc_10A3F ;~ 00D0:0A1A
ret_d0_a1c:
	// 4529 
cs=0x192;eip=0x000a1c; 	T(MOV(bx, 0x597));	// 1428 mov     bx, 597h ;~ 00D0:0A1C
loc_10a1f:
	// 4530 
cs=0x192;eip=0x000a1f; 	T(MOV(cl, 0x0A));	// 1432 mov     cl, 0Ah ;~ 00D0:0A1F
cs=0x192;eip=0x000a21; 	T(MOV(si, 0x1FF8));	// 1433 mov     si, 1FF8h ;~ 00D0:0A21
cs=0x192;eip=0x000a24; 	J(JMP(loc_10a44));	// 1434 jmp     short loc_10A44 ;~ 00D0:0A24
ret_d0_a26:
	// 4531 
cs=0x192;eip=0x000a26; 	T(MOV(bx, 0x596));	// 1436 mov     bx, 596h ;~ 00D0:0A26
cs=0x192;eip=0x000a29; 	J(JMP(loc_10a3f));	// 1437 jmp     short loc_10A3F ;~ 00D0:0A29
ret_d0_a2b:
	// 4532 
cs=0x192;eip=0x000a2b; 	T(MOV(bx, 0x587));	// 1439 mov     bx, 587h ;~ 00D0:0A2B
cs=0x192;eip=0x000a2e; 	J(JMP(loc_10a3f));	// 1440 jmp     short loc_10A3F ;~ 00D0:0A2E
ret_d0_a30:
	// 4533 
cs=0x192;eip=0x000a30; 	T(MOV(bx, 0x5ED));	// 1442 mov     bx, 5EDh ;~ 00D0:0A30
loc_10a33:
	// 4534 
cs=0x192;eip=0x000a33; 	T(MOV(cl, 8));	// 1445 mov     cl, 8 ;~ 00D0:0A33
cs=0x192;eip=0x000a35; 	T(MOV(si, 0x1EF0));	// 1446 mov     si, 1EF0h ;~ 00D0:0A35
cs=0x192;eip=0x000a38; 	T(MOV(ch, 4));	// 1447 mov     ch, 4 ;~ 00D0:0A38
cs=0x192;eip=0x000a3a; 	J(JMP(loc_109d1));	// 1448 jmp     short loc_109D1 ;~ 00D0:0A3A
ret_d0_a3c:
	// 4535 
cs=0x192;eip=0x000a3c; 	T(MOV(bx, 0x5AE));	// 1450 mov     bx, 5AEh ;~ 00D0:0A3C
loc_10a3f:
	// 4536 
cs=0x192;eip=0x000a3f; 	T(MOV(cl, 0x0B));	// 1454 mov     cl, 0Bh ;~ 00D0:0A3F
cs=0x192;eip=0x000a41; 	T(MOV(si, 0x1FAB));	// 1455 mov     si, 1FABh ;~ 00D0:0A41
loc_10a44:
	// 4537 
cs=0x192;eip=0x000a44; 	T(MOV(ch, 7));	// 1458 mov     ch, 7 ;~ 00D0:0A44
cs=0x192;eip=0x000a46; 	J(JMP(loc_109d1));	// 1459 jmp     short loc_109D1 ;~ 00D0:0A46
ret_d0_a48:
	// 4538 
cs=0x192;eip=0x000a48; 	T(MOV(si, 0x1F93));	// 1461 mov     si, 1F93h ;~ 00D0:0A48
cs=0x192;eip=0x000a4b; 	T(MOV(cl, 6));	// 1462 mov     cl, 6 ;~ 00D0:0A4B
cs=0x192;eip=0x000a4d; 	T(MOV(ch, 4));	// 1463 mov     ch, 4 ;~ 00D0:0A4D
cs=0x192;eip=0x000a4f; 	T(MOV(bx, 0x61C));	// 1464 mov     bx, 61Ch ;~ 00D0:0A4F
cs=0x192;eip=0x000a52; 	J(JMP(loc_109d1));	// 1465 jmp     loc_109D1 ;~ 00D0:0A52
ret_d0_a55:
	// 4539 
cs=0x192;eip=0x000a55; 	T(MOV(al, byte_14a28));	// 1467 mov     al, byte_14A28 ;~ 00D0:0A55
cs=0x192;eip=0x000a58; 	T(INC(al));	// 1468 inc     al ;~ 00D0:0A58
cs=0x192;eip=0x000a5a; 	J(JNZ(loc_10a75));	// 1469 jnz     short loc_10A75 ;~ 00D0:0A5A
cs=0x192;eip=0x000a5c; 	T(MOV(si, 0x1F25));	// 1470 mov     si, 1F25h ;~ 00D0:0A5C
cs=0x192;eip=0x000a5f; 	T(MOV(cl, 0x0B));	// 1471 mov     cl, 0Bh ;~ 00D0:0A5F
cs=0x192;eip=0x000a61; 	T(MOV(ch, 5));	// 1472 mov     ch, 5 ;~ 00D0:0A61
cs=0x192;eip=0x000a63; 	T(MOV(bx, 0x5D0));	// 1473 mov     bx, 5D0h ;~ 00D0:0A63
cs=0x192;eip=0x000a66; 	J(JMP(loc_109d1));	// 1474 jmp     loc_109D1 ;~ 00D0:0A66
ret_d0_a69:
	// 4540 
cs=0x192;eip=0x000a69; 	T(MOV(al, byte_14a28));	// 1476 mov     al, byte_14A28 ;~ 00D0:0A69
cs=0x192;eip=0x000a6c; 	T(CMP(al, 0x0FE));	// 1477 cmp     al, 0FEh ; 'þ' ;~ 00D0:0A6C
cs=0x192;eip=0x000a6e; 	J(JNZ(loc_10a75));	// 1478 jnz     short loc_10A75 ;~ 00D0:0A6E
cs=0x192;eip=0x000a70; 	X(MOV(byte_14a28, 0x10));	// 1479 mov     byte_14A28, 10h ;~ 00D0:0A70
loc_10a75:
	// 4541 
cs=0x192;eip=0x000a75; 	J(JMP(loc_109e4));	// 1483 jmp     loc_109E4 ;~ 00D0:0A75
ret_d0_a78:
	// 4542 
cs=0x192;eip=0x000a78; 	T(MOV(bx, 0x5E8));	// 1485 mov     bx, 5E8h ;~ 00D0:0A78
loc_10a7b:
	// 4543 
cs=0x192;eip=0x000a7b; 	T(MOV(si, 0x1F10));	// 1488 mov     si, 1F10h ;~ 00D0:0A7B
cs=0x192;eip=0x000a7e; 	T(MOV(cl, 4));	// 1489 mov     cl, 4 ;~ 00D0:0A7E
cs=0x192;eip=0x000a80; 	T(MOV(ch, 4));	// 1490 mov     ch, 4 ;~ 00D0:0A80
cs=0x192;eip=0x000a82; 	J(JMP(loc_109d1));	// 1491 jmp     loc_109D1 ;~ 00D0:0A82
ret_d0_a85:
	// 4544 
cs=0x192;eip=0x000a85; 	T(MOV(bx, 0x427));	// 1493 mov     bx, 427h ;~ 00D0:0A85
loc_10a88:
	// 4545 
cs=0x192;eip=0x000a88; 	T(MOV(si, 0x1F20));	// 1496 mov     si, 1F20h ;~ 00D0:0A88
cs=0x192;eip=0x000a8b; 	T(MOV(cl, 5));	// 1497 mov     cl, 5 ;~ 00D0:0A8B
cs=0x192;eip=0x000a8d; 	T(MOV(ch, 1));	// 1498 mov     ch, 1 ;~ 00D0:0A8D
cs=0x192;eip=0x000a8f; 	J(JMP(loc_109d1));	// 1499 jmp     loc_109D1 ;~ 00D0:0A8F
ret_d0_a92:
	// 4546 
cs=0x192;eip=0x000a92; 	T(MOV(bx, 0x414));	// 1501 mov     bx, 414h ;~ 00D0:0A92
cs=0x192;eip=0x000a95; 	J(JMP(loc_10a88));	// 1502 jmp     short loc_10A88 ;~ 00D0:0A95
ret_d0_a97:
	// 4547 
cs=0x192;eip=0x000a97; 	T(MOV(bx, 0x5D5));	// 1504 mov     bx, 5D5h ;~ 00D0:0A97
cs=0x192;eip=0x000a9a; 	J(JMP(loc_10a7b));	// 1505 jmp     short loc_10A7B ;~ 00D0:0A9A
ret_d0_a9c:
	// 4548 
cs=0x192;eip=0x000a9c; 	X(MOV(byte_14a38, 0x5A));	// 1507 mov     byte_14A38, 5Ah ; 'Z' ;~ 00D0:0A9C
cs=0x192;eip=0x000aa1; 	J(JMP(loc_109e4));	// 1508 jmp     loc_109E4 ;~ 00D0:0AA1
ret_d0_aa4:
	// 4549 
cs=0x192;eip=0x000aa4; 	T(MOV(al, 1));	// 1510 mov     al, 1 ;~ 00D0:0AA4
cs=0x192;eip=0x000aa6; 	J(JMP(loc_10aae));	// 1511 jmp     short loc_10AAE ;~ 00D0:0AA6
ret_d0_aa8:
	// 4550 
cs=0x192;eip=0x000aa8; 	T(MOV(al, 2));	// 1513 mov     al, 2 ;~ 00D0:0AA8
cs=0x192;eip=0x000aaa; 	J(JMP(loc_10aae));	// 1514 jmp     short loc_10AAE ;~ 00D0:0AAA
ret_d0_aac:
	// 4551 
cs=0x192;eip=0x000aac; 	T(MOV(al, 3));	// 1516 mov     al, 3 ;~ 00D0:0AAC
loc_10aae:
	// 4552 
cs=0x192;eip=0x000aae; 	X(MOV(byte_16b9c, al));	// 1520 mov     byte_16B9C, al ;~ 00D0:0AAE
cs=0x192;eip=0x000ab1; 	J(JMP(loc_10ab8));	// 1521 jmp     short loc_10AB8 ;~ 00D0:0AB1
ret_d0_ab3:
	// 4553 
cs=0x192;eip=0x000ab3; 	T(XOR(al, al));	// 1523 xor     al, al ;~ 00D0:0AB3
loc_10ab5:
	// 4554 
cs=0x192;eip=0x000ab5; 	X(MOV(byte_14a3a, al));	// 1526 mov     byte_14A3A, al ;~ 00D0:0AB5
loc_10ab8:
	// 4555 
cs=0x192;eip=0x000ab8; 	J(JMP(loc_109e4));	// 1529 jmp     loc_109E4 ;~ 00D0:0AB8
ret_d0_abb:
	// 4556 
cs=0x192;eip=0x000abb; 	T(MOV(al, 0x77));	// 1531 mov     al, 77h ; 'w' ;~ 00D0:0ABB
cs=0x192;eip=0x000abd; 	J(JMP(loc_10ab5));	// 1532 jmp     short loc_10AB5 ;~ 00D0:0ABD
ret_d0_abf:
	// 4557 
cs=0x192;eip=0x000abf; 	X(POP(bx));	// 1534 pop     bx ;~ 00D0:0ABF
cs=0x192;eip=0x000ac0; 	T(MOV(al, *(raddr(ds,bx))));	// 1535 mov     al, [bx] ;~ 00D0:0AC0
cs=0x192;eip=0x000ac2; 	X(PUSH(bx));	// 1536 push    bx ;~ 00D0:0AC2
cs=0x192;eip=0x000ac3; 	T(MOV(ah, al));	// 1537 mov     ah, al ;~ 00D0:0AC3
cs=0x192;eip=0x000ac5; 	T(MOV(di, 0x244));	// 1538 mov     di, 244h ;~ 00D0:0AC5
cs=0x192;eip=0x000ac8; 	T(MOV(cx, 0x120));	// 1539 mov     cx, 120h ;~ 00D0:0AC8
	// 1540 rep stosw ;~ 00D0:0ACB
cs=0x192;eip=0x000acb; 	X(	REP STOSW);	// 1540 rep stosw ;~ 00D0:0ACB
loc_10acd:
	// 4558 
cs=0x192;eip=0x000acd; 	T(MOV(bx, word_16b98));	// 1544 mov     bx, word_16B98 ;~ 00D0:0ACD
cs=0x192;eip=0x000ad1; __disp=bx;
	J(JMP(__dispatch_call));	// 1545 jmp     bx ;~ 00D0:0AD1
ret_d0_ad3:
	// 4559 
cs=0x192;eip=0x000ad3; 	X(POP(bx));	// 1547 pop     bx ;~ 00D0:0AD3
cs=0x192;eip=0x000ad4; 	T(MOV(al, *(raddr(ds,bx))));	// 1548 mov     al, [bx] ;~ 00D0:0AD4
cs=0x192;eip=0x000ad6; 	T(INC(bx));	// 1549 inc     bx ;~ 00D0:0AD6
cs=0x192;eip=0x000ad7; 	T(MOV(di, *(dw*)(raddr(ds,bx))));	// 1550 mov     di, [bx] ;~ 00D0:0AD7
cs=0x192;eip=0x000ad9; 	T(INC(bx));	// 1551 inc     bx ;~ 00D0:0AD9
cs=0x192;eip=0x000ada; 	X(PUSH(bx));	// 1552 push    bx ;~ 00D0:0ADA
cs=0x192;eip=0x000adb; 	X(MOV(*(raddr(ds,di)), al));	// 1553 mov     [di], al ;~ 00D0:0ADB
cs=0x192;eip=0x000add; 	J(JMP(loc_10acd));	// 1554 jmp     short loc_10ACD ;~ 00D0:0ADD
ret_d0_adf:
	// 4560 
cs=0x192;eip=0x000adf; 	T(MOV(al, 0x0CA));	// 1556 mov     al, 0CAh ; 'Ê' ;~ 00D0:0ADF
cs=0x192;eip=0x000ae1; 	X(POP(bx));	// 1557 pop     bx ;~ 00D0:0AE1
cs=0x192;eip=0x000ae2; 	T(MOV(di, *(dw*)(raddr(ds,bx))));	// 1558 mov     di, [bx] ;~ 00D0:0AE2
cs=0x192;eip=0x000ae4; 	T(INC(bx));	// 1559 inc     bx ;~ 00D0:0AE4
cs=0x192;eip=0x000ae5; 	X(PUSH(bx));	// 1560 push    bx ;~ 00D0:0AE5
cs=0x192;eip=0x000ae6; 	X(MOV(*(raddr(ds,di)), al));	// 1561 mov     [di], al ;~ 00D0:0AE6
cs=0x192;eip=0x000ae8; 	T(INC(di));	// 1562 inc     di ;~ 00D0:0AE8
cs=0x192;eip=0x000ae9; 	T(INC(al));	// 1563 inc     al ;~ 00D0:0AE9
cs=0x192;eip=0x000aeb; 	X(MOV(*(raddr(ds,di)), al));	// 1564 mov     [di], al ;~ 00D0:0AEB
cs=0x192;eip=0x000aed; 	J(JMP(loc_10acd));	// 1565 jmp     short loc_10ACD ;~ 00D0:0AED
ret_d0_aef:
	// 4561 
cs=0x192;eip=0x000aef; 	T(MOV(dx, 1));	// 1567 mov     dx, 1 ;~ 00D0:0AEF
cs=0x192;eip=0x000af2; 	J(JMP(loc_10b06));	// 1568 jmp     short loc_10B06 ;~ 00D0:0AF2
ret_d0_af4:
	// 4562 
cs=0x192;eip=0x000af4; 	X(POP(bx));	// 1570 pop     bx ;~ 00D0:0AF4
cs=0x192;eip=0x000af5; 	T(MOV(bx, 0x207D));	// 1571 mov     bx, 207Dh ;~ 00D0:0AF5
cs=0x192;eip=0x000af8; 	X(PUSH(bx));	// 1572 push    bx ;~ 00D0:0AF8
cs=0x192;eip=0x000af9; 	T(MOV(dx, 0x21));	// 1573 mov     dx, 21h ; '!' ;~ 00D0:0AF9
cs=0x192;eip=0x000afc; 	J(JMP(loc_10b06));	// 1574 jmp     short loc_10B06 ;~ 00D0:0AFC
ret_d0_afe:
	// 4563 
cs=0x192;eip=0x000afe; 	T(MOV(dx, 0x1F));	// 1576 mov     dx, 1Fh ;~ 00D0:0AFE
cs=0x192;eip=0x000b01; 	J(JMP(loc_10b06));	// 1577 jmp     short loc_10B06 ;~ 00D0:0B01
ret_d0_b03:
	// 4564 
cs=0x192;eip=0x000b03; 	T(MOV(dx, 0x20));	// 1579 mov     dx, 20h ; ' ' ;~ 00D0:0B03
loc_10b06:
	// 4565 
cs=0x192;eip=0x000b06; 	X(POP(bx));	// 1583 pop     bx ;~ 00D0:0B06
cs=0x192;eip=0x000b07; 	T(MOV(cl, *(raddr(ds,bx))));	// 1584 mov     cl, [bx] ;~ 00D0:0B07
cs=0x192;eip=0x000b09; 	T(INC(bx));	// 1585 inc     bx ;~ 00D0:0B09
cs=0x192;eip=0x000b0a; 	T(MOV(al, *(raddr(ds,bx))));	// 1586 mov     al, [bx] ;~ 00D0:0B0A
cs=0x192;eip=0x000b0c; 	T(INC(bx));	// 1587 inc     bx ;~ 00D0:0B0C
cs=0x192;eip=0x000b0d; 	T(MOV(di, *(dw*)(raddr(ds,bx))));	// 1588 mov     di, [bx] ;~ 00D0:0B0D
cs=0x192;eip=0x000b0f; 	T(INC(bx));	// 1589 inc     bx ;~ 00D0:0B0F
cs=0x192;eip=0x000b10; 	X(PUSH(bx));	// 1590 push    bx ;~ 00D0:0B10
cs=0x192;eip=0x000b11; 	T(MOV(ch, 0));	// 1591 mov     ch, 0 ;~ 00D0:0B11
cs=0x192;eip=0x000b13; 	T(OR(cl, cl));	// 1592 or      cl, cl ;~ 00D0:0B13
cs=0x192;eip=0x000b15; 	J(JNZ(loc_10b19));	// 1593 jnz     short loc_10B19 ;~ 00D0:0B15
cs=0x192;eip=0x000b17; 	T(INC(ch));	// 1594 inc     ch ;~ 00D0:0B17
loc_10b19:
	// 4566 
cs=0x192;eip=0x000b19; 	X(MOV(*(raddr(ds,di)), al));	// 1598 mov     [di], al ;~ 00D0:0B19
cs=0x192;eip=0x000b1b; 	T(ADD(di, dx));	// 1599 add     di, dx ;~ 00D0:0B1B
cs=0x192;eip=0x000b1d; 	J(LOOP(loc_10b19));	// 1600 loop    loc_10B19 ;~ 00D0:0B1D
cs=0x192;eip=0x000b1f; 	J(JMP(loc_10acd));	// 1601 jmp     short loc_10ACD ;~ 00D0:0B1F
ret_d0_b21:
	// 4567 
cs=0x192;eip=0x000b21; 	T(MOV(cl, 0x2C));	// 1603 mov     cl, 2Ch ; ',' ;~ 00D0:0B21
cs=0x192;eip=0x000b23; 	J(JMP(loc_10b2f));	// 1604 jmp     short loc_10B2F ;~ 00D0:0B23
ret_d0_b25:
	// 4568 
cs=0x192;eip=0x000b25; 	T(MOV(cl, 9));	// 1606 mov     cl, 9 ;~ 00D0:0B25
cs=0x192;eip=0x000b27; 	J(JMP(loc_10b2f));	// 1607 jmp     short loc_10B2F ;~ 00D0:0B27
ret_d0_b29:
	// 4569 
cs=0x192;eip=0x000b29; 	T(MOV(cl, 0x25));	// 1609 mov     cl, 25h ; '%' ;~ 00D0:0B29
cs=0x192;eip=0x000b2b; 	J(JMP(loc_10b2f));	// 1610 jmp     short loc_10B2F ;~ 00D0:0B2B
ret_d0_b2d:
	// 4570 
cs=0x192;eip=0x000b2d; 	T(MOV(cl, 5));	// 1612 mov     cl, 5 ;~ 00D0:0B2D
loc_10b2f:
	// 4571 
cs=0x192;eip=0x000b2f; 	X(POP(bx));	// 1616 pop     bx ;~ 00D0:0B2F
cs=0x192;eip=0x000b30; 	T(MOV(al, cl));	// 1617 mov     al, cl ;~ 00D0:0B30
cs=0x192;eip=0x000b32; 	T(MOV(cl, *(raddr(ds,bx))));	// 1618 mov     cl, [bx] ;~ 00D0:0B32
cs=0x192;eip=0x000b34; 	T(INC(bx));	// 1619 inc     bx ;~ 00D0:0B34
cs=0x192;eip=0x000b35; 	T(MOV(di, *(dw*)(raddr(ds,bx))));	// 1620 mov     di, [bx] ;~ 00D0:0B35
cs=0x192;eip=0x000b37; 	T(INC(bx));	// 1621 inc     bx ;~ 00D0:0B37
cs=0x192;eip=0x000b38; 	X(PUSH(bx));	// 1622 push    bx ;~ 00D0:0B38
cs=0x192;eip=0x000b39; 	T(MOV(ch, 0));	// 1623 mov     ch, 0 ;~ 00D0:0B39
cs=0x192;eip=0x000b3b; 	T(MOV(ah, al));	// 1624 mov     ah, al ;~ 00D0:0B3B
cs=0x192;eip=0x000b3d; 	T(INC(ah));	// 1625 inc     ah ;~ 00D0:0B3D
loc_10b3f:
	// 4572 
cs=0x192;eip=0x000b3f; 	X(STOSW);	// 1628 stosw ;~ 00D0:0B3F
cs=0x192;eip=0x000b40; 	T(ADD(di, 0x1E));	// 1629 add     di, 1Eh ;~ 00D0:0B40
cs=0x192;eip=0x000b43; 	J(LOOP(loc_10b3f));	// 1630 loop    loc_10B3F ;~ 00D0:0B43
cs=0x192;eip=0x000b45; 	J(JMP(loc_10acd));	// 1631 jmp     short loc_10ACD ;~ 00D0:0B45
ret_d0_b47:
	// 4573 
cs=0x192;eip=0x000b47; 	T(MOV(di, 0x244));	// 1633 mov     di, 244h ;~ 00D0:0B47
cs=0x192;eip=0x000b4a; 	T(MOV(ch, 3));	// 1634 mov     ch, 3 ;~ 00D0:0B4A
loc_10b4c:
	// 4574 
cs=0x192;eip=0x000b4c; 	T(MOV(cl, 4));	// 1637 mov     cl, 4 ;~ 00D0:0B4C
loc_10b4e:
	// 4575 
cs=0x192;eip=0x000b4e; 	X(POP(bx));	// 1640 pop     bx ;~ 00D0:0B4E
cs=0x192;eip=0x000b4f; 	T(MOV(al, *(raddr(ds,bx))));	// 1641 mov     al, [bx] ;~ 00D0:0B4F
cs=0x192;eip=0x000b51; 	T(INC(bx));	// 1642 inc     bx ;~ 00D0:0B51
cs=0x192;eip=0x000b52; 	X(PUSH(bx));	// 1643 push    bx ;~ 00D0:0B52
cs=0x192;eip=0x000b53; 	X(PUSH(di));	// 1644 push    di ;~ 00D0:0B53
cs=0x192;eip=0x000b54; 	T(MOV(ah, 0));	// 1645 mov     ah, 0 ;~ 00D0:0B54
cs=0x192;eip=0x000b56; 	T(MOV(bx, 0x2081));	// 1646 mov     bx, 2081h ;~ 00D0:0B56
cs=0x192;eip=0x000b59; 	T(ADD(bx, ax));	// 1647 add     bx, ax ;~ 00D0:0B59
cs=0x192;eip=0x000b5b; 	T(ADD(bx, ax));	// 1648 add     bx, ax ;~ 00D0:0B5B
cs=0x192;eip=0x000b5d; 	T(MOV(si, *(dw*)(raddr(ds,bx))));	// 1649 mov     si, [bx] ;~ 00D0:0B5D
cs=0x192;eip=0x000b5f; 	X(PUSH(cx));	// 1650 push    cx ;~ 00D0:0B5F
cs=0x192;eip=0x000b60; 	T(MOV(cx, 6));	// 1651 mov     cx, 6 ;~ 00D0:0B60
loc_10b63:
	// 4576 
cs=0x192;eip=0x000b63; 	X(PUSH(cx));	// 1654 push    cx ;~ 00D0:0B63
cs=0x192;eip=0x000b64; 	T(MOV(cx, 4));	// 1655 mov     cx, 4 ;~ 00D0:0B64
	// 1656 rep movsw ;~ 00D0:0B67
cs=0x192;eip=0x000b67; 	X(	REP MOVSW);	// 1656 rep movsw ;~ 00D0:0B67
cs=0x192;eip=0x000b69; 	T(ADD(di, 0x18));	// 1657 add     di, 18h ;~ 00D0:0B69
cs=0x192;eip=0x000b6c; 	X(POP(cx));	// 1658 pop     cx ;~ 00D0:0B6C
cs=0x192;eip=0x000b6d; 	J(LOOP(loc_10b63));	// 1659 loop    loc_10B63 ;~ 00D0:0B6D
cs=0x192;eip=0x000b6f; 	X(POP(cx));	// 1660 pop     cx ;~ 00D0:0B6F
cs=0x192;eip=0x000b70; 	X(POP(di));	// 1661 pop     di ;~ 00D0:0B70
cs=0x192;eip=0x000b71; 	T(ADD(di, 8));	// 1662 add     di, 8 ;~ 00D0:0B71
cs=0x192;eip=0x000b74; 	T(DEC(cl));	// 1663 dec     cl ;~ 00D0:0B74
cs=0x192;eip=0x000b76; 	J(JNZ(loc_10b4e));	// 1664 jnz     short loc_10B4E ;~ 00D0:0B76
cs=0x192;eip=0x000b78; 	T(ADD(di, 0x0A0));	// 1665 add     di, 0A0h ; ' ' ;~ 00D0:0B78
cs=0x192;eip=0x000b7c; 	T(DEC(ch));	// 1666 dec     ch ;~ 00D0:0B7C
cs=0x192;eip=0x000b7e; 	J(JNZ(loc_10b4c));	// 1667 jnz     short loc_10B4C ;~ 00D0:0B7E
cs=0x192;eip=0x000b80; 	X(POP(bx));	// 1668 pop     bx ;~ 00D0:0B80
cs=0x192;eip=0x000b81; 	T(DEC(bx));	// 1669 dec     bx ;~ 00D0:0B81
cs=0x192;eip=0x000b82; 	X(PUSH(bx));	// 1670 push    bx ;~ 00D0:0B82
cs=0x192;eip=0x000b83; 	J(JMP(loc_10acd));	// 1671 jmp     loc_10ACD ;~ 00D0:0B83
ret_d0_b86:
	// 4577 
cs=0x192;eip=0x000b86; 	T(MOV(bx, 0x0FFE0));	// 1673 mov     bx, 0FFE0h ;~ 00D0:0B86
cs=0x192;eip=0x000b89; 	J(JMP(loc_10b9d));	// 1674 jmp     short loc_10B9D ;~ 00D0:0B89
ret_d0_b8b:
	// 4578 
cs=0x192;eip=0x000b8b; 	T(MOV(bx, 0x0FFE1));	// 1676 mov     bx, 0FFE1h ;~ 00D0:0B8B
cs=0x192;eip=0x000b8e; 	J(JMP(loc_10b9d));	// 1677 jmp     short loc_10B9D ;~ 00D0:0B8E
ret_d0_b90:
	// 4579 
cs=0x192;eip=0x000b90; 	X(POP(bx));	// 1679 pop     bx ;~ 00D0:0B90
cs=0x192;eip=0x000b91; 	T(MOV(bx, 0x2563));	// 1680 mov     bx, 2563h ;~ 00D0:0B91
cs=0x192;eip=0x000b94; 	X(PUSH(bx));	// 1681 push    bx ;~ 00D0:0B94
cs=0x192;eip=0x000b95; 	T(MOV(bx, 0x21));	// 1682 mov     bx, 21h ; '!' ;~ 00D0:0B95
cs=0x192;eip=0x000b98; 	J(JMP(loc_10b9d));	// 1683 jmp     short loc_10B9D ;~ 00D0:0B98
ret_d0_b9a:
	// 4580 
cs=0x192;eip=0x000b9a; 	T(MOV(bx, 0x20));	// 1685 mov     bx, 20h ; ' ' ;~ 00D0:0B9A
loc_10b9d:
	// 4581 
cs=0x192;eip=0x000b9d; 	T(MOV(dx, bx));	// 1689 mov     dx, bx ;~ 00D0:0B9D
cs=0x192;eip=0x000b9f; 	X(POP(bx));	// 1690 pop     bx ;~ 00D0:0B9F
cs=0x192;eip=0x000ba0; 	T(MOV(cl, *(raddr(ds,bx))));	// 1691 mov     cl, [bx] ;~ 00D0:0BA0
cs=0x192;eip=0x000ba2; 	T(INC(bx));	// 1692 inc     bx ;~ 00D0:0BA2
cs=0x192;eip=0x000ba3; 	T(MOV(al, *(raddr(ds,bx))));	// 1693 mov     al, [bx] ;~ 00D0:0BA3
cs=0x192;eip=0x000ba5; 	T(INC(bx));	// 1694 inc     bx ;~ 00D0:0BA5
cs=0x192;eip=0x000ba6; 	T(MOV(di, *(dw*)(raddr(ds,bx))));	// 1695 mov     di, [bx] ;~ 00D0:0BA6
cs=0x192;eip=0x000ba8; 	T(INC(bx));	// 1696 inc     bx ;~ 00D0:0BA8
cs=0x192;eip=0x000ba9; 	X(PUSH(bx));	// 1697 push    bx ;~ 00D0:0BA9
cs=0x192;eip=0x000baa; 	T(MOV(ch, 0));	// 1698 mov     ch, 0 ;~ 00D0:0BAA
cs=0x192;eip=0x000bac; 	T(CLD);	// 1699 cld ;~ 00D0:0BAC
loc_10bad:
	// 4582 
cs=0x192;eip=0x000bad; 	X(PUSH(cx));	// 1702 push    cx ;~ 00D0:0BAD
cs=0x192;eip=0x000bae; 	X(PUSH(di));	// 1703 push    di ;~ 00D0:0BAE
	// 1704 rep stosb ;~ 00D0:0BAF
cs=0x192;eip=0x000baf; 	X(	REP STOSB);	// 1704 rep stosb ;~ 00D0:0BAF
cs=0x192;eip=0x000bb1; 	X(POP(di));	// 1705 pop     di ;~ 00D0:0BB1
cs=0x192;eip=0x000bb2; 	T(ADD(di, dx));	// 1706 add     di, dx ;~ 00D0:0BB2
cs=0x192;eip=0x000bb4; 	X(POP(cx));	// 1707 pop     cx ;~ 00D0:0BB4
cs=0x192;eip=0x000bb5; 	J(LOOP(loc_10bad));	// 1708 loop    loc_10BAD ;~ 00D0:0BB5
cs=0x192;eip=0x000bb7; 	J(JMP(loc_10acd));	// 1709 jmp     loc_10ACD ;~ 00D0:0BB7
ret_d0_bba:
	// 4583 
cs=0x192;eip=0x000bba; 	X(POP(bx));	// 1711 pop     bx ;~ 00D0:0BBA
cs=0x192;eip=0x000bbb; 	T(MOV(ch, *(raddr(ds,bx))));	// 1712 mov     ch, [bx] ;~ 00D0:0BBB
cs=0x192;eip=0x000bbd; 	T(INC(bx));	// 1713 inc     bx ;~ 00D0:0BBD
cs=0x192;eip=0x000bbe; 	T(MOV(cl, *(raddr(ds,bx))));	// 1714 mov     cl, [bx] ;~ 00D0:0BBE
cs=0x192;eip=0x000bc0; 	T(INC(bx));	// 1715 inc     bx ;~ 00D0:0BC0
cs=0x192;eip=0x000bc1; 	T(MOV(al, *(raddr(ds,bx))));	// 1716 mov     al, [bx] ;~ 00D0:0BC1
cs=0x192;eip=0x000bc3; 	T(INC(bx));	// 1717 inc     bx ;~ 00D0:0BC3
cs=0x192;eip=0x000bc4; 	T(MOV(di, *(dw*)(raddr(ds,bx))));	// 1718 mov     di, [bx] ;~ 00D0:0BC4
cs=0x192;eip=0x000bc6; 	T(INC(bx));	// 1719 inc     bx ;~ 00D0:0BC6
cs=0x192;eip=0x000bc7; 	X(PUSH(bx));	// 1720 push    bx ;~ 00D0:0BC7
loc_10bc8:
	// 4584 
cs=0x192;eip=0x000bc8; 	X(PUSH(di));	// 1723 push    di ;~ 00D0:0BC8
cs=0x192;eip=0x000bc9; 	X(PUSH(cx));	// 1724 push    cx ;~ 00D0:0BC9
loc_10bca:
	// 4585 
cs=0x192;eip=0x000bca; 	X(MOV(*(raddr(ds,di)), al));	// 1727 mov     [di], al ;~ 00D0:0BCA
cs=0x192;eip=0x000bcc; 	T(INC(di));	// 1728 inc     di ;~ 00D0:0BCC
cs=0x192;eip=0x000bcd; 	T(DEC(ch));	// 1729 dec     ch ;~ 00D0:0BCD
cs=0x192;eip=0x000bcf; 	J(JNZ(loc_10bca));	// 1730 jnz     short loc_10BCA ;~ 00D0:0BCF
cs=0x192;eip=0x000bd1; 	X(POP(cx));	// 1731 pop     cx ;~ 00D0:0BD1
cs=0x192;eip=0x000bd2; 	X(POP(di));	// 1732 pop     di ;~ 00D0:0BD2
cs=0x192;eip=0x000bd3; 	T(ADD(di, 0x20));	// 1733 add     di, 20h ; ' ' ;~ 00D0:0BD3
cs=0x192;eip=0x000bd6; 	T(DEC(cl));	// 1734 dec     cl ;~ 00D0:0BD6
cs=0x192;eip=0x000bd8; 	J(JNZ(loc_10bc8));	// 1735 jnz     short loc_10BC8 ;~ 00D0:0BD8
cs=0x192;eip=0x000bda; 	J(JMP(loc_10acd));	// 1736 jmp     loc_10ACD ;~ 00D0:0BDA
sub_10bdd:
	// 1741 
cs=0x192;eip=0x000bdd; 	T(MOV(di, 0x6C4));	// 1743 mov     di, 6C4h ;~ 00D0:0BDD
ret_d0_be0:
	// 4586 
cs=0x192;eip=0x000be0; 	T(MOV(ax, 0x0FFFF));	// 1744 mov     ax, 0FFFFh ;~ 00D0:0BE0
cs=0x192;eip=0x000be3; 	T(MOV(cx, 0x120));	// 1745 mov     cx, 120h ;~ 00D0:0BE3
cs=0x192;eip=0x000be6; 	T(CLD);	// 1746 cld ;~ 00D0:0BE6
	// 1747 rep stosw ;~ 00D0:0BE7
cs=0x192;eip=0x000be7; 	X(	REP STOSW);	// 1747 rep stosw ;~ 00D0:0BE7
cs=0x192;eip=0x000be9; 	J(RETN(0));	// 1748 retn ;~ 00D0:0BE9
sub_10bea:
	// 1755 
cs=0x192;eip=0x000bea; 	T(MOV(di, 0x904));	// 1757 mov     di, 904h ;~ 00D0:0BEA
ret_d0_bed:
	// 4587 
cs=0x192;eip=0x000bed; 	T(MOV(ax, 0x0FFFF));	// 1758 mov     ax, 0FFFFh ;~ 00D0:0BED
cs=0x192;eip=0x000bf0; 	T(MOV(cx, 0x240));	// 1759 mov     cx, 240h ;~ 00D0:0BF0
cs=0x192;eip=0x000bf3; 	T(CLD);	// 1760 cld ;~ 00D0:0BF3
	// 1761 rep stosw ;~ 00D0:0BF4
cs=0x192;eip=0x000bf4; 	X(	REP STOSW);	// 1761 rep stosw ;~ 00D0:0BF4
cs=0x192;eip=0x000bf6; 	J(RETN(0));	// 1762 retn ;~ 00D0:0BF6
sub_10bf7:
	// 1769 
cs=0x192;eip=0x000bf7; 	X(PUSH(cx));	// 1771 push    cx ;~ 00D0:0BF7
loc_10bf8:
	// 4588 
cs=0x192;eip=0x000bf8; 	T(LODSB);	// 1774 lodsb ;~ 00D0:0BF8
cs=0x192;eip=0x000bf9; 	T(ADD(al, 0x0A4));	// 1775 add     al, 0A4h ; '¤' ;~ 00D0:0BF9
cs=0x192;eip=0x000bfb; 	X(MOV(*(raddr(ds,bx)), al));	// 1776 mov     [bx], al ;~ 00D0:0BFB
cs=0x192;eip=0x000bfd; 	T(INC(bx));	// 1777 inc     bx ;~ 00D0:0BFD
cs=0x192;eip=0x000bfe; 	J(LOOP(loc_10bf8));	// 1778 loop    loc_10BF8 ;~ 00D0:0BFE
cs=0x192;eip=0x000c00; 	X(POP(cx));	// 1779 pop     cx ;~ 00D0:0C00
cs=0x192;eip=0x000c01; 	T(SUB(bx, 0x480));	// 1780 sub     bx, 480h ;~ 00D0:0C01
loc_10c05:
	// 4589 
cs=0x192;eip=0x000c05; 	T(DEC(bx));	// 1783 dec     bx ;~ 00D0:0C05
cs=0x192;eip=0x000c06; 	X(MOV(*(raddr(ds,bx)), 1));	// 1784 mov     byte ptr [bx], 1 ;~ 00D0:0C06
cs=0x192;eip=0x000c09; 	J(LOOP(loc_10c05));	// 1785 loop    loc_10C05 ;~ 00D0:0C09
cs=0x192;eip=0x000c0b; 	J(RETN(0));	// 1786 retn ;~ 00D0:0C0B
nullsub_1:
	// 1793 
cs=0x192;eip=0x000c0c; 	J(RETN(0));	// 1794 retn ;~ 00D0:0C0C
sub_10c0d:
	// 1801 
cs=0x192;eip=0x000c0d; 	T(MOV(ax, word_18623));	// 1803 mov     ax, word_18623 ;~ 00D0:0C0D
ret_d0_c10:
	// 4590 
cs=0x192;eip=0x000c10; 	T(XOR(al, 4));	// 1804 xor     al, 4 ;~ 00D0:0C10
cs=0x192;eip=0x000c12; 	T(MOV(ah, 0));	// 1805 mov     ah, 0 ;~ 00D0:0C12
cs=0x192;eip=0x000c14; 	X(MOV(word_18623, ax));	// 1806 mov     word_18623, ax ;~ 00D0:0C14
cs=0x192;eip=0x000c17; 	T(MOV(di, 4));	// 1807 mov     di, 4 ;~ 00D0:0C17
cs=0x192;eip=0x000c1a; 	T(MOV(cx, 0x121));	// 1808 mov     cx, 121h ;~ 00D0:0C1A
loc_10c1d:
	// 4591 
cs=0x192;eip=0x000c1d; 	T(XOR(ax, ax));	// 1811 xor     ax, ax ;~ 00D0:0C1D
cs=0x192;eip=0x000c1f; 	T(CLD);	// 1812 cld ;~ 00D0:0C1F
	// 1813 repe scasw ;~ 00D0:0C20
cs=0x192;eip=0x000c20; 	T(	REPE SCASW);	// 1813 repe scasw ;~ 00D0:0C20
cs=0x192;eip=0x000c22; 	J(JCXZ(nullsub_1));	// 1814 jcxz    short nullsub_1 ;~ 00D0:0C22
cs=0x192;eip=0x000c24; 	X(PUSH(cx));	// 1815 push    cx ;~ 00D0:0C24
cs=0x192;eip=0x000c25; 	X(PUSH(di));	// 1816 push    di ;~ 00D0:0C25
cs=0x192;eip=0x000c26; 	T(DEC(di));	// 1817 dec     di ;~ 00D0:0C26
cs=0x192;eip=0x000c27; 	T(DEC(di));	// 1818 dec     di ;~ 00D0:0C27
loc_10c28:
	// 4592 
cs=0x192;eip=0x000c28; 	T(MOV(al, *(raddr(ds,di))));	// 1821 mov     al, [di] ;~ 00D0:0C28
cs=0x192;eip=0x000c2a; 	T(OR(al, al));	// 1822 or      al, al ;~ 00D0:0C2A
cs=0x192;eip=0x000c2c; 	J(JNZ(loc_10c31));	// 1823 jnz     short loc_10C31 ;~ 00D0:0C2C
cs=0x192;eip=0x000c2e; 	J(JMP(loc_10e23));	// 1824 jmp     loc_10E23 ;~ 00D0:0C2E
loc_10c31:
	// 4593 
cs=0x192;eip=0x000c31; 	T(MOV(al, *(raddr(ds,di+0x240))));	// 1828 mov     al, [di+240h] ;~ 00D0:0C31
cs=0x192;eip=0x000c35; 	X(MOV(byte_18636, al));	// 1829 mov     byte_18636, al ;~ 00D0:0C35
cs=0x192;eip=0x000c38; 	T(MOV(ah, 0));	// 1830 mov     ah, 0 ;~ 00D0:0C38
cs=0x192;eip=0x000c3a; 	T(MOV(bx, ax));	// 1831 mov     bx, ax ;~ 00D0:0C3A
cs=0x192;eip=0x000c3c; 	T(ADD(ax, ax));	// 1832 add     ax, ax ;~ 00D0:0C3C
cs=0x192;eip=0x000c3e; 	T(ADD(ax, ax));	// 1833 add     ax, ax ;~ 00D0:0C3E
cs=0x192;eip=0x000c40; 	T(ADD(ax, ax));	// 1834 add     ax, ax ;~ 00D0:0C40
cs=0x192;eip=0x000c42; 	T(ADD(ax, bx));	// 1835 add     ax, bx ;~ 00D0:0C42
cs=0x192;eip=0x000c44; 	T(ADD(ax, 0x3F3E));	// 1836 add     ax, 3F3Eh ;~ 00D0:0C44
cs=0x192;eip=0x000c47; 	T(MOV(si, ax));	// 1837 mov     si, ax ;~ 00D0:0C47
cs=0x192;eip=0x000c49; 	X(PUSH(di));	// 1838 push    di ;~ 00D0:0C49
cs=0x192;eip=0x000c4a; 	T(MOV(di, 0x57C5));	// 1839 mov     di, 57C5h ;~ 00D0:0C4A
cs=0x192;eip=0x000c4d; 	T(MOV(bl, *(raddr(ds,si+8))));	// 1840 mov     bl, [si+8] ;~ 00D0:0C4D
cs=0x192;eip=0x000c50; 	T(CMP(byte_14a3a, 0));	// 1841 cmp     byte_14A3A, 0 ;~ 00D0:0C50
cs=0x192;eip=0x000c55; 	J(JZ(loc_10c5d));	// 1842 jz      short loc_10C5D ;~ 00D0:0C55
cs=0x192;eip=0x000c57; 	T(AND(bl, 0x0C7));	// 1843 and     bl, 0C7h ;~ 00D0:0C57
cs=0x192;eip=0x000c5a; 	T(OR(bl, 0x10));	// 1844 or      bl, 10h ;~ 00D0:0C5A
loc_10c5d:
	// 4594 
cs=0x192;eip=0x000c5d; 	T(MOV(al, bl));	// 1847 mov     al, bl ;~ 00D0:0C5D
cs=0x192;eip=0x000c5f; 	T(XOR(cx, cx));	// 1848 xor     cx, cx ;~ 00D0:0C5F
cs=0x192;eip=0x000c61; 	T(AND(al, 0x38));	// 1849 and     al, 38h ;~ 00D0:0C61
cs=0x192;eip=0x000c63; 	T(CMP(al, 0x20));	// 1850 cmp     al, 20h ; ' ' ;~ 00D0:0C63
cs=0x192;eip=0x000c65; 	J({;});	// 1851 jnz     short $+2 ;~ 00D0:0C65
loc_10c67:
	// 4595 
cs=0x192;eip=0x000c67; 	X(MOV(word_18638, cx));	// 1854 mov     word_18638, cx ;~ 00D0:0C67
cs=0x192;eip=0x000c6b; 	T(MOV(bh, 0));	// 1855 mov     bh, 0 ;~ 00D0:0C6B
cs=0x192;eip=0x000c6d; 	T(MOV(ax, bx));	// 1856 mov     ax, bx ;~ 00D0:0C6D
cs=0x192;eip=0x000c6f; 	T(SHL(bx, 1));	// 1857 shl     bx, 1 ;~ 00D0:0C6F
cs=0x192;eip=0x000c71; 	T(AND(bl, 0x0E));	// 1858 and     bl, 0Eh ;~ 00D0:0C71
cs=0x192;eip=0x000c74; 	T(ADD(bx, 0x1B72));	// 1859 add     bx, 1B72h ;~ 00D0:0C74
cs=0x192;eip=0x000c78; 	T(MOV(bp, *(dw*)(raddr(ds,bx))));	// 1860 mov     bp, [bx] ;~ 00D0:0C78
cs=0x192;eip=0x000c7a; 	T(MOV(bx, ax));	// 1861 mov     bx, ax ;~ 00D0:0C7A
cs=0x192;eip=0x000c7c; 	T(SHR(bl, 1));	// 1862 shr     bl, 1 ;~ 00D0:0C7C
cs=0x192;eip=0x000c7e; 	T(SHR(bl, 1));	// 1863 shr     bl, 1 ;~ 00D0:0C7E
cs=0x192;eip=0x000c80; 	T(AND(bl, 0x0E));	// 1864 and     bl, 0Eh ;~ 00D0:0C80
cs=0x192;eip=0x000c83; 	T(ADD(bx, 0x1B72));	// 1865 add     bx, 1B72h ;~ 00D0:0C83
cs=0x192;eip=0x000c87; 	T(MOV(dx, *(dw*)(raddr(ds,bx))));	// 1866 mov     dx, [bx] ;~ 00D0:0C87
cs=0x192;eip=0x000c89; 	T(MOV(cx, 8));	// 1867 mov     cx, 8 ;~ 00D0:0C89
loc_10c8c:
	// 4596 
cs=0x192;eip=0x000c8c; 	T(LODSB);	// 1870 lodsb ;~ 00D0:0C8C
cs=0x192;eip=0x000c8d; 	T(XOR(ah, ah));	// 1871 xor     ah, ah ;~ 00D0:0C8D
cs=0x192;eip=0x000c8f; 	T(SHL(ax, 1));	// 1872 shl     ax, 1 ;~ 00D0:0C8F
cs=0x192;eip=0x000c91; 	T(ADD(ax, 0x1972));	// 1873 add     ax, 1972h ;~ 00D0:0C91
cs=0x192;eip=0x000c94; 	T(MOV(bx, ax));	// 1874 mov     bx, ax ;~ 00D0:0C94
cs=0x192;eip=0x000c96; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 1875 mov     ax, [bx] ;~ 00D0:0C96
cs=0x192;eip=0x000c98; 	T(MOV(bx, ax));	// 1876 mov     bx, ax ;~ 00D0:0C98
cs=0x192;eip=0x000c9a; 	T(NOT(bx));	// 1877 not     bx ;~ 00D0:0C9A
cs=0x192;eip=0x000c9c; 	T(AND(ax, bp));	// 1878 and     ax, bp ;~ 00D0:0C9C
cs=0x192;eip=0x000c9e; 	T(AND(bx, dx));	// 1879 and     bx, dx ;~ 00D0:0C9E
cs=0x192;eip=0x000ca0; 	T(OR(ax, bx));	// 1880 or      ax, bx ;~ 00D0:0CA0
cs=0x192;eip=0x000ca2; 	X(STOSW);	// 1881 stosw ;~ 00D0:0CA2
cs=0x192;eip=0x000ca3; 	J(LOOP(loc_10c8c));	// 1882 loop    loc_10C8C ;~ 00D0:0CA3
cs=0x192;eip=0x000ca5; 	X(POP(di));	// 1883 pop     di ;~ 00D0:0CA5
cs=0x192;eip=0x000ca6; 	X(MOV(*(db*)(((db*)&word_18623)+1), 0));	// 1884 mov     byte ptr word_18623+1, 0 ;~ 00D0:0CA6
cs=0x192;eip=0x000cab; 	T(MOV(al, *(raddr(ds,di+0x900))));	// 1885 mov     al, [di+900h] ;~ 00D0:0CAB
cs=0x192;eip=0x000caf; 	T(INC(al));	// 1886 inc     al ;~ 00D0:0CAF
cs=0x192;eip=0x000cb1; 	J(JZ(loc_10cce));	// 1887 jz      short loc_10CCE ;~ 00D0:0CB1
cs=0x192;eip=0x000cb3; 	T(MOV(cl, 2));	// 1888 mov     cl, 2 ;~ 00D0:0CB3
cs=0x192;eip=0x000cb5; 	T(CMP(al, 0x0A4));	// 1889 cmp     al, 0A4h ; '¤' ;~ 00D0:0CB5
cs=0x192;eip=0x000cb7; 	J(JC(loc_10cc5));	// 1890 jb      short loc_10CC5 ;~ 00D0:0CB7
cs=0x192;eip=0x000cb9; 	T(CMP(al, 0x0A7));	// 1891 cmp     al, 0A7h ; '§' ;~ 00D0:0CB9
cs=0x192;eip=0x000cbb; 	J(JNC(loc_10cc5));	// 1892 jnb     short loc_10CC5 ;~ 00D0:0CBB
cs=0x192;eip=0x000cbd; 	T(MOV(cl, *(db*)(((db*)&word_18623))));	// 1893 mov     cl, byte ptr word_18623 ;~ 00D0:0CBD
cs=0x192;eip=0x000cc1; 	X(MOV(*(db*)(((db*)&word_18623)+1), cl));	// 1894 mov     byte ptr word_18623+1, cl ;~ 00D0:0CC1
loc_10cc5:
	// 4597 
cs=0x192;eip=0x000cc5; 	T(DEC(al));	// 1898 dec     al ;~ 00D0:0CC5
cs=0x192;eip=0x000cc7; 	T(MOV(ah, byte_19e06));	// 1899 mov     ah, byte_19E06 ;~ 00D0:0CC7
cs=0x192;eip=0x000ccb; 	J(CALL(sub_10e5f,0));	// 1900 call    sub_10E5F ;~ 00D0:0CCB
loc_10cce:
	// 4598 
cs=0x192;eip=0x000cce; 	T(MOV(al, *(raddr(ds,di+0x0B40))));	// 1903 mov     al, [di+0B40h] ;~ 00D0:0CCE
cs=0x192;eip=0x000cd2; 	T(INC(al));	// 1904 inc     al ;~ 00D0:0CD2
cs=0x192;eip=0x000cd4; 	J(JZ(loc_10ce1));	// 1905 jz      short loc_10CE1 ;~ 00D0:0CD4
cs=0x192;eip=0x000cd6; 	T(DEC(al));	// 1906 dec     al ;~ 00D0:0CD6
cs=0x192;eip=0x000cd8; 	T(MOV(cl, 2));	// 1907 mov     cl, 2 ;~ 00D0:0CD8
cs=0x192;eip=0x000cda; 	T(MOV(ah, byte_19e07));	// 1908 mov     ah, byte_19E07 ;~ 00D0:0CDA
cs=0x192;eip=0x000cde; 	J(CALL(sub_10e5f,0));	// 1909 call    sub_10E5F ;~ 00D0:0CDE
loc_10ce1:
	// 4599 
cs=0x192;eip=0x000ce1; 	T(MOV(al, *(raddr(ds,di+0x6C0))));	// 1912 mov     al, [di+6C0h] ;~ 00D0:0CE1
cs=0x192;eip=0x000ce5; 	T(INC(al));	// 1913 inc     al ;~ 00D0:0CE5
cs=0x192;eip=0x000ce7; 	J(JZ(loc_10d4d));	// 1914 jz      short loc_10D4D ;~ 00D0:0CE7
cs=0x192;eip=0x000ce9; 	T(MOV(cl, byte_14a34));	// 1915 mov     cl, byte_14A34 ;~ 00D0:0CE9
cs=0x192;eip=0x000ced; 	T(CMP(byte_14a3a, 0));	// 1916 cmp     byte_14A3A, 0 ;~ 00D0:0CED
cs=0x192;eip=0x000cf2; 	J(JZ(loc_10cf6));	// 1917 jz      short loc_10CF6 ;~ 00D0:0CF2
cs=0x192;eip=0x000cf4; 	T(MOV(cl, 6));	// 1918 mov     cl, 6 ;~ 00D0:0CF4
loc_10cf6:
	// 4600 
cs=0x192;eip=0x000cf6; 	T(CMP(al, 0x0E1));	// 1921 cmp     al, 0E1h ; 'á' ;~ 00D0:0CF6
cs=0x192;eip=0x000cf8; 	J(JNC(loc_10d12));	// 1922 jnb     short loc_10D12 ;~ 00D0:0CF8
cs=0x192;eip=0x000cfa; 	T(CMP(al, 0x0D3));	// 1923 cmp     al, 0D3h ; 'Ó' ;~ 00D0:0CFA
cs=0x192;eip=0x000cfc; 	J(JC(loc_10d12));	// 1924 jb      short loc_10D12 ;~ 00D0:0CFC
cs=0x192;eip=0x000cfe; 	T(CMP(al, 0x0D7));	// 1925 cmp     al, 0D7h ; '×' ;~ 00D0:0CFE
cs=0x192;eip=0x000d00; 	J(JC(loc_10d06));	// 1926 jb      short loc_10D06 ;~ 00D0:0D00
cs=0x192;eip=0x000d02; 	T(CMP(al, 0x0DB));	// 1927 cmp     al, 0DBh ; 'Û' ;~ 00D0:0D02
cs=0x192;eip=0x000d04; 	J(JC(loc_10d12));	// 1928 jb      short loc_10D12 ;~ 00D0:0D04
loc_10d06:
	// 4601 
cs=0x192;eip=0x000d06; 	T(MOV(ah, byte_18636));	// 1931 mov     ah, byte_18636 ;~ 00D0:0D06
cs=0x192;eip=0x000d0a; 	T(DEC(ah));	// 1932 dec     ah ;~ 00D0:0D0A
cs=0x192;eip=0x000d0c; 	J(JNZ(loc_10d12));	// 1933 jnz     short loc_10D12 ;~ 00D0:0D0C
cs=0x192;eip=0x000d0e; 	T(MOV(cl, 6));	// 1934 mov     cl, 6 ;~ 00D0:0D0E
cs=0x192;eip=0x000d10; 	J(JMP(loc_10d41));	// 1935 jmp     short loc_10D41 ;~ 00D0:0D10
loc_10d12:
	// 4602 
cs=0x192;eip=0x000d12; 	T(MOV(ah, byte_18636));	// 1940 mov     ah, byte_18636 ;~ 00D0:0D12
cs=0x192;eip=0x000d16; 	T(CMP(ah, 0x4F));	// 1941 cmp     ah, 4Fh ; 'O' ;~ 00D0:0D16
cs=0x192;eip=0x000d19; 	J(JC(loc_10d2d));	// 1942 jb      short loc_10D2D ;~ 00D0:0D19
cs=0x192;eip=0x000d1b; 	T(CMP(ah, 0x56));	// 1943 cmp     ah, 56h ; 'V' ;~ 00D0:0D1B
cs=0x192;eip=0x000d1e; 	J(JNC(loc_10d2d));	// 1944 jnb     short loc_10D2D ;~ 00D0:0D1E
cs=0x192;eip=0x000d20; 	T(MOV(ah, byte_14a3c));	// 1945 mov     ah, byte_14A3C ;~ 00D0:0D20
cs=0x192;eip=0x000d24; 	T(OR(ah, ah));	// 1946 or      ah, ah ;~ 00D0:0D24
cs=0x192;eip=0x000d26; 	J(JZ(loc_10d2d));	// 1947 jz      short loc_10D2D ;~ 00D0:0D26
cs=0x192;eip=0x000d28; 	X(MOV(byte_14a33, 1));	// 1948 mov     byte_14A33, 1 ;~ 00D0:0D28
loc_10d2d:
	// 4603 
cs=0x192;eip=0x000d2d; 	T(MOV(ah, *(db*)(((db*)&word_18623)+1)));	// 1952 mov     ah, byte ptr word_18623+1 ;~ 00D0:0D2D
cs=0x192;eip=0x000d31; 	T(OR(ah, ah));	// 1953 or      ah, ah ;~ 00D0:0D31
cs=0x192;eip=0x000d33; 	J(JZ(loc_10d41));	// 1954 jz      short loc_10D41 ;~ 00D0:0D33
cs=0x192;eip=0x000d35; 	X(PUSH(ax));	// 1955 push    ax ;~ 00D0:0D35
cs=0x192;eip=0x000d36; 	X(PUSH(di));	// 1956 push    di ;~ 00D0:0D36
cs=0x192;eip=0x000d37; 	T(MOV(cx, 3));	// 1957 mov     cx, 3 ;~ 00D0:0D37
cs=0x192;eip=0x000d3a; 	J(CALL(sub_11f89,0));	// 1958 call    sub_11F89 ;~ 00D0:0D3A
cs=0x192;eip=0x000d3d; 	X(POP(di));	// 1959 pop     di ;~ 00D0:0D3D
cs=0x192;eip=0x000d3e; 	X(POP(ax));	// 1960 pop     ax ;~ 00D0:0D3E
cs=0x192;eip=0x000d3f; 	T(MOV(cl, ah));	// 1961 mov     cl, ah ;~ 00D0:0D3F
loc_10d41:
	// 4604 
cs=0x192;eip=0x000d41; 	T(MOV(ah, byte_14a39));	// 1965 mov     ah, byte_14A39 ;~ 00D0:0D41
cs=0x192;eip=0x000d45; 	T(DEC(al));	// 1966 dec     al ;~ 00D0:0D45
cs=0x192;eip=0x000d47; 	T(MOV(si, 0x5FF2));	// 1967 mov     si, 5FF2h ;~ 00D0:0D47
cs=0x192;eip=0x000d4a; 	J(CALL(sub_10e62,0));	// 1968 call    sub_10E62 ;~ 00D0:0D4A
loc_10d4d:
	// 4605 
cs=0x192;eip=0x000d4d; 	T(MOV(al, *(raddr(ds,di+0x480))));	// 1971 mov     al, [di+480h] ;~ 00D0:0D4D
cs=0x192;eip=0x000d51; 	X(PUSH(di));	// 1972 push    di ;~ 00D0:0D51
cs=0x192;eip=0x000d52; 	T(INC(al));	// 1973 inc     al ;~ 00D0:0D52
cs=0x192;eip=0x000d54; 	J(JZ(loc_10dcf));	// 1974 jz      short loc_10DCF ;~ 00D0:0D54
cs=0x192;eip=0x000d56; 	T(MOV(cl, al));	// 1975 mov     cl, al ;~ 00D0:0D56
cs=0x192;eip=0x000d58; 	T(DEC(al));	// 1976 dec     al ;~ 00D0:0D58
cs=0x192;eip=0x000d5a; 	T(MOV(ah, 0));	// 1977 mov     ah, 0 ;~ 00D0:0D5A
cs=0x192;eip=0x000d5c; 	T(MOV(dx, ax));	// 1978 mov     dx, ax ;~ 00D0:0D5C
cs=0x192;eip=0x000d5e; 	T(ADD(ax, ax));	// 1979 add     ax, ax ;~ 00D0:0D5E
cs=0x192;eip=0x000d60; 	T(ADD(ax, ax));	// 1980 add     ax, ax ;~ 00D0:0D60
cs=0x192;eip=0x000d62; 	T(ADD(ax, ax));	// 1981 add     ax, ax ;~ 00D0:0D62
cs=0x192;eip=0x000d64; 	T(CMP(cl, 0x0E5));	// 1982 cmp     cl, 0E5h ; 'å' ;~ 00D0:0D64
cs=0x192;eip=0x000d67; 	J(JC(loc_10d6c));	// 1983 jb      short loc_10D6C ;~ 00D0:0D67
cs=0x192;eip=0x000d69; 	J(JMP(loc_10e32));	// 1984 jmp     loc_10E32 ;~ 00D0:0D69
loc_10d6c:
	// 4606 
cs=0x192;eip=0x000d6c; 	T(ADD(ax, ax));	// 1988 add     ax, ax ;~ 00D0:0D6C
cs=0x192;eip=0x000d6e; 	T(ADD(ax, dx));	// 1989 add     ax, dx ;~ 00D0:0D6E
cs=0x192;eip=0x000d70; 	T(ADD(ax, 0x4835));	// 1990 add     ax, 4835h ;~ 00D0:0D70
cs=0x192;eip=0x000d73; 	T(MOV(si, ax));	// 1991 mov     si, ax ;~ 00D0:0D73
cs=0x192;eip=0x000d75; 	T(MOV(di, 0x57C5));	// 1992 mov     di, 57C5h ;~ 00D0:0D75
cs=0x192;eip=0x000d78; 	T(MOV(dl, 8));	// 1993 mov     dl, 8 ;~ 00D0:0D78
cs=0x192;eip=0x000d7a; 	T(MOV(bl, *(raddr(ds,si+0x10))));	// 1994 mov     bl, [si+10h] ;~ 00D0:0D7A
cs=0x192;eip=0x000d7d; 	T(XOR(bh, bh));	// 1995 xor     bh, bh ;~ 00D0:0D7D
cs=0x192;eip=0x000d7f; 	T(AND(bl, 7));	// 1996 and     bl, 7 ;~ 00D0:0D7F
cs=0x192;eip=0x000d82; 	T(SHL(bx, 1));	// 1997 shl     bx, 1 ;~ 00D0:0D82
cs=0x192;eip=0x000d84; 	T(MOV(bp, *(dw*)(raddr(ds,bx+0x1B72))));	// 1998 mov     bp, [bx+1B72h] ;~ 00D0:0D84
cs=0x192;eip=0x000d88; 	T(MOV(bl, *(raddr(ds,si+0x10))));	// 1999 mov     bl, [si+10h] ;~ 00D0:0D88
cs=0x192;eip=0x000d8b; 	T(AND(bl, 0x38));	// 2000 and     bl, 38h ;~ 00D0:0D8B
cs=0x192;eip=0x000d8e; 	T(SHR(bx, 1));	// 2001 shr     bx, 1 ;~ 00D0:0D8E
cs=0x192;eip=0x000d90; 	T(SHR(bx, 1));	// 2002 shr     bx, 1 ;~ 00D0:0D90
cs=0x192;eip=0x000d92; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1B72))));	// 2003 mov     ax, [bx+1B72h] ;~ 00D0:0D92
cs=0x192;eip=0x000d96; 	X(MOV(word_18638, ax));	// 2004 mov     word_18638, ax ;~ 00D0:0D96
loc_10d99:
	// 4607 
cs=0x192;eip=0x000d99; 	T(LODSW);	// 2007 lodsw ;~ 00D0:0D99
cs=0x192;eip=0x000d9a; 	T(MOV(bl, ah));	// 2008 mov     bl, ah ;~ 00D0:0D9A
cs=0x192;eip=0x000d9c; 	T(OR(al, ah));	// 2009 or      al, ah ;~ 00D0:0D9C
cs=0x192;eip=0x000d9e; 	T(MOV(dh, al));	// 2010 mov     dh, al ;~ 00D0:0D9E
cs=0x192;eip=0x000da0; 	T(SHL(bx, 1));	// 2011 shl     bx, 1 ;~ 00D0:0DA0
cs=0x192;eip=0x000da2; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1972))));	// 2012 mov     ax, [bx+1972h] ;~ 00D0:0DA2
cs=0x192;eip=0x000da6; 	T(SHR(bx, 1));	// 2013 shr     bx, 1 ;~ 00D0:0DA6
cs=0x192;eip=0x000da8; 	T(MOV(cx, ax));	// 2014 mov     cx, ax ;~ 00D0:0DA8
cs=0x192;eip=0x000daa; 	T(AND(cx, bp));	// 2015 and     cx, bp ;~ 00D0:0DAA
cs=0x192;eip=0x000dac; 	T(NOT(ax));	// 2016 not     ax ;~ 00D0:0DAC
cs=0x192;eip=0x000dae; 	T(AND(ax, *(dw*)(raddr(ds,di))));	// 2017 and     ax, [di] ;~ 00D0:0DAE
cs=0x192;eip=0x000db0; 	T(OR(ax, cx));	// 2018 or      ax, cx ;~ 00D0:0DB0
cs=0x192;eip=0x000db2; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 2019 mov     [di], ax ;~ 00D0:0DB2
cs=0x192;eip=0x000db4; 	T(MOV(bl, dh));	// 2020 mov     bl, dh ;~ 00D0:0DB4
cs=0x192;eip=0x000db6; 	T(SHL(bx, 1));	// 2021 shl     bx, 1 ;~ 00D0:0DB6
cs=0x192;eip=0x000db8; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1972))));	// 2022 mov     ax, [bx+1972h] ;~ 00D0:0DB8
cs=0x192;eip=0x000dbc; 	T(SHR(bx, 1));	// 2023 shr     bx, 1 ;~ 00D0:0DBC
cs=0x192;eip=0x000dbe; 	T(MOV(cx, ax));	// 2024 mov     cx, ax ;~ 00D0:0DBE
cs=0x192;eip=0x000dc0; 	T(NOT(cx));	// 2025 not     cx ;~ 00D0:0DC0
cs=0x192;eip=0x000dc2; 	T(AND(cx, word_18638));	// 2026 and     cx, word_18638 ;~ 00D0:0DC2
cs=0x192;eip=0x000dc6; 	T(AND(ax, *(dw*)(raddr(ds,di))));	// 2027 and     ax, [di] ;~ 00D0:0DC6
cs=0x192;eip=0x000dc8; 	T(OR(ax, cx));	// 2028 or      ax, cx ;~ 00D0:0DC8
cs=0x192;eip=0x000dca; 	X(STOSW);	// 2029 stosw ;~ 00D0:0DCA
cs=0x192;eip=0x000dcb; 	T(DEC(dl));	// 2030 dec     dl ;~ 00D0:0DCB
cs=0x192;eip=0x000dcd; 	J(JNZ(loc_10d99));	// 2031 jnz     short loc_10D99 ;~ 00D0:0DCD
loc_10dcf:
	// 4608 
cs=0x192;eip=0x000dcf; 	X(POP(ax));	// 2034 pop     ax ;~ 00D0:0DCF
cs=0x192;eip=0x000dd0; 	X(PUSH(ax));	// 2035 push    ax ;~ 00D0:0DD0
cs=0x192;eip=0x000dd1; 	T(MOV(si, 0x57C5));	// 2036 mov     si, 57C5h ;~ 00D0:0DD1
cs=0x192;eip=0x000dd4; 	T(SUB(ax, 4));	// 2037 sub     ax, 4 ;~ 00D0:0DD4
cs=0x192;eip=0x000dd7; 	T(ADD(ax, ax));	// 2038 add     ax, ax ;~ 00D0:0DD7
cs=0x192;eip=0x000dd9; 	T(MOV(ch, al));	// 2039 mov     ch, al ;~ 00D0:0DD9
cs=0x192;eip=0x000ddb; 	T(AND(ch, 0x3E));	// 2040 and     ch, 3Eh ;~ 00D0:0DDB
cs=0x192;eip=0x000dde; 	T(AND(al, 0x0C0));	// 2041 and     al, 0C0h ;~ 00D0:0DDE
cs=0x192;eip=0x000de0; 	T(MOV(dx, ax));	// 2042 mov     dx, ax ;~ 00D0:0DE0
cs=0x192;eip=0x000de2; 	T(ADD(ax, ax));	// 2043 add     ax, ax ;~ 00D0:0DE2
cs=0x192;eip=0x000de4; 	T(ADD(ax, ax));	// 2044 add     ax, ax ;~ 00D0:0DE4
cs=0x192;eip=0x000de6; 	T(ADD(ax, dx));	// 2045 add     ax, dx ;~ 00D0:0DE6
cs=0x192;eip=0x000de8; 	T(MOV(dl, ch));	// 2046 mov     dl, ch ;~ 00D0:0DE8
cs=0x192;eip=0x000dea; 	T(MOV(dh, 0));	// 2047 mov     dh, 0 ;~ 00D0:0DEA
cs=0x192;eip=0x000dec; 	T(ADD(ax, dx));	// 2048 add     ax, dx ;~ 00D0:0DEC
cs=0x192;eip=0x000dee; 	T(ADD(ax, 8));	// 2049 add     ax, 8 ;~ 00D0:0DEE
cs=0x192;eip=0x000df1; 	T(MOV(di, ax));	// 2050 mov     di, ax ;~ 00D0:0DF1
cs=0x192;eip=0x000df3; 	X(PUSH(es));	// 2051 push    es ;~ 00D0:0DF3
cs=0x192;eip=0x000df4; 	T(MOV(ax, 0x0B800));	// 2052 mov     ax, 0B800h ;~ 00D0:0DF4
cs=0x192;eip=0x000df7; 	T(MOV(es, ax));	// 2053 mov     es, ax ;~ 00D0:0DF7
cs=0x192;eip=0x000df9; 	X(MOVSW);	// 2055 movsw ;~ 00D0:0DF9
cs=0x192;eip=0x000dfa; 	T(ADD(di, 0x1FFE));	// 2056 add     di, 1FFEh ;~ 00D0:0DFA
cs=0x192;eip=0x000dfe; 	X(MOVSW);	// 2057 movsw ;~ 00D0:0DFE
cs=0x192;eip=0x000dff; 	T(ADD(di, 0x0E04E));	// 2058 add     di, 0E04Eh ;~ 00D0:0DFF
cs=0x192;eip=0x000e03; 	X(MOVSW);	// 2059 movsw ;~ 00D0:0E03
cs=0x192;eip=0x000e04; 	T(ADD(di, 0x1FFE));	// 2060 add     di, 1FFEh ;~ 00D0:0E04
cs=0x192;eip=0x000e08; 	X(MOVSW);	// 2061 movsw ;~ 00D0:0E08
cs=0x192;eip=0x000e09; 	T(ADD(di, 0x0E04E));	// 2062 add     di, 0E04Eh ;~ 00D0:0E09
cs=0x192;eip=0x000e0d; 	X(MOVSW);	// 2063 movsw ;~ 00D0:0E0D
cs=0x192;eip=0x000e0e; 	T(ADD(di, 0x1FFE));	// 2064 add     di, 1FFEh ;~ 00D0:0E0E
cs=0x192;eip=0x000e12; 	X(MOVSW);	// 2065 movsw ;~ 00D0:0E12
cs=0x192;eip=0x000e13; 	T(ADD(di, 0x0E04E));	// 2066 add     di, 0E04Eh ;~ 00D0:0E13
cs=0x192;eip=0x000e17; 	X(MOVSW);	// 2067 movsw ;~ 00D0:0E17
cs=0x192;eip=0x000e18; 	T(ADD(di, 0x1FFE));	// 2068 add     di, 1FFEh ;~ 00D0:0E18
cs=0x192;eip=0x000e1c; 	X(MOVSW);	// 2069 movsw ;~ 00D0:0E1C
cs=0x192;eip=0x000e1d; 	T(ADD(di, 0x0E04E));	// 2070 add     di, 0E04Eh ;~ 00D0:0E1D
cs=0x192;eip=0x000e21; 	X(POP(es));	// 2071 pop     es ;~ 00D0:0E21
loc_10e22:
	// 4609 
cs=0x192;eip=0x000e22; 	X(POP(di));	// 2075 pop     di ;~ 00D0:0E22
loc_10e23:
	// 4610 
cs=0x192;eip=0x000e23; 	T(TEST(di, 1));	// 2078 test    di, 1 ;~ 00D0:0E23
cs=0x192;eip=0x000e27; 	J(JZ(loc_10e2e));	// 2079 jz      short loc_10E2E ;~ 00D0:0E27
cs=0x192;eip=0x000e29; 	X(POP(di));	// 2080 pop     di ;~ 00D0:0E29
cs=0x192;eip=0x000e2a; 	X(POP(cx));	// 2081 pop     cx ;~ 00D0:0E2A
cs=0x192;eip=0x000e2b; 	J(JMP(loc_10c1d));	// 2082 jmp     loc_10C1D ;~ 00D0:0E2B
loc_10e2e:
	// 4611 
cs=0x192;eip=0x000e2e; 	T(INC(di));	// 2086 inc     di ;~ 00D0:0E2E
cs=0x192;eip=0x000e2f; 	J(JMP(loc_10c28));	// 2087 jmp     loc_10C28 ;~ 00D0:0E2F
loc_10e32:
	// 4612 
cs=0x192;eip=0x000e32; 	T(ADD(ax, 0x791));	// 2091 add     ax, 791h ;~ 00D0:0E32
cs=0x192;eip=0x000e35; 	T(MOV(si, ax));	// 2092 mov     si, ax ;~ 00D0:0E35
cs=0x192;eip=0x000e37; 	T(MOV(ax, di));	// 2093 mov     ax, di ;~ 00D0:0E37
cs=0x192;eip=0x000e39; 	T(SUB(ax, 4));	// 2094 sub     ax, 4 ;~ 00D0:0E39
cs=0x192;eip=0x000e3c; 	T(ADD(ax, ax));	// 2095 add     ax, ax ;~ 00D0:0E3C
cs=0x192;eip=0x000e3e; 	T(MOV(ch, al));	// 2096 mov     ch, al ;~ 00D0:0E3E
cs=0x192;eip=0x000e40; 	T(AND(ch, 0x3E));	// 2097 and     ch, 3Eh ;~ 00D0:0E40
cs=0x192;eip=0x000e43; 	T(AND(al, 0x0C0));	// 2098 and     al, 0C0h ;~ 00D0:0E43
cs=0x192;eip=0x000e45; 	T(MOV(dx, ax));	// 2099 mov     dx, ax ;~ 00D0:0E45
cs=0x192;eip=0x000e47; 	T(ADD(ax, ax));	// 2100 add     ax, ax ;~ 00D0:0E47
cs=0x192;eip=0x000e49; 	T(ADD(ax, ax));	// 2101 add     ax, ax ;~ 00D0:0E49
cs=0x192;eip=0x000e4b; 	T(ADD(ax, dx));	// 2102 add     ax, dx ;~ 00D0:0E4B
cs=0x192;eip=0x000e4d; 	T(MOV(dl, ch));	// 2103 mov     dl, ch ;~ 00D0:0E4D
cs=0x192;eip=0x000e4f; 	T(MOV(dh, 0));	// 2104 mov     dh, 0 ;~ 00D0:0E4F
cs=0x192;eip=0x000e51; 	T(ADD(ax, dx));	// 2105 add     ax, dx ;~ 00D0:0E51
cs=0x192;eip=0x000e53; 	T(ADD(ax, 8));	// 2106 add     ax, 8 ;~ 00D0:0E53
cs=0x192;eip=0x000e56; 	T(MOV(di, ax));	// 2107 mov     di, ax ;~ 00D0:0E56
cs=0x192;eip=0x000e58; 	T(MOV(al, 2));	// 2108 mov     al, 2 ;~ 00D0:0E58
cs=0x192;eip=0x000e5a; 	J(CALL(sub_1054a,0));	// 2109 call    sub_1054A ;~ 00D0:0E5A
cs=0x192;eip=0x000e5d; 	J(JMP(loc_10e22));	// 2110 jmp     short loc_10E22 ;~ 00D0:0E5D
sub_10e5f:
	// 2117 
cs=0x192;eip=0x000e5f; 	T(MOV(si, 0x51A3));	// 2119 mov     si, 51A3h ;~ 00D0:0E5F
sub_10e62:
	// 2126 
cs=0x192;eip=0x000e62; 	X(PUSH(di));	// 2127 push    di ;~ 00D0:0E62
ret_d0_e63:
	// 4613 
cs=0x192;eip=0x000e63; 	T(MOV(di, 0x57C5));	// 2128 mov     di, 57C5h ;~ 00D0:0E63
cs=0x192;eip=0x000e66; 	T(MOV(bl, cl));	// 2129 mov     bl, cl ;~ 00D0:0E66
cs=0x192;eip=0x000e68; 	T(XOR(bh, bh));	// 2130 xor     bh, bh ;~ 00D0:0E68
cs=0x192;eip=0x000e6a; 	T(SHL(bx, 1));	// 2131 shl     bx, 1 ;~ 00D0:0E6A
cs=0x192;eip=0x000e6c; 	T(MOV(bp, *(dw*)(raddr(ds,bx+0x1B72))));	// 2132 mov     bp, [bx+1B72h] ;~ 00D0:0E6C
cs=0x192;eip=0x000e70; 	T(MOV(dh, ah));	// 2133 mov     dh, ah ;~ 00D0:0E70
cs=0x192;eip=0x000e72; 	T(MOV(dl, 8));	// 2134 mov     dl, 8 ;~ 00D0:0E72
cs=0x192;eip=0x000e74; 	T(XOR(ah, ah));	// 2135 xor     ah, ah ;~ 00D0:0E74
cs=0x192;eip=0x000e76; 	T(SHL(ax, 1));	// 2136 shl     ax, 1 ;~ 00D0:0E76
cs=0x192;eip=0x000e78; 	T(SHL(ax, 1));	// 2137 shl     ax, 1 ;~ 00D0:0E78
cs=0x192;eip=0x000e7a; 	T(SHL(ax, 1));	// 2138 shl     ax, 1 ;~ 00D0:0E7A
cs=0x192;eip=0x000e7c; 	T(ADD(si, ax));	// 2139 add     si, ax ;~ 00D0:0E7C
loc_10e7e:
	// 4614 
cs=0x192;eip=0x000e7e; 	T(MOV(bl, *(raddr(ds,si))));	// 2142 mov     bl, [si] ;~ 00D0:0E7E
cs=0x192;eip=0x000e80; 	T(INC(si));	// 2143 inc     si ;~ 00D0:0E80
cs=0x192;eip=0x000e81; 	T(OR(dh, dh));	// 2144 or      dh, dh ;~ 00D0:0E81
cs=0x192;eip=0x000e83; 	J(JZ(loc_10e89));	// 2145 jz      short loc_10E89 ;~ 00D0:0E83
cs=0x192;eip=0x000e85; 	T(MOV(bl, *(raddr(ds,bx+0x3E3E))));	// 2146 mov     bl, [bx+3E3Eh] ;~ 00D0:0E85
loc_10e89:
	// 4615 
cs=0x192;eip=0x000e89; 	T(SHL(bx, 1));	// 2149 shl     bx, 1 ;~ 00D0:0E89
cs=0x192;eip=0x000e8b; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1972))));	// 2150 mov     ax, [bx+1972h] ;~ 00D0:0E8B
cs=0x192;eip=0x000e8f; 	T(SHR(bx, 1));	// 2151 shr     bx, 1 ;~ 00D0:0E8F
cs=0x192;eip=0x000e91; 	T(MOV(cx, ax));	// 2152 mov     cx, ax ;~ 00D0:0E91
cs=0x192;eip=0x000e93; 	T(NOT(ax));	// 2153 not     ax ;~ 00D0:0E93
cs=0x192;eip=0x000e95; 	T(AND(cx, bp));	// 2154 and     cx, bp ;~ 00D0:0E95
cs=0x192;eip=0x000e97; 	T(AND(ax, *(dw*)(raddr(ds,di))));	// 2155 and     ax, [di] ;~ 00D0:0E97
cs=0x192;eip=0x000e99; 	T(OR(ax, cx));	// 2156 or      ax, cx ;~ 00D0:0E99
cs=0x192;eip=0x000e9b; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 2157 mov     [di], ax ;~ 00D0:0E9B
cs=0x192;eip=0x000e9d; 	T(OR(bl, *(raddr(ds,bx+0x3D3E))));	// 2158 or      bl, [bx+3D3Eh] ;~ 00D0:0E9D
cs=0x192;eip=0x000ea1; 	T(SHL(bx, 1));	// 2159 shl     bx, 1 ;~ 00D0:0EA1
cs=0x192;eip=0x000ea3; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x1972))));	// 2160 mov     ax, [bx+1972h] ;~ 00D0:0EA3
cs=0x192;eip=0x000ea7; 	T(SHR(bx, 1));	// 2161 shr     bx, 1 ;~ 00D0:0EA7
cs=0x192;eip=0x000ea9; 	T(MOV(cx, ax));	// 2162 mov     cx, ax ;~ 00D0:0EA9
cs=0x192;eip=0x000eab; 	T(NOT(cx));	// 2163 not     cx ;~ 00D0:0EAB
cs=0x192;eip=0x000ead; 	T(AND(cx, word_18638));	// 2164 and     cx, word_18638 ;~ 00D0:0EAD
cs=0x192;eip=0x000eb1; 	T(AND(ax, *(dw*)(raddr(ds,di))));	// 2165 and     ax, [di] ;~ 00D0:0EB1
cs=0x192;eip=0x000eb3; 	T(OR(ax, cx));	// 2166 or      ax, cx ;~ 00D0:0EB3
cs=0x192;eip=0x000eb5; 	X(STOSW);	// 2167 stosw ;~ 00D0:0EB5
cs=0x192;eip=0x000eb6; 	T(DEC(dl));	// 2168 dec     dl ;~ 00D0:0EB6
cs=0x192;eip=0x000eb8; 	J(JNZ(loc_10e7e));	// 2169 jnz     short loc_10E7E ;~ 00D0:0EB8
cs=0x192;eip=0x000eba; 	X(POP(di));	// 2170 pop     di ;~ 00D0:0EBA
cs=0x192;eip=0x000ebb; 	J(RETN(0));	// 2171 retn ;~ 00D0:0EBB
sub_10ebc:
	// 2178 
cs=0x192;eip=0x000ebc; 	J(CALL(sub_10bdd,0));	// 2180 call    sub_10BDD ;~ 00D0:0EBC
ret_d0_ebf:
	// 4616 
cs=0x192;eip=0x000ebf; 	T(MOV(di, 4));	// 2181 mov     di, 4 ;~ 00D0:0EBF
cs=0x192;eip=0x000ec2; 	T(XOR(ax, ax));	// 2182 xor     ax, ax ;~ 00D0:0EC2
cs=0x192;eip=0x000ec4; 	T(MOV(cx, 0x120));	// 2183 mov     cx, 120h ;~ 00D0:0EC4
cs=0x192;eip=0x000ec7; 	T(CLD);	// 2184 cld ;~ 00D0:0EC7
	// 2185 rep stosw ;~ 00D0:0EC8
cs=0x192;eip=0x000ec8; 	X(	REP STOSW);	// 2185 rep stosw ;~ 00D0:0EC8
cs=0x192;eip=0x000eca; 	T(MOV(bx, word_14a1c));	// 2186 mov     bx, word_14A1C ;~ 00D0:0ECA
cs=0x192;eip=0x000ece; 	T(CMP(*(raddr(ds,bx)), 0x3A));	// 2187 cmp     byte ptr [bx], 3Ah ; ':' ;~ 00D0:0ECE
cs=0x192;eip=0x000ed1; 	X(PUSH(bx));	// 2188 push    bx ;~ 00D0:0ED1
cs=0x192;eip=0x000ed2; 	J(JNZ(loc_10ee3));	// 2189 jnz     short loc_10EE3 ;~ 00D0:0ED2
cs=0x192;eip=0x000ed4; 	T(MOV(cx, 6));	// 2190 mov     cx, 6 ;~ 00D0:0ED4
cs=0x192;eip=0x000ed7; 	T(MOV(si, 0x57FA));	// 2191 mov     si, 57FAh ;~ 00D0:0ED7
cs=0x192;eip=0x000eda; 	T(MOV(bx, 0x4E5));	// 2192 mov     bx, 4E5h ;~ 00D0:0EDA
cs=0x192;eip=0x000edd; 	J(CALL(sub_10bf7,0));	// 2193 call    sub_10BF7 ;~ 00D0:0EDD
cs=0x192;eip=0x000ee0; 	J(JMP(loc_10ef4));	// 2194 jmp     short loc_10EF4 ;~ 00D0:0EE0
loc_10ee3:
	// 4617 
cs=0x192;eip=0x000ee3; 	T(CMP(*(raddr(ds,bx)), 0x3C));	// 2200 cmp     byte ptr [bx], 3Ch ; '<' ;~ 00D0:0EE3
cs=0x192;eip=0x000ee6; 	J(JNZ(loc_10ef4));	// 2201 jnz     short loc_10EF4 ;~ 00D0:0EE6
cs=0x192;eip=0x000ee8; 	T(MOV(cx, 6));	// 2202 mov     cx, 6 ;~ 00D0:0EE8
cs=0x192;eip=0x000eeb; 	T(MOV(si, 0x57FA));	// 2203 mov     si, 57FAh ;~ 00D0:0EEB
cs=0x192;eip=0x000eee; 	T(MOV(bx, 0x4F0));	// 2204 mov     bx, 4F0h ;~ 00D0:0EEE
cs=0x192;eip=0x000ef1; 	J(CALL(sub_10bf7,0));	// 2205 call    sub_10BF7 ;~ 00D0:0EF1
loc_10ef4:
	// 4618 
cs=0x192;eip=0x000ef4; 	X(POP(bx));	// 2209 pop     bx ;~ 00D0:0EF4
cs=0x192;eip=0x000ef5; 	T(CMP(*(raddr(ds,bx)), 0x9E));	// 2210 cmp     byte ptr [bx], 9Eh ; 'ž' ;~ 00D0:0EF5
cs=0x192;eip=0x000ef8; 	J(JNZ(loc_10f30));	// 2211 jnz     short loc_10F30 ;~ 00D0:0EF8
cs=0x192;eip=0x000efa; 	T(MOV(si, 0x57DE));	// 2212 mov     si, 57DEh ;~ 00D0:0EFA
cs=0x192;eip=0x000efd; 	J(CALL(sub_1108d,0));	// 2213 call    sub_1108D ;~ 00D0:0EFD
cs=0x192;eip=0x000f00; 	T(MOV(al, byte_1863c));	// 2214 mov     al, byte_1863C ;~ 00D0:0F00
cs=0x192;eip=0x000f03; 	T(OR(al, al));	// 2215 or      al, al ;~ 00D0:0F03
cs=0x192;eip=0x000f05; 	J(JZ(loc_10f1c));	// 2216 jz      short loc_10F1C ;~ 00D0:0F05
cs=0x192;eip=0x000f07; 	X(INC(byte_1863d));	// 2217 inc     byte_1863D ;~ 00D0:0F07
cs=0x192;eip=0x000f0b; 	X(INC(word_1863a));	// 2218 inc     word_1863A ;~ 00D0:0F0B
cs=0x192;eip=0x000f0f; 	T(CMP(byte_1863d, 0x13));	// 2219 cmp     byte_1863D, 13h ;~ 00D0:0F0F
cs=0x192;eip=0x000f14; 	J(JNZ(loc_10f2a));	// 2220 jnz     short loc_10F2A ;~ 00D0:0F14
cs=0x192;eip=0x000f16; 	X(DEC(byte_1863c));	// 2221 dec     byte_1863C ;~ 00D0:0F16
cs=0x192;eip=0x000f1a; 	J(JMP(loc_10f2a));	// 2222 jmp     short loc_10F2A ;~ 00D0:0F1A
loc_10f1c:
	// 4619 
cs=0x192;eip=0x000f1c; 	X(DEC(word_1863a));	// 2226 dec     word_1863A ;~ 00D0:0F1C
cs=0x192;eip=0x000f20; 	X(DEC(byte_1863d));	// 2227 dec     byte_1863D ;~ 00D0:0F20
cs=0x192;eip=0x000f24; 	J(JNZ(loc_10f2a));	// 2228 jnz     short loc_10F2A ;~ 00D0:0F24
cs=0x192;eip=0x000f26; 	X(INC(byte_1863c));	// 2229 inc     byte_1863C ;~ 00D0:0F26
loc_10f2a:
	// 4620 
cs=0x192;eip=0x000f2a; 	T(MOV(si, 0x57E2));	// 2233 mov     si, 57E2h ;~ 00D0:0F2A
cs=0x192;eip=0x000f2d; 	J(CALL(sub_1108d,0));	// 2234 call    sub_1108D ;~ 00D0:0F2D
loc_10f30:
	// 4621 
cs=0x192;eip=0x000f30; 	T(MOV(al, byte_14cd4));	// 2237 mov     al, byte_14CD4 ;~ 00D0:0F30
cs=0x192;eip=0x000f33; 	T(OR(al, al));	// 2238 or      al, al ;~ 00D0:0F33
cs=0x192;eip=0x000f35; 	J(JZ(loc_10f99));	// 2239 jz      short loc_10F99 ;~ 00D0:0F35
cs=0x192;eip=0x000f37; 	X(DEC(byte_14cd5));	// 2240 dec     byte_14CD5 ;~ 00D0:0F37
cs=0x192;eip=0x000f3b; 	J(JNZ(loc_10f50));	// 2241 jnz     short loc_10F50 ;~ 00D0:0F3B
cs=0x192;eip=0x000f3d; 	J(CALL(sub_1107c,0));	// 2242 call    sub_1107C ;~ 00D0:0F3D
cs=0x192;eip=0x000f40; 	X(MOV(byte_14cd5, al));	// 2243 mov     byte_14CD5, al ;~ 00D0:0F40
cs=0x192;eip=0x000f43; 	T(AND(al, 3));	// 2244 and     al, 3 ;~ 00D0:0F43
cs=0x192;eip=0x000f45; 	J(JNZ(loc_10f57));	// 2245 jnz     short loc_10F57 ;~ 00D0:0F45
cs=0x192;eip=0x000f47; 	J(CALL(sub_1107c,0));	// 2246 call    sub_1107C ;~ 00D0:0F47
cs=0x192;eip=0x000f4a; 	T(AND(al, 3));	// 2247 and     al, 3 ;~ 00D0:0F4A
cs=0x192;eip=0x000f4c; 	T(ADD(al, 4));	// 2248 add     al, 4 ;~ 00D0:0F4C
cs=0x192;eip=0x000f4e; 	J(JMP(loc_10f66));	// 2249 jmp     short loc_10F66 ;~ 00D0:0F4E
loc_10f50:
	// 4622 
cs=0x192;eip=0x000f50; 	T(TEST(byte_14cd6, 2));	// 2253 test    byte_14CD6, 2 ;~ 00D0:0F50
cs=0x192;eip=0x000f55; 	J(JNZ(loc_10f66));	// 2254 jnz     short loc_10F66 ;~ 00D0:0F55
loc_10f57:
	// 4623 
cs=0x192;eip=0x000f57; 	J(CALL(sub_1107c,0));	// 2257 call    sub_1107C ;~ 00D0:0F57
cs=0x192;eip=0x000f5a; 	T(AND(al, 3));	// 2258 and     al, 3 ;~ 00D0:0F5A
cs=0x192;eip=0x000f5c; 	T(CMP(al, byte_14cd6));	// 2259 cmp     al, byte_14CD6 ;~ 00D0:0F5C
cs=0x192;eip=0x000f60; 	J(JNZ(loc_10f66));	// 2260 jnz     short loc_10F66 ;~ 00D0:0F60
cs=0x192;eip=0x000f62; 	T(INC(al));	// 2261 inc     al ;~ 00D0:0F62
cs=0x192;eip=0x000f64; 	T(AND(al, 3));	// 2262 and     al, 3 ;~ 00D0:0F64
loc_10f66:
	// 4624 
cs=0x192;eip=0x000f66; 	X(MOV(byte_14cd6, al));	// 2266 mov     byte_14CD6, al ;~ 00D0:0F66
cs=0x192;eip=0x000f69; 	T(ADD(al, al));	// 2267 add     al, al ;~ 00D0:0F69
cs=0x192;eip=0x000f6b; 	T(ADD(al, al));	// 2268 add     al, al ;~ 00D0:0F6B
cs=0x192;eip=0x000f6d; 	T(MOV(ah, al));	// 2269 mov     ah, al ;~ 00D0:0F6D
cs=0x192;eip=0x000f6f; 	T(ADD(al, al));	// 2270 add     al, al ;~ 00D0:0F6F
cs=0x192;eip=0x000f71; 	T(ADD(al, ah));	// 2271 add     al, ah ;~ 00D0:0F71
cs=0x192;eip=0x000f73; 	T(XOR(ah, ah));	// 2272 xor     ah, ah ;~ 00D0:0F73
cs=0x192;eip=0x000f75; 	T(ADD(ax, 0x1E14));	// 2273 add     ax, 1E14h ;~ 00D0:0F75
cs=0x192;eip=0x000f78; 	T(MOV(si, ax));	// 2274 mov     si, ax ;~ 00D0:0F78
cs=0x192;eip=0x000f7a; 	T(MOV(di, 0x2C9));	// 2275 mov     di, 2C9h ;~ 00D0:0F7A
cs=0x192;eip=0x000f7d; 	T(MOV(bx, 0x89));	// 2276 mov     bx, 89h ; '‰' ;~ 00D0:0F7D
cs=0x192;eip=0x000f80; 	T(MOV(cx, 3));	// 2277 mov     cx, 3 ;~ 00D0:0F80
loc_10f83:
	// 4625 
cs=0x192;eip=0x000f83; 	X(PUSH(cx));	// 2280 push    cx ;~ 00D0:0F83
cs=0x192;eip=0x000f84; 	T(MOV(cx, 2));	// 2281 mov     cx, 2 ;~ 00D0:0F84
loc_10f87:
	// 4626 
cs=0x192;eip=0x000f87; 	X(MOVSW);	// 2284 movsw ;~ 00D0:0F87
cs=0x192;eip=0x000f88; 	X(MOV(*(dw*)(raddr(ds,bx)), 0x101));	// 2285 mov     word ptr [bx], 101h ;~ 00D0:0F88
cs=0x192;eip=0x000f8c; 	T(INC(bx));	// 2286 inc     bx ;~ 00D0:0F8C
cs=0x192;eip=0x000f8d; 	T(INC(bx));	// 2287 inc     bx ;~ 00D0:0F8D
cs=0x192;eip=0x000f8e; 	J(LOOP(loc_10f87));	// 2288 loop    loc_10F87 ;~ 00D0:0F8E
cs=0x192;eip=0x000f90; 	X(POP(cx));	// 2289 pop     cx ;~ 00D0:0F90
cs=0x192;eip=0x000f91; 	T(ADD(bx, 0x1C));	// 2290 add     bx, 1Ch ;~ 00D0:0F91
cs=0x192;eip=0x000f94; 	T(ADD(di, 0x1C));	// 2291 add     di, 1Ch ;~ 00D0:0F94
cs=0x192;eip=0x000f97; 	J(LOOP(loc_10f83));	// 2292 loop    loc_10F83 ;~ 00D0:0F97
loc_10f99:
	// 4627 
cs=0x192;eip=0x000f99; 	T(CMP(byte_14a35, 2));	// 2295 cmp     byte_14A35, 2 ;~ 00D0:0F99
cs=0x192;eip=0x000f9e; 	J(JZ(loc_10fe5));	// 2296 jz      short loc_10FE5 ;~ 00D0:0F9E
cs=0x192;eip=0x000fa0; 	T(MOV(bx, 0x1BE8));	// 2297 mov     bx, 1BE8h ;~ 00D0:0FA0
cs=0x192;eip=0x000fa3; 	X(DEC(byte_14a40));	// 2298 dec     byte_14A40 ;~ 00D0:0FA3
cs=0x192;eip=0x000fa7; 	J(JNZ(loc_10fe5));	// 2299 jnz     short loc_10FE5 ;~ 00D0:0FA7
cs=0x192;eip=0x000fa9; 	X(MOV(byte_14a40, 0x1A));	// 2300 mov     byte_14A40, 1Ah ;~ 00D0:0FA9
cs=0x192;eip=0x000fae; 	X(DEC(*(raddr(ds,bx))));	// 2301 dec     byte ptr [bx] ;~ 00D0:0FAE
cs=0x192;eip=0x000fb0; 	T(MOV(al, 0x2F));	// 2302 mov     al, 2Fh ; '/' ;~ 00D0:0FB0
cs=0x192;eip=0x000fb2; 	T(CMP(al, *(raddr(ds,bx))));	// 2303 cmp     al, [bx] ;~ 00D0:0FB2
cs=0x192;eip=0x000fb4; 	J(JNZ(loc_10fdf));	// 2304 jnz     short loc_10FDF ;~ 00D0:0FB4
cs=0x192;eip=0x000fb6; 	X(MOV(*(raddr(ds,bx)), 0x39));	// 2305 mov     byte ptr [bx], 39h ; '9' ;~ 00D0:0FB6
cs=0x192;eip=0x000fb9; 	T(DEC(bx));	// 2306 dec     bx ;~ 00D0:0FB9
cs=0x192;eip=0x000fba; 	X(DEC(*(raddr(ds,bx))));	// 2307 dec     byte ptr [bx] ;~ 00D0:0FBA
cs=0x192;eip=0x000fbc; 	T(CMP(al, *(raddr(ds,bx))));	// 2308 cmp     al, [bx] ;~ 00D0:0FBC
cs=0x192;eip=0x000fbe; 	J(JNZ(loc_10fdf));	// 2309 jnz     short loc_10FDF ;~ 00D0:0FBE
cs=0x192;eip=0x000fc0; 	X(MOV(*(raddr(ds,bx)), 0x39));	// 2310 mov     byte ptr [bx], 39h ; '9' ;~ 00D0:0FC0
cs=0x192;eip=0x000fc3; 	T(DEC(bx));	// 2311 dec     bx ;~ 00D0:0FC3
cs=0x192;eip=0x000fc4; 	X(DEC(*(raddr(ds,bx))));	// 2312 dec     byte ptr [bx] ;~ 00D0:0FC4
cs=0x192;eip=0x000fc6; 	T(CMP(*(raddr(ds,bx)), 0x30));	// 2313 cmp     byte ptr [bx], 30h ; '0' ;~ 00D0:0FC6
cs=0x192;eip=0x000fc9; 	J(JNZ(loc_10fd3));	// 2314 jnz     short loc_10FD3 ;~ 00D0:0FC9
cs=0x192;eip=0x000fcb; 	X(PUSH(bx));	// 2315 push    bx ;~ 00D0:0FCB
cs=0x192;eip=0x000fcc; 	T(MOV(si, 0x57E6));	// 2316 mov     si, 57E6h ;~ 00D0:0FCC
cs=0x192;eip=0x000fcf; 	J(CALL(sub_104b7,0));	// 2317 call    sub_104B7 ;~ 00D0:0FCF
cs=0x192;eip=0x000fd2; 	X(POP(bx));	// 2318 pop     bx ;~ 00D0:0FD2
loc_10fd3:
	// 4628 
cs=0x192;eip=0x000fd3; 	T(CMP(*(raddr(ds,bx)), 0x2F));	// 2321 cmp     byte ptr [bx], 2Fh ; '/' ;~ 00D0:0FD3
cs=0x192;eip=0x000fd6; 	J(JNZ(loc_10fdf));	// 2322 jnz     short loc_10FDF ;~ 00D0:0FD6
cs=0x192;eip=0x000fd8; 	X(MOV(byte_14a35, 2));	// 2323 mov     byte_14A35, 2 ;~ 00D0:0FD8
cs=0x192;eip=0x000fdd; 	J(JMP(loc_10fe5));	// 2324 jmp     short loc_10FE5 ;~ 00D0:0FDD
loc_10fdf:
	// 4629 
cs=0x192;eip=0x000fdf; 	T(MOV(si, 0x1BE1));	// 2329 mov     si, 1BE1h ;~ 00D0:0FDF
cs=0x192;eip=0x000fe2; 	J(CALL(sub_104b7,0));	// 2330 call    sub_104B7 ;~ 00D0:0FE2
loc_10fe5:
	// 4630 
cs=0x192;eip=0x000fe5; 	T(CMP(byte_14a3a, 0));	// 2334 cmp     byte_14A3A, 0 ;~ 00D0:0FE5
cs=0x192;eip=0x000fea; 	J(JZ(loc_1100d));	// 2335 jz      short loc_1100D ;~ 00D0:0FEA
cs=0x192;eip=0x000fec; 	T(MOV(al, byte_1781b));	// 2336 mov     al, byte_1781B ;~ 00D0:0FEC
loc_10fef:
	// 4631 
cs=0x192;eip=0x000fef; 	T(INC(al));	// 2339 inc     al ;~ 00D0:0FEF
cs=0x192;eip=0x000ff1; 	T(CMP(al, 0x16));	// 2340 cmp     al, 16h ;~ 00D0:0FF1
cs=0x192;eip=0x000ff3; 	J(JZ(loc_10fef));	// 2341 jz      short loc_10FEF ;~ 00D0:0FF3
cs=0x192;eip=0x000ff5; 	T(CMP(al, 0x18));	// 2342 cmp     al, 18h ;~ 00D0:0FF5
cs=0x192;eip=0x000ff7; 	J(JNZ(loc_10ffb));	// 2343 jnz     short loc_10FFB ;~ 00D0:0FF7
cs=0x192;eip=0x000ff9; 	T(MOV(al, 0x13));	// 2344 mov     al, 13h ;~ 00D0:0FF9
loc_10ffb:
	// 4632 
cs=0x192;eip=0x000ffb; 	X(MOV(byte_1781b, al));	// 2347 mov     byte_1781B, al ;~ 00D0:0FFB
cs=0x192;eip=0x000ffe; 	X(MOV(byte_1782c, al));	// 2348 mov     byte_1782C, al ;~ 00D0:0FFE
cs=0x192;eip=0x001001; 	X(MOV(byte_1783d, al));	// 2349 mov     byte_1783D, al ;~ 00D0:1001
cs=0x192;eip=0x001004; 	T(MOV(di, 0x198));	// 2350 mov     di, 198h ;~ 00D0:1004
cs=0x192;eip=0x001007; 	T(MOV(al, 1));	// 2351 mov     al, 1 ;~ 00D0:1007
cs=0x192;eip=0x001009; 	T(CLD);	// 2352 cld ;~ 00D0:1009
cs=0x192;eip=0x00100a; 	X(STOSB);	// 2353 stosb ;~ 00D0:100A
cs=0x192;eip=0x00100b; 	X(STOSB);	// 2354 stosb ;~ 00D0:100B
cs=0x192;eip=0x00100c; 	X(STOSB);	// 2355 stosb ;~ 00D0:100C
loc_1100d:
	// 4633 
cs=0x192;eip=0x00100d; 	T(MOV(bx, word_14a1c));	// 2358 mov     bx, word_14A1C ;~ 00D0:100D
cs=0x192;eip=0x001011; 	T(MOV(al, *(raddr(ds,bx))));	// 2359 mov     al, [bx] ;~ 00D0:1011
cs=0x192;eip=0x001013; 	T(CMP(byte_14a2a, al));	// 2360 cmp     byte_14A2A, al ;~ 00D0:1013
cs=0x192;eip=0x001017; 	J(JNZ(locret_11049));	// 2361 jnz     short locret_11049 ;~ 00D0:1017
cs=0x192;eip=0x001019; 	T(MOV(bx, 0x2CB));	// 2362 mov     bx, 2CBh ;~ 00D0:1019
cs=0x192;eip=0x00101c; 	T(MOV(di, 0x8B));	// 2363 mov     di, 8Bh ; '‹' ;~ 00D0:101C
cs=0x192;eip=0x00101f; 	T(MOV(cx, 0x0A));	// 2364 mov     cx, 0Ah ;~ 00D0:101F
loc_11022:
	// 4634 
cs=0x192;eip=0x001022; 	J(CALL(sub_1107c,0));	// 2367 call    sub_1107C ;~ 00D0:1022
cs=0x192;eip=0x001025; 	T(AND(al, 3));	// 2368 and     al, 3 ;~ 00D0:1025
cs=0x192;eip=0x001027; 	T(ADD(al, 0x4F));	// 2369 add     al, 4Fh ; 'O' ;~ 00D0:1027
cs=0x192;eip=0x001029; 	X(MOV(*(raddr(ds,bx)), al));	// 2370 mov     [bx], al ;~ 00D0:1029
cs=0x192;eip=0x00102b; 	T(INC(bx));	// 2371 inc     bx ;~ 00D0:102B
cs=0x192;eip=0x00102c; 	T(INC(bx));	// 2372 inc     bx ;~ 00D0:102C
cs=0x192;eip=0x00102d; 	X(MOV(*(raddr(ds,di)), 1));	// 2373 mov     byte ptr [di], 1 ;~ 00D0:102D
cs=0x192;eip=0x001030; 	T(INC(di));	// 2374 inc     di ;~ 00D0:1030
cs=0x192;eip=0x001031; 	T(INC(di));	// 2375 inc     di ;~ 00D0:1031
cs=0x192;eip=0x001032; 	X(MOV(*(raddr(ds,di)), 1));	// 2376 mov     byte ptr [di], 1 ;~ 00D0:1032
cs=0x192;eip=0x001035; 	J(CALL(sub_1107c,0));	// 2377 call    sub_1107C ;~ 00D0:1035
cs=0x192;eip=0x001038; 	T(AND(al, 3));	// 2378 and     al, 3 ;~ 00D0:1038
cs=0x192;eip=0x00103a; 	T(ADD(al, 0x52));	// 2379 add     al, 52h ; 'R' ;~ 00D0:103A
cs=0x192;eip=0x00103c; 	X(MOV(*(raddr(ds,bx)), al));	// 2380 mov     [bx], al ;~ 00D0:103C
cs=0x192;eip=0x00103e; 	T(ADD(bx, 0x1E));	// 2381 add     bx, 1Eh ;~ 00D0:103E
cs=0x192;eip=0x001041; 	T(ADD(di, 0x1E));	// 2382 add     di, 1Eh ;~ 00D0:1041
cs=0x192;eip=0x001044; 	J(LOOP(loc_11022));	// 2383 loop    loc_11022 ;~ 00D0:1044
cs=0x192;eip=0x001046; 	J(CALL(sub_1107c,0));	// 2384 call    sub_1107C ;~ 00D0:1046
locret_11049:
	// 4635 
cs=0x192;eip=0x001049; 	J(RETN(0));	// 2387 retn ;~ 00D0:1049
sub_1104a:
	// 2394 
cs=0x192;eip=0x00104a; 	T(MOV(bx, word_14a14));	// 2395 mov     bx, word_14A14 ;~ 00D0:104A
ret_d0_104e:
	// 4636 
cs=0x192;eip=0x00104e; 	T(ADD(bx, 0x4E6));	// 2396 add     bx, 4E6h ;~ 00D0:104E
cs=0x192;eip=0x001052; 	T(MOV(al, 0x28));	// 2397 mov     al, 28h ; '(' ;~ 00D0:1052
cs=0x192;eip=0x001054; 	T(CMP(*(raddr(ds,bx)), 0x8A));	// 2398 cmp     byte ptr [bx], 8Ah ; 'Š' ;~ 00D0:1054
cs=0x192;eip=0x001057; 	J(JNZ(loc_1105b));	// 2399 jnz     short loc_1105B ;~ 00D0:1057
cs=0x192;eip=0x001059; 	T(MOV(al, 0x10));	// 2400 mov     al, 10h ;~ 00D0:1059
loc_1105b:
	// 4637 
cs=0x192;eip=0x00105b; 	X(MOV(byte_17fbe, al));	// 2403 mov     byte_17FBE, al ;~ 00D0:105B
cs=0x192;eip=0x00105e; 	X(MOV(byte_17fcf, al));	// 2404 mov     byte_17FCF, al ;~ 00D0:105E
cs=0x192;eip=0x001061; 	X(MOV(byte_17fe0, al));	// 2405 mov     byte_17FE0, al ;~ 00D0:1061
cs=0x192;eip=0x001064; 	T(CMP(byte_14a33, 0));	// 2406 cmp     byte_14A33, 0 ;~ 00D0:1064
cs=0x192;eip=0x001069; 	J(JZ(locret_1107b));	// 2407 jz      short locret_1107B ;~ 00D0:1069
loc_1106b:
	// 4638 
cs=0x192;eip=0x00106b; 	J(CALL(sub_1107c,0));	// 2410 call    sub_1107C ;~ 00D0:106B
cs=0x192;eip=0x00106e; 	T(AND(al, 7));	// 2411 and     al, 7 ;~ 00D0:106E
cs=0x192;eip=0x001070; 	J(JZ(loc_1106b));	// 2412 jz      short loc_1106B ;~ 00D0:1070
cs=0x192;eip=0x001072; 	X(MOV(byte_14a34, al));	// 2413 mov     byte_14A34, al ;~ 00D0:1072
cs=0x192;eip=0x001075; 	T(MOV(cx, 0x14));	// 2414 mov     cx, 14h ;~ 00D0:1075
cs=0x192;eip=0x001078; 	J(CALL(sub_11f89,0));	// 2415 call    sub_11F89 ;~ 00D0:1078
locret_1107b:
	// 4639 
cs=0x192;eip=0x00107b; 	J(RETN(0));	// 2418 retn ;~ 00D0:107B
sub_1107c:
	// 2425 
cs=0x192;eip=0x00107c; 	X(INC(byte_14a13));	// 2427 inc     byte_14A13 ;~ 00D0:107C
ret_d0_1080:
	// 4640 
cs=0x192;eip=0x001080; 	T(MOV(al, byte_14a13));	// 2428 mov     al, byte_14A13 ;~ 00D0:1080
cs=0x192;eip=0x001083; 	T(XOR(ah, ah));	// 2429 xor     ah, ah ;~ 00D0:1083
cs=0x192;eip=0x001085; 	T(ADD(ax, word_14a1e));	// 2430 add     ax, word_14A1E ;~ 00D0:1085
cs=0x192;eip=0x001089; 	X(MOV(word_14a1e, ax));	// 2431 mov     word_14A1E, ax ;~ 00D0:1089
cs=0x192;eip=0x00108c; 	J(RETN(0));	// 2432 retn ;~ 00D0:108C
sub_1108d:
	// 2439 
cs=0x192;eip=0x00108d; 	T(MOV(di, word_1863a));	// 2441 mov     di, word_1863A ;~ 00D0:108D
ret_d0_1091:
	// 4641 
cs=0x192;eip=0x001091; 	T(MOV(cx, 2));	// 2442 mov     cx, 2 ;~ 00D0:1091
cs=0x192;eip=0x001094; 	T(CLD);	// 2443 cld ;~ 00D0:1094
	// 2444 rep movsw ;~ 00D0:1095
cs=0x192;eip=0x001095; 	X(	REP MOVSW);	// 2444 rep movsw ;~ 00D0:1095
cs=0x192;eip=0x001097; 	T(SUB(di, 0x244));	// 2445 sub     di, 244h ;~ 00D0:1097
cs=0x192;eip=0x00109b; 	T(MOV(cx, 2));	// 2446 mov     cx, 2 ;~ 00D0:109B
cs=0x192;eip=0x00109e; 	T(MOV(ax, 0x101));	// 2447 mov     ax, 101h ;~ 00D0:109E
	// 2448 rep stosw ;~ 00D0:10A1
cs=0x192;eip=0x0010a1; 	X(	REP STOSW);	// 2448 rep stosw ;~ 00D0:10A1
cs=0x192;eip=0x0010a3; 	J(RETN(0));	// 2449 retn ;~ 00D0:10A3
sub_110a4:
	// 2456 
cs=0x192;eip=0x0010a4; 	T(MOV(ah, 1));	// 2458 mov     ah, 1 ;~ 00D0:10A4
ret_d0_10a6:
	// 4642 
cs=0x192;eip=0x0010a6; 	S(_INT(0x16));	// 2459 int     16h             ; KEYBOARD - CHECK BUFFER, DO NOT CLEAR ;~ 00D0:10A6
cs=0x192;eip=0x0010a8; 	J(JNZ(loc_110ad));	// 2463 jnz     short loc_110AD ;~ 00D0:10A8
cs=0x192;eip=0x0010aa; 	J(JMP(loc_1112c));	// 2464 jmp     loc_1112C ;~ 00D0:10AA
loc_110ad:
	// 4643 
cs=0x192;eip=0x0010ad; 	T(MOV(ah, 0));	// 2468 mov     ah, 0 ;~ 00D0:10AD
cs=0x192;eip=0x0010af; 	S(_INT(0x16));	// 2469 int     16h             ; KEYBOARD - READ CHAR FROM BUFFER, WAIT IF EMPTY ;~ 00D0:10AF
cs=0x192;eip=0x0010b1; 	T(MOV(cx, 5));	// 2471 mov     cx, 5 ;~ 00D0:10B1
cs=0x192;eip=0x0010b4; 	T(MOV(bx, 0x5800));	// 2472 mov     bx, 5800h ;~ 00D0:10B4
loc_110b7:
	// 4644 
cs=0x192;eip=0x0010b7; 	T(CMP(al, *(raddr(ds,bx))));	// 2475 cmp     al, [bx] ;~ 00D0:10B7
cs=0x192;eip=0x0010b9; 	J(JZ(loc_110e9));	// 2476 jz      short loc_110E9 ;~ 00D0:10B9
cs=0x192;eip=0x0010bb; 	T(CMP(*(raddr(ds,bx)), 0));	// 2477 cmp     byte ptr [bx], 0 ;~ 00D0:10BB
cs=0x192;eip=0x0010be; 	J(JZ(loc_110c5));	// 2478 jz      short loc_110C5 ;~ 00D0:10BE
cs=0x192;eip=0x0010c0; 	T(CMP(al, *(raddr(ds,bx+1))));	// 2479 cmp     al, [bx+1] ;~ 00D0:10C0
cs=0x192;eip=0x0010c3; 	J(JZ(loc_110e9));	// 2480 jz      short loc_110E9 ;~ 00D0:10C3
loc_110c5:
	// 4645 
cs=0x192;eip=0x0010c5; 	T(ADD(bx, 4));	// 2484 add     bx, 4 ;~ 00D0:10C5
cs=0x192;eip=0x0010c8; 	J(LOOP(loc_110b7));	// 2485 loop    loc_110B7 ;~ 00D0:10C8
cs=0x192;eip=0x0010ca; 	T(CMP(al, 3));	// 2486 cmp     al, 3 ;~ 00D0:10CA
cs=0x192;eip=0x0010cc; 	J(JNZ(loc_110d3));	// 2487 jnz     short loc_110D3 ;~ 00D0:10CC
cs=0x192;eip=0x0010ce; 	X(MOV(byte_14a35, 3));	// 2488 mov     byte_14A35, 3 ;~ 00D0:10CE
loc_110d3:
	// 4646 
cs=0x192;eip=0x0010d3; 	T(CMP(al, 0x0E));	// 2491 cmp     al, 0Eh ;~ 00D0:10D3
cs=0x192;eip=0x0010d5; 	J(JNZ(loc_110da));	// 2492 jnz     short loc_110DA ;~ 00D0:10D5
cs=0x192;eip=0x0010d7; 	J(CALL(sub_12772,0));	// 2493 call    sub_12772 ;~ 00D0:10D7
loc_110da:
	// 4647 
cs=0x192;eip=0x0010da; 	T(CMP(al, 0x13));	// 2496 cmp     al, 13h ;~ 00D0:10DA
cs=0x192;eip=0x0010dc; 	J(JNZ(loc_110e7));	// 2497 jnz     short loc_110E7 ;~ 00D0:10DC
loc_110de:
	// 4648 
cs=0x192;eip=0x0010de; 	J(CALL(sub_12ad8,0));	// 2500 call    sub_12AD8 ;~ 00D0:10DE
cs=0x192;eip=0x0010e1; 	J(JZ(loc_110de));	// 2501 jz      short loc_110DE ;~ 00D0:10E1
cs=0x192;eip=0x0010e3; 	T(MOV(ah, 0));	// 2502 mov     ah, 0 ;~ 00D0:10E3
cs=0x192;eip=0x0010e5; 	S(_INT(0x16));	// 2503 int     16h             ; KEYBOARD - READ CHAR FROM BUFFER, WAIT IF EMPTY ;~ 00D0:10E5
loc_110e7:
	// 4649 
cs=0x192;eip=0x0010e7; 	J(JMP(sub_110a4));	// 2507 jmp     short sub_110A4 ;~ 00D0:10E7
loc_110e9:
	// 4650 
cs=0x192;eip=0x0010e9; 	T(OR(al, al));	// 2512 or      al, al ;~ 00D0:10E9
cs=0x192;eip=0x0010eb; 	J(JNZ(loc_110f2));	// 2513 jnz     short loc_110F2 ;~ 00D0:10EB
cs=0x192;eip=0x0010ed; 	T(CMP(ah, *(raddr(ds,bx+1))));	// 2514 cmp     ah, [bx+1] ;~ 00D0:10ED
cs=0x192;eip=0x0010f0; 	J(JNZ(loc_110c5));	// 2515 jnz     short loc_110C5 ;~ 00D0:10F0
loc_110f2:
	// 4651 
cs=0x192;eip=0x0010f2; 	T(ADD(bx, 2));	// 2518 add     bx, 2 ;~ 00D0:10F2
cs=0x192;eip=0x0010f5; 	T(MOV(al, *(raddr(ds,bx))));	// 2519 mov     al, [bx] ;~ 00D0:10F5
cs=0x192;eip=0x0010f7; 	T(TEST(al, 0x0C0));	// 2520 test    al, 0C0h ;~ 00D0:10F7
cs=0x192;eip=0x0010f9; 	J(JZ(loc_11105));	// 2521 jz      short loc_11105 ;~ 00D0:10F9
cs=0x192;eip=0x0010fb; 	X(OR(byte_18995, al));	// 2522 or      byte_18995, al ;~ 00D0:10FB
cs=0x192;eip=0x0010ff; 	T(INC(bx));	// 2523 inc     bx ;~ 00D0:10FF
cs=0x192;eip=0x001100; 	X(MOV(*(raddr(ds,bx)), 3));	// 2524 mov     byte ptr [bx], 3 ;~ 00D0:1100
cs=0x192;eip=0x001103; 	J(JMP(sub_110a4));	// 2525 jmp     short sub_110A4 ;~ 00D0:1103
loc_11105:
	// 4652 
cs=0x192;eip=0x001105; 	X(OR(*(raddr(ds,bx)), 0x80));	// 2529 or      byte ptr [bx], 80h ;~ 00D0:1105
cs=0x192;eip=0x001108; 	T(CMP(al, 4));	// 2530 cmp     al, 4 ;~ 00D0:1108
cs=0x192;eip=0x00110a; 	J(JNZ(loc_1111e));	// 2531 jnz     short loc_1111E ;~ 00D0:110A
cs=0x192;eip=0x00110c; 	T(CMP(word_14a18, 0x5C92));	// 2532 cmp     word_14A18, 5C92h ;~ 00D0:110C
cs=0x192;eip=0x001112; 	J(JZ(loc_1111e));	// 2533 jz      short loc_1111E ;~ 00D0:1112
cs=0x192;eip=0x001114; 	X(OR(byte_18995, al));	// 2534 or      byte_18995, al ;~ 00D0:1114
cs=0x192;eip=0x001118; 	T(INC(bx));	// 2535 inc     bx ;~ 00D0:1118
cs=0x192;eip=0x001119; 	X(MOV(*(raddr(ds,bx)), 6));	// 2536 mov     byte ptr [bx], 6 ;~ 00D0:1119
cs=0x192;eip=0x00111c; 	J(JMP(sub_110a4));	// 2537 jmp     short sub_110A4 ;~ 00D0:111C
loc_1111e:
	// 4653 
cs=0x192;eip=0x00111e; 	X(OR(*(raddr(ds,bx)), 0x0C0));	// 2542 or      byte ptr [bx], 0C0h ;~ 00D0:111E
cs=0x192;eip=0x001121; 	X(OR(byte_18995, al));	// 2543 or      byte_18995, al ;~ 00D0:1121
cs=0x192;eip=0x001125; 	T(INC(bx));	// 2544 inc     bx ;~ 00D0:1125
cs=0x192;eip=0x001126; 	X(MOV(*(raddr(ds,bx)), 2));	// 2545 mov     byte ptr [bx], 2 ;~ 00D0:1126
cs=0x192;eip=0x001129; 	J(JMP(sub_110a4));	// 2546 jmp     sub_110A4 ;~ 00D0:1129
loc_1112c:
	// 4654 
cs=0x192;eip=0x00112c; 	T(MOV(bx, 0x5803));	// 2550 mov     bx, 5803h ;~ 00D0:112C
cs=0x192;eip=0x00112f; 	T(MOV(cx, 5));	// 2551 mov     cx, 5 ;~ 00D0:112F
loc_11132:
	// 4655 
cs=0x192;eip=0x001132; 	T(CMP(*(raddr(ds,bx)), 0));	// 2554 cmp     byte ptr [bx], 0 ;~ 00D0:1132
cs=0x192;eip=0x001135; 	J(JZ(loc_1115c));	// 2555 jz      short loc_1115C ;~ 00D0:1135
cs=0x192;eip=0x001137; 	X(DEC(*(raddr(ds,bx))));	// 2556 dec     byte ptr [bx] ;~ 00D0:1137
cs=0x192;eip=0x001139; 	J(JNZ(loc_1115c));	// 2557 jnz     short loc_1115C ;~ 00D0:1139
cs=0x192;eip=0x00113b; 	T(MOV(ah, *(raddr(ds,bx-1))));	// 2558 mov     ah, [bx-1] ;~ 00D0:113B
cs=0x192;eip=0x00113e; 	T(TEST(ah, 0x40));	// 2559 test    ah, 40h ;~ 00D0:113E
cs=0x192;eip=0x001141; 	J(JZ(loc_11152));	// 2560 jz      short loc_11152 ;~ 00D0:1141
cs=0x192;eip=0x001143; 	X(MOV(*(raddr(ds,bx)), 3));	// 2561 mov     byte ptr [bx], 3 ;~ 00D0:1143
cs=0x192;eip=0x001146; 	X(AND(*(raddr(ds,bx-1)), 0x0BF));	// 2562 and     byte ptr [bx-1], 0BFh ;~ 00D0:1146
cs=0x192;eip=0x00114a; 	T(NOT(ah));	// 2563 not     ah ;~ 00D0:114A
cs=0x192;eip=0x00114c; 	X(AND(byte_18995, ah));	// 2564 and     byte_18995, ah ;~ 00D0:114C
cs=0x192;eip=0x001150; 	J(JMP(loc_1115c));	// 2565 jmp     short loc_1115C ;~ 00D0:1150
loc_11152:
	// 4656 
cs=0x192;eip=0x001152; 	T(NOT(ah));	// 2569 not     ah ;~ 00D0:1152
cs=0x192;eip=0x001154; 	X(AND(byte_18995, ah));	// 2570 and     byte_18995, ah ;~ 00D0:1154
cs=0x192;eip=0x001158; 	X(AND(*(raddr(ds,bx-1)), 0x3F));	// 2571 and     byte ptr [bx-1], 3Fh ;~ 00D0:1158
loc_1115c:
	// 4657 
cs=0x192;eip=0x00115c; 	T(ADD(bx, 4));	// 2575 add     bx, 4 ;~ 00D0:115C
cs=0x192;eip=0x00115f; 	J(LOOP(loc_11132));	// 2576 loop    loc_11132 ;~ 00D0:115F
cs=0x192;eip=0x001161; 	J(RETN(0));	// 2577 retn ;~ 00D0:1161
sub_11162:
	// 2584 
cs=0x192;eip=0x001162; 	T(CMP(byte_14a35, 0));	// 2585 cmp     byte_14A35, 0 ;~ 00D0:1162
ret_d0_1167:
	// 4658 
cs=0x192;eip=0x001167; 	J(JZ(loc_11181));	// 2586 jz      short loc_11181 ;~ 00D0:1167
cs=0x192;eip=0x001169; 	T(CMP(byte_18998, 0));	// 2587 cmp     byte_18998, 0 ;~ 00D0:1169
cs=0x192;eip=0x00116e; 	J(JNZ(loc_11181));	// 2588 jnz     short loc_11181 ;~ 00D0:116E
cs=0x192;eip=0x001170; 	X(MOV(byte_18998, 1));	// 2589 mov     byte_18998, 1 ;~ 00D0:1170
cs=0x192;eip=0x001175; 	X(MOV(word_14a18, 0x5E7E));	// 2590 mov     word_14A18, 5E7Eh ;~ 00D0:1175
cs=0x192;eip=0x00117b; 	X(MOV(word_14a1a, 0x1A05));	// 2591 mov     word_14A1A, 1A05h ;~ 00D0:117B
loc_11181:
	// 4659 
cs=0x192;eip=0x001181; 	J(CALL(sub_11db3,0));	// 2595 call    sub_11DB3 ;~ 00D0:1181
cs=0x192;eip=0x001184; 	J(CALL(sub_11dca,0));	// 2596 call    sub_11DCA ;~ 00D0:1184
cs=0x192;eip=0x001187; 	J(CALL(sub_11dc4,0));	// 2597 call    sub_11DC4 ;~ 00D0:1187
cs=0x192;eip=0x00118a; 	T(XOR(al, al));	// 2598 xor     al, al ;~ 00D0:118A
cs=0x192;eip=0x00118c; 	T(CMP(byte_18e48, 0x64));	// 2599 cmp     byte_18E48, 64h ; 'd' ;~ 00D0:118C
cs=0x192;eip=0x001191; 	J(JNZ(loc_11199));	// 2600 jnz     short loc_11199 ;~ 00D0:1191
cs=0x192;eip=0x001193; 	T(MOV(bx, word_14a16));	// 2601 mov     bx, word_14A16 ;~ 00D0:1193
cs=0x192;eip=0x001197; 	T(MOV(al, *(raddr(ds,bx))));	// 2602 mov     al, [bx] ;~ 00D0:1197
loc_11199:
	// 4660 
cs=0x192;eip=0x001199; 	T(CMP(al, byte_14a3e));	// 2605 cmp     al, byte_14A3E ;~ 00D0:1199
cs=0x192;eip=0x00119d; 	X(MOV(byte_14a3e, al));	// 2606 mov     byte_14A3E, al ;~ 00D0:119D
cs=0x192;eip=0x0011a0; 	J(JZ(loc_111a5));	// 2607 jz      short loc_111A5 ;~ 00D0:11A0
cs=0x192;eip=0x0011a2; 	J(CALL(sub_11f09,0));	// 2608 call    sub_11F09 ;~ 00D0:11A2
loc_111a5:
	// 4661 
cs=0x192;eip=0x0011a5; 	T(MOV(bx, word_14a1a));	// 2611 mov     bx, word_14A1A ;~ 00D0:11A5
cs=0x192;eip=0x0011a9; __disp=bx;
	J(JMP(__dispatch_call));	// 2612 jmp     bx ;~ 00D0:11A9
seg000_11ab_proc:
	// 2619 
loc_111ab:
	// 4662 
cs=0x192;eip=0x0011ab; 	J(CALL(sub_11de3,0));	// 2621 call    sub_11DE3 ;~ 00D0:11AB
cs=0x192;eip=0x0011ae; 	J(CALL(sub_11dca,0));	// 2622 call    sub_11DCA ;~ 00D0:11AE
cs=0x192;eip=0x0011b1; 	J(CALL(sub_10bea,0));	// 2623 call    sub_10BEA ;~ 00D0:11B1
cs=0x192;eip=0x0011b4; 	T(MOV(al, byte_14a2d));	// 2624 mov     al, byte_14A2D ;~ 00D0:11B4
cs=0x192;eip=0x0011b7; 	T(ADD(al, 7));	// 2625 add     al, 7 ;~ 00D0:11B7
cs=0x192;eip=0x0011b9; 	T(CMP(al, 8));	// 2626 cmp     al, 8 ;~ 00D0:11B9
cs=0x192;eip=0x0011bb; 	J(JC(loc_111d4));	// 2627 jb      short loc_111D4 ;~ 00D0:11BB
cs=0x192;eip=0x0011bd; 	T(MOV(bx, word_14a14));	// 2628 mov     bx, word_14A14 ;~ 00D0:11BD
cs=0x192;eip=0x0011c1; 	T(MOV(dx, 0x4A6));	// 2629 mov     dx, 4A6h ;~ 00D0:11C1
cs=0x192;eip=0x0011c4; 	J(CALL(sub_11daa,0));	// 2630 call    sub_11DAA ;~ 00D0:11C4
cs=0x192;eip=0x0011c7; 	T(ADD(bx, dx));	// 2631 add     bx, dx ;~ 00D0:11C7
cs=0x192;eip=0x0011c9; 	T(CMP(*(raddr(ds,bx)), 0));	// 2632 cmp     byte ptr [bx], 0 ;~ 00D0:11C9
cs=0x192;eip=0x0011cc; 	J(JNZ(loc_111d4));	// 2633 jnz     short loc_111D4 ;~ 00D0:11CC
cs=0x192;eip=0x0011ce; 	T(MOV(cx, 2));	// 2634 mov     cx, 2 ;~ 00D0:11CE
cs=0x192;eip=0x0011d1; 	J(CALL(sub_11f89,0));	// 2635 call    sub_11F89 ;~ 00D0:11D1
loc_111d4:
	// 4663 
cs=0x192;eip=0x0011d4; 	J(JMP(loc_11c07));	// 2639 jmp     loc_11C07 ;~ 00D0:11D4
ret_d0_11d7:
	// 4664 
cs=0x192;eip=0x0011d7; 	T(CMP(byte_14a2e, 0x0FD));	// 2642 cmp     byte_14A2E, 0FDh ; 'ý' ;~ 00D0:11D7
cs=0x192;eip=0x0011dc; 	J(JNZ(loc_111e1));	// 2643 jnz     short loc_111E1 ;~ 00D0:11DC
cs=0x192;eip=0x0011de; 	J(JMP(loc_11213));	// 2644 jmp     short loc_11213 ;~ 00D0:11DE
loc_111e1:
	// 4665 
cs=0x192;eip=0x0011e1; 	J(CALL(sub_11d99,0));	// 2650 call    sub_11D99 ;~ 00D0:11E1
cs=0x192;eip=0x0011e4; 	T(TEST(byte_18995, 0x10));	// 2651 test    byte_18995, 10h ;~ 00D0:11E4
cs=0x192;eip=0x0011e9; 	J(JNZ(loc_111f3));	// 2652 jnz     short loc_111F3 ;~ 00D0:11E9
cs=0x192;eip=0x0011eb; 	X(DEC(byte_14a38));	// 2653 dec     byte_14A38 ;~ 00D0:11EB
cs=0x192;eip=0x0011ef; 	J(JZ(loc_111f3));	// 2654 jz      short loc_111F3 ;~ 00D0:11EF
cs=0x192;eip=0x0011f1; 	J(JMP(loc_111ab));	// 2655 jmp     short loc_111AB ;~ 00D0:11F1
loc_111f3:
	// 4666 
cs=0x192;eip=0x0011f3; 	T(MOV(al, 1));	// 2660 mov     al, 1 ;~ 00D0:11F3
cs=0x192;eip=0x0011f5; 	J(JMP(loc_111f8));	// 2661 jmp     short loc_111F8 ;~ 00D0:11F5
loc_111f8:
	// 4667 
cs=0x192;eip=0x0011f8; 	X(MOV(byte_18996, 0));	// 2667 mov     byte_18996, 0 ;~ 00D0:11F8
cs=0x192;eip=0x0011fd; 	T(MOV(bx, 0x1282));	// 2668 mov     bx, 1282h ;~ 00D0:11FD
cs=0x192;eip=0x001200; 	T(MOV(dx, 0x5BE2));	// 2669 mov     dx, 5BE2h ;~ 00D0:1200
cs=0x192;eip=0x001203; 	J(JMP(loc_11206));	// 2670 jmp     short loc_11206 ;~ 00D0:1203
loc_11206:
	// 4668 
cs=0x192;eip=0x001206; 	X(MOV(byte_14a38, al));	// 2677 mov     byte_14A38, al ;~ 00D0:1206
loc_11209:
	// 4669 
cs=0x192;eip=0x001209; 	X(MOV(word_14a18, dx));	// 2684 mov     word_14A18, dx ;~ 00D0:1209
loc_1120d:
	// 4670 
cs=0x192;eip=0x00120d; 	X(MOV(word_14a1a, bx));	// 2688 mov     word_14A1A, bx ;~ 00D0:120D
cs=0x192;eip=0x001211; 	J(JMP(loc_111ab));	// 2689 jmp     short loc_111AB ;~ 00D0:1211
loc_11213:
	// 4671 
cs=0x192;eip=0x001213; 	X(DEC(*(db*)(((db*)&word_14a36)+1)));	// 2696 dec     byte ptr word_14A36+1 ;~ 00D0:1213
cs=0x192;eip=0x001217; 	X(MOV(byte_14a2e, 0x1D));	// 2697 mov     byte_14A2E, 1Dh ;~ 00D0:1217
cs=0x192;eip=0x00121c; 	T(MOV(bx, word_14a14));	// 2698 mov     bx, word_14A14 ;~ 00D0:121C
cs=0x192;eip=0x001220; 	T(ADD(bx, 0x20));	// 2699 add     bx, 20h ; ' ' ;~ 00D0:1220
cs=0x192;eip=0x001223; 	T(MOV(dx, 0x0FFFF));	// 2700 mov     dx, 0FFFFh ;~ 00D0:1223
cs=0x192;eip=0x001226; 	J(JMP(loc_11271));	// 2701 jmp     short loc_11271 ;~ 00D0:1226
loc_11229:
	// 4672 
cs=0x192;eip=0x001229; 	T(MOV(bx, word_14a1c));	// 2710 mov     bx, word_14A1C ;~ 00D0:1229
cs=0x192;eip=0x00122d; 	T(CMP(*(raddr(ds,bx)), 0x41));	// 2711 cmp     byte ptr [bx], 41h ; 'A' ;~ 00D0:122D
cs=0x192;eip=0x001230; 	J(JZ(loc_11248));	// 2712 jz      short loc_11248 ;~ 00D0:1230
cs=0x192;eip=0x001232; 	X(INC(*(db*)(((db*)&word_14a36)+1)));	// 2713 inc     byte ptr word_14A36+1 ;~ 00D0:1232
cs=0x192;eip=0x001236; 	X(MOV(byte_14a2e, 0x0FD));	// 2714 mov     byte_14A2E, 0FDh ; 'ý' ;~ 00D0:1236
cs=0x192;eip=0x00123b; 	T(MOV(bx, word_14a14));	// 2715 mov     bx, word_14A14 ;~ 00D0:123B
cs=0x192;eip=0x00123f; 	T(ADD(bx, 0x0FFE0));	// 2716 add     bx, 0FFE0h ;~ 00D0:123F
cs=0x192;eip=0x001242; 	T(MOV(dx, 1));	// 2717 mov     dx, 1 ;~ 00D0:1242
cs=0x192;eip=0x001245; 	J(JMP(loc_11271));	// 2718 jmp     short loc_11271 ;~ 00D0:1245
loc_11248:
	// 4673 
cs=0x192;eip=0x001248; 	X(MOV(*(db*)(((db*)&word_14a36)+1), 0x1E));	// 2725 mov     byte ptr word_14A36+1, 1Eh ;~ 00D0:1248
cs=0x192;eip=0x00124d; 	X(MOV(*(db*)(((db*)&word_14a36)), 0x18));	// 2726 mov     byte ptr word_14A36, 18h ;~ 00D0:124D
cs=0x192;eip=0x001252; 	X(MOV(byte_14a2d, 5));	// 2727 mov     byte_14A2D, 5 ;~ 00D0:1252
cs=0x192;eip=0x001257; 	X(MOV(byte_14a2e, 4));	// 2728 mov     byte_14A2E, 4 ;~ 00D0:1257
cs=0x192;eip=0x00125c; 	X(MOV(word_14a14, 0x0A4));	// 2729 mov     word_14A14, 0A4h ; '¤' ;~ 00D0:125C
cs=0x192;eip=0x001262; 	X(MOV(word_14a1c, 0x1287));	// 2730 mov     word_14A1C, 1287h ;~ 00D0:1262
cs=0x192;eip=0x001268; 	X(MOV(byte_14a34, 6));	// 2731 mov     byte_14A34, 6 ;~ 00D0:1268
cs=0x192;eip=0x00126d; 	X(POP(ax));	// 2732 pop     ax ;~ 00D0:126D
cs=0x192;eip=0x00126e; 	J(JMP(loc_1045e));	// 2733 jmp     loc_1045E ;~ 00D0:126E
loc_11271:
	// 4674 
cs=0x192;eip=0x001271; 	X(MOV(word_14a14, bx));	// 2738 mov     word_14A14, bx ;~ 00D0:1271
cs=0x192;eip=0x001275; 	X(ADD(word_14a1c, dx));	// 2739 add     word_14A1C, dx ;~ 00D0:1275
cs=0x192;eip=0x001279; 	X(MOV(byte_14a34, 2));	// 2740 mov     byte_14A34, 2 ;~ 00D0:1279
cs=0x192;eip=0x00127e; 	X(POP(ax));	// 2741 pop     ax ;~ 00D0:127E
cs=0x192;eip=0x00127f; 	J(JMP(loc_1045e));	// 2742 jmp     loc_1045E ;~ 00D0:127F
ret_d0_1282:
	// 4675 
cs=0x192;eip=0x001282; 	T(MOV(al, byte_18996));	// 2745 mov     al, byte_18996 ;~ 00D0:1282
cs=0x192;eip=0x001285; 	T(INC(al));	// 2746 inc     al ;~ 00D0:1285
cs=0x192;eip=0x001287; 	T(AND(al, 3));	// 2747 and     al, 3 ;~ 00D0:1287
cs=0x192;eip=0x001289; 	X(MOV(byte_18996, al));	// 2748 mov     byte_18996, al ;~ 00D0:1289
cs=0x192;eip=0x00128c; 	T(CBW);	// 2749 cbw ;~ 00D0:128C
cs=0x192;eip=0x00128d; 	T(ADD(ax, ax));	// 2750 add     ax, ax ;~ 00D0:128D
cs=0x192;eip=0x00128f; 	T(ADD(ax, 0x5B26));	// 2751 add     ax, 5B26h ;~ 00D0:128F
cs=0x192;eip=0x001292; 	T(MOV(bx, ax));	// 2752 mov     bx, ax ;~ 00D0:1292
cs=0x192;eip=0x001294; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 2753 mov     bx, [bx] ;~ 00D0:1294
cs=0x192;eip=0x001296; 	X(MOV(word_14a18, bx));	// 2754 mov     word_14A18, bx ;~ 00D0:1296
loc_1129a:
	// 4676 
cs=0x192;eip=0x00129a; 	J(CALL(sub_11d7b,0));	// 2758 call    sub_11D7B ;~ 00D0:129A
cs=0x192;eip=0x00129d; 	J(CALL(sub_11d6b,0));	// 2759 call    sub_11D6B ;~ 00D0:129D
cs=0x192;eip=0x0012a0; 	J(CALL(sub_11d99,0));	// 2760 call    sub_11D99 ;~ 00D0:12A0
cs=0x192;eip=0x0012a3; 	X(DEC(byte_14a38));	// 2761 dec     byte_14A38 ;~ 00D0:12A3
cs=0x192;eip=0x0012a7; 	J(JZ(loc_112ac));	// 2762 jz      short loc_112AC ;~ 00D0:12A7
cs=0x192;eip=0x0012a9; 	J(JMP(loc_111ab));	// 2763 jmp     loc_111AB ;~ 00D0:12A9
loc_112ac:
	// 4677 
cs=0x192;eip=0x0012ac; 	X(MOV(byte_14a38, 6));	// 2767 mov     byte_14A38, 6 ;~ 00D0:12AC
cs=0x192;eip=0x0012b1; 	T(MOV(bx, 0x12B7));	// 2768 mov     bx, 12B7h ;~ 00D0:12B1
cs=0x192;eip=0x0012b4; 	J(JMP(loc_1120d));	// 2769 jmp     loc_1120D ;~ 00D0:12B4
ret_d0_12b7:
	// 4678 
cs=0x192;eip=0x0012b7; 	J(CALL(sub_11d16,0));	// 2771 call    sub_11D16 ;~ 00D0:12B7
cs=0x192;eip=0x0012ba; 	J(CALL(sub_11d7b,0));	// 2772 call    sub_11D7B ;~ 00D0:12BA
cs=0x192;eip=0x0012bd; 	J(CALL(sub_11d6b,0));	// 2773 call    sub_11D6B ;~ 00D0:12BD
cs=0x192;eip=0x0012c0; 	T(MOV(al, byte_18e4c));	// 2774 mov     al, byte_18E4C ;~ 00D0:12C0
cs=0x192;eip=0x0012c3; 	T(INC(al));	// 2775 inc     al ;~ 00D0:12C3
cs=0x192;eip=0x0012c5; 	T(CMP(al, 0x0C8));	// 2776 cmp     al, 0C8h ; 'È' ;~ 00D0:12C5
cs=0x192;eip=0x0012c7; 	J(JC(loc_112cc));	// 2777 jb      short loc_112CC ;~ 00D0:12C7
cs=0x192;eip=0x0012c9; 	J(JMP(loc_11367));	// 2778 jmp     loc_11367 ;~ 00D0:12C9
loc_112cc:
	// 4679 
cs=0x192;eip=0x0012cc; 	J(CALL(sub_11d36,0));	// 2782 call    sub_11D36 ;~ 00D0:12CC
cs=0x192;eip=0x0012cf; 	J(JZ(loc_112d4));	// 2783 jz      short loc_112D4 ;~ 00D0:12CF
cs=0x192;eip=0x0012d1; 	J(JMP(loc_11359));	// 2784 jmp     loc_11359 ;~ 00D0:12D1
loc_112d4:
	// 4680 
cs=0x192;eip=0x0012d4; 	J(CALL(sub_11d99,0));	// 2788 call    sub_11D99 ;~ 00D0:12D4
cs=0x192;eip=0x0012d7; 	X(INC(byte_14a2d));	// 2789 inc     byte_14A2D ;~ 00D0:12D7
cs=0x192;eip=0x0012db; 	X(ADD(word_14a14, 0x20));	// 2790 add     word_14A14, 20h ; ' ' ;~ 00D0:12DB
cs=0x192;eip=0x0012e0; 	X(MOV(word_14a18, 0x5DD6));	// 2791 mov     word_14A18, 5DD6h ;~ 00D0:12E0
cs=0x192;eip=0x0012e6; 	X(DEC(byte_14a38));	// 2792 dec     byte_14A38 ;~ 00D0:12E6
cs=0x192;eip=0x0012ea; 	J(JZ(loc_112ef));	// 2793 jz      short loc_112EF ;~ 00D0:12EA
cs=0x192;eip=0x0012ec; 	J(JMP(loc_111ab));	// 2794 jmp     loc_111AB ;~ 00D0:12EC
loc_112ef:
	// 4681 
cs=0x192;eip=0x0012ef; 	T(MOV(al, 0x19));	// 2798 mov     al, 19h ;~ 00D0:12EF
loc_112f1:
	// 4682 
cs=0x192;eip=0x0012f1; 	X(MOV(byte_18997, 1));	// 2802 mov     byte_18997, 1 ;~ 00D0:12F1
cs=0x192;eip=0x0012f6; 	X(MOV(byte_18998, 1));	// 2803 mov     byte_18998, 1 ;~ 00D0:12F6
cs=0x192;eip=0x0012fb; 	T(MOV(dx, 0x5E7E));	// 2804 mov     dx, 5E7Eh ;~ 00D0:12FB
cs=0x192;eip=0x0012fe; 	T(MOV(bx, 0x1304));	// 2805 mov     bx, 1304h ;~ 00D0:12FE
cs=0x192;eip=0x001301; 	J(JMP(loc_11206));	// 2806 jmp     loc_11206 ;~ 00D0:1301
ret_d0_1304:
	// 4683 
cs=0x192;eip=0x001304; 	J(CALL(sub_11d16,0));	// 2809 call    sub_11D16 ;~ 00D0:1304
cs=0x192;eip=0x001307; 	J(CALL(sub_11d7b,0));	// 2810 call    sub_11D7B ;~ 00D0:1307
cs=0x192;eip=0x00130a; 	J(CALL(sub_11d36,0));	// 2811 call    sub_11D36 ;~ 00D0:130A
cs=0x192;eip=0x00130d; 	J(JZ(loc_11312));	// 2812 jz      short loc_11312 ;~ 00D0:130D
cs=0x192;eip=0x00130f; 	J(JMP(loc_1134a));	// 2813 jmp     short loc_1134A ;~ 00D0:130F
loc_11312:
	// 4684 
cs=0x192;eip=0x001312; 	X(INC(byte_18997));	// 2818 inc     byte_18997 ;~ 00D0:1312
cs=0x192;eip=0x001316; 	X(XOR(byte_18999, 1));	// 2819 xor     byte_18999, 1 ;~ 00D0:1316
cs=0x192;eip=0x00131b; 	J(JZ(loc_1132f));	// 2820 jz      short loc_1132F ;~ 00D0:131B
cs=0x192;eip=0x00131d; 	J(CALL(sub_11d6b,0));	// 2821 call    sub_11D6B ;~ 00D0:131D
cs=0x192;eip=0x001320; 	T(MOV(al, byte_18e4c));	// 2822 mov     al, byte_18E4C ;~ 00D0:1320
cs=0x192;eip=0x001323; 	T(INC(al));	// 2823 inc     al ;~ 00D0:1323
cs=0x192;eip=0x001325; 	T(CMP(al, 0x0C8));	// 2824 cmp     al, 0C8h ; 'È' ;~ 00D0:1325
cs=0x192;eip=0x001327; 	J(JC(loc_1132c));	// 2825 jb      short loc_1132C ;~ 00D0:1327
cs=0x192;eip=0x001329; 	J(JMP(loc_11367));	// 2826 jmp     short loc_11367 ;~ 00D0:1329
loc_1132c:
	// 4685 
cs=0x192;eip=0x00132c; 	J(CALL(sub_11d99,0));	// 2831 call    sub_11D99 ;~ 00D0:132C
loc_1132f:
	// 4686 
cs=0x192;eip=0x00132f; 	X(INC(byte_14a2d));	// 2834 inc     byte_14A2D ;~ 00D0:132F
cs=0x192;eip=0x001333; 	X(ADD(word_14a14, 0x20));	// 2835 add     word_14A14, 20h ; ' ' ;~ 00D0:1333
cs=0x192;eip=0x001338; 	X(DEC(byte_14a38));	// 2836 dec     byte_14A38 ;~ 00D0:1338
cs=0x192;eip=0x00133c; 	J(JZ(loc_11341));	// 2837 jz      short loc_11341 ;~ 00D0:133C
cs=0x192;eip=0x00133e; 	J(JMP(loc_111ab));	// 2838 jmp     loc_111AB ;~ 00D0:133E
loc_11341:
	// 4687 
cs=0x192;eip=0x001341; 	T(MOV(dx, 0x5E7E));	// 2842 mov     dx, 5E7Eh ;~ 00D0:1341
cs=0x192;eip=0x001344; 	T(MOV(bx, 0x1A05));	// 2843 mov     bx, 1A05h ;~ 00D0:1344
cs=0x192;eip=0x001347; 	J(JMP(loc_11209));	// 2844 jmp     loc_11209 ;~ 00D0:1347
loc_1134a:
	// 4688 
cs=0x192;eip=0x00134a; 	T(MOV(cl, byte_18997));	// 2849 mov     cl, byte_18997 ;~ 00D0:134A
cs=0x192;eip=0x00134e; 	T(MOV(ch, 0));	// 2850 mov     ch, 0 ;~ 00D0:134E
cs=0x192;eip=0x001350; 	J(CALL(sub_11f89,0));	// 2851 call    sub_11F89 ;~ 00D0:1350
cs=0x192;eip=0x001353; 	J(CALL(sub_12023,0));	// 2852 call    sub_12023 ;~ 00D0:1353
cs=0x192;eip=0x001356; 	J(JMP(loc_11359));	// 2853 jmp     short loc_11359 ;~ 00D0:1356
loc_11359:
	// 4689 
cs=0x192;eip=0x001359; 	X(MOV(byte_18998, 0));	// 2860 mov     byte_18998, 0 ;~ 00D0:1359
cs=0x192;eip=0x00135e; 	T(MOV(bx, 0x1375));	// 2861 mov     bx, 1375h ;~ 00D0:135E
cs=0x192;eip=0x001361; 	T(MOV(dx, 0x5D82));	// 2862 mov     dx, 5D82h ;~ 00D0:1361
cs=0x192;eip=0x001364; 	J(JMP(loc_11209));	// 2863 jmp     loc_11209 ;~ 00D0:1364
loc_11367:
	// 4690 
cs=0x192;eip=0x001367; 	X(MOV(byte_18998, 0));	// 2869 mov     byte_18998, 0 ;~ 00D0:1367
cs=0x192;eip=0x00136c; 	T(MOV(bx, 0x1725));	// 2870 mov     bx, 1725h ;~ 00D0:136C
cs=0x192;eip=0x00136f; 	T(MOV(dx, 0x5C69));	// 2871 mov     dx, 5C69h ;~ 00D0:136F
cs=0x192;eip=0x001372; 	J(JMP(loc_11209));	// 2872 jmp     loc_11209 ;~ 00D0:1372
ret_d0_1375:
	// 4691 
cs=0x192;eip=0x001375; 	J(CALL(sub_11d36,0));	// 2875 call    sub_11D36 ;~ 00D0:1375
cs=0x192;eip=0x001378; 	J(JNZ(loc_113a9));	// 2876 jnz     short loc_113A9 ;~ 00D0:1378
cs=0x192;eip=0x00137a; 	T(MOV(bx, word_14a14));	// 2877 mov     bx, word_14A14 ;~ 00D0:137A
cs=0x192;eip=0x00137e; 	T(MOV(dx, 0x4A6));	// 2878 mov     dx, 4A6h ;~ 00D0:137E
cs=0x192;eip=0x001381; 	J(CALL(sub_11daa,0));	// 2879 call    sub_11DAA ;~ 00D0:1381
cs=0x192;eip=0x001384; 	T(ADD(bx, dx));	// 2880 add     bx, dx ;~ 00D0:1384
cs=0x192;eip=0x001386; 	T(CMP(*(raddr(ds,bx)), 0));	// 2881 cmp     byte ptr [bx], 0 ;~ 00D0:1386
cs=0x192;eip=0x001389; 	J(JNZ(loc_11393));	// 2882 jnz     short loc_11393 ;~ 00D0:1389
cs=0x192;eip=0x00138b; 	T(MOV(cx, 2));	// 2883 mov     cx, 2 ;~ 00D0:138B
cs=0x192;eip=0x00138e; 	X(PUSH(dx));	// 2884 push    dx ;~ 00D0:138E
cs=0x192;eip=0x00138f; 	J(CALL(sub_11f89,0));	// 2885 call    sub_11F89 ;~ 00D0:138F
cs=0x192;eip=0x001392; 	X(POP(dx));	// 2886 pop     dx ;~ 00D0:1392
loc_11393:
	// 4692 
cs=0x192;eip=0x001393; 	X(INC(byte_14a2d));	// 2889 inc     byte_14A2D ;~ 00D0:1393
cs=0x192;eip=0x001397; 	X(ADD(word_14a14, 0x20));	// 2890 add     word_14A14, 20h ; ' ' ;~ 00D0:1397
cs=0x192;eip=0x00139c; 	T(MOV(bx, dx));	// 2891 mov     bx, dx ;~ 00D0:139C
cs=0x192;eip=0x00139e; 	T(ADD(bx, word_14a14));	// 2892 add     bx, word_14A14 ;~ 00D0:139E
cs=0x192;eip=0x0013a2; 	T(CMP(*(raddr(ds,bx)), 0));	// 2893 cmp     byte ptr [bx], 0 ;~ 00D0:13A2
cs=0x192;eip=0x0013a5; 	J(JZ(loc_113e2));	// 2894 jz      short loc_113E2 ;~ 00D0:13A5
cs=0x192;eip=0x0013a7; 	J(JMP(loc_11367));	// 2895 jmp     short loc_11367 ;~ 00D0:13A7
loc_113a9:
	// 4693 
cs=0x192;eip=0x0013a9; 	T(CMP(byte_14a2d, 0x0FF));	// 2899 cmp     byte_14A2D, 0FFh ;~ 00D0:13A9
cs=0x192;eip=0x0013ae; 	T(MOV(dx, 0x4A6));	// 2900 mov     dx, 4A6h ;~ 00D0:13AE
cs=0x192;eip=0x0013b1; 	J(JNS(loc_113b6));	// 2901 jns     short loc_113B6 ;~ 00D0:13B1
cs=0x192;eip=0x0013b3; 	T(MOV(dx, 0x546));	// 2902 mov     dx, 546h ;~ 00D0:13B3
loc_113b6:
	// 4694 
cs=0x192;eip=0x0013b6; 	J(CALL(sub_11daa,0));	// 2905 call    sub_11DAA ;~ 00D0:13B6
cs=0x192;eip=0x0013b9; 	T(MOV(bx, word_14a14));	// 2906 mov     bx, word_14A14 ;~ 00D0:13B9
cs=0x192;eip=0x0013bd; 	T(ADD(bx, dx));	// 2907 add     bx, dx ;~ 00D0:13BD
cs=0x192;eip=0x0013bf; 	T(CMP(*(raddr(ds,bx)), 0));	// 2908 cmp     byte ptr [bx], 0 ;~ 00D0:13BF
cs=0x192;eip=0x0013c2; 	J(JZ(loc_113e2));	// 2909 jz      short loc_113E2 ;~ 00D0:13C2
cs=0x192;eip=0x0013c4; 	T(TEST(byte_18995, 0x10));	// 2910 test    byte_18995, 10h ;~ 00D0:13C4
cs=0x192;eip=0x0013c9; 	J(JZ(loc_113d9));	// 2911 jz      short loc_113D9 ;~ 00D0:13C9
cs=0x192;eip=0x0013cb; 	X(MOV(byte_14a38, 1));	// 2912 mov     byte_14A38, 1 ;~ 00D0:13CB
cs=0x192;eip=0x0013d0; 	T(MOV(bx, 0x1429));	// 2913 mov     bx, 1429h ;~ 00D0:13D0
cs=0x192;eip=0x0013d3; 	T(MOV(dx, 0x5D58));	// 2914 mov     dx, 5D58h ;~ 00D0:13D3
cs=0x192;eip=0x0013d6; 	J(JMP(loc_11209));	// 2915 jmp     loc_11209 ;~ 00D0:13D6
loc_113d9:
	// 4695 
cs=0x192;eip=0x0013d9; 	T(TEST(byte_18995, 4));	// 2919 test    byte_18995, 4 ;~ 00D0:13D9
cs=0x192;eip=0x0013de; 	J(JNZ(loc_113e2));	// 2920 jnz     short loc_113E2 ;~ 00D0:13DE
cs=0x192;eip=0x0013e0; 	J(JMP(loc_11367));	// 2921 jmp     short loc_11367 ;~ 00D0:13E0
loc_113e2:
	// 4696 
cs=0x192;eip=0x0013e2; 	T(TEST(byte_18995, 2));	// 2926 test    byte_18995, 2 ;~ 00D0:13E2
cs=0x192;eip=0x0013e7; 	J(JZ(loc_1140c));	// 2927 jz      short loc_1140C ;~ 00D0:13E7
cs=0x192;eip=0x0013e9; 	T(MOV(al, byte_14a39));	// 2928 mov     al, byte_14A39 ;~ 00D0:13E9
cs=0x192;eip=0x0013ec; 	T(DEC(al));	// 2929 dec     al ;~ 00D0:13EC
cs=0x192;eip=0x0013ee; 	J(JZ(loc_11402));	// 2930 jz      short loc_11402 ;~ 00D0:13EE
cs=0x192;eip=0x0013f0; 	J(CALL(sub_11d00,0));	// 2931 call    sub_11D00 ;~ 00D0:13F0
cs=0x192;eip=0x0013f3; 	T(MOV(cx, 2));	// 2932 mov     cx, 2 ;~ 00D0:13F3
cs=0x192;eip=0x0013f6; 	J(CALL(sub_11f89,0));	// 2933 call    sub_11F89 ;~ 00D0:13F6
cs=0x192;eip=0x0013f9; 	T(MOV(dx, 0x5DAC));	// 2934 mov     dx, 5DACh ;~ 00D0:13F9
cs=0x192;eip=0x0013fc; 	T(MOV(bx, 0x1BB2));	// 2935 mov     bx, 1BB2h ;~ 00D0:13FC
cs=0x192;eip=0x0013ff; 	J(JMP(loc_11209));	// 2936 jmp     loc_11209 ;~ 00D0:13FF
loc_11402:
	// 4697 
cs=0x192;eip=0x001402; 	X(MOV(byte_14a39, al));	// 2941 mov     byte_14A39, al ;~ 00D0:1402
cs=0x192;eip=0x001405; 	J(JMP(loc_111ab));	// 2942 jmp     loc_111AB ;~ 00D0:1405
loc_11408:
	// 4698 
cs=0x192;eip=0x001408; 	T(INC(al));	// 2946 inc     al ;~ 00D0:1408
cs=0x192;eip=0x00140a; 	J(JMP(loc_11402));	// 2947 jmp     short loc_11402 ;~ 00D0:140A
loc_1140c:
	// 4699 
cs=0x192;eip=0x00140c; 	T(TEST(byte_18995, 1));	// 2951 test    byte_18995, 1 ;~ 00D0:140C
cs=0x192;eip=0x001411; 	J(JZ(loc_11426));	// 2952 jz      short loc_11426 ;~ 00D0:1411
cs=0x192;eip=0x001413; 	T(MOV(al, byte_14a39));	// 2953 mov     al, byte_14A39 ;~ 00D0:1413
cs=0x192;eip=0x001416; 	T(OR(al, al));	// 2954 or      al, al ;~ 00D0:1416
cs=0x192;eip=0x001418; 	J(JZ(loc_11408));	// 2955 jz      short loc_11408 ;~ 00D0:1418
cs=0x192;eip=0x00141a; 	J(CALL(sub_11d00,0));	// 2956 call    sub_11D00 ;~ 00D0:141A
cs=0x192;eip=0x00141d; 	T(MOV(dx, 0x5DAC));	// 2957 mov     dx, 5DACh ;~ 00D0:141D
cs=0x192;eip=0x001420; 	T(MOV(bx, 0x1B65));	// 2958 mov     bx, 1B65h ;~ 00D0:1420
cs=0x192;eip=0x001423; 	J(JMP(loc_11209));	// 2959 jmp     loc_11209 ;~ 00D0:1423
loc_11426:
	// 4700 
cs=0x192;eip=0x001426; 	J(JMP(loc_111ab));	// 2964 jmp     loc_111AB ;~ 00D0:1426
ret_d0_1429:
	// 4701 
cs=0x192;eip=0x001429; 	T(CMP(byte_14a38, 0));	// 2966 cmp     byte_14A38, 0 ;~ 00D0:1429
cs=0x192;eip=0x00142e; 	J(JZ(loc_1145e));	// 2967 jz      short loc_1145E ;~ 00D0:142E
cs=0x192;eip=0x001430; 	T(CMP(byte_18e46, 0x0FF));	// 2968 cmp     byte_18E46, 0FFh ;~ 00D0:1430
cs=0x192;eip=0x001435; 	J(JZ(loc_11447));	// 2969 jz      short loc_11447 ;~ 00D0:1435
cs=0x192;eip=0x001437; 	T(MOV(dx, 0x9C4));	// 2970 mov     dx, 9C4h ;~ 00D0:1437
cs=0x192;eip=0x00143a; 	T(CMP(byte_14a39, 0));	// 2971 cmp     byte_14A39, 0 ;~ 00D0:143A
cs=0x192;eip=0x00143f; 	J(JZ(loc_11444));	// 2972 jz      short loc_11444 ;~ 00D0:143F
cs=0x192;eip=0x001441; 	T(MOV(dx, 0x9C9));	// 2973 mov     dx, 9C9h ;~ 00D0:1441
loc_11444:
	// 4702 
cs=0x192;eip=0x001444; 	J(CALL(sub_11be5,0));	// 2976 call    sub_11BE5 ;~ 00D0:1444
loc_11447:
	// 4703 
cs=0x192;eip=0x001447; 	T(CMP(byte_18e3a, 0x0FF));	// 2979 cmp     byte_18E3A, 0FFh ;~ 00D0:1447
cs=0x192;eip=0x00144c; 	J(JZ(loc_1145e));	// 2980 jz      short loc_1145E ;~ 00D0:144C
cs=0x192;eip=0x00144e; 	T(MOV(dx, 0x984));	// 2981 mov     dx, 984h ;~ 00D0:144E
cs=0x192;eip=0x001451; 	T(CMP(byte_14a39, 0));	// 2982 cmp     byte_14A39, 0 ;~ 00D0:1451
cs=0x192;eip=0x001456; 	J(JZ(loc_1145b));	// 2983 jz      short loc_1145B ;~ 00D0:1456
cs=0x192;eip=0x001458; 	T(MOV(dx, 0x989));	// 2984 mov     dx, 989h ;~ 00D0:1458
loc_1145b:
	// 4704 
cs=0x192;eip=0x00145b; 	J(CALL(sub_11be5,0));	// 2987 call    sub_11BE5 ;~ 00D0:145B
loc_1145e:
	// 4705 
cs=0x192;eip=0x00145e; 	X(MOV(byte_14a38, 0));	// 2991 mov     byte_14A38, 0 ;~ 00D0:145E
cs=0x192;eip=0x001463; 	T(TEST(byte_18995, 0x10));	// 2992 test    byte_18995, 10h ;~ 00D0:1463
cs=0x192;eip=0x001468; 	J(JNZ(loc_11426));	// 2993 jnz     short loc_11426 ;~ 00D0:1468
cs=0x192;eip=0x00146a; 	J(JMP(loc_11359));	// 2994 jmp     loc_11359 ;~ 00D0:146A
ret_d0_146d:
	// 4706 
cs=0x192;eip=0x00146d; 	J(CALL(sub_11c97,0));	// 2996 call    sub_11C97 ;~ 00D0:146D
cs=0x192;eip=0x001470; 	J(CALL(sub_11d7b,0));	// 2997 call    sub_11D7B ;~ 00D0:1470
cs=0x192;eip=0x001473; 	J(CALL(sub_11d6b,0));	// 2998 call    sub_11D6B ;~ 00D0:1473
cs=0x192;eip=0x001476; 	J(CALL(sub_11d99,0));	// 2999 call    sub_11D99 ;~ 00D0:1476
cs=0x192;eip=0x001479; 	T(MOV(cx, 4));	// 3000 mov     cx, 4 ;~ 00D0:1479
cs=0x192;eip=0x00147c; 	T(MOV(bx, 0x5FC3));	// 3001 mov     bx, 5FC3h ;~ 00D0:147C
loc_1147f:
	// 4707 
cs=0x192;eip=0x00147f; 	T(MOV(al, *(raddr(ds,bx))));	// 3004 mov     al, [bx] ;~ 00D0:147F
cs=0x192;eip=0x001481; 	T(INC(al));	// 3005 inc     al ;~ 00D0:1481
cs=0x192;eip=0x001483; 	T(CMP(al, 0x0C8));	// 3006 cmp     al, 0C8h ; 'È' ;~ 00D0:1483
cs=0x192;eip=0x001485; 	J(JNC(loc_11499));	// 3007 jnb     short loc_11499 ;~ 00D0:1485
cs=0x192;eip=0x001487; 	T(INC(bx));	// 3008 inc     bx ;~ 00D0:1487
cs=0x192;eip=0x001488; 	J(LOOP(loc_1147f));	// 3009 loop    loc_1147F ;~ 00D0:1488
cs=0x192;eip=0x00148a; 	X(DEC(byte_14a2d));	// 3010 dec     byte_14A2D ;~ 00D0:148A
cs=0x192;eip=0x00148e; 	X(ADD(word_14a14, 0x0FFE0));	// 3011 add     word_14A14, 0FFE0h ;~ 00D0:148E
cs=0x192;eip=0x001493; 	X(DEC(byte_14a38));	// 3012 dec     byte_14A38 ;~ 00D0:1493
cs=0x192;eip=0x001497; 	J(JNZ(loc_11426));	// 3013 jnz     short loc_11426 ;~ 00D0:1497
loc_11499:
	// 4708 
cs=0x192;eip=0x001499; 	T(MOV(al, 4));	// 3016 mov     al, 4 ;~ 00D0:1499
cs=0x192;eip=0x00149b; 	J(JMP(loc_111f8));	// 3017 jmp     loc_111F8 ;~ 00D0:149B
ret_d0_149e:
	// 4709 
cs=0x192;eip=0x00149e; 	J(CALL(sub_11d7b,0));	// 3019 call    sub_11D7B ;~ 00D0:149E
cs=0x192;eip=0x0014a1; 	J(CALL(sub_11c33,0));	// 3020 call    sub_11C33 ;~ 00D0:14A1
cs=0x192;eip=0x0014a4; 	J(CALL(sub_11d99,0));	// 3021 call    sub_11D99 ;~ 00D0:14A4
cs=0x192;eip=0x0014a7; 	J(CALL(sub_11ccd,0));	// 3022 call    sub_11CCD ;~ 00D0:14A7
cs=0x192;eip=0x0014aa; 	T(TEST(byte_18995, 8));	// 3023 test    byte_18995, 8 ;~ 00D0:14AA
cs=0x192;eip=0x0014af; 	J(JZ(loc_114c9));	// 3024 jz      short loc_114C9 ;~ 00D0:14AF
loc_114b1:
	// 4710 
cs=0x192;eip=0x0014b1; 	X(MOV(byte_18998, 1));	// 3027 mov     byte_18998, 1 ;~ 00D0:14B1
cs=0x192;eip=0x0014b6; 	X(MOV(byte_18997, 1));	// 3028 mov     byte_18997, 1 ;~ 00D0:14B6
cs=0x192;eip=0x0014bb; 	X(MOV(byte_14a38, 4));	// 3029 mov     byte_14A38, 4 ;~ 00D0:14BB
cs=0x192;eip=0x0014c0; 	T(MOV(bx, 0x146D));	// 3030 mov     bx, 146Dh ;~ 00D0:14C0
cs=0x192;eip=0x0014c3; 	T(MOV(dx, 0x5DD6));	// 3031 mov     dx, 5DD6h ;~ 00D0:14C3
cs=0x192;eip=0x0014c6; 	J(JMP(loc_11209));	// 3032 jmp     loc_11209 ;~ 00D0:14C6
loc_114c9:
	// 4711 
cs=0x192;eip=0x0014c9; 	T(TEST(byte_18995, 0x10));	// 3036 test    byte_18995, 10h ;~ 00D0:14C9
cs=0x192;eip=0x0014ce; 	J(JNZ(loc_114dd));	// 3037 jnz     short loc_114DD ;~ 00D0:14CE
cs=0x192;eip=0x0014d0; 	T(TEST(byte_18995, 1));	// 3038 test    byte_18995, 1 ;~ 00D0:14D0
cs=0x192;eip=0x0014d5; 	J(JZ(loc_114da));	// 3039 jz      short loc_114DA ;~ 00D0:14D5
cs=0x192;eip=0x0014d7; 	J(JMP(loc_111ab));	// 3040 jmp     loc_111AB ;~ 00D0:14D7
loc_114da:
	// 4712 
cs=0x192;eip=0x0014da; 	J(JMP(loc_11367));	// 3044 jmp     loc_11367 ;~ 00D0:14DA
loc_114dd:
	// 4713 
cs=0x192;eip=0x0014dd; 	X(MOV(byte_14a38, 5));	// 3049 mov     byte_14A38, 5 ;~ 00D0:14DD
cs=0x192;eip=0x0014e2; 	T(MOV(bx, 0x14EB));	// 3050 mov     bx, 14EBh ;~ 00D0:14E2
cs=0x192;eip=0x0014e5; 	T(MOV(dx, 0x5DD6));	// 3051 mov     dx, 5DD6h ;~ 00D0:14E5
cs=0x192;eip=0x0014e8; 	J(JMP(loc_11209));	// 3052 jmp     loc_11209 ;~ 00D0:14E8
ret_d0_14eb:
	// 4714 
cs=0x192;eip=0x0014eb; 	T(MOV(bx, 0x14F4));	// 3054 mov     bx, 14F4h ;~ 00D0:14EB
cs=0x192;eip=0x0014ee; 	T(MOV(dx, 0x5E2A));	// 3055 mov     dx, 5E2Ah ;~ 00D0:14EE
cs=0x192;eip=0x0014f1; 	J(JMP(loc_11209));	// 3056 jmp     loc_11209 ;~ 00D0:14F1
ret_d0_14f4:
	// 4715 
cs=0x192;eip=0x0014f4; 	T(MOV(al, byte_18e28));	// 3058 mov     al, byte_18E28 ;~ 00D0:14F4
cs=0x192;eip=0x0014f7; 	T(INC(al));	// 3059 inc     al ;~ 00D0:14F7
cs=0x192;eip=0x0014f9; 	J(JNZ(loc_114fe));	// 3060 jnz     short loc_114FE ;~ 00D0:14F9
cs=0x192;eip=0x0014fb; 	J(JMP(loc_1129a));	// 3061 jmp     loc_1129A ;~ 00D0:14FB
loc_114fe:
	// 4716 
cs=0x192;eip=0x0014fe; 	T(MOV(dx, 0x924));	// 3065 mov     dx, 924h ;~ 00D0:14FE
cs=0x192;eip=0x001501; 	T(CMP(byte_14a39, 0));	// 3066 cmp     byte_14A39, 0 ;~ 00D0:1501
cs=0x192;eip=0x001506; 	J(JZ(loc_1150b));	// 3067 jz      short loc_1150B ;~ 00D0:1506
cs=0x192;eip=0x001508; 	T(MOV(dx, 0x929));	// 3068 mov     dx, 929h ;~ 00D0:1508
loc_1150b:
	// 4717 
cs=0x192;eip=0x00150b; 	J(CALL(sub_11be5,0));	// 3071 call    sub_11BE5 ;~ 00D0:150B
cs=0x192;eip=0x00150e; 	J(JMP(loc_1129a));	// 3072 jmp     loc_1129A ;~ 00D0:150E
ret_d0_1511:
	// 4718 
cs=0x192;eip=0x001511; 	J(CALL(sub_11d7b,0));	// 3074 call    sub_11D7B ;~ 00D0:1511
cs=0x192;eip=0x001514; 	J(CALL(sub_11c33,0));	// 3075 call    sub_11C33 ;~ 00D0:1514
cs=0x192;eip=0x001517; 	J(CALL(sub_11d99,0));	// 3076 call    sub_11D99 ;~ 00D0:1517
cs=0x192;eip=0x00151a; 	J(CALL(sub_11ccd,0));	// 3077 call    sub_11CCD ;~ 00D0:151A
cs=0x192;eip=0x00151d; 	T(MOV(al, byte_14a28));	// 3078 mov     al, byte_14A28 ;~ 00D0:151D
cs=0x192;eip=0x001520; 	T(INC(al));	// 3079 inc     al ;~ 00D0:1520
cs=0x192;eip=0x001522; 	J(JZ(loc_11551));	// 3080 jz      short loc_11551 ;~ 00D0:1522
cs=0x192;eip=0x001524; 	T(INC(al));	// 3081 inc     al ;~ 00D0:1524
cs=0x192;eip=0x001526; 	J(JZ(loc_11551));	// 3082 jz      short loc_11551 ;~ 00D0:1526
cs=0x192;eip=0x001528; 	X(DEC(byte_14a28));	// 3083 dec     byte_14A28 ;~ 00D0:1528
cs=0x192;eip=0x00152c; 	J(JZ(loc_11531));	// 3084 jz      short loc_11531 ;~ 00D0:152C
cs=0x192;eip=0x00152e; 	J(JMP(loc_111ab));	// 3085 jmp     loc_111AB ;~ 00D0:152E
loc_11531:
	// 4719 
cs=0x192;eip=0x001531; 	T(MOV(cx, 0x11));	// 3089 mov     cx, 11h ;~ 00D0:1531
cs=0x192;eip=0x001534; 	T(MOV(si, 0x5F5C));	// 3090 mov     si, 5F5Ch ;~ 00D0:1534
cs=0x192;eip=0x001537; 	T(MOV(bx, 0x58B));	// 3091 mov     bx, 58Bh ;~ 00D0:1537
cs=0x192;eip=0x00153a; 	J(CALL(sub_10bf7,0));	// 3092 call    sub_10BF7 ;~ 00D0:153A
cs=0x192;eip=0x00153d; 	T(MOV(cx, 0x12));	// 3093 mov     cx, 12h ;~ 00D0:153D
cs=0x192;eip=0x001540; 	T(MOV(si, 0x5F6D));	// 3094 mov     si, 5F6Dh ;~ 00D0:1540
cs=0x192;eip=0x001543; 	T(MOV(bx, 0x5EB));	// 3095 mov     bx, 5EBh ;~ 00D0:1543
cs=0x192;eip=0x001546; 	J(CALL(sub_10bf7,0));	// 3096 call    sub_10BF7 ;~ 00D0:1546
cs=0x192;eip=0x001549; 	X(MOV(byte_14a28, 0x0C8));	// 3097 mov     byte_14A28, 0C8h ; 'È' ;~ 00D0:1549
cs=0x192;eip=0x00154e; 	J(JMP(loc_11367));	// 3098 jmp     loc_11367 ;~ 00D0:154E
loc_11551:
	// 4720 
cs=0x192;eip=0x001551; 	T(MOV(al, byte_18995));	// 3103 mov     al, byte_18995 ;~ 00D0:1551
cs=0x192;eip=0x001554; 	T(TEST(al, 8));	// 3104 test    al, 8 ;~ 00D0:1554
cs=0x192;eip=0x001556; 	J(JZ(loc_1155b));	// 3105 jz      short loc_1155B ;~ 00D0:1556
cs=0x192;eip=0x001558; 	J(JMP(loc_114b1));	// 3106 jmp     loc_114B1 ;~ 00D0:1558
loc_1155b:
	// 4721 
cs=0x192;eip=0x00155b; 	T(TEST(al, 0x10));	// 3110 test    al, 10h ;~ 00D0:155B
cs=0x192;eip=0x00155d; 	J(JZ(loc_11562));	// 3111 jz      short loc_11562 ;~ 00D0:155D
cs=0x192;eip=0x00155f; 	J(JMP(loc_114dd));	// 3112 jmp     loc_114DD ;~ 00D0:155F
loc_11562:
	// 4722 
cs=0x192;eip=0x001562; 	T(TEST(al, 2));	// 3116 test    al, 2 ;~ 00D0:1562
cs=0x192;eip=0x001564; 	J(JNZ(loc_11569));	// 3117 jnz     short loc_11569 ;~ 00D0:1564
cs=0x192;eip=0x001566; 	J(JMP(loc_11367));	// 3118 jmp     loc_11367 ;~ 00D0:1566
loc_11569:
	// 4723 
cs=0x192;eip=0x001569; 	J(JMP(loc_111ab));	// 3122 jmp     loc_111AB ;~ 00D0:1569
loc_1156c:
	// 4724 
cs=0x192;eip=0x00156c; 	T(CMP(byte_14a2e, 0x0FD));	// 3126 cmp     byte_14A2E, 0FDh ; 'ý' ;~ 00D0:156C
cs=0x192;eip=0x001571; 	J(JNZ(loc_11576));	// 3127 jnz     short loc_11576 ;~ 00D0:1571
cs=0x192;eip=0x001573; 	J(JMP(loc_11213));	// 3128 jmp     loc_11213 ;~ 00D0:1573
loc_11576:
	// 4725 
cs=0x192;eip=0x001576; 	J(CALL(sub_11d99,0));	// 3132 call    sub_11D99 ;~ 00D0:1576
cs=0x192;eip=0x001579; 	X(XOR(byte_1899a, 1));	// 3133 xor     byte_1899A, 1 ;~ 00D0:1579
cs=0x192;eip=0x00157e; 	J(JNZ(loc_1156c));	// 3134 jnz     short loc_1156C ;~ 00D0:157E
cs=0x192;eip=0x001580; 	T(MOV(dx, 0x1F5C));	// 3135 mov     dx, 1F5Ch ;~ 00D0:1580
cs=0x192;eip=0x001583; 	T(MOV(ax, 0x484));	// 3136 mov     ax, 484h ;~ 00D0:1583
cs=0x192;eip=0x001586; 	J(CALL(sub_11ee6,0));	// 3137 call    sub_11EE6 ;~ 00D0:1586
cs=0x192;eip=0x001589; 	T(MOV(dx, 0x5B6A));	// 3138 mov     dx, 5B6Ah ;~ 00D0:1589
cs=0x192;eip=0x00158c; 	T(MOV(ax, 4));	// 3139 mov     ax, 4 ;~ 00D0:158C
cs=0x192;eip=0x00158f; 	J(CALL(sub_11ee6,0));	// 3140 call    sub_11EE6 ;~ 00D0:158F
cs=0x192;eip=0x001592; 	X(DEC(byte_14a38));	// 3141 dec     byte_14A38 ;~ 00D0:1592
cs=0x192;eip=0x001596; 	J(JZ(loc_1159b));	// 3142 jz      short loc_1159B ;~ 00D0:1596
cs=0x192;eip=0x001598; 	J(JMP(loc_111ab));	// 3143 jmp     loc_111AB ;~ 00D0:1598
loc_1159b:
	// 4726 
cs=0x192;eip=0x00159b; 	T(MOV(dx, 0x1F25));	// 3147 mov     dx, 1F25h ;~ 00D0:159B
cs=0x192;eip=0x00159e; 	T(MOV(ax, 0x484));	// 3148 mov     ax, 484h ;~ 00D0:159E
cs=0x192;eip=0x0015a1; 	J(CALL(sub_11ee6,0));	// 3149 call    sub_11EE6 ;~ 00D0:15A1
cs=0x192;eip=0x0015a4; 	X(MOV(byte_14a28, 0x10));	// 3150 mov     byte_14A28, 10h ;~ 00D0:15A4
cs=0x192;eip=0x0015a9; 	J(JMP(loc_11367));	// 3151 jmp     loc_11367 ;~ 00D0:15A9
ret_d0_15ac:
	// 4727 
cs=0x192;eip=0x0015ac; 	X(DEC(byte_14a38));	// 3153 dec     byte_14A38 ;~ 00D0:15AC
cs=0x192;eip=0x0015b0; 	J(JZ(loc_115b5));	// 3154 jz      short loc_115B5 ;~ 00D0:15B0
cs=0x192;eip=0x0015b2; 	J(JMP(loc_111ab));	// 3155 jmp     loc_111AB ;~ 00D0:15B2
loc_115b5:
	// 4728 
cs=0x192;eip=0x0015b5; 	T(MOV(bx, word_14a16));	// 3159 mov     bx, word_14A16 ;~ 00D0:15B5
cs=0x192;eip=0x0015b9; 	T(MOV(al, *(raddr(ds,bx))));	// 3160 mov     al, [bx] ;~ 00D0:15B9
cs=0x192;eip=0x0015bb; 	X(MOV(byte_18990, al));	// 3161 mov     byte_18990, al ;~ 00D0:15BB
cs=0x192;eip=0x0015be; 	T(MOV(cx, 5));	// 3162 mov     cx, 5 ;~ 00D0:15BE
loc_115c1:
	// 4729 
cs=0x192;eip=0x0015c1; 	T(INC(bx));	// 3165 inc     bx ;~ 00D0:15C1
cs=0x192;eip=0x0015c2; 	T(MOV(al, *(raddr(ds,bx))));	// 3166 mov     al, [bx] ;~ 00D0:15C2
cs=0x192;eip=0x0015c4; 	T(DEC(bx));	// 3167 dec     bx ;~ 00D0:15C4
cs=0x192;eip=0x0015c5; 	X(MOV(*(raddr(ds,bx)), al));	// 3168 mov     [bx], al ;~ 00D0:15C5
cs=0x192;eip=0x0015c7; 	T(INC(bx));	// 3169 inc     bx ;~ 00D0:15C7
cs=0x192;eip=0x0015c8; 	T(CMP(al, 3));	// 3170 cmp     al, 3 ;~ 00D0:15C8
cs=0x192;eip=0x0015ca; 	J(JZ(loc_115ce));	// 3171 jz      short loc_115CE ;~ 00D0:15CA
cs=0x192;eip=0x0015cc; 	J(LOOP(loc_115c1));	// 3172 loop    loc_115C1 ;~ 00D0:15CC
loc_115ce:
	// 4730 
cs=0x192;eip=0x0015ce; 	T(DEC(bx));	// 3175 dec     bx ;~ 00D0:15CE
cs=0x192;eip=0x0015cf; 	T(MOV(al, byte_18990));	// 3176 mov     al, byte_18990 ;~ 00D0:15CF
cs=0x192;eip=0x0015d2; 	T(CMP(al, 4));	// 3177 cmp     al, 4 ;~ 00D0:15D2
cs=0x192;eip=0x0015d4; 	J(JNZ(loc_1160e));	// 3178 jnz     short loc_1160E ;~ 00D0:15D4
cs=0x192;eip=0x0015d6; 	X(INC(byte_18e0a));	// 3179 inc     byte_18E0A ;~ 00D0:15D6
cs=0x192;eip=0x0015da; 	T(MOV(bx, word_14a04));	// 3180 mov     bx, word_14A04 ;~ 00D0:15DA
cs=0x192;eip=0x0015de; 	T(MOV(al, *(raddr(ds,bx))));	// 3181 mov     al, [bx] ;~ 00D0:15DE
cs=0x192;eip=0x0015e0; 	T(OR(al, al));	// 3182 or      al, al ;~ 00D0:15E0
cs=0x192;eip=0x0015e2; 	J(JZ(loc_115f1));	// 3183 jz      short loc_115F1 ;~ 00D0:15E2
cs=0x192;eip=0x0015e4; 	T(ADD(al, 5));	// 3184 add     al, 5 ;~ 00D0:15E4
cs=0x192;eip=0x0015e6; 	T(CMP(al, byte_18e0a));	// 3185 cmp     al, byte_18E0A ;~ 00D0:15E6
cs=0x192;eip=0x0015ea; 	J(JNZ(loc_115f1));	// 3186 jnz     short loc_115F1 ;~ 00D0:15EA
cs=0x192;eip=0x0015ec; 	X(MOV(byte_18e08, 8));	// 3187 mov     byte_18E08, 8 ;~ 00D0:15EC
loc_115f1:
	// 4731 
cs=0x192;eip=0x0015f1; 	X(INC(byte_14a30));	// 3191 inc     byte_14A30 ;~ 00D0:15F1
cs=0x192;eip=0x0015f5; 	J(CALL(sub_1107c,0));	// 3192 call    sub_1107C ;~ 00D0:15F5
cs=0x192;eip=0x0015f8; 	T(AND(al, 1));	// 3193 and     al, 1 ;~ 00D0:15F8
cs=0x192;eip=0x0015fa; 	T(ADD(al, 0x25));	// 3194 add     al, 25h ; '%' ;~ 00D0:15FA
cs=0x192;eip=0x0015fc; 	X(MOV(byte_18e0c, al));	// 3195 mov     byte_18E0C, al ;~ 00D0:15FC
cs=0x192;eip=0x0015ff; 	T(MOV(si, 0x5FA7));	// 3196 mov     si, 5FA7h ;~ 00D0:15FF
cs=0x192;eip=0x001602; 	J(CALL(sub_104b7,0));	// 3197 call    sub_104B7 ;~ 00D0:1602
cs=0x192;eip=0x001605; 	T(MOV(cx, 0x64));	// 3198 mov     cx, 64h ; 'd' ;~ 00D0:1605
cs=0x192;eip=0x001608; 	J(CALL(sub_11f6b,0));	// 3199 call    sub_11F6B ;~ 00D0:1608
cs=0x192;eip=0x00160b; 	J(JMP(loc_11367));	// 3200 jmp     loc_11367 ;~ 00D0:160B
loc_1160e:
	// 4732 
cs=0x192;eip=0x00160e; 	T(XOR(ah, ah));	// 3204 xor     ah, ah ;~ 00D0:160E
cs=0x192;eip=0x001610; 	T(CMP(byte_1899b, ah));	// 3205 cmp     byte_1899B, ah ;~ 00D0:1610
cs=0x192;eip=0x001614; 	J(JNZ(loc_11618));	// 3206 jnz     short loc_11618 ;~ 00D0:1614
cs=0x192;eip=0x001616; 	T(MOV(ah, 0x80));	// 3207 mov     ah, 80h ; '€' ;~ 00D0:1616
loc_11618:
	// 4733 
cs=0x192;eip=0x001618; 	T(MOV(al, byte_14a3d));	// 3210 mov     al, byte_14A3D ;~ 00D0:1618
cs=0x192;eip=0x00161b; 	T(OR(al, al));	// 3211 or      al, al ;~ 00D0:161B
cs=0x192;eip=0x00161d; 	J(JNZ(loc_11622));	// 3212 jnz     short loc_11622 ;~ 00D0:161D
cs=0x192;eip=0x00161f; 	T(MOV(ax, 3));	// 3213 mov     ax, 3 ;~ 00D0:161F
loc_11622:
	// 4734 
cs=0x192;eip=0x001622; 	T(OR(al, ah));	// 3216 or      al, ah ;~ 00D0:1622
cs=0x192;eip=0x001624; 	X(MOV(*(raddr(ds,bx)), al));	// 3217 mov     [bx], al ;~ 00D0:1624
cs=0x192;eip=0x001626; 	T(OR(ah, ah));	// 3218 or      ah, ah ;~ 00D0:1626
cs=0x192;eip=0x001628; 	J(JZ(loc_1162f));	// 3219 jz      short loc_1162F ;~ 00D0:1628
cs=0x192;eip=0x00162a; 	X(MOV(byte_1899b, 1));	// 3220 mov     byte_1899B, 1 ;~ 00D0:162A
loc_1162f:
	// 4735 
cs=0x192;eip=0x00162f; 	T(MOV(al, byte_18990));	// 3223 mov     al, byte_18990 ;~ 00D0:162F
cs=0x192;eip=0x001632; 	T(TEST(al, 0x80));	// 3224 test    al, 80h ;~ 00D0:1632
cs=0x192;eip=0x001634; 	J(JZ(loc_11640));	// 3225 jz      short loc_11640 ;~ 00D0:1634
cs=0x192;eip=0x001636; 	T(AND(al, 0x7F));	// 3226 and     al, 7Fh ;~ 00D0:1636
cs=0x192;eip=0x001638; 	X(PUSH(ax));	// 3227 push    ax ;~ 00D0:1638
cs=0x192;eip=0x001639; 	T(MOV(si, 0x5F93));	// 3228 mov     si, 5F93h ;~ 00D0:1639
cs=0x192;eip=0x00163c; 	J(CALL(sub_104b7,0));	// 3229 call    sub_104B7 ;~ 00D0:163C
cs=0x192;eip=0x00163f; 	X(POP(ax));	// 3230 pop     ax ;~ 00D0:163F
loc_11640:
	// 4736 
cs=0x192;eip=0x001640; 	T(CMP(al, 3));	// 3233 cmp     al, 3 ;~ 00D0:1640
cs=0x192;eip=0x001642; 	J(JNZ(loc_11646));	// 3234 jnz     short loc_11646 ;~ 00D0:1642
cs=0x192;eip=0x001644; 	T(XOR(al, al));	// 3235 xor     al, al ;~ 00D0:1644
loc_11646:
	// 4737 
cs=0x192;eip=0x001646; 	X(MOV(byte_14a3d, al));	// 3238 mov     byte_14A3D, al ;~ 00D0:1646
cs=0x192;eip=0x001649; 	J(CALL(sub_11f32,0));	// 3239 call    sub_11F32 ;~ 00D0:1649
cs=0x192;eip=0x00164c; 	J(JMP(loc_11367));	// 3240 jmp     loc_11367 ;~ 00D0:164C
ret_d0_164f:
	// 4738 
cs=0x192;eip=0x00164f; 	T(CMP(byte_18e2e, 0x0FF));	// 3242 cmp     byte_18E2E, 0FFh ;~ 00D0:164F
cs=0x192;eip=0x001654; 	J(JNZ(loc_11659));	// 3243 jnz     short loc_11659 ;~ 00D0:1654
cs=0x192;eip=0x001656; 	J(JMP(loc_116d9));	// 3244 jmp     loc_116D9 ;~ 00D0:1656
loc_11659:
	// 4739 
cs=0x192;eip=0x001659; 	T(CMP(byte_14a3d, 0));	// 3248 cmp     byte_14A3D, 0 ;~ 00D0:1659
cs=0x192;eip=0x00165e; 	J(JZ(loc_116c2));	// 3249 jz      short loc_116C2 ;~ 00D0:165E
cs=0x192;eip=0x001660; 	T(MOV(al, byte_14a39));	// 3250 mov     al, byte_14A39 ;~ 00D0:1660
cs=0x192;eip=0x001663; 	T(DEC(al));	// 3251 dec     al ;~ 00D0:1663
cs=0x192;eip=0x001665; 	T(MOV(bx, 0x508));	// 3252 mov     bx, 508h ;~ 00D0:1665
cs=0x192;eip=0x001668; 	T(MOV(dx, 0x45));	// 3253 mov     dx, 45h ; 'E' ;~ 00D0:1668
cs=0x192;eip=0x00166b; 	J(JZ(loc_11673));	// 3254 jz      short loc_11673 ;~ 00D0:166B
cs=0x192;eip=0x00166d; 	T(MOV(bx, 4));	// 3255 mov     bx, 4 ;~ 00D0:166D
cs=0x192;eip=0x001670; 	T(MOV(dx, 0x40));	// 3256 mov     dx, 40h ; '@' ;~ 00D0:1670
loc_11673:
	// 4740 
cs=0x192;eip=0x001673; 	T(MOV(al, byte_14a2e));	// 3259 mov     al, byte_14A2E ;~ 00D0:1673
cs=0x192;eip=0x001676; 	T(ADD(al, bh));	// 3260 add     al, bh ;~ 00D0:1676
cs=0x192;eip=0x001678; 	T(ADD(dx, word_14a14));	// 3261 add     dx, word_14A14 ;~ 00D0:1678
cs=0x192;eip=0x00167c; 	X(MOV(byte_19e0d, al));	// 3262 mov     byte_19E0D, al ;~ 00D0:167C
cs=0x192;eip=0x00167f; 	T(MOV(al, byte_14a2d));	// 3263 mov     al, byte_14A2D ;~ 00D0:167F
cs=0x192;eip=0x001682; 	T(ADD(al, 2));	// 3264 add     al, 2 ;~ 00D0:1682
cs=0x192;eip=0x001684; 	X(MOV(byte_19e0c, al));	// 3265 mov     byte_19E0C, al ;~ 00D0:1684
cs=0x192;eip=0x001687; 	T(MOV(al, byte_14a3d));	// 3266 mov     al, byte_14A3D ;~ 00D0:1687
cs=0x192;eip=0x00168a; 	T(ADD(al, al));	// 3267 add     al, al ;~ 00D0:168A
cs=0x192;eip=0x00168c; 	T(ADD(al, 0x0D0));	// 3268 add     al, 0D0h ; 'Ð' ;~ 00D0:168C
cs=0x192;eip=0x00168e; 	X(MOV(byte_19e0b, al));	// 3269 mov     byte_19E0B, al ;~ 00D0:168E
cs=0x192;eip=0x001691; 	X(MOV(byte_14a3d, 0));	// 3270 mov     byte_14A3D, 0 ;~ 00D0:1691
cs=0x192;eip=0x001696; 	T(MOV(cl, bl));	// 3271 mov     cl, bl ;~ 00D0:1696
cs=0x192;eip=0x001698; 	T(MOV(ch, 0));	// 3272 mov     ch, 0 ;~ 00D0:1698
cs=0x192;eip=0x00169a; 	T(MOV(bx, dx));	// 3273 mov     bx, dx ;~ 00D0:169A
cs=0x192;eip=0x00169c; 	J(CALL(sub_11f32,0));	// 3274 call    sub_11F32 ;~ 00D0:169C
cs=0x192;eip=0x00169f; 	X(MOV(word_19e0e, bx));	// 3275 mov     word_19E0E, bx ;~ 00D0:169F
cs=0x192;eip=0x0016a3; 	X(MOV(byte_19e10, cl));	// 3276 mov     byte_19E10, cl ;~ 00D0:16A3
cs=0x192;eip=0x0016a7; 	X(MOV(byte_19e11, cl));	// 3277 mov     byte_19E11, cl ;~ 00D0:16A7
cs=0x192;eip=0x0016ab; 	T(MOV(bx, 0x6FB1));	// 3278 mov     bx, 6FB1h ;~ 00D0:16AB
cs=0x192;eip=0x0016ae; 	T(TEST(byte_18995, 8));	// 3279 test    byte_18995, 8 ;~ 00D0:16AE
cs=0x192;eip=0x0016b3; 	J(JNZ(loc_116be));	// 3280 jnz     short loc_116BE ;~ 00D0:16B3
cs=0x192;eip=0x0016b5; 	T(TEST(byte_18995, 4));	// 3281 test    byte_18995, 4 ;~ 00D0:16B5
cs=0x192;eip=0x0016ba; 	J(JZ(loc_116d9));	// 3282 jz      short loc_116D9 ;~ 00D0:16BA
cs=0x192;eip=0x0016bc; 	X(INC(*(raddr(ds,bx))));	// 3283 inc     byte ptr [bx] ;~ 00D0:16BC
loc_116be:
	// 4741 
cs=0x192;eip=0x0016be; 	X(INC(*(raddr(ds,bx))));	// 3286 inc     byte ptr [bx] ;~ 00D0:16BE
cs=0x192;eip=0x0016c0; 	J(JMP(loc_116d9));	// 3287 jmp     short loc_116D9 ;~ 00D0:16C0
loc_116c2:
	// 4742 
cs=0x192;eip=0x0016c2; 	T(CMP(byte_14a38, 0));	// 3291 cmp     byte_14A38, 0 ;~ 00D0:16C2
cs=0x192;eip=0x0016c7; 	J(JZ(loc_116d9));	// 3292 jz      short loc_116D9 ;~ 00D0:16C7
cs=0x192;eip=0x0016c9; 	T(MOV(dx, 0x924));	// 3293 mov     dx, 924h ;~ 00D0:16C9
cs=0x192;eip=0x0016cc; 	T(CMP(byte_14a39, 0));	// 3294 cmp     byte_14A39, 0 ;~ 00D0:16CC
cs=0x192;eip=0x0016d1; 	J(JZ(loc_116d6));	// 3295 jz      short loc_116D6 ;~ 00D0:16D1
cs=0x192;eip=0x0016d3; 	T(MOV(dx, 0x929));	// 3296 mov     dx, 929h ;~ 00D0:16D3
loc_116d6:
	// 4743 
cs=0x192;eip=0x0016d6; 	J(CALL(sub_11be5,0));	// 3299 call    sub_11BE5 ;~ 00D0:16D6
loc_116d9:
	// 4744 
cs=0x192;eip=0x0016d9; 	X(MOV(byte_14a38, 0));	// 3303 mov     byte_14A38, 0 ;~ 00D0:16D9
cs=0x192;eip=0x0016de; 	T(MOV(al, byte_18995));	// 3304 mov     al, byte_18995 ;~ 00D0:16DE
cs=0x192;eip=0x0016e1; 	T(TEST(al, 0x10));	// 3305 test    al, 10h ;~ 00D0:16E1
cs=0x192;eip=0x0016e3; 	J(JZ(loc_116e8));	// 3306 jz      short loc_116E8 ;~ 00D0:16E3
cs=0x192;eip=0x0016e5; 	J(JMP(loc_111ab));	// 3307 jmp     loc_111AB ;~ 00D0:16E5
loc_116e8:
	// 4745 
cs=0x192;eip=0x0016e8; 	J(JMP(loc_11367));	// 3311 jmp     loc_11367 ;~ 00D0:16E8
ret_d0_16eb:
	// 4746 
cs=0x192;eip=0x0016eb; 	X(MOV(byte_14a38, 2));	// 3313 mov     byte_14A38, 2 ;~ 00D0:16EB
cs=0x192;eip=0x0016f0; 	T(MOV(bx, 0x16F9));	// 3314 mov     bx, 16F9h ;~ 00D0:16F0
cs=0x192;eip=0x0016f3; 	T(MOV(dx, 0x5E00));	// 3315 mov     dx, 5E00h ;~ 00D0:16F3
cs=0x192;eip=0x0016f6; 	J(JMP(loc_11209));	// 3316 jmp     loc_11209 ;~ 00D0:16F6
ret_d0_16f9:
	// 4747 
cs=0x192;eip=0x0016f9; 	X(DEC(byte_14a38));	// 3318 dec     byte_14A38 ;~ 00D0:16F9
cs=0x192;eip=0x0016fd; 	J(JNZ(loc_11708));	// 3319 jnz     short loc_11708 ;~ 00D0:16FD
cs=0x192;eip=0x0016ff; 	T(MOV(bx, 0x1722));	// 3320 mov     bx, 1722h ;~ 00D0:16FF
cs=0x192;eip=0x001702; 	T(MOV(dx, 0x5DD6));	// 3321 mov     dx, 5DD6h ;~ 00D0:1702
cs=0x192;eip=0x001705; 	J(JMP(loc_11209));	// 3322 jmp     loc_11209 ;~ 00D0:1705
loc_11708:
	// 4748 
cs=0x192;eip=0x001708; 	T(CMP(byte_18e29, 0x0FF));	// 3326 cmp     byte_18E29, 0FFh ;~ 00D0:1708
cs=0x192;eip=0x00170d; 	J(JZ(loc_1171f));	// 3327 jz      short loc_1171F ;~ 00D0:170D
cs=0x192;eip=0x00170f; 	T(MOV(dx, 0x925));	// 3328 mov     dx, 925h ;~ 00D0:170F
cs=0x192;eip=0x001712; 	T(CMP(byte_14a39, 0));	// 3329 cmp     byte_14A39, 0 ;~ 00D0:1712
cs=0x192;eip=0x001717; 	J(JZ(loc_1171c));	// 3330 jz      short loc_1171C ;~ 00D0:1717
cs=0x192;eip=0x001719; 	T(MOV(dx, 0x928));	// 3331 mov     dx, 928h ;~ 00D0:1719
loc_1171c:
	// 4749 
cs=0x192;eip=0x00171c; 	J(CALL(sub_11be5,0));	// 3334 call    sub_11BE5 ;~ 00D0:171C
loc_1171f:
	// 4750 
cs=0x192;eip=0x00171f; 	J(JMP(loc_111ab));	// 3337 jmp     loc_111AB ;~ 00D0:171F
ret_d0_1722:
	// 4751 
cs=0x192;eip=0x001722; 	J(JMP(loc_11367));	// 3339 jmp     loc_11367 ;~ 00D0:1722
ret_d0_1725:
	// 4752 
cs=0x192;eip=0x001725; 	J(CALL(sub_11ff3,0));	// 3341 call    sub_11FF3 ;~ 00D0:1725
cs=0x192;eip=0x001728; 	J(CALL(sub_11d36,0));	// 3342 call    sub_11D36 ;~ 00D0:1728
cs=0x192;eip=0x00172b; 	J(JNZ(loc_11740));	// 3343 jnz     short loc_11740 ;~ 00D0:172B
cs=0x192;eip=0x00172d; 	T(MOV(dx, 0x5E7E));	// 3344 mov     dx, 5E7Eh ;~ 00D0:172D
cs=0x192;eip=0x001730; 	X(MOV(byte_18997, 1));	// 3345 mov     byte_18997, 1 ;~ 00D0:1730
cs=0x192;eip=0x001735; 	X(MOV(byte_18998, 1));	// 3346 mov     byte_18998, 1 ;~ 00D0:1735
cs=0x192;eip=0x00173a; 	T(MOV(bx, 0x1A05));	// 3347 mov     bx, 1A05h ;~ 00D0:173A
cs=0x192;eip=0x00173d; 	J(JMP(loc_11209));	// 3348 jmp     loc_11209 ;~ 00D0:173D
loc_11740:
	// 4753 
cs=0x192;eip=0x001740; 	T(MOV(al, byte_14a28));	// 3352 mov     al, byte_14A28 ;~ 00D0:1740
cs=0x192;eip=0x001743; 	T(CMP(al, 0x10));	// 3353 cmp     al, 10h ;~ 00D0:1743
cs=0x192;eip=0x001745; 	J(JNZ(loc_1174a));	// 3354 jnz     short loc_1174A ;~ 00D0:1745
cs=0x192;eip=0x001747; 	J(JMP(loc_11842));	// 3355 jmp     loc_11842 ;~ 00D0:1747
loc_1174a:
	// 4754 
cs=0x192;eip=0x00174a; 	T(CMP(al, 0x0C8));	// 3359 cmp     al, 0C8h ; 'È' ;~ 00D0:174A
cs=0x192;eip=0x00174c; 	J(JNZ(loc_11751));	// 3360 jnz     short loc_11751 ;~ 00D0:174C
cs=0x192;eip=0x00174e; 	J(JMP(loc_128f6));	// 3361 jmp     loc_128F6 ;~ 00D0:174E
loc_11751:
	// 4755 
cs=0x192;eip=0x001751; 	T(TEST(byte_18995, 0x10));	// 3365 test    byte_18995, 10h ;~ 00D0:1751
cs=0x192;eip=0x001756; 	J(JNZ(loc_1175b));	// 3366 jnz     short loc_1175B ;~ 00D0:1756
cs=0x192;eip=0x001758; 	J(JMP(loc_1182c));	// 3367 jmp     loc_1182C ;~ 00D0:1758
loc_1175b:
	// 4756 
cs=0x192;eip=0x00175b; 	T(CMP(byte_18e36, 0x0FF));	// 3371 cmp     byte_18E36, 0FFh ;~ 00D0:175B
cs=0x192;eip=0x001760; 	J(JNZ(loc_11765));	// 3372 jnz     short loc_11765 ;~ 00D0:1760
loc_11762:
	// 4757 
cs=0x192;eip=0x001762; 	J(JMP(loc_1180c));	// 3375 jmp     loc_1180C ;~ 00D0:1762
loc_11765:
	// 4758 
cs=0x192;eip=0x001765; 	T(MOV(bx, word_14a14));	// 3379 mov     bx, word_14A14 ;~ 00D0:1765
cs=0x192;eip=0x001769; 	T(ADD(bx, 0x4E6));	// 3380 add     bx, 4E6h ;~ 00D0:1769
cs=0x192;eip=0x00176d; 	T(CMP(*(raddr(ds,bx)), 0x8A));	// 3381 cmp     byte ptr [bx], 8Ah ; 'Š' ;~ 00D0:176D
cs=0x192;eip=0x001770; 	J(JNZ(loc_11762));	// 3382 jnz     short loc_11762 ;~ 00D0:1770
cs=0x192;eip=0x001772; 	T(MOV(bx, word_14a1c));	// 3383 mov     bx, word_14A1C ;~ 00D0:1772
cs=0x192;eip=0x001776; 	T(MOV(al, *(raddr(ds,bx))));	// 3384 mov     al, [bx] ;~ 00D0:1776
cs=0x192;eip=0x001778; 	T(CMP(al, 0x3D));	// 3385 cmp     al, 3Dh ; '=' ;~ 00D0:1778
cs=0x192;eip=0x00177a; 	J(JZ(loc_117b7));	// 3386 jz      short loc_117B7 ;~ 00D0:177A
cs=0x192;eip=0x00177c; 	T(CMP(al, 0x4D));	// 3387 cmp     al, 4Dh ; 'M' ;~ 00D0:177C
cs=0x192;eip=0x00177e; 	J(JZ(loc_1179c));	// 3388 jz      short loc_1179C ;~ 00D0:177E
loc_11780:
	// 4759 
cs=0x192;eip=0x001780; 	X(XOR(byte_1599d, 0x0EE));	// 3391 xor     byte_1599D, 0EEh ;~ 00D0:1780
cs=0x192;eip=0x001785; 	X(NOT(byte_159d4));	// 3392 not     byte_159D4 ;~ 00D0:1785
cs=0x192;eip=0x001789; 	T(MOV(si, 0x5EE4));	// 3393 mov     si, 5EE4h ;~ 00D0:1789
cs=0x192;eip=0x00178c; 	T(CMP(byte_159d4, 0x0FF));	// 3394 cmp     byte_159D4, 0FFh ;~ 00D0:178C
cs=0x192;eip=0x001791; 	J(JZ(loc_11796));	// 3395 jz      short loc_11796 ;~ 00D0:1791
cs=0x192;eip=0x001793; 	T(MOV(si, 0x5EF8));	// 3396 mov     si, 5EF8h ;~ 00D0:1793
loc_11796:
	// 4760 
cs=0x192;eip=0x001796; 	J(CALL(sub_104b7,0));	// 3400 call    sub_104B7 ;~ 00D0:1796
cs=0x192;eip=0x001799; 	J(JMP(loc_111ab));	// 3401 jmp     loc_111AB ;~ 00D0:1799
loc_1179c:
	// 4761 
cs=0x192;eip=0x00179c; 	T(CMP(byte_14a2b, 0x0FF));	// 3405 cmp     byte_14A2B, 0FFh ;~ 00D0:179C
cs=0x192;eip=0x0017a1; 	J(JZ(loc_11780));	// 3406 jz      short loc_11780 ;~ 00D0:17A1
cs=0x192;eip=0x0017a3; 	X(XOR(byte_14a2a, 0x11));	// 3407 xor     byte_14A2A, 11h ;~ 00D0:17A3
cs=0x192;eip=0x0017a8; 	T(MOV(si, 0x5F20));	// 3408 mov     si, 5F20h ;~ 00D0:17A8
cs=0x192;eip=0x0017ab; 	T(CMP(byte_14a2a, 0x0FF));	// 3409 cmp     byte_14A2A, 0FFh ;~ 00D0:17AB
cs=0x192;eip=0x0017b0; 	J(JZ(loc_11796));	// 3410 jz      short loc_11796 ;~ 00D0:17B0
cs=0x192;eip=0x0017b2; 	T(MOV(si, 0x5F0C));	// 3411 mov     si, 5F0Ch ;~ 00D0:17B2
cs=0x192;eip=0x0017b5; 	J(JMP(loc_11796));	// 3412 jmp     short loc_11796 ;~ 00D0:17B5
loc_117b7:
	// 4762 
cs=0x192;eip=0x0017b7; 	T(MOV(bx, 0x1BD0));	// 3416 mov     bx, 1BD0h ;~ 00D0:17B7
cs=0x192;eip=0x0017ba; 	T(MOV(al, byte_14a31));	// 3417 mov     al, byte_14A31 ;~ 00D0:17BA
cs=0x192;eip=0x0017bd; 	T(OR(al, al));	// 3418 or      al, al ;~ 00D0:17BD
cs=0x192;eip=0x0017bf; 	J(JZ(loc_117c3));	// 3419 jz      short loc_117C3 ;~ 00D0:17BF
cs=0x192;eip=0x0017c1; 	X(MOV(*(raddr(ds,bx)), al));	// 3420 mov     [bx], al ;~ 00D0:17C1
loc_117c3:
	// 4763 
cs=0x192;eip=0x0017c3; 	T(MOV(al, *(raddr(ds,bx))));	// 3423 mov     al, [bx] ;~ 00D0:17C3
cs=0x192;eip=0x0017c5; 	T(OR(al, al));	// 3424 or      al, al ;~ 00D0:17C5
cs=0x192;eip=0x0017c7; 	J(JZ(loc_117f9));	// 3425 jz      short loc_117F9 ;~ 00D0:17C7
cs=0x192;eip=0x0017c9; 	T(MOV(al, byte_14a27));	// 3426 mov     al, byte_14A27 ;~ 00D0:17C9
cs=0x192;eip=0x0017cc; 	T(CMP(al, *(raddr(ds,bx))));	// 3427 cmp     al, [bx] ;~ 00D0:17CC
cs=0x192;eip=0x0017ce; 	J(JNC(loc_11802));	// 3428 jnb     short loc_11802 ;~ 00D0:17CE
loc_117d0:
	// 4764 
cs=0x192;eip=0x0017d0; 	T(MOV(al, byte_14a31));	// 3431 mov     al, byte_14A31 ;~ 00D0:17D0
cs=0x192;eip=0x0017d3; 	T(OR(al, al));	// 3432 or      al, al ;~ 00D0:17D3
cs=0x192;eip=0x0017d5; 	J(JNZ(loc_117da));	// 3433 jnz     short loc_117DA ;~ 00D0:17D5
cs=0x192;eip=0x0017d7; 	J(CALL(sub_1201c,0));	// 3434 call    sub_1201C ;~ 00D0:17D7
loc_117da:
	// 4765 
cs=0x192;eip=0x0017da; 	T(MOV(al, byte_14a30));	// 3437 mov     al, byte_14A30 ;~ 00D0:17DA
cs=0x192;eip=0x0017dd; 	X(MOV(byte_14a31, al));	// 3438 mov     byte_14A31, al ;~ 00D0:17DD
cs=0x192;eip=0x0017e0; 	T(MOV(si, 0x5EBC));	// 3439 mov     si, 5EBCh ;~ 00D0:17E0
cs=0x192;eip=0x0017e3; 	J(CALL(sub_104b7,0));	// 3440 call    sub_104B7 ;~ 00D0:17E3
loc_117e6:
	// 4766 
cs=0x192;eip=0x0017e6; 	T(MOV(si, 0x5F34));	// 3443 mov     si, 5F34h ;~ 00D0:17E6
cs=0x192;eip=0x0017e9; 	J(CALL(sub_104b7,0));	// 3444 call    sub_104B7 ;~ 00D0:17E9
cs=0x192;eip=0x0017ec; 	X(MOV(byte_18e0a, 5));	// 3445 mov     byte_18E0A, 5 ;~ 00D0:17EC
cs=0x192;eip=0x0017f1; 	X(MOV(byte_18e08, 2));	// 3446 mov     byte_18E08, 2 ;~ 00D0:17F1
cs=0x192;eip=0x0017f6; 	J(JMP(loc_111ab));	// 3447 jmp     loc_111AB ;~ 00D0:17F6
loc_117f9:
	// 4767 
cs=0x192;eip=0x0017f9; 	T(MOV(si, 0x5EA8));	// 3451 mov     si, 5EA8h ;~ 00D0:17F9
cs=0x192;eip=0x0017fc; 	J(CALL(sub_104b7,0));	// 3452 call    sub_104B7 ;~ 00D0:17FC
cs=0x192;eip=0x0017ff; 	J(JMP(loc_111ab));	// 3453 jmp     loc_111AB ;~ 00D0:17FF
loc_11802:
	// 4768 
cs=0x192;eip=0x001802; 	J(JZ(loc_117d0));	// 3457 jz      short loc_117D0 ;~ 00D0:1802
cs=0x192;eip=0x001804; 	T(MOV(si, 0x5ED0));	// 3458 mov     si, 5ED0h ;~ 00D0:1804
cs=0x192;eip=0x001807; 	J(CALL(sub_104b7,0));	// 3459 call    sub_104B7 ;~ 00D0:1807
cs=0x192;eip=0x00180a; 	J(JMP(loc_117e6));	// 3460 jmp     short loc_117E6 ;~ 00D0:180A
loc_1180c:
	// 4769 
cs=0x192;eip=0x00180c; 	T(CMP(byte_14a3e, 0));	// 3464 cmp     byte_14A3E, 0 ;~ 00D0:180C
cs=0x192;eip=0x001811; 	J(JZ(loc_1181e));	// 3465 jz      short loc_1181E ;~ 00D0:1811
cs=0x192;eip=0x001813; 	T(MOV(al, 2));	// 3466 mov     al, 2 ;~ 00D0:1813
cs=0x192;eip=0x001815; 	T(MOV(dx, 0x5D82));	// 3467 mov     dx, 5D82h ;~ 00D0:1815
cs=0x192;eip=0x001818; 	T(MOV(bx, 0x15AC));	// 3468 mov     bx, 15ACh ;~ 00D0:1818
cs=0x192;eip=0x00181b; 	J(JMP(loc_11206));	// 3469 jmp     loc_11206 ;~ 00D0:181B
loc_1181e:
	// 4770 
cs=0x192;eip=0x00181e; 	X(MOV(byte_14a38, 1));	// 3473 mov     byte_14A38, 1 ;~ 00D0:181E
cs=0x192;eip=0x001823; 	T(MOV(bx, 0x164F));	// 3474 mov     bx, 164Fh ;~ 00D0:1823
cs=0x192;eip=0x001826; 	T(MOV(dx, 0x5CBC));	// 3475 mov     dx, 5CBCh ;~ 00D0:1826
cs=0x192;eip=0x001829; 	J(JMP(loc_11209));	// 3476 jmp     loc_11209 ;~ 00D0:1829
loc_1182c:
	// 4771 
cs=0x192;eip=0x00182c; 	T(TEST(byte_18995, 2));	// 3480 test    byte_18995, 2 ;~ 00D0:182C
cs=0x192;eip=0x001831; 	J(JZ(loc_1184e));	// 3481 jz      short loc_1184E ;~ 00D0:1831
cs=0x192;eip=0x001833; 	T(CMP(byte_14a39, 0));	// 3482 cmp     byte_14A39, 0 ;~ 00D0:1833
cs=0x192;eip=0x001838; 	J(JZ(loc_11842));	// 3483 jz      short loc_11842 ;~ 00D0:1838
cs=0x192;eip=0x00183a; 	X(MOV(byte_14a39, 0));	// 3484 mov     byte_14A39, 0 ;~ 00D0:183A
cs=0x192;eip=0x00183f; 	J(JMP(loc_111ab));	// 3485 jmp     loc_111AB ;~ 00D0:183F
loc_11842:
	// 4772 
cs=0x192;eip=0x001842; 	J(CALL(sub_11cb7,0));	// 3490 call    sub_11CB7 ;~ 00D0:1842
cs=0x192;eip=0x001845; 	T(MOV(bx, 0x1511));	// 3491 mov     bx, 1511h ;~ 00D0:1845
cs=0x192;eip=0x001848; 	T(MOV(dx, 0x5CE6));	// 3492 mov     dx, 5CE6h ;~ 00D0:1848
cs=0x192;eip=0x00184b; 	J(JMP(loc_11209));	// 3493 jmp     loc_11209 ;~ 00D0:184B
loc_1184e:
	// 4773 
cs=0x192;eip=0x00184e; 	T(TEST(byte_18995, 4));	// 3497 test    byte_18995, 4 ;~ 00D0:184E
cs=0x192;eip=0x001853; 	J(JZ(loc_118b0));	// 3498 jz      short loc_118B0 ;~ 00D0:1853
cs=0x192;eip=0x001855; 	T(CMP(byte_14a39, 0));	// 3499 cmp     byte_14A39, 0 ;~ 00D0:1855
cs=0x192;eip=0x00185a; 	T(MOV(al, byte_18e4c));	// 3500 mov     al, byte_18E4C ;~ 00D0:185A
cs=0x192;eip=0x00185d; 	J(JZ(loc_11862));	// 3501 jz      short loc_11862 ;~ 00D0:185D
cs=0x192;eip=0x00185f; 	T(MOV(al, byte_18e51));	// 3502 mov     al, byte_18E51 ;~ 00D0:185F
loc_11862:
	// 4774 
cs=0x192;eip=0x001862; 	T(CMP(al, 0x0D4));	// 3505 cmp     al, 0D4h ; 'Ô' ;~ 00D0:1862
cs=0x192;eip=0x001864; 	J(JNZ(loc_11876));	// 3506 jnz     short loc_11876 ;~ 00D0:1864
cs=0x192;eip=0x001866; 	T(CMP(byte_132c9, 8));	// 3507 cmp     byte_132C9, 8 ;~ 00D0:1866
cs=0x192;eip=0x00186b; 	J(JNZ(loc_11876));	// 3508 jnz     short loc_11876 ;~ 00D0:186B
cs=0x192;eip=0x00186d; 	J(CALL(sub_11f82,0));	// 3509 call    sub_11F82 ;~ 00D0:186D
cs=0x192;eip=0x001870; 	T(MOV(bx, 0x1A67));	// 3510 mov     bx, 1A67h ;~ 00D0:1870
cs=0x192;eip=0x001873; 	J(JMP(loc_1120d));	// 3511 jmp     loc_1120D ;~ 00D0:1873
loc_11876:
	// 4775 
cs=0x192;eip=0x001876; 	T(CMP(byte_14a39, 0));	// 3516 cmp     byte_14A39, 0 ;~ 00D0:1876
cs=0x192;eip=0x00187b; 	T(MOV(al, byte_18e4e));	// 3517 mov     al, byte_18E4E ;~ 00D0:187B
cs=0x192;eip=0x00187e; 	J(JZ(loc_11883));	// 3518 jz      short loc_11883 ;~ 00D0:187E
cs=0x192;eip=0x001880; 	T(MOV(al, byte_18e4f));	// 3519 mov     al, byte_18E4F ;~ 00D0:1880
loc_11883:
	// 4776 
cs=0x192;eip=0x001883; 	T(CMP(al, 0x2C));	// 3522 cmp     al, 2Ch ; ',' ;~ 00D0:1883
cs=0x192;eip=0x001885; 	J(JZ(loc_11896));	// 3523 jz      short loc_11896 ;~ 00D0:1885
cs=0x192;eip=0x001887; 	T(CMP(al, 0x25));	// 3524 cmp     al, 25h ; '%' ;~ 00D0:1887
cs=0x192;eip=0x001889; 	J(JZ(loc_11896));	// 3525 jz      short loc_11896 ;~ 00D0:1889
cs=0x192;eip=0x00188b; 	T(CMP(al, 9));	// 3526 cmp     al, 9 ;~ 00D0:188B
cs=0x192;eip=0x00188d; 	J(JZ(loc_11896));	// 3527 jz      short loc_11896 ;~ 00D0:188D
cs=0x192;eip=0x00188f; 	T(CMP(al, 5));	// 3528 cmp     al, 5 ;~ 00D0:188F
cs=0x192;eip=0x001891; 	J(JZ(loc_11896));	// 3529 jz      short loc_11896 ;~ 00D0:1891
cs=0x192;eip=0x001893; 	J(JMP(loc_11359));	// 3530 jmp     loc_11359 ;~ 00D0:1893
loc_11896:
	// 4777 
cs=0x192;eip=0x001896; 	T(MOV(bx, 0x194E));	// 3535 mov     bx, 194Eh ;~ 00D0:1896
cs=0x192;eip=0x001899; 	T(MOV(dx, 0x5C92));	// 3536 mov     dx, 5C92h ;~ 00D0:1899
cs=0x192;eip=0x00189c; 	X(MOV(word_14a18, dx));	// 3537 mov     word_14A18, dx ;~ 00D0:189C
cs=0x192;eip=0x0018a0; 	X(MOV(word_14a1a, bx));	// 3538 mov     word_14A1A, bx ;~ 00D0:18A0
cs=0x192;eip=0x0018a4; 	J(JMP(loc_119f7));	// 3539 jmp     loc_119F7 ;~ 00D0:18A4
loc_118a7:
	// 4778 
cs=0x192;eip=0x0018a7; 	T(MOV(bx, 0x194E));	// 3543 mov     bx, 194Eh ;~ 00D0:18A7
cs=0x192;eip=0x0018aa; 	T(MOV(dx, 0x5C92));	// 3544 mov     dx, 5C92h ;~ 00D0:18AA
cs=0x192;eip=0x0018ad; 	J(JMP(loc_11209));	// 3545 jmp     loc_11209 ;~ 00D0:18AD
loc_118b0:
	// 4779 
cs=0x192;eip=0x0018b0; 	T(TEST(byte_18995, 1));	// 3549 test    byte_18995, 1 ;~ 00D0:18B0
cs=0x192;eip=0x0018b5; 	J(JZ(loc_118d2));	// 3550 jz      short loc_118D2 ;~ 00D0:18B5
cs=0x192;eip=0x0018b7; 	T(CMP(byte_14a39, 1));	// 3551 cmp     byte_14A39, 1 ;~ 00D0:18B7
cs=0x192;eip=0x0018bc; 	J(JZ(loc_118c6));	// 3552 jz      short loc_118C6 ;~ 00D0:18BC
cs=0x192;eip=0x0018be; 	X(MOV(byte_14a39, 1));	// 3553 mov     byte_14A39, 1 ;~ 00D0:18BE
cs=0x192;eip=0x0018c3; 	J(JMP(loc_111ab));	// 3554 jmp     loc_111AB ;~ 00D0:18C3
loc_118c6:
	// 4780 
cs=0x192;eip=0x0018c6; 	J(CALL(sub_11cb7,0));	// 3558 call    sub_11CB7 ;~ 00D0:18C6
cs=0x192;eip=0x0018c9; 	T(MOV(bx, 0x149E));	// 3559 mov     bx, 149Eh ;~ 00D0:18C9
cs=0x192;eip=0x0018cc; 	T(MOV(dx, 0x5CE6));	// 3560 mov     dx, 5CE6h ;~ 00D0:18CC
cs=0x192;eip=0x0018cf; 	J(JMP(loc_11209));	// 3561 jmp     loc_11209 ;~ 00D0:18CF
loc_118d2:
	// 4781 
cs=0x192;eip=0x0018d2; 	T(TEST(byte_18995, 8));	// 3565 test    byte_18995, 8 ;~ 00D0:18D2
cs=0x192;eip=0x0018d7; 	J(JZ(loc_1194b));	// 3566 jz      short loc_1194B ;~ 00D0:18D7
cs=0x192;eip=0x0018d9; 	T(CMP(byte_14a39, 0));	// 3567 cmp     byte_14A39, 0 ;~ 00D0:18D9
cs=0x192;eip=0x0018de; 	J(JNZ(loc_118fd));	// 3568 jnz     short loc_118FD ;~ 00D0:18DE
cs=0x192;eip=0x0018e0; 	T(MOV(bx, word_14a14));	// 3569 mov     bx, word_14A14 ;~ 00D0:18E0
cs=0x192;eip=0x0018e4; 	T(ADD(bx, 0x4C4));	// 3570 add     bx, 4C4h ;~ 00D0:18E4
cs=0x192;eip=0x0018e8; 	T(CMP(*(raddr(ds,bx)), 0x62));	// 3571 cmp     byte ptr [bx], 62h ; 'b' ;~ 00D0:18E8
cs=0x192;eip=0x0018eb; 	J(JNZ(loc_118fd));	// 3572 jnz     short loc_118FD ;~ 00D0:18EB
cs=0x192;eip=0x0018ed; 	X(MOV(byte_14a28, 0x0FD));	// 3573 mov     byte_14A28, 0FDh ; 'ý' ;~ 00D0:18ED
cs=0x192;eip=0x0018f2; 	T(MOV(bx, 0x156C));	// 3574 mov     bx, 156Ch ;~ 00D0:18F2
cs=0x192;eip=0x0018f5; 	T(MOV(dx, 0x5B9C));	// 3575 mov     dx, 5B9Ch ;~ 00D0:18F5
cs=0x192;eip=0x0018f8; 	T(MOV(al, 0x6D));	// 3576 mov     al, 6Dh ; 'm' ;~ 00D0:18F8
cs=0x192;eip=0x0018fa; 	J(JMP(loc_11206));	// 3577 jmp     loc_11206 ;~ 00D0:18FA
loc_118fd:
	// 4782 
cs=0x192;eip=0x0018fd; 	T(MOV(al, byte_18e4c));	// 3582 mov     al, byte_18E4C ;~ 00D0:18FD
cs=0x192;eip=0x001900; 	T(CMP(byte_14a39, 0));	// 3583 cmp     byte_14A39, 0 ;~ 00D0:1900
cs=0x192;eip=0x001905; 	J(JZ(loc_1190a));	// 3584 jz      short loc_1190A ;~ 00D0:1905
cs=0x192;eip=0x001907; 	T(MOV(al, byte_18e51));	// 3585 mov     al, byte_18E51 ;~ 00D0:1907
loc_1190a:
	// 4783 
cs=0x192;eip=0x00190a; 	T(CMP(al, 0x0D4));	// 3588 cmp     al, 0D4h ; 'Ô' ;~ 00D0:190A
cs=0x192;eip=0x00190c; 	J(JNZ(loc_1191e));	// 3589 jnz     short loc_1191E ;~ 00D0:190C
cs=0x192;eip=0x00190e; 	T(CMP(byte_132c9, 8));	// 3590 cmp     byte_132C9, 8 ;~ 00D0:190E
cs=0x192;eip=0x001913; 	J(JZ(loc_1191e));	// 3591 jz      short loc_1191E ;~ 00D0:1913
cs=0x192;eip=0x001915; 	J(CALL(sub_11f82,0));	// 3592 call    sub_11F82 ;~ 00D0:1915
cs=0x192;eip=0x001918; 	T(MOV(bx, 0x1AD9));	// 3593 mov     bx, 1AD9h ;~ 00D0:1918
cs=0x192;eip=0x00191b; 	J(JMP(loc_1120d));	// 3594 jmp     loc_1120D ;~ 00D0:191B
loc_1191e:
	// 4784 
cs=0x192;eip=0x00191e; 	T(CMP(byte_14a39, 0));	// 3599 cmp     byte_14A39, 0 ;~ 00D0:191E
cs=0x192;eip=0x001923; 	T(MOV(al, byte_18e48));	// 3600 mov     al, byte_18E48 ;~ 00D0:1923
cs=0x192;eip=0x001926; 	J(JZ(loc_1192b));	// 3601 jz      short loc_1192B ;~ 00D0:1926
cs=0x192;eip=0x001928; 	T(MOV(al, byte_18e49));	// 3602 mov     al, byte_18E49 ;~ 00D0:1928
loc_1192b:
	// 4785 
cs=0x192;eip=0x00192b; 	T(CMP(al, 9));	// 3605 cmp     al, 9 ;~ 00D0:192B
cs=0x192;eip=0x00192d; 	J(JZ(loc_11948));	// 3606 jz      short loc_11948 ;~ 00D0:192D
cs=0x192;eip=0x00192f; 	T(CMP(al, 5));	// 3607 cmp     al, 5 ;~ 00D0:192F
cs=0x192;eip=0x001931; 	J(JZ(loc_11948));	// 3608 jz      short loc_11948 ;~ 00D0:1931
cs=0x192;eip=0x001933; 	T(CMP(al, 0x25));	// 3609 cmp     al, 25h ; '%' ;~ 00D0:1933
cs=0x192;eip=0x001935; 	J(JZ(loc_11948));	// 3610 jz      short loc_11948 ;~ 00D0:1935
cs=0x192;eip=0x001937; 	T(CMP(al, 0x2C));	// 3611 cmp     al, 2Ch ; ',' ;~ 00D0:1937
cs=0x192;eip=0x001939; 	J(JZ(loc_11948));	// 3612 jz      short loc_11948 ;~ 00D0:1939
cs=0x192;eip=0x00193b; 	T(CMP(al, 0x10));	// 3613 cmp     al, 10h ;~ 00D0:193B
cs=0x192;eip=0x00193d; 	J(JZ(loc_11948));	// 3614 jz      short loc_11948 ;~ 00D0:193D
cs=0x192;eip=0x00193f; 	T(MOV(bx, 0x16EB));	// 3615 mov     bx, 16EBh ;~ 00D0:193F
cs=0x192;eip=0x001942; 	T(MOV(dx, 0x5DD6));	// 3616 mov     dx, 5DD6h ;~ 00D0:1942
cs=0x192;eip=0x001945; 	J(JMP(loc_11209));	// 3617 jmp     loc_11209 ;~ 00D0:1945
loc_11948:
	// 4786 
cs=0x192;eip=0x001948; 	J(JMP(loc_118a7));	// 3622 jmp     loc_118A7 ;~ 00D0:1948
loc_1194b:
	// 4787 
cs=0x192;eip=0x00194b; 	J(JMP(loc_111ab));	// 3626 jmp     loc_111AB ;~ 00D0:194B
ret_d0_194e:
	// 4788 
cs=0x192;eip=0x00194e; 	T(CMP(byte_14a39, 0));	// 3628 cmp     byte_14A39, 0 ;~ 00D0:194E
cs=0x192;eip=0x001953; 	T(MOV(al, byte_18e48));	// 3629 mov     al, byte_18E48 ;~ 00D0:1953
cs=0x192;eip=0x001956; 	J(JZ(loc_1195b));	// 3630 jz      short loc_1195B ;~ 00D0:1956
cs=0x192;eip=0x001958; 	T(MOV(al, byte_18e49));	// 3631 mov     al, byte_18E49 ;~ 00D0:1958
loc_1195b:
	// 4789 
cs=0x192;eip=0x00195b; 	T(CMP(al, 5));	// 3634 cmp     al, 5 ;~ 00D0:195B
cs=0x192;eip=0x00195d; 	J(JZ(loc_1197a));	// 3635 jz      short loc_1197A ;~ 00D0:195D
cs=0x192;eip=0x00195f; 	T(CMP(al, 9));	// 3636 cmp     al, 9 ;~ 00D0:195F
cs=0x192;eip=0x001961; 	J(JZ(loc_1197a));	// 3637 jz      short loc_1197A ;~ 00D0:1961
cs=0x192;eip=0x001963; 	T(CMP(al, 0x10));	// 3638 cmp     al, 10h ;~ 00D0:1963
cs=0x192;eip=0x001965; 	J(JZ(loc_1197a));	// 3639 jz      short loc_1197A ;~ 00D0:1965
cs=0x192;eip=0x001967; 	T(CMP(al, 0x25));	// 3640 cmp     al, 25h ; '%' ;~ 00D0:1967
cs=0x192;eip=0x001969; 	J(JZ(loc_1197a));	// 3641 jz      short loc_1197A ;~ 00D0:1969
cs=0x192;eip=0x00196b; 	T(CMP(al, 0x2C));	// 3642 cmp     al, 2Ch ; ',' ;~ 00D0:196B
cs=0x192;eip=0x00196d; 	J(JZ(loc_1197a));	// 3643 jz      short loc_1197A ;~ 00D0:196D
cs=0x192;eip=0x00196f; 	T(CMP(al, 0x0CC));	// 3644 cmp     al, 0CCh ; 'Ì' ;~ 00D0:196F
cs=0x192;eip=0x001971; 	J(JZ(loc_1197a));	// 3645 jz      short loc_1197A ;~ 00D0:1971
cs=0x192;eip=0x001973; 	T(CMP(al, 0x0FF));	// 3646 cmp     al, 0FFh ;~ 00D0:1973
cs=0x192;eip=0x001975; 	J(JZ(loc_1197a));	// 3647 jz      short loc_1197A ;~ 00D0:1975
cs=0x192;eip=0x001977; 	J(JMP(loc_11367));	// 3648 jmp     loc_11367 ;~ 00D0:1977
loc_1197a:
	// 4790 
cs=0x192;eip=0x00197a; 	T(MOV(al, byte_18995));	// 3653 mov     al, byte_18995 ;~ 00D0:197A
cs=0x192;eip=0x00197d; 	T(TEST(al, 1));	// 3654 test    al, 1 ;~ 00D0:197D
cs=0x192;eip=0x00197f; 	J(JZ(loc_11988));	// 3655 jz      short loc_11988 ;~ 00D0:197F
cs=0x192;eip=0x001981; 	X(MOV(byte_14a39, 1));	// 3656 mov     byte_14A39, 1 ;~ 00D0:1981
cs=0x192;eip=0x001986; 	J(JMP(loc_11991));	// 3657 jmp     short loc_11991 ;~ 00D0:1986
loc_11988:
	// 4791 
cs=0x192;eip=0x001988; 	T(TEST(al, 2));	// 3661 test    al, 2 ;~ 00D0:1988
cs=0x192;eip=0x00198a; 	J(JZ(loc_119a7));	// 3662 jz      short loc_119A7 ;~ 00D0:198A
cs=0x192;eip=0x00198c; 	X(MOV(byte_14a39, 0));	// 3663 mov     byte_14A39, 0 ;~ 00D0:198C
loc_11991:
	// 4792 
cs=0x192;eip=0x001991; 	T(CMP(byte_18e47, 0x0C7));	// 3666 cmp     byte_18E47, 0C7h ; 'Ç' ;~ 00D0:1991
cs=0x192;eip=0x001996; 	J(JC(loc_1199b));	// 3667 jb      short loc_1199B ;~ 00D0:1996
loc_11998:
	// 4793 
cs=0x192;eip=0x001998; 	J(JMP(loc_111ab));	// 3670 jmp     loc_111AB ;~ 00D0:1998
loc_1199b:
	// 4794 
cs=0x192;eip=0x00199b; 	T(MOV(al, byte_18e4d));	// 3674 mov     al, byte_18E4D ;~ 00D0:199B
cs=0x192;eip=0x00199e; 	T(INC(al));	// 3675 inc     al ;~ 00D0:199E
cs=0x192;eip=0x0019a0; 	T(CMP(al, 0x0C7));	// 3676 cmp     al, 0C7h ; 'Ç' ;~ 00D0:19A0
cs=0x192;eip=0x0019a2; 	J(JC(loc_11998));	// 3677 jb      short loc_11998 ;~ 00D0:19A2
cs=0x192;eip=0x0019a4; 	J(JMP(loc_11367));	// 3678 jmp     loc_11367 ;~ 00D0:19A4
loc_119a7:
	// 4795 
cs=0x192;eip=0x0019a7; 	T(TEST(al, 8));	// 3682 test    al, 8 ;~ 00D0:19A7
cs=0x192;eip=0x0019a9; 	J(JZ(loc_119db));	// 3683 jz      short loc_119DB ;~ 00D0:19A9
cs=0x192;eip=0x0019ab; 	T(MOV(al, byte_14a2d));	// 3684 mov     al, byte_14A2D ;~ 00D0:19AB
cs=0x192;eip=0x0019ae; 	T(DEC(al));	// 3685 dec     al ;~ 00D0:19AE
cs=0x192;eip=0x0019b0; 	J(JS(loc_119c7));	// 3686 js      short loc_119C7 ;~ 00D0:19B0
cs=0x192;eip=0x0019b2; 	T(MOV(bx, word_14a14));	// 3687 mov     bx, word_14A14 ;~ 00D0:19B2
cs=0x192;eip=0x0019b6; 	T(ADD(bx, 0x226));	// 3688 add     bx, 226h ;~ 00D0:19B6
cs=0x192;eip=0x0019ba; 	T(MOV(al, *(raddr(ds,bx))));	// 3689 mov     al, [bx] ;~ 00D0:19BA
cs=0x192;eip=0x0019bc; 	T(CMP(al, 0x0CC));	// 3690 cmp     al, 0CCh ; 'Ì' ;~ 00D0:19BC
cs=0x192;eip=0x0019be; 	J(JZ(loc_119c7));	// 3691 jz      short loc_119C7 ;~ 00D0:19BE
cs=0x192;eip=0x0019c0; 	T(CMP(al, 0x0C7));	// 3692 cmp     al, 0C7h ; 'Ç' ;~ 00D0:19C0
cs=0x192;eip=0x0019c2; 	J(JC(loc_119c7));	// 3693 jb      short loc_119C7 ;~ 00D0:19C2
cs=0x192;eip=0x0019c4; 	J(JMP(loc_111ab));	// 3694 jmp     loc_111AB ;~ 00D0:19C4
loc_119c7:
	// 4796 
cs=0x192;eip=0x0019c7; 	J(CALL(sub_11c97,0));	// 3699 call    sub_11C97 ;~ 00D0:19C7
cs=0x192;eip=0x0019ca; 	X(DEC(byte_14a2d));	// 3700 dec     byte_14A2D ;~ 00D0:19CA
cs=0x192;eip=0x0019ce; 	X(ADD(word_14a14, 0x0FFE0));	// 3701 add     word_14A14, 0FFE0h ;~ 00D0:19CE
loc_119d3:
	// 4797 
cs=0x192;eip=0x0019d3; 	X(XOR(byte_14a39, 1));	// 3704 xor     byte_14A39, 1 ;~ 00D0:19D3
cs=0x192;eip=0x0019d8; 	J(JMP(loc_111ab));	// 3705 jmp     loc_111AB ;~ 00D0:19D8
loc_119db:
	// 4798 
cs=0x192;eip=0x0019db; 	T(TEST(al, 4));	// 3709 test    al, 4 ;~ 00D0:19DB
cs=0x192;eip=0x0019dd; 	J(JNZ(loc_119e2));	// 3710 jnz     short loc_119E2 ;~ 00D0:19DD
cs=0x192;eip=0x0019df; 	J(JMP(loc_111ab));	// 3711 jmp     loc_111AB ;~ 00D0:19DF
loc_119e2:
	// 4799 
cs=0x192;eip=0x0019e2; 	T(MOV(al, byte_18e4e));	// 3715 mov     al, byte_18E4E ;~ 00D0:19E2
cs=0x192;eip=0x0019e5; 	T(INC(al));	// 3716 inc     al ;~ 00D0:19E5
cs=0x192;eip=0x0019e7; 	T(CMP(al, 0x0C7));	// 3717 cmp     al, 0C7h ; 'Ç' ;~ 00D0:19E7
cs=0x192;eip=0x0019e9; 	J(JC(loc_119ee));	// 3718 jb      short loc_119EE ;~ 00D0:19E9
loc_119eb:
	// 4800 
cs=0x192;eip=0x0019eb; 	J(JMP(loc_11367));	// 3721 jmp     loc_11367 ;~ 00D0:19EB
loc_119ee:
	// 4801 
cs=0x192;eip=0x0019ee; 	T(MOV(al, byte_18e4f));	// 3725 mov     al, byte_18E4F ;~ 00D0:19EE
cs=0x192;eip=0x0019f1; 	T(INC(al));	// 3726 inc     al ;~ 00D0:19F1
cs=0x192;eip=0x0019f3; 	T(CMP(al, 0x0C7));	// 3727 cmp     al, 0C7h ; 'Ç' ;~ 00D0:19F3
cs=0x192;eip=0x0019f5; 	J(JNC(loc_119eb));	// 3728 jnb     short loc_119EB ;~ 00D0:19F5
loc_119f7:
	// 4802 
cs=0x192;eip=0x0019f7; 	J(CALL(sub_11d16,0));	// 3731 call    sub_11D16 ;~ 00D0:19F7
cs=0x192;eip=0x0019fa; 	X(INC(byte_14a2d));	// 3732 inc     byte_14A2D ;~ 00D0:19FA
cs=0x192;eip=0x0019fe; 	X(ADD(word_14a14, 0x20));	// 3733 add     word_14A14, 20h ; ' ' ;~ 00D0:19FE
cs=0x192;eip=0x001a03; 	J(JMP(loc_119d3));	// 3734 jmp     short loc_119D3 ;~ 00D0:1A03
ret_d0_1a05:
	// 4803 
cs=0x192;eip=0x001a05; 	J(CALL(sub_11d16,0));	// 3736 call    sub_11D16 ;~ 00D0:1A05
cs=0x192;eip=0x001a08; 	J(CALL(sub_11d36,0));	// 3737 call    sub_11D36 ;~ 00D0:1A08
cs=0x192;eip=0x001a0b; 	J(JZ(loc_11a51));	// 3738 jz      short loc_11A51 ;~ 00D0:1A0B
cs=0x192;eip=0x001a0d; 	T(CMP(byte_14a35, 0));	// 3739 cmp     byte_14A35, 0 ;~ 00D0:1A0D
cs=0x192;eip=0x001a12; 	J(JNZ(loc_11a17));	// 3740 jnz     short loc_11A17 ;~ 00D0:1A12
cs=0x192;eip=0x001a14; 	J(JMP(loc_1134a));	// 3741 jmp     loc_1134A ;~ 00D0:1A14
loc_11a17:
	// 4804 
cs=0x192;eip=0x001a17; 	T(MOV(cx, 0x14));	// 3745 mov     cx, 14h ;~ 00D0:1A17
cs=0x192;eip=0x001a1a; 	T(MOV(si, 0x5F48));	// 3746 mov     si, 5F48h ;~ 00D0:1A1A
cs=0x192;eip=0x001a1d; 	T(MOV(al, byte_14a35));	// 3747 mov     al, byte_14A35 ;~ 00D0:1A1D
cs=0x192;eip=0x001a20; 	T(DEC(al));	// 3748 dec     al ;~ 00D0:1A20
cs=0x192;eip=0x001a22; 	J(JNZ(loc_11a27));	// 3749 jnz     short loc_11A27 ;~ 00D0:1A22
cs=0x192;eip=0x001a24; 	T(MOV(si, 0x5F7F));	// 3750 mov     si, 5F7Fh ;~ 00D0:1A24
loc_11a27:
	// 4805 
cs=0x192;eip=0x001a27; 	T(MOV(bx, 0x58A));	// 3753 mov     bx, 58Ah ;~ 00D0:1A27
cs=0x192;eip=0x001a2a; 	J(CALL(sub_10bf7,0));	// 3754 call    sub_10BF7 ;~ 00D0:1A2A
cs=0x192;eip=0x001a2d; 	T(CMP(byte_14a28, 0x0FD));	// 3755 cmp     byte_14A28, 0FDh ; 'ý' ;~ 00D0:1A2D
cs=0x192;eip=0x001a32; 	J(JNZ(loc_11a3d));	// 3756 jnz     short loc_11A3D ;~ 00D0:1A32
cs=0x192;eip=0x001a34; 	T(MOV(dx, 0x1F25));	// 3757 mov     dx, 1F25h ;~ 00D0:1A34
cs=0x192;eip=0x001a37; 	T(MOV(ax, 0x484));	// 3758 mov     ax, 484h ;~ 00D0:1A37
cs=0x192;eip=0x001a3a; 	J(CALL(sub_11ee6,0));	// 3759 call    sub_11EE6 ;~ 00D0:1A3A
loc_11a3d:
	// 4806 
cs=0x192;eip=0x001a3d; 	T(MOV(dx, 0x5B6A));	// 3762 mov     dx, 5B6Ah ;~ 00D0:1A3D
cs=0x192;eip=0x001a40; 	T(MOV(ax, 4));	// 3763 mov     ax, 4 ;~ 00D0:1A40
cs=0x192;eip=0x001a43; 	J(CALL(sub_11ee6,0));	// 3764 call    sub_11EE6 ;~ 00D0:1A43
cs=0x192;eip=0x001a46; 	T(MOV(dx, 0x5E54));	// 3765 mov     dx, 5E54h ;~ 00D0:1A46
cs=0x192;eip=0x001a49; 	T(MOV(bx, 0x1B58));	// 3766 mov     bx, 1B58h ;~ 00D0:1A49
cs=0x192;eip=0x001a4c; 	T(MOV(al, 0x1E));	// 3767 mov     al, 1Eh ;~ 00D0:1A4C
cs=0x192;eip=0x001a4e; 	J(JMP(loc_11206));	// 3768 jmp     loc_11206 ;~ 00D0:1A4E
loc_11a51:
	// 4807 
cs=0x192;eip=0x001a51; 	T(MOV(bx, 0x5B37));	// 3772 mov     bx, 5B37h ;~ 00D0:1A51
cs=0x192;eip=0x001a54; 	T(CMP(*(raddr(ds,bx)), 0x0FA));	// 3773 cmp     byte ptr [bx], 0FAh ; 'ú' ;~ 00D0:1A54
cs=0x192;eip=0x001a57; 	J(JZ(loc_11a5b));	// 3774 jz      short loc_11A5B ;~ 00D0:1A57
cs=0x192;eip=0x001a59; 	X(INC(*(raddr(ds,bx))));	// 3775 inc     byte ptr [bx] ;~ 00D0:1A59
loc_11a5b:
	// 4808 
cs=0x192;eip=0x001a5b; 	X(INC(byte_14a2d));	// 3778 inc     byte_14A2D ;~ 00D0:1A5B
cs=0x192;eip=0x001a5f; 	X(ADD(word_14a14, 0x20));	// 3779 add     word_14A14, 20h ; ' ' ;~ 00D0:1A5F
cs=0x192;eip=0x001a64; 	J(JMP(loc_111ab));	// 3780 jmp     loc_111AB ;~ 00D0:1A64
ret_d0_1a67:
	// 4809 
cs=0x192;eip=0x001a67; 	X(MOV(byte_1599d, 0x11));	// 3782 mov     byte_1599D, 11h ;~ 00D0:1A67
cs=0x192;eip=0x001a6c; 	X(MOV(byte_159d4, 0));	// 3783 mov     byte_159D4, 0 ;~ 00D0:1A6C
cs=0x192;eip=0x001a71; 	J(CALL(sub_11ff3,0));	// 3784 call    sub_11FF3 ;~ 00D0:1A71
cs=0x192;eip=0x001a74; 	J(CALL(sub_11d16,0));	// 3785 call    sub_11D16 ;~ 00D0:1A74
cs=0x192;eip=0x001a77; 	X(INC(byte_14a2d));	// 3786 inc     byte_14A2D ;~ 00D0:1A77
cs=0x192;eip=0x001a7b; 	X(ADD(word_14a14, 0x20));	// 3787 add     word_14A14, 20h ; ' ' ;~ 00D0:1A7B
cs=0x192;eip=0x001a80; 	T(MOV(di, word_14a14));	// 3788 mov     di, word_14A14 ;~ 00D0:1A80
cs=0x192;eip=0x001a84; 	T(ADD(di, 0x304));	// 3789 add     di, 304h ;~ 00D0:1A84
cs=0x192;eip=0x001a88; 	T(MOV(cx, 3));	// 3790 mov     cx, 3 ;~ 00D0:1A88
cs=0x192;eip=0x001a8b; 	T(CLD);	// 3791 cld ;~ 00D0:1A8B
cs=0x192;eip=0x001a8c; 	T(MOV(ax, 0x808));	// 3792 mov     ax, 808h ;~ 00D0:1A8C
	// 3793 rep stosw ;~ 00D0:1A8F
cs=0x192;eip=0x001a8f; 	X(	REP STOSW);	// 3793 rep stosw ;~ 00D0:1A8F
cs=0x192;eip=0x001a91; 	T(CMP(byte_14a2d, 0x0B));	// 3794 cmp     byte_14A2D, 0Bh ;~ 00D0:1A91
cs=0x192;eip=0x001a96; 	J(JZ(loc_11aaf));	// 3795 jz      short loc_11AAF ;~ 00D0:1A96
cs=0x192;eip=0x001a98; 	T(ADD(di, 0x1A));	// 3796 add     di, 1Ah ;~ 00D0:1A98
cs=0x192;eip=0x001a9b; 	T(MOV(si, 0x3B34));	// 3797 mov     si, 3B34h ;~ 00D0:1A9B
cs=0x192;eip=0x001a9e; 	T(MOV(cx, 3));	// 3798 mov     cx, 3 ;~ 00D0:1A9E
	// 3799 rep movsw ;~ 00D0:1AA1
cs=0x192;eip=0x001aa1; 	X(	REP MOVSW);	// 3799 rep movsw ;~ 00D0:1AA1
cs=0x192;eip=0x001aa3; 	T(SUB(di, 0x246));	// 3800 sub     di, 246h ;~ 00D0:1AA3
cs=0x192;eip=0x001aa7; 	T(MOV(cx, 3));	// 3801 mov     cx, 3 ;~ 00D0:1AA7
cs=0x192;eip=0x001aaa; 	T(MOV(ax, 0x101));	// 3802 mov     ax, 101h ;~ 00D0:1AAA
	// 3803 rep stosw ;~ 00D0:1AAD
cs=0x192;eip=0x001aad; 	X(	REP STOSW);	// 3803 rep stosw ;~ 00D0:1AAD
loc_11aaf:
	// 4810 
cs=0x192;eip=0x001aaf; 	T(MOV(al, byte_18995));	// 3806 mov     al, byte_18995 ;~ 00D0:1AAF
cs=0x192;eip=0x001ab2; 	T(TEST(al, 8));	// 3807 test    al, 8 ;~ 00D0:1AB2
cs=0x192;eip=0x001ab4; 	J(JZ(loc_11abc));	// 3808 jz      short loc_11ABC ;~ 00D0:1AB4
cs=0x192;eip=0x001ab6; 	T(MOV(bx, 0x1AD9));	// 3809 mov     bx, 1AD9h ;~ 00D0:1AB6
cs=0x192;eip=0x001ab9; 	J(JMP(loc_1120d));	// 3810 jmp     loc_1120D ;~ 00D0:1AB9
loc_11abc:
	// 4811 
cs=0x192;eip=0x001abc; 	X(MOV(byte_1599d, 0x0FF));	// 3814 mov     byte_1599D, 0FFh ;~ 00D0:1ABC
cs=0x192;eip=0x001ac1; 	X(MOV(byte_159d4, 0x0FF));	// 3815 mov     byte_159D4, 0FFh ;~ 00D0:1AC1
cs=0x192;eip=0x001ac6; 	T(MOV(bx, word_14a14));	// 3816 mov     bx, word_14A14 ;~ 00D0:1AC6
cs=0x192;eip=0x001aca; 	T(ADD(bx, 0x344));	// 3817 add     bx, 344h ;~ 00D0:1ACA
cs=0x192;eip=0x001ace; 	T(CMP(*(raddr(ds,bx)), 0x0FA));	// 3818 cmp     byte ptr [bx], 0FAh ; 'ú' ;~ 00D0:1ACE
cs=0x192;eip=0x001ad1; 	J(JNZ(loc_11ad6));	// 3819 jnz     short loc_11AD6 ;~ 00D0:1AD1
cs=0x192;eip=0x001ad3; 	J(JMP(loc_11359));	// 3820 jmp     loc_11359 ;~ 00D0:1AD3
loc_11ad6:
	// 4812 
cs=0x192;eip=0x001ad6; 	J(JMP(loc_111ab));	// 3825 jmp     loc_111AB ;~ 00D0:1AD6
ret_d0_1ad9:
	// 4813 
cs=0x192;eip=0x001ad9; 	X(MOV(byte_1599d, 0x0FF));	// 3827 mov     byte_1599D, 0FFh ;~ 00D0:1AD9
cs=0x192;eip=0x001ade; 	X(MOV(byte_159d4, 0x0FF));	// 3828 mov     byte_159D4, 0FFh ;~ 00D0:1ADE
cs=0x192;eip=0x001ae3; 	J(CALL(sub_11ff3,0));	// 3829 call    sub_11FF3 ;~ 00D0:1AE3
cs=0x192;eip=0x001ae6; 	J(CALL(sub_11c97,0));	// 3830 call    sub_11C97 ;~ 00D0:1AE6
cs=0x192;eip=0x001ae9; 	X(DEC(byte_14a2d));	// 3831 dec     byte_14A2D ;~ 00D0:1AE9
cs=0x192;eip=0x001aed; 	X(ADD(word_14a14, 0x0FFE0));	// 3832 add     word_14A14, 0FFE0h ;~ 00D0:1AED
cs=0x192;eip=0x001af2; 	T(MOV(di, word_14a14));	// 3833 mov     di, word_14A14 ;~ 00D0:1AF2
cs=0x192;eip=0x001af6; 	T(CMP(byte_14a2d, 0x0B));	// 3834 cmp     byte_14A2D, 0Bh ;~ 00D0:1AF6
cs=0x192;eip=0x001afb; 	J(JZ(loc_11b28));	// 3835 jz      short loc_11B28 ;~ 00D0:1AFB
cs=0x192;eip=0x001afd; 	T(ADD(di, 0x324));	// 3836 add     di, 324h ;~ 00D0:1AFD
cs=0x192;eip=0x001b01; 	T(MOV(si, 0x3B34));	// 3837 mov     si, 3B34h ;~ 00D0:1B01
cs=0x192;eip=0x001b04; 	T(MOV(cx, 3));	// 3838 mov     cx, 3 ;~ 00D0:1B04
cs=0x192;eip=0x001b07; 	T(CLD);	// 3839 cld ;~ 00D0:1B07
	// 3840 rep movsw ;~ 00D0:1B08
cs=0x192;eip=0x001b08; 	X(	REP MOVSW);	// 3840 rep movsw ;~ 00D0:1B08
cs=0x192;eip=0x001b0a; 	T(CMP(byte_14a2d, 0x0A));	// 3841 cmp     byte_14A2D, 0Ah ;~ 00D0:1B0A
cs=0x192;eip=0x001b0f; 	J(JZ(loc_11b28));	// 3842 jz      short loc_11B28 ;~ 00D0:1B0F
cs=0x192;eip=0x001b11; 	T(ADD(di, 0x1A));	// 3843 add     di, 1Ah ;~ 00D0:1B11
cs=0x192;eip=0x001b14; 	T(MOV(cx, 3));	// 3844 mov     cx, 3 ;~ 00D0:1B14
cs=0x192;eip=0x001b17; 	T(MOV(ax, 0x808));	// 3845 mov     ax, 808h ;~ 00D0:1B17
	// 3846 rep stosw ;~ 00D0:1B1A
cs=0x192;eip=0x001b1a; 	X(	REP STOSW);	// 3846 rep stosw ;~ 00D0:1B1A
cs=0x192;eip=0x001b1c; 	T(SUB(di, 0x246));	// 3847 sub     di, 246h ;~ 00D0:1B1C
cs=0x192;eip=0x001b20; 	T(MOV(cx, 3));	// 3848 mov     cx, 3 ;~ 00D0:1B20
cs=0x192;eip=0x001b23; 	T(MOV(ax, 0x101));	// 3849 mov     ax, 101h ;~ 00D0:1B23
	// 3850 rep stosw ;~ 00D0:1B26
cs=0x192;eip=0x001b26; 	X(	REP STOSW);	// 3850 rep stosw ;~ 00D0:1B26
loc_11b28:
	// 4814 
cs=0x192;eip=0x001b28; 	T(MOV(al, byte_18995));	// 3854 mov     al, byte_18995 ;~ 00D0:1B28
cs=0x192;eip=0x001b2b; 	T(TEST(al, 4));	// 3855 test    al, 4 ;~ 00D0:1B2B
cs=0x192;eip=0x001b2d; 	J(JZ(loc_11b35));	// 3856 jz      short loc_11B35 ;~ 00D0:1B2D
cs=0x192;eip=0x001b2f; 	T(MOV(bx, 0x1A67));	// 3857 mov     bx, 1A67h ;~ 00D0:1B2F
cs=0x192;eip=0x001b32; 	J(JMP(loc_1120d));	// 3858 jmp     loc_1120D ;~ 00D0:1B32
loc_11b35:
	// 4815 
cs=0x192;eip=0x001b35; 	X(MOV(byte_1599d, 0x11));	// 3862 mov     byte_1599D, 11h ;~ 00D0:1B35
cs=0x192;eip=0x001b3a; 	X(MOV(byte_159d4, 0));	// 3863 mov     byte_159D4, 0 ;~ 00D0:1B3A
cs=0x192;eip=0x001b3f; 	T(MOV(bx, word_14a14));	// 3864 mov     bx, word_14A14 ;~ 00D0:1B3F
cs=0x192;eip=0x001b43; 	T(ADD(bx, 0x303));	// 3865 add     bx, 303h ;~ 00D0:1B43
cs=0x192;eip=0x001b47; 	T(CMP(*(raddr(ds,bx)), 8));	// 3866 cmp     byte ptr [bx], 8 ;~ 00D0:1B47
cs=0x192;eip=0x001b4a; 	J(JNZ(loc_11ad6));	// 3867 jnz     short loc_11AD6 ;~ 00D0:1B4A
cs=0x192;eip=0x001b4c; 	X(DEC(byte_14a2d));	// 3868 dec     byte_14A2D ;~ 00D0:1B4C
cs=0x192;eip=0x001b50; 	X(ADD(word_14a14, 0x0FFE0));	// 3869 add     word_14A14, 0FFE0h ;~ 00D0:1B50
cs=0x192;eip=0x001b55; 	J(JMP(loc_11367));	// 3870 jmp     loc_11367 ;~ 00D0:1B55
ret_d0_1b58:
	// 4816 
cs=0x192;eip=0x001b58; 	X(DEC(byte_14a38));	// 3872 dec     byte_14A38 ;~ 00D0:1B58
cs=0x192;eip=0x001b5c; 	J(JZ(loc_11b61));	// 3873 jz      short loc_11B61 ;~ 00D0:1B5C
cs=0x192;eip=0x001b5e; 	J(JMP(loc_111ab));	// 3874 jmp     loc_111AB ;~ 00D0:1B5E
loc_11b61:
	// 4817 
cs=0x192;eip=0x001b61; 	X(POP(ax));	// 3878 pop     ax ;~ 00D0:1B61
cs=0x192;eip=0x001b62; 	J(JMP(loc_12843));	// 3879 jmp     loc_12843 ;~ 00D0:1B62
ret_d0_1b65:
	// 4818 
cs=0x192;eip=0x001b65; 	T(MOV(al, byte_14a2e));	// 3881 mov     al, byte_14A2E ;~ 00D0:1B65
cs=0x192;eip=0x001b68; 	T(CMP(al, 0x1D));	// 3882 cmp     al, 1Dh ;~ 00D0:1B68
cs=0x192;eip=0x001b6a; 	J(JNZ(loc_11b6f));	// 3883 jnz     short loc_11B6F ;~ 00D0:1B6A
cs=0x192;eip=0x001b6c; 	J(JMP(loc_11229));	// 3884 jmp     loc_11229 ;~ 00D0:1B6C
loc_11b6f:
	// 4819 
cs=0x192;eip=0x001b6f; 	T(CMP(al, 0x1A));	// 3888 cmp     al, 1Ah ;~ 00D0:1B6F
cs=0x192;eip=0x001b71; 	J(JNC(loc_11b80));	// 3889 jnb     short loc_11B80 ;~ 00D0:1B71
cs=0x192;eip=0x001b73; 	T(MOV(bx, word_14a14));	// 3890 mov     bx, word_14A14 ;~ 00D0:1B73
cs=0x192;eip=0x001b77; 	T(ADD(bx, 0x30A));	// 3891 add     bx, 30Ah ;~ 00D0:1B77
cs=0x192;eip=0x001b7b; 	T(CMP(*(raddr(ds,bx)), 0x0C7));	// 3892 cmp     byte ptr [bx], 0C7h ; 'Ç' ;~ 00D0:1B7B
cs=0x192;eip=0x001b7e; 	J(JNC(loc_11b88));	// 3893 jnb     short loc_11B88 ;~ 00D0:1B7E
loc_11b80:
	// 4820 
cs=0x192;eip=0x001b80; 	X(INC(byte_14a2e));	// 3896 inc     byte_14A2E ;~ 00D0:1B80
cs=0x192;eip=0x001b84; 	X(INC(word_14a14));	// 3897 inc     word_14A14 ;~ 00D0:1B84
loc_11b88:
	// 4821 
cs=0x192;eip=0x001b88; 	J(CALL(sub_11bdf,0));	// 3900 call    sub_11BDF ;~ 00D0:1B88
cs=0x192;eip=0x001b8b; 	T(MOV(al, byte_18995));	// 3901 mov     al, byte_18995 ;~ 00D0:1B8B
cs=0x192;eip=0x001b8e; 	T(TEST(al, 1));	// 3902 test    al, 1 ;~ 00D0:1B8E
loc_11b90:
	// 4822 
cs=0x192;eip=0x001b90; 	J(JNZ(loc_11b95));	// 3905 jnz     short loc_11B95 ;~ 00D0:1B90
cs=0x192;eip=0x001b92; 	J(JMP(loc_11359));	// 3906 jmp     loc_11359 ;~ 00D0:1B92
loc_11b95:
	// 4823 
cs=0x192;eip=0x001b95; 	T(MOV(dx, 0x4E6));	// 3910 mov     dx, 4E6h ;~ 00D0:1B95
cs=0x192;eip=0x001b98; 	J(CALL(sub_11daa,0));	// 3911 call    sub_11DAA ;~ 00D0:1B98
cs=0x192;eip=0x001b9b; 	T(MOV(bx, word_14a14));	// 3912 mov     bx, word_14A14 ;~ 00D0:1B9B
cs=0x192;eip=0x001b9f; 	T(ADD(bx, dx));	// 3913 add     bx, dx ;~ 00D0:1B9F
cs=0x192;eip=0x001ba1; 	T(CMP(*(raddr(ds,bx)), 0));	// 3914 cmp     byte ptr [bx], 0 ;~ 00D0:1BA1
cs=0x192;eip=0x001ba4; 	J(JNZ(loc_11baf));	// 3915 jnz     short loc_11BAF ;~ 00D0:1BA4
cs=0x192;eip=0x001ba6; 	X(DEC(byte_14a2d));	// 3916 dec     byte_14A2D ;~ 00D0:1BA6
cs=0x192;eip=0x001baa; 	X(ADD(word_14a14, 0x0FFE0));	// 3917 add     word_14A14, 0FFE0h ;~ 00D0:1BAA
loc_11baf:
	// 4824 
cs=0x192;eip=0x001baf; 	J(JMP(loc_111ab));	// 3920 jmp     loc_111AB ;~ 00D0:1BAF
ret_d0_1bb2:
	// 4825 
cs=0x192;eip=0x001bb2; 	T(MOV(al, byte_14a2e));	// 3922 mov     al, byte_14A2E ;~ 00D0:1BB2
cs=0x192;eip=0x001bb5; 	T(CMP(al, 0x0FD));	// 3923 cmp     al, 0FDh ; 'ý' ;~ 00D0:1BB5
cs=0x192;eip=0x001bb7; 	J(JNZ(loc_11bbc));	// 3924 jnz     short loc_11BBC ;~ 00D0:1BB7
cs=0x192;eip=0x001bb9; 	J(JMP(loc_11213));	// 3925 jmp     loc_11213 ;~ 00D0:1BB9
loc_11bbc:
	// 4826 
cs=0x192;eip=0x001bbc; 	T(CMP(al, 1));	// 3929 cmp     al, 1 ;~ 00D0:1BBC
cs=0x192;eip=0x001bbe; 	J(JS(loc_11bcd));	// 3930 js      short loc_11BCD ;~ 00D0:1BBE
cs=0x192;eip=0x001bc0; 	T(MOV(bx, word_14a14));	// 3931 mov     bx, word_14A14 ;~ 00D0:1BC0
cs=0x192;eip=0x001bc4; 	T(ADD(bx, 0x303));	// 3932 add     bx, 303h ;~ 00D0:1BC4
cs=0x192;eip=0x001bc8; 	T(CMP(*(raddr(ds,bx)), 0x0C7));	// 3933 cmp     byte ptr [bx], 0C7h ; 'Ç' ;~ 00D0:1BC8
cs=0x192;eip=0x001bcb; 	J(JNC(loc_11bd5));	// 3934 jnb     short loc_11BD5 ;~ 00D0:1BCB
loc_11bcd:
	// 4827 
cs=0x192;eip=0x001bcd; 	X(DEC(byte_14a2e));	// 3937 dec     byte_14A2E ;~ 00D0:1BCD
cs=0x192;eip=0x001bd1; 	X(DEC(word_14a14));	// 3938 dec     word_14A14 ;~ 00D0:1BD1
loc_11bd5:
	// 4828 
cs=0x192;eip=0x001bd5; 	J(CALL(sub_11bdf,0));	// 3941 call    sub_11BDF ;~ 00D0:1BD5
cs=0x192;eip=0x001bd8; 	T(MOV(al, byte_18995));	// 3942 mov     al, byte_18995 ;~ 00D0:1BD8
cs=0x192;eip=0x001bdb; 	T(TEST(al, 2));	// 3943 test    al, 2 ;~ 00D0:1BDB
cs=0x192;eip=0x001bdd; 	J(JMP(loc_11b90));	// 3944 jmp     short loc_11B90 ;~ 00D0:1BDD
sub_11bdf:
	// 3949 
cs=0x192;eip=0x001bdf; 	X(XOR(byte_18c23, 7));	// 3951 xor     byte_18C23, 7 ;~ 00D0:1BDF
ret_d0_1be4:
	// 4829 
cs=0x192;eip=0x001be4; 	J(RETN(0));	// 3952 retn ;~ 00D0:1BE4
sub_11be5:
	// 3959 
cs=0x192;eip=0x001be5; 	T(MOV(bx, word_14a14));	// 3961 mov     bx, word_14A14 ;~ 00D0:1BE5
ret_d0_1be9:
	// 4830 
cs=0x192;eip=0x001be9; 	T(ADD(bx, dx));	// 3962 add     bx, dx ;~ 00D0:1BE9
cs=0x192;eip=0x001beb; 	T(CMP(*(raddr(ds,bx)), 0x0FF));	// 3963 cmp     byte ptr [bx], 0FFh ;~ 00D0:1BEB
cs=0x192;eip=0x001bee; 	J(JZ(loc_11bfb));	// 3964 jz      short loc_11BFB ;~ 00D0:1BEE
cs=0x192;eip=0x001bf0; 	T(MOV(al, 1));	// 3965 mov     al, 1 ;~ 00D0:1BF0
loc_11bf2:
	// 4831 
cs=0x192;eip=0x001bf2; 	X(MOV(byte_19e01, al));	// 3968 mov     byte_19E01, al ;~ 00D0:1BF2
cs=0x192;eip=0x001bf5; 	X(MOV(byte_14a38, 1));	// 3969 mov     byte_14A38, 1 ;~ 00D0:1BF5
cs=0x192;eip=0x001bfa; 	J(RETN(0));	// 3970 retn ;~ 00D0:1BFA
loc_11bfb:
	// 4832 
cs=0x192;eip=0x001bfb; 	T(ADD(bx, 0x240));	// 3974 add     bx, 240h ;~ 00D0:1BFB
cs=0x192;eip=0x001bff; 	T(CMP(*(raddr(ds,bx)), 0x0FF));	// 3975 cmp     byte ptr [bx], 0FFh ;~ 00D0:1BFF
cs=0x192;eip=0x001c02; 	T(MOV(al, 2));	// 3976 mov     al, 2 ;~ 00D0:1C02
cs=0x192;eip=0x001c04; 	J(JNZ(loc_11bf2));	// 3977 jnz     short loc_11BF2 ;~ 00D0:1C04
cs=0x192;eip=0x001c06; 	J(RETN(0));	// 3978 retn ;~ 00D0:1C06
seg000_1c07_proc:
	// 3984 
loc_11c07:
	// 4833 
cs=0x192;eip=0x001c07; 	T(MOV(al, *(db*)(((db*)&word_14a36))));	// 3985 mov     al, byte ptr word_14A36 ;~ 00D0:1C07
cs=0x192;eip=0x001c0a; 	T(OR(al, al));	// 3986 or      al, al ;~ 00D0:1C0A
cs=0x192;eip=0x001c0c; 	J(JNZ(locret_11c32));	// 3987 jnz     short locret_11C32 ;~ 00D0:1C0C
cs=0x192;eip=0x001c0e; 	T(MOV(ah, al));	// 3988 mov     ah, al ;~ 00D0:1C0E
cs=0x192;eip=0x001c10; 	T(MOV(al, byte_14a2e));	// 3989 mov     al, byte_14A2E ;~ 00D0:1C10
cs=0x192;eip=0x001c13; 	T(ADD(al, 0x30));	// 3990 add     al, 30h ; '0' ;~ 00D0:1C13
cs=0x192;eip=0x001c15; 	T(ADD(ax, 0x6E));	// 3991 add     ax, 6Eh ; 'n' ;~ 00D0:1C15
cs=0x192;eip=0x001c18; 	X(MOV(word_18982, ax));	// 3992 mov     word_18982, ax ;~ 00D0:1C18
cs=0x192;eip=0x001c1b; 	X(MOV(byte_18994, 5));	// 3993 mov     byte_18994, 5 ;~ 00D0:1C1B
cs=0x192;eip=0x001c20; 	T(MOV(dx, 0x5B3E));	// 3994 mov     dx, 5B3Eh ;~ 00D0:1C20
cs=0x192;eip=0x001c23; 	T(MOV(ax, 0x484));	// 3995 mov     ax, 484h ;~ 00D0:1C23
cs=0x192;eip=0x001c26; 	J(CALL(sub_11ec0,0));	// 3996 call    sub_11EC0 ;~ 00D0:1C26
cs=0x192;eip=0x001c29; 	T(MOV(dx, 0x5B6A));	// 3997 mov     dx, 5B6Ah ;~ 00D0:1C29
cs=0x192;eip=0x001c2c; 	T(MOV(ax, 4));	// 3998 mov     ax, 4 ;~ 00D0:1C2C
cs=0x192;eip=0x001c2f; 	J(CALL(sub_11ec0,0));	// 3999 call    sub_11EC0 ;~ 00D0:1C2F
locret_11c32:
	// 4834 
cs=0x192;eip=0x001c32; 	J(RETN(0));	// 4002 retn ;~ 00D0:1C32
sub_11c33:
	// 4008 
cs=0x192;eip=0x001c33; 	X(POP(bp));	// 4016 pop     bp ;~ 00D0:1C33
ret_d0_1c34:
	// 4835 
cs=0x192;eip=0x001c34; 	T(CMP(byte_18e4d, 7));	// 4017 cmp     byte_18E4D, 7 ;~ 00D0:1C34
cs=0x192;eip=0x001c39; 	J(JZ(loc_11c95));	// 4018 jz      short loc_11C95 ;~ 00D0:1C39
cs=0x192;eip=0x001c3b; 	T(CMP(byte_18e50, 7));	// 4019 cmp     byte_18E50, 7 ;~ 00D0:1C3B
cs=0x192;eip=0x001c40; 	J(JZ(loc_11c95));	// 4020 jz      short loc_11C95 ;~ 00D0:1C40
cs=0x192;eip=0x001c42; 	X(PUSH(bp));	// 4021 push    bp ;~ 00D0:1C42
cs=0x192;eip=0x001c43; 	T(MOV(cx, 5));	// 4022 mov     cx, 5 ;~ 00D0:1C43
cs=0x192;eip=0x001c46; 	J(CALL(_group1,m2c::kloc_11d52));	// 4023 call    loc_11D52 ;~ 00D0:1C46
cs=0x192;eip=0x001c49; 	X(POP(bp));	// 4024 pop     bp ;~ 00D0:1C49
cs=0x192;eip=0x001c4a; 	J(JZ(loc_11c4f));	// 4025 jz      short loc_11C4F ;~ 00D0:1C4A
cs=0x192;eip=0x001c4c; 	J(JMP(loc_11367));	// 4026 jmp     loc_11367 ;~ 00D0:1C4C
loc_11c4f:
	// 4836 
cs=0x192;eip=0x001c4f; 	T(MOV(al, byte_18e46));	// 4030 mov     al, byte_18E46 ;~ 00D0:1C4F
cs=0x192;eip=0x001c52; 	T(INC(al));	// 4031 inc     al ;~ 00D0:1C52
cs=0x192;eip=0x001c54; 	T(CMP(al, 0x0C8));	// 4032 cmp     al, 0C8h ; 'È' ;~ 00D0:1C54
cs=0x192;eip=0x001c56; 	J(JC(loc_11c66));	// 4033 jb      short loc_11C66 ;~ 00D0:1C56
cs=0x192;eip=0x001c58; 	X(DEC(byte_14a2d));	// 4034 dec     byte_14A2D ;~ 00D0:1C58
cs=0x192;eip=0x001c5c; 	X(ADD(word_14a14, 0x0FFE0));	// 4035 add     word_14A14, 0FFE0h ;~ 00D0:1C5C
cs=0x192;eip=0x001c61; 	J(CALL(sub_11c97,0));	// 4036 call    sub_11C97 ;~ 00D0:1C61
cs=0x192;eip=0x001c64; 	J(JMP(loc_11c95));	// 4037 jmp     short loc_11C95 ;~ 00D0:1C64
loc_11c66:
	// 4837 
cs=0x192;eip=0x001c66; 	T(CMP(byte_18e4f, 0x0C7));	// 4041 cmp     byte_18E4F, 0C7h ; 'Ç' ;~ 00D0:1C66
cs=0x192;eip=0x001c6b; 	J(JNC(loc_11c95));	// 4042 jnb     short loc_11C95 ;~ 00D0:1C6B
cs=0x192;eip=0x001c6d; 	T(CMP(byte_18e4c, 0x0C7));	// 4043 cmp     byte_18E4C, 0C7h ; 'Ç' ;~ 00D0:1C6D
cs=0x192;eip=0x001c72; 	J(JNC(loc_11c95));	// 4044 jnb     short loc_11C95 ;~ 00D0:1C72
cs=0x192;eip=0x001c74; 	X(INC(byte_14a2d));	// 4045 inc     byte_14A2D ;~ 00D0:1C74
cs=0x192;eip=0x001c78; 	X(ADD(word_14a14, 0x20));	// 4046 add     word_14A14, 20h ; ' ' ;~ 00D0:1C78
cs=0x192;eip=0x001c7d; 	J(CALL(sub_11d16,0));	// 4047 call    sub_11D16 ;~ 00D0:1C7D
cs=0x192;eip=0x001c80; 	X(PUSH(bp));	// 4048 push    bp ;~ 00D0:1C80
cs=0x192;eip=0x001c81; 	J(CALL(sub_11db3,0));	// 4049 call    sub_11DB3 ;~ 00D0:1C81
cs=0x192;eip=0x001c84; 	J(CALL(sub_11dca,0));	// 4050 call    sub_11DCA ;~ 00D0:1C84
cs=0x192;eip=0x001c87; 	J(CALL(sub_11dc4,0));	// 4051 call    sub_11DC4 ;~ 00D0:1C87
cs=0x192;eip=0x001c8a; 	J(CALL(sub_11d36,0));	// 4052 call    sub_11D36 ;~ 00D0:1C8A
cs=0x192;eip=0x001c8d; 	X(POP(bp));	// 4053 pop     bp ;~ 00D0:1C8D
cs=0x192;eip=0x001c8e; 	J(JNZ(loc_11c95));	// 4054 jnz     short loc_11C95 ;~ 00D0:1C8E
cs=0x192;eip=0x001c90; 	T(MOV(al, 5));	// 4055 mov     al, 5 ;~ 00D0:1C90
cs=0x192;eip=0x001c92; 	J(JMP(loc_112f1));	// 4056 jmp     loc_112F1 ;~ 00D0:1C92
loc_11c95:
	// 4838 
cs=0x192;eip=0x001c95; 	X(PUSH(bp));	// 4061 push    bp ;~ 00D0:1C95
cs=0x192;eip=0x001c96; 	J(RETN(0));	// 4062 retn ;~ 00D0:1C96
sub_11c97:
	// 4069 
cs=0x192;eip=0x001c97; 	T(CMP(byte_14a2d, 0x0F9));	// 4071 cmp     byte_14A2D, 0F9h ; 'ù' ;~ 00D0:1C97
ret_d0_1c9c:
	// 4839 
cs=0x192;eip=0x001c9c; 	J(JZ(loc_11c9f));	// 4072 jz      short loc_11C9F ;~ 00D0:1C9C
cs=0x192;eip=0x001c9e; 	J(RETN(0));	// 4073 retn ;~ 00D0:1C9E
loc_11c9f:
	// 4840 
cs=0x192;eip=0x001c9f; 	X(DEC(*(db*)(((db*)&word_14a36))));	// 4077 dec     byte ptr word_14A36 ;~ 00D0:1C9F
cs=0x192;eip=0x001ca3; 	X(POP(ax));	// 4078 pop     ax ;~ 00D0:1CA3
cs=0x192;eip=0x001ca4; 	X(ADD(byte_14a2d, 0x12));	// 4079 add     byte_14A2D, 12h ;~ 00D0:1CA4
cs=0x192;eip=0x001ca9; 	T(MOV(bx, word_14a14));	// 4080 mov     bx, word_14A14 ;~ 00D0:1CA9
cs=0x192;eip=0x001cad; 	T(ADD(bx, 0x240));	// 4081 add     bx, 240h ;~ 00D0:1CAD
cs=0x192;eip=0x001cb1; 	T(MOV(dx, 0x0FFE0));	// 4082 mov     dx, 0FFE0h ;~ 00D0:1CB1
cs=0x192;eip=0x001cb4; 	J(JMP(loc_11271));	// 4083 jmp     loc_11271 ;~ 00D0:1CB4
sub_11cb7:
	// 4090 
cs=0x192;eip=0x001cb7; 	T(MOV(si, 0x5D10));	// 4092 mov     si, 5D10h ;~ 00D0:1CB7
ret_d0_1cba:
	// 4841 
cs=0x192;eip=0x001cba; 	X(MOV(word_1898e, si));	// 4093 mov     word_1898E, si ;~ 00D0:1CBA
cs=0x192;eip=0x001cbe; 	T(MOV(di, 0x5CFE));	// 4094 mov     di, 5CFEh ;~ 00D0:1CBE
cs=0x192;eip=0x001cc1; 	T(MOV(cx, 9));	// 4095 mov     cx, 9 ;~ 00D0:1CC1
cs=0x192;eip=0x001cc4; 	T(CLD);	// 4096 cld ;~ 00D0:1CC4
	// 4097 rep movsw ;~ 00D0:1CC5
cs=0x192;eip=0x001cc5; 	X(	REP MOVSW);	// 4097 rep movsw ;~ 00D0:1CC5
cs=0x192;eip=0x001cc7; 	X(MOV(byte_1899c, 0));	// 4098 mov     byte_1899C, 0 ;~ 00D0:1CC7
cs=0x192;eip=0x001ccc; 	J(RETN(0));	// 4099 retn ;~ 00D0:1CCC
sub_11ccd:
	// 4106 
cs=0x192;eip=0x001ccd; 	X(XOR(byte_18b55, 0x9B));	// 4108 xor     byte_18B55, 9Bh ;~ 00D0:1CCD
ret_d0_1cd2:
	// 4842 
cs=0x192;eip=0x001cd2; 	X(ADD(word_1898e, 0x12));	// 4109 add     word_1898E, 12h ;~ 00D0:1CD2
cs=0x192;eip=0x001cd7; 	T(MOV(al, byte_1899c));	// 4110 mov     al, byte_1899C ;~ 00D0:1CD7
cs=0x192;eip=0x001cda; 	T(INC(al));	// 4111 inc     al ;~ 00D0:1CDA
cs=0x192;eip=0x001cdc; 	T(CMP(al, 4));	// 4112 cmp     al, 4 ;~ 00D0:1CDC
cs=0x192;eip=0x001cde; 	J(JNZ(loc_11cef));	// 4113 jnz     short loc_11CEF ;~ 00D0:1CDE
cs=0x192;eip=0x001ce0; 	X(MOV(word_1898e, 0x5D10));	// 4114 mov     word_1898E, 5D10h ;~ 00D0:1CE0
cs=0x192;eip=0x001ce6; 	T(MOV(ch, 1));	// 4115 mov     ch, 1 ;~ 00D0:1CE6
cs=0x192;eip=0x001ce8; 	T(MOV(dh, 4));	// 4116 mov     dh, 4 ;~ 00D0:1CE8
cs=0x192;eip=0x001cea; 	J(CALL(sub_12dd0,0));	// 4117 call    sub_12DD0 ;~ 00D0:1CEA
cs=0x192;eip=0x001ced; 	T(XOR(al, al));	// 4118 xor     al, al ;~ 00D0:1CED
loc_11cef:
	// 4843 
cs=0x192;eip=0x001cef; 	X(MOV(byte_1899c, al));	// 4121 mov     byte_1899C, al ;~ 00D0:1CEF
cs=0x192;eip=0x001cf2; 	T(MOV(si, word_1898e));	// 4122 mov     si, word_1898E ;~ 00D0:1CF2
cs=0x192;eip=0x001cf6; 	T(MOV(di, 0x5CFE));	// 4123 mov     di, 5CFEh ;~ 00D0:1CF6
cs=0x192;eip=0x001cf9; 	T(MOV(cx, 9));	// 4124 mov     cx, 9 ;~ 00D0:1CF9
cs=0x192;eip=0x001cfc; 	T(CLD);	// 4125 cld ;~ 00D0:1CFC
	// 4126 rep movsw ;~ 00D0:1CFD
cs=0x192;eip=0x001cfd; 	X(	REP MOVSW);	// 4126 rep movsw ;~ 00D0:1CFD
cs=0x192;eip=0x001cff; 	J(RETN(0));	// 4127 retn ;~ 00D0:1CFF
sub_11d00:
	// 4134 
cs=0x192;eip=0x001d00; 	T(MOV(dx, 0x506));	// 4139 mov     dx, 506h ;~ 00D0:1D00
ret_d0_1d03:
	// 4844 
cs=0x192;eip=0x001d03; 	J(CALL(sub_11daa,0));	// 4140 call    sub_11DAA ;~ 00D0:1D03
cs=0x192;eip=0x001d06; 	T(MOV(bx, word_14a14));	// 4141 mov     bx, word_14A14 ;~ 00D0:1D06
cs=0x192;eip=0x001d0a; 	T(ADD(bx, dx));	// 4142 add     bx, dx ;~ 00D0:1D0A
cs=0x192;eip=0x001d0c; 	T(CMP(*(raddr(ds,bx)), 0));	// 4143 cmp     byte ptr [bx], 0 ;~ 00D0:1D0C
cs=0x192;eip=0x001d0f; 	J(JNZ(loc_11d12));	// 4144 jnz     short loc_11D12 ;~ 00D0:1D0F
cs=0x192;eip=0x001d11; 	J(RETN(0));	// 4145 retn ;~ 00D0:1D11
loc_11d12:
	// 4845 
cs=0x192;eip=0x001d12; 	X(POP(ax));	// 4149 pop     ax ;~ 00D0:1D12
cs=0x192;eip=0x001d13; 	J(JMP(loc_111ab));	// 4150 jmp     loc_111AB ;~ 00D0:1D13
sub_11d16:
	// 4157 
cs=0x192;eip=0x001d16; 	T(CMP(byte_14a2d, 0x0B));	// 4159 cmp     byte_14A2D, 0Bh ;~ 00D0:1D16
ret_d0_1d1b:
	// 4846 
cs=0x192;eip=0x001d1b; 	J(JZ(loc_11d1e));	// 4160 jz      short loc_11D1E ;~ 00D0:1D1B
cs=0x192;eip=0x001d1d; 	J(RETN(0));	// 4161 retn ;~ 00D0:1D1D
loc_11d1e:
	// 4847 
cs=0x192;eip=0x001d1e; 	X(INC(*(db*)(((db*)&word_14a36))));	// 4165 inc     byte ptr word_14A36 ;~ 00D0:1D1E
cs=0x192;eip=0x001d22; 	X(SUB(byte_14a2d, 0x11));	// 4166 sub     byte_14A2D, 11h ;~ 00D0:1D22
cs=0x192;eip=0x001d27; 	T(MOV(bx, word_14a14));	// 4167 mov     bx, word_14A14 ;~ 00D0:1D27
cs=0x192;eip=0x001d2b; 	T(ADD(bx, 0x0FDE0));	// 4168 add     bx, 0FDE0h ;~ 00D0:1D2B
cs=0x192;eip=0x001d2f; 	T(MOV(dx, 0x20));	// 4169 mov     dx, 20h ; ' ' ;~ 00D0:1D2F
cs=0x192;eip=0x001d32; 	X(POP(ax));	// 4170 pop     ax ;~ 00D0:1D32
cs=0x192;eip=0x001d33; 	J(JMP(loc_11271));	// 4171 jmp     loc_11271 ;~ 00D0:1D33
sub_11d36:
	// 4178 
cs=0x192;eip=0x001d36; 	T(MOV(bx, 0x5FED));	// 4180 mov     bx, 5FEDh ;~ 00D0:1D36
ret_d0_1d39:
	// 4848 
cs=0x192;eip=0x001d39; 	T(MOV(ah, 1));	// 4181 mov     ah, 1 ;~ 00D0:1D39
cs=0x192;eip=0x001d3b; 	T(MOV(cx, 4));	// 4182 mov     cx, 4 ;~ 00D0:1D3B
loc_11d3e:
	// 4849 
cs=0x192;eip=0x001d3e; 	T(MOV(al, *(raddr(ds,bx))));	// 4185 mov     al, [bx] ;~ 00D0:1D3E
cs=0x192;eip=0x001d40; 	T(INC(al));	// 4186 inc     al ;~ 00D0:1D40
cs=0x192;eip=0x001d42; 	T(CMP(al, 0x0C8));	// 4187 cmp     al, 0C8h ; 'È' ;~ 00D0:1D42
cs=0x192;eip=0x001d44; 	J(JNC(loc_11d4c));	// 4188 jnb     short loc_11D4C ;~ 00D0:1D44
cs=0x192;eip=0x001d46; 	T(INC(bx));	// 4189 inc     bx ;~ 00D0:1D46
cs=0x192;eip=0x001d47; 	J(LOOP(loc_11d3e));	// 4190 loop    loc_11D3E ;~ 00D0:1D47
cs=0x192;eip=0x001d49; 	T(DEC(ah));	// 4191 dec     ah ;~ 00D0:1D49
cs=0x192;eip=0x001d4b; 	J(RETN(0));	// 4192 retn ;~ 00D0:1D4B
loc_11d4c:
	// 4850 
cs=0x192;eip=0x001d4c; 	T(INC(ah));	// 4196 inc     ah ;~ 00D0:1D4C
cs=0x192;eip=0x001d4e; 	J(RETN(0));	// 4197 retn ;~ 00D0:1D4E
sub_11d4f:
	// 4204 
cs=0x192;eip=0x001d4f; 	T(MOV(cx, 6));	// 4205 mov     cx, 6 ;~ 00D0:1D4F
loc_11d52:
	// 4851 
cs=0x192;eip=0x001d52; 	T(MOV(bx, 0x5FC8));	// 4208 mov     bx, 5FC8h ;~ 00D0:1D52
cs=0x192;eip=0x001d55; 	T(MOV(ah, 1));	// 4209 mov     ah, 1 ;~ 00D0:1D55
loc_11d57:
	// 4852 
cs=0x192;eip=0x001d57; 	T(MOV(al, *(raddr(ds,bx))));	// 4212 mov     al, [bx] ;~ 00D0:1D57
cs=0x192;eip=0x001d59; 	T(INC(al));	// 4213 inc     al ;~ 00D0:1D59
cs=0x192;eip=0x001d5b; 	T(CMP(al, 0x0C8));	// 4214 cmp     al, 0C8h ; 'È' ;~ 00D0:1D5B
cs=0x192;eip=0x001d5d; 	J(JNC(loc_11d66));	// 4215 jnb     short loc_11D66 ;~ 00D0:1D5D
cs=0x192;eip=0x001d5f; 	T(ADD(bx, 6));	// 4216 add     bx, 6 ;~ 00D0:1D5F
cs=0x192;eip=0x001d62; 	J(LOOP(loc_11d57));	// 4217 loop    loc_11D57 ;~ 00D0:1D62
cs=0x192;eip=0x001d64; 	T(MOV(ah, 0));	// 4218 mov     ah, 0 ;~ 00D0:1D64
loc_11d66:
	// 4853 
cs=0x192;eip=0x001d66; 	T(DEC(ah));	// 4221 dec     ah ;~ 00D0:1D66
cs=0x192;eip=0x001d68; 	T(INC(ah));	// 4222 inc     ah ;~ 00D0:1D68
cs=0x192;eip=0x001d6a; 	J(RETN(0));	// 4223 retn ;~ 00D0:1D6A
sub_11d6b:
	// 4230 
cs=0x192;eip=0x001d6b; 	J(CALL(sub_11d4f,0));	// 4237 call    sub_11D4F ;~ 00D0:1D6B
ret_d0_1d6e:
	// 4854 
cs=0x192;eip=0x001d6e; 	J(JNZ(loc_11d71));	// 4238 jnz     short loc_11D71 ;~ 00D0:1D6E
cs=0x192;eip=0x001d70; 	J(RETN(0));	// 4239 retn ;~ 00D0:1D70
loc_11d71:
	// 4855 
cs=0x192;eip=0x001d71; 	X(POP(ax));	// 4243 pop     ax ;~ 00D0:1D71
cs=0x192;eip=0x001d72; 	T(MOV(dx, 0x5E7E));	// 4244 mov     dx, 5E7Eh ;~ 00D0:1D72
cs=0x192;eip=0x001d75; 	T(MOV(bx, 0x1A05));	// 4245 mov     bx, 1A05h ;~ 00D0:1D75
cs=0x192;eip=0x001d78; 	J(JMP(loc_11209));	// 4246 jmp     loc_11209 ;~ 00D0:1D78
sub_11d7b:
	// 4253 
cs=0x192;eip=0x001d7b; 	T(CMP(byte_14a39, 0));	// 4260 cmp     byte_14A39, 0 ;~ 00D0:1D7B
ret_d0_1d80:
	// 4856 
cs=0x192;eip=0x001d80; 	J(JZ(loc_11d8e));	// 4261 jz      short loc_11D8E ;~ 00D0:1D80
cs=0x192;eip=0x001d82; 	T(CMP(byte_14a2e, 0x1D));	// 4262 cmp     byte_14A2E, 1Dh ;~ 00D0:1D82
cs=0x192;eip=0x001d87; 	J(JZ(loc_11d8a));	// 4263 jz      short loc_11D8A ;~ 00D0:1D87
locret_11d89:
	// 4857 
cs=0x192;eip=0x001d89; 	J(RETN(0));	// 4266 retn ;~ 00D0:1D89
loc_11d8a:
	// 4858 
cs=0x192;eip=0x001d8a; 	X(POP(ax));	// 4270 pop     ax ;~ 00D0:1D8A
cs=0x192;eip=0x001d8b; 	J(JMP(loc_11229));	// 4271 jmp     loc_11229 ;~ 00D0:1D8B
loc_11d8e:
	// 4859 
cs=0x192;eip=0x001d8e; 	T(CMP(byte_14a2e, 0x0FD));	// 4275 cmp     byte_14A2E, 0FDh ; 'ý' ;~ 00D0:1D8E
cs=0x192;eip=0x001d93; 	J(JNZ(locret_11d89));	// 4276 jnz     short locret_11D89 ;~ 00D0:1D93
cs=0x192;eip=0x001d95; 	X(POP(ax));	// 4277 pop     ax ;~ 00D0:1D95
cs=0x192;eip=0x001d96; 	J(JMP(loc_11213));	// 4278 jmp     loc_11213 ;~ 00D0:1D96
sub_11d99:
	// 4285 
cs=0x192;eip=0x001d99; 	T(MOV(al, byte_14a39));	// 4287 mov     al, byte_14A39 ;~ 00D0:1D99
ret_d0_1d9c:
	// 4860 
cs=0x192;eip=0x001d9c; 	T(ADD(al, al));	// 4288 add     al, al ;~ 00D0:1D9C
cs=0x192;eip=0x001d9e; 	T(MOV(ah, 0));	// 4289 mov     ah, 0 ;~ 00D0:1D9E
cs=0x192;eip=0x001da0; 	T(DEC(ax));	// 4290 dec     ax ;~ 00D0:1DA0
cs=0x192;eip=0x001da1; 	X(ADD(byte_14a2e, al));	// 4291 add     byte_14A2E, al ;~ 00D0:1DA1
cs=0x192;eip=0x001da5; 	X(ADD(word_14a14, ax));	// 4292 add     word_14A14, ax ;~ 00D0:1DA5
cs=0x192;eip=0x001da9; 	J(RETN(0));	// 4293 retn ;~ 00D0:1DA9
sub_11daa:
	// 4300 
cs=0x192;eip=0x001daa; 	T(CMP(byte_14a2e, 0x0FD));	// 4302 cmp     byte_14A2E, 0FDh ; 'ý' ;~ 00D0:1DAA
ret_d0_1daf:
	// 4861 
cs=0x192;eip=0x001daf; 	J(JNZ(locret_11db2));	// 4303 jnz     short locret_11DB2 ;~ 00D0:1DAF
cs=0x192;eip=0x001db1; 	T(INC(dx));	// 4304 inc     dx ;~ 00D0:1DB1
locret_11db2:
	// 4862 
cs=0x192;eip=0x001db2; 	J(RETN(0));	// 4307 retn ;~ 00D0:1DB2
sub_11db3:
	// 4314 
cs=0x192;eip=0x001db3; 	T(MOV(di, 0x5FC2));	// 4316 mov     di, 5FC2h ;~ 00D0:1DB3
ret_d0_1db6:
	// 4863 
cs=0x192;eip=0x001db6; 	T(MOV(cx, 0x18));	// 4317 mov     cx, 18h ;~ 00D0:1DB6
cs=0x192;eip=0x001db9; 	T(MOV(ax, 0x0FFFF));	// 4318 mov     ax, 0FFFFh ;~ 00D0:1DB9
	// 4319 rep stosw ;~ 00D0:1DBC
cs=0x192;eip=0x001dbc; 	X(	REP STOSW);	// 4319 rep stosw ;~ 00D0:1DBC
cs=0x192;eip=0x001dbe; 	X(MOV(byte_18991, 2));	// 4320 mov     byte_18991, 2 ;~ 00D0:1DBE
cs=0x192;eip=0x001dc3; 	J(RETN(0));	// 4321 retn ;~ 00D0:1DC3
sub_11dc4:
	// 4328 
cs=0x192;eip=0x001dc4; 	X(MOV(byte_18991, 0));	// 4330 mov     byte_18991, 0 ;~ 00D0:1DC4
ret_d0_1dc9:
	// 4864 
cs=0x192;eip=0x001dc9; 	J(RETN(0));	// 4331 retn ;~ 00D0:1DC9
sub_11dca:
	// 4338 
cs=0x192;eip=0x001dca; 	T(MOV(bx, word_14a14));	// 4340 mov     bx, word_14A14 ;~ 00D0:1DCA
ret_d0_1dce:
	// 4865 
cs=0x192;eip=0x001dce; 	T(ADD(bx, 4));	// 4341 add     bx, 4 ;~ 00D0:1DCE
cs=0x192;eip=0x001dd2; 	T(MOV(dx, 0x5B6A));	// 4342 mov     dx, 5B6Ah ;~ 00D0:1DD2
cs=0x192;eip=0x001dd5; 	T(MOV(cl, 8));	// 4343 mov     cl, 8 ;~ 00D0:1DD5
cs=0x192;eip=0x001dd7; 	T(MOV(ch, 6));	// 4344 mov     ch, 6 ;~ 00D0:1DD7
cs=0x192;eip=0x001dd9; 	T(MOV(ah, byte_14a2d));	// 4345 mov     ah, byte_14A2D ;~ 00D0:1DD9
cs=0x192;eip=0x001ddd; 	T(MOV(al, byte_14a2e));	// 4346 mov     al, byte_14A2E ;~ 00D0:1DDD
cs=0x192;eip=0x001de0; 	J(JMP(sub_11dfd));	// 4347 jmp     short sub_11DFD ;~ 00D0:1DE0
sub_11de3:
	// 4356 
cs=0x192;eip=0x001de3; 	T(MOV(bx, word_14a14));	// 4357 mov     bx, word_14A14 ;~ 00D0:1DE3
ret_d0_1de7:
	// 4866 
cs=0x192;eip=0x001de7; 	T(ADD(bx, 0x6C4));	// 4358 add     bx, 6C4h ;~ 00D0:1DE7
cs=0x192;eip=0x001deb; 	T(MOV(dx, word_14a18));	// 4359 mov     dx, word_14A18 ;~ 00D0:1DEB
cs=0x192;eip=0x001def; 	T(MOV(cl, 7));	// 4360 mov     cl, 7 ;~ 00D0:1DEF
cs=0x192;eip=0x001df1; 	T(MOV(ch, 6));	// 4361 mov     ch, 6 ;~ 00D0:1DF1
cs=0x192;eip=0x001df3; 	T(MOV(ah, byte_14a2d));	// 4362 mov     ah, byte_14A2D ;~ 00D0:1DF3
cs=0x192;eip=0x001df7; 	T(MOV(al, byte_14a2e));	// 4363 mov     al, byte_14A2E ;~ 00D0:1DF7
cs=0x192;eip=0x001dfa; 	J(JMP(sub_11dfd));	// 4364 jmp     short sub_11DFD ;~ 00D0:1DFA
sub_11dfd:
	// 4373 
cs=0x192;eip=0x001dfd; 	X(MOV(byte_18993, al));	// 4375 mov     byte_18993, al ;~ 00D0:1DFD
ret_d0_1e00:
	// 4867 
cs=0x192;eip=0x001e00; 	T(MOV(al, byte_14a39));	// 4376 mov     al, byte_14A39 ;~ 00D0:1E00
cs=0x192;eip=0x001e03; 	T(DEC(al));	// 4377 dec     al ;~ 00D0:1E03
cs=0x192;eip=0x001e05; 	J(JZ(loc_11e5c));	// 4378 jz      short loc_11E5C ;~ 00D0:1E05
cs=0x192;eip=0x001e07; 	T(MOV(di, word_18980));	// 4379 mov     di, word_18980 ;~ 00D0:1E07
cs=0x192;eip=0x001e0b; 	T(MOV(di, *(dw*)(raddr(ds,di))));	// 4380 mov     di, [di] ;~ 00D0:1E0B
cs=0x192;eip=0x001e0d; 	T(ADD(di, 0x244));	// 4381 add     di, 244h ;~ 00D0:1E0D
cs=0x192;eip=0x001e11; 	T(MOV(si, 0x5FC2));	// 4382 mov     si, 5FC2h ;~ 00D0:1E11
cs=0x192;eip=0x001e14; 	X(MOV(byte_18992, ch));	// 4383 mov     byte_18992, ch ;~ 00D0:1E14
loc_11e18:
	// 4868 
cs=0x192;eip=0x001e18; 	T(MOV(ch, byte_18992));	// 4386 mov     ch, byte_18992 ;~ 00D0:1E18
cs=0x192;eip=0x001e1c; 	X(PUSH(di));	// 4387 push    di ;~ 00D0:1E1C
cs=0x192;eip=0x001e1d; 	X(PUSH(bx));	// 4388 push    bx ;~ 00D0:1E1D
cs=0x192;eip=0x001e1e; 	T(MOV(al, byte_18993));	// 4389 mov     al, byte_18993 ;~ 00D0:1E1E
loc_11e21:
	// 4869 
cs=0x192;eip=0x001e21; 	T(CMP(al, 0x20));	// 4392 cmp     al, 20h ; ' ' ;~ 00D0:1E21
cs=0x192;eip=0x001e23; 	J(JNC(loc_11e43));	// 4393 jnb     short loc_11E43 ;~ 00D0:1E23
cs=0x192;eip=0x001e25; 	T(CMP(ah, 0x12));	// 4394 cmp     ah, 12h ;~ 00D0:1E25
cs=0x192;eip=0x001e28; 	J(JNC(loc_11e43));	// 4395 jnb     short loc_11E43 ;~ 00D0:1E28
cs=0x192;eip=0x001e2a; 	X(PUSH(ax));	// 4396 push    ax ;~ 00D0:1E2A
cs=0x192;eip=0x001e2b; 	T(MOV(al, *(raddr(ds,di))));	// 4397 mov     al, [di] ;~ 00D0:1E2B
cs=0x192;eip=0x001e2d; 	T(TEST(byte_18991, 2));	// 4398 test    byte_18991, 2 ;~ 00D0:1E2D
cs=0x192;eip=0x001e32; 	J(JZ(loc_11e36));	// 4399 jz      short loc_11E36 ;~ 00D0:1E32
cs=0x192;eip=0x001e34; 	X(MOV(*(raddr(ds,si)), al));	// 4400 mov     [si], al ;~ 00D0:1E34
loc_11e36:
	// 4870 
cs=0x192;eip=0x001e36; 	T(CMP(al, 0x0C7));	// 4403 cmp     al, 0C7h ; 'Ç' ;~ 00D0:1E36
cs=0x192;eip=0x001e38; 	J(JNC(loc_11e42));	// 4404 jnb     short loc_11E42 ;~ 00D0:1E38
cs=0x192;eip=0x001e3a; 	T(XCHG(bx, dx));	// 4405 xchg    bx, dx ;~ 00D0:1E3A
cs=0x192;eip=0x001e3c; 	T(MOV(al, *(raddr(ds,bx))));	// 4406 mov     al, [bx] ;~ 00D0:1E3C
cs=0x192;eip=0x001e3e; 	T(XCHG(bx, dx));	// 4407 xchg    bx, dx ;~ 00D0:1E3E
cs=0x192;eip=0x001e40; 	X(MOV(*(raddr(ds,bx)), al));	// 4408 mov     [bx], al ;~ 00D0:1E40
loc_11e42:
	// 4871 
cs=0x192;eip=0x001e42; 	X(POP(ax));	// 4411 pop     ax ;~ 00D0:1E42
loc_11e43:
	// 4872 
cs=0x192;eip=0x001e43; 	T(INC(al));	// 4415 inc     al ;~ 00D0:1E43
cs=0x192;eip=0x001e45; 	T(INC(di));	// 4416 inc     di ;~ 00D0:1E45
cs=0x192;eip=0x001e46; 	T(INC(si));	// 4417 inc     si ;~ 00D0:1E46
cs=0x192;eip=0x001e47; 	T(INC(bx));	// 4418 inc     bx ;~ 00D0:1E47
cs=0x192;eip=0x001e48; 	T(INC(dx));	// 4419 inc     dx ;~ 00D0:1E48
cs=0x192;eip=0x001e49; 	T(DEC(ch));	// 4420 dec     ch ;~ 00D0:1E49
cs=0x192;eip=0x001e4b; 	J(JNZ(loc_11e21));	// 4421 jnz     short loc_11E21 ;~ 00D0:1E4B
cs=0x192;eip=0x001e4d; 	X(POP(bx));	// 4422 pop     bx ;~ 00D0:1E4D
cs=0x192;eip=0x001e4e; 	T(ADD(bx, 0x20));	// 4423 add     bx, 20h ; ' ' ;~ 00D0:1E4E
cs=0x192;eip=0x001e51; 	T(INC(ah));	// 4424 inc     ah ;~ 00D0:1E51
cs=0x192;eip=0x001e53; 	X(POP(di));	// 4425 pop     di ;~ 00D0:1E53
cs=0x192;eip=0x001e54; 	T(ADD(di, 0x20));	// 4426 add     di, 20h ; ' ' ;~ 00D0:1E54
cs=0x192;eip=0x001e57; 	T(DEC(cl));	// 4427 dec     cl ;~ 00D0:1E57
cs=0x192;eip=0x001e59; 	J(JNZ(loc_11e18));	// 4428 jnz     short loc_11E18 ;~ 00D0:1E59
cs=0x192;eip=0x001e5b; 	J(RETN(0));	// 4429 retn ;~ 00D0:1E5B
loc_11e5c:
	// 4873 
cs=0x192;eip=0x001e5c; 	T(MOV(di, word_18980));	// 4433 mov     di, word_18980 ;~ 00D0:1E5C
cs=0x192;eip=0x001e60; 	T(MOV(di, *(dw*)(raddr(ds,di))));	// 4434 mov     di, [di] ;~ 00D0:1E60
cs=0x192;eip=0x001e62; 	T(ADD(di, 0x244));	// 4435 add     di, 244h ;~ 00D0:1E62
cs=0x192;eip=0x001e66; 	T(MOV(si, word_1897e));	// 4436 mov     si, word_1897E ;~ 00D0:1E66
cs=0x192;eip=0x001e6a; 	X(MOV(byte_18992, ch));	// 4437 mov     byte_18992, ch ;~ 00D0:1E6A
cs=0x192;eip=0x001e6e; 	T(XCHG(bx, dx));	// 4438 xchg    bx, dx ;~ 00D0:1E6E
cs=0x192;eip=0x001e70; 	T(ADD(bx, word_1897c));	// 4439 add     bx, word_1897C ;~ 00D0:1E70
cs=0x192;eip=0x001e74; 	T(XCHG(bx, dx));	// 4440 xchg    bx, dx ;~ 00D0:1E74
loc_11e76:
	// 4874 
cs=0x192;eip=0x001e76; 	T(MOV(ch, byte_18992));	// 4443 mov     ch, byte_18992 ;~ 00D0:1E76
cs=0x192;eip=0x001e7a; 	T(MOV(al, byte_18993));	// 4444 mov     al, byte_18993 ;~ 00D0:1E7A
loc_11e7d:
	// 4875 
cs=0x192;eip=0x001e7d; 	T(CMP(al, 0x20));	// 4447 cmp     al, 20h ; ' ' ;~ 00D0:1E7D
cs=0x192;eip=0x001e7f; 	J(JNC(loc_11e9f));	// 4448 jnb     short loc_11E9F ;~ 00D0:1E7F
cs=0x192;eip=0x001e81; 	T(CMP(ah, 0x12));	// 4449 cmp     ah, 12h ;~ 00D0:1E81
cs=0x192;eip=0x001e84; 	J(JNC(loc_11e9f));	// 4450 jnb     short loc_11E9F ;~ 00D0:1E84
cs=0x192;eip=0x001e86; 	X(PUSH(ax));	// 4451 push    ax ;~ 00D0:1E86
cs=0x192;eip=0x001e87; 	T(MOV(al, *(raddr(ds,di))));	// 4452 mov     al, [di] ;~ 00D0:1E87
cs=0x192;eip=0x001e89; 	T(TEST(byte_18991, 2));	// 4453 test    byte_18991, 2 ;~ 00D0:1E89
cs=0x192;eip=0x001e8e; 	J(JZ(loc_11e92));	// 4454 jz      short loc_11E92 ;~ 00D0:1E8E
cs=0x192;eip=0x001e90; 	X(MOV(*(raddr(ds,si)), al));	// 4455 mov     [si], al ;~ 00D0:1E90
loc_11e92:
	// 4876 
cs=0x192;eip=0x001e92; 	T(CMP(al, 0x0C7));	// 4458 cmp     al, 0C7h ; 'Ç' ;~ 00D0:1E92
cs=0x192;eip=0x001e94; 	J(JNC(loc_11e9e));	// 4459 jnb     short loc_11E9E ;~ 00D0:1E94
cs=0x192;eip=0x001e96; 	T(XCHG(bx, dx));	// 4460 xchg    bx, dx ;~ 00D0:1E96
cs=0x192;eip=0x001e98; 	T(MOV(al, *(raddr(ds,bx))));	// 4461 mov     al, [bx] ;~ 00D0:1E98
cs=0x192;eip=0x001e9a; 	T(XCHG(bx, dx));	// 4462 xchg    bx, dx ;~ 00D0:1E9A
cs=0x192;eip=0x001e9c; 	X(MOV(*(raddr(ds,bx)), al));	// 4463 mov     [bx], al ;~ 00D0:1E9C
loc_11e9e:
	// 4877 
cs=0x192;eip=0x001e9e; 	X(POP(ax));	// 4466 pop     ax ;~ 00D0:1E9E
loc_11e9f:
	// 4878 
cs=0x192;eip=0x001e9f; 	T(INC(al));	// 4470 inc     al ;~ 00D0:1E9F
cs=0x192;eip=0x001ea1; 	T(INC(di));	// 4471 inc     di ;~ 00D0:1EA1
cs=0x192;eip=0x001ea2; 	T(DEC(si));	// 4472 dec     si ;~ 00D0:1EA2
cs=0x192;eip=0x001ea3; 	T(INC(bx));	// 4473 inc     bx ;~ 00D0:1EA3
cs=0x192;eip=0x001ea4; 	T(DEC(dx));	// 4474 dec     dx ;~ 00D0:1EA4
cs=0x192;eip=0x001ea5; 	T(DEC(ch));	// 4475 dec     ch ;~ 00D0:1EA5
cs=0x192;eip=0x001ea7; 	J(JNZ(loc_11e7d));	// 4476 jnz     short loc_11E7D ;~ 00D0:1EA7
cs=0x192;eip=0x001ea9; 	T(ADD(bx, word_18978));	// 4477 add     bx, word_18978 ;~ 00D0:1EA9
cs=0x192;eip=0x001ead; 	T(ADD(dx, word_1897a));	// 4478 add     dx, word_1897A ;~ 00D0:1EAD
cs=0x192;eip=0x001eb1; 	T(INC(ah));	// 4479 inc     ah ;~ 00D0:1EB1
cs=0x192;eip=0x001eb3; 	T(ADD(di, word_18978));	// 4480 add     di, word_18978 ;~ 00D0:1EB3
cs=0x192;eip=0x001eb7; 	T(ADD(si, word_1897a));	// 4481 add     si, word_1897A ;~ 00D0:1EB7
cs=0x192;eip=0x001ebb; 	T(DEC(cl));	// 4482 dec     cl ;~ 00D0:1EBB
cs=0x192;eip=0x001ebd; 	J(JNZ(loc_11e76));	// 4483 jnz     short loc_11E76 ;~ 00D0:1EBD
cs=0x192;eip=0x001ebf; 	J(RETN(0));	// 4484 retn ;~ 00D0:1EBF
sub_11ec0:
	// 4491 
cs=0x192;eip=0x001ec0; 	X(MOV(word_18980, 0x5B22));	// 4493 mov     word_18980, 5B22h ;~ 00D0:1EC0
ret_d0_1ec6:
	// 4879 
cs=0x192;eip=0x001ec6; 	T(MOV(bx, word_18982));	// 4494 mov     bx, word_18982 ;~ 00D0:1EC6
cs=0x192;eip=0x001eca; 	T(ADD(bx, ax));	// 4495 add     bx, ax ;~ 00D0:1ECA
cs=0x192;eip=0x001ecc; 	T(MOV(cl, 4));	// 4496 mov     cl, 4 ;~ 00D0:1ECC
cs=0x192;eip=0x001ece; 	T(MOV(ch, 0x0B));	// 4497 mov     ch, 0Bh ;~ 00D0:1ECE
cs=0x192;eip=0x001ed0; 	T(MOV(ah, byte_14a2d));	// 4498 mov     ah, byte_14A2D ;~ 00D0:1ED0
cs=0x192;eip=0x001ed4; 	T(MOV(al, byte_14a2e));	// 4499 mov     al, byte_14A2E ;~ 00D0:1ED4
cs=0x192;eip=0x001ed7; 	T(SUB(al, 2));	// 4500 sub     al, 2 ;~ 00D0:1ED7
cs=0x192;eip=0x001ed9; 	J(CALL(sub_11dfd,0));	// 4501 call    sub_11DFD ;~ 00D0:1ED9
cs=0x192;eip=0x001edc; 	J(JMP(loc_11edf));	// 4502 jmp     short loc_11EDF ;~ 00D0:1EDC
loc_11edf:
	// 4880 
cs=0x192;eip=0x001edf; 	X(MOV(word_18980, 0x1BB4));	// 4509 mov     word_18980, 1BB4h ;~ 00D0:1EDF
cs=0x192;eip=0x001ee5; 	J(RETN(0));	// 4510 retn ;~ 00D0:1EE5
sub_11ee6:
	// 4517 
cs=0x192;eip=0x001ee6; 	X(MOV(word_18980, 0x5B24));	// 4519 mov     word_18980, 5B24h ;~ 00D0:1EE6
ret_d0_1eec:
	// 4881 
cs=0x192;eip=0x001eec; 	T(MOV(bx, word_14a14));	// 4520 mov     bx, word_14A14 ;~ 00D0:1EEC
cs=0x192;eip=0x001ef0; 	T(ADD(bx, 0x3E));	// 4521 add     bx, 3Eh ; '>' ;~ 00D0:1EF0
cs=0x192;eip=0x001ef3; 	X(MOV(word_18984, bx));	// 4522 mov     word_18984, bx ;~ 00D0:1EF3
cs=0x192;eip=0x001ef7; 	T(ADD(bx, ax));	// 4523 add     bx, ax ;~ 00D0:1EF7
cs=0x192;eip=0x001ef9; 	T(MOV(cl, 5));	// 4524 mov     cl, 5 ;~ 00D0:1EF9
cs=0x192;eip=0x001efb; 	T(MOV(ch, 0x0B));	// 4525 mov     ch, 0Bh ;~ 00D0:1EFB
cs=0x192;eip=0x001efd; 	T(MOV(ah, 0x0A));	// 4526 mov     ah, 0Ah ;~ 00D0:1EFD
cs=0x192;eip=0x001eff; 	T(MOV(al, byte_14a2e));	// 4527 mov     al, byte_14A2E ;~ 00D0:1EFF
cs=0x192;eip=0x001f02; 	T(SUB(al, 2));	// 4528 sub     al, 2 ;~ 00D0:1F02
cs=0x192;eip=0x001f04; 	J(CALL(sub_11dfd,0));	// 4529 call    sub_11DFD ;~ 00D0:1F04
cs=0x192;eip=0x001f07; 	J(JMP(loc_11edf));	// 4530 jmp     short loc_11EDF ;~ 00D0:1F07
sub_11f09:
	// 4537 
cs=0x192;eip=0x001f09; 	X(PUSH(bx));	// 4538 push    bx ;~ 00D0:1F09
ret_d0_1f0a:
	// 4882 
cs=0x192;eip=0x001f0a; 	X(PUSH(cx));	// 4539 push    cx ;~ 00D0:1F0A
cs=0x192;eip=0x001f0b; 	X(PUSH(dx));	// 4540 push    dx ;~ 00D0:1F0B
cs=0x192;eip=0x001f0c; 	T(OR(al, al));	// 4541 or      al, al ;~ 00D0:1F0C
cs=0x192;eip=0x001f0e; 	J(JNZ(loc_11f2d));	// 4542 jnz     short loc_11F2D ;~ 00D0:1F0E
cs=0x192;eip=0x001f10; 	T(MOV(bx, 0x5B3B));	// 4543 mov     bx, 5B3Bh ;~ 00D0:1F10
cs=0x192;eip=0x001f13; 	T(MOV(al, *(raddr(ds,bx))));	// 4544 mov     al, [bx] ;~ 00D0:1F13
cs=0x192;eip=0x001f15; 	T(OR(al, al));	// 4545 or      al, al ;~ 00D0:1F15
cs=0x192;eip=0x001f17; 	J(JZ(loc_11f2d));	// 4546 jz      short loc_11F2D ;~ 00D0:1F17
cs=0x192;eip=0x001f19; 	X(DEC(*(raddr(ds,bx))));	// 4547 dec     byte ptr [bx] ;~ 00D0:1F19
cs=0x192;eip=0x001f1b; 	T(MOV(bx, word_14a16));	// 4548 mov     bx, word_14A16 ;~ 00D0:1F1B
cs=0x192;eip=0x001f1f; 	T(MOV(cx, 5));	// 4549 mov     cx, 5 ;~ 00D0:1F1F
loc_11f22:
	// 4883 
cs=0x192;eip=0x001f22; 	X(AND(*(raddr(ds,bx)), 0x7F));	// 4552 and     byte ptr [bx], 7Fh ;~ 00D0:1F22
cs=0x192;eip=0x001f25; 	T(INC(bx));	// 4553 inc     bx ;~ 00D0:1F25
cs=0x192;eip=0x001f26; 	J(LOOP(loc_11f22));	// 4554 loop    loc_11F22 ;~ 00D0:1F26
cs=0x192;eip=0x001f28; 	J(CALL(sub_11f82,0));	// 4555 call    sub_11F82 ;~ 00D0:1F28
cs=0x192;eip=0x001f2b; 	T(XOR(al, al));	// 4556 xor     al, al ;~ 00D0:1F2B
loc_11f2d:
	// 4884 
cs=0x192;eip=0x001f2d; 	T(MOV(di, 0x17FE));	// 4560 mov     di, 17FEh ;~ 00D0:1F2D
cs=0x192;eip=0x001f30; 	J(JMP(loc_11f3b));	// 4561 jmp     short loc_11F3B ;~ 00D0:1F30
sub_11f32:
	// 4568 
cs=0x192;eip=0x001f32; 	T(MOV(al, byte_14a3d));	// 4570 mov     al, byte_14A3D ;~ 00D0:1F32
ret_d0_1f35:
	// 4885 
cs=0x192;eip=0x001f35; 	X(PUSH(bx));	// 4571 push    bx ;~ 00D0:1F35
cs=0x192;eip=0x001f36; 	X(PUSH(cx));	// 4572 push    cx ;~ 00D0:1F36
cs=0x192;eip=0x001f37; 	X(PUSH(dx));	// 4573 push    dx ;~ 00D0:1F37
cs=0x192;eip=0x001f38; 	T(MOV(di, 0x17CA));	// 4574 mov     di, 17CAh ;~ 00D0:1F38
loc_11f3b:
	// 4886 
cs=0x192;eip=0x001f3b; 	T(AND(al, 0x7F));	// 4577 and     al, 7Fh ;~ 00D0:1F3B
cs=0x192;eip=0x001f3d; 	T(MOV(ah, 0));	// 4578 mov     ah, 0 ;~ 00D0:1F3D
cs=0x192;eip=0x001f3f; 	T(ADD(ax, ax));	// 4579 add     ax, ax ;~ 00D0:1F3F
cs=0x192;eip=0x001f41; 	T(MOV(bx, 0x5814));	// 4580 mov     bx, 5814h ;~ 00D0:1F41
cs=0x192;eip=0x001f44; 	T(ADD(bx, ax));	// 4581 add     bx, ax ;~ 00D0:1F44
cs=0x192;eip=0x001f46; 	T(MOV(si, *(dw*)(raddr(ds,bx))));	// 4582 mov     si, [bx] ;~ 00D0:1F46
cs=0x192;eip=0x001f48; 	T(MOV(cx, 3));	// 4583 mov     cx, 3 ;~ 00D0:1F48
loc_11f4b:
	// 4887 
cs=0x192;eip=0x001f4b; 	X(PUSH(cx));	// 4586 push    cx ;~ 00D0:1F4B
cs=0x192;eip=0x001f4c; 	T(MOV(cx, 4));	// 4587 mov     cx, 4 ;~ 00D0:1F4C
loc_11f4f:
	// 4888 
cs=0x192;eip=0x001f4f; 	X(PUSH(cx));	// 4590 push    cx ;~ 00D0:1F4F
cs=0x192;eip=0x001f50; 	X(PUSH(di));	// 4591 push    di ;~ 00D0:1F50
cs=0x192;eip=0x001f51; 	X(PUSH(si));	// 4592 push    si ;~ 00D0:1F51
cs=0x192;eip=0x001f52; 	J(CALL(sub_10547,0));	// 4593 call    sub_10547 ;~ 00D0:1F52
cs=0x192;eip=0x001f55; 	X(POP(si));	// 4594 pop     si ;~ 00D0:1F55
cs=0x192;eip=0x001f56; 	T(ADD(si, 9));	// 4595 add     si, 9 ;~ 00D0:1F56
cs=0x192;eip=0x001f59; 	X(POP(di));	// 4596 pop     di ;~ 00D0:1F59
cs=0x192;eip=0x001f5a; 	T(ADD(di, 2));	// 4597 add     di, 2 ;~ 00D0:1F5A
cs=0x192;eip=0x001f5d; 	X(POP(cx));	// 4598 pop     cx ;~ 00D0:1F5D
cs=0x192;eip=0x001f5e; 	J(LOOP(loc_11f4f));	// 4599 loop    loc_11F4F ;~ 00D0:1F5E
cs=0x192;eip=0x001f60; 	T(ADD(di, 0x138));	// 4600 add     di, 138h ;~ 00D0:1F60
cs=0x192;eip=0x001f64; 	X(POP(cx));	// 4601 pop     cx ;~ 00D0:1F64
cs=0x192;eip=0x001f65; 	J(LOOP(loc_11f4b));	// 4602 loop    loc_11F4B ;~ 00D0:1F65
cs=0x192;eip=0x001f67; 	X(POP(dx));	// 4603 pop     dx ;~ 00D0:1F67
cs=0x192;eip=0x001f68; 	X(POP(cx));	// 4604 pop     cx ;~ 00D0:1F68
cs=0x192;eip=0x001f69; 	X(POP(bx));	// 4605 pop     bx ;~ 00D0:1F69
cs=0x192;eip=0x001f6a; 	J(RETN(0));	// 4606 retn ;~ 00D0:1F6A
sub_11f6b:
	// 4613 
cs=0x192;eip=0x001f6b; 	T(MOV(bx, 0x1963));	// 4615 mov     bx, 1963h ;~ 00D0:1F6B
ret_d0_1f6e:
	// 4889 
cs=0x192;eip=0x001f6e; 	T(MOV(ah, 6));	// 4616 mov     ah, 6 ;~ 00D0:1F6E
cs=0x192;eip=0x001f70; 	T(MOV(al, 0x3A));	// 4617 mov     al, 3Ah ; ':' ;~ 00D0:1F70
loc_11f72:
	// 4890 
cs=0x192;eip=0x001f72; 	X(INC(*(raddr(ds,bx))));	// 4620 inc     byte ptr [bx] ;~ 00D0:1F72
cs=0x192;eip=0x001f74; 	T(CMP(al, *(raddr(ds,bx))));	// 4621 cmp     al, [bx] ;~ 00D0:1F74
cs=0x192;eip=0x001f76; 	J(JNZ(loc_11f80));	// 4622 jnz     short loc_11F80 ;~ 00D0:1F76
cs=0x192;eip=0x001f78; 	X(MOV(*(raddr(ds,bx)), 0x30));	// 4623 mov     byte ptr [bx], 30h ; '0' ;~ 00D0:1F78
cs=0x192;eip=0x001f7b; 	T(DEC(bx));	// 4624 dec     bx ;~ 00D0:1F7B
cs=0x192;eip=0x001f7c; 	T(DEC(ah));	// 4625 dec     ah ;~ 00D0:1F7C
cs=0x192;eip=0x001f7e; 	J(JNZ(loc_11f72));	// 4626 jnz     short loc_11F72 ;~ 00D0:1F7E
loc_11f80:
	// 4891 
cs=0x192;eip=0x001f80; 	J(LOOP(sub_11f6b));	// 4629 loop    sub_11F6B ;~ 00D0:1F80
sub_11f82:
	// 4636 
cs=0x192;eip=0x001f82; 	T(MOV(si, 0x1953));	// 4638 mov     si, 1953h ;~ 00D0:1F82
cs=0x192;eip=0x001f85; 	J(CALL(sub_104b7,0));	// 4639 call    sub_104B7 ;~ 00D0:1F85
cs=0x192;eip=0x001f88; 	J(RETN(0));	// 4640 retn ;~ 00D0:1F88
sub_11f89:
	// 4647 
cs=0x192;eip=0x001f89; 	T(CMP(byte_14a3c, 0));	// 4649 cmp     byte_14A3C, 0 ;~ 00D0:1F89
ret_d0_1f8e:
	// 4892 
cs=0x192;eip=0x001f8e; 	J(JNZ(loc_11f91));	// 4650 jnz     short loc_11F91 ;~ 00D0:1F8E
cs=0x192;eip=0x001f90; 	J(RETN(0));	// 4651 retn ;~ 00D0:1F90
loc_11f91:
	// 4893 
cs=0x192;eip=0x001f91; 	X(PUSH(cx));	// 4656 push    cx ;~ 00D0:1F91
cs=0x192;eip=0x001f92; 	T(MOV(di, word_14a20));	// 4657 mov     di, word_14A20 ;~ 00D0:1F92
cs=0x192;eip=0x001f96; 	X(PUSH(es));	// 4658 push    es ;~ 00D0:1F96
cs=0x192;eip=0x001f97; 	T(MOV(ax, 0x0B800));	// 4659 mov     ax, 0B800h ;~ 00D0:1F97
cs=0x192;eip=0x001f9a; 	T(MOV(es, ax));	// 4660 mov     es, ax ;~ 00D0:1F9A
cs=0x192;eip=0x001f9c; 	T(MOV(al, byte_14a3b));	// 4662 mov     al, byte_14A3B ;~ 00D0:1F9C
cs=0x192;eip=0x001f9f; 	X(PUSH(di));	// 4663 push    di ;~ 00D0:1F9F
cs=0x192;eip=0x001fa0; 	J(CALL(sub_11fd8,0));	// 4664 call    sub_11FD8 ;~ 00D0:1FA0
cs=0x192;eip=0x001fa3; 	X(POP(di));	// 4665 pop     di ;~ 00D0:1FA3
cs=0x192;eip=0x001fa4; 	T(ADD(di, 0x2000));	// 4666 add     di, 2000h ;~ 00D0:1FA4
cs=0x192;eip=0x001fa8; 	J(CALL(sub_11fd8,0));	// 4667 call    sub_11FD8 ;~ 00D0:1FA8
cs=0x192;eip=0x001fab; 	X(ROL(byte_14a3b, 1));	// 4668 rol     byte_14A3B, 1 ;~ 00D0:1FAB
cs=0x192;eip=0x001faf; 	X(ROL(byte_14a3b, 1));	// 4669 rol     byte_14A3B, 1 ;~ 00D0:1FAF
cs=0x192;eip=0x001fb3; 	T(CMP(byte_14a3b, 2));	// 4670 cmp     byte_14A3B, 2 ;~ 00D0:1FB3
cs=0x192;eip=0x001fb8; 	J(JNZ(loc_11fd3));	// 4671 jnz     short loc_11FD3 ;~ 00D0:1FB8
cs=0x192;eip=0x001fba; 	X(DEC(word_14a20));	// 4672 dec     word_14A20 ;~ 00D0:1FBA
cs=0x192;eip=0x001fbe; 	T(CMP(word_14a20, 0x1A53));	// 4673 cmp     word_14A20, 1A53h ;~ 00D0:1FBE
cs=0x192;eip=0x001fc4; 	J(JNZ(loc_11fd3));	// 4674 jnz     short loc_11FD3 ;~ 00D0:1FC4
cs=0x192;eip=0x001fc6; 	X(POP(es));	// 4675 pop     es ;~ 00D0:1FC6
cs=0x192;eip=0x001fc7; 	X(POP(cx));	// 4677 pop     cx ;~ 00D0:1FC7
cs=0x192;eip=0x001fc8; 	X(MOV(byte_14a35, 1));	// 4678 mov     byte_14A35, 1 ;~ 00D0:1FC8
cs=0x192;eip=0x001fcd; 	X(MOV(byte_14a3c, 0));	// 4679 mov     byte_14A3C, 0 ;~ 00D0:1FCD
cs=0x192;eip=0x001fd2; 	J(RETN(0));	// 4680 retn ;~ 00D0:1FD2
loc_11fd3:
	// 4894 
cs=0x192;eip=0x001fd3; 	X(POP(es));	// 4686 pop     es ;~ 00D0:1FD3
cs=0x192;eip=0x001fd4; 	X(POP(cx));	// 4688 pop     cx ;~ 00D0:1FD4
cs=0x192;eip=0x001fd5; 	J(LOOP(loc_11f91));	// 4689 loop    loc_11F91 ;~ 00D0:1FD5
cs=0x192;eip=0x001fd7; 	J(RETN(0));	// 4690 retn ;~ 00D0:1FD7
sub_11fd8:
	// 4698 
cs=0x192;eip=0x001fd8; 	T(MOV(cx, 8));	// 4700 mov     cx, 8 ;~ 00D0:1FD8
loc_11fdb:
	// 4895 
cs=0x192;eip=0x001fdb; 	X(XOR(*(raddr(es,di)), al));	// 4703 xor     es:[di], al ;~ 00D0:1FDB
cs=0x192;eip=0x001fde; 	T(ADD(di, 0x50));	// 4704 add     di, 50h ; 'P' ;~ 00D0:1FDE
cs=0x192;eip=0x001fe1; 	J(LOOP(loc_11fdb));	// 4705 loop    loc_11FDB ;~ 00D0:1FE1
cs=0x192;eip=0x001fe3; 	J(RETN(0));	// 4706 retn ;~ 00D0:1FE3
sub_11fe4:
	// 4714 
cs=0x192;eip=0x001fe4; 	X(ROR(byte_14a3b, 1));	// 4716 ror     byte_14A3B, 1 ;~ 00D0:1FE4
ret_d0_1fe8:
	// 4896 
cs=0x192;eip=0x001fe8; 	X(ROR(byte_14a3b, 1));	// 4717 ror     byte_14A3B, 1 ;~ 00D0:1FE8
cs=0x192;eip=0x001fec; 	J(JNC(locret_11ff2));	// 4718 jnb     short locret_11FF2 ;~ 00D0:1FEC
cs=0x192;eip=0x001fee; 	X(INC(word_14a20));	// 4719 inc     word_14A20 ;~ 00D0:1FEE
locret_11ff2:
	// 4897 
cs=0x192;eip=0x001ff2; 	J(RETN(0));	// 4722 retn ;~ 00D0:1FF2
sub_11ff3:
	// 4729 
cs=0x192;eip=0x001ff3; 	X(DEC(byte_1899d));	// 4731 dec     byte_1899D ;~ 00D0:1FF3
ret_d0_1ff7:
	// 4898 
cs=0x192;eip=0x001ff7; 	J(JZ(loc_11ffa));	// 4732 jz      short loc_11FFA ;~ 00D0:1FF7
cs=0x192;eip=0x001ff9; 	J(RETN(0));	// 4733 retn ;~ 00D0:1FF9
loc_11ffa:
	// 4899 
cs=0x192;eip=0x001ffa; 	X(MOV(byte_1899d, 2));	// 4737 mov     byte_1899D, 2 ;~ 00D0:1FFA
cs=0x192;eip=0x001fff; 	T(CMP(word_14a20, 0x1A6F));	// 4738 cmp     word_14A20, 1A6Fh ;~ 00D0:1FFF
cs=0x192;eip=0x002005; 	J(JNZ(loc_1200f));	// 4739 jnz     short loc_1200F ;~ 00D0:2005
cs=0x192;eip=0x002007; 	T(CMP(byte_14a3b, 2));	// 4740 cmp     byte_14A3B, 2 ;~ 00D0:2007
cs=0x192;eip=0x00200c; 	J(JNZ(loc_1200f));	// 4741 jnz     short loc_1200F ;~ 00D0:200C
cs=0x192;eip=0x00200e; 	J(RETN(0));	// 4742 retn ;~ 00D0:200E
loc_1200f:
	// 4900 
cs=0x192;eip=0x00200f; 	J(CALL(sub_11fe4,0));	// 4747 call    sub_11FE4 ;~ 00D0:200F
cs=0x192;eip=0x002012; 	T(MOV(cx, 1));	// 4748 mov     cx, 1 ;~ 00D0:2012
cs=0x192;eip=0x002015; 	J(CALL(_group1,m2c::kloc_11f91));	// 4749 call    loc_11F91 ;~ 00D0:2015
cs=0x192;eip=0x002018; 	J(CALL(sub_11fe4,0));	// 4750 call    sub_11FE4 ;~ 00D0:2018
cs=0x192;eip=0x00201b; 	J(RETN(0));	// 4751 retn ;~ 00D0:201B
sub_1201c:
	// 4758 
cs=0x192;eip=0x00201c; 	T(MOV(cx, 0x1F4));	// 4759 mov     cx, 1F4h ;~ 00D0:201C
ret_d0_201f:
	// 4901 
cs=0x192;eip=0x00201f; 	J(CALL(sub_11f6b,0));	// 4760 call    sub_11F6B ;~ 00D0:201F
cs=0x192;eip=0x002022; 	J(RETN(0));	// 4761 retn ;~ 00D0:2022
sub_12023:
	// 4768 
cs=0x192;eip=0x002023; 	X(PUSH(bx));	// 4770 push    bx ;~ 00D0:2023
ret_d0_2024:
	// 4902 
cs=0x192;eip=0x002024; 	X(PUSH(cx));	// 4771 push    cx ;~ 00D0:2024
cs=0x192;eip=0x002025; 	X(PUSH(dx));	// 4772 push    dx ;~ 00D0:2025
cs=0x192;eip=0x002026; 	T(MOV(ch, 1));	// 4773 mov     ch, 1 ;~ 00D0:2026
cs=0x192;eip=0x002028; 	T(MOV(dh, 0x19));	// 4774 mov     dh, 19h ;~ 00D0:2028
cs=0x192;eip=0x00202a; 	J(CALL(sub_12dd0,0));	// 4775 call    sub_12DD0 ;~ 00D0:202A
cs=0x192;eip=0x00202d; 	X(POP(dx));	// 4776 pop     dx ;~ 00D0:202D
cs=0x192;eip=0x00202e; 	X(POP(cx));	// 4777 pop     cx ;~ 00D0:202E
cs=0x192;eip=0x00202f; 	X(POP(bx));	// 4778 pop     bx ;~ 00D0:202F
cs=0x192;eip=0x002030; 	J(RETN(0));	// 4779 retn ;~ 00D0:2030
sub_12032:
	// 4788 
cs=0x192;eip=0x002032; 	T(MOV(cl, byte_19def));	// 4790 mov     cl, byte_19DEF ;~ 00D0:2032
ret_d0_2036:
	// 4903 
cs=0x192;eip=0x002036; 	T(MOV(bx, word_19df0));	// 4791 mov     bx, word_19DF0 ;~ 00D0:2036
cs=0x192;eip=0x00203a; 	T(SUB(bx, 0x900));	// 4792 sub     bx, 900h ;~ 00D0:203A
cs=0x192;eip=0x00203e; 	T(MOV(al, 1));	// 4793 mov     al, 1 ;~ 00D0:203E
cs=0x192;eip=0x002040; 	T(MOV(ch, 0));	// 4794 mov     ch, 0 ;~ 00D0:2040
loc_12042:
	// 4904 
cs=0x192;eip=0x002042; 	X(MOV(*(raddr(ds,bx)), al));	// 4797 mov     [bx], al ;~ 00D0:2042
cs=0x192;eip=0x002044; 	T(TEST(byte_19e08, 1));	// 4798 test    byte_19E08, 1 ;~ 00D0:2044
cs=0x192;eip=0x002049; 	J(JZ(loc_1204d));	// 4799 jz      short loc_1204D ;~ 00D0:2049
cs=0x192;eip=0x00204b; 	T(DEC(bx));	// 4800 dec     bx ;~ 00D0:204B
cs=0x192;eip=0x00204c; 	T(DEC(bx));	// 4801 dec     bx ;~ 00D0:204C
loc_1204d:
	// 4905 
cs=0x192;eip=0x00204d; 	T(INC(bx));	// 4804 inc     bx ;~ 00D0:204D
cs=0x192;eip=0x00204e; 	J(LOOP(loc_12042));	// 4805 loop    loc_12042 ;~ 00D0:204E
cs=0x192;eip=0x002050; 	X(MOV(byte_19def, al));	// 4806 mov     byte_19DEF, al ;~ 00D0:2050
cs=0x192;eip=0x002053; 	X(INC(byte_19df2));	// 4807 inc     byte_19DF2 ;~ 00D0:2053
cs=0x192;eip=0x002057; 	T(MOV(al, byte_19df2));	// 4808 mov     al, byte_19DF2 ;~ 00D0:2057
cs=0x192;eip=0x00205a; 	T(AND(al, 3));	// 4809 and     al, 3 ;~ 00D0:205A
cs=0x192;eip=0x00205c; 	T(ADD(al, al));	// 4810 add     al, al ;~ 00D0:205C
cs=0x192;eip=0x00205e; 	T(CBW);	// 4811 cbw ;~ 00D0:205E
cs=0x192;eip=0x00205f; 	T(ADD(ax, 0x6F81));	// 4812 add     ax, 6F81h ;~ 00D0:205F
cs=0x192;eip=0x002062; 	T(MOV(bx, ax));	// 4813 mov     bx, ax ;~ 00D0:2062
cs=0x192;eip=0x002064; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 4814 mov     ax, [bx] ;~ 00D0:2064
cs=0x192;eip=0x002066; 	X(MOV(word_19dfd, ax));	// 4815 mov     word_19DFD, ax ;~ 00D0:2066
cs=0x192;eip=0x002069; 	T(MOV(al, byte_19df3));	// 4816 mov     al, byte_19DF3 ;~ 00D0:2069
cs=0x192;eip=0x00206c; 	T(INC(al));	// 4817 inc     al ;~ 00D0:206C
cs=0x192;eip=0x00206e; 	T(CMP(al, 3));	// 4818 cmp     al, 3 ;~ 00D0:206E
cs=0x192;eip=0x002070; 	J(JNZ(loc_12074));	// 4819 jnz     short loc_12074 ;~ 00D0:2070
cs=0x192;eip=0x002072; 	T(XOR(al, al));	// 4820 xor     al, al ;~ 00D0:2072
loc_12074:
	// 4906 
cs=0x192;eip=0x002074; 	X(MOV(byte_19df3, al));	// 4823 mov     byte_19DF3, al ;~ 00D0:2074
cs=0x192;eip=0x002077; 	T(ADD(al, al));	// 4824 add     al, al ;~ 00D0:2077
cs=0x192;eip=0x002079; 	T(CBW);	// 4825 cbw ;~ 00D0:2079
cs=0x192;eip=0x00207a; 	T(ADD(ax, 0x6F89));	// 4826 add     ax, 6F89h ;~ 00D0:207A
cs=0x192;eip=0x00207d; 	T(MOV(bx, ax));	// 4827 mov     bx, ax ;~ 00D0:207D
cs=0x192;eip=0x00207f; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 4828 mov     ax, [bx] ;~ 00D0:207F
cs=0x192;eip=0x002081; 	X(MOV(word_19df4, ax));	// 4829 mov     word_19DF4, ax ;~ 00D0:2081
cs=0x192;eip=0x002084; 	T(MOV(si, 0x68E2));	// 4830 mov     si, 68E2h ;~ 00D0:2084
cs=0x192;eip=0x002087; 	T(MOV(cx, 0x65));	// 4831 mov     cx, 65h ; 'e' ;~ 00D0:2087
loc_1208a:
	// 4907 
cs=0x192;eip=0x00208a; 	X(PUSH(cx));	// 4834 push    cx ;~ 00D0:208A
cs=0x192;eip=0x00208b; 	T(MOV(al, *(raddr(ds,si+0x0B))));	// 4835 mov     al, [si+0Bh] ;~ 00D0:208B
cs=0x192;eip=0x00208e; 	T(CMP(al, 1));	// 4836 cmp     al, 1 ;~ 00D0:208E
cs=0x192;eip=0x002090; 	J(JZ(loc_120a2));	// 4837 jz      short loc_120A2 ;~ 00D0:2090
cs=0x192;eip=0x002092; 	T(CMP(al, 6));	// 4838 cmp     al, 6 ;~ 00D0:2092
cs=0x192;eip=0x002094; 	J(JZ(loc_120a2));	// 4839 jz      short loc_120A2 ;~ 00D0:2094
cs=0x192;eip=0x002096; 	T(CMP(al, 4));	// 4840 cmp     al, 4 ;~ 00D0:2096
cs=0x192;eip=0x002098; 	J(JZ(loc_120a2));	// 4841 jz      short loc_120A2 ;~ 00D0:2098
cs=0x192;eip=0x00209a; 	T(CMP(al, 9));	// 4842 cmp     al, 9 ;~ 00D0:209A
cs=0x192;eip=0x00209c; 	J(JZ(loc_120a2));	// 4843 jz      short loc_120A2 ;~ 00D0:209C
cs=0x192;eip=0x00209e; 	T(CMP(al, 0x0A));	// 4844 cmp     al, 0Ah ;~ 00D0:209E
cs=0x192;eip=0x0020a0; 	J(JNZ(loc_120a5));	// 4845 jnz     short loc_120A5 ;~ 00D0:20A0
loc_120a2:
	// 4908 
cs=0x192;eip=0x0020a2; 	J(CALL(sub_12574,0));	// 4849 call    sub_12574 ;~ 00D0:20A2
loc_120a5:
	// 4909 
cs=0x192;eip=0x0020a5; 	J(CALL(sub_12549,0));	// 4852 call    sub_12549 ;~ 00D0:20A5
cs=0x192;eip=0x0020a8; 	J(CALL(sub_1252e,0));	// 4853 call    sub_1252E ;~ 00D0:20A8
cs=0x192;eip=0x0020ab; 	T(MOV(ax, si));	// 4854 mov     ax, si ;~ 00D0:20AB
cs=0x192;eip=0x0020ad; 	T(ADD(ax, 3));	// 4855 add     ax, 3 ;~ 00D0:20AD
cs=0x192;eip=0x0020b0; 	X(MOV(word_18980, ax));	// 4856 mov     word_18980, ax ;~ 00D0:20B0
cs=0x192;eip=0x0020b3; 	T(MOV(al, *(raddr(ds,si))));	// 4857 mov     al, [si] ;~ 00D0:20B3
cs=0x192;eip=0x0020b5; 	T(AND(al, 0x7F));	// 4858 and     al, 7Fh ;~ 00D0:20B5
cs=0x192;eip=0x0020b7; 	T(CMP(al, *(db*)(((db*)&word_14a36))));	// 4859 cmp     al, byte ptr word_14A36 ;~ 00D0:20B7
cs=0x192;eip=0x0020bb; 	J(JNZ(loc_120d1));	// 4860 jnz     short loc_120D1 ;~ 00D0:20BB
cs=0x192;eip=0x0020bd; 	T(MOV(al, *(raddr(ds,si+2))));	// 4861 mov     al, [si+2] ;~ 00D0:20BD
cs=0x192;eip=0x0020c0; 	T(CMP(al, *(db*)(((db*)&word_14a36)+1)));	// 4862 cmp     al, byte ptr word_14A36+1 ;~ 00D0:20C0
cs=0x192;eip=0x0020c4; 	J(JNZ(loc_120d1));	// 4863 jnz     short loc_120D1 ;~ 00D0:20C4
cs=0x192;eip=0x0020c6; 	X(PUSH(si));	// 4864 push    si ;~ 00D0:20C6
cs=0x192;eip=0x0020c7; 	J(CALL(sub_11db3,0));	// 4865 call    sub_11DB3 ;~ 00D0:20C7
cs=0x192;eip=0x0020ca; 	J(CALL(sub_12553,0));	// 4866 call    sub_12553 ;~ 00D0:20CA
cs=0x192;eip=0x0020cd; 	J(CALL(sub_11dc4,0));	// 4867 call    sub_11DC4 ;~ 00D0:20CD
cs=0x192;eip=0x0020d0; 	X(POP(si));	// 4868 pop     si ;~ 00D0:20D0
loc_120d1:
	// 4910 
cs=0x192;eip=0x0020d1; 	T(MOV(al, *(raddr(ds,si))));	// 4872 mov     al, [si] ;~ 00D0:20D1
cs=0x192;eip=0x0020d3; 	T(AND(al, 0x7F));	// 4873 and     al, 7Fh ;~ 00D0:20D3
cs=0x192;eip=0x0020d5; 	T(SUB(al, *(db*)(((db*)&word_14a36))));	// 4874 sub     al, byte ptr word_14A36 ;~ 00D0:20D5
cs=0x192;eip=0x0020d9; 	T(ADD(al, 3));	// 4875 add     al, 3 ;~ 00D0:20D9
cs=0x192;eip=0x0020db; 	T(CMP(al, 6));	// 4876 cmp     al, 6 ;~ 00D0:20DB
cs=0x192;eip=0x0020dd; 	J(JC(loc_120e2));	// 4877 jb      short loc_120E2 ;~ 00D0:20DD
loc_120df:
	// 4911 
cs=0x192;eip=0x0020df; 	J(JMP(loc_12474));	// 4880 jmp     loc_12474 ;~ 00D0:20DF
loc_120e2:
	// 4912 
cs=0x192;eip=0x0020e2; 	T(MOV(al, *(db*)(((db*)&word_14a36)+1)));	// 4884 mov     al, byte ptr word_14A36+1 ;~ 00D0:20E2
cs=0x192;eip=0x0020e5; 	T(SUB(al, *(raddr(ds,si+2))));	// 4885 sub     al, [si+2] ;~ 00D0:20E5
cs=0x192;eip=0x0020e8; 	T(ADD(al, 6));	// 4886 add     al, 6 ;~ 00D0:20E8
cs=0x192;eip=0x0020ea; 	T(CMP(al, 0x0C));	// 4887 cmp     al, 0Ch ;~ 00D0:20EA
cs=0x192;eip=0x0020ec; 	J(JNC(loc_120df));	// 4888 jnb     short loc_120DF ;~ 00D0:20EC
cs=0x192;eip=0x0020ee; 	T(CMP(*(raddr(ds,si+0x0B)), 2));	// 4889 cmp     byte ptr [si+0Bh], 2 ;~ 00D0:20EE
cs=0x192;eip=0x0020f2; 	J(JC(loc_120f7));	// 4890 jb      short loc_120F7 ;~ 00D0:20F2
cs=0x192;eip=0x0020f4; 	J(JMP(loc_1218c));	// 4891 jmp     loc_1218C ;~ 00D0:20F4
loc_120f7:
	// 4913 
cs=0x192;eip=0x0020f7; 	T(MOV(cl, *(raddr(ds,si+1))));	// 4895 mov     cl, [si+1] ;~ 00D0:20F7
cs=0x192;eip=0x0020fa; 	T(MOV(bx, *(dw*)(raddr(ds,si+3))));	// 4896 mov     bx, [si+3] ;~ 00D0:20FA
cs=0x192;eip=0x0020fd; 	T(MOV(dl, 0x0FF));	// 4897 mov     dl, 0FFh ;~ 00D0:20FD
cs=0x192;eip=0x0020ff; 	T(TEST(*(raddr(ds,si)), 0x80));	// 4898 test    byte ptr [si], 80h ;~ 00D0:20FF
cs=0x192;eip=0x002102; 	J(JZ(loc_1211f));	// 4899 jz      short loc_1211F ;~ 00D0:2102
cs=0x192;eip=0x002104; 	J(CALL(sub_1107c,0));	// 4900 call    sub_1107C ;~ 00D0:2104
cs=0x192;eip=0x002107; 	T(AND(al, 3));	// 4901 and     al, 3 ;~ 00D0:2107
cs=0x192;eip=0x002109; 	J(JZ(loc_1211f));	// 4902 jz      short loc_1211F ;~ 00D0:2109
cs=0x192;eip=0x00210b; 	T(INC(dl));	// 4903 inc     dl ;~ 00D0:210B
cs=0x192;eip=0x00210d; 	T(MOV(al, *(raddr(ds,si+1))));	// 4904 mov     al, [si+1] ;~ 00D0:210D
cs=0x192;eip=0x002110; 	T(ADD(al, 0x0A));	// 4905 add     al, 0Ah ;~ 00D0:2110
cs=0x192;eip=0x002112; 	T(MOV(ah, byte_14a2e));	// 4906 mov     ah, byte_14A2E ;~ 00D0:2112
cs=0x192;eip=0x002116; 	T(ADD(ah, 0x0A));	// 4907 add     ah, 0Ah ;~ 00D0:2116
cs=0x192;eip=0x002119; 	T(CMP(ah, al));	// 4908 cmp     ah, al ;~ 00D0:2119
cs=0x192;eip=0x00211b; 	J(JNC(loc_1211f));	// 4909 jnb     short loc_1211F ;~ 00D0:211B
cs=0x192;eip=0x00211d; 	T(INC(dl));	// 4910 inc     dl ;~ 00D0:211D
loc_1211f:
	// 4914 
cs=0x192;eip=0x00211f; 	T(CMP(byte_14a39, 0));	// 4914 cmp     byte_14A39, 0 ;~ 00D0:211F
cs=0x192;eip=0x002124; 	J(JZ(loc_12164));	// 4915 jz      short loc_12164 ;~ 00D0:2124
cs=0x192;eip=0x002126; 	T(MOV(al, *(raddr(ds,si+2))));	// 4916 mov     al, [si+2] ;~ 00D0:2126
cs=0x192;eip=0x002129; 	T(CMP(al, *(raddr(ds,si+5))));	// 4917 cmp     al, [si+5] ;~ 00D0:2129
cs=0x192;eip=0x00212c; 	J(JNZ(loc_12151));	// 4918 jnz     short loc_12151 ;~ 00D0:212C
cs=0x192;eip=0x00212e; 	T(CMP(*(raddr(ds,si+6)), cl));	// 4919 cmp     [si+6], cl ;~ 00D0:212E
cs=0x192;eip=0x002131; 	J(JNZ(loc_12151));	// 4920 jnz     short loc_12151 ;~ 00D0:2131
loc_12133:
	// 4915 
cs=0x192;eip=0x002133; 	T(DEC(dl));	// 4923 dec     dl ;~ 00D0:2133
cs=0x192;eip=0x002135; 	J(JZ(loc_12143));	// 4924 jz      short loc_12143 ;~ 00D0:2135
cs=0x192;eip=0x002137; 	T(MOV(al, *(raddr(ds,si+0x0B))));	// 4925 mov     al, [si+0Bh] ;~ 00D0:2137
cs=0x192;eip=0x00213a; 	T(ADD(al, al));	// 4926 add     al, al ;~ 00D0:213A
cs=0x192;eip=0x00213c; 	T(ADD(al, 7));	// 4927 add     al, 7 ;~ 00D0:213C
loc_1213e:
	// 4916 
cs=0x192;eip=0x00213e; 	X(MOV(*(raddr(ds,si+0x0B)), al));	// 4930 mov     [si+0Bh], al ;~ 00D0:213E
cs=0x192;eip=0x002141; 	J(JMP(loc_1218c));	// 4931 jmp     short loc_1218C ;~ 00D0:2141
loc_12143:
	// 4917 
cs=0x192;eip=0x002143; 	J(CALL(sub_1107c,0));	// 4935 call    sub_1107C ;~ 00D0:2143
cs=0x192;eip=0x002146; 	T(AND(al, 7));	// 4936 and     al, 7 ;~ 00D0:2146
cs=0x192;eip=0x002148; 	T(ADD(al, 3));	// 4937 add     al, 3 ;~ 00D0:2148
cs=0x192;eip=0x00214a; 	X(MOV(byte_19df6, al));	// 4938 mov     byte_19DF6, al ;~ 00D0:214A
cs=0x192;eip=0x00214d; 	T(MOV(al, 0x0C));	// 4939 mov     al, 0Ch ;~ 00D0:214D
cs=0x192;eip=0x00214f; 	J(JMP(loc_1213e));	// 4940 jmp     short loc_1213E ;~ 00D0:214F
loc_12151:
	// 4918 
cs=0x192;eip=0x002151; 	T(DEC(cl));	// 4945 dec     cl ;~ 00D0:2151
cs=0x192;eip=0x002153; 	T(DEC(bx));	// 4946 dec     bx ;~ 00D0:2153
cs=0x192;eip=0x002154; 	T(MOV(al, 0x0FC));	// 4947 mov     al, 0FCh ; 'ü' ;~ 00D0:2154
cs=0x192;eip=0x002156; 	T(CMP(al, cl));	// 4948 cmp     al, cl ;~ 00D0:2156
cs=0x192;eip=0x002158; 	J(JNZ(loc_12186));	// 4949 jnz     short loc_12186 ;~ 00D0:2158
cs=0x192;eip=0x00215a; 	T(MOV(cl, 0x1C));	// 4950 mov     cl, 1Ch ;~ 00D0:215A
cs=0x192;eip=0x00215c; 	T(ADD(bx, 0x20));	// 4951 add     bx, 20h ; ' ' ;~ 00D0:215C
cs=0x192;eip=0x00215f; 	X(DEC(*(raddr(ds,si+2))));	// 4952 dec     byte ptr [si+2] ;~ 00D0:215F
cs=0x192;eip=0x002162; 	J(JMP(loc_12186));	// 4953 jmp     short loc_12186 ;~ 00D0:2162
loc_12164:
	// 4919 
cs=0x192;eip=0x002164; 	T(MOV(al, *(raddr(ds,si+2))));	// 4957 mov     al, [si+2] ;~ 00D0:2164
cs=0x192;eip=0x002167; 	T(CMP(al, *(raddr(ds,si+7))));	// 4958 cmp     al, [si+7] ;~ 00D0:2167
cs=0x192;eip=0x00216a; 	J(JNZ(loc_12175));	// 4959 jnz     short loc_12175 ;~ 00D0:216A
cs=0x192;eip=0x00216c; 	T(CMP(*(raddr(ds,si+8)), cl));	// 4960 cmp     [si+8], cl ;~ 00D0:216C
cs=0x192;eip=0x00216f; 	J(JNZ(loc_12175));	// 4961 jnz     short loc_12175 ;~ 00D0:216F
cs=0x192;eip=0x002171; 	T(INC(dl));	// 4962 inc     dl ;~ 00D0:2171
cs=0x192;eip=0x002173; 	J(JMP(loc_12133));	// 4963 jmp     short loc_12133 ;~ 00D0:2173
loc_12175:
	// 4920 
cs=0x192;eip=0x002175; 	T(INC(cl));	// 4968 inc     cl ;~ 00D0:2175
cs=0x192;eip=0x002177; 	T(INC(bx));	// 4969 inc     bx ;~ 00D0:2177
cs=0x192;eip=0x002178; 	T(MOV(al, 0x1E));	// 4970 mov     al, 1Eh ;~ 00D0:2178
cs=0x192;eip=0x00217a; 	T(CMP(al, cl));	// 4971 cmp     al, cl ;~ 00D0:217A
cs=0x192;eip=0x00217c; 	J(JNZ(loc_12186));	// 4972 jnz     short loc_12186 ;~ 00D0:217C
cs=0x192;eip=0x00217e; 	T(MOV(cl, 0x0FE));	// 4973 mov     cl, 0FEh ; 'þ' ;~ 00D0:217E
cs=0x192;eip=0x002180; 	T(ADD(bx, 0x0FFE0));	// 4974 add     bx, 0FFE0h ;~ 00D0:2180
cs=0x192;eip=0x002183; 	X(INC(*(raddr(ds,si+2))));	// 4975 inc     byte ptr [si+2] ;~ 00D0:2183
loc_12186:
	// 4921 
cs=0x192;eip=0x002186; 	X(MOV(*(dw*)(raddr(ds,si+3)), bx));	// 4979 mov     [si+3], bx ;~ 00D0:2186
cs=0x192;eip=0x002189; 	X(MOV(*(raddr(ds,si+1)), cl));	// 4980 mov     [si+1], cl ;~ 00D0:2189
loc_1218c:
	// 4922 
cs=0x192;eip=0x00218c; 	T(MOV(al, *(raddr(ds,si))));	// 4984 mov     al, [si] ;~ 00D0:218C
cs=0x192;eip=0x00218e; 	T(AND(al, 0x7F));	// 4985 and     al, 7Fh ;~ 00D0:218E
cs=0x192;eip=0x002190; 	T(CMP(al, *(db*)(((db*)&word_14a36))));	// 4986 cmp     al, byte ptr word_14A36 ;~ 00D0:2190
cs=0x192;eip=0x002194; 	J(JZ(loc_12199));	// 4987 jz      short loc_12199 ;~ 00D0:2194
loc_12196:
	// 4923 
cs=0x192;eip=0x002196; 	J(JMP(loc_12474));	// 4990 jmp     loc_12474 ;~ 00D0:2196
loc_12199:
	// 4924 
cs=0x192;eip=0x002199; 	T(MOV(al, *(db*)(((db*)&word_14a36)+1)));	// 4994 mov     al, byte ptr word_14A36+1 ;~ 00D0:2199
cs=0x192;eip=0x00219c; 	T(CMP(al, *(raddr(ds,si+2))));	// 4995 cmp     al, [si+2] ;~ 00D0:219C
cs=0x192;eip=0x00219f; 	J(JNZ(loc_12196));	// 4996 jnz     short loc_12196 ;~ 00D0:219F
cs=0x192;eip=0x0021a1; 	X(PUSH(si));	// 4997 push    si ;~ 00D0:21A1
cs=0x192;eip=0x0021a2; 	J(CALL(sub_11db3,0));	// 4998 call    sub_11DB3 ;~ 00D0:21A2
cs=0x192;eip=0x0021a5; 	J(CALL(sub_12553,0));	// 4999 call    sub_12553 ;~ 00D0:21A5
cs=0x192;eip=0x0021a8; 	J(CALL(sub_11dc4,0));	// 5000 call    sub_11DC4 ;~ 00D0:21A8
cs=0x192;eip=0x0021ab; 	X(POP(si));	// 5001 pop     si ;~ 00D0:21AB
cs=0x192;eip=0x0021ac; 	T(MOV(al, 1));	// 5002 mov     al, 1 ;~ 00D0:21AC
cs=0x192;eip=0x0021ae; 	T(TEST(*(raddr(ds,si+9)), 0x80));	// 5003 test    byte ptr [si+9], 80h ;~ 00D0:21AE
cs=0x192;eip=0x0021b2; 	J(JZ(loc_121b6));	// 5004 jz      short loc_121B6 ;~ 00D0:21B2
cs=0x192;eip=0x0021b4; 	T(INC(al));	// 5005 inc     al ;~ 00D0:21B4
loc_121b6:
	// 4925 
cs=0x192;eip=0x0021b6; 	T(CMP(al, byte_19e01));	// 5008 cmp     al, byte_19E01 ;~ 00D0:21B6
cs=0x192;eip=0x0021ba; 	J(JNZ(loc_12207));	// 5009 jnz     short loc_12207 ;~ 00D0:21BA
cs=0x192;eip=0x0021bc; 	T(CMP(*(raddr(ds,si+0x0B)), 5));	// 5010 cmp     byte ptr [si+0Bh], 5 ;~ 00D0:21BC
cs=0x192;eip=0x0021c0; 	J(JZ(loc_12207));	// 5011 jz      short loc_12207 ;~ 00D0:21C0
cs=0x192;eip=0x0021c2; 	T(CMP(*(raddr(ds,si+0x0B)), 6));	// 5012 cmp     byte ptr [si+0Bh], 6 ;~ 00D0:21C2
cs=0x192;eip=0x0021c6; 	J(JZ(loc_12207));	// 5013 jz      short loc_12207 ;~ 00D0:21C6
cs=0x192;eip=0x0021c8; 	X(PUSH(si));	// 5014 push    si ;~ 00D0:21C8
cs=0x192;eip=0x0021c9; 	T(MOV(cx, 2));	// 5015 mov     cx, 2 ;~ 00D0:21C9
cs=0x192;eip=0x0021cc; 	J(CALL(sub_11f6b,0));	// 5016 call    sub_11F6B ;~ 00D0:21CC
cs=0x192;eip=0x0021cf; 	J(CALL(sub_12023,0));	// 5017 call    sub_12023 ;~ 00D0:21CF
cs=0x192;eip=0x0021d2; 	X(POP(si));	// 5018 pop     si ;~ 00D0:21D2
cs=0x192;eip=0x0021d3; 	X(DEC(byte_19df8));	// 5019 dec     byte_19DF8 ;~ 00D0:21D3
cs=0x192;eip=0x0021d7; 	J(JZ(loc_121e0));	// 5020 jz      short loc_121E0 ;~ 00D0:21D7
cs=0x192;eip=0x0021d9; 	J(CALL(sub_1107c,0));	// 5021 call    sub_1107C ;~ 00D0:21D9
cs=0x192;eip=0x0021dc; 	T(AND(al, 7));	// 5022 and     al, 7 ;~ 00D0:21DC
cs=0x192;eip=0x0021de; 	J(JNZ(loc_12207));	// 5023 jnz     short loc_12207 ;~ 00D0:21DE
loc_121e0:
	// 4926 
cs=0x192;eip=0x0021e0; 	X(MOV(byte_19df8, 5));	// 5026 mov     byte_19DF8, 5 ;~ 00D0:21E0
cs=0x192;eip=0x0021e5; 	T(MOV(cl, 6));	// 5027 mov     cl, 6 ;~ 00D0:21E5
cs=0x192;eip=0x0021e7; 	T(MOV(al, *(raddr(ds,si+0x0B))));	// 5028 mov     al, [si+0Bh] ;~ 00D0:21E7
cs=0x192;eip=0x0021ea; 	T(CMP(al, 4));	// 5029 cmp     al, 4 ;~ 00D0:21EA
cs=0x192;eip=0x0021ec; 	J(JZ(loc_121fc));	// 5030 jz      short loc_121FC ;~ 00D0:21EC
cs=0x192;eip=0x0021ee; 	T(CMP(al, 1));	// 5031 cmp     al, 1 ;~ 00D0:21EE
cs=0x192;eip=0x0021f0; 	J(JZ(loc_121fc));	// 5032 jz      short loc_121FC ;~ 00D0:21F0
cs=0x192;eip=0x0021f2; 	T(CMP(al, 9));	// 5033 cmp     al, 9 ;~ 00D0:21F2
cs=0x192;eip=0x0021f4; 	J(JZ(loc_121fc));	// 5034 jz      short loc_121FC ;~ 00D0:21F4
cs=0x192;eip=0x0021f6; 	T(CMP(al, 0x0A));	// 5035 cmp     al, 0Ah ;~ 00D0:21F6
cs=0x192;eip=0x0021f8; 	J(JZ(loc_121fc));	// 5036 jz      short loc_121FC ;~ 00D0:21F8
cs=0x192;eip=0x0021fa; 	T(DEC(cl));	// 5037 dec     cl ;~ 00D0:21FA
loc_121fc:
	// 4927 
cs=0x192;eip=0x0021fc; 	X(MOV(*(raddr(ds,si+0x0B)), cl));	// 5041 mov     [si+0Bh], cl ;~ 00D0:21FC
cs=0x192;eip=0x0021ff; 	X(PUSH(si));	// 5042 push    si ;~ 00D0:21FF
cs=0x192;eip=0x002200; 	T(MOV(cx, 0x0A));	// 5043 mov     cx, 0Ah ;~ 00D0:2200
cs=0x192;eip=0x002203; 	J(CALL(sub_11f6b,0));	// 5044 call    sub_11F6B ;~ 00D0:2203
cs=0x192;eip=0x002206; 	X(POP(si));	// 5045 pop     si ;~ 00D0:2206
loc_12207:
	// 4928 
cs=0x192;eip=0x002207; 	T(MOV(bl, *(raddr(ds,si+0x0B))));	// 5049 mov     bl, [si+0Bh] ;~ 00D0:2207
cs=0x192;eip=0x00220a; 	T(MOV(bh, 0));	// 5050 mov     bh, 0 ;~ 00D0:220A
cs=0x192;eip=0x00220c; 	T(ADD(bx, bx));	// 5051 add     bx, bx ;~ 00D0:220C
cs=0x192;eip=0x00220e; 	T(ADD(bx, 0x6F5D));	// 5052 add     bx, 6F5Dh ;~ 00D0:220E
cs=0x192;eip=0x002212; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 5053 mov     bx, [bx] ;~ 00D0:2212
cs=0x192;eip=0x002214; 	T(MOV(cl, byte_14a39));	// 5054 mov     cl, byte_14A39 ;~ 00D0:2214
cs=0x192;eip=0x002218; 	T(OR(cl, cl));	// 5055 or      cl, cl ;~ 00D0:2218
cs=0x192;eip=0x00221a; __disp=bx;
	J(JMP(__dispatch_call));	// 5056 jmp     bx ;~ 00D0:221A
ret_d0_221c:
	// 4929 
cs=0x192;eip=0x00221c; 	T(MOV(bx, 0x729));	// 5058 mov     bx, 729h ;~ 00D0:221C
cs=0x192;eip=0x00221f; 	J(JZ(loc_12224));	// 5059 jz      short loc_12224 ;~ 00D0:221F
cs=0x192;eip=0x002221; 	T(MOV(bx, 0x724));	// 5060 mov     bx, 724h ;~ 00D0:2221
loc_12224:
	// 4930 
cs=0x192;eip=0x002224; 	T(ADD(bx, *(dw*)(raddr(ds,si+3))));	// 5063 add     bx, [si+3] ;~ 00D0:2224
cs=0x192;eip=0x002227; 	T(CMP(byte_18e39, 0x0FF));	// 5064 cmp     byte_18E39, 0FFh ;~ 00D0:2227
cs=0x192;eip=0x00222c; 	J(JZ(loc_1224a));	// 5065 jz      short loc_1224A ;~ 00D0:222C
cs=0x192;eip=0x00222e; 	T(CMP(*(raddr(ds,bx)), 0x0FF));	// 5066 cmp     byte ptr [bx], 0FFh ;~ 00D0:222E
cs=0x192;eip=0x002231; 	J(JZ(loc_1224a));	// 5067 jz      short loc_1224A ;~ 00D0:2231
cs=0x192;eip=0x002233; 	X(MOV(word_19e02, bx));	// 5068 mov     word_19E02, bx ;~ 00D0:2233
cs=0x192;eip=0x002237; 	X(MOV(*(raddr(ds,si+0x0B)), 2));	// 5069 mov     byte ptr [si+0Bh], 2 ;~ 00D0:2237
cs=0x192;eip=0x00223b; 	X(MOV(byte_19df6, 3));	// 5070 mov     byte_19DF6, 3 ;~ 00D0:223B
cs=0x192;eip=0x002240; 	J(CALL(sub_1107c,0));	// 5071 call    sub_1107C ;~ 00D0:2240
cs=0x192;eip=0x002243; 	T(TEST(al, 1));	// 5072 test    al, 1 ;~ 00D0:2243
cs=0x192;eip=0x002245; 	J(JZ(loc_1224a));	// 5073 jz      short loc_1224A ;~ 00D0:2245
cs=0x192;eip=0x002247; 	J(JMP(loc_122f4));	// 5074 jmp     loc_122F4 ;~ 00D0:2247
loc_1224a:
	// 4931 
cs=0x192;eip=0x00224a; 	T(CMP(byte_18e33, 0x0FF));	// 5079 cmp     byte_18E33, 0FFh ;~ 00D0:224A
cs=0x192;eip=0x00224f; 	J(JZ(loc_12273));	// 5080 jz      short loc_12273 ;~ 00D0:224F
cs=0x192;eip=0x002251; 	T(MOV(bx, 0x709));	// 5081 mov     bx, 709h ;~ 00D0:2251
cs=0x192;eip=0x002254; 	T(OR(cl, cl));	// 5082 or      cl, cl ;~ 00D0:2254
cs=0x192;eip=0x002256; 	J(JZ(loc_1225b));	// 5083 jz      short loc_1225B ;~ 00D0:2256
cs=0x192;eip=0x002258; 	T(MOV(bx, 0x704));	// 5084 mov     bx, 704h ;~ 00D0:2258
loc_1225b:
	// 4932 
cs=0x192;eip=0x00225b; 	T(ADD(bx, *(dw*)(raddr(ds,si+3))));	// 5087 add     bx, [si+3] ;~ 00D0:225B
cs=0x192;eip=0x00225e; 	T(CMP(*(raddr(ds,bx)), 0x0FF));	// 5088 cmp     byte ptr [bx], 0FFh ;~ 00D0:225E
cs=0x192;eip=0x002261; 	J(JZ(loc_12273));	// 5089 jz      short loc_12273 ;~ 00D0:2261
cs=0x192;eip=0x002263; 	X(MOV(word_19e02, bx));	// 5090 mov     word_19E02, bx ;~ 00D0:2263
cs=0x192;eip=0x002267; 	X(MOV(*(raddr(ds,si+0x0B)), 0x0B));	// 5091 mov     byte ptr [si+0Bh], 0Bh ;~ 00D0:2267
cs=0x192;eip=0x00226b; 	X(MOV(byte_19df6, 2));	// 5092 mov     byte_19DF6, 2 ;~ 00D0:226B
cs=0x192;eip=0x002270; 	J(JMP(loc_122f4));	// 5093 jmp     loc_122F4 ;~ 00D0:2270
loc_12273:
	// 4933 
cs=0x192;eip=0x002273; 	J(CALL(sub_1107c,0));	// 5098 call    sub_1107C ;~ 00D0:2273
cs=0x192;eip=0x002276; 	T(AND(al, 7));	// 5099 and     al, 7 ;~ 00D0:2276
cs=0x192;eip=0x002278; 	J(JNZ(loc_122f1));	// 5100 jnz     short loc_122F1 ;~ 00D0:2278
cs=0x192;eip=0x00227a; 	T(CMP(byte_19e12, 0));	// 5101 cmp     byte_19E12, 0 ;~ 00D0:227A
cs=0x192;eip=0x00227f; 	J(JNZ(loc_122f1));	// 5102 jnz     short loc_122F1 ;~ 00D0:227F
cs=0x192;eip=0x002281; 	T(CMP(byte_18e38, 0x0FF));	// 5103 cmp     byte_18E38, 0FFh ;~ 00D0:2281
cs=0x192;eip=0x002286; 	J(JZ(loc_122f1));	// 5104 jz      short loc_122F1 ;~ 00D0:2286
cs=0x192;eip=0x002288; 	T(MOV(al, *(raddr(ds,si+9))));	// 5105 mov     al, [si+9] ;~ 00D0:2288
cs=0x192;eip=0x00228b; 	T(AND(al, 0x3F));	// 5106 and     al, 3Fh ;~ 00D0:228B
cs=0x192;eip=0x00228d; 	T(SUB(al, byte_14a2d));	// 5107 sub     al, byte_14A2D ;~ 00D0:228D
cs=0x192;eip=0x002291; 	T(ADD(al, 4));	// 5108 add     al, 4 ;~ 00D0:2291
cs=0x192;eip=0x002293; 	T(CMP(al, 9));	// 5109 cmp     al, 9 ;~ 00D0:2293
cs=0x192;eip=0x002295; 	J(JNC(loc_122f1));	// 5110 jnb     short loc_122F1 ;~ 00D0:2295
cs=0x192;eip=0x002297; 	T(MOV(bx, *(dw*)(raddr(ds,si+3))));	// 5111 mov     bx, [si+3] ;~ 00D0:2297
cs=0x192;eip=0x00229a; 	T(ADD(bx, 0x64));	// 5112 add     bx, 64h ; 'd' ;~ 00D0:229A
cs=0x192;eip=0x00229d; 	T(MOV(cl, 4));	// 5113 mov     cl, 4 ;~ 00D0:229D
cs=0x192;eip=0x00229f; 	T(MOV(ch, 8));	// 5114 mov     ch, 8 ;~ 00D0:229F
cs=0x192;eip=0x0022a1; 	T(MOV(dl, 0));	// 5115 mov     dl, 0 ;~ 00D0:22A1
cs=0x192;eip=0x0022a3; 	T(MOV(al, *(raddr(ds,si+1))));	// 5116 mov     al, [si+1] ;~ 00D0:22A3
cs=0x192;eip=0x0022a6; 	T(ADD(al, 0x0A));	// 5117 add     al, 0Ah ;~ 00D0:22A6
cs=0x192;eip=0x0022a8; 	T(MOV(ah, byte_14a2e));	// 5118 mov     ah, byte_14A2E ;~ 00D0:22A8
cs=0x192;eip=0x0022ac; 	T(ADD(ah, 0x0A));	// 5119 add     ah, 0Ah ;~ 00D0:22AC
cs=0x192;eip=0x0022af; 	T(CMP(ah, al));	// 5120 cmp     ah, al ;~ 00D0:22AF
cs=0x192;eip=0x0022b1; 	J(JNC(loc_122bc));	// 5121 jnb     short loc_122BC ;~ 00D0:22B1
cs=0x192;eip=0x0022b3; 	T(MOV(cl, 1));	// 5122 mov     cl, 1 ;~ 00D0:22B3
cs=0x192;eip=0x0022b5; 	T(MOV(ch, 4));	// 5123 mov     ch, 4 ;~ 00D0:22B5
cs=0x192;eip=0x0022b7; 	T(INC(dl));	// 5124 inc     dl ;~ 00D0:22B7
cs=0x192;eip=0x0022b9; 	T(SUB(bx, 3));	// 5125 sub     bx, 3 ;~ 00D0:22B9
loc_122bc:
	// 4934 
cs=0x192;eip=0x0022bc; 	T(CMP(byte_14a39, dl));	// 5128 cmp     byte_14A39, dl ;~ 00D0:22BC
cs=0x192;eip=0x0022c0; 	J(JNZ(loc_122f1));	// 5129 jnz     short loc_122F1 ;~ 00D0:22C0
cs=0x192;eip=0x0022c2; 	T(MOV(al, *(raddr(ds,si+1))));	// 5130 mov     al, [si+1] ;~ 00D0:22C2
cs=0x192;eip=0x0022c5; 	T(ADD(al, cl));	// 5131 add     al, cl ;~ 00D0:22C5
cs=0x192;eip=0x0022c7; 	X(MOV(byte_19e14, al));	// 5132 mov     byte_19E14, al ;~ 00D0:22C7
cs=0x192;eip=0x0022ca; 	X(MOV(word_19e15, bx));	// 5133 mov     word_19E15, bx ;~ 00D0:22CA
cs=0x192;eip=0x0022ce; 	X(MOV(byte_19e17, ch));	// 5134 mov     byte_19E17, ch ;~ 00D0:22CE
cs=0x192;eip=0x0022d2; 	X(MOV(byte_19e18, ch));	// 5135 mov     byte_19E18, ch ;~ 00D0:22D2
cs=0x192;eip=0x0022d6; 	X(MOV(byte_19e12, 0x0D4));	// 5136 mov     byte_19E12, 0D4h ; 'Ô' ;~ 00D0:22D6
cs=0x192;eip=0x0022db; 	T(MOV(al, *(raddr(ds,si+9))));	// 5137 mov     al, [si+9] ;~ 00D0:22DB
cs=0x192;eip=0x0022de; 	T(AND(al, 0x3F));	// 5138 and     al, 3Fh ;~ 00D0:22DE
cs=0x192;eip=0x0022e0; 	T(ADD(al, 3));	// 5139 add     al, 3 ;~ 00D0:22E0
cs=0x192;eip=0x0022e2; 	X(MOV(byte_19e13, al));	// 5140 mov     byte_19E13, al ;~ 00D0:22E2
cs=0x192;eip=0x0022e5; 	X(MOV(*(raddr(ds,si+0x0B)), 2));	// 5141 mov     byte ptr [si+0Bh], 2 ;~ 00D0:22E5
cs=0x192;eip=0x0022e9; 	X(MOV(byte_19df6, 1));	// 5142 mov     byte_19DF6, 1 ;~ 00D0:22E9
cs=0x192;eip=0x0022ee; 	J(JMP(loc_122f4));	// 5143 jmp     short loc_122F4 ;~ 00D0:22EE
loc_122f1:
	// 4935 
cs=0x192;eip=0x0022f1; 	J(CALL(sub_12506,0));	// 5150 call    sub_12506 ;~ 00D0:22F1
loc_122f4:
	// 4936 
cs=0x192;eip=0x0022f4; 	T(MOV(bx, word_19dfd));	// 5154 mov     bx, word_19DFD ;~ 00D0:22F4
cs=0x192;eip=0x0022f8; 	J(JMP(loc_1242e));	// 5155 jmp     loc_1242E ;~ 00D0:22F8
ret_d0_22fb:
	// 4937 
cs=0x192;eip=0x0022fb; 	T(MOV(bx, 0x6EB));	// 5157 mov     bx, 6EBh ;~ 00D0:22FB
cs=0x192;eip=0x0022fe; 	J(JZ(loc_12303));	// 5158 jz      short loc_12303 ;~ 00D0:22FE
cs=0x192;eip=0x002300; 	T(MOV(bx, 0x6E4));	// 5159 mov     bx, 6E4h ;~ 00D0:2300
loc_12303:
	// 4938 
cs=0x192;eip=0x002303; 	T(CMP(byte_18e2b, 0x0FF));	// 5162 cmp     byte_18E2B, 0FFh ;~ 00D0:2303
cs=0x192;eip=0x002308; 	J(JZ(loc_12319));	// 5163 jz      short loc_12319 ;~ 00D0:2308
cs=0x192;eip=0x00230a; 	T(ADD(bx, *(dw*)(raddr(ds,si+3))));	// 5164 add     bx, [si+3] ;~ 00D0:230A
cs=0x192;eip=0x00230d; 	T(CMP(*(raddr(ds,bx)), 0x0FF));	// 5165 cmp     byte ptr [bx], 0FFh ;~ 00D0:230D
cs=0x192;eip=0x002310; 	J(JZ(loc_12319));	// 5166 jz      short loc_12319 ;~ 00D0:2310
cs=0x192;eip=0x002312; 	X(MOV(*(raddr(ds,si+0x0B)), 4));	// 5167 mov     byte ptr [si+0Bh], 4 ;~ 00D0:2312
cs=0x192;eip=0x002316; 	J(JMP(loc_1231c));	// 5168 jmp     short loc_1231C ;~ 00D0:2316
loc_12319:
	// 4939 
cs=0x192;eip=0x002319; 	J(CALL(sub_12506,0));	// 5175 call    sub_12506 ;~ 00D0:2319
loc_1231c:
	// 4940 
cs=0x192;eip=0x00231c; 	T(MOV(bx, word_19df4));	// 5178 mov     bx, word_19DF4 ;~ 00D0:231C
cs=0x192;eip=0x002320; 	J(JMP(loc_1242e));	// 5179 jmp     loc_1242E ;~ 00D0:2320
ret_d0_2323:
	// 4941 
cs=0x192;eip=0x002323; 	T(CMP(byte_19df6, 2));	// 5181 cmp     byte_19DF6, 2 ;~ 00D0:2323
cs=0x192;eip=0x002328; 	J(JNZ(loc_1233e));	// 5182 jnz     short loc_1233E ;~ 00D0:2328
cs=0x192;eip=0x00232a; 	T(MOV(bx, word_19e02));	// 5183 mov     bx, word_19E02 ;~ 00D0:232A
cs=0x192;eip=0x00232e; 	T(CMP(*(raddr(ds,bx)), 0x0FF));	// 5184 cmp     byte ptr [bx], 0FFh ;~ 00D0:232E
cs=0x192;eip=0x002331; 	J(JZ(loc_1233e));	// 5185 jz      short loc_1233E ;~ 00D0:2331
cs=0x192;eip=0x002333; 	X(PUSH(si));	// 5186 push    si ;~ 00D0:2333
cs=0x192;eip=0x002334; 	J(CALL(sub_12023,0));	// 5187 call    sub_12023 ;~ 00D0:2334
cs=0x192;eip=0x002337; 	T(MOV(cx, 8));	// 5188 mov     cx, 8 ;~ 00D0:2337
cs=0x192;eip=0x00233a; 	J(CALL(sub_11f89,0));	// 5189 call    sub_11F89 ;~ 00D0:233A
cs=0x192;eip=0x00233d; 	X(POP(si));	// 5190 pop     si ;~ 00D0:233D
loc_1233e:
	// 4942 
cs=0x192;eip=0x00233e; 	X(DEC(byte_19df6));	// 5194 dec     byte_19DF6 ;~ 00D0:233E
cs=0x192;eip=0x002342; 	J(JNZ(loc_12348));	// 5195 jnz     short loc_12348 ;~ 00D0:2342
cs=0x192;eip=0x002344; 	X(MOV(*(raddr(ds,si+0x0B)), 0));	// 5196 mov     byte ptr [si+0Bh], 0 ;~ 00D0:2344
loc_12348:
	// 4943 
cs=0x192;eip=0x002348; 	T(MOV(bx, 0x6D9E));	// 5199 mov     bx, 6D9Eh ;~ 00D0:2348
cs=0x192;eip=0x00234b; 	J(JMP(loc_1242e));	// 5200 jmp     loc_1242E ;~ 00D0:234B
ret_d0_234e:
	// 4944 
cs=0x192;eip=0x00234e; 	T(MOV(bx, 0x96A));	// 5202 mov     bx, 96Ah ;~ 00D0:234E
cs=0x192;eip=0x002351; 	T(CMP(byte_14a39, 1));	// 5203 cmp     byte_14A39, 1 ;~ 00D0:2351
cs=0x192;eip=0x002356; 	J(JNZ(loc_1235b));	// 5204 jnz     short loc_1235B ;~ 00D0:2356
cs=0x192;eip=0x002358; 	T(MOV(bx, 0x963));	// 5205 mov     bx, 963h ;~ 00D0:2358
loc_1235b:
	// 4945 
cs=0x192;eip=0x00235b; 	T(MOV(cl, *(raddr(ds,si+1))));	// 5208 mov     cl, [si+1] ;~ 00D0:235B
cs=0x192;eip=0x00235e; 	T(DEC(cl));	// 5209 dec     cl ;~ 00D0:235E
cs=0x192;eip=0x002360; 	T(ADD(bx, *(dw*)(raddr(ds,si+3))));	// 5210 add     bx, [si+3] ;~ 00D0:2360
cs=0x192;eip=0x002363; 	X(MOV(word_19df0, bx));	// 5211 mov     word_19DF0, bx ;~ 00D0:2363
cs=0x192;eip=0x002367; 	T(MOV(al, byte_14a39));	// 5212 mov     al, byte_14A39 ;~ 00D0:2367
cs=0x192;eip=0x00236a; 	X(MOV(byte_19e08, al));	// 5213 mov     byte_19E08, al ;~ 00D0:236A
cs=0x192;eip=0x00236d; 	T(MOV(di, 0x6F77));	// 5214 mov     di, 6F77h ;~ 00D0:236D
cs=0x192;eip=0x002370; 	T(MOV(ch, 0x0A));	// 5215 mov     ch, 0Ah ;~ 00D0:2370
cs=0x192;eip=0x002372; 	X(MOV(byte_19def, ch));	// 5216 mov     byte_19DEF, ch ;~ 00D0:2372
loc_12376:
	// 4946 
cs=0x192;eip=0x002376; 	T(CMP(cl, 0x19));	// 5219 cmp     cl, 19h ;~ 00D0:2376
cs=0x192;eip=0x002379; 	J(JNC(loc_1238b));	// 5220 jnb     short loc_1238B ;~ 00D0:2379
cs=0x192;eip=0x00237b; 	T(CMP(*(raddr(ds,bx-0x6C0)), 0x0C7));	// 5221 cmp     byte ptr [bx-6C0h], 0C7h ; 'Ç' ;~ 00D0:237B
cs=0x192;eip=0x002380; 	J(JNC(loc_123a0));	// 5222 jnb     short loc_123A0 ;~ 00D0:2380
cs=0x192;eip=0x002382; 	T(MOV(al, *(raddr(ds,di))));	// 5223 mov     al, [di] ;~ 00D0:2382
cs=0x192;eip=0x002384; 	X(MOV(*(raddr(ds,bx)), al));	// 5224 mov     [bx], al ;~ 00D0:2384
cs=0x192;eip=0x002386; 	X(MOV(*(raddr(ds,bx-0x900)), 1));	// 5225 mov     byte ptr [bx-900h], 1 ;~ 00D0:2386
loc_1238b:
	// 4947 
cs=0x192;eip=0x00238b; 	T(INC(di));	// 5228 inc     di ;~ 00D0:238B
cs=0x192;eip=0x00238c; 	T(TEST(byte_14a39, 1));	// 5229 test    byte_14A39, 1 ;~ 00D0:238C
cs=0x192;eip=0x002391; 	J(JZ(loc_12399));	// 5230 jz      short loc_12399 ;~ 00D0:2391
cs=0x192;eip=0x002393; 	T(DEC(cl));	// 5231 dec     cl ;~ 00D0:2393
cs=0x192;eip=0x002395; 	T(DEC(cl));	// 5232 dec     cl ;~ 00D0:2395
cs=0x192;eip=0x002397; 	T(DEC(bx));	// 5233 dec     bx ;~ 00D0:2397
cs=0x192;eip=0x002398; 	T(DEC(bx));	// 5234 dec     bx ;~ 00D0:2398
loc_12399:
	// 4948 
cs=0x192;eip=0x002399; 	T(INC(cl));	// 5237 inc     cl ;~ 00D0:2399
cs=0x192;eip=0x00239b; 	T(INC(bx));	// 5238 inc     bx ;~ 00D0:239B
cs=0x192;eip=0x00239c; 	T(DEC(ch));	// 5239 dec     ch ;~ 00D0:239C
cs=0x192;eip=0x00239e; 	J(JNZ(loc_12376));	// 5240 jnz     short loc_12376 ;~ 00D0:239E
loc_123a0:
	// 4949 
cs=0x192;eip=0x0023a0; 	X(DEC(byte_19df6));	// 5243 dec     byte_19DF6 ;~ 00D0:23A0
cs=0x192;eip=0x0023a4; 	J(JNZ(loc_123aa));	// 5244 jnz     short loc_123AA ;~ 00D0:23A4
cs=0x192;eip=0x0023a6; 	X(MOV(*(raddr(ds,si+0x0B)), 7));	// 5245 mov     byte ptr [si+0Bh], 7 ;~ 00D0:23A6
loc_123aa:
	// 4950 
cs=0x192;eip=0x0023aa; 	T(MOV(bx, 0x6D9E));	// 5248 mov     bx, 6D9Eh ;~ 00D0:23AA
cs=0x192;eip=0x0023ad; 	J(JMP(loc_1242e));	// 5249 jmp     short loc_1242E ;~ 00D0:23AD
ret_d0_23b0:
	// 4951 
cs=0x192;eip=0x0023b0; 	X(MOV(*(raddr(ds,si+0x0B)), 8));	// 5252 mov     byte ptr [si+0Bh], 8 ;~ 00D0:23B0
cs=0x192;eip=0x0023b4; 	T(MOV(bx, 0x6EC9));	// 5253 mov     bx, 6EC9h ;~ 00D0:23B4
cs=0x192;eip=0x0023b7; 	J(JMP(loc_1242e));	// 5254 jmp     short loc_1242E ;~ 00D0:23B7
ret_d0_23ba:
	// 4952 
cs=0x192;eip=0x0023ba; 	X(MOV(*(raddr(ds,si+0x0B)), 0));	// 5257 mov     byte ptr [si+0Bh], 0 ;~ 00D0:23BA
cs=0x192;eip=0x0023be; 	T(MOV(bx, 0x6EC9));	// 5258 mov     bx, 6EC9h ;~ 00D0:23BE
loc_123c1:
	// 4953 
cs=0x192;eip=0x0023c1; 	X(XOR(byte_14a39, 1));	// 5261 xor     byte_14A39, 1 ;~ 00D0:23C1
cs=0x192;eip=0x0023c6; 	J(JMP(loc_1242e));	// 5262 jmp     short loc_1242E ;~ 00D0:23C6
ret_d0_23c9:
	// 4954 
cs=0x192;eip=0x0023c9; 	X(MOV(*(raddr(ds,si+0x0B)), 0x0A));	// 5266 mov     byte ptr [si+0Bh], 0Ah ;~ 00D0:23C9
cs=0x192;eip=0x0023cd; 	T(MOV(bx, 0x6E37));	// 5267 mov     bx, 6E37h ;~ 00D0:23CD
cs=0x192;eip=0x0023d0; 	J(JMP(loc_1242e));	// 5268 jmp     short loc_1242E ;~ 00D0:23D0
ret_d0_23d3:
	// 4955 
cs=0x192;eip=0x0023d3; 	X(MOV(*(raddr(ds,si+0x0B)), 1));	// 5272 mov     byte ptr [si+0Bh], 1 ;~ 00D0:23D3
cs=0x192;eip=0x0023d7; 	T(MOV(bx, 0x6E37));	// 5273 mov     bx, 6E37h ;~ 00D0:23D7
cs=0x192;eip=0x0023da; 	J(JMP(loc_123c1));	// 5274 jmp     short loc_123C1 ;~ 00D0:23DA
ret_d0_23dc:
	// 4956 
cs=0x192;eip=0x0023dc; 	T(MOV(bx, 0x6F1B));	// 5276 mov     bx, 6F1Bh ;~ 00D0:23DC
cs=0x192;eip=0x0023df; 	J(JMP(loc_1242e));	// 5277 jmp     short loc_1242E ;~ 00D0:23DF
ret_d0_23e2:
	// 4957 
cs=0x192;eip=0x0023e2; 	T(MOV(bx, 0x6F45));	// 5280 mov     bx, 6F45h ;~ 00D0:23E2
cs=0x192;eip=0x0023e5; 	J(JMP(loc_1242e));	// 5281 jmp     short loc_1242E ;~ 00D0:23E5
ret_d0_23e8:
	// 4958 
cs=0x192;eip=0x0023e8; 	T(CMP(byte_19df6, 1));	// 5284 cmp     byte_19DF6, 1 ;~ 00D0:23E8
cs=0x192;eip=0x0023ed; 	J(JNZ(loc_12402));	// 5285 jnz     short loc_12402 ;~ 00D0:23ED
cs=0x192;eip=0x0023ef; 	T(CMP(word_19e02, 0x0FF));	// 5286 cmp     word_19E02, 0FFh ;~ 00D0:23EF
cs=0x192;eip=0x0023f5; 	J(JZ(loc_12402));	// 5287 jz      short loc_12402 ;~ 00D0:23F5
cs=0x192;eip=0x0023f7; 	X(PUSH(si));	// 5288 push    si ;~ 00D0:23F7
cs=0x192;eip=0x0023f8; 	J(CALL(sub_12023,0));	// 5289 call    sub_12023 ;~ 00D0:23F8
cs=0x192;eip=0x0023fb; 	T(MOV(cx, 5));	// 5290 mov     cx, 5 ;~ 00D0:23FB
cs=0x192;eip=0x0023fe; 	J(CALL(sub_11f89,0));	// 5291 call    sub_11F89 ;~ 00D0:23FE
cs=0x192;eip=0x002401; 	X(POP(si));	// 5292 pop     si ;~ 00D0:2401
loc_12402:
	// 4959 
cs=0x192;eip=0x002402; 	X(DEC(byte_19df6));	// 5296 dec     byte_19DF6 ;~ 00D0:2402
cs=0x192;eip=0x002406; 	J(JNZ(loc_1240c));	// 5297 jnz     short loc_1240C ;~ 00D0:2406
cs=0x192;eip=0x002408; 	X(MOV(*(raddr(ds,si+0x0B)), 0));	// 5298 mov     byte ptr [si+0Bh], 0 ;~ 00D0:2408
loc_1240c:
	// 4960 
cs=0x192;eip=0x00240c; 	T(MOV(bx, 0x6EF3));	// 5301 mov     bx, 6EF3h ;~ 00D0:240C
cs=0x192;eip=0x00240f; 	J(JMP(loc_1242e));	// 5302 jmp     short loc_1242E ;~ 00D0:240F
ret_d0_2412:
	// 4961 
cs=0x192;eip=0x002412; 	X(MOV(*(raddr(ds,si+0x0B)), 3));	// 5305 mov     byte ptr [si+0Bh], 3 ;~ 00D0:2412
cs=0x192;eip=0x002416; 	T(MOV(bx, 0x6DC7));	// 5306 mov     bx, 6DC7h ;~ 00D0:2416
cs=0x192;eip=0x002419; 	J(JMP(loc_1242e));	// 5307 jmp     short loc_1242E ;~ 00D0:2419
ret_d0_241c:
	// 4962 
cs=0x192;eip=0x00241c; 	J(CALL(sub_12023,0));	// 5310 call    sub_12023 ;~ 00D0:241C
cs=0x192;eip=0x00241f; 	X(PUSH(si));	// 5311 push    si ;~ 00D0:241F
cs=0x192;eip=0x002420; 	T(MOV(cx, 3));	// 5312 mov     cx, 3 ;~ 00D0:2420
cs=0x192;eip=0x002423; 	J(CALL(sub_11f89,0));	// 5313 call    sub_11F89 ;~ 00D0:2423
cs=0x192;eip=0x002426; 	X(POP(si));	// 5314 pop     si ;~ 00D0:2426
cs=0x192;eip=0x002427; 	X(MOV(*(raddr(ds,si+0x0B)), 1));	// 5315 mov     byte ptr [si+0Bh], 1 ;~ 00D0:2427
cs=0x192;eip=0x00242b; 	T(MOV(bx, 0x6E07));	// 5316 mov     bx, 6E07h ;~ 00D0:242B
loc_1242e:
	// 4963 
cs=0x192;eip=0x00242e; 	X(MOV(word_19dff, bx));	// 5320 mov     word_19DFF, bx ;~ 00D0:242E
cs=0x192;eip=0x002432; 	T(MOV(bx, 0x6FA6));	// 5321 mov     bx, 6FA6h ;~ 00D0:2432
cs=0x192;eip=0x002435; 	T(TEST(*(raddr(ds,si+9)), 0x80));	// 5322 test    byte ptr [si+9], 80h ;~ 00D0:2435
cs=0x192;eip=0x002439; 	J(JZ(loc_1243e));	// 5323 jz      short loc_1243E ;~ 00D0:2439
cs=0x192;eip=0x00243b; 	T(MOV(bx, 0x6FA7));	// 5324 mov     bx, 6FA7h ;~ 00D0:243B
loc_1243e:
	// 4964 
cs=0x192;eip=0x00243e; 	T(MOV(al, byte_14a39));	// 5327 mov     al, byte_14A39 ;~ 00D0:243E
cs=0x192;eip=0x002441; 	X(MOV(*(raddr(ds,bx)), al));	// 5328 mov     [bx], al ;~ 00D0:2441
cs=0x192;eip=0x002443; 	T(MOV(bx, 0x904));	// 5329 mov     bx, 904h ;~ 00D0:2443
cs=0x192;eip=0x002446; 	T(TEST(*(raddr(ds,si+9)), 0x80));	// 5330 test    byte ptr [si+9], 80h ;~ 00D0:2446
cs=0x192;eip=0x00244a; 	J(JZ(loc_1244f));	// 5331 jz      short loc_1244F ;~ 00D0:244A
cs=0x192;eip=0x00244c; 	T(MOV(bx, 0x0B44));	// 5332 mov     bx, 0B44h ;~ 00D0:244C
loc_1244f:
	// 4965 
cs=0x192;eip=0x00244f; 	T(ADD(bx, *(dw*)(raddr(ds,si+3))));	// 5335 add     bx, [si+3] ;~ 00D0:244F
cs=0x192;eip=0x002452; 	T(MOV(dx, word_19dff));	// 5336 mov     dx, word_19DFF ;~ 00D0:2452
cs=0x192;eip=0x002456; 	T(MOV(cl, byte_19df9));	// 5337 mov     cl, byte_19DF9 ;~ 00D0:2456
cs=0x192;eip=0x00245a; 	T(MOV(ch, byte_19dfa));	// 5338 mov     ch, byte_19DFA ;~ 00D0:245A
cs=0x192;eip=0x00245e; 	T(MOV(ah, *(raddr(ds,si+9))));	// 5339 mov     ah, [si+9] ;~ 00D0:245E
cs=0x192;eip=0x002461; 	T(AND(ah, 0x7F));	// 5340 and     ah, 7Fh ;~ 00D0:2461
cs=0x192;eip=0x002464; 	T(MOV(al, *(raddr(ds,si+1))));	// 5341 mov     al, [si+1] ;~ 00D0:2464
cs=0x192;eip=0x002467; 	X(PUSH(si));	// 5342 push    si ;~ 00D0:2467
cs=0x192;eip=0x002468; 	J(CALL(sub_11dfd,0));	// 5343 call    sub_11DFD ;~ 00D0:2468
cs=0x192;eip=0x00246b; 	X(POP(si));	// 5344 pop     si ;~ 00D0:246B
cs=0x192;eip=0x00246c; 	X(PUSH(si));	// 5345 push    si ;~ 00D0:246C
cs=0x192;eip=0x00246d; 	J(CALL(sub_12553,0));	// 5346 call    sub_12553 ;~ 00D0:246D
cs=0x192;eip=0x002470; 	X(POP(si));	// 5347 pop     si ;~ 00D0:2470
cs=0x192;eip=0x002471; 	J(JMP(loc_124c1));	// 5348 jmp     short loc_124C1 ;~ 00D0:2471
loc_12474:
	// 4966 
cs=0x192;eip=0x002474; 	T(MOV(al, *(raddr(ds,si+0x0B))));	// 5354 mov     al, [si+0Bh] ;~ 00D0:2474
cs=0x192;eip=0x002477; 	T(CMP(al, 0x0C));	// 5355 cmp     al, 0Ch ;~ 00D0:2477
cs=0x192;eip=0x002479; 	J(JNZ(loc_12482));	// 5356 jnz     short loc_12482 ;~ 00D0:2479
cs=0x192;eip=0x00247b; 	X(MOV(*(raddr(ds,si+0x0B)), 7));	// 5357 mov     byte ptr [si+0Bh], 7 ;~ 00D0:247B
cs=0x192;eip=0x00247f; 	J(JMP(loc_124c1));	// 5358 jmp     short loc_124C1 ;~ 00D0:247F
loc_12482:
	// 4967 
cs=0x192;eip=0x002482; 	T(CMP(al, 0x0B));	// 5363 cmp     al, 0Bh ;~ 00D0:2482
cs=0x192;eip=0x002484; 	J(JZ(loc_124bd));	// 5364 jz      short loc_124BD ;~ 00D0:2484
cs=0x192;eip=0x002486; 	T(CMP(al, 9));	// 5365 cmp     al, 9 ;~ 00D0:2486
cs=0x192;eip=0x002488; 	J(JNZ(loc_12496));	// 5366 jnz     short loc_12496 ;~ 00D0:2488
cs=0x192;eip=0x00248a; 	X(XOR(byte_14a39, 1));	// 5367 xor     byte_14A39, 1 ;~ 00D0:248A
cs=0x192;eip=0x00248f; 	X(MOV(*(raddr(ds,si+0x0B)), 1));	// 5368 mov     byte ptr [si+0Bh], 1 ;~ 00D0:248F
cs=0x192;eip=0x002493; 	J(JMP(loc_124c1));	// 5369 jmp     short loc_124C1 ;~ 00D0:2493
loc_12496:
	// 4968 
cs=0x192;eip=0x002496; 	T(CMP(al, 7));	// 5374 cmp     al, 7 ;~ 00D0:2496
cs=0x192;eip=0x002498; 	J(JNZ(loc_124a2));	// 5375 jnz     short loc_124A2 ;~ 00D0:2498
cs=0x192;eip=0x00249a; 	X(XOR(byte_14a39, 1));	// 5376 xor     byte_14A39, 1 ;~ 00D0:249A
cs=0x192;eip=0x00249f; 	J(JMP(loc_124bd));	// 5377 jmp     short loc_124BD ;~ 00D0:249F
loc_124a2:
	// 4969 
cs=0x192;eip=0x0024a2; 	T(CMP(al, 6));	// 5382 cmp     al, 6 ;~ 00D0:24A2
cs=0x192;eip=0x0024a4; 	J(JZ(loc_124c1));	// 5383 jz      short loc_124C1 ;~ 00D0:24A4
cs=0x192;eip=0x0024a6; 	T(CMP(al, 4));	// 5384 cmp     al, 4 ;~ 00D0:24A6
cs=0x192;eip=0x0024a8; 	J(JNZ(loc_124b1));	// 5385 jnz     short loc_124B1 ;~ 00D0:24A8
loc_124aa:
	// 4970 
cs=0x192;eip=0x0024aa; 	X(MOV(*(raddr(ds,si+0x0B)), 1));	// 5388 mov     byte ptr [si+0Bh], 1 ;~ 00D0:24AA
cs=0x192;eip=0x0024ae; 	J(JMP(loc_124c1));	// 5389 jmp     short loc_124C1 ;~ 00D0:24AE
loc_124b1:
	// 4971 
cs=0x192;eip=0x0024b1; 	T(CMP(al, 5));	// 5395 cmp     al, 5 ;~ 00D0:24B1
cs=0x192;eip=0x0024b3; 	J(JZ(loc_124c1));	// 5396 jz      short loc_124C1 ;~ 00D0:24B3
cs=0x192;eip=0x0024b5; 	T(CMP(al, 0x0A));	// 5397 cmp     al, 0Ah ;~ 00D0:24B5
cs=0x192;eip=0x0024b7; 	J(JZ(loc_124aa));	// 5398 jz      short loc_124AA ;~ 00D0:24B7
cs=0x192;eip=0x0024b9; 	T(CMP(al, 2));	// 5399 cmp     al, 2 ;~ 00D0:24B9
cs=0x192;eip=0x0024bb; 	J(JC(loc_124c1));	// 5400 jb      short loc_124C1 ;~ 00D0:24BB
loc_124bd:
	// 4972 
cs=0x192;eip=0x0024bd; 	X(MOV(*(raddr(ds,si+0x0B)), 0));	// 5404 mov     byte ptr [si+0Bh], 0 ;~ 00D0:24BD
loc_124c1:
	// 4973 
cs=0x192;eip=0x0024c1; 	X(MOV(word_18980, 0x1BB4));	// 5408 mov     word_18980, 1BB4h ;~ 00D0:24C1
cs=0x192;eip=0x0024c7; 	J(CALL(sub_12549,0));	// 5409 call    sub_12549 ;~ 00D0:24C7
cs=0x192;eip=0x0024ca; 	J(CALL(sub_1252e,0));	// 5410 call    sub_1252E ;~ 00D0:24CA
cs=0x192;eip=0x0024cd; 	T(ADD(si, 0x0C));	// 5411 add     si, 0Ch ;~ 00D0:24CD
cs=0x192;eip=0x0024d0; 	X(MOV(word_1897e, 0x5FC7));	// 5412 mov     word_1897E, 5FC7h ;~ 00D0:24D0
cs=0x192;eip=0x0024d6; 	X(MOV(*(db*)(((db*)&word_1897c)), 5));	// 5413 mov     byte ptr word_1897C, 5 ;~ 00D0:24D6
cs=0x192;eip=0x0024db; 	X(MOV(byte_19dfa, 6));	// 5414 mov     byte_19DFA, 6 ;~ 00D0:24DB
cs=0x192;eip=0x0024e0; 	X(MOV(byte_19dfc, 6));	// 5415 mov     byte_19DFC, 6 ;~ 00D0:24E0
cs=0x192;eip=0x0024e5; 	X(MOV(byte_19df9, 7));	// 5416 mov     byte_19DF9, 7 ;~ 00D0:24E5
cs=0x192;eip=0x0024ea; 	X(MOV(byte_19dfb, 8));	// 5417 mov     byte_19DFB, 8 ;~ 00D0:24EA
cs=0x192;eip=0x0024ef; 	X(MOV(*(db*)(((db*)&word_1897a)), 0x0C));	// 5418 mov     byte ptr word_1897A, 0Ch ;~ 00D0:24EF
cs=0x192;eip=0x0024f4; 	X(MOV(*(db*)(((db*)&word_18978)), 0x1A));	// 5419 mov     byte ptr word_18978, 1Ah ;~ 00D0:24F4
cs=0x192;eip=0x0024f9; 	X(POP(cx));	// 5420 pop     cx ;~ 00D0:24F9
cs=0x192;eip=0x0024fa; 	T(DEC(cx));	// 5421 dec     cx ;~ 00D0:24FA
cs=0x192;eip=0x0024fb; 	J(JCXZ(loc_12500));	// 5422 jcxz    short loc_12500 ;~ 00D0:24FB
cs=0x192;eip=0x0024fd; 	J(JMP(loc_1208a));	// 5423 jmp     loc_1208A ;~ 00D0:24FD
loc_12500:
	// 4974 
cs=0x192;eip=0x002500; 	X(MOV(byte_19e01, 0));	// 5427 mov     byte_19E01, 0 ;~ 00D0:2500
cs=0x192;eip=0x002505; 	J(RETN(0));	// 5428 retn ;~ 00D0:2505
sub_12506:
	// 5435 
cs=0x192;eip=0x002506; 	J(CALL(sub_1107c,0));	// 5437 call    sub_1107C ;~ 00D0:2506
ret_d0_2509:
	// 4975 
cs=0x192;eip=0x002509; 	T(AND(al, 3));	// 5438 and     al, 3 ;~ 00D0:2509
cs=0x192;eip=0x00250b; 	J(JNZ(locret_1252d));	// 5439 jnz     short locret_1252D ;~ 00D0:250B
cs=0x192;eip=0x00250d; 	T(MOV(al, byte_14a2e));	// 5440 mov     al, byte_14A2E ;~ 00D0:250D
cs=0x192;eip=0x002510; 	T(ADD(al, 4));	// 5441 add     al, 4 ;~ 00D0:2510
cs=0x192;eip=0x002512; 	T(SUB(al, *(raddr(ds,si+1))));	// 5442 sub     al, [si+1] ;~ 00D0:2512
cs=0x192;eip=0x002515; 	T(SUB(al, 4));	// 5443 sub     al, 4 ;~ 00D0:2515
cs=0x192;eip=0x002517; 	T(MOV(ah, 1));	// 5444 mov     ah, 1 ;~ 00D0:2517
cs=0x192;eip=0x002519; 	J(JS(loc_1251d));	// 5445 js      short loc_1251D ;~ 00D0:2519
cs=0x192;eip=0x00251b; 	T(DEC(ah));	// 5446 dec     ah ;~ 00D0:251B
loc_1251d:
	// 4976 
cs=0x192;eip=0x00251d; 	T(CMP(byte_14a39, ah));	// 5449 cmp     byte_14A39, ah ;~ 00D0:251D
cs=0x192;eip=0x002521; 	J(JZ(locret_1252d));	// 5450 jz      short locret_1252D ;~ 00D0:2521
cs=0x192;eip=0x002523; 	T(MOV(al, *(raddr(ds,si+0x0B))));	// 5451 mov     al, [si+0Bh] ;~ 00D0:2523
cs=0x192;eip=0x002526; 	T(ADD(al, al));	// 5452 add     al, al ;~ 00D0:2526
cs=0x192;eip=0x002528; 	T(ADD(al, 7));	// 5453 add     al, 7 ;~ 00D0:2528
cs=0x192;eip=0x00252a; 	X(MOV(*(raddr(ds,si+0x0B)), al));	// 5454 mov     [si+0Bh], al ;~ 00D0:252A
locret_1252d:
	// 4977 
cs=0x192;eip=0x00252d; 	J(RETN(0));	// 5458 retn ;~ 00D0:252D
sub_1252e:
	// 5465 
cs=0x192;eip=0x00252e; 	T(TEST(*(raddr(ds,si+9)), 0x80));	// 5467 test    byte ptr [si+9], 80h ;~ 00D0:252E
ret_d0_2532:
	// 4978 
cs=0x192;eip=0x002532; 	J(JZ(locret_12548));	// 5468 jz      short locret_12548 ;~ 00D0:2532
cs=0x192;eip=0x002534; 	T(MOV(al, byte_19df6));	// 5469 mov     al, byte_19DF6 ;~ 00D0:2534
cs=0x192;eip=0x002537; 	X(XCHG(al, byte_19df7));	// 5470 xchg    al, byte_19DF7 ;~ 00D0:2537
cs=0x192;eip=0x00253b; 	X(MOV(byte_19df6, al));	// 5471 mov     byte_19DF6, al ;~ 00D0:253B
cs=0x192;eip=0x00253e; 	T(MOV(ax, word_19e02));	// 5472 mov     ax, word_19E02 ;~ 00D0:253E
cs=0x192;eip=0x002541; 	X(XCHG(ax, word_19e04));	// 5473 xchg    ax, word_19E04 ;~ 00D0:2541
cs=0x192;eip=0x002545; 	X(MOV(word_19e02, ax));	// 5474 mov     word_19E02, ax ;~ 00D0:2545
locret_12548:
	// 4979 
cs=0x192;eip=0x002548; 	J(RETN(0));	// 5477 retn ;~ 00D0:2548
sub_12549:
	// 5484 
cs=0x192;eip=0x002549; 	T(MOV(al, byte_14a39));	// 5486 mov     al, byte_14A39 ;~ 00D0:2549
ret_d0_254c:
	// 4980 
cs=0x192;eip=0x00254c; 	X(XCHG(al, *(raddr(ds,si+0x0A))));	// 5487 xchg    al, [si+0Ah] ;~ 00D0:254C
cs=0x192;eip=0x00254f; 	X(MOV(byte_14a39, al));	// 5488 mov     byte_14A39, al ;~ 00D0:254F
cs=0x192;eip=0x002552; 	J(RETN(0));	// 5489 retn ;~ 00D0:2552
sub_12553:
	// 5496 
cs=0x192;eip=0x002553; 	T(MOV(bx, *(dw*)(raddr(ds,si+3))));	// 5498 mov     bx, [si+3] ;~ 00D0:2553
ret_d0_2556:
	// 4981 
cs=0x192;eip=0x002556; 	T(ADD(bx, 4));	// 5499 add     bx, 4 ;~ 00D0:2556
cs=0x192;eip=0x00255a; 	T(MOV(dx, 0x5B6A));	// 5500 mov     dx, 5B6Ah ;~ 00D0:255A
cs=0x192;eip=0x00255d; 	T(MOV(cl, byte_19dfb));	// 5501 mov     cl, byte_19DFB ;~ 00D0:255D
cs=0x192;eip=0x002561; 	T(MOV(ch, byte_19dfc));	// 5502 mov     ch, byte_19DFC ;~ 00D0:2561
cs=0x192;eip=0x002565; 	T(MOV(ah, *(raddr(ds,si+9))));	// 5503 mov     ah, [si+9] ;~ 00D0:2565
cs=0x192;eip=0x002568; 	T(AND(ah, 0x7F));	// 5504 and     ah, 7Fh ;~ 00D0:2568
cs=0x192;eip=0x00256b; 	T(MOV(al, *(raddr(ds,si+1))));	// 5505 mov     al, [si+1] ;~ 00D0:256B
cs=0x192;eip=0x00256e; 	X(PUSH(si));	// 5506 push    si ;~ 00D0:256E
cs=0x192;eip=0x00256f; 	J(CALL(sub_11dfd,0));	// 5507 call    sub_11DFD ;~ 00D0:256F
cs=0x192;eip=0x002572; 	X(POP(si));	// 5508 pop     si ;~ 00D0:2572
cs=0x192;eip=0x002573; 	J(RETN(0));	// 5509 retn ;~ 00D0:2573
sub_12574:
	// 5516 
cs=0x192;eip=0x002574; 	X(MOV(word_1897e, 0x5FC8));	// 5517 mov     word_1897E, 5FC8h ;~ 00D0:2574
ret_d0_257a:
	// 4982 
cs=0x192;eip=0x00257a; 	X(MOV(*(db*)(((db*)&word_1897c)), 7));	// 5518 mov     byte ptr word_1897C, 7 ;~ 00D0:257A
cs=0x192;eip=0x00257f; 	X(MOV(byte_19dfa, 8));	// 5519 mov     byte_19DFA, 8 ;~ 00D0:257F
cs=0x192;eip=0x002584; 	X(MOV(byte_19dfc, 8));	// 5520 mov     byte_19DFC, 8 ;~ 00D0:2584
cs=0x192;eip=0x002589; 	X(MOV(byte_19df9, 3));	// 5521 mov     byte_19DF9, 3 ;~ 00D0:2589
cs=0x192;eip=0x00258e; 	X(MOV(byte_19dfb, 4));	// 5522 mov     byte_19DFB, 4 ;~ 00D0:258E
cs=0x192;eip=0x002593; 	X(MOV(*(db*)(((db*)&word_1897a)), 0x10));	// 5523 mov     byte ptr word_1897A, 10h ;~ 00D0:2593
cs=0x192;eip=0x002598; 	X(MOV(*(db*)(((db*)&word_18978)), 0x18));	// 5524 mov     byte ptr word_18978, 18h ;~ 00D0:2598
cs=0x192;eip=0x00259d; 	J(RETN(0));	// 5525 retn ;~ 00D0:259D
sub_1259e:
	// 5532 
cs=0x192;eip=0x00259e; 	X(MOV(byte_19e0a, 6));	// 5534 mov     byte_19E0A, 6 ;~ 00D0:259E
ret_d0_25a3:
	// 4983 
cs=0x192;eip=0x0025a3; 	T(MOV(si, 0x6FAB));	// 5535 mov     si, 6FABh ;~ 00D0:25A3
loc_125a6:
	// 4984 
cs=0x192;eip=0x0025a6; 	T(CMP(*(raddr(ds,si)), 0));	// 5538 cmp     byte ptr [si], 0 ;~ 00D0:25A6
cs=0x192;eip=0x0025a9; 	J(JNZ(loc_125ae));	// 5539 jnz     short loc_125AE ;~ 00D0:25A9
cs=0x192;eip=0x0025ab; 	J(JMP(loc_1264d));	// 5540 jmp     loc_1264D ;~ 00D0:25AB
loc_125ae:
	// 4985 
cs=0x192;eip=0x0025ae; 	T(MOV(bx, *(dw*)(raddr(ds,si+3))));	// 5544 mov     bx, [si+3] ;~ 00D0:25AE
cs=0x192;eip=0x0025b1; 	T(ADD(bx, 4));	// 5545 add     bx, 4 ;~ 00D0:25B1
cs=0x192;eip=0x0025b5; 	X(MOV(*(raddr(ds,bx)), 1));	// 5546 mov     byte ptr [bx], 1 ;~ 00D0:25B5
cs=0x192;eip=0x0025b8; 	T(MOV(cl, *(raddr(ds,si+5))));	// 5547 mov     cl, [si+5] ;~ 00D0:25B8
cs=0x192;eip=0x0025bb; 	X(PUSH(cx));	// 5548 push    cx ;~ 00D0:25BB
cs=0x192;eip=0x0025bc; 	T(MOV(ch, 2));	// 5549 mov     ch, 2 ;~ 00D0:25BC
loc_125be:
	// 4986 
cs=0x192;eip=0x0025be; 	T(TEST(cl, 1));	// 5552 test    cl, 1 ;~ 00D0:25BE
cs=0x192;eip=0x0025c1; 	J(JZ(loc_125c6));	// 5553 jz      short loc_125C6 ;~ 00D0:25C1
cs=0x192;eip=0x0025c3; 	J(CALL(sub_1265a,0));	// 5554 call    sub_1265A ;~ 00D0:25C3
loc_125c6:
	// 4987 
cs=0x192;eip=0x0025c6; 	T(TEST(cl, 2));	// 5557 test    cl, 2 ;~ 00D0:25C6
cs=0x192;eip=0x0025c9; 	J(JZ(loc_125ce));	// 5558 jz      short loc_125CE ;~ 00D0:25C9
cs=0x192;eip=0x0025cb; 	J(CALL(sub_12671,0));	// 5559 call    sub_12671 ;~ 00D0:25CB
loc_125ce:
	// 4988 
cs=0x192;eip=0x0025ce; 	T(TEST(cl, 4));	// 5562 test    cl, 4 ;~ 00D0:25CE
cs=0x192;eip=0x0025d1; 	J(JZ(loc_125d6));	// 5563 jz      short loc_125D6 ;~ 00D0:25D1
cs=0x192;eip=0x0025d3; 	J(CALL(sub_1267f,0));	// 5564 call    sub_1267F ;~ 00D0:25D3
loc_125d6:
	// 4989 
cs=0x192;eip=0x0025d6; 	T(TEST(cl, 8));	// 5567 test    cl, 8 ;~ 00D0:25D6
cs=0x192;eip=0x0025d9; 	J(JZ(loc_125de));	// 5568 jz      short loc_125DE ;~ 00D0:25D9
cs=0x192;eip=0x0025db; 	J(CALL(sub_1268d,0));	// 5569 call    sub_1268D ;~ 00D0:25DB
loc_125de:
	// 4990 
cs=0x192;eip=0x0025de; 	T(MOV(bx, *(dw*)(raddr(ds,si+3))));	// 5572 mov     bx, [si+3] ;~ 00D0:25DE
cs=0x192;eip=0x0025e1; 	T(ADD(bx, 0x244));	// 5573 add     bx, 244h ;~ 00D0:25E1
cs=0x192;eip=0x0025e5; 	T(CMP(*(raddr(ds,bx)), 0x0C7));	// 5574 cmp     byte ptr [bx], 0C7h ; 'Ç' ;~ 00D0:25E5
cs=0x192;eip=0x0025e8; 	J(JC(loc_125f1));	// 5575 jb      short loc_125F1 ;~ 00D0:25E8
loc_125ea:
	// 4991 
cs=0x192;eip=0x0025ea; 	X(MOV(*(raddr(ds,si)), 0));	// 5579 mov     byte ptr [si], 0 ;~ 00D0:25EA
cs=0x192;eip=0x0025ed; 	X(POP(cx));	// 5580 pop     cx ;~ 00D0:25ED
cs=0x192;eip=0x0025ee; 	J(JMP(loc_1264d));	// 5581 jmp     short loc_1264D ;~ 00D0:25EE
loc_125f1:
	// 4992 
cs=0x192;eip=0x0025f1; 	T(ADD(bx, 0x6C0));	// 5587 add     bx, 6C0h ;~ 00D0:25F1
cs=0x192;eip=0x0025f5; 	T(CMP(byte_19e0a, 6));	// 5588 cmp     byte_19E0A, 6 ;~ 00D0:25F5
cs=0x192;eip=0x0025fa; 	J(JNZ(loc_1261d));	// 5589 jnz     short loc_1261D ;~ 00D0:25FA
cs=0x192;eip=0x0025fc; 	T(CMP(*(raddr(ds,bx)), 0x0FF));	// 5590 cmp     byte ptr [bx], 0FFh ;~ 00D0:25FC
cs=0x192;eip=0x0025ff; 	J(JZ(loc_12608));	// 5591 jz      short loc_12608 ;~ 00D0:25FF
cs=0x192;eip=0x002601; 	T(MOV(al, 1));	// 5592 mov     al, 1 ;~ 00D0:2601
loc_12603:
	// 4993 
cs=0x192;eip=0x002603; 	X(MOV(byte_19e01, al));	// 5595 mov     byte_19E01, al ;~ 00D0:2603
cs=0x192;eip=0x002606; 	J(JMP(loc_125ea));	// 5596 jmp     short loc_125EA ;~ 00D0:2606
loc_12608:
	// 4994 
cs=0x192;eip=0x002608; 	T(ADD(bx, 0x240));	// 5600 add     bx, 240h ;~ 00D0:2608
cs=0x192;eip=0x00260c; 	T(CMP(*(raddr(ds,bx)), 0x0FF));	// 5601 cmp     byte ptr [bx], 0FFh ;~ 00D0:260C
cs=0x192;eip=0x00260f; 	T(MOV(al, 2));	// 5602 mov     al, 2 ;~ 00D0:260F
cs=0x192;eip=0x002611; 	J(JNZ(loc_12603));	// 5603 jnz     short loc_12603 ;~ 00D0:2611
loc_12613:
	// 4995 
cs=0x192;eip=0x002613; 	T(MOV(cl, *(raddr(ds,si+6))));	// 5606 mov     cl, [si+6] ;~ 00D0:2613
cs=0x192;eip=0x002616; 	T(DEC(ch));	// 5607 dec     ch ;~ 00D0:2616
cs=0x192;eip=0x002618; 	J(JNZ(loc_125be));	// 5608 jnz     short loc_125BE ;~ 00D0:2618
cs=0x192;eip=0x00261a; 	J(JMP(loc_12636));	// 5609 jmp     short loc_12636 ;~ 00D0:261A
loc_1261d:
	// 4996 
cs=0x192;eip=0x00261d; 	T(SUB(bx, 0x240));	// 5615 sub     bx, 240h ;~ 00D0:261D
cs=0x192;eip=0x002621; 	T(CMP(*(raddr(ds,bx)), 0x0E0));	// 5616 cmp     byte ptr [bx], 0E0h ; 'à' ;~ 00D0:2621
cs=0x192;eip=0x002624; 	J(JNC(loc_12613));	// 5617 jnb     short loc_12613 ;~ 00D0:2624
cs=0x192;eip=0x002626; 	T(MOV(cx, 5));	// 5618 mov     cx, 5 ;~ 00D0:2626
cs=0x192;eip=0x002629; 	X(PUSH(si));	// 5619 push    si ;~ 00D0:2629
cs=0x192;eip=0x00262a; 	J(CALL(sub_11f89,0));	// 5620 call    sub_11F89 ;~ 00D0:262A
cs=0x192;eip=0x00262d; 	J(CALL(sub_12023,0));	// 5621 call    sub_12023 ;~ 00D0:262D
cs=0x192;eip=0x002630; 	X(POP(si));	// 5622 pop     si ;~ 00D0:2630
cs=0x192;eip=0x002631; 	T(CMP(*(raddr(ds,si)), 0x0E0));	// 5623 cmp     byte ptr [si], 0E0h ; 'à' ;~ 00D0:2631
cs=0x192;eip=0x002634; 	J(JC(loc_125ea));	// 5624 jb      short loc_125EA ;~ 00D0:2634
loc_12636:
	// 4997 
cs=0x192;eip=0x002636; 	X(POP(cx));	// 5627 pop     cx ;~ 00D0:2636
cs=0x192;eip=0x002637; 	T(MOV(bx, *(dw*)(raddr(ds,si+3))));	// 5628 mov     bx, [si+3] ;~ 00D0:2637
cs=0x192;eip=0x00263a; 	T(ADD(bx, 0x6C4));	// 5629 add     bx, 6C4h ;~ 00D0:263A
cs=0x192;eip=0x00263e; 	T(MOV(al, *(raddr(ds,si))));	// 5630 mov     al, [si] ;~ 00D0:263E
cs=0x192;eip=0x002640; 	X(MOV(*(raddr(ds,bx)), al));	// 5631 mov     [bx], al ;~ 00D0:2640
cs=0x192;eip=0x002642; 	T(XOR(al, 1));	// 5632 xor     al, 1 ;~ 00D0:2642
cs=0x192;eip=0x002644; 	X(MOV(*(raddr(ds,si)), al));	// 5633 mov     [si], al ;~ 00D0:2644
cs=0x192;eip=0x002646; 	T(SUB(bx, 0x6C0));	// 5634 sub     bx, 6C0h ;~ 00D0:2646
cs=0x192;eip=0x00264a; 	X(MOV(*(raddr(ds,bx)), 1));	// 5635 mov     byte ptr [bx], 1 ;~ 00D0:264A
loc_1264d:
	// 4998 
cs=0x192;eip=0x00264d; 	T(ADD(si, 7));	// 5639 add     si, 7 ;~ 00D0:264D
cs=0x192;eip=0x002650; 	X(DEC(byte_19e0a));	// 5640 dec     byte_19E0A ;~ 00D0:2650
cs=0x192;eip=0x002654; 	J(JZ(locret_12659));	// 5641 jz      short locret_12659 ;~ 00D0:2654
cs=0x192;eip=0x002656; 	J(JMP(loc_125a6));	// 5642 jmp     loc_125A6 ;~ 00D0:2656
locret_12659:
	// 4999 
cs=0x192;eip=0x002659; 	J(RETN(0));	// 5646 retn ;~ 00D0:2659
sub_1265a:
	// 5653 
cs=0x192;eip=0x00265a; 	T(CMP(*(raddr(ds,si+1)), 0));	// 5654 cmp     byte ptr [si+1], 0 ;~ 00D0:265A
ret_d0_265e:
	// 5000 
cs=0x192;eip=0x00265e; 	J(JZ(loc_1266a));	// 5655 jz      short loc_1266A ;~ 00D0:265E
cs=0x192;eip=0x002660; 	X(DEC(*(raddr(ds,si+1))));	// 5656 dec     byte ptr [si+1] ;~ 00D0:2660
cs=0x192;eip=0x002663; 	T(MOV(dx, 0x0FFE0));	// 5657 mov     dx, 0FFE0h ;~ 00D0:2663
loc_12666:
	// 5001 
cs=0x192;eip=0x002666; 	X(ADD(*(dw*)(raddr(ds,si+3)), dx));	// 5661 add     [si+3], dx ;~ 00D0:2666
cs=0x192;eip=0x002669; 	J(RETN(0));	// 5662 retn ;~ 00D0:2669
loc_1266a:
	// 5002 
cs=0x192;eip=0x00266a; 	X(MOV(*(raddr(ds,si)), 0));	// 5667 mov     byte ptr [si], 0 ;~ 00D0:266A
cs=0x192;eip=0x00266d; 	X(POP(dx));	// 5668 pop     dx ;~ 00D0:266D
cs=0x192;eip=0x00266e; 	X(POP(dx));	// 5669 pop     dx ;~ 00D0:266E
cs=0x192;eip=0x00266f; 	J(JMP(loc_1264d));	// 5670 jmp     short loc_1264D ;~ 00D0:266F
sub_12671:
	// 5677 
cs=0x192;eip=0x002671; 	T(CMP(*(raddr(ds,si+1)), 0x11));	// 5678 cmp     byte ptr [si+1], 11h ;~ 00D0:2671
ret_d0_2675:
	// 5003 
cs=0x192;eip=0x002675; 	J(JZ(loc_1266a));	// 5679 jz      short loc_1266A ;~ 00D0:2675
cs=0x192;eip=0x002677; 	X(INC(*(raddr(ds,si+1))));	// 5680 inc     byte ptr [si+1] ;~ 00D0:2677
cs=0x192;eip=0x00267a; 	T(MOV(dx, 0x20));	// 5681 mov     dx, 20h ; ' ' ;~ 00D0:267A
cs=0x192;eip=0x00267d; 	J(JMP(loc_12666));	// 5682 jmp     short loc_12666 ;~ 00D0:267D
sub_1267f:
	// 5689 
cs=0x192;eip=0x00267f; 	T(CMP(*(raddr(ds,si+2)), 0));	// 5690 cmp     byte ptr [si+2], 0 ;~ 00D0:267F
ret_d0_2683:
	// 5004 
cs=0x192;eip=0x002683; 	J(JZ(loc_1266a));	// 5691 jz      short loc_1266A ;~ 00D0:2683
cs=0x192;eip=0x002685; 	X(DEC(*(raddr(ds,si+2))));	// 5692 dec     byte ptr [si+2] ;~ 00D0:2685
cs=0x192;eip=0x002688; 	T(MOV(dx, 0x0FFFF));	// 5693 mov     dx, 0FFFFh ;~ 00D0:2688
cs=0x192;eip=0x00268b; 	J(JMP(loc_12666));	// 5694 jmp     short loc_12666 ;~ 00D0:268B
sub_1268d:
	// 5701 
cs=0x192;eip=0x00268d; 	T(CMP(*(raddr(ds,si+2)), 0x1F));	// 5702 cmp     byte ptr [si+2], 1Fh ;~ 00D0:268D
ret_d0_2691:
	// 5005 
cs=0x192;eip=0x002691; 	J(JZ(loc_1266a));	// 5703 jz      short loc_1266A ;~ 00D0:2691
cs=0x192;eip=0x002693; 	X(INC(*(raddr(ds,si+2))));	// 5704 inc     byte ptr [si+2] ;~ 00D0:2693
cs=0x192;eip=0x002696; 	T(MOV(dx, 1));	// 5705 mov     dx, 1 ;~ 00D0:2696
cs=0x192;eip=0x002699; 	J(JMP(loc_12666));	// 5706 jmp     short loc_12666 ;~ 00D0:2699
sub_1269b:
	// 5713 
cs=0x192;eip=0x00269b; 	T(CMP(byte_16b9b, 0));	// 5715 cmp     byte_16B9B, 0 ;~ 00D0:269B
ret_d0_26a0:
	// 5006 
cs=0x192;eip=0x0026a0; 	J(JZ(loc_126a7));	// 5716 jz      short loc_126A7 ;~ 00D0:26A0
cs=0x192;eip=0x0026a2; 	X(DEC(byte_16b9b));	// 5717 dec     byte_16B9B ;~ 00D0:26A2
locret_126a6:
	// 5007 
cs=0x192;eip=0x0026a6; 	J(RETN(0));	// 5721 retn ;~ 00D0:26A6
loc_126a7:
	// 5008 
cs=0x192;eip=0x0026a7; 	T(CMP(*(db*)(((db*)&word_14a36)), 0x1F));	// 5725 cmp     byte ptr word_14A36, 1Fh ;~ 00D0:26A7
cs=0x192;eip=0x0026ac; 	J(JZ(locret_126a6));	// 5726 jz      short locret_126A6 ;~ 00D0:26AC
cs=0x192;eip=0x0026ae; 	T(MOV(bx, word_14a1c));	// 5727 mov     bx, word_14A1C ;~ 00D0:26AE
cs=0x192;eip=0x0026b2; 	T(MOV(al, *(raddr(ds,bx))));	// 5728 mov     al, [bx] ;~ 00D0:26B2
cs=0x192;eip=0x0026b4; 	T(CMP(al, 0x1D));	// 5729 cmp     al, 1Dh ;~ 00D0:26B4
cs=0x192;eip=0x0026b6; 	J(JZ(loc_126c8));	// 5730 jz      short loc_126C8 ;~ 00D0:26B6
cs=0x192;eip=0x0026b8; 	T(CMP(al, 0x23));	// 5731 cmp     al, 23h ; '#' ;~ 00D0:26B8
cs=0x192;eip=0x0026ba; 	J(JZ(loc_126c8));	// 5732 jz      short loc_126C8 ;~ 00D0:26BA
cs=0x192;eip=0x0026bc; 	T(CMP(al, 0x22));	// 5733 cmp     al, 22h ; '"' ;~ 00D0:26BC
cs=0x192;eip=0x0026be; 	J(JZ(loc_126c8));	// 5734 jz      short loc_126C8 ;~ 00D0:26BE
cs=0x192;eip=0x0026c0; 	T(CMP(al, 0x26));	// 5735 cmp     al, 26h ; '&' ;~ 00D0:26C0
cs=0x192;eip=0x0026c2; 	J(JZ(loc_126c8));	// 5736 jz      short loc_126C8 ;~ 00D0:26C2
cs=0x192;eip=0x0026c4; 	T(CMP(al, 0x2A));	// 5737 cmp     al, 2Ah ; '*' ;~ 00D0:26C4
cs=0x192;eip=0x0026c6; 	J(JNZ(locret_126a6));	// 5738 jnz     short locret_126A6 ;~ 00D0:26C6
loc_126c8:
	// 5009 
cs=0x192;eip=0x0026c8; 	J(CALL(sub_1107c,0));	// 5742 call    sub_1107C ;~ 00D0:26C8
cs=0x192;eip=0x0026cb; 	T(AND(al, 0x3F));	// 5743 and     al, 3Fh ;~ 00D0:26CB
cs=0x192;eip=0x0026cd; 	T(INC(al));	// 5744 inc     al ;~ 00D0:26CD
cs=0x192;eip=0x0026cf; 	T(CMP(al, 5));	// 5745 cmp     al, 5 ;~ 00D0:26CF
cs=0x192;eip=0x0026d1; 	J(JNC(loc_1271b));	// 5746 jnb     short loc_1271B ;~ 00D0:26D1
cs=0x192;eip=0x0026d3; 	T(MOV(bx, 0x6FB2));	// 5747 mov     bx, 6FB2h ;~ 00D0:26D3
loc_126d6:
	// 5010 
cs=0x192;eip=0x0026d6; 	T(ADD(bx, 7));	// 5750 add     bx, 7 ;~ 00D0:26D6
cs=0x192;eip=0x0026d9; 	T(DEC(al));	// 5751 dec     al ;~ 00D0:26D9
cs=0x192;eip=0x0026db; 	J(JNZ(loc_126d6));	// 5752 jnz     short loc_126D6 ;~ 00D0:26DB
cs=0x192;eip=0x0026dd; 	T(CMP(*(raddr(ds,bx)), 0));	// 5753 cmp     byte ptr [bx], 0 ;~ 00D0:26DD
cs=0x192;eip=0x0026e0; 	J(JNZ(loc_1271b));	// 5754 jnz     short loc_1271B ;~ 00D0:26E0
cs=0x192;eip=0x0026e2; 	X(MOV(*(raddr(ds,bx)), 0x0E0));	// 5755 mov     byte ptr [bx], 0E0h ; 'à' ;~ 00D0:26E2
cs=0x192;eip=0x0026e5; 	T(INC(bx));	// 5756 inc     bx ;~ 00D0:26E5
cs=0x192;eip=0x0026e6; 	X(MOV(*(raddr(ds,bx)), 9));	// 5757 mov     byte ptr [bx], 9 ;~ 00D0:26E6
cs=0x192;eip=0x0026e9; 	T(INC(bx));	// 5758 inc     bx ;~ 00D0:26E9
cs=0x192;eip=0x0026ea; 	X(MOV(*(raddr(ds,bx)), 0));	// 5759 mov     byte ptr [bx], 0 ;~ 00D0:26EA
cs=0x192;eip=0x0026ed; 	T(INC(bx));	// 5760 inc     bx ;~ 00D0:26ED
cs=0x192;eip=0x0026ee; 	X(MOV(*(dw*)(raddr(ds,bx)), 0x120));	// 5761 mov     word ptr [bx], 120h ;~ 00D0:26EE
cs=0x192;eip=0x0026f2; 	T(INC(bx));	// 5762 inc     bx ;~ 00D0:26F2
cs=0x192;eip=0x0026f3; 	T(INC(bx));	// 5763 inc     bx ;~ 00D0:26F3
cs=0x192;eip=0x0026f4; 	J(CALL(sub_1107c,0));	// 5764 call    sub_1107C ;~ 00D0:26F4
cs=0x192;eip=0x0026f7; 	T(AND(al, 0x0E));	// 5765 and     al, 0Eh ;~ 00D0:26F7
cs=0x192;eip=0x0026f9; 	T(CBW);	// 5766 cbw ;~ 00D0:26F9
cs=0x192;eip=0x0026fa; 	T(ADD(ax, 0x6FD5));	// 5767 add     ax, 6FD5h ;~ 00D0:26FA
cs=0x192;eip=0x0026fd; 	T(MOV(si, ax));	// 5768 mov     si, ax ;~ 00D0:26FD
cs=0x192;eip=0x0026ff; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 5769 mov     ax, [si] ;~ 00D0:26FF
cs=0x192;eip=0x002701; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 5770 mov     [bx], ax ;~ 00D0:2701
cs=0x192;eip=0x002703; 	T(INC(bx));	// 5771 inc     bx ;~ 00D0:2703
cs=0x192;eip=0x002704; 	J(CALL(sub_1107c,0));	// 5772 call    sub_1107C ;~ 00D0:2704
cs=0x192;eip=0x002707; 	T(AND(al, 1));	// 5773 and     al, 1 ;~ 00D0:2707
cs=0x192;eip=0x002709; 	J(JZ(loc_1271b));	// 5774 jz      short loc_1271B ;~ 00D0:2709
cs=0x192;eip=0x00270b; 	X(XOR(*(raddr(ds,bx)), 0x0C));	// 5775 xor     byte ptr [bx], 0Ch ;~ 00D0:270B
cs=0x192;eip=0x00270e; 	T(DEC(bx));	// 5776 dec     bx ;~ 00D0:270E
cs=0x192;eip=0x00270f; 	X(XOR(*(raddr(ds,bx)), 0x0C));	// 5777 xor     byte ptr [bx], 0Ch ;~ 00D0:270F
cs=0x192;eip=0x002712; 	T(DEC(bx));	// 5778 dec     bx ;~ 00D0:2712
cs=0x192;eip=0x002713; 	T(DEC(bx));	// 5779 dec     bx ;~ 00D0:2713
cs=0x192;eip=0x002714; 	X(ADD(*(dw*)(raddr(ds,bx)), 0x1F));	// 5780 add     word ptr [bx], 1Fh ;~ 00D0:2714
cs=0x192;eip=0x002717; 	T(DEC(bx));	// 5781 dec     bx ;~ 00D0:2717
cs=0x192;eip=0x002718; 	X(MOV(*(raddr(ds,bx)), 0x1F));	// 5782 mov     byte ptr [bx], 1Fh ;~ 00D0:2718
loc_1271b:
	// 5011 
cs=0x192;eip=0x00271b; 	T(MOV(cx, 4));	// 5786 mov     cx, 4 ;~ 00D0:271B
cs=0x192;eip=0x00271e; 	T(MOV(si, 0x6FB9));	// 5787 mov     si, 6FB9h ;~ 00D0:271E
loc_12721:
	// 5012 
cs=0x192;eip=0x002721; 	T(MOV(al, *(raddr(ds,si+1))));	// 5790 mov     al, [si+1] ;~ 00D0:2721
cs=0x192;eip=0x002724; 	T(CMP(al, 8));	// 5791 cmp     al, 8 ;~ 00D0:2724
cs=0x192;eip=0x002726; 	J(JZ(loc_1272c));	// 5792 jz      short loc_1272C ;~ 00D0:2726
cs=0x192;eip=0x002728; 	T(CMP(al, 0x0A));	// 5793 cmp     al, 0Ah ;~ 00D0:2728
cs=0x192;eip=0x00272a; 	J(JNZ(loc_12730));	// 5794 jnz     short loc_12730 ;~ 00D0:272A
loc_1272c:
	// 5013 
cs=0x192;eip=0x00272c; 	X(XOR(*(raddr(ds,si+5)), 3));	// 5797 xor     byte ptr [si+5], 3 ;~ 00D0:272C
loc_12730:
	// 5014 
cs=0x192;eip=0x002730; 	T(ADD(si, 7));	// 5800 add     si, 7 ;~ 00D0:2730
cs=0x192;eip=0x002733; 	J(LOOP(loc_12721));	// 5801 loop    loc_12721 ;~ 00D0:2733
cs=0x192;eip=0x002735; 	J(RETN(0));	// 5802 retn ;~ 00D0:2735
seg000_2736_proc:
	// 5808 
loc_12736:
	// 5015 
cs=0x192;eip=0x002736; 	J(CALL(sub_12a25,0));	// 5809 call    sub_12A25 ;~ 00D0:2736
loc_12739:
	// 5016 
cs=0x192;eip=0x002739; 	J(CALL(sub_12a93,0));	// 5813 call    sub_12A93 ;~ 00D0:2739
cs=0x192;eip=0x00273c; 	T(MOV(si, 0x7519));	// 5814 mov     si, 7519h ;~ 00D0:273C
cs=0x192;eip=0x00273f; 	J(CALL(sub_104b7,0));	// 5815 call    sub_104B7 ;~ 00D0:273F
cs=0x192;eip=0x002742; 	J(CALL(sub_12a18,0));	// 5816 call    sub_12A18 ;~ 00D0:2742
loc_12745:
	// 5017 
cs=0x192;eip=0x002745; 	J(CALL(sub_12ad8,0));	// 5819 call    sub_12AD8 ;~ 00D0:2745
cs=0x192;eip=0x002748; 	J(JNZ(loc_1274d));	// 5820 jnz     short loc_1274D ;~ 00D0:2748
loc_1274a:
	// 5018 
cs=0x192;eip=0x00274a; 	J(JMP(loc_12897));	// 5823 jmp     loc_12897 ;~ 00D0:274A
loc_1274d:
	// 5019 
cs=0x192;eip=0x00274d; 	J(CALL(sub_12a13,0));	// 5827 call    sub_12A13 ;~ 00D0:274D
cs=0x192;eip=0x002750; 	J(CALL(sub_12a05,0));	// 5828 call    sub_12A05 ;~ 00D0:2750
cs=0x192;eip=0x002753; 	T(CMP(al, 3));	// 5829 cmp     al, 3 ;~ 00D0:2753
cs=0x192;eip=0x002755; 	J(JNZ(loc_1275a));	// 5830 jnz     short loc_1275A ;~ 00D0:2755
cs=0x192;eip=0x002757; 	J(JMP(loc_1012d));	// 5831 jmp     loc_1012D ;~ 00D0:2757
loc_1275a:
	// 5020 
cs=0x192;eip=0x00275a; 	T(CMP(al, 0x52));	// 5835 cmp     al, 52h ; 'R' ;~ 00D0:275A
cs=0x192;eip=0x00275c; 	J(JZ(loc_127d1));	// 5836 jz      short loc_127D1 ;~ 00D0:275C
cs=0x192;eip=0x00275e; 	T(CMP(al, 0x4D));	// 5837 cmp     al, 4Dh ; 'M' ;~ 00D0:275E
cs=0x192;eip=0x002760; 	J(JZ(loc_1277f));	// 5838 jz      short loc_1277F ;~ 00D0:2760
cs=0x192;eip=0x002762; 	T(CMP(al, 0x53));	// 5839 cmp     al, 53h ; 'S' ;~ 00D0:2762
cs=0x192;eip=0x002764; 	J(JZ(loc_1276f));	// 5840 jz      short loc_1276F ;~ 00D0:2764
cs=0x192;eip=0x002766; 	T(CMP(al, 0x0E));	// 5841 cmp     al, 0Eh ;~ 00D0:2766
cs=0x192;eip=0x002768; 	J(JNZ(loc_1274a));	// 5842 jnz     short loc_1274A ;~ 00D0:2768
cs=0x192;eip=0x00276a; 	J(CALL(sub_12772,0));	// 5843 call    sub_12772 ;~ 00D0:276A
cs=0x192;eip=0x00276d; 	J(JMP(loc_12745));	// 5844 jmp     short loc_12745 ;~ 00D0:276D
loc_1276f:
	// 5021 
cs=0x192;eip=0x00276f; 	J(JMP(loc_1028e));	// 5848 jmp     loc_1028E ;~ 00D0:276F
sub_12772:
	// 5854 
cs=0x192;eip=0x002772; 	X(XOR(byte_14a12, 2));	// 5856 xor     byte_14A12, 2 ;~ 00D0:2772
ret_d0_2777:
	// 5022 
cs=0x192;eip=0x002777; 	T(MOV(al, byte_1a716));	// 5857 mov     al, byte_1A716 ;~ 00D0:2777
cs=0x192;eip=0x00277a; 	T(AND(al, 0x0FC));	// 5858 and     al, 0FCh ;~ 00D0:277A
cs=0x192;eip=0x00277c; 	S(OUT(0x61, al));	// 5859 out     61h, al         ; PC/XT PPI port B bits: ;~ 00D0:277C
cs=0x192;eip=0x00277e; 	J(RETN(0));	// 5867 retn ;~ 00D0:277E
seg000_277f_proc:
	// 5873 
loc_1277f:
	// 5023 
cs=0x192;eip=0x00277f; 	J(CALL(sub_12a93,0));	// 5874 call    sub_12A93 ;~ 00D0:277F
cs=0x192;eip=0x002782; 	T(MOV(si, 0x74AF));	// 5875 mov     si, 74AFh ;~ 00D0:2782
cs=0x192;eip=0x002785; 	J(CALL(sub_104b7,0));	// 5876 call    sub_104B7 ;~ 00D0:2785
cs=0x192;eip=0x002788; 	J(CALL(sub_12a18,0));	// 5877 call    sub_12A18 ;~ 00D0:2788
cs=0x192;eip=0x00278b; 	J(CALL(sub_12970,0));	// 5878 call    sub_12970 ;~ 00D0:278B
cs=0x192;eip=0x00278e; 	T(CLD);	// 5879 cld ;~ 00D0:278E
cs=0x192;eip=0x00278f; 	T(MOV(bx, 0x744C));	// 5880 mov     bx, 744Ch ;~ 00D0:278F
cs=0x192;eip=0x002792; 	T(MOV(cx, 9));	// 5881 mov     cx, 9 ;~ 00D0:2792
loc_12795:
	// 5024 
cs=0x192;eip=0x002795; 	T(MOV(si, 0x743A));	// 5884 mov     si, 743Ah ;~ 00D0:2795
cs=0x192;eip=0x002798; 	T(MOV(ah, 0x0B));	// 5885 mov     ah, 0Bh ;~ 00D0:2798
cs=0x192;eip=0x00279a; 	X(PUSH(bx));	// 5886 push    bx ;~ 00D0:279A
loc_1279b:
	// 5025 
cs=0x192;eip=0x00279b; 	T(LODSB);	// 5889 lodsb ;~ 00D0:279B
cs=0x192;eip=0x00279c; 	T(CMP(al, *(raddr(ds,bx))));	// 5890 cmp     al, [bx] ;~ 00D0:279C
cs=0x192;eip=0x00279e; 	J(JNZ(loc_127b9));	// 5891 jnz     short loc_127B9 ;~ 00D0:279E
cs=0x192;eip=0x0027a0; 	T(INC(bx));	// 5892 inc     bx ;~ 00D0:27A0
cs=0x192;eip=0x0027a1; 	T(DEC(ah));	// 5893 dec     ah ;~ 00D0:27A1
cs=0x192;eip=0x0027a3; 	J(JNZ(loc_1279b));	// 5894 jnz     short loc_1279B ;~ 00D0:27A3
cs=0x192;eip=0x0027a5; 	X(POP(bx));	// 5895 pop     bx ;~ 00D0:27A5
cs=0x192;eip=0x0027a6; 	X(MOV(byte_14a26, cl));	// 5896 mov     byte_14A26, cl ;~ 00D0:27A6
cs=0x192;eip=0x0027aa; 	T(ADD(cl, 0x30));	// 5897 add     cl, 30h ; '0' ;~ 00D0:27AA
cs=0x192;eip=0x0027ad; 	X(MOV(byte_1a449, cl));	// 5898 mov     byte_1A449, cl ;~ 00D0:27AD
cs=0x192;eip=0x0027b1; 	T(MOV(si, 0x75DC));	// 5899 mov     si, 75DCh ;~ 00D0:27B1
cs=0x192;eip=0x0027b4; 	J(CALL(sub_104b7,0));	// 5900 call    sub_104B7 ;~ 00D0:27B4
cs=0x192;eip=0x0027b7; 	J(JMP(loc_127c5));	// 5901 jmp     short loc_127C5 ;~ 00D0:27B7
loc_127b9:
	// 5026 
cs=0x192;eip=0x0027b9; 	X(POP(bx));	// 5905 pop     bx ;~ 00D0:27B9
cs=0x192;eip=0x0027ba; 	T(ADD(bx, 0x0B));	// 5906 add     bx, 0Bh ;~ 00D0:27BA
cs=0x192;eip=0x0027bd; 	J(LOOP(loc_12795));	// 5907 loop    loc_12795 ;~ 00D0:27BD
cs=0x192;eip=0x0027bf; 	T(MOV(si, 0x74F6));	// 5908 mov     si, 74F6h ;~ 00D0:27BF
cs=0x192;eip=0x0027c2; 	J(CALL(sub_104b7,0));	// 5909 call    sub_104B7 ;~ 00D0:27C2
loc_127c5:
	// 5027 
cs=0x192;eip=0x0027c5; 	T(MOV(si, 0x75BB));	// 5913 mov     si, 75BBh ;~ 00D0:27C5
cs=0x192;eip=0x0027c8; 	J(CALL(sub_104b7,0));	// 5914 call    sub_104B7 ;~ 00D0:27C8
cs=0x192;eip=0x0027cb; 	J(CALL(sub_12a10,0));	// 5915 call    sub_12A10 ;~ 00D0:27CB
cs=0x192;eip=0x0027ce; 	J(JMP(loc_12739));	// 5916 jmp     loc_12739 ;~ 00D0:27CE
loc_127d1:
	// 5028 
cs=0x192;eip=0x0027d1; 	J(CALL(sub_12a93,0));	// 5920 call    sub_12A93 ;~ 00D0:27D1
cs=0x192;eip=0x0027d4; 	T(MOV(si, 0x75F4));	// 5921 mov     si, 75F4h ;~ 00D0:27D4
cs=0x192;eip=0x0027d7; 	J(CALL(sub_104b7,0));	// 5922 call    sub_104B7 ;~ 00D0:27D7
cs=0x192;eip=0x0027da; 	J(CALL(sub_12a18,0));	// 5923 call    sub_12A18 ;~ 00D0:27DA
cs=0x192;eip=0x0027dd; 	X(MOV(byte_1a46b, 8));	// 5924 mov     byte_1A46B, 8 ;~ 00D0:27DD
cs=0x192;eip=0x0027e2; 	T(MOV(si, 0x761E));	// 5925 mov     si, 761Eh ;~ 00D0:27E2
cs=0x192;eip=0x0027e5; 	T(MOV(bx, 0x5800));	// 5926 mov     bx, 5800h ;~ 00D0:27E5
cs=0x192;eip=0x0027e8; 	T(MOV(cx, 5));	// 5927 mov     cx, 5 ;~ 00D0:27E8
loc_127eb:
	// 5029 
cs=0x192;eip=0x0027eb; 	X(PUSH(cx));	// 5930 push    cx ;~ 00D0:27EB
cs=0x192;eip=0x0027ec; 	T(MOV(di, 0x760C));	// 5931 mov     di, 760Ch ;~ 00D0:27EC
cs=0x192;eip=0x0027ef; 	T(MOV(cx, 5));	// 5932 mov     cx, 5 ;~ 00D0:27EF
cs=0x192;eip=0x0027f2; 	T(CLD);	// 5933 cld ;~ 00D0:27F2
	// 5934 rep movsb ;~ 00D0:27F3
cs=0x192;eip=0x0027f3; 	X(	REP MOVSB);	// 5934 rep movsb ;~ 00D0:27F3
cs=0x192;eip=0x0027f5; 	X(PUSH(si));	// 5935 push    si ;~ 00D0:27F5
cs=0x192;eip=0x0027f6; 	X(PUSH(bx));	// 5936 push    bx ;~ 00D0:27F6
cs=0x192;eip=0x0027f7; 	T(MOV(si, 0x7607));	// 5937 mov     si, 7607h ;~ 00D0:27F7
cs=0x192;eip=0x0027fa; 	J(CALL(sub_104b7,0));	// 5938 call    sub_104B7 ;~ 00D0:27FA
cs=0x192;eip=0x0027fd; 	J(CALL(sub_12a10,0));	// 5939 call    sub_12A10 ;~ 00D0:27FD
cs=0x192;eip=0x002800; 	X(MOV(byte_1a47c, 0x21));	// 5940 mov     byte_1A47C, 21h ; '!' ;~ 00D0:2800
cs=0x192;eip=0x002805; 	J(CALL(sub_12a05,0));	// 5941 call    sub_12A05 ;~ 00D0:2805
cs=0x192;eip=0x002808; 	T(OR(al, al));	// 5942 or      al, al ;~ 00D0:2808
cs=0x192;eip=0x00280a; 	J(JZ(loc_1280e));	// 5943 jz      short loc_1280E ;~ 00D0:280A
cs=0x192;eip=0x00280c; 	T(MOV(ah, al));	// 5944 mov     ah, al ;~ 00D0:280C
loc_1280e:
	// 5030 
cs=0x192;eip=0x00280e; 	T(CMP(al, 0x41));	// 5947 cmp     al, 41h ; 'A' ;~ 00D0:280E
cs=0x192;eip=0x002810; 	J(JC(loc_1281c));	// 5948 jb      short loc_1281C ;~ 00D0:2810
cs=0x192;eip=0x002812; 	T(CMP(al, 0x5B));	// 5949 cmp     al, 5Bh ; '[' ;~ 00D0:2812
cs=0x192;eip=0x002814; 	J(JNC(loc_12827));	// 5950 jnb     short loc_12827 ;~ 00D0:2814
cs=0x192;eip=0x002816; 	T(ADD(ah, 0x20));	// 5951 add     ah, 20h ; ' ' ;~ 00D0:2816
cs=0x192;eip=0x002819; 	J(JMP(loc_12824));	// 5952 jmp     short loc_12824 ;~ 00D0:2819
loc_1281c:
	// 5031 
cs=0x192;eip=0x00281c; 	T(CMP(al, 0x30));	// 5959 cmp     al, 30h ; '0' ;~ 00D0:281C
cs=0x192;eip=0x00281e; 	J(JC(loc_12827));	// 5960 jb      short loc_12827 ;~ 00D0:281E
cs=0x192;eip=0x002820; 	T(CMP(al, 0x3A));	// 5961 cmp     al, 3Ah ; ':' ;~ 00D0:2820
cs=0x192;eip=0x002822; 	J(JNC(loc_12827));	// 5962 jnb     short loc_12827 ;~ 00D0:2822
loc_12824:
	// 5032 
cs=0x192;eip=0x002824; 	X(MOV(byte_1a47c, al));	// 5965 mov     byte_1A47C, al ;~ 00D0:2824
loc_12827:
	// 5033 
cs=0x192;eip=0x002827; 	X(PUSH(ax));	// 5969 push    ax ;~ 00D0:2827
cs=0x192;eip=0x002828; 	T(MOV(si, 0x761C));	// 5970 mov     si, 761Ch ;~ 00D0:2828
cs=0x192;eip=0x00282b; 	J(CALL(sub_104b7,0));	// 5971 call    sub_104B7 ;~ 00D0:282B
cs=0x192;eip=0x00282e; 	X(ADD(byte_1a46b, 2));	// 5972 add     byte_1A46B, 2 ;~ 00D0:282E
cs=0x192;eip=0x002833; 	X(POP(ax));	// 5973 pop     ax ;~ 00D0:2833
cs=0x192;eip=0x002834; 	X(POP(bx));	// 5974 pop     bx ;~ 00D0:2834
cs=0x192;eip=0x002835; 	X(MOV(*(raddr(ds,bx)), al));	// 5975 mov     [bx], al ;~ 00D0:2835
cs=0x192;eip=0x002837; 	T(INC(bx));	// 5976 inc     bx ;~ 00D0:2837
cs=0x192;eip=0x002838; 	X(MOV(*(raddr(ds,bx)), ah));	// 5977 mov     [bx], ah ;~ 00D0:2838
cs=0x192;eip=0x00283a; 	T(ADD(bx, 3));	// 5978 add     bx, 3 ;~ 00D0:283A
cs=0x192;eip=0x00283d; 	X(POP(si));	// 5979 pop     si ;~ 00D0:283D
cs=0x192;eip=0x00283e; 	X(POP(cx));	// 5980 pop     cx ;~ 00D0:283E
cs=0x192;eip=0x00283f; 	J(LOOP(loc_127eb));	// 5981 loop    loc_127EB ;~ 00D0:283F
cs=0x192;eip=0x002841; 	J(JMP(loc_127c5));	// 5982 jmp     short loc_127C5 ;~ 00D0:2841
loc_12843:
	// 5034 
cs=0x192;eip=0x002843; 	J(CALL(sub_12a25,0));	// 5988 call    sub_12A25 ;~ 00D0:2843
cs=0x192;eip=0x002846; 	T(MOV(cx, 0x0F));	// 5989 mov     cx, 0Fh ;~ 00D0:2846
cs=0x192;eip=0x002849; 	T(MOV(bx, 0x76AE));	// 5990 mov     bx, 76AEh ;~ 00D0:2849
loc_1284c:
	// 5035 
cs=0x192;eip=0x00284c; 	T(MOV(si, 0x195E));	// 5993 mov     si, 195Eh ;~ 00D0:284C
cs=0x192;eip=0x00284f; 	X(PUSH(bx));	// 5994 push    bx ;~ 00D0:284F
cs=0x192;eip=0x002850; 	X(PUSH(cx));	// 5995 push    cx ;~ 00D0:2850
cs=0x192;eip=0x002851; 	T(MOV(cx, 6));	// 5996 mov     cx, 6 ;~ 00D0:2851
loc_12854:
	// 5036 
cs=0x192;eip=0x002854; 	T(LODSB);	// 5999 lodsb ;~ 00D0:2854
cs=0x192;eip=0x002855; 	T(CMP(al, *(raddr(ds,bx))));	// 6000 cmp     al, [bx] ;~ 00D0:2855
cs=0x192;eip=0x002857; 	J(JNZ(loc_12866));	// 6001 jnz     short loc_12866 ;~ 00D0:2857
cs=0x192;eip=0x002859; 	T(INC(bx));	// 6002 inc     bx ;~ 00D0:2859
cs=0x192;eip=0x00285a; 	J(LOOP(loc_12854));	// 6003 loop    loc_12854 ;~ 00D0:285A
loc_1285c:
	// 5037 
cs=0x192;eip=0x00285c; 	X(POP(cx));	// 6006 pop     cx ;~ 00D0:285C
cs=0x192;eip=0x00285d; 	X(POP(bx));	// 6007 pop     bx ;~ 00D0:285D
cs=0x192;eip=0x00285e; 	T(ADD(bx, 0x11));	// 6008 add     bx, 11h ;~ 00D0:285E
cs=0x192;eip=0x002861; 	J(LOOP(loc_1284c));	// 6009 loop    loc_1284C ;~ 00D0:2861
cs=0x192;eip=0x002863; 	J(JMP(loc_1289a));	// 6010 jmp     short loc_1289A ;~ 00D0:2863
loc_12866:
	// 5038 
cs=0x192;eip=0x002866; 	J(JC(loc_1285c));	// 6015 jb      short loc_1285C ;~ 00D0:2866
cs=0x192;eip=0x002868; 	T(MOV(si, 0x7637));	// 6016 mov     si, 7637h ;~ 00D0:2868
cs=0x192;eip=0x00286b; 	J(CALL(sub_104b7,0));	// 6017 call    sub_104B7 ;~ 00D0:286B
cs=0x192;eip=0x00286e; 	J(CALL(sub_12970,0));	// 6018 call    sub_12970 ;~ 00D0:286E
cs=0x192;eip=0x002871; 	X(POP(cx));	// 6019 pop     cx ;~ 00D0:2871
cs=0x192;eip=0x002872; 	X(POP(bx));	// 6020 pop     bx ;~ 00D0:2872
cs=0x192;eip=0x002873; 	T(MOV(si, 0x77AC));	// 6021 mov     si, 77ACh ;~ 00D0:2873
cs=0x192;eip=0x002876; 	T(MOV(di, 0x77BD));	// 6022 mov     di, 77BDh ;~ 00D0:2876
cs=0x192;eip=0x002879; 	T(STD);	// 6023 std ;~ 00D0:2879
loc_1287a:
	// 5039 
cs=0x192;eip=0x00287a; 	X(PUSH(cx));	// 6026 push    cx ;~ 00D0:287A
cs=0x192;eip=0x00287b; 	T(MOV(cx, 0x11));	// 6027 mov     cx, 11h ;~ 00D0:287B
	// 6028 rep movsb ;~ 00D0:287E
cs=0x192;eip=0x00287e; 	X(	REP MOVSB);	// 6028 rep movsb ;~ 00D0:287E
cs=0x192;eip=0x002880; 	X(POP(cx));	// 6029 pop     cx ;~ 00D0:2880
cs=0x192;eip=0x002881; 	J(LOOP(loc_1287a));	// 6030 loop    loc_1287A ;~ 00D0:2881
cs=0x192;eip=0x002883; 	T(INC(si));	// 6031 inc     si ;~ 00D0:2883
cs=0x192;eip=0x002884; 	T(MOV(di, si));	// 6032 mov     di, si ;~ 00D0:2884
cs=0x192;eip=0x002886; 	T(MOV(si, 0x195E));	// 6033 mov     si, 195Eh ;~ 00D0:2886
cs=0x192;eip=0x002889; 	T(MOV(cx, 6));	// 6034 mov     cx, 6 ;~ 00D0:2889
cs=0x192;eip=0x00288c; 	T(CLD);	// 6035 cld ;~ 00D0:288C
	// 6036 rep movsb ;~ 00D0:288D
cs=0x192;eip=0x00288d; 	X(	REP MOVSB);	// 6036 rep movsb ;~ 00D0:288D
cs=0x192;eip=0x00288f; 	T(MOV(si, 0x743A));	// 6037 mov     si, 743Ah ;~ 00D0:288F
cs=0x192;eip=0x002892; 	T(MOV(cx, 0x0B));	// 6038 mov     cx, 0Bh ;~ 00D0:2892
	// 6039 rep movsb ;~ 00D0:2895
cs=0x192;eip=0x002895; 	X(	REP MOVSB);	// 6039 rep movsb ;~ 00D0:2895
loc_12897:
	// 5040 
cs=0x192;eip=0x002897; 	J(CALL(sub_12a93,0));	// 6043 call    sub_12A93 ;~ 00D0:2897
loc_1289a:
	// 5041 
cs=0x192;eip=0x00289a; 	T(MOV(si, 0x7684));	// 6046 mov     si, 7684h ;~ 00D0:289A
cs=0x192;eip=0x00289d; 	J(CALL(sub_104b7,0));	// 6047 call    sub_104B7 ;~ 00D0:289D
cs=0x192;eip=0x0028a0; 	T(MOV(si, 0x76AE));	// 6048 mov     si, 76AEh ;~ 00D0:28A0
cs=0x192;eip=0x0028a3; 	T(MOV(cx, 0x0F));	// 6049 mov     cx, 0Fh ;~ 00D0:28A3
cs=0x192;eip=0x0028a6; 	X(MOV(byte_1a4f9, 4));	// 6050 mov     byte_1A4F9, 4 ;~ 00D0:28A6
loc_128ab:
	// 5042 
cs=0x192;eip=0x0028ab; 	T(MOV(di, 0x769A));	// 6053 mov     di, 769Ah ;~ 00D0:28AB
cs=0x192;eip=0x0028ae; 	X(PUSH(cx));	// 6054 push    cx ;~ 00D0:28AE
cs=0x192;eip=0x0028af; 	T(MOV(cx, 6));	// 6055 mov     cx, 6 ;~ 00D0:28AF
cs=0x192;eip=0x0028b2; 	T(CLD);	// 6056 cld ;~ 00D0:28B2
	// 6057 rep movsb ;~ 00D0:28B3
cs=0x192;eip=0x0028b3; 	X(	REP MOVSB);	// 6057 rep movsb ;~ 00D0:28B3
cs=0x192;eip=0x0028b5; 	T(ADD(di, 2));	// 6058 add     di, 2 ;~ 00D0:28B5
cs=0x192;eip=0x0028b8; 	T(MOV(cx, 0x0B));	// 6059 mov     cx, 0Bh ;~ 00D0:28B8
	// 6060 rep movsb ;~ 00D0:28BB
cs=0x192;eip=0x0028bb; 	X(	REP MOVSB);	// 6060 rep movsb ;~ 00D0:28BB
cs=0x192;eip=0x0028bd; 	X(PUSH(si));	// 6061 push    si ;~ 00D0:28BD
cs=0x192;eip=0x0028be; 	T(MOV(si, 0x7695));	// 6062 mov     si, 7695h ;~ 00D0:28BE
cs=0x192;eip=0x0028c1; 	J(CALL(sub_104b7,0));	// 6063 call    sub_104B7 ;~ 00D0:28C1
cs=0x192;eip=0x0028c4; 	X(INC(byte_1a4f9));	// 6064 inc     byte_1A4F9 ;~ 00D0:28C4
cs=0x192;eip=0x0028c8; 	X(POP(si));	// 6065 pop     si ;~ 00D0:28C8
cs=0x192;eip=0x0028c9; 	X(POP(cx));	// 6066 pop     cx ;~ 00D0:28C9
cs=0x192;eip=0x0028ca; 	J(LOOP(loc_128ab));	// 6067 loop    loc_128AB ;~ 00D0:28CA
cs=0x192;eip=0x0028cc; 	J(CALL(sub_12a18,0));	// 6068 call    sub_12A18 ;~ 00D0:28CC
cs=0x192;eip=0x0028cf; 	T(MOV(cx, 0x64));	// 6069 mov     cx, 64h ; 'd' ;~ 00D0:28CF
loc_128d2:
	// 5043 
cs=0x192;eip=0x0028d2; 	X(PUSH(cx));	// 6072 push    cx ;~ 00D0:28D2
cs=0x192;eip=0x0028d3; 	J(CALL(sub_10620,0));	// 6073 call    sub_10620 ;~ 00D0:28D3
cs=0x192;eip=0x0028d6; 	T(MOV(ah, 1));	// 6074 mov     ah, 1 ;~ 00D0:28D6
cs=0x192;eip=0x0028d8; 	S(_INT(0x16));	// 6075 int     16h             ; KEYBOARD - CHECK BUFFER, DO NOT CLEAR ;~ 00D0:28D8
cs=0x192;eip=0x0028da; 	X(POP(cx));	// 6079 pop     cx ;~ 00D0:28DA
cs=0x192;eip=0x0028db; 	J(JNZ(loc_128e2));	// 6080 jnz     short loc_128E2 ;~ 00D0:28DB
cs=0x192;eip=0x0028dd; 	J(LOOP(loc_128d2));	// 6081 loop    loc_128D2 ;~ 00D0:28DD
loc_128df:
	// 5044 
cs=0x192;eip=0x0028df; 	J(JMP(loc_12739));	// 6085 jmp     loc_12739 ;~ 00D0:28DF
loc_128e2:
	// 5045 
cs=0x192;eip=0x0028e2; 	T(MOV(ah, 0));	// 6089 mov     ah, 0 ;~ 00D0:28E2
cs=0x192;eip=0x0028e4; 	S(_INT(0x16));	// 6090 int     16h             ; KEYBOARD - READ CHAR FROM BUFFER, WAIT IF EMPTY ;~ 00D0:28E4
cs=0x192;eip=0x0028e6; 	T(CMP(al, 3));	// 6092 cmp     al, 3 ;~ 00D0:28E6
cs=0x192;eip=0x0028e8; 	J(JZ(loc_128f3));	// 6093 jz      short loc_128F3 ;~ 00D0:28E8
cs=0x192;eip=0x0028ea; 	T(CMP(al, 0x0E));	// 6094 cmp     al, 0Eh ;~ 00D0:28EA
cs=0x192;eip=0x0028ec; 	J(JNZ(loc_128df));	// 6095 jnz     short loc_128DF ;~ 00D0:28EC
cs=0x192;eip=0x0028ee; 	J(CALL(sub_12772,0));	// 6096 call    sub_12772 ;~ 00D0:28EE
cs=0x192;eip=0x0028f1; 	J(JMP(loc_128df));	// 6097 jmp     short loc_128DF ;~ 00D0:28F1
loc_128f3:
	// 5046 
cs=0x192;eip=0x0028f3; 	J(JMP(loc_1012d));	// 6101 jmp     loc_1012D ;~ 00D0:28F3
loc_128f6:
	// 5047 
cs=0x192;eip=0x0028f6; 	T(MOV(cx, 0x0FA));	// 6106 mov     cx, 0FAh ; 'ú' ;~ 00D0:28F6
cs=0x192;eip=0x0028f9; 	J(CALL(sub_11f6b,0));	// 6107 call    sub_11F6B ;~ 00D0:28F9
cs=0x192;eip=0x0028fc; 	T(MOV(cx, 0x14));	// 6108 mov     cx, 14h ;~ 00D0:28FC
loc_128ff:
	// 5048 
cs=0x192;eip=0x0028ff; 	X(PUSH(cx));	// 6111 push    cx ;~ 00D0:28FF
cs=0x192;eip=0x002900; 	J(CALL(sub_10620,0));	// 6112 call    sub_10620 ;~ 00D0:2900
cs=0x192;eip=0x002903; 	X(POP(cx));	// 6113 pop     cx ;~ 00D0:2903
cs=0x192;eip=0x002904; 	J(LOOP(loc_128ff));	// 6114 loop    loc_128FF ;~ 00D0:2904
cs=0x192;eip=0x002906; 	J(CALL(sub_12a25,0));	// 6115 call    sub_12A25 ;~ 00D0:2906
cs=0x192;eip=0x002909; 	T(MOV(al, byte_14a31));	// 6116 mov     al, byte_14A31 ;~ 00D0:2909
cs=0x192;eip=0x00290c; 	T(CMP(byte_14a29, 1));	// 6117 cmp     byte_14A29, 1 ;~ 00D0:290C
cs=0x192;eip=0x002911; 	J(JZ(loc_12916));	// 6118 jz      short loc_12916 ;~ 00D0:2911
cs=0x192;eip=0x002913; 	T(MOV(al, byte_14a30));	// 6119 mov     al, byte_14A30 ;~ 00D0:2913
loc_12916:
	// 5049 
cs=0x192;eip=0x002916; 	T(CMP(al, byte_14a27));	// 6122 cmp     al, byte_14A27 ;~ 00D0:2916
cs=0x192;eip=0x00291a; 	J(JNC(loc_1291f));	// 6123 jnb     short loc_1291F ;~ 00D0:291A
cs=0x192;eip=0x00291c; 	J(JMP(loc_12843));	// 6124 jmp     loc_12843 ;~ 00D0:291C
loc_1291f:
	// 5050 
cs=0x192;eip=0x00291f; 	T(MOV(cx, 0x1F4));	// 6128 mov     cx, 1F4h ;~ 00D0:291F
cs=0x192;eip=0x002922; 	J(CALL(sub_11f6b,0));	// 6129 call    sub_11F6B ;~ 00D0:2922
cs=0x192;eip=0x002925; 	T(MOV(si, 0x77BF));	// 6130 mov     si, 77BFh ;~ 00D0:2925
cs=0x192;eip=0x002928; 	J(CALL(sub_104b7,0));	// 6131 call    sub_104B7 ;~ 00D0:2928
cs=0x192;eip=0x00292b; 	T(MOV(si, 0x77CA));	// 6132 mov     si, 77CAh ;~ 00D0:292B
cs=0x192;eip=0x00292e; 	J(CALL(sub_104b7,0));	// 6133 call    sub_104B7 ;~ 00D0:292E
cs=0x192;eip=0x002931; 	T(CMP(byte_14a26, 9));	// 6134 cmp     byte_14A26, 9 ;~ 00D0:2931
cs=0x192;eip=0x002936; 	J(JNZ(loc_12941));	// 6135 jnz     short loc_12941 ;~ 00D0:2936
cs=0x192;eip=0x002938; 	T(MOV(si, 0x780C));	// 6136 mov     si, 780Ch ;~ 00D0:2938
cs=0x192;eip=0x00293b; 	J(CALL(sub_104b7,0));	// 6137 call    sub_104B7 ;~ 00D0:293B
cs=0x192;eip=0x00293e; 	J(JMP(loc_12964));	// 6138 jmp     short loc_12964 ;~ 00D0:293E
loc_12941:
	// 5051 
cs=0x192;eip=0x002941; 	T(MOV(al, byte_14a26));	// 6144 mov     al, byte_14A26 ;~ 00D0:2941
cs=0x192;eip=0x002944; 	T(MOV(cl, al));	// 6145 mov     cl, al ;~ 00D0:2944
cs=0x192;eip=0x002946; 	T(ADD(al, 0x31));	// 6146 add     al, 31h ; '1' ;~ 00D0:2946
cs=0x192;eip=0x002948; 	X(MOV(byte_1a6db, al));	// 6147 mov     byte_1A6DB, al ;~ 00D0:2948
cs=0x192;eip=0x00294b; 	T(MOV(ch, 0));	// 6148 mov     ch, 0 ;~ 00D0:294B
cs=0x192;eip=0x00294d; 	T(MOV(si, 0x74A4));	// 6149 mov     si, 74A4h ;~ 00D0:294D
loc_12950:
	// 5052 
cs=0x192;eip=0x002950; 	T(SUB(si, 0x0B));	// 6152 sub     si, 0Bh ;~ 00D0:2950
cs=0x192;eip=0x002953; 	J(LOOP(loc_12950));	// 6153 loop    loc_12950 ;~ 00D0:2953
cs=0x192;eip=0x002955; 	T(MOV(di, 0x7883));	// 6154 mov     di, 7883h ;~ 00D0:2955
cs=0x192;eip=0x002958; 	T(MOV(cx, 0x0B));	// 6155 mov     cx, 0Bh ;~ 00D0:2958
cs=0x192;eip=0x00295b; 	T(CLD);	// 6156 cld ;~ 00D0:295B
	// 6157 rep movsb ;~ 00D0:295C
cs=0x192;eip=0x00295c; 	X(	REP MOVSB);	// 6157 rep movsb ;~ 00D0:295C
cs=0x192;eip=0x00295e; 	T(MOV(si, 0x7861));	// 6158 mov     si, 7861h ;~ 00D0:295E
cs=0x192;eip=0x002961; 	J(CALL(sub_104b7,0));	// 6159 call    sub_104B7 ;~ 00D0:2961
loc_12964:
	// 5053 
cs=0x192;eip=0x002964; 	T(MOV(si, 0x75BB));	// 6162 mov     si, 75BBh ;~ 00D0:2964
cs=0x192;eip=0x002967; 	J(CALL(sub_104b7,0));	// 6163 call    sub_104B7 ;~ 00D0:2967
cs=0x192;eip=0x00296a; 	J(CALL(sub_12a10,0));	// 6164 call    sub_12A10 ;~ 00D0:296A
cs=0x192;eip=0x00296d; 	J(JMP(loc_12843));	// 6165 jmp     loc_12843 ;~ 00D0:296D
sub_12970:
	// 6170 
cs=0x192;eip=0x002970; 	T(MOV(di, 0x743A));	// 6172 mov     di, 743Ah ;~ 00D0:2970
ret_d0_2973:
	// 5054 
cs=0x192;eip=0x002973; 	T(MOV(cx, 0x0B));	// 6173 mov     cx, 0Bh ;~ 00D0:2973
cs=0x192;eip=0x002976; 	T(MOV(al, 0x20));	// 6174 mov     al, 20h ; ' ' ;~ 00D0:2976
cs=0x192;eip=0x002978; 	T(CLD);	// 6175 cld ;~ 00D0:2978
	// 6176 rep stosb ;~ 00D0:2979
cs=0x192;eip=0x002979; 	X(	REP STOSB);	// 6176 rep stosb ;~ 00D0:2979
cs=0x192;eip=0x00297b; 	X(MOV(byte_1a2a8, 4));	// 6177 mov     byte_1A2A8, 4 ;~ 00D0:297B
cs=0x192;eip=0x002980; 	X(MOV(byte_1a2aa, 0x21));	// 6178 mov     byte_1A2AA, 21h ; '!' ;~ 00D0:2980
cs=0x192;eip=0x002985; 	T(MOV(si, 0x7445));	// 6179 mov     si, 7445h ;~ 00D0:2985
cs=0x192;eip=0x002988; 	J(CALL(sub_104b7,0));	// 6180 call    sub_104B7 ;~ 00D0:2988
cs=0x192;eip=0x00298b; 	T(MOV(di, 0x743A));	// 6181 mov     di, 743Ah ;~ 00D0:298B
loc_1298e:
	// 5055 
cs=0x192;eip=0x00298e; 	X(PUSH(di));	// 6185 push    di ;~ 00D0:298E
loc_1298f:
	// 5056 
cs=0x192;eip=0x00298f; 	J(CALL(sub_12a10,0));	// 6189 call    sub_12A10 ;~ 00D0:298F
cs=0x192;eip=0x002992; 	X(POP(di));	// 6190 pop     di ;~ 00D0:2992
cs=0x192;eip=0x002993; 	T(CMP(al, 0x0D));	// 6191 cmp     al, 0Dh ;~ 00D0:2993
cs=0x192;eip=0x002995; 	J(JZ(loc_129f9));	// 6192 jz      short loc_129F9 ;~ 00D0:2995
cs=0x192;eip=0x002997; 	T(CMP(al, 0x7F));	// 6193 cmp     al, 7Fh ;~ 00D0:2997
cs=0x192;eip=0x002999; 	J(JZ(loc_129d1));	// 6194 jz      short loc_129D1 ;~ 00D0:2999
cs=0x192;eip=0x00299b; 	T(CMP(al, 8));	// 6195 cmp     al, 8 ;~ 00D0:299B
cs=0x192;eip=0x00299d; 	J(JZ(loc_129d1));	// 6196 jz      short loc_129D1 ;~ 00D0:299D
cs=0x192;eip=0x00299f; 	T(CMP(al, 0x20));	// 6197 cmp     al, 20h ; ' ' ;~ 00D0:299F
cs=0x192;eip=0x0029a1; 	J(JZ(loc_129ae));	// 6198 jz      short loc_129AE ;~ 00D0:29A1
cs=0x192;eip=0x0029a3; 	J(CALL(sub_12a05,0));	// 6199 call    sub_12A05 ;~ 00D0:29A3
cs=0x192;eip=0x0029a6; 	T(CMP(al, 0x41));	// 6200 cmp     al, 41h ; 'A' ;~ 00D0:29A6
cs=0x192;eip=0x0029a8; 	J(JC(loc_1298e));	// 6201 jb      short loc_1298E ;~ 00D0:29A8
cs=0x192;eip=0x0029aa; 	T(CMP(al, 0x5B));	// 6202 cmp     al, 5Bh ; '[' ;~ 00D0:29AA
cs=0x192;eip=0x0029ac; 	J(JNC(loc_1298e));	// 6203 jnb     short loc_1298E ;~ 00D0:29AC
loc_129ae:
	// 5057 
cs=0x192;eip=0x0029ae; 	T(CMP(byte_1a2a8, 0x0F));	// 6206 cmp     byte_1A2A8, 0Fh ;~ 00D0:29AE
cs=0x192;eip=0x0029b3; 	J(JZ(loc_1298e));	// 6207 jz      short loc_1298E ;~ 00D0:29B3
cs=0x192;eip=0x0029b5; 	X(STOSB);	// 6208 stosb ;~ 00D0:29B5
cs=0x192;eip=0x0029b6; 	X(PUSH(di));	// 6209 push    di ;~ 00D0:29B6
cs=0x192;eip=0x0029b7; 	X(MOV(byte_1a2aa, al));	// 6210 mov     byte_1A2AA, al ;~ 00D0:29B7
cs=0x192;eip=0x0029ba; 	T(MOV(si, 0x7445));	// 6211 mov     si, 7445h ;~ 00D0:29BA
cs=0x192;eip=0x0029bd; 	J(CALL(sub_104b7,0));	// 6212 call    sub_104B7 ;~ 00D0:29BD
cs=0x192;eip=0x0029c0; 	X(INC(byte_1a2a8));	// 6213 inc     byte_1A2A8 ;~ 00D0:29C0
cs=0x192;eip=0x0029c4; 	X(MOV(byte_1a2aa, 0x21));	// 6214 mov     byte_1A2AA, 21h ; '!' ;~ 00D0:29C4
cs=0x192;eip=0x0029c9; 	T(MOV(si, 0x7445));	// 6215 mov     si, 7445h ;~ 00D0:29C9
cs=0x192;eip=0x0029cc; 	J(CALL(sub_104b7,0));	// 6216 call    sub_104B7 ;~ 00D0:29CC
cs=0x192;eip=0x0029cf; 	J(JMP(loc_1298f));	// 6217 jmp     short loc_1298F ;~ 00D0:29CF
loc_129d1:
	// 5058 
cs=0x192;eip=0x0029d1; 	T(CMP(byte_1a2a8, 4));	// 6222 cmp     byte_1A2A8, 4 ;~ 00D0:29D1
cs=0x192;eip=0x0029d6; 	J(JZ(loc_1298e));	// 6223 jz      short loc_1298E ;~ 00D0:29D6
cs=0x192;eip=0x0029d8; 	T(DEC(di));	// 6224 dec     di ;~ 00D0:29D8
cs=0x192;eip=0x0029d9; 	X(MOV(*(raddr(ds,di)), 0x20));	// 6225 mov     byte ptr [di], 20h ; ' ' ;~ 00D0:29D9
cs=0x192;eip=0x0029dc; 	X(PUSH(di));	// 6226 push    di ;~ 00D0:29DC
cs=0x192;eip=0x0029dd; 	X(MOV(byte_1a2aa, 0x20));	// 6227 mov     byte_1A2AA, 20h ; ' ' ;~ 00D0:29DD
cs=0x192;eip=0x0029e2; 	T(MOV(si, 0x7445));	// 6228 mov     si, 7445h ;~ 00D0:29E2
cs=0x192;eip=0x0029e5; 	J(CALL(sub_104b7,0));	// 6229 call    sub_104B7 ;~ 00D0:29E5
cs=0x192;eip=0x0029e8; 	X(DEC(byte_1a2a8));	// 6230 dec     byte_1A2A8 ;~ 00D0:29E8
cs=0x192;eip=0x0029ec; 	X(MOV(byte_1a2aa, 0x21));	// 6231 mov     byte_1A2AA, 21h ; '!' ;~ 00D0:29EC
cs=0x192;eip=0x0029f1; 	T(MOV(si, 0x7445));	// 6232 mov     si, 7445h ;~ 00D0:29F1
cs=0x192;eip=0x0029f4; 	J(CALL(sub_104b7,0));	// 6233 call    sub_104B7 ;~ 00D0:29F4
cs=0x192;eip=0x0029f7; 	J(JMP(loc_1298f));	// 6234 jmp     short loc_1298F ;~ 00D0:29F7
loc_129f9:
	// 5059 
cs=0x192;eip=0x0029f9; 	X(MOV(byte_1a2aa, 0x20));	// 6238 mov     byte_1A2AA, 20h ; ' ' ;~ 00D0:29F9
cs=0x192;eip=0x0029fe; 	T(MOV(si, 0x7445));	// 6239 mov     si, 7445h ;~ 00D0:29FE
cs=0x192;eip=0x002a01; 	J(CALL(sub_104b7,0));	// 6240 call    sub_104B7 ;~ 00D0:2A01
cs=0x192;eip=0x002a04; 	J(RETN(0));	// 6241 retn ;~ 00D0:2A04
sub_12a05:
	// 6248 
cs=0x192;eip=0x002a05; 	T(CMP(al, 0x61));	// 6250 cmp     al, 61h ; 'a' ;~ 00D0:2A05
ret_d0_2a07:
	// 5060 
cs=0x192;eip=0x002a07; 	J(JC(locret_12a0f));	// 6251 jb      short locret_12A0F ;~ 00D0:2A07
cs=0x192;eip=0x002a09; 	T(CMP(al, 0x7B));	// 6252 cmp     al, 7Bh ; '{' ;~ 00D0:2A09
cs=0x192;eip=0x002a0b; 	J(JNC(locret_12a0f));	// 6253 jnb     short locret_12A0F ;~ 00D0:2A0B
cs=0x192;eip=0x002a0d; 	T(ADD(al, 0x0E0));	// 6254 add     al, 0E0h ; 'à' ;~ 00D0:2A0D
locret_12a0f:
	// 5061 
cs=0x192;eip=0x002a0f; 	J(RETN(0));	// 6258 retn ;~ 00D0:2A0F
sub_12a10:
	// 6265 
cs=0x192;eip=0x002a10; 	J(CALL(sub_12a18,0));	// 6267 call    sub_12A18 ;~ 00D0:2A10
sub_12a13:
	// 6274 
cs=0x192;eip=0x002a13; 	T(MOV(ah, 0));	// 6275 mov     ah, 0 ;~ 00D0:2A13
ret_d0_2a15:
	// 5062 
cs=0x192;eip=0x002a15; 	S(_INT(0x16));	// 6276 int     16h             ; KEYBOARD - READ CHAR FROM BUFFER, WAIT IF EMPTY ;~ 00D0:2A15
cs=0x192;eip=0x002a17; 	J(RETN(0));	// 6278 retn ;~ 00D0:2A17
sub_12a18:
	// 6285 
cs=0x192;eip=0x002a18; 	T(MOV(ah, 1));	// 6287 mov     ah, 1 ;~ 00D0:2A18
ret_d0_2a1a:
	// 5063 
cs=0x192;eip=0x002a1a; 	S(_INT(0x16));	// 6288 int     16h             ; KEYBOARD - CHECK BUFFER, DO NOT CLEAR ;~ 00D0:2A1A
cs=0x192;eip=0x002a1c; 	J(JZ(locret_12a24));	// 6292 jz      short locret_12A24 ;~ 00D0:2A1C
cs=0x192;eip=0x002a1e; 	T(MOV(ah, 0));	// 6293 mov     ah, 0 ;~ 00D0:2A1E
cs=0x192;eip=0x002a20; 	S(_INT(0x16));	// 6294 int     16h             ; KEYBOARD - READ CHAR FROM BUFFER, WAIT IF EMPTY ;~ 00D0:2A20
cs=0x192;eip=0x002a22; 	J(JMP(sub_12a18));	// 6296 jmp     short sub_12A18 ;~ 00D0:2A22
locret_12a24:
	// 5064 
cs=0x192;eip=0x002a24; 	J(RETN(0));	// 6300 retn ;~ 00D0:2A24
sub_12a25:
	// 6307 
cs=0x192;eip=0x002a25; 	T(CLD);	// 6309 cld ;~ 00D0:2A25
ret_d0_2a26:
	// 5065 
cs=0x192;eip=0x002a26; 	T(MOV(si, 0x6FE6));	// 6310 mov     si, 6FE6h ;~ 00D0:2A26
cs=0x192;eip=0x002a29; 	T(MOV(di, 4));	// 6311 mov     di, 4 ;~ 00D0:2A29
cs=0x192;eip=0x002a2c; 	T(MOV(ch, 0));	// 6312 mov     ch, 0 ;~ 00D0:2A2C
loc_12a2e:
	// 5066 
cs=0x192;eip=0x002a2e; 	T(LODSB);	// 6315 lodsb ;~ 00D0:2A2E
cs=0x192;eip=0x002a2f; 	T(CMP(al, 0x7B));	// 6316 cmp     al, 7Bh ; '{' ;~ 00D0:2A2F
cs=0x192;eip=0x002a31; 	J(JZ(loc_12a44));	// 6317 jz      short loc_12A44 ;~ 00D0:2A31
cs=0x192;eip=0x002a33; 	T(CMP(al, 0x0EA));	// 6318 cmp     al, 0EAh ; 'ê' ;~ 00D0:2A33
cs=0x192;eip=0x002a35; 	J(JZ(loc_12a3e));	// 6319 jz      short loc_12A3E ;~ 00D0:2A35
cs=0x192;eip=0x002a37; 	T(MOV(cx, 1));	// 6320 mov     cx, 1 ;~ 00D0:2A37
loc_12a3a:
	// 5067 
	// 6323 rep stosb ;~ 00D0:2A3A
cs=0x192;eip=0x002a3a; 	X(	REP STOSB);	// 6323 rep stosb ;~ 00D0:2A3A
cs=0x192;eip=0x002a3c; 	J(JMP(loc_12a2e));	// 6324 jmp     short loc_12A2E ;~ 00D0:2A3C
loc_12a3e:
	// 5068 
cs=0x192;eip=0x002a3e; 	T(LODSB);	// 6328 lodsb ;~ 00D0:2A3E
cs=0x192;eip=0x002a3f; 	T(MOV(cl, al));	// 6329 mov     cl, al ;~ 00D0:2A3F
cs=0x192;eip=0x002a41; 	T(LODSB);	// 6330 lodsb ;~ 00D0:2A41
cs=0x192;eip=0x002a42; 	J(JMP(loc_12a3a));	// 6331 jmp     short loc_12A3A ;~ 00D0:2A42
loc_12a44:
	// 5069 
cs=0x192;eip=0x002a44; 	T(MOV(di, 8));	// 6335 mov     di, 8 ;~ 00D0:2A44
cs=0x192;eip=0x002a47; 	T(MOV(si, 0x7432));	// 6336 mov     si, 7432h ;~ 00D0:2A47
cs=0x192;eip=0x002a4a; 	T(MOV(bx, 0x844));	// 6337 mov     bx, 844h ;~ 00D0:2A4A
cs=0x192;eip=0x002a4d; 	T(MOV(cx, 0x15));	// 6338 mov     cx, 15h ;~ 00D0:2A4D
cs=0x192;eip=0x002a50; 	T(MOV(dx, 0));	// 6339 mov     dx, 0 ;~ 00D0:2A50
cs=0x192;eip=0x002a53; 	J(CALL(sub_12a63,0));	// 6340 call    sub_12A63 ;~ 00D0:2A53
cs=0x192;eip=0x002a56; 	T(MOV(si, 4));	// 6341 mov     si, 4 ;~ 00D0:2A56
cs=0x192;eip=0x002a59; 	T(MOV(dx, 8));	// 6342 mov     dx, 8 ;~ 00D0:2A59
cs=0x192;eip=0x002a5c; 	T(MOV(cx, 0x0B));	// 6343 mov     cx, 0Bh ;~ 00D0:2A5C
cs=0x192;eip=0x002a5f; 	J(CALL(sub_12a63,0));	// 6344 call    sub_12A63 ;~ 00D0:2A5F
cs=0x192;eip=0x002a62; 	J(RETN(0));	// 6345 retn ;~ 00D0:2A62
sub_12a63:
	// 6352 
cs=0x192;eip=0x002a63; 	X(PUSH(cx));	// 6354 push    cx ;~ 00D0:2A63
ret_d0_2a64:
	// 5070 
cs=0x192;eip=0x002a64; 	X(PUSH(di));	// 6355 push    di ;~ 00D0:2A64
cs=0x192;eip=0x002a65; 	X(PUSH(bx));	// 6356 push    bx ;~ 00D0:2A65
cs=0x192;eip=0x002a66; 	T(MOV(cx, 0x18));	// 6357 mov     cx, 18h ;~ 00D0:2A66
loc_12a69:
	// 5071 
cs=0x192;eip=0x002a69; 	X(PUSH(cx));	// 6360 push    cx ;~ 00D0:2A69
cs=0x192;eip=0x002a6a; 	X(PUSH(di));	// 6361 push    di ;~ 00D0:2A6A
cs=0x192;eip=0x002a6b; 	X(PUSH(dx));	// 6362 push    dx ;~ 00D0:2A6B
cs=0x192;eip=0x002a6c; 	X(PUSH(si));	// 6363 push    si ;~ 00D0:2A6C
cs=0x192;eip=0x002a6d; 	T(MOV(al, *(raddr(ds,bx))));	// 6364 mov     al, [bx] ;~ 00D0:2A6D
cs=0x192;eip=0x002a6f; 	T(ADD(bx, 0x20));	// 6365 add     bx, 20h ; ' ' ;~ 00D0:2A6F
cs=0x192;eip=0x002a72; 	X(PUSH(bx));	// 6366 push    bx ;~ 00D0:2A72
cs=0x192;eip=0x002a73; 	J(CALL(sub_1054a,0));	// 6367 call    sub_1054A ;~ 00D0:2A73
cs=0x192;eip=0x002a76; 	X(POP(bx));	// 6368 pop     bx ;~ 00D0:2A76
cs=0x192;eip=0x002a77; 	X(POP(si));	// 6369 pop     si ;~ 00D0:2A77
cs=0x192;eip=0x002a78; 	X(POP(dx));	// 6370 pop     dx ;~ 00D0:2A78
cs=0x192;eip=0x002a79; 	T(ADD(si, dx));	// 6371 add     si, dx ;~ 00D0:2A79
cs=0x192;eip=0x002a7b; 	X(POP(di));	// 6372 pop     di ;~ 00D0:2A7B
cs=0x192;eip=0x002a7c; 	T(ADD(di, 0x140));	// 6373 add     di, 140h ;~ 00D0:2A7C
cs=0x192;eip=0x002a80; 	X(POP(cx));	// 6374 pop     cx ;~ 00D0:2A80
cs=0x192;eip=0x002a81; 	J(LOOP(loc_12a69));	// 6375 loop    loc_12A69 ;~ 00D0:2A81
cs=0x192;eip=0x002a83; 	X(POP(bx));	// 6376 pop     bx ;~ 00D0:2A83
cs=0x192;eip=0x002a84; 	T(INC(bx));	// 6377 inc     bx ;~ 00D0:2A84
cs=0x192;eip=0x002a85; 	X(POP(di));	// 6378 pop     di ;~ 00D0:2A85
cs=0x192;eip=0x002a86; 	T(INC(di));	// 6379 inc     di ;~ 00D0:2A86
cs=0x192;eip=0x002a87; 	T(INC(di));	// 6380 inc     di ;~ 00D0:2A87
cs=0x192;eip=0x002a88; 	X(POP(cx));	// 6381 pop     cx ;~ 00D0:2A88
cs=0x192;eip=0x002a89; 	J(LOOP(sub_12a63));	// 6382 loop    sub_12A63 ;~ 00D0:2A89
cs=0x192;eip=0x002a8b; 	J(RETN(0));	// 6383 retn ;~ 00D0:2A8B
sub_12a8c:
	// 6390 
cs=0x192;eip=0x002a8c; 	T(MOV(al, 0));	// 6391 mov     al, 0 ;~ 00D0:2A8C
ret_d0_2a8e:
	// 5072 
cs=0x192;eip=0x002a8e; 	T(MOV(cx, 0x40));	// 6392 mov     cx, 40h ; '@' ;~ 00D0:2A8E
cs=0x192;eip=0x002a91; 	J(JMP(loc_12a98));	// 6393 jmp     short loc_12A98 ;~ 00D0:2A91
sub_12a93:
	// 6400 
cs=0x192;eip=0x002a93; 	T(MOV(al, 0x55));	// 6402 mov     al, 55h ; 'U' ;~ 00D0:2A93
ret_d0_2a95:
	// 5073 
cs=0x192;eip=0x002a95; 	T(MOV(cx, 0x2A));	// 6403 mov     cx, 2Ah ; '*' ;~ 00D0:2A95
loc_12a98:
	// 5074 
cs=0x192;eip=0x002a98; 	X(PUSH(es));	// 6406 push    es ;~ 00D0:2A98
cs=0x192;eip=0x002a99; 	T(MOV(dx, 0x0B800));	// 6407 mov     dx, 0B800h ;~ 00D0:2A99
cs=0x192;eip=0x002a9c; 	T(MOV(es, dx));	// 6408 mov     es, dx ;~ 00D0:2A9C
cs=0x192;eip=0x002a9e; 	T(MOV(di, 8));	// 6410 mov     di, 8 ;~ 00D0:2A9E
cs=0x192;eip=0x002aa1; 	J(CALL(sub_12aac,0));	// 6411 call    sub_12AAC ;~ 00D0:2AA1
cs=0x192;eip=0x002aa4; 	T(MOV(di, 0x2008));	// 6412 mov     di, 2008h ;~ 00D0:2AA4
cs=0x192;eip=0x002aa7; 	J(CALL(sub_12aac,0));	// 6413 call    sub_12AAC ;~ 00D0:2AA7
cs=0x192;eip=0x002aaa; 	X(POP(es));	// 6414 pop     es ;~ 00D0:2AAA
cs=0x192;eip=0x002aab; 	J(RETN(0));	// 6416 retn ;~ 00D0:2AAB
sub_12aac:
	// 6424 
cs=0x192;eip=0x002aac; 	T(MOV(ah, 0x60));	// 6426 mov     ah, 60h ; '`' ;~ 00D0:2AAC
loc_12aae:
	// 5075 
cs=0x192;eip=0x002aae; 	X(PUSH(di));	// 6429 push    di ;~ 00D0:2AAE
cs=0x192;eip=0x002aaf; 	X(PUSH(cx));	// 6430 push    cx ;~ 00D0:2AAF
	// 6431 rep stosb ;~ 00D0:2AB0
cs=0x192;eip=0x002ab0; 	X(	REP STOSB);	// 6431 rep stosb ;~ 00D0:2AB0
cs=0x192;eip=0x002ab2; 	X(POP(cx));	// 6432 pop     cx ;~ 00D0:2AB2
cs=0x192;eip=0x002ab3; 	X(POP(di));	// 6433 pop     di ;~ 00D0:2AB3
cs=0x192;eip=0x002ab4; 	T(ADD(di, 0x50));	// 6434 add     di, 50h ; 'P' ;~ 00D0:2AB4
cs=0x192;eip=0x002ab7; 	T(DEC(ah));	// 6435 dec     ah ;~ 00D0:2AB7
cs=0x192;eip=0x002ab9; 	J(JNZ(loc_12aae));	// 6436 jnz     short loc_12AAE ;~ 00D0:2AB9
cs=0x192;eip=0x002abb; 	J(RETN(0));	// 6437 retn ;~ 00D0:2ABB
seg000_2abc_proc:
	// 6444 
loc_12abc:
	// 5076 
cs=0x192;eip=0x002abc; 	T(CLI);	// 6446 cli ;~ 00D0:2ABC
cs=0x192;eip=0x002abd; 	X(PUSHF);	// 6447 pushf ;~ 00D0:2ABD
cs=0x192;eip=0x002abe; 	T(XOR(ax, ax));	// 6448 xor     ax, ax ;~ 00D0:2ABE
cs=0x192;eip=0x002ac0; 	T(MOV(es, ax));	// 6449 mov     es, ax ;~ 00D0:2AC0
cs=0x192;eip=0x002ac2; 	T(MOV(ax, word_1a6f0));	// 6450 mov     ax, word_1A6F0 ;~ 00D0:2AC2
cs=0x192;eip=0x002ac5; 	X(MOV(*(dw*)(raddr(es,0x70)), ax));	// 6451 mov     es:70h, ax ;~ 00D0:2AC5
cs=0x192;eip=0x002ac9; 	T(MOV(ax, word_1a6f2));	// 6452 mov     ax, word_1A6F2 ;~ 00D0:2AC9
cs=0x192;eip=0x002acc; 	X(MOV(*(dw*)(raddr(es,0x72)), ax));	// 6453 mov     es:72h, ax ;~ 00D0:2ACC
cs=0x192;eip=0x002ad0; 	X(POPF);	// 6454 popf ;~ 00D0:2AD0
cs=0x192;eip=0x002ad1; 	T(MOV(sp, word_1a70a));	// 6455 mov     sp, word_1A70A ;~ 00D0:2AD1
cs=0x192;eip=0x002ad5; 	X(POP(es));	// 6456 pop     es ;~ 00D0:2AD5
cs=0x192;eip=0x002ad6; 	T(STI);	// 6458 sti ;~ 00D0:2AD6
cs=0x192;eip=0x002ad7; 	J(RETN(0));	// 6459 retn ;~ 00D0:2AD7
sub_12ad8:
	// 6465 
cs=0x192;eip=0x002ad8; 	T(CLI);	// 6470 cli ;~ 00D0:2AD8
ret_d0_2ad9:
	// 5077 
cs=0x192;eip=0x002ad9; 	X(PUSH(es));	// 6471 push    es ;~ 00D0:2AD9
cs=0x192;eip=0x002ada; 	X(MOV(word_1a70a, sp));	// 6472 mov     word_1A70A, sp ;~ 00D0:2ADA
cs=0x192;eip=0x002ade; 	T(XOR(ax, ax));	// 6473 xor     ax, ax ;~ 00D0:2ADE
cs=0x192;eip=0x002ae0; 	T(MOV(es, ax));	// 6474 mov     es, ax ;~ 00D0:2AE0
cs=0x192;eip=0x002ae2; 	T(MOV(ax, *(dw*)(raddr(es,0x70))));	// 6476 mov     ax, es:70h ;~ 00D0:2AE2
cs=0x192;eip=0x002ae6; 	X(MOV(word_1a6f0, ax));	// 6477 mov     word_1A6F0, ax ;~ 00D0:2AE6
cs=0x192;eip=0x002ae9; 	T(MOV(ax, *(dw*)(raddr(es,0x72))));	// 6478 mov     ax, es:72h ;~ 00D0:2AE9
cs=0x192;eip=0x002aed; 	X(MOV(word_1a6f2, ax));	// 6479 mov     word_1A6F2, ax ;~ 00D0:2AED
cs=0x192;eip=0x002af0; 	X(MOV(*(dw*)(raddr(es,0x70)), m2c::kloc_12d56));	// 6480 mov     word ptr es:70h, offset loc_12D56 ;~ 00D0:2AF0
cs=0x192;eip=0x002af7; 	X(MOV(*(dw*)(raddr(es,0x72)), cs));	// 6481 mov     word ptr es:72h, cs ;~ 00D0:2AF7
cs=0x192;eip=0x002afc; 	S(IN(al, 0x61));	// 6482 in      al, 61h         ; PC/XT PPI port B bits: ;~ 00D0:2AFC
cs=0x192;eip=0x002afe; 	T(AND(al, 0x0FC));	// 6490 and     al, 0FCh ;~ 00D0:2AFE
cs=0x192;eip=0x002b00; 	X(MOV(byte_1a716, al));	// 6491 mov     byte_1A716, al ;~ 00D0:2B00
cs=0x192;eip=0x002b03; 	T(MOV(bx, 0x79DF));	// 6492 mov     bx, 79DFh ;~ 00D0:2B03
cs=0x192;eip=0x002b06; 	J(CALL(sub_12e06,0));	// 6493 call    sub_12E06 ;~ 00D0:2B06
cs=0x192;eip=0x002b09; 	X(MOV(byte_1a719, 1));	// 6494 mov     byte_1A719, 1 ;~ 00D0:2B09
cs=0x192;eip=0x002b0e; 	X(MOV(byte_1a71a, 0));	// 6495 mov     byte_1A71A, 0 ;~ 00D0:2B0E
cs=0x192;eip=0x002b13; 	T(MOV(si, 0x79A8));	// 6496 mov     si, 79A8h ;~ 00D0:2B13
cs=0x192;eip=0x002b16; 	J(JMP(loc_12b1c));	// 6497 jmp     short loc_12B1C ;~ 00D0:2B16
ret_d0_2b18:
	// 5078 
cs=0x192;eip=0x002b18; 	T(MOV(si, word_1a6f4));	// 6499 mov     si, word_1A6F4 ;~ 00D0:2B18
loc_12b1c:
	// 5079 
cs=0x192;eip=0x002b1c; 	T(MOV(al, *(raddr(ds,si))));	// 6503 mov     al, [si] ;~ 00D0:2B1C
cs=0x192;eip=0x002b1e; 	T(INC(si));	// 6504 inc     si ;~ 00D0:2B1E
cs=0x192;eip=0x002b1f; 	T(OR(al, al));	// 6505 or      al, al ;~ 00D0:2B1F
cs=0x192;eip=0x002b21; 	J(JS(loc_12b26));	// 6506 js      short loc_12B26 ;~ 00D0:2B21
cs=0x192;eip=0x002b23; 	J(JMP(loc_12bb2));	// 6507 jmp     loc_12BB2 ;~ 00D0:2B23
loc_12b26:
	// 5080 
cs=0x192;eip=0x002b26; 	T(AND(al, 0x7F));	// 6511 and     al, 7Fh ;~ 00D0:2B26
cs=0x192;eip=0x002b28; 	J(JNZ(loc_12b2c));	// 6512 jnz     short loc_12B2C ;~ 00D0:2B28
cs=0x192;eip=0x002b2a; 	J(JMP(loc_12abc));	// 6513 jmp     short loc_12ABC ;~ 00D0:2B2A
loc_12b2c:
	// 5081 
cs=0x192;eip=0x002b2c; 	T(DEC(al));	// 6517 dec     al ;~ 00D0:2B2C
cs=0x192;eip=0x002b2e; 	J(JNZ(loc_12b39));	// 6518 jnz     short loc_12B39 ;~ 00D0:2B2E
cs=0x192;eip=0x002b30; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 6519 mov     ax, [si] ;~ 00D0:2B30
cs=0x192;eip=0x002b32; 	T(INC(si));	// 6520 inc     si ;~ 00D0:2B32
cs=0x192;eip=0x002b33; 	T(INC(si));	// 6521 inc     si ;~ 00D0:2B33
cs=0x192;eip=0x002b34; 	X(PUSH(si));	// 6522 push    si ;~ 00D0:2B34
cs=0x192;eip=0x002b35; 	T(MOV(si, ax));	// 6523 mov     si, ax ;~ 00D0:2B35
cs=0x192;eip=0x002b37; 	J(JMP(loc_12b1c));	// 6524 jmp     short loc_12B1C ;~ 00D0:2B37
loc_12b39:
	// 5082 
cs=0x192;eip=0x002b39; 	T(DEC(al));	// 6528 dec     al ;~ 00D0:2B39
cs=0x192;eip=0x002b3b; 	J(JNZ(loc_12b40));	// 6529 jnz     short loc_12B40 ;~ 00D0:2B3B
cs=0x192;eip=0x002b3d; 	X(POP(si));	// 6530 pop     si ;~ 00D0:2B3D
cs=0x192;eip=0x002b3e; 	J(JMP(loc_12b1c));	// 6531 jmp     short loc_12B1C ;~ 00D0:2B3E
loc_12b40:
	// 5083 
cs=0x192;eip=0x002b40; 	T(DEC(al));	// 6535 dec     al ;~ 00D0:2B40
cs=0x192;eip=0x002b42; 	J(JNZ(loc_12b5f));	// 6536 jnz     short loc_12B5F ;~ 00D0:2B42
cs=0x192;eip=0x002b44; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 6537 mov     ax, [si] ;~ 00D0:2B44
cs=0x192;eip=0x002b46; 	T(INC(si));	// 6538 inc     si ;~ 00D0:2B46
cs=0x192;eip=0x002b47; 	T(INC(si));	// 6539 inc     si ;~ 00D0:2B47
cs=0x192;eip=0x002b48; 	T(MOV(cl, byte_1a70c));	// 6540 mov     cl, byte_1A70C ;~ 00D0:2B48
cs=0x192;eip=0x002b4c; 	T(OR(cl, cl));	// 6541 or      cl, cl ;~ 00D0:2B4C
cs=0x192;eip=0x002b4e; 	J(JNZ(loc_12b52));	// 6542 jnz     short loc_12B52 ;~ 00D0:2B4E
cs=0x192;eip=0x002b50; 	T(MOV(cl, *(raddr(ds,si))));	// 6543 mov     cl, [si] ;~ 00D0:2B50
loc_12b52:
	// 5084 
cs=0x192;eip=0x002b52; 	T(INC(si));	// 6546 inc     si ;~ 00D0:2B52
cs=0x192;eip=0x002b53; 	T(DEC(cl));	// 6547 dec     cl ;~ 00D0:2B53
cs=0x192;eip=0x002b55; 	X(MOV(byte_1a70c, cl));	// 6548 mov     byte_1A70C, cl ;~ 00D0:2B55
cs=0x192;eip=0x002b59; 	J(JZ(loc_12b1c));	// 6549 jz      short loc_12B1C ;~ 00D0:2B59
cs=0x192;eip=0x002b5b; 	T(MOV(si, ax));	// 6550 mov     si, ax ;~ 00D0:2B5B
cs=0x192;eip=0x002b5d; 	J(JMP(loc_12b1c));	// 6551 jmp     short loc_12B1C ;~ 00D0:2B5D
loc_12b5f:
	// 5085 
cs=0x192;eip=0x002b5f; 	T(DEC(al));	// 6555 dec     al ;~ 00D0:2B5F
cs=0x192;eip=0x002b61; 	J(JNZ(loc_12b6b));	// 6556 jnz     short loc_12B6B ;~ 00D0:2B61
cs=0x192;eip=0x002b63; 	T(MOV(al, *(raddr(ds,si))));	// 6557 mov     al, [si] ;~ 00D0:2B63
cs=0x192;eip=0x002b65; 	T(INC(si));	// 6558 inc     si ;~ 00D0:2B65
cs=0x192;eip=0x002b66; 	X(MOV(byte_1a70d, al));	// 6559 mov     byte_1A70D, al ;~ 00D0:2B66
cs=0x192;eip=0x002b69; 	J(JMP(loc_12b1c));	// 6560 jmp     short loc_12B1C ;~ 00D0:2B69
loc_12b6b:
	// 5086 
cs=0x192;eip=0x002b6b; 	T(DEC(al));	// 6564 dec     al ;~ 00D0:2B6B
cs=0x192;eip=0x002b6d; 	J(JNZ(loc_12b89));	// 6565 jnz     short loc_12B89 ;~ 00D0:2B6D
cs=0x192;eip=0x002b6f; 	T(MOV(cl, 1));	// 6566 mov     cl, 1 ;~ 00D0:2B6F
loc_12b71:
	// 5087 
cs=0x192;eip=0x002b71; 	T(MOV(al, *(raddr(ds,si))));	// 6569 mov     al, [si] ;~ 00D0:2B71
cs=0x192;eip=0x002b73; 	T(INC(si));	// 6570 inc     si ;~ 00D0:2B73
cs=0x192;eip=0x002b74; 	T(OR(al, al));	// 6571 or      al, al ;~ 00D0:2B74
cs=0x192;eip=0x002b76; 	J(JZ(loc_12b84));	// 6572 jz      short loc_12B84 ;~ 00D0:2B76
cs=0x192;eip=0x002b78; 	T(MOV(ah, 0));	// 6573 mov     ah, 0 ;~ 00D0:2B78
cs=0x192;eip=0x002b7a; 	T(MOV(bx, 0x78D6));	// 6574 mov     bx, 78D6h ;~ 00D0:2B7A
cs=0x192;eip=0x002b7d; 	T(ADD(ax, bx));	// 6575 add     ax, bx ;~ 00D0:2B7D
cs=0x192;eip=0x002b7f; 	X(MOV(word_1a6f6, ax));	// 6576 mov     word_1A6F6, ax ;~ 00D0:2B7F
cs=0x192;eip=0x002b82; 	T(MOV(al, cl));	// 6577 mov     al, cl ;~ 00D0:2B82
loc_12b84:
	// 5088 
cs=0x192;eip=0x002b84; 	X(MOV(byte_1a70f, al));	// 6580 mov     byte_1A70F, al ;~ 00D0:2B84
cs=0x192;eip=0x002b87; 	J(JMP(loc_12b1c));	// 6581 jmp     short loc_12B1C ;~ 00D0:2B87
loc_12b89:
	// 5089 
cs=0x192;eip=0x002b89; 	T(DEC(al));	// 6585 dec     al ;~ 00D0:2B89
cs=0x192;eip=0x002b8b; 	J(JNZ(loc_12b91));	// 6586 jnz     short loc_12B91 ;~ 00D0:2B8B
cs=0x192;eip=0x002b8d; 	T(MOV(cl, 2));	// 6587 mov     cl, 2 ;~ 00D0:2B8D
cs=0x192;eip=0x002b8f; 	J(JMP(loc_12b71));	// 6588 jmp     short loc_12B71 ;~ 00D0:2B8F
loc_12b91:
	// 5090 
cs=0x192;eip=0x002b91; 	T(MOV(al, *(raddr(ds,si))));	// 6592 mov     al, [si] ;~ 00D0:2B91
cs=0x192;eip=0x002b93; 	T(INC(si));	// 6593 inc     si ;~ 00D0:2B93
cs=0x192;eip=0x002b94; 	T(MOV(ah, 0));	// 6594 mov     ah, 0 ;~ 00D0:2B94
cs=0x192;eip=0x002b96; 	T(MOV(bx, 0x78D6));	// 6595 mov     bx, 78D6h ;~ 00D0:2B96
cs=0x192;eip=0x002b99; 	T(ADD(bx, ax));	// 6596 add     bx, ax ;~ 00D0:2B99
cs=0x192;eip=0x002b9b; 	T(MOV(cl, *(raddr(ds,bx))));	// 6597 mov     cl, [bx] ;~ 00D0:2B9B
cs=0x192;eip=0x002b9d; 	X(MOV(byte_1a711, cl));	// 6598 mov     byte_1A711, cl ;~ 00D0:2B9D
cs=0x192;eip=0x002ba1; 	T(INC(bx));	// 6599 inc     bx ;~ 00D0:2BA1
cs=0x192;eip=0x002ba2; 	T(MOV(cl, *(raddr(ds,bx))));	// 6600 mov     cl, [bx] ;~ 00D0:2BA2
cs=0x192;eip=0x002ba4; 	X(MOV(byte_1a712, cl));	// 6601 mov     byte_1A712, cl ;~ 00D0:2BA4
cs=0x192;eip=0x002ba8; 	T(INC(bx));	// 6602 inc     bx ;~ 00D0:2BA8
cs=0x192;eip=0x002ba9; 	T(MOV(al, *(raddr(ds,bx))));	// 6603 mov     al, [bx] ;~ 00D0:2BA9
cs=0x192;eip=0x002bab; 	T(CBW);	// 6604 cbw ;~ 00D0:2BAB
cs=0x192;eip=0x002bac; 	X(MOV(word_1a704, ax));	// 6605 mov     word_1A704, ax ;~ 00D0:2BAC
cs=0x192;eip=0x002baf; 	J(JMP(loc_12b1c));	// 6606 jmp     loc_12B1C ;~ 00D0:2BAF
loc_12bb2:
	// 5091 
cs=0x192;eip=0x002bb2; 	X(MOV(byte_1a717, al));	// 6610 mov     byte_1A717, al ;~ 00D0:2BB2
loc_12bb5:
	// 5092 
cs=0x192;eip=0x002bb5; 	T(MOV(al, *(raddr(ds,si))));	// 6613 mov     al, [si] ;~ 00D0:2BB5
cs=0x192;eip=0x002bb7; 	T(INC(si));	// 6614 inc     si ;~ 00D0:2BB7
cs=0x192;eip=0x002bb8; 	X(MOV(word_1a6f4, si));	// 6615 mov     word_1A6F4, si ;~ 00D0:2BB8
cs=0x192;eip=0x002bbc; 	X(PUSH(ax));	// 6616 push    ax ;~ 00D0:2BBC
cs=0x192;eip=0x002bbd; 	T(MOV(ah, 1));	// 6617 mov     ah, 1 ;~ 00D0:2BBD
cs=0x192;eip=0x002bbf; 	S(_INT(0x16));	// 6618 int     16h             ; KEYBOARD - CHECK BUFFER, DO NOT CLEAR ;~ 00D0:2BBF
cs=0x192;eip=0x002bc1; 	X(POP(ax));	// 6622 pop     ax ;~ 00D0:2BC1
cs=0x192;eip=0x002bc2; 	J(JZ(loc_12bc7));	// 6623 jz      short loc_12BC7 ;~ 00D0:2BC2
cs=0x192;eip=0x002bc4; 	J(JMP(loc_12abc));	// 6624 jmp     loc_12ABC ;~ 00D0:2BC4
loc_12bc7:
	// 5093 
cs=0x192;eip=0x002bc7; 	T(MOV(ah, al));	// 6628 mov     ah, al ;~ 00D0:2BC7
cs=0x192;eip=0x002bc9; 	T(AND(al, 0x0F8));	// 6629 and     al, 0F8h ;~ 00D0:2BC9
cs=0x192;eip=0x002bcb; 	X(MOV(byte_1a718, al));	// 6630 mov     byte_1A718, al ;~ 00D0:2BCB
cs=0x192;eip=0x002bce; 	T(MOV(al, ah));	// 6631 mov     al, ah ;~ 00D0:2BCE
cs=0x192;eip=0x002bd0; 	J(CALL(sub_12e18,0));	// 6632 call    sub_12E18 ;~ 00D0:2BD0
cs=0x192;eip=0x002bd3; 	J(JNZ(loc_12bd8));	// 6633 jnz     short loc_12BD8 ;~ 00D0:2BD3
cs=0x192;eip=0x002bd5; 	J(JMP(loc_12d53));	// 6634 jmp     loc_12D53 ;~ 00D0:2BD5
loc_12bd8:
	// 5094 
cs=0x192;eip=0x002bd8; 	X(MOV(byte_1a70e, al));	// 6638 mov     byte_1A70E, al ;~ 00D0:2BD8
cs=0x192;eip=0x002bdb; 	T(TEST(byte_1a70f, 1));	// 6639 test    byte_1A70F, 1 ;~ 00D0:2BDB
cs=0x192;eip=0x002be0; 	J(JZ(loc_12c1c));	// 6640 jz      short loc_12C1C ;~ 00D0:2BE0
cs=0x192;eip=0x002be2; 	J(CALL(sub_12e4d,0));	// 6641 call    sub_12E4D ;~ 00D0:2BE2
cs=0x192;eip=0x002be5; 	T(MOV(ah, 0));	// 6642 mov     ah, 0 ;~ 00D0:2BE5
cs=0x192;eip=0x002be7; 	T(ADD(cx, ax));	// 6643 add     cx, ax ;~ 00D0:2BE7
cs=0x192;eip=0x002be9; 	X(MOV(word_1a6f8, cx));	// 6644 mov     word_1A6F8, cx ;~ 00D0:2BE9
cs=0x192;eip=0x002bed; 	T(SUB(cx, ax));	// 6645 sub     cx, ax ;~ 00D0:2BED
cs=0x192;eip=0x002bef; 	T(SUB(cx, ax));	// 6646 sub     cx, ax ;~ 00D0:2BEF
cs=0x192;eip=0x002bf1; 	X(MOV(word_1a6fa, cx));	// 6647 mov     word_1A6FA, cx ;~ 00D0:2BF1
cs=0x192;eip=0x002bf5; 	T(ADD(cx, ax));	// 6648 add     cx, ax ;~ 00D0:2BF5
loc_12bf7:
	// 5095 
cs=0x192;eip=0x002bf7; 	T(INC(bx));	// 6651 inc     bx ;~ 00D0:2BF7
cs=0x192;eip=0x002bf8; 	T(MOV(al, *(raddr(ds,bx))));	// 6652 mov     al, [bx] ;~ 00D0:2BF8
cs=0x192;eip=0x002bfa; 	T(OR(al, al));	// 6653 or      al, al ;~ 00D0:2BFA
cs=0x192;eip=0x002bfc; 	J(JZ(loc_12c54));	// 6654 jz      short loc_12C54 ;~ 00D0:2BFC
cs=0x192;eip=0x002bfe; 	X(PUSH(ax));	// 6655 push    ax ;~ 00D0:2BFE
cs=0x192;eip=0x002bff; 	T(XOR(ax, ax));	// 6656 xor     ax, ax ;~ 00D0:2BFF
cs=0x192;eip=0x002c01; 	X(XCHG(ax, word_1a6fc));	// 6657 xchg    ax, word_1A6FC ;~ 00D0:2C01
cs=0x192;eip=0x002c05; 	X(MOV(word_1a6fe, ax));	// 6658 mov     word_1A6FE, ax ;~ 00D0:2C05
cs=0x192;eip=0x002c08; 	X(POP(ax));	// 6659 pop     ax ;~ 00D0:2C08
cs=0x192;eip=0x002c09; 	T(MOV(ah, al));	// 6660 mov     ah, al ;~ 00D0:2C09
cs=0x192;eip=0x002c0b; 	T(NEG(al));	// 6661 neg     al ;~ 00D0:2C0B
cs=0x192;eip=0x002c0d; 	T(ADD(al, byte_1a70e));	// 6662 add     al, byte_1A70E ;~ 00D0:2C0D
cs=0x192;eip=0x002c11; 	J(JNC(loc_12c54));	// 6663 jnb     short loc_12C54 ;~ 00D0:2C11
cs=0x192;eip=0x002c13; 	X(MOV(byte_1a70e, ah));	// 6664 mov     byte_1A70E, ah ;~ 00D0:2C13
cs=0x192;eip=0x002c17; 	X(MOV(byte_1a710, al));	// 6665 mov     byte_1A710, al ;~ 00D0:2C17
cs=0x192;eip=0x002c1a; 	J(JMP(loc_12c54));	// 6666 jmp     short loc_12C54 ;~ 00D0:2C1A
loc_12c1c:
	// 5096 
cs=0x192;eip=0x002c1c; 	T(TEST(byte_1a70f, 2));	// 6670 test    byte_1A70F, 2 ;~ 00D0:2C1C
cs=0x192;eip=0x002c21; 	J(JZ(loc_12c42));	// 6671 jz      short loc_12C42 ;~ 00D0:2C21
cs=0x192;eip=0x002c23; 	J(CALL(sub_12e4d,0));	// 6672 call    sub_12E4D ;~ 00D0:2C23
cs=0x192;eip=0x002c26; 	X(PUSH(cx));	// 6673 push    cx ;~ 00D0:2C26
cs=0x192;eip=0x002c27; 	X(PUSH(bx));	// 6674 push    bx ;~ 00D0:2C27
cs=0x192;eip=0x002c28; 	T(TEST(ah, 0x80));	// 6675 test    ah, 80h ;~ 00D0:2C28
cs=0x192;eip=0x002c2b; 	J(JNZ(loc_12c2f));	// 6676 jnz     short loc_12C2F ;~ 00D0:2C2B
cs=0x192;eip=0x002c2d; 	T(NEG(al));	// 6677 neg     al ;~ 00D0:2C2D
loc_12c2f:
	// 5097 
cs=0x192;eip=0x002c2f; 	T(ADD(al, byte_1a718));	// 6680 add     al, byte_1A718 ;~ 00D0:2C2F
cs=0x192;eip=0x002c33; 	J(CALL(sub_12e18,0));	// 6681 call    sub_12E18 ;~ 00D0:2C33
cs=0x192;eip=0x002c36; 	X(MOV(word_1a6f8, cx));	// 6682 mov     word_1A6F8, cx ;~ 00D0:2C36
cs=0x192;eip=0x002c3a; 	X(MOV(word_1a6fa, cx));	// 6683 mov     word_1A6FA, cx ;~ 00D0:2C3A
cs=0x192;eip=0x002c3e; 	X(POP(bx));	// 6684 pop     bx ;~ 00D0:2C3E
cs=0x192;eip=0x002c3f; 	X(POP(cx));	// 6685 pop     cx ;~ 00D0:2C3F
cs=0x192;eip=0x002c40; 	J(JMP(loc_12bf7));	// 6686 jmp     short loc_12BF7 ;~ 00D0:2C40
loc_12c42:
	// 5098 
cs=0x192;eip=0x002c42; 	X(MOV(word_1a6f8, cx));	// 6690 mov     word_1A6F8, cx ;~ 00D0:2C42
cs=0x192;eip=0x002c46; 	X(MOV(word_1a6fa, cx));	// 6691 mov     word_1A6FA, cx ;~ 00D0:2C46
cs=0x192;eip=0x002c4a; 	X(MOV(word_1a6fc, 0));	// 6692 mov     word_1A6FC, 0 ;~ 00D0:2C4A
cs=0x192;eip=0x002c50; 	X(MOV(word_1a6f8, cx));	// 6693 mov     word_1A6F8, cx ;~ 00D0:2C50
loc_12c54:
	// 5099 
cs=0x192;eip=0x002c54; 	X(MOV(word_1a700, cx));	// 6697 mov     word_1A700, cx ;~ 00D0:2C54
cs=0x192;eip=0x002c58; 	T(MOV(dx, 0));	// 6698 mov     dx, 0 ;~ 00D0:2C58
cs=0x192;eip=0x002c5b; 	T(MOV(al, byte_1a711));	// 6699 mov     al, byte_1A711 ;~ 00D0:2C5B
cs=0x192;eip=0x002c5e; 	T(OR(al, al));	// 6700 or      al, al ;~ 00D0:2C5E
cs=0x192;eip=0x002c60; 	J(JZ(loc_12c72));	// 6701 jz      short loc_12C72 ;~ 00D0:2C60
cs=0x192;eip=0x002c62; 	T(MOV(dx, cx));	// 6702 mov     dx, cx ;~ 00D0:2C62
cs=0x192;eip=0x002c64; 	T(DEC(dx));	// 6703 dec     dx ;~ 00D0:2C64
cs=0x192;eip=0x002c65; 	T(DEC(dx));	// 6704 dec     dx ;~ 00D0:2C65
cs=0x192;eip=0x002c66; 	T(DEC(al));	// 6705 dec     al ;~ 00D0:2C66
cs=0x192;eip=0x002c68; 	J(JZ(loc_12c72));	// 6706 jz      short loc_12C72 ;~ 00D0:2C68
cs=0x192;eip=0x002c6a; 	T(INC(dx));	// 6707 inc     dx ;~ 00D0:2C6A
cs=0x192;eip=0x002c6b; 	T(INC(dx));	// 6708 inc     dx ;~ 00D0:2C6B
loc_12c6c:
	// 5100 
cs=0x192;eip=0x002c6c; 	T(SHR(dx, 1));	// 6711 shr     dx, 1 ;~ 00D0:2C6C
cs=0x192;eip=0x002c6e; 	T(DEC(al));	// 6712 dec     al ;~ 00D0:2C6E
cs=0x192;eip=0x002c70; 	J(JNZ(loc_12c6c));	// 6713 jnz     short loc_12C6C ;~ 00D0:2C70
loc_12c72:
	// 5101 
cs=0x192;eip=0x002c72; 	X(MOV(word_1a702, dx));	// 6717 mov     word_1A702, dx ;~ 00D0:2C72
cs=0x192;eip=0x002c76; 	X(MOV(byte_1a71c, 1));	// 6718 mov     byte_1A71C, 1 ;~ 00D0:2C76
cs=0x192;eip=0x002c7b; 	T(STI);	// 6719 sti ;~ 00D0:2C7B
loc_12c7c:
	// 5102 
cs=0x192;eip=0x002c7c; 	T(MOV(ax, word_1a702));	// 6722 mov     ax, word_1A702 ;~ 00D0:2C7C
cs=0x192;eip=0x002c7f; 	X(DEC(byte_1a713));	// 6723 dec     byte_1A713 ;~ 00D0:2C7F
cs=0x192;eip=0x002c83; 	T(MOV(bl, byte_1a713));	// 6724 mov     bl, byte_1A713 ;~ 00D0:2C83
cs=0x192;eip=0x002c87; 	T(AND(bl, byte_1a712));	// 6725 and     bl, byte_1A712 ;~ 00D0:2C87
cs=0x192;eip=0x002c8b; 	J(JNZ(loc_12c91));	// 6726 jnz     short loc_12C91 ;~ 00D0:2C8B
cs=0x192;eip=0x002c8d; 	T(ADD(ax, word_1a704));	// 6727 add     ax, word_1A704 ;~ 00D0:2C8D
loc_12c91:
	// 5103 
cs=0x192;eip=0x002c91; 	T(TEST(byte_1a716, 2));	// 6730 test    byte_1A716, 2 ;~ 00D0:2C91
cs=0x192;eip=0x002c96; 	J(JZ(loc_12c9e));	// 6731 jz      short loc_12C9E ;~ 00D0:2C96
cs=0x192;eip=0x002c98; 	T(ADD(cx, ax));	// 6732 add     cx, ax ;~ 00D0:2C98
cs=0x192;eip=0x002c9a; 	J({;});	// 6733 jmp     short $+2 ;~ 00D0:2C9A
loc_12c9c:
	// 5104 
cs=0x192;eip=0x002c9c; 	J(JMP(loc_12caf));	// 6737 jmp     short loc_12CAF ;~ 00D0:2C9C
loc_12c9e:
	// 5105 
cs=0x192;eip=0x002c9e; 	T(SUB(cx, ax));	// 6741 sub     cx, ax ;~ 00D0:2C9E
cs=0x192;eip=0x002ca0; 	J(JA(loc_12caf));	// 6742 ja      short loc_12CAF ;~ 00D0:2CA0
cs=0x192;eip=0x002ca2; 	X(NEG(word_1a704));	// 6743 neg     word_1A704 ;~ 00D0:2CA2
cs=0x192;eip=0x002ca6; 	T(ADD(ax, word_1a704));	// 6744 add     ax, word_1A704 ;~ 00D0:2CA6
cs=0x192;eip=0x002caa; 	T(MOV(cx, 1));	// 6745 mov     cx, 1 ;~ 00D0:2CAA
cs=0x192;eip=0x002cad; 	J(JMP(loc_12cb9));	// 6746 jmp     short loc_12CB9 ;~ 00D0:2CAD
loc_12caf:
	// 5106 
cs=0x192;eip=0x002caf; 	T(MOV(dh, 3));	// 6751 mov     dh, 3 ;~ 00D0:2CAF
loc_12cb1:
	// 5107 
cs=0x192;eip=0x002cb1; 	T(DEC(dh));	// 6754 dec     dh ;~ 00D0:2CB1
cs=0x192;eip=0x002cb3; 	J(JNZ(loc_12cb1));	// 6755 jnz     short loc_12CB1 ;~ 00D0:2CB3
cs=0x192;eip=0x002cb5; 	T(NOP);	// 6756 nop ;~ 00D0:2CB5
cs=0x192;eip=0x002cb6; 	T(NOP);	// 6757 nop ;~ 00D0:2CB6
cs=0x192;eip=0x002cb7; 	T(NOP);	// 6758 nop ;~ 00D0:2CB7
cs=0x192;eip=0x002cb8; 	T(NOP);	// 6759 nop ;~ 00D0:2CB8
loc_12cb9:
	// 5108 
cs=0x192;eip=0x002cb9; 	X(MOV(word_1a702, ax));	// 6762 mov     word_1A702, ax ;~ 00D0:2CB9
loc_12cbc:
	// 5109 
cs=0x192;eip=0x002cbc; 	S(LOOP(loc_12cbc));	// 6765 loop    loc_12CBC ;~ 00D0:2CBC
cs=0x192;eip=0x002cbe; 	T(MOV(al, byte_1a716));	// 6766 mov     al, byte_1A716 ;~ 00D0:2CBE
cs=0x192;eip=0x002cc1; 	T(XOR(al, byte_14a12));	// 6767 xor     al, byte_14A12 ;~ 00D0:2CC1
cs=0x192;eip=0x002cc5; 	X(MOV(byte_1a716, al));	// 6768 mov     byte_1A716, al ;~ 00D0:2CC5
cs=0x192;eip=0x002cc8; 	S(OUT(0x61, al));	// 6769 out     61h, al         ; PC/XT PPI port B bits: ;~ 00D0:2CC8
cs=0x192;eip=0x002cca; 	T(MOV(cx, word_1a700));	// 6777 mov     cx, word_1A700 ;~ 00D0:2CCA
cs=0x192;eip=0x002cce; 	X(DEC(byte_1a714));	// 6778 dec     byte_1A714 ;~ 00D0:2CCE
cs=0x192;eip=0x002cd2; 	T(MOV(al, byte_1a714));	// 6779 mov     al, byte_1A714 ;~ 00D0:2CD2
cs=0x192;eip=0x002cd5; 	T(AND(al, byte_1a715));	// 6780 and     al, byte_1A715 ;~ 00D0:2CD5
cs=0x192;eip=0x002cd9; 	T(MOV(ax, word_1a6fc));	// 6781 mov     ax, word_1A6FC ;~ 00D0:2CD9
cs=0x192;eip=0x002cdc; 	J(JNZ(loc_12d45));	// 6782 jnz     short loc_12D45 ;~ 00D0:2CDC
cs=0x192;eip=0x002cde; 	T(OR(ax, ax));	// 6783 or      ax, ax ;~ 00D0:2CDE
cs=0x192;eip=0x002ce0; 	J(JZ(loc_12d47));	// 6784 jz      short loc_12D47 ;~ 00D0:2CE0
cs=0x192;eip=0x002ce2; 	T(ADD(cx, ax));	// 6785 add     cx, ax ;~ 00D0:2CE2
cs=0x192;eip=0x002ce4; 	T(MOV(dx, cx));	// 6786 mov     dx, cx ;~ 00D0:2CE4
cs=0x192;eip=0x002ce6; 	T(TEST(ah, 0x80));	// 6787 test    ah, 80h ;~ 00D0:2CE6
cs=0x192;eip=0x002ce9; 	J(JNZ(loc_12cf5));	// 6788 jnz     short loc_12CF5 ;~ 00D0:2CE9
cs=0x192;eip=0x002ceb; 	T(DEC(dx));	// 6789 dec     dx ;~ 00D0:2CEB
cs=0x192;eip=0x002cec; 	T(MOV(ax, word_1a6f8));	// 6790 mov     ax, word_1A6F8 ;~ 00D0:2CEC
cs=0x192;eip=0x002cef; 	T(SUB(dx, ax));	// 6791 sub     dx, ax ;~ 00D0:2CEF
cs=0x192;eip=0x002cf1; 	J(JNC(loc_12d26));	// 6792 jnb     short loc_12D26 ;~ 00D0:2CF1
cs=0x192;eip=0x002cf3; 	J(JMP(loc_12d01));	// 6793 jmp     short loc_12D01 ;~ 00D0:2CF3
loc_12cf5:
	// 5110 
cs=0x192;eip=0x002cf5; 	T(MOV(ax, word_1a6fa));	// 6797 mov     ax, word_1A6FA ;~ 00D0:2CF5
cs=0x192;eip=0x002cf8; 	T(SUB(dx, ax));	// 6798 sub     dx, ax ;~ 00D0:2CF8
cs=0x192;eip=0x002cfa; 	J(JC(loc_12d26));	// 6799 jb      short loc_12D26 ;~ 00D0:2CFA
cs=0x192;eip=0x002cfc; 	T(NOP);	// 6800 nop ;~ 00D0:2CFC
cs=0x192;eip=0x002cfd; 	T(NOP);	// 6801 nop ;~ 00D0:2CFD
cs=0x192;eip=0x002cfe; 	T(NOP);	// 6802 nop ;~ 00D0:2CFE
cs=0x192;eip=0x002cff; 	T(NOP);	// 6803 nop ;~ 00D0:2CFF
cs=0x192;eip=0x002d00; 	T(NOP);	// 6804 nop ;~ 00D0:2D00
loc_12d01:
	// 5111 
cs=0x192;eip=0x002d01; 	T(MOV(dh, 8));	// 6807 mov     dh, 8 ;~ 00D0:2D01
loc_12d03:
	// 5112 
cs=0x192;eip=0x002d03; 	T(DEC(dh));	// 6810 dec     dh ;~ 00D0:2D03
cs=0x192;eip=0x002d05; 	J(JNZ(loc_12d03));	// 6811 jnz     short loc_12D03 ;~ 00D0:2D05
loc_12d07:
	// 5113 
cs=0x192;eip=0x002d07; 	X(MOV(word_1a700, cx));	// 6814 mov     word_1A700, cx ;~ 00D0:2D07
loc_12d0b:
	// 5114 
cs=0x192;eip=0x002d0b; 	T(TEST(byte_1a71c, 1));	// 6817 test    byte_1A71C, 1 ;~ 00D0:2D0B
cs=0x192;eip=0x002d10; 	J(JZ(loc_12d15));	// 6818 jz      short loc_12D15 ;~ 00D0:2D10
cs=0x192;eip=0x002d12; 	J(JMP(loc_12c7c));	// 6819 jmp     loc_12C7C ;~ 00D0:2D12
loc_12d15:
	// 5115 
cs=0x192;eip=0x002d15; 	T(CLI);	// 6823 cli ;~ 00D0:2D15
cs=0x192;eip=0x002d16; 	T(MOV(si, word_1a6f4));	// 6824 mov     si, word_1A6F4 ;~ 00D0:2D16
cs=0x192;eip=0x002d1a; 	X(DEC(byte_1a717));	// 6825 dec     byte_1A717 ;~ 00D0:2D1A
cs=0x192;eip=0x002d1e; 	J(JZ(loc_12d23));	// 6826 jz      short loc_12D23 ;~ 00D0:2D1E
cs=0x192;eip=0x002d20; 	J(JMP(loc_12bb5));	// 6827 jmp     loc_12BB5 ;~ 00D0:2D20
loc_12d23:
	// 5116 
cs=0x192;eip=0x002d23; 	J(JMP(loc_12b1c));	// 6831 jmp     loc_12B1C ;~ 00D0:2D23
loc_12d26:
	// 5117 
cs=0x192;eip=0x002d26; 	T(MOV(cx, 0));	// 6836 mov     cx, 0 ;~ 00D0:2D26
cs=0x192;eip=0x002d29; 	T(TEST(byte_1a70f, 1));	// 6837 test    byte_1A70F, 1 ;~ 00D0:2D29
cs=0x192;eip=0x002d2e; 	J(JNZ(loc_12d3f));	// 6838 jnz     short loc_12D3F ;~ 00D0:2D2E
cs=0x192;eip=0x002d30; 	T(MOV(dh, 3));	// 6839 mov     dh, 3 ;~ 00D0:2D30
loc_12d32:
	// 5118 
cs=0x192;eip=0x002d32; 	T(DEC(dh));	// 6842 dec     dh ;~ 00D0:2D32
cs=0x192;eip=0x002d34; 	J(JNZ(loc_12d32));	// 6843 jnz     short loc_12D32 ;~ 00D0:2D34
cs=0x192;eip=0x002d36; 	T(NOP);	// 6844 nop ;~ 00D0:2D36
loc_12d37:
	// 5119 
cs=0x192;eip=0x002d37; 	X(MOV(word_1a6fc, cx));	// 6847 mov     word_1A6FC, cx ;~ 00D0:2D37
cs=0x192;eip=0x002d3b; 	T(MOV(cx, ax));	// 6848 mov     cx, ax ;~ 00D0:2D3B
cs=0x192;eip=0x002d3d; 	J(JMP(loc_12d07));	// 6849 jmp     short loc_12D07 ;~ 00D0:2D3D
loc_12d3f:
	// 5120 
cs=0x192;eip=0x002d3f; 	T(SUB(cx, word_1a6fc));	// 6853 sub     cx, word_1A6FC ;~ 00D0:2D3F
cs=0x192;eip=0x002d43; 	J(JMP(loc_12d37));	// 6854 jmp     short loc_12D37 ;~ 00D0:2D43
loc_12d45:
	// 5121 
cs=0x192;eip=0x002d45; 	T(NOP);	// 6858 nop ;~ 00D0:2D45
cs=0x192;eip=0x002d46; 	T(NOP);	// 6859 nop ;~ 00D0:2D46
loc_12d47:
	// 5122 
cs=0x192;eip=0x002d47; 	T(MOV(dh, 9));	// 6862 mov     dh, 9 ;~ 00D0:2D47
loc_12d49:
	// 5123 
cs=0x192;eip=0x002d49; 	T(DEC(dh));	// 6865 dec     dh ;~ 00D0:2D49
cs=0x192;eip=0x002d4b; 	J(JNZ(loc_12d49));	// 6866 jnz     short loc_12D49 ;~ 00D0:2D4B
cs=0x192;eip=0x002d4d; 	T(NOP);	// 6867 nop ;~ 00D0:2D4D
cs=0x192;eip=0x002d4e; 	T(NOP);	// 6868 nop ;~ 00D0:2D4E
cs=0x192;eip=0x002d4f; 	T(NOP);	// 6869 nop ;~ 00D0:2D4F
cs=0x192;eip=0x002d50; 	T(NOP);	// 6870 nop ;~ 00D0:2D50
cs=0x192;eip=0x002d51; 	J(JMP(loc_12d0b));	// 6871 jmp     short loc_12D0B ;~ 00D0:2D51
loc_12d53:
	// 5124 
cs=0x192;eip=0x002d53; 	T(STI);	// 6875 sti ;~ 00D0:2D53
loc_12d54:
	// 5125 
cs=0x192;eip=0x002d54; 	J(JMP(loc_12d54));	// 6878 jmp     short loc_12D54 ;~ 00D0:2D54
seg000_2d56_proc:
	// 6883 
loc_12d56:
	// 5126 
cs=0x192;eip=0x002d56; 	X(PUSH(ds));	// 6884 push    ds ;~ 00D0:2D56
cs=0x192;eip=0x002d57; 	X(PUSH(ax));	// 6885 push    ax ;~ 00D0:2D57
cs=0x192;eip=0x002d58; 	T(MOV(ax, 0x2E61));	// 6886 mov     ax, 2E61h ;~ 00D0:2D58
cs=0x192;eip=0x002d5b; 	T(SHR(ax, 1));	// 6887 shr     ax, 1 ;~ 00D0:2D5B
cs=0x192;eip=0x002d5d; 	T(SHR(ax, 1));	// 6888 shr     ax, 1 ;~ 00D0:2D5D
cs=0x192;eip=0x002d5f; 	T(SHR(ax, 1));	// 6889 shr     ax, 1 ;~ 00D0:2D5F
cs=0x192;eip=0x002d61; 	T(SHR(ax, 1));	// 6890 shr     ax, 1 ;~ 00D0:2D61
cs=0x192;eip=0x002d63; 	X(PUSH(bx));	// 6891 push    bx ;~ 00D0:2D63
cs=0x192;eip=0x002d64; 	T(MOV(bx, cs));	// 6892 mov     bx, cs ;~ 00D0:2D64
cs=0x192;eip=0x002d66; 	T(ADD(ax, bx));	// 6893 add     ax, bx ;~ 00D0:2D66
cs=0x192;eip=0x002d68; 	X(POP(bx));	// 6894 pop     bx ;~ 00D0:2D68
cs=0x192;eip=0x002d69; 	T(MOV(ds, ax));	// 6895 mov     ds, ax ;~ 00D0:2D69
cs=0x192;eip=0x002d6b; 	X(DEC(byte_1a719));	// 6896 dec     byte_1A719 ;~ 00D0:2D6B
cs=0x192;eip=0x002d6f; 	J(JNZ(loc_12da8));	// 6897 jnz     short loc_12DA8 ;~ 00D0:2D6F
cs=0x192;eip=0x002d71; 	X(PUSH(bx));	// 6898 push    bx ;~ 00D0:2D71
cs=0x192;eip=0x002d72; 	X(PUSH(cx));	// 6899 push    cx ;~ 00D0:2D72
cs=0x192;eip=0x002d73; 	X(PUSH(dx));	// 6900 push    dx ;~ 00D0:2D73
cs=0x192;eip=0x002d74; 	X(INC(byte_1a71a));	// 6901 inc     byte_1A71A ;~ 00D0:2D74
cs=0x192;eip=0x002d78; 	T(MOV(al, byte_1a71a));	// 6902 mov     al, byte_1A71A ;~ 00D0:2D78
cs=0x192;eip=0x002d7b; 	T(CMP(al, 0x10));	// 6903 cmp     al, 10h ;~ 00D0:2D7B
cs=0x192;eip=0x002d7d; 	J(JNZ(loc_12d8d));	// 6904 jnz     short loc_12D8D ;~ 00D0:2D7D
cs=0x192;eip=0x002d7f; 	X(DEC(byte_1a71b));	// 6905 dec     byte_1A71B ;~ 00D0:2D7F
cs=0x192;eip=0x002d83; 	J(JNZ(loc_12d88));	// 6906 jnz     short loc_12D88 ;~ 00D0:2D83
cs=0x192;eip=0x002d85; 	J(CALL(sub_12e02,0));	// 6907 call    sub_12E02 ;~ 00D0:2D85
loc_12d88:
	// 5127 
cs=0x192;eip=0x002d88; 	X(MOV(byte_1a71a, 0));	// 6910 mov     byte_1A71A, 0 ;~ 00D0:2D88
loc_12d8d:
	// 5128 
cs=0x192;eip=0x002d8d; 	T(MOV(bx, word_1a706));	// 6913 mov     bx, word_1A706 ;~ 00D0:2D8D
cs=0x192;eip=0x002d91; 	T(MOV(al, byte_1a71a));	// 6914 mov     al, byte_1A71A ;~ 00D0:2D91
cs=0x192;eip=0x002d94; 	T(XLAT);	// 6915 xlat ;~ 00D0:2D94
cs=0x192;eip=0x002d95; 	T(OR(al, al));	// 6916 or      al, al ;~ 00D0:2D95
cs=0x192;eip=0x002d97; 	J(JZ(loc_12da0));	// 6917 jz      short loc_12DA0 ;~ 00D0:2D97
cs=0x192;eip=0x002d99; 	T(MOV(ch, al));	// 6918 mov     ch, al ;~ 00D0:2D99
cs=0x192;eip=0x002d9b; 	T(MOV(dh, 0x14));	// 6919 mov     dh, 14h ;~ 00D0:2D9B
cs=0x192;eip=0x002d9d; 	J(CALL(sub_12dd0,0));	// 6920 call    sub_12DD0 ;~ 00D0:2D9D
loc_12da0:
	// 5129 
cs=0x192;eip=0x002da0; 	X(MOV(byte_1a719, 2));	// 6923 mov     byte_1A719, 2 ;~ 00D0:2DA0
cs=0x192;eip=0x002da5; 	X(POP(dx));	// 6924 pop     dx ;~ 00D0:2DA5
cs=0x192;eip=0x002da6; 	X(POP(cx));	// 6925 pop     cx ;~ 00D0:2DA6
cs=0x192;eip=0x002da7; 	X(POP(bx));	// 6926 pop     bx ;~ 00D0:2DA7
loc_12da8:
	// 5130 
cs=0x192;eip=0x002da8; 	X(DEC(byte_1a70e));	// 6929 dec     byte_1A70E ;~ 00D0:2DA8
cs=0x192;eip=0x002dac; 	J(JZ(loc_12db1));	// 6930 jz      short loc_12DB1 ;~ 00D0:2DAC
cs=0x192;eip=0x002dae; 	X(POP(ax));	// 6931 pop     ax ;~ 00D0:2DAE
cs=0x192;eip=0x002daf; 	X(POP(ds));	// 6932 pop     ds ;~ 00D0:2DAF
cs=0x192;eip=0x002db0; 	J(IRET);	// 6933 iret ;~ 00D0:2DB0
loc_12db1:
	// 5131 
cs=0x192;eip=0x002db1; 	T(MOV(al, byte_1a710));	// 6937 mov     al, byte_1A710 ;~ 00D0:2DB1
cs=0x192;eip=0x002db4; 	T(OR(al, al));	// 6938 or      al, al ;~ 00D0:2DB4
cs=0x192;eip=0x002db6; 	J(JNZ(loc_12dbf));	// 6939 jnz     short loc_12DBF ;~ 00D0:2DB6
cs=0x192;eip=0x002db8; 	X(MOV(byte_1a71c, 0));	// 6940 mov     byte_1A71C, 0 ;~ 00D0:2DB8
cs=0x192;eip=0x002dbd; 	J(JMP(loc_12dcd));	// 6941 jmp     short loc_12DCD ;~ 00D0:2DBD
loc_12dbf:
	// 5132 
cs=0x192;eip=0x002dbf; 	X(MOV(byte_1a70e, al));	// 6945 mov     byte_1A70E, al ;~ 00D0:2DBF
cs=0x192;eip=0x002dc2; 	X(MOV(byte_1a710, 0));	// 6946 mov     byte_1A710, 0 ;~ 00D0:2DC2
cs=0x192;eip=0x002dc7; 	T(MOV(ax, word_1a6fe));	// 6947 mov     ax, word_1A6FE ;~ 00D0:2DC7
cs=0x192;eip=0x002dca; 	X(MOV(word_1a6fc, ax));	// 6948 mov     word_1A6FC, ax ;~ 00D0:2DCA
loc_12dcd:
	// 5133 
cs=0x192;eip=0x002dcd; 	X(POP(ax));	// 6951 pop     ax ;~ 00D0:2DCD
cs=0x192;eip=0x002dce; 	X(POP(ds));	// 6952 pop     ds ;~ 00D0:2DCE
cs=0x192;eip=0x002dcf; 	J(IRET);	// 6953 iret ;~ 00D0:2DCF
sub_12dd0:
	// 6958 
cs=0x192;eip=0x002dd0; 	X(PUSH(es));	// 6960 push    es ;~ 00D0:2DD0
ret_d0_2dd1:
	// 5134 
cs=0x192;eip=0x002dd1; 	T(XOR(ax, ax));	// 6961 xor     ax, ax ;~ 00D0:2DD1
cs=0x192;eip=0x002dd3; 	T(MOV(es, ax));	// 6962 mov     es, ax ;~ 00D0:2DD3
cs=0x192;eip=0x002dd5; 	T(MOV(bx, 0));	// 6963 mov     bx, 0 ;~ 00D0:2DD5
cs=0x192;eip=0x002dd8; 	T(MOV(dl, byte_1a716));	// 6964 mov     dl, byte_1A716 ;~ 00D0:2DD8
loc_12ddc:
	// 5135 
cs=0x192;eip=0x002ddc; 	T(MOV(al, *(raddr(es,bx))));	// 6967 mov     al, es:[bx] ;~ 00D0:2DDC
cs=0x192;eip=0x002ddf; 	T(MOV(cl, ch));	// 6968 mov     cl, ch ;~ 00D0:2DDF
cs=0x192;eip=0x002de1; 	T(DEC(cl));	// 6969 dec     cl ;~ 00D0:2DE1
cs=0x192;eip=0x002de3; 	J(JZ(loc_12deb));	// 6970 jz      short loc_12DEB ;~ 00D0:2DE3
loc_12de5:
	// 5136 
cs=0x192;eip=0x002de5; 	T(SHR(al, 1));	// 6973 shr     al, 1 ;~ 00D0:2DE5
cs=0x192;eip=0x002de7; 	T(DEC(cl));	// 6974 dec     cl ;~ 00D0:2DE7
cs=0x192;eip=0x002de9; 	J(JNZ(loc_12de5));	// 6975 jnz     short loc_12DE5 ;~ 00D0:2DE9
loc_12deb:
	// 5137 
cs=0x192;eip=0x002deb; 	T(INC(al));	// 6978 inc     al ;~ 00D0:2DEB
loc_12ded:
	// 5138 
cs=0x192;eip=0x002ded; 	T(DEC(al));	// 6981 dec     al ;~ 00D0:2DED
cs=0x192;eip=0x002def; 	T(NOP);	// 6982 nop ;~ 00D0:2DEF
cs=0x192;eip=0x002df0; 	T(NOP);	// 6983 nop ;~ 00D0:2DF0
cs=0x192;eip=0x002df1; 	J(JNZ(loc_12ded));	// 6984 jnz     short loc_12DED ;~ 00D0:2DF1
cs=0x192;eip=0x002df3; 	T(XOR(dl, byte_14a12));	// 6985 xor     dl, byte_14A12 ;~ 00D0:2DF3
cs=0x192;eip=0x002df7; 	T(MOV(al, dl));	// 6986 mov     al, dl ;~ 00D0:2DF7
cs=0x192;eip=0x002df9; 	S(OUT(0x61, al));	// 6987 out     61h, al         ; PC/XT PPI port B bits: ;~ 00D0:2DF9
cs=0x192;eip=0x002dfb; 	T(INC(bx));	// 6995 inc     bx ;~ 00D0:2DFB
cs=0x192;eip=0x002dfc; 	T(DEC(dh));	// 6996 dec     dh ;~ 00D0:2DFC
cs=0x192;eip=0x002dfe; 	J(JNZ(loc_12ddc));	// 6997 jnz     short loc_12DDC ;~ 00D0:2DFE
cs=0x192;eip=0x002e00; 	X(POP(es));	// 6998 pop     es ;~ 00D0:2E00
cs=0x192;eip=0x002e01; 	J(RETN(0));	// 7000 retn ;~ 00D0:2E01
sub_12e02:
	// 7007 
cs=0x192;eip=0x002e02; 	T(MOV(bx, word_1a708));	// 7008 mov     bx, word_1A708 ;~ 00D0:2E02
sub_12e06:
	// 7016 
cs=0x192;eip=0x002e06; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 7017 mov     ax, [bx] ;~ 00D0:2E06
ret_d0_2e08:
	// 5139 
cs=0x192;eip=0x002e08; 	T(INC(bx));	// 7018 inc     bx ;~ 00D0:2E08
cs=0x192;eip=0x002e09; 	T(INC(bx));	// 7019 inc     bx ;~ 00D0:2E09
cs=0x192;eip=0x002e0a; 	X(MOV(word_1a706, ax));	// 7020 mov     word_1A706, ax ;~ 00D0:2E0A
cs=0x192;eip=0x002e0d; 	T(MOV(al, *(raddr(ds,bx))));	// 7021 mov     al, [bx] ;~ 00D0:2E0D
cs=0x192;eip=0x002e0f; 	T(INC(bx));	// 7022 inc     bx ;~ 00D0:2E0F
cs=0x192;eip=0x002e10; 	X(MOV(word_1a708, bx));	// 7023 mov     word_1A708, bx ;~ 00D0:2E10
cs=0x192;eip=0x002e14; 	X(MOV(byte_1a71b, al));	// 7024 mov     byte_1A71B, al ;~ 00D0:2E14
cs=0x192;eip=0x002e17; 	J(RETN(0));	// 7025 retn ;~ 00D0:2E17
sub_12e18:
	// 7032 
cs=0x192;eip=0x002e18; 	T(MOV(dh, al));	// 7034 mov     dh, al ;~ 00D0:2E18
ret_d0_2e1a:
	// 5140 
cs=0x192;eip=0x002e1a; 	T(SHR(al, 1));	// 7035 shr     al, 1 ;~ 00D0:2E1A
cs=0x192;eip=0x002e1c; 	T(SHR(al, 1));	// 7036 shr     al, 1 ;~ 00D0:2E1C
cs=0x192;eip=0x002e1e; 	T(SHR(al, 1));	// 7037 shr     al, 1 ;~ 00D0:2E1E
cs=0x192;eip=0x002e20; 	T(AND(al, 0x1F));	// 7038 and     al, 1Fh ;~ 00D0:2E20
cs=0x192;eip=0x002e22; 	T(ADD(al, byte_1a70d));	// 7039 add     al, byte_1A70D ;~ 00D0:2E22
cs=0x192;eip=0x002e26; 	T(MOV(cl, 0x0FF));	// 7040 mov     cl, 0FFh ;~ 00D0:2E26
loc_12e28:
	// 5141 
cs=0x192;eip=0x002e28; 	T(INC(cl));	// 7043 inc     cl ;~ 00D0:2E28
cs=0x192;eip=0x002e2a; 	T(SUB(al, 0x0C));	// 7044 sub     al, 0Ch ;~ 00D0:2E2A
cs=0x192;eip=0x002e2c; 	J(JNC(loc_12e28));	// 7045 jnb     short loc_12E28 ;~ 00D0:2E2C
cs=0x192;eip=0x002e2e; 	T(ADD(al, 0x0C));	// 7046 add     al, 0Ch ;~ 00D0:2E2E
cs=0x192;eip=0x002e30; 	T(ADD(al, al));	// 7047 add     al, al ;~ 00D0:2E30
cs=0x192;eip=0x002e32; 	T(MOV(bx, 0x78BD));	// 7048 mov     bx, 78BDh ;~ 00D0:2E32
cs=0x192;eip=0x002e35; 	T(CBW);	// 7049 cbw ;~ 00D0:2E35
cs=0x192;eip=0x002e36; 	T(ADD(bx, ax));	// 7050 add     bx, ax ;~ 00D0:2E36
cs=0x192;eip=0x002e38; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 7051 mov     ax, [bx] ;~ 00D0:2E38
cs=0x192;eip=0x002e3a; 	T(SHR(ax, cl));	// 7052 shr     ax, cl ;~ 00D0:2E3A
cs=0x192;eip=0x002e3c; 	T(SUB(ax, 0x1B));	// 7053 sub     ax, 1Bh ;~ 00D0:2E3C
cs=0x192;eip=0x002e3f; 	T(MOV(cx, ax));	// 7054 mov     cx, ax ;~ 00D0:2E3F
cs=0x192;eip=0x002e41; 	T(MOV(al, dh));	// 7055 mov     al, dh ;~ 00D0:2E41
cs=0x192;eip=0x002e43; 	T(AND(al, 7));	// 7056 and     al, 7 ;~ 00D0:2E43
cs=0x192;eip=0x002e45; 	T(MOV(bx, 0x79D7));	// 7057 mov     bx, 79D7h ;~ 00D0:2E45
cs=0x192;eip=0x002e48; 	T(XLAT);	// 7058 xlat ;~ 00D0:2E48
cs=0x192;eip=0x002e49; 	T(AND(dh, 0x0F8));	// 7059 and     dh, 0F8h ;~ 00D0:2E49
cs=0x192;eip=0x002e4c; 	J(RETN(0));	// 7060 retn ;~ 00D0:2E4C
sub_12e4d:
	// 7067 
cs=0x192;eip=0x002e4d; 	T(MOV(bx, word_1a6f6));	// 7069 mov     bx, word_1A6F6 ;~ 00D0:2E4D
ret_d0_2e51:
	// 5142 
cs=0x192;eip=0x002e51; 	T(MOV(al, *(raddr(ds,bx))));	// 7070 mov     al, [bx] ;~ 00D0:2E51
cs=0x192;eip=0x002e53; 	X(MOV(byte_1a715, al));	// 7071 mov     byte_1A715, al ;~ 00D0:2E53
cs=0x192;eip=0x002e56; 	T(INC(bx));	// 7072 inc     bx ;~ 00D0:2E56
cs=0x192;eip=0x002e57; 	T(MOV(al, *(raddr(ds,bx))));	// 7073 mov     al, [bx] ;~ 00D0:2E57
cs=0x192;eip=0x002e59; 	T(CBW);	// 7074 cbw ;~ 00D0:2E59
cs=0x192;eip=0x002e5a; 	X(MOV(word_1a6fc, ax));	// 7075 mov     word_1A6FC, ax ;~ 00D0:2E5A
cs=0x192;eip=0x002e5d; 	T(INC(bx));	// 7076 inc     bx ;~ 00D0:2E5D
cs=0x192;eip=0x002e5e; 	T(MOV(al, *(raddr(ds,bx))));	// 7077 mov     al, [bx] ;~ 00D0:2E5E
cs=0x192;eip=0x002e60; 	J(RETN(0));	// 7078 retn ;~ 00D0:2E60

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_1012d: 	goto loc_1012d;
        case m2c::kloc_1018a: 	goto loc_1018a;
        case m2c::kloc_10191: 	goto loc_10191;
        case m2c::kloc_10196: 	goto loc_10196;
        case m2c::kloc_101a8: 	goto loc_101a8;
        case m2c::kloc_101fb: 	goto loc_101fb;
        case m2c::kloc_10205: 	goto loc_10205;
        case m2c::kloc_10216: 	goto loc_10216;
        case m2c::kloc_10232: 	goto loc_10232;
        case m2c::kloc_1023c: 	goto loc_1023c;
        case m2c::kloc_10273: 	goto loc_10273;
        case m2c::kloc_10277: 	goto loc_10277;
        case m2c::kloc_1028b: 	goto loc_1028b;
        case m2c::kloc_1028e: 	goto loc_1028e;
        case m2c::kloc_102e5: 	goto loc_102e5;
        case m2c::kloc_102fb: 	goto loc_102fb;
        case m2c::kloc_10310: 	goto loc_10310;
        case m2c::kloc_10322: 	goto loc_10322;
        case m2c::kloc_10352: 	goto loc_10352;
        case m2c::kloc_10377: 	goto loc_10377;
        case m2c::kloc_10378: 	goto loc_10378;
        case m2c::kloc_10390: 	goto loc_10390;
        case m2c::kloc_10397: 	goto loc_10397;
        case m2c::kloc_103a3: 	goto loc_103a3;
        case m2c::kloc_103b9: 	goto loc_103b9;
        case m2c::kloc_10446: 	goto loc_10446;
        case m2c::kloc_1044f: 	goto loc_1044f;
        case m2c::kloc_10456: 	goto loc_10456;
        case m2c::kloc_1045e: 	goto loc_1045e;
        case m2c::kloc_10464: 	goto loc_10464;
        case m2c::kloc_1049a: 	goto loc_1049a;
        case m2c::kloc_104f7: 	goto loc_104f7;
        case m2c::kloc_10504: 	goto loc_10504;
        case m2c::kloc_10513: 	goto loc_10513;
        case m2c::kloc_1051e: 	goto loc_1051e;
        case m2c::kloc_1052e: 	goto loc_1052e;
        case m2c::kloc_10533: 	goto loc_10533;
        case m2c::kloc_10540: 	goto loc_10540;
        case m2c::kloc_1057b: 	goto loc_1057b;
        case m2c::kloc_105e5: 	goto loc_105e5;
        case m2c::kloc_10636: 	goto loc_10636;
        case m2c::kloc_10649: 	goto loc_10649;
        case m2c::kloc_1065b: 	goto loc_1065b;
        case m2c::kloc_10694: 	goto loc_10694;
        case m2c::kloc_1069a: 	goto loc_1069a;
        case m2c::kloc_106ae: 	goto loc_106ae;
        case m2c::kloc_106e5: 	goto loc_106e5;
        case m2c::kloc_106f0: 	goto loc_106f0;
        case m2c::kloc_106f8: 	goto loc_106f8;
        case m2c::kloc_1070b: 	goto loc_1070b;
        case m2c::kloc_10717: 	goto loc_10717;
        case m2c::kloc_10733: 	goto loc_10733;
        case m2c::kloc_1074b: 	goto loc_1074b;
        case m2c::kloc_10756: 	goto loc_10756;
        case m2c::kloc_10759: 	goto loc_10759;
        case m2c::kloc_1075f: 	goto loc_1075f;
        case m2c::kloc_10773: 	goto loc_10773;
        case m2c::kloc_10783: 	goto loc_10783;
        case m2c::kloc_10797: 	goto loc_10797;
        case m2c::kloc_107a5: 	goto loc_107a5;
        case m2c::kloc_107b1: 	goto loc_107b1;
        case m2c::kloc_107dd: 	goto loc_107dd;
        case m2c::kloc_107e7: 	goto loc_107e7;
        case m2c::kloc_107ee: 	goto loc_107ee;
        case m2c::kloc_10849: 	goto loc_10849;
        case m2c::kloc_10868: 	goto loc_10868;
        case m2c::kloc_1088e: 	goto loc_1088e;
        case m2c::kloc_108b4: 	goto loc_108b4;
        case m2c::kloc_108b7: 	goto loc_108b7;
        case m2c::kloc_108b9: 	goto loc_108b9;
        case m2c::kloc_108c1: 	goto loc_108c1;
        case m2c::kloc_108d8: 	goto loc_108d8;
        case m2c::kloc_10984: 	goto loc_10984;
        case m2c::kloc_1098b: 	goto loc_1098b;
        case m2c::kloc_1098d: 	goto loc_1098d;
        case m2c::kloc_109d1: 	goto loc_109d1;
        case m2c::kloc_109d5: 	goto loc_109d5;
        case m2c::kloc_109e4: 	goto loc_109e4;
        case m2c::kloc_10a1f: 	goto loc_10a1f;
        case m2c::kloc_10a33: 	goto loc_10a33;
        case m2c::kloc_10a3f: 	goto loc_10a3f;
        case m2c::kloc_10a44: 	goto loc_10a44;
        case m2c::kloc_10a75: 	goto loc_10a75;
        case m2c::kloc_10a7b: 	goto loc_10a7b;
        case m2c::kloc_10a88: 	goto loc_10a88;
        case m2c::kloc_10aae: 	goto loc_10aae;
        case m2c::kloc_10ab5: 	goto loc_10ab5;
        case m2c::kloc_10ab8: 	goto loc_10ab8;
        case m2c::kloc_10acd: 	goto loc_10acd;
        case m2c::kloc_10b06: 	goto loc_10b06;
        case m2c::kloc_10b19: 	goto loc_10b19;
        case m2c::kloc_10b2f: 	goto loc_10b2f;
        case m2c::kloc_10b3f: 	goto loc_10b3f;
        case m2c::kloc_10b4c: 	goto loc_10b4c;
        case m2c::kloc_10b4e: 	goto loc_10b4e;
        case m2c::kloc_10b63: 	goto loc_10b63;
        case m2c::kloc_10b9d: 	goto loc_10b9d;
        case m2c::kloc_10bad: 	goto loc_10bad;
        case m2c::kloc_10bc8: 	goto loc_10bc8;
        case m2c::kloc_10bca: 	goto loc_10bca;
        case m2c::kloc_10bf8: 	goto loc_10bf8;
        case m2c::kloc_10c05: 	goto loc_10c05;
        case m2c::kloc_10c1d: 	goto loc_10c1d;
        case m2c::kloc_10c28: 	goto loc_10c28;
        case m2c::kloc_10c31: 	goto loc_10c31;
        case m2c::kloc_10c5d: 	goto loc_10c5d;
        case m2c::kloc_10c67: 	goto loc_10c67;
        case m2c::kloc_10c8c: 	goto loc_10c8c;
        case m2c::kloc_10cc5: 	goto loc_10cc5;
        case m2c::kloc_10cce: 	goto loc_10cce;
        case m2c::kloc_10ce1: 	goto loc_10ce1;
        case m2c::kloc_10cf6: 	goto loc_10cf6;
        case m2c::kloc_10d06: 	goto loc_10d06;
        case m2c::kloc_10d12: 	goto loc_10d12;
        case m2c::kloc_10d2d: 	goto loc_10d2d;
        case m2c::kloc_10d41: 	goto loc_10d41;
        case m2c::kloc_10d4d: 	goto loc_10d4d;
        case m2c::kloc_10d6c: 	goto loc_10d6c;
        case m2c::kloc_10d99: 	goto loc_10d99;
        case m2c::kloc_10dcf: 	goto loc_10dcf;
        case m2c::kloc_10e22: 	goto loc_10e22;
        case m2c::kloc_10e23: 	goto loc_10e23;
        case m2c::kloc_10e2e: 	goto loc_10e2e;
        case m2c::kloc_10e32: 	goto loc_10e32;
        case m2c::kloc_10e7e: 	goto loc_10e7e;
        case m2c::kloc_10e89: 	goto loc_10e89;
        case m2c::kloc_10ee3: 	goto loc_10ee3;
        case m2c::kloc_10ef4: 	goto loc_10ef4;
        case m2c::kloc_10f1c: 	goto loc_10f1c;
        case m2c::kloc_10f2a: 	goto loc_10f2a;
        case m2c::kloc_10f30: 	goto loc_10f30;
        case m2c::kloc_10f50: 	goto loc_10f50;
        case m2c::kloc_10f57: 	goto loc_10f57;
        case m2c::kloc_10f66: 	goto loc_10f66;
        case m2c::kloc_10f83: 	goto loc_10f83;
        case m2c::kloc_10f87: 	goto loc_10f87;
        case m2c::kloc_10f99: 	goto loc_10f99;
        case m2c::kloc_10fd3: 	goto loc_10fd3;
        case m2c::kloc_10fdf: 	goto loc_10fdf;
        case m2c::kloc_10fe5: 	goto loc_10fe5;
        case m2c::kloc_10fef: 	goto loc_10fef;
        case m2c::kloc_10ffb: 	goto loc_10ffb;
        case m2c::kloc_1100d: 	goto loc_1100d;
        case m2c::kloc_11022: 	goto loc_11022;
        case m2c::kloc_1105b: 	goto loc_1105b;
        case m2c::kloc_1106b: 	goto loc_1106b;
        case m2c::kloc_110ad: 	goto loc_110ad;
        case m2c::kloc_110b7: 	goto loc_110b7;
        case m2c::kloc_110c5: 	goto loc_110c5;
        case m2c::kloc_110d3: 	goto loc_110d3;
        case m2c::kloc_110da: 	goto loc_110da;
        case m2c::kloc_110de: 	goto loc_110de;
        case m2c::kloc_110e7: 	goto loc_110e7;
        case m2c::kloc_110e9: 	goto loc_110e9;
        case m2c::kloc_110f2: 	goto loc_110f2;
        case m2c::kloc_11105: 	goto loc_11105;
        case m2c::kloc_1111e: 	goto loc_1111e;
        case m2c::kloc_1112c: 	goto loc_1112c;
        case m2c::kloc_11132: 	goto loc_11132;
        case m2c::kloc_11152: 	goto loc_11152;
        case m2c::kloc_1115c: 	goto loc_1115c;
        case m2c::kloc_11181: 	goto loc_11181;
        case m2c::kloc_11199: 	goto loc_11199;
        case m2c::kloc_111a5: 	goto loc_111a5;
        case m2c::kloc_111ab: 	goto loc_111ab;
        case m2c::kloc_111d4: 	goto loc_111d4;
        case m2c::kloc_111e1: 	goto loc_111e1;
        case m2c::kloc_111f3: 	goto loc_111f3;
        case m2c::kloc_111f8: 	goto loc_111f8;
        case m2c::kloc_11206: 	goto loc_11206;
        case m2c::kloc_11209: 	goto loc_11209;
        case m2c::kloc_1120d: 	goto loc_1120d;
        case m2c::kloc_11213: 	goto loc_11213;
        case m2c::kloc_11229: 	goto loc_11229;
        case m2c::kloc_11248: 	goto loc_11248;
        case m2c::kloc_11271: 	goto loc_11271;
        case m2c::kloc_1129a: 	goto loc_1129a;
        case m2c::kloc_112ac: 	goto loc_112ac;
        case m2c::kloc_112cc: 	goto loc_112cc;
        case m2c::kloc_112d4: 	goto loc_112d4;
        case m2c::kloc_112ef: 	goto loc_112ef;
        case m2c::kloc_112f1: 	goto loc_112f1;
        case m2c::kloc_11312: 	goto loc_11312;
        case m2c::kloc_1132c: 	goto loc_1132c;
        case m2c::kloc_1132f: 	goto loc_1132f;
        case m2c::kloc_11341: 	goto loc_11341;
        case m2c::kloc_1134a: 	goto loc_1134a;
        case m2c::kloc_11359: 	goto loc_11359;
        case m2c::kloc_11367: 	goto loc_11367;
        case m2c::kloc_11393: 	goto loc_11393;
        case m2c::kloc_113a9: 	goto loc_113a9;
        case m2c::kloc_113b6: 	goto loc_113b6;
        case m2c::kloc_113d9: 	goto loc_113d9;
        case m2c::kloc_113e2: 	goto loc_113e2;
        case m2c::kloc_11402: 	goto loc_11402;
        case m2c::kloc_11408: 	goto loc_11408;
        case m2c::kloc_1140c: 	goto loc_1140c;
        case m2c::kloc_11426: 	goto loc_11426;
        case m2c::kloc_11444: 	goto loc_11444;
        case m2c::kloc_11447: 	goto loc_11447;
        case m2c::kloc_1145b: 	goto loc_1145b;
        case m2c::kloc_1145e: 	goto loc_1145e;
        case m2c::kloc_1147f: 	goto loc_1147f;
        case m2c::kloc_11499: 	goto loc_11499;
        case m2c::kloc_114b1: 	goto loc_114b1;
        case m2c::kloc_114c9: 	goto loc_114c9;
        case m2c::kloc_114da: 	goto loc_114da;
        case m2c::kloc_114dd: 	goto loc_114dd;
        case m2c::kloc_114fe: 	goto loc_114fe;
        case m2c::kloc_1150b: 	goto loc_1150b;
        case m2c::kloc_11531: 	goto loc_11531;
        case m2c::kloc_11551: 	goto loc_11551;
        case m2c::kloc_1155b: 	goto loc_1155b;
        case m2c::kloc_11562: 	goto loc_11562;
        case m2c::kloc_11569: 	goto loc_11569;
        case m2c::kloc_1156c: 	goto loc_1156c;
        case m2c::kloc_11576: 	goto loc_11576;
        case m2c::kloc_1159b: 	goto loc_1159b;
        case m2c::kloc_115b5: 	goto loc_115b5;
        case m2c::kloc_115c1: 	goto loc_115c1;
        case m2c::kloc_115ce: 	goto loc_115ce;
        case m2c::kloc_115f1: 	goto loc_115f1;
        case m2c::kloc_1160e: 	goto loc_1160e;
        case m2c::kloc_11618: 	goto loc_11618;
        case m2c::kloc_11622: 	goto loc_11622;
        case m2c::kloc_1162f: 	goto loc_1162f;
        case m2c::kloc_11640: 	goto loc_11640;
        case m2c::kloc_11646: 	goto loc_11646;
        case m2c::kloc_11659: 	goto loc_11659;
        case m2c::kloc_11673: 	goto loc_11673;
        case m2c::kloc_116be: 	goto loc_116be;
        case m2c::kloc_116c2: 	goto loc_116c2;
        case m2c::kloc_116d6: 	goto loc_116d6;
        case m2c::kloc_116d9: 	goto loc_116d9;
        case m2c::kloc_116e8: 	goto loc_116e8;
        case m2c::kloc_11708: 	goto loc_11708;
        case m2c::kloc_1171c: 	goto loc_1171c;
        case m2c::kloc_1171f: 	goto loc_1171f;
        case m2c::kloc_11740: 	goto loc_11740;
        case m2c::kloc_1174a: 	goto loc_1174a;
        case m2c::kloc_11751: 	goto loc_11751;
        case m2c::kloc_1175b: 	goto loc_1175b;
        case m2c::kloc_11762: 	goto loc_11762;
        case m2c::kloc_11765: 	goto loc_11765;
        case m2c::kloc_11780: 	goto loc_11780;
        case m2c::kloc_11796: 	goto loc_11796;
        case m2c::kloc_1179c: 	goto loc_1179c;
        case m2c::kloc_117b7: 	goto loc_117b7;
        case m2c::kloc_117c3: 	goto loc_117c3;
        case m2c::kloc_117d0: 	goto loc_117d0;
        case m2c::kloc_117da: 	goto loc_117da;
        case m2c::kloc_117e6: 	goto loc_117e6;
        case m2c::kloc_117f9: 	goto loc_117f9;
        case m2c::kloc_11802: 	goto loc_11802;
        case m2c::kloc_1180c: 	goto loc_1180c;
        case m2c::kloc_1181e: 	goto loc_1181e;
        case m2c::kloc_1182c: 	goto loc_1182c;
        case m2c::kloc_11842: 	goto loc_11842;
        case m2c::kloc_1184e: 	goto loc_1184e;
        case m2c::kloc_11862: 	goto loc_11862;
        case m2c::kloc_11876: 	goto loc_11876;
        case m2c::kloc_11883: 	goto loc_11883;
        case m2c::kloc_11896: 	goto loc_11896;
        case m2c::kloc_118a7: 	goto loc_118a7;
        case m2c::kloc_118b0: 	goto loc_118b0;
        case m2c::kloc_118c6: 	goto loc_118c6;
        case m2c::kloc_118d2: 	goto loc_118d2;
        case m2c::kloc_118fd: 	goto loc_118fd;
        case m2c::kloc_1190a: 	goto loc_1190a;
        case m2c::kloc_1191e: 	goto loc_1191e;
        case m2c::kloc_1192b: 	goto loc_1192b;
        case m2c::kloc_11948: 	goto loc_11948;
        case m2c::kloc_1194b: 	goto loc_1194b;
        case m2c::kloc_1195b: 	goto loc_1195b;
        case m2c::kloc_1197a: 	goto loc_1197a;
        case m2c::kloc_11988: 	goto loc_11988;
        case m2c::kloc_11991: 	goto loc_11991;
        case m2c::kloc_11998: 	goto loc_11998;
        case m2c::kloc_1199b: 	goto loc_1199b;
        case m2c::kloc_119a7: 	goto loc_119a7;
        case m2c::kloc_119c7: 	goto loc_119c7;
        case m2c::kloc_119d3: 	goto loc_119d3;
        case m2c::kloc_119db: 	goto loc_119db;
        case m2c::kloc_119e2: 	goto loc_119e2;
        case m2c::kloc_119eb: 	goto loc_119eb;
        case m2c::kloc_119ee: 	goto loc_119ee;
        case m2c::kloc_119f7: 	goto loc_119f7;
        case m2c::kloc_11a17: 	goto loc_11a17;
        case m2c::kloc_11a27: 	goto loc_11a27;
        case m2c::kloc_11a3d: 	goto loc_11a3d;
        case m2c::kloc_11a51: 	goto loc_11a51;
        case m2c::kloc_11a5b: 	goto loc_11a5b;
        case m2c::kloc_11aaf: 	goto loc_11aaf;
        case m2c::kloc_11abc: 	goto loc_11abc;
        case m2c::kloc_11ad6: 	goto loc_11ad6;
        case m2c::kloc_11b28: 	goto loc_11b28;
        case m2c::kloc_11b35: 	goto loc_11b35;
        case m2c::kloc_11b61: 	goto loc_11b61;
        case m2c::kloc_11b6f: 	goto loc_11b6f;
        case m2c::kloc_11b80: 	goto loc_11b80;
        case m2c::kloc_11b88: 	goto loc_11b88;
        case m2c::kloc_11b90: 	goto loc_11b90;
        case m2c::kloc_11b95: 	goto loc_11b95;
        case m2c::kloc_11baf: 	goto loc_11baf;
        case m2c::kloc_11bbc: 	goto loc_11bbc;
        case m2c::kloc_11bcd: 	goto loc_11bcd;
        case m2c::kloc_11bd5: 	goto loc_11bd5;
        case m2c::kloc_11bf2: 	goto loc_11bf2;
        case m2c::kloc_11bfb: 	goto loc_11bfb;
        case m2c::kloc_11c4f: 	goto loc_11c4f;
        case m2c::kloc_11c66: 	goto loc_11c66;
        case m2c::kloc_11c95: 	goto loc_11c95;
        case m2c::kloc_11c9f: 	goto loc_11c9f;
        case m2c::kloc_11cef: 	goto loc_11cef;
        case m2c::kloc_11d12: 	goto loc_11d12;
        case m2c::kloc_11d1e: 	goto loc_11d1e;
        case m2c::kloc_11d3e: 	goto loc_11d3e;
        case m2c::kloc_11d4c: 	goto loc_11d4c;
        case m2c::kloc_11d52: 	goto loc_11d52;
        case m2c::kloc_11d57: 	goto loc_11d57;
        case m2c::kloc_11d66: 	goto loc_11d66;
        case m2c::kloc_11d71: 	goto loc_11d71;
        case m2c::kloc_11d8a: 	goto loc_11d8a;
        case m2c::kloc_11d8e: 	goto loc_11d8e;
        case m2c::kloc_11e18: 	goto loc_11e18;
        case m2c::kloc_11e21: 	goto loc_11e21;
        case m2c::kloc_11e36: 	goto loc_11e36;
        case m2c::kloc_11e42: 	goto loc_11e42;
        case m2c::kloc_11e43: 	goto loc_11e43;
        case m2c::kloc_11e5c: 	goto loc_11e5c;
        case m2c::kloc_11e76: 	goto loc_11e76;
        case m2c::kloc_11e7d: 	goto loc_11e7d;
        case m2c::kloc_11e92: 	goto loc_11e92;
        case m2c::kloc_11e9e: 	goto loc_11e9e;
        case m2c::kloc_11e9f: 	goto loc_11e9f;
        case m2c::kloc_11edf: 	goto loc_11edf;
        case m2c::kloc_11f22: 	goto loc_11f22;
        case m2c::kloc_11f2d: 	goto loc_11f2d;
        case m2c::kloc_11f3b: 	goto loc_11f3b;
        case m2c::kloc_11f4b: 	goto loc_11f4b;
        case m2c::kloc_11f4f: 	goto loc_11f4f;
        case m2c::kloc_11f72: 	goto loc_11f72;
        case m2c::kloc_11f80: 	goto loc_11f80;
        case m2c::kloc_11f91: 	goto loc_11f91;
        case m2c::kloc_11fd3: 	goto loc_11fd3;
        case m2c::kloc_11fdb: 	goto loc_11fdb;
        case m2c::kloc_11ffa: 	goto loc_11ffa;
        case m2c::kloc_1200f: 	goto loc_1200f;
        case m2c::kloc_12042: 	goto loc_12042;
        case m2c::kloc_1204d: 	goto loc_1204d;
        case m2c::kloc_12074: 	goto loc_12074;
        case m2c::kloc_1208a: 	goto loc_1208a;
        case m2c::kloc_120a2: 	goto loc_120a2;
        case m2c::kloc_120a5: 	goto loc_120a5;
        case m2c::kloc_120d1: 	goto loc_120d1;
        case m2c::kloc_120df: 	goto loc_120df;
        case m2c::kloc_120e2: 	goto loc_120e2;
        case m2c::kloc_120f7: 	goto loc_120f7;
        case m2c::kloc_1211f: 	goto loc_1211f;
        case m2c::kloc_12133: 	goto loc_12133;
        case m2c::kloc_1213e: 	goto loc_1213e;
        case m2c::kloc_12143: 	goto loc_12143;
        case m2c::kloc_12151: 	goto loc_12151;
        case m2c::kloc_12164: 	goto loc_12164;
        case m2c::kloc_12175: 	goto loc_12175;
        case m2c::kloc_12186: 	goto loc_12186;
        case m2c::kloc_1218c: 	goto loc_1218c;
        case m2c::kloc_12196: 	goto loc_12196;
        case m2c::kloc_12199: 	goto loc_12199;
        case m2c::kloc_121b6: 	goto loc_121b6;
        case m2c::kloc_121e0: 	goto loc_121e0;
        case m2c::kloc_121fc: 	goto loc_121fc;
        case m2c::kloc_12207: 	goto loc_12207;
        case m2c::kloc_12224: 	goto loc_12224;
        case m2c::kloc_1224a: 	goto loc_1224a;
        case m2c::kloc_1225b: 	goto loc_1225b;
        case m2c::kloc_12273: 	goto loc_12273;
        case m2c::kloc_122bc: 	goto loc_122bc;
        case m2c::kloc_122f1: 	goto loc_122f1;
        case m2c::kloc_122f4: 	goto loc_122f4;
        case m2c::kloc_12303: 	goto loc_12303;
        case m2c::kloc_12319: 	goto loc_12319;
        case m2c::kloc_1231c: 	goto loc_1231c;
        case m2c::kloc_1233e: 	goto loc_1233e;
        case m2c::kloc_12348: 	goto loc_12348;
        case m2c::kloc_1235b: 	goto loc_1235b;
        case m2c::kloc_12376: 	goto loc_12376;
        case m2c::kloc_1238b: 	goto loc_1238b;
        case m2c::kloc_12399: 	goto loc_12399;
        case m2c::kloc_123a0: 	goto loc_123a0;
        case m2c::kloc_123aa: 	goto loc_123aa;
        case m2c::kloc_123c1: 	goto loc_123c1;
        case m2c::kloc_12402: 	goto loc_12402;
        case m2c::kloc_1240c: 	goto loc_1240c;
        case m2c::kloc_1242e: 	goto loc_1242e;
        case m2c::kloc_1243e: 	goto loc_1243e;
        case m2c::kloc_1244f: 	goto loc_1244f;
        case m2c::kloc_12474: 	goto loc_12474;
        case m2c::kloc_12482: 	goto loc_12482;
        case m2c::kloc_12496: 	goto loc_12496;
        case m2c::kloc_124a2: 	goto loc_124a2;
        case m2c::kloc_124aa: 	goto loc_124aa;
        case m2c::kloc_124b1: 	goto loc_124b1;
        case m2c::kloc_124bd: 	goto loc_124bd;
        case m2c::kloc_124c1: 	goto loc_124c1;
        case m2c::kloc_12500: 	goto loc_12500;
        case m2c::kloc_1251d: 	goto loc_1251d;
        case m2c::kloc_125a6: 	goto loc_125a6;
        case m2c::kloc_125ae: 	goto loc_125ae;
        case m2c::kloc_125be: 	goto loc_125be;
        case m2c::kloc_125c6: 	goto loc_125c6;
        case m2c::kloc_125ce: 	goto loc_125ce;
        case m2c::kloc_125d6: 	goto loc_125d6;
        case m2c::kloc_125de: 	goto loc_125de;
        case m2c::kloc_125ea: 	goto loc_125ea;
        case m2c::kloc_125f1: 	goto loc_125f1;
        case m2c::kloc_12603: 	goto loc_12603;
        case m2c::kloc_12608: 	goto loc_12608;
        case m2c::kloc_12613: 	goto loc_12613;
        case m2c::kloc_1261d: 	goto loc_1261d;
        case m2c::kloc_12636: 	goto loc_12636;
        case m2c::kloc_1264d: 	goto loc_1264d;
        case m2c::kloc_12666: 	goto loc_12666;
        case m2c::kloc_1266a: 	goto loc_1266a;
        case m2c::kloc_126a7: 	goto loc_126a7;
        case m2c::kloc_126c8: 	goto loc_126c8;
        case m2c::kloc_126d6: 	goto loc_126d6;
        case m2c::kloc_1271b: 	goto loc_1271b;
        case m2c::kloc_12721: 	goto loc_12721;
        case m2c::kloc_1272c: 	goto loc_1272c;
        case m2c::kloc_12730: 	goto loc_12730;
        case m2c::kloc_12739: 	goto loc_12739;
        case m2c::kloc_12745: 	goto loc_12745;
        case m2c::kloc_1274a: 	goto loc_1274a;
        case m2c::kloc_1274d: 	goto loc_1274d;
        case m2c::kloc_1275a: 	goto loc_1275a;
        case m2c::kloc_1276f: 	goto loc_1276f;
        case m2c::kloc_1277f: 	goto loc_1277f;
        case m2c::kloc_12795: 	goto loc_12795;
        case m2c::kloc_1279b: 	goto loc_1279b;
        case m2c::kloc_127b9: 	goto loc_127b9;
        case m2c::kloc_127c5: 	goto loc_127c5;
        case m2c::kloc_127d1: 	goto loc_127d1;
        case m2c::kloc_127eb: 	goto loc_127eb;
        case m2c::kloc_1280e: 	goto loc_1280e;
        case m2c::kloc_1281c: 	goto loc_1281c;
        case m2c::kloc_12824: 	goto loc_12824;
        case m2c::kloc_12827: 	goto loc_12827;
        case m2c::kloc_12843: 	goto loc_12843;
        case m2c::kloc_1284c: 	goto loc_1284c;
        case m2c::kloc_12854: 	goto loc_12854;
        case m2c::kloc_1285c: 	goto loc_1285c;
        case m2c::kloc_12866: 	goto loc_12866;
        case m2c::kloc_1287a: 	goto loc_1287a;
        case m2c::kloc_12897: 	goto loc_12897;
        case m2c::kloc_1289a: 	goto loc_1289a;
        case m2c::kloc_128ab: 	goto loc_128ab;
        case m2c::kloc_128d2: 	goto loc_128d2;
        case m2c::kloc_128df: 	goto loc_128df;
        case m2c::kloc_128e2: 	goto loc_128e2;
        case m2c::kloc_128f3: 	goto loc_128f3;
        case m2c::kloc_128f6: 	goto loc_128f6;
        case m2c::kloc_128ff: 	goto loc_128ff;
        case m2c::kloc_12916: 	goto loc_12916;
        case m2c::kloc_1291f: 	goto loc_1291f;
        case m2c::kloc_12941: 	goto loc_12941;
        case m2c::kloc_12950: 	goto loc_12950;
        case m2c::kloc_12964: 	goto loc_12964;
        case m2c::kloc_1298e: 	goto loc_1298e;
        case m2c::kloc_1298f: 	goto loc_1298f;
        case m2c::kloc_129ae: 	goto loc_129ae;
        case m2c::kloc_129d1: 	goto loc_129d1;
        case m2c::kloc_129f9: 	goto loc_129f9;
        case m2c::kloc_12a2e: 	goto loc_12a2e;
        case m2c::kloc_12a3a: 	goto loc_12a3a;
        case m2c::kloc_12a3e: 	goto loc_12a3e;
        case m2c::kloc_12a44: 	goto loc_12a44;
        case m2c::kloc_12a69: 	goto loc_12a69;
        case m2c::kloc_12a98: 	goto loc_12a98;
        case m2c::kloc_12aae: 	goto loc_12aae;
        case m2c::kloc_12abc: 	goto loc_12abc;
        case m2c::kloc_12b1c: 	goto loc_12b1c;
        case m2c::kloc_12b26: 	goto loc_12b26;
        case m2c::kloc_12b2c: 	goto loc_12b2c;
        case m2c::kloc_12b39: 	goto loc_12b39;
        case m2c::kloc_12b40: 	goto loc_12b40;
        case m2c::kloc_12b52: 	goto loc_12b52;
        case m2c::kloc_12b5f: 	goto loc_12b5f;
        case m2c::kloc_12b6b: 	goto loc_12b6b;
        case m2c::kloc_12b71: 	goto loc_12b71;
        case m2c::kloc_12b84: 	goto loc_12b84;
        case m2c::kloc_12b89: 	goto loc_12b89;
        case m2c::kloc_12b91: 	goto loc_12b91;
        case m2c::kloc_12bb2: 	goto loc_12bb2;
        case m2c::kloc_12bb5: 	goto loc_12bb5;
        case m2c::kloc_12bc7: 	goto loc_12bc7;
        case m2c::kloc_12bd8: 	goto loc_12bd8;
        case m2c::kloc_12bf7: 	goto loc_12bf7;
        case m2c::kloc_12c1c: 	goto loc_12c1c;
        case m2c::kloc_12c2f: 	goto loc_12c2f;
        case m2c::kloc_12c42: 	goto loc_12c42;
        case m2c::kloc_12c54: 	goto loc_12c54;
        case m2c::kloc_12c6c: 	goto loc_12c6c;
        case m2c::kloc_12c72: 	goto loc_12c72;
        case m2c::kloc_12c7c: 	goto loc_12c7c;
        case m2c::kloc_12c91: 	goto loc_12c91;
        case m2c::kloc_12c9c: 	goto loc_12c9c;
        case m2c::kloc_12c9e: 	goto loc_12c9e;
        case m2c::kloc_12caf: 	goto loc_12caf;
        case m2c::kloc_12cb1: 	goto loc_12cb1;
        case m2c::kloc_12cb9: 	goto loc_12cb9;
        case m2c::kloc_12cbc: 	goto loc_12cbc;
        case m2c::kloc_12cf5: 	goto loc_12cf5;
        case m2c::kloc_12d01: 	goto loc_12d01;
        case m2c::kloc_12d03: 	goto loc_12d03;
        case m2c::kloc_12d07: 	goto loc_12d07;
        case m2c::kloc_12d0b: 	goto loc_12d0b;
        case m2c::kloc_12d15: 	goto loc_12d15;
        case m2c::kloc_12d23: 	goto loc_12d23;
        case m2c::kloc_12d26: 	goto loc_12d26;
        case m2c::kloc_12d32: 	goto loc_12d32;
        case m2c::kloc_12d37: 	goto loc_12d37;
        case m2c::kloc_12d3f: 	goto loc_12d3f;
        case m2c::kloc_12d45: 	goto loc_12d45;
        case m2c::kloc_12d47: 	goto loc_12d47;
        case m2c::kloc_12d49: 	goto loc_12d49;
        case m2c::kloc_12d53: 	goto loc_12d53;
        case m2c::kloc_12d54: 	goto loc_12d54;
        case m2c::kloc_12d56: 	goto loc_12d56;
        case m2c::kloc_12d88: 	goto loc_12d88;
        case m2c::kloc_12d8d: 	goto loc_12d8d;
        case m2c::kloc_12da0: 	goto loc_12da0;
        case m2c::kloc_12da8: 	goto loc_12da8;
        case m2c::kloc_12db1: 	goto loc_12db1;
        case m2c::kloc_12dbf: 	goto loc_12dbf;
        case m2c::kloc_12dcd: 	goto loc_12dcd;
        case m2c::kloc_12ddc: 	goto loc_12ddc;
        case m2c::kloc_12de5: 	goto loc_12de5;
        case m2c::kloc_12deb: 	goto loc_12deb;
        case m2c::kloc_12ded: 	goto loc_12ded;
        case m2c::kloc_12e28: 	goto loc_12e28;
        case m2c::klocret_107b9: 	goto locret_107b9;
        case m2c::klocret_11049: 	goto locret_11049;
        case m2c::klocret_1107b: 	goto locret_1107b;
        case m2c::klocret_11c32: 	goto locret_11c32;
        case m2c::klocret_11d89: 	goto locret_11d89;
        case m2c::klocret_11db2: 	goto locret_11db2;
        case m2c::klocret_11ff2: 	goto locret_11ff2;
        case m2c::klocret_1252d: 	goto locret_1252d;
        case m2c::klocret_12548: 	goto locret_12548;
        case m2c::klocret_12659: 	goto locret_12659;
        case m2c::klocret_126a6: 	goto locret_126a6;
        case m2c::klocret_12a0f: 	goto locret_12a0f;
        case m2c::klocret_12a24: 	goto locret_12a24;
        case m2c::knullsub_1: 	goto nullsub_1;
        case m2c::kret_d0_101: 	goto ret_d0_101;
        case m2c::kret_d0_104e: 	goto ret_d0_104e;
        case m2c::kret_d0_1080: 	goto ret_d0_1080;
        case m2c::kret_d0_1091: 	goto ret_d0_1091;
        case m2c::kret_d0_10a6: 	goto ret_d0_10a6;
        case m2c::kret_d0_1167: 	goto ret_d0_1167;
        case m2c::kret_d0_11d7: 	goto ret_d0_11d7;
        case m2c::kret_d0_1282: 	goto ret_d0_1282;
        case m2c::kret_d0_12b7: 	goto ret_d0_12b7;
        case m2c::kret_d0_1304: 	goto ret_d0_1304;
        case m2c::kret_d0_1375: 	goto ret_d0_1375;
        case m2c::kret_d0_1429: 	goto ret_d0_1429;
        case m2c::kret_d0_146d: 	goto ret_d0_146d;
        case m2c::kret_d0_149e: 	goto ret_d0_149e;
        case m2c::kret_d0_14eb: 	goto ret_d0_14eb;
        case m2c::kret_d0_14f4: 	goto ret_d0_14f4;
        case m2c::kret_d0_1511: 	goto ret_d0_1511;
        case m2c::kret_d0_15ac: 	goto ret_d0_15ac;
        case m2c::kret_d0_164f: 	goto ret_d0_164f;
        case m2c::kret_d0_16eb: 	goto ret_d0_16eb;
        case m2c::kret_d0_16f9: 	goto ret_d0_16f9;
        case m2c::kret_d0_1722: 	goto ret_d0_1722;
        case m2c::kret_d0_1725: 	goto ret_d0_1725;
        case m2c::kret_d0_194e: 	goto ret_d0_194e;
        case m2c::kret_d0_1a05: 	goto ret_d0_1a05;
        case m2c::kret_d0_1a67: 	goto ret_d0_1a67;
        case m2c::kret_d0_1ad9: 	goto ret_d0_1ad9;
        case m2c::kret_d0_1b58: 	goto ret_d0_1b58;
        case m2c::kret_d0_1b65: 	goto ret_d0_1b65;
        case m2c::kret_d0_1bb2: 	goto ret_d0_1bb2;
        case m2c::kret_d0_1be4: 	goto ret_d0_1be4;
        case m2c::kret_d0_1be9: 	goto ret_d0_1be9;
        case m2c::kret_d0_1c34: 	goto ret_d0_1c34;
        case m2c::kret_d0_1c9c: 	goto ret_d0_1c9c;
        case m2c::kret_d0_1cba: 	goto ret_d0_1cba;
        case m2c::kret_d0_1cd2: 	goto ret_d0_1cd2;
        case m2c::kret_d0_1d03: 	goto ret_d0_1d03;
        case m2c::kret_d0_1d1b: 	goto ret_d0_1d1b;
        case m2c::kret_d0_1d39: 	goto ret_d0_1d39;
        case m2c::kret_d0_1d6e: 	goto ret_d0_1d6e;
        case m2c::kret_d0_1d80: 	goto ret_d0_1d80;
        case m2c::kret_d0_1d9c: 	goto ret_d0_1d9c;
        case m2c::kret_d0_1daf: 	goto ret_d0_1daf;
        case m2c::kret_d0_1db6: 	goto ret_d0_1db6;
        case m2c::kret_d0_1dc9: 	goto ret_d0_1dc9;
        case m2c::kret_d0_1dce: 	goto ret_d0_1dce;
        case m2c::kret_d0_1de7: 	goto ret_d0_1de7;
        case m2c::kret_d0_1e00: 	goto ret_d0_1e00;
        case m2c::kret_d0_1ec6: 	goto ret_d0_1ec6;
        case m2c::kret_d0_1eec: 	goto ret_d0_1eec;
        case m2c::kret_d0_1f0a: 	goto ret_d0_1f0a;
        case m2c::kret_d0_1f35: 	goto ret_d0_1f35;
        case m2c::kret_d0_1f6e: 	goto ret_d0_1f6e;
        case m2c::kret_d0_1f8e: 	goto ret_d0_1f8e;
        case m2c::kret_d0_1fe8: 	goto ret_d0_1fe8;
        case m2c::kret_d0_1ff7: 	goto ret_d0_1ff7;
        case m2c::kret_d0_201f: 	goto ret_d0_201f;
        case m2c::kret_d0_2024: 	goto ret_d0_2024;
        case m2c::kret_d0_2036: 	goto ret_d0_2036;
        case m2c::kret_d0_221c: 	goto ret_d0_221c;
        case m2c::kret_d0_22fb: 	goto ret_d0_22fb;
        case m2c::kret_d0_2323: 	goto ret_d0_2323;
        case m2c::kret_d0_234e: 	goto ret_d0_234e;
        case m2c::kret_d0_23b0: 	goto ret_d0_23b0;
        case m2c::kret_d0_23ba: 	goto ret_d0_23ba;
        case m2c::kret_d0_23c9: 	goto ret_d0_23c9;
        case m2c::kret_d0_23d3: 	goto ret_d0_23d3;
        case m2c::kret_d0_23dc: 	goto ret_d0_23dc;
        case m2c::kret_d0_23e2: 	goto ret_d0_23e2;
        case m2c::kret_d0_23e8: 	goto ret_d0_23e8;
        case m2c::kret_d0_2412: 	goto ret_d0_2412;
        case m2c::kret_d0_241c: 	goto ret_d0_241c;
        case m2c::kret_d0_2509: 	goto ret_d0_2509;
        case m2c::kret_d0_2532: 	goto ret_d0_2532;
        case m2c::kret_d0_254c: 	goto ret_d0_254c;
        case m2c::kret_d0_2556: 	goto ret_d0_2556;
        case m2c::kret_d0_257a: 	goto ret_d0_257a;
        case m2c::kret_d0_25a3: 	goto ret_d0_25a3;
        case m2c::kret_d0_265e: 	goto ret_d0_265e;
        case m2c::kret_d0_2675: 	goto ret_d0_2675;
        case m2c::kret_d0_2683: 	goto ret_d0_2683;
        case m2c::kret_d0_2691: 	goto ret_d0_2691;
        case m2c::kret_d0_26a0: 	goto ret_d0_26a0;
        case m2c::kret_d0_2777: 	goto ret_d0_2777;
        case m2c::kret_d0_2973: 	goto ret_d0_2973;
        case m2c::kret_d0_2a07: 	goto ret_d0_2a07;
        case m2c::kret_d0_2a15: 	goto ret_d0_2a15;
        case m2c::kret_d0_2a1a: 	goto ret_d0_2a1a;
        case m2c::kret_d0_2a26: 	goto ret_d0_2a26;
        case m2c::kret_d0_2a64: 	goto ret_d0_2a64;
        case m2c::kret_d0_2a8e: 	goto ret_d0_2a8e;
        case m2c::kret_d0_2a95: 	goto ret_d0_2a95;
        case m2c::kret_d0_2ad9: 	goto ret_d0_2ad9;
        case m2c::kret_d0_2b18: 	goto ret_d0_2b18;
        case m2c::kret_d0_2dd1: 	goto ret_d0_2dd1;
        case m2c::kret_d0_2e08: 	goto ret_d0_2e08;
        case m2c::kret_d0_2e1a: 	goto ret_d0_2e1a;
        case m2c::kret_d0_2e51: 	goto ret_d0_2e51;
        case m2c::kret_d0_4b9: 	goto ret_d0_4b9;
        case m2c::kret_d0_54d: 	goto ret_d0_54d;
        case m2c::kret_d0_5bd: 	goto ret_d0_5bd;
        case m2c::kret_d0_5c8: 	goto ret_d0_5c8;
        case m2c::kret_d0_5ce: 	goto ret_d0_5ce;
        case m2c::kret_d0_5f5: 	goto ret_d0_5f5;
        case m2c::kret_d0_601: 	goto ret_d0_601;
        case m2c::kret_d0_625: 	goto ret_d0_625;
        case m2c::kret_d0_630: 	goto ret_d0_630;
        case m2c::kret_d0_643: 	goto ret_d0_643;
        case m2c::kret_d0_665: 	goto ret_d0_665;
        case m2c::kret_d0_707: 	goto ret_d0_707;
        case m2c::kret_d0_730: 	goto ret_d0_730;
        case m2c::kret_d0_7bf: 	goto ret_d0_7bf;
        case m2c::kret_d0_7cb: 	goto ret_d0_7cb;
        case m2c::kret_d0_7d0: 	goto ret_d0_7d0;
        case m2c::kret_d0_7d5: 	goto ret_d0_7d5;
        case m2c::kret_d0_7da: 	goto ret_d0_7da;
        case m2c::kret_d0_7f1: 	goto ret_d0_7f1;
        case m2c::kret_d0_7f6: 	goto ret_d0_7f6;
        case m2c::kret_d0_7fb: 	goto ret_d0_7fb;
        case m2c::kret_d0_800: 	goto ret_d0_800;
        case m2c::kret_d0_805: 	goto ret_d0_805;
        case m2c::kret_d0_80a: 	goto ret_d0_80a;
        case m2c::kret_d0_80f: 	goto ret_d0_80f;
        case m2c::kret_d0_814: 	goto ret_d0_814;
        case m2c::kret_d0_819: 	goto ret_d0_819;
        case m2c::kret_d0_81e: 	goto ret_d0_81e;
        case m2c::kret_d0_823: 	goto ret_d0_823;
        case m2c::kret_d0_828: 	goto ret_d0_828;
        case m2c::kret_d0_82d: 	goto ret_d0_82d;
        case m2c::kret_d0_832: 	goto ret_d0_832;
        case m2c::kret_d0_837: 	goto ret_d0_837;
        case m2c::kret_d0_83c: 	goto ret_d0_83c;
        case m2c::kret_d0_841: 	goto ret_d0_841;
        case m2c::kret_d0_846: 	goto ret_d0_846;
        case m2c::kret_d0_853: 	goto ret_d0_853;
        case m2c::kret_d0_860: 	goto ret_d0_860;
        case m2c::kret_d0_865: 	goto ret_d0_865;
        case m2c::kret_d0_86d: 	goto ret_d0_86d;
        case m2c::kret_d0_872: 	goto ret_d0_872;
        case m2c::kret_d0_877: 	goto ret_d0_877;
        case m2c::kret_d0_87c: 	goto ret_d0_87c;
        case m2c::kret_d0_881: 	goto ret_d0_881;
        case m2c::kret_d0_886: 	goto ret_d0_886;
        case m2c::kret_d0_88b: 	goto ret_d0_88b;
        case m2c::kret_d0_898: 	goto ret_d0_898;
        case m2c::kret_d0_89d: 	goto ret_d0_89d;
        case m2c::kret_d0_8a2: 	goto ret_d0_8a2;
        case m2c::kret_d0_8a7: 	goto ret_d0_8a7;
        case m2c::kret_d0_8b1: 	goto ret_d0_8b1;
        case m2c::kret_d0_8be: 	goto ret_d0_8be;
        case m2c::kret_d0_8cb: 	goto ret_d0_8cb;
        case m2c::kret_d0_8d0: 	goto ret_d0_8d0;
        case m2c::kret_d0_8d5: 	goto ret_d0_8d5;
        case m2c::kret_d0_8e2: 	goto ret_d0_8e2;
        case m2c::kret_d0_8e7: 	goto ret_d0_8e7;
        case m2c::kret_d0_8ec: 	goto ret_d0_8ec;
        case m2c::kret_d0_90b: 	goto ret_d0_90b;
        case m2c::kret_d0_918: 	goto ret_d0_918;
        case m2c::kret_d0_925: 	goto ret_d0_925;
        case m2c::kret_d0_932: 	goto ret_d0_932;
        case m2c::kret_d0_93f: 	goto ret_d0_93f;
        case m2c::kret_d0_94c: 	goto ret_d0_94c;
        case m2c::kret_d0_959: 	goto ret_d0_959;
        case m2c::kret_d0_962: 	goto ret_d0_962;
        case m2c::kret_d0_96b: 	goto ret_d0_96b;
        case m2c::kret_d0_974: 	goto ret_d0_974;
        case m2c::kret_d0_97d: 	goto ret_d0_97d;
        case m2c::kret_d0_9a4: 	goto ret_d0_9a4;
        case m2c::kret_d0_9b0: 	goto ret_d0_9b0;
        case m2c::kret_d0_9c1: 	goto ret_d0_9c1;
        case m2c::kret_d0_9ed: 	goto ret_d0_9ed;
        case m2c::kret_d0_9f9: 	goto ret_d0_9f9;
        case m2c::kret_d0_9fe: 	goto ret_d0_9fe;
        case m2c::kret_d0_a03: 	goto ret_d0_a03;
        case m2c::kret_d0_a08: 	goto ret_d0_a08;
        case m2c::kret_d0_a0d: 	goto ret_d0_a0d;
        case m2c::kret_d0_a12: 	goto ret_d0_a12;
        case m2c::kret_d0_a17: 	goto ret_d0_a17;
        case m2c::kret_d0_a1c: 	goto ret_d0_a1c;
        case m2c::kret_d0_a26: 	goto ret_d0_a26;
        case m2c::kret_d0_a2b: 	goto ret_d0_a2b;
        case m2c::kret_d0_a30: 	goto ret_d0_a30;
        case m2c::kret_d0_a3c: 	goto ret_d0_a3c;
        case m2c::kret_d0_a48: 	goto ret_d0_a48;
        case m2c::kret_d0_a55: 	goto ret_d0_a55;
        case m2c::kret_d0_a69: 	goto ret_d0_a69;
        case m2c::kret_d0_a78: 	goto ret_d0_a78;
        case m2c::kret_d0_a85: 	goto ret_d0_a85;
        case m2c::kret_d0_a92: 	goto ret_d0_a92;
        case m2c::kret_d0_a97: 	goto ret_d0_a97;
        case m2c::kret_d0_a9c: 	goto ret_d0_a9c;
        case m2c::kret_d0_aa4: 	goto ret_d0_aa4;
        case m2c::kret_d0_aa8: 	goto ret_d0_aa8;
        case m2c::kret_d0_aac: 	goto ret_d0_aac;
        case m2c::kret_d0_ab3: 	goto ret_d0_ab3;
        case m2c::kret_d0_abb: 	goto ret_d0_abb;
        case m2c::kret_d0_abf: 	goto ret_d0_abf;
        case m2c::kret_d0_ad3: 	goto ret_d0_ad3;
        case m2c::kret_d0_adf: 	goto ret_d0_adf;
        case m2c::kret_d0_aef: 	goto ret_d0_aef;
        case m2c::kret_d0_af4: 	goto ret_d0_af4;
        case m2c::kret_d0_afe: 	goto ret_d0_afe;
        case m2c::kret_d0_b03: 	goto ret_d0_b03;
        case m2c::kret_d0_b21: 	goto ret_d0_b21;
        case m2c::kret_d0_b25: 	goto ret_d0_b25;
        case m2c::kret_d0_b29: 	goto ret_d0_b29;
        case m2c::kret_d0_b2d: 	goto ret_d0_b2d;
        case m2c::kret_d0_b47: 	goto ret_d0_b47;
        case m2c::kret_d0_b86: 	goto ret_d0_b86;
        case m2c::kret_d0_b8b: 	goto ret_d0_b8b;
        case m2c::kret_d0_b90: 	goto ret_d0_b90;
        case m2c::kret_d0_b9a: 	goto ret_d0_b9a;
        case m2c::kret_d0_bba: 	goto ret_d0_bba;
        case m2c::kret_d0_be0: 	goto ret_d0_be0;
        case m2c::kret_d0_bed: 	goto ret_d0_bed;
        case m2c::kret_d0_c10: 	goto ret_d0_c10;
        case m2c::kret_d0_e63: 	goto ret_d0_e63;
        case m2c::kret_d0_ebf: 	goto ret_d0_ebf;
        case m2c::kseg000_1c07_proc: 	goto seg000_1c07_proc;
        case m2c::kseg000_2736_proc: 	goto seg000_2736_proc;
        case m2c::kseg000_600_proc: 	goto seg000_600_proc;
        case m2c::kseg000_7ba_proc: 	goto seg000_7ba_proc;
        case m2c::kstart: 	goto start;
        case m2c::ksub_104b7: 	goto sub_104b7;
        case m2c::ksub_10547: 	goto sub_10547;
        case m2c::ksub_1054a: 	goto sub_1054a;
        case m2c::ksub_105bb: 	goto sub_105bb;
        case m2c::ksub_105c6: 	goto sub_105c6;
        case m2c::ksub_105cd: 	goto sub_105cd;
        case m2c::ksub_105f2: 	goto sub_105f2;
        case m2c::ksub_10620: 	goto sub_10620;
        case m2c::ksub_1062d: 	goto sub_1062d;
        case m2c::ksub_10640: 	goto sub_10640;
        case m2c::ksub_10660: 	goto sub_10660;
        case m2c::ksub_10bdd: 	goto sub_10bdd;
        case m2c::ksub_10bea: 	goto sub_10bea;
        case m2c::ksub_10bf7: 	goto sub_10bf7;
        case m2c::ksub_10c0d: 	goto sub_10c0d;
        case m2c::ksub_10e5f: 	goto sub_10e5f;
        case m2c::ksub_10e62: 	goto sub_10e62;
        case m2c::ksub_10ebc: 	goto sub_10ebc;
        case m2c::ksub_1104a: 	goto sub_1104a;
        case m2c::ksub_1107c: 	goto sub_1107c;
        case m2c::ksub_1108d: 	goto sub_1108d;
        case m2c::ksub_110a4: 	goto sub_110a4;
        case m2c::ksub_11162: 	goto sub_11162;
        case m2c::ksub_11bdf: 	goto sub_11bdf;
        case m2c::ksub_11be5: 	goto sub_11be5;
        case m2c::ksub_11c33: 	goto sub_11c33;
        case m2c::ksub_11c97: 	goto sub_11c97;
        case m2c::ksub_11cb7: 	goto sub_11cb7;
        case m2c::ksub_11ccd: 	goto sub_11ccd;
        case m2c::ksub_11d00: 	goto sub_11d00;
        case m2c::ksub_11d16: 	goto sub_11d16;
        case m2c::ksub_11d36: 	goto sub_11d36;
        case m2c::ksub_11d4f: 	goto sub_11d4f;
        case m2c::ksub_11d6b: 	goto sub_11d6b;
        case m2c::ksub_11d7b: 	goto sub_11d7b;
        case m2c::ksub_11d99: 	goto sub_11d99;
        case m2c::ksub_11daa: 	goto sub_11daa;
        case m2c::ksub_11db3: 	goto sub_11db3;
        case m2c::ksub_11dc4: 	goto sub_11dc4;
        case m2c::ksub_11dca: 	goto sub_11dca;
        case m2c::ksub_11de3: 	goto sub_11de3;
        case m2c::ksub_11dfd: 	goto sub_11dfd;
        case m2c::ksub_11ec0: 	goto sub_11ec0;
        case m2c::ksub_11ee6: 	goto sub_11ee6;
        case m2c::ksub_11f09: 	goto sub_11f09;
        case m2c::ksub_11f32: 	goto sub_11f32;
        case m2c::ksub_11f6b: 	goto sub_11f6b;
        case m2c::ksub_11f82: 	goto sub_11f82;
        case m2c::ksub_11f89: 	goto sub_11f89;
        case m2c::ksub_11fd8: 	goto sub_11fd8;
        case m2c::ksub_11fe4: 	goto sub_11fe4;
        case m2c::ksub_11ff3: 	goto sub_11ff3;
        case m2c::ksub_1201c: 	goto sub_1201c;
        case m2c::ksub_12023: 	goto sub_12023;
        case m2c::ksub_12032: 	goto sub_12032;
        case m2c::ksub_12506: 	goto sub_12506;
        case m2c::ksub_1252e: 	goto sub_1252e;
        case m2c::ksub_12549: 	goto sub_12549;
        case m2c::ksub_12553: 	goto sub_12553;
        case m2c::ksub_12574: 	goto sub_12574;
        case m2c::ksub_1259e: 	goto sub_1259e;
        case m2c::ksub_1265a: 	goto sub_1265a;
        case m2c::ksub_12671: 	goto sub_12671;
        case m2c::ksub_1267f: 	goto sub_1267f;
        case m2c::ksub_1268d: 	goto sub_1268d;
        case m2c::ksub_1269b: 	goto sub_1269b;
        case m2c::ksub_12772: 	goto sub_12772;
        case m2c::ksub_12970: 	goto sub_12970;
        case m2c::ksub_12a05: 	goto sub_12a05;
        case m2c::ksub_12a10: 	goto sub_12a10;
        case m2c::ksub_12a13: 	goto sub_12a13;
        case m2c::ksub_12a18: 	goto sub_12a18;
        case m2c::ksub_12a25: 	goto sub_12a25;
        case m2c::ksub_12a63: 	goto sub_12a63;
        case m2c::ksub_12a8c: 	goto sub_12a8c;
        case m2c::ksub_12a93: 	goto sub_12a93;
        case m2c::ksub_12aac: 	goto sub_12aac;
        case m2c::ksub_12ad8: 	goto sub_12ad8;
        case m2c::ksub_12dd0: 	goto sub_12dd0;
        case m2c::ksub_12e02: 	goto sub_12e02;
        case m2c::ksub_12e06: 	goto sub_12e06;
        case m2c::ksub_12e18: 	goto sub_12e18;
        case m2c::ksub_12e4d: 	goto sub_12e4d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

