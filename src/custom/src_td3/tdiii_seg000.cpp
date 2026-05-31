/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "tdiii.h"

                

 bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
sub_10000:
	// 32 
#undef var_12
#define var_12 -0x12
	// 34 var_12          = word ptr -12h ;~ 01A2:0000
#undef var_10
#define var_10 -0x10
	// 35 var_10          = word ptr -10h ;~ 01A2:0000
#undef var_e
#define var_e -0x0E
	// 36 var_E           = word ptr -0Eh ;~ 01A2:0000
#undef var_c
#define var_c -0x0C
	// 37 var_C           = word ptr -0Ch ;~ 01A2:0000
#undef var_a
#define var_a -0x0A
	// 38 var_A           = word ptr -0Ah ;~ 01A2:0000
#undef var_8
#define var_8 -8
	// 39 var_8           = word ptr -8 ;~ 01A2:0000
#undef var_6
#define var_6 -6
	// 40 var_6           = word ptr -6 ;~ 01A2:0000
#undef var_4
#define var_4 -4
	// 41 var_4           = word ptr -4 ;~ 01A2:0000
#undef var_2
#define var_2 -2
	// 42 var_2           = word ptr -2 ;~ 01A2:0000
ret_1a2_0:
	// 4369 
cs=0x1a2;eip=0x000000; 	X(PUSH(bp));	// 44 push    bp ;~ 01A2:0000
cs=0x1a2;eip=0x000001; 	T(MOV(bp, sp));	// 45 mov     bp, sp ;~ 01A2:0001
cs=0x1a2;eip=0x000003; 	T(SUB(sp, 0x12));	// 46 sub     sp, 12h ;~ 01A2:0003
cs=0x1a2;eip=0x000006; 	X(PUSH(di));	// 47 push    di ;~ 01A2:0006
cs=0x1a2;eip=0x000007; 	X(PUSH(si));	// 48 push    si ;~ 01A2:0007
cs=0x1a2;eip=0x000008; 	T(SUB(ax, ax));	// 49 sub     ax, ax ;~ 01A2:0008
cs=0x1a2;eip=0x00000a; 	X(MOV(word_2bec6, ax));	// 50 mov     word_2BEC6, ax ;~ 01A2:000A
cs=0x1a2;eip=0x00000d; 	X(MOV(byte_2bec8, al));	// 51 mov     byte_2BEC8, al ;~ 01A2:000D
cs=0x1a2;eip=0x000010; 	X(MOV(byte_2becc, al));	// 52 mov     byte_2BECC, al ;~ 01A2:0010
cs=0x1a2;eip=0x000013; 	X(MOV(byte_2bede, al));	// 53 mov     byte_2BEDE, al ;~ 01A2:0013
cs=0x1a2;eip=0x000016; 	X(MOV(byte_34f20, al));	// 54 mov     byte_34F20, al ;~ 01A2:0016
cs=0x1a2;eip=0x000019; 	T(MOV(ax, 0x4F));	// 55 mov     ax, 4Fh ; 'O' ;~ 01A2:0019
cs=0x1a2;eip=0x00001c; 	X(PUSH(ax));	// 56 push    ax ;~ 01A2:001C
cs=0x1a2;eip=0x00001d; 	T(MOV(ax, 0x0E788));	// 57 mov     ax, 0E788h ;~ 01A2:001D
cs=0x1a2;eip=0x000020; 	X(PUSH(ax));	// 58 push    ax ;~ 01A2:0020
cs=0x1a2;eip=0x000021; 	R(CALLF(sub_29bdc,0));	// 59 call    sub_29BDC ;~ 01A2:0021
cs=0x1a2;eip=0x000026; 	T(ADD(sp, 4));	// 60 add     sp, 4 ;~ 01A2:0026
cs=0x1a2;eip=0x000029; 	T(MOV(al, byte_3a5c8));	// 61 mov     al, byte_3A5C8 ;~ 01A2:0029
cs=0x1a2;eip=0x00002c; 	T(AND(al, 0x0DF));	// 62 and     al, 0DFh ;~ 01A2:002C
cs=0x1a2;eip=0x00002e; 	X(MOV(byte_2d740, al));	// 63 mov     byte_2D740, al ;~ 01A2:002E
cs=0x1a2;eip=0x000031; 	X(MOV(byte_2c8ca, al));	// 64 mov     byte_2C8CA, al ;~ 01A2:0031
cs=0x1a2;eip=0x000034; 	X(MOV(byte_2c91a, al));	// 65 mov     byte_2C91A, al ;~ 01A2:0034
cs=0x1a2;eip=0x000037; 	X(MOV(byte_2c90a, al));	// 66 mov     byte_2C90A, al ;~ 01A2:0037
cs=0x1a2;eip=0x00003a; 	X(MOV(byte_2c8fa, al));	// 67 mov     byte_2C8FA, al ;~ 01A2:003A
cs=0x1a2;eip=0x00003d; 	X(MOV(byte_2c8ea, al));	// 68 mov     byte_2C8EA, al ;~ 01A2:003D
cs=0x1a2;eip=0x000040; 	X(MOV(byte_2c8da, al));	// 69 mov     byte_2C8DA, al ;~ 01A2:0040
cs=0x1a2;eip=0x000043; 	X(MOV(byte_2ddf8, al));	// 70 mov     byte_2DDF8, al ;~ 01A2:0043
cs=0x1a2;eip=0x000046; 	X(MOV(byte_2bf1a, al));	// 71 mov     byte_2BF1A, al ;~ 01A2:0046
cs=0x1a2;eip=0x000049; 	X(MOV(byte_2d761, al));	// 72 mov     byte_2D761, al ;~ 01A2:0049
cs=0x1a2;eip=0x00004c; 	X(MOV(byte_2d841, al));	// 73 mov     byte_2D841, al ;~ 01A2:004C
cs=0x1a2;eip=0x00004f; 	X(MOV(word_2bec6, 0x0FF));	// 74 mov     word_2BEC6, 0FFh ;~ 01A2:004F
cs=0x1a2;eip=0x000055; 	X(PUSH(cs));	// 75 push    cs ;~ 01A2:0055
cs=0x1a2;eip=0x000056; 	R(CALL(sub_1092a,0));	// 76 call    near ptr sub_1092A ;~ 01A2:0056
cs=0x1a2;eip=0x000059; 	R(CALLF(sub_13bdc,0));	// 77 call    sub_13BDC ;~ 01A2:0059
cs=0x1a2;eip=0x00005e; 	R(CALLF(sub_1cfed,0));	// 78 call    sub_1CFED ;~ 01A2:005E
cs=0x1a2;eip=0x000063; 	R(CALLF(sub_13c30,0));	// 79 call    sub_13C30 ;~ 01A2:0063
cs=0x1a2;eip=0x000068; 	X(PUSH(cs));	// 80 push    cs ;~ 01A2:0068
cs=0x1a2;eip=0x000069; 	R(CALL(sub_111d2,0));	// 81 call    near ptr sub_111D2 ;~ 01A2:0069
cs=0x1a2;eip=0x00006c; 	R(CALLF(sub_20657,0));	// 82 call    sub_20657 ;~ 01A2:006C
cs=0x1a2;eip=0x000071; 	X(PUSH(seg_2bf18));	// 83 push    seg_2BF18 ;~ 01A2:0071
cs=0x1a2;eip=0x000075; 	X(PUSH(word_2bf16));	// 84 push    word_2BF16 ;~ 01A2:0075
cs=0x1a2;eip=0x000079; 	R(CALLF(sub_29ca6,0));	// 85 call    sub_29CA6 ;~ 01A2:0079
cs=0x1a2;eip=0x00007e; 	T(ADD(sp, 4));	// 86 add     sp, 4 ;~ 01A2:007E
cs=0x1a2;eip=0x000081; 	T(MOV(ax, 0x42));	// 87 mov     ax, 42h ; 'B' ;~ 01A2:0081
cs=0x1a2;eip=0x000084; 	X(PUSH(ax));	// 88 push    ax ;~ 01A2:0084
cs=0x1a2;eip=0x000085; 	T(MOV(ax, 0x0A9C));	// 89 mov     ax, 0A9Ch ;~ 01A2:0085
cs=0x1a2;eip=0x000088; 	X(PUSH(ax));	// 90 push    ax ;~ 01A2:0088
cs=0x1a2;eip=0x000089; 	R(CALLF(sub_29b46,0));	// 91 call    sub_29B46 ;~ 01A2:0089
cs=0x1a2;eip=0x00008e; 	T(ADD(sp, 4));	// 92 add     sp, 4 ;~ 01A2:008E
cs=0x1a2;eip=0x000091; 	X(PUSH(word_3a3fe));	// 93 push    word_3A3FE ;~ 01A2:0091
cs=0x1a2;eip=0x000095; 	X(PUSH(word_3a3fc));	// 94 push    word_3A3FC ;~ 01A2:0095
cs=0x1a2;eip=0x000099; 	T(MOV(ax, 0x0A9A));	// 95 mov     ax, 0A9Ah ;~ 01A2:0099
cs=0x1a2;eip=0x00009c; 	X(PUSH(ax));	// 96 push    ax ;~ 01A2:009C
cs=0x1a2;eip=0x00009d; 	X(PUSH(cs));	// 97 push    cs ;~ 01A2:009D
cs=0x1a2;eip=0x00009e; 	R(CALL(sub_10ee0,0));	// 98 call    near ptr sub_10EE0 ;~ 01A2:009E
cs=0x1a2;eip=0x0000a1; 	T(ADD(sp, 6));	// 99 add     sp, 6 ;~ 01A2:00A1
cs=0x1a2;eip=0x0000a4; 	T(CMP(word_3a178, 0x13));	// 100 cmp     word_3A178, 13h ;~ 01A2:00A4
cs=0x1a2;eip=0x0000a9; 	R(JNZ(loc_100b0));	// 101 jnz     short loc_100B0 ;~ 01A2:00A9
cs=0x1a2;eip=0x0000ab; 	T(MOV(ax, 0x4D));	// 102 mov     ax, 4Dh ; 'M' ;~ 01A2:00AB
cs=0x1a2;eip=0x0000ae; 	R(JMP(loc_100b3));	// 103 jmp     short loc_100B3 ;~ 01A2:00AE
loc_100b0:
	// 4370 
cs=0x1a2;eip=0x0000b0; 	T(MOV(ax, 0x56));	// 107 mov     ax, 56h ; 'V' ;~ 01A2:00B0
loc_100b3:
	// 4371 
cs=0x1a2;eip=0x0000b3; 	X(PUSH(ax));	// 110 push    ax ;~ 01A2:00B3
cs=0x1a2;eip=0x0000b4; 	T(MOV(ax, 0x0A9C));	// 111 mov     ax, 0A9Ch ;~ 01A2:00B4
cs=0x1a2;eip=0x0000b7; 	X(PUSH(ax));	// 112 push    ax ;~ 01A2:00B7
cs=0x1a2;eip=0x0000b8; 	R(CALLF(sub_29b46,0));	// 113 call    sub_29B46 ;~ 01A2:00B8
cs=0x1a2;eip=0x0000bd; 	T(ADD(sp, 4));	// 114 add     sp, 4 ;~ 01A2:00BD
cs=0x1a2;eip=0x0000c0; 	X(PUSH(word_3a392));	// 115 push    word_3A392 ;~ 01A2:00C0
cs=0x1a2;eip=0x0000c4; 	X(PUSH(word_3a390));	// 116 push    word_3A390 ;~ 01A2:00C4
cs=0x1a2;eip=0x0000c8; 	T(MOV(ax, 0x0A9A));	// 117 mov     ax, 0A9Ah ;~ 01A2:00C8
cs=0x1a2;eip=0x0000cb; 	X(PUSH(ax));	// 118 push    ax ;~ 01A2:00CB
cs=0x1a2;eip=0x0000cc; 	X(PUSH(cs));	// 119 push    cs ;~ 01A2:00CC
cs=0x1a2;eip=0x0000cd; 	R(CALL(sub_10ee0,0));	// 120 call    near ptr sub_10EE0 ;~ 01A2:00CD
cs=0x1a2;eip=0x0000d0; 	T(ADD(sp, 6));	// 121 add     sp, 6 ;~ 01A2:00D0
cs=0x1a2;eip=0x0000d3; 	T(MOV(ax, 0x62));	// 122 mov     ax, 62h ; 'b' ;~ 01A2:00D3
cs=0x1a2;eip=0x0000d6; 	X(PUSH(ax));	// 123 push    ax ;~ 01A2:00D6
cs=0x1a2;eip=0x0000d7; 	T(MOV(ax, 0x0A9C));	// 124 mov     ax, 0A9Ch ;~ 01A2:00D7
cs=0x1a2;eip=0x0000da; 	X(PUSH(ax));	// 125 push    ax ;~ 01A2:00DA
cs=0x1a2;eip=0x0000db; 	R(CALLF(sub_29b46,0));	// 126 call    sub_29B46 ;~ 01A2:00DB
cs=0x1a2;eip=0x0000e0; 	T(ADD(sp, 4));	// 127 add     sp, 4 ;~ 01A2:00E0
cs=0x1a2;eip=0x0000e3; 	X(PUSH(word_38cda));	// 128 push    word_38CDA ;~ 01A2:00E3
cs=0x1a2;eip=0x0000e7; 	X(PUSH(word_38cd8));	// 129 push    word_38CD8 ;~ 01A2:00E7
cs=0x1a2;eip=0x0000eb; 	T(MOV(ax, 0x0A9A));	// 130 mov     ax, 0A9Ah ;~ 01A2:00EB
cs=0x1a2;eip=0x0000ee; 	X(PUSH(ax));	// 131 push    ax ;~ 01A2:00EE
cs=0x1a2;eip=0x0000ef; 	X(PUSH(cs));	// 132 push    cs ;~ 01A2:00EF
cs=0x1a2;eip=0x0000f0; 	R(CALL(sub_10ee0,0));	// 133 call    near ptr sub_10EE0 ;~ 01A2:00F0
cs=0x1a2;eip=0x0000f3; 	T(ADD(sp, 6));	// 134 add     sp, 6 ;~ 01A2:00F3
cs=0x1a2;eip=0x0000f6; 	T(CMP(word_3a178, 0x13));	// 135 cmp     word_3A178, 13h ;~ 01A2:00F6
cs=0x1a2;eip=0x0000fb; 	R(JNZ(loc_10102));	// 136 jnz     short loc_10102 ;~ 01A2:00FB
cs=0x1a2;eip=0x0000fd; 	T(MOV(ax, 0x6B));	// 137 mov     ax, 6Bh ; 'k' ;~ 01A2:00FD
cs=0x1a2;eip=0x000100; 	R(JMP(loc_10105));	// 138 jmp     short loc_10105 ;~ 01A2:0100
loc_10102:
	// 4372 
cs=0x1a2;eip=0x000102; 	T(MOV(ax, 0x74));	// 142 mov     ax, 74h ; 't' ;~ 01A2:0102
loc_10105:
	// 4373 
cs=0x1a2;eip=0x000105; 	X(PUSH(ax));	// 145 push    ax ;~ 01A2:0105
cs=0x1a2;eip=0x000106; 	T(MOV(ax, 0x0A9C));	// 146 mov     ax, 0A9Ch ;~ 01A2:0106
cs=0x1a2;eip=0x000109; 	X(PUSH(ax));	// 147 push    ax ;~ 01A2:0109
cs=0x1a2;eip=0x00010a; 	R(CALLF(sub_29b46,0));	// 148 call    sub_29B46 ;~ 01A2:010A
cs=0x1a2;eip=0x00010f; 	T(ADD(sp, 4));	// 149 add     sp, 4 ;~ 01A2:010F
cs=0x1a2;eip=0x000112; 	X(PUSH(word_3a39c));	// 150 push    word_3A39C ;~ 01A2:0112
cs=0x1a2;eip=0x000116; 	X(PUSH(word_3a39a));	// 151 push    word_3A39A ;~ 01A2:0116
cs=0x1a2;eip=0x00011a; 	T(MOV(ax, 0x0A9A));	// 152 mov     ax, 0A9Ah ;~ 01A2:011A
cs=0x1a2;eip=0x00011d; 	X(PUSH(ax));	// 153 push    ax ;~ 01A2:011D
cs=0x1a2;eip=0x00011e; 	X(PUSH(cs));	// 154 push    cs ;~ 01A2:011E
cs=0x1a2;eip=0x00011f; 	R(CALL(sub_10ee0,0));	// 155 call    near ptr sub_10EE0 ;~ 01A2:011F
cs=0x1a2;eip=0x000122; 	T(ADD(sp, 6));	// 156 add     sp, 6 ;~ 01A2:0122
cs=0x1a2;eip=0x000125; 	X(MOV(word_2bec6, 1));	// 157 mov     word_2BEC6, 1 ;~ 01A2:0125
cs=0x1a2;eip=0x00012b; 	R(CALLF(sub_26e6e,0));	// 158 call    sub_26E6E ;~ 01A2:012B
cs=0x1a2;eip=0x000130; 	T(SUB(ax, ax));	// 159 sub     ax, ax ;~ 01A2:0130
cs=0x1a2;eip=0x000132; 	X(PUSH(ax));	// 160 push    ax ;~ 01A2:0132
cs=0x1a2;eip=0x000133; 	R(CALLF(sub_26f58,0));	// 161 call    sub_26F58 ;~ 01A2:0133
cs=0x1a2;eip=0x000138; 	T(ADD(sp, 2));	// 162 add     sp, 2 ;~ 01A2:0138
cs=0x1a2;eip=0x00013b; 	T(MOV(ax, 0x0C6));	// 163 mov     ax, 0C6h ; 'Æ' ;~ 01A2:013B
cs=0x1a2;eip=0x00013e; 	X(PUSH(ax));	// 164 push    ax ;~ 01A2:013E
cs=0x1a2;eip=0x00013f; 	T(MOV(ax, 2));	// 165 mov     ax, 2 ;~ 01A2:013F
cs=0x1a2;eip=0x000142; 	X(PUSH(ax));	// 166 push    ax ;~ 01A2:0142
cs=0x1a2;eip=0x000143; 	T(MOV(ax, 0x13D));	// 167 mov     ax, 13Dh ;~ 01A2:0143
cs=0x1a2;eip=0x000146; 	X(PUSH(ax));	// 168 push    ax ;~ 01A2:0146
cs=0x1a2;eip=0x000147; 	T(MOV(ax, 2));	// 169 mov     ax, 2 ;~ 01A2:0147
cs=0x1a2;eip=0x00014a; 	X(PUSH(ax));	// 170 push    ax ;~ 01A2:014A
cs=0x1a2;eip=0x00014b; 	R(CALLF(sub_26ec4,0));	// 171 call    sub_26EC4 ;~ 01A2:014B
cs=0x1a2;eip=0x000150; 	T(ADD(sp, 8));	// 172 add     sp, 8 ;~ 01A2:0150
cs=0x1a2;eip=0x000153; 	R(JMP(loc_10178));	// 173 jmp     short loc_10178 ;~ 01A2:0153
loc_10156:
	// 4374 
cs=0x1a2;eip=0x000156; 	T(CMP(ax, 2));	// 178 cmp     ax, 2 ;~ 01A2:0156
cs=0x1a2;eip=0x000159; 	R(JZ(loc_1019e));	// 179 jz      short loc_1019E ;~ 01A2:0159
cs=0x1a2;eip=0x00015b; 	T(CMP(ax, 3));	// 180 cmp     ax, 3 ;~ 01A2:015B
cs=0x1a2;eip=0x00015e; 	R(JZ(loc_101b8));	// 181 jz      short loc_101B8 ;~ 01A2:015E
cs=0x1a2;eip=0x000160; 	T(CMP(ax, 4));	// 182 cmp     ax, 4 ;~ 01A2:0160
cs=0x1a2;eip=0x000163; 	R(JZ(loc_101ce));	// 183 jz      short loc_101CE ;~ 01A2:0163
cs=0x1a2;eip=0x000165; 	T(CMP(ax, 5));	// 184 cmp     ax, 5 ;~ 01A2:0165
cs=0x1a2;eip=0x000168; 	R(JNZ(loc_1016d));	// 185 jnz     short loc_1016D ;~ 01A2:0168
cs=0x1a2;eip=0x00016a; 	R(JMP(loc_10246));	// 186 jmp     loc_10246 ;~ 01A2:016A
loc_1016d:
	// 4375 
cs=0x1a2;eip=0x00016d; 	T(CMP(ax, 6));	// 190 cmp     ax, 6 ;~ 01A2:016D
cs=0x1a2;eip=0x000170; 	R(JNZ(loc_10178));	// 191 jnz     short loc_10178 ;~ 01A2:0170
loc_10172:
	// 4376 
cs=0x1a2;eip=0x000172; 	X(MOV(word_2bec6, 4));	// 195 mov     word_2BEC6, 4 ;~ 01A2:0172
loc_10178:
	// 4377 
cs=0x1a2;eip=0x000178; 	T(MOV(ax, word_2bec6));	// 199 mov     ax, word_2BEC6 ;~ 01A2:0178
cs=0x1a2;eip=0x00017b; 	T(CMP(ax, 1));	// 200 cmp     ax, 1 ;~ 01A2:017B
cs=0x1a2;eip=0x00017e; 	R(JNZ(loc_10156));	// 201 jnz     short loc_10156 ;~ 01A2:017E
cs=0x1a2;eip=0x000180; 	R(CALLF(sub_11fb0,0));	// 202 call    sub_11FB0 ;~ 01A2:0180
cs=0x1a2;eip=0x000185; 	R(CALLF(sub_17304,0));	// 203 call    sub_17304 ;~ 01A2:0185
cs=0x1a2;eip=0x00018a; 	R(CALLF(sub_147ee,0));	// 204 call    sub_147EE ;~ 01A2:018A
cs=0x1a2;eip=0x00018f; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 205 mov     [bp+var_C], ax ;~ 01A2:018F
cs=0x1a2;eip=0x000192; 	T(OR(ax, ax));	// 206 or      ax, ax ;~ 01A2:0192
cs=0x1a2;eip=0x000194; 	R(JZ(loc_10172));	// 207 jz      short loc_10172 ;~ 01A2:0194
cs=0x1a2;eip=0x000196; 	R(CALLF(sub_1463e,0));	// 208 call    sub_1463E ;~ 01A2:0196
cs=0x1a2;eip=0x00019b; 	R(JMP(loc_10172));	// 209 jmp     short loc_10172 ;~ 01A2:019B
loc_1019e:
	// 4378 
cs=0x1a2;eip=0x00019e; 	R(CALLF(sub_13e02,0));	// 214 call    sub_13E02 ;~ 01A2:019E
cs=0x1a2;eip=0x0001a3; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 215 mov     [bp+var_C], ax ;~ 01A2:01A3
cs=0x1a2;eip=0x0001a6; 	T(OR(ax, ax));	// 216 or      ax, ax ;~ 01A2:01A6
cs=0x1a2;eip=0x0001a8; 	R(JNZ(loc_101af));	// 217 jnz     short loc_101AF ;~ 01A2:01A8
cs=0x1a2;eip=0x0001aa; 	X(MOV(byte_2bec8, 1));	// 218 mov     byte_2BEC8, 1 ;~ 01A2:01AA
loc_101af:
	// 4379 
cs=0x1a2;eip=0x0001af; 	X(MOV(word_2bec6, 5));	// 221 mov     word_2BEC6, 5 ;~ 01A2:01AF
cs=0x1a2;eip=0x0001b5; 	R(JMP(loc_10178));	// 222 jmp     short loc_10178 ;~ 01A2:01B5
loc_101b8:
	// 4380 
cs=0x1a2;eip=0x0001b8; 	T(MOV(ax, word_2de02));	// 227 mov     ax, word_2DE02 ;~ 01A2:01B8
cs=0x1a2;eip=0x0001bb; 	T(OR(ax, word_2de04));	// 228 or      ax, word_2DE04 ;~ 01A2:01BB
cs=0x1a2;eip=0x0001bf; 	R(JZ(loc_10172));	// 229 jz      short loc_10172 ;~ 01A2:01BF
cs=0x1a2;eip=0x0001c1; 	T(SUB(ax, ax));	// 230 sub     ax, ax ;~ 01A2:01C1
cs=0x1a2;eip=0x0001c3; 	X(PUSH(ax));	// 231 push    ax ;~ 01A2:01C3
cs=0x1a2;eip=0x0001c4; 	R(CALLF(sub_12e8e,0));	// 232 call    sub_12E8E ;~ 01A2:01C4
cs=0x1a2;eip=0x0001c9; 	T(ADD(sp, 2));	// 233 add     sp, 2 ;~ 01A2:01C9
cs=0x1a2;eip=0x0001cc; 	R(JMP(loc_10172));	// 234 jmp     short loc_10172 ;~ 01A2:01CC
loc_101ce:
	// 4381 
cs=0x1a2;eip=0x0001ce; 	R(CALLF(sub_17304,0));	// 238 call    sub_17304 ;~ 01A2:01CE
cs=0x1a2;eip=0x0001d3; 	T(MOV(al, byte_3750c));	// 239 mov     al, byte_3750C ;~ 01A2:01D3
cs=0x1a2;eip=0x0001d6; 	T(SUB(ah, ah));	// 240 sub     ah, ah ;~ 01A2:01D6
cs=0x1a2;eip=0x0001d8; 	X(PUSH(ax));	// 241 push    ax ;~ 01A2:01D8
cs=0x1a2;eip=0x0001d9; 	R(CALLF(sub_13c62,0));	// 242 call    sub_13C62 ;~ 01A2:01D9
cs=0x1a2;eip=0x0001de; 	T(ADD(sp, 2));	// 243 add     sp, 2 ;~ 01A2:01DE
loc_101e1:
	// 4382 
cs=0x1a2;eip=0x0001e1; 	T(CMP(word_2bec6, 4));	// 247 cmp     word_2BEC6, 4 ;~ 01A2:01E1
cs=0x1a2;eip=0x0001e6; 	R(JNZ(loc_10178));	// 248 jnz     short loc_10178 ;~ 01A2:01E6
cs=0x1a2;eip=0x0001e8; 	T(SUB(al, al));	// 249 sub     al, al ;~ 01A2:01E8
cs=0x1a2;eip=0x0001ea; 	X(MOV(byte_2c94a, al));	// 250 mov     byte_2C94A, al ;~ 01A2:01EA
cs=0x1a2;eip=0x0001ed; 	T(SUB(ah, ah));	// 251 sub     ah, ah ;~ 01A2:01ED
cs=0x1a2;eip=0x0001ef; 	X(MOV(word_3a3ec, ax));	// 252 mov     word_3A3EC, ax ;~ 01A2:01EF
cs=0x1a2;eip=0x0001f2; 	R(CALLF(sub_1338c,0));	// 253 call    sub_1338C ;~ 01A2:01F2
cs=0x1a2;eip=0x0001f7; 	T(CMP(word_3a3ec, 4));	// 254 cmp     word_3A3EC, 4 ;~ 01A2:01F7
cs=0x1a2;eip=0x0001fc; 	R(JNZ(loc_10203));	// 255 jnz     short loc_10203 ;~ 01A2:01FC
cs=0x1a2;eip=0x0001fe; 	R(CALLF(sub_1463e,0));	// 256 call    sub_1463E ;~ 01A2:01FE
loc_10203:
	// 4383 
cs=0x1a2;eip=0x000203; 	T(CMP(word_3a3ec, 3));	// 259 cmp     word_3A3EC, 3 ;~ 01A2:0203
cs=0x1a2;eip=0x000208; 	R(JNZ(loc_1020f));	// 260 jnz     short loc_1020F ;~ 01A2:0208
cs=0x1a2;eip=0x00020a; 	R(CALLF(sub_15576,0));	// 261 call    sub_15576 ;~ 01A2:020A
loc_1020f:
	// 4384 
cs=0x1a2;eip=0x00020f; 	T(CMP(word_3a3ec, 2));	// 264 cmp     word_3A3EC, 2 ;~ 01A2:020F
cs=0x1a2;eip=0x000214; 	R(JNZ(loc_1021b));	// 265 jnz     short loc_1021B ;~ 01A2:0214
cs=0x1a2;eip=0x000216; 	R(CALLF(sub_1504c,0));	// 266 call    sub_1504C ;~ 01A2:0216
loc_1021b:
	// 4385 
cs=0x1a2;eip=0x00021b; 	T(CMP(word_3a3ec, 1));	// 269 cmp     word_3A3EC, 1 ;~ 01A2:021B
cs=0x1a2;eip=0x000220; 	R(JNZ(loc_10227));	// 270 jnz     short loc_10227 ;~ 01A2:0220
cs=0x1a2;eip=0x000222; 	R(CALLF(sub_15a6e,0));	// 271 call    sub_15A6E ;~ 01A2:0222
loc_10227:
	// 4386 
cs=0x1a2;eip=0x000227; 	T(CMP(word_3a3ec, 0));	// 274 cmp     word_3A3EC, 0 ;~ 01A2:0227
cs=0x1a2;eip=0x00022c; 	R(JNZ(loc_101e1));	// 275 jnz     short loc_101E1 ;~ 01A2:022C
cs=0x1a2;eip=0x00022e; 	T(CMP(byte_2bec8, 0));	// 276 cmp     byte_2BEC8, 0 ;~ 01A2:022E
cs=0x1a2;eip=0x000233; 	R(JNZ(loc_1023e));	// 277 jnz     short loc_1023E ;~ 01A2:0233
cs=0x1a2;eip=0x000235; 	X(MOV(word_2bec6, 2));	// 278 mov     word_2BEC6, 2 ;~ 01A2:0235
cs=0x1a2;eip=0x00023b; 	R(JMP(loc_101e1));	// 279 jmp     short loc_101E1 ;~ 01A2:023B
loc_1023e:
	// 4387 
cs=0x1a2;eip=0x00023e; 	X(MOV(word_2bec6, 5));	// 284 mov     word_2BEC6, 5 ;~ 01A2:023E
cs=0x1a2;eip=0x000244; 	R(JMP(loc_101e1));	// 285 jmp     short loc_101E1 ;~ 01A2:0244
loc_10246:
	// 4388 
cs=0x1a2;eip=0x000246; 	R(CALLF(sub_14752,0));	// 289 call    sub_14752 ;~ 01A2:0246
cs=0x1a2;eip=0x00024b; 	T(SUB(al, al));	// 290 sub     al, al ;~ 01A2:024B
cs=0x1a2;eip=0x00024d; 	X(MOV(byte_2c94a, al));	// 291 mov     byte_2C94A, al ;~ 01A2:024D
cs=0x1a2;eip=0x000250; 	T(SUB(ah, ah));	// 292 sub     ah, ah ;~ 01A2:0250
cs=0x1a2;eip=0x000252; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 293 mov     [bp+var_E], ax ;~ 01A2:0252
cs=0x1a2;eip=0x000255; 	X(MOV(byte_2bed5, 1));	// 294 mov     byte_2BED5, 1 ;~ 01A2:0255
cs=0x1a2;eip=0x00025a; 	T(CMP(word_2c944, 3));	// 295 cmp     word_2C944, 3 ;~ 01A2:025A
cs=0x1a2;eip=0x00025f; 	R(JL(loc_10264));	// 296 jl      short loc_10264 ;~ 01A2:025F
cs=0x1a2;eip=0x000261; 	X(MOV(byte_2bed5, al));	// 297 mov     byte_2BED5, al ;~ 01A2:0261
loc_10264:
	// 4389 
cs=0x1a2;eip=0x000264; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 0));	// 300 mov     [bp+var_C], 0 ;~ 01A2:0264
cs=0x1a2;eip=0x000269; 	R(JMP(loc_1027c));	// 301 jmp     short loc_1027C ;~ 01A2:0269
loc_1026c:
	// 4390 
cs=0x1a2;eip=0x00026c; 	T(MOV(ax, 0x1B));	// 306 mov     ax, 1Bh ;~ 01A2:026C
cs=0x1a2;eip=0x00026f; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_c))));	// 307 imul    [bp+var_C] ;~ 01A2:026F
cs=0x1a2;eip=0x000272; 	T(MOV(bx, ax));	// 308 mov     bx, ax ;~ 01A2:0272
cs=0x1a2;eip=0x000274; 	X(MOV(*(raddr(ds,bx-0x17F4)), 5));	// 309 mov     byte ptr [bx-17F4h], 5 ;~ 01A2:0274
loc_10279:
	// 4391 
cs=0x1a2;eip=0x000279; 	X(INC(*(dw*)(raddr(ss,bp+var_c))));	// 312 inc     [bp+var_C] ;~ 01A2:0279
loc_1027c:
	// 4392 
cs=0x1a2;eip=0x00027c; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), 4));	// 315 cmp     [bp+var_C], 4 ;~ 01A2:027C
cs=0x1a2;eip=0x000280; 	R(JL(loc_10285));	// 316 jl      short loc_10285 ;~ 01A2:0280
cs=0x1a2;eip=0x000282; 	R(JMP(loc_10766));	// 317 jmp     loc_10766 ;~ 01A2:0282
loc_10285:
	// 4393 
cs=0x1a2;eip=0x000285; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 321 mov     [bp+var_2], 0 ;~ 01A2:0285
loc_1028a:
	// 4394 
cs=0x1a2;eip=0x00028a; 	T(MOV(ax, 0x1B));	// 324 mov     ax, 1Bh ;~ 01A2:028A
cs=0x1a2;eip=0x00028d; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_c))));	// 325 imul    [bp+var_C] ;~ 01A2:028D
cs=0x1a2;eip=0x000290; 	T(MOV(si, ax));	// 326 mov     si, ax ;~ 01A2:0290
cs=0x1a2;eip=0x000292; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 327 mov     bx, [bp+var_2] ;~ 01A2:0292
cs=0x1a2;eip=0x000295; 	X(MOV(*(raddr(ds,bx+si-0x180C)), 0));	// 328 mov     byte ptr [bx+si-180Ch], 0 ;~ 01A2:0295
cs=0x1a2;eip=0x00029a; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 329 inc     [bp+var_2] ;~ 01A2:029A
cs=0x1a2;eip=0x00029d; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x1B));	// 330 cmp     [bp+var_2], 1Bh ;~ 01A2:029D
cs=0x1a2;eip=0x0002a1; 	R(JL(loc_1028a));	// 331 jl      short loc_1028A ;~ 01A2:02A1
cs=0x1a2;eip=0x0002a3; 	T(CMP(byte_2bec8, 1));	// 332 cmp     byte_2BEC8, 1 ;~ 01A2:02A3
cs=0x1a2;eip=0x0002a8; 	R(JZ(loc_1026c));	// 333 jz      short loc_1026C ;~ 01A2:02A8
cs=0x1a2;eip=0x0002aa; 	T(MOV(ax, 0x1B));	// 334 mov     ax, 1Bh ;~ 01A2:02AA
cs=0x1a2;eip=0x0002ad; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_c))));	// 335 imul    [bp+var_C] ;~ 01A2:02AD
cs=0x1a2;eip=0x0002b0; 	T(MOV(bx, ax));	// 336 mov     bx, ax ;~ 01A2:02B0
cs=0x1a2;eip=0x0002b2; 	X(MOV(*(raddr(ds,bx-0x17F4)), 1));	// 337 mov     byte ptr [bx-17F4h], 1 ;~ 01A2:02B2
cs=0x1a2;eip=0x0002b7; 	R(JMP(loc_10279));	// 338 jmp     short loc_10279 ;~ 01A2:02B7
loc_102ba:
	// 4395 
cs=0x1a2;eip=0x0002ba; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 0));	// 343 mov     [bp+var_C], 0 ;~ 01A2:02BA
cs=0x1a2;eip=0x0002bf; 	R(JMP(loc_102e1));	// 344 jmp     short loc_102E1 ;~ 01A2:02BF
loc_102c2:
	// 4396 
cs=0x1a2;eip=0x0002c2; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 349 inc     [bp+var_2] ;~ 01A2:02C2
loc_102c5:
	// 4397 
cs=0x1a2;eip=0x0002c5; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x0A));	// 352 cmp     [bp+var_2], 0Ah ;~ 01A2:02C5
cs=0x1a2;eip=0x0002c9; 	R(JGE(loc_102de));	// 353 jge     short loc_102DE ;~ 01A2:02C9
cs=0x1a2;eip=0x0002cb; 	T(MOV(ax, 0x1B));	// 354 mov     ax, 1Bh ;~ 01A2:02CB
cs=0x1a2;eip=0x0002ce; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_c))));	// 355 imul    [bp+var_C] ;~ 01A2:02CE
cs=0x1a2;eip=0x0002d1; 	T(MOV(si, ax));	// 356 mov     si, ax ;~ 01A2:02D1
cs=0x1a2;eip=0x0002d3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 357 mov     bx, [bp+var_2] ;~ 01A2:02D3
cs=0x1a2;eip=0x0002d6; 	X(MOV(*(raddr(ds,bx+si-0x180C)), 0));	// 358 mov     byte ptr [bx+si-180Ch], 0 ;~ 01A2:02D6
cs=0x1a2;eip=0x0002db; 	R(JMP(loc_102c2));	// 359 jmp     short loc_102C2 ;~ 01A2:02DB
loc_102de:
	// 4398 
cs=0x1a2;eip=0x0002de; 	X(INC(*(dw*)(raddr(ss,bp+var_c))));	// 364 inc     [bp+var_C] ;~ 01A2:02DE
loc_102e1:
	// 4399 
cs=0x1a2;eip=0x0002e1; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), 4));	// 367 cmp     [bp+var_C], 4 ;~ 01A2:02E1
cs=0x1a2;eip=0x0002e5; 	R(JGE(loc_102ee));	// 368 jge     short loc_102EE ;~ 01A2:02E5
cs=0x1a2;eip=0x0002e7; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 369 mov     [bp+var_2], 0 ;~ 01A2:02E7
cs=0x1a2;eip=0x0002ec; 	R(JMP(loc_102c5));	// 370 jmp     short loc_102C5 ;~ 01A2:02EC
loc_102ee:
	// 4400 
cs=0x1a2;eip=0x0002ee; 	X(MOV(byte_2c805, 1));	// 374 mov     byte_2C805, 1 ;~ 01A2:02EE
cs=0x1a2;eip=0x0002f3; 	R(JMP(loc_106f0));	// 375 jmp     loc_106F0 ;~ 01A2:02F3
loc_102f6:
	// 4401 
cs=0x1a2;eip=0x0002f6; 	T(MOV(ah, byte_38ce8));	// 379 mov     ah, byte_38CE8 ;~ 01A2:02F6
cs=0x1a2;eip=0x0002fa; 	T(SUB(al, al));	// 380 sub     al, al ;~ 01A2:02FA
cs=0x1a2;eip=0x0002fc; 	T(SUB(dx, dx));	// 381 sub     dx, dx ;~ 01A2:02FC
cs=0x1a2;eip=0x0002fe; 	T(MOV(cx, 0x3C));	// 382 mov     cx, 3Ch ; '<' ;~ 01A2:02FE
cs=0x1a2;eip=0x000301; 	T(DIV2(cx));	// 383 div     cx ;~ 01A2:0301
cs=0x1a2;eip=0x000303; 	T(MOV(ch, byte_3a39e));	// 384 mov     ch, byte_3A39E ;~ 01A2:0303
cs=0x1a2;eip=0x000307; 	T(SUB(cl, cl));	// 385 sub     cl, cl ;~ 01A2:0307
cs=0x1a2;eip=0x000309; 	T(ADD(ax, cx));	// 386 add     ax, cx ;~ 01A2:0309
cs=0x1a2;eip=0x00030b; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 387 mov     [bp+var_6], ax ;~ 01A2:030B
cs=0x1a2;eip=0x00030e; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 388 mov     [bp+var_4], 0 ;~ 01A2:030E
cs=0x1a2;eip=0x000313; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4))));	// 389 mov     dx, [bp+var_4] ;~ 01A2:0313
cs=0x1a2;eip=0x000316; 	T(MOV(cx, ax));	// 390 mov     cx, ax ;~ 01A2:0316
cs=0x1a2;eip=0x000318; 	T(MOV(bx, dx));	// 391 mov     bx, dx ;~ 01A2:0318
cs=0x1a2;eip=0x00031a; 	T(SHL(ax, 1));	// 392 shl     ax, 1 ;~ 01A2:031A
cs=0x1a2;eip=0x00031c; 	T(RCL(dx, 1));	// 393 rcl     dx, 1 ;~ 01A2:031C
cs=0x1a2;eip=0x00031e; 	T(SHL(ax, 1));	// 394 shl     ax, 1 ;~ 01A2:031E
cs=0x1a2;eip=0x000320; 	T(RCL(dx, 1));	// 395 rcl     dx, 1 ;~ 01A2:0320
cs=0x1a2;eip=0x000322; 	T(ADD(ax, cx));	// 396 add     ax, cx ;~ 01A2:0322
cs=0x1a2;eip=0x000324; 	T(ADC(dx, bx));	// 397 adc     dx, bx ;~ 01A2:0324
cs=0x1a2;eip=0x000326; 	T(MOV(cl, 3));	// 398 mov     cl, 3 ;~ 01A2:0326
loc_10328:
	// 4402 
cs=0x1a2;eip=0x000328; 	T(SHR(dx, 1));	// 401 shr     dx, 1 ;~ 01A2:0328
cs=0x1a2;eip=0x00032a; 	T(RCR(ax, 1));	// 402 rcr     ax, 1 ;~ 01A2:032A
cs=0x1a2;eip=0x00032c; 	T(DEC(cl));	// 403 dec     cl ;~ 01A2:032C
cs=0x1a2;eip=0x00032e; 	R(JNZ(loc_10328));	// 404 jnz     short loc_10328 ;~ 01A2:032E
cs=0x1a2;eip=0x000330; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 405 mov     [bp+var_6], ax ;~ 01A2:0330
cs=0x1a2;eip=0x000333; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 406 mov     [bp+var_4], dx ;~ 01A2:0333
cs=0x1a2;eip=0x000336; 	T(MOV(al, ah));	// 407 mov     al, ah ;~ 01A2:0336
cs=0x1a2;eip=0x000338; 	T(MOV(ah, dl));	// 408 mov     ah, dl ;~ 01A2:0338
cs=0x1a2;eip=0x00033a; 	T(MOV(dl, dh));	// 409 mov     dl, dh ;~ 01A2:033A
cs=0x1a2;eip=0x00033c; 	T(SUB(dh, dh));	// 410 sub     dh, dh ;~ 01A2:033C
cs=0x1a2;eip=0x00033e; 	X(MOV(byte_2c80e, al));	// 411 mov     byte_2C80E, al ;~ 01A2:033E
cs=0x1a2;eip=0x000341; 	T(MOV(ax, 0x3C));	// 412 mov     ax, 3Ch ; '<' ;~ 01A2:0341
cs=0x1a2;eip=0x000344; 	T(CWD);	// 413 cwd ;~ 01A2:0344
cs=0x1a2;eip=0x000345; 	X(PUSH(dx));	// 414 push    dx ;~ 01A2:0345
cs=0x1a2;eip=0x000346; 	X(PUSH(ax));	// 415 push    ax ;~ 01A2:0346
cs=0x1a2;eip=0x000347; 	T(MOV(al, *(db*)(raddr(ss,bp+var_6))));	// 416 mov     al, byte ptr [bp+var_6] ;~ 01A2:0347
cs=0x1a2;eip=0x00034a; 	T(SUB(ah, ah));	// 417 sub     ah, ah ;~ 01A2:034A
cs=0x1a2;eip=0x00034c; 	T(SUB(cx, cx));	// 418 sub     cx, cx ;~ 01A2:034C
cs=0x1a2;eip=0x00034e; 	X(PUSH(cx));	// 419 push    cx ;~ 01A2:034E
cs=0x1a2;eip=0x00034f; 	X(PUSH(ax));	// 420 push    ax ;~ 01A2:034F
cs=0x1a2;eip=0x000350; 	R(CALLF(sub_29d98,0));	// 421 call    sub_29D98 ;~ 01A2:0350
cs=0x1a2;eip=0x000355; 	T(MOV(al, ah));	// 422 mov     al, ah ;~ 01A2:0355
cs=0x1a2;eip=0x000357; 	T(MOV(ah, dl));	// 423 mov     ah, dl ;~ 01A2:0357
cs=0x1a2;eip=0x000359; 	T(MOV(dl, dh));	// 424 mov     dl, dh ;~ 01A2:0359
cs=0x1a2;eip=0x00035b; 	T(SUB(dh, dh));	// 425 sub     dh, dh ;~ 01A2:035B
loc_1035d:
	// 4403 
cs=0x1a2;eip=0x00035d; 	X(MOV(byte_2c80f, al));	// 428 mov     byte_2C80F, al ;~ 01A2:035D
cs=0x1a2;eip=0x000360; 	T(MOV(ax, 0x3C));	// 429 mov     ax, 3Ch ; '<' ;~ 01A2:0360
cs=0x1a2;eip=0x000363; 	T(CWD);	// 430 cwd ;~ 01A2:0363
cs=0x1a2;eip=0x000364; 	X(PUSH(dx));	// 431 push    dx ;~ 01A2:0364
cs=0x1a2;eip=0x000365; 	X(PUSH(ax));	// 432 push    ax ;~ 01A2:0365
cs=0x1a2;eip=0x000366; 	T(MOV(al, byte_2c80e));	// 433 mov     al, byte_2C80E ;~ 01A2:0366
cs=0x1a2;eip=0x000369; 	T(SUB(ah, ah));	// 434 sub     ah, ah ;~ 01A2:0369
cs=0x1a2;eip=0x00036b; 	T(SUB(cx, cx));	// 435 sub     cx, cx ;~ 01A2:036B
cs=0x1a2;eip=0x00036d; 	X(PUSH(cx));	// 436 push    cx ;~ 01A2:036D
cs=0x1a2;eip=0x00036e; 	X(PUSH(ax));	// 437 push    ax ;~ 01A2:036E
cs=0x1a2;eip=0x00036f; 	R(CALLF(sub_29d98,0));	// 438 call    sub_29D98 ;~ 01A2:036F
cs=0x1a2;eip=0x000374; 	T(MOV(cl, byte_2c80f));	// 439 mov     cl, byte_2C80F ;~ 01A2:0374
cs=0x1a2;eip=0x000378; 	T(SUB(ch, ch));	// 440 sub     ch, ch ;~ 01A2:0378
cs=0x1a2;eip=0x00037a; 	T(ADD(ax, cx));	// 441 add     ax, cx ;~ 01A2:037A
cs=0x1a2;eip=0x00037c; 	T(ADC(dx, 0));	// 442 adc     dx, 0 ;~ 01A2:037C
cs=0x1a2;eip=0x00037f; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 443 mov     [bp+var_6], ax ;~ 01A2:037F
cs=0x1a2;eip=0x000382; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 444 mov     [bp+var_4], dx ;~ 01A2:0382
cs=0x1a2;eip=0x000385; 	T(MOV(ax, 0x1770));	// 445 mov     ax, 1770h ;~ 01A2:0385
cs=0x1a2;eip=0x000388; 	T(CWD);	// 446 cwd ;~ 01A2:0388
cs=0x1a2;eip=0x000389; 	X(PUSH(dx));	// 447 push    dx ;~ 01A2:0389
cs=0x1a2;eip=0x00038a; 	X(PUSH(ax));	// 448 push    ax ;~ 01A2:038A
cs=0x1a2;eip=0x00038b; 	T(MOV(al, byte_2c806));	// 449 mov     al, byte_2C806 ;~ 01A2:038B
cs=0x1a2;eip=0x00038e; 	T(SUB(ah, ah));	// 450 sub     ah, ah ;~ 01A2:038E
cs=0x1a2;eip=0x000390; 	T(SUB(cx, cx));	// 451 sub     cx, cx ;~ 01A2:0390
cs=0x1a2;eip=0x000392; 	X(PUSH(cx));	// 452 push    cx ;~ 01A2:0392
cs=0x1a2;eip=0x000393; 	X(PUSH(ax));	// 453 push    ax ;~ 01A2:0393
cs=0x1a2;eip=0x000394; 	R(CALLF(sub_29d98,0));	// 454 call    sub_29D98 ;~ 01A2:0394
cs=0x1a2;eip=0x000399; 	T(MOV(cx, 0x64));	// 455 mov     cx, 64h ; 'd' ;~ 01A2:0399
cs=0x1a2;eip=0x00039c; 	T(SUB(bx, bx));	// 456 sub     bx, bx ;~ 01A2:039C
cs=0x1a2;eip=0x00039e; 	X(PUSH(bx));	// 457 push    bx ;~ 01A2:039E
cs=0x1a2;eip=0x00039f; 	X(PUSH(cx));	// 458 push    cx ;~ 01A2:039F
cs=0x1a2;eip=0x0003a0; 	T(MOV(cl, byte_2c807));	// 459 mov     cl, byte_2C807 ;~ 01A2:03A0
cs=0x1a2;eip=0x0003a4; 	T(SUB(ch, ch));	// 460 sub     ch, ch ;~ 01A2:03A4
cs=0x1a2;eip=0x0003a6; 	X(PUSH(bx));	// 461 push    bx ;~ 01A2:03A6
cs=0x1a2;eip=0x0003a7; 	X(PUSH(cx));	// 462 push    cx ;~ 01A2:03A7
cs=0x1a2;eip=0x0003a8; 	T(MOV(si, ax));	// 463 mov     si, ax ;~ 01A2:03A8
cs=0x1a2;eip=0x0003aa; 	T(MOV(di, dx));	// 464 mov     di, dx ;~ 01A2:03AA
cs=0x1a2;eip=0x0003ac; 	R(CALLF(sub_29d98,0));	// 465 call    sub_29D98 ;~ 01A2:03AC
cs=0x1a2;eip=0x0003b1; 	T(MOV(cl, byte_2c808));	// 466 mov     cl, byte_2C808 ;~ 01A2:03B1
cs=0x1a2;eip=0x0003b5; 	T(SUB(ch, ch));	// 467 sub     ch, ch ;~ 01A2:03B5
cs=0x1a2;eip=0x0003b7; 	T(SUB(bx, bx));	// 468 sub     bx, bx ;~ 01A2:03B7
cs=0x1a2;eip=0x0003b9; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 469 mov     [bp+var_12], ax ;~ 01A2:03B9
cs=0x1a2;eip=0x0003bc; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), dx));	// 470 mov     [bp+var_10], dx ;~ 01A2:03BC
cs=0x1a2;eip=0x0003bf; 	T(MOV(ax, cx));	// 471 mov     ax, cx ;~ 01A2:03BF
cs=0x1a2;eip=0x0003c1; 	T(MOV(dx, bx));	// 472 mov     dx, bx ;~ 01A2:03C1
cs=0x1a2;eip=0x0003c3; 	T(SHL(cx, 1));	// 473 shl     cx, 1 ;~ 01A2:03C3
cs=0x1a2;eip=0x0003c5; 	T(RCL(bx, 1));	// 474 rcl     bx, 1 ;~ 01A2:03C5
cs=0x1a2;eip=0x0003c7; 	T(SHL(cx, 1));	// 475 shl     cx, 1 ;~ 01A2:03C7
cs=0x1a2;eip=0x0003c9; 	T(RCL(bx, 1));	// 476 rcl     bx, 1 ;~ 01A2:03C9
cs=0x1a2;eip=0x0003cb; 	T(ADD(cx, ax));	// 477 add     cx, ax ;~ 01A2:03CB
cs=0x1a2;eip=0x0003cd; 	T(ADC(bx, dx));	// 478 adc     bx, dx ;~ 01A2:03CD
cs=0x1a2;eip=0x0003cf; 	T(SHL(cx, 1));	// 479 shl     cx, 1 ;~ 01A2:03CF
cs=0x1a2;eip=0x0003d1; 	T(RCL(bx, 1));	// 480 rcl     bx, 1 ;~ 01A2:03D1
cs=0x1a2;eip=0x0003d3; 	T(ADD(cx, *(dw*)(raddr(ss,bp+var_12))));	// 481 add     cx, [bp+var_12] ;~ 01A2:03D3
cs=0x1a2;eip=0x0003d6; 	T(ADC(bx, *(dw*)(raddr(ss,bp+var_10))));	// 482 adc     bx, [bp+var_10] ;~ 01A2:03D6
cs=0x1a2;eip=0x0003d9; 	T(ADD(cx, si));	// 483 add     cx, si ;~ 01A2:03D9
cs=0x1a2;eip=0x0003db; 	T(ADC(bx, di));	// 484 adc     bx, di ;~ 01A2:03DB
cs=0x1a2;eip=0x0003dd; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), cx));	// 485 mov     [bp+var_A], cx ;~ 01A2:03DD
cs=0x1a2;eip=0x0003e0; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), bx));	// 486 mov     [bp+var_8], bx ;~ 01A2:03E0
cs=0x1a2;eip=0x0003e3; 	T(MOV(ax, cx));	// 487 mov     ax, cx ;~ 01A2:03E3
cs=0x1a2;eip=0x0003e5; 	T(OR(ax, bx));	// 488 or      ax, bx ;~ 01A2:03E5
cs=0x1a2;eip=0x0003e7; 	R(JZ(loc_10408));	// 489 jz      short loc_10408 ;~ 01A2:03E7
cs=0x1a2;eip=0x0003e9; 	X(PUSH(bx));	// 490 push    bx ;~ 01A2:03E9
cs=0x1a2;eip=0x0003ea; 	X(PUSH(cx));	// 491 push    cx ;~ 01A2:03EA
cs=0x1a2;eip=0x0003eb; 	T(MOV(ax, 0x1770));	// 492 mov     ax, 1770h ;~ 01A2:03EB
cs=0x1a2;eip=0x0003ee; 	T(CWD);	// 493 cwd ;~ 01A2:03EE
cs=0x1a2;eip=0x0003ef; 	X(PUSH(dx));	// 494 push    dx ;~ 01A2:03EF
cs=0x1a2;eip=0x0003f0; 	X(PUSH(ax));	// 495 push    ax ;~ 01A2:03F0
cs=0x1a2;eip=0x0003f1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 496 push    [bp+var_4] ;~ 01A2:03F1
cs=0x1a2;eip=0x0003f4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 497 push    [bp+var_6] ;~ 01A2:03F4
cs=0x1a2;eip=0x0003f7; 	R(CALLF(sub_29d98,0));	// 498 call    sub_29D98 ;~ 01A2:03F7
cs=0x1a2;eip=0x0003fc; 	X(PUSH(dx));	// 499 push    dx ;~ 01A2:03FC
cs=0x1a2;eip=0x0003fd; 	X(PUSH(ax));	// 500 push    ax ;~ 01A2:03FD
cs=0x1a2;eip=0x0003fe; 	R(CALLF(sub_29cfc,0));	// 501 call    sub_29CFC ;~ 01A2:03FE
cs=0x1a2;eip=0x000403; 	X(MOV(byte_2c809, al));	// 502 mov     byte_2C809, al ;~ 01A2:0403
cs=0x1a2;eip=0x000406; 	R(JMP(loc_1040d));	// 503 jmp     short loc_1040D ;~ 01A2:0406
loc_10408:
	// 4404 
cs=0x1a2;eip=0x000408; 	X(MOV(byte_2c809, 0));	// 507 mov     byte_2C809, 0 ;~ 01A2:0408
loc_1040d:
	// 4405 
cs=0x1a2;eip=0x00040d; 	T(MOV(al, byte_2c809));	// 510 mov     al, byte_2C809 ;~ 01A2:040D
cs=0x1a2;eip=0x000410; 	T(SUB(ah, ah));	// 511 sub     ah, ah ;~ 01A2:0410
cs=0x1a2;eip=0x000412; 	T(MOV(cx, ax));	// 512 mov     cx, ax ;~ 01A2:0412
cs=0x1a2;eip=0x000414; 	T(MOV(ax, word_2c944));	// 513 mov     ax, word_2C944 ;~ 01A2:0414
cs=0x1a2;eip=0x000417; 	T(ADD(ax, 4));	// 514 add     ax, 4 ;~ 01A2:0417
cs=0x1a2;eip=0x00041a; 	T(MUL1_2(cx));	// 515 mul     cx ;~ 01A2:041A
cs=0x1a2;eip=0x00041c; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 516 mov     [bp+var_A], ax ;~ 01A2:041C
cs=0x1a2;eip=0x00041f; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 517 mov     [bp+var_8], 0 ;~ 01A2:041F
cs=0x1a2;eip=0x000424; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 518 mov     ax, [bp+var_6] ;~ 01A2:0424
cs=0x1a2;eip=0x000427; 	T(OR(ax, *(dw*)(raddr(ss,bp+var_4))));	// 519 or      ax, [bp+var_4] ;~ 01A2:0427
cs=0x1a2;eip=0x00042a; 	R(JZ(loc_10456));	// 520 jz      short loc_10456 ;~ 01A2:042A
cs=0x1a2;eip=0x00042c; 	T(CMP(byte_2c81e, 0));	// 521 cmp     byte_2C81E, 0 ;~ 01A2:042C
cs=0x1a2;eip=0x000431; 	R(JZ(loc_10456));	// 522 jz      short loc_10456 ;~ 01A2:0431
cs=0x1a2;eip=0x000433; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 523 push    [bp+var_4] ;~ 01A2:0433
cs=0x1a2;eip=0x000436; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 524 push    [bp+var_6] ;~ 01A2:0436
cs=0x1a2;eip=0x000439; 	T(MOV(ax, 0x14));	// 525 mov     ax, 14h ;~ 01A2:0439
cs=0x1a2;eip=0x00043c; 	T(CWD);	// 526 cwd ;~ 01A2:043C
cs=0x1a2;eip=0x00043d; 	X(PUSH(dx));	// 527 push    dx ;~ 01A2:043D
cs=0x1a2;eip=0x00043e; 	X(PUSH(ax));	// 528 push    ax ;~ 01A2:043E
cs=0x1a2;eip=0x00043f; 	T(SUB(ax, ax));	// 529 sub     ax, ax ;~ 01A2:043F
cs=0x1a2;eip=0x000441; 	X(PUSH(ax));	// 530 push    ax ;~ 01A2:0441
cs=0x1a2;eip=0x000442; 	X(PUSH(word_353fb));	// 531 push    word_353FB ;~ 01A2:0442
cs=0x1a2;eip=0x000446; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 532 push    [bp+var_8] ;~ 01A2:0446
cs=0x1a2;eip=0x000449; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 533 push    [bp+var_A] ;~ 01A2:0449
cs=0x1a2;eip=0x00044c; 	R(CALLF(sub_29d98,0));	// 534 call    sub_29D98 ;~ 01A2:044C
cs=0x1a2;eip=0x000451; 	X(PUSH(dx));	// 535 push    dx ;~ 01A2:0451
cs=0x1a2;eip=0x000452; 	X(PUSH(ax));	// 536 push    ax ;~ 01A2:0452
cs=0x1a2;eip=0x000453; 	R(JMP(loc_10484));	// 537 jmp     short loc_10484 ;~ 01A2:0453
loc_10456:
	// 4406 
cs=0x1a2;eip=0x000456; 	T(MOV(ax, word_353fb));	// 543 mov     ax, word_353FB ;~ 01A2:0456
cs=0x1a2;eip=0x000459; 	T(SUB(dx, dx));	// 544 sub     dx, dx ;~ 01A2:0459
cs=0x1a2;eip=0x00045b; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), dx));	// 545 cmp     [bp+var_4], dx ;~ 01A2:045B
cs=0x1a2;eip=0x00045e; 	R(JC(loc_10472));	// 546 jb      short loc_10472 ;~ 01A2:045E
cs=0x1a2;eip=0x000460; 	R(JA(loc_10467));	// 547 ja      short loc_10467 ;~ 01A2:0460
cs=0x1a2;eip=0x000462; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), ax));	// 548 cmp     [bp+var_6], ax ;~ 01A2:0462
cs=0x1a2;eip=0x000465; 	R(JBE(loc_10472));	// 549 jbe     short loc_10472 ;~ 01A2:0465
loc_10467:
	// 4407 
cs=0x1a2;eip=0x000467; 	T(MOV(ax, word_353fb));	// 552 mov     ax, word_353FB ;~ 01A2:0467
cs=0x1a2;eip=0x00046a; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 553 mov     [bp+var_6], ax ;~ 01A2:046A
cs=0x1a2;eip=0x00046d; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 554 mov     [bp+var_4], 0 ;~ 01A2:046D
loc_10472:
	// 4408 
cs=0x1a2;eip=0x000472; 	T(MOV(ax, 0x60));	// 558 mov     ax, 60h ; '`' ;~ 01A2:0472
cs=0x1a2;eip=0x000475; 	T(CWD);	// 559 cwd ;~ 01A2:0475
cs=0x1a2;eip=0x000476; 	X(PUSH(dx));	// 560 push    dx ;~ 01A2:0476
cs=0x1a2;eip=0x000477; 	X(PUSH(ax));	// 561 push    ax ;~ 01A2:0477
cs=0x1a2;eip=0x000478; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 562 push    [bp+var_8] ;~ 01A2:0478
cs=0x1a2;eip=0x00047b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 563 push    [bp+var_A] ;~ 01A2:047B
cs=0x1a2;eip=0x00047e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 564 push    [bp+var_4] ;~ 01A2:047E
cs=0x1a2;eip=0x000481; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 565 push    [bp+var_6] ;~ 01A2:0481
loc_10484:
	// 4409 
cs=0x1a2;eip=0x000484; 	R(CALLF(sub_29d98,0));	// 568 call    sub_29D98 ;~ 01A2:0484
cs=0x1a2;eip=0x000489; 	X(PUSH(dx));	// 569 push    dx ;~ 01A2:0489
cs=0x1a2;eip=0x00048a; 	X(PUSH(ax));	// 570 push    ax ;~ 01A2:048A
cs=0x1a2;eip=0x00048b; 	R(CALLF(sub_29e14,0));	// 571 call    sub_29E14 ;~ 01A2:048B
cs=0x1a2;eip=0x000490; 	X(MOV(word_2bec0, ax));	// 572 mov     word_2BEC0, ax ;~ 01A2:0490
cs=0x1a2;eip=0x000493; 	X(MOV(word_2bec2, dx));	// 573 mov     word_2BEC2, dx ;~ 01A2:0493
cs=0x1a2;eip=0x000497; 	T(CMP(dx, 0x0F));	// 574 cmp     dx, 0Fh ;~ 01A2:0497
cs=0x1a2;eip=0x00049a; 	R(JC(loc_104af));	// 575 jb      short loc_104AF ;~ 01A2:049A
cs=0x1a2;eip=0x00049c; 	R(JA(loc_104a3));	// 576 ja      short loc_104A3 ;~ 01A2:049C
cs=0x1a2;eip=0x00049e; 	T(CMP(ax, 0x4240));	// 577 cmp     ax, 4240h ;~ 01A2:049E
cs=0x1a2;eip=0x0004a1; 	R(JBE(loc_104af));	// 578 jbe     short loc_104AF ;~ 01A2:04A1
loc_104a3:
	// 4410 
cs=0x1a2;eip=0x0004a3; 	X(MOV(word_2bec0, 0x4240));	// 581 mov     word_2BEC0, 4240h ;~ 01A2:04A3
cs=0x1a2;eip=0x0004a9; 	X(MOV(word_2bec2, 0x0F));	// 582 mov     word_2BEC2, 0Fh ;~ 01A2:04A9
loc_104af:
	// 4411 
cs=0x1a2;eip=0x0004af; 	T(MOV(al, *(db*)(((db*)&word_2bec0))));	// 586 mov     al, byte ptr word_2BEC0 ;~ 01A2:04AF
cs=0x1a2;eip=0x0004b2; 	X(MOV(byte_2c80a, al));	// 587 mov     byte_2C80A, al ;~ 01A2:04B2
cs=0x1a2;eip=0x0004b5; 	T(MOV(ax, word_2bec0));	// 588 mov     ax, word_2BEC0 ;~ 01A2:04B5
cs=0x1a2;eip=0x0004b8; 	T(MOV(dx, word_2bec2));	// 589 mov     dx, word_2BEC2 ;~ 01A2:04B8
cs=0x1a2;eip=0x0004bc; 	T(MOV(al, ah));	// 590 mov     al, ah ;~ 01A2:04BC
cs=0x1a2;eip=0x0004be; 	T(MOV(ah, dl));	// 591 mov     ah, dl ;~ 01A2:04BE
cs=0x1a2;eip=0x0004c0; 	T(MOV(dl, dh));	// 592 mov     dl, dh ;~ 01A2:04C0
cs=0x1a2;eip=0x0004c2; 	T(SUB(dh, dh));	// 593 sub     dh, dh ;~ 01A2:04C2
cs=0x1a2;eip=0x0004c4; 	X(MOV(byte_2c80b, al));	// 594 mov     byte_2C80B, al ;~ 01A2:04C4
cs=0x1a2;eip=0x0004c7; 	T(MOV(al, *(db*)(((db*)&word_2bec2))));	// 595 mov     al, byte ptr word_2BEC2 ;~ 01A2:04C7
cs=0x1a2;eip=0x0004ca; 	X(MOV(byte_2c80c, al));	// 596 mov     byte_2C80C, al ;~ 01A2:04CA
cs=0x1a2;eip=0x0004cd; 	T(MOV(ax, word_2bec0));	// 597 mov     ax, word_2BEC0 ;~ 01A2:04CD
cs=0x1a2;eip=0x0004d0; 	T(MOV(dx, word_2bec2));	// 598 mov     dx, word_2BEC2 ;~ 01A2:04D0
cs=0x1a2;eip=0x0004d4; 	T(MOV(cl, 0x18));	// 599 mov     cl, 18h ;~ 01A2:04D4
loc_104d6:
	// 4412 
cs=0x1a2;eip=0x0004d6; 	T(SHR(dx, 1));	// 602 shr     dx, 1 ;~ 01A2:04D6
cs=0x1a2;eip=0x0004d8; 	T(RCR(ax, 1));	// 603 rcr     ax, 1 ;~ 01A2:04D8
cs=0x1a2;eip=0x0004da; 	T(DEC(cl));	// 604 dec     cl ;~ 01A2:04DA
cs=0x1a2;eip=0x0004dc; 	R(JNZ(loc_104d6));	// 605 jnz     short loc_104D6 ;~ 01A2:04DC
cs=0x1a2;eip=0x0004de; 	X(MOV(byte_2c80d, al));	// 606 mov     byte_2C80D, al ;~ 01A2:04DE
cs=0x1a2;eip=0x0004e1; 	X(MOV(word_2bec6, 6));	// 607 mov     word_2BEC6, 6 ;~ 01A2:04E1
cs=0x1a2;eip=0x0004e7; 	T(MOV(ax, word_2bec0));	// 608 mov     ax, word_2BEC0 ;~ 01A2:04E7
cs=0x1a2;eip=0x0004ea; 	T(MOV(dx, word_2bec2));	// 609 mov     dx, word_2BEC2 ;~ 01A2:04EA
cs=0x1a2;eip=0x0004ee; 	X(ADD(word_2c81a, ax));	// 610 add     word_2C81A, ax ;~ 01A2:04EE
cs=0x1a2;eip=0x0004f2; 	X(ADC(word_2c81c, dx));	// 611 adc     word_2C81C, dx ;~ 01A2:04F2
cs=0x1a2;eip=0x0004f6; 	T(MOV(al, byte_3754a));	// 612 mov     al, byte_3754A ;~ 01A2:04F6
cs=0x1a2;eip=0x0004f9; 	X(ADD(byte_2c812, al));	// 613 add     byte_2C812, al ;~ 01A2:04F9
cs=0x1a2;eip=0x0004fd; 	T(CMP(byte_2c812, 9));	// 614 cmp     byte_2C812, 9 ;~ 01A2:04FD
cs=0x1a2;eip=0x000502; 	R(JBE(loc_1050d));	// 615 jbe     short loc_1050D ;~ 01A2:0502
cs=0x1a2;eip=0x000504; 	X(SUB(byte_2c812, 0x0A));	// 616 sub     byte_2C812, 0Ah ;~ 01A2:0504
cs=0x1a2;eip=0x000509; 	X(INC(byte_2c811));	// 617 inc     byte_2C811 ;~ 01A2:0509
loc_1050d:
	// 4413 
cs=0x1a2;eip=0x00050d; 	T(MOV(al, byte_3754b));	// 620 mov     al, byte_3754B ;~ 01A2:050D
cs=0x1a2;eip=0x000510; 	X(ADD(byte_2c811, al));	// 621 add     byte_2C811, al ;~ 01A2:0510
cs=0x1a2;eip=0x000514; 	T(CMP(byte_2c811, 0x3B));	// 622 cmp     byte_2C811, 3Bh ; ';' ;~ 01A2:0514
cs=0x1a2;eip=0x000519; 	R(JBE(loc_1052b));	// 623 jbe     short loc_1052B ;~ 01A2:0519
cs=0x1a2;eip=0x00051b; 	X(SUB(byte_2c811, 0x3C));	// 624 sub     byte_2C811, 3Ch ; '<' ;~ 01A2:051B
cs=0x1a2;eip=0x000520; 	T(CMP(byte_2c810, 0x0FF));	// 625 cmp     byte_2C810, 0FFh ;~ 01A2:0520
cs=0x1a2;eip=0x000525; 	R(JZ(loc_1052b));	// 626 jz      short loc_1052B ;~ 01A2:0525
cs=0x1a2;eip=0x000527; 	X(INC(byte_2c810));	// 627 inc     byte_2C810 ;~ 01A2:0527
loc_1052b:
	// 4414 
cs=0x1a2;eip=0x00052b; 	T(MOV(al, byte_2c810));	// 631 mov     al, byte_2C810 ;~ 01A2:052B
cs=0x1a2;eip=0x00052e; 	T(SUB(ah, ah));	// 632 sub     ah, ah ;~ 01A2:052E
cs=0x1a2;eip=0x000530; 	T(MOV(cl, byte_3754c));	// 633 mov     cl, byte_3754C ;~ 01A2:0530
cs=0x1a2;eip=0x000534; 	T(SUB(ch, ch));	// 634 sub     ch, ch ;~ 01A2:0534
cs=0x1a2;eip=0x000536; 	T(ADD(ax, cx));	// 635 add     ax, cx ;~ 01A2:0536
cs=0x1a2;eip=0x000538; 	T(CMP(ax, 0x100));	// 636 cmp     ax, 100h ;~ 01A2:0538
cs=0x1a2;eip=0x00053b; 	R(JNC(loc_10546));	// 637 jnb     short loc_10546 ;~ 01A2:053B
cs=0x1a2;eip=0x00053d; 	T(MOV(al, cl));	// 638 mov     al, cl ;~ 01A2:053D
cs=0x1a2;eip=0x00053f; 	X(ADD(byte_2c810, al));	// 639 add     byte_2C810, al ;~ 01A2:053F
cs=0x1a2;eip=0x000543; 	R(JMP(loc_1054b));	// 640 jmp     short loc_1054B ;~ 01A2:0543
loc_10546:
	// 4415 
cs=0x1a2;eip=0x000546; 	X(MOV(byte_2c810, 0x0FF));	// 645 mov     byte_2C810, 0FFh ;~ 01A2:0546
loc_1054b:
	// 4416 
cs=0x1a2;eip=0x00054b; 	T(MOV(al, byte_2c80f));	// 648 mov     al, byte_2C80F ;~ 01A2:054B
cs=0x1a2;eip=0x00054e; 	X(ADD(byte_2c819, al));	// 649 add     byte_2C819, al ;~ 01A2:054E
cs=0x1a2;eip=0x000552; 	T(CMP(byte_2c819, 0x3B));	// 650 cmp     byte_2C819, 3Bh ; ';' ;~ 01A2:0552
cs=0x1a2;eip=0x000557; 	R(JBE(loc_10562));	// 651 jbe     short loc_10562 ;~ 01A2:0557
cs=0x1a2;eip=0x000559; 	X(SUB(byte_2c819, 0x3C));	// 652 sub     byte_2C819, 3Ch ; '<' ;~ 01A2:0559
cs=0x1a2;eip=0x00055e; 	X(INC(byte_2c818));	// 653 inc     byte_2C818 ;~ 01A2:055E
loc_10562:
	// 4417 
cs=0x1a2;eip=0x000562; 	T(MOV(al, byte_2c80e));	// 656 mov     al, byte_2C80E ;~ 01A2:0562
cs=0x1a2;eip=0x000565; 	X(ADD(byte_2c818, al));	// 657 add     byte_2C818, al ;~ 01A2:0565
cs=0x1a2;eip=0x000569; 	T(MOV(ax, 0x3C));	// 658 mov     ax, 3Ch ; '<' ;~ 01A2:0569
cs=0x1a2;eip=0x00056c; 	T(CWD);	// 659 cwd ;~ 01A2:056C
cs=0x1a2;eip=0x00056d; 	X(PUSH(dx));	// 660 push    dx ;~ 01A2:056D
cs=0x1a2;eip=0x00056e; 	X(PUSH(ax));	// 661 push    ax ;~ 01A2:056E
cs=0x1a2;eip=0x00056f; 	T(MOV(al, byte_2c818));	// 662 mov     al, byte_2C818 ;~ 01A2:056F
cs=0x1a2;eip=0x000572; 	T(SUB(ah, ah));	// 663 sub     ah, ah ;~ 01A2:0572
cs=0x1a2;eip=0x000574; 	T(SUB(cx, cx));	// 664 sub     cx, cx ;~ 01A2:0574
cs=0x1a2;eip=0x000576; 	X(PUSH(cx));	// 665 push    cx ;~ 01A2:0576
cs=0x1a2;eip=0x000577; 	X(PUSH(ax));	// 666 push    ax ;~ 01A2:0577
cs=0x1a2;eip=0x000578; 	R(CALLF(sub_29d98,0));	// 667 call    sub_29D98 ;~ 01A2:0578
cs=0x1a2;eip=0x00057d; 	T(MOV(cl, byte_2c819));	// 668 mov     cl, byte_2C819 ;~ 01A2:057D
cs=0x1a2;eip=0x000581; 	T(SUB(ch, ch));	// 669 sub     ch, ch ;~ 01A2:0581
cs=0x1a2;eip=0x000583; 	T(ADD(ax, cx));	// 670 add     ax, cx ;~ 01A2:0583
cs=0x1a2;eip=0x000585; 	T(ADC(dx, 0));	// 671 adc     dx, 0 ;~ 01A2:0585
cs=0x1a2;eip=0x000588; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 672 mov     [bp+var_6], ax ;~ 01A2:0588
cs=0x1a2;eip=0x00058b; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 673 mov     [bp+var_4], dx ;~ 01A2:058B
cs=0x1a2;eip=0x00058e; 	T(MOV(ax, 0x1770));	// 674 mov     ax, 1770h ;~ 01A2:058E
cs=0x1a2;eip=0x000591; 	T(CWD);	// 675 cwd ;~ 01A2:0591
cs=0x1a2;eip=0x000592; 	X(PUSH(dx));	// 676 push    dx ;~ 01A2:0592
cs=0x1a2;eip=0x000593; 	X(PUSH(ax));	// 677 push    ax ;~ 01A2:0593
cs=0x1a2;eip=0x000594; 	T(MOV(al, byte_2c810));	// 678 mov     al, byte_2C810 ;~ 01A2:0594
cs=0x1a2;eip=0x000597; 	T(SUB(ah, ah));	// 679 sub     ah, ah ;~ 01A2:0597
cs=0x1a2;eip=0x000599; 	T(SUB(cx, cx));	// 680 sub     cx, cx ;~ 01A2:0599
cs=0x1a2;eip=0x00059b; 	X(PUSH(cx));	// 681 push    cx ;~ 01A2:059B
cs=0x1a2;eip=0x00059c; 	X(PUSH(ax));	// 682 push    ax ;~ 01A2:059C
cs=0x1a2;eip=0x00059d; 	R(CALLF(sub_29d98,0));	// 683 call    sub_29D98 ;~ 01A2:059D
cs=0x1a2;eip=0x0005a2; 	T(MOV(cx, 0x64));	// 684 mov     cx, 64h ; 'd' ;~ 01A2:05A2
cs=0x1a2;eip=0x0005a5; 	T(SUB(bx, bx));	// 685 sub     bx, bx ;~ 01A2:05A5
cs=0x1a2;eip=0x0005a7; 	X(PUSH(bx));	// 686 push    bx ;~ 01A2:05A7
cs=0x1a2;eip=0x0005a8; 	X(PUSH(cx));	// 687 push    cx ;~ 01A2:05A8
cs=0x1a2;eip=0x0005a9; 	T(MOV(cl, byte_2c811));	// 688 mov     cl, byte_2C811 ;~ 01A2:05A9
cs=0x1a2;eip=0x0005ad; 	T(SUB(ch, ch));	// 689 sub     ch, ch ;~ 01A2:05AD
cs=0x1a2;eip=0x0005af; 	X(PUSH(bx));	// 690 push    bx ;~ 01A2:05AF
cs=0x1a2;eip=0x0005b0; 	X(PUSH(cx));	// 691 push    cx ;~ 01A2:05B0
cs=0x1a2;eip=0x0005b1; 	T(MOV(si, ax));	// 692 mov     si, ax ;~ 01A2:05B1
cs=0x1a2;eip=0x0005b3; 	T(MOV(di, dx));	// 693 mov     di, dx ;~ 01A2:05B3
cs=0x1a2;eip=0x0005b5; 	R(CALLF(sub_29d98,0));	// 694 call    sub_29D98 ;~ 01A2:05B5
cs=0x1a2;eip=0x0005ba; 	T(MOV(cl, byte_2c812));	// 695 mov     cl, byte_2C812 ;~ 01A2:05BA
cs=0x1a2;eip=0x0005be; 	T(SUB(ch, ch));	// 696 sub     ch, ch ;~ 01A2:05BE
cs=0x1a2;eip=0x0005c0; 	T(SUB(bx, bx));	// 697 sub     bx, bx ;~ 01A2:05C0
cs=0x1a2;eip=0x0005c2; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 698 mov     [bp+var_12], ax ;~ 01A2:05C2
cs=0x1a2;eip=0x0005c5; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), dx));	// 699 mov     [bp+var_10], dx ;~ 01A2:05C5
cs=0x1a2;eip=0x0005c8; 	T(MOV(ax, cx));	// 700 mov     ax, cx ;~ 01A2:05C8
cs=0x1a2;eip=0x0005ca; 	T(MOV(dx, bx));	// 701 mov     dx, bx ;~ 01A2:05CA
cs=0x1a2;eip=0x0005cc; 	T(SHL(cx, 1));	// 702 shl     cx, 1 ;~ 01A2:05CC
cs=0x1a2;eip=0x0005ce; 	T(RCL(bx, 1));	// 703 rcl     bx, 1 ;~ 01A2:05CE
cs=0x1a2;eip=0x0005d0; 	T(SHL(cx, 1));	// 704 shl     cx, 1 ;~ 01A2:05D0
cs=0x1a2;eip=0x0005d2; 	T(RCL(bx, 1));	// 705 rcl     bx, 1 ;~ 01A2:05D2
cs=0x1a2;eip=0x0005d4; 	T(ADD(cx, ax));	// 706 add     cx, ax ;~ 01A2:05D4
cs=0x1a2;eip=0x0005d6; 	T(ADC(bx, dx));	// 707 adc     bx, dx ;~ 01A2:05D6
cs=0x1a2;eip=0x0005d8; 	T(SHL(cx, 1));	// 708 shl     cx, 1 ;~ 01A2:05D8
cs=0x1a2;eip=0x0005da; 	T(RCL(bx, 1));	// 709 rcl     bx, 1 ;~ 01A2:05DA
cs=0x1a2;eip=0x0005dc; 	T(ADD(cx, *(dw*)(raddr(ss,bp+var_12))));	// 710 add     cx, [bp+var_12] ;~ 01A2:05DC
cs=0x1a2;eip=0x0005df; 	T(ADC(bx, *(dw*)(raddr(ss,bp+var_10))));	// 711 adc     bx, [bp+var_10] ;~ 01A2:05DF
cs=0x1a2;eip=0x0005e2; 	T(ADD(cx, si));	// 712 add     cx, si ;~ 01A2:05E2
cs=0x1a2;eip=0x0005e4; 	T(ADC(bx, di));	// 713 adc     bx, di ;~ 01A2:05E4
cs=0x1a2;eip=0x0005e6; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), cx));	// 714 mov     [bp+var_A], cx ;~ 01A2:05E6
cs=0x1a2;eip=0x0005e9; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), bx));	// 715 mov     [bp+var_8], bx ;~ 01A2:05E9
cs=0x1a2;eip=0x0005ec; 	T(MOV(ax, cx));	// 716 mov     ax, cx ;~ 01A2:05EC
cs=0x1a2;eip=0x0005ee; 	T(OR(ax, bx));	// 717 or      ax, bx ;~ 01A2:05EE
cs=0x1a2;eip=0x0005f0; 	R(JZ(loc_10612));	// 718 jz      short loc_10612 ;~ 01A2:05F0
cs=0x1a2;eip=0x0005f2; 	X(PUSH(bx));	// 719 push    bx ;~ 01A2:05F2
cs=0x1a2;eip=0x0005f3; 	X(PUSH(cx));	// 720 push    cx ;~ 01A2:05F3
cs=0x1a2;eip=0x0005f4; 	T(MOV(ax, 0x1770));	// 721 mov     ax, 1770h ;~ 01A2:05F4
cs=0x1a2;eip=0x0005f7; 	T(CWD);	// 722 cwd ;~ 01A2:05F7
cs=0x1a2;eip=0x0005f8; 	X(PUSH(dx));	// 723 push    dx ;~ 01A2:05F8
cs=0x1a2;eip=0x0005f9; 	X(PUSH(ax));	// 724 push    ax ;~ 01A2:05F9
cs=0x1a2;eip=0x0005fa; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 725 push    [bp+var_4] ;~ 01A2:05FA
cs=0x1a2;eip=0x0005fd; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 726 push    [bp+var_6] ;~ 01A2:05FD
cs=0x1a2;eip=0x000600; 	R(CALLF(sub_29d98,0));	// 727 call    sub_29D98 ;~ 01A2:0600
cs=0x1a2;eip=0x000605; 	X(PUSH(dx));	// 728 push    dx ;~ 01A2:0605
cs=0x1a2;eip=0x000606; 	X(PUSH(ax));	// 729 push    ax ;~ 01A2:0606
cs=0x1a2;eip=0x000607; 	R(CALLF(sub_29cfc,0));	// 730 call    sub_29CFC ;~ 01A2:0607
cs=0x1a2;eip=0x00060c; 	X(MOV(byte_2c813, al));	// 731 mov     byte_2C813, al ;~ 01A2:060C
cs=0x1a2;eip=0x00060f; 	R(JMP(loc_10617));	// 732 jmp     short loc_10617 ;~ 01A2:060F
loc_10612:
	// 4418 
cs=0x1a2;eip=0x000612; 	X(MOV(byte_2c813, 0));	// 737 mov     byte_2C813, 0 ;~ 01A2:0612
loc_10617:
	// 4419 
cs=0x1a2;eip=0x000617; 	T(MOV(al, *(db*)(((db*)&word_2c81a))));	// 740 mov     al, byte ptr word_2C81A ;~ 01A2:0617
cs=0x1a2;eip=0x00061a; 	X(MOV(byte_2c814, al));	// 741 mov     byte_2C814, al ;~ 01A2:061A
cs=0x1a2;eip=0x00061d; 	T(MOV(ax, word_2c81a));	// 742 mov     ax, word_2C81A ;~ 01A2:061D
cs=0x1a2;eip=0x000620; 	T(MOV(dx, word_2c81c));	// 743 mov     dx, word_2C81C ;~ 01A2:0620
cs=0x1a2;eip=0x000624; 	T(MOV(al, ah));	// 744 mov     al, ah ;~ 01A2:0624
cs=0x1a2;eip=0x000626; 	T(MOV(ah, dl));	// 745 mov     ah, dl ;~ 01A2:0626
cs=0x1a2;eip=0x000628; 	T(MOV(dl, dh));	// 746 mov     dl, dh ;~ 01A2:0628
cs=0x1a2;eip=0x00062a; 	T(SUB(dh, dh));	// 747 sub     dh, dh ;~ 01A2:062A
cs=0x1a2;eip=0x00062c; 	X(MOV(byte_2c815, al));	// 748 mov     byte_2C815, al ;~ 01A2:062C
cs=0x1a2;eip=0x00062f; 	T(MOV(al, *(db*)(((db*)&word_2c81c))));	// 749 mov     al, byte ptr word_2C81C ;~ 01A2:062F
cs=0x1a2;eip=0x000632; 	X(MOV(byte_2c816, al));	// 750 mov     byte_2C816, al ;~ 01A2:0632
cs=0x1a2;eip=0x000635; 	T(MOV(ax, word_2c81a));	// 751 mov     ax, word_2C81A ;~ 01A2:0635
cs=0x1a2;eip=0x000638; 	T(MOV(dx, word_2c81c));	// 752 mov     dx, word_2C81C ;~ 01A2:0638
cs=0x1a2;eip=0x00063c; 	T(MOV(cl, 0x18));	// 753 mov     cl, 18h ;~ 01A2:063C
loc_1063e:
	// 4420 
cs=0x1a2;eip=0x00063e; 	T(SHR(dx, 1));	// 756 shr     dx, 1 ;~ 01A2:063E
cs=0x1a2;eip=0x000640; 	T(RCR(ax, 1));	// 757 rcr     ax, 1 ;~ 01A2:0640
cs=0x1a2;eip=0x000642; 	T(DEC(cl));	// 758 dec     cl ;~ 01A2:0642
cs=0x1a2;eip=0x000644; 	R(JNZ(loc_1063e));	// 759 jnz     short loc_1063E ;~ 01A2:0644
cs=0x1a2;eip=0x000646; 	X(MOV(byte_2c817, al));	// 760 mov     byte_2C817, al ;~ 01A2:0646
cs=0x1a2;eip=0x000649; 	T(CMP(byte_2bec8, 0));	// 761 cmp     byte_2BEC8, 0 ;~ 01A2:0649
cs=0x1a2;eip=0x00064e; 	R(JZ(loc_10667));	// 762 jz      short loc_10667 ;~ 01A2:064E
cs=0x1a2;eip=0x000650; 	T(MOV(al, byte_2c94b));	// 763 mov     al, byte_2C94B ;~ 01A2:0650
cs=0x1a2;eip=0x000653; 	T(CMP(byte_2c94a, al));	// 764 cmp     byte_2C94A, al ;~ 01A2:0653
cs=0x1a2;eip=0x000657; 	R(JZ(loc_10667));	// 765 jz      short loc_10667 ;~ 01A2:0657
cs=0x1a2;eip=0x000659; 	T(MOV(al, byte_3750c));	// 766 mov     al, byte_3750C ;~ 01A2:0659
cs=0x1a2;eip=0x00065c; 	T(SUB(ah, ah));	// 767 sub     ah, ah ;~ 01A2:065C
cs=0x1a2;eip=0x00065e; 	X(PUSH(ax));	// 768 push    ax ;~ 01A2:065E
cs=0x1a2;eip=0x00065f; 	R(CALLF(sub_13c62,0));	// 769 call    sub_13C62 ;~ 01A2:065F
cs=0x1a2;eip=0x000664; 	T(ADD(sp, 2));	// 770 add     sp, 2 ;~ 01A2:0664
loc_10667:
	// 4421 
cs=0x1a2;eip=0x000667; 	T(SUB(ax, ax));	// 774 sub     ax, ax ;~ 01A2:0667
cs=0x1a2;eip=0x000669; 	X(MOV(word_2beda, ax));	// 775 mov     word_2BEDA, ax ;~ 01A2:0669
cs=0x1a2;eip=0x00066c; 	X(PUSH(ax));	// 776 push    ax ;~ 01A2:066C
cs=0x1a2;eip=0x00066d; 	R(CALLF(sub_2714e,0));	// 777 call    far ptr sub_2714E ;~ 01A2:066D
cs=0x1a2;eip=0x000672; 	T(ADD(sp, 2));	// 778 add     sp, 2 ;~ 01A2:0672
cs=0x1a2;eip=0x000675; 	T(SUB(ax, ax));	// 779 sub     ax, ax ;~ 01A2:0675
cs=0x1a2;eip=0x000677; 	X(PUSH(ax));	// 780 push    ax ;~ 01A2:0677
cs=0x1a2;eip=0x000678; 	R(CALLF(sub_27031,0));	// 781 call    far ptr sub_27031 ;~ 01A2:0678
cs=0x1a2;eip=0x00067d; 	T(ADD(sp, 2));	// 782 add     sp, 2 ;~ 01A2:067D
cs=0x1a2;eip=0x000680; 	T(MOV(ax, 0x0C7));	// 783 mov     ax, 0C7h ; 'Ç' ;~ 01A2:0680
cs=0x1a2;eip=0x000683; 	X(PUSH(ax));	// 784 push    ax ;~ 01A2:0683
cs=0x1a2;eip=0x000684; 	T(SUB(ax, ax));	// 785 sub     ax, ax ;~ 01A2:0684
cs=0x1a2;eip=0x000686; 	X(PUSH(ax));	// 786 push    ax ;~ 01A2:0686
cs=0x1a2;eip=0x000687; 	T(MOV(ax, 0x13F));	// 787 mov     ax, 13Fh ;~ 01A2:0687
cs=0x1a2;eip=0x00068a; 	X(PUSH(ax));	// 788 push    ax ;~ 01A2:068A
cs=0x1a2;eip=0x00068b; 	T(SUB(ax, ax));	// 789 sub     ax, ax ;~ 01A2:068B
cs=0x1a2;eip=0x00068d; 	X(PUSH(ax));	// 790 push    ax ;~ 01A2:068D
cs=0x1a2;eip=0x00068e; 	R(CALLF(sub_2785b,0));	// 791 call    far ptr sub_2785B ;~ 01A2:068E
cs=0x1a2;eip=0x000693; 	T(ADD(sp, 8));	// 792 add     sp, 8 ;~ 01A2:0693
cs=0x1a2;eip=0x000696; 	R(CALLF(sub_13b88,0));	// 793 call    sub_13B88 ;~ 01A2:0696
cs=0x1a2;eip=0x00069b; 	T(CMP(byte_2bec8, 0));	// 794 cmp     byte_2BEC8, 0 ;~ 01A2:069B
cs=0x1a2;eip=0x0006a0; 	R(JZ(loc_106ab));	// 795 jz      short loc_106AB ;~ 01A2:06A0
cs=0x1a2;eip=0x0006a2; 	T(MOV(al, byte_2c94b));	// 796 mov     al, byte_2C94B ;~ 01A2:06A2
cs=0x1a2;eip=0x0006a5; 	T(CMP(byte_2c94a, al));	// 797 cmp     byte_2C94A, al ;~ 01A2:06A5
cs=0x1a2;eip=0x0006a9; 	R(JNZ(loc_106b6));	// 798 jnz     short loc_106B6 ;~ 01A2:06A9
loc_106ab:
	// 4422 
cs=0x1a2;eip=0x0006ab; 	T(SUB(ax, ax));	// 801 sub     ax, ax ;~ 01A2:06AB
cs=0x1a2;eip=0x0006ad; 	X(MOV(word_2c81c, ax));	// 802 mov     word_2C81C, ax ;~ 01A2:06AD
cs=0x1a2;eip=0x0006b0; 	X(MOV(word_2c81a, ax));	// 803 mov     word_2C81A, ax ;~ 01A2:06B0
cs=0x1a2;eip=0x0006b3; 	R(JMP(loc_107c1));	// 804 jmp     loc_107C1 ;~ 01A2:06B3
loc_106b6:
	// 4423 
cs=0x1a2;eip=0x0006b6; 	T(CMP(byte_2c81e, 0));	// 808 cmp     byte_2C81E, 0 ;~ 01A2:06B6
cs=0x1a2;eip=0x0006bb; 	R(JZ(loc_106ca));	// 809 jz      short loc_106CA ;~ 01A2:06BB
cs=0x1a2;eip=0x0006bd; 	T(MOV(al, byte_2c94a));	// 810 mov     al, byte_2C94A ;~ 01A2:06BD
cs=0x1a2;eip=0x0006c0; 	T(SUB(ah, ah));	// 811 sub     ah, ah ;~ 01A2:06C0
cs=0x1a2;eip=0x0006c2; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 812 mov     [bp+var_E], ax ;~ 01A2:06C2
cs=0x1a2;eip=0x0006c5; 	X(ADD(byte_2c81e, 2));	// 813 add     byte_2C81E, 2 ;~ 01A2:06C5
loc_106ca:
	// 4424 
cs=0x1a2;eip=0x0006ca; 	R(CALLF(sub_15ece,0));	// 816 call    sub_15ECE ;~ 01A2:06CA
cs=0x1a2;eip=0x0006cf; 	R(CALLF(sub_16894,0));	// 817 call    sub_16894 ;~ 01A2:06CF
cs=0x1a2;eip=0x0006d4; 	R(CALLF(sub_11f7e,0));	// 818 call    sub_11F7E ;~ 01A2:06D4
cs=0x1a2;eip=0x0006d9; 	T(CMP(byte_2c948, 1));	// 819 cmp     byte_2C948, 1 ;~ 01A2:06D9
cs=0x1a2;eip=0x0006de; 	R(JNZ(loc_106e7));	// 820 jnz     short loc_106E7 ;~ 01A2:06DE
cs=0x1a2;eip=0x0006e0; 	T(CMP(byte_2c949, 0));	// 821 cmp     byte_2C949, 0 ;~ 01A2:06E0
cs=0x1a2;eip=0x0006e5; 	R(JZ(loc_106ec));	// 822 jz      short loc_106EC ;~ 01A2:06E5
loc_106e7:
	// 4425 
cs=0x1a2;eip=0x0006e7; 	R(CALLF(sub_1600e,0));	// 825 call    sub_1600E ;~ 01A2:06E7
loc_106ec:
	// 4426 
cs=0x1a2;eip=0x0006ec; 	X(INC(byte_2c805));	// 829 inc     byte_2C805 ;~ 01A2:06EC
loc_106f0:
	// 4427 
cs=0x1a2;eip=0x0006f0; 	T(MOV(al, byte_2c948));	// 832 mov     al, byte_2C948 ;~ 01A2:06F0
cs=0x1a2;eip=0x0006f3; 	T(CMP(byte_2c805, al));	// 833 cmp     byte_2C805, al ;~ 01A2:06F3
cs=0x1a2;eip=0x0006f7; 	R(JA(loc_10762));	// 834 ja      short loc_10762 ;~ 01A2:06F7
cs=0x1a2;eip=0x0006f9; 	R(CALLF(sub_11f4e,0));	// 835 call    sub_11F4E ;~ 01A2:06F9
cs=0x1a2;eip=0x0006fe; 	T(CMP(byte_2c81e, 0));	// 836 cmp     byte_2C81E, 0 ;~ 01A2:06FE
cs=0x1a2;eip=0x000703; 	R(JZ(loc_106ec));	// 837 jz      short loc_106EC ;~ 01A2:0703
cs=0x1a2;eip=0x000705; 	T(SUB(ax, ax));	// 838 sub     ax, ax ;~ 01A2:0705
cs=0x1a2;eip=0x000707; 	X(MOV(word_2bec2, ax));	// 839 mov     word_2BEC2, ax ;~ 01A2:0707
cs=0x1a2;eip=0x00070a; 	X(MOV(word_2bec0, ax));	// 840 mov     word_2BEC0, ax ;~ 01A2:070A
cs=0x1a2;eip=0x00070d; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 841 mov     [bp+var_C], ax ;~ 01A2:070D
loc_10710:
	// 4428 
cs=0x1a2;eip=0x000710; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_c))));	// 844 mov     bx, [bp+var_C] ;~ 01A2:0710
cs=0x1a2;eip=0x000713; 	X(MOV(*(raddr(ds,bx+0x9C6)), 0));	// 845 mov     byte ptr [bx+9C6h], 0 ;~ 01A2:0713
cs=0x1a2;eip=0x000718; 	X(INC(*(dw*)(raddr(ss,bp+var_c))));	// 846 inc     [bp+var_C] ;~ 01A2:0718
cs=0x1a2;eip=0x00071b; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), 0x0A));	// 847 cmp     [bp+var_C], 0Ah ;~ 01A2:071B
cs=0x1a2;eip=0x00071f; 	R(JL(loc_10710));	// 848 jl      short loc_10710 ;~ 01A2:071F
cs=0x1a2;eip=0x000721; 	X(MOV(word_2bec6, 5));	// 849 mov     word_2BEC6, 5 ;~ 01A2:0721
cs=0x1a2;eip=0x000727; 	T(SUB(al, al));	// 850 sub     al, al ;~ 01A2:0727
cs=0x1a2;eip=0x000729; 	X(MOV(byte_2c8b5, al));	// 851 mov     byte_2C8B5, al ;~ 01A2:0729
cs=0x1a2;eip=0x00072c; 	X(MOV(byte_2c8b6, al));	// 852 mov     byte_2C8B6, al ;~ 01A2:072C
cs=0x1a2;eip=0x00072f; 	R(CALLF(sub_1792c,0));	// 853 call    sub_1792C ;~ 01A2:072F
cs=0x1a2;eip=0x000734; 	R(CALLF(sub_17530,0));	// 854 call    sub_17530 ;~ 01A2:0734
cs=0x1a2;eip=0x000739; 	T(MOV(al, byte_3754c));	// 855 mov     al, byte_3754C ;~ 01A2:0739
cs=0x1a2;eip=0x00073c; 	X(MOV(byte_2c806, al));	// 856 mov     byte_2C806, al ;~ 01A2:073C
cs=0x1a2;eip=0x00073f; 	T(MOV(al, byte_3754b));	// 857 mov     al, byte_3754B ;~ 01A2:073F
cs=0x1a2;eip=0x000742; 	X(MOV(byte_2c807, al));	// 858 mov     byte_2C807, al ;~ 01A2:0742
cs=0x1a2;eip=0x000745; 	T(MOV(al, byte_3754a));	// 859 mov     al, byte_3754A ;~ 01A2:0745
cs=0x1a2;eip=0x000748; 	X(MOV(byte_2c808, al));	// 860 mov     byte_2C808, al ;~ 01A2:0748
cs=0x1a2;eip=0x00074b; 	T(CMP(byte_352f8, 0));	// 861 cmp     byte_352F8, 0 ;~ 01A2:074B
cs=0x1a2;eip=0x000750; 	R(JNZ(loc_10755));	// 862 jnz     short loc_10755 ;~ 01A2:0750
cs=0x1a2;eip=0x000752; 	R(JMP(loc_102f6));	// 863 jmp     loc_102F6 ;~ 01A2:0752
loc_10755:
	// 4429 
cs=0x1a2;eip=0x000755; 	T(MOV(al, byte_3a39e));	// 867 mov     al, byte_3A39E ;~ 01A2:0755
cs=0x1a2;eip=0x000758; 	X(MOV(byte_2c80e, al));	// 868 mov     byte_2C80E, al ;~ 01A2:0758
cs=0x1a2;eip=0x00075b; 	T(MOV(al, byte_38ce8));	// 869 mov     al, byte_38CE8 ;~ 01A2:075B
cs=0x1a2;eip=0x00075e; 	R(JMP(loc_1035d));	// 870 jmp     loc_1035D ;~ 01A2:075E
loc_10762:
	// 4430 
cs=0x1a2;eip=0x000762; 	X(INC(byte_2c94a));	// 875 inc     byte_2C94A ;~ 01A2:0762
loc_10766:
	// 4431 
cs=0x1a2;eip=0x000766; 	T(MOV(al, byte_2c94b));	// 878 mov     al, byte_2C94B ;~ 01A2:0766
cs=0x1a2;eip=0x000769; 	T(CMP(byte_2c94a, al));	// 879 cmp     byte_2C94A, al ;~ 01A2:0769
cs=0x1a2;eip=0x00076d; 	R(JNC(loc_10772));	// 880 jnb     short loc_10772 ;~ 01A2:076D
cs=0x1a2;eip=0x00076f; 	R(JMP(loc_102ba));	// 881 jmp     loc_102BA ;~ 01A2:076F
loc_10772:
	// 4432 
cs=0x1a2;eip=0x000772; 	X(MOV(word_2bec6, 3));	// 885 mov     word_2BEC6, 3 ;~ 01A2:0772
cs=0x1a2;eip=0x000778; 	T(SUB(ah, ah));	// 886 sub     ah, ah ;~ 01A2:0778
cs=0x1a2;eip=0x00077a; 	T(DEC(ax));	// 887 dec     ax ;~ 01A2:077A
cs=0x1a2;eip=0x00077b; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), ax));	// 888 cmp     [bp+var_E], ax ;~ 01A2:077B
cs=0x1a2;eip=0x00077e; 	R(JNZ(loc_107c1));	// 889 jnz     short loc_107C1 ;~ 01A2:077E
cs=0x1a2;eip=0x000780; 	T(CMP(byte_2bec8, 0));	// 890 cmp     byte_2BEC8, 0 ;~ 01A2:0780
cs=0x1a2;eip=0x000785; 	R(JZ(loc_107c1));	// 891 jz      short loc_107C1 ;~ 01A2:0785
cs=0x1a2;eip=0x000787; 	X(MOV(byte_2c805, 1));	// 892 mov     byte_2C805, 1 ;~ 01A2:0787
cs=0x1a2;eip=0x00078c; 	R(JMP(loc_107b8));	// 893 jmp     short loc_107B8 ;~ 01A2:078C
loc_1078e:
	// 4433 
cs=0x1a2;eip=0x00078e; 	R(CALLF(sub_11f4e,0));	// 897 call    sub_11F4E ;~ 01A2:078E
cs=0x1a2;eip=0x000793; 	T(CMP(byte_2c81e, 0));	// 898 cmp     byte_2C81E, 0 ;~ 01A2:0793
cs=0x1a2;eip=0x000798; 	R(JZ(loc_107b4));	// 899 jz      short loc_107B4 ;~ 01A2:0798
cs=0x1a2;eip=0x00079a; 	T(MOV(ax, word_2c81a));	// 900 mov     ax, word_2C81A ;~ 01A2:079A
cs=0x1a2;eip=0x00079d; 	T(MOV(dx, word_2c81c));	// 901 mov     dx, word_2C81C ;~ 01A2:079D
cs=0x1a2;eip=0x0007a1; 	T(CMP(word_2de1c, dx));	// 902 cmp     word_2DE1C, dx ;~ 01A2:07A1
cs=0x1a2;eip=0x0007a5; 	R(JA(loc_107b4));	// 903 ja      short loc_107B4 ;~ 01A2:07A5
cs=0x1a2;eip=0x0007a7; 	R(JC(loc_107af));	// 904 jb      short loc_107AF ;~ 01A2:07A7
cs=0x1a2;eip=0x0007a9; 	T(CMP(word_2de1a, ax));	// 905 cmp     word_2DE1A, ax ;~ 01A2:07A9
cs=0x1a2;eip=0x0007ad; 	R(JA(loc_107b4));	// 906 ja      short loc_107B4 ;~ 01A2:07AD
loc_107af:
	// 4434 
cs=0x1a2;eip=0x0007af; 	R(CALLF(sub_129d6,0));	// 909 call    sub_129D6 ;~ 01A2:07AF
loc_107b4:
	// 4435 
cs=0x1a2;eip=0x0007b4; 	X(INC(byte_2c805));	// 913 inc     byte_2C805 ;~ 01A2:07B4
loc_107b8:
	// 4436 
cs=0x1a2;eip=0x0007b8; 	T(MOV(al, byte_2c948));	// 916 mov     al, byte_2C948 ;~ 01A2:07B8
cs=0x1a2;eip=0x0007bb; 	T(CMP(byte_2c805, al));	// 917 cmp     byte_2C805, al ;~ 01A2:07BB
cs=0x1a2;eip=0x0007bf; 	R(JBE(loc_1078e));	// 918 jbe     short loc_1078E ;~ 01A2:07BF
loc_107c1:
	// 4437 
cs=0x1a2;eip=0x0007c1; 	T(CMP(byte_2bec8, 0));	// 922 cmp     byte_2BEC8, 0 ;~ 01A2:07C1
cs=0x1a2;eip=0x0007c6; 	R(JZ(loc_107d2));	// 923 jz      short loc_107D2 ;~ 01A2:07C6
cs=0x1a2;eip=0x0007c8; 	X(MOV(word_3a3ec, 0));	// 924 mov     word_3A3EC, 0 ;~ 01A2:07C8
cs=0x1a2;eip=0x0007ce; 	R(JMP(loc_10178));	// 925 jmp     loc_10178 ;~ 01A2:07CE
loc_107d2:
	// 4438 
cs=0x1a2;eip=0x0007d2; 	X(MOV(word_2bec6, 4));	// 930 mov     word_2BEC6, 4 ;~ 01A2:07D2
cs=0x1a2;eip=0x0007d8; 	T(SUB(ax, ax));	// 931 sub     ax, ax ;~ 01A2:07D8
cs=0x1a2;eip=0x0007da; 	X(MOV(word_2c81c, ax));	// 932 mov     word_2C81C, ax ;~ 01A2:07DA
cs=0x1a2;eip=0x0007dd; 	X(MOV(word_2c81a, ax));	// 933 mov     word_2C81A, ax ;~ 01A2:07DD
cs=0x1a2;eip=0x0007e0; 	R(JMP(loc_10178));	// 934 jmp     loc_10178 ;~ 01A2:07E0
sub_107e4:
	// 944 
cs=0x1a2;eip=0x0007e4; 	R(CALLF(sub_13dda,0));	// 946 call    sub_13DDA ;~ 01A2:07E4
ret_1a2_7e9:
	// 4439 
cs=0x1a2;eip=0x0007e9; 	X(PUSH(cs));	// 947 push    cs ;~ 01A2:07E9
cs=0x1a2;eip=0x0007ea; 	R(CALL(sub_11442,0));	// 948 call    near ptr sub_11442 ;~ 01A2:07EA
cs=0x1a2;eip=0x0007ed; 	T(MOV(ax, 1));	// 949 mov     ax, 1 ;~ 01A2:07ED
cs=0x1a2;eip=0x0007f0; 	X(PUSH(ax));	// 950 push    ax ;~ 01A2:07F0
cs=0x1a2;eip=0x0007f1; 	R(CALLF(sub_27364,0));	// 951 call    far ptr sub_27364 ;~ 01A2:07F1
cs=0x1a2;eip=0x0007f6; 	T(ADD(sp, 2));	// 952 add     sp, 2 ;~ 01A2:07F6
cs=0x1a2;eip=0x0007f9; 	X(PUSH(word_3a6a2));	// 953 push    word_3A6A2 ;~ 01A2:07F9
cs=0x1a2;eip=0x0007fd; 	R(CALLF(seg033_proc,m2c::kloc_2905b));	// 954 call    far ptr loc_2905B ;~ 01A2:07FD
cs=0x1a2;eip=0x000802; 	T(ADD(sp, 2));	// 955 add     sp, 2 ;~ 01A2:0802
cs=0x1a2;eip=0x000805; 	R(CALLF(sub_26fcb,0));	// 956 call    sub_26FCB ;~ 01A2:0805
cs=0x1a2;eip=0x00080a; 	R(CALLF(sub_1d03d,0));	// 957 call    sub_1D03D ;~ 01A2:080A
cs=0x1a2;eip=0x00080f; 	T(SUB(ax, ax));	// 958 sub     ax, ax ;~ 01A2:080F
cs=0x1a2;eip=0x000811; 	X(PUSH(ax));	// 959 push    ax ;~ 01A2:0811
cs=0x1a2;eip=0x000812; 	R(CALLF(sub_295a2,0));	// 960 call    far ptr sub_295A2 ;~ 01A2:0812
seg000_proc:
	// 964 
cs=0x1a2;eip=0x000817; 	T(ADD(sp, 2));	// 964 add     sp, 2 ;~ 01A2:0817
cs=0x1a2;eip=0x00081a; 	R(RETF(0));	// 965 retf ;~ 01A2:081A
ret_1a2_81c:
	// 4440 
cs=0x1a2;eip=0x00081c; 	X(PUSH(bp));	// 968 push    bp ;~ 01A2:081C
cs=0x1a2;eip=0x00081d; 	T(MOV(bp, sp));	// 969 mov     bp, sp ;~ 01A2:081D
cs=0x1a2;eip=0x00081f; 	T(SUB(sp, 2));	// 970 sub     sp, 2 ;~ 01A2:081F
cs=0x1a2;eip=0x000822; 	T(MOV(al, *(raddr(ss,bp+8))));	// 971 mov     al, [bp+8] ;~ 01A2:0822
cs=0x1a2;eip=0x000825; 	T(SUB(ah, ah));	// 972 sub     ah, ah ;~ 01A2:0825
cs=0x1a2;eip=0x000827; 	X(MOV(*(dw*)(raddr(ss,bp-2)), ax));	// 973 mov     [bp-2], ax ;~ 01A2:0827
cs=0x1a2;eip=0x00082a; 	T(OR(ax, ax));	// 974 or      ax, ax ;~ 01A2:082A
cs=0x1a2;eip=0x00082c; 	R(JZ(loc_10833));	// 975 jz      short loc_10833 ;~ 01A2:082C
cs=0x1a2;eip=0x00082e; 	T(CMP(ax, 2));	// 976 cmp     ax, 2 ;~ 01A2:082E
cs=0x1a2;eip=0x000831; 	R(JNZ(loc_10868));	// 977 jnz     short loc_10868 ;~ 01A2:0831
loc_10833:
	// 4441 
cs=0x1a2;eip=0x000833; 	R(CALLF(sub_1c822,0));	// 980 call    sub_1C822 ;~ 01A2:0833
cs=0x1a2;eip=0x000838; 	T(CMP(*(dw*)(raddr(ss,bp-2)), 0));	// 981 cmp     word ptr [bp-2], 0 ;~ 01A2:0838
cs=0x1a2;eip=0x00083c; 	R(JNZ(loc_10849));	// 982 jnz     short loc_10849 ;~ 01A2:083C
cs=0x1a2;eip=0x00083e; 	T(MOV(ax, 0x23));	// 983 mov     ax, 23h ; '#' ;~ 01A2:083E
cs=0x1a2;eip=0x000841; 	X(PUSH(ax));	// 984 push    ax ;~ 01A2:0841
cs=0x1a2;eip=0x000842; 	X(PUSH(cs));	// 985 push    cs ;~ 01A2:0842
cs=0x1a2;eip=0x000843; 	R(CALL(sub_1179c,0));	// 986 call    near ptr sub_1179C ;~ 01A2:0843
cs=0x1a2;eip=0x000846; 	T(ADD(sp, 2));	// 987 add     sp, 2 ;~ 01A2:0846
loc_10849:
	// 4442 
cs=0x1a2;eip=0x000849; 	T(CMP(*(dw*)(raddr(ss,bp-2)), 2));	// 990 cmp     word ptr [bp-2], 2 ;~ 01A2:0849
cs=0x1a2;eip=0x00084d; 	R(JNZ(loc_1085a));	// 991 jnz     short loc_1085A ;~ 01A2:084D
cs=0x1a2;eip=0x00084f; 	T(MOV(ax, 0x24));	// 992 mov     ax, 24h ; '$' ;~ 01A2:084F
cs=0x1a2;eip=0x000852; 	X(PUSH(ax));	// 993 push    ax ;~ 01A2:0852
cs=0x1a2;eip=0x000853; 	X(PUSH(cs));	// 994 push    cs ;~ 01A2:0853
cs=0x1a2;eip=0x000854; 	R(CALL(sub_1179c,0));	// 995 call    near ptr sub_1179C ;~ 01A2:0854
cs=0x1a2;eip=0x000857; 	T(ADD(sp, 2));	// 996 add     sp, 2 ;~ 01A2:0857
loc_1085a:
	// 4443 
cs=0x1a2;eip=0x00085a; 	T(MOV(ax, 1));	// 999 mov     ax, 1 ;~ 01A2:085A
cs=0x1a2;eip=0x00085d; 	X(PUSH(ax));	// 1000 push    ax ;~ 01A2:085D
cs=0x1a2;eip=0x00085e; 	R(CALLF(sub_29cf3,0));	// 1001 call    sub_29CF3 ;~ 01A2:085E
cs=0x1a2;eip=0x000863; 	T(MOV(sp, bp));	// 1002 mov     sp, bp ;~ 01A2:0863
cs=0x1a2;eip=0x000865; 	X(POP(bp));	// 1003 pop     bp ;~ 01A2:0865
cs=0x1a2;eip=0x000866; 	R(RETF(0));	// 1004 retf ;~ 01A2:0866
loc_10868:
	// 4444 
cs=0x1a2;eip=0x000868; 	T(MOV(ax, 5));	// 1009 mov     ax, 5 ;~ 01A2:0868
cs=0x1a2;eip=0x00086b; 	X(PUSH(ax));	// 1010 push    ax ;~ 01A2:086B
cs=0x1a2;eip=0x00086c; 	X(PUSH(cs));	// 1011 push    cs ;~ 01A2:086C
cs=0x1a2;eip=0x00086d; 	R(CALL(sub_10874,0));	// 1012 call    near ptr sub_10874 ;~ 01A2:086D
cs=0x1a2;eip=0x000870; 	T(MOV(sp, bp));	// 1014 mov     sp, bp ;~ 01A2:0870
cs=0x1a2;eip=0x000872; 	X(POP(bp));	// 1015 pop     bp ;~ 01A2:0872
cs=0x1a2;eip=0x000873; 	R(RETF(0));	// 1016 retf ;~ 01A2:0873
cs=0x1a2;eip=0x000924; 	T(ADD(sp, 2));	// 1121 add     sp, 2 ;~ 01A2:0924
cs=0x1a2;eip=0x000927; 	X(POP(bp));	// 1122 pop     bp ;~ 01A2:0927
cs=0x1a2;eip=0x000928; 	R(RETF(0));	// 1123 retf ;~ 01A2:0928
sub_10874:
	// 1022 
#undef arg_0
#define arg_0 6
	// 1025 arg_0           = word ptr  6 ;~ 01A2:0874
ret_1a2_874:
	// 4445 
cs=0x1a2;eip=0x000874; 	X(PUSH(bp));	// 1027 push    bp ;~ 01A2:0874
cs=0x1a2;eip=0x000875; 	T(MOV(bp, sp));	// 1028 mov     bp, sp ;~ 01A2:0875
cs=0x1a2;eip=0x000877; 	R(CALLF(sub_13dda,0));	// 1029 call    sub_13DDA ;~ 01A2:0877
cs=0x1a2;eip=0x00087c; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 4));	// 1030 cmp     [bp+arg_0], 4 ;~ 01A2:087C
cs=0x1a2;eip=0x000880; 	R(JZ(loc_10898));	// 1031 jz      short loc_10898 ;~ 01A2:0880
cs=0x1a2;eip=0x000882; 	X(PUSH(cs));	// 1032 push    cs ;~ 01A2:0882
cs=0x1a2;eip=0x000883; 	R(CALL(sub_11442,0));	// 1033 call    near ptr sub_11442 ;~ 01A2:0883
cs=0x1a2;eip=0x000886; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 1));	// 1034 cmp     [bp+arg_0], 1 ;~ 01A2:0886
cs=0x1a2;eip=0x00088a; 	R(JZ(loc_10898));	// 1035 jz      short loc_10898 ;~ 01A2:088A
cs=0x1a2;eip=0x00088c; 	T(MOV(ax, 1));	// 1036 mov     ax, 1 ;~ 01A2:088C
cs=0x1a2;eip=0x00088f; 	X(PUSH(ax));	// 1037 push    ax ;~ 01A2:088F
cs=0x1a2;eip=0x000890; 	R(CALLF(sub_27364,0));	// 1038 call    far ptr sub_27364 ;~ 01A2:0890
cs=0x1a2;eip=0x000895; 	T(ADD(sp, 2));	// 1039 add     sp, 2 ;~ 01A2:0895
loc_10898:
	// 4446 
cs=0x1a2;eip=0x000898; 	X(PUSH(word_3a6a2));	// 1043 push    word_3A6A2 ;~ 01A2:0898
cs=0x1a2;eip=0x00089c; 	R(CALLF(seg033_proc,m2c::kloc_2905b));	// 1044 call    far ptr loc_2905B ;~ 01A2:089C
cs=0x1a2;eip=0x0008a1; 	T(ADD(sp, 2));	// 1045 add     sp, 2 ;~ 01A2:08A1
cs=0x1a2;eip=0x0008a4; 	R(CALLF(sub_26fcb,0));	// 1046 call    sub_26FCB ;~ 01A2:08A4
cs=0x1a2;eip=0x0008a9; 	R(CALLF(sub_1d03d,0));	// 1047 call    sub_1D03D ;~ 01A2:08A9
cs=0x1a2;eip=0x0008ae; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 1048 mov     ax, [bp+arg_0] ;~ 01A2:08AE
cs=0x1a2;eip=0x0008b1; 	T(CMP(ax, 1));	// 1049 cmp     ax, 1 ;~ 01A2:08B1
cs=0x1a2;eip=0x0008b4; 	R(JZ(loc_108d2));	// 1050 jz      short loc_108D2 ;~ 01A2:08B4
cs=0x1a2;eip=0x0008b6; 	T(CMP(ax, 2));	// 1051 cmp     ax, 2 ;~ 01A2:08B6
cs=0x1a2;eip=0x0008b9; 	R(JZ(loc_108f8));	// 1052 jz      short loc_108F8 ;~ 01A2:08B9
cs=0x1a2;eip=0x0008bb; 	T(CMP(ax, 3));	// 1053 cmp     ax, 3 ;~ 01A2:08BB
cs=0x1a2;eip=0x0008be; 	R(JZ(loc_10904));	// 1054 jz      short loc_10904 ;~ 01A2:08BE
cs=0x1a2;eip=0x0008c0; 	T(CMP(ax, 5));	// 1055 cmp     ax, 5 ;~ 01A2:08C0
cs=0x1a2;eip=0x0008c3; 	R(JZ(loc_10910));	// 1056 jz      short loc_10910 ;~ 01A2:08C3
cs=0x1a2;eip=0x0008c5; 	T(SUB(ax, ax));	// 1057 sub     ax, ax ;~ 01A2:08C5
cs=0x1a2;eip=0x0008c7; 	X(PUSH(ax));	// 1058 push    ax ;~ 01A2:08C7
cs=0x1a2;eip=0x0008c8; 	T(MOV(ax, 1));	// 1059 mov     ax, 1 ;~ 01A2:08C8
cs=0x1a2;eip=0x0008cb; 	X(PUSH(ax));	// 1060 push    ax ;~ 01A2:08CB
cs=0x1a2;eip=0x0008cc; 	T(MOV(ax, 0x1E9));	// 1061 mov     ax, 1E9h ;~ 01A2:08CC
cs=0x1a2;eip=0x0008cf; 	R(JMP(loc_108ed));	// 1062 jmp     short loc_108ED ;~ 01A2:08CF
loc_108d2:
	// 4447 
cs=0x1a2;eip=0x0008d2; 	T(SUB(ax, ax));	// 1067 sub     ax, ax ;~ 01A2:08D2
cs=0x1a2;eip=0x0008d4; 	X(PUSH(ax));	// 1068 push    ax ;~ 01A2:08D4
cs=0x1a2;eip=0x0008d5; 	T(MOV(ax, 1));	// 1069 mov     ax, 1 ;~ 01A2:08D5
cs=0x1a2;eip=0x0008d8; 	X(PUSH(ax));	// 1070 push    ax ;~ 01A2:08D8
cs=0x1a2;eip=0x0008d9; 	T(MOV(ax, 0x106));	// 1071 mov     ax, 106h ;~ 01A2:08D9
cs=0x1a2;eip=0x0008dc; 	X(PUSH(ax));	// 1072 push    ax ;~ 01A2:08DC
cs=0x1a2;eip=0x0008dd; 	R(CALLF(sub_1e0f2,0));	// 1073 call    sub_1E0F2 ;~ 01A2:08DD
cs=0x1a2;eip=0x0008e2; 	T(ADD(sp, 6));	// 1074 add     sp, 6 ;~ 01A2:08E2
cs=0x1a2;eip=0x0008e5; 	T(MOV(ax, 1));	// 1075 mov     ax, 1 ;~ 01A2:08E5
cs=0x1a2;eip=0x0008e8; 	X(PUSH(ax));	// 1076 push    ax ;~ 01A2:08E8
cs=0x1a2;eip=0x0008e9; 	X(PUSH(ax));	// 1077 push    ax ;~ 01A2:08E9
cs=0x1a2;eip=0x0008ea; 	T(MOV(ax, 0x137));	// 1078 mov     ax, 137h ;~ 01A2:08EA
loc_108ed:
	// 4448 
cs=0x1a2;eip=0x0008ed; 	X(PUSH(ax));	// 1082 push    ax ;~ 01A2:08ED
cs=0x1a2;eip=0x0008ee; 	R(CALLF(sub_1e0f2,0));	// 1083 call    sub_1E0F2 ;~ 01A2:08EE
cs=0x1a2;eip=0x0008f3; 	T(ADD(sp, 6));	// 1084 add     sp, 6 ;~ 01A2:08F3
cs=0x1a2;eip=0x0008f6; 	R(JMP(loc_1091c));	// 1085 jmp     short loc_1091C ;~ 01A2:08F6
loc_108f8:
	// 4449 
cs=0x1a2;eip=0x0008f8; 	T(SUB(ax, ax));	// 1089 sub     ax, ax ;~ 01A2:08F8
cs=0x1a2;eip=0x0008fa; 	X(PUSH(ax));	// 1090 push    ax ;~ 01A2:08FA
cs=0x1a2;eip=0x0008fb; 	T(MOV(ax, 1));	// 1091 mov     ax, 1 ;~ 01A2:08FB
cs=0x1a2;eip=0x0008fe; 	X(PUSH(ax));	// 1092 push    ax ;~ 01A2:08FE
cs=0x1a2;eip=0x0008ff; 	T(MOV(ax, 0x15B));	// 1093 mov     ax, 15Bh ;~ 01A2:08FF
cs=0x1a2;eip=0x000902; 	R(JMP(loc_108ed));	// 1094 jmp     short loc_108ED ;~ 01A2:0902
loc_10904:
	// 4450 
cs=0x1a2;eip=0x000904; 	T(SUB(ax, ax));	// 1098 sub     ax, ax ;~ 01A2:0904
cs=0x1a2;eip=0x000906; 	X(PUSH(ax));	// 1099 push    ax ;~ 01A2:0906
cs=0x1a2;eip=0x000907; 	T(MOV(ax, 1));	// 1100 mov     ax, 1 ;~ 01A2:0907
cs=0x1a2;eip=0x00090a; 	X(PUSH(ax));	// 1101 push    ax ;~ 01A2:090A
cs=0x1a2;eip=0x00090b; 	T(MOV(ax, 0x189));	// 1102 mov     ax, 189h ;~ 01A2:090B
cs=0x1a2;eip=0x00090e; 	R(JMP(loc_108ed));	// 1103 jmp     short loc_108ED ;~ 01A2:090E
loc_10910:
	// 4451 
cs=0x1a2;eip=0x000910; 	T(SUB(ax, ax));	// 1107 sub     ax, ax ;~ 01A2:0910
cs=0x1a2;eip=0x000912; 	X(PUSH(ax));	// 1108 push    ax ;~ 01A2:0912
cs=0x1a2;eip=0x000913; 	T(MOV(ax, 1));	// 1109 mov     ax, 1 ;~ 01A2:0913
cs=0x1a2;eip=0x000916; 	X(PUSH(ax));	// 1110 push    ax ;~ 01A2:0916
cs=0x1a2;eip=0x000917; 	T(MOV(ax, 0x1BB));	// 1111 mov     ax, 1BBh ;~ 01A2:0917
cs=0x1a2;eip=0x00091a; 	R(JMP(loc_108ed));	// 1112 jmp     short loc_108ED ;~ 01A2:091A
loc_1091c:
	// 4452 
cs=0x1a2;eip=0x00091c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 1116 push    [bp+arg_0] ;~ 01A2:091C
cs=0x1a2;eip=0x00091f; 	R(CALLF(sub_295a2,0));	// 1117 call    far ptr sub_295A2 ;~ 01A2:091F
sub_1092a:
	// 1131 
#undef var_6
#define var_6 -6
	// 1133 var_6           = word ptr -6 ;~ 01A2:092A
#undef var_2
#define var_2 -2
	// 1134 var_2           = word ptr -2 ;~ 01A2:092A
ret_1a2_92a:
	// 4453 
cs=0x1a2;eip=0x00092a; 	X(PUSH(bp));	// 1136 push    bp ;~ 01A2:092A
cs=0x1a2;eip=0x00092b; 	T(MOV(bp, sp));	// 1137 mov     bp, sp ;~ 01A2:092B
cs=0x1a2;eip=0x00092d; 	T(SUB(sp, 6));	// 1138 sub     sp, 6 ;~ 01A2:092D
cs=0x1a2;eip=0x000930; 	R(CALLF(sub_26e5b,0));	// 1139 call    sub_26E5B ;~ 01A2:0930
cs=0x1a2;eip=0x000935; 	X(MOV(word_3a6a2, ax));	// 1140 mov     word_3A6A2, ax ;~ 01A2:0935
cs=0x1a2;eip=0x000938; 	R(CALLF(sub_26cf6,0));	// 1141 call    sub_26CF6 ;~ 01A2:0938
cs=0x1a2;eip=0x00093d; 	X(MOV(word_3a5b6, ax));	// 1142 mov     word_3A5B6, ax ;~ 01A2:093D
cs=0x1a2;eip=0x000940; 	T(MOV(bx, ax));	// 1143 mov     bx, ax ;~ 01A2:0940
cs=0x1a2;eip=0x000942; 	T(MOV(al, *(raddr(ds,bx+0x0EE))));	// 1144 mov     al, [bx+0EEh] ;~ 01A2:0942
cs=0x1a2;eip=0x000946; 	T(SUB(ah, ah));	// 1145 sub     ah, ah ;~ 01A2:0946
cs=0x1a2;eip=0x000948; 	X(MOV(word_3a3f4, ax));	// 1146 mov     word_3A3F4, ax ;~ 01A2:0948
cs=0x1a2;eip=0x00094b; 	X(PUSH(word_3a6a2));	// 1147 push    word_3A6A2 ;~ 01A2:094B
cs=0x1a2;eip=0x00094f; 	R(CALLF(seg033_proc,m2c::kloc_2905b));	// 1148 call    far ptr loc_2905B ;~ 01A2:094F
cs=0x1a2;eip=0x000954; 	T(ADD(sp, 2));	// 1149 add     sp, 2 ;~ 01A2:0954
cs=0x1a2;eip=0x000957; 	T(MOV(ax, 0x1FF));	// 1150 mov     ax, 1FFh ;~ 01A2:0957
cs=0x1a2;eip=0x00095a; 	X(PUSH(ax));	// 1151 push    ax ;~ 01A2:095A
cs=0x1a2;eip=0x00095b; 	T(MOV(ax, 0x202));	// 1152 mov     ax, 202h ;~ 01A2:095B
cs=0x1a2;eip=0x00095e; 	X(PUSH(ax));	// 1153 push    ax ;~ 01A2:095E
cs=0x1a2;eip=0x00095f; 	R(CALLF(sub_29708,0));	// 1154 call    sub_29708 ;~ 01A2:095F
cs=0x1a2;eip=0x000964; 	T(ADD(sp, 4));	// 1155 add     sp, 4 ;~ 01A2:0964
cs=0x1a2;eip=0x000967; 	X(MOV(word_3a3e6, ax));	// 1156 mov     word_3A3E6, ax ;~ 01A2:0967
cs=0x1a2;eip=0x00096a; 	T(OR(ax, ax));	// 1157 or      ax, ax ;~ 01A2:096A
cs=0x1a2;eip=0x00096c; 	R(JZ(loc_109d8));	// 1158 jz      short loc_109D8 ;~ 01A2:096C
cs=0x1a2;eip=0x00096e; 	X(PUSH(ax));	// 1159 push    ax ;~ 01A2:096E
cs=0x1a2;eip=0x00096f; 	T(MOV(ax, 1));	// 1160 mov     ax, 1 ;~ 01A2:096F
cs=0x1a2;eip=0x000972; 	X(PUSH(ax));	// 1161 push    ax ;~ 01A2:0972
cs=0x1a2;eip=0x000973; 	T(MOV(ax, 2));	// 1162 mov     ax, 2 ;~ 01A2:0973
cs=0x1a2;eip=0x000976; 	X(PUSH(ax));	// 1163 push    ax ;~ 01A2:0976
cs=0x1a2;eip=0x000977; 	T(MOV(ax, 0x0E5B4));	// 1164 mov     ax, 0E5B4h ;~ 01A2:0977
cs=0x1a2;eip=0x00097a; 	X(PUSH(ax));	// 1165 push    ax ;~ 01A2:097A
cs=0x1a2;eip=0x00097b; 	R(CALLF(sub_29734,0));	// 1166 call    sub_29734 ;~ 01A2:097B
cs=0x1a2;eip=0x000980; 	T(ADD(sp, 8));	// 1167 add     sp, 8 ;~ 01A2:0980
cs=0x1a2;eip=0x000983; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 1168 mov     [bp+var_2], ax ;~ 01A2:0983
cs=0x1a2;eip=0x000986; 	T(MOV(bx, word_3a3f4));	// 1169 mov     bx, word_3A3F4 ;~ 01A2:0986
cs=0x1a2;eip=0x00098a; 	T(MOV(al, *(raddr(ds,bx+0x0EA))));	// 1170 mov     al, [bx+0EAh] ;~ 01A2:098A
cs=0x1a2;eip=0x00098e; 	T(SUB(ah, ah));	// 1171 sub     ah, ah ;~ 01A2:098E
cs=0x1a2;eip=0x000990; 	X(MOV(word_3a178, ax));	// 1172 mov     word_3A178, ax ;~ 01A2:0990
cs=0x1a2;eip=0x000993; 	X(PUSH(word_3a3e6));	// 1173 push    word_3A3E6 ;~ 01A2:0993
cs=0x1a2;eip=0x000997; 	T(MOV(ax, 1));	// 1174 mov     ax, 1 ;~ 01A2:0997
cs=0x1a2;eip=0x00099a; 	X(PUSH(ax));	// 1175 push    ax ;~ 01A2:099A
cs=0x1a2;eip=0x00099b; 	T(MOV(ax, 2));	// 1176 mov     ax, 2 ;~ 01A2:099B
cs=0x1a2;eip=0x00099e; 	X(PUSH(ax));	// 1177 push    ax ;~ 01A2:099E
cs=0x1a2;eip=0x00099f; 	T(MOV(ax, 0x96));	// 1178 mov     ax, 96h ; '–' ;~ 01A2:099F
cs=0x1a2;eip=0x0009a2; 	X(PUSH(ax));	// 1179 push    ax ;~ 01A2:09A2
cs=0x1a2;eip=0x0009a3; 	R(CALLF(sub_29734,0));	// 1180 call    sub_29734 ;~ 01A2:09A3
cs=0x1a2;eip=0x0009a8; 	T(ADD(sp, 8));	// 1181 add     sp, 8 ;~ 01A2:09A8
cs=0x1a2;eip=0x0009ab; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 1182 mov     [bp+var_2], ax ;~ 01A2:09AB
cs=0x1a2;eip=0x0009ae; 	X(PUSH(word_3a3e6));	// 1183 push    word_3A3E6 ;~ 01A2:09AE
cs=0x1a2;eip=0x0009b2; 	T(MOV(ax, 1));	// 1184 mov     ax, 1 ;~ 01A2:09B2
cs=0x1a2;eip=0x0009b5; 	X(PUSH(ax));	// 1185 push    ax ;~ 01A2:09B5
cs=0x1a2;eip=0x0009b6; 	T(MOV(ax, 2));	// 1186 mov     ax, 2 ;~ 01A2:09B6
cs=0x1a2;eip=0x0009b9; 	X(PUSH(ax));	// 1187 push    ax ;~ 01A2:09B9
cs=0x1a2;eip=0x0009ba; 	T(MOV(ax, 0x98));	// 1188 mov     ax, 98h ;~ 01A2:09BA
cs=0x1a2;eip=0x0009bd; 	X(PUSH(ax));	// 1189 push    ax ;~ 01A2:09BD
cs=0x1a2;eip=0x0009be; 	R(CALLF(sub_29734,0));	// 1190 call    sub_29734 ;~ 01A2:09BE
cs=0x1a2;eip=0x0009c3; 	T(ADD(sp, 8));	// 1191 add     sp, 8 ;~ 01A2:09C3
cs=0x1a2;eip=0x0009c6; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 1192 mov     [bp+var_2], ax ;~ 01A2:09C6
cs=0x1a2;eip=0x0009c9; 	X(PUSH(word_3a3e6));	// 1193 push    word_3A3E6 ;~ 01A2:09C9
cs=0x1a2;eip=0x0009cd; 	R(CALLF(sub_29640,0));	// 1194 call    sub_29640 ;~ 01A2:09CD
cs=0x1a2;eip=0x0009d2; 	T(ADD(sp, 2));	// 1195 add     sp, 2 ;~ 01A2:09D2
cs=0x1a2;eip=0x0009d5; 	R(JMP(loc_10c61));	// 1196 jmp     loc_10C61 ;~ 01A2:09D5
loc_109d8:
	// 4454 
cs=0x1a2;eip=0x0009d8; 	T(MOV(ax, 1));	// 1200 mov     ax, 1 ;~ 01A2:09D8
cs=0x1a2;eip=0x0009db; 	X(PUSH(ax));	// 1201 push    ax ;~ 01A2:09DB
cs=0x1a2;eip=0x0009dc; 	T(SUB(ax, ax));	// 1202 sub     ax, ax ;~ 01A2:09DC
cs=0x1a2;eip=0x0009de; 	X(PUSH(ax));	// 1203 push    ax ;~ 01A2:09DE
cs=0x1a2;eip=0x0009df; 	T(MOV(ax, 0x20A));	// 1204 mov     ax, 20Ah ;~ 01A2:09DF
cs=0x1a2;eip=0x0009e2; 	X(PUSH(ax));	// 1205 push    ax ;~ 01A2:09E2
cs=0x1a2;eip=0x0009e3; 	R(CALLF(sub_1e0f2,0));	// 1206 call    sub_1E0F2 ;~ 01A2:09E3
cs=0x1a2;eip=0x0009e8; 	T(ADD(sp, 6));	// 1207 add     sp, 6 ;~ 01A2:09E8
cs=0x1a2;eip=0x0009eb; 	T(MOV(ax, 3));	// 1208 mov     ax, 3 ;~ 01A2:09EB
cs=0x1a2;eip=0x0009ee; 	X(PUSH(ax));	// 1209 push    ax ;~ 01A2:09EE
cs=0x1a2;eip=0x0009ef; 	T(MOV(ax, 8));	// 1210 mov     ax, 8 ;~ 01A2:09EF
cs=0x1a2;eip=0x0009f2; 	X(PUSH(ax));	// 1211 push    ax ;~ 01A2:09F2
cs=0x1a2;eip=0x0009f3; 	T(MOV(ax, 0x240));	// 1212 mov     ax, 240h ;~ 01A2:09F3
cs=0x1a2;eip=0x0009f6; 	X(PUSH(ax));	// 1213 push    ax ;~ 01A2:09F6
cs=0x1a2;eip=0x0009f7; 	R(CALLF(sub_1e0f2,0));	// 1214 call    sub_1E0F2 ;~ 01A2:09F7
cs=0x1a2;eip=0x0009fc; 	T(ADD(sp, 6));	// 1215 add     sp, 6 ;~ 01A2:09FC
cs=0x1a2;eip=0x0009ff; 	T(MOV(ax, 4));	// 1216 mov     ax, 4 ;~ 01A2:09FF
cs=0x1a2;eip=0x000a02; 	X(PUSH(ax));	// 1217 push    ax ;~ 01A2:0A02
cs=0x1a2;eip=0x000a03; 	T(MOV(ax, 8));	// 1218 mov     ax, 8 ;~ 01A2:0A03
cs=0x1a2;eip=0x000a06; 	X(PUSH(ax));	// 1219 push    ax ;~ 01A2:0A06
cs=0x1a2;eip=0x000a07; 	T(MOV(ax, 0x269));	// 1220 mov     ax, 269h ;~ 01A2:0A07
cs=0x1a2;eip=0x000a0a; 	X(PUSH(ax));	// 1221 push    ax ;~ 01A2:0A0A
cs=0x1a2;eip=0x000a0b; 	R(CALLF(sub_1e0f2,0));	// 1222 call    sub_1E0F2 ;~ 01A2:0A0B
cs=0x1a2;eip=0x000a10; 	T(ADD(sp, 6));	// 1223 add     sp, 6 ;~ 01A2:0A10
cs=0x1a2;eip=0x000a13; 	T(MOV(ax, 5));	// 1224 mov     ax, 5 ;~ 01A2:0A13
cs=0x1a2;eip=0x000a16; 	X(PUSH(ax));	// 1225 push    ax ;~ 01A2:0A16
cs=0x1a2;eip=0x000a17; 	T(MOV(ax, 8));	// 1226 mov     ax, 8 ;~ 01A2:0A17
cs=0x1a2;eip=0x000a1a; 	X(PUSH(ax));	// 1227 push    ax ;~ 01A2:0A1A
cs=0x1a2;eip=0x000a1b; 	T(MOV(ax, 0x28C));	// 1228 mov     ax, 28Ch ;~ 01A2:0A1B
cs=0x1a2;eip=0x000a1e; 	X(PUSH(ax));	// 1229 push    ax ;~ 01A2:0A1E
cs=0x1a2;eip=0x000a1f; 	R(CALLF(sub_1e0f2,0));	// 1230 call    sub_1E0F2 ;~ 01A2:0A1F
cs=0x1a2;eip=0x000a24; 	T(ADD(sp, 6));	// 1231 add     sp, 6 ;~ 01A2:0A24
cs=0x1a2;eip=0x000a27; 	T(MOV(ax, 6));	// 1232 mov     ax, 6 ;~ 01A2:0A27
cs=0x1a2;eip=0x000a2a; 	X(PUSH(ax));	// 1233 push    ax ;~ 01A2:0A2A
cs=0x1a2;eip=0x000a2b; 	T(MOV(ax, 8));	// 1234 mov     ax, 8 ;~ 01A2:0A2B
cs=0x1a2;eip=0x000a2e; 	X(PUSH(ax));	// 1235 push    ax ;~ 01A2:0A2E
cs=0x1a2;eip=0x000a2f; 	T(MOV(ax, 0x2B1));	// 1236 mov     ax, 2B1h ;~ 01A2:0A2F
cs=0x1a2;eip=0x000a32; 	X(PUSH(ax));	// 1237 push    ax ;~ 01A2:0A32
cs=0x1a2;eip=0x000a33; 	R(CALLF(sub_1e0f2,0));	// 1238 call    sub_1E0F2 ;~ 01A2:0A33
cs=0x1a2;eip=0x000a38; 	T(ADD(sp, 6));	// 1239 add     sp, 6 ;~ 01A2:0A38
cs=0x1a2;eip=0x000a3b; 	T(MOV(ax, 8));	// 1240 mov     ax, 8 ;~ 01A2:0A3B
cs=0x1a2;eip=0x000a3e; 	X(PUSH(ax));	// 1241 push    ax ;~ 01A2:0A3E
cs=0x1a2;eip=0x000a3f; 	T(SUB(ax, ax));	// 1242 sub     ax, ax ;~ 01A2:0A3F
cs=0x1a2;eip=0x000a41; 	X(PUSH(ax));	// 1243 push    ax ;~ 01A2:0A41
cs=0x1a2;eip=0x000a42; 	T(MOV(ax, 0x2C5));	// 1244 mov     ax, 2C5h ;~ 01A2:0A42
cs=0x1a2;eip=0x000a45; 	X(PUSH(ax));	// 1245 push    ax ;~ 01A2:0A45
cs=0x1a2;eip=0x000a46; 	R(CALLF(sub_1e0f2,0));	// 1246 call    sub_1E0F2 ;~ 01A2:0A46
cs=0x1a2;eip=0x000a4b; 	T(ADD(sp, 6));	// 1247 add     sp, 6 ;~ 01A2:0A4B
cs=0x1a2;eip=0x000a4e; 	R(JMP(loc_10a63));	// 1248 jmp     short loc_10A63 ;~ 01A2:0A4E
loc_10a50:
	// 4455 
cs=0x1a2;eip=0x000a50; 	T(CMP(ax, 0x31));	// 1252 cmp     ax, 31h ; '1' ;~ 01A2:0A50
cs=0x1a2;eip=0x000a53; 	R(JL(loc_10a63));	// 1253 jl      short loc_10A63 ;~ 01A2:0A53
cs=0x1a2;eip=0x000a55; 	T(CMP(ax, 0x34));	// 1254 cmp     ax, 34h ; '4' ;~ 01A2:0A55
cs=0x1a2;eip=0x000a58; 	R(JG(loc_10a63));	// 1255 jg      short loc_10A63 ;~ 01A2:0A58
cs=0x1a2;eip=0x000a5a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 1256 mov     ax, [bp+var_2] ;~ 01A2:0A5A
cs=0x1a2;eip=0x000a5d; 	T(SUB(ax, 0x31));	// 1257 sub     ax, 31h ; '1' ;~ 01A2:0A5D
cs=0x1a2;eip=0x000a60; 	X(MOV(word_3a3f4, ax));	// 1258 mov     word_3A3F4, ax ;~ 01A2:0A60
loc_10a63:
	// 4456 
cs=0x1a2;eip=0x000a63; 	T(MOV(ax, word_3a3f4));	// 1262 mov     ax, word_3A3F4 ;~ 01A2:0A63
cs=0x1a2;eip=0x000a66; 	T(INC(ax));	// 1263 inc     ax ;~ 01A2:0A66
cs=0x1a2;eip=0x000a67; 	X(PUSH(ax));	// 1264 push    ax ;~ 01A2:0A67
cs=0x1a2;eip=0x000a68; 	X(PUSH(cs));	// 1265 push    cs ;~ 01A2:0A68
cs=0x1a2;eip=0x000a69; 	R(CALL(sub_10ce6,0));	// 1266 call    near ptr sub_10CE6 ;~ 01A2:0A69
cs=0x1a2;eip=0x000a6c; 	T(ADD(sp, 2));	// 1267 add     sp, 2 ;~ 01A2:0A6C
cs=0x1a2;eip=0x000a6f; 	R(CALLF(sub_29bc4,0));	// 1268 call    sub_29BC4 ;~ 01A2:0A6F
cs=0x1a2;eip=0x000a74; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 1269 mov     [bp+var_2], ax ;~ 01A2:0A74
cs=0x1a2;eip=0x000a77; 	T(CMP(ax, 0x0D));	// 1270 cmp     ax, 0Dh ;~ 01A2:0A77
cs=0x1a2;eip=0x000a7a; 	R(JNZ(loc_10a50));	// 1271 jnz     short loc_10A50 ;~ 01A2:0A7A
cs=0x1a2;eip=0x000a7c; 	T(CMP(word_3a3f4, 3));	// 1272 cmp     word_3A3F4, 3 ;~ 01A2:0A7C
cs=0x1a2;eip=0x000a81; 	R(JNZ(loc_10a87));	// 1273 jnz     short loc_10A87 ;~ 01A2:0A81
cs=0x1a2;eip=0x000a83; 	X(PUSH(cs));	// 1274 push    cs ;~ 01A2:0A83
cs=0x1a2;eip=0x000a84; 	R(CALL(sub_107e4,0));	// 1275 call    near ptr sub_107E4 ;~ 01A2:0A84
loc_10a87:
	// 4457 
cs=0x1a2;eip=0x000a87; 	T(MOV(ax, word_3a3f4));	// 1279 mov     ax, word_3A3F4 ;~ 01A2:0A87
cs=0x1a2;eip=0x000a8a; 	X(MOV(word_3a178, ax));	// 1280 mov     word_3A178, ax ;~ 01A2:0A8A
cs=0x1a2;eip=0x000a8d; 	T(CMP(ax, 2));	// 1281 cmp     ax, 2 ;~ 01A2:0A8D
cs=0x1a2;eip=0x000a90; 	R(JNZ(loc_10a9a));	// 1282 jnz     short loc_10A9A ;~ 01A2:0A90
cs=0x1a2;eip=0x000a92; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 1));	// 1283 mov     [bp+var_6], 1 ;~ 01A2:0A92
cs=0x1a2;eip=0x000a97; 	R(JMP(loc_10a9f));	// 1284 jmp     short loc_10A9F ;~ 01A2:0A97
loc_10a9a:
	// 4458 
cs=0x1a2;eip=0x000a9a; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0));	// 1289 mov     [bp+var_6], 0 ;~ 01A2:0A9A
loc_10a9f:
	// 4459 
cs=0x1a2;eip=0x000a9f; 	T(MOV(ax, 0x0A));	// 1292 mov     ax, 0Ah ;~ 01A2:0A9F
cs=0x1a2;eip=0x000aa2; 	X(PUSH(ax));	// 1293 push    ax ;~ 01A2:0AA2
cs=0x1a2;eip=0x000aa3; 	T(SUB(ax, ax));	// 1294 sub     ax, ax ;~ 01A2:0AA3
cs=0x1a2;eip=0x000aa5; 	X(PUSH(ax));	// 1295 push    ax ;~ 01A2:0AA5
cs=0x1a2;eip=0x000aa6; 	T(MOV(ax, 0x2E4));	// 1296 mov     ax, 2E4h ;~ 01A2:0AA6
cs=0x1a2;eip=0x000aa9; 	X(PUSH(ax));	// 1297 push    ax ;~ 01A2:0AA9
cs=0x1a2;eip=0x000aaa; 	R(CALLF(sub_1e0f2,0));	// 1298 call    sub_1E0F2 ;~ 01A2:0AAA
cs=0x1a2;eip=0x000aaf; 	T(ADD(sp, 6));	// 1299 add     sp, 6 ;~ 01A2:0AAF
cs=0x1a2;eip=0x000ab2; 	T(MOV(ax, 0x0B));	// 1300 mov     ax, 0Bh ;~ 01A2:0AB2
cs=0x1a2;eip=0x000ab5; 	X(PUSH(ax));	// 1301 push    ax ;~ 01A2:0AB5
cs=0x1a2;eip=0x000ab6; 	T(MOV(ax, 8));	// 1302 mov     ax, 8 ;~ 01A2:0AB6
cs=0x1a2;eip=0x000ab9; 	X(PUSH(ax));	// 1303 push    ax ;~ 01A2:0AB9
cs=0x1a2;eip=0x000aba; 	T(MOV(ax, 0x317));	// 1304 mov     ax, 317h ;~ 01A2:0ABA
cs=0x1a2;eip=0x000abd; 	X(PUSH(ax));	// 1305 push    ax ;~ 01A2:0ABD
cs=0x1a2;eip=0x000abe; 	R(CALLF(sub_1e0f2,0));	// 1306 call    sub_1E0F2 ;~ 01A2:0ABE
cs=0x1a2;eip=0x000ac3; 	T(ADD(sp, 6));	// 1307 add     sp, 6 ;~ 01A2:0AC3
cs=0x1a2;eip=0x000ac6; 	T(MOV(ax, 0x0C));	// 1308 mov     ax, 0Ch ;~ 01A2:0AC6
cs=0x1a2;eip=0x000ac9; 	X(PUSH(ax));	// 1309 push    ax ;~ 01A2:0AC9
cs=0x1a2;eip=0x000aca; 	T(MOV(ax, 8));	// 1310 mov     ax, 8 ;~ 01A2:0ACA
cs=0x1a2;eip=0x000acd; 	X(PUSH(ax));	// 1311 push    ax ;~ 01A2:0ACD
cs=0x1a2;eip=0x000ace; 	T(MOV(ax, 0x336));	// 1312 mov     ax, 336h ;~ 01A2:0ACE
cs=0x1a2;eip=0x000ad1; 	X(PUSH(ax));	// 1313 push    ax ;~ 01A2:0AD1
cs=0x1a2;eip=0x000ad2; 	R(CALLF(sub_1e0f2,0));	// 1314 call    sub_1E0F2 ;~ 01A2:0AD2
cs=0x1a2;eip=0x000ad7; 	T(ADD(sp, 6));	// 1315 add     sp, 6 ;~ 01A2:0AD7
cs=0x1a2;eip=0x000ada; 	T(MOV(ax, 0x0D));	// 1316 mov     ax, 0Dh ;~ 01A2:0ADA
cs=0x1a2;eip=0x000add; 	X(PUSH(ax));	// 1317 push    ax ;~ 01A2:0ADD
cs=0x1a2;eip=0x000ade; 	T(MOV(ax, 8));	// 1318 mov     ax, 8 ;~ 01A2:0ADE
cs=0x1a2;eip=0x000ae1; 	X(PUSH(ax));	// 1319 push    ax ;~ 01A2:0AE1
cs=0x1a2;eip=0x000ae2; 	T(MOV(ax, 0x34C));	// 1320 mov     ax, 34Ch ;~ 01A2:0AE2
cs=0x1a2;eip=0x000ae5; 	X(PUSH(ax));	// 1321 push    ax ;~ 01A2:0AE5
cs=0x1a2;eip=0x000ae6; 	R(CALLF(sub_1e0f2,0));	// 1322 call    sub_1E0F2 ;~ 01A2:0AE6
cs=0x1a2;eip=0x000aeb; 	T(ADD(sp, 6));	// 1323 add     sp, 6 ;~ 01A2:0AEB
cs=0x1a2;eip=0x000aee; 	T(MOV(ax, 0x0E));	// 1324 mov     ax, 0Eh ;~ 01A2:0AEE
cs=0x1a2;eip=0x000af1; 	X(PUSH(ax));	// 1325 push    ax ;~ 01A2:0AF1
cs=0x1a2;eip=0x000af2; 	T(MOV(ax, 8));	// 1326 mov     ax, 8 ;~ 01A2:0AF2
cs=0x1a2;eip=0x000af5; 	X(PUSH(ax));	// 1327 push    ax ;~ 01A2:0AF5
cs=0x1a2;eip=0x000af6; 	T(MOV(ax, 0x371));	// 1328 mov     ax, 371h ;~ 01A2:0AF6
cs=0x1a2;eip=0x000af9; 	X(PUSH(ax));	// 1329 push    ax ;~ 01A2:0AF9
cs=0x1a2;eip=0x000afa; 	R(CALLF(sub_1e0f2,0));	// 1330 call    sub_1E0F2 ;~ 01A2:0AFA
cs=0x1a2;eip=0x000aff; 	T(ADD(sp, 6));	// 1331 add     sp, 6 ;~ 01A2:0AFF
cs=0x1a2;eip=0x000b02; 	T(MOV(ax, 0x0F));	// 1332 mov     ax, 0Fh ;~ 01A2:0B02
cs=0x1a2;eip=0x000b05; 	X(PUSH(ax));	// 1333 push    ax ;~ 01A2:0B05
cs=0x1a2;eip=0x000b06; 	T(MOV(ax, 8));	// 1334 mov     ax, 8 ;~ 01A2:0B06
cs=0x1a2;eip=0x000b09; 	X(PUSH(ax));	// 1335 push    ax ;~ 01A2:0B09
cs=0x1a2;eip=0x000b0a; 	T(MOV(ax, 0x397));	// 1336 mov     ax, 397h ;~ 01A2:0B0A
cs=0x1a2;eip=0x000b0d; 	X(PUSH(ax));	// 1337 push    ax ;~ 01A2:0B0D
cs=0x1a2;eip=0x000b0e; 	R(CALLF(sub_1e0f2,0));	// 1338 call    sub_1E0F2 ;~ 01A2:0B0E
cs=0x1a2;eip=0x000b13; 	T(ADD(sp, 6));	// 1339 add     sp, 6 ;~ 01A2:0B13
cs=0x1a2;eip=0x000b16; 	T(MOV(ax, 0x11));	// 1340 mov     ax, 11h ;~ 01A2:0B16
cs=0x1a2;eip=0x000b19; 	X(PUSH(ax));	// 1341 push    ax ;~ 01A2:0B19
cs=0x1a2;eip=0x000b1a; 	T(SUB(ax, ax));	// 1342 sub     ax, ax ;~ 01A2:0B1A
cs=0x1a2;eip=0x000b1c; 	X(PUSH(ax));	// 1343 push    ax ;~ 01A2:0B1C
cs=0x1a2;eip=0x000b1d; 	T(MOV(ax, 0x3B7));	// 1344 mov     ax, 3B7h ;~ 01A2:0B1D
cs=0x1a2;eip=0x000b20; 	X(PUSH(ax));	// 1345 push    ax ;~ 01A2:0B20
cs=0x1a2;eip=0x000b21; 	R(CALLF(sub_1e0f2,0));	// 1346 call    sub_1E0F2 ;~ 01A2:0B21
cs=0x1a2;eip=0x000b26; 	T(ADD(sp, 6));	// 1347 add     sp, 6 ;~ 01A2:0B26
cs=0x1a2;eip=0x000b29; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 1348 mov     ax, [bp+var_6] ;~ 01A2:0B29
cs=0x1a2;eip=0x000b2c; 	X(MOV(word_3a3f4, ax));	// 1349 mov     word_3A3F4, ax ;~ 01A2:0B2C
cs=0x1a2;eip=0x000b2f; 	R(JMP(loc_10b48));	// 1350 jmp     short loc_10B48 ;~ 01A2:0B2F
loc_10b32:
	// 4460 
cs=0x1a2;eip=0x000b32; 	T(CMP(ax, 0x31));	// 1355 cmp     ax, 31h ; '1' ;~ 01A2:0B32
cs=0x1a2;eip=0x000b35; 	R(JL(loc_10b45));	// 1356 jl      short loc_10B45 ;~ 01A2:0B35
cs=0x1a2;eip=0x000b37; 	T(CMP(ax, 0x35));	// 1357 cmp     ax, 35h ; '5' ;~ 01A2:0B37
cs=0x1a2;eip=0x000b3a; 	R(JG(loc_10b45));	// 1358 jg      short loc_10B45 ;~ 01A2:0B3A
cs=0x1a2;eip=0x000b3c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 1359 mov     ax, [bp+var_2] ;~ 01A2:0B3C
cs=0x1a2;eip=0x000b3f; 	T(SUB(ax, 0x31));	// 1360 sub     ax, 31h ; '1' ;~ 01A2:0B3F
cs=0x1a2;eip=0x000b42; 	X(MOV(word_3a3f4, ax));	// 1361 mov     word_3A3F4, ax ;~ 01A2:0B42
loc_10b45:
	// 4461 
cs=0x1a2;eip=0x000b45; 	T(MOV(ax, word_3a3f4));	// 1365 mov     ax, word_3A3F4 ;~ 01A2:0B45
loc_10b48:
	// 4462 
cs=0x1a2;eip=0x000b48; 	T(INC(ax));	// 1368 inc     ax ;~ 01A2:0B48
cs=0x1a2;eip=0x000b49; 	X(PUSH(ax));	// 1369 push    ax ;~ 01A2:0B49
cs=0x1a2;eip=0x000b4a; 	X(PUSH(cs));	// 1370 push    cs ;~ 01A2:0B4A
cs=0x1a2;eip=0x000b4b; 	R(CALL(sub_10d0e,0));	// 1371 call    near ptr sub_10D0E ;~ 01A2:0B4B
cs=0x1a2;eip=0x000b4e; 	T(ADD(sp, 2));	// 1372 add     sp, 2 ;~ 01A2:0B4E
cs=0x1a2;eip=0x000b51; 	R(CALLF(sub_29bc4,0));	// 1373 call    sub_29BC4 ;~ 01A2:0B51
cs=0x1a2;eip=0x000b56; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 1374 mov     [bp+var_2], ax ;~ 01A2:0B56
cs=0x1a2;eip=0x000b59; 	T(CMP(ax, 0x0D));	// 1375 cmp     ax, 0Dh ;~ 01A2:0B59
cs=0x1a2;eip=0x000b5c; 	R(JNZ(loc_10b32));	// 1376 jnz     short loc_10B32 ;~ 01A2:0B5C
cs=0x1a2;eip=0x000b5e; 	T(MOV(ax, word_3a3f4));	// 1377 mov     ax, word_3A3F4 ;~ 01A2:0B5E
cs=0x1a2;eip=0x000b61; 	X(MOV(word_2bed6, ax));	// 1378 mov     word_2BED6, ax ;~ 01A2:0B61
cs=0x1a2;eip=0x000b64; 	T(CMP(ax, 3));	// 1379 cmp     ax, 3 ;~ 01A2:0B64
cs=0x1a2;eip=0x000b67; 	R(JNZ(loc_10b82));	// 1380 jnz     short loc_10B82 ;~ 01A2:0B67
cs=0x1a2;eip=0x000b69; 	X(MOV(word_2bed8, 1));	// 1381 mov     word_2BED8, 1 ;~ 01A2:0B69
cs=0x1a2;eip=0x000b6f; 	T(MOV(ax, 0x13));	// 1382 mov     ax, 13h ;~ 01A2:0B6F
cs=0x1a2;eip=0x000b72; 	X(PUSH(ax));	// 1383 push    ax ;~ 01A2:0B72
cs=0x1a2;eip=0x000b73; 	T(SUB(ax, ax));	// 1384 sub     ax, ax ;~ 01A2:0B73
cs=0x1a2;eip=0x000b75; 	X(PUSH(ax));	// 1385 push    ax ;~ 01A2:0B75
cs=0x1a2;eip=0x000b76; 	T(MOV(ax, 0x3D6));	// 1386 mov     ax, 3D6h ;~ 01A2:0B76
cs=0x1a2;eip=0x000b79; 	X(PUSH(ax));	// 1387 push    ax ;~ 01A2:0B79
cs=0x1a2;eip=0x000b7a; 	R(CALLF(sub_1e0f2,0));	// 1388 call    sub_1E0F2 ;~ 01A2:0B7A
cs=0x1a2;eip=0x000b7f; 	T(ADD(sp, 6));	// 1389 add     sp, 6 ;~ 01A2:0B7F
loc_10b82:
	// 4463 
cs=0x1a2;eip=0x000b82; 	T(MOV(ax, 0x15));	// 1392 mov     ax, 15h ;~ 01A2:0B82
cs=0x1a2;eip=0x000b85; 	X(PUSH(ax));	// 1393 push    ax ;~ 01A2:0B85
cs=0x1a2;eip=0x000b86; 	T(SUB(ax, ax));	// 1394 sub     ax, ax ;~ 01A2:0B86
cs=0x1a2;eip=0x000b88; 	X(PUSH(ax));	// 1395 push    ax ;~ 01A2:0B88
cs=0x1a2;eip=0x000b89; 	T(MOV(ax, 0x40B));	// 1396 mov     ax, 40Bh ;~ 01A2:0B89
cs=0x1a2;eip=0x000b8c; 	X(PUSH(ax));	// 1397 push    ax ;~ 01A2:0B8C
cs=0x1a2;eip=0x000b8d; 	R(CALLF(sub_1e0f2,0));	// 1398 call    sub_1E0F2 ;~ 01A2:0B8D
cs=0x1a2;eip=0x000b92; 	T(ADD(sp, 6));	// 1399 add     sp, 6 ;~ 01A2:0B92
cs=0x1a2;eip=0x000b95; 	X(MOV(word_3a3f4, 0));	// 1400 mov     word_3A3F4, 0 ;~ 01A2:0B95
cs=0x1a2;eip=0x000b9b; 	T(SUB(ax, ax));	// 1401 sub     ax, ax ;~ 01A2:0B9B
cs=0x1a2;eip=0x000b9d; 	X(PUSH(ax));	// 1402 push    ax ;~ 01A2:0B9D
loc_10b9e:
	// 4464 
cs=0x1a2;eip=0x000b9e; 	X(PUSH(cs));	// 1405 push    cs ;~ 01A2:0B9E
cs=0x1a2;eip=0x000b9f; 	R(CALL(sub_10d36,0));	// 1406 call    near ptr sub_10D36 ;~ 01A2:0B9F
cs=0x1a2;eip=0x000ba2; 	T(ADD(sp, 2));	// 1407 add     sp, 2 ;~ 01A2:0BA2
cs=0x1a2;eip=0x000ba5; 	R(CALLF(sub_29bc4,0));	// 1408 call    sub_29BC4 ;~ 01A2:0BA5
cs=0x1a2;eip=0x000baa; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 1409 mov     [bp+var_2], ax ;~ 01A2:0BAA
cs=0x1a2;eip=0x000bad; 	T(CMP(ax, 0x0D));	// 1410 cmp     ax, 0Dh ;~ 01A2:0BAD
cs=0x1a2;eip=0x000bb0; 	R(JZ(loc_10bdc));	// 1411 jz      short loc_10BDC ;~ 01A2:0BB0
cs=0x1a2;eip=0x000bb2; 	T(CMP(ax, 0x4E));	// 1412 cmp     ax, 4Eh ; 'N' ;~ 01A2:0BB2
cs=0x1a2;eip=0x000bb5; 	R(JZ(loc_10bc8));	// 1413 jz      short loc_10BC8 ;~ 01A2:0BB5
cs=0x1a2;eip=0x000bb7; 	T(CMP(ax, 0x59));	// 1414 cmp     ax, 59h ; 'Y' ;~ 01A2:0BB7
cs=0x1a2;eip=0x000bba; 	R(JZ(loc_10bd4));	// 1415 jz      short loc_10BD4 ;~ 01A2:0BBA
cs=0x1a2;eip=0x000bbc; 	T(CMP(ax, 0x6E));	// 1416 cmp     ax, 6Eh ; 'n' ;~ 01A2:0BBC
cs=0x1a2;eip=0x000bbf; 	R(JZ(loc_10bc8));	// 1417 jz      short loc_10BC8 ;~ 01A2:0BBF
cs=0x1a2;eip=0x000bc1; 	T(CMP(ax, 0x79));	// 1418 cmp     ax, 79h ; 'y' ;~ 01A2:0BC1
cs=0x1a2;eip=0x000bc4; 	R(JZ(loc_10bd4));	// 1419 jz      short loc_10BD4 ;~ 01A2:0BC4
cs=0x1a2;eip=0x000bc6; 	R(JMP(loc_10bce));	// 1420 jmp     short loc_10BCE ;~ 01A2:0BC6
loc_10bc8:
	// 4465 
cs=0x1a2;eip=0x000bc8; 	X(MOV(word_3a3f4, 0));	// 1425 mov     word_3A3F4, 0 ;~ 01A2:0BC8
loc_10bce:
	// 4466 
cs=0x1a2;eip=0x000bce; 	X(PUSH(word_3a3f4));	// 1429 push    word_3A3F4 ;~ 01A2:0BCE
cs=0x1a2;eip=0x000bd2; 	R(JMP(loc_10b9e));	// 1430 jmp     short loc_10B9E ;~ 01A2:0BD2
loc_10bd4:
	// 4467 
cs=0x1a2;eip=0x000bd4; 	X(MOV(word_3a3f4, 1));	// 1435 mov     word_3A3F4, 1 ;~ 01A2:0BD4
cs=0x1a2;eip=0x000bda; 	R(JMP(loc_10bce));	// 1436 jmp     short loc_10BCE ;~ 01A2:0BDA
loc_10bdc:
	// 4468 
cs=0x1a2;eip=0x000bdc; 	T(CMP(word_3a3f4, 0));	// 1440 cmp     word_3A3F4, 0 ;~ 01A2:0BDC
cs=0x1a2;eip=0x000be1; 	R(JZ(loc_10c54));	// 1441 jz      short loc_10C54 ;~ 01A2:0BE1
cs=0x1a2;eip=0x000be3; 	T(MOV(ax, 0x436));	// 1442 mov     ax, 436h ;~ 01A2:0BE3
cs=0x1a2;eip=0x000be6; 	X(PUSH(ax));	// 1443 push    ax ;~ 01A2:0BE6
cs=0x1a2;eip=0x000be7; 	T(MOV(ax, 0x43A));	// 1444 mov     ax, 43Ah ;~ 01A2:0BE7
cs=0x1a2;eip=0x000bea; 	X(PUSH(ax));	// 1445 push    ax ;~ 01A2:0BEA
cs=0x1a2;eip=0x000beb; 	R(CALLF(sub_29708,0));	// 1446 call    sub_29708 ;~ 01A2:0BEB
cs=0x1a2;eip=0x000bf0; 	T(ADD(sp, 4));	// 1447 add     sp, 4 ;~ 01A2:0BF0
cs=0x1a2;eip=0x000bf3; 	X(MOV(word_3a3e6, ax));	// 1448 mov     word_3A3E6, ax ;~ 01A2:0BF3
cs=0x1a2;eip=0x000bf6; 	T(OR(ax, ax));	// 1449 or      ax, ax ;~ 01A2:0BF6
cs=0x1a2;eip=0x000bf8; 	R(JZ(loc_10c54));	// 1450 jz      short loc_10C54 ;~ 01A2:0BF8
cs=0x1a2;eip=0x000bfa; 	X(PUSH(ax));	// 1451 push    ax ;~ 01A2:0BFA
cs=0x1a2;eip=0x000bfb; 	T(MOV(ax, 1));	// 1452 mov     ax, 1 ;~ 01A2:0BFB
cs=0x1a2;eip=0x000bfe; 	X(PUSH(ax));	// 1453 push    ax ;~ 01A2:0BFE
cs=0x1a2;eip=0x000bff; 	T(MOV(ax, 2));	// 1454 mov     ax, 2 ;~ 01A2:0BFF
cs=0x1a2;eip=0x000c02; 	X(PUSH(ax));	// 1455 push    ax ;~ 01A2:0C02
cs=0x1a2;eip=0x000c03; 	T(MOV(ax, 0x0E338));	// 1456 mov     ax, 0E338h ;~ 01A2:0C03
cs=0x1a2;eip=0x000c06; 	X(PUSH(ax));	// 1457 push    ax ;~ 01A2:0C06
cs=0x1a2;eip=0x000c07; 	R(CALLF(sub_29926,0));	// 1458 call    sub_29926 ;~ 01A2:0C07
cs=0x1a2;eip=0x000c0c; 	T(ADD(sp, 8));	// 1459 add     sp, 8 ;~ 01A2:0C0C
cs=0x1a2;eip=0x000c0f; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 1460 mov     [bp+var_2], ax ;~ 01A2:0C0F
cs=0x1a2;eip=0x000c12; 	X(PUSH(word_3a3e6));	// 1461 push    word_3A3E6 ;~ 01A2:0C12
cs=0x1a2;eip=0x000c16; 	T(MOV(ax, 1));	// 1462 mov     ax, 1 ;~ 01A2:0C16
cs=0x1a2;eip=0x000c19; 	X(PUSH(ax));	// 1463 push    ax ;~ 01A2:0C19
cs=0x1a2;eip=0x000c1a; 	T(MOV(ax, 2));	// 1464 mov     ax, 2 ;~ 01A2:0C1A
cs=0x1a2;eip=0x000c1d; 	X(PUSH(ax));	// 1465 push    ax ;~ 01A2:0C1D
cs=0x1a2;eip=0x000c1e; 	T(MOV(ax, 0x96));	// 1466 mov     ax, 96h ; '–' ;~ 01A2:0C1E
cs=0x1a2;eip=0x000c21; 	X(PUSH(ax));	// 1467 push    ax ;~ 01A2:0C21
cs=0x1a2;eip=0x000c22; 	R(CALLF(sub_29926,0));	// 1468 call    sub_29926 ;~ 01A2:0C22
cs=0x1a2;eip=0x000c27; 	T(ADD(sp, 8));	// 1469 add     sp, 8 ;~ 01A2:0C27
cs=0x1a2;eip=0x000c2a; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 1470 mov     [bp+var_2], ax ;~ 01A2:0C2A
cs=0x1a2;eip=0x000c2d; 	X(PUSH(word_3a3e6));	// 1471 push    word_3A3E6 ;~ 01A2:0C2D
cs=0x1a2;eip=0x000c31; 	T(MOV(ax, 1));	// 1472 mov     ax, 1 ;~ 01A2:0C31
cs=0x1a2;eip=0x000c34; 	X(PUSH(ax));	// 1473 push    ax ;~ 01A2:0C34
cs=0x1a2;eip=0x000c35; 	T(MOV(ax, 2));	// 1474 mov     ax, 2 ;~ 01A2:0C35
cs=0x1a2;eip=0x000c38; 	X(PUSH(ax));	// 1475 push    ax ;~ 01A2:0C38
cs=0x1a2;eip=0x000c39; 	T(MOV(ax, 0x98));	// 1476 mov     ax, 98h ;~ 01A2:0C39
cs=0x1a2;eip=0x000c3c; 	X(PUSH(ax));	// 1477 push    ax ;~ 01A2:0C3C
cs=0x1a2;eip=0x000c3d; 	R(CALLF(sub_29926,0));	// 1478 call    sub_29926 ;~ 01A2:0C3D
cs=0x1a2;eip=0x000c42; 	T(ADD(sp, 8));	// 1479 add     sp, 8 ;~ 01A2:0C42
cs=0x1a2;eip=0x000c45; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 1480 mov     [bp+var_2], ax ;~ 01A2:0C45
cs=0x1a2;eip=0x000c48; 	X(PUSH(word_3a3e6));	// 1481 push    word_3A3E6 ;~ 01A2:0C48
cs=0x1a2;eip=0x000c4c; 	R(CALLF(sub_29640,0));	// 1482 call    sub_29640 ;~ 01A2:0C4C
cs=0x1a2;eip=0x000c51; 	T(ADD(sp, 2));	// 1483 add     sp, 2 ;~ 01A2:0C51
loc_10c54:
	// 4469 
cs=0x1a2;eip=0x000c54; 	T(MOV(bx, word_3a178));	// 1487 mov     bx, word_3A178 ;~ 01A2:0C54
cs=0x1a2;eip=0x000c58; 	T(MOV(al, *(raddr(ds,bx+0x0EA))));	// 1488 mov     al, [bx+0EAh] ;~ 01A2:0C58
cs=0x1a2;eip=0x000c5c; 	T(SUB(ah, ah));	// 1489 sub     ah, ah ;~ 01A2:0C5C
cs=0x1a2;eip=0x000c5e; 	X(MOV(word_3a178, ax));	// 1490 mov     word_3A178, ax ;~ 01A2:0C5E
loc_10c61:
	// 4470 
cs=0x1a2;eip=0x000c61; 	T(CMP(word_2bed6, 3));	// 1493 cmp     word_2BED6, 3 ;~ 01A2:0C61
cs=0x1a2;eip=0x000c66; 	R(JNZ(loc_10c73));	// 1494 jnz     short loc_10C73 ;~ 01A2:0C66
cs=0x1a2;eip=0x000c68; 	X(MOV(*(db*)(((db*)&word_2becf)), 1));	// 1495 mov     byte ptr word_2BECF, 1 ;~ 01A2:0C68
cs=0x1a2;eip=0x000c6d; 	X(MOV(word_2bed6, 0x81));	// 1496 mov     word_2BED6, 81h ; '' ;~ 01A2:0C6D
loc_10c73:
	// 4471 
cs=0x1a2;eip=0x000c73; 	X(MOV(*(db*)(((db*)&word_2becf)+1), 0));	// 1499 mov     byte ptr word_2BECF+1, 0 ;~ 01A2:0C73
cs=0x1a2;eip=0x000c78; 	X(PUSH(word_3a178));	// 1500 push    word_3A178 ;~ 01A2:0C78
cs=0x1a2;eip=0x000c7c; 	R(CALLF(seg033_proc,m2c::kloc_2905b));	// 1501 call    far ptr loc_2905B ;~ 01A2:0C7C
cs=0x1a2;eip=0x000c81; 	T(ADD(sp, 2));	// 1502 add     sp, 2 ;~ 01A2:0C81
cs=0x1a2;eip=0x000c84; 	T(SUB(ax, ax));	// 1503 sub     ax, ax ;~ 01A2:0C84
cs=0x1a2;eip=0x000c86; 	X(PUSH(ax));	// 1504 push    ax ;~ 01A2:0C86
cs=0x1a2;eip=0x000c87; 	R(CALLF(sub_271ba,0));	// 1505 call    sub_271BA ;~ 01A2:0C87
cs=0x1a2;eip=0x000c8c; 	T(ADD(sp, 2));	// 1506 add     sp, 2 ;~ 01A2:0C8C
cs=0x1a2;eip=0x000c8f; 	T(MOV(ax, 1));	// 1507 mov     ax, 1 ;~ 01A2:0C8F
cs=0x1a2;eip=0x000c92; 	X(PUSH(ax));	// 1508 push    ax ;~ 01A2:0C92
cs=0x1a2;eip=0x000c93; 	R(CALLF(sub_272de,0));	// 1509 call    far ptr sub_272DE ;~ 01A2:0C93
cs=0x1a2;eip=0x000c98; 	T(ADD(sp, 2));	// 1510 add     sp, 2 ;~ 01A2:0C98
cs=0x1a2;eip=0x000c9b; 	X(MOV(word_3a3f4, ax));	// 1511 mov     word_3A3F4, ax ;~ 01A2:0C9B
cs=0x1a2;eip=0x000c9e; 	T(CMP(ax, 8));	// 1512 cmp     ax, 8 ;~ 01A2:0C9E
cs=0x1a2;eip=0x000ca1; 	R(JNZ(loc_10cae));	// 1513 jnz     short loc_10CAE ;~ 01A2:0CA1
cs=0x1a2;eip=0x000ca3; 	T(MOV(ax, 1));	// 1514 mov     ax, 1 ;~ 01A2:0CA3
cs=0x1a2;eip=0x000ca6; 	X(PUSH(ax));	// 1515 push    ax ;~ 01A2:0CA6
cs=0x1a2;eip=0x000ca7; 	X(PUSH(cs));	// 1516 push    cs ;~ 01A2:0CA7
cs=0x1a2;eip=0x000ca8; 	R(CALL(sub_10874,0));	// 1517 call    near ptr sub_10874 ;~ 01A2:0CA8
cs=0x1a2;eip=0x000cab; 	T(ADD(sp, 2));	// 1519 add     sp, 2 ;~ 01A2:0CAB
loc_10cae:
	// 4472 
cs=0x1a2;eip=0x000cae; 	T(MOV(ax, 1));	// 1522 mov     ax, 1 ;~ 01A2:0CAE
cs=0x1a2;eip=0x000cb1; 	X(PUSH(ax));	// 1523 push    ax ;~ 01A2:0CB1
cs=0x1a2;eip=0x000cb2; 	R(CALLF(sub_270e2,0));	// 1524 call    far ptr sub_270E2 ;~ 01A2:0CB2
cs=0x1a2;eip=0x000cb7; 	T(ADD(sp, 2));	// 1525 add     sp, 2 ;~ 01A2:0CB7
cs=0x1a2;eip=0x000cba; 	T(MOV(ax, 1));	// 1526 mov     ax, 1 ;~ 01A2:0CBA
cs=0x1a2;eip=0x000cbd; 	X(PUSH(ax));	// 1527 push    ax ;~ 01A2:0CBD
cs=0x1a2;eip=0x000cbe; 	R(CALLF(sub_2714e,0));	// 1528 call    far ptr sub_2714E ;~ 01A2:0CBE
cs=0x1a2;eip=0x000cc3; 	T(ADD(sp, 2));	// 1529 add     sp, 2 ;~ 01A2:0CC3
cs=0x1a2;eip=0x000cc6; 	R(CALLF(sub_26e57,0));	// 1530 call    sub_26E57 ;~ 01A2:0CC6
cs=0x1a2;eip=0x000ccb; 	X(MOV(word_34f0e, ax));	// 1531 mov     word_34F0E, ax ;~ 01A2:0CCB
cs=0x1a2;eip=0x000cce; 	T(SUB(ax, ax));	// 1532 sub     ax, ax ;~ 01A2:0CCE
cs=0x1a2;eip=0x000cd0; 	X(PUSH(ax));	// 1533 push    ax ;~ 01A2:0CD0
cs=0x1a2;eip=0x000cd1; 	R(CALLF(sub_2714e,0));	// 1534 call    far ptr sub_2714E ;~ 01A2:0CD1
cs=0x1a2;eip=0x000cd6; 	T(ADD(sp, 2));	// 1535 add     sp, 2 ;~ 01A2:0CD6
cs=0x1a2;eip=0x000cd9; 	R(CALLF(sub_26e57,0));	// 1536 call    sub_26E57 ;~ 01A2:0CD9
cs=0x1a2;eip=0x000cde; 	X(MOV(word_34f0c, ax));	// 1537 mov     word_34F0C, ax ;~ 01A2:0CDE
cs=0x1a2;eip=0x000ce1; 	T(MOV(sp, bp));	// 1538 mov     sp, bp ;~ 01A2:0CE1
cs=0x1a2;eip=0x000ce3; 	X(POP(bp));	// 1539 pop     bp ;~ 01A2:0CE3
cs=0x1a2;eip=0x000ce4; 	R(RETF(0));	// 1540 retf ;~ 01A2:0CE4
sub_10ce6:
	// 1550 
#undef var_2
#define var_2 -2
	// 1552 var_2           = byte ptr -2 ;~ 01A2:0CE6
#undef var_1
#define var_1 -1
	// 1553 var_1           = byte ptr -1 ;~ 01A2:0CE6
#undef arg_0
#define arg_0 6
	// 1554 arg_0           = byte ptr  6 ;~ 01A2:0CE6
ret_1a2_ce6:
	// 4473 
cs=0x1a2;eip=0x000ce6; 	X(PUSH(bp));	// 1556 push    bp ;~ 01A2:0CE6
cs=0x1a2;eip=0x000ce7; 	T(MOV(bp, sp));	// 1557 mov     bp, sp ;~ 01A2:0CE7
cs=0x1a2;eip=0x000ce9; 	T(SUB(sp, 2));	// 1558 sub     sp, 2 ;~ 01A2:0CE9
cs=0x1a2;eip=0x000cec; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 1559 mov     al, [bp+arg_0] ;~ 01A2:0CEC
cs=0x1a2;eip=0x000cef; 	T(ADD(al, 0x30));	// 1560 add     al, 30h ; '0' ;~ 01A2:0CEF
cs=0x1a2;eip=0x000cf1; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 1561 mov     [bp+var_2], al ;~ 01A2:0CF1
cs=0x1a2;eip=0x000cf4; 	X(MOV(*(raddr(ss,bp+var_1)), 0));	// 1562 mov     [bp+var_1], 0 ;~ 01A2:0CF4
cs=0x1a2;eip=0x000cf8; 	T(MOV(ax, 8));	// 1563 mov     ax, 8 ;~ 01A2:0CF8
cs=0x1a2;eip=0x000cfb; 	X(PUSH(ax));	// 1564 push    ax ;~ 01A2:0CFB
cs=0x1a2;eip=0x000cfc; 	T(MOV(ax, 0x20));	// 1565 mov     ax, 20h ; ' ' ;~ 01A2:0CFC
cs=0x1a2;eip=0x000cff; 	X(PUSH(ax));	// 1566 push    ax ;~ 01A2:0CFF
cs=0x1a2;eip=0x000d00; 	T(ax = bp+var_2);	// 1567 lea     ax, [bp+var_2] ;~ 01A2:0D00
cs=0x1a2;eip=0x000d03; 	X(PUSH(ax));	// 1568 push    ax ;~ 01A2:0D03
cs=0x1a2;eip=0x000d04; 	R(CALLF(sub_1e0f2,0));	// 1569 call    sub_1E0F2 ;~ 01A2:0D04
cs=0x1a2;eip=0x000d09; 	T(MOV(sp, bp));	// 1570 mov     sp, bp ;~ 01A2:0D09
cs=0x1a2;eip=0x000d0b; 	X(POP(bp));	// 1571 pop     bp ;~ 01A2:0D0B
cs=0x1a2;eip=0x000d0c; 	R(RETF(0));	// 1572 retf ;~ 01A2:0D0C
sub_10d0e:
	// 1582 
#undef var_2
#define var_2 -2
	// 1584 var_2           = byte ptr -2 ;~ 01A2:0D0E
#undef var_1
#define var_1 -1
	// 1585 var_1           = byte ptr -1 ;~ 01A2:0D0E
#undef arg_0
#define arg_0 6
	// 1586 arg_0           = byte ptr  6 ;~ 01A2:0D0E
ret_1a2_d0e:
	// 4474 
cs=0x1a2;eip=0x000d0e; 	X(PUSH(bp));	// 1588 push    bp ;~ 01A2:0D0E
cs=0x1a2;eip=0x000d0f; 	T(MOV(bp, sp));	// 1589 mov     bp, sp ;~ 01A2:0D0F
cs=0x1a2;eip=0x000d11; 	T(SUB(sp, 2));	// 1590 sub     sp, 2 ;~ 01A2:0D11
cs=0x1a2;eip=0x000d14; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 1591 mov     al, [bp+arg_0] ;~ 01A2:0D14
cs=0x1a2;eip=0x000d17; 	T(ADD(al, 0x30));	// 1592 add     al, 30h ; '0' ;~ 01A2:0D17
cs=0x1a2;eip=0x000d19; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 1593 mov     [bp+var_2], al ;~ 01A2:0D19
cs=0x1a2;eip=0x000d1c; 	X(MOV(*(raddr(ss,bp+var_1)), 0));	// 1594 mov     [bp+var_1], 0 ;~ 01A2:0D1C
cs=0x1a2;eip=0x000d20; 	T(MOV(ax, 0x11));	// 1595 mov     ax, 11h ;~ 01A2:0D20
cs=0x1a2;eip=0x000d23; 	X(PUSH(ax));	// 1596 push    ax ;~ 01A2:0D23
cs=0x1a2;eip=0x000d24; 	T(MOV(ax, 0x20));	// 1597 mov     ax, 20h ; ' ' ;~ 01A2:0D24
cs=0x1a2;eip=0x000d27; 	X(PUSH(ax));	// 1598 push    ax ;~ 01A2:0D27
cs=0x1a2;eip=0x000d28; 	T(ax = bp+var_2);	// 1599 lea     ax, [bp+var_2] ;~ 01A2:0D28
cs=0x1a2;eip=0x000d2b; 	X(PUSH(ax));	// 1600 push    ax ;~ 01A2:0D2B
cs=0x1a2;eip=0x000d2c; 	R(CALLF(sub_1e0f2,0));	// 1601 call    sub_1E0F2 ;~ 01A2:0D2C
cs=0x1a2;eip=0x000d31; 	T(MOV(sp, bp));	// 1602 mov     sp, bp ;~ 01A2:0D31
cs=0x1a2;eip=0x000d33; 	X(POP(bp));	// 1603 pop     bp ;~ 01A2:0D33
cs=0x1a2;eip=0x000d34; 	R(RETF(0));	// 1604 retf ;~ 01A2:0D34
sub_10d36:
	// 1614 
#undef arg_0
#define arg_0 6
	// 1616 arg_0           = word ptr  6 ;~ 01A2:0D36
ret_1a2_d36:
	// 4475 
cs=0x1a2;eip=0x000d36; 	X(PUSH(bp));	// 1618 push    bp ;~ 01A2:0D36
cs=0x1a2;eip=0x000d37; 	T(MOV(bp, sp));	// 1619 mov     bp, sp ;~ 01A2:0D37
cs=0x1a2;eip=0x000d39; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 1620 cmp     [bp+arg_0], 0 ;~ 01A2:0D39
cs=0x1a2;eip=0x000d3d; 	R(JNZ(loc_10d4c));	// 1621 jnz     short loc_10D4C ;~ 01A2:0D3D
cs=0x1a2;eip=0x000d3f; 	T(MOV(ax, 0x15));	// 1622 mov     ax, 15h ;~ 01A2:0D3F
cs=0x1a2;eip=0x000d42; 	X(PUSH(ax));	// 1623 push    ax ;~ 01A2:0D42
cs=0x1a2;eip=0x000d43; 	T(MOV(ax, 0x2C));	// 1624 mov     ax, 2Ch ; ',' ;~ 01A2:0D43
cs=0x1a2;eip=0x000d46; 	X(PUSH(ax));	// 1625 push    ax ;~ 01A2:0D46
cs=0x1a2;eip=0x000d47; 	T(MOV(ax, 0x442));	// 1626 mov     ax, 442h ;~ 01A2:0D47
cs=0x1a2;eip=0x000d4a; 	R(JMP(loc_10d57));	// 1627 jmp     short loc_10D57 ;~ 01A2:0D4A
loc_10d4c:
	// 4476 
cs=0x1a2;eip=0x000d4c; 	T(MOV(ax, 0x15));	// 1631 mov     ax, 15h ;~ 01A2:0D4C
cs=0x1a2;eip=0x000d4f; 	X(PUSH(ax));	// 1632 push    ax ;~ 01A2:0D4F
cs=0x1a2;eip=0x000d50; 	T(MOV(ax, 0x2C));	// 1633 mov     ax, 2Ch ; ',' ;~ 01A2:0D50
cs=0x1a2;eip=0x000d53; 	X(PUSH(ax));	// 1634 push    ax ;~ 01A2:0D53
cs=0x1a2;eip=0x000d54; 	T(MOV(ax, 0x444));	// 1635 mov     ax, 444h ;~ 01A2:0D54
loc_10d57:
	// 4477 
cs=0x1a2;eip=0x000d57; 	X(PUSH(ax));	// 1638 push    ax ;~ 01A2:0D57
cs=0x1a2;eip=0x000d58; 	R(CALLF(sub_1e0f2,0));	// 1639 call    sub_1E0F2 ;~ 01A2:0D58
cs=0x1a2;eip=0x000d5d; 	T(ADD(sp, 6));	// 1640 add     sp, 6 ;~ 01A2:0D5D
cs=0x1a2;eip=0x000d60; 	X(POP(bp));	// 1641 pop     bp ;~ 01A2:0D60
cs=0x1a2;eip=0x000d61; 	R(RETF(0));	// 1642 retf ;~ 01A2:0D61
sub_10d62:
	// 1650 
#undef var_6
#define var_6 -6
	// 1653 var_6           = word ptr -6 ;~ 01A2:0D62
#undef var_4
#define var_4 -4
	// 1654 var_4           = word ptr -4 ;~ 01A2:0D62
#undef var_2
#define var_2 -2
	// 1655 var_2           = word ptr -2 ;~ 01A2:0D62
#undef arg_0
#define arg_0 6
	// 1656 arg_0           = word ptr  6 ;~ 01A2:0D62
ret_1a2_d62:
	// 4478 
cs=0x1a2;eip=0x000d62; 	X(PUSH(bp));	// 1658 push    bp ;~ 01A2:0D62
cs=0x1a2;eip=0x000d63; 	T(MOV(bp, sp));	// 1659 mov     bp, sp ;~ 01A2:0D63
cs=0x1a2;eip=0x000d65; 	T(SUB(sp, 6));	// 1660 sub     sp, 6 ;~ 01A2:0D65
cs=0x1a2;eip=0x000d68; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 1661 push    [bp+arg_0] ;~ 01A2:0D68
cs=0x1a2;eip=0x000d6b; 	X(PUSH(cs));	// 1662 push    cs ;~ 01A2:0D6B
cs=0x1a2;eip=0x000d6c; 	R(CALL(sub_1151c,0));	// 1663 call    near ptr sub_1151C ;~ 01A2:0D6C
cs=0x1a2;eip=0x000d6f; 	T(ADD(sp, 2));	// 1664 add     sp, 2 ;~ 01A2:0D6F
cs=0x1a2;eip=0x000d72; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 1665 mov     [bp+var_6], ax ;~ 01A2:0D72
cs=0x1a2;eip=0x000d75; 	T(OR(ax, ax));	// 1666 or      ax, ax ;~ 01A2:0D75
cs=0x1a2;eip=0x000d77; 	R(JNZ(loc_10da8));	// 1667 jnz     short loc_10DA8 ;~ 01A2:0D77
cs=0x1a2;eip=0x000d79; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 1668 push    [bp+arg_0] ;~ 01A2:0D79
cs=0x1a2;eip=0x000d7c; 	R(CALLF(sub_1ca28,0));	// 1669 call    sub_1CA28 ;~ 01A2:0D7C
cs=0x1a2;eip=0x000d81; 	T(ADD(sp, 2));	// 1670 add     sp, 2 ;~ 01A2:0D81
cs=0x1a2;eip=0x000d84; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 1671 mov     [bp+var_6], ax ;~ 01A2:0D84
cs=0x1a2;eip=0x000d87; 	T(CMP(ax, 0x0FFFF));	// 1672 cmp     ax, 0FFFFh ;~ 01A2:0D87
cs=0x1a2;eip=0x000d8a; 	R(JNZ(loc_10d9a));	// 1673 jnz     short loc_10D9A ;~ 01A2:0D8A
cs=0x1a2;eip=0x000d8c; 	T(MOV(ax, 2));	// 1674 mov     ax, 2 ;~ 01A2:0D8C
cs=0x1a2;eip=0x000d8f; 	X(PUSH(ax));	// 1675 push    ax ;~ 01A2:0D8F
cs=0x1a2;eip=0x000d90; 	X(PUSH(cs));	// 1676 push    cs ;~ 01A2:0D90
cs=0x1a2;eip=0x000d91; 	R(CALL(sub_10874,0));	// 1677 call    near ptr sub_10874 ;~ 01A2:0D91
cs=0x1a2;eip=0x000d94; 	T(ADD(sp, 2));	// 1679 add     sp, 2 ;~ 01A2:0D94
cs=0x1a2;eip=0x000d97; 	R(JMP(loc_10daf));	// 1680 jmp     short loc_10DAF ;~ 01A2:0D97
loc_10d9a:
	// 4479 
cs=0x1a2;eip=0x000d9a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 1685 push    [bp+var_6] ;~ 01A2:0D9A
cs=0x1a2;eip=0x000d9d; 	R(CALLF(sub_1ca3a,0));	// 1686 call    sub_1CA3A ;~ 01A2:0D9D
cs=0x1a2;eip=0x000da2; 	T(ADD(sp, 2));	// 1687 add     sp, 2 ;~ 01A2:0DA2
cs=0x1a2;eip=0x000da5; 	R(JMP(loc_10dac));	// 1688 jmp     short loc_10DAC ;~ 01A2:0DA5
loc_10da8:
	// 4480 
cs=0x1a2;eip=0x000da8; 	T(MOV(ax, word_3a6aa));	// 1693 mov     ax, word_3A6AA ;~ 01A2:0DA8
cs=0x1a2;eip=0x000dab; 	T(DEC(ax));	// 1694 dec     ax ;~ 01A2:0DAB
loc_10dac:
	// 4481 
cs=0x1a2;eip=0x000dac; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 1697 mov     [bp+var_2], ax ;~ 01A2:0DAC
loc_10daf:
	// 4482 
cs=0x1a2;eip=0x000daf; 	T(MOV(al, byte_34f30));	// 1700 mov     al, byte_34F30 ;~ 01A2:0DAF
cs=0x1a2;eip=0x000db2; 	T(SUB(ah, ah));	// 1701 sub     ah, ah ;~ 01A2:0DB2
cs=0x1a2;eip=0x000db4; 	T(MOV(cx, ax));	// 1702 mov     cx, ax ;~ 01A2:0DB4
cs=0x1a2;eip=0x000db6; 	T(SHL(ax, 1));	// 1703 shl     ax, 1 ;~ 01A2:0DB6
cs=0x1a2;eip=0x000db8; 	T(ADD(ax, cx));	// 1704 add     ax, cx ;~ 01A2:0DB8
cs=0x1a2;eip=0x000dba; 	T(ADD(ax, 0x0B9A));	// 1705 add     ax, 0B9Ah ;~ 01A2:0DBA
cs=0x1a2;eip=0x000dbd; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 1706 mov     [bp+var_4], ax ;~ 01A2:0DBD
cs=0x1a2;eip=0x000dc0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 1707 push    [bp+var_6] ;~ 01A2:0DC0
cs=0x1a2;eip=0x000dc3; 	T(MOV(ax, 0x150));	// 1708 mov     ax, 150h ;~ 01A2:0DC3
cs=0x1a2;eip=0x000dc6; 	X(PUSH(ax));	// 1709 push    ax ;~ 01A2:0DC6
cs=0x1a2;eip=0x000dc7; 	X(PUSH(ds));	// 1710 push    ds ;~ 01A2:0DC7
cs=0x1a2;eip=0x000dc8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 1711 push    [bp+var_4] ;~ 01A2:0DC8
cs=0x1a2;eip=0x000dcb; 	R(CALLF(sub_1ca60,0));	// 1712 call    sub_1CA60 ;~ 01A2:0DCB
cs=0x1a2;eip=0x000dd0; 	T(ADD(sp, 8));	// 1713 add     sp, 8 ;~ 01A2:0DD0
cs=0x1a2;eip=0x000dd3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 1714 push    [bp+var_6] ;~ 01A2:0DD3
cs=0x1a2;eip=0x000dd6; 	R(CALLF(sub_1ca79,0));	// 1715 call    sub_1CA79 ;~ 01A2:0DD6
cs=0x1a2;eip=0x000ddb; 	T(ADD(sp, 2));	// 1716 add     sp, 2 ;~ 01A2:0DDB
cs=0x1a2;eip=0x000dde; 	T(CMP(word_3a178, 0x13));	// 1717 cmp     word_3A178, 13h ;~ 01A2:0DDE
cs=0x1a2;eip=0x000de3; 	R(JNZ(loc_10df1));	// 1718 jnz     short loc_10DF1 ;~ 01A2:0DE3
cs=0x1a2;eip=0x000de5; 	T(CMP(word_2bec6, 5));	// 1719 cmp     word_2BEC6, 5 ;~ 01A2:0DE5
cs=0x1a2;eip=0x000dea; 	R(JZ(loc_10df1));	// 1720 jz      short loc_10DF1 ;~ 01A2:0DEA
cs=0x1a2;eip=0x000dec; 	R(CALLF(sub_1cdea,0));	// 1721 call    sub_1CDEA ;~ 01A2:0DEC
loc_10df1:
	// 4483 
cs=0x1a2;eip=0x000df1; 	T(MOV(sp, bp));	// 1725 mov     sp, bp ;~ 01A2:0DF1
cs=0x1a2;eip=0x000df3; 	X(POP(bp));	// 1726 pop     bp ;~ 01A2:0DF3
cs=0x1a2;eip=0x000df4; 	R(RETF(0));	// 1727 retf ;~ 01A2:0DF4
sub_10df6:
	// 1737 
#undef var_6
#define var_6 -6
	// 1739 var_6           = word ptr -6 ;~ 01A2:0DF6
#undef var_4
#define var_4 -4
	// 1740 var_4           = word ptr -4 ;~ 01A2:0DF6
#undef var_2
#define var_2 -2
	// 1741 var_2           = word ptr -2 ;~ 01A2:0DF6
#undef arg_0
#define arg_0 6
	// 1742 arg_0           = word ptr  6 ;~ 01A2:0DF6
ret_1a2_df6:
	// 4484 
cs=0x1a2;eip=0x000df6; 	X(PUSH(bp));	// 1744 push    bp ;~ 01A2:0DF6
cs=0x1a2;eip=0x000df7; 	T(MOV(bp, sp));	// 1745 mov     bp, sp ;~ 01A2:0DF7
cs=0x1a2;eip=0x000df9; 	T(SUB(sp, 6));	// 1746 sub     sp, 6 ;~ 01A2:0DF9
cs=0x1a2;eip=0x000dfc; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 1747 push    [bp+arg_0] ;~ 01A2:0DFC
cs=0x1a2;eip=0x000dff; 	X(PUSH(cs));	// 1748 push    cs ;~ 01A2:0DFF
cs=0x1a2;eip=0x000e00; 	R(CALL(sub_1151c,0));	// 1749 call    near ptr sub_1151C ;~ 01A2:0E00
cs=0x1a2;eip=0x000e03; 	T(ADD(sp, 2));	// 1750 add     sp, 2 ;~ 01A2:0E03
cs=0x1a2;eip=0x000e06; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 1751 mov     [bp+var_6], ax ;~ 01A2:0E06
cs=0x1a2;eip=0x000e09; 	T(OR(ax, ax));	// 1752 or      ax, ax ;~ 01A2:0E09
cs=0x1a2;eip=0x000e0b; 	R(JNZ(loc_10e3c));	// 1753 jnz     short loc_10E3C ;~ 01A2:0E0B
cs=0x1a2;eip=0x000e0d; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 1754 push    [bp+arg_0] ;~ 01A2:0E0D
cs=0x1a2;eip=0x000e10; 	R(CALLF(sub_1ca28,0));	// 1755 call    sub_1CA28 ;~ 01A2:0E10
cs=0x1a2;eip=0x000e15; 	T(ADD(sp, 2));	// 1756 add     sp, 2 ;~ 01A2:0E15
cs=0x1a2;eip=0x000e18; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 1757 mov     [bp+var_6], ax ;~ 01A2:0E18
cs=0x1a2;eip=0x000e1b; 	T(CMP(ax, 0x0FFFF));	// 1758 cmp     ax, 0FFFFh ;~ 01A2:0E1B
cs=0x1a2;eip=0x000e1e; 	R(JNZ(loc_10e2e));	// 1759 jnz     short loc_10E2E ;~ 01A2:0E1E
cs=0x1a2;eip=0x000e20; 	T(MOV(ax, 2));	// 1760 mov     ax, 2 ;~ 01A2:0E20
cs=0x1a2;eip=0x000e23; 	X(PUSH(ax));	// 1761 push    ax ;~ 01A2:0E23
cs=0x1a2;eip=0x000e24; 	X(PUSH(cs));	// 1762 push    cs ;~ 01A2:0E24
cs=0x1a2;eip=0x000e25; 	R(CALL(sub_10874,0));	// 1763 call    near ptr sub_10874 ;~ 01A2:0E25
cs=0x1a2;eip=0x000e28; 	T(ADD(sp, 2));	// 1765 add     sp, 2 ;~ 01A2:0E28
cs=0x1a2;eip=0x000e2b; 	R(JMP(loc_10e43));	// 1766 jmp     short loc_10E43 ;~ 01A2:0E2B
loc_10e2e:
	// 4485 
cs=0x1a2;eip=0x000e2e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 1771 push    [bp+var_6] ;~ 01A2:0E2E
cs=0x1a2;eip=0x000e31; 	R(CALLF(sub_1ca3a,0));	// 1772 call    sub_1CA3A ;~ 01A2:0E31
cs=0x1a2;eip=0x000e36; 	T(ADD(sp, 2));	// 1773 add     sp, 2 ;~ 01A2:0E36
cs=0x1a2;eip=0x000e39; 	R(JMP(loc_10e40));	// 1774 jmp     short loc_10E40 ;~ 01A2:0E39
loc_10e3c:
	// 4486 
cs=0x1a2;eip=0x000e3c; 	T(MOV(ax, word_3a6aa));	// 1779 mov     ax, word_3A6AA ;~ 01A2:0E3C
cs=0x1a2;eip=0x000e3f; 	T(DEC(ax));	// 1780 dec     ax ;~ 01A2:0E3F
loc_10e40:
	// 4487 
cs=0x1a2;eip=0x000e40; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 1783 mov     [bp+var_2], ax ;~ 01A2:0E40
loc_10e43:
	// 4488 
cs=0x1a2;eip=0x000e43; 	T(MOV(al, byte_34f30));	// 1786 mov     al, byte_34F30 ;~ 01A2:0E43
cs=0x1a2;eip=0x000e46; 	T(SUB(ah, ah));	// 1787 sub     ah, ah ;~ 01A2:0E46
cs=0x1a2;eip=0x000e48; 	T(MOV(cx, ax));	// 1788 mov     cx, ax ;~ 01A2:0E48
cs=0x1a2;eip=0x000e4a; 	T(SHL(ax, 1));	// 1789 shl     ax, 1 ;~ 01A2:0E4A
cs=0x1a2;eip=0x000e4c; 	T(ADD(ax, cx));	// 1790 add     ax, cx ;~ 01A2:0E4C
cs=0x1a2;eip=0x000e4e; 	T(ADD(ax, 0x0C2A));	// 1791 add     ax, 0C2Ah ;~ 01A2:0E4E
cs=0x1a2;eip=0x000e51; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 1792 mov     [bp+var_4], ax ;~ 01A2:0E51
cs=0x1a2;eip=0x000e54; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 1793 push    [bp+var_6] ;~ 01A2:0E54
cs=0x1a2;eip=0x000e57; 	T(MOV(ax, 0x60));	// 1794 mov     ax, 60h ; '`' ;~ 01A2:0E57
cs=0x1a2;eip=0x000e5a; 	X(PUSH(ax));	// 1795 push    ax ;~ 01A2:0E5A
cs=0x1a2;eip=0x000e5b; 	X(PUSH(ds));	// 1796 push    ds ;~ 01A2:0E5B
cs=0x1a2;eip=0x000e5c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 1797 push    [bp+var_4] ;~ 01A2:0E5C
cs=0x1a2;eip=0x000e5f; 	R(CALLF(sub_1ca60,0));	// 1798 call    sub_1CA60 ;~ 01A2:0E5F
cs=0x1a2;eip=0x000e64; 	T(ADD(sp, 8));	// 1799 add     sp, 8 ;~ 01A2:0E64
cs=0x1a2;eip=0x000e67; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 1800 push    [bp+var_6] ;~ 01A2:0E67
cs=0x1a2;eip=0x000e6a; 	R(CALLF(sub_1ca79,0));	// 1801 call    sub_1CA79 ;~ 01A2:0E6A
cs=0x1a2;eip=0x000e6f; 	T(MOV(sp, bp));	// 1802 mov     sp, bp ;~ 01A2:0E6F
cs=0x1a2;eip=0x000e71; 	X(POP(bp));	// 1803 pop     bp ;~ 01A2:0E71
cs=0x1a2;eip=0x000e72; 	R(RETF(0));	// 1804 retf ;~ 01A2:0E72
sub_10e74:
	// 1814 
#undef var_4
#define var_4 -4
	// 1817 var_4           = word ptr -4 ;~ 01A2:0E74
#undef var_2
#define var_2 -2
	// 1818 var_2           = word ptr -2 ;~ 01A2:0E74
#undef arg_0
#define arg_0 6
	// 1819 arg_0           = word ptr  6 ;~ 01A2:0E74
#undef arg_2
#define arg_2 8
	// 1820 arg_2           = word ptr  8 ;~ 01A2:0E74
ret_1a2_e74:
	// 4489 
cs=0x1a2;eip=0x000e74; 	X(PUSH(bp));	// 1822 push    bp ;~ 01A2:0E74
cs=0x1a2;eip=0x000e75; 	T(MOV(bp, sp));	// 1823 mov     bp, sp ;~ 01A2:0E75
cs=0x1a2;eip=0x000e77; 	T(SUB(sp, 4));	// 1824 sub     sp, 4 ;~ 01A2:0E77
cs=0x1a2;eip=0x000e7a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 1825 push    [bp+arg_0] ;~ 01A2:0E7A
cs=0x1a2;eip=0x000e7d; 	X(PUSH(cs));	// 1826 push    cs ;~ 01A2:0E7D
cs=0x1a2;eip=0x000e7e; 	R(CALL(sub_1151c,0));	// 1827 call    near ptr sub_1151C ;~ 01A2:0E7E
cs=0x1a2;eip=0x000e81; 	T(ADD(sp, 2));	// 1828 add     sp, 2 ;~ 01A2:0E81
cs=0x1a2;eip=0x000e84; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 1829 mov     [bp+var_4], ax ;~ 01A2:0E84
cs=0x1a2;eip=0x000e87; 	T(OR(ax, ax));	// 1830 or      ax, ax ;~ 01A2:0E87
cs=0x1a2;eip=0x000e89; 	R(JNZ(loc_10eba));	// 1831 jnz     short loc_10EBA ;~ 01A2:0E89
cs=0x1a2;eip=0x000e8b; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 1832 push    [bp+arg_0] ;~ 01A2:0E8B
cs=0x1a2;eip=0x000e8e; 	R(CALLF(sub_1ca28,0));	// 1833 call    sub_1CA28 ;~ 01A2:0E8E
cs=0x1a2;eip=0x000e93; 	T(ADD(sp, 2));	// 1834 add     sp, 2 ;~ 01A2:0E93
cs=0x1a2;eip=0x000e96; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 1835 mov     [bp+var_4], ax ;~ 01A2:0E96
cs=0x1a2;eip=0x000e99; 	T(CMP(ax, 0x0FFFF));	// 1836 cmp     ax, 0FFFFh ;~ 01A2:0E99
cs=0x1a2;eip=0x000e9c; 	R(JNZ(loc_10eac));	// 1837 jnz     short loc_10EAC ;~ 01A2:0E9C
cs=0x1a2;eip=0x000e9e; 	T(MOV(ax, 2));	// 1838 mov     ax, 2 ;~ 01A2:0E9E
cs=0x1a2;eip=0x000ea1; 	X(PUSH(ax));	// 1839 push    ax ;~ 01A2:0EA1
cs=0x1a2;eip=0x000ea2; 	X(PUSH(cs));	// 1840 push    cs ;~ 01A2:0EA2
cs=0x1a2;eip=0x000ea3; 	R(CALL(sub_10874,0));	// 1841 call    near ptr sub_10874 ;~ 01A2:0EA3
cs=0x1a2;eip=0x000ea6; 	T(ADD(sp, 2));	// 1843 add     sp, 2 ;~ 01A2:0EA6
cs=0x1a2;eip=0x000ea9; 	R(JMP(loc_10ec1));	// 1844 jmp     short loc_10EC1 ;~ 01A2:0EA9
loc_10eac:
	// 4490 
cs=0x1a2;eip=0x000eac; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 1849 push    [bp+var_4] ;~ 01A2:0EAC
cs=0x1a2;eip=0x000eaf; 	R(CALLF(sub_1ca3a,0));	// 1850 call    sub_1CA3A ;~ 01A2:0EAF
cs=0x1a2;eip=0x000eb4; 	T(ADD(sp, 2));	// 1851 add     sp, 2 ;~ 01A2:0EB4
cs=0x1a2;eip=0x000eb7; 	R(JMP(loc_10ebe));	// 1852 jmp     short loc_10EBE ;~ 01A2:0EB7
loc_10eba:
	// 4491 
cs=0x1a2;eip=0x000eba; 	T(MOV(ax, word_3a6aa));	// 1857 mov     ax, word_3A6AA ;~ 01A2:0EBA
cs=0x1a2;eip=0x000ebd; 	T(DEC(ax));	// 1858 dec     ax ;~ 01A2:0EBD
loc_10ebe:
	// 4492 
cs=0x1a2;eip=0x000ebe; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 1861 mov     [bp+var_2], ax ;~ 01A2:0EBE
loc_10ec1:
	// 4493 
cs=0x1a2;eip=0x000ec1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 1864 push    [bp+var_4] ;~ 01A2:0EC1
cs=0x1a2;eip=0x000ec4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 1865 push    [bp+var_2] ;~ 01A2:0EC4
cs=0x1a2;eip=0x000ec7; 	X(PUSH(ds));	// 1866 push    ds ;~ 01A2:0EC7
cs=0x1a2;eip=0x000ec8; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 1867 push    [bp+arg_2] ;~ 01A2:0EC8
cs=0x1a2;eip=0x000ecb; 	R(CALLF(sub_1ca60,0));	// 1868 call    sub_1CA60 ;~ 01A2:0ECB
cs=0x1a2;eip=0x000ed0; 	T(ADD(sp, 8));	// 1869 add     sp, 8 ;~ 01A2:0ED0
cs=0x1a2;eip=0x000ed3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 1870 push    [bp+var_4] ;~ 01A2:0ED3
cs=0x1a2;eip=0x000ed6; 	R(CALLF(sub_1ca79,0));	// 1871 call    sub_1CA79 ;~ 01A2:0ED6
cs=0x1a2;eip=0x000edb; 	T(MOV(sp, bp));	// 1872 mov     sp, bp ;~ 01A2:0EDB
cs=0x1a2;eip=0x000edd; 	X(POP(bp));	// 1873 pop     bp ;~ 01A2:0EDD
cs=0x1a2;eip=0x000ede; 	R(RETF(0));	// 1874 retf ;~ 01A2:0EDE
sub_10ee0:
	// 1884 
#undef var_4
#define var_4 -4
	// 1887 var_4           = word ptr -4 ;~ 01A2:0EE0
#undef var_2
#define var_2 -2
	// 1888 var_2           = word ptr -2 ;~ 01A2:0EE0
#undef arg_0
#define arg_0 6
	// 1889 arg_0           = word ptr  6 ;~ 01A2:0EE0
#undef arg_2
#define arg_2 8
	// 1890 arg_2           = word ptr  8 ;~ 01A2:0EE0
#undef arg_4
#define arg_4 0x0A
	// 1891 arg_4           = word ptr  0Ah ;~ 01A2:0EE0
ret_1a2_ee0:
	// 4494 
cs=0x1a2;eip=0x000ee0; 	X(PUSH(bp));	// 1893 push    bp ;~ 01A2:0EE0
cs=0x1a2;eip=0x000ee1; 	T(MOV(bp, sp));	// 1894 mov     bp, sp ;~ 01A2:0EE1
cs=0x1a2;eip=0x000ee3; 	T(SUB(sp, 4));	// 1895 sub     sp, 4 ;~ 01A2:0EE3
cs=0x1a2;eip=0x000ee6; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 1896 push    [bp+arg_0] ;~ 01A2:0EE6
cs=0x1a2;eip=0x000ee9; 	X(PUSH(cs));	// 1897 push    cs ;~ 01A2:0EE9
cs=0x1a2;eip=0x000eea; 	R(CALL(sub_1151c,0));	// 1898 call    near ptr sub_1151C ;~ 01A2:0EEA
cs=0x1a2;eip=0x000eed; 	T(ADD(sp, 2));	// 1899 add     sp, 2 ;~ 01A2:0EED
cs=0x1a2;eip=0x000ef0; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 1900 mov     [bp+var_4], ax ;~ 01A2:0EF0
cs=0x1a2;eip=0x000ef3; 	T(OR(ax, ax));	// 1901 or      ax, ax ;~ 01A2:0EF3
cs=0x1a2;eip=0x000ef5; 	R(JNZ(loc_10f26));	// 1902 jnz     short loc_10F26 ;~ 01A2:0EF5
cs=0x1a2;eip=0x000ef7; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 1903 push    [bp+arg_0] ;~ 01A2:0EF7
cs=0x1a2;eip=0x000efa; 	R(CALLF(sub_1ca28,0));	// 1904 call    sub_1CA28 ;~ 01A2:0EFA
cs=0x1a2;eip=0x000eff; 	T(ADD(sp, 2));	// 1905 add     sp, 2 ;~ 01A2:0EFF
cs=0x1a2;eip=0x000f02; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 1906 mov     [bp+var_4], ax ;~ 01A2:0F02
cs=0x1a2;eip=0x000f05; 	T(CMP(ax, 0x0FFFF));	// 1907 cmp     ax, 0FFFFh ;~ 01A2:0F05
cs=0x1a2;eip=0x000f08; 	R(JNZ(loc_10f18));	// 1908 jnz     short loc_10F18 ;~ 01A2:0F08
cs=0x1a2;eip=0x000f0a; 	T(MOV(ax, 2));	// 1909 mov     ax, 2 ;~ 01A2:0F0A
cs=0x1a2;eip=0x000f0d; 	X(PUSH(ax));	// 1910 push    ax ;~ 01A2:0F0D
cs=0x1a2;eip=0x000f0e; 	X(PUSH(cs));	// 1911 push    cs ;~ 01A2:0F0E
cs=0x1a2;eip=0x000f0f; 	R(CALL(sub_10874,0));	// 1912 call    near ptr sub_10874 ;~ 01A2:0F0F
cs=0x1a2;eip=0x000f12; 	T(ADD(sp, 2));	// 1914 add     sp, 2 ;~ 01A2:0F12
cs=0x1a2;eip=0x000f15; 	R(JMP(loc_10f2d));	// 1915 jmp     short loc_10F2D ;~ 01A2:0F15
loc_10f18:
	// 4495 
cs=0x1a2;eip=0x000f18; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 1920 push    [bp+var_4] ;~ 01A2:0F18
cs=0x1a2;eip=0x000f1b; 	R(CALLF(sub_1ca3a,0));	// 1921 call    sub_1CA3A ;~ 01A2:0F1B
cs=0x1a2;eip=0x000f20; 	T(ADD(sp, 2));	// 1922 add     sp, 2 ;~ 01A2:0F20
cs=0x1a2;eip=0x000f23; 	R(JMP(loc_10f2a));	// 1923 jmp     short loc_10F2A ;~ 01A2:0F23
loc_10f26:
	// 4496 
cs=0x1a2;eip=0x000f26; 	T(MOV(ax, word_3a6aa));	// 1928 mov     ax, word_3A6AA ;~ 01A2:0F26
cs=0x1a2;eip=0x000f29; 	T(DEC(ax));	// 1929 dec     ax ;~ 01A2:0F29
loc_10f2a:
	// 4497 
cs=0x1a2;eip=0x000f2a; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 1932 mov     [bp+var_2], ax ;~ 01A2:0F2A
loc_10f2d:
	// 4498 
cs=0x1a2;eip=0x000f2d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 1935 mov     ax, [bp+var_2] ;~ 01A2:0F2D
cs=0x1a2;eip=0x000f30; 	X(MOV(word_3a6aa, ax));	// 1936 mov     word_3A6AA, ax ;~ 01A2:0F30
cs=0x1a2;eip=0x000f33; 	X(MOV(word_3a6ac, 0));	// 1937 mov     word_3A6AC, 0 ;~ 01A2:0F33
cs=0x1a2;eip=0x000f39; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 1938 push    [bp+var_4] ;~ 01A2:0F39
cs=0x1a2;eip=0x000f3c; 	X(PUSH(ax));	// 1939 push    ax ;~ 01A2:0F3C
cs=0x1a2;eip=0x000f3d; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 1940 push    [bp+arg_4] ;~ 01A2:0F3D
cs=0x1a2;eip=0x000f40; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 1941 push    [bp+arg_2] ;~ 01A2:0F40
cs=0x1a2;eip=0x000f43; 	R(CALLF(sub_1ca60,0));	// 1942 call    sub_1CA60 ;~ 01A2:0F43
cs=0x1a2;eip=0x000f48; 	T(ADD(sp, 8));	// 1943 add     sp, 8 ;~ 01A2:0F48
cs=0x1a2;eip=0x000f4b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 1944 push    [bp+var_4] ;~ 01A2:0F4B
cs=0x1a2;eip=0x000f4e; 	R(CALLF(sub_1ca79,0));	// 1945 call    sub_1CA79 ;~ 01A2:0F4E
cs=0x1a2;eip=0x000f53; 	T(MOV(sp, bp));	// 1946 mov     sp, bp ;~ 01A2:0F53
cs=0x1a2;eip=0x000f55; 	X(POP(bp));	// 1947 pop     bp ;~ 01A2:0F55
cs=0x1a2;eip=0x000f56; 	R(RETF(0));	// 1948 retf ;~ 01A2:0F56
sub_10f58:
	// 1957 
cs=0x1a2;eip=0x000f58; 	T(MOV(ax, 0x4E6D));	// 1959 mov     ax, 4E6Dh ;~ 01A2:0F58
ret_1a2_f5b:
	// 4499 
cs=0x1a2;eip=0x000f5b; 	T(MOV(dx, 0x41C6));	// 1960 mov     dx, 41C6h ;~ 01A2:0F5B
cs=0x1a2;eip=0x000f5e; 	X(PUSH(dx));	// 1961 push    dx ;~ 01A2:0F5E
cs=0x1a2;eip=0x000f5f; 	X(PUSH(ax));	// 1962 push    ax ;~ 01A2:0F5F
cs=0x1a2;eip=0x000f60; 	X(PUSH(word_2bf14));	// 1963 push    word_2BF14 ;~ 01A2:0F60
cs=0x1a2;eip=0x000f64; 	X(PUSH(word_2bf12));	// 1964 push    word_2BF12 ;~ 01A2:0F64
cs=0x1a2;eip=0x000f68; 	R(CALLF(sub_29d98,0));	// 1965 call    sub_29D98 ;~ 01A2:0F68
cs=0x1a2;eip=0x000f6d; 	T(ADD(ax, 0x3039));	// 1966 add     ax, 3039h ;~ 01A2:0F6D
cs=0x1a2;eip=0x000f70; 	T(ADC(dx, 0));	// 1967 adc     dx, 0 ;~ 01A2:0F70
cs=0x1a2;eip=0x000f73; 	X(MOV(word_2bf12, ax));	// 1968 mov     word_2BF12, ax ;~ 01A2:0F73
cs=0x1a2;eip=0x000f76; 	X(MOV(word_2bf14, dx));	// 1969 mov     word_2BF14, dx ;~ 01A2:0F76
cs=0x1a2;eip=0x000f7a; 	T(MOV(ax, dx));	// 1970 mov     ax, dx ;~ 01A2:0F7A
cs=0x1a2;eip=0x000f7c; 	T(AND(ah, 0x7F));	// 1971 and     ah, 7Fh ;~ 01A2:0F7C
cs=0x1a2;eip=0x000f7f; 	R(RETF(0));	// 1972 retf ;~ 01A2:0F7F
sub_10f80:
	// 1980 
#undef var_6
#define var_6 -6
	// 1983 var_6           = byte ptr -6 ;~ 01A2:0F80
#undef var_2
#define var_2 -2
	// 1984 var_2           = word ptr -2 ;~ 01A2:0F80
#undef arg_0
#define arg_0 6
	// 1985 arg_0           = word ptr  6 ;~ 01A2:0F80
ret_1a2_f80:
	// 4500 
cs=0x1a2;eip=0x000f80; 	X(PUSH(bp));	// 1987 push    bp ;~ 01A2:0F80
cs=0x1a2;eip=0x000f81; 	T(MOV(bp, sp));	// 1988 mov     bp, sp ;~ 01A2:0F81
cs=0x1a2;eip=0x000f83; 	T(SUB(sp, 8));	// 1989 sub     sp, 8 ;~ 01A2:0F83
cs=0x1a2;eip=0x000f86; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 1990 mov     bx, [bp+arg_0] ;~ 01A2:0F86
cs=0x1a2;eip=0x000f89; 	X(MOV(*(dw*)(raddr(ds,bx)), 0));	// 1991 mov     word ptr [bx], 0 ;~ 01A2:0F89
cs=0x1a2;eip=0x000f8d; 	T(CMP(byte_2becd, 0));	// 1992 cmp     byte_2BECD, 0 ;~ 01A2:0F8D
cs=0x1a2;eip=0x000f92; 	R(JZ(loc_10fa0));	// 1993 jz      short loc_10FA0 ;~ 01A2:0F92
cs=0x1a2;eip=0x000f94; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 1994 push    [bp+arg_0] ;~ 01A2:0F94
cs=0x1a2;eip=0x000f97; 	R(CALLF(sub_1ab4a,0));	// 1995 call    sub_1AB4A ;~ 01A2:0F97
cs=0x1a2;eip=0x000f9c; 	R(JMP(loc_111b2));	// 1996 jmp     loc_111B2 ;~ 01A2:0F9C
loc_10fa0:
	// 4501 
cs=0x1a2;eip=0x000fa0; 	T(CMP(byte_34f9b, 0));	// 2001 cmp     byte_34F9B, 0 ;~ 01A2:0FA0
cs=0x1a2;eip=0x000fa5; 	R(JZ(loc_10fb5));	// 2002 jz      short loc_10FB5 ;~ 01A2:0FA5
cs=0x1a2;eip=0x000fa7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 2003 mov     bx, [bp+arg_0] ;~ 01A2:0FA7
cs=0x1a2;eip=0x000faa; 	T(MOV(al, byte_34f9b));	// 2004 mov     al, byte_34F9B ;~ 01A2:0FAA
cs=0x1a2;eip=0x000fad; 	T(SUB(ah, ah));	// 2005 sub     ah, ah ;~ 01A2:0FAD
cs=0x1a2;eip=0x000faf; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 2006 mov     [bx], ax ;~ 01A2:0FAF
cs=0x1a2;eip=0x000fb1; 	X(MOV(byte_34f9b, ah));	// 2007 mov     byte_34F9B, ah ;~ 01A2:0FB1
loc_10fb5:
	// 4502 
cs=0x1a2;eip=0x000fb5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 2010 mov     bx, [bp+arg_0] ;~ 01A2:0FB5
cs=0x1a2;eip=0x000fb8; 	T(MOV(al, *(raddr(ds,bx))));	// 2011 mov     al, [bx] ;~ 01A2:0FB8
cs=0x1a2;eip=0x000fba; 	X(MOV(*(raddr(ss,bp+var_6)), al));	// 2012 mov     [bp+var_6], al ;~ 01A2:0FBA
cs=0x1a2;eip=0x000fbd; 	T(OR(al, al));	// 2013 or      al, al ;~ 01A2:0FBD
cs=0x1a2;eip=0x000fbf; 	R(JNZ(loc_10fd0));	// 2014 jnz     short loc_10FD0 ;~ 01A2:0FBF
cs=0x1a2;eip=0x000fc1; 	X(PUSH(bx));	// 2015 push    bx ;~ 01A2:0FC1
cs=0x1a2;eip=0x000fc2; 	X(PUSH(cs));	// 2016 push    cs ;~ 01A2:0FC2
cs=0x1a2;eip=0x000fc3; 	R(CALL(sub_11e44,0));	// 2017 call    near ptr sub_11E44 ;~ 01A2:0FC3
cs=0x1a2;eip=0x000fc6; 	T(ADD(sp, 2));	// 2018 add     sp, 2 ;~ 01A2:0FC6
cs=0x1a2;eip=0x000fc9; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 2019 mov     [bp+var_2], ax ;~ 01A2:0FC9
cs=0x1a2;eip=0x000fcc; 	R(JMP(loc_111b5));	// 2020 jmp     loc_111B5 ;~ 01A2:0FCC
loc_10fd0:
	// 4503 
cs=0x1a2;eip=0x000fd0; 	T(CMP(*(raddr(ss,bp+var_6)), 0x80));	// 2025 cmp     [bp+var_6], 80h ; '€' ;~ 01A2:0FD0
cs=0x1a2;eip=0x000fd4; 	R(JNZ(loc_1101b));	// 2026 jnz     short loc_1101B ;~ 01A2:0FD4
cs=0x1a2;eip=0x000fd6; 	T(CMP(word_2bec6, 5));	// 2027 cmp     word_2BEC6, 5 ;~ 01A2:0FD6
cs=0x1a2;eip=0x000fdb; 	R(JNZ(loc_11004));	// 2028 jnz     short loc_11004 ;~ 01A2:0FDB
cs=0x1a2;eip=0x000fdd; 	T(CMP(byte_352f2, 0));	// 2029 cmp     byte_352F2, 0 ;~ 01A2:0FDD
cs=0x1a2;eip=0x000fe2; 	R(JNZ(loc_1100f));	// 2030 jnz     short loc_1100F ;~ 01A2:0FE2
cs=0x1a2;eip=0x000fe4; 	T(MOV(ax, 0x26));	// 2031 mov     ax, 26h ; '&' ;~ 01A2:0FE4
cs=0x1a2;eip=0x000fe7; 	X(PUSH(ax));	// 2032 push    ax ;~ 01A2:0FE7
cs=0x1a2;eip=0x000fe8; 	X(PUSH(cs));	// 2033 push    cs ;~ 01A2:0FE8
cs=0x1a2;eip=0x000fe9; 	R(CALL(sub_1179c,0));	// 2034 call    near ptr sub_1179C ;~ 01A2:0FE9
cs=0x1a2;eip=0x000fec; 	T(ADD(sp, 2));	// 2035 add     sp, 2 ;~ 01A2:0FEC
cs=0x1a2;eip=0x000fef; 	T(CMP(byte_3a3a0, 0));	// 2036 cmp     byte_3A3A0, 0 ;~ 01A2:0FEF
cs=0x1a2;eip=0x000ff4; 	R(JZ(loc_1100f));	// 2037 jz      short loc_1100F ;~ 01A2:0FF4
cs=0x1a2;eip=0x000ff6; 	X(MOV(word_2beca, 3));	// 2038 mov     word_2BECA, 3 ;~ 01A2:0FF6
cs=0x1a2;eip=0x000ffc; 	T(MOV(al, byte_2c94b));	// 2039 mov     al, byte_2C94B ;~ 01A2:0FFC
cs=0x1a2;eip=0x000fff; 	X(MOV(byte_2c94a, al));	// 2040 mov     byte_2C94A, al ;~ 01A2:0FFF
cs=0x1a2;eip=0x001002; 	R(JMP(loc_1100f));	// 2041 jmp     short loc_1100F ;~ 01A2:1002
loc_11004:
	// 4504 
cs=0x1a2;eip=0x001004; 	T(MOV(ax, 0x12));	// 2045 mov     ax, 12h ;~ 01A2:1004
cs=0x1a2;eip=0x001007; 	X(PUSH(ax));	// 2046 push    ax ;~ 01A2:1007
cs=0x1a2;eip=0x001008; 	X(PUSH(cs));	// 2047 push    cs ;~ 01A2:1008
cs=0x1a2;eip=0x001009; 	R(CALL(sub_1179c,0));	// 2048 call    near ptr sub_1179C ;~ 01A2:1009
cs=0x1a2;eip=0x00100c; 	T(ADD(sp, 2));	// 2049 add     sp, 2 ;~ 01A2:100C
loc_1100f:
	// 4505 
cs=0x1a2;eip=0x00100f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 2053 mov     bx, [bp+arg_0] ;~ 01A2:100F
cs=0x1a2;eip=0x001012; 	T(SUB(al, al));	// 2054 sub     al, al ;~ 01A2:1012
cs=0x1a2;eip=0x001014; 	X(MOV(*(raddr(ss,bp+var_6)), al));	// 2055 mov     [bp+var_6], al ;~ 01A2:1014
cs=0x1a2;eip=0x001017; 	T(SUB(ah, ah));	// 2056 sub     ah, ah ;~ 01A2:1017
cs=0x1a2;eip=0x001019; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 2057 mov     [bx], ax ;~ 01A2:1019
loc_1101b:
	// 4506 
cs=0x1a2;eip=0x00101b; 	T(CMP(*(raddr(ss,bp+var_6)), 0x14));	// 2060 cmp     [bp+var_6], 14h ;~ 01A2:101B
cs=0x1a2;eip=0x00101f; 	R(JNZ(loc_1103e));	// 2061 jnz     short loc_1103E ;~ 01A2:101F
cs=0x1a2;eip=0x001021; 	X(MOV(word_2bed2, 1));	// 2062 mov     word_2BED2, 1 ;~ 01A2:1021
cs=0x1a2;eip=0x001027; 	T(MOV(ax, 5));	// 2063 mov     ax, 5 ;~ 01A2:1027
cs=0x1a2;eip=0x00102a; 	X(PUSH(ax));	// 2064 push    ax ;~ 01A2:102A
cs=0x1a2;eip=0x00102b; 	X(PUSH(cs));	// 2065 push    cs ;~ 01A2:102B
cs=0x1a2;eip=0x00102c; 	R(CALL(sub_1179c,0));	// 2066 call    near ptr sub_1179C ;~ 01A2:102C
cs=0x1a2;eip=0x00102f; 	T(ADD(sp, 2));	// 2067 add     sp, 2 ;~ 01A2:102F
cs=0x1a2;eip=0x001032; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 2068 mov     bx, [bp+arg_0] ;~ 01A2:1032
cs=0x1a2;eip=0x001035; 	T(SUB(al, al));	// 2069 sub     al, al ;~ 01A2:1035
cs=0x1a2;eip=0x001037; 	X(MOV(*(raddr(ss,bp+var_6)), al));	// 2070 mov     [bp+var_6], al ;~ 01A2:1037
cs=0x1a2;eip=0x00103a; 	T(SUB(ah, ah));	// 2071 sub     ah, ah ;~ 01A2:103A
cs=0x1a2;eip=0x00103c; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 2072 mov     [bx], ax ;~ 01A2:103C
loc_1103e:
	// 4507 
cs=0x1a2;eip=0x00103e; 	T(CMP(*(raddr(ss,bp+var_6)), 0x15));	// 2075 cmp     [bp+var_6], 15h ;~ 01A2:103E
cs=0x1a2;eip=0x001042; 	R(JNZ(loc_11065));	// 2076 jnz     short loc_11065 ;~ 01A2:1042
cs=0x1a2;eip=0x001044; 	T(SUB(al, al));	// 2077 sub     al, al ;~ 01A2:1044
cs=0x1a2;eip=0x001046; 	X(MOV(byte_352bb, al));	// 2078 mov     byte_352BB, al ;~ 01A2:1046
cs=0x1a2;eip=0x001049; 	T(SUB(ah, ah));	// 2079 sub     ah, ah ;~ 01A2:1049
cs=0x1a2;eip=0x00104b; 	X(MOV(word_2bed2, ax));	// 2080 mov     word_2BED2, ax ;~ 01A2:104B
cs=0x1a2;eip=0x00104e; 	T(MOV(ax, 6));	// 2081 mov     ax, 6 ;~ 01A2:104E
cs=0x1a2;eip=0x001051; 	X(PUSH(ax));	// 2082 push    ax ;~ 01A2:1051
cs=0x1a2;eip=0x001052; 	X(PUSH(cs));	// 2083 push    cs ;~ 01A2:1052
cs=0x1a2;eip=0x001053; 	R(CALL(sub_1179c,0));	// 2084 call    near ptr sub_1179C ;~ 01A2:1053
cs=0x1a2;eip=0x001056; 	T(ADD(sp, 2));	// 2085 add     sp, 2 ;~ 01A2:1056
cs=0x1a2;eip=0x001059; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 2086 mov     bx, [bp+arg_0] ;~ 01A2:1059
cs=0x1a2;eip=0x00105c; 	T(SUB(al, al));	// 2087 sub     al, al ;~ 01A2:105C
cs=0x1a2;eip=0x00105e; 	X(MOV(*(raddr(ss,bp+var_6)), al));	// 2088 mov     [bp+var_6], al ;~ 01A2:105E
cs=0x1a2;eip=0x001061; 	T(SUB(ah, ah));	// 2089 sub     ah, ah ;~ 01A2:1061
cs=0x1a2;eip=0x001063; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 2090 mov     [bx], ax ;~ 01A2:1063
loc_11065:
	// 4508 
cs=0x1a2;eip=0x001065; 	T(CMP(*(raddr(ss,bp+var_6)), 0x17));	// 2093 cmp     [bp+var_6], 17h ;~ 01A2:1065
cs=0x1a2;eip=0x001069; 	R(JNZ(loc_11087));	// 2094 jnz     short loc_11087 ;~ 01A2:1069
cs=0x1a2;eip=0x00106b; 	X(MOV(byte_2bed4, 1));	// 2095 mov     byte_2BED4, 1 ;~ 01A2:106B
cs=0x1a2;eip=0x001070; 	T(MOV(ax, 0x2F));	// 2096 mov     ax, 2Fh ; '/' ;~ 01A2:1070
cs=0x1a2;eip=0x001073; 	X(PUSH(ax));	// 2097 push    ax ;~ 01A2:1073
cs=0x1a2;eip=0x001074; 	X(PUSH(cs));	// 2098 push    cs ;~ 01A2:1074
cs=0x1a2;eip=0x001075; 	R(CALL(sub_1179c,0));	// 2099 call    near ptr sub_1179C ;~ 01A2:1075
cs=0x1a2;eip=0x001078; 	T(ADD(sp, 2));	// 2100 add     sp, 2 ;~ 01A2:1078
cs=0x1a2;eip=0x00107b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 2101 mov     bx, [bp+arg_0] ;~ 01A2:107B
cs=0x1a2;eip=0x00107e; 	T(SUB(al, al));	// 2102 sub     al, al ;~ 01A2:107E
cs=0x1a2;eip=0x001080; 	X(MOV(*(raddr(ss,bp+var_6)), al));	// 2103 mov     [bp+var_6], al ;~ 01A2:1080
cs=0x1a2;eip=0x001083; 	T(SUB(ah, ah));	// 2104 sub     ah, ah ;~ 01A2:1083
cs=0x1a2;eip=0x001085; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 2105 mov     [bx], ax ;~ 01A2:1085
loc_11087:
	// 4509 
cs=0x1a2;eip=0x001087; 	T(CMP(*(raddr(ss,bp+var_6)), 0x18));	// 2108 cmp     [bp+var_6], 18h ;~ 01A2:1087
cs=0x1a2;eip=0x00108b; 	R(JNZ(loc_110a9));	// 2109 jnz     short loc_110A9 ;~ 01A2:108B
cs=0x1a2;eip=0x00108d; 	X(MOV(byte_2bed4, 0));	// 2110 mov     byte_2BED4, 0 ;~ 01A2:108D
cs=0x1a2;eip=0x001092; 	T(MOV(ax, 0x30));	// 2111 mov     ax, 30h ; '0' ;~ 01A2:1092
cs=0x1a2;eip=0x001095; 	X(PUSH(ax));	// 2112 push    ax ;~ 01A2:1095
cs=0x1a2;eip=0x001096; 	X(PUSH(cs));	// 2113 push    cs ;~ 01A2:1096
cs=0x1a2;eip=0x001097; 	R(CALL(sub_1179c,0));	// 2114 call    near ptr sub_1179C ;~ 01A2:1097
cs=0x1a2;eip=0x00109a; 	T(ADD(sp, 2));	// 2115 add     sp, 2 ;~ 01A2:109A
cs=0x1a2;eip=0x00109d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 2116 mov     bx, [bp+arg_0] ;~ 01A2:109D
cs=0x1a2;eip=0x0010a0; 	T(SUB(al, al));	// 2117 sub     al, al ;~ 01A2:10A0
cs=0x1a2;eip=0x0010a2; 	X(MOV(*(raddr(ss,bp+var_6)), al));	// 2118 mov     [bp+var_6], al ;~ 01A2:10A2
cs=0x1a2;eip=0x0010a5; 	T(SUB(ah, ah));	// 2119 sub     ah, ah ;~ 01A2:10A5
cs=0x1a2;eip=0x0010a7; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 2120 mov     [bx], ax ;~ 01A2:10A7
loc_110a9:
	// 4510 
cs=0x1a2;eip=0x0010a9; 	T(CMP(*(raddr(ss,bp+var_6)), 0x11));	// 2123 cmp     [bp+var_6], 11h ;~ 01A2:10A9
cs=0x1a2;eip=0x0010ad; 	R(JNZ(loc_110ee));	// 2124 jnz     short loc_110EE ;~ 01A2:10AD
cs=0x1a2;eip=0x0010af; 	X(XOR(byte_2bece, 1));	// 2125 xor     byte_2BECE, 1 ;~ 01A2:10AF
cs=0x1a2;eip=0x0010b4; 	T(CMP(byte_2bece, 1));	// 2126 cmp     byte_2BECE, 1 ;~ 01A2:10B4
cs=0x1a2;eip=0x0010b9; 	R(JNZ(loc_110c6));	// 2127 jnz     short loc_110C6 ;~ 01A2:10B9
cs=0x1a2;eip=0x0010bb; 	T(SUB(ax, ax));	// 2128 sub     ax, ax ;~ 01A2:10BB
cs=0x1a2;eip=0x0010bd; 	X(PUSH(ax));	// 2129 push    ax ;~ 01A2:10BD
cs=0x1a2;eip=0x0010be; 	R(CALLF(sub_2ad94,0));	// 2130 call    sub_2AD94 ;~ 01A2:10BE
cs=0x1a2;eip=0x0010c3; 	R(JMP(loc_110d1));	// 2131 jmp     short loc_110D1 ;~ 01A2:10C3
loc_110c6:
	// 4511 
cs=0x1a2;eip=0x0010c6; 	T(MOV(al, byte_3750c));	// 2136 mov     al, byte_3750C ;~ 01A2:10C6
cs=0x1a2;eip=0x0010c9; 	T(SUB(ah, ah));	// 2137 sub     ah, ah ;~ 01A2:10C9
cs=0x1a2;eip=0x0010cb; 	X(PUSH(ax));	// 2138 push    ax ;~ 01A2:10CB
cs=0x1a2;eip=0x0010cc; 	R(CALLF(sub_13c62,0));	// 2139 call    sub_13C62 ;~ 01A2:10CC
loc_110d1:
	// 4512 
cs=0x1a2;eip=0x0010d1; 	T(ADD(sp, 2));	// 2142 add     sp, 2 ;~ 01A2:10D1
cs=0x1a2;eip=0x0010d4; 	T(MOV(al, byte_2bece));	// 2143 mov     al, byte_2BECE ;~ 01A2:10D4
cs=0x1a2;eip=0x0010d7; 	T(SUB(ah, ah));	// 2144 sub     ah, ah ;~ 01A2:10D7
cs=0x1a2;eip=0x0010d9; 	T(INC(ax));	// 2145 inc     ax ;~ 01A2:10D9
cs=0x1a2;eip=0x0010da; 	X(PUSH(ax));	// 2146 push    ax ;~ 01A2:10DA
cs=0x1a2;eip=0x0010db; 	X(PUSH(cs));	// 2147 push    cs ;~ 01A2:10DB
cs=0x1a2;eip=0x0010dc; 	R(CALL(sub_1179c,0));	// 2148 call    near ptr sub_1179C ;~ 01A2:10DC
cs=0x1a2;eip=0x0010df; 	T(ADD(sp, 2));	// 2149 add     sp, 2 ;~ 01A2:10DF
cs=0x1a2;eip=0x0010e2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 2150 mov     bx, [bp+arg_0] ;~ 01A2:10E2
cs=0x1a2;eip=0x0010e5; 	T(SUB(al, al));	// 2151 sub     al, al ;~ 01A2:10E5
cs=0x1a2;eip=0x0010e7; 	X(MOV(*(raddr(ss,bp+var_6)), al));	// 2152 mov     [bp+var_6], al ;~ 01A2:10E7
cs=0x1a2;eip=0x0010ea; 	T(SUB(ah, ah));	// 2153 sub     ah, ah ;~ 01A2:10EA
cs=0x1a2;eip=0x0010ec; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 2154 mov     [bx], ax ;~ 01A2:10EC
loc_110ee:
	// 4513 
cs=0x1a2;eip=0x0010ee; 	T(CMP(*(raddr(ss,bp+var_6)), 0x16));	// 2157 cmp     [bp+var_6], 16h ;~ 01A2:10EE
cs=0x1a2;eip=0x0010f2; 	R(JNZ(loc_11115));	// 2158 jnz     short loc_11115 ;~ 01A2:10F2
cs=0x1a2;eip=0x0010f4; 	X(XOR(byte_38740, 1));	// 2159 xor     byte_38740, 1 ;~ 01A2:10F4
cs=0x1a2;eip=0x0010f9; 	T(MOV(al, byte_38740));	// 2160 mov     al, byte_38740 ;~ 01A2:10F9
cs=0x1a2;eip=0x0010fc; 	T(SUB(ah, ah));	// 2161 sub     ah, ah ;~ 01A2:10FC
cs=0x1a2;eip=0x0010fe; 	T(ADD(ax, 0x29));	// 2162 add     ax, 29h ; ')' ;~ 01A2:10FE
cs=0x1a2;eip=0x001101; 	X(PUSH(ax));	// 2163 push    ax ;~ 01A2:1101
cs=0x1a2;eip=0x001102; 	X(PUSH(cs));	// 2164 push    cs ;~ 01A2:1102
cs=0x1a2;eip=0x001103; 	R(CALL(sub_1179c,0));	// 2165 call    near ptr sub_1179C ;~ 01A2:1103
cs=0x1a2;eip=0x001106; 	T(ADD(sp, 2));	// 2166 add     sp, 2 ;~ 01A2:1106
cs=0x1a2;eip=0x001109; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 2167 mov     bx, [bp+arg_0] ;~ 01A2:1109
cs=0x1a2;eip=0x00110c; 	T(SUB(al, al));	// 2168 sub     al, al ;~ 01A2:110C
cs=0x1a2;eip=0x00110e; 	X(MOV(*(raddr(ss,bp+var_6)), al));	// 2169 mov     [bp+var_6], al ;~ 01A2:110E
cs=0x1a2;eip=0x001111; 	T(SUB(ah, ah));	// 2170 sub     ah, ah ;~ 01A2:1111
cs=0x1a2;eip=0x001113; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 2171 mov     [bx], ax ;~ 01A2:1113
loc_11115:
	// 4514 
cs=0x1a2;eip=0x001115; 	T(CMP(*(raddr(ss,bp+var_6)), 0x13));	// 2174 cmp     [bp+var_6], 13h ;~ 01A2:1115
cs=0x1a2;eip=0x001119; 	R(JNZ(loc_1118a));	// 2175 jnz     short loc_1118A ;~ 01A2:1119
cs=0x1a2;eip=0x00111b; 	X(XOR(*(db*)(((db*)&word_2becf)), 1));	// 2176 xor     byte ptr word_2BECF, 1 ;~ 01A2:111B
cs=0x1a2;eip=0x001120; 	T(CMP(*(db*)(((db*)&word_2becf)), 1));	// 2177 cmp     byte ptr word_2BECF, 1 ;~ 01A2:1120
cs=0x1a2;eip=0x001125; 	R(JNZ(loc_1114e));	// 2178 jnz     short loc_1114E ;~ 01A2:1125
cs=0x1a2;eip=0x001127; 	T(SUB(ax, ax));	// 2179 sub     ax, ax ;~ 01A2:1127
cs=0x1a2;eip=0x001129; 	X(PUSH(ax));	// 2180 push    ax ;~ 01A2:1129
cs=0x1a2;eip=0x00112a; 	R(CALLF(sub_1d2d0,0));	// 2181 call    sub_1D2D0 ;~ 01A2:112A
cs=0x1a2;eip=0x00112f; 	T(ADD(sp, 2));	// 2182 add     sp, 2 ;~ 01A2:112F
cs=0x1a2;eip=0x001132; 	T(CMP(word_2bed6, 0));	// 2183 cmp     word_2BED6, 0 ;~ 01A2:1132
cs=0x1a2;eip=0x001137; 	R(JNZ(loc_1116e));	// 2184 jnz     short loc_1116E ;~ 01A2:1137
cs=0x1a2;eip=0x001139; 	T(CMP(word_2bec6, 5));	// 2185 cmp     word_2BEC6, 5 ;~ 01A2:1139
cs=0x1a2;eip=0x00113e; 	R(JNZ(loc_1116e));	// 2186 jnz     short loc_1116E ;~ 01A2:113E
cs=0x1a2;eip=0x001140; 	T(MOV(al, byte_3750c));	// 2187 mov     al, byte_3750C ;~ 01A2:1140
cs=0x1a2;eip=0x001143; 	T(SUB(ah, ah));	// 2188 sub     ah, ah ;~ 01A2:1143
cs=0x1a2;eip=0x001145; 	X(PUSH(ax));	// 2189 push    ax ;~ 01A2:1145
cs=0x1a2;eip=0x001146; 	R(CALLF(sub_13c62,0));	// 2190 call    sub_13C62 ;~ 01A2:1146
cs=0x1a2;eip=0x00114b; 	R(JMP(loc_1116b));	// 2191 jmp     short loc_1116B ;~ 01A2:114B
loc_1114e:
	// 4515 
cs=0x1a2;eip=0x00114e; 	T(CMP(word_2bed6, 0));	// 2196 cmp     word_2BED6, 0 ;~ 01A2:114E
cs=0x1a2;eip=0x001153; 	R(JNZ(loc_1116e));	// 2197 jnz     short loc_1116E ;~ 01A2:1153
cs=0x1a2;eip=0x001155; 	T(CMP(word_2bec6, 5));	// 2198 cmp     word_2BEC6, 5 ;~ 01A2:1155
cs=0x1a2;eip=0x00115a; 	R(JNZ(loc_1116e));	// 2199 jnz     short loc_1116E ;~ 01A2:115A
cs=0x1a2;eip=0x00115c; 	T(CMP(byte_2bece, 0));	// 2200 cmp     byte_2BECE, 0 ;~ 01A2:115C
cs=0x1a2;eip=0x001161; 	R(JNZ(loc_1116e));	// 2201 jnz     short loc_1116E ;~ 01A2:1161
cs=0x1a2;eip=0x001163; 	T(SUB(ax, ax));	// 2202 sub     ax, ax ;~ 01A2:1163
cs=0x1a2;eip=0x001165; 	X(PUSH(ax));	// 2203 push    ax ;~ 01A2:1165
cs=0x1a2;eip=0x001166; 	R(CALLF(sub_2ad94,0));	// 2204 call    sub_2AD94 ;~ 01A2:1166
loc_1116b:
	// 4516 
cs=0x1a2;eip=0x00116b; 	T(ADD(sp, 2));	// 2207 add     sp, 2 ;~ 01A2:116B
loc_1116e:
	// 4517 
cs=0x1a2;eip=0x00116e; 	T(MOV(al, *(db*)(((db*)&word_2becf))));	// 2211 mov     al, byte ptr word_2BECF ;~ 01A2:116E
cs=0x1a2;eip=0x001171; 	T(SUB(ah, ah));	// 2212 sub     ah, ah ;~ 01A2:1171
cs=0x1a2;eip=0x001173; 	T(ADD(ax, 3));	// 2213 add     ax, 3 ;~ 01A2:1173
cs=0x1a2;eip=0x001176; 	X(PUSH(ax));	// 2214 push    ax ;~ 01A2:1176
cs=0x1a2;eip=0x001177; 	X(PUSH(cs));	// 2215 push    cs ;~ 01A2:1177
cs=0x1a2;eip=0x001178; 	R(CALL(sub_1179c,0));	// 2216 call    near ptr sub_1179C ;~ 01A2:1178
cs=0x1a2;eip=0x00117b; 	T(ADD(sp, 2));	// 2217 add     sp, 2 ;~ 01A2:117B
cs=0x1a2;eip=0x00117e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 2218 mov     bx, [bp+arg_0] ;~ 01A2:117E
cs=0x1a2;eip=0x001181; 	T(SUB(al, al));	// 2219 sub     al, al ;~ 01A2:1181
cs=0x1a2;eip=0x001183; 	X(MOV(*(raddr(ss,bp+var_6)), al));	// 2220 mov     [bp+var_6], al ;~ 01A2:1183
cs=0x1a2;eip=0x001186; 	T(SUB(ah, ah));	// 2221 sub     ah, ah ;~ 01A2:1186
cs=0x1a2;eip=0x001188; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 2222 mov     [bx], ax ;~ 01A2:1188
loc_1118a:
	// 4518 
cs=0x1a2;eip=0x00118a; 	T(CMP(*(raddr(ss,bp+var_6)), 0x12));	// 2225 cmp     [bp+var_6], 12h ;~ 01A2:118A
cs=0x1a2;eip=0x00118e; 	R(JNZ(loc_111b5));	// 2226 jnz     short loc_111B5 ;~ 01A2:118E
cs=0x1a2;eip=0x001190; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 2227 mov     bx, [bp+arg_0] ;~ 01A2:1190
cs=0x1a2;eip=0x001193; 	T(SUB(al, al));	// 2228 sub     al, al ;~ 01A2:1193
cs=0x1a2;eip=0x001195; 	X(MOV(*(raddr(ss,bp+var_6)), al));	// 2229 mov     [bp+var_6], al ;~ 01A2:1195
cs=0x1a2;eip=0x001198; 	T(SUB(ah, ah));	// 2230 sub     ah, ah ;~ 01A2:1198
cs=0x1a2;eip=0x00119a; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 2231 mov     [bx], ax ;~ 01A2:119A
cs=0x1a2;eip=0x00119c; 	T(MOV(ax, 0x11));	// 2232 mov     ax, 11h ;~ 01A2:119C
cs=0x1a2;eip=0x00119f; 	X(PUSH(ax));	// 2233 push    ax ;~ 01A2:119F
cs=0x1a2;eip=0x0011a0; 	X(PUSH(cs));	// 2234 push    cs ;~ 01A2:11A0
cs=0x1a2;eip=0x0011a1; 	R(CALL(sub_1179c,0));	// 2235 call    near ptr sub_1179C ;~ 01A2:11A1
cs=0x1a2;eip=0x0011a4; 	T(ADD(sp, 2));	// 2236 add     sp, 2 ;~ 01A2:11A4
cs=0x1a2;eip=0x0011a7; 	T(MOV(al, byte_3750c));	// 2237 mov     al, byte_3750C ;~ 01A2:11A7
cs=0x1a2;eip=0x0011aa; 	T(SUB(ah, ah));	// 2238 sub     ah, ah ;~ 01A2:11AA
cs=0x1a2;eip=0x0011ac; 	X(PUSH(ax));	// 2239 push    ax ;~ 01A2:11AC
cs=0x1a2;eip=0x0011ad; 	R(CALLF(sub_13c62,0));	// 2240 call    sub_13C62 ;~ 01A2:11AD
loc_111b2:
	// 4519 
cs=0x1a2;eip=0x0011b2; 	T(ADD(sp, 2));	// 2243 add     sp, 2 ;~ 01A2:11B2
loc_111b5:
	// 4520 
cs=0x1a2;eip=0x0011b5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 2247 mov     bx, [bp+arg_0] ;~ 01A2:11B5
cs=0x1a2;eip=0x0011b8; 	X(MOV(*(raddr(ds,bx+1)), 0));	// 2248 mov     byte ptr [bx+1], 0 ;~ 01A2:11B8
cs=0x1a2;eip=0x0011bc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 2249 mov     bx, [bp+arg_0] ;~ 01A2:11BC
cs=0x1a2;eip=0x0011bf; 	T(MOV(al, *(raddr(ds,bx))));	// 2250 mov     al, [bx] ;~ 01A2:11BF
cs=0x1a2;eip=0x0011c1; 	X(MOV(byte_39ecc, al));	// 2251 mov     byte_39ECC, al ;~ 01A2:11C1
cs=0x1a2;eip=0x0011c4; 	T(OR(al, al));	// 2252 or      al, al ;~ 01A2:11C4
cs=0x1a2;eip=0x0011c6; 	R(JZ(loc_111cd));	// 2253 jz      short loc_111CD ;~ 01A2:11C6
cs=0x1a2;eip=0x0011c8; 	X(MOV(byte_2becc, 1));	// 2254 mov     byte_2BECC, 1 ;~ 01A2:11C8
loc_111cd:
	// 4521 
cs=0x1a2;eip=0x0011cd; 	T(MOV(sp, bp));	// 2257 mov     sp, bp ;~ 01A2:11CD
cs=0x1a2;eip=0x0011cf; 	X(POP(bp));	// 2258 pop     bp ;~ 01A2:11CF
cs=0x1a2;eip=0x0011d0; 	R(RETF(0));	// 2259 retf ;~ 01A2:11D0
sub_111d2:
	// 2269 
#undef var_2
#define var_2 -2
	// 2271 var_2           = word ptr -2 ;~ 01A2:11D2
ret_1a2_11d2:
	// 4522 
cs=0x1a2;eip=0x0011d2; 	X(PUSH(bp));	// 2273 push    bp ;~ 01A2:11D2
cs=0x1a2;eip=0x0011d3; 	T(MOV(bp, sp));	// 2274 mov     bp, sp ;~ 01A2:11D3
cs=0x1a2;eip=0x0011d5; 	T(SUB(sp, 2));	// 2275 sub     sp, 2 ;~ 01A2:11D5
cs=0x1a2;eip=0x0011d8; 	T(MOV(ax, 0x57B0));	// 2276 mov     ax, 57B0h ;~ 01A2:11D8
cs=0x1a2;eip=0x0011db; 	X(PUSH(ax));	// 2277 push    ax ;~ 01A2:11DB
cs=0x1a2;eip=0x0011dc; 	R(CALLF(sub_29a81,0));	// 2278 call    sub_29A81 ;~ 01A2:11DC
cs=0x1a2;eip=0x0011e1; 	T(ADD(sp, 2));	// 2279 add     sp, 2 ;~ 01A2:11E1
cs=0x1a2;eip=0x0011e4; 	X(MOV(word_3a3f8, ax));	// 2280 mov     word_3A3F8, ax ;~ 01A2:11E4
cs=0x1a2;eip=0x0011e7; 	X(MOV(word_3a3fa, dx));	// 2281 mov     word_3A3FA, dx ;~ 01A2:11E7
cs=0x1a2;eip=0x0011eb; 	T(OR(dx, ax));	// 2282 or      dx, ax ;~ 01A2:11EB
cs=0x1a2;eip=0x0011ed; 	R(JNZ(loc_111fa));	// 2283 jnz     short loc_111FA ;~ 01A2:11ED
cs=0x1a2;eip=0x0011ef; 	T(MOV(ax, 1));	// 2284 mov     ax, 1 ;~ 01A2:11EF
cs=0x1a2;eip=0x0011f2; 	X(PUSH(ax));	// 2285 push    ax ;~ 01A2:11F2
cs=0x1a2;eip=0x0011f3; 	X(PUSH(cs));	// 2286 push    cs ;~ 01A2:11F3
cs=0x1a2;eip=0x0011f4; 	R(CALL(sub_10874,0));	// 2287 call    near ptr sub_10874 ;~ 01A2:11F4
cs=0x1a2;eip=0x0011f7; 	T(ADD(sp, 2));	// 2289 add     sp, 2 ;~ 01A2:11F7
loc_111fa:
	// 4523 
cs=0x1a2;eip=0x0011fa; 	T(MOV(ax, word_3a3f8));	// 2292 mov     ax, word_3A3F8 ;~ 01A2:11FA
cs=0x1a2;eip=0x0011fd; 	T(MOV(dx, word_3a3fa));	// 2293 mov     dx, word_3A3FA ;~ 01A2:11FD
cs=0x1a2;eip=0x001201; 	T(ADD(ax, 0x3E80));	// 2294 add     ax, 3E80h ;~ 01A2:1201
cs=0x1a2;eip=0x001204; 	X(MOV(word_38cf8, ax));	// 2295 mov     word_38CF8, ax ;~ 01A2:1204
cs=0x1a2;eip=0x001207; 	X(MOV(word_38cfa, dx));	// 2296 mov     word_38CFA, dx ;~ 01A2:1207
cs=0x1a2;eip=0x00120b; 	T(ADD(ax, 0x0C80));	// 2297 add     ax, 0C80h ;~ 01A2:120B
cs=0x1a2;eip=0x00120e; 	X(MOV(word_38ace, ax));	// 2298 mov     word_38ACE, ax ;~ 01A2:120E
cs=0x1a2;eip=0x001211; 	X(MOV(word_38ad0, dx));	// 2299 mov     word_38AD0, dx ;~ 01A2:1211
cs=0x1a2;eip=0x001215; 	T(ADD(ax, 0x0C80));	// 2300 add     ax, 0C80h ;~ 01A2:1215
cs=0x1a2;eip=0x001218; 	X(MOV(word_3a3f0, ax));	// 2301 mov     word_3A3F0, ax ;~ 01A2:1218
cs=0x1a2;eip=0x00121b; 	X(MOV(word_3a3f2, dx));	// 2302 mov     word_3A3F2, dx ;~ 01A2:121B
cs=0x1a2;eip=0x00121f; 	T(MOV(ax, 0x0D010));	// 2303 mov     ax, 0D010h ;~ 01A2:121F
cs=0x1a2;eip=0x001222; 	X(PUSH(ax));	// 2304 push    ax ;~ 01A2:1222
cs=0x1a2;eip=0x001223; 	R(CALLF(sub_29a81,0));	// 2305 call    sub_29A81 ;~ 01A2:1223
cs=0x1a2;eip=0x001228; 	T(ADD(sp, 2));	// 2306 add     sp, 2 ;~ 01A2:1228
cs=0x1a2;eip=0x00122b; 	X(MOV(word_3a37c, ax));	// 2307 mov     word_3A37C, ax ;~ 01A2:122B
cs=0x1a2;eip=0x00122e; 	X(MOV(word_3a37e, dx));	// 2308 mov     word_3A37E, dx ;~ 01A2:122E
cs=0x1a2;eip=0x001232; 	T(OR(dx, ax));	// 2309 or      dx, ax ;~ 01A2:1232
cs=0x1a2;eip=0x001234; 	R(JNZ(loc_11241));	// 2310 jnz     short loc_11241 ;~ 01A2:1234
cs=0x1a2;eip=0x001236; 	T(MOV(ax, 1));	// 2311 mov     ax, 1 ;~ 01A2:1236
cs=0x1a2;eip=0x001239; 	X(PUSH(ax));	// 2312 push    ax ;~ 01A2:1239
cs=0x1a2;eip=0x00123a; 	X(PUSH(cs));	// 2313 push    cs ;~ 01A2:123A
cs=0x1a2;eip=0x00123b; 	R(CALL(sub_10874,0));	// 2314 call    near ptr sub_10874 ;~ 01A2:123B
cs=0x1a2;eip=0x00123e; 	T(ADD(sp, 2));	// 2316 add     sp, 2 ;~ 01A2:123E
loc_11241:
	// 4524 
cs=0x1a2;eip=0x001241; 	T(MOV(ax, 0x0F7E4));	// 2319 mov     ax, 0F7E4h ;~ 01A2:1241
cs=0x1a2;eip=0x001244; 	X(PUSH(ax));	// 2320 push    ax ;~ 01A2:1244
cs=0x1a2;eip=0x001245; 	R(CALLF(sub_29a81,0));	// 2321 call    sub_29A81 ;~ 01A2:1245
cs=0x1a2;eip=0x00124a; 	T(ADD(sp, 2));	// 2322 add     sp, 2 ;~ 01A2:124A
cs=0x1a2;eip=0x00124d; 	X(MOV(word_3a620, ax));	// 2323 mov     word_3A620, ax ;~ 01A2:124D
cs=0x1a2;eip=0x001250; 	X(MOV(word_3a622, dx));	// 2324 mov     word_3A622, dx ;~ 01A2:1250
cs=0x1a2;eip=0x001254; 	T(OR(dx, ax));	// 2325 or      dx, ax ;~ 01A2:1254
cs=0x1a2;eip=0x001256; 	R(JNZ(loc_11263));	// 2326 jnz     short loc_11263 ;~ 01A2:1256
cs=0x1a2;eip=0x001258; 	T(MOV(ax, 1));	// 2327 mov     ax, 1 ;~ 01A2:1258
cs=0x1a2;eip=0x00125b; 	X(PUSH(ax));	// 2328 push    ax ;~ 01A2:125B
cs=0x1a2;eip=0x00125c; 	X(PUSH(cs));	// 2329 push    cs ;~ 01A2:125C
cs=0x1a2;eip=0x00125d; 	R(CALL(sub_10874,0));	// 2330 call    near ptr sub_10874 ;~ 01A2:125D
cs=0x1a2;eip=0x001260; 	T(ADD(sp, 2));	// 2332 add     sp, 2 ;~ 01A2:1260
loc_11263:
	// 4525 
cs=0x1a2;eip=0x001263; 	T(MOV(ax, 0x0FDE8));	// 2335 mov     ax, 0FDE8h ;~ 01A2:1263
cs=0x1a2;eip=0x001266; 	X(PUSH(ax));	// 2336 push    ax ;~ 01A2:1266
cs=0x1a2;eip=0x001267; 	R(CALLF(sub_29a81,0));	// 2337 call    sub_29A81 ;~ 01A2:1267
cs=0x1a2;eip=0x00126c; 	T(ADD(sp, 2));	// 2338 add     sp, 2 ;~ 01A2:126C
cs=0x1a2;eip=0x00126f; 	X(MOV(word_3a5b0, ax));	// 2339 mov     word_3A5B0, ax ;~ 01A2:126F
cs=0x1a2;eip=0x001272; 	X(MOV(word_3a5b2, dx));	// 2340 mov     word_3A5B2, dx ;~ 01A2:1272
cs=0x1a2;eip=0x001276; 	T(OR(dx, ax));	// 2341 or      dx, ax ;~ 01A2:1276
cs=0x1a2;eip=0x001278; 	R(JNZ(loc_11285));	// 2342 jnz     short loc_11285 ;~ 01A2:1278
cs=0x1a2;eip=0x00127a; 	T(MOV(ax, 1));	// 2343 mov     ax, 1 ;~ 01A2:127A
cs=0x1a2;eip=0x00127d; 	X(PUSH(ax));	// 2344 push    ax ;~ 01A2:127D
cs=0x1a2;eip=0x00127e; 	X(PUSH(cs));	// 2345 push    cs ;~ 01A2:127E
cs=0x1a2;eip=0x00127f; 	R(CALL(sub_10874,0));	// 2346 call    near ptr sub_10874 ;~ 01A2:127F
cs=0x1a2;eip=0x001282; 	T(ADD(sp, 2));	// 2348 add     sp, 2 ;~ 01A2:1282
loc_11285:
	// 4526 
cs=0x1a2;eip=0x001285; 	T(MOV(ax, word_3a5b0));	// 2351 mov     ax, word_3A5B0 ;~ 01A2:1285
cs=0x1a2;eip=0x001288; 	T(MOV(dx, word_3a5b2));	// 2352 mov     dx, word_3A5B2 ;~ 01A2:1288
cs=0x1a2;eip=0x00128c; 	X(MOV(word_3a618, ax));	// 2353 mov     word_3A618, ax ;~ 01A2:128C
cs=0x1a2;eip=0x00128f; 	X(MOV(word_3a61a, dx));	// 2354 mov     word_3A61A, dx ;~ 01A2:128F
cs=0x1a2;eip=0x001293; 	T(ADD(ax, 0x3520));	// 2355 add     ax, 3520h ;~ 01A2:1293
cs=0x1a2;eip=0x001296; 	X(MOV(word_3a624, ax));	// 2356 mov     word_3A624, ax ;~ 01A2:1296
cs=0x1a2;eip=0x001299; 	X(MOV(word_3a626, dx));	// 2357 mov     word_3A626, dx ;~ 01A2:1299
cs=0x1a2;eip=0x00129d; 	T(ADD(ax, 0x3458));	// 2358 add     ax, 3458h ;~ 01A2:129D
cs=0x1a2;eip=0x0012a0; 	X(MOV(word_3a62a, ax));	// 2359 mov     word_3A62A, ax ;~ 01A2:12A0
cs=0x1a2;eip=0x0012a3; 	X(MOV(word_3a62c, dx));	// 2360 mov     word_3A62C, dx ;~ 01A2:12A3
cs=0x1a2;eip=0x0012a7; 	T(ADD(ax, 0x3264));	// 2361 add     ax, 3264h ;~ 01A2:12A7
cs=0x1a2;eip=0x0012aa; 	X(MOV(word_3a630, ax));	// 2362 mov     word_3A630, ax ;~ 01A2:12AA
cs=0x1a2;eip=0x0012ad; 	X(MOV(word_3a632, dx));	// 2363 mov     word_3A632, dx ;~ 01A2:12AD
cs=0x1a2;eip=0x0012b1; 	T(ADD(ax, 0x1770));	// 2364 add     ax, 1770h ;~ 01A2:12B1
cs=0x1a2;eip=0x0012b4; 	X(MOV(word_3a6a6, ax));	// 2365 mov     word_3A6A6, ax ;~ 01A2:12B4
cs=0x1a2;eip=0x0012b7; 	X(MOV(word_3a6a8, dx));	// 2366 mov     word_3A6A8, dx ;~ 01A2:12B7
cs=0x1a2;eip=0x0012bb; 	T(ADD(ax, 0x1518));	// 2367 add     ax, 1518h ;~ 01A2:12BB
cs=0x1a2;eip=0x0012be; 	X(MOV(word_3a6b0, ax));	// 2368 mov     word_3A6B0, ax ;~ 01A2:12BE
cs=0x1a2;eip=0x0012c1; 	X(MOV(word_3a6b2, dx));	// 2369 mov     word_3A6B2, dx ;~ 01A2:12C1
cs=0x1a2;eip=0x0012c5; 	T(ADD(ax, 0x2710));	// 2370 add     ax, 2710h ;~ 01A2:12C5
cs=0x1a2;eip=0x0012c8; 	X(MOV(word_3a8b4, ax));	// 2371 mov     word_3A8B4, ax ;~ 01A2:12C8
cs=0x1a2;eip=0x0012cb; 	X(MOV(word_3a8b6, dx));	// 2372 mov     word_3A8B6, dx ;~ 01A2:12CB
cs=0x1a2;eip=0x0012cf; 	T(MOV(ax, 0x7810));	// 2373 mov     ax, 7810h ;~ 01A2:12CF
cs=0x1a2;eip=0x0012d2; 	X(PUSH(ax));	// 2374 push    ax ;~ 01A2:12D2
cs=0x1a2;eip=0x0012d3; 	R(CALLF(sub_29a81,0));	// 2375 call    sub_29A81 ;~ 01A2:12D3
cs=0x1a2;eip=0x0012d8; 	T(ADD(sp, 2));	// 2376 add     sp, 2 ;~ 01A2:12D8
cs=0x1a2;eip=0x0012db; 	X(MOV(word_38a9c, ax));	// 2377 mov     word_38A9C, ax ;~ 01A2:12DB
cs=0x1a2;eip=0x0012de; 	X(MOV(word_38a9e, dx));	// 2378 mov     word_38A9E, dx ;~ 01A2:12DE
cs=0x1a2;eip=0x0012e2; 	T(OR(dx, ax));	// 2379 or      dx, ax ;~ 01A2:12E2
cs=0x1a2;eip=0x0012e4; 	R(JNZ(loc_112f1));	// 2380 jnz     short loc_112F1 ;~ 01A2:12E4
cs=0x1a2;eip=0x0012e6; 	T(MOV(ax, 1));	// 2381 mov     ax, 1 ;~ 01A2:12E6
cs=0x1a2;eip=0x0012e9; 	X(PUSH(ax));	// 2382 push    ax ;~ 01A2:12E9
cs=0x1a2;eip=0x0012ea; 	X(PUSH(cs));	// 2383 push    cs ;~ 01A2:12EA
cs=0x1a2;eip=0x0012eb; 	R(CALL(sub_10874,0));	// 2384 call    near ptr sub_10874 ;~ 01A2:12EB
cs=0x1a2;eip=0x0012ee; 	T(ADD(sp, 2));	// 2386 add     sp, 2 ;~ 01A2:12EE
loc_112f1:
	// 4527 
cs=0x1a2;eip=0x0012f1; 	T(MOV(ax, 0x7DF0));	// 2389 mov     ax, 7DF0h ;~ 01A2:12F1
cs=0x1a2;eip=0x0012f4; 	X(PUSH(ax));	// 2390 push    ax ;~ 01A2:12F4
cs=0x1a2;eip=0x0012f5; 	R(CALLF(sub_29a81,0));	// 2391 call    sub_29A81 ;~ 01A2:12F5
cs=0x1a2;eip=0x0012fa; 	T(ADD(sp, 2));	// 2392 add     sp, 2 ;~ 01A2:12FA
cs=0x1a2;eip=0x0012fd; 	X(MOV(word_3a38c, ax));	// 2393 mov     word_3A38C, ax ;~ 01A2:12FD
cs=0x1a2;eip=0x001300; 	X(MOV(word_3a38e, dx));	// 2394 mov     word_3A38E, dx ;~ 01A2:1300
cs=0x1a2;eip=0x001304; 	T(OR(dx, ax));	// 2395 or      dx, ax ;~ 01A2:1304
cs=0x1a2;eip=0x001306; 	R(JNZ(loc_11313));	// 2396 jnz     short loc_11313 ;~ 01A2:1306
cs=0x1a2;eip=0x001308; 	T(MOV(ax, 1));	// 2397 mov     ax, 1 ;~ 01A2:1308
cs=0x1a2;eip=0x00130b; 	X(PUSH(ax));	// 2398 push    ax ;~ 01A2:130B
cs=0x1a2;eip=0x00130c; 	X(PUSH(cs));	// 2399 push    cs ;~ 01A2:130C
cs=0x1a2;eip=0x00130d; 	R(CALL(sub_10874,0));	// 2400 call    near ptr sub_10874 ;~ 01A2:130D
cs=0x1a2;eip=0x001310; 	T(ADD(sp, 2));	// 2402 add     sp, 2 ;~ 01A2:1310
loc_11313:
	// 4528 
cs=0x1a2;eip=0x001313; 	T(MOV(ax, 0x1E6E));	// 2405 mov     ax, 1E6Eh ;~ 01A2:1313
cs=0x1a2;eip=0x001316; 	X(PUSH(ax));	// 2406 push    ax ;~ 01A2:1316
cs=0x1a2;eip=0x001317; 	R(CALLF(sub_29a81,0));	// 2407 call    sub_29A81 ;~ 01A2:1317
cs=0x1a2;eip=0x00131c; 	T(ADD(sp, 2));	// 2408 add     sp, 2 ;~ 01A2:131C
cs=0x1a2;eip=0x00131f; 	X(MOV(word_38cde, ax));	// 2409 mov     word_38CDE, ax ;~ 01A2:131F
cs=0x1a2;eip=0x001322; 	X(MOV(word_38ce0, dx));	// 2410 mov     word_38CE0, dx ;~ 01A2:1322
cs=0x1a2;eip=0x001326; 	T(OR(dx, ax));	// 2411 or      dx, ax ;~ 01A2:1326
cs=0x1a2;eip=0x001328; 	R(JNZ(loc_11335));	// 2412 jnz     short loc_11335 ;~ 01A2:1328
cs=0x1a2;eip=0x00132a; 	T(MOV(ax, 1));	// 2413 mov     ax, 1 ;~ 01A2:132A
cs=0x1a2;eip=0x00132d; 	X(PUSH(ax));	// 2414 push    ax ;~ 01A2:132D
cs=0x1a2;eip=0x00132e; 	X(PUSH(cs));	// 2415 push    cs ;~ 01A2:132E
cs=0x1a2;eip=0x00132f; 	R(CALL(sub_10874,0));	// 2416 call    near ptr sub_10874 ;~ 01A2:132F
cs=0x1a2;eip=0x001332; 	T(ADD(sp, 2));	// 2418 add     sp, 2 ;~ 01A2:1332
loc_11335:
	// 4529 
cs=0x1a2;eip=0x001335; 	T(CMP(word_3a178, 0x13));	// 2421 cmp     word_3A178, 13h ;~ 01A2:1335
cs=0x1a2;eip=0x00133a; 	R(JNZ(loc_11344));	// 2422 jnz     short loc_11344 ;~ 01A2:133A
cs=0x1a2;eip=0x00133c; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x12D4));	// 2423 mov     [bp+var_2], 12D4h ;~ 01A2:133C
cs=0x1a2;eip=0x001341; 	R(JMP(loc_11349));	// 2424 jmp     short loc_11349 ;~ 01A2:1341
loc_11344:
	// 4530 
cs=0x1a2;eip=0x001344; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x0F46));	// 2429 mov     [bp+var_2], 0F46h ;~ 01A2:1344
loc_11349:
	// 4531 
cs=0x1a2;eip=0x001349; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 2432 push    [bp+var_2] ;~ 01A2:1349
cs=0x1a2;eip=0x00134c; 	R(CALLF(sub_29a81,0));	// 2433 call    sub_29A81 ;~ 01A2:134C
cs=0x1a2;eip=0x001351; 	T(ADD(sp, 2));	// 2434 add     sp, 2 ;~ 01A2:1351
cs=0x1a2;eip=0x001354; 	X(MOV(word_3a390, ax));	// 2435 mov     word_3A390, ax ;~ 01A2:1354
cs=0x1a2;eip=0x001357; 	X(MOV(word_3a392, dx));	// 2436 mov     word_3A392, dx ;~ 01A2:1357
cs=0x1a2;eip=0x00135b; 	T(OR(dx, ax));	// 2437 or      dx, ax ;~ 01A2:135B
cs=0x1a2;eip=0x00135d; 	R(JNZ(loc_1136a));	// 2438 jnz     short loc_1136A ;~ 01A2:135D
cs=0x1a2;eip=0x00135f; 	T(MOV(ax, 1));	// 2439 mov     ax, 1 ;~ 01A2:135F
cs=0x1a2;eip=0x001362; 	X(PUSH(ax));	// 2440 push    ax ;~ 01A2:1362
cs=0x1a2;eip=0x001363; 	X(PUSH(cs));	// 2441 push    cs ;~ 01A2:1363
cs=0x1a2;eip=0x001364; 	R(CALL(sub_10874,0));	// 2442 call    near ptr sub_10874 ;~ 01A2:1364
cs=0x1a2;eip=0x001367; 	T(ADD(sp, 2));	// 2444 add     sp, 2 ;~ 01A2:1367
loc_1136a:
	// 4532 
cs=0x1a2;eip=0x00136a; 	T(CMP(word_3a178, 0x13));	// 2447 cmp     word_3A178, 13h ;~ 01A2:136A
cs=0x1a2;eip=0x00136f; 	R(JNZ(loc_11378));	// 2448 jnz     short loc_11378 ;~ 01A2:136F
cs=0x1a2;eip=0x001371; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x1D06));	// 2449 mov     [bp+var_2], 1D06h ;~ 01A2:1371
cs=0x1a2;eip=0x001376; 	R(JMP(loc_1137d));	// 2450 jmp     short loc_1137D ;~ 01A2:1376
loc_11378:
	// 4533 
cs=0x1a2;eip=0x001378; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x1374));	// 2454 mov     [bp+var_2], 1374h ;~ 01A2:1378
loc_1137d:
	// 4534 
cs=0x1a2;eip=0x00137d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 2457 push    [bp+var_2] ;~ 01A2:137D
cs=0x1a2;eip=0x001380; 	R(CALLF(sub_29a81,0));	// 2458 call    sub_29A81 ;~ 01A2:1380
cs=0x1a2;eip=0x001385; 	T(ADD(sp, 2));	// 2459 add     sp, 2 ;~ 01A2:1385
cs=0x1a2;eip=0x001388; 	X(MOV(word_3a39a, ax));	// 2460 mov     word_3A39A, ax ;~ 01A2:1388
cs=0x1a2;eip=0x00138b; 	X(MOV(word_3a39c, dx));	// 2461 mov     word_3A39C, dx ;~ 01A2:138B
cs=0x1a2;eip=0x00138f; 	T(OR(dx, ax));	// 2462 or      dx, ax ;~ 01A2:138F
cs=0x1a2;eip=0x001391; 	R(JNZ(loc_1139e));	// 2463 jnz     short loc_1139E ;~ 01A2:1391
cs=0x1a2;eip=0x001393; 	T(MOV(ax, 1));	// 2464 mov     ax, 1 ;~ 01A2:1393
cs=0x1a2;eip=0x001396; 	X(PUSH(ax));	// 2465 push    ax ;~ 01A2:1396
cs=0x1a2;eip=0x001397; 	X(PUSH(cs));	// 2466 push    cs ;~ 01A2:1397
cs=0x1a2;eip=0x001398; 	R(CALL(sub_10874,0));	// 2467 call    near ptr sub_10874 ;~ 01A2:1398
cs=0x1a2;eip=0x00139b; 	T(ADD(sp, 2));	// 2469 add     sp, 2 ;~ 01A2:139B
loc_1139e:
	// 4535 
cs=0x1a2;eip=0x00139e; 	T(MOV(ax, 0x0E2E));	// 2472 mov     ax, 0E2Eh ;~ 01A2:139E
cs=0x1a2;eip=0x0013a1; 	X(PUSH(ax));	// 2473 push    ax ;~ 01A2:13A1
cs=0x1a2;eip=0x0013a2; 	R(CALLF(sub_29a81,0));	// 2474 call    sub_29A81 ;~ 01A2:13A2
cs=0x1a2;eip=0x0013a7; 	T(ADD(sp, 2));	// 2475 add     sp, 2 ;~ 01A2:13A7
cs=0x1a2;eip=0x0013aa; 	X(MOV(word_3a5ba, ax));	// 2476 mov     word_3A5BA, ax ;~ 01A2:13AA
cs=0x1a2;eip=0x0013ad; 	X(MOV(word_3a5bc, dx));	// 2477 mov     word_3A5BC, dx ;~ 01A2:13AD
cs=0x1a2;eip=0x0013b1; 	T(OR(dx, ax));	// 2478 or      dx, ax ;~ 01A2:13B1
cs=0x1a2;eip=0x0013b3; 	R(JNZ(loc_113c0));	// 2479 jnz     short loc_113C0 ;~ 01A2:13B3
cs=0x1a2;eip=0x0013b5; 	T(MOV(ax, 1));	// 2480 mov     ax, 1 ;~ 01A2:13B5
cs=0x1a2;eip=0x0013b8; 	X(PUSH(ax));	// 2481 push    ax ;~ 01A2:13B8
cs=0x1a2;eip=0x0013b9; 	X(PUSH(cs));	// 2482 push    cs ;~ 01A2:13B9
cs=0x1a2;eip=0x0013ba; 	R(CALL(sub_10874,0));	// 2483 call    near ptr sub_10874 ;~ 01A2:13BA
cs=0x1a2;eip=0x0013bd; 	T(ADD(sp, 2));	// 2485 add     sp, 2 ;~ 01A2:13BD
loc_113c0:
	// 4536 
cs=0x1a2;eip=0x0013c0; 	T(MOV(ax, 0x8E8));	// 2488 mov     ax, 8E8h ;~ 01A2:13C0
cs=0x1a2;eip=0x0013c3; 	X(PUSH(ax));	// 2489 push    ax ;~ 01A2:13C3
cs=0x1a2;eip=0x0013c4; 	R(CALLF(sub_29a81,0));	// 2490 call    sub_29A81 ;~ 01A2:13C4
cs=0x1a2;eip=0x0013c9; 	T(ADD(sp, 2));	// 2491 add     sp, 2 ;~ 01A2:13C9
cs=0x1a2;eip=0x0013cc; 	X(MOV(word_38ce4, ax));	// 2492 mov     word_38CE4, ax ;~ 01A2:13CC
cs=0x1a2;eip=0x0013cf; 	X(MOV(word_38ce6, dx));	// 2493 mov     word_38CE6, dx ;~ 01A2:13CF
cs=0x1a2;eip=0x0013d3; 	T(OR(dx, ax));	// 2494 or      dx, ax ;~ 01A2:13D3
cs=0x1a2;eip=0x0013d5; 	R(JNZ(loc_113e2));	// 2495 jnz     short loc_113E2 ;~ 01A2:13D5
cs=0x1a2;eip=0x0013d7; 	T(MOV(ax, 1));	// 2496 mov     ax, 1 ;~ 01A2:13D7
cs=0x1a2;eip=0x0013da; 	X(PUSH(ax));	// 2497 push    ax ;~ 01A2:13DA
cs=0x1a2;eip=0x0013db; 	X(PUSH(cs));	// 2498 push    cs ;~ 01A2:13DB
cs=0x1a2;eip=0x0013dc; 	R(CALL(sub_10874,0));	// 2499 call    near ptr sub_10874 ;~ 01A2:13DC
cs=0x1a2;eip=0x0013df; 	T(ADD(sp, 2));	// 2501 add     sp, 2 ;~ 01A2:13DF
loc_113e2:
	// 4537 
cs=0x1a2;eip=0x0013e2; 	T(MOV(ax, 0x37A));	// 2504 mov     ax, 37Ah ;~ 01A2:13E2
cs=0x1a2;eip=0x0013e5; 	X(PUSH(ax));	// 2505 push    ax ;~ 01A2:13E5
cs=0x1a2;eip=0x0013e6; 	R(CALLF(sub_29a81,0));	// 2506 call    sub_29A81 ;~ 01A2:13E6
cs=0x1a2;eip=0x0013eb; 	T(ADD(sp, 2));	// 2507 add     sp, 2 ;~ 01A2:13EB
cs=0x1a2;eip=0x0013ee; 	X(MOV(word_38cd8, ax));	// 2508 mov     word_38CD8, ax ;~ 01A2:13EE
cs=0x1a2;eip=0x0013f1; 	X(MOV(word_38cda, dx));	// 2509 mov     word_38CDA, dx ;~ 01A2:13F1
cs=0x1a2;eip=0x0013f5; 	T(OR(dx, ax));	// 2510 or      dx, ax ;~ 01A2:13F5
cs=0x1a2;eip=0x0013f7; 	R(JNZ(loc_11404));	// 2511 jnz     short loc_11404 ;~ 01A2:13F7
cs=0x1a2;eip=0x0013f9; 	T(MOV(ax, 1));	// 2512 mov     ax, 1 ;~ 01A2:13F9
cs=0x1a2;eip=0x0013fc; 	X(PUSH(ax));	// 2513 push    ax ;~ 01A2:13FC
cs=0x1a2;eip=0x0013fd; 	X(PUSH(cs));	// 2514 push    cs ;~ 01A2:13FD
cs=0x1a2;eip=0x0013fe; 	R(CALL(sub_10874,0));	// 2515 call    near ptr sub_10874 ;~ 01A2:13FE
cs=0x1a2;eip=0x001401; 	T(ADD(sp, 2));	// 2517 add     sp, 2 ;~ 01A2:1401
loc_11404:
	// 4538 
cs=0x1a2;eip=0x001404; 	T(MOV(ax, 0x113));	// 2520 mov     ax, 113h ;~ 01A2:1404
cs=0x1a2;eip=0x001407; 	X(PUSH(ax));	// 2521 push    ax ;~ 01A2:1407
cs=0x1a2;eip=0x001408; 	R(CALLF(sub_29a81,0));	// 2522 call    sub_29A81 ;~ 01A2:1408
cs=0x1a2;eip=0x00140d; 	T(ADD(sp, 2));	// 2523 add     sp, 2 ;~ 01A2:140D
cs=0x1a2;eip=0x001410; 	X(MOV(word_3a3fc, ax));	// 2524 mov     word_3A3FC, ax ;~ 01A2:1410
cs=0x1a2;eip=0x001413; 	X(MOV(word_3a3fe, dx));	// 2525 mov     word_3A3FE, dx ;~ 01A2:1413
cs=0x1a2;eip=0x001417; 	T(OR(dx, ax));	// 2526 or      dx, ax ;~ 01A2:1417
cs=0x1a2;eip=0x001419; 	R(JNZ(loc_11426));	// 2527 jnz     short loc_11426 ;~ 01A2:1419
cs=0x1a2;eip=0x00141b; 	T(MOV(ax, 1));	// 2528 mov     ax, 1 ;~ 01A2:141B
cs=0x1a2;eip=0x00141e; 	X(PUSH(ax));	// 2529 push    ax ;~ 01A2:141E
cs=0x1a2;eip=0x00141f; 	X(PUSH(cs));	// 2530 push    cs ;~ 01A2:141F
cs=0x1a2;eip=0x001420; 	R(CALL(sub_10874,0));	// 2531 call    near ptr sub_10874 ;~ 01A2:1420
cs=0x1a2;eip=0x001423; 	T(ADD(sp, 2));	// 2533 add     sp, 2 ;~ 01A2:1423
loc_11426:
	// 4539 
cs=0x1a2;eip=0x001426; 	R(CALLF(sub_1ab4f,0));	// 2536 call    sub_1AB4F ;~ 01A2:1426
cs=0x1a2;eip=0x00142b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 2537 mov     [bp+var_2], ax ;~ 01A2:142B
cs=0x1a2;eip=0x00142e; 	T(OR(ax, ax));	// 2538 or      ax, ax ;~ 01A2:142E
cs=0x1a2;eip=0x001430; 	R(JNZ(loc_1143d));	// 2539 jnz     short loc_1143D ;~ 01A2:1430
cs=0x1a2;eip=0x001432; 	T(MOV(ax, 1));	// 2540 mov     ax, 1 ;~ 01A2:1432
cs=0x1a2;eip=0x001435; 	X(PUSH(ax));	// 2541 push    ax ;~ 01A2:1435
cs=0x1a2;eip=0x001436; 	X(PUSH(cs));	// 2542 push    cs ;~ 01A2:1436
cs=0x1a2;eip=0x001437; 	R(CALL(sub_10874,0));	// 2543 call    near ptr sub_10874 ;~ 01A2:1437
cs=0x1a2;eip=0x00143a; 	T(ADD(sp, 2));	// 2545 add     sp, 2 ;~ 01A2:143A
loc_1143d:
	// 4540 
cs=0x1a2;eip=0x00143d; 	T(MOV(sp, bp));	// 2548 mov     sp, bp ;~ 01A2:143D
cs=0x1a2;eip=0x00143f; 	X(POP(bp));	// 2549 pop     bp ;~ 01A2:143F
cs=0x1a2;eip=0x001440; 	R(RETF(0));	// 2550 retf ;~ 01A2:1440
sub_11442:
	// 2559 
cs=0x1a2;eip=0x001442; 	X(PUSH(word_3a3fa));	// 2561 push    word_3A3FA ;~ 01A2:1442
ret_1a2_1446:
	// 4541 
cs=0x1a2;eip=0x001446; 	X(PUSH(word_3a3f8));	// 2562 push    word_3A3F8 ;~ 01A2:1446
cs=0x1a2;eip=0x00144a; 	R(CALLF(sub_29a6c,0));	// 2563 call    sub_29A6C ;~ 01A2:144A
cs=0x1a2;eip=0x00144f; 	T(ADD(sp, 4));	// 2564 add     sp, 4 ;~ 01A2:144F
cs=0x1a2;eip=0x001452; 	X(PUSH(word_3a37e));	// 2565 push    word_3A37E ;~ 01A2:1452
cs=0x1a2;eip=0x001456; 	X(PUSH(word_3a37c));	// 2566 push    word_3A37C ;~ 01A2:1456
cs=0x1a2;eip=0x00145a; 	R(CALLF(sub_29a6c,0));	// 2567 call    sub_29A6C ;~ 01A2:145A
cs=0x1a2;eip=0x00145f; 	T(ADD(sp, 4));	// 2568 add     sp, 4 ;~ 01A2:145F
cs=0x1a2;eip=0x001462; 	X(PUSH(word_3a622));	// 2569 push    word_3A622 ;~ 01A2:1462
cs=0x1a2;eip=0x001466; 	X(PUSH(word_3a620));	// 2570 push    word_3A620 ;~ 01A2:1466
cs=0x1a2;eip=0x00146a; 	R(CALLF(sub_29a6c,0));	// 2571 call    sub_29A6C ;~ 01A2:146A
cs=0x1a2;eip=0x00146f; 	T(ADD(sp, 4));	// 2572 add     sp, 4 ;~ 01A2:146F
cs=0x1a2;eip=0x001472; 	X(PUSH(word_3a5b2));	// 2573 push    word_3A5B2 ;~ 01A2:1472
cs=0x1a2;eip=0x001476; 	X(PUSH(word_3a5b0));	// 2574 push    word_3A5B0 ;~ 01A2:1476
cs=0x1a2;eip=0x00147a; 	R(CALLF(sub_29a6c,0));	// 2575 call    sub_29A6C ;~ 01A2:147A
cs=0x1a2;eip=0x00147f; 	T(ADD(sp, 4));	// 2576 add     sp, 4 ;~ 01A2:147F
cs=0x1a2;eip=0x001482; 	X(PUSH(word_38a9e));	// 2577 push    word_38A9E ;~ 01A2:1482
cs=0x1a2;eip=0x001486; 	X(PUSH(word_38a9c));	// 2578 push    word_38A9C ;~ 01A2:1486
cs=0x1a2;eip=0x00148a; 	R(CALLF(sub_29a6c,0));	// 2579 call    sub_29A6C ;~ 01A2:148A
cs=0x1a2;eip=0x00148f; 	T(ADD(sp, 4));	// 2580 add     sp, 4 ;~ 01A2:148F
cs=0x1a2;eip=0x001492; 	X(PUSH(word_3a38e));	// 2581 push    word_3A38E ;~ 01A2:1492
cs=0x1a2;eip=0x001496; 	X(PUSH(word_3a38c));	// 2582 push    word_3A38C ;~ 01A2:1496
cs=0x1a2;eip=0x00149a; 	R(CALLF(sub_29a6c,0));	// 2583 call    sub_29A6C ;~ 01A2:149A
cs=0x1a2;eip=0x00149f; 	T(ADD(sp, 4));	// 2584 add     sp, 4 ;~ 01A2:149F
cs=0x1a2;eip=0x0014a2; 	X(PUSH(word_38ce0));	// 2585 push    word_38CE0 ;~ 01A2:14A2
cs=0x1a2;eip=0x0014a6; 	X(PUSH(word_38cde));	// 2586 push    word_38CDE ;~ 01A2:14A6
cs=0x1a2;eip=0x0014aa; 	R(CALLF(sub_29a6c,0));	// 2587 call    sub_29A6C ;~ 01A2:14AA
cs=0x1a2;eip=0x0014af; 	T(ADD(sp, 4));	// 2588 add     sp, 4 ;~ 01A2:14AF
cs=0x1a2;eip=0x0014b2; 	X(PUSH(word_3a392));	// 2589 push    word_3A392 ;~ 01A2:14B2
cs=0x1a2;eip=0x0014b6; 	X(PUSH(word_3a390));	// 2590 push    word_3A390 ;~ 01A2:14B6
cs=0x1a2;eip=0x0014ba; 	R(CALLF(sub_29a6c,0));	// 2591 call    sub_29A6C ;~ 01A2:14BA
cs=0x1a2;eip=0x0014bf; 	T(ADD(sp, 4));	// 2592 add     sp, 4 ;~ 01A2:14BF
cs=0x1a2;eip=0x0014c2; 	X(PUSH(word_3a39c));	// 2593 push    word_3A39C ;~ 01A2:14C2
cs=0x1a2;eip=0x0014c6; 	X(PUSH(word_3a39a));	// 2594 push    word_3A39A ;~ 01A2:14C6
cs=0x1a2;eip=0x0014ca; 	R(CALLF(sub_29a6c,0));	// 2595 call    sub_29A6C ;~ 01A2:14CA
cs=0x1a2;eip=0x0014cf; 	T(ADD(sp, 4));	// 2596 add     sp, 4 ;~ 01A2:14CF
cs=0x1a2;eip=0x0014d2; 	X(PUSH(word_3a5bc));	// 2597 push    word_3A5BC ;~ 01A2:14D2
cs=0x1a2;eip=0x0014d6; 	X(PUSH(word_3a5ba));	// 2598 push    word_3A5BA ;~ 01A2:14D6
cs=0x1a2;eip=0x0014da; 	R(CALLF(sub_29a6c,0));	// 2599 call    sub_29A6C ;~ 01A2:14DA
cs=0x1a2;eip=0x0014df; 	T(ADD(sp, 4));	// 2600 add     sp, 4 ;~ 01A2:14DF
cs=0x1a2;eip=0x0014e2; 	X(PUSH(word_38ce6));	// 2601 push    word_38CE6 ;~ 01A2:14E2
cs=0x1a2;eip=0x0014e6; 	X(PUSH(word_38ce4));	// 2602 push    word_38CE4 ;~ 01A2:14E6
cs=0x1a2;eip=0x0014ea; 	R(CALLF(sub_29a6c,0));	// 2603 call    sub_29A6C ;~ 01A2:14EA
cs=0x1a2;eip=0x0014ef; 	T(ADD(sp, 4));	// 2604 add     sp, 4 ;~ 01A2:14EF
cs=0x1a2;eip=0x0014f2; 	X(PUSH(word_38cda));	// 2605 push    word_38CDA ;~ 01A2:14F2
cs=0x1a2;eip=0x0014f6; 	X(PUSH(word_38cd8));	// 2606 push    word_38CD8 ;~ 01A2:14F6
cs=0x1a2;eip=0x0014fa; 	R(CALLF(sub_29a6c,0));	// 2607 call    sub_29A6C ;~ 01A2:14FA
cs=0x1a2;eip=0x0014ff; 	T(ADD(sp, 4));	// 2608 add     sp, 4 ;~ 01A2:14FF
cs=0x1a2;eip=0x001502; 	X(PUSH(word_3a3fe));	// 2609 push    word_3A3FE ;~ 01A2:1502
cs=0x1a2;eip=0x001506; 	X(PUSH(word_3a3fc));	// 2610 push    word_3A3FC ;~ 01A2:1506
cs=0x1a2;eip=0x00150a; 	R(CALLF(sub_29a6c,0));	// 2611 call    sub_29A6C ;~ 01A2:150A
cs=0x1a2;eip=0x00150f; 	T(ADD(sp, 4));	// 2612 add     sp, 4 ;~ 01A2:150F
cs=0x1a2;eip=0x001512; 	R(CALLF(sub_1ab74,0));	// 2613 call    sub_1AB74 ;~ 01A2:1512
cs=0x1a2;eip=0x001517; 	R(RETF(0));	// 2614 retf ;~ 01A2:1517
nullsub_1:
	// 2621 
cs=0x1a2;eip=0x001518; 	R(RETF(0));	// 2622 retf ;~ 01A2:1518
nullsub_2:
	// 2631 
cs=0x1a2;eip=0x00151a; 	R(RETF(0));	// 2632 retf ;~ 01A2:151A
sub_1151c:
	// 2642 
#undef var_8
#define var_8 -8
	// 2645 var_8           = word ptr -8 ;~ 01A2:151C
#undef var_6
#define var_6 -6
	// 2646 var_6           = word ptr -6 ;~ 01A2:151C
#undef var_4
#define var_4 -4
	// 2647 var_4           = word ptr -4 ;~ 01A2:151C
#undef var_2
#define var_2 -2
	// 2648 var_2           = word ptr -2 ;~ 01A2:151C
#undef arg_0
#define arg_0 6
	// 2649 arg_0           = word ptr  6 ;~ 01A2:151C
ret_1a2_151c:
	// 4542 
cs=0x1a2;eip=0x00151c; 	X(PUSH(bp));	// 2651 push    bp ;~ 01A2:151C
cs=0x1a2;eip=0x00151d; 	T(MOV(bp, sp));	// 2652 mov     bp, sp ;~ 01A2:151D
cs=0x1a2;eip=0x00151f; 	T(SUB(sp, 8));	// 2653 sub     sp, 8 ;~ 01A2:151F
cs=0x1a2;eip=0x001522; 	X(PUSH(si));	// 2654 push    si ;~ 01A2:1522
cs=0x1a2;eip=0x001523; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 2655 mov     ax, [bp+arg_0] ;~ 01A2:1523
cs=0x1a2;eip=0x001526; 	T(ADD(ax, 2));	// 2656 add     ax, 2 ;~ 01A2:1526
cs=0x1a2;eip=0x001529; 	X(PUSH(ax));	// 2657 push    ax ;~ 01A2:1529
cs=0x1a2;eip=0x00152a; 	X(PUSH(cs));	// 2658 push    cs ;~ 01A2:152A
cs=0x1a2;eip=0x00152b; 	R(CALL(sub_11760,0));	// 2659 call    near ptr sub_11760 ;~ 01A2:152B
cs=0x1a2;eip=0x00152e; 	T(ADD(sp, 2));	// 2660 add     sp, 2 ;~ 01A2:152E
cs=0x1a2;eip=0x001531; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 2661 mov     [bp+var_8], ax ;~ 01A2:1531
cs=0x1a2;eip=0x001534; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 2662 mov     [bp+var_6], dx ;~ 01A2:1534
cs=0x1a2;eip=0x001537; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 2663 mov     [bp+var_2], 0 ;~ 01A2:1537
loc_1153c:
	// 4543 
cs=0x1a2;eip=0x00153c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 2666 mov     ax, [bp+var_2] ;~ 01A2:153C
cs=0x1a2;eip=0x00153f; 	T(MOV(cx, ax));	// 2667 mov     cx, ax ;~ 01A2:153F
cs=0x1a2;eip=0x001541; 	T(SHL(ax, 1));	// 2668 shl     ax, 1 ;~ 01A2:1541
cs=0x1a2;eip=0x001543; 	T(ADD(ax, cx));	// 2669 add     ax, cx ;~ 01A2:1543
cs=0x1a2;eip=0x001545; 	T(SHL(ax, 1));	// 2670 shl     ax, 1 ;~ 01A2:1545
cs=0x1a2;eip=0x001547; 	T(ADD(ax, cx));	// 2671 add     ax, cx ;~ 01A2:1547
cs=0x1a2;eip=0x001549; 	T(SHL(ax, 1));	// 2672 shl     ax, 1 ;~ 01A2:1549
cs=0x1a2;eip=0x00154b; 	T(MOV(si, ax));	// 2673 mov     si, ax ;~ 01A2:154B
cs=0x1a2;eip=0x00154d; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x49E))));	// 2674 mov     ax, [si+49Eh] ;~ 01A2:154D
cs=0x1a2;eip=0x001551; 	T(OR(ax, *(dw*)(raddr(ds,si+0x4A0))));	// 2675 or      ax, [si+4A0h] ;~ 01A2:1551
cs=0x1a2;eip=0x001555; 	R(JZ(loc_115c2));	// 2676 jz      short loc_115C2 ;~ 01A2:1555
cs=0x1a2;eip=0x001557; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 2677 mov     ax, [bp+var_8] ;~ 01A2:1557
cs=0x1a2;eip=0x00155a; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 2678 mov     dx, [bp+var_6] ;~ 01A2:155A
cs=0x1a2;eip=0x00155d; 	T(CMP(*(dw*)(raddr(ds,si+0x49E)), ax));	// 2679 cmp     [si+49Eh], ax ;~ 01A2:155D
cs=0x1a2;eip=0x001561; 	R(JZ(loc_11566));	// 2680 jz      short loc_11566 ;~ 01A2:1561
cs=0x1a2;eip=0x001563; 	R(JMP(loc_1161e));	// 2681 jmp     loc_1161E ;~ 01A2:1563
loc_11566:
	// 4544 
cs=0x1a2;eip=0x001566; 	T(CMP(*(dw*)(raddr(ds,si+0x4A0)), dx));	// 2685 cmp     [si+4A0h], dx ;~ 01A2:1566
cs=0x1a2;eip=0x00156a; 	R(JZ(loc_1156f));	// 2686 jz      short loc_1156F ;~ 01A2:156A
cs=0x1a2;eip=0x00156c; 	R(JMP(loc_1161e));	// 2687 jmp     loc_1161E ;~ 01A2:156C
loc_1156f:
	// 4545 
cs=0x1a2;eip=0x00156f; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x4A8))));	// 2691 mov     ax, [si+4A8h] ;~ 01A2:156F
cs=0x1a2;eip=0x001573; 	T(MOV(dx, *(dw*)(raddr(ds,si+0x4AA))));	// 2692 mov     dx, [si+4AAh] ;~ 01A2:1573
cs=0x1a2;eip=0x001577; 	X(MOV(word_3a6aa, ax));	// 2693 mov     word_3A6AA, ax ;~ 01A2:1577
cs=0x1a2;eip=0x00157a; 	X(MOV(word_3a6ac, dx));	// 2694 mov     word_3A6AC, dx ;~ 01A2:157A
cs=0x1a2;eip=0x00157e; 	T(MOV(ax, 0x446));	// 2695 mov     ax, 446h ;~ 01A2:157E
cs=0x1a2;eip=0x001581; 	X(PUSH(ax));	// 2696 push    ax ;~ 01A2:1581
cs=0x1a2;eip=0x001582; 	T(MOV(ax, 0x0DC));	// 2697 mov     ax, 0DCh ; 'Ü' ;~ 01A2:1582
cs=0x1a2;eip=0x001585; 	X(PUSH(ax));	// 2698 push    ax ;~ 01A2:1585
cs=0x1a2;eip=0x001586; 	R(CALLF(sub_29b46,0));	// 2699 call    sub_29B46 ;~ 01A2:1586
cs=0x1a2;eip=0x00158b; 	T(ADD(sp, 4));	// 2700 add     sp, 4 ;~ 01A2:158B
cs=0x1a2;eip=0x00158e; 	T(MOV(al, byte_2c8da));	// 2701 mov     al, byte_2C8DA ;~ 01A2:158E
cs=0x1a2;eip=0x001591; 	X(MOV(byte_2bf1a, al));	// 2702 mov     byte_2BF1A, al ;~ 01A2:1591
cs=0x1a2;eip=0x001594; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 2703 mov     bx, [bp+var_2] ;~ 01A2:1594
cs=0x1a2;eip=0x001597; 	T(MOV(ax, bx));	// 2704 mov     ax, bx ;~ 01A2:1597
cs=0x1a2;eip=0x001599; 	T(SHL(bx, 1));	// 2705 shl     bx, 1 ;~ 01A2:1599
cs=0x1a2;eip=0x00159b; 	T(ADD(bx, ax));	// 2706 add     bx, ax ;~ 01A2:159B
cs=0x1a2;eip=0x00159d; 	T(SHL(bx, 1));	// 2707 shl     bx, 1 ;~ 01A2:159D
cs=0x1a2;eip=0x00159f; 	T(ADD(bx, ax));	// 2708 add     bx, ax ;~ 01A2:159F
cs=0x1a2;eip=0x0015a1; 	T(SHL(bx, 1));	// 2709 shl     bx, 1 ;~ 01A2:15A1
cs=0x1a2;eip=0x0015a3; 	T(MOV(al, *(raddr(ds,bx+0x4A2))));	// 2710 mov     al, [bx+4A2h] ;~ 01A2:15A3
cs=0x1a2;eip=0x0015a7; 	X(MOV(byte_2bf20, al));	// 2711 mov     byte_2BF20, al ;~ 01A2:15A7
cs=0x1a2;eip=0x0015aa; 	T(CBW);	// 2712 cbw ;~ 01A2:15AA
cs=0x1a2;eip=0x0015ab; 	T(CMP(ax, 0x63));	// 2713 cmp     ax, 63h ; 'c' ;~ 01A2:15AB
cs=0x1a2;eip=0x0015ae; 	R(JZ(loc_115bc));	// 2714 jz      short loc_115BC ;~ 01A2:15AE
cs=0x1a2;eip=0x0015b0; 	T(CMP(ax, 0x64));	// 2715 cmp     ax, 64h ; 'd' ;~ 01A2:15B0
cs=0x1a2;eip=0x0015b3; 	R(JZ(loc_115e2));	// 2716 jz      short loc_115E2 ;~ 01A2:15B3
cs=0x1a2;eip=0x0015b5; 	T(CMP(ax, 0x65));	// 2717 cmp     ax, 65h ; 'e' ;~ 01A2:15B5
cs=0x1a2;eip=0x0015b8; 	R(JZ(loc_115fc));	// 2718 jz      short loc_115FC ;~ 01A2:15B8
cs=0x1a2;eip=0x0015ba; 	R(JMP(loc_115c2));	// 2719 jmp     short loc_115C2 ;~ 01A2:15BA
loc_115bc:
	// 4546 
cs=0x1a2;eip=0x0015bc; 	T(MOV(al, byte_2c8ca));	// 2723 mov     al, byte_2C8CA ;~ 01A2:15BC
cs=0x1a2;eip=0x0015bf; 	X(MOV(byte_2bf1a, al));	// 2724 mov     byte_2BF1A, al ;~ 01A2:15BF
loc_115c2:
	// 4547 
cs=0x1a2;eip=0x0015c2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 2728 mov     bx, [bp+var_2] ;~ 01A2:15C2
cs=0x1a2;eip=0x0015c5; 	T(MOV(ax, bx));	// 2729 mov     ax, bx ;~ 01A2:15C5
cs=0x1a2;eip=0x0015c7; 	T(SHL(bx, 1));	// 2730 shl     bx, 1 ;~ 01A2:15C7
cs=0x1a2;eip=0x0015c9; 	T(ADD(bx, ax));	// 2731 add     bx, ax ;~ 01A2:15C9
cs=0x1a2;eip=0x0015cb; 	T(SHL(bx, 1));	// 2732 shl     bx, 1 ;~ 01A2:15CB
cs=0x1a2;eip=0x0015cd; 	T(ADD(bx, ax));	// 2733 add     bx, ax ;~ 01A2:15CD
cs=0x1a2;eip=0x0015cf; 	T(SHL(bx, 1));	// 2734 shl     bx, 1 ;~ 01A2:15CF
cs=0x1a2;eip=0x0015d1; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x49E))));	// 2735 mov     ax, [bx+49Eh] ;~ 01A2:15D1
cs=0x1a2;eip=0x0015d5; 	T(OR(ax, *(dw*)(raddr(ds,bx+0x4A0))));	// 2736 or      ax, [bx+4A0h] ;~ 01A2:15D5
cs=0x1a2;eip=0x0015d9; 	R(JNZ(loc_11624));	// 2737 jnz     short loc_11624 ;~ 01A2:15D9
cs=0x1a2;eip=0x0015db; 	T(SUB(ax, ax));	// 2738 sub     ax, ax ;~ 01A2:15DB
cs=0x1a2;eip=0x0015dd; 	X(POP(si));	// 2739 pop     si ;~ 01A2:15DD
cs=0x1a2;eip=0x0015de; 	T(MOV(sp, bp));	// 2740 mov     sp, bp ;~ 01A2:15DE
cs=0x1a2;eip=0x0015e0; 	X(POP(bp));	// 2741 pop     bp ;~ 01A2:15E0
cs=0x1a2;eip=0x0015e1; 	R(RETF(0));	// 2742 retf ;~ 01A2:15E1
loc_115e2:
	// 4548 
cs=0x1a2;eip=0x0015e2; 	T(MOV(ax, 0x0ABA));	// 2746 mov     ax, 0ABAh ;~ 01A2:15E2
cs=0x1a2;eip=0x0015e5; 	X(PUSH(ax));	// 2747 push    ax ;~ 01A2:15E5
cs=0x1a2;eip=0x0015e6; 	T(MOV(ax, 0x0DA));	// 2748 mov     ax, 0DAh ; 'Ú' ;~ 01A2:15E6
cs=0x1a2;eip=0x0015e9; 	X(PUSH(ax));	// 2749 push    ax ;~ 01A2:15E9
cs=0x1a2;eip=0x0015ea; 	R(CALLF(sub_29b46,0));	// 2750 call    sub_29B46 ;~ 01A2:15EA
cs=0x1a2;eip=0x0015ef; 	T(ADD(sp, 4));	// 2751 add     sp, 4 ;~ 01A2:15EF
cs=0x1a2;eip=0x0015f2; 	T(MOV(ax, 0x450));	// 2752 mov     ax, 450h ;~ 01A2:15F2
cs=0x1a2;eip=0x0015f5; 	X(PUSH(ax));	// 2753 push    ax ;~ 01A2:15F5
cs=0x1a2;eip=0x0015f6; 	T(MOV(ax, 0x0E1));	// 2754 mov     ax, 0E1h ; 'á' ;~ 01A2:15F6
cs=0x1a2;eip=0x0015f9; 	R(JMP(loc_11613));	// 2755 jmp     short loc_11613 ;~ 01A2:15F9
loc_115fc:
	// 4549 
cs=0x1a2;eip=0x0015fc; 	T(MOV(ax, 0x0ADA));	// 2760 mov     ax, 0ADAh ;~ 01A2:15FC
cs=0x1a2;eip=0x0015ff; 	X(PUSH(ax));	// 2761 push    ax ;~ 01A2:15FF
cs=0x1a2;eip=0x001600; 	T(MOV(ax, 0x0DA));	// 2762 mov     ax, 0DAh ; 'Ú' ;~ 01A2:1600
cs=0x1a2;eip=0x001603; 	X(PUSH(ax));	// 2763 push    ax ;~ 01A2:1603
cs=0x1a2;eip=0x001604; 	R(CALLF(sub_29b46,0));	// 2764 call    sub_29B46 ;~ 01A2:1604
cs=0x1a2;eip=0x001609; 	T(ADD(sp, 4));	// 2765 add     sp, 4 ;~ 01A2:1609
cs=0x1a2;eip=0x00160c; 	T(MOV(ax, 0x455));	// 2766 mov     ax, 455h ;~ 01A2:160C
cs=0x1a2;eip=0x00160f; 	X(PUSH(ax));	// 2767 push    ax ;~ 01A2:160F
cs=0x1a2;eip=0x001610; 	T(MOV(ax, 0x0E3));	// 2768 mov     ax, 0E3h ; 'ã' ;~ 01A2:1610
loc_11613:
	// 4550 
cs=0x1a2;eip=0x001613; 	X(PUSH(ax));	// 2771 push    ax ;~ 01A2:1613
cs=0x1a2;eip=0x001614; 	R(CALLF(sub_29b46,0));	// 2772 call    sub_29B46 ;~ 01A2:1614
cs=0x1a2;eip=0x001619; 	T(ADD(sp, 4));	// 2773 add     sp, 4 ;~ 01A2:1619
cs=0x1a2;eip=0x00161c; 	R(JMP(loc_115c2));	// 2774 jmp     short loc_115C2 ;~ 01A2:161C
loc_1161e:
	// 4551 
cs=0x1a2;eip=0x00161e; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 2779 inc     [bp+var_2] ;~ 01A2:161E
cs=0x1a2;eip=0x001621; 	R(JMP(loc_1153c));	// 2780 jmp     loc_1153C ;~ 01A2:1621
loc_11624:
	// 4552 
cs=0x1a2;eip=0x001624; 	T(MOV(ax, 0x0DA));	// 2784 mov     ax, 0DAh ; 'Ú' ;~ 01A2:1624
cs=0x1a2;eip=0x001627; 	X(PUSH(ax));	// 2785 push    ax ;~ 01A2:1627
cs=0x1a2;eip=0x001628; 	R(CALLF(sub_1ca28,0));	// 2786 call    sub_1CA28 ;~ 01A2:1628
cs=0x1a2;eip=0x00162d; 	T(ADD(sp, 2));	// 2787 add     sp, 2 ;~ 01A2:162D
cs=0x1a2;eip=0x001630; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 2788 mov     [bp+var_4], ax ;~ 01A2:1630
cs=0x1a2;eip=0x001633; 	T(CMP(ax, 0x0FFFF));	// 2789 cmp     ax, 0FFFFh ;~ 01A2:1633
cs=0x1a2;eip=0x001636; 	R(JNZ(loc_116a6));	// 2790 jnz     short loc_116A6 ;~ 01A2:1636
cs=0x1a2;eip=0x001638; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 2791 mov     bx, [bp+var_2] ;~ 01A2:1638
cs=0x1a2;eip=0x00163b; 	T(MOV(ax, bx));	// 2792 mov     ax, bx ;~ 01A2:163B
cs=0x1a2;eip=0x00163d; 	T(SHL(bx, 1));	// 2793 shl     bx, 1 ;~ 01A2:163D
cs=0x1a2;eip=0x00163f; 	T(ADD(bx, ax));	// 2794 add     bx, ax ;~ 01A2:163F
cs=0x1a2;eip=0x001641; 	T(SHL(bx, 1));	// 2795 shl     bx, 1 ;~ 01A2:1641
cs=0x1a2;eip=0x001643; 	T(ADD(bx, ax));	// 2796 add     bx, ax ;~ 01A2:1643
cs=0x1a2;eip=0x001645; 	T(SHL(bx, 1));	// 2797 shl     bx, 1 ;~ 01A2:1645
cs=0x1a2;eip=0x001647; 	T(MOV(al, *(raddr(ds,bx+0x4A2))));	// 2798 mov     al, [bx+4A2h] ;~ 01A2:1647
cs=0x1a2;eip=0x00164b; 	T(AND(al, 0x5F));	// 2799 and     al, 5Fh ;~ 01A2:164B
cs=0x1a2;eip=0x00164d; 	T(CMP(al, 0x41));	// 2800 cmp     al, 41h ; 'A' ;~ 01A2:164D
cs=0x1a2;eip=0x00164f; 	R(JNZ(loc_1165e));	// 2801 jnz     short loc_1165E ;~ 01A2:164F
cs=0x1a2;eip=0x001651; 	T(SUB(ax, ax));	// 2802 sub     ax, ax ;~ 01A2:1651
cs=0x1a2;eip=0x001653; 	X(PUSH(ax));	// 2803 push    ax ;~ 01A2:1653
cs=0x1a2;eip=0x001654; 	T(MOV(ax, 1));	// 2804 mov     ax, 1 ;~ 01A2:1654
cs=0x1a2;eip=0x001657; 	X(PUSH(ax));	// 2805 push    ax ;~ 01A2:1657
cs=0x1a2;eip=0x001658; 	T(MOV(ax, 0x45A));	// 2806 mov     ax, 45Ah ;~ 01A2:1658
cs=0x1a2;eip=0x00165b; 	R(JMP(loc_1168e));	// 2807 jmp     short loc_1168E ;~ 01A2:165B
loc_1165e:
	// 4553 
cs=0x1a2;eip=0x00165e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 2812 mov     bx, [bp+var_2] ;~ 01A2:165E
cs=0x1a2;eip=0x001661; 	T(MOV(ax, bx));	// 2813 mov     ax, bx ;~ 01A2:1661
cs=0x1a2;eip=0x001663; 	T(SHL(bx, 1));	// 2814 shl     bx, 1 ;~ 01A2:1663
cs=0x1a2;eip=0x001665; 	T(ADD(bx, ax));	// 2815 add     bx, ax ;~ 01A2:1665
cs=0x1a2;eip=0x001667; 	T(SHL(bx, 1));	// 2816 shl     bx, 1 ;~ 01A2:1667
cs=0x1a2;eip=0x001669; 	T(ADD(bx, ax));	// 2817 add     bx, ax ;~ 01A2:1669
cs=0x1a2;eip=0x00166b; 	T(SHL(bx, 1));	// 2818 shl     bx, 1 ;~ 01A2:166B
cs=0x1a2;eip=0x00166d; 	T(MOV(al, *(raddr(ds,bx+0x4A2))));	// 2819 mov     al, [bx+4A2h] ;~ 01A2:166D
cs=0x1a2;eip=0x001671; 	T(AND(al, 0x5F));	// 2820 and     al, 5Fh ;~ 01A2:1671
cs=0x1a2;eip=0x001673; 	T(CMP(al, 0x42));	// 2821 cmp     al, 42h ; 'B' ;~ 01A2:1673
cs=0x1a2;eip=0x001675; 	R(JNZ(loc_11684));	// 2822 jnz     short loc_11684 ;~ 01A2:1675
cs=0x1a2;eip=0x001677; 	T(SUB(ax, ax));	// 2823 sub     ax, ax ;~ 01A2:1677
cs=0x1a2;eip=0x001679; 	X(PUSH(ax));	// 2824 push    ax ;~ 01A2:1679
cs=0x1a2;eip=0x00167a; 	T(MOV(ax, 1));	// 2825 mov     ax, 1 ;~ 01A2:167A
cs=0x1a2;eip=0x00167d; 	X(PUSH(ax));	// 2826 push    ax ;~ 01A2:167D
cs=0x1a2;eip=0x00167e; 	T(MOV(ax, 0x46F));	// 2827 mov     ax, 46Fh ;~ 01A2:167E
cs=0x1a2;eip=0x001681; 	R(JMP(loc_1168e));	// 2828 jmp     short loc_1168E ;~ 01A2:1681
loc_11684:
	// 4554 
cs=0x1a2;eip=0x001684; 	T(SUB(ax, ax));	// 2833 sub     ax, ax ;~ 01A2:1684
cs=0x1a2;eip=0x001686; 	X(PUSH(ax));	// 2834 push    ax ;~ 01A2:1686
cs=0x1a2;eip=0x001687; 	T(MOV(ax, 1));	// 2835 mov     ax, 1 ;~ 01A2:1687
cs=0x1a2;eip=0x00168a; 	X(PUSH(ax));	// 2836 push    ax ;~ 01A2:168A
cs=0x1a2;eip=0x00168b; 	T(MOV(ax, 0x487));	// 2837 mov     ax, 487h ;~ 01A2:168B
loc_1168e:
	// 4555 
cs=0x1a2;eip=0x00168e; 	X(PUSH(ax));	// 2841 push    ax ;~ 01A2:168E
cs=0x1a2;eip=0x00168f; 	R(CALLF(sub_1e0f2,0));	// 2842 call    sub_1E0F2 ;~ 01A2:168F
cs=0x1a2;eip=0x001694; 	T(ADD(sp, 6));	// 2843 add     sp, 6 ;~ 01A2:1694
loc_11697:
	// 4556 
cs=0x1a2;eip=0x001697; 	T(CMP(byte_34f9b, 0));	// 2846 cmp     byte_34F9B, 0 ;~ 01A2:1697
cs=0x1a2;eip=0x00169c; 	R(JZ(loc_11697));	// 2847 jz      short loc_11697 ;~ 01A2:169C
cs=0x1a2;eip=0x00169e; 	X(MOV(byte_34f9b, 0));	// 2848 mov     byte_34F9B, 0 ;~ 01A2:169E
cs=0x1a2;eip=0x0016a3; 	R(JMP(loc_115c2));	// 2849 jmp     loc_115C2 ;~ 01A2:16A3
loc_116a6:
	// 4557 
cs=0x1a2;eip=0x0016a6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 2853 mov     bx, [bp+var_2] ;~ 01A2:16A6
cs=0x1a2;eip=0x0016a9; 	T(MOV(ax, bx));	// 2854 mov     ax, bx ;~ 01A2:16A9
cs=0x1a2;eip=0x0016ab; 	T(SHL(bx, 1));	// 2855 shl     bx, 1 ;~ 01A2:16AB
cs=0x1a2;eip=0x0016ad; 	T(ADD(bx, ax));	// 2856 add     bx, ax ;~ 01A2:16AD
cs=0x1a2;eip=0x0016af; 	T(SHL(bx, 1));	// 2857 shl     bx, 1 ;~ 01A2:16AF
cs=0x1a2;eip=0x0016b1; 	T(ADD(bx, ax));	// 2858 add     bx, ax ;~ 01A2:16B1
cs=0x1a2;eip=0x0016b3; 	T(SHL(bx, 1));	// 2859 shl     bx, 1 ;~ 01A2:16B3
cs=0x1a2;eip=0x0016b5; 	X(PUSH(*(dw*)(raddr(ds,bx+0x4A6))));	// 2860 push    word ptr [bx+4A6h] ;~ 01A2:16B5
cs=0x1a2;eip=0x0016b9; 	X(PUSH(*(dw*)(raddr(ds,bx+0x4A4))));	// 2861 push    word ptr [bx+4A4h] ;~ 01A2:16B9
cs=0x1a2;eip=0x0016bd; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 2862 push    [bp+var_4] ;~ 01A2:16BD
cs=0x1a2;eip=0x0016c0; 	R(CALLF(sub_1ca0e,0));	// 2863 call    sub_1CA0E ;~ 01A2:16C0
cs=0x1a2;eip=0x0016c5; 	T(ADD(sp, 6));	// 2864 add     sp, 6 ;~ 01A2:16C5
cs=0x1a2;eip=0x0016c8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 2865 mov     ax, [bp+var_4] ;~ 01A2:16C8
cs=0x1a2;eip=0x0016cb; 	X(POP(si));	// 2866 pop     si ;~ 01A2:16CB
cs=0x1a2;eip=0x0016cc; 	T(MOV(sp, bp));	// 2867 mov     sp, bp ;~ 01A2:16CC
cs=0x1a2;eip=0x0016ce; 	X(POP(bp));	// 2868 pop     bp ;~ 01A2:16CE
cs=0x1a2;eip=0x0016cf; 	R(RETF(0));	// 2869 retf ;~ 01A2:16CF
sub_116d0:
	// 2877 
#undef var_6
#define var_6 -6
	// 2879 var_6           = word ptr -6 ;~ 01A2:16D0
#undef var_4
#define var_4 -4
	// 2880 var_4           = word ptr -4 ;~ 01A2:16D0
#undef var_2
#define var_2 -2
	// 2881 var_2           = word ptr -2 ;~ 01A2:16D0
#undef arg_0
#define arg_0 6
	// 2882 arg_0           = word ptr  6 ;~ 01A2:16D0
#undef arg_2
#define arg_2 8
	// 2883 arg_2           = word ptr  8 ;~ 01A2:16D0
ret_1a2_16d0:
	// 4558 
cs=0x1a2;eip=0x0016d0; 	X(PUSH(bp));	// 2885 push    bp ;~ 01A2:16D0
cs=0x1a2;eip=0x0016d1; 	T(MOV(bp, sp));	// 2886 mov     bp, sp ;~ 01A2:16D1
cs=0x1a2;eip=0x0016d3; 	T(SUB(sp, 6));	// 2887 sub     sp, 6 ;~ 01A2:16D3
cs=0x1a2;eip=0x0016d6; 	X(PUSH(si));	// 2888 push    si ;~ 01A2:16D6
cs=0x1a2;eip=0x0016d7; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 2889 mov     [bp+var_4], 0 ;~ 01A2:16D7
cs=0x1a2;eip=0x0016dc; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 2890 push    [bp+arg_0] ;~ 01A2:16DC
cs=0x1a2;eip=0x0016df; 	R(CALLF(sub_29ba4,0));	// 2891 call    sub_29BA4 ;~ 01A2:16DF
cs=0x1a2;eip=0x0016e4; 	T(ADD(sp, 2));	// 2892 add     sp, 2 ;~ 01A2:16E4
cs=0x1a2;eip=0x0016e7; 	T(DEC(ax));	// 2893 dec     ax ;~ 01A2:16E7
cs=0x1a2;eip=0x0016e8; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 2894 mov     [bp+var_6], ax ;~ 01A2:16E8
cs=0x1a2;eip=0x0016eb; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 2895 mov     [bp+var_2], ax ;~ 01A2:16EB
cs=0x1a2;eip=0x0016ee; 	R(JMP(loc_11709));	// 2896 jmp     short loc_11709 ;~ 01A2:16EE
loc_116f0:
	// 4559 
cs=0x1a2;eip=0x0016f0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 2900 mov     ax, [bp+arg_2] ;~ 01A2:16F0
cs=0x1a2;eip=0x0016f3; 	X(MUL1_2(*(dw*)(raddr(ss,bp+var_4))));	// 2901 mul     [bp+var_4] ;~ 01A2:16F3
cs=0x1a2;eip=0x0016f6; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 2902 mov     bx, [bp+var_2] ;~ 01A2:16F6
cs=0x1a2;eip=0x0016f9; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 2903 mov     si, [bp+arg_0] ;~ 01A2:16F9
cs=0x1a2;eip=0x0016fc; 	T(MOV(cx, ax));	// 2904 mov     cx, ax ;~ 01A2:16FC
cs=0x1a2;eip=0x0016fe; 	T(MOV(al, *(raddr(ds,bx+si))));	// 2905 mov     al, [bx+si] ;~ 01A2:16FE
cs=0x1a2;eip=0x001700; 	T(CBW);	// 2906 cbw ;~ 01A2:1700
cs=0x1a2;eip=0x001701; 	T(ADD(ax, cx));	// 2907 add     ax, cx ;~ 01A2:1701
cs=0x1a2;eip=0x001703; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 2908 mov     [bp+var_4], ax ;~ 01A2:1703
cs=0x1a2;eip=0x001706; 	X(DEC(*(dw*)(raddr(ss,bp+var_2))));	// 2909 dec     [bp+var_2] ;~ 01A2:1706
loc_11709:
	// 4560 
cs=0x1a2;eip=0x001709; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x0FFFF));	// 2912 cmp     [bp+var_2], 0FFFFh ;~ 01A2:1709
cs=0x1a2;eip=0x00170d; 	R(JG(loc_116f0));	// 2913 jg      short loc_116F0 ;~ 01A2:170D
cs=0x1a2;eip=0x00170f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 2914 mov     ax, [bp+var_4] ;~ 01A2:170F
cs=0x1a2;eip=0x001712; 	T(SUB(dx, dx));	// 2915 sub     dx, dx ;~ 01A2:1712
cs=0x1a2;eip=0x001714; 	X(POP(si));	// 2916 pop     si ;~ 01A2:1714
cs=0x1a2;eip=0x001715; 	T(MOV(sp, bp));	// 2917 mov     sp, bp ;~ 01A2:1715
cs=0x1a2;eip=0x001717; 	X(POP(bp));	// 2918 pop     bp ;~ 01A2:1717
cs=0x1a2;eip=0x001718; 	R(RETF(0));	// 2919 retf ;~ 01A2:1718
sub_1171a:
	// 2929 
#undef var_6
#define var_6 -6
	// 2931 var_6           = word ptr -6 ;~ 01A2:171A
#undef var_4
#define var_4 -4
	// 2932 var_4           = word ptr -4 ;~ 01A2:171A
#undef var_2
#define var_2 -2
	// 2933 var_2           = word ptr -2 ;~ 01A2:171A
#undef arg_0
#define arg_0 6
	// 2934 arg_0           = word ptr  6 ;~ 01A2:171A
ret_1a2_171a:
	// 4561 
cs=0x1a2;eip=0x00171a; 	X(PUSH(bp));	// 2936 push    bp ;~ 01A2:171A
cs=0x1a2;eip=0x00171b; 	T(MOV(bp, sp));	// 2937 mov     bp, sp ;~ 01A2:171B
cs=0x1a2;eip=0x00171d; 	T(SUB(sp, 6));	// 2938 sub     sp, 6 ;~ 01A2:171D
cs=0x1a2;eip=0x001720; 	X(PUSH(si));	// 2939 push    si ;~ 01A2:1720
cs=0x1a2;eip=0x001721; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0));	// 2940 mov     [bp+var_4], 0 ;~ 01A2:1721
cs=0x1a2;eip=0x001726; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 2941 push    [bp+arg_0] ;~ 01A2:1726
cs=0x1a2;eip=0x001729; 	R(CALLF(sub_29ba4,0));	// 2942 call    sub_29BA4 ;~ 01A2:1729
cs=0x1a2;eip=0x00172e; 	T(ADD(sp, 2));	// 2943 add     sp, 2 ;~ 01A2:172E
cs=0x1a2;eip=0x001731; 	T(DEC(ax));	// 2944 dec     ax ;~ 01A2:1731
cs=0x1a2;eip=0x001732; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 2945 mov     [bp+var_6], ax ;~ 01A2:1732
cs=0x1a2;eip=0x001735; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 2946 mov     [bp+var_2], 0 ;~ 01A2:1735
cs=0x1a2;eip=0x00173a; 	R(JMP(loc_1174d));	// 2947 jmp     short loc_1174D ;~ 01A2:173A
loc_1173c:
	// 4562 
cs=0x1a2;eip=0x00173c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 2951 mov     bx, [bp+var_2] ;~ 01A2:173C
cs=0x1a2;eip=0x00173f; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 2952 mov     si, [bp+arg_0] ;~ 01A2:173F
cs=0x1a2;eip=0x001742; 	T(MOV(al, *(raddr(ds,bx+si))));	// 2953 mov     al, [bx+si] ;~ 01A2:1742
cs=0x1a2;eip=0x001744; 	T(CBW);	// 2954 cbw ;~ 01A2:1744
cs=0x1a2;eip=0x001745; 	T(IMUL1_2(bx));	// 2955 imul    bx ;~ 01A2:1745
cs=0x1a2;eip=0x001747; 	X(ADD(*(dw*)(raddr(ss,bp+var_4)), ax));	// 2956 add     [bp+var_4], ax ;~ 01A2:1747
cs=0x1a2;eip=0x00174a; 	X(INC(*(dw*)(raddr(ss,bp+var_2))));	// 2957 inc     [bp+var_2] ;~ 01A2:174A
loc_1174d:
	// 4563 
cs=0x1a2;eip=0x00174d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 2960 mov     ax, [bp+var_6] ;~ 01A2:174D
cs=0x1a2;eip=0x001750; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), ax));	// 2961 cmp     [bp+var_2], ax ;~ 01A2:1750
cs=0x1a2;eip=0x001753; 	R(JL(loc_1173c));	// 2962 jl      short loc_1173C ;~ 01A2:1753
cs=0x1a2;eip=0x001755; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 2963 mov     ax, [bp+var_4] ;~ 01A2:1755
cs=0x1a2;eip=0x001758; 	T(SUB(dx, dx));	// 2964 sub     dx, dx ;~ 01A2:1758
cs=0x1a2;eip=0x00175a; 	X(POP(si));	// 2965 pop     si ;~ 01A2:175A
cs=0x1a2;eip=0x00175b; 	T(MOV(sp, bp));	// 2966 mov     sp, bp ;~ 01A2:175B
cs=0x1a2;eip=0x00175d; 	X(POP(bp));	// 2967 pop     bp ;~ 01A2:175D
cs=0x1a2;eip=0x00175e; 	R(RETF(0));	// 2968 retf ;~ 01A2:175E
sub_11760:
	// 2978 
#undef var_c
#define var_c -0x0C
	// 2980 var_C           = word ptr -0Ch ;~ 01A2:1760
#undef var_a
#define var_a -0x0A
	// 2981 var_A           = word ptr -0Ah ;~ 01A2:1760
#undef var_8
#define var_8 -8
	// 2982 var_8           = word ptr -8 ;~ 01A2:1760
#undef var_6
#define var_6 -6
	// 2983 var_6           = word ptr -6 ;~ 01A2:1760
#undef var_4
#define var_4 -4
	// 2984 var_4           = word ptr -4 ;~ 01A2:1760
#undef var_2
#define var_2 -2
	// 2985 var_2           = word ptr -2 ;~ 01A2:1760
#undef arg_0
#define arg_0 6
	// 2986 arg_0           = word ptr  6 ;~ 01A2:1760
ret_1a2_1760:
	// 4564 
cs=0x1a2;eip=0x001760; 	X(PUSH(bp));	// 2988 push    bp ;~ 01A2:1760
cs=0x1a2;eip=0x001761; 	T(MOV(bp, sp));	// 2989 mov     bp, sp ;~ 01A2:1761
cs=0x1a2;eip=0x001763; 	T(SUB(sp, 0x0C));	// 2990 sub     sp, 0Ch ;~ 01A2:1763
cs=0x1a2;eip=0x001766; 	T(MOV(ax, 0x101));	// 2991 mov     ax, 101h ;~ 01A2:1766
cs=0x1a2;eip=0x001769; 	X(PUSH(ax));	// 2992 push    ax ;~ 01A2:1769
cs=0x1a2;eip=0x00176a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 2993 push    [bp+arg_0] ;~ 01A2:176A
cs=0x1a2;eip=0x00176d; 	X(PUSH(cs));	// 2994 push    cs ;~ 01A2:176D
cs=0x1a2;eip=0x00176e; 	R(CALL(sub_116d0,0));	// 2995 call    near ptr sub_116D0 ;~ 01A2:176E
cs=0x1a2;eip=0x001771; 	T(ADD(sp, 4));	// 2996 add     sp, 4 ;~ 01A2:1771
cs=0x1a2;eip=0x001774; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 2997 mov     [bp+var_4], ax ;~ 01A2:1774
cs=0x1a2;eip=0x001777; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 2998 mov     [bp+var_2], dx ;~ 01A2:1777
cs=0x1a2;eip=0x00177a; 	T(MOV(ax, 0x10F));	// 2999 mov     ax, 10Fh ;~ 01A2:177A
cs=0x1a2;eip=0x00177d; 	X(PUSH(ax));	// 3000 push    ax ;~ 01A2:177D
cs=0x1a2;eip=0x00177e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 3001 push    [bp+arg_0] ;~ 01A2:177E
cs=0x1a2;eip=0x001781; 	X(PUSH(cs));	// 3002 push    cs ;~ 01A2:1781
cs=0x1a2;eip=0x001782; 	R(CALL(sub_1171a,0));	// 3003 call    near ptr sub_1171A ;~ 01A2:1782
cs=0x1a2;eip=0x001785; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 3004 mov     [bp+var_8], ax ;~ 01A2:1785
cs=0x1a2;eip=0x001788; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 3005 mov     [bp+var_6], dx ;~ 01A2:1788
cs=0x1a2;eip=0x00178b; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4))));	// 3006 mov     dx, [bp+var_4] ;~ 01A2:178B
cs=0x1a2;eip=0x00178e; 	T(OR(dx, *(dw*)(raddr(ss,bp+var_6))));	// 3007 or      dx, [bp+var_6] ;~ 01A2:178E
cs=0x1a2;eip=0x001791; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 3008 mov     [bp+var_C], ax ;~ 01A2:1791
cs=0x1a2;eip=0x001794; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), dx));	// 3009 mov     [bp+var_A], dx ;~ 01A2:1794
cs=0x1a2;eip=0x001797; 	T(MOV(sp, bp));	// 3010 mov     sp, bp ;~ 01A2:1797
cs=0x1a2;eip=0x001799; 	X(POP(bp));	// 3011 pop     bp ;~ 01A2:1799
cs=0x1a2;eip=0x00179a; 	R(RETF(0));	// 3012 retf ;~ 01A2:179A
sub_1179c:
	// 3022 
#undef var_16
#define var_16 -0x16
	// 3025 var_16          = word ptr -16h ;~ 01A2:179C
#undef var_14
#define var_14 -0x14
	// 3026 var_14          = byte ptr -14h ;~ 01A2:179C
#undef var_12
#define var_12 -0x12
	// 3027 var_12          = word ptr -12h ;~ 01A2:179C
#undef var_10
#define var_10 -0x10
	// 3028 var_10          = word ptr -10h ;~ 01A2:179C
#undef var_e
#define var_e -0x0E
	// 3029 var_E           = word ptr -0Eh ;~ 01A2:179C
#undef var_c
#define var_c -0x0C
	// 3030 var_C           = word ptr -0Ch ;~ 01A2:179C
#undef var_a
#define var_a -0x0A
	// 3031 var_A           = word ptr -0Ah ;~ 01A2:179C
#undef var_8
#define var_8 -8
	// 3032 var_8           = word ptr -8 ;~ 01A2:179C
#undef var_6
#define var_6 -6
	// 3033 var_6           = word ptr -6 ;~ 01A2:179C
#undef var_2
#define var_2 -2
	// 3034 var_2           = word ptr -2 ;~ 01A2:179C
#undef arg_0
#define arg_0 6
	// 3035 arg_0           = word ptr  6 ;~ 01A2:179C
ret_1a2_179c:
	// 4565 
cs=0x1a2;eip=0x00179c; 	X(PUSH(bp));	// 3037 push    bp ;~ 01A2:179C
cs=0x1a2;eip=0x00179d; 	T(MOV(bp, sp));	// 3038 mov     bp, sp ;~ 01A2:179D
cs=0x1a2;eip=0x00179f; 	T(SUB(sp, 0x16));	// 3039 sub     sp, 16h ;~ 01A2:179F
cs=0x1a2;eip=0x0017a2; 	X(PUSH(di));	// 3040 push    di ;~ 01A2:17A2
cs=0x1a2;eip=0x0017a3; 	X(PUSH(si));	// 3041 push    si ;~ 01A2:17A3
cs=0x1a2;eip=0x0017a4; 	X(MOV(byte_378c2, 1));	// 3042 mov     byte_378C2, 1 ;~ 01A2:17A4
cs=0x1a2;eip=0x0017a9; 	T(MOV(ax, 0x15));	// 3043 mov     ax, 15h ;~ 01A2:17A9
cs=0x1a2;eip=0x0017ac; 	X(MOV(word_37916, ax));	// 3044 mov     word_37916, ax ;~ 01A2:17AC
cs=0x1a2;eip=0x0017af; 	X(MOV(word_37914, ax));	// 3045 mov     word_37914, ax ;~ 01A2:17AF
cs=0x1a2;eip=0x0017b2; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x11));	// 3046 cmp     [bp+arg_0], 11h ;~ 01A2:17B2
cs=0x1a2;eip=0x0017b6; 	R(JNZ(loc_117ce));	// 3047 jnz     short loc_117CE ;~ 01A2:17B6
cs=0x1a2;eip=0x0017b8; 	T(SUB(ax, ax));	// 3048 sub     ax, ax ;~ 01A2:17B8
cs=0x1a2;eip=0x0017ba; 	X(PUSH(ax));	// 3049 push    ax ;~ 01A2:17BA
cs=0x1a2;eip=0x0017bb; 	R(CALLF(sub_2ad94,0));	// 3050 call    sub_2AD94 ;~ 01A2:17BB
cs=0x1a2;eip=0x0017c0; 	T(ADD(sp, 2));	// 3051 add     sp, 2 ;~ 01A2:17C0
cs=0x1a2;eip=0x0017c3; 	T(SUB(ax, ax));	// 3052 sub     ax, ax ;~ 01A2:17C3
cs=0x1a2;eip=0x0017c5; 	X(PUSH(ax));	// 3053 push    ax ;~ 01A2:17C5
cs=0x1a2;eip=0x0017c6; 	R(CALLF(sub_1d2d0,0));	// 3054 call    sub_1D2D0 ;~ 01A2:17C6
cs=0x1a2;eip=0x0017cb; 	T(ADD(sp, 2));	// 3055 add     sp, 2 ;~ 01A2:17CB
loc_117ce:
	// 4566 
cs=0x1a2;eip=0x0017ce; 	T(MOV(ax, word_2beda));	// 3058 mov     ax, word_2BEDA ;~ 01A2:17CE
cs=0x1a2;eip=0x0017d1; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 3059 mov     [bp+var_12], ax ;~ 01A2:17D1
cs=0x1a2;eip=0x0017d4; 	T(MOV(ax, word_34f21));	// 3060 mov     ax, word_34F21 ;~ 01A2:17D4
cs=0x1a2;eip=0x0017d7; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 3061 mov     [bp+var_16], ax ;~ 01A2:17D7
cs=0x1a2;eip=0x0017da; 	T(MOV(ax, word_34f23));	// 3062 mov     ax, word_34F23 ;~ 01A2:17DA
cs=0x1a2;eip=0x0017dd; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 3063 mov     [bp+var_C], ax ;~ 01A2:17DD
cs=0x1a2;eip=0x0017e0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 3064 mov     bx, [bp+arg_0] ;~ 01A2:17E0
cs=0x1a2;eip=0x0017e3; 	T(SHL(bx, 1));	// 3065 shl     bx, 1 ;~ 01A2:17E3
cs=0x1a2;eip=0x0017e5; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x16DA))));	// 3066 mov     ax, [bx+16DAh] ;~ 01A2:17E5
cs=0x1a2;eip=0x0017e9; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 3067 mov     [bp+var_A], ax ;~ 01A2:17E9
cs=0x1a2;eip=0x0017ec; 	T(MOV(bx, ax));	// 3068 mov     bx, ax ;~ 01A2:17EC
cs=0x1a2;eip=0x0017ee; 	T(MOV(al, *(raddr(ds,bx))));	// 3069 mov     al, [bx] ;~ 01A2:17EE
cs=0x1a2;eip=0x0017f0; 	T(SUB(ah, ah));	// 3070 sub     ah, ah ;~ 01A2:17F0
cs=0x1a2;eip=0x0017f2; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 3071 mov     [bp+var_6], ax ;~ 01A2:17F2
cs=0x1a2;eip=0x0017f5; 	T(CMP(ax, 5));	// 3072 cmp     ax, 5 ;~ 01A2:17F5
cs=0x1a2;eip=0x0017f8; 	R(JGE(loc_11802));	// 3073 jge     short loc_11802 ;~ 01A2:17F8
cs=0x1a2;eip=0x0017fa; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), 0));	// 3074 mov     [bp+var_6], 0 ;~ 01A2:17FA
cs=0x1a2;eip=0x0017ff; 	R(JMP(loc_1180f));	// 3075 jmp     short loc_1180F ;~ 01A2:17FF
loc_11802:
	// 4567 
cs=0x1a2;eip=0x001802; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 3080 mov     ax, [bp+var_6] ;~ 01A2:1802
cs=0x1a2;eip=0x001805; 	T(MOV(cl, 3));	// 3081 mov     cl, 3 ;~ 01A2:1805
cs=0x1a2;eip=0x001807; 	T(SHL(ax, cl));	// 3082 shl     ax, cl ;~ 01A2:1807
cs=0x1a2;eip=0x001809; 	T(SUB(ax, 0x28));	// 3083 sub     ax, 28h ; '(' ;~ 01A2:1809
cs=0x1a2;eip=0x00180c; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 3084 mov     [bp+var_6], ax ;~ 01A2:180C
loc_1180f:
	// 4568 
cs=0x1a2;eip=0x00180f; 	T(SUB(ax, ax));	// 3087 sub     ax, ax ;~ 01A2:180F
cs=0x1a2;eip=0x001811; 	X(MOV(word_2beda, ax));	// 3088 mov     word_2BEDA, ax ;~ 01A2:1811
cs=0x1a2;eip=0x001814; 	X(PUSH(ax));	// 3089 push    ax ;~ 01A2:1814
cs=0x1a2;eip=0x001815; 	R(CALLF(sub_2714e,0));	// 3090 call    far ptr sub_2714E ;~ 01A2:1815
cs=0x1a2;eip=0x00181a; 	T(ADD(sp, 2));	// 3091 add     sp, 2 ;~ 01A2:181A
cs=0x1a2;eip=0x00181d; 	T(MOV(ax, 0x85));	// 3092 mov     ax, 85h ; '…' ;~ 01A2:181D
cs=0x1a2;eip=0x001820; 	X(PUSH(ax));	// 3093 push    ax ;~ 01A2:1820
cs=0x1a2;eip=0x001821; 	T(MOV(ax, 0x71));	// 3094 mov     ax, 71h ; 'q' ;~ 01A2:1821
cs=0x1a2;eip=0x001824; 	X(PUSH(ax));	// 3095 push    ax ;~ 01A2:1824
cs=0x1a2;eip=0x001825; 	T(MOV(ax, 0x13F));	// 3096 mov     ax, 13Fh ;~ 01A2:1825
cs=0x1a2;eip=0x001828; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_6))));	// 3097 sub     ax, [bp+var_6] ;~ 01A2:1828
cs=0x1a2;eip=0x00182b; 	X(PUSH(ax));	// 3098 push    ax ;~ 01A2:182B
cs=0x1a2;eip=0x00182c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 3099 push    [bp+var_6] ;~ 01A2:182C
cs=0x1a2;eip=0x00182f; 	R(CALLF(sub_1d3b7,0));	// 3100 call    sub_1D3B7 ;~ 01A2:182F
cs=0x1a2;eip=0x001834; 	T(ADD(sp, 8));	// 3101 add     sp, 8 ;~ 01A2:1834
cs=0x1a2;eip=0x001837; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), 0));	// 3102 mov     [bp+var_10], 0 ;~ 01A2:1837
cs=0x1a2;eip=0x00183c; 	T(MOV(ax, 7));	// 3103 mov     ax, 7 ;~ 01A2:183C
cs=0x1a2;eip=0x00183f; 	X(PUSH(ax));	// 3104 push    ax ;~ 01A2:183F
cs=0x1a2;eip=0x001840; 	R(CALLF(sub_27031,0));	// 3105 call    far ptr sub_27031 ;~ 01A2:1840
cs=0x1a2;eip=0x001845; 	T(ADD(sp, 2));	// 3106 add     sp, 2 ;~ 01A2:1845
cs=0x1a2;eip=0x001848; 	T(MOV(ax, 0x85));	// 3107 mov     ax, 85h ; '…' ;~ 01A2:1848
cs=0x1a2;eip=0x00184b; 	X(PUSH(ax));	// 3108 push    ax ;~ 01A2:184B
cs=0x1a2;eip=0x00184c; 	T(MOV(ax, 0x71));	// 3109 mov     ax, 71h ; 'q' ;~ 01A2:184C
cs=0x1a2;eip=0x00184f; 	X(PUSH(ax));	// 3110 push    ax ;~ 01A2:184F
cs=0x1a2;eip=0x001850; 	T(MOV(ax, 0x13F));	// 3111 mov     ax, 13Fh ;~ 01A2:1850
cs=0x1a2;eip=0x001853; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_6))));	// 3112 sub     ax, [bp+var_6] ;~ 01A2:1853
cs=0x1a2;eip=0x001856; 	X(PUSH(ax));	// 3113 push    ax ;~ 01A2:1856
cs=0x1a2;eip=0x001857; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 3114 push    [bp+var_6] ;~ 01A2:1857
cs=0x1a2;eip=0x00185a; 	R(CALLF(sub_2785b,0));	// 3115 call    far ptr sub_2785B ;~ 01A2:185A
cs=0x1a2;eip=0x00185f; 	T(ADD(sp, 8));	// 3116 add     sp, 8 ;~ 01A2:185F
cs=0x1a2;eip=0x001862; 	T(SUB(ax, ax));	// 3117 sub     ax, ax ;~ 01A2:1862
cs=0x1a2;eip=0x001864; 	X(PUSH(ax));	// 3118 push    ax ;~ 01A2:1864
cs=0x1a2;eip=0x001865; 	R(CALLF(sub_27031,0));	// 3119 call    far ptr sub_27031 ;~ 01A2:1865
cs=0x1a2;eip=0x00186a; 	T(ADD(sp, 2));	// 3120 add     sp, 2 ;~ 01A2:186A
cs=0x1a2;eip=0x00186d; 	T(MOV(ax, 0x85));	// 3121 mov     ax, 85h ; '…' ;~ 01A2:186D
cs=0x1a2;eip=0x001870; 	X(PUSH(ax));	// 3122 push    ax ;~ 01A2:1870
cs=0x1a2;eip=0x001871; 	T(MOV(ax, 0x71));	// 3123 mov     ax, 71h ; 'q' ;~ 01A2:1871
cs=0x1a2;eip=0x001874; 	X(PUSH(ax));	// 3124 push    ax ;~ 01A2:1874
cs=0x1a2;eip=0x001875; 	T(MOV(ax, 0x13F));	// 3125 mov     ax, 13Fh ;~ 01A2:1875
cs=0x1a2;eip=0x001878; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_6))));	// 3126 sub     ax, [bp+var_6] ;~ 01A2:1878
cs=0x1a2;eip=0x00187b; 	X(PUSH(ax));	// 3127 push    ax ;~ 01A2:187B
cs=0x1a2;eip=0x00187c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 3128 push    [bp+var_6] ;~ 01A2:187C
cs=0x1a2;eip=0x00187f; 	R(CALLF(sub_137a4,0));	// 3129 call    sub_137A4 ;~ 01A2:187F
cs=0x1a2;eip=0x001884; 	T(ADD(sp, 8));	// 3130 add     sp, 8 ;~ 01A2:1884
cs=0x1a2;eip=0x001887; 	T(MOV(ax, 8));	// 3131 mov     ax, 8 ;~ 01A2:1887
cs=0x1a2;eip=0x00188a; 	X(PUSH(ax));	// 3132 push    ax ;~ 01A2:188A
cs=0x1a2;eip=0x00188b; 	R(CALLF(sub_27031,0));	// 3133 call    far ptr sub_27031 ;~ 01A2:188B
cs=0x1a2;eip=0x001890; 	T(ADD(sp, 2));	// 3134 add     sp, 2 ;~ 01A2:1890
cs=0x1a2;eip=0x001893; 	T(MOV(ax, 0x84));	// 3135 mov     ax, 84h ; '„' ;~ 01A2:1893
cs=0x1a2;eip=0x001896; 	X(PUSH(ax));	// 3136 push    ax ;~ 01A2:1896
cs=0x1a2;eip=0x001897; 	T(MOV(ax, 0x72));	// 3137 mov     ax, 72h ; 'r' ;~ 01A2:1897
cs=0x1a2;eip=0x00189a; 	X(PUSH(ax));	// 3138 push    ax ;~ 01A2:189A
cs=0x1a2;eip=0x00189b; 	T(MOV(ax, 0x13E));	// 3139 mov     ax, 13Eh ;~ 01A2:189B
cs=0x1a2;eip=0x00189e; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_6))));	// 3140 sub     ax, [bp+var_6] ;~ 01A2:189E
cs=0x1a2;eip=0x0018a1; 	X(PUSH(ax));	// 3141 push    ax ;~ 01A2:18A1
cs=0x1a2;eip=0x0018a2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 3142 mov     ax, [bp+var_6] ;~ 01A2:18A2
cs=0x1a2;eip=0x0018a5; 	T(INC(ax));	// 3143 inc     ax ;~ 01A2:18A5
cs=0x1a2;eip=0x0018a6; 	X(PUSH(ax));	// 3144 push    ax ;~ 01A2:18A6
cs=0x1a2;eip=0x0018a7; 	R(CALLF(sub_137a4,0));	// 3145 call    sub_137A4 ;~ 01A2:18A7
cs=0x1a2;eip=0x0018ac; 	T(ADD(sp, 8));	// 3146 add     sp, 8 ;~ 01A2:18AC
cs=0x1a2;eip=0x0018af; 	T(MOV(ax, 7));	// 3147 mov     ax, 7 ;~ 01A2:18AF
cs=0x1a2;eip=0x0018b2; 	X(PUSH(ax));	// 3148 push    ax ;~ 01A2:18B2
cs=0x1a2;eip=0x0018b3; 	T(SUB(ax, ax));	// 3149 sub     ax, ax ;~ 01A2:18B3
cs=0x1a2;eip=0x0018b5; 	X(PUSH(ax));	// 3150 push    ax ;~ 01A2:18B5
cs=0x1a2;eip=0x0018b6; 	R(CALLF(sub_1c8f3,0));	// 3151 call    sub_1C8F3 ;~ 01A2:18B6
cs=0x1a2;eip=0x0018bb; 	T(ADD(sp, 4));	// 3152 add     sp, 4 ;~ 01A2:18BB
cs=0x1a2;eip=0x0018be; 	T(SUB(ax, ax));	// 3153 sub     ax, ax ;~ 01A2:18BE
cs=0x1a2;eip=0x0018c0; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 3154 mov     [bp+var_E], ax ;~ 01A2:18C0
cs=0x1a2;eip=0x0018c3; 	X(PUSH(ax));	// 3155 push    ax ;~ 01A2:18C3
cs=0x1a2;eip=0x0018c4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 3156 push    [bp+var_A] ;~ 01A2:18C4
cs=0x1a2;eip=0x0018c7; 	R(CALLF(sub_139c2,0));	// 3157 call    sub_139C2 ;~ 01A2:18C7
cs=0x1a2;eip=0x0018cc; 	T(ADD(sp, 4));	// 3158 add     sp, 4 ;~ 01A2:18CC
cs=0x1a2;eip=0x0018cf; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 3159 mov     [bp+var_E], ax ;~ 01A2:18CF
cs=0x1a2;eip=0x0018d2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 3160 mov     ax, [bp+arg_0] ;~ 01A2:18D2
cs=0x1a2;eip=0x0018d5; 	T(SUB(ax, 5));	// 3161 sub     ax, 5           ; switch 46 cases ;~ 01A2:18D5
cs=0x1a2;eip=0x0018d8; 	T(CMP(ax, 0x2D));	// 3162 cmp     ax, 2Dh ;~ 01A2:18D8
cs=0x1a2;eip=0x0018db; 	R(JBE(loc_118e0));	// 3163 jbe     short loc_118E0 ;~ 01A2:18DB
cs=0x1a2;eip=0x0018dd; 	R(JMP(def_118e3));	// 3164 jmp     def_118E3       ; jumptable 000118E3 default case, cases 6,10,11,14,15,25,27-29,32,34,41,42,47,48 ;~ 01A2:18DD
loc_118e0:
	// 4569 
cs=0x1a2;eip=0x0018e0; 	T(ADD(ax, ax));	// 3168 add     ax, ax ;~ 01A2:18E0
cs=0x1a2;eip=0x0018e2; 	T(XCHG(ax, bx));	// 3169 xchg    ax, bx ;~ 01A2:18E2
	cs=seg_offset(seg000);
cs=0x1a2;eip=0x0018e3; __disp=*(dw*)(((db*)&jpt_118e3)+bx);
	R(JMP(__dispatch_call));	// 3170 jmp     cs:jpt_118E3[bx] ; switch jump ;~ 01A2:18E3
ret_1a2_18e8:
	// 4570 
cs=0x1a2;eip=0x0018e8; 	R(JMP(loc_1190d));	// 3172 jmp     short loc_1190D ; jumptable 000118E3 cases 8,16,20,26,30,35,36 ;~ 01A2:18E8
loc_118ea:
	// 4571 
cs=0x1a2;eip=0x0018ea; 	T(MOV(ax, 4));	// 3176 mov     ax, 4 ;~ 01A2:18EA
cs=0x1a2;eip=0x0018ed; 	X(PUSH(ax));	// 3177 push    ax ;~ 01A2:18ED
cs=0x1a2;eip=0x0018ee; 	R(CALLF(sub_26ffb,0));	// 3178 call    sub_26FFB ;~ 01A2:18EE
cs=0x1a2;eip=0x0018f3; 	T(ADD(sp, 2));	// 3179 add     sp, 2 ;~ 01A2:18F3
cs=0x1a2;eip=0x0018f6; 	T(ax = bp+var_14);	// 3180 lea     ax, [bp+var_14] ;~ 01A2:18F6
cs=0x1a2;eip=0x0018f9; 	X(PUSH(ax));	// 3181 push    ax ;~ 01A2:18F9
cs=0x1a2;eip=0x0018fa; 	X(PUSH(cs));	// 3182 push    cs ;~ 01A2:18FA
cs=0x1a2;eip=0x0018fb; 	R(CALL(sub_11e44,0));	// 3183 call    near ptr sub_11E44 ;~ 01A2:18FB
cs=0x1a2;eip=0x0018fe; 	T(ADD(sp, 2));	// 3184 add     sp, 2 ;~ 01A2:18FE
cs=0x1a2;eip=0x001901; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 3185 mov     [bp+var_2], ax ;~ 01A2:1901
cs=0x1a2;eip=0x001904; 	T(OR(ax, ax));	// 3186 or      ax, ax ;~ 01A2:1904
cs=0x1a2;eip=0x001906; 	R(JZ(loc_1190d));	// 3187 jz      short loc_1190D ; jumptable 000118E3 cases 8,16,20,26,30,35,36 ;~ 01A2:1906
cs=0x1a2;eip=0x001908; 	X(MOV(byte_34f9b, 1));	// 3188 mov     byte_34F9B, 1 ;~ 01A2:1908
loc_1190d:
	// 4572 
cs=0x1a2;eip=0x00190d; 	T(CMP(byte_34f9b, 0));	// 3192 cmp     byte_34F9B, 0   ; jumptable 000118E3 cases 8,16,20,26,30,35,36 ;~ 01A2:190D
cs=0x1a2;eip=0x001912; 	R(JZ(loc_118ea));	// 3193 jz      short loc_118EA ;~ 01A2:1912
cs=0x1a2;eip=0x001914; 	T(CMP(byte_34f9b, 0x80));	// 3194 cmp     byte_34F9B, 80h ; '€' ;~ 01A2:1914
loc_11919:
	// 4573 
cs=0x1a2;eip=0x001919; 	R(JNZ(loc_1191f));	// 3197 jnz     short loc_1191F ;~ 01A2:1919
loc_1191b:
	// 4574 
cs=0x1a2;eip=0x00191b; 	X(PUSH(cs));	// 3200 push    cs ;~ 01A2:191B
cs=0x1a2;eip=0x00191c; 	R(CALL(sub_107e4,0));	// 3201 call    near ptr sub_107E4 ;~ 01A2:191C
loc_1191f:
	// 4575 
cs=0x1a2;eip=0x00191f; 	X(MOV(byte_34f9b, 0));	// 3206 mov     byte_34F9B, 0 ;~ 01A2:191F
cs=0x1a2;eip=0x001924; 	R(JMP(loc_11dea));	// 3207 jmp     loc_11DEA ;~ 01A2:1924
loc_11928:
	// 4576 
cs=0x1a2;eip=0x001928; 	T(MOV(ax, 4));	// 3212 mov     ax, 4 ;~ 01A2:1928
cs=0x1a2;eip=0x00192b; 	X(PUSH(ax));	// 3213 push    ax ;~ 01A2:192B
cs=0x1a2;eip=0x00192c; 	R(CALLF(sub_26ffb,0));	// 3214 call    sub_26FFB ;~ 01A2:192C
cs=0x1a2;eip=0x001931; 	T(ADD(sp, 2));	// 3215 add     sp, 2 ;~ 01A2:1931
cs=0x1a2;eip=0x001934; 	T(ax = bp+var_14);	// 3216 lea     ax, [bp+var_14] ;~ 01A2:1934
cs=0x1a2;eip=0x001937; 	X(PUSH(ax));	// 3217 push    ax ;~ 01A2:1937
cs=0x1a2;eip=0x001938; 	X(PUSH(cs));	// 3218 push    cs ;~ 01A2:1938
cs=0x1a2;eip=0x001939; 	R(CALL(sub_11e44,0));	// 3219 call    near ptr sub_11E44 ;~ 01A2:1939
cs=0x1a2;eip=0x00193c; 	T(ADD(sp, 2));	// 3220 add     sp, 2 ;~ 01A2:193C
cs=0x1a2;eip=0x00193f; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 3221 mov     [bp+var_2], ax ;~ 01A2:193F
cs=0x1a2;eip=0x001942; 	T(OR(ax, ax));	// 3222 or      ax, ax ;~ 01A2:1942
cs=0x1a2;eip=0x001944; 	R(JZ(loc_1194b));	// 3223 jz      short loc_1194B ; jumptable 000118E3 cases 21,22,37,43 ;~ 01A2:1944
cs=0x1a2;eip=0x001946; 	X(MOV(byte_34f9b, 1));	// 3224 mov     byte_34F9B, 1 ;~ 01A2:1946
loc_1194b:
	// 4577 
cs=0x1a2;eip=0x00194b; 	T(CMP(byte_34f9b, 0));	// 3229 cmp     byte_34F9B, 0   ; jumptable 000118E3 cases 21,22,37,43 ;~ 01A2:194B
cs=0x1a2;eip=0x001950; 	R(JZ(loc_11928));	// 3230 jz      short loc_11928 ;~ 01A2:1950
cs=0x1a2;eip=0x001952; 	T(CMP(byte_352f2, 0));	// 3231 cmp     byte_352F2, 0 ;~ 01A2:1952
cs=0x1a2;eip=0x001957; 	R(JZ(loc_1191f));	// 3232 jz      short loc_1191F ;~ 01A2:1957
cs=0x1a2;eip=0x001959; 	T(CMP(byte_34f9b, 0x8A));	// 3233 cmp     byte_34F9B, 8Ah ; 'Š' ;~ 01A2:1959
cs=0x1a2;eip=0x00195e; 	R(JNZ(loc_1191f));	// 3234 jnz     short loc_1191F ;~ 01A2:195E
cs=0x1a2;eip=0x001960; 	X(MOV(byte_37515, 1));	// 3235 mov     byte_37515, 1 ;~ 01A2:1960
cs=0x1a2;eip=0x001965; 	R(JMP(loc_1191f));	// 3236 jmp     short loc_1191F ;~ 01A2:1965
loc_11968:
	// 4578 
cs=0x1a2;eip=0x001968; 	T(MOV(al, byte_37ae5));	// 3242 mov     al, byte_37AE5  ; jumptable 000118E3 case 33 ;~ 01A2:1968
cs=0x1a2;eip=0x00196b; 	T(SUB(ah, ah));	// 3243 sub     ah, ah ;~ 01A2:196B
cs=0x1a2;eip=0x00196d; 	T(MOV(cx, ax));	// 3244 mov     cx, ax ;~ 01A2:196D
cs=0x1a2;eip=0x00196f; 	T(SHL(ax, 1));	// 3245 shl     ax, 1 ;~ 01A2:196F
cs=0x1a2;eip=0x001971; 	T(ADD(ax, cx));	// 3246 add     ax, cx ;~ 01A2:1971
cs=0x1a2;eip=0x001973; 	T(SHL(ax, 1));	// 3247 shl     ax, 1 ;~ 01A2:1973
cs=0x1a2;eip=0x001975; 	T(ADD(ax, cx));	// 3248 add     ax, cx ;~ 01A2:1975
cs=0x1a2;eip=0x001977; 	T(MOV(cx, word_2bf14));	// 3249 mov     cx, word_2BF14 ;~ 01A2:1977
cs=0x1a2;eip=0x00197b; 	T(AND(cx, 7));	// 3250 and     cx, 7 ;~ 01A2:197B
cs=0x1a2;eip=0x00197e; 	T(SUB(ax, cx));	// 3251 sub     ax, cx ;~ 01A2:197E
cs=0x1a2;eip=0x001980; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 3252 mov     [bp+var_8], ax ;~ 01A2:1980
cs=0x1a2;eip=0x001983; 	T(CWD);	// 3253 cwd ;~ 01A2:1983
cs=0x1a2;eip=0x001984; 	T(MOV(cx, 0x64));	// 3254 mov     cx, 64h ; 'd' ;~ 01A2:1984
cs=0x1a2;eip=0x001987; 	T(IDIV2(cx));	// 3255 idiv    cx ;~ 01A2:1987
cs=0x1a2;eip=0x001989; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 3256 mov     [bp+var_2], ax ;~ 01A2:1989
cs=0x1a2;eip=0x00198c; 	T(OR(ax, ax));	// 3257 or      ax, ax ;~ 01A2:198C
cs=0x1a2;eip=0x00198e; 	R(JNZ(loc_11998));	// 3258 jnz     short loc_11998 ;~ 01A2:198E
cs=0x1a2;eip=0x001990; 	X(MOV(byte_2d9c7, 0x20));	// 3259 mov     byte_2D9C7, 20h ; ' ' ;~ 01A2:1990
cs=0x1a2;eip=0x001995; 	R(JMP(loc_119a0));	// 3260 jmp     short loc_119A0 ;~ 01A2:1995
loc_11998:
	// 4579 
cs=0x1a2;eip=0x001998; 	T(MOV(al, *(db*)(raddr(ss,bp+var_2))));	// 3265 mov     al, byte ptr [bp+var_2] ;~ 01A2:1998
cs=0x1a2;eip=0x00199b; 	T(ADD(al, 0x30));	// 3266 add     al, 30h ; '0' ;~ 01A2:199B
cs=0x1a2;eip=0x00199d; 	X(MOV(byte_2d9c7, al));	// 3267 mov     byte_2D9C7, al ;~ 01A2:199D
loc_119a0:
	// 4580 
cs=0x1a2;eip=0x0019a0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 3270 mov     ax, [bp+var_8] ;~ 01A2:19A0
cs=0x1a2;eip=0x0019a3; 	T(CWD);	// 3271 cwd ;~ 01A2:19A3
cs=0x1a2;eip=0x0019a4; 	T(MOV(cx, 0x0A));	// 3272 mov     cx, 0Ah ;~ 01A2:19A4
cs=0x1a2;eip=0x0019a7; 	T(IDIV2(cx));	// 3273 idiv    cx ;~ 01A2:19A7
cs=0x1a2;eip=0x0019a9; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_2))));	// 3274 mov     cx, [bp+var_2] ;~ 01A2:19A9
cs=0x1a2;eip=0x0019ac; 	T(MOV(dx, cx));	// 3275 mov     dx, cx ;~ 01A2:19AC
cs=0x1a2;eip=0x0019ae; 	T(SHL(cx, 1));	// 3276 shl     cx, 1 ;~ 01A2:19AE
cs=0x1a2;eip=0x0019b0; 	T(SHL(cx, 1));	// 3277 shl     cx, 1 ;~ 01A2:19B0
cs=0x1a2;eip=0x0019b2; 	T(ADD(cx, dx));	// 3278 add     cx, dx ;~ 01A2:19B2
cs=0x1a2;eip=0x0019b4; 	T(SHL(cx, 1));	// 3279 shl     cx, 1 ;~ 01A2:19B4
cs=0x1a2;eip=0x0019b6; 	T(SUB(al, cl));	// 3280 sub     al, cl ;~ 01A2:19B6
cs=0x1a2;eip=0x0019b8; 	T(ADD(al, 0x30));	// 3281 add     al, 30h ; '0' ;~ 01A2:19B8
cs=0x1a2;eip=0x0019ba; 	X(MOV(byte_2d9c8, al));	// 3282 mov     byte_2D9C8, al ;~ 01A2:19BA
cs=0x1a2;eip=0x0019bd; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 3283 mov     ax, [bp+var_8] ;~ 01A2:19BD
cs=0x1a2;eip=0x0019c0; 	T(CWD);	// 3284 cwd ;~ 01A2:19C0
cs=0x1a2;eip=0x0019c1; 	T(MOV(cx, 0x0A));	// 3285 mov     cx, 0Ah ;~ 01A2:19C1
cs=0x1a2;eip=0x0019c4; 	T(IDIV2(cx));	// 3286 idiv    cx ;~ 01A2:19C4
cs=0x1a2;eip=0x0019c6; 	T(ADD(dl, 0x30));	// 3287 add     dl, 30h ; '0' ;~ 01A2:19C6
cs=0x1a2;eip=0x0019c9; 	X(MOV(byte_2d9c9, dl));	// 3288 mov     byte_2D9C9, dl ;~ 01A2:19C9
cs=0x1a2;eip=0x0019cd; 	X(MOV(word_352c8, 0x2D));	// 3289 mov     word_352C8, 2Dh ; '-' ;~ 01A2:19CD
loc_119d3:
	// 4581 
cs=0x1a2;eip=0x0019d3; 	T(SUB(ax, ax));	// 3293 sub     ax, ax          ; jumptable 000118E3 case 45 ;~ 01A2:19D3
cs=0x1a2;eip=0x0019d5; 	X(PUSH(ax));	// 3294 push    ax ;~ 01A2:19D5
cs=0x1a2;eip=0x0019d6; 	R(CALLF(sub_1d2d0,0));	// 3295 call    sub_1D2D0 ;~ 01A2:19D6
cs=0x1a2;eip=0x0019db; 	T(ADD(sp, 2));	// 3296 add     sp, 2 ;~ 01A2:19DB
loc_119de:
	// 4582 
cs=0x1a2;eip=0x0019de; 	T(MOV(ax, 0x0C));	// 3300 mov     ax, 0Ch         ; jumptable 000118E3 cases 9,17,31,46 ;~ 01A2:19DE
cs=0x1a2;eip=0x0019e1; 	X(PUSH(ax));	// 3301 push    ax ;~ 01A2:19E1
cs=0x1a2;eip=0x0019e2; 	R(CALLF(sub_26ffb,0));	// 3302 call    sub_26FFB ;~ 01A2:19E2
cs=0x1a2;eip=0x0019e7; 	T(ADD(sp, 2));	// 3303 add     sp, 2 ;~ 01A2:19E7
cs=0x1a2;eip=0x0019ea; 	X(MOV(byte_34f9b, 0));	// 3304 mov     byte_34F9B, 0 ;~ 01A2:19EA
loc_119ef:
	// 4583 
cs=0x1a2;eip=0x0019ef; 	T(CMP(byte_34f9b, 0));	// 3308 cmp     byte_34F9B, 0 ;~ 01A2:19EF
cs=0x1a2;eip=0x0019f4; 	R(JZ(loc_119f9));	// 3309 jz      short loc_119F9 ;~ 01A2:19F4
cs=0x1a2;eip=0x0019f6; 	R(JMP(loc_1191f));	// 3310 jmp     loc_1191F ;~ 01A2:19F6
loc_119f9:
	// 4584 
cs=0x1a2;eip=0x0019f9; 	T(MOV(ax, 4));	// 3314 mov     ax, 4 ;~ 01A2:19F9
cs=0x1a2;eip=0x0019fc; 	X(PUSH(ax));	// 3315 push    ax ;~ 01A2:19FC
cs=0x1a2;eip=0x0019fd; 	R(CALLF(sub_26ffb,0));	// 3316 call    sub_26FFB ;~ 01A2:19FD
cs=0x1a2;eip=0x001a02; 	T(ADD(sp, 2));	// 3317 add     sp, 2 ;~ 01A2:1A02
cs=0x1a2;eip=0x001a05; 	T(ax = bp+var_14);	// 3318 lea     ax, [bp+var_14] ;~ 01A2:1A05
cs=0x1a2;eip=0x001a08; 	X(PUSH(ax));	// 3319 push    ax ;~ 01A2:1A08
cs=0x1a2;eip=0x001a09; 	X(PUSH(cs));	// 3320 push    cs ;~ 01A2:1A09
cs=0x1a2;eip=0x001a0a; 	R(CALL(sub_11e44,0));	// 3321 call    near ptr sub_11E44 ;~ 01A2:1A0A
cs=0x1a2;eip=0x001a0d; 	T(ADD(sp, 2));	// 3322 add     sp, 2 ;~ 01A2:1A0D
cs=0x1a2;eip=0x001a10; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 3323 mov     [bp+var_2], ax ;~ 01A2:1A10
cs=0x1a2;eip=0x001a13; 	T(OR(ax, ax));	// 3324 or      ax, ax ;~ 01A2:1A13
cs=0x1a2;eip=0x001a15; 	R(JZ(loc_119ef));	// 3325 jz      short loc_119EF ;~ 01A2:1A15
cs=0x1a2;eip=0x001a17; 	X(MOV(byte_34f9b, 1));	// 3326 mov     byte_34F9B, 1 ;~ 01A2:1A17
cs=0x1a2;eip=0x001a1c; 	R(JMP(loc_119ef));	// 3327 jmp     short loc_119EF ;~ 01A2:1A1C
loc_11a1e:
	// 4585 
cs=0x1a2;eip=0x001a1e; 	T(MOV(ax, 4));	// 3331 mov     ax, 4 ;~ 01A2:1A1E
cs=0x1a2;eip=0x001a21; 	X(PUSH(ax));	// 3332 push    ax ;~ 01A2:1A21
cs=0x1a2;eip=0x001a22; 	R(CALLF(sub_26ffb,0));	// 3333 call    sub_26FFB ;~ 01A2:1A22
cs=0x1a2;eip=0x001a27; 	T(ADD(sp, 2));	// 3334 add     sp, 2 ;~ 01A2:1A27
cs=0x1a2;eip=0x001a2a; 	T(ax = bp+var_14);	// 3335 lea     ax, [bp+var_14] ;~ 01A2:1A2A
cs=0x1a2;eip=0x001a2d; 	X(PUSH(ax));	// 3336 push    ax ;~ 01A2:1A2D
cs=0x1a2;eip=0x001a2e; 	X(PUSH(cs));	// 3337 push    cs ;~ 01A2:1A2E
cs=0x1a2;eip=0x001a2f; 	R(CALL(sub_11e44,0));	// 3338 call    near ptr sub_11E44 ;~ 01A2:1A2F
cs=0x1a2;eip=0x001a32; 	T(ADD(sp, 2));	// 3339 add     sp, 2 ;~ 01A2:1A32
cs=0x1a2;eip=0x001a35; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 3340 mov     [bp+var_2], ax ;~ 01A2:1A35
cs=0x1a2;eip=0x001a38; 	T(OR(ax, ax));	// 3341 or      ax, ax ;~ 01A2:1A38
cs=0x1a2;eip=0x001a3a; 	R(JZ(loc_11a41));	// 3342 jz      short loc_11A41 ; jumptable 000118E3 case 18 ;~ 01A2:1A3A
cs=0x1a2;eip=0x001a3c; 	X(MOV(byte_34f9b, 1));	// 3343 mov     byte_34F9B, 1 ;~ 01A2:1A3C
loc_11a41:
	// 4586 
cs=0x1a2;eip=0x001a41; 	T(CMP(byte_34f9b, 0));	// 3348 cmp     byte_34F9B, 0   ; jumptable 000118E3 case 18 ;~ 01A2:1A41
cs=0x1a2;eip=0x001a46; 	R(JZ(loc_11a1e));	// 3349 jz      short loc_11A1E ;~ 01A2:1A46
cs=0x1a2;eip=0x001a48; 	T(CMP(byte_34f9b, 0x59));	// 3350 cmp     byte_34F9B, 59h ; 'Y' ;~ 01A2:1A48
cs=0x1a2;eip=0x001a4d; 	R(JNZ(loc_11a52));	// 3351 jnz     short loc_11A52 ;~ 01A2:1A4D
cs=0x1a2;eip=0x001a4f; 	R(JMP(loc_1191b));	// 3352 jmp     loc_1191B ;~ 01A2:1A4F
loc_11a52:
	// 4587 
cs=0x1a2;eip=0x001a52; 	T(CMP(byte_34f9b, 0x79));	// 3356 cmp     byte_34F9B, 79h ; 'y' ;~ 01A2:1A52
cs=0x1a2;eip=0x001a57; 	R(JMP(loc_11919));	// 3357 jmp     loc_11919 ;~ 01A2:1A57
loc_11a5a:
	// 4588 
cs=0x1a2;eip=0x001a5a; 	X(MOV(byte_3a3a0, 0));	// 3362 mov     byte_3A3A0, 0   ; jumptable 000118E3 case 38 ;~ 01A2:1A5A
cs=0x1a2;eip=0x001a5f; 	R(JMP(loc_11a85));	// 3363 jmp     short loc_11A85 ;~ 01A2:1A5F
loc_11a62:
	// 4589 
cs=0x1a2;eip=0x001a62; 	T(MOV(ax, 4));	// 3368 mov     ax, 4 ;~ 01A2:1A62
cs=0x1a2;eip=0x001a65; 	X(PUSH(ax));	// 3369 push    ax ;~ 01A2:1A65
cs=0x1a2;eip=0x001a66; 	R(CALLF(sub_26ffb,0));	// 3370 call    sub_26FFB ;~ 01A2:1A66
cs=0x1a2;eip=0x001a6b; 	T(ADD(sp, 2));	// 3371 add     sp, 2 ;~ 01A2:1A6B
cs=0x1a2;eip=0x001a6e; 	T(ax = bp+var_14);	// 3372 lea     ax, [bp+var_14] ;~ 01A2:1A6E
cs=0x1a2;eip=0x001a71; 	X(PUSH(ax));	// 3373 push    ax ;~ 01A2:1A71
cs=0x1a2;eip=0x001a72; 	X(PUSH(cs));	// 3374 push    cs ;~ 01A2:1A72
cs=0x1a2;eip=0x001a73; 	R(CALL(sub_11e44,0));	// 3375 call    near ptr sub_11E44 ;~ 01A2:1A73
cs=0x1a2;eip=0x001a76; 	T(ADD(sp, 2));	// 3376 add     sp, 2 ;~ 01A2:1A76
cs=0x1a2;eip=0x001a79; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 3377 mov     [bp+var_2], ax ;~ 01A2:1A79
cs=0x1a2;eip=0x001a7c; 	T(OR(ax, ax));	// 3378 or      ax, ax ;~ 01A2:1A7C
cs=0x1a2;eip=0x001a7e; 	R(JZ(loc_11a85));	// 3379 jz      short loc_11A85 ;~ 01A2:1A7E
cs=0x1a2;eip=0x001a80; 	X(MOV(byte_34f9b, 1));	// 3380 mov     byte_34F9B, 1 ;~ 01A2:1A80
loc_11a85:
	// 4590 
cs=0x1a2;eip=0x001a85; 	T(CMP(byte_34f9b, 0));	// 3384 cmp     byte_34F9B, 0 ;~ 01A2:1A85
cs=0x1a2;eip=0x001a8a; 	R(JZ(loc_11a62));	// 3385 jz      short loc_11A62 ;~ 01A2:1A8A
cs=0x1a2;eip=0x001a8c; 	T(CMP(byte_34f9b, 0x59));	// 3386 cmp     byte_34F9B, 59h ; 'Y' ;~ 01A2:1A8C
cs=0x1a2;eip=0x001a91; 	R(JZ(loc_11a9d));	// 3387 jz      short loc_11A9D ;~ 01A2:1A91
cs=0x1a2;eip=0x001a93; 	T(CMP(byte_34f9b, 0x79));	// 3388 cmp     byte_34F9B, 79h ; 'y' ;~ 01A2:1A93
cs=0x1a2;eip=0x001a98; 	R(JZ(loc_11a9d));	// 3389 jz      short loc_11A9D ;~ 01A2:1A98
cs=0x1a2;eip=0x001a9a; 	R(JMP(loc_1191f));	// 3390 jmp     loc_1191F ;~ 01A2:1A9A
loc_11a9d:
	// 4591 
cs=0x1a2;eip=0x001a9d; 	X(MOV(byte_3a3a0, 1));	// 3395 mov     byte_3A3A0, 1 ;~ 01A2:1A9D
cs=0x1a2;eip=0x001aa2; 	R(JMP(loc_1191f));	// 3396 jmp     loc_1191F ;~ 01A2:1AA2
loc_11aa6:
	// 4592 
cs=0x1a2;eip=0x001aa6; 	T(MOV(ax, 4));	// 3401 mov     ax, 4 ;~ 01A2:1AA6
cs=0x1a2;eip=0x001aa9; 	X(PUSH(ax));	// 3402 push    ax ;~ 01A2:1AA9
cs=0x1a2;eip=0x001aaa; 	R(CALLF(sub_26ffb,0));	// 3403 call    sub_26FFB ;~ 01A2:1AAA
cs=0x1a2;eip=0x001aaf; 	T(ADD(sp, 2));	// 3404 add     sp, 2 ;~ 01A2:1AAF
cs=0x1a2;eip=0x001ab2; 	T(ax = bp+var_14);	// 3405 lea     ax, [bp+var_14] ;~ 01A2:1AB2
cs=0x1a2;eip=0x001ab5; 	X(PUSH(ax));	// 3406 push    ax ;~ 01A2:1AB5
cs=0x1a2;eip=0x001ab6; 	X(PUSH(cs));	// 3407 push    cs ;~ 01A2:1AB6
cs=0x1a2;eip=0x001ab7; 	R(CALL(sub_11e44,0));	// 3408 call    near ptr sub_11E44 ;~ 01A2:1AB7
cs=0x1a2;eip=0x001aba; 	T(ADD(sp, 2));	// 3409 add     sp, 2 ;~ 01A2:1ABA
cs=0x1a2;eip=0x001abd; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 3410 mov     [bp+var_2], ax ;~ 01A2:1ABD
cs=0x1a2;eip=0x001ac0; 	T(OR(ax, ax));	// 3411 or      ax, ax ;~ 01A2:1AC0
cs=0x1a2;eip=0x001ac2; 	R(JZ(loc_11aca));	// 3412 jz      short loc_11ACA ; jumptable 000118E3 case 19 ;~ 01A2:1AC2
cs=0x1a2;eip=0x001ac4; 	T(MOV(al, *(db*)(raddr(ss,bp+var_2))));	// 3413 mov     al, byte ptr [bp+var_2] ;~ 01A2:1AC4
cs=0x1a2;eip=0x001ac7; 	X(MOV(byte_34f9b, al));	// 3414 mov     byte_34F9B, al ;~ 01A2:1AC7
loc_11aca:
	// 4593 
cs=0x1a2;eip=0x001aca; 	T(CMP(byte_34f9b, 0));	// 3418 cmp     byte_34F9B, 0   ; jumptable 000118E3 case 19 ;~ 01A2:1ACA
cs=0x1a2;eip=0x001acf; 	R(JZ(loc_11aa6));	// 3419 jz      short loc_11AA6 ;~ 01A2:1ACF
cs=0x1a2;eip=0x001ad1; 	T(MOV(al, byte_34f9b));	// 3420 mov     al, byte_34F9B ;~ 01A2:1AD1
cs=0x1a2;eip=0x001ad4; 	T(SUB(ah, ah));	// 3421 sub     ah, ah ;~ 01A2:1AD4
cs=0x1a2;eip=0x001ad6; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 3422 mov     [bp+var_2], ax ;~ 01A2:1AD6
cs=0x1a2;eip=0x001ad9; 	X(MOV(byte_34f9b, ah));	// 3423 mov     byte_34F9B, ah ;~ 01A2:1AD9
cs=0x1a2;eip=0x001add; 	T(CMP(ax, 0x80));	// 3424 cmp     ax, 80h ; '€' ;~ 01A2:1ADD
cs=0x1a2;eip=0x001ae0; 	R(JNZ(loc_11ae6));	// 3425 jnz     short loc_11AE6 ;~ 01A2:1AE0
cs=0x1a2;eip=0x001ae2; 	X(PUSH(cs));	// 3426 push    cs ;~ 01A2:1AE2
cs=0x1a2;eip=0x001ae3; 	R(CALL(sub_107e4,0));	// 3427 call    near ptr sub_107E4 ;~ 01A2:1AE3
loc_11ae6:
	// 4594 
cs=0x1a2;eip=0x001ae6; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x0D));	// 3431 cmp     [bp+var_2], 0Dh ;~ 01A2:1AE6
cs=0x1a2;eip=0x001aea; 	R(JNZ(loc_11aef));	// 3432 jnz     short loc_11AEF ;~ 01A2:1AEA
cs=0x1a2;eip=0x001aec; 	R(JMP(loc_11dea));	// 3433 jmp     loc_11DEA ;~ 01A2:1AEC
loc_11aef:
	// 4595 
cs=0x1a2;eip=0x001aef; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x91));	// 3437 cmp     [bp+var_2], 91h ; '‘' ;~ 01A2:1AEF
cs=0x1a2;eip=0x001af4; 	R(JZ(loc_11b04));	// 3438 jz      short loc_11B04 ;~ 01A2:1AF4
cs=0x1a2;eip=0x001af6; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x92));	// 3439 cmp     [bp+var_2], 92h ; '’' ;~ 01A2:1AF6
cs=0x1a2;eip=0x001afb; 	R(JZ(loc_11b04));	// 3440 jz      short loc_11B04 ;~ 01A2:1AFB
cs=0x1a2;eip=0x001afd; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x94));	// 3441 cmp     [bp+var_2], 94h ; '”' ;~ 01A2:1AFD
cs=0x1a2;eip=0x001b02; 	R(JNZ(loc_11b16));	// 3442 jnz     short loc_11B16 ;~ 01A2:1B02
loc_11b04:
	// 4596 
cs=0x1a2;eip=0x001b04; 	T(CMP(byte_2d740, 0x41));	// 3446 cmp     byte_2D740, 41h ; 'A' ;~ 01A2:1B04
cs=0x1a2;eip=0x001b09; 	R(JNZ(loc_11b12));	// 3447 jnz     short loc_11B12 ;~ 01A2:1B09
cs=0x1a2;eip=0x001b0b; 	X(MOV(byte_2d740, 0x46));	// 3448 mov     byte_2D740, 46h ; 'F' ;~ 01A2:1B0B
cs=0x1a2;eip=0x001b10; 	R(JMP(loc_11b16));	// 3449 jmp     short loc_11B16 ;~ 01A2:1B10
loc_11b12:
	// 4597 
cs=0x1a2;eip=0x001b12; 	X(DEC(byte_2d740));	// 3453 dec     byte_2D740 ;~ 01A2:1B12
loc_11b16:
	// 4598 
cs=0x1a2;eip=0x001b16; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x96));	// 3457 cmp     [bp+var_2], 96h ; '–' ;~ 01A2:1B16
cs=0x1a2;eip=0x001b1b; 	R(JZ(loc_11b2b));	// 3458 jz      short loc_11B2B ;~ 01A2:1B1B
cs=0x1a2;eip=0x001b1d; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x98));	// 3459 cmp     [bp+var_2], 98h ;~ 01A2:1B1D
cs=0x1a2;eip=0x001b22; 	R(JZ(loc_11b2b));	// 3460 jz      short loc_11B2B ;~ 01A2:1B22
cs=0x1a2;eip=0x001b24; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x99));	// 3461 cmp     [bp+var_2], 99h ; '™' ;~ 01A2:1B24
cs=0x1a2;eip=0x001b29; 	R(JNZ(loc_11b3e));	// 3462 jnz     short loc_11B3E ;~ 01A2:1B29
loc_11b2b:
	// 4599 
cs=0x1a2;eip=0x001b2b; 	T(CMP(byte_2d740, 0x46));	// 3466 cmp     byte_2D740, 46h ; 'F' ;~ 01A2:1B2B
cs=0x1a2;eip=0x001b30; 	R(JNZ(loc_11b3a));	// 3467 jnz     short loc_11B3A ;~ 01A2:1B30
cs=0x1a2;eip=0x001b32; 	X(MOV(byte_2d740, 0x41));	// 3468 mov     byte_2D740, 41h ; 'A' ;~ 01A2:1B32
cs=0x1a2;eip=0x001b37; 	R(JMP(loc_11b3e));	// 3469 jmp     short loc_11B3E ;~ 01A2:1B37
loc_11b3a:
	// 4600 
cs=0x1a2;eip=0x001b3a; 	X(INC(byte_2d740));	// 3474 inc     byte_2D740 ;~ 01A2:1B3A
loc_11b3e:
	// 4601 
cs=0x1a2;eip=0x001b3e; 	X(AND(*(dw*)(raddr(ss,bp+var_2)), 0x0DF));	// 3478 and     [bp+var_2], 0DFh ;~ 01A2:1B3E
cs=0x1a2;eip=0x001b43; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x41));	// 3479 cmp     [bp+var_2], 41h ; 'A' ;~ 01A2:1B43
cs=0x1a2;eip=0x001b47; 	R(JL(loc_11b55));	// 3480 jl      short loc_11B55 ;~ 01A2:1B47
cs=0x1a2;eip=0x001b49; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x46));	// 3481 cmp     [bp+var_2], 46h ; 'F' ;~ 01A2:1B49
cs=0x1a2;eip=0x001b4d; 	R(JG(loc_11b55));	// 3482 jg      short loc_11B55 ;~ 01A2:1B4D
cs=0x1a2;eip=0x001b4f; 	T(MOV(al, *(db*)(raddr(ss,bp+var_2))));	// 3483 mov     al, byte ptr [bp+var_2] ;~ 01A2:1B4F
cs=0x1a2;eip=0x001b52; 	X(MOV(byte_2d740, al));	// 3484 mov     byte_2D740, al ;~ 01A2:1B52
loc_11b55:
	// 4602 
cs=0x1a2;eip=0x001b55; 	T(MOV(al, byte_2d740));	// 3488 mov     al, byte_2D740 ;~ 01A2:1B55
cs=0x1a2;eip=0x001b58; 	X(MOV(byte_2c91a, al));	// 3489 mov     byte_2C91A, al ;~ 01A2:1B58
cs=0x1a2;eip=0x001b5b; 	X(MOV(byte_2c8ca, al));	// 3490 mov     byte_2C8CA, al ;~ 01A2:1B5B
cs=0x1a2;eip=0x001b5e; 	X(MOV(byte_2c90a, al));	// 3491 mov     byte_2C90A, al ;~ 01A2:1B5E
cs=0x1a2;eip=0x001b61; 	X(MOV(byte_2c8fa, al));	// 3492 mov     byte_2C8FA, al ;~ 01A2:1B61
cs=0x1a2;eip=0x001b64; 	X(MOV(byte_2c8ea, al));	// 3493 mov     byte_2C8EA, al ;~ 01A2:1B64
cs=0x1a2;eip=0x001b67; 	X(MOV(byte_2ddf8, al));	// 3494 mov     byte_2DDF8, al ;~ 01A2:1B67
cs=0x1a2;eip=0x001b6a; 	X(MOV(byte_2d761, al));	// 3495 mov     byte_2D761, al ;~ 01A2:1B6A
cs=0x1a2;eip=0x001b6d; 	T(SUB(ax, ax));	// 3496 sub     ax, ax ;~ 01A2:1B6D
cs=0x1a2;eip=0x001b6f; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 3497 mov     [bp+var_E], ax ;~ 01A2:1B6F
cs=0x1a2;eip=0x001b72; 	X(PUSH(ax));	// 3498 push    ax ;~ 01A2:1B72
cs=0x1a2;eip=0x001b73; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 3499 push    [bp+var_A] ;~ 01A2:1B73
cs=0x1a2;eip=0x001b76; 	R(CALLF(sub_139c2,0));	// 3500 call    sub_139C2 ;~ 01A2:1B76
cs=0x1a2;eip=0x001b7b; 	T(ADD(sp, 4));	// 3501 add     sp, 4 ;~ 01A2:1B7B
cs=0x1a2;eip=0x001b7e; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 3502 mov     [bp+var_E], ax ;~ 01A2:1B7E
cs=0x1a2;eip=0x001b81; 	R(JMP(loc_11aca));	// 3503 jmp     loc_11ACA       ; jumptable 000118E3 case 19 ;~ 01A2:1B81
loc_11b84:
	// 4603 
cs=0x1a2;eip=0x001b84; 	T(MOV(ax, 0x1E));	// 3508 mov     ax, 1Eh         ; jumptable 000118E3 cases 7,12,13,23,24,39,40,44 ;~ 01A2:1B84
loc_11b87:
	// 4604 
cs=0x1a2;eip=0x001b87; 	X(PUSH(ax));	// 3511 push    ax ;~ 01A2:1B87
cs=0x1a2;eip=0x001b88; 	R(CALLF(sub_26ffb,0));	// 3512 call    sub_26FFB ;~ 01A2:1B88
cs=0x1a2;eip=0x001b8d; 	T(ADD(sp, 2));	// 3513 add     sp, 2 ;~ 01A2:1B8D
cs=0x1a2;eip=0x001b90; 	R(JMP(loc_11dea));	// 3514 jmp     loc_11DEA ;~ 01A2:1B90
loc_11b94:
	// 4605 
cs=0x1a2;eip=0x001b94; 	R(CALLF(sub_1c824,0));	// 3520 call    sub_1C824       ; jumptable 000118E3 case 5 ;~ 01A2:1B94
cs=0x1a2;eip=0x001b99; 	T(MOV(ax, word_2bf02));	// 3521 mov     ax, word_2BF02 ;~ 01A2:1B99
cs=0x1a2;eip=0x001b9c; 	X(MOV(word_2bf04, ax));	// 3522 mov     word_2BF04, ax ;~ 01A2:1B9C
cs=0x1a2;eip=0x001b9f; 	T(MOV(ax, word_2bf0c));	// 3523 mov     ax, word_2BF0C ;~ 01A2:1B9F
cs=0x1a2;eip=0x001ba2; 	X(MOV(word_2bf0e, ax));	// 3524 mov     word_2BF0E, ax ;~ 01A2:1BA2
cs=0x1a2;eip=0x001ba5; 	R(CALLF(sub_1c824,0));	// 3525 call    sub_1C824 ;~ 01A2:1BA5
cs=0x1a2;eip=0x001baa; 	T(MOV(ax, word_2bf04));	// 3526 mov     ax, word_2BF04 ;~ 01A2:1BAA
cs=0x1a2;eip=0x001bad; 	T(ADD(ax, word_2bf02));	// 3527 add     ax, word_2BF02 ;~ 01A2:1BAD
cs=0x1a2;eip=0x001bb1; 	T(SHR(ax, 1));	// 3528 shr     ax, 1 ;~ 01A2:1BB1
cs=0x1a2;eip=0x001bb3; 	X(MOV(word_2befe, ax));	// 3529 mov     word_2BEFE, ax ;~ 01A2:1BB3
cs=0x1a2;eip=0x001bb6; 	X(MOV(word_2bf00, ax));	// 3530 mov     word_2BF00, ax ;~ 01A2:1BB6
cs=0x1a2;eip=0x001bb9; 	X(MOV(word_2befc, ax));	// 3531 mov     word_2BEFC, ax ;~ 01A2:1BB9
cs=0x1a2;eip=0x001bbc; 	T(MOV(ax, word_2bf0e));	// 3532 mov     ax, word_2BF0E ;~ 01A2:1BBC
cs=0x1a2;eip=0x001bbf; 	T(ADD(ax, word_2bf0c));	// 3533 add     ax, word_2BF0C ;~ 01A2:1BBF
cs=0x1a2;eip=0x001bc3; 	T(SHR(ax, 1));	// 3534 shr     ax, 1 ;~ 01A2:1BC3
cs=0x1a2;eip=0x001bc5; 	X(MOV(word_2bf08, ax));	// 3535 mov     word_2BF08, ax ;~ 01A2:1BC5
cs=0x1a2;eip=0x001bc8; 	X(MOV(word_2bf0a, ax));	// 3536 mov     word_2BF0A, ax ;~ 01A2:1BC8
cs=0x1a2;eip=0x001bcb; 	X(MOV(word_2bf06, ax));	// 3537 mov     word_2BF06, ax ;~ 01A2:1BCB
cs=0x1a2;eip=0x001bce; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x0FF));	// 3538 mov     [bp+var_2], 0FFh ;~ 01A2:1BCE
loc_11bd3:
	// 4606 
cs=0x1a2;eip=0x001bd3; 	R(CALLF(sub_1c898,0));	// 3542 call    sub_1C898 ;~ 01A2:1BD3
cs=0x1a2;eip=0x001bd8; 	T(OR(ax, ax));	// 3543 or      ax, ax ;~ 01A2:1BD8
cs=0x1a2;eip=0x001bda; 	R(JZ(loc_11bdf));	// 3544 jz      short loc_11BDF ;~ 01A2:1BDA
cs=0x1a2;eip=0x001bdc; 	R(JMP(loc_11dea));	// 3545 jmp     loc_11DEA ;~ 01A2:1BDC
loc_11bdf:
	// 4607 
cs=0x1a2;eip=0x001bdf; 	T(CMP(byte_34f9b, 0x80));	// 3549 cmp     byte_34F9B, 80h ; '€' ;~ 01A2:1BDF
cs=0x1a2;eip=0x001be4; 	R(JNZ(loc_11be9));	// 3550 jnz     short loc_11BE9 ;~ 01A2:1BE4
cs=0x1a2;eip=0x001be6; 	R(JMP(loc_1191f));	// 3551 jmp     loc_1191F ;~ 01A2:1BE6
loc_11be9:
	// 4608 
cs=0x1a2;eip=0x001be9; 	T(CMP(byte_34f9b, 0x0D));	// 3555 cmp     byte_34F9B, 0Dh ;~ 01A2:1BE9
cs=0x1a2;eip=0x001bee; 	R(JNZ(loc_11bf3));	// 3556 jnz     short loc_11BF3 ;~ 01A2:1BEE
cs=0x1a2;eip=0x001bf0; 	R(JMP(loc_1191f));	// 3557 jmp     loc_1191F ;~ 01A2:1BF0
loc_11bf3:
	// 4609 
cs=0x1a2;eip=0x001bf3; 	X(MOV(byte_352bb, 0));	// 3561 mov     byte_352BB, 0 ;~ 01A2:1BF3
cs=0x1a2;eip=0x001bf8; 	X(PUSH(cs));	// 3562 push    cs ;~ 01A2:1BF8
cs=0x1a2;eip=0x001bf9; 	R(CALL(sub_11ea4,0));	// 3563 call    near ptr sub_11EA4 ;~ 01A2:1BF9
cs=0x1a2;eip=0x001bfc; 	T(MOV(al, byte_352bb));	// 3564 mov     al, byte_352BB ;~ 01A2:1BFC
cs=0x1a2;eip=0x001bff; 	T(SUB(ah, ah));	// 3565 sub     ah, ah ;~ 01A2:1BFF
cs=0x1a2;eip=0x001c01; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), ax));	// 3566 cmp     [bp+var_2], ax ;~ 01A2:1C01
cs=0x1a2;eip=0x001c04; 	R(JZ(loc_11bd3));	// 3567 jz      short loc_11BD3 ;~ 01A2:1C04
cs=0x1a2;eip=0x001c06; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x0FF));	// 3568 cmp     [bp+var_2], 0FFh ;~ 01A2:1C06
cs=0x1a2;eip=0x001c0b; 	R(JZ(loc_11c52));	// 3569 jz      short loc_11C52 ;~ 01A2:1C0B
cs=0x1a2;eip=0x001c0d; 	T(MOV(ax, 7));	// 3570 mov     ax, 7 ;~ 01A2:1C0D
cs=0x1a2;eip=0x001c10; 	X(PUSH(ax));	// 3571 push    ax ;~ 01A2:1C10
cs=0x1a2;eip=0x001c11; 	R(CALLF(sub_27031,0));	// 3572 call    far ptr sub_27031 ;~ 01A2:1C11
cs=0x1a2;eip=0x001c16; 	T(ADD(sp, 2));	// 3573 add     sp, 2 ;~ 01A2:1C16
cs=0x1a2;eip=0x001c19; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 3574 mov     ax, [bp+var_2] ;~ 01A2:1C19
cs=0x1a2;eip=0x001c1c; 	T(CWD);	// 3575 cwd ;~ 01A2:1C1C
cs=0x1a2;eip=0x001c1d; 	T(XOR(ax, dx));	// 3576 xor     ax, dx ;~ 01A2:1C1D
cs=0x1a2;eip=0x001c1f; 	T(SUB(ax, dx));	// 3577 sub     ax, dx ;~ 01A2:1C1F
cs=0x1a2;eip=0x001c21; 	T(MOV(cx, 2));	// 3578 mov     cx, 2 ;~ 01A2:1C21
cs=0x1a2;eip=0x001c24; 	T(SAR(ax, cl));	// 3579 sar     ax, cl ;~ 01A2:1C24
cs=0x1a2;eip=0x001c26; 	T(XOR(ax, dx));	// 3580 xor     ax, dx ;~ 01A2:1C26
cs=0x1a2;eip=0x001c28; 	T(SUB(ax, dx));	// 3581 sub     ax, dx ;~ 01A2:1C28
cs=0x1a2;eip=0x001c2a; 	T(MOV(bx, ax));	// 3582 mov     bx, ax ;~ 01A2:1C2A
cs=0x1a2;eip=0x001c2c; 	T(MOV(al, *(raddr(ds,bx+0x0A2))));	// 3583 mov     al, [bx+0A2h] ;~ 01A2:1C2C
cs=0x1a2;eip=0x001c30; 	T(SUB(ah, ah));	// 3584 sub     ah, ah ;~ 01A2:1C30
cs=0x1a2;eip=0x001c32; 	T(MOV(si, ax));	// 3585 mov     si, ax ;~ 01A2:1C32
cs=0x1a2;eip=0x001c34; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 3586 mov     bx, [bp+var_2] ;~ 01A2:1C34
cs=0x1a2;eip=0x001c37; 	T(AND(bx, 3));	// 3587 and     bx, 3 ;~ 01A2:1C37
cs=0x1a2;eip=0x001c3a; 	T(MOV(al, *(raddr(ds,bx+0x0A6))));	// 3588 mov     al, [bx+0A6h] ;~ 01A2:1C3A
cs=0x1a2;eip=0x001c3e; 	T(MOV(di, ax));	// 3589 mov     di, ax ;~ 01A2:1C3E
cs=0x1a2;eip=0x001c40; 	T(ax = di+1);	// 3590 lea     ax, [di+1] ;~ 01A2:1C40
cs=0x1a2;eip=0x001c43; 	X(PUSH(ax));	// 3591 push    ax ;~ 01A2:1C43
cs=0x1a2;eip=0x001c44; 	X(PUSH(di));	// 3592 push    di ;~ 01A2:1C44
cs=0x1a2;eip=0x001c45; 	T(ax = si+1);	// 3593 lea     ax, [si+1] ;~ 01A2:1C45
cs=0x1a2;eip=0x001c48; 	X(PUSH(ax));	// 3594 push    ax ;~ 01A2:1C48
cs=0x1a2;eip=0x001c49; 	X(PUSH(si));	// 3595 push    si ;~ 01A2:1C49
cs=0x1a2;eip=0x001c4a; 	R(CALLF(sub_2785b,0));	// 3596 call    far ptr sub_2785B ;~ 01A2:1C4A
cs=0x1a2;eip=0x001c4f; 	T(ADD(sp, 8));	// 3597 add     sp, 8 ;~ 01A2:1C4F
loc_11c52:
	// 4610 
cs=0x1a2;eip=0x001c52; 	T(SUB(ax, ax));	// 3600 sub     ax, ax ;~ 01A2:1C52
cs=0x1a2;eip=0x001c54; 	X(PUSH(ax));	// 3601 push    ax ;~ 01A2:1C54
cs=0x1a2;eip=0x001c55; 	R(CALLF(sub_27031,0));	// 3602 call    far ptr sub_27031 ;~ 01A2:1C55
cs=0x1a2;eip=0x001c5a; 	T(ADD(sp, 2));	// 3603 add     sp, 2 ;~ 01A2:1C5A
cs=0x1a2;eip=0x001c5d; 	T(MOV(al, byte_352bb));	// 3604 mov     al, byte_352BB ;~ 01A2:1C5D
cs=0x1a2;eip=0x001c60; 	T(SUB(ah, ah));	// 3605 sub     ah, ah ;~ 01A2:1C60
cs=0x1a2;eip=0x001c62; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 3606 mov     [bp+var_2], ax ;~ 01A2:1C62
cs=0x1a2;eip=0x001c65; 	T(CWD);	// 3607 cwd ;~ 01A2:1C65
cs=0x1a2;eip=0x001c66; 	T(XOR(ax, dx));	// 3608 xor     ax, dx ;~ 01A2:1C66
cs=0x1a2;eip=0x001c68; 	T(SUB(ax, dx));	// 3609 sub     ax, dx ;~ 01A2:1C68
cs=0x1a2;eip=0x001c6a; 	T(MOV(cx, 2));	// 3610 mov     cx, 2 ;~ 01A2:1C6A
cs=0x1a2;eip=0x001c6d; 	T(SAR(ax, cl));	// 3611 sar     ax, cl ;~ 01A2:1C6D
cs=0x1a2;eip=0x001c6f; 	T(XOR(ax, dx));	// 3612 xor     ax, dx ;~ 01A2:1C6F
cs=0x1a2;eip=0x001c71; 	T(SUB(ax, dx));	// 3613 sub     ax, dx ;~ 01A2:1C71
cs=0x1a2;eip=0x001c73; 	T(MOV(bx, ax));	// 3614 mov     bx, ax ;~ 01A2:1C73
cs=0x1a2;eip=0x001c75; 	T(MOV(al, *(raddr(ds,bx+0x0A2))));	// 3615 mov     al, [bx+0A2h] ;~ 01A2:1C75
cs=0x1a2;eip=0x001c79; 	T(SUB(ah, ah));	// 3616 sub     ah, ah ;~ 01A2:1C79
cs=0x1a2;eip=0x001c7b; 	T(MOV(si, ax));	// 3617 mov     si, ax ;~ 01A2:1C7B
cs=0x1a2;eip=0x001c7d; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_2))));	// 3618 mov     bx, [bp+var_2] ;~ 01A2:1C7D
cs=0x1a2;eip=0x001c80; 	T(AND(bx, 3));	// 3619 and     bx, 3 ;~ 01A2:1C80
cs=0x1a2;eip=0x001c83; 	T(MOV(al, *(raddr(ds,bx+0x0A6))));	// 3620 mov     al, [bx+0A6h] ;~ 01A2:1C83
cs=0x1a2;eip=0x001c87; 	T(MOV(di, ax));	// 3621 mov     di, ax ;~ 01A2:1C87
cs=0x1a2;eip=0x001c89; 	T(ax = di+1);	// 3622 lea     ax, [di+1] ;~ 01A2:1C89
cs=0x1a2;eip=0x001c8c; 	X(PUSH(ax));	// 3623 push    ax ;~ 01A2:1C8C
cs=0x1a2;eip=0x001c8d; 	X(PUSH(di));	// 3624 push    di ;~ 01A2:1C8D
cs=0x1a2;eip=0x001c8e; 	T(ax = si+1);	// 3625 lea     ax, [si+1] ;~ 01A2:1C8E
cs=0x1a2;eip=0x001c91; 	X(PUSH(ax));	// 3626 push    ax ;~ 01A2:1C91
cs=0x1a2;eip=0x001c92; 	X(PUSH(si));	// 3627 push    si ;~ 01A2:1C92
cs=0x1a2;eip=0x001c93; 	R(CALLF(sub_2785b,0));	// 3628 call    far ptr sub_2785B ;~ 01A2:1C93
cs=0x1a2;eip=0x001c98; 	T(ADD(sp, 8));	// 3629 add     sp, 8 ;~ 01A2:1C98
cs=0x1a2;eip=0x001c9b; 	R(JMP(loc_11bd3));	// 3630 jmp     loc_11BD3 ;~ 01A2:1C9B
loc_11c9e:
	// 4611 
cs=0x1a2;eip=0x001c9e; 	T(MOV(ax, 2));	// 3634 mov     ax, 2 ;~ 01A2:1C9E
cs=0x1a2;eip=0x001ca1; 	X(PUSH(ax));	// 3635 push    ax ;~ 01A2:1CA1
cs=0x1a2;eip=0x001ca2; 	R(CALLF(sub_26ffb,0));	// 3636 call    sub_26FFB ;~ 01A2:1CA2
cs=0x1a2;eip=0x001ca7; 	T(ADD(sp, 2));	// 3637 add     sp, 2 ;~ 01A2:1CA7
cs=0x1a2;eip=0x001caa; 	T(ax = bp+var_14);	// 3638 lea     ax, [bp+var_14] ;~ 01A2:1CAA
cs=0x1a2;eip=0x001cad; 	X(PUSH(ax));	// 3639 push    ax ;~ 01A2:1CAD
cs=0x1a2;eip=0x001cae; 	X(PUSH(cs));	// 3640 push    cs ;~ 01A2:1CAE
cs=0x1a2;eip=0x001caf; 	R(CALL(sub_11e44,0));	// 3641 call    near ptr sub_11E44 ;~ 01A2:1CAF
cs=0x1a2;eip=0x001cb2; 	T(ADD(sp, 2));	// 3642 add     sp, 2 ;~ 01A2:1CB2
cs=0x1a2;eip=0x001cb5; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 3643 mov     [bp+var_2], ax ;~ 01A2:1CB5
cs=0x1a2;eip=0x001cb8; 	T(OR(ax, ax));	// 3644 or      ax, ax ;~ 01A2:1CB8
cs=0x1a2;eip=0x001cba; 	R(JZ(loc_11cc2));	// 3645 jz      short loc_11CC2 ; jumptable 000118E3 case 49 ;~ 01A2:1CBA
cs=0x1a2;eip=0x001cbc; 	T(MOV(al, *(db*)(raddr(ss,bp+var_2))));	// 3646 mov     al, byte ptr [bp+var_2] ;~ 01A2:1CBC
cs=0x1a2;eip=0x001cbf; 	X(MOV(byte_34f9b, al));	// 3647 mov     byte_34F9B, al ;~ 01A2:1CBF
loc_11cc2:
	// 4612 
cs=0x1a2;eip=0x001cc2; 	T(CMP(byte_34f9b, 0));	// 3651 cmp     byte_34F9B, 0   ; jumptable 000118E3 case 49 ;~ 01A2:1CC2
cs=0x1a2;eip=0x001cc7; 	R(JZ(loc_11c9e));	// 3652 jz      short loc_11C9E ;~ 01A2:1CC7
cs=0x1a2;eip=0x001cc9; 	T(MOV(al, byte_34f9b));	// 3653 mov     al, byte_34F9B ;~ 01A2:1CC9
cs=0x1a2;eip=0x001ccc; 	T(SUB(ah, ah));	// 3654 sub     ah, ah ;~ 01A2:1CCC
cs=0x1a2;eip=0x001cce; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 3655 mov     [bp+var_2], ax ;~ 01A2:1CCE
cs=0x1a2;eip=0x001cd1; 	X(MOV(byte_34f9b, ah));	// 3656 mov     byte_34F9B, ah ;~ 01A2:1CD1
cs=0x1a2;eip=0x001cd5; 	T(CMP(ax, 0x80));	// 3657 cmp     ax, 80h ; '€' ;~ 01A2:1CD5
cs=0x1a2;eip=0x001cd8; 	R(JNZ(loc_11cdd));	// 3658 jnz     short loc_11CDD ;~ 01A2:1CD8
cs=0x1a2;eip=0x001cda; 	R(JMP(loc_11dea));	// 3659 jmp     loc_11DEA ;~ 01A2:1CDA
loc_11cdd:
	// 4613 
cs=0x1a2;eip=0x001cdd; 	T(CMP(ax, 0x0D));	// 3663 cmp     ax, 0Dh ;~ 01A2:1CDD
cs=0x1a2;eip=0x001ce0; 	R(JNZ(loc_11ce5));	// 3664 jnz     short loc_11CE5 ;~ 01A2:1CE0
cs=0x1a2;eip=0x001ce2; 	R(JMP(loc_11dea));	// 3665 jmp     loc_11DEA ;~ 01A2:1CE2
loc_11ce5:
	// 4614 
cs=0x1a2;eip=0x001ce5; 	T(CMP(ax, 0x91));	// 3669 cmp     ax, 91h ; '‘' ;~ 01A2:1CE5
cs=0x1a2;eip=0x001ce8; 	R(JZ(loc_11cf4));	// 3670 jz      short loc_11CF4 ;~ 01A2:1CE8
cs=0x1a2;eip=0x001cea; 	T(CMP(ax, 0x92));	// 3671 cmp     ax, 92h ; '’' ;~ 01A2:1CEA
cs=0x1a2;eip=0x001ced; 	R(JZ(loc_11cf4));	// 3672 jz      short loc_11CF4 ;~ 01A2:1CED
cs=0x1a2;eip=0x001cef; 	T(CMP(ax, 0x94));	// 3673 cmp     ax, 94h ; '”' ;~ 01A2:1CEF
cs=0x1a2;eip=0x001cf2; 	R(JNZ(loc_11cff));	// 3674 jnz     short loc_11CFF ;~ 01A2:1CF2
loc_11cf4:
	// 4615 
cs=0x1a2;eip=0x001cf4; 	T(CMP(byte_2c802, 1));	// 3678 cmp     byte_2C802, 1 ;~ 01A2:1CF4
cs=0x1a2;eip=0x001cf9; 	R(JBE(loc_11cff));	// 3679 jbe     short loc_11CFF ;~ 01A2:1CF9
cs=0x1a2;eip=0x001cfb; 	X(DEC(byte_2c802));	// 3680 dec     byte_2C802 ;~ 01A2:1CFB
loc_11cff:
	// 4616 
cs=0x1a2;eip=0x001cff; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x96));	// 3684 cmp     [bp+var_2], 96h ; '–' ;~ 01A2:1CFF
cs=0x1a2;eip=0x001d04; 	R(JZ(loc_11d14));	// 3685 jz      short loc_11D14 ;~ 01A2:1D04
cs=0x1a2;eip=0x001d06; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x98));	// 3686 cmp     [bp+var_2], 98h ;~ 01A2:1D06
cs=0x1a2;eip=0x001d0b; 	R(JZ(loc_11d14));	// 3687 jz      short loc_11D14 ;~ 01A2:1D0B
cs=0x1a2;eip=0x001d0d; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x99));	// 3688 cmp     [bp+var_2], 99h ; '™' ;~ 01A2:1D0D
cs=0x1a2;eip=0x001d12; 	R(JNZ(loc_11d1f));	// 3689 jnz     short loc_11D1F ;~ 01A2:1D12
loc_11d14:
	// 4617 
cs=0x1a2;eip=0x001d14; 	T(CMP(byte_2c802, 9));	// 3693 cmp     byte_2C802, 9 ;~ 01A2:1D14
cs=0x1a2;eip=0x001d19; 	R(JNC(loc_11d1f));	// 3694 jnb     short loc_11D1F ;~ 01A2:1D19
cs=0x1a2;eip=0x001d1b; 	X(INC(byte_2c802));	// 3695 inc     byte_2C802 ;~ 01A2:1D1B
loc_11d1f:
	// 4618 
cs=0x1a2;eip=0x001d1f; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x31));	// 3699 cmp     [bp+var_2], 31h ; '1' ;~ 01A2:1D1F
cs=0x1a2;eip=0x001d23; 	R(JL(loc_11d33));	// 3700 jl      short loc_11D33 ;~ 01A2:1D23
cs=0x1a2;eip=0x001d25; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x39));	// 3701 cmp     [bp+var_2], 39h ; '9' ;~ 01A2:1D25
cs=0x1a2;eip=0x001d29; 	R(JG(loc_11d33));	// 3702 jg      short loc_11D33 ;~ 01A2:1D29
cs=0x1a2;eip=0x001d2b; 	T(MOV(al, *(db*)(raddr(ss,bp+var_2))));	// 3703 mov     al, byte ptr [bp+var_2] ;~ 01A2:1D2B
cs=0x1a2;eip=0x001d2e; 	T(SUB(al, 0x30));	// 3704 sub     al, 30h ; '0' ;~ 01A2:1D2E
cs=0x1a2;eip=0x001d30; 	X(MOV(byte_2c802, al));	// 3705 mov     byte_2C802, al ;~ 01A2:1D30
loc_11d33:
	// 4619 
cs=0x1a2;eip=0x001d33; 	T(MOV(al, byte_2c802));	// 3709 mov     al, byte_2C802 ;~ 01A2:1D33
cs=0x1a2;eip=0x001d36; 	T(ADD(al, 0x30));	// 3710 add     al, 30h ; '0' ;~ 01A2:1D36
cs=0x1a2;eip=0x001d38; 	X(MOV(byte_2da58, al));	// 3711 mov     byte_2DA58, al ;~ 01A2:1D38
cs=0x1a2;eip=0x001d3b; 	T(SUB(ax, ax));	// 3712 sub     ax, ax ;~ 01A2:1D3B
cs=0x1a2;eip=0x001d3d; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 3713 mov     [bp+var_E], ax ;~ 01A2:1D3D
cs=0x1a2;eip=0x001d40; 	X(PUSH(ax));	// 3714 push    ax ;~ 01A2:1D40
cs=0x1a2;eip=0x001d41; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 3715 push    [bp+var_A] ;~ 01A2:1D41
cs=0x1a2;eip=0x001d44; 	R(CALLF(sub_139c2,0));	// 3716 call    sub_139C2 ;~ 01A2:1D44
cs=0x1a2;eip=0x001d49; 	T(ADD(sp, 4));	// 3717 add     sp, 4 ;~ 01A2:1D49
cs=0x1a2;eip=0x001d4c; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 3718 mov     [bp+var_E], ax ;~ 01A2:1D4C
cs=0x1a2;eip=0x001d4f; 	R(JMP(loc_11cc2));	// 3719 jmp     loc_11CC2       ; jumptable 000118E3 case 49 ;~ 01A2:1D4F
loc_11d52:
	// 4620 
cs=0x1a2;eip=0x001d52; 	T(MOV(ax, 2));	// 3723 mov     ax, 2 ;~ 01A2:1D52
cs=0x1a2;eip=0x001d55; 	X(PUSH(ax));	// 3724 push    ax ;~ 01A2:1D55
cs=0x1a2;eip=0x001d56; 	R(CALLF(sub_26ffb,0));	// 3725 call    sub_26FFB ;~ 01A2:1D56
cs=0x1a2;eip=0x001d5b; 	T(ADD(sp, 2));	// 3726 add     sp, 2 ;~ 01A2:1D5B
cs=0x1a2;eip=0x001d5e; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x32));	// 3727 cmp     [bp+arg_0], 32h ; '2' ;~ 01A2:1D5E
cs=0x1a2;eip=0x001d62; 	R(JNZ(loc_11d77));	// 3728 jnz     short loc_11D77 ; jumptable 000118E3 case 50 ;~ 01A2:1D62
cs=0x1a2;eip=0x001d64; 	T(CMP(byte_34f9b, 0x31));	// 3729 cmp     byte_34F9B, 31h ; '1' ;~ 01A2:1D64
cs=0x1a2;eip=0x001d69; 	R(JC(loc_11d72));	// 3730 jb      short loc_11D72 ;~ 01A2:1D69
cs=0x1a2;eip=0x001d6b; 	T(CMP(byte_34f9b, 0x39));	// 3731 cmp     byte_34F9B, 39h ; '9' ;~ 01A2:1D6B
cs=0x1a2;eip=0x001d70; 	R(JBE(loc_11d77));	// 3732 jbe     short loc_11D77 ; jumptable 000118E3 case 50 ;~ 01A2:1D70
loc_11d72:
	// 4621 
cs=0x1a2;eip=0x001d72; 	X(MOV(byte_34f9b, 0));	// 3735 mov     byte_34F9B, 0 ;~ 01A2:1D72
loc_11d77:
	// 4622 
cs=0x1a2;eip=0x001d77; 	T(CMP(byte_34f9b, 0));	// 3739 cmp     byte_34F9B, 0   ; jumptable 000118E3 case 50 ;~ 01A2:1D77
cs=0x1a2;eip=0x001d7c; 	R(JZ(loc_11d52));	// 3740 jz      short loc_11D52 ;~ 01A2:1D7C
cs=0x1a2;eip=0x001d7e; 	T(MOV(al, byte_34f9b));	// 3741 mov     al, byte_34F9B ;~ 01A2:1D7E
cs=0x1a2;eip=0x001d81; 	X(MOV(byte_3a3a0, al));	// 3742 mov     byte_3A3A0, al ;~ 01A2:1D81
cs=0x1a2;eip=0x001d84; 	R(JMP(loc_1191f));	// 3743 jmp     loc_1191F ;~ 01A2:1D84
def_118e3:
	// 4623 
cs=0x1a2;eip=0x001d88; 	T(MOV(ax, 0x0C));	// 3750 mov     ax, 0Ch         ; jumptable 000118E3 default case, cases 6,10,11,14,15,25,27-29,32,34,41,42,47,48 ;~ 01A2:1D88
cs=0x1a2;eip=0x001d8b; 	R(JMP(loc_11b87));	// 3751 jmp     loc_11B87 ;~ 01A2:1D8B
loc_11dea:
	// 4624 
cs=0x1a2;eip=0x001dea; 	T(CMP(*(dw*)(raddr(ss,bp+var_10)), 0));	// 3803 cmp     [bp+var_10], 0 ;~ 01A2:1DEA
cs=0x1a2;eip=0x001dee; 	R(JNZ(loc_11e0a));	// 3804 jnz     short loc_11E0A ;~ 01A2:1DEE
cs=0x1a2;eip=0x001df0; 	T(MOV(ax, 0x85));	// 3805 mov     ax, 85h ; '…' ;~ 01A2:1DF0
cs=0x1a2;eip=0x001df3; 	X(PUSH(ax));	// 3806 push    ax ;~ 01A2:1DF3
cs=0x1a2;eip=0x001df4; 	T(MOV(ax, 0x71));	// 3807 mov     ax, 71h ; 'q' ;~ 01A2:1DF4
cs=0x1a2;eip=0x001df7; 	X(PUSH(ax));	// 3808 push    ax ;~ 01A2:1DF7
cs=0x1a2;eip=0x001df8; 	T(MOV(ax, 0x13F));	// 3809 mov     ax, 13Fh ;~ 01A2:1DF8
cs=0x1a2;eip=0x001dfb; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_6))));	// 3810 sub     ax, [bp+var_6] ;~ 01A2:1DFB
cs=0x1a2;eip=0x001dfe; 	X(PUSH(ax));	// 3811 push    ax ;~ 01A2:1DFE
cs=0x1a2;eip=0x001dff; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 3812 push    [bp+var_6] ;~ 01A2:1DFF
cs=0x1a2;eip=0x001e02; 	R(CALLF(sub_1d4c3,0));	// 3813 call    sub_1D4C3 ;~ 01A2:1E02
cs=0x1a2;eip=0x001e07; 	T(ADD(sp, 8));	// 3814 add     sp, 8 ;~ 01A2:1E07
loc_11e0a:
	// 4625 
cs=0x1a2;eip=0x001e0a; 	T(MOV(al, *(db*)(((db*)&word_2bee0))));	// 3817 mov     al, byte ptr word_2BEE0 ;~ 01A2:1E0A
cs=0x1a2;eip=0x001e0d; 	X(MOV(byte_37548, al));	// 3818 mov     byte_37548, al ;~ 01A2:1E0D
cs=0x1a2;eip=0x001e10; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_12))));	// 3819 mov     ax, [bp+var_12] ;~ 01A2:1E10
cs=0x1a2;eip=0x001e13; 	X(MOV(word_2beda, ax));	// 3820 mov     word_2BEDA, ax ;~ 01A2:1E13
cs=0x1a2;eip=0x001e16; 	X(PUSH(ax));	// 3821 push    ax ;~ 01A2:1E16
cs=0x1a2;eip=0x001e17; 	R(CALLF(sub_2714e,0));	// 3822 call    far ptr sub_2714E ;~ 01A2:1E17
cs=0x1a2;eip=0x001e1c; 	T(ADD(sp, 2));	// 3823 add     sp, 2 ;~ 01A2:1E1C
cs=0x1a2;eip=0x001e1f; 	T(MOV(ax, 1));	// 3824 mov     ax, 1 ;~ 01A2:1E1F
cs=0x1a2;eip=0x001e22; 	X(PUSH(ax));	// 3825 push    ax ;~ 01A2:1E22
cs=0x1a2;eip=0x001e23; 	R(CALLF(sub_270e2,0));	// 3826 call    far ptr sub_270E2 ;~ 01A2:1E23
cs=0x1a2;eip=0x001e28; 	T(ADD(sp, 2));	// 3827 add     sp, 2 ;~ 01A2:1E28
cs=0x1a2;eip=0x001e2b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 3828 mov     ax, [bp+var_C] ;~ 01A2:1E2B
cs=0x1a2;eip=0x001e2e; 	X(MOV(word_34f23, ax));	// 3829 mov     word_34F23, ax ;~ 01A2:1E2E
cs=0x1a2;eip=0x001e31; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_16))));	// 3830 mov     ax, [bp+var_16] ;~ 01A2:1E31
cs=0x1a2;eip=0x001e34; 	X(MOV(word_34f21, ax));	// 3831 mov     word_34F21, ax ;~ 01A2:1E34
cs=0x1a2;eip=0x001e37; 	X(MOV(word_37916, 0));	// 3832 mov     word_37916, 0 ;~ 01A2:1E37
cs=0x1a2;eip=0x001e3d; 	X(POP(si));	// 3833 pop     si ;~ 01A2:1E3D
cs=0x1a2;eip=0x001e3e; 	X(POP(di));	// 3834 pop     di ;~ 01A2:1E3E
cs=0x1a2;eip=0x001e3f; 	T(MOV(sp, bp));	// 3835 mov     sp, bp ;~ 01A2:1E3F
cs=0x1a2;eip=0x001e41; 	X(POP(bp));	// 3836 pop     bp ;~ 01A2:1E41
cs=0x1a2;eip=0x001e42; 	R(RETF(0));	// 3837 retf ;~ 01A2:1E42
sub_11e44:
	// 3847 
#undef var_2
#define var_2 -2
	// 3850 var_2           = word ptr -2 ;~ 01A2:1E44
#undef arg_0
#define arg_0 6
	// 3851 arg_0           = word ptr  6 ;~ 01A2:1E44
ret_1a2_1e44:
	// 4626 
cs=0x1a2;eip=0x001e44; 	X(PUSH(bp));	// 3853 push    bp ;~ 01A2:1E44
cs=0x1a2;eip=0x001e45; 	T(MOV(bp, sp));	// 3854 mov     bp, sp ;~ 01A2:1E45
cs=0x1a2;eip=0x001e47; 	T(SUB(sp, 2));	// 3855 sub     sp, 2 ;~ 01A2:1E47
cs=0x1a2;eip=0x001e4a; 	T(SUB(al, al));	// 3856 sub     al, al ;~ 01A2:1E4A
cs=0x1a2;eip=0x001e4c; 	X(MOV(byte_352bb, al));	// 3857 mov     byte_352BB, al ;~ 01A2:1E4C
cs=0x1a2;eip=0x001e4f; 	T(SUB(ah, ah));	// 3858 sub     ah, ah ;~ 01A2:1E4F
cs=0x1a2;eip=0x001e51; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 3859 mov     [bp+var_2], ax ;~ 01A2:1E51
cs=0x1a2;eip=0x001e54; 	T(CMP(word_2bed2, 0));	// 3860 cmp     word_2BED2, 0 ;~ 01A2:1E54
cs=0x1a2;eip=0x001e59; 	R(JZ(loc_11e94));	// 3861 jz      short loc_11E94 ;~ 01A2:1E59
cs=0x1a2;eip=0x001e5b; 	T(MOV(ax, word_2bf02));	// 3862 mov     ax, word_2BF02 ;~ 01A2:1E5B
cs=0x1a2;eip=0x001e5e; 	X(MOV(word_2bf04, ax));	// 3863 mov     word_2BF04, ax ;~ 01A2:1E5E
cs=0x1a2;eip=0x001e61; 	T(MOV(ax, word_2bf0c));	// 3864 mov     ax, word_2BF0C ;~ 01A2:1E61
cs=0x1a2;eip=0x001e64; 	X(MOV(word_2bf0e, ax));	// 3865 mov     word_2BF0E, ax ;~ 01A2:1E64
cs=0x1a2;eip=0x001e67; 	R(CALLF(sub_1c898,0));	// 3866 call    sub_1C898 ;~ 01A2:1E67
cs=0x1a2;eip=0x001e6c; 	T(OR(ax, ax));	// 3867 or      ax, ax ;~ 01A2:1E6C
cs=0x1a2;eip=0x001e6e; 	R(JZ(loc_11e7a));	// 3868 jz      short loc_11E7A ;~ 01A2:1E6E
cs=0x1a2;eip=0x001e70; 	X(ADD(byte_352bb, 0x10));	// 3869 add     byte_352BB, 10h ;~ 01A2:1E70
cs=0x1a2;eip=0x001e75; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x0D));	// 3870 mov     [bp+var_2], 0Dh ;~ 01A2:1E75
loc_11e7a:
	// 4627 
cs=0x1a2;eip=0x001e7a; 	X(PUSH(cs));	// 3873 push    cs ;~ 01A2:1E7A
cs=0x1a2;eip=0x001e7b; 	R(CALL(sub_11ea4,0));	// 3874 call    near ptr sub_11EA4 ;~ 01A2:1E7B
cs=0x1a2;eip=0x001e7e; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0));	// 3875 cmp     [bp+var_2], 0 ;~ 01A2:1E7E
cs=0x1a2;eip=0x001e82; 	R(JNZ(loc_11e94));	// 3876 jnz     short loc_11E94 ;~ 01A2:1E82
cs=0x1a2;eip=0x001e84; 	T(MOV(bl, byte_352bb));	// 3877 mov     bl, byte_352BB ;~ 01A2:1E84
cs=0x1a2;eip=0x001e88; 	T(AND(bx, 0x0F));	// 3878 and     bx, 0Fh ;~ 01A2:1E88
cs=0x1a2;eip=0x001e8b; 	T(MOV(al, *(raddr(ds,bx+0x0AA))));	// 3879 mov     al, [bx+0AAh] ;~ 01A2:1E8B
cs=0x1a2;eip=0x001e8f; 	T(SUB(ah, ah));	// 3880 sub     ah, ah ;~ 01A2:1E8F
cs=0x1a2;eip=0x001e91; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 3881 mov     [bp+var_2], ax ;~ 01A2:1E91
loc_11e94:
	// 4628 
cs=0x1a2;eip=0x001e94; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 3885 mov     bx, [bp+arg_0] ;~ 01A2:1E94
cs=0x1a2;eip=0x001e97; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 3886 mov     ax, [bp+var_2] ;~ 01A2:1E97
cs=0x1a2;eip=0x001e9a; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 3887 mov     [bx], ax ;~ 01A2:1E9A
cs=0x1a2;eip=0x001e9c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 3888 mov     ax, [bp+var_2] ;~ 01A2:1E9C
cs=0x1a2;eip=0x001e9f; 	T(MOV(sp, bp));	// 3889 mov     sp, bp ;~ 01A2:1E9F
cs=0x1a2;eip=0x001ea1; 	X(POP(bp));	// 3890 pop     bp ;~ 01A2:1EA1
cs=0x1a2;eip=0x001ea2; 	R(RETF(0));	// 3891 retf ;~ 01A2:1EA2
sub_11ea4:
	// 3900 
cs=0x1a2;eip=0x001ea4; 	T(MOV(ax, word_2befc));	// 3902 mov     ax, word_2BEFC ;~ 01A2:1EA4
ret_1a2_1ea7:
	// 4629 
cs=0x1a2;eip=0x001ea7; 	T(CMP(word_2bf02, ax));	// 3903 cmp     word_2BF02, ax ;~ 01A2:1EA7
cs=0x1a2;eip=0x001eab; 	R(JNC(loc_11eb3));	// 3904 jnb     short loc_11EB3 ;~ 01A2:1EAB
cs=0x1a2;eip=0x001ead; 	T(MOV(ax, word_2bf02));	// 3905 mov     ax, word_2BF02 ;~ 01A2:1EAD
cs=0x1a2;eip=0x001eb0; 	X(MOV(word_2befc, ax));	// 3906 mov     word_2BEFC, ax ;~ 01A2:1EB0
loc_11eb3:
	// 4630 
cs=0x1a2;eip=0x001eb3; 	T(MOV(ax, word_2bf00));	// 3909 mov     ax, word_2BF00 ;~ 01A2:1EB3
cs=0x1a2;eip=0x001eb6; 	T(CMP(word_2bf02, ax));	// 3910 cmp     word_2BF02, ax ;~ 01A2:1EB6
cs=0x1a2;eip=0x001eba; 	R(JBE(loc_11ec2));	// 3911 jbe     short loc_11EC2 ;~ 01A2:1EBA
cs=0x1a2;eip=0x001ebc; 	T(MOV(ax, word_2bf02));	// 3912 mov     ax, word_2BF02 ;~ 01A2:1EBC
cs=0x1a2;eip=0x001ebf; 	X(MOV(word_2bf00, ax));	// 3913 mov     word_2BF00, ax ;~ 01A2:1EBF
loc_11ec2:
	// 4631 
cs=0x1a2;eip=0x001ec2; 	T(MOV(ax, word_2bf06));	// 3916 mov     ax, word_2BF06 ;~ 01A2:1EC2
cs=0x1a2;eip=0x001ec5; 	T(CMP(word_2bf0c, ax));	// 3917 cmp     word_2BF0C, ax ;~ 01A2:1EC5
cs=0x1a2;eip=0x001ec9; 	R(JNC(loc_11ed1));	// 3918 jnb     short loc_11ED1 ;~ 01A2:1EC9
cs=0x1a2;eip=0x001ecb; 	T(MOV(ax, word_2bf0c));	// 3919 mov     ax, word_2BF0C ;~ 01A2:1ECB
cs=0x1a2;eip=0x001ece; 	X(MOV(word_2bf06, ax));	// 3920 mov     word_2BF06, ax ;~ 01A2:1ECE
loc_11ed1:
	// 4632 
cs=0x1a2;eip=0x001ed1; 	T(MOV(ax, word_2bf0a));	// 3923 mov     ax, word_2BF0A ;~ 01A2:1ED1
cs=0x1a2;eip=0x001ed4; 	T(CMP(word_2bf0c, ax));	// 3924 cmp     word_2BF0C, ax ;~ 01A2:1ED4
cs=0x1a2;eip=0x001ed8; 	R(JBE(loc_11ee0));	// 3925 jbe     short loc_11EE0 ;~ 01A2:1ED8
cs=0x1a2;eip=0x001eda; 	T(MOV(ax, word_2bf0c));	// 3926 mov     ax, word_2BF0C ;~ 01A2:1EDA
cs=0x1a2;eip=0x001edd; 	X(MOV(word_2bf0a, ax));	// 3927 mov     word_2BF0A, ax ;~ 01A2:1EDD
loc_11ee0:
	// 4633 
cs=0x1a2;eip=0x001ee0; 	T(MOV(ax, word_2bf00));	// 3930 mov     ax, word_2BF00 ;~ 01A2:1EE0
cs=0x1a2;eip=0x001ee3; 	T(SUB(ax, word_2befe));	// 3931 sub     ax, word_2BEFE ;~ 01A2:1EE3
cs=0x1a2;eip=0x001ee7; 	T(MOV(cl, 3));	// 3932 mov     cl, 3 ;~ 01A2:1EE7
cs=0x1a2;eip=0x001ee9; 	T(SHR(ax, cl));	// 3933 shr     ax, cl ;~ 01A2:1EE9
cs=0x1a2;eip=0x001eeb; 	T(ADD(ax, word_2befe));	// 3934 add     ax, word_2BEFE ;~ 01A2:1EEB
cs=0x1a2;eip=0x001eef; 	T(CMP(ax, word_2bf02));	// 3935 cmp     ax, word_2BF02 ;~ 01A2:1EEF
cs=0x1a2;eip=0x001ef3; 	R(JNC(loc_11efc));	// 3936 jnb     short loc_11EFC ;~ 01A2:1EF3
cs=0x1a2;eip=0x001ef5; 	X(ADD(byte_352bb, 8));	// 3937 add     byte_352BB, 8 ;~ 01A2:1EF5
cs=0x1a2;eip=0x001efa; 	R(JMP(loc_11f16));	// 3938 jmp     short loc_11F16 ;~ 01A2:1EFA
loc_11efc:
	// 4634 
cs=0x1a2;eip=0x001efc; 	T(MOV(ax, word_2befe));	// 3942 mov     ax, word_2BEFE ;~ 01A2:1EFC
cs=0x1a2;eip=0x001eff; 	T(MOV(cx, ax));	// 3943 mov     cx, ax ;~ 01A2:1EFF
cs=0x1a2;eip=0x001f01; 	T(SUB(cx, word_2befc));	// 3944 sub     cx, word_2BEFC ;~ 01A2:1F01
cs=0x1a2;eip=0x001f05; 	T(SHR(cx, 1));	// 3945 shr     cx, 1 ;~ 01A2:1F05
cs=0x1a2;eip=0x001f07; 	T(SHR(cx, 1));	// 3946 shr     cx, 1 ;~ 01A2:1F07
cs=0x1a2;eip=0x001f09; 	T(SUB(ax, cx));	// 3947 sub     ax, cx ;~ 01A2:1F09
cs=0x1a2;eip=0x001f0b; 	T(CMP(ax, word_2bf02));	// 3948 cmp     ax, word_2BF02 ;~ 01A2:1F0B
cs=0x1a2;eip=0x001f0f; 	R(JBE(loc_11f16));	// 3949 jbe     short loc_11F16 ;~ 01A2:1F0F
cs=0x1a2;eip=0x001f11; 	X(ADD(byte_352bb, 4));	// 3950 add     byte_352BB, 4 ;~ 01A2:1F11
loc_11f16:
	// 4635 
cs=0x1a2;eip=0x001f16; 	T(MOV(ax, word_2bf0a));	// 3954 mov     ax, word_2BF0A ;~ 01A2:1F16
cs=0x1a2;eip=0x001f19; 	T(SUB(ax, word_2bf08));	// 3955 sub     ax, word_2BF08 ;~ 01A2:1F19
cs=0x1a2;eip=0x001f1d; 	T(SUB(dx, dx));	// 3956 sub     dx, dx ;~ 01A2:1F1D
cs=0x1a2;eip=0x001f1f; 	T(MOV(cx, 6));	// 3957 mov     cx, 6 ;~ 01A2:1F1F
cs=0x1a2;eip=0x001f22; 	T(DIV2(cx));	// 3958 div     cx ;~ 01A2:1F22
cs=0x1a2;eip=0x001f24; 	T(ADD(ax, word_2bf08));	// 3959 add     ax, word_2BF08 ;~ 01A2:1F24
cs=0x1a2;eip=0x001f28; 	T(CMP(ax, word_2bf0c));	// 3960 cmp     ax, word_2BF0C ;~ 01A2:1F28
cs=0x1a2;eip=0x001f2c; 	R(JNC(loc_11f34));	// 3961 jnb     short loc_11F34 ;~ 01A2:1F2C
cs=0x1a2;eip=0x001f2e; 	X(ADD(byte_352bb, 2));	// 3962 add     byte_352BB, 2 ;~ 01A2:1F2E
cs=0x1a2;eip=0x001f33; 	R(RETF(0));	// 3963 retf ;~ 01A2:1F33
loc_11f34:
	// 4636 
cs=0x1a2;eip=0x001f34; 	T(MOV(ax, word_2bf08));	// 3967 mov     ax, word_2BF08 ;~ 01A2:1F34
cs=0x1a2;eip=0x001f37; 	T(MOV(cx, ax));	// 3968 mov     cx, ax ;~ 01A2:1F37
cs=0x1a2;eip=0x001f39; 	T(SUB(cx, word_2bf06));	// 3969 sub     cx, word_2BF06 ;~ 01A2:1F39
cs=0x1a2;eip=0x001f3d; 	T(SHR(cx, 1));	// 3970 shr     cx, 1 ;~ 01A2:1F3D
cs=0x1a2;eip=0x001f3f; 	T(SHR(cx, 1));	// 3971 shr     cx, 1 ;~ 01A2:1F3F
cs=0x1a2;eip=0x001f41; 	T(SUB(ax, cx));	// 3972 sub     ax, cx ;~ 01A2:1F41
cs=0x1a2;eip=0x001f43; 	T(CMP(ax, word_2bf0c));	// 3973 cmp     ax, word_2BF0C ;~ 01A2:1F43
cs=0x1a2;eip=0x001f47; 	R(JBE(locret_11f4d));	// 3974 jbe     short locret_11F4D ;~ 01A2:1F47
cs=0x1a2;eip=0x001f49; 	X(INC(byte_352bb));	// 3975 inc     byte_352BB ;~ 01A2:1F49
locret_11f4d:
	// 4637 
cs=0x1a2;eip=0x001f4d; 	R(RETF(0));	// 3978 retf ;~ 01A2:1F4D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kdef_118e3: 	goto def_118e3;
        case m2c::kloc_100b0: 	goto loc_100b0;
        case m2c::kloc_100b3: 	goto loc_100b3;
        case m2c::kloc_10102: 	goto loc_10102;
        case m2c::kloc_10105: 	goto loc_10105;
        case m2c::kloc_10156: 	goto loc_10156;
        case m2c::kloc_1016d: 	goto loc_1016d;
        case m2c::kloc_10172: 	goto loc_10172;
        case m2c::kloc_10178: 	goto loc_10178;
        case m2c::kloc_1019e: 	goto loc_1019e;
        case m2c::kloc_101af: 	goto loc_101af;
        case m2c::kloc_101b8: 	goto loc_101b8;
        case m2c::kloc_101ce: 	goto loc_101ce;
        case m2c::kloc_101e1: 	goto loc_101e1;
        case m2c::kloc_10203: 	goto loc_10203;
        case m2c::kloc_1020f: 	goto loc_1020f;
        case m2c::kloc_1021b: 	goto loc_1021b;
        case m2c::kloc_10227: 	goto loc_10227;
        case m2c::kloc_1023e: 	goto loc_1023e;
        case m2c::kloc_10246: 	goto loc_10246;
        case m2c::kloc_10264: 	goto loc_10264;
        case m2c::kloc_1026c: 	goto loc_1026c;
        case m2c::kloc_10279: 	goto loc_10279;
        case m2c::kloc_1027c: 	goto loc_1027c;
        case m2c::kloc_10285: 	goto loc_10285;
        case m2c::kloc_1028a: 	goto loc_1028a;
        case m2c::kloc_102ba: 	goto loc_102ba;
        case m2c::kloc_102c2: 	goto loc_102c2;
        case m2c::kloc_102c5: 	goto loc_102c5;
        case m2c::kloc_102de: 	goto loc_102de;
        case m2c::kloc_102e1: 	goto loc_102e1;
        case m2c::kloc_102ee: 	goto loc_102ee;
        case m2c::kloc_102f6: 	goto loc_102f6;
        case m2c::kloc_10328: 	goto loc_10328;
        case m2c::kloc_1035d: 	goto loc_1035d;
        case m2c::kloc_10408: 	goto loc_10408;
        case m2c::kloc_1040d: 	goto loc_1040d;
        case m2c::kloc_10456: 	goto loc_10456;
        case m2c::kloc_10467: 	goto loc_10467;
        case m2c::kloc_10472: 	goto loc_10472;
        case m2c::kloc_10484: 	goto loc_10484;
        case m2c::kloc_104a3: 	goto loc_104a3;
        case m2c::kloc_104af: 	goto loc_104af;
        case m2c::kloc_104d6: 	goto loc_104d6;
        case m2c::kloc_1050d: 	goto loc_1050d;
        case m2c::kloc_1052b: 	goto loc_1052b;
        case m2c::kloc_10546: 	goto loc_10546;
        case m2c::kloc_1054b: 	goto loc_1054b;
        case m2c::kloc_10562: 	goto loc_10562;
        case m2c::kloc_10612: 	goto loc_10612;
        case m2c::kloc_10617: 	goto loc_10617;
        case m2c::kloc_1063e: 	goto loc_1063e;
        case m2c::kloc_10667: 	goto loc_10667;
        case m2c::kloc_106ab: 	goto loc_106ab;
        case m2c::kloc_106b6: 	goto loc_106b6;
        case m2c::kloc_106ca: 	goto loc_106ca;
        case m2c::kloc_106e7: 	goto loc_106e7;
        case m2c::kloc_106ec: 	goto loc_106ec;
        case m2c::kloc_106f0: 	goto loc_106f0;
        case m2c::kloc_10710: 	goto loc_10710;
        case m2c::kloc_10755: 	goto loc_10755;
        case m2c::kloc_10762: 	goto loc_10762;
        case m2c::kloc_10766: 	goto loc_10766;
        case m2c::kloc_10772: 	goto loc_10772;
        case m2c::kloc_1078e: 	goto loc_1078e;
        case m2c::kloc_107af: 	goto loc_107af;
        case m2c::kloc_107b4: 	goto loc_107b4;
        case m2c::kloc_107b8: 	goto loc_107b8;
        case m2c::kloc_107c1: 	goto loc_107c1;
        case m2c::kloc_107d2: 	goto loc_107d2;
        case m2c::kloc_10833: 	goto loc_10833;
        case m2c::kloc_10849: 	goto loc_10849;
        case m2c::kloc_1085a: 	goto loc_1085a;
        case m2c::kloc_10868: 	goto loc_10868;
        case m2c::kloc_10898: 	goto loc_10898;
        case m2c::kloc_108d2: 	goto loc_108d2;
        case m2c::kloc_108ed: 	goto loc_108ed;
        case m2c::kloc_108f8: 	goto loc_108f8;
        case m2c::kloc_10904: 	goto loc_10904;
        case m2c::kloc_10910: 	goto loc_10910;
        case m2c::kloc_1091c: 	goto loc_1091c;
        case m2c::kloc_109d8: 	goto loc_109d8;
        case m2c::kloc_10a50: 	goto loc_10a50;
        case m2c::kloc_10a63: 	goto loc_10a63;
        case m2c::kloc_10a87: 	goto loc_10a87;
        case m2c::kloc_10a9a: 	goto loc_10a9a;
        case m2c::kloc_10a9f: 	goto loc_10a9f;
        case m2c::kloc_10b32: 	goto loc_10b32;
        case m2c::kloc_10b45: 	goto loc_10b45;
        case m2c::kloc_10b48: 	goto loc_10b48;
        case m2c::kloc_10b82: 	goto loc_10b82;
        case m2c::kloc_10b9e: 	goto loc_10b9e;
        case m2c::kloc_10bc8: 	goto loc_10bc8;
        case m2c::kloc_10bce: 	goto loc_10bce;
        case m2c::kloc_10bd4: 	goto loc_10bd4;
        case m2c::kloc_10bdc: 	goto loc_10bdc;
        case m2c::kloc_10c54: 	goto loc_10c54;
        case m2c::kloc_10c61: 	goto loc_10c61;
        case m2c::kloc_10c73: 	goto loc_10c73;
        case m2c::kloc_10cae: 	goto loc_10cae;
        case m2c::kloc_10d4c: 	goto loc_10d4c;
        case m2c::kloc_10d57: 	goto loc_10d57;
        case m2c::kloc_10d9a: 	goto loc_10d9a;
        case m2c::kloc_10da8: 	goto loc_10da8;
        case m2c::kloc_10dac: 	goto loc_10dac;
        case m2c::kloc_10daf: 	goto loc_10daf;
        case m2c::kloc_10df1: 	goto loc_10df1;
        case m2c::kloc_10e2e: 	goto loc_10e2e;
        case m2c::kloc_10e3c: 	goto loc_10e3c;
        case m2c::kloc_10e40: 	goto loc_10e40;
        case m2c::kloc_10e43: 	goto loc_10e43;
        case m2c::kloc_10eac: 	goto loc_10eac;
        case m2c::kloc_10eba: 	goto loc_10eba;
        case m2c::kloc_10ebe: 	goto loc_10ebe;
        case m2c::kloc_10ec1: 	goto loc_10ec1;
        case m2c::kloc_10f18: 	goto loc_10f18;
        case m2c::kloc_10f26: 	goto loc_10f26;
        case m2c::kloc_10f2a: 	goto loc_10f2a;
        case m2c::kloc_10f2d: 	goto loc_10f2d;
        case m2c::kloc_10fa0: 	goto loc_10fa0;
        case m2c::kloc_10fb5: 	goto loc_10fb5;
        case m2c::kloc_10fd0: 	goto loc_10fd0;
        case m2c::kloc_11004: 	goto loc_11004;
        case m2c::kloc_1100f: 	goto loc_1100f;
        case m2c::kloc_1101b: 	goto loc_1101b;
        case m2c::kloc_1103e: 	goto loc_1103e;
        case m2c::kloc_11065: 	goto loc_11065;
        case m2c::kloc_11087: 	goto loc_11087;
        case m2c::kloc_110a9: 	goto loc_110a9;
        case m2c::kloc_110c6: 	goto loc_110c6;
        case m2c::kloc_110d1: 	goto loc_110d1;
        case m2c::kloc_110ee: 	goto loc_110ee;
        case m2c::kloc_11115: 	goto loc_11115;
        case m2c::kloc_1114e: 	goto loc_1114e;
        case m2c::kloc_1116b: 	goto loc_1116b;
        case m2c::kloc_1116e: 	goto loc_1116e;
        case m2c::kloc_1118a: 	goto loc_1118a;
        case m2c::kloc_111b2: 	goto loc_111b2;
        case m2c::kloc_111b5: 	goto loc_111b5;
        case m2c::kloc_111cd: 	goto loc_111cd;
        case m2c::kloc_111fa: 	goto loc_111fa;
        case m2c::kloc_11241: 	goto loc_11241;
        case m2c::kloc_11263: 	goto loc_11263;
        case m2c::kloc_11285: 	goto loc_11285;
        case m2c::kloc_112f1: 	goto loc_112f1;
        case m2c::kloc_11313: 	goto loc_11313;
        case m2c::kloc_11335: 	goto loc_11335;
        case m2c::kloc_11344: 	goto loc_11344;
        case m2c::kloc_11349: 	goto loc_11349;
        case m2c::kloc_1136a: 	goto loc_1136a;
        case m2c::kloc_11378: 	goto loc_11378;
        case m2c::kloc_1137d: 	goto loc_1137d;
        case m2c::kloc_1139e: 	goto loc_1139e;
        case m2c::kloc_113c0: 	goto loc_113c0;
        case m2c::kloc_113e2: 	goto loc_113e2;
        case m2c::kloc_11404: 	goto loc_11404;
        case m2c::kloc_11426: 	goto loc_11426;
        case m2c::kloc_1143d: 	goto loc_1143d;
        case m2c::kloc_1153c: 	goto loc_1153c;
        case m2c::kloc_11566: 	goto loc_11566;
        case m2c::kloc_1156f: 	goto loc_1156f;
        case m2c::kloc_115bc: 	goto loc_115bc;
        case m2c::kloc_115c2: 	goto loc_115c2;
        case m2c::kloc_115e2: 	goto loc_115e2;
        case m2c::kloc_115fc: 	goto loc_115fc;
        case m2c::kloc_11613: 	goto loc_11613;
        case m2c::kloc_1161e: 	goto loc_1161e;
        case m2c::kloc_11624: 	goto loc_11624;
        case m2c::kloc_1165e: 	goto loc_1165e;
        case m2c::kloc_11684: 	goto loc_11684;
        case m2c::kloc_1168e: 	goto loc_1168e;
        case m2c::kloc_11697: 	goto loc_11697;
        case m2c::kloc_116a6: 	goto loc_116a6;
        case m2c::kloc_116f0: 	goto loc_116f0;
        case m2c::kloc_11709: 	goto loc_11709;
        case m2c::kloc_1173c: 	goto loc_1173c;
        case m2c::kloc_1174d: 	goto loc_1174d;
        case m2c::kloc_117ce: 	goto loc_117ce;
        case m2c::kloc_11802: 	goto loc_11802;
        case m2c::kloc_1180f: 	goto loc_1180f;
        case m2c::kloc_118e0: 	goto loc_118e0;
        case m2c::kloc_118ea: 	goto loc_118ea;
        case m2c::kloc_1190d: 	goto loc_1190d;
        case m2c::kloc_11919: 	goto loc_11919;
        case m2c::kloc_1191b: 	goto loc_1191b;
        case m2c::kloc_1191f: 	goto loc_1191f;
        case m2c::kloc_11928: 	goto loc_11928;
        case m2c::kloc_1194b: 	goto loc_1194b;
        case m2c::kloc_11968: 	goto loc_11968;
        case m2c::kloc_11998: 	goto loc_11998;
        case m2c::kloc_119a0: 	goto loc_119a0;
        case m2c::kloc_119d3: 	goto loc_119d3;
        case m2c::kloc_119de: 	goto loc_119de;
        case m2c::kloc_119ef: 	goto loc_119ef;
        case m2c::kloc_119f9: 	goto loc_119f9;
        case m2c::kloc_11a1e: 	goto loc_11a1e;
        case m2c::kloc_11a41: 	goto loc_11a41;
        case m2c::kloc_11a52: 	goto loc_11a52;
        case m2c::kloc_11a5a: 	goto loc_11a5a;
        case m2c::kloc_11a62: 	goto loc_11a62;
        case m2c::kloc_11a85: 	goto loc_11a85;
        case m2c::kloc_11a9d: 	goto loc_11a9d;
        case m2c::kloc_11aa6: 	goto loc_11aa6;
        case m2c::kloc_11aca: 	goto loc_11aca;
        case m2c::kloc_11ae6: 	goto loc_11ae6;
        case m2c::kloc_11aef: 	goto loc_11aef;
        case m2c::kloc_11b04: 	goto loc_11b04;
        case m2c::kloc_11b12: 	goto loc_11b12;
        case m2c::kloc_11b16: 	goto loc_11b16;
        case m2c::kloc_11b2b: 	goto loc_11b2b;
        case m2c::kloc_11b3a: 	goto loc_11b3a;
        case m2c::kloc_11b3e: 	goto loc_11b3e;
        case m2c::kloc_11b55: 	goto loc_11b55;
        case m2c::kloc_11b84: 	goto loc_11b84;
        case m2c::kloc_11b87: 	goto loc_11b87;
        case m2c::kloc_11b94: 	goto loc_11b94;
        case m2c::kloc_11bd3: 	goto loc_11bd3;
        case m2c::kloc_11bdf: 	goto loc_11bdf;
        case m2c::kloc_11be9: 	goto loc_11be9;
        case m2c::kloc_11bf3: 	goto loc_11bf3;
        case m2c::kloc_11c52: 	goto loc_11c52;
        case m2c::kloc_11c9e: 	goto loc_11c9e;
        case m2c::kloc_11cc2: 	goto loc_11cc2;
        case m2c::kloc_11cdd: 	goto loc_11cdd;
        case m2c::kloc_11ce5: 	goto loc_11ce5;
        case m2c::kloc_11cf4: 	goto loc_11cf4;
        case m2c::kloc_11cff: 	goto loc_11cff;
        case m2c::kloc_11d14: 	goto loc_11d14;
        case m2c::kloc_11d1f: 	goto loc_11d1f;
        case m2c::kloc_11d33: 	goto loc_11d33;
        case m2c::kloc_11d52: 	goto loc_11d52;
        case m2c::kloc_11d72: 	goto loc_11d72;
        case m2c::kloc_11d77: 	goto loc_11d77;
        case m2c::kloc_11dea: 	goto loc_11dea;
        case m2c::kloc_11e0a: 	goto loc_11e0a;
        case m2c::kloc_11e7a: 	goto loc_11e7a;
        case m2c::kloc_11e94: 	goto loc_11e94;
        case m2c::kloc_11eb3: 	goto loc_11eb3;
        case m2c::kloc_11ec2: 	goto loc_11ec2;
        case m2c::kloc_11ed1: 	goto loc_11ed1;
        case m2c::kloc_11ee0: 	goto loc_11ee0;
        case m2c::kloc_11efc: 	goto loc_11efc;
        case m2c::kloc_11f16: 	goto loc_11f16;
        case m2c::kloc_11f34: 	goto loc_11f34;
        case m2c::klocret_11f4d: 	goto locret_11f4d;
        case m2c::knullsub_1: 	goto nullsub_1;
        case m2c::knullsub_2: 	goto nullsub_2;
        case m2c::kret_1a2_1446: 	goto ret_1a2_1446;
        case m2c::kret_1a2_151c: 	goto ret_1a2_151c;
        case m2c::kret_1a2_16d0: 	goto ret_1a2_16d0;
        case m2c::kret_1a2_171a: 	goto ret_1a2_171a;
        case m2c::kret_1a2_179c: 	goto ret_1a2_179c;
        case m2c::kret_1a2_18e8: 	goto ret_1a2_18e8;
        case m2c::kret_1a2_1e44: 	goto ret_1a2_1e44;
        case m2c::kret_1a2_1ea7: 	goto ret_1a2_1ea7;
        case m2c::kret_1a2_7e9: 	goto ret_1a2_7e9;
        case m2c::kret_1a2_81c: 	goto ret_1a2_81c;
        case m2c::kret_1a2_ce6: 	goto ret_1a2_ce6;
        case m2c::kret_1a2_d0e: 	goto ret_1a2_d0e;
        case m2c::kret_1a2_df6: 	goto ret_1a2_df6;
        case m2c::kret_1a2_e74: 	goto ret_1a2_e74;
        case m2c::kret_1a2_f5b: 	goto ret_1a2_f5b;
        case m2c::kseg000_proc: 	goto seg000_proc;
        case m2c::ksub_10000: 	goto sub_10000;
        case m2c::ksub_107e4: 	goto sub_107e4;
        case m2c::ksub_10874: 	goto sub_10874;
        case m2c::ksub_1092a: 	goto sub_1092a;
        case m2c::ksub_10d36: 	goto sub_10d36;
        case m2c::ksub_10d62: 	goto sub_10d62;
        case m2c::ksub_10ee0: 	goto sub_10ee0;
        case m2c::ksub_10f58: 	goto sub_10f58;
        case m2c::ksub_10f80: 	goto sub_10f80;
        case m2c::ksub_111d2: 	goto sub_111d2;
        case m2c::ksub_11442: 	goto sub_11442;
        case m2c::ksub_11760: 	goto sub_11760;
        case m2c::ksub_11ea4: 	goto sub_11ea4;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

